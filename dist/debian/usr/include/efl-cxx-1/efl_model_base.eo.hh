#ifndef EFL_GENERATED_EFL_MODEL_BASE_HH
#define EFL_GENERATED_EFL_MODEL_BASE_HH

extern "C"
{
#include <Efl.h>
}
#include <Eo.hh>

#include <eo_cxx_interop.hh>

extern "C"
{
#include "efl_model_base.eo.h"
}

#include <eina-cxx/eina_accessor.hh>
#include <eo_base.eo.hh>
#include <string>

namespace efl { namespace model {

struct base;

} }

/// @cond EO_CXX_ABSTRACT
namespace eo_cxx {

namespace efl { namespace model {

struct base
{
   void load() const;

   void unload() const;

   void properties_load() const;

   void children_load() const;

   ::eo::base child_add() const;

   /// @param child 
   ///
   Efl_Model_Load_Status child_del(::eo::base child_) const;

   Efl_Model_Load_Status load_status_get() const;

   Efl_Model_Load_Status properties_get(Eina_Array * const* properties_) const;

   Efl_Model_Load_Status property_get(::efl::eina::string_view property_, const Eina_Value ** value_) const;

   Efl_Model_Load_Status property_set(::efl::eina::string_view property_, const Eina_Value * value_) const;

   Efl_Model_Load_Status children_slice_get(unsigned int start_, unsigned int count_, Eina_Accessor ** children_accessor_) const;

   Efl_Model_Load_Status children_count_get(unsigned int* children_count_) const;

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
            &::efl::eo::_detail::event_callback<::efl::model::base, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::efl::model::base, function_type>,
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
            &::efl::eo::_detail::event_callback<::efl::model::base, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::efl::model::base, function_type>,
         EFL_MODEL_BASE_EVENT_PROPERTIES_CHANGED );
   }

   template <typename T>
   void
   callback_properties_changed_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EFL_MODEL_BASE_EVENT_PROPERTIES_CHANGED, info));
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
            &::efl::eo::_detail::event_callback<::efl::model::base, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::efl::model::base, function_type>,
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
            &::efl::eo::_detail::event_callback<::efl::model::base, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::efl::model::base, function_type>,
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
            &::efl::eo::_detail::event_callback<::efl::model::base, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::efl::model::base, function_type>,
         EFL_MODEL_BASE_EVENT_CHILDREN_COUNT_CHANGED );
   }

   template <typename T>
   void
   callback_children_count_changed_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EFL_MODEL_BASE_EVENT_CHILDREN_COUNT_CHANGED, info));
   }



   static Eo_Class const* _eo_class()
   {
      return(EFL_MODEL_BASE_INTERFACE);
   }

   operator ::efl::model::base() const;
   operator ::efl::model::base&();
   operator ::efl::model::base const&() const;

   /// @cond LOCAL
   template <typename D>
   struct address_of
   {
      operator ::efl::model::base*() const { return static_cast<::efl::model::base*>(static_cast<D const*>(this)->p); }
      operator ::efl::model::base const*() const { return static_cast<::efl::model::base const*>(static_cast<D const*>(this)->p); }
   };

   template <typename D>
   struct address_const_of
   {
      operator ::efl::model::base const*() const { return static_cast<::efl::model::base const*>(static_cast<D const*>(this)->p); }
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

namespace efl { namespace model {

/// @brief Class base
struct base
      : ::efl::eo::concrete
{
   //@{
   /**
      @brief Constructs a new efl::model::base object.

      Constructs a new efl::model::base object. If you want this object to be a child
      of another Eo object, use an @ref efl::eo::parent expression, like the example.

      Example:
      @code
      efl::model::base my_base(efl::eo::parent = parent_object);
      @endcode

      @see base(Eo* eo)
   */
   explicit base(::efl::eo::parent_type _p)
      : base(_ctors_call(_p))
   {}

   explicit base()
      : base(_ctors_call(::efl::eo::parent = nullptr))
   {}
   //@}

   /// @brief Eo Constructor.
   ///
   /// Constructs the object from an Eo* pointer stealing its ownership.
   ///
   /// @param eo The Eo object pointer.
   ///
   explicit base(Eo* eo)
      : ::efl::eo::concrete(eo)
   {}

   /// @brief nullptr_t Constructor.
   ///
   /// Constructs an empty (null) object.
   ///
   explicit base(std::nullptr_t)
      : ::efl::eo::concrete(nullptr)
   {}

   /// @brief Copy Constructor.
   ///
   base(base const& other)
      : base(eo_ref(other._eo_ptr()))
   {}

   ~base() {}

   void load() const;

   void unload() const;

   void properties_load() const;

   void children_load() const;

   ::eo::base child_add() const;

   /// @param child 
   ///
   Efl_Model_Load_Status child_del(::eo::base child_) const;

   Efl_Model_Load_Status load_status_get() const;

   Efl_Model_Load_Status properties_get(Eina_Array * const* properties_) const;

   Efl_Model_Load_Status property_get(::efl::eina::string_view property_, const Eina_Value ** value_) const;

   Efl_Model_Load_Status property_set(::efl::eina::string_view property_, const Eina_Value * value_) const;

   Efl_Model_Load_Status children_slice_get(unsigned int start_, unsigned int count_, Eina_Accessor ** children_accessor_) const;

   Efl_Model_Load_Status children_count_get(unsigned int* children_count_) const;

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
            &::efl::eo::_detail::event_callback<::efl::model::base, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::efl::model::base, function_type>,
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
            &::efl::eo::_detail::event_callback<::efl::model::base, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::efl::model::base, function_type>,
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
            &::efl::eo::_detail::event_callback<::efl::model::base, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::efl::model::base, function_type>,
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
   callback_load_status_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EFL_MODEL_BASE_EVENT_LOAD_STATUS, priority_,
            &::efl::eo::_detail::event_callback<::efl::model::base, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::efl::model::base, function_type>,
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
            &::efl::eo::_detail::event_callback<::efl::model::base, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::efl::model::base, function_type>,
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
      return(EFL_MODEL_BASE_INTERFACE);
   }

   /// @cond LOCAL
   struct address_of
      : ::eo_cxx::efl::model::base::address_of<address_of>
      , ::efl::eo::detail::concrete_address_of
   {
      explicit address_of(::efl::model::base* p)
         : ::efl::eo::detail::concrete_address_of(p)
      {}
   };
   address_of operator&() { return address_of(this); }

   struct address_const_of
      : ::eo_cxx::efl::model::base::address_const_of<address_const_of>
      , ::efl::eo::detail::concrete_address_const_of
   {
      explicit address_const_of(::efl::model::base const* p)
         : ::efl::eo::detail::concrete_address_const_of(p)
      {}
   };
   address_const_of operator&() const { return address_const_of(this); }

   /// @endcond

private:

   /// @internal
   static Eo* _ctors_call(::efl::eo::parent_type _p)
   {
      Eo* _ret_eo = eo_add_ref(EFL_MODEL_BASE_INTERFACE, _p._eo_raw);

      return _ret_eo;
   }

   /// @internal
   Eo* _concrete_eo_ptr() const { return _eo_ptr(); }
};

static_assert(sizeof(::efl::model::base) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<::efl::model::base>::value, "");

} }


#include "efl_model_base.eo.impl.hh"

#endif // EFL_GENERATED_EFL_MODEL_BASE_HH

