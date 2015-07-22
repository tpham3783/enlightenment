#ifndef _ELM_HOVER_EO_LEGACY_H_
#define _ELM_HOVER_EO_LEGACY_H_

#ifndef _ELM_HOVER_EO_CLASS_TYPE
#define _ELM_HOVER_EO_CLASS_TYPE

typedef Eo Elm_Hover;

#endif

#ifndef _ELM_HOVER_EO_TYPES
#define _ELM_HOVER_EO_TYPES

/** The orientation axis for the hover object
 *
 * @ingroup Elm_Hover
 */
typedef enum
{
  ELM_HOVER_AXIS_NONE = 0, /** ELM_HOVER_AXIS_NONE -- no preferred orientation.
                            */
  ELM_HOVER_AXIS_HORIZONTAL, /** ELM_HOVER_AXIS_HORIZONTAL -- horizontal. */
  ELM_HOVER_AXIS_VERTICAL, /** ELM_HOVER_AXIS_VERTICAL -- vertical. */
  ELM_HOVER_AXIS_BOTH /** ELM_HOVER_AXIS_BOTH -- both. */
} Elm_Hover_Axis;


#endif

/**
 * @brief Sets the target object for the hover.
 *
 * This function will cause the hover to be centered on the target object.
 *
 * @ingroup Hover
 *
 * @param[in] target The object to center the hover onto.
 */
EAPI void elm_hover_target_set(Elm_Hover *obj, Evas_Object *target);

/**
 * @brief Get the target object for the hover.
 *
 * @return The target object for the hover.
 *
 * @see elm_hover_target_set()
 *
 * @ingroup Hover
 */
EAPI Evas_Object *elm_hover_target_get(const Elm_Hover *obj);

/**
 * @brief Returns the best swallow location for content in the hover.
 *
 * @return The edje location to place content into the hover or @c
 * NULL, on errors.
 *
 * Best is defined here as the location at which there is the most available
 * space.
 *
 * @p pref_axis may be one of
 * - #ELM_HOVER_AXIS_NONE -- no preferred orientation
 * - #ELM_HOVER_AXIS_HORIZONTAL -- horizontal
 * - #ELM_HOVER_AXIS_VERTICAL -- vertical
 * - #ELM_HOVER_AXIS_BOTH -- both
 *
 * If #ELM_HOVER_AXIS_HORIZONTAL is chosen the returned position will
 * necessarily be along the horizontal axis("left" or "right"). If
 * #ELM_HOVER_AXIS_VERTICAL is chosen the returned position will necessarily
 * be along the vertical axis("top" or "bottom"). Choosing
 * #ELM_HOVER_AXIS_BOTH or #ELM_HOVER_AXIS_NONE has the same effect and the
 * returned position may be in either axis.
 *
 * @see elm_object_part_content_set()
 *
 * @ingroup Hover
 * 
 *
 * @param[in] pref_axis The preferred orientation axis for the hover object to use
 */
EAPI const char *elm_hover_best_content_location_get(const Elm_Hover *obj, Elm_Hover_Axis pref_axis);

/**
 * @brief Dismiss a hover object
 *
 * @ingroup Hover
 * 
 */
EAPI void elm_hover_dismiss(Elm_Hover *obj);

#endif
