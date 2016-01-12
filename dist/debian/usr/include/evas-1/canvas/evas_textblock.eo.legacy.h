#ifndef _EVAS_TEXTBLOCK_EO_LEGACY_H_
#define _EVAS_TEXTBLOCK_EO_LEGACY_H_

#ifndef _EVAS_TEXTBLOCK_EO_CLASS_TYPE
#define _EVAS_TEXTBLOCK_EO_CLASS_TYPE

typedef Eo Evas_Textblock;

#endif

#ifndef _EVAS_TEXTBLOCK_EO_TYPES
#define _EVAS_TEXTBLOCK_EO_TYPES

typedef struct _Evas_Textblock_Node_Format Evas_Textblock_Node_Format;


#endif

/**
 * @brief Sets the tetxblock's text to the markup text.
 *
 * @note assumes text does not include the unicode object replacement char
 * (0xFFFC)
 *
 * @param[in] text The markup text to use.
 *
 * @ingroup Evas_Textblock
 */
EAPI void evas_object_textblock_text_markup_set(Evas_Textblock *obj, const char *text);

/**
 * @brief Get the markup of the object.
 *
 * @return The markup text to use.
 *
 * @ingroup Evas_Textblock
 */
EAPI const char *evas_object_textblock_text_markup_get(const Evas_Textblock *obj);

/**
 * @brief Sets the vertical alignment of text within the textblock object as a
 * whole.
 *
 * Normally alignment is 0.0 (top of object). Values given should be between
 * 0.0 and 1.0 (1.0 bottom of object, 0.5 being vertically centered etc.).
 *
 * @param[in] align The alignment set for the object.
 *
 * @since 1.1
 *
 * @ingroup Evas_Textblock
 */
EAPI void evas_object_textblock_valign_set(Evas_Textblock *obj, double align);

/**
 * @brief Gets the vertical alignment of a textblock
 *
 * @return The alignment set for the object.
 *
 * @since 1.1
 *
 * @ingroup Evas_Textblock
 */
EAPI double evas_object_textblock_valign_get(const Evas_Textblock *obj);

/**
 * @brief Sets the BiDi delimiters used in the textblock.
 *
 * BiDi delimiters are use for in-paragraph separation of bidi segments. This
 * is useful for example in recipients fields of e-mail clients where bidi
 * oddities can occur when mixing RTL and LTR.
 *
 * @param[in] delim A null terminated string of delimiters, e.g ",|" or @c null
 * if empty.
 *
 * @since 1.1
 *
 * @ingroup Evas_Textblock
 */
EAPI void evas_object_textblock_bidi_delimiters_set(Evas_Textblock *obj, const char *delim);

/**
 * @brief Gets the BiDi delimiters used in the textblock.
 *
 * BiDi delimiters are use for in-paragraph separation of bidi segments. This
 * is useful for example in recipients fields of e-mail clients where bidi
 * oddities can occur when mixing RTL and LTR.
 *
 * @return A null terminated string of delimiters, e.g ",|" or @c null if
 * empty.
 *
 * @since 1.1
 *
 * @ingroup Evas_Textblock
 */
EAPI const char *evas_object_textblock_bidi_delimiters_get(const Evas_Textblock *obj);

/**
 * @brief Set the "replacement character" to use for the given textblock
 * object.
 *
 * @param[in] ch The charset name.
 *
 * @ingroup Evas_Textblock
 */
EAPI void evas_object_textblock_replace_char_set(Evas_Textblock *obj, const char *ch);

/**
 * @brief Sets newline mode. When true, newline character will behave as a
 * paragraph separator.
 *
 * @param[in] mode @c true for legacy mode, @c false otherwise.
 *
 * @since 1.1
 *
 * @ingroup Evas_Textblock
 */
EAPI void evas_object_textblock_legacy_newline_set(Evas_Textblock *obj, Eina_Bool mode);

/**
 * @brief Gets newline mode. When true, newline character behaves as a
 * paragraph separator.
 *
 * @return @c true for legacy mode, @c false otherwise.
 *
 * @since 1.1
 *
 * @ingroup Evas_Textblock
 */
EAPI Eina_Bool evas_object_textblock_legacy_newline_get(const Evas_Textblock *obj);

/**
 * @brief Set the objects style to @c ts.
 *
 * @param[in] ts The style.
 *
 * @ingroup Evas_Textblock
 */
EAPI void evas_object_textblock_style_set(Evas_Textblock *obj, const Evas_Textblock_Style *ts);

/**
 * @brief Get the style of an object.
 *
 * @return The style.
 *
 * @ingroup Evas_Textblock
 */
EAPI const Evas_Textblock_Style *evas_object_textblock_style_get(const Evas_Textblock *obj);

/** Gets the first format node.
 *
 * @ingroup Evas_Textblock
 */
EAPI const Evas_Textblock_Node_Format *evas_textblock_node_format_first_get(const Evas_Textblock *obj);

/**
 * @brief Get the formatted width and height.
 *
 * This calculates the actual size after restricting the textblock to the
 * current size of the object.
 *
 * The main difference between this and
 * @ref evas_object_textblock_size_native_get is that the "native" function
 * does not wrapping into account it just calculates the real width of the
 * object if it was placed on an infinite canvas, while this function gives the
 * size after wrapping according to the size restrictions of the object.
 *
 * For example for a textblock containing the text: "You shall not pass!" with
 * no margins or padding and assuming a monospace font and a size of 7x10 char
 * widths (for simplicity) has a native size of 19x1 and a formatted size of
 * 5x4.
 *
 * @param[out] w The width of the object.
 * @param[out] h The height of the object.
 *
 * @ingroup Evas_Textblock
 */
EAPI void evas_object_textblock_size_formatted_get(const Evas_Textblock *obj, Evas_Coord *w, Evas_Coord *h);

/** Gets the last format node.
 *
 * @ingroup Evas_Textblock
 */
EAPI const Evas_Textblock_Node_Format *evas_textblock_node_format_last_get(const Evas_Textblock *obj);

/** Get the object's main cursor.
 *
 * @ingroup Evas_Textblock
 */
EAPI Evas_Textblock_Cursor *evas_object_textblock_cursor_get(const Evas_Textblock *obj);

/**
 * @brief Get the native width and height.
 *
 * This calculates the actual size without taking account the current size of
 * the object.
 *
 * The main difference between this and
 * @ref evas_object_textblock_size_formatted_get is that the "native" function
 * does not take wrapping into account it just calculates the real width of the
 * object if it was placed on an infinite canvas, while the "formatted"
 * function gives the size after  wrapping text according to the size
 * restrictions of the object.
 *
 * For example for a textblock containing the text: "You shall not pass!" with
 * no margins or padding and assuming a monospace font and a size of 7x10 char
 * widths (for simplicity) has a native size of 19x1 and a formatted size of
 * 5x4.
 *
 * @param[out] w The width returned.
 * @param[out] h The height returned.
 *
 * @ingroup Evas_Textblock
 */
EAPI void evas_object_textblock_size_native_get(const Evas_Textblock *obj, Evas_Coord *w, Evas_Coord *h);
EAPI void evas_object_textblock_style_insets_get(const Evas_Textblock *obj, Evas_Coord *l, Evas_Coord *r, Evas_Coord *t, Evas_Coord *b);

/**
 * @brief Get the geometry of a line number.
 *
 * @param[out] cx x coord of the line.
 * @param[out] cy y coord of the line.
 * @param[out] cw w coord of the line.
 * @param[out] ch h coord of the line.
 *
 * @return @c true on success, @c false otherwise.
 *
 * @ingroup Evas_Textblock
 */
EAPI Eina_Bool evas_object_textblock_line_number_geometry_get(const Evas_Textblock *obj, int line, Evas_Coord *cx, Evas_Coord *cy, Evas_Coord *cw, Evas_Coord *ch);

/**
 * @brief Get the "replacement character" for given textblock object.
 *
 * Returns @c null if no replacement character is in use.
 *
 * @return Replacement character or @c null.
 *
 * @ingroup Evas_Textblock
 */
EAPI const char *evas_object_textblock_replace_char_get(Evas_Textblock *obj);

/**
 * @brief Del the from the top of the user style stack.
 *
 * See also @ref evas_object_textblock_style_get.
 *
 * @since 1.2
 *
 * @ingroup Evas_Textblock
 */
EAPI void evas_object_textblock_style_user_pop(Evas_Textblock *obj);

/**
 * @brief Create a new cursor, associate it to the obj and init it to point to
 * the start of the textblock.
 *
 * Association to the object means the cursor will be updated when the object
 * will change.
 *
 * @note if you need speed and you know what you are doing, it's slightly
 * faster to just allocate the cursor yourself and not associate it. (only
 * people developing the actual object, and not users of the object).
 *
 * @return The new cursor.
 *
 * @ingroup Evas_Textblock
 */
EAPI Evas_Textblock_Cursor *evas_object_textblock_cursor_new(const Evas_Textblock *obj);
EAPI const Eina_List *evas_textblock_node_format_list_get(const Evas_Textblock *obj, const char *anchor);

/**
 * @brief Get (don't remove) the style at the top of the user style stack.
 *
 * See also @ref evas_object_textblock_style_get.
 *
 * @return The style of the object.
 *
 * @since 1.2
 *
 * @ingroup Evas_Textblock
 */
EAPI const Evas_Textblock_Style *evas_object_textblock_style_user_peek(const Evas_Textblock *obj);

/**
 * @brief Remove a format node and its match.
 *
 * @param[in] n
 *
 * @ingroup Evas_Textblock
 */
EAPI void evas_textblock_node_format_remove_pair(Evas_Textblock *obj, Evas_Textblock_Node_Format *n);

/**
 * @brief Push ts to the top of the user style stack.
 *
 * FIXME: API is solid but currently only supports 1 style in the stack.
 *
 * The user style overrides the corresponding elements of the regular style.
 * This is the proper way to do theme overrides in code.
 *
 * See also @ref evas_object_textblock_style_set.
 *
 * @param[in] ts The style to set.
 *
 * @since 1.2
 *
 * @ingroup Evas_Textblock
 */
EAPI void evas_object_textblock_style_user_push(Evas_Textblock *obj, Evas_Textblock_Style *ts);

/**
 * @brief Add obstacle evas object @c eo_obs to be observed during layout of
 * text.
 *
 * The textblock does the layout of the text according to the position of the
 * obstacle.
 *
 * @param[in] eo_obs
 *
 * @return @c true on success, @c false otherwise.
 *
 * @since 1.15
 *
 * @ingroup Evas_Textblock
 */
EAPI Eina_Bool evas_object_textblock_obstacle_add(Evas_Textblock *obj, Evas_Object *eo_obs);

/**
 * @brief Removes @c eo_obs from observation during text layout.
 *
 * @param[in] eo_obs
 *
 * @return @c true on success, @c false otherwise.
 *
 * @since 1.15
 *
 * @ingroup Evas_Textblock
 */
EAPI Eina_Bool evas_object_textblock_obstacle_del(Evas_Textblock *obj, Evas_Object *eo_obs);

/**
 * @brief Triggers for relayout due to obstacles' state change.
 *
 * The obstacles alone don't affect the layout, until this is called. Use this
 * after doing changes (moving, positioning etc.) in the obstacles that you
 *  would like to be considered in the layout.
 *
 * For example: if you have just repositioned the obstacles to differrent
 * coordinates relative to the textblock, you need to call this so it will
 * consider this new state and will relayout the text.
 *
 * @since 1.15
 *
 * @ingroup Evas_Textblock
 */
EAPI void evas_object_textblock_obstacles_update(Evas_Textblock *obj);

#endif
