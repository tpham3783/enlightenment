#ifndef _ELM_MENU_ITEM_EO_LEGACY_H_
#define _ELM_MENU_ITEM_EO_LEGACY_H_

#ifndef _ELM_MENU_ITEM_EO_CLASS_TYPE
#define _ELM_MENU_ITEM_EO_CLASS_TYPE

typedef Eo Elm_Menu_Item;

#endif

#ifndef _ELM_MENU_ITEM_EO_TYPES
#define _ELM_MENU_ITEM_EO_TYPES


#endif

/**
 * Set the icon of a menu item to the standard icon with name @p icon
 *
 * Once this icon is set, any previously set icon will be deleted.
 * To hide icon set it to "".
 *
 * @ingroup Menu
 *
 * @param[in] icon The name of icon object
 */
EAPI void elm_menu_item_icon_name_set(Elm_Menu_Item *obj, const char *icon);

/**
 * Get the string representation from the icon of a menu item
 *
 * Once this icon is set, any previously set icon will be deleted.
 * To hide icon set it to "".
 *
 * @see elm_menu_item_icon_name_set()
 * @ingroup Menu
 */
EAPI const char *elm_menu_item_icon_name_get(const Elm_Menu_Item *obj);

/**
 * Set the selected state of @p item.
 *
 * @ingroup Menu
 *
 * @param[in] selected EINA_TRUE if selected EINA_FALSE otherwise
 */
EAPI void elm_menu_item_selected_set(Elm_Menu_Item *obj, Eina_Bool selected);

/**
 * Get the selected state of @p item.
 *
 * @see elm_menu_item_selected_set()
 *
 * @ingroup Menu
 */
EAPI Eina_Bool elm_menu_item_selected_get(const Elm_Menu_Item *obj);

/**
 * Get the previous item in the menu.
 *
 * @ingroup Menu
 * 
 */
EAPI Elm_Object_Item *elm_menu_item_prev_get(const Elm_Menu_Item *obj);

/**
 * Get the next item in the menu.
 *
 * @ingroup Menu
 * 
 */
EAPI Elm_Object_Item *elm_menu_item_next_get(const Elm_Menu_Item *obj);

/**
 * Get the next item in the menu.
 *
 * @ingroup Menu
 * 
 */
EAPI unsigned int elm_menu_item_index_get(const Elm_Menu_Item *obj);

/**
 * Remove all sub-items (children) of the given item
 * @since 1.8
 *
 * This removes all items that are children (and their descendants) of the
 * given item @p it.
 *
 * @see elm_object_item_del()
 *
 * @ingroup Menu
 * 
 */
EAPI void elm_menu_item_subitems_clear(Elm_Menu_Item *obj);

/**
 * Returns a list of @p item's subitems.
 *
 * @see elm_menu_add()
 *
 * @ingroup Menu
 * 
 */
EAPI const Eina_List *elm_menu_item_subitems_get(const Elm_Menu_Item *obj);

/**
 * Returns whether @p item is a separator.
 *
 * @see elm_menu_item_separator_add()
 *
 * @ingroup Menu
 * 
 */
EAPI Eina_Bool elm_menu_item_is_separator(const Elm_Menu_Item *obj);

/**
 * Get the real Evas(Edje) object created to implement the view of a given
 * menu @p item.
 *
 * @warning Don't manipulate this object!
 *
 * @ingroup Menu
 * 
 */
EAPI Evas_Object *elm_menu_item_object_get(const Elm_Menu_Item *obj);

#endif
