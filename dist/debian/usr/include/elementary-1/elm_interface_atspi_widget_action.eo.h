#ifndef _ELM_INTERFACE_ATSPI_WIDGET_ACTION_EO_H_
#define _ELM_INTERFACE_ATSPI_WIDGET_ACTION_EO_H_

#ifndef _ELM_INTERFACE_ATSPI_WIDGET_ACTION_EO_CLASS_TYPE
#define _ELM_INTERFACE_ATSPI_WIDGET_ACTION_EO_CLASS_TYPE

typedef Eo Elm_Interface_Atspi_Widget_Action;

#endif

#ifndef _ELM_INTERFACE_ATSPI_WIDGET_ACTION_EO_TYPES
#define _ELM_INTERFACE_ATSPI_WIDGET_ACTION_EO_TYPES


#endif
#define ELM_INTERFACE_ATSPI_WIDGET_ACTION_MIXIN elm_interface_atspi_widget_action_mixin_get()

EAPI const Eo_Class *elm_interface_atspi_widget_action_mixin_get(void) EINA_CONST;

#ifdef ELM_INTERFACE_ATSPI_WIDGET_ACTION_PROTECTED
/**
 * No description supplied.
 */
EOAPI const Elm_Atspi_Action * elm_interface_atspi_widget_action_elm_actions_get(void);
#endif


#endif
