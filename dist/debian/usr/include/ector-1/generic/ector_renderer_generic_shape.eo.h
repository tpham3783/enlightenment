#ifndef _ECTOR_RENDERER_GENERIC_SHAPE_EO_H_
#define _ECTOR_RENDERER_GENERIC_SHAPE_EO_H_

#ifndef _ECTOR_RENDERER_GENERIC_SHAPE_EO_CLASS_TYPE
#define _ECTOR_RENDERER_GENERIC_SHAPE_EO_CLASS_TYPE

typedef Eo Ector_Renderer_Generic_Shape;

#endif

#ifndef _ECTOR_RENDERER_GENERIC_SHAPE_EO_TYPES
#define _ECTOR_RENDERER_GENERIC_SHAPE_EO_TYPES


#endif
#define ECTOR_RENDERER_GENERIC_SHAPE_MIXIN ector_renderer_generic_shape_mixin_get()

EAPI const Eo_Class *ector_renderer_generic_shape_mixin_get(void) EINA_CONST;

/**
 * No description supplied.
 *
 * @param[in] r No description supplied.
 */
EOAPI void  ector_renderer_shape_fill_set(const Ector_Renderer *r);

/**
 * No description supplied.
 */
EOAPI const Ector_Renderer * ector_renderer_shape_fill_get(void);

/**
 * No description supplied.
 *
 * @param[in] r No description supplied.
 */
EOAPI void  ector_renderer_shape_stroke_fill_set(const Ector_Renderer *r);

/**
 * No description supplied.
 */
EOAPI const Ector_Renderer * ector_renderer_shape_stroke_fill_get(void);

/**
 * No description supplied.
 *
 * @param[in] r No description supplied.
 */
EOAPI void  ector_renderer_shape_stroke_marker_set(const Ector_Renderer *r);

/**
 * No description supplied.
 */
EOAPI const Ector_Renderer * ector_renderer_shape_stroke_marker_get(void);


#endif
