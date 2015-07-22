#ifndef _EFL_GFX_FILTER_EO_H_
#define _EFL_GFX_FILTER_EO_H_

#ifndef _EFL_GFX_FILTER_EO_CLASS_TYPE
#define _EFL_GFX_FILTER_EO_CLASS_TYPE

typedef Eo Efl_Gfx_Filter;

#endif

#ifndef _EFL_GFX_FILTER_EO_TYPES
#define _EFL_GFX_FILTER_EO_TYPES


#endif
#define EFL_GFX_FILTER_INTERFACE efl_gfx_filter_interface_get()

EAPI const Eo_Class *efl_gfx_filter_interface_get(void) EINA_CONST;

#ifdef EFL_GFX_FILTER_BETA
/**
 * @brief Set an evas filter program on this object.
 *
 * Valid for Text and Image objects at the moment.
 *
 * The argument passed to this function is a string containing a valid Lua
 * program based on the filters API as described in the "Evas filters
 * reference" page.
 *
 * Set to null to disable filtering.
 *
 * @param[in] code filter program source code
 * @param[in] name filter name (optional)
 *
 * @ingroup Efl_Gfx_Filter
 */
EOAPI void  efl_gfx_filter_program_set(const char *code, const char *name);
#endif

#ifdef EFL_GFX_FILTER_BETA
/**
 * @brief Gets the code of the filter program set on this object. May be null.
 *
 * @param[out] code filter program source code
 * @param[out] name filter name (optional)
 *
 * @ingroup Efl_Gfx_Filter
 */
EOAPI void  efl_gfx_filter_program_get(const char **code, const char **name);
#endif

#ifdef EFL_GFX_FILTER_BETA
/**
 * @brief Set the current state of the filter (for use from Edje).
 *
 * @param[in] cur_state
 * @param[in] cur_val
 * @param[in] next_state
 * @param[in] next_val
 * @param[in] pos
 *
 * @ingroup Efl_Gfx_Filter
 */
EOAPI void  efl_gfx_filter_state_set(const char *cur_state, double cur_val, const char *next_state, double next_val, double pos);
#endif

#ifdef EFL_GFX_FILTER_BETA
/**
 * @brief Gets the padding required to apply this filter.
 *
 * @param[out] l
 * @param[out] r
 * @param[out] t
 * @param[out] b
 *
 * @ingroup Efl_Gfx_Filter
 */
EOAPI void  efl_gfx_filter_padding_get(int *l, int *r, int *t, int *b);
#endif

#ifdef EFL_GFX_FILTER_BETA
/**
 * @brief Bind an object to use as a mask or texture with Evas Filters.
 *
 * This will create automatically a new RGBA buffer containing the source
 * object's pixels (as it is rendered).
 *
 * @param[in] source object to use as a proxy source
 *
 * @ingroup Efl_Gfx_Filter
 */
EOAPI void  efl_gfx_filter_source_set(const char *name, Efl_Gfx_Base *source);
#endif

#ifdef EFL_GFX_FILTER_BETA
/**
 * @brief Retrieve which object is attached to this filter given its buffer
 * name.
 *
 * @param[out] source object used as a proxy source
 *
 * @ingroup Efl_Gfx_Filter
 */
EOAPI void  efl_gfx_filter_source_get(const char *name, Efl_Gfx_Base **source);
#endif

#ifdef EFL_GFX_FILTER_BETA
/**
 * @brief Pass extra data to the filter program.
 *
 * This sets a global value as a string.
 *
 * @param[in] value String value to use as data
 * @param[in] execute If true, execute 'name = value'
 *
 * @ingroup Efl_Gfx_Filter
 */
EOAPI void  efl_gfx_filter_data_set(const char *name, const char *value, Eina_Bool execute);
#endif


#endif
