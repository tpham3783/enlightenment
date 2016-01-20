#define E_COMP_WL
#include "e.h"
#include "e_comp_wl_screenshooter_server.h"

/* handle include for printing uint64_t */
#define __STDC_FORMAT_MACROS
#include <inttypes.h>

/* When a wayland is released with this macro we can remove the ifdefs */
#ifdef WL_SURFACE_DAMAGE_BUFFER_SINCE_VERSION
# define COMPOSITOR_VERSION 4
#else
# define COMPOSITOR_VERSION 3
#endif

E_API int E_EVENT_WAYLAND_GLOBAL_ADD = -1;

#include "session-recovery-server-protocol.h"

#ifndef EGL_HEIGHT
# define EGL_HEIGHT			0x3056
#endif
#ifndef EGL_WIDTH
# define EGL_WIDTH			0x3057
#endif

/* Resource Data Mapping: (wl_resource_get_user_data)
 *
 * wl_surface == e_pixmap
 * wl_region == eina_tiler
 * wl_subsurface == e_client
 *
 */

static void _e_comp_wl_subsurface_parent_commit(E_Client *ec, Eina_Bool parent_synchronized);

/* local variables */
/* static Eina_Hash *clients_win_hash = NULL; */
static Eina_List *handlers = NULL;
static double _last_event_time = 0.0;

/* local functions */
static void
_e_comp_wl_configure_send(E_Client *ec, Eina_Bool edges)
{
   int w, h;

   if (e_comp_object_frame_exists(ec->frame))
     w = ec->client.w, h = ec->client.h;
   else
     w = ec->w, h = ec->h;
   ec->comp_data->shell.configure_send(ec->comp_data->shell.surface,
                                       edges * e_comp_wl->resize.edges,
                                       w, h);
}

static void
_e_comp_wl_focus_down_set(E_Client *ec)
{
   Ecore_Window win = 0;

   win = e_client_util_pwin_get(ec);
   e_bindings_mouse_grab(E_BINDING_CONTEXT_WINDOW, win);
   e_bindings_wheel_grab(E_BINDING_CONTEXT_WINDOW, win);
}

static void
_e_comp_wl_focus_check(void)
{
   E_Client *ec;

   if (stopping) return;
   ec = e_client_focused_get();
   if ((!ec) || e_pixmap_is_x(ec->pixmap))
     e_grabinput_focus(e_comp->ee_win, E_FOCUS_METHOD_PASSIVE);
}

/* static void */
/* _e_comp_wl_log_cb_print(const char *format, va_list args) */
/* { */
/*    EINA_LOG_DOM_INFO(e_log_dom, format, args); */
/* } */

static Eina_Bool
_e_comp_wl_cb_module_idle(void *data EINA_UNUSED)
{
   const char **m, *mods[] =
   {
      "wl_desktop_shell",
      "xwayland",
      NULL
   };

   /* check if we are still loading modules */
   if (e_module_loading_get()) return ECORE_CALLBACK_RENEW;

   for (m = mods; *m; m++)
     {
        E_Module *mod = e_module_find(*m);

        if (!mod)
          mod = e_module_new(*m);

        if (mod)
          e_module_enable(mod);
     }

   /* FIXME: NB:
    * Do we need to dispatch pending wl events here ?? */

   return ECORE_CALLBACK_CANCEL;
}

static void
_e_comp_wl_evas_cb_show(void *data, Evas *evas EINA_UNUSED, Evas_Object *obj EINA_UNUSED, void *event EINA_UNUSED)
{
   E_Client *ec, *tmp;
   Eina_List *l;

   if (!(ec = data)) return;
   if (e_object_is_del(data)) return;

   if (!ec->override) e_hints_window_visible_set(ec);


   if (!ec->ignored)
     {
        if (ec->new_client)
          ec->take_focus = !starting;
        else
          evas_object_focus_set(ec->frame, !starting);
     }

   EINA_LIST_FOREACH(ec->e.state.video_child, l, tmp)
     evas_object_show(tmp->frame);
}

static void
_e_comp_wl_evas_cb_hide(void *data, Evas *evas EINA_UNUSED, Evas_Object *obj EINA_UNUSED, void *event EINA_UNUSED)
{
   E_Client *ec, *tmp;
   Eina_List *l;

   if (!(ec = data)) return;

   EINA_LIST_FOREACH(ec->e.state.video_child, l, tmp)
     evas_object_hide(tmp->frame);
}

static void
_e_comp_wl_evas_cb_mouse_in(void *data, Evas *evas EINA_UNUSED, Evas_Object *obj EINA_UNUSED, void *event EINA_UNUSED)
{
   E_Client *ec;
   Evas_Event_Mouse_In *ev;
   struct wl_resource *res;
   struct wl_client *wc;
   Eina_List *l;
   uint32_t serial;

   ev = event;
   if (!(ec = data)) return;
   if (e_object_is_del(E_OBJECT(ec))) return;

   if (!ec->comp_data->surface) return;

   e_comp_wl->ptr.ec = ec;
   if (e_comp_wl->drag)
     {
        e_comp_wl_data_device_send_enter(ec);
        return;
     }
   if (!eina_list_count(e_comp_wl->ptr.resources)) return;
   wc = wl_resource_get_client(ec->comp_data->surface);
   serial = wl_display_next_serial(e_comp_wl->wl.disp);
   EINA_LIST_FOREACH(e_comp_wl->ptr.resources, l, res)
     {
        if (!e_comp_wl_input_pointer_check(res)) continue;
        if (wl_resource_get_client(res) != wc) continue;
        wl_pointer_send_enter(res, serial, ec->comp_data->surface,
                              wl_fixed_from_int(ev->canvas.x - ec->client.x),
                              wl_fixed_from_int(ev->canvas.y - ec->client.y));
     }
}

static void
_e_comp_wl_evas_cb_mouse_out(void *data, Evas *evas EINA_UNUSED, Evas_Object *obj EINA_UNUSED, void *event EINA_UNUSED)
{
   E_Client *ec;
   struct wl_resource *res;
   struct wl_client *wc;
   Eina_List *l;
   uint32_t serial;

   if (!(ec = data)) return;
   if (ec->cur_mouse_action) return;
   /* FIXME? this is a hack to just reset the cursor whenever we mouse out. not sure if accurate */
   {
      Evas_Object *o;

      ecore_evas_cursor_get(e_comp->ee, &o, NULL, NULL, NULL);
      if (e_comp->pointer->o_ptr != o)
        e_pointer_object_set(e_comp->pointer, NULL, 0, 0);
   }
   if (e_comp_wl->ptr.ec == ec)
     e_comp_wl->ptr.ec = NULL;
   if (e_object_is_del(E_OBJECT(ec))) return;

   if (!ec->comp_data->surface) return;
   if (e_comp_wl->drag)
     {
        e_comp_wl_data_device_send_leave(ec);
        return;
     }
   if (!eina_list_count(e_comp_wl->ptr.resources)) return;

   wc = wl_resource_get_client(ec->comp_data->surface);
   serial = wl_display_next_serial(e_comp_wl->wl.disp);
   EINA_LIST_FOREACH(e_comp_wl->ptr.resources, l, res)
     {
        if (!e_comp_wl_input_pointer_check(res)) continue;
        if (wl_resource_get_client(res) != wc) continue;
        wl_pointer_send_leave(res, serial, ec->comp_data->surface);
     }
}

static void
_e_comp_wl_send_mouse_move(E_Client *ec, int x, int y, unsigned int timestamp)
{
   struct wl_resource *res;
   struct wl_client *wc;
   Eina_List *l;

   wc = wl_resource_get_client(ec->comp_data->surface);
   EINA_LIST_FOREACH(e_comp_wl->ptr.resources, l, res)
     {
        if (!e_comp_wl_input_pointer_check(res)) continue;
        if (wl_resource_get_client(res) != wc) continue;
        wl_pointer_send_motion(res, timestamp,
                               wl_fixed_from_int(x - ec->client.x),
                               wl_fixed_from_int(y - ec->client.y));
     }
}

static void
_e_comp_wl_evas_cb_mouse_move(void *data, Evas *evas EINA_UNUSED, Evas_Object *obj EINA_UNUSED, void *event)
{
   E_Client *ec = data;
   Evas_Event_Mouse_Move *ev = event;

   if (ec->cur_mouse_action) return;
   if (e_object_is_del(E_OBJECT(ec))) return;
   if (ec->ignored) return;
   if (!ec->comp_data->surface) return;

   if ((!e_comp_wl->drag_client) ||
       (!e_client_has_xwindow(e_comp_wl->drag_client)))
     _e_comp_wl_send_mouse_move(ec, ev->cur.canvas.x, ev->cur.canvas.y, ev->timestamp);
}

static void
_e_comp_wl_evas_cb_mouse_down(void *data, Evas *evas EINA_UNUSED, Evas_Object *obj EINA_UNUSED, void *event)
{
   E_Client *ec = data;
   Evas_Event_Mouse_Down *ev = event;

   e_comp_wl_evas_handle_mouse_button(ec, ev->timestamp, ev->button,
                                      WL_POINTER_BUTTON_STATE_PRESSED);
}

static void
_e_comp_wl_evas_cb_mouse_up(void *data, Evas *evas EINA_UNUSED, Evas_Object *obj EINA_UNUSED, void *event)
{
   E_Client *ec = data;
   Evas_Event_Mouse_Up *ev = event;

   e_comp_wl_evas_handle_mouse_button(ec, ev->timestamp, ev->button,
                                      WL_POINTER_BUTTON_STATE_RELEASED);
}

static void
_e_comp_wl_evas_cb_mouse_wheel(void *data, Evas *evas EINA_UNUSED, Evas_Object *obj EINA_UNUSED, void *event)
{
   E_Client *ec;
   Evas_Event_Mouse_Wheel *ev;
   struct wl_resource *res;
   struct wl_client *wc;
   Eina_List *l;
   uint32_t axis, dir;

   ev = event;
   if (!(ec = data)) return;
   if (ec->cur_mouse_action) return;
   if (e_object_is_del(E_OBJECT(ec))) return;
   if (ec->ignored) return;

   if (ev->direction == 0)
     axis = WL_POINTER_AXIS_VERTICAL_SCROLL;
   else
     axis = WL_POINTER_AXIS_HORIZONTAL_SCROLL;

   if (ev->z < 0)
     dir = -wl_fixed_from_int(abs(ev->z));
   else
     dir = wl_fixed_from_int(ev->z);

   if (!ec->comp_data->surface) return;

   wc = wl_resource_get_client(ec->comp_data->surface);
   EINA_LIST_FOREACH(e_comp_wl->ptr.resources, l, res)
     {
        if (!e_comp_wl_input_pointer_check(res)) continue;
        if (wl_resource_get_client(res) != wc) continue;
        wl_pointer_send_axis(res, ev->timestamp, axis, dir);
     }
}

static void
_e_comp_wl_evas_cb_multi_down(void *data, Evas *evas EINA_UNUSED, Evas_Object *obj EINA_UNUSED, void *event)
{
   Eina_List *l;
   struct wl_client *wc;
   uint32_t serial;
   struct wl_resource *res;
   E_Client *ec = data;
   Evas_Event_Multi_Down *ev = event;
   wl_fixed_t x, y;

   if (!ec->comp_data->surface) return;

   wc = wl_resource_get_client(ec->comp_data->surface);
   serial = wl_display_next_serial(e_comp_wl->wl.disp);

   x = wl_fixed_from_int(ev->canvas.x - ec->client.x);
   y = wl_fixed_from_int(ev->canvas.y - ec->client.y);

   EINA_LIST_FOREACH(e_comp_wl->touch.resources, l, res)
     {
        if (wl_resource_get_client(res) != wc) continue;
        if (!e_comp_wl_input_touch_check(res)) continue;
        wl_touch_send_down(res, serial, ev->timestamp,
                           ec->comp_data->surface, ev->device, x, y);
     }
}

static void
_e_comp_wl_evas_cb_multi_up(void *data, Evas *evas EINA_UNUSED, Evas_Object *obj EINA_UNUSED, void *event)
{
   Eina_List *l;
   struct wl_client *wc;
   uint32_t serial;
   struct wl_resource *res;
   E_Client *ec = data;
   Evas_Event_Multi_Up *ev = event;

   if (!ec->comp_data->surface) return;

   wc = wl_resource_get_client(ec->comp_data->surface);
   serial = wl_display_next_serial(e_comp_wl->wl.disp);

   EINA_LIST_FOREACH(e_comp_wl->touch.resources, l, res)
     {
        if (wl_resource_get_client(res) != wc) continue;
        if (!e_comp_wl_input_touch_check(res)) continue;
        wl_touch_send_up(res, serial, ev->timestamp, ev->device);
     }
}

static void
_e_comp_wl_evas_cb_multi_move(void *data, Evas *evas EINA_UNUSED, Evas_Object *obj EINA_UNUSED, void *event)
{
   Eina_List *l;
   struct wl_client *wc;
   struct wl_resource *res;
   E_Client *ec = data;
   Evas_Event_Multi_Move *ev = event;
   wl_fixed_t x, y;

   if (!ec->comp_data->surface) return;

   wc = wl_resource_get_client(ec->comp_data->surface);

   x = wl_fixed_from_int(ev->cur.canvas.x - ec->client.x);
   y = wl_fixed_from_int(ev->cur.canvas.y - ec->client.y);

   EINA_LIST_FOREACH(e_comp_wl->touch.resources, l, res)
     {
        if (wl_resource_get_client(res) != wc) continue;
        if (!e_comp_wl_input_touch_check(res)) continue;
        wl_touch_send_motion(res, ev->timestamp, ev->device, x, y);
     }
}

static void
_e_comp_wl_client_priority_adjust(int pid, int set, int adj, Eina_Bool use_adj, Eina_Bool adj_child, Eina_Bool do_child)
{
   Eina_List *files;
   char *file, buff[PATH_MAX];
   FILE *f;
   int pid2, ppid;
   int num_read;
   int n;

   if (use_adj)
     n = (getpriority(PRIO_PROCESS, pid) + adj);
   else
     n = set;

   setpriority(PRIO_PROCESS, pid, n);

   if (adj_child)
     use_adj = EINA_TRUE;

   if (!do_child) return;

   files = ecore_file_ls("/proc");
   EINA_LIST_FREE(files, file)
      {
         if (!isdigit(file[0]))
           continue;

         snprintf(buff, sizeof(buff), "/proc/%s/stat", file);
         if ((f = fopen(buff, "r")))
           {
              pid2 = -1;
              ppid = -1;
              num_read = fscanf(f, "%i %*s %*s %i %*s", &pid2, &ppid);
              fclose(f);
              if (num_read == 2 && ppid == pid)
                _e_comp_wl_client_priority_adjust(pid2, set,
                                                  adj, use_adj,
                                                  adj_child, do_child);
           }

         free(file);
      }
}

static void
_e_comp_wl_client_priority_raise(E_Client *ec)
{
   if (ec->netwm.pid <= 0) return;
   if (ec->netwm.pid == getpid()) return;
   _e_comp_wl_client_priority_adjust(ec->netwm.pid,
                                     e_config->priority - 1, -1,
                                     EINA_FALSE, EINA_TRUE, EINA_FALSE);
}

static void
_e_comp_wl_client_priority_normal(E_Client *ec)
{
   if (ec->netwm.pid <= 0) return;
   if (ec->netwm.pid == getpid()) return;
   _e_comp_wl_client_priority_adjust(ec->netwm.pid, e_config->priority, 1,
                                     EINA_FALSE, EINA_TRUE, EINA_FALSE);
}

static Eina_Bool
_e_comp_wl_evas_cb_focus_in_timer(E_Client *ec)
{
   uint32_t serial, *k;
   struct wl_resource *res;
   Eina_List *l;
   double t;

   ec->comp_data->on_focus_timer = NULL;

   if (!e_comp_wl->kbd.focused) return EINA_FALSE;
   serial = wl_display_next_serial(e_comp_wl->wl.disp);
   t = ecore_time_unix_get();
   EINA_LIST_FOREACH(e_comp_wl->kbd.focused, l, res)
     wl_array_for_each(k, &e_comp_wl->kbd.keys)
       wl_keyboard_send_key(res, serial, t,
                            *k, WL_KEYBOARD_KEY_STATE_PRESSED);
   return EINA_FALSE;
}

static void
_e_comp_wl_evas_cb_focus_in(void *data, Evas *evas EINA_UNUSED, Evas_Object *obj EINA_UNUSED, void *event EINA_UNUSED)
{
   E_Client *ec, *focused;
   struct wl_resource *res;
   struct wl_client *wc;
   Eina_List *l;

   if (!(ec = data)) return;
   if (e_object_is_del(E_OBJECT(ec))) return;
   if (ec->iconic) return;

   /* block spurious focus events */
   focused = e_client_focused_get();
   if ((focused) && (ec != focused)) return;

   /* raise client priority */
   _e_comp_wl_client_priority_raise(ec);

   wc = wl_resource_get_client(ec->comp_data->surface);
   EINA_LIST_FOREACH(e_comp_wl->kbd.resources, l, res)
     if (wl_resource_get_client(res) == wc)
       e_comp_wl->kbd.focused = eina_list_append(e_comp_wl->kbd.focused, res);
   if (!e_comp_wl->kbd.focused) return;
   e_comp_wl_input_keyboard_enter_send(ec);
   e_comp_wl_data_device_keyboard_focus_set();
   ec->comp_data->on_focus_timer =
     ecore_timer_add(0.8, (Ecore_Task_Cb)_e_comp_wl_evas_cb_focus_in_timer, ec);
}

static void
_e_comp_wl_evas_cb_focus_out(void *data, Evas *evas EINA_UNUSED, Evas_Object *obj EINA_UNUSED, void *event EINA_UNUSED)
{
   E_Client *ec;
   struct wl_resource *res;
   uint32_t serial, *k;
   Eina_List *l, *ll;
   double t;

   if (!(ec = data)) return;

   if (!ec->comp_data) return;

   E_FREE_FUNC(ec->comp_data->on_focus_timer, ecore_timer_del);

   /* lower client priority */
   if (!e_object_is_del(data))
     _e_comp_wl_client_priority_normal(ec);

   if (!ec->comp_data->surface) return;

   if (!eina_list_count(e_comp_wl->kbd.resources)) return;

   /* send keyboard_leave to all keyboard resources */
   serial = wl_display_next_serial(e_comp_wl->wl.disp);
   t = ecore_time_unix_get();
   EINA_LIST_FOREACH_SAFE(e_comp_wl->kbd.focused, l, ll, res)
     {
        wl_array_for_each(k, &e_comp_wl->kbd.keys)
          wl_keyboard_send_key(res, serial, t,
                               *k, WL_KEYBOARD_KEY_STATE_RELEASED);
        wl_keyboard_send_leave(res, serial, ec->comp_data->surface);
        e_comp_wl->kbd.focused =
          eina_list_remove_list(e_comp_wl->kbd.focused, l);
     }
}

static void
_e_comp_wl_evas_cb_restack(void *data, Evas *e EINA_UNUSED, Evas_Object *obj EINA_UNUSED, void *event_info EINA_UNUSED)
{
   E_Client *sec, *ec = data;
   Eina_List *l, *ll;

   if (!ec->comp_data->sub.list) return;
   EINA_LIST_FOREACH(ec->comp_data->sub.list, l, sec)
     evas_object_layer_set(sec->frame, evas_object_layer_get(ec->frame));
   sec = eina_list_last_data_get(ec->comp_data->sub.list);
   evas_object_stack_above(sec->frame, ec->frame);
   EINA_LIST_REVERSE_FOREACH_SAFE(ec->comp_data->sub.list, l, ll, sec)
     {
        E_Client *nsec = eina_list_data_get(ll);

        if (nsec)
          evas_object_stack_below(nsec->frame, sec->frame);
     }
}

static void
_e_comp_wl_evas_cb_move(void *data, Evas *e EINA_UNUSED, Evas_Object *obj EINA_UNUSED, void *event_info EINA_UNUSED)
{
   E_Client *sec, *ec = data;
   Eina_List *l;

   EINA_LIST_FOREACH(ec->comp_data->sub.list, l, sec)
     {
        if (!sec->comp_data->sub.data->position.set)
          evas_object_move(sec->frame, ec->client.x + sec->comp_data->sub.data->position.x,
                           ec->client.y + sec->comp_data->sub.data->position.y);
     }
}

static void
_e_comp_wl_evas_cb_resize(void *data, Evas_Object *obj EINA_UNUSED, void *event EINA_UNUSED)
{
   E_Client *ec;

   if (!(ec = data)) return;

   if ((ec->shading) || (ec->shaded)) return;
   if (!ec->comp_data->shell.configure_send) return;
   if (e_client_util_resizing_get(ec) && e_comp_wl->resize.edges)
     {
        int x, y;

        x = ec->mouse.last_down[ec->moveinfo.down.button - 1].w;
        y = ec->mouse.last_down[ec->moveinfo.down.button - 1].h;
        if (e_comp_object_frame_exists(ec->frame))
          e_comp_object_frame_wh_unadjust(ec->frame, x, y, &x, &y);

        switch (ec->resize_mode)
          {
           case E_POINTER_RESIZE_TL:
           case E_POINTER_RESIZE_L:
           case E_POINTER_RESIZE_BL:
             x += ec->mouse.last_down[ec->moveinfo.down.button - 1].mx -
               ec->mouse.current.mx;
             break;
           case E_POINTER_RESIZE_TR:
           case E_POINTER_RESIZE_R:
           case E_POINTER_RESIZE_BR:
             x += ec->mouse.current.mx - ec->mouse.last_down[ec->moveinfo.down.button - 1].mx;
             break;
           default:
             break;;
          }
        switch (ec->resize_mode)
          {
           case E_POINTER_RESIZE_TL:
           case E_POINTER_RESIZE_T:
           case E_POINTER_RESIZE_TR:
             y += ec->mouse.last_down[ec->moveinfo.down.button - 1].my -
               ec->mouse.current.my;
             break;
           case E_POINTER_RESIZE_BL:
           case E_POINTER_RESIZE_B:
           case E_POINTER_RESIZE_BR:
             y += ec->mouse.current.my - ec->mouse.last_down[ec->moveinfo.down.button - 1].my;
             break;
           default:
             break;
          }
        x = E_CLAMP(x, 1, x);
        y = E_CLAMP(y, 1, y);
        ec->comp_data->shell.configure_send(ec->comp_data->shell.surface,
                                            e_comp_wl->resize.edges,
                                            x, y);
     }
   else if ((!ec->fullscreen) && (!ec->maximized) &&
            (!ec->comp_data->maximize_pre))
     _e_comp_wl_configure_send(ec, 1);
}

static void
_e_comp_wl_evas_cb_state_update(void *data, Evas_Object *obj EINA_UNUSED, void *event EINA_UNUSED)
{
   E_Client *ec = data;

   if (e_object_is_del(E_OBJECT(ec))) return;

   /* check for wayland pixmap */

   if (ec->comp_data->shell.configure_send)
     _e_comp_wl_configure_send(ec, 0);
   ec->comp_data->maximize_pre = 0;
}

static void
_e_comp_wl_evas_cb_maximize_pre(void *data, Evas_Object *obj EINA_UNUSED, void *event EINA_UNUSED)
{
   E_Client *ec = data;

   ec->comp_data->maximize_pre = 1;
}

static void
_e_comp_wl_evas_cb_delete_request(void *data, Evas_Object *obj EINA_UNUSED, void *event EINA_UNUSED)
{
   E_Client *ec;

   if (!(ec = data)) return;
   if (ec->netwm.ping) e_client_ping(ec);

   e_comp_ignore_win_del(E_PIXMAP_TYPE_WL, e_pixmap_window_get(ec->pixmap));

   e_object_del(E_OBJECT(ec));

   _e_comp_wl_focus_check();

   /* TODO: Delete request send ??
    * NB: No such animal wrt wayland */
}

static void
_e_comp_wl_evas_cb_kill_request(void *data, Evas_Object *obj EINA_UNUSED, void *event EINA_UNUSED)
{
   E_Client *ec;

   if (!(ec = data)) return;
   /* if (ec->netwm.ping) e_client_ping(ec); */

   e_comp_ignore_win_del(E_PIXMAP_TYPE_WL, e_pixmap_window_get(ec->pixmap));

   evas_object_pass_events_set(ec->frame, EINA_TRUE);
   if (ec->visible) evas_object_hide(ec->frame);
   if (!ec->internal) e_object_del(E_OBJECT(ec));

   _e_comp_wl_focus_check();
}

static void
_e_comp_wl_evas_cb_ping(void *data, Evas_Object *obj EINA_UNUSED, void *event EINA_UNUSED)
{
   E_Client *ec;

   if (!(ec = data)) return;
   if (!(ec->comp_data->shell.ping)) return;
   if (!(ec->comp_data->shell.surface)) return;

   ec->comp_data->shell.ping(ec->comp_data->shell.surface);
}

static void
_e_comp_wl_evas_cb_color_set(void *data, Evas_Object *obj, void *event EINA_UNUSED)
{
   E_Client *ec;
   int a = 0;

   if (!(ec = data)) return;
   evas_object_color_get(obj, NULL, NULL, NULL, &a);
   if (ec->netwm.opacity == a) return;
   ec->netwm.opacity = a;
   ec->netwm.opacity_changed = EINA_TRUE;
}

static void
_e_comp_wl_buffer_reference_cb_destroy(struct wl_listener *listener, void *data)
{
   E_Comp_Wl_Buffer_Ref *ref;

   ref = container_of(listener, E_Comp_Wl_Buffer_Ref, destroy_listener);
   if ((E_Comp_Wl_Buffer *)data != ref->buffer) return;
   ref->buffer = NULL;
}

static void
_e_comp_wl_buffer_cb_destroy(struct wl_listener *listener, void *data EINA_UNUSED)
{
   E_Comp_Wl_Buffer *buffer;

   buffer = container_of(listener, E_Comp_Wl_Buffer, destroy_listener);
   wl_signal_emit(&buffer->destroy_signal, buffer);
   free(buffer);
}

static void
_e_comp_wl_client_evas_init(E_Client *ec)
{
   if (ec->comp_data->evas_init) return;
   evas_object_event_callback_add(ec->frame, EVAS_CALLBACK_SHOW,
                                  _e_comp_wl_evas_cb_show, ec);
   evas_object_event_callback_add(ec->frame, EVAS_CALLBACK_HIDE,
                                  _e_comp_wl_evas_cb_hide, ec);

   /* setup input callbacks */
   evas_object_event_callback_priority_add(ec->frame, EVAS_CALLBACK_MOUSE_IN,
                                           EVAS_CALLBACK_PRIORITY_AFTER,
                                           _e_comp_wl_evas_cb_mouse_in, ec);
   evas_object_event_callback_priority_add(ec->frame, EVAS_CALLBACK_MOUSE_OUT,
                                           EVAS_CALLBACK_PRIORITY_AFTER,
                                           _e_comp_wl_evas_cb_mouse_out, ec);
   evas_object_event_callback_priority_add(ec->frame, EVAS_CALLBACK_MOUSE_MOVE,
                                           EVAS_CALLBACK_PRIORITY_AFTER,
                                           _e_comp_wl_evas_cb_mouse_move, ec);
   evas_object_event_callback_priority_add(ec->frame, EVAS_CALLBACK_MOUSE_DOWN,
                                           EVAS_CALLBACK_PRIORITY_AFTER,
                                           _e_comp_wl_evas_cb_mouse_down, ec);
   evas_object_event_callback_priority_add(ec->frame, EVAS_CALLBACK_MOUSE_UP,
                                           EVAS_CALLBACK_PRIORITY_AFTER,
                                           _e_comp_wl_evas_cb_mouse_up, ec);
   evas_object_event_callback_priority_add(ec->frame, EVAS_CALLBACK_MOUSE_WHEEL,
                                           EVAS_CALLBACK_PRIORITY_AFTER,
                                           _e_comp_wl_evas_cb_mouse_wheel, ec);

   evas_object_event_callback_priority_add(ec->frame, EVAS_CALLBACK_MULTI_DOWN,
                                           EVAS_CALLBACK_PRIORITY_AFTER,
                                           _e_comp_wl_evas_cb_multi_down, ec);
   evas_object_event_callback_priority_add(ec->frame, EVAS_CALLBACK_MULTI_UP,
                                           EVAS_CALLBACK_PRIORITY_AFTER,
                                           _e_comp_wl_evas_cb_multi_up, ec);
   evas_object_event_callback_priority_add(ec->frame, EVAS_CALLBACK_MULTI_MOVE,
                                           EVAS_CALLBACK_PRIORITY_AFTER,
                                           _e_comp_wl_evas_cb_multi_move, ec);


   evas_object_event_callback_priority_add(ec->frame, EVAS_CALLBACK_FOCUS_IN,
                                           EVAS_CALLBACK_PRIORITY_AFTER,
                                           _e_comp_wl_evas_cb_focus_in, ec);
   evas_object_event_callback_priority_add(ec->frame, EVAS_CALLBACK_FOCUS_OUT,
                                           EVAS_CALLBACK_PRIORITY_AFTER,
                                           _e_comp_wl_evas_cb_focus_out, ec);

   if (!ec->override)
     {
        evas_object_smart_callback_add(ec->frame, "client_resize",
                                       _e_comp_wl_evas_cb_resize, ec);
        evas_object_smart_callback_add(ec->frame, "maximize_done",
                                       _e_comp_wl_evas_cb_state_update, ec);
        evas_object_smart_callback_add(ec->frame, "unmaximize_done",
                                       _e_comp_wl_evas_cb_state_update, ec);
        evas_object_smart_callback_add(ec->frame, "maximize_pre",
                                       _e_comp_wl_evas_cb_maximize_pre, ec);
        evas_object_smart_callback_add(ec->frame, "unmaximize_pre",
                                       _e_comp_wl_evas_cb_maximize_pre, ec);
        evas_object_smart_callback_add(ec->frame, "fullscreen",
                                       _e_comp_wl_evas_cb_state_update, ec);
        evas_object_smart_callback_add(ec->frame, "unfullscreen",
                                       _e_comp_wl_evas_cb_state_update, ec);
     }
   evas_object_event_callback_priority_add(ec->frame, EVAS_CALLBACK_MOVE,
                                           EVAS_CALLBACK_PRIORITY_AFTER,
                                           _e_comp_wl_evas_cb_move, ec);
   evas_object_event_callback_priority_add(ec->frame, EVAS_CALLBACK_RESTACK,
                                           EVAS_CALLBACK_PRIORITY_AFTER,
                                           _e_comp_wl_evas_cb_restack, ec);

   /* setup delete/kill callbacks */
   evas_object_smart_callback_add(ec->frame, "delete_request",
                                  _e_comp_wl_evas_cb_delete_request, ec);
   evas_object_smart_callback_add(ec->frame, "kill_request",
                                  _e_comp_wl_evas_cb_kill_request, ec);

   /* setup ping callback */
   evas_object_smart_callback_add(ec->frame, "ping",
                                  _e_comp_wl_evas_cb_ping, ec);

   evas_object_smart_callback_add(ec->frame, "color_set",
                                  _e_comp_wl_evas_cb_color_set, ec);

   ec->comp_data->evas_init = EINA_TRUE;
}

static Eina_Bool
_e_comp_wl_cb_randr_change(void *data EINA_UNUSED, int type EINA_UNUSED, void *event EINA_UNUSED)
{
   Eina_List *l;
   E_Randr2_Screen *screen;
   unsigned int transform = WL_OUTPUT_TRANSFORM_NORMAL;

   if (!e_randr2) return ECORE_CALLBACK_RENEW;

   EINA_LIST_FOREACH(e_randr2->screens, l, screen)
     {
        if (!screen->config.enabled)
          {
             e_comp_wl_output_remove(screen->id);
             continue;
          }

        switch (screen->config.rotation)
          {
           case 90:
             transform = WL_OUTPUT_TRANSFORM_90;
             break;
           case 180:
             transform = WL_OUTPUT_TRANSFORM_180;
             break;
           case 270:
             transform = WL_OUTPUT_TRANSFORM_270;
             break;
           case 0:
           default:
             transform = WL_OUTPUT_TRANSFORM_NORMAL;
             break;
          }

        if (!e_comp_wl_output_init(screen->id, screen->info.name,
                                   screen->info.screen,
                                   screen->config.geom.x, screen->config.geom.y,
                                   screen->config.geom.w, screen->config.geom.h,
                                   screen->info.size.w, screen->info.size.h,
                                   screen->config.mode.refresh, 0, transform))
          ERR("Could not initialize screen %s", screen->info.name);
     }

   return ECORE_CALLBACK_RENEW;
}

static Eina_Bool
_e_comp_wl_cb_comp_object_add(void *data EINA_UNUSED, int type EINA_UNUSED, E_Event_Comp_Object *ev)
{
   E_Client *ec;

   /* try to get the client from the object */
   if (!(ec = e_comp_object_client_get(ev->comp_object)))
     return ECORE_CALLBACK_RENEW;

   /* check for client being deleted */
   if (e_object_is_del(E_OBJECT(ec))) return ECORE_CALLBACK_RENEW;

   /* check for wayland pixmap */
   if (e_pixmap_type_get(ec->pixmap) != E_PIXMAP_TYPE_WL)
     return ECORE_CALLBACK_RENEW;

   /* if we have not setup evas callbacks for this client, do it */
   if (!ec->comp_data->evas_init) _e_comp_wl_client_evas_init(ec);

   return ECORE_CALLBACK_RENEW;
}

static Eina_Bool
_e_comp_wl_cb_mouse_move(void *d EINA_UNUSED, int t EINA_UNUSED, Ecore_Event_Mouse_Move *ev)
{
   _last_event_time = ecore_loop_time_get();

   e_comp_wl->ptr.x = wl_fixed_from_int(ev->x);
   e_comp_wl->ptr.y = wl_fixed_from_int(ev->y);
   e_screensaver_notidle();
   if (e_comp_wl->selection.target &&
       (!e_client_has_xwindow(e_comp_wl->selection.target)) &&
       e_comp_wl->drag)
     {
        struct wl_resource *res;
        int x, y;

        res = e_comp_wl_data_find_for_client(wl_resource_get_client(e_comp_wl->selection.target->comp_data->surface));
        x = ev->x - e_comp_wl->selection.target->client.x;
        y = ev->y - e_comp_wl->selection.target->client.y;
        wl_data_device_send_motion(res, ev->timestamp, wl_fixed_from_int(x), wl_fixed_from_int(y));
     }
   if (e_comp_wl->drag &&
       e_comp_wl->drag_client &&
       e_client_has_xwindow(e_comp_wl->drag_client))
     _e_comp_wl_send_mouse_move(e_comp_wl->drag_client, ev->x, ev->y, ev->timestamp);
   return ECORE_CALLBACK_RENEW;
}

static void
_e_comp_wl_surface_state_size_update(E_Client *ec, E_Comp_Wl_Surface_State *state)
{
   Eina_Rectangle *window;
   /* double scale = 0.0; */

   /* scale = e_comp_wl->output.scale; */
   /* switch (e_comp_wl->output.transform) */
   /*   { */
   /*    case WL_OUTPUT_TRANSFORM_90: */
   /*    case WL_OUTPUT_TRANSFORM_270: */
   /*    case WL_OUTPUT_TRANSFORM_FLIPPED_90: */
   /*    case WL_OUTPUT_TRANSFORM_FLIPPED_270: */
   /*      w = ec->comp_data->buffer_ref.buffer->h / scale; */
   /*      h = ec->comp_data->buffer_ref.buffer->w / scale; */
   /*      break; */
   /*    default: */
   /*      w = ec->comp_data->buffer_ref.buffer->w / scale; */
   /*      h = ec->comp_data->buffer_ref.buffer->h / scale; */
   /*      break; */
   /*   } */

   if (!e_pixmap_size_get(ec->pixmap, &state->bw, &state->bh)) return;
   if (e_client_has_xwindow(ec) || e_comp_object_frame_exists(ec->frame)) return;
   window = &ec->comp_data->shell.window;
   if (window->x || window->y || window->w || window->h)
     e_comp_object_frame_geometry_set(ec->frame, -window->x, (window->x + window->w) - state->bw,
       -window->y,
       (window->y + window->h) - state->bh);
   else
     e_comp_object_frame_geometry_set(ec->frame, 0, 0, 0, 0);
}

static void
_e_comp_wl_surface_state_cb_buffer_destroy(struct wl_listener *listener, void *data EINA_UNUSED)
{
   E_Comp_Wl_Surface_State *state;

   state =
     container_of(listener, E_Comp_Wl_Surface_State, buffer_destroy_listener);
   state->buffer = NULL;
}

static void
_e_comp_wl_surface_state_init(E_Comp_Wl_Surface_State *state, int w, int h)
{
   state->new_attach = EINA_FALSE;
   state->buffer = NULL;
   state->buffer_destroy_listener.notify =
     _e_comp_wl_surface_state_cb_buffer_destroy;
   state->sx = state->sy = 0;

   state->input = eina_tiler_new(w, h);
   eina_tiler_tile_size_set(state->input, 1, 1);

   state->opaque = eina_tiler_new(w, h);
   eina_tiler_tile_size_set(state->opaque, 1, 1);
}

static void
_e_comp_wl_surface_state_finish(E_Comp_Wl_Surface_State *state)
{
   struct wl_resource *cb;
   Eina_Rectangle *dmg;

   EINA_LIST_FREE(state->frames, cb)
     wl_resource_destroy(cb);

   EINA_LIST_FREE(state->damages, dmg)
     eina_rectangle_free(dmg);

   if (state->opaque) eina_tiler_free(state->opaque);
   state->opaque = NULL;

   if (state->input) eina_tiler_free(state->input);
   state->input = NULL;

   if (state->buffer) wl_list_remove(&state->buffer_destroy_listener.link);
   state->buffer = NULL;
}

static void
_e_comp_wl_surface_state_buffer_set(E_Comp_Wl_Surface_State *state, E_Comp_Wl_Buffer *buffer)
{
   if (state->buffer == buffer) return;
   if (state->buffer)
     wl_list_remove(&state->buffer_destroy_listener.link);
   state->buffer = buffer;
   if (state->buffer)
     wl_signal_add(&state->buffer->destroy_signal,
                   &state->buffer_destroy_listener);
}

static void
_e_comp_wl_surface_state_attach(E_Client *ec, E_Comp_Wl_Surface_State *state)
{
   /* set usable early because shell module checks this */
   e_pixmap_usable_set(ec->pixmap, (state->buffer != NULL));
   e_pixmap_resource_set(ec->pixmap, state->buffer);
   e_pixmap_dirty(ec->pixmap);
   e_pixmap_refresh(ec->pixmap);

   _e_comp_wl_surface_state_size_update(ec, state);
}

static void
_e_comp_wl_surface_state_commit(E_Client *ec, E_Comp_Wl_Surface_State *state)
{
   Eina_Bool first = EINA_FALSE;
   Eina_Rectangle *dmg;
   Eina_Bool ignored, placed = EINA_TRUE;
   int x = 0, y = 0, w, h;

   first = !e_pixmap_usable_get(ec->pixmap);
   ignored = ec->ignored;

   if (state->new_attach)
     _e_comp_wl_surface_state_attach(ec, state);

   _e_comp_wl_surface_state_buffer_set(state, NULL);

   if (state->new_attach)
     {
        if (ec->changes.pos)
          e_comp_object_frame_xy_unadjust(ec->frame, ec->x, ec->y, &x, &y);
        else
          x = ec->client.x, y = ec->client.y;

        if (ec->new_client) placed = ec->placed;

        if (first && e_client_has_xwindow(ec))
          /* use client geometry to avoid race condition from x11 configure request */
          x = ec->x, y = ec->y;
        else
          {
             ec->client.w = state->bw;
             ec->client.h = state->bh;
             e_comp_object_frame_wh_adjust(ec->frame, ec->client.w, ec->client.h, &ec->w, &ec->h);
          }
        w = ec->client.w;
        h = ec->client.h;
     }
   else
     w = state->bw, h = state->bh;
   if (!e_pixmap_usable_get(ec->pixmap))
     {
        if (ec->comp_data->mapped)
          {
             if ((ec->comp_data->shell.surface) && (ec->comp_data->shell.unmap))
               ec->comp_data->shell.unmap(ec->comp_data->shell.surface);
             else if (e_client_has_xwindow(ec))
               {
                  ec->visible = EINA_FALSE;
                  evas_object_hide(ec->frame);
                  ec->comp_data->mapped = 0;
               }
          }
     }
   else
     {
        if (!ec->comp_data->mapped)
          {
             if ((ec->comp_data->shell.surface) && (ec->comp_data->shell.map))
               ec->comp_data->shell.map(ec->comp_data->shell.surface);
             else if (e_client_has_xwindow(ec))
               {
                  ec->visible = EINA_TRUE;
                  ec->ignored = 0;
                  evas_object_show(ec->frame);
                  ec->comp_data->mapped = 1;
               }
          }
     }

   if (state->new_attach)
     {
        if ((ec->comp_data->shell.surface) && (ec->comp_data->shell.configure))
          ec->comp_data->shell.configure(ec->comp_data->shell.surface,
                                         x, y, state->bw, state->bh);
        else
          {
             if (ec->netwm.sync.wait)
               {
                  E_Client_Pending_Resize *pnd = NULL;

                  ec->netwm.sync.wait--;

                  /* skip pending for which we didn't get a reply */
                  while (ec->pending_resize)
                    {
                       pnd = eina_list_data_get(ec->pending_resize);
                       ec->pending_resize = eina_list_remove(ec->pending_resize, pnd);

                       if ((state->bw == pnd->w) && (state->bh == pnd->h))
                         break;

                       E_FREE(pnd);
                    }

                  if (pnd)
                    {
                       e_comp_object_frame_wh_adjust(ec->frame, pnd->w, pnd->h, &ec->w, &ec->h);
                       E_FREE(pnd);
                    }
                  ecore_evas_pointer_xy_get(e_comp->ee, &ec->mouse.current.mx, &ec->mouse.current.my);
                  ec->netwm.sync.send_time = ecore_loop_time_get();
               }
             if (e_comp_wl->drag && e_comp_wl->drag_client &&
                 (e_comp_wl->drag_client == ec))
               {
                  e_comp_wl->drag->dx -= state->sx;
                  e_comp_wl->drag->dy -= state->sy;
                  e_drag_move(e_comp_wl->drag,
                    e_comp_wl->drag->x + state->sx, e_comp_wl->drag->y + state->sy);
                  e_drag_resize(e_comp_wl->drag, state->bw, state->bh);
               }
             else
               e_client_util_move_resize_without_frame(ec, x, y, w, h);
          }

        if (ec->new_client)
          {
             ec->placed = placed;
             ec->want_focus |= ec->icccm.accepts_focus && (!ec->override);
          }
        else if ((first) && (ec->placed) && (!ec->internal) && (!ec->override))
          {
             ec->x = ec->y = 0;
             ec->placed = EINA_FALSE;
             ec->new_client = EINA_TRUE;
          }
     }
   state->sx = 0;
   state->sy = 0;
   state->new_attach = EINA_FALSE;

   /* insert state frame callbacks into comp_data->frames
    * NB: This clears state->frames list */
   ec->comp_data->frames = eina_list_merge(ec->comp_data->frames,
                                           state->frames);
   state->frames = NULL;

   ec->ignored = ignored;
   if (!ec->comp_data->mapped) goto unmapped;

   /* put state damages into surface */
   if ((!e_comp->nocomp) && (ec->frame))
     {
        EINA_LIST_FREE(state->damages, dmg)
          {
             e_comp_object_damage(ec->frame, dmg->x, dmg->y, dmg->w, dmg->h);
             eina_rectangle_free(dmg);
          }
     }

   /* put state opaque into surface */
   e_pixmap_image_opaque_set(ec->pixmap, 0, 0, 0, 0);
   if (state->opaque)
     {
        Eina_Rectangle *rect;
        Eina_Iterator *itr;

        itr = eina_tiler_iterator_new(state->opaque);
        EINA_ITERATOR_FOREACH(itr, rect)
          {
             Eina_Rectangle r;

             EINA_RECTANGLE_SET(&r, rect->x, rect->y, rect->w, rect->h);
             E_RECTS_CLIP_TO_RECT(r.x, r.y, r.w, r.h, 0, 0, state->bw, state->bh);
             e_pixmap_image_opaque_set(ec->pixmap, r.x, r.y, r.w, r.h);
             break;
          }

        eina_iterator_free(itr);
     }

   /* put state input into surface */
   if ((state->input) &&
       (!eina_tiler_empty(state->input)))
     {
        Eina_Tiler *src, *tmp;

        tmp = eina_tiler_new(state->bw, state->bh);
        eina_tiler_tile_size_set(tmp, 1, 1);
        eina_tiler_rect_add(tmp,
                            &(Eina_Rectangle){0, 0, state->bw, state->bh});
        if ((src = eina_tiler_intersection(state->input, tmp)))
          {
             Eina_Rectangle *rect;
             Eina_Iterator *itr;

             itr = eina_tiler_iterator_new(src);
             EINA_ITERATOR_FOREACH(itr, rect)
               e_comp_object_input_area_set(ec->frame, rect->x, rect->y,
                                            rect->w, rect->h);

             eina_iterator_free(itr);
             eina_tiler_free(src);
          }
        else
          e_comp_object_input_area_set(ec->frame, 0, 0, ec->w, ec->h);

        eina_tiler_free(tmp);

        /* clear input tiler */
        eina_tiler_clear(state->input);
     }

   return;

unmapped:
   /* clear pending damages */
   EINA_LIST_FREE(state->damages, dmg)
     eina_rectangle_free(dmg);
}

static void
_e_comp_wl_surface_cb_destroy(struct wl_client *client EINA_UNUSED, struct wl_resource *resource)
{
   DBG("Surface Cb Destroy: %d", wl_resource_get_id(resource));
   wl_resource_destroy(resource);
}

static void
_e_comp_wl_surface_cb_attach(struct wl_client *client EINA_UNUSED, struct wl_resource *resource, struct wl_resource *buffer_resource, int32_t sx, int32_t sy)
{
   E_Client *ec;
   E_Comp_Wl_Buffer *buffer = NULL;

   if (!(ec = wl_resource_get_user_data(resource))) return;
   if (e_object_is_del(E_OBJECT(ec))) return;

   if (buffer_resource)
     {
        if (!(buffer = e_comp_wl_buffer_get(buffer_resource)))
          {
             ERR("Could not get buffer from resource");
             wl_client_post_no_memory(client);
             return;
          }
     }

   _e_comp_wl_surface_state_buffer_set(&ec->comp_data->pending, buffer);

   ec->comp_data->pending.sx = sx;
   ec->comp_data->pending.sy = sy;
   ec->comp_data->pending.new_attach = EINA_TRUE;
}

static void
_e_comp_wl_surface_cb_damage_buffer(struct wl_client *client EINA_UNUSED, struct wl_resource *resource, int32_t x, int32_t y, int32_t w, int32_t h)
{
   E_Client *ec;
   Eina_Rectangle *dmg = NULL;

   if (!(ec = wl_resource_get_user_data(resource))) return;
   if (e_object_is_del(E_OBJECT(ec))) return;

   if (!(dmg = eina_rectangle_new(x, y, w, h))) return;

   ec->comp_data->pending.damages =
     eina_list_append(ec->comp_data->pending.damages, dmg);
}

/*
 * Currently damage and damage_buffer are the same because we don't support
 * buffer_scale, transform, or viewport.  Once we support those we'll have
 * to make surface_cb_damage handle damage in surface co-ordinates.
 */
static void
_e_comp_wl_surface_cb_damage(struct wl_client *client, struct wl_resource *resource, int32_t x, int32_t y, int32_t w, int32_t h)
{
   _e_comp_wl_surface_cb_damage_buffer(client, resource, x, y, w, h);
}

static void
_e_comp_wl_frame_cb_destroy(struct wl_resource *resource)
{
   E_Client *ec;

   if (!(ec = wl_resource_get_user_data(resource))) return;
   if (e_object_is_del(E_OBJECT(ec))) return;

   ec->comp_data->frames =
     eina_list_remove(ec->comp_data->frames, resource);

   ec->comp_data->pending.frames =
     eina_list_remove(ec->comp_data->pending.frames, resource);
}

static void
_e_comp_wl_surface_cb_frame(struct wl_client *client, struct wl_resource *resource, uint32_t callback)
{
   E_Client *ec;
   struct wl_resource *res;

   if (!(ec = wl_resource_get_user_data(resource))) return;
   if (e_object_is_del(E_OBJECT(ec))) return;

   /* create frame callback */
   if (!(res =
         wl_resource_create(client, &wl_callback_interface, 1, callback)))
     {
        wl_resource_post_no_memory(resource);
        return;
     }

   wl_resource_set_implementation(res, NULL, ec, _e_comp_wl_frame_cb_destroy);

   ec->comp_data->pending.frames =
     eina_list_prepend(ec->comp_data->pending.frames, res);
}

static void
_e_comp_wl_surface_cb_opaque_region_set(struct wl_client *client EINA_UNUSED, struct wl_resource *resource, struct wl_resource *region_resource)
{
   E_Client *ec;

   if (!(ec = wl_resource_get_user_data(resource))) return;
   if (e_object_is_del(E_OBJECT(ec))) return;

   if (ec->comp_data->pending.opaque)
     eina_tiler_clear(ec->comp_data->pending.opaque);
   if (region_resource)
     {
        Eina_Tiler *tmp;

        if (!(tmp = wl_resource_get_user_data(region_resource)))
          return;

        eina_tiler_union(ec->comp_data->pending.opaque, tmp);
     }
}

static void
_e_comp_wl_surface_cb_input_region_set(struct wl_client *client EINA_UNUSED, struct wl_resource *resource, struct wl_resource *region_resource)
{
   E_Client *ec;

   if (!(ec = wl_resource_get_user_data(resource))) return;
   if (e_object_is_del(E_OBJECT(ec))) return;

   if (ec->comp_data->pending.input)
     eina_tiler_clear(ec->comp_data->pending.input);
   if (region_resource)
     {
        Eina_Tiler *tmp;

        if (!(tmp = wl_resource_get_user_data(region_resource)))
          return;

        eina_tiler_union(ec->comp_data->pending.input, tmp);
     }
   else
     {
        eina_tiler_rect_add(ec->comp_data->pending.input,
                            &(Eina_Rectangle){0, 0, ec->client.w, ec->client.h});
     }
}

static void
_e_comp_wl_surface_cb_commit(struct wl_client *client EINA_UNUSED, struct wl_resource *resource)
{
   E_Client *ec, *subc;
   Eina_List *l;

   if (!(ec = wl_resource_get_user_data(resource))) return;
   if (e_object_is_del(E_OBJECT(ec))) return;

   if (e_comp_wl_subsurface_commit(ec)) return;

   e_comp_wl_surface_commit(ec);

   EINA_LIST_FOREACH(ec->comp_data->sub.list, l, subc)
     {
        if (ec != subc)
          _e_comp_wl_subsurface_parent_commit(subc, EINA_FALSE);
     }
}

static void
_e_comp_wl_surface_cb_buffer_transform_set(struct wl_client *client EINA_UNUSED, struct wl_resource *resource EINA_UNUSED, int32_t transform EINA_UNUSED)
{
   DBG("Surface Buffer Transform: %d", wl_resource_get_id(resource));
}

static void
_e_comp_wl_surface_cb_buffer_scale_set(struct wl_client *client EINA_UNUSED, struct wl_resource *resource EINA_UNUSED, int32_t scale EINA_UNUSED)
{
   DBG("Surface Buffer Scale: %d", wl_resource_get_id(resource));
}

static const struct wl_surface_interface _e_surface_interface =
{
   _e_comp_wl_surface_cb_destroy,
   _e_comp_wl_surface_cb_attach,
   _e_comp_wl_surface_cb_damage,
   _e_comp_wl_surface_cb_frame,
   _e_comp_wl_surface_cb_opaque_region_set,
   _e_comp_wl_surface_cb_input_region_set,
   _e_comp_wl_surface_cb_commit,
   _e_comp_wl_surface_cb_buffer_transform_set,
   _e_comp_wl_surface_cb_buffer_scale_set,
/* remove ifdefs once damage_buffer is officially released */
#ifdef WL_SURFACE_DAMAGE_BUFFER_SINCE_VERSION
   _e_comp_wl_surface_cb_damage_buffer
#endif
};

static void
_e_comp_wl_surface_render_stop(E_Client *ec)
{
   /* FIXME: this may be fine after e_pixmap can create textures for wl clients? */
   //if ((!ec->internal) && (!e_comp_gl_get()))
     ec->dead = ec->hidden = 1;
   evas_object_hide(ec->frame);
}

static void
_e_comp_wl_surface_destroy(struct wl_resource *resource)
{
   E_Client *ec;

   if (!(ec = wl_resource_get_user_data(resource))) return;

   _e_comp_wl_surface_render_stop(ec);
   e_object_del(E_OBJECT(ec));
}

static void
_e_comp_wl_compositor_cb_surface_create(struct wl_client *client, struct wl_resource *resource, uint32_t id)
{
   struct wl_resource *res;
   E_Client *wc, *ec = NULL;
   Eina_List *l;
   pid_t pid;

   DBG("Compositor Cb Surface Create: %d", id);

   /* try to create an internal surface */
   if (!(res = wl_resource_create(client, &wl_surface_interface,
                                  wl_resource_get_version(resource), id)))
     {
        ERR("Could not create compositor surface");
        wl_client_post_no_memory(client);
        return;
     }

   DBG("\tCreated Resource: %d", wl_resource_get_id(res));

   /* set implementation on resource */
   wl_resource_set_implementation(res, &_e_surface_interface, NULL,
                                  _e_comp_wl_surface_destroy);

   wl_client_get_credentials(client, &pid, NULL, NULL);
   if (pid == getpid()) //internal!
     ec = e_pixmap_find_client(E_PIXMAP_TYPE_WL, (uintptr_t)id);
   if (!ec)
     {
        E_Pixmap *ep;

        /* try to create new pixmap */
        if (!(ep = e_pixmap_new(E_PIXMAP_TYPE_WL, res)))
          {
             ERR("Could not create new pixmap");
             wl_resource_destroy(res);
             wl_client_post_no_memory(client);
             return;
          }
        DBG("\tUsing Pixmap: %p", ep);

        ec = e_client_new(ep, 0, 0);
     }
   if (ec)
     {
        if (ec->new_client)
          e_comp->new_clients--;
        ec->new_client = 0;
        if ((!ec->client.w) && (ec->client.h))
          ec->client.w = ec->client.h = 1;
        ec->comp_data->surface = res;
     }

   /* set reference to pixmap so we can fetch it later */
   DBG("\tUsing Client: %p", ec);
   wl_resource_set_user_data(res, ec);
#ifndef HAVE_WAYLAND_ONLY
   EINA_LIST_FOREACH(e_comp_wl->xwl_pending, l, wc)
     {
        if (!e_pixmap_is_x(wc->pixmap)) continue;
        if (wl_resource_get_id(res) !=
            ((E_Comp_X_Client_Data*)wc->comp_data)->surface_id) continue;
        e_comp_x_xwayland_client_setup(wc, ec);
        break;
     }
#endif
   /* emit surface create signal */
   wl_signal_emit(&e_comp_wl->signals.surface.create, res);
}

static void
_e_comp_wl_region_cb_destroy(struct wl_client *client EINA_UNUSED, struct wl_resource *resource)
{
   DBG("Region Destroy: %d", wl_resource_get_id(resource));
   wl_resource_destroy(resource);
}

static void
_e_comp_wl_region_cb_add(struct wl_client *client EINA_UNUSED, struct wl_resource *resource, int32_t x, int32_t y, int32_t w, int32_t h)
{
   Eina_Tiler *tiler;

   DBG("Region Add: %d", wl_resource_get_id(resource));
   DBG("\tGeom: %d %d %d %d", x, y, w, h);

   /* get the tiler from the resource */
   if ((tiler = wl_resource_get_user_data(resource)))
     eina_tiler_rect_add(tiler, &(Eina_Rectangle){x, y, w, h});
}

static void
_e_comp_wl_region_cb_subtract(struct wl_client *client EINA_UNUSED, struct wl_resource *resource, int32_t x, int32_t y, int32_t w, int32_t h)
{
   Eina_Tiler *tiler;

   DBG("Region Subtract: %d", wl_resource_get_id(resource));
   DBG("\tGeom: %d %d %d %d", x, y, w, h);

   /* get the tiler from the resource */
   if ((tiler = wl_resource_get_user_data(resource)))
     eina_tiler_rect_del(tiler, &(Eina_Rectangle){x, y, w, h});
}

static const struct wl_region_interface _e_region_interface =
{
   _e_comp_wl_region_cb_destroy,
   _e_comp_wl_region_cb_add,
   _e_comp_wl_region_cb_subtract
};

static void
_e_comp_wl_compositor_cb_region_destroy(struct wl_resource *resource)
{
   Eina_Tiler *tiler;

   DBG("Compositor Region Destroy: %d", wl_resource_get_id(resource));

   /* try to get the tiler from the region resource */
   if ((tiler = wl_resource_get_user_data(resource)))
     eina_tiler_free(tiler);
}

static void
_e_comp_wl_compositor_cb_region_create(struct wl_client *client, struct wl_resource *resource, uint32_t id)
{
   Eina_Tiler *tiler;
   struct wl_resource *res;

   DBG("Region Create: %d", wl_resource_get_id(resource));

   /* try to create new tiler */
   if (!(tiler = eina_tiler_new(e_comp->w, e_comp->h)))
     {
        ERR("Could not create Eina_Tiler");
        wl_resource_post_no_memory(resource);
        return;
     }

   /* set tiler size */
   eina_tiler_tile_size_set(tiler, 1, 1);

   if (!(res = wl_resource_create(client, &wl_region_interface, 1, id)))
     {
        ERR("\tFailed to create region resource");
        wl_resource_post_no_memory(resource);
        return;
     }

   wl_resource_set_implementation(res, &_e_region_interface, tiler,
                                  _e_comp_wl_compositor_cb_region_destroy);
}

static const struct wl_compositor_interface _e_comp_interface =
{
   _e_comp_wl_compositor_cb_surface_create,
   _e_comp_wl_compositor_cb_region_create
};

static void
_e_comp_wl_compositor_cb_bind(struct wl_client *client, void *data EINA_UNUSED, uint32_t version, uint32_t id)
{
   struct wl_resource *res;

   if (!(res =
         wl_resource_create(client, &wl_compositor_interface,
                            version, id)))
     {
        ERR("Could not create compositor resource");
        wl_client_post_no_memory(client);
        return;
     }

   wl_resource_set_implementation(res, &_e_comp_interface, e_comp, NULL);
}

static void
_e_comp_wl_compositor_cb_del(void *data EINA_UNUSED)
{
   E_Comp_Wl_Output *output;

   if (e_comp_wl->screenshooter.global)
     wl_global_destroy(e_comp_wl->screenshooter.global);

   EINA_LIST_FREE(e_comp_wl->outputs, output)
     {
        if (output->id) eina_stringshare_del(output->id);
        if (output->make) eina_stringshare_del(output->make);
        if (output->model) eina_stringshare_del(output->model);
        free(output);
     }
   e_comp_wl_shutdown();

   /* delete fd handler */
   /* if (e_comp_wl->fd_hdlr) ecore_main_fd_handler_del(e_comp_wl->fd_hdlr); */

   /* free allocated data structure */
   free(e_comp_wl);
}

static void
_e_comp_wl_subsurface_destroy(struct wl_resource *resource)
{
   E_Client *ec;
   E_Comp_Wl_Subsurf_Data *sdata;

   /* try to get the client from resource data */
   if (!(ec = wl_resource_get_user_data(resource))) return;

   if (!ec->comp_data) return;

   if (!(sdata = ec->comp_data->sub.data)) return;

   if (sdata->parent)
     {
        /* remove this client from parents sub list */
        sdata->parent->comp_data->sub.list =
          eina_list_remove(sdata->parent->comp_data->sub.list, ec);
     }

   _e_comp_wl_surface_state_finish(&sdata->cached);
   e_comp_wl_buffer_reference(&sdata->cached_buffer_ref, NULL);

   /* the client is getting deleted, which means the pixmap will be getting
    * freed. We need to unset the surface user data */
   /* wl_resource_set_user_data(ec->comp_data->surface, NULL); */

   E_FREE(sdata);

   ec->comp_data->sub.data = NULL;
}

static Eina_Bool
_e_comp_wl_subsurface_synchronized_get(E_Comp_Wl_Subsurf_Data *sdata)
{
   while (sdata)
     {
        if (sdata->synchronized) return EINA_TRUE;
        if (!sdata->parent) return EINA_FALSE;
        sdata = sdata->parent->comp_data->sub.data;
     }

   return EINA_FALSE;
}

static void
_e_comp_wl_subsurface_commit_to_cache(E_Client *ec)
{
   E_Comp_Client_Data *cdata;
   E_Comp_Wl_Subsurf_Data *sdata;
   struct wl_resource *cb;
   Eina_List *l;
   Eina_Iterator *itr;
   Eina_Rectangle *rect;

   if (!(cdata = ec->comp_data)) return;
   if (!(sdata = cdata->sub.data)) return;

   DBG("Subsurface Commit to Cache");

   /* move pending damage to cached */
   EINA_LIST_FOREACH(cdata->pending.damages, l, rect)
     eina_list_move(&sdata->cached.damages, &cdata->pending.damages, rect);

   if (cdata->pending.new_attach)
     {
        sdata->cached.new_attach = EINA_TRUE;
        _e_comp_wl_surface_state_buffer_set(&sdata->cached,
                                            cdata->pending.buffer);
        e_comp_wl_buffer_reference(&sdata->cached_buffer_ref,
                                   cdata->pending.buffer);
     }

   sdata->cached.sx = cdata->pending.sx;
   sdata->cached.sy = cdata->pending.sy;
   /* sdata->cached.buffer = cdata->pending.buffer; */
   sdata->cached.new_attach = cdata->pending.new_attach;

   /* _e_comp_wl_surface_state_buffer_set(&cdata->pending, NULL); */
   /* cdata->pending.sx = 0; */
   /* cdata->pending.sy = 0; */
   /* cdata->pending.new_attach = EINA_FALSE; */

   /* copy cdata->pending.opaque into sdata->cached.opaque */
   itr = eina_tiler_iterator_new(cdata->pending.opaque);
   EINA_ITERATOR_FOREACH(itr, rect)
     eina_tiler_rect_add(sdata->cached.opaque, rect);
   eina_iterator_free(itr);

   /* repeat for input */
   itr = eina_tiler_iterator_new(cdata->pending.input);
   EINA_ITERATOR_FOREACH(itr, rect)
     eina_tiler_rect_add(sdata->cached.input, rect);
   eina_iterator_free(itr);

   EINA_LIST_FOREACH(cdata->pending.frames, l, cb)
     eina_list_move(&sdata->cached.frames, &cdata->pending.frames, cb);

   sdata->cached.has_data = EINA_TRUE;
}

static void
_e_comp_wl_subsurface_commit_from_cache(E_Client *ec)
{
   E_Comp_Client_Data *cdata;
   E_Comp_Wl_Subsurf_Data *sdata;

   if (!(cdata = ec->comp_data)) return;
   if (!(sdata = cdata->sub.data)) return;

   DBG("Subsurface Commit from Cache");

   _e_comp_wl_surface_state_commit(ec, &sdata->cached);
   if (!e_comp_object_damage_exists(ec->frame))
     e_pixmap_image_clear(ec->pixmap, 1);
}

static void
_e_comp_wl_subsurface_parent_commit(E_Client *ec, Eina_Bool parent_synchronized)
{
   E_Client *parent;
   E_Comp_Wl_Subsurf_Data *sdata;

   if (!(sdata = ec->comp_data->sub.data)) return;
   if (!(parent = sdata->parent)) return;

   if (sdata->position.set)
     {
        evas_object_move(ec->frame, parent->client.x + sdata->position.x,
                         parent->client.y + sdata->position.y);
        sdata->position.set = EINA_FALSE;
     }

   if ((parent_synchronized) || (sdata->synchronized))
     {
        E_Client *subc;
        Eina_List *l;

        if (sdata->cached.has_data)
          _e_comp_wl_subsurface_commit_from_cache(ec);

        EINA_LIST_FOREACH(ec->comp_data->sub.list, l, subc)
          {
             if (ec != subc)
               _e_comp_wl_subsurface_parent_commit(subc, EINA_TRUE);
          }
     }
}

static void
_e_comp_wl_subsurface_cb_destroy(struct wl_client *client EINA_UNUSED, struct wl_resource *resource)
{
   wl_resource_destroy(resource);
}

static void
_e_comp_wl_subsurface_cb_position_set(struct wl_client *client EINA_UNUSED, struct wl_resource *resource, int32_t x, int32_t y)
{
   E_Client *ec;
   E_Comp_Wl_Subsurf_Data *sdata;

   DBG("Subsurface Cb Position Set: %d", wl_resource_get_id(resource));

   /* try to get the client from resource data */
   if (!(ec = wl_resource_get_user_data(resource))) return;

   if (!(sdata = ec->comp_data->sub.data)) return;

   sdata->position.x = x;
   sdata->position.y = y;
   sdata->position.set = EINA_TRUE;
}

static void
_e_comp_wl_subsurface_cb_place_above(struct wl_client *client EINA_UNUSED, struct wl_resource *resource, struct wl_resource *sibling_resource)
{
   E_Client *ec, *ecs;
   E_Client *parent;

   DBG("Subsurface Cb Place Above: %d", wl_resource_get_id(resource));

   /* try to get the client from resource data */
   if (!(ec = wl_resource_get_user_data(resource))) return;

   if (!ec->comp_data->sub.data) return;

   /* try to get the client from the sibling resource */
   if (!(ecs = wl_resource_get_user_data(sibling_resource))) return;

   if (!ecs->comp_data->sub.data) return;

   if (!(parent = ec->comp_data->sub.data->parent)) return;

   parent->comp_data->sub.list =
     eina_list_remove(parent->comp_data->sub.list, ec);

   parent->comp_data->sub.list =
     eina_list_append_relative(parent->comp_data->sub.list, ec, ecs);

   parent->comp_data->sub.restack_target = parent;
}

static void
_e_comp_wl_subsurface_cb_place_below(struct wl_client *client EINA_UNUSED, struct wl_resource *resource, struct wl_resource *sibling_resource)
{
   E_Client *ec, *ecs;
   E_Client *parent;

   DBG("Subsurface Cb Place Below: %d", wl_resource_get_id(resource));

   /* try to get the client from resource data */
   if (!(ec = wl_resource_get_user_data(resource))) return;

   if (!ec->comp_data->sub.data) return;

   /* try to get the client from the sibling resource */
   if (!(ecs = wl_resource_get_user_data(sibling_resource))) return;

   if (!ecs->comp_data->sub.data) return;

   if (!(parent = ec->comp_data->sub.data->parent)) return;

   parent->comp_data->sub.list =
     eina_list_remove(parent->comp_data->sub.list, ec);

   parent->comp_data->sub.list =
     eina_list_prepend_relative(parent->comp_data->sub.list, ec, ecs);

   parent->comp_data->sub.restack_target = parent;
}

static void
_e_comp_wl_subsurface_cb_sync_set(struct wl_client *client EINA_UNUSED, struct wl_resource *resource)
{
   E_Client *ec;
   E_Comp_Wl_Subsurf_Data *sdata;

   DBG("Subsurface Cb Sync Set: %d", wl_resource_get_id(resource));

   /* try to get the client from resource data */
   if (!(ec = wl_resource_get_user_data(resource))) return;

   if (!(sdata = ec->comp_data->sub.data)) return;

   sdata->synchronized = EINA_TRUE;
}

static void
_e_comp_wl_subsurface_cb_desync_set(struct wl_client *client EINA_UNUSED, struct wl_resource *resource)
{
   E_Client *ec;
   E_Comp_Wl_Subsurf_Data *sdata;

   DBG("Subsurface Cb Desync Set: %d", wl_resource_get_id(resource));

   /* try to get the client from resource data */
   if (!(ec = wl_resource_get_user_data(resource))) return;

   if (!(sdata = ec->comp_data->sub.data)) return;

   sdata->synchronized = EINA_FALSE;
}

static const struct wl_subsurface_interface _e_subsurface_interface =
{
   _e_comp_wl_subsurface_cb_destroy,
   _e_comp_wl_subsurface_cb_position_set,
   _e_comp_wl_subsurface_cb_place_above,
   _e_comp_wl_subsurface_cb_place_below,
   _e_comp_wl_subsurface_cb_sync_set,
   _e_comp_wl_subsurface_cb_desync_set
};

static Eina_Bool
_e_comp_wl_subsurface_create(E_Client *ec, E_Client *epc, uint32_t id, struct wl_resource *surface_resource)
{
   struct wl_client *client;
   struct wl_resource *res;
   E_Comp_Wl_Subsurf_Data *sdata;

   /* try to get the wayland client from the surface resource */
   if (!(client = wl_resource_get_client(surface_resource)))
     {
        ERR("Could not get client from resource %d",
            wl_resource_get_id(surface_resource));
        return EINA_FALSE;
     }

   /* try to allocate subsurface data */
   if (!(sdata = E_NEW(E_Comp_Wl_Subsurf_Data, 1)))
     {
        ERR("Could not allocate space for subsurface data");
        goto dat_err;
     }

   /* try to create the subsurface resource */
   if (!(res = wl_resource_create(client, &wl_subsurface_interface, 1, id)))
     {
        ERR("Failed to create subsurface resource");
        wl_resource_post_no_memory(surface_resource);
        goto res_err;
     }

   /* set resource implementation */
   wl_resource_set_implementation(res, &_e_subsurface_interface, ec,
                                  _e_comp_wl_subsurface_destroy);

   _e_comp_wl_surface_state_init(&sdata->cached, ec->w, ec->h);

   /* set subsurface data properties */
   sdata->cached_buffer_ref.buffer = NULL;
   sdata->resource = res;
   sdata->synchronized = EINA_TRUE;
   sdata->parent = epc;

   /* set subsurface client properties */
   ec->borderless = EINA_TRUE;
   ec->argb = EINA_TRUE;
   ec->lock_border = EINA_TRUE;
   ec->lock_focus_in = ec->lock_focus_out = EINA_TRUE;
   ec->netwm.state.skip_taskbar = EINA_TRUE;
   ec->netwm.state.skip_pager = EINA_TRUE;
   ec->no_shape_cut = EINA_TRUE;
   ec->border_size = 0;
   ec->layer_block = 1;

   if (epc)
     {
        if (epc->comp_data)
          {
             /* append this client to the parents subsurface list */
             epc->comp_data->sub.list =
               eina_list_append(epc->comp_data->sub.list, ec);
          }

        /* TODO: add callbacks ?? */
     }

   ec->comp_data->surface = surface_resource;
   ec->comp_data->sub.data = sdata;

   return EINA_TRUE;

res_err:
   free(sdata);
dat_err:
   return EINA_FALSE;
}

static void
_e_comp_wl_subcompositor_cb_destroy(struct wl_client *client EINA_UNUSED, struct wl_resource *resource)
{
   wl_resource_destroy(resource);
}

static void
_e_comp_wl_subcompositor_cb_subsurface_get(struct wl_client *client EINA_UNUSED, struct wl_resource *resource, uint32_t id, struct wl_resource *surface_resource, struct wl_resource *parent_resource)
{
   E_Client *ec, *epc = NULL;
   static const char where[] = "get_subsurface: wl_subsurface@";

   if (!(ec = wl_resource_get_user_data(surface_resource))) return;
   if (!(epc = wl_resource_get_user_data(parent_resource))) return;

   if (ec == epc)
     {
        wl_resource_post_error(resource, WL_SUBCOMPOSITOR_ERROR_BAD_SURFACE,
                               "%s%d: wl_surface@%d cannot be its own parent",
                               where, id, wl_resource_get_id(surface_resource));
        return;
     }

   if (e_object_is_del(E_OBJECT(ec))) return;
   if (e_object_is_del(E_OBJECT(epc))) return;

   /* check if this surface is already a sub-surface */
   if ((ec->comp_data) && (ec->comp_data->sub.data))
     {
        wl_resource_post_error(resource,
                               WL_SUBCOMPOSITOR_ERROR_BAD_SURFACE,
                               "%s%d: wl_surface@%d is already a sub-surface",
                               where, id, wl_resource_get_id(surface_resource));
        return;
     }

   /* try to create a new subsurface */
   if (!_e_comp_wl_subsurface_create(ec, epc, id, surface_resource))
     ERR("Failed to create subsurface for surface %d",
         wl_resource_get_id(surface_resource));
}

static const struct wl_subcompositor_interface _e_subcomp_interface =
{
   _e_comp_wl_subcompositor_cb_destroy,
   _e_comp_wl_subcompositor_cb_subsurface_get
};

static void
_e_comp_wl_subcompositor_cb_bind(struct wl_client *client, void *data EINA_UNUSED, uint32_t version, uint32_t id)
{
   struct wl_resource *res;

   if (!(res =
         wl_resource_create(client, &wl_subcompositor_interface,
                            version, id)))
     {
        ERR("Could not create subcompositor resource");
        wl_client_post_no_memory(client);
        return;
     }

   wl_resource_set_implementation(res, &_e_subcomp_interface, e_comp, NULL);

   /* TODO: add handlers for client iconify/uniconify */
}

static void
_e_comp_wl_sr_cb_provide_uuid(struct wl_client *client EINA_UNUSED, struct wl_resource *resource EINA_UNUSED, const char *uuid)
{
   DBG("Provide UUID callback called for UUID: %s", uuid);
}

static const struct zwp_e_session_recovery_interface _e_session_recovery_interface =
{
   _e_comp_wl_sr_cb_provide_uuid,
};

static void
_e_comp_wl_session_recovery_cb_bind(struct wl_client *client, void *data EINA_UNUSED, uint32_t version EINA_UNUSED, uint32_t id)
{
   struct wl_resource *res;

   if (!(res = wl_resource_create(client, &zwp_e_session_recovery_interface, 1, id)))
     {
        ERR("Could not create session_recovery interface");
        wl_client_post_no_memory(client);
        return;
     }

   /* set implementation on resource */
   wl_resource_set_implementation(res, &_e_session_recovery_interface, e_comp, NULL);
}

static void
_e_comp_wl_screenshooter_cb_shoot(struct wl_client *client EINA_UNUSED, struct wl_resource *resource, struct wl_resource *output_resource, struct wl_resource *buffer_resource)
{
   E_Comp_Wl_Output *output;
   E_Comp_Wl_Buffer *buffer;
   struct wl_shm_buffer *shm_buffer;
   int stride;
   void *pixels, *d;

   output = wl_resource_get_user_data(output_resource);
   buffer = e_comp_wl_buffer_get(buffer_resource);

   if (!buffer)
     {
        wl_resource_post_no_memory(resource);
        return;
     }

   if ((buffer->w < output->w) || (buffer->h < output->h))
     {
        ERR("Buffer size less than output");
        /* send done with bad buffer error */
        return;
     }

   stride = buffer->w * sizeof(int);

   pixels = malloc(stride * buffer->h);
   if (!pixels)
     {
        /* send done with bad buffer error */
        ERR("Could not allocate space for destination");
        return;
     }

   if (e_comp_wl->screenshooter.read_pixels)
     e_comp_wl->screenshooter.read_pixels(output, pixels);

   shm_buffer = wl_shm_buffer_get(buffer->resource);
   if (!shm_buffer)
     {
        ERR("Could not get shm_buffer from resource");
        return;
     }

   stride = wl_shm_buffer_get_stride(shm_buffer);
   d = wl_shm_buffer_get_data(shm_buffer);
   if (!d)
     {
        ERR("Could not get buffer data");
        return;
     }

   wl_shm_buffer_begin_access(shm_buffer);
   memcpy(d, pixels, buffer->h * stride);
   wl_shm_buffer_end_access(shm_buffer);

   screenshooter_send_done(resource);
}

static const struct screenshooter_interface _e_screenshooter_interface =
{
   _e_comp_wl_screenshooter_cb_shoot
};

static void
_e_comp_wl_screenshooter_cb_bind(struct wl_client *client, void *data, uint32_t version EINA_UNUSED, uint32_t id)
{
   struct wl_resource *res;

   res = wl_resource_create(client, &screenshooter_interface, 1, id);
   if (!res)
     {
        ERR("Could not create screenshooter resource");
        wl_client_post_no_memory(client);
        return;
     }

   wl_resource_set_implementation(res, &_e_screenshooter_interface, data, NULL);
}

static void
_e_comp_wl_client_cb_new(void *data EINA_UNUSED, E_Client *ec)
{
   uint64_t win;

   /* make sure this is a wayland client */
   if (e_pixmap_type_get(ec->pixmap) != E_PIXMAP_TYPE_WL) return;

   /* get window id from pixmap */
   win = e_pixmap_window_get(ec->pixmap);

   /* ignore fake root windows */
   if ((ec->override) && ((ec->x == -77) && (ec->y == -77)))
     {
        e_comp_ignore_win_add(E_PIXMAP_TYPE_WL, win);
        e_object_del(E_OBJECT(ec));
        return;
     }

   if (!(ec->comp_data = E_NEW(E_Comp_Client_Data, 1)))
     {
        ERR("Could not allocate new client data structure");
        return;
     }

   wl_signal_init(&ec->comp_data->destroy_signal);

   _e_comp_wl_surface_state_init(&ec->comp_data->pending, ec->w, ec->h);

   /* set initial client properties */
   ec->argb = EINA_TRUE;
   ec->no_shape_cut = EINA_TRUE;
   ec->redirected = ec->ignored = 1;
   ec->border_size = 0;

   /* NB: could not find a better place to do this, BUT for internal windows,
    * we need to set delete_request else the close buttons on the frames do
    * basically nothing */
   if ((ec->internal) || (ec->internal_elm_win))
     ec->icccm.delete_request = EINA_TRUE;

   /* set initial client data properties */
   ec->comp_data->mapped = EINA_FALSE;

   /* add this client to the hash */
   /* eina_hash_add(clients_win_hash, &win, ec); */
}

static void
_e_comp_wl_client_cb_del(void *data EINA_UNUSED, E_Client *ec)
{
   /* Eina_Rectangle *dmg; */
   struct wl_resource *cb;
   E_Client *subc;

   /* make sure this is a wayland client */
   if (e_pixmap_type_get(ec->pixmap) != E_PIXMAP_TYPE_WL) return;

   /* remove sub list */
   EINA_LIST_FREE(ec->comp_data->sub.list, subc)
     subc->comp_data->sub.data->parent = NULL;

   if ((ec->parent) && (ec->parent->modal == ec))
     {
        ec->parent->lock_close = EINA_FALSE;
        ec->parent->modal = NULL;
     }

   wl_signal_emit(&ec->comp_data->destroy_signal, &ec->comp_data->surface);

   _e_comp_wl_surface_state_finish(&ec->comp_data->pending);

   EINA_LIST_FREE(ec->comp_data->frames, cb)
     wl_resource_destroy(cb);

   if (ec->comp_data->surface)
     wl_resource_set_user_data(ec->comp_data->surface, NULL);

   if (ec->internal_elm_win)
     _e_comp_wl_surface_render_stop(ec);
   _e_comp_wl_focus_check();
}

static void
_e_comp_wl_client_cb_focus_set(void *data EINA_UNUSED, E_Client *ec)
{
   if (e_pixmap_type_get(ec->pixmap) != E_PIXMAP_TYPE_WL) return;

   /* send configure */
   if (ec->comp_data->shell.configure_send)
     {
        if (ec->comp_data->shell.surface)
          _e_comp_wl_configure_send(ec, 0);
     }

   //if ((ec->icccm.take_focus) && (ec->icccm.accepts_focus))
     //e_grabinput_focus(e_client_util_win_get(ec),
                       //E_FOCUS_METHOD_LOCALLY_ACTIVE);
   //else if (!ec->icccm.accepts_focus)
     //e_grabinput_focus(e_client_util_win_get(ec),
                       //E_FOCUS_METHOD_GLOBALLY_ACTIVE);
   //else if (!ec->icccm.take_focus)
     //e_grabinput_focus(e_client_util_win_get(ec), E_FOCUS_METHOD_PASSIVE);

   e_comp_wl->kbd.focus = ec->comp_data->surface;
}

static void
_e_comp_wl_client_cb_focus_unset(void *data EINA_UNUSED, E_Client *ec)
{
   if (e_pixmap_type_get(ec->pixmap) != E_PIXMAP_TYPE_WL) return;

   /* send configure */
   if (ec->comp_data->shell.configure_send)
     {
        if (ec->comp_data->shell.surface)
          _e_comp_wl_configure_send(ec, 0);
     }

   _e_comp_wl_focus_check();

   if (e_comp_wl->kbd.focus == ec->comp_data->surface)
     e_comp_wl->kbd.focus = NULL;
}

static void
_e_comp_wl_client_cb_resize_begin(void *data EINA_UNUSED, E_Client *ec)
{
   if (e_pixmap_type_get(ec->pixmap) != E_PIXMAP_TYPE_WL) return;

   e_comp_wl->resize.edges = 0;
   if (ec->keyboard_resizing) return;
   switch (ec->resize_mode)
     {
      case E_POINTER_RESIZE_T: // 1
        e_comp_wl->resize.edges = 1;
        break;
      case E_POINTER_RESIZE_B: // 2
        e_comp_wl->resize.edges = 2;
        break;
      case E_POINTER_RESIZE_L: // 4
        e_comp_wl->resize.edges = 4;
        break;
      case E_POINTER_RESIZE_R: // 8
        e_comp_wl->resize.edges = 8;
        break;
      case E_POINTER_RESIZE_TL: // 5
        e_comp_wl->resize.edges = 5;
        break;
      case E_POINTER_RESIZE_TR: // 9
        e_comp_wl->resize.edges = 9;
        break;
      case E_POINTER_RESIZE_BL: // 6
        e_comp_wl->resize.edges = 6;
        break;
      case E_POINTER_RESIZE_BR: // 10
        e_comp_wl->resize.edges = 10;
        break;
      default:
        break;
     }
}

static void
_e_comp_wl_client_cb_resize_end(void *data EINA_UNUSED, E_Client *ec)
{
   if (e_object_is_del(E_OBJECT(ec))) return;
   if (e_pixmap_type_get(ec->pixmap) != E_PIXMAP_TYPE_WL) return;

   e_comp_wl->resize.edges = 0;
   e_comp_wl->resize.resource = NULL;

   if (ec->pending_resize)
     {

        ec->changes.pos = EINA_TRUE;
        ec->changes.size = EINA_TRUE;
        EC_CHANGED(ec);
     }

   E_FREE_LIST(ec->pending_resize, free);
}

static void
_e_comp_wl_cb_output_unbind(struct wl_resource *resource)
{
   E_Comp_Wl_Output *output;

   if (!(output = wl_resource_get_user_data(resource))) return;

   output->resources = eina_list_remove(output->resources, resource);
}

static void
_e_comp_wl_cb_output_bind(struct wl_client *client, void *data, uint32_t version, uint32_t id)
{
   E_Comp_Wl_Output *output;
   struct wl_resource *resource;

   if (!(output = data)) return;

   resource =
     wl_resource_create(client, &wl_output_interface, version, id);
   if (!resource)
     {
        wl_client_post_no_memory(client);
        return;
     }

   DBG("Bound Output: %s", output->id);
   DBG("\tGeom: %d %d %d %d", output->x, output->y, output->w, output->h);

   output->resources = eina_list_append(output->resources, resource);

   wl_resource_set_implementation(resource, NULL, output,
                                  _e_comp_wl_cb_output_unbind);
   wl_resource_set_user_data(resource, output);

   wl_output_send_geometry(resource, output->x, output->y,
                           output->phys_width, output->phys_height,
                           output->subpixel, output->make ?: "",
                           output->model ?: "", output->transform);

   if (version >= WL_OUTPUT_SCALE_SINCE_VERSION)
     wl_output_send_scale(resource, output->scale);

   /* 3 == preferred + current */
   wl_output_send_mode(resource, 3, output->w, output->h, output->refresh);

   if (version >= WL_OUTPUT_DONE_SINCE_VERSION)
     wl_output_send_done(resource);
}

static Eina_Bool
_e_comp_wl_compositor_create(void)
{
   E_Comp_Wl_Data *cdata;

   /* check for existing compositor. create if needed */
   if (e_comp->comp_type == E_PIXMAP_TYPE_NONE)
     E_OBJECT_DEL_SET(e_comp, _e_comp_wl_compositor_cb_del);

   /* create new compositor data */
   if (!(cdata = E_NEW(E_Comp_Wl_Data, 1)))
     {
       ERR("Could not create compositor data");
       return EINA_FALSE;
     }

   /* set compositor wayland data */
   e_comp_wl = e_comp->wl_comp_data = cdata;

   /* set wayland log handler */
   /* wl_log_set_handler_server(_e_comp_wl_log_cb_print); */

   /* try to create an ecore_wl2 display */
   cdata->ewd = ecore_wl2_display_create(NULL);
   if (!cdata->ewd)
     {
        ERR("Could not create a Wayland display");
        free(cdata);
        return EINA_FALSE;
     }

   cdata->wl.disp = ecore_wl2_display_get(cdata->ewd);
   if (!cdata->wl.disp)
     {
        ERR("Could not create a Wayland display");
        goto disp_err;
     }

   /* e_env_set("WAYLAND_DISPLAY", name); */

   /* initialize compositor signals */
   wl_signal_init(&cdata->signals.surface.create);
   wl_signal_init(&cdata->signals.surface.activate);
   wl_signal_init(&cdata->signals.surface.kill);

   /* cdata->output.transform = WL_OUTPUT_TRANSFORM_NORMAL; */
   /* cdata->output.scale = e_scale; */

   /* try to add compositor to wayland globals */
   if (!wl_global_create(cdata->wl.disp, &wl_compositor_interface,
                         COMPOSITOR_VERSION, e_comp,
                         _e_comp_wl_compositor_cb_bind))
     {
        ERR("Could not add compositor to wayland globals");
        goto comp_global_err;
     }

   /* try to add subcompositor to wayland globals */
   if (!wl_global_create(cdata->wl.disp, &wl_subcompositor_interface, 1,
                         e_comp, _e_comp_wl_subcompositor_cb_bind))
     {
        ERR("Could not add subcompositor to wayland globals");
        goto comp_global_err;
     }

   /* try to add session_recovery to wayland globals */
   if (!wl_global_create(cdata->wl.disp, &zwp_e_session_recovery_interface, 1,
                         e_comp, _e_comp_wl_session_recovery_cb_bind))
     {
        ERR("Could not add session_recovery to wayland globals");
        goto comp_global_err;
     }

   /* initialize shm mechanism */
   wl_display_init_shm(cdata->wl.disp);

   cdata->screenshooter.global =
     wl_global_create(cdata->wl.disp, &screenshooter_interface, 1,
                      e_comp, _e_comp_wl_screenshooter_cb_bind);
   if (!cdata->screenshooter.global)
     {
        ERR("Could not create screenshooter global");
        goto comp_global_err;
     }

   /* _e_comp_wl_cb_randr_change(NULL, 0, NULL); */

   /* try to init data manager */
   if (!e_comp_wl_data_manager_init())
     {
        ERR("Could not initialize data manager");
        goto data_err;
     }

   /* try to init input */
   if (!e_comp_wl_input_init())
     {
        ERR("Could not initialize input");
        goto input_err;
     }

#ifndef HAVE_WAYLAND_ONLY
   if (e_comp_util_has_x())
     {
        E_Config_XKB_Layout *ekbd;
        Ecore_X_Atom xkb = 0;
        Ecore_X_Window root = 0;
        int len = 0;
        unsigned char *dat;
        char *rules = NULL, *model = NULL, *layout = NULL;

        if ((ekbd = e_xkb_layout_get()))
          {
             model = strdup(ekbd->model);
             layout = strdup(ekbd->name);
          }

        root = ecore_x_window_root_first_get();
        xkb = ecore_x_atom_get("_XKB_RULES_NAMES");
        ecore_x_window_prop_property_get(root, xkb, ECORE_X_ATOM_STRING,
                                         1024, &dat, &len);
        if ((dat) && (len > 0))
          {
             rules = (char *)dat;
             dat += strlen((const char *)dat) + 1;
             if (!model) model = strdup((const char *)dat);
             dat += strlen((const char *)dat) + 1;
             if (!layout) layout = strdup((const char *)dat);
          }

        /* fallback */
        if (!rules) rules = strdup("evdev");
        if (!model) model = strdup("pc105");
        if (!layout) layout = strdup("us");

        /* update compositor keymap */
        e_comp_wl_input_keymap_set(rules, model, layout, NULL, NULL);
     }
#endif
   e_comp_wl->wl.client_disp = ecore_wl2_display_connect(NULL);

   /* setup module idler to load shell mmodule */
   ecore_idler_add(_e_comp_wl_cb_module_idle, cdata);

   if (e_comp->comp_type == E_PIXMAP_TYPE_X)
     {
        e_comp_wl_input_pointer_enabled_set(EINA_TRUE);
        e_comp_wl_input_keyboard_enabled_set(EINA_TRUE);
        e_comp_wl_input_touch_enabled_set(EINA_TRUE);
     }

   return EINA_TRUE;

input_err:
   e_comp_wl_data_manager_shutdown();
data_err:
comp_global_err:
   /* e_env_unset("WAYLAND_DISPLAY"); */
/* sock_err: */
   ecore_wl2_display_destroy(cdata->ewd);
disp_err:
   free(cdata);
   return EINA_FALSE;
}

static Eina_Bool
_e_comp_wl_desklock_show(void)
{
   return e_comp_grab_input(1, 1);
}

static void
_e_comp_wl_desklock_hide(void)
{
   e_comp_ungrab_input(1, 1);
}

static void
_e_comp_wl_gl_shutdown(void)
{
   if (!e_comp->gl) return;
   if (e_comp_wl->wl.glapi->evasglUnbindWaylandDisplay)
     e_comp_wl->wl.glapi->evasglUnbindWaylandDisplay(e_comp_wl->wl.gl, e_comp_wl->wl.disp);
   evas_gl_surface_destroy(e_comp_wl->wl.gl, e_comp_wl->wl.glsfc);
   evas_gl_context_destroy(e_comp_wl->wl.gl, e_comp_wl->wl.glctx);
   evas_gl_free(e_comp_wl->wl.gl);
   evas_gl_config_free(e_comp_wl->wl.glcfg);
}

static void
_e_comp_wl_gl_init(void *d EINA_UNUSED)
{
   e_comp_wl->wl.gl = evas_gl_new(e_comp->evas);
   if (!e_comp_wl->wl.gl) return;
   e_comp_wl->wl.glctx = evas_gl_context_create(e_comp_wl->wl.gl, NULL);
   e_comp_wl->wl.glcfg = evas_gl_config_new();
   e_comp_wl->wl.glsfc = evas_gl_surface_create(e_comp_wl->wl.gl, e_comp_wl->wl.glcfg, 1, 1);
   evas_gl_make_current(e_comp_wl->wl.gl, e_comp_wl->wl.glsfc, e_comp_wl->wl.glctx);
   e_comp_wl->wl.glapi = evas_gl_context_api_get(e_comp_wl->wl.gl, e_comp_wl->wl.glctx);
   if (e_comp_wl->wl.glapi->evasglBindWaylandDisplay)
     e_comp->gl = e_comp_wl->wl.glapi->evasglBindWaylandDisplay(e_comp_wl->wl.gl, e_comp_wl->wl.disp);
   else
     _e_comp_wl_gl_shutdown();
}

/* public functions */

/**
 * Creates and initializes a Wayland compositor with ecore.
 * Registers callback handlers for keyboard and mouse activity
 * and other client events.
 *
 * @returns true on success, false if initialization failed.
 */
E_API Eina_Bool
e_comp_wl_init(void)
{
   /* try to init ecore_wayland */
   if (!ecore_wl2_init())
     {
        e_error_message_show(_("Enlightenment cannot initialize Ecore_Wl2!\n"));
        return EINA_FALSE;
     }

   /* set gl available if we have ecore_evas support */
   if (ecore_evas_engine_type_supported_get(ECORE_EVAS_ENGINE_WAYLAND_EGL) ||
       ecore_evas_engine_type_supported_get(ECORE_EVAS_ENGINE_OPENGL_DRM))
     e_comp_gl_set(EINA_TRUE);

   /* try to create a wayland compositor */
   if (!_e_comp_wl_compositor_create())
     {
        e_error_message_show(_("Enlightenment cannot create a Wayland Compositor!\n"));
        return EINA_FALSE;
     }

   /* create hash to store clients */
   /* clients_win_hash = eina_hash_int64_new(NULL); */

   /* add event handlers to catch E events */
   if (e_comp->comp_type != E_PIXMAP_TYPE_X)
     {
        if (e_randr2_init())
          e_randr2_screens_setup(-1, -1);
        elm_config_preferred_engine_set("wayland_shm");
     }
   e_util_env_set("ELM_DISPLAY", "wl");
   if (e_comp_gl_get())
     ecore_job_add(_e_comp_wl_gl_init, NULL);

   E_LIST_HANDLER_APPEND(handlers, E_EVENT_RANDR_CHANGE,
                                _e_comp_wl_cb_randr_change, NULL);

   E_LIST_HANDLER_APPEND(handlers, E_EVENT_COMP_OBJECT_ADD,
                         _e_comp_wl_cb_comp_object_add, NULL);

   E_LIST_HANDLER_APPEND(handlers, ECORE_EVENT_MOUSE_MOVE,
                         _e_comp_wl_cb_mouse_move, NULL);

   /* add hooks to catch e_client events */
   e_client_hook_add(E_CLIENT_HOOK_NEW_CLIENT, _e_comp_wl_client_cb_new, NULL);
   e_client_hook_add(E_CLIENT_HOOK_DEL, _e_comp_wl_client_cb_del, NULL);

   e_client_hook_add(E_CLIENT_HOOK_FOCUS_SET,
                     _e_comp_wl_client_cb_focus_set, NULL);
   e_client_hook_add(E_CLIENT_HOOK_FOCUS_UNSET,
                     _e_comp_wl_client_cb_focus_unset, NULL);

   e_client_hook_add(E_CLIENT_HOOK_RESIZE_BEGIN,
                     _e_comp_wl_client_cb_resize_begin, NULL);
   e_client_hook_add(E_CLIENT_HOOK_RESIZE_END,
                     _e_comp_wl_client_cb_resize_end, NULL);

   e_desklock_show_hook_add(_e_comp_wl_desklock_show);
   e_desklock_hide_hook_add(_e_comp_wl_desklock_hide);

   E_EVENT_WAYLAND_GLOBAL_ADD = ecore_event_type_new();

   _last_event_time = ecore_loop_time_get();

   return EINA_TRUE;
}

/**
 * Get the signal that is fired for the creation of a Wayland surface.
 *
 * @returns the corresponding Wayland signal
 */
E_API struct wl_signal
e_comp_wl_surface_create_signal_get(void)
{
   return e_comp_wl->signals.surface.create;
}

/* internal functions */
EINTERN void
e_comp_wl_shutdown(void)
{
   /* free handlers */
   E_FREE_LIST(handlers, ecore_event_handler_del);

   /* while (e_comp_wl->wl.globals) */
   /*   { */
   /*      Ecore_Wl_Global *global; */

   /*      global = */
   /*        EINA_INLIST_CONTAINER_GET(e_comp_wl->wl.globals, Ecore_Wl_Global); */

   /*      e_comp_wl->wl.globals = */
   /*        eina_inlist_remove(e_comp_wl->wl.globals, e_comp_wl->wl.globals); */

   /*      free(global->interface); */
   /*      free(global); */
   /*   } */

   if (e_comp_wl->wl.shm) wl_shm_destroy(e_comp_wl->wl.shm);
   _e_comp_wl_gl_shutdown();

   ecore_wl2_display_destroy(e_comp_wl->ewd);

   /* shutdown ecore_wayland */
   ecore_wl2_shutdown();
}

EINTERN struct wl_resource *
e_comp_wl_surface_create(struct wl_client *client, int version, uint32_t id)
{
   struct wl_resource *ret = NULL;

   if ((ret = wl_resource_create(client, &wl_surface_interface, version, id)))
     DBG("Created Surface: %d", wl_resource_get_id(ret));

   return ret;
}

EINTERN Eina_Bool
e_comp_wl_surface_commit(E_Client *ec)
{
   Eina_Bool ignored;

   _e_comp_wl_surface_state_commit(ec, &ec->comp_data->pending);
   if (!e_comp_object_damage_exists(ec->frame))
     e_pixmap_image_clear(ec->pixmap, 1);

   ignored = ec->ignored;

   if (!e_pixmap_usable_get(ec->pixmap))
     {
        if (ec->comp_data->mapped)
          {
             if ((ec->comp_data->shell.surface) && (ec->comp_data->shell.unmap))
               ec->comp_data->shell.unmap(ec->comp_data->shell.surface);
             else if (e_client_has_xwindow(ec))
               {
                  ec->visible = EINA_FALSE;
                  evas_object_hide(ec->frame);
                  ec->comp_data->mapped = 0;
               }
          }
     }
   else
     {
        if (!ec->comp_data->mapped)
          {
             if ((ec->comp_data->shell.surface) && (ec->comp_data->shell.map))
               ec->comp_data->shell.map(ec->comp_data->shell.surface);
             else if (e_client_has_xwindow(ec))
               {
                  ec->visible = EINA_TRUE;
                  ec->ignored = 0;
                  evas_object_show(ec->frame);
                  ec->comp_data->mapped = 1;
               }
          }
     }
   ec->ignored = ignored;
   return EINA_TRUE;
}

EINTERN Eina_Bool
e_comp_wl_subsurface_commit(E_Client *ec)
{
   E_Comp_Wl_Subsurf_Data *sdata;

   /* check for valid subcompositor data */
   if (!(sdata = ec->comp_data->sub.data)) return EINA_FALSE;

   if (_e_comp_wl_subsurface_synchronized_get(sdata))
     _e_comp_wl_subsurface_commit_to_cache(ec);
   else
     {
        E_Client *subc;
        Eina_List *l;

        if (sdata->cached.has_data)
          {
             _e_comp_wl_subsurface_commit_to_cache(ec);
             _e_comp_wl_subsurface_commit_from_cache(ec);
          }
        else
          e_comp_wl_surface_commit(ec);

        EINA_LIST_FOREACH(ec->comp_data->sub.list, l, subc)
          {
             if (ec != subc)
               _e_comp_wl_subsurface_parent_commit(subc, EINA_FALSE);
          }
     }

   return EINA_TRUE;
}

EINTERN void
e_comp_wl_buffer_reference(E_Comp_Wl_Buffer_Ref *ref, E_Comp_Wl_Buffer *buffer)
{
   if ((ref->buffer) && (buffer != ref->buffer))
     {
        ref->buffer->busy--;
        if (ref->buffer->busy == 0)
          {
             if (!wl_resource_get_client(ref->buffer->resource)) return;
             wl_resource_queue_event(ref->buffer->resource, WL_BUFFER_RELEASE);
          }
        wl_list_remove(&ref->destroy_listener.link);
     }

   if ((buffer) && (buffer != ref->buffer))
     {
        buffer->busy++;
        wl_signal_add(&buffer->destroy_signal, &ref->destroy_listener);
     }

   ref->buffer = buffer;
   ref->destroy_listener.notify = _e_comp_wl_buffer_reference_cb_destroy;
}

/**
 * Get the buffer for a given resource.
 *
 * Retrieves the Wayland SHM buffer for the resource and
 * uses it to create a new E_Comp_Wl_Buffer object. This
 * buffer will be freed when the resource is destroyed.
 *
 * @param resource that owns the desired buffer
 * @returns a new E_Comp_Wl_Buffer object
 */
E_API E_Comp_Wl_Buffer *
e_comp_wl_buffer_get(struct wl_resource *resource)
{
   E_Comp_Wl_Buffer *buffer;
   struct wl_listener *listener;
   struct wl_shm_buffer *shmbuff;

   listener =
     wl_resource_get_destroy_listener(resource, _e_comp_wl_buffer_cb_destroy);
   if (listener)
     return container_of(listener, E_Comp_Wl_Buffer, destroy_listener);

   if (!(buffer = E_NEW(E_Comp_Wl_Buffer, 1))) return NULL;
   shmbuff = wl_shm_buffer_get(resource);
   if (shmbuff)
     {
        buffer->w = wl_shm_buffer_get_width(shmbuff);
        buffer->h = wl_shm_buffer_get_height(shmbuff);
     }
   else if (e_comp->gl)
     {
        e_comp_wl->wl.glapi->evasglQueryWaylandBuffer(e_comp_wl->wl.gl, resource, EGL_WIDTH, &buffer->w);
        e_comp_wl->wl.glapi->evasglQueryWaylandBuffer(e_comp_wl->wl.gl, resource, EGL_HEIGHT, &buffer->h);
     }
   buffer->shm_buffer = shmbuff;

   buffer->resource = resource;
   wl_signal_init(&buffer->destroy_signal);
   buffer->destroy_listener.notify = _e_comp_wl_buffer_cb_destroy;
   wl_resource_add_destroy_listener(resource, &buffer->destroy_listener);

   return buffer;
}

/**
 * Computes the time since the last input event.
 *
 * @returns time in seconds.
 */
E_API double
e_comp_wl_idle_time_get(void)
{
   return (ecore_loop_time_get() - _last_event_time);
}

static E_Comp_Wl_Output *
_e_comp_wl_output_get(Eina_List *outputs, const char *id)
{
   Eina_List *l;
   E_Comp_Wl_Output *output;

   EINA_LIST_FOREACH(outputs, l, output)
     {
       if (!strcmp(output->id, id))
         return output;
     }

   return NULL;
}

/**
 * Initializes information about one display output.
 *
 * Adds or updates the given data about a single display output,
 * with an id matching the provided id.
 *
 * @param id         identification of output to be added or changed
 * @param make       manufacturer name of the display output
 * @param model      model name of the display output
 * @param x          output's top left corner x coordinate
 * @param y          output's top left corner y coordinate
 * @param w          output's width in pixels
 * @param h          output's height in pixels
 * @param pw         output's physical width in millimeters
 * @param ph         output's physical height in millimeters
 * @param refresh    output's refresh rate in Hz
 * @param subpixel   output's subpixel layout
 * @param transform  output's rotation and/or mirror transformation
 *
 * @returns True if a display output object could be added or updated
 */
E_API Eina_Bool
e_comp_wl_output_init(const char *id, const char *make, const char *model,
                      int x, int y, int w, int h, int pw, int ph,
                      unsigned int refresh, unsigned int subpixel,
                      unsigned int transform)
{
   E_Comp_Wl_Output *output;
   Eina_List *l2;
   struct wl_resource *resource;

   /* retrieve named output; or create it if it doesn't exist */
   output = _e_comp_wl_output_get(e_comp_wl->outputs, id);
   if (!output)
     {
        if (!(output = E_NEW(E_Comp_Wl_Output, 1))) return EINA_FALSE;

        if (id) output->id = eina_stringshare_add(id);
        if (make) output->make = eina_stringshare_add(make);
        if (model) output->model = eina_stringshare_add(model);

        e_comp_wl->outputs = eina_list_append(e_comp_wl->outputs, output);

        output->global = 
          wl_global_create(e_comp_wl->wl.disp, &wl_output_interface,
                           2, output, _e_comp_wl_cb_output_bind);

        output->resources = NULL;
        output->scale = e_scale;
     }

   /* update the output details */
   output->x = x;
   output->y = y;
   output->w = w;
   output->h = h;
   output->phys_width = pw;
   output->phys_height = ph;
   output->refresh = refresh * 1000;
   output->subpixel = subpixel;
   output->transform = transform;

   if (output->scale <= 0)
     output->scale = e_scale;

   /* if we have bound resources, send updates */
   EINA_LIST_FOREACH(output->resources, l2, resource)
     {
        wl_output_send_geometry(resource,
                                output->x, output->y,
                                output->phys_width,
                                output->phys_height,
                                output->subpixel,
                                output->make ?: "", output->model ?: "",
                                output->transform);

        if (wl_resource_get_version(resource) >= WL_OUTPUT_SCALE_SINCE_VERSION)
          wl_output_send_scale(resource, output->scale);

        /* 3 == preferred + current */
        wl_output_send_mode(resource, 3, output->w, output->h, output->refresh);

        if (wl_resource_get_version(resource) >= WL_OUTPUT_DONE_SINCE_VERSION)
          wl_output_send_done(resource);
     }

   return EINA_TRUE;
}

E_API void
e_comp_wl_output_remove(const char *id)
{
   E_Comp_Wl_Output *output;

   output = _e_comp_wl_output_get(e_comp_wl->outputs, id);
   if (output)
     {
        e_comp_wl->outputs = eina_list_remove(e_comp_wl->outputs, output);

        /* wl_global_destroy(output->global); */

        /* eina_stringshare_del(output->id); */
        /* eina_stringshare_del(output->make); */
        /* eina_stringshare_del(output->model); */

        /* free(output); */
     }
}

EINTERN Eina_Bool
e_comp_wl_key_down(Ecore_Event_Key *ev)
{
   E_Client *ec = NULL;
   uint32_t serial, *end, *k, keycode;

   if ((e_comp->comp_type != E_PIXMAP_TYPE_WL) || (ev->window != e_comp->ee_win)) return EINA_FALSE;
   _last_event_time = ecore_loop_time_get();

   keycode = (ev->keycode - 8);
   if (!(e_comp_wl = e_comp->wl_comp_data)) return EINA_FALSE;

#ifndef E_RELEASE_BUILD
   if ((ev->modifiers & ECORE_EVENT_MODIFIER_CTRL) &&
       ((ev->modifiers & ECORE_EVENT_MODIFIER_ALT) ||
       (ev->modifiers & ECORE_EVENT_MODIFIER_ALTGR)) &&
       eina_streq(ev->key, "BackSpace"))
     exit(0);
#endif

   end = (uint32_t *)e_comp_wl->kbd.keys.data + (e_comp_wl->kbd.keys.size / sizeof(*k));

   for (k = e_comp_wl->kbd.keys.data; k < end; k++)
     {
        /* ignore server-generated key repeats */
        if (*k == keycode) return EINA_FALSE;
     }

   e_comp_wl->kbd.keys.size = (const char *)end - (const char *)e_comp_wl->kbd.keys.data;
   if (!(k = wl_array_add(&e_comp_wl->kbd.keys, sizeof(*k))))
     {
        DBG("wl_array_add: Out of memory\n");
        return EINA_FALSE;
     }
   *k = keycode;

   if ((!e_client_action_get()) && (!e_comp->input_key_grabs) &&
       (!e_menu_grab_window_get()))
     {
        ec = e_client_focused_get();
        if (ec && ec->comp_data->surface && e_comp_wl->kbd.focused)
          {
             struct wl_resource *res;
             Eina_List *l;

             serial = wl_display_next_serial(e_comp_wl->wl.disp);
             EINA_LIST_FOREACH(e_comp_wl->kbd.focused, l, res)
               wl_keyboard_send_key(res, serial, ev->timestamp,
                               keycode, WL_KEYBOARD_KEY_STATE_PRESSED);
          }
     }

   /* update modifier state */
   e_comp_wl_input_keyboard_state_update(keycode, EINA_TRUE);
   return !!ec;
}

EINTERN Eina_Bool
e_comp_wl_key_up(Ecore_Event_Key *ev)
{
   E_Client *ec = NULL;
   uint32_t serial, *end, *k, keycode;
   struct wl_resource *res;
   Eina_List *l;

   if ((e_comp->comp_type != E_PIXMAP_TYPE_WL) ||
       (ev->window != e_comp->ee_win)) return EINA_FALSE;

   _last_event_time = ecore_loop_time_get();

   keycode = (ev->keycode - 8);
   if (!(e_comp_wl = e_comp->wl_comp_data)) return EINA_FALSE;

   end = (uint32_t *)e_comp_wl->kbd.keys.data + (e_comp_wl->kbd.keys.size / sizeof(*k));
   for (k = e_comp_wl->kbd.keys.data; k < end; k++)
     if (*k == keycode) *k = *--end;

   e_comp_wl->kbd.keys.size =
     (const char *)end - (const char *)e_comp_wl->kbd.keys.data;

   if ((!e_client_action_get()) && (!e_comp->input_key_grabs) &&
       (!e_menu_grab_window_get()))
     {
        ec = e_client_focused_get();

        if (e_comp_wl->kbd.focused)
          {
             serial = wl_display_next_serial(e_comp_wl->wl.disp);
             EINA_LIST_FOREACH(e_comp_wl->kbd.focused, l, res)
               wl_keyboard_send_key(res, serial, ev->timestamp,
                                    keycode, WL_KEYBOARD_KEY_STATE_RELEASED);
          }
     }

   /* update modifier state */
   e_comp_wl_input_keyboard_state_update(keycode, EINA_FALSE);
   return !!ec;
}

E_API Eina_Bool
e_comp_wl_evas_handle_mouse_button(E_Client *ec, uint32_t timestamp, uint32_t button_id, uint32_t state)
{
   Eina_List *l;
   struct wl_client *wc;
   uint32_t serial, btn;
   struct wl_resource *res;

   if (ec->cur_mouse_action || ec->border_menu || e_comp_wl->drag)
     return EINA_FALSE;
   if (e_object_is_del(E_OBJECT(ec))) return EINA_FALSE;
   if (ec->ignored) return EINA_FALSE;

   switch (button_id)
     {
      case 1:
        btn = BTN_LEFT;
        break;
      case 2:
        btn = BTN_MIDDLE;
        break;
      case 3:
        btn = BTN_RIGHT;
        break;
      default:
        btn = button_id;
        break;
     }

   e_comp_wl->ptr.button = btn;

   if (!ec->comp_data->surface) return EINA_FALSE;

   if (!eina_list_count(e_comp_wl->ptr.resources))
     return EINA_TRUE;

   wc = wl_resource_get_client(ec->comp_data->surface);
   serial = wl_display_next_serial(e_comp_wl->wl.disp);

   EINA_LIST_FOREACH(e_comp_wl->ptr.resources, l, res)
     {
        if (wl_resource_get_client(res) != wc) continue;
        if (!e_comp_wl_input_pointer_check(res)) continue;
        wl_pointer_send_button(res, serial, timestamp, btn, state);
     }
   return EINA_TRUE;
}

EINTERN void
e_comp_wl_xwayland_client_queue(E_Client *ec)
{
   e_comp_wl->xwl_pending = eina_list_append(e_comp_wl->xwl_pending, ec);
}
