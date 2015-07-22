#ifndef _ELM_MAP_EO_LEGACY_H_
#define _ELM_MAP_EO_LEGACY_H_

#ifndef _ELM_MAP_EO_CLASS_TYPE
#define _ELM_MAP_EO_CLASS_TYPE

typedef Eo Elm_Map;

#endif

#ifndef _ELM_MAP_EO_TYPES
#define _ELM_MAP_EO_TYPES


#endif

/**
 * Set the zoom level of the map.
 *
 * This sets the zoom level.
 *
 * It will respect limits defined by elm_map_zoom_min_set() and
 * elm_map_zoom_max_set().
 *
 * By default these values are 0 (world map) and 18 (maximum zoom).
 *
 * This function should be used when zoom mode is set to #ELM_MAP_ZOOM_MODE_MANUAL.
 * This is the default mode, and can be set with elm_map_zoom_mode_set().
 *
 * @see elm_map_zoom_mode_set()
 * @see elm_map_zoom_get()
 *
 * @ingroup Map
 *
 * @param[in] zoom The zoom level to set.
 */
EAPI void elm_map_zoom_set(Elm_Map *obj, int zoom);

/**
 * Get the zoom level of the map.
 *
 * @return The current zoom level.
 *
 * This returns the current zoom level of the map object.
 *
 * Note that if you set the fill mode to other than #ELM_MAP_ZOOM_MODE_MANUAL
 * (which is the default), the zoom level may be changed at any time by the
 * map object itself to account for map size and map viewport size.
 *
 * @see elm_map_zoom_set() for details.
 *
 * @ingroup Map
 */
EAPI int elm_map_zoom_get(const Elm_Map *obj);

/**
 * Pause or unpause the map.
 *
 * This sets the paused state to on (@c EINA_TRUE) or off (@c EINA_FALSE)
 * for map.
 *
 * The default is off.
 *
 * This will stop zooming using animation, changing zoom levels will
 * change instantly. This will stop any existing animations that are running.
 *
 * @see elm_map_paused_get()
 *
 * @ingroup Map
 *
 * @param[in] paused Use @c EINA_TRUE to pause the map @p obj or @c EINA_FALSE
to unpause it.
 */
EAPI void elm_map_paused_set(Elm_Map *obj, Eina_Bool paused);

/**
 * Get a value whether map is paused or not.
 *
 * @return @c EINA_TRUE means map is pause. @c EINA_FALSE indicates
 * it is not.
 *
 * This gets the current paused state for the map object.
 *
 * @see elm_map_paused_set() for details.
 *
 * @ingroup Map
 */
EAPI Eina_Bool elm_map_paused_get(const Elm_Map *obj);

/**
 * Enable or disable mouse wheel to be used to zoom in / out the map.
 *
 * Mouse wheel can be used for the user to zoom in or zoom out the map.
 *
 * Wheel is enabled by default.
 *
 * @see elm_map_wheel_disabled_get()
 *
 * @ingroup Map
 *
 * @param[in] disabled Use @c EINA_TRUE to disable mouse wheel or @c EINA_FALSE
to enable it.
 */
EAPI void elm_map_wheel_disabled_set(Elm_Map *obj, Eina_Bool disabled);

/**
 * Get a value whether mouse wheel is enabled or not.
 *
 * @return @c EINA_TRUE means map is disabled. @c EINA_FALSE indicates
 * it is enabled.
 *
 * Mouse wheel can be used for the user to zoom in or zoom out the map.
 *
 * @see elm_map_wheel_disabled_set() for details.
 *
 * @ingroup Map
 */
EAPI Eina_Bool elm_map_wheel_disabled_get(const Elm_Map *obj);

/**
 * Set the minimum zoom of the source.
 *
 * @see elm_map_zoom_min_get() for details.
 *
 * @ingroup Map
 *
 * @param[in] zoom New minimum zoom value to be used.
 */
EAPI void elm_map_zoom_min_set(Elm_Map *obj, int zoom);

/**
 * Get the minimum zoom of the source.
 *
 * @return Returns the minimum zoom of the source.
 * (If getting the minimum zoom fails, it returns -1)
 *
 * @see elm_map_zoom_min_set() for details.
 *
 * @ingroup Map
 */
EAPI int elm_map_zoom_min_get(const Elm_Map *obj);

/**
 * Rotate the map.
 *
 * @see elm_map_rotate_get()
 *
 * @ingroup Map
 *
 * @param[in] degree Angle from 0.0 to 360.0 to rotate around Z axis.
 * @param[in] cx Rotation's center horizontal position.
 * @param[in] cy Rotation's center vertical position.
 */
EAPI void elm_map_rotate_set(Elm_Map *obj, double degree, Evas_Coord cx, Evas_Coord cy);

/**
 * Get the rotate degree of the map
 *
 * @see elm_map_rotate_set() to set map rotation.
 *
 * @ingroup Map
 *
 * @param[out] degree Angle from 0.0 to 360.0 to rotate around Z axis.
 * @param[out] cx Rotation's center horizontal position.
 * @param[out] cy Rotation's center vertical position.
 */
EAPI void elm_map_rotate_get(const Elm_Map *obj, double *degree, Evas_Coord *cx, Evas_Coord *cy);

/**
 * Set the user agent used by the map object to access routing services.
 *
 * User agent is a client application implementing a network protocol used
 * in communications within a clientserver distributed computing system
 *
 * The @p user_agent identification string will transmitted in a header
 * field @c User-Agent.
 *
 * @see elm_map_user_agent_get()
 *
 * @ingroup Map
 *
 * @param[in] user_agent The user agent to be used by the map.
 */
EAPI void elm_map_user_agent_set(Elm_Map *obj, const char *user_agent);

/**
 * Get the user agent used by the map object.
 *
 * @return The user agent identification string used by the map.
 *
 * @see elm_map_user_agent_set() for details.
 *
 * @ingroup Map
 */
EAPI const char *elm_map_user_agent_get(const Elm_Map *obj);

/**
 * Set the maximum zoom of the source.
 *
 * @see elm_map_zoom_max_get() for details.
 *
 * @ingroup Map
 *
 * @param[in] zoom New maximum zoom value to be used.
 */
EAPI void elm_map_zoom_max_set(Elm_Map *obj, int zoom);

/**
 * Get the maximum zoom of the source.
 *
 * @return Returns the maximum zoom of the source.
 * (If getting the maximum zoom fails, it returns -1)
 *
 * @see elm_map_zoom_max_set() for details.
 *
 * @ingroup Map
 */
EAPI int elm_map_zoom_max_get(const Elm_Map *obj);

/**
 * Set the zoom mode used by the map object.
 *
 * This sets the zoom mode to manual or one of the automatic levels.
 * Manual (#ELM_MAP_ZOOM_MODE_MANUAL) means that zoom is set manually by
 * elm_map_zoom_set() and will stay at that level until changed by code
 * or until zoom mode is changed. This is the default mode.
 *
 * The Automatic modes will allow the map object to automatically
 * adjust zoom mode based on properties. #ELM_MAP_ZOOM_MODE_AUTO_FIT will
 * adjust zoom so the map fits inside the scroll frame with no pixels
 * outside this area. #ELM_MAP_ZOOM_MODE_AUTO_FILL will be similar but
 * ensure no pixels within the frame are left unfilled. Do not forget that
 * the valid sizes are 2^zoom, consequently the map may be smaller than
 * the scroller view.
 *
 * @see elm_map_zoom_set()
 *
 * @ingroup Map
 *
 * @param[in] mode The zoom mode of the map, being it one of #ELM_MAP_ZOOM_MODE_MANUAL
(default), #ELM_MAP_ZOOM_MODE_AUTO_FIT, or #ELM_MAP_ZOOM_MODE_AUTO_FILL.
 */
EAPI void elm_map_zoom_mode_set(Elm_Map *obj, Elm_Map_Zoom_Mode mode);

/**
 * Get the zoom mode used by the map object.
 *
 * @return The zoom mode of the map, being it one of #ELM_MAP_ZOOM_MODE_MANUAL
 * (default), #ELM_MAP_ZOOM_MODE_AUTO_FIT, or #ELM_MAP_ZOOM_MODE_AUTO_FILL.
 *
 * This function returns the current zoom mode used by the map object.
 *
 * @see elm_map_zoom_mode_set() for more details.
 *
 * @ingroup Map
 */
EAPI Elm_Map_Zoom_Mode elm_map_zoom_mode_get(const Elm_Map *obj);

/**
 * Get the current geographic coordinates of the map.
 *
 * This gets the current center coordinates of the map object. It can be
 * set by elm_map_region_bring_in() and elm_map_region_show().
 *
 * @see elm_map_region_bring_in()
 * @see elm_map_region_show()
 *
 * @ingroup Map
 *
 * @param[out] lon Pointer to store longitude.
 * @param[out] lat Pointer to store latitude.
 */
EAPI void elm_map_region_get(const Elm_Map *obj, double *lon, double *lat);

/**
 * Return all overlays in the map object.
 *
 * @return The list of all overlays or @c NULL upon failure.
 *
 * This list includes group overlays also.
 * So this can be changed dynamically while zooming and panning.
 *
 * @since 1.7
 *
 * @ingroup Map
 */
EAPI Eina_List *elm_map_overlays_get(const Elm_Map *obj);

/**
 * Get the information of tile load status.
 *
 * This gets the current tile loaded status for the map object.
 *
 * @ingroup Map
 *
 * @param[out] try_num Pointer to store number of tiles download requested.
 * @param[out] finish_num Pointer to store number of tiles successfully downloaded.
 */
EAPI void elm_map_tile_load_status_get(const Elm_Map *obj, int *try_num, int *finish_num);

/**
 * Set the current source of the map for a specific type.
 *
 * Map widget retrieves tile images that composes the map from a web service.
 * This web service can be set with this method
 * for #ELM_MAP_SOURCE_TYPE_TILE type.
 * A different service can return a different maps with different
 * information and it can use different zoom values.
 *
 * Map widget provides route data based on a external web service.
 * This web service can be set with this method
 * for #ELM_MAP_SOURCE_TYPE_ROUTE type.
 *
 * Map widget also provide geoname data based on a external web service.
 * This web service can be set with this method
 * for #ELM_MAP_SOURCE_TYPE_NAME type.
 *
 * The @p source_name need to match one of the names provided by
 * elm_map_sources_get().
 *
 * The current source can be get using elm_map_source_get().
 *
 * @see elm_map_sources_get()
 * @see elm_map_source_get()
 *
 * @ingroup Map
 * 
 *
 * @param[in] type source type.
 * @param[in] source_name The source to be used.
 */
EAPI void elm_map_source_set(Elm_Map *obj, Elm_Map_Source_Type type, const char *source_name);

/**
 * Get the name of currently used source for a specific type.
 *
 * @return Returns the name of the source in use.
 *
 * @see elm_map_sources_get()
 * @see elm_map_source_set()
 *
 * @ingroup Map
 * 
 *
 * @param[in] type source type.
 */
EAPI const char *elm_map_source_get(const Elm_Map *obj, Elm_Map_Source_Type type);

/**
 * Add a new route to the map object.
 *
 * @return The created route or @c NULL upon failure.
 *
 * A route will be traced by point on coordinates (@p flat, @p flon)
 * to point on coordinates (@p tlat, @p tlon), using the route service
 * set with elm_map_source_set().
 *
 * It will take @p type on consideration to define the route,
 * depending if the user will be walking or driving, the route may vary.
 * One of #ELM_MAP_ROUTE_TYPE_MOTOCAR, #ELM_MAP_ROUTE_TYPE_BICYCLE,
 * or #ELM_MAP_ROUTE_TYPE_FOOT need to be used.
 *
 * Another parameter is what the route should prioritize, the minor distance
 * or the less time to be spend on the route. So @p method should be one
 * of #ELM_MAP_ROUTE_METHOD_SHORTEST or #ELM_MAP_ROUTE_METHOD_FASTEST.
 *
 * Routes created with this method can be deleted with
 * elm_map_route_del(),
 * and distance can be get with elm_map_route_distance_get().
 *
 * @see elm_map_route_del()
 * @see elm_map_route_distance_get()
 * @see elm_map_source_set()
 *
 * @ingroup Map
 * 
 *
 * @param[in] type The type of transport to be considered when tracing a route.
 * @param[in] method The routing method, what should be prioritized.
 * @param[in] flon The start longitude.
 * @param[in] flat The start latitude.
 * @param[in] tlon The destination longitude.
 * @param[in] tlat The destination latitude.
 * @param[in] route_cb The route to be traced.
 * @param[in] data A pointer of user data.
 */
EAPI Elm_Map_Route *elm_map_route_add(Elm_Map *obj, Elm_Map_Route_Type type, Elm_Map_Route_Method method, double flon, double flat, double tlon, double tlat, Elm_Map_Route_Cb route_cb, void *data);

/**
 * Add a track on the map
 *
 * @return The route object. This is an elm object of type Route.
 *
 * @see elm_route_add() for details.
 *
 * @ingroup Map
 * 
 *
 * @param[in] emap The emap route object.
 */
EAPI Evas_Object *elm_map_track_add(Elm_Map *obj, void *emap);

/**
 * Convert geographic coordinates (longitude, latitude)
 * into canvas coordinates.
 *
 * This gets canvas x, y coordinates from longitude and latitude. The canvas
 * coordinates mean x, y coordinate from current viewport.
 *
 * see elm_map_canvas_to_region_convert()
 *
 * @ingroup Map
 * 
 *
 * @param[in] lon The longitude to convert.
 * @param[in] lat The latitude to convert.
 * @param[out] x A pointer to horizontal coordinate.
 * @param[out] y A pointer to vertical coordinate.
 */
EAPI void elm_map_region_to_canvas_convert(const Elm_Map *obj, double lon, double lat, Evas_Coord *x, Evas_Coord *y);

/**
 * Add a new circle overlay to the map object.
 * This overlay has a circle type.
 *
 * @return The created overlay or @c NULL upon failure.
 *
 * Overlay created with this method can be deleted with elm_map_overlay_del().
 *
 * @see elm_map_overlay_del()
 *
 * @ingroup Map
 * 
 *
 * @param[in] lon The center longitude.
 * @param[in] lat The center latitude.
 * @param[in] radius The pixel length of radius.
 */
EAPI Elm_Map_Overlay *elm_map_overlay_circle_add(Elm_Map *obj, double lon, double lat, double radius);

/**
 * Add a new class overlay to the map object.
 * This overlay has a class type.
 *
 * @return The created overlay or @c NULL upon failure.
 *
 * This overlay is not shown before overlay members are appended.
 * if overlay members in the same class are close, group overlays
 * are created. If they are far away, group overlays are hidden.
 * When group overlays are shown, they have default style layouts at first.
 *
 * You can change the state (hidden, paused, etc.) or set the content
 * or icon of the group overlays by chaning the state of the class overlay.
 * Do not modify the group overlay itself.
 *
 * Also these changes have a influence on the overlays in the same class
 * even if each overlay is alone and is not grouped.
 *
 * @see elm_map_overlay_del()
 * @see elm_map_overlay_add()
 * @see elm_map_overlay_bubble_add()
 *
 * @ingroup Map
 * 
 */
EAPI Elm_Map_Overlay *elm_map_overlay_class_add(Elm_Map *obj);

/**
 * Add a new bubble overlay to the map object.
 * This overlay has a bubble type.
 *
 * @return The created overlay or @c NULL upon failure.
 *
 * A bubble will not be displayed before geographic coordinates are set or
 * any other overlays are followed.
 *
 * This overlay has a bubble style layout and icon or content can not
 * be set.
 *
 * Overlay created with this method can be deleted with elm_map_overlay_del().
 *
 * @see elm_map_overlay_del()
 * @see elm_map_overlay_add()
 * @see elm_map_overlay_class_add()
 * @see elm_map_overlay_region_set()
 * @see elm_map_overlay_bubble_follow()
 *
 * @ingroup Map
 * 
 */
EAPI Elm_Map_Overlay *elm_map_overlay_bubble_add(Elm_Map *obj);

/**
 * Get the names of available sources for a specific type.
 *
 * @return The char pointer array of source names.
 *
 * It will provide a list with all available sources.
 * Current source can be set by elm_map_source_set(), or get with
 * elm_map_source_get().
 *
 * At least available sources of tile type:
 * @li "Mapnik"
 * @li "Osmarender"
 * @li "CycleMap"
 * @li "Maplint"
 *
 * At least available sources of route type:
 * @li "Yours"
 *
 * At least available sources of name type:
 * @li "Nominatim"
 *
 * @see elm_map_source_set()
 * @see elm_map_source_get()
 *
 * @ingroup Map
 * 
 *
 * @param[in] type source type.
 */
EAPI const char **elm_map_sources_get(const Elm_Map *obj, Elm_Map_Source_Type type);

/**
 * Add a new polygon overlay to the map object.
 * This overlay has a polygon type.
 *
 * @return The created overlay or @c NULL upon failure.
 *
 * At least 3 regions should be added to show the polygon overlay.
 *
 * Overlay created with this method can be deleted with elm_map_overlay_del().
 *
 * @see elm_map_overlay_polygon_region_add()
 * @see elm_map_overlay_del()
 *
 * @ingroup Map
 * 
 */
EAPI Elm_Map_Overlay *elm_map_overlay_polygon_add(Elm_Map *obj);

/**
 * Add a new line overlay to the map object.
 * This overlay has a line type.
 *
 * @return The created overlay or @c NULL upon failure.
 *
 * Overlay created with this method can be deleted with elm_map_overlay_del().
 *
 * @see elm_map_overlay_del()
 *
 * @ingroup Map
 * 
 *
 * @param[in] flon The start longitude.
 * @param[in] flat The start latitude.
 * @param[in] tlon The destination longitude.
 * @param[in] tlat The destination latitude.
 */
EAPI Elm_Map_Overlay *elm_map_overlay_line_add(Elm_Map *obj, double flon, double flat, double tlon, double tlat);

/**
 * Show the given coordinates at the center of the map, @b immediately.
 *
 * This causes map to @b redraw its viewport's contents to the
 * region containing the given @p lat and @p lon, that will be moved to the
 * center of the map.
 *
 * @see elm_map_region_bring_in() for a function to move with animation.
 * @see elm_map_region_get()
 *
 * @ingroup Map
 * 
 *
 * @param[in] lon Longitude to center at.
 * @param[in] lat Latitude to center at.
 */
EAPI void elm_map_region_show(Elm_Map *obj, double lon, double lat);

/**
 * Request a address or geographic coordinates(longitude, latitude)
 * from a given address or geographic coordinate(longitude, latitude).
 *
 * @return name A #Elm_Map_Name handle for this coordinate.
 *
 * If you want to get address from geographic coordinates, set input @p address
 * as @c NULL and set @p lon, @p lat as you want to convert.
 * If address is set except NULL, @p lon and @p lat are checked.
 *
 * To get the string for this address, elm_map_name_address_get()
 * should be used after callback or "name,loaded" signal is called.
 *
 * To get the longitude and latitude, elm_map_name_region_get()
 * should be used.
 *
 * @ingroup Map
 * 
 *
 * @param[in] address The address.
 * @param[in] lon The longitude.
 * @param[in] lat The latitude.
 * @param[in] name_cb The callback function.
 * @param[in] data The user callback data.
 */
EAPI Elm_Map_Name *elm_map_name_add(const Elm_Map *obj, const char *address, double lon, double lat, Elm_Map_Name_Cb name_cb, void *data);

/**
 * @brief Requests a list of addresses corresponding to a given name.
 *
 * @since 1.8
 *
 * @remarks This is used if you want to search the address from a name.
 *
 * @internal
 * @ingroup Map
 * 
 *
 * @param[in] address The address.
 * @param[in] name_cb The callback function.
 * @param[in] data The user callback data.
 */
EAPI void elm_map_name_search(const Elm_Map *obj, const char *address, Elm_Map_Name_List_Cb name_cb, void *data);

/**
 * Animatedly bring in given coordinates to the center of the map.
 *
 * This causes map to jump to the given @p lat and @p lon coordinates
 * and show it (by scrolling) in the center of the viewport, if it is not
 * already centered. This will use animation to do so and take a period
 * of time to complete.
 *
 * @see elm_map_region_show() for a function to avoid animation.
 * @see elm_map_region_get()
 *
 * @ingroup Map
 * 
 *
 * @param[in] lon Longitude to center at.
 * @param[in] lat Latitude to center at.
 */
EAPI void elm_map_region_bring_in(Elm_Map *obj, double lon, double lat);

/**
 * Animatedly set the zoom level of the map and bring in given coordinates
 * to the center of the map.
 *
 * This causes map to zoom into specific zoom level and also move to the
 * given @p lat and @p lon coordinates and show it (by scrolling) in the
 * center of the viewport concurrently.
 *
 * @since 1.11
 *
 * @see elm_map_region_bring_in()
 * @see elm_map_zoom_set()
 *
 * @ingroup Map
 * 
 *
 * @param[in] zoom The zoom level to set.
 * @param[in] lon Longitude to center at.
 * @param[in] lat Latitude to center at.
 */
EAPI void elm_map_region_zoom_bring_in(Elm_Map *obj, int zoom, double lon, double lat);

/**
 * Remove a track from the map
 *
 * @ingroup Map
 * 
 *
 * @param[in] route The track to remove.
 */
EAPI void elm_map_track_remove(Elm_Map *obj, Evas_Object *route);

/**
 * Add a new route overlay to the map object.
 * This overlay has a route type.
 *
 * @return The created overlay or @c NULL upon failure.
 *
 * This overlay has a route style layout and icon or content can not
 * be set.
 *
 * The color scheme can be changed by elm_map_overlay_content_set().
 *
 * Overlay created with this method can be deleted with elm_map_overlay_del().
 *
 * @see elm_map_overlay_del()
 * @see elm_map_overlay_class_add()
 * @see elm_map_overlay_content_set()
 * @see elm_map_overlay_content_get()
 *
 * @ingroup Map
 * 
 *
 * @param[in] route The route object to make a overlay.
 */
EAPI Elm_Map_Overlay *elm_map_overlay_route_add(Elm_Map *obj, const Elm_Map_Route *route);

/**
 * Add a new scale overlay to the map object.
 * This overlay has a scale type.
 *
 * @return The created overlay or @c NULL upon failure.
 *
 * The scale overlay shows the ratio of a distance on the map to the corresponding distance.
 *
 * Overlay created with this method can be deleted with elm_map_overlay_del().
 *
 * @see elm_map_overlay_del()
 *
 * @ingroup Map
 * 
 *
 * @param[in] x horizontal pixel coordinate.
 * @param[in] y vertical pixel coordinate
 */
EAPI Elm_Map_Overlay *elm_map_overlay_scale_add(Elm_Map *obj, Evas_Coord x, Evas_Coord y);

/**
 * Add a new overlay to the map object. This overlay has a default type.
 *
 * @return The created overlay or @c NULL upon failure.
 *
 * A overlay will be created and shown in a specific point of the map, defined
 * by @p lon and @p lat.
 *
 * The created overlay has a default style layout before content or
 * icon is set.
 * If content or icon is set, those are displayed instead of default style
 * layout.
 * You can set by using elm_map_overlay_content_set() or
 * elm_map_overlay_icon_set(). If NULL is set, default style
 * is shown again.
 *
 * Overlay created with this method can be deleted by elm_map_overlay_del().
 *
 * @see elm_map_overlay_del()
 * @see elm_map_overlay_class_add()
 * @see elm_map_overlay_bubble_add()
 * @see elm_map_overlay_content_set()
 * @see elm_map_overlay_icon_set()
 *
 * @ingroup Map
 * 
 *
 * @param[in] lon The longitude of the overlay.
 * @param[in] lat The latitude of the overlay.
 */
EAPI Elm_Map_Overlay *elm_map_overlay_add(Elm_Map *obj, double lon, double lat);

/**
 * Convert canvas coordinates into geographic coordinates
 * (longitude, latitude).
 *
 * This gets longitude and latitude from canvas x, y coordinates. The canvas
 * coordinates mean x, y coordinate from current viewport.
 *
 * see elm_map_region_to_canvas_convert()
 *
 * @ingroup Map
 * 
 *
 * @param[in] x horizontal coordinate of the point to convert.
 * @param[in] y vertical coordinate of the point to convert.
 * @param[out] lon A pointer to the longitude.
 * @param[out] lat A pointer to the latitude.
 */
EAPI void elm_map_canvas_to_region_convert(const Elm_Map *obj, Evas_Coord x, Evas_Coord y, double *lon, double *lat);

#endif
