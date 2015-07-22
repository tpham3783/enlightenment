#ifndef EFL_GENERATED_ECORE_MAINLOOP_HH
#define EFL_GENERATED_ECORE_MAINLOOP_HH

extern "C"
{
#include <Efl.h>
}
#include <Eo.hh>

#include <eo_cxx_interop.hh>

extern "C"
{
#include "ecore_mainloop.eo.h"
}

#include "eo_base.eo.hh"

struct ecore_mainloop;

/// @cond EO_CXX_ABSTRACT
namespace eo_cxx {

struct ecore_mainloop
{
   void iterate() const;

   /// @param may_block 
   ///
   int iterate_may_block(int may_block_) const;

   void begin() const;

   void quit() const;

   bool animator_ticked() const;

   Ecore_Select_Function select_func_get() const;

   void select_func_set(Ecore_Select_Function select_func_) const;

   template <typename F>
   ::efl::eo::signal_connection
   callback_idle_enter_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (ECORE_MAINLOOP_EVENT_IDLE_ENTER, priority_,
            &::efl::eo::_detail::event_callback<::ecore_mainloop, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::ecore_mainloop, function_type>,
         ECORE_MAINLOOP_EVENT_IDLE_ENTER );
   }

   template <typename T>
   void
   callback_idle_enter_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (ECORE_MAINLOOP_EVENT_IDLE_ENTER, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_idle_exit_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (ECORE_MAINLOOP_EVENT_IDLE_EXIT, priority_,
            &::efl::eo::_detail::event_callback<::ecore_mainloop, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::ecore_mainloop, function_type>,
         ECORE_MAINLOOP_EVENT_IDLE_EXIT );
   }

   template <typename T>
   void
   callback_idle_exit_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (ECORE_MAINLOOP_EVENT_IDLE_EXIT, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_idle_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (ECORE_MAINLOOP_EVENT_IDLE, priority_,
            &::efl::eo::_detail::event_callback<::ecore_mainloop, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::ecore_mainloop, function_type>,
         ECORE_MAINLOOP_EVENT_IDLE );
   }

   template <typename T>
   void
   callback_idle_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (ECORE_MAINLOOP_EVENT_IDLE, info));
   }



   static Eo_Class const* _eo_class()
   {
      return(ECORE_MAINLOOP_CLASS);
   }

   operator ::ecore_mainloop() const;
   operator ::ecore_mainloop&();
   operator ::ecore_mainloop const&() const;

   /// @cond LOCAL
   template <typename D>
   struct address_of
   {
      operator ::ecore_mainloop*() const { return static_cast<::ecore_mainloop*>(static_cast<D const*>(this)->p); }
      operator ::ecore_mainloop const*() const { return static_cast<::ecore_mainloop const*>(static_cast<D const*>(this)->p); }
   };

   template <typename D>
   struct address_const_of
   {
      operator ::ecore_mainloop const*() const { return static_cast<::ecore_mainloop const*>(static_cast<D const*>(this)->p); }
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
/// @endcond

/// @brief Class ecore_mainloop
struct ecore_mainloop
      : ::efl::eo::concrete
      , EO_CXX_INHERIT(eo::base)
{
   //@{
   /**
      @brief Constructs a new ecore_mainloop object.

      Constructs a new ecore_mainloop object. If you want this object to be a child
      of another Eo object, use an @ref efl::eo::parent expression, like the example.

      Example:
      @code
      ecore_mainloop my_ecore_mainloop(efl::eo::parent = parent_object);
      @endcode

      @see ecore_mainloop(Eo* eo)
   */
   explicit ecore_mainloop(::efl::eo::parent_type _p)
      : ecore_mainloop(_ctors_call(_p))
   {}

   explicit ecore_mainloop()
      : ecore_mainloop(_ctors_call(::efl::eo::parent = nullptr))
   {}
   //@}

   /// @brief Eo Constructor.
   ///
   /// Constructs the object from an Eo* pointer stealing its ownership.
   ///
   /// @param eo The Eo object pointer.
   ///
   explicit ecore_mainloop(Eo* eo)
      : ::efl::eo::concrete(eo)
   {}

   /// @brief nullptr_t Constructor.
   ///
   /// Constructs an empty (null) object.
   ///
   explicit ecore_mainloop(std::nullptr_t)
      : ::efl::eo::concrete(nullptr)
   {}

   /// @brief Copy Constructor.
   ///
   ecore_mainloop(ecore_mainloop const& other)
      : ecore_mainloop(eo_ref(other._eo_ptr()))
   {}

   ~ecore_mainloop() {}

   void iterate() const;

   /// @param may_block 
   ///
   int iterate_may_block(int may_block_) const;

   void begin() const;

   void quit() const;

   bool animator_ticked() const;

   Ecore_Select_Function select_func_get() const;

   void select_func_set(Ecore_Select_Function select_func_) const;

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
            &::efl::eo::_detail::event_callback<::ecore_mainloop, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::ecore_mainloop, function_type>,
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
            &::efl::eo::_detail::event_callback<::ecore_mainloop, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::ecore_mainloop, function_type>,
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
            &::efl::eo::_detail::event_callback<::ecore_mainloop, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::ecore_mainloop, function_type>,
         EO_BASE_EVENT_DEL );
   }

   template <typename T>
   void
   callback_del_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EO_BASE_EVENT_DEL, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_idle_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (ECORE_MAINLOOP_EVENT_IDLE, priority_,
            &::efl::eo::_detail::event_callback<::ecore_mainloop, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::ecore_mainloop, function_type>,
         ECORE_MAINLOOP_EVENT_IDLE );
   }

   template <typename T>
   void
   callback_idle_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (ECORE_MAINLOOP_EVENT_IDLE, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_idle_enter_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (ECORE_MAINLOOP_EVENT_IDLE_ENTER, priority_,
            &::efl::eo::_detail::event_callback<::ecore_mainloop, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::ecore_mainloop, function_type>,
         ECORE_MAINLOOP_EVENT_IDLE_ENTER );
   }

   template <typename T>
   void
   callback_idle_enter_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (ECORE_MAINLOOP_EVENT_IDLE_ENTER, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_idle_exit_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (ECORE_MAINLOOP_EVENT_IDLE_EXIT, priority_,
            &::efl::eo::_detail::event_callback<::ecore_mainloop, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::ecore_mainloop, function_type>,
         ECORE_MAINLOOP_EVENT_IDLE_EXIT );
   }

   template <typename T>
   void
   callback_idle_exit_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (ECORE_MAINLOOP_EVENT_IDLE_EXIT, info));
   }



   static Eo_Class const* _eo_class()
   {
      return(ECORE_MAINLOOP_CLASS);
   }

   /// @cond LOCAL
   struct address_of
      : ::eo_cxx::ecore_mainloop::address_of<address_of>
      , ::eo_cxx::eo::base::address_of<address_of>
      , ::efl::eo::detail::concrete_address_of
   {
      explicit address_of(::ecore_mainloop* p)
         : ::efl::eo::detail::concrete_address_of(p)
      {}
   };
   address_of operator&() { return address_of(this); }

   struct address_const_of
      : ::eo_cxx::ecore_mainloop::address_const_of<address_const_of>
      , ::eo_cxx::eo::base::address_const_of<address_const_of>
      , ::efl::eo::detail::concrete_address_const_of
   {
      explicit address_const_of(::ecore_mainloop const* p)
         : ::efl::eo::detail::concrete_address_const_of(p)
      {}
   };
   address_const_of operator&() const { return address_const_of(this); }

   /// @endcond

private:

   /// @internal
   static Eo* _ctors_call(::efl::eo::parent_type _p)
   {
      Eo* _ret_eo = eo_add_ref(ECORE_MAINLOOP_CLASS, _p._eo_raw);

      return _ret_eo;
   }

   /// @internal
   Eo* _concrete_eo_ptr() const { return _eo_ptr(); }
};

static_assert(sizeof(::ecore_mainloop) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<::ecore_mainloop>::value, "");


#include "ecore_mainloop.eo.impl.hh"

#endif // EFL_GENERATED_ECORE_MAINLOOP_HH

