#ifndef EFL_GENERATED_EVAS_BOX_HH
#define EFL_GENERATED_EVAS_BOX_HH

extern "C"
{
#include <Efl.h>
}
#include <Eo.hh>

#include <eo_cxx_interop.hh>

extern "C"
{
#include "evas_box.eo.h"
}

#include "evas_smart_clipped.eo.hh"
#include <evas_object.eo.hh>
#include <string>

namespace evas {

struct box;

}

/// @cond EO_CXX_ABSTRACT
namespace eo_cxx {

namespace evas {

struct box
{
   /// @param priv 
   /// @param data 
   ///
   void layout_horizontal(Evas_Object_Box_Data * priv_, void * data_) const;

   /// @param priv 
   /// @param data 
   ///
   void layout_vertical(Evas_Object_Box_Data * priv_, void * data_) const;

   /// @param priv 
   /// @param data 
   ///
   void layout_homogeneous_max_size_horizontal(Evas_Object_Box_Data * priv_, void * data_) const;

   /// @param child 
   ///
   ::evas::object internal_remove(::evas::object child_) const;

   /// @param priv 
   /// @param data 
   ///
   void layout_flow_vertical(Evas_Object_Box_Data * priv_, void * data_) const;

   /// @param opt 
   ///
   void internal_option_free(Evas_Object_Box_Option * opt_) const;

   /// @param child 
   /// @param reference 
   ///
   Evas_Object_Box_Option * insert_after(::evas::object child_, ::evas::object reference_) const;

   /// @param clear 
   ///
   bool remove_all(bool clear_) const;

   Eina_Iterator * iterator_new() const;

   ::evas::object add_to() const;

   /// @param child 
   ///
   Evas_Object_Box_Option * append(::evas::object child_) const;

   /// @param name 
   ///
   int option_property_id_get(::efl::eina::string_view name_) const;

   /// @param child 
   ///
   Evas_Object_Box_Option * prepend(::evas::object child_) const;

   Eina_Accessor * accessor_new() const;

   /// @param child 
   ///
   Evas_Object_Box_Option * internal_append(::evas::object child_) const;

   /// @param opt 
   /// @param property 
   /// @param args 
   ///
   bool option_property_vset(Evas_Object_Box_Option * opt_, int property_, va_list * args_) const;

   /// @param pos 
   ///
   ::evas::object internal_remove_at(unsigned int pos_) const;

   /// @param pos 
   ///
   bool remove_at(unsigned int pos_) const;

   /// @param opt 
   /// @param property 
   /// @param args 
   ///
   bool option_property_vget(Evas_Object_Box_Option * opt_, int property_, va_list * args_) const;

   /// @param child 
   /// @param pos 
   ///
   Evas_Object_Box_Option * internal_insert_at(::evas::object child_, unsigned int pos_) const;

   /// @param child 
   /// @param reference 
   ///
   Evas_Object_Box_Option * insert_before(::evas::object child_, ::evas::object reference_) const;

   /// @param property 
   ///
   ::efl::eina::string_view option_property_name_get(int property_) const;

   /// @param child 
   /// @param reference 
   ///
   Evas_Object_Box_Option * internal_insert_before(::evas::object child_, ::evas::object reference_) const;

   /// @param priv 
   /// @param data 
   ///
   void layout_homogeneous_horizontal(Evas_Object_Box_Data * priv_, void * data_) const;

   /// @param child 
   ///
   Evas_Object_Box_Option * internal_option_new(::evas::object child_) const;

   /// @param priv 
   /// @param data 
   ///
   void layout_homogeneous_max_size_vertical(Evas_Object_Box_Data * priv_, void * data_) const;

   /// @param child 
   /// @param reference 
   ///
   Evas_Object_Box_Option * internal_insert_after(::evas::object child_, ::evas::object reference_) const;

   /// @param child 
   /// @param pos 
   ///
   Evas_Object_Box_Option * insert_at(::evas::object child_, unsigned int pos_) const;

   /// @param child 
   ///
   Evas_Object_Box_Option * internal_prepend(::evas::object child_) const;

   /// @param child 
   ///
   bool remove(::evas::object child_) const;

   /// @param priv 
   /// @param data 
   ///
   void layout_stack(Evas_Object_Box_Data * priv_, void * data_) const;

   /// @param priv 
   /// @param data 
   ///
   void layout_homogeneous_vertical(Evas_Object_Box_Data * priv_, void * data_) const;

   /// @param priv 
   /// @param data 
   ///
   void layout_flow_horizontal(Evas_Object_Box_Data * priv_, void * data_) const;

   void align_get(double* horizontal_, double* vertical_) const;

   void align_set(double horizontal_, double vertical_) const;

   void padding_get(Evas_Coord* horizontal_, Evas_Coord* vertical_) const;

   void padding_set(Evas_Coord horizontal_, Evas_Coord vertical_) const;

   void layout_set(Evas_Object_Box_Layout cb_, const void * data_, Eina_Free_Cb free_data_) const;

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
            (EVAS_BOX_EVENT_CHILD_ADDED, priority_,
            &::efl::eo::_detail::event_callback<::evas::box, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::box, function_type>,
         EVAS_BOX_EVENT_CHILD_ADDED );
   }

   template <typename T>
   void
   callback_child_added_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EVAS_BOX_EVENT_CHILD_ADDED, info));
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
            (EVAS_BOX_EVENT_CHILD_REMOVED, priority_,
            &::efl::eo::_detail::event_callback<::evas::box, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::box, function_type>,
         EVAS_BOX_EVENT_CHILD_REMOVED );
   }

   template <typename T>
   void
   callback_child_removed_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EVAS_BOX_EVENT_CHILD_REMOVED, info));
   }



   static Eo_Class const* _eo_class()
   {
      return(EVAS_BOX_CLASS);
   }

   operator ::evas::box() const;
   operator ::evas::box&();
   operator ::evas::box const&() const;

   /// @cond LOCAL
   template <typename D>
   struct address_of
   {
      operator ::evas::box*() const { return static_cast<::evas::box*>(static_cast<D const*>(this)->p); }
      operator ::evas::box const*() const { return static_cast<::evas::box const*>(static_cast<D const*>(this)->p); }
   };

   template <typename D>
   struct address_const_of
   {
      operator ::evas::box const*() const { return static_cast<::evas::box const*>(static_cast<D const*>(this)->p); }
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

/// @brief Class box
struct box
      : ::efl::eo::concrete
      , EO_CXX_INHERIT(efl::gfx::base)
      , EO_CXX_INHERIT(efl::gfx::stack)
      , EO_CXX_INHERIT(eo::base)
      , EO_CXX_INHERIT(evas::common_interface)
      , EO_CXX_INHERIT(evas::object)
      , EO_CXX_INHERIT(evas::object_smart)
      , EO_CXX_INHERIT(evas::signal_interface)
      , EO_CXX_INHERIT(evas::smart_clipped)
{
   //@{
   /**
      @brief Constructs a new evas::box object.

      Constructs a new evas::box object. If you want this object to be a child
      of another Eo object, use an @ref efl::eo::parent expression, like the example.

      Example:
      @code
      evas::box my_box(efl::eo::parent = parent_object);
      @endcode

      @see box(Eo* eo)
   */
   explicit box(::efl::eo::parent_type _p)
      : box(_ctors_call(_p))
   {}

   explicit box()
      : box(_ctors_call(::efl::eo::parent = nullptr))
   {}
   //@}

   /// @brief Eo Constructor.
   ///
   /// Constructs the object from an Eo* pointer stealing its ownership.
   ///
   /// @param eo The Eo object pointer.
   ///
   explicit box(Eo* eo)
      : ::efl::eo::concrete(eo)
   {}

   /// @brief nullptr_t Constructor.
   ///
   /// Constructs an empty (null) object.
   ///
   explicit box(std::nullptr_t)
      : ::efl::eo::concrete(nullptr)
   {}

   /// @brief Copy Constructor.
   ///
   box(box const& other)
      : box(eo_ref(other._eo_ptr()))
   {}

   ~box() {}

   /// @param priv 
   /// @param data 
   ///
   void layout_horizontal(Evas_Object_Box_Data * priv_, void * data_) const;

   /// @param priv 
   /// @param data 
   ///
   void layout_vertical(Evas_Object_Box_Data * priv_, void * data_) const;

   /// @param priv 
   /// @param data 
   ///
   void layout_homogeneous_max_size_horizontal(Evas_Object_Box_Data * priv_, void * data_) const;

   /// @param child 
   ///
   ::evas::object internal_remove(::evas::object child_) const;

   /// @param priv 
   /// @param data 
   ///
   void layout_flow_vertical(Evas_Object_Box_Data * priv_, void * data_) const;

   /// @param opt 
   ///
   void internal_option_free(Evas_Object_Box_Option * opt_) const;

   /// @param child 
   /// @param reference 
   ///
   Evas_Object_Box_Option * insert_after(::evas::object child_, ::evas::object reference_) const;

   /// @param clear 
   ///
   bool remove_all(bool clear_) const;

   Eina_Iterator * iterator_new() const;

   ::evas::object add_to() const;

   /// @param child 
   ///
   Evas_Object_Box_Option * append(::evas::object child_) const;

   /// @param name 
   ///
   int option_property_id_get(::efl::eina::string_view name_) const;

   /// @param child 
   ///
   Evas_Object_Box_Option * prepend(::evas::object child_) const;

   Eina_Accessor * accessor_new() const;

   /// @param child 
   ///
   Evas_Object_Box_Option * internal_append(::evas::object child_) const;

   /// @param opt 
   /// @param property 
   /// @param args 
   ///
   bool option_property_vset(Evas_Object_Box_Option * opt_, int property_, va_list * args_) const;

   /// @param pos 
   ///
   ::evas::object internal_remove_at(unsigned int pos_) const;

   /// @param pos 
   ///
   bool remove_at(unsigned int pos_) const;

   /// @param opt 
   /// @param property 
   /// @param args 
   ///
   bool option_property_vget(Evas_Object_Box_Option * opt_, int property_, va_list * args_) const;

   /// @param child 
   /// @param pos 
   ///
   Evas_Object_Box_Option * internal_insert_at(::evas::object child_, unsigned int pos_) const;

   /// @param child 
   /// @param reference 
   ///
   Evas_Object_Box_Option * insert_before(::evas::object child_, ::evas::object reference_) const;

   /// @param property 
   ///
   ::efl::eina::string_view option_property_name_get(int property_) const;

   /// @param child 
   /// @param reference 
   ///
   Evas_Object_Box_Option * internal_insert_before(::evas::object child_, ::evas::object reference_) const;

   /// @param priv 
   /// @param data 
   ///
   void layout_homogeneous_horizontal(Evas_Object_Box_Data * priv_, void * data_) const;

   /// @param child 
   ///
   Evas_Object_Box_Option * internal_option_new(::evas::object child_) const;

   /// @param priv 
   /// @param data 
   ///
   void layout_homogeneous_max_size_vertical(Evas_Object_Box_Data * priv_, void * data_) const;

   /// @param child 
   /// @param reference 
   ///
   Evas_Object_Box_Option * internal_insert_after(::evas::object child_, ::evas::object reference_) const;

   /// @param child 
   /// @param pos 
   ///
   Evas_Object_Box_Option * insert_at(::evas::object child_, unsigned int pos_) const;

   /// @param child 
   ///
   Evas_Object_Box_Option * internal_prepend(::evas::object child_) const;

   /// @param child 
   ///
   bool remove(::evas::object child_) const;

   /// @param priv 
   /// @param data 
   ///
   void layout_stack(Evas_Object_Box_Data * priv_, void * data_) const;

   /// @param priv 
   /// @param data 
   ///
   void layout_homogeneous_vertical(Evas_Object_Box_Data * priv_, void * data_) const;

   /// @param priv 
   /// @param data 
   ///
   void layout_flow_horizontal(Evas_Object_Box_Data * priv_, void * data_) const;

   void align_get(double* horizontal_, double* vertical_) const;

   void align_set(double horizontal_, double vertical_) const;

   void padding_get(Evas_Coord* horizontal_, Evas_Coord* vertical_) const;

   void padding_set(Evas_Coord horizontal_, Evas_Coord vertical_) const;

   void layout_set(Evas_Object_Box_Layout cb_, const void * data_, Eina_Free_Cb free_data_) const;

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
            &::efl::eo::_detail::event_callback<::evas::box, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::box, function_type>,
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
            &::efl::eo::_detail::event_callback<::evas::box, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::box, function_type>,
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
   callback_changed_size_hints_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_OBJECT_EVENT_CHANGED_SIZE_HINTS, priority_,
            &::efl::eo::_detail::event_callback<::evas::box, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::box, function_type>,
         EVAS_OBJECT_EVENT_CHANGED_SIZE_HINTS );
   }

   template <typename T>
   void
   callback_changed_size_hints_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EVAS_OBJECT_EVENT_CHANGED_SIZE_HINTS, info));
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
            (EVAS_BOX_EVENT_CHILD_ADDED, priority_,
            &::efl::eo::_detail::event_callback<::evas::box, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::box, function_type>,
         EVAS_BOX_EVENT_CHILD_ADDED );
   }

   template <typename T>
   void
   callback_child_added_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EVAS_BOX_EVENT_CHILD_ADDED, info));
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
            (EVAS_BOX_EVENT_CHILD_REMOVED, priority_,
            &::efl::eo::_detail::event_callback<::evas::box, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::box, function_type>,
         EVAS_BOX_EVENT_CHILD_REMOVED );
   }

   template <typename T>
   void
   callback_child_removed_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EVAS_BOX_EVENT_CHILD_REMOVED, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_focus_in_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_OBJECT_EVENT_FOCUS_IN, priority_,
            &::efl::eo::_detail::event_callback<::evas::box, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::box, function_type>,
         EVAS_OBJECT_EVENT_FOCUS_IN );
   }

   template <typename T>
   void
   callback_focus_in_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EVAS_OBJECT_EVENT_FOCUS_IN, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_focus_out_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_OBJECT_EVENT_FOCUS_OUT, priority_,
            &::efl::eo::_detail::event_callback<::evas::box, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::box, function_type>,
         EVAS_OBJECT_EVENT_FOCUS_OUT );
   }

   template <typename T>
   void
   callback_focus_out_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EVAS_OBJECT_EVENT_FOCUS_OUT, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_free_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_OBJECT_EVENT_FREE, priority_,
            &::efl::eo::_detail::event_callback<::evas::box, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::box, function_type>,
         EVAS_OBJECT_EVENT_FREE );
   }

   template <typename T>
   void
   callback_free_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EVAS_OBJECT_EVENT_FREE, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_hide_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_OBJECT_EVENT_HIDE, priority_,
            &::efl::eo::_detail::event_callback<::evas::box, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::box, function_type>,
         EVAS_OBJECT_EVENT_HIDE );
   }

   template <typename T>
   void
   callback_hide_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EVAS_OBJECT_EVENT_HIDE, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_hold_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_OBJECT_EVENT_HOLD, priority_,
            &::efl::eo::_detail::event_callback<::evas::box, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::box, function_type>,
         EVAS_OBJECT_EVENT_HOLD );
   }

   template <typename T>
   void
   callback_hold_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EVAS_OBJECT_EVENT_HOLD, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_image_preloaded_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_OBJECT_EVENT_IMAGE_PRELOADED, priority_,
            &::efl::eo::_detail::event_callback<::evas::box, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::box, function_type>,
         EVAS_OBJECT_EVENT_IMAGE_PRELOADED );
   }

   template <typename T>
   void
   callback_image_preloaded_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EVAS_OBJECT_EVENT_IMAGE_PRELOADED, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_image_resize_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_OBJECT_EVENT_IMAGE_RESIZE, priority_,
            &::efl::eo::_detail::event_callback<::evas::box, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::box, function_type>,
         EVAS_OBJECT_EVENT_IMAGE_RESIZE );
   }

   template <typename T>
   void
   callback_image_resize_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EVAS_OBJECT_EVENT_IMAGE_RESIZE, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_image_unloaded_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_OBJECT_EVENT_IMAGE_UNLOADED, priority_,
            &::efl::eo::_detail::event_callback<::evas::box, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::box, function_type>,
         EVAS_OBJECT_EVENT_IMAGE_UNLOADED );
   }

   template <typename T>
   void
   callback_image_unloaded_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EVAS_OBJECT_EVENT_IMAGE_UNLOADED, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_key_down_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_OBJECT_EVENT_KEY_DOWN, priority_,
            &::efl::eo::_detail::event_callback<::evas::box, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::box, function_type>,
         EVAS_OBJECT_EVENT_KEY_DOWN );
   }

   template <typename T>
   void
   callback_key_down_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EVAS_OBJECT_EVENT_KEY_DOWN, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_key_up_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_OBJECT_EVENT_KEY_UP, priority_,
            &::efl::eo::_detail::event_callback<::evas::box, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::box, function_type>,
         EVAS_OBJECT_EVENT_KEY_UP );
   }

   template <typename T>
   void
   callback_key_up_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EVAS_OBJECT_EVENT_KEY_UP, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_mouse_down_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_OBJECT_EVENT_MOUSE_DOWN, priority_,
            &::efl::eo::_detail::event_callback<::evas::box, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::box, function_type>,
         EVAS_OBJECT_EVENT_MOUSE_DOWN );
   }

   template <typename T>
   void
   callback_mouse_down_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EVAS_OBJECT_EVENT_MOUSE_DOWN, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_mouse_in_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_OBJECT_EVENT_MOUSE_IN, priority_,
            &::efl::eo::_detail::event_callback<::evas::box, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::box, function_type>,
         EVAS_OBJECT_EVENT_MOUSE_IN );
   }

   template <typename T>
   void
   callback_mouse_in_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EVAS_OBJECT_EVENT_MOUSE_IN, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_mouse_move_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_OBJECT_EVENT_MOUSE_MOVE, priority_,
            &::efl::eo::_detail::event_callback<::evas::box, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::box, function_type>,
         EVAS_OBJECT_EVENT_MOUSE_MOVE );
   }

   template <typename T>
   void
   callback_mouse_move_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EVAS_OBJECT_EVENT_MOUSE_MOVE, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_mouse_out_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_OBJECT_EVENT_MOUSE_OUT, priority_,
            &::efl::eo::_detail::event_callback<::evas::box, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::box, function_type>,
         EVAS_OBJECT_EVENT_MOUSE_OUT );
   }

   template <typename T>
   void
   callback_mouse_out_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EVAS_OBJECT_EVENT_MOUSE_OUT, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_mouse_up_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_OBJECT_EVENT_MOUSE_UP, priority_,
            &::efl::eo::_detail::event_callback<::evas::box, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::box, function_type>,
         EVAS_OBJECT_EVENT_MOUSE_UP );
   }

   template <typename T>
   void
   callback_mouse_up_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EVAS_OBJECT_EVENT_MOUSE_UP, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_mouse_wheel_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_OBJECT_EVENT_MOUSE_WHEEL, priority_,
            &::efl::eo::_detail::event_callback<::evas::box, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::box, function_type>,
         EVAS_OBJECT_EVENT_MOUSE_WHEEL );
   }

   template <typename T>
   void
   callback_mouse_wheel_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EVAS_OBJECT_EVENT_MOUSE_WHEEL, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_move_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_OBJECT_EVENT_MOVE, priority_,
            &::efl::eo::_detail::event_callback<::evas::box, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::box, function_type>,
         EVAS_OBJECT_EVENT_MOVE );
   }

   template <typename T>
   void
   callback_move_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EVAS_OBJECT_EVENT_MOVE, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_multi_down_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_OBJECT_EVENT_MULTI_DOWN, priority_,
            &::efl::eo::_detail::event_callback<::evas::box, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::box, function_type>,
         EVAS_OBJECT_EVENT_MULTI_DOWN );
   }

   template <typename T>
   void
   callback_multi_down_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EVAS_OBJECT_EVENT_MULTI_DOWN, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_multi_move_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_OBJECT_EVENT_MULTI_MOVE, priority_,
            &::efl::eo::_detail::event_callback<::evas::box, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::box, function_type>,
         EVAS_OBJECT_EVENT_MULTI_MOVE );
   }

   template <typename T>
   void
   callback_multi_move_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EVAS_OBJECT_EVENT_MULTI_MOVE, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_multi_up_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_OBJECT_EVENT_MULTI_UP, priority_,
            &::efl::eo::_detail::event_callback<::evas::box, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::box, function_type>,
         EVAS_OBJECT_EVENT_MULTI_UP );
   }

   template <typename T>
   void
   callback_multi_up_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EVAS_OBJECT_EVENT_MULTI_UP, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_resize_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_OBJECT_EVENT_RESIZE, priority_,
            &::efl::eo::_detail::event_callback<::evas::box, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::box, function_type>,
         EVAS_OBJECT_EVENT_RESIZE );
   }

   template <typename T>
   void
   callback_resize_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EVAS_OBJECT_EVENT_RESIZE, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_restack_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_OBJECT_EVENT_RESTACK, priority_,
            &::efl::eo::_detail::event_callback<::evas::box, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::box, function_type>,
         EVAS_OBJECT_EVENT_RESTACK );
   }

   template <typename T>
   void
   callback_restack_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EVAS_OBJECT_EVENT_RESTACK, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_show_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_OBJECT_EVENT_SHOW, priority_,
            &::efl::eo::_detail::event_callback<::evas::box, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::box, function_type>,
         EVAS_OBJECT_EVENT_SHOW );
   }

   template <typename T>
   void
   callback_show_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EVAS_OBJECT_EVENT_SHOW, info));
   }



   static Eo_Class const* _eo_class()
   {
      return(EVAS_BOX_CLASS);
   }

   /// @cond LOCAL
   struct address_of
      : ::eo_cxx::evas::box::address_of<address_of>
      , ::eo_cxx::efl::gfx::base::address_of<address_of>
      , ::eo_cxx::efl::gfx::stack::address_of<address_of>
      , ::eo_cxx::eo::base::address_of<address_of>
      , ::eo_cxx::evas::common_interface::address_of<address_of>
      , ::eo_cxx::evas::object::address_of<address_of>
      , ::eo_cxx::evas::object_smart::address_of<address_of>
      , ::eo_cxx::evas::signal_interface::address_of<address_of>
      , ::eo_cxx::evas::smart_clipped::address_of<address_of>
      , ::efl::eo::detail::concrete_address_of
   {
      explicit address_of(::evas::box* p)
         : ::efl::eo::detail::concrete_address_of(p)
      {}
   };
   address_of operator&() { return address_of(this); }

   struct address_const_of
      : ::eo_cxx::evas::box::address_const_of<address_const_of>
      , ::eo_cxx::efl::gfx::base::address_const_of<address_const_of>
      , ::eo_cxx::efl::gfx::stack::address_const_of<address_const_of>
      , ::eo_cxx::eo::base::address_const_of<address_const_of>
      , ::eo_cxx::evas::common_interface::address_const_of<address_const_of>
      , ::eo_cxx::evas::object::address_const_of<address_const_of>
      , ::eo_cxx::evas::object_smart::address_const_of<address_const_of>
      , ::eo_cxx::evas::signal_interface::address_const_of<address_const_of>
      , ::eo_cxx::evas::smart_clipped::address_const_of<address_const_of>
      , ::efl::eo::detail::concrete_address_const_of
   {
      explicit address_const_of(::evas::box const* p)
         : ::efl::eo::detail::concrete_address_const_of(p)
      {}
   };
   address_const_of operator&() const { return address_const_of(this); }

   /// @endcond

private:

   /// @internal
   static Eo* _ctors_call(::efl::eo::parent_type _p)
   {
      Eo* _ret_eo = eo_add_ref(EVAS_BOX_CLASS, _p._eo_raw);

      return _ret_eo;
   }

   /// @internal
   Eo* _concrete_eo_ptr() const { return _eo_ptr(); }
};

static_assert(sizeof(::evas::box) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<::evas::box>::value, "");

}


#include "evas_box.eo.impl.hh"

#endif // EFL_GENERATED_EVAS_BOX_HH

