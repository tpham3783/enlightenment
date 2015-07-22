#ifndef EFL_GENERATED_EVAS_CANVAS3D_SCENE_HH
#define EFL_GENERATED_EVAS_CANVAS3D_SCENE_HH

extern "C"
{
#include <Efl.h>
}
#include <Eo.hh>

#include <eo_cxx_interop.hh>

extern "C"
{
#include "evas_canvas3d_scene.eo.h"
}

#include "evas_canvas3d_object.eo.hh"
#include "evas_common_interface.eo.hh"
#include <evas_canvas3d_mesh.eo.hh>
#include <evas_canvas3d_node.eo.hh>

namespace evas { namespace canvas3d {

struct scene;

} }

/// @cond EO_CXX_ABSTRACT
namespace eo_cxx {

namespace evas { namespace canvas3d {

struct scene
{
   /// @brief Set the resolution of a scene.
   ///
   /// A scene should be rendered to be displayed through an image objects. The
   /// resolution defines size of the internal surface holding the rendered result.
   ///
   /// @ingroup Evas_Canvas3D_Scene
   ///
   /// @param w Width of the resolution.
   /// @param h Height of the resolution.
   ///
   void size_set(int w_, int h_) const;

   /// @brief Get the internal resolution of a scene.
   ///
   /// @ingroup Evas_Canvas3D_Scene
   ///
   /// @param[out] w Pointer to receive width of the resolution.
   /// @param[out] h Pointer to receive height of the resolution.
   ///
   void size_get(int* w_, int* h_) const;

   /// @brief Set the background color of a scene.
   ///
   /// Background color defines initial color of pixels before a scene is rendered.
   /// If you want to display a scene with background evas objects are still
   /// remaining as if it was the background, set the alpha term to 0.0.
   ///
   /// Default background color is (0.0, 0.0, 0.0, 0.0).
   ///
   /// @ingroup Evas_Canvas3D_Scene
   ///
   /// @param r Red component of the background color.
   /// @param g Green component of the background color.
   /// @param b Blue component of the background color.
   /// @param a Alpha component of the background color.
   ///
   void background_color_set(Evas_Real r_, Evas_Real g_, Evas_Real b_, Evas_Real a_) const;

   /// @brief Get the background color of a scene.
   ///
   /// @ingroup Evas_Canvas3D_Scene
   ///
   /// @param[out] r Pointer to receive red component of the background color.
   /// @param[out] g Pointer to receive green component of the background color.
   /// @param[out] b Pointer to receive blue component of the background color.
   /// @param[out] a Pointer to receive alpha component of the background color.
   ///
   void background_color_get(Evas_Real* r_, Evas_Real* g_, Evas_Real* b_, Evas_Real* a_) const;

   /// @brief Get information on the most front visible mesh for the given position.
   ///
   /// (x, y) is the screen coordinate of the given scene. That is, left-top is
   /// (0, 0) and right-bottom is (w, h) where (w, h) is the size of the scene.
   /// The texture coordinate is useful when using proxy texture source.
   ///
   /// @ingroup Evas_Canvas3D_Scene
   ///
   /// @param x X coordinate of the picking position.
   /// @param y Y coordinate of the picking position.
   /// @param[out] node Pointer to receive the node contains the picked mesh.
   /// @param[out] mesh Pointer to receive the picked mesh.
   /// @param[out] s Pointer to receive the texture "s" coordinate.
   /// @param[out] t Pointer to receive the texture "t" coordinate.
   ///
   bool pick(Evas_Real x_, Evas_Real y_, ::evas::canvas3d::node* node_, ::evas::canvas3d::mesh* mesh_, Evas_Real* s_, Evas_Real* t_) const;

   /// @brief Search given node in the given position.
   ///
   /// @ingroup Evas_Canvas3D_Scene
   ///
   /// @param x X coordinate of the picking position.
   /// @param y Y coordinate of the picking position.
   /// @param node Node for search.
   ///
   ::evas::canvas3d::node exist(Evas_Real x_, Evas_Real y_, ::evas::canvas3d::node node_) const;

   /// @brief Get list of the all root members from scene in the given position.
   ///
   /// @ingroup Evas_Canvas3D_Scene
   ///
   /// @param x X coordinate of the picking position.
   /// @param y Y coordinate of the picking position.
   ///
   ::efl::eina::range_list< ::evas::canvas3d::node > pick_member_list_get(Evas_Real x_, Evas_Real y_) const;

   /// @brief Enable or disable shadows on given scene
   ///
   /// If shadows_enabled @c EINA_TRUE, the objects in the scene can throw shadow to another objects located behind them.
   /// The depth map used for shading. Directed and projective light sources are supported.
   ///
   /// @ingroup Evas_Canvas3D_Scene
   ///
   /// @param shadows_enabled shadows enabled status.
   ///
   void shadows_enable_set(bool shadows_enabled_) const;

   /// @brief Get shadows enabled status for given scene.
   /// @return The shadows enabled status.
   ///
   /// @ingroup Evas_Canvas3D_Scene
   ///
   bool shadows_enable_get() const;

   /// @brief Get status of color picking of the scene.
   ///
   /// @ingroup Evas_Canvas3D_Scene
   ///
   bool color_pick_enable_get() const;

   /// @brief Set posibility color picking.
   ///
   /// @ingroup Evas_Canvas3D_Scene
   ///
   /// @param color_pick Posibility flag
   ///
   bool color_pick_enable_set(bool color_pick_) const;

   /// @brief Get the root node of a scene.
   ///
   /// @return        The root node of the given scene.
   ///
   /// @ingroup Evas_Canvas3D_Scene
   ///
   ::evas::canvas3d::node root_node_get() const;

   /// @brief Set the root node of a scene.
   ///
   /// @ingroup Evas_Canvas3D_Scene
   ///
   void root_node_set(::evas::canvas3d::node node_) const;

   /// @brief Get the camera node of a scene.
   ///
   /// @return        The camera node of the given scene.
   ///
   /// @ingroup Evas_Canvas3D_Scene
   ///
   ::evas::canvas3d::node camera_node_get() const;

   /// @brief Set the camera node of a scene.
   ///
   /// @ingroup Evas_Canvas3D_Scene
   ///
   void camera_node_set(::evas::canvas3d::node node_) const;



   static Eo_Class const* _eo_class()
   {
      return(EVAS_CANVAS3D_SCENE_CLASS);
   }

   operator ::evas::canvas3d::scene() const;
   operator ::evas::canvas3d::scene&();
   operator ::evas::canvas3d::scene const&() const;

   /// @cond LOCAL
   template <typename D>
   struct address_of
   {
      operator ::evas::canvas3d::scene*() const { return static_cast<::evas::canvas3d::scene*>(static_cast<D const*>(this)->p); }
      operator ::evas::canvas3d::scene const*() const { return static_cast<::evas::canvas3d::scene const*>(static_cast<D const*>(this)->p); }
   };

   template <typename D>
   struct address_const_of
   {
      operator ::evas::canvas3d::scene const*() const { return static_cast<::evas::canvas3d::scene const*>(static_cast<D const*>(this)->p); }
   };
   /// @endcond

private:

   /// @internal
   Eo* _concrete_eo_ptr() const
   {
      return static_cast<::efl::eo::concrete const*>(static_cast<void const*>(this))->_eo_ptr();
   }

};

} }

}
/// @endcond

namespace evas { namespace canvas3d {

/// @brief Class scene
struct scene
      : ::efl::eo::concrete
      , EO_CXX_INHERIT(eo::base)
      , EO_CXX_INHERIT(evas::canvas3d::object)
      , EO_CXX_INHERIT(evas::common_interface)
{
   //@{
   /**
      @brief Constructs a new evas::canvas3d::scene object.

      Constructs a new evas::canvas3d::scene object. If you want this object to be a child
      of another Eo object, use an @ref efl::eo::parent expression, like the example.

      Example:
      @code
      evas::canvas3d::scene my_scene(efl::eo::parent = parent_object);
      @endcode

      @see scene(Eo* eo)
   */
   explicit scene(::efl::eo::parent_type _p)
      : scene(_ctors_call(_p))
   {}

   explicit scene()
      : scene(_ctors_call(::efl::eo::parent = nullptr))
   {}
   //@}

   /// @brief Eo Constructor.
   ///
   /// Constructs the object from an Eo* pointer stealing its ownership.
   ///
   /// @param eo The Eo object pointer.
   ///
   explicit scene(Eo* eo)
      : ::efl::eo::concrete(eo)
   {}

   /// @brief nullptr_t Constructor.
   ///
   /// Constructs an empty (null) object.
   ///
   explicit scene(std::nullptr_t)
      : ::efl::eo::concrete(nullptr)
   {}

   /// @brief Copy Constructor.
   ///
   scene(scene const& other)
      : scene(eo_ref(other._eo_ptr()))
   {}

   ~scene() {}

   /// @brief Set the resolution of a scene.
   ///
   /// A scene should be rendered to be displayed through an image objects. The
   /// resolution defines size of the internal surface holding the rendered result.
   ///
   /// @ingroup Evas_Canvas3D_Scene
   ///
   /// @param w Width of the resolution.
   /// @param h Height of the resolution.
   ///
   void size_set(int w_, int h_) const;

   /// @brief Get the internal resolution of a scene.
   ///
   /// @ingroup Evas_Canvas3D_Scene
   ///
   /// @param[out] w Pointer to receive width of the resolution.
   /// @param[out] h Pointer to receive height of the resolution.
   ///
   void size_get(int* w_, int* h_) const;

   /// @brief Set the background color of a scene.
   ///
   /// Background color defines initial color of pixels before a scene is rendered.
   /// If you want to display a scene with background evas objects are still
   /// remaining as if it was the background, set the alpha term to 0.0.
   ///
   /// Default background color is (0.0, 0.0, 0.0, 0.0).
   ///
   /// @ingroup Evas_Canvas3D_Scene
   ///
   /// @param r Red component of the background color.
   /// @param g Green component of the background color.
   /// @param b Blue component of the background color.
   /// @param a Alpha component of the background color.
   ///
   void background_color_set(Evas_Real r_, Evas_Real g_, Evas_Real b_, Evas_Real a_) const;

   /// @brief Get the background color of a scene.
   ///
   /// @ingroup Evas_Canvas3D_Scene
   ///
   /// @param[out] r Pointer to receive red component of the background color.
   /// @param[out] g Pointer to receive green component of the background color.
   /// @param[out] b Pointer to receive blue component of the background color.
   /// @param[out] a Pointer to receive alpha component of the background color.
   ///
   void background_color_get(Evas_Real* r_, Evas_Real* g_, Evas_Real* b_, Evas_Real* a_) const;

   /// @brief Get information on the most front visible mesh for the given position.
   ///
   /// (x, y) is the screen coordinate of the given scene. That is, left-top is
   /// (0, 0) and right-bottom is (w, h) where (w, h) is the size of the scene.
   /// The texture coordinate is useful when using proxy texture source.
   ///
   /// @ingroup Evas_Canvas3D_Scene
   ///
   /// @param x X coordinate of the picking position.
   /// @param y Y coordinate of the picking position.
   /// @param[out] node Pointer to receive the node contains the picked mesh.
   /// @param[out] mesh Pointer to receive the picked mesh.
   /// @param[out] s Pointer to receive the texture "s" coordinate.
   /// @param[out] t Pointer to receive the texture "t" coordinate.
   ///
   bool pick(Evas_Real x_, Evas_Real y_, ::evas::canvas3d::node* node_, ::evas::canvas3d::mesh* mesh_, Evas_Real* s_, Evas_Real* t_) const;

   /// @brief Search given node in the given position.
   ///
   /// @ingroup Evas_Canvas3D_Scene
   ///
   /// @param x X coordinate of the picking position.
   /// @param y Y coordinate of the picking position.
   /// @param node Node for search.
   ///
   ::evas::canvas3d::node exist(Evas_Real x_, Evas_Real y_, ::evas::canvas3d::node node_) const;

   /// @brief Get list of the all root members from scene in the given position.
   ///
   /// @ingroup Evas_Canvas3D_Scene
   ///
   /// @param x X coordinate of the picking position.
   /// @param y Y coordinate of the picking position.
   ///
   ::efl::eina::range_list< ::evas::canvas3d::node > pick_member_list_get(Evas_Real x_, Evas_Real y_) const;

   /// @brief Enable or disable shadows on given scene
   ///
   /// If shadows_enabled @c EINA_TRUE, the objects in the scene can throw shadow to another objects located behind them.
   /// The depth map used for shading. Directed and projective light sources are supported.
   ///
   /// @ingroup Evas_Canvas3D_Scene
   ///
   /// @param shadows_enabled shadows enabled status.
   ///
   void shadows_enable_set(bool shadows_enabled_) const;

   /// @brief Get shadows enabled status for given scene.
   /// @return The shadows enabled status.
   ///
   /// @ingroup Evas_Canvas3D_Scene
   ///
   bool shadows_enable_get() const;

   /// @brief Get status of color picking of the scene.
   ///
   /// @ingroup Evas_Canvas3D_Scene
   ///
   bool color_pick_enable_get() const;

   /// @brief Set posibility color picking.
   ///
   /// @ingroup Evas_Canvas3D_Scene
   ///
   /// @param color_pick Posibility flag
   ///
   bool color_pick_enable_set(bool color_pick_) const;

   /// @brief Get the root node of a scene.
   ///
   /// @return        The root node of the given scene.
   ///
   /// @ingroup Evas_Canvas3D_Scene
   ///
   ::evas::canvas3d::node root_node_get() const;

   /// @brief Set the root node of a scene.
   ///
   /// @ingroup Evas_Canvas3D_Scene
   ///
   void root_node_set(::evas::canvas3d::node node_) const;

   /// @brief Get the camera node of a scene.
   ///
   /// @return        The camera node of the given scene.
   ///
   /// @ingroup Evas_Canvas3D_Scene
   ///
   ::evas::canvas3d::node camera_node_get() const;

   /// @brief Set the camera node of a scene.
   ///
   /// @ingroup Evas_Canvas3D_Scene
   ///
   void camera_node_set(::evas::canvas3d::node node_) const;

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
            &::efl::eo::_detail::event_callback<::evas::canvas3d::scene, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::canvas3d::scene, function_type>,
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
            &::efl::eo::_detail::event_callback<::evas::canvas3d::scene, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::canvas3d::scene, function_type>,
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
   callback_clicked_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_CANVAS3D_OBJECT_EVENT_CLICKED, priority_,
            &::efl::eo::_detail::event_callback<::evas::canvas3d::scene, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::canvas3d::scene, function_type>,
         EVAS_CANVAS3D_OBJECT_EVENT_CLICKED );
   }

   template <typename T>
   void
   callback_clicked_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EVAS_CANVAS3D_OBJECT_EVENT_CLICKED, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_collision_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_CANVAS3D_OBJECT_EVENT_COLLISION, priority_,
            &::efl::eo::_detail::event_callback<::evas::canvas3d::scene, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::canvas3d::scene, function_type>,
         EVAS_CANVAS3D_OBJECT_EVENT_COLLISION );
   }

   template <typename T>
   void
   callback_collision_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EVAS_CANVAS3D_OBJECT_EVENT_COLLISION, info));
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
            (EO_BASE_EVENT_DEL, priority_,
            &::efl::eo::_detail::event_callback<::evas::canvas3d::scene, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::canvas3d::scene, function_type>,
         EO_BASE_EVENT_DEL );
   }

   template <typename T>
   void
   callback_del_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EO_BASE_EVENT_DEL, info));
   }



   static Eo_Class const* _eo_class()
   {
      return(EVAS_CANVAS3D_SCENE_CLASS);
   }

   /// @cond LOCAL
   struct address_of
      : ::eo_cxx::evas::canvas3d::scene::address_of<address_of>
      , ::eo_cxx::eo::base::address_of<address_of>
      , ::eo_cxx::evas::canvas3d::object::address_of<address_of>
      , ::eo_cxx::evas::common_interface::address_of<address_of>
      , ::efl::eo::detail::concrete_address_of
   {
      explicit address_of(::evas::canvas3d::scene* p)
         : ::efl::eo::detail::concrete_address_of(p)
      {}
   };
   address_of operator&() { return address_of(this); }

   struct address_const_of
      : ::eo_cxx::evas::canvas3d::scene::address_const_of<address_const_of>
      , ::eo_cxx::eo::base::address_const_of<address_const_of>
      , ::eo_cxx::evas::canvas3d::object::address_const_of<address_const_of>
      , ::eo_cxx::evas::common_interface::address_const_of<address_const_of>
      , ::efl::eo::detail::concrete_address_const_of
   {
      explicit address_const_of(::evas::canvas3d::scene const* p)
         : ::efl::eo::detail::concrete_address_const_of(p)
      {}
   };
   address_const_of operator&() const { return address_const_of(this); }

   /// @endcond

private:

   /// @internal
   static Eo* _ctors_call(::efl::eo::parent_type _p)
   {
      Eo* _ret_eo = eo_add_ref(EVAS_CANVAS3D_SCENE_CLASS, _p._eo_raw);

      return _ret_eo;
   }

   /// @internal
   Eo* _concrete_eo_ptr() const { return _eo_ptr(); }
};

static_assert(sizeof(::evas::canvas3d::scene) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<::evas::canvas3d::scene>::value, "");

} }


#include "evas_canvas3d_scene.eo.impl.hh"

#endif // EFL_GENERATED_EVAS_CANVAS3D_SCENE_HH

