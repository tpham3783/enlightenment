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
 * @brief Disable size restrictions on an object's tooltip
 *
 * This function allows a tooltip to expand beyond its parent window's canvas.
 * It will instead be limited only by the size of the display.
 *
 * @param[in] disable If @c EINA_TRUE, size restrictions are disabled
 */
EOAPI Eina_Bool  elm_wdg_item_tooltip_window_mode_set(Eina_Bool disable);

/**
 * @brief Get size restriction state of an object's tooltip
 *
 * This function returns whether a tooltip is allowed to expand beyond
 * its parent window's canvas.
 * It will instead be limited only by the size of the display.
 */
EOAPI Eina_Bool  elm_wdg_item_tooltip_window_mode_get(void);

/**
 * Sets a different style for this item tooltip.
 *
 * @note before you set a style you should define a tooltip with
 * elm_object_item_tooltip_content_cb_set() or
 * elm_object_item_tooltip_text_set()
 *
 * @see elm_object_tooltip_style_set() for more details.
 *
 * @ingroup General
 *
 * @param[in] style the theme style used/to use (default, transparent, ...)
 */
EOAPI void  elm_wdg_item_tooltip_style_set(const char *style);

/**
 * Get the style for this item tooltip.
 *
 * @see elm_object_tooltip_style_get() for more details.
 * @see elm_object_item_tooltip_style_set()
 *
 * @ingroup General
 */
EOAPI const char * elm_wdg_item_tooltip_style_get(void);

/**
 * Set the type of mouse pointer/cursor decoration to be shown,
 * when the mouse pointer is over the given item
 *
 * This function works analogously as elm_object_cursor_set(), but
 * here the cursor's changing area is restricted to the item's
 * area, and not the whole widget's. Note that that item cursors
 * have precedence over widget cursors, so that a mouse over an
 * item with custom cursor set will always show @b that cursor.
 *
 * If this function is called twice for an object, a previously set
 * cursor will be unset on the second call.
 *
 * @see elm_object_cursor_set()
 * @see elm_object_item_cursor_get()
 * @see elm_object_item_cursor_unset()
 *
 * @ingroup General
 *
 * @param[in] cursor the cursor type's name
 */
EOAPI void  elm_wdg_item_cursor_set(const char *cursor);

/**
 * Get the type of mouse pointer/cursor decoration set to be shown,
 * when the mouse pointer is over the given item
 *
 * @see elm_object_cursor_get()
 * @see elm_object_item_cursor_set()
 * @see elm_object_item_cursor_unset()
 *
 * @ingroup General
 */
EOAPI const char * elm_wdg_item_cursor_get(void);

/**
 * Set a different @b style for a given custom cursor set for an
 * item.
 *
 * This function only makes sense when one is using custom mouse
 * cursor decorations <b>defined in a theme file</b>, which can have,
 * given a cursor name/type, <b>alternate styles</b> on it. It
 * works analogously as elm_object_cursor_style_set(), but here
 * applies only to item objects.
 *
 * @warning Before you set a cursor style you should have defined a
 * custom cursor previously on the item, with
 * elm_object_item_cursor_set()
 *
 * @see elm_object_item_cursor_engine_only_set()
 * @see elm_object_item_cursor_style_get()
 *
 * @ingroup General
 *
 * @param[in] style the <b>theme style</b> to use/in use (e.g. @c "default", @c "transparent", etc)
 */
EOAPI void  elm_wdg_item_cursor_style_set(const char *style);

/**
 * Get the current @b style set for a given item's custom
 * cursor
 *
 * @see elm_object_item_cursor_style_set() for more details
 *
 * @ingroup General
 */
EOAPI const char * elm_wdg_item_cursor_style_get(void);

/**
 * Set if the (custom)cursor for a given item should be
 * searched in its theme, also, or should only rely on the
 * rendering engine.
 *
 * @note This call is of use only if you've set a custom cursor
 * for items, with elm_object_item_cursor_set().
 *
 * @note By default, cursors will only be looked for between those
 * provided by the rendering engine.
 *
 * @ingroup General
 *
 * @param[in] engine_only Use @c EINA_TRUE to have cursors looked for only
on those provided by the rendering engine, @c EINA_FALSE
to have them searched on the widget's theme, as well.
 */
EOAPI void  elm_wdg_item_cursor_engine_only_set(Eina_Bool engine_only);

/**
 * Get if the (custom) cursor for a given item is being
 * searched in its theme, also, or is only relying on the rendering
 * engine.
 *
 * @return @c EINA_TRUE, if cursors are being looked for only on
 * those provided by the rendering engine, @c EINA_FALSE if they
 * are being searched on the widget's theme, as well.
 *
 * @see elm_object_item_cursor_engine_only_set(), for more details
 *
 * @ingroup General
 */
EOAPI Eina_Bool  elm_wdg_item_cursor_engine_only_get(void);

/**
 * Set a content of an object item
 *
 * This sets a new object to an item as a content object. If any object was
 * already set as a content object in the same part, previous object will be
 * deleted automatically.
 *
 * @note Elementary object items may have many contents
 *
 * @ingroup General
 *
 * @param[in] part The content part name  (NULL for the default content)
 * @param[in] content The content of the object item
 */
EOAPI void  elm_wdg_item_part_content_set(const char * part, Evas_Object *content);

/**
 * Get a content of an object item
 *
 * @return content of the object item or NULL for any error
 *
 * @note Elementary object items may have many contents
 *
 * @ingroup General
 *
 * @param[in] part The content part name  (NULL for the default content)
 */
EOAPI Evas_Object * elm_wdg_item_part_content_get(const char * part);

/**
 * Set a label of an object item
 *
 * @note Elementary object items may have many labels
 *
 * @ingroup General
 *
 * @param[in] part The text part name (NULL for the default label)
 * @param[in] label Text of the label
 */
EOAPI void  elm_wdg_item_part_text_set(const char * part, const char *label);

/**
 * Get a label of an object item
 *
 * @note Elementary object items may have many labels
 *
 * @ingroup General
 *
 * @param[in] part The text part name (NULL for the default label)
 */
EOAPI const char * elm_wdg_item_part_text_get(const char * part);

#ifdef ELM_WIDGET_ITEM_PROTECTED
/**
 * Save additional text part content
 *
 * @param[in] part No description supplied.
 * @param[in] label No description supplied.
 */
EOAPI void  elm_wdg_item_part_text_custom_set(const char * part, const char *label);
#endif

#ifdef ELM_WIDGET_ITEM_PROTECTED
/**
 * Get additional text part content
 *
 * @param[in] part No description supplied.
 */
EOAPI const char * elm_wdg_item_part_text_custom_get(const char * part);
#endif

/**
 * Set the object item focused
 *
 * @see elm_object_item_focus_get()
 *
 * @ingroup Focus
 * @since 1.10
 *
 * @param[in] focused The focused state
 */
EOAPI void  elm_wdg_item_focus_set(Eina_Bool focused);

/**
 * Get whether the @p it is focused or not.
 *
 * @see elm_object_item_focus_set()
 *
 * @ingroup Focus
 * @since 1.10
 */
EOAPI Eina_Bool  elm_wdg_item_focus_get(void);

/**
 * Set a style of an object item
 *
 * @since 1.9
 *
 * @ingroup General
 *
 * @param[in] style The style of object item
 */
EOAPI void  elm_wdg_item_style_set(const char *style);

/**
 * Get the style of an object item
 *
 * @since 1.9
 *
 * @ingroup General
 */
EOAPI const char * elm_wdg_item_style_get(void);

/**
 * Set the disabled state of an widget item.
 *
 * Elementary object item can be @b disabled, in which state they won't
 * receive input and, in general, will be themed differently from
 * their normal state, usually greyed out. Useful for contexts
 * where you don't want your users to interact with some of the
 * parts of you interface.
 *
 * This sets the state for the widget item, either disabling it or
 * enabling it back.
 *
 * @ingroup Styles
 *
 * @param[in] disable @c EINA_TRUE, if the widget item is disabled, @c EINA_FALSE if it's enabled (or on errors)
 */
EOAPI void  elm_wdg_item_disabled_set(Eina_Bool disable);

/**
 * Get the disabled state of an widget item.
 *
 * This gets the state of the widget, which might be enabled or disabled.
 *
 * @ingroup Styles
 */
EOAPI Eina_Bool  elm_wdg_item_disabled_get(void);

/**
 * @brief Get highlight order
 * @since 1.8
 *
 * @ingroup General
 * 
 */
EOAPI const Eina_List * elm_wdg_item_access_order_get(void);

/**
 * @brief Set highlight order
 * @since 1.8
 *
 * @ingroup General
 * 
 *
 * @param[in] objs Order of objects to pass highlight
 */
EOAPI void  elm_wdg_item_access_order_set(Eina_List *objs);

/**
 * Get the widget object's handle which contains a given item
 *
 * @note This returns the widget object itself that an item belongs to.
 * @note Every elm_object_item supports this API
 * @ingroup General
 * 
 */
EOAPI Evas_Object * elm_wdg_item_widget_get(void);

/**
 * Delete the given item.
 *
 * @ingroup General
 * 
 */
EOAPI void  elm_wdg_item_del(void);

#ifdef ELM_WIDGET_ITEM_PROTECTED
/**
 * notify deletion of widget item
 * 
 */
EOAPI void  elm_wdg_item_pre_notify_del(void);
#endif

/**
 * Set the text to be shown in a given object item's tooltips.
 *
 * Setup the text as tooltip to object. The item can have only one tooltip,
 * so any previous tooltip data - set with this function or
 * elm_object_item_tooltip_content_cb_set() - is removed.
 *
 * @see elm_object_tooltip_text_set() for more details.
 *
 * @ingroup General
 * 
 *
 * @param[in] text The text to set in the content.
 */
EOAPI void  elm_wdg_item_tooltip_text_set(const char *text);

#ifdef ELM_WIDGET_ITEM_PROTECTED
/**
 * Set widget item tooltip as a text string
 * 
 *
 * @param[in] text No description supplied.
 */
EOAPI void  elm_wdg_item_tooltip_translatable_text_set(const char *text);
#endif

/**
 * Unset tooltip from item.
 *
 * Remove tooltip from item. The callback provided as del_cb to
 * elm_object_item_tooltip_content_cb_set() will be called to notify
 * it is not used anymore.
 *
 * @see elm_object_tooltip_unset() for more details.
 * @see elm_object_item_tooltip_content_cb_set()
 *
 * @ingroup General
 * 
 */
EOAPI void  elm_wdg_item_tooltip_unset(void);

/**
 * Unset any custom mouse pointer/cursor decoration set to be
 * shown, when the mouse pointer is over the given
 * item, thus making it show the @b default cursor again.
 *
 * Use this call to undo any custom settings on this item's cursor
 * decoration, bringing it back to defaults (no custom style set).
 *
 * @see elm_object_cursor_unset()
 * @see elm_object_item_cursor_set()
 *
 * @ingroup General
 * 
 */
EOAPI void  elm_wdg_item_cursor_unset(void);

/**
 * Unset a content of an object item
 *
 * @note Elementary object items may have many contents
 *
 * @ingroup General
 * 
 *
 * @param[in] part The content part name to unset (NULL for the default content)
 */
EOAPI Evas_Object * elm_wdg_item_part_content_unset(const char *part);

#ifdef ELM_WIDGET_ITEM_PROTECTED
/**
 * Update additional text part content
 * 
 */
EOAPI void  elm_wdg_item_part_text_custom_update(void);
#endif

/**
 * Add a callback for a signal emitted by object item edje.
 *
 * This function connects a callback function to a signal emitted by the
 * edje object of the object item.
 * Globs can occur in either the emission or source name.
 *
 * @since 1.8
 *
 * @ingroup General
 * 
 *
 * @param[in] emission The signal's name.
 * @param[in] source The signal's source.
 * @param[in] func The callback function to be executed when the signal is emitted.
 * @param[in] data A pointer to data to pass to the callback function.
 */
EOAPI void  elm_wdg_item_signal_callback_add(const char *emission, const char *source, Elm_Object_Item_Signal_Cb func, void *data);

/**
 * Remove a signal-triggered callback from a object item edje object.
 *
 * This function removes the @b last callback, previously attached to
 * a signal emitted by an underlying Edje object of @a it, whose
 * parameters @a emission, @a source and @c func match exactly with
 * those passed to a previous call to
 * elm_object_item_signal_callback_add(). The data pointer that was passed
 * to this call will be returned.
 *
 * @see elm_object_item_signal_callback_add()
 * @since 1.8
 *
 * @ingroup General
 * 
 *
 * @param[in] emission The signal's name.
 * @param[in] source The signal's source.
 * @param[in] func The callback function to be executed when the signal is emitted.
 */
EOAPI void * elm_wdg_item_signal_callback_del(const char *emission, const char *source, Elm_Object_Item_Signal_Cb func);

/**
 * Send a signal to the edje object of the widget item.
 *
 * This function sends a signal to the edje object of the obj item. An
 * edje program can respond to a signal by specifying matching
 * 'signal' and 'source' fields.
 *
 * @ingroup General
 * 
 *
 * @param[in] emission The signal's name.
 * @param[in] source The signal's source.
 */
EOAPI void  elm_wdg_item_signal_emit(const char *emission, const char *source);

/**
 * Set the text to read out when in accessibility mode
 *
 * @ingroup General
 * 
 *
 * @param[in] txt The text that describes the widget to people with poor or no vision
 */
EOAPI void  elm_wdg_item_access_info_set(const char *txt);

/**
 * @brief Get an accessible object of the object item.
 * @since 1.8
 *
 * @ingroup General
 * 
 */
EOAPI Evas_Object * elm_wdg_item_access_object_get(void);

/**
 * Set the text for an object item's part, marking it as translatable.
 *
 * The string to set as @p text must be the original one. Do not pass the
 * return of @c gettext() here. Elementary will translate the string
 * internally and set it on the object item using
 * elm_object_item_part_text_set(), also storing the original string so that it
 * can be automatically translated when the language is changed with
 * elm_language_set(). The @p domain will be stored along to find the
 * translation in the correct catalog. It can be NULL, in which case it will use
 * whatever domain was set by the application with @c textdomain(). This is
 * useful in case you are building a library on top of Elementary that will have
 * its own translatable strings, that should not be mixed with those of programs
 * using the library.
 *
 * @ingroup General
 * @since 1.8
 * 
 *
 * @param[in] part The name of the part to set
 * @param[in] domain The translation domain to use
 * @param[in] label The original, non-translated text to set
 */
EOAPI void  elm_wdg_item_domain_translatable_part_text_set(const char *part, const char *domain, const char *label);

/**
 * Get the original string set as translatable for an object item.
 *
 * When setting translated strings, the function elm_object_item_part_text_get()
 * will return the translation returned by @c gettext(). To get the original
 * string use this function.
 *
 * @ingroup General
 * @since 1.8
 * 
 *
 * @param[in] part The name of the part that was set
 */
EOAPI const char * elm_wdg_item_translatable_part_text_get(const char *part);

#ifdef ELM_WIDGET_ITEM_PROTECTED
/**
 * Query translate
 * 
 */
EOAPI void  elm_wdg_item_translate(void);
#endif

/**
 * Mark the part text to be translatable or not.
 *
 * Once you mark the part text to be translatable, the text will be translated
 * internally regardless of elm_object_item_part_text_set() and
 * elm_object_item_domain_translatable_part_text_set(). In other case, if you
 * set the Elementary policy that all text will be translatable in default, you
 * can set the part text to not be translated by calling this API.
 *
 * @see elm_object_item_domain_translatable_part_text_set()
 * @see elm_object_item_part_text_set()
 * @see elm_policy()
 *
 * @since 1.8
 *
 * @ingroup General
 * 
 *
 * @param[in] part The part name of the translatable text
 * @param[in] domain The translation domain to use
 * @param[in] translatable @c EINA_TRUE, the part text will be translated internally. @c EINA_FALSE, otherwise.
 */
EOAPI void  elm_wdg_item_domain_part_text_translatable_set(const char *part, const char *domain, Eina_Bool translatable);

/**
 * This returns track object of the item.
 *
 * @note This gets a rectangle object that represents the object item's internal
 * object. If you wanna check the geometry, visibility of the item, you
 * can call the evas apis such as evas_object_geometry_get(),
 * evas_object_visible_get() to the track object. Note that all of the
 * widget items may/may not have the internal object so this api may
 * return @c NULL if the widget item doesn't have it. Additionally, the
 * widget item is managed/controlled by the widget, the widget item could
 * be changed(moved, resized even deleted) anytime by it's own widget's
 * decision. So please dont' change the track object as well as don't
 * keep the track object in your side as possible but get the track object
 * at the moment you need to refer. Otherwise, you need to add some
 * callbacks to the track object to track it's attributes changes.
 *
 * @warning After use the track object, please call the
 * elm_object_item_untrack() paired to elm_object_item_track()
 * definitely to free the track object properly. Don't delete the
 * track object.
 *
 * @see elm_object_item_untrack()
 * @see elm_object_item_track_get()
 *
 * @since 1.8
 *
 * @ingroup General
 * 
 */
EOAPI Evas_Object * elm_wdg_item_track(void);

/**
 * This retrieve the track object of the item.
 *
 * @note This retrieves the track object that was returned from
 * elm_object_item_track().
 *
 * @see elm_object_item_track()
 * @see elm_object_item_track_get()
 *
 * @since 1.8
 *
 * @ingroup General
 * 
 */
EOAPI void  elm_wdg_item_untrack(void);

/**
 * Get the track object reference count.
 *
 * @note This gets the reference count for the track object. Whenever you call
 * the elm_object_item_track(), the reference count will be increased by
 * one. Likely the referece count will be decreased again when you call
 * the elm_object_item_untrack(). Unless the reference count reaches to
 * zero, the track object won't be deleted. So please be sure to call
 * elm_object_item_untrack() paired to the elm_object_item_track() call
 * count.
 *
 * @see elm_object_item_track()
 * @see elm_object_item_track_get()
 *
 * @since 1.8
 *
 * @ingroup General
 * 
 */
EOAPI int  elm_wdg_item_track_get(void);

#ifdef ELM_WIDGET_ITEM_PROTECTED
/**
 * Query track_cancel
 * 
 */
EOAPI void  elm_wdg_item_track_cancel(void);
#endif

/**
 * @brief Set the function to be called when an item from the widget is
 * freed.
 *
 * That function will receive these parameters:
 * @li void * item data
 * @li Evas_Object * widget object
 * @li Elm_Object_Item * widget item
 *
 * @note Every elm_object_item supports this API
 *
 * @see elm_object_item_del()
 * @ingroup General
 * 
 *
 * @param[in] del_cb The function called
 */
EOAPI void  elm_wdg_item_del_cb_set(Evas_Smart_Cb del_cb);

/**
 * Set the content to be shown in the tooltip item.
 *
 * Setup the tooltip to item. The item can have only one tooltip,
 * so any previous tooltip data is removed. @p func(with @p data) will
 * be called every time that need show the tooltip and it should
 * return a valid Evas_Object. This object is then managed fully by
 * tooltip system and is deleted when the tooltip is gone.
 *
 * @see elm_object_tooltip_content_cb_set() for more details.
 *
 * @ingroup General
 * 
 *
 * @param[in] func the function used to create the tooltip contents.
 * @param[in] data what to provide to @a func as callback data/context.
 * @param[in] del_cb called when data is not needed anymore, either when
another callback replaces @a func, the tooltip is unset with
elm_object_item_tooltip_unset() or the owner @a item
dies. This callback receives as the first parameter the
given @a data, and @p event_info is the item.
 */
EOAPI void  elm_wdg_item_tooltip_content_cb_set(Elm_Tooltip_Item_Content_Cb func, const void *data, Evas_Smart_Cb del_cb);

/**
 * @brief Register object item as an accessible object.
 * @since 1.8
 *
 * @ingroup General
 * 
 */
EOAPI Evas_Object * elm_wdg_item_access_register(void);

/**
 * @brief Unregister accessible object of the object item.
 * @since 1.8
 *
 * @ingroup General
 * 
 */
EOAPI void  elm_wdg_item_access_unregister(void);

/**
 * @brief Unset highlight order
 * @since 1.8
 *
 * @ingroup General
 * 
 */
EOAPI void  elm_wdg_item_access_order_unset(void);

#ifdef ELM_WIDGET_ITEM_PROTECTED
/**
 * No description supplied.
 */
EOAPI void  elm_wdg_item_disable(void);
#endif

#ifdef ELM_WIDGET_ITEM_PROTECTED
/**
 * No description supplied.
 */
EOAPI Eina_Bool  elm_wdg_item_del_pre(void);
#endif


#endif
