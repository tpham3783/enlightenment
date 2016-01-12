#ifndef _ELM_PANEL_EO_H_
#define _ELM_PANEL_EO_H_

#ifndef _ELM_PANEL_EO_CLASS_TYPE
#define _ELM_PANEL_EO_CLASS_TYPE

typedef Eo Elm_Panel;

#endif

#ifndef _ELM_PANEL_EO_TYPES
#define _ELM_PANEL_EO_TYPES

/** Panel orientation mode
 *
 * @ingroup Elm_Panel
 */
typedef enum
{
  ELM_PANEL_ORIENT_TOP = 0, /** Panel (dis)appears from the top */
  ELM_PANEL_ORIENT_BOTTOM, /** Panel (dis)appears from the bottom */
  ELM_PANEL_ORIENT_LEFT, /** Panel (dis)appears from the left */
  ELM_PANEL_ORIENT_RIGHT /** Panel (dis)appears from the right */
} Elm_Panel_Orient;


#endif
#define ELM_PANEL_CLASS elm_panel_class_get()

EAPI const Eo_Class *elm_panel_class_get(void) EINA_CONST;

/**
 * @brief Set the orientation of the panel
 *
 * Set from where the panel will (dis)appear.
 *
 * @param[in] orient The panel orientation.
 *
 * @ingroup Elm_Panel
 */
EOAPI void elm_obj_panel_orient_set(Elm_Panel_Orient orient);

/**
 * @brief Get the orientation of the panel.
 *
 * @return The panel orientation.
 *
 * @ingroup Elm_Panel
 */
EOAPI Elm_Panel_Orient elm_obj_panel_orient_get(void);

/**
 * @brief Set the state of the panel.
 *
 * @param[in] hidden If true, the panel will run the animation to disappear.
 *
 * @ingroup Elm_Panel
 */
EOAPI void elm_obj_panel_hidden_set(Eina_Bool hidden);

/**
 * @brief Get the state of the panel.
 *
 * @return If true, the panel will run the animation to disappear.
 *
 * @ingroup Elm_Panel
 */
EOAPI Eina_Bool elm_obj_panel_hidden_get(void);

/**
 * @brief Set the scrollability of the panel.
 *
 * @param[in] scrollable The scrollable state.
 *
 * @ingroup Elm_Panel
 */
EOAPI void elm_obj_panel_scrollable_set(Eina_Bool scrollable);

/**
 * @brief Get the state of the scrollability.
 *
 * @return The scrollable state.
 *
 * @since 1.12
 *
 * @ingroup Elm_Panel
 */
EOAPI Eina_Bool elm_obj_panel_scrollable_get(void);

/**
 * @brief Set the size of the scrollable panel.
 *
 * @param[in] ratio
 *
 * @ingroup Elm_Panel
 */
EOAPI void elm_obj_panel_scrollable_content_size_set(double ratio);

/** Toggle the hidden state of the panel from code
 *
 * @ingroup Elm_Panel
 */
EOAPI void elm_obj_panel_toggle(void);


#endif
