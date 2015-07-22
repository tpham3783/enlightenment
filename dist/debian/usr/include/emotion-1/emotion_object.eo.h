#ifndef _EMOTION_OBJECT_EO_H_
#define _EMOTION_OBJECT_EO_H_

#ifndef _EMOTION_OBJECT_EO_CLASS_TYPE
#define _EMOTION_OBJECT_EO_CLASS_TYPE

typedef Eo Emotion_Object;

#endif

#ifndef _EMOTION_OBJECT_EO_TYPES
#define _EMOTION_OBJECT_EO_TYPES


#endif
#define EMOTION_OBJECT_CLASS emotion_object_class_get()

EAPI const Eo_Class *emotion_object_class_get(void) EINA_CONST;

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
EOAPI void  emotion_obj_option_set(const char *opt, const char *val);

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
EOAPI Eina_Bool  emotion_obj_engine_set(const char *module_filename);

EOAPI extern const Eo_Event_Description _EMOTION_OBJECT_EVENT_FRAME_DECODE;
EOAPI extern const Eo_Event_Description _EMOTION_OBJECT_EVENT_POSITION_UPDATE;
EOAPI extern const Eo_Event_Description _EMOTION_OBJECT_EVENT_LENGTH_CHANGE;
EOAPI extern const Eo_Event_Description _EMOTION_OBJECT_EVENT_FRAME_RESIZE;
EOAPI extern const Eo_Event_Description _EMOTION_OBJECT_EVENT_DECODE_STOP;
EOAPI extern const Eo_Event_Description _EMOTION_OBJECT_EVENT_PLAYBACK_STARTED;
EOAPI extern const Eo_Event_Description _EMOTION_OBJECT_EVENT_PLAYBACK_FINISHED;
EOAPI extern const Eo_Event_Description _EMOTION_OBJECT_EVENT_AUDIO_LEVEL_CHANGE;
EOAPI extern const Eo_Event_Description _EMOTION_OBJECT_EVENT_CHANNELS_CHANGE;
EOAPI extern const Eo_Event_Description _EMOTION_OBJECT_EVENT_TITLE_CHANGE;
EOAPI extern const Eo_Event_Description _EMOTION_OBJECT_EVENT_PROGRESS_CHANGE;
EOAPI extern const Eo_Event_Description _EMOTION_OBJECT_EVENT_REF_CHANGE;
EOAPI extern const Eo_Event_Description _EMOTION_OBJECT_EVENT_BUTTON_NUM_CHANGE;
EOAPI extern const Eo_Event_Description _EMOTION_OBJECT_EVENT_BUTTON_CHANGE;
EOAPI extern const Eo_Event_Description _EMOTION_OBJECT_EVENT_OPEN_DONE;
EOAPI extern const Eo_Event_Description _EMOTION_OBJECT_EVENT_POSITION_SAVE_SUCCEED;
EOAPI extern const Eo_Event_Description _EMOTION_OBJECT_EVENT_POSITION_SAVE_FAILED;
EOAPI extern const Eo_Event_Description _EMOTION_OBJECT_EVENT_POSITION_LOAD_SUCCEED;
EOAPI extern const Eo_Event_Description _EMOTION_OBJECT_EVENT_POSITION_LOAD_FAILED;

/**
 * No description
 */
#define EMOTION_OBJECT_EVENT_FRAME_DECODE (&(_EMOTION_OBJECT_EVENT_FRAME_DECODE))

/**
 * No description
 */
#define EMOTION_OBJECT_EVENT_POSITION_UPDATE (&(_EMOTION_OBJECT_EVENT_POSITION_UPDATE))

/**
 * No description
 */
#define EMOTION_OBJECT_EVENT_LENGTH_CHANGE (&(_EMOTION_OBJECT_EVENT_LENGTH_CHANGE))

/**
 * No description
 */
#define EMOTION_OBJECT_EVENT_FRAME_RESIZE (&(_EMOTION_OBJECT_EVENT_FRAME_RESIZE))

/**
 * No description
 */
#define EMOTION_OBJECT_EVENT_DECODE_STOP (&(_EMOTION_OBJECT_EVENT_DECODE_STOP))

/**
 * No description
 */
#define EMOTION_OBJECT_EVENT_PLAYBACK_STARTED (&(_EMOTION_OBJECT_EVENT_PLAYBACK_STARTED))

/**
 * No description
 */
#define EMOTION_OBJECT_EVENT_PLAYBACK_FINISHED (&(_EMOTION_OBJECT_EVENT_PLAYBACK_FINISHED))

/**
 * No description
 */
#define EMOTION_OBJECT_EVENT_AUDIO_LEVEL_CHANGE (&(_EMOTION_OBJECT_EVENT_AUDIO_LEVEL_CHANGE))

/**
 * No description
 */
#define EMOTION_OBJECT_EVENT_CHANNELS_CHANGE (&(_EMOTION_OBJECT_EVENT_CHANNELS_CHANGE))

/**
 * No description
 */
#define EMOTION_OBJECT_EVENT_TITLE_CHANGE (&(_EMOTION_OBJECT_EVENT_TITLE_CHANGE))

/**
 * No description
 */
#define EMOTION_OBJECT_EVENT_PROGRESS_CHANGE (&(_EMOTION_OBJECT_EVENT_PROGRESS_CHANGE))

/**
 * No description
 */
#define EMOTION_OBJECT_EVENT_REF_CHANGE (&(_EMOTION_OBJECT_EVENT_REF_CHANGE))

/**
 * No description
 */
#define EMOTION_OBJECT_EVENT_BUTTON_NUM_CHANGE (&(_EMOTION_OBJECT_EVENT_BUTTON_NUM_CHANGE))

/**
 * No description
 */
#define EMOTION_OBJECT_EVENT_BUTTON_CHANGE (&(_EMOTION_OBJECT_EVENT_BUTTON_CHANGE))

/**
 * No description
 */
#define EMOTION_OBJECT_EVENT_OPEN_DONE (&(_EMOTION_OBJECT_EVENT_OPEN_DONE))

/**
 * No description
 */
#define EMOTION_OBJECT_EVENT_POSITION_SAVE_SUCCEED (&(_EMOTION_OBJECT_EVENT_POSITION_SAVE_SUCCEED))

/**
 * No description
 */
#define EMOTION_OBJECT_EVENT_POSITION_SAVE_FAILED (&(_EMOTION_OBJECT_EVENT_POSITION_SAVE_FAILED))

/**
 * No description
 */
#define EMOTION_OBJECT_EVENT_POSITION_LOAD_SUCCEED (&(_EMOTION_OBJECT_EVENT_POSITION_LOAD_SUCCEED))

/**
 * No description
 */
#define EMOTION_OBJECT_EVENT_POSITION_LOAD_FAILED (&(_EMOTION_OBJECT_EVENT_POSITION_LOAD_FAILED))

#endif
