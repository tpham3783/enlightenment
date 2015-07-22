#ifndef _ELM_COLOR_ITEM_EO_LEGACY_H_
#define _ELM_COLOR_ITEM_EO_LEGACY_H_

#ifndef _ELM_COLOR_ITEM_EO_CLASS_TYPE
#define _ELM_COLOR_ITEM_EO_CLASS_TYPE

typedef Eo Elm_Color_Item;

#endif

#ifndef _ELM_COLOR_ITEM_EO_TYPES
#define _ELM_COLOR_ITEM_EO_TYPES


#endif

/**
 * @brief Set Palette item's color.
 *
 * @param[in] r red-value of color
 * @param[in] g green-value of color
 * @param[in] b blue-value of color
 * @param[in] a alpha-value of color
 *
 * @ingroup Elm_Color_Item
 */
EAPI void elm_color_item_color_set(Elm_Color_Item *obj, int r, int g, int b, int a);

/**
 * @brief Get Palette item's color.
 *
 * @param[out] r red-value of color
 * @param[out] g green-value of color
 * @param[out] b blue-value of color
 * @param[out] a alpha-value of color
 *
 * @ingroup Elm_Color_Item
 */
EAPI void elm_color_item_color_get(const Elm_Color_Item *obj, int *r, int *g, int *b, int *a);

/**
 * @brief Set the selected state of color palette item
 *
 * @param[in] selected @c true if selected @c false otherwise
 *
 * @since 1.9
 *
 * @ingroup Elm_Color_Item
 */
EAPI void elm_color_item_selected_set(Elm_Color_Item *obj, Eina_Bool selected);

/**
 * @brief Get the selected state of color palette item
 *
 * @return @c true if selected @c false otherwise
 *
 * @since 1.9
 *
 * @ingroup Elm_Color_Item
 */
EAPI Eina_Bool elm_color_item_selected_get(const Elm_Color_Item *obj);

#endif
