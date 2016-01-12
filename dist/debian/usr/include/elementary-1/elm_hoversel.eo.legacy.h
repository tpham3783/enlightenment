#ifndef _ELM_HOVERSEL_EO_LEGACY_H_
#define _ELM_HOVERSEL_EO_LEGACY_H_

#ifndef _ELM_HOVERSEL_EO_CLASS_TYPE
#define _ELM_HOVERSEL_EO_CLASS_TYPE

typedef Eo Elm_Hoversel;

#endif

#ifndef _ELM_HOVERSEL_EO_TYPES
#define _ELM_HOVERSEL_EO_TYPES


#endif

/**
 * @brief Control if the hoversel should expand horizontally.
 *
 * @note The initial button will display horizontally regradless of this
 * setting.
 *
 * @param[in] horizontal If @c true, the hover will expand horizontally to the
 * right.
 *
 * @ingroup Elm_Hoversel
 */
EAPI void elm_hoversel_horizontal_set(Elm_Hoversel *obj, Eina_Bool horizontal);

/**
 * @brief Control if the hoversel should expand horizontally.
 *
 * @note The initial button will display horizontally regradless of this
 * setting.
 *
 * @return If @c true, the hover will expand horizontally to the right.
 *
 * @ingroup Elm_Hoversel
 */
EAPI Eina_Bool elm_hoversel_horizontal_get(const Elm_Hoversel *obj);

/**
 * @brief Control the hover parent.
 *
 * Sets the hover parent object, the area that will be darkened when the
 * hoversel is clicked. Should probably be the window that the hoversel is in.
 *
 * @param[in] parent The parent to use
 *
 * @ingroup Elm_Hoversel
 */
EAPI void elm_hoversel_hover_parent_set(Elm_Hoversel *obj, Evas_Object *parent);

/**
 * @brief Control the hover parent.
 *
 * Sets the hover parent object, the area that will be darkened when the
 * hoversel is clicked. Should probably be the window that the hoversel is in.
 *
 * @return The parent to use
 *
 * @ingroup Elm_Hoversel
 */
EAPI Evas_Object *elm_hoversel_hover_parent_get(const Elm_Hoversel *obj);

/**
 * @brief Returns whether the hoversel is expanded.
 *
 * @return @c true if the hoversel is expanded or @c false otherwise
 *
 * @ingroup Elm_Hoversel
 */
EAPI Eina_Bool elm_hoversel_expanded_get(const Elm_Hoversel *obj);

/** Get the list of items within the given hoversel.
 *
 * @ingroup Elm_Hoversel
 */
EAPI const Eina_List *elm_hoversel_items_get(const Elm_Hoversel *obj);

/**
 * @brief Update icon and text of hoversel same to those of selected item
 * automatically.
 *
 * @param[in] auto_update @c true if hoversel is updated automatically or
 * @c false otherwise
 *
 * @ingroup Elm_Hoversel
 */
EAPI void elm_hoversel_auto_update_set(Elm_Hoversel *obj, Eina_Bool auto_update);

/**
 * @brief Update icon and text of hoversel same to those of selected item
 * automatically.
 *
 * @return @c true if hoversel is updated automatically or @c false otherwise
 *
 * @ingroup Elm_Hoversel
 */
EAPI Eina_Bool elm_hoversel_auto_update_get(const Elm_Hoversel *obj);

/** This triggers the hoversel popup from code, the same as if the user had
 * clicked the button.
 *
 * @ingroup Elm_Hoversel
 */
EAPI void elm_hoversel_hover_begin(Elm_Hoversel *obj);

/**
 * @brief This will remove all the children items from the hoversel.
 *
 * Warning Should *not* be called while the hoversel is active; use
 * @ref elm_hoversel_expanded_get to check first.
 *
 * @ingroup Elm_Hoversel
 */
EAPI void elm_hoversel_clear(Elm_Hoversel *obj);

/** This dismisses the hoversel popup as if the user had clicked outside the
 * hover.
 *
 * @ingroup Elm_Hoversel
 */
EAPI void elm_hoversel_hover_end(Elm_Hoversel *obj);

/**
 * @brief Add an item to the hoversel button
 *
 * This adds an item to the hoversel to show when it is clicked. Note: if you
 * need to use an icon from an edje file then use Elm.Hoversel_Item.icon.set
 * right after this function, and set icon_file to @c null here.
 *
 * @param[in] icon_file An image file path on disk to use for the icon or
 * standard icon name (NULL if not desired)
 * @param[in] icon_type The icon type if relevant
 * @param[in] func Convenience function to call when this item is selected. The
 * last parameter @c event_info of @c func is the selected item pointer.
 * @param[in] data Data to pass to item-related functions
 *
 * @return A handle to the added item.
 *
 * @ingroup Elm_Hoversel
 */
EAPI Elm_Widget_Item *elm_hoversel_item_add(Elm_Hoversel *obj, const char *label, const char *icon_file, Elm_Icon_Type icon_type, Evas_Smart_Cb func, const void *data);

#endif
