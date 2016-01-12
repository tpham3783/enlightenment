#ifndef _EFL_GFX_GRADIENT_LINEAR_EO_H_
#define _EFL_GFX_GRADIENT_LINEAR_EO_H_

#ifndef _EFL_GFX_GRADIENT_LINEAR_EO_CLASS_TYPE
#define _EFL_GFX_GRADIENT_LINEAR_EO_CLASS_TYPE

typedef Eo Efl_Gfx_Gradient_Linear;

#endif

#ifndef _EFL_GFX_GRADIENT_LINEAR_EO_TYPES
#define _EFL_GFX_GRADIENT_LINEAR_EO_TYPES


#endif
#define EFL_GFX_GRADIENT_LINEAR_INTERFACE efl_gfx_gradient_linear_interface_get()

EAPI const Eo_Class *efl_gfx_gradient_linear_interface_get(void) EINA_CONST;

/**
 * @brief Sets the start point of this linear gradient.
 *
 * @param[in] x x co-ordinate of start point
 * @param[in] y y co-ordinate of start point
 *
 * @ingroup Efl_Gfx_Gradient_Linear
 */
EOAPI void efl_gfx_gradient_linear_start_set(double x, double y);

/**
 * @brief Gets the start point of this linear gradient.
 *
 * @param[out] x x co-ordinate of start point
 * @param[out] y y co-ordinate of start point
 *
 * @ingroup Efl_Gfx_Gradient_Linear
 */
EOAPI void efl_gfx_gradient_linear_start_get(double *x, double *y);

/**
 * @brief Sets the end point of this linear gradient.
 *
 * @param[in] x x co-ordinate of end point
 * @param[in] y y co-ordinate of end point
 *
 * @ingroup Efl_Gfx_Gradient_Linear
 */
EOAPI void efl_gfx_gradient_linear_end_set(double x, double y);

/**
 * @brief Gets the end point of this linear gradient.
 *
 * @param[out] x x co-ordinate of end point
 * @param[out] y y co-ordinate of end point
 *
 * @ingroup Efl_Gfx_Gradient_Linear
 */
EOAPI void efl_gfx_gradient_linear_end_get(double *x, double *y);


#endif
