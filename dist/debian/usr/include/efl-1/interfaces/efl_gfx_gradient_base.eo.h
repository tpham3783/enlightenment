#ifndef _EFL_GFX_GRADIENT_BASE_EO_H_
#define _EFL_GFX_GRADIENT_BASE_EO_H_

#ifndef _EFL_GFX_GRADIENT_BASE_EO_CLASS_TYPE
#define _EFL_GFX_GRADIENT_BASE_EO_CLASS_TYPE

typedef Eo Efl_Gfx_Gradient_Base;

#endif

#ifndef _EFL_GFX_GRADIENT_BASE_EO_TYPES
#define _EFL_GFX_GRADIENT_BASE_EO_TYPES


#endif
#define EFL_GFX_GRADIENT_BASE_INTERFACE efl_gfx_gradient_base_interface_get()

EAPI const Eo_Class *efl_gfx_gradient_base_interface_get(void) EINA_CONST;

/**
 * @brief Set the list of color stops for the gradient
 *
 * @param[in] colors color stops list
 * @param[in] length length of the list
 *
 * @ingroup Efl_Gfx_Gradient_Base
 */
EOAPI void  efl_gfx_gradient_stop_set(const Efl_Gfx_Gradient_Stop *colors, unsigned int length);

/**
 * @brief Get the list of color stops.
 *
 * @param[out] colors color stops list
 * @param[out] length length of the list
 *
 * @ingroup Efl_Gfx_Gradient_Base
 */
EOAPI void  efl_gfx_gradient_stop_get(const Efl_Gfx_Gradient_Stop **colors, unsigned int *length);

/**
 * @brief Specifies the spread method that should be used for this gradient.
 *
 * @param[in] s spread type to be used
 *
 * @ingroup Efl_Gfx_Gradient_Base
 */
EOAPI void  efl_gfx_gradient_spread_set(Efl_Gfx_Gradient_Spread s);

/**
 * @brief Returns the spread method use by this gradient. The default is
 * EFL_GFX_GRADIENT_SPREAD_PAD.
 *
 * @return spread type to be used
 *
 * @ingroup Efl_Gfx_Gradient_Base
 */
EOAPI Efl_Gfx_Gradient_Spread  efl_gfx_gradient_spread_get(void);


#endif
