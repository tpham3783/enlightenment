#ifndef _ELM_FLIPSELECTOR_ITEM_EO_H_
#define _ELM_FLIPSELECTOR_ITEM_EO_H_

#ifndef _ELM_FLIPSELECTOR_ITEM_EO_CLASS_TYPE
#define _ELM_FLIPSELECTOR_ITEM_EO_CLASS_TYPE

typedef Eo Elm_Flipselector_Item;

#endif

#ifndef _ELM_FLIPSELECTOR_ITEM_EO_TYPES
#define _ELM_FLIPSELECTOR_ITEM_EO_TYPES


#endif
#define ELM_FLIPSELECTOR_ITEM_CLASS elm_flipselector_item_class_get()

EAPI const Eo_Class *elm_flipselector_item_class_get(void) EINA_CONST;

/**
 * Set whether a given flip selector widget's item should be the
 * currently selected one.
 *
 * This sets whether @p item is or not the selected (thus, under
 * display) one. If @p item is different than the one under display,
 * the latter will be unselected. If the @p item is set to be
 * unselected, on the other hand, the @b first item in the widget's
 * internal members list will be the new selected one.
 *
 * @see elm_flipselector_item_selected_get()
 *
 * @ingroup Flipselector
 *
 * @param[in] selected EINA_TRUE if selected EINA_FALSE otherwise
 */
EOAPI void  elm_obj_flipselector_item_selected_set(Eina_Bool selected);

/**
 * Get whether a given flip selector widget's item is the currently
 * selected one.
 *
 * @see elm_flipselector_item_selected_set()
 * @ingroup Flipselector
 */
EOAPI Eina_Bool  elm_obj_flipselector_item_selected_get(void);

/**
 * Get the item before @p item in a flip selector widget's internal list of
 * items.
 *
 * @return The item before the @p item, in its parent's list. If there is no
 * previous item for @p item or there's an error, @c NULL is returned.
 *
 * @see elm_flipselector_item_next_get()
 *
 * @ingroup Flipselector
 * 
 */
EOAPI Elm_Object_Item * elm_obj_flipselector_item_prev_get(void);

/**
 * Get the item after @p item in a flip selector widget's
 * internal list of items.
 *
 * @return The item after the @p item, in its parent's list. If there is no next
 * item for @p item or there's an error, @c NULL is returned.
 *
 * @see elm_flipselector_item_prev_get()
 *
 * @ingroup Flipselector
 * 
 */
EOAPI Elm_Object_Item * elm_obj_flipselector_item_next_get(void);


#endif
