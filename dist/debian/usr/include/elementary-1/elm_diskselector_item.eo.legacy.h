#ifndef _ELM_DISKSELECTOR_ITEM_EO_LEGACY_H_
#define _ELM_DISKSELECTOR_ITEM_EO_LEGACY_H_

#ifndef _ELM_DISKSELECTOR_ITEM_EO_CLASS_TYPE
#define _ELM_DISKSELECTOR_ITEM_EO_CLASS_TYPE

typedef Eo Elm_Diskselector_Item;

#endif

#ifndef _ELM_DISKSELECTOR_ITEM_EO_TYPES
#define _ELM_DISKSELECTOR_ITEM_EO_TYPES


#endif

/**
 * Get the item before @p item in diskselector.
 *
 * The list of items follows append order. So it will return item appended
 * just before @p item and that wasn't deleted.
 *
 * If it is the first item, @c NULL will be returned.
 * First item can be get by elm_diskselector_first_item_get().
 *
 * @see elm_diskselector_item_append()
 * @see elm_diskselector_items_get()
 *
 * @ingroup Diskselector
 */
EAPI Elm_Object_Item *elm_diskselector_item_prev_get(const Elm_Diskselector_Item *obj);

/**
 * Get the item after @p item in diskselector.
 *
 * The list of items follows append order. So it will return item appended
 * just after @p item and that wasn't deleted.
 *
 * If it is the last item, @c NULL will be returned.
 * Last item can be get by elm_diskselector_last_item_get().
 *
 * @see elm_diskselector_item_append()
 * @see elm_diskselector_items_get()
 *
 * @ingroup Diskselector
 */
EAPI Elm_Object_Item *elm_diskselector_item_next_get(const Elm_Diskselector_Item *obj);

/**
 * Set the selected state of an item.
 *
 * This sets the selected state of the given item @p it.
 * @c EINA_TRUE for selected, @c EINA_FALSE for not selected.
 *
 * If a new item is selected the previously selected will be unselected.
 * Previously selected item can be get with function
 * elm_diskselector_selected_item_get().
 *
 * If the item @p it is unselected, the first item of diskselector will
 * be selected.
 *
 * Selected items will be visible on center position of diskselector.
 * So if it was on another position before selected, or was invisible,
 * diskselector will animate items until the selected item reaches center
 * position.
 *
 * @see elm_diskselector_item_selected_get()
 * @see elm_diskselector_selected_item_get()
 *
 * @ingroup Diskselector
 *
 * @param[in] selected The selected state
 */
EAPI void elm_diskselector_item_selected_set(Elm_Diskselector_Item *obj, Eina_Bool selected);

/**
 * Get whether the @p item is selected or not.
 *
 * @see elm_diskselector_selected_item_set() for details.
 * @see elm_diskselector_item_selected_get()
 *
 * @ingroup Diskselector
 */
EAPI Eina_Bool elm_diskselector_item_selected_get(const Elm_Diskselector_Item *obj);

#endif
