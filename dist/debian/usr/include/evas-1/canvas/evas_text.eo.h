#ifndef _EVAS_TEXT_EO_H_
#define _EVAS_TEXT_EO_H_

#ifndef _EVAS_TEXT_EO_CLASS_TYPE
#define _EVAS_TEXT_EO_CLASS_TYPE

typedef Eo Evas_Text;

#endif

#ifndef _EVAS_TEXT_EO_TYPES
#define _EVAS_TEXT_EO_TYPES


#endif
#define EVAS_TEXT_CLASS evas_text_class_get()

EAPI const Eo_Class *evas_text_class_get(void) EINA_CONST;

/**
 * Sets the shadow color for the given text object.
 *
 * Shadow effects, which are fading colors decorating the text
 * underneath it, will just be shown if the object is set to one of
 * the following styles:
 *
 * - #EVAS_TEXT_STYLE_SHADOW
 * - #EVAS_TEXT_STYLE_OUTLINE_SHADOW
 * - #EVAS_TEXT_STYLE_FAR_SHADOW
 * - #EVAS_TEXT_STYLE_OUTLINE_SOFT_SHADOW
 * - #EVAS_TEXT_STYLE_SOFT_SHADOW
 * - #EVAS_TEXT_STYLE_FAR_SOFT_SHADOW
 *
 * One can also change the direction where the shadow grows to, with
 * evas_object_text_style_set().
 *
 * @see evas_object_text_shadow_color_get()
 *
 * @param[in] r The red component of the given color.
 * @param[in] g The green component of the given color.
 * @param[in] b The blue component of the given color.
 * @param[in] a The alpha component of the given color.
 */
EOAPI void  evas_obj_text_shadow_color_set(int r, int g, int b, int a);

/**
 * Retrieves the shadow color for the given text object.
 *
 * @note Use @c NULL pointers on the color components you're not
 * interested in: they'll be ignored by the function.
 *
 * @see evas_object_text_shadow_color_set() for more details.
 *
 * @param[out] r The red component of the given color.
 * @param[out] g The green component of the given color.
 * @param[out] b The blue component of the given color.
 * @param[out] a The alpha component of the given color.
 */
EOAPI void  evas_obj_text_shadow_color_get(int *r, int *g, int *b, int *a);

/**
 * @brief Sets the ellipsis that should be used for the text object.
 *
 * This is a value between 0.0 and 1.0 indicating the position of the text
 * to be shown. 0.0 means the start will be shown and the end trimmed, 1.0
 * means the beginning will be trimmed and the end will be shown, and any value
 * in between will cause ellipsis to be added in both end of the text and the
 * requested part to be shown.
 * -1.0 means ellipsis is turned off.
 *
 * @since 1.8
 *
 * @param[in] ellipsis the ellipsis.
 */
EOAPI void  evas_obj_text_ellipsis_set(double ellipsis);

/**
 * @brief Gets the ellipsis currently set on the text object.
 *
 * @return The ellipsis set on the text object. The ellipsis is -1.0.
 * @see evas_object_text_ellipsis_set.
 * @since 1.8
 */
EOAPI double  evas_obj_text_ellipsis_get(void);

/**
 * @brief Sets the BiDi delimiters used in the textblock.
 *
 * BiDi delimiters are use for in-paragraph separation of bidi segments. This
 * is useful for example in recipients fields of e-mail clients where bidi
 * oddities can occur when mixing RTL and LTR.
 *
 * @since 1.1
 *
 * @param[in] delim A null terminated string of delimiters, e.g ",|".
 */
EOAPI void  evas_obj_text_bidi_delimiters_set(const char *delim);

/**
 * @brief Gets the BiDi delimiters used in the textblock.
 *
 * BiDi delimiters are use for in-paragraph separation of bidi segments. This
 * is useful for example in recipients fields of e-mail clients where bidi
 * oddities can occur when mixing RTL and LTR.
 *
 * @return A null terminated string of delimiters, e.g ",|". If empty, returns NULL.
 * @since 1.1
 */
EOAPI const char * evas_obj_text_bidi_delimiters_get(void);

/**
 * Sets the outline color for the given text object.
 *
 * Outline effects (colored lines around text glyphs) will just be
 * shown if the object is set to one of the following styles:
 * - #EVAS_TEXT_STYLE_OUTLINE
 * - #EVAS_TEXT_STYLE_SOFT_OUTLINE
 * - #EVAS_TEXT_STYLE_OUTLINE_SHADOW
 * - #EVAS_TEXT_STYLE_OUTLINE_SOFT_SHADOW
 *
 * @see evas_object_text_outline_color_get()
 *
 * @param[in] r The red component of the given color.
 * @param[in] g The green component of the given color.
 * @param[in] b The blue component of the given color.
 * @param[in] a The alpha component of the given color.
 */
EOAPI void  evas_obj_text_outline_color_set(int r, int g, int b, int a);

/**
 * Retrieves the outline color for the given text object.
 *
 * @note Use @c NULL pointers on the color components you're not
 * interested in: they'll be ignored by the function.
 *
 * @see evas_object_text_outline_color_set() for more details.
 *
 * @param[out] r The red component of the given color.
 * @param[out] g The green component of the given color.
 * @param[out] b The blue component of the given color.
 * @param[out] a The alpha component of the given color.
 */
EOAPI void  evas_obj_text_outline_color_get(int *r, int *g, int *b, int *a);

/**
 * Sets the 'glow 2' color for the given text object.
 *
 * 'Glow 2' effects, which are glowing colors decorating the text's
 * (immediate) surroundings, will just be shown if the object is set
 * to the #EVAS_TEXT_STYLE_GLOW style. See also
 * evas_object_text_glow_color_set().
 *
 * @see evas_object_text_glow2_color_get()
 *
 * @param[in] r The red component of the given color.
 * @param[in] g The green component of the given color.
 * @param[in] b The blue component of the given color.
 * @param[in] a The alpha component of the given color.
 */
EOAPI void  evas_obj_text_glow2_color_set(int r, int g, int b, int a);

/**
 * Retrieves the 'glow 2' color for the given text object.
 *
 * @note Use @c NULL pointers on the color components you're not
 * interested in: they'll be ignored by the function.
 *
 * @see evas_object_text_glow2_color_set() for more details.
 *
 * @param[out] r The red component of the given color.
 * @param[out] g The green component of the given color.
 * @param[out] b The blue component of the given color.
 * @param[out] a The alpha component of the given color.
 */
EOAPI void  evas_obj_text_glow2_color_get(int *r, int *g, int *b, int *a);

/**
 * Sets the style to apply on the given text object.
 *
 * Text object styles are one of the values in
 * #Evas_Text_Style_Type. Some of those values are combinations of
 * more than one style, and some account for the direction of the
 * rendering of shadow effects.
 *
 * @note One may use the helper macros #EVAS_TEXT_STYLE_BASIC_SET and
 * #EVAS_TEXT_STYLE_SHADOW_DIRECTION_SET to assemble a style value.
 *
 * The following figure illustrates the text styles:
 *
 * @image html text-styles.png
 * @image rtf text-styles.png
 * @image latex text-styles.eps
 *
 * @see evas_object_text_style_get()
 * @see evas_object_text_shadow_color_set()
 * @see evas_object_text_outline_color_set()
 * @see evas_object_text_glow_color_set()
 * @see evas_object_text_glow2_color_set()
 *
 * @param[in] style a style type.
 */
EOAPI void  evas_obj_text_style_set(Evas_Text_Style_Type style);

/**
 * Retrieves the style on use on the given text object.
 *
 * @return the style type in use.
 *
 * @see evas_object_text_style_set() for more details.
 */
EOAPI Evas_Text_Style_Type  evas_obj_text_style_get(void);

/**
 * Sets the glow color for the given text object.
 *
 * Glow effects, which are glowing colors decorating the text's
 * surroundings, will just be shown if the object is set to the
 * #EVAS_TEXT_STYLE_GLOW style.
 *
 * @note Glow effects are placed from a short distance of the text
 * itself, but no touching it. For glowing effects right on the
 * borders of the glyphs, see 'glow 2' effects
 * (evas_object_text_glow2_color_set()).
 *
 * @see evas_object_text_glow_color_get()
 *
 * @param[in] r The red component of the given color.
 * @param[in] g The green component of the given color.
 * @param[in] b The blue component of the given color.
 * @param[in] a The alpha component of the given color.
 */
EOAPI void  evas_obj_text_glow_color_set(int r, int g, int b, int a);

/**
 * Retrieves the glow color for the given text object.
 *
 * @note Use @c NULL pointers on the color components you're not
 * interested in: they'll be ignored by the function.
 *
 * @see evas_object_text_glow_color_set() for more details.
 *
 * @param[out] r The red component of the given color.
 * @param[out] g The green component of the given color.
 * @param[out] b The blue component of the given color.
 * @param[out] a The alpha component of the given color.
 */
EOAPI void  evas_obj_text_glow_color_get(int *r, int *g, int *b, int *a);

/**
 * No description supplied.
 */
EOAPI Evas_Coord  evas_obj_text_max_descent_get(void);

/**
 * Gets the text style pad of a text object.
 *
 * @param[out] l The left pad (or @c NULL).
 * @param[out] r The right pad (or @c NULL).
 * @param[out] t The top pad (or @c NULL).
 * @param[out] b The bottom pad (or @c NULL).
 */
EOAPI void  evas_obj_text_style_pad_get(int *l, int *r, int *t, int *b);

/**
 * Retrieves the direction of the text currently being displayed in the
 * text object.
 * @return the direction of the text
 */
EOAPI Evas_BiDi_Direction  evas_obj_text_direction_get(void);

/**
 * No description supplied.
 */
EOAPI Evas_Coord  evas_obj_text_ascent_get(void);

/**
 * No description supplied.
 */
EOAPI Evas_Coord  evas_obj_text_horiz_advance_get(void);

/**
 * No description supplied.
 */
EOAPI Evas_Coord  evas_obj_text_inset_get(void);

/**
 * No description supplied.
 */
EOAPI Evas_Coord  evas_obj_text_max_ascent_get(void);

/**
 * No description supplied.
 */
EOAPI Evas_Coord  evas_obj_text_vert_advance_get(void);

/**
 * No description supplied.
 */
EOAPI Evas_Coord  evas_obj_text_descent_get(void);

/**
 * Returns the logical position of the last char in the text up to the pos given. this is NOT the position of the last char because of the possibility of RTL in the text.
 * 
 *
 * @param[in] x in
 * @param[in] y in
 */
EOAPI int  evas_obj_text_last_up_to_pos(Evas_Coord x, Evas_Coord y);

/**
 * No description supplied.
 *
 * @param[in] x in
 * @param[in] y in
 * @param[out] cx out
 * @param[out] cy out
 * @param[out] cw out
 * @param[out] ch out
 */
EOAPI int  evas_obj_text_char_coords_get(Evas_Coord x, Evas_Coord y, Evas_Coord *cx, Evas_Coord *cy, Evas_Coord *cw, Evas_Coord *ch);

/**
 * Retrieve position and dimension information of a character within a text @c Evas_Object.
 *
 * This function is used to obtain the X, Y, width and height of the character
 * located at @p pos within the @c Evas_Object @p obj. @p obj must be a text object
 * as created with evas_object_text_add(). Any of the @c Evas_Coord parameters (@p cx,
 * @p cy, @p cw, @p ch) may be @c NULL in which case no value will be assigned to that
 * parameter.
 *
 * @return @c EINA_FALSE on success, @c EINA_TRUE on error.
 * 
 *
 * @param[in] pos The character position to request co-ordinates for.
 * @param[out] cx A pointer to an @c Evas_Coord to store the X value in (can be NULL).
 * @param[out] cy A pointer to an @c Evas_Coord to store the Y value in (can be NULL).
 * @param[out] cw A pointer to an @c Evas_Coord to store the Width value in (can be NULL).
 * @param[out] ch A pointer to an @c Evas_Coord to store the Height value in (can be NULL).
 */
EOAPI Eina_Bool  evas_obj_text_char_pos_get(int pos, Evas_Coord *cx, Evas_Coord *cy, Evas_Coord *cw, Evas_Coord *ch);


#endif
