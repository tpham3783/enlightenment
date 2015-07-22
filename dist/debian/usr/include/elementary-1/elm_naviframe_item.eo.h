#ifndef _ELM_NAVIFRAME_ITEM_EO_H_
#define _ELM_NAVIFRAME_ITEM_EO_H_

#ifndef _ELM_NAVIFRAME_ITEM_EO_CLASS_TYPE
#define _ELM_NAVIFRAME_ITEM_EO_CLASS_TYPE

typedef Eo Elm_Naviframe_Item;

#endif

#ifndef _ELM_NAVIFRAME_ITEM_EO_TYPES
#define _ELM_NAVIFRAME_ITEM_EO_TYPES


#endif
#define ELM_NAVIFRAME_ITEM_CLASS elm_naviframe_item_class_get()

EAPI const Eo_Class *elm_naviframe_item_class_get(void) EINA_CONST;

/**
 * Set an item style
 *
 * The following styles are available for this item:
 * @li @c "default"
 *
 * @see also elm_naviframe_item_style_get()
 *
 * @ingroup Naviframe
 *
 * @param[in] style The current item style name. @c NULL would be default
 */
EOAPI void  elm_obj_naviframe_item_style_set(const char *style);

/**
 * Get an item style
 *
 * @see also elm_naviframe_item_style_set()
 *
 * @ingroup Naviframe
 */
EOAPI const char * elm_obj_naviframe_item_style_get(void);

/**
 * Pop the top item and delete the items between the top and the above
 * one on the given item.
 *
 * The items between the top and the given item will be deleted first,
 * and then the top item will be popped at last.
 *
 * @ingroup Naviframe
 * 
 */
EOAPI void  elm_obj_naviframe_item_pop_to(void);

/**
 * Get a value whether title area is enabled or not.
 *
 * @see also elm_naviframe_item_title_enabled_set()
 *
 * @ingroup Naviframe
 * 
 */
EOAPI Eina_Bool  elm_obj_naviframe_item_title_enabled_get(void);

/**
 * Enable/Disable the title area with transition effect
 *
 * When the title area is disabled, then the controls would be hidden so as
 * to expand the content area to full-size.
 *
 * @see also elm_naviframe_item_title_enabled_get()
 * @see also elm_naviframe_item_title_visible_set()
 *
 * @ingroup Naviframe
 * 
 *
 * @param[in] enable If @c EINA_TRUE, title area will be enabled, disabled otherwise
 * @param[in] transition If @c EINA_TRUE, transition effect of the title will be visible, invisible otherwise
 */
EOAPI void  elm_obj_naviframe_item_title_enabled_set(Eina_Bool enable, Eina_Bool transition);

/**
 * Promote an item already in the naviframe stack to the top of the stack
 *
 * This will take the indicated item and promote it to the top of the stack
 * as if it had been pushed there. The item must already be inside the
 * naviframe stack to work.
 * 
 */
EOAPI void  elm_obj_naviframe_item_promote(void);

/**
 * Set a function to be called when @c it of the naviframe is going to be
 * popped.
 *
 * @param func the callback function.
 *
 * @warning Don't set "clicked" callback to the prev button additionally if the
 * function does an exact same logic with this @c func. When hardware back key
 * is pressed then both callbacks will be called.
 *
 * @since 1.8
 * @ingroup Naviframe
 * 
 *
 * @param[in] func The callback function
 * @param[in] data Data to be passed to func call
 */
EOAPI void  elm_obj_naviframe_item_pop_cb_set(Elm_Naviframe_Item_Pop_Cb func, void *data);


#endif
