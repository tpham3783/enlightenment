#ifndef _EFL_GFX_SHAPE_EO_H_
#define _EFL_GFX_SHAPE_EO_H_

#ifndef _EFL_GFX_SHAPE_EO_CLASS_TYPE
#define _EFL_GFX_SHAPE_EO_CLASS_TYPE

typedef Eo Efl_Gfx_Shape;

#endif

#ifndef _EFL_GFX_SHAPE_EO_TYPES
#define _EFL_GFX_SHAPE_EO_TYPES


#endif
#define EFL_GFX_SHAPE_MIXIN efl_gfx_shape_mixin_get()

EAPI const Eo_Class *efl_gfx_shape_mixin_get(void) EINA_CONST;

/**
 * @brief Get the stroke scaling factor used for stroking this path.
 *
 * @return stroke scale value
 *
 * @since 1.14
 *
 * @ingroup Efl_Gfx_Shape
 */
EOAPI double  efl_gfx_shape_stroke_scale_get(void);

/**
 * @brief Sets the stroke scale to be used for stroking the path. the scale
 * property will be used along with stroke width property.
 *
 * @param[in] s stroke scale value
 *
 * @since 1.14
 *
 * @ingroup Efl_Gfx_Shape
 */
EOAPI void  efl_gfx_shape_stroke_scale_set(double s);

/**
 * @brief Gets the color used for stroking the path.
 *
 * @param[out] r The red component of the given color.
 * @param[out] g The green component of the given color.
 * @param[out] b The blue component of the given color.
 * @param[out] a The alpha component of the given color.
 *
 * @since 1.14
 *
 * @ingroup Efl_Gfx_Shape
 */
EOAPI void  efl_gfx_shape_stroke_color_get(int *r, int *g, int *b, int *a);

/**
 * @brief Sets the color to be used for stroking the path.
 *
 * @param[in] r The red component of the given color.
 * @param[in] g The green component of the given color.
 * @param[in] b The blue component of the given color.
 * @param[in] a The alpha component of the given color.
 *
 * @since 1.14
 *
 * @ingroup Efl_Gfx_Shape
 */
EOAPI void  efl_gfx_shape_stroke_color_set(int r, int g, int b, int a);

/**
 * @brief Gets the stroke width to be used for stroking the path.
 *
 * @return stroke width to be used
 *
 * @since 1.14
 *
 * @ingroup Efl_Gfx_Shape
 */
EOAPI double  efl_gfx_shape_stroke_width_get(void);

/**
 * @brief Sets the stroke width to be used for stroking the path.
 *
 * @param[in] w stroke width to be used
 *
 * @since 1.14
 *
 * @ingroup Efl_Gfx_Shape
 */
EOAPI void  efl_gfx_shape_stroke_width_set(double w);

/** Not Implemented
 *
 * @ingroup Efl_Gfx_Shape
 */
EOAPI double  efl_gfx_shape_stroke_location_get(void);

/**
 * @brief Not Implemented
 *
 * @param[in] centered
 *
 * @ingroup Efl_Gfx_Shape
 */
EOAPI void  efl_gfx_shape_stroke_location_set(double centered);

/**
 * @brief Not Implemented
 *
 * @param[out] dash
 * @param[out] length
 *
 * @ingroup Efl_Gfx_Shape
 */
EOAPI void  efl_gfx_shape_stroke_dash_get(const Efl_Gfx_Dash **dash, unsigned int *length);

/**
 * @brief Not Implemented
 *
 * @param[in] dash
 * @param[in] length
 *
 * @ingroup Efl_Gfx_Shape
 */
EOAPI void  efl_gfx_shape_stroke_dash_set(const Efl_Gfx_Dash *dash, unsigned int length);

/**
 * @brief Gets the cap style used for stroking path.
 *
 * @return cap style to use, default is EFL_GFX_CAP_BUTT
 *
 * @since 1.14
 *
 * @ingroup Efl_Gfx_Shape
 */
EOAPI Efl_Gfx_Cap  efl_gfx_shape_stroke_cap_get(void);

/**
 * @brief Sets the cap style to be used for stroking the path. The cap will be
 * used for capping the end point of a  open subpath.
 *
 * See also @ref Efl_Gfx_Cap.
 *
 * @param[in] c cap style to use, default is EFL_GFX_CAP_BUTT
 *
 * @since 1.14
 *
 * @ingroup Efl_Gfx_Shape
 */
EOAPI void  efl_gfx_shape_stroke_cap_set(Efl_Gfx_Cap c);

/**
 * @brief Gets the join style used for stroking path.
 *
 * @return join style to use, default is EFL_GFX_JOIN_MITER
 *
 * @since 1.14
 *
 * @ingroup Efl_Gfx_Shape
 */
EOAPI Efl_Gfx_Join  efl_gfx_shape_stroke_join_get(void);

/**
 * @brief Sets the join style to be used for stroking the path. The join style
 * will be used for joining the two line segment while stroking teh path.
 *
 * See also @ref Efl_Gfx_Join.
 *
 * @param[in] j join style to use, default is EFL_GFX_JOIN_MITER
 *
 * @since 1.14
 *
 * @ingroup Efl_Gfx_Shape
 */
EOAPI void  efl_gfx_shape_stroke_join_set(Efl_Gfx_Join j);

/**
 * @brief Set the list of commands and points to be used to create the content
 * of shape.
 *
 * See @ref efl_gfx_path interface for how to create a command list.
 *
 * @param[in] op command list
 * @param[in] points point list
 *
 * @since 1.14
 *
 * @ingroup Efl_Gfx_Shape
 */
EOAPI void  efl_gfx_shape_path_set(const Efl_Gfx_Path_Command *op, const double *points);

/**
 * @brief Gets the command and points list
 *
 * @param[out] op command list
 * @param[out] points point list
 *
 * @since 1.14
 *
 * @ingroup Efl_Gfx_Shape
 */
EOAPI void  efl_gfx_shape_path_get(const Efl_Gfx_Path_Command **op, const double **points);

/**
 * No description supplied.
 *
 * @param[out] commands No description supplied.
 * @param[out] points No description supplied.
 */
EOAPI void  efl_gfx_shape_path_length_get(unsigned int *commands, unsigned int *points);

/**
 * No description supplied.
 *
 * @param[out] x No description supplied.
 * @param[out] y No description supplied.
 */
EOAPI void  efl_gfx_shape_current_get(double *x, double *y);

/**
 * No description supplied.
 *
 * @param[out] x No description supplied.
 * @param[out] y No description supplied.
 */
EOAPI void  efl_gfx_shape_current_ctrl_get(double *x, double *y);

/**
 * @brief Copy the shape data from the object specified .
 *
 * @param[in] dup_from Shape object from where data will be copied.
 *
 * @since 1.14
 *
 * @ingroup Efl_Gfx_Shape
 */
EOAPI void  efl_gfx_shape_dup(Eo_Base *dup_from);

/**
 * @brief Compute and return the bounding box of the currently set path
 *
 * @param[out] r Contain the bounding box of the currently set path
 *
 * @since 1.14
 *
 * @ingroup Efl_Gfx_Shape
 */
EOAPI void  efl_gfx_shape_bounds_get(Eina_Rectangle *r);

/** Reset the shape data of the shape object.
 *
 * @since 1.14
 *
 * @ingroup Efl_Gfx_Shape
 */
EOAPI void  efl_gfx_shape_reset(void);

/**
 * @brief Moves the current point to the given point,  implicitly starting a
 * new subpath and closing the previous one.
 *
 * See also @ref efl_gfx_shape_append_close.
 *
 * @param[in] y Y co-ordinate of the current point.
 *
 * @since 1.14
 *
 * @ingroup Efl_Gfx_Shape
 */
EOAPI void  efl_gfx_shape_append_move_to(double x, double y);

/**
 * @brief Adds a straight line from the current position to the given endPoint.
 * After the line is drawn, the current position is updated to be at the end
 * point of the line.
 *
 * If no current position present, it draws a line to itself, basically a
 * point.
 *
 * See also @ref efl_gfx_shape_append_move_to.
 *
 * @param[in] y Y co-ordinate of end point of the line.
 *
 * @since 1.14
 *
 * @ingroup Efl_Gfx_Shape
 */
EOAPI void  efl_gfx_shape_append_line_to(double x, double y);

/**
 * @brief Adds a quadratic Bezier curve between the current position and the
 * given end point (x,y) using the control points specified by (ctrl_x,
 * ctrl_y). After the path is drawn, the current position is updated to be at
 * the end point of the path.
 *
 * @param[in] y Y co-ordinate of end point of the line.
 * @param[in] ctrl_x X co-ordinate of control point.
 * @param[in] ctrl_y Y co-ordinate of control point.
 *
 * @since 1.14
 *
 * @ingroup Efl_Gfx_Shape
 */
EOAPI void  efl_gfx_shape_append_quadratic_to(double x, double y, double ctrl_x, double ctrl_y);

/**
 * @brief Same as efl_gfx_path_append_quadratic_to() api only difference is
 * that it uses the current control point to draw the bezier.
 *
 * See also @ref efl_gfx_shape_append_quadratic_to.
 *
 * @param[in] y Y co-ordinate of end point of the line.
 *
 * @since 1.14
 *
 * @ingroup Efl_Gfx_Shape
 */
EOAPI void  efl_gfx_shape_append_squadratic_to(double x, double y);

/**
 * @brief Adds a cubic Bezier curve between the current position and the given
 * end point (x,y) using the control points specified by (ctrl_x0, ctrl_y0),
 * and (ctrl_x1, ctrl_y1). After the path is drawn, the current position is
 * updated to be at the end point of the path.
 *
 * @param[in] y Y co-ordinate of end point of the line.
 * @param[in] ctrl_x0 X co-ordinate of 1st control point.
 * @param[in] ctrl_y0 Y co-ordinate of 1st control point.
 * @param[in] ctrl_x1 X co-ordinate of 2nd control point.
 * @param[in] ctrl_y1 Y co-ordinate of 2nd control point.
 *
 * @since 1.14
 *
 * @ingroup Efl_Gfx_Shape
 */
EOAPI void  efl_gfx_shape_append_cubic_to(double x, double y, double ctrl_x0, double ctrl_y0, double ctrl_x1, double ctrl_y1);

/**
 * @brief Same as efl_gfx_path_append_cubic_to() api only difference is that it
 * uses the current control point to draw the bezier.
 *
 * See also @ref efl_gfx_shape_append_cubic_to.
 *
 * @param[in] y Y co-ordinate of end point of the line.
 * @param[in] ctrl_x X co-ordinate of 2nd control point.
 * @param[in] ctrl_y Y co-ordinate of 2nd control point.
 *
 * @since 1.14
 *
 * @ingroup Efl_Gfx_Shape
 */
EOAPI void  efl_gfx_shape_append_scubic_to(double x, double y, double ctrl_x, double ctrl_y);

/**
 * @brief Append an arc that connects from the current point int the point list
 * to the given point (x,y). The arc is defined by the given radius in
 *  x-direction (rx) and radius in y direction (ry).
 *
 * Use this api if you know the end point's of the arc otherwise use more
 * convenient function @ref efl_gfx_shape_append_arc_to.
 *
 * @param[in] y Y co-ordinate of end point of the arc.
 * @param[in] rx radius of arc in x direction.
 * @param[in] ry radius of arc in y direction.
 * @param[in] angle x-axis rotation , normally 0.
 * @param[in] large_arc Defines whether to draw the larger arc or smaller arc
 * joining two point.
 * @param[in] sweep Defines whether the arc will be drawn counter-clockwise or
 * clockwise from current point to the end point taking into account the
 * large_arc property.
 *
 * @since 1.14
 *
 * @ingroup Efl_Gfx_Shape
 */
EOAPI void  efl_gfx_shape_append_arc_to(double x, double y, double rx, double ry, double angle, Eina_Bool large_arc, Eina_Bool sweep);

/**
 * @brief Closes the current subpath by drawing a line to the beginning of the
 * subpath, automatically starting a new path. The current point of the new
 * path is (0, 0).
 *
 * If the subpath does not contain any points, this function does nothing.
 *
 * @since 1.14
 *
 * @ingroup Efl_Gfx_Shape
 */
EOAPI void  efl_gfx_shape_append_close(void);

/**
 * @brief Append a circle with given center and radius.
 *
 * @param[in] y Y co-ordinate of the center of the circle.
 * @param[in] radius radius of the circle.
 *
 * @since 1.14
 *
 * @ingroup Efl_Gfx_Shape
 */
EOAPI void  efl_gfx_shape_append_circle(double x, double y, double radius);

/**
 * @brief Append the given rectangle with rounded corner to the path.
 *
 * The xr and yr arguments specify the radii of the ellipses defining the
 * corners of the rounded rectangle.
 *
 * xr and yr are specified in terms of width and height respectively.
 *
 * If xr and yr are 0, then it will draw a rectangle without rounded corner.
 *
 * @param[in] y Y co-ordinate of the rectangle.
 * @param[in] w Width of the rectangle.
 * @param[in] h Height of the rectangle.
 * @param[in] rx The x radius of the rounded corner and should be in range [ 0
 * to w/2 ]
 * @param[in] ry The y radius of the rounded corner and should be in range [ 0
 * to h/2 ]
 *
 * @since 1.14
 *
 * @ingroup Efl_Gfx_Shape
 */
EOAPI void  efl_gfx_shape_append_rect(double x, double y, double w, double h, double rx, double ry);

/**
 * No description supplied.
 *
 * @param[in] svg_path_data No description supplied.
 */
EOAPI void  efl_gfx_shape_append_svg_path(const char *svg_path_data);

/**
 * No description supplied.
 *
 * @param[in] from No description supplied.
 * @param[in] to No description supplied.
 * @param[in] pos_map No description supplied.
 */
EOAPI Eina_Bool  efl_gfx_shape_interpolate(const Eo_Base *from, const Eo_Base *to, double pos_map);

/**
 * No description supplied.
 *
 * @param[in] with No description supplied.
 */
EOAPI Eina_Bool  efl_gfx_shape_equal_commands(const Eo_Base *with);


#endif
