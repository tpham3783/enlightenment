#ifndef _ELM_PANEL_EO_LEGACY_H_
#define _ELM_PANEL_EO_LEGACY_H_

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

/**
 * @brief Sets the orientation of the panel
 *
 * Sets from where the panel will (dis)appear.
 *
 * @ingroup Panel
 *
 * @param[in] orient The panel orientation. Can be one of the following:
@li #ELM_PANEL_ORIENT_TOP
@li #ELM_PANEL_ORIENT_LEFT
@li #ELM_PANEL_ORIENT_RIGHT
 */
EAPI void elm_panel_orient_set(Elm_Panel *obj, Elm_Panel_Orient orient);

/**
 * @brief Get the orientation of the panel.
 *
 * @return The Elm_Panel_Orient, or #ELM_PANEL_ORIENT_LEFT on failure.
 *
 * @ingroup Panel
 */
EAPI Elm_Panel_Orient elm_panel_orient_get(const Elm_Panel *obj);

/**
 * @brief Set the state of the panel.
 *
 * @ingroup Panel
 *
 * @param[in] hidden If true, the panel will run the animation to disappear.
 */
EAPI void elm_panel_hidden_set(Elm_Panel *obj, Eina_Bool hidden);

/**
 * @brief Get the state of the panel.
 *
 * @return EINA_TRUE if it is hidden state
 *
 * @ingroup Panel
 */
EAPI Eina_Bool elm_panel_hidden_get(const Elm_Panel *obj);

/**
 * @brief Set the scrollability of the panel.
 *
 * @ingroup Panel
 *
 * @param[in] scrollable No description supplied.
 */
EAPI void elm_panel_scrollable_set(Elm_Panel *obj, Eina_Bool scrollable);

/**
 * @brief Get the state of the scrollability.
 *
 * @return EINA_TRUE if it is scrollable
 *
 * @ingroup Panel
 * @since 1.12
 */
EAPI Eina_Bool elm_panel_scrollable_get(const Elm_Panel *obj);

/**
 * @brief Set the size of the scrollable panel.
 *
 * @ingroup Panel
 *
 * @param[in] ratio No description supplied.
 */
EAPI void elm_panel_scrollable_content_size_set(Elm_Panel *obj, double ratio);

/**
 * @brief Toggle the hidden state of the panel from code
 *
 * @ingroup Panel
 * 
 */
EAPI void elm_panel_toggle(Elm_Panel *obj);

#endif
