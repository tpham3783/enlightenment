#include "e.h"


/**************************** private data ******************************/

typedef struct _E_Desklock_Run E_Desklock_Run;


struct _E_Desklock_Run
{
   E_Order *desk_run;
   int      position;
};

static Ecore_Exe *_e_custom_desklock_exe = NULL;
static Ecore_Event_Handler *_e_custom_desklock_exe_handler = NULL;
static Ecore_Poller *_e_desklock_idle_poller = NULL;
static int _e_desklock_user_idle = 0;
static double _e_desklock_autolock_time = 0.0;
static E_Dialog *_e_desklock_ask_presentation_dia = NULL;
static int _e_desklock_ask_presentation_count = 0;

static Ecore_Event_Handler *_e_desklock_run_handler = NULL;
static Ecore_Event_Handler *_e_desklock_randr_handler = NULL;
static Ecore_Job *job = NULL;
static Eina_List *tasks = NULL;

static Eina_List *show_hooks = NULL;
static Eina_List *hide_hooks = NULL;

static Eina_List *block_rects = NULL;

static Eina_List *desklock_ifaces = NULL;
static E_Desklock_Interface *current_iface = NULL;
static Eina_Bool demo = EINA_FALSE;

/***********************************************************************/
static Eina_Bool _e_desklock_cb_custom_desklock_exit(void *data EINA_UNUSED, int type EINA_UNUSED, void *event);
static Eina_Bool _e_desklock_cb_idle_poller(void *data EINA_UNUSED);
static Eina_Bool _e_desklock_cb_run(void *data, int type, void *event);
static Eina_Bool _e_desklock_cb_randr(void *data, int type, void *event);

static Eina_Bool _e_desklock_state = EINA_FALSE;

static void      _e_desklock_ask_presentation_mode(void);

E_API int E_EVENT_DESKLOCK = 0;

EINTERN int
e_desklock_init(void)
{
   Eina_List *l;
   E_Config_Desklock_Background *bg;
   /* A poller to tick every 256 ticks, watching for an idle user */
   _e_desklock_idle_poller = ecore_poller_add(ECORE_POLLER_CORE, 256,
                                              _e_desklock_cb_idle_poller, NULL);

   EINA_LIST_FOREACH(e_config->desklock_backgrounds, l, bg)
     e_filereg_register(bg->file);

   E_EVENT_DESKLOCK = ecore_event_type_new();

   _e_desklock_run_handler = ecore_event_handler_add(E_EVENT_DESKLOCK,
                                                     _e_desklock_cb_run, NULL);

   _e_desklock_randr_handler = ecore_event_handler_add(E_EVENT_RANDR_CHANGE,
                                                       _e_desklock_cb_randr, NULL);
   return 1;
}

EINTERN int
e_desklock_shutdown(void)
{
   Eina_Bool waslocked = _e_desklock_state;
   E_Desklock_Run *task;
   Eina_List *l;
   E_Config_Desklock_Background *bg;

   desklock_ifaces = eina_list_free(desklock_ifaces);
   if (!x_fatal)
     e_desklock_hide();

   if (waslocked) e_util_env_set("E_DESKLOCK_LOCKED", "locked");

   ecore_event_handler_del(_e_desklock_run_handler);
   _e_desklock_run_handler = NULL;
   ecore_event_handler_del(_e_desklock_randr_handler);
   _e_desklock_randr_handler = NULL;

   if (job) ecore_job_del(job);
   job = NULL;

   EINA_LIST_FOREACH(e_config->desklock_backgrounds, l, bg)
     e_filereg_deregister(bg->file);

   EINA_LIST_FREE(tasks, task)
     {
        e_object_del(E_OBJECT(task->desk_run));
        free(task);
     }

   return 1;
}

E_API Eina_Stringshare *
e_desklock_user_wallpaper_get(E_Zone *zone)
{
   const E_Config_Desktop_Background *cdbg;
   const Eina_List *l;
   E_Desk *desk;

   desk = e_desk_current_get(zone);
   EINA_LIST_FOREACH(e_config->desktop_backgrounds, l, cdbg)
     {
        if ((cdbg->zone > -1) && (cdbg->zone != (int)zone->num)) continue;
        if ((cdbg->desk_x > -1) && (cdbg->desk_x != desk->x)) continue;
        if ((cdbg->desk_y > -1) && (cdbg->desk_y != desk->y)) continue;
        if (cdbg->file) return cdbg->file;
     }

   if (e_config->desktop_default_background)
     return e_config->desktop_default_background;

   return e_theme_edje_file_get("base/theme/desklock", "e/desklock/background");
}

E_API void
e_desklock_interface_append(E_Desklock_Interface *iface)
{
   EINA_SAFETY_ON_NULL_RETURN(iface);
   EINA_SAFETY_ON_NULL_RETURN(iface->show);
   EINA_SAFETY_ON_NULL_RETURN(iface->name);
   EINA_SAFETY_ON_TRUE_RETURN(iface->active); // fucking casuals
   /* make sure our module is first so it gets tried last */
   if (!e_util_strcmp(iface->name, "lokker"))
     desklock_ifaces = eina_list_prepend(desklock_ifaces, (void*)iface);
   else
     desklock_ifaces = eina_list_append(desklock_ifaces, (void*)iface);
   if (_e_desklock_state && (!current_iface))
     {
        if (iface->show())
          {
             iface->active = EINA_TRUE;
             current_iface = iface;
          }
     }
}

E_API void
e_desklock_interface_remove(E_Desklock_Interface *iface)
{
   E_Desklock_Interface *diface;
   Eina_List *l;

   EINA_SAFETY_ON_NULL_RETURN(iface);
   if (!desklock_ifaces) return;
   desklock_ifaces = eina_list_remove(desklock_ifaces, (void*)iface);
   if (!iface->active) return;
   /* if it was active, hide it */
   if (iface->hide) iface->hide();
   iface->active = EINA_FALSE;
   current_iface = NULL;
   /* then try to find a replacement locker */
   EINA_LIST_REVERSE_FOREACH(desklock_ifaces, l, diface)
     {
        if (!diface->show()) continue;
        diface->active = EINA_TRUE;
        current_iface = diface;
        break;
     }
   /* XXX: if none of the remaining lockers can lock, we're left with a black screen.
    * I again blame the user for magically unloading the current locker module DURING
    * desklock, but I refuse to unlock their system.
   if (!current_iface) e_desklock_hide();
    */
}

E_API void
e_desklock_show_hook_add(E_Desklock_Show_Cb cb)
{
   EINA_SAFETY_ON_NULL_RETURN(cb);
   show_hooks = eina_list_append(show_hooks, cb);
}

E_API void
e_desklock_show_hook_del(E_Desklock_Show_Cb cb)
{
   EINA_SAFETY_ON_NULL_RETURN(cb);
   show_hooks = eina_list_remove(show_hooks, cb);
}

E_API void
e_desklock_hide_hook_add(E_Desklock_Hide_Cb cb)
{
   EINA_SAFETY_ON_NULL_RETURN(cb);
   hide_hooks = eina_list_append(hide_hooks, cb);
}

E_API void
e_desklock_hide_hook_del(E_Desklock_Hide_Cb cb)
{
   EINA_SAFETY_ON_NULL_RETURN(cb);
   hide_hooks = eina_list_remove(hide_hooks, cb);
}

E_API int
e_desklock_show_autolocked(void)
{
   if (_e_desklock_autolock_time < 1.0)
     _e_desklock_autolock_time = ecore_loop_time_get();
   return e_desklock_show(EINA_FALSE);
}

E_API Eina_Bool
e_desklock_demo(void)
{
   E_Desklock_Interface *iface;
   Eina_List *l;

   if (e_desklock_is_external()) return EINA_FALSE;
   EINA_LIST_REVERSE_FOREACH(desklock_ifaces, l, iface)
     {
        if (iface->show())
          {
             demo = iface->active = EINA_TRUE;
             current_iface = iface;
             e_comp_shape_queue();
             return EINA_TRUE;
          }
     }
   return EINA_FALSE;
}

E_API int
e_desklock_show(Eina_Bool suspend)
{
   const Eina_List *l;
   E_Event_Desklock *ev;
   E_Desklock_Show_Cb show_cb;
   E_Desklock_Hide_Cb hide_cb;

   if (_e_desklock_state) return EINA_TRUE;

   if (e_desklock_is_external() && e_config->desklock_custom_desklock_cmd && e_config->desklock_custom_desklock_cmd[0])
     {
        e_menu_hide_all();
        _e_custom_desklock_exe_handler =
          ecore_event_handler_add(ECORE_EXE_EVENT_DEL,
                                  _e_desklock_cb_custom_desklock_exit, NULL);
        if (e_config->desklock_language)
          e_intl_language_set(e_config->desklock_language);

        if (e_config->xkb.lock_layout)
          e_xkb_layout_set(e_config->xkb.lock_layout);
        _e_custom_desklock_exe =
          ecore_exe_run(e_config->desklock_custom_desklock_cmd, NULL);
        _e_desklock_state = EINA_TRUE;
        /* TODO: ensure layer is correct on external desklocks? */
        return 1;
     }

#ifndef HAVE_PAM
   if (e_desklock_is_system())
     {
        e_util_dialog_show(_("Error - no PAM support"),
                           _("No PAM support was built into Enlightenment, so<br>"
                             "desk locking is disabled."));
        return 0;
     }
#endif

   if (e_desklock_is_personal())
     {
        if (!e_config->desklock_passwd)
          {
             E_Zone *zone;

             zone = e_zone_current_get();
             if (zone)
               e_configure_registry_call("screen/screen_lock", NULL, NULL);
             return 0;
          }
     }

   e_menu_hide_all();
   EINA_LIST_FOREACH(show_hooks, l, show_cb)
     {
        if (!show_cb()) goto fail;
     }

   {
      Evas_Object *o;

      o = evas_object_rectangle_add(e_comp->evas);
      block_rects = eina_list_append(block_rects, o);
      evas_object_color_set(o, 0, 0, 0, 255);
      evas_object_resize(o, 99999, 99999);
      evas_object_layer_set(o, E_LAYER_DESKLOCK);
      evas_object_show(o);
   }
   if (e_config->desklock_language)
     e_intl_language_set(e_config->desklock_language);

   if (e_config->xkb.lock_layout)
     e_xkb_layout_set(e_config->xkb.lock_layout);

   if (demo)
     {
        if (current_iface->hide)
          current_iface->hide();
        current_iface->active = demo = EINA_FALSE;
        current_iface = NULL;
     }

   {
      E_Desklock_Interface *iface;
      Eina_Bool success = EINA_TRUE;

      EINA_LIST_REVERSE_FOREACH(desklock_ifaces, l, iface)
        {
           success = iface->show();
           if (success)
             {
                iface->active = EINA_TRUE;
                current_iface = iface;
                break;
             }
        }
      /* FIXME: if someone doesn't have a locking module loaded and has
       * lock-on-startup, this will result in a permanent black screen.
       * I blame the user in this case since lokker is a default module
       * which is really hard to disable (you have to work at it or be a gentoo user).
       */
      if (!success) goto lang_fail;
   }

   ev = E_NEW(E_Event_Desklock, 1);
   ev->on = 1;
   ev->suspend = suspend;
   ecore_event_add(E_EVENT_DESKLOCK, ev, NULL, NULL);

   e_util_env_set("E_DESKLOCK_UNLOCKED", NULL);
   e_util_env_set("E_DESKLOCK_LOCKED", "locked");
   _e_desklock_state = EINA_TRUE;
   return 1;
lang_fail:
   if (e_config->desklock_language)
     e_intl_language_set(e_config->language);

   if (e_config_xkb_layout_eq(e_config->xkb.current_layout, e_config->xkb.lock_layout))
     {
        if (e_config->xkb.sel_layout)
          e_xkb_layout_set(e_config->xkb.sel_layout);
     }
fail:
   EINA_LIST_FOREACH(hide_hooks, l, hide_cb)
     hide_cb();
   return 0;
}

E_API void
e_desklock_hide(void)
{
   Eina_List *l;
   E_Event_Desklock *ev;
   E_Desklock_Hide_Cb hide_cb;

   if (demo && current_iface)
     {
        if (current_iface->hide)
          current_iface->hide();
        demo = current_iface->active = EINA_FALSE;
        current_iface = NULL;
        return;
     }
   demo = EINA_FALSE;

   if ((!_e_desklock_state) && (!_e_custom_desklock_exe)) return;

   e_comp_override_del();
   e_comp_shape_queue();
   E_FREE_LIST(block_rects, evas_object_del);
   //e_comp_block_window_del();
   if (e_config->desklock_language)
     e_intl_language_set(e_config->language);

   if (e_config_xkb_layout_eq(e_config->xkb.current_layout, e_config->xkb.lock_layout))
     {
        if (e_config->xkb.sel_layout)
          e_xkb_layout_set(e_config->xkb.sel_layout);
     }

   _e_desklock_state = EINA_FALSE;
   ev = E_NEW(E_Event_Desklock, 1);
   ev->on = 0;
   ev->suspend = 1;
   ecore_event_add(E_EVENT_DESKLOCK, ev, NULL, NULL);

   if (e_desklock_is_external())
     {
        _e_custom_desklock_exe = NULL;
        return;
     }

   EINA_LIST_FOREACH(hide_hooks, l, hide_cb)
     hide_cb();

   if (current_iface)
     {
        if (current_iface->hide)
          current_iface->hide();
        current_iface->active = EINA_FALSE;
        current_iface = NULL;
     }

   if (_e_desklock_autolock_time > 0.0)
     {
        if ((e_config->desklock_ask_presentation) &&
            (e_config->desklock_ask_presentation_timeout > 0.0))
          {
             double max, now;

             now = ecore_loop_time_get();
             max = _e_desklock_autolock_time + e_config->desklock_ask_presentation_timeout;
             if (now <= max)
               _e_desklock_ask_presentation_mode();
          }
        else
          _e_desklock_ask_presentation_count = 0;

        _e_desklock_autolock_time = 0.0;
     }
   e_util_env_set("E_DESKLOCK_LOCKED", "freefreefree");
   e_util_env_set("E_DESKLOCK_UNLOCKED", "happened");
}

E_API Eina_Bool
e_desklock_state_get(void)
{
   return _e_desklock_state;
}

static Eina_Bool
_e_desklock_cb_custom_desklock_exit(void *data EINA_UNUSED, int type EINA_UNUSED, void *event)
{
   Ecore_Exe_Event_Del *ev = event;

   if (ev->exe != _e_custom_desklock_exe) return ECORE_CALLBACK_PASS_ON;

   if (ev->exit_code != 0)
     {
        /* do something profound here... like notify someone */
     }

   e_desklock_hide();

   return ECORE_CALLBACK_DONE;
}

static Eina_Bool
_e_desklock_cb_idle_poller(void *data EINA_UNUSED)
{
   if ((e_config->desklock_autolock_idle) && (!e_config->mode.presentation))
     {
        double idle = 0.0, max;

        /* If a desklock is already up, bail */
        if ((_e_custom_desklock_exe) || (_e_desklock_state)) return ECORE_CALLBACK_RENEW;

#ifndef HAVE_WAYLAND_ONLY
        if (e_comp->comp_type == E_PIXMAP_TYPE_X)
          idle = ecore_x_screensaver_idle_time_get();
#endif
#ifdef HAVE_WAYLAND
        if (e_comp->comp_type == E_PIXMAP_TYPE_WL)
          idle = e_comp_wl_idle_time_get();
#endif

        max = e_config->desklock_autolock_idle_timeout;
        if (_e_desklock_ask_presentation_count > 0)
          max *= (1 + _e_desklock_ask_presentation_count);

        /* If we have exceeded our idle time... */
        if (idle >= max)
          {
             /*
              * Unfortunately, not all "desklocks" stay up for as long as
              * the user is idle or until it is unlocked.
              *
              * 'xscreensaver-command -lock' for example sends a command
              * to xscreensaver and then terminates.  So, we have another
              * check (_e_desklock_user_idle) which lets us know that we
              * have locked the screen due to idleness.
              */
             if (!_e_desklock_user_idle)
               {
                  _e_desklock_user_idle = 1;
                  e_desklock_show_autolocked();
               }
          }
        else
          _e_desklock_user_idle = 0;
     }

   /* Make sure our poller persists. */
   return ECORE_CALLBACK_RENEW;
}

static void
_e_desklock_ask_presentation_del(void *data)
{
   if (_e_desklock_ask_presentation_dia == data)
     _e_desklock_ask_presentation_dia = NULL;
}

static void
_e_desklock_ask_presentation_yes(void *data EINA_UNUSED, E_Dialog *dia)
{
   e_config->mode.presentation = 1;
   e_config_mode_changed();
   e_config_save_queue();
   e_object_del(E_OBJECT(dia));
   _e_desklock_ask_presentation_count = 0;
}

static void
_e_desklock_ask_presentation_no(void *data EINA_UNUSED, E_Dialog *dia)
{
   e_object_del(E_OBJECT(dia));
   _e_desklock_ask_presentation_count = 0;
}

static void
_e_desklock_ask_presentation_no_increase(void *data EINA_UNUSED, E_Dialog *dia)
{
   int timeout, blanking, expose;

   _e_desklock_ask_presentation_count++;
   timeout = e_config->screensaver_timeout * _e_desklock_ask_presentation_count;
   blanking = e_config->screensaver_blanking;
   expose = e_config->screensaver_expose;

   e_screensaver_attrs_set(timeout, blanking, expose);
   e_screensaver_update();
   e_object_del(E_OBJECT(dia));
}

static void
_e_desklock_ask_presentation_no_forever(void *data EINA_UNUSED, E_Dialog *dia)
{
   e_config->desklock_ask_presentation = 0;
   e_config_save_queue();
   e_object_del(E_OBJECT(dia));
   _e_desklock_ask_presentation_count = 0;
}

static void
_e_desklock_ask_presentation_key_down(void *data, Evas *e EINA_UNUSED, Evas_Object *o EINA_UNUSED, void *event)
{
   Evas_Event_Key_Down *ev = event;
   E_Dialog *dia = data;

   if (strcmp(ev->key, "Return") == 0)
     _e_desklock_ask_presentation_yes(NULL, dia);
   else if (strcmp(ev->key, "Escape") == 0)
     _e_desklock_ask_presentation_no(NULL, dia);
}

static void
_e_desklock_ask_presentation_mode(void)
{
   E_Dialog *dia;

   if (_e_desklock_ask_presentation_dia) return;

   if (!(dia = e_dialog_new(NULL, "E", "_desklock_ask_presentation"))) return;

   e_dialog_title_set(dia, _("Activate Presentation Mode?"));
   e_dialog_icon_set(dia, "dialog-ask", 64);
   e_dialog_text_set(dia,
                     _("You unlocked your desktop too fast.<br><br>"
                       "Would you like to enable <b>presentation</b> mode and "
                       "temporarily disable screen saver, lock and power saving?"));

   e_object_del_attach_func_set(E_OBJECT(dia),
                                _e_desklock_ask_presentation_del);
   e_dialog_button_add(dia, _("Yes"), NULL,
                       _e_desklock_ask_presentation_yes, NULL);
   e_dialog_button_add(dia, _("No"), NULL,
                       _e_desklock_ask_presentation_no, NULL);
   e_dialog_button_add(dia, _("No, but increase timeout"), NULL,
                       _e_desklock_ask_presentation_no_increase, NULL);
   e_dialog_button_add(dia, _("No, and stop asking"), NULL,
                       _e_desklock_ask_presentation_no_forever, NULL);

   e_dialog_button_focus_num(dia, 0);
   e_widget_list_homogeneous_set(dia->box_object, 0);
   elm_win_center(dia->win, 1, 1);
   e_dialog_show(dia);

   evas_object_event_callback_add(dia->bg_object, EVAS_CALLBACK_KEY_DOWN,
                                  _e_desklock_ask_presentation_key_down, dia);

   _e_desklock_ask_presentation_dia = dia;
}

static Eina_Bool
_e_desklock_run(E_Desklock_Run *task)
{
   Efreet_Desktop *desktop;

   desktop = eina_list_nth(task->desk_run->desktops, task->position++);
   if (!desktop)
     {
        e_object_del(E_OBJECT(task->desk_run));
        free(task);
        return EINA_FALSE;
     }

   e_exec(NULL, desktop, NULL, NULL, NULL);
   return EINA_TRUE;
}

static void
_e_desklock_job(void *data EINA_UNUSED)
{
   E_Desklock_Run *task;

   job = NULL;
   if (!tasks) return;

   task = eina_list_data_get(tasks);
   if (!_e_desklock_run(task))
     tasks = eina_list_remove_list(tasks, tasks);

   if (tasks) job = ecore_job_add(_e_desklock_job, NULL);
}

static Eina_Bool
_e_desklock_cb_run(void *data EINA_UNUSED, int type EINA_UNUSED, void *event)
{
   E_Desklock_Run *task;
   E_Event_Desklock *ev = event;
   E_Order *desk_run;
   char buf[PATH_MAX];

   if (!ev->suspend) return ECORE_CALLBACK_PASS_ON;

   if (ev->on)
     {
        e_user_dir_concat_static(buf, "applications/desk-lock/.order");
        if (!ecore_file_exists(buf))
          e_prefix_data_concat_static(buf, "applications/desk-lock/.order");
     }
   else
     {
        e_user_dir_concat_static(buf, "applications/desk-unlock/.order");
        if (!ecore_file_exists(buf))
          e_prefix_data_concat_static(buf, "applications/desk-unlock/.order");
     }

   desk_run = e_order_new(buf);
   if (!desk_run) return ECORE_CALLBACK_PASS_ON;

   task = calloc(1, sizeof (E_Desklock_Run));
   if (!task)
     {
        e_object_del(E_OBJECT(desk_run));
        return ECORE_CALLBACK_PASS_ON;
     }

   task->desk_run = desk_run;
   tasks = eina_list_append(tasks, task);

   if (!job) ecore_job_add(_e_desklock_job, NULL);

   return ECORE_CALLBACK_PASS_ON;
}

static Eina_Bool
_e_desklock_cb_randr(void *data EINA_UNUSED, int type EINA_UNUSED, void *event EINA_UNUSED)
{
   if (!_e_desklock_state) return ECORE_CALLBACK_PASS_ON;
   e_desklock_hide();
   e_desklock_show(EINA_FALSE);
   return ECORE_CALLBACK_PASS_ON;
}
