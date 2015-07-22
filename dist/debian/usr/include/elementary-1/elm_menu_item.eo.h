#ifndef _ELM_MENU_ITEM_EO_H_
#define _ELM_MENU_ITEM_EO_H_

#ifndef _ELM_MENU_ITEM_EO_CLASS_TYPE
#define _ELM_MENU_ITEM_EO_CLASS_TYPE

typedef Eo Elm_Menu_Item;

#endif

#ifndef _ELM_MENU_ITEM_EO_TYPES
#define _ELM_MENU_ITEM_EO_TYPES


#endif
#define ELM_MENU_ITEM_CLASS elm_menu_item_class_get()

EAPI const Eo_Class *elm_menu_item_class_get(void) EINA_CONST;

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
EOAPI void  elm_obj_menu_item_icon_name_set(const char *icon);

/**
 * Get the string representation from the icon of a menu item
 *
 * Once this icon is set, any previously set icon will be deleted.
 * To hide icon set it to "".
 *
 * @see elm_menu_item_icon_name_set()
 * @ingroup Menu
 */
EOAPI const char * elm_obj_menu_item_icon_name_get(void);

/**
 * Set the selected state of @p item.
 *
 * @ingroup Menu
 *
 * @param[in] selected EINA_TRUE if selected EINA_FALSE otherwise
 */
EOAPI void  elm_obj_menu_item_selected_set(Eina_Bool selected);

/**
 * Get the selected state of @p item.
 *
 * @see elm_menu_item_selected_set()
 *
 * @ingroup Menu
 */
EOAPI Eina_Bool  elm_obj_menu_item_selected_get(void);

/**
 * Get the previous item in the menu.
 *
 * @ingroup Menu
 * 
 */
EOAPI Elm_Object_Item * elm_obj_menu_item_prev_get(void);

/**
 * Get the next item in the menu.
 *
 * @ingroup Menu
 * 
 */
EOAPI Elm_Object_Item * elm_obj_menu_item_next_get(void);

/**
 * Get the next item in the menu.
 *
 * @ingroup Menu
 * 
 */
EOAPI unsigned int  elm_obj_menu_item_index_get(void);

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
EOAPI void  elm_obj_menu_item_subitems_clear(void);

/**
 * Returns a list of @p item's subitems.
 *
 * @see elm_menu_add()
 *
 * @ingroup Menu
 * 
 */
EOAPI const Eina_List * elm_obj_menu_item_subitems_get(void);

/**
 * Returns whether @p item is a separator.
 *
 * @see elm_menu_item_separator_add()
 *
 * @ingroup Menu
 * 
 */
EOAPI Eina_Bool  elm_obj_menu_item_is_separator(void);

/**
 * Get the real Evas(Edje) object created to implement the view of a given
 * menu @p item.
 *
 * @warning Don't manipulate this object!
 *
 * @ingroup Menu
 * 
 */
EOAPI Evas_Object * elm_obj_menu_item_object_get(void);


#endif
