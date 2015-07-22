#ifndef _ELM_SEGMENT_CONTROL_ITEM_EO_H_
#define _ELM_SEGMENT_CONTROL_ITEM_EO_H_

#ifndef _ELM_SEGMENT_CONTROL_ITEM_EO_CLASS_TYPE
#define _ELM_SEGMENT_CONTROL_ITEM_EO_CLASS_TYPE

typedef Eo Elm_Segment_Control_Item;

#endif

#ifndef _ELM_SEGMENT_CONTROL_ITEM_EO_TYPES
#define _ELM_SEGMENT_CONTROL_ITEM_EO_TYPES


#endif
#define ELM_SEGMENT_CONTROL_ITEM_CLASS elm_segment_control_item_class_get()

EAPI const Eo_Class *elm_segment_control_item_class_get(void) EINA_CONST;

/**
 * Get the index of an item.
 *
 * Index is the position of an item in segment control widget. Its
 * range is from @c 0 to <tt> count - 1 </tt>.
 * Count is the number of items, that can be get with
 * elm_segment_control_item_count_get().
 *
 * @return The position of item in segment control widget.
 *
 * @ingroup SegmentControl
 * 
 */
EOAPI int  elm_obj_segment_control_item_index_get(void);

/**
 * Get the real Evas(Edje) object created to implement the view of a given
 * segment_control @p item.
 *
 * Base object is the @c Evas_Object that represents that item.
 *
 * @return The base Edje object associated with @p it.
 *
 * @ingroup SegmentControl
 * 
 */
EOAPI Evas_Object * elm_obj_segment_control_item_object_get(void);

/**
 * Set the selected state of an item.
 *
 * This sets the selected state of the given item @p it.
 * @c EINA_TRUE for selected, @c EINA_FALSE for not selected.
 *
 * If a new item is selected the previously selected will be unselected.
 * Selected item can be got with function
 * elm_segment_control_item_selected_get().
 *
 * The selected item always will be highlighted on segment control.
 *
 * @see elm_segment_control_item_selected_get()
 *
 * @ingroup SegmentControl
 * 
 *
 * @param[in] selected The selected state.
 */
EOAPI void  elm_obj_segment_control_item_selected_set(Eina_Bool selected);


#endif
