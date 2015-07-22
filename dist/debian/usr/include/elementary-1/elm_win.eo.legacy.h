#ifndef _ELM_WIN_EO_LEGACY_H_
#define _ELM_WIN_EO_LEGACY_H_

#ifndef _ELM_WIN_EO_CLASS_TYPE
#define _ELM_WIN_EO_CLASS_TYPE

typedef Eo Elm_Win;

#endif

#ifndef _ELM_WIN_EO_TYPES
#define _ELM_WIN_EO_TYPES

/**
 * @brief Defines the types of window that can be created
 *
 * These are hints set on the window so that a running Window Manager knows how
 * the window should be handled and/or what kind of decorations it should have.
 *
 * Currently, only the X11 backed engines use them.
 *
 * @ingroup Elm_Win
 */
typedef enum
{
  ELM_WIN_UNKNOWN = -1,
  ELM_WIN_BASIC, /** A normal window. Indicates a normal, top-level window.
                  * Almost every window will be created with this type. */
  ELM_WIN_DIALOG_BASIC, /** Used for simple dialog windows. */
  ELM_WIN_DESKTOP, /** For special desktop windows, like a background window
                    * holding desktop icons. */
  ELM_WIN_DOCK, /** The window is used as a dock or panel. Usually would be
                 * kept on top of any other window by the Window Manager. */
  ELM_WIN_TOOLBAR, /** The window is used to hold a floating toolbar, or
                    * similar. */
  ELM_WIN_MENU, /** Similar to #ELM_WIN_TOOLBAR. */
  ELM_WIN_UTILITY, /** A persistent utility window, like a toolbox or palette.
                    */
  ELM_WIN_SPLASH, /** Splash window for a starting up application. */
  ELM_WIN_DROPDOWN_MENU, /** The window is a dropdown menu, as when an  entry
                          * in a menubar is clicked. Typically used with
                          * @ref elm_win_override_set. This hint exists for
                          * completion only, as the EFL way of implementing a
                          * menu would not normally use a separate window for
                          * its contents. */
  ELM_WIN_POPUP_MENU, /** Like #ELM_WIN_DROPDOWN_MENU, but for the menu
                       * triggered by right-clicking an object. */
  ELM_WIN_TOOLTIP, /** The window is a tooltip. A short piece of explanatory
                    * text that typically appear after the mouse cursor hovers
                    * over an object for a while. Typically used with
                    * @ref elm_win_override_set and also not very commonly used
                    * in the EFL. */
  ELM_WIN_NOTIFICATION, /** A notification window, like a warning about battery
                         * life or a new E-Mail received. */
  ELM_WIN_COMBO, /** A window holding the contents of a combo box. Not usually
                  * used in the EFL. */
  ELM_WIN_DND, /** Used to indicate the window is a representation of an object
                * being dragged across different windows, or even applications.
                * Typically used with elm_win_override_set(). */
  ELM_WIN_INLINED_IMAGE, /** The window is rendered onto an image buffer. No
                          * actual window is created for this type, instead the
                          * window and all of its contents will be rendered to
                          * an image buffer. This allows to have children
                          * window inside a parent one just like any other
                          * object would be, and do other things like applying
                          * @ref Evas_Map effects to it. This is the only type
                          * of window that requires the parent parameter of
                          * @ref elm_win_add to be a valid @ref Evas_Object. */
  ELM_WIN_SOCKET_IMAGE, /** The window is rendered onto an image buffer and can
                         * be shown other process's plug image object. No
                         * actual window is created for this type, instead the
                         * window and all of its contents will be rendered to
                         * an image buffer and can be shown other process's
                         * plug image object. */
  ELM_WIN_FAKE /** This window was created using a pre-existing canvas. The
                * window widget can be deleted, but the canvas must be managed
                * externally.
                *
                * @since 1.13 */
} Elm_Win_Type;

/**
 * @brief The different layouts that can be requested for the virtual keyboard.
 *
 * When the application window is being managed by Illume, it may request any
 * of the following layouts for the virtual keyboard.
 *
 * @ingroup Elm_Win
 */
typedef enum
{
  ELM_WIN_KEYBOARD_UNKNOWN = 0, /** Unknown keyboard state */
  ELM_WIN_KEYBOARD_OFF, /** Request to deactivate the keyboard */
  ELM_WIN_KEYBOARD_ON, /** Enable keyboard with default layout */
  ELM_WIN_KEYBOARD_ALPHA, /** Alpha (a-z) keyboard layout */
  ELM_WIN_KEYBOARD_NUMERIC, /** Numeric keyboard layout */
  ELM_WIN_KEYBOARD_PIN, /** PIN keyboard layout */
  ELM_WIN_KEYBOARD_PHONE_NUMBER, /** Phone keyboard layout */
  ELM_WIN_KEYBOARD_HEX, /** Hexadecimal numeric keyboard layout */
  ELM_WIN_KEYBOARD_TERMINAL, /** Full (QWERTY) keyboard layout */
  ELM_WIN_KEYBOARD_PASSWORD, /** Password keyboard layout */
  ELM_WIN_KEYBOARD_IP, /** IP keyboard layout */
  ELM_WIN_KEYBOARD_HOST, /** Host keyboard layout */
  ELM_WIN_KEYBOARD_FILE, /** File keyboard layout */
  ELM_WIN_KEYBOARD_URL, /** URL keyboard layout */
  ELM_WIN_KEYBOARD_KEYPAD, /** Keypad layout */
  ELM_WIN_KEYBOARD_J2ME /** J2ME keyboard layout */
} Elm_Win_Keyboard_Mode;

/**
 * @brief In some environments, like phones, you may have an indicator that
 * shows battery status, reception, time etc. This is the indicator.
 *
 * Sometimes you don't want it because you provide the same functionality
 * inside your app, so this will request that the indicator is hidden in this
 * circumstance if you use ELM_ILLUME_INDICATOR_HIDE. The default is to have
 * the indicator shown.
 *
 * @ingroup Elm_Win
 */
typedef enum
{
  ELM_WIN_INDICATOR_UNKNOWN = 0, /** Unknown indicator state */
  ELM_WIN_INDICATOR_HIDE, /** Hides the indicator */
  ELM_WIN_INDICATOR_SHOW /** Shows the indicator */
} Elm_Win_Indicator_Mode;

/** Defines the opacity modes of indicator that can be shown
 *
 * @ingroup Elm_Win
 */
typedef enum
{
  ELM_WIN_INDICATOR_OPACITY_UNKNOWN = 0, /** Unknown indicator opacity mode */
  ELM_WIN_INDICATOR_OPAQUE, /** Opacifies the indicator */
  ELM_WIN_INDICATOR_TRANSLUCENT, /** Be translucent the indicator */
  ELM_WIN_INDICATOR_TRANSPARENT /** Transparentizes the indicator */
} Elm_Win_Indicator_Opacity_Mode;

/** Define the keygrab modes of window. A window may send commands to the
 * Keyrouter according this mode, and perform different actions.
 *
 * @ingroup Elm_Win
 */
typedef enum
{
  ELM_WIN_KEYGRAB_UNKNOWN = 0, /** Unknown keygrab mode */
  ELM_WIN_KEYGRAB_SHARED = 256 /* 1 << 8 */, /** Getting the grabbed-key
                                              * together with the other client
                                              * windows */
  ELM_WIN_KEYGRAB_TOPMOST = 512 /* 1 << 9 */, /** Getting the grabbed-key only
                                               * when window is top of the
                                               * stack */
  ELM_WIN_KEYGRAB_EXCLUSIVE = 1024 /* 1 << 10 */, /** Getting the grabbed-key
                                                   * exclusively regardless of
                                                   * window's position */
  ELM_WIN_KEYGRAB_OVERRIDE_EXCLUSIVE = 2048 /* 1 << 11 */ /** Getting the
                                                           * grabbed-key
                                                           * exclusively
                                                           * regardless of
                                                           * window's position.
                                                           * Being overrided
                                                           * the grab by the
                                                           * other client
                                                           * window */
} Elm_Win_Keygrab_Mode;

/**
 * @brief Available commands that can be sent to the Illume manager.
 *
 * When running under an Illume session, a window may send commands to the
 * Illume manager to perform different actions.
 *
 * @ingroup Elm
 */
typedef enum
{
  ELM_ILLUME_COMMAND_FOCUS_BACK = 0, /** Reverts focus to the previous window
                                      */
  ELM_ILLUME_COMMAND_FOCUS_FORWARD, /** Sends focus to the next window in the
                                     * list */
  ELM_ILLUME_COMMAND_FOCUS_HOME, /** Hides all windows to show the Home screen
                                  */
  ELM_ILLUME_COMMAND_CLOSE /** Closes the currently active window */
} Elm_Illume_Command;


#endif

/**
 * Sets whether the window is a keyboard.
 *
 * @ingroup Win
 *
 * @param[in] is_keyboard If true, the window is a virtual keyboard
 */
EAPI void elm_win_keyboard_win_set(Elm_Win *obj, Eina_Bool is_keyboard);

/**
 * Get whether the window is a keyboard.
 *
 * @return If the window is a virtual keyboard
 *
 * @ingroup Win
 */
EAPI Eina_Bool elm_win_keyboard_win_get(const Elm_Win *obj);

/**
 * Set the window's autodel state.
 *
 * When closing the window in any way outside of the program control, like
 * pressing the X button in the titlebar or using a command from the
 * Window Manager, a "delete,request" signal is emitted to indicate that
 * this event occurred and the developer can take any action, which may
 * include, or not, destroying the window object.
 *
 * When the @p autodel parameter is set, the window will be automatically
 * destroyed when this event occurs, after the signal is emitted.
 * If @p autodel is @c EINA_FALSE, then the window will not be destroyed
 * and is up to the program to do so when it's required.
 *
 * @ingroup Win
 *
 * @param[in] autodel If true, the window will automatically delete itself when
closed
 */
EAPI void elm_win_autodel_set(Elm_Win *obj, Eina_Bool autodel);

/**
 * Get the window's autodel state.
 *
 * @return If the window will automatically delete itself when closed
 *
 * @see elm_win_autodel_set()
 *
 * @ingroup Win
 */
EAPI Eina_Bool elm_win_autodel_get(const Elm_Win *obj);

/**
 * @brief Window's autohide state.
 *
 * This property works similarly to @ref elm_win_autodel_get, automatically
 * handling "delete,request" signals when set to @c trze, with the difference
 * that it will hide the window, instead of destroying it.
 *
 * It is specially designed to work together with
 * @c ELM_POLICY_QUIT_LAST_WINDOW_HIDDEN which allows exiting Elementary's main
 * loop when all the windows are hidden.
 *
 * Note: @ref elm_win_autodel_get and @c autohide are not mutually exclusive.
 * The window will be deleted if both are set to @c true.
 *
 * @param[in] autohide
 *
 * @ingroup Elm_Win
 */
EAPI void elm_win_autohide_set(Elm_Win *obj, Eina_Bool autohide);

/**
 * @brief Window's autohide state.
 *
 * This property works similarly to @ref elm_win_autodel_get, automatically
 * handling "delete,request" signals when set to @c trze, with the difference
 * that it will hide the window, instead of destroying it.
 *
 * It is specially designed to work together with
 * @c ELM_POLICY_QUIT_LAST_WINDOW_HIDDEN which allows exiting Elementary's main
 * loop when all the windows are hidden.
 *
 * Note: @ref elm_win_autodel_get and @c autohide are not mutually exclusive.
 * The window will be deleted if both are set to @c true.
 *
 * @ingroup Elm_Win
 */
EAPI Eina_Bool elm_win_autohide_get(const Elm_Win *obj);

/**
 * Set the override state of a window.
 *
 * A window with @p override set to EINA_TRUE will not be managed by the
 * Window Manager. This means that no decorations of any kind will be shown
 * for it, moving and resizing must be handled by the application, as well
 * as the window visibility.
 *
 * This should not be used for normal windows, and even for not so normal
 * ones, it should only be used when there's a good reason and with a lot
 * of care. Mishandling override windows may result situations that
 * disrupt the normal workflow of the end user.
 *
 * @ingroup Win
 *
 * @param[in] override If true, the window is overridden
 */
EAPI void elm_win_override_set(Elm_Win *obj, Eina_Bool override);

/**
 * Get the override state of a window.
 *
 * @return If true, the window is overridden
 *
 * @see elm_win_override_set()
 *
 * @ingroup Win
 */
EAPI Eina_Bool elm_win_override_get(const Elm_Win *obj);

/**
 * Set the iconified state of a window.
 *
 * @ingroup Win
 *
 * @param[in] iconified If true, the window is iconified
 */
EAPI void elm_win_iconified_set(Elm_Win *obj, Eina_Bool iconified);

/**
 * Get the iconified state of a window.
 *
 * @return If true, the window is iconified
 *
 * @ingroup Win
 */
EAPI Eina_Bool elm_win_iconified_get(const Elm_Win *obj);

/**
 * Set the array of available window rotations.
 *
 * This function is used to set the available rotations to give the hints to WM.
 * WM will refer this hints and set the orientation window properly.
 *
 * @see elm_win_wm_rotation_available_rotations_get()
 *
 * ingroup Win
 * @since 1.9
 *
 * @param[in] rotations The array of rotation value.
 * @param[in] count The size of the @param rotations array.
 */
EAPI void elm_win_wm_rotation_available_rotations_set(Elm_Win *obj, const int *rotations, unsigned int count);

/**
 * Get the array of available window rotations.
 *
 * This function is used to get the available rotations.
 *
 * @see elm_win_wm_rotation_available_rotations_set()
 *
 * ingroup Win
 * @since 1.9
 *
 * @param[out] rotations The array of rotation value.
 * @param[out] count The size of the @param rotations array.
 */
EAPI Eina_Bool elm_win_wm_rotation_available_rotations_get(const Elm_Win *obj, int **rotations, unsigned int *count);

/**
 * Set which zone this quickpanel should appear in
 *
 * @ingroup Win
 *
 * @param[in] zone The requested zone for this quickpanel
 */
EAPI void elm_win_quickpanel_zone_set(Elm_Win *obj, int zone);

/**
 * Get which zone this quickpanel should appear in
 *
 * @return The requested zone for this quickpanel
 *
 * @ingroup Win
 */
EAPI int elm_win_quickpanel_zone_get(const Elm_Win *obj);

/**
 * Set the maximized state of a window.
 *
 * @ingroup Win
 *
 * @param[in] maximized If true, the window is maximized
 */
EAPI void elm_win_maximized_set(Elm_Win *obj, Eina_Bool maximized);

/**
 * Get the maximized state of a window.
 *
 * @return If true, the window is maximized
 *
 * @ingroup Win
 */
EAPI Eina_Bool elm_win_maximized_get(const Elm_Win *obj);

/**
 * Set the modal state of a window.
 *
 * @ingroup Win
 *
 * @param[in] modal If true, the window is modal
 */
EAPI void elm_win_modal_set(Elm_Win *obj, Eina_Bool modal);

/**
 * Get the modal state of a window.
 *
 * @return If true, the window is modal
 *
 * @ingroup Win
 */
EAPI Eina_Bool elm_win_modal_get(const Elm_Win *obj);

/**
 * Set the icon name of the window
 *
 * @ingroup Win
 *
 * @param[in] icon_name The icon name to set
 */
EAPI void elm_win_icon_name_set(Elm_Win *obj, const char *icon_name);

/**
 * Get the icon name of the window
 *
 * The returned string is an internal one and should not be freed or
 * modified. It will also be invalid if a new icon name is set or if
 * the window is destroyed.
 *
 * @return The icon name
 *
 * @ingroup Win
 */
EAPI const char *elm_win_icon_name_get(const Elm_Win *obj);

/**
 * Set the withdrawn state of a window.
 *
 * @ingroup Win
 *
 * @param[in] withdrawn If true, the window is withdrawn
 */
EAPI void elm_win_withdrawn_set(Elm_Win *obj, Eina_Bool withdrawn);

/**
 * Get the withdrawn state of a window.
 *
 * @return If true, the window is withdrawn
 *
 * @ingroup Win
 */
EAPI Eina_Bool elm_win_withdrawn_get(const Elm_Win *obj);

/**
 * Set the role of the window
 *
 * @ingroup Win
 *
 * @param[in] role The role to set
 */
EAPI void elm_win_role_set(Elm_Win *obj, const char *role);

/**
 * Get the role of the window
 *
 * The returned string is an internal one and should not be freed or
 * modified. It will also be invalid if a new role is set or if
 * the window is destroyed.
 *
 * @return The role
 *
 * @ingroup Win
 */
EAPI const char *elm_win_role_get(const Elm_Win *obj);

/**
 * Set the window stepping used with sizing calculation
 *
 * Base size + stepping is what is calculated for window sizing restrictions.
 *
 * @ingroup Win
 * @see elm_win_size_step_get
 * @see elm_win_size_base_set
 * @since 1.7
 *
 * @param[in] w The stepping width (0 disables)
 * @param[in] h The stepping height (0 disables)
 */
EAPI void elm_win_size_step_set(Elm_Win *obj, int w, int h);

/**
 * Get the stepping of a window.
 *
 * @ingroup Win
 * @see elm_win_size_base_set
 * @see elm_win_size_step_set
 * @since 1.7
 *
 * @param[out] w The stepping width (0 disables)
 * @param[out] h The stepping height (0 disables)
 */
EAPI void elm_win_size_step_get(const Elm_Win *obj, int *w, int *h);

/**
 * Set the style for the focus highlight on this window
 *
 * Sets the style to use for theming the highlight of focused objects on
 * the given window. If @p style is NULL, the default will be used.
 *
 * @ingroup Win
 *
 * @param[in] style The style to set
 */
EAPI void elm_win_focus_highlight_style_set(Elm_Win *obj, const char *style);

/**
 * Get the style set for the focus highlight object
 *
 * Get the style set for this windows highlight object, or NULL if none
 * is set.
 *
 * @return The style set or NULL if none was. Default is used in that case.
 *
 * @ingroup Win
 */
EAPI const char *elm_win_focus_highlight_style_get(const Elm_Win *obj);

/**
 * Set the borderless state of a window.
 *
 * This function requests the Window Manager to not draw any decoration
 * around the window.
 *
 * @ingroup Win
 *
 * @param[in] borderless If true, the window is borderless
 */
EAPI void elm_win_borderless_set(Elm_Win *obj, Eina_Bool borderless);

/**
 * Get the borderless state of a window.
 *
 * @return If true, the window is borderless
 *
 * @ingroup Win
 */
EAPI Eina_Bool elm_win_borderless_get(const Elm_Win *obj);

/**
 * Constrain the maximum width and height of a window to the width and height of its screen
 *
 * When @p constrain is true, @p obj will never resize larger than the screen.
 * @ingroup Win
 *
 * @param[in] constrain EINA_TRUE to restrict the window's maximum size, EINA_FALSE to disable restriction
 */
EAPI void elm_win_screen_constrain_set(Elm_Win *obj, Eina_Bool constrain);

/**
 * Get the constraints on the maximum width and height of a window relative to the width and height of its screen
 *
 * When this function returns true, @p obj will never resize larger than the screen.
 * @return EINA_TRUE to restrict the window's maximum size, EINA_FALSE to disable restriction
 *
 * @ingroup Win
 */
EAPI Eina_Bool elm_win_screen_constrain_get(const Elm_Win *obj);

/**
 * Set the array of available profiles to a window.
 *
 * @ingroup Win
 * @since 1.8
 *
 * @param[in] profiles The string array of available profiles
 * @param[in] count The number of members in profiles
 */
EAPI void elm_win_available_profiles_set(Elm_Win *obj, const char **profiles, unsigned int count);

/**
 * Get the array of available profiles of a window.
 *
 * @return EINA_TRUE if available profiles exist, EINA_FALSE otherwise
 *
 * @ingroup Win
 * @since 1.8
 *
 * @param[out] profiles The string array of available profiles
 * @param[out] count The number of members in profiles
 */
EAPI Eina_Bool elm_win_available_profiles_get(const Elm_Win *obj, char ***profiles, unsigned int *count);

/**
 * Set the enabled status for the focus highlight in a window
 *
 * This function will enable or disable the focus highlight only for the
 * given window, regardless of the global setting for it
 *
 * @ingroup Win
 *
 * @param[in] enabled The enabled value for the highlight
 */
EAPI void elm_win_focus_highlight_enabled_set(Elm_Win *obj, Eina_Bool enabled);

/**
 * Get the enabled value of the focus highlight for this window
 *
 * @return EINA_TRUE if enabled, EINA_FALSE otherwise
 *
 * @ingroup Win
 */
EAPI Eina_Bool elm_win_focus_highlight_enabled_get(const Elm_Win *obj);

/**
 * Set the title of the window
 *
 * @ingroup Win
 *
 * @param[in] title The title to set
 */
EAPI void elm_win_title_set(Elm_Win *obj, const char *title);

/**
 * Get the title of the window
 *
 * The returned string is an internal one and should not be freed or
 * modified. It will also be invalid if a new title is set or if
 * the window is destroyed.
 *
 * @return The title
 *
 * @ingroup Win
 */
EAPI const char *elm_win_title_get(const Elm_Win *obj);

/**
 * Set the alpha channel state of a window.
 *
 * If @p alpha is EINA_TRUE, the alpha channel of the canvas will be enabled
 * possibly making parts of the window completely or partially transparent.
 * This is also subject to the underlying system supporting it, like for
 * example, running under a compositing manager. If no compositing is
 * available, enabling this option will instead fallback to using shaped
 * windows, with elm_win_shaped_set().
 *
 * @note Alpha window can be enabled automatically by window theme style's property.
 * If "alpha" data.item is "1" or "true" in window style(eg. elm/win/base/default),
 * the window is switched to alpha automatically without the explicit api call.
 *
 * @see elm_win_alpha_set()
 *
 * @ingroup Win
 *
 * @param[in] alpha EINA_TRUE if the window alpha channel is enabled, EINA_FALSE otherwise
 */
EAPI void elm_win_alpha_set(Elm_Win *obj, Eina_Bool alpha);

/**
 * Get the alpha channel state of a window.
 *
 * @return EINA_TRUE if the window alpha channel is enabled, EINA_FALSE
 * otherwise
 *
 * @ingroup Win
 */
EAPI Eina_Bool elm_win_alpha_get(const Elm_Win *obj);

/**
 * Set the urgent state of a window.
 *
 * @ingroup Win
 *
 * @param[in] urgent If true, the window is urgent
 */
EAPI void elm_win_urgent_set(Elm_Win *obj, Eina_Bool urgent);

/**
 * Get the urgent state of a window.
 *
 * @return If true, the window is urgent
 *
 * @ingroup Win
 */
EAPI Eina_Bool elm_win_urgent_get(const Elm_Win *obj);

/**
 * Set the rotation of the window.
 *
 * Most engines only work with multiples of 90.
 *
 * This function is used to set the orientation of the window @p obj to
 * match that of the screen. The window itself will be resized to adjust
 * to the new geometry of its contents. If you want to keep the window size,
 * see elm_win_rotation_with_resize_set().
 *
 * @ingroup Win
 *
 * @param[in] rotation The rotation of the window, in degrees (0-360),
counter-clockwise.
 */
EAPI void elm_win_rotation_set(Elm_Win *obj, int rotation);

/**
 * Get the rotation of the window.
 *
 * @return The rotation of the window in degrees (0-360)
 *
 * @see elm_win_rotation_set()
 * @see elm_win_rotation_with_resize_set()
 *
 * @ingroup Win
 */
EAPI int elm_win_rotation_get(const Elm_Win *obj);

/**
 * Set a window object's icon
 *
 * This sets an image to be used as the icon for the given window, in
 * the window manager decoration part. The exact pixel dimensions of
 * the object (not object size) will be used, and the image pixels
 * will be used as-is when this function is called. If the image
 * object has been updated, then call this function again to source
 * the image pixels and put them on the window's icon. Note that
 * <b>only Evas image objects are allowed</b>, for
 *
 * Example of usage:
 * @code
 * icon = evas_object_image_add(evas_object_evas_get(elm_window));
 * evas_object_image_file_set(icon, "/path/to/the/icon", NULL);
 * elm_win_icon_object_set(elm_window, icon);
 * evas_object_show(icon);
 * @endcode
 *
 * @ingroup Win
 *
 * @param[in] icon The Evas image object to use for an icon
 */
EAPI void elm_win_icon_object_set(Elm_Win *obj, Evas_Object *icon);

/**
 * Get the icon object used for the window
 *
 * The object returns is the one marked by elm_win_icon_object_set() as the
 * object to use for the window icon.
 *
 * @return The icon object set
 *
 * @ingroup Win
 */
EAPI const Evas_Object *elm_win_icon_object_get(const Elm_Win *obj);

/**
 * Set the minor priority of a quickpanel window
 *
 * @ingroup Win
 *
 * @param[in] priority The minor priority for this quickpanel
 */
EAPI void elm_win_quickpanel_priority_minor_set(Elm_Win *obj, int priority);

/**
 * Get the minor priority of a quickpanel window
 *
 * @return The minor priority of this quickpanel. If the object is not window object, return -1.
 *
 * @ingroup Win
 */
EAPI int elm_win_quickpanel_priority_minor_get(const Elm_Win *obj);

/**
 * Set the sticky state of the window.
 *
 * Hints the Window Manager that the window in @p obj should be left fixed
 * at its position even when the virtual desktop it's on moves or changes.
 *
 * @ingroup Win
 *
 * @param[in] sticky If true, the window's sticky state is enabled
 */
EAPI void elm_win_sticky_set(Elm_Win *obj, Eina_Bool sticky);

/**
 * Get the sticky state of the window.
 *
 * @return If true, the window's sticky state is enabled
 *
 * @see elm_win_sticky_set()
 *
 * @ingroup Win
 */
EAPI Eina_Bool elm_win_sticky_get(const Elm_Win *obj);

/**
 * Sets the keyboard mode of the window.
 *
 * @ingroup Win
 *
 * @param[in] mode The mode to set, one of #Elm_Win_Keyboard_Mode
 */
EAPI void elm_win_keyboard_mode_set(Elm_Win *obj, Elm_Win_Keyboard_Mode mode);

/**
 * Get the keyboard mode of the window.
 *
 * @return The mode, one of #Elm_Win_Keyboard_Mode
 *
 * @ingroup Win
 */
EAPI Elm_Win_Keyboard_Mode elm_win_keyboard_mode_get(const Elm_Win *obj);

/**
 * Set the animate status for the focus highlight for this window.
 *
 * This function will enable or disable the animation of focus highlight only
 * for the given window, regardless of the global setting for it
 *
 * @ingroup Win
 *
 * @param[in] animate The enabled value for the highlight animation
 */
EAPI void elm_win_focus_highlight_animate_set(Elm_Win *obj, Eina_Bool animate);

/**
 * Get the animate value of the focus highlight for this window
 *
 * @return EINA_TRUE if animation is enabled, EINA_FALSE otherwise
 *
 * @ingroup Win
 */
EAPI Eina_Bool elm_win_focus_highlight_animate_get(const Elm_Win *obj);

/**
 * Set the aspect ratio of a window.
 *
 * @ingroup Win
 *
 * @param[in] aspect If 0, the window has no aspect limits, otherwise it is
width divided by height
 */
EAPI void elm_win_aspect_set(Elm_Win *obj, double aspect);

/**
 * Get the aspect ratio of a window.
 *
 * @return The aspect ratio set (0 by default)
 *
 * @ingroup Win
 */
EAPI double elm_win_aspect_get(const Elm_Win *obj);

/**
 * Set the major priority of a quickpanel window
 *
 * @ingroup Win
 *
 * @param[in] priority The major priority for this quickpanel
 */
EAPI void elm_win_quickpanel_priority_major_set(Elm_Win *obj, int priority);

/**
 * Get the major priority of a quickpanel window
 *
 * @return The major priority of this quickpanel. If the object is not window object, return -1.
 *
 * @ingroup Win
 */
EAPI int elm_win_quickpanel_priority_major_get(const Elm_Win *obj);

/**
 * Sets the indicator opacity mode of the window.
 *
 * @ingroup Win
 *
 * @param[in] mode The mode to set, one of #Elm_Win_Indicator_Opacity_Mode
 */
EAPI void elm_win_indicator_opacity_set(Elm_Win *obj, Elm_Win_Indicator_Opacity_Mode mode);

/**
 * Get the indicator opacity mode of the window.
 *
 * @return The mode, one of #Elm_Win_Indicator_Opacity_Mode
 *
 * @ingroup Win
 */
EAPI Elm_Win_Indicator_Opacity_Mode elm_win_indicator_opacity_get(const Elm_Win *obj);

/**
 * Set the demand_attention state of a window.
 *
 * @ingroup Win
 *
 * @param[in] demand_attention If true, the window is demand_attention
 */
EAPI void elm_win_demand_attention_set(Elm_Win *obj, Eina_Bool demand_attention);

/**
 * Get the demand_attention state of a window.
 *
 * @return If true, the window is demand_attention
 *
 * @ingroup Win
 */
EAPI Eina_Bool elm_win_demand_attention_get(const Elm_Win *obj);

/**
 * Get the preferred rotation value.
 *
 * This function is used to get the preferred rotoation value.
 *
 * @return The preferred rotation of the window in degrees (0-360),
 * counter-clockwise.
 *
 * @see elm_win_wm_rotation_preferred_rotation_set()
 *
 * ingroup Win
 * @since 1.9
 */
EAPI int elm_win_wm_rotation_preferred_rotation_get(const Elm_Win *obj);

/**
 * Set the layer of the window.
 *
 * What this means exactly will depend on the underlying engine used.
 *
 * In the case of X11 backed engines, the value in @p layer has the
 * following meanings:
 * @li < 3: The window will be placed below all others.
 * @li > 5: The window will be placed above all others.
 * @li other: The window will be placed in the default layer.
 *
 * @ingroup Win
 *
 * @param[in] layer The layer of the window
 */
EAPI void elm_win_layer_set(Elm_Win *obj, int layer);

/**
 * Get the layer of the window.
 *
 * @return The layer of the window
 *
 * @see elm_win_layer_set()
 *
 * @ingroup Win
 */
EAPI int elm_win_layer_get(const Elm_Win *obj);

/**
 * Set the profile of a window.
 *
 * @ingroup Win
 * @since 1.8
 *
 * @param[in] profile The string value of a window profile
 */
EAPI void elm_win_profile_set(Elm_Win *obj, const char *profile);

/**
 * Get the profile of a window.
 *
 * @return The string value of a window profile, or NULL if none exists
 *
 * @ingroup Win
 * @since 1.8
 */
EAPI const char *elm_win_profile_get(const Elm_Win *obj);

/**
 * Set the shaped state of a window.
 *
 * Shaped windows, when supported, will render the parts of the window that
 * has no content, transparent.
 *
 * If @p shaped is EINA_FALSE, then it is strongly advised to have some
 * background object or cover the entire window in any other way, or the
 * parts of the canvas that have no data will show framebuffer artifacts.
 *
 * @see elm_win_alpha_set()
 *
 * @ingroup Win
 *
 * @param[in] shaped If true, the window is shaped
 */
EAPI void elm_win_shaped_set(Elm_Win *obj, Eina_Bool shaped);

/**
 * Get the shaped state of a window.
 *
 * @return If true, the window is shaped
 *
 * @see elm_win_shaped_set()
 *
 * @ingroup Win
 */
EAPI Eina_Bool elm_win_shaped_get(const Elm_Win *obj);

/**
 * Set the fullscreen state of a window.
 *
 * @ingroup Win
 *
 * @param[in] fullscreen If true, the window is fullscreen
 */
EAPI void elm_win_fullscreen_set(Elm_Win *obj, Eina_Bool fullscreen);

/**
 * Get the fullscreen state of a window.
 *
 * @return If true, the window is fullscreen
 *
 * @ingroup Win
 */
EAPI Eina_Bool elm_win_fullscreen_get(const Elm_Win *obj);

/**
 * Set the manual rotation done mode.
 *
 * This function is used to set or reset the manual rotation done mode.
 * the message of rotation done is sent to WM after rendering its canvas in Ecore_Evas.
 * but if set the manual rotation done mode,
 * it's disabled and user should call the "elm_win_wm_rotation_manual_done" explicitly to sends the message.
 *
 * @see elm_win_wm_rotation_manual_rotation_done_get()
 * @see elm_win_wm_rotation_manual_rotation_done()
 *
 * ingroup Win
 * @since 1.9
 *
 * @param[in] set EINA_TRUE means to set manual rotation done mode EINA_FALSE otherwise.
 */
EAPI void elm_win_wm_rotation_manual_rotation_done_set(Elm_Win *obj, Eina_Bool set);

/**
 * Get the state of manual rotation done mode.
 *
 * This function is used to get the state of manual rotation done mode.
 *
 * @return @c EINA_TRUE manual rotationn done mode, @c EINA_FALSE otherwise.
 *
 * @see elm_win_wm_rotation_manual_rotation_done_set()
 * @see elm_win_wm_rotation_manual_rotation_done()
 *
 * ingroup Win
 * @since 1.9
 */
EAPI Eina_Bool elm_win_wm_rotation_manual_rotation_done_get(const Elm_Win *obj);

/**
 * Sets the indicator mode of the window.
 *
 * @ingroup Win
 *
 * @param[in] mode The mode to set, one of #Elm_Win_Indicator_Mode
 */
EAPI void elm_win_indicator_mode_set(Elm_Win *obj, Elm_Win_Indicator_Mode mode);

/**
 * Get the indicator mode of the window.
 *
 * @return The mode, one of #Elm_Win_Indicator_Mode
 *
 * @ingroup Win
 */
EAPI Elm_Win_Indicator_Mode elm_win_indicator_mode_get(const Elm_Win *obj);

/**
 * Set if this window is an illume conformant window
 *
 * @ingroup Win
 *
 * @param[in] conformant The conformant flag (1 = conformant, 0 = non-conformant)
 */
EAPI void elm_win_conformant_set(Elm_Win *obj, Eina_Bool conformant);

/**
 * Get if this window is an illume conformant window
 *
 * @return A boolean if this window is illume conformant or not
 *
 * @ingroup Win
 */
EAPI Eina_Bool elm_win_conformant_get(const Elm_Win *obj);

/**
 * Set the base window size used with stepping calculation
 *
 * Base size + stepping is what is calculated for window sizing restrictions.
 *
 * @ingroup Win
 * @see elm_win_size_step_set
 * @see elm_win_size_base_get
 * @since 1.7
 *
 * @param[in] w The base width
 * @param[in] h The base height
 */
EAPI void elm_win_size_base_set(Elm_Win *obj, int w, int h);

/**
 * Get the base size of a window.
 *
 * @ingroup Win
 * @see elm_win_size_base_set
 * @see elm_win_size_step_set
 * @since 1.7
 *
 * @param[out] w The base width
 * @param[out] h The base height
 */
EAPI void elm_win_size_base_get(const Elm_Win *obj, int *w, int *h);

/**
 * Set a window to be an illume quickpanel window
 *
 * By default window objects are not quickpanel windows.
 *
 * @ingroup Win
 *
 * @param[in] quickpanel The quickpanel flag (1 = quickpanel, 0 = normal window)
 */
EAPI void elm_win_quickpanel_set(Elm_Win *obj, Eina_Bool quickpanel);

/**
 * Get if this window is a quickpanel or not
 *
 * @return A boolean if this window is a quickpanel or not
 *
 * @ingroup Win
 */
EAPI Eina_Bool elm_win_quickpanel_get(const Elm_Win *obj);

/**
 * Rotates the window and resizes it.
 *
 * Like elm_win_rotation_set(), but it also resizes the window's contents so
 * that they fit inside the current window geometry.
 *
 * @ingroup Win
 *
 * @param[in] rotation The rotation of the window in degrees (0-360),
counter-clockwise.
 */
EAPI void elm_win_rotation_with_resize_set(Elm_Win *obj, int rotation);

/**
 * Set the window to be skipped by keyboard focus
 *
 * This sets the window to be skipped by normal keyboard input. This means
 * a window manager will be asked to not focus this window as well as omit
 * it from things like the taskbar, pager, "alt-tab" list etc. etc.
 *
 * Call this and enable it on a window BEFORE you show it for the first time,
 * otherwise it may have no effect.
 *
 * Use this for windows that have only output information or might only be
 * interacted with by the mouse or fingers, and never for typing input.
 * Be careful that this may have side-effects like making the window
 * non-accessible in some cases unless the window is specially handled. Use
 * this with care.
 *
 * @ingroup Win
 *
 * @param[in] skip The skip flag state (EINA_TRUE if it is to be skipped)
 */
EAPI void elm_win_prop_focus_skip_set(Elm_Win *obj, Eina_Bool skip);

/**
 * Get the screen position of a window.
 *
 * @ingroup Win
 *
 * @param[out] x The int to store the x coordinate to
 * @param[out] y The int to store the y coordinate to
 */
EAPI void elm_win_screen_position_get(const Elm_Win *obj, int *x, int *y);

/**
 * Query whether window manager supports window rotation or not.
 *
 * The window manager rotation allows the WM to controls the rotation of application windows.
 * It is designed to support synchronized rotation for the multiple application windows at same time.
 *
 * @return @c EINA_TRUE if the window manager rotation is supported, @c EINA_FALSE otherwise.
 *
 * @see elm_win_wm_rotation_supported_get()
 * @see elm_win_wm_rotation_preferred_rotation_set()
 * @see elm_win_wm_rotation_preferred_rotation_get()
 * @see elm_win_wm_rotation_available_rotations_set()
 * @see elm_win_wm_rotation_available_rotations_get()
 * @see elm_win_wm_rotation_manual_rotation_done_set()
 * @see elm_win_wm_rotation_manual_rotation_done_get()
 * @see elm_win_wm_rotation_manual_rotation_done()
 *
 * @ingroup Win
 * @since 1.9
 */
EAPI Eina_Bool elm_win_wm_rotation_supported_get(const Elm_Win *obj);

/**
 * Get the Ecore_X_Window of an Evas_Object
 *
 * @return The Ecore_X_Window of @p obj
 *
 * @ingroup Win
 */
EAPI Ecore_X_Window elm_win_xwindow_get(const Elm_Win *obj);

/**
 * Determine whether a window has focus
 * @return EINA_TRUE if the window exists and has focus, else EINA_FALSE
 *
 * @ingroup Win
 */
EAPI Eina_Bool elm_win_focus_get(const Elm_Win *obj);

/**
 * Get screen geometry details for the screen that a window is on
 * @ingroup Win
 *
 * @param[out] x where to return the horizontal offset value. May be NULL.
 * @param[out] y where to return the vertical offset value. May be NULL.
 * @param[out] w where to return the width value. May be NULL.
 * @param[out] h where to return the height value. May be NULL.
 */
EAPI void elm_win_screen_size_get(const Elm_Win *obj, int *x, int *y, int *w, int *h);

/**
 * Get the Main Menu of a window.
 *
 * @return The Main Menu of the window (NULL if error).
 *
 * @ingroup Win
 */
EAPI Evas_Object *elm_win_main_menu_get(const Elm_Win *obj);

/**
 * Get screen dpi for the screen that a window is on
 * @ingroup Win
 * @since 1.7
 *
 * @param[out] xdpi Pointer to value to store return horizontal dpi. May be NULL.
 * @param[out] ydpi Pointer to value to store return vertical dpi. May be NULL.
 */
EAPI void elm_win_screen_dpi_get(const Elm_Win *obj, int *xdpi, int *ydpi);

/**
 * Get the inlined image object handle
 *
 * When you create a window with elm_win_add() of type #ELM_WIN_INLINED_IMAGE,
 * then the window is in fact an evas image object inlined in the parent
 * canvas. You can get this object (be careful to not manipulate it as it
 * is under control of elementary), and use it to do things like get pixel
 * data, save the image to a file, etc.
 *
 * @return The inlined image object, or NULL if none exists
 *
 * @ingroup Win
 */
EAPI Evas_Object *elm_win_inlined_image_object_get(const Elm_Win *obj);

/**
 * The window name.
 *
 * The meaning of name depends on the underlying windowing system.
 *
 * The window name is a constructing property that need to be set at
 * creation within @ref eo_add.
 *
 * Example:
 * @code
 * win = eo_add(ELM_WIN_CLASS, NULL, elm_obj_win_name_set(ELM_WIN_BASIC));
 * @endcode
 *
 * @note Once set, it can NOT be modified afterward.
 *
 * @ingroup Win
 * Can only be used at creation time, within @ref eo_add.
 *
 * @ingroup Win
 *
 * @param[in] name No description supplied.
 */
EAPI void elm_win_name_set(Elm_Win *obj, const char *name);

/**
 * The type of the window.
 *
 * It is a hint of how the Window Manager should handle it.
 *
 * The window type is a constructing property that need to be set at
 * creation within @ref eo_add.
 *
 * Example:
 * @code
 * win = eo_add(ELM_WIN_CLASS, NULL, elm_obj_win_type_set(ELM_WIN_BASIC));
 * @endcode
 *
 * @note Once set, it can NOT be modified afterward.
 *
 * @see Elm_Win_Type
 *
 * @ingroup Win
 * Can only be used at creation time, within @ref eo_add.
 *
 * @see Elm_Win_Type
 *
 * @ingroup Win
 *
 * @param[in] type No description supplied.
 */
EAPI void elm_win_type_set(Elm_Win *obj, Elm_Win_Type type);

/**
 * The type of the window.
 *
 * It is a hint of how the Window Manager should handle it.
 *
 * The window type is a constructing property that need to be set at
 * creation within @ref eo_add.
 *
 * Example:
 * @code
 * win = eo_add(ELM_WIN_CLASS, NULL, elm_obj_win_type_set(ELM_WIN_BASIC));
 * @endcode
 *
 * @note Once set, it can NOT be modified afterward.
 *
 * @see Elm_Win_Type
 *
 * @ingroup Win
 * If the object is not window object, return #ELM_WIN_UNKNOWN.
 *
 * @ingroup Win
 */
EAPI Elm_Win_Type elm_win_type_get(const Elm_Win *obj);

/**
 * Set the noblank property of a window.
 *
 * The "noblank" property is a way to request the display on which
 * the windowis shown does not blank, screensave or otherwise hide
 * or obscure the window. It is intended for uses such as media
 * playback on a television where a user may not want to be
 * interrupted by an idle screen. The noblank property may have no
 * effect if the window is iconified/minimized or hidden.
 *
 * @since 1.11
 *
 * @ingroup Win
 *
 * @param[in] noblank If true, the window is set to noblank
 */
EAPI void elm_win_noblank_set(Elm_Win *obj, Eina_Bool noblank);

/**
 * Get the noblank property of a window.
 *
 * @return If true, the window has "noblank" set.
 *
 * @since 1.11
 *
 * @ingroup Win
 */
EAPI Eina_Bool elm_win_noblank_get(const Elm_Win *obj);

/**
 * Get the trap data associated with a window
 * @since 1.12
 *
 * @ingroup Win
 */
EAPI void *elm_win_trap_data_get(const Elm_Win *obj);

/**
 * Internal. Used to completent the fake window type.
 *
 * @param[in] oee No description supplied.
 */
EAPI void elm_win_fake_canvas_set(Elm_Win *obj, Ecore_Evas *oee);

/**
 * To notify the rotation done to WM manually.
 *
 * This function is used to notify the rotation done to WM manually.
 *
 * @see elm_win_wm_rotation_manual_rotation_done_set()
 * @see elm_win_wm_rotation_manual_rotation_done_get()
 *
 * ingroup Win
 * @since 1.9
 * 
 */
EAPI void elm_win_wm_rotation_manual_rotation_done(Elm_Win *obj);

/**
 * Create a socket to provide the service for Plug widget
 *
 * @return If socket creation is successful
 *
 * @ingroup Win
 * 
 *
 * @param[in] svcname The name of the service to be advertised. ensure that it is unique (when combined with @p svcnum) otherwise creation may fail.
 * @param[in] svcnum A number (any value, 0 being the common default) to differentiate multiple instances of services with the same name.
 * @param[in] svcsys A boolean that if true, specifies to create a system-wide service all users can connect to, otherwise the service is private to the user id that created the service.
 */
EAPI Eina_Bool elm_win_socket_listen(Elm_Win *obj, const char *svcname, int svcnum, Eina_Bool svcsys);

/**
 * Send a command to the windowing environment
 *
 * This is intended to work in touchscreen or small screen device
 * environments where there is a more simplistic window management policy in
 * place. This uses the window object indicated to select which part of the
 * environment to control (the part that this window lives in), and provides
 * a command and an optional parameter structure (use NULL for this if not
 * needed).
 *
 * @ingroup Win
 * 
 *
 * @param[in] command The command to send
 * @param[in] params Optional parameters for the command
 */
EAPI void elm_win_illume_command_send(Elm_Win *obj, Elm_Illume_Command command, void *params);

/**
 * Activate a window object.
 *
 * This function sends a request to the Window Manager to activate the
 * window pointed by @p obj. If honored by the WM, the window will receive
 * the keyboard focus.
 *
 * @note This is just a request that a Window Manager may ignore, so calling
 * this function does not ensure in any way that the window will be the
 * active one after it.
 *
 * @ingroup Win
 * 
 */
EAPI void elm_win_activate(Elm_Win *obj);

/**
 * Add @p subobj as a resize object of window @p obj.
 *
 *
 * Setting an object as a resize object of the window means that the
 * @p subobj child's size and position will be controlled by the window
 * directly. That is, the object will be resized to match the window size
 * and should never be moved or resized manually by the developer.
 *
 * In addition, resize objects of the window control what the minimum size
 * of it will be, as well as whether it can or not be resized by the user.
 *
 * For the end user to be able to resize a window by dragging the handles
 * or borders provided by the Window Manager, or using any other similar
 * mechanism, all of the resize objects in the window should have their
 * evas_object_size_hint_weight_set() set to EVAS_HINT_EXPAND.
 *
 * Also notice that the window can get resized to the current size of the
 * object if the EVAS_HINT_EXPAND is set @b after the call to
 * elm_win_resize_object_add(). So if the object should get resized to the
 * size of the window, set this hint @b before adding it as a resize object
 * (this happens because the size of the window and the object are evaluated
 * as soon as the object is added to the window).
 *
 * @ingroup Win
 * 
 *
 * @param[in] subobj The resize object to add
 */
EAPI void elm_win_resize_object_add(Elm_Win *obj, Evas_Object *subobj);

/**
 * Raise a window object.
 *
 * Places the window pointed by @p obj at the top of the stack, so that it's
 * not covered by any other window.
 *
 * If elm_win_override_set() is not set, the Window Manager may ignore this
 * request.
 *
 * @ingroup Win
 * 
 */
EAPI void elm_win_raise(Elm_Win *obj);

/**
 * Lower a window object.
 *
 * Places the window pointed by @p obj at the bottom of the stack, so that
 * no other window is covered by it.
 *
 * If elm_win_override_set() is not set, the Window Manager may ignore this
 * request.
 *
 * @ingroup Win
 * 
 */
EAPI void elm_win_lower(Elm_Win *obj);

/**
 * Delete @p subobj as a resize object of window @p obj.
 *
 * This function removes the object @p subobj from the resize objects of
 * the window @p obj. It will not delete the object itself, which will be
 * left unmanaged and should be deleted by the developer, manually handled
 * or set as child of some other container.
 *
 * @ingroup Win
 * 
 *
 * @param[in] subobj The resize object to add
 */
EAPI void elm_win_resize_object_del(Elm_Win *obj, Evas_Object *subobj);

/**
 * Center a window on its screen
 *
 * This function centers window @p obj horizontally and/or vertically based on the values
 * of @p h and @p v.
 * @ingroup Win
 * 
 *
 * @param[in] h If true, center horizontally. If false, do not change horizontal location.
 * @param[in] v If true, center vertically. If false, do not change vertical location.
 */
EAPI void elm_win_center(Elm_Win *obj, Eina_Bool h, Eina_Bool v);

/**
 * Set keygrab value of the window
 *
 * This function grabs the @p key of window using @p grab_mode.
 * @ingroup Win
 * 
 *
 * @param[in] key This string is the keyname to grab.
 * @param[in] modifiers This is for the keymask feature. Currently this feature is not supported.
 * @param[in] not_modifiers This is for the keymask feature. Currently this feature is not supported.
 * @param[in] proirity This is for the priority of keygrab. Currently this feature is not supported.
 * @param[in] grab_mode According to the grabmode, it can grab key differently
 */
EAPI Eina_Bool elm_win_keygrab_set(Elm_Win *obj, const char *key, Evas_Modifier_Mask modifiers, Evas_Modifier_Mask not_modifiers, int proirity, Elm_Win_Keygrab_Mode grab_mode);

/**
 * Unset keygrab value of the window
 *
 * This function unset keygrab value. Ungrab @p key of window.
 * @ingroup Win
 * 
 *
 * @param[in] key This string is the keyname to grab.
 * @param[in] modifiers This is for the keymask feature. Currently this feature is not supported.
 * @param[in] not_modifiers This is for the keymask feature. Currently this feature is not supported.
 */
EAPI Eina_Bool elm_win_keygrab_unset(Elm_Win *obj, const char *key, Evas_Modifier_Mask modifiers, Evas_Modifier_Mask not_modifiers);

#endif
