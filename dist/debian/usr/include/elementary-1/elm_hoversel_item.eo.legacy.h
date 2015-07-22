#ifndef _ELM_HOVERSEL_ITEM_EO_LEGACY_H_
#define _ELM_HOVERSEL_ITEM_EO_LEGACY_H_

#ifndef _ELM_HOVERSEL_ITEM_EO_CLASS_TYPE
#define _ELM_HOVERSEL_ITEM_EO_CLASS_TYPE

typedef Eo Elm_Hoversel_Item;

#endif

#ifndef _ELM_HOVERSEL_ITEM_EO_TYPES
#define _ELM_HOVERSEL_ITEM_EO_TYPES


#endif

/**
 * @brief Get the icon object of the hoversel item.
 *
 * @see elm_hoversel_item_add()
 *
 * @ingroup Hoversel
 *
 * @param[in] icon_file An image file path on disk to use for the icon or standard icon name
 * @param[in] icon_group The edje group to use if @p icon_file is an edje file. Set this to NULL if the icon is not an edje file
 * @param[in] icon_type The icon type
 */
EAPI void elm_hoversel_item_icon_set(Elm_Hoversel_Item *obj, const char *icon_file, const char *icon_group, Elm_Icon_Type icon_type);

/**
 * @brief This sets the icon for the given hoversel item.
 *
 * The icon can be loaded from the standard set, from an image file, or from
 * an edje file.
 *
 * @see elm_hoversel_item_add()
 *
 * @ingroup Hoversel
 *
 * @param[out] icon_file An image file path on disk to use for the icon or standard icon name
 * @param[out] icon_group The edje group to use if @p icon_file is an edje file. Set this to NULL if the icon is not an edje file
 * @param[out] icon_type The icon type
 */
EAPI void elm_hoversel_item_icon_get(const Elm_Hoversel_Item *obj, const char **icon_file, const char **icon_group, Elm_Icon_Type *icon_type);

#endif
