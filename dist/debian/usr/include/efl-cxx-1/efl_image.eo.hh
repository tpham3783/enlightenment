#ifndef EFL_GENERATED_EFL_IMAGE_HH
#define EFL_GENERATED_EFL_IMAGE_HH

extern "C"
{
#include <Efl.h>
}
#include <Eo.hh>

#include <eo_cxx_interop.hh>

extern "C"
{
#include "efl_image.eo.h"
}


namespace efl {

struct image;

}

/// @cond EO_CXX_ABSTRACT
namespace eo_cxx {

namespace efl {

struct image
{
   bool animated_get() const;

   void load_size_get(int* w_, int* h_) const;

   void load_size_set(int w_, int h_) const;

   bool smooth_scale_get() const;

   void smooth_scale_set(bool smooth_scale_) const;

   double ratio_get() const;



   static Eo_Class const* _eo_class()
   {
      return(EFL_IMAGE_INTERFACE);
   }

   operator ::efl::image() const;
   operator ::efl::image&();
   operator ::efl::image const&() const;

   /// @cond LOCAL
   template <typename D>
   struct address_of
   {
      operator ::efl::image*() const { return static_cast<::efl::image*>(static_cast<D const*>(this)->p); }
      operator ::efl::image const*() const { return static_cast<::efl::image const*>(static_cast<D const*>(this)->p); }
   };

   template <typename D>
   struct address_const_of
   {
      operator ::efl::image const*() const { return static_cast<::efl::image const*>(static_cast<D const*>(this)->p); }
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

/// @brief Class image
struct image
      : ::efl::eo::concrete
{
   //@{
   /**
      @brief Constructs a new efl::image object.

      Constructs a new efl::image object. If you want this object to be a child
      of another Eo object, use an @ref efl::eo::parent expression, like the example.

      Example:
      @code
      efl::image my_image(efl::eo::parent = parent_object);
      @endcode

      @see image(Eo* eo)
   */
   explicit image(::efl::eo::parent_type _p)
      : image(_ctors_call(_p))
   {}

   explicit image()
      : image(_ctors_call(::efl::eo::parent = nullptr))
   {}
   //@}

   /// @brief Eo Constructor.
   ///
   /// Constructs the object from an Eo* pointer stealing its ownership.
   ///
   /// @param eo The Eo object pointer.
   ///
   explicit image(Eo* eo)
      : ::efl::eo::concrete(eo)
   {}

   /// @brief nullptr_t Constructor.
   ///
   /// Constructs an empty (null) object.
   ///
   explicit image(std::nullptr_t)
      : ::efl::eo::concrete(nullptr)
   {}

   /// @brief Copy Constructor.
   ///
   image(image const& other)
      : image(eo_ref(other._eo_ptr()))
   {}

   ~image() {}

   bool animated_get() const;

   void load_size_get(int* w_, int* h_) const;

   void load_size_set(int w_, int h_) const;

   bool smooth_scale_get() const;

   void smooth_scale_set(bool smooth_scale_) const;

   double ratio_get() const;



   static Eo_Class const* _eo_class()
   {
      return(EFL_IMAGE_INTERFACE);
   }

   /// @cond LOCAL
   struct address_of
      : ::eo_cxx::efl::image::address_of<address_of>
      , ::efl::eo::detail::concrete_address_of
   {
      explicit address_of(::efl::image* p)
         : ::efl::eo::detail::concrete_address_of(p)
      {}
   };
   address_of operator&() { return address_of(this); }

   struct address_const_of
      : ::eo_cxx::efl::image::address_const_of<address_const_of>
      , ::efl::eo::detail::concrete_address_const_of
   {
      explicit address_const_of(::efl::image const* p)
         : ::efl::eo::detail::concrete_address_const_of(p)
      {}
   };
   address_const_of operator&() const { return address_const_of(this); }

   /// @endcond

private:

   /// @internal
   static Eo* _ctors_call(::efl::eo::parent_type _p)
   {
      Eo* _ret_eo = eo_add_ref(EFL_IMAGE_INTERFACE, _p._eo_raw);

      return _ret_eo;
   }

   /// @internal
   Eo* _concrete_eo_ptr() const { return _eo_ptr(); }
};

static_assert(sizeof(::efl::image) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<::efl::image>::value, "");

}


#include "efl_image.eo.impl.hh"

#endif // EFL_GENERATED_EFL_IMAGE_HH

