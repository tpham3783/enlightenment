#ifndef _ELM_SLIDESHOW_ITEM_EO_H_
#define _ELM_SLIDESHOW_ITEM_EO_H_

#ifndef _ELM_SLIDESHOW_ITEM_EO_CLASS_TYPE
#define _ELM_SLIDESHOW_ITEM_EO_CLASS_TYPE

typedef Eo Elm_Slideshow_Item;

#endif

#ifndef _ELM_SLIDESHOW_ITEM_EO_TYPES
#define _ELM_SLIDESHOW_ITEM_EO_TYPES


#endif
#define ELM_SLIDESHOW_ITEM_CLASS elm_slideshow_item_class_get()

EAPI const Eo_Class *elm_slideshow_item_class_get(void) EINA_CONST;

/**
 * Display a given slideshow widget's item, programmatically.
 *
 * The change between the current item and @p item will use the
 * transition @p obj is set to use (@see
 * elm_slideshow_transition_set()).
 *
 * @ingroup Slideshow
 * 
 */
EOAPI void  elm_obj_slideshow_item_show(void);

/**
 * Get the real Evas object created to implement the view of a
 * given slideshow item
 *
 * This returns the actual Evas object used to implement the
 * specified slideshow item's view. This may be @c NULL, as it may
 * not have been created or may have been deleted, at any time, by
 * the slideshow. <b>Do not modify this object</b> (move, resize,
 * show, hide, etc.), as the slideshow is controlling it. This
 * function is for querying, emitting custom signals or hooking
 * lower level callbacks for events on that object. Do not delete
 * this object under any circumstances.
 *
 * @see elm_object_item_data_get()
 *
 * @ingroup Slideshow
 * 
 */
EOAPI Evas_Object * elm_obj_slideshow_item_object_get(void);


#endif
