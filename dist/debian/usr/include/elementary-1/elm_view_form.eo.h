#ifndef _ELM_VIEW_FORM_EO_H_
#define _ELM_VIEW_FORM_EO_H_

#ifndef _ELM_VIEW_FORM_EO_CLASS_TYPE
#define _ELM_VIEW_FORM_EO_CLASS_TYPE

typedef Eo Elm_View_Form;

#endif

#ifndef _ELM_VIEW_FORM_EO_TYPES
#define _ELM_VIEW_FORM_EO_TYPES


#endif
#define ELM_VIEW_FORM_CLASS elm_view_form_class_get()

EAPI const Eo_Class *elm_view_form_class_get(void) EINA_CONST;

/**
 * Set model
 * @def elm_view_form_model_set
 * @since 1.11
 * 
 *
 * @param[in] model Emodel object
 */
EOAPI void  elm_view_form_model_set(Efl_Model_Base *model);

/**
 * Add new widget
 * @def elm_view_form_widget_add
 * @since 1.11
 * 
 *
 * @param[in] propname Property name
 * @param[in] evas Evas widget
 */
EOAPI void  elm_view_form_widget_add(const char *propname, Evas_Object *evas);


#endif
