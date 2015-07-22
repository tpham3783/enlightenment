#ifndef EFL_GENERATED_EO_ABSTRACT_CLASS_HH
#define EFL_GENERATED_EO_ABSTRACT_CLASS_HH

extern "C"
{
#include <Efl.h>
}
#include <Eo.hh>

#include <eo_cxx_interop.hh>

extern "C"
{
#include "eo_abstract_class.eo.h"
}


namespace eo {

struct abstract_class;

}

/// @cond EO_CXX_ABSTRACT
namespace eo_cxx {

namespace eo {

struct abstract_class
{


   static Eo_Class const* _eo_class()
   {
      return(EO_ABSTRACT_CLASS_CLASS);
   }

   operator ::eo::abstract_class() const;
   operator ::eo::abstract_class&();
   operator ::eo::abstract_class const&() const;

   /// @cond LOCAL
   template <typename D>
   struct address_of
   {
      operator ::eo::abstract_class*() const { return static_cast<::eo::abstract_class*>(static_cast<D const*>(this)->p); }
      operator ::eo::abstract_class const*() const { return static_cast<::eo::abstract_class const*>(static_cast<D const*>(this)->p); }
   };

   template <typename D>
   struct address_const_of
   {
      operator ::eo::abstract_class const*() const { return static_cast<::eo::abstract_class const*>(static_cast<D const*>(this)->p); }
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

namespace eo {

/// @brief Class abstract_class
struct abstract_class
      : ::efl::eo::concrete
{
   //@{
   /**
      @brief Constructs a new eo::abstract_class object.

      Constructs a new eo::abstract_class object. If you want this object to be a child
      of another Eo object, use an @ref efl::eo::parent expression, like the example.

      Example:
      @code
      eo::abstract_class my_abstract_class(efl::eo::parent = parent_object);
      @endcode

      @see abstract_class(Eo* eo)
   */
   explicit abstract_class(::efl::eo::parent_type _p)
      : abstract_class(_ctors_call(_p))
   {}

   explicit abstract_class()
      : abstract_class(_ctors_call(::efl::eo::parent = nullptr))
   {}
   //@}

   /// @brief Eo Constructor.
   ///
   /// Constructs the object from an Eo* pointer stealing its ownership.
   ///
   /// @param eo The Eo object pointer.
   ///
   explicit abstract_class(Eo* eo)
      : ::efl::eo::concrete(eo)
   {}

   /// @brief nullptr_t Constructor.
   ///
   /// Constructs an empty (null) object.
   ///
   explicit abstract_class(std::nullptr_t)
      : ::efl::eo::concrete(nullptr)
   {}

   /// @brief Copy Constructor.
   ///
   abstract_class(abstract_class const& other)
      : abstract_class(eo_ref(other._eo_ptr()))
   {}

   ~abstract_class() {}



   static Eo_Class const* _eo_class()
   {
      return(EO_ABSTRACT_CLASS_CLASS);
   }

   /// @cond LOCAL
   struct address_of
      : ::eo_cxx::eo::abstract_class::address_of<address_of>
      , ::efl::eo::detail::concrete_address_of
   {
      explicit address_of(::eo::abstract_class* p)
         : ::efl::eo::detail::concrete_address_of(p)
      {}
   };
   address_of operator&() { return address_of(this); }

   struct address_const_of
      : ::eo_cxx::eo::abstract_class::address_const_of<address_const_of>
      , ::efl::eo::detail::concrete_address_const_of
   {
      explicit address_const_of(::eo::abstract_class const* p)
         : ::efl::eo::detail::concrete_address_const_of(p)
      {}
   };
   address_const_of operator&() const { return address_const_of(this); }

   /// @endcond

private:

   /// @internal
   static Eo* _ctors_call(::efl::eo::parent_type _p)
   {
      Eo* _ret_eo = eo_add_ref(EO_ABSTRACT_CLASS_CLASS, _p._eo_raw);

      return _ret_eo;
   }

   /// @internal
   Eo* _concrete_eo_ptr() const { return _eo_ptr(); }
};

static_assert(sizeof(::eo::abstract_class) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<::eo::abstract_class>::value, "");

}


#include "eo_abstract_class.eo.impl.hh"

#endif // EFL_GENERATED_EO_ABSTRACT_CLASS_HH

