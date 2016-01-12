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
EAPI Elm_Widget_Item *elm_ctxpopup_item_prev_get(const Elm_Ctxpopup_Item *obj);

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
EAPI Elm_Widget_Item *elm_ctxpopup_item_next_get(const Elm_Ctxpopup_Item *obj);
EAPI void elm_ctxpopup_item_init(Elm_Ctxpopup_Item *obj, Evas_Smart_Cb func, const void *data);

#endif
