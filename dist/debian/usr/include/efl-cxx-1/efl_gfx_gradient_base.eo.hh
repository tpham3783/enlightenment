#ifndef EFL_GENERATED_EFL_GFX_GRADIENT_BASE_HH
#define EFL_GENERATED_EFL_GFX_GRADIENT_BASE_HH

extern "C"
{
#include <Efl.h>
}
#include <Eo.hh>

#include <eo_cxx_interop.hh>

extern "C"
{
#include "efl_gfx_gradient_base.eo.h"
}


namespace efl { namespace gfx { namespace gradient {

struct base;

} } }

/// @cond EO_CXX_ABSTRACT
namespace eo_cxx {

namespace efl { namespace gfx { namespace gradient {

struct base
{
   void stop_get(const Efl_Gfx_Gradient_Stop ** colors_, unsigned int* length_) const;

   void stop_set(const Efl_Gfx_Gradient_Stop * colors_, unsigned int length_) const;

   Efl_Gfx_Gradient_Spread spread_get() const;

   void spread_set(Efl_Gfx_Gradient_Spread s_) const;



   static Eo_Class const* _eo_class()
   {
      return(EFL_GFX_GRADIENT_BASE_INTERFACE);
   }

   operator ::efl::gfx::gradient::base() const;
   operator ::efl::gfx::gradient::base&();
   operator ::efl::gfx::gradient::base const&() const;

   /// @cond LOCAL
   template <typename D>
   struct address_of
   {
      operator ::efl::gfx::gradient::base*() const { return static_cast<::efl::gfx::gradient::base*>(static_cast<D const*>(this)->p); }
      operator ::efl::gfx::gradient::base const*() const { return static_cast<::efl::gfx::gradient::base const*>(static_cast<D const*>(this)->p); }
   };

   template <typename D>
   struct address_const_of
   {
      operator ::efl::gfx::gradient::base const*() const { return static_cast<::efl::gfx::gradient::base const*>(static_cast<D const*>(this)->p); }
   };
   /// @endcond

private:

   /// @internal
   Eo* _concrete_eo_ptr() const
   {
      return static_cast<::efl::eo::concrete const*>(static_cast<void const*>(this))->_eo_ptr();
   }

};

} } }

}
/// @endcond

namespace efl { namespace gfx { namespace gradient {

/// @brief Class base
struct base
      : ::efl::eo::concrete
{
   //@{
   /**
      @brief Constructs a new efl::gfx::gradient::base object.

      Constructs a new efl::gfx::gradient::base object. If you want this object to be a child
      of another Eo object, use an @ref efl::eo::parent expression, like the example.

      Example:
      @code
      efl::gfx::gradient::base my_base(efl::eo::parent = parent_object);
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

   void stop_get(const Efl_Gfx_Gradient_Stop ** colors_, unsigned int* length_) const;

   void stop_set(const Efl_Gfx_Gradient_Stop * colors_, unsigned int length_) const;

   Efl_Gfx_Gradient_Spread spread_get() const;

   void spread_set(Efl_Gfx_Gradient_Spread s_) const;



   static Eo_Class const* _eo_class()
   {
      return(EFL_GFX_GRADIENT_BASE_INTERFACE);
   }

   /// @cond LOCAL
   struct address_of
      : ::eo_cxx::efl::gfx::gradient::base::address_of<address_of>
      , ::efl::eo::detail::concrete_address_of
   {
      explicit address_of(::efl::gfx::gradient::base* p)
         : ::efl::eo::detail::concrete_address_of(p)
      {}
   };
   address_of operator&() { return address_of(this); }

   struct address_const_of
      : ::eo_cxx::efl::gfx::gradient::base::address_const_of<address_const_of>
      , ::efl::eo::detail::concrete_address_const_of
   {
      explicit address_const_of(::efl::gfx::gradient::base const* p)
         : ::efl::eo::detail::concrete_address_const_of(p)
      {}
   };
   address_const_of operator&() const { return address_const_of(this); }

   /// @endcond

private:

   /// @internal
   static Eo* _ctors_call(::efl::eo::parent_type _p)
   {
      Eo* _ret_eo = eo_add_ref(EFL_GFX_GRADIENT_BASE_INTERFACE, _p._eo_raw);

      return _ret_eo;
   }

   /// @internal
   Eo* _concrete_eo_ptr() const { return _eo_ptr(); }
};

static_assert(sizeof(::efl::gfx::gradient::base) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<::efl::gfx::gradient::base>::value, "");

} } }


#include "efl_gfx_gradient_base.eo.impl.hh"

#endif // EFL_GENERATED_EFL_GFX_GRADIENT_BASE_HH

