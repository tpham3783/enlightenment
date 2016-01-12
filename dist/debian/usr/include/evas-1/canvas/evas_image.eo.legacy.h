#ifndef _EVAS_IMAGE_EO_LEGACY_H_
#define _EVAS_IMAGE_EO_LEGACY_H_

#ifndef _EVAS_IMAGE_EO_CLASS_TYPE
#define _EVAS_IMAGE_EO_CLASS_TYPE

typedef Eo Evas_Image;

#endif

#ifndef _EVAS_IMAGE_EO_TYPES
#define _EVAS_IMAGE_EO_TYPES


#endif

/**
 * @brief Set the DPI resolution of an image object's source image.
 *
 * This function sets the DPI resolution of a given loaded canvas image. Most
 * useful for the SVG image loader.
 *
 * @param[in] dpi The DPI resolution.
 *
 * @ingroup Evas_Image
 */
EAPI void evas_object_image_load_dpi_set(Evas_Image *obj, double dpi);

/**
 * @brief Get the DPI resolution of a loaded image object in the canvas.
 *
 * This function returns the DPI resolution of the given canvas image.
 *
 * @return The DPI resolution.
 *
 * @ingroup Evas_Image
 */
EAPI double evas_object_image_load_dpi_get(const Evas_Image *obj);

/**
 * @brief Clip the proxy object with the source object's clipper.
 *
 * @param[in] source_clip Whether @c obj is clipped by the source clipper
 * ($true) or not ($false).
 *
 * @since 1.8
 *
 * @ingroup Evas_Image
 */
EAPI void evas_object_image_source_clip_set(Evas_Image *obj, Eina_Bool source_clip);

/**
 * @brief Determine whether an object is clipped by source object's clipper.
 *
 * @return Whether @c obj is clipped by the source clipper ($true) or not
 * ($false).
 *
 * @since 1.8
 *
 * @ingroup Evas_Image
 */
EAPI Eina_Bool evas_object_image_source_clip_get(const Evas_Image *obj);

/**
 * @brief Set the source object on an image object to used as a proxy.
 *
 * If an image object is set to behave as a proxy, it will mirror the rendering
 * contents of a given source object in its drawing region, without affecting
 * that source in any way. The source must be another valid Evas object. Other
 * effects may be applied to the proxy, such as a map (see @ref
 * evas_object_map_set) to create a reflection of the original object (for
 * example).
 *
 * Any existing source object on @c obj will be removed after this call.
 * Setting @c src to @c null clears the proxy object (not in "proxy state"
 * anymore).
 *
 * @warning You cannot set a proxy as another proxy's source.
 *
 * @param[in] src Source object to use for the proxy.
 *
 * @ingroup Evas_Image
 */
EAPI Eina_Bool evas_object_image_source_set(Evas_Image *obj, Evas_Object *src);

/**
 * @brief Get the current source object of an image object.
 *
 * @return Source object to use for the proxy.
 *
 * @ingroup Evas_Image
 */
EAPI Evas_Object *evas_object_image_source_get(const Evas_Image *obj);

/**
 * @brief Set whether the image object's fill property should track the
 * object's size.
 *
 * If @c setting is @c true, then every @ref evas_object_resize will
 * automatically trigger a call to @ref evas_object_image_fill_set with the
 * that new size (and 0, 0 as source image's origin), so the bound image will
 * fill the whole object's area.
 *
 * @param[in] filled @c true to make the fill property follow object size or
 * @c false otherwise.
 *
 * @ingroup Evas_Image
 */
EAPI void evas_object_image_filled_set(Evas_Image *obj, Eina_Bool filled);

/**
 * @brief Retrieve whether the image object's fill property should track the
 * object's size.
 *
 * Returns @c true if it is tracking, @c false if not (and @ref
 * evas_object_fill_set must be called manually).
 *
 * @return @c true to make the fill property follow object size or @c false
 * otherwise.
 *
 * @ingroup Evas_Image
 */
EAPI Eina_Bool evas_object_image_filled_get(const Evas_Image *obj);

/**
 * @brief Set the content hint setting of a given image object of the canvas.
 *
 * This function sets the content hint value of the given image of the canvas.
 * For example, if you're on the GL engine and your driver implementation
 * supports it, setting this hint to #EVAS_IMAGE_CONTENT_HINT_DYNAMIC will make
 * it need zero copies at texture upload time, which is an "expensive"
 * operation.
 *
 * @param[in] hint The content hint value, one of the #Evas_Image_Content_Hint
 * ones.
 *
 * @ingroup Evas_Image
 */
EAPI void evas_object_image_content_hint_set(Evas_Image *obj, Evas_Image_Content_Hint hint);

/**
 * @brief Get the content hint setting of a given image object of the canvas.
 *
 * This returns #EVAS_IMAGE_CONTENT_HINT_NONE on error.
 *
 * @return The content hint value, one of the #Evas_Image_Content_Hint ones.
 *
 * @ingroup Evas_Image
 */
EAPI Evas_Image_Content_Hint evas_object_image_content_hint_get(const Evas_Image *obj);

/**
 * @brief Inform a given image object to load a selective region of its source
 * image.
 *
 * This function is useful when one is not showing all of an image's area on
 * its image object.
 *
 * @note The image loader for the image format in question has to support
 * selective region loading in order to this function to take effect.
 *
 * @param[in] x X-offset of the region to be loaded.
 * @param[in] y Y-offset of the region to be loaded.
 * @param[in] w Width of the region to be loaded.
 * @param[in] h Height of the region to be loaded.
 *
 * @ingroup Evas_Image
 */
EAPI void evas_object_image_load_region_set(Evas_Image *obj, int x, int y, int w, int h);

/**
 * @brief Retrieve the coordinates of a given image object's selective (source
 * image) load region.
 *
 * @note Use @c null pointers on the coordinates you're not interested in:
 * they'll be ignored by the function.
 *
 * @param[out] x X-offset of the region to be loaded.
 * @param[out] y Y-offset of the region to be loaded.
 * @param[out] w Width of the region to be loaded.
 * @param[out] h Height of the region to be loaded.
 *
 * @ingroup Evas_Image
 */
EAPI void evas_object_image_load_region_get(const Evas_Image *obj, int *x, int *y, int *w, int *h);

/**
 * @brief Enable or disable alpha channel usage on the given image object.
 *
 * This function sets a flag on an image object indicating whether or not to
 * use alpha channel data. A value of @c true makes it use alpha channel data,
 * and @c false makes it ignore that data. Note that this has nothing to do
 * with an object's color as  manipulated by @ref evas_object_color_set.
 *
 * @param[in] alpha Whether to use alpha channel ($true) data or not ($false).
 *
 * @ingroup Evas_Image
 */
EAPI void evas_object_image_alpha_set(Evas_Image *obj, Eina_Bool alpha);

/**
 * @brief Retrieve whether alpha channel data is being used on the given image
 * object.
 *
 * This function returns @c true if the image object's alpha channel is being
 * used, or @c false otherwise.
 *
 * @return Whether to use alpha channel ($true) data or not ($false).
 *
 * @ingroup Evas_Image
 */
EAPI Eina_Bool evas_object_image_alpha_get(const Evas_Image *obj);

/**
 * @brief Set the dimensions for an image object's border, a region which won't
 * ever be scaled together with its center.
 *
 * When Evas is rendering, an image source may be scaled to fit the size of its
 * image object. This function sets an area from the borders of the image
 * inwards which is not to be scaled. This function is useful for making frames
 * and for widget theming, where, for example, buttons may be of varying sizes,
 * but their border size must remain constant.
 *
 * The units used for @c l, @c r, @c t and @c b are canvas units.
 *
 * @note The border region itself may be scaled by the
 * @ref evas_object_image_border_scale_set function.
 *
 * @note By default, image objects have no borders set, i. e. @c l, @c r, @c t
 * and @c b start as 0.
 *
 * @param[in] l The border's left width.
 * @param[in] r The border's right width.
 * @param[in] t The border's top width.
 * @param[in] b The border's bottom width.
 *
 * @ingroup Evas_Image
 */
EAPI void evas_object_image_border_set(Evas_Image *obj, int l, int r, int t, int b);

/**
 * @brief Retrieve the dimensions for an image object's border, a region which
 * won't ever be scaled together with its center.
 *
 * @note Use @c null pointers on the border components you're not interested
 * in: they'll be ignored by the function.
 *
 * @param[out] l The border's left width.
 * @param[out] r The border's right width.
 * @param[out] t The border's top width.
 * @param[out] b The border's bottom width.
 *
 * @ingroup Evas_Image
 */
EAPI void evas_object_image_border_get(const Evas_Image *obj, int *l, int *r, int *t, int *b);

/**
 * @brief Sets the scaling factor (multiplier) for the borders of an image
 * object.
 *
 * @param[in] scale The scale factor (default is 1.0 - i.e. no scaling).
 *
 * @ingroup Evas_Image
 */
EAPI void evas_object_image_border_scale_set(Evas_Image *obj, double scale);

/**
 * @brief Retrieves the scaling factor (multiplier) for the borders of an image
 * object.
 *
 * @return The scale factor (default is 1.0 - i.e. no scaling).
 *
 * @ingroup Evas_Image
 */
EAPI double evas_object_image_border_scale_get(const Evas_Image *obj);

/**
 * @brief Mark whether the given image object is dirty and needs to request its
 * pixels.
 *
 * This function will only properly work if a pixels get callback has been set.
 *
 * @warning Use this function if you really know what you are doing.
 *
 * @param[in] dirty Whether the image is dirty.
 *
 * @ingroup Evas_Image
 */
EAPI void evas_object_image_pixels_dirty_set(Evas_Image *obj, Eina_Bool dirty);

/**
 * @brief Retrieves whether the given image object is dirty (needs to be
 * redrawn).
 *
 * @return Whether the image is dirty.
 *
 * @ingroup Evas_Image
 */
EAPI Eina_Bool evas_object_image_pixels_dirty_get(const Evas_Image *obj);

/**
 * @brief Set the video surface linked to a given image of the canvas.
 *
 * @param[in] surf The new video surface.
 *
 * @since 1.1
 *
 * @ingroup Evas_Image
 */
EAPI void evas_object_image_video_surface_set(Evas_Image *obj, Evas_Video_Surface *surf);

/**
 * @brief Get the video surface linekd to a given image of the canvas.
 *
 * @return The new video surface.
 *
 * @since 1.1
 *
 * @ingroup Evas_Image
 */
EAPI const Evas_Video_Surface *evas_object_image_video_surface_get(const Evas_Image *obj);

/**
 * @brief Set the video surface capabilities to a given image of the canvas.
 *
 * @param[in] caps
 *
 * @ingroup Evas_Image
 */
EAPI void evas_object_image_video_surface_caps_set(Evas_Image *obj, unsigned int caps);

/** Get the video surface capabilities to a given image of the canvas.
 *
 * @ingroup Evas_Image
 */
EAPI unsigned int evas_object_image_video_surface_caps_get(const Evas_Image *obj);

/**
 * @brief Define if the orientation information in the image file should be
 * honored.
 *
 * @param[in] enable @c true means that it should honor the orientation
 * information.
 *
 * @since 1.1
 *
 * @ingroup Evas_Image
 */
EAPI void evas_object_image_load_orientation_set(Evas_Image *obj, Eina_Bool enable);

/**
 * @brief Get if the orientation information in the image file should be
 * honored.
 *
 * @return @c true means that it should honor the orientation information.
 *
 * @since 1.1
 *
 * @ingroup Evas_Image
 */
EAPI Eina_Bool evas_object_image_load_orientation_get(const Evas_Image *obj);

/**
 * @brief Sets how the center part of the given image object (not the borders)
 * should be drawn when Evas is rendering it.
 *
 * This function sets how the center part of the image object's source image is
 * to be drawn, which must be one of the values in #Evas_Border_Fill_Mode. By
 * center we mean the complementary part of that defined by
 * @ref evas_object_image_border_set. This one is very useful for making frames
 * and decorations. You would most probably also be using a filled image (as in
 * @ref evas_object_image_filled_set) to use as a frame.
 *
 * @param[in] fill Fill mode of the center region of @c obj (a value in
 *  #Evas_Border_Fill_Mode).
 *
 * @ingroup Evas_Image
 */
EAPI void evas_object_image_border_center_fill_set(Evas_Image *obj, Evas_Border_Fill_Mode fill);

/**
 * @brief Retrieves how the center part of the given image object (not the
 * borders) is to be drawn when Evas is rendering it.
 *
 * @return Fill mode of the center region of @c obj (a value in
 *  #Evas_Border_Fill_Mode).
 *
 * @ingroup Evas_Image
 */
EAPI Evas_Border_Fill_Mode evas_object_image_border_center_fill_get(const Evas_Image *obj);

/**
 * @brief Set the source object to be visible or not.
 *
 * If @c visible is set to @c false, the source object of the proxy ($obj) will
 * be invisible.
 *
 * This API works differently to @ref evas_object_show and @ref
 * evas_object_hide. Once source object is hidden, the proxy object will be
 * hidden as well. Actually in this case both objects are excluded from the
 * Evas internal update circle.
 *
 * By this API, instead, one can toggle the visibility of a proxy's source
 *  object remaining the proxy visibility untouched.
 *
 * @warning If the all of proxies are deleted, then the source visibility of
 * the source object will be cancelled.
 *
 * @param[in] visible @c true is source object to be shown, @c false otherwise.
 *
 * @since 1.8
 *
 * @ingroup Evas_Image
 */
EAPI void evas_object_image_source_visible_set(Evas_Image *obj, Eina_Bool visible);

/**
 * @brief Get the state of the source object visibility.
 *
 * @return @c true is source object to be shown, @c false otherwise.
 *
 * @since 1.8
 *
 * @ingroup Evas_Image
 */
EAPI Eina_Bool evas_object_image_source_visible_get(const Evas_Image *obj);

/**
 * @brief Get the native surface of a given image of the canvas
 *
 * This function returns the native surface of a given canvas image.
 *
 * @return The native surface.
 *
 * @ingroup Evas_Image
 */
EAPI Evas_Native_Surface *evas_object_image_native_surface_get(const Evas_Image *obj);

/**
 * @brief Set the scale down factor of a given image object's source image,
 * when loading it.
 *
 * This function sets the scale down factor of a given canvas image. Most
 * useful for the SVG image loader.
 *
 * @param[in] scale_down The scale down factor.
 *
 * @ingroup Evas_Image
 */
EAPI void evas_object_image_load_scale_down_set(Evas_Image *obj, int scale_down);

/**
 * @brief Get the scale down factor of a given image object's source image,
 * when loading it.
 *
 * @return The scale down factor.
 *
 * @ingroup Evas_Image
 */
EAPI int evas_object_image_load_scale_down_get(const Evas_Image *obj);

/**
 * @brief Set the scale hint of a given image of the canvas.
 *
 * This function sets the scale hint value of the given image object in the
 * canvas, which will affect how Evas is to cache scaled versions of its
 * original source image.
 *
 * @param[in] hint The scale hint, a value in #Evas_Image_Scale_Hint.
 *
 * @ingroup Evas_Image
 */
EAPI void evas_object_image_scale_hint_set(Evas_Image *obj, Evas_Image_Scale_Hint hint);

/**
 * @brief Get the scale hint of a given image of the canvas.
 *
 * This function returns the scale hint value of the given image object of the
 * canvas.
 *
 * @return The scale hint, a value in #Evas_Image_Scale_Hint.
 *
 * @ingroup Evas_Image
 */
EAPI Evas_Image_Scale_Hint evas_object_image_scale_hint_get(const Evas_Image *obj);

/**
 * @brief Set whether an Evas object is to source events.
 *
 * Set whether an Evas object is to repeat events to source.
 *
 * If @c source is @c true, it will make events on @c obj to also be repeated
 * for the source object (see @ref evas_object_image_source_set). Even the
 * @c obj and source geometries are different, the event position will be
 * transformed to the source object's space.
 *
 * If @c source is @c false, events occurring on @c obj will be processed only
 * on it.
 *
 * @param[in] source Whether @c obj is to pass events ($true) or not ($false).
 *
 * @since 1.8
 *
 * @ingroup Evas_Image
 */
EAPI void evas_object_image_source_events_set(Evas_Image *obj, Eina_Bool source);

/**
 * @brief Determine whether an object is set to source events.
 *
 * @return Whether @c obj is to pass events ($true) or not ($false).
 *
 * @since 1.8
 *
 * @ingroup Evas_Image
 */
EAPI Eina_Bool evas_object_image_source_events_get(const Evas_Image *obj);

/**
 * @brief Set the colorspace of a given image of the canvas.
 *
 * This function sets the colorspace of given canvas image.
 *
 * @param[in] cspace The new color space.
 *
 * @ingroup Evas_Image
 */
EAPI void evas_object_image_colorspace_set(Evas_Image *obj, Evas_Colorspace cspace);

/**
 * @brief Get the colorspace of a given image of the canvas.
 *
 * This function returns the colorspace of given canvas image.
 *
 * @return The new color space.
 *
 * @ingroup Evas_Image
 */
EAPI Evas_Colorspace evas_object_image_colorspace_get(const Evas_Image *obj);

/**
 * @brief Set the callback function to get pixels from a canvas' image.
 *
 * This functions sets a function to be the callback function that get pixels
 * from a image of the canvas.
 *
 * @param[in] func The callback function.
 * @param[in] data The data pointer to be passed to @c func.
 *
 * @ingroup Evas_Image
 */
EAPI void evas_object_image_pixels_get_callback_set(Evas_Image *obj, Evas_Object_Image_Pixels_Get_Cb func, void *data) EINA_ARG_NONNULL(2);

/**
 * @brief Replaces the raw image data of the given image object.
 *
 * This function lets the application replace an image object's internal pixel
 * buffer with an user-allocated one. For best results, you should generally
 * first call @ref evas_object_image_size_set with the width and height for the
 * new buffer.
 *
 * This call is best suited for when you will be using image data with
 * different dimensions than the existing image data, if any. If you only need
 * to modify the existing image in some fashion, then using
 * @ref evas_object_image_data_get is probably what you are after.
 *
 * Note that the caller is responsible for freeing the buffer when finished
 * with it, as user-set image data will not be automatically freed when the
 * image object is deleted.
 *
 * @param[in] data The raw data to replace.
 *
 * @ingroup Evas_Image
 */
EAPI void evas_object_image_data_copy_set(Evas_Image *obj, void *data);

/**
 * @brief Set the frame to current frame of an image object.
 *
 * This set image object's current frame to frame_num with 1 being the first
 * frame.
 *
 * See also @ref evas_object_image_animated_get,
 * @ref evas_object_image_animated_frame_count_get,
 * @ref evas_object_image_animated_loop_type_get,
 * @ref evas_object_image_animated_loop_count_get,
 * @ref evas_object_image_animated_frame_duration_get.
 *
 * @param[in] frame_index The index of current frame.
 *
 * @since 1.1
 *
 * @ingroup Evas_Image
 */
EAPI void evas_object_image_animated_frame_set(Evas_Image *obj, int frame_index);

/**
 * @brief Get the support state of a given image.
 *
 * @return The region support state.
 *
 * @since 1.2
 *
 * @ingroup Evas_Image
 */
EAPI Eina_Bool evas_object_image_region_support_get(const Evas_Image *obj) EINA_WARN_UNUSED_RESULT;

/**
 * @brief Retrieves a number representing any error that occurred during the
 * last loading of the given image object's source image.
 *
 * @return A value giving the last error that occurred. It should be one of the
 * #Evas_Load_Error values. #EVAS_LOAD_ERROR_NONE is returned if there was no
 * error.
 *
 * @ingroup Evas_Image
 */
EAPI Evas_Load_Error evas_object_image_load_error_get(const Evas_Image *obj) EINA_WARN_UNUSED_RESULT;

/**
 * @brief Get the total number of frames of the image object.
 *
 * This returns total number of frames the image object supports (if animated).
 *
 * See also @ref evas_object_image_animated_get,
 * @ref evas_object_image_animated_frame_count_get,
 * @ref evas_object_image_animated_loop_type_get,
 * @ref evas_object_image_animated_loop_count_get,
 * @ref evas_object_image_animated_frame_duration_get.
 *
 * @return The number of frames.
 *
 * @since 1.1
 *
 * @ingroup Evas_Image
 */
EAPI int evas_object_image_animated_frame_count_get(const Evas_Image *obj);

/**
 * @brief Retrieves the row stride of the given image object.
 *
 * The row stride is the number of bytes between the start of a row and the
 * start of the next row for image data.
 *
 * @return The stride of the image (in bytes).
 *
 * @ingroup Evas_Image
 */
EAPI int evas_object_image_stride_get(const Evas_Image *obj) EINA_WARN_UNUSED_RESULT;

/**
 * @brief Get the kind of looping the image object does.
 *
 * This returns the kind of looping the image object wants to do.
 *
 * If it returns EVAS_IMAGE_ANIMATED_HINT_LOOP, you should display frames in a
 * sequence like: 1->2->3->1->2->3->1...
 *
 * If it returns EVAS_IMAGE_ANIMATED_HINT_PINGPONG, it is better to display
 * frames in a sequence like: 1->2->3->2->1->2->3->1...
 *
 * The default type is EVAS_IMAGE_ANIMATED_HINT_LOOP.
 *
 * See also @ref evas_object_image_animated_get,
 * @ref evas_object_image_animated_frame_count_get,
 * @ref evas_object_image_animated_loop_type_get,
 * @ref evas_object_image_animated_loop_count_get,
 * @ref evas_object_image_animated_frame_duration_get.
 *
 * @return Loop type of the image object.
 *
 * @since 1.1
 *
 * @ingroup Evas_Image
 */
EAPI Evas_Image_Animated_Loop_Hint evas_object_image_animated_loop_type_get(const Evas_Image *obj);

/**
 * @brief Get the number times the animation of the object loops.
 *
 * This returns loop count of image. The loop count is the number of times the
 * animation will play fully from first to last frame until the animation
 * should stop (at the final frame).
 *
 * If 0 is returned, then looping should happen indefinitely (no limit to the
 * number of times it loops).
 *
 * See also @ref evas_object_image_animated_get,
 * @ref evas_object_image_animated_frame_count_get,
 * @ref evas_object_image_animated_loop_type_get,
 * @ref evas_object_image_animated_loop_count_get,
 * @ref evas_object_image_animated_frame_duration_get.
 *
 * @return The number of loop of an animated image object.
 *
 * @since 1.1
 *
 * @ingroup Evas_Image
 */
EAPI int evas_object_image_animated_loop_count_get(const Evas_Image *obj);

/**
 * @brief Set the image orientation.
 *
 * This function allows to rotate or flip the image.
 *
 * @param[in] orient The image orientation @ref Evas_Image_Orient. Default is
 * #EVAS_IMAGE_ORIENT_NONE.
 *
 * @since 1.14
 *
 * @ingroup Evas_Image
 */
EAPI void evas_object_image_orient_set(Evas_Image *obj, Evas_Image_Orient orient);

/**
 * @brief Get the image orientation.
 *
 * @return The image orientation @ref Evas_Image_Orient. Default is
 * #EVAS_IMAGE_ORIENT_NONE.
 *
 * @since 1.14
 *
 * @ingroup Evas_Image
 */
EAPI Evas_Image_Orient evas_object_image_orient_get(const Evas_Image *obj);

/**
 * @brief The content below the Evas_Object_Image will be rendered inside it
 * and you can reuse it as a source for any kind of effect.
 *
 * @param[in] s Wether to put the content of the canvas below inside the
 * Evas_Object_Image.
 *
 * @since 1.15
 *
 * @ingroup Evas_Image
 */
EAPI void evas_object_image_snapshot_set(Evas_Image *obj, Eina_Bool s);

/**
 * @brief Determine wether the Evas_Object_Image replicate the content of the
 * canvas below.
 *
 * @return Wether to put the content of the canvas below inside the
 * Evas_Object_Image.
 *
 * @since 1.15
 *
 * @ingroup Evas_Image
 */
EAPI Eina_Bool evas_object_image_snapshot_get(const Evas_Image *obj);

/**
 * @brief Mark a sub-region of the given image object to be redrawn.
 *
 * This function schedules a particular rectangular region of an image object
 * to be updated (redrawn) at the next rendering cycle.
 *
 * @param[in] y Y-offset of the region to be updated.
 * @param[in] w Width of the region to be updated.
 * @param[in] h Height of the region to be updated.
 *
 * @ingroup Evas_Image
 */
EAPI void evas_object_image_data_update_add(Evas_Image *obj, int x, int y, int w, int h);

/**
 * @brief Get the duration of a sequence of frames.
 *
 * This returns total duration that the specified sequence of frames should
 * take in seconds.
 *
 * If you set start_frame to 1 and frame_num 0, you get frame 1's duration. If
 * you set start_frame to 1 and frame_num 1, you get frame 1's duration +
 * frame2's duration.
 *
 * See also @ref evas_object_image_animated_get,
 * @ref evas_object_image_animated_frame_count_get,
 * @ref evas_object_image_animated_loop_type_get,
 * @ref evas_object_image_animated_loop_count_get,
 * @ref evas_object_image_animated_frame_duration_get.
 *
 * @param[in] frame_num Number of frames in the sequence.
 *
 * @since 1.1
 *
 * @ingroup Evas_Image
 */
EAPI double evas_object_image_animated_frame_duration_get(const Evas_Image *obj, int start_frame, int frame_num);

/**
 * @brief Sets the raw image data of the given image object.
 *
 * Note that the raw data must be of the same size (see @ref
 * evas_object_image_size_set, which has to be called before this one) and
 * colorspace (see @ref evas_object_image_colorspace_set) of the image. If data
 * is @c null, the current image data will be freed. Naturally, if one does not
 * set an image object's data manually, it will still have one, allocated by
 * Evas.
 *
 * @param[in] data The raw data, or @c null.
 *
 * @ingroup Evas_Image
 */
EAPI void evas_object_image_data_set(Evas_Image *obj, void *data);

/**
 * @brief Get a pointer to the raw image data of the given image object.
 *
 * This function returns a pointer to an image object's internal pixel buffer,
 * for reading only or read/write. If you request it for writing, the image
 * will be marked dirty so that it gets redrawn at the next update.
 *
 * Each time you call this function on an image object, its data buffer will
 * have an internal reference counter incremented. Decrement it back by using
 * @ref evas_object_image_data_set.
 *
 * This is best suited for when you want to modify an existing image, without
 * changing its dimensions.
 *
 * @note The contents' format returned by it depend on the color space of the
 * given image object.
 *
 * @note You may want to use @ref evas_object_image_data_update_add to inform
 * data changes, if you did any.
 *
 * @param[in] for_writing Whether the data being retrieved will be modified
 * ($true) or not ($false).
 *
 * @return The raw image data.
 *
 * @ingroup Evas_Image
 */
EAPI void *evas_object_image_data_get(const Evas_Image *obj, Eina_Bool for_writing) EINA_WARN_UNUSED_RESULT;

#endif
