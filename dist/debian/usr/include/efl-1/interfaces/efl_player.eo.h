#ifndef _EFL_PLAYER_EO_H_
#define _EFL_PLAYER_EO_H_

#ifndef _EFL_PLAYER_EO_CLASS_TYPE
#define _EFL_PLAYER_EO_CLASS_TYPE

typedef Eo Efl_Player;

#endif

#ifndef _EFL_PLAYER_EO_TYPES
#define _EFL_PLAYER_EO_TYPES


#endif
#define EFL_PLAYER_INTERFACE efl_player_interface_get()

EAPI const Eo_Class *efl_player_interface_get(void) EINA_CONST;

/**
 * @brief Whether or not the object data can be played.
 *
 * @return true if the object have playable data, false otherwise
 *
 * @ingroup Efl_Player
 */
EOAPI Eina_Bool efl_player_playable_get(void);

/**
 * @brief Set play/pause state of the media file.
 *
 * This functions sets the currently playing status of the video. Using this
 * function to play or pause the video doesn't alter it's current position.
 *
 * @param[in] play true if playing, false otherwise.
 *
 * @ingroup Efl_Player
 */
EOAPI void efl_player_play_set(Eina_Bool play);

/**
 * @brief Get play/pause state of the media file.
 *
 * @return true if playing, false otherwise.
 *
 * @ingroup Efl_Player
 */
EOAPI Eina_Bool efl_player_play_get(void);

/**
 * @brief Set the position in the media file.
 *
 * This functions sets the current position of the media file to "sec", this
 * only works on seekable streams. Setting the position doesn't change the
 * playing state of the media file.
 *
 * @param[in] sec The position (in seconds).
 *
 * @ingroup Efl_Player
 */
EOAPI void efl_player_position_set(double sec);

/**
 * @brief Get the position in the media file.
 *
 * The position is returned as the number of seconds since the beginning of the
 * media file.
 *
 * @return The position (in seconds).
 *
 * @ingroup Efl_Player
 */
EOAPI double efl_player_position_get(void);

/**
 * @brief Get how much of the file has been played.
 *
 * This function gets the progress in playing the file, the return value is in
 * the [0, 1] range.
 *
 * @return The progress within the [0, 1] range.
 *
 * @ingroup Efl_Player
 */
EOAPI double efl_player_progress_get(void);

/**
 * @brief Control the play speed of the media file.
 *
 * This function control the speed with which the media file will be played.
 * 1.0 represents the normal speed, 2 double speed, 0.5 half speed and so on.
 *
 * @param[in] speed The play speed in the [0, infinity) range.
 *
 * @ingroup Efl_Player
 */
EOAPI void efl_player_play_speed_set(double speed);

/**
 * @brief Control the play speed of the media file.
 *
 * This function control the speed with which the media file will be played.
 * 1.0 represents the normal speed, 2 double speed, 0.5 half speed and so on.
 *
 * @return The play speed in the [0, infinity) range.
 *
 * @ingroup Efl_Player
 */
EOAPI double efl_player_play_speed_get(void);

/**
 * @brief Control the audio volume.
 *
 * Controls the audio volume of the stream being played. This has nothing to do
 * with the system volume. This volume will be multiplied by the system volume.
 * e.g.: if the current volume level is 0.5, and the system volume is 50%, it
 * will be 0.5 * 0.5 = 0.25.
 *
 * @param[in] volume The volume level
 *
 * @ingroup Efl_Player
 */
EOAPI void efl_player_audio_volume_set(double volume);

/**
 * @brief Control the audio volume.
 *
 * Controls the audio volume of the stream being played. This has nothing to do
 * with the system volume. This volume will be multiplied by the system volume.
 * e.g.: if the current volume level is 0.5, and the system volume is 50%, it
 * will be 0.5 * 0.5 = 0.25.
 *
 * @return The volume level
 *
 * @ingroup Efl_Player
 */
EOAPI double efl_player_audio_volume_get(void);

/**
 * @brief This property controls the audio mute state.
 *
 * @param[in] mute The mute state. True or false.
 *
 * @ingroup Efl_Player
 */
EOAPI void efl_player_audio_mute_set(Eina_Bool mute);

/**
 * @brief This property controls the audio mute state.
 *
 * @return The mute state. True or false.
 *
 * @ingroup Efl_Player
 */
EOAPI Eina_Bool efl_player_audio_mute_get(void);

/**
 * @brief Get the length of play for the media file.
 *
 * @return The length of the stream in seconds.
 *
 * @ingroup Efl_Player
 */
EOAPI double efl_player_length_get(void);

/**
 * @brief Get whether the media file is seekable.
 *
 * @return True if seekable.
 *
 * @ingroup Efl_Player
 */
EOAPI Eina_Bool efl_player_seekable_get(void);


#endif
