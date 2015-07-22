#ifndef EFL_GENERATED_EFL_TEXT_PROPERTIES_HH
#define EFL_GENERATED_EFL_TEXT_PROPERTIES_HH

extern "C"
{
#include <Efl.h>
}
#include <Eo.hh>

#include <eo_cxx_interop.hh>

extern "C"
{
#include "efl_text_properties.eo.h"
}

#include <string>

namespace efl {

struct text_properties;

}

/// @cond EO_CXX_ABSTRACT
namespace eo_cxx {

namespace efl {

struct text_properties
{
   void font_get(const char ** font_, Efl_Font_Size* size_) const;

   void font_set(::efl::eina::string_view font_, Efl_Font_Size size_) const;

   ::efl::eina::string_view font_source_get() const;

   void font_source_set(::efl::eina::string_view font_source_) const;



   static Eo_Class const* _eo_class()
   {
      return(EFL_TEXT_PROPERTIES_INTERFACE);
   }

   operator ::efl::text_properties() const;
   operator ::efl::text_properties&();
   operator ::efl::text_properties const&() const;

   /// @cond LOCAL
   template <typename D>
   struct address_of
   {
      operator ::efl::text_properties*() const { return static_cast<::efl::text_properties*>(static_cast<D const*>(this)->p); }
      operator ::efl::text_properties const*() const { return static_cast<::efl::text_properties const*>(static_cast<D const*>(this)->p); }
   };

   template <typename D>
   struct address_const_of
   {
      operator ::efl::text_properties const*() const { return static_cast<::efl::text_properties const*>(static_cast<D const*>(this)->p); }
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

/// @brief Class text_properties
struct text_properties
      : ::efl::eo::concrete
{
   //@{
   /**
      @brief Constructs a new efl::text_properties object.

      Constructs a new efl::text_properties object. If you want this object to be a child
      of another Eo object, use an @ref efl::eo::parent expression, like the example.

      Example:
      @code
      efl::text_properties my_text_properties(efl::eo::parent = parent_object);
      @endcode

      @see text_properties(Eo* eo)
   */
   explicit text_properties(::efl::eo::parent_type _p)
      : text_properties(_ctors_call(_p))
   {}

   explicit text_properties()
      : text_properties(_ctors_call(::efl::eo::parent = nullptr))
   {}
   //@}

   /// @brief Eo Constructor.
   ///
   /// Constructs the object from an Eo* pointer stealing its ownership.
   ///
   /// @param eo The Eo object pointer.
   ///
   explicit text_properties(Eo* eo)
      : ::efl::eo::concrete(eo)
   {}

   /// @brief nullptr_t Constructor.
   ///
   /// Constructs an empty (null) object.
   ///
   explicit text_properties(std::nullptr_t)
      : ::efl::eo::concrete(nullptr)
   {}

   /// @brief Copy Constructor.
   ///
   text_properties(text_properties const& other)
      : text_properties(eo_ref(other._eo_ptr()))
   {}

   ~text_properties() {}

   void font_get(const char ** font_, Efl_Font_Size* size_) const;

   void font_set(::efl::eina::string_view font_, Efl_Font_Size size_) const;

   ::efl::eina::string_view font_source_get() const;

   void font_source_set(::efl::eina::string_view font_source_) const;



   static Eo_Class const* _eo_class()
   {
      return(EFL_TEXT_PROPERTIES_INTERFACE);
   }

   /// @cond LOCAL
   struct address_of
      : ::eo_cxx::efl::text_properties::address_of<address_of>
      , ::efl::eo::detail::concrete_address_of
   {
      explicit address_of(::efl::text_properties* p)
         : ::efl::eo::detail::concrete_address_of(p)
      {}
   };
   address_of operator&() { return address_of(this); }

   struct address_const_of
      : ::eo_cxx::efl::text_properties::address_const_of<address_const_of>
      , ::efl::eo::detail::concrete_address_const_of
   {
      explicit address_const_of(::efl::text_properties const* p)
         : ::efl::eo::detail::concrete_address_const_of(p)
      {}
   };
   address_const_of operator&() const { return address_const_of(this); }

   /// @endcond

private:

   /// @internal
   static Eo* _ctors_call(::efl::eo::parent_type _p)
   {
      Eo* _ret_eo = eo_add_ref(EFL_TEXT_PROPERTIES_INTERFACE, _p._eo_raw);

      return _ret_eo;
   }

   /// @internal
   Eo* _concrete_eo_ptr() const { return _eo_ptr(); }
};

static_assert(sizeof(::efl::text_properties) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<::efl::text_properties>::value, "");

}


#include "efl_text_properties.eo.impl.hh"

#endif // EFL_GENERATED_EFL_TEXT_PROPERTIES_HH

