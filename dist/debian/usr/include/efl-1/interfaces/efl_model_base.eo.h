#ifndef _EFL_MODEL_BASE_EO_H_
#define _EFL_MODEL_BASE_EO_H_

#ifndef _EFL_MODEL_BASE_EO_CLASS_TYPE
#define _EFL_MODEL_BASE_EO_CLASS_TYPE

typedef Eo Efl_Model_Base;

#endif

#ifndef _EFL_MODEL_BASE_EO_TYPES
#define _EFL_MODEL_BASE_EO_TYPES

typedef enum
{
  EFL_MODEL_LOAD_STATUS_ERROR = 0,
  EFL_MODEL_LOAD_STATUS_LOADING_PROPERTIES = 1 /* 1 << 0 */,
  EFL_MODEL_LOAD_STATUS_LOADING_CHILDREN = 2 /* 1 << 1 */,
  EFL_MODEL_LOAD_STATUS_LOADING = 3 /* (1 << 0) | (1 << 1) */,
  EFL_MODEL_LOAD_STATUS_LOADED_PROPERTIES = 4 /* 1 << 2 */,
  EFL_MODEL_LOAD_STATUS_LOADED_CHILDREN = 8 /* 1 << 3 */,
  EFL_MODEL_LOAD_STATUS_LOADED = 12 /* (1 << 2) | (1 << 3) */,
  EFL_MODEL_LOAD_STATUS_UNLOADING = 16 /* 1 << 4 */,
  EFL_MODEL_LOAD_STATUS_UNLOADED = 32 /* 1 << 5 */
} Efl_Model_Load_Status;

typedef struct _Efl_Model_Property_Event
{
  Eina_Array *changed_properties; /** List of changed properties */
  Eina_Array *invalidated_properties; /** Removed properties identified by name
                                       */
} Efl_Model_Property_Event;

/** Structure to hold Efl_Model_Load_Status enum (and possible other data) to
 * avoid ABI break.
 *
 * @ingroup Efl_Model
 */
typedef struct _Efl_Model_Load
{
  Efl_Model_Load_Status status;
} Efl_Model_Load;


#endif
#define EFL_MODEL_BASE_INTERFACE efl_model_base_interface_get()

EAPI const Eo_Class *efl_model_base_interface_get(void) EINA_CONST;

/**
 * @brief Get a load emodel current status.
 *
 * By convention this means get the current model status. Possible values are
 * defined Efl_Model_Load_Status enumerator.
 *
 * See also @ref Efl_Model_Load_Status, @ref efl_model_load
 *
 * @since 1.14
 *
 * @ingroup Efl_Model_Base
 */
EOAPI Efl_Model_Load_Status  efl_model_load_status_get(void);

/**
 * @brief Get properties from model.
 *
 * properties_get is due to provide callers a way the fetch the current
 * properties implemented/used by the model. The event
 * EFL_MODEL_EVENT_PROPERTIES_CHANGE will be raised to notify listeners of any
 * modifications in the properties.
 *
 * See also @ref EFL_MODEL_EVENT_PROPERTIES_CHANGE.
 *
 * @param[out] properties array of current properties
 *
 * @since 1.14
 *
 * @ingroup Efl_Model_Base
 */
EOAPI Efl_Model_Load_Status  efl_model_properties_get(Eina_Array * const*properties);

/**
 * @brief Set a property value of a given property name.
 *
 * The caller must ensure to call at least efl_model_prop_list before being
 * able to see/set properties. This function sets a new property value into
 * given property name. Once the operation is completed the concrete
 * implementation should raise EFL_MODEL_EVENT_PROPERTIES_CHANGE event in order
 * to notify listeners of the new value of the property.
 *
 * If the model doesn't have the property then there are two possibilities,
 * either raise an error or create the new property in model
 *
 * See @ref efl_model_property_get, @ref EFL_MODEL_EVENT_PROPERTIES_CHANGE
 *
 * @param[in] property Property name
 * @param[in] value New value
 *
 * @since 1.14
 *
 * @ingroup Efl_Model_Base
 */
EOAPI Efl_Model_Load_Status  efl_model_property_set(const char * property, const Eina_Value *value);

/**
 * @brief Retrieve the value of a given property name.
 *
 * property_get will only be available when load status is equal to
 * EFL_MODEL_LOAD_STATUS_LOADED.
 *
 * At this point the caller is free to get values from properties. The event
 * EFL_MODEL_EVENT_PROPERTIES_CHANGE may be raised to notify listeners of the
 * property/value.
 *
 * See @ref efl_model_properties_get, @ref EFL_MODEL_EVENT_PROPERTIES_CHANGE
 *
 * @param[in] property Property name
 * @param[out] value New value
 *
 * @since 1.14
 *
 * @ingroup Efl_Model_Base
 */
EOAPI Efl_Model_Load_Status  efl_model_property_get(const char * property, const Eina_Value **value);

/**
 * @brief Get children slice OR full range.
 *
 * Before being able to get the children list the model status must be on
 * loaded status (EFL_MODEL_LOAD_STATUS_LOADED). However there may be
 * circunstancies where the model could be in a different state, in such cases
 * it is advisable to simply return: its current state, which will be of
 * course, different than EFL_MODEL_LOAD_STATUS_LOADED_CHILDREN.
 *
 * When children accessor is returned as NULL one should then test the current
 * load status return:ed by @ref efl_model_children_slice_get in order to check
 * against an empty list or real error.
 *
 * children_slice_get behaves in two different ways, it may provide the slice
 * if both @c start AND @c count are non-zero OR full range otherwise.
 *
 * The return:ed Eina_Accessor must be freed when it is no longer needed and
 * eo_unref() must be invoked for children if caller wants a copy.
 *
 * Since 'slice' is a range, for example if we have 20 childs a slice could be
 * the range from 3(start) to 4(count), see:
 *
 * child 0  [no] child 1  [no] child 2  [yes] child 3  [yes] child 4  [yes]
 * child 5  [yes] child 6  [no] child 7  [no]
 *
 * Optionally the user can call children_count_get to know the number of
 * children so a valid range can be known in advance.
 *
 * See @ref efl_model_children_count_get, @ref efl_model_load,
 * @ref efl_model_load_status_get.
 *
 * @param[in] start Range begin - start from here. If start and count are 0
 * slice is ignored.
 * @param[in] count Range size. If count and start are 0 slice is ignored.
 * @param[out] children_accessor
 *
 * @since 1.14
 *
 * @ingroup Efl_Model_Base
 */
EOAPI Efl_Model_Load_Status  efl_model_children_slice_get(unsigned int start, unsigned int count, Eina_Accessor **children_accessor);

/**
 * @brief Get children count.
 *
 * When efl_model_load is completed efl_model_coildren_count_get can be use to
 * get the number of children. children_count_get can also be used before
 * calling children_slice_get so a valid range is known. Event
 * EFL_MODEL_CHILDREN_COUNT_CHANGED is emitted when count is finished.
 *
 * See also @ref efl_model_children_slice_get, @ref efl_model_load,
 * @ref efl_model_load_status_get.
 *
 * @param[out] children_count
 *
 * @since 1.14
 *
 * @ingroup Efl_Model_Base
 */
EOAPI Efl_Model_Load_Status  efl_model_children_count_get(unsigned int *children_count);

/**
 * @brief Load emodel.
 *
 * By convention this means loading data from an external source and populating
 * the models properties and children with it. For example in the case of file
 * system backed model, this means opening the relevant files and reading the
 * data from them(creating the properties and children from it). the model emit
 * EFL_MODEL_EVENT_LOAD_STATUS after end with Efl_Model_Load_Status
 *
 * This convention should be followed, but no guarantees of behaviour by user
 * defined types can be given.
 *
 * Alternatively is possible to use properties_load to load only properties and
 * children_load to load only children. If efl_model_load is called then
 * calling properties_load and/or children_load is not necessary.
 *
 * See also @ref Efl_Model_Load_Status, @ref efl_model_properties_load,
 * @ref efl_model_children_load, @ref efl_model_unload,
 * @ref efl_model_load_status_get
 *
 * @since 1.14
 *
 * @ingroup Efl_Model_Base
 */
EOAPI void  efl_model_load(void);

/**
 * @brief Unload emodel.
 *
 * By convention this means releasing data received/read from an external
 * source. For example of a database backed model this might mean releasing the
 * iterator for the currently loaded data or deleting a temporary table. the
 * model emit EFL_MODEL_EVENT_LOAD_STATUS after end with model load status
 *
 * This convention should be followed, but no guarantees of behaviour by user
 * defined types can be given.
 *
 * See also @ref Efl_Model_Load_Status, @ref efl_model_load,
 *  @ref efl_model_load_status_get
 *
 * @since 1.14
 *
 * @ingroup Efl_Model_Base
 */
EOAPI void  efl_model_unload(void);

/**
 * @brief Properties emodel load.
 *
 * By convention this means loading data from an external source and populating
 * the models properties only. This method is a subset of @ref efl_model_load,
 * meaning that it won't load children, it is a hint. For loadind both
 * properties and children use efl_model_load instead.
 *
 * @since 1.14
 *
 * @ingroup Efl_Model_Base
 */
EOAPI void  efl_model_properties_load(void);

/**
 * @brief Children emodel load.
 *
 * By convention this means loading data from an external source and populating
 * the models children only. This method is a subset of @ref efl_model_load,
 * meaning that it won't load properties. For loadind both properties and
 * children use efl_model_load instead.
 *
 * @since 1.14
 *
 * @ingroup Efl_Model_Base
 */
EOAPI void  efl_model_children_load(void);

/**
 * @brief Add a new child.
 *
 * Add a new child, possibly dummy, depending on the implementation, of a
 * internal keeping. When the child is effectively added the event @ref
 * EFL_MODEL_EVENT_CHILD_ADD is then raised and the new child is kept along
 * with other children.
 *
 * See also @ref efl_model_load_status_get.
 *
 * @since 1.14
 *
 * @ingroup Efl_Model_Base
 */
EOAPI Eo_Base * efl_model_child_add(void);

/**
 * @brief Remove a child.
 *
 * Remove a child of a internal keeping. When the child is effectively removed
 * the event @ref EFL_MODEL_EVENT_CHILD_REMOVED is then raised to give a chance
 * for listeners to perform any cleanup and/or update references.
 *
 * @param[in] child Child to be removed
 *
 * @since 1.14
 *
 * @ingroup Efl_Model_Base
 */
EOAPI Efl_Model_Load_Status  efl_model_child_del(Eo_Base *child);

EOAPI extern const Eo_Event_Description _EFL_MODEL_BASE_EVENT_LOAD_STATUS;
EOAPI extern const Eo_Event_Description _EFL_MODEL_BASE_EVENT_PROPERTIES_CHANGED;
EOAPI extern const Eo_Event_Description _EFL_MODEL_BASE_EVENT_CHILD_ADDED;
EOAPI extern const Eo_Event_Description _EFL_MODEL_BASE_EVENT_CHILD_REMOVED;
EOAPI extern const Eo_Event_Description _EFL_MODEL_BASE_EVENT_CHILDREN_COUNT_CHANGED;

/** Event dispatch when load status changes
 *
 * @ingroup Efl_Model_Base
 */
#define EFL_MODEL_BASE_EVENT_LOAD_STATUS (&(_EFL_MODEL_BASE_EVENT_LOAD_STATUS))

/** Event dispatched when properties list is available.
 *
 * @ingroup Efl_Model_Base
 */
#define EFL_MODEL_BASE_EVENT_PROPERTIES_CHANGED (&(_EFL_MODEL_BASE_EVENT_PROPERTIES_CHANGED))

/** Event dispatched when new child is added.
 *
 * @ingroup Efl_Model_Base
 */
#define EFL_MODEL_BASE_EVENT_CHILD_ADDED (&(_EFL_MODEL_BASE_EVENT_CHILD_ADDED))

/** Event dispatched when child is removed.
 *
 * @ingroup Efl_Model_Base
 */
#define EFL_MODEL_BASE_EVENT_CHILD_REMOVED (&(_EFL_MODEL_BASE_EVENT_CHILD_REMOVED))

/** Event dispatched when children count is finished.
 *
 * @ingroup Efl_Model_Base
 */
#define EFL_MODEL_BASE_EVENT_CHILDREN_COUNT_CHANGED (&(_EFL_MODEL_BASE_EVENT_CHILDREN_COUNT_CHANGED))

#endif
