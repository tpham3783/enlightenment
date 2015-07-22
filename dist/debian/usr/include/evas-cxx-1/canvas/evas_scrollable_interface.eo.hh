#ifndef EFL_GENERATED_EVAS_SCROLLABLE_INTERFACE_HH
#define EFL_GENERATED_EVAS_SCROLLABLE_INTERFACE_HH

extern "C"
{
#include <Efl.h>
}
#include <Eo.hh>

#include <eo_cxx_interop.hh>

extern "C"
{
#include "evas_scrollable_interface.eo.h"
}

#include "evas_signal_interface.eo.hh"

namespace evas {

struct scrollable_interface;

}

/// @cond EO_CXX_ABSTRACT
namespace eo_cxx {

namespace evas {

struct scrollable_interface
{
   template <typename F>
   ::efl::eo::signal_connection
   callback_scroll_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_SCROLLABLE_INTERFACE_EVENT_SCROLL, priority_,
            &::efl::eo::_detail::event_callback<::evas::scrollable_interface, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::scrollable_interface, function_type>,
         EVAS_SCROLLABLE_INTERFACE_EVENT_SCROLL );
   }

   template <typename T>
   void
   callback_scroll_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EVAS_SCROLLABLE_INTERFACE_EVENT_SCROLL, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_scroll_anim_start_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_SCROLLABLE_INTERFACE_EVENT_SCROLL_ANIM_START, priority_,
            &::efl::eo::_detail::event_callback<::evas::scrollable_interface, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::scrollable_interface, function_type>,
         EVAS_SCROLLABLE_INTERFACE_EVENT_SCROLL_ANIM_START );
   }

   template <typename T>
   void
   callback_scroll_anim_start_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EVAS_SCROLLABLE_INTERFACE_EVENT_SCROLL_ANIM_START, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_scroll_anim_stop_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_SCROLLABLE_INTERFACE_EVENT_SCROLL_ANIM_STOP, priority_,
            &::efl::eo::_detail::event_callback<::evas::scrollable_interface, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::scrollable_interface, function_type>,
         EVAS_SCROLLABLE_INTERFACE_EVENT_SCROLL_ANIM_STOP );
   }

   template <typename T>
   void
   callback_scroll_anim_stop_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EVAS_SCROLLABLE_INTERFACE_EVENT_SCROLL_ANIM_STOP, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_scroll_drag_start_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_SCROLLABLE_INTERFACE_EVENT_SCROLL_DRAG_START, priority_,
            &::efl::eo::_detail::event_callback<::evas::scrollable_interface, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::scrollable_interface, function_type>,
         EVAS_SCROLLABLE_INTERFACE_EVENT_SCROLL_DRAG_START );
   }

   template <typename T>
   void
   callback_scroll_drag_start_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EVAS_SCROLLABLE_INTERFACE_EVENT_SCROLL_DRAG_START, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_scroll_drag_stop_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_SCROLLABLE_INTERFACE_EVENT_SCROLL_DRAG_STOP, priority_,
            &::efl::eo::_detail::event_callback<::evas::scrollable_interface, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::scrollable_interface, function_type>,
         EVAS_SCROLLABLE_INTERFACE_EVENT_SCROLL_DRAG_STOP );
   }

   template <typename T>
   void
   callback_scroll_drag_stop_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EVAS_SCROLLABLE_INTERFACE_EVENT_SCROLL_DRAG_STOP, info));
   }



   static Eo_Class const* _eo_class()
   {
      return(EVAS_SCROLLABLE_INTERFACE_INTERFACE);
   }

   operator ::evas::scrollable_interface() const;
   operator ::evas::scrollable_interface&();
   operator ::evas::scrollable_interface const&() const;

   /// @cond LOCAL
   template <typename D>
   struct address_of
   {
      operator ::evas::scrollable_interface*() const { return static_cast<::evas::scrollable_interface*>(static_cast<D const*>(this)->p); }
      operator ::evas::scrollable_interface const*() const { return static_cast<::evas::scrollable_interface const*>(static_cast<D const*>(this)->p); }
   };

   template <typename D>
   struct address_const_of
   {
      operator ::evas::scrollable_interface const*() const { return static_cast<::evas::scrollable_interface const*>(static_cast<D const*>(this)->p); }
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

/// @brief Class scrollable_interface
struct scrollable_interface
      : ::efl::eo::concrete
      , EO_CXX_INHERIT(evas::signal_interface)
{
   //@{
   /**
      @brief Constructs a new evas::scrollable_interface object.

      Constructs a new evas::scrollable_interface object. If you want this object to be a child
      of another Eo object, use an @ref efl::eo::parent expression, like the example.

      Example:
      @code
      evas::scrollable_interface my_scrollable_interface(efl::eo::parent = parent_object);
      @endcode

      @see scrollable_interface(Eo* eo)
   */
   explicit scrollable_interface(::efl::eo::parent_type _p)
      : scrollable_interface(_ctors_call(_p))
   {}

   explicit scrollable_interface()
      : scrollable_interface(_ctors_call(::efl::eo::parent = nullptr))
   {}
   //@}

   /// @brief Eo Constructor.
   ///
   /// Constructs the object from an Eo* pointer stealing its ownership.
   ///
   /// @param eo The Eo object pointer.
   ///
   explicit scrollable_interface(Eo* eo)
      : ::efl::eo::concrete(eo)
   {}

   /// @brief nullptr_t Constructor.
   ///
   /// Constructs an empty (null) object.
   ///
   explicit scrollable_interface(std::nullptr_t)
      : ::efl::eo::concrete(nullptr)
   {}

   /// @brief Copy Constructor.
   ///
   scrollable_interface(scrollable_interface const& other)
      : scrollable_interface(eo_ref(other._eo_ptr()))
   {}

   ~scrollable_interface() {}

   template <typename F>
   ::efl::eo::signal_connection
   callback_scroll_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_SCROLLABLE_INTERFACE_EVENT_SCROLL, priority_,
            &::efl::eo::_detail::event_callback<::evas::scrollable_interface, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::scrollable_interface, function_type>,
         EVAS_SCROLLABLE_INTERFACE_EVENT_SCROLL );
   }

   template <typename T>
   void
   callback_scroll_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EVAS_SCROLLABLE_INTERFACE_EVENT_SCROLL, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_scroll_anim_start_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_SCROLLABLE_INTERFACE_EVENT_SCROLL_ANIM_START, priority_,
            &::efl::eo::_detail::event_callback<::evas::scrollable_interface, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::scrollable_interface, function_type>,
         EVAS_SCROLLABLE_INTERFACE_EVENT_SCROLL_ANIM_START );
   }

   template <typename T>
   void
   callback_scroll_anim_start_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EVAS_SCROLLABLE_INTERFACE_EVENT_SCROLL_ANIM_START, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_scroll_anim_stop_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_SCROLLABLE_INTERFACE_EVENT_SCROLL_ANIM_STOP, priority_,
            &::efl::eo::_detail::event_callback<::evas::scrollable_interface, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::scrollable_interface, function_type>,
         EVAS_SCROLLABLE_INTERFACE_EVENT_SCROLL_ANIM_STOP );
   }

   template <typename T>
   void
   callback_scroll_anim_stop_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EVAS_SCROLLABLE_INTERFACE_EVENT_SCROLL_ANIM_STOP, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_scroll_drag_start_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_SCROLLABLE_INTERFACE_EVENT_SCROLL_DRAG_START, priority_,
            &::efl::eo::_detail::event_callback<::evas::scrollable_interface, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::scrollable_interface, function_type>,
         EVAS_SCROLLABLE_INTERFACE_EVENT_SCROLL_DRAG_START );
   }

   template <typename T>
   void
   callback_scroll_drag_start_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EVAS_SCROLLABLE_INTERFACE_EVENT_SCROLL_DRAG_START, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_scroll_drag_stop_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_SCROLLABLE_INTERFACE_EVENT_SCROLL_DRAG_STOP, priority_,
            &::efl::eo::_detail::event_callback<::evas::scrollable_interface, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::scrollable_interface, function_type>,
         EVAS_SCROLLABLE_INTERFACE_EVENT_SCROLL_DRAG_STOP );
   }

   template <typename T>
   void
   callback_scroll_drag_stop_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EVAS_SCROLLABLE_INTERFACE_EVENT_SCROLL_DRAG_STOP, info));
   }



   static Eo_Class const* _eo_class()
   {
      return(EVAS_SCROLLABLE_INTERFACE_INTERFACE);
   }

   /// @cond LOCAL
   struct address_of
      : ::eo_cxx::evas::scrollable_interface::address_of<address_of>
      , ::eo_cxx::evas::signal_interface::address_of<address_of>
      , ::efl::eo::detail::concrete_address_of
   {
      explicit address_of(::evas::scrollable_interface* p)
         : ::efl::eo::detail::concrete_address_of(p)
      {}
   };
   address_of operator&() { return address_of(this); }

   struct address_const_of
      : ::eo_cxx::evas::scrollable_interface::address_const_of<address_const_of>
      , ::eo_cxx::evas::signal_interface::address_const_of<address_const_of>
      , ::efl::eo::detail::concrete_address_const_of
   {
      explicit address_const_of(::evas::scrollable_interface const* p)
         : ::efl::eo::detail::concrete_address_const_of(p)
      {}
   };
   address_const_of operator&() const { return address_const_of(this); }

   /// @endcond

private:

   /// @internal
   static Eo* _ctors_call(::efl::eo::parent_type _p)
   {
      Eo* _ret_eo = eo_add_ref(EVAS_SCROLLABLE_INTERFACE_INTERFACE, _p._eo_raw);

      return _ret_eo;
   }

   /// @internal
   Eo* _concrete_eo_ptr() const { return _eo_ptr(); }
};

static_assert(sizeof(::evas::scrollable_interface) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<::evas::scrollable_interface>::value, "");

}


#include "evas_scrollable_interface.eo.impl.hh"

#endif // EFL_GENERATED_EVAS_SCROLLABLE_INTERFACE_HH

