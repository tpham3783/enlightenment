#include "e_mod_appmenu_private.h"

static void
menu_deactive(E_Menu *m)
{
   Eina_List *iter;
   E_Menu_Item *mi;
   EINA_LIST_FOREACH(m->items, iter, mi)
     {
        if (mi->submenu)
          {
             menu_deactive(mi->submenu);
             e_menu_deactivate(mi->submenu);
          }
     }
   e_object_del(E_OBJECT(m));
}

static void
menu_post_deactivate(void *data, E_Menu *m)
{
   E_Gadcon *gadcon = data;

   e_gadcon_locked_set(gadcon, 0);
   menu_deactive(m);
}

static void
sub_item_clicked_cb(void *data, E_Menu *m EINA_UNUSED, E_Menu_Item *mi EINA_UNUSED)
{
   E_DBusMenu_Item *item = data;
   e_dbusmenu_event_send(item, E_DBUSMENU_ITEM_EVENT_CLICKED);
}

static E_Menu *
item_submenu_new(E_DBusMenu_Item *item, E_Menu_Item *mi)
{
   E_Menu *m;
   E_DBusMenu_Item *child;

   m = e_menu_new();
   EINA_SAFETY_ON_NULL_RETURN_VAL(m, NULL);
   if (mi)
     e_menu_item_submenu_set(mi, m);

   EINA_INLIST_FOREACH(item->sub_items, child)
     {
        E_Menu_Item *submi;
        if (!child->visible)
          continue;
        submi = e_menu_item_new(m);
        if (child->type == E_DBUSMENU_ITEM_TYPE_SEPARATOR)
          {
             e_menu_item_separator_set(submi, 1);
             continue;
          }
        e_menu_item_label_set(submi, child->label);
        e_menu_item_callback_set(submi, sub_item_clicked_cb, child);
        if (!child->enabled)
          e_menu_item_disabled_set(submi, 1);
        if (child->toggle_type)
          {
             if (child->toggle_type == E_DBUSMENU_ITEM_TOGGLE_TYPE_CHECKMARK)
               e_menu_item_check_set(submi, 1);
             else if (child->toggle_type == E_DBUSMENU_ITEM_TOGGLE_TYPE_RADIO)
               e_menu_item_radio_set(submi, 1);
             e_menu_item_toggle_set(submi, child->toggle_state);
          }
        if (eina_inlist_count(child->sub_items))
          item_submenu_new(child, submi);
        e_util_menu_item_theme_icon_set(submi, child->icon_name);
     }
   return m;
}

static void
item_menu_open(E_DBusMenu_Item *item, E_Gadcon *gadcon)
{
   E_Menu *m = item_submenu_new(item, NULL);
   E_Zone *zone;
   int x, y;

   EINA_SAFETY_ON_NULL_RETURN(m);
   e_gadcon_locked_set(gadcon, 1);
   e_menu_post_deactivate_callback_set(m, menu_post_deactivate, gadcon);

   ecore_evas_pointer_xy_get(e_comp->ee, &x, &y);
   zone = e_comp_zone_xy_get(x, y);
   e_menu_activate_mouse(m, zone, x, y, 1, 1, E_MENU_POP_DIRECTION_DOWN, 0);
}

static void
clicked_toolbar_item(void *data, Evas *evas EINA_UNUSED, Evas_Object *obj, void *event EINA_UNUSED)
{
   E_DBusMenu_Item *item = data;
   E_Gadcon *gadcon = evas_object_data_get(obj, "gadcon");
   item_menu_open(item, gadcon);
}

void
appmenu_menu_of_instance_render(E_AppMenu_Instance *inst, E_AppMenu_Window *window)
{
   E_DBusMenu_Item *child;
   Evas_Coord w, h, sum_w = 0, sum_h = 0, padding = 0;
   Eina_List *l;
   Evas_Object *item;

   l = evas_object_box_children_get(inst->box);
   EINA_LIST_FREE(l, item)
     evas_object_del(item);
   e_gadcon_client_min_size_set(inst->gcc, 0, 0);

   if (!window || !window->root_item)
     return;

   EINA_INLIST_FOREACH(window->root_item->sub_items, child)
     {
        if (!child->label)
          continue;

        item = edje_object_add(inst->evas);
        e_theme_edje_object_set(item, "base/themes", "e/modules/appmenu/item");
        edje_object_part_text_set(item, "text", child->label);
        evas_object_box_append(inst->box, item);
        edje_object_size_min_calc(item, &w, &h);

        if (!padding)
          {
             const char *padding_txt;
             if (inst->orientation_horizontal)
               padding_txt = edje_object_data_get(item, "padding_horizontal");
             else
               padding_txt = edje_object_data_get(item, "padding_vertical");
             padding = atoi(padding_txt);
          }

        if (inst->orientation_horizontal)
          {
             h = inst->gcc->gadcon->shelf->h;
             w = w + padding;
             sum_w = sum_w + w;
          }
        else
          {
             w = inst->gcc->gadcon->shelf->w;
             h = h + padding;
             sum_h = sum_h + h;
          }
        evas_object_resize(item, w, h);
        evas_object_show(item);
        evas_object_data_set(item, "gadcon", inst->gcc->gadcon);
        evas_object_event_callback_add(item, EVAS_CALLBACK_MOUSE_DOWN,
                                       clicked_toolbar_item, child);
     }
   e_gadcon_client_min_size_set(inst->gcc, sum_w, sum_h);
}

void
appmenu_menu_render(E_AppMenu_Context *ctxt, E_AppMenu_Window *window)
{
   Eina_List *list;
   E_AppMenu_Instance *inst;

   ctxt->window = window;

   EINA_LIST_FOREACH(ctxt->instances, list, inst)
     appmenu_menu_of_instance_render(inst, window);
}
