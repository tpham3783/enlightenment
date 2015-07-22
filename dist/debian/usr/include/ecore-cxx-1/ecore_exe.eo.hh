#ifndef EFL_GENERATED_ECORE_EXE_HH
#define EFL_GENERATED_ECORE_EXE_HH

extern "C"
{
#include <Efl.h>
}
#include <Eo.hh>

#include <eo_cxx_interop.hh>

extern "C"
{
#include "ecore_exe.eo.h"
}

#include "eo_base.eo.hh"
#include "efl_control.eo.hh"
#include <string>

namespace ecore {

struct exe;

}

/// @cond EO_CXX_ABSTRACT
namespace eo_cxx {

namespace ecore {

struct exe
{
   void command_get(const char ** exe_cmd_, Ecore_Exe_Flags* flags_) const;

   void command_set(::efl::eina::string_view exe_cmd_, Ecore_Exe_Flags flags_) const;

   template <typename F>
   ::efl::eo::signal_connection
   callback_data_get_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (ECORE_EXE_EVENT_DATA_GET, priority_,
            &::efl::eo::_detail::event_callback<::ecore::exe, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::ecore::exe, function_type>,
         ECORE_EXE_EVENT_DATA_GET );
   }

   template <typename T>
   void
   callback_data_get_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (ECORE_EXE_EVENT_DATA_GET, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_data_error_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (ECORE_EXE_EVENT_DATA_ERROR, priority_,
            &::efl::eo::_detail::event_callback<::ecore::exe, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::ecore::exe, function_type>,
         ECORE_EXE_EVENT_DATA_ERROR );
   }

   template <typename T>
   void
   callback_data_error_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (ECORE_EXE_EVENT_DATA_ERROR, info));
   }



   static Eo_Class const* _eo_class()
   {
      return(ECORE_EXE_CLASS);
   }

   operator ::ecore::exe() const;
   operator ::ecore::exe&();
   operator ::ecore::exe const&() const;

   /// @cond LOCAL
   template <typename D>
   struct address_of
   {
      operator ::ecore::exe*() const { return static_cast<::ecore::exe*>(static_cast<D const*>(this)->p); }
      operator ::ecore::exe const*() const { return static_cast<::ecore::exe const*>(static_cast<D const*>(this)->p); }
   };

   template <typename D>
   struct address_const_of
   {
      operator ::ecore::exe const*() const { return static_cast<::ecore::exe const*>(static_cast<D const*>(this)->p); }
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

/// @brief Class exe
struct exe
      : ::efl::eo::concrete
      , EO_CXX_INHERIT(efl::control)
      , EO_CXX_INHERIT(eo::base)
{
   /// @cond LOCAL
   struct _c_command
   {

      explicit _c_command(::efl::eina::string_view exe_cmd_, Ecore_Exe_Flags flags_)
         : exe_cmd_(exe_cmd_), flags_(flags_)
      {}
      void operator()()
      {
         ::ecore_obj_exe_command_set(::efl::eolian::to_c(exe_cmd_), flags_);
      }
      void register_ev_del_free_callback(Eo* _eoptr)
      {
         (void) _eoptr;
      }

      ::efl::eina::string_view exe_cmd_;
      Ecore_Exe_Flags flags_;
   };
   /// @endcond

   //@{
   /**
      @brief Constructs a new ecore::exe object.

      Constructs a new ecore::exe object. If you want this object to be a child
      of another Eo object, use an @ref efl::eo::parent expression, like the example.

      Since this class have a necessary constructor method, you must call it
      in the right place within this constructor parameters.

      Example:
      @code
      ecore::exe my_exe(efl::eo::parent = parent_object,
         my_exe.command(exe_cmd_, flags_));
      @endcode

      @see exe::command
      @see exe(Eo* eo)
   */
   explicit exe(::efl::eo::parent_type _p, _c_command _c0)
      : exe(_ctors_call(_p, _c0))
   {}

   explicit exe(_c_command _c0)
      : exe(_ctors_call(::efl::eo::parent = nullptr, _c0))
   {}
   //@}

   /// @brief Eo Constructor.
   ///
   /// Constructs the object from an Eo* pointer stealing its ownership.
   ///
   /// @param eo The Eo object pointer.
   ///
   explicit exe(Eo* eo)
      : ::efl::eo::concrete(eo)
   {}

   /// @brief nullptr_t Constructor.
   ///
   /// Constructs an empty (null) object.
   ///
   explicit exe(std::nullptr_t)
      : ::efl::eo::concrete(nullptr)
   {}

   /// @brief Copy Constructor.
   ///
   exe(exe const& other)
      : exe(eo_ref(other._eo_ptr()))
   {}

   ~exe() {}

   static _c_command command(::efl::eina::string_view exe_cmd_, Ecore_Exe_Flags flags_);

   void command_get(const char ** exe_cmd_, Ecore_Exe_Flags* flags_) const;

   void command_set(::efl::eina::string_view exe_cmd_, Ecore_Exe_Flags flags_) const;

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
            &::efl::eo::_detail::event_callback<::ecore::exe, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::ecore::exe, function_type>,
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
            &::efl::eo::_detail::event_callback<::ecore::exe, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::ecore::exe, function_type>,
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
   callback_data_error_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (ECORE_EXE_EVENT_DATA_ERROR, priority_,
            &::efl::eo::_detail::event_callback<::ecore::exe, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::ecore::exe, function_type>,
         ECORE_EXE_EVENT_DATA_ERROR );
   }

   template <typename T>
   void
   callback_data_error_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (ECORE_EXE_EVENT_DATA_ERROR, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_data_get_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (ECORE_EXE_EVENT_DATA_GET, priority_,
            &::efl::eo::_detail::event_callback<::ecore::exe, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::ecore::exe, function_type>,
         ECORE_EXE_EVENT_DATA_GET );
   }

   template <typename T>
   void
   callback_data_get_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (ECORE_EXE_EVENT_DATA_GET, info));
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
            &::efl::eo::_detail::event_callback<::ecore::exe, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::ecore::exe, function_type>,
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
      return(ECORE_EXE_CLASS);
   }

   /// @cond LOCAL
   struct address_of
      : ::eo_cxx::ecore::exe::address_of<address_of>
      , ::eo_cxx::efl::control::address_of<address_of>
      , ::eo_cxx::eo::base::address_of<address_of>
      , ::efl::eo::detail::concrete_address_of
   {
      explicit address_of(::ecore::exe* p)
         : ::efl::eo::detail::concrete_address_of(p)
      {}
   };
   address_of operator&() { return address_of(this); }

   struct address_const_of
      : ::eo_cxx::ecore::exe::address_const_of<address_const_of>
      , ::eo_cxx::efl::control::address_const_of<address_const_of>
      , ::eo_cxx::eo::base::address_const_of<address_const_of>
      , ::efl::eo::detail::concrete_address_const_of
   {
      explicit address_const_of(::ecore::exe const* p)
         : ::efl::eo::detail::concrete_address_const_of(p)
      {}
   };
   address_const_of operator&() const { return address_const_of(this); }

   /// @endcond

private:

   /// @internal
   static Eo* _ctors_call(::efl::eo::parent_type _p, _c_command _c0)
   {
      Eo* _ret_eo = eo_add_ref(ECORE_EXE_CLASS, _p._eo_raw, _c0());

      _c0.register_ev_del_free_callback(_ret_eo);
      return _ret_eo;
   }

   /// @internal
   Eo* _concrete_eo_ptr() const { return _eo_ptr(); }
};

static_assert(sizeof(::ecore::exe) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<::ecore::exe>::value, "");

}


#include "ecore_exe.eo.impl.hh"

#endif // EFL_GENERATED_ECORE_EXE_HH

