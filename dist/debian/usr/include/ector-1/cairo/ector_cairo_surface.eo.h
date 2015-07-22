#ifndef _ECTOR_CAIRO_SURFACE_EO_H_
#define _ECTOR_CAIRO_SURFACE_EO_H_

#ifndef _ECTOR_CAIRO_SURFACE_EO_CLASS_TYPE
#define _ECTOR_CAIRO_SURFACE_EO_CLASS_TYPE

typedef Eo Ector_Cairo_Surface;

#endif

#ifndef _ECTOR_CAIRO_SURFACE_EO_TYPES
#define _ECTOR_CAIRO_SURFACE_EO_TYPES


#endif
#define ECTOR_CAIRO_SURFACE_CLASS ector_cairo_surface_class_get()

EAPI const Eo_Class *ector_cairo_surface_class_get(void) EINA_CONST;

/**
 * No description supplied.
 *
 * @param[in] ctx No description supplied.
 */
EOAPI void  ector_cairo_surface_context_set(cairo_t *ctx);

/**
 * No description supplied.
 */
EOAPI cairo_t * ector_cairo_surface_context_get(void);

/**
 * No description supplied.
 *
 * @param[in] name No description supplied.
 */
EOAPI void * ector_cairo_surface_symbol_get(const char *name);


#endif
