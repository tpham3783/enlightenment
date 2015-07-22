#ifndef _EVAS_CANVAS3D_TEXTURE_EO_H_
#define _EVAS_CANVAS3D_TEXTURE_EO_H_

#ifndef _EVAS_CANVAS3D_TEXTURE_EO_CLASS_TYPE
#define _EVAS_CANVAS3D_TEXTURE_EO_CLASS_TYPE

typedef Eo Evas_Canvas3D_Texture;

#endif

#ifndef _EVAS_CANVAS3D_TEXTURE_EO_TYPES
#define _EVAS_CANVAS3D_TEXTURE_EO_TYPES


#endif
#define EVAS_CANVAS3D_TEXTURE_CLASS evas_canvas3d_texture_class_get()

EAPI const Eo_Class *evas_canvas3d_texture_class_get(void) EINA_CONST;

/**
 * Set the visibility flag of the source evas object of the given texture.
 *
 * Recommend to call evas_object_show() on the source object and controll the
 * visibility using this function.
 *
 * By default, source object is visible.
 *
 * @see evas_canvas3d_texture_source_set()
 *
 * @ingroup Evas_Canvas3D_Texture
 *
 * @param[in] visible @c EINA_TRUE for visible, @c EINA_FALSE for invisible.
 */
EOAPI void  evas_canvas3d_texture_source_visible_set(Eina_Bool visible);

/**
 * Get the visibility flag of the source evas object of the given texture.
 *
 * @see evas_canvas3d_texture_source_visible_set()
 *
 * @ingroup Evas_Canvas3D_Texture
 */
EOAPI Eina_Bool  evas_canvas3d_texture_source_visible_get(void);

/**
 * Set enable flag to generation texture unit with support atlas.
 *
 * Use this flag only in case not normalize texture coordinates.
 *
 * By default, is enabled.
 *
 * @ingroup Evas_Canvas3D_Texture
 *
 * @param[in] use_atlas @c EINA_TRUE for enable, @c EINA_FALSE for disable.
 */
EOAPI void  evas_canvas3d_texture_atlas_enable_set(Eina_Bool use_atlas);

/**
 * Get enable flag of generation texture unit with support atlas.
 *
 * @ingroup Evas_Canvas3D_Texture
 */
EOAPI Eina_Bool  evas_canvas3d_texture_atlas_enable_get(void);

/**
 * Set the data of the given texture.
 *
 * @see evas_canvas3d_texture_file_set()
 *
 * @ingroup Evas_Canvas3D_Texture
 * 
 *
 * @param[in] color_format Color format of the texture.
 * @param[in] w Width of the data.
 * @param[in] h Height of the data.
 * @param[in] data Pointer to the data.
 */
EOAPI void  evas_canvas3d_texture_data_set(Evas_Colorspace color_format, int w, int h, const void *data);

/**
 * Set the data of the given texture from file.
 *
 * @ingroup Evas_Canvas3D_Texture
 * 
 *
 * @param[in] file Path to the image file.
 * @param[in] key Key in the image file.
 */
EOAPI void  evas_canvas3d_texture_file_set(const char *file, const char *key);

/**
 * Set the data of the given texture from an evas object.
 *
 * Evas 3D support using existing evas object as a texture source. This feature
 * make it possible using any exisiting evas object inside 3D scene.
 *
 * @see evas_canvas3d_texture_source_visible_set
 *
 * @ingroup Evas_Canvas3D_Texture
 * 
 *
 * @param[in] source Source evas object to be used as the texture data.
 */
EOAPI void  evas_canvas3d_texture_source_set(Evas_Object *source);

/**
 * Get the color format of the given texture.
 *
 * EVAS_CANVAS3D_COLOR_FORMAT_RGBA will be returned if the texture has source object.
 * Otherwise, the color format of the data will be returned.
 *
 * @see evas_canvas3d_texture_data_set()
 * @see evas_canvas3d_texture_file_set()
 * @see evas_canvas3d_texture_source_set()
 *
 * @ingroup Evas_Canvas3D_Texture
 * 
 */
EOAPI Evas_Colorspace  evas_canvas3d_texture_color_format_get(void);

/**
 * Get the size of the given texture.
 *
 * If the texture has source object, the size of the source object will be
 * returned. Otherwise, the size of the data (or image file) will be returned.
 *
 * @see evas_canvas3d_texture_data_set()
 * @see evas_canvas3d_texture_file_set()
 * @see evas_canvas3d_texture_source_set()
 *
 * @ingroup Evas_Canvas3D_Texture
 * 
 *
 * @param[out] w Pointer to receive the width of the texture size.
 * @param[out] h Pointer to receive the height of the texture size.
 */
EOAPI void  evas_canvas3d_texture_size_get(int *w, int *h);

/**
 * Set the wrap mode of the given texture.
 * If the texture coordinate exceed range [0.0, 1.0] the values are modified
 * according to the wrap mode.
 *
 * Default wrap modes are both EVAS_CANVAS3D_WRAP_MODE_CLAMP for s and t.
 *
 * @ingroup Evas_Canvas3D_Texture
 * 
 *
 * @param[in] s Wrap mode for S-axis.
 * @param[in] t Wrap mode for T-axis.
 */
EOAPI void  evas_canvas3d_texture_wrap_set(Evas_Canvas3D_Wrap_Mode s, Evas_Canvas3D_Wrap_Mode t);

/**
 * Get the wrap mode of the given texture.
 *
 * @see evas_canvas3d_texture_wrap_set()
 *
 * @ingroup Evas_Canvas3D_Texture
 * 
 *
 * @param[out] s Pointer to receive S-axis wrap mode.
 * @param[out] t Pointer to receive T-axis wrap mode.
 */
EOAPI void  evas_canvas3d_texture_wrap_get(Evas_Canvas3D_Wrap_Mode *s, Evas_Canvas3D_Wrap_Mode *t);

/**
 * Set the filter of the given texture.
 *
 * Default filters are both EVAS_CANVAS3D_TEXTURE_FILTER_NEAREST for s and t.
 *
 * @ingroup Evas_Canvas3D_Texture
 * 
 *
 * @param[in] min Minification filter used when down-scaling.
 * @param[in] mag Magnification filter used when up-scaling.
 */
EOAPI void  evas_canvas3d_texture_filter_set(Evas_Canvas3D_Texture_Filter min, Evas_Canvas3D_Texture_Filter mag);

/**
 * Get the filter of the given texture.
 *
 * @param texture       The given texture.
 * @param min           Pointer to receive the minification filter.
 * @param mag           Pointer to receive the magnification filter.
 *
 * @see evas_canvas3d_texture_filter_set()
 *
 * @ingroup Evas_Canvas3D_Texture
 * 
 *
 * @param[out] min Pointer to receive the minification filter.
 * @param[out] mag Pointer to receive the magnification filter.
 */
EOAPI void  evas_canvas3d_texture_filter_get(Evas_Canvas3D_Texture_Filter *min, Evas_Canvas3D_Texture_Filter *mag);


#endif
