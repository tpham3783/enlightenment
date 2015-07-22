#ifndef EFL_GENERATED_EVAS_SIGNAL_INTERFACE_HH
#define EFL_GENERATED_EVAS_SIGNAL_INTERFACE_HH

extern "C"
{
#include <Efl.h>
}
#include <Eo.hh>

#include <eo_cxx_interop.hh>

extern "C"
{
#include "evas_signal_interface.eo.h"
}


namespace evas {

struct signal_interface;

}

/// @cond EO_CXX_ABSTRACT
namespace eo_cxx {

namespace evas {

struct signal_interface
{


   static Eo_Class const* _eo_class()
   {
      return(EVAS_SIGNAL_INTERFACE_INTERFACE);
   }

   operator ::evas::signal_interface() const;
   operator ::evas::signal_interface&();
   operator ::evas::signal_interface const&() const;

   /// @cond LOCAL
   template <typename D>
   struct address_of
   {
      operator ::evas::signal_interface*() const { return static_cast<::evas::signal_interface*>(static_cast<D const*>(this)->p); }
      operator ::evas::signal_interface const*() const { return static_cast<::evas::signal_interface const*>(static_cast<D const*>(this)->p); }
   };

   template <typename D>
   struct address_const_of
   {
      operator ::evas::signal_interface const*() const { return static_cast<::evas::signal_interface const*>(static_cast<D const*>(this)->p); }
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

namespace evas {

/// @brief Class signal_interface
struct signal_interface
      : ::efl::eo::concrete
{
   //@{
   /**
      @brief Constructs a new evas::signal_interface object.

      Constructs a new evas::signal_interface object. If you want this object to be a child
      of another Eo object, use an @ref efl::eo::parent expression, like the example.

      Example:
      @code
      evas::signal_interface my_signal_interface(efl::eo::parent = parent_object);
      @endcode

      @see signal_interface(Eo* eo)
   */
   explicit signal_interface(::efl::eo::parent_type _p)
      : signal_interface(_ctors_call(_p))
   {}

   explicit signal_interface()
      : signal_interface(_ctors_call(::efl::eo::parent = nullptr))
   {}
   //@}

   /// @brief Eo Constructor.
   ///
   /// Constructs the object from an Eo* pointer stealing its ownership.
   ///
   /// @param eo The Eo object pointer.
   ///
   explicit signal_interface(Eo* eo)
      : ::efl::eo::concrete(eo)
   {}

   /// @brief nullptr_t Constructor.
   ///
   /// Constructs an empty (null) object.
   ///
   explicit signal_interface(std::nullptr_t)
      : ::efl::eo::concrete(nullptr)
   {}

   /// @brief Copy Constructor.
   ///
   signal_interface(signal_interface const& other)
      : signal_interface(eo_ref(other._eo_ptr()))
   {}

   ~signal_interface() {}



   static Eo_Class const* _eo_class()
   {
      return(EVAS_SIGNAL_INTERFACE_INTERFACE);
   }

   /// @cond LOCAL
   struct address_of
      : ::eo_cxx::evas::signal_interface::address_of<address_of>
      , ::efl::eo::detail::concrete_address_of
   {
      explicit address_of(::evas::signal_interface* p)
         : ::efl::eo::detail::concrete_address_of(p)
      {}
   };
   address_of operator&() { return address_of(this); }

   struct address_const_of
      : ::eo_cxx::evas::signal_interface::address_const_of<address_const_of>
      , ::efl::eo::detail::concrete_address_const_of
   {
      explicit address_const_of(::evas::signal_interface const* p)
         : ::efl::eo::detail::concrete_address_const_of(p)
      {}
   };
   address_const_of operator&() const { return address_const_of(this); }

   /// @endcond

private:

   /// @internal
   static Eo* _ctors_call(::efl::eo::parent_type _p)
   {
      Eo* _ret_eo = eo_add_ref(EVAS_SIGNAL_INTERFACE_INTERFACE, _p._eo_raw);

      return _ret_eo;
   }

   /// @internal
   Eo* _concrete_eo_ptr() const { return _eo_ptr(); }
};

static_assert(sizeof(::evas::signal_interface) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<::evas::signal_interface>::value, "");

}


#include "evas_signal_interface.eo.impl.hh"

#endif // EFL_GENERATED_EVAS_SIGNAL_INTERFACE_HH

