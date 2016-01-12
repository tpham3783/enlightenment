#ifndef _ELM_VIEW_LIST_EO_H_
#define _ELM_VIEW_LIST_EO_H_

#ifndef _ELM_VIEW_LIST_EO_CLASS_TYPE
#define _ELM_VIEW_LIST_EO_CLASS_TYPE

typedef Eo Elm_View_List;

#endif

#ifndef _ELM_VIEW_LIST_EO_TYPES
#define _ELM_VIEW_LIST_EO_TYPES


#endif
#define ELM_VIEW_LIST_CLASS elm_view_list_class_get()

EAPI const Eo_Class *elm_view_list_class_get(void) EINA_CONST;

/**
 * @brief Constructor wrapper
 *
 * @param[in] item_type Item type
 * @param[in] item_style The current item style name. @c null would be default.
 *
 * @since 1.11
 *
 * @ingroup Elm_View_List
 */
EOAPI void elm_view_list_genlist_set(Evas_Object *genlist, Elm_Genlist_Item_Type item_type, const char *item_style);

/**
 * @brief Return evas object
 *
 * @param[out] widget Returned widget
 *
 * @since 1.11
 *
 * @ingroup Elm_View_List
 */
EOAPI void elm_view_list_evas_object_get(Evas_Object **widget);

/**
 * @brief Connect property
 *
 * @param[in] part Edje's theme part
 *
 * @since 1.11
 *
 * @ingroup Elm_View_List
 */
EOAPI void elm_view_list_property_connect(const char *property, const char *part);

/**
 * @brief Set model
 *
 * @param[in] model New Emodel to set
 *
 * @since 1.11
 *
 * @ingroup Elm_View_List
 */
EOAPI void elm_view_list_model_set(Efl_Model_Base *model);

/** Unset model
 *
 * @since 1.11
 *
 * @ingroup Elm_View_List
 */
EOAPI void elm_view_list_model_unset(void);

/**
 * @brief Get model
 *
 * @param[out] model Returned Emodel
 *
 * @since 1.11
 *
 * @ingroup Elm_View_List
 */
EOAPI void elm_view_list_model_get(Eo **model);

EOAPI extern const Eo_Event_Description _ELM_VIEW_LIST_EVENT_MODEL_SELECTED;

/**
 * No description
 */
#define ELM_VIEW_LIST_EVENT_MODEL_SELECTED (&(_ELM_VIEW_LIST_EVENT_MODEL_SELECTED))

#endif
