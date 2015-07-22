#ifndef EFL_GENERATED_EFL_GFX_GRADIENT_RADIAL_HH
#define EFL_GENERATED_EFL_GFX_GRADIENT_RADIAL_HH

extern "C"
{
#include <Efl.h>
}
#include <Eo.hh>

#include <eo_cxx_interop.hh>

extern "C"
{
#include "efl_gfx_gradient_radial.eo.h"
}

#include "efl_gfx_gradient_base.eo.hh"

namespace efl { namespace gfx { namespace gradient {

struct radial;

} } }

/// @cond EO_CXX_ABSTRACT
namespace eo_cxx {

namespace efl { namespace gfx { namespace gradient {

struct radial
{
   void center_get(double* x_, double* y_) const;

   void center_set(double x_, double y_) const;

   double radius_get() const;

   void radius_set(double r_) const;

   void focal_get(double* x_, double* y_) const;

   void focal_set(double x_, double y_) const;



   static Eo_Class const* _eo_class()
   {
      return(EFL_GFX_GRADIENT_RADIAL_INTERFACE);
   }

   operator ::efl::gfx::gradient::radial() const;
   operator ::efl::gfx::gradient::radial&();
   operator ::efl::gfx::gradient::radial const&() const;

   /// @cond LOCAL
   template <typename D>
   struct address_of
   {
      operator ::efl::gfx::gradient::radial*() const { return static_cast<::efl::gfx::gradient::radial*>(static_cast<D const*>(this)->p); }
      operator ::efl::gfx::gradient::radial const*() const { return static_cast<::efl::gfx::gradient::radial const*>(static_cast<D const*>(this)->p); }
   };

   template <typename D>
   struct address_const_of
   {
      operator ::efl::gfx::gradient::radial const*() const { return static_cast<::efl::gfx::gradient::radial const*>(static_cast<D const*>(this)->p); }
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

/// @brief Class radial
struct radial
      : ::efl::eo::concrete
      , EO_CXX_INHERIT(efl::gfx::gradient::base)
{
   //@{
   /**
      @brief Constructs a new efl::gfx::gradient::radial object.

      Constructs a new efl::gfx::gradient::radial object. If you want this object to be a child
      of another Eo object, use an @ref efl::eo::parent expression, like the example.

      Example:
      @code
      efl::gfx::gradient::radial my_radial(efl::eo::parent = parent_object);
      @endcode

      @see radial(Eo* eo)
   */
   explicit radial(::efl::eo::parent_type _p)
      : radial(_ctors_call(_p))
   {}

   explicit radial()
      : radial(_ctors_call(::efl::eo::parent = nullptr))
   {}
   //@}

   /// @brief Eo Constructor.
   ///
   /// Constructs the object from an Eo* pointer stealing its ownership.
   ///
   /// @param eo The Eo object pointer.
   ///
   explicit radial(Eo* eo)
      : ::efl::eo::concrete(eo)
   {}

   /// @brief nullptr_t Constructor.
   ///
   /// Constructs an empty (null) object.
   ///
   explicit radial(std::nullptr_t)
      : ::efl::eo::concrete(nullptr)
   {}

   /// @brief Copy Constructor.
   ///
   radial(radial const& other)
      : radial(eo_ref(other._eo_ptr()))
   {}

   ~radial() {}

   void center_get(double* x_, double* y_) const;

   void center_set(double x_, double y_) const;

   double radius_get() const;

   void radius_set(double r_) const;

   void focal_get(double* x_, double* y_) const;

   void focal_set(double x_, double y_) const;



   static Eo_Class const* _eo_class()
   {
      return(EFL_GFX_GRADIENT_RADIAL_INTERFACE);
   }

   /// @cond LOCAL
   struct address_of
      : ::eo_cxx::efl::gfx::gradient::radial::address_of<address_of>
      , ::eo_cxx::efl::gfx::gradient::base::address_of<address_of>
      , ::efl::eo::detail::concrete_address_of
   {
      explicit address_of(::efl::gfx::gradient::radial* p)
         : ::efl::eo::detail::concrete_address_of(p)
      {}
   };
   address_of operator&() { return address_of(this); }

   struct address_const_of
      : ::eo_cxx::efl::gfx::gradient::radial::address_const_of<address_const_of>
      , ::eo_cxx::efl::gfx::gradient::base::address_const_of<address_const_of>
      , ::efl::eo::detail::concrete_address_const_of
   {
      explicit address_const_of(::efl::gfx::gradient::radial const* p)
         : ::efl::eo::detail::concrete_address_const_of(p)
      {}
   };
   address_const_of operator&() const { return address_const_of(this); }

   /// @endcond

private:

   /// @internal
   static Eo* _ctors_call(::efl::eo::parent_type _p)
   {
      Eo* _ret_eo = eo_add_ref(EFL_GFX_GRADIENT_RADIAL_INTERFACE, _p._eo_raw);

      return _ret_eo;
   }

   /// @internal
   Eo* _concrete_eo_ptr() const { return _eo_ptr(); }
};

static_assert(sizeof(::efl::gfx::gradient::radial) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<::efl::gfx::gradient::radial>::value, "");

} } }


#include "efl_gfx_gradient_radial.eo.impl.hh"

#endif // EFL_GENERATED_EFL_GFX_GRADIENT_RADIAL_HH

