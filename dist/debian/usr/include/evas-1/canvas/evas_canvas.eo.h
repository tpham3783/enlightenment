#ifndef _EVAS_CANVAS_EO_H_
#define _EVAS_CANVAS_EO_H_

#ifndef _EVAS_CANVAS_EO_CLASS_TYPE
#define _EVAS_CANVAS_EO_CLASS_TYPE

typedef Eo Evas_Canvas;

#endif

#ifndef _EVAS_CANVAS_EO_TYPES
#define _EVAS_CANVAS_EO_TYPES


#endif
#define EVAS_CANVAS_CLASS evas_canvas_class_get()

EAPI const Eo_Class *evas_canvas_class_get(void) EINA_CONST;

/**
 * @brief Sets the output framespace size of the render engine of the given
 * evas.
 *
 * The framespace size is used in the Wayland engines to denote space in the
 * viewport which is occupied by the window frame. This is mainly used in
 * ecore_evas to draw borders.
 *
 * The units used for @c w and @c h depend on the engine used by the evas.
 *
 * @param[in] x The left coordinate in output units, usually pixels.
 * @param[in] y The top coordinate in output units, usually pixels.
 * @param[in] w The width in output units, usually pixels.
 * @param[in] h The height in output units, usually pixels.
 *
 * @since 1.1
 *
 * @ingroup Evas_Canvas
 */
EOAPI void evas_canvas_output_framespace_set(Evas_Coord x, Evas_Coord y, Evas_Coord w, Evas_Coord h);

/**
 * @brief Get the render engine's output framespace coordinates in canvas
 * units.
 *
 * @param[out] x The left coordinate in output units, usually pixels.
 * @param[out] y The top coordinate in output units, usually pixels.
 * @param[out] w The width in output units, usually pixels.
 * @param[out] h The height in output units, usually pixels.
 *
 * @since 1.1
 *
 * @ingroup Evas_Canvas
 */
EOAPI void evas_canvas_output_framespace_get(Evas_Coord *x, Evas_Coord *y, Evas_Coord *w, Evas_Coord *h);

/**
 * @brief Sets the output viewport of the given evas in evas units.
 *
 * The output viewport is the area of the evas that will be visible to the
 * viewer.  The viewport will be stretched to fit the output target of the evas
 * when rendering is performed.
 *
 * @note The coordinate values do not have to map 1-to-1 with the output
 * target. However, it is generally advised that it is done for ease of use.
 *
 * @param[in] x The top-left corner x value of the viewport.
 * @param[in] y The top-left corner y value of the viewport.
 * @param[in] w The width of the viewport.  Must be greater than 0.
 * @param[in] h The height of the viewport.  Must be greater than 0.
 *
 * @ingroup Evas_Canvas
 */
EOAPI void evas_canvas_output_viewport_set(Evas_Coord x, Evas_Coord y, Evas_Coord w, Evas_Coord h);

/**
 * @brief Get the render engine's output viewport coordinates in canvas units.
 *
 * Calling this function writes the current canvas output viewport size and
 * location values into the variables pointed to by @c x, @c y, @c w and @c h.
 *  On success the variables have the output location and size values written
 * to them in canvas units. Any of @c x, @c y, @c w or @c h that are @c null
 * will not be written to. If @c e is invalid, the results are undefined.
 *
 * @param[out] x The top-left corner x value of the viewport.
 * @param[out] y The top-left corner y value of the viewport.
 * @param[out] w The width of the viewport.  Must be greater than 0.
 * @param[out] h The height of the viewport.  Must be greater than 0.
 *
 * @ingroup Evas_Canvas
 */
EOAPI void evas_canvas_output_viewport_get(Evas_Coord *x, Evas_Coord *y, Evas_Coord *w, Evas_Coord *h);

/**
 * @brief Set the image cache.
 *
 * This function sets the image cache of canvas in bytes.
 *
 * @param[in] size The cache size.
 *
 * @ingroup Evas_Canvas
 */
EOAPI void evas_canvas_image_cache_set(int size);

/**
 * @brief Get the image cache.
 *
 * This function returns the image cache size of canvas in bytes.
 *
 * @return The cache size.
 *
 * @ingroup Evas_Canvas
 */
EOAPI int evas_canvas_image_cache_get(void);

/**
 * @brief Set the default set of flags an event begins with
 *
 * Events in evas can have an event_flags member. This starts out with  and
 * initial value (no flags). This lets you set the default flags that an event
 * begins with to be @c flags.
 *
 * @param[in] flags The default flags to use.
 *
 * @since 1.2
 *
 * @ingroup Evas_Canvas
 */
EOAPI void evas_canvas_event_default_flags_set(Evas_Event_Flags flags);

/**
 * @brief Get the default set of flags an event begins with
 *
 * This gets the default event flags events are produced with when fed in.
 *
 * @return The default flags to use.
 *
 * @since 1.2
 *
 * @ingroup Evas_Canvas
 */
EOAPI Evas_Event_Flags evas_canvas_event_default_flags_get(void);

/**
 * @brief Sets the output engine for the given evas.
 *
 * Once the output engine for an evas is set, any attempt to change it  will be
 * ignored. The value for @c render_method can be found using @ref
 * evas_render_method_lookup.
 *
 * @note it is mandatory that one calls @ref evas_init before setting the
 * output method.
 *
 * @param[in] render_method The numeric engine value to use.
 *
 * @ingroup Evas_Canvas
 */
EOAPI void evas_canvas_output_method_set(int render_method);

/**
 * @brief Retrieves the number of the output engine used for the given evas.
 *
 * @return The numeric engine value to use.
 *
 * @ingroup Evas_Canvas
 */
EOAPI int evas_canvas_output_method_get(void);

/**
 * @brief Changes the size of font cache of the given evas.
 *
 * @param[in] size The size in bytes.
 *
 * @ingroup Evas_Canvas
 */
EOAPI void evas_canvas_font_cache_set(int size);

/**
 * @brief Get the size of font cache of the given evas in bytes.
 *
 * @return The size in bytes.
 *
 * @ingroup Evas_Canvas
 */
EOAPI int evas_canvas_font_cache_get(void);

/**
 * @brief Sets the output size of the render engine of the given evas.
 *
 * The evas will render to a rectangle of the given size once this function is
 * called.  The output size is independent of the viewport size. The viewport
 * will be stretched to fill the given rectangle.
 *
 * The units used for @c w and @c h depend on the engine used by the evas.
 *
 * @param[in] w The width in output units, usually pixels.
 * @param[in] h The height in output units, usually pixels.
 *
 * @ingroup Evas_Canvas
 */
EOAPI void evas_canvas_output_size_set(int w, int h);

/**
 * @brief Retrieve the output size of the render engine of the given evas.
 *
 * The output size is given in whatever the output units are for the engine.
 *
 * If either @c w or @c h is @c null, then it is ignored.  If @c e is invalid,
 * the returned results are undefined.
 *
 * @param[out] w The width in output units, usually pixels.
 * @param[out] h The height in output units, usually pixels.
 *
 * @ingroup Evas_Canvas
 */
EOAPI void evas_canvas_output_size_get(int *w, int *h);

/**
 * @brief Attaches a specific pointer to the evas for fetching later.
 *
 * @param[in] data The attached pointer.
 *
 * @ingroup Evas_Canvas
 */
EOAPI void evas_canvas_data_attach_set(void *data);

/**
 * @brief Returns the pointer attached by @ref evas_canvas_data_attach_set.
 *
 * @return The attached pointer.
 *
 * @ingroup Evas_Canvas
 */
EOAPI void *evas_canvas_data_attach_get(void);

/**
 * @brief Changes the font hinting for the given evas.
 *
 * #EVAS_FONT_HINTING_AUTO, #EVAS_FONT_HINTING_BYTECODE.
 *
 * @param[in] hinting The used hinting, one of #EVAS_FONT_HINTING_NONE,
 * #EVAS_FONT_HINTING_AUTO, #EVAS_FONT_HINTING_BYTECODE.
 *
 * @ingroup Evas_Canvas
 */
EOAPI void evas_canvas_font_hinting_set(Evas_Font_Hinting_Flags hinting);

/**
 * @brief Retrieves the font hinting used by the given evas.
 *
 * @return The used hinting, one of #EVAS_FONT_HINTING_NONE,
 * #EVAS_FONT_HINTING_AUTO, #EVAS_FONT_HINTING_BYTECODE.
 *
 * @ingroup Evas_Canvas
 */
EOAPI Evas_Font_Hinting_Flags evas_canvas_font_hinting_get(void);

/**
 * @brief Applies the engine settings for the given evas from the given
 * @c Evas_Engine_Info structure.
 *
 * To get the Evas_Engine_Info structure to use, call
 * @ref evas_canvas_engine_info_get. Do not try to obtain a pointer to an
 * @c Evas_Engine_Info structure in any other way.
 *
 * You will need to call this function at least once before you can create
 * objects on an evas or render that evas. Some engines allow their settings to
 * be changed more than once.
 *
 * Once called, the @c info pointer should be considered invalid.
 *
 * @param[in] info The pointer to the engine info to use.
 *
 * @return @c true if no error occurred, @c false otherwise.
 *
 * @ingroup Evas_Canvas
 */
EOAPI Eina_Bool evas_canvas_engine_info_set(Evas_Engine_Info *info);

/**
 * @brief Retrieves the current render engine info struct from the given evas.
 *
 * The returned structure is publicly modifiable.  The contents are valid until
 * either @ref evas_canvas_engine_info_set or @ref evas_canvas_render are
 * called.
 *
 * This structure does not need to be freed by the caller.
 *
 * @return The pointer to the engine info to use.
 *
 * @ingroup Evas_Canvas
 */
EOAPI Evas_Engine_Info *evas_canvas_engine_info_get(void);

/**
 * @brief Retrieve the object that currently has focus.
 *
 * Evas can have (at most) one of its objects focused at a time. Focused
 * objects will be the ones having key events delivered to, which the
 * programmer can act upon by means of @ref evas_object_event_callback_add
 * usage.
 *
 * @note Most users wouldn't be dealing directly with Evas' focused objects.
 * Instead, they would be using a higher level library for that (like a
 * toolkit, as Elementary) to handle focus and who's receiving input for them.
 *
 * This call returns the object that currently has focus on the canvas @c e or
 * @c null, if none.
 *
 * See also @ref evas_object_focus_set, @ref evas_object_focus_get, @ref
 * evas_object_key_grab, @ref evas_object_key_ungrab.
 *
 * @return The object that has focus or @c null if there is not one.
 *
 * @ingroup Evas_Canvas
 */
EOAPI Evas_Object *evas_canvas_focus_get(void);

/**
 * @brief Get the highest (stacked) Evas object on the canvas @c e.
 *
 * This function will take all populated layers in the canvas into account,
 * getting the highest object for the highest layer, naturally.
 *
 * @warning This function will skip objects parented by smart objects, acting
 * only on the ones at the "top level", with regard to object parenting.
 *
 * See also @ref evas_object_layer_get, @ref evas_object_layer_set, @ref
 * evas_object_below_get, @ref evas_object_above_get.
 *
 * @return A pointer to the highest object on it (if any) or @c null otherwise.
 *
 * @ingroup Evas_Canvas
 */
EOAPI Evas_Object *evas_canvas_object_top_get(void);

/**
 * @brief Returns a handle to the list of lock keys registered in the canvas
 * @c e.
 *
 * This is required to check for which locks are set at a given time with the
 * @ref evas_key_lock_is_set function.
 *
 * @return An Evas_Lock handle to query Evas' keys subsystem with @ref
 * evas_key_lock_is_set, or @c null on error.
 *
 * @ingroup Evas_Canvas
 */
EOAPI const Evas_Lock *evas_canvas_key_lock_get(void);

/**
 * @brief This function returns the current known pointer coordinates
 *
 * This function returns the current known canvas unit coordinates of the mouse
 * pointer and sets the contents of the Evas_Coords pointed to by @c x and @c y
 * to contain these coordinates. If @c e is not a valid canvas the results of
 * this function are undefined.
 *
 * @param[out] x The pointer to a Evas_Coord to be filled in.
 * @param[out] y The pointer to a Evas_Coord to be filled in.
 *
 * @ingroup Evas_Canvas
 */
EOAPI void evas_canvas_pointer_canvas_xy_get(Evas_Coord *x, Evas_Coord *y);

/** Get the number of mouse or multi presses currently active.
 *
 * @since 1.2
 *
 * @ingroup Evas_Canvas
 */
EOAPI int evas_canvas_event_down_count_get(void);

/**
 * @brief This gets the internal counter that counts the number of smart
 * calculations.
 *
 * Whenever evas performs smart object calculations on the whole canvas it
 * increments a counter by 1. This is the smart object calculate counter that
 * this function returns the value of. It starts at the value of 0 and will
 * increase (and eventually wrap around to negative values and so on) by 1
 * every time objects are calculated. You can use this counter to ensure you
 * don't re-do calculations withint the same calculation generation/run if the
 * calculations maybe cause self-feeding effects.
 *
 * @since 1.1
 *
 * @ingroup Evas_Canvas
 */
EOAPI int evas_canvas_smart_objects_calculate_count_get(void);

/** Get the focus state known by the given evas.
 *
 * @ingroup Evas_Canvas
 */
EOAPI Eina_Bool evas_canvas_focus_state_get(void);

/** Get the changed marker for the canvas.
 *
 * @since 1.11
 *
 * @ingroup Evas_Canvas
 */
EOAPI Eina_Bool evas_canvas_changed_get(void);

/**
 * @brief This function returns the current known pointer coordinates.
 *
 * This function returns the current known screen/output coordinates of the
 * mouse pointer and sets the contents of the integers pointed to by @c x and
 * @c y to contain these coordinates. If @c e is not a valid canvas the results
 * of this function are undefined.
 *
 * @param[out] x The pointer to an integer to be filled in.
 * @param[out] y The pointer to an integer to be filled in.
 *
 * @ingroup Evas_Canvas
 */
EOAPI void evas_canvas_pointer_output_xy_get(int *x, int *y);

/**
 * @brief Returns whether the mouse pointer is logically inside the canvas.
 *
 * When this function is called it will return a value of either @c false or
 * @c true, depending on if @ref evas_canvas_event_feed_mouse_in or
 * @ref evas_canvas_event_feed_mouse_out have been called to feed in a  mouse
 * enter event into the canvas.
 *
 * A return value of @c true indicates the mouse is logically inside the
 * canvas, and @c false implies it is logically outside the canvas.
 *
 * A canvas begins with the mouse being assumed outside ($false).
 *
 * If @c e is not a valid canvas, the return value is undefined.
 *
 * @ingroup Evas_Canvas
 */
EOAPI Eina_Bool evas_canvas_pointer_inside_get(void);

/**
 * @brief Get the maximum image size evas can possibly handle.
 *
 * This function returns the largest image or surface size that evas can handle
 * in pixels, and if there is one, returns @c true. It returns @c false if no
 * extra constraint on maximum image size exists. You still should check the
 * return values of @c maxw and @c maxh as there may still be a limit, just a
 * much higher one.
 *
 * @param[out] maxw Pointer to hold the return value in pixels of the maximum
 * width.
 * @param[out] maxh Pointer to hold the return value in pixels of the maximum
 * height.
 *
 * @since 1.1
 *
 * @ingroup Evas_Canvas
 */
EOAPI Eina_Bool evas_canvas_image_max_size_get(int *maxw, int *maxh);

/**
 * @brief Get the lowest (stacked) Evas object on the canvas @c e.
 *
 * This function will take all populated layers in the canvas into account,
 * getting the lowest object for the lowest layer, naturally.
 *
 * @warning This function will skip objects parented by smart objects, acting
 * only on the ones at the "top level", with regard to object parenting.
 *
 * See also @ref evas_object_layer_get, @ref evas_object_layer_set, @ref
 * evas_object_below_get, @ref evas_object_below_set.
 *
 * @return A pointer to the lowest object on it, if any, or @c null otherwise.
 *
 * @ingroup Evas_Canvas
 */
EOAPI Evas_Object *evas_canvas_object_bottom_get(void);

/**
 * @brief Returns a handle to the list of modifier keys registered in the
 * canvas @c e.
 *
 * This is required to check for which modifiers are set at a given time with
 * the @ref evas_key_modifier_is_set function.
 *
 * See also @ref evas_canvas_key_modifier_add,
 * @ref evas_canvas_key_modifier_del, @ref evas_canvas_key_modifier_on,
 * @ref evas_canvas_key_modifier_off.
 *
 * @return An Evas_Modifier handle to query Evas' keys subsystem with @ref
 * evas_key_modifier_is_set, or @c null on error.
 *
 * @ingroup Evas_Canvas
 */
EOAPI const Evas_Modifier *evas_canvas_key_modifier_get(void);

/**
 * @brief Returns a bitmask with the mouse buttons currently pressed, set to 1.
 *
 * Calling this function will return a 32-bit integer with the appropriate bits
 * set to 1 that correspond to a mouse button being depressed. This limits Evas
 * to a mouse devices with a maximum of 32 buttons, but that is generally in
 * excess of any host system's pointing device abilities.
 *
 * A canvas by default begins with no mouse buttons being pressed and only
 * calls to @ref evas_canvas_event_feed_mouse_down and
 * @ref evas_canvas_event_feed_mouse_up will alter that.
 *
 * The least significant bit corresponds to the first mouse button (button 1)
 * and the most significant bit corresponds to the last mouse button (button
 * 32).
 *
 * If @c e is not a valid canvas, the return value is undefined.
 *
 * @return A bitmask of the currently depressed buttons on the canvas.
 *
 * @ingroup Evas_Canvas
 */
EOAPI int evas_canvas_pointer_button_down_mask_get(void);

/**
 * @brief Retrieve a list of Evas objects lying over a given position in a
 * canvas.
 *
 * This function will traverse all the layers of the given canvas, from top to
 * bottom, querying for objects with areas covering the given position. It will
 * enter the smart objects. It will not append to the list pass events as
 * hidden objects. Call eina_list_free on the returned list after usage.
 *
 * @param[in] x The horizontal coordinate of the position.
 * @param[in] y The vertical coordinate of the position.
 *
 * @ingroup Evas_Canvas
 */
EOAPI Eina_List *evas_canvas_tree_objects_at_xy_get(Evas_Object *stop, int x, int y);

/**
 * @brief Mouse wheel event feed.
 *
 * This function will set some evas properties that is necessary when the mouse
 * wheel is scrolled up or down. It prepares information to  be treated by the
 * callback function.
 *
 * @param[in] z How much mouse wheel was scrolled up or down.
 * @param[in] timestamp The timestamp of the mouse up event.
 * @param[in] data The data for canvas.
 *
 * @ingroup Evas_Canvas
 */
EOAPI void evas_canvas_event_feed_mouse_wheel(int direction, int z, unsigned int timestamp, const void *data);

/**
 * @brief Enables or turns on programmatically the lock key with name
 * @c keyname.
 *
 * The effect will be as if the key was put on its active state after this
 * call.
 *
 * See also @ref evas_canvas_key_lock_add, @ref evas_canvas_key_lock_del,
 * @ref evas_canvas_key_lock_del, @ref evas_canvas_key_lock_off.
 *
 * @param[in] keyname The name of the lock to enable.
 *
 * @ingroup Evas_Canvas
 */
EOAPI void evas_canvas_key_lock_on(const char *keyname);

/**
 * @brief Key down event feed.
 *
 * This function will set some evas properties that is necessary when a key is
 * pressed. It prepares information to be treated by the callback function.
 *
 * @param[in] key The key pressed.
 * @param[in] string A string.
 * @param[in] compose The compose string.
 * @param[in] timestamp Timestamp of the mouse up event.
 * @param[in] data Data for canvas.
 *
 * @ingroup Evas_Canvas
 */
EOAPI void evas_canvas_event_feed_key_down(const char *keyname, const char *key, const char *string, const char *compose, unsigned int timestamp, const void *data);

/**
 * @brief Creates a bit mask from the @c keyname modifier key. Values returned
 * from different calls to it may be ORed together, naturally.
 *
 * This function is meant to be using in conjunction with @ref
 * evas_object_key_grab/\@ref evas_object_key_ungrab. Go check their
 * documentation for more information.
 *
 * See also @ref evas_canvas_key_modifier_add, @ref evas_key_modifier_get,
 * @ref evas_canvas_key_modifier_on, @ref evas_canvas_key_modifier_off, @ref
 * evas_key_modifier_is_set.
 *
 * @param[in] keyname The name of the modifier key to create the mask for.
 *
 * @return The bit mask or 0 if the @c keyname key wasn't registered as a
 * modifier for canvas @c e.
 *
 * @ingroup Evas_Canvas
 */
EOAPI Evas_Modifier_Mask evas_canvas_key_modifier_mask_get(const char *keyname);

/**
 * @brief Adds the @c keyname key to the current list of modifier keys.
 *
 * Modifiers are keys like shift, alt and ctrl, i.e., keys which are meant to
 * be pressed together with others, altering the behavior of the secondly
 * pressed keys somehow. Evas is so that these keys can be user defined.
 *
 * This call allows custom modifiers to be added to the Evas system at run
 * time. It is then possible to set and unset modifier keys programmatically
 * for other parts of the program to check and act on. Programmers using Evas
 * would check for modifier keys on key event callbacks using @ref
 * evas_key_modifier_is_set.
 *
 * @note If the programmer instantiates the canvas by means of the @ref
 * ecore_evas_new family of helper functions, Ecore will take care of
 * registering on it all standard modifiers: "Shift", "Control", "Alt", "Meta",
 * "Hyper", "Super".
 *
 * @param[in] keyname The name of the modifier key to add to the list of Evas
 * modifiers.
 *
 * @ingroup Evas_Canvas
 */
EOAPI void evas_canvas_key_modifier_add(const char *keyname);

/**
 * @brief Disables or turns off programmatically the modifier key with name
 * @c keyname.
 *
 * See also @ref evas_canvas_key_modifier_add, @ref evas_key_modifier_get,
 * @ref evas_canvas_key_modifier_on, @ref evas_canvas_key_modifier_mask_get,
 * @ref evas_key_modifier_is_set.
 *
 * @param[in] keyname The name of the modifier to disable.
 *
 * @ingroup Evas_Canvas
 */
EOAPI void evas_canvas_key_modifier_off(const char *keyname);

/**
 * @brief Hold event feed.
 *
 * This function makes the object to stop sending events.
 *
 * @param[in] timestamp The timestamp of the mouse up event.
 * @param[in] data The data for canvas.
 *
 * @ingroup Evas_Canvas
 */
EOAPI void evas_canvas_event_feed_hold(int hold, unsigned int timestamp, const void *data);

/**
 * @brief Mouse move event feed.
 *
 * This function will set some evas properties that is necessary when the mouse
 * is moved from its last position. It prepares information to be treated by
 * the callback function.
 *
 * @param[in] y The vertical position of the mouse pointer.
 * @param[in] timestamp The timestamp of the mouse up event.
 * @param[in] data The data for canvas.
 *
 * @ingroup Evas_Canvas
 */
EOAPI void evas_canvas_event_feed_mouse_move(int x, int y, unsigned int timestamp, const void *data);

/**
 * @brief Key up event feed.
 *
 * This function will set some evas properties that is necessary when a key is
 * released. It prepares information to be treated by the callback function.
 *
 * @param[in] key The key released.
 * @param[in] string A string.
 * @param[in] compose Compose.
 * @param[in] timestamp Timestamp of the mouse up event.
 * @param[in] data Data for canvas.
 *
 * @ingroup Evas_Canvas
 */
EOAPI void evas_canvas_event_feed_key_up(const char *keyname, const char *key, const char *string, const char *compose, unsigned int timestamp, const void *data);

/**
 * @brief Mouse out event feed.
 *
 * This function will set some evas properties that is necessar when the mouse
 * out event happens. It prepares information to be treated by the callback
 * function.
 *
 * @param[in] data The data for canvas.
 *
 * @ingroup Evas_Canvas
 */
EOAPI void evas_canvas_event_feed_mouse_out(unsigned int timestamp, const void *data);

EOAPI void evas_canvas_event_input_multi_move(int d, int x, int y, double rad, double radx, double rady, double pres, double ang, double fx, double fy, unsigned int timestamp, const void *data);

/**
 * @brief Retrieve a list of Evas objects lying over a given position in a
 * canvas.
 *
 * This function will traverse all the layers of the given canvas, from top to
 * bottom, querying for objects with areas covering the given position. The
 * user can remove from query objects which are hidden and/or which are set to
 * pass events.
 *
 * @warning This function will skip objects parented by smart objects, acting
 * only on the ones at the "top level", with regard to object parenting.
 *
 * @param[in] y The vertical coordinate of the position.
 * @param[in] include_pass_events_objects Boolean flag to include or not
 * objects which pass events in this calculation.
 * @param[in] include_hidden_objects Boolean flag to include or not hidden
 * objects in this calculation.
 *
 * @return The list of Evas objects that are over the given position in @c e.
 *
 * @ingroup Evas_Canvas
 */
EOAPI Eina_List *evas_canvas_objects_at_xy_get(Evas_Coord x, Evas_Coord y, Eina_Bool include_pass_events_objects, Eina_Bool include_hidden_objects);

EOAPI void evas_canvas_event_input_multi_up(int d, int x, int y, double rad, double radx, double rady, double pres, double ang, double fx, double fy, Evas_Button_Flags flags, unsigned int timestamp, const void *data);

EOAPI void evas_canvas_event_feed_multi_down(int d, int x, int y, double rad, double radx, double rady, double pres, double ang, double fx, double fy, Evas_Button_Flags flags, unsigned int timestamp, const void *data);

/**
 * @brief Render the given Evas canvas asynchronously.
 *
 * This function only returns @c true when a frame will be rendered. If the
 * previous frame is still rendering, @c false will be returned  so the users
 * know not to wait for the updates callback and just  return to their main
 * loop.
 *
 * If a @c func callback is given, a list of updated areas will be generated
 * and the function will be called from the main thread after the rendered
 * frame is flushed to the screen. The resulting list should be freed with @ref
 * evas_render_updates_free.
 *
 * The list is given in the @c event_info parameter of the callback function.
 *
 * @return @c true if the canvas will render, @c false otherwise.
 *
 * @since 1.8
 *
 * @ingroup Evas_Canvas
 */
EOAPI Eina_Bool evas_canvas_render_async(void);

/**
 * @brief Render the given Evas canvas using the new rendering infra.
 *
 * This is experimental and will change over time until noted here.
 *
 * This function only returns @c true when a frame will be rendered. If the
 * previous frame is still rendering, @c false will be returned so the users
 * know not to wait for the updates callback and just return to their main
 * loop.
 *
 * @return @c true if the canvas will render, @c false otherwise.
 *
 * @since 1.14
 *
 * @ingroup Evas_Canvas
 */
EOAPI Eina_Bool evas_canvas_render2(void);

/**
 * @brief Render the given Evas canvas using the new rendering infra.
 *
 * This is experimental and will change over time until noted here.
 *
 * @return A newly allocated list of updated rectangles of the canvas
 * ($Eina.Rectangle structs). Free this list with @ref
 * evas_render_updates_free.
 *
 * @since 1.15
 *
 * @ingroup Evas_Canvas
 */
EOAPI Eina_List *evas_canvas_render2_updates(void);

/** Inform to the evas that it lost the focus.
 *
 * @ingroup Evas_Canvas
 */
EOAPI void evas_canvas_focus_out(void);

/**
 * @brief Mouse move event feed from input.
 *
 * Similar to the @ref evas_canvas_event_feed_mouse_move, this function will
 * inform Evas about mouse move events which were received by the input system,
 * relative to the 0,0 of the window, not to the canvas 0,0. It will take care
 * of doing any special transformation like adding the framespace offset to the
 * mouse event.
 *
 * @param[in] y The vertical position of the mouse pointer relative to the 0,0
 * of the window/surface.
 * @param[in] timestamp The timestamp of the mouse move event.
 * @param[in] data The data for canvas.
 *
 * @since 1.8
 *
 * @ingroup Evas_Canvas
 */
EOAPI void evas_canvas_event_input_mouse_move(int x, int y, unsigned int timestamp, const void *data);

/**
 * @brief Update the canvas internal objects but not triggering immediate
 * renderization.
 *
 * This function updates the canvas internal objects not triggering
 * renderization. To force renderization function @ref evas_canvas_render
 * should be used.
 *
 * @ingroup Evas_Canvas
 */
EOAPI void evas_canvas_norender(void);

/**
 * @brief Get the number of touched point in the evas.
 *
 * New touched point is added to the list whenever touching the evas and point
 * is removed whenever removing touched point from the evas.
 *
 * @return The number of touched point on the evas.
 *
 * @ingroup Evas_Canvas
 */
EOAPI unsigned int evas_canvas_touch_point_list_count(void);

EOAPI void evas_canvas_event_input_multi_down(int d, int x, int y, double rad, double radx, double rady, double pres, double ang, double fx, double fy, Evas_Button_Flags flags, unsigned int timestamp, const void *data);

/**
 * @brief Pop the nochange flag down 1.
 *
 * This tells evas, that while the nochange flag is greater than 0, do not mark
 * objects as "changed" when making changes.
 *
 * @warning Do not use this function unless you know what Evas exactly works
 * with "changed" state.
 *
 * @ingroup Evas_Canvas
 */
EOAPI void evas_canvas_nochange_pop(void);

/**
 * @brief Disables or turns off programmatically the lock key with name
 * @c keyname.
 *
 * The effect will be as if the key was put on its inactive state after this
 * call.
 *
 * See also @ref evas_canvas_key_lock_on.
 *
 * @param[in] keyname The name of the lock to disable.
 *
 * @ingroup Evas_Canvas
 */
EOAPI void evas_canvas_key_lock_off(const char *keyname);

/**
 * @brief Push the nochange flag up 1
 *
 * This tells evas, that while the nochange flag is greater than 0, do not mark
 * objects as "changed" when making changes.
 *
 * @warning Do not use this function unless you know what Evas exactly works
 * with "changed" state.
 *
 * @ingroup Evas_Canvas
 */
EOAPI void evas_canvas_nochange_push(void);

/** Force the given evas and associated engine to flush its font cache.
 *
 * @ingroup Evas_Canvas
 */
EOAPI void evas_canvas_font_cache_flush(void);

/**
 * @brief Checks if the font hinting is supported by the given evas.
 *
 * One of #EVAS_FONT_HINTING_NONE, #EVAS_FONT_HINTING_AUTO,
 * #EVAS_FONT_HINTING_BYTECODE.
 *
 * @param[in] hinting The hinting to use.
 *
 * @return @c true if it is supported, @c false otherwise.
 *
 * @ingroup Evas_Canvas
 */
EOAPI Eina_Bool evas_canvas_font_hinting_can_hint(Evas_Font_Hinting_Flags hinting);

/**
 * @brief Retrieve the Evas object stacked at the top of a given position in a
 * canvas.
 *
 * This function will traverse all the layers of the given canvas, from top to
 * bottom, querying for objects with areas covering the given position. The
 * user can remove from the query objects which are hidden and/or which are set
 * to pass events.
 *
 * @warning This function will skip objects parented by smart objects, acting
 * only on the ones at the "top level", with regard to object parenting.
 *
 * @param[in] y The vertical coordinate of the position.
 * @param[in] include_pass_events_objects Boolean flag to include or not
 * objects which pass events in this calculation.
 * @param[in] include_hidden_objects Boolean flag to include or not hidden
 * objects in this calculation.
 *
 * @return The Evas object that is over all other objects at the given
 * position.
 *
 * @ingroup Evas_Canvas
 */
EOAPI Evas_Object *evas_canvas_object_top_at_xy_get(Evas_Coord x, Evas_Coord y, Eina_Bool include_pass_events_objects, Eina_Bool include_hidden_objects);

/**
 * @brief Enables or turns on programmatically the modifier key with name
 * @c keyname.
 *
 * The effect will be as if the key was pressed for the whole time between this
 * call and a matching evas_key_modifier_off().
 *
 * See also @ref evas_canvas_key_modifier_off.
 *
 * @param[in] keyname The name of the modifier to enable.
 *
 * @ingroup Evas_Canvas
 */
EOAPI void evas_canvas_key_modifier_on(const char *keyname);

/**
 * @brief Mouse up event feed.
 *
 * This function will set some evas properties that is necessary when the mouse
 * button is released. It prepares information to be treated by the callback
 * function.
 *
 * @param[in] flags Evas button flags.
 * @param[in] timestamp The timestamp of the mouse up event.
 * @param[in] data The data for canvas.
 *
 * @ingroup Evas_Canvas
 */
EOAPI void evas_canvas_event_feed_mouse_up(int b, Evas_Button_Flags flags, unsigned int timestamp, const void *data);

/**
 * @brief Mouse down event feed.
 *
 * This function will set some evas properties that is necessary when the mouse
 * button is pressed. It prepares information to be treated by the callback
 * function.
 *
 * @param[in] flags Evas button flags.
 * @param[in] timestamp The timestamp of the mouse up event.
 * @param[in] data The data for canvas.
 *
 * @ingroup Evas_Canvas
 */
EOAPI void evas_canvas_event_feed_mouse_down(int b, Evas_Button_Flags flags, unsigned int timestamp, const void *data);

/**
 * @brief Re feed event.
 *
 * This function re-feeds the event pointed by event_copy.
 *
 * This function call evas_event_feed_* functions, so it can cause havoc if not
 * used wisely. Please use it responsibly.
 *
 * @param[in] event_type Event type.
 *
 * @ingroup Evas_Canvas
 */
EOAPI void evas_canvas_event_refeed_event(void *event_copy, Evas_Callback_Type event_type);

/**
 * @brief List of available font descriptions known or found by this evas.
 *
 * The list depends on Evas compile time configuration, such as fontconfig
 * support, and the paths provided at runtime as explained in @ref
 * Evas_Font_Path_Group.
 *
 * @return A newly allocated list of strings. Do not change the strings. Be
 * sure to call @ref evas_font_available_list_free after you're done.
 *
 * @ingroup Evas_Canvas
 */
EOAPI Eina_List *evas_canvas_font_available_list(void);

EOAPI Eina_List *evas_canvas_objects_in_rectangle_get(Evas_Coord x, Evas_Coord y, Evas_Coord w, Evas_Coord h, Eina_Bool include_pass_events_objects, Eina_Bool include_hidden_objects);

/**
 * @brief Retrieves the object on the given evas with the given name.
 *
 * This looks for the evas object given a name by @ref evas_object_name_set. If
 * the name is not unique canvas-wide, then which one of the many objects with
 * that name is returned is undefined, so only use this if you can ensure the
 * object name is unique.
 *
 * @param[in] name The given name.
 *
 * @return If successful, the Evas object with the given name. Otherwise,
 * @c null.
 *
 * @ingroup Evas_Canvas
 */
EOAPI Evas_Object *evas_canvas_object_name_find(const char *name);

/**
 * @brief Appends a font path to the list of font paths used by the given evas.
 *
 * @param[in] path The new font path.
 *
 * @ingroup Evas_Canvas
 */
EOAPI void evas_canvas_font_path_append(const char *path);

/**
 * @brief This function returns the @c id of nth touch point.
 *
 * The point which comes from Mouse Event has @c id 0 and The point which comes
 * from Multi Event has @c id that is same as Multi Event's device id.
 *
 * @param[in] n The number of the touched point (0 being the first).
 *
 * @return id of nth touch point, if the call succeeded, -1 otherwise.
 *
 * @ingroup Evas_Canvas
 */
EOAPI int evas_canvas_touch_point_list_nth_id_get(unsigned int n);

/** Removes all font paths loaded into memory for the given evas.
 *
 * @ingroup Evas_Canvas
 */
EOAPI void evas_canvas_font_path_clear(void);

/** Call user-provided @c calculate smart functions and unset the flag
 * signalling that the object needs to get recalculated to all smart objects in
 * the canvas.
 *
 * @ingroup Evas_Canvas
 */
EOAPI void evas_canvas_smart_objects_calculate(void);

/**
 * @brief This function returns the nth touch point's coordinates.
 *
 * Touch point's coordinates is updated whenever moving that point on the
 * canvas.
 *
 * @param[out] x The pointer to a Evas_Coord to be filled in.
 * @param[out] y The pointer to a Evas_Coord to be filled in.
 *
 * @ingroup Evas_Canvas
 */
EOAPI void evas_canvas_touch_point_list_nth_xy_get(unsigned int n, Evas_Coord *x, Evas_Coord *y);

/**
 * @brief Removes the @c keyname key from the current list of lock keys on
 * canvas @c e.
 *
 * @param[in] keyname The name of the key to remove from the locks list.
 *
 * @ingroup Evas_Canvas
 */
EOAPI void evas_canvas_key_lock_del(const char *keyname);

/**
 * @brief Add a damage rectangle.
 *
 * This is the function by which one tells evas that a part of the canvas has
 * to be repainted.
 *
 * @note All newly created Evas rectangles get the default color values of 255
 * 255 255 255 (opaque white).
 *
 * @param[in] y The rectangle's top position.
 * @param[in] w The rectangle's width.
 * @param[in] h The rectangle's height.
 *
 * @ingroup Evas_Canvas
 */
EOAPI void evas_canvas_damage_rectangle_add(int x, int y, int w, int h);

EOAPI void evas_canvas_sync(void);

/**
 * @brief Retrieves the list of font paths used by the given evas.
 *
 * @return The list of font paths used.
 *
 * @ingroup Evas_Canvas
 */
EOAPI const Eina_List *evas_canvas_font_path_list(void);

/**
 * @brief Reload the image cache.
 *
 * This function reloads the image cache of canvas.
 *
 * @ingroup Evas_Canvas
 */
EOAPI void evas_canvas_image_cache_reload(void);

/**
 * @brief Convert/scale a canvas coordinate into output screen coordinates.
 *
 * This function takes in a horizontal coordinate as the @c x parameter and
 * converts it into output units, accounting for output size, viewport size and
 * location, returning it as the function  return value. If @c e is invalid,
 * the results are undefined.
 *
 * @param[in] x The canvas x coordinate.
 *
 * @return The output/screen coordinate translated to output coordinates.
 *
 * @ingroup Evas_Canvas
 */
EOAPI int evas_canvas_coord_world_x_to_screen(Evas_Coord x);

EOAPI void evas_canvas_event_feed_multi_move(int d, int x, int y, double rad, double radx, double rady, double pres, double ang, double fx, double fy, unsigned int timestamp, const void *data);

/**
 * @brief Force immediate renderization of the given Evas canvas.
 *
 * This function forces an immediate renderization update of the given canvas
 * @c e.
 *
 * @note This is a very low level function, which most of Evas' users wouldn't
 * care about. One would use it, for example, to grab an Evas' canvas update
 * regions and paint them back, using the canvas' pixmap, on a displaying
 * system working below Evas.
 *
 * @note Evas is a stateful canvas. If no operations changing its state took
 * place since the last rendering action, you won't see no changes and this
 * call will be a no-op.
 *
 * @return A newly allocated list of updated rectangles of the canvas
 * ($Eina.Rectangle structs). Free this list with @ref
 * evas_render_updates_free.
 *
 * @ingroup Evas_Canvas
 */
EOAPI Eina_List *evas_canvas_render_updates(void);

/**
 * @brief Flush the image cache of the canvas.
 *
 * This function flushes image cache of canvas.
 *
 * @ingroup Evas_Canvas
 */
EOAPI void evas_canvas_image_cache_flush(void);

/**
 * @brief Convert/scale an output screen coordinate into canvas coordinates.
 *
 * This function takes in a vertical coordinate as the @c y parameter and
 * converts it into canvas units, accounting for output size, viewport size and
 * location, returning it as the function return value. If @c e is invalid, the
 * results are undefined.
 *
 * @param[in] y The screen/output y coordinate.
 *
 * @return The screen coordinate translated to canvas unit coordinates.
 *
 * @ingroup Evas_Canvas
 */
EOAPI Evas_Coord evas_canvas_coord_screen_y_to_world(int y);

/**
 * @brief Removes the @c keyname key from the current list of modifier keys on
 * canvas @c e.
 *
 * See also @ref evas_canvas_key_modifier_add.
 *
 * @param[in] keyname The name of the key to remove from the modifiers list.
 *
 * @ingroup Evas_Canvas
 */
EOAPI void evas_canvas_key_modifier_del(const char *keyname);

/**
 * @brief This function returns the @c state of nth touch point.
 *
 * The point's @c state is EVAS_TOUCH_POINT_DOWN when pressed,
 * EVAS_TOUCH_POINT_STILL when the point is not moved after pressed,
 * EVAS_TOUCH_POINT_MOVE when moved at least once after pressed and
 * EVAS_TOUCH_POINT_UP when released.
 *
 * @param[in] n The number of the touched point (0 being the first).
 *
 * @return @c state of nth touch point, if the call succeeded,
 * EVAS_TOUCH_POINT_CANCEL otherwise.
 *
 * @ingroup Evas_Canvas
 */
EOAPI Evas_Touch_Point_State evas_canvas_touch_point_list_nth_state_get(unsigned int n);

/** Inform to the evas that it got the focus.
 *
 * @ingroup Evas_Canvas
 */
EOAPI void evas_canvas_focus_in(void);

/**
 * @brief Add an "obscured region" to an Evas canvas.
 *
 * This is the function by which one tells an Evas canvas that a part of it
 * must not be repainted. The region must be rectangular and its coordinates
 * inside the canvas viewport are passed in the call. After this call, the
 * region specified won't participate in any form in Evas' calculations and
 * actions during its rendering updates, having its displaying content frozen
 * as it was just after this function took place.
 *
 * We call it "obscured region" because the most common use case for this
 * rendering (partial) freeze is something else (most probably other canvas)
 * being on top of the specified rectangular region, thus shading it completely
 * from the user's final scene in a display. To avoid unnecessary processing,
 * one should indicate to the obscured canvas not to bother about the
 * non-important area.
 *
 * The majority of users won't have to worry about this function, as they'll be
 * using just one canvas in their applications, with nothing inset or on top of
 * it in any form.
 *
 * To make this region one that has to be repainted again, call the function
 * @ref evas_obscured_clear.
 *
 * @note This is a very low level function, which most of Evas' users wouldn't
 * care about.
 *
 * @note This function does not flag the canvas as having its state changed. If
 * you want to re-render it afterwards expecting new contents, you have to add
 * "damage" regions yourself (see @ref evas_damage_rectangle_add).
 *
 * @param[in] y The rectangle's top left corner's vertical coordinate.
 * @param[in] w The rectangle's width.
 * @param[in] h The rectangle's height.
 *
 * @ingroup Evas_Canvas
 */
EOAPI void evas_canvas_obscured_rectangle_add(int x, int y, int w, int h);

/**
 * @brief Make the canvas discard as much data as possible used by the engine
 * at runtime.
 *
 * This function will unload images, delete textures and much more, where
 * possible. You may also want to call @ref evas_canvas_render_idle_flush
 * immediately prior to this to perhaps discard a little more, though this
 * function should implicitly delete most of what
 * @ref evas_canvas_render_idle_flush might discard too.
 *
 * @ingroup Evas_Canvas
 */
EOAPI void evas_canvas_render_dump(void);

/**
 * @brief Mouse in event feed.
 *
 * This function will set some evas properties that is necessary when the mouse
 * in event happens. It prepares information to be treated by the callback
 * function.
 *
 * @param[in] data The data for canvas.
 *
 * @ingroup Evas_Canvas
 */
EOAPI void evas_canvas_event_feed_mouse_in(unsigned int timestamp, const void *data);

/**
 * @brief Retrieve the Evas object stacked at the top of a given rectangular
 * region in a canvas
 *
 * This function will traverse all the layers of the given canvas, from top to
 * bottom, querying for objects with areas overlapping with the given
 * rectangular region inside @c e. The user can remove from the query objects
 * which are hidden and/or which are set to pass events.
 *
 * @warning This function will skip objects parented by smart objects, acting
 * only on the ones at the "top level", with regard to object parenting.
 *
 * @param[in] y The top left corner's vertical coordinate for the rectangular
 * region.
 * @param[in] w The width of the rectangular region.
 * @param[in] h The height of the rectangular region.
 * @param[in] include_pass_events_objects Boolean flag to include or not
 * objects which pass events in this calculation.
 * @param[in] include_hidden_objects Boolean flag to include or not hidden
 * objects in this calculation.
 *
 * @return The Evas object that is over all other objects at the given
 * rectangular region.
 *
 * @ingroup Evas_Canvas
 */
EOAPI Evas_Object *evas_canvas_object_top_in_rectangle_get(Evas_Coord x, Evas_Coord y, Evas_Coord w, Evas_Coord h, Eina_Bool include_pass_events_objects, Eina_Bool include_hidden_objects);

/** Force renderization of the given canvas.
 *
 * @ingroup Evas_Canvas
 */
EOAPI void evas_canvas_render(void);

EOAPI void evas_canvas_event_feed_multi_up(int d, int x, int y, double rad, double radx, double rady, double pres, double ang, double fx, double fy, Evas_Button_Flags flags, unsigned int timestamp, const void *data);

/**
 * @brief Prepends a font path to the list of font paths used by the given
 * evas.
 *
 * @param[in] path The new font path.
 *
 * @ingroup Evas_Canvas
 */
EOAPI void evas_canvas_font_path_prepend(const char *path);

/**
 * @brief Remove all "obscured regions" from an Evas canvas.
 *
 * This function removes all the rectangles from the obscured regions list of
 * the canvas @c e. It takes obscured areas added with
 * @ref evas_canvas_obscured_rectangle_add and make them again a regions that
 * have to be repainted on rendering updates.
 *
 * @note This is a very low level function, which most of Evas' users wouldn't
 * care about.
 *
 * @note This function does not flag the canvas as having its state changed. If
 * you want to re-render it afterwards expecting new contents, you have to add
 * "damage" regions yourself (see @ref evas_canvas_damage_rectangle_add).
 *
 * @ingroup Evas_Canvas
 */
EOAPI void evas_canvas_obscured_clear(void);

/**
 * @brief Mouse cancel event feed.
 *
 * This function will call @ref evas_canvas_event_feed_mouse_up when a mouse
 * cancel event happens.
 *
 * @param[in] data The data for canvas.
 *
 * @ingroup Evas_Canvas
 */
EOAPI void evas_canvas_event_feed_mouse_cancel(unsigned int timestamp, const void *data);

/**
 * @brief Convert/scale an output screen coordinate into canvas coordinates.
 *
 * This function takes in a horizontal coordinate as the @c x parameter and
 * converts it into canvas units, accounting for output size, viewport size and
 * location, returning it as the function return value. If @c e is invalid, the
 * results are undefined.
 *
 * @param[in] x The screen/output x coordinate.
 *
 * @return The screen coordinate translated to canvas unit coordinates.
 *
 * @ingroup Evas_Canvas
 */
EOAPI Evas_Coord evas_canvas_coord_screen_x_to_world(int x);

/**
 * @brief Adds the @c keyname key to the current list of lock keys.
 *
 * Locks are keys like caps lock, num lock or scroll lock, i.e., keys which are
 * meant to be pressed once -- toggling a binary state which is bound to it --
 * and thus altering the behavior of all  subsequently pressed keys somehow,
 * depending on its state. Evas is so that these keys can be defined by the
 * user.
 *
 * This allows custom locks to be added to the evas system at run time. It is
 * then possible to set and unset lock keys programmatically for other parts of
 * the program to check and act on. Programmers using Evas would check for lock
 * keys on key event callbacks using @ref evas_key_lock_is_set.
 *
 * @note If the programmer instantiates the canvas by means of the
 * ecore_evas_new() family of helper functions, Ecore will take care of
 * registering on it all standard lock keys: "Caps_Lock", "Num_Lock",
 * "Scroll_Lock".
 *
 * @param[in] keyname The name of the key to add to the locks list.
 *
 * @ingroup Evas_Canvas
 */
EOAPI void evas_canvas_key_lock_add(const char *keyname);

/**
 * @brief Make the canvas discard internally cached data used for rendering.
 *
 * This function flushes the arrays of delete, active and render objects. Other
 * things it may also discard are: shared memory segments, temporary scratch
 * buffers, cached data to avoid re-compute of that data etc.
 *
 * @ingroup Evas_Canvas
 */
EOAPI void evas_canvas_render_idle_flush(void);

/**
 * @brief Convert/scale a canvas coordinate into output screen coordinates.
 *
 * This function takes in a vertical coordinate as the @c x parameter and
 * converts it into output units, accounting for output size, viewport size and
 * location, returning it as the function return value. If @c e is invalid, the
 * results are undefined.
 *
 * @param[in] y The canvas y coordinate.
 *
 * @return The output/screen coordinate translated to output coordinates.
 *
 * @ingroup Evas_Canvas
 */
EOAPI int evas_canvas_coord_world_y_to_screen(Evas_Coord y);

/**
 * @brief Key down event feed with keycode.
 *
 * This function will set some evas properties that is necessary when a key is
 * pressed. It prepares information to be treated by the callback function.
 *
 * @param[in] key The key released.
 * @param[in] string A string.
 * @param[in] compose Compose.
 * @param[in] timestamp Timestamp of the mouse up event.
 * @param[in] data Data for canvas.
 * @param[in] keycode Key scan code numeric value for canvas.
 *
 * @since 1.10
 *
 * @ingroup Evas_Canvas
 */
EOAPI void evas_canvas_event_feed_key_down_with_keycode(const char *keyname, const char *key, const char *string, const char *compose, unsigned int timestamp, const void *data, unsigned int keycode);

/**
 * @brief Key up event feed with keycode.
 *
 * This function will set some evas properties that is necessary when a key is
 * released. It prepares information to be treated by the callback function.
 *
 * @param[in] key The key released.
 * @param[in] string A string.
 * @param[in] compose Compose.
 * @param[in] timestamp Timestamp of the mouse up event.
 * @param[in] data Data for canvas.
 * @param[in] keycode Key scan code numeric value for canvas.
 *
 * @since 1.10
 *
 * @ingroup Evas_Canvas
 */
EOAPI void evas_canvas_event_feed_key_up_with_keycode(const char *keyname, const char *key, const char *string, const char *compose, unsigned int timestamp, const void *data, unsigned int keycode);

/**
 * @brief Input device axis update event feed.
 *
 * This function will set some evas properties that is necessary when an e.g.
 * stylus axis is updated. It prepares information to be treated by the
 * callback function.
 *
 * @param[in] device System-provided device identifier.
 * @param[in] toolid Type of tool currently being used.
 * @param[in] naxes Number of elements in the \p axis array.
 * @param[in] axis Array containing the current value of all updated axes.
 * @param[in] data Data for canvas.
 *
 * @since 1.13
 *
 * @ingroup Evas_Canvas
 */
EOAPI void evas_canvas_event_feed_axis_update(unsigned int timestamp, int device, int toolid, int naxes, const Evas_Axis *axis, const void *data);


#endif
