#ifndef EFL_GENERATED_EVAS_OUT_HH
#define EFL_GENERATED_EVAS_OUT_HH

extern "C"
{
#include <Efl.h>
}
#include <Eo.hh>

#include <eo_cxx_interop.hh>

extern "C"
{
#include "evas_out.eo.h"
}

#include "eo_base.eo.hh"

namespace evas {

struct out;

}

/// @cond EO_CXX_ABSTRACT
namespace eo_cxx {

namespace evas {

struct out
{
   void view_get(Evas_Coord* x_, Evas_Coord* y_, Evas_Coord* w_, Evas_Coord* h_) const;

   void view_set(Evas_Coord x_, Evas_Coord y_, Evas_Coord w_, Evas_Coord h_) const;

   Evas_Engine_Info * engine_info_get() const;

   bool engine_info_set(Evas_Engine_Info * info_) const;



   static Eo_Class const* _eo_class()
   {
      return(EVAS_OUT_CLASS);
   }

   operator ::evas::out() const;
   operator ::evas::out&();
   operator ::evas::out const&() const;

   /// @cond LOCAL
   template <typename D>
   struct address_of
   {
      operator ::evas::out*() const { return static_cast<::evas::out*>(static_cast<D const*>(this)->p); }
      operator ::evas::out const*() const { return static_cast<::evas::out const*>(static_cast<D const*>(this)->p); }
   };

   template <typename D>
   struct address_const_of
   {
      operator ::evas::out const*() const { return static_cast<::evas::out const*>(static_cast<D const*>(this)->p); }
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

/// @brief Class out
struct out
      : ::efl::eo::concrete
      , EO_CXX_INHERIT(eo::base)
{
   //@{
   /**
      @brief Constructs a new evas::out object.

      Constructs a new evas::out object. If you want this object to be a child
      of another Eo object, use an @ref efl::eo::parent expression, like the example.

      Example:
      @code
      evas::out my_out(efl::eo::parent = parent_object);
      @endcode

      @see out(Eo* eo)
   */
   explicit out(::efl::eo::parent_type _p)
      : out(_ctors_call(_p))
   {}

   explicit out()
      : out(_ctors_call(::efl::eo::parent = nullptr))
   {}
   //@}

   /// @brief Eo Constructor.
   ///
   /// Constructs the object from an Eo* pointer stealing its ownership.
   ///
   /// @param eo The Eo object pointer.
   ///
   explicit out(Eo* eo)
      : ::efl::eo::concrete(eo)
   {}

   /// @brief nullptr_t Constructor.
   ///
   /// Constructs an empty (null) object.
   ///
   explicit out(std::nullptr_t)
      : ::efl::eo::concrete(nullptr)
   {}

   /// @brief Copy Constructor.
   ///
   out(out const& other)
      : out(eo_ref(other._eo_ptr()))
   {}

   ~out() {}

   void view_get(Evas_Coord* x_, Evas_Coord* y_, Evas_Coord* w_, Evas_Coord* h_) const;

   void view_set(Evas_Coord x_, Evas_Coord y_, Evas_Coord w_, Evas_Coord h_) const;

   Evas_Engine_Info * engine_info_get() const;

   bool engine_info_set(Evas_Engine_Info * info_) const;

   template <typename F>
   ::efl::eo::signal_connection
   callback_callback_add_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EO_BASE_EVENT_CALLBACK_ADD, priority_,
            &::efl::eo::_detail::event_callback<::evas::out, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::out, function_type>,
         EO_BASE_EVENT_CALLBACK_ADD );
   }

   template <typename T>
   void
   callback_callback_add_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EO_BASE_EVENT_CALLBACK_ADD, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_callback_del_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EO_BASE_EVENT_CALLBACK_DEL, priority_,
            &::efl::eo::_detail::event_callback<::evas::out, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::out, function_type>,
         EO_BASE_EVENT_CALLBACK_DEL );
   }

   template <typename T>
   void
   callback_callback_del_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EO_BASE_EVENT_CALLBACK_DEL, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_del_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EO_BASE_EVENT_DEL, priority_,
            &::efl::eo::_detail::event_callback<::evas::out, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::out, function_type>,
         EO_BASE_EVENT_DEL );
   }

   template <typename T>
   void
   callback_del_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EO_BASE_EVENT_DEL, info));
   }



   static Eo_Class const* _eo_class()
   {
      return(EVAS_OUT_CLASS);
   }

   /// @cond LOCAL
   struct address_of
      : ::eo_cxx::evas::out::address_of<address_of>
      , ::eo_cxx::eo::base::address_of<address_of>
      , ::efl::eo::detail::concrete_address_of
   {
      explicit address_of(::evas::out* p)
         : ::efl::eo::detail::concrete_address_of(p)
      {}
   };
   address_of operator&() { return address_of(this); }

   struct address_const_of
      : ::eo_cxx::evas::out::address_const_of<address_const_of>
      , ::eo_cxx::eo::base::address_const_of<address_const_of>
      , ::efl::eo::detail::concrete_address_const_of
   {
      explicit address_const_of(::evas::out const* p)
         : ::efl::eo::detail::concrete_address_const_of(p)
      {}
   };
   address_const_of operator&() const { return address_const_of(this); }

   /// @endcond

private:

   /// @internal
   static Eo* _ctors_call(::efl::eo::parent_type _p)
   {
      Eo* _ret_eo = eo_add_ref(EVAS_OUT_CLASS, _p._eo_raw);

      return _ret_eo;
   }

   /// @internal
   Eo* _concrete_eo_ptr() const { return _eo_ptr(); }
};

static_assert(sizeof(::evas::out) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<::evas::out>::value, "");

}


#include "evas_out.eo.impl.hh"

#endif // EFL_GENERATED_EVAS_OUT_HH

