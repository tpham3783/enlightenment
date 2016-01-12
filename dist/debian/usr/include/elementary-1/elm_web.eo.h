#ifndef _ELM_WEB_EO_H_
#define _ELM_WEB_EO_H_

#ifndef _ELM_WEB_EO_CLASS_TYPE
#define _ELM_WEB_EO_CLASS_TYPE

typedef Eo Elm_Web;

#endif

#ifndef _ELM_WEB_EO_TYPES
#define _ELM_WEB_EO_TYPES


#endif
#define ELM_WEB_CLASS elm_web_class_get()

EAPI const Eo_Class *elm_web_class_get(void) EINA_CONST;

/**
 * @brief Sets whether to highlight the matched marks.
 *
 * If enabled, marks set with @ref elm_obj_web_text_matches_mark will be
 * highlighted.
 *
 * @param[in] highlight Whether to highlight the marks or not.
 *
 * @ingroup Elm_Web
 */
EOAPI Eina_Bool elm_obj_web_text_matches_highlight_set(Eina_Bool highlight);

/**
 * @brief Get whether highlighting marks is enabled.
 *
 * @return Whether to highlight the marks or not.
 *
 * @ingroup Elm_Web
 */
EOAPI Eina_Bool elm_obj_web_text_matches_highlight_get(void);

/**
 * @brief Change useragent of a elm_web object.
 *
 * @param[in] user_agent String for useragent.
 *
 * @ingroup Elm_Web
 */
EOAPI void elm_obj_web_useragent_set(const char *user_agent);

/**
 * @brief Return current useragent of elm_web object.
 *
 * @return String for useragent.
 *
 * @ingroup Elm_Web
 */
EOAPI const char *elm_obj_web_useragent_get(void);

/**
 * @brief Sets the URL for the web object.
 *
 * It must be a full URL, with resource included, in the form
 * http://www.enlightenment.org or file:///tmp/something.html
 *
 * @param[in] url The URL to set.
 *
 * @ingroup Elm_Web
 */
EOAPI Eina_Bool elm_obj_web_url_set(const char *url);

/**
 * @brief Get the current URL for the object.
 *
 * The returned string must not be freed and is guaranteed to be stringshared.
 *
 * @return The URL to set.
 *
 * @ingroup Elm_Web
 */
EOAPI const char *elm_obj_web_url_get(void);

/**
 * @brief Sets the background color to be used by the web object.
 *
 * This is the color that will be used by default when the loaded page does not
 * set it's own. Color values are pre-multiplied.
 *
 * @param[in] r Red component.
 * @param[in] g Green component.
 * @param[in] b Blue component.
 * @param[in] a Alpha component.
 *
 * @ingroup Elm_Web
 */
EOAPI void elm_obj_web_bg_color_set(int r, int g, int b, int a);

/**
 * @brief Get the background color to be used by the web object.
 *
 * This is the color that will be used by default when the loaded page does not
 * set it's own. Color values are pre-multiplied.
 *
 * @param[out] r Red component.
 * @param[out] g Green component.
 * @param[out] b Blue component.
 * @param[out] a Alpha component.
 *
 * @ingroup Elm_Web
 */
EOAPI void elm_obj_web_bg_color_get(int *r, int *g, int *b, int *a);

/**
 * @brief Sets the default dialogs to use an Inwin instead of a normal window.
 *
 * If set, then the default implementation for the JavaScript dialogs and file
 * selector will be opened in an Inwin. Otherwise they will use a normal
 * separated window.
 *
 * @param[in] value
 *
 * @ingroup Elm_Web
 */
EOAPI void elm_obj_web_inwin_mode_set(Eina_Bool value);

/** Get whether Inwin mode is set for the current object.
 *
 * @ingroup Elm_Web
 */
EOAPI Eina_Bool elm_obj_web_inwin_mode_get(void);

/**
 * @brief Sets whether to use tab propagation.
 *
 * If tab propagation is enabled, whenever the user presses the Tab key,
 * Elementary will handle it and switch focus to the next widget. The default
 * value is disabled, where WebKit will handle the Tab key to cycle focus
 * though its internal objects, jumping to the next widget only when that cycle
 * ends.
 *
 * @param[in] propagate Whether to propagate Tab keys to Elementary or not.
 *
 * @ingroup Elm_Web
 */
EOAPI void elm_obj_web_tab_propagate_set(Eina_Bool propagate);

/**
 * @brief Get the status of the tab propagation.
 *
 * @return Whether to propagate Tab keys to Elementary or not.
 *
 * @ingroup Elm_Web
 */
EOAPI Eina_Bool elm_obj_web_tab_propagate_get(void);

/**
 * @brief Enables or disables the browsing history.
 *
 * @param[in] enable Whether to enable or disable the browsing history.
 *
 * @ingroup Elm_Web
 */
EOAPI void elm_obj_web_history_enabled_set(Eina_Bool enable);

/**
 * @brief Get whether browsing history is enabled for the given object.
 *
 * @return Whether to enable or disable the browsing history.
 *
 * @ingroup Elm_Web
 */
EOAPI Eina_Bool elm_obj_web_history_enabled_get(void);

/**
 * @brief Sets the zoom mode to use.
 *
 * The modes can be any of those defined in .Elm_Web_Zoom_Mode, except
 * .ELM_WEB_ZOOM_MODE_LAST. The default is .ELM_WEB_ZOOM_MODE_MANUAL.
 *
 * .ELM_WEB_ZOOM_MODE_MANUAL means the zoom level will be controlled with the
 * @ref elm_obj_web_zoom_set function.
 *
 * .ELM_WEB_ZOOM_MODE_AUTO_FIT will calculate the needed zoom level to make
 * sure the entirety of the web object's contents are shown.
 *
 * .ELM_WEB_ZOOM_MODE_AUTO_FILL will calculate the needed zoom level to fit the
 * contents in the web object's size, without leaving any space unused.
 *
 * @param[in] mode The mode to set.
 *
 * @ingroup Elm_Web
 */
EOAPI void elm_obj_web_zoom_mode_set(Elm_Web_Zoom_Mode mode);

/**
 * @brief Get the currently set zoom mode.
 *
 * @return The mode to set.
 *
 * @ingroup Elm_Web
 */
EOAPI Elm_Web_Zoom_Mode elm_obj_web_zoom_mode_get(void);

/**
 * @brief Sets the zoom level of the web object.
 *
 * Zoom level matches the Webkit API, so 1.0 means normal zoom, with higher
 * values meaning zoom in and lower meaning zoom out. This function will only
 * affect the zoom level if the mode set with @ref elm_obj_web_zoom_mode_set is
 * .ELM_WEB_ZOOM_MODE_MANUAL.
 *
 * @param[in] zoom The zoom level to set.
 *
 * @ingroup Elm_Web
 */
EOAPI void elm_obj_web_zoom_set(double zoom);

/**
 * @brief Get the current zoom level set on the web object
 *
 * Note that this is the zoom level set on the web object and not that of the
 * underlying Webkit one. In the .ELM_WEB_ZOOM_MODE_MANUAL mode, the two zoom
 * levels should match, but for the other two modes the Webkit zoom is
 * calculated internally to match the chosen mode without changing the zoom
 * level set for the web object.
 *
 * @return The zoom level to set.
 *
 * @ingroup Elm_Web
 */
EOAPI double elm_obj_web_zoom_get(void);

/**
 * @brief Sets the function to call when a console message is emitted from JS.
 *
 * This hook will be called when a console message is emitted from JavaScript.
 * There is no default implementation for this feature.
 *
 * @param[in] func The callback function to be used.
 * @param[in] data User data.
 *
 * @ingroup Elm_Web
 */
EOAPI void elm_obj_web_console_message_hook_set(Elm_Web_Console_Message func, void *data);

/**
 * @brief Sets the function to call when a new window is requested.
 *
 * This hook will be called when a request to create a new window is issued
 * from the web page loaded. There is no default implementation for this
 * feature, so leaving this unset or passing @c null in @c func will prevent
 * new windows from opening.
 *
 * @param[in] func The hook function to be called when a window is requested.
 * @param[in] data User data.
 *
 * @ingroup Elm_Web
 */
EOAPI void elm_obj_web_window_create_hook_set(Elm_Web_Window_Open func, void *data);

/**
 * @brief Sets the function to call when an file selector dialog.
 *
 * This hook will be called when a JavaScript file selector dialog is
 * requested. If no function is set or @c null is passed in @c func, the
 * default implementation will take place.
 *
 * @param[in] func The callback function to be used.
 * @param[in] data User data.
 *
 * @ingroup Elm_Web
 */
EOAPI void elm_obj_web_dialog_file_selector_hook_set(Elm_Web_Dialog_File_Selector func, void *data);

/**
 * @brief Sets the function to call when an confirm dialog.
 *
 * This hook will be called when a JavaScript confirm dialog is requested. If
 * no function is set or @c null is passed in @c func, the default
 * implementation will take place.
 *
 * @param[in] func The callback function to be used.
 * @param[in] data User data.
 *
 * @ingroup Elm_Web
 */
EOAPI void elm_obj_web_dialog_confirm_hook_set(Elm_Web_Dialog_Confirm func, void *data);

/**
 * @brief Tells the web object which index in the currently open popup was
 * selected.
 *
 * When the user handles the popup creation from the "popup,created" signal, it
 * needs to tell the web object which item was selected by calling this
 * function with the index corresponding to the item.
 *
 * @param[in] idx The index selected.
 *
 * @ingroup Elm_Web
 */
EOAPI void elm_obj_web_popup_selected_set(int idx);

/**
 * @brief Sets the function to call when an prompt dialog.
 *
 * This hook will be called when a JavaScript prompt dialog is requested. If no
 * function is set or @c null is passed in @c func, the default implementation
 * will take place.
 *
 * @param[in] func The callback function to be used.
 * @param[in] data User data.
 *
 * @ingroup Elm_Web
 */
EOAPI void elm_obj_web_dialog_prompt_hook_set(Elm_Web_Dialog_Prompt func, void *data);

/**
 * @brief Sets the function to call when an alert dialog.
 *
 * This hook will be called when a JavaScript alert dialog is requested. If no
 * function is set or @c null is passed in @c func, the default implementation
 * will take place.
 *
 * @param[in] func callback function to be used.
 * @param[in] data User data.
 *
 * @ingroup Elm_Web
 */
EOAPI void elm_obj_web_dialog_alert_hook_set(Elm_Web_Dialog_Alert func, void *data);

/** Queries whether it's possible to go forward in history.
 *
 * @ingroup Elm_Web
 */
EOAPI Eina_Bool elm_obj_web_forward_possible_get(void);

/**
 * @brief Get internal ewk_view object from web object.
 *
 * Elementary may not provide some low level features of EWebKit, instead of
 * cluttering the API with proxy methods we opted to return the internal
 * reference. Be careful using it as it may interfere with elm_web behavior.
 *
 * @return The internal ewk_view object or @c null if it does not exist.
 * (Failure to create or Elementary compiled without ewebkit)
 *
 * @ingroup Elm_Web
 */
EOAPI Evas_Object *elm_obj_web_webkit_view_get(void);

/** Queries whether it's possible to go back in history.
 *
 * @ingroup Elm_Web
 */
EOAPI Eina_Bool elm_obj_web_back_possible_get(void);

/**
 * @brief Get the overall loading progress of the page.
 *
 * Returns the estimated loading progress of the page, with a value between 0.0
 * and 1.0. This is an estimated progress accounting for all the frames
 * included in the page.
 *
 * @return A value between 0.0 and 1.0 indicating the progress, or -1.0 on
 * failure.
 *
 * @ingroup Elm_Web
 */
EOAPI double elm_obj_web_load_progress_get(void);

/**
 * @brief Get a copy of the currently selected text.
 *
 * The string returned must be freed by the user when it's done with it.
 *
 * @return A newly allocated string, or @c null if nothing is selected or an
 * error occurred.
 *
 * @ingroup Elm_Web
 */
EOAPI const char *elm_obj_web_selection_get(void);

/**
 * @brief Get the current title.
 *
 * The returned string must not be freed and is guaranteed to be stringshared.
 *
 * @return A stringshared internal string with the current title, or @c null on
 * failure.
 *
 * @ingroup Elm_Web
 */
EOAPI const char *elm_obj_web_title_get(void);

/**
 * @brief Jumps the given number of steps in the browsing history.
 *
 * The @c steps value can be a negative integer to back in history, or a
 * positive to move forward.
 *
 * @param[in] steps The number of steps to jump.
 *
 * @return @c true on success, @c false on error or if not enough history
 * exists to jump the given number of steps
 *
 * @ingroup Elm_Web
 */
EOAPI Eina_Bool elm_obj_web_navigate(int steps);

/**
 * @brief Goes back one step in the browsing history.
 *
 * This is equivalent to calling elm_web_object_navigate(obj, -1);
 *
 * @ingroup Elm_Web
 */
EOAPI Eina_Bool elm_obj_web_back(void);

/**
 * @brief Loads the specified @c html string as the content of the web object.
 *
 * External objects such as stylesheets or images referenced in the HTML
 * document are located relative to @c base_url.
 *
 * If an @c unreachable_url is passed it is used as the url for the loaded
 * content. This is typically used to display error pages for a failed load.
 *
 * @param[in] base_url Base URL used for relative paths to external objects
 * (optional).
 * @param[in] unreachable_url URL that could not be reached (optional).
 *
 * @since 1.9
 *
 * @ingroup Elm_Web
 */
EOAPI Eina_Bool elm_obj_web_html_string_load(const char *html, const char *base_url, const char *unreachable_url);

/**
 * @brief Searches the given string in a document.
 *
 * @param[in] case_sensitive If search should be case sensitive or not.
 * @param[in] forward If search is from cursor and on or backwards.
 * @param[in] wrap If search should wrap at the end.
 *
 * @return @c true if the given string was found, @c false if not or failure.
 *
 * @ingroup Elm_Web
 */
EOAPI Eina_Bool elm_obj_web_text_search(const char *string, Eina_Bool case_sensitive, Eina_Bool forward, Eina_Bool wrap);

/**
 * @brief Dismisses an open dropdown popup
 *
 * When the popup from a dropdown widget is to be dismissed, either after
 * selecting an option or to cancel it, this function must be called, which
 * will later emit an "popup,willdelete" signal to notify the user that any
 * memory and objects related to this popup can be freed.
 *
 * @return @c true if the menu was successfully destroyed, or @c false if there
 * was no menu to destroy.
 *
 * @ingroup Elm_Web
 */
EOAPI Eina_Bool elm_obj_web_popup_destroy(void);

/**
 * @brief Shows the given region in the web object.
 *
 * @param[in] y The y coordinate of the region to show.
 * @param[in] w The width of the region to show.
 * @param[in] h The height of the region to show.
 *
 * @ingroup Elm_Web
 */
EOAPI void elm_obj_web_region_show(int x, int y, int w, int h);

/**
 * @brief Goes forward one step in the browsing history.
 *
 * This is equivalent to calling elm_web_object_navigate(obj, 1);
 *
 * See also @ref elm_obj_web_history_enabled_set,
 * @ref elm_obj_web_forward_possible_get, @ref elm_obj_web_back,
 * @ref elm_obj_web_navigate.
 *
 * @return @c true on success, @c false otherwise.
 *
 * @ingroup Elm_Web
 */
EOAPI Eina_Bool elm_obj_web_forward(void);

/**
 * @brief Marks matches of the given string in a document.
 *
 * @param[in] case_sensitive If match should be case sensitive or not.
 * @param[in] highlight If matches should be highlighted.
 * @param[in] limit Maximum amount of matches, or zero to unlimited.
 *
 * @return Number of matched @c string.
 *
 * @ingroup Elm_Web
 */
EOAPI unsigned int elm_obj_web_text_matches_mark(const char *string, Eina_Bool case_sensitive, Eina_Bool highlight, unsigned int limit);

/**
 * @brief Brings in the region to the visible area.
 *
 * Like @ref elm_obj_web_region_show, but it animates the scrolling of the
 * object to show the area.
 *
 * @param[in] y The y coordinate of the region to show.
 * @param[in] w The width of the region to show.
 * @param[in] h The height of the region to show.
 *
 * @ingroup Elm_Web
 */
EOAPI void elm_obj_web_region_bring_in(int x, int y, int w, int h);

/**
 * @brief Stops loading the current page.
 *
 * Cancels the loading of the current page in the web object. This will cause a
 * "load,error" signal to be emitted, with the is_cancellation flag set to
 * @c true.
 *
 * @return @c true if the cancel was successful, @c false otherwise.
 *
 * @ingroup Elm_Web
 */
EOAPI Eina_Bool elm_obj_web_stop(void);

/**
 * @brief Queries whether it's possible to jump the given number of steps.
 *
 * The @c steps value can be a negative integer to back in history, or positive
 * to move forward.
 *
 * @param[in] steps The number of steps to check for.
 *
 * @return @c true if enough history exists to perform the given jump, @c false
 * otherwise.
 *
 * @ingroup Elm_Web
 */
EOAPI Eina_Bool elm_obj_web_navigate_possible_get(int steps);

/**
 * @brief Requests a reload of the current document, avoiding any existing
 * caches.
 *
 * @return @c true on success, @c false otherwise.
 *
 * @ingroup Elm_Web
 */
EOAPI Eina_Bool elm_obj_web_reload_full(void);

/**
 * @brief Clears all marked matches in the document.
 *
 * @return @c true on success, @c false otherwise.
 *
 * @ingroup Elm_Web
 */
EOAPI Eina_Bool elm_obj_web_text_matches_unmark_all(void);

/**
 * @brief Requests a reload of the current document in the object.
 *
 * @return @c true on success, @c false otherwise.
 *
 * @ingroup Elm_Web
 */
EOAPI Eina_Bool elm_obj_web_reload(void);

EOAPI extern const Eo_Event_Description _ELM_WEB_EVENT_URI_CHANGED;
EOAPI extern const Eo_Event_Description _ELM_WEB_EVENT_URL_CHANGED;
EOAPI extern const Eo_Event_Description _ELM_WEB_EVENT_WINDOWS_CLOSE_REQUEST;

/**
 * No description
 */
#define ELM_WEB_EVENT_URI_CHANGED (&(_ELM_WEB_EVENT_URI_CHANGED))

/**
 * No description
 */
#define ELM_WEB_EVENT_URL_CHANGED (&(_ELM_WEB_EVENT_URL_CHANGED))

/**
 * No description
 */
#define ELM_WEB_EVENT_WINDOWS_CLOSE_REQUEST (&(_ELM_WEB_EVENT_WINDOWS_CLOSE_REQUEST))

#endif
