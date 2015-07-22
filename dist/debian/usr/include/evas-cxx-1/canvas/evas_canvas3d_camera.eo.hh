#ifndef EFL_GENERATED_EVAS_CANVAS3D_CAMERA_HH
#define EFL_GENERATED_EVAS_CANVAS3D_CAMERA_HH

extern "C"
{
#include <Efl.h>
}
#include <Eo.hh>

#include <eo_cxx_interop.hh>

extern "C"
{
#include "evas_canvas3d_camera.eo.h"
}

#include "evas_canvas3d_object.eo.hh"
#include "evas_common_interface.eo.hh"
#include <evas_canvas3d_node.eo.hh>

namespace evas { namespace canvas3d {

struct camera;

} }

/// @cond EO_CXX_ABSTRACT
namespace eo_cxx {

namespace evas { namespace canvas3d {

struct camera
{
   /// @param matrix 
   ///
   void projection_matrix_set(const Evas_Real * matrix_) const;

   /// @param[out] matrix 
   ///
   void projection_matrix_get(Evas_Real* matrix_) const;

   /// @param fovy 
   /// @param aspect 
   /// @param dnear 
   /// @param dfar 
   ///
   void projection_perspective_set(Evas_Real fovy_, Evas_Real aspect_, Evas_Real dnear_, Evas_Real dfar_) const;

   /// @param left 
   /// @param right 
   /// @param bottom 
   /// @param top 
   /// @param dnear 
   /// @param dfar 
   ///
   void projection_frustum_set(Evas_Real left_, Evas_Real right_, Evas_Real bottom_, Evas_Real top_, Evas_Real dnear_, Evas_Real dfar_) const;

   /// @param left 
   /// @param right 
   /// @param bottom 
   /// @param top 
   /// @param dnear 
   /// @param dfar 
   ///
   void projection_ortho_set(Evas_Real left_, Evas_Real right_, Evas_Real bottom_, Evas_Real top_, Evas_Real dnear_, Evas_Real dfar_) const;

   /// @param camera_node 
   /// @param node 
   /// @param key 
   ///
   bool node_visible_get(::evas::canvas3d::node camera_node_, ::evas::canvas3d::node node_, Evas_Canvas3D_Frustum_Mode key_) const;



   static Eo_Class const* _eo_class()
   {
      return(EVAS_CANVAS3D_CAMERA_CLASS);
   }

   operator ::evas::canvas3d::camera() const;
   operator ::evas::canvas3d::camera&();
   operator ::evas::canvas3d::camera const&() const;

   /// @cond LOCAL
   template <typename D>
   struct address_of
   {
      operator ::evas::canvas3d::camera*() const { return static_cast<::evas::canvas3d::camera*>(static_cast<D const*>(this)->p); }
      operator ::evas::canvas3d::camera const*() const { return static_cast<::evas::canvas3d::camera const*>(static_cast<D const*>(this)->p); }
   };

   template <typename D>
   struct address_const_of
   {
      operator ::evas::canvas3d::camera const*() const { return static_cast<::evas::canvas3d::camera const*>(static_cast<D const*>(this)->p); }
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

/// @brief Class camera
struct camera
      : ::efl::eo::concrete
      , EO_CXX_INHERIT(eo::base)
      , EO_CXX_INHERIT(evas::canvas3d::object)
      , EO_CXX_INHERIT(evas::common_interface)
{
   //@{
   /**
      @brief Constructs a new evas::canvas3d::camera object.

      Constructs a new evas::canvas3d::camera object. If you want this object to be a child
      of another Eo object, use an @ref efl::eo::parent expression, like the example.

      Example:
      @code
      evas::canvas3d::camera my_camera(efl::eo::parent = parent_object);
      @endcode

      @see camera(Eo* eo)
   */
   explicit camera(::efl::eo::parent_type _p)
      : camera(_ctors_call(_p))
   {}

   explicit camera()
      : camera(_ctors_call(::efl::eo::parent = nullptr))
   {}
   //@}

   /// @brief Eo Constructor.
   ///
   /// Constructs the object from an Eo* pointer stealing its ownership.
   ///
   /// @param eo The Eo object pointer.
   ///
   explicit camera(Eo* eo)
      : ::efl::eo::concrete(eo)
   {}

   /// @brief nullptr_t Constructor.
   ///
   /// Constructs an empty (null) object.
   ///
   explicit camera(std::nullptr_t)
      : ::efl::eo::concrete(nullptr)
   {}

   /// @brief Copy Constructor.
   ///
   camera(camera const& other)
      : camera(eo_ref(other._eo_ptr()))
   {}

   ~camera() {}

   /// @param matrix 
   ///
   void projection_matrix_set(const Evas_Real * matrix_) const;

   /// @param[out] matrix 
   ///
   void projection_matrix_get(Evas_Real* matrix_) const;

   /// @param fovy 
   /// @param aspect 
   /// @param dnear 
   /// @param dfar 
   ///
   void projection_perspective_set(Evas_Real fovy_, Evas_Real aspect_, Evas_Real dnear_, Evas_Real dfar_) const;

   /// @param left 
   /// @param right 
   /// @param bottom 
   /// @param top 
   /// @param dnear 
   /// @param dfar 
   ///
   void projection_frustum_set(Evas_Real left_, Evas_Real right_, Evas_Real bottom_, Evas_Real top_, Evas_Real dnear_, Evas_Real dfar_) const;

   /// @param left 
   /// @param right 
   /// @param bottom 
   /// @param top 
   /// @param dnear 
   /// @param dfar 
   ///
   void projection_ortho_set(Evas_Real left_, Evas_Real right_, Evas_Real bottom_, Evas_Real top_, Evas_Real dnear_, Evas_Real dfar_) const;

   /// @param camera_node 
   /// @param node 
   /// @param key 
   ///
   bool node_visible_get(::evas::canvas3d::node camera_node_, ::evas::canvas3d::node node_, Evas_Canvas3D_Frustum_Mode key_) const;

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
            &::efl::eo::_detail::event_callback<::evas::canvas3d::camera, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::canvas3d::camera, function_type>,
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
            &::efl::eo::_detail::event_callback<::evas::canvas3d::camera, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::canvas3d::camera, function_type>,
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
            &::efl::eo::_detail::event_callback<::evas::canvas3d::camera, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::canvas3d::camera, function_type>,
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
            &::efl::eo::_detail::event_callback<::evas::canvas3d::camera, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::canvas3d::camera, function_type>,
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
            &::efl::eo::_detail::event_callback<::evas::canvas3d::camera, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::canvas3d::camera, function_type>,
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
      return(EVAS_CANVAS3D_CAMERA_CLASS);
   }

   /// @cond LOCAL
   struct address_of
      : ::eo_cxx::evas::canvas3d::camera::address_of<address_of>
      , ::eo_cxx::eo::base::address_of<address_of>
      , ::eo_cxx::evas::canvas3d::object::address_of<address_of>
      , ::eo_cxx::evas::common_interface::address_of<address_of>
      , ::efl::eo::detail::concrete_address_of
   {
      explicit address_of(::evas::canvas3d::camera* p)
         : ::efl::eo::detail::concrete_address_of(p)
      {}
   };
   address_of operator&() { return address_of(this); }

   struct address_const_of
      : ::eo_cxx::evas::canvas3d::camera::address_const_of<address_const_of>
      , ::eo_cxx::eo::base::address_const_of<address_const_of>
      , ::eo_cxx::evas::canvas3d::object::address_const_of<address_const_of>
      , ::eo_cxx::evas::common_interface::address_const_of<address_const_of>
      , ::efl::eo::detail::concrete_address_const_of
   {
      explicit address_const_of(::evas::canvas3d::camera const* p)
         : ::efl::eo::detail::concrete_address_const_of(p)
      {}
   };
   address_const_of operator&() const { return address_const_of(this); }

   /// @endcond

private:

   /// @internal
   static Eo* _ctors_call(::efl::eo::parent_type _p)
   {
      Eo* _ret_eo = eo_add_ref(EVAS_CANVAS3D_CAMERA_CLASS, _p._eo_raw);

      return _ret_eo;
   }

   /// @internal
   Eo* _concrete_eo_ptr() const { return _eo_ptr(); }
};

static_assert(sizeof(::evas::canvas3d::camera) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<::evas::canvas3d::camera>::value, "");

} }


#include "evas_canvas3d_camera.eo.impl.hh"

#endif // EFL_GENERATED_EVAS_CANVAS3D_CAMERA_HH

