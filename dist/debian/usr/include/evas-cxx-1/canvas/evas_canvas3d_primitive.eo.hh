#ifndef EFL_GENERATED_EVAS_CANVAS3D_PRIMITIVE_HH
#define EFL_GENERATED_EVAS_CANVAS3D_PRIMITIVE_HH

extern "C"
{
#include <Efl.h>
}
#include <Eo.hh>

#include <eo_cxx_interop.hh>

extern "C"
{
#include "evas_canvas3d_primitive.eo.h"
}

#include "evas_canvas3d_object.eo.hh"
#include "evas_common_interface.eo.hh"

namespace evas { namespace canvas3d {

struct primitive;

} }

/// @cond EO_CXX_ABSTRACT
namespace eo_cxx {

namespace evas { namespace canvas3d {

struct primitive
{
   Evas_Canvas3D_Mesh_Primitive form_get() const;

   void form_set(Evas_Canvas3D_Mesh_Primitive form_) const;

   Evas_Canvas3D_Primitive_Mode mode_get() const;

   void mode_set(Evas_Canvas3D_Primitive_Mode mode_) const;

   Evas_Real ratio_get() const;

   void ratio_set(Evas_Real ratio_) const;

   int precision_get() const;

   void precision_set(int precision_) const;

   void surface_set(Evas_Canvas3D_Surface_Func * surface_) const;

   void tex_scale_get(Evas_Real* tex_scale_x_, Evas_Real* tex_scale_y_) const;

   void tex_scale_set(Evas_Real tex_scale_x_, Evas_Real tex_scale_y_) const;



   static Eo_Class const* _eo_class()
   {
      return(EVAS_CANVAS3D_PRIMITIVE_CLASS);
   }

   operator ::evas::canvas3d::primitive() const;
   operator ::evas::canvas3d::primitive&();
   operator ::evas::canvas3d::primitive const&() const;

   /// @cond LOCAL
   template <typename D>
   struct address_of
   {
      operator ::evas::canvas3d::primitive*() const { return static_cast<::evas::canvas3d::primitive*>(static_cast<D const*>(this)->p); }
      operator ::evas::canvas3d::primitive const*() const { return static_cast<::evas::canvas3d::primitive const*>(static_cast<D const*>(this)->p); }
   };

   template <typename D>
   struct address_const_of
   {
      operator ::evas::canvas3d::primitive const*() const { return static_cast<::evas::canvas3d::primitive const*>(static_cast<D const*>(this)->p); }
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

/// @brief Class primitive
struct primitive
      : ::efl::eo::concrete
      , EO_CXX_INHERIT(eo::base)
      , EO_CXX_INHERIT(evas::canvas3d::object)
      , EO_CXX_INHERIT(evas::common_interface)
{
   //@{
   /**
      @brief Constructs a new evas::canvas3d::primitive object.

      Constructs a new evas::canvas3d::primitive object. If you want this object to be a child
      of another Eo object, use an @ref efl::eo::parent expression, like the example.

      Example:
      @code
      evas::canvas3d::primitive my_primitive(efl::eo::parent = parent_object);
      @endcode

      @see primitive(Eo* eo)
   */
   explicit primitive(::efl::eo::parent_type _p)
      : primitive(_ctors_call(_p))
   {}

   explicit primitive()
      : primitive(_ctors_call(::efl::eo::parent = nullptr))
   {}
   //@}

   /// @brief Eo Constructor.
   ///
   /// Constructs the object from an Eo* pointer stealing its ownership.
   ///
   /// @param eo The Eo object pointer.
   ///
   explicit primitive(Eo* eo)
      : ::efl::eo::concrete(eo)
   {}

   /// @brief nullptr_t Constructor.
   ///
   /// Constructs an empty (null) object.
   ///
   explicit primitive(std::nullptr_t)
      : ::efl::eo::concrete(nullptr)
   {}

   /// @brief Copy Constructor.
   ///
   primitive(primitive const& other)
      : primitive(eo_ref(other._eo_ptr()))
   {}

   ~primitive() {}

   Evas_Canvas3D_Mesh_Primitive form_get() const;

   void form_set(Evas_Canvas3D_Mesh_Primitive form_) const;

   Evas_Canvas3D_Primitive_Mode mode_get() const;

   void mode_set(Evas_Canvas3D_Primitive_Mode mode_) const;

   Evas_Real ratio_get() const;

   void ratio_set(Evas_Real ratio_) const;

   int precision_get() const;

   void precision_set(int precision_) const;

   void surface_set(Evas_Canvas3D_Surface_Func * surface_) const;

   void tex_scale_get(Evas_Real* tex_scale_x_, Evas_Real* tex_scale_y_) const;

   void tex_scale_set(Evas_Real tex_scale_x_, Evas_Real tex_scale_y_) const;

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
            &::efl::eo::_detail::event_callback<::evas::canvas3d::primitive, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::canvas3d::primitive, function_type>,
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
            &::efl::eo::_detail::event_callback<::evas::canvas3d::primitive, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::canvas3d::primitive, function_type>,
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
            &::efl::eo::_detail::event_callback<::evas::canvas3d::primitive, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::canvas3d::primitive, function_type>,
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
            &::efl::eo::_detail::event_callback<::evas::canvas3d::primitive, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::canvas3d::primitive, function_type>,
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
            &::efl::eo::_detail::event_callback<::evas::canvas3d::primitive, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::canvas3d::primitive, function_type>,
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
      return(EVAS_CANVAS3D_PRIMITIVE_CLASS);
   }

   /// @cond LOCAL
   struct address_of
      : ::eo_cxx::evas::canvas3d::primitive::address_of<address_of>
      , ::eo_cxx::eo::base::address_of<address_of>
      , ::eo_cxx::evas::canvas3d::object::address_of<address_of>
      , ::eo_cxx::evas::common_interface::address_of<address_of>
      , ::efl::eo::detail::concrete_address_of
   {
      explicit address_of(::evas::canvas3d::primitive* p)
         : ::efl::eo::detail::concrete_address_of(p)
      {}
   };
   address_of operator&() { return address_of(this); }

   struct address_const_of
      : ::eo_cxx::evas::canvas3d::primitive::address_const_of<address_const_of>
      , ::eo_cxx::eo::base::address_const_of<address_const_of>
      , ::eo_cxx::evas::canvas3d::object::address_const_of<address_const_of>
      , ::eo_cxx::evas::common_interface::address_const_of<address_const_of>
      , ::efl::eo::detail::concrete_address_const_of
   {
      explicit address_const_of(::evas::canvas3d::primitive const* p)
         : ::efl::eo::detail::concrete_address_const_of(p)
      {}
   };
   address_const_of operator&() const { return address_const_of(this); }

   /// @endcond

private:

   /// @internal
   static Eo* _ctors_call(::efl::eo::parent_type _p)
   {
      Eo* _ret_eo = eo_add_ref(EVAS_CANVAS3D_PRIMITIVE_CLASS, _p._eo_raw);

      return _ret_eo;
   }

   /// @internal
   Eo* _concrete_eo_ptr() const { return _eo_ptr(); }
};

static_assert(sizeof(::evas::canvas3d::primitive) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<::evas::canvas3d::primitive>::value, "");

} }


#include "evas_canvas3d_primitive.eo.impl.hh"

#endif // EFL_GENERATED_EVAS_CANVAS3D_PRIMITIVE_HH

