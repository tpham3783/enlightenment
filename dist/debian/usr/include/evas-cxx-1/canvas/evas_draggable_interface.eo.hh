#ifndef EFL_GENERATED_EVAS_DRAGGABLE_INTERFACE_HH
#define EFL_GENERATED_EVAS_DRAGGABLE_INTERFACE_HH

extern "C"
{
#include <Efl.h>
}
#include <Eo.hh>

#include <eo_cxx_interop.hh>

extern "C"
{
#include "evas_draggable_interface.eo.h"
}

#include "evas_signal_interface.eo.hh"

namespace evas {

struct draggable_interface;

}

/// @cond EO_CXX_ABSTRACT
namespace eo_cxx {

namespace evas {

struct draggable_interface
{
   template <typename F>
   ::efl::eo::signal_connection
   callback_drag_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_DRAGGABLE_INTERFACE_EVENT_DRAG, priority_,
            &::efl::eo::_detail::event_callback<::evas::draggable_interface, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::draggable_interface, function_type>,
         EVAS_DRAGGABLE_INTERFACE_EVENT_DRAG );
   }

   template <typename T>
   void
   callback_drag_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EVAS_DRAGGABLE_INTERFACE_EVENT_DRAG, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_drag_start_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_DRAGGABLE_INTERFACE_EVENT_DRAG_START, priority_,
            &::efl::eo::_detail::event_callback<::evas::draggable_interface, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::draggable_interface, function_type>,
         EVAS_DRAGGABLE_INTERFACE_EVENT_DRAG_START );
   }

   template <typename T>
   void
   callback_drag_start_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EVAS_DRAGGABLE_INTERFACE_EVENT_DRAG_START, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_drag_stop_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_DRAGGABLE_INTERFACE_EVENT_DRAG_STOP, priority_,
            &::efl::eo::_detail::event_callback<::evas::draggable_interface, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::draggable_interface, function_type>,
         EVAS_DRAGGABLE_INTERFACE_EVENT_DRAG_STOP );
   }

   template <typename T>
   void
   callback_drag_stop_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EVAS_DRAGGABLE_INTERFACE_EVENT_DRAG_STOP, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_drag_end_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_DRAGGABLE_INTERFACE_EVENT_DRAG_END, priority_,
            &::efl::eo::_detail::event_callback<::evas::draggable_interface, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::draggable_interface, function_type>,
         EVAS_DRAGGABLE_INTERFACE_EVENT_DRAG_END );
   }

   template <typename T>
   void
   callback_drag_end_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EVAS_DRAGGABLE_INTERFACE_EVENT_DRAG_END, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_drag_start_up_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_DRAGGABLE_INTERFACE_EVENT_DRAG_START_UP, priority_,
            &::efl::eo::_detail::event_callback<::evas::draggable_interface, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::draggable_interface, function_type>,
         EVAS_DRAGGABLE_INTERFACE_EVENT_DRAG_START_UP );
   }

   template <typename T>
   void
   callback_drag_start_up_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EVAS_DRAGGABLE_INTERFACE_EVENT_DRAG_START_UP, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_drag_start_down_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_DRAGGABLE_INTERFACE_EVENT_DRAG_START_DOWN, priority_,
            &::efl::eo::_detail::event_callback<::evas::draggable_interface, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::draggable_interface, function_type>,
         EVAS_DRAGGABLE_INTERFACE_EVENT_DRAG_START_DOWN );
   }

   template <typename T>
   void
   callback_drag_start_down_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EVAS_DRAGGABLE_INTERFACE_EVENT_DRAG_START_DOWN, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_drag_start_right_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_DRAGGABLE_INTERFACE_EVENT_DRAG_START_RIGHT, priority_,
            &::efl::eo::_detail::event_callback<::evas::draggable_interface, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::draggable_interface, function_type>,
         EVAS_DRAGGABLE_INTERFACE_EVENT_DRAG_START_RIGHT );
   }

   template <typename T>
   void
   callback_drag_start_right_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EVAS_DRAGGABLE_INTERFACE_EVENT_DRAG_START_RIGHT, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_drag_start_left_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_DRAGGABLE_INTERFACE_EVENT_DRAG_START_LEFT, priority_,
            &::efl::eo::_detail::event_callback<::evas::draggable_interface, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::draggable_interface, function_type>,
         EVAS_DRAGGABLE_INTERFACE_EVENT_DRAG_START_LEFT );
   }

   template <typename T>
   void
   callback_drag_start_left_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EVAS_DRAGGABLE_INTERFACE_EVENT_DRAG_START_LEFT, info));
   }



   static Eo_Class const* _eo_class()
   {
      return(EVAS_DRAGGABLE_INTERFACE_INTERFACE);
   }

   operator ::evas::draggable_interface() const;
   operator ::evas::draggable_interface&();
   operator ::evas::draggable_interface const&() const;

   /// @cond LOCAL
   template <typename D>
   struct address_of
   {
      operator ::evas::draggable_interface*() const { return static_cast<::evas::draggable_interface*>(static_cast<D const*>(this)->p); }
      operator ::evas::draggable_interface const*() const { return static_cast<::evas::draggable_interface const*>(static_cast<D const*>(this)->p); }
   };

   template <typename D>
   struct address_const_of
   {
      operator ::evas::draggable_interface const*() const { return static_cast<::evas::draggable_interface const*>(static_cast<D const*>(this)->p); }
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

/// @brief Class draggable_interface
struct draggable_interface
      : ::efl::eo::concrete
      , EO_CXX_INHERIT(evas::signal_interface)
{
   //@{
   /**
      @brief Constructs a new evas::draggable_interface object.

      Constructs a new evas::draggable_interface object. If you want this object to be a child
      of another Eo object, use an @ref efl::eo::parent expression, like the example.

      Example:
      @code
      evas::draggable_interface my_draggable_interface(efl::eo::parent = parent_object);
      @endcode

      @see draggable_interface(Eo* eo)
   */
   explicit draggable_interface(::efl::eo::parent_type _p)
      : draggable_interface(_ctors_call(_p))
   {}

   explicit draggable_interface()
      : draggable_interface(_ctors_call(::efl::eo::parent = nullptr))
   {}
   //@}

   /// @brief Eo Constructor.
   ///
   /// Constructs the object from an Eo* pointer stealing its ownership.
   ///
   /// @param eo The Eo object pointer.
   ///
   explicit draggable_interface(Eo* eo)
      : ::efl::eo::concrete(eo)
   {}

   /// @brief nullptr_t Constructor.
   ///
   /// Constructs an empty (null) object.
   ///
   explicit draggable_interface(std::nullptr_t)
      : ::efl::eo::concrete(nullptr)
   {}

   /// @brief Copy Constructor.
   ///
   draggable_interface(draggable_interface const& other)
      : draggable_interface(eo_ref(other._eo_ptr()))
   {}

   ~draggable_interface() {}

   template <typename F>
   ::efl::eo::signal_connection
   callback_drag_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_DRAGGABLE_INTERFACE_EVENT_DRAG, priority_,
            &::efl::eo::_detail::event_callback<::evas::draggable_interface, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::draggable_interface, function_type>,
         EVAS_DRAGGABLE_INTERFACE_EVENT_DRAG );
   }

   template <typename T>
   void
   callback_drag_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EVAS_DRAGGABLE_INTERFACE_EVENT_DRAG, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_drag_end_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_DRAGGABLE_INTERFACE_EVENT_DRAG_END, priority_,
            &::efl::eo::_detail::event_callback<::evas::draggable_interface, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::draggable_interface, function_type>,
         EVAS_DRAGGABLE_INTERFACE_EVENT_DRAG_END );
   }

   template <typename T>
   void
   callback_drag_end_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EVAS_DRAGGABLE_INTERFACE_EVENT_DRAG_END, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_drag_start_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_DRAGGABLE_INTERFACE_EVENT_DRAG_START, priority_,
            &::efl::eo::_detail::event_callback<::evas::draggable_interface, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::draggable_interface, function_type>,
         EVAS_DRAGGABLE_INTERFACE_EVENT_DRAG_START );
   }

   template <typename T>
   void
   callback_drag_start_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EVAS_DRAGGABLE_INTERFACE_EVENT_DRAG_START, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_drag_start_down_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_DRAGGABLE_INTERFACE_EVENT_DRAG_START_DOWN, priority_,
            &::efl::eo::_detail::event_callback<::evas::draggable_interface, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::draggable_interface, function_type>,
         EVAS_DRAGGABLE_INTERFACE_EVENT_DRAG_START_DOWN );
   }

   template <typename T>
   void
   callback_drag_start_down_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EVAS_DRAGGABLE_INTERFACE_EVENT_DRAG_START_DOWN, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_drag_start_left_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_DRAGGABLE_INTERFACE_EVENT_DRAG_START_LEFT, priority_,
            &::efl::eo::_detail::event_callback<::evas::draggable_interface, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::draggable_interface, function_type>,
         EVAS_DRAGGABLE_INTERFACE_EVENT_DRAG_START_LEFT );
   }

   template <typename T>
   void
   callback_drag_start_left_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EVAS_DRAGGABLE_INTERFACE_EVENT_DRAG_START_LEFT, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_drag_start_right_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_DRAGGABLE_INTERFACE_EVENT_DRAG_START_RIGHT, priority_,
            &::efl::eo::_detail::event_callback<::evas::draggable_interface, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::draggable_interface, function_type>,
         EVAS_DRAGGABLE_INTERFACE_EVENT_DRAG_START_RIGHT );
   }

   template <typename T>
   void
   callback_drag_start_right_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EVAS_DRAGGABLE_INTERFACE_EVENT_DRAG_START_RIGHT, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_drag_start_up_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_DRAGGABLE_INTERFACE_EVENT_DRAG_START_UP, priority_,
            &::efl::eo::_detail::event_callback<::evas::draggable_interface, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::draggable_interface, function_type>,
         EVAS_DRAGGABLE_INTERFACE_EVENT_DRAG_START_UP );
   }

   template <typename T>
   void
   callback_drag_start_up_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EVAS_DRAGGABLE_INTERFACE_EVENT_DRAG_START_UP, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_drag_stop_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_DRAGGABLE_INTERFACE_EVENT_DRAG_STOP, priority_,
            &::efl::eo::_detail::event_callback<::evas::draggable_interface, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::draggable_interface, function_type>,
         EVAS_DRAGGABLE_INTERFACE_EVENT_DRAG_STOP );
   }

   template <typename T>
   void
   callback_drag_stop_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EVAS_DRAGGABLE_INTERFACE_EVENT_DRAG_STOP, info));
   }



   static Eo_Class const* _eo_class()
   {
      return(EVAS_DRAGGABLE_INTERFACE_INTERFACE);
   }

   /// @cond LOCAL
   struct address_of
      : ::eo_cxx::evas::draggable_interface::address_of<address_of>
      , ::eo_cxx::evas::signal_interface::address_of<address_of>
      , ::efl::eo::detail::concrete_address_of
   {
      explicit address_of(::evas::draggable_interface* p)
         : ::efl::eo::detail::concrete_address_of(p)
      {}
   };
   address_of operator&() { return address_of(this); }

   struct address_const_of
      : ::eo_cxx::evas::draggable_interface::address_const_of<address_const_of>
      , ::eo_cxx::evas::signal_interface::address_const_of<address_const_of>
      , ::efl::eo::detail::concrete_address_const_of
   {
      explicit address_const_of(::evas::draggable_interface const* p)
         : ::efl::eo::detail::concrete_address_const_of(p)
      {}
   };
   address_const_of operator&() const { return address_const_of(this); }

   /// @endcond

private:

   /// @internal
   static Eo* _ctors_call(::efl::eo::parent_type _p)
   {
      Eo* _ret_eo = eo_add_ref(EVAS_DRAGGABLE_INTERFACE_INTERFACE, _p._eo_raw);

      return _ret_eo;
   }

   /// @internal
   Eo* _concrete_eo_ptr() const { return _eo_ptr(); }
};

static_assert(sizeof(::evas::draggable_interface) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<::evas::draggable_interface>::value, "");

}


#include "evas_draggable_interface.eo.impl.hh"

#endif // EFL_GENERATED_EVAS_DRAGGABLE_INTERFACE_HH

