#ifndef EFL_GENERATED_EFL_VG_GRADIENT_LINEAR_HH
#define EFL_GENERATED_EFL_VG_GRADIENT_LINEAR_HH

extern "C"
{
#include <Efl.h>
}
#include <Eo.hh>

#include <eo_cxx_interop.hh>

extern "C"
{
#include "efl_vg_gradient_linear.eo.h"
}

#include "efl_vg_gradient.eo.hh"
#include "efl_gfx_gradient_linear.eo.hh"

namespace efl { namespace vg {

struct gradient_linear;

} }

/// @cond EO_CXX_ABSTRACT
namespace eo_cxx {

namespace efl { namespace vg {

struct gradient_linear
{


   static Eo_Class const* _eo_class()
   {
      return(EFL_VG_GRADIENT_LINEAR_CLASS);
   }

   operator ::efl::vg::gradient_linear() const;
   operator ::efl::vg::gradient_linear&();
   operator ::efl::vg::gradient_linear const&() const;

   /// @cond LOCAL
   template <typename D>
   struct address_of
   {
      operator ::efl::vg::gradient_linear*() const { return static_cast<::efl::vg::gradient_linear*>(static_cast<D const*>(this)->p); }
      operator ::efl::vg::gradient_linear const*() const { return static_cast<::efl::vg::gradient_linear const*>(static_cast<D const*>(this)->p); }
   };

   template <typename D>
   struct address_const_of
   {
      operator ::efl::vg::gradient_linear const*() const { return static_cast<::efl::vg::gradient_linear const*>(static_cast<D const*>(this)->p); }
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

namespace efl { namespace vg {

/// @brief Class gradient_linear
struct gradient_linear
      : ::efl::eo::concrete
      , EO_CXX_INHERIT(efl::gfx::base)
      , EO_CXX_INHERIT(efl::gfx::gradient::base)
      , EO_CXX_INHERIT(efl::gfx::gradient::linear)
      , EO_CXX_INHERIT(efl::gfx::stack)
      , EO_CXX_INHERIT(efl::vg::base)
      , EO_CXX_INHERIT(efl::vg::gradient)
      , EO_CXX_INHERIT(eo::base)
{
   //@{
   /**
      @brief Constructs a new efl::vg::gradient_linear object.

      Constructs a new efl::vg::gradient_linear object. If you want this object to be a child
      of another Eo object, use an @ref efl::eo::parent expression, like the example.

      Example:
      @code
      efl::vg::gradient_linear my_gradient_linear(efl::eo::parent = parent_object);
      @endcode

      @see gradient_linear(Eo* eo)
   */
   explicit gradient_linear(::efl::eo::parent_type _p)
      : gradient_linear(_ctors_call(_p))
   {}

   explicit gradient_linear()
      : gradient_linear(_ctors_call(::efl::eo::parent = nullptr))
   {}
   //@}

   /// @brief Eo Constructor.
   ///
   /// Constructs the object from an Eo* pointer stealing its ownership.
   ///
   /// @param eo The Eo object pointer.
   ///
   explicit gradient_linear(Eo* eo)
      : ::efl::eo::concrete(eo)
   {}

   /// @brief nullptr_t Constructor.
   ///
   /// Constructs an empty (null) object.
   ///
   explicit gradient_linear(std::nullptr_t)
      : ::efl::eo::concrete(nullptr)
   {}

   /// @brief Copy Constructor.
   ///
   gradient_linear(gradient_linear const& other)
      : gradient_linear(eo_ref(other._eo_ptr()))
   {}

   ~gradient_linear() {}

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
            &::efl::eo::_detail::event_callback<::efl::vg::gradient_linear, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::efl::vg::gradient_linear, function_type>,
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
            &::efl::eo::_detail::event_callback<::efl::vg::gradient_linear, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::efl::vg::gradient_linear, function_type>,
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
   callback_del_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EO_BASE_EVENT_DEL, priority_,
            &::efl::eo::_detail::event_callback<::efl::vg::gradient_linear, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::efl::vg::gradient_linear, function_type>,
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
      return(EFL_VG_GRADIENT_LINEAR_CLASS);
   }

   /// @cond LOCAL
   struct address_of
      : ::eo_cxx::efl::vg::gradient_linear::address_of<address_of>
      , ::eo_cxx::efl::gfx::base::address_of<address_of>
      , ::eo_cxx::efl::gfx::gradient::base::address_of<address_of>
      , ::eo_cxx::efl::gfx::gradient::linear::address_of<address_of>
      , ::eo_cxx::efl::gfx::stack::address_of<address_of>
      , ::eo_cxx::efl::vg::base::address_of<address_of>
      , ::eo_cxx::efl::vg::gradient::address_of<address_of>
      , ::eo_cxx::eo::base::address_of<address_of>
      , ::efl::eo::detail::concrete_address_of
   {
      explicit address_of(::efl::vg::gradient_linear* p)
         : ::efl::eo::detail::concrete_address_of(p)
      {}
   };
   address_of operator&() { return address_of(this); }

   struct address_const_of
      : ::eo_cxx::efl::vg::gradient_linear::address_const_of<address_const_of>
      , ::eo_cxx::efl::gfx::base::address_const_of<address_const_of>
      , ::eo_cxx::efl::gfx::gradient::base::address_const_of<address_const_of>
      , ::eo_cxx::efl::gfx::gradient::linear::address_const_of<address_const_of>
      , ::eo_cxx::efl::gfx::stack::address_const_of<address_const_of>
      , ::eo_cxx::efl::vg::base::address_const_of<address_const_of>
      , ::eo_cxx::efl::vg::gradient::address_const_of<address_const_of>
      , ::eo_cxx::eo::base::address_const_of<address_const_of>
      , ::efl::eo::detail::concrete_address_const_of
   {
      explicit address_const_of(::efl::vg::gradient_linear const* p)
         : ::efl::eo::detail::concrete_address_const_of(p)
      {}
   };
   address_const_of operator&() const { return address_const_of(this); }

   /// @endcond

private:

   /// @internal
   static Eo* _ctors_call(::efl::eo::parent_type _p)
   {
      Eo* _ret_eo = eo_add_ref(EFL_VG_GRADIENT_LINEAR_CLASS, _p._eo_raw);

      return _ret_eo;
   }

   /// @internal
   Eo* _concrete_eo_ptr() const { return _eo_ptr(); }
};

static_assert(sizeof(::efl::vg::gradient_linear) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<::efl::vg::gradient_linear>::value, "");

} }


#include "efl_vg_gradient_linear.eo.impl.hh"

#endif // EFL_GENERATED_EFL_VG_GRADIENT_LINEAR_HH

