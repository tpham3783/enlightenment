#ifndef EFL_GENERATED_ECORE_IDLE_ENTERER_HH
#define EFL_GENERATED_ECORE_IDLE_ENTERER_HH

extern "C"
{
#include <Efl.h>
}
#include <Eo.hh>

#include <eo_cxx_interop.hh>

extern "C"
{
#include "ecore_idle_enterer.eo.h"
}

#include "eo_base.eo.hh"
#include <Ecore.h>

namespace ecore { namespace idle {

struct enterer;

} }

/// @cond EO_CXX_ABSTRACT
namespace eo_cxx {

namespace ecore { namespace idle {

struct enterer
{


   static Eo_Class const* _eo_class()
   {
      return(ECORE_IDLE_ENTERER_CLASS);
   }

   operator ::ecore::idle::enterer() const;
   operator ::ecore::idle::enterer&();
   operator ::ecore::idle::enterer const&() const;

   /// @cond LOCAL
   template <typename D>
   struct address_of
   {
      operator ::ecore::idle::enterer*() const { return static_cast<::ecore::idle::enterer*>(static_cast<D const*>(this)->p); }
      operator ::ecore::idle::enterer const*() const { return static_cast<::ecore::idle::enterer const*>(static_cast<D const*>(this)->p); }
   };

   template <typename D>
   struct address_const_of
   {
      operator ::ecore::idle::enterer const*() const { return static_cast<::ecore::idle::enterer const*>(static_cast<D const*>(this)->p); }
   };
   /// @endcond

private:

   /// @internal
   Eo* _concrete_eo_ptr() const
   {
      return static_cast<::efl::eo::concrete const*>(static_cast<void const*>(this))->_eo_ptr();
   }

};

} }

}
/// @endcond

namespace ecore { namespace idle {

/// @brief Class enterer
struct enterer
      : ::efl::eo::concrete
      , EO_CXX_INHERIT(eo::base)
{
   /// @cond LOCAL
   template <typename F_func_>
   struct _c_before_constructor
   {
      typedef typename std::remove_reference<F_func_>::type _no_ref_F_func_;

      explicit _c_before_constructor(F_func_ && func_)
         : _tmp_func_(new F_func_(std::forward<F_func_>(func_)))
      {}
      void operator()()
      {
         ::ecore_idle_enterer_before_constructor(::efl::eolian::get_callback<Ecore_Task_Cb, _no_ref_F_func_ >(), _tmp_func_);
      }
      void register_ev_del_free_callback(Eo* _eoptr)
      {
         (void) _eoptr;
         eo_do(_eoptr,
            eo_event_callback_add(EO_EV_DEL, &::efl::eolian::free_callback_calback<_no_ref_F_func_>, _tmp_func_));
      }

      _no_ref_F_func_* _tmp_func_;
   };
   /// @endcond

   /// @cond LOCAL
   template <typename F_func_>
   struct _c_after_constructor
   {
      typedef typename std::remove_reference<F_func_>::type _no_ref_F_func_;

      explicit _c_after_constructor(F_func_ && func_)
         : _tmp_func_(new F_func_(std::forward<F_func_>(func_)))
      {}
      void operator()()
      {
         ::ecore_idle_enterer_after_constructor(::efl::eolian::get_callback<Ecore_Task_Cb, _no_ref_F_func_ >(), _tmp_func_);
      }
      void register_ev_del_free_callback(Eo* _eoptr)
      {
         (void) _eoptr;
         eo_do(_eoptr,
            eo_event_callback_add(EO_EV_DEL, &::efl::eolian::free_callback_calback<_no_ref_F_func_>, _tmp_func_));
      }

      _no_ref_F_func_* _tmp_func_;
   };
   /// @endcond

   //@{
   /**
      @brief Constructs a new ecore::idle::enterer object.

      Constructs a new ecore::idle::enterer object. If you want this object to be a child
      of another Eo object, use an @ref efl::eo::parent expression, like the example.

      Since this class have necessary constructor methods, you must call each one of them
      in the right place within this constructor parameters.

      Example:
      @code
      ecore::idle::enterer my_enterer(efl::eo::parent = parent_object,
         my_enterer.before_constructor(func_),
         my_enterer.after_constructor(func_));
      @endcode

      @see enterer::before_constructor
      @see enterer::after_constructor
      @see enterer(Eo* eo)
   */
   template <typename F0, typename F1>
   explicit enterer(::efl::eo::parent_type _p, _c_before_constructor<F0> _c0, _c_after_constructor<F1> _c1)
      : enterer(_ctors_call(_p, _c0, _c1))
   {}

   template <typename F0, typename F1>
   explicit enterer(_c_before_constructor<F0> _c0, _c_after_constructor<F1> _c1)
      : enterer(_ctors_call(::efl::eo::parent = nullptr, _c0, _c1))
   {}
   //@}

   /// @brief Eo Constructor.
   ///
   /// Constructs the object from an Eo* pointer stealing its ownership.
   ///
   /// @param eo The Eo object pointer.
   ///
   explicit enterer(Eo* eo)
      : ::efl::eo::concrete(eo)
   {}

   /// @brief nullptr_t Constructor.
   ///
   /// Constructs an empty (null) object.
   ///
   explicit enterer(std::nullptr_t)
      : ::efl::eo::concrete(nullptr)
   {}

   /// @brief Copy Constructor.
   ///
   enterer(enterer const& other)
      : enterer(eo_ref(other._eo_ptr()))
   {}

   ~enterer() {}

   /// @param func 
   /// @param data 
   ///
   template <typename F_func_>
   static _c_before_constructor<F_func_> before_constructor(F_func_ && func_);

   /// @param func 
   /// @param data 
   ///
   template <typename F_func_>
   static _c_after_constructor<F_func_> after_constructor(F_func_ && func_);

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
            &::efl::eo::_detail::event_callback<::ecore::idle::enterer, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::ecore::idle::enterer, function_type>,
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
            &::efl::eo::_detail::event_callback<::ecore::idle::enterer, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::ecore::idle::enterer, function_type>,
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
            &::efl::eo::_detail::event_callback<::ecore::idle::enterer, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::ecore::idle::enterer, function_type>,
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
      return(ECORE_IDLE_ENTERER_CLASS);
   }

   /// @cond LOCAL
   struct address_of
      : ::eo_cxx::ecore::idle::enterer::address_of<address_of>
      , ::eo_cxx::eo::base::address_of<address_of>
      , ::efl::eo::detail::concrete_address_of
   {
      explicit address_of(::ecore::idle::enterer* p)
         : ::efl::eo::detail::concrete_address_of(p)
      {}
   };
   address_of operator&() { return address_of(this); }

   struct address_const_of
      : ::eo_cxx::ecore::idle::enterer::address_const_of<address_const_of>
      , ::eo_cxx::eo::base::address_const_of<address_const_of>
      , ::efl::eo::detail::concrete_address_const_of
   {
      explicit address_const_of(::ecore::idle::enterer const* p)
         : ::efl::eo::detail::concrete_address_const_of(p)
      {}
   };
   address_const_of operator&() const { return address_const_of(this); }

   /// @endcond

private:

   /// @internal
   template <typename F0, typename F1>
   static Eo* _ctors_call(::efl::eo::parent_type _p, _c_before_constructor<F0> _c0, _c_after_constructor<F1> _c1)
   {
      Eo* _ret_eo = eo_add_ref(ECORE_IDLE_ENTERER_CLASS, _p._eo_raw, _c0(), _c1());

      _c0.register_ev_del_free_callback(_ret_eo);
      _c1.register_ev_del_free_callback(_ret_eo);
      return _ret_eo;
   }

   /// @internal
   Eo* _concrete_eo_ptr() const { return _eo_ptr(); }
};

static_assert(sizeof(::ecore::idle::enterer) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<::ecore::idle::enterer>::value, "");

} }


#include "ecore_idle_enterer.eo.impl.hh"

#endif // EFL_GENERATED_ECORE_IDLE_ENTERER_HH

