#ifndef _ELM_GLVIEW_EO_LEGACY_H_
#define _ELM_GLVIEW_EO_LEGACY_H_

#ifndef _ELM_GLVIEW_EO_CLASS_TYPE
#define _ELM_GLVIEW_EO_CLASS_TYPE

typedef Eo Elm_Glview;

#endif

#ifndef _ELM_GLVIEW_EO_TYPES
#define _ELM_GLVIEW_EO_TYPES


#endif

/**
 * Sets the size of the glview
 *
 * @ingroup GLView
 *
 * @param[in] w width of the glview object
 * @param[in] h height of the glview object
 */
EAPI void elm_glview_size_set(Elm_Glview *obj, int w, int h);

/**
 * Get the size of the glview.
 *
 * Note that this function returns the actual image size of the
 * glview. This means that when the scale policy is set to
 * #ELM_GLVIEW_RESIZE_POLICY_SCALE, it'll return the non-scaled
 * size.
 *
 * @ingroup GLView
 *
 * @param[out] w width of the glview object
 * @param[out] h height of the glview object
 */
EAPI void elm_glview_size_get(const Elm_Glview *obj, int *w, int *h);

/**
 * Set the resize policy for the glview object.
 *
 * By default, the resize policy is set to #ELM_GLVIEW_RESIZE_POLICY_RECREATE.
 * When resize is called it destroys the previous surface and recreates the
 * newly specified size. If the policy is set to
 * #ELM_GLVIEW_RESIZE_POLICY_SCALE, however, glview only scales the image
 * object and not the underlying GL Surface.
 *
 * @ingroup GLView
 *
 * @param[in] policy The scaling policy.
 */
EAPI Eina_Bool elm_glview_resize_policy_set(Elm_Glview *obj, Elm_GLView_Resize_Policy policy);

/**
 * Notifies that there has been changes in the GLView.
 *
 * @ingroup GLView
 */
EAPI void elm_glview_changed_set(Elm_Glview *obj);

/**
 * Set the resize function that gets called when resize happens.
 *
 * The resize function gets called during the render loop.
 * This function allows glview to hide all the rendering context/surface
 * details and have the user just call GL calls that they desire
 * when resize happens.
 *
 * @ingroup GLView
 *
 * @param[in] func The resize function to be registered.
 */
EAPI void elm_glview_resize_func_set(Elm_Glview *obj, Elm_GLView_Func_Cb func);

/**
 * Set the render function that runs in the main loop.
 *
 * The registered del function gets called when GLView object is deleted.
 * This function allows glview to hide all the rendering context/surface
 * details and have the user just call GL calls that they desire
 * when delete happens.
 *
 * @ingroup GLView
 *
 * @param[in] func The delete function to be registered.
 */
EAPI void elm_glview_del_func_set(Elm_Glview *obj, Elm_GLView_Func_Cb func);

/**
 * Set the init function that runs once in the main loop.
 *
 * The registered init function gets called once during the render loop.
 * This function allows glview to hide all the rendering context/surface
 * details and have the user just call GL calls that they desire
 * for initialization GL calls.
 *
 * @ingroup GLView
 *
 * @param[in] func The init function to be registered.
 */
EAPI void elm_glview_init_func_set(Elm_Glview *obj, Elm_GLView_Func_Cb func);

/**
 * Set the render policy for the glview object.
 *
 * By default, the render policy is set to #ELM_GLVIEW_RENDER_POLICY_ON_DEMAND.
 * This policy is set such that during the render loop, glview is only
 * redrawn if it needs to be redrawn. (i.e. when it is visible) If the policy
 * is set to #ELM_GLVIEWW_RENDER_POLICY_ALWAYS, it redraws regardless of
 * whether it is visible or needs redrawing.
 *
 * @ingroup GLView
 *
 * @param[in] policy The render policy.
 */
EAPI Eina_Bool elm_glview_render_policy_set(Elm_Glview *obj, Elm_GLView_Render_Policy policy);

/**
 * Set the mode of the GLView. Supports alpha, depth, stencil.
 *
 * @return True if set properly.
 *
 * Direct is a hint for the elm_glview to render directly to the window
 * given that the right conditions are met. Otherwise it falls back
 * to rendering to an offscreen buffer before it gets composited to the
 * window.
 *
 * @ingroup GLView
 *
 * @param[in] mode The mode Options OR'ed enabling Alpha, Depth, Stencil, Direct.
 */
EAPI Eina_Bool elm_glview_mode_set(Elm_Glview *obj, Elm_GLView_Mode mode);

/**
 * Set the render function that runs in the main loop.
 *
 * The render function gets called in the main loop but whether it runs
 * depends on the rendering policy and whether elm_glview_changed_set()
 * gets called.
 *
 * @ingroup GLView
 *
 * @param[in] func The render function to be registered.
 */
EAPI void elm_glview_render_func_set(Elm_Glview *obj, Elm_GLView_Func_Cb func);

/**
 * Get the gl api struct for gl rendering
 *
 * @return The api object or NULL if it cannot be created
 *
 * @ingroup GLView
 */
EAPI Evas_GL_API *elm_glview_gl_api_get(const Elm_Glview *obj);

/**
 * Get the internal Evas GL attached to this view.
 *
 * @note The returned Evas_GL must not be destroyed as it is still owned
 * by the view. But this pointer can be used then to call all the evas_gl_
 * functions.
 *
 * @since 1.12
 *
 * @return The Evas_GL used by this GLView.
 *
 * @ingroup GLView
 */
EAPI Evas_GL *elm_glview_evas_gl_get(const Elm_Glview *obj);

/**
 * Get the current GL view's rotation when using direct rendering
 *
 * @return A window rotation in degrees (0, 90, 180 or 270)
 *
 * @note This rotation can be different from the device orientation. This
 * rotation value must be used in case of direct rendering and should be
 * taken into account by the application when setting the internal rotation
 * matrix for the view.
 *
 * @see ELM_GLVIEW_CLIENT_SIDE_ROTATION
 *
 * @since 1.12
 *
 * @ingroup GLView
 */
EAPI int elm_glview_rotation_get(const Elm_Glview *obj);

#endif
