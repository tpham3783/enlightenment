#ifndef _ELM_LAYOUT_EO_LEGACY_H_
#define _ELM_LAYOUT_EO_LEGACY_H_

#ifndef _ELM_LAYOUT_EO_CLASS_TYPE
#define _ELM_LAYOUT_EO_CLASS_TYPE

typedef Eo Elm_Layout;

#endif

#ifndef _ELM_LAYOUT_EO_TYPES
#define _ELM_LAYOUT_EO_TYPES


#endif

/**
 * Set accessibility to all texblock(text) parts in the layout object
 *
 * @return @c EINA_TRUE on success or @c EINA_FALSE on failure. If @p obj is not
 * a proper layout object, @c EINA_FALSE is returned.
 *
 * @since 1.7
 *
 * @ingroup Layout
 *
 * @param[in] can_access makes all textblock(text) parts in the layout @p obj possible
to have accessibility. @c EINA_TRUE means textblock(text) parts can be accessible
 */
EAPI Eina_Bool elm_layout_edje_object_can_access_set(Elm_Layout *obj, Eina_Bool can_access);

/**
 * Get accessibility state of texblock(text) parts in the layout object
 *
 * @return @c EINA_TRUE, if all textblock(text) parts in the layout can be accessible
 * @c EINA_FALSET if those cannot be accessible. If @p obj is not a proper layout
 * object, @c EINA_FALSE is returned.
 *
 * @see elm_layout_edje_object_access_set()
 *
 * @since 1.7
 *
 * @ingroup Layout
 */
EAPI Eina_Bool elm_layout_edje_object_can_access_get(const Elm_Layout *obj);

/**
 * Set the edje group from the elementary theme that will be used as layout
 *
 * @return (1 = success, 0 = error)
 *
 * Note that @a style will be the new style of @a obj too, as in an
 * elm_object_style_set() call.
 *
 * @ingroup Layout
 *
 * @param[in] klass the class of the group
 * @param[in] group the group
 * @param[in] style the style to used
 */
EAPI Eina_Bool elm_layout_theme_set(Elm_Layout *obj, const char *klass, const char *group, const char *style);

/**
 * Get the edje layout
 *
 * @return A Evas_Object with the edje layout settings loaded
 * with function elm_layout_file_set
 *
 * This returns the edje object. It is not expected to be used to then
 * swallow objects via edje_object_part_swallow() for example. Use
 * elm_layout_content_set() instead so child object handling and sizing is
 * done properly.
 *
 * @note This function should only be used if you really need to call some
 * low level Edje function on this edje object. All the common stuff (setting
 * text, emitting signals, hooking callbacks to signals, etc.) can be done
 * with proper elementary functions.
 *
 * @see elm_layout_signal_callback_add()
 * @see elm_layout_signal_emit()
 * @see elm_layout_text_set()
 * @see elm_layout_content_set()
 * @see elm_layout_box_append()
 * @see elm_layout_table_pack()
 * @see elm_layout_data_get()
 *
 * @ingroup Layout
 */
EAPI Evas_Object *elm_layout_edje_get(const Elm_Layout *obj);

/**
 * Remove all children of the given part box.
 *
 * @return @c EINA_TRUE on success, @c EINA_FALSE otherwise
 *
 * The objects will be removed from the box part and their lifetime will
 * not be handled by the layout anymore. This is equivalent to
 * elm_layout_box_remove() for all box children.
 *
 * @see elm_layout_box_append()
 * @see elm_layout_box_remove()
 *
 * @ingroup Layout
 * 
 *
 * @param[in] part The box part name to remove child.
 * @param[in] clear If EINA_TRUE, then all objects will be deleted as
well, otherwise they will just be removed and will be
dangling on the canvas.
 */
EAPI Eina_Bool elm_layout_box_remove_all(Elm_Layout *obj, const char *part, Eina_Bool clear);

/**
 * Sets if the cursor set should be searched on the theme or should use
 * the provided by the engine, only.
 *
 * @note before you set if should look on theme you should define a
 * cursor with elm_layout_part_cursor_set(). By default it will only
 * look for cursors provided by the engine.
 *
 * @return EINA_TRUE on success or EINA_FALSE on failure, that may be
 * part not exists or it did not had a cursor set.
 *
 * @ingroup Layout
 * 
 *
 * @param[in] part_name a part from loaded edje group.
 * @param[in] engine_only if cursors should be just provided by the engine (EINA_TRUE)
or should also search on widget's theme as well (EINA_FALSE)
 */
EAPI Eina_Bool elm_layout_part_cursor_engine_only_set(Elm_Layout *obj, const char *part_name, Eina_Bool engine_only);

/**
 * Get a specific cursor engine_only for an edje part.
 *
 * @return whenever the cursor is just provided by engine or also from theme.
 *
 * @ingroup Layout
 * 
 *
 * @param[in] part_name a part from loaded edje group.
 */
EAPI Eina_Bool elm_layout_part_cursor_engine_only_get(const Elm_Layout *obj, const char *part_name);

/**
 * Unpack (remove) a child of the given part table.
 *
 * @return The object that was being used, or NULL if not found.
 *
 * The object will be unpacked from the table part and its lifetime
 * will not be handled by the layout anymore. This is equivalent to
 * elm_layout_content_unset() for table.
 *
 * @see elm_layout_table_pack()
 * @see elm_layout_table_clear()
 *
 * @ingroup Layout
 * 
 *
 * @param[in] part The table part name to remove child.
 * @param[in] child The object to remove from table.
 */
EAPI Evas_Object *elm_layout_table_unpack(Elm_Layout *obj, const char *part, Evas_Object *child);

/**
 * @brief Freezes the Elementary layout object.
 *
 * @return The frozen state or 0 on Error
 *
 * This function puts all changes on hold. Successive freezes will
 * nest, requiring an equal number of thaws.
 *
 * @see elm_layout_thaw()
 * 
 */
EAPI int elm_layout_freeze(Elm_Layout *obj);

/**
 * Eval sizing
 *
 * Manually forces a sizing re-evaluation. This is useful when the minimum
 * size required by the edje theme of this layout has changed. The change on
 * the minimum size required by the edje theme is not immediately reported to
 * the elementary layout, so one needs to call this function in order to tell
 * the widget (layout) that it needs to reevaluate its own size.
 *
 * The minimum size of the theme is calculated based on minimum size of
 * parts, the size of elements inside containers like box and table, etc. All
 * of this can change due to state changes, and that's when this function
 * should be called.
 *
 * Also note that a standard signal of "size,eval" "elm" emitted from the
 * edje object will cause this to happen too.
 *
 * @ingroup Layout
 * 
 */
EAPI void elm_layout_sizing_eval(Elm_Layout *obj);

/**
 * Remove a child of the given part box.
 *
 * @return The object that was being used, or NULL if not found.
 *
 * The object will be removed from the box part and its lifetime will
 * not be handled by the layout anymore. This is equivalent to
 * elm_layout_content_unset() for box.
 *
 * @see elm_layout_box_append()
 * @see elm_layout_box_remove_all()
 *
 * @ingroup Layout
 * 
 *
 * @param[in] part The box part name to remove child.
 * @param[in] child The object to remove from box.
 */
EAPI Evas_Object *elm_layout_box_remove(Elm_Layout *obj, const char *part, Evas_Object *child);

/**
 * Request sizing reevaluation, restricted to current width and/or height
 *
 * Useful mostly when there are TEXTBLOCK parts defining the height of the
 * object and nothing else restricting it to a minimum width. Calling this
 * function will restrict the minimum size in the Edje calculation to whatever
 * size it the layout has at the moment.
 *
 * @since 1.8
 *
 * @ingroup Layout
 * 
 *
 * @param[in] width Restrict minimum size to the current width
 * @param[in] height Restrict minimum size ot the current height
 */
EAPI void elm_layout_sizing_restricted_eval(Elm_Layout *obj, Eina_Bool width, Eina_Bool height);

/**
 * Sets a specific cursor style for an edje part.
 *
 * @return EINA_TRUE on success or EINA_FALSE on failure, that may be
 * part not exists or it did not had a cursor set.
 *
 * @ingroup Layout
 * 
 *
 * @param[in] part_name a part from loaded edje group.
 * @param[in] style the theme style to use (default, transparent, ...)
 */
EAPI Eina_Bool elm_layout_part_cursor_style_set(Elm_Layout *obj, const char *part_name, const char *style);

/**
 * Get a specific cursor style for an edje part.
 *
 * @return the theme style in use, defaults to "default". If the
 * object does not have a cursor set, then NULL is returned.
 *
 * @ingroup Layout
 * 
 *
 * @param[in] part_name a part from loaded edje group.
 */
EAPI const char *elm_layout_part_cursor_style_get(const Elm_Layout *obj, const char *part_name);

/**
 * Set the text of the given part
 *
 * @return @c EINA_TRUE on success, @c EINA_FALSE otherwise
 *
 * @ingroup Layout
 * 
 *
 * @param[in] part The TEXT part where to set the text
 * @param[in] text The text to set
 */
EAPI Eina_Bool elm_layout_text_set(Elm_Layout *obj, const char *part, const char *text);

/**
 * Get the text set in the given part
 *
 * @return The text set in @p part
 *
 * @ingroup Layout
 * 
 *
 * @param[in] part The TEXT part to retrieve the text off
 */
EAPI const char *elm_layout_text_get(const Elm_Layout *obj, const char *part);

/**
 * Add a callback for a (Edje) signal emitted by a layout widget's
 * underlying Edje object.
 *
 * This function connects a callback function to a signal emitted by
 * the underlying Edje object of @a obj. Globs are accepted in either
 * the emission or source strings (see @c
 * edje_object_signal_callback_add()).
 *
 * @ingroup Layout
 * 
 *
 * @param[in] emission The signal's name string
 * @param[in] source The signal's source string
 * @param[in] func The callback function to be executed when the signal is
emitted.
 * @param[in] data A pointer to data to pass in to the callback function.
 */
EAPI void elm_layout_signal_callback_add(Elm_Layout *obj, const char *emission, const char *source, Edje_Signal_Cb func, void *data);

/**
 * Sets a specific cursor for an edje part.
 *
 * @return EINA_TRUE on success or EINA_FALSE on failure, that may be
 * part not exists or it has "mouse_events: 0".
 *
 * @ingroup Layout
 * 
 *
 * @param[in] part_name a part from loaded edje group.
 * @param[in] cursor cursor name to use, see Elementary_Cursor.h
 */
EAPI Eina_Bool elm_layout_part_cursor_set(Elm_Layout *obj, const char *part_name, const char *cursor);

/**
 * Get the cursor to be shown when mouse is over an edje part
 *
 * @return the cursor name.
 *
 * @ingroup Layout
 * 
 *
 * @param[in] part_name a part from loaded edje group.
 */
EAPI const char *elm_layout_part_cursor_get(const Elm_Layout *obj, const char *part_name);

/**
 * Insert child to layout box part before a reference object.
 *
 * @return @c EINA_TRUE on success, @c EINA_FALSE otherwise
 *
 * Once the object is inserted, it will become child of the layout. Its
 * lifetime will be bound to the layout, whenever the layout dies the child
 * will be deleted automatically. One should use elm_layout_box_remove() to
 * make this layout forget about the object.
 *
 * @see elm_layout_box_append()
 * @see elm_layout_box_prepend()
 * @see elm_layout_box_insert_before()
 * @see elm_layout_box_remove()
 *
 * @ingroup Layout
 * 
 *
 * @param[in] part the box part to insert.
 * @param[in] child the child object to insert into box.
 * @param[in] reference another reference object to insert before in box.
 */
EAPI Eina_Bool elm_layout_box_insert_before(Elm_Layout *obj, const char *part, Evas_Object *child, const Evas_Object *reference);

/**
 * Insert child to layout box part at a given position.
 *
 * @return @c EINA_TRUE on success, @c EINA_FALSE otherwise
 *
 * Once the object is inserted, it will become child of the layout. Its
 * lifetime will be bound to the layout, whenever the layout dies the child
 * will be deleted automatically. One should use elm_layout_box_remove() to
 * make this layout forget about the object.
 *
 * @see elm_layout_box_append()
 * @see elm_layout_box_prepend()
 * @see elm_layout_box_insert_before()
 * @see elm_layout_box_remove()
 *
 * @ingroup Layout
 * 
 *
 * @param[in] part the box part to insert.
 * @param[in] child the child object to insert into box.
 * @param[in] pos the numeric position >=0 to insert the child.
 */
EAPI Eina_Bool elm_layout_box_insert_at(Elm_Layout *obj, const char *part, Evas_Object *child, unsigned int pos);

/**
 * Get the edje data from the given layout
 *
 * @return The edje data string
 *
 * This function fetches data specified inside the edje theme of this layout.
 * This function return NULL if data is not found.
 *
 * In EDC this comes from a data block within the group block that @p
 * obj was loaded from. E.g.
 *
 * @code
 * collections {
 * group {
 * name: "a_group";
 * data {
 * item: "key1" "value1";
 * item: "key2" "value2";
 * }
 * }
 * }
 * @endcode
 *
 * @ingroup Layout
 * 
 *
 * @param[in] key The data key
 */
EAPI const char *elm_layout_data_get(const Elm_Layout *obj, const char *key);

/**
 * Append child to layout box part.
 *
 * @return @c EINA_TRUE on success, @c EINA_FALSE otherwise
 *
 * Once the object is appended, it will become child of the layout. Its
 * lifetime will be bound to the layout, whenever the layout dies the child
 * will be deleted automatically. One should use elm_layout_box_remove() to
 * make this layout forget about the object.
 *
 * @see elm_layout_box_prepend()
 * @see elm_layout_box_insert_before()
 * @see elm_layout_box_insert_at()
 * @see elm_layout_box_remove()
 *
 * @ingroup Layout
 * 
 *
 * @param[in] part the box part to which the object will be appended.
 * @param[in] child the child object to append to box.
 */
EAPI Eina_Bool elm_layout_box_append(Elm_Layout *obj, const char *part, Evas_Object *child);

/**
 * Remove a signal-triggered callback from a given layout widget.
 *
 * @return The data pointer of the signal callback (passed on
 * elm_layout_signal_callback_add()) or @c NULL, on errors.
 *
 * This function removes the @b last callback attached to a signal
 * emitted by the undelying Edje object of @a obj, with parameters @a
 * emission, @a source and @c func matching exactly those passed to a
 * previous call to elm_layout_signal_callback_add(). The data pointer
 * that was passed to this call will be returned.
 *
 * @ingroup Layout
 * 
 *
 * @param[in] emission The signal's name string
 * @param[in] source The signal's source string
 * @param[in] func The callback function being executed when the signal
was emitted.
 */
EAPI void *elm_layout_signal_callback_del(Elm_Layout *obj, const char *emission, const char *source, Edje_Signal_Cb func);

/**
 * @brief Thaws the Elementary object.
 *
 * @return The frozen state or 0 if the object is not frozen or on error.
 *
 * This function thaws the given Edje object and the Elementary sizing calc.
 *
 * @note: If sucessives freezes were done, an equal number of
 * thaws will be required.
 *
 * @see elm_layout_freeze()
 * 
 */
EAPI int elm_layout_thaw(Elm_Layout *obj);

/**
 * Prepend child to layout box part.
 *
 * @return @c EINA_TRUE on success, @c EINA_FALSE otherwise
 *
 * Once the object is prepended, it will become child of the layout. Its
 * lifetime will be bound to the layout, whenever the layout dies the child
 * will be deleted automatically. One should use elm_layout_box_remove() to
 * make this layout forget about the object.
 *
 * @see elm_layout_box_append()
 * @see elm_layout_box_insert_before()
 * @see elm_layout_box_insert_at()
 * @see elm_layout_box_remove()
 *
 * @ingroup Layout
 * 
 *
 * @param[in] part the box part to prepend.
 * @param[in] child the child object to prepend to box.
 */
EAPI Eina_Bool elm_layout_box_prepend(Elm_Layout *obj, const char *part, Evas_Object *child);

/**
 * Send a (Edje) signal to a given layout widget's underlying Edje
 * object.
 *
 * This function sends a signal to the underlying Edje object of @a
 * obj. An Edje program on that Edje object's definition can respond
 * to a signal by specifying matching 'signal' and 'source' fields.
 *
 * @ingroup Layout
 * 
 *
 * @param[in] emission The signal's name string
 * @param[in] source The signal's source string
 */
EAPI void elm_layout_signal_emit(Elm_Layout *obj, const char *emission, const char *source);

/**
 * Insert child to layout table part.
 *
 * @return @c EINA_TRUE on success, @c EINA_FALSE otherwise
 *
 * Once the object is inserted, it will become child of the table. Its
 * lifetime will be bound to the layout, and whenever the layout dies the
 * child will be deleted automatically. One should use
 * elm_layout_table_unpack() to make this layout forget about the object.
 *
 * If @p colspan or @p rowspan are bigger than 1, that object will occupy
 * more space than a single cell. For instance, the following code:
 * @code
 * elm_layout_table_pack(layout, "table_part", child, 0, 1, 3, 1);
 * @endcode
 *
 * Would result in an object being added like the following picture:
 *
 * @image html layout_colspan.png
 * @image latex layout_colspan.eps width=\textwidth
 *
 * @see elm_layout_table_unpack()
 * @see elm_layout_table_clear()
 *
 * @ingroup Layout
 * 
 *
 * @param[in] part the box part to pack child.
 * @param[in] child the child object to pack into table.
 * @param[in] col the column to which the child should be added. (>= 0)
 * @param[in] row the row to which the child should be added. (>= 0)
 * @param[in] colspan how many columns should be used to store this object. (>=
1)
 * @param[in] rowspan how many rows should be used to store this object. (>= 1)
 */
EAPI Eina_Bool elm_layout_table_pack(Elm_Layout *obj, const char *part, Evas_Object *child, unsigned short col, unsigned short row, unsigned short colspan, unsigned short rowspan);

/**
 * Unsets a cursor previously set with elm_layout_part_cursor_set().
 *
 * @return @c EINA_TRUE on success, @c EINA_FALSE otherwise
 *
 * @ingroup Layout
 * 
 *
 * @param[in] part_name a part from loaded edje group, that had a cursor set
with elm_layout_part_cursor_set().
 */
EAPI Eina_Bool elm_layout_part_cursor_unset(Elm_Layout *obj, const char *part_name);

/**
 * Remove all the child objects of the given part table.
 *
 * @return @c EINA_TRUE on success, @c EINA_FALSE otherwise
 *
 * The objects will be removed from the table part and their lifetime will
 * not be handled by the layout anymore. This is equivalent to
 * elm_layout_table_unpack() for all table children.
 *
 * @see elm_layout_table_pack()
 * @see elm_layout_table_unpack()
 *
 * @ingroup Layout
 * 
 *
 * @param[in] part The table part name to remove child.
 * @param[in] clear If EINA_TRUE, then all objects will be deleted as
well, otherwise they will just be removed and will be
dangling on the canvas.
 */
EAPI Eina_Bool elm_layout_table_clear(Elm_Layout *obj, const char *part, Eina_Bool clear);

#endif
