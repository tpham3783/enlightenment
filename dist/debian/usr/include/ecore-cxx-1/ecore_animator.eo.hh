#ifndef EFL_GENERATED_ECORE_ANIMATOR_HH
#define EFL_GENERATED_ECORE_ANIMATOR_HH

extern "C"
{
#include <Efl.h>
}
#include <Eo.hh>

#include <eo_cxx_interop.hh>

extern "C"
{
#include "ecore_animator.eo.h"
}

#include "eo_base.eo.hh"
#include <Ecore.h>

namespace ecore {

struct animator;

}

/// @cond EO_CXX_ABSTRACT
namespace eo_cxx {

namespace ecore {

struct animator
{


   static Eo_Class const* _eo_class()
   {
      return(ECORE_ANIMATOR_CLASS);
   }

   operator ::ecore::animator() const;
   operator ::ecore::animator&();
   operator ::ecore::animator const&() const;

   /// @cond LOCAL
   template <typename D>
   struct address_of
   {
      operator ::ecore::animator*() const { return static_cast<::ecore::animator*>(static_cast<D const*>(this)->p); }
      operator ::ecore::animator const*() const { return static_cast<::ecore::animator const*>(static_cast<D const*>(this)->p); }
   };

   template <typename D>
   struct address_const_of
   {
      operator ::ecore::animator const*() const { return static_cast<::ecore::animator const*>(static_cast<D const*>(this)->p); }
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

/// @brief Class animator
struct animator
      : ::efl::eo::concrete
      , EO_CXX_INHERIT(eo::base)
{
   /// @cond LOCAL
   template <typename F_func_>
   struct _c_constructor
   {
      typedef typename std::remove_reference<F_func_>::type _no_ref_F_func_;

      explicit _c_constructor(F_func_ && func_)
         : _tmp_func_(new F_func_(std::forward<F_func_>(func_)))
      {}
      void operator()()
      {
         ::ecore_animator_constructor(::efl::eolian::get_callback<Ecore_Task_Cb, _no_ref_F_func_ >(), _tmp_func_);
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
   struct _c_timeline_constructor
   {
      typedef typename std::remove_reference<F_func_>::type _no_ref_F_func_;

      explicit _c_timeline_constructor(double runtime_, F_func_ && func_)
         : runtime_(runtime_), _tmp_func_(new F_func_(std::forward<F_func_>(func_)))
      {}
      void operator()()
      {
         ::ecore_animator_timeline_constructor(runtime_, ::efl::eolian::get_callback<Ecore_Timeline_Cb, _no_ref_F_func_ >(), _tmp_func_);
      }
      void register_ev_del_free_callback(Eo* _eoptr)
      {
         (void) _eoptr;
         eo_do(_eoptr,
            eo_event_callback_add(EO_EV_DEL, &::efl::eolian::free_callback_calback<_no_ref_F_func_>, _tmp_func_));
      }

      double runtime_;
      _no_ref_F_func_* _tmp_func_;
   };
   /// @endcond

   //@{
   /**
      @brief Constructs a new ecore::animator object.

      Constructs a new ecore::animator object. If you want this object to be a child
      of another Eo object, use an @ref efl::eo::parent expression, like the example.

      Since this class have necessary constructor methods, you must call each one of them
      in the right place within this constructor parameters.

      Example:
      @code
      ecore::animator my_animator(efl::eo::parent = parent_object,
         my_animator.constructor(func_),
         my_animator.timeline_constructor(runtime_, func_));
      @endcode

      @see animator::constructor
      @see animator::timeline_constructor
      @see animator(Eo* eo)
   */
   template <typename F0, typename F1>
   explicit animator(::efl::eo::parent_type _p, _c_constructor<F0> _c0, _c_timeline_constructor<F1> _c1)
      : animator(_ctors_call(_p, _c0, _c1))
   {}

   template <typename F0, typename F1>
   explicit animator(_c_constructor<F0> _c0, _c_timeline_constructor<F1> _c1)
      : animator(_ctors_call(::efl::eo::parent = nullptr, _c0, _c1))
   {}
   //@}

   /// @brief Eo Constructor.
   ///
   /// Constructs the object from an Eo* pointer stealing its ownership.
   ///
   /// @param eo The Eo object pointer.
   ///
   explicit animator(Eo* eo)
      : ::efl::eo::concrete(eo)
   {}

   /// @brief nullptr_t Constructor.
   ///
   /// Constructs an empty (null) object.
   ///
   explicit animator(std::nullptr_t)
      : ::efl::eo::concrete(nullptr)
   {}

   /// @brief Copy Constructor.
   ///
   animator(animator const& other)
      : animator(eo_ref(other._eo_ptr()))
   {}

   ~animator() {}

   /// @param func 
   /// @param data 
   ///
   template <typename F_func_>
   static _c_constructor<F_func_> constructor(F_func_ && func_);

   /// @param runtime 
   /// @param func 
   /// @param data 
   ///
   template <typename F_func_>
   static _c_timeline_constructor<F_func_> timeline_constructor(double runtime_, F_func_ && func_);

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
            &::efl::eo::_detail::event_callback<::ecore::animator, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::ecore::animator, function_type>,
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
            &::efl::eo::_detail::event_callback<::ecore::animator, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::ecore::animator, function_type>,
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
            &::efl::eo::_detail::event_callback<::ecore::animator, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::ecore::animator, function_type>,
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
      return(ECORE_ANIMATOR_CLASS);
   }

   /// @cond LOCAL
   struct address_of
      : ::eo_cxx::ecore::animator::address_of<address_of>
      , ::eo_cxx::eo::base::address_of<address_of>
      , ::efl::eo::detail::concrete_address_of
   {
      explicit address_of(::ecore::animator* p)
         : ::efl::eo::detail::concrete_address_of(p)
      {}
   };
   address_of operator&() { return address_of(this); }

   struct address_const_of
      : ::eo_cxx::ecore::animator::address_const_of<address_const_of>
      , ::eo_cxx::eo::base::address_const_of<address_const_of>
      , ::efl::eo::detail::concrete_address_const_of
   {
      explicit address_const_of(::ecore::animator const* p)
         : ::efl::eo::detail::concrete_address_const_of(p)
      {}
   };
   address_const_of operator&() const { return address_const_of(this); }

   /// @endcond

private:

   /// @internal
   template <typename F0, typename F1>
   static Eo* _ctors_call(::efl::eo::parent_type _p, _c_constructor<F0> _c0, _c_timeline_constructor<F1> _c1)
   {
      Eo* _ret_eo = eo_add_ref(ECORE_ANIMATOR_CLASS, _p._eo_raw, _c0(), _c1());

      _c0.register_ev_del_free_callback(_ret_eo);
      _c1.register_ev_del_free_callback(_ret_eo);
      return _ret_eo;
   }

   /// @internal
   Eo* _concrete_eo_ptr() const { return _eo_ptr(); }
};

static_assert(sizeof(::ecore::animator) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<::ecore::animator>::value, "");

}


#include "ecore_animator.eo.impl.hh"

#endif // EFL_GENERATED_ECORE_ANIMATOR_HH

