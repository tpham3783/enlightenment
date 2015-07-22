#ifndef _ELM_POPUP_EO_H_
#define _ELM_POPUP_EO_H_

#ifndef _ELM_POPUP_EO_CLASS_TYPE
#define _ELM_POPUP_EO_CLASS_TYPE

typedef Eo Elm_Popup;

#endif

#ifndef _ELM_POPUP_EO_TYPES
#define _ELM_POPUP_EO_TYPES

/**
 * @brief Possible orient values for popup.
 *
 * These values should be used in conjunction to elm_popup_orient_set() to set
 * the position in which the popup should appear(relative to its parent) and in
 * conjunction with elm_popup_orient_get() to know where the popup is
 * appearing.
 *
 * @ingroup Elm_Popup
 */
typedef enum
{
  ELM_POPUP_ORIENT_TOP = 0, /** Popup should appear in the top of parent,
                             * default. */
  ELM_POPUP_ORIENT_CENTER, /** Popup should appear in the center of parent. */
  ELM_POPUP_ORIENT_BOTTOM, /** Popup should appear in the bottom of parent. */
  ELM_POPUP_ORIENT_LEFT, /** Popup should appear in the left of parent. */
  ELM_POPUP_ORIENT_RIGHT, /** Popup should appear in the right of parent. */
  ELM_POPUP_ORIENT_TOP_LEFT, /** Popup should appear in the top left of parent.
                              */
  ELM_POPUP_ORIENT_TOP_RIGHT, /** Popup should appear in the top right of
                               * parent. */
  ELM_POPUP_ORIENT_BOTTOM_LEFT, /** Popup should appear in the bottom left of
                                 * parent. */
  ELM_POPUP_ORIENT_BOTTOM_RIGHT, /** Notify should appear in the bottom right
                                  * of parent. */
  ELM_POPUP_ORIENT_LAST /** Sentinel value, don't use. */
} Elm_Popup_Orient;


#endif
#define ELM_POPUP_CLASS elm_popup_class_get()

EAPI const Eo_Class *elm_popup_class_get(void) EINA_CONST;

/**
 * @brief Set the alignment of the popup object
 * Sets the alignment in which the popup will appear in its parent.
 *
 * @see elm_popup_align_get()
 *
 * @since 1.9
 * @ingroup Popup
 *
 * @param[in] horizontal The horizontal alignment of the popup
 * @param[in] vertical The vertical alignment of the popup
 */
EOAPI void  elm_obj_popup_align_set(double horizontal, double vertical);

/**
 * @brief Get the alignment of the popup object
 * @see elm_popup_align_set()
 *
 * @since 1.9
 * @ingroup Popup
 *
 * @param[out] horizontal The horizontal alignment of the popup
 * @param[out] vertical The vertical alignment of the popup
 */
EOAPI void  elm_obj_popup_align_get(double *horizontal, double *vertical);

/**
 * @brief Sets whether events should be passed to by a click outside.
 *
 * Enabling allow event will remove the Blocked event area and events will
 * pass to the lower layer objects otherwise they are blocked.
 *
 * @ingroup Popup
 * @see elm_popup_allow_events_get()
 * @note The default value is EINA_FALSE.
 *
 * @param[in] allow @c EINA_TRUE Events are passed to lower objects, else not
 */
EOAPI void  elm_obj_popup_allow_events_set(Eina_Bool allow);

/**
 * @brief Returns value indicating whether allow event is enabled or not
 *
 * @return @c EINA_FALSE if Blocked event area is present else @c EINA_TRUE
 *
 * @ingroup Popup
 * @see elm_popup_allow_events_set()
 * @note By default the Blocked event area is present
 */
EOAPI Eina_Bool  elm_obj_popup_allow_events_get(void);

/**
 * @brief Sets the wrapping type of content text packed in content
 * area of popup object.
 *
 * @ingroup Popup
 * @see elm_popup_content_text_wrap_type_get()
 *
 * @param[in] wrap wrapping type of type Elm_Wrap_Type
 */
EOAPI void  elm_obj_popup_content_text_wrap_type_set(Elm_Wrap_Type wrap);

/**
 * @brief Returns the wrapping type of content text packed in content area of
 * popup object.
 *
 * @return wrap type of the content text
 *
 * @ingroup Popup
 * @see elm_popup_content_text_wrap_type_set
 */
EOAPI Elm_Wrap_Type  elm_obj_popup_content_text_wrap_type_get(void);

/**
 * @brief Sets the orientation of the popup in the parent region
 *
 * Sets the position in which popup will appear in its parent. By default,
 * #ELM_POPUP_ORIENT_CENTER is set.
 *
 * @ingroup Popup
 * @see @ref Elm_Popup_Orient for possible values.
 *
 * @param[in] orient the orientation of the popup
 */
EOAPI void  elm_obj_popup_orient_set(Elm_Popup_Orient orient);

/**
 * @brief Returns the orientation of Popup
 *
 * @return the orientation of the popup
 *
 * @ingroup Popup
 * @see elm_popup_orient_set()
 * @see Elm_Popup_Orient
 */
EOAPI Elm_Popup_Orient  elm_obj_popup_orient_get(void);

/**
 * @brief Sets a timeout to hide popup automatically
 *
 * This function sets a timeout and starts the timer controlling when the
 * popup is hidden. Since calling evas_object_show() on a popup restarts
 * the timer controlling when it is hidden, setting this before the
 * popup is shown will in effect mean starting the timer when the popup is
 * shown. Smart signal "timeout" is called afterwards which can be handled
 * if needed.
 *
 * @note Set a value <= 0.0 to disable a running timer.
 *
 * @note If the value > 0.0 and the popup is previously visible, the
 * timer will be started with this value, canceling any running timer.
 * @ingroup Popup
 *
 * @param[in] timeout The timeout in seconds
 */
EOAPI void  elm_obj_popup_timeout_set(double timeout);

/**
 * @brief Returns the timeout value set to the popup (in seconds)
 *
 * @return the timeout value
 *
 * @ingroup Popup
 * @see elm_popup_timeout_set()
 */
EOAPI double  elm_obj_popup_timeout_get(void);

/**
 * @brief Add a new item to a Popup object
 *
 * Both an item list and a content could not be set at the same time!
 * once you add an item, the previous content will be removed.
 *
 * @return A handle to the item added or @c NULL, on errors
 *
 * @ingroup Popup
 * @warning When the first item is appended to popup object, any previous content
 * of the content area is deleted. At a time, only one of content, content-text
 * and item(s) can be there in a popup content area.
 * 
 *
 * @param[in] label The Label of the new item
 * @param[in] icon Icon to be set on new item
 * @param[in] func Convenience function called when item selected
 * @param[in] data Data passed to @p func above
 */
EOAPI Elm_Object_Item * elm_obj_popup_item_append(const char *label, Evas_Object *icon, Evas_Smart_Cb func, const void *data);

EOAPI extern const Eo_Event_Description _ELM_POPUP_EVENT_BLOCK_CLICKED;
EOAPI extern const Eo_Event_Description _ELM_POPUP_EVENT_TIMEOUT;
EOAPI extern const Eo_Event_Description _ELM_POPUP_EVENT_ITEM_FOCUSED;
EOAPI extern const Eo_Event_Description _ELM_POPUP_EVENT_ITEM_UNFOCUSED;
EOAPI extern const Eo_Event_Description _ELM_POPUP_EVENT_LANGUAGE_CHANGED;
EOAPI extern const Eo_Event_Description _ELM_POPUP_EVENT_ACCESS_CHANGED;

/**
 * No description
 */
#define ELM_POPUP_EVENT_BLOCK_CLICKED (&(_ELM_POPUP_EVENT_BLOCK_CLICKED))

/**
 * No description
 */
#define ELM_POPUP_EVENT_TIMEOUT (&(_ELM_POPUP_EVENT_TIMEOUT))

/**
 * No description
 */
#define ELM_POPUP_EVENT_ITEM_FOCUSED (&(_ELM_POPUP_EVENT_ITEM_FOCUSED))

/**
 * No description
 */
#define ELM_POPUP_EVENT_ITEM_UNFOCUSED (&(_ELM_POPUP_EVENT_ITEM_UNFOCUSED))

/**
 * No description
 */
#define ELM_POPUP_EVENT_LANGUAGE_CHANGED (&(_ELM_POPUP_EVENT_LANGUAGE_CHANGED))

/**
 * No description
 */
#define ELM_POPUP_EVENT_ACCESS_CHANGED (&(_ELM_POPUP_EVENT_ACCESS_CHANGED))

#endif
