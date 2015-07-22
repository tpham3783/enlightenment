/// @cond EO_CXX_EO_IMPL

inline ::efl::eina::range_list< ::evas::object > evas::canvas::tree_objects_at_xy_get(::evas::object stop_, int x_, int y_) const
{
   Eina_List * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_canvas_tree_objects_at_xy_get(::efl::eolian::to_c(stop_), x_, y_));
   return ::efl::eolian::to_cxx<::efl::eina::range_list< ::evas::object >>(_tmp_ret, std::tuple<std::false_type, std::false_type>());
}

inline void evas::canvas::event_feed_mouse_wheel(int direction_, int z_, unsigned int timestamp_, const void * data_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas_event_feed_mouse_wheel(direction_, z_, timestamp_, data_));
}

inline void evas::canvas::key_lock_on(::efl::eina::string_view keyname_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas_key_lock_on(::efl::eolian::to_c(keyname_)));
}

inline void evas::canvas::event_feed_key_down(::efl::eina::string_view keyname_, ::efl::eina::string_view key_, ::efl::eina::string_view string_, ::efl::eina::string_view compose_, unsigned int timestamp_, const void * data_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas_event_feed_key_down(::efl::eolian::to_c(keyname_), ::efl::eolian::to_c(key_), ::efl::eolian::to_c(string_), ::efl::eolian::to_c(compose_), timestamp_, data_));
}

inline Evas_Modifier_Mask evas::canvas::key_modifier_mask_get(::efl::eina::string_view keyname_) const
{
   Evas_Modifier_Mask _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_canvas_key_modifier_mask_get(::efl::eolian::to_c(keyname_)));
   return _tmp_ret;
}

inline void evas::canvas::key_modifier_add(::efl::eina::string_view keyname_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas_key_modifier_add(::efl::eolian::to_c(keyname_)));
}

inline void evas::canvas::key_modifier_off(::efl::eina::string_view keyname_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas_key_modifier_off(::efl::eolian::to_c(keyname_)));
}

inline void evas::canvas::event_feed_hold(int hold_, unsigned int timestamp_, const void * data_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas_event_feed_hold(hold_, timestamp_, data_));
}

inline void evas::canvas::event_feed_mouse_move(int x_, int y_, unsigned int timestamp_, const void * data_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas_event_feed_mouse_move(x_, y_, timestamp_, data_));
}

inline void evas::canvas::event_feed_key_up(::efl::eina::string_view keyname_, ::efl::eina::string_view key_, ::efl::eina::string_view string_, ::efl::eina::string_view compose_, unsigned int timestamp_, const void * data_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas_event_feed_key_up(::efl::eolian::to_c(keyname_), ::efl::eolian::to_c(key_), ::efl::eolian::to_c(string_), ::efl::eolian::to_c(compose_), timestamp_, data_));
}

inline void evas::canvas::event_feed_mouse_out(unsigned int timestamp_, const void * data_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas_event_feed_mouse_out(timestamp_, data_));
}

inline void evas::canvas::event_input_multi_move(int d_, int x_, int y_, double rad_, double radx_, double rady_, double pres_, double ang_, double fx_, double fy_, unsigned int timestamp_, const void * data_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas_event_input_multi_move(d_, x_, y_, rad_, radx_, rady_, pres_, ang_, fx_, fy_, timestamp_, data_));
}

inline ::efl::eina::range_list< ::evas::object > evas::canvas::objects_at_xy_get(Evas_Coord x_, Evas_Coord y_, bool include_pass_events_objects_, bool include_hidden_objects_) const
{
   Eina_List * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_canvas_objects_at_xy_get(x_, y_, ::efl::eolian::to_c(include_pass_events_objects_), ::efl::eolian::to_c(include_hidden_objects_)));
   return ::efl::eolian::to_cxx<::efl::eina::range_list< ::evas::object >>(_tmp_ret, std::tuple<std::false_type, std::false_type>());
}

inline void evas::canvas::event_input_multi_up(int d_, int x_, int y_, double rad_, double radx_, double rady_, double pres_, double ang_, double fx_, double fy_, Evas_Button_Flags flags_, unsigned int timestamp_, const void * data_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas_event_input_multi_up(d_, x_, y_, rad_, radx_, rady_, pres_, ang_, fx_, fy_, flags_, timestamp_, data_));
}

inline void evas::canvas::event_feed_multi_down(int d_, int x_, int y_, double rad_, double radx_, double rady_, double pres_, double ang_, double fx_, double fy_, Evas_Button_Flags flags_, unsigned int timestamp_, const void * data_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas_event_feed_multi_down(d_, x_, y_, rad_, radx_, rady_, pres_, ang_, fx_, fy_, flags_, timestamp_, data_));
}

inline bool evas::canvas::render_async() const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_canvas_render_async());
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline bool evas::canvas::render2() const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_canvas_render2());
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline ::efl::eina::list< Eina_Rectangle * > evas::canvas::render2_updates() const
{
   Eina_List * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_canvas_render2_updates());
   return ::efl::eolian::to_cxx<::efl::eina::list< Eina_Rectangle * >>(_tmp_ret, std::tuple<std::true_type, std::false_type>());
}

inline void evas::canvas::focus_out() const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas_focus_out());
}

inline void evas::canvas::event_input_mouse_move(int x_, int y_, unsigned int timestamp_, const void * data_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas_event_input_mouse_move(x_, y_, timestamp_, data_));
}

inline void evas::canvas::norender() const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas_norender());
}

inline unsigned int evas::canvas::touch_point_list_count() const
{
   unsigned int _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_canvas_touch_point_list_count());
   return _tmp_ret;
}

inline void evas::canvas::event_input_multi_down(int d_, int x_, int y_, double rad_, double radx_, double rady_, double pres_, double ang_, double fx_, double fy_, Evas_Button_Flags flags_, unsigned int timestamp_, const void * data_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas_event_input_multi_down(d_, x_, y_, rad_, radx_, rady_, pres_, ang_, fx_, fy_, flags_, timestamp_, data_));
}

inline void evas::canvas::nochange_pop() const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas_nochange_pop());
}

inline void evas::canvas::key_lock_off(::efl::eina::string_view keyname_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas_key_lock_off(::efl::eolian::to_c(keyname_)));
}

inline void evas::canvas::nochange_push() const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas_nochange_push());
}

inline void evas::canvas::font_cache_flush() const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas_font_cache_flush());
}

inline bool evas::canvas::font_hinting_can_hint(Evas_Font_Hinting_Flags hinting_) const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_canvas_font_hinting_can_hint(hinting_));
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline ::evas::object evas::canvas::object_top_at_xy_get(Evas_Coord x_, Evas_Coord y_, bool include_pass_events_objects_, bool include_hidden_objects_) const
{
   Evas_Object * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_canvas_object_top_at_xy_get(x_, y_, ::efl::eolian::to_c(include_pass_events_objects_), ::efl::eolian::to_c(include_hidden_objects_)));
   return ::efl::eolian::to_cxx<::evas::object>(_tmp_ret, std::tuple<std::false_type>());
}

inline void evas::canvas::key_modifier_on(::efl::eina::string_view keyname_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas_key_modifier_on(::efl::eolian::to_c(keyname_)));
}

inline void evas::canvas::event_feed_mouse_up(int b_, Evas_Button_Flags flags_, unsigned int timestamp_, const void * data_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas_event_feed_mouse_up(b_, flags_, timestamp_, data_));
}

inline void evas::canvas::event_feed_mouse_down(int b_, Evas_Button_Flags flags_, unsigned int timestamp_, const void * data_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas_event_feed_mouse_down(b_, flags_, timestamp_, data_));
}

inline void evas::canvas::event_refeed_event(void * event_copy_, Evas_Callback_Type event_type_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas_event_refeed_event(event_copy_, event_type_));
}

inline ::efl::eina::range_list< ::efl::eina::string_view > evas::canvas::font_available_list() const
{
   Eina_List * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_canvas_font_available_list());
   return ::efl::eolian::to_cxx<::efl::eina::range_list< ::efl::eina::string_view >>(_tmp_ret, std::tuple<std::false_type, std::false_type>());
}

inline ::efl::eina::range_list< ::evas::object > evas::canvas::objects_in_rectangle_get(Evas_Coord x_, Evas_Coord y_, Evas_Coord w_, Evas_Coord h_, bool include_pass_events_objects_, bool include_hidden_objects_) const
{
   Eina_List * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_canvas_objects_in_rectangle_get(x_, y_, w_, h_, ::efl::eolian::to_c(include_pass_events_objects_), ::efl::eolian::to_c(include_hidden_objects_)));
   return ::efl::eolian::to_cxx<::efl::eina::range_list< ::evas::object >>(_tmp_ret, std::tuple<std::false_type, std::false_type>());
}

inline ::evas::object evas::canvas::object_name_find(::efl::eina::string_view name_) const
{
   Evas_Object * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_canvas_object_name_find(::efl::eolian::to_c(name_)));
   return ::efl::eolian::to_cxx<::evas::object>(_tmp_ret, std::tuple<std::false_type>());
}

inline void evas::canvas::font_path_append(::efl::eina::string_view path_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas_font_path_append(::efl::eolian::to_c(path_)));
}

inline int evas::canvas::touch_point_list_nth_id_get(unsigned int n_) const
{
   int _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_canvas_touch_point_list_nth_id_get(n_));
   return _tmp_ret;
}

inline void evas::canvas::font_path_clear() const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas_font_path_clear());
}

inline void evas::canvas::smart_objects_calculate() const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas_smart_objects_calculate());
}

inline void evas::canvas::touch_point_list_nth_xy_get(unsigned int n_, Evas_Coord* x_, Evas_Coord* y_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas_touch_point_list_nth_xy_get(n_, x_, y_));
}

inline void evas::canvas::key_lock_del(::efl::eina::string_view keyname_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas_key_lock_del(::efl::eolian::to_c(keyname_)));
}

inline void evas::canvas::damage_rectangle_add(int x_, int y_, int w_, int h_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas_damage_rectangle_add(x_, y_, w_, h_));
}

inline void evas::canvas::sync() const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas_sync());
}

inline ::efl::eina::crange_list< ::efl::eina::string_view > evas::canvas::font_path_list() const
{
   const Eina_List * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_canvas_font_path_list());
   return ::efl::eolian::to_cxx<::efl::eina::crange_list< ::efl::eina::string_view >>(_tmp_ret, std::tuple<std::false_type, std::false_type>());
}

inline void evas::canvas::image_cache_reload() const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas_image_cache_reload());
}

inline int evas::canvas::coord_world_x_to_screen(Evas_Coord x_) const
{
   int _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_canvas_coord_world_x_to_screen(x_));
   return _tmp_ret;
}

inline void evas::canvas::event_feed_multi_move(int d_, int x_, int y_, double rad_, double radx_, double rady_, double pres_, double ang_, double fx_, double fy_, unsigned int timestamp_, const void * data_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas_event_feed_multi_move(d_, x_, y_, rad_, radx_, rady_, pres_, ang_, fx_, fy_, timestamp_, data_));
}

inline ::efl::eina::list< Eina_Rectangle * > evas::canvas::render_updates() const
{
   Eina_List * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_canvas_render_updates());
   return ::efl::eolian::to_cxx<::efl::eina::list< Eina_Rectangle * >>(_tmp_ret, std::tuple<std::true_type, std::false_type>());
}

inline void evas::canvas::image_cache_flush() const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas_image_cache_flush());
}

inline Evas_Coord evas::canvas::coord_screen_y_to_world(int y_) const
{
   Evas_Coord _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_canvas_coord_screen_y_to_world(y_));
   return _tmp_ret;
}

inline void evas::canvas::key_modifier_del(::efl::eina::string_view keyname_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas_key_modifier_del(::efl::eolian::to_c(keyname_)));
}

inline Evas_Touch_Point_State evas::canvas::touch_point_list_nth_state_get(unsigned int n_) const
{
   Evas_Touch_Point_State _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_canvas_touch_point_list_nth_state_get(n_));
   return _tmp_ret;
}

inline void evas::canvas::focus_in() const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas_focus_in());
}

inline void evas::canvas::obscured_rectangle_add(int x_, int y_, int w_, int h_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas_obscured_rectangle_add(x_, y_, w_, h_));
}

inline void evas::canvas::render_dump() const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas_render_dump());
}

inline void evas::canvas::event_feed_mouse_in(unsigned int timestamp_, const void * data_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas_event_feed_mouse_in(timestamp_, data_));
}

inline ::evas::object evas::canvas::object_top_in_rectangle_get(Evas_Coord x_, Evas_Coord y_, Evas_Coord w_, Evas_Coord h_, bool include_pass_events_objects_, bool include_hidden_objects_) const
{
   Evas_Object * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_canvas_object_top_in_rectangle_get(x_, y_, w_, h_, ::efl::eolian::to_c(include_pass_events_objects_), ::efl::eolian::to_c(include_hidden_objects_)));
   return ::efl::eolian::to_cxx<::evas::object>(_tmp_ret, std::tuple<std::false_type>());
}

inline void evas::canvas::render() const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas_render());
}

inline void evas::canvas::event_feed_multi_up(int d_, int x_, int y_, double rad_, double radx_, double rady_, double pres_, double ang_, double fx_, double fy_, Evas_Button_Flags flags_, unsigned int timestamp_, const void * data_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas_event_feed_multi_up(d_, x_, y_, rad_, radx_, rady_, pres_, ang_, fx_, fy_, flags_, timestamp_, data_));
}

inline void evas::canvas::font_path_prepend(::efl::eina::string_view path_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas_font_path_prepend(::efl::eolian::to_c(path_)));
}

inline void evas::canvas::obscured_clear() const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas_obscured_clear());
}

inline void evas::canvas::event_feed_mouse_cancel(unsigned int timestamp_, const void * data_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas_event_feed_mouse_cancel(timestamp_, data_));
}

inline Evas_Coord evas::canvas::coord_screen_x_to_world(int x_) const
{
   Evas_Coord _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_canvas_coord_screen_x_to_world(x_));
   return _tmp_ret;
}

inline void evas::canvas::key_lock_add(::efl::eina::string_view keyname_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas_key_lock_add(::efl::eolian::to_c(keyname_)));
}

inline void evas::canvas::render_idle_flush() const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas_render_idle_flush());
}

inline int evas::canvas::coord_world_y_to_screen(Evas_Coord y_) const
{
   int _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_canvas_coord_world_y_to_screen(y_));
   return _tmp_ret;
}

inline void evas::canvas::event_feed_key_down_with_keycode(::efl::eina::string_view keyname_, ::efl::eina::string_view key_, ::efl::eina::string_view string_, ::efl::eina::string_view compose_, unsigned int timestamp_, const void * data_, unsigned int keycode_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas_event_feed_key_down_with_keycode(::efl::eolian::to_c(keyname_), ::efl::eolian::to_c(key_), ::efl::eolian::to_c(string_), ::efl::eolian::to_c(compose_), timestamp_, data_, keycode_));
}

inline void evas::canvas::event_feed_key_up_with_keycode(::efl::eina::string_view keyname_, ::efl::eina::string_view key_, ::efl::eina::string_view string_, ::efl::eina::string_view compose_, unsigned int timestamp_, const void * data_, unsigned int keycode_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas_event_feed_key_up_with_keycode(::efl::eolian::to_c(keyname_), ::efl::eolian::to_c(key_), ::efl::eolian::to_c(string_), ::efl::eolian::to_c(compose_), timestamp_, data_, keycode_));
}

inline void evas::canvas::event_feed_axis_update(unsigned int timestamp_, int device_, int toolid_, int naxes_, const Evas_Axis * axis_, const void * data_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas_event_feed_axis_update(timestamp_, device_, toolid_, naxes_, axis_, data_));
}

inline void evas::canvas::output_framespace_get(Evas_Coord* x_, Evas_Coord* y_, Evas_Coord* w_, Evas_Coord* h_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas_output_framespace_get(x_, y_, w_, h_));
}

inline void evas::canvas::output_framespace_set(Evas_Coord x_, Evas_Coord y_, Evas_Coord w_, Evas_Coord h_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas_output_framespace_set(x_, y_, w_, h_));
}

inline void evas::canvas::output_viewport_get(Evas_Coord* x_, Evas_Coord* y_, Evas_Coord* w_, Evas_Coord* h_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas_output_viewport_get(x_, y_, w_, h_));
}

inline void evas::canvas::output_viewport_set(Evas_Coord x_, Evas_Coord y_, Evas_Coord w_, Evas_Coord h_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas_output_viewport_set(x_, y_, w_, h_));
}

inline int evas::canvas::image_cache_get() const
{
   int _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_canvas_image_cache_get());
   return _tmp_ret;
}

inline void evas::canvas::image_cache_set(int size_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas_image_cache_set(size_));
}

inline Evas_Event_Flags evas::canvas::event_default_flags_get() const
{
   Evas_Event_Flags _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_canvas_event_default_flags_get());
   return _tmp_ret;
}

inline void evas::canvas::event_default_flags_set(Evas_Event_Flags flags_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas_event_default_flags_set(flags_));
}

inline int evas::canvas::output_method_get() const
{
   int _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_canvas_output_method_get());
   return _tmp_ret;
}

inline void evas::canvas::output_method_set(int render_method_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas_output_method_set(render_method_));
}

inline int evas::canvas::font_cache_get() const
{
   int _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_canvas_font_cache_get());
   return _tmp_ret;
}

inline void evas::canvas::font_cache_set(int size_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas_font_cache_set(size_));
}

inline void evas::canvas::output_size_get(int* w_, int* h_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas_output_size_get(w_, h_));
}

inline void evas::canvas::output_size_set(int w_, int h_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas_output_size_set(w_, h_));
}

inline void * evas::canvas::data_attach_get() const
{
   void * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_canvas_data_attach_get());
   return _tmp_ret;
}

inline void evas::canvas::data_attach_set(void * data_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas_data_attach_set(data_));
}

inline Evas_Font_Hinting_Flags evas::canvas::font_hinting_get() const
{
   Evas_Font_Hinting_Flags _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_canvas_font_hinting_get());
   return _tmp_ret;
}

inline void evas::canvas::font_hinting_set(Evas_Font_Hinting_Flags hinting_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas_font_hinting_set(hinting_));
}

inline Evas_Engine_Info * evas::canvas::engine_info_get() const
{
   Evas_Engine_Info * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_canvas_engine_info_get());
   return _tmp_ret;
}

inline bool evas::canvas::engine_info_set(Evas_Engine_Info * info_) const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_canvas_engine_info_set(info_));
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline ::evas::object evas::canvas::focus_get() const
{
   Evas_Object * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_canvas_focus_get());
   return ::efl::eolian::to_cxx<::evas::object>(_tmp_ret, std::tuple<std::false_type>());
}

inline ::evas::object evas::canvas::object_top_get() const
{
   Evas_Object * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_canvas_object_top_get());
   return ::efl::eolian::to_cxx<::evas::object>(_tmp_ret, std::tuple<std::false_type>());
}

inline const Evas_Lock * evas::canvas::key_lock_get() const
{
   const Evas_Lock * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_canvas_key_lock_get());
   return _tmp_ret;
}

inline void evas::canvas::pointer_canvas_xy_get(Evas_Coord* x_, Evas_Coord* y_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas_pointer_canvas_xy_get(x_, y_));
}

inline int evas::canvas::event_down_count_get() const
{
   int _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_canvas_event_down_count_get());
   return _tmp_ret;
}

inline int evas::canvas::smart_objects_calculate_count_get() const
{
   int _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_canvas_smart_objects_calculate_count_get());
   return _tmp_ret;
}

inline bool evas::canvas::focus_state_get() const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_canvas_focus_state_get());
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline bool evas::canvas::changed_get() const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_canvas_changed_get());
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline void evas::canvas::pointer_output_xy_get(int* x_, int* y_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas_pointer_output_xy_get(x_, y_));
}

inline bool evas::canvas::pointer_inside_get() const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_canvas_pointer_inside_get());
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline bool evas::canvas::image_max_size_get(int* maxw_, int* maxh_) const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_canvas_image_max_size_get(maxw_, maxh_));
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline ::evas::object evas::canvas::object_bottom_get() const
{
   Evas_Object * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_canvas_object_bottom_get());
   return ::efl::eolian::to_cxx<::evas::object>(_tmp_ret, std::tuple<std::false_type>());
}

inline const Evas_Modifier * evas::canvas::key_modifier_get() const
{
   const Evas_Modifier * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_canvas_key_modifier_get());
   return _tmp_ret;
}

inline int evas::canvas::pointer_button_down_mask_get() const
{
   int _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_canvas_pointer_button_down_mask_get());
   return _tmp_ret;
}

inline ::efl::eina::range_list< ::evas::object > eo_cxx::evas::canvas::tree_objects_at_xy_get(::evas::object stop_, int x_, int y_) const
{
   Eina_List * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_canvas_tree_objects_at_xy_get(::efl::eolian::to_c(stop_), x_, y_));
   return ::efl::eolian::to_cxx<::efl::eina::range_list< ::evas::object >>(_tmp_ret, std::tuple<std::false_type, std::false_type>());
}

inline void eo_cxx::evas::canvas::event_feed_mouse_wheel(int direction_, int z_, unsigned int timestamp_, const void * data_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas_event_feed_mouse_wheel(direction_, z_, timestamp_, data_));
}

inline void eo_cxx::evas::canvas::key_lock_on(::efl::eina::string_view keyname_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas_key_lock_on(::efl::eolian::to_c(keyname_)));
}

inline void eo_cxx::evas::canvas::event_feed_key_down(::efl::eina::string_view keyname_, ::efl::eina::string_view key_, ::efl::eina::string_view string_, ::efl::eina::string_view compose_, unsigned int timestamp_, const void * data_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas_event_feed_key_down(::efl::eolian::to_c(keyname_), ::efl::eolian::to_c(key_), ::efl::eolian::to_c(string_), ::efl::eolian::to_c(compose_), timestamp_, data_));
}

inline Evas_Modifier_Mask eo_cxx::evas::canvas::key_modifier_mask_get(::efl::eina::string_view keyname_) const
{
   Evas_Modifier_Mask _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_canvas_key_modifier_mask_get(::efl::eolian::to_c(keyname_)));
   return _tmp_ret;
}

inline void eo_cxx::evas::canvas::key_modifier_add(::efl::eina::string_view keyname_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas_key_modifier_add(::efl::eolian::to_c(keyname_)));
}

inline void eo_cxx::evas::canvas::key_modifier_off(::efl::eina::string_view keyname_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas_key_modifier_off(::efl::eolian::to_c(keyname_)));
}

inline void eo_cxx::evas::canvas::event_feed_hold(int hold_, unsigned int timestamp_, const void * data_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas_event_feed_hold(hold_, timestamp_, data_));
}

inline void eo_cxx::evas::canvas::event_feed_mouse_move(int x_, int y_, unsigned int timestamp_, const void * data_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas_event_feed_mouse_move(x_, y_, timestamp_, data_));
}

inline void eo_cxx::evas::canvas::event_feed_key_up(::efl::eina::string_view keyname_, ::efl::eina::string_view key_, ::efl::eina::string_view string_, ::efl::eina::string_view compose_, unsigned int timestamp_, const void * data_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas_event_feed_key_up(::efl::eolian::to_c(keyname_), ::efl::eolian::to_c(key_), ::efl::eolian::to_c(string_), ::efl::eolian::to_c(compose_), timestamp_, data_));
}

inline void eo_cxx::evas::canvas::event_feed_mouse_out(unsigned int timestamp_, const void * data_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas_event_feed_mouse_out(timestamp_, data_));
}

inline void eo_cxx::evas::canvas::event_input_multi_move(int d_, int x_, int y_, double rad_, double radx_, double rady_, double pres_, double ang_, double fx_, double fy_, unsigned int timestamp_, const void * data_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas_event_input_multi_move(d_, x_, y_, rad_, radx_, rady_, pres_, ang_, fx_, fy_, timestamp_, data_));
}

inline ::efl::eina::range_list< ::evas::object > eo_cxx::evas::canvas::objects_at_xy_get(Evas_Coord x_, Evas_Coord y_, bool include_pass_events_objects_, bool include_hidden_objects_) const
{
   Eina_List * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_canvas_objects_at_xy_get(x_, y_, ::efl::eolian::to_c(include_pass_events_objects_), ::efl::eolian::to_c(include_hidden_objects_)));
   return ::efl::eolian::to_cxx<::efl::eina::range_list< ::evas::object >>(_tmp_ret, std::tuple<std::false_type, std::false_type>());
}

inline void eo_cxx::evas::canvas::event_input_multi_up(int d_, int x_, int y_, double rad_, double radx_, double rady_, double pres_, double ang_, double fx_, double fy_, Evas_Button_Flags flags_, unsigned int timestamp_, const void * data_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas_event_input_multi_up(d_, x_, y_, rad_, radx_, rady_, pres_, ang_, fx_, fy_, flags_, timestamp_, data_));
}

inline void eo_cxx::evas::canvas::event_feed_multi_down(int d_, int x_, int y_, double rad_, double radx_, double rady_, double pres_, double ang_, double fx_, double fy_, Evas_Button_Flags flags_, unsigned int timestamp_, const void * data_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas_event_feed_multi_down(d_, x_, y_, rad_, radx_, rady_, pres_, ang_, fx_, fy_, flags_, timestamp_, data_));
}

inline bool eo_cxx::evas::canvas::render_async() const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_canvas_render_async());
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline bool eo_cxx::evas::canvas::render2() const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_canvas_render2());
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline ::efl::eina::list< Eina_Rectangle * > eo_cxx::evas::canvas::render2_updates() const
{
   Eina_List * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_canvas_render2_updates());
   return ::efl::eolian::to_cxx<::efl::eina::list< Eina_Rectangle * >>(_tmp_ret, std::tuple<std::true_type, std::false_type>());
}

inline void eo_cxx::evas::canvas::focus_out() const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas_focus_out());
}

inline void eo_cxx::evas::canvas::event_input_mouse_move(int x_, int y_, unsigned int timestamp_, const void * data_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas_event_input_mouse_move(x_, y_, timestamp_, data_));
}

inline void eo_cxx::evas::canvas::norender() const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas_norender());
}

inline unsigned int eo_cxx::evas::canvas::touch_point_list_count() const
{
   unsigned int _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_canvas_touch_point_list_count());
   return _tmp_ret;
}

inline void eo_cxx::evas::canvas::event_input_multi_down(int d_, int x_, int y_, double rad_, double radx_, double rady_, double pres_, double ang_, double fx_, double fy_, Evas_Button_Flags flags_, unsigned int timestamp_, const void * data_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas_event_input_multi_down(d_, x_, y_, rad_, radx_, rady_, pres_, ang_, fx_, fy_, flags_, timestamp_, data_));
}

inline void eo_cxx::evas::canvas::nochange_pop() const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas_nochange_pop());
}

inline void eo_cxx::evas::canvas::key_lock_off(::efl::eina::string_view keyname_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas_key_lock_off(::efl::eolian::to_c(keyname_)));
}

inline void eo_cxx::evas::canvas::nochange_push() const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas_nochange_push());
}

inline void eo_cxx::evas::canvas::font_cache_flush() const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas_font_cache_flush());
}

inline bool eo_cxx::evas::canvas::font_hinting_can_hint(Evas_Font_Hinting_Flags hinting_) const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_canvas_font_hinting_can_hint(hinting_));
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline ::evas::object eo_cxx::evas::canvas::object_top_at_xy_get(Evas_Coord x_, Evas_Coord y_, bool include_pass_events_objects_, bool include_hidden_objects_) const
{
   Evas_Object * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_canvas_object_top_at_xy_get(x_, y_, ::efl::eolian::to_c(include_pass_events_objects_), ::efl::eolian::to_c(include_hidden_objects_)));
   return ::efl::eolian::to_cxx<::evas::object>(_tmp_ret, std::tuple<std::false_type>());
}

inline void eo_cxx::evas::canvas::key_modifier_on(::efl::eina::string_view keyname_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas_key_modifier_on(::efl::eolian::to_c(keyname_)));
}

inline void eo_cxx::evas::canvas::event_feed_mouse_up(int b_, Evas_Button_Flags flags_, unsigned int timestamp_, const void * data_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas_event_feed_mouse_up(b_, flags_, timestamp_, data_));
}

inline void eo_cxx::evas::canvas::event_feed_mouse_down(int b_, Evas_Button_Flags flags_, unsigned int timestamp_, const void * data_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas_event_feed_mouse_down(b_, flags_, timestamp_, data_));
}

inline void eo_cxx::evas::canvas::event_refeed_event(void * event_copy_, Evas_Callback_Type event_type_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas_event_refeed_event(event_copy_, event_type_));
}

inline ::efl::eina::range_list< ::efl::eina::string_view > eo_cxx::evas::canvas::font_available_list() const
{
   Eina_List * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_canvas_font_available_list());
   return ::efl::eolian::to_cxx<::efl::eina::range_list< ::efl::eina::string_view >>(_tmp_ret, std::tuple<std::false_type, std::false_type>());
}

inline ::efl::eina::range_list< ::evas::object > eo_cxx::evas::canvas::objects_in_rectangle_get(Evas_Coord x_, Evas_Coord y_, Evas_Coord w_, Evas_Coord h_, bool include_pass_events_objects_, bool include_hidden_objects_) const
{
   Eina_List * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_canvas_objects_in_rectangle_get(x_, y_, w_, h_, ::efl::eolian::to_c(include_pass_events_objects_), ::efl::eolian::to_c(include_hidden_objects_)));
   return ::efl::eolian::to_cxx<::efl::eina::range_list< ::evas::object >>(_tmp_ret, std::tuple<std::false_type, std::false_type>());
}

inline ::evas::object eo_cxx::evas::canvas::object_name_find(::efl::eina::string_view name_) const
{
   Evas_Object * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_canvas_object_name_find(::efl::eolian::to_c(name_)));
   return ::efl::eolian::to_cxx<::evas::object>(_tmp_ret, std::tuple<std::false_type>());
}

inline void eo_cxx::evas::canvas::font_path_append(::efl::eina::string_view path_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas_font_path_append(::efl::eolian::to_c(path_)));
}

inline int eo_cxx::evas::canvas::touch_point_list_nth_id_get(unsigned int n_) const
{
   int _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_canvas_touch_point_list_nth_id_get(n_));
   return _tmp_ret;
}

inline void eo_cxx::evas::canvas::font_path_clear() const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas_font_path_clear());
}

inline void eo_cxx::evas::canvas::smart_objects_calculate() const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas_smart_objects_calculate());
}

inline void eo_cxx::evas::canvas::touch_point_list_nth_xy_get(unsigned int n_, Evas_Coord* x_, Evas_Coord* y_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas_touch_point_list_nth_xy_get(n_, x_, y_));
}

inline void eo_cxx::evas::canvas::key_lock_del(::efl::eina::string_view keyname_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas_key_lock_del(::efl::eolian::to_c(keyname_)));
}

inline void eo_cxx::evas::canvas::damage_rectangle_add(int x_, int y_, int w_, int h_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas_damage_rectangle_add(x_, y_, w_, h_));
}

inline void eo_cxx::evas::canvas::sync() const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas_sync());
}

inline ::efl::eina::crange_list< ::efl::eina::string_view > eo_cxx::evas::canvas::font_path_list() const
{
   const Eina_List * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_canvas_font_path_list());
   return ::efl::eolian::to_cxx<::efl::eina::crange_list< ::efl::eina::string_view >>(_tmp_ret, std::tuple<std::false_type, std::false_type>());
}

inline void eo_cxx::evas::canvas::image_cache_reload() const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas_image_cache_reload());
}

inline int eo_cxx::evas::canvas::coord_world_x_to_screen(Evas_Coord x_) const
{
   int _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_canvas_coord_world_x_to_screen(x_));
   return _tmp_ret;
}

inline void eo_cxx::evas::canvas::event_feed_multi_move(int d_, int x_, int y_, double rad_, double radx_, double rady_, double pres_, double ang_, double fx_, double fy_, unsigned int timestamp_, const void * data_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas_event_feed_multi_move(d_, x_, y_, rad_, radx_, rady_, pres_, ang_, fx_, fy_, timestamp_, data_));
}

inline ::efl::eina::list< Eina_Rectangle * > eo_cxx::evas::canvas::render_updates() const
{
   Eina_List * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_canvas_render_updates());
   return ::efl::eolian::to_cxx<::efl::eina::list< Eina_Rectangle * >>(_tmp_ret, std::tuple<std::true_type, std::false_type>());
}

inline void eo_cxx::evas::canvas::image_cache_flush() const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas_image_cache_flush());
}

inline Evas_Coord eo_cxx::evas::canvas::coord_screen_y_to_world(int y_) const
{
   Evas_Coord _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_canvas_coord_screen_y_to_world(y_));
   return _tmp_ret;
}

inline void eo_cxx::evas::canvas::key_modifier_del(::efl::eina::string_view keyname_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas_key_modifier_del(::efl::eolian::to_c(keyname_)));
}

inline Evas_Touch_Point_State eo_cxx::evas::canvas::touch_point_list_nth_state_get(unsigned int n_) const
{
   Evas_Touch_Point_State _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_canvas_touch_point_list_nth_state_get(n_));
   return _tmp_ret;
}

inline void eo_cxx::evas::canvas::focus_in() const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas_focus_in());
}

inline void eo_cxx::evas::canvas::obscured_rectangle_add(int x_, int y_, int w_, int h_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas_obscured_rectangle_add(x_, y_, w_, h_));
}

inline void eo_cxx::evas::canvas::render_dump() const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas_render_dump());
}

inline void eo_cxx::evas::canvas::event_feed_mouse_in(unsigned int timestamp_, const void * data_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas_event_feed_mouse_in(timestamp_, data_));
}

inline ::evas::object eo_cxx::evas::canvas::object_top_in_rectangle_get(Evas_Coord x_, Evas_Coord y_, Evas_Coord w_, Evas_Coord h_, bool include_pass_events_objects_, bool include_hidden_objects_) const
{
   Evas_Object * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_canvas_object_top_in_rectangle_get(x_, y_, w_, h_, ::efl::eolian::to_c(include_pass_events_objects_), ::efl::eolian::to_c(include_hidden_objects_)));
   return ::efl::eolian::to_cxx<::evas::object>(_tmp_ret, std::tuple<std::false_type>());
}

inline void eo_cxx::evas::canvas::render() const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas_render());
}

inline void eo_cxx::evas::canvas::event_feed_multi_up(int d_, int x_, int y_, double rad_, double radx_, double rady_, double pres_, double ang_, double fx_, double fy_, Evas_Button_Flags flags_, unsigned int timestamp_, const void * data_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas_event_feed_multi_up(d_, x_, y_, rad_, radx_, rady_, pres_, ang_, fx_, fy_, flags_, timestamp_, data_));
}

inline void eo_cxx::evas::canvas::font_path_prepend(::efl::eina::string_view path_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas_font_path_prepend(::efl::eolian::to_c(path_)));
}

inline void eo_cxx::evas::canvas::obscured_clear() const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas_obscured_clear());
}

inline void eo_cxx::evas::canvas::event_feed_mouse_cancel(unsigned int timestamp_, const void * data_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas_event_feed_mouse_cancel(timestamp_, data_));
}

inline Evas_Coord eo_cxx::evas::canvas::coord_screen_x_to_world(int x_) const
{
   Evas_Coord _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_canvas_coord_screen_x_to_world(x_));
   return _tmp_ret;
}

inline void eo_cxx::evas::canvas::key_lock_add(::efl::eina::string_view keyname_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas_key_lock_add(::efl::eolian::to_c(keyname_)));
}

inline void eo_cxx::evas::canvas::render_idle_flush() const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas_render_idle_flush());
}

inline int eo_cxx::evas::canvas::coord_world_y_to_screen(Evas_Coord y_) const
{
   int _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_canvas_coord_world_y_to_screen(y_));
   return _tmp_ret;
}

inline void eo_cxx::evas::canvas::event_feed_key_down_with_keycode(::efl::eina::string_view keyname_, ::efl::eina::string_view key_, ::efl::eina::string_view string_, ::efl::eina::string_view compose_, unsigned int timestamp_, const void * data_, unsigned int keycode_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas_event_feed_key_down_with_keycode(::efl::eolian::to_c(keyname_), ::efl::eolian::to_c(key_), ::efl::eolian::to_c(string_), ::efl::eolian::to_c(compose_), timestamp_, data_, keycode_));
}

inline void eo_cxx::evas::canvas::event_feed_key_up_with_keycode(::efl::eina::string_view keyname_, ::efl::eina::string_view key_, ::efl::eina::string_view string_, ::efl::eina::string_view compose_, unsigned int timestamp_, const void * data_, unsigned int keycode_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas_event_feed_key_up_with_keycode(::efl::eolian::to_c(keyname_), ::efl::eolian::to_c(key_), ::efl::eolian::to_c(string_), ::efl::eolian::to_c(compose_), timestamp_, data_, keycode_));
}

inline void eo_cxx::evas::canvas::event_feed_axis_update(unsigned int timestamp_, int device_, int toolid_, int naxes_, const Evas_Axis * axis_, const void * data_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas_event_feed_axis_update(timestamp_, device_, toolid_, naxes_, axis_, data_));
}

inline void eo_cxx::evas::canvas::output_framespace_get(Evas_Coord* x_, Evas_Coord* y_, Evas_Coord* w_, Evas_Coord* h_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas_output_framespace_get(x_, y_, w_, h_));
}

inline void eo_cxx::evas::canvas::output_framespace_set(Evas_Coord x_, Evas_Coord y_, Evas_Coord w_, Evas_Coord h_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas_output_framespace_set(x_, y_, w_, h_));
}

inline void eo_cxx::evas::canvas::output_viewport_get(Evas_Coord* x_, Evas_Coord* y_, Evas_Coord* w_, Evas_Coord* h_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas_output_viewport_get(x_, y_, w_, h_));
}

inline void eo_cxx::evas::canvas::output_viewport_set(Evas_Coord x_, Evas_Coord y_, Evas_Coord w_, Evas_Coord h_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas_output_viewport_set(x_, y_, w_, h_));
}

inline int eo_cxx::evas::canvas::image_cache_get() const
{
   int _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_canvas_image_cache_get());
   return _tmp_ret;
}

inline void eo_cxx::evas::canvas::image_cache_set(int size_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas_image_cache_set(size_));
}

inline Evas_Event_Flags eo_cxx::evas::canvas::event_default_flags_get() const
{
   Evas_Event_Flags _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_canvas_event_default_flags_get());
   return _tmp_ret;
}

inline void eo_cxx::evas::canvas::event_default_flags_set(Evas_Event_Flags flags_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas_event_default_flags_set(flags_));
}

inline int eo_cxx::evas::canvas::output_method_get() const
{
   int _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_canvas_output_method_get());
   return _tmp_ret;
}

inline void eo_cxx::evas::canvas::output_method_set(int render_method_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas_output_method_set(render_method_));
}

inline int eo_cxx::evas::canvas::font_cache_get() const
{
   int _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_canvas_font_cache_get());
   return _tmp_ret;
}

inline void eo_cxx::evas::canvas::font_cache_set(int size_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas_font_cache_set(size_));
}

inline void eo_cxx::evas::canvas::output_size_get(int* w_, int* h_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas_output_size_get(w_, h_));
}

inline void eo_cxx::evas::canvas::output_size_set(int w_, int h_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas_output_size_set(w_, h_));
}

inline void * eo_cxx::evas::canvas::data_attach_get() const
{
   void * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_canvas_data_attach_get());
   return _tmp_ret;
}

inline void eo_cxx::evas::canvas::data_attach_set(void * data_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas_data_attach_set(data_));
}

inline Evas_Font_Hinting_Flags eo_cxx::evas::canvas::font_hinting_get() const
{
   Evas_Font_Hinting_Flags _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_canvas_font_hinting_get());
   return _tmp_ret;
}

inline void eo_cxx::evas::canvas::font_hinting_set(Evas_Font_Hinting_Flags hinting_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas_font_hinting_set(hinting_));
}

inline Evas_Engine_Info * eo_cxx::evas::canvas::engine_info_get() const
{
   Evas_Engine_Info * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_canvas_engine_info_get());
   return _tmp_ret;
}

inline bool eo_cxx::evas::canvas::engine_info_set(Evas_Engine_Info * info_) const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_canvas_engine_info_set(info_));
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline ::evas::object eo_cxx::evas::canvas::focus_get() const
{
   Evas_Object * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_canvas_focus_get());
   return ::efl::eolian::to_cxx<::evas::object>(_tmp_ret, std::tuple<std::false_type>());
}

inline ::evas::object eo_cxx::evas::canvas::object_top_get() const
{
   Evas_Object * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_canvas_object_top_get());
   return ::efl::eolian::to_cxx<::evas::object>(_tmp_ret, std::tuple<std::false_type>());
}

inline const Evas_Lock * eo_cxx::evas::canvas::key_lock_get() const
{
   const Evas_Lock * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_canvas_key_lock_get());
   return _tmp_ret;
}

inline void eo_cxx::evas::canvas::pointer_canvas_xy_get(Evas_Coord* x_, Evas_Coord* y_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas_pointer_canvas_xy_get(x_, y_));
}

inline int eo_cxx::evas::canvas::event_down_count_get() const
{
   int _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_canvas_event_down_count_get());
   return _tmp_ret;
}

inline int eo_cxx::evas::canvas::smart_objects_calculate_count_get() const
{
   int _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_canvas_smart_objects_calculate_count_get());
   return _tmp_ret;
}

inline bool eo_cxx::evas::canvas::focus_state_get() const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_canvas_focus_state_get());
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline bool eo_cxx::evas::canvas::changed_get() const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_canvas_changed_get());
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline void eo_cxx::evas::canvas::pointer_output_xy_get(int* x_, int* y_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas_pointer_output_xy_get(x_, y_));
}

inline bool eo_cxx::evas::canvas::pointer_inside_get() const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_canvas_pointer_inside_get());
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline bool eo_cxx::evas::canvas::image_max_size_get(int* maxw_, int* maxh_) const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_canvas_image_max_size_get(maxw_, maxh_));
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline ::evas::object eo_cxx::evas::canvas::object_bottom_get() const
{
   Evas_Object * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_canvas_object_bottom_get());
   return ::efl::eolian::to_cxx<::evas::object>(_tmp_ret, std::tuple<std::false_type>());
}

inline const Evas_Modifier * eo_cxx::evas::canvas::key_modifier_get() const
{
   const Evas_Modifier * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_canvas_key_modifier_get());
   return _tmp_ret;
}

inline int eo_cxx::evas::canvas::pointer_button_down_mask_get() const
{
   int _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_canvas_pointer_button_down_mask_get());
   return _tmp_ret;
}

inline ::eo_cxx::evas::canvas::operator ::evas::canvas() const
{
   return *static_cast<::evas::canvas const*>(static_cast<void const*>(this));
}

inline ::eo_cxx::evas::canvas::operator ::evas::canvas&()
{
   return *static_cast<::evas::canvas*>(static_cast<void*>(this));
}

inline ::eo_cxx::evas::canvas::operator ::evas::canvas const&() const
{
   return *static_cast<::evas::canvas const*>(static_cast<void const*>(this));
}

template <typename T>
::efl::eina::range_list< ::evas::object > evas_canvas_tree_objects_at_xy_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Evas_Object * stop_, int x_, int y_)
{
   try
      {
         return static_cast<T*>(self->this_)->tree_objects_at_xy_get(::efl::eolian::to_cxx<::evas::object>(stop_, std::tuple<std::false_type>()), x_, y_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Eina_List * _tmp_ret{};
         return ::efl::eolian::to_cxx<::efl::eina::range_list< ::evas::object >>(_tmp_ret, std::tuple<std::false_type, std::false_type>());
      }
}

template <typename T>
void evas_canvas_event_feed_mouse_wheel_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, int direction_, int z_, unsigned int timestamp_, const void * data_)
{
   try
      {
         static_cast<T*>(self->this_)->event_feed_mouse_wheel(direction_, z_, timestamp_, data_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void evas_canvas_key_lock_on_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, const char * keyname_)
{
   try
      {
         static_cast<T*>(self->this_)->key_lock_on(::efl::eolian::to_cxx<::efl::eina::string_view>(keyname_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void evas_canvas_event_feed_key_down_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, const char * keyname_, const char * key_, const char * string_, const char * compose_, unsigned int timestamp_, const void * data_)
{
   try
      {
         static_cast<T*>(self->this_)->event_feed_key_down(::efl::eolian::to_cxx<::efl::eina::string_view>(keyname_, std::tuple<std::false_type>()), ::efl::eolian::to_cxx<::efl::eina::string_view>(key_, std::tuple<std::false_type>()), ::efl::eolian::to_cxx<::efl::eina::string_view>(string_, std::tuple<std::false_type>()), ::efl::eolian::to_cxx<::efl::eina::string_view>(compose_, std::tuple<std::false_type>()), timestamp_, data_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
Evas_Modifier_Mask evas_canvas_key_modifier_mask_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, const char * keyname_)
{
   try
      {
         return static_cast<T*>(self->this_)->key_modifier_mask_get(::efl::eolian::to_cxx<::efl::eina::string_view>(keyname_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Evas_Modifier_Mask _tmp_ret{};
         return _tmp_ret;
      }
}

template <typename T>
void evas_canvas_key_modifier_add_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, const char * keyname_)
{
   try
      {
         static_cast<T*>(self->this_)->key_modifier_add(::efl::eolian::to_cxx<::efl::eina::string_view>(keyname_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void evas_canvas_key_modifier_off_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, const char * keyname_)
{
   try
      {
         static_cast<T*>(self->this_)->key_modifier_off(::efl::eolian::to_cxx<::efl::eina::string_view>(keyname_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void evas_canvas_event_feed_hold_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, int hold_, unsigned int timestamp_, const void * data_)
{
   try
      {
         static_cast<T*>(self->this_)->event_feed_hold(hold_, timestamp_, data_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void evas_canvas_event_feed_mouse_move_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, int x_, int y_, unsigned int timestamp_, const void * data_)
{
   try
      {
         static_cast<T*>(self->this_)->event_feed_mouse_move(x_, y_, timestamp_, data_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void evas_canvas_event_feed_key_up_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, const char * keyname_, const char * key_, const char * string_, const char * compose_, unsigned int timestamp_, const void * data_)
{
   try
      {
         static_cast<T*>(self->this_)->event_feed_key_up(::efl::eolian::to_cxx<::efl::eina::string_view>(keyname_, std::tuple<std::false_type>()), ::efl::eolian::to_cxx<::efl::eina::string_view>(key_, std::tuple<std::false_type>()), ::efl::eolian::to_cxx<::efl::eina::string_view>(string_, std::tuple<std::false_type>()), ::efl::eolian::to_cxx<::efl::eina::string_view>(compose_, std::tuple<std::false_type>()), timestamp_, data_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void evas_canvas_event_feed_mouse_out_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, unsigned int timestamp_, const void * data_)
{
   try
      {
         static_cast<T*>(self->this_)->event_feed_mouse_out(timestamp_, data_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void evas_canvas_event_input_multi_move_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, int d_, int x_, int y_, double rad_, double radx_, double rady_, double pres_, double ang_, double fx_, double fy_, unsigned int timestamp_, const void * data_)
{
   try
      {
         static_cast<T*>(self->this_)->event_input_multi_move(d_, x_, y_, rad_, radx_, rady_, pres_, ang_, fx_, fy_, timestamp_, data_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
::efl::eina::range_list< ::evas::object > evas_canvas_objects_at_xy_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Evas_Coord x_, Evas_Coord y_, Eina_Bool include_pass_events_objects_, Eina_Bool include_hidden_objects_)
{
   try
      {
         return static_cast<T*>(self->this_)->objects_at_xy_get(x_, y_, ::efl::eolian::to_cxx<bool>(include_pass_events_objects_, std::tuple<std::false_type>()), ::efl::eolian::to_cxx<bool>(include_hidden_objects_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Eina_List * _tmp_ret{};
         return ::efl::eolian::to_cxx<::efl::eina::range_list< ::evas::object >>(_tmp_ret, std::tuple<std::false_type, std::false_type>());
      }
}

template <typename T>
void evas_canvas_event_input_multi_up_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, int d_, int x_, int y_, double rad_, double radx_, double rady_, double pres_, double ang_, double fx_, double fy_, Evas_Button_Flags flags_, unsigned int timestamp_, const void * data_)
{
   try
      {
         static_cast<T*>(self->this_)->event_input_multi_up(d_, x_, y_, rad_, radx_, rady_, pres_, ang_, fx_, fy_, flags_, timestamp_, data_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void evas_canvas_event_feed_multi_down_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, int d_, int x_, int y_, double rad_, double radx_, double rady_, double pres_, double ang_, double fx_, double fy_, Evas_Button_Flags flags_, unsigned int timestamp_, const void * data_)
{
   try
      {
         static_cast<T*>(self->this_)->event_feed_multi_down(d_, x_, y_, rad_, radx_, rady_, pres_, ang_, fx_, fy_, flags_, timestamp_, data_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
bool evas_canvas_render_async_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->render_async();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Eina_Bool _tmp_ret{};
         return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }
}

template <typename T>
bool evas_canvas_render2_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->render2();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Eina_Bool _tmp_ret{};
         return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }
}

template <typename T>
::efl::eina::list< Eina_Rectangle * > evas_canvas_render2_updates_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->render2_updates();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Eina_List * _tmp_ret{};
         return ::efl::eolian::to_cxx<::efl::eina::list< Eina_Rectangle * >>(_tmp_ret, std::tuple<std::true_type, std::false_type>());
      }
}

template <typename T>
void evas_canvas_focus_out_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         static_cast<T*>(self->this_)->focus_out();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void evas_canvas_event_input_mouse_move_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, int x_, int y_, unsigned int timestamp_, const void * data_)
{
   try
      {
         static_cast<T*>(self->this_)->event_input_mouse_move(x_, y_, timestamp_, data_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void evas_canvas_norender_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         static_cast<T*>(self->this_)->norender();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
unsigned int evas_canvas_touch_point_list_count_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->touch_point_list_count();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         unsigned int _tmp_ret{};
         return _tmp_ret;
      }
}

template <typename T>
void evas_canvas_event_input_multi_down_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, int d_, int x_, int y_, double rad_, double radx_, double rady_, double pres_, double ang_, double fx_, double fy_, Evas_Button_Flags flags_, unsigned int timestamp_, const void * data_)
{
   try
      {
         static_cast<T*>(self->this_)->event_input_multi_down(d_, x_, y_, rad_, radx_, rady_, pres_, ang_, fx_, fy_, flags_, timestamp_, data_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void evas_canvas_nochange_pop_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         static_cast<T*>(self->this_)->nochange_pop();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void evas_canvas_key_lock_off_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, const char * keyname_)
{
   try
      {
         static_cast<T*>(self->this_)->key_lock_off(::efl::eolian::to_cxx<::efl::eina::string_view>(keyname_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void evas_canvas_nochange_push_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         static_cast<T*>(self->this_)->nochange_push();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void evas_canvas_font_cache_flush_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         static_cast<T*>(self->this_)->font_cache_flush();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
bool evas_canvas_font_hinting_can_hint_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Evas_Font_Hinting_Flags hinting_)
{
   try
      {
         return static_cast<T*>(self->this_)->font_hinting_can_hint(hinting_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Eina_Bool _tmp_ret{};
         return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }
}

template <typename T>
::evas::object evas_canvas_object_top_at_xy_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Evas_Coord x_, Evas_Coord y_, Eina_Bool include_pass_events_objects_, Eina_Bool include_hidden_objects_)
{
   try
      {
         return static_cast<T*>(self->this_)->object_top_at_xy_get(x_, y_, ::efl::eolian::to_cxx<bool>(include_pass_events_objects_, std::tuple<std::false_type>()), ::efl::eolian::to_cxx<bool>(include_hidden_objects_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Evas_Object * _tmp_ret{};
         return ::efl::eolian::to_cxx<::evas::object>(_tmp_ret, std::tuple<std::false_type>());
      }
}

template <typename T>
void evas_canvas_key_modifier_on_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, const char * keyname_)
{
   try
      {
         static_cast<T*>(self->this_)->key_modifier_on(::efl::eolian::to_cxx<::efl::eina::string_view>(keyname_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void evas_canvas_event_feed_mouse_up_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, int b_, Evas_Button_Flags flags_, unsigned int timestamp_, const void * data_)
{
   try
      {
         static_cast<T*>(self->this_)->event_feed_mouse_up(b_, flags_, timestamp_, data_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void evas_canvas_event_feed_mouse_down_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, int b_, Evas_Button_Flags flags_, unsigned int timestamp_, const void * data_)
{
   try
      {
         static_cast<T*>(self->this_)->event_feed_mouse_down(b_, flags_, timestamp_, data_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void evas_canvas_event_refeed_event_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, void * event_copy_, Evas_Callback_Type event_type_)
{
   try
      {
         static_cast<T*>(self->this_)->event_refeed_event(event_copy_, event_type_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
::efl::eina::range_list< ::efl::eina::string_view > evas_canvas_font_available_list_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->font_available_list();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Eina_List * _tmp_ret{};
         return ::efl::eolian::to_cxx<::efl::eina::range_list< ::efl::eina::string_view >>(_tmp_ret, std::tuple<std::false_type, std::false_type>());
      }
}

template <typename T>
::efl::eina::range_list< ::evas::object > evas_canvas_objects_in_rectangle_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Evas_Coord x_, Evas_Coord y_, Evas_Coord w_, Evas_Coord h_, Eina_Bool include_pass_events_objects_, Eina_Bool include_hidden_objects_)
{
   try
      {
         return static_cast<T*>(self->this_)->objects_in_rectangle_get(x_, y_, w_, h_, ::efl::eolian::to_cxx<bool>(include_pass_events_objects_, std::tuple<std::false_type>()), ::efl::eolian::to_cxx<bool>(include_hidden_objects_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Eina_List * _tmp_ret{};
         return ::efl::eolian::to_cxx<::efl::eina::range_list< ::evas::object >>(_tmp_ret, std::tuple<std::false_type, std::false_type>());
      }
}

template <typename T>
::evas::object evas_canvas_object_name_find_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, const char * name_)
{
   try
      {
         return static_cast<T*>(self->this_)->object_name_find(::efl::eolian::to_cxx<::efl::eina::string_view>(name_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Evas_Object * _tmp_ret{};
         return ::efl::eolian::to_cxx<::evas::object>(_tmp_ret, std::tuple<std::false_type>());
      }
}

template <typename T>
void evas_canvas_font_path_append_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, const char * path_)
{
   try
      {
         static_cast<T*>(self->this_)->font_path_append(::efl::eolian::to_cxx<::efl::eina::string_view>(path_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
int evas_canvas_touch_point_list_nth_id_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, unsigned int n_)
{
   try
      {
         return static_cast<T*>(self->this_)->touch_point_list_nth_id_get(n_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         int _tmp_ret{};
         return _tmp_ret;
      }
}

template <typename T>
void evas_canvas_font_path_clear_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         static_cast<T*>(self->this_)->font_path_clear();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void evas_canvas_smart_objects_calculate_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         static_cast<T*>(self->this_)->smart_objects_calculate();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void evas_canvas_touch_point_list_nth_xy_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, unsigned int n_, Evas_Coord* x_, Evas_Coord* y_)
{
   try
      {
         static_cast<T*>(self->this_)->touch_point_list_nth_xy_get(n_, x_, y_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void evas_canvas_key_lock_del_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, const char * keyname_)
{
   try
      {
         static_cast<T*>(self->this_)->key_lock_del(::efl::eolian::to_cxx<::efl::eina::string_view>(keyname_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void evas_canvas_damage_rectangle_add_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, int x_, int y_, int w_, int h_)
{
   try
      {
         static_cast<T*>(self->this_)->damage_rectangle_add(x_, y_, w_, h_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void evas_canvas_sync_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         static_cast<T*>(self->this_)->sync();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
::efl::eina::crange_list< ::efl::eina::string_view > evas_canvas_font_path_list_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->font_path_list();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         const Eina_List * _tmp_ret{};
         return ::efl::eolian::to_cxx<::efl::eina::crange_list< ::efl::eina::string_view >>(_tmp_ret, std::tuple<std::false_type, std::false_type>());
      }
}

template <typename T>
void evas_canvas_image_cache_reload_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         static_cast<T*>(self->this_)->image_cache_reload();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
int evas_canvas_coord_world_x_to_screen_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Evas_Coord x_)
{
   try
      {
         return static_cast<T*>(self->this_)->coord_world_x_to_screen(x_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         int _tmp_ret{};
         return _tmp_ret;
      }
}

template <typename T>
void evas_canvas_event_feed_multi_move_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, int d_, int x_, int y_, double rad_, double radx_, double rady_, double pres_, double ang_, double fx_, double fy_, unsigned int timestamp_, const void * data_)
{
   try
      {
         static_cast<T*>(self->this_)->event_feed_multi_move(d_, x_, y_, rad_, radx_, rady_, pres_, ang_, fx_, fy_, timestamp_, data_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
::efl::eina::list< Eina_Rectangle * > evas_canvas_render_updates_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->render_updates();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Eina_List * _tmp_ret{};
         return ::efl::eolian::to_cxx<::efl::eina::list< Eina_Rectangle * >>(_tmp_ret, std::tuple<std::true_type, std::false_type>());
      }
}

template <typename T>
void evas_canvas_image_cache_flush_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         static_cast<T*>(self->this_)->image_cache_flush();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
Evas_Coord evas_canvas_coord_screen_y_to_world_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, int y_)
{
   try
      {
         return static_cast<T*>(self->this_)->coord_screen_y_to_world(y_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Evas_Coord _tmp_ret{};
         return _tmp_ret;
      }
}

template <typename T>
void evas_canvas_key_modifier_del_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, const char * keyname_)
{
   try
      {
         static_cast<T*>(self->this_)->key_modifier_del(::efl::eolian::to_cxx<::efl::eina::string_view>(keyname_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
Evas_Touch_Point_State evas_canvas_touch_point_list_nth_state_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, unsigned int n_)
{
   try
      {
         return static_cast<T*>(self->this_)->touch_point_list_nth_state_get(n_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Evas_Touch_Point_State _tmp_ret{};
         return _tmp_ret;
      }
}

template <typename T>
void evas_canvas_focus_in_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         static_cast<T*>(self->this_)->focus_in();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void evas_canvas_obscured_rectangle_add_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, int x_, int y_, int w_, int h_)
{
   try
      {
         static_cast<T*>(self->this_)->obscured_rectangle_add(x_, y_, w_, h_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void evas_canvas_render_dump_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         static_cast<T*>(self->this_)->render_dump();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void evas_canvas_event_feed_mouse_in_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, unsigned int timestamp_, const void * data_)
{
   try
      {
         static_cast<T*>(self->this_)->event_feed_mouse_in(timestamp_, data_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
::evas::object evas_canvas_object_top_in_rectangle_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Evas_Coord x_, Evas_Coord y_, Evas_Coord w_, Evas_Coord h_, Eina_Bool include_pass_events_objects_, Eina_Bool include_hidden_objects_)
{
   try
      {
         return static_cast<T*>(self->this_)->object_top_in_rectangle_get(x_, y_, w_, h_, ::efl::eolian::to_cxx<bool>(include_pass_events_objects_, std::tuple<std::false_type>()), ::efl::eolian::to_cxx<bool>(include_hidden_objects_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Evas_Object * _tmp_ret{};
         return ::efl::eolian::to_cxx<::evas::object>(_tmp_ret, std::tuple<std::false_type>());
      }
}

template <typename T>
void evas_canvas_render_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         static_cast<T*>(self->this_)->render();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void evas_canvas_event_feed_multi_up_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, int d_, int x_, int y_, double rad_, double radx_, double rady_, double pres_, double ang_, double fx_, double fy_, Evas_Button_Flags flags_, unsigned int timestamp_, const void * data_)
{
   try
      {
         static_cast<T*>(self->this_)->event_feed_multi_up(d_, x_, y_, rad_, radx_, rady_, pres_, ang_, fx_, fy_, flags_, timestamp_, data_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void evas_canvas_font_path_prepend_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, const char * path_)
{
   try
      {
         static_cast<T*>(self->this_)->font_path_prepend(::efl::eolian::to_cxx<::efl::eina::string_view>(path_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void evas_canvas_obscured_clear_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         static_cast<T*>(self->this_)->obscured_clear();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void evas_canvas_event_feed_mouse_cancel_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, unsigned int timestamp_, const void * data_)
{
   try
      {
         static_cast<T*>(self->this_)->event_feed_mouse_cancel(timestamp_, data_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
Evas_Coord evas_canvas_coord_screen_x_to_world_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, int x_)
{
   try
      {
         return static_cast<T*>(self->this_)->coord_screen_x_to_world(x_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Evas_Coord _tmp_ret{};
         return _tmp_ret;
      }
}

template <typename T>
void evas_canvas_key_lock_add_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, const char * keyname_)
{
   try
      {
         static_cast<T*>(self->this_)->key_lock_add(::efl::eolian::to_cxx<::efl::eina::string_view>(keyname_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void evas_canvas_render_idle_flush_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         static_cast<T*>(self->this_)->render_idle_flush();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
int evas_canvas_coord_world_y_to_screen_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Evas_Coord y_)
{
   try
      {
         return static_cast<T*>(self->this_)->coord_world_y_to_screen(y_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         int _tmp_ret{};
         return _tmp_ret;
      }
}

template <typename T>
void evas_canvas_event_feed_key_down_with_keycode_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, const char * keyname_, const char * key_, const char * string_, const char * compose_, unsigned int timestamp_, const void * data_, unsigned int keycode_)
{
   try
      {
         static_cast<T*>(self->this_)->event_feed_key_down_with_keycode(::efl::eolian::to_cxx<::efl::eina::string_view>(keyname_, std::tuple<std::false_type>()), ::efl::eolian::to_cxx<::efl::eina::string_view>(key_, std::tuple<std::false_type>()), ::efl::eolian::to_cxx<::efl::eina::string_view>(string_, std::tuple<std::false_type>()), ::efl::eolian::to_cxx<::efl::eina::string_view>(compose_, std::tuple<std::false_type>()), timestamp_, data_, keycode_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void evas_canvas_event_feed_key_up_with_keycode_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, const char * keyname_, const char * key_, const char * string_, const char * compose_, unsigned int timestamp_, const void * data_, unsigned int keycode_)
{
   try
      {
         static_cast<T*>(self->this_)->event_feed_key_up_with_keycode(::efl::eolian::to_cxx<::efl::eina::string_view>(keyname_, std::tuple<std::false_type>()), ::efl::eolian::to_cxx<::efl::eina::string_view>(key_, std::tuple<std::false_type>()), ::efl::eolian::to_cxx<::efl::eina::string_view>(string_, std::tuple<std::false_type>()), ::efl::eolian::to_cxx<::efl::eina::string_view>(compose_, std::tuple<std::false_type>()), timestamp_, data_, keycode_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void evas_canvas_event_feed_axis_update_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, unsigned int timestamp_, int device_, int toolid_, int naxes_, const Evas_Axis * axis_, const void * data_)
{
   try
      {
         static_cast<T*>(self->this_)->event_feed_axis_update(timestamp_, device_, toolid_, naxes_, axis_, data_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void evas_canvas_output_framespace_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Evas_Coord* x_, Evas_Coord* y_, Evas_Coord* w_, Evas_Coord* h_)
{
   try
      {
         static_cast<T*>(self->this_)->output_framespace_get(x_, y_, w_, h_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void evas_canvas_output_framespace_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Evas_Coord x_, Evas_Coord y_, Evas_Coord w_, Evas_Coord h_)
{
   try
      {
         static_cast<T*>(self->this_)->output_framespace_set(x_, y_, w_, h_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void evas_canvas_output_viewport_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Evas_Coord* x_, Evas_Coord* y_, Evas_Coord* w_, Evas_Coord* h_)
{
   try
      {
         static_cast<T*>(self->this_)->output_viewport_get(x_, y_, w_, h_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void evas_canvas_output_viewport_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Evas_Coord x_, Evas_Coord y_, Evas_Coord w_, Evas_Coord h_)
{
   try
      {
         static_cast<T*>(self->this_)->output_viewport_set(x_, y_, w_, h_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
int evas_canvas_image_cache_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->image_cache_get();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         int _tmp_ret{};
         return _tmp_ret;
      }
}

template <typename T>
void evas_canvas_image_cache_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, int size_)
{
   try
      {
         static_cast<T*>(self->this_)->image_cache_set(size_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
Evas_Event_Flags evas_canvas_event_default_flags_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->event_default_flags_get();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Evas_Event_Flags _tmp_ret{};
         return _tmp_ret;
      }
}

template <typename T>
void evas_canvas_event_default_flags_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Evas_Event_Flags flags_)
{
   try
      {
         static_cast<T*>(self->this_)->event_default_flags_set(flags_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
int evas_canvas_output_method_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->output_method_get();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         int _tmp_ret{};
         return _tmp_ret;
      }
}

template <typename T>
void evas_canvas_output_method_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, int render_method_)
{
   try
      {
         static_cast<T*>(self->this_)->output_method_set(render_method_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
int evas_canvas_font_cache_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->font_cache_get();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         int _tmp_ret{};
         return _tmp_ret;
      }
}

template <typename T>
void evas_canvas_font_cache_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, int size_)
{
   try
      {
         static_cast<T*>(self->this_)->font_cache_set(size_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void evas_canvas_output_size_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, int* w_, int* h_)
{
   try
      {
         static_cast<T*>(self->this_)->output_size_get(w_, h_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void evas_canvas_output_size_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, int w_, int h_)
{
   try
      {
         static_cast<T*>(self->this_)->output_size_set(w_, h_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void * evas_canvas_data_attach_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->data_attach_get();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         void * _tmp_ret{};
         return _tmp_ret;
      }
}

template <typename T>
void evas_canvas_data_attach_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, void * data_)
{
   try
      {
         static_cast<T*>(self->this_)->data_attach_set(data_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
Evas_Font_Hinting_Flags evas_canvas_font_hinting_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->font_hinting_get();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Evas_Font_Hinting_Flags _tmp_ret{};
         return _tmp_ret;
      }
}

template <typename T>
void evas_canvas_font_hinting_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Evas_Font_Hinting_Flags hinting_)
{
   try
      {
         static_cast<T*>(self->this_)->font_hinting_set(hinting_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
Evas_Engine_Info * evas_canvas_engine_info_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->engine_info_get();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Evas_Engine_Info * _tmp_ret{};
         return _tmp_ret;
      }
}

template <typename T>
bool evas_canvas_engine_info_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Evas_Engine_Info * info_)
{
   try
      {
         return static_cast<T*>(self->this_)->engine_info_set(info_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Eina_Bool _tmp_ret{};
         return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }
}

template <typename T>
::evas::object evas_canvas_focus_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->focus_get();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Evas_Object * _tmp_ret{};
         return ::efl::eolian::to_cxx<::evas::object>(_tmp_ret, std::tuple<std::false_type>());
      }
}

template <typename T>
::evas::object evas_canvas_object_top_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->object_top_get();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Evas_Object * _tmp_ret{};
         return ::efl::eolian::to_cxx<::evas::object>(_tmp_ret, std::tuple<std::false_type>());
      }
}

template <typename T>
const Evas_Lock * evas_canvas_key_lock_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->key_lock_get();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         const Evas_Lock * _tmp_ret{};
         return _tmp_ret;
      }
}

template <typename T>
void evas_canvas_pointer_canvas_xy_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Evas_Coord* x_, Evas_Coord* y_)
{
   try
      {
         static_cast<T*>(self->this_)->pointer_canvas_xy_get(x_, y_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
int evas_canvas_event_down_count_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->event_down_count_get();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         int _tmp_ret{};
         return _tmp_ret;
      }
}

template <typename T>
int evas_canvas_smart_objects_calculate_count_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->smart_objects_calculate_count_get();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         int _tmp_ret{};
         return _tmp_ret;
      }
}

template <typename T>
bool evas_canvas_focus_state_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->focus_state_get();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Eina_Bool _tmp_ret{};
         return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }
}

template <typename T>
bool evas_canvas_changed_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->changed_get();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Eina_Bool _tmp_ret{};
         return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }
}

template <typename T>
void evas_canvas_pointer_output_xy_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, int* x_, int* y_)
{
   try
      {
         static_cast<T*>(self->this_)->pointer_output_xy_get(x_, y_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
bool evas_canvas_pointer_inside_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->pointer_inside_get();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Eina_Bool _tmp_ret{};
         return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }
}

template <typename T>
bool evas_canvas_image_max_size_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, int* maxw_, int* maxh_)
{
   try
      {
         return static_cast<T*>(self->this_)->image_max_size_get(maxw_, maxh_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Eina_Bool _tmp_ret{};
         return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }
}

template <typename T>
::evas::object evas_canvas_object_bottom_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->object_bottom_get();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Evas_Object * _tmp_ret{};
         return ::efl::eolian::to_cxx<::evas::object>(_tmp_ret, std::tuple<std::false_type>());
      }
}

template <typename T>
const Evas_Modifier * evas_canvas_key_modifier_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->key_modifier_get();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         const Evas_Modifier * _tmp_ret{};
         return _tmp_ret;
      }
}

template <typename T>
int evas_canvas_pointer_button_down_mask_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->pointer_button_down_mask_get();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         int _tmp_ret{};
         return _tmp_ret;
      }
}

namespace efl { namespace eo { namespace detail {

template<>
struct operations< ::evas::canvas >
{
   template <typename T>
   struct type
         : virtual operations< ::eo::base >::template type<T>
         , virtual operations< ::evas::common_interface >::template type<T>
   {
      virtual ::efl::eina::range_list< ::evas::object > tree_objects_at_xy_get(::evas::object stop_, int x_, int y_)
      {
         Eina_List * _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_canvas_tree_objects_at_xy_get(::efl::eolian::to_c(stop_), x_, y_));
            return ::efl::eolian::to_cxx<::efl::eina::range_list< ::evas::object >>(_tmp_ret, std::tuple<std::false_type, std::false_type>());
      }

      virtual void event_feed_mouse_wheel(int direction_, int z_, unsigned int timestamp_, const void * data_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_canvas_event_feed_mouse_wheel(direction_, z_, timestamp_, data_));
      }

      virtual void key_lock_on(::efl::eina::string_view keyname_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_canvas_key_lock_on(::efl::eolian::to_c(keyname_)));
      }

      virtual void event_feed_key_down(::efl::eina::string_view keyname_, ::efl::eina::string_view key_, ::efl::eina::string_view string_, ::efl::eina::string_view compose_, unsigned int timestamp_, const void * data_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_canvas_event_feed_key_down(::efl::eolian::to_c(keyname_), ::efl::eolian::to_c(key_), ::efl::eolian::to_c(string_), ::efl::eolian::to_c(compose_), timestamp_, data_));
      }

      virtual Evas_Modifier_Mask key_modifier_mask_get(::efl::eina::string_view keyname_)
      {
         Evas_Modifier_Mask _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_canvas_key_modifier_mask_get(::efl::eolian::to_c(keyname_)));
            return _tmp_ret;
      }

      virtual void key_modifier_add(::efl::eina::string_view keyname_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_canvas_key_modifier_add(::efl::eolian::to_c(keyname_)));
      }

      virtual void key_modifier_off(::efl::eina::string_view keyname_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_canvas_key_modifier_off(::efl::eolian::to_c(keyname_)));
      }

      virtual void event_feed_hold(int hold_, unsigned int timestamp_, const void * data_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_canvas_event_feed_hold(hold_, timestamp_, data_));
      }

      virtual void event_feed_mouse_move(int x_, int y_, unsigned int timestamp_, const void * data_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_canvas_event_feed_mouse_move(x_, y_, timestamp_, data_));
      }

      virtual void event_feed_key_up(::efl::eina::string_view keyname_, ::efl::eina::string_view key_, ::efl::eina::string_view string_, ::efl::eina::string_view compose_, unsigned int timestamp_, const void * data_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_canvas_event_feed_key_up(::efl::eolian::to_c(keyname_), ::efl::eolian::to_c(key_), ::efl::eolian::to_c(string_), ::efl::eolian::to_c(compose_), timestamp_, data_));
      }

      virtual void event_feed_mouse_out(unsigned int timestamp_, const void * data_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_canvas_event_feed_mouse_out(timestamp_, data_));
      }

      virtual void event_input_multi_move(int d_, int x_, int y_, double rad_, double radx_, double rady_, double pres_, double ang_, double fx_, double fy_, unsigned int timestamp_, const void * data_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_canvas_event_input_multi_move(d_, x_, y_, rad_, radx_, rady_, pres_, ang_, fx_, fy_, timestamp_, data_));
      }

      virtual ::efl::eina::range_list< ::evas::object > objects_at_xy_get(Evas_Coord x_, Evas_Coord y_, bool include_pass_events_objects_, bool include_hidden_objects_)
      {
         Eina_List * _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_canvas_objects_at_xy_get(x_, y_, ::efl::eolian::to_c(include_pass_events_objects_), ::efl::eolian::to_c(include_hidden_objects_)));
            return ::efl::eolian::to_cxx<::efl::eina::range_list< ::evas::object >>(_tmp_ret, std::tuple<std::false_type, std::false_type>());
      }

      virtual void event_input_multi_up(int d_, int x_, int y_, double rad_, double radx_, double rady_, double pres_, double ang_, double fx_, double fy_, Evas_Button_Flags flags_, unsigned int timestamp_, const void * data_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_canvas_event_input_multi_up(d_, x_, y_, rad_, radx_, rady_, pres_, ang_, fx_, fy_, flags_, timestamp_, data_));
      }

      virtual void event_feed_multi_down(int d_, int x_, int y_, double rad_, double radx_, double rady_, double pres_, double ang_, double fx_, double fy_, Evas_Button_Flags flags_, unsigned int timestamp_, const void * data_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_canvas_event_feed_multi_down(d_, x_, y_, rad_, radx_, rady_, pres_, ang_, fx_, fy_, flags_, timestamp_, data_));
      }

      virtual bool render_async()
      {
         Eina_Bool _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_canvas_render_async());
            return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }

      virtual bool render2()
      {
         Eina_Bool _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_canvas_render2());
            return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }

      virtual ::efl::eina::list< Eina_Rectangle * > render2_updates()
      {
         Eina_List * _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_canvas_render2_updates());
            return ::efl::eolian::to_cxx<::efl::eina::list< Eina_Rectangle * >>(_tmp_ret, std::tuple<std::true_type, std::false_type>());
      }

      virtual void focus_out()
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_canvas_focus_out());
      }

      virtual void event_input_mouse_move(int x_, int y_, unsigned int timestamp_, const void * data_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_canvas_event_input_mouse_move(x_, y_, timestamp_, data_));
      }

      virtual void norender()
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_canvas_norender());
      }

      virtual unsigned int touch_point_list_count()
      {
         unsigned int _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_canvas_touch_point_list_count());
            return _tmp_ret;
      }

      virtual void event_input_multi_down(int d_, int x_, int y_, double rad_, double radx_, double rady_, double pres_, double ang_, double fx_, double fy_, Evas_Button_Flags flags_, unsigned int timestamp_, const void * data_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_canvas_event_input_multi_down(d_, x_, y_, rad_, radx_, rady_, pres_, ang_, fx_, fy_, flags_, timestamp_, data_));
      }

      virtual void nochange_pop()
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_canvas_nochange_pop());
      }

      virtual void key_lock_off(::efl::eina::string_view keyname_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_canvas_key_lock_off(::efl::eolian::to_c(keyname_)));
      }

      virtual void nochange_push()
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_canvas_nochange_push());
      }

      virtual void font_cache_flush()
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_canvas_font_cache_flush());
      }

      virtual bool font_hinting_can_hint(Evas_Font_Hinting_Flags hinting_)
      {
         Eina_Bool _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_canvas_font_hinting_can_hint(hinting_));
            return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }

      virtual ::evas::object object_top_at_xy_get(Evas_Coord x_, Evas_Coord y_, bool include_pass_events_objects_, bool include_hidden_objects_)
      {
         Evas_Object * _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_canvas_object_top_at_xy_get(x_, y_, ::efl::eolian::to_c(include_pass_events_objects_), ::efl::eolian::to_c(include_hidden_objects_)));
            return ::efl::eolian::to_cxx<::evas::object>(_tmp_ret, std::tuple<std::false_type>());
      }

      virtual void key_modifier_on(::efl::eina::string_view keyname_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_canvas_key_modifier_on(::efl::eolian::to_c(keyname_)));
      }

      virtual void event_feed_mouse_up(int b_, Evas_Button_Flags flags_, unsigned int timestamp_, const void * data_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_canvas_event_feed_mouse_up(b_, flags_, timestamp_, data_));
      }

      virtual void event_feed_mouse_down(int b_, Evas_Button_Flags flags_, unsigned int timestamp_, const void * data_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_canvas_event_feed_mouse_down(b_, flags_, timestamp_, data_));
      }

      virtual void event_refeed_event(void * event_copy_, Evas_Callback_Type event_type_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_canvas_event_refeed_event(event_copy_, event_type_));
      }

      virtual ::efl::eina::range_list< ::efl::eina::string_view > font_available_list()
      {
         Eina_List * _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_canvas_font_available_list());
            return ::efl::eolian::to_cxx<::efl::eina::range_list< ::efl::eina::string_view >>(_tmp_ret, std::tuple<std::false_type, std::false_type>());
      }

      virtual ::efl::eina::range_list< ::evas::object > objects_in_rectangle_get(Evas_Coord x_, Evas_Coord y_, Evas_Coord w_, Evas_Coord h_, bool include_pass_events_objects_, bool include_hidden_objects_)
      {
         Eina_List * _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_canvas_objects_in_rectangle_get(x_, y_, w_, h_, ::efl::eolian::to_c(include_pass_events_objects_), ::efl::eolian::to_c(include_hidden_objects_)));
            return ::efl::eolian::to_cxx<::efl::eina::range_list< ::evas::object >>(_tmp_ret, std::tuple<std::false_type, std::false_type>());
      }

      virtual ::evas::object object_name_find(::efl::eina::string_view name_)
      {
         Evas_Object * _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_canvas_object_name_find(::efl::eolian::to_c(name_)));
            return ::efl::eolian::to_cxx<::evas::object>(_tmp_ret, std::tuple<std::false_type>());
      }

      virtual void font_path_append(::efl::eina::string_view path_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_canvas_font_path_append(::efl::eolian::to_c(path_)));
      }

      virtual int touch_point_list_nth_id_get(unsigned int n_)
      {
         int _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_canvas_touch_point_list_nth_id_get(n_));
            return _tmp_ret;
      }

      virtual void font_path_clear()
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_canvas_font_path_clear());
      }

      virtual void smart_objects_calculate()
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_canvas_smart_objects_calculate());
      }

      virtual void touch_point_list_nth_xy_get(unsigned int n_, Evas_Coord* x_, Evas_Coord* y_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_canvas_touch_point_list_nth_xy_get(n_, x_, y_));
      }

      virtual void key_lock_del(::efl::eina::string_view keyname_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_canvas_key_lock_del(::efl::eolian::to_c(keyname_)));
      }

      virtual void damage_rectangle_add(int x_, int y_, int w_, int h_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_canvas_damage_rectangle_add(x_, y_, w_, h_));
      }

      virtual void sync()
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_canvas_sync());
      }

      virtual ::efl::eina::crange_list< ::efl::eina::string_view > font_path_list()
      {
         const Eina_List * _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_canvas_font_path_list());
            return ::efl::eolian::to_cxx<::efl::eina::crange_list< ::efl::eina::string_view >>(_tmp_ret, std::tuple<std::false_type, std::false_type>());
      }

      virtual void image_cache_reload()
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_canvas_image_cache_reload());
      }

      virtual int coord_world_x_to_screen(Evas_Coord x_)
      {
         int _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_canvas_coord_world_x_to_screen(x_));
            return _tmp_ret;
      }

      virtual void event_feed_multi_move(int d_, int x_, int y_, double rad_, double radx_, double rady_, double pres_, double ang_, double fx_, double fy_, unsigned int timestamp_, const void * data_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_canvas_event_feed_multi_move(d_, x_, y_, rad_, radx_, rady_, pres_, ang_, fx_, fy_, timestamp_, data_));
      }

      virtual ::efl::eina::list< Eina_Rectangle * > render_updates()
      {
         Eina_List * _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_canvas_render_updates());
            return ::efl::eolian::to_cxx<::efl::eina::list< Eina_Rectangle * >>(_tmp_ret, std::tuple<std::true_type, std::false_type>());
      }

      virtual void image_cache_flush()
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_canvas_image_cache_flush());
      }

      virtual Evas_Coord coord_screen_y_to_world(int y_)
      {
         Evas_Coord _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_canvas_coord_screen_y_to_world(y_));
            return _tmp_ret;
      }

      virtual void key_modifier_del(::efl::eina::string_view keyname_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_canvas_key_modifier_del(::efl::eolian::to_c(keyname_)));
      }

      virtual Evas_Touch_Point_State touch_point_list_nth_state_get(unsigned int n_)
      {
         Evas_Touch_Point_State _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_canvas_touch_point_list_nth_state_get(n_));
            return _tmp_ret;
      }

      virtual void focus_in()
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_canvas_focus_in());
      }

      virtual void obscured_rectangle_add(int x_, int y_, int w_, int h_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_canvas_obscured_rectangle_add(x_, y_, w_, h_));
      }

      virtual void render_dump()
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_canvas_render_dump());
      }

      virtual void event_feed_mouse_in(unsigned int timestamp_, const void * data_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_canvas_event_feed_mouse_in(timestamp_, data_));
      }

      virtual ::evas::object object_top_in_rectangle_get(Evas_Coord x_, Evas_Coord y_, Evas_Coord w_, Evas_Coord h_, bool include_pass_events_objects_, bool include_hidden_objects_)
      {
         Evas_Object * _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_canvas_object_top_in_rectangle_get(x_, y_, w_, h_, ::efl::eolian::to_c(include_pass_events_objects_), ::efl::eolian::to_c(include_hidden_objects_)));
            return ::efl::eolian::to_cxx<::evas::object>(_tmp_ret, std::tuple<std::false_type>());
      }

      virtual void render()
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_canvas_render());
      }

      virtual void event_feed_multi_up(int d_, int x_, int y_, double rad_, double radx_, double rady_, double pres_, double ang_, double fx_, double fy_, Evas_Button_Flags flags_, unsigned int timestamp_, const void * data_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_canvas_event_feed_multi_up(d_, x_, y_, rad_, radx_, rady_, pres_, ang_, fx_, fy_, flags_, timestamp_, data_));
      }

      virtual void font_path_prepend(::efl::eina::string_view path_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_canvas_font_path_prepend(::efl::eolian::to_c(path_)));
      }

      virtual void obscured_clear()
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_canvas_obscured_clear());
      }

      virtual void event_feed_mouse_cancel(unsigned int timestamp_, const void * data_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_canvas_event_feed_mouse_cancel(timestamp_, data_));
      }

      virtual Evas_Coord coord_screen_x_to_world(int x_)
      {
         Evas_Coord _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_canvas_coord_screen_x_to_world(x_));
            return _tmp_ret;
      }

      virtual void key_lock_add(::efl::eina::string_view keyname_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_canvas_key_lock_add(::efl::eolian::to_c(keyname_)));
      }

      virtual void render_idle_flush()
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_canvas_render_idle_flush());
      }

      virtual int coord_world_y_to_screen(Evas_Coord y_)
      {
         int _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_canvas_coord_world_y_to_screen(y_));
            return _tmp_ret;
      }

      virtual void event_feed_key_down_with_keycode(::efl::eina::string_view keyname_, ::efl::eina::string_view key_, ::efl::eina::string_view string_, ::efl::eina::string_view compose_, unsigned int timestamp_, const void * data_, unsigned int keycode_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_canvas_event_feed_key_down_with_keycode(::efl::eolian::to_c(keyname_), ::efl::eolian::to_c(key_), ::efl::eolian::to_c(string_), ::efl::eolian::to_c(compose_), timestamp_, data_, keycode_));
      }

      virtual void event_feed_key_up_with_keycode(::efl::eina::string_view keyname_, ::efl::eina::string_view key_, ::efl::eina::string_view string_, ::efl::eina::string_view compose_, unsigned int timestamp_, const void * data_, unsigned int keycode_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_canvas_event_feed_key_up_with_keycode(::efl::eolian::to_c(keyname_), ::efl::eolian::to_c(key_), ::efl::eolian::to_c(string_), ::efl::eolian::to_c(compose_), timestamp_, data_, keycode_));
      }

      virtual void event_feed_axis_update(unsigned int timestamp_, int device_, int toolid_, int naxes_, const Evas_Axis * axis_, const void * data_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_canvas_event_feed_axis_update(timestamp_, device_, toolid_, naxes_, axis_, data_));
      }

      virtual void output_framespace_get(Evas_Coord* x_, Evas_Coord* y_, Evas_Coord* w_, Evas_Coord* h_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_canvas_output_framespace_get(x_, y_, w_, h_));
      }

      virtual void output_framespace_set(Evas_Coord x_, Evas_Coord y_, Evas_Coord w_, Evas_Coord h_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_canvas_output_framespace_set(x_, y_, w_, h_));
      }

      virtual void output_viewport_get(Evas_Coord* x_, Evas_Coord* y_, Evas_Coord* w_, Evas_Coord* h_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_canvas_output_viewport_get(x_, y_, w_, h_));
      }

      virtual void output_viewport_set(Evas_Coord x_, Evas_Coord y_, Evas_Coord w_, Evas_Coord h_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_canvas_output_viewport_set(x_, y_, w_, h_));
      }

      virtual int image_cache_get()
      {
         int _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_canvas_image_cache_get());
            return _tmp_ret;
      }

      virtual void image_cache_set(int size_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_canvas_image_cache_set(size_));
      }

      virtual Evas_Event_Flags event_default_flags_get()
      {
         Evas_Event_Flags _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_canvas_event_default_flags_get());
            return _tmp_ret;
      }

      virtual void event_default_flags_set(Evas_Event_Flags flags_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_canvas_event_default_flags_set(flags_));
      }

      virtual int output_method_get()
      {
         int _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_canvas_output_method_get());
            return _tmp_ret;
      }

      virtual void output_method_set(int render_method_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_canvas_output_method_set(render_method_));
      }

      virtual int font_cache_get()
      {
         int _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_canvas_font_cache_get());
            return _tmp_ret;
      }

      virtual void font_cache_set(int size_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_canvas_font_cache_set(size_));
      }

      virtual void output_size_get(int* w_, int* h_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_canvas_output_size_get(w_, h_));
      }

      virtual void output_size_set(int w_, int h_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_canvas_output_size_set(w_, h_));
      }

      virtual void * data_attach_get()
      {
         void * _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_canvas_data_attach_get());
            return _tmp_ret;
      }

      virtual void data_attach_set(void * data_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_canvas_data_attach_set(data_));
      }

      virtual Evas_Font_Hinting_Flags font_hinting_get()
      {
         Evas_Font_Hinting_Flags _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_canvas_font_hinting_get());
            return _tmp_ret;
      }

      virtual void font_hinting_set(Evas_Font_Hinting_Flags hinting_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_canvas_font_hinting_set(hinting_));
      }

      virtual Evas_Engine_Info * engine_info_get()
      {
         Evas_Engine_Info * _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_canvas_engine_info_get());
            return _tmp_ret;
      }

      virtual bool engine_info_set(Evas_Engine_Info * info_)
      {
         Eina_Bool _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_canvas_engine_info_set(info_));
            return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }

      virtual ::evas::object focus_get()
      {
         Evas_Object * _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_canvas_focus_get());
            return ::efl::eolian::to_cxx<::evas::object>(_tmp_ret, std::tuple<std::false_type>());
      }

      virtual ::evas::object object_top_get()
      {
         Evas_Object * _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_canvas_object_top_get());
            return ::efl::eolian::to_cxx<::evas::object>(_tmp_ret, std::tuple<std::false_type>());
      }

      virtual const Evas_Lock * key_lock_get()
      {
         const Evas_Lock * _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_canvas_key_lock_get());
            return _tmp_ret;
      }

      virtual void pointer_canvas_xy_get(Evas_Coord* x_, Evas_Coord* y_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_canvas_pointer_canvas_xy_get(x_, y_));
      }

      virtual int event_down_count_get()
      {
         int _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_canvas_event_down_count_get());
            return _tmp_ret;
      }

      virtual int smart_objects_calculate_count_get()
      {
         int _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_canvas_smart_objects_calculate_count_get());
            return _tmp_ret;
      }

      virtual bool focus_state_get()
      {
         Eina_Bool _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_canvas_focus_state_get());
            return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }

      virtual bool changed_get()
      {
         Eina_Bool _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_canvas_changed_get());
            return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }

      virtual void pointer_output_xy_get(int* x_, int* y_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_canvas_pointer_output_xy_get(x_, y_));
      }

      virtual bool pointer_inside_get()
      {
         Eina_Bool _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_canvas_pointer_inside_get());
            return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }

      virtual bool image_max_size_get(int* maxw_, int* maxh_)
      {
         Eina_Bool _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_canvas_image_max_size_get(maxw_, maxh_));
            return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }

      virtual ::evas::object object_bottom_get()
      {
         Evas_Object * _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_canvas_object_bottom_get());
            return ::efl::eolian::to_cxx<::evas::object>(_tmp_ret, std::tuple<std::false_type>());
      }

      virtual const Evas_Modifier * key_modifier_get()
      {
         const Evas_Modifier * _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_canvas_key_modifier_get());
            return _tmp_ret;
      }

      virtual int pointer_button_down_mask_get()
      {
         int _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_canvas_pointer_button_down_mask_get());
            return _tmp_ret;
      }

   };
};


template<>
struct operation_description_class_size< ::evas::canvas >
{
   static constexpr int value = 
#if defined(CANVAS_PROTECTED) && defined(CANVAS_BETA)
      104
#elif defined(CANVAS_PROTECTED)
      104
#elif defined(CANVAS_BETA)
      104
#else
      104
#endif
      + operation_description_class_size<::eo::base >::value      + operation_description_class_size<::evas::common_interface >::value;
};

template <typename T>
int initialize_operation_description(::efl::eo::detail::tag<::evas::canvas>
                                 , Eo_Op_Description* ops)
{
   int i = 0;
   (void)i;
   (void)ops;
   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas_tree_objects_at_xy_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas_tree_objects_at_xy_get);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas_event_feed_mouse_wheel_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas_event_feed_mouse_wheel);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas_key_lock_on_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas_key_lock_on);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas_event_feed_key_down_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas_event_feed_key_down);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas_key_modifier_mask_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas_key_modifier_mask_get);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas_key_modifier_add_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas_key_modifier_add);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas_key_modifier_off_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas_key_modifier_off);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas_event_feed_hold_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas_event_feed_hold);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas_event_feed_mouse_move_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas_event_feed_mouse_move);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas_event_feed_key_up_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas_event_feed_key_up);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas_event_feed_mouse_out_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas_event_feed_mouse_out);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas_event_input_multi_move_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas_event_input_multi_move);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas_objects_at_xy_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas_objects_at_xy_get);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas_event_input_multi_up_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas_event_input_multi_up);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas_event_feed_multi_down_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas_event_feed_multi_down);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas_render_async_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas_render_async);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas_render2_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas_render2);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas_render2_updates_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas_render2_updates);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas_focus_out_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas_focus_out);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas_event_input_mouse_move_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas_event_input_mouse_move);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas_norender_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas_norender);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas_touch_point_list_count_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas_touch_point_list_count);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas_event_input_multi_down_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas_event_input_multi_down);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas_nochange_pop_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas_nochange_pop);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas_key_lock_off_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas_key_lock_off);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas_nochange_push_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas_nochange_push);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas_font_cache_flush_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas_font_cache_flush);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas_font_hinting_can_hint_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas_font_hinting_can_hint);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas_object_top_at_xy_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas_object_top_at_xy_get);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas_key_modifier_on_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas_key_modifier_on);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas_event_feed_mouse_up_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas_event_feed_mouse_up);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas_event_feed_mouse_down_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas_event_feed_mouse_down);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas_event_refeed_event_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas_event_refeed_event);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas_font_available_list_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas_font_available_list);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas_objects_in_rectangle_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas_objects_in_rectangle_get);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas_object_name_find_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas_object_name_find);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas_font_path_append_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas_font_path_append);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas_touch_point_list_nth_id_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas_touch_point_list_nth_id_get);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas_font_path_clear_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas_font_path_clear);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas_smart_objects_calculate_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas_smart_objects_calculate);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas_touch_point_list_nth_xy_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas_touch_point_list_nth_xy_get);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas_key_lock_del_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas_key_lock_del);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas_damage_rectangle_add_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas_damage_rectangle_add);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas_sync_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas_sync);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas_font_path_list_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas_font_path_list);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas_image_cache_reload_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas_image_cache_reload);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas_coord_world_x_to_screen_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas_coord_world_x_to_screen);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas_event_feed_multi_move_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas_event_feed_multi_move);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas_render_updates_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas_render_updates);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas_image_cache_flush_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas_image_cache_flush);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas_coord_screen_y_to_world_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas_coord_screen_y_to_world);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas_key_modifier_del_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas_key_modifier_del);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas_touch_point_list_nth_state_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas_touch_point_list_nth_state_get);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas_focus_in_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas_focus_in);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas_obscured_rectangle_add_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas_obscured_rectangle_add);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas_render_dump_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas_render_dump);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas_event_feed_mouse_in_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas_event_feed_mouse_in);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas_object_top_in_rectangle_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas_object_top_in_rectangle_get);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas_render_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas_render);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas_event_feed_multi_up_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas_event_feed_multi_up);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas_font_path_prepend_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas_font_path_prepend);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas_obscured_clear_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas_obscured_clear);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas_event_feed_mouse_cancel_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas_event_feed_mouse_cancel);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas_coord_screen_x_to_world_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas_coord_screen_x_to_world);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas_key_lock_add_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas_key_lock_add);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas_render_idle_flush_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas_render_idle_flush);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas_coord_world_y_to_screen_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas_coord_world_y_to_screen);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas_event_feed_key_down_with_keycode_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas_event_feed_key_down_with_keycode);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas_event_feed_key_up_with_keycode_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas_event_feed_key_up_with_keycode);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas_event_feed_axis_update_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas_event_feed_axis_update);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas_output_framespace_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas_output_framespace_get);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas_output_framespace_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas_output_framespace_set);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas_output_viewport_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas_output_viewport_get);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas_output_viewport_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas_output_viewport_set);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas_image_cache_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas_image_cache_get);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas_image_cache_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas_image_cache_set);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas_event_default_flags_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas_event_default_flags_get);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas_event_default_flags_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas_event_default_flags_set);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas_output_method_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas_output_method_get);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas_output_method_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas_output_method_set);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas_font_cache_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas_font_cache_get);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas_font_cache_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas_font_cache_set);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas_output_size_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas_output_size_get);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas_output_size_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas_output_size_set);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas_data_attach_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas_data_attach_get);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas_data_attach_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas_data_attach_set);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas_font_hinting_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas_font_hinting_get);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas_font_hinting_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas_font_hinting_set);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas_engine_info_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas_engine_info_get);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas_engine_info_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas_engine_info_set);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas_focus_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas_focus_get);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas_object_top_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas_object_top_get);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas_key_lock_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas_key_lock_get);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas_pointer_canvas_xy_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas_pointer_canvas_xy_get);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas_event_down_count_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas_event_down_count_get);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas_smart_objects_calculate_count_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas_smart_objects_calculate_count_get);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas_focus_state_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas_focus_state_get);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas_changed_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas_changed_get);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas_pointer_output_xy_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas_pointer_output_xy_get);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas_pointer_inside_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas_pointer_inside_get);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas_image_max_size_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas_image_max_size_get);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas_object_bottom_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas_object_bottom_get);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas_key_modifier_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas_key_modifier_get);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas_pointer_button_down_mask_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas_pointer_button_down_mask_get);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   initialize_operation_description<T>(::efl::eo::detail::tag<::eo::base>(), &ops[operation_description_class_size< ::evas::canvas >::value]);
   initialize_operation_description<T>(::efl::eo::detail::tag<::evas::common_interface>(), &ops[operation_description_class_size< ::evas::canvas >::value + operation_description_class_size<::eo::base>::value]);
   return 0;
}
inline Eo_Class const* get_eo_class(tag<::evas::canvas>)
{
   return (EVAS_CANVAS_CLASS);
}

} } }

/// @endcond

