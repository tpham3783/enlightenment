#ifndef _ELM_GENLIST_EO_H_
#define _ELM_GENLIST_EO_H_

#ifndef _ELM_GENLIST_EO_CLASS_TYPE
#define _ELM_GENLIST_EO_CLASS_TYPE

typedef Eo Elm_Genlist;

#endif

#ifndef _ELM_GENLIST_EO_TYPES
#define _ELM_GENLIST_EO_TYPES


#endif
#define ELM_GENLIST_CLASS elm_genlist_class_get()

EAPI const Eo_Class *elm_genlist_class_get(void) EINA_CONST;

/**
 * @brief Enable/disable homogeneous mode.
 *
 * This will enable the homogeneous mode where items are of the same height and
 * width so that genlist may do the lazy-loading at its maximum (which
 * increases the performance for scrolling the list). In the normal mode,
 * genlist will pre-calculate all the items' sizes even though they are not in
 * use. So items' callbacks are called many times than expected. But
 * homogeneous mode will skip the item size pre-calculation  process so items'
 * callbacks are called only when the item is needed.
 *
 * @note This also works well with group index.
 *
 * @param[in] homogeneous Assume the items within the genlist are of the same
 * height and width. Default is @c false.
 *
 * @ingroup Elm_Genlist
 */
EOAPI void elm_obj_genlist_homogeneous_set(Eina_Bool homogeneous);

/**
 * @brief Get whether the homogeneous mode is enabled.
 *
 * @return Assume the items within the genlist are of the same height and
 * width. Default is @c false.
 *
 * @ingroup Elm_Genlist
 */
EOAPI Eina_Bool elm_obj_genlist_homogeneous_get(void);

/**
 * @brief Set the genlist select mode.
 *
 * #ELM_OBJECT_SELECT_MODE_DEFAULT means that items will call their selection
 * func and callback once when first becoming selected. Any further clicks will
 * do nothing, unless you set always select mode. ELM_OBJECT_SELECT_MODE_ALWAYS
 * means that even if selected, every click will make the selected callbacks be
 * called. #ELM_OBJECT_SELECT_MODE_NONE will turn off the ability to select
 * items entirely and they will neither appear selected nor call selected
 * callback functions.
 *
 * @param[in] mode The select mode.
 *
 * @ingroup Elm_Genlist
 */
EOAPI void elm_obj_genlist_select_mode_set(Elm_Object_Select_Mode mode);

/**
 * @brief Get the genlist select mode.
 *
 * @return The select mode.
 *
 * @ingroup Elm_Genlist
 */
EOAPI Elm_Object_Select_Mode elm_obj_genlist_select_mode_get(void);

/**
 * @brief Set focus upon items selection mode
 *
 * When enabled, every selection of an item inside the genlist will
 * automatically set focus to its first focusable widget from the left. This is
 * true of course if the selection was made by clicking an unfocusable area in
 * an item or selecting it with a key movement. Clicking on a focusable widget
 * inside an item will couse this particular item to get focus as usual.
 *
 * @param[in] enabled The tree effect status.
 *
 * @ingroup Elm_Genlist
 */
EOAPI void elm_obj_genlist_focus_on_selection_set(Eina_Bool enabled);

/**
 * @brief Get whether focus upon item's selection mode is enabled.
 *
 * @return The tree effect status.
 *
 * @ingroup Elm_Genlist
 */
EOAPI Eina_Bool elm_obj_genlist_focus_on_selection_get(void);

/**
 * @brief Set the timeout in seconds for the longpress event.
 *
 * This option will change how long it takes to send an event "longpressed"
 * after the mouse down signal is sent to the list. If this event occurs, no
 * "clicked" event will be sent.
 *
 * @warning If you set the longpress timeout value with this API, your genlist
 * will not be affected by the longpress value of elementary config value
 * later.
 *
 * @param[in] timeout Timeout in seconds. Default is elm config value (1.0).
 *
 * @ingroup Elm_Genlist
 */
EOAPI void elm_obj_genlist_longpress_timeout_set(double timeout);

/**
 * @brief Get the timeout in seconds for the longpress event.
 *
 * @return Timeout in seconds. Default is elm config value (1.0).
 *
 * @ingroup Elm_Genlist
 */
EOAPI double elm_obj_genlist_longpress_timeout_get(void);

/**
 * @brief Enable or disable multi-selection in the genlist.
 *
 * This enables ($true) or disables ($false) multi-selection in the list. This
 * allows more than 1 item to be selected. To retrieve the list of selected
 * items, use @ref elm_obj_genlist_selected_items_get.
 *
 * @param[in] multi Multi-select enable/disable. Default is disabled.
 *
 * @ingroup Elm_Genlist
 */
EOAPI void elm_obj_genlist_multi_select_set(Eina_Bool multi);

/**
 * @brief Get if multi-selection in genlist is enabled or disabled.
 *
 * @return Multi-select enable/disable. Default is disabled.
 *
 * @ingroup Elm_Genlist
 */
EOAPI Eina_Bool elm_obj_genlist_multi_select_get(void);

/**
 * @brief Set reorder mode.
 *
 * After turning on the reorder mode, longpress on normal item will trigger
 * reordering of the item. You can move the item up and down. However, reorder
 * does not work with group item.
 *
 * @param[in] reorder_mode The reorder mode.
 *
 * @ingroup Elm_Genlist
 */
EOAPI void elm_obj_genlist_reorder_mode_set(Eina_Bool reorder_mode);

/**
 * @brief Get the reorder mode.
 *
 * @return The reorder mode.
 *
 * @ingroup Elm_Genlist
 */
EOAPI Eina_Bool elm_obj_genlist_reorder_mode_get(void);

/**
 * @brief Set Genlist decorate mode.
 *
 * This sets Genlist decorate mode to all items.
 *
 * @param[in] decorated The decorate mode status.
 *
 * @ingroup Elm_Genlist
 */
EOAPI void elm_obj_genlist_decorate_mode_set(Eina_Bool decorated);

/**
 * @brief Get Genlist decorate mode.
 *
 * @return The decorate mode status.
 *
 * @ingroup Elm_Genlist
 */
EOAPI Eina_Bool elm_obj_genlist_decorate_mode_get(void);

/**
 * @brief Set the genlist multi select mode.
 *
 * #ELM_OBJECT_MULTI_SELECT_MODE_DEFAULT means that select/unselect items
 * whenever each item is clicked. #ELM_OBJECT_MULTI_SELECT_MODE_WITH_CONTROL
 * means that only one item will be selected although multi-selection is
 * enabled, if clicked without pressing control key. This mode is only
 * available with multi-selection.
 *
 * @param[in] mode The multi select mode
 *
 * @since 1.8
 *
 * @ingroup Elm_Genlist
 */
EOAPI void elm_obj_genlist_multi_select_mode_set(Elm_Object_Multi_Select_Mode mode);

/**
 * @brief Get the genlist multi select mode.
 *
 * @return The multi select mode
 *
 * @since 1.8
 *
 * @ingroup Elm_Genlist
 */
EOAPI Elm_Object_Multi_Select_Mode elm_obj_genlist_multi_select_mode_get(void);

/**
 * @brief Set the maximum number of items within an item block.
 *
 * This will configure the block count to tune to the target with particular
 * performance matrix.
 *
 * A block of objects will be used to reduce the number of operations due to
 * many objects in the screen. It can determine the visibility, or if the
 * object has changed, it theme needs to be updated, etc. doing this kind of
 * calculation to the entire block, instead of per object.
 *
 * The default value for the block count is enough for most lists, so unless
 * you know you will have a lot of objects visible in the screen at the same
 * time, don't try to change this.
 *
 * @param[in] count Maximum number of items within an item block. Default is
 * 32.
 *
 * @ingroup Elm_Genlist
 */
EOAPI void elm_obj_genlist_block_count_set(int count);

/**
 * @brief Get the maximum number of items within an item block.
 *
 * @return Maximum number of items within an item block. Default is 32.
 *
 * @ingroup Elm_Genlist
 */
EOAPI int elm_obj_genlist_block_count_get(void);

/**
 * @brief Control genlist tree effect.
 *
 * @param[in] enabled The tree effect status.
 *
 * @ingroup Elm_Genlist
 */
EOAPI void elm_obj_genlist_tree_effect_enabled_set(Eina_Bool enabled);

/**
 * @brief Control genlist tree effect.
 *
 * @return The tree effect status.
 *
 * @ingroup Elm_Genlist
 */
EOAPI Eina_Bool elm_obj_genlist_tree_effect_enabled_get(void);

/**
 * @brief Set whether the genlist items should be highlighted on item
 * selection.
 *
 * This will turn on/off the highlight effect on item selection. The selected
 * and clicked callback functions will still be called.
 *
 * Highlight is enabled by default.
 *
 * @param[in] highlight @c true to enable highlighting or @c false to disable
 * it.
 *
 * @ingroup Elm_Genlist
 */
EOAPI void elm_obj_genlist_highlight_mode_set(Eina_Bool highlight);

/**
 * @brief Get whether the genlist items' should be highlighted when item
 * selected.
 *
 * @return @c true to enable highlighting or @c false to disable it.
 *
 * @ingroup Elm_Genlist
 */
EOAPI Eina_Bool elm_obj_genlist_highlight_mode_get(void);

/**
 * @brief This sets the horizontal stretching mode.
 *
 * This sets the mode used for sizing items horizontally. Valid modes are
 * #ELM_LIST_LIMIT, #ELM_LIST_SCROLL, and #ELM_LIST_COMPRESS. The default is
 * #ELM_LIST_SCROLL. This mode means that if items are too wide to fit, the
 * scroller will scroll horizontally. Otherwise items are expanded to fill the
 * width of the viewport of the scroller. If it is #ELM_LIST_LIMIT, items will
 * be expanded to the viewport width and limited to that size. If it is
 * #ELM_LIST_COMPRESS, the item width will be fixed (restricted to a minimum
 * of) to the list width when calculating its size in order to allow the height
 * to be calculated based on it. This allows, for instance, text block to wrap
 * lines if the Edje part is configured with "text.min: 0 1".
 *
 * @note #ELM_LIST_COMPRESS will make list resize slower as it will have to
 * recalculate every item height again whenever the list width changes!
 *
 * @note Homogeneous mode is for that all items in the genlist same
 * width/height. With #ELM_LIST_COMPRESS, it makes genlist items to fast
 * initializing. However there's no sub-objects in genlist which can be on the
 * flying resizable (such as TEXTBLOCK). If then, some dynamic esizable objects
 * in genlist would not diplayed properly.
 *
 * @param[in] mode The mode to use (one of #ELM_LIST_SCROLL or
 * #ELM_LIST_LIMIT).
 *
 * @ingroup Elm_Genlist
 */
EOAPI void elm_obj_genlist_mode_set(Elm_List_Mode mode);

/**
 * @brief Get the horizontal stretching mode.
 *
 * @return The mode to use (one of #ELM_LIST_SCROLL or #ELM_LIST_LIMIT).
 *
 * @ingroup Elm_Genlist
 */
EOAPI Elm_List_Mode elm_obj_genlist_mode_get(void);

/**
 * @brief Get active genlist mode item.
 *
 * This function returns the item that was activated with a mode, by the
 * function @ref elm_obj_genlist_decorate_mode_set.
 *
 * @return The active item for that current mode. Or @c null if no item is
 * activated with any mode.
 *
 * @ingroup Elm_Genlist
 */
EOAPI Elm_Widget_Item *elm_obj_genlist_decorated_item_get(void);

/**
 * @brief Get the selected item in the genlist.
 *
 * This gets the selected item in the list (if multi-selection is enabled, only
 * the item that was first selected in the list is returned - which is not very
 * useful, so see @ref elm_obj_genlist_selected_items_get for when
 * multi-selection is used).
 *
 * If no item is selected, @c null is returned.
 *
 * @return The selected item, or @c null if none is selected.
 *
 * @ingroup Elm_Genlist
 */
EOAPI Elm_Widget_Item *elm_obj_genlist_selected_item_get(void);

/**
 * @brief Get the first item in the genlist.
 *
 * This returns the first item in the list.
 *
 * If filter is set on genlist, it returns the first filtered item in the list.
 *
 * @return The first item or @c null.
 *
 * @ingroup Elm_Genlist
 */
EOAPI Elm_Widget_Item *elm_obj_genlist_first_item_get(void);

/**
 * @brief Get a list of realized items in genlist.
 *
 * This returns a list of the realized items in the genlist. The list contains
 * genlist item pointers. The list must be freed by the caller when done with
 * @ref eina_list_free. The  item pointers in the list are only valid so long
 * as those items are not deleted or the genlist is not deleted.
 *
 * @ingroup Elm_Genlist
 */
EOAPI Eina_List *elm_obj_genlist_realized_items_get(void);

/**
 * @brief Get a list of selected items in the genlist.
 *
 * It returns a list of the selected items. This list pointer is only valid so
 * long as the selection doesn't change (no items are selected or unselected,
 * or unselected implicitl by deletion). The list contains genlist items
 * pointers. The order of the items in this list is the order which they were
 * selected, i.e. the first item in this list is the first item that was
 * selected, and so on.
 *
 * @note If not in multi-select mode, consider using function
 * @ref elm_obj_genlist_selected_item_get instead.
 *
 * @ingroup Elm_Genlist
 */
EOAPI const Eina_List *elm_obj_genlist_selected_items_get(void);

/**
 * @brief Get the last item in the genlist
 *
 * This returns the last item in the list.
 *
 * If filter is set to genlist, it returns last filtered item in the list.
 *
 * @ingroup Elm_Genlist
 */
EOAPI Elm_Widget_Item *elm_obj_genlist_last_item_get(void);

/**
 * @brief Set filter mode with key.
 *
 * This initiates the filter mode of genlist with user/application provided
 * key. If key is NULL, the filter mode is turned off.
 *
 * The filter data passed has to be managed by application itself and should
 * not be deleted before genlist is deleted(or while filtering is not done.
 *
 * @param[in] key Filter key
 *
 * @ingroup Elm_Genlist
 */
EOAPI void elm_obj_genlist_filter_set(void *key);

/**
 * @brief Insert an item before another in a genlist widget
 *
 * This inserts an item before another in the list. It will be in the same tree
 * level or group as the item it is inserted before.
 *
 * @param[in] data The item data.
 * @param[in] parent The parent item, or @c null if none.
 * @param[in] before_it The item to place this new one before.
 * @param[in] type Item type.
 * @param[in] func Convenience function called when the item is selected.
 * @param[in] func_data Data passed to @c func above.
 *
 * @ingroup Elm_Genlist
 */
EOAPI Elm_Widget_Item *elm_obj_genlist_item_insert_before(const Elm_Genlist_Item_Class *itc, const void *data, Elm_Widget_Item *parent, Elm_Widget_Item *before_it, Elm_Genlist_Item_Type type, Evas_Smart_Cb func, const void *func_data);

/**
 * @brief Update the contents of all realized items.
 *
 * This updates all realized items by calling all the item class functions
 * again to get the contents, texts and states. Use this when the original item
 * data has changed and the changes are desired to be reflected.
 *
 * To update just one item, use @ref elm_genlist_item_update.
 *
 * @ingroup Elm_Genlist
 */
EOAPI void elm_obj_genlist_realized_items_update(void);

/**
 * @brief Insert an item after another in a genlist widget
 *
 * This inserts an item after another in the list. It will be in the same tree
 * level or group as the item it is inserted after.
 *
 * @param[in] data The item data.
 * @param[in] parent The parent item, or @c null if none.
 * @param[in] after_it The item to place this new one after.
 * @param[in] type Item type.
 * @param[in] func Convenience function called when the item is selected.
 * @param[in] func_data Data passed to @c func above.
 *
 * @ingroup Elm_Genlist
 */
EOAPI Elm_Widget_Item *elm_obj_genlist_item_insert_after(const Elm_Genlist_Item_Class *itc, const void *data, Elm_Widget_Item *parent, Elm_Widget_Item *after_it, Elm_Genlist_Item_Type type, Evas_Smart_Cb func, const void *func_data);

/**
 * @brief Get the item that is at the x, y canvas coords.
 *
 * This returns the item at the given coordinates (which are canvas relative,
 * not object-relative). If an item is at that coordinate, that item handle is
 * returned, and if @c posret is not NULL, the integer pointed to is set to a
 * value of -1, 0 or 1, depending if the coordinate is on the upper portion of
 * that item (-1), on the middle section (0) or on the lower part (1). If NULL
 * is returned as an item (no item found there), then posret may indicate -1 or
 * 1 based if the coordinate is above or below all items respectively in the
 * genlist.
 *
 * @param[in] y The input y coordinate.
 * @param[out] posret The position relative to the item returned here.
 *
 * @ingroup Elm_Genlist
 */
EOAPI Elm_Widget_Item *elm_obj_genlist_at_xy_item_get(Evas_Coord x, Evas_Coord y, int *posret);

/**
 * @brief Returns an iterator over the list of filtered items.
 *
 * Return NULL if filter is not set. Application must take care of the case
 * while calling the API. Must be freed after use.
 *
 * @return Iterator on genlist
 *
 * @ingroup Elm_Genlist
 */
EOAPI Eina_Iterator *elm_obj_genlist_filter_iterator_new(void);

/**
 * @brief Return how many items are currently in a list.
 *
 * This behavior is O(1) and includes items which may or may not be realized.
 *
 * @ingroup Elm_Genlist
 */
EOAPI unsigned int elm_obj_genlist_items_count(void);

/**
 * @brief Prepend a new item in a given genlist widget.
 *
 * This adds an item to the beginning of the list or beginning of the children
 * of the parent if given.
 *
 * @param[in] data The item data.
 * @param[in] parent The parent item, or @c null if none.
 * @param[in] type Item type.
 * @param[in] func Convenience function called when the item is selected.
 * @param[in] func_data Data passed to @c func above.
 *
 * @ingroup Elm_Genlist
 */
EOAPI Elm_Widget_Item *elm_obj_genlist_item_prepend(const Elm_Genlist_Item_Class *itc, const void *data, Elm_Widget_Item *parent, Elm_Genlist_Item_Type type, Evas_Smart_Cb func, const void *func_data);

/**
 * @brief Remove all items from a given genlist widget.
 *
 * This removes (and deletes) all items in @c obj, leaving it empty.
 *
 * @ingroup Elm_Genlist
 */
EOAPI void elm_obj_genlist_clear(void);

/**
 * @brief Append a new item in a given genlist widget.
 *
 * This adds the given item to the end of the list or the end of the children
 * list if the @c parent is given.
 *
 * @param[in] data The item data.
 * @param[in] parent The parent item, or @c null if none.
 * @param[in] type Item type.
 * @param[in] func Convenience function called when the item is selected.
 * @param[in] func_data Data passed to @c func above.
 *
 * @ingroup Elm_Genlist
 */
EOAPI Elm_Widget_Item *elm_obj_genlist_item_append(const Elm_Genlist_Item_Class *itc, const void *data, Elm_Widget_Item *parent, Elm_Genlist_Item_Type type, Evas_Smart_Cb func, const void *func_data);

/**
 * @brief Insert a new item into the sorted genlist object
 *
 * This inserts an item in the genlist based on user defined comparison
 * function. The two arguments passed to the function @c func are genlist item
 * handles to compare.
 *
 * @param[in] data The item data.
 * @param[in] parent The parent item, or @c null if none.
 * @param[in] type Item type.
 * @param[in] comp The function called for the sort.
 * @param[in] func Convenience function called when the item is selected.
 * @param[in] func_data Data passed to @c func above.
 *
 * @ingroup Elm_Genlist
 */
EOAPI Elm_Widget_Item *elm_obj_genlist_item_sorted_insert(const Elm_Genlist_Item_Class *itc, const void *data, Elm_Widget_Item *parent, Elm_Genlist_Item_Type type, Eina_Compare_Cb comp, Evas_Smart_Cb func, const void *func_data);

/**
 * @brief Get genlist item by given string.
 *
 * It takes pointer to the genlist item that will be used to start search from
 * it.
 *
 * This function uses globs (like "*.jpg") for searching and takes search flags
 * as last parameter That is a bitfield with values to be ored together or 0
 * for no flags.
 *
 * @param[in] part_name Name of the TEXT part of genlist item to search string
 * in.
 * @param[in] pattern The search pattern.
 * @param[in] flags Search flags.
 *
 * @since 1.11
 *
 * @ingroup Elm_Genlist
 */
EOAPI Elm_Widget_Item *elm_obj_genlist_search_by_text_item_get(Elm_Widget_Item *item_to_search_from, const char *part_name, const char *pattern, Elm_Glob_Match_Flags flags);

EOAPI extern const Eo_Event_Description _ELM_GENLIST_EVENT_ITEM_FOCUSED;
EOAPI extern const Eo_Event_Description _ELM_GENLIST_EVENT_ITEM_UNFOCUSED;
EOAPI extern const Eo_Event_Description _ELM_GENLIST_EVENT_VBAR_DRAG;
EOAPI extern const Eo_Event_Description _ELM_GENLIST_EVENT_VBAR_PRESS;
EOAPI extern const Eo_Event_Description _ELM_GENLIST_EVENT_VBAR_UNPRESS;
EOAPI extern const Eo_Event_Description _ELM_GENLIST_EVENT_HBAR_DRAG;
EOAPI extern const Eo_Event_Description _ELM_GENLIST_EVENT_HBAR_PRESS;
EOAPI extern const Eo_Event_Description _ELM_GENLIST_EVENT_HBAR_UNPRESS;
EOAPI extern const Eo_Event_Description _ELM_GENLIST_EVENT_EDGE_TOP;
EOAPI extern const Eo_Event_Description _ELM_GENLIST_EVENT_EDGE_BOTTOM;
EOAPI extern const Eo_Event_Description _ELM_GENLIST_EVENT_EDGE_LEFT;
EOAPI extern const Eo_Event_Description _ELM_GENLIST_EVENT_EDGE_RIGHT;
EOAPI extern const Eo_Event_Description _ELM_GENLIST_EVENT_MOVED;
EOAPI extern const Eo_Event_Description _ELM_GENLIST_EVENT_MOVED_BEFORE;
EOAPI extern const Eo_Event_Description _ELM_GENLIST_EVENT_MOVED_AFTER;
EOAPI extern const Eo_Event_Description _ELM_GENLIST_EVENT_SWIPE;
EOAPI extern const Eo_Event_Description _ELM_GENLIST_EVENT_MULTI_PINCH_IN;
EOAPI extern const Eo_Event_Description _ELM_GENLIST_EVENT_MULTI_PINCH_OUT;
EOAPI extern const Eo_Event_Description _ELM_GENLIST_EVENT_MULTI_SWIPE_DOWN;
EOAPI extern const Eo_Event_Description _ELM_GENLIST_EVENT_MULTI_SWIPE_UP;
EOAPI extern const Eo_Event_Description _ELM_GENLIST_EVENT_MULTI_SWIPE_RIGHT;
EOAPI extern const Eo_Event_Description _ELM_GENLIST_EVENT_MULTI_SWIPE_LEFT;
EOAPI extern const Eo_Event_Description _ELM_GENLIST_EVENT_RELEASED;
EOAPI extern const Eo_Event_Description _ELM_GENLIST_EVENT_ACTIVATED;
EOAPI extern const Eo_Event_Description _ELM_GENLIST_EVENT_HIGHLIGHTED;
EOAPI extern const Eo_Event_Description _ELM_GENLIST_EVENT_UNHIGHLIGHTED;
EOAPI extern const Eo_Event_Description _ELM_GENLIST_EVENT_REALIZED;
EOAPI extern const Eo_Event_Description _ELM_GENLIST_EVENT_UNREALIZED;
EOAPI extern const Eo_Event_Description _ELM_GENLIST_EVENT_CONTRACT_REQUEST;
EOAPI extern const Eo_Event_Description _ELM_GENLIST_EVENT_EXPAND_REQUEST;
EOAPI extern const Eo_Event_Description _ELM_GENLIST_EVENT_CONTRACTED;
EOAPI extern const Eo_Event_Description _ELM_GENLIST_EVENT_EXPANDED;
EOAPI extern const Eo_Event_Description _ELM_GENLIST_EVENT_INDEX_UPDATE;
EOAPI extern const Eo_Event_Description _ELM_GENLIST_EVENT_TREE_EFFECT_FINISHED;
EOAPI extern const Eo_Event_Description _ELM_GENLIST_EVENT_FILTER_DONE;

/**
 * No description
 */
#define ELM_GENLIST_EVENT_ITEM_FOCUSED (&(_ELM_GENLIST_EVENT_ITEM_FOCUSED))

/**
 * No description
 */
#define ELM_GENLIST_EVENT_ITEM_UNFOCUSED (&(_ELM_GENLIST_EVENT_ITEM_UNFOCUSED))

/**
 * No description
 */
#define ELM_GENLIST_EVENT_VBAR_DRAG (&(_ELM_GENLIST_EVENT_VBAR_DRAG))

/**
 * No description
 */
#define ELM_GENLIST_EVENT_VBAR_PRESS (&(_ELM_GENLIST_EVENT_VBAR_PRESS))

/**
 * No description
 */
#define ELM_GENLIST_EVENT_VBAR_UNPRESS (&(_ELM_GENLIST_EVENT_VBAR_UNPRESS))

/**
 * No description
 */
#define ELM_GENLIST_EVENT_HBAR_DRAG (&(_ELM_GENLIST_EVENT_HBAR_DRAG))

/**
 * No description
 */
#define ELM_GENLIST_EVENT_HBAR_PRESS (&(_ELM_GENLIST_EVENT_HBAR_PRESS))

/**
 * No description
 */
#define ELM_GENLIST_EVENT_HBAR_UNPRESS (&(_ELM_GENLIST_EVENT_HBAR_UNPRESS))

/**
 * No description
 */
#define ELM_GENLIST_EVENT_EDGE_TOP (&(_ELM_GENLIST_EVENT_EDGE_TOP))

/**
 * No description
 */
#define ELM_GENLIST_EVENT_EDGE_BOTTOM (&(_ELM_GENLIST_EVENT_EDGE_BOTTOM))

/**
 * No description
 */
#define ELM_GENLIST_EVENT_EDGE_LEFT (&(_ELM_GENLIST_EVENT_EDGE_LEFT))

/**
 * No description
 */
#define ELM_GENLIST_EVENT_EDGE_RIGHT (&(_ELM_GENLIST_EVENT_EDGE_RIGHT))

/**
 * No description
 */
#define ELM_GENLIST_EVENT_MOVED (&(_ELM_GENLIST_EVENT_MOVED))

/**
 * No description
 */
#define ELM_GENLIST_EVENT_MOVED_BEFORE (&(_ELM_GENLIST_EVENT_MOVED_BEFORE))

/**
 * No description
 */
#define ELM_GENLIST_EVENT_MOVED_AFTER (&(_ELM_GENLIST_EVENT_MOVED_AFTER))

/**
 * No description
 */
#define ELM_GENLIST_EVENT_SWIPE (&(_ELM_GENLIST_EVENT_SWIPE))

/**
 * No description
 */
#define ELM_GENLIST_EVENT_MULTI_PINCH_IN (&(_ELM_GENLIST_EVENT_MULTI_PINCH_IN))

/**
 * No description
 */
#define ELM_GENLIST_EVENT_MULTI_PINCH_OUT (&(_ELM_GENLIST_EVENT_MULTI_PINCH_OUT))

/**
 * No description
 */
#define ELM_GENLIST_EVENT_MULTI_SWIPE_DOWN (&(_ELM_GENLIST_EVENT_MULTI_SWIPE_DOWN))

/**
 * No description
 */
#define ELM_GENLIST_EVENT_MULTI_SWIPE_UP (&(_ELM_GENLIST_EVENT_MULTI_SWIPE_UP))

/**
 * No description
 */
#define ELM_GENLIST_EVENT_MULTI_SWIPE_RIGHT (&(_ELM_GENLIST_EVENT_MULTI_SWIPE_RIGHT))

/**
 * No description
 */
#define ELM_GENLIST_EVENT_MULTI_SWIPE_LEFT (&(_ELM_GENLIST_EVENT_MULTI_SWIPE_LEFT))

/**
 * No description
 */
#define ELM_GENLIST_EVENT_RELEASED (&(_ELM_GENLIST_EVENT_RELEASED))

/**
 * No description
 */
#define ELM_GENLIST_EVENT_ACTIVATED (&(_ELM_GENLIST_EVENT_ACTIVATED))

/**
 * No description
 */
#define ELM_GENLIST_EVENT_HIGHLIGHTED (&(_ELM_GENLIST_EVENT_HIGHLIGHTED))

/**
 * No description
 */
#define ELM_GENLIST_EVENT_UNHIGHLIGHTED (&(_ELM_GENLIST_EVENT_UNHIGHLIGHTED))

/**
 * No description
 */
#define ELM_GENLIST_EVENT_REALIZED (&(_ELM_GENLIST_EVENT_REALIZED))

/**
 * No description
 */
#define ELM_GENLIST_EVENT_UNREALIZED (&(_ELM_GENLIST_EVENT_UNREALIZED))

/**
 * No description
 */
#define ELM_GENLIST_EVENT_CONTRACT_REQUEST (&(_ELM_GENLIST_EVENT_CONTRACT_REQUEST))

/**
 * No description
 */
#define ELM_GENLIST_EVENT_EXPAND_REQUEST (&(_ELM_GENLIST_EVENT_EXPAND_REQUEST))

/**
 * No description
 */
#define ELM_GENLIST_EVENT_CONTRACTED (&(_ELM_GENLIST_EVENT_CONTRACTED))

/**
 * No description
 */
#define ELM_GENLIST_EVENT_EXPANDED (&(_ELM_GENLIST_EVENT_EXPANDED))

/**
 * No description
 */
#define ELM_GENLIST_EVENT_INDEX_UPDATE (&(_ELM_GENLIST_EVENT_INDEX_UPDATE))

/**
 * No description
 */
#define ELM_GENLIST_EVENT_TREE_EFFECT_FINISHED (&(_ELM_GENLIST_EVENT_TREE_EFFECT_FINISHED))

/**
 * No description
 */
#define ELM_GENLIST_EVENT_FILTER_DONE (&(_ELM_GENLIST_EVENT_FILTER_DONE))

#endif
