#ifndef _ELM_IMAGE_EO_H_
#define _ELM_IMAGE_EO_H_

#ifndef _ELM_IMAGE_EO_CLASS_TYPE
#define _ELM_IMAGE_EO_CLASS_TYPE

typedef Eo Elm_Image;

#endif

#ifndef _ELM_IMAGE_EO_TYPES
#define _ELM_IMAGE_EO_TYPES


#endif
#define ELM_IMAGE_CLASS elm_image_class_get()

EAPI const Eo_Class *elm_image_class_get(void) EINA_CONST;

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
EOAPI void  elm_obj_image_editable_set(Eina_Bool set);

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
EOAPI Eina_Bool  elm_obj_image_editable_get(void);

/**
 * Set whether the object's image can be resized to a size smaller than the original one.
 *
 * @ingroup Image
 * @since 1.7
 *
 * @param[in] resize_down whether resizing down is allowed
 */
EOAPI void  elm_obj_image_resize_down_set(Eina_Bool resize_down);

/**
 * Get whether the object's image can be resized to a size smaller than the original one.
 *
 * @ingroup Image
 * @since 1.7
 */
EOAPI Eina_Bool  elm_obj_image_resize_down_get(void);

/**
 * Set whether the object's image can be resized to a size larget than the original one.
 *
 * @ingroup Image
 * @since 1.7
 *
 * @param[in] resize_up whether resizing up is allowed
 */
EOAPI void  elm_obj_image_resize_up_set(Eina_Bool resize_up);

/**
 * Get whether the object's image can be resized to a size larget than the original one.
 *
 * @ingroup Image
 * @since 1.7
 */
EOAPI Eina_Bool  elm_obj_image_resize_up_get(void);

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
EOAPI void  elm_obj_image_smooth_set(Eina_Bool smooth);

/**
 * Get the smooth effect for an image.
 *
 * @return @c EINA_TRUE if smooth scaling is enabled, @c EINA_FALSE otherwise.
 *
 * @see elm_image_smooth_set()
 *
 * @ingroup Image
 */
EOAPI Eina_Bool  elm_obj_image_smooth_get(void);

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
EOAPI void  elm_obj_image_no_scale_set(Eina_Bool no_scale);

/**
 * Get whether scaling is disabled on the object.
 *
 * @return @c EINA_TRUE if scaling is disabled, @c EINA_FALSE otherwise
 *
 * @see elm_image_no_scale_set()
 *
 * @ingroup Image
 */
EOAPI Eina_Bool  elm_obj_image_no_scale_get(void);

/**
 * Set the scale of the object's image.
 *
 * @ingroup Image
 * @since 1.7
 *
 * @param[in] scale Object's image scale.
 */
EOAPI void  elm_obj_image_scale_set(double scale);

/**
 * Get the scale of the object's image.
 *
 * @ingroup Image
 * @since 1.7
 */
EOAPI double  elm_obj_image_scale_get(void);

/**
 * Set the resize method for the object's internal image when maintaining a given aspect ratio.
 *
 * If @p fill_inside is true, image does not overflow the widget and
 * blank spaces are added to fill the space that is still free. If it
 * is false, the image overflows the image will fill all space and
 * overflow in its larger dimension.
 *
 * You can think of it as "fill: inside" or "fill: outside" and not as
 * "fill the inside".
 *
 * @see elm_image_fill_inside_get()
 * @see elm_image_fill_outside_get()
 * @see elm_image_fill_outside_set()
 * @ingroup Image
 * @since 1.7
 *
 * @param[in] fill_inside Resize method for the object's internal image.
 */
EOAPI void  elm_obj_image_fill_inside_set(Eina_Bool fill_inside);

/**
 * Set the resize method for the object's internal image when maintaining a given aspect ratio.
 *
 * @see elm_image_fill_inside_set()
 * @see elm_image_fill_outside_get()
 * @see elm_image_fill_outside_set()
 * @ingroup Image
 * @since 1.7
 */
EOAPI Eina_Bool  elm_obj_image_fill_inside_get(void);

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
EOAPI void  elm_obj_image_aspect_fixed_set(Eina_Bool fixed);

/**
 * Get if the object retains the original aspect ratio.
 *
 * @return @c EINA_TRUE if the object keeps the original aspect, @c EINA_FALSE
 * otherwise.
 *
 * @ingroup Image
 */
EOAPI Eina_Bool  elm_obj_image_aspect_fixed_get(void);

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
EOAPI void  elm_obj_image_orient_set(Elm_Image_Orient orient);

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
EOAPI Elm_Image_Orient  elm_obj_image_orient_get(void);

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
EOAPI void  elm_obj_image_fill_outside_set(Eina_Bool fill_outside);

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
EOAPI Eina_Bool  elm_obj_image_fill_outside_get(void);

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
EOAPI void  elm_obj_image_resizable_set(Eina_Bool up, Eina_Bool down);

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
EOAPI void  elm_obj_image_resizable_get(Eina_Bool *up, Eina_Bool *down);

/**
 * Enable or disable preloading of the image
 *
 * @ingroup Image
 *
 * @param[in] disabled If EINA_TRUE, preloading will be disabled
 */
EOAPI void  elm_obj_image_preload_disabled_set(Eina_Bool disabled);

/**
 * Set the file that will be used as the image's source.
 *
 * @return (@c EINA_TRUE = success, @c EINA_FALSE = error)
 *
 * @see elm_image_file_set()
 *
 * @note This function will trigger the Edje file case based on the
 * extension of the @a file string use to create the Eina_File (expects
 * @c ".edj", for this case).
 *
 * @note If you use animated gif image and create multiple image objects with
 * one gif image file, you should set the @p group differently for each object.
 * Or image objects will share one evas image cache entry and you will get
 * unwanted frames.
 *
 * @ingroup Image
 *
 * @param[in] file The handler to an Eina_File that will be used as image source
 * @param[in] group The group that the image belongs to, in case it's an
EET (including Edje case) file. This can be used as a key inside
evas image cache if this is a normal image file not eet file.
 */
EOAPI Eina_Bool  elm_obj_image_mmap_set(const Eina_File *file, const char *group);

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
EOAPI Eina_Bool  elm_obj_image_memfile_set(const void *img, size_t size, const char *format, const char *key);

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
EOAPI Evas_Object * elm_obj_image_object_get(void);

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
EOAPI void  elm_obj_image_object_size_get(int *w, int *h);

/**
 * Re-evaluate the object's final geometry.
 *
 * @ingroup Image
 * @since 1.7
 * 
 */
EOAPI void  elm_obj_image_sizing_eval(void);

EOAPI extern const Eo_Event_Description _ELM_IMAGE_EVENT_DROP;
EOAPI extern const Eo_Event_Description _ELM_IMAGE_EVENT_DOWNLOAD_START;
EOAPI extern const Eo_Event_Description _ELM_IMAGE_EVENT_DOWNLOAD_PROGRESS;
EOAPI extern const Eo_Event_Description _ELM_IMAGE_EVENT_DOWNLOAD_DONE;
EOAPI extern const Eo_Event_Description _ELM_IMAGE_EVENT_DOWNLOAD_ERROR;

/**
 * No description
 */
#define ELM_IMAGE_EVENT_DROP (&(_ELM_IMAGE_EVENT_DROP))

/**
 * No description
 */
#define ELM_IMAGE_EVENT_DOWNLOAD_START (&(_ELM_IMAGE_EVENT_DOWNLOAD_START))

/**
 * No description
 */
#define ELM_IMAGE_EVENT_DOWNLOAD_PROGRESS (&(_ELM_IMAGE_EVENT_DOWNLOAD_PROGRESS))

/**
 * No description
 */
#define ELM_IMAGE_EVENT_DOWNLOAD_DONE (&(_ELM_IMAGE_EVENT_DOWNLOAD_DONE))

/**
 * No description
 */
#define ELM_IMAGE_EVENT_DOWNLOAD_ERROR (&(_ELM_IMAGE_EVENT_DOWNLOAD_ERROR))

#endif
