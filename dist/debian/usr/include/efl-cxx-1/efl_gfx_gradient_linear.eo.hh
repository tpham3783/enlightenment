#ifndef EFL_GENERATED_EFL_GFX_GRADIENT_LINEAR_HH
#define EFL_GENERATED_EFL_GFX_GRADIENT_LINEAR_HH

extern "C"
{
#include <Efl.h>
}
#include <Eo.hh>

#include <eo_cxx_interop.hh>

extern "C"
{
#include "efl_gfx_gradient_linear.eo.h"
}

#include "efl_gfx_gradient_base.eo.hh"

namespace efl { namespace gfx { namespace gradient {

struct linear;

} } }

/// @cond EO_CXX_ABSTRACT
namespace eo_cxx {

namespace efl { namespace gfx { namespace gradient {

struct linear
{
   void start_get(double* x_, double* y_) const;

   void start_set(double x_, double y_) const;

   void end_get(double* x_, double* y_) const;

   void end_set(double x_, double y_) const;



   static Eo_Class const* _eo_class()
   {
      return(EFL_GFX_GRADIENT_LINEAR_INTERFACE);
   }

   operator ::efl::gfx::gradient::linear() const;
   operator ::efl::gfx::gradient::linear&();
   operator ::efl::gfx::gradient::linear const&() const;

   /// @cond LOCAL
   template <typename D>
   struct address_of
   {
      operator ::efl::gfx::gradient::linear*() const { return static_cast<::efl::gfx::gradient::linear*>(static_cast<D const*>(this)->p); }
      operator ::efl::gfx::gradient::linear const*() const { return static_cast<::efl::gfx::gradient::linear const*>(static_cast<D const*>(this)->p); }
   };

   template <typename D>
   struct address_const_of
   {
      operator ::efl::gfx::gradient::linear const*() const { return static_cast<::efl::gfx::gradient::linear const*>(static_cast<D const*>(this)->p); }
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

/// @brief Class linear
struct linear
      : ::efl::eo::concrete
      , EO_CXX_INHERIT(efl::gfx::gradient::base)
{
   //@{
   /**
      @brief Constructs a new efl::gfx::gradient::linear object.

      Constructs a new efl::gfx::gradient::linear object. If you want this object to be a child
      of another Eo object, use an @ref efl::eo::parent expression, like the example.

      Example:
      @code
      efl::gfx::gradient::linear my_linear(efl::eo::parent = parent_object);
      @endcode

      @see linear(Eo* eo)
   */
   explicit linear(::efl::eo::parent_type _p)
      : linear(_ctors_call(_p))
   {}

   explicit linear()
      : linear(_ctors_call(::efl::eo::parent = nullptr))
   {}
   //@}

   /// @brief Eo Constructor.
   ///
   /// Constructs the object from an Eo* pointer stealing its ownership.
   ///
   /// @param eo The Eo object pointer.
   ///
   explicit linear(Eo* eo)
      : ::efl::eo::concrete(eo)
   {}

   /// @brief nullptr_t Constructor.
   ///
   /// Constructs an empty (null) object.
   ///
   explicit linear(std::nullptr_t)
      : ::efl::eo::concrete(nullptr)
   {}

   /// @brief Copy Constructor.
   ///
   linear(linear const& other)
      : linear(eo_ref(other._eo_ptr()))
   {}

   ~linear() {}

   void start_get(double* x_, double* y_) const;

   void start_set(double x_, double y_) const;

   void end_get(double* x_, double* y_) const;

   void end_set(double x_, double y_) const;



   static Eo_Class const* _eo_class()
   {
      return(EFL_GFX_GRADIENT_LINEAR_INTERFACE);
   }

   /// @cond LOCAL
   struct address_of
      : ::eo_cxx::efl::gfx::gradient::linear::address_of<address_of>
      , ::eo_cxx::efl::gfx::gradient::base::address_of<address_of>
      , ::efl::eo::detail::concrete_address_of
   {
      explicit address_of(::efl::gfx::gradient::linear* p)
         : ::efl::eo::detail::concrete_address_of(p)
      {}
   };
   address_of operator&() { return address_of(this); }

   struct address_const_of
      : ::eo_cxx::efl::gfx::gradient::linear::address_const_of<address_const_of>
      , ::eo_cxx::efl::gfx::gradient::base::address_const_of<address_const_of>
      , ::efl::eo::detail::concrete_address_const_of
   {
      explicit address_const_of(::efl::gfx::gradient::linear const* p)
         : ::efl::eo::detail::concrete_address_const_of(p)
      {}
   };
   address_const_of operator&() const { return address_const_of(this); }

   /// @endcond

private:

   /// @internal
   static Eo* _ctors_call(::efl::eo::parent_type _p)
   {
      Eo* _ret_eo = eo_add_ref(EFL_GFX_GRADIENT_LINEAR_INTERFACE, _p._eo_raw);

      return _ret_eo;
   }

   /// @internal
   Eo* _concrete_eo_ptr() const { return _eo_ptr(); }
};

static_assert(sizeof(::efl::gfx::gradient::linear) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<::efl::gfx::gradient::linear>::value, "");

} } }


#include "efl_gfx_gradient_linear.eo.impl.hh"

#endif // EFL_GENERATED_EFL_GFX_GRADIENT_LINEAR_HH

