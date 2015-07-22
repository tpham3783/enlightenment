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
 * Get the item before @p it in a ctxpopup widget's internal list of
 * items.
 *
 * @see elm_ctxpopup_item_next_get()
 *
 * @since 1.11
 * @ingroup Ctxpopup
 */
EOAPI Elm_Object_Item * elm_obj_ctxpopup_item_prev_get(void);

/**
 * Get the item after @p it in a ctxpopup widget's
 * internal list of items.
 *
 * @see elm_ctxpopup_item_prev_get()
 *
 * @since 1.11
 * @ingroup Ctxpopup
 */
EOAPI Elm_Object_Item * elm_obj_ctxpopup_item_next_get(void);

/**
 * No description supplied.
 *
 * @param[in] func No description supplied.
 * @param[in] data No description supplied.
 */
EOAPI void  elm_obj_ctxpopup_item_init(Evas_Smart_Cb func, const void *data);


#endif
