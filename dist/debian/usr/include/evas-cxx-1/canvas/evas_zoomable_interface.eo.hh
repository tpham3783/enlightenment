#ifndef EFL_GENERATED_EVAS_ZOOMABLE_INTERFACE_HH
#define EFL_GENERATED_EVAS_ZOOMABLE_INTERFACE_HH

extern "C"
{
#include <Efl.h>
}
#include <Eo.hh>

#include <eo_cxx_interop.hh>

extern "C"
{
#include "evas_zoomable_interface.eo.h"
}

#include "evas_signal_interface.eo.hh"

namespace evas {

struct zoomable_interface;

}

/// @cond EO_CXX_ABSTRACT
namespace eo_cxx {

namespace evas {

struct zoomable_interface
{
   template <typename F>
   ::efl::eo::signal_connection
   callback_zoom_start_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_ZOOMABLE_INTERFACE_EVENT_ZOOM_START, priority_,
            &::efl::eo::_detail::event_callback<::evas::zoomable_interface, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::zoomable_interface, function_type>,
         EVAS_ZOOMABLE_INTERFACE_EVENT_ZOOM_START );
   }

   template <typename T>
   void
   callback_zoom_start_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EVAS_ZOOMABLE_INTERFACE_EVENT_ZOOM_START, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_zoom_stop_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_ZOOMABLE_INTERFACE_EVENT_ZOOM_STOP, priority_,
            &::efl::eo::_detail::event_callback<::evas::zoomable_interface, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::zoomable_interface, function_type>,
         EVAS_ZOOMABLE_INTERFACE_EVENT_ZOOM_STOP );
   }

   template <typename T>
   void
   callback_zoom_stop_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EVAS_ZOOMABLE_INTERFACE_EVENT_ZOOM_STOP, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_zoom_change_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_ZOOMABLE_INTERFACE_EVENT_ZOOM_CHANGE, priority_,
            &::efl::eo::_detail::event_callback<::evas::zoomable_interface, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::zoomable_interface, function_type>,
         EVAS_ZOOMABLE_INTERFACE_EVENT_ZOOM_CHANGE );
   }

   template <typename T>
   void
   callback_zoom_change_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EVAS_ZOOMABLE_INTERFACE_EVENT_ZOOM_CHANGE, info));
   }



   static Eo_Class const* _eo_class()
   {
      return(EVAS_ZOOMABLE_INTERFACE_INTERFACE);
   }

   operator ::evas::zoomable_interface() const;
   operator ::evas::zoomable_interface&();
   operator ::evas::zoomable_interface const&() const;

   /// @cond LOCAL
   template <typename D>
   struct address_of
   {
      operator ::evas::zoomable_interface*() const { return static_cast<::evas::zoomable_interface*>(static_cast<D const*>(this)->p); }
      operator ::evas::zoomable_interface const*() const { return static_cast<::evas::zoomable_interface const*>(static_cast<D const*>(this)->p); }
   };

   template <typename D>
   struct address_const_of
   {
      operator ::evas::zoomable_interface const*() const { return static_cast<::evas::zoomable_interface const*>(static_cast<D const*>(this)->p); }
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

/// @brief Class zoomable_interface
struct zoomable_interface
      : ::efl::eo::concrete
      , EO_CXX_INHERIT(evas::signal_interface)
{
   //@{
   /**
      @brief Constructs a new evas::zoomable_interface object.

      Constructs a new evas::zoomable_interface object. If you want this object to be a child
      of another Eo object, use an @ref efl::eo::parent expression, like the example.

      Example:
      @code
      evas::zoomable_interface my_zoomable_interface(efl::eo::parent = parent_object);
      @endcode

      @see zoomable_interface(Eo* eo)
   */
   explicit zoomable_interface(::efl::eo::parent_type _p)
      : zoomable_interface(_ctors_call(_p))
   {}

   explicit zoomable_interface()
      : zoomable_interface(_ctors_call(::efl::eo::parent = nullptr))
   {}
   //@}

   /// @brief Eo Constructor.
   ///
   /// Constructs the object from an Eo* pointer stealing its ownership.
   ///
   /// @param eo The Eo object pointer.
   ///
   explicit zoomable_interface(Eo* eo)
      : ::efl::eo::concrete(eo)
   {}

   /// @brief nullptr_t Constructor.
   ///
   /// Constructs an empty (null) object.
   ///
   explicit zoomable_interface(std::nullptr_t)
      : ::efl::eo::concrete(nullptr)
   {}

   /// @brief Copy Constructor.
   ///
   zoomable_interface(zoomable_interface const& other)
      : zoomable_interface(eo_ref(other._eo_ptr()))
   {}

   ~zoomable_interface() {}

   template <typename F>
   ::efl::eo::signal_connection
   callback_zoom_change_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_ZOOMABLE_INTERFACE_EVENT_ZOOM_CHANGE, priority_,
            &::efl::eo::_detail::event_callback<::evas::zoomable_interface, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::zoomable_interface, function_type>,
         EVAS_ZOOMABLE_INTERFACE_EVENT_ZOOM_CHANGE );
   }

   template <typename T>
   void
   callback_zoom_change_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EVAS_ZOOMABLE_INTERFACE_EVENT_ZOOM_CHANGE, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_zoom_start_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_ZOOMABLE_INTERFACE_EVENT_ZOOM_START, priority_,
            &::efl::eo::_detail::event_callback<::evas::zoomable_interface, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::zoomable_interface, function_type>,
         EVAS_ZOOMABLE_INTERFACE_EVENT_ZOOM_START );
   }

   template <typename T>
   void
   callback_zoom_start_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EVAS_ZOOMABLE_INTERFACE_EVENT_ZOOM_START, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_zoom_stop_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_ZOOMABLE_INTERFACE_EVENT_ZOOM_STOP, priority_,
            &::efl::eo::_detail::event_callback<::evas::zoomable_interface, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::zoomable_interface, function_type>,
         EVAS_ZOOMABLE_INTERFACE_EVENT_ZOOM_STOP );
   }

   template <typename T>
   void
   callback_zoom_stop_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EVAS_ZOOMABLE_INTERFACE_EVENT_ZOOM_STOP, info));
   }



   static Eo_Class const* _eo_class()
   {
      return(EVAS_ZOOMABLE_INTERFACE_INTERFACE);
   }

   /// @cond LOCAL
   struct address_of
      : ::eo_cxx::evas::zoomable_interface::address_of<address_of>
      , ::eo_cxx::evas::signal_interface::address_of<address_of>
      , ::efl::eo::detail::concrete_address_of
   {
      explicit address_of(::evas::zoomable_interface* p)
         : ::efl::eo::detail::concrete_address_of(p)
      {}
   };
   address_of operator&() { return address_of(this); }

   struct address_const_of
      : ::eo_cxx::evas::zoomable_interface::address_const_of<address_const_of>
      , ::eo_cxx::evas::signal_interface::address_const_of<address_const_of>
      , ::efl::eo::detail::concrete_address_const_of
   {
      explicit address_const_of(::evas::zoomable_interface const* p)
         : ::efl::eo::detail::concrete_address_const_of(p)
      {}
   };
   address_const_of operator&() const { return address_const_of(this); }

   /// @endcond

private:

   /// @internal
   static Eo* _ctors_call(::efl::eo::parent_type _p)
   {
      Eo* _ret_eo = eo_add_ref(EVAS_ZOOMABLE_INTERFACE_INTERFACE, _p._eo_raw);

      return _ret_eo;
   }

   /// @internal
   Eo* _concrete_eo_ptr() const { return _eo_ptr(); }
};

static_assert(sizeof(::evas::zoomable_interface) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<::evas::zoomable_interface>::value, "");

}


#include "evas_zoomable_interface.eo.impl.hh"

#endif // EFL_GENERATED_EVAS_ZOOMABLE_INTERFACE_HH

