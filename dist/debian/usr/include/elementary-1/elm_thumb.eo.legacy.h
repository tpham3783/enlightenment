#ifndef _ELM_THUMB_EO_LEGACY_H_
#define _ELM_THUMB_EO_LEGACY_H_

#ifndef _ELM_THUMB_EO_CLASS_TYPE
#define _ELM_THUMB_EO_CLASS_TYPE

typedef Eo Elm_Thumb;

#endif

#ifndef _ELM_THUMB_EO_TYPES
#define _ELM_THUMB_EO_TYPES


#endif

/**
 * Set the compression for the thumb object.
 * @since 1.8
 *
 * @see elm_thumb_file_set()
 *
 * @ingroup Thumb
 *
 * @param[in] compress The compression of the thumb.
 */
EAPI void elm_thumb_compress_set(Elm_Thumb *obj, int compress);

/**
 * Get the compression of the thumb object.
 * @since 1.8
 *
 * @return getting The compress setting.
 *
 * @see elm_thumb_compress_set()
 *
 * @ingroup Thumb
 *
 * @param[out] compress The compression of the thumb.
 */
EAPI void elm_thumb_compress_get(const Elm_Thumb *obj, int *compress);

/**
 * Set the format for the thumb object.
 * @since 1.8
 *
 * @see elm_thumb_file_set()
 *
 * @ingroup Thumb
 *
 * @param[in] format The format setting.
 */
EAPI void elm_thumb_format_set(Elm_Thumb *obj, Ethumb_Thumb_Format format);

/**
 * Get the format of the thumb object.
 * @since 1.8
 *
 * @return getting The Format setting.
 *
 * @see elm_thumb_format_set()
 *
 * @ingroup Thumb
 */
EAPI Ethumb_Thumb_Format elm_thumb_format_get(const Elm_Thumb *obj);

/**
 * Set the animation state for the thumb object. If its content is an animated
 * video, you may start/stop the animation or tell it to play continuously and
 * looping.
 *
 * @see elm_thumb_file_set()
 *
 * @ingroup Thumb
 *
 * @param[in] setting The animation setting.
 */
EAPI void elm_thumb_animate_set(Elm_Thumb *obj, Elm_Thumb_Animation_Setting setting);

/**
 * Get the animation state for the thumb object.
 *
 * @return getting The animation setting or #ELM_THUMB_ANIMATION_LAST,
 * on errors.
 *
 * @see elm_thumb_animate_set()
 *
 * @ingroup Thumb
 */
EAPI Elm_Thumb_Animation_Setting elm_thumb_animate_get(const Elm_Thumb *obj);

/**
 * Set the FDO size for the thumb object.
 * @since 1.8
 *
 * @see elm_thumb_file_set()
 *
 * @ingroup Thumb
 *
 * @param[in] size The FDO size setting.
 */
EAPI void elm_thumb_fdo_size_set(Elm_Thumb *obj, Ethumb_Thumb_FDO_Size size);

/**
 * Get the fdo size of the thumb object.
 * @since 1.8
 *
 * @return getting The FDO size setting.
 *
 * @see elm_thumb_fdo_size_set()
 *
 * @ingroup Thumb
 */
EAPI Ethumb_Thumb_FDO_Size elm_thumb_fdo_size_get(const Elm_Thumb *obj);

/**
 * Set the orientation for the thumb object.
 * @since 1.8
 *
 * @see elm_thumb_file_set()
 *
 * @ingroup Thumb
 *
 * @param[in] orient The orientation setting.
 */
EAPI void elm_thumb_orientation_set(Elm_Thumb *obj, Ethumb_Thumb_Orientation orient);

/**
 * Get the orientation of the thumb object.
 * @since 1.8
 *
 * @return getting The orientation setting.
 *
 * @see elm_thumb_orientation_set()
 *
 * @ingroup Thumb
 */
EAPI Ethumb_Thumb_Orientation elm_thumb_orientation_get(const Elm_Thumb *obj);

/**
 * Make the thumbnail 'editable'.
 *
 * This means the thumbnail is a valid drag target for drag and drop, and can be
 * cut or pasted too.
 *
 * @see elm_thumb_editable_get()
 *
 * @ingroup Thumb
 *
 * @param[in] edit Turn on or off editability. Default is @c EINA_FALSE.
 */
EAPI Eina_Bool elm_thumb_editable_set(Elm_Thumb *obj, Eina_Bool edit);

/**
 * Make the thumbnail 'editable'.
 *
 * @return Editability.
 *
 * This means the thumbnail is a valid drag target for drag and drop, and can be
 * cut or pasted too.
 *
 * @see elm_thumb_editable_set()
 *
 * @ingroup Thumb
 */
EAPI Eina_Bool elm_thumb_editable_get(const Elm_Thumb *obj);

/**
 * Set the aspect for the thumb object.
 * @since 1.8
 *
 * @see elm_thumb_file_set()
 *
 * @ingroup Thumb
 *
 * @param[in] aspect The aspect setting.
 */
EAPI void elm_thumb_aspect_set(Elm_Thumb *obj, Ethumb_Thumb_Aspect aspect);

/**
 * Get the aspect of the thumb object.
 * @since 1.8
 *
 * @return getting The aspect setting.
 *
 * @see elm_thumb_aspect_set()
 *
 * @ingroup Thumb
 */
EAPI Ethumb_Thumb_Aspect elm_thumb_aspect_get(const Elm_Thumb *obj);

/**
 * Set the quality for the thumb object.
 * @since 1.8
 *
 * @see elm_thumb_file_set()
 *
 * @ingroup Thumb
 *
 * @param[in] quality The quality of the thumb.
 */
EAPI void elm_thumb_quality_set(Elm_Thumb *obj, int quality);

/**
 * Get the quality of the thumb object.
 * @since 1.8
 *
 * @return getting The quality setting.
 *
 * @see elm_thumb_quality_set()
 *
 * @ingroup Thumb
 *
 * @param[out] quality The quality of the thumb.
 */
EAPI void elm_thumb_quality_get(const Elm_Thumb *obj, int *quality);

/**
 * Set the size for the thumb object.
 * @since 1.8
 *
 * @see elm_thumb_file_set()
 *
 * @ingroup Thumb
 *
 * @param[in] tw The width of the thumb.
 * @param[in] th The height of the thumb.
 */
EAPI void elm_thumb_size_set(Elm_Thumb *obj, int tw, int th);

/**
 * Get the size of the thumb object.
 * @since 1.8
 *
 * @return getting The size setting.
 *
 * @see elm_thumb_size_set()
 *
 * @ingroup Thumb
 *
 * @param[out] tw The width of the thumb.
 * @param[out] th The height of the thumb.
 */
EAPI void elm_thumb_size_get(const Elm_Thumb *obj, int *tw, int *th);

/**
 * Set the crop alignment for the thumb object.
 * @since 1.8
 *
 * @see elm_thumb_file_set()
 *
 * @ingroup Thumb
 *
 * @param[in] cropx The x coordinate of the crop.
 * @param[in] cropy The y coordinate of the crop.
 */
EAPI void elm_thumb_crop_align_set(Elm_Thumb *obj, double cropx, double cropy);

/**
 * Get the crop alignment of the thumb object.
 * @since 1.8
 *
 * @return getting The crop align setting.
 *
 * @see elm_thumb_crop_align_set()
 *
 * @ingroup Thumb
 *
 * @param[out] cropx The x coordinate of the crop.
 * @param[out] cropy The y coordinate of the crop.
 */
EAPI void elm_thumb_crop_align_get(const Elm_Thumb *obj, double *cropx, double *cropy);

/**
 * Get the path and key to the image or video thumbnail generated by ethumb.
 *
 * One just needs to make sure that the thumbnail was generated before getting
 * its path; otherwise, the path will be NULL. One way to do that is by asking
 * for the path when/after the "generate,stop" smart callback is called.
 *
 * @see elm_thumb_file_get()
 *
 * @ingroup Thumb
 *
 * @param[out] file Pointer to thumb path.
 * @param[out] key Pointer to thumb key.
 */
EAPI void elm_thumb_path_get(const Elm_Thumb *obj, const char **file, const char **key);

/**
 * Reload thumbnail if it was generated before.
 *
 * This is useful if the ethumb client configuration changed, like its
 * size, aspect or any other property one set in the handle returned
 * by elm_thumb_ethumb_client_get().
 *
 * If the options didn't change, the thumbnail won't be generated again, but
 * the old one will still be used.
 *
 * @see elm_thumb_file_set()
 *
 * @ingroup Thumb
 * 
 */
EAPI void elm_thumb_reload(Elm_Thumb *obj);

#endif
