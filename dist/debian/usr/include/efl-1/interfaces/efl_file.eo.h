#ifndef _EFL_FILE_EO_H_
#define _EFL_FILE_EO_H_

#ifndef _EFL_FILE_EO_CLASS_TYPE
#define _EFL_FILE_EO_CLASS_TYPE

typedef Eo Efl_File;

#endif

#ifndef _EFL_FILE_EO_TYPES
#define _EFL_FILE_EO_TYPES


#endif
#define EFL_FILE_INTERFACE efl_file_interface_get()

EAPI const Eo_Class *efl_file_interface_get(void) EINA_CONST;

/**
 * @brief Set the source mmaped file from where an image object must fetch the
 * real image data (it must be an Eina_File).
 *
 * If the file supports multiple data stored in it (as Eet files do), you can
 * specify the key to be used as the index of the image in this file.
 *
 * @param[in] f The mmaped file
 * @param[in] key The image key in @c file (if its an Eet one), or @c null,
 * otherwise.
 *
 * @since 1.8
 *
 * @ingroup Efl_File
 */
EOAPI Eina_Bool  efl_file_mmap_set(const Eina_File *f, const char *key);

/**
 * @brief Get the source mmaped file from where an image object must fetch the
 * real image data (it must be an Eina_File).
 *
 * If the file supports multiple data stored in it (as Eet files do), you can
 * get the key to be used as the index of the image in this file.
 *
 * @param[out] f The mmaped file
 * @param[out] key The image key in @c file (if its an Eet one), or @c null,
 * otherwise.
 *
 * @since 1.10
 *
 * @ingroup Efl_File
 */
EOAPI void  efl_file_mmap_get(const Eina_File **f, const char **key);

/**
 * @brief Set the source file from where an image object must fetch the real
 * image data (it may be an Eet file, besides pure image ones).
 *
 * If the file supports multiple data stored in it (as Eet files do), you can
 * specify the key to be used as the index of the image in this file.
 *
 * @param[in] file The image file path.
 * @param[in] key The image key in @c file (if its an Eet one), or @c null,
 * otherwise.
 *
 * @ingroup Efl_File
 */
EOAPI Eina_Bool  efl_file_set(const char *file, const char *key);

/**
 * @brief Retrieve the source file from where an image object is to fetch the
 * real image data (it may be an Eet file, besides pure image ones).
 *
 * You must not modify the strings on the returned pointers.
 *
 * Note: Use @c null pointers on the file components you're not interested in:
 * they'll be ignored by the function.
 *
 * @param[out] file The image file path.
 * @param[out] key The image key in @c file (if its an Eet one), or @c null,
 * otherwise.
 *
 * @ingroup Efl_File
 */
EOAPI void  efl_file_get(const char **file, const char **key);

/**
 * @brief If true, file open will happen asynchronously allowing for better
 * performance in some situations. The file will be opened from a different
 * thread. Classes implementing async open might then block and wait when
 * querying information from the file (eg. image size).
 *
 * Only a few objects implement this feature, and this flag may be ignored by
 * EFL. In that case, get() will always return false.
 *
 * @param[in] async Flag for asynchronous open.
 *
 * @ingroup Efl_File
 */
EOAPI void  efl_file_async_set(Eina_Bool async);

/**
 * @brief Retrieves the asynchronous open flag, which will be true only if
 * enabled and supported by the object.
 *
 * @return Flag for asynchronous open.
 *
 * @ingroup Efl_File
 */
EOAPI Eina_Bool  efl_file_async_get(void);

/**
 * @brief Save the given image object's contents to an (image) file.
 *
 * The extension suffix on @c file will determine which saver module Evas is to
 * use when saving, thus the final file's format. If the file supports multiple
 * data stored in it (Eet ones), you can specify the key to be used as the
 * index of the image in it.
 *
 * You can specify some flags when saving the image.  Currently acceptable
 * flags are @c quality and @c compress. Eg.: "quality=100 compress=9"
 *
 * @param[in] key The image key in the file (if an Eet one), or @c null,
 * otherwise.
 * @param[in] flags String containing the flags to be used ($null for none).
 *
 * @ingroup Efl_File
 */
EOAPI Eina_Bool  efl_file_save(const char *file, const char *key, const char *flags);

/**
 * @brief Eject the represented object.
 *
 * Get rid of and clean the pointed resource.
 *
 * @ingroup Efl_File
 */
EOAPI void  efl_file_eject(void);

/**
 * @brief Block and wait until all asynchronous operations are completed.
 * Unless the async flag was set on this object, this method has no effect.
 *
 * @return @c false if an error occured, else @c true
 *
 * @ingroup Efl_File
 */
EOAPI Eina_Bool  efl_file_async_wait(void);

EOAPI extern const Eo_Event_Description _EFL_FILE_EVENT_ASYNC_OPENED;
EOAPI extern const Eo_Event_Description _EFL_FILE_EVENT_ASYNC_ERROR;

/** The file was successfully opened asynchronously
 *
 * @ingroup Efl_File
 */
#define EFL_FILE_EVENT_ASYNC_OPENED (&(_EFL_FILE_EVENT_ASYNC_OPENED))

/** Error occured in asynchronous file operation
 *
 * @ingroup Efl_File
 */
#define EFL_FILE_EVENT_ASYNC_ERROR (&(_EFL_FILE_EVENT_ASYNC_ERROR))

#endif
