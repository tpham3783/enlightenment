#ifndef _ELM_GENLIST_ITEM_EO_LEGACY_H_
#define _ELM_GENLIST_ITEM_EO_LEGACY_H_

#ifndef _ELM_GENLIST_ITEM_EO_CLASS_TYPE
#define _ELM_GENLIST_ITEM_EO_CLASS_TYPE

typedef Eo Elm_Genlist_Item;

#endif

#ifndef _ELM_GENLIST_ITEM_EO_TYPES
#define _ELM_GENLIST_ITEM_EO_TYPES

/** Defines if the item is of any special type (has subitems or it's the index
 * of a group), or is just a simple item.
 *
 * @ingroup Elm_Genlist_Item
 */
typedef enum
{
  ELM_GENLIST_ITEM_NONE = 0, /** Simple item. */
  ELM_GENLIST_ITEM_TREE = 1 /* 1 << 0 */, /** This may be expanded and have
                                           * child items. */
  ELM_GENLIST_ITEM_GROUP = 2 /* 1 << 1 */, /** An index item of a group of
                                            * items. this item can have child
                                            * items. */
  ELM_GENLIST_ITEM_MAX = 4 /* 1 << 2 */
} Elm_Genlist_Item_Type;

/** Defines the type of the item part Used while updating item's parts It can
 * be used at updating multi fields.
 *
 * @ingroup Elm_Genlist_Item
 */
typedef enum
{
  ELM_GENLIST_ITEM_FIELD_ALL = 0,
  ELM_GENLIST_ITEM_FIELD_TEXT = 1 /* 1 << 0 */,
  ELM_GENLIST_ITEM_FIELD_CONTENT = 2 /* 1 << 1 */,
  ELM_GENLIST_ITEM_FIELD_STATE = 4 /* 1 << 2 */
} Elm_Genlist_Item_Field_Type;

/** Defines where to position the item in the genlist.
 *
 * @ingroup Elm_Genlist_Item
 */
typedef enum
{
  ELM_GENLIST_ITEM_SCROLLTO_NONE = 0, /** No scrollto. */
  ELM_GENLIST_ITEM_SCROLLTO_IN = 1 /* 1 << 0 */, /** To the nearest viewport.
                                                  */
  ELM_GENLIST_ITEM_SCROLLTO_TOP = 2 /* 1 << 1 */, /** To the top of viewport.
                                                   */
  ELM_GENLIST_ITEM_SCROLLTO_MIDDLE = 4 /* 1 << 2 */ /** To the middle of
                                                     * viewport. */
} Elm_Genlist_Item_Scrollto_Type;


#endif

/**
 * Get the @b previous item in a genlist widget's internal list of items,
 * given a handle to one of those items.
 *
 * This returns the item placed before the @p item, on the container
 * genlist.
 *
 * @see elm_genlist_item_next_get()
 *
 * @ingroup Genlist
 */
EAPI Elm_Object_Item *elm_genlist_item_prev_get(const Elm_Genlist_Item *obj);

/**
 * Get the @b next item in a genlist widget's internal list of items,
 * given a handle to one of those items.
 *
 * This returns the item placed after the @p item, on the container
 * genlist.
 *
 * @see elm_genlist_item_prev_get()
 *
 * @ingroup Genlist
 */
EAPI Elm_Object_Item *elm_genlist_item_next_get(const Elm_Genlist_Item *obj);

/**
 * Get the parent item of the given item
 *
 * This returns the item that was specified as parent of the item @p it on
 * elm_genlist_item_append() and insertion related functions.
 *
 * @ingroup Genlist
 */
EAPI Elm_Object_Item *elm_genlist_item_parent_get(const Elm_Genlist_Item *obj);

/**
 * Get the list of subitems of a given item
 *
 * This returns the list of subitems that an item possesses. It cannot be changed.
 *
 * @since 1.9
 * @ingroup Genlist
 */
EAPI const Eina_List *elm_genlist_item_subitems_get(const Elm_Genlist_Item *obj);

/**
 * Set whether a given genlist item is selected or not
 *
 * Use @c EINA_TRUE, to make it selected, @c EINA_FALSE to make it unselected
 *
 * This sets the selected state of an item. If multi selection is
 * not enabled on the containing genlist and @p selected is @c
 * EINA_TRUE, any other previously selected items will get
 * unselected in favor of this new one.
 *
 * @see elm_genlist_item_selected_get()
 *
 * @ingroup Genlist
 *
 * @param[in] selected the selected state (@c EINA_TRUE selected, @c EINA_FALSE not selected)
 */
EAPI void elm_genlist_item_selected_set(Elm_Genlist_Item *obj, Eina_Bool selected);

/**
 * Get whether a given genlist item is selected or not
 *
 * @return @c EINA_TRUE, if it's selected, @c EINA_FALSE otherwise
 *
 * @see elm_genlist_item_selected_set() for more details
 *
 * @ingroup Genlist
 */
EAPI Eina_Bool elm_genlist_item_selected_get(const Elm_Genlist_Item *obj);

/**
 * Sets the expanded state of an item.
 *
 * This function flags the item of type #ELM_GENLIST_ITEM_TREE as
 * expanded or not.
 *
 * The theme will respond to this change visually, and a signal "expanded" or
 * "contracted" will be sent from the genlist with a pointer to the item that
 * has been expanded/contracted.
 *
 * Calling this function won't show or hide any child of this item (if it is
 * a parent). You must manually delete and create them on the callbacks of
 * the "expanded" or "contracted" signals.
 *
 * @see elm_genlist_item_expanded_get()
 *
 * @ingroup Genlist
 *
 * @param[in] expanded The expanded state (@c EINA_TRUE expanded, @c EINA_FALSE not expanded).
 */
EAPI void elm_genlist_item_expanded_set(Elm_Genlist_Item *obj, Eina_Bool expanded);

/**
 * Get the expanded state of an item
 *
 * This gets the expanded state of an item.
 *
 * @see elm_genlist_item_expanded_set()
 *
 * @ingroup Genlist
 */
EAPI Eina_Bool elm_genlist_item_expanded_get(const Elm_Genlist_Item *obj);

/**
 * Get the depth of expanded item
 *
 * @ingroup Genlist
 */
EAPI int elm_genlist_item_expanded_depth_get(const Elm_Genlist_Item *obj);

/**
 * Get the Genlist Item class for the given Genlist Item.
 *
 * This returns the Genlist_Item_Class for the given item. It can be used to
 * examine the function pointers and item_style.
 *
 * @ingroup Genlist
 */
EAPI const Elm_Genlist_Item_Class *elm_genlist_item_item_class_get(const Elm_Genlist_Item *obj);

/**
 * Get the index of the item. It is only valid once displayed.
 *
 * The index start from 1.
 *
 * @ingroup Genlist
 */
EAPI int elm_genlist_item_index_get(const Elm_Genlist_Item *obj);

/**
 * Get the item's decorate mode.
 *
 * This function just returns the name of the item's decorate mode.
 *
 * @see elm_genlist_item_decorate_mode_set()
 * @see elm_genlist_decorated_item_get()
 *
 * @ingroup Genlist
 */
EAPI const char *elm_genlist_item_decorate_mode_get(const Elm_Genlist_Item *obj);

/**
 * Set the flip state of a given genlist item.
 *
 * (@c EINA_TRUE = on, @c EINA_FALSE = off)
 *
 * This function sets the flip state of a given genlist item.
 * Flip mode overrides current item object.
 * It can be used for on-the-fly item replace.
 * Flip mode can be used with/without decorate mode.
 *
 * @see elm_genlist_item_flip_get()
 *
 * @ingroup Genlist
 *
 * @param[in] flip The flip mode
 */
EAPI void elm_genlist_item_flip_set(Elm_Genlist_Item *obj, Eina_Bool flip);

/**
 * Get the flip state of a given genlist item.
 *
 * This function returns the flip state of a given genlist item.
 * If the parameter is invalid, it returns @c EINA_FALSE.
 *
 * @see elm_genlist_item_flip_set()
 *
 * @ingroup Genlist
 */
EAPI Eina_Bool elm_genlist_item_flip_get(const Elm_Genlist_Item *obj);

/**
 * Set the genlist item's select mode.
 *
 * elm_genlist_select_mode_set() changes item's select mode.
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
 * @see elm_genlist_item_select_mode_get()
 *
 * @ingroup Genlist
 *
 * @param[in] mode The selected mode
 */
EAPI void elm_genlist_item_select_mode_set(Elm_Genlist_Item *obj, Elm_Object_Select_Mode mode);

/**
 * Get the genlist item's select mode.
 *
 * @return The select mode
 * (If getting mode fails, it returns ELM_OBJECT_SELECT_MODE_MAX)
 *
 * @see elm_genlist_item_select_mode_set()
 *
 * @ingroup Genlist
 */
EAPI Elm_Object_Select_Mode elm_genlist_item_select_mode_get(const Elm_Genlist_Item *obj);

/**
 * Get the Item's Type
 *
 * @return The item type.
 *
 * This function returns the item's type. Normally the item's type.
 * If it failed, return value is ELM_GENLIST_ITEM_MAX
 *
 * @ingroup Genlist
 */
EAPI Elm_Genlist_Item_Type elm_genlist_item_type_get(const Elm_Genlist_Item *obj);

/**
 * Get the number of subitems of a given item
 *
 * This returns the number of subitems that an item possesses.
 *
 * @since 1.9
 * @ingroup Genlist
 * 
 */
EAPI unsigned int elm_genlist_item_subitems_count(Elm_Genlist_Item *obj);

/**
 * Remove all sub-items (children) of the given item
 *
 * @param it The item
 *
 * This removes all items that are children (and their descendants) of the
 * given item @p it.
 *
 * @see elm_genlist_clear()
 * @see elm_object_item_del()
 *
 * @ingroup Genlist
 * 
 */
EAPI void elm_genlist_item_subitems_clear(Elm_Genlist_Item *obj);

/**
 * Promote an item to the top of the list
 *
 * @param it The item
 *
 * @ingroup Genlist
 * 
 */
EAPI void elm_genlist_item_promote(Elm_Genlist_Item *obj);

/**
 * Demote an item to the end of the list
 *
 * @param it The item
 *
 * @ingroup Genlist
 * 
 */
EAPI void elm_genlist_item_demote(Elm_Genlist_Item *obj);

/**
 * Show the portion of a genlist's internal list containing a given
 * item, immediately.
 *
 * This causes genlist to jump to the given item @p it and show it (by
 * jumping to that position), if it is not fully visible.
 *
 * @see elm_genlist_item_bring_in()
 *
 * @ingroup Genlist
 * 
 *
 * @param[in] type The position to bring in, the given item to.
@ref Elm_Genlist_Item_Scrollto_Type
 */
EAPI void elm_genlist_item_show(Elm_Genlist_Item *obj, Elm_Genlist_Item_Scrollto_Type type);

/**
 * Animatedly bring in, to the visible area of a genlist, a given
 * item on it.
 *
 * This causes genlist to jump to the given item @p it and show it (by
 * animatedly scrolling), if it is not fully visible.
 * This may use animation and take a some time to do so.
 *
 * @see elm_genlist_item_show()
 *
 * @ingroup Genlist
 * 
 *
 * @param[in] type The position to bring in, the given item to.
@ref Elm_Genlist_Item_Scrollto_Type
 */
EAPI void elm_genlist_item_bring_in(Elm_Genlist_Item *obj, Elm_Genlist_Item_Scrollto_Type type);

/**
 * Unset all contents fetched by the item class
 *
 * This instructs genlist to release references to contents in the item,
 * meaning that they will no longer be managed by genlist and are
 * floating "orphans" that can be re-used elsewhere if the user wants
 * to.
 *
 * @ingroup Genlist
 * 
 *
 * @param[out] l The contents list to return
 */
EAPI void elm_genlist_item_all_contents_unset(Elm_Genlist_Item *obj, Eina_List **l);

/**
 * Update all the contents of an item
 *
 * This updates an item by calling all the item class functions again
 * to get the contents, texts and states. Use this when the original
 * item data has changed and the changes are desired to be reflected.
 *
 * Use elm_genlist_realized_items_update() to update all already realized
 * items.
 *
 * @note This also updates internal genlist item object(edje_object as of now).
 * So when this is called between mouse down and mouse up, mouse up event will
 * be ignored because edje_object is deleted and created again by this API. If
 * you want to avoid this, please use @ref elm_genlist_item_fields_update.
 *
 * @see elm_genlist_realized_items_update()
 *
 * @ingroup Genlist
 * 
 */
EAPI void elm_genlist_item_update(Elm_Genlist_Item *obj);

/**
 * Update the part of an item
 *
 * This updates an item's part by calling item's fetching functions again
 * to get the contents, texts and states. Use this when the original
 * item data has changed and the changes are desired to be reflected.
 * Second parts argument is used for globbing to match '*', '?', and '.'
 * It can be used at updating multi fields.
 *
 * Use elm_genlist_realized_items_update() to update an item's all
 * property.
 *
 * @see elm_genlist_item_update()
 *
 * @ingroup Genlist
 * 
 *
 * @param[in] parts The name of item's part
 * @param[in] itf The type of item's part type
 */
EAPI void elm_genlist_item_fields_update(Elm_Genlist_Item *obj, const char *parts, Elm_Genlist_Item_Field_Type itf);

/**
 * Update the item class of an item
 *
 * This sets another class of the item, changing the way that it is
 * displayed. After changing the item class, elm_genlist_item_update() is
 * called on the item @p it.
 *
 * @ingroup Genlist
 * 
 *
 * @param[in] itc The item class for the item
 */
EAPI void elm_genlist_item_item_class_update(Elm_Genlist_Item *obj, const Elm_Genlist_Item_Class *itc);

/**
 * Activate a genlist mode on an item
 *
 * A genlist mode is a different way of selecting an item. Once a mode is
 * activated on an item, any other selected item is immediately unselected.
 * This feature provides an easy way of implementing a new kind of animation
 * for selecting an item, without having to entirely rewrite the item style
 * theme. However, the elm_genlist_selected_* API can't be used to get what
 * item is activate for a mode.
 *
 * The current item style will still be used, but applying a genlist mode to
 * an item will select it using a different kind of animation.
 *
 * The current active item for a mode can be found by
 * elm_genlist_decorated_item_get().
 *
 * The characteristics of genlist mode are:
 * - Only one mode can be active at any time, and for only one item.
 * - Genlist handles deactivating other items when one item is activated.
 * - A mode is defined in the genlist theme (edc), and more modes can easily
 * be added.
 * - A mode style and the genlist item style are different things. They
 * can be combined to provide a default style to the item, with some kind
 * of animation for that item when the mode is activated.
 *
 * When a mode is activated on an item, a new view for that item is created.
 * The theme of this mode defines the animation that will be used to transit
 * the item from the old view to the new view. This second (new) view will be
 * active for that item while the mode is active on the item, and will be
 * destroyed after the mode is totally deactivated from that item.
 *
 * @see elm_genlist_mode_get()
 * @see elm_genlist_decorated_item_get()
 *
 * @ingroup Genlist
 * 
 *
 * @param[in] decorate_it_type Mode name
 * @param[in] decorate_it_set Boolean to define set or unset mode.
 */
EAPI void elm_genlist_item_decorate_mode_set(Elm_Genlist_Item *obj, const char *decorate_it_type, Eina_Bool decorate_it_set);

#endif
