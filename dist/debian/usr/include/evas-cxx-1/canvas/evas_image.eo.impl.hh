/// @cond EO_CXX_EO_IMPL

inline void evas::image::preload_begin() const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_image_preload_begin());
}

inline void evas::image::data_update_add(int x_, int y_, int w_, int h_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_image_data_update_add(x_, y_, w_, h_));
}

inline double evas::image::animated_frame_duration_get(int start_frame_, int frame_num_) const
{
   double _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_image_animated_frame_duration_get(start_frame_, frame_num_));
   return _tmp_ret;
}

inline void evas::image::data_set(void * data_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_image_data_set(data_));
}

inline void * evas::image::data_get(bool for_writing_) const
{
   void * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_image_data_get(::efl::eolian::to_c(for_writing_)));
   return _tmp_ret;
}

inline void evas::image::preload_cancel() const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_image_preload_cancel());
}

inline double evas::image::load_dpi_get() const
{
   double _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_image_load_dpi_get());
   return _tmp_ret;
}

inline void evas::image::load_dpi_set(double dpi_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_image_load_dpi_set(dpi_));
}

inline bool evas::image::source_clip_get() const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_image_source_clip_get());
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline void evas::image::source_clip_set(bool source_clip_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_image_source_clip_set(::efl::eolian::to_c(source_clip_)));
}

inline ::evas::object evas::image::source_get() const
{
   Evas_Object * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_image_source_get());
   return ::efl::eolian::to_cxx<::evas::object>(_tmp_ret, std::tuple<std::false_type>());
}

inline bool evas::image::source_set(::evas::object src_) const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_image_source_set(::efl::eolian::to_c(src_)));
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline bool evas::image::filled_get() const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_image_filled_get());
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline void evas::image::filled_set(bool filled_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_image_filled_set(::efl::eolian::to_c(filled_)));
}

inline Evas_Image_Content_Hint evas::image::content_hint_get() const
{
   Evas_Image_Content_Hint _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_image_content_hint_get());
   return _tmp_ret;
}

inline void evas::image::content_hint_set(Evas_Image_Content_Hint hint_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_image_content_hint_set(hint_));
}

inline void evas::image::load_region_get(int* x_, int* y_, int* w_, int* h_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_image_load_region_get(x_, y_, w_, h_));
}

inline void evas::image::load_region_set(int x_, int y_, int w_, int h_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_image_load_region_set(x_, y_, w_, h_));
}

inline bool evas::image::alpha_get() const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_image_alpha_get());
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline void evas::image::alpha_set(bool alpha_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_image_alpha_set(::efl::eolian::to_c(alpha_)));
}

inline void evas::image::border_get(int* l_, int* r_, int* t_, int* b_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_image_border_get(l_, r_, t_, b_));
}

inline void evas::image::border_set(int l_, int r_, int t_, int b_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_image_border_set(l_, r_, t_, b_));
}

inline double evas::image::border_scale_get() const
{
   double _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_image_border_scale_get());
   return _tmp_ret;
}

inline void evas::image::border_scale_set(double scale_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_image_border_scale_set(scale_));
}

inline bool evas::image::pixels_dirty_get() const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_image_pixels_dirty_get());
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline void evas::image::pixels_dirty_set(bool dirty_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_image_pixels_dirty_set(::efl::eolian::to_c(dirty_)));
}

inline const Evas_Video_Surface * evas::image::video_surface_get() const
{
   const Evas_Video_Surface * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_image_video_surface_get());
   return _tmp_ret;
}

inline void evas::image::video_surface_set(Evas_Video_Surface * surf_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_image_video_surface_set(surf_));
}

inline unsigned int evas::image::video_surface_caps_get() const
{
   unsigned int _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_image_video_surface_caps_get());
   return _tmp_ret;
}

inline void evas::image::video_surface_caps_set(unsigned int caps_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_image_video_surface_caps_set(caps_));
}

inline bool evas::image::load_orientation_get() const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_image_load_orientation_get());
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline void evas::image::load_orientation_set(bool enable_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_image_load_orientation_set(::efl::eolian::to_c(enable_)));
}

inline Evas_Border_Fill_Mode evas::image::border_center_fill_get() const
{
   Evas_Border_Fill_Mode _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_image_border_center_fill_get());
   return _tmp_ret;
}

inline void evas::image::border_center_fill_set(Evas_Border_Fill_Mode fill_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_image_border_center_fill_set(fill_));
}

inline bool evas::image::source_visible_get() const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_image_source_visible_get());
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline void evas::image::source_visible_set(bool visible_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_image_source_visible_set(::efl::eolian::to_c(visible_)));
}

inline Evas_Native_Surface * evas::image::native_surface_get() const
{
   Evas_Native_Surface * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_image_native_surface_get());
   return _tmp_ret;
}

inline void evas::image::native_surface_set(Evas_Native_Surface * surf_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_image_native_surface_set(surf_));
}

inline int evas::image::load_scale_down_get() const
{
   int _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_image_load_scale_down_get());
   return _tmp_ret;
}

inline void evas::image::load_scale_down_set(int scale_down_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_image_load_scale_down_set(scale_down_));
}

inline Evas_Image_Scale_Hint evas::image::scale_hint_get() const
{
   Evas_Image_Scale_Hint _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_image_scale_hint_get());
   return _tmp_ret;
}

inline void evas::image::scale_hint_set(Evas_Image_Scale_Hint hint_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_image_scale_hint_set(hint_));
}

inline bool evas::image::source_events_get() const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_image_source_events_get());
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline void evas::image::source_events_set(bool source_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_image_source_events_set(::efl::eolian::to_c(source_)));
}

inline Evas_Colorspace evas::image::colorspace_get() const
{
   Evas_Colorspace _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_image_colorspace_get());
   return _tmp_ret;
}

inline void evas::image::colorspace_set(Evas_Colorspace cspace_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_image_colorspace_set(cspace_));
}

inline void evas::image::pixels_get_callback_set(Evas_Object_Image_Pixels_Get_Cb func_, void * data_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_image_pixels_get_callback_set(func_, data_));
}

inline void evas::image::data_copy_set(void * data_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_image_data_copy_set(data_));
}

inline void evas::image::animated_frame_set(int frame_index_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_image_animated_frame_set(frame_index_));
}

inline bool evas::image::region_support_get() const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_image_region_support_get());
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline Evas_Load_Error evas::image::load_error_get() const
{
   Evas_Load_Error _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_image_load_error_get());
   return _tmp_ret;
}

inline int evas::image::animated_frame_count_get() const
{
   int _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_image_animated_frame_count_get());
   return _tmp_ret;
}

inline int evas::image::stride_get() const
{
   int _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_image_stride_get());
   return _tmp_ret;
}

inline Evas_Image_Animated_Loop_Hint evas::image::animated_loop_type_get() const
{
   Evas_Image_Animated_Loop_Hint _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_image_animated_loop_type_get());
   return _tmp_ret;
}

inline int evas::image::animated_loop_count_get() const
{
   int _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_image_animated_loop_count_get());
   return _tmp_ret;
}

inline ::evas::canvas3d::scene evas::image::scene_get() const
{
   Evas_Canvas3D_Scene * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_image_scene_get());
   return ::efl::eolian::to_cxx<::evas::canvas3d::scene>(_tmp_ret, std::tuple<std::false_type>());
}

inline void evas::image::scene_set(::evas::canvas3d::scene scene_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_image_scene_set(::efl::eolian::to_c(scene_)));
}

inline Evas_Image_Orient evas::image::orient_get() const
{
   Evas_Image_Orient _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_image_orient_get());
   return _tmp_ret;
}

inline void evas::image::orient_set(Evas_Image_Orient orient_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_image_orient_set(orient_));
}

inline bool evas::image::snapshot_get() const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_image_snapshot_get());
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline void evas::image::snapshot_set(bool s_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_image_snapshot_set(::efl::eolian::to_c(s_)));
}

inline void eo_cxx::evas::image::preload_begin() const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_image_preload_begin());
}

inline void eo_cxx::evas::image::data_update_add(int x_, int y_, int w_, int h_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_image_data_update_add(x_, y_, w_, h_));
}

inline double eo_cxx::evas::image::animated_frame_duration_get(int start_frame_, int frame_num_) const
{
   double _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_image_animated_frame_duration_get(start_frame_, frame_num_));
   return _tmp_ret;
}

inline void eo_cxx::evas::image::data_set(void * data_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_image_data_set(data_));
}

inline void * eo_cxx::evas::image::data_get(bool for_writing_) const
{
   void * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_image_data_get(::efl::eolian::to_c(for_writing_)));
   return _tmp_ret;
}

inline void eo_cxx::evas::image::preload_cancel() const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_image_preload_cancel());
}

inline double eo_cxx::evas::image::load_dpi_get() const
{
   double _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_image_load_dpi_get());
   return _tmp_ret;
}

inline void eo_cxx::evas::image::load_dpi_set(double dpi_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_image_load_dpi_set(dpi_));
}

inline bool eo_cxx::evas::image::source_clip_get() const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_image_source_clip_get());
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline void eo_cxx::evas::image::source_clip_set(bool source_clip_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_image_source_clip_set(::efl::eolian::to_c(source_clip_)));
}

inline ::evas::object eo_cxx::evas::image::source_get() const
{
   Evas_Object * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_image_source_get());
   return ::efl::eolian::to_cxx<::evas::object>(_tmp_ret, std::tuple<std::false_type>());
}

inline bool eo_cxx::evas::image::source_set(::evas::object src_) const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_image_source_set(::efl::eolian::to_c(src_)));
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline bool eo_cxx::evas::image::filled_get() const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_image_filled_get());
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline void eo_cxx::evas::image::filled_set(bool filled_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_image_filled_set(::efl::eolian::to_c(filled_)));
}

inline Evas_Image_Content_Hint eo_cxx::evas::image::content_hint_get() const
{
   Evas_Image_Content_Hint _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_image_content_hint_get());
   return _tmp_ret;
}

inline void eo_cxx::evas::image::content_hint_set(Evas_Image_Content_Hint hint_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_image_content_hint_set(hint_));
}

inline void eo_cxx::evas::image::load_region_get(int* x_, int* y_, int* w_, int* h_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_image_load_region_get(x_, y_, w_, h_));
}

inline void eo_cxx::evas::image::load_region_set(int x_, int y_, int w_, int h_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_image_load_region_set(x_, y_, w_, h_));
}

inline bool eo_cxx::evas::image::alpha_get() const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_image_alpha_get());
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline void eo_cxx::evas::image::alpha_set(bool alpha_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_image_alpha_set(::efl::eolian::to_c(alpha_)));
}

inline void eo_cxx::evas::image::border_get(int* l_, int* r_, int* t_, int* b_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_image_border_get(l_, r_, t_, b_));
}

inline void eo_cxx::evas::image::border_set(int l_, int r_, int t_, int b_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_image_border_set(l_, r_, t_, b_));
}

inline double eo_cxx::evas::image::border_scale_get() const
{
   double _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_image_border_scale_get());
   return _tmp_ret;
}

inline void eo_cxx::evas::image::border_scale_set(double scale_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_image_border_scale_set(scale_));
}

inline bool eo_cxx::evas::image::pixels_dirty_get() const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_image_pixels_dirty_get());
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline void eo_cxx::evas::image::pixels_dirty_set(bool dirty_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_image_pixels_dirty_set(::efl::eolian::to_c(dirty_)));
}

inline const Evas_Video_Surface * eo_cxx::evas::image::video_surface_get() const
{
   const Evas_Video_Surface * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_image_video_surface_get());
   return _tmp_ret;
}

inline void eo_cxx::evas::image::video_surface_set(Evas_Video_Surface * surf_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_image_video_surface_set(surf_));
}

inline unsigned int eo_cxx::evas::image::video_surface_caps_get() const
{
   unsigned int _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_image_video_surface_caps_get());
   return _tmp_ret;
}

inline void eo_cxx::evas::image::video_surface_caps_set(unsigned int caps_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_image_video_surface_caps_set(caps_));
}

inline bool eo_cxx::evas::image::load_orientation_get() const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_image_load_orientation_get());
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline void eo_cxx::evas::image::load_orientation_set(bool enable_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_image_load_orientation_set(::efl::eolian::to_c(enable_)));
}

inline Evas_Border_Fill_Mode eo_cxx::evas::image::border_center_fill_get() const
{
   Evas_Border_Fill_Mode _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_image_border_center_fill_get());
   return _tmp_ret;
}

inline void eo_cxx::evas::image::border_center_fill_set(Evas_Border_Fill_Mode fill_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_image_border_center_fill_set(fill_));
}

inline bool eo_cxx::evas::image::source_visible_get() const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_image_source_visible_get());
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline void eo_cxx::evas::image::source_visible_set(bool visible_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_image_source_visible_set(::efl::eolian::to_c(visible_)));
}

inline Evas_Native_Surface * eo_cxx::evas::image::native_surface_get() const
{
   Evas_Native_Surface * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_image_native_surface_get());
   return _tmp_ret;
}

inline void eo_cxx::evas::image::native_surface_set(Evas_Native_Surface * surf_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_image_native_surface_set(surf_));
}

inline int eo_cxx::evas::image::load_scale_down_get() const
{
   int _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_image_load_scale_down_get());
   return _tmp_ret;
}

inline void eo_cxx::evas::image::load_scale_down_set(int scale_down_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_image_load_scale_down_set(scale_down_));
}

inline Evas_Image_Scale_Hint eo_cxx::evas::image::scale_hint_get() const
{
   Evas_Image_Scale_Hint _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_image_scale_hint_get());
   return _tmp_ret;
}

inline void eo_cxx::evas::image::scale_hint_set(Evas_Image_Scale_Hint hint_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_image_scale_hint_set(hint_));
}

inline bool eo_cxx::evas::image::source_events_get() const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_image_source_events_get());
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline void eo_cxx::evas::image::source_events_set(bool source_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_image_source_events_set(::efl::eolian::to_c(source_)));
}

inline Evas_Colorspace eo_cxx::evas::image::colorspace_get() const
{
   Evas_Colorspace _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_image_colorspace_get());
   return _tmp_ret;
}

inline void eo_cxx::evas::image::colorspace_set(Evas_Colorspace cspace_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_image_colorspace_set(cspace_));
}

inline void eo_cxx::evas::image::pixels_get_callback_set(Evas_Object_Image_Pixels_Get_Cb func_, void * data_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_image_pixels_get_callback_set(func_, data_));
}

inline void eo_cxx::evas::image::data_copy_set(void * data_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_image_data_copy_set(data_));
}

inline void eo_cxx::evas::image::animated_frame_set(int frame_index_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_image_animated_frame_set(frame_index_));
}

inline bool eo_cxx::evas::image::region_support_get() const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_image_region_support_get());
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline Evas_Load_Error eo_cxx::evas::image::load_error_get() const
{
   Evas_Load_Error _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_image_load_error_get());
   return _tmp_ret;
}

inline int eo_cxx::evas::image::animated_frame_count_get() const
{
   int _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_image_animated_frame_count_get());
   return _tmp_ret;
}

inline int eo_cxx::evas::image::stride_get() const
{
   int _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_image_stride_get());
   return _tmp_ret;
}

inline Evas_Image_Animated_Loop_Hint eo_cxx::evas::image::animated_loop_type_get() const
{
   Evas_Image_Animated_Loop_Hint _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_image_animated_loop_type_get());
   return _tmp_ret;
}

inline int eo_cxx::evas::image::animated_loop_count_get() const
{
   int _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_image_animated_loop_count_get());
   return _tmp_ret;
}

inline ::evas::canvas3d::scene eo_cxx::evas::image::scene_get() const
{
   Evas_Canvas3D_Scene * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_image_scene_get());
   return ::efl::eolian::to_cxx<::evas::canvas3d::scene>(_tmp_ret, std::tuple<std::false_type>());
}

inline void eo_cxx::evas::image::scene_set(::evas::canvas3d::scene scene_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_image_scene_set(::efl::eolian::to_c(scene_)));
}

inline Evas_Image_Orient eo_cxx::evas::image::orient_get() const
{
   Evas_Image_Orient _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_image_orient_get());
   return _tmp_ret;
}

inline void eo_cxx::evas::image::orient_set(Evas_Image_Orient orient_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_image_orient_set(orient_));
}

inline bool eo_cxx::evas::image::snapshot_get() const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_image_snapshot_get());
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline void eo_cxx::evas::image::snapshot_set(bool s_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_image_snapshot_set(::efl::eolian::to_c(s_)));
}

inline ::eo_cxx::evas::image::operator ::evas::image() const
{
   return *static_cast<::evas::image const*>(static_cast<void const*>(this));
}

inline ::eo_cxx::evas::image::operator ::evas::image&()
{
   return *static_cast<::evas::image*>(static_cast<void*>(this));
}

inline ::eo_cxx::evas::image::operator ::evas::image const&() const
{
   return *static_cast<::evas::image const*>(static_cast<void const*>(this));
}

template <typename T>
void evas_image_preload_begin_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         static_cast<T*>(self->this_)->preload_begin();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void evas_image_data_update_add_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, int x_, int y_, int w_, int h_)
{
   try
      {
         static_cast<T*>(self->this_)->data_update_add(x_, y_, w_, h_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
double evas_image_animated_frame_duration_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, int start_frame_, int frame_num_)
{
   try
      {
         return static_cast<T*>(self->this_)->animated_frame_duration_get(start_frame_, frame_num_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         double _tmp_ret{};
         return _tmp_ret;
      }
}

template <typename T>
void evas_image_data_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, void * data_)
{
   try
      {
         static_cast<T*>(self->this_)->data_set(data_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void * evas_image_data_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Eina_Bool for_writing_)
{
   try
      {
         return static_cast<T*>(self->this_)->data_get(::efl::eolian::to_cxx<bool>(for_writing_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         void * _tmp_ret{};
         return _tmp_ret;
      }
}

template <typename T>
void evas_image_preload_cancel_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         static_cast<T*>(self->this_)->preload_cancel();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
double evas_image_load_dpi_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->load_dpi_get();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         double _tmp_ret{};
         return _tmp_ret;
      }
}

template <typename T>
void evas_image_load_dpi_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, double dpi_)
{
   try
      {
         static_cast<T*>(self->this_)->load_dpi_set(dpi_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
bool evas_image_source_clip_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->source_clip_get();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Eina_Bool _tmp_ret{};
         return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }
}

template <typename T>
void evas_image_source_clip_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Eina_Bool source_clip_)
{
   try
      {
         static_cast<T*>(self->this_)->source_clip_set(::efl::eolian::to_cxx<bool>(source_clip_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
::evas::object evas_image_source_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->source_get();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Evas_Object * _tmp_ret{};
         return ::efl::eolian::to_cxx<::evas::object>(_tmp_ret, std::tuple<std::false_type>());
      }
}

template <typename T>
bool evas_image_source_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Evas_Object * src_)
{
   try
      {
         return static_cast<T*>(self->this_)->source_set(::efl::eolian::to_cxx<::evas::object>(src_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Eina_Bool _tmp_ret{};
         return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }
}

template <typename T>
bool evas_image_filled_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->filled_get();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Eina_Bool _tmp_ret{};
         return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }
}

template <typename T>
void evas_image_filled_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Eina_Bool filled_)
{
   try
      {
         static_cast<T*>(self->this_)->filled_set(::efl::eolian::to_cxx<bool>(filled_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
Evas_Image_Content_Hint evas_image_content_hint_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->content_hint_get();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Evas_Image_Content_Hint _tmp_ret{};
         return _tmp_ret;
      }
}

template <typename T>
void evas_image_content_hint_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Evas_Image_Content_Hint hint_)
{
   try
      {
         static_cast<T*>(self->this_)->content_hint_set(hint_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void evas_image_load_region_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, int* x_, int* y_, int* w_, int* h_)
{
   try
      {
         static_cast<T*>(self->this_)->load_region_get(x_, y_, w_, h_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void evas_image_load_region_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, int x_, int y_, int w_, int h_)
{
   try
      {
         static_cast<T*>(self->this_)->load_region_set(x_, y_, w_, h_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
bool evas_image_alpha_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->alpha_get();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Eina_Bool _tmp_ret{};
         return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }
}

template <typename T>
void evas_image_alpha_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Eina_Bool alpha_)
{
   try
      {
         static_cast<T*>(self->this_)->alpha_set(::efl::eolian::to_cxx<bool>(alpha_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void evas_image_border_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, int* l_, int* r_, int* t_, int* b_)
{
   try
      {
         static_cast<T*>(self->this_)->border_get(l_, r_, t_, b_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void evas_image_border_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, int l_, int r_, int t_, int b_)
{
   try
      {
         static_cast<T*>(self->this_)->border_set(l_, r_, t_, b_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
double evas_image_border_scale_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->border_scale_get();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         double _tmp_ret{};
         return _tmp_ret;
      }
}

template <typename T>
void evas_image_border_scale_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, double scale_)
{
   try
      {
         static_cast<T*>(self->this_)->border_scale_set(scale_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
bool evas_image_pixels_dirty_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->pixels_dirty_get();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Eina_Bool _tmp_ret{};
         return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }
}

template <typename T>
void evas_image_pixels_dirty_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Eina_Bool dirty_)
{
   try
      {
         static_cast<T*>(self->this_)->pixels_dirty_set(::efl::eolian::to_cxx<bool>(dirty_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
const Evas_Video_Surface * evas_image_video_surface_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->video_surface_get();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         const Evas_Video_Surface * _tmp_ret{};
         return _tmp_ret;
      }
}

template <typename T>
void evas_image_video_surface_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Evas_Video_Surface * surf_)
{
   try
      {
         static_cast<T*>(self->this_)->video_surface_set(surf_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
unsigned int evas_image_video_surface_caps_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->video_surface_caps_get();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         unsigned int _tmp_ret{};
         return _tmp_ret;
      }
}

template <typename T>
void evas_image_video_surface_caps_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, unsigned int caps_)
{
   try
      {
         static_cast<T*>(self->this_)->video_surface_caps_set(caps_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
bool evas_image_load_orientation_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->load_orientation_get();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Eina_Bool _tmp_ret{};
         return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }
}

template <typename T>
void evas_image_load_orientation_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Eina_Bool enable_)
{
   try
      {
         static_cast<T*>(self->this_)->load_orientation_set(::efl::eolian::to_cxx<bool>(enable_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
Evas_Border_Fill_Mode evas_image_border_center_fill_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->border_center_fill_get();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Evas_Border_Fill_Mode _tmp_ret{};
         return _tmp_ret;
      }
}

template <typename T>
void evas_image_border_center_fill_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Evas_Border_Fill_Mode fill_)
{
   try
      {
         static_cast<T*>(self->this_)->border_center_fill_set(fill_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
bool evas_image_source_visible_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->source_visible_get();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Eina_Bool _tmp_ret{};
         return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }
}

template <typename T>
void evas_image_source_visible_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Eina_Bool visible_)
{
   try
      {
         static_cast<T*>(self->this_)->source_visible_set(::efl::eolian::to_cxx<bool>(visible_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
Evas_Native_Surface * evas_image_native_surface_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->native_surface_get();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Evas_Native_Surface * _tmp_ret{};
         return _tmp_ret;
      }
}

template <typename T>
void evas_image_native_surface_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Evas_Native_Surface * surf_)
{
   try
      {
         static_cast<T*>(self->this_)->native_surface_set(surf_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
int evas_image_load_scale_down_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->load_scale_down_get();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         int _tmp_ret{};
         return _tmp_ret;
      }
}

template <typename T>
void evas_image_load_scale_down_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, int scale_down_)
{
   try
      {
         static_cast<T*>(self->this_)->load_scale_down_set(scale_down_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
Evas_Image_Scale_Hint evas_image_scale_hint_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->scale_hint_get();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Evas_Image_Scale_Hint _tmp_ret{};
         return _tmp_ret;
      }
}

template <typename T>
void evas_image_scale_hint_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Evas_Image_Scale_Hint hint_)
{
   try
      {
         static_cast<T*>(self->this_)->scale_hint_set(hint_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
bool evas_image_source_events_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->source_events_get();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Eina_Bool _tmp_ret{};
         return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }
}

template <typename T>
void evas_image_source_events_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Eina_Bool source_)
{
   try
      {
         static_cast<T*>(self->this_)->source_events_set(::efl::eolian::to_cxx<bool>(source_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
Evas_Colorspace evas_image_colorspace_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->colorspace_get();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Evas_Colorspace _tmp_ret{};
         return _tmp_ret;
      }
}

template <typename T>
void evas_image_colorspace_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Evas_Colorspace cspace_)
{
   try
      {
         static_cast<T*>(self->this_)->colorspace_set(cspace_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void evas_image_pixels_get_callback_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Evas_Object_Image_Pixels_Get_Cb func_, void * data_)
{
   try
      {
         static_cast<T*>(self->this_)->pixels_get_callback_set(func_, data_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void evas_image_data_copy_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, void * data_)
{
   try
      {
         static_cast<T*>(self->this_)->data_copy_set(data_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void evas_image_animated_frame_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, int frame_index_)
{
   try
      {
         static_cast<T*>(self->this_)->animated_frame_set(frame_index_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
bool evas_image_region_support_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->region_support_get();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Eina_Bool _tmp_ret{};
         return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }
}

template <typename T>
Evas_Load_Error evas_image_load_error_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->load_error_get();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Evas_Load_Error _tmp_ret{};
         return _tmp_ret;
      }
}

template <typename T>
int evas_image_animated_frame_count_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->animated_frame_count_get();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         int _tmp_ret{};
         return _tmp_ret;
      }
}

template <typename T>
int evas_image_stride_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->stride_get();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         int _tmp_ret{};
         return _tmp_ret;
      }
}

template <typename T>
Evas_Image_Animated_Loop_Hint evas_image_animated_loop_type_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->animated_loop_type_get();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Evas_Image_Animated_Loop_Hint _tmp_ret{};
         return _tmp_ret;
      }
}

template <typename T>
int evas_image_animated_loop_count_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->animated_loop_count_get();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         int _tmp_ret{};
         return _tmp_ret;
      }
}

template <typename T>
::evas::canvas3d::scene evas_image_scene_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->scene_get();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Evas_Canvas3D_Scene * _tmp_ret{};
         return ::efl::eolian::to_cxx<::evas::canvas3d::scene>(_tmp_ret, std::tuple<std::false_type>());
      }
}

template <typename T>
void evas_image_scene_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Evas_Canvas3D_Scene * scene_)
{
   try
      {
         static_cast<T*>(self->this_)->scene_set(::efl::eolian::to_cxx<::evas::canvas3d::scene>(scene_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
Evas_Image_Orient evas_image_orient_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->orient_get();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Evas_Image_Orient _tmp_ret{};
         return _tmp_ret;
      }
}

template <typename T>
void evas_image_orient_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Evas_Image_Orient orient_)
{
   try
      {
         static_cast<T*>(self->this_)->orient_set(orient_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
bool evas_image_snapshot_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->snapshot_get();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Eina_Bool _tmp_ret{};
         return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }
}

template <typename T>
void evas_image_snapshot_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Eina_Bool s_)
{
   try
      {
         static_cast<T*>(self->this_)->snapshot_set(::efl::eolian::to_cxx<bool>(s_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

namespace efl { namespace eo { namespace detail {

template<>
struct operations< ::evas::image >
{
   template <typename T>
   struct type
         : virtual operations< ::evas::object >::template type<T>
         , virtual operations< ::efl::file >::template type<T>
         , virtual operations< ::efl::image >::template type<T>
         , virtual operations< ::efl::gfx::fill >::template type<T>
         , virtual operations< ::efl::gfx::view >::template type<T>
         , virtual operations< ::evas::filter >::template type<T>
   {
      virtual void preload_begin()
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_obj_image_preload_begin());
      }

      virtual void data_update_add(int x_, int y_, int w_, int h_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_obj_image_data_update_add(x_, y_, w_, h_));
      }

      virtual double animated_frame_duration_get(int start_frame_, int frame_num_)
      {
         double _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_obj_image_animated_frame_duration_get(start_frame_, frame_num_));
            return _tmp_ret;
      }

      virtual void data_set(void * data_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_obj_image_data_set(data_));
      }

      virtual void * data_get(bool for_writing_)
      {
         void * _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_obj_image_data_get(::efl::eolian::to_c(for_writing_)));
            return _tmp_ret;
      }

      virtual void preload_cancel()
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_obj_image_preload_cancel());
      }

      virtual double load_dpi_get()
      {
         double _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_obj_image_load_dpi_get());
            return _tmp_ret;
      }

      virtual void load_dpi_set(double dpi_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_obj_image_load_dpi_set(dpi_));
      }

      virtual bool source_clip_get()
      {
         Eina_Bool _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_obj_image_source_clip_get());
            return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }

      virtual void source_clip_set(bool source_clip_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_obj_image_source_clip_set(::efl::eolian::to_c(source_clip_)));
      }

      virtual ::evas::object source_get()
      {
         Evas_Object * _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_obj_image_source_get());
            return ::efl::eolian::to_cxx<::evas::object>(_tmp_ret, std::tuple<std::false_type>());
      }

      virtual bool source_set(::evas::object src_)
      {
         Eina_Bool _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_obj_image_source_set(::efl::eolian::to_c(src_)));
            return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }

      virtual bool filled_get()
      {
         Eina_Bool _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_obj_image_filled_get());
            return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }

      virtual void filled_set(bool filled_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_obj_image_filled_set(::efl::eolian::to_c(filled_)));
      }

      virtual Evas_Image_Content_Hint content_hint_get()
      {
         Evas_Image_Content_Hint _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_obj_image_content_hint_get());
            return _tmp_ret;
      }

      virtual void content_hint_set(Evas_Image_Content_Hint hint_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_obj_image_content_hint_set(hint_));
      }

      virtual void load_region_get(int* x_, int* y_, int* w_, int* h_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_obj_image_load_region_get(x_, y_, w_, h_));
      }

      virtual void load_region_set(int x_, int y_, int w_, int h_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_obj_image_load_region_set(x_, y_, w_, h_));
      }

      virtual bool alpha_get()
      {
         Eina_Bool _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_obj_image_alpha_get());
            return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }

      virtual void alpha_set(bool alpha_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_obj_image_alpha_set(::efl::eolian::to_c(alpha_)));
      }

      virtual void border_get(int* l_, int* r_, int* t_, int* b_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_obj_image_border_get(l_, r_, t_, b_));
      }

      virtual void border_set(int l_, int r_, int t_, int b_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_obj_image_border_set(l_, r_, t_, b_));
      }

      virtual double border_scale_get()
      {
         double _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_obj_image_border_scale_get());
            return _tmp_ret;
      }

      virtual void border_scale_set(double scale_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_obj_image_border_scale_set(scale_));
      }

      virtual bool pixels_dirty_get()
      {
         Eina_Bool _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_obj_image_pixels_dirty_get());
            return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }

      virtual void pixels_dirty_set(bool dirty_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_obj_image_pixels_dirty_set(::efl::eolian::to_c(dirty_)));
      }

      virtual const Evas_Video_Surface * video_surface_get()
      {
         const Evas_Video_Surface * _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_obj_image_video_surface_get());
            return _tmp_ret;
      }

      virtual void video_surface_set(Evas_Video_Surface * surf_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_obj_image_video_surface_set(surf_));
      }

      virtual unsigned int video_surface_caps_get()
      {
         unsigned int _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_obj_image_video_surface_caps_get());
            return _tmp_ret;
      }

      virtual void video_surface_caps_set(unsigned int caps_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_obj_image_video_surface_caps_set(caps_));
      }

      virtual bool load_orientation_get()
      {
         Eina_Bool _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_obj_image_load_orientation_get());
            return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }

      virtual void load_orientation_set(bool enable_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_obj_image_load_orientation_set(::efl::eolian::to_c(enable_)));
      }

      virtual Evas_Border_Fill_Mode border_center_fill_get()
      {
         Evas_Border_Fill_Mode _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_obj_image_border_center_fill_get());
            return _tmp_ret;
      }

      virtual void border_center_fill_set(Evas_Border_Fill_Mode fill_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_obj_image_border_center_fill_set(fill_));
      }

      virtual bool source_visible_get()
      {
         Eina_Bool _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_obj_image_source_visible_get());
            return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }

      virtual void source_visible_set(bool visible_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_obj_image_source_visible_set(::efl::eolian::to_c(visible_)));
      }

      virtual Evas_Native_Surface * native_surface_get()
      {
         Evas_Native_Surface * _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_obj_image_native_surface_get());
            return _tmp_ret;
      }

      virtual void native_surface_set(Evas_Native_Surface * surf_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_obj_image_native_surface_set(surf_));
      }

      virtual int load_scale_down_get()
      {
         int _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_obj_image_load_scale_down_get());
            return _tmp_ret;
      }

      virtual void load_scale_down_set(int scale_down_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_obj_image_load_scale_down_set(scale_down_));
      }

      virtual Evas_Image_Scale_Hint scale_hint_get()
      {
         Evas_Image_Scale_Hint _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_obj_image_scale_hint_get());
            return _tmp_ret;
      }

      virtual void scale_hint_set(Evas_Image_Scale_Hint hint_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_obj_image_scale_hint_set(hint_));
      }

      virtual bool source_events_get()
      {
         Eina_Bool _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_obj_image_source_events_get());
            return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }

      virtual void source_events_set(bool source_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_obj_image_source_events_set(::efl::eolian::to_c(source_)));
      }

      virtual Evas_Colorspace colorspace_get()
      {
         Evas_Colorspace _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_obj_image_colorspace_get());
            return _tmp_ret;
      }

      virtual void colorspace_set(Evas_Colorspace cspace_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_obj_image_colorspace_set(cspace_));
      }

      virtual void pixels_get_callback_set(Evas_Object_Image_Pixels_Get_Cb func_, void * data_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_obj_image_pixels_get_callback_set(func_, data_));
      }

      virtual void data_copy_set(void * data_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_obj_image_data_copy_set(data_));
      }

      virtual void animated_frame_set(int frame_index_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_obj_image_animated_frame_set(frame_index_));
      }

      virtual bool region_support_get()
      {
         Eina_Bool _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_obj_image_region_support_get());
            return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }

      virtual Evas_Load_Error load_error_get()
      {
         Evas_Load_Error _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_obj_image_load_error_get());
            return _tmp_ret;
      }

      virtual int animated_frame_count_get()
      {
         int _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_obj_image_animated_frame_count_get());
            return _tmp_ret;
      }

      virtual int stride_get()
      {
         int _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_obj_image_stride_get());
            return _tmp_ret;
      }

      virtual Evas_Image_Animated_Loop_Hint animated_loop_type_get()
      {
         Evas_Image_Animated_Loop_Hint _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_obj_image_animated_loop_type_get());
            return _tmp_ret;
      }

      virtual int animated_loop_count_get()
      {
         int _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_obj_image_animated_loop_count_get());
            return _tmp_ret;
      }

      virtual ::evas::canvas3d::scene scene_get()
      {
         Evas_Canvas3D_Scene * _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_obj_image_scene_get());
            return ::efl::eolian::to_cxx<::evas::canvas3d::scene>(_tmp_ret, std::tuple<std::false_type>());
      }

      virtual void scene_set(::evas::canvas3d::scene scene_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_obj_image_scene_set(::efl::eolian::to_c(scene_)));
      }

      virtual Evas_Image_Orient orient_get()
      {
         Evas_Image_Orient _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_obj_image_orient_get());
            return _tmp_ret;
      }

      virtual void orient_set(Evas_Image_Orient orient_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_obj_image_orient_set(orient_));
      }

      virtual bool snapshot_get()
      {
         Eina_Bool _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_obj_image_snapshot_get());
            return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }

      virtual void snapshot_set(bool s_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_obj_image_snapshot_set(::efl::eolian::to_c(s_)));
      }

   };
};


template<>
struct operation_description_class_size< ::evas::image >
{
   static constexpr int value = 
#if defined(IMAGE_PROTECTED) && defined(IMAGE_BETA)
      61
#elif defined(IMAGE_PROTECTED)
      61
#elif defined(IMAGE_BETA)
      61
#else
      61
#endif
      + operation_description_class_size<::evas::object >::value      + operation_description_class_size<::efl::file >::value      + operation_description_class_size<::efl::image >::value      + operation_description_class_size<::efl::gfx::fill >::value      + operation_description_class_size<::efl::gfx::view >::value      + operation_description_class_size<::evas::filter >::value;
};

template <typename T>
int initialize_operation_description(::efl::eo::detail::tag<::evas::image>
                                 , Eo_Op_Description* ops)
{
   int i = 0;
   (void)i;
   (void)ops;
   ops[i].func = reinterpret_cast<void*>(& ::evas_image_preload_begin_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_image_preload_begin);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_image_data_update_add_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_image_data_update_add);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_image_animated_frame_duration_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_image_animated_frame_duration_get);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_image_data_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_image_data_set);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_image_data_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_image_data_get);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_image_preload_cancel_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_image_preload_cancel);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_image_load_dpi_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_image_load_dpi_get);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_image_load_dpi_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_image_load_dpi_set);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_image_source_clip_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_image_source_clip_get);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_image_source_clip_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_image_source_clip_set);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_image_source_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_image_source_get);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_image_source_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_image_source_set);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_image_filled_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_image_filled_get);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_image_filled_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_image_filled_set);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_image_content_hint_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_image_content_hint_get);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_image_content_hint_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_image_content_hint_set);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_image_load_region_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_image_load_region_get);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_image_load_region_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_image_load_region_set);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_image_alpha_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_image_alpha_get);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_image_alpha_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_image_alpha_set);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_image_border_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_image_border_get);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_image_border_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_image_border_set);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_image_border_scale_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_image_border_scale_get);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_image_border_scale_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_image_border_scale_set);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_image_pixels_dirty_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_image_pixels_dirty_get);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_image_pixels_dirty_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_image_pixels_dirty_set);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_image_video_surface_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_image_video_surface_get);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_image_video_surface_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_image_video_surface_set);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_image_video_surface_caps_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_image_video_surface_caps_get);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_image_video_surface_caps_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_image_video_surface_caps_set);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_image_load_orientation_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_image_load_orientation_get);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_image_load_orientation_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_image_load_orientation_set);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_image_border_center_fill_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_image_border_center_fill_get);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_image_border_center_fill_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_image_border_center_fill_set);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_image_source_visible_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_image_source_visible_get);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_image_source_visible_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_image_source_visible_set);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_image_native_surface_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_image_native_surface_get);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_image_native_surface_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_image_native_surface_set);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_image_load_scale_down_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_image_load_scale_down_get);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_image_load_scale_down_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_image_load_scale_down_set);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_image_scale_hint_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_image_scale_hint_get);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_image_scale_hint_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_image_scale_hint_set);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_image_source_events_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_image_source_events_get);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_image_source_events_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_image_source_events_set);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_image_colorspace_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_image_colorspace_get);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_image_colorspace_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_image_colorspace_set);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_image_pixels_get_callback_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_image_pixels_get_callback_set);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_image_data_copy_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_image_data_copy_set);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_image_animated_frame_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_image_animated_frame_set);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_image_region_support_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_image_region_support_get);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_image_load_error_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_image_load_error_get);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_image_animated_frame_count_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_image_animated_frame_count_get);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_image_stride_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_image_stride_get);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_image_animated_loop_type_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_image_animated_loop_type_get);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_image_animated_loop_count_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_image_animated_loop_count_get);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_image_scene_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_image_scene_get);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_image_scene_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_image_scene_set);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_image_orient_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_image_orient_get);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_image_orient_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_image_orient_set);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_image_snapshot_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_image_snapshot_get);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_image_snapshot_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_image_snapshot_set);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   initialize_operation_description<T>(::efl::eo::detail::tag<::evas::object>(), &ops[operation_description_class_size< ::evas::image >::value]);
   initialize_operation_description<T>(::efl::eo::detail::tag<::efl::file>(), &ops[operation_description_class_size< ::evas::image >::value + operation_description_class_size<::evas::object>::value]);
   initialize_operation_description<T>(::efl::eo::detail::tag<::efl::image>(), &ops[operation_description_class_size< ::evas::image >::value + operation_description_class_size<::evas::object>::value + operation_description_class_size<::efl::file>::value]);
   initialize_operation_description<T>(::efl::eo::detail::tag<::efl::gfx::fill>(), &ops[operation_description_class_size< ::evas::image >::value + operation_description_class_size<::evas::object>::value + operation_description_class_size<::efl::file>::value + operation_description_class_size<::efl::image>::value]);
   initialize_operation_description<T>(::efl::eo::detail::tag<::efl::gfx::view>(), &ops[operation_description_class_size< ::evas::image >::value + operation_description_class_size<::evas::object>::value + operation_description_class_size<::efl::file>::value + operation_description_class_size<::efl::image>::value + operation_description_class_size<::efl::gfx::fill>::value]);
   initialize_operation_description<T>(::efl::eo::detail::tag<::evas::filter>(), &ops[operation_description_class_size< ::evas::image >::value + operation_description_class_size<::evas::object>::value + operation_description_class_size<::efl::file>::value + operation_description_class_size<::efl::image>::value + operation_description_class_size<::efl::gfx::fill>::value + operation_description_class_size<::efl::gfx::view>::value]);
   return 0;
}
inline Eo_Class const* get_eo_class(tag<::evas::image>)
{
   return (EVAS_IMAGE_CLASS);
}

} } }

/// @endcond

