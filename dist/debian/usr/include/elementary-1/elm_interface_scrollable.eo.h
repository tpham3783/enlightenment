#ifndef _ELM_INTERFACE_SCROLLABLE_EO_H_
#define _ELM_INTERFACE_SCROLLABLE_EO_H_

#ifndef _ELM_INTERFACE_SCROLLABLE_EO_CLASS_TYPE
#define _ELM_INTERFACE_SCROLLABLE_EO_CLASS_TYPE

typedef Eo Elm_Interface_Scrollable;

#endif

#ifndef _ELM_INTERFACE_SCROLLABLE_EO_TYPES
#define _ELM_INTERFACE_SCROLLABLE_EO_TYPES


#endif
#define ELM_INTERFACE_SCROLLABLE_MIXIN elm_interface_scrollable_mixin_get()

EAPI const Eo_Class *elm_interface_scrollable_mixin_get(void) EINA_CONST;

/**
 * Set scrolling gravity on the scrollable
 *
 * The gravity defines how the scroller will adjust its view
 * when the size of the scroller contents increases.
 *
 * The scroller will adjust the view to glue itself as follows.
 *
 * x=0.0, for staying where it is relative to the left edge of the content
 * x=1.0, for staying where it is relative to the rigth edge of the content
 * y=0.0, for staying where it is relative to the top edge of the content
 * y=1.0, for staying where it is relative to the bottom edge of the content
 *
 * Default values for x and y are 0.0
 *
 * @ingroup Widget
 *
 * @param[in] x Horizontal scrolling gravity
 * @param[in] y Vertical scrolling gravity
 */
EOAPI void  elm_interface_scrollable_gravity_set(double x, double y);

/**
 * Get scrolling gravity on the scrollable
 *
 * The gravity defines how the scroller will adjust its view
 * when the size of the scroller contents increases.
 *
 * The scroller will adjust the view to glue itself as follows.
 *
 * x=0.0, for staying where it is relative to the left edge of the content
 * x=1.0, for staying where it is relative to the rigth edge of the content
 * y=0.0, for staying where it is relative to the top edge of the content
 * y=1.0, for staying where it is relative to the bottom edge of the content
 *
 * Default values for x and y are 0.0
 *
 * @ingroup Widget
 *
 * @param[out] x Horizontal scrolling gravity
 * @param[out] y Vertical scrolling gravity
 */
EOAPI void  elm_interface_scrollable_gravity_get(double *x, double *y);

/**
 * @brief Bouncing behavior
 *
 * When scrolling, the scroller may "bounce" when reaching an edge of the
 * content object. This is a visual way to indicate the end has been reached.
 * This is enabled by default for both axis. This API will set if it is enabled
 * for the given axis with the boolean parameters for each axis.
 *
 * @ingroup Widget
 * 
 *
 * @param[in] horiz Horizontal bounce policy.
 * @param[in] vert Vertical bounce policy.
 */
EOAPI void  elm_interface_scrollable_bounce_allow_set(Eina_Bool horiz, Eina_Bool vert);

/**
 * @brief Bouncing behavior
 *
 * When scrolling, the scroller may "bounce" when reaching an edge of the
 * content object. This is a visual way to indicate the end has been reached.
 * This is enabled by default for both axis. This API will set if it is enabled
 * for the given axis with the boolean parameters for each axis.
 *
 * @ingroup Widget
 * 
 *
 * @param[out] horiz Horizontal bounce policy.
 * @param[out] vert Vertical bounce policy.
 */
EOAPI void  elm_interface_scrollable_bounce_allow_get(Eina_Bool *horiz, Eina_Bool *vert);

/**
 * @brief Set Wheel disable
 * Enable or disable mouse wheel to be used to scroll the scroller content.
 * Wheel is enabled by default.
 *
 * @ingroup Widget
 *
 * @param[in] disabled No description supplied.
 */
EOAPI void  elm_interface_scrollable_wheel_disabled_set(Eina_Bool disabled);

/**
 * @brief Get Wheel disable
 * Get a value whether wheel to be used to scroll the scroller content.
 *
 * @ingroup Widget
 */
EOAPI Eina_Bool  elm_interface_scrollable_wheel_disabled_get(void);

/**
 * @brief Blocking of scrolling (per axis)
 *
 * This function will block scrolling movement (by input of a user) in
 * a given direction. One can disable movements in the X axis, the Y
 * axis or both. The default value is #ELM_SCROLLER_MOVEMENT_NO_BLOCK,
 * where movements are allowed in both directions.
 *
 * What makes this function different from
 * freeze_push(), hold_push() and lock_x_set() (or lock_y_set())
 * is that it @b doesn't propagate its effects to any parent or child
 * widget of @a obj. Only the target scrollable widget will be locked
 * with regard to scrolling.
 *
 * @since 1.8
 *
 * @ingroup Widget
 * 
 *
 * @param[in] block Which axis (or axes) to block
 */
EOAPI void  elm_interface_scrollable_movement_block_set(Elm_Scroller_Movement_Block block);

/**
 * @brief Blocking of scrolling (per axis)
 *
 * This function will block scrolling movement (by input of a user) in
 * a given direction. One can disable movements in the X axis, the Y
 * axis or both. The default value is #ELM_SCROLLER_MOVEMENT_NO_BLOCK,
 * where movements are allowed in both directions.
 *
 * What makes this function different from
 * freeze_push(), hold_push() and lock_x_set() (or lock_y_set())
 * is that it @b doesn't propagate its effects to any parent or child
 * widget of @a obj. Only the target scrollable widget will be locked
 * with regard to scrolling.
 *
 * @since 1.8
 *
 * @ingroup Widget
 * 
 */
EOAPI Elm_Scroller_Movement_Block  elm_interface_scrollable_movement_block_get(void);

/**
 * No description supplied by the EAPI.
 *
 * @param[in] disabled No description supplied.
 */
EOAPI void  elm_interface_scrollable_momentum_animator_disabled_set(Eina_Bool disabled);

/**
 * No description supplied by the EAPI.
 */
EOAPI Eina_Bool  elm_interface_scrollable_momentum_animator_disabled_get(void);

/**
 * @brief Scrollbar visibility policy
 *
 * #ELM_SCROLLER_POLICY_AUTO means the scrollbar is made visible if it is
 * needed, and otherwise kept hidden. #ELM_SCROLLER_POLICY_ON turns it on all
 * the time, and #ELM_SCROLLER_POLICY_OFF always keeps it off. This applies
 * respectively for the horizontal and vertical scrollbars.
 *
 * @ingroup Widget
 * 
 *
 * @param[in] hbar Horizontal scrollbar policy
 * @param[in] vbar Vertical scrollbar policy
 */
EOAPI void  elm_interface_scrollable_policy_set(Elm_Scroller_Policy hbar, Elm_Scroller_Policy vbar);

/**
 * @brief Scrollbar visibility policy
 *
 * #ELM_SCROLLER_POLICY_AUTO means the scrollbar is made visible if it is
 * needed, and otherwise kept hidden. #ELM_SCROLLER_POLICY_ON turns it on all
 * the time, and #ELM_SCROLLER_POLICY_OFF always keeps it off. This applies
 * respectively for the horizontal and vertical scrollbars.
 *
 * @ingroup Widget
 * 
 *
 * @param[out] hbar Horizontal scrollbar policy
 * @param[out] vbar Vertical scrollbar policy
 */
EOAPI void  elm_interface_scrollable_policy_get(Elm_Scroller_Policy *hbar, Elm_Scroller_Policy *vbar);

/**
 * @brief Currently visible content region
 *
 * This gets the current region in the content object that is visible through
 * the scroller. The region co-ordinates are returned in the @p x, @p y, @p
 * w, @p h values pointed to.
 *
 * @note All coordinates are relative to the content.
 *
 * @see elm_scroller_region_show()
 *
 * @ingroup Widget
 * 
 *
 * @param[in] x X coordinate of the region
 * @param[in] y Y coordinate of the region
 * @param[in] w Width of the region
 * @param[in] h Height of the region
 */
EOAPI void  elm_interface_scrollable_content_region_set(Evas_Coord x, Evas_Coord y, Evas_Coord w, Evas_Coord h);

/**
 * @brief Currently visible content region
 *
 * This gets the current region in the content object that is visible through
 * the scroller. The region co-ordinates are returned in the @p x, @p y, @p
 * w, @p h values pointed to.
 *
 * @note All coordinates are relative to the content.
 *
 * @see elm_scroller_region_show()
 *
 * @ingroup Widget
 * 
 *
 * @param[out] x X coordinate of the region
 * @param[out] y Y coordinate of the region
 * @param[out] w Width of the region
 * @param[out] h Height of the region
 */
EOAPI void  elm_interface_scrollable_content_region_get(Evas_Coord *x, Evas_Coord *y, Evas_Coord *w, Evas_Coord *h);

/**
 * It decides whether the scrollable object propagates the events to content object or not.
 *
 * @param[in] repeat_events No description supplied.
 */
EOAPI void  elm_interface_scrollable_repeat_events_set(Eina_Bool repeat_events);

/**
 * It gets whether the scrollable object propagates the events to content object or not.
 */
EOAPI Eina_Bool  elm_interface_scrollable_repeat_events_get(void);

/**
 * @brief Scroll page size relative to viewport size.
 *
 * The scroller is capable of limiting scrolling by the user to "pages". That
 * is to jump by and only show a "whole page" at a time as if the continuous
 * area of the scroller content is split into page sized pieces. This sets
 * the size of a page relative to the viewport of the scroller. 1.0 is "1
 * viewport" is size (horizontally or vertically). 0.0 turns it off in that
 * axis. This is mutually exclusive with page size
 * (see elm_scroller_page_size_set()  for more information). Likewise 0.5
 * is "half a viewport". Sane usable values are normally between 0.0 and 1.0
 * including 1.0. If you only want 1 axis to be page "limited", use 0.0 for
 * the other axis.
 *
 * @ingroup Widget
 * 
 *
 * @param[in] x The horizontal page relative size
 * @param[in] y The vertical page relative size
 */
EOAPI void  elm_interface_scrollable_page_size_set(Evas_Coord x, Evas_Coord y);

/**
 * @brief Scroll page size relative to viewport size.
 *
 * The scroller is capable of limiting scrolling by the user to "pages". That
 * is to jump by and only show a "whole page" at a time as if the continuous
 * area of the scroller content is split into page sized pieces. This sets
 * the size of a page relative to the viewport of the scroller. 1.0 is "1
 * viewport" is size (horizontally or vertically). 0.0 turns it off in that
 * axis. This is mutually exclusive with page size
 * (see elm_scroller_page_size_set()  for more information). Likewise 0.5
 * is "half a viewport". Sane usable values are normally between 0.0 and 1.0
 * including 1.0. If you only want 1 axis to be page "limited", use 0.0 for
 * the other axis.
 *
 * @ingroup Widget
 * 
 *
 * @param[out] x The horizontal page relative size
 * @param[out] y The vertical page relative size
 */
EOAPI void  elm_interface_scrollable_page_size_get(Evas_Coord *x, Evas_Coord *y);

/**
 * No description supplied by the EAPI.
 *
 * @param[in] disabled No description supplied.
 */
EOAPI void  elm_interface_scrollable_bounce_animator_disabled_set(Eina_Bool disabled);

/**
 * No description supplied by the EAPI.
 */
EOAPI Eina_Bool  elm_interface_scrollable_bounce_animator_disabled_get(void);

/**
 * No description supplied by the EAPI.
 *
 * @param[in] page_limit_h No description supplied.
 * @param[in] page_limit_v No description supplied.
 */
EOAPI void  elm_interface_scrollable_page_scroll_limit_set(int page_limit_h, int page_limit_v);

/**
 * No description supplied by the EAPI.
 *
 * @param[out] page_limit_h No description supplied.
 * @param[out] page_limit_v No description supplied.
 */
EOAPI void  elm_interface_scrollable_page_scroll_limit_get(int *page_limit_h, int *page_limit_v);

/**
 * @brief Page snapping behavior
 *
 * When scrolling, if a scroller is paged (see
 * elm_scroller_page_size_set() and elm_scroller_page_relative_set()),
 * the scroller may snap to pages when being scrolled, i.e., even if
 * it had momentum to scroll further, it will stop at the next page
 * boundaries. This is @b disabled, by default, for both axis. This
 * function will set if it that is enabled or not, for each axis.
 *
 * @note If @a obj is not set to have pages, nothing will happen after
 * this call.
 *
 * @since 1.8
 *
 * @ingroup Widget
 * 
 *
 * @param[in] horiz Allow snap horizontally
 * @param[in] vert Allow snap vertically
 */
EOAPI void  elm_interface_scrollable_page_snap_allow_set(Eina_Bool horiz, Eina_Bool vert);

/**
 * @brief Page snapping behavior
 *
 * When scrolling, if a scroller is paged (see
 * elm_scroller_page_size_set() and elm_scroller_page_relative_set()),
 * the scroller may snap to pages when being scrolled, i.e., even if
 * it had momentum to scroll further, it will stop at the next page
 * boundaries. This is @b disabled, by default, for both axis. This
 * function will set if it that is enabled or not, for each axis.
 *
 * @note If @a obj is not set to have pages, nothing will happen after
 * this call.
 *
 * @since 1.8
 *
 * @ingroup Widget
 * 
 *
 * @param[out] horiz Allow snap horizontally
 * @param[out] vert Allow snap vertically
 */
EOAPI void  elm_interface_scrollable_page_snap_allow_get(Eina_Bool *horiz, Eina_Bool *vert);

/**
 * No description supplied by the EAPI.
 *
 * @param[in] pagerel_h No description supplied.
 * @param[in] pagerel_v No description supplied.
 * @param[in] pagesize_h No description supplied.
 * @param[in] pagesize_v No description supplied.
 */
EOAPI void  elm_interface_scrollable_paging_set(double pagerel_h, double pagerel_v, Evas_Coord pagesize_h, Evas_Coord pagesize_v);

/**
 * No description supplied by the EAPI.
 *
 * @param[out] pagerel_h No description supplied.
 * @param[out] pagerel_v No description supplied.
 * @param[out] pagesize_h No description supplied.
 * @param[out] pagesize_v No description supplied.
 */
EOAPI void  elm_interface_scrollable_paging_get(double *pagerel_h, double *pagerel_v, Evas_Coord *pagesize_h, Evas_Coord *pagesize_v);

/**
 * @brief Single direction scroll configuration
 *
 * This makes it possible to restrict scrolling to a single direction,
 * with a "soft" or "hard" behavior.
 *
 * The hard behavior restricts the scrolling to a single direction all
 * of the time while the soft one will restrict depending on factors
 * such as the movement angle. If the user scrolls roughly in one
 * direction only, it will only move according to it while if the move
 * was clearly wanted on both axes, it will happen on both of them.
 *
 * @since 1.8
 *
 * @ingroup Widget
 * 
 *
 * @param[in] single_dir The single direction scroll policy
 */
EOAPI void  elm_interface_scrollable_single_direction_set(Elm_Scroller_Single_Direction single_dir);

/**
 * @brief Single direction scroll configuration
 *
 * This makes it possible to restrict scrolling to a single direction,
 * with a "soft" or "hard" behavior.
 *
 * The hard behavior restricts the scrolling to a single direction all
 * of the time while the soft one will restrict depending on factors
 * such as the movement angle. If the user scrolls roughly in one
 * direction only, it will only move according to it while if the move
 * was clearly wanted on both axes, it will happen on both of them.
 *
 * @since 1.8
 *
 * @ingroup Widget
 * 
 */
EOAPI Elm_Scroller_Single_Direction  elm_interface_scrollable_single_direction_get(void);

/**
 * No description supplied by the EAPI.
 *
 * @param[in] x No description supplied.
 * @param[in] y No description supplied.
 */
EOAPI void  elm_interface_scrollable_step_size_set(Evas_Coord x, Evas_Coord y);

/**
 * No description supplied by the EAPI.
 *
 * @param[out] x No description supplied.
 * @param[out] y No description supplied.
 */
EOAPI void  elm_interface_scrollable_step_size_get(Evas_Coord *x, Evas_Coord *y);

/**
 * Sets an infinite loop for a scroller.
 *
 * This sets an infinite loop for a scroller.
 *
 * @since 1.14
 *
 * @ingroup Widget
 *
 * @param[in] loop_h The scrolling horizontal loop
 * @param[in] loop_v The scrolling vertical loop
 */
EOAPI void  elm_interface_scrollable_loop_set(Eina_Bool loop_h, Eina_Bool loop_v);

/**
 * Gets an infinite loop for a scroller.
 *
 * This gets an infinite loop for a scroller.
 *
 * @since 1.14
 *
 * @ingroup Widget
 *
 * @param[out] loop_h The scrolling horizontal loop
 * @param[out] loop_v The scrolling vertical loop
 */
EOAPI void  elm_interface_scrollable_loop_get(Eina_Bool *loop_h, Eina_Bool *loop_v);

/**
 * Set the callback to run when the content has been moved up.
 *
 * @ingroup Widget
 *
 * @param[in] scroll_up_cb The callback
 */
EOAPI void  elm_interface_scrollable_scroll_up_cb_set(Elm_Interface_Scrollable_Cb scroll_up_cb);

/**
 * Set the callback to run when the horizontal scrollbar is dragged.
 *
 * @ingroup Widget
 *
 * @param[in] hbar_drag_cb The callback
 */
EOAPI void  elm_interface_scrollable_hbar_drag_cb_set(Elm_Interface_Scrollable_Cb hbar_drag_cb);

/**
 * Set the callback to run when dragging of the contents has started.
 *
 * @ingroup Widget
 *
 * @param[in] drag_start_cb The callback
 */
EOAPI void  elm_interface_scrollable_drag_start_cb_set(Elm_Interface_Scrollable_Cb drag_start_cb);

/**
 * No description supplied by the EAPI.
 *
 * @param[in] freeze No description supplied.
 */
EOAPI void  elm_interface_scrollable_freeze_set(Eina_Bool freeze);

/**
 * When the viewport is resized, the callback is called.
 *
 * @param[in] viewport_resize_cb No description supplied.
 */
EOAPI void  elm_interface_scrollable_content_viewport_resize_cb_set(Elm_Interface_Scrollable_Resize_Cb viewport_resize_cb);

/**
 * Set the callback to run when the content has been moved to the left
 *
 * @ingroup Widget
 *
 * @param[in] scroll_left_cb The callback
 */
EOAPI void  elm_interface_scrollable_scroll_left_cb_set(Elm_Interface_Scrollable_Cb scroll_left_cb);

/**
 * Set the callback to run when the vertical scrollbar is pressed.
 *
 * @ingroup Widget
 *
 * @param[in] vbar_press_cb The callback
 */
EOAPI void  elm_interface_scrollable_vbar_press_cb_set(Elm_Interface_Scrollable_Cb vbar_press_cb);

/**
 * Set the callback to run when the horizontal scrollbar is pressed.
 *
 * @ingroup Widget
 *
 * @param[in] hbar_press_cb The callback
 */
EOAPI void  elm_interface_scrollable_hbar_press_cb_set(Elm_Interface_Scrollable_Cb hbar_press_cb);

/**
 * Set the callback to run when the horizontal scrollbar is unpressed.
 *
 * @ingroup Widget
 *
 * @param[in] hbar_unpress_cb The callback
 */
EOAPI void  elm_interface_scrollable_hbar_unpress_cb_set(Elm_Interface_Scrollable_Cb hbar_unpress_cb);

/**
 * Set the callback to run when dragging of the contents has stopped.
 *
 *
 * @ingroup Widget
 *
 * @param[in] drag_stop_cb The callback
 */
EOAPI void  elm_interface_scrollable_drag_stop_cb_set(Elm_Interface_Scrollable_Cb drag_stop_cb);

/**
 * No description supplied by the EAPI.
 *
 * @param[in] pan No description supplied.
 */
EOAPI void  elm_interface_scrollable_extern_pan_set(Evas_Object *pan);

/**
 * Set the callback to run when the visible page changes.
 *
 * @ingroup Widget
 *
 * @param[in] page_change_cb The callback
 */
EOAPI void  elm_interface_scrollable_page_change_cb_set(Elm_Interface_Scrollable_Cb page_change_cb);

/**
 * No description supplied by the EAPI.
 *
 * @param[in] hold No description supplied.
 */
EOAPI void  elm_interface_scrollable_hold_set(Eina_Bool hold);

/**
 * Set the callback to run when the scrolling animation has started.
 *
 * @ingroup Widget
 *
 * @param[in] animate_start_cb The callback
 */
EOAPI void  elm_interface_scrollable_animate_start_cb_set(Elm_Interface_Scrollable_Cb animate_start_cb);

/**
 * Set the callback to run when the content has been moved down.
 *
 * @ingroup Widget
 *
 * @param[in] scroll_down_cb The callback
 */
EOAPI void  elm_interface_scrollable_scroll_down_cb_set(Elm_Interface_Scrollable_Cb scroll_down_cb);

/**
 * Set scroll page size relative to viewport size.
 *
 * @param[in] h_pagerel No description supplied.
 * @param[in] v_pagerel No description supplied.
 */
EOAPI void  elm_interface_scrollable_page_relative_set(double h_pagerel, double v_pagerel);

/**
 * Set the callback to run when the content has been moved.
 *
 * @ingroup Widget
 *
 * @param[in] scroll_cb The callback
 */
EOAPI void  elm_interface_scrollable_scroll_cb_set(Elm_Interface_Scrollable_Cb scroll_cb);

/**
 * Set the callback to run when the scrolling animation has stopped.
 *
 * @ingroup Widget
 *
 * @param[in] animate_stop_cb The callback
 */
EOAPI void  elm_interface_scrollable_animate_stop_cb_set(Elm_Interface_Scrollable_Cb animate_stop_cb);

/**
 * No description supplied by the EAPI.
 *
 * @param[in] mirrored No description supplied.
 */
EOAPI void  elm_interface_scrollable_mirrored_set(Eina_Bool mirrored);

/**
 * No description supplied by the EAPI.
 *
 * @param[in] min_limit_cb No description supplied.
 */
EOAPI void  elm_interface_scrollable_content_min_limit_cb_set(Elm_Interface_Scrollable_Min_Limit_Cb min_limit_cb);

/**
 * Set the callback to run when the content has been moved to the right.
 *
 * @ingroup Widget
 *
 * @param[in] scroll_right_cb The callback
 */
EOAPI void  elm_interface_scrollable_scroll_right_cb_set(Elm_Interface_Scrollable_Cb scroll_right_cb);

/**
 * No description supplied by the EAPI.
 *
 * @param[in] content No description supplied.
 */
EOAPI void  elm_interface_scrollable_content_set(Evas_Object *content);

/**
 * Set the callback to run when the left edge of the content has been reached.
 *
 * @ingroup Widget
 *
 * @param[in] edge_left_cb The callback
 */
EOAPI void  elm_interface_scrollable_edge_left_cb_set(Elm_Interface_Scrollable_Cb edge_left_cb);

/**
 * Set the callback to run when the horizontal scrollbar is dragged.
 *
 * @ingroup Widget
 *
 * @param[in] vbar_drag_cb The callback
 */
EOAPI void  elm_interface_scrollable_vbar_drag_cb_set(Elm_Interface_Scrollable_Cb vbar_drag_cb);

/**
 * Set the callback to run when the horizontal scrollbar is unpressed.
 *
 * @ingroup Widget
 *
 * @param[in] vbar_unpress_cb The callback
 */
EOAPI void  elm_interface_scrollable_vbar_unpress_cb_set(Elm_Interface_Scrollable_Cb vbar_unpress_cb);

/**
 * Set the callback to run when the bottom edge of the content has been reached.
 *
 * @ingroup Widget
 *
 * @param[in] edge_bottom_cb The callback
 */
EOAPI void  elm_interface_scrollable_edge_bottom_cb_set(Elm_Interface_Scrollable_Cb edge_bottom_cb);

/**
 * Set the callback to run when the right edge of the content has been reached.
 *
 * @ingroup Widget
 *
 * @param[in] edge_right_cb The callback
 */
EOAPI void  elm_interface_scrollable_edge_right_cb_set(Elm_Interface_Scrollable_Cb edge_right_cb);

/**
 * Set the callback to run when the top edge of the content has been reached.
 *
 * @ingroup Widget
 *
 * @param[in] edge_top_cb The callback
 */
EOAPI void  elm_interface_scrollable_edge_top_cb_set(Elm_Interface_Scrollable_Cb edge_top_cb);

/**
 * No description supplied by the EAPI.
 *
 * @param[in] edje_object No description supplied.
 * @param[in] hit_rectangle No description supplied.
 */
EOAPI void  elm_interface_scrollable_objects_set(Evas_Object *edje_object, Evas_Object *hit_rectangle);

/**
 * Get scroll last page number.
 *
 * The page number starts from 0. 0 is the first page.
 * This returns the last page number among the pages.
 *
 * @see elm_scroller_current_page_get()
 * @see elm_scroller_page_show()
 * @see elm_scroller_page_bring_in()
 *
 * @ingroup Widget
 *
 * @param[out] pagenumber_h The horizontal page number
 * @param[out] pagenumber_v The vertical page number
 */
EOAPI void  elm_interface_scrollable_last_page_get(int *pagenumber_h, int *pagenumber_v);

/**
 * Get scroll current page number.
 *
 * The page number starts from 0. 0 is the first page.
 * Current page means the page which meets the top-left of the viewport.
 * If there are two or more pages in the viewport, it returns the number of the page
 * which meets the top-left of the viewport.
 *
 * @see elm_scroller_last_page_get()
 * @see elm_scroller_page_show()
 * @see elm_scroller_page_bring_in()
 *
 * @ingroup Widget
 *
 * @param[out] pagenumber_h The horizontal page number
 * @param[out] pagenumber_v The vertical page number
 */
EOAPI void  elm_interface_scrollable_current_page_get(int *pagenumber_h, int *pagenumber_v);

/**
 * No description supplied by the EAPI.
 *
 * @param[out] x No description supplied.
 * @param[out] y No description supplied.
 * @param[out] w No description supplied.
 * @param[out] h No description supplied.
 */
EOAPI void  elm_interface_scrollable_content_viewport_geometry_get(Evas_Coord *x, Evas_Coord *y, Evas_Coord *w, Evas_Coord *h);

/**
 * Get the size of the content object
 *
 * This gets the size of the content object of the scroller.
 *
 * @ingroup Scroller
 *
 * @param[out] w Width of the content object.
 * @param[out] h Height of the content object.
 */
EOAPI void  elm_interface_scrollable_content_size_get(Evas_Coord *w, Evas_Coord *h);

/**
 * No description supplied by the EAPI.
 * 
 *
 * @param[in] x No description supplied.
 * @param[in] y No description supplied.
 * @param[in] sig No description supplied.
 */
EOAPI void  elm_interface_scrollable_content_pos_set(Evas_Coord x, Evas_Coord y, Eina_Bool sig);

/**
 * No description supplied by the EAPI.
 * 
 *
 * @param[out] x No description supplied.
 * @param[out] y No description supplied.
 */
EOAPI void  elm_interface_scrollable_content_pos_get(Evas_Coord *x, Evas_Coord *y);

/**
 * Show a specific virtual region within the scroller content object by page number.
 *
 * 0, 0 of the indicated page is located at the top-left of the viewport.
 * This will jump to the page directly without animation.
 *
 * @see elm_scroller_page_bring_in()
 *
 * @ingroup Widget
 * 
 *
 * @param[in] pagenumber_h The horizontal page number
 * @param[in] pagenumber_v The vertical page number
 */
EOAPI void  elm_interface_scrollable_page_show(int pagenumber_h, int pagenumber_v);

/**
 * Show a specific virtual region within the scroller content object.
 *
 * This will ensure all (or part if it does not fit) of the designated
 * region in the virtual content object (0, 0 starting at the top-left of the
 * virtual content object) is shown within the scroller. Unlike
 * elm_scroller_region_show(), this allows the scroller to "smoothly slide"
 * to this location (if configuration in general calls for transitions). It
 * may not jump immediately to the new location and make take a while and
 * show other content along the way.
 *
 * @see elm_scroller_region_show()
 *
 * @ingroup Widget
 * 
 *
 * @param[in] x X coordinate of the region
 * @param[in] y Y coordinate of the region
 * @param[in] w Width of the region
 * @param[in] h Height of the region
 */
EOAPI void  elm_interface_scrollable_region_bring_in(Evas_Coord x, Evas_Coord y, Evas_Coord w, Evas_Coord h);

/**
 * Show a specific virtual region within the scroller content object by page number.
 *
 * 0, 0 of the indicated page is located at the top-left of the viewport.
 * This will slide to the page with animation.
 *
 * @see elm_scroller_page_show()
 *
 * @ingroup Scroller
 * 
 *
 * @param[in] pagenumber_h The horizontal page number
 * @param[in] pagenumber_v The vertical page number
 */
EOAPI void  elm_interface_scrollable_page_bring_in(int pagenumber_h, int pagenumber_v);

/**
 * Show a specific virtual region within the scroller content object
 *
 * This will ensure all (or part if it does not fit) of the designated
 * region in the virtual content object (0, 0 starting at the top-left of the
 * virtual content object) is shown within the scroller.
 *
 * @ingroup Widget
 * 
 *
 * @param[in] x X coordinate of the region
 * @param[in] y Y coordinate of the region
 * @param[in] w Width of the region
 * @param[in] h Height of the region
 */
EOAPI void  elm_interface_scrollable_content_region_show(Evas_Coord x, Evas_Coord y, Evas_Coord w, Evas_Coord h);

/**
 * Prevent the scrollable from being smaller than the minimum size of the content.
 *
 * By default the scroller will be as small as its design allows,
 * irrespective of its content. This will make the scroller minimum size the
 * right size horizontally and/or vertically to perfectly fit its content in
 * that direction.
 *
 * @ingroup Widget
 * 
 *
 * @param[in] w whether to limit the minimum horizontal size
 * @param[in] h whether to limit the minimum vertical size
 */
EOAPI void  elm_interface_scrollable_content_min_limit(Eina_Bool w, Eina_Bool h);

EOAPI extern const Eo_Event_Description _ELM_INTERFACE_SCROLLABLE_EVENT_CHANGED;

/**
 * No description
 */
#define ELM_INTERFACE_SCROLLABLE_EVENT_CHANGED (&(_ELM_INTERFACE_SCROLLABLE_EVENT_CHANGED))

#endif
