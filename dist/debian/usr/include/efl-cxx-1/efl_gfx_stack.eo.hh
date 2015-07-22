#ifndef EFL_GENERATED_EFL_GFX_STACK_HH
#define EFL_GENERATED_EFL_GFX_STACK_HH

extern "C"
{
#include <Efl.h>
}
#include <Eo.hh>

#include <eo_cxx_interop.hh>

extern "C"
{
#include "efl_gfx_stack.eo.h"
}


namespace efl { namespace gfx {

struct stack;

} }

/// @cond EO_CXX_ABSTRACT
namespace eo_cxx {

namespace efl { namespace gfx {

struct stack
{
   /// @param below 
   ///
   void stack_below(::efl::gfx::stack below_) const;

   void raise() const;

   /// @param above 
   ///
   void stack_above(::efl::gfx::stack above_) const;

   void lower() const;

   short layer_get() const;

   void layer_set(short l_) const;

   ::efl::gfx::stack below_get() const;

   ::efl::gfx::stack above_get() const;



   static Eo_Class const* _eo_class()
   {
      return(EFL_GFX_STACK_INTERFACE);
   }

   operator ::efl::gfx::stack() const;
   operator ::efl::gfx::stack&();
   operator ::efl::gfx::stack const&() const;

   /// @cond LOCAL
   template <typename D>
   struct address_of
   {
      operator ::efl::gfx::stack*() const { return static_cast<::efl::gfx::stack*>(static_cast<D const*>(this)->p); }
      operator ::efl::gfx::stack const*() const { return static_cast<::efl::gfx::stack const*>(static_cast<D const*>(this)->p); }
   };

   template <typename D>
   struct address_const_of
   {
      operator ::efl::gfx::stack const*() const { return static_cast<::efl::gfx::stack const*>(static_cast<D const*>(this)->p); }
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

/// @brief Class stack
struct stack
      : ::efl::eo::concrete
{
   //@{
   /**
      @brief Constructs a new efl::gfx::stack object.

      Constructs a new efl::gfx::stack object. If you want this object to be a child
      of another Eo object, use an @ref efl::eo::parent expression, like the example.

      Example:
      @code
      efl::gfx::stack my_stack(efl::eo::parent = parent_object);
      @endcode

      @see stack(Eo* eo)
   */
   explicit stack(::efl::eo::parent_type _p)
      : stack(_ctors_call(_p))
   {}

   explicit stack()
      : stack(_ctors_call(::efl::eo::parent = nullptr))
   {}
   //@}

   /// @brief Eo Constructor.
   ///
   /// Constructs the object from an Eo* pointer stealing its ownership.
   ///
   /// @param eo The Eo object pointer.
   ///
   explicit stack(Eo* eo)
      : ::efl::eo::concrete(eo)
   {}

   /// @brief nullptr_t Constructor.
   ///
   /// Constructs an empty (null) object.
   ///
   explicit stack(std::nullptr_t)
      : ::efl::eo::concrete(nullptr)
   {}

   /// @brief Copy Constructor.
   ///
   stack(stack const& other)
      : stack(eo_ref(other._eo_ptr()))
   {}

   ~stack() {}

   /// @param below 
   ///
   void stack_below(::efl::gfx::stack below_) const;

   void raise() const;

   /// @param above 
   ///
   void stack_above(::efl::gfx::stack above_) const;

   void lower() const;

   short layer_get() const;

   void layer_set(short l_) const;

   ::efl::gfx::stack below_get() const;

   ::efl::gfx::stack above_get() const;



   static Eo_Class const* _eo_class()
   {
      return(EFL_GFX_STACK_INTERFACE);
   }

   /// @cond LOCAL
   struct address_of
      : ::eo_cxx::efl::gfx::stack::address_of<address_of>
      , ::efl::eo::detail::concrete_address_of
   {
      explicit address_of(::efl::gfx::stack* p)
         : ::efl::eo::detail::concrete_address_of(p)
      {}
   };
   address_of operator&() { return address_of(this); }

   struct address_const_of
      : ::eo_cxx::efl::gfx::stack::address_const_of<address_const_of>
      , ::efl::eo::detail::concrete_address_const_of
   {
      explicit address_const_of(::efl::gfx::stack const* p)
         : ::efl::eo::detail::concrete_address_const_of(p)
      {}
   };
   address_const_of operator&() const { return address_const_of(this); }

   /// @endcond

private:

   /// @internal
   static Eo* _ctors_call(::efl::eo::parent_type _p)
   {
      Eo* _ret_eo = eo_add_ref(EFL_GFX_STACK_INTERFACE, _p._eo_raw);

      return _ret_eo;
   }

   /// @internal
   Eo* _concrete_eo_ptr() const { return _eo_ptr(); }
};

static_assert(sizeof(::efl::gfx::stack) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<::efl::gfx::stack>::value, "");

} }


#include "efl_gfx_stack.eo.impl.hh"

#endif // EFL_GENERATED_EFL_GFX_STACK_HH

