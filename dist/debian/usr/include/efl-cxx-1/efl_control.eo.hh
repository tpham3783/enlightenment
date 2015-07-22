#ifndef EFL_GENERATED_EFL_CONTROL_HH
#define EFL_GENERATED_EFL_CONTROL_HH

extern "C"
{
#include <Efl.h>
}
#include <Eo.hh>

#include <eo_cxx_interop.hh>

extern "C"
{
#include "efl_control.eo.h"
}


namespace efl {

struct control;

}

/// @cond EO_CXX_ABSTRACT
namespace eo_cxx {

namespace efl {

struct control
{
   int priority_get() const;

   void priority_set(int priority_) const;

   bool suspend_get() const;

   void suspend_set(bool suspend_) const;



   static Eo_Class const* _eo_class()
   {
      return(EFL_CONTROL_INTERFACE);
   }

   operator ::efl::control() const;
   operator ::efl::control&();
   operator ::efl::control const&() const;

   /// @cond LOCAL
   template <typename D>
   struct address_of
   {
      operator ::efl::control*() const { return static_cast<::efl::control*>(static_cast<D const*>(this)->p); }
      operator ::efl::control const*() const { return static_cast<::efl::control const*>(static_cast<D const*>(this)->p); }
   };

   template <typename D>
   struct address_const_of
   {
      operator ::efl::control const*() const { return static_cast<::efl::control const*>(static_cast<D const*>(this)->p); }
   };
   /// @endcond

private:

   /// @internal
   Eo* _concrete_eo_ptr() const
   {
      return static_cast<::efl::eo::concrete const*>(static_cast<void const*>(this))->_eo_ptr();
   }

};

}

}
/// @endcond

namespace efl {

/// @brief Class control
struct control
      : ::efl::eo::concrete
{
   //@{
   /**
      @brief Constructs a new efl::control object.

      Constructs a new efl::control object. If you want this object to be a child
      of another Eo object, use an @ref efl::eo::parent expression, like the example.

      Example:
      @code
      efl::control my_control(efl::eo::parent = parent_object);
      @endcode

      @see control(Eo* eo)
   */
   explicit control(::efl::eo::parent_type _p)
      : control(_ctors_call(_p))
   {}

   explicit control()
      : control(_ctors_call(::efl::eo::parent = nullptr))
   {}
   //@}

   /// @brief Eo Constructor.
   ///
   /// Constructs the object from an Eo* pointer stealing its ownership.
   ///
   /// @param eo The Eo object pointer.
   ///
   explicit control(Eo* eo)
      : ::efl::eo::concrete(eo)
   {}

   /// @brief nullptr_t Constructor.
   ///
   /// Constructs an empty (null) object.
   ///
   explicit control(std::nullptr_t)
      : ::efl::eo::concrete(nullptr)
   {}

   /// @brief Copy Constructor.
   ///
   control(control const& other)
      : control(eo_ref(other._eo_ptr()))
   {}

   ~control() {}

   int priority_get() const;

   void priority_set(int priority_) const;

   bool suspend_get() const;

   void suspend_set(bool suspend_) const;



   static Eo_Class const* _eo_class()
   {
      return(EFL_CONTROL_INTERFACE);
   }

   /// @cond LOCAL
   struct address_of
      : ::eo_cxx::efl::control::address_of<address_of>
      , ::efl::eo::detail::concrete_address_of
   {
      explicit address_of(::efl::control* p)
         : ::efl::eo::detail::concrete_address_of(p)
      {}
   };
   address_of operator&() { return address_of(this); }

   struct address_const_of
      : ::eo_cxx::efl::control::address_const_of<address_const_of>
      , ::efl::eo::detail::concrete_address_const_of
   {
      explicit address_const_of(::efl::control const* p)
         : ::efl::eo::detail::concrete_address_const_of(p)
      {}
   };
   address_const_of operator&() const { return address_const_of(this); }

   /// @endcond

private:

   /// @internal
   static Eo* _ctors_call(::efl::eo::parent_type _p)
   {
      Eo* _ret_eo = eo_add_ref(EFL_CONTROL_INTERFACE, _p._eo_raw);

      return _ret_eo;
   }

   /// @internal
   Eo* _concrete_eo_ptr() const { return _eo_ptr(); }
};

static_assert(sizeof(::efl::control) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<::efl::control>::value, "");

}


#include "efl_control.eo.impl.hh"

#endif // EFL_GENERATED_EFL_CONTROL_HH

