#ifndef _EVAS_TEXTGRID_EO_H_
#define _EVAS_TEXTGRID_EO_H_

#ifndef _EVAS_TEXTGRID_EO_CLASS_TYPE
#define _EVAS_TEXTGRID_EO_CLASS_TYPE

typedef Eo Evas_Textgrid;

#endif

#ifndef _EVAS_TEXTGRID_EO_TYPES
#define _EVAS_TEXTGRID_EO_TYPES

/** The palette to use for the foreground and background colors.
 *
 * @since 1.7
 *
 * @ingroup Evas_Textgrid
 */
typedef enum
{
  EVAS_TEXTGRID_PALETTE_NONE = 0, /** No palette is used */
  EVAS_TEXTGRID_PALETTE_STANDARD, /** standard palette (around 16 colors) */
  EVAS_TEXTGRID_PALETTE_EXTENDED, /** extended palette (at max 256 colors) */
  EVAS_TEXTGRID_PALETTE_LAST /** ignore it */
} Evas_Textgrid_Palette;

/** The style to give to each character of the grid.
 *
 * @since 1.7
 *
 * @ingroup Evas_Textgrid
 */
typedef enum
{
  EVAS_TEXTGRID_FONT_STYLE_NORMAL = 1 /* 1 << 0 */, /** Normal style */
  EVAS_TEXTGRID_FONT_STYLE_BOLD = 2 /* 1 << 1 */, /** Bold style */
  EVAS_TEXTGRID_FONT_STYLE_ITALIC = 4 /* 1 << 2 */ /** Oblique style */
} Evas_Textgrid_Font_Style;

typedef struct _Evas_Textgrid_Cell Evas_Textgrid_Cell;


#endif
#define EVAS_TEXTGRID_CLASS evas_textgrid_class_get()

EAPI const Eo_Class *evas_textgrid_class_get(void) EINA_CONST;

/**
 * @brief This function is not implemented yet, do not use.
 *
 * @param[in] styles EVAS_TEXTGRID_FONT_STYLE_NORMAL
 *
 * @ingroup Evas_Textgrid
 */
EOAPI void  evas_obj_textgrid_supported_font_styles_set(Evas_Textgrid_Font_Style styles);

/**
 * @brief This function is not implemented yet, do not use.
 *
 * @return EVAS_TEXTGRID_FONT_STYLE_NORMAL
 *
 * @ingroup Evas_Textgrid
 */
EOAPI Evas_Textgrid_Font_Style  evas_obj_textgrid_supported_font_styles_get(void);

/**
 * @brief Set the size of the textgrid object.
 *
 * This function sets the number of lines @c h and the number of columns @c w
 * to the textgrid object @c obj. If @c w or @c h are less or equal than 0,
 * this functiond does nothing.
 *
 * @param[in] w The number of columns (width in cells) of the grid.
 * @param[in] h The number of rows (height in cells) of the grid.
 *
 * @since 1.7
 *
 * @ingroup Evas_Textgrid
 */
EOAPI void  evas_obj_textgrid_size_set(int w, int h);

/**
 * @brief Get the size of the textgrid object.
 *
 * This function retrieves the number of lines in the buffer @c h and the
 * number of columns in the buffer @c w of the textgrid object @c obj. @c w or
 * @c h can be @c null. On error, their value is 0.
 *
 * @param[out] w The number of columns (width in cells) of the grid.
 * @param[out] h The number of rows (height in cells) of the grid.
 *
 * @since 1.7
 *
 * @ingroup Evas_Textgrid
 */
EOAPI void  evas_obj_textgrid_size_get(int *w, int *h);

/**
 * @brief Retrieve the size of a cell of the given textgrid object in pixels.
 *
 * This functions retrieves the width and height, in pixels, of a cell of the
 * textgrid object @c obj and store them respectively in the buffers @c width
 * and @c height. Their value depends on the monospace font used for the
 * textgrid object, as well as the style. @c width and @c height can be
 * @c null. On error, they are set to 0.
 *
 * See also @ref efl_text_properties_font_set and
 * @ref evas_obj_textgrid_supported_font_styles_set
 *
 * @param[out] width A pointer to the location to store the width in pixels of
 * a cell.
 * @param[out] height A pointer to the location to store the height in pixels
 * of a cell.
 *
 * @since 1.7
 *
 * @ingroup Evas_Textgrid
 */
EOAPI void  evas_obj_textgrid_cell_size_get(int *width, int *height);

/**
 * @brief Indicate for evas that part of a textgrid region (cells) has been
 * updated.
 *
 * This function declares to evas that a region of cells was updated by code
 * and needs refreshing.
 *
 * See also @ref evas_obj_textgrid_cellrow_set,
 *  @ref evas_obj_textgrid_cellrow_get and @ref evas_obj_textgrid_size_set.
 *
 * @param[in] y The rect region of cells top-left y (row).
 * @param[in] w The rect region size in number of cells (columns).
 * @param[in] h The rect region size in number of cells (rows).
 *
 * @since 1.7
 *
 * @ingroup Evas_Textgrid
 */
EOAPI void  evas_obj_textgrid_update_add(int x, int y, int w, int h);

/**
 * @brief Set the string at the given row of the given textgrid object.
 *
 * This function returns cells to the textgrid taken by
 * evas_object_textgrid_cellrow_get. The row pointer @c row should be the same
 * row pointer returned by evas_object_textgrid_cellrow_get for the same row
 * @c y.
 *
 * See also @ref evas_obj_textgrid_cellrow_get, @ref evas_obj_textgrid_size_set
 * and @ref evas_obj_textgrid_update_add.
 *
 * @param[in] row The string as a sequence of #Evas_Textgrid_Cell.
 *
 * @since 1.7
 *
 * @ingroup Evas_Textgrid
 */
EOAPI void  evas_obj_textgrid_cellrow_set(int y, const Evas_Textgrid_Cell *row);

/**
 * @brief Get the string at the given row of the given textgrid object.
 *
 * This function returns a pointer to the first cell of the line @c y of the
 * textgrid object @c obj. If @c y is not between 0 and the number of lines of
 * the grid - 1, or on error, this function return @c null.
 *
 * See also @ref evas_obj_textgrid_cellrow_set, @ref evas_obj_textgrid_size_set
 * and @ref evas_obj_textgrid_update_add.
 *
 * @param[in] y The row index of the grid.
 *
 * @return A pointer to the first cell of the given row.
 *
 * @since 1.7
 *
 * @ingroup Evas_Textgrid
 */
EOAPI Evas_Textgrid_Cell * evas_obj_textgrid_cellrow_get(int y);

/**
 * @brief The set color to the given palette at the given index of the given
 * textgrid object.
 *
 * This function sets the color for the palette of type @c pal at the index
 * @c idx of the textgrid object @c obj. The ARGB components are given by @c r,
 * @c g, @c b and @c a. This color can be used when setting the
 * #Evas_Textgrid_Cell structure. The components must set a pre-multiplied
 * color. If pal is #EVAS_TEXTGRID_PALETTE_NONE or #EVAS_TEXTGRID_PALETTE_LAST,
 * or if @c idx is not between 0 and 255, or on error, this function does
 * nothing. The color components are clamped between 0 and 255. If @c idx is
 * greater than the latest set color, the colors between this last index and
 * @c idx - 1 are set to black (0, 0, 0, 0).
 *
 * See also @ref evas_obj_textgrid_palette_get.
 *
 * @param[in] idx The index of the paletter to which the color is stored.
 * @param[in] r The red component of the color.
 * @param[in] g The green component of the color.
 * @param[in] b The blue component of the color.
 * @param[in] a The alpha component of the color.
 *
 * @since 1.7
 *
 * @ingroup Evas_Textgrid
 */
EOAPI void  evas_obj_textgrid_palette_set(Evas_Textgrid_Palette pal, int idx, int r, int g, int b, int a);

/**
 * @brief The retrieve color to the given palette at the given index of the
 * given textgrid object.
 *
 * This function retrieves the color for the palette of type @c pal at the
 * index @c idx of the textgrid object @c obj. The ARGB components are stored
 * in the buffers @c r, @c g, @c b and @c a. If @c idx is not between 0 and the
 * index of the latest set color, or if @c pal is #EVAS_TEXTGRID_PALETTE_NONE
 * or #EVAS_TEXTGRID_PALETTE_LAST, the values of the components are 0. @c r,
 * @c g, @c b and @c a can be @c null.
 *
 * See also @ref evas_obj_textgrid_palette_set.
 *
 * @param[in] idx The index of the palette to which the color is stored.
 * @param[out] r A pointer to the red component of the color.
 * @param[out] g A pointer to the green component of the color.
 * @param[out] b A pointer to the blue component of the color.
 * @param[out] a A pointer to the alpha component of the color.
 *
 * @since 1.7
 *
 * @ingroup Evas_Textgrid
 */
EOAPI void  evas_obj_textgrid_palette_get(Evas_Textgrid_Palette pal, int idx, int *r, int *g, int *b, int *a);


#endif
