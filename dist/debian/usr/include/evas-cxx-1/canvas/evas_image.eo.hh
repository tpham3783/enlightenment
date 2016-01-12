#ifndef EFL_GENERATED_EVAS_IMAGE_HH
#define EFL_GENERATED_EVAS_IMAGE_HH

extern "C"
{
#include <Efl.h>
}
#include <Eo.hh>

#include <eo_cxx_interop.hh>

extern "C"
{
#include "evas_image.eo.h"
}

#include "evas_object.eo.hh"
#include "efl_file.eo.hh"
#include "efl_image.eo.hh"
#include "efl_gfx_fill.eo.hh"
#include "efl_gfx_view.eo.hh"
#include "evas_filter.eo.hh"
#include <evas_canvas3d_scene.eo.hh>
#include <evas_object.eo.hh>

namespace evas {

struct image;

}

/// @cond EO_CXX_ABSTRACT
namespace eo_cxx {

namespace evas {

struct image
{
   void preload_begin() const;

   /// @param x 
   /// @param y 
   /// @param w 
   /// @param h 
   ///
   void data_update_add(int x_, int y_, int w_, int h_) const;

   /// @param start_frame 
   /// @param frame_num 
   ///
   double animated_frame_duration_get(int start_frame_, int frame_num_) const;

   /// @param data 
   ///
   void data_set(void * data_) const;

   /// @param for_writing 
   ///
   void * data_get(bool for_writing_) const;

   void preload_cancel() const;

   double load_dpi_get() const;

   void load_dpi_set(double dpi_) const;

   bool source_clip_get() const;

   void source_clip_set(bool source_clip_) const;

   ::evas::object source_get() const;

   bool source_set(::evas::object src_) const;

   bool filled_get() const;

   void filled_set(bool filled_) const;

   Evas_Image_Content_Hint content_hint_get() const;

   void content_hint_set(Evas_Image_Content_Hint hint_) const;

   void load_region_get(int* x_, int* y_, int* w_, int* h_) const;

   void load_region_set(int x_, int y_, int w_, int h_) const;

   bool alpha_get() const;

   void alpha_set(bool alpha_) const;

   void border_get(int* l_, int* r_, int* t_, int* b_) const;

   void border_set(int l_, int r_, int t_, int b_) const;

   double border_scale_get() const;

   void border_scale_set(double scale_) const;

   bool pixels_dirty_get() const;

   void pixels_dirty_set(bool dirty_) const;

   const Evas_Video_Surface * video_surface_get() const;

   void video_surface_set(Evas_Video_Surface * surf_) const;

   unsigned int video_surface_caps_get() const;

   void video_surface_caps_set(unsigned int caps_) const;

   bool load_orientation_get() const;

   void load_orientation_set(bool enable_) const;

   Evas_Border_Fill_Mode border_center_fill_get() const;

   void border_center_fill_set(Evas_Border_Fill_Mode fill_) const;

   bool source_visible_get() const;

   void source_visible_set(bool visible_) const;

   Evas_Native_Surface * native_surface_get() const;

   void native_surface_set(Evas_Native_Surface * surf_) const;

   int load_scale_down_get() const;

   void load_scale_down_set(int scale_down_) const;

   Evas_Image_Scale_Hint scale_hint_get() const;

   void scale_hint_set(Evas_Image_Scale_Hint hint_) const;

   bool source_events_get() const;

   void source_events_set(bool source_) const;

   Evas_Colorspace colorspace_get() const;

   void colorspace_set(Evas_Colorspace cspace_) const;

   void pixels_get_callback_set(Evas_Object_Image_Pixels_Get_Cb func_, void * data_) const;

   void data_copy_set(void * data_) const;

   void animated_frame_set(int frame_index_) const;

   bool region_support_get() const;

   Evas_Load_Error load_error_get() const;

   int animated_frame_count_get() const;

   int stride_get() const;

   Evas_Image_Animated_Loop_Hint animated_loop_type_get() const;

   int animated_loop_count_get() const;

   ::evas::canvas3d::scene scene_get() const;

   void scene_set(::evas::canvas3d::scene scene_) const;

   Evas_Image_Orient orient_get() const;

   void orient_set(Evas_Image_Orient orient_) const;

   bool snapshot_get() const;

   void snapshot_set(bool s_) const;



   static Eo_Class const* _eo_class()
   {
      return(EVAS_IMAGE_CLASS);
   }

   operator ::evas::image() const;
   operator ::evas::image&();
   operator ::evas::image const&() const;

   /// @cond LOCAL
   template <typename D>
   struct address_of
   {
      operator ::evas::image*() const { return static_cast<::evas::image*>(static_cast<D const*>(this)->p); }
      operator ::evas::image const*() const { return static_cast<::evas::image const*>(static_cast<D const*>(this)->p); }
   };

   template <typename D>
   struct address_const_of
   {
      operator ::evas::image const*() const { return static_cast<::evas::image const*>(static_cast<D const*>(this)->p); }
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

/// @brief Class image
struct image
      : ::efl::eo::concrete
      , EO_CXX_INHERIT(efl::file)
      , EO_CXX_INHERIT(efl::gfx::base)
      , EO_CXX_INHERIT(efl::gfx::fill)
      , EO_CXX_INHERIT(efl::gfx::filter)
      , EO_CXX_INHERIT(efl::gfx::stack)
      , EO_CXX_INHERIT(efl::gfx::view)
      , EO_CXX_INHERIT(efl::image)
      , EO_CXX_INHERIT(eo::base)
      , EO_CXX_INHERIT(evas::common_interface)
      , EO_CXX_INHERIT(evas::filter)
      , EO_CXX_INHERIT(evas::object)
{
   //@{
   /**
      @brief Constructs a new evas::image object.

      Constructs a new evas::image object. If you want this object to be a child
      of another Eo object, use an @ref efl::eo::parent expression, like the example.

      Example:
      @code
      evas::image my_image(efl::eo::parent = parent_object);
      @endcode

      @see image(Eo* eo)
   */
   explicit image(::efl::eo::parent_type _p)
      : image(_ctors_call(_p))
   {}

   explicit image()
      : image(_ctors_call(::efl::eo::parent = nullptr))
   {}
   //@}

   /// @brief Eo Constructor.
   ///
   /// Constructs the object from an Eo* pointer stealing its ownership.
   ///
   /// @param eo The Eo object pointer.
   ///
   explicit image(Eo* eo)
      : ::efl::eo::concrete(eo)
   {}

   /// @brief nullptr_t Constructor.
   ///
   /// Constructs an empty (null) object.
   ///
   explicit image(std::nullptr_t)
      : ::efl::eo::concrete(nullptr)
   {}

   /// @brief Copy Constructor.
   ///
   image(image const& other)
      : image(eo_ref(other._eo_ptr()))
   {}

   ~image() {}

   void preload_begin() const;

   /// @param x 
   /// @param y 
   /// @param w 
   /// @param h 
   ///
   void data_update_add(int x_, int y_, int w_, int h_) const;

   /// @param start_frame 
   /// @param frame_num 
   ///
   double animated_frame_duration_get(int start_frame_, int frame_num_) const;

   /// @param data 
   ///
   void data_set(void * data_) const;

   /// @param for_writing 
   ///
   void * data_get(bool for_writing_) const;

   void preload_cancel() const;

   double load_dpi_get() const;

   void load_dpi_set(double dpi_) const;

   bool source_clip_get() const;

   void source_clip_set(bool source_clip_) const;

   ::evas::object source_get() const;

   bool source_set(::evas::object src_) const;

   bool filled_get() const;

   void filled_set(bool filled_) const;

   Evas_Image_Content_Hint content_hint_get() const;

   void content_hint_set(Evas_Image_Content_Hint hint_) const;

   void load_region_get(int* x_, int* y_, int* w_, int* h_) const;

   void load_region_set(int x_, int y_, int w_, int h_) const;

   bool alpha_get() const;

   void alpha_set(bool alpha_) const;

   void border_get(int* l_, int* r_, int* t_, int* b_) const;

   void border_set(int l_, int r_, int t_, int b_) const;

   double border_scale_get() const;

   void border_scale_set(double scale_) const;

   bool pixels_dirty_get() const;

   void pixels_dirty_set(bool dirty_) const;

   const Evas_Video_Surface * video_surface_get() const;

   void video_surface_set(Evas_Video_Surface * surf_) const;

   unsigned int video_surface_caps_get() const;

   void video_surface_caps_set(unsigned int caps_) const;

   bool load_orientation_get() const;

   void load_orientation_set(bool enable_) const;

   Evas_Border_Fill_Mode border_center_fill_get() const;

   void border_center_fill_set(Evas_Border_Fill_Mode fill_) const;

   bool source_visible_get() const;

   void source_visible_set(bool visible_) const;

   Evas_Native_Surface * native_surface_get() const;

   void native_surface_set(Evas_Native_Surface * surf_) const;

   int load_scale_down_get() const;

   void load_scale_down_set(int scale_down_) const;

   Evas_Image_Scale_Hint scale_hint_get() const;

   void scale_hint_set(Evas_Image_Scale_Hint hint_) const;

   bool source_events_get() const;

   void source_events_set(bool source_) const;

   Evas_Colorspace colorspace_get() const;

   void colorspace_set(Evas_Colorspace cspace_) const;

   void pixels_get_callback_set(Evas_Object_Image_Pixels_Get_Cb func_, void * data_) const;

   void data_copy_set(void * data_) const;

   void animated_frame_set(int frame_index_) const;

   bool region_support_get() const;

   Evas_Load_Error load_error_get() const;

   int animated_frame_count_get() const;

   int stride_get() const;

   Evas_Image_Animated_Loop_Hint animated_loop_type_get() const;

   int animated_loop_count_get() const;

   ::evas::canvas3d::scene scene_get() const;

   void scene_set(::evas::canvas3d::scene scene_) const;

   Evas_Image_Orient orient_get() const;

   void orient_set(Evas_Image_Orient orient_) const;

   bool snapshot_get() const;

   void snapshot_set(bool s_) const;

   template <typename F>
   ::efl::eo::signal_connection
   callback_async_error_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EFL_FILE_EVENT_ASYNC_ERROR, priority_,
            &::efl::eo::_detail::event_callback<::evas::image, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::image, function_type>,
         EFL_FILE_EVENT_ASYNC_ERROR );
   }

   template <typename T>
   void
   callback_async_error_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EFL_FILE_EVENT_ASYNC_ERROR, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_async_opened_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EFL_FILE_EVENT_ASYNC_OPENED, priority_,
            &::efl::eo::_detail::event_callback<::evas::image, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::image, function_type>,
         EFL_FILE_EVENT_ASYNC_OPENED );
   }

   template <typename T>
   void
   callback_async_opened_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EFL_FILE_EVENT_ASYNC_OPENED, info));
   }

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
            &::efl::eo::_detail::event_callback<::evas::image, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::image, function_type>,
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
            &::efl::eo::_detail::event_callback<::evas::image, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::image, function_type>,
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
            &::efl::eo::_detail::event_callback<::evas::image, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::image, function_type>,
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
   callback_focus_in_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_OBJECT_EVENT_FOCUS_IN, priority_,
            &::efl::eo::_detail::event_callback<::evas::image, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::image, function_type>,
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
            &::efl::eo::_detail::event_callback<::evas::image, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::image, function_type>,
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
            &::efl::eo::_detail::event_callback<::evas::image, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::image, function_type>,
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
            &::efl::eo::_detail::event_callback<::evas::image, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::image, function_type>,
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
            &::efl::eo::_detail::event_callback<::evas::image, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::image, function_type>,
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
            &::efl::eo::_detail::event_callback<::evas::image, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::image, function_type>,
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
            &::efl::eo::_detail::event_callback<::evas::image, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::image, function_type>,
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
            &::efl::eo::_detail::event_callback<::evas::image, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::image, function_type>,
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
            &::efl::eo::_detail::event_callback<::evas::image, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::image, function_type>,
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
            &::efl::eo::_detail::event_callback<::evas::image, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::image, function_type>,
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
            &::efl::eo::_detail::event_callback<::evas::image, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::image, function_type>,
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
            &::efl::eo::_detail::event_callback<::evas::image, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::image, function_type>,
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
            &::efl::eo::_detail::event_callback<::evas::image, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::image, function_type>,
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
            &::efl::eo::_detail::event_callback<::evas::image, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::image, function_type>,
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
            &::efl::eo::_detail::event_callback<::evas::image, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::image, function_type>,
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
            &::efl::eo::_detail::event_callback<::evas::image, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::image, function_type>,
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
            &::efl::eo::_detail::event_callback<::evas::image, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::image, function_type>,
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
            &::efl::eo::_detail::event_callback<::evas::image, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::image, function_type>,
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
            &::efl::eo::_detail::event_callback<::evas::image, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::image, function_type>,
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
            &::efl::eo::_detail::event_callback<::evas::image, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::image, function_type>,
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
            &::efl::eo::_detail::event_callback<::evas::image, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::image, function_type>,
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
            &::efl::eo::_detail::event_callback<::evas::image, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::image, function_type>,
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
            &::efl::eo::_detail::event_callback<::evas::image, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::image, function_type>,
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
      return(EVAS_IMAGE_CLASS);
   }

   /// @cond LOCAL
   struct address_of
      : ::eo_cxx::evas::image::address_of<address_of>
      , ::eo_cxx::efl::file::address_of<address_of>
      , ::eo_cxx::efl::gfx::base::address_of<address_of>
      , ::eo_cxx::efl::gfx::fill::address_of<address_of>
      , ::eo_cxx::efl::gfx::filter::address_of<address_of>
      , ::eo_cxx::efl::gfx::stack::address_of<address_of>
      , ::eo_cxx::efl::gfx::view::address_of<address_of>
      , ::eo_cxx::efl::image::address_of<address_of>
      , ::eo_cxx::eo::base::address_of<address_of>
      , ::eo_cxx::evas::common_interface::address_of<address_of>
      , ::eo_cxx::evas::filter::address_of<address_of>
      , ::eo_cxx::evas::object::address_of<address_of>
      , ::efl::eo::detail::concrete_address_of
   {
      explicit address_of(::evas::image* p)
         : ::efl::eo::detail::concrete_address_of(p)
      {}
   };
   address_of operator&() { return address_of(this); }

   struct address_const_of
      : ::eo_cxx::evas::image::address_const_of<address_const_of>
      , ::eo_cxx::efl::file::address_const_of<address_const_of>
      , ::eo_cxx::efl::gfx::base::address_const_of<address_const_of>
      , ::eo_cxx::efl::gfx::fill::address_const_of<address_const_of>
      , ::eo_cxx::efl::gfx::filter::address_const_of<address_const_of>
      , ::eo_cxx::efl::gfx::stack::address_const_of<address_const_of>
      , ::eo_cxx::efl::gfx::view::address_const_of<address_const_of>
      , ::eo_cxx::efl::image::address_const_of<address_const_of>
      , ::eo_cxx::eo::base::address_const_of<address_const_of>
      , ::eo_cxx::evas::common_interface::address_const_of<address_const_of>
      , ::eo_cxx::evas::filter::address_const_of<address_const_of>
      , ::eo_cxx::evas::object::address_const_of<address_const_of>
      , ::efl::eo::detail::concrete_address_const_of
   {
      explicit address_const_of(::evas::image const* p)
         : ::efl::eo::detail::concrete_address_const_of(p)
      {}
   };
   address_const_of operator&() const { return address_const_of(this); }

   /// @endcond

private:

   /// @internal
   static Eo* _ctors_call(::efl::eo::parent_type _p)
   {
      Eo* _ret_eo = eo_add_ref(EVAS_IMAGE_CLASS, _p._eo_raw);

      return _ret_eo;
   }

   /// @internal
   Eo* _concrete_eo_ptr() const { return _eo_ptr(); }
};

static_assert(sizeof(::evas::image) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<::evas::image>::value, "");

}


#include "evas_image.eo.impl.hh"

#endif // EFL_GENERATED_EVAS_IMAGE_HH

