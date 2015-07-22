#ifndef EFL_GENERATED_ECORE_POLLER_HH
#define EFL_GENERATED_ECORE_POLLER_HH

extern "C"
{
#include <Efl.h>
}
#include <Eo.hh>

#include <eo_cxx_interop.hh>

extern "C"
{
#include "ecore_poller.eo.h"
}

#include "eo_base.eo.hh"
#include <Ecore.h>

namespace ecore {

struct poller;

}

/// @cond EO_CXX_ABSTRACT
namespace eo_cxx {

namespace ecore {

struct poller
{
   int interval_get() const;

   bool interval_set(int interval_) const;



   static Eo_Class const* _eo_class()
   {
      return(ECORE_POLLER_CLASS);
   }

   operator ::ecore::poller() const;
   operator ::ecore::poller&();
   operator ::ecore::poller const&() const;

   /// @cond LOCAL
   template <typename D>
   struct address_of
   {
      operator ::ecore::poller*() const { return static_cast<::ecore::poller*>(static_cast<D const*>(this)->p); }
      operator ::ecore::poller const*() const { return static_cast<::ecore::poller const*>(static_cast<D const*>(this)->p); }
   };

   template <typename D>
   struct address_const_of
   {
      operator ::ecore::poller const*() const { return static_cast<::ecore::poller const*>(static_cast<D const*>(this)->p); }
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

namespace ecore {

/// @brief Class poller
struct poller
      : ::efl::eo::concrete
      , EO_CXX_INHERIT(eo::base)
{
   /// @cond LOCAL
   template <typename F_func_>
   struct _c_constructor
   {
      typedef typename std::remove_reference<F_func_>::type _no_ref_F_func_;

      explicit _c_constructor(Ecore_Poller_Type type_, int interval_, F_func_ && func_)
         : type_(type_), interval_(interval_), _tmp_func_(new F_func_(std::forward<F_func_>(func_)))
      {}
      void operator()()
      {
         ::ecore_poller_constructor(type_, interval_, ::efl::eolian::get_callback<Ecore_Task_Cb, _no_ref_F_func_ >(), _tmp_func_);
      }
      void register_ev_del_free_callback(Eo* _eoptr)
      {
         (void) _eoptr;
         eo_do(_eoptr,
            eo_event_callback_add(EO_EV_DEL, &::efl::eolian::free_callback_calback<_no_ref_F_func_>, _tmp_func_));
      }

      Ecore_Poller_Type type_;
      int interval_;
      _no_ref_F_func_* _tmp_func_;
   };
   /// @endcond

   //@{
   /**
      @brief Constructs a new ecore::poller object.

      Constructs a new ecore::poller object. If you want this object to be a child
      of another Eo object, use an @ref efl::eo::parent expression, like the example.

      Since this class have a necessary constructor method, you must call it
      in the right place within this constructor parameters.

      Example:
      @code
      ecore::poller my_poller(efl::eo::parent = parent_object,
         my_poller.constructor(type_, interval_, func_));
      @endcode

      @see poller::constructor
      @see poller(Eo* eo)
   */
   template <typename F0>
   explicit poller(::efl::eo::parent_type _p, _c_constructor<F0> _c0)
      : poller(_ctors_call(_p, _c0))
   {}

   template <typename F0>
   explicit poller(_c_constructor<F0> _c0)
      : poller(_ctors_call(::efl::eo::parent = nullptr, _c0))
   {}
   //@}

   /// @brief Eo Constructor.
   ///
   /// Constructs the object from an Eo* pointer stealing its ownership.
   ///
   /// @param eo The Eo object pointer.
   ///
   explicit poller(Eo* eo)
      : ::efl::eo::concrete(eo)
   {}

   /// @brief nullptr_t Constructor.
   ///
   /// Constructs an empty (null) object.
   ///
   explicit poller(std::nullptr_t)
      : ::efl::eo::concrete(nullptr)
   {}

   /// @brief Copy Constructor.
   ///
   poller(poller const& other)
      : poller(eo_ref(other._eo_ptr()))
   {}

   ~poller() {}

   /// @param type 
   /// @param interval 
   /// @param func 
   /// @param data 
   ///
   template <typename F_func_>
   static _c_constructor<F_func_> constructor(Ecore_Poller_Type type_, int interval_, F_func_ && func_);

   int interval_get() const;

   bool interval_set(int interval_) const;

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
            &::efl::eo::_detail::event_callback<::ecore::poller, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::ecore::poller, function_type>,
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
            &::efl::eo::_detail::event_callback<::ecore::poller, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::ecore::poller, function_type>,
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
            &::efl::eo::_detail::event_callback<::ecore::poller, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::ecore::poller, function_type>,
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
      return(ECORE_POLLER_CLASS);
   }

   /// @cond LOCAL
   struct address_of
      : ::eo_cxx::ecore::poller::address_of<address_of>
      , ::eo_cxx::eo::base::address_of<address_of>
      , ::efl::eo::detail::concrete_address_of
   {
      explicit address_of(::ecore::poller* p)
         : ::efl::eo::detail::concrete_address_of(p)
      {}
   };
   address_of operator&() { return address_of(this); }

   struct address_const_of
      : ::eo_cxx::ecore::poller::address_const_of<address_const_of>
      , ::eo_cxx::eo::base::address_const_of<address_const_of>
      , ::efl::eo::detail::concrete_address_const_of
   {
      explicit address_const_of(::ecore::poller const* p)
         : ::efl::eo::detail::concrete_address_const_of(p)
      {}
   };
   address_const_of operator&() const { return address_const_of(this); }

   /// @endcond

private:

   /// @internal
   template <typename F0>
   static Eo* _ctors_call(::efl::eo::parent_type _p, _c_constructor<F0> _c0)
   {
      Eo* _ret_eo = eo_add_ref(ECORE_POLLER_CLASS, _p._eo_raw, _c0());

      _c0.register_ev_del_free_callback(_ret_eo);
      return _ret_eo;
   }

   /// @internal
   Eo* _concrete_eo_ptr() const { return _eo_ptr(); }
};

static_assert(sizeof(::ecore::poller) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<::ecore::poller>::value, "");

}


#include "ecore_poller.eo.impl.hh"

#endif // EFL_GENERATED_ECORE_POLLER_HH

