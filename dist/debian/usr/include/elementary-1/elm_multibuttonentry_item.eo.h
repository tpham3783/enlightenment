#ifndef _ELM_MULTIBUTTONENTRY_ITEM_EO_H_
#define _ELM_MULTIBUTTONENTRY_ITEM_EO_H_

#ifndef _ELM_MULTIBUTTONENTRY_ITEM_EO_CLASS_TYPE
#define _ELM_MULTIBUTTONENTRY_ITEM_EO_CLASS_TYPE

typedef Eo Elm_Multibuttonentry_Item;

#endif

#ifndef _ELM_MULTIBUTTONENTRY_ITEM_EO_TYPES
#define _ELM_MULTIBUTTONENTRY_ITEM_EO_TYPES


#endif
#define ELM_MULTIBUTTONENTRY_ITEM_CLASS elm_multibuttonentry_item_class_get()

EAPI const Eo_Class *elm_multibuttonentry_item_class_get(void) EINA_CONST;

/**
 * Set the selected state of an item
 *
 * @ingroup Multibuttonentry
 *
 * @param[in] selected EINA_TRUE if selected EINA_FALSE otherwise
 */
EOAPI void  elm_obj_multibuttonentry_item_selected_set(Eina_Bool selected);

/**
 * Get the selected state of an item
 *
 * @ingroup Multibuttonentry
 */
EOAPI Eina_Bool  elm_obj_multibuttonentry_item_selected_get(void);

/**
 * Get the previous item in the multibuttonentry
 *
 * @return The item before the item @p it
 *
 * @ingroup Multibuttonentry
 * 
 */
EOAPI Elm_Object_Item * elm_obj_multibuttonentry_item_prev_get(void);

/**
 * Get the next item in the multibuttonentry
 *
 * @return The item after the item @p it
 *
 * @ingroup Multibuttonentry
 * 
 */
EOAPI Elm_Object_Item * elm_obj_multibuttonentry_item_next_get(void);


#endif
