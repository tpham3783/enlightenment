#ifndef _EFL_GFX_VIEW_EO_H_
#define _EFL_GFX_VIEW_EO_H_

#ifndef _EFL_GFX_VIEW_EO_CLASS_TYPE
#define _EFL_GFX_VIEW_EO_CLASS_TYPE

typedef Eo Efl_Gfx_View;

#endif

#ifndef _EFL_GFX_VIEW_EO_TYPES
#define _EFL_GFX_VIEW_EO_TYPES


#endif
#define EFL_GFX_VIEW_INTERFACE efl_gfx_view_interface_get()

EAPI const Eo_Class *efl_gfx_view_interface_get(void) EINA_CONST;

/**
 * @brief Sets the size of the given image object.
 *
 * This function will scale down or crop the image so that it is treated as if
 * it were at the given size. If the size given is smaller than the image, it
 * will be cropped. If the size given is larger, then the image will be treated
 * as if it were in the upper left hand corner of a larger image that is
 * otherwise transparent.
 *
 * @param[in] w The new width of the image.
 * @param[in] h The new height of the image.
 *
 * @ingroup Efl_Gfx_View
 */
EOAPI void  efl_gfx_view_size_set(int w, int h);

/**
 * @brief Retrieves the size of the given image object.
 *
 * See @ref efl_gfx_view_size_set for more details.
 *
 * @param[out] w The new width of the image.
 * @param[out] h The new height of the image.
 *
 * @ingroup Efl_Gfx_View
 */
EOAPI void  efl_gfx_view_size_get(int *w, int *h);


#endif
