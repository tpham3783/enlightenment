#ifndef _EFL_IMAGE_EO_H_
#define _EFL_IMAGE_EO_H_

#ifndef _EFL_IMAGE_EO_CLASS_TYPE
#define _EFL_IMAGE_EO_CLASS_TYPE

typedef Eo Efl_Image;

#endif

#ifndef _EFL_IMAGE_EO_TYPES
#define _EFL_IMAGE_EO_TYPES


#endif
#define EFL_IMAGE_INTERFACE efl_image_interface_get()

EAPI const Eo_Class *efl_image_interface_get(void) EINA_CONST;

/**
 * @brief Check if an image  can be animated (have multiple frames)
 *
 * @return If it's animated or not.
 *
 * @ingroup Efl_Image
 */
EOAPI Eina_Bool efl_image_animated_get(void);

/**
 * @brief Set the loading size of an image. The image will be loaded into
 * memory as if it was the set size instead of the original size. This can save
 * a lot of memory, and is important for scalable types like svg.
 *
 * @param[in] w The new width of the image's load size.
 * @param[in] h The new height of the image's load size.
 *
 * @ingroup Efl_Image
 */
EOAPI void efl_image_load_size_set(int w, int h);

EOAPI void efl_image_load_size_get(int *w, int *h);

/**
 * @brief Sets whether to use high-quality image scaling algorithm on the given
 * image.
 *
 * When enabled, a higher quality image scaling algorithm is used when scaling
 * images to sizes other than the source image's original one. This gives
 * better results but is more computationally expensive.
 *
 * @param[in] smooth_scale Whether to use smooth scale or not.
 *
 * @ingroup Efl_Image
 */
EOAPI void efl_image_smooth_scale_set(Eina_Bool smooth_scale);

/**
 * @brief Retrieves whether the given image is using high-quality image scaling
 * algorithm.
 *
 * @return Whether to use smooth scale or not.
 *
 * @ingroup Efl_Image
 */
EOAPI Eina_Bool efl_image_smooth_scale_get(void);

/**
 * @brief The native ration of the image object
 *
 * @return The image's ratio
 *
 * @ingroup Efl_Image
 */
EOAPI double efl_image_ratio_get(void);


#endif
