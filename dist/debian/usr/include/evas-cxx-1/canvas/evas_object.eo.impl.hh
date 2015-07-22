/// @cond EO_CXX_EO_IMPL

inline bool evas::object::clipees_has() const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_clipees_has());
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline bool evas::object::key_grab(::efl::eina::string_view keyname_, Evas_Modifier_Mask modifiers_, Evas_Modifier_Mask not_modifiers_, bool exclusive_) const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_key_grab(::efl::eolian::to_c(keyname_), modifiers_, not_modifiers_, ::efl::eolian::to_c(exclusive_)));
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline bool evas::object::smart_type_check(::efl::eina::string_view type_) const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_smart_type_check(::efl::eolian::to_c(type_)));
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline ::evas::object evas::object::name_child_find(::efl::eina::string_view name_, int recurse_) const
{
   Evas_Object * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_name_child_find(::efl::eolian::to_c(name_), recurse_));
   return ::efl::eolian::to_cxx<::evas::object>(_tmp_ret, std::tuple<std::false_type>());
}

inline void evas::object::key_ungrab(::efl::eina::string_view keyname_, Evas_Modifier_Mask modifiers_, Evas_Modifier_Mask not_modifiers_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_key_ungrab(::efl::eolian::to_c(keyname_), modifiers_, not_modifiers_));
}

inline void evas::object::clip_unset() const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_clip_unset());
}

inline void evas::object::smart_move_children_relative(Evas_Coord dx_, Evas_Coord dy_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_smart_move_children_relative(dx_, dy_));
}

inline bool evas::object::smart_type_check_ptr(::efl::eina::string_view type_) const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_smart_type_check_ptr(::efl::eolian::to_c(type_)));
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline void evas::object::size_hint_max_get(Evas_Coord* w_, Evas_Coord* h_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_size_hint_max_get(w_, h_));
}

inline void evas::object::size_hint_max_set(Evas_Coord w_, Evas_Coord h_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_size_hint_max_set(w_, h_));
}

inline void evas::object::size_hint_request_get(Evas_Coord* w_, Evas_Coord* h_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_size_hint_request_get(w_, h_));
}

inline void evas::object::size_hint_request_set(Evas_Coord w_, Evas_Coord h_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_size_hint_request_set(w_, h_));
}

inline ::efl::eina::string_view evas::object::type_get() const
{
   const char * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_type_get());
   return ::efl::eolian::to_cxx<::efl::eina::string_view>(_tmp_ret, std::tuple<std::false_type>());
}

inline void evas::object::type_set(::efl::eina::string_view type_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_type_set(::efl::eolian::to_c(type_)));
}

inline void evas::object::size_hint_min_get(Evas_Coord* w_, Evas_Coord* h_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_size_hint_min_get(w_, h_));
}

inline void evas::object::size_hint_min_set(Evas_Coord w_, Evas_Coord h_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_size_hint_min_set(w_, h_));
}

inline Evas_Object_Pointer_Mode evas::object::pointer_mode_get() const
{
   Evas_Object_Pointer_Mode _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_pointer_mode_get());
   return _tmp_ret;
}

inline void evas::object::pointer_mode_set(Evas_Object_Pointer_Mode pointer_mode_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_pointer_mode_set(pointer_mode_));
}

inline Evas_Render_Op evas::object::render_op_get() const
{
   Evas_Render_Op _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_render_op_get());
   return _tmp_ret;
}

inline void evas::object::render_op_set(Evas_Render_Op render_op_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_render_op_set(render_op_));
}

inline bool evas::object::freeze_events_get() const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_freeze_events_get());
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline void evas::object::freeze_events_set(bool freeze_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_freeze_events_set(::efl::eolian::to_c(freeze_)));
}

inline const Evas_Map * evas::object::map_get() const
{
   const Evas_Map * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_map_get());
   return _tmp_ret;
}

inline void evas::object::map_set(const Evas_Map * map_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_map_set(map_));
}

inline void evas::object::size_hint_aspect_get(Evas_Aspect_Control* aspect_, Evas_Coord* w_, Evas_Coord* h_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_size_hint_aspect_get(aspect_, w_, h_));
}

inline void evas::object::size_hint_aspect_set(Evas_Aspect_Control aspect_, Evas_Coord w_, Evas_Coord h_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_size_hint_aspect_set(aspect_, w_, h_));
}

inline ::evas::object evas::object::clip_get() const
{
   Evas_Object * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_clip_get());
   return ::efl::eolian::to_cxx<::evas::object>(_tmp_ret, std::tuple<std::false_type>());
}

inline void evas::object::clip_set(::evas::object clip_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_clip_set(::efl::eolian::to_c(clip_)));
}

inline void evas::object::size_hint_padding_get(Evas_Coord* l_, Evas_Coord* r_, Evas_Coord* t_, Evas_Coord* b_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_size_hint_padding_get(l_, r_, t_, b_));
}

inline void evas::object::size_hint_padding_set(Evas_Coord l_, Evas_Coord r_, Evas_Coord t_, Evas_Coord b_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_size_hint_padding_set(l_, r_, t_, b_));
}

inline bool evas::object::repeat_events_get() const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_repeat_events_get());
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline void evas::object::repeat_events_set(bool repeat_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_repeat_events_set(::efl::eolian::to_c(repeat_)));
}

inline void evas::object::size_hint_weight_get(double* x_, double* y_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_size_hint_weight_get(x_, y_));
}

inline void evas::object::size_hint_weight_set(double x_, double y_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_size_hint_weight_set(x_, y_));
}

inline ::efl::eina::string_view evas::object::name_get() const
{
   const char * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_name_get());
   return ::efl::eolian::to_cxx<::efl::eina::string_view>(_tmp_ret, std::tuple<std::false_type>());
}

inline void evas::object::name_set(::efl::eina::string_view name_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_name_set(::efl::eolian::to_c(name_)));
}

inline double evas::object::scale_get() const
{
   double _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_scale_get());
   return _tmp_ret;
}

inline void evas::object::scale_set(double scale_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_scale_set(scale_));
}

inline bool evas::object::static_clip_get() const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_static_clip_get());
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline void evas::object::static_clip_set(bool is_static_clip_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_static_clip_set(::efl::eolian::to_c(is_static_clip_)));
}

inline bool evas::object::focus_get() const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_focus_get());
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline void evas::object::focus_set(bool focus_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_focus_set(::efl::eolian::to_c(focus_)));
}

inline bool evas::object::is_frame_object_get() const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_is_frame_object_get());
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline void evas::object::is_frame_object_set(bool is_frame_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_is_frame_object_set(::efl::eolian::to_c(is_frame_)));
}

inline bool evas::object::map_enable_get() const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_map_enable_get());
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline void evas::object::map_enable_set(bool enabled_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_map_enable_set(::efl::eolian::to_c(enabled_)));
}

inline bool evas::object::precise_is_inside_get() const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_precise_is_inside_get());
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline void evas::object::precise_is_inside_set(bool precise_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_precise_is_inside_set(::efl::eolian::to_c(precise_)));
}

inline void evas::object::size_hint_align_get(double* x_, double* y_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_size_hint_align_get(x_, y_));
}

inline void evas::object::size_hint_align_set(double x_, double y_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_size_hint_align_set(x_, y_));
}

inline bool evas::object::propagate_events_get() const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_propagate_events_get());
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline void evas::object::propagate_events_set(bool propagate_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_propagate_events_set(::efl::eolian::to_c(propagate_)));
}

inline bool evas::object::pass_events_get() const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_pass_events_get());
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline void evas::object::pass_events_set(bool pass_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_pass_events_set(::efl::eolian::to_c(pass_)));
}

inline bool evas::object::anti_alias_get() const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_anti_alias_get());
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline void evas::object::anti_alias_set(bool anti_alias_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_anti_alias_set(::efl::eolian::to_c(anti_alias_)));
}

inline void * evas::object::smart_data_get() const
{
   void * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_smart_data_get());
   return _tmp_ret;
}

inline ::evas::object evas::object::smart_clipped_clipper_get() const
{
   Evas_Object * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_smart_clipped_clipper_get());
   return ::efl::eolian::to_cxx<::evas::object>(_tmp_ret, std::tuple<std::false_type>());
}

inline ::efl::eina::crange_list< ::evas::object > evas::object::clipees_get() const
{
   const Eina_List * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_clipees_get());
   return ::efl::eolian::to_cxx<::efl::eina::crange_list< ::evas::object >>(_tmp_ret, std::tuple<std::false_type, std::false_type>());
}

inline ::evas::object evas::object::smart_parent_get() const
{
   Evas_Object * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_smart_parent_get());
   return ::efl::eolian::to_cxx<::evas::object>(_tmp_ret, std::tuple<std::false_type>());
}

inline Evas_Display_Mode evas::object::size_hint_display_mode_get() const
{
   Evas_Display_Mode _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_size_hint_display_mode_get());
   return _tmp_ret;
}

inline void evas::object::size_hint_display_mode_set(Evas_Display_Mode dispmode_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_size_hint_display_mode_set(dispmode_));
}

inline bool evas::object::no_render_get() const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_no_render_get());
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline void evas::object::no_render_set(bool enable_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_no_render_set(::efl::eolian::to_c(enable_)));
}

inline bool eo_cxx::evas::object::clipees_has() const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_clipees_has());
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline bool eo_cxx::evas::object::key_grab(::efl::eina::string_view keyname_, Evas_Modifier_Mask modifiers_, Evas_Modifier_Mask not_modifiers_, bool exclusive_) const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_key_grab(::efl::eolian::to_c(keyname_), modifiers_, not_modifiers_, ::efl::eolian::to_c(exclusive_)));
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline bool eo_cxx::evas::object::smart_type_check(::efl::eina::string_view type_) const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_smart_type_check(::efl::eolian::to_c(type_)));
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline ::evas::object eo_cxx::evas::object::name_child_find(::efl::eina::string_view name_, int recurse_) const
{
   Evas_Object * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_name_child_find(::efl::eolian::to_c(name_), recurse_));
   return ::efl::eolian::to_cxx<::evas::object>(_tmp_ret, std::tuple<std::false_type>());
}

inline void eo_cxx::evas::object::key_ungrab(::efl::eina::string_view keyname_, Evas_Modifier_Mask modifiers_, Evas_Modifier_Mask not_modifiers_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_key_ungrab(::efl::eolian::to_c(keyname_), modifiers_, not_modifiers_));
}

inline void eo_cxx::evas::object::clip_unset() const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_clip_unset());
}

inline void eo_cxx::evas::object::smart_move_children_relative(Evas_Coord dx_, Evas_Coord dy_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_smart_move_children_relative(dx_, dy_));
}

inline bool eo_cxx::evas::object::smart_type_check_ptr(::efl::eina::string_view type_) const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_smart_type_check_ptr(::efl::eolian::to_c(type_)));
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline void eo_cxx::evas::object::size_hint_max_get(Evas_Coord* w_, Evas_Coord* h_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_size_hint_max_get(w_, h_));
}

inline void eo_cxx::evas::object::size_hint_max_set(Evas_Coord w_, Evas_Coord h_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_size_hint_max_set(w_, h_));
}

inline void eo_cxx::evas::object::size_hint_request_get(Evas_Coord* w_, Evas_Coord* h_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_size_hint_request_get(w_, h_));
}

inline void eo_cxx::evas::object::size_hint_request_set(Evas_Coord w_, Evas_Coord h_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_size_hint_request_set(w_, h_));
}

inline ::efl::eina::string_view eo_cxx::evas::object::type_get() const
{
   const char * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_type_get());
   return ::efl::eolian::to_cxx<::efl::eina::string_view>(_tmp_ret, std::tuple<std::false_type>());
}

inline void eo_cxx::evas::object::type_set(::efl::eina::string_view type_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_type_set(::efl::eolian::to_c(type_)));
}

inline void eo_cxx::evas::object::size_hint_min_get(Evas_Coord* w_, Evas_Coord* h_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_size_hint_min_get(w_, h_));
}

inline void eo_cxx::evas::object::size_hint_min_set(Evas_Coord w_, Evas_Coord h_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_size_hint_min_set(w_, h_));
}

inline Evas_Object_Pointer_Mode eo_cxx::evas::object::pointer_mode_get() const
{
   Evas_Object_Pointer_Mode _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_pointer_mode_get());
   return _tmp_ret;
}

inline void eo_cxx::evas::object::pointer_mode_set(Evas_Object_Pointer_Mode pointer_mode_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_pointer_mode_set(pointer_mode_));
}

inline Evas_Render_Op eo_cxx::evas::object::render_op_get() const
{
   Evas_Render_Op _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_render_op_get());
   return _tmp_ret;
}

inline void eo_cxx::evas::object::render_op_set(Evas_Render_Op render_op_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_render_op_set(render_op_));
}

inline bool eo_cxx::evas::object::freeze_events_get() const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_freeze_events_get());
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline void eo_cxx::evas::object::freeze_events_set(bool freeze_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_freeze_events_set(::efl::eolian::to_c(freeze_)));
}

inline const Evas_Map * eo_cxx::evas::object::map_get() const
{
   const Evas_Map * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_map_get());
   return _tmp_ret;
}

inline void eo_cxx::evas::object::map_set(const Evas_Map * map_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_map_set(map_));
}

inline void eo_cxx::evas::object::size_hint_aspect_get(Evas_Aspect_Control* aspect_, Evas_Coord* w_, Evas_Coord* h_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_size_hint_aspect_get(aspect_, w_, h_));
}

inline void eo_cxx::evas::object::size_hint_aspect_set(Evas_Aspect_Control aspect_, Evas_Coord w_, Evas_Coord h_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_size_hint_aspect_set(aspect_, w_, h_));
}

inline ::evas::object eo_cxx::evas::object::clip_get() const
{
   Evas_Object * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_clip_get());
   return ::efl::eolian::to_cxx<::evas::object>(_tmp_ret, std::tuple<std::false_type>());
}

inline void eo_cxx::evas::object::clip_set(::evas::object clip_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_clip_set(::efl::eolian::to_c(clip_)));
}

inline void eo_cxx::evas::object::size_hint_padding_get(Evas_Coord* l_, Evas_Coord* r_, Evas_Coord* t_, Evas_Coord* b_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_size_hint_padding_get(l_, r_, t_, b_));
}

inline void eo_cxx::evas::object::size_hint_padding_set(Evas_Coord l_, Evas_Coord r_, Evas_Coord t_, Evas_Coord b_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_size_hint_padding_set(l_, r_, t_, b_));
}

inline bool eo_cxx::evas::object::repeat_events_get() const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_repeat_events_get());
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline void eo_cxx::evas::object::repeat_events_set(bool repeat_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_repeat_events_set(::efl::eolian::to_c(repeat_)));
}

inline void eo_cxx::evas::object::size_hint_weight_get(double* x_, double* y_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_size_hint_weight_get(x_, y_));
}

inline void eo_cxx::evas::object::size_hint_weight_set(double x_, double y_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_size_hint_weight_set(x_, y_));
}

inline ::efl::eina::string_view eo_cxx::evas::object::name_get() const
{
   const char * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_name_get());
   return ::efl::eolian::to_cxx<::efl::eina::string_view>(_tmp_ret, std::tuple<std::false_type>());
}

inline void eo_cxx::evas::object::name_set(::efl::eina::string_view name_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_name_set(::efl::eolian::to_c(name_)));
}

inline double eo_cxx::evas::object::scale_get() const
{
   double _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_scale_get());
   return _tmp_ret;
}

inline void eo_cxx::evas::object::scale_set(double scale_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_scale_set(scale_));
}

inline bool eo_cxx::evas::object::static_clip_get() const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_static_clip_get());
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline void eo_cxx::evas::object::static_clip_set(bool is_static_clip_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_static_clip_set(::efl::eolian::to_c(is_static_clip_)));
}

inline bool eo_cxx::evas::object::focus_get() const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_focus_get());
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline void eo_cxx::evas::object::focus_set(bool focus_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_focus_set(::efl::eolian::to_c(focus_)));
}

inline bool eo_cxx::evas::object::is_frame_object_get() const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_is_frame_object_get());
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline void eo_cxx::evas::object::is_frame_object_set(bool is_frame_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_is_frame_object_set(::efl::eolian::to_c(is_frame_)));
}

inline bool eo_cxx::evas::object::map_enable_get() const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_map_enable_get());
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline void eo_cxx::evas::object::map_enable_set(bool enabled_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_map_enable_set(::efl::eolian::to_c(enabled_)));
}

inline bool eo_cxx::evas::object::precise_is_inside_get() const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_precise_is_inside_get());
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline void eo_cxx::evas::object::precise_is_inside_set(bool precise_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_precise_is_inside_set(::efl::eolian::to_c(precise_)));
}

inline void eo_cxx::evas::object::size_hint_align_get(double* x_, double* y_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_size_hint_align_get(x_, y_));
}

inline void eo_cxx::evas::object::size_hint_align_set(double x_, double y_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_size_hint_align_set(x_, y_));
}

inline bool eo_cxx::evas::object::propagate_events_get() const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_propagate_events_get());
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline void eo_cxx::evas::object::propagate_events_set(bool propagate_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_propagate_events_set(::efl::eolian::to_c(propagate_)));
}

inline bool eo_cxx::evas::object::pass_events_get() const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_pass_events_get());
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline void eo_cxx::evas::object::pass_events_set(bool pass_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_pass_events_set(::efl::eolian::to_c(pass_)));
}

inline bool eo_cxx::evas::object::anti_alias_get() const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_anti_alias_get());
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline void eo_cxx::evas::object::anti_alias_set(bool anti_alias_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_anti_alias_set(::efl::eolian::to_c(anti_alias_)));
}

inline void * eo_cxx::evas::object::smart_data_get() const
{
   void * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_smart_data_get());
   return _tmp_ret;
}

inline ::evas::object eo_cxx::evas::object::smart_clipped_clipper_get() const
{
   Evas_Object * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_smart_clipped_clipper_get());
   return ::efl::eolian::to_cxx<::evas::object>(_tmp_ret, std::tuple<std::false_type>());
}

inline ::efl::eina::crange_list< ::evas::object > eo_cxx::evas::object::clipees_get() const
{
   const Eina_List * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_clipees_get());
   return ::efl::eolian::to_cxx<::efl::eina::crange_list< ::evas::object >>(_tmp_ret, std::tuple<std::false_type, std::false_type>());
}

inline ::evas::object eo_cxx::evas::object::smart_parent_get() const
{
   Evas_Object * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_smart_parent_get());
   return ::efl::eolian::to_cxx<::evas::object>(_tmp_ret, std::tuple<std::false_type>());
}

inline Evas_Display_Mode eo_cxx::evas::object::size_hint_display_mode_get() const
{
   Evas_Display_Mode _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_size_hint_display_mode_get());
   return _tmp_ret;
}

inline void eo_cxx::evas::object::size_hint_display_mode_set(Evas_Display_Mode dispmode_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_size_hint_display_mode_set(dispmode_));
}

inline bool eo_cxx::evas::object::no_render_get() const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_no_render_get());
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline void eo_cxx::evas::object::no_render_set(bool enable_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_no_render_set(::efl::eolian::to_c(enable_)));
}

inline ::eo_cxx::evas::object::operator ::evas::object() const
{
   return *static_cast<::evas::object const*>(static_cast<void const*>(this));
}

inline ::eo_cxx::evas::object::operator ::evas::object&()
{
   return *static_cast<::evas::object*>(static_cast<void*>(this));
}

inline ::eo_cxx::evas::object::operator ::evas::object const&() const
{
   return *static_cast<::evas::object const*>(static_cast<void const*>(this));
}

template <typename T>
bool evas_object_clipees_has_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->clipees_has();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Eina_Bool _tmp_ret{};
         return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }
}

template <typename T>
bool evas_object_key_grab_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, const char * keyname_, Evas_Modifier_Mask modifiers_, Evas_Modifier_Mask not_modifiers_, Eina_Bool exclusive_)
{
   try
      {
         return static_cast<T*>(self->this_)->key_grab(::efl::eolian::to_cxx<::efl::eina::string_view>(keyname_, std::tuple<std::false_type>()), modifiers_, not_modifiers_, ::efl::eolian::to_cxx<bool>(exclusive_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Eina_Bool _tmp_ret{};
         return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }
}

template <typename T>
bool evas_object_smart_type_check_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, const char * type_)
{
   try
      {
         return static_cast<T*>(self->this_)->smart_type_check(::efl::eolian::to_cxx<::efl::eina::string_view>(type_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Eina_Bool _tmp_ret{};
         return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }
}

template <typename T>
::evas::object evas_object_name_child_find_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, const char * name_, int recurse_)
{
   try
      {
         return static_cast<T*>(self->this_)->name_child_find(::efl::eolian::to_cxx<::efl::eina::string_view>(name_, std::tuple<std::false_type>()), recurse_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Evas_Object * _tmp_ret{};
         return ::efl::eolian::to_cxx<::evas::object>(_tmp_ret, std::tuple<std::false_type>());
      }
}

template <typename T>
void evas_object_key_ungrab_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, const char * keyname_, Evas_Modifier_Mask modifiers_, Evas_Modifier_Mask not_modifiers_)
{
   try
      {
         static_cast<T*>(self->this_)->key_ungrab(::efl::eolian::to_cxx<::efl::eina::string_view>(keyname_, std::tuple<std::false_type>()), modifiers_, not_modifiers_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void evas_object_clip_unset_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         static_cast<T*>(self->this_)->clip_unset();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void evas_object_smart_move_children_relative_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Evas_Coord dx_, Evas_Coord dy_)
{
   try
      {
         static_cast<T*>(self->this_)->smart_move_children_relative(dx_, dy_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
bool evas_object_smart_type_check_ptr_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, const char * type_)
{
   try
      {
         return static_cast<T*>(self->this_)->smart_type_check_ptr(::efl::eolian::to_cxx<::efl::eina::string_view>(type_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Eina_Bool _tmp_ret{};
         return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }
}

template <typename T>
void evas_object_size_hint_max_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Evas_Coord* w_, Evas_Coord* h_)
{
   try
      {
         static_cast<T*>(self->this_)->size_hint_max_get(w_, h_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void evas_object_size_hint_max_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Evas_Coord w_, Evas_Coord h_)
{
   try
      {
         static_cast<T*>(self->this_)->size_hint_max_set(w_, h_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void evas_object_size_hint_request_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Evas_Coord* w_, Evas_Coord* h_)
{
   try
      {
         static_cast<T*>(self->this_)->size_hint_request_get(w_, h_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void evas_object_size_hint_request_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Evas_Coord w_, Evas_Coord h_)
{
   try
      {
         static_cast<T*>(self->this_)->size_hint_request_set(w_, h_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
::efl::eina::string_view evas_object_type_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->type_get();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         const char * _tmp_ret{};
         return ::efl::eolian::to_cxx<::efl::eina::string_view>(_tmp_ret, std::tuple<std::false_type>());
      }
}

template <typename T>
void evas_object_type_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, const char * type_)
{
   try
      {
         static_cast<T*>(self->this_)->type_set(::efl::eolian::to_cxx<::efl::eina::string_view>(type_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void evas_object_size_hint_min_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Evas_Coord* w_, Evas_Coord* h_)
{
   try
      {
         static_cast<T*>(self->this_)->size_hint_min_get(w_, h_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void evas_object_size_hint_min_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Evas_Coord w_, Evas_Coord h_)
{
   try
      {
         static_cast<T*>(self->this_)->size_hint_min_set(w_, h_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
Evas_Object_Pointer_Mode evas_object_pointer_mode_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->pointer_mode_get();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Evas_Object_Pointer_Mode _tmp_ret{};
         return _tmp_ret;
      }
}

template <typename T>
void evas_object_pointer_mode_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Evas_Object_Pointer_Mode pointer_mode_)
{
   try
      {
         static_cast<T*>(self->this_)->pointer_mode_set(pointer_mode_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
Evas_Render_Op evas_object_render_op_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->render_op_get();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Evas_Render_Op _tmp_ret{};
         return _tmp_ret;
      }
}

template <typename T>
void evas_object_render_op_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Evas_Render_Op render_op_)
{
   try
      {
         static_cast<T*>(self->this_)->render_op_set(render_op_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
bool evas_object_freeze_events_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->freeze_events_get();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Eina_Bool _tmp_ret{};
         return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }
}

template <typename T>
void evas_object_freeze_events_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Eina_Bool freeze_)
{
   try
      {
         static_cast<T*>(self->this_)->freeze_events_set(::efl::eolian::to_cxx<bool>(freeze_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
const Evas_Map * evas_object_map_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->map_get();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         const Evas_Map * _tmp_ret{};
         return _tmp_ret;
      }
}

template <typename T>
void evas_object_map_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, const Evas_Map * map_)
{
   try
      {
         static_cast<T*>(self->this_)->map_set(map_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void evas_object_size_hint_aspect_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Evas_Aspect_Control* aspect_, Evas_Coord* w_, Evas_Coord* h_)
{
   try
      {
         static_cast<T*>(self->this_)->size_hint_aspect_get(aspect_, w_, h_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void evas_object_size_hint_aspect_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Evas_Aspect_Control aspect_, Evas_Coord w_, Evas_Coord h_)
{
   try
      {
         static_cast<T*>(self->this_)->size_hint_aspect_set(aspect_, w_, h_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
::evas::object evas_object_clip_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->clip_get();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Evas_Object * _tmp_ret{};
         return ::efl::eolian::to_cxx<::evas::object>(_tmp_ret, std::tuple<std::false_type>());
      }
}

template <typename T>
void evas_object_clip_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Evas_Object * clip_)
{
   try
      {
         static_cast<T*>(self->this_)->clip_set(::efl::eolian::to_cxx<::evas::object>(clip_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void evas_object_size_hint_padding_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Evas_Coord* l_, Evas_Coord* r_, Evas_Coord* t_, Evas_Coord* b_)
{
   try
      {
         static_cast<T*>(self->this_)->size_hint_padding_get(l_, r_, t_, b_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void evas_object_size_hint_padding_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Evas_Coord l_, Evas_Coord r_, Evas_Coord t_, Evas_Coord b_)
{
   try
      {
         static_cast<T*>(self->this_)->size_hint_padding_set(l_, r_, t_, b_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
bool evas_object_repeat_events_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->repeat_events_get();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Eina_Bool _tmp_ret{};
         return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }
}

template <typename T>
void evas_object_repeat_events_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Eina_Bool repeat_)
{
   try
      {
         static_cast<T*>(self->this_)->repeat_events_set(::efl::eolian::to_cxx<bool>(repeat_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void evas_object_size_hint_weight_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, double* x_, double* y_)
{
   try
      {
         static_cast<T*>(self->this_)->size_hint_weight_get(x_, y_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void evas_object_size_hint_weight_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, double x_, double y_)
{
   try
      {
         static_cast<T*>(self->this_)->size_hint_weight_set(x_, y_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
::efl::eina::string_view evas_object_name_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->name_get();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         const char * _tmp_ret{};
         return ::efl::eolian::to_cxx<::efl::eina::string_view>(_tmp_ret, std::tuple<std::false_type>());
      }
}

template <typename T>
void evas_object_name_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, const char * name_)
{
   try
      {
         static_cast<T*>(self->this_)->name_set(::efl::eolian::to_cxx<::efl::eina::string_view>(name_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
double evas_object_scale_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->scale_get();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         double _tmp_ret{};
         return _tmp_ret;
      }
}

template <typename T>
void evas_object_scale_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, double scale_)
{
   try
      {
         static_cast<T*>(self->this_)->scale_set(scale_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
bool evas_object_static_clip_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->static_clip_get();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Eina_Bool _tmp_ret{};
         return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }
}

template <typename T>
void evas_object_static_clip_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Eina_Bool is_static_clip_)
{
   try
      {
         static_cast<T*>(self->this_)->static_clip_set(::efl::eolian::to_cxx<bool>(is_static_clip_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
bool evas_object_focus_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->focus_get();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Eina_Bool _tmp_ret{};
         return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }
}

template <typename T>
void evas_object_focus_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Eina_Bool focus_)
{
   try
      {
         static_cast<T*>(self->this_)->focus_set(::efl::eolian::to_cxx<bool>(focus_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
bool evas_object_is_frame_object_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->is_frame_object_get();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Eina_Bool _tmp_ret{};
         return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }
}

template <typename T>
void evas_object_is_frame_object_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Eina_Bool is_frame_)
{
   try
      {
         static_cast<T*>(self->this_)->is_frame_object_set(::efl::eolian::to_cxx<bool>(is_frame_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
bool evas_object_map_enable_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->map_enable_get();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Eina_Bool _tmp_ret{};
         return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }
}

template <typename T>
void evas_object_map_enable_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Eina_Bool enabled_)
{
   try
      {
         static_cast<T*>(self->this_)->map_enable_set(::efl::eolian::to_cxx<bool>(enabled_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
bool evas_object_precise_is_inside_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->precise_is_inside_get();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Eina_Bool _tmp_ret{};
         return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }
}

template <typename T>
void evas_object_precise_is_inside_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Eina_Bool precise_)
{
   try
      {
         static_cast<T*>(self->this_)->precise_is_inside_set(::efl::eolian::to_cxx<bool>(precise_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void evas_object_size_hint_align_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, double* x_, double* y_)
{
   try
      {
         static_cast<T*>(self->this_)->size_hint_align_get(x_, y_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void evas_object_size_hint_align_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, double x_, double y_)
{
   try
      {
         static_cast<T*>(self->this_)->size_hint_align_set(x_, y_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
bool evas_object_propagate_events_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->propagate_events_get();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Eina_Bool _tmp_ret{};
         return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }
}

template <typename T>
void evas_object_propagate_events_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Eina_Bool propagate_)
{
   try
      {
         static_cast<T*>(self->this_)->propagate_events_set(::efl::eolian::to_cxx<bool>(propagate_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
bool evas_object_pass_events_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->pass_events_get();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Eina_Bool _tmp_ret{};
         return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }
}

template <typename T>
void evas_object_pass_events_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Eina_Bool pass_)
{
   try
      {
         static_cast<T*>(self->this_)->pass_events_set(::efl::eolian::to_cxx<bool>(pass_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
bool evas_object_anti_alias_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->anti_alias_get();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Eina_Bool _tmp_ret{};
         return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }
}

template <typename T>
void evas_object_anti_alias_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Eina_Bool anti_alias_)
{
   try
      {
         static_cast<T*>(self->this_)->anti_alias_set(::efl::eolian::to_cxx<bool>(anti_alias_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void * evas_object_smart_data_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->smart_data_get();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         void * _tmp_ret{};
         return _tmp_ret;
      }
}

template <typename T>
::evas::object evas_object_smart_clipped_clipper_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->smart_clipped_clipper_get();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Evas_Object * _tmp_ret{};
         return ::efl::eolian::to_cxx<::evas::object>(_tmp_ret, std::tuple<std::false_type>());
      }
}

template <typename T>
::efl::eina::crange_list< ::evas::object > evas_object_clipees_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->clipees_get();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         const Eina_List * _tmp_ret{};
         return ::efl::eolian::to_cxx<::efl::eina::crange_list< ::evas::object >>(_tmp_ret, std::tuple<std::false_type, std::false_type>());
      }
}

template <typename T>
::evas::object evas_object_smart_parent_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->smart_parent_get();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Evas_Object * _tmp_ret{};
         return ::efl::eolian::to_cxx<::evas::object>(_tmp_ret, std::tuple<std::false_type>());
      }
}

template <typename T>
Evas_Display_Mode evas_object_size_hint_display_mode_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->size_hint_display_mode_get();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Evas_Display_Mode _tmp_ret{};
         return _tmp_ret;
      }
}

template <typename T>
void evas_object_size_hint_display_mode_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Evas_Display_Mode dispmode_)
{
   try
      {
         static_cast<T*>(self->this_)->size_hint_display_mode_set(dispmode_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
bool evas_object_no_render_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->no_render_get();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Eina_Bool _tmp_ret{};
         return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }
}

template <typename T>
void evas_object_no_render_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Eina_Bool enable_)
{
   try
      {
         static_cast<T*>(self->this_)->no_render_set(::efl::eolian::to_cxx<bool>(enable_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

namespace efl { namespace eo { namespace detail {

template<>
struct operations< ::evas::object >
{
   template <typename T>
   struct type
         : virtual operations< ::eo::base >::template type<T>
         , virtual operations< ::evas::common_interface >::template type<T>
         , virtual operations< ::efl::gfx::base >::template type<T>
         , virtual operations< ::efl::gfx::stack >::template type<T>
   {
      virtual bool clipees_has()
      {
         Eina_Bool _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_obj_clipees_has());
            return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }

      virtual bool key_grab(::efl::eina::string_view keyname_, Evas_Modifier_Mask modifiers_, Evas_Modifier_Mask not_modifiers_, bool exclusive_)
      {
         Eina_Bool _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_obj_key_grab(::efl::eolian::to_c(keyname_), modifiers_, not_modifiers_, ::efl::eolian::to_c(exclusive_)));
            return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }

      virtual bool smart_type_check(::efl::eina::string_view type_)
      {
         Eina_Bool _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_obj_smart_type_check(::efl::eolian::to_c(type_)));
            return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }

      virtual ::evas::object name_child_find(::efl::eina::string_view name_, int recurse_)
      {
         Evas_Object * _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_obj_name_child_find(::efl::eolian::to_c(name_), recurse_));
            return ::efl::eolian::to_cxx<::evas::object>(_tmp_ret, std::tuple<std::false_type>());
      }

      virtual void key_ungrab(::efl::eina::string_view keyname_, Evas_Modifier_Mask modifiers_, Evas_Modifier_Mask not_modifiers_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_obj_key_ungrab(::efl::eolian::to_c(keyname_), modifiers_, not_modifiers_));
      }

      virtual void clip_unset()
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_obj_clip_unset());
      }

      virtual void smart_move_children_relative(Evas_Coord dx_, Evas_Coord dy_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_obj_smart_move_children_relative(dx_, dy_));
      }

      virtual bool smart_type_check_ptr(::efl::eina::string_view type_)
      {
         Eina_Bool _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_obj_smart_type_check_ptr(::efl::eolian::to_c(type_)));
            return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }

      virtual void size_hint_max_get(Evas_Coord* w_, Evas_Coord* h_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_obj_size_hint_max_get(w_, h_));
      }

      virtual void size_hint_max_set(Evas_Coord w_, Evas_Coord h_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_obj_size_hint_max_set(w_, h_));
      }

      virtual void size_hint_request_get(Evas_Coord* w_, Evas_Coord* h_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_obj_size_hint_request_get(w_, h_));
      }

      virtual void size_hint_request_set(Evas_Coord w_, Evas_Coord h_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_obj_size_hint_request_set(w_, h_));
      }

      virtual ::efl::eina::string_view type_get()
      {
         const char * _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_obj_type_get());
            return ::efl::eolian::to_cxx<::efl::eina::string_view>(_tmp_ret, std::tuple<std::false_type>());
      }

      virtual void type_set(::efl::eina::string_view type_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_obj_type_set(::efl::eolian::to_c(type_)));
      }

      virtual void size_hint_min_get(Evas_Coord* w_, Evas_Coord* h_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_obj_size_hint_min_get(w_, h_));
      }

      virtual void size_hint_min_set(Evas_Coord w_, Evas_Coord h_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_obj_size_hint_min_set(w_, h_));
      }

      virtual Evas_Object_Pointer_Mode pointer_mode_get()
      {
         Evas_Object_Pointer_Mode _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_obj_pointer_mode_get());
            return _tmp_ret;
      }

      virtual void pointer_mode_set(Evas_Object_Pointer_Mode pointer_mode_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_obj_pointer_mode_set(pointer_mode_));
      }

      virtual Evas_Render_Op render_op_get()
      {
         Evas_Render_Op _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_obj_render_op_get());
            return _tmp_ret;
      }

      virtual void render_op_set(Evas_Render_Op render_op_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_obj_render_op_set(render_op_));
      }

      virtual bool freeze_events_get()
      {
         Eina_Bool _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_obj_freeze_events_get());
            return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }

      virtual void freeze_events_set(bool freeze_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_obj_freeze_events_set(::efl::eolian::to_c(freeze_)));
      }

      virtual const Evas_Map * map_get()
      {
         const Evas_Map * _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_obj_map_get());
            return _tmp_ret;
      }

      virtual void map_set(const Evas_Map * map_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_obj_map_set(map_));
      }

      virtual void size_hint_aspect_get(Evas_Aspect_Control* aspect_, Evas_Coord* w_, Evas_Coord* h_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_obj_size_hint_aspect_get(aspect_, w_, h_));
      }

      virtual void size_hint_aspect_set(Evas_Aspect_Control aspect_, Evas_Coord w_, Evas_Coord h_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_obj_size_hint_aspect_set(aspect_, w_, h_));
      }

      virtual ::evas::object clip_get()
      {
         Evas_Object * _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_obj_clip_get());
            return ::efl::eolian::to_cxx<::evas::object>(_tmp_ret, std::tuple<std::false_type>());
      }

      virtual void clip_set(::evas::object clip_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_obj_clip_set(::efl::eolian::to_c(clip_)));
      }

      virtual void size_hint_padding_get(Evas_Coord* l_, Evas_Coord* r_, Evas_Coord* t_, Evas_Coord* b_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_obj_size_hint_padding_get(l_, r_, t_, b_));
      }

      virtual void size_hint_padding_set(Evas_Coord l_, Evas_Coord r_, Evas_Coord t_, Evas_Coord b_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_obj_size_hint_padding_set(l_, r_, t_, b_));
      }

      virtual bool repeat_events_get()
      {
         Eina_Bool _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_obj_repeat_events_get());
            return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }

      virtual void repeat_events_set(bool repeat_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_obj_repeat_events_set(::efl::eolian::to_c(repeat_)));
      }

      virtual void size_hint_weight_get(double* x_, double* y_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_obj_size_hint_weight_get(x_, y_));
      }

      virtual void size_hint_weight_set(double x_, double y_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_obj_size_hint_weight_set(x_, y_));
      }

      virtual ::efl::eina::string_view name_get()
      {
         const char * _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_obj_name_get());
            return ::efl::eolian::to_cxx<::efl::eina::string_view>(_tmp_ret, std::tuple<std::false_type>());
      }

      virtual void name_set(::efl::eina::string_view name_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_obj_name_set(::efl::eolian::to_c(name_)));
      }

      virtual double scale_get()
      {
         double _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_obj_scale_get());
            return _tmp_ret;
      }

      virtual void scale_set(double scale_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_obj_scale_set(scale_));
      }

      virtual bool static_clip_get()
      {
         Eina_Bool _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_obj_static_clip_get());
            return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }

      virtual void static_clip_set(bool is_static_clip_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_obj_static_clip_set(::efl::eolian::to_c(is_static_clip_)));
      }

      virtual bool focus_get()
      {
         Eina_Bool _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_obj_focus_get());
            return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }

      virtual void focus_set(bool focus_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_obj_focus_set(::efl::eolian::to_c(focus_)));
      }

      virtual bool is_frame_object_get()
      {
         Eina_Bool _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_obj_is_frame_object_get());
            return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }

      virtual void is_frame_object_set(bool is_frame_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_obj_is_frame_object_set(::efl::eolian::to_c(is_frame_)));
      }

      virtual bool map_enable_get()
      {
         Eina_Bool _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_obj_map_enable_get());
            return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }

      virtual void map_enable_set(bool enabled_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_obj_map_enable_set(::efl::eolian::to_c(enabled_)));
      }

      virtual bool precise_is_inside_get()
      {
         Eina_Bool _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_obj_precise_is_inside_get());
            return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }

      virtual void precise_is_inside_set(bool precise_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_obj_precise_is_inside_set(::efl::eolian::to_c(precise_)));
      }

      virtual void size_hint_align_get(double* x_, double* y_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_obj_size_hint_align_get(x_, y_));
      }

      virtual void size_hint_align_set(double x_, double y_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_obj_size_hint_align_set(x_, y_));
      }

      virtual bool propagate_events_get()
      {
         Eina_Bool _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_obj_propagate_events_get());
            return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }

      virtual void propagate_events_set(bool propagate_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_obj_propagate_events_set(::efl::eolian::to_c(propagate_)));
      }

      virtual bool pass_events_get()
      {
         Eina_Bool _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_obj_pass_events_get());
            return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }

      virtual void pass_events_set(bool pass_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_obj_pass_events_set(::efl::eolian::to_c(pass_)));
      }

      virtual bool anti_alias_get()
      {
         Eina_Bool _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_obj_anti_alias_get());
            return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }

      virtual void anti_alias_set(bool anti_alias_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_obj_anti_alias_set(::efl::eolian::to_c(anti_alias_)));
      }

      virtual void * smart_data_get()
      {
         void * _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_obj_smart_data_get());
            return _tmp_ret;
      }

      virtual ::evas::object smart_clipped_clipper_get()
      {
         Evas_Object * _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_obj_smart_clipped_clipper_get());
            return ::efl::eolian::to_cxx<::evas::object>(_tmp_ret, std::tuple<std::false_type>());
      }

      virtual ::efl::eina::crange_list< ::evas::object > clipees_get()
      {
         const Eina_List * _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_obj_clipees_get());
            return ::efl::eolian::to_cxx<::efl::eina::crange_list< ::evas::object >>(_tmp_ret, std::tuple<std::false_type, std::false_type>());
      }

      virtual ::evas::object smart_parent_get()
      {
         Evas_Object * _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_obj_smart_parent_get());
            return ::efl::eolian::to_cxx<::evas::object>(_tmp_ret, std::tuple<std::false_type>());
      }

      virtual Evas_Display_Mode size_hint_display_mode_get()
      {
         Evas_Display_Mode _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_obj_size_hint_display_mode_get());
            return _tmp_ret;
      }

      virtual void size_hint_display_mode_set(Evas_Display_Mode dispmode_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_obj_size_hint_display_mode_set(dispmode_));
      }

      virtual bool no_render_get()
      {
         Eina_Bool _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_obj_no_render_get());
            return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }

      virtual void no_render_set(bool enable_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_obj_no_render_set(::efl::eolian::to_c(enable_)));
      }

   };
};


template<>
struct operation_description_class_size< ::evas::object >
{
   static constexpr int value = 
#if defined(OBJECT_PROTECTED) && defined(OBJECT_BETA)
      64
#elif defined(OBJECT_PROTECTED)
      64
#elif defined(OBJECT_BETA)
      64
#else
      64
#endif
      + operation_description_class_size<::eo::base >::value      + operation_description_class_size<::evas::common_interface >::value      + operation_description_class_size<::efl::gfx::base >::value      + operation_description_class_size<::efl::gfx::stack >::value;
};

template <typename T>
int initialize_operation_description(::efl::eo::detail::tag<::evas::object>
                                 , Eo_Op_Description* ops)
{
   int i = 0;
   (void)i;
   (void)ops;
   ops[i].func = reinterpret_cast<void*>(& ::evas_object_clipees_has_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_clipees_has);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_object_key_grab_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_key_grab);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_object_smart_type_check_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_smart_type_check);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_object_name_child_find_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_name_child_find);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_object_key_ungrab_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_key_ungrab);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_object_clip_unset_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_clip_unset);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_object_smart_move_children_relative_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_smart_move_children_relative);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_object_smart_type_check_ptr_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_smart_type_check_ptr);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_object_size_hint_max_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_size_hint_max_get);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_object_size_hint_max_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_size_hint_max_set);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_object_size_hint_request_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_size_hint_request_get);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_object_size_hint_request_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_size_hint_request_set);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_object_type_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_type_get);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_object_type_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_type_set);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_object_size_hint_min_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_size_hint_min_get);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_object_size_hint_min_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_size_hint_min_set);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_object_pointer_mode_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_pointer_mode_get);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_object_pointer_mode_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_pointer_mode_set);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_object_render_op_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_render_op_get);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_object_render_op_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_render_op_set);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_object_freeze_events_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_freeze_events_get);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_object_freeze_events_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_freeze_events_set);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_object_map_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_map_get);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_object_map_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_map_set);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_object_size_hint_aspect_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_size_hint_aspect_get);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_object_size_hint_aspect_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_size_hint_aspect_set);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_object_clip_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_clip_get);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_object_clip_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_clip_set);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_object_size_hint_padding_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_size_hint_padding_get);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_object_size_hint_padding_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_size_hint_padding_set);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_object_repeat_events_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_repeat_events_get);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_object_repeat_events_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_repeat_events_set);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_object_size_hint_weight_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_size_hint_weight_get);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_object_size_hint_weight_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_size_hint_weight_set);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_object_name_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_name_get);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_object_name_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_name_set);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_object_scale_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_scale_get);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_object_scale_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_scale_set);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_object_static_clip_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_static_clip_get);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_object_static_clip_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_static_clip_set);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_object_focus_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_focus_get);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_object_focus_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_focus_set);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_object_is_frame_object_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_is_frame_object_get);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_object_is_frame_object_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_is_frame_object_set);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_object_map_enable_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_map_enable_get);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_object_map_enable_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_map_enable_set);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_object_precise_is_inside_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_precise_is_inside_get);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_object_precise_is_inside_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_precise_is_inside_set);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_object_size_hint_align_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_size_hint_align_get);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_object_size_hint_align_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_size_hint_align_set);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_object_propagate_events_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_propagate_events_get);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_object_propagate_events_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_propagate_events_set);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_object_pass_events_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_pass_events_get);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_object_pass_events_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_pass_events_set);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_object_anti_alias_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_anti_alias_get);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_object_anti_alias_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_anti_alias_set);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_object_smart_data_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_smart_data_get);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_object_smart_clipped_clipper_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_smart_clipped_clipper_get);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_object_clipees_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_clipees_get);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_object_smart_parent_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_smart_parent_get);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_object_size_hint_display_mode_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_size_hint_display_mode_get);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_object_size_hint_display_mode_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_size_hint_display_mode_set);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_object_no_render_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_no_render_get);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_object_no_render_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_no_render_set);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   initialize_operation_description<T>(::efl::eo::detail::tag<::eo::base>(), &ops[operation_description_class_size< ::evas::object >::value]);
   initialize_operation_description<T>(::efl::eo::detail::tag<::evas::common_interface>(), &ops[operation_description_class_size< ::evas::object >::value + operation_description_class_size<::eo::base>::value]);
   initialize_operation_description<T>(::efl::eo::detail::tag<::efl::gfx::base>(), &ops[operation_description_class_size< ::evas::object >::value + operation_description_class_size<::eo::base>::value + operation_description_class_size<::evas::common_interface>::value]);
   initialize_operation_description<T>(::efl::eo::detail::tag<::efl::gfx::stack>(), &ops[operation_description_class_size< ::evas::object >::value + operation_description_class_size<::eo::base>::value + operation_description_class_size<::evas::common_interface>::value + operation_description_class_size<::efl::gfx::base>::value]);
   return 0;
}
inline Eo_Class const* get_eo_class(tag<::evas::object>)
{
   return (EVAS_OBJECT_CLASS);
}

} } }

/// @endcond

