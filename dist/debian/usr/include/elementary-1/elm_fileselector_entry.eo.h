#ifndef _ELM_FILESELECTOR_ENTRY_EO_H_
#define _ELM_FILESELECTOR_ENTRY_EO_H_

#ifndef _ELM_FILESELECTOR_ENTRY_EO_CLASS_TYPE
#define _ELM_FILESELECTOR_ENTRY_EO_CLASS_TYPE

typedef Eo Elm_Fileselector_Entry;

#endif

#ifndef _ELM_FILESELECTOR_ENTRY_EO_TYPES
#define _ELM_FILESELECTOR_ENTRY_EO_TYPES


#endif
#define ELM_FILESELECTOR_ENTRY_CLASS elm_fileselector_entry_class_get()

EAPI const Eo_Class *elm_fileselector_entry_class_get(void) EINA_CONST;

/**
 * @brief Set whether a given file selector entry widget's internal file
 * selector will raise an Elementary "inner window", instead of a dedicated
 * Elementary window. By default, it depends on the current profile.
 *
 * See also @ref elm_win_inwin_add for more information on inner windows,
 * @ref elm_obj_fileselector_entry_inwin_mode_get.
 *
 * @param[in] value @c true to make it use an inner window, @c false to make it
 * use a dedicated window.
 *
 * @ingroup Elm_Fileselector_Entry
 */
EOAPI void elm_obj_fileselector_entry_inwin_mode_set(Eina_Bool value);

/**
 * @brief Get whether a given file selector entry widget's internal file
 * selector will raise an Elementary "inner window", instead of a dedicated
 * Elementary window.
 *
 * See also @ref elm_obj_fileselector_entry_inwin_mode_set for more details.
 *
 * @return @c true to make it use an inner window, @c false to make it use a
 * dedicated window.
 *
 * @ingroup Elm_Fileselector_Entry
 */
EOAPI Eina_Bool elm_obj_fileselector_entry_inwin_mode_get(void);

/**
 * @brief Set the size of a given file selector entry widget's window, holding
 * the file selector itself.
 *
 * @note it will only take any effect if the file selector entry widget is not
 * under "inwin mode". The default size for the window (when applicable) is
 * 400x400 pixels.
 *
 * See also @ref elm_obj_fileselector_entry_window_size_get.
 *
 * @param[in] width The window's width.
 * @param[in] height The window's height.
 *
 * @ingroup Elm_Fileselector_Entry
 */
EOAPI void elm_obj_fileselector_entry_window_size_set(Evas_Coord width, Evas_Coord height);

/**
 * @brief Get the size of a given file selector entry widget's window, holding
 * the file selector itself.
 *
 * @note Use @c null pointers on the size values you're not interested in:
 * they'll be ignored by the function.
 *
 * See also @ref elm_obj_fileselector_entry_window_size_set, for more details.
 *
 * @param[out] width The window's width.
 * @param[out] height The window's height.
 *
 * @ingroup Elm_Fileselector_Entry
 */
EOAPI void elm_obj_fileselector_entry_window_size_get(Evas_Coord *width, Evas_Coord *height);

/**
 * @brief Set the title for a given file selector entry widget's window
 *
 * This will change the window's title, when the file selector pops out after a
 * click on the entry's button. Those windows have the default (unlocalized)
 * value of $"Select a file" as titles.
 *
 * @note It will only take any effect if the file selector entry widget is not
 * under "inwin mode".
 *
 * See also @ref elm_obj_fileselector_entry_window_title_get.
 *
 * @param[in] title The title string.
 *
 * @ingroup Elm_Fileselector_Entry
 */
EOAPI void elm_obj_fileselector_entry_window_title_set(const char *title);

/**
 * @brief Get the title set for a given file selector entry widget's window.
 *
 * See also @ref elm_obj_fileselector_entry_window_title_set for more details.
 *
 * @return The title string.
 *
 * @ingroup Elm_Fileselector_Entry
 */
EOAPI const char *elm_obj_fileselector_entry_window_title_get(void);

EOAPI extern const Eo_Event_Description _ELM_FILESELECTOR_ENTRY_EVENT_CHANGED;
EOAPI extern const Eo_Event_Description _ELM_FILESELECTOR_ENTRY_EVENT_ACTIVATED;
EOAPI extern const Eo_Event_Description _ELM_FILESELECTOR_ENTRY_EVENT_FILE_CHOSEN;
EOAPI extern const Eo_Event_Description _ELM_FILESELECTOR_ENTRY_EVENT_PRESS;

/**
 * No description
 */
#define ELM_FILESELECTOR_ENTRY_EVENT_CHANGED (&(_ELM_FILESELECTOR_ENTRY_EVENT_CHANGED))

/**
 * No description
 */
#define ELM_FILESELECTOR_ENTRY_EVENT_ACTIVATED (&(_ELM_FILESELECTOR_ENTRY_EVENT_ACTIVATED))

/**
 * No description
 */
#define ELM_FILESELECTOR_ENTRY_EVENT_FILE_CHOSEN (&(_ELM_FILESELECTOR_ENTRY_EVENT_FILE_CHOSEN))

/**
 * No description
 */
#define ELM_FILESELECTOR_ENTRY_EVENT_PRESS (&(_ELM_FILESELECTOR_ENTRY_EVENT_PRESS))

#endif
