#ifndef _EFL_GFX_GRADIENT_RADIAL_EO_H_
#define _EFL_GFX_GRADIENT_RADIAL_EO_H_

#ifndef _EFL_GFX_GRADIENT_RADIAL_EO_CLASS_TYPE
#define _EFL_GFX_GRADIENT_RADIAL_EO_CLASS_TYPE

typedef Eo Efl_Gfx_Gradient_Radial;

#endif

#ifndef _EFL_GFX_GRADIENT_RADIAL_EO_TYPES
#define _EFL_GFX_GRADIENT_RADIAL_EO_TYPES


#endif
#define EFL_GFX_GRADIENT_RADIAL_INTERFACE efl_gfx_gradient_radial_interface_get()

EAPI const Eo_Class *efl_gfx_gradient_radial_interface_get(void) EINA_CONST;

/**
 * @brief Sets the center of this radial gradient.
 *
 * @param[in] x x co-ordinate of center point
 * @param[in] y y co-ordinate of center point
 *
 * @ingroup Efl_Gfx_Gradient_Radial
 */
EOAPI void efl_gfx_gradient_radial_center_set(double x, double y);

/**
 * @brief Gets the center of this radial gradient.
 *
 * @param[out] x x co-ordinate of center point
 * @param[out] y y co-ordinate of center point
 *
 * @ingroup Efl_Gfx_Gradient_Radial
 */
EOAPI void efl_gfx_gradient_radial_center_get(double *x, double *y);

/**
 * @brief Sets the center radius of this radial gradient.
 *
 * @param[in] r center radius
 *
 * @ingroup Efl_Gfx_Gradient_Radial
 */
EOAPI void efl_gfx_gradient_radial_radius_set(double r);

/**
 * @brief Gets the center radius of this radial gradient.
 *
 * @return center radius
 *
 * @ingroup Efl_Gfx_Gradient_Radial
 */
EOAPI double efl_gfx_gradient_radial_radius_get(void);

/**
 * @brief Sets the focal point of this radial gradient.
 *
 * @param[in] x x co-ordinate of focal point
 * @param[in] y y co-ordinate of focal point
 *
 * @ingroup Efl_Gfx_Gradient_Radial
 */
EOAPI void efl_gfx_gradient_radial_focal_set(double x, double y);

/**
 * @brief Gets the focal point of this radial gradient.
 *
 * @param[out] x x co-ordinate of focal point
 * @param[out] y y co-ordinate of focal point
 *
 * @ingroup Efl_Gfx_Gradient_Radial
 */
EOAPI void efl_gfx_gradient_radial_focal_get(double *x, double *y);


#endif
