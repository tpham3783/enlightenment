#ifndef _ELM_TOOLBAR_ITEM_EO_LEGACY_H_
#define _ELM_TOOLBAR_ITEM_EO_LEGACY_H_

#ifndef _ELM_TOOLBAR_ITEM_EO_CLASS_TYPE
#define _ELM_TOOLBAR_ITEM_EO_CLASS_TYPE

typedef Eo Elm_Toolbar_Item;

#endif

#ifndef _ELM_TOOLBAR_ITEM_EO_TYPES
#define _ELM_TOOLBAR_ITEM_EO_TYPES

/** Defines where to position the item in the toolbar.
 *
 * @ingroup Elm_Toolbar_Item
 */
typedef enum
{
  ELM_TOOLBAR_ITEM_SCROLLTO_NONE = 0, /** no scrollto */
  ELM_TOOLBAR_ITEM_SCROLLTO_IN = 1 /* 1 << 0 */, /** to the nearest viewport */
  ELM_TOOLBAR_ITEM_SCROLLTO_FIRST = 2 /* 1 << 1 */, /** to the first of
                                                     * viewport */
  ELM_TOOLBAR_ITEM_SCROLLTO_MIDDLE = 4 /* 1 << 2 */, /** to the middle of
                                                      * viewport */
  ELM_TOOLBAR_ITEM_SCROLLTO_LAST = 8 /* 1 << 3 */ /** to the last of viewport
                                                   */
} Elm_Toolbar_Item_Scrollto_Type;


#endif

/**
 * Get the item before @p item in toolbar.
 *
 * @note If it is the first item, @c NULL will be returned.
 *
 * @see elm_toolbar_item_prepend()
 *
 * @ingroup Toolbar
 */
EAPI Elm_Object_Item *elm_toolbar_item_prev_get(const Elm_Toolbar_Item *obj);

/**
 * Get the item after @p item in toolbar.
 *
 * @note If it is the last item, @c NULL will be returned.
 *
 * @see elm_toolbar_item_append()
 *
 * @ingroup Toolbar
 */
EAPI Elm_Object_Item *elm_toolbar_item_next_get(const Elm_Toolbar_Item *obj);

/**
 * Set the priority of a toolbar item.
 *
 * This is used only when the toolbar shrink mode is set
 * to #ELM_TOOLBAR_SHRINK_MENU or #ELM_TOOLBAR_SHRINK_HIDE.
 * When space is less than required, items with low priority
 * will be removed from the toolbar and added to a dynamically-created menu,
 * while items with higher priority will remain on the toolbar,
 * with the same order they were added.
 *
 * @see elm_toolbar_item_priority_get()
 *
 * @ingroup Toolbar
 *
 * @param[in] priority The @p item priority. The default is zero for set and 0 is returned on failure.
 */
EAPI void elm_toolbar_item_priority_set(Elm_Toolbar_Item *obj, int priority);

/**
 * Get the priority of a toolbar item.
 *
 * @see elm_toolbar_item_priority_set() for details.
 *
 * @ingroup Toolbar
 */
EAPI int elm_toolbar_item_priority_get(const Elm_Toolbar_Item *obj);

/**
 * Set the selected state of an item.
 *
 * This sets the selected state of the given item @p it.
 * @c EINA_TRUE for selected, @c EINA_FALSE for not selected.
 *
 * If a new item is selected the previously selected will be unselected.
 * Previously selected item can be get with function
 * elm_toolbar_selected_item_get().
 *
 * Selected items will be highlighted.
 *
 * @see elm_toolbar_item_selected_get()
 * @see elm_toolbar_selected_item_get()
 *
 * @ingroup Toolbar
 *
 * @param[in] selected The selected state
 */
EAPI void elm_toolbar_item_selected_set(Elm_Toolbar_Item *obj, Eina_Bool selected);

/**
 * Get whether the @p item is selected or not.
 *
 * @return @c EINA_TRUE means item is selected. @c EINA_FALSE indicates
 * it's not. If @p obj is @c NULL, @c EINA_FALSE is returned.
 *
 * @see elm_toolbar_selected_item_set() for details.
 * @see elm_toolbar_item_selected_get()
 *
 * @ingroup Toolbar
 */
EAPI Eina_Bool elm_toolbar_item_selected_get(const Elm_Toolbar_Item *obj);

/**
 * Set the icon associated with @p item.
 *
 * @param icon A string with icon name or the absolute path of an image file.
 *
 * Toolbar will load icon image from fdo or current theme.
 * This behavior can be set by elm_toolbar_icon_order_lookup_set() function.
 * If an absolute path is provided it will load it direct from a file.
 *
 * @note This function does not accept relative icon path.
 *
 * @see elm_toolbar_icon_order_lookup_set()
 * @see elm_toolbar_icon_order_lookup_get()
 *
 * @ingroup Toolbar
 *
 * @param[in] icon No description supplied.
 */
EAPI void elm_toolbar_item_icon_set(Elm_Toolbar_Item *obj, const char *icon);

/**
 * Get the string used to set the icon of @p item.
 *
 * @return The string associated with the icon object.
 *
 * @see elm_toolbar_item_icon_set() for details.
 *
 * @ingroup Toolbar
 */
EAPI const char *elm_toolbar_item_icon_get(const Elm_Toolbar_Item *obj);

/**
 * Get the real Evas(Edje) object created to implement the view of a given
 * toolbar @p item.
 *
 * @ingroup Toolbar
 */
EAPI Evas_Object *elm_toolbar_item_object_get(const Elm_Toolbar_Item *obj);

/**
 * Get the icon object of @p item.
 *
 * @see elm_toolbar_item_icon_set(), elm_toolbar_item_icon_file_set(),
 * or elm_toolbar_item_icon_memfile_set() for details.
 *
 * @ingroup Toolbar
 */
EAPI Evas_Object *elm_toolbar_item_icon_object_get(const Elm_Toolbar_Item *obj);

/**
 * Set or unset item as a separator.
 *
 * @param separator @c EINA_TRUE to set item @p item as separator or
 * @c EINA_FALSE to unset, i.e., item will be used as a regular item.
 *
 * Items aren't set as separator by default.
 *
 * If set as separator it will display separator theme, so won't display
 * icons or label.
 *
 * @see elm_toolbar_item_separator_get()
 *
 * @ingroup Toolbar
 *
 * @param[in] separator No description supplied.
 */
EAPI void elm_toolbar_item_separator_set(Elm_Toolbar_Item *obj, Eina_Bool separator);

/**
 * Get a value whether item is a separator or not.
 *
 * @return @c EINA_TRUE means item @p it is a separator. @c EINA_FALSE
 * indicates it's not. If @p it is @c NULL, @c EINA_FALSE is returned.
 *
 * @see elm_toolbar_item_separator_set() for details.
 *
 * @ingroup Toolbar
 */
EAPI Eina_Bool elm_toolbar_item_separator_get(const Elm_Toolbar_Item *obj);

/**
 * Get toolbar item's menu.
 *
 * If @p item wasn't set as menu item with elm_toolbar_item_menu_set(),
 * this function will set it.
 *
 * @see elm_toolbar_item_menu_set() for details.
 *
 * @ingroup Toolbar
 */
EAPI Evas_Object *elm_toolbar_item_menu_get(const Elm_Toolbar_Item *obj);

/**
 * Set @p state as the current state of @p it.
 *
 * @param state The state to use.
 * @return @c EINA_TRUE on success or @c EINA_FALSE on failure.
 *
 * If @p state is @c NULL, it won't select any state and the default item's
 * icon and label will be used. It's the same behaviour than
 * elm_toolbar_item_state_unset().
 *
 * @see elm_toolbar_item_state_unset()
 *
 * @ingroup Toolbar
 *
 * @param[in] state No description supplied.
 */
EAPI Eina_Bool elm_toolbar_item_state_set(Elm_Toolbar_Item *obj, Elm_Toolbar_Item_State *state);

/**
 * Get the current state of @p it.
 *
 * @return The selected state or @c NULL if none is selected or on failure.
 *
 * @see elm_toolbar_item_state_set() for details.
 * @see elm_toolbar_item_state_unset()
 * @see elm_toolbar_item_state_add()
 *
 * @ingroup Toolbar
 */
EAPI Elm_Toolbar_Item_State *elm_toolbar_item_state_get(const Elm_Toolbar_Item *obj);

/**
 * Set the icon associated with @p item to an image in a binary buffer.
 *
 * @note The icon image set by this function can be changed by
 * elm_toolbar_item_icon_set().
 *
 * @ingroup Toolbar
 * 
 *
 * @param[in] img The binary data that will be used as an image
 * @param[in] size The size of binary data @p img
 * @param[in] format Optional format of @p img to pass to the image loader
 * @param[in] key Optional key of @p img to pass to the image loader (eg. if @p img is an edje file)
 */
EAPI Eina_Bool elm_toolbar_item_icon_memfile_set(Elm_Toolbar_Item *obj, const void *img, size_t size, const char *format, const char *key);

/**
 * Set the icon associated with @p item to an image in a binary buffer.
 *
 * @note The icon image set by this function can be changed by
 * elm_toolbar_item_icon_set().
 *
 * @ingroup Toolbar
 * 
 *
 * @param[in] file The file that contains the image
 * @param[in] key Optional key of @p img to pass to the image loader (eg. if @p img is an edje file)
 */
EAPI Eina_Bool elm_toolbar_item_icon_file_set(Elm_Toolbar_Item *obj, const char *file, const char *key);

/**
 * Add a new state to @p item.
 *
 * Toolbar will load icon image from fdo or current theme.
 * This behavior can be set by elm_toolbar_icon_order_lookup_set() function.
 * If an absolute path is provided it will load it direct from a file.
 *
 * States created with this function can be removed with
 * elm_toolbar_item_state_del().
 *
 * @see elm_toolbar_item_state_del()
 * @see elm_toolbar_item_state_sel()
 * @see elm_toolbar_item_state_get()
 *
 * @ingroup Toolbar
 * 
 *
 * @param[in] icon A string with icon name or the absolute path of an image file.
 * @param[in] label The label of the new state.
 * @param[in] func The function to call when the item is clicked when this * state is selected.
 * @param[in] data The data to associate with the state.
 */
EAPI Elm_Toolbar_Item_State *elm_toolbar_item_state_add(Elm_Toolbar_Item *obj, const char *icon, const char *label, Evas_Smart_Cb func, const void *data);

/**
 * Delete a previously added state to @p item.
 *
 * @see elm_toolbar_item_state_add()
 * 
 *
 * @param[in] state The state to be deleted.
 */
EAPI Eina_Bool elm_toolbar_item_state_del(Elm_Toolbar_Item *obj, Elm_Toolbar_Item_State *state);

/**
 * Get the state after selected state in toolbar's @p item.
 *
 * If last state is selected, this function will return first state.
 *
 * @see elm_toolbar_item_state_set()
 * @see elm_toolbar_item_state_add()
 *
 * @ingroup Toolbar
 * 
 */
EAPI Elm_Toolbar_Item_State *elm_toolbar_item_state_next(Elm_Toolbar_Item *obj);

/**
 * Get the state before selected state in toolbar's @p item.
 *
 *
 * If first state is selected, this function will return last state.
 *
 * @see elm_toolbar_item_state_set()
 * @see elm_toolbar_item_state_add()
 *
 * @ingroup Toolbar
 * 
 */
EAPI Elm_Toolbar_Item_State *elm_toolbar_item_state_prev(Elm_Toolbar_Item *obj);

/**
 * Show a specific item, when the toolbar can be scrolled.
 *
 * see elm_toolbar_item_bring_in()
 *
 * @since 1.8
 * @ingroup Toolbar
 * 
 *
 * @param[in] scrollto the position the item should appear at
 */
EAPI void elm_toolbar_item_show(Elm_Toolbar_Item *obj, Elm_Toolbar_Item_Scrollto_Type scrollto);

/**
 * Show a specific item with scroll animation, when the toolbar can be scrolled.
 *
 * see elm_toolbar_item_show()
 *
 * @since 1.8
 * @ingroup Toolbar
 * 
 *
 * @param[in] scrollto the position the item should appear at
 */
EAPI void elm_toolbar_item_bring_in(Elm_Toolbar_Item *obj, Elm_Toolbar_Item_Scrollto_Type scrollto);

/**
 * Set whether the toolbar item opens a menu.
 *
 * A toolbar item can be set to be a menu, using this function.
 *
 * Once it is set to be a menu, it can be manipulated through the
 * menu-like function elm_toolbar_menu_parent_set() and the other
 * elm_menu functions, using the Evas_Object @c menu returned by
 * elm_toolbar_item_menu_get().
 *
 * So, items to be displayed in this item's menu should be added with
 * elm_menu_item_add().
 *
 * The following code exemplifies the most basic usage:
 * @code
 * tb = elm_toolbar_add(win)
 * item = elm_toolbar_item_append(tb, "refresh", "Menu", NULL, NULL);
 * elm_toolbar_item_menu_set(item, EINA_TRUE);
 * elm_toolbar_menu_parent_set(tb, win);
 * menu = elm_toolbar_item_menu_get(item);
 * elm_menu_item_add(menu, NULL, "edit-cut", "Cut", NULL, NULL);
 * menu_item = elm_menu_item_add(menu, NULL, "edit-copy", "Copy", NULL,
 * NULL);
 * @endcode
 *
 * @see elm_toolbar_item_menu_get()
 *
 * @ingroup Toolbar
 * 
 *
 * @param[in] menu If @c EINA_TRUE, @p item will opens a menu when selected.
 */
EAPI void elm_toolbar_item_menu_set(Elm_Toolbar_Item *obj, Eina_Bool menu);

#endif
