#ifndef _EFL_GFX_FILL_EO_H_
#define _EFL_GFX_FILL_EO_H_

#ifndef _EFL_GFX_FILL_EO_CLASS_TYPE
#define _EFL_GFX_FILL_EO_CLASS_TYPE

typedef Eo Efl_Gfx_Fill;

#endif

#ifndef _EFL_GFX_FILL_EO_TYPES
#define _EFL_GFX_FILL_EO_TYPES


#endif
#define EFL_GFX_FILL_INTERFACE efl_gfx_fill_interface_get()

EAPI const Eo_Class *efl_gfx_fill_interface_get(void) EINA_CONST;

/**
 * @brief Sets the tiling mode for the given evas image object's fill.
 * @c EFL_GFX_FILL_RESTRICT, or @c EFL_GFX_FILL_PAD.
 *
 * @param[in] spread The current spread mode of the image object. One of
 * @c EFL_GFX_FILL_REFLECT, @c EFL_GFX_FILL_REPEAT
 *
 * @ingroup Efl_Gfx_Fill
 */
EOAPI void  efl_gfx_fill_spread_set(Efl_Gfx_Fill_Spread spread);

/**
 * @brief Retrieves the spread (tiling mode) for the given image object's fill.
 *
 * @return The current spread mode of the image object. One of
 * @c EFL_GFX_FILL_REFLECT, @c EFL_GFX_FILL_REPEAT
 *
 * @ingroup Efl_Gfx_Fill
 */
EOAPI Efl_Gfx_Fill_Spread  efl_gfx_fill_spread_get(void);

/**
 * @brief Set how to fill an image object's drawing rectangle given the (real)
 * image bound to it.
 *
 * Note that if @c w or @c h are smaller than the dimensions of @c obj, the
 * displayed image will be tiled around the object's area. To have only one
 * copy of the bound image drawn, @c x and @c y must be 0 and @c w and @c h
 * need to be the exact width and height of the image object itself,
 * respectively.
 *
 * Warning: The default values for the fill parameters are @c x = 0, @c y = 0,
 * @c w = 0 and @c h = 0. Thus, if you're not using the
 * evas_object_image_filled_add() helper and want your image displayed, you'll
 * have to set valid values with this function on your object.
 *
 * Note: evas_object_image_filled_set() is a helper function which will
 * override the values set here automatically, for you, in a given way.
 *
 * @param[in] x The x coordinate (from the top left corner of the bound image)
 * to start drawing from.
 * @param[in] y The y coordinate (from the top left corner of the bound image)
 * to start drawing from.
 * @param[in] w The width the bound image will be displayed at.
 * @param[in] h The height the bound image will be displayed at.
 *
 * @ingroup Efl_Gfx_Fill
 */
EOAPI void  efl_gfx_fill_set(int x, int y, int w, int h);

/**
 * @brief Retrieve how an image object is to fill its drawing rectangle, given
 * the (real) image bound to it.
 *
 * Note: Use @c null pointers on the fill components you're not interested in:
 * they'll be ignored by the function.
 *
 * See @ref efl_gfx_fill_set() for more details.
 *
 * @param[out] x The x coordinate (from the top left corner of the bound image)
 * to start drawing from.
 * @param[out] y The y coordinate (from the top left corner of the bound image)
 * to start drawing from.
 * @param[out] w The width the bound image will be displayed at.
 * @param[out] h The height the bound image will be displayed at.
 *
 * @ingroup Efl_Gfx_Fill
 */
EOAPI void  efl_gfx_fill_get(int *x, int *y, int *w, int *h);


#endif
