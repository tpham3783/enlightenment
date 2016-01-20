#include "e.h"
#include <dlfcn.h>
#include <sys/socket.h>
#include <sys/un.h>
#ifdef HAVE_PULSE
# include <Ecore_Audio.h>
#endif

EINTERN void dnd_init(void);
EINTERN void dnd_shutdown(void);
E_API int e_modapi_shutdown(E_Module *m EINA_UNUSED);

E_API void *e_modapi_init(E_Module *m);

/* local structures */
typedef struct _E_XWayland_Server E_XWayland_Server;
struct _E_XWayland_Server
{
   int disp;
   int abs_fd, unx_fd, wm_fd;
   char lock[256];

   struct wl_display *wl_disp;
   struct wl_event_loop *loop;

   Ecore_Fd_Handler *abs_hdlr, *unx_hdlr;
   Ecore_Event_Handler *sig_hdlr;

   struct 
     {
        pid_t pid;
        /* cleanup_func func; */
     } process;
};

/* local variables */
static E_XWayland_Server *exs;

/* local functions */
static int
_lock_create(int lock)
{
   char pid[16], *end;
   int fd, size;
   pid_t opid;

   /* assemble lock file name */
   snprintf(exs->lock, sizeof(exs->lock), "/tmp/.X%d-lock", lock);

   fd = open(exs->lock, (O_WRONLY | O_CLOEXEC | O_CREAT | O_EXCL), 0444);
   if ((fd < 0) && (errno == EEXIST))
     {
        fd = open(exs->lock, (O_CLOEXEC | O_RDONLY));
        if ((fd < 0) || (read(fd, pid, 11) != 11))
          {
             ERR("Could not read XWayland lock file: %m");
             if (fd >= 0) close(fd);
             return EEXIST;
          }

        opid = strtol(pid, &end, 0);
        if ((end != (pid + 10)))
          {
             if (fd >= 0) close(fd);
             return EEXIST;
          }

        if ((kill(opid, 0) < 0) && (errno == ESRCH))
          {
             /* close stale lock file */
             if (fd >= 0) close(fd);

             if (unlink(exs->lock))
               return EEXIST;
             return EAGAIN;
          }
        close(fd);
        return EEXIST;
     }
   else if (fd < 0)
     {
        ERR("Could not create XWayland lock file: %m");
        return 0;
     }

   /* use the pid of the wayland compositor */
   size = snprintf(pid, sizeof(pid), "%10d\n", getpid());
   if (write(fd, pid, size) != size)
     {
        unlink(exs->lock);
        close(fd);
        return 0;
     }

   close(fd);

   return 1;
}

static int 
_abstract_socket_bind(int disp)
{
   struct sockaddr_un addr;
   socklen_t size, nsize;
   int fd;

   /* try to create a local socket */
   if ((fd = socket(PF_LOCAL, (SOCK_STREAM | SOCK_CLOEXEC), 0)) < 0) 
     return -1;

   ecore_file_mkpath("/tmp/.X11-unix");

   addr.sun_family = AF_LOCAL;
   nsize = snprintf(addr.sun_path, sizeof(addr.sun_path), 
                    "%c/tmp/.X11-unix/X%d", 0, disp);
   size = offsetof(struct sockaddr_un, sun_path) + nsize;

   /* try to bind to the socket */
   if (bind(fd, (struct sockaddr *)&addr, size) < 0)
     {
        ERR("Failed to bind to abstract socket %s: %m", addr.sun_path + 1);
        goto err;
     }

   /* try to listen on the bound socket */
   if (listen(fd, 1) < 0) 
     {
        ERR("Failed to listen to abstract fd: %d", fd);
        goto err;
     }

   return fd;

err:
   close(fd);
   return -1;
}

static int 
_unix_socket_bind(int disp)
{
   struct sockaddr_un addr;
   socklen_t size, nsize;
   int fd;

   /* try to create a local socket */
   if ((fd = socket(PF_LOCAL, (SOCK_STREAM | SOCK_CLOEXEC), 0)) < 0) 
     return -1;

   addr.sun_family = AF_LOCAL;
   nsize = snprintf(addr.sun_path, sizeof(addr.sun_path), 
                    "/tmp/.X11-unix/X%d", disp) + 1;
   size = offsetof(struct sockaddr_un, sun_path) + nsize;

   unlink(addr.sun_path);

   /* try to bind to the socket */
   if (bind(fd, (struct sockaddr *)&addr, size) < 0)
     {
        ERR("Failed to bind to abstract socket %s: %m", addr.sun_path + 1);
        goto err;
     }

   /* try to listen on the bound socket */
   if (listen(fd, 1) < 0) 
     {
        ERR("Failed to listen to unix fd: %d", fd);
        goto err;
     }

   return fd;

err:
   close(fd);
   return -1;
}

static Eina_Bool 
_cb_xserver_event(void *data EINA_UNUSED, Ecore_Fd_Handler *hdlr EINA_UNUSED)
{
   int socks[2], wms[2], fd;
   char disp[8], s[8], xserver[PATH_MAX];
   char abs_fd[8], unx_fd[8], wm_fd[8];

   if (socketpair(AF_UNIX, (SOCK_STREAM | SOCK_CLOEXEC), 0, socks) < 0)
     {
        ERR("XServer Socketpair failed: %m");
        return ECORE_CALLBACK_RENEW;
     }

   if (socketpair(AF_UNIX, (SOCK_STREAM | SOCK_CLOEXEC), 0, wms) < 0)
     {
        ERR("Window Manager Socketpair failed: %m");
        return ECORE_CALLBACK_RENEW;
     }

   exs->process.pid = fork();
   switch (exs->process.pid)
     {
      case 0:
        /* dup will unset CLOEXEC on the client as cloexec closes both ends */
        fd = dup(socks[1]);
        if (fd < 0) goto fail;
        snprintf(s, sizeof(s), "%d", fd);
        setenv("WAYLAND_SOCKET", s, 1);

        fd = dup(exs->abs_fd);
        if (fd < 0) goto fail;
        snprintf(abs_fd, sizeof(abs_fd), "%d", fd);

        fd = dup(exs->unx_fd);
        if (fd < 0) goto fail;
        snprintf(unx_fd, sizeof(unx_fd), "%d", fd);

        fd = dup(wms[1]);
        if (fd < 0) goto fail;
        snprintf(wm_fd, sizeof(wm_fd), "%d", fd);

        /* ignore usr1 and have X send it to the parent process */
        signal(SIGUSR1, SIG_IGN);

        snprintf(disp, sizeof(disp), ":%d", exs->disp);

        snprintf(xserver, sizeof(xserver), "%s", XWAYLAND_BIN);
        DBG("\tLaunching XWayland: %s: %s", xserver, disp);
        if (execl(xserver, xserver, disp, "-rootless", "-listen", abs_fd,
                  "-listen", unx_fd, "-terminate", "-shm",
                  NULL) < 0)
          {
             ERR("Failed to exec XWayland: %m");
          }

fail:
        _exit(EXIT_FAILURE);

      default:
        close(socks[1]);
        e_comp_wl->xwl_client = wl_client_create(exs->wl_disp, socks[0]);

        close(wms[1]);
        exs->wm_fd = wms[0];

        /* TODO: watch process ?? */

        if (exs->abs_hdlr)
          ecore_main_fd_handler_del(exs->abs_hdlr);
        if (exs->unx_hdlr)
          ecore_main_fd_handler_del(exs->unx_hdlr);
        break;
      case -1:
        ERR("Failed to fork: %m");
        break;
     }

   return ECORE_CALLBACK_RENEW;
}

static void
xwayland_fatal(void *d EINA_UNUSED)
{
   /* on xwayland fatal, attempt to restart it */
   e_modapi_shutdown(NULL);
   e_modapi_init(NULL);
}

static void
xnotify(void *d EINA_UNUSED, Ecore_Thread *eth EINA_UNUSED, void *disp)
{
   if (!disp)
     {
        e_util_dialog_internal(_("Error"), _("Could not open X11 socket connection."));
        return;
     }
   assert(ecore_x_init_from_display(disp));
   e_comp_x_init();
   dnd_init();
   ecore_x_io_error_handler_set(xwayland_fatal, NULL);
}

static void
xinit(void *d, Ecore_Thread *eth)
{
   void (*init_threads)(void);
   void *(*open_display)(const char *);
   void *disp = NULL;

   init_threads = dlsym(NULL, "XInitThreads");
   if (init_threads) init_threads();
   open_display = dlsym(NULL, "XOpenDisplay");
   if (open_display) disp = open_display(d);
   free(d);
   ecore_thread_feedback(eth, disp);
}

static void
xend(){}

static Eina_Bool 
_cb_signal_event(void *data EINA_UNUSED, int type EINA_UNUSED, void *event)
{
   Ecore_Event_Signal_User *ev;
   char buf[128];

   ev = event;
   if (ev->number != 1) return ECORE_CALLBACK_RENEW;

   /* NB: SIGUSR1 comes from XWayland Server when it has finished 
    * initialized. */

   DBG("XWayland Finished Init");
   snprintf(buf, sizeof(buf), ":%d", exs->disp);
   ecore_thread_feedback_run(xinit, xnotify, (Ecore_Thread_Cb)xend, (Ecore_Thread_Cb)xend, strdup(buf), 0);

   return ECORE_CALLBACK_CANCEL;
}

static Eina_Bool
setup_lock(void)
{
   do
     {
        /* try to create the xserver lock file */
        switch (_lock_create(exs->disp))
          {
           case EEXIST:
             exs->disp++;
           case EAGAIN:
             continue;
           case 0:
             free(exs);
             return EINA_FALSE;
           default:
             return EINA_TRUE;
          }
     } while (1);
   return EINA_FALSE;
}

static Eina_Bool
error_dialog()
{
   e_util_dialog_internal(_("Error"), _("Cannot launch XWayland from X11 display."));
   return EINA_FALSE;
}

/* module functions */
E_API E_Module_Api e_modapi = { E_MODULE_API_VERSION, "XWayland" };

E_API void *
e_modapi_init(E_Module *m)
{
   char disp[8];

   /* make sure it's a wayland compositor */
   if (e_comp->comp_type != E_PIXMAP_TYPE_WL) return NULL;

   if (getenv("DISPLAY"))
     {
        ecore_timer_add(1.0, error_dialog, NULL);
        return NULL;
     }

   DBG("LOAD XWAYLAND MODULE");

   /* alloc space for server struct */
   if (!(exs = calloc(1, sizeof(E_XWayland_Server))))
     return NULL;

#ifdef HAVE_PULSE
   eo_del(eo_add(ECORE_AUDIO_OUT_PULSE_CLASS, NULL));
#endif

   /* record wayland display */
   exs->wl_disp = e_comp_wl->wl.disp;

   /* default display to zero */
   exs->disp = 0;

   do
     {
        if (!setup_lock()) return NULL;

        /* try to bind abstract socket */
        exs->abs_fd = _abstract_socket_bind(exs->disp);
        if ((exs->abs_fd < 0) && (errno == EADDRINUSE))
          {
             exs->disp++;
             unlink(exs->lock);
             continue;
          }

        /* try to bind unix socket */
        exs->unx_fd = _unix_socket_bind(exs->disp);
        if (exs->unx_fd < 0)
          {
             unlink(exs->lock);
             close(exs->abs_fd);
             free(exs);
             return NULL;
          }
        break;
     } while (1);

   /* assemble x11 display name and set it */
   snprintf(disp, sizeof(disp), ":%d", exs->disp);
   DBG("XWayland Listening on display: %s", disp);
   setenv("DISPLAY", disp, 1);

   /* setup ecore_fd handlers for abstract and unix socket fds */
   exs->abs_hdlr = 
     ecore_main_fd_handler_add(exs->abs_fd, ECORE_FD_READ, 
                               _cb_xserver_event, NULL, NULL, NULL);
   exs->unx_hdlr = 
     ecore_main_fd_handler_add(exs->unx_fd, ECORE_FD_READ, 
                               _cb_xserver_event, NULL, NULL, NULL);

   /* setup listener for SIGUSR1 */
   exs->sig_hdlr = 
     ecore_event_handler_add(ECORE_EVENT_SIGNAL_USER, _cb_signal_event, exs);

   return m;
}

E_API int 
e_modapi_shutdown(E_Module *m EINA_UNUSED)
{
   char path[256];

   if (!exs) return 1;
   dnd_shutdown();

   unlink(exs->lock);

   snprintf(path, sizeof(path), "/tmp/.X11-unix/X%d", exs->disp);
   unlink(path);

   if (exs->abs_hdlr) ecore_main_fd_handler_del(exs->abs_hdlr);
   if (exs->unx_hdlr) ecore_main_fd_handler_del(exs->unx_hdlr);

   close(exs->abs_fd);
   close(exs->unx_fd);

   if (exs->sig_hdlr) ecore_event_handler_del(exs->sig_hdlr);

   free(exs);
   e_util_env_set("DISPLAY", NULL);

   return 1;
}
