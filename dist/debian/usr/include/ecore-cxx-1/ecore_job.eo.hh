#ifndef EFL_GENERATED_ECORE_JOB_HH
#define EFL_GENERATED_ECORE_JOB_HH

extern "C"
{
#include <Efl.h>
}
#include <Eo.hh>

#include <eo_cxx_interop.hh>

extern "C"
{
#include "ecore_job.eo.h"
}

#include "eo_base.eo.hh"
#include <Ecore.h>

namespace ecore {

struct job;

}

/// @cond EO_CXX_ABSTRACT
namespace eo_cxx {

namespace ecore {

struct job
{


   static Eo_Class const* _eo_class()
   {
      return(ECORE_JOB_CLASS);
   }

   operator ::ecore::job() const;
   operator ::ecore::job&();
   operator ::ecore::job const&() const;

   /// @cond LOCAL
   template <typename D>
   struct address_of
   {
      operator ::ecore::job*() const { return static_cast<::ecore::job*>(static_cast<D const*>(this)->p); }
      operator ::ecore::job const*() const { return static_cast<::ecore::job const*>(static_cast<D const*>(this)->p); }
   };

   template <typename D>
   struct address_const_of
   {
      operator ::ecore::job const*() const { return static_cast<::ecore::job const*>(static_cast<D const*>(this)->p); }
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

/// @brief Class job
struct job
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
         ::ecore_job_constructor(::efl::eolian::get_callback<Ecore_Cb, _no_ref_F_func_ >(), _tmp_func_);
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
      @brief Constructs a new ecore::job object.

      Constructs a new ecore::job object. If you want this object to be a child
      of another Eo object, use an @ref efl::eo::parent expression, like the example.

      Since this class have a necessary constructor method, you must call it
      in the right place within this constructor parameters.

      Example:
      @code
      ecore::job my_job(efl::eo::parent = parent_object,
         my_job.constructor(func_));
      @endcode

      @see job::constructor
      @see job(Eo* eo)
   */
   template <typename F0>
   explicit job(::efl::eo::parent_type _p, _c_constructor<F0> _c0)
      : job(_ctors_call(_p, _c0))
   {}

   template <typename F0>
   explicit job(_c_constructor<F0> _c0)
      : job(_ctors_call(::efl::eo::parent = nullptr, _c0))
   {}
   //@}

   /// @brief Eo Constructor.
   ///
   /// Constructs the object from an Eo* pointer stealing its ownership.
   ///
   /// @param eo The Eo object pointer.
   ///
   explicit job(Eo* eo)
      : ::efl::eo::concrete(eo)
   {}

   /// @brief nullptr_t Constructor.
   ///
   /// Constructs an empty (null) object.
   ///
   explicit job(std::nullptr_t)
      : ::efl::eo::concrete(nullptr)
   {}

   /// @brief Copy Constructor.
   ///
   job(job const& other)
      : job(eo_ref(other._eo_ptr()))
   {}

   ~job() {}

   /// @param func 
   /// @param data 
   ///
   template <typename F_func_>
   static _c_constructor<F_func_> constructor(F_func_ && func_);

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
            &::efl::eo::_detail::event_callback<::ecore::job, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::ecore::job, function_type>,
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
            &::efl::eo::_detail::event_callback<::ecore::job, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::ecore::job, function_type>,
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
            &::efl::eo::_detail::event_callback<::ecore::job, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::ecore::job, function_type>,
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
      return(ECORE_JOB_CLASS);
   }

   /// @cond LOCAL
   struct address_of
      : ::eo_cxx::ecore::job::address_of<address_of>
      , ::eo_cxx::eo::base::address_of<address_of>
      , ::efl::eo::detail::concrete_address_of
   {
      explicit address_of(::ecore::job* p)
         : ::efl::eo::detail::concrete_address_of(p)
      {}
   };
   address_of operator&() { return address_of(this); }

   struct address_const_of
      : ::eo_cxx::ecore::job::address_const_of<address_const_of>
      , ::eo_cxx::eo::base::address_const_of<address_const_of>
      , ::efl::eo::detail::concrete_address_const_of
   {
      explicit address_const_of(::ecore::job const* p)
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
      Eo* _ret_eo = eo_add_ref(ECORE_JOB_CLASS, _p._eo_raw, _c0());

      _c0.register_ev_del_free_callback(_ret_eo);
      return _ret_eo;
   }

   /// @internal
   Eo* _concrete_eo_ptr() const { return _eo_ptr(); }
};

static_assert(sizeof(::ecore::job) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<::ecore::job>::value, "");

}


#include "ecore_job.eo.impl.hh"

#endif // EFL_GENERATED_ECORE_JOB_HH

