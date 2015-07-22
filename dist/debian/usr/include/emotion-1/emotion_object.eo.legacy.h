#ifndef _EMOTION_OBJECT_EO_LEGACY_H_
#define _EMOTION_OBJECT_EO_LEGACY_H_

#ifndef _EMOTION_OBJECT_EO_CLASS_TYPE
#define _EMOTION_OBJECT_EO_CLASS_TYPE

typedef Eo Emotion_Object;

#endif

#ifndef _EMOTION_OBJECT_EO_TYPES
#define _EMOTION_OBJECT_EO_TYPES


#endif

/**
 * @brief Set the specified option for the current module.
 *
 * This function allows one to mute the video or audio of the emotion object.
 *
 * Please don't use this function, consider using @ref
 * emotion_object_audio_mute_set and @ref emotion_object_video_mute_set
 * instead.
 *
 * @param[in] opt The option that is being set. Currently supported options:
 * "video" and "audio".
 * @param[in] val The value of the option. Currently only supports "off"
 * (?!?!?!)
 *
 * @ingroup Emotion_Object
 */
EAPI void emotion_object_module_option_set(Emotion_Object *obj, const char *opt, const char *val);

/**
 * @brief Initializes an emotion object with the specified module.
 *
 * This function is required after creating the emotion object, in order to
 * specify which module will be used with this object. Different objects can
 * use different modules to play a media file. The current supported modules
 * are gstreamer and xine.
 *
 * To use any of them, you need to make sure that support for them was compiled
 * correctly.
 *
 * It's possible to disable the build of a module with --disable-module_name.
 *
 * See also @ref emotion_object_add and @ref emotion_object_file_set.
 *
 * @param[in] module_filename The name of the module to be used (gstreamer or
 * xine).
 *
 * @return true if the specified module was successfully initialized for this
 * object, false otherwise.
 *
 * @ingroup Emotion_Object
 */
EAPI Eina_Bool emotion_object_init(Emotion_Object *obj, const char *module_filename);

#endif
