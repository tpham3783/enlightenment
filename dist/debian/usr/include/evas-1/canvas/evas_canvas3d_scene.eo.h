#ifndef _EVAS_CANVAS3D_SCENE_EO_H_
#define _EVAS_CANVAS3D_SCENE_EO_H_

#ifndef _EVAS_CANVAS3D_SCENE_EO_CLASS_TYPE
#define _EVAS_CANVAS3D_SCENE_EO_CLASS_TYPE

typedef Eo Evas_Canvas3D_Scene;

#endif

#ifndef _EVAS_CANVAS3D_SCENE_EO_TYPES
#define _EVAS_CANVAS3D_SCENE_EO_TYPES


#endif
#define EVAS_CANVAS3D_SCENE_CLASS evas_canvas3d_scene_class_get()

EAPI const Eo_Class *evas_canvas3d_scene_class_get(void) EINA_CONST;

/**
 * Set the root node of a scene.
 *
 * @ingroup Evas_Canvas3D_Scene
 *
 * @param[in] node A node which will be used as a root node for the scene.
 */
EOAPI void  evas_canvas3d_scene_root_node_set(Evas_Canvas3D_Node *node);

/**
 * Get the root node of a scene.
 *
 * @return        The root node of the given scene.
 *
 * @ingroup Evas_Canvas3D_Scene
 */
EOAPI Evas_Canvas3D_Node * evas_canvas3d_scene_root_node_get(void);

/**
 * Set the camera node of a scene.
 *
 * @ingroup Evas_Canvas3D_Scene
 *
 * @param[in] node A node which will be used as a camera node for the scene.
 */
EOAPI void  evas_canvas3d_scene_camera_node_set(Evas_Canvas3D_Node *node);

/**
 * Get the camera node of a scene.
 *
 * @return        The camera node of the given scene.
 *
 * @ingroup Evas_Canvas3D_Scene
 */
EOAPI Evas_Canvas3D_Node * evas_canvas3d_scene_camera_node_get(void);

/**
 * Set the resolution of a scene.
 *
 * A scene should be rendered to be displayed through an image objects. The
 * resolution defines size of the internal surface holding the rendered result.
 *
 * @ingroup Evas_Canvas3D_Scene
 * 
 *
 * @param[in] w Width of the resolution.
 * @param[in] h Height of the resolution.
 */
EOAPI void  evas_canvas3d_scene_size_set(int w, int h);

/**
 * Get the internal resolution of a scene.
 *
 * @ingroup Evas_Canvas3D_Scene
 * 
 *
 * @param[out] w Pointer to receive width of the resolution.
 * @param[out] h Pointer to receive height of the resolution.
 */
EOAPI void  evas_canvas3d_scene_size_get(int *w, int *h);

/**
 * Set the background color of a scene.
 *
 * Background color defines initial color of pixels before a scene is rendered.
 * If you want to display a scene with background evas objects are still
 * remaining as if it was the background, set the alpha term to 0.0.
 *
 * Default background color is (0.0, 0.0, 0.0, 0.0).
 *
 * @ingroup Evas_Canvas3D_Scene
 * 
 *
 * @param[in] r Red component of the background color.
 * @param[in] g Green component of the background color.
 * @param[in] b Blue component of the background color.
 * @param[in] a Alpha component of the background color.
 */
EOAPI void  evas_canvas3d_scene_background_color_set(Evas_Real r, Evas_Real g, Evas_Real b, Evas_Real a);

/**
 * Get the background color of a scene.
 *
 * @ingroup Evas_Canvas3D_Scene
 * 
 *
 * @param[out] r Pointer to receive red component of the background color.
 * @param[out] g Pointer to receive green component of the background color.
 * @param[out] b Pointer to receive blue component of the background color.
 * @param[out] a Pointer to receive alpha component of the background color.
 */
EOAPI void  evas_canvas3d_scene_background_color_get(Evas_Real *r, Evas_Real *g, Evas_Real *b, Evas_Real *a);

/**
 * Get information on the most front visible mesh for the given position.
 *
 * (x, y) is the screen coordinate of the given scene. That is, left-top is
 * (0, 0) and right-bottom is (w, h) where (w, h) is the size of the scene.
 * The texture coordinate is useful when using proxy texture source.
 *
 * @ingroup Evas_Canvas3D_Scene
 * 
 *
 * @param[in] x X coordinate of the picking position.
 * @param[in] y Y coordinate of the picking position.
 * @param[out] node Pointer to receive the node contains the picked mesh.
 * @param[out] mesh Pointer to receive the picked mesh.
 * @param[out] s Pointer to receive the texture "s" coordinate.
 * @param[out] t Pointer to receive the texture "t" coordinate.
 */
EOAPI Eina_Bool  evas_canvas3d_scene_pick(Evas_Real x, Evas_Real y, Evas_Canvas3D_Node **node, Evas_Canvas3D_Mesh **mesh, Evas_Real *s, Evas_Real *t);

/**
 * Search given node in the given position.
 *
 * @ingroup Evas_Canvas3D_Scene
 * 
 *
 * @param[in] x X coordinate of the picking position.
 * @param[in] y Y coordinate of the picking position.
 * @param[in] node Node for search.
 */
EOAPI Evas_Canvas3D_Node * evas_canvas3d_scene_exist(Evas_Real x, Evas_Real y, Evas_Canvas3D_Node *node);

/**
 * Get list of the all root members from scene in the given position.
 *
 * @ingroup Evas_Canvas3D_Scene
 * 
 *
 * @param[in] x X coordinate of the picking position.
 * @param[in] y Y coordinate of the picking position.
 */
EOAPI Eina_List * evas_canvas3d_scene_pick_member_list_get(Evas_Real x, Evas_Real y);

/**
 * Enable or disable shadows on given scene
 *
 * If shadows_enabled @c EINA_TRUE, the objects in the scene can throw shadow to another objects located behind them.
 * The depth map used for shading. Directed and projective light sources are supported.
 *
 * @ingroup Evas_Canvas3D_Scene
 * 
 *
 * @param[in] shadows_enabled shadows enabled status.
 */
EOAPI void  evas_canvas3d_scene_shadows_enable_set(Eina_Bool shadows_enabled);

/**
 * Get shadows enabled status for given scene.
 * @return The shadows enabled status.
 *
 * @ingroup Evas_Canvas3D_Scene
 * 
 */
EOAPI Eina_Bool  evas_canvas3d_scene_shadows_enable_get(void);

/**
 * Get status of color picking of the scene.
 *
 * @ingroup Evas_Canvas3D_Scene
 * 
 */
EOAPI Eina_Bool  evas_canvas3d_scene_color_pick_enable_get(void);

/**
 * Set posibility color picking.
 *
 * @ingroup Evas_Canvas3D_Scene
 * 
 *
 * @param[in] color_pick Posibility flag
 */
EOAPI Eina_Bool  evas_canvas3d_scene_color_pick_enable_set(Eina_Bool color_pick);


#endif
