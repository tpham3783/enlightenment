#ifndef EFL_GENERATED_EVAS_OBJECT_HH
#define EFL_GENERATED_EVAS_OBJECT_HH

extern "C"
{
#include <Efl.h>
}
#include <Eo.hh>

#include <eo_cxx_interop.hh>

extern "C"
{
#include "evas_object.eo.h"
}

#include "eo_base.eo.hh"
#include "evas_common_interface.eo.hh"
#include "efl_gfx_base.eo.hh"
#include "efl_gfx_stack.eo.hh"
#include <string>

namespace evas {

struct object;

}

/// @cond EO_CXX_ABSTRACT
namespace eo_cxx {

namespace evas {

struct object
{
   /// @brief Test if any object is clipped by @p obj.
   ///
   /// @return EINA_TRUE if @p obj clip any object.
   /// @since 1.8
   ///
   bool clipees_has() const;

   /// @brief Requests @p keyname key events be directed to @p obj.
   ///
   /// @return @c EINA_TRUE, if the call succeeded, @c EINA_FALSE otherwise.
   ///
   /// Key grabs allow one or more objects to receive key events for
   /// specific key strokes even if other objects have focus. Whenever a
   /// key is grabbed, only the objects grabbing it will get the events
   /// for the given keys.
   ///
   /// @p keyname is a platform dependent symbolic name for the key
   /// pressed (see @ref Evas_Keys for more information).
   ///
   /// @p modifiers and @p not_modifiers are bit masks of all the
   /// modifiers that must and mustn't, respectively, be pressed along
   /// with @p keyname key in order to trigger this new key
   /// grab. Modifiers can be things such as Shift and Ctrl as well as
   /// user defined types via evas_key_modifier_add(). Retrieve them with
   /// evas_key_modifier_mask_get() or use @c 0 for empty masks.
   ///
   /// @p exclusive will make the given object the only one permitted to
   /// grab the given key. If given @c EINA_TRUE, subsequent calls on this
   /// function with different @p obj arguments will fail, unless the key
   /// is ungrabbed again.
   ///
   /// Example code follows.
   /// @dontinclude evas-events.c
   /// @skip if (d.focus)
   /// @until else
   ///
   /// See the full example @ref Example_Evas_Events "here".
   ///
   /// @warning Providing impossible modifier sets creates undefined behavior
   ///
   /// @see evas_object_key_ungrab
   /// @see evas_object_focus_set
   /// @see evas_object_focus_get
   /// @see evas_focus_get
   /// @see evas_key_modifier_add
   ///
   /// @param keyname the key to request events for.
   /// @param modifiers a mask of modifiers that must be present to
   /// trigger the event.
   /// @param not_modifiers a mask of modifiers that must @b not be present
   /// to trigger the event.
   /// @param exclusive request that the @p obj is the only object
   /// receiving the @p keyname events.
   ///
   bool key_grab(::efl::eina::string_view keyname_, Evas_Modifier_Mask modifiers_, Evas_Modifier_Mask not_modifiers_, bool exclusive_) const;

   /// @brief Checks whether a given smart object or any of its smart object
   /// parents is of a given smart class.
   ///
   /// @return @c EINA_TRUE, if @a obj or any of its parents is of type @a
   /// type, @c EINA_FALSE otherwise
   ///
   /// If @p obj is not a smart object, this call will fail
   /// immediately.
   ///
   /// This function supports Eo and legacy inheritance mechanisms. However,
   /// it is recommended to use eo_isa instead if your object is using Eo from
   /// top to bottom.
   ///
   /// The checks use smart classes names and <b>string
   /// comparison</b>. There is a version of this same check using
   /// <b>pointer comparison</b>, since a smart class' name is a single
   /// string in Evas.
   ///
   /// @see evas_object_smart_type_check_ptr()
   /// @see eo_isa
   ///
   /// @ingroup Evas_Smart_Object_Group
   ///
   /// @param type The @b name (type) of the smart class to check for
   ///
   bool smart_type_check(::efl::eina::string_view type_) const;

   /// @brief Retrieves the object from children of the given object with the given name.
   /// @return  If successful, the Evas object with the given name.  Otherwise,
   /// @c NULL.
   ///
   /// This looks for the evas object given a name by evas_object_name_set(), but
   /// it ONLY looks at the children of the object *p obj, and will only recurse
   /// into those children if @p recurse is greater than 0. If the name is not
   /// unique within immediate children (or the whole child tree) then it is not
   /// defined which child object will be returned. If @p recurse is set to -1 then
   /// it will recurse without limit.
   ///
   /// @since 1.2
   ///
   /// @ingroup Evas_Object_Group_Find
   ///
   /// @param name The given name.
   /// @param recurse Set to the number of child levels to recurse (0 == don't recurse, 1 == only look at the children of @p obj or their immediate children, but no further etc.).
   ///
   ::evas::object name_child_find(::efl::eina::string_view name_, int recurse_) const;

   /// @brief Removes the grab on @p keyname key events by @p obj.
   ///
   /// Removes a key grab on @p obj if @p keyname, @p modifiers, and @p
   /// not_modifiers match.
   ///
   /// Example code follows.
   /// @dontinclude evas-events.c
   /// @skip got here by key grabs
   /// @until }
   ///
   /// See the full example @ref Example_Evas_Events "here".
   ///
   /// @see evas_object_key_grab
   /// @see evas_object_focus_set
   /// @see evas_object_focus_get
   /// @see evas_focus_get
   ///
   /// @param keyname the key the grab is set for.
   /// @param modifiers a mask of modifiers that must be present to
   /// trigger the event.
   /// @param not_modifiers a mask of modifiers that must not not be
   /// present to trigger the event.
   ///
   void key_ungrab(::efl::eina::string_view keyname_, Evas_Modifier_Mask modifiers_, Evas_Modifier_Mask not_modifiers_) const;

   /// @brief Disable/cease clipping on a clipped @p obj object.
   ///
   /// This function disables clipping for the object @p obj, if it was
   /// already clipped, i.e., its visibility and color get detached from
   /// the previous clipper. If it wasn't, this has no effect. The object
   /// @p obj must be a valid .Evas_Object.
   ///
   /// See also evas_object_clip_set() (for an example),
   /// evas_object_clipees_get() and evas_object_clip_get().
   ///
   void clip_unset() const;

   /// @brief Moves all children objects of a given smart object relative to a
   /// given offset.
   ///
   /// This will make each of @p obj object's children to move, from where
   /// they before, with those delta values (offsets) on both directions.
   ///
   /// @note This is most useful on custom smart @c move() functions.
   ///
   /// @note Clipped smart objects already make use of this function on
   /// their @c move() smart function definition.
   ///
   /// @param dx horizontal offset (delta).
   /// @param dy vertical offset (delta).
   ///
   void smart_move_children_relative(Evas_Coord dx_, Evas_Coord dy_) const;

   /// @brief Checks whether a given smart object or any of its smart object
   /// parents is of a given smart class, <b>using pointer comparison</b>.
   ///
   /// @return @c EINA_TRUE, if @a obj or any of its parents is of type @a
   /// type, @c EINA_FALSE otherwise
   ///
   /// @see evas_object_smart_type_check() for more details
   /// @see eo_isa
   ///
   /// @ingroup Evas_Smart_Object_Group
   ///
   /// @param type The type (name string) to check for. Must be the name
   ///
   bool smart_type_check_ptr(::efl::eina::string_view type_) const;

   /// @brief Retrieves the hints for an object's maximum size.
   ///
   /// These are hints on the maximum sizes @p obj should have. This is
   /// not a size enforcement in any way, it's just a hint that should be
   /// used whenever appropriate.
   ///
   /// @note Use @c NULL pointers on the hint components you're not
   /// interested in: they'll be ignored by the function.
   ///
   /// @see evas_object_size_hint_max_set()
   ///
   void size_hint_max_get(Evas_Coord* w_, Evas_Coord* h_) const;

   /// @brief Sets the hints for an object's maximum size.
   ///
   /// This is not a size enforcement in any way, it's just a hint that
   /// should be used whenever appropriate.
   ///
   /// Values @c -1 will be treated as unset hint components, when queried
   /// by managers.
   ///
   /// @note Smart objects(such as elementary) can have their own size hint
   /// policy. So calling this API may or may not affect the size of smart objects.
   ///
   /// Example:
   /// @dontinclude evas-hints.c
   /// @skip evas_object_size_hint_max_set
   /// @until return
   ///
   /// In this example the maximum size hints change the behavior of an
   /// Evas box when layouting its children. See the full @ref
   /// Example_Evas_Size_Hints "example".
   ///
   /// @see evas_object_size_hint_max_get()
   ///
   void size_hint_max_set(Evas_Coord w_, Evas_Coord h_) const;

   /// @brief Retrieves the hints for an object's optimum size.
   ///
   /// These are hints on the optimum sizes @p obj should have. This is
   /// not a size enforcement in any way, it's just a hint that should be
   /// used whenever appropriate.
   ///
   /// @note Use @c NULL pointers on the hint components you're not
   /// interested in: they'll be ignored by the function.
   ///
   /// @see evas_object_size_hint_request_set()
   ///
   void size_hint_request_get(Evas_Coord* w_, Evas_Coord* h_) const;

   /// @brief Sets the hints for an object's optimum size.
   ///
   /// This is not a size enforcement in any way, it's just a hint that
   /// should be used whenever appropriate.
   ///
   /// Values @c 0 will be treated as unset hint components, when queried
   /// by managers.
   ///
   /// @note Smart objects(such as elementary) can have their own size hint
   /// policy. So calling this API may or may not affect the size of smart objects.
   ///
   /// @see evas_object_size_hint_request_get()
   ///
   void size_hint_request_set(Evas_Coord w_, Evas_Coord h_) const;

   /// @brief Retrieves the type of the given Evas object.
   ///
   /// @return The type of the object.
   ///
   /// For Evas' builtin types, the return strings will be one of:
   /// - <c>"rectangle"</c>,
   /// - <c>"line"</c>,
   /// - <c>"polygon"</c>,
   /// - <c>"text"</c>,
   /// - <c>"textblock"</c> and
   /// - <c>"image"</c>.
   ///
   /// For Evas smart objects (see @ref Evas_Smart_Group), the name of the
   /// smart class itself is returned on this call. For the built-in smart
   /// objects, these names are:
   /// - <c>"EvasObjectSmartClipped"</c>, for the clipped smart object
   /// - <c>"Evas_Object_Box"</c>, for the box object and
   /// - <c>"Evas_Object_Table"</c>, for the table object.
   ///
   /// Example:
   /// @dontinclude evas-object-manipulation.c
   /// @skip d.img = evas_object_image_filled_add(d.canvas);
   /// @until border on the
   ///
   /// See the full @ref Example_Evas_Object_Manipulation "example".
   ///
   ::efl::eina::string_view type_get() const;

   /// @brief Sets the type of the given Evas object.
   ///
   void type_set(::efl::eina::string_view type_) const;

   /// @brief Retrieves the hints for an object's minimum size.
   ///
   /// These are hints on the minimum sizes @p obj should have. This is
   /// not a size enforcement in any way, it's just a hint that should be
   /// used whenever appropriate.
   ///
   /// @note Use @c NULL pointers on the hint components you're not
   /// interested in: they'll be ignored by the function.
   ///
   /// @see evas_object_size_hint_min_set() for an example
   ///
   void size_hint_min_get(Evas_Coord* w_, Evas_Coord* h_) const;

   /// @brief Sets the hints for an object's minimum size.
   ///
   /// This is not a size enforcement in any way, it's just a hint that
   /// should be used whenever appropriate.
   ///
   /// Values @c 0 will be treated as unset hint components, when queried
   /// by managers.
   ///
   /// @note Smart objects(such as elementary) can have their own size hint
   /// policy. So calling this API may or may not affect the size of smart objects.
   ///
   /// Example:
   /// @dontinclude evas-hints.c
   /// @skip evas_object_size_hint_min_set
   /// @until return
   ///
   /// In this example the minimum size hints change the behavior of an
   /// Evas box when layouting its children. See the full @ref
   /// Example_Evas_Size_Hints "example".
   ///
   /// @see evas_object_size_hint_min_get()
   ///
   void size_hint_min_set(Evas_Coord w_, Evas_Coord h_) const;

   /// @brief Determine how pointer will behave.
   /// @return pointer behavior.
   /// @ingroup Evas_Object_Group_Extras
   ///
   Evas_Object_Pointer_Mode pointer_mode_get() const;

   /// @brief Set pointer behavior.
   ///
   /// This function has direct effect on event callbacks related to
   /// mouse.
   ///
   /// If @p setting is EVAS_OBJECT_POINTER_MODE_AUTOGRAB, then when mouse
   /// is down at this object, events will be restricted to it as source,
   /// mouse moves, for example, will be emitted even if outside this
   /// object area.
   ///
   /// If @p setting is EVAS_OBJECT_POINTER_MODE_NOGRAB, then events will
   /// be emitted just when inside this object area.
   ///
   /// The default value is EVAS_OBJECT_POINTER_MODE_AUTOGRAB.
   ///
   /// @ingroup Evas_Object_Group_Extras
   ///
   void pointer_mode_set(Evas_Object_Pointer_Mode pointer_mode_) const;

   /// @brief Retrieves the current value of the operation used for rendering the Evas object.
   /// @return  one of the enumerated values in Evas_Render_Op.
   /// @ingroup Evas_Object_Group_Extras
   ///
   Evas_Render_Op render_op_get() const;

   /// @brief Sets the render_op to be used for rendering the Evas object.
   /// @ingroup Evas_Object_Group_Extras
   ///
   void render_op_set(Evas_Render_Op render_op_) const;

   /// @brief Determine whether an object is set to freeze (discard) events.
   ///
   /// @return freeze whether @p obj is set to freeze events (@c EINA_TRUE) or
   /// not (@c EINA_FALSE)
   ///
   /// @see evas_object_freeze_events_set()
   /// @see evas_object_pass_events_get()
   /// @see evas_object_repeat_events_get()
   /// @see evas_object_propagate_events_get()
   /// @since 1.1
   ///
   bool freeze_events_get() const;

   /// @brief Set whether an Evas object is to freeze (discard) events.
   ///
   /// If @p freeze is @c EINA_TRUE, it will make events on @p obj to be @b
   /// discarded. Unlike evas_object_pass_events_set(), events will not be
   /// passed to @b next lower object. This API can be used for blocking
   /// events while @p obj is on transiting.
   ///
   /// If @p freeze is @c EINA_FALSE, events will be processed on that
   /// object as normal.
   ///
   /// @warning If you block only key/mouse up events with this API, we won't
   /// guarantee the state of the object, that only had key/mouse down
   /// events, will be.
   ///
   /// @see evas_object_freeze_events_get()
   /// @see evas_object_pass_events_set()
   /// @see evas_object_repeat_events_set()
   /// @see evas_object_propagate_events_set()
   /// @since 1.1
   ///
   void freeze_events_set(bool freeze_) const;

   /// @brief Get current object transformation map.
   ///
   /// This returns the current internal map set on the indicated object. It is
   /// intended for read-only access and is only valid as long as the object is
   /// not deleted or the map on the object is not changed. If you wish to modify
   /// the map and set it back do the following:
   ///
   /// @code
   /// const Evas_Map *m = evas_object_map_get(obj);
   /// Evas_Map *m2 = evas_map_dup(m);
   /// evas_map_util_rotate(m2, 30.0, 0, 0);
   /// evas_object_map_set(obj, m2);
   /// evas_map_free(m2);
   /// @endcode
   ///
   /// @return map reference to map in use. This is an internal data structure, so
   /// do not modify it.
   ///
   /// @see evas_object_map_set()
   ///
   const Evas_Map * map_get() const;

   /// @brief Set current object transformation map.
   ///
   /// This sets the map on a given object. It is copied from the @p map pointer,
   /// so there is no need to keep the @p map object if you don't need it anymore.
   ///
   /// A map is a set of 4 points which have canvas x, y coordinates per point,
   /// with an optional z point value as a hint for perspective correction, if it
   /// is available. As well each point has u and v coordinates. These are like
   /// "texture coordinates" in OpenGL in that they define a point in the source
   /// image that is mapped to that map vertex/point. The u corresponds to the x
   /// coordinate of this mapped point and v, the y coordinate. Note that these
   /// coordinates describe a bounding region to sample. If you have a 200x100
   /// source image and want to display it at 200x100 with proper pixel
   /// precision, then do:
   ///
   /// @code
   /// Evas_Map *m = evas_map_new(4);
   /// evas_map_point_coord_set(m, 0,   0,   0, 0);
   /// evas_map_point_coord_set(m, 1, 200,   0, 0);
   /// evas_map_point_coord_set(m, 2, 200, 100, 0);
   /// evas_map_point_coord_set(m, 3,   0, 100, 0);
   /// evas_map_point_image_uv_set(m, 0,   0,   0);
   /// evas_map_point_image_uv_set(m, 1, 200,   0);
   /// evas_map_point_image_uv_set(m, 2, 200, 100);
   /// evas_map_point_image_uv_set(m, 3,   0, 100);
   /// evas_object_map_set(obj, m);
   /// evas_map_free(m);
   /// @endcode
   ///
   /// Note that the map points a uv coordinates match the image geometry. If
   /// the @p map parameter is NULL, the stored map will be freed and geometry
   /// prior to enabling/setting a map will be restored.
   ///
   /// @see evas_map_new()
   ///
   void map_set(const Evas_Map * map_) const;

   /// @brief Retrieves the hints for an object's aspect ratio.
   ///
   /// The different aspect ratio policies are documented in the
   /// #Evas_Aspect_Control type. A container respecting these size hints
   /// would @b resize its children accordingly to those policies.
   ///
   /// For any policy, if any of the given aspect ratio terms are @c 0,
   /// the object's container should ignore the aspect and scale @p obj to
   /// occupy the whole available area. If they are both positive
   /// integers, that proportion will be respected, under each scaling
   /// policy.
   ///
   /// These images illustrate some of the #Evas_Aspect_Control policies:
   ///
   /// @image html any-policy.png
   /// @image rtf any-policy.png
   /// @image latex any-policy.eps
   ///
   /// @image html aspect-control-none-neither.png
   /// @image rtf aspect-control-none-neither.png
   /// @image latex aspect-control-none-neither.eps
   ///
   /// @image html aspect-control-both.png
   /// @image rtf aspect-control-both.png
   /// @image latex aspect-control-both.eps
   ///
   /// @image html aspect-control-horizontal.png
   /// @image rtf aspect-control-horizontal.png
   /// @image latex aspect-control-horizontal.eps
   ///
   /// This is not a size enforcement in any way, it's just a hint that
   /// should be used whenever appropriate.
   ///
   /// @note Use @c NULL pointers on the hint components you're not
   /// interested in: they'll be ignored by the function.
   ///
   /// Example:
   /// @dontinclude evas-aspect-hints.c
   /// @skip if (strcmp(ev->key, "c") == 0)
   /// @until }
   ///
   /// See the full @ref Example_Evas_Aspect_Hints "example".
   ///
   /// @see evas_object_size_hint_aspect_set()
   ///
   void size_hint_aspect_get(Evas_Aspect_Control* aspect_, Evas_Coord* w_, Evas_Coord* h_) const;

   /// @brief Sets the hints for an object's aspect ratio.
   ///
   /// This is not a size enforcement in any way, it's just a hint that should
   /// be used whenever appropriate.
   ///
   /// If any of the given aspect ratio terms are @c 0,
   /// the object's container will ignore the aspect and scale @p obj to
   /// occupy the whole available area, for any given policy.
   ///
   /// @note Smart objects(such as elementary) can have their own size hint
   /// policy. So calling this API may or may not affect the size of smart objects.
   ///
   /// @see evas_object_size_hint_aspect_get() for more information.
   ///
   void size_hint_aspect_set(Evas_Aspect_Control aspect_, Evas_Coord w_, Evas_Coord h_) const;

   /// @brief Get the object clipping @p obj (if any).
   ///
   /// This function returns the object clipping @p obj. If @p obj is
   /// not being clipped at all, @c NULL is returned. The object @p obj
   /// must be a valid .Evas_Object.
   ///
   /// See also evas_object_clip_set(), evas_object_clip_unset() and
   /// evas_object_clipees_get().
   ///
   /// Example:
   /// @dontinclude evas-object-manipulation.c
   /// @skip if (evas_object_clip_get(d.img) == d.clipper)
   /// @until return
   ///
   /// See the full @ref Example_Evas_Object_Manipulation "example".
   ///
   ::evas::object clip_get() const;

   /// @brief Clip one object to another.
   ///
   /// This function will clip the object @p obj to the area occupied by
   /// the object @p clip. This means the object @p obj will only be
   /// visible within the area occupied by the clipping object (@p clip).
   ///
   /// The color of the object being clipped will be multiplied by the
   /// color of the clipping one, so the resulting color for the former
   /// will be <code>RESULT = (OBJ * CLIP) / (255 * 255)</code>, per color
   /// element (red, green, blue and alpha).
   ///
   /// Clipping is recursive, so clipping objects may be clipped by
   /// others, and their color will in term be multiplied. You may @b not
   /// set up circular clipping lists (i.e. object 1 clips object 2, which
   /// clips object 1): the behavior of Evas is undefined in this case.
   ///
   /// Objects which do not clip others are visible in the canvas as
   /// normal; <b>those that clip one or more objects become invisible
   /// themselves</b>, only affecting what they clip. If an object ceases
   /// to have other objects being clipped by it, it will become visible
   /// again.
   ///
   /// The visibility of an object affects the objects that are clipped by
   /// it, so if the object clipping others is not shown (as in
   /// evas_object_show()), the objects clipped by it will not be shown
   /// either.
   ///
   /// If @p obj was being clipped by another object when this function is
   /// called, it gets implicitly removed from the old clipper's domain
   /// and is made now to be clipped by its new clipper.
   ///
   /// The following figure illustrates some clipping in Evas:
   ///
   /// @image html clipping.png
   /// @image rtf clipping.png
   /// @image latex clipping.eps
   ///
   /// @note At the moment the <b>only objects that can validly be used to
   /// clip other objects are rectangle objects</b>. All other object
   /// types are invalid and the result of using them is undefined. The
   /// clip object @p clip must be a valid object, but can also be @c
   /// NULL, in which case the effect of this function is the same as
   /// calling evas_object_clip_unset() on the @p obj object.
   ///
   /// Example:
   /// @dontinclude evas-object-manipulation.c
   /// @skip solid white clipper (note that it's the default color for a
   /// @until evas_object_show(d.clipper);
   ///
   /// See the full @ref Example_Evas_Object_Manipulation "example".
   ///
   void clip_set(::evas::object clip_) const;

   /// @brief Retrieves the hints for an object's padding space.
   ///
   /// Padding is extra space an object takes on each of its delimiting
   /// rectangle sides, in canvas units. This space will be rendered
   /// transparent, naturally, as in the following figure:
   ///
   /// @image html padding-hints.png
   /// @image rtf padding-hints.png
   /// @image latex padding-hints.eps
   ///
   /// This is not a size enforcement in any way, it's just a hint that
   /// should be used whenever appropriate.
   ///
   /// @note Use @c NULL pointers on the hint components you're not
   /// interested in: they'll be ignored by the function.
   ///
   /// Example:
   /// @dontinclude evas-hints.c
   /// @skip evas_object_size_hint_padding_set
   /// @until return
   ///
   /// In this example the padding hints change the behavior of an Evas box
   /// when layouting its children. See the full @ref
   /// Example_Evas_Size_Hints "example".
   ///
   /// @see evas_object_size_hint_padding_set()
   ///
   void size_hint_padding_get(Evas_Coord* l_, Evas_Coord* r_, Evas_Coord* t_, Evas_Coord* b_) const;

   /// @brief Sets the hints for an object's padding space.
   ///
   /// This is not a size enforcement in any way, it's just a hint that
   /// should be used whenever appropriate.
   ///
   /// @note Smart objects(such as elementary) can have their own size hint
   /// policy. So calling this API may or may not affect the size of smart objects.
   ///
   /// @see evas_object_size_hint_padding_get() for more information
   ///
   void size_hint_padding_set(Evas_Coord l_, Evas_Coord r_, Evas_Coord t_, Evas_Coord b_) const;

   /// @brief Determine whether an object is set to repeat events.
   ///
   /// @return whether @p obj is set to repeat events (@c EINA_TRUE)
   /// or not (@c EINA_FALSE)
   ///
   /// @see evas_object_repeat_events_set() for an example
   /// @see evas_object_pass_events_get()
   /// @see evas_object_propagate_events_get()
   /// @see evas_object_freeze_events_get()
   ///
   bool repeat_events_get() const;

   /// @brief Set whether an Evas object is to repeat events.
   ///
   /// If @p repeat is @c EINA_TRUE, it will make events on @p obj to also
   /// be repeated for the @b next lower object in the objects' stack (see
   /// see evas_object_below_get()).
   ///
   /// If @p repeat is @c EINA_FALSE, events occurring on @p obj will be
   /// processed only on it.
   ///
   /// Example:
   /// @dontinclude evas-stacking.c
   /// @skip if (strcmp(ev->key, "r") == 0)
   /// @until }
   ///
   /// See the full @ref Example_Evas_Stacking "example".
   ///
   /// @see evas_object_repeat_events_get()
   /// @see evas_object_pass_events_set()
   /// @see evas_object_propagate_events_set()
   /// @see evas_object_freeze_events_set()
   ///
   void repeat_events_set(bool repeat_) const;

   /// @brief Retrieves the hints for an object's weight.
   ///
   /// Accepted values are zero or positive values. Some users might use
   /// this hint as a boolean, but some might consider it as a @b
   /// proportion, see documentation of possible users, which in Evas are
   /// the @ref Evas_Object_Box "box" and @ref Evas_Object_Table "table"
   /// smart objects.
   ///
   /// This is not a size enforcement in any way, it's just a hint that
   /// should be used whenever appropriate.
   ///
   /// @note Use @c NULL pointers on the hint components you're not
   /// interested in: they'll be ignored by the function.
   /// @note If @c obj is invalid, then the hint components will be set with 0.0
   ///
   /// @see evas_object_size_hint_weight_set() for an example
   ///
   void size_hint_weight_get(double* x_, double* y_) const;

   /// @brief Sets the hints for an object's weight.
   ///
   /// This is not a size enforcement in any way, it's just a hint that
   /// should be used whenever appropriate.
   ///
   /// This is a hint on how a container object should @b resize a given
   /// child within its area. Containers may adhere to the simpler logic
   /// of just expanding the child object's dimensions to fit its own (see
   /// the #EVAS_HINT_EXPAND helper weight macro) or the complete one of
   /// taking each child's weight hint as real @b weights to how much of
   /// its size to allocate for them in each axis. A container is supposed
   /// to, after @b normalizing the weights of its children (with weight
   /// hints), distribute the space it has to layout them by those factors
   /// -- most weighted children get larger in this process than the least
   /// ones.
   ///
   /// Example:
   /// @dontinclude evas-hints.c
   /// @skip evas_object_size_hint_weight_set
   /// @until return
   ///
   /// In this example the weight hints change the behavior of an Evas box
   /// when layouting its children. See the full @ref
   /// Example_Evas_Size_Hints "example".
   ///
   /// @note Default weight hint values are 0.0, for both axis.
   ///
   /// @see evas_object_size_hint_weight_get() for more information
   ///
   void size_hint_weight_set(double x_, double y_) const;

   /// @brief Retrieves the name of the given Evas object.
   ///
   /// @return  The name of the object or @c NULL, if no name has been given
   /// to it.
   ///
   /// Example:
   /// @dontinclude evas-events.c
   /// @skip fprintf(stdout, "An object got focused: %s\n",
   /// @until evas_focus_get
   ///
   /// See the full @ref Example_Evas_Events "example".
   ///
   ::efl::eina::string_view name_get() const;

   /// @brief Sets the name of the given Evas object to the given name.
   ///
   /// There might be occasions where one would like to name his/her
   /// objects.
   ///
   /// Example:
   /// @dontinclude evas-events.c
   /// @skip d.bg = evas_object_rectangle_add(d.canvas);
   /// @until evas_object_name_set(d.bg, "our dear rectangle");
   ///
   /// See the full @ref Example_Evas_Events "example".
   ///
   void name_set(::efl::eina::string_view name_) const;

   /// @brief Retrieves the scaling factor for the given Evas object.
   ///
   /// @return  The scaling factor.
   ///
   /// @ingroup Evas_Object_Group_Extras
   ///
   /// @see evas_object_scale_set()
   ///
   double scale_get() const;

   /// @brief Sets the scaling factor for an Evas object. Does not affect all
   /// objects.
   ///
   /// This will multiply the object's dimension by the given factor, thus
   /// altering its geometry (width and height). Useful when you want
   /// scalable UI elements, possibly at run time.
   ///
   /// @note Only text and textblock objects have scaling change
   /// handlers. Other objects won't change visually on this call.
   ///
   /// @see evas_object_scale_get()
   ///
   /// @ingroup Evas_Object_Group_Extras
   ///
   void scale_set(double scale_) const;

   /// @brief Get the "static clipper" hint flag for a given Evas object.
   ///
   /// @return @c EINA_TRUE if it's set as a static clipper,
   /// @c EINA_FALSE otherwise.
   ///
   /// @see evas_object_static_clip_set() for more details
   ///
   /// @ingroup Evas_Object_Group_Extras
   ///
   bool static_clip_get() const;

   /// @brief Set a hint flag on the given Evas object that it's used as a "static
   /// clipper".
   ///
   /// This is a hint to Evas that this object is used as a big static
   /// clipper and shouldn't be moved with children and otherwise
   /// considered specially. The default value for new objects is
   /// @c EINA_FALSE.
   ///
   /// @see evas_object_static_clip_get()
   ///
   /// @ingroup Evas_Object_Group_Extras
   ///
   void static_clip_set(bool is_static_clip_) const;

   /// @brief Retrieve whether an object has the focus.
   ///
   /// @return @c EINA_TRUE if the object has the focus, @c EINA_FALSE otherwise.
   ///
   /// If the passed object is the currently focused one, @c EINA_TRUE is
   /// returned. @c EINA_FALSE is returned, otherwise.
   ///
   /// Example:
   /// @dontinclude evas-events.c
   /// @skip And again
   /// @until something is bad
   ///
   /// See the full example @ref Example_Evas_Events "here".
   ///
   /// @see evas_object_focus_set
   /// @see evas_focus_get
   /// @see evas_object_key_grab
   /// @see evas_object_key_ungrab
   ///
   bool focus_get() const;

   /// @brief Sets or unsets a given object as the currently focused one on its
   /// canvas.
   ///
   /// Changing focus only affects where (key) input events go. There can
   /// be only one object focused at any time. If @p focus is @c EINA_TRUE,
   /// @p obj will be set as the currently focused object and it will
   /// receive all keyboard events that are not exclusive key grabs on
   /// other objects.
   ///
   /// Example:
   /// @dontinclude evas-events.c
   /// @skip evas_object_focus_set
   /// @until evas_object_focus_set
   ///
   /// See the full example @ref Example_Evas_Events "here".
   ///
   /// @see evas_object_focus_get
   /// @see evas_focus_get
   /// @see evas_object_key_grab
   /// @see evas_object_key_ungrab
   ///
   void focus_set(bool focus_) const;

   /// @brief @since 1.2
   ///
   bool is_frame_object_get() const;

   /// @brief @since 1.2
   ///
   void is_frame_object_set(bool is_frame_) const;

   /// @brief Get the map enabled state
   ///
   /// This returns the currently enabled state of the map on the object indicated.
   /// The default map enable state is off. You can enable and disable it with
   /// evas_object_map_enable_set().
   ///
   /// @return the map enabled state
   ///
   bool map_enable_get() const;

   /// @brief Enable or disable the map that is set.
   ///
   /// Enable or disable the use of map for the object @p obj.
   /// On enable, the object geometry will be saved, and the new geometry will
   /// change (position and size) to reflect the map geometry set.
   ///
   /// If the object doesn't have a map set (with evas_object_map_set()), the
   /// initial geometry will be undefined. It is advised to always set a map
   /// to the object first, and then call this function to enable its use.
   ///
   void map_enable_set(bool enabled_) const;

   /// @brief Determine whether an object is set to use precise point collision
   /// detection.
   ///
   /// @return whether @p obj is set to use precise point collision
   /// detection or not The default value is false.
   ///
   /// @see evas_object_precise_is_inside_set() for an example
   ///
   /// @ingroup Evas_Object_Group_Extras
   ///
   bool precise_is_inside_get() const;

   /// @brief Set whether to use precise (usually expensive) point collision
   /// detection for a given Evas object.
   ///
   /// Use this function to make Evas treat objects' transparent areas as
   /// @b not belonging to it with regard to mouse pointer events. By
   /// default, all of the object's boundary rectangle will be taken in
   /// account for them.
   ///
   /// @warning By using precise point collision detection you'll be
   /// making Evas more resource intensive.
   ///
   /// Example code follows.
   /// @dontinclude evas-events.c
   /// @skip if (strcmp(ev->key, "p") == 0)
   /// @until }
   ///
   /// See the full example @ref Example_Evas_Events "here".
   ///
   /// @see evas_object_precise_is_inside_get()
   /// @ingroup Evas_Object_Group_Extras
   ///
   void precise_is_inside_set(bool precise_) const;

   /// @brief Retrieves the hints for on object's alignment.
   ///
   /// This is not a size enforcement in any way, it's just a hint that
   /// should be used whenever appropriate.
   ///
   /// @note Use @c NULL pointers on the hint components you're not
   /// interested in: they'll be ignored by the function.
   /// @note If @c obj is invalid, then the hint components will be set with 0.5
   ///
   /// @see evas_object_size_hint_align_set() for more information
   ///
   void size_hint_align_get(double* x_, double* y_) const;

   /// @brief Sets the hints for an object's alignment.
   ///
   /// These are hints on how to align an object <b>inside the boundaries
   /// of a container/manager</b>. Accepted values are in the @c 0.0 to @c
   /// 1.0 range, with the special value #EVAS_HINT_FILL used to specify
   /// "justify" or "fill" by some users. In this case, maximum size hints
   /// should be enforced with higher priority, if they are set. Also, any
   /// padding hint set on objects should add up to the alignment space on
   /// the final scene composition.
   ///
   /// See documentation of possible users: in Evas, they are the @ref
   /// Evas_Object_Box "box" and @ref Evas_Object_Table "table" smart
   /// objects.
   ///
   /// For the horizontal component, @c 0.0 means to the left, @c 1.0
   /// means to the right. Analogously, for the vertical component, @c 0.0
   /// to the top, @c 1.0 means to the bottom.
   ///
   /// See the following figure:
   ///
   /// @image html alignment-hints.png
   /// @image rtf alignment-hints.png
   /// @image latex alignment-hints.eps
   ///
   /// This is not a size enforcement in any way, it's just a hint that
   /// should be used whenever appropriate.
   ///
   /// @note Default alignment hint values are 0.5, for both axis.
   ///
   /// Example:
   /// @dontinclude evas-hints.c
   /// @skip evas_object_size_hint_align_set
   /// @until return
   ///
   /// In this example the alignment hints change the behavior of an Evas
   /// box when layouting its children. See the full @ref
   /// Example_Evas_Size_Hints "example".
   ///
   /// @see evas_object_size_hint_align_get()
   /// @see evas_object_size_hint_max_set()
   /// @see evas_object_size_hint_padding_set()
   ///
   void size_hint_align_set(double x_, double y_) const;

   /// @brief Retrieve whether an Evas object is set to propagate events.
   ///
   /// @return whether @p obj is set to propagate events (@c EINA_TRUE)
   /// or not (@c EINA_FALSE)
   ///
   /// @see evas_object_propagate_events_set()
   /// @see evas_object_repeat_events_get()
   /// @see evas_object_pass_events_get()
   /// @see evas_object_freeze_events_get()
   ///
   bool propagate_events_get() const;

   /// @brief Set whether events on a smart object's member should get propagated
   /// up to its parent.
   ///
   /// This function has @b no effect if @p obj is not a member of a smart
   /// object.
   ///
   /// If @p prop is @c EINA_TRUE, events occurring on this object will be
   /// propagated on to the smart object of which @p obj is a member.  If
   /// @p prop is @c EINA_FALSE, events occurring on this object will @b
   /// not be propagated on to the smart object of which @p obj is a
   /// member.  The default value is @c EINA_TRUE.
   ///
   /// @see evas_object_propagate_events_get()
   /// @see evas_object_repeat_events_set()
   /// @see evas_object_pass_events_set()
   /// @see evas_object_freeze_events_set()
   ///
   void propagate_events_set(bool propagate_) const;

   /// @brief Determine whether an object is set to pass (ignore) events.
   ///
   /// @return pass whether @p obj is set to pass events (@c EINA_TRUE) or not
   /// (@c EINA_FALSE)
   ///
   /// Example:
   /// @dontinclude evas-stacking.c
   /// @skip if (strcmp(ev->key, "p") == 0)
   /// @until }
   ///
   /// See the full @ref Example_Evas_Stacking "example".
   ///
   /// @see evas_object_pass_events_set()
   /// @see evas_object_repeat_events_get()
   /// @see evas_object_propagate_events_get()
   /// @see evas_object_freeze_events_get()
   ///
   bool pass_events_get() const;

   /// @brief Set whether an Evas object is to pass (ignore) events.
   ///
   /// If @p pass is @c EINA_TRUE, it will make events on @p obj to be @b
   /// ignored. They will be triggered on the @b next lower object (that
   /// is not set to pass events), instead (see evas_object_below_get()).
   ///
   /// If @p pass is @c EINA_FALSE, events will be processed on that
   /// object as normal.
   ///
   /// @see evas_object_pass_events_get() for an example
   /// @see evas_object_repeat_events_set()
   /// @see evas_object_propagate_events_set()
   /// @see evas_object_freeze_events_set()
   ///
   void pass_events_set(bool pass_) const;

   /// @brief Retrieves whether or not the given Evas object is to be drawn anti_aliased.
   /// @return  (@c EINA_TRUE) if the object is to be anti_aliased.  (@c EINA_FALSE) otherwise.
   /// @ingroup Evas_Object_Group_Extras
   ///
   bool anti_alias_get() const;

   /// @brief Sets whether or not the given Evas object is to be drawn anti-aliased.
   ///
   /// @ingroup Evas_Object_Group_Extras
   ///
   void anti_alias_set(bool anti_alias_) const;

   /// @brief Retrieve user data stored on a given smart object.
   ///
   /// @return A pointer to data stored using
   /// evas_object_smart_data_set(), or @c NULL, if none has been
   /// set.
   ///
   /// @see evas_object_smart_data_set()
   ///
   /// @ingroup Evas_Smart_Object_Group
   ///
   void * smart_data_get() const;

   /// @brief Get the clipper object for the given clipped smart object.
   ///
   /// @return the clipper object.
   ///
   /// Use this function if you want to change any of this clipper's
   /// properties, like colors.
   ///
   /// @see evas_object_smart_clipped_smart_add()
   ///
   ::evas::object smart_clipped_clipper_get() const;

   /// @brief Return a list of objects currently clipped by @p obj.
   ///
   /// @return a list of objects being clipped by @p obj
   ///
   /// This returns the internal list handle that contains all objects
   /// clipped by the object @p obj. If none are clipped by it, the call
   /// returns @c NULL. This list is only valid until the clip list is
   /// changed and should be fetched again with another call to
   /// evas_object_clipees_get() if any objects being clipped by this
   /// object are unclipped, clipped by a new object, deleted or get the
   /// clipper deleted. These operations will invalidate the list
   /// returned, so it should not be used anymore after that point. Any
   /// use of the list after this may have undefined results, possibly
   /// leading to crashes. The object @p obj must be a valid
   /// .Evas_Object.
   ///
   /// See also evas_object_clip_set(), evas_object_clip_unset() and
   /// evas_object_clip_get().
   ///
   /// Example:
   /// @code
   /// extern Evas_Object *obj;
   /// Evas_Object *clipper;
   ///
   /// clipper = evas_object_clip_get(obj);
   /// if (clipper)
   /// {
   /// Eina_List *clippees, *l;
   /// Evas_Object *obj_tmp;
   ///
   /// clippees = evas_object_clipees_get(clipper);
   /// printf("Clipper clips %i objects\n", eina_list_count(clippees));
   /// EINA_LIST_FOREACH(clippees, l, obj_tmp)
   /// evas_object_show(obj_tmp);
   /// }
   /// @endcode
   ///
   ::efl::eina::crange_list< ::evas::object > clipees_get() const;

   /// @brief Gets the parent smart object of a given Evas object, if it has one.
   ///
   /// @return Returns the parent smart object of @a obj or @c NULL, if @a
   /// obj is not a smart member of any
   ///
   /// @ingroup Evas_Smart_Object_Group
   ///
   ::evas::object smart_parent_get() const;

   /// @brief Retrieves the hints for an object's display mode
   ///
   /// These are hints on the display mode @p obj. This is
   /// not a size enforcement in any way, it's just a hint that can be
   /// used whenever appropriate.
   /// This mode can be used object's display mode like commpress or expand
   ///
   Evas_Display_Mode size_hint_display_mode_get() const;

   /// @brief Sets the hints for an object's disply mode
   ///
   /// This is not a size enforcement in any way, it's just a hint that
   /// can be used whenever appropriate.
   ///
   void size_hint_display_mode_set(Evas_Display_Mode dispmode_) const;

   /// @brief Returns the state of the "no-render" flag, which means, when true,
   /// that an object should never be rendered on the canvas.
   ///
   /// This flag can be used to avoid rendering visible clippers on the
   /// canvas, even if they currently don't clip any object.
   ///
   /// @since 1.15
   ///
   bool no_render_get() const;

   /// @brief Disable all rendering on the canvas.
   ///
   /// This flag will be used to indicate to Evas that this object should
   /// never be rendered on the canvas under any circurmstances. In
   /// particular, this is useful to avoid drawing clipper objects (or masks)
   /// even when they don't clip any object. This can also be used to replace
   /// the old source_visible flag with proxy objects.
   ///
   /// This is different to the visible property, as even visible objects
   /// marked as "no-render" will never appear on screen. But those objects
   /// can still be used as proxy sources or clippers. When hidden, all
   /// "no-render" objects will completely disappear from the canvas, and
   /// hide their clippees or be invisible when used as proxy sources.
   ///
   /// @since 1.15
   ///
   void no_render_set(bool enable_) const;

   template <typename F>
   ::efl::eo::signal_connection
   callback_mouse_in_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_OBJECT_EVENT_MOUSE_IN, priority_,
            &::efl::eo::_detail::event_callback<::evas::object, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::object, function_type>,
         EVAS_OBJECT_EVENT_MOUSE_IN );
   }

   template <typename T>
   void
   callback_mouse_in_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EVAS_OBJECT_EVENT_MOUSE_IN, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_mouse_out_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_OBJECT_EVENT_MOUSE_OUT, priority_,
            &::efl::eo::_detail::event_callback<::evas::object, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::object, function_type>,
         EVAS_OBJECT_EVENT_MOUSE_OUT );
   }

   template <typename T>
   void
   callback_mouse_out_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EVAS_OBJECT_EVENT_MOUSE_OUT, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_mouse_down_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_OBJECT_EVENT_MOUSE_DOWN, priority_,
            &::efl::eo::_detail::event_callback<::evas::object, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::object, function_type>,
         EVAS_OBJECT_EVENT_MOUSE_DOWN );
   }

   template <typename T>
   void
   callback_mouse_down_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EVAS_OBJECT_EVENT_MOUSE_DOWN, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_mouse_up_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_OBJECT_EVENT_MOUSE_UP, priority_,
            &::efl::eo::_detail::event_callback<::evas::object, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::object, function_type>,
         EVAS_OBJECT_EVENT_MOUSE_UP );
   }

   template <typename T>
   void
   callback_mouse_up_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EVAS_OBJECT_EVENT_MOUSE_UP, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_mouse_move_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_OBJECT_EVENT_MOUSE_MOVE, priority_,
            &::efl::eo::_detail::event_callback<::evas::object, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::object, function_type>,
         EVAS_OBJECT_EVENT_MOUSE_MOVE );
   }

   template <typename T>
   void
   callback_mouse_move_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EVAS_OBJECT_EVENT_MOUSE_MOVE, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_mouse_wheel_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_OBJECT_EVENT_MOUSE_WHEEL, priority_,
            &::efl::eo::_detail::event_callback<::evas::object, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::object, function_type>,
         EVAS_OBJECT_EVENT_MOUSE_WHEEL );
   }

   template <typename T>
   void
   callback_mouse_wheel_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EVAS_OBJECT_EVENT_MOUSE_WHEEL, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_multi_down_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_OBJECT_EVENT_MULTI_DOWN, priority_,
            &::efl::eo::_detail::event_callback<::evas::object, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::object, function_type>,
         EVAS_OBJECT_EVENT_MULTI_DOWN );
   }

   template <typename T>
   void
   callback_multi_down_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EVAS_OBJECT_EVENT_MULTI_DOWN, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_multi_up_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_OBJECT_EVENT_MULTI_UP, priority_,
            &::efl::eo::_detail::event_callback<::evas::object, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::object, function_type>,
         EVAS_OBJECT_EVENT_MULTI_UP );
   }

   template <typename T>
   void
   callback_multi_up_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EVAS_OBJECT_EVENT_MULTI_UP, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_multi_move_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_OBJECT_EVENT_MULTI_MOVE, priority_,
            &::efl::eo::_detail::event_callback<::evas::object, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::object, function_type>,
         EVAS_OBJECT_EVENT_MULTI_MOVE );
   }

   template <typename T>
   void
   callback_multi_move_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EVAS_OBJECT_EVENT_MULTI_MOVE, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_free_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_OBJECT_EVENT_FREE, priority_,
            &::efl::eo::_detail::event_callback<::evas::object, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::object, function_type>,
         EVAS_OBJECT_EVENT_FREE );
   }

   template <typename T>
   void
   callback_free_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EVAS_OBJECT_EVENT_FREE, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_key_down_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_OBJECT_EVENT_KEY_DOWN, priority_,
            &::efl::eo::_detail::event_callback<::evas::object, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::object, function_type>,
         EVAS_OBJECT_EVENT_KEY_DOWN );
   }

   template <typename T>
   void
   callback_key_down_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EVAS_OBJECT_EVENT_KEY_DOWN, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_key_up_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_OBJECT_EVENT_KEY_UP, priority_,
            &::efl::eo::_detail::event_callback<::evas::object, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::object, function_type>,
         EVAS_OBJECT_EVENT_KEY_UP );
   }

   template <typename T>
   void
   callback_key_up_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EVAS_OBJECT_EVENT_KEY_UP, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_focus_in_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_OBJECT_EVENT_FOCUS_IN, priority_,
            &::efl::eo::_detail::event_callback<::evas::object, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::object, function_type>,
         EVAS_OBJECT_EVENT_FOCUS_IN );
   }

   template <typename T>
   void
   callback_focus_in_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EVAS_OBJECT_EVENT_FOCUS_IN, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_focus_out_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_OBJECT_EVENT_FOCUS_OUT, priority_,
            &::efl::eo::_detail::event_callback<::evas::object, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::object, function_type>,
         EVAS_OBJECT_EVENT_FOCUS_OUT );
   }

   template <typename T>
   void
   callback_focus_out_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EVAS_OBJECT_EVENT_FOCUS_OUT, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_show_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_OBJECT_EVENT_SHOW, priority_,
            &::efl::eo::_detail::event_callback<::evas::object, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::object, function_type>,
         EVAS_OBJECT_EVENT_SHOW );
   }

   template <typename T>
   void
   callback_show_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EVAS_OBJECT_EVENT_SHOW, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_hide_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_OBJECT_EVENT_HIDE, priority_,
            &::efl::eo::_detail::event_callback<::evas::object, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::object, function_type>,
         EVAS_OBJECT_EVENT_HIDE );
   }

   template <typename T>
   void
   callback_hide_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EVAS_OBJECT_EVENT_HIDE, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_move_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_OBJECT_EVENT_MOVE, priority_,
            &::efl::eo::_detail::event_callback<::evas::object, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::object, function_type>,
         EVAS_OBJECT_EVENT_MOVE );
   }

   template <typename T>
   void
   callback_move_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EVAS_OBJECT_EVENT_MOVE, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_resize_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_OBJECT_EVENT_RESIZE, priority_,
            &::efl::eo::_detail::event_callback<::evas::object, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::object, function_type>,
         EVAS_OBJECT_EVENT_RESIZE );
   }

   template <typename T>
   void
   callback_resize_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EVAS_OBJECT_EVENT_RESIZE, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_restack_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_OBJECT_EVENT_RESTACK, priority_,
            &::efl::eo::_detail::event_callback<::evas::object, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::object, function_type>,
         EVAS_OBJECT_EVENT_RESTACK );
   }

   template <typename T>
   void
   callback_restack_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EVAS_OBJECT_EVENT_RESTACK, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_del_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_OBJECT_EVENT_DEL, priority_,
            &::efl::eo::_detail::event_callback<::evas::object, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::object, function_type>,
         EVAS_OBJECT_EVENT_DEL );
   }

   template <typename T>
   void
   callback_del_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EVAS_OBJECT_EVENT_DEL, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_hold_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_OBJECT_EVENT_HOLD, priority_,
            &::efl::eo::_detail::event_callback<::evas::object, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::object, function_type>,
         EVAS_OBJECT_EVENT_HOLD );
   }

   template <typename T>
   void
   callback_hold_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EVAS_OBJECT_EVENT_HOLD, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_changed_size_hints_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_OBJECT_EVENT_CHANGED_SIZE_HINTS, priority_,
            &::efl::eo::_detail::event_callback<::evas::object, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::object, function_type>,
         EVAS_OBJECT_EVENT_CHANGED_SIZE_HINTS );
   }

   template <typename T>
   void
   callback_changed_size_hints_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EVAS_OBJECT_EVENT_CHANGED_SIZE_HINTS, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_image_preloaded_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_OBJECT_EVENT_IMAGE_PRELOADED, priority_,
            &::efl::eo::_detail::event_callback<::evas::object, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::object, function_type>,
         EVAS_OBJECT_EVENT_IMAGE_PRELOADED );
   }

   template <typename T>
   void
   callback_image_preloaded_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EVAS_OBJECT_EVENT_IMAGE_PRELOADED, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_image_resize_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_OBJECT_EVENT_IMAGE_RESIZE, priority_,
            &::efl::eo::_detail::event_callback<::evas::object, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::object, function_type>,
         EVAS_OBJECT_EVENT_IMAGE_RESIZE );
   }

   template <typename T>
   void
   callback_image_resize_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EVAS_OBJECT_EVENT_IMAGE_RESIZE, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_image_unloaded_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_OBJECT_EVENT_IMAGE_UNLOADED, priority_,
            &::efl::eo::_detail::event_callback<::evas::object, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::object, function_type>,
         EVAS_OBJECT_EVENT_IMAGE_UNLOADED );
   }

   template <typename T>
   void
   callback_image_unloaded_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EVAS_OBJECT_EVENT_IMAGE_UNLOADED, info));
   }



   static Eo_Class const* _eo_class()
   {
      return(EVAS_OBJECT_CLASS);
   }

   operator ::evas::object() const;
   operator ::evas::object&();
   operator ::evas::object const&() const;

   /// @cond LOCAL
   template <typename D>
   struct address_of
   {
      operator ::evas::object*() const { return static_cast<::evas::object*>(static_cast<D const*>(this)->p); }
      operator ::evas::object const*() const { return static_cast<::evas::object const*>(static_cast<D const*>(this)->p); }
   };

   template <typename D>
   struct address_const_of
   {
      operator ::evas::object const*() const { return static_cast<::evas::object const*>(static_cast<D const*>(this)->p); }
   };
   /// @endcond

private:

   /// @internal
   Eo* _concrete_eo_ptr() const
   {
      return static_cast<::efl::eo::concrete const*>(static_cast<void const*>(this))->_eo_ptr();
   }

};

}

}
/// @endcond

namespace evas {

/// @brief Class object
struct object
      : ::efl::eo::concrete
      , EO_CXX_INHERIT(efl::gfx::base)
      , EO_CXX_INHERIT(efl::gfx::stack)
      , EO_CXX_INHERIT(eo::base)
      , EO_CXX_INHERIT(evas::common_interface)
{
   //@{
   /**
      @brief Constructs a new evas::object object.

      Constructs a new evas::object object. If you want this object to be a child
      of another Eo object, use an @ref efl::eo::parent expression, like the example.

      Example:
      @code
      evas::object my_object(efl::eo::parent = parent_object);
      @endcode

      @see object(Eo* eo)
   */
   explicit object(::efl::eo::parent_type _p)
      : object(_ctors_call(_p))
   {}

   explicit object()
      : object(_ctors_call(::efl::eo::parent = nullptr))
   {}
   //@}

   /// @brief Eo Constructor.
   ///
   /// Constructs the object from an Eo* pointer stealing its ownership.
   ///
   /// @param eo The Eo object pointer.
   ///
   explicit object(Eo* eo)
      : ::efl::eo::concrete(eo)
   {}

   /// @brief nullptr_t Constructor.
   ///
   /// Constructs an empty (null) object.
   ///
   explicit object(std::nullptr_t)
      : ::efl::eo::concrete(nullptr)
   {}

   /// @brief Copy Constructor.
   ///
   object(object const& other)
      : object(eo_ref(other._eo_ptr()))
   {}

   ~object() {}

   /// @brief Test if any object is clipped by @p obj.
   ///
   /// @return EINA_TRUE if @p obj clip any object.
   /// @since 1.8
   ///
   bool clipees_has() const;

   /// @brief Requests @p keyname key events be directed to @p obj.
   ///
   /// @return @c EINA_TRUE, if the call succeeded, @c EINA_FALSE otherwise.
   ///
   /// Key grabs allow one or more objects to receive key events for
   /// specific key strokes even if other objects have focus. Whenever a
   /// key is grabbed, only the objects grabbing it will get the events
   /// for the given keys.
   ///
   /// @p keyname is a platform dependent symbolic name for the key
   /// pressed (see @ref Evas_Keys for more information).
   ///
   /// @p modifiers and @p not_modifiers are bit masks of all the
   /// modifiers that must and mustn't, respectively, be pressed along
   /// with @p keyname key in order to trigger this new key
   /// grab. Modifiers can be things such as Shift and Ctrl as well as
   /// user defined types via evas_key_modifier_add(). Retrieve them with
   /// evas_key_modifier_mask_get() or use @c 0 for empty masks.
   ///
   /// @p exclusive will make the given object the only one permitted to
   /// grab the given key. If given @c EINA_TRUE, subsequent calls on this
   /// function with different @p obj arguments will fail, unless the key
   /// is ungrabbed again.
   ///
   /// Example code follows.
   /// @dontinclude evas-events.c
   /// @skip if (d.focus)
   /// @until else
   ///
   /// See the full example @ref Example_Evas_Events "here".
   ///
   /// @warning Providing impossible modifier sets creates undefined behavior
   ///
   /// @see evas_object_key_ungrab
   /// @see evas_object_focus_set
   /// @see evas_object_focus_get
   /// @see evas_focus_get
   /// @see evas_key_modifier_add
   ///
   /// @param keyname the key to request events for.
   /// @param modifiers a mask of modifiers that must be present to
   /// trigger the event.
   /// @param not_modifiers a mask of modifiers that must @b not be present
   /// to trigger the event.
   /// @param exclusive request that the @p obj is the only object
   /// receiving the @p keyname events.
   ///
   bool key_grab(::efl::eina::string_view keyname_, Evas_Modifier_Mask modifiers_, Evas_Modifier_Mask not_modifiers_, bool exclusive_) const;

   /// @brief Checks whether a given smart object or any of its smart object
   /// parents is of a given smart class.
   ///
   /// @return @c EINA_TRUE, if @a obj or any of its parents is of type @a
   /// type, @c EINA_FALSE otherwise
   ///
   /// If @p obj is not a smart object, this call will fail
   /// immediately.
   ///
   /// This function supports Eo and legacy inheritance mechanisms. However,
   /// it is recommended to use eo_isa instead if your object is using Eo from
   /// top to bottom.
   ///
   /// The checks use smart classes names and <b>string
   /// comparison</b>. There is a version of this same check using
   /// <b>pointer comparison</b>, since a smart class' name is a single
   /// string in Evas.
   ///
   /// @see evas_object_smart_type_check_ptr()
   /// @see eo_isa
   ///
   /// @ingroup Evas_Smart_Object_Group
   ///
   /// @param type The @b name (type) of the smart class to check for
   ///
   bool smart_type_check(::efl::eina::string_view type_) const;

   /// @brief Retrieves the object from children of the given object with the given name.
   /// @return  If successful, the Evas object with the given name.  Otherwise,
   /// @c NULL.
   ///
   /// This looks for the evas object given a name by evas_object_name_set(), but
   /// it ONLY looks at the children of the object *p obj, and will only recurse
   /// into those children if @p recurse is greater than 0. If the name is not
   /// unique within immediate children (or the whole child tree) then it is not
   /// defined which child object will be returned. If @p recurse is set to -1 then
   /// it will recurse without limit.
   ///
   /// @since 1.2
   ///
   /// @ingroup Evas_Object_Group_Find
   ///
   /// @param name The given name.
   /// @param recurse Set to the number of child levels to recurse (0 == don't recurse, 1 == only look at the children of @p obj or their immediate children, but no further etc.).
   ///
   ::evas::object name_child_find(::efl::eina::string_view name_, int recurse_) const;

   /// @brief Removes the grab on @p keyname key events by @p obj.
   ///
   /// Removes a key grab on @p obj if @p keyname, @p modifiers, and @p
   /// not_modifiers match.
   ///
   /// Example code follows.
   /// @dontinclude evas-events.c
   /// @skip got here by key grabs
   /// @until }
   ///
   /// See the full example @ref Example_Evas_Events "here".
   ///
   /// @see evas_object_key_grab
   /// @see evas_object_focus_set
   /// @see evas_object_focus_get
   /// @see evas_focus_get
   ///
   /// @param keyname the key the grab is set for.
   /// @param modifiers a mask of modifiers that must be present to
   /// trigger the event.
   /// @param not_modifiers a mask of modifiers that must not not be
   /// present to trigger the event.
   ///
   void key_ungrab(::efl::eina::string_view keyname_, Evas_Modifier_Mask modifiers_, Evas_Modifier_Mask not_modifiers_) const;

   /// @brief Disable/cease clipping on a clipped @p obj object.
   ///
   /// This function disables clipping for the object @p obj, if it was
   /// already clipped, i.e., its visibility and color get detached from
   /// the previous clipper. If it wasn't, this has no effect. The object
   /// @p obj must be a valid .Evas_Object.
   ///
   /// See also evas_object_clip_set() (for an example),
   /// evas_object_clipees_get() and evas_object_clip_get().
   ///
   void clip_unset() const;

   /// @brief Moves all children objects of a given smart object relative to a
   /// given offset.
   ///
   /// This will make each of @p obj object's children to move, from where
   /// they before, with those delta values (offsets) on both directions.
   ///
   /// @note This is most useful on custom smart @c move() functions.
   ///
   /// @note Clipped smart objects already make use of this function on
   /// their @c move() smart function definition.
   ///
   /// @param dx horizontal offset (delta).
   /// @param dy vertical offset (delta).
   ///
   void smart_move_children_relative(Evas_Coord dx_, Evas_Coord dy_) const;

   /// @brief Checks whether a given smart object or any of its smart object
   /// parents is of a given smart class, <b>using pointer comparison</b>.
   ///
   /// @return @c EINA_TRUE, if @a obj or any of its parents is of type @a
   /// type, @c EINA_FALSE otherwise
   ///
   /// @see evas_object_smart_type_check() for more details
   /// @see eo_isa
   ///
   /// @ingroup Evas_Smart_Object_Group
   ///
   /// @param type The type (name string) to check for. Must be the name
   ///
   bool smart_type_check_ptr(::efl::eina::string_view type_) const;

   /// @brief Retrieves the hints for an object's maximum size.
   ///
   /// These are hints on the maximum sizes @p obj should have. This is
   /// not a size enforcement in any way, it's just a hint that should be
   /// used whenever appropriate.
   ///
   /// @note Use @c NULL pointers on the hint components you're not
   /// interested in: they'll be ignored by the function.
   ///
   /// @see evas_object_size_hint_max_set()
   ///
   void size_hint_max_get(Evas_Coord* w_, Evas_Coord* h_) const;

   /// @brief Sets the hints for an object's maximum size.
   ///
   /// This is not a size enforcement in any way, it's just a hint that
   /// should be used whenever appropriate.
   ///
   /// Values @c -1 will be treated as unset hint components, when queried
   /// by managers.
   ///
   /// @note Smart objects(such as elementary) can have their own size hint
   /// policy. So calling this API may or may not affect the size of smart objects.
   ///
   /// Example:
   /// @dontinclude evas-hints.c
   /// @skip evas_object_size_hint_max_set
   /// @until return
   ///
   /// In this example the maximum size hints change the behavior of an
   /// Evas box when layouting its children. See the full @ref
   /// Example_Evas_Size_Hints "example".
   ///
   /// @see evas_object_size_hint_max_get()
   ///
   void size_hint_max_set(Evas_Coord w_, Evas_Coord h_) const;

   /// @brief Retrieves the hints for an object's optimum size.
   ///
   /// These are hints on the optimum sizes @p obj should have. This is
   /// not a size enforcement in any way, it's just a hint that should be
   /// used whenever appropriate.
   ///
   /// @note Use @c NULL pointers on the hint components you're not
   /// interested in: they'll be ignored by the function.
   ///
   /// @see evas_object_size_hint_request_set()
   ///
   void size_hint_request_get(Evas_Coord* w_, Evas_Coord* h_) const;

   /// @brief Sets the hints for an object's optimum size.
   ///
   /// This is not a size enforcement in any way, it's just a hint that
   /// should be used whenever appropriate.
   ///
   /// Values @c 0 will be treated as unset hint components, when queried
   /// by managers.
   ///
   /// @note Smart objects(such as elementary) can have their own size hint
   /// policy. So calling this API may or may not affect the size of smart objects.
   ///
   /// @see evas_object_size_hint_request_get()
   ///
   void size_hint_request_set(Evas_Coord w_, Evas_Coord h_) const;

   /// @brief Retrieves the type of the given Evas object.
   ///
   /// @return The type of the object.
   ///
   /// For Evas' builtin types, the return strings will be one of:
   /// - <c>"rectangle"</c>,
   /// - <c>"line"</c>,
   /// - <c>"polygon"</c>,
   /// - <c>"text"</c>,
   /// - <c>"textblock"</c> and
   /// - <c>"image"</c>.
   ///
   /// For Evas smart objects (see @ref Evas_Smart_Group), the name of the
   /// smart class itself is returned on this call. For the built-in smart
   /// objects, these names are:
   /// - <c>"EvasObjectSmartClipped"</c>, for the clipped smart object
   /// - <c>"Evas_Object_Box"</c>, for the box object and
   /// - <c>"Evas_Object_Table"</c>, for the table object.
   ///
   /// Example:
   /// @dontinclude evas-object-manipulation.c
   /// @skip d.img = evas_object_image_filled_add(d.canvas);
   /// @until border on the
   ///
   /// See the full @ref Example_Evas_Object_Manipulation "example".
   ///
   ::efl::eina::string_view type_get() const;

   /// @brief Sets the type of the given Evas object.
   ///
   void type_set(::efl::eina::string_view type_) const;

   /// @brief Retrieves the hints for an object's minimum size.
   ///
   /// These are hints on the minimum sizes @p obj should have. This is
   /// not a size enforcement in any way, it's just a hint that should be
   /// used whenever appropriate.
   ///
   /// @note Use @c NULL pointers on the hint components you're not
   /// interested in: they'll be ignored by the function.
   ///
   /// @see evas_object_size_hint_min_set() for an example
   ///
   void size_hint_min_get(Evas_Coord* w_, Evas_Coord* h_) const;

   /// @brief Sets the hints for an object's minimum size.
   ///
   /// This is not a size enforcement in any way, it's just a hint that
   /// should be used whenever appropriate.
   ///
   /// Values @c 0 will be treated as unset hint components, when queried
   /// by managers.
   ///
   /// @note Smart objects(such as elementary) can have their own size hint
   /// policy. So calling this API may or may not affect the size of smart objects.
   ///
   /// Example:
   /// @dontinclude evas-hints.c
   /// @skip evas_object_size_hint_min_set
   /// @until return
   ///
   /// In this example the minimum size hints change the behavior of an
   /// Evas box when layouting its children. See the full @ref
   /// Example_Evas_Size_Hints "example".
   ///
   /// @see evas_object_size_hint_min_get()
   ///
   void size_hint_min_set(Evas_Coord w_, Evas_Coord h_) const;

   /// @brief Determine how pointer will behave.
   /// @return pointer behavior.
   /// @ingroup Evas_Object_Group_Extras
   ///
   Evas_Object_Pointer_Mode pointer_mode_get() const;

   /// @brief Set pointer behavior.
   ///
   /// This function has direct effect on event callbacks related to
   /// mouse.
   ///
   /// If @p setting is EVAS_OBJECT_POINTER_MODE_AUTOGRAB, then when mouse
   /// is down at this object, events will be restricted to it as source,
   /// mouse moves, for example, will be emitted even if outside this
   /// object area.
   ///
   /// If @p setting is EVAS_OBJECT_POINTER_MODE_NOGRAB, then events will
   /// be emitted just when inside this object area.
   ///
   /// The default value is EVAS_OBJECT_POINTER_MODE_AUTOGRAB.
   ///
   /// @ingroup Evas_Object_Group_Extras
   ///
   void pointer_mode_set(Evas_Object_Pointer_Mode pointer_mode_) const;

   /// @brief Retrieves the current value of the operation used for rendering the Evas object.
   /// @return  one of the enumerated values in Evas_Render_Op.
   /// @ingroup Evas_Object_Group_Extras
   ///
   Evas_Render_Op render_op_get() const;

   /// @brief Sets the render_op to be used for rendering the Evas object.
   /// @ingroup Evas_Object_Group_Extras
   ///
   void render_op_set(Evas_Render_Op render_op_) const;

   /// @brief Determine whether an object is set to freeze (discard) events.
   ///
   /// @return freeze whether @p obj is set to freeze events (@c EINA_TRUE) or
   /// not (@c EINA_FALSE)
   ///
   /// @see evas_object_freeze_events_set()
   /// @see evas_object_pass_events_get()
   /// @see evas_object_repeat_events_get()
   /// @see evas_object_propagate_events_get()
   /// @since 1.1
   ///
   bool freeze_events_get() const;

   /// @brief Set whether an Evas object is to freeze (discard) events.
   ///
   /// If @p freeze is @c EINA_TRUE, it will make events on @p obj to be @b
   /// discarded. Unlike evas_object_pass_events_set(), events will not be
   /// passed to @b next lower object. This API can be used for blocking
   /// events while @p obj is on transiting.
   ///
   /// If @p freeze is @c EINA_FALSE, events will be processed on that
   /// object as normal.
   ///
   /// @warning If you block only key/mouse up events with this API, we won't
   /// guarantee the state of the object, that only had key/mouse down
   /// events, will be.
   ///
   /// @see evas_object_freeze_events_get()
   /// @see evas_object_pass_events_set()
   /// @see evas_object_repeat_events_set()
   /// @see evas_object_propagate_events_set()
   /// @since 1.1
   ///
   void freeze_events_set(bool freeze_) const;

   /// @brief Get current object transformation map.
   ///
   /// This returns the current internal map set on the indicated object. It is
   /// intended for read-only access and is only valid as long as the object is
   /// not deleted or the map on the object is not changed. If you wish to modify
   /// the map and set it back do the following:
   ///
   /// @code
   /// const Evas_Map *m = evas_object_map_get(obj);
   /// Evas_Map *m2 = evas_map_dup(m);
   /// evas_map_util_rotate(m2, 30.0, 0, 0);
   /// evas_object_map_set(obj, m2);
   /// evas_map_free(m2);
   /// @endcode
   ///
   /// @return map reference to map in use. This is an internal data structure, so
   /// do not modify it.
   ///
   /// @see evas_object_map_set()
   ///
   const Evas_Map * map_get() const;

   /// @brief Set current object transformation map.
   ///
   /// This sets the map on a given object. It is copied from the @p map pointer,
   /// so there is no need to keep the @p map object if you don't need it anymore.
   ///
   /// A map is a set of 4 points which have canvas x, y coordinates per point,
   /// with an optional z point value as a hint for perspective correction, if it
   /// is available. As well each point has u and v coordinates. These are like
   /// "texture coordinates" in OpenGL in that they define a point in the source
   /// image that is mapped to that map vertex/point. The u corresponds to the x
   /// coordinate of this mapped point and v, the y coordinate. Note that these
   /// coordinates describe a bounding region to sample. If you have a 200x100
   /// source image and want to display it at 200x100 with proper pixel
   /// precision, then do:
   ///
   /// @code
   /// Evas_Map *m = evas_map_new(4);
   /// evas_map_point_coord_set(m, 0,   0,   0, 0);
   /// evas_map_point_coord_set(m, 1, 200,   0, 0);
   /// evas_map_point_coord_set(m, 2, 200, 100, 0);
   /// evas_map_point_coord_set(m, 3,   0, 100, 0);
   /// evas_map_point_image_uv_set(m, 0,   0,   0);
   /// evas_map_point_image_uv_set(m, 1, 200,   0);
   /// evas_map_point_image_uv_set(m, 2, 200, 100);
   /// evas_map_point_image_uv_set(m, 3,   0, 100);
   /// evas_object_map_set(obj, m);
   /// evas_map_free(m);
   /// @endcode
   ///
   /// Note that the map points a uv coordinates match the image geometry. If
   /// the @p map parameter is NULL, the stored map will be freed and geometry
   /// prior to enabling/setting a map will be restored.
   ///
   /// @see evas_map_new()
   ///
   void map_set(const Evas_Map * map_) const;

   /// @brief Retrieves the hints for an object's aspect ratio.
   ///
   /// The different aspect ratio policies are documented in the
   /// #Evas_Aspect_Control type. A container respecting these size hints
   /// would @b resize its children accordingly to those policies.
   ///
   /// For any policy, if any of the given aspect ratio terms are @c 0,
   /// the object's container should ignore the aspect and scale @p obj to
   /// occupy the whole available area. If they are both positive
   /// integers, that proportion will be respected, under each scaling
   /// policy.
   ///
   /// These images illustrate some of the #Evas_Aspect_Control policies:
   ///
   /// @image html any-policy.png
   /// @image rtf any-policy.png
   /// @image latex any-policy.eps
   ///
   /// @image html aspect-control-none-neither.png
   /// @image rtf aspect-control-none-neither.png
   /// @image latex aspect-control-none-neither.eps
   ///
   /// @image html aspect-control-both.png
   /// @image rtf aspect-control-both.png
   /// @image latex aspect-control-both.eps
   ///
   /// @image html aspect-control-horizontal.png
   /// @image rtf aspect-control-horizontal.png
   /// @image latex aspect-control-horizontal.eps
   ///
   /// This is not a size enforcement in any way, it's just a hint that
   /// should be used whenever appropriate.
   ///
   /// @note Use @c NULL pointers on the hint components you're not
   /// interested in: they'll be ignored by the function.
   ///
   /// Example:
   /// @dontinclude evas-aspect-hints.c
   /// @skip if (strcmp(ev->key, "c") == 0)
   /// @until }
   ///
   /// See the full @ref Example_Evas_Aspect_Hints "example".
   ///
   /// @see evas_object_size_hint_aspect_set()
   ///
   void size_hint_aspect_get(Evas_Aspect_Control* aspect_, Evas_Coord* w_, Evas_Coord* h_) const;

   /// @brief Sets the hints for an object's aspect ratio.
   ///
   /// This is not a size enforcement in any way, it's just a hint that should
   /// be used whenever appropriate.
   ///
   /// If any of the given aspect ratio terms are @c 0,
   /// the object's container will ignore the aspect and scale @p obj to
   /// occupy the whole available area, for any given policy.
   ///
   /// @note Smart objects(such as elementary) can have their own size hint
   /// policy. So calling this API may or may not affect the size of smart objects.
   ///
   /// @see evas_object_size_hint_aspect_get() for more information.
   ///
   void size_hint_aspect_set(Evas_Aspect_Control aspect_, Evas_Coord w_, Evas_Coord h_) const;

   /// @brief Get the object clipping @p obj (if any).
   ///
   /// This function returns the object clipping @p obj. If @p obj is
   /// not being clipped at all, @c NULL is returned. The object @p obj
   /// must be a valid .Evas_Object.
   ///
   /// See also evas_object_clip_set(), evas_object_clip_unset() and
   /// evas_object_clipees_get().
   ///
   /// Example:
   /// @dontinclude evas-object-manipulation.c
   /// @skip if (evas_object_clip_get(d.img) == d.clipper)
   /// @until return
   ///
   /// See the full @ref Example_Evas_Object_Manipulation "example".
   ///
   ::evas::object clip_get() const;

   /// @brief Clip one object to another.
   ///
   /// This function will clip the object @p obj to the area occupied by
   /// the object @p clip. This means the object @p obj will only be
   /// visible within the area occupied by the clipping object (@p clip).
   ///
   /// The color of the object being clipped will be multiplied by the
   /// color of the clipping one, so the resulting color for the former
   /// will be <code>RESULT = (OBJ * CLIP) / (255 * 255)</code>, per color
   /// element (red, green, blue and alpha).
   ///
   /// Clipping is recursive, so clipping objects may be clipped by
   /// others, and their color will in term be multiplied. You may @b not
   /// set up circular clipping lists (i.e. object 1 clips object 2, which
   /// clips object 1): the behavior of Evas is undefined in this case.
   ///
   /// Objects which do not clip others are visible in the canvas as
   /// normal; <b>those that clip one or more objects become invisible
   /// themselves</b>, only affecting what they clip. If an object ceases
   /// to have other objects being clipped by it, it will become visible
   /// again.
   ///
   /// The visibility of an object affects the objects that are clipped by
   /// it, so if the object clipping others is not shown (as in
   /// evas_object_show()), the objects clipped by it will not be shown
   /// either.
   ///
   /// If @p obj was being clipped by another object when this function is
   /// called, it gets implicitly removed from the old clipper's domain
   /// and is made now to be clipped by its new clipper.
   ///
   /// The following figure illustrates some clipping in Evas:
   ///
   /// @image html clipping.png
   /// @image rtf clipping.png
   /// @image latex clipping.eps
   ///
   /// @note At the moment the <b>only objects that can validly be used to
   /// clip other objects are rectangle objects</b>. All other object
   /// types are invalid and the result of using them is undefined. The
   /// clip object @p clip must be a valid object, but can also be @c
   /// NULL, in which case the effect of this function is the same as
   /// calling evas_object_clip_unset() on the @p obj object.
   ///
   /// Example:
   /// @dontinclude evas-object-manipulation.c
   /// @skip solid white clipper (note that it's the default color for a
   /// @until evas_object_show(d.clipper);
   ///
   /// See the full @ref Example_Evas_Object_Manipulation "example".
   ///
   void clip_set(::evas::object clip_) const;

   /// @brief Retrieves the hints for an object's padding space.
   ///
   /// Padding is extra space an object takes on each of its delimiting
   /// rectangle sides, in canvas units. This space will be rendered
   /// transparent, naturally, as in the following figure:
   ///
   /// @image html padding-hints.png
   /// @image rtf padding-hints.png
   /// @image latex padding-hints.eps
   ///
   /// This is not a size enforcement in any way, it's just a hint that
   /// should be used whenever appropriate.
   ///
   /// @note Use @c NULL pointers on the hint components you're not
   /// interested in: they'll be ignored by the function.
   ///
   /// Example:
   /// @dontinclude evas-hints.c
   /// @skip evas_object_size_hint_padding_set
   /// @until return
   ///
   /// In this example the padding hints change the behavior of an Evas box
   /// when layouting its children. See the full @ref
   /// Example_Evas_Size_Hints "example".
   ///
   /// @see evas_object_size_hint_padding_set()
   ///
   void size_hint_padding_get(Evas_Coord* l_, Evas_Coord* r_, Evas_Coord* t_, Evas_Coord* b_) const;

   /// @brief Sets the hints for an object's padding space.
   ///
   /// This is not a size enforcement in any way, it's just a hint that
   /// should be used whenever appropriate.
   ///
   /// @note Smart objects(such as elementary) can have their own size hint
   /// policy. So calling this API may or may not affect the size of smart objects.
   ///
   /// @see evas_object_size_hint_padding_get() for more information
   ///
   void size_hint_padding_set(Evas_Coord l_, Evas_Coord r_, Evas_Coord t_, Evas_Coord b_) const;

   /// @brief Determine whether an object is set to repeat events.
   ///
   /// @return whether @p obj is set to repeat events (@c EINA_TRUE)
   /// or not (@c EINA_FALSE)
   ///
   /// @see evas_object_repeat_events_set() for an example
   /// @see evas_object_pass_events_get()
   /// @see evas_object_propagate_events_get()
   /// @see evas_object_freeze_events_get()
   ///
   bool repeat_events_get() const;

   /// @brief Set whether an Evas object is to repeat events.
   ///
   /// If @p repeat is @c EINA_TRUE, it will make events on @p obj to also
   /// be repeated for the @b next lower object in the objects' stack (see
   /// see evas_object_below_get()).
   ///
   /// If @p repeat is @c EINA_FALSE, events occurring on @p obj will be
   /// processed only on it.
   ///
   /// Example:
   /// @dontinclude evas-stacking.c
   /// @skip if (strcmp(ev->key, "r") == 0)
   /// @until }
   ///
   /// See the full @ref Example_Evas_Stacking "example".
   ///
   /// @see evas_object_repeat_events_get()
   /// @see evas_object_pass_events_set()
   /// @see evas_object_propagate_events_set()
   /// @see evas_object_freeze_events_set()
   ///
   void repeat_events_set(bool repeat_) const;

   /// @brief Retrieves the hints for an object's weight.
   ///
   /// Accepted values are zero or positive values. Some users might use
   /// this hint as a boolean, but some might consider it as a @b
   /// proportion, see documentation of possible users, which in Evas are
   /// the @ref Evas_Object_Box "box" and @ref Evas_Object_Table "table"
   /// smart objects.
   ///
   /// This is not a size enforcement in any way, it's just a hint that
   /// should be used whenever appropriate.
   ///
   /// @note Use @c NULL pointers on the hint components you're not
   /// interested in: they'll be ignored by the function.
   /// @note If @c obj is invalid, then the hint components will be set with 0.0
   ///
   /// @see evas_object_size_hint_weight_set() for an example
   ///
   void size_hint_weight_get(double* x_, double* y_) const;

   /// @brief Sets the hints for an object's weight.
   ///
   /// This is not a size enforcement in any way, it's just a hint that
   /// should be used whenever appropriate.
   ///
   /// This is a hint on how a container object should @b resize a given
   /// child within its area. Containers may adhere to the simpler logic
   /// of just expanding the child object's dimensions to fit its own (see
   /// the #EVAS_HINT_EXPAND helper weight macro) or the complete one of
   /// taking each child's weight hint as real @b weights to how much of
   /// its size to allocate for them in each axis. A container is supposed
   /// to, after @b normalizing the weights of its children (with weight
   /// hints), distribute the space it has to layout them by those factors
   /// -- most weighted children get larger in this process than the least
   /// ones.
   ///
   /// Example:
   /// @dontinclude evas-hints.c
   /// @skip evas_object_size_hint_weight_set
   /// @until return
   ///
   /// In this example the weight hints change the behavior of an Evas box
   /// when layouting its children. See the full @ref
   /// Example_Evas_Size_Hints "example".
   ///
   /// @note Default weight hint values are 0.0, for both axis.
   ///
   /// @see evas_object_size_hint_weight_get() for more information
   ///
   void size_hint_weight_set(double x_, double y_) const;

   /// @brief Retrieves the name of the given Evas object.
   ///
   /// @return  The name of the object or @c NULL, if no name has been given
   /// to it.
   ///
   /// Example:
   /// @dontinclude evas-events.c
   /// @skip fprintf(stdout, "An object got focused: %s\n",
   /// @until evas_focus_get
   ///
   /// See the full @ref Example_Evas_Events "example".
   ///
   ::efl::eina::string_view name_get() const;

   /// @brief Sets the name of the given Evas object to the given name.
   ///
   /// There might be occasions where one would like to name his/her
   /// objects.
   ///
   /// Example:
   /// @dontinclude evas-events.c
   /// @skip d.bg = evas_object_rectangle_add(d.canvas);
   /// @until evas_object_name_set(d.bg, "our dear rectangle");
   ///
   /// See the full @ref Example_Evas_Events "example".
   ///
   void name_set(::efl::eina::string_view name_) const;

   /// @brief Retrieves the scaling factor for the given Evas object.
   ///
   /// @return  The scaling factor.
   ///
   /// @ingroup Evas_Object_Group_Extras
   ///
   /// @see evas_object_scale_set()
   ///
   double scale_get() const;

   /// @brief Sets the scaling factor for an Evas object. Does not affect all
   /// objects.
   ///
   /// This will multiply the object's dimension by the given factor, thus
   /// altering its geometry (width and height). Useful when you want
   /// scalable UI elements, possibly at run time.
   ///
   /// @note Only text and textblock objects have scaling change
   /// handlers. Other objects won't change visually on this call.
   ///
   /// @see evas_object_scale_get()
   ///
   /// @ingroup Evas_Object_Group_Extras
   ///
   void scale_set(double scale_) const;

   /// @brief Get the "static clipper" hint flag for a given Evas object.
   ///
   /// @return @c EINA_TRUE if it's set as a static clipper,
   /// @c EINA_FALSE otherwise.
   ///
   /// @see evas_object_static_clip_set() for more details
   ///
   /// @ingroup Evas_Object_Group_Extras
   ///
   bool static_clip_get() const;

   /// @brief Set a hint flag on the given Evas object that it's used as a "static
   /// clipper".
   ///
   /// This is a hint to Evas that this object is used as a big static
   /// clipper and shouldn't be moved with children and otherwise
   /// considered specially. The default value for new objects is
   /// @c EINA_FALSE.
   ///
   /// @see evas_object_static_clip_get()
   ///
   /// @ingroup Evas_Object_Group_Extras
   ///
   void static_clip_set(bool is_static_clip_) const;

   /// @brief Retrieve whether an object has the focus.
   ///
   /// @return @c EINA_TRUE if the object has the focus, @c EINA_FALSE otherwise.
   ///
   /// If the passed object is the currently focused one, @c EINA_TRUE is
   /// returned. @c EINA_FALSE is returned, otherwise.
   ///
   /// Example:
   /// @dontinclude evas-events.c
   /// @skip And again
   /// @until something is bad
   ///
   /// See the full example @ref Example_Evas_Events "here".
   ///
   /// @see evas_object_focus_set
   /// @see evas_focus_get
   /// @see evas_object_key_grab
   /// @see evas_object_key_ungrab
   ///
   bool focus_get() const;

   /// @brief Sets or unsets a given object as the currently focused one on its
   /// canvas.
   ///
   /// Changing focus only affects where (key) input events go. There can
   /// be only one object focused at any time. If @p focus is @c EINA_TRUE,
   /// @p obj will be set as the currently focused object and it will
   /// receive all keyboard events that are not exclusive key grabs on
   /// other objects.
   ///
   /// Example:
   /// @dontinclude evas-events.c
   /// @skip evas_object_focus_set
   /// @until evas_object_focus_set
   ///
   /// See the full example @ref Example_Evas_Events "here".
   ///
   /// @see evas_object_focus_get
   /// @see evas_focus_get
   /// @see evas_object_key_grab
   /// @see evas_object_key_ungrab
   ///
   void focus_set(bool focus_) const;

   /// @brief @since 1.2
   ///
   bool is_frame_object_get() const;

   /// @brief @since 1.2
   ///
   void is_frame_object_set(bool is_frame_) const;

   /// @brief Get the map enabled state
   ///
   /// This returns the currently enabled state of the map on the object indicated.
   /// The default map enable state is off. You can enable and disable it with
   /// evas_object_map_enable_set().
   ///
   /// @return the map enabled state
   ///
   bool map_enable_get() const;

   /// @brief Enable or disable the map that is set.
   ///
   /// Enable or disable the use of map for the object @p obj.
   /// On enable, the object geometry will be saved, and the new geometry will
   /// change (position and size) to reflect the map geometry set.
   ///
   /// If the object doesn't have a map set (with evas_object_map_set()), the
   /// initial geometry will be undefined. It is advised to always set a map
   /// to the object first, and then call this function to enable its use.
   ///
   void map_enable_set(bool enabled_) const;

   /// @brief Determine whether an object is set to use precise point collision
   /// detection.
   ///
   /// @return whether @p obj is set to use precise point collision
   /// detection or not The default value is false.
   ///
   /// @see evas_object_precise_is_inside_set() for an example
   ///
   /// @ingroup Evas_Object_Group_Extras
   ///
   bool precise_is_inside_get() const;

   /// @brief Set whether to use precise (usually expensive) point collision
   /// detection for a given Evas object.
   ///
   /// Use this function to make Evas treat objects' transparent areas as
   /// @b not belonging to it with regard to mouse pointer events. By
   /// default, all of the object's boundary rectangle will be taken in
   /// account for them.
   ///
   /// @warning By using precise point collision detection you'll be
   /// making Evas more resource intensive.
   ///
   /// Example code follows.
   /// @dontinclude evas-events.c
   /// @skip if (strcmp(ev->key, "p") == 0)
   /// @until }
   ///
   /// See the full example @ref Example_Evas_Events "here".
   ///
   /// @see evas_object_precise_is_inside_get()
   /// @ingroup Evas_Object_Group_Extras
   ///
   void precise_is_inside_set(bool precise_) const;

   /// @brief Retrieves the hints for on object's alignment.
   ///
   /// This is not a size enforcement in any way, it's just a hint that
   /// should be used whenever appropriate.
   ///
   /// @note Use @c NULL pointers on the hint components you're not
   /// interested in: they'll be ignored by the function.
   /// @note If @c obj is invalid, then the hint components will be set with 0.5
   ///
   /// @see evas_object_size_hint_align_set() for more information
   ///
   void size_hint_align_get(double* x_, double* y_) const;

   /// @brief Sets the hints for an object's alignment.
   ///
   /// These are hints on how to align an object <b>inside the boundaries
   /// of a container/manager</b>. Accepted values are in the @c 0.0 to @c
   /// 1.0 range, with the special value #EVAS_HINT_FILL used to specify
   /// "justify" or "fill" by some users. In this case, maximum size hints
   /// should be enforced with higher priority, if they are set. Also, any
   /// padding hint set on objects should add up to the alignment space on
   /// the final scene composition.
   ///
   /// See documentation of possible users: in Evas, they are the @ref
   /// Evas_Object_Box "box" and @ref Evas_Object_Table "table" smart
   /// objects.
   ///
   /// For the horizontal component, @c 0.0 means to the left, @c 1.0
   /// means to the right. Analogously, for the vertical component, @c 0.0
   /// to the top, @c 1.0 means to the bottom.
   ///
   /// See the following figure:
   ///
   /// @image html alignment-hints.png
   /// @image rtf alignment-hints.png
   /// @image latex alignment-hints.eps
   ///
   /// This is not a size enforcement in any way, it's just a hint that
   /// should be used whenever appropriate.
   ///
   /// @note Default alignment hint values are 0.5, for both axis.
   ///
   /// Example:
   /// @dontinclude evas-hints.c
   /// @skip evas_object_size_hint_align_set
   /// @until return
   ///
   /// In this example the alignment hints change the behavior of an Evas
   /// box when layouting its children. See the full @ref
   /// Example_Evas_Size_Hints "example".
   ///
   /// @see evas_object_size_hint_align_get()
   /// @see evas_object_size_hint_max_set()
   /// @see evas_object_size_hint_padding_set()
   ///
   void size_hint_align_set(double x_, double y_) const;

   /// @brief Retrieve whether an Evas object is set to propagate events.
   ///
   /// @return whether @p obj is set to propagate events (@c EINA_TRUE)
   /// or not (@c EINA_FALSE)
   ///
   /// @see evas_object_propagate_events_set()
   /// @see evas_object_repeat_events_get()
   /// @see evas_object_pass_events_get()
   /// @see evas_object_freeze_events_get()
   ///
   bool propagate_events_get() const;

   /// @brief Set whether events on a smart object's member should get propagated
   /// up to its parent.
   ///
   /// This function has @b no effect if @p obj is not a member of a smart
   /// object.
   ///
   /// If @p prop is @c EINA_TRUE, events occurring on this object will be
   /// propagated on to the smart object of which @p obj is a member.  If
   /// @p prop is @c EINA_FALSE, events occurring on this object will @b
   /// not be propagated on to the smart object of which @p obj is a
   /// member.  The default value is @c EINA_TRUE.
   ///
   /// @see evas_object_propagate_events_get()
   /// @see evas_object_repeat_events_set()
   /// @see evas_object_pass_events_set()
   /// @see evas_object_freeze_events_set()
   ///
   void propagate_events_set(bool propagate_) const;

   /// @brief Determine whether an object is set to pass (ignore) events.
   ///
   /// @return pass whether @p obj is set to pass events (@c EINA_TRUE) or not
   /// (@c EINA_FALSE)
   ///
   /// Example:
   /// @dontinclude evas-stacking.c
   /// @skip if (strcmp(ev->key, "p") == 0)
   /// @until }
   ///
   /// See the full @ref Example_Evas_Stacking "example".
   ///
   /// @see evas_object_pass_events_set()
   /// @see evas_object_repeat_events_get()
   /// @see evas_object_propagate_events_get()
   /// @see evas_object_freeze_events_get()
   ///
   bool pass_events_get() const;

   /// @brief Set whether an Evas object is to pass (ignore) events.
   ///
   /// If @p pass is @c EINA_TRUE, it will make events on @p obj to be @b
   /// ignored. They will be triggered on the @b next lower object (that
   /// is not set to pass events), instead (see evas_object_below_get()).
   ///
   /// If @p pass is @c EINA_FALSE, events will be processed on that
   /// object as normal.
   ///
   /// @see evas_object_pass_events_get() for an example
   /// @see evas_object_repeat_events_set()
   /// @see evas_object_propagate_events_set()
   /// @see evas_object_freeze_events_set()
   ///
   void pass_events_set(bool pass_) const;

   /// @brief Retrieves whether or not the given Evas object is to be drawn anti_aliased.
   /// @return  (@c EINA_TRUE) if the object is to be anti_aliased.  (@c EINA_FALSE) otherwise.
   /// @ingroup Evas_Object_Group_Extras
   ///
   bool anti_alias_get() const;

   /// @brief Sets whether or not the given Evas object is to be drawn anti-aliased.
   ///
   /// @ingroup Evas_Object_Group_Extras
   ///
   void anti_alias_set(bool anti_alias_) const;

   /// @brief Retrieve user data stored on a given smart object.
   ///
   /// @return A pointer to data stored using
   /// evas_object_smart_data_set(), or @c NULL, if none has been
   /// set.
   ///
   /// @see evas_object_smart_data_set()
   ///
   /// @ingroup Evas_Smart_Object_Group
   ///
   void * smart_data_get() const;

   /// @brief Get the clipper object for the given clipped smart object.
   ///
   /// @return the clipper object.
   ///
   /// Use this function if you want to change any of this clipper's
   /// properties, like colors.
   ///
   /// @see evas_object_smart_clipped_smart_add()
   ///
   ::evas::object smart_clipped_clipper_get() const;

   /// @brief Return a list of objects currently clipped by @p obj.
   ///
   /// @return a list of objects being clipped by @p obj
   ///
   /// This returns the internal list handle that contains all objects
   /// clipped by the object @p obj. If none are clipped by it, the call
   /// returns @c NULL. This list is only valid until the clip list is
   /// changed and should be fetched again with another call to
   /// evas_object_clipees_get() if any objects being clipped by this
   /// object are unclipped, clipped by a new object, deleted or get the
   /// clipper deleted. These operations will invalidate the list
   /// returned, so it should not be used anymore after that point. Any
   /// use of the list after this may have undefined results, possibly
   /// leading to crashes. The object @p obj must be a valid
   /// .Evas_Object.
   ///
   /// See also evas_object_clip_set(), evas_object_clip_unset() and
   /// evas_object_clip_get().
   ///
   /// Example:
   /// @code
   /// extern Evas_Object *obj;
   /// Evas_Object *clipper;
   ///
   /// clipper = evas_object_clip_get(obj);
   /// if (clipper)
   /// {
   /// Eina_List *clippees, *l;
   /// Evas_Object *obj_tmp;
   ///
   /// clippees = evas_object_clipees_get(clipper);
   /// printf("Clipper clips %i objects\n", eina_list_count(clippees));
   /// EINA_LIST_FOREACH(clippees, l, obj_tmp)
   /// evas_object_show(obj_tmp);
   /// }
   /// @endcode
   ///
   ::efl::eina::crange_list< ::evas::object > clipees_get() const;

   /// @brief Gets the parent smart object of a given Evas object, if it has one.
   ///
   /// @return Returns the parent smart object of @a obj or @c NULL, if @a
   /// obj is not a smart member of any
   ///
   /// @ingroup Evas_Smart_Object_Group
   ///
   ::evas::object smart_parent_get() const;

   /// @brief Retrieves the hints for an object's display mode
   ///
   /// These are hints on the display mode @p obj. This is
   /// not a size enforcement in any way, it's just a hint that can be
   /// used whenever appropriate.
   /// This mode can be used object's display mode like commpress or expand
   ///
   Evas_Display_Mode size_hint_display_mode_get() const;

   /// @brief Sets the hints for an object's disply mode
   ///
   /// This is not a size enforcement in any way, it's just a hint that
   /// can be used whenever appropriate.
   ///
   void size_hint_display_mode_set(Evas_Display_Mode dispmode_) const;

   /// @brief Returns the state of the "no-render" flag, which means, when true,
   /// that an object should never be rendered on the canvas.
   ///
   /// This flag can be used to avoid rendering visible clippers on the
   /// canvas, even if they currently don't clip any object.
   ///
   /// @since 1.15
   ///
   bool no_render_get() const;

   /// @brief Disable all rendering on the canvas.
   ///
   /// This flag will be used to indicate to Evas that this object should
   /// never be rendered on the canvas under any circurmstances. In
   /// particular, this is useful to avoid drawing clipper objects (or masks)
   /// even when they don't clip any object. This can also be used to replace
   /// the old source_visible flag with proxy objects.
   ///
   /// This is different to the visible property, as even visible objects
   /// marked as "no-render" will never appear on screen. But those objects
   /// can still be used as proxy sources or clippers. When hidden, all
   /// "no-render" objects will completely disappear from the canvas, and
   /// hide their clippees or be invisible when used as proxy sources.
   ///
   /// @since 1.15
   ///
   void no_render_set(bool enable_) const;

   template <typename F>
   ::efl::eo::signal_connection
   callback_callback_add_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EO_BASE_EVENT_CALLBACK_ADD, priority_,
            &::efl::eo::_detail::event_callback<::evas::object, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::object, function_type>,
         EO_BASE_EVENT_CALLBACK_ADD );
   }

   template <typename T>
   void
   callback_callback_add_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EO_BASE_EVENT_CALLBACK_ADD, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_callback_del_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EO_BASE_EVENT_CALLBACK_DEL, priority_,
            &::efl::eo::_detail::event_callback<::evas::object, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::object, function_type>,
         EO_BASE_EVENT_CALLBACK_DEL );
   }

   template <typename T>
   void
   callback_callback_del_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EO_BASE_EVENT_CALLBACK_DEL, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_changed_size_hints_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_OBJECT_EVENT_CHANGED_SIZE_HINTS, priority_,
            &::efl::eo::_detail::event_callback<::evas::object, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::object, function_type>,
         EVAS_OBJECT_EVENT_CHANGED_SIZE_HINTS );
   }

   template <typename T>
   void
   callback_changed_size_hints_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EVAS_OBJECT_EVENT_CHANGED_SIZE_HINTS, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_del_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_OBJECT_EVENT_DEL, priority_,
            &::efl::eo::_detail::event_callback<::evas::object, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::object, function_type>,
         EVAS_OBJECT_EVENT_DEL );
   }

   template <typename T>
   void
   callback_del_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EVAS_OBJECT_EVENT_DEL, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_focus_in_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_OBJECT_EVENT_FOCUS_IN, priority_,
            &::efl::eo::_detail::event_callback<::evas::object, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::object, function_type>,
         EVAS_OBJECT_EVENT_FOCUS_IN );
   }

   template <typename T>
   void
   callback_focus_in_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EVAS_OBJECT_EVENT_FOCUS_IN, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_focus_out_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_OBJECT_EVENT_FOCUS_OUT, priority_,
            &::efl::eo::_detail::event_callback<::evas::object, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::object, function_type>,
         EVAS_OBJECT_EVENT_FOCUS_OUT );
   }

   template <typename T>
   void
   callback_focus_out_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EVAS_OBJECT_EVENT_FOCUS_OUT, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_free_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_OBJECT_EVENT_FREE, priority_,
            &::efl::eo::_detail::event_callback<::evas::object, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::object, function_type>,
         EVAS_OBJECT_EVENT_FREE );
   }

   template <typename T>
   void
   callback_free_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EVAS_OBJECT_EVENT_FREE, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_hide_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_OBJECT_EVENT_HIDE, priority_,
            &::efl::eo::_detail::event_callback<::evas::object, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::object, function_type>,
         EVAS_OBJECT_EVENT_HIDE );
   }

   template <typename T>
   void
   callback_hide_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EVAS_OBJECT_EVENT_HIDE, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_hold_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_OBJECT_EVENT_HOLD, priority_,
            &::efl::eo::_detail::event_callback<::evas::object, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::object, function_type>,
         EVAS_OBJECT_EVENT_HOLD );
   }

   template <typename T>
   void
   callback_hold_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EVAS_OBJECT_EVENT_HOLD, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_image_preloaded_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_OBJECT_EVENT_IMAGE_PRELOADED, priority_,
            &::efl::eo::_detail::event_callback<::evas::object, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::object, function_type>,
         EVAS_OBJECT_EVENT_IMAGE_PRELOADED );
   }

   template <typename T>
   void
   callback_image_preloaded_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EVAS_OBJECT_EVENT_IMAGE_PRELOADED, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_image_resize_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_OBJECT_EVENT_IMAGE_RESIZE, priority_,
            &::efl::eo::_detail::event_callback<::evas::object, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::object, function_type>,
         EVAS_OBJECT_EVENT_IMAGE_RESIZE );
   }

   template <typename T>
   void
   callback_image_resize_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EVAS_OBJECT_EVENT_IMAGE_RESIZE, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_image_unloaded_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_OBJECT_EVENT_IMAGE_UNLOADED, priority_,
            &::efl::eo::_detail::event_callback<::evas::object, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::object, function_type>,
         EVAS_OBJECT_EVENT_IMAGE_UNLOADED );
   }

   template <typename T>
   void
   callback_image_unloaded_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EVAS_OBJECT_EVENT_IMAGE_UNLOADED, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_key_down_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_OBJECT_EVENT_KEY_DOWN, priority_,
            &::efl::eo::_detail::event_callback<::evas::object, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::object, function_type>,
         EVAS_OBJECT_EVENT_KEY_DOWN );
   }

   template <typename T>
   void
   callback_key_down_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EVAS_OBJECT_EVENT_KEY_DOWN, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_key_up_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_OBJECT_EVENT_KEY_UP, priority_,
            &::efl::eo::_detail::event_callback<::evas::object, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::object, function_type>,
         EVAS_OBJECT_EVENT_KEY_UP );
   }

   template <typename T>
   void
   callback_key_up_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EVAS_OBJECT_EVENT_KEY_UP, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_mouse_down_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_OBJECT_EVENT_MOUSE_DOWN, priority_,
            &::efl::eo::_detail::event_callback<::evas::object, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::object, function_type>,
         EVAS_OBJECT_EVENT_MOUSE_DOWN );
   }

   template <typename T>
   void
   callback_mouse_down_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EVAS_OBJECT_EVENT_MOUSE_DOWN, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_mouse_in_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_OBJECT_EVENT_MOUSE_IN, priority_,
            &::efl::eo::_detail::event_callback<::evas::object, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::object, function_type>,
         EVAS_OBJECT_EVENT_MOUSE_IN );
   }

   template <typename T>
   void
   callback_mouse_in_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EVAS_OBJECT_EVENT_MOUSE_IN, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_mouse_move_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_OBJECT_EVENT_MOUSE_MOVE, priority_,
            &::efl::eo::_detail::event_callback<::evas::object, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::object, function_type>,
         EVAS_OBJECT_EVENT_MOUSE_MOVE );
   }

   template <typename T>
   void
   callback_mouse_move_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EVAS_OBJECT_EVENT_MOUSE_MOVE, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_mouse_out_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_OBJECT_EVENT_MOUSE_OUT, priority_,
            &::efl::eo::_detail::event_callback<::evas::object, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::object, function_type>,
         EVAS_OBJECT_EVENT_MOUSE_OUT );
   }

   template <typename T>
   void
   callback_mouse_out_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EVAS_OBJECT_EVENT_MOUSE_OUT, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_mouse_up_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_OBJECT_EVENT_MOUSE_UP, priority_,
            &::efl::eo::_detail::event_callback<::evas::object, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::object, function_type>,
         EVAS_OBJECT_EVENT_MOUSE_UP );
   }

   template <typename T>
   void
   callback_mouse_up_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EVAS_OBJECT_EVENT_MOUSE_UP, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_mouse_wheel_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_OBJECT_EVENT_MOUSE_WHEEL, priority_,
            &::efl::eo::_detail::event_callback<::evas::object, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::object, function_type>,
         EVAS_OBJECT_EVENT_MOUSE_WHEEL );
   }

   template <typename T>
   void
   callback_mouse_wheel_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EVAS_OBJECT_EVENT_MOUSE_WHEEL, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_move_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_OBJECT_EVENT_MOVE, priority_,
            &::efl::eo::_detail::event_callback<::evas::object, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::object, function_type>,
         EVAS_OBJECT_EVENT_MOVE );
   }

   template <typename T>
   void
   callback_move_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EVAS_OBJECT_EVENT_MOVE, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_multi_down_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_OBJECT_EVENT_MULTI_DOWN, priority_,
            &::efl::eo::_detail::event_callback<::evas::object, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::object, function_type>,
         EVAS_OBJECT_EVENT_MULTI_DOWN );
   }

   template <typename T>
   void
   callback_multi_down_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EVAS_OBJECT_EVENT_MULTI_DOWN, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_multi_move_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_OBJECT_EVENT_MULTI_MOVE, priority_,
            &::efl::eo::_detail::event_callback<::evas::object, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::object, function_type>,
         EVAS_OBJECT_EVENT_MULTI_MOVE );
   }

   template <typename T>
   void
   callback_multi_move_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EVAS_OBJECT_EVENT_MULTI_MOVE, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_multi_up_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_OBJECT_EVENT_MULTI_UP, priority_,
            &::efl::eo::_detail::event_callback<::evas::object, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::object, function_type>,
         EVAS_OBJECT_EVENT_MULTI_UP );
   }

   template <typename T>
   void
   callback_multi_up_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EVAS_OBJECT_EVENT_MULTI_UP, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_resize_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_OBJECT_EVENT_RESIZE, priority_,
            &::efl::eo::_detail::event_callback<::evas::object, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::object, function_type>,
         EVAS_OBJECT_EVENT_RESIZE );
   }

   template <typename T>
   void
   callback_resize_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EVAS_OBJECT_EVENT_RESIZE, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_restack_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_OBJECT_EVENT_RESTACK, priority_,
            &::efl::eo::_detail::event_callback<::evas::object, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::object, function_type>,
         EVAS_OBJECT_EVENT_RESTACK );
   }

   template <typename T>
   void
   callback_restack_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EVAS_OBJECT_EVENT_RESTACK, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_show_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_OBJECT_EVENT_SHOW, priority_,
            &::efl::eo::_detail::event_callback<::evas::object, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::object, function_type>,
         EVAS_OBJECT_EVENT_SHOW );
   }

   template <typename T>
   void
   callback_show_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EVAS_OBJECT_EVENT_SHOW, info));
   }



   static Eo_Class const* _eo_class()
   {
      return(EVAS_OBJECT_CLASS);
   }

   /// @cond LOCAL
   struct address_of
      : ::eo_cxx::evas::object::address_of<address_of>
      , ::eo_cxx::efl::gfx::base::address_of<address_of>
      , ::eo_cxx::efl::gfx::stack::address_of<address_of>
      , ::eo_cxx::eo::base::address_of<address_of>
      , ::eo_cxx::evas::common_interface::address_of<address_of>
      , ::efl::eo::detail::concrete_address_of
   {
      explicit address_of(::evas::object* p)
         : ::efl::eo::detail::concrete_address_of(p)
      {}
   };
   address_of operator&() { return address_of(this); }

   struct address_const_of
      : ::eo_cxx::evas::object::address_const_of<address_const_of>
      , ::eo_cxx::efl::gfx::base::address_const_of<address_const_of>
      , ::eo_cxx::efl::gfx::stack::address_const_of<address_const_of>
      , ::eo_cxx::eo::base::address_const_of<address_const_of>
      , ::eo_cxx::evas::common_interface::address_const_of<address_const_of>
      , ::efl::eo::detail::concrete_address_const_of
   {
      explicit address_const_of(::evas::object const* p)
         : ::efl::eo::detail::concrete_address_const_of(p)
      {}
   };
   address_const_of operator&() const { return address_const_of(this); }

   /// @endcond

private:

   /// @internal
   static Eo* _ctors_call(::efl::eo::parent_type _p)
   {
      Eo* _ret_eo = eo_add_ref(EVAS_OBJECT_CLASS, _p._eo_raw);

      return _ret_eo;
   }

   /// @internal
   Eo* _concrete_eo_ptr() const { return _eo_ptr(); }
};

static_assert(sizeof(::evas::object) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<::evas::object>::value, "");

}


#include "evas_object.eo.impl.hh"

#endif // EFL_GENERATED_EVAS_OBJECT_HH

