#ifndef EFL_GENERATED_EFL_GFX_FILTER_HH
#define EFL_GENERATED_EFL_GFX_FILTER_HH

extern "C"
{
#include <Efl.h>
}
#include <Eo.hh>

#include <eo_cxx_interop.hh>

extern "C"
{
#include "efl_gfx_filter.eo.h"
}

#include <efl_gfx_base.eo.hh>
#include <string>

namespace efl { namespace gfx {

struct filter;

} }

/// @cond EO_CXX_ABSTRACT
namespace eo_cxx {

namespace efl { namespace gfx {

struct filter
{
#ifdef FILTER_BETA
   /// @param name 
   /// @param source 
   ///
   void source_set(::efl::eina::string_view name_, ::efl::gfx::base source_) const;
#endif

#ifdef FILTER_BETA
   /// @param name 
   /// @param[out] source 
   ///
   void source_get(::efl::eina::string_view name_, ::efl::gfx::base* source_) const;
#endif

#ifdef FILTER_BETA
   /// @param name 
   /// @param value 
   /// @param execute 
   ///
   void data_set(::efl::eina::string_view name_, ::efl::eina::string_view value_, bool execute_) const;
#endif

#ifdef FILTER_BETA
   void program_get(const char ** code_, const char ** name_) const;
#endif

#ifdef FILTER_BETA
   void program_set(::efl::eina::string_view code_, ::efl::eina::string_view name_) const;
#endif

#ifdef FILTER_BETA
   void state_set(::efl::eina::string_view cur_state_, double cur_val_, ::efl::eina::string_view next_state_, double next_val_, double pos_) const;
#endif

#ifdef FILTER_BETA
   void padding_get(int* l_, int* r_, int* t_, int* b_) const;
#endif



   static Eo_Class const* _eo_class()
   {
      return(EFL_GFX_FILTER_INTERFACE);
   }

   operator ::efl::gfx::filter() const;
   operator ::efl::gfx::filter&();
   operator ::efl::gfx::filter const&() const;

   /// @cond LOCAL
   template <typename D>
   struct address_of
   {
      operator ::efl::gfx::filter*() const { return static_cast<::efl::gfx::filter*>(static_cast<D const*>(this)->p); }
      operator ::efl::gfx::filter const*() const { return static_cast<::efl::gfx::filter const*>(static_cast<D const*>(this)->p); }
   };

   template <typename D>
   struct address_const_of
   {
      operator ::efl::gfx::filter const*() const { return static_cast<::efl::gfx::filter const*>(static_cast<D const*>(this)->p); }
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

/// @brief Class filter
struct filter
      : ::efl::eo::concrete
{
   //@{
   /**
      @brief Constructs a new efl::gfx::filter object.

      Constructs a new efl::gfx::filter object. If you want this object to be a child
      of another Eo object, use an @ref efl::eo::parent expression, like the example.

      Example:
      @code
      efl::gfx::filter my_filter(efl::eo::parent = parent_object);
      @endcode

      @see filter(Eo* eo)
   */
   explicit filter(::efl::eo::parent_type _p)
      : filter(_ctors_call(_p))
   {}

   explicit filter()
      : filter(_ctors_call(::efl::eo::parent = nullptr))
   {}
   //@}

   /// @brief Eo Constructor.
   ///
   /// Constructs the object from an Eo* pointer stealing its ownership.
   ///
   /// @param eo The Eo object pointer.
   ///
   explicit filter(Eo* eo)
      : ::efl::eo::concrete(eo)
   {}

   /// @brief nullptr_t Constructor.
   ///
   /// Constructs an empty (null) object.
   ///
   explicit filter(std::nullptr_t)
      : ::efl::eo::concrete(nullptr)
   {}

   /// @brief Copy Constructor.
   ///
   filter(filter const& other)
      : filter(eo_ref(other._eo_ptr()))
   {}

   ~filter() {}

#ifdef FILTER_BETA
   /// @param name 
   /// @param source 
   ///
   void source_set(::efl::eina::string_view name_, ::efl::gfx::base source_) const;
#endif

#ifdef FILTER_BETA
   /// @param name 
   /// @param[out] source 
   ///
   void source_get(::efl::eina::string_view name_, ::efl::gfx::base* source_) const;
#endif

#ifdef FILTER_BETA
   /// @param name 
   /// @param value 
   /// @param execute 
   ///
   void data_set(::efl::eina::string_view name_, ::efl::eina::string_view value_, bool execute_) const;
#endif

#ifdef FILTER_BETA
   void program_get(const char ** code_, const char ** name_) const;
#endif

#ifdef FILTER_BETA
   void program_set(::efl::eina::string_view code_, ::efl::eina::string_view name_) const;
#endif

#ifdef FILTER_BETA
   void state_set(::efl::eina::string_view cur_state_, double cur_val_, ::efl::eina::string_view next_state_, double next_val_, double pos_) const;
#endif

#ifdef FILTER_BETA
   void padding_get(int* l_, int* r_, int* t_, int* b_) const;
#endif



   static Eo_Class const* _eo_class()
   {
      return(EFL_GFX_FILTER_INTERFACE);
   }

   /// @cond LOCAL
   struct address_of
      : ::eo_cxx::efl::gfx::filter::address_of<address_of>
      , ::efl::eo::detail::concrete_address_of
   {
      explicit address_of(::efl::gfx::filter* p)
         : ::efl::eo::detail::concrete_address_of(p)
      {}
   };
   address_of operator&() { return address_of(this); }

   struct address_const_of
      : ::eo_cxx::efl::gfx::filter::address_const_of<address_const_of>
      , ::efl::eo::detail::concrete_address_const_of
   {
      explicit address_const_of(::efl::gfx::filter const* p)
         : ::efl::eo::detail::concrete_address_const_of(p)
      {}
   };
   address_const_of operator&() const { return address_const_of(this); }

   /// @endcond

private:

   /// @internal
   static Eo* _ctors_call(::efl::eo::parent_type _p)
   {
      Eo* _ret_eo = eo_add_ref(EFL_GFX_FILTER_INTERFACE, _p._eo_raw);

      return _ret_eo;
   }

   /// @internal
   Eo* _concrete_eo_ptr() const { return _eo_ptr(); }
};

static_assert(sizeof(::efl::gfx::filter) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<::efl::gfx::filter>::value, "");

} }


#include "efl_gfx_filter.eo.impl.hh"

#endif // EFL_GENERATED_EFL_GFX_FILTER_HH

