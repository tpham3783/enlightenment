#ifndef EFL_GENERATED_EFL_GFX_BASE_HH
#define EFL_GENERATED_EFL_GFX_BASE_HH

extern "C"
{
#include <Efl.h>
}
#include <Eo.hh>

#include <eo_cxx_interop.hh>

extern "C"
{
#include "efl_gfx_base.eo.h"
}

#include <string>

namespace efl { namespace gfx {

struct base;

} }

/// @cond EO_CXX_ABSTRACT
namespace eo_cxx {

namespace efl { namespace gfx {

struct base
{
   void position_get(int* x_, int* y_) const;

   void position_set(int x_, int y_) const;

   void size_get(int* w_, int* h_) const;

   void size_set(int w_, int h_) const;

   void color_get(int* r_, int* g_, int* b_, int* a_) const;

   void color_set(int r_, int g_, int b_, int a_) const;

   bool color_part_get(::efl::eina::string_view part_, int* r_, int* g_, int* b_, int* a_) const;

   bool color_part_set(::efl::eina::string_view part_, int r_, int g_, int b_, int a_) const;

   bool visible_get() const;

   void visible_set(bool v_) const;



   static Eo_Class const* _eo_class()
   {
      return(EFL_GFX_BASE_INTERFACE);
   }

   operator ::efl::gfx::base() const;
   operator ::efl::gfx::base&();
   operator ::efl::gfx::base const&() const;

   /// @cond LOCAL
   template <typename D>
   struct address_of
   {
      operator ::efl::gfx::base*() const { return static_cast<::efl::gfx::base*>(static_cast<D const*>(this)->p); }
      operator ::efl::gfx::base const*() const { return static_cast<::efl::gfx::base const*>(static_cast<D const*>(this)->p); }
   };

   template <typename D>
   struct address_const_of
   {
      operator ::efl::gfx::base const*() const { return static_cast<::efl::gfx::base const*>(static_cast<D const*>(this)->p); }
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

/// @brief Class base
struct base
      : ::efl::eo::concrete
{
   //@{
   /**
      @brief Constructs a new efl::gfx::base object.

      Constructs a new efl::gfx::base object. If you want this object to be a child
      of another Eo object, use an @ref efl::eo::parent expression, like the example.

      Example:
      @code
      efl::gfx::base my_base(efl::eo::parent = parent_object);
      @endcode

      @see base(Eo* eo)
   */
   explicit base(::efl::eo::parent_type _p)
      : base(_ctors_call(_p))
   {}

   explicit base()
      : base(_ctors_call(::efl::eo::parent = nullptr))
   {}
   //@}

   /// @brief Eo Constructor.
   ///
   /// Constructs the object from an Eo* pointer stealing its ownership.
   ///
   /// @param eo The Eo object pointer.
   ///
   explicit base(Eo* eo)
      : ::efl::eo::concrete(eo)
   {}

   /// @brief nullptr_t Constructor.
   ///
   /// Constructs an empty (null) object.
   ///
   explicit base(std::nullptr_t)
      : ::efl::eo::concrete(nullptr)
   {}

   /// @brief Copy Constructor.
   ///
   base(base const& other)
      : base(eo_ref(other._eo_ptr()))
   {}

   ~base() {}

   void position_get(int* x_, int* y_) const;

   void position_set(int x_, int y_) const;

   void size_get(int* w_, int* h_) const;

   void size_set(int w_, int h_) const;

   void color_get(int* r_, int* g_, int* b_, int* a_) const;

   void color_set(int r_, int g_, int b_, int a_) const;

   bool color_part_get(::efl::eina::string_view part_, int* r_, int* g_, int* b_, int* a_) const;

   bool color_part_set(::efl::eina::string_view part_, int r_, int g_, int b_, int a_) const;

   bool visible_get() const;

   void visible_set(bool v_) const;



   static Eo_Class const* _eo_class()
   {
      return(EFL_GFX_BASE_INTERFACE);
   }

   /// @cond LOCAL
   struct address_of
      : ::eo_cxx::efl::gfx::base::address_of<address_of>
      , ::efl::eo::detail::concrete_address_of
   {
      explicit address_of(::efl::gfx::base* p)
         : ::efl::eo::detail::concrete_address_of(p)
      {}
   };
   address_of operator&() { return address_of(this); }

   struct address_const_of
      : ::eo_cxx::efl::gfx::base::address_const_of<address_const_of>
      , ::efl::eo::detail::concrete_address_const_of
   {
      explicit address_const_of(::efl::gfx::base const* p)
         : ::efl::eo::detail::concrete_address_const_of(p)
      {}
   };
   address_const_of operator&() const { return address_const_of(this); }

   /// @endcond

private:

   /// @internal
   static Eo* _ctors_call(::efl::eo::parent_type _p)
   {
      Eo* _ret_eo = eo_add_ref(EFL_GFX_BASE_INTERFACE, _p._eo_raw);

      return _ret_eo;
   }

   /// @internal
   Eo* _concrete_eo_ptr() const { return _eo_ptr(); }
};

static_assert(sizeof(::efl::gfx::base) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<::efl::gfx::base>::value, "");

} }


#include "efl_gfx_base.eo.impl.hh"

#endif // EFL_GENERATED_EFL_GFX_BASE_HH

