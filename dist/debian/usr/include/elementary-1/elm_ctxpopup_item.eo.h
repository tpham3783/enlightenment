#ifndef _ELM_CTXPOPUP_ITEM_EO_H_
#define _ELM_CTXPOPUP_ITEM_EO_H_

#ifndef _ELM_CTXPOPUP_ITEM_EO_CLASS_TYPE
#define _ELM_CTXPOPUP_ITEM_EO_CLASS_TYPE

typedef Eo Elm_Ctxpopup_Item;

#endif

#ifndef _ELM_CTXPOPUP_ITEM_EO_TYPES
#define _ELM_CTXPOPUP_ITEM_EO_TYPES


#endif
#define ELM_CTXPOPUP_ITEM_CLASS elm_ctxpopup_item_class_get()

EAPI const Eo_Class *elm_ctxpopup_item_class_get(void) EINA_CONST;

/**
 * @brief Get the item before $ it in a ctxpopup widget's internal list of
 * items.
 *
 * See also @ref elm_ctxpopup_item_next_get.
 *
 * @return The item before the object in its parent's list. If there is no
 * previous item for $ it or there's an error, @c null is returned.
 *
 * @since 1.11
 *
 * @ingroup Elm_Ctxpopup_Item
 */
EOAPI Elm_Widget_Item *elm_obj_ctxpopup_item_prev_get(void);

/**
 * @brief Get the item after $ it in a ctxpopup widget's internal list of
 * items.
 *
 * See also @ref elm_ctxpopup_item_prev_get.
 *
 * @return The item after the object in its parent's list. If there is no
 * previous item for $ it or there's an error, @c null is returned.
 *
 * @since 1.11
 *
 * @ingroup Elm_Ctxpopup_Item
 */
EOAPI Elm_Widget_Item *elm_obj_ctxpopup_item_next_get(void);

EOAPI void elm_obj_ctxpopup_item_init(Evas_Smart_Cb func, const void *data);


#endif
