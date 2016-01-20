#include "e.h"

/* local subsystem functions */
static void               _e_bindings_mouse_free(E_Binding_Mouse *bind);
static void               _e_bindings_key_free(E_Binding_Key *bind);
static void               _e_bindings_edge_free(E_Binding_Edge *bind);
static void               _e_bindings_signal_free(E_Binding_Signal *bind);
static void               _e_bindings_wheel_free(E_Binding_Wheel *bind);
static void               _e_bindings_acpi_free(E_Binding_Acpi *bind);
static int                _e_bindings_context_match(E_Binding_Context bctxt, E_Binding_Context ctxt);
static E_Binding_Modifier _e_bindings_modifiers(unsigned int modifiers);
static Eina_Bool          _e_bindings_edge_cb_timer(void *data);

/* local subsystem globals */

static Eina_List *mouse_bindings = NULL;
static Eina_List *key_bindings = NULL;
static Eina_List *edge_bindings = NULL;
static Eina_List *signal_bindings = NULL;
static Eina_List *wheel_bindings = NULL;
static Eina_List *acpi_bindings = NULL;

typedef struct _E_Binding_Edge_Data E_Binding_Edge_Data;

struct _E_Binding_Edge_Data
{
   E_Binding_Edge    *bind;
   E_Event_Zone_Edge *ev;
   E_Action          *act;
   E_Object          *obj;
};

/* externally accessible functions */

EINTERN int
e_bindings_init(void)
{
   E_Config_Binding_Signal *ebs;
   E_Config_Binding_Mouse *ebm;
   E_Config_Binding_Wheel *ebw;
   E_Config_Binding_Edge *ebe;
   E_Config_Binding_Key *ebk;
   E_Config_Binding_Acpi *eba;
   Eina_List *l;

   EINA_LIST_FOREACH(e_bindings->mouse_bindings, l, ebm)
     e_bindings_mouse_add(ebm->context, ebm->button, ebm->modifiers,
                          ebm->any_mod, ebm->action, ebm->params);

   EINA_LIST_FOREACH(e_bindings->key_bindings, l, ebk)
     e_bindings_key_add(ebk->context, ebk->key, ebk->modifiers,
                        ebk->any_mod, ebk->action, ebk->params);

   EINA_LIST_FOREACH(e_bindings->edge_bindings, l, ebe)
     e_bindings_edge_add(ebe->context, ebe->edge, ebe->drag_only, ebe->modifiers,
                         ebe->any_mod, ebe->action, ebe->params, ebe->delay);

   EINA_LIST_FOREACH(e_bindings->signal_bindings, l, ebs)
     {
        e_bindings_signal_add(ebs->context, ebs->signal, ebs->source, ebs->modifiers,
                              ebs->any_mod, ebs->action, ebs->params);
        /* FIXME: Can this be solved in a generic way? */
        /* FIXME: Only change cursor if action is allowed! */
        if ((ebs->action) && (ebs->signal) && (ebs->source) &&
            (!strcmp(ebs->action, "window_resize")) &&
            (!strncmp(ebs->signal, "mouse,down,", 11)) &&
            (!strncmp(ebs->source, "e.event.resize.", 15)))
          {
             char params[32];

             snprintf(params, sizeof(params), "resize_%s", ebs->params);
             e_bindings_signal_add(ebs->context, "mouse,in", ebs->source, ebs->modifiers,
                                   ebs->any_mod, "pointer_resize_push", params);
             e_bindings_signal_add(ebs->context, "mouse,out", ebs->source, ebs->modifiers,
                                   ebs->any_mod, "pointer_resize_pop", params);
          }
     }

   EINA_LIST_FOREACH(e_bindings->wheel_bindings, l, ebw)
     e_bindings_wheel_add(ebw->context, ebw->direction, ebw->z, ebw->modifiers,
                          ebw->any_mod, ebw->action, ebw->params);

   EINA_LIST_FOREACH(e_bindings->acpi_bindings, l, eba)
     e_bindings_acpi_add(eba->context, eba->type, eba->status,
                         eba->action, eba->params);

   return 1;
}

EINTERN int
e_bindings_shutdown(void)
{
   E_FREE_LIST(mouse_bindings, _e_bindings_mouse_free);
   E_FREE_LIST(key_bindings, _e_bindings_key_free);
   E_FREE_LIST(edge_bindings, _e_bindings_edge_free);
   E_FREE_LIST(signal_bindings, _e_bindings_signal_free);
   E_FREE_LIST(wheel_bindings, _e_bindings_wheel_free);
   E_FREE_LIST(acpi_bindings, _e_bindings_acpi_free);

   return 1;
}

E_API int
e_bindings_modifiers_to_ecore_convert(E_Binding_Modifier modifiers)
{
   int mod = 0;

   if (modifiers & E_BINDING_MODIFIER_SHIFT) mod |= ECORE_EVENT_MODIFIER_SHIFT;
   if (modifiers & E_BINDING_MODIFIER_CTRL) mod |= ECORE_EVENT_MODIFIER_CTRL;
   if (modifiers & E_BINDING_MODIFIER_ALT) mod |= ECORE_EVENT_MODIFIER_ALT;
   if (modifiers & E_BINDING_MODIFIER_WIN) mod |= ECORE_EVENT_MODIFIER_WIN;
   /* see comment in e_bindings on numlock
      if (modifiers & ECORE_X_LOCK_NUM) mod |= ECORE_X_LOCK_NUM;
    */

   return mod;
}

E_API void
e_bindings_ecore_event_mouse_wheel_convert(const Ecore_Event_Mouse_Wheel *ev, E_Binding_Event_Wheel *event)
{
   memset(event, 0, sizeof(E_Binding_Event_Wheel));
   event->direction = ev->direction;
   event->z = ev->z;
   event->canvas.x = e_comp_canvas_x_root_adjust(ev->root.x);
   event->canvas.y = e_comp_canvas_x_root_adjust(ev->root.y);
   event->timestamp = ev->timestamp;
   event->modifiers = _e_bindings_modifiers(ev->modifiers);
}

E_API void
e_bindings_ecore_event_mouse_button_convert(const Ecore_Event_Mouse_Button *ev, E_Binding_Event_Mouse_Button *event)
{
   memset(event, 0, sizeof(E_Binding_Event_Mouse_Button));
   event->button = ev->buttons;
   event->canvas.x = e_comp_canvas_x_root_adjust(ev->root.x);
   event->canvas.y = e_comp_canvas_x_root_adjust(ev->root.y);
   event->timestamp = ev->timestamp;
   event->modifiers = _e_bindings_modifiers(ev->modifiers);

   event->double_click = !!ev->double_click;
   event->triple_click = !!ev->triple_click;
}

E_API void
e_bindings_evas_event_mouse_wheel_convert(const Evas_Event_Mouse_Wheel *ev, E_Binding_Event_Wheel *event)
{
   memset(event, 0, sizeof(E_Binding_Event_Wheel));
   event->direction = ev->direction;
   event->z = ev->z;
   event->canvas.x = ev->output.x, event->canvas.y = ev->output.y;
   event->timestamp = ev->timestamp;

   event->modifiers |= (E_BINDING_MODIFIER_SHIFT * evas_key_modifier_is_set(ev->modifiers, "Shift"));
   event->modifiers |= (E_BINDING_MODIFIER_CTRL * evas_key_modifier_is_set(ev->modifiers, "Control"));
   event->modifiers |= (E_BINDING_MODIFIER_ALT * evas_key_modifier_is_set(ev->modifiers, "Alt"));
   event->modifiers |= (E_BINDING_MODIFIER_WIN * evas_key_modifier_is_set(ev->modifiers, "Super"));
   event->modifiers |= (E_BINDING_MODIFIER_WIN * evas_key_modifier_is_set(ev->modifiers, "Hyper"));
   event->modifiers |= (E_BINDING_MODIFIER_ALTGR * evas_key_modifier_is_set(ev->modifiers, "AltGr"));

/* TODO
   if (modifiers & ECORE_EVENT_LOCK_SCROLL)
     evas_key_lock_on(e, "Scroll_Lock");
   else evas_key_lock_off(e, "Scroll_Lock");

   if (modifiers & ECORE_EVENT_LOCK_NUM)
     evas_key_lock_on(e, "Num_Lock");
   else evas_key_lock_off(e, "Num_Lock");

   if (modifiers & ECORE_EVENT_LOCK_CAPS)
     evas_key_lock_on(e, "Caps_Lock");
   else evas_key_lock_off(e, "Caps_Lock");

   if (modifiers & ECORE_EVENT_LOCK_SHIFT)
     evas_key_lock_on(e, "Shift_Lock");
   else evas_key_lock_off(e, "Shift_Lock");
*/
}

E_API int
e_bindings_evas_modifiers_convert(Evas_Modifier *modifiers)
{
   int mod = 0;

   mod |= (E_BINDING_MODIFIER_SHIFT * evas_key_modifier_is_set(modifiers, "Shift"));
   mod |= (E_BINDING_MODIFIER_CTRL * evas_key_modifier_is_set(modifiers, "Control"));
   mod |= (E_BINDING_MODIFIER_ALT * evas_key_modifier_is_set(modifiers, "Alt"));
   mod |= (E_BINDING_MODIFIER_WIN * evas_key_modifier_is_set(modifiers, "Super"));
   mod |= (E_BINDING_MODIFIER_WIN * evas_key_modifier_is_set(modifiers, "Hyper"));
   mod |= (E_BINDING_MODIFIER_ALTGR * evas_key_modifier_is_set(modifiers, "AltGr"));
   return mod;
}

E_API void
e_bindings_evas_event_mouse_button_convert(const Evas_Event_Mouse_Down *ev, E_Binding_Event_Mouse_Button *event)
{
   memset(event, 0, sizeof(E_Binding_Event_Mouse_Button));
   event->button = ev->button;
   event->canvas.x = ev->output.x, event->canvas.y = ev->output.y;
   event->timestamp = ev->timestamp;

   event->modifiers = e_bindings_evas_modifiers_convert(ev->modifiers);

   event->hold = (ev->event_flags & EVAS_EVENT_FLAG_ON_HOLD);
   event->scroll = (ev->event_flags & EVAS_EVENT_FLAG_ON_SCROLL);

   event->double_click = (ev->flags & EVAS_BUTTON_DOUBLE_CLICK);
   event->triple_click = (ev->flags & EVAS_BUTTON_TRIPLE_CLICK);

/* TODO
   if (modifiers & ECORE_EVENT_LOCK_SCROLL)
     evas_key_lock_on(e, "Scroll_Lock");
   else evas_key_lock_off(e, "Scroll_Lock");

   if (modifiers & ECORE_EVENT_LOCK_NUM)
     evas_key_lock_on(e, "Num_Lock");
   else evas_key_lock_off(e, "Num_Lock");

   if (modifiers & ECORE_EVENT_LOCK_CAPS)
     evas_key_lock_on(e, "Caps_Lock");
   else evas_key_lock_off(e, "Caps_Lock");

   if (modifiers & ECORE_EVENT_LOCK_SHIFT)
     evas_key_lock_on(e, "Shift_Lock");
   else evas_key_lock_off(e, "Shift_Lock");
*/
}

E_API void
e_bindings_signal_reset(void)
{
   E_Config_Binding_Signal *ebs;
   Eina_List *l;
   E_FREE_LIST(signal_bindings, _e_bindings_signal_free);

   EINA_LIST_FOREACH(e_bindings->signal_bindings, l, ebs)
     {
        e_bindings_signal_add(ebs->context, ebs->signal, ebs->source, ebs->modifiers,
                              ebs->any_mod, ebs->action, ebs->params);
        /* FIXME: Can this be solved in a generic way? */
        /* FIXME: Only change cursor if action is allowed! */
        if ((ebs->action) && (ebs->signal) && (ebs->source) &&
            (!strcmp(ebs->action, "window_resize")) &&
            (!strncmp(ebs->signal, "mouse,down,", 11)) &&
            (!strncmp(ebs->source, "e.event.resize.", 15)))
          {
             char params[32];

             snprintf(params, sizeof(params), "resize_%s", ebs->params);
             e_bindings_signal_add(ebs->context, "mouse,in", ebs->source, ebs->modifiers,
                                   ebs->any_mod, "pointer_resize_push", params);
             e_bindings_signal_add(ebs->context, "mouse,out", ebs->source, ebs->modifiers,
                                   ebs->any_mod, "pointer_resize_pop", params);
          }
     }
}

E_API void
e_bindings_acpi_reset(void)
{
   E_Config_Binding_Acpi *eba;
   Eina_List *l;

   E_FREE_LIST(acpi_bindings, _e_bindings_acpi_free);

   EINA_LIST_FOREACH(e_bindings->acpi_bindings, l, eba)
     e_bindings_acpi_add(eba->context, eba->type, eba->status,
                         eba->action, eba->params);
}

E_API void
e_bindings_wheel_reset(void)
{
   E_Config_Binding_Wheel *ebw;
   Eina_List *l;

   E_FREE_LIST(wheel_bindings, _e_bindings_wheel_free);

   EINA_LIST_FOREACH(e_bindings->wheel_bindings, l, ebw)
     e_bindings_wheel_add(ebw->context, ebw->direction, ebw->z, ebw->modifiers,
                          ebw->any_mod, ebw->action, ebw->params);
}

E_API void
e_bindings_edge_reset(void)
{
   E_Config_Binding_Edge *ebe;
   Eina_List *l;

   E_FREE_LIST(edge_bindings, _e_bindings_edge_free);

   EINA_LIST_FOREACH(e_bindings->edge_bindings, l, ebe)
     e_bindings_edge_add(ebe->context, ebe->edge, ebe->drag_only, ebe->modifiers,
                         ebe->any_mod, ebe->action, ebe->params, ebe->delay);
}

E_API void
e_bindings_mouse_reset(void)
{
   E_Config_Binding_Mouse *ebm;
   Eina_List *l;

   E_FREE_LIST(mouse_bindings, _e_bindings_mouse_free);

   EINA_LIST_FOREACH(e_bindings->mouse_bindings, l, ebm)
     e_bindings_mouse_add(ebm->context, ebm->button, ebm->modifiers,
                          ebm->any_mod, ebm->action, ebm->params);
}

E_API void
e_bindings_key_reset(void)
{
   E_Config_Binding_Key *ebk;
   Eina_List *l;

   e_comp_canvas_keys_ungrab();
   E_FREE_LIST(key_bindings, _e_bindings_key_free);

   EINA_LIST_FOREACH(e_bindings->key_bindings, l, ebk)
     e_bindings_key_add(ebk->context, ebk->key, ebk->modifiers,
                        ebk->any_mod, ebk->action, ebk->params);
   e_comp_canvas_keys_grab();
}

E_API void
e_bindings_reset(void)
{
   e_bindings_signal_reset();
   e_bindings_mouse_reset();
   e_bindings_wheel_reset();
   e_bindings_edge_reset();
   e_bindings_key_reset();
}

E_API void
e_bindings_mouse_add(E_Binding_Context ctxt, int button, E_Binding_Modifier mod, int any_mod, const char *action, const char *params)
{
   E_Binding_Mouse *binding;

   binding = calloc(1, sizeof(E_Binding_Mouse));
   binding->ctxt = ctxt;
   binding->button = button;
   binding->mod = mod;
   binding->any_mod = any_mod;
   if (action) binding->action = eina_stringshare_add(action);
   if (params) binding->params = eina_stringshare_add(params);
   mouse_bindings = eina_list_append(mouse_bindings, binding);
}

E_API void
e_bindings_mouse_del(E_Binding_Context ctxt, int button, E_Binding_Modifier mod, int any_mod, const char *action, const char *params)
{
   E_Binding_Mouse *binding;
   Eina_List *l;

   EINA_LIST_FOREACH(mouse_bindings, l, binding)
     {
        if ((binding->ctxt == ctxt) &&
            (binding->button == button) &&
            (binding->mod == mod) &&
            (binding->any_mod == any_mod) &&
            (((binding->action) && (action) && (!strcmp(binding->action, action))) ||
             ((!binding->action) && (!action))) &&
            (((binding->params) && (params) && (!strcmp(binding->params, params))) ||
             ((!binding->params) && (!params))))
          {
             _e_bindings_mouse_free(binding);
             mouse_bindings = eina_list_remove_list(mouse_bindings, l);
             break;
          }
     }
}

E_API void
e_bindings_mouse_grab(E_Binding_Context ctxt, Ecore_X_Window win)
{
   E_Binding_Mouse *binding;
   Eina_List *l;

   EINA_LIST_FOREACH(mouse_bindings, l, binding)
     {
        if (_e_bindings_context_match(binding->ctxt, ctxt))
          {
#ifndef HAVE_WAYLAND_ONLY
             ecore_x_window_button_grab(win, binding->button,
                                        ECORE_X_EVENT_MASK_MOUSE_DOWN |
                                        ECORE_X_EVENT_MASK_MOUSE_UP |
                                        ECORE_X_EVENT_MASK_MOUSE_MOVE,
                                        e_bindings_modifiers_to_ecore_convert(binding->mod),
                                        binding->any_mod);
#endif
          }
     }
#ifdef HAVE_WAYLAND_ONLY
   (void)win;
#endif
}

E_API void
e_bindings_mouse_ungrab(E_Binding_Context ctxt, Ecore_X_Window win)
{
   E_Binding_Mouse *binding;
   Eina_List *l;

   EINA_LIST_FOREACH(mouse_bindings, l, binding)
     {
        if (_e_bindings_context_match(binding->ctxt, ctxt))
          {
#ifndef HAVE_WAYLAND_ONLY
             ecore_x_window_button_ungrab(win, binding->button,
                                          e_bindings_modifiers_to_ecore_convert(binding->mod), binding->any_mod);
#endif
          }
     }
#ifdef HAVE_WAYLAND_ONLY
   (void)win;
#endif
}

E_API E_Action *
e_bindings_mouse_button_find(E_Binding_Context ctxt, E_Binding_Event_Mouse_Button *ev, E_Binding_Mouse **bind_ret)
{
   E_Binding_Mouse *binding;
   Eina_List *l;

   EINA_LIST_FOREACH(mouse_bindings, l, binding)
     {
        if ((binding->button == (int)ev->button) &&
            ((binding->any_mod) || (binding->mod == ev->modifiers)))
          {
             if (_e_bindings_context_match(binding->ctxt, ctxt))
               {
                  E_Action *act;

                  act = e_action_find(binding->action);
                  if (bind_ret) *bind_ret = binding;
                  return act;
               }
          }
     }
   return NULL;
}

E_API E_Action *
e_bindings_mouse_down_event_handle(E_Binding_Context ctxt, E_Object *obj, E_Binding_Event_Mouse_Button *ev)
{
   E_Action *act;
   E_Binding_Mouse *binding;

   act = e_bindings_mouse_button_find(ctxt, ev, &binding);
   if (act)
     {
        if (act->func.go_mouse)
          act->func.go_mouse(obj, binding->params, ev);
        else if (act->func.go)
          act->func.go(obj, binding->params);
        return act;
     }
   return act;
}

E_API E_Action *
e_bindings_mouse_down_evas_event_handle(E_Binding_Context ctxt, E_Object *obj, Evas_Event_Mouse_Down *ev)
{
   E_Binding_Event_Mouse_Button event;

   e_bindings_evas_event_mouse_button_convert(ev, &event);

   return e_bindings_mouse_down_event_handle(ctxt, obj, &event);
}

E_API E_Action *
e_bindings_mouse_down_ecore_event_handle(E_Binding_Context ctxt, E_Object *obj, Ecore_Event_Mouse_Button *ev)
{
   E_Binding_Event_Mouse_Button event;

   e_bindings_ecore_event_mouse_button_convert(ev, &event);

   return e_bindings_mouse_down_event_handle(ctxt, obj, &event);
}

E_API E_Action *
e_bindings_mouse_up_event_handle(E_Binding_Context ctxt, E_Object *obj, E_Binding_Event_Mouse_Button *ev)
{
   E_Action *act;
   E_Binding_Mouse *binding;

   act = e_bindings_mouse_button_find(ctxt, ev, &binding);
   if (act)
     {
        if (act->func.end_mouse)
          act->func.end_mouse(obj, binding->params, ev);
        else if (act->func.end)
          act->func.end(obj, binding->params);
        return act;
     }
   return act;
}

E_API E_Action *
e_bindings_mouse_up_evas_event_handle(E_Binding_Context ctxt, E_Object *obj, Evas_Event_Mouse_Up *ev)
{
   E_Binding_Event_Mouse_Button event;

   e_bindings_evas_event_mouse_button_convert((Evas_Event_Mouse_Down*)ev, &event);

   return e_bindings_mouse_up_event_handle(ctxt, obj, &event);
}

E_API E_Action *
e_bindings_mouse_up_ecore_event_handle(E_Binding_Context ctxt, E_Object *obj, Ecore_Event_Mouse_Button *ev)
{
   E_Binding_Event_Mouse_Button event;

   e_bindings_ecore_event_mouse_button_convert(ev, &event);

   return e_bindings_mouse_up_event_handle(ctxt, obj, &event);
}

E_API void
e_bindings_key_add(E_Binding_Context ctxt, const char *key, E_Binding_Modifier mod, int any_mod, const char *action, const char *params)
{
   E_Binding_Key *binding;

   binding = calloc(1, sizeof(E_Binding_Key));
   binding->ctxt = ctxt;
   binding->key = eina_stringshare_add(key);
   binding->mod = mod;
   binding->any_mod = any_mod;
   if (action) binding->action = eina_stringshare_add(action);
   if (params) binding->params = eina_stringshare_add(params);
   key_bindings = eina_list_append(key_bindings, binding);
}

E_API E_Binding_Key *
e_bindings_key_get(const char *action)
{
   E_Binding_Key *binding;
   Eina_List *l;

   EINA_LIST_FOREACH(key_bindings, l, binding)
     {
        if (binding->action && action && !strcmp(action, binding->action))
          return binding;
     }
   return NULL;
}

E_API E_Binding_Key *
e_bindings_key_find(const char *key, E_Binding_Modifier mod, int any_mod)
{
   E_Binding_Key *binding;
   Eina_List *l;

   if (!key) return NULL;

   EINA_LIST_FOREACH(key_bindings, l, binding)
     {
        if ((binding->key) && (!strcmp(key, binding->key)) &&
            (binding->mod == mod) && (binding->any_mod == any_mod))
          return binding;
     }

   return NULL;
}

E_API void
e_bindings_key_del(E_Binding_Context ctxt, const char *key, E_Binding_Modifier mod, int any_mod, const char *action, const char *params)
{
   E_Binding_Key *binding;
   Eina_List *l;

   EINA_LIST_FOREACH(key_bindings, l, binding)
     {
        if ((binding->ctxt == ctxt) &&
            (key) && (binding->key) && (!strcmp(binding->key, key)) &&
            (binding->mod == mod) &&
            (binding->any_mod == any_mod) &&
            (((binding->action) && (action) && (!strcmp(binding->action, action))) ||
             ((!binding->action) && (!action))) &&
            (((binding->params) && (params) && (!strcmp(binding->params, params))) ||
             ((!binding->params) && (!params))))
          {
             _e_bindings_key_free(binding);
             key_bindings = eina_list_remove_list(key_bindings, l);
             break;
          }
     }
}

E_API void
e_bindings_key_grab(E_Binding_Context ctxt, Ecore_X_Window win)
{
   E_Binding_Key *binding;
   Eina_List *l;

   EINA_LIST_FOREACH(key_bindings, l, binding)
     {
        if (_e_bindings_context_match(binding->ctxt, ctxt))
          {
             if (e_bindings_key_allowed(binding->key))
               {
#ifndef HAVE_WAYLAND_ONLY
                  ecore_x_window_key_grab(win, binding->key,
                                          e_bindings_modifiers_to_ecore_convert(binding->mod), binding->any_mod);
#endif
               }
          }
     }
#ifdef HAVE_WAYLAND_ONLY
   (void)win;
#endif
}

E_API void
e_bindings_key_ungrab(E_Binding_Context ctxt, Ecore_X_Window win)
{
   E_Binding_Key *binding;
   Eina_List *l;

   EINA_LIST_FOREACH(key_bindings, l, binding)
     {
        if (_e_bindings_context_match(binding->ctxt, ctxt))
          {
             if (e_bindings_key_allowed(binding->key))
               {
#ifndef HAVE_WAYLAND_ONLY
                  ecore_x_window_key_ungrab(win, binding->key,
                                            e_bindings_modifiers_to_ecore_convert(binding->mod), binding->any_mod);
#endif
               }
          }
     }
#ifdef HAVE_WAYLAND_ONLY
   (void)win;
#endif
}

E_API E_Action *
e_bindings_key_down_event_handle(E_Binding_Context ctxt, E_Object *obj, Ecore_Event_Key *ev)
{
   E_Binding_Modifier mod = 0;
   E_Binding_Key *binding;
   Eina_List *l;

   mod = _e_bindings_modifiers(ev->modifiers);
   EINA_LIST_FOREACH(key_bindings, l, binding)
     {
        if ((binding->key) && ((!strcmp(binding->key, ev->key)) || (!strcmp(binding->key, ev->keyname))) &&
            ((binding->any_mod) || (binding->mod == mod)))
          {
             if (_e_bindings_context_match(binding->ctxt, ctxt))
               {
                  E_Action *act;

                  act = e_action_find(binding->action);
                  if (act)
                    {
                       if (act->func.go_key)
                         act->func.go_key(obj, binding->params, ev);
                       else if (act->func.go)
                         act->func.go(obj, binding->params);
                       return act;
                    }
                  return NULL;
               }
          }
     }
   return NULL;
}

E_API E_Action *
e_bindings_key_up_event_handle(E_Binding_Context ctxt, E_Object *obj, Ecore_Event_Key *ev)
{
   E_Binding_Modifier mod = 0;
   E_Binding_Key *binding;
   Eina_List *l;

   mod = _e_bindings_modifiers(ev->modifiers);
   EINA_LIST_FOREACH(key_bindings, l, binding)
     {
        if ((binding->key) && (!strcmp(binding->key, ev->key)) &&
            ((binding->any_mod) || (binding->mod == mod)))
          {
             if (_e_bindings_context_match(binding->ctxt, ctxt))
               {
                  E_Action *act;

                  act = e_action_find(binding->action);
                  if (act)
                    {
                       if (act->func.end_key)
                         act->func.end_key(obj, binding->params, ev);
                       else if (act->func.end)
                         act->func.end(obj, binding->params);
                       return act;
                    }
                  return NULL;
               }
          }
     }
   return NULL;
}

E_API E_Action *
e_bindings_key_down_event_find(E_Binding_Context ctxt, Ecore_Event_Key *ev)
{
   E_Binding_Modifier mod = 0;
   E_Binding_Key *binding;
   Eina_List *l;

   mod = _e_bindings_modifiers(ev->modifiers);
   EINA_LIST_FOREACH(key_bindings, l, binding)
     {
        if ((binding->key) && (!strcmp(binding->key, ev->key)) &&
            ((binding->any_mod) || (binding->mod == mod)))
          {
             if (_e_bindings_context_match(binding->ctxt, ctxt))
               {
                  E_Action *act;

                  act = e_action_find(binding->action);
                  return act;
               }
          }
     }
   return NULL;
}

E_API E_Action *
e_bindings_key_up_event_find(E_Binding_Context ctxt, Ecore_Event_Key *ev)
{
   E_Binding_Modifier mod = 0;
   E_Binding_Key *binding;
   Eina_List *l;

   mod = _e_bindings_modifiers(ev->modifiers);
   EINA_LIST_FOREACH(key_bindings, l, binding)
     {
        if ((binding->key) && (!strcmp(binding->key, ev->key)) &&
            ((binding->any_mod) || (binding->mod == mod)))
          {
             if (_e_bindings_context_match(binding->ctxt, ctxt))
               {
                  E_Action *act;

                  act = e_action_find(binding->action);
                  return act;
               }
          }
     }
   return NULL;
}

E_API Eina_Bool
e_bindings_key_allowed(const char *key)
{
   if (!key) return EINA_FALSE;
   if ((!strcmp(key, "Shift_L")) ||
       (!strcmp(key, "Shift_R")) ||
       (!strcmp(key, "Control_L")) ||
       (!strcmp(key, "Control_R")) ||
       (!strcmp(key, "Alt_L")) ||
       (!strcmp(key, "Alt_R")) ||
       (!strcmp(key, "Meta_L")) ||
       (!strcmp(key, "Meta_R")) ||
       (!strcmp(key, "Hyper_L")) ||
       (!strcmp(key, "Hyper_R")) ||
       (!strcmp(key, "Super_L")) ||
       (!strcmp(key, "Super_R")) ||
       (!strcmp(key, "AltGr")) ||
       (!strcmp(key, "Caps_Lock")) ||
       (!strcmp(key, "Shift_Lock")) ||
       (!strcmp(key, "Kana_Lock")) ||
       (!strcmp(key, "Num_Lock")) ||
       (!strcmp(key, "Scroll_Lock")))
     return EINA_FALSE;
   return EINA_TRUE;
}


E_API void
e_bindings_edge_add(E_Binding_Context ctxt, E_Zone_Edge edge, Eina_Bool drag_only, E_Binding_Modifier mod, int any_mod, const char *action, const char *params, float delay)
{
   E_Binding_Edge *binding;

   binding = calloc(1, sizeof(E_Binding_Edge));
   binding->ctxt = ctxt;
   binding->edge = edge;
   binding->mod = mod;
   binding->any_mod = any_mod;
   binding->delay = delay;
   binding->drag_only = drag_only;
   if (action) binding->action = eina_stringshare_add(action);
   if (params) binding->params = eina_stringshare_add(params);
   edge_bindings = eina_list_append(edge_bindings, binding);

   e_zone_edge_new(edge);
}

E_API Eina_Bool
e_bindings_edge_flippable_get(E_Zone_Edge edge)
{
   E_Binding_Edge *binding;
   Eina_List *l;

   EINA_LIST_FOREACH(edge_bindings, l, binding)
     {
        if ((binding->edge == edge) && (binding->action))
          {
             if ((!strcmp(binding->action, "desk_flip_in_direction")) ||
                 (!strcmp(binding->action, "desk_flip_by")))
               return EINA_TRUE;
          }
     }
   return EINA_FALSE;
}

E_API Eina_Bool
e_bindings_edge_non_flippable_get(E_Zone_Edge edge)
{
   E_Binding_Edge *binding;
   Eina_List *l;

   EINA_LIST_FOREACH(edge_bindings, l, binding)
     {
        if ((binding->edge == edge) && (binding->action))
          {
             if ((!strcmp(binding->action, "desk_flip_in_direction")) ||
                 (!strcmp(binding->action, "desk_flip_by")))
               continue;
             return EINA_TRUE;
          }
     }
   return EINA_FALSE;
}

E_API E_Binding_Edge *
e_bindings_edge_get(const char *action, E_Zone_Edge edge, int click)
{
   E_Binding_Edge *binding;
   Eina_List *l;

   EINA_LIST_FOREACH(edge_bindings, l, binding)
     {
        if ((binding->edge == edge) &&
            ((click && (binding->delay == -1.0 * click))
             || (!click && (binding->delay >= 0.0))) &&
            (binding->action) && (action) &&
            (!strcmp(action, binding->action)))
          return binding;
     }
   return NULL;
}

E_API void
e_bindings_edge_del(E_Binding_Context ctxt, E_Zone_Edge edge, Eina_Bool drag_only, E_Binding_Modifier mod, int any_mod, const char *action, const char *params, float delay)
{
   E_Binding_Edge *binding;
   Eina_List *l, *ll;
   int ref_count = 0;

   EINA_LIST_FOREACH_SAFE(edge_bindings, l, ll, binding)
     {
        if (binding->edge == edge)
          {
             if ((binding->ctxt == ctxt) &&
                 (binding->mod == mod) &&
                 ((binding->delay * 1000) == (delay * 1000)) &&
                 (binding->any_mod == any_mod) &&
                 (binding->drag_only == drag_only) &&
                 (((binding->action) && (action) && (!strcmp(binding->action, action))) ||
                  ((!binding->action) && (!action))) &&
                 (((binding->params) && (params) && (!strcmp(binding->params, params))) ||
                  ((!binding->params) && (!params))))
               {
                  _e_bindings_edge_free(binding);
                  edge_bindings = eina_list_remove_list(edge_bindings, l);
               }
             else ref_count++;
          }
     }

   if (!ref_count)
     e_zone_edge_free(edge);
}

E_API E_Action *
e_bindings_edge_in_event_handle(E_Binding_Context ctxt, E_Object *obj, E_Event_Zone_Edge *ev)
{
   E_Binding_Modifier mod = 0;
   E_Binding_Edge *binding;
   E_Desk *current = NULL;
   E_Action *act = NULL;
   Eina_List *l;

   current = e_desk_at_xy_get(ev->zone, ev->zone->desk_x_current, ev->zone->desk_y_current);
   if (current->fullscreen_clients && (!e_config->fullscreen_flip)) return NULL;

   if (ev->modifiers & ECORE_EVENT_MODIFIER_SHIFT) mod |= E_BINDING_MODIFIER_SHIFT;
   if (ev->modifiers & ECORE_EVENT_MODIFIER_CTRL) mod |= E_BINDING_MODIFIER_CTRL;
   if (ev->modifiers & ECORE_EVENT_MODIFIER_ALT) mod |= E_BINDING_MODIFIER_ALT;
   if (ev->modifiers & ECORE_EVENT_MODIFIER_WIN) mod |= E_BINDING_MODIFIER_WIN;
   EINA_LIST_FOREACH(edge_bindings, l, binding)
     {
        /* A value of <= -1.0 for the delay indicates it as a mouse-click binding on that edge */
        if (((binding->edge == ev->edge)) && (binding->delay >= 0.0) &&
            ((binding->drag_only == ev->drag) || ev->drag) &&
            ((binding->any_mod) || (binding->mod == mod)))
          {
             if (_e_bindings_context_match(binding->ctxt, ctxt))
               {
                  act = e_action_find(binding->action);
                  if (act)
                    {
                       E_Binding_Edge_Data *ed = E_NEW(E_Binding_Edge_Data, 1);
                       E_Event_Zone_Edge *ev2 = E_NEW(E_Event_Zone_Edge, 1);

                       /* The original event will be freed before it can be
                        * used again */
                       ev2->zone = ev->zone;
                       ev2->edge = ev->edge;
                       ev2->x = ev->x;
                       ev2->y = ev->y;

                       ed->bind = binding;
                       ed->obj = obj;
                       ed->act = act;
                       ed->ev = ev2;
                       binding->timer = ecore_timer_add(((double)binding->delay), _e_bindings_edge_cb_timer, ed);
                    }
               }
          }
     }
   return act;
}

E_API E_Action *
e_bindings_edge_out_event_handle(E_Binding_Context ctxt, E_Object *obj, E_Event_Zone_Edge *ev)
{
   E_Binding_Modifier mod = 0;
   E_Binding_Edge *binding;
   E_Action *act = NULL;
   Eina_List *l;

   if (ev->modifiers & ECORE_EVENT_MODIFIER_SHIFT) mod |= E_BINDING_MODIFIER_SHIFT;
   if (ev->modifiers & ECORE_EVENT_MODIFIER_CTRL) mod |= E_BINDING_MODIFIER_CTRL;
   if (ev->modifiers & ECORE_EVENT_MODIFIER_ALT) mod |= E_BINDING_MODIFIER_ALT;
   if (ev->modifiers & ECORE_EVENT_MODIFIER_WIN) mod |= E_BINDING_MODIFIER_WIN;
   EINA_LIST_FOREACH(edge_bindings, l, binding)
     {
        /* A value of <= -1.0 for the delay indicates it as a mouse-click binding on that edge */
        if ((binding->edge == ev->edge) && (binding->delay >= 0.0) &&
            ((binding->any_mod) || (binding->mod == mod)))
          {
             if (_e_bindings_context_match(binding->ctxt, ctxt))
               {
                  if (binding->timer)
                    {
                       E_Binding_Edge_Data *ed;

                       ed = ecore_timer_del(binding->timer);
                       if (ed)
                         {
                            E_FREE(ed->ev);
                            E_FREE(ed);
                         }
                    }
                  binding->timer = NULL;

                  act = e_action_find(binding->action);
                  if (act && act->func.end)
                    act->func.end(obj, binding->params);
               }
          }
     }
   return act;
}

E_API E_Action *
e_bindings_edge_down_event_handle(E_Binding_Context ctxt, E_Object *obj, E_Event_Zone_Edge *ev)
{
   E_Binding_Modifier mod = 0;
   E_Binding_Edge *binding;
   E_Desk *current = NULL;
   E_Action *act = NULL;
   Eina_List *l;

   current = e_desk_at_xy_get(ev->zone, ev->zone->desk_x_current, ev->zone->desk_y_current);
   if (current->fullscreen_clients && (!e_config->fullscreen_flip)) return NULL;

   if (ev->modifiers & ECORE_EVENT_MODIFIER_SHIFT) mod |= E_BINDING_MODIFIER_SHIFT;
   if (ev->modifiers & ECORE_EVENT_MODIFIER_CTRL) mod |= E_BINDING_MODIFIER_CTRL;
   if (ev->modifiers & ECORE_EVENT_MODIFIER_ALT) mod |= E_BINDING_MODIFIER_ALT;
   if (ev->modifiers & ECORE_EVENT_MODIFIER_WIN) mod |= E_BINDING_MODIFIER_WIN;
   EINA_LIST_FOREACH(edge_bindings, l, binding)
     {
        if (((binding->edge == ev->edge)) && (binding->delay == -1.0 * ev->button) &&
            (!binding->drag_only) && ((binding->any_mod) || (binding->mod == mod)))
          {
             if (_e_bindings_context_match(binding->ctxt, ctxt))
               {
                  act = e_action_find(binding->action);
                  if (act)
                    {
                       if (act->func.go_edge)
                         act->func.go_edge(obj, binding->params, ev);
                       else if (act->func.go)
                         act->func.go(obj, binding->params);
                    }
               }
          }
     }
   return act;
}

E_API E_Action *
e_bindings_edge_up_event_handle(E_Binding_Context ctxt, E_Object *obj, E_Event_Zone_Edge *ev)
{
   E_Binding_Modifier mod = 0;
   E_Binding_Edge *binding;
   E_Action *act = NULL;
   Eina_List *l;

   if (ev->modifiers & ECORE_EVENT_MODIFIER_SHIFT) mod |= E_BINDING_MODIFIER_SHIFT;
   if (ev->modifiers & ECORE_EVENT_MODIFIER_CTRL) mod |= E_BINDING_MODIFIER_CTRL;
   if (ev->modifiers & ECORE_EVENT_MODIFIER_ALT) mod |= E_BINDING_MODIFIER_ALT;
   if (ev->modifiers & ECORE_EVENT_MODIFIER_WIN) mod |= E_BINDING_MODIFIER_WIN;
   EINA_LIST_FOREACH(edge_bindings, l, binding)
     {
        if (((binding->edge == ev->edge)) && (binding->delay == -1.0 * ev->button) &&
            ((binding->any_mod) || (binding->mod == mod)))
          {
             if (_e_bindings_context_match(binding->ctxt, ctxt))
               {
                  act = e_action_find(binding->action);
                  if (act && act->func.end)
                    act->func.end(obj, binding->params);
               }
          }
     }
   return act;
}

E_API void
e_bindings_signal_add(E_Binding_Context ctxt, const char *sig, const char *src, E_Binding_Modifier mod, int any_mod, const char *action, const char *params)
{
   E_Binding_Signal *binding;

   binding = calloc(1, sizeof(E_Binding_Signal));
   binding->ctxt = ctxt;
   if (sig) binding->sig = eina_stringshare_add(sig);
   if (src) binding->src = eina_stringshare_add(src);
   binding->mod = mod;
   binding->any_mod = any_mod;
   if (action) binding->action = eina_stringshare_add(action);
   if (params) binding->params = eina_stringshare_add(params);
   signal_bindings = eina_list_append(signal_bindings, binding);
}

E_API void
e_bindings_signal_del(E_Binding_Context ctxt, const char *sig, const char *src, E_Binding_Modifier mod, int any_mod, const char *action, const char *params)
{
   E_Binding_Signal *binding;
   Eina_List *l;

   EINA_LIST_FOREACH(signal_bindings, l, binding)
     {
        if ((binding->ctxt == ctxt) &&
            (((binding->sig) && (sig) && (!strcmp(binding->sig, sig))) ||
             ((!binding->sig) && (!sig))) &&
            (((binding->src) && (src) && (!strcmp(binding->src, src))) ||
             ((!binding->src) && (!src))) &&
            (binding->mod == mod) &&
            (binding->any_mod == any_mod) &&
            (((binding->action) && (action) && (!strcmp(binding->action, action))) ||
             ((!binding->action) && (!action))) &&
            (((binding->params) && (params) && (!strcmp(binding->params, params))) ||
             ((!binding->params) && (!params))))
          {
             _e_bindings_signal_free(binding);
             signal_bindings = eina_list_remove_list(signal_bindings, l);
             break;
          }
     }
}

E_API E_Action *
e_bindings_signal_find(E_Binding_Context ctxt, const char *sig, const char *src, E_Binding_Signal **bind_ret)
{
   E_Binding_Modifier mod = 0;
   E_Binding_Signal *binding;
   Eina_List *l;

   if (strstr(sig, "MOD:Shift")) mod |= E_BINDING_MODIFIER_SHIFT;
   if (strstr(sig, "MOD:Control")) mod |= E_BINDING_MODIFIER_CTRL;
   if (strstr(sig, "MOD:Alt")) mod |= E_BINDING_MODIFIER_ALT;
   if (strstr(sig, "MOD:Super")) mod |= E_BINDING_MODIFIER_WIN;
   EINA_LIST_FOREACH(signal_bindings, l, binding)
     {
        if ((e_util_glob_match(sig, binding->sig)) &&
            (e_util_glob_match(src, binding->src)) &&
            ((binding->any_mod) || (binding->mod == mod)))
          {
             if (_e_bindings_context_match(binding->ctxt, ctxt))
               {
                  E_Action *act;

                  act = e_action_find(binding->action);
                  if (bind_ret) *bind_ret = binding;
                  return act;
               }
          }
     }
   return NULL;
}

E_API E_Action *
e_bindings_signal_handle(E_Binding_Context ctxt, E_Object *obj, const char *sig, const char *src)
{
   E_Action *act;
   E_Binding_Signal *binding;

   if ((!sig) || (sig && (sig[0] == 0)))
     return NULL;
   if (src && (src[0] == 0)) src = NULL;
   act = e_bindings_signal_find(ctxt, sig, src, &binding);
   if (act)
     {
        if (act->func.go_signal)
          act->func.go_signal(obj, binding->params, sig, src);
        else if (act->func.go)
          act->func.go(obj, binding->params);
        return act;
     }
   return act;
}

E_API void
e_bindings_wheel_add(E_Binding_Context ctxt, int direction, int z, E_Binding_Modifier mod, int any_mod, const char *action, const char *params)
{
   E_Binding_Wheel *binding;

   binding = calloc(1, sizeof(E_Binding_Wheel));
   binding->ctxt = ctxt;
   binding->direction = direction;
   binding->z = z;
   binding->mod = mod;
   binding->any_mod = any_mod;
   if (action) binding->action = eina_stringshare_add(action);
   if (params) binding->params = eina_stringshare_add(params);
   wheel_bindings = eina_list_append(wheel_bindings, binding);
}

E_API void
e_bindings_wheel_del(E_Binding_Context ctxt, int direction, int z, E_Binding_Modifier mod, int any_mod, const char *action, const char *params)
{
   E_Binding_Wheel *binding;
   Eina_List *l;

   EINA_LIST_FOREACH(wheel_bindings, l, binding)
     {
        if ((binding->ctxt == ctxt) &&
            (binding->direction == direction) &&
            (binding->z == z) &&
            (binding->mod == mod) &&
            (binding->any_mod == any_mod) &&
            (((binding->action) && (action) && (!strcmp(binding->action, action))) ||
             ((!binding->action) && (!action))) &&
            (((binding->params) && (params) && (!strcmp(binding->params, params))) ||
             ((!binding->params) && (!params))))
          {
             _e_bindings_wheel_free(binding);
             wheel_bindings = eina_list_remove_list(wheel_bindings, l);
             break;
          }
     }
}

E_API void
e_bindings_wheel_grab(E_Binding_Context ctxt, Ecore_X_Window win)
{
   E_Binding_Wheel *binding;
   Eina_List *l;

   EINA_LIST_FOREACH(wheel_bindings, l, binding)
     {
        if (_e_bindings_context_match(binding->ctxt, ctxt))
          {
             int button = 0;

             if (binding->direction == 0)
               {
                  if (binding->z < 0) button = 4;
                  else if (binding->z > 0)
                    button = 5;
               }
             else if (binding->direction == 1)
               {
                  if (binding->z < 0) button = 6;
                  else if (binding->z > 0)
                    button = 7;
               }
             if (button != 0)
               {
#ifndef HAVE_WAYLAND_ONLY
                  ecore_x_window_button_grab(win, button,
                                             ECORE_X_EVENT_MASK_MOUSE_DOWN,
                                             e_bindings_modifiers_to_ecore_convert(binding->mod), binding->any_mod);
#endif
               }
          }
     }
#ifdef HAVE_WAYLAND_ONLY
   (void)win;
#endif
}

E_API void
e_bindings_wheel_ungrab(E_Binding_Context ctxt, Ecore_X_Window win)
{
   E_Binding_Wheel *binding;
   Eina_List *l;

   EINA_LIST_FOREACH(wheel_bindings, l, binding)
     {
        if (_e_bindings_context_match(binding->ctxt, ctxt))
          {
             int button = 0;

             if (binding->direction == 0)
               {
                  if (binding->z < 0) button = 4;
                  else if (binding->z > 0)
                    button = 5;
               }
             else if (binding->direction == 1)
               {
                  if (binding->z < 0) button = 6;
                  else if (binding->z > 0)
                    button = 7;
               }
             if (button != 0)
               {
#ifndef HAVE_WAYLAND_ONLY
                  ecore_x_window_button_ungrab(win, button,
                                               e_bindings_modifiers_to_ecore_convert(binding->mod), binding->any_mod);
#endif
               }
          }
     }
#ifdef HAVE_WAYLAND_ONLY
   (void)win;
#endif
}

E_API E_Action *
e_bindings_wheel_find(E_Binding_Context ctxt, E_Binding_Event_Wheel *ev, E_Binding_Wheel **bind_ret)
{
   E_Binding_Wheel *binding;
   Eina_List *l;

   EINA_LIST_FOREACH(wheel_bindings, l, binding)
     {
        if ((binding->direction == ev->direction) &&
            (((binding->z < 0) && (ev->z < 0)) || ((binding->z > 0) && (ev->z > 0))) &&
            ((binding->any_mod) || (binding->mod == ev->modifiers)))
          {
             if (_e_bindings_context_match(binding->ctxt, ctxt))
               {
                  E_Action *act;

                  act = e_action_find(binding->action);
                  if (bind_ret) *bind_ret = binding;
                  return act;
               }
          }
     }
   return NULL;
}

E_API E_Action *
e_bindings_wheel_event_handle(E_Binding_Context ctxt, E_Object *obj, E_Binding_Event_Wheel *ev)
{
   E_Action *act;
   E_Binding_Wheel *binding;

   act = e_bindings_wheel_find(ctxt, ev, &binding);
   if (act)
     {
        if (act->func.go_wheel)
          act->func.go_wheel(obj, binding->params, ev);
        else if (act->func.go)
          act->func.go(obj, binding->params);
        return act;
     }
   return act;
}

E_API E_Action *
e_bindings_wheel_evas_event_handle(E_Binding_Context ctxt, E_Object *obj, Evas_Event_Mouse_Wheel *ev)
{
   E_Binding_Event_Wheel event;

   e_bindings_evas_event_mouse_wheel_convert(ev, &event);

   return e_bindings_wheel_event_handle(ctxt, obj, &event);
}

E_API E_Action *
e_bindings_wheel_ecore_event_handle(E_Binding_Context ctxt, E_Object *obj, Ecore_Event_Mouse_Wheel *ev)
{
   E_Binding_Event_Wheel event;

   e_bindings_ecore_event_mouse_wheel_convert(ev, &event);

   return e_bindings_wheel_event_handle(ctxt, obj, &event);
}

E_API void
e_bindings_acpi_add(E_Binding_Context ctxt, int type, int status, const char *action, const char *params)
{
   E_Binding_Acpi *binding;

   binding = E_NEW(E_Binding_Acpi, 1);
   binding->ctxt = ctxt;
   binding->type = type;
   binding->status = status;
   if (action) binding->action = eina_stringshare_add(action);
   if (params) binding->params = eina_stringshare_add(params);
   acpi_bindings = eina_list_append(acpi_bindings, binding);
}

E_API void
e_bindings_acpi_del(E_Binding_Context ctxt, int type, int status, const char *action, const char *params)
{
   E_Binding_Acpi *binding;
   Eina_List *l;

   EINA_LIST_FOREACH(acpi_bindings, l, binding)
     {
        if ((binding->ctxt == ctxt) &&
            (binding->type == type) && (binding->status == status) &&
            (((binding->action) && (action) && (!strcmp(binding->action, action))) ||
             ((!binding->action) && (!action))) &&
            (((binding->params) && (params) && (!strcmp(binding->params, params))) ||
             ((!binding->params) && (!params))))
          {
             _e_bindings_acpi_free(binding);
             acpi_bindings = eina_list_remove_list(acpi_bindings, l);
             break;
          }
     }
}

E_API E_Action *
e_bindings_acpi_find(E_Binding_Context ctxt, E_Event_Acpi *ev, E_Binding_Acpi **bind_ret)
{
   E_Binding_Acpi *binding;
   Eina_List *l;

   EINA_LIST_FOREACH(acpi_bindings, l, binding)
     {
        if (binding->type == ev->type)
          {
             /* if binding status is -1, then we don't compare event status */
             if (binding->status != -1)
               {
                  /* binding status is set to something, compare event status */
                  if (binding->status != ev->status) continue;
               }
             if (_e_bindings_context_match(binding->ctxt, ctxt))
               {
                  E_Action *act;

                  act = e_action_find(binding->action);
                  if (bind_ret) *bind_ret = binding;
                  return act;
               }
          }
     }
   return NULL;
}

E_API E_Action *
e_bindings_acpi_event_handle(E_Binding_Context ctxt, E_Object *obj, E_Event_Acpi *ev)
{
   E_Action *act;
   E_Binding_Acpi *binding;

   act = e_bindings_acpi_find(ctxt, ev, &binding);
   if (act)
     {
        if (act->func.go_acpi)
          act->func.go_acpi(obj, binding->params, ev);
        else if (act->func.go)
          act->func.go(obj, binding->params);
        return act;
     }
   return act;
}

static void
_e_bindings_mouse_free(E_Binding_Mouse *binding)
{
   if (binding->action) eina_stringshare_del(binding->action);
   if (binding->params) eina_stringshare_del(binding->params);
   free(binding);
}

static void
_e_bindings_key_free(E_Binding_Key *binding)
{
   if (binding->key) eina_stringshare_del(binding->key);
   if (binding->action) eina_stringshare_del(binding->action);
   if (binding->params) eina_stringshare_del(binding->params);
   free(binding);
}

static void
_e_bindings_edge_free(E_Binding_Edge *binding)
{
   if (binding->action) eina_stringshare_del(binding->action);
   if (binding->params) eina_stringshare_del(binding->params);
   if (binding->timer)
     {
        E_Binding_Edge_Data *ed;

        ed = ecore_timer_del(binding->timer);
        E_FREE(ed);
     }
   free(binding);
}

static void
_e_bindings_signal_free(E_Binding_Signal *binding)
{
   if (binding->sig) eina_stringshare_del(binding->sig);
   if (binding->src) eina_stringshare_del(binding->src);
   if (binding->action) eina_stringshare_del(binding->action);
   if (binding->params) eina_stringshare_del(binding->params);
   free(binding);
}

static void
_e_bindings_wheel_free(E_Binding_Wheel *binding)
{
   if (binding->action) eina_stringshare_del(binding->action);
   if (binding->params) eina_stringshare_del(binding->params);
   free(binding);
}

static void
_e_bindings_acpi_free(E_Binding_Acpi *binding)
{
   if (binding->action) eina_stringshare_del(binding->action);
   if (binding->params) eina_stringshare_del(binding->params);
   E_FREE(binding);
}

static int
_e_bindings_context_match(E_Binding_Context bctxt, E_Binding_Context ctxt)
{
   if (bctxt == E_BINDING_CONTEXT_ANY &&
       !(ctxt == E_BINDING_CONTEXT_ZONE)) return 1;
   if (ctxt == E_BINDING_CONTEXT_UNKNOWN) return 0;
   if (bctxt == ctxt) return 1;
   return 0;
}

static E_Binding_Modifier
_e_bindings_modifiers(unsigned int modifiers)
{
   E_Binding_Modifier mod = 0;


   mod |= (E_BINDING_MODIFIER_SHIFT * !!(modifiers & ECORE_EVENT_MODIFIER_SHIFT));
   mod |= (E_BINDING_MODIFIER_CTRL * !!(modifiers & ECORE_EVENT_MODIFIER_CTRL));
   mod |= (E_BINDING_MODIFIER_ALT * !!(modifiers & ECORE_EVENT_MODIFIER_ALT));
   mod |= (E_BINDING_MODIFIER_WIN * !!(modifiers & ECORE_EVENT_MODIFIER_WIN));
   mod |= (E_BINDING_MODIFIER_ALTGR * !!(modifiers & ECORE_EVENT_MODIFIER_ALTGR));
   /* FIXME: there is a good reason numlock was ignored. sometimes people
    * have it on, sometimes they don't, and often they have no idea. waaaay
    * back in E 0.1->0.13 or so days this caused issues thus numlock,
    * scrollock and capslock are not usable modifiers.
    *
    * if we REALLY want to be able to use numlock we need to add more binding
    * flags and config that says "REALLY pay attention to numlock for this
    * binding" field in the binding (like there is a "any_mod" flag - we need a
    * "num_lock_respect" field)
    *
    * also it should be an E_BINDING_MODIFIER_LOCK_NUM as the ecore lock flag
    * may vary from system to system as different xservers may have differing
    * modifier masks for numlock (it is queried at startup).
    *
      if (ev->modifiers & ECORE_X_LOCK_NUM) mod |= ECORE_X_LOCK_NUM;
    */

   return mod;
}

static Eina_Bool
_e_bindings_edge_cb_timer(void *data)
{
   E_Binding_Edge_Data *ed;
   E_Event_Zone_Edge *ev;
   E_Binding_Edge *binding;
   E_Action *act;
   E_Object *obj;

   ed = data;
   binding = ed->bind;
   act = ed->act;
   obj = ed->obj;
   ev = ed->ev;

   E_FREE(ed);
   binding->timer = NULL;

   if (act->func.go_edge)
     act->func.go_edge(obj, binding->params, ev);
   else if (act->func.go)
     act->func.go(obj, binding->params);

   /* Duplicate event */
   E_FREE(ev);

   return ECORE_CALLBACK_CANCEL;
}

