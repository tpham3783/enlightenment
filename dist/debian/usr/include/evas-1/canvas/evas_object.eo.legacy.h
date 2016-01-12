#ifndef _EVAS_OBJECT_EO_LEGACY_H_
#define _EVAS_OBJECT_EO_LEGACY_H_

#ifndef _EVAS_OBJECT_EO_CLASS_TYPE
#define _EVAS_OBJECT_EO_CLASS_TYPE

typedef Eo Evas_Object;

#endif

#ifndef _EVAS_OBJECT_EO_TYPES
#define _EVAS_OBJECT_EO_TYPES


#endif

/**
 * @brief Sets the hints for an object's maximum size.
 *
 * This is not a size enforcement in any way, it's just a hint that should be
 * used whenever appropriate.
 *
 * Values -1 will be treated as unset hint components, when queried by
 * managers.
 *
 * @note Smart objects (such as elementary) can have their own size hint
 * policy. So calling this API may or may not affect the size of smart objects.
 *
 * @param[in] w Integer to use as the maximum width hint.
 * @param[in] h Integer to use as the maximum height hint.
 *
 * @ingroup Evas_Object
 */
EAPI void evas_object_size_hint_max_set(Evas_Object *obj, Evas_Coord w, Evas_Coord h);

/**
 * @brief Retrieves the hints for an object's maximum size.
 *
 * These are hints on the maximum sizes @c obj should have. This is not a size
 * enforcement in any way, it's just a hint that should be used whenever
 * appropriate.
 *
 * @note Use @c null pointers on the hint components you're not interested in:
 * they'll be ignored by the function.
 *
 * @param[out] w Integer to use as the maximum width hint.
 * @param[out] h Integer to use as the maximum height hint.
 *
 * @ingroup Evas_Object
 */
EAPI void evas_object_size_hint_max_get(const Evas_Object *obj, Evas_Coord *w, Evas_Coord *h);

/**
 * @brief Sets the hints for an object's optimum size.
 *
 * This is not a size enforcement in any way, it's just a hint that hould be
 * used whenever appropriate.
 *
 * Values 0 will be treated as unset hint components, when queried by managers.
 *
 * @note Smart objects(such as elementary) can have their own size hint policy.
 * So calling this API may or may not affect the size of smart objects.
 *
 * @param[in] w Integer to use as the preferred width hint.
 * @param[in] h Integer to use as the preferred height hint.
 *
 * @ingroup Evas_Object
 */
EAPI void evas_object_size_hint_request_set(Evas_Object *obj, Evas_Coord w, Evas_Coord h);

/**
 * @brief Retrieves the hints for an object's optimum size.
 *
 * These are hints on the optimum sizes @c obj should have. This is not a size
 * enforcement in any way, it's just a hint that should be used whenever
 * appropriate.
 *
 * @note Use @c null pointers on the hint components you're not interested in:
 * they'll be ignored by the function.
 *
 * @param[out] w Integer to use as the preferred width hint.
 * @param[out] h Integer to use as the preferred height hint.
 *
 * @ingroup Evas_Object
 */
EAPI void evas_object_size_hint_request_get(const Evas_Object *obj, Evas_Coord *w, Evas_Coord *h);

/**
 * @brief Retrieves the type of the given Evas object.
 *
 * For Evas' builtin types, the return strings will be one of "rectangle",
 * "line", "polygon", "text", "textblock" or "image".
 *
 * For Evas smart objects (see @ref Evas_Smart_Group), the name of the smart
 * class itself is returned on this call. For the built-in smart objects, these
 * names are "EvasObjectSmartClipped" for the clipped smart object,
 * "Evas_Object_Box" for the box object and "Evas_Object_Table for the table
 * object.
 *
 * @return The type of the object.
 *
 * @ingroup Evas_Object
 */
EAPI const char *evas_object_type_get(const Evas_Object *obj);

/**
 * @brief Sets the hints for an object's minimum size.
 *
 * This is not a size enforcement in any way, it's just a hint that should be
 * used whenever appropriate.
 *
 * Values 0 will be treated as unset hint components, when queried by managers.
 *
 * @note Smart objects(such as elementary) can have their own size hint policy.
 * So calling this API may or may not affect the size of smart objects.
 *
 * @param[in] w Integer to use as the minimum width hint.
 * @param[in] h Integer to use as the minimum height hint.
 *
 * @ingroup Evas_Object
 */
EAPI void evas_object_size_hint_min_set(Evas_Object *obj, Evas_Coord w, Evas_Coord h);

/**
 * @brief Retrieves the hints for an object's minimum size.
 *
 * These are hints on the minimum sizes @c obj should have. This is not a size
 * enforcement in any way, it's just a hint that should be used whenever
 * appropriate.
 *
 * @note Use @c null pointers on the hint components you're not interested in:
 * they'll be ignored by the function.
 *
 * @param[out] w Integer to use as the minimum width hint.
 * @param[out] h Integer to use as the minimum height hint.
 *
 * @ingroup Evas_Object
 */
EAPI void evas_object_size_hint_min_get(const Evas_Object *obj, Evas_Coord *w, Evas_Coord *h);

/**
 * @brief Set pointer behavior.
 *
 * This function has direct effect on event callbacks related to mouse.
 *
 * If @c setting is EVAS_OBJECT_POINTER_MODE_AUTOGRAB, then when mouse is down
 * at this object, events will be restricted to it as source, mouse moves, for
 * example, will be emitted even if outside this object area.
 *
 * If @c setting is EVAS_OBJECT_POINTER_MODE_NOGRAB, then events will be
 * emitted just when inside this object area.
 *
 * The default value is EVAS_OBJECT_POINTER_MODE_AUTOGRAB.
 *
 * @param[in] pointer_mode Desired behavior.
 *
 * @ingroup Evas_Object
 */
EAPI void evas_object_pointer_mode_set(Evas_Object *obj, Evas_Object_Pointer_Mode pointer_mode);

/**
 * @brief Determine how pointer will behave.
 *
 * @return Desired behavior.
 *
 * @ingroup Evas_Object
 */
EAPI Evas_Object_Pointer_Mode evas_object_pointer_mode_get(const Evas_Object *obj);

/**
 * @brief Sets the render mode to be used for compositing the Evas object.
 *
 * Note that only copy and blend modes are actually supported: -
 * @ref Evas_Render_Op.EVAS_RENDER_BLEND means the object will be merged on top
 * of objects below it using simple alpha compositing. -
 * @ref Evas_Render_Op.EVAS_RENDER_COPY means this object's pixels will replace
 * everything that is below, making this object opaque.
 *
 * Please do not assume that @ref Evas_Render_Op.EVAS_RENDER_COPY mode can be
 * used to "poke" holes in a window (to see through it), as only the compositor
 * can ensure that. Copy mode should only be used with otherwise opaque
 * widgets, or inside non-window surfaces (eg. a transparent background inside
 * an Ecore.Evas.Buffer).
 *
 * @param[in] render_op One of the Evas_Render_Op values. Only blend (default)
 * and copy modes are supported.
 *
 * @ingroup Evas_Object
 */
EAPI void evas_object_render_op_set(Evas_Object *obj, Evas_Render_Op render_op);

/**
 * @brief Retrieves the current value of the operation used for rendering the
 * Evas object.
 *
 * @return One of the Evas_Render_Op values. Only blend (default) and copy
 * modes are supported.
 *
 * @ingroup Evas_Object
 */
EAPI Evas_Render_Op evas_object_render_op_get(const Evas_Object *obj);

/**
 * @brief Set whether an Evas object is to freeze (discard) events.
 *
 * If @c freeze is @c true, it will make events on @c obj to be discarded.
 * Unlike @ref evas_object_pass_events_set, events will not be passed to next
 * lower object. This API can be used for blocking events while @c obj is on
 * transiting.
 *
 * If @c freeze is @c false, events will be processed on that object as normal.
 *
 * @warning If you block only key/mouse up events with this API, we won't
 * guarantee the state of the object, that only had key/mouse down events, will
 * be.
 *
 * @param[in] freeze Pass when @c obj is to freeze events ($true) or not
 * ($false).
 *
 * @since 1.1
 *
 * @ingroup Evas_Object
 */
EAPI void evas_object_freeze_events_set(Evas_Object *obj, Eina_Bool freeze);

/**
 * @brief Determine whether an object is set to freeze (discard) events.
 *
 * @return Pass when @c obj is to freeze events ($true) or not ($false).
 *
 * @since 1.1
 *
 * @ingroup Evas_Object
 */
EAPI Eina_Bool evas_object_freeze_events_get(const Evas_Object *obj);

/**
 * @brief Set current object transformation map.
 *
 * This sets the map on a given object. It is copied from the @c map pointer,
 * so there is no need to keep the @c map object if you don't need it anymore.
 *
 * A map is a set of 4 points which have canvas x, y coordinates per point,
 * with an optional z point value as a hint for perspective correction, if it
 * is available. As well each point has u and v coordinates. These are like
 * "texture coordinates" in OpenGL in that they define a point in the source
 * image that is mapped to that map vertex/point. The u corresponds to the x
 * coordinate of this mapped point and v, the y coordinate. Note that these
 * coordinates describe a bounding region to sample.
 *
 * @note The map points a uv coordinates match the image geometry. If the
 * @c map parameter is @c null, the stored map will be freed and geometry prior
 * to enabling/setting a map will be restored.
 *
 * @param[in] map The map.
 *
 * @ingroup Evas_Object
 */
EAPI void evas_object_map_set(Evas_Object *obj, const Evas_Map *map);

/**
 * @brief Get current object transformation map.
 *
 * This returns the current internal map set on the indicated object. It is
 * intended for read-only access and is only valid as long as the object is not
 * deleted or the map on the object is not changed.
 *
 * @return The map.
 *
 * @ingroup Evas_Object
 */
EAPI const Evas_Map *evas_object_map_get(const Evas_Object *obj);

/**
 * @brief Sets the hints for an object's aspect ratio.
 *
 * This is not a size enforcement in any way, it's just a hint that should be
 * used whenever appropriate.
 *
 * If any of the given aspect ratio terms are 0, the object's container will
 * ignore the aspect and scale @c obj to occupy the whole available area, for
 * any given policy.
 *
 * @note Smart objects(such as elementary) can have their own size hint policy.
 * So calling this API may or may not affect the size of smart objects.
 *
 * @param[in] aspect The policy/type of aspect ratio to apply to @c obj.
 * @param[in] w Integer to use as aspect width ratio term.
 * @param[in] h Integer to use as aspect height ratio term.
 *
 * @ingroup Evas_Object
 */
EAPI void evas_object_size_hint_aspect_set(Evas_Object *obj, Evas_Aspect_Control aspect, Evas_Coord w, Evas_Coord h);

/**
 * @brief Retrieves the hints for an object's aspect ratio.
 *
 * The different aspect ratio policies are documented in the
 * #Evas_Aspect_Control type. A container respecting these size hints would
 * resize its children accordingly to those policies.
 *
 * For any policy, if any of the given aspect ratio terms are 0, the object's
 * container should ignore the aspect and scale @c obj to occupy the whole
 * available area. If they are both positive integers, that proportion will be
 * respected, under each scaling policy.
 *
 * @note Use @c null pointers on the hint components you're not interested in:
 * they'll be ignored by the function.
 *
 * @param[out] aspect The policy/type of aspect ratio to apply to @c obj.
 * @param[out] w Integer to use as aspect width ratio term.
 * @param[out] h Integer to use as aspect height ratio term.
 *
 * @ingroup Evas_Object
 */
EAPI void evas_object_size_hint_aspect_get(const Evas_Object *obj, Evas_Aspect_Control *aspect, Evas_Coord *w, Evas_Coord *h);

/**
 * @brief Clip one object to another.
 *
 * This function will clip the object @c obj to the area occupied by the object
 * @c clip. This means the object @c obj will only be visible within the area
 * occupied by the clipping object ($clip).
 *
 * The color of the object being clipped will be multiplied by the color of the
 * clipping one, so the resulting color for the former will be "RESULT = (OBJ *
 * CLIP) / (255 * 255)", per color element (red, green, blue and alpha).
 *
 * Clipping is recursive, so clipping objects may be clipped by others, and
 * their color will in term be multiplied. You may not set up circular clipping
 * lists (i.e. object 1 clips object 2, which clips object 1): the behavior of
 * Evas is undefined in this case.
 *
 * Objects which do not clip others are visible in the canvas as normal; those
 * that clip one or more objects become invisible themselves, only affecting
 * what they clip. If an object ceases to have other objects being clipped by
 * it, it will become visible again.
 *
 * The visibility of an object affects the objects that are clipped by it, so
 * if the object clipping others is not shown (as in @ref evas_object_show),
 * the objects clipped by it will not be shown  either.
 *
 * If @c obj was being clipped by another object when this function is  called,
 * it gets implicitly removed from the old clipper's domain and is made now to
 * be clipped by its new clipper.
 *
 * @note At the moment the only objects that can validly be used to clip other
 * objects are rectangle objects. All other object types are invalid and the
 * result of using them is undefined. The clip object @c clip must be a valid
 * object, but can also be @c null, in which case the effect of this function
 * is the same as @ref evas_object_clip_unset on the @c obj object.
 *
 * @param[in] clip The object to clip @c obj by.
 *
 * @ingroup Evas_Object
 */
EAPI void evas_object_clip_set(Evas_Object *obj, Evas_Object *clip) EINA_ARG_NONNULL(2);

/**
 * @brief Get the object clipping @c obj (if any).
 *
 * This function returns the object clipping @c obj. If @c obj is not being
 * clipped at all, @c null is returned. The object @c obj must be a valid
 * Evas_Object.
 *
 * @return The object to clip @c obj by.
 *
 * @ingroup Evas_Object
 */
EAPI Evas_Object *evas_object_clip_get(const Evas_Object *obj);

/**
 * @brief Sets the hints for an object's padding space.
 *
 * This is not a size enforcement in any way, it's just a hint that should be
 * used whenever appropriate.
 *
 * @note Smart objects(such as elementary) can have their own size hint policy.
 * So calling this API may or may not affect the size of smart objects.
 *
 * @param[in] l Integer to specify left padding.
 * @param[in] r Integer to specify right padding.
 * @param[in] t Integer to specify top padding.
 * @param[in] b Integer to specify bottom padding.
 *
 * @ingroup Evas_Object
 */
EAPI void evas_object_size_hint_padding_set(Evas_Object *obj, Evas_Coord l, Evas_Coord r, Evas_Coord t, Evas_Coord b);

/**
 * @brief Retrieves the hints for an object's padding space.
 *
 * Padding is extra space an object takes on each of its delimiting rectangle
 * sides, in canvas units.
 *
 * This is not a size enforcement in any way, it's just a hint that should be
 * used whenever appropriate.
 *
 * @note Use @c null pointers on the hint components you're not interested in:
 * they'll be ignored by the function.
 *
 * @param[out] l Integer to specify left padding.
 * @param[out] r Integer to specify right padding.
 * @param[out] t Integer to specify top padding.
 * @param[out] b Integer to specify bottom padding.
 *
 * @ingroup Evas_Object
 */
EAPI void evas_object_size_hint_padding_get(const Evas_Object *obj, Evas_Coord *l, Evas_Coord *r, Evas_Coord *t, Evas_Coord *b);

/**
 * @brief Set whether an Evas object is to repeat events.
 *
 * If @c repeat is @c true, it will make events on @c obj to also be repeated
 * for the next lower object in the objects' stack (see see @ref
 * evas_object_below_get).
 *
 * If @c repeat is @c false, events occurring on @c obj will be processed only
 * on it.
 *
 * @param[in] repeat Whether @c obj is to repeat events ($true) or not
 * ($false).
 *
 * @ingroup Evas_Object
 */
EAPI void evas_object_repeat_events_set(Evas_Object *obj, Eina_Bool repeat);

/**
 * @brief Determine whether an object is set to repeat events.
 *
 * @return Whether @c obj is to repeat events ($true) or not ($false).
 *
 * @ingroup Evas_Object
 */
EAPI Eina_Bool evas_object_repeat_events_get(const Evas_Object *obj);

/**
 * @brief Sets the hints for an object's weight.
 *
 * This is not a size enforcement in any way, it's just a hint that should be
 * used whenever appropriate.
 *
 * This is a hint on how a container object should resize a given child within
 * its area. Containers may adhere to the simpler logic of just expanding the
 * child object's dimensions to fit its own (see the #EVAS_HINT_EXPAND helper
 * weight macro) or the complete one of taking each child's weight hint as real
 * weights to how much of its size to allocate for them in each axis. A
 * container is supposed to, after normalizing the weights of its children
 * (with weight  hints), distribut the space it has to layout them by those
 * factors -- most weighted children get larger in this process than the least
 * ones.
 *
 * @note Default weight hint values are 0.0, for both axis.
 *
 * @param[in] x Non-negative double value to use as horizontal weight hint.
 * @param[in] y Non-negative double value to use as vertical weight hint.
 *
 * @ingroup Evas_Object
 */
EAPI void evas_object_size_hint_weight_set(Evas_Object *obj, double x, double y);

/**
 * @brief Retrieves the hints for an object's weight.
 *
 * Accepted values are zero or positive values. Some users might use this hint
 * as a boolean, but some might consider it as a proportion, see documentation
 * of possible users, which in Evas are the @ref Evas_Object_Box "box" and @ref
 * Evas_Object_Table "table" smart objects.
 *
 * This is not a size enforcement in any way, it's just a hint that should be
 * used whenever appropriate.
 *
 * @note Use @c null pointers on the hint components you're not interested in:
 * they'll be ignored by the function.
 *
 * @note If @c obj is invalid, then the hint components will be set with 0.0.
 *
 * @param[out] x Non-negative double value to use as horizontal weight hint.
 * @param[out] y Non-negative double value to use as vertical weight hint.
 *
 * @ingroup Evas_Object
 */
EAPI void evas_object_size_hint_weight_get(const Evas_Object *obj, double *x, double *y);

/**
 * @brief Sets the name of the given Evas object to the given name.
 *
 * There might be occasions where one would like to name his/her objects.
 *
 * @param[in] name The given name.
 *
 * @ingroup Evas_Object
 */
EAPI void evas_object_name_set(Evas_Object *obj, const char *name);

/**
 * @brief Retrieves the name of the given Evas object.
 *
 * Return: The name of the object or @c null, if no name has been given to it.
 *
 * @return The given name.
 *
 * @ingroup Evas_Object
 */
EAPI const char *evas_object_name_get(const Evas_Object *obj);

/**
 * @brief Sets the scaling factor for an Evas object. Does not affect all
 * objects.
 *
 * This will multiply the object's dimension by the given factor, thus altering
 * its geometry (width and height). Useful when you want scalable UI elements,
 * possibly at run time.
 *
 * @note Only text and textblock objects have scaling change handlers. Other
 * objects won't change visually on this call.
 *
 * @param[in] scale The scaling factor. 1.0 means no scaling, default size.
 *
 * @ingroup Evas_Object
 */
EAPI void evas_object_scale_set(Evas_Object *obj, double scale);

/**
 * @brief Retrieves the scaling factor for the given Evas object.
 *
 * @return The scaling factor. 1.0 means no scaling, default size.
 *
 * @ingroup Evas_Object
 */
EAPI double evas_object_scale_get(const Evas_Object *obj);

/**
 * @brief Set a hint flag on the given Evas object that it's used as a "static
 * clipper".
 *
 * This is a hint to Evas that this object is used as a big static clipper and
 * shouldn't be moved with children and otherwise considered specially. The
 * default value for new objects is @c false.
 *
 * @param[in] is_static_clip @c true if it's to be used as a static clipper,
 * @c false otherwise.
 *
 * @ingroup Evas_Object
 */
EAPI void evas_object_static_clip_set(Evas_Object *obj, Eina_Bool is_static_clip);

/**
 * @brief Get the "static clipper" hint flag for a given Evas object.
 *
 * @return @c true if it's to be used as a static clipper, @c false otherwise.
 *
 * @ingroup Evas_Object
 */
EAPI Eina_Bool evas_object_static_clip_get(const Evas_Object *obj);

/**
 * @brief Sets or unsets a given object as the currently focused one on its
 * canvas.
 *
 * Changing focus only affects where (key) input events go. There can be only
 * one object focused at any time. If @c focus is @c true, @c obj will be set
 * as the currently focused object and it will receive all keyboard events that
 * are not exclusive key grabs on other objects.
 *
 * See also @ref evas_object_key_grab, @ref evas_object_key_ungrab.
 *
 * @param[in] focus @c true when set as focused or @c false otherwise.
 *
 * @ingroup Evas_Object
 */
EAPI void evas_object_focus_set(Evas_Object *obj, Eina_Bool focus);

/**
 * @brief Retrieve whether an object has the focus.
 *
 * If the passed object is the currently focused one, @c true is returned.
 * @c false is returned, otherwise.
 *
 * @return @c true when set as focused or @c false otherwise.
 *
 * @ingroup Evas_Object
 */
EAPI Eina_Bool evas_object_focus_get(const Evas_Object *obj);

/**
 * @brief No description supplied.
 *
 * @param[in] is_frame
 *
 * @since 1.2
 *
 * @ingroup Evas_Object
 */
EAPI void evas_object_is_frame_object_set(Evas_Object *obj, Eina_Bool is_frame);

/** No description supplied.
 *
 * @since 1.2
 *
 * @ingroup Evas_Object
 */
EAPI Eina_Bool evas_object_is_frame_object_get(const Evas_Object *obj);

/**
 * @brief Enable or disable the map that is set.
 *
 * Enable or disable the use of map for the object @c obj. On enable, the
 * object geometry will be saved, and the new geometry will change (position
 * and size) to reflect the map geometry set.
 *
 * If the object doesn't have a map set (with @ref evas_object_map_set), the
 * initial geometry will be undefined. It is advised to always set a map to the
 * object first, and then call this function to enable its use.
 *
 * @param[in] enabled Enabled state.
 *
 * @ingroup Evas_Object
 */
EAPI void evas_object_map_enable_set(Evas_Object *obj, Eina_Bool enabled);

/**
 * @brief Get the map enabled state
 *
 * This returns the currently enabled state of the map on the object indicated.
 * The default map enable state is off. You can enable and disable it with
 * @ref evas_object_map_enable_set.
 *
 * @return Enabled state.
 *
 * @ingroup Evas_Object
 */
EAPI Eina_Bool evas_object_map_enable_get(const Evas_Object *obj);

/**
 * @brief Set whether to use precise (usually expensive) point collision
 * detection for a given Evas object.
 *
 * Use this function to make Evas treat objects' transparent areas as not
 * belonging to it with regard to mouse pointer events. By default, all of the
 * object's boundary rectangle will be taken in account for them.
 *
 * @warning By using precise point collision detection you'll be making Evas
 * more resource intensive.
 *
 * @param[in] precise Whether to use precise point collision detection or not.
 * The default value is false.
 *
 * @ingroup Evas_Object
 */
EAPI void evas_object_precise_is_inside_set(Evas_Object *obj, Eina_Bool precise);

/**
 * @brief Determine whether an object is set to use precise point collision
 * detection.
 *
 * @return Whether to use precise point collision detection or not. The default
 * value is false.
 *
 * @ingroup Evas_Object
 */
EAPI Eina_Bool evas_object_precise_is_inside_get(const Evas_Object *obj);

/**
 * @brief Sets the hints for an object's alignment.
 *
 * These are hints on how to align an object inside the boundaries of a
 * container/manager. Accepted values are in the 0.0 to 1.0 range, with the
 * special value #EVAS_HINT_FILL used to specify "justify" or "fill" by some
 * users. In this case, maximum size hints should be enforced with higher
 * priority, if they are set. Also, any padding hint set on objects should add
 * up to the alignment space on the final scene composition.
 *
 * See documentation of possible users: in Evas, they are the @ref
 * Evas_Object_Box "box" and @ref Evas_Object_Table "table" smart objects.
 *
 * For the horizontal component, 0.0 means to the left, 1.0 means to the right.
 * Analogously, for the vertical component, 0.0 to the top, 1.0 means to the
 * bottom.
 *
 * This is not a size enforcement in any way, it's just a hint that should be
 * used whenever appropriate.
 *
 * @note Default alignment hint values are 0.5, for both axis.
 *
 * @param[in] x Double, ranging from 0.0 to 1.0 or with the special value
 * #EVAS_HINT_FILL, to use as horizontal alignment hint.
 * @param[in] y Double, ranging from 0.0 to 1.0 or with the special value
 * #EVAS_HINT_FILL, to use as vertical alignment hint.
 *
 * @ingroup Evas_Object
 */
EAPI void evas_object_size_hint_align_set(Evas_Object *obj, double x, double y);

/**
 * @brief Retrieves the hints for on object's alignment.
 *
 * This is not a size enforcement in any way, it's just a hint that should be
 * used whenever appropriate.
 *
 * @note Use @c null pointers on the hint components you're not interested in:
 * they'll be ignored by the function.
 *
 * @note If @c obj is invalid, then the hint components will be set with 0.5
 *
 * @param[out] x Double, ranging from 0.0 to 1.0 or with the special value
 * #EVAS_HINT_FILL, to use as horizontal alignment hint.
 * @param[out] y Double, ranging from 0.0 to 1.0 or with the special value
 * #EVAS_HINT_FILL, to use as vertical alignment hint.
 *
 * @ingroup Evas_Object
 */
EAPI void evas_object_size_hint_align_get(const Evas_Object *obj, double *x, double *y);

/**
 * @brief Set whether events on a smart object's member should get propagated
 * up to its parent.
 *
 * This function has no effect if @c obj is not a member of a smart object.
 *
 * If @c prop is @c true, events occurring on this object will be propagated on
 * to the smart object of which @c obj is a member. If @c prop is @c false,
 * events occurring on this object will not be propagated on to the smart
 * object of which @c obj is a member. The default value is @c true.
 *
 * See also @ref evas_object_repeat_events_set,
 * @ref evas_object_pass_events_set, @ref evas_object_freeze_events_set.
 *
 * @param[in] propagate Whether to propagate events ($true) or not ($false).
 *
 * @ingroup Evas_Object
 */
EAPI void evas_object_propagate_events_set(Evas_Object *obj, Eina_Bool propagate);

/**
 * @brief Retrieve whether an Evas object is set to propagate events.
 *
 * See also @ref evas_object_repeat_events_get,
 * @ref evas_object_pass_events_get, @ref evas_object_freeze_events_get.
 *
 * @return Whether to propagate events ($true) or not ($false).
 *
 * @ingroup Evas_Object
 */
EAPI Eina_Bool evas_object_propagate_events_get(const Evas_Object *obj);

/**
 * @brief Set whether an Evas object is to pass (ignore) events.
 *
 * If @c pass is @c true, it will make events on @c obj to be ignored. They
 * will be triggered on the next lower object (that is not set to pass events),
 * instead (see @ref evas_object_below_get).
 *
 * If @c pass is @c false, events will be processed on that object as normal.
 *
 * See also @ref evas_object_repeat_events_set,
 * @ref evas_object_propagate_events_set, @ref evas_object_freeze_events_set.
 *
 * @param[in] pass Whether @c obj is to pass events ($true) or not ($false).
 *
 * @ingroup Evas_Object
 */
EAPI void evas_object_pass_events_set(Evas_Object *obj, Eina_Bool pass);

/**
 * @brief Determine whether an object is set to pass (ignore) events.
 *
 * See also @ref evas_object_repeat_events_get,
 * @ref evas_object_propagate_events_get, @ref evas_object_freeze_events_get.
 *
 * @return Whether @c obj is to pass events ($true) or not ($false).
 *
 * @ingroup Evas_Object
 */
EAPI Eina_Bool evas_object_pass_events_get(const Evas_Object *obj);

/**
 * @brief Sets whether or not the given Evas object is to be drawn
 * anti-aliased.
 *
 * @param[in] anti_alias @c true if the object is to be anti_aliased, @c false
 * otherwise.
 *
 * @ingroup Evas_Object
 */
EAPI void evas_object_anti_alias_set(Evas_Object *obj, Eina_Bool anti_alias);

/**
 * @brief Retrieves whether or not the given Evas object is to be drawn
 * anti_aliased.
 *
 * @return @c true if the object is to be anti_aliased, @c false otherwise.
 *
 * @ingroup Evas_Object
 */
EAPI Eina_Bool evas_object_anti_alias_get(const Evas_Object *obj);

/**
 * @brief Retrieve user data stored on a given smart object.
 *
 * @return A pointer to data or @c null.
 *
 * @ingroup Evas_Object
 */
EAPI void *evas_object_smart_data_get(const Evas_Object *obj) EINA_WARN_UNUSED_RESULT;

/**
 * @brief Get the clipper object for the given clipped smart object.
 *
 * Use this function if you want to change any of this clipper's properties,
 * like colors.
 *
 * @ingroup Evas_Object
 */
EAPI Evas_Object *evas_object_smart_clipped_clipper_get(const Evas_Object *obj) EINA_WARN_UNUSED_RESULT;

/**
 * @brief Return a list of objects currently clipped by @c obj.
 *
 * This returns the internal list handle that contains all objects clipped by
 * the object @c obj. If none are clipped by it, the call returns @c null. This
 * list is only valid until the clip list is changed and should be fetched
 * again with another call to this function if any objects being clipped by
 * this object are unclipped, clipped by a new object, deleted or get the
 * clipper deleted. These operations will invalidate the list returned, so it
 * should not be used anymore after that point. Any use of the list after this
 * may have undefined results, possibly leading to crashes. The object @c obj
 * must be a valid Evas_Object.
 *
 * See also @ref evas_object_clip_set, @ref evas_object_clip_unset and
 * @ref evas_object_clip_get.
 *
 * @return A list of objects being clipped by @c obj.
 *
 * @ingroup Evas_Object
 */
EAPI const Eina_List *evas_object_clipees_get(const Evas_Object *obj) EINA_WARN_UNUSED_RESULT;

/**
 * @brief Gets the parent smart object of a given Evas object, if it has one.
 *
 * @return The parent smart object of @c obj or @c null.
 *
 * @ingroup Evas_Object
 */
EAPI Evas_Object *evas_object_smart_parent_get(const Evas_Object *obj) EINA_WARN_UNUSED_RESULT;

/**
 * @brief Sets the hints for an object's disply mode,
 *
 * This is not a size enforcement in any way, it's just a hint that can be used
 * whenever appropriate.
 *
 * @param[in] dispmode Display mode hint.
 *
 * @ingroup Evas_Object
 */
EAPI void evas_object_size_hint_display_mode_set(Evas_Object *obj, Evas_Display_Mode dispmode);

/**
 * @brief Retrieves the hints for an object's display mode
 *
 * These are hints on the display mode @c obj. This is not a size enforcement
 * in any way, it's just a hint that can be used whenever appropriate. This
 * mode can be used object's display mode like commpress or expand.
 *
 * @return Display mode hint.
 *
 * @ingroup Evas_Object
 */
EAPI Evas_Display_Mode evas_object_size_hint_display_mode_get(const Evas_Object *obj);

/**
 * @brief This handles text paragraph direction of the given object. Even if
 * the given object is not textblock or text, its smart child objects can
 * inherit the paragraph direction from the given object. The default paragraph
 * direction is @ref Evas_BiDi_Direction.EVAS_BIDI_DIRECTION_INHERIT.
 *
 * @param[in] dir Paragraph direction for the given object.
 *
 * @ingroup Evas_Object
 */
EAPI void evas_object_paragraph_direction_set(Evas_Object *obj, Evas_BiDi_Direction dir);

/**
 * @brief This handles text paragraph direction of the given object. Even if
 * the given object is not textblock or text, its smart child objects can
 * inherit the paragraph direction from the given object. The default paragraph
 * direction is @ref Evas_BiDi_Direction.EVAS_BIDI_DIRECTION_INHERIT.
 *
 * @return Paragraph direction for the given object.
 *
 * @ingroup Evas_Object
 */
EAPI Evas_BiDi_Direction evas_object_paragraph_direction_get(const Evas_Object *obj);

/** Test if any object is clipped by @c obj.
 *
 * @since 1.8
 *
 * @ingroup Evas_Object
 */
EAPI Eina_Bool evas_object_clipees_has(const Evas_Object *obj) EINA_WARN_UNUSED_RESULT;

/**
 * @brief Requests @c keyname key events be directed to @c obj.
 *
 * Key grabs allow one or more objects to receive key events for specific key
 * strokes even if other objects have focus. Whenever a key is grabbed, only
 * the objects grabbing it will get the events for the given keys.
 *
 * @c keyname is a platform dependent symbolic name for the key pressed (see
 * @ref Evas_Keys for more information).
 *
 * @c modifiers and @c not_modifiers are bit masks of all the modifiers that
 * must and mustn't, respectively, be pressed along with @c keyname key in
 * order to trigger this new key grab. Modifiers can be things such as Shift
 * and Ctrl as well as user defined types via @ref evas_key_modifier_add.
 * Retrieve them with @ref evas_key_modifier_mask_get or use 0 for empty masks.
 *
 * @c exclusive will make the given object the only one permitted to grab the
 * given key. If given @c true, subsequent calls on this function with
 * different @c obj arguments will fail, unless the key is ungrabbed again.
 *
 * @warning Providing impossible modifier sets creates undefined behavior.
 *
 * See also @ref evas_object_key_ungrab, @ref evas_object_focus_get,
 * @ref evas_object_focus_set, @ref evas_focus_get, @ref evas_key_modifier_add.
 *
 * @param[in] modifiers A mask of modifiers that must be present to trigger the
 * event.
 * @param[in] not_modifiers A mask of modifiers that must not be present to
 * trigger the event.
 * @param[in] exclusive Request that the @c obj is the only object receiving
 * the @c keyname events.
 *
 * @return @c true if the call succeeded, @c false otherwise.
 *
 * @ingroup Evas_Object
 */
EAPI Eina_Bool evas_object_key_grab(Evas_Object *obj, const char *keyname, Evas_Modifier_Mask modifiers, Evas_Modifier_Mask not_modifiers, Eina_Bool exclusive) EINA_WARN_UNUSED_RESULT EINA_ARG_NONNULL(2);

/**
 * @brief Checks whether a given smart object or any of its smart object
 * parents is of a given smart class.
 *
 * If @c obj is not a smart object, this call will fail immediately.
 *
 * This function supports Eo and legacy inheritance mechanisms. However, it is
 * recommended to use @ref eo_isa instead if your object is using Eo from top
 * to bottom.
 *
 * The checks use smart classes names and string comparison. There is a version
 * of this same check using pointer comparison, since a smart class' name is a
 * single string in Evas.
 *
 * See also @ref evas_object_smart_type_check_ptr.
 *
 * @param[in] type The name (type) of the smart class to check for.
 *
 * @ingroup Evas_Object
 */
EAPI Eina_Bool evas_object_smart_type_check(const Evas_Object *obj, const char *type) EINA_WARN_UNUSED_RESULT EINA_ARG_NONNULL(2);

/**
 * @brief Retrieves the object from children of the given object with the given
 * name.
 *
 * This looks for the evas object given a name by @ref evas_object_name_set,
 * but it ONLY looks at the children of the object *p obj, and will only
 * recurse into those children if @c recurse is greater than 0. If the name is
 * not unique within immediate children (or the whole child tree) then it is
 * not defined which child object will be returned. If @c recurse is set to -1
 * then it will recurse without limit.
 *
 * @param[in] recurse Set to the number of child levels to recurse (0 == don't
 * recurse, 1 == only look at the children of @c obj or their immediate
 * children, but no further etc.).
 *
 * @return The Evas object with the given name on success, Otherwise @c null.
 *
 * @since 1.2
 *
 * @ingroup Evas_Object
 */
EAPI Evas_Object *evas_object_name_child_find(const Evas_Object *obj, const char *name, int recurse) EINA_WARN_UNUSED_RESULT;

/**
 * @brief Removes the grab on @c keyname key events by @c obj.
 *
 * Removes a key grab on @c obj if @c keyname, @c modifiers, and
 * @c not_modifiers match.
 *
 * See also @ref evas_object_key_grab, @ref evas_object_focus_get,
 * @ref evas_object_focus_set, @ref evas_focus_get.
 *
 * @param[in] modifiers A mask of modifiers that must be present to trigger the
 * event.
 * @param[in] not_modifiers A mask of modifiers that mus not not be present to
 * trigger the event.
 *
 * @ingroup Evas_Object
 */
EAPI void evas_object_key_ungrab(Evas_Object *obj, const char *keyname, Evas_Modifier_Mask modifiers, Evas_Modifier_Mask not_modifiers) EINA_ARG_NONNULL(2);

/**
 * @brief Disable/cease clipping on a clipped @c obj object.
 *
 * This function disables clipping for the object @c obj, if it was already
 * clipped, i.e., its visibility and color get detached from the previous
 * clipper. If it wasn't, this has no effect. The object @c obj must be a valid
 * Evas_Object.
 *
 * See also @ref evas_object_clip_set, @ref evas_object_clipees_get and
 * @ref evas_object_clip_get.
 *
 * @ingroup Evas_Object
 */
EAPI void evas_object_clip_unset(Evas_Object *obj);

/**
 * @brief Moves all children objects of a given smart object relative to a
 * given offset.
 *
 * This will make each of @c obj object's children to move, from where they
 * before, with those delta values (offsets) on both directions.
 *
 * @note This is most useful on custom smart @c move functions.
 *
 * @note Clipped smart objects already make use of this function on their
 * @c move smart function definition.
 *
 * @param[in] dy Vertical offset (delta).
 *
 * @ingroup Evas_Object
 */
EAPI void evas_object_smart_move_children_relative(Evas_Object *obj, Evas_Coord dx, Evas_Coord dy);

/**
 * @brief Checks whether a given smart object or any of its smart object
 * parents is of a given smart class, using pointer comparison.
 *
 * @param[in] type The type (name string) to check for. Must be the name.
 *
 * @return @c true if @c obj or any of its parents is of type @c type, @c false
 * otherwise.
 *
 * @ingroup Evas_Object
 */
EAPI Eina_Bool evas_object_smart_type_check_ptr(const Evas_Object *obj, const char *type) EINA_WARN_UNUSED_RESULT EINA_ARG_NONNULL(2);

#endif
