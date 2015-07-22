#ifndef _ELM_DISKSELECTOR_EO_LEGACY_H_
#define _ELM_DISKSELECTOR_EO_LEGACY_H_

#ifndef _ELM_DISKSELECTOR_EO_CLASS_TYPE
#define _ELM_DISKSELECTOR_EO_CLASS_TYPE

typedef Eo Elm_Diskselector;

#endif

#ifndef _ELM_DISKSELECTOR_EO_TYPES
#define _ELM_DISKSELECTOR_EO_TYPES


#endif

/**
 * Set the side labels max length.
 *
 * Length is the number of characters of items' label that will be
 * visible when it's set on side positions. It will just crop
 * the string after defined size. E.g.:
 *
 * An item with label "January" would be displayed on side position as
 * "Jan" if max length is set to 3, or "Janu", if this property
 * is set to 4.
 *
 * When it's selected, the entire label will be displayed, except for
 * width restrictions. In this case label will be cropped and "..."
 * will be concatenated.
 *
 * Default side label max length is 3.
 *
 * This property will be applied over all items, included before or
 * later this function call.
 *
 * @ingroup Diskselector
 *
 * @param[in] len The max length defined for side labels.
 */
EAPI void elm_diskselector_side_text_max_length_set(Elm_Diskselector *obj, int len);

/**
 * Get the side labels max length.
 *
 * @see elm_diskselector_side_text_max_length_set() for details.
 *
 * @return The max length defined for side labels, or 0 if not a valid
 * diskselector.
 *
 * @ingroup Diskselector
 */
EAPI int elm_diskselector_side_text_max_length_get(const Elm_Diskselector *obj);

/**
 * Enable or disable round mode.
 *
 * Disabled by default. If round mode is enabled the items list will
 * work like a circular list, so when the user reaches the last item,
 * the first one will popup.
 *
 * @see elm_diskselector_round_enabled_get()
 *
 * @ingroup Diskselector
 *
 * @param[in] enabled @c EINA_TRUE to enable round mode or @c EINA_FALSE to
disable it.
 */
EAPI void elm_diskselector_round_enabled_set(Elm_Diskselector *obj, Eina_Bool enabled);

/**
 * Get a value whether round mode is enabled or not.
 *
 * @see elm_diskselector_round_enabled_set() for details.
 *
 * @return @c EINA_TRUE means round mode is enabled. @c EINA_FALSE indicates
 * it's disabled. If @p obj is @c NULL, @c EINA_FALSE is returned.
 *
 * @ingroup Diskselector
 */
EAPI Eina_Bool elm_diskselector_round_enabled_get(const Elm_Diskselector *obj);

/**
 * Set the number of items to be displayed.
 *
 * Default value is 3, and also it's the minimum. If @p num is less
 * than 3, it will be set to 3.
 *
 * Also, it can be set on theme, using data item @c display_item_num
 * on group "elm/diskselector/item/X", where X is style set.
 * E.g.:
 *
 * group { name: "elm/diskselector/item/X";
 * data {
 * item: "display_item_num" "5";
 * }
 *
 * @ingroup Diskselector
 *
 * @param[in] num The number of items the diskselector will display.
 */
EAPI void elm_diskselector_display_item_num_set(Elm_Diskselector *obj, int num);

/**
 * Get the number of items in the diskselector object.
 *
 * @ingroup Diskselector
 */
EAPI int elm_diskselector_display_item_num_get(const Elm_Diskselector *obj);

/**
 * Get the first item of the diskselector.
 *
 * @return The first item, or @c NULL if none.
 *
 * The list of items follows append order. So it will return the first
 * item appended to the widget that wasn't deleted.
 *
 * @see elm_diskselector_item_append()
 * @see elm_diskselector_items_get()
 *
 * @ingroup Diskselector
 */
EAPI Elm_Object_Item *elm_diskselector_first_item_get(const Elm_Diskselector *obj);

/**
 * Get a list of all the diskselector items.
 *
 * @return A @c list of diskselector items, #Elm_Object_Item,
 * or @c NULL on failure.
 *
 * @see elm_diskselector_item_append()
 * @see elm_object_item_del()
 * @see elm_diskselector_clear()
 *
 * @ingroup Diskselector
 */
EAPI const Eina_List *elm_diskselector_items_get(const Elm_Diskselector *obj);

/**
 * Get the last item of the diskselector.
 *
 * @return The last item, or @c NULL if none.
 *
 * The list of items follows append order. So it will return last first
 * item appended to the widget that wasn't deleted.
 *
 * @see elm_diskselector_item_append()
 * @see elm_diskselector_items_get()
 *
 * @ingroup Diskselector
 */
EAPI Elm_Object_Item *elm_diskselector_last_item_get(const Elm_Diskselector *obj);

/**
 * Get the selected item.
 *
 * @return The selected diskselector item.
 *
 * The selected item can be unselected with function
 * elm_diskselector_item_selected_set(), and the first item of
 * diskselector will be selected.
 *
 * The selected item always will be centered on diskselector, with
 * full label displayed, i.e., max length set to side labels won't
 * apply on the selected item. More details on
 * elm_diskselector_side_text_max_length_set().
 *
 * @ingroup Diskselector
 */
EAPI Elm_Object_Item *elm_diskselector_selected_item_get(const Elm_Diskselector *obj);

/**
 * Appends a new item to the diskselector object.
 *
 * @return The created item or @c NULL upon failure.
 *
 * A new item will be created and appended to the diskselector, i.e., will
 * be set as last item. Also, if there is no selected item, it will
 * be selected. This will always happens for the first appended item.
 *
 * If no icon is set, label will be centered on item position, otherwise
 * the icon will be placed at left of the label, that will be shifted
 * to the right.
 *
 * Items created with this method can be deleted with
 * elm_object_item_del().
 *
 * Associated @p data can be properly freed when item is deleted if a
 * callback function is set with elm_object_item_del_cb_set().
 *
 * If a function is passed as argument, it will be called every time this item
 * is selected, i.e., the user stops the diskselector with this
 * item on center position. If such function isn't needed, just passing
 * @c NULL as @p func is enough. The same should be done for @p data.
 *
 * Simple example (with no function callback or data associated):
 * @code
 * disk = elm_diskselector_add(win);
 * ic = elm_icon_add(win);
 * elm_image_file_set(ic, "path/to/image", NULL);
 * elm_icon_resizable_set(ic, EINA_TRUE, EINA_TRUE);
 * elm_diskselector_item_append(disk, "label", ic, NULL, NULL);
 * @endcode
 *
 * @see elm_object_item_del()
 * @see elm_diskselector_clear()
 * @see elm_icon_add()
 *
 * @ingroup Diskselector
 * 
 *
 * @param[in] label The label of the diskselector item.
 * @param[in] icon The icon object to use at left side of the item. An
icon can be any Evas object, but usually it is an icon created
with elm_icon_add().
 * @param[in] func The function to call when the item is selected.
 * @param[in] data The data to associate with the item for related callbacks.
 */
EAPI Elm_Object_Item *elm_diskselector_item_append(Elm_Diskselector *obj, const char *label, Evas_Object *icon, Evas_Smart_Cb func, const void *data);

/**
 * Remove all diskselector's items.
 *
 * @see elm_object_item_del()
 * @see elm_diskselector_item_append()
 *
 * @ingroup Diskselector
 * 
 */
EAPI void elm_diskselector_clear(Elm_Diskselector *obj);

#endif
