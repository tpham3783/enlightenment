#ifndef EFL_GENERATED_EFL_VG_BASE_HH
#define EFL_GENERATED_EFL_VG_BASE_HH

extern "C"
{
#include <Efl.h>
}
#include <Eo.hh>

#include <eo_cxx_interop.hh>

extern "C"
{
#include "efl_vg_base.eo.h"
}

#include "eo_base.eo.hh"
#include "efl_gfx_base.eo.hh"
#include "efl_gfx_stack.eo.hh"

namespace efl { namespace vg {

struct base;

} }

/// @cond EO_CXX_ABSTRACT
namespace eo_cxx {

namespace efl { namespace vg {

struct base
{
   /// @param[out] r 
   ///
   void bounds_get(Eina_Rectangle* r_) const;

   const Eina_Matrix3 * transformation_get() const;

   void transformation_set(const Eina_Matrix3 * m_) const;

   void origin_get(double* x_, double* y_) const;

   void origin_set(double x_, double y_) const;

   Efl_VG * mask_get() const;

   void mask_set(Efl_VG * m_) const;



   static Eo_Class const* _eo_class()
   {
      return(EFL_VG_BASE_CLASS);
   }

   operator ::efl::vg::base() const;
   operator ::efl::vg::base&();
   operator ::efl::vg::base const&() const;

   /// @cond LOCAL
   template <typename D>
   struct address_of
   {
      operator ::efl::vg::base*() const { return static_cast<::efl::vg::base*>(static_cast<D const*>(this)->p); }
      operator ::efl::vg::base const*() const { return static_cast<::efl::vg::base const*>(static_cast<D const*>(this)->p); }
   };

   template <typename D>
   struct address_const_of
   {
      operator ::efl::vg::base const*() const { return static_cast<::efl::vg::base const*>(static_cast<D const*>(this)->p); }
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

/// @brief Class base
struct base
      : ::efl::eo::concrete
      , EO_CXX_INHERIT(efl::gfx::base)
      , EO_CXX_INHERIT(efl::gfx::stack)
      , EO_CXX_INHERIT(eo::base)
{
   //@{
   /**
      @brief Constructs a new efl::vg::base object.

      Constructs a new efl::vg::base object. If you want this object to be a child
      of another Eo object, use an @ref efl::eo::parent expression, like the example.

      Example:
      @code
      efl::vg::base my_base(efl::eo::parent = parent_object);
      @endcode

      @see base(Eo* eo)
   */
   explicit base(::efl::eo::parent_type _p)
      : base(_ctors_call(_p))
   {}

   explicit base()
      : base(_ctors_call(::efl::eo::parent = nullptr))
   {}
   //@}

   /// @brief Eo Constructor.
   ///
   /// Constructs the object from an Eo* pointer stealing its ownership.
   ///
   /// @param eo The Eo object pointer.
   ///
   explicit base(Eo* eo)
      : ::efl::eo::concrete(eo)
   {}

   /// @brief nullptr_t Constructor.
   ///
   /// Constructs an empty (null) object.
   ///
   explicit base(std::nullptr_t)
      : ::efl::eo::concrete(nullptr)
   {}

   /// @brief Copy Constructor.
   ///
   base(base const& other)
      : base(eo_ref(other._eo_ptr()))
   {}

   ~base() {}

   /// @param[out] r 
   ///
   void bounds_get(Eina_Rectangle* r_) const;

   const Eina_Matrix3 * transformation_get() const;

   void transformation_set(const Eina_Matrix3 * m_) const;

   void origin_get(double* x_, double* y_) const;

   void origin_set(double x_, double y_) const;

   Efl_VG * mask_get() const;

   void mask_set(Efl_VG * m_) const;

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
            &::efl::eo::_detail::event_callback<::efl::vg::base, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::efl::vg::base, function_type>,
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
            &::efl::eo::_detail::event_callback<::efl::vg::base, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::efl::vg::base, function_type>,
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
            &::efl::eo::_detail::event_callback<::efl::vg::base, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::efl::vg::base, function_type>,
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
      return(EFL_VG_BASE_CLASS);
   }

   /// @cond LOCAL
   struct address_of
      : ::eo_cxx::efl::vg::base::address_of<address_of>
      , ::eo_cxx::efl::gfx::base::address_of<address_of>
      , ::eo_cxx::efl::gfx::stack::address_of<address_of>
      , ::eo_cxx::eo::base::address_of<address_of>
      , ::efl::eo::detail::concrete_address_of
   {
      explicit address_of(::efl::vg::base* p)
         : ::efl::eo::detail::concrete_address_of(p)
      {}
   };
   address_of operator&() { return address_of(this); }

   struct address_const_of
      : ::eo_cxx::efl::vg::base::address_const_of<address_const_of>
      , ::eo_cxx::efl::gfx::base::address_const_of<address_const_of>
      , ::eo_cxx::efl::gfx::stack::address_const_of<address_const_of>
      , ::eo_cxx::eo::base::address_const_of<address_const_of>
      , ::efl::eo::detail::concrete_address_const_of
   {
      explicit address_const_of(::efl::vg::base const* p)
         : ::efl::eo::detail::concrete_address_const_of(p)
      {}
   };
   address_const_of operator&() const { return address_const_of(this); }

   /// @endcond

private:

   /// @internal
   static Eo* _ctors_call(::efl::eo::parent_type _p)
   {
      Eo* _ret_eo = eo_add_ref(EFL_VG_BASE_CLASS, _p._eo_raw);

      return _ret_eo;
   }

   /// @internal
   Eo* _concrete_eo_ptr() const { return _eo_ptr(); }
};

static_assert(sizeof(::efl::vg::base) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<::efl::vg::base>::value, "");

} }


#include "efl_vg_base.eo.impl.hh"

#endif // EFL_GENERATED_EFL_VG_BASE_HH

