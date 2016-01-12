#ifndef _ELM_THUMB_EO_H_
#define _ELM_THUMB_EO_H_

#ifndef _ELM_THUMB_EO_CLASS_TYPE
#define _ELM_THUMB_EO_CLASS_TYPE

typedef Eo Elm_Thumb;

#endif

#ifndef _ELM_THUMB_EO_TYPES
#define _ELM_THUMB_EO_TYPES


#endif
#define ELM_THUMB_CLASS elm_thumb_class_get()

EAPI const Eo_Class *elm_thumb_class_get(void) EINA_CONST;

/**
 * @brief Set the compression for the thumb object.
 *
 * @param[in] compress The compression of the thumb.
 *
 * @since 1.8
 *
 * @ingroup Elm_Thumb
 */
EOAPI void elm_obj_thumb_compress_set(int compress);

/**
 * @brief Get the compression of the thumb object.
 *
 * @param[out] compress The compression of the thumb.
 *
 * @return Force the return type to be sure the argument doesn't become the
 * return
 *
 * @since 1.8
 *
 * @ingroup Elm_Thumb
 */
EOAPI void elm_obj_thumb_compress_get(int *compress);

/**
 * @brief Set the format for the thumb object.
 *
 * @param[in] format The format setting.
 *
 * @since 1.8
 *
 * @ingroup Elm_Thumb
 */
EOAPI void elm_obj_thumb_format_set(Ethumb_Thumb_Format format);

/**
 * @brief Get the format of the thumb object.
 *
 * @return The format setting.
 *
 * @since 1.8
 *
 * @ingroup Elm_Thumb
 */
EOAPI Ethumb_Thumb_Format elm_obj_thumb_format_get(void);

/**
 * @brief Set the animation state for the thumb object.
 *
 * If its content is an animated video, you may start/stop the animation or
 * tell it o play continuously and looping.
 *
 * @param[in] setting The animation setting or #ELM_THUMB_ANIMATION_LAST
 *
 * @ingroup Elm_Thumb
 */
EOAPI void elm_obj_thumb_animate_set(Elm_Thumb_Animation_Setting setting);

/**
 * @brief Get the animation state for the thumb object.
 *
 * @return The animation setting or #ELM_THUMB_ANIMATION_LAST
 *
 * @ingroup Elm_Thumb
 */
EOAPI Elm_Thumb_Animation_Setting elm_obj_thumb_animate_get(void);

/**
 * @brief Set the FDO size for the thumb object.
 *
 * @param[in] size The FDO size setting.
 *
 * @since 1.8
 *
 * @ingroup Elm_Thumb
 */
EOAPI void elm_obj_thumb_fdo_size_set(Ethumb_Thumb_FDO_Size size);

/**
 * @brief Get the fdo size of the thumb object.
 *
 * @return The FDO size setting.
 *
 * @since 1.8
 *
 * @ingroup Elm_Thumb
 */
EOAPI Ethumb_Thumb_FDO_Size elm_obj_thumb_fdo_size_get(void);

/**
 * @brief Set the orientation for the thumb object.
 *
 * @param[in] orient The orientation setting.
 *
 * @since 1.8
 *
 * @ingroup Elm_Thumb
 */
EOAPI void elm_obj_thumb_orientation_set(Ethumb_Thumb_Orientation orient);

/**
 * @brief Get the orientation of the thumb object.
 *
 * @return The orientation setting.
 *
 * @since 1.8
 *
 * @ingroup Elm_Thumb
 */
EOAPI Ethumb_Thumb_Orientation elm_obj_thumb_orientation_get(void);

/**
 * @brief Make the thumbnail 'editable'.
 *
 * This means the thumbnail is a valid drag target for drag and drop, and can
 * be cut or pasted too.
 *
 * @param[in] edit The editable state, default is @c false.
 *
 * @ingroup Elm_Thumb
 */
EOAPI Eina_Bool elm_obj_thumb_editable_set(Eina_Bool edit);

/**
 * @brief Get whether the thumbnail is editable.
 *
 * This means the thumbnail is a valid drag target for drag and drop, and can
 * be cut or pasted too.
 *
 * @return The editable state, default is @c false.
 *
 * @ingroup Elm_Thumb
 */
EOAPI Eina_Bool elm_obj_thumb_editable_get(void);

/**
 * @brief Set the aspect for the thumb object.
 *
 * @param[in] aspect The aspect setting.
 *
 * @since 1.8
 *
 * @ingroup Elm_Thumb
 */
EOAPI void elm_obj_thumb_aspect_set(Ethumb_Thumb_Aspect aspect);

/**
 * @brief Get the aspect of the thumb object.
 *
 * @return The aspect setting.
 *
 * @since 1.8
 *
 * @ingroup Elm_Thumb
 */
EOAPI Ethumb_Thumb_Aspect elm_obj_thumb_aspect_get(void);

/**
 * @brief Set the quality for the thumb object.
 *
 * @param[in] quality The quality of the thumb.
 *
 * @since 1.8
 *
 * @ingroup Elm_Thumb
 */
EOAPI void elm_obj_thumb_quality_set(int quality);

/**
 * @brief Get the quality of the thumb object.
 *
 * @param[out] quality The quality of the thumb.
 *
 * @since 1.8
 *
 * @ingroup Elm_Thumb
 */
EOAPI void elm_obj_thumb_quality_get(int *quality);

/**
 * @brief Set the size for the thumb object.
 *
 * @param[in] tw The width of the thumb.
 * @param[in] th The height of the thumb.
 *
 * @since 1.8
 *
 * @ingroup Elm_Thumb
 */
EOAPI void elm_obj_thumb_size_set(int tw, int th);

/**
 * @brief Get the size of the thumb object.
 *
 * @param[out] tw The width of the thumb.
 * @param[out] th The height of the thumb.
 *
 * @since 1.8
 *
 * @ingroup Elm_Thumb
 */
EOAPI void elm_obj_thumb_size_get(int *tw, int *th);

/**
 * @brief Set the crop alignment for the thumb object.
 *
 * @param[in] cropx The x coordinate of the crop.
 * @param[in] cropy The y coordinate of the crop.
 *
 * @since 1.8
 *
 * @ingroup Elm_Thumb
 */
EOAPI void elm_obj_thumb_crop_align_set(double cropx, double cropy);

/**
 * @brief Get the crop alignment of the thumb object.
 *
 * @param[out] cropx The x coordinate of the crop.
 * @param[out] cropy The y coordinate of the crop.
 *
 * @since 1.8
 *
 * @ingroup Elm_Thumb
 */
EOAPI void elm_obj_thumb_crop_align_get(double *cropx, double *cropy);

/**
 * @brief Get the path and key to the image or video thumbnail generated by
 * ethumb.
 *
 * One just needs to make sure that the thumbnail was generated before getting
 * its path; otherwise, the path will be @c null. One way to do that is by
 * asking for the path when/after the "generate,stop" smart callback is called.
 *
 * @param[out] file Pointer to thumb path.
 * @param[out] key Pointer to thumb key.
 *
 * @ingroup Elm_Thumb
 */
EOAPI void elm_obj_thumb_path_get(const char **file, const char **key);

/**
 * @brief Reload thumbnail if it was generated before.
 *
 * This is useful if the ethumb client configuration changed, like its size,
 * aspect or any other property one set in the handle returned by
 * elm_thumb_ethumb_client_get().
 *
 * If the options didn't change, the thumbnail won't be generated again, but
 * the old one will still be used.
 *
 * @ingroup Elm_Thumb
 */
EOAPI void elm_obj_thumb_reload(void);

EOAPI extern const Eo_Event_Description _ELM_THUMB_EVENT_GENERATE_ERROR;
EOAPI extern const Eo_Event_Description _ELM_THUMB_EVENT_GENERATE_START;
EOAPI extern const Eo_Event_Description _ELM_THUMB_EVENT_GENERATE_STOP;
EOAPI extern const Eo_Event_Description _ELM_THUMB_EVENT_LOAD_ERROR;
EOAPI extern const Eo_Event_Description _ELM_THUMB_EVENT_PRESS;

/**
 * No description
 */
#define ELM_THUMB_EVENT_GENERATE_ERROR (&(_ELM_THUMB_EVENT_GENERATE_ERROR))

/**
 * No description
 */
#define ELM_THUMB_EVENT_GENERATE_START (&(_ELM_THUMB_EVENT_GENERATE_START))

/**
 * No description
 */
#define ELM_THUMB_EVENT_GENERATE_STOP (&(_ELM_THUMB_EVENT_GENERATE_STOP))

/**
 * No description
 */
#define ELM_THUMB_EVENT_LOAD_ERROR (&(_ELM_THUMB_EVENT_LOAD_ERROR))

/**
 * No description
 */
#define ELM_THUMB_EVENT_PRESS (&(_ELM_THUMB_EVENT_PRESS))

#endif
