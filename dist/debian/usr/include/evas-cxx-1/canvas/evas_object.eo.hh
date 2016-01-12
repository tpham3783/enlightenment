#ifndef EFL_GENERATED_EVAS_OBJECT_HH
#define EFL_GENERATED_EVAS_OBJECT_HH

extern "C"
{
#include <Efl.h>
}
#include <Eo.hh>

#include <eo_cxx_interop.hh>

extern "C"
{
#include "evas_object.eo.h"
}

#include "eo_base.eo.hh"
#include "evas_common_interface.eo.hh"
#include "efl_gfx_base.eo.hh"
#include "efl_gfx_stack.eo.hh"
#include <string>

namespace evas {

struct object;

}

/// @cond EO_CXX_ABSTRACT
namespace eo_cxx {

namespace evas {

struct object
{
   bool clipees_has() const;

   /// @param keyname 
   /// @param modifiers 
   /// @param not_modifiers 
   /// @param exclusive 
   ///
   bool key_grab(::efl::eina::string_view keyname_, Evas_Modifier_Mask modifiers_, Evas_Modifier_Mask not_modifiers_, bool exclusive_) const;

   /// @param type 
   ///
   bool smart_type_check(::efl::eina::string_view type_) const;

   /// @param name 
   /// @param recurse 
   ///
   ::evas::object name_child_find(::efl::eina::string_view name_, int recurse_) const;

   /// @param keyname 
   /// @param modifiers 
   /// @param not_modifiers 
   ///
   void key_ungrab(::efl::eina::string_view keyname_, Evas_Modifier_Mask modifiers_, Evas_Modifier_Mask not_modifiers_) const;

   void clip_unset() const;

   /// @param dx 
   /// @param dy 
   ///
   void smart_move_children_relative(Evas_Coord dx_, Evas_Coord dy_) const;

   /// @param type 
   ///
   bool smart_type_check_ptr(::efl::eina::string_view type_) const;

   void size_hint_max_get(Evas_Coord* w_, Evas_Coord* h_) const;

   void size_hint_max_set(Evas_Coord w_, Evas_Coord h_) const;

   void size_hint_request_get(Evas_Coord* w_, Evas_Coord* h_) const;

   void size_hint_request_set(Evas_Coord w_, Evas_Coord h_) const;

   ::efl::eina::string_view type_get() const;

   void type_set(::efl::eina::string_view type_) const;

   void size_hint_min_get(Evas_Coord* w_, Evas_Coord* h_) const;

   void size_hint_min_set(Evas_Coord w_, Evas_Coord h_) const;

   Evas_Object_Pointer_Mode pointer_mode_get() const;

   void pointer_mode_set(Evas_Object_Pointer_Mode pointer_mode_) const;

   Evas_Render_Op render_op_get() const;

   void render_op_set(Evas_Render_Op render_op_) const;

   bool freeze_events_get() const;

   void freeze_events_set(bool freeze_) const;

   const Evas_Map * map_get() const;

   void map_set(const Evas_Map * map_) const;

   void size_hint_aspect_get(Evas_Aspect_Control* aspect_, Evas_Coord* w_, Evas_Coord* h_) const;

   void size_hint_aspect_set(Evas_Aspect_Control aspect_, Evas_Coord w_, Evas_Coord h_) const;

   ::evas::object clip_get() const;

   void clip_set(::evas::object clip_) const;

   void size_hint_padding_get(Evas_Coord* l_, Evas_Coord* r_, Evas_Coord* t_, Evas_Coord* b_) const;

   void size_hint_padding_set(Evas_Coord l_, Evas_Coord r_, Evas_Coord t_, Evas_Coord b_) const;

   bool repeat_events_get() const;

   void repeat_events_set(bool repeat_) const;

   void size_hint_weight_get(double* x_, double* y_) const;

   void size_hint_weight_set(double x_, double y_) const;

   ::efl::eina::string_view name_get() const;

   void name_set(::efl::eina::string_view name_) const;

   double scale_get() const;

   void scale_set(double scale_) const;

   bool static_clip_get() const;

   void static_clip_set(bool is_static_clip_) const;

   bool focus_get() const;

   void focus_set(bool focus_) const;

   bool is_frame_object_get() const;

   void is_frame_object_set(bool is_frame_) const;

   bool map_enable_get() const;

   void map_enable_set(bool enabled_) const;

   bool precise_is_inside_get() const;

   void precise_is_inside_set(bool precise_) const;

   void size_hint_align_get(double* x_, double* y_) const;

   void size_hint_align_set(double x_, double y_) const;

   bool propagate_events_get() const;

   void propagate_events_set(bool propagate_) const;

   bool pass_events_get() const;

   void pass_events_set(bool pass_) const;

   bool anti_alias_get() const;

   void anti_alias_set(bool anti_alias_) const;

   void * smart_data_get() const;

   ::evas::object smart_clipped_clipper_get() const;

   ::efl::eina::crange_list< ::evas::object > clipees_get() const;

   ::evas::object smart_parent_get() const;

   Evas_Display_Mode size_hint_display_mode_get() const;

   void size_hint_display_mode_set(Evas_Display_Mode dispmode_) const;

   Evas_BiDi_Direction paragraph_direction_get() const;

   void paragraph_direction_set(Evas_BiDi_Direction dir_) const;

   bool no_render_get() const;

   void no_render_set(bool enable_) const;

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
            &::efl::eo::_detail::event_callback<::evas::object, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::object, function_type>,
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
   callback_mouse_out_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_OBJECT_EVENT_MOUSE_OUT, priority_,
            &::efl::eo::_detail::event_callback<::evas::object, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::object, function_type>,
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
   callback_mouse_down_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_OBJECT_EVENT_MOUSE_DOWN, priority_,
            &::efl::eo::_detail::event_callback<::evas::object, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::object, function_type>,
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
   callback_mouse_up_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_OBJECT_EVENT_MOUSE_UP, priority_,
            &::efl::eo::_detail::event_callback<::evas::object, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::object, function_type>,
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
   callback_mouse_move_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_OBJECT_EVENT_MOUSE_MOVE, priority_,
            &::efl::eo::_detail::event_callback<::evas::object, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::object, function_type>,
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
   callback_mouse_wheel_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_OBJECT_EVENT_MOUSE_WHEEL, priority_,
            &::efl::eo::_detail::event_callback<::evas::object, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::object, function_type>,
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
   callback_multi_down_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_OBJECT_EVENT_MULTI_DOWN, priority_,
            &::efl::eo::_detail::event_callback<::evas::object, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::object, function_type>,
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
   callback_multi_up_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_OBJECT_EVENT_MULTI_UP, priority_,
            &::efl::eo::_detail::event_callback<::evas::object, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::object, function_type>,
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
   callback_multi_move_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_OBJECT_EVENT_MULTI_MOVE, priority_,
            &::efl::eo::_detail::event_callback<::evas::object, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::object, function_type>,
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
   callback_free_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_OBJECT_EVENT_FREE, priority_,
            &::efl::eo::_detail::event_callback<::evas::object, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::object, function_type>,
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
   callback_key_down_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_OBJECT_EVENT_KEY_DOWN, priority_,
            &::efl::eo::_detail::event_callback<::evas::object, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::object, function_type>,
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
            &::efl::eo::_detail::event_callback<::evas::object, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::object, function_type>,
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
   callback_focus_in_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_OBJECT_EVENT_FOCUS_IN, priority_,
            &::efl::eo::_detail::event_callback<::evas::object, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::object, function_type>,
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
            &::efl::eo::_detail::event_callback<::evas::object, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::object, function_type>,
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
   callback_show_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_OBJECT_EVENT_SHOW, priority_,
            &::efl::eo::_detail::event_callback<::evas::object, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::object, function_type>,
         EVAS_OBJECT_EVENT_SHOW );
   }

   template <typename T>
   void
   callback_show_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EVAS_OBJECT_EVENT_SHOW, info));
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
            &::efl::eo::_detail::event_callback<::evas::object, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::object, function_type>,
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
   callback_move_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_OBJECT_EVENT_MOVE, priority_,
            &::efl::eo::_detail::event_callback<::evas::object, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::object, function_type>,
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
   callback_resize_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_OBJECT_EVENT_RESIZE, priority_,
            &::efl::eo::_detail::event_callback<::evas::object, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::object, function_type>,
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
            &::efl::eo::_detail::event_callback<::evas::object, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::object, function_type>,
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
   callback_del_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_OBJECT_EVENT_DEL, priority_,
            &::efl::eo::_detail::event_callback<::evas::object, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::object, function_type>,
         EVAS_OBJECT_EVENT_DEL );
   }

   template <typename T>
   void
   callback_del_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EVAS_OBJECT_EVENT_DEL, info));
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
            &::efl::eo::_detail::event_callback<::evas::object, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::object, function_type>,
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
   callback_changed_size_hints_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_OBJECT_EVENT_CHANGED_SIZE_HINTS, priority_,
            &::efl::eo::_detail::event_callback<::evas::object, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::object, function_type>,
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
   callback_image_preloaded_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_OBJECT_EVENT_IMAGE_PRELOADED, priority_,
            &::efl::eo::_detail::event_callback<::evas::object, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::object, function_type>,
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
            &::efl::eo::_detail::event_callback<::evas::object, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::object, function_type>,
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
            &::efl::eo::_detail::event_callback<::evas::object, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::object, function_type>,
         EVAS_OBJECT_EVENT_IMAGE_UNLOADED );
   }

   template <typename T>
   void
   callback_image_unloaded_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EVAS_OBJECT_EVENT_IMAGE_UNLOADED, info));
   }



   static Eo_Class const* _eo_class()
   {
      return(EVAS_OBJECT_CLASS);
   }

   operator ::evas::object() const;
   operator ::evas::object&();
   operator ::evas::object const&() const;

   /// @cond LOCAL
   template <typename D>
   struct address_of
   {
      operator ::evas::object*() const { return static_cast<::evas::object*>(static_cast<D const*>(this)->p); }
      operator ::evas::object const*() const { return static_cast<::evas::object const*>(static_cast<D const*>(this)->p); }
   };

   template <typename D>
   struct address_const_of
   {
      operator ::evas::object const*() const { return static_cast<::evas::object const*>(static_cast<D const*>(this)->p); }
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

/// @brief Class object
struct object
      : ::efl::eo::concrete
      , EO_CXX_INHERIT(efl::gfx::base)
      , EO_CXX_INHERIT(efl::gfx::stack)
      , EO_CXX_INHERIT(eo::base)
      , EO_CXX_INHERIT(evas::common_interface)
{
   //@{
   /**
      @brief Constructs a new evas::object object.

      Constructs a new evas::object object. If you want this object to be a child
      of another Eo object, use an @ref efl::eo::parent expression, like the example.

      Example:
      @code
      evas::object my_object(efl::eo::parent = parent_object);
      @endcode

      @see object(Eo* eo)
   */
   explicit object(::efl::eo::parent_type _p)
      : object(_ctors_call(_p))
   {}

   explicit object()
      : object(_ctors_call(::efl::eo::parent = nullptr))
   {}
   //@}

   /// @brief Eo Constructor.
   ///
   /// Constructs the object from an Eo* pointer stealing its ownership.
   ///
   /// @param eo The Eo object pointer.
   ///
   explicit object(Eo* eo)
      : ::efl::eo::concrete(eo)
   {}

   /// @brief nullptr_t Constructor.
   ///
   /// Constructs an empty (null) object.
   ///
   explicit object(std::nullptr_t)
      : ::efl::eo::concrete(nullptr)
   {}

   /// @brief Copy Constructor.
   ///
   object(object const& other)
      : object(eo_ref(other._eo_ptr()))
   {}

   ~object() {}

   bool clipees_has() const;

   /// @param keyname 
   /// @param modifiers 
   /// @param not_modifiers 
   /// @param exclusive 
   ///
   bool key_grab(::efl::eina::string_view keyname_, Evas_Modifier_Mask modifiers_, Evas_Modifier_Mask not_modifiers_, bool exclusive_) const;

   /// @param type 
   ///
   bool smart_type_check(::efl::eina::string_view type_) const;

   /// @param name 
   /// @param recurse 
   ///
   ::evas::object name_child_find(::efl::eina::string_view name_, int recurse_) const;

   /// @param keyname 
   /// @param modifiers 
   /// @param not_modifiers 
   ///
   void key_ungrab(::efl::eina::string_view keyname_, Evas_Modifier_Mask modifiers_, Evas_Modifier_Mask not_modifiers_) const;

   void clip_unset() const;

   /// @param dx 
   /// @param dy 
   ///
   void smart_move_children_relative(Evas_Coord dx_, Evas_Coord dy_) const;

   /// @param type 
   ///
   bool smart_type_check_ptr(::efl::eina::string_view type_) const;

   void size_hint_max_get(Evas_Coord* w_, Evas_Coord* h_) const;

   void size_hint_max_set(Evas_Coord w_, Evas_Coord h_) const;

   void size_hint_request_get(Evas_Coord* w_, Evas_Coord* h_) const;

   void size_hint_request_set(Evas_Coord w_, Evas_Coord h_) const;

   ::efl::eina::string_view type_get() const;

   void type_set(::efl::eina::string_view type_) const;

   void size_hint_min_get(Evas_Coord* w_, Evas_Coord* h_) const;

   void size_hint_min_set(Evas_Coord w_, Evas_Coord h_) const;

   Evas_Object_Pointer_Mode pointer_mode_get() const;

   void pointer_mode_set(Evas_Object_Pointer_Mode pointer_mode_) const;

   Evas_Render_Op render_op_get() const;

   void render_op_set(Evas_Render_Op render_op_) const;

   bool freeze_events_get() const;

   void freeze_events_set(bool freeze_) const;

   const Evas_Map * map_get() const;

   void map_set(const Evas_Map * map_) const;

   void size_hint_aspect_get(Evas_Aspect_Control* aspect_, Evas_Coord* w_, Evas_Coord* h_) const;

   void size_hint_aspect_set(Evas_Aspect_Control aspect_, Evas_Coord w_, Evas_Coord h_) const;

   ::evas::object clip_get() const;

   void clip_set(::evas::object clip_) const;

   void size_hint_padding_get(Evas_Coord* l_, Evas_Coord* r_, Evas_Coord* t_, Evas_Coord* b_) const;

   void size_hint_padding_set(Evas_Coord l_, Evas_Coord r_, Evas_Coord t_, Evas_Coord b_) const;

   bool repeat_events_get() const;

   void repeat_events_set(bool repeat_) const;

   void size_hint_weight_get(double* x_, double* y_) const;

   void size_hint_weight_set(double x_, double y_) const;

   ::efl::eina::string_view name_get() const;

   void name_set(::efl::eina::string_view name_) const;

   double scale_get() const;

   void scale_set(double scale_) const;

   bool static_clip_get() const;

   void static_clip_set(bool is_static_clip_) const;

   bool focus_get() const;

   void focus_set(bool focus_) const;

   bool is_frame_object_get() const;

   void is_frame_object_set(bool is_frame_) const;

   bool map_enable_get() const;

   void map_enable_set(bool enabled_) const;

   bool precise_is_inside_get() const;

   void precise_is_inside_set(bool precise_) const;

   void size_hint_align_get(double* x_, double* y_) const;

   void size_hint_align_set(double x_, double y_) const;

   bool propagate_events_get() const;

   void propagate_events_set(bool propagate_) const;

   bool pass_events_get() const;

   void pass_events_set(bool pass_) const;

   bool anti_alias_get() const;

   void anti_alias_set(bool anti_alias_) const;

   void * smart_data_get() const;

   ::evas::object smart_clipped_clipper_get() const;

   ::efl::eina::crange_list< ::evas::object > clipees_get() const;

   ::evas::object smart_parent_get() const;

   Evas_Display_Mode size_hint_display_mode_get() const;

   void size_hint_display_mode_set(Evas_Display_Mode dispmode_) const;

   Evas_BiDi_Direction paragraph_direction_get() const;

   void paragraph_direction_set(Evas_BiDi_Direction dir_) const;

   bool no_render_get() const;

   void no_render_set(bool enable_) const;

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
            &::efl::eo::_detail::event_callback<::evas::object, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::object, function_type>,
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
            &::efl::eo::_detail::event_callback<::evas::object, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::object, function_type>,
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
            &::efl::eo::_detail::event_callback<::evas::object, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::object, function_type>,
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
   callback_del_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_OBJECT_EVENT_DEL, priority_,
            &::efl::eo::_detail::event_callback<::evas::object, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::object, function_type>,
         EVAS_OBJECT_EVENT_DEL );
   }

   template <typename T>
   void
   callback_del_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EVAS_OBJECT_EVENT_DEL, info));
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
            &::efl::eo::_detail::event_callback<::evas::object, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::object, function_type>,
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
            &::efl::eo::_detail::event_callback<::evas::object, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::object, function_type>,
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
            &::efl::eo::_detail::event_callback<::evas::object, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::object, function_type>,
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
            &::efl::eo::_detail::event_callback<::evas::object, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::object, function_type>,
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
            &::efl::eo::_detail::event_callback<::evas::object, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::object, function_type>,
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
            &::efl::eo::_detail::event_callback<::evas::object, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::object, function_type>,
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
            &::efl::eo::_detail::event_callback<::evas::object, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::object, function_type>,
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
            &::efl::eo::_detail::event_callback<::evas::object, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::object, function_type>,
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
            &::efl::eo::_detail::event_callback<::evas::object, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::object, function_type>,
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
            &::efl::eo::_detail::event_callback<::evas::object, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::object, function_type>,
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
            &::efl::eo::_detail::event_callback<::evas::object, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::object, function_type>,
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
            &::efl::eo::_detail::event_callback<::evas::object, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::object, function_type>,
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
            &::efl::eo::_detail::event_callback<::evas::object, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::object, function_type>,
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
            &::efl::eo::_detail::event_callback<::evas::object, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::object, function_type>,
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
            &::efl::eo::_detail::event_callback<::evas::object, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::object, function_type>,
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
            &::efl::eo::_detail::event_callback<::evas::object, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::object, function_type>,
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
            &::efl::eo::_detail::event_callback<::evas::object, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::object, function_type>,
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
            &::efl::eo::_detail::event_callback<::evas::object, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::object, function_type>,
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
            &::efl::eo::_detail::event_callback<::evas::object, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::object, function_type>,
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
            &::efl::eo::_detail::event_callback<::evas::object, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::object, function_type>,
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
            &::efl::eo::_detail::event_callback<::evas::object, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::object, function_type>,
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
            &::efl::eo::_detail::event_callback<::evas::object, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::object, function_type>,
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
            &::efl::eo::_detail::event_callback<::evas::object, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::object, function_type>,
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
      return(EVAS_OBJECT_CLASS);
   }

   /// @cond LOCAL
   struct address_of
      : ::eo_cxx::evas::object::address_of<address_of>
      , ::eo_cxx::efl::gfx::base::address_of<address_of>
      , ::eo_cxx::efl::gfx::stack::address_of<address_of>
      , ::eo_cxx::eo::base::address_of<address_of>
      , ::eo_cxx::evas::common_interface::address_of<address_of>
      , ::efl::eo::detail::concrete_address_of
   {
      explicit address_of(::evas::object* p)
         : ::efl::eo::detail::concrete_address_of(p)
      {}
   };
   address_of operator&() { return address_of(this); }

   struct address_const_of
      : ::eo_cxx::evas::object::address_const_of<address_const_of>
      , ::eo_cxx::efl::gfx::base::address_const_of<address_const_of>
      , ::eo_cxx::efl::gfx::stack::address_const_of<address_const_of>
      , ::eo_cxx::eo::base::address_const_of<address_const_of>
      , ::eo_cxx::evas::common_interface::address_const_of<address_const_of>
      , ::efl::eo::detail::concrete_address_const_of
   {
      explicit address_const_of(::evas::object const* p)
         : ::efl::eo::detail::concrete_address_const_of(p)
      {}
   };
   address_const_of operator&() const { return address_const_of(this); }

   /// @endcond

private:

   /// @internal
   static Eo* _ctors_call(::efl::eo::parent_type _p)
   {
      Eo* _ret_eo = eo_add_ref(EVAS_OBJECT_CLASS, _p._eo_raw);

      return _ret_eo;
   }

   /// @internal
   Eo* _concrete_eo_ptr() const { return _eo_ptr(); }
};

static_assert(sizeof(::evas::object) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<::evas::object>::value, "");

}


#include "evas_object.eo.impl.hh"

#endif // EFL_GENERATED_EVAS_OBJECT_HH

