#ifndef _ELM_GENGRID_ITEM_EO_H_
#define _ELM_GENGRID_ITEM_EO_H_

#ifndef _ELM_GENGRID_ITEM_EO_CLASS_TYPE
#define _ELM_GENGRID_ITEM_EO_CLASS_TYPE

typedef Eo Elm_Gengrid_Item;

#endif

#ifndef _ELM_GENGRID_ITEM_EO_TYPES
#define _ELM_GENGRID_ITEM_EO_TYPES

/** Defines where to position the item in the genlist.
 *
 * @ingroup Elm_Gengrid_Item
 */
typedef enum
{
  ELM_GENGRID_ITEM_SCROLLTO_NONE = 0, /** No scrollto. */
  ELM_GENGRID_ITEM_SCROLLTO_IN = 1 /* 1 << 0 */, /** To the nearest viewport.
                                                  */
  ELM_GENGRID_ITEM_SCROLLTO_TOP = 2 /* 1 << 1 */, /** To the top of viewport.
                                                   */
  ELM_GENGRID_ITEM_SCROLLTO_MIDDLE = 4 /* 1 << 2 */ /** To the middle of
                                                     * viewport. */
} Elm_Gengrid_Item_Scrollto_Type;

/** Defines the type of the item part Used while updating item's parts. It can
 * be used at updating multi fields.
 *
 * @ingroup Elm_Gengrid_Item
 */
typedef enum
{
  ELM_GENGRID_ITEM_FIELD_ALL = 0,
  ELM_GENGRID_ITEM_FIELD_TEXT = 1 /* 1 << 0 */,
  ELM_GENGRID_ITEM_FIELD_CONTENT = 2 /* 1 << 1 */,
  ELM_GENGRID_ITEM_FIELD_STATE = 4 /* 1 << 2 */
} Elm_Gengrid_Item_Field_Type;


#endif
#define ELM_GENGRID_ITEM_CLASS elm_gengrid_item_class_get()

EAPI const Eo_Class *elm_gengrid_item_class_get(void) EINA_CONST;

/**
 * Get the @b previous item in a gengrid widget's internal list of items,
 * given a handle to one of those items.
 *
 * This returns the item placed before the @p item, on the container
 * gengrid.
 *
 * @see elm_gengrid_item_next_get()
 *
 * @ingroup Gengrid
 */
EOAPI Elm_Object_Item * elm_obj_gengrid_item_prev_get(void);

/**
 * Get the @b next item in a gengrid widget's internal list of items,
 * given a handle to one of those items.
 *
 * This returns the item placed after the @p item, on the container
 * gengrid.
 *
 * @see elm_gengrid_item_prev_get()
 *
 * @ingroup Gengrid
 */
EOAPI Elm_Object_Item * elm_obj_gengrid_item_next_get(void);

/**
 * Set whether a given gengrid item is selected or not
 *
 * This sets the selected state of an item. If multi-selection is
 * not enabled on the containing gengrid and @p selected is @c
 * EINA_TRUE, any other previously selected items will get
 * unselected in favor of this new one.
 *
 * @see elm_gengrid_item_selected_get()
 *
 * @ingroup Gengrid
 *
 * @param[in] selected the selected state (@c EINA_TRUE selected, @c EINA_FALSE not selected)
 */
EOAPI void  elm_obj_gengrid_item_selected_set(Eina_Bool selected);

/**
 * Get whether a given gengrid item is selected or not
 *
 * This API returns EINA_TRUE for all the items selected in multi-select mode as well.
 *
 * @see elm_gengrid_item_selected_set() for more details
 *
 * @ingroup Gengrid
 */
EOAPI Eina_Bool  elm_obj_gengrid_item_selected_get(void);

/**
 * Get the Gengrid Item class for the given Gengrid Item.
 *
 * This returns the Gengrid_Item_Class for the given item. It can be used to examine
 * the function pointers and item_style.
 *
 * @ingroup Gengrid
 */
EOAPI const Elm_Gengrid_Item_Class * elm_obj_gengrid_item_class_get(void);

/**
 * Get the index of the item. It is only valid once displayed.
 *
 * @ingroup Gengrid
 */
EOAPI int  elm_obj_gengrid_item_index_get(void);

/**
 * Get a given gengrid item's position, relative to the whole
 * gengrid's grid area.
 *
 * This returns the "logical" position of the item within the
 * gengrid. For example, @c (0, 1) would stand for first row,
 * second column.
 *
 * @ingroup Gengrid
 *
 * @param[out] x Pointer to variable to store the item's <b>row number</b>.
 * @param[out] y Pointer to variable to store the item's <b>column number</b>.
 */
EOAPI void  elm_obj_gengrid_item_pos_get(unsigned int *x, unsigned int *y);

/**
 * Set the gengrid item's select mode.
 *
 * elm_gengrid_select_mode_set() changes item's select mode.
 * - ELM_OBJECT_SELECT_MODE_DEFAULT : The item will only call their selection func and
 * callback when first becoming selected. Any further clicks will
 * do nothing, unless you set always select mode.
 * - ELM_OBJECT_SELECT_MODE_ALWAYS : This means that, even if selected,
 * every click will make the selected callbacks be called.
 * - ELM_OBJECT_SELECT_MODE_NONE : This will turn off the ability to select the item
 * entirely and they will neither appear selected nor call selected
 * callback functions.
 * - ELM_OBJECT_SELECT_MODE_DISPLAY_ONLY : This will apply no-finger-size rule
 * with ELM_OBJECT_SELECT_MODE_NONE. No-finger-size rule makes an item can be
 * smaller than lower limit. Clickable objects should be bigger than
 * human touch point device (your finger) for some touch or
 * small screen devices. So it is enabled, the item can be shrink than
 * predefined finger-size value. And the item will be updated.
 *
 * @see elm_gengrid_item_select_mode_get()
 *
 * @ingroup Gengrid
 *
 * @param[in] mode The selected mode
 */
EOAPI void  elm_obj_gengrid_item_select_mode_set(Elm_Object_Select_Mode mode);

/**
 * Get the gengrid item's select mode.
 *
 * (If getting mode fails, it returns ELM_OBJECT_SELECT_MODE_MAX)
 *
 * @see elm_gengrid_item_select_mode_set()
 *
 * @ingroup Gengrid
 */
EOAPI Elm_Object_Select_Mode  elm_obj_gengrid_item_select_mode_get(void);

/**
 * Show the portion of a gengrid's internal grid containing a given
 * item, @b immediately.
 *
 * This causes gengrid to @b redraw its viewport's contents to the
 * region containing the given @p item item, if it is not fully
 * visible.
 *
 * @see elm_gengrid_item_bring_in()
 *
 * @ingroup Gengrid
 * 
 *
 * @param[in] type Where to position the item in the viewport.
 */
EOAPI void  elm_obj_gengrid_item_show(Elm_Gengrid_Item_Scrollto_Type type);

/**
 * Animatedly bring in, to the visible area of a gengrid, a given
 * item on it.
 *
 * This causes gengrid to jump to the given @p item and show
 * it (by scrolling), if it is not fully visible. This will use
 * animation to do so and take a period of time to complete.
 *
 * @see elm_gengrid_item_show()
 *
 * @ingroup Gengrid
 * 
 *
 * @param[in] type Where to position the item in the viewport.
 */
EOAPI void  elm_obj_gengrid_item_bring_in(Elm_Gengrid_Item_Scrollto_Type type);

/**
 * Update the contents of a given gengrid item
 *
 * This updates an item by calling all the item class functions
 * again to get the contents, texts and states. Use this when the
 * original item data has changed and you want the changes to be
 * reflected.
 *
 * @ingroup Gengrid
 * 
 */
EOAPI void  elm_obj_gengrid_item_update(void);

/**
 * Update the part of an item
 *
 * This updates an item's part by calling item's fetching functions again
 * to get the contents, texts and states. Use this when the original
 * item data has changed and the changes are desired to be reflected.
 * Second parts argument is used for globbing to match '*', '?', and '.'
 * It can be used at updating multi fields.
 *
 * Use elm_gengrid_realized_items_update() to update an item's all
 * property.
 *
 * @see elm_gengrid_iitem_update()
 *
 * @ingroup Gengrid
 * @since 1.15
 * 
 *
 * @param[in] parts The name of item's part
 * @param[in] itf The type of item's part type
 */
EOAPI void  elm_obj_gengrid_item_fields_update(const char *parts, Elm_Gengrid_Item_Field_Type itf);

/**
 * Update the item class of a gengrid item.
 *
 * This sets another class of the item, changing the way that it is
 * displayed. After changing the item class, elm_gengrid_item_update() is
 * called on the item @p it.
 *
 * @ingroup Gengrid
 * 
 *
 * @param[in] itc The gengrid item class describing the function pointers and the item style.
 */
EOAPI void  elm_obj_gengrid_item_class_update(const Elm_Gengrid_Item_Class *itc);


#endif
