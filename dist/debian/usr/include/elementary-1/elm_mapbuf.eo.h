#ifndef _ELM_MAPBUF_EO_H_
#define _ELM_MAPBUF_EO_H_

#ifndef _ELM_MAPBUF_EO_CLASS_TYPE
#define _ELM_MAPBUF_EO_CLASS_TYPE

typedef Eo Elm_Mapbuf;

#endif

#ifndef _ELM_MAPBUF_EO_TYPES
#define _ELM_MAPBUF_EO_TYPES


#endif
#define ELM_MAPBUF_CLASS elm_mapbuf_class_get()

EAPI const Eo_Class *elm_mapbuf_class_get(void) EINA_CONST;

/**
 * Set or unset auto flag for map rendering.
 *
 * When a ampbuf object has "auto mode" enabled, then it will enable and
 * disable map mode based on current visibility. Mapbuf will track if you show
 * or hide it AND if the object is inside the canvas viewport or not when it
 * is moved or resized. Note that if you turn automode off, then map mode
 * will be in a disabled state at this point. When you turn it on for the
 * first time, the current state will be evaluated base on current properties
 * of the mapbuf object.
 *
 * Auto mode is disabled by default.
 *
 * @ingroup Mapbuf
 *
 * @param[in] on @c EINA_TRUE to enable auto mode or @c EINA_FALSE
to disable it.
 */
EOAPI void  elm_obj_mapbuf_auto_set(Eina_Bool on);

/**
 * Get a value whether auto mode is enabled or not.
 *
 * @return @c EINA_TRUE means autso mode is enabled. @c EINA_FALSE
 * indicates it's disabled. If @p obj is @c NULL, @c EINA_FALSE is returned.
 *
 * @see elm_mapbuf_auto_set() for details.
 *
 * @ingroup Mapbuf
 */
EOAPI Eina_Bool  elm_obj_mapbuf_auto_get(void);

/**
 * Enable or disable smooth map rendering.
 *
 * This sets smoothing for map rendering. If the object is a type that has
 * its own smoothing settings, then both the smooth settings for this object
 * and the map must be turned off.
 *
 * By default smooth maps are enabled.
 *
 * @ingroup Mapbuf
 *
 * @param[in] smooth @c EINA_TRUE to enable smooth map rendering or @c EINA_FALSE
to disable it.
 */
EOAPI void  elm_obj_mapbuf_smooth_set(Eina_Bool smooth);

/**
 * Get a value whether smooth map rendering is enabled or not.
 *
 * @return @c EINA_TRUE means smooth map rendering is enabled. @c EINA_FALSE
 * indicates it's disabled. If @p obj is @c NULL, @c EINA_FALSE is returned.
 *
 * @see elm_mapbuf_smooth_set() for details.
 *
 * @ingroup Mapbuf
 */
EOAPI Eina_Bool  elm_obj_mapbuf_smooth_get(void);

/**
 * Set or unset alpha flag for map rendering.
 *
 * This sets alpha flag for map rendering. If the object is a type that has
 * its own alpha settings, then this will take precedence. Only image objects
 * have this currently. It stops alpha blending of the map area, and is
 * useful if you know the object and/or all sub-objects is 100% solid.
 *
 * Alpha is enabled by default.
 *
 * @ingroup Mapbuf
 *
 * @param[in] alpha @c EINA_TRUE to enable alpha blending or @c EINA_FALSE
to disable it.
 */
EOAPI void  elm_obj_mapbuf_alpha_set(Eina_Bool alpha);

/**
 * Get a value whether alpha blending is enabled or not.
 *
 * @return @c EINA_TRUE means alpha blending is enabled. @c EINA_FALSE
 * indicates it's disabled. If @p obj is @c NULL, @c EINA_FALSE is returned.
 *
 * @see elm_mapbuf_alpha_set() for details.
 *
 * @ingroup Mapbuf
 */
EOAPI Eina_Bool  elm_obj_mapbuf_alpha_get(void);

/**
 * Enable or disable the map.
 *
 * This enables the map that is set or disables it. On enable, the object
 * geometry will be saved, and the new geometry will change (position and
 * size) to reflect the map geometry set.
 *
 * Also, when enabled, alpha and smooth states will be used, so if the
 * content isn't solid, alpha should be enabled, for example, otherwise
 * a black rectangle will fill the content.
 *
 * When disabled, the stored map will be freed and geometry prior to
 * enabling the map will be restored.
 *
 * It's disabled by default.
 *
 * @see elm_mapbuf_alpha_set()
 * @see elm_mapbuf_smooth_set()
 *
 * @ingroup Mapbuf
 *
 * @param[in] enabled @c EINA_TRUE to enable map or @c EINA_FALSE to disable it.
 */
EOAPI void  elm_obj_mapbuf_enabled_set(Eina_Bool enabled);

/**
 * Get a value whether map is enabled or not.
 *
 * @return @c EINA_TRUE means map is enabled. @c EINA_FALSE indicates
 * it's disabled. If @p obj is @c NULL, @c EINA_FALSE is returned.
 *
 * @see elm_mapbuf_enabled_set() for details.
 *
 * @ingroup Mapbuf
 */
EOAPI Eina_Bool  elm_obj_mapbuf_enabled_get(void);

/**
 * Set the color of a vertex in the mapbuf
 *
 * This sets the color of the vertex in the mapbuf. Colors will be linearly
 * interpolated between vertex points through the mapbuf. Color will multiply
 * the "texture" pixels (like GL_MODULATE in OpenGL). The default color of
 * a vertex in a mapbuf is white solid (255, 255, 255, 255) which means it will
 * have no affect on modifying the texture pixels.
 *
 * @see evas_object_map_set()
 * @since 1.9
 * 
 *
 * @param[in] idx index of point to change. Must be smaller than mapbuf size.
 * @param[in] r red (0 - 255)
 * @param[in] g green (0 - 255)
 * @param[in] b blue (0 - 255)
 * @param[in] a alpha (0 - 255)
 */
EOAPI void  elm_obj_mapbuf_point_color_set(int idx, int r, int g, int b, int a);

/**
 * Get the color set on a vertex in the mapbuf
 *
 * This gets the color set by elm_mapbuf_point_color_set() on the given vertex
 * of the mapbuf.
 *
 * @see elm_mapbuf_point_color_set()
 *
 * @since 1.9
 * 
 *
 * @param[in] idx index of point get. Must be smaller than map size.
 * @param[out] r pointer to red return
 * @param[out] g pointer to green return
 * @param[out] b pointer to blue return
 * @param[out] a pointer to alpha return
 */
EOAPI void  elm_obj_mapbuf_point_color_get(int idx, int *r, int *g, int *b, int *a);


#endif
