#include "e.h"

static void _e_xkb_update_event(int);

static int _e_xkb_cur_group = -1;
static Ecore_Event_Handler *xkb_state_handler = NULL;

E_API int E_EVENT_XKB_CHANGED = 0;

static Eina_Bool
_e_xkb_init_timer(void *data)
{
   Eina_List *l;
   E_Config_XKB_Layout *cl2, *cl = data;
   int cur_group = -1;

   if (!e_comp->root) return EINA_FALSE;
   EINA_LIST_FOREACH(e_config->xkb.used_layouts, l, cl2)
     {
        cur_group++;
        if (!cl2->name) continue;
        if (e_config_xkb_layout_eq(cl, cl2))
          {
             INF("Setting keyboard layout: %s|%s|%s", cl2->name, cl2->model, cl2->variant);
             e_xkb_update(cur_group);
             break;
          }
     }
   return EINA_FALSE;
}

#ifndef HAVE_WAYLAND_ONLY
static Eina_Bool
_xkb_changed_state(void *data EINA_UNUSED, int type EINA_UNUSED, void *event)
{
   Ecore_X_Event_Xkb *ev = (Ecore_X_Event_Xkb *)event;

   if (ev->group < 0 || ev->group >= eina_list_count(e_config->xkb.used_layouts))
     return ECORE_CALLBACK_PASS_ON;

   e_config->xkb.cur_group = ev->group;
   _e_xkb_update_event(ev->group);
   return ECORE_CALLBACK_PASS_ON;
}
#endif

/* externally accessible functions */
E_API int
e_xkb_init(void)
{
   if (!E_EVENT_XKB_CHANGED)
     E_EVENT_XKB_CHANGED = ecore_event_type_new();
#ifndef HAVE_WAYLAND_ONLY
   if (e_comp->comp_type == E_PIXMAP_TYPE_X)
     xkb_state_handler = ecore_event_handler_add(ECORE_X_EVENT_XKB_STATE_NOTIFY, _xkb_changed_state, NULL);
#endif
   if (e_config->xkb.dont_touch_my_damn_keyboard) return 1;
   e_xkb_update(-1);
   if (e_config->xkb.cur_layout)
     ecore_timer_add(1.5, _e_xkb_init_timer, e_config->xkb.current_layout);
   else if (e_config->xkb.selected_layout)
     ecore_timer_add(1.5, _e_xkb_init_timer, e_config->xkb.sel_layout);
   else if (e_config->xkb.used_layouts)
      ecore_timer_add(1.5, _e_xkb_init_timer, eina_list_data_get(e_config->xkb.used_layouts));
   return 1;
}

E_API int
e_xkb_shutdown(void)
{
   if (xkb_state_handler)
     ecore_event_handler_del(xkb_state_handler);
   return 1;
}

static void
_e_x_xkb_update(int cur_group)
{
   E_Config_XKB_Layout *cl;
   E_Config_XKB_Option *op;
   Eina_List *l;
   Eina_Strbuf *buf;

   if (e_config->xkb.dont_touch_my_damn_keyboard) return;
   if ((!e_config->xkb.used_layouts) && (!e_config->xkb.used_options) && (!e_config->xkb.default_model)) return;
   if (!getenv("DISPLAY")) return;
   if (cur_group != -1)
     {
        _e_xkb_cur_group = cur_group;
#ifndef HAVE_WAYLAND_ONLY
        if (e_comp->root)
          ecore_x_xkb_select_group(cur_group);
#endif
        e_deskenv_xmodmap_run();
        _e_xkb_update_event(cur_group);
        return;
     }
   /* We put an empty -option here in order to override all previously
    * set options.
    */

   buf = eina_strbuf_new();
   eina_strbuf_append(buf, "setxkbmap ");

   if (e_config->xkb.used_layouts)
     {
        eina_strbuf_append(buf, "-layout '");
        EINA_LIST_FOREACH(e_config->xkb.used_layouts, l, cl)
          {
             if (cl->name)
               {
                  eina_strbuf_append(buf, cl->name);
                  eina_strbuf_append(buf, ",");
               }
          }

        eina_strbuf_append(buf, "' -variant '");
        EINA_LIST_FOREACH(e_config->xkb.used_layouts, l, cl)
          {
             if ((cl->variant) && (strcmp(cl->variant, "basic")))
               {
                  eina_strbuf_append(buf, cl->variant);
                  eina_strbuf_append(buf, ",");
               }
             else
               eina_strbuf_append(buf, ",");
          }
        eina_strbuf_append(buf, "'");

        /* use first entry in used layouts */
        cl = e_config->xkb.used_layouts->data;

        if (cl->model)
          {
             eina_strbuf_append(buf, " -model '");
             if (strcmp(cl->model, "default"))
               eina_strbuf_append(buf, cl->model);
             else if ((e_config->xkb.default_model) &&
                      (strcmp(e_config->xkb.default_model, "default")))
               eina_strbuf_append(buf, e_config->xkb.default_model);
             else
               eina_strbuf_append(buf, "default");
             eina_strbuf_append(buf, "'");
          }
     }
   else if (e_config->xkb.default_model)
     {
        eina_strbuf_append(buf, " -model '");
        if (strcmp(e_config->xkb.default_model, "default"))
          eina_strbuf_append(buf, e_config->xkb.default_model);
        else if ((e_config->xkb.default_model) &&
                 (strcmp(e_config->xkb.default_model, "default")))
          eina_strbuf_append(buf, e_config->xkb.default_model);
        else
          eina_strbuf_append(buf, "default");
        eina_strbuf_append(buf, "'");
     }

   if (e_config->xkb.used_options)
     {
        /* clear options */
        eina_strbuf_append(buf, " -option ");

        /* add in selected options */
        EINA_LIST_FOREACH(e_config->xkb.used_options, l, op)
          {
             if (op->name)
               {
                  eina_strbuf_append(buf, " -option '");
                  eina_strbuf_append(buf, op->name);
                  eina_strbuf_append(buf, "'");
               }
          }
     }
   INF("SET XKB RUN: %s", eina_strbuf_string_get(buf));
   ecore_exe_run(eina_strbuf_string_get(buf), NULL);
   eina_strbuf_free(buf);
}

static void
_e_wl_xkb_update(int cur_group)
{
#ifdef HAVE_WAYLAND
   E_Config_XKB_Layout *cl;
   Eina_List *l;

   if (cur_group == -1) {
     cur_group = e_config->xkb.cur_group;
   }

   l = eina_list_nth_list(e_config->xkb.used_layouts, cur_group);
   if (!l) return;
   cl = eina_list_data_get(l);

   e_comp_wl_input_keymap_set(NULL, cl->model, cl->name, NULL, NULL);
   INF("Set wl keyboard to %s %s", cl->model, cl->name);
   e_config->xkb.cur_group = cur_group;
   _e_xkb_update_event(cur_group);
#else
   (void) cur_group;
#endif
}

E_API void
e_xkb_update(int cur_group)
{
   if (e_comp->comp_type == E_PIXMAP_TYPE_WL)
     _e_wl_xkb_update(cur_group);
   else
     _e_x_xkb_update(cur_group);
}

E_API void
e_xkb_layout_next(void)
{
   Eina_List *l;
   E_Config_XKB_Layout *cl;

   if (e_config->xkb.dont_touch_my_damn_keyboard) return;
   if (!e_config->xkb.used_layouts) return;
   l = eina_list_nth_list(e_config->xkb.used_layouts, e_config->xkb.cur_group);
   l = eina_list_next(l);
   if (!l) l = e_config->xkb.used_layouts;

   e_config->xkb.cur_group = (e_config->xkb.cur_group + 1) % eina_list_count(e_config->xkb.used_layouts);
   cl = eina_list_data_get(l);
   eina_stringshare_replace(&e_config->xkb.cur_layout, cl->name);
   eina_stringshare_replace(&e_config->xkb.selected_layout, cl->name);
   INF("Setting keyboard layout: %s|%s|%s", cl->name, cl->model, cl->variant);
   e_xkb_update(e_config->xkb.cur_group);
   _e_xkb_update_event(e_config->xkb.cur_group);
   e_config_save_queue();
}

E_API void
e_xkb_layout_prev(void)
{
   Eina_List *l;
   E_Config_XKB_Layout *cl;

   if (e_config->xkb.dont_touch_my_damn_keyboard) return;
   if (!e_config->xkb.used_layouts) return;
   l = eina_list_nth_list(e_config->xkb.used_layouts, e_config->xkb.cur_group);
   l = eina_list_prev(l);
   if (!l) l = eina_list_last(e_config->xkb.used_layouts);

   e_config->xkb.cur_group = (e_config->xkb.cur_group == 0) ?
     ((int)eina_list_count(e_config->xkb.used_layouts) - 1) : (e_config->xkb.cur_group - 1);
   cl = eina_list_data_get(l);
   eina_stringshare_replace(&e_config->xkb.cur_layout, cl->name);
   eina_stringshare_replace(&e_config->xkb.selected_layout, cl->name);
   INF("Setting keyboard layout: %s|%s|%s", cl->name, cl->model, cl->variant);
   e_xkb_update(e_config->xkb.cur_group);
   _e_xkb_update_event(e_config->xkb.cur_group);
   e_config_save_queue();
}

/* always use this function to get the current layout's name
 * to ensure the most accurate results!!!
 */
E_API E_Config_XKB_Layout *
e_xkb_layout_get(void)
{
   unsigned int n = 0;

   if (e_config->xkb.dont_touch_my_damn_keyboard) return NULL;
   if (e_config->xkb.current_layout) return e_config->xkb.current_layout;
   if (_e_xkb_cur_group >= 0)
     n = _e_xkb_cur_group;
   return eina_list_nth(e_config->xkb.used_layouts, n);
}

E_API void
e_xkb_layout_set(const E_Config_XKB_Layout *cl)
{
   Eina_List *l;
   E_Config_XKB_Layout *cl2;
   int cur_group = -1;

   EINA_SAFETY_ON_NULL_RETURN(cl);
   if (e_config->xkb.dont_touch_my_damn_keyboard) return;
   if (e_config_xkb_layout_eq(e_config->xkb.current_layout, cl)) return;
   e_config_xkb_layout_free(e_config->xkb.current_layout);
   e_config->xkb.current_layout = e_config_xkb_layout_dup(cl);
   EINA_LIST_FOREACH(e_config->xkb.used_layouts, l, cl2)
     {
        cur_group++;
        if (!cl2->name) continue;
        if (e_config_xkb_layout_eq(cl, cl2))
          {
             INF("Setting keyboard layout: %s|%s|%s", cl2->name, cl2->model, cl2->variant);
             eina_stringshare_replace(&e_config->xkb.cur_layout, cl->name);
             eina_stringshare_replace(&e_config->xkb.selected_layout, cl->name);
             e_xkb_update(cur_group);
             break;
          }
     }
   _e_xkb_update_event(e_config->xkb.cur_group);
   e_config_save_queue();
}

E_API const char *
e_xkb_layout_name_reduce(const char *name)
{
   const char *s;

   if (!name) return NULL;
   s = strchr(name, '/');
   if (s) s++;
   else s = name;
   return s;
}

E_API void
e_xkb_e_icon_flag_setup(Evas_Object *eicon, const char *name)
{
   int w, h;
   char buf[PATH_MAX];

   e_xkb_flag_file_get(buf, sizeof(buf), name);
   e_icon_file_set(eicon, buf);
   e_icon_size_get(eicon, &w, &h);
   edje_extern_object_aspect_set(eicon, EDJE_ASPECT_CONTROL_BOTH, w, h);
}

E_API void
e_xkb_flag_file_get(char *buf, size_t bufsize, const char *name)
{
   name = e_xkb_layout_name_reduce(name);
   snprintf(buf, bufsize, "%s/data/flags/%s_flag.png",
            e_prefix_data_get(), name ? name : "unknown");
   if (!ecore_file_exists(buf))
     snprintf(buf, bufsize, "%s/data/flags/unknown_flag.png",
              e_prefix_data_get());
}

E_API Eina_Bool
e_config_xkb_layout_eq(const E_Config_XKB_Layout *a, const E_Config_XKB_Layout *b)
{
   if (a == b) return EINA_TRUE;
   if ((!a) || (!b)) return EINA_FALSE;
   return ((a->name == b->name) && (a->model == b->model) && (a->variant == b->variant));
}

E_API void
e_config_xkb_layout_free(E_Config_XKB_Layout *cl)
{
   if (!cl) return;

   eina_stringshare_del(cl->name);
   eina_stringshare_del(cl->model);
   eina_stringshare_del(cl->variant);
   free(cl);
}

E_API E_Config_XKB_Layout *
e_config_xkb_layout_dup(const E_Config_XKB_Layout *cl)
{
   E_Config_XKB_Layout *cl2;

   EINA_SAFETY_ON_NULL_RETURN_VAL(cl, NULL);
   cl2 = E_NEW(E_Config_XKB_Layout, 1);
   cl2->name = eina_stringshare_ref(cl->name);
   cl2->model = eina_stringshare_ref(cl->model);
   cl2->variant = eina_stringshare_ref(cl->variant);
   return cl2;
}

static void
_e_xkb_update_event(int cur_group)
{
   ecore_event_add(E_EVENT_XKB_CHANGED, NULL, NULL, (intptr_t *)(long)cur_group);
}

