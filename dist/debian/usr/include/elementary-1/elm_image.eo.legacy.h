#ifndef _ELM_IMAGE_EO_LEGACY_H_
#define _ELM_IMAGE_EO_LEGACY_H_

#ifndef _ELM_IMAGE_EO_CLASS_TYPE
#define _ELM_IMAGE_EO_CLASS_TYPE

typedef Eo Elm_Image;

#endif

#ifndef _ELM_IMAGE_EO_TYPES
#define _ELM_IMAGE_EO_TYPES


#endif

/**
 * Make the image 'editable'.
 *
 * This means the image is a valid drag target for drag and drop, and can be
 * cut or pasted too.
 *
 * @ingroup Image
 *
 * @param[in] set Turn on or off editability. Default is @c EINA_FALSE.
 */
EAPI void elm_image_editable_set(Elm_Image *obj, Eina_Bool set);

/**
 * Check if the image is 'editable'.
 *
 * @return Editability.
 *
 * A return value of EINA_TRUE means the image is a valid drag target
 * for drag and drop, and can be cut or pasted too.
 *
 * @ingroup Image
 */
EAPI Eina_Bool elm_image_editable_get(const Elm_Image *obj);

/**
 * Set the smooth effect for an image.
 *
 * Set the scaling algorithm to be used when scaling the image. Smooth
 * scaling provides a better resulting image, but is slower.
 *
 * The smooth scaling should be disabled when making animations that change
 * the image size, since it will be faster. Animations that don't require
 * resizing of the image can keep the smooth scaling enabled (even if the
 * image is already scaled, since the scaled image will be cached).
 *
 * @see elm_image_smooth_get()
 *
 * @ingroup Image
 *
 * @param[in] smooth @c EINA_TRUE if smooth scaling should be used, @c EINA_FALSE
otherwise. Default is @c EINA_TRUE.
 */
EAPI void elm_image_smooth_set(Elm_Image *obj, Eina_Bool smooth);

/**
 * Get the smooth effect for an image.
 *
 * @return @c EINA_TRUE if smooth scaling is enabled, @c EINA_FALSE otherwise.
 *
 * @see elm_image_smooth_set()
 *
 * @ingroup Image
 */
EAPI Eina_Bool elm_image_smooth_get(const Elm_Image *obj);

/**
 * Disable scaling of this object.
 *
 * This function disables scaling of the elm_image widget through the
 * function elm_object_scale_set(). However, this does not affect the widget
 * size/resize in any way. For that effect, take a look at
 * elm_image_resizable_set().
 *
 * @see elm_image_no_scale_get()
 * @see elm_image_resizable_set()
 * @see elm_object_scale_set()
 *
 * @ingroup Image
 *
 * @param[in] no_scale @c EINA_TRUE if the object is not scalable, @c EINA_FALSE
otherwise. Default is @c EINA_FALSE.
 */
EAPI void elm_image_no_scale_set(Elm_Image *obj, Eina_Bool no_scale);

/**
 * Get whether scaling is disabled on the object.
 *
 * @return @c EINA_TRUE if scaling is disabled, @c EINA_FALSE otherwise
 *
 * @see elm_image_no_scale_set()
 *
 * @ingroup Image
 */
EAPI Eina_Bool elm_image_no_scale_get(const Elm_Image *obj);

/**
 * Set whether the original aspect ratio of the image should be kept on resize.
 *
 * The original aspect ratio (width / height) of the image is usually
 * distorted to match the object's size. Enabling this option will retain
 * this original aspect, and the way that the image is fit into the object's
 * area depends on the option set by elm_image_fill_outside_set().
 *
 * @see elm_image_aspect_fixed_get()
 * @see elm_image_fill_outside_set()
 *
 * @ingroup Image
 *
 * @param[in] fixed @c EINA_TRUE if the image should retain the aspect,
@c EINA_FALSE otherwise.
 */
EAPI void elm_image_aspect_fixed_set(Elm_Image *obj, Eina_Bool fixed);

/**
 * Get if the object retains the original aspect ratio.
 *
 * @return @c EINA_TRUE if the object keeps the original aspect, @c EINA_FALSE
 * otherwise.
 *
 * @ingroup Image
 */
EAPI Eina_Bool elm_image_aspect_fixed_get(const Elm_Image *obj);

/**
 * Set the image orientation.
 *
 * This function allows to rotate or flip the given image.
 *
 * @see elm_image_orient_get()
 * @see @ref Elm_Image_Orient
 *
 * @ingroup Image
 *
 * @param[in] orient The image orientation @ref Elm_Image_Orient
Default is #ELM_IMAGE_ORIENT_NONE.
 */
EAPI void elm_image_orient_set(Elm_Image *obj, Elm_Image_Orient orient);

/**
 * Get the image orientation.
 *
 * @return The image orientation @ref Elm_Image_Orient
 *
 * @see elm_image_orient_set()
 * @see @ref Elm_Image_Orient
 *
 * @ingroup Image
 */
EAPI Elm_Image_Orient elm_image_orient_get(const Elm_Image *obj);

/**
 * Set if the image fills the entire object area, when keeping the aspect ratio.
 *
 * When the image should keep its aspect ratio even if resized to another
 * aspect ratio, there are two possibilities to resize it: keep the entire
 * image inside the limits of height and width of the object (@p fill_outside
 * is @c EINA_FALSE) or let the extra width or height go outside of the object,
 * and the image will fill the entire object (@p fill_outside is @c EINA_TRUE).
 *
 * @note This option will have no effect if
 * elm_image_aspect_fixed_set() is set to @c EINA_FALSE.
 *
 * @see elm_image_fill_inside_get()
 * @see elm_image_fill_inside_set()
 * @see elm_image_fill_outside_get()
 * @see elm_image_aspect_fixed_set()
 *
 * @ingroup Image
 *
 * @param[in] fill_outside @c EINA_TRUE if the object is filled outside,
@c EINA_FALSE otherwise. Default is @c EINA_FALSE.
 */
EAPI void elm_image_fill_outside_set(Elm_Image *obj, Eina_Bool fill_outside);

/**
 * Get if the object is filled outside
 *
 * @return @c EINA_TRUE if the object is filled outside, @c EINA_FALSE otherwise.
 *
 * @see elm_image_fill_inside_get()
 * @see elm_image_fill_inside_set()
 * @see elm_image_fill_outside_set()
 *
 * @ingroup Image
 */
EAPI Eina_Bool elm_image_fill_outside_get(const Elm_Image *obj);

/**
 * Set if the object is (up/down) resizable.
 *
 * This function limits the image resize ability. If @p size_up is set to
 * @c EINA_FALSE, the object can't have its height or width resized to a value
 * higher than the original image size. Same is valid for @p size_down.
 *
 * @see elm_image_resizable_get()
 *
 * @ingroup Image
 *
 * @param[in] up A bool to set if the object is resizable up. Default is
@c EINA_TRUE.
 * @param[in] down A bool to set if the object is resizable down. Default
is @c EINA_TRUE.
 */
EAPI void elm_image_resizable_set(Elm_Image *obj, Eina_Bool up, Eina_Bool down);

/**
 * Get if the object is (up/down) resizable.
 *
 * @see elm_image_resizable_set()
 *
 * @ingroup Image
 *
 * @param[out] up A bool to set if the object is resizable up. Default is
@c EINA_TRUE.
 * @param[out] down A bool to set if the object is resizable down. Default
is @c EINA_TRUE.
 */
EAPI void elm_image_resizable_get(const Elm_Image *obj, Eina_Bool *up, Eina_Bool *down);

/**
 * Enable or disable preloading of the image
 *
 * @ingroup Image
 *
 * @param[in] disabled If EINA_TRUE, preloading will be disabled
 */
EAPI void elm_image_preload_disabled_set(Elm_Image *obj, Eina_Bool disabled);

/**
 * Set a location in memory to be used as an image object's source
 * bitmap.
 *
 * This function is handy when the contents of an image file are
 * mapped in memory, for example.
 *
 * The @p format string should be something like @c "png", @c "jpg",
 * @c "tga", @c "tiff", @c "bmp" etc, when provided (@c NULL, on the
 * contrary). This improves the loader performance as it tries the
 * "correct" loader first, before trying a range of other possible
 * loaders until one succeeds.
 *
 * @return (@c EINA_TRUE = success, @c EINA_FALSE = error)
 *
 * @since 1.7
 *
 * @ingroup Image
 *
 * @param[in] img The binary data that will be used as image source
 * @param[in] size The size of binary data blob @p img
 * @param[in] format (Optional) expected format of @p img bytes
 * @param[in] key Optional indexing key of @p img to be passed to the
image loader (eg. if @p img is a memory-mapped EET file)
 */
EAPI Eina_Bool elm_image_memfile_set(Elm_Image *obj, const void *img, size_t size, const char *format, const char *key);

/**
 * Get the inlined image object of the image widget.
 *
 * @return The inlined image object, or NULL if none exists
 *
 * This function allows one to get the underlying @c Evas_Object of type
 * Image from this elementary widget. It can be useful to do things like get
 * the pixel data, save the image to a file, etc.
 *
 * @note Be careful to not manipulate it, as it is under control of
 * elementary.
 *
 * @ingroup Image
 */
EAPI Evas_Object *elm_image_object_get(const Elm_Image *obj);

/**
 * Get the current size of the image.
 *
 * This is the real size of the image, not the size of the object.
 *
 * @ingroup Image
 *
 * @param[out] w Pointer to store width, or NULL.
 * @param[out] h Pointer to store height, or NULL.
 */
EAPI void elm_image_object_size_get(const Elm_Image *obj, int *w, int *h);

#endif
