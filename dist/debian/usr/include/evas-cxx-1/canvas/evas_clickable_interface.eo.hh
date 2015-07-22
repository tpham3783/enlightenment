#ifndef EFL_GENERATED_EVAS_CLICKABLE_INTERFACE_HH
#define EFL_GENERATED_EVAS_CLICKABLE_INTERFACE_HH

extern "C"
{
#include <Efl.h>
}
#include <Eo.hh>

#include <eo_cxx_interop.hh>

extern "C"
{
#include "evas_clickable_interface.eo.h"
}

#include "evas_signal_interface.eo.hh"

namespace evas {

struct clickable_interface;

}

/// @cond EO_CXX_ABSTRACT
namespace eo_cxx {

namespace evas {

struct clickable_interface
{
   template <typename F>
   ::efl::eo::signal_connection
   callback_clicked_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_CLICKABLE_INTERFACE_EVENT_CLICKED, priority_,
            &::efl::eo::_detail::event_callback<::evas::clickable_interface, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::clickable_interface, function_type>,
         EVAS_CLICKABLE_INTERFACE_EVENT_CLICKED );
   }

   template <typename T>
   void
   callback_clicked_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EVAS_CLICKABLE_INTERFACE_EVENT_CLICKED, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_clicked_double_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_CLICKABLE_INTERFACE_EVENT_CLICKED_DOUBLE, priority_,
            &::efl::eo::_detail::event_callback<::evas::clickable_interface, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::clickable_interface, function_type>,
         EVAS_CLICKABLE_INTERFACE_EVENT_CLICKED_DOUBLE );
   }

   template <typename T>
   void
   callback_clicked_double_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EVAS_CLICKABLE_INTERFACE_EVENT_CLICKED_DOUBLE, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_clicked_triple_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_CLICKABLE_INTERFACE_EVENT_CLICKED_TRIPLE, priority_,
            &::efl::eo::_detail::event_callback<::evas::clickable_interface, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::clickable_interface, function_type>,
         EVAS_CLICKABLE_INTERFACE_EVENT_CLICKED_TRIPLE );
   }

   template <typename T>
   void
   callback_clicked_triple_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EVAS_CLICKABLE_INTERFACE_EVENT_CLICKED_TRIPLE, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_clicked_right_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_CLICKABLE_INTERFACE_EVENT_CLICKED_RIGHT, priority_,
            &::efl::eo::_detail::event_callback<::evas::clickable_interface, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::clickable_interface, function_type>,
         EVAS_CLICKABLE_INTERFACE_EVENT_CLICKED_RIGHT );
   }

   template <typename T>
   void
   callback_clicked_right_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EVAS_CLICKABLE_INTERFACE_EVENT_CLICKED_RIGHT, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_pressed_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_CLICKABLE_INTERFACE_EVENT_PRESSED, priority_,
            &::efl::eo::_detail::event_callback<::evas::clickable_interface, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::clickable_interface, function_type>,
         EVAS_CLICKABLE_INTERFACE_EVENT_PRESSED );
   }

   template <typename T>
   void
   callback_pressed_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EVAS_CLICKABLE_INTERFACE_EVENT_PRESSED, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_unpressed_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_CLICKABLE_INTERFACE_EVENT_UNPRESSED, priority_,
            &::efl::eo::_detail::event_callback<::evas::clickable_interface, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::clickable_interface, function_type>,
         EVAS_CLICKABLE_INTERFACE_EVENT_UNPRESSED );
   }

   template <typename T>
   void
   callback_unpressed_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EVAS_CLICKABLE_INTERFACE_EVENT_UNPRESSED, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_longpressed_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_CLICKABLE_INTERFACE_EVENT_LONGPRESSED, priority_,
            &::efl::eo::_detail::event_callback<::evas::clickable_interface, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::clickable_interface, function_type>,
         EVAS_CLICKABLE_INTERFACE_EVENT_LONGPRESSED );
   }

   template <typename T>
   void
   callback_longpressed_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EVAS_CLICKABLE_INTERFACE_EVENT_LONGPRESSED, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_repeated_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_CLICKABLE_INTERFACE_EVENT_REPEATED, priority_,
            &::efl::eo::_detail::event_callback<::evas::clickable_interface, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::clickable_interface, function_type>,
         EVAS_CLICKABLE_INTERFACE_EVENT_REPEATED );
   }

   template <typename T>
   void
   callback_repeated_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EVAS_CLICKABLE_INTERFACE_EVENT_REPEATED, info));
   }



   static Eo_Class const* _eo_class()
   {
      return(EVAS_CLICKABLE_INTERFACE_INTERFACE);
   }

   operator ::evas::clickable_interface() const;
   operator ::evas::clickable_interface&();
   operator ::evas::clickable_interface const&() const;

   /// @cond LOCAL
   template <typename D>
   struct address_of
   {
      operator ::evas::clickable_interface*() const { return static_cast<::evas::clickable_interface*>(static_cast<D const*>(this)->p); }
      operator ::evas::clickable_interface const*() const { return static_cast<::evas::clickable_interface const*>(static_cast<D const*>(this)->p); }
   };

   template <typename D>
   struct address_const_of
   {
      operator ::evas::clickable_interface const*() const { return static_cast<::evas::clickable_interface const*>(static_cast<D const*>(this)->p); }
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

/// @brief Class clickable_interface
struct clickable_interface
      : ::efl::eo::concrete
      , EO_CXX_INHERIT(evas::signal_interface)
{
   //@{
   /**
      @brief Constructs a new evas::clickable_interface object.

      Constructs a new evas::clickable_interface object. If you want this object to be a child
      of another Eo object, use an @ref efl::eo::parent expression, like the example.

      Example:
      @code
      evas::clickable_interface my_clickable_interface(efl::eo::parent = parent_object);
      @endcode

      @see clickable_interface(Eo* eo)
   */
   explicit clickable_interface(::efl::eo::parent_type _p)
      : clickable_interface(_ctors_call(_p))
   {}

   explicit clickable_interface()
      : clickable_interface(_ctors_call(::efl::eo::parent = nullptr))
   {}
   //@}

   /// @brief Eo Constructor.
   ///
   /// Constructs the object from an Eo* pointer stealing its ownership.
   ///
   /// @param eo The Eo object pointer.
   ///
   explicit clickable_interface(Eo* eo)
      : ::efl::eo::concrete(eo)
   {}

   /// @brief nullptr_t Constructor.
   ///
   /// Constructs an empty (null) object.
   ///
   explicit clickable_interface(std::nullptr_t)
      : ::efl::eo::concrete(nullptr)
   {}

   /// @brief Copy Constructor.
   ///
   clickable_interface(clickable_interface const& other)
      : clickable_interface(eo_ref(other._eo_ptr()))
   {}

   ~clickable_interface() {}

   template <typename F>
   ::efl::eo::signal_connection
   callback_clicked_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_CLICKABLE_INTERFACE_EVENT_CLICKED, priority_,
            &::efl::eo::_detail::event_callback<::evas::clickable_interface, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::clickable_interface, function_type>,
         EVAS_CLICKABLE_INTERFACE_EVENT_CLICKED );
   }

   template <typename T>
   void
   callback_clicked_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EVAS_CLICKABLE_INTERFACE_EVENT_CLICKED, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_clicked_double_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_CLICKABLE_INTERFACE_EVENT_CLICKED_DOUBLE, priority_,
            &::efl::eo::_detail::event_callback<::evas::clickable_interface, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::clickable_interface, function_type>,
         EVAS_CLICKABLE_INTERFACE_EVENT_CLICKED_DOUBLE );
   }

   template <typename T>
   void
   callback_clicked_double_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EVAS_CLICKABLE_INTERFACE_EVENT_CLICKED_DOUBLE, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_clicked_right_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_CLICKABLE_INTERFACE_EVENT_CLICKED_RIGHT, priority_,
            &::efl::eo::_detail::event_callback<::evas::clickable_interface, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::clickable_interface, function_type>,
         EVAS_CLICKABLE_INTERFACE_EVENT_CLICKED_RIGHT );
   }

   template <typename T>
   void
   callback_clicked_right_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EVAS_CLICKABLE_INTERFACE_EVENT_CLICKED_RIGHT, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_clicked_triple_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_CLICKABLE_INTERFACE_EVENT_CLICKED_TRIPLE, priority_,
            &::efl::eo::_detail::event_callback<::evas::clickable_interface, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::clickable_interface, function_type>,
         EVAS_CLICKABLE_INTERFACE_EVENT_CLICKED_TRIPLE );
   }

   template <typename T>
   void
   callback_clicked_triple_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EVAS_CLICKABLE_INTERFACE_EVENT_CLICKED_TRIPLE, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_longpressed_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_CLICKABLE_INTERFACE_EVENT_LONGPRESSED, priority_,
            &::efl::eo::_detail::event_callback<::evas::clickable_interface, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::clickable_interface, function_type>,
         EVAS_CLICKABLE_INTERFACE_EVENT_LONGPRESSED );
   }

   template <typename T>
   void
   callback_longpressed_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EVAS_CLICKABLE_INTERFACE_EVENT_LONGPRESSED, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_pressed_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_CLICKABLE_INTERFACE_EVENT_PRESSED, priority_,
            &::efl::eo::_detail::event_callback<::evas::clickable_interface, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::clickable_interface, function_type>,
         EVAS_CLICKABLE_INTERFACE_EVENT_PRESSED );
   }

   template <typename T>
   void
   callback_pressed_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EVAS_CLICKABLE_INTERFACE_EVENT_PRESSED, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_repeated_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_CLICKABLE_INTERFACE_EVENT_REPEATED, priority_,
            &::efl::eo::_detail::event_callback<::evas::clickable_interface, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::clickable_interface, function_type>,
         EVAS_CLICKABLE_INTERFACE_EVENT_REPEATED );
   }

   template <typename T>
   void
   callback_repeated_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EVAS_CLICKABLE_INTERFACE_EVENT_REPEATED, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_unpressed_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_CLICKABLE_INTERFACE_EVENT_UNPRESSED, priority_,
            &::efl::eo::_detail::event_callback<::evas::clickable_interface, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::clickable_interface, function_type>,
         EVAS_CLICKABLE_INTERFACE_EVENT_UNPRESSED );
   }

   template <typename T>
   void
   callback_unpressed_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EVAS_CLICKABLE_INTERFACE_EVENT_UNPRESSED, info));
   }



   static Eo_Class const* _eo_class()
   {
      return(EVAS_CLICKABLE_INTERFACE_INTERFACE);
   }

   /// @cond LOCAL
   struct address_of
      : ::eo_cxx::evas::clickable_interface::address_of<address_of>
      , ::eo_cxx::evas::signal_interface::address_of<address_of>
      , ::efl::eo::detail::concrete_address_of
   {
      explicit address_of(::evas::clickable_interface* p)
         : ::efl::eo::detail::concrete_address_of(p)
      {}
   };
   address_of operator&() { return address_of(this); }

   struct address_const_of
      : ::eo_cxx::evas::clickable_interface::address_const_of<address_const_of>
      , ::eo_cxx::evas::signal_interface::address_const_of<address_const_of>
      , ::efl::eo::detail::concrete_address_const_of
   {
      explicit address_const_of(::evas::clickable_interface const* p)
         : ::efl::eo::detail::concrete_address_const_of(p)
      {}
   };
   address_const_of operator&() const { return address_const_of(this); }

   /// @endcond

private:

   /// @internal
   static Eo* _ctors_call(::efl::eo::parent_type _p)
   {
      Eo* _ret_eo = eo_add_ref(EVAS_CLICKABLE_INTERFACE_INTERFACE, _p._eo_raw);

      return _ret_eo;
   }

   /// @internal
   Eo* _concrete_eo_ptr() const { return _eo_ptr(); }
};

static_assert(sizeof(::evas::clickable_interface) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<::evas::clickable_interface>::value, "");

}


#include "evas_clickable_interface.eo.impl.hh"

#endif // EFL_GENERATED_EVAS_CLICKABLE_INTERFACE_HH

