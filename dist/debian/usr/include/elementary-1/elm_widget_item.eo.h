#ifndef _ELM_WIDGET_ITEM_EO_H_
#define _ELM_WIDGET_ITEM_EO_H_

#ifndef _ELM_WIDGET_ITEM_EO_CLASS_TYPE
#define _ELM_WIDGET_ITEM_EO_CLASS_TYPE

typedef Eo Elm_Widget_Item;

#endif

#ifndef _ELM_WIDGET_ITEM_EO_TYPES
#define _ELM_WIDGET_ITEM_EO_TYPES


#endif
#define ELM_WIDGET_ITEM_CLASS elm_widget_item_class_get()

EAPI const Eo_Class *elm_widget_item_class_get(void) EINA_CONST;

/**
 * @brief Control size restriction state of an object's tooltip
 *
 * This function returns whether a tooltip is allowed to expand beyond its
 * parent window's canvas. It will instead be limited only by the size of the
 * display.
 *
 * @param[in] disable If @c true, size restrictions are disabled
 *
 * @return @c false on failure, @c true on success
 *
 * @ingroup Elm_Widget_Item
 */
EOAPI Eina_Bool elm_wdg_item_tooltip_window_mode_set(Eina_Bool disable);

/**
 * @brief Control size restriction state of an object's tooltip
 *
 * This function returns whether a tooltip is allowed to expand beyond its
 * parent window's canvas. It will instead be limited only by the size of the
 * display.
 *
 * @return If @c true, size restrictions are disabled
 *
 * @ingroup Elm_Widget_Item
 */
EOAPI Eina_Bool elm_wdg_item_tooltip_window_mode_get(void);

/**
 * @brief Control a different style for this item tooltip.
 *
 * @note before you set a style you should define a tooltip with
 * @ref elm_wdg_item_tooltip_content_cb_set or
 * @ref elm_wdg_item_tooltip_text_set
 *
 * See: elm_object_tooltip_style_set() for more details.
 *
 * @param[in] style the theme style used/to use (default, transparent, ...)
 *
 * @ingroup Elm_Widget_Item
 */
EOAPI void elm_wdg_item_tooltip_style_set(const char *style);

/**
 * @brief Control a different style for this item tooltip.
 *
 * @note before you set a style you should define a tooltip with
 * @ref elm_wdg_item_tooltip_content_cb_set or
 * @ref elm_wdg_item_tooltip_text_set
 *
 * See: elm_object_tooltip_style_set() for more details.
 *
 * @return the theme style used/to use (default, transparent, ...)
 *
 * @ingroup Elm_Widget_Item
 */
EOAPI const char *elm_wdg_item_tooltip_style_get(void);

/**
 * @brief Control the type of mouse pointer/cursor decoration to be shown, when
 * the mouse pointer is over the given item
 *
 * This function works analogously as elm_object_cursor_set(), but here the
 * cursor's changing area is restricted to the item's area, and not the whole
 * widget's. Note that that item cursors have precedence over widget cursors,
 * so that a mouse over an item with custom cursor set will always show that
 * cursor.
 *
 * If this function is called twice for an object, a previously set cursor will
 * be unset on the second call.
 *
 * @param[in] cursor the cursor type's name
 *
 * @ingroup Elm_Widget_Item
 */
EOAPI void elm_wdg_item_cursor_set(const char *cursor);

/**
 * @brief Control the type of mouse pointer/cursor decoration to be shown, when
 * the mouse pointer is over the given item
 *
 * This function works analogously as elm_object_cursor_set(), but here the
 * cursor's changing area is restricted to the item's area, and not the whole
 * widget's. Note that that item cursors have precedence over widget cursors,
 * so that a mouse over an item with custom cursor set will always show that
 * cursor.
 *
 * If this function is called twice for an object, a previously set cursor will
 * be unset on the second call.
 *
 * @return the cursor type's name
 *
 * @ingroup Elm_Widget_Item
 */
EOAPI const char *elm_wdg_item_cursor_get(void);

/**
 * @brief Conrol a different @c style for a given custom cursor set for an
 * item.
 *
 * This function only makes sense when one is using custom mouse cursor
 * decorations defined in a theme file, which can have, given a cursor
 * name/type, alternate styles on it. It works analogously as
 * elm_object_cursor_style_set(), but here applies only to item objects.
 *
 * @warning Before you set a cursor style you should have defined a custom
 * cursor previously on the item, with @ref elm_wdg_item_cursor_set
 *
 * @param[in] style the theme style to use/in use (e.g. $"default",
 * $"transparent", etc)
 *
 * @ingroup Elm_Widget_Item
 */
EOAPI void elm_wdg_item_cursor_style_set(const char *style);

/**
 * @brief Conrol a different @c style for a given custom cursor set for an
 * item.
 *
 * This function only makes sense when one is using custom mouse cursor
 * decorations defined in a theme file, which can have, given a cursor
 * name/type, alternate styles on it. It works analogously as
 * elm_object_cursor_style_set(), but here applies only to item objects.
 *
 * @warning Before you set a cursor style you should have defined a custom
 * cursor previously on the item, with @ref elm_wdg_item_cursor_set
 *
 * @return the theme style to use/in use (e.g. $"default", $"transparent", etc)
 *
 * @ingroup Elm_Widget_Item
 */
EOAPI const char *elm_wdg_item_cursor_style_get(void);

/**
 * @brief Control if the (custom)cursor for a given item should be searched in
 * its theme, also, or should only rely on the rendering engine.
 *
 * @note This call is of use only if you've set a custom cursor for items, with
 * @ref elm_wdg_item_cursor_set.
 *
 * @note By default, cursors will only be looked for between those provided by
 * the rendering engine.
 *
 * @param[in] engine_only Use @c true to have cursors looked for only on those
 * provided by the rendering engine, @c false to have them searched on the
 * widget's theme, as well.
 *
 * @ingroup Elm_Widget_Item
 */
EOAPI void elm_wdg_item_cursor_engine_only_set(Eina_Bool engine_only);

/**
 * @brief Control if the (custom)cursor for a given item should be searched in
 * its theme, also, or should only rely on the rendering engine.
 *
 * @note This call is of use only if you've set a custom cursor for items, with
 * @ref elm_wdg_item_cursor_set.
 *
 * @note By default, cursors will only be looked for between those provided by
 * the rendering engine.
 *
 * @return Use @c true to have cursors looked for only on those provided by the
 * rendering engine, @c false to have them searched on the widget's theme, as
 * well.
 *
 * @ingroup Elm_Widget_Item
 */
EOAPI Eina_Bool elm_wdg_item_cursor_engine_only_get(void);

/**
 * @brief Control a content of an object item
 *
 * This sets a new object to an item as a content object. If any object was
 * already set as a content object in the same part, previous object will be
 * deleted automatically.
 *
 * @param[in] part The content part name  (NULL for the default content)
 * @param[in] content The content of the object item
 *
 * @ingroup Elm_Widget_Item
 */
EOAPI void elm_wdg_item_part_content_set(const char * part, Evas_Object *content);

/**
 * @brief Control a content of an object item
 *
 * This sets a new object to an item as a content object. If any object was
 * already set as a content object in the same part, previous object will be
 * deleted automatically.
 *
 * @param[in] part The content part name  (NULL for the default content)
 *
 * @return The content of the object item
 *
 * @ingroup Elm_Widget_Item
 */
EOAPI Evas_Object *elm_wdg_item_part_content_get(const char * part);

/**
 * @brief Control a label of an object item
 *
 * @note Elementary object items may have many labels
 *
 * @param[in] part The text part name (NULL for the default label)
 * @param[in] label Text of the label
 *
 * @ingroup Elm_Widget_Item
 */
EOAPI void elm_wdg_item_part_text_set(const char * part, const char *label);

/**
 * @brief Control a label of an object item
 *
 * @note Elementary object items may have many labels
 *
 * @param[in] part The text part name (NULL for the default label)
 *
 * @return Text of the label
 *
 * @ingroup Elm_Widget_Item
 */
EOAPI const char *elm_wdg_item_part_text_get(const char * part);

#ifdef ELM_WIDGET_ITEM_PROTECTED
/**
 * @brief Save additional text part content
 *
 * @param[in] part
 * @param[in] label
 *
 * @ingroup Elm_Widget_Item
 */
EOAPI void elm_wdg_item_part_text_custom_set(const char * part, const char *label);
#endif

#ifdef ELM_WIDGET_ITEM_PROTECTED
/**
 * @brief Get additional text part content
 *
 * @param[in] part
 *
 * @ingroup Elm_Widget_Item
 */
EOAPI const char *elm_wdg_item_part_text_custom_get(const char * part);
#endif

/**
 * @brief Control the object item focused
 *
 * @param[in] focused The focused state
 *
 * @since 1.10
 *
 * @ingroup Elm_Widget_Item
 */
EOAPI void elm_wdg_item_focus_set(Eina_Bool focused);

/**
 * @brief Control the object item focused
 *
 * @return The focused state
 *
 * @since 1.10
 *
 * @ingroup Elm_Widget_Item
 */
EOAPI Eina_Bool elm_wdg_item_focus_get(void);

/**
 * @brief Control the style of an object item
 *
 * @param[in] style The style of object item
 *
 * @since 1.9
 *
 * @ingroup Elm_Widget_Item
 */
EOAPI void elm_wdg_item_style_set(const char *style);

/**
 * @brief Control the style of an object item
 *
 * @return The style of object item
 *
 * @since 1.9
 *
 * @ingroup Elm_Widget_Item
 */
EOAPI const char *elm_wdg_item_style_get(void);

/**
 * @brief Control the disabled state of an widget item.
 *
 * Elementary object item can be disabled, in which state they won't receive
 * input and, in general, will be themed differently from their normal state,
 * usually greyed out. Useful for contexts where you don't want your users to
 * interact with some of the parts of you interface.
 *
 * This sets the state for the widget item, either disabling it or enabling it
 * back.
 *
 * @param[in] disable @c true, if the widget item is disabled, @c false if it's
 * enabled (or on errors)
 *
 * @ingroup Elm_Widget_Item
 */
EOAPI void elm_wdg_item_disabled_set(Eina_Bool disable);

/**
 * @brief Control the disabled state of an widget item.
 *
 * Elementary object item can be disabled, in which state they won't receive
 * input and, in general, will be themed differently from their normal state,
 * usually greyed out. Useful for contexts where you don't want your users to
 * interact with some of the parts of you interface.
 *
 * This sets the state for the widget item, either disabling it or enabling it
 * back.
 *
 * @return @c true, if the widget item is disabled, @c false if it's enabled
 * (or on errors)
 *
 * @ingroup Elm_Widget_Item
 */
EOAPI Eina_Bool elm_wdg_item_disabled_get(void);

/** Get highlight order
 *
 * @since 1.8
 *
 * @ingroup Elm_Widget_Item
 */
EOAPI const Eina_List *elm_wdg_item_access_order_get(void);

/**
 * @brief Set highlight order
 *
 * @param[in] objs Order of objects to pass highlight
 *
 * @since 1.8
 *
 * @ingroup Elm_Widget_Item
 */
EOAPI void elm_wdg_item_access_order_set(Eina_List *objs);

/**
 * @brief Get the widget object's handle which contains a given item
 *
 * @note This returns the widget object itself that an item belongs to. Note:
 * Every elm_object_item supports this API
 *
 * @return The widget object
 *
 * @ingroup Elm_Widget_Item
 */
EOAPI Evas_Object *elm_wdg_item_widget_get(void);

/** Delete the given item.
 *
 * @ingroup Elm_Widget_Item
 */
EOAPI void elm_wdg_item_del(void);

#ifdef ELM_WIDGET_ITEM_PROTECTED
/** notify deletion of widget item
 *
 * @ingroup Elm_Widget_Item
 */
EOAPI void elm_wdg_item_pre_notify_del(void);
#endif

/**
 * @brief Set the text to be shown in a given object item's tooltips.
 *
 * Setup the text as tooltip to object. The item can have only one tooltip, so
 * any previous tooltip data - set with this function or
 * @ref elm_wdg_item_tooltip_content_cb_set - is removed.
 *
 * See: elm_object_tooltip_text_set() for more details.
 *
 * @param[in] text The text to set in the content.
 *
 * @ingroup Elm_Widget_Item
 */
EOAPI void elm_wdg_item_tooltip_text_set(const char *text);

#ifdef ELM_WIDGET_ITEM_PROTECTED
/**
 * @brief Set widget item tooltip as a text string
 *
 * @param[in] text
 *
 * @ingroup Elm_Widget_Item
 */
EOAPI void elm_wdg_item_tooltip_translatable_text_set(const char *text);
#endif

/**
 * @brief Unset tooltip from item.
 *
 * Remove tooltip from item. The callback provided as del_cb to
 * @ref elm_wdg_item_tooltip_content_cb_set will be called to notify it is not
 * used anymore.
 *
 * See: elm_object_tooltip_unset() for more details. See:
 * @ref elm_wdg_item_tooltip_content_cb_set
 *
 * @ingroup Elm_Widget_Item
 */
EOAPI void elm_wdg_item_tooltip_unset(void);

/**
 * @brief Unset any custom mouse pointer/cursor decoration set to be shown,
 * when the mouse pointer is over the given item, thus making it show the
 * default cursor again.
 *
 * Use this call to undo any custom settings on this item's cursor decoration,
 * bringing it back to defaults (no custom style set).
 *
 * See: elm_object_cursor_unset() See: @ref elm_wdg_item_cursor_set
 *
 * @ingroup Elm_Widget_Item
 */
EOAPI void elm_wdg_item_cursor_unset(void);

/**
 * @brief Unset a content of an object item
 *
 * @note Elementary object items may have many contents
 *
 * @param[in] part The content part name to unset (NULL for the default
 * content)
 *
 * @ingroup Elm_Widget_Item
 */
EOAPI Evas_Object *elm_wdg_item_part_content_unset(const char *part);

#ifdef ELM_WIDGET_ITEM_PROTECTED
/** Update additional text part content
 *
 * @ingroup Elm_Widget_Item
 */
EOAPI void elm_wdg_item_part_text_custom_update(void);
#endif

/**
 * @brief Add a callback for a signal emitted by object item edje.
 *
 * This function connects a callback function to a signal emitted by the edje
 * object of the object item. Globs can occur in either the emission or source
 * name.
 *
 * @param[in] source The signal's source.
 * @param[in] func The callback function to be executed when the signal is
 * emitted.
 * @param[in] data A pointer to data to pass to the callback function.
 *
 * @since 1.8
 *
 * @ingroup Elm_Widget_Item
 */
EOAPI void elm_wdg_item_signal_callback_add(const char *emission, const char *source, Elm_Object_Item_Signal_Cb func, void *data);

/**
 * @brief Remove a signal-triggered callback from a object item edje object.
 *
 * This function removes the last callback, previously attached to a signal
 * emitted by an underlying Edje object of @c it, whose parameters @c emission,
 * @c source and @c func match exactly with those passed to a previous call to
 * @ref elm_wdg_item_signal_callback_add. The data pointer that was passed to
 * this call will be returned.
 *
 * See: @ref elm_wdg_item_signal_callback_add
 *
 * @param[in] source The signal's source.
 * @param[in] func The callback function to be executed when the signal is
 * emitted.
 *
 * @return The data pointer of the signal callback or @c NULL, on errors.
 *
 * @since 1.8
 *
 * @ingroup Elm_Widget_Item
 */
EOAPI void *elm_wdg_item_signal_callback_del(const char *emission, const char *source, Elm_Object_Item_Signal_Cb func);

/**
 * @brief Send a signal to the edje object of the widget item.
 *
 * This function sends a signal to the edje object of the obj item. An edje
 * program can respond to a signal by specifying matching 'signal' and 'source'
 * fields.
 *
 * @param[in] source The signal's source.
 *
 * @ingroup Elm_Widget_Item
 */
EOAPI void elm_wdg_item_signal_emit(const char *emission, const char *source);

/**
 * @brief Set the text to read out when in accessibility mode
 *
 * @param[in] txt The text that describes the widget to people with poor or no
 * vision
 *
 * @ingroup Elm_Widget_Item
 */
EOAPI void elm_wdg_item_access_info_set(const char *txt);

/**
 * @brief Get an accessible object of the object item.
 *
 * @return Accessible object of the object item or NULL for any error
 *
 * @since 1.8
 *
 * @ingroup Elm_Widget_Item
 */
EOAPI Evas_Object *elm_wdg_item_access_object_get(void);

/**
 * @brief Set the text for an object item's part, marking it as translatable.
 *
 * The string to set as @c text must be the original one. Do not pass the
 * return of @c gettext() here. Elementary will translate the string internally
 * and set it on the object item using @ref elm_wdg_item_part_text_set, also
 * storing the original string so that it can be automatically translated when
 * the language is changed with elm_language_set(). The @c domain will be
 * stored along to find the translation in the correct catalog. It can be NULL,
 * in which case it will use whatever domain was set by the application with
 * @c textdomain(). This is useful in case you are building a library on top of
 * Elementary that will have its own translatable strings, that should not be
 * mixed with those of programs using the library.
 *
 * @param[in] domain The translation domain to use
 * @param[in] label The original, non-translated text to set
 *
 * @since 1.8
 *
 * @ingroup Elm_Widget_Item
 */
EOAPI void elm_wdg_item_domain_translatable_part_text_set(const char *part, const char *domain, const char *label);

/**
 * @brief Get the original string set as translatable for an object item.
 *
 * When setting translated strings, the function
 * @ref elm_wdg_item_part_text_get will return the translation returned by
 * @c gettext(). To get the original string use this function.
 *
 * @param[in] part The name of the part that was set
 *
 * @return The original, untranslated string
 *
 * @since 1.8
 *
 * @ingroup Elm_Widget_Item
 */
EOAPI const char *elm_wdg_item_translatable_part_text_get(const char *part);

#ifdef ELM_WIDGET_ITEM_PROTECTED
/** Query translate
 *
 * @ingroup Elm_Widget_Item
 */
EOAPI void elm_wdg_item_translate(void);
#endif

/**
 * @brief Mark the part text to be translatable or not.
 *
 * Once you mark the part text to be translatable, the text will be translated
 * internally regardless of @ref elm_wdg_item_part_text_set and
 * @ref elm_wdg_item_domain_translatable_part_text_set. In other case, if you
 * set the Elementary policy that all text will be translatable in default, you
 * can set the part text to not be translated by calling this API.
 *
 * See: @ref elm_wdg_item_domain_translatable_part_text_set See:
 * @ref elm_wdg_item_part_text_set See: elm_policy()
 *
 * @param[in] domain The translation domain to use
 * @param[in] translatable @c true, the part text will be translated
 * internally. @c false, otherwise.
 *
 * @since 1.8
 *
 * @ingroup Elm_Widget_Item
 */
EOAPI void elm_wdg_item_domain_part_text_translatable_set(const char *part, const char *domain, Eina_Bool translatable);

/**
 * @brief This returns track object of the item.
 *
 * @note This gets a rectangle object that represents the object item's
 * internal object. If you want to check the geometry, visibility of the item,
 * you can call the evas apis such as evas_object_geometry_get(),
 * evas_object_visible_get() to the track object. Note that all of the widget
 * items may/may not have the internal object so this api may return @c NULL if
 * the widget item doesn't have it. Additionally, the widget item is
 * managed/controlled by the widget, the widget item could be changed(moved,
 * resized even deleted) anytime by it's own widget's decision. So please dont'
 * change the track object as well as don't keep the track object in your side
 * as possible but get the track object at the moment you need to refer.
 * Otherwise, you need to add some callbacks to the track object to track it's
 * attributes changes.
 *
 * @warning After use the track object, please call the
 * @ref elm_wdg_item_untrack() paired to elm_object_item_track definitely to
 * free the track object properly. Don't delete the track object.
 *
 * See: @ref elm_wdg_item_untrack See: @ref elm_wdg_item_track_get
 *
 * @return The track object
 *
 * @since 1.8
 *
 * @ingroup Elm_Widget_Item
 */
EOAPI Evas_Object *elm_wdg_item_track(void);

/**
 * @brief This retrieve the track object of the item.
 *
 * @note This retrieves the track object that was returned from
 * @ref elm_wdg_item_track.
 *
 * See: @ref elm_wdg_item_track See: @ref elm_wdg_item_track_get
 *
 * @since 1.8
 *
 * @ingroup Elm_Widget_Item
 */
EOAPI void elm_wdg_item_untrack(void);

/**
 * @brief Get the track object reference count.
 *
 * @note This gets the reference count for the track object. Whenever you call
 * the @ref elm_wdg_item_track, the reference count will be increased by one.
 * Likely the reference count will be decreased again when you call the
 * @ref elm_wdg_item_untrack. Unless the reference count reaches to zero, the
 * track object won't be deleted. So please be sure to call
 * @ref elm_wdg_item_untrack() paired to the elm_object_item_track call count.
 *
 * See: @ref elm_wdg_item_track See: @ref elm_wdg_item_track_get
 *
 * @since 1.8
 *
 * @ingroup Elm_Widget_Item
 */
EOAPI int elm_wdg_item_track_get(void);

#ifdef ELM_WIDGET_ITEM_PROTECTED
/** Query track_cancel
 *
 * @ingroup Elm_Widget_Item
 */
EOAPI void elm_wdg_item_track_cancel(void);
#endif

/**
 * @brief Set the function to be called when an item from the widget is freed.
 *
 * @note Every elm_object_item supports this API
 *
 * @param[in] del_cb The function called
 *
 * @ingroup Elm_Widget_Item
 */
EOAPI void elm_wdg_item_del_cb_set(Evas_Smart_Cb del_cb);

/**
 * @brief Set the content to be shown in the tooltip item.
 *
 * Setup the tooltip to item. The item can have only one tooltip, so any
 * previous tooltip data is removed. @c func(with @c data) will be called every
 * time that need show the tooltip and it should return a valid Evas_Object.
 * This object is then managed fully by tooltip system and is deleted when the
 * tooltip is gone.
 *
 * See: elm_object_tooltip_content_cb_set() for more details.
 *
 * @param[in] data what to provide to @c func as callback data/context.
 * @param[in] del_cb called when data is not needed anymore, either when
 * another callback replaces @c func, the tooltip is unset with
 * @ref elm_wdg_item_tooltip_unset or the owner @c item dies. This callback
 * receives as the first parameter the given @c data, and @c event_info is the
 * item.
 *
 * @ingroup Elm_Widget_Item
 */
EOAPI void elm_wdg_item_tooltip_content_cb_set(Elm_Tooltip_Item_Content_Cb func, const void *data, Evas_Smart_Cb del_cb);

/**
 * @brief Register object item as an accessible object.
 *
 * @return Accessible object of the object item or NULL for any error
 *
 * @since 1.8
 *
 * @ingroup Elm_Widget_Item
 */
EOAPI Evas_Object *elm_wdg_item_access_register(void);

/** Unregister accessible object of the object item.
 *
 * @since 1.8
 *
 * @ingroup Elm_Widget_Item
 */
EOAPI void elm_wdg_item_access_unregister(void);

/** Unset highlight order
 *
 * @since 1.8
 *
 * @ingroup Elm_Widget_Item
 */
EOAPI void elm_wdg_item_access_order_unset(void);

#ifdef ELM_WIDGET_ITEM_PROTECTED
EOAPI void elm_wdg_item_disable(void);
#endif

#ifdef ELM_WIDGET_ITEM_PROTECTED
EOAPI Eina_Bool elm_wdg_item_del_pre(void);
#endif

/**
 * @brief Get the next object with specific focus direction.
 *
 * @param[in] dir Focus direction
 *
 * @return Focus next object
 *
 * @since 1.16
 *
 * @ingroup Elm_Widget_Item
 */
EOAPI Evas_Object *elm_wdg_item_focus_next_object_get(Elm_Focus_Direction dir);

/**
 * @brief Set the next object with specific focus direction.
 *
 * @param[in] dir Focus direction
 *
 * @since 1.16
 *
 * @ingroup Elm_Widget_Item
 */
EOAPI void elm_wdg_item_focus_next_object_set(Evas_Object *next, Elm_Focus_Direction dir);

/**
 * @brief Get the next object item with specific focus direction.
 *
 * @param[in] dir Focus direction
 *
 * @return Focus next object item
 *
 * @since 1.16
 *
 * @ingroup Elm_Widget_Item
 */
EOAPI Elm_Object_Item *elm_wdg_item_focus_next_item_get(Elm_Focus_Direction dir);

/**
 * @brief Set the next object item with specific focus direction.
 *
 * @param[in] dir Focus direction
 *
 * @since 1.16
 *
 * @ingroup Elm_Widget_Item
 */
EOAPI void elm_wdg_item_focus_next_item_set(Elm_Object_Item *next_item, Elm_Focus_Direction dir);


#endif
