#ifndef EFL_GENERATED_EO_BASE_HH
#define EFL_GENERATED_EO_BASE_HH

extern "C"
{
#include <Efl.h>
}
#include <Eo.hh>

#include <eo_cxx_interop.hh>

extern "C"
{
#include "eo_base.eo.h"
}

#include <string>

namespace eo {

struct base;

}

/// @cond EO_CXX_ABSTRACT
namespace eo_cxx {

namespace eo {

struct base
{
   ::eo::base constructor() const;

   void destructor() const;

   ::eo::base finalize() const;

   /// @param[out] wref 
   ///
   void wref_add(::eo::base* wref_) const;

   /// @param wref 
   ///
   void wref_del(Eo_Base ** wref_) const;

   /// @param key 
   /// @param data 
   ///
   void key_data_set(::efl::eina::string_view key_, const void * data_) const;

   /// @param key 
   ///
   void * key_data_get(::efl::eina::string_view key_) const;

   /// @param key 
   ///
   void key_data_del(::efl::eina::string_view key_) const;

   void event_thaw() const;

   void event_freeze() const;

   static void event_global_thaw();

   static void event_global_freeze();

   /// @param desc 
   /// @param priority 
   /// @param cb 
   /// @param data 
   ///
   void event_callback_priority_add(const Eo_Event_Description * desc_, Eo_Callback_Priority priority_, Eo_Event_Cb cb_, const void * data_) const;

   /// @param desc 
   /// @param func 
   /// @param user_data 
   ///
   void event_callback_del(const Eo_Event_Description * desc_, Eo_Event_Cb func_, const void * user_data_) const;

   /// @param array 
   /// @param priority 
   /// @param data 
   ///
   void event_callback_array_priority_add(const Eo_Callback_Array_Item * array_, Eo_Callback_Priority priority_, const void * data_) const;

   /// @param array 
   /// @param user_data 
   ///
   void event_callback_array_del(const Eo_Callback_Array_Item * array_, const void * user_data_) const;

   /// @param desc 
   /// @param event_info 
   ///
   bool event_callback_call(const Eo_Event_Description * desc_, void * event_info_) const;

   /// @param desc 
   /// @param new_obj 
   ///
   void event_callback_forwarder_add(const Eo_Event_Description * desc_, ::eo::base new_obj_) const;

   /// @param desc 
   /// @param new_obj 
   ///
   void event_callback_forwarder_del(const Eo_Event_Description * desc_, ::eo::base new_obj_) const;

   /// @param root_node 
   ///
   void dbg_info_get(Eo_Dbg_Info * root_node_) const;

   Eina_Iterator * children_iterator_new() const;

#ifdef BASE_BETA
   /// @param comp_obj 
   ///
   bool composite_attach(::eo::base comp_obj_) const;
#endif

#ifdef BASE_BETA
   /// @param comp_obj 
   ///
   bool composite_detach(::eo::base comp_obj_) const;
#endif

#ifdef BASE_BETA
   bool composite_part_is() const;
#endif

   ::eo::base parent_get() const;

   void parent_set(::eo::base parent_) const;

   int event_global_freeze_count_get() const;

   int event_freeze_count_get() const;

   bool finalized_get() const;

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
            &::efl::eo::_detail::event_callback<::eo::base, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::eo::base, function_type>,
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
            &::efl::eo::_detail::event_callback<::eo::base, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::eo::base, function_type>,
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
            &::efl::eo::_detail::event_callback<::eo::base, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::eo::base, function_type>,
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
      return(EO_BASE_CLASS);
   }

   operator ::eo::base() const;
   operator ::eo::base&();
   operator ::eo::base const&() const;

   /// @cond LOCAL
   template <typename D>
   struct address_of
   {
      operator ::eo::base*() const { return static_cast<::eo::base*>(static_cast<D const*>(this)->p); }
      operator ::eo::base const*() const { return static_cast<::eo::base const*>(static_cast<D const*>(this)->p); }
   };

   template <typename D>
   struct address_const_of
   {
      operator ::eo::base const*() const { return static_cast<::eo::base const*>(static_cast<D const*>(this)->p); }
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

namespace eo {

/// @brief Class base
struct base
      : ::efl::eo::concrete
{
   //@{
   /**
      @brief Constructs a new eo::base object.

      Constructs a new eo::base object. If you want this object to be a child
      of another Eo object, use an @ref efl::eo::parent expression, like the example.

      Example:
      @code
      eo::base my_base(efl::eo::parent = parent_object);
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

   ::eo::base constructor() const;

   void destructor() const;

   ::eo::base finalize() const;

   /// @param[out] wref 
   ///
   void wref_add(::eo::base* wref_) const;

   /// @param wref 
   ///
   void wref_del(Eo_Base ** wref_) const;

   /// @param key 
   /// @param data 
   ///
   void key_data_set(::efl::eina::string_view key_, const void * data_) const;

   /// @param key 
   ///
   void * key_data_get(::efl::eina::string_view key_) const;

   /// @param key 
   ///
   void key_data_del(::efl::eina::string_view key_) const;

   void event_thaw() const;

   void event_freeze() const;

   static void event_global_thaw();

   static void event_global_freeze();

   /// @param desc 
   /// @param priority 
   /// @param cb 
   /// @param data 
   ///
   void event_callback_priority_add(const Eo_Event_Description * desc_, Eo_Callback_Priority priority_, Eo_Event_Cb cb_, const void * data_) const;

   /// @param desc 
   /// @param func 
   /// @param user_data 
   ///
   void event_callback_del(const Eo_Event_Description * desc_, Eo_Event_Cb func_, const void * user_data_) const;

   /// @param array 
   /// @param priority 
   /// @param data 
   ///
   void event_callback_array_priority_add(const Eo_Callback_Array_Item * array_, Eo_Callback_Priority priority_, const void * data_) const;

   /// @param array 
   /// @param user_data 
   ///
   void event_callback_array_del(const Eo_Callback_Array_Item * array_, const void * user_data_) const;

   /// @param desc 
   /// @param event_info 
   ///
   bool event_callback_call(const Eo_Event_Description * desc_, void * event_info_) const;

   /// @param desc 
   /// @param new_obj 
   ///
   void event_callback_forwarder_add(const Eo_Event_Description * desc_, ::eo::base new_obj_) const;

   /// @param desc 
   /// @param new_obj 
   ///
   void event_callback_forwarder_del(const Eo_Event_Description * desc_, ::eo::base new_obj_) const;

   /// @param root_node 
   ///
   void dbg_info_get(Eo_Dbg_Info * root_node_) const;

   Eina_Iterator * children_iterator_new() const;

#ifdef BASE_BETA
   /// @param comp_obj 
   ///
   bool composite_attach(::eo::base comp_obj_) const;
#endif

#ifdef BASE_BETA
   /// @param comp_obj 
   ///
   bool composite_detach(::eo::base comp_obj_) const;
#endif

#ifdef BASE_BETA
   bool composite_part_is() const;
#endif

   ::eo::base parent_get() const;

   void parent_set(::eo::base parent_) const;

   int event_global_freeze_count_get() const;

   int event_freeze_count_get() const;

   bool finalized_get() const;

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
            &::efl::eo::_detail::event_callback<::eo::base, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::eo::base, function_type>,
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
            &::efl::eo::_detail::event_callback<::eo::base, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::eo::base, function_type>,
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
            &::efl::eo::_detail::event_callback<::eo::base, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::eo::base, function_type>,
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
      return(EO_BASE_CLASS);
   }

   /// @cond LOCAL
   struct address_of
      : ::eo_cxx::eo::base::address_of<address_of>
      , ::efl::eo::detail::concrete_address_of
   {
      explicit address_of(::eo::base* p)
         : ::efl::eo::detail::concrete_address_of(p)
      {}
   };
   address_of operator&() { return address_of(this); }

   struct address_const_of
      : ::eo_cxx::eo::base::address_const_of<address_const_of>
      , ::efl::eo::detail::concrete_address_const_of
   {
      explicit address_const_of(::eo::base const* p)
         : ::efl::eo::detail::concrete_address_const_of(p)
      {}
   };
   address_const_of operator&() const { return address_const_of(this); }

   /// @endcond

private:

   /// @internal
   static Eo* _ctors_call(::efl::eo::parent_type _p)
   {
      Eo* _ret_eo = eo_add_ref(EO_BASE_CLASS, _p._eo_raw);

      return _ret_eo;
   }

   /// @internal
   Eo* _concrete_eo_ptr() const { return _eo_ptr(); }
};

static_assert(sizeof(::eo::base) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<::eo::base>::value, "");

}


#include "eo_base.eo.impl.hh"

#endif // EFL_GENERATED_EO_BASE_HH

