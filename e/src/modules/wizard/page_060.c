/* Ask about focus mode */
#include "e_wizard.h"

static int focus_mode = 1;
/*
E_API int
wizard_page_init(E_Wizard_Page *pg EINA_UNUSED, Eina_Bool *need_xdg_desktops EINA_UNUSED, Eina_Bool *need_xdg_icons EINA_UNUSED)
{
   return 1;
}

E_API int
wizard_page_shutdown(E_Wizard_Page *pg EINA_UNUSED)
{
   return 1;
}
*/
E_API int
wizard_page_show(E_Wizard_Page *pg)
{
   Evas_Object *o, *of, *ob;
   E_Radio_Group *rg;

   if (e_config->focus_policy == E_FOCUS_CLICK) focus_mode = 0;

   o = e_widget_list_add(pg->evas, 1, 0);
   e_wizard_title_set(_("Window Focus"));

   of = e_widget_framelist_add(pg->evas, _("Focus:"), 0);

   rg = e_widget_radio_group_new(&focus_mode);

   ob = e_widget_radio_add(pg->evas, _("Whenever a window is clicked"), 0, rg);
   e_widget_framelist_object_append(of, ob);
   evas_object_show(ob);
   ob = e_widget_radio_add(pg->evas, _("Whenever the mouse enters a window"), 1, rg);
   e_widget_framelist_object_append(of, ob);
   evas_object_show(ob);

   e_widget_list_object_append(o, of, 0, 0, 0.5);
   evas_object_show(of);

   e_wizard_page_show(o);
//   pg->data = o;
   return 1; /* 1 == show ui, and wait for user, 0 == just continue */
}

E_API int
wizard_page_hide(E_Wizard_Page *pg EINA_UNUSED)
{
   if (!focus_mode)
     {
        e_config->focus_policy = E_FOCUS_CLICK;
        e_config->focus_setting = E_FOCUS_NEW_WINDOW;
        e_config->pass_click_on = 1;
        e_config->always_click_to_raise = 1;
        e_config->always_click_to_focus = 1;
        e_config->raise_on_revert_focus = 1;
        e_config->focus_last_focused_per_desktop = 1;
        e_config->pointer_slide = 0;
        e_config->disable_all_pointer_warps = 1;
        e_config->winlist_warp_while_selecting = 0;
        e_config->winlist_warp_at_end = 0;
        e_config->winlist_no_warp_on_direction = 1;
     }
   else
     {
        e_config->focus_policy = E_FOCUS_SLOPPY;
        e_config->focus_setting = E_FOCUS_NEW_DIALOG_IF_OWNER_FOCUSED;
        e_config->pass_click_on = 1;
        e_config->always_click_to_raise = 0;
        e_config->always_click_to_focus = 0;
        e_config->focus_last_focused_per_desktop = 1;
        e_config->pointer_slide = 1;
        e_config->use_auto_raise = 1;
        e_config->auto_raise_delay = 0.5;
     }
//   evas_object_del(pg->data);
   return 1;
}
/*
E_API int
wizard_page_apply(E_Wizard_Page *pg EINA_UNUSED)
{
   return 1;
}
*/
