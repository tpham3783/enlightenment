#ifndef _ELM_CTXPOPUP_ITEM_EO_LEGACY_H_
#define _ELM_CTXPOPUP_ITEM_EO_LEGACY_H_

#ifndef _ELM_CTXPOPUP_ITEM_EO_CLASS_TYPE
#define _ELM_CTXPOPUP_ITEM_EO_CLASS_TYPE

typedef Eo Elm_Ctxpopup_Item;

#endif

#ifndef _ELM_CTXPOPUP_ITEM_EO_TYPES
#define _ELM_CTXPOPUP_ITEM_EO_TYPES


#endif

/**
 * Get the item before @p it in a ctxpopup widget's internal list of
 * items.
 *
 * @see elm_ctxpopup_item_next_get()
 *
 * @since 1.11
 * @ingroup Ctxpopup
 */
EAPI Elm_Object_Item *elm_ctxpopup_item_prev_get(const Elm_Ctxpopup_Item *obj);

/**
 * Get the item after @p it in a ctxpopup widget's
 * internal list of items.
 *
 * @see elm_ctxpopup_item_prev_get()
 *
 * @since 1.11
 * @ingroup Ctxpopup
 */
EAPI Elm_Object_Item *elm_ctxpopup_item_next_get(const Elm_Ctxpopup_Item *obj);

/**
 * No description supplied.
 *
 * @param[in] func No description supplied.
 * @param[in] data No description supplied.
 */
EAPI void elm_ctxpopup_item_init(Elm_Ctxpopup_Item *obj, Evas_Smart_Cb func, const void *data);

#endif
