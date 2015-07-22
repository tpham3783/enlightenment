#ifndef _ELM_LIST_ITEM_EO_H_
#define _ELM_LIST_ITEM_EO_H_

#ifndef _ELM_LIST_ITEM_EO_CLASS_TYPE
#define _ELM_LIST_ITEM_EO_CLASS_TYPE

typedef Eo Elm_List_Item;

#endif

#ifndef _ELM_LIST_ITEM_EO_TYPES
#define _ELM_LIST_ITEM_EO_TYPES


#endif
#define ELM_LIST_ITEM_CLASS elm_list_item_class_get()

EAPI const Eo_Class *elm_list_item_class_get(void) EINA_CONST;

/**
 * Set or unset item as a separator.
 *
 * Items aren't set as separator by default.
 *
 * If set as separator it will display separator theme, so won't display
 * icons or label.
 *
 * @see elm_list_item_separator_get()
 *
 * @ingroup List
 *
 * @param[in] setting @c EINA_TRUE means item @p it is a separator. @c EINA_FALSE
indicates it's not.
 */
EOAPI void  elm_obj_list_item_separator_set(Eina_Bool setting);

/**
 * Get a value whether item is a separator or not.
 * @see elm_list_item_separator_set() for details.  
 * @ingroup List
 */
EOAPI Eina_Bool  elm_obj_list_item_separator_get(void);

/**
 * Set the selected state of an item.
 *
 * This sets the selected state of the given item @p it.
 * @c EINA_TRUE for selected, @c EINA_FALSE for not selected.
 *
 * If a new item is selected the previously selected will be unselected,
 * unless multiple selection is enabled with elm_list_multi_select_set().
 * Previously selected item can be get with function
 * elm_list_selected_item_get().
 *
 * Selected items will be highlighted.
 *
 * @see elm_list_item_selected_get()
 * @see elm_list_selected_item_get()
 * @see elm_list_multi_select_set()
 *
 * @ingroup List
 *
 * @param[in] selected the selected state (@c EINA_TRUE selected, @c EINA_FALSE not selected)
 */
EOAPI void  elm_obj_list_item_selected_set(Eina_Bool selected);

/**
 * Get whether the @p item is selected or not.
 *
 * @see elm_list_selected_item_set() for details.
 * @see elm_list_item_selected_get()
 *
 * @ingroup List
 */
EOAPI Eina_Bool  elm_obj_list_item_selected_get(void);

/**
 * Get the real Evas(Edje) object created to implement the view of a given
 * list @p item.
 *
 * Base object is the @c Evas_Object that represents that item.
 *
 * @ingroup List
 */
EOAPI Evas_Object * elm_obj_list_item_object_get(void);

/**
 * Get the item before @p it in list.
 *
 * @note If it is the first item, @c NULL will be returned.
 *
 * @see elm_list_item_append()
 * @see elm_list_items_get()
 *
 * @ingroup List
 */
EOAPI Elm_Object_Item * elm_obj_list_item_prev_get(void);

/**
 * Get the item after @p it in list.
 *
 * @note If it is the last item, @c NULL will be returned.
 *
 * @see elm_list_item_append()
 * @see elm_list_items_get()
 *
 * @ingroup List
 */
EOAPI Elm_Object_Item * elm_obj_list_item_next_get(void);

/**
 * Show @p item in the list view.
 *
 * It won't animate list until item is visible. If such behavior is wanted,
 * use elm_list_bring_in() instead.
 *
 * @ingroup List
 * 
 */
EOAPI void  elm_obj_list_item_show(void);

/**
 * Bring in the given item to list view.
 *
 * This causes list to jump to the given item @p item and show it
 * (by scrolling), if it is not fully visible.
 *
 * This may use animation to do so and take a period of time.
 *
 * If animation isn't wanted, elm_list_item_show() can be used.
 *
 * @ingroup List
 * 
 */
EOAPI void  elm_obj_list_item_bring_in(void);


#endif
