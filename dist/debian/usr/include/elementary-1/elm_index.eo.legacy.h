#ifndef _ELM_INDEX_EO_LEGACY_H_
#define _ELM_INDEX_EO_LEGACY_H_

#ifndef _ELM_INDEX_EO_CLASS_TYPE
#define _ELM_INDEX_EO_CLASS_TYPE

typedef Eo Elm_Index;

#endif

#ifndef _ELM_INDEX_EO_TYPES
#define _ELM_INDEX_EO_TYPES


#endif

/**
 * Enable or disable auto hiding feature for a given index widget.
 *
 * @see elm_index_autohide_disabled_get()
 *
 * @ingroup Index
 *
 * @param[in] disabled @c EINA_TRUE to disable auto hiding, @c EINA_FALSE to enable
 */
EAPI void elm_index_autohide_disabled_set(Elm_Index *obj, Eina_Bool disabled);

/**
 * Get whether auto hiding feature is enabled or not for a given index widget.
 *
 * @return @c EINA_TRUE, if auto hiding is disabled, @c EINA_FALSE otherwise
 *
 * @see elm_index_autohide_disabled_set() for more details
 *
 * @ingroup Index
 */
EAPI Eina_Bool elm_index_autohide_disabled_get(const Elm_Index *obj);

/**
 * Enable or disable omit feature for a given index widget.
 *
 * @see elm_index_omit_enabled_get()
 *
 * @since 1.8
 *
 * @ingroup Index
 *
 * @param[in] enabled @c EINA_TRUE to enable omit feature, @c EINA_FALSE to disable
 */
EAPI void elm_index_omit_enabled_set(Elm_Index *obj, Eina_Bool enabled);

/**
 * Get whether omit feature is enabled or not for a given index widget.
 *
 * @return @c EINA_TRUE, if omit feature is enabled, @c EINA_FALSE otherwise
 *
 * @see elm_index_omit_enabled_set()
 *
 * @since 1.8
 *
 * @ingroup Index
 */
EAPI Eina_Bool elm_index_omit_enabled_get(const Elm_Index *obj);

/**
 * Enable or disable horizontal mode on the index object
 *
 * @note Vertical mode is set by default.
 *
 * On horizontal mode items are displayed on index from left to right,
 * instead of from top to bottom. Also, the index will scroll horizontally.
 *
 * @see elm_index_horizontal_get()
 *
 * @ingroup Index
 *
 * @param[in] horizontal @c EINA_TRUE to enable horizontal or @c EINA_FALSE to
disable it, i.e., to enable vertical mode. it's an area one @ref Fingers
"finger" wide on the bottom side of the index widget's container.
 */
EAPI void elm_index_horizontal_set(Elm_Index *obj, Eina_Bool horizontal);

/**
 * Get a value whether horizontal mode is enabled or not.
 *
 * @return @c EINA_TRUE means horizontal mode selection is enabled.
 * @c EINA_FALSE indicates it's disabled. If @p obj is @c NULL,
 * @c EINA_FALSE is returned.
 *
 * @see elm_index_horizontal_set() for details.
 *
 * @ingroup Index
 */
EAPI Eina_Bool elm_index_horizontal_get(const Elm_Index *obj);

/**
 * Set a delay change time for index object.
 *
 * @note delay time is 0.2 sec by default.
 *
 * @see elm_index_delay_change_time_get
 *
 * @ingroup Index
 *
 * @param[in] dtime The delay change time to set.
 */
EAPI void elm_index_delay_change_time_set(Elm_Index *obj, double dtime);

/**
 * Get a delay change time for index object.
 *
 * @return delay change time in seconds
 *
 * @see elm_index_delay_change_time_set
 *
 * @ingroup Index
 */
EAPI double elm_index_delay_change_time_get(const Elm_Index *obj);

/**
 * Set the indicator as to be disabled.
 *
 * In Index widget, Indicator notes popup text, which shows a letter has been selecting.
 *
 * @see elm_index_indicator_disabled_get()
 *
 * @ingroup Index
 *
 * @param[in] disabled @c EINA_TRUE to disable it, @c EINA_FALSE to enable it
 */
EAPI void elm_index_indicator_disabled_set(Elm_Index *obj, Eina_Bool disabled);

/**
 * Get the value of indicator's disabled status.
 *
 * @return EINA_TRUE if the indicator is disabled.
 *
 * @see elm_index_indicator_disabled_set()
 *
 * @ingroup Index
 */
EAPI Eina_Bool elm_index_indicator_disabled_get(const Elm_Index *obj);

/**
 * Set the items level for a given index widget.
 *
 * @see elm_index_item_level_get()
 *
 * @ingroup Index
 *
 * @param[in] level @c 0 or @c 1, the currently implemented levels.
 */
EAPI void elm_index_item_level_set(Elm_Index *obj, int level);

/**
 * Get the items level set for a given index widget.
 *
 * @return @c 0 or @c 1, which are the levels @p obj might be at.
 *
 * @see elm_index_item_level_set() for more information
 *
 * @ingroup Index
 */
EAPI int elm_index_item_level_get(const Elm_Index *obj);

/**
 * Flush the changes made to the index items so they work correctly
 *
 * This flushes any changes made to items indicating the object is ready to
 * go. You should call this before any changes you expect to work. This
 * is similar to elm_list_go().
 *
 * @warning If not called, it won't display the index properly.
 *
 * @ingroup Index
 * 
 *
 * @param[in] level The index level (one of @c 0 or @c 1) where changes were made
 */
EAPI void elm_index_level_go(Elm_Index *obj, int level);

/**
 * Prepend a new item on a given index widget.
 *
 * @return A handle to the item added or @c NULL, on errors
 *
 * Despite the most common usage of the @p letter argument is for
 * single char strings, one could use arbitrary strings as index
 * entries.
 *
 * @c item will be the pointer returned back on @c "changed", @c
 * "delay,changed" and @c "selected" smart events.
 *
 * @ingroup Index
 * 
 *
 * @param[in] letter Letter under which the item should be indexed
 * @param[in] func The function to call when the item is selected.
 * @param[in] data The item data to set for the index's item
 */
EAPI Elm_Object_Item *elm_index_item_prepend(Elm_Index *obj, const char *letter, Evas_Smart_Cb func, const void *data);

/**
 * Removes @b all items from a given index widget.
 *
 * If deletion callbacks are set, via elm_object_item_del_cb_set(),
 * that callback function will be called for each item in @p obj.
 *
 * @ingroup Index
 * 
 */
EAPI void elm_index_item_clear(Elm_Index *obj);

/**
 * Insert a new item into the index object after item @p after.
 *
 * @return A handle to the item added or @c NULL, on errors
 *
 * Despite the most common usage of the @p letter argument is for
 * single char strings, one could use arbitrary strings as index
 * entries.
 *
 * @c item will be the pointer returned back on @c "changed", @c
 * "delay,changed" and @c "selected" smart events.
 *
 * @note If @p relative is @c NULL this function will behave as
 * elm_index_item_append().
 *
 * @ingroup Index
 * 
 *
 * @param[in] after The index item to insert after.
 * @param[in] letter Letter under which the item should be indexed
 * @param[in] func The function to call when the item is clicked.
 * @param[in] data The item data to set for the index's item
 */
EAPI Elm_Object_Item *elm_index_item_insert_after(Elm_Index *obj, Elm_Object_Item *after, const char *letter, Evas_Smart_Cb func, const void *data);

/**
 * Find a given index widget's item, <b>using item data</b>.
 *
 * @return The index item handle, if found, or @c NULL otherwise
 *
 * @ingroup Index
 * 
 *
 * @param[in] data The item data pointed to by the desired index item
 */
EAPI Elm_Object_Item *elm_index_item_find(Elm_Index *obj, const void *data);

/**
 * Insert a new item into the index object before item @p before.
 *
 * @return A handle to the item added or @c NULL, on errors
 *
 * Despite the most common usage of the @p letter argument is for
 * single char strings, one could use arbitrary strings as index
 * entries.
 *
 * @c item will be the pointer returned back on @c "changed", @c
 * "delay,changed" and @c "selected" smart events.
 *
 * @note If @p relative is @c NULL this function will behave as
 * elm_index_item_prepend().
 *
 * @ingroup Index
 * 
 *
 * @param[in] before The index item to insert after.
 * @param[in] letter Letter under which the item should be indexed
 * @param[in] func The function to call when the item is clicked.
 * @param[in] data The item data to set for the index's item
 */
EAPI Elm_Object_Item *elm_index_item_insert_before(Elm_Index *obj, Elm_Object_Item *before, const char *letter, Evas_Smart_Cb func, const void *data);

/**
 * Append a new item on a given index widget.
 *
 * @return A handle to the item added or @c NULL, on errors
 *
 * Despite the most common usage of the @p letter argument is for
 * single char strings, one could use arbitrary strings as index
 * entries.
 *
 * @c item will be the pointer returned back on @c "changed", @c
 * "delay,changed" and @c "selected" smart events.
 *
 * @ingroup Index
 * 
 *
 * @param[in] letter Letter under which the item should be indexed
 * @param[in] func The function to call when the item is selected.
 * @param[in] data The item data to set for the index's item
 */
EAPI Elm_Object_Item *elm_index_item_append(Elm_Index *obj, const char *letter, Evas_Smart_Cb func, const void *data);

/**
 * Returns the last selected item, for a given index widget.
 *
 * @return The last item @b selected on @p obj (or @c NULL, on errors).
 *
 * @ingroup Index
 * 
 *
 * @param[in] level @c 0 or @c 1, the currently implemented levels.
 */
EAPI Elm_Object_Item *elm_index_selected_item_get(const Elm_Index *obj, int level);

/**
 * Insert a new item into the given index widget, using @p cmp_func
 * function to sort items (by item handles).
 *
 * @return A handle to the item added or @c NULL, on errors
 *
 * Despite the most common usage of the @p letter argument is for
 * single char strings, one could use arbitrary strings as index
 * entries.
 *
 * @c item will be the pointer returned back on @c "changed", @c
 * "delay,changed" and @c "selected" smart events.
 *
 * @ingroup Index
 * 
 *
 * @param[in] letter Letter under which the item should be indexed
 * @param[in] func The function to call when the item is clicked.
 * @param[in] data The item data to set for the index's item
 * @param[in] cmp_func The comparing function to be used to sort index
items <b>by index item handles</b>
 * @param[in] cmp_data_func A @b fallback function to be called for the
sorting of index items <b>by item data</b>). It will be used
when @p cmp_func returns @c 0 (equality), which means an index
item with provided item data already exists. To decide which
data item should be pointed to by the index item in question, @p
cmp_data_func will be used. If @p cmp_data_func returns a
non-negative value, the previous index item data will be
replaced by the given @p item pointer. If the previous data need
to be freed, it should be done by the @p cmp_data_func function,
because all references to it will be lost. If this function is
not provided (@c NULL is given), index items will be @b
duplicated, if @p cmp_func returns @c 0.
 */
EAPI Elm_Object_Item *elm_index_item_sorted_insert(Elm_Index *obj, const char *letter, Evas_Smart_Cb func, const void *data, Eina_Compare_Cb cmp_func, Eina_Compare_Cb cmp_data_func);

#endif
