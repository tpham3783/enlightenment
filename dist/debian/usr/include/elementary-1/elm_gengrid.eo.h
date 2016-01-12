#ifndef _ELM_GENGRID_EO_H_
#define _ELM_GENGRID_EO_H_

#ifndef _ELM_GENGRID_EO_CLASS_TYPE
#define _ELM_GENGRID_EO_CLASS_TYPE

typedef Eo Elm_Gengrid;

#endif

#ifndef _ELM_GENGRID_EO_TYPES
#define _ELM_GENGRID_EO_TYPES

typedef enum
{
  ELM_GENGRID_REORDER_TYPE_NORMAL = 0, /** normal reorder type */
  ELM_GENGRID_REORDER_TYPE_SWAP /** swap reorder type */
} Elm_Gengrid_Reorder_Type;


#endif
#define ELM_GENGRID_CLASS elm_gengrid_class_get()

EAPI const Eo_Class *elm_gengrid_class_get(void) EINA_CONST;

/**
 * @brief Set the items grid's alignment within a given gengrid widget.
 *
 * This sets the alignment of the whole grid of items of a gengrid within its
 * given viewport. By default, those values are both 0.5, meaning that the
 * gengrid will have its items grid placed exactly in the middle of its
 * viewport.
 *
 * @note If given alignment values are out of the cited ranges, they'll be
 * changed to the nearest boundary values on the valid ranges.
 *
 * @param[in] align_x Alignment in the horizontal axis (0 <= align_x <= 1).
 * @param[in] align_y Alignment in the vertical axis (0 <= align_y <= 1).
 *
 * @ingroup Elm_Gengrid
 */
EOAPI void elm_obj_gengrid_align_set(double align_x, double align_y);

/**
 * @brief Get the items grid's alignment values within a given gengrid widget.
 *
 * @note Use @c null pointers on the alignment values you're not interested in:
 * they'll be ignored by the function.
 *
 * @param[out] align_x Alignment in the horizontal axis (0 <= align_x <= 1).
 * @param[out] align_y Alignment in the vertical axis (0 <= align_y <= 1).
 *
 * @ingroup Elm_Gengrid
 */
EOAPI void elm_obj_gengrid_align_get(double *align_x, double *align_y);

/**
 * @brief Set how the items grid's filled within a given gengrid widget
 *
 * This sets the fill state of the whole grid of items of a gengrid within its
 * given viewport. By default, this value is false, meaning that if the first
 * line of items grid's isn't filled, the items are centered with the
 * alignment.
 *
 * @param[in] fill
 *
 * @ingroup Elm_Gengrid
 */
EOAPI void elm_obj_gengrid_filled_set(Eina_Bool fill);

/**
 * @brief Get how the items grid's filled within a given gengrid widget
 *
 * @note Use @c null pointers on the alignment values you're not interested in:
 * they'll be ignored by the function.
 *
 * @ingroup Elm_Gengrid
 */
EOAPI Eina_Bool elm_obj_gengrid_filled_get(void);

/**
 * @brief Control  a given gengrid widget's scrolling page size, relative to
 * its viewport size.
 *
 * @param[in] h_pagerel
 * @param[in] v_pagerel
 *
 * @ingroup Elm_Gengrid
 */
EOAPI void elm_obj_gengrid_page_relative_set(double h_pagerel, double v_pagerel);

/**
 * @brief Control  a given gengrid widget's scrolling page size, relative to
 * its viewport size.
 *
 * @param[out] h_pagerel
 * @param[out] v_pagerel
 *
 * @ingroup Elm_Gengrid
 */
EOAPI void elm_obj_gengrid_page_relative_get(double *h_pagerel, double *v_pagerel);

/**
 * @brief Enable or disable multi-selection in a given gengrid widget.
 *
 * Multi-selection is the ability to have more than one item selected, on a
 * given gengrid, simultaneously. When it is enabled, a sequence of clicks on
 * different items will make them all selected, progressively. A click on an
 * already selected item will unselect it. If interacting via the keyboard,
 * multi-selection is enabled while holding the "Shift" key.
 *
 * @note By default, multi-selection is disabled on gengrids.
 *
 * @param[in] multi
 *
 * @ingroup Elm_Gengrid
 */
EOAPI void elm_obj_gengrid_multi_select_set(Eina_Bool multi);

/** Get whether multi-selection is enabled or disabled for a given gengrid
 * widget.
 *
 * @ingroup Elm_Gengrid
 */
EOAPI Eina_Bool elm_obj_gengrid_multi_select_get(void);

/**
 * @brief Set the size for the group items of a given gengrid widget.
 *
 * A gengrid, after creation, has still no information on the size to give to
 * each of its cells. So, you most probably will end up with squares one @ref
 * Fingers "finger" wide, the default size. Use this function to force a custom
 * size for you group items, making them as big as you wish.
 *
 * @param[in] w The group items' width.
 * @param[in] h The group items' height.
 *
 * @ingroup Elm_Gengrid
 */
EOAPI void elm_obj_gengrid_group_item_size_set(Evas_Coord w, Evas_Coord h);

/**
 * @brief Get the size set for the group items of a given gengrid widget.
 *
 * @note Use @c null pointers on the size values you're not interested in:
 * they'll be ignored by the function.
 *
 * @param[out] w The group items' width.
 * @param[out] h The group items' height.
 *
 * @ingroup Elm_Gengrid
 */
EOAPI void elm_obj_gengrid_group_item_size_get(Evas_Coord *w, Evas_Coord *h);

/**
 * @brief Set the gengrid select mode.
 *
 * This changes item select mode in the gengrid widget.
 * #ELM_OBJECT_SELECT_MODE_DEFAULT means that items will only call their
 * selection func and callback when first becoming selected. Any further clicks
 * will do nothing, unless you set always select mode.
 * #ELM_OBJECT_SELECT_MODE_ALWAYS means that even if selected, every click will
 * make the selected callbacks be called. #ELM_OBJECT_SELECT_MODE_NONE will
 * turn off the ability to select items entirely and they will neither appear
 * selected nor call selected callback functions.
 *
 * @param[in] mode The select mode.
 *
 * @ingroup Elm_Gengrid
 */
EOAPI void elm_obj_gengrid_select_mode_set(Elm_Object_Select_Mode mode);

/**
 * @brief Get the gengrid select mode.
 *
 * @return The select mode.
 *
 * @ingroup Elm_Gengrid
 */
EOAPI Elm_Object_Select_Mode elm_obj_gengrid_select_mode_get(void);

/**
 * @brief Set whether a given gengrid widget is or not able have items
 * reordered.
 *
 * If a gengrid is set to allow reordering, a click held for more than 0.5 over
 * a given item will highlight it specially, signaling the gengrid has entered
 * the reordering state. From that time on, the user will be able to, while
 * still holding the mouse button down, move the item freely in the gengrid's
 * viewport, replacing to said item to the locations it goes to. The
 * replacements will be animated and, whenever the user releases the mouse
 * button, the item being replaced gets a new definitive place in the grid.
 *
 * @param[in] reorder_mode Use @c true to turn reordering on, @c false to turn
 * it off.
 *
 * @ingroup Elm_Gengrid
 */
EOAPI void elm_obj_gengrid_reorder_mode_set(Eina_Bool reorder_mode);

/**
 * @brief Get whether a given gengrid widget is or not able have items
 * reordered.
 *
 * @return Use @c true to turn reordering on, @c false to turn it off.
 *
 * @ingroup Elm_Gengrid
 */
EOAPI Eina_Bool elm_obj_gengrid_reorder_mode_get(void);

/**
 * @brief Control whether the gengrid items' should be highlighted when item
 * selected.
 *
 * @param[in] highlight
 *
 * @ingroup Elm_Gengrid
 */
EOAPI void elm_obj_gengrid_highlight_mode_set(Eina_Bool highlight);

/** Control whether the gengrid items' should be highlighted when item
 * selected.
 *
 * @ingroup Elm_Gengrid
 */
EOAPI Eina_Bool elm_obj_gengrid_highlight_mode_get(void);

/**
 * @brief Set the Gengrid reorder type
 *
 * @param[in] type Reorder type value
 *
 * @since 1.11
 *
 * @ingroup Elm_Gengrid
 */
EOAPI void elm_obj_gengrid_reorder_type_set(Elm_Gengrid_Reorder_Type type);

/**
 * @brief Set the size for the items of a given gengrid widget.
 *
 * A gengrid, after creation, has still no information on the size to give to
 * each of its cells. So, you most probably will end up with squares one @ref
 * Fingers "finger" wide, the default size. Use this function to force a custom
 * size for you items, making them as big as you wish.
 *
 * @param[in] w The items' width.
 * @param[in] h The items' height.
 *
 * @ingroup Elm_Gengrid
 */
EOAPI void elm_obj_gengrid_item_size_set(Evas_Coord w, Evas_Coord h);

/**
 * @brief Get the size set for the items of a given gengrid widget.
 *
 * @note Use @c null pointers on the size values you're not interested in:
 * they'll be ignored by the function.
 *
 * @param[out] w The items' width.
 * @param[out] h The items' height.
 *
 * @ingroup Elm_Gengrid
 */
EOAPI void elm_obj_gengrid_item_size_get(Evas_Coord *w, Evas_Coord *h);

/**
 * @brief Set the gengrid multi select mode.
 *
 * #ELM_OBJECT_MULTI_SELECT_MODE_DEFAULT means that select/unselect items
 * whenever each item is clicked. #ELM_OBJECT_MULTI_SELECT_MODE_WITH_CONTROL
 * means that only one item will be selected although multi-selection is
 * enabled, if clicked without pressing control key. This mode is only
 * available with multi-selection.
 *
 * @param[in] mode The multi select mode.
 *
 * @since 1.8
 *
 * @ingroup Elm_Gengrid
 */
EOAPI void elm_obj_gengrid_multi_select_mode_set(Elm_Object_Multi_Select_Mode mode);

/**
 * @brief Get the gengrid multi select mode.
 *
 * If getting mode fails, it returns #ELM_OBJECT_MULTI_SELECT_MODE_MAX.
 *
 * @return The multi select mode.
 *
 * @since 1.8
 *
 * @ingroup Elm_Gengrid
 */
EOAPI Elm_Object_Multi_Select_Mode elm_obj_gengrid_multi_select_mode_get(void);

/**
 * @brief Set the direction in which a given gengrid widget will expand while
 * placing its items.
 *
 * When in "horizontal mode" ($true), items will be placed in columns, from top
 * to bottom and, when the space for a column is filled, another one is started
 * on the right, thus expanding the grid horizontally. When in "vertical mode"
 * ($false), though, items will be placed in rows, from left to right and, when
 * the space for a row is filled, another one is started below, thus expanding
 * the grid vertically.
 *
 * @note By default, gengrid is in vertical mode, @c false.
 *
 * @param[in] horizontal @c true to make the gengrid expand horizontally,
 * @c false to expand vertically.
 *
 * @ingroup Elm_Gengrid
 */
EOAPI void elm_obj_gengrid_horizontal_set(Eina_Bool horizontal);

/**
 * @brief Get for what direction a given gengrid widget will expand while
 * placing its items.
 *
 * @return @c true to make the gengrid expand horizontally, @c false to expand
 * vertically.
 *
 * @ingroup Elm_Gengrid
 */
EOAPI Eina_Bool elm_obj_gengrid_horizontal_get(void);

/**
 * @brief Set a given gengrid widget's scrolling page size.
 *
 * @param[in] h_pagesize
 * @param[in] v_pagesize
 *
 * @ingroup Elm_Gengrid
 */
EOAPI void elm_obj_gengrid_page_size_set(Evas_Coord h_pagesize, Evas_Coord v_pagesize);

/**
 * @brief Get the selected item in a given gengrid widget.
 *
 * This returns the selected item in @c obj. If multi selection is enabled on
 * @c obj (See @ref elm_obj_gengrid_multi_select_set), only the first item in
 * the list is selected, which might not be very useful. For that case, see
 * @ref elm_obj_gengrid_selected_items_get.
 *
 * @return The selected item's handle or @c null if none is selected at the
 * moment (and on errors).
 *
 * @ingroup Elm_Gengrid
 */
EOAPI Elm_Widget_Item *elm_obj_gengrid_selected_item_get(void);

/**
 * @brief Get a list of realized items in gengrid.
 *
 * This returns a list of the realized items in the gengrid. The list contains
 * gengrid item pointers. The list must be freed by the caller when done with
 * eina_list_free(). The item pointers in the list are only valid so long as
 * those items are not deleted or the gengrid is not deleted.
 *
 * @return The list of realized items or @c null if none are realized.
 *
 * @ingroup Elm_Gengrid
 */
EOAPI Eina_List *elm_obj_gengrid_realized_items_get(void);

/**
 * @brief Get the first item in a given gengrid widget.
 *
 * This returns the first item in the @c obj's internal list of items.
 *
 * @return The first item's handle or @c null, if there are no items in @c obj
 * (and on errors)
 *
 * @ingroup Elm_Gengrid
 */
EOAPI Elm_Widget_Item *elm_obj_gengrid_first_item_get(void);

/**
 * @brief Get a list of selected items in a given gengrid.
 *
 * This returns a list of the selected items, in the order that they appear in
 * the grid. This list is only valid as long as no more items are selected or
 * unselected (or unselected implicitly by deletion). The list contains Gengrid
 * item pointers as data, naturally.
 *
 * @return The list of selected items or @c null, if none is selected at the
 * moment (and on errors).
 *
 * @ingroup Elm_Gengrid
 */
EOAPI const Eina_List *elm_obj_gengrid_selected_items_get(void);

/**
 * @brief Get the last item in a given gengrid widget.
 *
 * This returns the last item in the @c obj's internal list of items.
 *
 * @return The last item's handle or @c null if there are no  items in @c obj
 * (and on errors).
 *
 * @ingroup Elm_Gengrid
 */
EOAPI Elm_Widget_Item *elm_obj_gengrid_last_item_get(void);

/**
 * @brief Enable or disable mouse wheel to be used to scroll the gengrid.
 *
 * Mouse wheel can be used for the user to scroll up and down the gengrid.
 *
 * Wheel is enabled by default.
 *
 * @param[in] disabled Use @c true to disable mouse wheel or @c false to enable
 * it.
 *
 * @ingroup Elm_Gengrid
 */
EOAPI void elm_obj_gengrid_wheel_disabled_set(Eina_Bool disabled);

/**
 * @brief Get a value whether mouse wheel is enabled or not.
 *
 * Mouse wheel can be used for the user to scroll up and down the gengrid.
 *
 * @return Use @c true to disable mouse wheel or @c false to enable it.
 *
 * @ingroup Elm_Gengrid
 */
EOAPI Eina_Bool elm_obj_gengrid_wheel_disabled_get(void);

/**
 * @brief Insert an item before another in a gengrid widget.
 *
 * This inserts an item before another in the gengrid.
 *
 * @param[in] data The item data.
 * @param[in] relative The item to place this new one before.
 * @param[in] func Convenience function called when the item is selected.
 * @param[in] func_data Data to be passed to @c func.
 *
 * @return A handle to the item added or @c null on errors.
 *
 * @ingroup Elm_Gengrid
 */
EOAPI Elm_Widget_Item *elm_obj_gengrid_item_insert_before(const Elm_Gengrid_Item_Class *itc, const void *data, Elm_Widget_Item *relative, Evas_Smart_Cb func, const void *func_data);

/**
 * @brief Update the contents of all realized items.
 *
 * This updates all realized items by calling all the item class functions
 * again to get the contents, texts and states. Use this when the original item
 * data has changed and the changes are desired to be reflected.
 *
 * To update just one item, use @ref elm_gengrid_item_update.
 *
 * @ingroup Elm_Gengrid
 */
EOAPI void elm_obj_gengrid_realized_items_update(void);

/**
 * @brief Insert an item after another in a gengrid widget.
 *
 * This inserts an item after another in the gengrid.
 *
 * @param[in] data The item data.
 * @param[in] relative The item to place this new one after.
 * @param[in] func Convenience function called when the item is selected.
 * @param[in] func_data Data to be passed to @c func.
 *
 * @return A handle to the item added or @c null on error.
 *
 * @ingroup Elm_Gengrid
 */
EOAPI Elm_Widget_Item *elm_obj_gengrid_item_insert_after(const Elm_Gengrid_Item_Class *itc, const void *data, Elm_Widget_Item *relative, Evas_Smart_Cb func, const void *func_data);

/**
 * @brief Return how many items are currently in a list
 *
 * This behavior is O(1) and includes items which may or may not be realized.
 *
 * @ingroup Elm_Gengrid
 */
EOAPI unsigned int elm_obj_gengrid_items_count(void);

/**
 * @brief Get the item that is at the x, y canvas coords.
 *
 * This returns the item at the given coordinates (which are canvas relative,
 * not object-relative). If an item is at that coordinate, that item handle is
 * returned, and if @c xposret is not @c null, the integer pointed to is set to
 * a value of -1, 0 or 1, depending if the coordinate is on the left portion of
 * that item (-1), on the middle section (0) or on the right part (1).
 *
 * If @c yposret is not @c null, the integer pointed to is set to a value of
 * -1, 0 or 1, depending if the coordinate is on the upper portion of that item
 * (-1), on the middle section (0) or on the lower part (1). If NULL is
 * returned as an item (no item found there), then posret may indicate -1 or 1
 * based if the coordinate is above or below all items respectively in the
 * gengrid.
 *
 * @param[in] y The input y coordinate.
 * @param[out] xposret The position relative to the item returned here.
 * @param[out] yposret The position relative to the item returned here.
 *
 * @return The item at the coordinates or @c null if none.
 *
 * @ingroup Elm_Gengrid
 */
EOAPI Elm_Widget_Item *elm_obj_gengrid_at_xy_item_get(Evas_Coord x, Evas_Coord y, int *xposret, int *yposret);

/**
 * @brief Append a new item in a given gengrid widget.
 *
 * This adds an item to the beginning of the gengrid.
 *
 * @param[in] data The item data.
 * @param[in] func Convenience function called when the item is selected.
 * @param[in] func_data Data to be passed to @c func.
 *
 * @return A handle to the item added or @c null on errors.
 *
 * @ingroup Elm_Gengrid
 */
EOAPI Elm_Widget_Item *elm_obj_gengrid_item_append(const Elm_Gengrid_Item_Class *itc, const void *data, Evas_Smart_Cb func, const void *func_data);

/**
 * @brief Prepend a new item in a given gengrid widget.
 *
 * This adds an item to the end of the gengrid.
 *
 * @param[in] data The item data.
 * @param[in] func Convenience function called when the item is selected.
 * @param[in] func_data Data to be passed to @c func.
 *
 * @return A handle to the item added or @c null on errors.
 *
 * @ingroup Elm_Gengrid
 */
EOAPI Elm_Widget_Item *elm_obj_gengrid_item_prepend(const Elm_Gengrid_Item_Class *itc, const void *data, Evas_Smart_Cb func, const void *func_data);

/**
 * @brief Remove all items from a given gengrid widget.
 *
 * This removes (and deletes) all items in @c obj, leaving it empty.
 *
 * See @ref elm_gengrid_item_del to remove just one item.
 *
 * @ingroup Elm_Gengrid
 */
EOAPI void elm_obj_gengrid_clear(void);

/**
 * @brief Insert an item in a gengrid widget using a user-defined sort
 * function.
 *
 * This inserts an item in the gengrid based on user defined comparison
 * function. The two arguments passed to the function @c func are gengrid item
 * handles to compare.
 *
 * @param[in] data The item data.
 * @param[in] comp User defined comparison function that defines the sort order
 * based on gengrid item and its data.
 * @param[in] func Convenience function called when the item is selected.
 * @param[in] func_data Data to be passed to @c func.
 *
 * @return A handle to the item added or @c null on errors.
 *
 * @ingroup Elm_Gengrid
 */
EOAPI Elm_Widget_Item *elm_obj_gengrid_item_sorted_insert(const Elm_Gengrid_Item_Class *itc, const void *data, Eina_Compare_Cb comp, Evas_Smart_Cb func, const void *func_data);

/**
 * @brief Get gengrid item by given string.
 *
 * It takes pointer to the gengrid item that will be used to start search from
 * it.
 *
 * This function uses globs (like "*.jpg") for searching and takes search flags
 * as last parameter That is a bitfield with values to be ored together or 0
 * for no flags.
 *
 * @param[in] part_name Name of the TEXT part of gengrid item to search string
 * in.
 * @param[in] pattern The search pattern.
 * @param[in] flags Search flags.
 *
 * @return Pointer to the gengrid item which matches search_string in case of
 * success, otherwise @c null.
 *
 * @since 1.11
 *
 * @ingroup Elm_Gengrid
 */
EOAPI Elm_Widget_Item *elm_obj_gengrid_search_by_text_item_get(Elm_Widget_Item *item_to_search_from, const char *part_name, const char *pattern, Elm_Glob_Match_Flags flags);

/**
 * @brief Starts the reorder mode of Gengrid
 *
 * @param[in] tween_mode Position mappings for animation
 *
 * @since 1.10
 *
 * @ingroup Elm_Gengrid
 */
EOAPI void elm_obj_gengrid_reorder_mode_start(Ecore_Pos_Map tween_mode);

/** Stops the reorder mode of Gengrid
 *
 * @since 1.10
 *
 * @ingroup Elm_Gengrid
 */
EOAPI void elm_obj_gengrid_reorder_mode_stop(void);

EOAPI extern const Eo_Event_Description _ELM_GENGRID_EVENT_REALIZED;
EOAPI extern const Eo_Event_Description _ELM_GENGRID_EVENT_UNREALIZED;
EOAPI extern const Eo_Event_Description _ELM_GENGRID_EVENT_INDEX_UPDATE;
EOAPI extern const Eo_Event_Description _ELM_GENGRID_EVENT_SCROLL_PAGE_CHANGED;
EOAPI extern const Eo_Event_Description _ELM_GENGRID_EVENT_EDGE_BOTTOM;
EOAPI extern const Eo_Event_Description _ELM_GENGRID_EVENT_EDGE_TOP;
EOAPI extern const Eo_Event_Description _ELM_GENGRID_EVENT_EDGE_RIGHT;
EOAPI extern const Eo_Event_Description _ELM_GENGRID_EVENT_EDGE_LEFT;
EOAPI extern const Eo_Event_Description _ELM_GENGRID_EVENT_ITEM_FOCUSED;
EOAPI extern const Eo_Event_Description _ELM_GENGRID_EVENT_ITEM_UNFOCUSED;
EOAPI extern const Eo_Event_Description _ELM_GENGRID_EVENT_ITEM_REORDER_ANIM_START;
EOAPI extern const Eo_Event_Description _ELM_GENGRID_EVENT_ITEM_REORDER_ANIM_STOP;
EOAPI extern const Eo_Event_Description _ELM_GENGRID_EVENT_ACTIVATED;
EOAPI extern const Eo_Event_Description _ELM_GENGRID_EVENT_HIGHLIGHTED;
EOAPI extern const Eo_Event_Description _ELM_GENGRID_EVENT_UNHIGHLIGHTED;
EOAPI extern const Eo_Event_Description _ELM_GENGRID_EVENT_RELEASED;

/**
 * No description
 */
#define ELM_GENGRID_EVENT_REALIZED (&(_ELM_GENGRID_EVENT_REALIZED))

/**
 * No description
 */
#define ELM_GENGRID_EVENT_UNREALIZED (&(_ELM_GENGRID_EVENT_UNREALIZED))

/**
 * No description
 */
#define ELM_GENGRID_EVENT_INDEX_UPDATE (&(_ELM_GENGRID_EVENT_INDEX_UPDATE))

/**
 * No description
 */
#define ELM_GENGRID_EVENT_SCROLL_PAGE_CHANGED (&(_ELM_GENGRID_EVENT_SCROLL_PAGE_CHANGED))

/**
 * No description
 */
#define ELM_GENGRID_EVENT_EDGE_BOTTOM (&(_ELM_GENGRID_EVENT_EDGE_BOTTOM))

/**
 * No description
 */
#define ELM_GENGRID_EVENT_EDGE_TOP (&(_ELM_GENGRID_EVENT_EDGE_TOP))

/**
 * No description
 */
#define ELM_GENGRID_EVENT_EDGE_RIGHT (&(_ELM_GENGRID_EVENT_EDGE_RIGHT))

/**
 * No description
 */
#define ELM_GENGRID_EVENT_EDGE_LEFT (&(_ELM_GENGRID_EVENT_EDGE_LEFT))

/**
 * No description
 */
#define ELM_GENGRID_EVENT_ITEM_FOCUSED (&(_ELM_GENGRID_EVENT_ITEM_FOCUSED))

/**
 * No description
 */
#define ELM_GENGRID_EVENT_ITEM_UNFOCUSED (&(_ELM_GENGRID_EVENT_ITEM_UNFOCUSED))

/**
 * No description
 */
#define ELM_GENGRID_EVENT_ITEM_REORDER_ANIM_START (&(_ELM_GENGRID_EVENT_ITEM_REORDER_ANIM_START))

/**
 * No description
 */
#define ELM_GENGRID_EVENT_ITEM_REORDER_ANIM_STOP (&(_ELM_GENGRID_EVENT_ITEM_REORDER_ANIM_STOP))

/**
 * No description
 */
#define ELM_GENGRID_EVENT_ACTIVATED (&(_ELM_GENGRID_EVENT_ACTIVATED))

/**
 * No description
 */
#define ELM_GENGRID_EVENT_HIGHLIGHTED (&(_ELM_GENGRID_EVENT_HIGHLIGHTED))

/**
 * No description
 */
#define ELM_GENGRID_EVENT_UNHIGHLIGHTED (&(_ELM_GENGRID_EVENT_UNHIGHLIGHTED))

/**
 * No description
 */
#define ELM_GENGRID_EVENT_RELEASED (&(_ELM_GENGRID_EVENT_RELEASED))

#endif
