#ifndef EFL_GENERATED_EFL_GFX_FILL_HH
#define EFL_GENERATED_EFL_GFX_FILL_HH

extern "C"
{
#include <Efl.h>
}
#include <Eo.hh>

#include <eo_cxx_interop.hh>

extern "C"
{
#include "efl_gfx_fill.eo.h"
}


namespace efl { namespace gfx {

struct fill;

} }

/// @cond EO_CXX_ABSTRACT
namespace eo_cxx {

namespace efl { namespace gfx {

struct fill
{
   Efl_Gfx_Fill_Spread fill_spread_get() const;

   void fill_spread_set(Efl_Gfx_Fill_Spread spread_) const;

   void fill_get(int* x_, int* y_, int* w_, int* h_) const;

   void fill_set(int x_, int y_, int w_, int h_) const;



   static Eo_Class const* _eo_class()
   {
      return(EFL_GFX_FILL_INTERFACE);
   }

   operator ::efl::gfx::fill() const;
   operator ::efl::gfx::fill&();
   operator ::efl::gfx::fill const&() const;

   /// @cond LOCAL
   template <typename D>
   struct address_of
   {
      operator ::efl::gfx::fill*() const { return static_cast<::efl::gfx::fill*>(static_cast<D const*>(this)->p); }
      operator ::efl::gfx::fill const*() const { return static_cast<::efl::gfx::fill const*>(static_cast<D const*>(this)->p); }
   };

   template <typename D>
   struct address_const_of
   {
      operator ::efl::gfx::fill const*() const { return static_cast<::efl::gfx::fill const*>(static_cast<D const*>(this)->p); }
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

namespace efl { namespace gfx {

/// @brief Class fill
struct fill
      : ::efl::eo::concrete
{
   //@{
   /**
      @brief Constructs a new efl::gfx::fill object.

      Constructs a new efl::gfx::fill object. If you want this object to be a child
      of another Eo object, use an @ref efl::eo::parent expression, like the example.

      Example:
      @code
      efl::gfx::fill my_fill(efl::eo::parent = parent_object);
      @endcode

      @see fill(Eo* eo)
   */
   explicit fill(::efl::eo::parent_type _p)
      : fill(_ctors_call(_p))
   {}

   explicit fill()
      : fill(_ctors_call(::efl::eo::parent = nullptr))
   {}
   //@}

   /// @brief Eo Constructor.
   ///
   /// Constructs the object from an Eo* pointer stealing its ownership.
   ///
   /// @param eo The Eo object pointer.
   ///
   explicit fill(Eo* eo)
      : ::efl::eo::concrete(eo)
   {}

   /// @brief nullptr_t Constructor.
   ///
   /// Constructs an empty (null) object.
   ///
   explicit fill(std::nullptr_t)
      : ::efl::eo::concrete(nullptr)
   {}

   /// @brief Copy Constructor.
   ///
   fill(fill const& other)
      : fill(eo_ref(other._eo_ptr()))
   {}

   ~fill() {}

   Efl_Gfx_Fill_Spread fill_spread_get() const;

   void fill_spread_set(Efl_Gfx_Fill_Spread spread_) const;

   void fill_get(int* x_, int* y_, int* w_, int* h_) const;

   void fill_set(int x_, int y_, int w_, int h_) const;



   static Eo_Class const* _eo_class()
   {
      return(EFL_GFX_FILL_INTERFACE);
   }

   /// @cond LOCAL
   struct address_of
      : ::eo_cxx::efl::gfx::fill::address_of<address_of>
      , ::efl::eo::detail::concrete_address_of
   {
      explicit address_of(::efl::gfx::fill* p)
         : ::efl::eo::detail::concrete_address_of(p)
      {}
   };
   address_of operator&() { return address_of(this); }

   struct address_const_of
      : ::eo_cxx::efl::gfx::fill::address_const_of<address_const_of>
      , ::efl::eo::detail::concrete_address_const_of
   {
      explicit address_const_of(::efl::gfx::fill const* p)
         : ::efl::eo::detail::concrete_address_const_of(p)
      {}
   };
   address_const_of operator&() const { return address_const_of(this); }

   /// @endcond

private:

   /// @internal
   static Eo* _ctors_call(::efl::eo::parent_type _p)
   {
      Eo* _ret_eo = eo_add_ref(EFL_GFX_FILL_INTERFACE, _p._eo_raw);

      return _ret_eo;
   }

   /// @internal
   Eo* _concrete_eo_ptr() const { return _eo_ptr(); }
};

static_assert(sizeof(::efl::gfx::fill) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<::efl::gfx::fill>::value, "");

} }


#include "efl_gfx_fill.eo.impl.hh"

#endif // EFL_GENERATED_EFL_GFX_FILL_HH

