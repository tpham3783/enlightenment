#ifndef _ELM_FLIP_EO_LEGACY_H_
#define _ELM_FLIP_EO_LEGACY_H_

#ifndef _ELM_FLIP_EO_CLASS_TYPE
#define _ELM_FLIP_EO_CLASS_TYPE

typedef Eo Elm_Flip;

#endif

#ifndef _ELM_FLIP_EO_TYPES
#define _ELM_FLIP_EO_TYPES

/** 
 *
 * @ingroup Elm_Flip
 */
typedef enum
{
  ELM_FLIP_ROTATE_Y_CENTER_AXIS = 0,
  ELM_FLIP_ROTATE_X_CENTER_AXIS,
  ELM_FLIP_ROTATE_XZ_CENTER_AXIS,
  ELM_FLIP_ROTATE_YZ_CENTER_AXIS,
  ELM_FLIP_CUBE_LEFT,
  ELM_FLIP_CUBE_RIGHT,
  ELM_FLIP_CUBE_UP,
  ELM_FLIP_CUBE_DOWN,
  ELM_FLIP_PAGE_LEFT,
  ELM_FLIP_PAGE_RIGHT,
  ELM_FLIP_PAGE_UP,
  ELM_FLIP_PAGE_DOWN
} Elm_Flip_Mode;

/** 
 *
 * @ingroup Elm_Flip
 */
typedef enum
{
  ELM_FLIP_INTERACTION_NONE = 0,
  ELM_FLIP_INTERACTION_ROTATE,
  ELM_FLIP_INTERACTION_CUBE,
  ELM_FLIP_INTERACTION_PAGE
} Elm_Flip_Interaction;

typedef enum
{
  ELM_FLIP_DIRECTION_UP = 0, /** Allows interaction with the top of the widget
                              */
  ELM_FLIP_DIRECTION_DOWN, /** Allows interaction with the bottom of the widget
                            */
  ELM_FLIP_DIRECTION_LEFT, /** Allows interaction with the left portion of the
                            * widget */
  ELM_FLIP_DIRECTION_RIGHT /** Allows interaction with the right portion of the
                            * widget */
} Elm_Flip_Direction;


#endif

/**
 * @brief Set the interactive flip mode
 *
 * This sets if the flip should be interactive (allow user to click and
 * drag a side of the flip to reveal the back page and cause it to flip).
 * By default a flip is not interactive. You may also need to set which
 * sides of the flip are "active" for flipping and how much space they use
 * (a minimum of a finger size) with elm_flip_interaction_direction_enabled_set()
 * and elm_flip_interaction_direction_hitsize_set()
 *
 * The four available mode of interaction are:
 * @li #ELM_FLIP_INTERACTION_NONE - No interaction is allowed
 * @li #ELM_FLIP_INTERACTION_ROTATE - Interaction will cause rotate animation
 * @li #ELM_FLIP_INTERACTION_CUBE - Interaction will cause cube animation
 * @li #ELM_FLIP_INTERACTION_PAGE - Interaction will cause page animation
 *
 * @note #ELM_FLIP_INTERACTION_ROTATE won't cause
 * #ELM_FLIP_ROTATE_XZ_CENTER_AXIS or #ELM_FLIP_ROTATE_YZ_CENTER_AXIS to
 * happen, those can only be achieved with elm_flip_go();
 *
 * @ingroup Flip
 *
 * @param[in] mode The interactive flip mode to use
 */
EAPI void elm_flip_interaction_set(Elm_Flip *obj, Elm_Flip_Interaction mode);

/**
 * @brief Get the interactive flip mode
 *
 * @return The interactive flip mode
 *
 * Returns the interactive flip mode set by elm_flip_interaction_set()
 *
 * @ingroup Flip
 */
EAPI Elm_Flip_Interaction elm_flip_interaction_get(const Elm_Flip *obj);

/**
 * @brief Get flip front visibility state
 *
 * @return EINA_TRUE if front front is showing, EINA_FALSE if the back is
 * showing.
 *
 * @ingroup Flip
 */
EAPI Eina_Bool elm_flip_front_visible_get(const Elm_Flip *obj);

/**
 * @brief Set the amount of the flip that is sensitive to interactive flip
 *
 * Set the amount of the flip that is sensitive to interactive flip, with 0
 * representing no area in the flip and 1 representing the entire flip. There
 * is however a consideration to be made in that the area will never be
 * smaller than the finger size set (as set in your Elementary configuration),
 * and dragging must always start from the opposite half of the flip (eg. right
 * half of the flip when dragging to the left).
 *
 * Note that the @c dir parameter is not actually related to the direction of
 * the drag, it only refers to the area in the flip where interaction can
 * occur (top, bottom, left, right).
 *
 * Negative values of @c hitsize will disable this hit area.
 *
 * @see elm_flip_interaction_set()
 *
 * @ingroup Flip
 * 
 *
 * @param[in] dir The hit area to set
 * @param[in] hitsize The amount of that dimension (0.0 to 1.0) to use
 */
EAPI void elm_flip_interaction_direction_hitsize_set(Elm_Flip *obj, Elm_Flip_Direction dir, double hitsize);

/**
 * @brief Get the amount of the flip that is sensitive to interactive flip
 *
 * @return The size set for that direction
 *
 * Returns the amount of sensitive area set by
 * elm_flip_interaction_direction_hitsize_set().
 *
 * @ingroup Flip
 * 
 *
 * @param[in] dir The direction to check
 */
EAPI double elm_flip_interaction_direction_hitsize_get(Elm_Flip *obj, Elm_Flip_Direction dir);

/**
 * @brief Set which directions of the flip respond to interactive flip
 *
 * By default all directions are disabled, so you may want to enable the
 * desired directions for flipping if you need interactive flipping. You must
 * call this function once for each direction that should be enabled.
 *
 * You can also set the appropriate hit area size by calling
 * @c elm_flip_interaction_direction_hitsize_set(). By default, a minimum
 * hit area will be created on the opposite edge of the flip.
 *
 * @see elm_flip_interaction_set()
 *
 * @ingroup Flip
 * 
 *
 * @param[in] dir The direction to change
 * @param[in] enabled If that direction is enabled or not
 */
EAPI void elm_flip_interaction_direction_enabled_set(Elm_Flip *obj, Elm_Flip_Direction dir, Eina_Bool enabled);

/**
 * @brief Get the enabled state of that flip direction
 *
 * @return If that direction is enabled or not
 *
 * Get the enabled state set by elm_flip_interaction_direction_enabled_set()
 *
 * @see elm_flip_interaction_set()
 *
 * @ingroup Flip
 * 
 *
 * @param[in] dir The direction to check
 */
EAPI Eina_Bool elm_flip_interaction_direction_enabled_get(Elm_Flip *obj, Elm_Flip_Direction dir);

/**
 * @brief Runs the flip animation
 *
 * Flips the front and back contents using the @p mode animation. This
 * effectively hides the currently visible content and shows the hidden one.
 *
 * There a number of possible animations to use for the flipping:
 * @li #ELM_FLIP_ROTATE_X_CENTER_AXIS - Rotate the currently visible content
 * around a horizontal axis in the middle of its height, the other content
 * is shown as the other side of the flip.
 * @li #ELM_FLIP_ROTATE_Y_CENTER_AXIS - Rotate the currently visible content
 * around a vertical axis in the middle of its width, the other content is
 * shown as the other side of the flip.
 * @li #ELM_FLIP_ROTATE_XZ_CENTER_AXIS - Rotate the currently visible content
 * around a diagonal axis in the middle of its width, the other content is
 * shown as the other side of the flip.
 * @li #ELM_FLIP_ROTATE_YZ_CENTER_AXIS - Rotate the currently visible content
 * around a diagonal axis in the middle of its height, the other content is
 * shown as the other side of the flip.
 * @li #ELM_FLIP_CUBE_LEFT - Rotate the currently visible content to the left
 * as if the flip was a cube, the other content is show as the right face of
 * the cube.
 * @li #ELM_FLIP_CUBE_RIGHT - Rotate the currently visible content to the
 * right as if the flip was a cube, the other content is show as the left
 * face of the cube.
 * @li #ELM_FLIP_CUBE_UP - Rotate the currently visible content up as if the
 * flip was a cube, the other content is show as the bottom face of the cube.
 * @li #ELM_FLIP_CUBE_DOWN - Rotate the currently visible content down as if
 * the flip was a cube, the other content is show as the upper face of the
 * cube.
 * @li #ELM_FLIP_PAGE_LEFT - Move the currently visible content to the left as
 * if the flip was a book, the other content is shown as the page below that.
 * @li #ELM_FLIP_PAGE_RIGHT - Move the currently visible content to the right
 * as if the flip was a book, the other content is shown as the page below
 * that.
 * @li #ELM_FLIP_PAGE_UP - Move the currently visible content up as if the
 * flip was a book, the other content is shown as the page below that.
 * @li #ELM_FLIP_PAGE_DOWN - Move the currently visible content down as if the
 * flip was a book, the other content is shown as the page below that.
 *
 * @image html elm_flip.png
 * @image latex elm_flip.eps width=\textwidth
 *
 * @see elm_flip_go_to()
 *
 * @ingroup Flip
 * 
 *
 * @param[in] mode The mode type
 */
EAPI void elm_flip_go(Elm_Flip *obj, Elm_Flip_Mode mode);

/**
 * @brief Runs the flip animation to front or back.
 *
 * Flips the front and back contents using the @p mode animation. This
 * effectively hides the currently visible content and shows the hidden one.
 *
 * There a number of possible animations to use for the flipping:
 * @li #ELM_FLIP_ROTATE_X_CENTER_AXIS - Rotate the currently visible content
 * around a horizontal axis in the middle of its height, the other content
 * is shown as the other side of the flip.
 * @li #ELM_FLIP_ROTATE_Y_CENTER_AXIS - Rotate the currently visible content
 * around a vertical axis in the middle of its width, the other content is
 * shown as the other side of the flip.
 * @li #ELM_FLIP_ROTATE_XZ_CENTER_AXIS - Rotate the currently visible content
 * around a diagonal axis in the middle of its width, the other content is
 * shown as the other side of the flip.
 * @li #ELM_FLIP_ROTATE_YZ_CENTER_AXIS - Rotate the currently visible content
 * around a diagonal axis in the middle of its height, the other content is
 * shown as the other side of the flip.
 * @li #ELM_FLIP_CUBE_LEFT - Rotate the currently visible content to the left
 * as if the flip was a cube, the other content is show as the right face of
 * the cube.
 * @li #ELM_FLIP_CUBE_RIGHT - Rotate the currently visible content to the
 * right as if the flip was a cube, the other content is show as the left
 * face of the cube.
 * @li #ELM_FLIP_CUBE_UP - Rotate the currently visible content up as if the
 * flip was a cube, the other content is show as the bottom face of the cube.
 * @li #ELM_FLIP_CUBE_DOWN - Rotate the currently visible content down as if
 * the flip was a cube, the other content is show as the upper face of the
 * cube.
 * @li #ELM_FLIP_PAGE_LEFT - Move the currently visible content to the left as
 * if the flip was a book, the other content is shown as the page below that.
 * @li #ELM_FLIP_PAGE_RIGHT - Move the currently visible content to the right
 * as if the flip was a book, the other content is shown as the page below
 * that.
 * @li #ELM_FLIP_PAGE_UP - Move the currently visible content up as if the
 * flip was a book, the other content is shown as the page below that.
 * @li #ELM_FLIP_PAGE_DOWN - Move the currently visible content down as if the
 * flip was a book, the other content is shown as the page below that.
 *
 * @image html elm_flip.png
 * @image latex elm_flip.eps width=\textwidth
 *
 * @since 1.7
 *
 * @ingroup Flip
 * 
 *
 * @param[in] front if @c EINA_TRUE, makes front visible, otherwise makes back.
 * @param[in] mode The mode type
 */
EAPI void elm_flip_go_to(Elm_Flip *obj, Eina_Bool front, Elm_Flip_Mode mode);

#endif
