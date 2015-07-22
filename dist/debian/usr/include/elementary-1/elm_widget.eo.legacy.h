#ifndef _ELM_WIDGET_EO_LEGACY_H_
#define _ELM_WIDGET_EO_LEGACY_H_

#ifndef _ELM_WIDGET_EO_CLASS_TYPE
#define _ELM_WIDGET_EO_CLASS_TYPE

typedef Eo Elm_Widget;

#endif

#ifndef _ELM_WIDGET_EO_TYPES
#define _ELM_WIDGET_EO_TYPES


#endif

/**
 * 'Virtual' function handling passing focus to sub-objects given a direction, in degrees.
 * 
 *
 * @param[in] base No description supplied.
 * @param[in] degree No description supplied.
 * @param[out] direction No description supplied.
 * @param[out] weight No description supplied.
 */
EAPI Eina_Bool elm_widget_focus_direction(Elm_Widget *obj, const Evas_Object *base, double degree, Evas_Object **direction, double *weight);

/**
 * 'Virtual' function handling passing focus to sub-objects.
 * 
 *
 * @param[in] dir No description supplied.
 * @param[out] next No description supplied.
 */
EAPI Eina_Bool elm_widget_focus_next(Elm_Widget *obj, Elm_Focus_Direction dir, Evas_Object **next);

/**
 * No description supplied by the EAPI.
 *
 * @param[in] focus No description supplied.
 */
EAPI void elm_widget_focus_set(Elm_Widget *obj, Eina_Bool focus);

/**
 * No description supplied by the EAPI.
 */
EAPI Eina_Bool elm_widget_focus_get(const Elm_Widget *obj);

/**
 * No description supplied by the EAPI.
 *
 * @param[in] lock No description supplied.
 */
EAPI void elm_widget_drag_lock_y_set(Elm_Widget *obj, Eina_Bool lock);

/**
 * No description supplied by the EAPI.
 */
EAPI Eina_Bool elm_widget_drag_lock_y_get(const Elm_Widget *obj);

/**
 * This function set the widget focus highlight style.
 *
 * @param[in] style No description supplied.
 */
EAPI Eina_Bool elm_widget_focus_highlight_style_set(Elm_Widget *obj, const char *style);

/**
 * This function returns the widget focus highlight style.
 */
EAPI const char *elm_widget_focus_highlight_style_get(const Elm_Widget *obj);

/**
 * No description supplied by the EAPI.
 *
 * @param[in] tree_unfocusable No description supplied.
 */
EAPI void elm_widget_tree_unfocusable_set(Elm_Widget *obj, Eina_Bool tree_unfocusable);

/**
 * No description supplied by the EAPI.
 */
EAPI Eina_Bool elm_widget_tree_unfocusable_get(const Elm_Widget *obj);

/**
 * Sets the widget's mirrored mode.
 *
 * @param[in] mirrored No description supplied.
 */
EAPI void elm_widget_mirrored_set(Elm_Widget *obj, Eina_Bool mirrored);

/**
 * Returns the widget's mirrored mode.
 */
EAPI Eina_Bool elm_widget_mirrored_get(const Elm_Widget *obj);

/**
 * No description supplied by the EAPI.
 *
 * @param[in] th No description supplied.
 */
EAPI void elm_widget_theme_set(Elm_Widget *obj, Elm_Theme *th);

/**
 * No description supplied by the EAPI.
 */
EAPI Elm_Theme *elm_widget_theme_get(const Elm_Widget *obj);

/**
 * No description supplied by the EAPI.
 *
 * @param[in] disabled No description supplied.
 */
EAPI void elm_widget_disabled_set(Elm_Widget *obj, Eina_Bool disabled);

/**
 * No description supplied by the EAPI.
 */
EAPI Eina_Bool elm_widget_disabled_get(const Elm_Widget *obj);

/**
 * No description supplied by the EAPI.
 *
 * @param[in] ignore No description supplied.
 */
EAPI void elm_widget_highlight_ignore_set(Elm_Widget *obj, Eina_Bool ignore);

/**
 * No description supplied by the EAPI.
 */
EAPI Eina_Bool elm_widget_highlight_ignore_get(const Elm_Widget *obj);

/**
 * Sets the widget's mirrored mode setting.
 *
 * @param[in] automatic No description supplied.
 */
EAPI void elm_widget_mirrored_automatic_set(Elm_Widget *obj, Eina_Bool automatic);

/**
 * Returns the widget's mirrored mode setting.
 */
EAPI Eina_Bool elm_widget_mirrored_automatic_get(const Elm_Widget *obj);

/**
 * No description supplied by the EAPI.
 *
 * @param[in] disabled No description supplied.
 */
EAPI void elm_widget_orientation_mode_disabled_set(Elm_Widget *obj, Eina_Bool disabled);

/**
 * No description supplied by the EAPI.
 */
EAPI Eina_Bool elm_widget_orientation_mode_disabled_get(const Elm_Widget *obj);

/**
 * No description supplied by the EAPI.
 *
 * @param[in] style No description supplied.
 */
EAPI Eina_Bool elm_widget_style_set(Elm_Widget *obj, const char *style);

/**
 * No description supplied by the EAPI.
 */
EAPI const char *elm_widget_style_get(const Elm_Widget *obj);

/**
 * No description supplied by the EAPI.
 *
 * @param[in] scale No description supplied.
 */
EAPI void elm_widget_scale_set(Elm_Widget *obj, double scale);

/**
 * No description supplied by the EAPI.
 */
EAPI double elm_widget_scale_get(const Elm_Widget *obj);

/**
 * No description supplied by the EAPI.
 *
 * @param[in] objs No description supplied.
 */
EAPI void elm_widget_focus_custom_chain_set(Elm_Widget *obj, Eina_List *objs);

/**
 * No description supplied by the EAPI.
 */
EAPI const Eina_List *elm_widget_focus_custom_chain_get(const Elm_Widget *obj);

/**
 * No description supplied by the EAPI.
 *
 * @param[in] can_focus No description supplied.
 */
EAPI void elm_widget_can_focus_set(Elm_Widget *obj, Eina_Bool can_focus);

/**
 * No description supplied by the EAPI.
 */
EAPI Eina_Bool elm_widget_can_focus_get(const Elm_Widget *obj);

/**
 * No description supplied by the EAPI.
 *
 * @param[in] highlight No description supplied.
 */
EAPI void elm_widget_highlight_in_theme_set(Elm_Widget *obj, Eina_Bool highlight);

/**
 * No description supplied by the EAPI.
 */
EAPI Eina_Bool elm_widget_highlight_in_theme_get(const Elm_Widget *obj);

/**
 * No description supplied by the EAPI.
 *
 * @param[in] parent No description supplied.
 */
EAPI void elm_widget_parent_set(Elm_Widget *obj, Evas_Object *parent);

/**
 * No description supplied by the EAPI.
 */
EAPI Evas_Object *elm_widget_parent_get(const Elm_Widget *obj);

/**
 * No description supplied by the EAPI.
 *
 * @param[in] txt No description supplied.
 */
EAPI void elm_widget_access_info_set(Elm_Widget *obj, const char *txt);

/**
 * No description supplied by the EAPI.
 */
EAPI const char *elm_widget_access_info_get(const Elm_Widget *obj);

/**
 * No description supplied by the EAPI.
 *
 * @param[in] lock No description supplied.
 */
EAPI void elm_widget_drag_lock_x_set(Elm_Widget *obj, Eina_Bool lock);

/**
 * No description supplied by the EAPI.
 */
EAPI Eina_Bool elm_widget_drag_lock_x_get(const Elm_Widget *obj);

/**
 * No description supplied by the EAPI.
 *
 * @param[in] highlight highlight
 */
EAPI void elm_widget_access_highlight_in_theme_set(Elm_Widget *obj, Eina_Bool highlight);

/**
 * No description supplied by the EAPI.
 */
EAPI Eina_Bool elm_widget_access_highlight_in_theme_get(const Elm_Widget *obj);

/**
 * No description supplied by the EAPI.
 *
 * @param[in] highlighted No description supplied.
 */
EAPI void elm_widget_parent_highlight_set(Elm_Widget *obj, Eina_Bool highlighted);

/**
 * No description supplied by the EAPI.
 *
 * @param[in] edj No description supplied.
 * @param[in] wname No description supplied.
 * @param[in] welement No description supplied.
 * @param[in] wstyle No description supplied.
 */
EAPI Eina_Bool elm_widget_theme_object_set(Elm_Widget *obj, Evas_Object *edj, const char *wname, const char *welement, const char *wstyle);

/**
 * No description supplied by the EAPI.
 *
 * @param[in] sobj No description supplied.
 */
EAPI void elm_widget_hover_object_set(Elm_Widget *obj, Evas_Object *sobj);

/**
 * No description supplied by the EAPI.
 *
 * @param[in] dispmode No description supplied.
 */
EAPI void elm_widget_display_mode_set(Elm_Widget *obj, Evas_Display_Mode dispmode);

/**
 * No description supplied by the EAPI.
 *
 * @param[in] func No description supplied.
 * @param[in] data No description supplied.
 */
EAPI void elm_widget_on_show_region_hook_set(Elm_Widget *obj, region_hook_func_type func, void *data);

/**
 * No description supplied by the EAPI.
 *
 * @param[in] part No description supplied.
 * @param[in] domain No description supplied.
 * @param[in] translatable No description supplied.
 */
EAPI void elm_widget_domain_part_text_translatable_set(Elm_Widget *obj, const char *part, const char *domain, Eina_Bool translatable);

/**
 * No description supplied by the EAPI.
 *
 * @param[in] rotation No description supplied.
 */
EAPI void elm_widget_orientation_set(Elm_Widget *obj, int rotation);

/**
 * No description supplied by the EAPI.
 *
 * @param[in] sobj No description supplied.
 * @param[in] sub_obj No description supplied.
 */
EAPI void elm_widget_resize_object_set(Elm_Widget *obj, Evas_Object *sobj, Eina_Bool sub_obj);

/**
 * No description supplied by the EAPI.
 *
 * @param[in] part No description supplied.
 * @param[in] domain No description supplied.
 * @param[in] label No description supplied.
 */
EAPI void elm_widget_domain_translatable_part_text_set(Elm_Widget *obj, const char *part, const char *domain, const char *label);

/**
 * Function to operate on a given widget's scrollabe children when necessary.
 * @warning free the returned list with eina_list_free().
 */
EAPI Eina_List *elm_widget_scrollable_children_get(const Elm_Widget *obj) EINA_WARN_UNUSED_RESULT;

/**
 * No description supplied by the EAPI.
 */
EAPI int elm_widget_scroll_hold_get(const Elm_Widget *obj);

/**
 * No description supplied by the EAPI.
 */
EAPI int elm_widget_drag_child_locked_y_get(const Elm_Widget *obj);

/**
 * Set enable or disable item loop feature.
 *
 * @param[in] enable No description supplied.
 */
EAPI void elm_widget_item_loop_enabled_set(Elm_Widget *obj, Eina_Bool enable);

/**
 * Get the value whether item loop feature is enabled or not.
 */
EAPI Eina_Bool elm_widget_item_loop_enabled_get(const Elm_Widget *obj);

/**
 * No description supplied by the EAPI.
 */
EAPI Eina_Bool elm_widget_child_can_focus_get(const Elm_Widget *obj);

/**
 * No description supplied by the EAPI.
 */
EAPI int elm_widget_scroll_freeze_get(const Elm_Widget *obj);

/**
 * No description supplied by the EAPI.
 *
 * @param[out] x No description supplied.
 * @param[out] y No description supplied.
 * @param[out] w No description supplied.
 * @param[out] h No description supplied.
 */
EAPI Eina_Bool elm_widget_focus_region_get(const Elm_Widget *obj, Evas_Coord *x, Evas_Coord *y, Evas_Coord *w, Evas_Coord *h);

/**
 * No description supplied by the EAPI.
 */
EAPI Evas_Object *elm_widget_top_get(const Elm_Widget *obj);

/**
 * No description supplied by the EAPI.
 */
EAPI unsigned int elm_widget_focus_order_get(const Elm_Widget *obj);

/**
 * No description supplied by the EAPI.
 */
EAPI int elm_widget_drag_child_locked_x_get(const Elm_Widget *obj);

/**
 * No description supplied by the EAPI.
 */
EAPI Eina_List *elm_widget_can_focus_child_list_get(const Elm_Widget *obj) EINA_WARN_UNUSED_RESULT;

/**
 * Get the focused widget item.
 */
EAPI Elm_Object_Item *elm_widget_focused_item_get(const Elm_Widget *obj);

/**
 * No description supplied by the EAPI.
 *
 * @param[out] horiz No description supplied.
 * @param[out] vert No description supplied.
 */
EAPI void elm_widget_parents_bounce_get(const Elm_Widget *obj, Eina_Bool *horiz, Eina_Bool *vert);

/**
 * No description supplied by the EAPI.
 */
EAPI Eina_Bool elm_widget_highlight_get(const Elm_Widget *obj);

/**
 * No description supplied by the EAPI.
 */
EAPI Evas_Object *elm_widget_focused_object_get(const Elm_Widget *obj);

/**
 * No description supplied by the EAPI.
 *
 * @param[in] parent No description supplied.
 */
EAPI void elm_widget_parent2_set(Elm_Widget *obj, Evas_Object *parent);

/**
 * No description supplied by the EAPI.
 */
EAPI Evas_Object *elm_widget_parent2_get(const Elm_Widget *obj);

/**
 * No description supplied by the EAPI.
 *
 * @param[in] part No description supplied.
 * @param[in] label No description supplied.
 */
EAPI void elm_widget_part_text_set(Elm_Widget *obj, const char * part, const char *label);

/**
 * No description supplied by the EAPI.
 *
 * @param[in] part No description supplied.
 */
EAPI const char *elm_widget_part_text_get(const Elm_Widget *obj, const char * part);

/**
 * Sets the widget's focus move policy.
 *
 * @param[in] policy Object's focus move policy.
 */
EAPI void elm_widget_focus_move_policy_set(Elm_Widget *obj, Elm_Focus_Move_Policy policy);

/**
 * Returns the widget's focus move policy.
 */
EAPI Elm_Focus_Move_Policy elm_widget_focus_move_policy_get(const Elm_Widget *obj);

/**
 * No description supplied by the EAPI.
 * 
 *
 * @param[out] newest_focus_order No description supplied.
 * @param[in] can_focus_only No description supplied.
 */
EAPI Evas_Object *elm_widget_newest_focus_order_get(const Elm_Widget *obj, unsigned int *newest_focus_order, Eina_Bool can_focus_only);

/**
 * No description supplied by the EAPI.
 * 
 */
EAPI void elm_widget_scroll_hold_push(Elm_Widget *obj);

/**
 * No description supplied by the EAPI.
 * 
 *
 * @param[in] cur No description supplied.
 */
EAPI void elm_widget_cursor_add(Elm_Widget *obj, Elm_Cursor *cur);

/**
 * No description supplied by the EAPI.
 * 
 *
 * @param[in] next No description supplied.
 * @param[in] dir No description supplied.
 */
EAPI void elm_widget_focus_next_object_set(Elm_Widget *obj, Evas_Object *next, Elm_Focus_Direction dir);

/**
 * No description supplied by the EAPI.
 * 
 *
 * @param[in] dir No description supplied.
 */
EAPI Evas_Object *elm_widget_focus_next_object_get(const Elm_Widget *obj, Elm_Focus_Direction dir);

/**
 * No description supplied by the EAPI.
 * 
 */
EAPI void elm_widget_focus_tree_unfocusable_handle(Elm_Widget *obj);

/**
 * No description supplied by the EAPI.
 * 
 *
 * @param[in] child No description supplied.
 * @param[in] relative_child No description supplied.
 */
EAPI void elm_widget_focus_custom_chain_prepend(Elm_Widget *obj, Evas_Object *child, Evas_Object *relative_child);

/**
 * No description supplied by the EAPI.
 * 
 *
 * @param[in] part No description supplied.
 * @param[in] text No description supplied.
 */
EAPI const char *elm_widget_part_text_translate(Elm_Widget *obj, const char *part, const char *text);

/**
 * Get the focus highlight geometry of widget.
 * 
 *
 * @param[in] x No description supplied.
 * @param[in] y No description supplied.
 * @param[in] w No description supplied.
 * @param[in] h No description supplied.
 */
EAPI void elm_widget_focus_highlight_geometry_get(const Elm_Widget *obj, Evas_Coord *x, Evas_Coord *y, Evas_Coord *w, Evas_Coord *h);

/**
 * 'Virtual' function handling sub objects being added.
 * 
 *
 * @param[in] sobj No description supplied.
 */
EAPI Eina_Bool elm_widget_sub_object_add(Elm_Widget *obj, Evas_Object *sobj);

/**
 * 'Virtual' function handling input events on the widget.
 * 
 *
 * @param[in] source No description supplied.
 * @param[in] type No description supplied.
 * @param[in] event_info No description supplied.
 */
EAPI Eina_Bool elm_widget_event(Elm_Widget *obj, Evas_Object *source, Evas_Callback_Type type, void *event_info);

/**
 * No description supplied by the EAPI.
 * 
 *
 * @param[in] func No description supplied.
 * @param[in] data No description supplied.
 */
EAPI void elm_widget_event_callback_add(Elm_Widget *obj, Elm_Event_Cb func, const void *data);

/**
 * No description supplied by the EAPI.
 * 
 *
 * @param[in] cur No description supplied.
 */
EAPI void elm_widget_cursor_del(Elm_Widget *obj, Elm_Cursor *cur);

/**
 * No description supplied by the EAPI.
 * 
 *
 * @param[in] func No description supplied.
 * @param[in] data No description supplied.
 */
EAPI void *elm_widget_event_callback_del(Elm_Widget *obj, Elm_Event_Cb func, const void *data);

/**
 * 'Virtual' function handling focus in/out events on the widget.
 * return EINA_TRUE if this widget can handle focus, EINA_FALSE otherwise
 * 
 */
EAPI Eina_Bool elm_widget_on_focus(Elm_Widget *obj);

/**
 * 'Virtual' function returning an inner area of a widget that should be brought into the visible area of a broader viewport, may this context arise.
 * 
 *
 * @param[out] x No description supplied.
 * @param[out] y No description supplied.
 * @param[out] w No description supplied.
 * @param[out] h No description supplied.
 */
EAPI Eina_Bool elm_widget_on_focus_region(Elm_Widget *obj, Evas_Coord *x, Evas_Coord *y, Evas_Coord *w, Evas_Coord *h);

/**
 * No description supplied by the EAPI.
 * 
 *
 * @param[in] dir No description supplied.
 */
EAPI void elm_widget_focus_cycle(Elm_Widget *obj, Elm_Focus_Direction dir);

/**
 * No description supplied by the EAPI.
 * 
 *
 * @param[in] type No description supplied.
 * @param[in] event_info No description supplied.
 * @param[in] event_flags No description supplied.
 */
EAPI Eina_Bool elm_widget_event_propagate(Elm_Widget *obj, Evas_Callback_Type type, void *event_info, Evas_Event_Flags *event_flags);

/**
 * No description supplied by the EAPI.
 * 
 *
 * @param[in] emission No description supplied.
 * @param[in] source No description supplied.
 * @param[in] func No description supplied.
 * @param[in] data No description supplied.
 */
EAPI void elm_widget_signal_callback_add(Elm_Widget *obj, const char *emission, const char *source, Edje_Signal_Cb func, void *data);

/**
 * 'Virtual' function which checks if handling of passing focus to sub-objects is supported by widget.
 * 
 */
EAPI Eina_Bool elm_widget_focus_next_manager_is(Elm_Widget *obj);

/**
 * No description supplied by the EAPI.
 * 
 *
 * @param[in] name No description supplied.
 * @param[in] recurse No description supplied.
 */
EAPI Evas_Object *elm_widget_name_find(const Elm_Widget *obj, const char *name, int recurse);

/**
 * No description supplied by the EAPI.
 * 
 *
 * @param[in] base No description supplied.
 * @param[in] items No description supplied.
 * @param[in] list_data_get No description supplied.
 * @param[in] degree No description supplied.
 * @param[out] direction No description supplied.
 * @param[out] weight No description supplied.
 */
EAPI Eina_Bool elm_widget_focus_list_direction_get(const Elm_Widget *obj, const Evas_Object *base, const Eina_List *items, list_data_get_func_type list_data_get, double degree, Evas_Object **direction, double *weight);

/**
 * No description supplied by the EAPI.
 * 
 */
EAPI void elm_widget_focused_object_clear(Elm_Widget *obj);

/**
 * No description supplied by the EAPI.
 * 
 *
 * @param[in] degree No description supplied.
 */
EAPI Eina_Bool elm_widget_focus_direction_go(Elm_Widget *obj, double degree);

/**
 * No description supplied by the EAPI.
 * 
 *
 * @param[in] x No description supplied.
 * @param[in] y No description supplied.
 * @param[in] w No description supplied.
 * @param[in] h No description supplied.
 * @param[in] forceshow No description supplied.
 */
EAPI void elm_widget_show_region_set(Elm_Widget *obj, Evas_Coord x, Evas_Coord y, Evas_Coord w, Evas_Coord h, Eina_Bool forceshow);

/**
 * No description supplied by the EAPI.
 * 
 *
 * @param[out] x No description supplied.
 * @param[out] y No description supplied.
 * @param[out] w No description supplied.
 * @param[out] h No description supplied.
 */
EAPI void elm_widget_show_region_get(const Elm_Widget *obj, Evas_Coord *x, Evas_Coord *y, Evas_Coord *w, Evas_Coord *h);

/**
 * No description supplied by the EAPI.
 * 
 */
EAPI void elm_widget_scroll_freeze_pop(Elm_Widget *obj);

/**
 * No description supplied by the EAPI.
 * 
 *
 * @param[in] tt No description supplied.
 */
EAPI void elm_widget_tooltip_del(Elm_Widget *obj, Elm_Tooltip *tt);

/**
 * No description supplied by the EAPI.
 * 
 *
 * @param[in] dir No description supplied.
 * @param[out] next No description supplied.
 */
EAPI Eina_Bool elm_widget_focus_next_get(const Elm_Widget *obj, Elm_Focus_Direction dir, Evas_Object **next);

/**
 * No description supplied by the EAPI.
 * 
 *
 * @param[in] part No description supplied.
 */
EAPI const char *elm_widget_translatable_part_text_get(const Elm_Widget *obj, const char *part);

/**
 * @internal
 *
 * Restore the focus state of the sub-tree.
 *
 * This API will restore the focus state of the sub-tree to the latest
 * state. If a sub-tree is unfocused and wants to get back to the latest
 * focus state, this API will be helpful.
 *
 * @ingroup Widget
 * 
 */
EAPI void elm_widget_focus_restore(Elm_Widget *obj);

/**
 * No description supplied by the EAPI.
 * 
 */
EAPI void elm_widget_scroll_hold_pop(Elm_Widget *obj);

/**
 * No description supplied by the EAPI.
 * 
 */
EAPI void elm_widget_scroll_freeze_push(Elm_Widget *obj);

/**
 * No description supplied by the EAPI.
 * 
 */
EAPI void elm_widget_focus_custom_chain_unset(Elm_Widget *obj);

/**
 * No description supplied by the EAPI.
 * 
 */
EAPI void elm_widget_focus_steal(Elm_Widget *obj);

/**
 * No description supplied by the EAPI.
 * 
 */
EAPI void elm_widget_focus_hide_handle(Elm_Widget *obj);

/**
 * No description supplied by the EAPI.
 * 
 *
 * @param[in] items No description supplied.
 * @param[in] list_data_get No description supplied.
 * @param[in] dir No description supplied.
 * @param[out] next No description supplied.
 */
EAPI Eina_Bool elm_widget_focus_list_next_get(const Elm_Widget *obj, const Eina_List *items, list_data_get_func_type list_data_get, Elm_Focus_Direction dir, Evas_Object **next);

/**
 * 'Virtual' function on the widget being re-themed.
 * 
 */
EAPI Eina_Bool elm_widget_theme_apply(Elm_Widget *obj);

/**
 * No description supplied by the EAPI.
 * 
 *
 * @param[in] base No description supplied.
 * @param[in] degree No description supplied.
 * @param[out] direction No description supplied.
 * @param[out] weight No description supplied.
 */
EAPI Eina_Bool elm_widget_focus_direction_get(const Elm_Widget *obj, const Evas_Object *base, double degree, Evas_Object **direction, double *weight);

/**
 * No description supplied by the EAPI.
 * 
 *
 * @param[in] emission No description supplied.
 * @param[in] source No description supplied.
 * @param[in] func No description supplied.
 */
EAPI void *elm_widget_signal_callback_del(Elm_Widget *obj, const char *emission, const char *source, Edje_Signal_Cb func);

/**
 * No description supplied by the EAPI.
 * 
 *
 * @param[in] emission No description supplied.
 * @param[in] source No description supplied.
 */
EAPI void elm_widget_signal_emit(Elm_Widget *obj, const char *emission, const char *source);

/**
 * 'Virtual' function on the widget being disabled.
 * 
 */
EAPI Eina_Bool elm_widget_disable(Elm_Widget *obj);

/**
 * 'Virtual' function handling sub objects being removed.
 * 
 *
 * @param[in] sobj No description supplied.
 */
EAPI Eina_Bool elm_widget_sub_object_del(Elm_Widget *obj, Evas_Object *sobj);

/**
 * No description supplied by the EAPI.
 * 
 *
 * @param[in] tt No description supplied.
 */
EAPI void elm_widget_tooltip_add(Elm_Widget *obj, Elm_Tooltip *tt);

/**
 * No description supplied by the EAPI.
 * 
 */
EAPI void elm_widget_focus_region_show(const Elm_Widget *obj);

/**
 * No description supplied by the EAPI.
 * 
 */
EAPI void elm_widget_focus_disabled_handle(Elm_Widget *obj);

/**
 * No description supplied by the EAPI.
 * 
 *
 * @param[in] child No description supplied.
 * @param[in] relative_child No description supplied.
 */
EAPI void elm_widget_focus_custom_chain_append(Elm_Widget *obj, Evas_Object *child, Evas_Object *relative_child);

#endif
