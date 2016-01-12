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
   /// @param w 
   /// @param h 
   ///
   void size_set(int w_, int h_) const;

   /// @param[out] w 
   /// @param[out] h 
   ///
   void size_get(int* w_, int* h_) const;

   /// @param r 
   /// @param g 
   /// @param b 
   /// @param a 
   ///
   void background_color_set(Evas_Real r_, Evas_Real g_, Evas_Real b_, Evas_Real a_) const;

   /// @param[out] r 
   /// @param[out] g 
   /// @param[out] b 
   /// @param[out] a 
   ///
   void background_color_get(Evas_Real* r_, Evas_Real* g_, Evas_Real* b_, Evas_Real* a_) const;

   /// @param x 
   /// @param y 
   /// @param[out] node 
   /// @param[out] mesh 
   /// @param[out] s 
   /// @param[out] t 
   ///
   bool pick(Evas_Real x_, Evas_Real y_, ::evas::canvas3d::node* node_, ::evas::canvas3d::mesh* mesh_, Evas_Real* s_, Evas_Real* t_) const;

   /// @param x 
   /// @param y 
   /// @param node 
   ///
   ::evas::canvas3d::node exist(Evas_Real x_, Evas_Real y_, ::evas::canvas3d::node node_) const;

   /// @param x 
   /// @param y 
   ///
   ::efl::eina::range_list< ::evas::canvas3d::node > pick_member_list_get(Evas_Real x_, Evas_Real y_) const;

   /// @param shadows_enabled 
   ///
   void shadows_enable_set(bool shadows_enabled_) const;

   bool shadows_enable_get() const;

   bool color_pick_enable_get() const;

   /// @param color_pick 
   ///
   bool color_pick_enable_set(bool color_pick_) const;

   ::evas::canvas3d::node root_node_get() const;

   void root_node_set(::evas::canvas3d::node node_) const;

   ::evas::canvas3d::node camera_node_get() const;

   void camera_node_set(::evas::canvas3d::node node_) const;

   void shadows_depth_get(Evas_Real* depth_offset_, Evas_Real* depth_constant_) const;

   void shadows_depth_set(Evas_Real depth_offset_, Evas_Real depth_constant_) const;



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

   /// @param w 
   /// @param h 
   ///
   void size_set(int w_, int h_) const;

   /// @param[out] w 
   /// @param[out] h 
   ///
   void size_get(int* w_, int* h_) const;

   /// @param r 
   /// @param g 
   /// @param b 
   /// @param a 
   ///
   void background_color_set(Evas_Real r_, Evas_Real g_, Evas_Real b_, Evas_Real a_) const;

   /// @param[out] r 
   /// @param[out] g 
   /// @param[out] b 
   /// @param[out] a 
   ///
   void background_color_get(Evas_Real* r_, Evas_Real* g_, Evas_Real* b_, Evas_Real* a_) const;

   /// @param x 
   /// @param y 
   /// @param[out] node 
   /// @param[out] mesh 
   /// @param[out] s 
   /// @param[out] t 
   ///
   bool pick(Evas_Real x_, Evas_Real y_, ::evas::canvas3d::node* node_, ::evas::canvas3d::mesh* mesh_, Evas_Real* s_, Evas_Real* t_) const;

   /// @param x 
   /// @param y 
   /// @param node 
   ///
   ::evas::canvas3d::node exist(Evas_Real x_, Evas_Real y_, ::evas::canvas3d::node node_) const;

   /// @param x 
   /// @param y 
   ///
   ::efl::eina::range_list< ::evas::canvas3d::node > pick_member_list_get(Evas_Real x_, Evas_Real y_) const;

   /// @param shadows_enabled 
   ///
   void shadows_enable_set(bool shadows_enabled_) const;

   bool shadows_enable_get() const;

   bool color_pick_enable_get() const;

   /// @param color_pick 
   ///
   bool color_pick_enable_set(bool color_pick_) const;

   ::evas::canvas3d::node root_node_get() const;

   void root_node_set(::evas::canvas3d::node node_) const;

   ::evas::canvas3d::node camera_node_get() const;

   void camera_node_set(::evas::canvas3d::node node_) const;

   void shadows_depth_get(Evas_Real* depth_offset_, Evas_Real* depth_constant_) const;

   void shadows_depth_set(Evas_Real depth_offset_, Evas_Real depth_constant_) const;

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

