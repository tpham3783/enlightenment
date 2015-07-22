#ifndef EFL_GENERATED_EVAS_SELECTABLE_INTERFACE_HH
#define EFL_GENERATED_EVAS_SELECTABLE_INTERFACE_HH

extern "C"
{
#include <Efl.h>
}
#include <Eo.hh>

#include <eo_cxx_interop.hh>

extern "C"
{
#include "evas_selectable_interface.eo.h"
}

#include "evas_signal_interface.eo.hh"

namespace evas {

struct selectable_interface;

}

/// @cond EO_CXX_ABSTRACT
namespace eo_cxx {

namespace evas {

struct selectable_interface
{
   template <typename F>
   ::efl::eo::signal_connection
   callback_selected_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_SELECTABLE_INTERFACE_EVENT_SELECTED, priority_,
            &::efl::eo::_detail::event_callback<::evas::selectable_interface, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::selectable_interface, function_type>,
         EVAS_SELECTABLE_INTERFACE_EVENT_SELECTED );
   }

   template <typename T>
   void
   callback_selected_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EVAS_SELECTABLE_INTERFACE_EVENT_SELECTED, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_unselected_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_SELECTABLE_INTERFACE_EVENT_UNSELECTED, priority_,
            &::efl::eo::_detail::event_callback<::evas::selectable_interface, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::selectable_interface, function_type>,
         EVAS_SELECTABLE_INTERFACE_EVENT_UNSELECTED );
   }

   template <typename T>
   void
   callback_unselected_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EVAS_SELECTABLE_INTERFACE_EVENT_UNSELECTED, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_selection_paste_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_SELECTABLE_INTERFACE_EVENT_SELECTION_PASTE, priority_,
            &::efl::eo::_detail::event_callback<::evas::selectable_interface, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::selectable_interface, function_type>,
         EVAS_SELECTABLE_INTERFACE_EVENT_SELECTION_PASTE );
   }

   template <typename T>
   void
   callback_selection_paste_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EVAS_SELECTABLE_INTERFACE_EVENT_SELECTION_PASTE, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_selection_copy_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_SELECTABLE_INTERFACE_EVENT_SELECTION_COPY, priority_,
            &::efl::eo::_detail::event_callback<::evas::selectable_interface, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::selectable_interface, function_type>,
         EVAS_SELECTABLE_INTERFACE_EVENT_SELECTION_COPY );
   }

   template <typename T>
   void
   callback_selection_copy_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EVAS_SELECTABLE_INTERFACE_EVENT_SELECTION_COPY, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_selection_cut_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_SELECTABLE_INTERFACE_EVENT_SELECTION_CUT, priority_,
            &::efl::eo::_detail::event_callback<::evas::selectable_interface, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::selectable_interface, function_type>,
         EVAS_SELECTABLE_INTERFACE_EVENT_SELECTION_CUT );
   }

   template <typename T>
   void
   callback_selection_cut_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EVAS_SELECTABLE_INTERFACE_EVENT_SELECTION_CUT, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_selection_start_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_SELECTABLE_INTERFACE_EVENT_SELECTION_START, priority_,
            &::efl::eo::_detail::event_callback<::evas::selectable_interface, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::selectable_interface, function_type>,
         EVAS_SELECTABLE_INTERFACE_EVENT_SELECTION_START );
   }

   template <typename T>
   void
   callback_selection_start_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EVAS_SELECTABLE_INTERFACE_EVENT_SELECTION_START, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_selection_changed_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_SELECTABLE_INTERFACE_EVENT_SELECTION_CHANGED, priority_,
            &::efl::eo::_detail::event_callback<::evas::selectable_interface, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::selectable_interface, function_type>,
         EVAS_SELECTABLE_INTERFACE_EVENT_SELECTION_CHANGED );
   }

   template <typename T>
   void
   callback_selection_changed_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EVAS_SELECTABLE_INTERFACE_EVENT_SELECTION_CHANGED, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_selection_cleared_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_SELECTABLE_INTERFACE_EVENT_SELECTION_CLEARED, priority_,
            &::efl::eo::_detail::event_callback<::evas::selectable_interface, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::selectable_interface, function_type>,
         EVAS_SELECTABLE_INTERFACE_EVENT_SELECTION_CLEARED );
   }

   template <typename T>
   void
   callback_selection_cleared_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EVAS_SELECTABLE_INTERFACE_EVENT_SELECTION_CLEARED, info));
   }



   static Eo_Class const* _eo_class()
   {
      return(EVAS_SELECTABLE_INTERFACE_INTERFACE);
   }

   operator ::evas::selectable_interface() const;
   operator ::evas::selectable_interface&();
   operator ::evas::selectable_interface const&() const;

   /// @cond LOCAL
   template <typename D>
   struct address_of
   {
      operator ::evas::selectable_interface*() const { return static_cast<::evas::selectable_interface*>(static_cast<D const*>(this)->p); }
      operator ::evas::selectable_interface const*() const { return static_cast<::evas::selectable_interface const*>(static_cast<D const*>(this)->p); }
   };

   template <typename D>
   struct address_const_of
   {
      operator ::evas::selectable_interface const*() const { return static_cast<::evas::selectable_interface const*>(static_cast<D const*>(this)->p); }
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

/// @brief Class selectable_interface
struct selectable_interface
      : ::efl::eo::concrete
      , EO_CXX_INHERIT(evas::signal_interface)
{
   //@{
   /**
      @brief Constructs a new evas::selectable_interface object.

      Constructs a new evas::selectable_interface object. If you want this object to be a child
      of another Eo object, use an @ref efl::eo::parent expression, like the example.

      Example:
      @code
      evas::selectable_interface my_selectable_interface(efl::eo::parent = parent_object);
      @endcode

      @see selectable_interface(Eo* eo)
   */
   explicit selectable_interface(::efl::eo::parent_type _p)
      : selectable_interface(_ctors_call(_p))
   {}

   explicit selectable_interface()
      : selectable_interface(_ctors_call(::efl::eo::parent = nullptr))
   {}
   //@}

   /// @brief Eo Constructor.
   ///
   /// Constructs the object from an Eo* pointer stealing its ownership.
   ///
   /// @param eo The Eo object pointer.
   ///
   explicit selectable_interface(Eo* eo)
      : ::efl::eo::concrete(eo)
   {}

   /// @brief nullptr_t Constructor.
   ///
   /// Constructs an empty (null) object.
   ///
   explicit selectable_interface(std::nullptr_t)
      : ::efl::eo::concrete(nullptr)
   {}

   /// @brief Copy Constructor.
   ///
   selectable_interface(selectable_interface const& other)
      : selectable_interface(eo_ref(other._eo_ptr()))
   {}

   ~selectable_interface() {}

   template <typename F>
   ::efl::eo::signal_connection
   callback_selected_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_SELECTABLE_INTERFACE_EVENT_SELECTED, priority_,
            &::efl::eo::_detail::event_callback<::evas::selectable_interface, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::selectable_interface, function_type>,
         EVAS_SELECTABLE_INTERFACE_EVENT_SELECTED );
   }

   template <typename T>
   void
   callback_selected_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EVAS_SELECTABLE_INTERFACE_EVENT_SELECTED, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_selection_changed_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_SELECTABLE_INTERFACE_EVENT_SELECTION_CHANGED, priority_,
            &::efl::eo::_detail::event_callback<::evas::selectable_interface, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::selectable_interface, function_type>,
         EVAS_SELECTABLE_INTERFACE_EVENT_SELECTION_CHANGED );
   }

   template <typename T>
   void
   callback_selection_changed_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EVAS_SELECTABLE_INTERFACE_EVENT_SELECTION_CHANGED, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_selection_cleared_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_SELECTABLE_INTERFACE_EVENT_SELECTION_CLEARED, priority_,
            &::efl::eo::_detail::event_callback<::evas::selectable_interface, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::selectable_interface, function_type>,
         EVAS_SELECTABLE_INTERFACE_EVENT_SELECTION_CLEARED );
   }

   template <typename T>
   void
   callback_selection_cleared_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EVAS_SELECTABLE_INTERFACE_EVENT_SELECTION_CLEARED, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_selection_copy_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_SELECTABLE_INTERFACE_EVENT_SELECTION_COPY, priority_,
            &::efl::eo::_detail::event_callback<::evas::selectable_interface, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::selectable_interface, function_type>,
         EVAS_SELECTABLE_INTERFACE_EVENT_SELECTION_COPY );
   }

   template <typename T>
   void
   callback_selection_copy_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EVAS_SELECTABLE_INTERFACE_EVENT_SELECTION_COPY, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_selection_cut_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_SELECTABLE_INTERFACE_EVENT_SELECTION_CUT, priority_,
            &::efl::eo::_detail::event_callback<::evas::selectable_interface, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::selectable_interface, function_type>,
         EVAS_SELECTABLE_INTERFACE_EVENT_SELECTION_CUT );
   }

   template <typename T>
   void
   callback_selection_cut_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EVAS_SELECTABLE_INTERFACE_EVENT_SELECTION_CUT, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_selection_paste_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_SELECTABLE_INTERFACE_EVENT_SELECTION_PASTE, priority_,
            &::efl::eo::_detail::event_callback<::evas::selectable_interface, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::selectable_interface, function_type>,
         EVAS_SELECTABLE_INTERFACE_EVENT_SELECTION_PASTE );
   }

   template <typename T>
   void
   callback_selection_paste_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EVAS_SELECTABLE_INTERFACE_EVENT_SELECTION_PASTE, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_selection_start_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_SELECTABLE_INTERFACE_EVENT_SELECTION_START, priority_,
            &::efl::eo::_detail::event_callback<::evas::selectable_interface, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::selectable_interface, function_type>,
         EVAS_SELECTABLE_INTERFACE_EVENT_SELECTION_START );
   }

   template <typename T>
   void
   callback_selection_start_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EVAS_SELECTABLE_INTERFACE_EVENT_SELECTION_START, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_unselected_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_SELECTABLE_INTERFACE_EVENT_UNSELECTED, priority_,
            &::efl::eo::_detail::event_callback<::evas::selectable_interface, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::selectable_interface, function_type>,
         EVAS_SELECTABLE_INTERFACE_EVENT_UNSELECTED );
   }

   template <typename T>
   void
   callback_unselected_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EVAS_SELECTABLE_INTERFACE_EVENT_UNSELECTED, info));
   }



   static Eo_Class const* _eo_class()
   {
      return(EVAS_SELECTABLE_INTERFACE_INTERFACE);
   }

   /// @cond LOCAL
   struct address_of
      : ::eo_cxx::evas::selectable_interface::address_of<address_of>
      , ::eo_cxx::evas::signal_interface::address_of<address_of>
      , ::efl::eo::detail::concrete_address_of
   {
      explicit address_of(::evas::selectable_interface* p)
         : ::efl::eo::detail::concrete_address_of(p)
      {}
   };
   address_of operator&() { return address_of(this); }

   struct address_const_of
      : ::eo_cxx::evas::selectable_interface::address_const_of<address_const_of>
      , ::eo_cxx::evas::signal_interface::address_const_of<address_const_of>
      , ::efl::eo::detail::concrete_address_const_of
   {
      explicit address_const_of(::evas::selectable_interface const* p)
         : ::efl::eo::detail::concrete_address_const_of(p)
      {}
   };
   address_const_of operator&() const { return address_const_of(this); }

   /// @endcond

private:

   /// @internal
   static Eo* _ctors_call(::efl::eo::parent_type _p)
   {
      Eo* _ret_eo = eo_add_ref(EVAS_SELECTABLE_INTERFACE_INTERFACE, _p._eo_raw);

      return _ret_eo;
   }

   /// @internal
   Eo* _concrete_eo_ptr() const { return _eo_ptr(); }
};

static_assert(sizeof(::evas::selectable_interface) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<::evas::selectable_interface>::value, "");

}


#include "evas_selectable_interface.eo.impl.hh"

#endif // EFL_GENERATED_EVAS_SELECTABLE_INTERFACE_HH

