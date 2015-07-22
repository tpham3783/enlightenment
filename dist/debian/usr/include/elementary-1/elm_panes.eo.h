#ifndef _ELM_PANES_EO_H_
#define _ELM_PANES_EO_H_

#ifndef _ELM_PANES_EO_CLASS_TYPE
#define _ELM_PANES_EO_CLASS_TYPE

typedef Eo Elm_Panes;

#endif

#ifndef _ELM_PANES_EO_TYPES
#define _ELM_PANES_EO_TYPES


#endif
#define ELM_PANES_CLASS elm_panes_class_get()

EAPI const Eo_Class *elm_panes_class_get(void) EINA_CONST;

/**
 * Set the size proportion of panes widget's left side.
 *
 * By default it's homogeneous, i.e., both sides have the same size.
 *
 * If something different is required, it can be set with this function.
 * For example, if the left content should be displayed over
 * 75% of the panes size, @p size should be passed as @c 0.75.
 * This way, right content will be resized to 25% of panes size.
 *
 * If displayed vertically, left content is displayed at top, and
 * right content at bottom.
 *
 * @note This proportion will change when user drags the panes bar.
 *
 * @see elm_panes_content_left_size_get()
 *
 * @ingroup Panes
 *
 * @param[in] size Value between 0.0 and 1.0 representing size proportion
of left side.
 */
EOAPI void  elm_obj_panes_content_left_size_set(double size);

/**
 * Get the size proportion of panes widget's left side.
 *
 * @return float value between 0.0 and 1.0 representing size proportion
 * of left side.
 *
 * @see elm_panes_content_left_size_set() for more details.
 *
 * @ingroup Panes
 */
EOAPI double  elm_obj_panes_content_left_size_get(void);

/**
 * Set how to split and dispose each content.
 *
 * Use this function to change how your panes is to be disposed:
 * vertically or horizontally.
 * Horizontal panes have "top" and "bottom" contents, vertical panes have
 * "left" and "right" contents.
 *
 * By default panes is in a vertical mode.
 *
 * @see elm_panes_horizontal_get()
 *
 * @ingroup Panes
 *
 * @param[in] horizontal Use @c EINA_TRUE to make @p obj to split panes
horizontally ("top" and "bottom" contents). @c EINA_FALSE to make it
vertically ("left" and "right" contents)
 */
EOAPI void  elm_obj_panes_horizontal_set(Eina_Bool horizontal);

/**
 * Get the split direction of a given panes widget.
 *
 * @return @c EINA_TRUE, if @p obj is set to be @b horizontal,
 * @c EINA_FALSE if it's @b vertical (and on errors).
 *
 * @see elm_panes_horizontal_set() for more details.
 *
 * @ingroup Panes
 */
EOAPI Eina_Bool  elm_obj_panes_horizontal_get(void);

/**
 * Set whether the left and right panes can be resized by user interaction.
 *
 * By default panes' contents are resizable by user interaction.
 *
 * @see elm_panes_fixed_get()
 * @see elm_panes_content_left_size_set()
 * @see elm_panes_content_right_size_set()
 *
 * @ingroup Panes
 *
 * @param[in] fixed Use @c EINA_TRUE to fix the left and right panes sizes and make
them not to be resized by user interaction. Use @c EINA_FALSE to make them
resizable.
 */
EOAPI void  elm_obj_panes_fixed_set(Eina_Bool fixed);

/**
 * Get the resize mode for the panes of a given panes widget.
 *
 * @return @c EINA_TRUE, if @p obj is set to be resizable by user interaction.
 *
 * @see elm_panes_fixed_set() for more details.
 * @see elm_panes_content_left_size_get()
 * @see elm_panes_content_right_size_get()
 *
 * @ingroup Panes
 */
EOAPI Eina_Bool  elm_obj_panes_fixed_get(void);

/**
 * Set the size proportion of panes widget's right side.
 *
 * By default it's homogeneous, i.e., both sides have the same size.
 *
 * If something different is required, it can be set with this function.
 * For example, if the right content should be displayed over
 * 75% of the panes size, @p size should be passed as @c 0.75.
 * This way, left content will be resized to 25% of panes size.
 *
 * If displayed vertically, left content is displayed at top, and
 * right content at bottom.
 *
 * @note This proportion will change when user drags the panes bar.
 *
 * @see elm_panes_content_right_size_get()
 *
 * @ingroup Panes
 *
 * @param[in] size Value between 0.0 and 1.0 representing size proportion
of right side.
 */
EOAPI void  elm_obj_panes_content_right_size_set(double size);

/**
 * Get the size proportion of panes widget's right side.
 *
 * @return float value between 0.0 and 1.0 representing size proportion
 * of right side.
 *
 * @see elm_panes_content_right_size_set() for more details.
 *
 * @ingroup Panes
 */
EOAPI double  elm_obj_panes_content_right_size_get(void);

/**
 * Set the relative minimum size of panes widget's left side.
 *
 * @param obj The panes object.
 * @param size double value between 0.0 and 1.0 representing size
 * proportion of minimum size of left side.
 *
 * @note If displayed vertically, left content is displayed at top.
 *
 *
 * @see elm_panes_content_left_min_size_relative_get()
 *
 * @ingroup Panes
 *
 * @param[in] size value between 0.0 and 1.0 representing size proportion
of minimum size of left side.
 */
EOAPI void  elm_obj_panes_content_left_min_relative_size_set(double size);

/**
 * Get the relative minimum size of panes widget's left side.
 *
 * @param obj The panes object.
 * @return double value between 0.0 and 1.0 representing size proportion
 * of minimum size of left side.
 *
 * @see elm_panes_content_left_min_relative_size_set() for more details.
 *
 * @ingroup Panes
 */
EOAPI double  elm_obj_panes_content_left_min_relative_size_get(void);

/**
 * Set the relative minimum size of panes widget's right side.
 *
 * @param obj The panes object.
 * @param size double value between 0.0 and 1.0 representing size proportion
 * of minimum size of right side.
 *
 * @note If displayed vertically, right content is displayed at bottom.
 *
 * @see elm_panes_content_right_min_relative_size_get()
 *
 * @ingroup Panes
 *
 * @param[in] size value between 0.0 and 1.0 representing size proportion
of minimum size of right side.
 */
EOAPI void  elm_obj_panes_content_right_min_relative_size_set(double size);

/**
 * Get the relative minimum size of panes widget's right side.
 *
 * @param obj The panes object.
 * @return double value between 0.0 and 1.0 representing size proportion
 * of minimum size of right side.
 *
 * @see elm_panes_content_right_min_size_set() for more details.
 *
 * @ingroup Panes
 */
EOAPI double  elm_obj_panes_content_right_min_relative_size_get(void);

/**
 * Set the absolute minimum size of panes widget's left side.
 *
 * @param obj The panes object.
 * @param size int value representing minimum size of left side in pixels.
 *
 * @note If displayed vertically, left content is displayed at top.
 *
 * @see elm_panes_content_left_min_size_get()
 *
 * @ingroup Panes
 *
 * @param[in] size value representing minimum size of left side
in pixels.
 */
EOAPI void  elm_obj_panes_content_left_min_size_set(Evas_Coord size);

/**
 * Get the absolute minimum size of panes widget's left side.
 *
 * @param obj The panes object.
 * @retur int value representing minimum size of left side in pixels.
 *
 * @see elm_panes_content_left_min_size_set() for more details.
 *
 * @ingroup Panes
 */
EOAPI Evas_Coord  elm_obj_panes_content_left_min_size_get(void);

/**
 * Set the absolute minimum size of panes widget's right side.
 *
 * @param obj The panes object.
 * @param size int value representing minimum size of right side in pixels.
 *
 * @note If displayed vertically, right content is displayed at bottom.
 *
 * @see elm_panes_content_right_min_size_get()
 *
 * @ingroup Panes
 *
 * @param[in] size value representing minimum size of right side
in pixels.
 */
EOAPI void  elm_obj_panes_content_right_min_size_set(Evas_Coord size);

/**
 * Get the absolute minimum size of panes widget's right side.
 *
 * @param obj The panes object.
 * @retur int value representing minimum size of right side in pixels.
 *
 * @see elm_panes_content_right_min_size_set() for more details.
 *
 * @ingroup Panes
 */
EOAPI Evas_Coord  elm_obj_panes_content_right_min_size_get(void);

EOAPI extern const Eo_Event_Description _ELM_PANES_EVENT_PRESS;
EOAPI extern const Eo_Event_Description _ELM_PANES_EVENT_UNPRESS;

/**
 * No description
 */
#define ELM_PANES_EVENT_PRESS (&(_ELM_PANES_EVENT_PRESS))

/**
 * No description
 */
#define ELM_PANES_EVENT_UNPRESS (&(_ELM_PANES_EVENT_UNPRESS))

#endif
