#ifndef EFL_GENERATED_EFL_GFX_VIEW_HH
#define EFL_GENERATED_EFL_GFX_VIEW_HH

extern "C"
{
#include <Efl.h>
}
#include <Eo.hh>

#include <eo_cxx_interop.hh>

extern "C"
{
#include "efl_gfx_view.eo.h"
}


namespace efl { namespace gfx {

struct view;

} }

/// @cond EO_CXX_ABSTRACT
namespace eo_cxx {

namespace efl { namespace gfx {

struct view
{
   void size_get(int* w_, int* h_) const;

   void size_set(int w_, int h_) const;



   static Eo_Class const* _eo_class()
   {
      return(EFL_GFX_VIEW_INTERFACE);
   }

   operator ::efl::gfx::view() const;
   operator ::efl::gfx::view&();
   operator ::efl::gfx::view const&() const;

   /// @cond LOCAL
   template <typename D>
   struct address_of
   {
      operator ::efl::gfx::view*() const { return static_cast<::efl::gfx::view*>(static_cast<D const*>(this)->p); }
      operator ::efl::gfx::view const*() const { return static_cast<::efl::gfx::view const*>(static_cast<D const*>(this)->p); }
   };

   template <typename D>
   struct address_const_of
   {
      operator ::efl::gfx::view const*() const { return static_cast<::efl::gfx::view const*>(static_cast<D const*>(this)->p); }
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

/// @brief Class view
struct view
      : ::efl::eo::concrete
{
   //@{
   /**
      @brief Constructs a new efl::gfx::view object.

      Constructs a new efl::gfx::view object. If you want this object to be a child
      of another Eo object, use an @ref efl::eo::parent expression, like the example.

      Example:
      @code
      efl::gfx::view my_view(efl::eo::parent = parent_object);
      @endcode

      @see view(Eo* eo)
   */
   explicit view(::efl::eo::parent_type _p)
      : view(_ctors_call(_p))
   {}

   explicit view()
      : view(_ctors_call(::efl::eo::parent = nullptr))
   {}
   //@}

   /// @brief Eo Constructor.
   ///
   /// Constructs the object from an Eo* pointer stealing its ownership.
   ///
   /// @param eo The Eo object pointer.
   ///
   explicit view(Eo* eo)
      : ::efl::eo::concrete(eo)
   {}

   /// @brief nullptr_t Constructor.
   ///
   /// Constructs an empty (null) object.
   ///
   explicit view(std::nullptr_t)
      : ::efl::eo::concrete(nullptr)
   {}

   /// @brief Copy Constructor.
   ///
   view(view const& other)
      : view(eo_ref(other._eo_ptr()))
   {}

   ~view() {}

   void size_get(int* w_, int* h_) const;

   void size_set(int w_, int h_) const;



   static Eo_Class const* _eo_class()
   {
      return(EFL_GFX_VIEW_INTERFACE);
   }

   /// @cond LOCAL
   struct address_of
      : ::eo_cxx::efl::gfx::view::address_of<address_of>
      , ::efl::eo::detail::concrete_address_of
   {
      explicit address_of(::efl::gfx::view* p)
         : ::efl::eo::detail::concrete_address_of(p)
      {}
   };
   address_of operator&() { return address_of(this); }

   struct address_const_of
      : ::eo_cxx::efl::gfx::view::address_const_of<address_const_of>
      , ::efl::eo::detail::concrete_address_const_of
   {
      explicit address_const_of(::efl::gfx::view const* p)
         : ::efl::eo::detail::concrete_address_const_of(p)
      {}
   };
   address_const_of operator&() const { return address_const_of(this); }

   /// @endcond

private:

   /// @internal
   static Eo* _ctors_call(::efl::eo::parent_type _p)
   {
      Eo* _ret_eo = eo_add_ref(EFL_GFX_VIEW_INTERFACE, _p._eo_raw);

      return _ret_eo;
   }

   /// @internal
   Eo* _concrete_eo_ptr() const { return _eo_ptr(); }
};

static_assert(sizeof(::efl::gfx::view) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<::efl::gfx::view>::value, "");

} }


#include "efl_gfx_view.eo.impl.hh"

#endif // EFL_GENERATED_EFL_GFX_VIEW_HH

