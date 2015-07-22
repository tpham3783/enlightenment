#ifndef EFL_GENERATED_EIO_MODEL_HH
#define EFL_GENERATED_EIO_MODEL_HH

extern "C"
{
#include <Efl.h>
}
#include <Eo.hh>

#include <eo_cxx_interop.hh>

extern "C"
{
#include "eio_model.eo.h"
}

#include "eo_base.eo.hh"
#include "efl_model_base.eo.hh"
#include <Eio.h>
#include <string>

namespace eio {

struct model;

}

/// @cond EO_CXX_ABSTRACT
namespace eo_cxx {

namespace eio {

struct model
{
   /// @param filter_cb 
   /// @param userdata 
   ///
   template <typename F_filter_cb_>
   void children_filter_set(F_filter_cb_ && filter_cb_) const;

   /// @param path 
   ///
   void path_set(::efl::eina::string_view path_) const;



   static Eo_Class const* _eo_class()
   {
      return(EIO_MODEL_CLASS);
   }

   operator ::eio::model() const;
   operator ::eio::model&();
   operator ::eio::model const&() const;

   /// @cond LOCAL
   template <typename D>
   struct address_of
   {
      operator ::eio::model*() const { return static_cast<::eio::model*>(static_cast<D const*>(this)->p); }
      operator ::eio::model const*() const { return static_cast<::eio::model const*>(static_cast<D const*>(this)->p); }
   };

   template <typename D>
   struct address_const_of
   {
      operator ::eio::model const*() const { return static_cast<::eio::model const*>(static_cast<D const*>(this)->p); }
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

namespace eio {

/// @brief Class model
struct model
      : ::efl::eo::concrete
      , EO_CXX_INHERIT(efl::model::base)
      , EO_CXX_INHERIT(eo::base)
{
   //@{
   /**
      @brief Constructs a new eio::model object.

      Constructs a new eio::model object. If you want this object to be a child
      of another Eo object, use an @ref efl::eo::parent expression, like the example.

      Example:
      @code
      eio::model my_model(efl::eo::parent = parent_object);
      @endcode

      @see model(Eo* eo)
   */
   explicit model(::efl::eo::parent_type _p)
      : model(_ctors_call(_p))
   {}

   explicit model()
      : model(_ctors_call(::efl::eo::parent = nullptr))
   {}
   //@}

   /// @brief Eo Constructor.
   ///
   /// Constructs the object from an Eo* pointer stealing its ownership.
   ///
   /// @param eo The Eo object pointer.
   ///
   explicit model(Eo* eo)
      : ::efl::eo::concrete(eo)
   {}

   /// @brief nullptr_t Constructor.
   ///
   /// Constructs an empty (null) object.
   ///
   explicit model(std::nullptr_t)
      : ::efl::eo::concrete(nullptr)
   {}

   /// @brief Copy Constructor.
   ///
   model(model const& other)
      : model(eo_ref(other._eo_ptr()))
   {}

   ~model() {}

   /// @param filter_cb 
   /// @param userdata 
   ///
   template <typename F_filter_cb_>
   void children_filter_set(F_filter_cb_ && filter_cb_) const;

   /// @param path 
   ///
   void path_set(::efl::eina::string_view path_) const;

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
            &::efl::eo::_detail::event_callback<::eio::model, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::eio::model, function_type>,
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
            &::efl::eo::_detail::event_callback<::eio::model, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::eio::model, function_type>,
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
   callback_child_added_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EFL_MODEL_BASE_EVENT_CHILD_ADDED, priority_,
            &::efl::eo::_detail::event_callback<::eio::model, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::eio::model, function_type>,
         EFL_MODEL_BASE_EVENT_CHILD_ADDED );
   }

   template <typename T>
   void
   callback_child_added_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EFL_MODEL_BASE_EVENT_CHILD_ADDED, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_child_removed_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EFL_MODEL_BASE_EVENT_CHILD_REMOVED, priority_,
            &::efl::eo::_detail::event_callback<::eio::model, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::eio::model, function_type>,
         EFL_MODEL_BASE_EVENT_CHILD_REMOVED );
   }

   template <typename T>
   void
   callback_child_removed_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EFL_MODEL_BASE_EVENT_CHILD_REMOVED, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_children_count_changed_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EFL_MODEL_BASE_EVENT_CHILDREN_COUNT_CHANGED, priority_,
            &::efl::eo::_detail::event_callback<::eio::model, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::eio::model, function_type>,
         EFL_MODEL_BASE_EVENT_CHILDREN_COUNT_CHANGED );
   }

   template <typename T>
   void
   callback_children_count_changed_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EFL_MODEL_BASE_EVENT_CHILDREN_COUNT_CHANGED, info));
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
            &::efl::eo::_detail::event_callback<::eio::model, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::eio::model, function_type>,
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
   callback_load_status_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EFL_MODEL_BASE_EVENT_LOAD_STATUS, priority_,
            &::efl::eo::_detail::event_callback<::eio::model, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::eio::model, function_type>,
         EFL_MODEL_BASE_EVENT_LOAD_STATUS );
   }

   template <typename T>
   void
   callback_load_status_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EFL_MODEL_BASE_EVENT_LOAD_STATUS, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_properties_changed_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EFL_MODEL_BASE_EVENT_PROPERTIES_CHANGED, priority_,
            &::efl::eo::_detail::event_callback<::eio::model, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::eio::model, function_type>,
         EFL_MODEL_BASE_EVENT_PROPERTIES_CHANGED );
   }

   template <typename T>
   void
   callback_properties_changed_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EFL_MODEL_BASE_EVENT_PROPERTIES_CHANGED, info));
   }



   static Eo_Class const* _eo_class()
   {
      return(EIO_MODEL_CLASS);
   }

   /// @cond LOCAL
   struct address_of
      : ::eo_cxx::eio::model::address_of<address_of>
      , ::eo_cxx::efl::model::base::address_of<address_of>
      , ::eo_cxx::eo::base::address_of<address_of>
      , ::efl::eo::detail::concrete_address_of
   {
      explicit address_of(::eio::model* p)
         : ::efl::eo::detail::concrete_address_of(p)
      {}
   };
   address_of operator&() { return address_of(this); }

   struct address_const_of
      : ::eo_cxx::eio::model::address_const_of<address_const_of>
      , ::eo_cxx::efl::model::base::address_const_of<address_const_of>
      , ::eo_cxx::eo::base::address_const_of<address_const_of>
      , ::efl::eo::detail::concrete_address_const_of
   {
      explicit address_const_of(::eio::model const* p)
         : ::efl::eo::detail::concrete_address_const_of(p)
      {}
   };
   address_const_of operator&() const { return address_const_of(this); }

   /// @endcond

private:

   /// @internal
   static Eo* _ctors_call(::efl::eo::parent_type _p)
   {
      Eo* _ret_eo = eo_add_ref(EIO_MODEL_CLASS, _p._eo_raw);

      return _ret_eo;
   }

   /// @internal
   Eo* _concrete_eo_ptr() const { return _eo_ptr(); }
};

static_assert(sizeof(::eio::model) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<::eio::model>::value, "");

}


#include "eio_model.eo.impl.hh"

#endif // EFL_GENERATED_EIO_MODEL_HH

