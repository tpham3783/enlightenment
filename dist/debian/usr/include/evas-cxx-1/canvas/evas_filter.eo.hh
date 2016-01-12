#ifndef EFL_GENERATED_EVAS_FILTER_HH
#define EFL_GENERATED_EVAS_FILTER_HH

extern "C"
{
#include <Efl.h>
}
#include <Eo.hh>

#include <eo_cxx_interop.hh>

extern "C"
{
#include "evas_filter.eo.h"
}

#include "efl_gfx_filter.eo.hh"

namespace evas {

struct filter;

}

/// @cond EO_CXX_ABSTRACT
namespace eo_cxx {

namespace evas {

struct filter
{
#ifdef FILTER_PROTECTED
   void constructor() const;
#endif

#ifdef FILTER_PROTECTED
   void destructor() const;
#endif

#ifdef FILTER_PROTECTED
   bool input_alpha() const;
#endif

#ifdef FILTER_PROTECTED
   /// @param filter 
   /// @param drawctx 
   /// @param l 
   /// @param r 
   /// @param t 
   /// @param b 
   /// @param do_async 
   ///
   bool input_render(void * filter_, void * drawctx_, int l_, int r_, int t_, int b_, bool do_async_) const;
#endif

#ifdef FILTER_PROTECTED
   void dirty() const;
#endif

#ifdef FILTER_PROTECTED
   void changed_set(bool val_) const;
#endif

#ifdef FILTER_PROTECTED
   void invalid_set(bool val_) const;
#endif

#ifdef FILTER_PROTECTED
   void * output_buffer_get() const;
#endif



   static Eo_Class const* _eo_class()
   {
      return(EVAS_FILTER_MIXIN);
   }

   operator ::evas::filter() const;
   operator ::evas::filter&();
   operator ::evas::filter const&() const;

   /// @cond LOCAL
   template <typename D>
   struct address_of
   {
      operator ::evas::filter*() const { return static_cast<::evas::filter*>(static_cast<D const*>(this)->p); }
      operator ::evas::filter const*() const { return static_cast<::evas::filter const*>(static_cast<D const*>(this)->p); }
   };

   template <typename D>
   struct address_const_of
   {
      operator ::evas::filter const*() const { return static_cast<::evas::filter const*>(static_cast<D const*>(this)->p); }
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

/// @brief Class filter
struct filter
      : ::efl::eo::concrete
      , EO_CXX_INHERIT(efl::gfx::filter)
{
   //@{
   /**
      @brief Constructs a new evas::filter object.

      Constructs a new evas::filter object. If you want this object to be a child
      of another Eo object, use an @ref efl::eo::parent expression, like the example.

      Example:
      @code
      evas::filter my_filter(efl::eo::parent = parent_object);
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

#ifdef FILTER_PROTECTED
   void constructor() const;
#endif

#ifdef FILTER_PROTECTED
   void destructor() const;
#endif

#ifdef FILTER_PROTECTED
   bool input_alpha() const;
#endif

#ifdef FILTER_PROTECTED
   /// @param filter 
   /// @param drawctx 
   /// @param l 
   /// @param r 
   /// @param t 
   /// @param b 
   /// @param do_async 
   ///
   bool input_render(void * filter_, void * drawctx_, int l_, int r_, int t_, int b_, bool do_async_) const;
#endif

#ifdef FILTER_PROTECTED
   void dirty() const;
#endif

#ifdef FILTER_PROTECTED
   void changed_set(bool val_) const;
#endif

#ifdef FILTER_PROTECTED
   void invalid_set(bool val_) const;
#endif

#ifdef FILTER_PROTECTED
   void * output_buffer_get() const;
#endif



   static Eo_Class const* _eo_class()
   {
      return(EVAS_FILTER_MIXIN);
   }

   /// @cond LOCAL
   struct address_of
      : ::eo_cxx::evas::filter::address_of<address_of>
      , ::eo_cxx::efl::gfx::filter::address_of<address_of>
      , ::efl::eo::detail::concrete_address_of
   {
      explicit address_of(::evas::filter* p)
         : ::efl::eo::detail::concrete_address_of(p)
      {}
   };
   address_of operator&() { return address_of(this); }

   struct address_const_of
      : ::eo_cxx::evas::filter::address_const_of<address_const_of>
      , ::eo_cxx::efl::gfx::filter::address_const_of<address_const_of>
      , ::efl::eo::detail::concrete_address_const_of
   {
      explicit address_const_of(::evas::filter const* p)
         : ::efl::eo::detail::concrete_address_const_of(p)
      {}
   };
   address_const_of operator&() const { return address_const_of(this); }

   /// @endcond

private:

   /// @internal
   static Eo* _ctors_call(::efl::eo::parent_type _p)
   {
      Eo* _ret_eo = eo_add_ref(EVAS_FILTER_MIXIN, _p._eo_raw);

      return _ret_eo;
   }

   /// @internal
   Eo* _concrete_eo_ptr() const { return _eo_ptr(); }
};

static_assert(sizeof(::evas::filter) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<::evas::filter>::value, "");

}


#include "evas_filter.eo.impl.hh"

#endif // EFL_GENERATED_EVAS_FILTER_HH

