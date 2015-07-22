#ifndef _EVAS_TYPES_EOT_H_
#define _EVAS_TYPES_EOT_H_

#ifndef _EVAS_TYPES_EOT_TYPES
#define _EVAS_TYPES_EOT_TYPES

/** An Evas modifier mask type
 *
 * @ingroup Evas
 */
typedef unsigned long long Evas_Modifier_Mask;

/** A type for coordinates
 *
 * @ingroup Evas
 */
typedef int Evas_Coord;

/** Aspect types/policies for scaling size hints, used for
 * evas_object_size_hint_aspect_set()
 *
 * @ingroup Evas
 */
typedef enum
{
  EVAS_ASPECT_CONTROL_NONE = 0, /** Preference on scaling unset */
  EVAS_ASPECT_CONTROL_NEITHER = 1, /** Same effect as unset preference on
                                    * scaling */
  EVAS_ASPECT_CONTROL_HORIZONTAL = 2, /** Use all horizontal container space to
                                       * place an object, using the given
                                       * aspect */
  EVAS_ASPECT_CONTROL_VERTICAL = 3, /** Use all vertical container space to
                                     * place an object, using the given aspect
                                     */
  EVAS_ASPECT_CONTROL_BOTH = 4 /** Use all horizontal and vertical container
                                * spaces to place an object (never growing it
                                * out of those bounds), using the given aspect
                                */
} Evas_Aspect_Control;

/** How the object should be rendered to output.
 *
 * @ingroup Evas
 */
typedef enum
{
  EVAS_RENDER_BLEND = 0, /** default op: d = d*(1-sa) + s */
  EVAS_RENDER_BLEND_REL = 1, /** d = d*(1 - sa) + s*da */
  EVAS_RENDER_COPY = 2, /** d = s */
  EVAS_RENDER_COPY_REL = 3, /** d = s*da */
  EVAS_RENDER_ADD = 4, /** d = d + s */
  EVAS_RENDER_ADD_REL = 5, /** d = d + s*da */
  EVAS_RENDER_SUB = 6, /** d = d - s */
  EVAS_RENDER_SUB_REL = 7, /** d = d - s*da */
  EVAS_RENDER_TINT = 8, /** d = d*s + d*(1 - sa) + s*(1 - da) */
  EVAS_RENDER_TINT_REL = 9, /** d = d*(1 - sa + s) */
  EVAS_RENDER_MASK = 10, /** d = d*sa */
  EVAS_RENDER_MUL = 11 /** d = d*s */
} Evas_Render_Op;

/**
 * @brief How the mouse pointer should be handled by Evas.
 *
 * In the mode #EVAS_OBJECT_POINTER_MODE_AUTOGRAB, when a mouse button is
 * pressed down over an object and held, with the mouse pointer being moved
 * outside of it, the pointer still behaves as being bound to that object,
 * albeit out of its drawing region. When the button is released, the event
 * will be fed to the object, that may check if the final position is over it
 * or not and do something about it.
 *
 * In the mode #EVAS_OBJECT_POINTER_MODE_NOGRAB, the pointer will always be
 * bound to the object right below it.
 *
 * @ingroup Evas
 */
typedef enum
{
  EVAS_OBJECT_POINTER_MODE_AUTOGRAB = 0, /** default, X11-like */
  EVAS_OBJECT_POINTER_MODE_NOGRAB, /** pointer always bound to the object right
                                    * below it */
  EVAS_OBJECT_POINTER_MODE_NOGRAB_NO_REPEAT_UPDOWN /** useful on object with
                                                    * "repeat events" enabled,
                                                    * where mouse/touch up and
                                                    * down events WONT be
                                                    * repeated to objects and
                                                    * these objects wont be
                                                    * auto-grabbed.
                                                    *
                                                    * @since 1.2 */
} Evas_Object_Pointer_Mode;

typedef enum
{
  EVAS_DISPLAY_MODE_NONE = 0, /** Default mode */
  EVAS_DISPLAY_MODE_COMPRESS = 1, /** Use this mode when you want to give
                                   * compress display mode hint to an object */
  EVAS_DISPLAY_MODE_EXPAND = 2, /** Use this mode when you want to give expand
                                 * display mode hint to an object */
  EVAS_DISPLAY_MODE_DONT_CHANGE = 3 /** Use this mode when an object should not
                                     * change its display mode */
} Evas_Display_Mode;

typedef enum
{
  EVAS_BIDI_DIRECTION_NATURAL = 0,
  EVAS_BIDI_DIRECTION_NEUTRAL = 0,
  EVAS_BIDI_DIRECTION_LTR,
  EVAS_BIDI_DIRECTION_RTL
} Evas_BiDi_Direction;

/** Types of styles to be applied on text objects. The
 * EVAS_TEXT_STYLE_SHADOW_DIRECTION_* ones are to be ORed together with others
 * imposing shadow, to change shadow's direction
 *
 * @ingroup Evas
 */
typedef enum
{
  EVAS_TEXT_STYLE_PLAIN = 0, /** plain, standard text */
  EVAS_TEXT_STYLE_SHADOW, /** text with shadow underneath */
  EVAS_TEXT_STYLE_OUTLINE, /** text with an outline */
  EVAS_TEXT_STYLE_SOFT_OUTLINE, /** text with a soft outline */
  EVAS_TEXT_STYLE_GLOW, /** text with a glow effect */
  EVAS_TEXT_STYLE_OUTLINE_SHADOW, /** text with both outline and shadow effects
                                   */
  EVAS_TEXT_STYLE_FAR_SHADOW, /** text with (far) shadow underneath */
  EVAS_TEXT_STYLE_OUTLINE_SOFT_SHADOW, /** text with outline and soft shadow
                                        * effects combined */
  EVAS_TEXT_STYLE_SOFT_SHADOW, /** text with (soft) shadow underneath */
  EVAS_TEXT_STYLE_FAR_SOFT_SHADOW, /** text with (far soft) shadow underneath
                                    */
  EVAS_TEXT_STYLE_SHADOW_DIRECTION_BOTTOM_RIGHT = 0 /* 0 << 4 */, /** shadow growing to bottom right */
  EVAS_TEXT_STYLE_SHADOW_DIRECTION_BOTTOM = 16 /* 1 << 4 */, /** shadow growing to the bottom */
  EVAS_TEXT_STYLE_SHADOW_DIRECTION_BOTTOM_LEFT = 32 /* 2 << 4 */, /** shadow growing to bottom left */
  EVAS_TEXT_STYLE_SHADOW_DIRECTION_LEFT = 48 /* 3 << 4 */, /** shadow growing
                                                            * to the left */
  EVAS_TEXT_STYLE_SHADOW_DIRECTION_TOP_LEFT = 64 /* 4 << 4 */, /** shadow growing to top left */
  EVAS_TEXT_STYLE_SHADOW_DIRECTION_TOP = 80 /* 5 << 4 */, /** shadow growing to
                                                           * the top */
  EVAS_TEXT_STYLE_SHADOW_DIRECTION_TOP_RIGHT = 96 /* 6 << 4 */, /** shadow growing to top right */
  EVAS_TEXT_STYLE_SHADOW_DIRECTION_RIGHT = 112 /* 7 << 4 */ /** shadow growing to the right */
} Evas_Text_Style_Type;

/** A type for font size
 *
 * @ingroup Evas_Font
 */
typedef int Evas_Font_Size;

/** Flags for Font Hinting
 *
 * @ingroup Evas_Font
 */
typedef enum
{
  EVAS_FONT_HINTING_NONE = 0, /** No font hinting */
  EVAS_FONT_HINTING_AUTO, /** Automatic font hinting */
  EVAS_FONT_HINTING_BYTECODE /** Bytecode font hinting */
} Evas_Font_Hinting_Flags;

/**
 * @brief An opaque handle to map points
 *
 * See @ref evas_map_new, @ref evas_map_free, @ref evas_map_dup.
 *
 * @ingroup Evas
 */
typedef struct _Evas_Map Evas_Map;

/** Flags for Mouse Button events
 *
 * @ingroup Evas
 */
typedef enum
{
  EVAS_BUTTON_NONE = 0, /** No extra mouse button data */
  EVAS_BUTTON_DOUBLE_CLICK = 1 /* 1 << 0 */, /** This mouse button press was
                                              * the 2nd press of a double click
                                              */
  EVAS_BUTTON_TRIPLE_CLICK = 2 /* 1 << 1 */ /** This mouse button press was the
                                             * 3rd press of a triple click */
} Evas_Button_Flags;

/** Flags for Events
 *
 * @ingroup Evas
 */
typedef enum
{
  EVAS_EVENT_FLAG_NONE = 0, /** No fancy flags set */
  EVAS_EVENT_FLAG_ON_HOLD = 1 /* 1 << 0 */, /** This event is being delivered
                                             * but should be put "on hold"
                                             * until the on hold flag is unset.
                                             * The event should be used for
                                             * informational purposes and maybe
                                             * some indications visually, but
                                             * not actually perform anything */
  EVAS_EVENT_FLAG_ON_SCROLL = 2 /* 1 << 1 */ /** This event flag indicates the
                                              * event occurs while scrolling;
                                              * for example, DOWN event occurs
                                              * during scrolling; the event
                                              * should be used for
                                              * informational purposes and
                                              * maybe some indications
                                              * visually, but not actually
                                              * perform anything */
} Evas_Event_Flags;

/** State of Evas_Coord_Touch_Point
 *
 * @ingroup Evas
 */
typedef enum
{
  EVAS_TOUCH_POINT_DOWN = 0, /** Touch point is pressed down */
  EVAS_TOUCH_POINT_UP, /** Touch point is released */
  EVAS_TOUCH_POINT_MOVE, /** Touch point is moved */
  EVAS_TOUCH_POINT_STILL, /** Touch point is not moved after pressed */
  EVAS_TOUCH_POINT_CANCEL /** Touch point is cancelled */
} Evas_Touch_Point_State;

/** Identifier of callbacks to be set for Evas canvases or Evas objects.
 *
 * @ingroup Evas
 */
typedef enum
{
  EVAS_CALLBACK_MOUSE_IN = 0, /** Mouse In Event */
  EVAS_CALLBACK_MOUSE_OUT, /** Mouse Out Event */
  EVAS_CALLBACK_MOUSE_DOWN, /** Mouse Button Down Event */
  EVAS_CALLBACK_MOUSE_UP, /** Mouse Button Up Event */
  EVAS_CALLBACK_MOUSE_MOVE, /** Mouse Move Event */
  EVAS_CALLBACK_MOUSE_WHEEL, /** Mouse Wheel Event */
  EVAS_CALLBACK_MULTI_DOWN, /** Multi-touch Down Event */
  EVAS_CALLBACK_MULTI_UP, /** Multi-touch Up Event */
  EVAS_CALLBACK_MULTI_MOVE, /** Multi-touch Move Event */
  EVAS_CALLBACK_FREE, /** Object Being Freed (Called after Del) */
  EVAS_CALLBACK_KEY_DOWN, /** Key Press Event */
  EVAS_CALLBACK_KEY_UP, /** Key Release Event */
  EVAS_CALLBACK_FOCUS_IN, /** Focus In Event */
  EVAS_CALLBACK_FOCUS_OUT, /** Focus Out Event */
  EVAS_CALLBACK_SHOW, /** Show Event */
  EVAS_CALLBACK_HIDE, /** Hide Event */
  EVAS_CALLBACK_MOVE, /** Move Event */
  EVAS_CALLBACK_RESIZE, /** Resize Event */
  EVAS_CALLBACK_RESTACK, /** Restack Event */
  EVAS_CALLBACK_DEL, /** Object Being Deleted (called before Free) */
  EVAS_CALLBACK_HOLD, /** Events go on/off hold */
  EVAS_CALLBACK_CHANGED_SIZE_HINTS, /** Size hints changed event */
  EVAS_CALLBACK_IMAGE_PRELOADED, /** Image has been preloaded */
  EVAS_CALLBACK_CANVAS_FOCUS_IN, /** Canvas got focus as a whole */
  EVAS_CALLBACK_CANVAS_FOCUS_OUT, /** Canvas lost focus as a whole */
  EVAS_CALLBACK_RENDER_FLUSH_PRE, /** Called just before rendering is updated
                                   * on the canvas target */
  EVAS_CALLBACK_RENDER_FLUSH_POST, /** Called just after rendering is updated
                                    * on the canvas target */
  EVAS_CALLBACK_CANVAS_OBJECT_FOCUS_IN, /** Canvas object got focus */
  EVAS_CALLBACK_CANVAS_OBJECT_FOCUS_OUT, /** Canvas object lost focus */
  EVAS_CALLBACK_IMAGE_UNLOADED, /** Image data has been unloaded (by some
                                 * mechanism in Evas that throw out original
                                 * image data) */
  EVAS_CALLBACK_RENDER_PRE, /** Called just before rendering starts on the
                             * canvas target
                             *
                             * @since 1.2 */
  EVAS_CALLBACK_RENDER_POST, /** Called just after rendering stops on the
                              * canvas target
                              *
                              * @since 1.2 */
  EVAS_CALLBACK_IMAGE_RESIZE, /** Image size is changed
                               *
                               * @since 1.8 */
  EVAS_CALLBACK_DEVICE_CHANGED, /** Devices added, removed or changed on canvas
                                 *
                                 * @since 1.8 */
  EVAS_CALLBACK_AXIS_UPDATE, /** Input device changed value on some axis
                              *
                              * @since 1.13 */
  EVAS_CALLBACK_CANVAS_VIEWPORT_RESIZE, /** Canvas viewport resized
                                         *
                                         * @since 1.15 */
  EVAS_CALLBACK_LAST /** kept as last element/sentinel -- not really an event
                      */
} Evas_Callback_Type;

/** An opaque type containing information on which modifier keys are registered
 * in an Evas canvas
 *
 * @ingroup Evas
 */
typedef struct _Evas_Modifier Evas_Modifier;

/** An opaque type containing information on which lock keys are registered in
 * an Evas canvas
 *
 * @ingroup Evas
 */
typedef struct _Evas_Lock Evas_Lock;

/** A generic Evas Engine information structure
 *
 * @ingroup Evas
 */
typedef struct _Evas_Engine_Info Evas_Engine_Info;

/** Details for a single device axis state
 *
 * @since 1.13
 *
 * @ingroup Evas
 */
typedef struct _Evas_Axis Evas_Axis;


#endif

#endif
