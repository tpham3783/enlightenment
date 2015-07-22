#ifndef _ECTOR_SOFTWARE_SURFACE_EO_H_
#define _ECTOR_SOFTWARE_SURFACE_EO_H_

#ifndef _ECTOR_SOFTWARE_SURFACE_EO_CLASS_TYPE
#define _ECTOR_SOFTWARE_SURFACE_EO_CLASS_TYPE

typedef Eo Ector_Software_Surface;

#endif

#ifndef _ECTOR_SOFTWARE_SURFACE_EO_TYPES
#define _ECTOR_SOFTWARE_SURFACE_EO_TYPES


#endif
#define ECTOR_SOFTWARE_SURFACE_CLASS ector_software_surface_class_get()

EAPI const Eo_Class *ector_software_surface_class_get(void) EINA_CONST;

/**
 * No description supplied.
 *
 * @param[in] ctx No description supplied.
 */
EOAPI void  ector_software_surface_context_set(Software_Rasterizer *ctx);

/**
 * No description supplied.
 */
EOAPI Software_Rasterizer * ector_software_surface_context_get(void);

/**
 * No description supplied.
 *
 * @param[in] pixels No description supplied.
 * @param[in] width No description supplied.
 * @param[in] height No description supplied.
 */
EOAPI void  ector_software_surface_set(void *pixels, unsigned int width, unsigned int height);

/**
 * No description supplied.
 *
 * @param[out] pixels No description supplied.
 * @param[out] width No description supplied.
 * @param[out] height No description supplied.
 */
EOAPI void  ector_software_surface_get(void **pixels, unsigned int *width, unsigned int *height);


#endif
