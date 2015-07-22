#ifndef _ELM_MULTIBUTTONENTRY_ITEM_EO_LEGACY_H_
#define _ELM_MULTIBUTTONENTRY_ITEM_EO_LEGACY_H_

#ifndef _ELM_MULTIBUTTONENTRY_ITEM_EO_CLASS_TYPE
#define _ELM_MULTIBUTTONENTRY_ITEM_EO_CLASS_TYPE

typedef Eo Elm_Multibuttonentry_Item;

#endif

#ifndef _ELM_MULTIBUTTONENTRY_ITEM_EO_TYPES
#define _ELM_MULTIBUTTONENTRY_ITEM_EO_TYPES


#endif

/**
 * Set the selected state of an item
 *
 * @ingroup Multibuttonentry
 *
 * @param[in] selected EINA_TRUE if selected EINA_FALSE otherwise
 */
EAPI void elm_multibuttonentry_item_selected_set(Elm_Multibuttonentry_Item *obj, Eina_Bool selected);

/**
 * Get the selected state of an item
 *
 * @ingroup Multibuttonentry
 */
EAPI Eina_Bool elm_multibuttonentry_item_selected_get(const Elm_Multibuttonentry_Item *obj);

/**
 * Get the previous item in the multibuttonentry
 *
 * @return The item before the item @p it
 *
 * @ingroup Multibuttonentry
 * 
 */
EAPI Elm_Object_Item *elm_multibuttonentry_item_prev_get(const Elm_Multibuttonentry_Item *obj);

/**
 * Get the next item in the multibuttonentry
 *
 * @return The item after the item @p it
 *
 * @ingroup Multibuttonentry
 * 
 */
EAPI Elm_Object_Item *elm_multibuttonentry_item_next_get(const Elm_Multibuttonentry_Item *obj);

#endif
