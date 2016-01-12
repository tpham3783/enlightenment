#ifndef _ELM_INTERFACE_ATSPI_ACCESSIBLE_EO_H_
#define _ELM_INTERFACE_ATSPI_ACCESSIBLE_EO_H_

#ifndef _ELM_INTERFACE_ATSPI_ACCESSIBLE_EO_CLASS_TYPE
#define _ELM_INTERFACE_ATSPI_ACCESSIBLE_EO_CLASS_TYPE

typedef Eo Elm_Interface_Atspi_Accessible;

#endif

#ifndef _ELM_INTERFACE_ATSPI_ACCESSIBLE_EO_TYPES
#define _ELM_INTERFACE_ATSPI_ACCESSIBLE_EO_TYPES

/** Type of accessibility object
 *
 * @ingroup Elm_Atspi
 */
typedef enum
{
  ELM_ATSPI_TYPE_REGULAR = 0, /** default accessibile object */
  ELM_ATSPI_TYPE_DISABLED, /** skip object and its children in accessibility
                            * hierarchy */
  ELM_ATSPI_TYPE_SKIPPED /** skip object in accessibility hierarchy */
} Elm_Atspi_Type;


#endif
#define ELM_INTERFACE_ATSPI_ACCESSIBLE_MIXIN elm_interface_atspi_accessible_mixin_get()

EAPI const Eo_Class *elm_interface_atspi_accessible_mixin_get(void) EINA_CONST;

#ifdef ELM_INTERFACE_ATSPI_ACCESSIBLE_PROTECTED
/** Gets an localized string describing ATSPI widget role name.
 *
 * @ingroup Elm_Interface_Atspi_Accessible
 */
EOAPI const char *elm_interface_atspi_accessible_localized_role_name_get(void);
#endif

EOAPI void elm_interface_atspi_accessible_name_set(char *name);

/**
 * @brief Gets an string describing ATSPI widget role name.  Should be free by
 * a user.
 *
 * @return obj name
 *
 * @ingroup Elm_Interface_Atspi_Accessible
 */
EOAPI char *elm_interface_atspi_accessible_name_get(void);

#ifdef ELM_INTERFACE_ATSPI_ACCESSIBLE_PROTECTED
/** Gets an string describing ATSPI widget role name. Lists and elements Should
 * be free by a user.
 *
 * @ingroup Elm_Interface_Atspi_Accessible
 */
EOAPI Elm_Atspi_Relation_Set elm_interface_atspi_accessible_relation_set_get(void);
#endif

EOAPI void elm_interface_atspi_accessible_role_set(Elm_Atspi_Role role);

/** Gets the role of the widget in ATSPI Accessibility domain.
 *
 * @ingroup Elm_Interface_Atspi_Accessible
 */
EOAPI Elm_Atspi_Role elm_interface_atspi_accessible_role_get(void);

#ifdef ELM_INTERFACE_ATSPI_ACCESSIBLE_PROTECTED
/** Gets widget's accessible children.
 *
 * @ingroup Elm_Interface_Atspi_Accessible
 */
EOAPI Eina_List *elm_interface_atspi_accessible_children_get(void);
#endif

#ifdef ELM_INTERFACE_ATSPI_ACCESSIBLE_PROTECTED
/** Gets human-readable string indentifying widget accessibility role.
 *
 * @ingroup Elm_Interface_Atspi_Accessible
 */
EOAPI const char *elm_interface_atspi_accessible_role_name_get(void);
#endif

#ifdef ELM_INTERFACE_ATSPI_ACCESSIBLE_PROTECTED
/** Gets key-value pairs indentifying widget extra attributes. Must be free by
 * a user.
 *
 * @ingroup Elm_Interface_Atspi_Accessible
 */
EOAPI Eina_List *elm_interface_atspi_accessible_attributes_get(void);
#endif

#ifdef ELM_INTERFACE_ATSPI_ACCESSIBLE_PROTECTED
/** Gets index of the child in parent's children list.
 *
 * @ingroup Elm_Interface_Atspi_Accessible
 */
EOAPI int elm_interface_atspi_accessible_index_in_parent_get(void);
#endif

/**
 * @brief Sets contextual information about widget.
 *
 * @param[in] description
 *
 * @ingroup Elm_Interface_Atspi_Accessible
 */
EOAPI void elm_interface_atspi_accessible_description_set(const char *description);

/** Gets widget contextual information.
 *
 * @ingroup Elm_Interface_Atspi_Accessible
 */
EOAPI const char *elm_interface_atspi_accessible_description_get(void);

/**
 * @brief Sets widget accessible parent.
 *
 * @param[in] parent
 *
 * @ingroup Elm_Interface_Atspi_Accessible
 */
EOAPI void elm_interface_atspi_accessible_parent_set(Elm_Interface_Atspi_Accessible *parent);

/** Gets widget accessible parent.
 *
 * @ingroup Elm_Interface_Atspi_Accessible
 */
EOAPI Elm_Interface_Atspi_Accessible *elm_interface_atspi_accessible_parent_get(void);

#ifdef ELM_INTERFACE_ATSPI_ACCESSIBLE_PROTECTED
/** Gets set describing widget accessible states.
 *
 * @ingroup Elm_Interface_Atspi_Accessible
 */
EOAPI Elm_Atspi_State_Set elm_interface_atspi_accessible_state_set_get(void);
#endif

/**
 * @brief Sets the translation domain of "name" and "description" properties.
 *
 * Translation domain should be set if application wants to support i18n for
 * accessibily "name" and "description" properties.
 *
 * When translation domain is set values of "name" and "description" properties
 * will be translated with dgettext function using current translation domain
 * as "domainname" parameter.
 *
 * It is application developer responsibility to ensure that translation files
 * are loaded and binded to translation domain when accessibility is enabled.
 *
 * @param[in] domain translation domain
 *
 * @ingroup Elm_Interface_Atspi_Accessible
 */
EOAPI void elm_interface_atspi_accessible_translation_domain_set(const char *domain);

/**
 * @brief Gets the translation domain of "name" and "description" properties.
 *
 * @return translation domain
 *
 * @ingroup Elm_Interface_Atspi_Accessible
 */
EOAPI const char *elm_interface_atspi_accessible_translation_domain_get(void);

/**
 * @brief Set type of accessibility object
 *
 * @param[in] type
 *
 * @ingroup Elm_Interface_Atspi_Accessible
 */
EOAPI void elm_interface_atspi_accessible_type_set(Elm_Atspi_Type type);

/** Get type of accessibility object
 *
 * @ingroup Elm_Interface_Atspi_Accessible
 */
EOAPI Elm_Atspi_Type elm_interface_atspi_accessible_type_get(void);

/** Get root object of accessible object hierarchy
 *
 * @ingroup Elm_Interface_Atspi_Accessible
 */
EOAPI Eo *elm_interface_atspi_accessible_root_get(void);

#ifdef ELM_INTERFACE_ATSPI_ACCESSIBLE_PROTECTED
/**
 * @brief Register accessibility event listener
 *
 * @param[in] data data
 *
 * @return Event handler
 *
 * @ingroup Elm_Interface_Atspi_Accessible
 */
EOAPI Elm_Atspi_Event_Handler *elm_interface_atspi_accessible_event_handler_add(Eo_Event_Cb cb, void *data);
#endif

#ifdef ELM_INTERFACE_ATSPI_ACCESSIBLE_PROTECTED
/**
 * @brief Deregister accessibility event listener
 *
 * @param[in] handler Event handler
 *
 * @ingroup Elm_Interface_Atspi_Accessible
 */
EOAPI void elm_interface_atspi_accessible_event_handler_del(Elm_Atspi_Event_Handler *handler);
#endif

#ifdef ELM_INTERFACE_ATSPI_ACCESSIBLE_PROTECTED
EOAPI void elm_interface_atspi_accessible_event_emit(Elm_Interface_Atspi_Accessible *accessible, const Eo_Event_Description *event, void *event_info);
#endif

/**
 * @brief Defines the relationship between two accessible objects.
 *
 * Adds unique relation between source object and relation_object of a given
 * type.
 *
 * Relationships can be queried by Assistive Technology clients to provide
 * customized feedback, improving overall user experience.
 *
 * Relationship_append API is asymmetric, which means that appending, for
 * example, relation ELM_ATSPI_RELATION_FLOWS_TO from object A to B, do NOT
 * append relation ELM_ATSPI_RELATION_FLOWS_FROM from object B to object A.
 *
 * return: EINA_TRUE is relationship was successfully appended, EINA_FALSE
 * otherwise
 *
 * @param[in] relation_object
 *
 * @ingroup Elm_Interface_Atspi_Accessible
 */
EOAPI Eina_Bool elm_interface_atspi_accessible_relationship_append(Elm_Atspi_Relation_Type type, const Elm_Interface_Atspi_Accessible *relation_object);

/**
 * @brief Removes the relationship between two accessible objects.
 *
 * If relation_object is NULL function removes all relations of given type.
 *
 * @param[in] relation_object
 *
 * @ingroup Elm_Interface_Atspi_Accessible
 */
EOAPI void elm_interface_atspi_accessible_relationship_remove(Elm_Atspi_Relation_Type type, const Elm_Interface_Atspi_Accessible *relation_object);

/** Removes all relationships in accessible object.
 *
 * @ingroup Elm_Interface_Atspi_Accessible
 */
EOAPI void elm_interface_atspi_accessible_relationships_clear(void);

EOAPI extern const Eo_Event_Description _ELM_INTERFACE_ATSPI_ACCESSIBLE_EVENT_PROPERTY_CHANGED;
EOAPI extern const Eo_Event_Description _ELM_INTERFACE_ATSPI_ACCESSIBLE_EVENT_CHILDREN_CHANGED;
EOAPI extern const Eo_Event_Description _ELM_INTERFACE_ATSPI_ACCESSIBLE_EVENT_STATE_CHANGED;
EOAPI extern const Eo_Event_Description _ELM_INTERFACE_ATSPI_ACCESSIBLE_EVENT_VISIBLE_DATA_CHANGED;
EOAPI extern const Eo_Event_Description _ELM_INTERFACE_ATSPI_ACCESSIBLE_EVENT_ACTIVE_DESCENDANT_CHANGED;
EOAPI extern const Eo_Event_Description _ELM_INTERFACE_ATSPI_ACCESSIBLE_EVENT_ADDED;
EOAPI extern const Eo_Event_Description _ELM_INTERFACE_ATSPI_ACCESSIBLE_EVENT_REMOVED;

/**
 * No description
 */
#define ELM_INTERFACE_ATSPI_ACCESSIBLE_EVENT_PROPERTY_CHANGED (&(_ELM_INTERFACE_ATSPI_ACCESSIBLE_EVENT_PROPERTY_CHANGED))

/**
 * No description
 */
#define ELM_INTERFACE_ATSPI_ACCESSIBLE_EVENT_CHILDREN_CHANGED (&(_ELM_INTERFACE_ATSPI_ACCESSIBLE_EVENT_CHILDREN_CHANGED))

/**
 * No description
 */
#define ELM_INTERFACE_ATSPI_ACCESSIBLE_EVENT_STATE_CHANGED (&(_ELM_INTERFACE_ATSPI_ACCESSIBLE_EVENT_STATE_CHANGED))

/**
 * No description
 */
#define ELM_INTERFACE_ATSPI_ACCESSIBLE_EVENT_VISIBLE_DATA_CHANGED (&(_ELM_INTERFACE_ATSPI_ACCESSIBLE_EVENT_VISIBLE_DATA_CHANGED))

/**
 * No description
 */
#define ELM_INTERFACE_ATSPI_ACCESSIBLE_EVENT_ACTIVE_DESCENDANT_CHANGED (&(_ELM_INTERFACE_ATSPI_ACCESSIBLE_EVENT_ACTIVE_DESCENDANT_CHANGED))

/**
 * No description
 */
#define ELM_INTERFACE_ATSPI_ACCESSIBLE_EVENT_ADDED (&(_ELM_INTERFACE_ATSPI_ACCESSIBLE_EVENT_ADDED))

/**
 * No description
 */
#define ELM_INTERFACE_ATSPI_ACCESSIBLE_EVENT_REMOVED (&(_ELM_INTERFACE_ATSPI_ACCESSIBLE_EVENT_REMOVED))

#endif
