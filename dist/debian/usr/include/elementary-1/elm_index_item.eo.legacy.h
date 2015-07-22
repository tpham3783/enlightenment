#ifndef _ELM_INDEX_ITEM_EO_LEGACY_H_
#define _ELM_INDEX_ITEM_EO_LEGACY_H_

#ifndef _ELM_INDEX_ITEM_EO_CLASS_TYPE
#define _ELM_INDEX_ITEM_EO_CLASS_TYPE

typedef Eo Elm_Index_Item;

#endif

#ifndef _ELM_INDEX_ITEM_EO_TYPES
#define _ELM_INDEX_ITEM_EO_TYPES


#endif

/**
 * Set the selected state of an item.
 *
 * This sets the selected state of the given item @p it.
 * @c EINA_TRUE for selected, @c EINA_FALSE for not selected.
 *
 * If a new item is selected the previously selected will be unselected.
 * Previously selected item can be get with function
 * elm_index_selected_item_get().
 *
 * Selected items will be highlighted.
 *
 * @see elm_index_selected_item_get()
 *
 * @ingroup Index
 *
 * @param[in] selected EINA_TRUE if selected EINA_FALSE otherwise
 */
EAPI void elm_index_item_selected_set(Elm_Index_Item *obj, Eina_Bool selected);

/**
 * Get the letter (string) set on a given index widget item.
 * @return The letter string set on @p item
 *
 * @ingroup Index
 * 
 */
EAPI const char *elm_index_item_letter_get(const Elm_Index_Item *obj);

#endif
