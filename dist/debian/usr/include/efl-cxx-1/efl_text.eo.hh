#ifndef EFL_GENERATED_EFL_TEXT_HH
#define EFL_GENERATED_EFL_TEXT_HH

extern "C"
{
#include <Efl.h>
}
#include <Eo.hh>

#include <eo_cxx_interop.hh>

extern "C"
{
#include "efl_text.eo.h"
}

#include <string>

namespace efl {

struct text;

}

/// @cond EO_CXX_ABSTRACT
namespace eo_cxx {

namespace efl {

struct text
{
   ::efl::eina::string_view text_get() const;

   void text_set(::efl::eina::string_view text_) const;



   static Eo_Class const* _eo_class()
   {
      return(EFL_TEXT_INTERFACE);
   }

   operator ::efl::text() const;
   operator ::efl::text&();
   operator ::efl::text const&() const;

   /// @cond LOCAL
   template <typename D>
   struct address_of
   {
      operator ::efl::text*() const { return static_cast<::efl::text*>(static_cast<D const*>(this)->p); }
      operator ::efl::text const*() const { return static_cast<::efl::text const*>(static_cast<D const*>(this)->p); }
   };

   template <typename D>
   struct address_const_of
   {
      operator ::efl::text const*() const { return static_cast<::efl::text const*>(static_cast<D const*>(this)->p); }
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

/// @brief Class text
struct text
      : ::efl::eo::concrete
{
   //@{
   /**
      @brief Constructs a new efl::text object.

      Constructs a new efl::text object. If you want this object to be a child
      of another Eo object, use an @ref efl::eo::parent expression, like the example.

      Example:
      @code
      efl::text my_text(efl::eo::parent = parent_object);
      @endcode

      @see text(Eo* eo)
   */
   explicit text(::efl::eo::parent_type _p)
      : text(_ctors_call(_p))
   {}

   explicit text()
      : text(_ctors_call(::efl::eo::parent = nullptr))
   {}
   //@}

   /// @brief Eo Constructor.
   ///
   /// Constructs the object from an Eo* pointer stealing its ownership.
   ///
   /// @param eo The Eo object pointer.
   ///
   explicit text(Eo* eo)
      : ::efl::eo::concrete(eo)
   {}

   /// @brief nullptr_t Constructor.
   ///
   /// Constructs an empty (null) object.
   ///
   explicit text(std::nullptr_t)
      : ::efl::eo::concrete(nullptr)
   {}

   /// @brief Copy Constructor.
   ///
   text(text const& other)
      : text(eo_ref(other._eo_ptr()))
   {}

   ~text() {}

   ::efl::eina::string_view text_get() const;

   void text_set(::efl::eina::string_view text_) const;



   static Eo_Class const* _eo_class()
   {
      return(EFL_TEXT_INTERFACE);
   }

   /// @cond LOCAL
   struct address_of
      : ::eo_cxx::efl::text::address_of<address_of>
      , ::efl::eo::detail::concrete_address_of
   {
      explicit address_of(::efl::text* p)
         : ::efl::eo::detail::concrete_address_of(p)
      {}
   };
   address_of operator&() { return address_of(this); }

   struct address_const_of
      : ::eo_cxx::efl::text::address_const_of<address_const_of>
      , ::efl::eo::detail::concrete_address_const_of
   {
      explicit address_const_of(::efl::text const* p)
         : ::efl::eo::detail::concrete_address_const_of(p)
      {}
   };
   address_const_of operator&() const { return address_const_of(this); }

   /// @endcond

private:

   /// @internal
   static Eo* _ctors_call(::efl::eo::parent_type _p)
   {
      Eo* _ret_eo = eo_add_ref(EFL_TEXT_INTERFACE, _p._eo_raw);

      return _ret_eo;
   }

   /// @internal
   Eo* _concrete_eo_ptr() const { return _eo_ptr(); }
};

static_assert(sizeof(::efl::text) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<::efl::text>::value, "");

}


#include "efl_text.eo.impl.hh"

#endif // EFL_GENERATED_EFL_TEXT_HH

