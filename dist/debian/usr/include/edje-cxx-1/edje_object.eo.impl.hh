/// @cond EO_CXX_EO_IMPL

inline bool edje::object::part_table_clear(::efl::eina::string_view part_, bool clear_) const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::edje_obj_part_table_clear(::efl::eolian::to_c(part_), ::efl::eolian::to_c(clear_)));
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline Edje_External_Param_Type edje::object::part_external_param_type_get(::efl::eina::string_view part_, const char* param_) const
{
   Edje_External_Param_Type _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::edje_obj_part_external_param_type_get(::efl::eolian::to_c(part_), param_));
   return _tmp_ret;
}

inline void edje::object::part_text_select_allow_set(::efl::eina::string_view part_, bool allow_) const
{
   eo_do(_concrete_eo_ptr(), ::edje_obj_part_text_select_allow_set(::efl::eolian::to_c(part_), ::efl::eolian::to_c(allow_)));
}

inline ::efl::eina::string_view edje::object::part_state_get(::efl::eina::string_view part_, double* val_ret_) const
{
   const char * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::edje_obj_part_state_get(::efl::eolian::to_c(part_), val_ret_));
   return ::efl::eolian::to_cxx<::efl::eina::string_view>(_tmp_ret, std::tuple<std::false_type>());
}

inline void * edje::object::text_markup_filter_callback_del_full(::efl::eina::string_view part_, Edje_Markup_Filter_Cb func_, void * data_) const
{
   void * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::edje_obj_text_markup_filter_callback_del_full(::efl::eolian::to_c(part_), func_, data_));
   return _tmp_ret;
}

inline bool edje::object::part_drag_step_set(::efl::eina::string_view part_, double dx_, double dy_) const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::edje_obj_part_drag_step_set(::efl::eolian::to_c(part_), dx_, dy_));
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline bool edje::object::part_drag_step_get(::efl::eina::string_view part_, double* dx_, double* dy_) const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::edje_obj_part_drag_step_get(::efl::eolian::to_c(part_), dx_, dy_));
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline void * edje::object::part_text_imf_context_get(::efl::eina::string_view part_) const
{
   void * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::edje_obj_part_text_imf_context_get(::efl::eolian::to_c(part_)));
   return _tmp_ret;
}

inline void edje::object::part_text_select_begin(::efl::eina::string_view part_) const
{
   eo_do(_concrete_eo_ptr(), ::edje_obj_part_text_select_begin(::efl::eolian::to_c(part_)));
}

inline ::efl::eina::string_view edje::object::part_text_style_user_peek(::efl::eina::string_view part_) const
{
   const char * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::edje_obj_part_text_style_user_peek(::efl::eolian::to_c(part_)));
   return ::efl::eolian::to_cxx<::efl::eina::string_view>(_tmp_ret, std::tuple<std::false_type>());
}

template <typename F_func_>
inline void * edje::object::signal_callback_del(::efl::eina::string_view emission_, ::efl::eina::string_view source_, F_func_ && func_) const
{
   void * _tmp_ret;
   typedef typename std::remove_reference<F_func_>::type _no_ref_F_func_;
   _no_ref_F_func_* _tmp_func_ = new _no_ref_F_func_(std::forward< F_func_ >(func_));
   eo_do(_concrete_eo_ptr(), eo_event_callback_add(EO_EV_DEL, &::efl::eolian::free_callback_calback<_no_ref_F_func_>, _tmp_func_));

   eo_do(_concrete_eo_ptr(), _tmp_ret = ::edje_obj_signal_callback_del(::efl::eolian::to_c(emission_), ::efl::eolian::to_c(source_), ::efl::eolian::get_callback<Edje_Signal_Cb, _no_ref_F_func_ >(), _tmp_func_));
   return _tmp_ret;
}

inline bool edje::object::part_text_cursor_next(::efl::eina::string_view part_, Edje_Cursor cur_) const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::edje_obj_part_text_cursor_next(::efl::eolian::to_c(part_), cur_));
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline void edje::object::part_text_style_user_push(::efl::eina::string_view part_, ::efl::eina::string_view style_) const
{
   eo_do(_concrete_eo_ptr(), ::edje_obj_part_text_style_user_push(::efl::eolian::to_c(part_), ::efl::eolian::to_c(style_)));
}

inline void edje::object::part_text_append(::efl::eina::string_view part_, ::efl::eina::string_view text_) const
{
   eo_do(_concrete_eo_ptr(), ::edje_obj_part_text_append(::efl::eolian::to_c(part_), ::efl::eolian::to_c(text_)));
}

inline bool edje::object::part_geometry_get(::efl::eina::string_view part_, Evas_Coord* x_, Evas_Coord* y_, Evas_Coord* w_, Evas_Coord* h_) const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::edje_obj_part_geometry_get(::efl::eolian::to_c(part_), x_, y_, w_, h_));
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline void edje::object::part_text_input_panel_hide(::efl::eina::string_view part_) const
{
   eo_do(_concrete_eo_ptr(), ::edje_obj_part_text_input_panel_hide(::efl::eolian::to_c(part_)));
}

inline bool edje::object::part_text_item_geometry_get(::efl::eina::string_view part_, ::efl::eina::string_view item_, Evas_Coord* cx_, Evas_Coord* cy_, Evas_Coord* cw_, Evas_Coord* ch_) const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::edje_obj_part_text_item_geometry_get(::efl::eolian::to_c(part_), ::efl::eolian::to_c(item_), cx_, cy_, cw_, ch_));
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline bool edje::object::part_table_unpack(::efl::eina::string_view part_, ::evas::object child_obj_) const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::edje_obj_part_table_unpack(::efl::eolian::to_c(part_), ::efl::eolian::to_c(child_obj_)));
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline void edje::object::part_text_select_abort(::efl::eina::string_view part_) const
{
   eo_do(_concrete_eo_ptr(), ::edje_obj_part_text_select_abort(::efl::eolian::to_c(part_)));
}

inline void * edje::object::text_insert_filter_callback_del_full(::efl::eina::string_view part_, Edje_Text_Filter_Cb func_, void * data_) const
{
   void * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::edje_obj_text_insert_filter_callback_del_full(::efl::eolian::to_c(part_), func_, data_));
   return _tmp_ret;
}

inline void edje::object::part_text_style_user_pop(::efl::eina::string_view part_) const
{
   eo_do(_concrete_eo_ptr(), ::edje_obj_part_text_style_user_pop(::efl::eolian::to_c(part_)));
}

inline void edje::object::part_text_input_panel_imdata_set(::efl::eina::string_view part_, const void * data_, int len_) const
{
   eo_do(_concrete_eo_ptr(), ::edje_obj_part_text_input_panel_imdata_set(::efl::eolian::to_c(part_), data_, len_));
}

inline void edje::object::part_text_input_panel_imdata_get(::efl::eina::string_view part_, void * data_, int * len_) const
{
   eo_do(_concrete_eo_ptr(), ::edje_obj_part_text_input_panel_imdata_get(::efl::eolian::to_c(part_), data_, len_));
}

inline void edje::object::part_text_insert(::efl::eina::string_view part_, ::efl::eina::string_view text_) const
{
   eo_do(_concrete_eo_ptr(), ::edje_obj_part_text_insert(::efl::eolian::to_c(part_), ::efl::eolian::to_c(text_)));
}

inline ::evas::object edje::object::part_box_remove_at(::efl::eina::string_view part_, unsigned int pos_) const
{
   Evas_Object * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::edje_obj_part_box_remove_at(::efl::eolian::to_c(part_), pos_));
   return ::efl::eolian::to_cxx<::evas::object>(_tmp_ret, std::tuple<std::false_type>());
}

inline void edje::object::part_text_cursor_copy(::efl::eina::string_view part_, Edje_Cursor src_, Edje_Cursor dst_) const
{
   eo_do(_concrete_eo_ptr(), ::edje_obj_part_text_cursor_copy(::efl::eolian::to_c(part_), src_, dst_));
}

inline bool edje::object::parts_extends_calc(Evas_Coord* x_, Evas_Coord* y_, Evas_Coord* w_, Evas_Coord* h_) const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::edje_obj_parts_extends_calc(x_, y_, w_, h_));
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline bool edje::object::part_drag_value_set(::efl::eina::string_view part_, double dx_, double dy_) const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::edje_obj_part_drag_value_set(::efl::eolian::to_c(part_), dx_, dy_));
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline bool edje::object::part_drag_value_get(::efl::eina::string_view part_, double* dx_, double* dy_) const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::edje_obj_part_drag_value_get(::efl::eolian::to_c(part_), dx_, dy_));
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline void edje::object::calc_force() const
{
   eo_do(_concrete_eo_ptr(), ::edje_obj_calc_force());
}

inline void edje::object::part_text_cursor_pos_set(::efl::eina::string_view part_, Edje_Cursor cur_, int pos_) const
{
   eo_do(_concrete_eo_ptr(), ::edje_obj_part_text_cursor_pos_set(::efl::eolian::to_c(part_), cur_, pos_));
}

inline int edje::object::part_text_cursor_pos_get(::efl::eina::string_view part_, Edje_Cursor cur_) const
{
   int _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::edje_obj_part_text_cursor_pos_get(::efl::eolian::to_c(part_), cur_));
   return _tmp_ret;
}

inline int edje::object::freeze() const
{
   int _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::edje_obj_freeze());
   return _tmp_ret;
}

inline char * edje::object::part_text_cursor_content_get(::efl::eina::string_view part_, Edje_Cursor cur_) const
{
   char * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::edje_obj_part_text_cursor_content_get(::efl::eolian::to_c(part_), cur_));
   return _tmp_ret;
}

inline void edje::object::part_text_input_panel_layout_set(::efl::eina::string_view part_, Edje_Input_Panel_Layout layout_) const
{
   eo_do(_concrete_eo_ptr(), ::edje_obj_part_text_input_panel_layout_set(::efl::eolian::to_c(part_), layout_));
}

inline Edje_Input_Panel_Layout edje::object::part_text_input_panel_layout_get(::efl::eina::string_view part_) const
{
   Edje_Input_Panel_Layout _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::edje_obj_part_text_input_panel_layout_get(::efl::eolian::to_c(part_)));
   return _tmp_ret;
}

inline bool edje::object::part_table_pack(::efl::eina::string_view part_, ::evas::object child_obj_, unsigned short col_, unsigned short row_, unsigned short colspan_, unsigned short rowspan_) const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::edje_obj_part_table_pack(::efl::eolian::to_c(part_), ::efl::eolian::to_c(child_obj_), col_, row_, colspan_, rowspan_));
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline void edje::object::part_text_input_panel_language_set(::efl::eina::string_view part_, Edje_Input_Panel_Lang lang_) const
{
   eo_do(_concrete_eo_ptr(), ::edje_obj_part_text_input_panel_language_set(::efl::eolian::to_c(part_), lang_));
}

inline Edje_Input_Panel_Lang edje::object::part_text_input_panel_language_get(::efl::eina::string_view part_) const
{
   Edje_Input_Panel_Lang _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::edje_obj_part_text_input_panel_language_get(::efl::eolian::to_c(part_)));
   return _tmp_ret;
}

inline bool edje::object::part_table_col_row_size_get(::efl::eina::string_view part_, int* cols_, int* rows_) const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::edje_obj_part_table_col_row_size_get(::efl::eolian::to_c(part_), cols_, rows_));
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline ::evas::object edje::object::part_external_object_get(::efl::eina::string_view part_) const
{
   Evas_Object * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::edje_obj_part_external_object_get(::efl::eolian::to_c(part_)));
   return ::efl::eolian::to_cxx<::evas::object>(_tmp_ret, std::tuple<std::false_type>());
}

inline ::evas::object edje::object::part_external_content_get(::efl::eina::string_view part_, const char* content_) const
{
   Evas_Object * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::edje_obj_part_external_content_get(::efl::eolian::to_c(part_), content_));
   return ::efl::eolian::to_cxx<::evas::object>(_tmp_ret, std::tuple<std::false_type>());
}

inline bool edje::object::preload(bool cancel_) const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::edje_obj_preload(::efl::eolian::to_c(cancel_)));
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline void edje::object::part_text_input_panel_enabled_set(::efl::eina::string_view part_, bool enabled_) const
{
   eo_do(_concrete_eo_ptr(), ::edje_obj_part_text_input_panel_enabled_set(::efl::eolian::to_c(part_), ::efl::eolian::to_c(enabled_)));
}

inline bool edje::object::part_text_input_panel_enabled_get(::efl::eina::string_view part_) const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::edje_obj_part_text_input_panel_enabled_get(::efl::eolian::to_c(part_)));
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline void edje::object::part_text_select_extend(::efl::eina::string_view part_) const
{
   eo_do(_concrete_eo_ptr(), ::edje_obj_part_text_select_extend(::efl::eolian::to_c(part_)));
}

inline bool edje::object::part_box_insert_at(::efl::eina::string_view part_, ::evas::object child_, unsigned int pos_) const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::edje_obj_part_box_insert_at(::efl::eolian::to_c(part_), ::efl::eolian::to_c(child_), pos_));
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline ::efl::eina::crange_list< const Evas_Textblock_Rectangle * > edje::object::part_text_anchor_geometry_get(::efl::eina::string_view part_, ::efl::eina::string_view anchor_) const
{
   const Eina_List * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::edje_obj_part_text_anchor_geometry_get(::efl::eolian::to_c(part_), ::efl::eolian::to_c(anchor_)));
   return ::efl::eolian::to_cxx<::efl::eina::crange_list< const Evas_Textblock_Rectangle * >>(_tmp_ret, std::tuple<std::false_type, std::false_type>());
}

inline bool edje::object::part_text_cursor_down(::efl::eina::string_view part_, Edje_Cursor cur_) const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::edje_obj_part_text_cursor_down(::efl::eolian::to_c(part_), cur_));
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline bool edje::object::part_drag_page_set(::efl::eina::string_view part_, double dx_, double dy_) const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::edje_obj_part_drag_page_set(::efl::eolian::to_c(part_), dx_, dy_));
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline bool edje::object::part_drag_page_get(::efl::eina::string_view part_, double* dx_, double* dy_) const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::edje_obj_part_drag_page_get(::efl::eolian::to_c(part_), dx_, dy_));
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline bool edje::object::part_box_prepend(::efl::eina::string_view part_, ::evas::object child_) const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::edje_obj_part_box_prepend(::efl::eolian::to_c(part_), ::efl::eolian::to_c(child_)));
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline void edje::object::signal_emit(::efl::eina::string_view emission_, ::efl::eina::string_view source_) const
{
   eo_do(_concrete_eo_ptr(), ::edje_obj_signal_emit(::efl::eolian::to_c(emission_), ::efl::eolian::to_c(source_)));
}

inline void edje::object::part_text_input_panel_layout_variation_set(::efl::eina::string_view part_, int variation_) const
{
   eo_do(_concrete_eo_ptr(), ::edje_obj_part_text_input_panel_layout_variation_set(::efl::eolian::to_c(part_), variation_));
}

inline int edje::object::part_text_input_panel_layout_variation_get(::efl::eina::string_view part_) const
{
   int _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::edje_obj_part_text_input_panel_layout_variation_get(::efl::eolian::to_c(part_)));
   return _tmp_ret;
}

inline void edje::object::message_send(Edje_Message_Type type_, int id_, void * msg_) const
{
   eo_do(_concrete_eo_ptr(), ::edje_obj_message_send(type_, id_, msg_));
}

inline void edje::object::part_text_select_none(::efl::eina::string_view part_) const
{
   eo_do(_concrete_eo_ptr(), ::edje_obj_part_text_select_none(::efl::eolian::to_c(part_)));
}

inline ::evas::object edje::object::part_object_get(::efl::eina::string_view part_) const
{
   const Evas_Object * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::edje_obj_part_object_get(::efl::eolian::to_c(part_)));
   return ::efl::eolian::to_cxx<::evas::object>(_tmp_ret, std::tuple<std::false_type>());
}

inline bool edje::object::part_drag_size_set(::efl::eina::string_view part_, double dw_, double dh_) const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::edje_obj_part_drag_size_set(::efl::eolian::to_c(part_), dw_, dh_));
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline bool edje::object::part_drag_size_get(::efl::eina::string_view part_, double* dw_, double* dh_) const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::edje_obj_part_drag_size_get(::efl::eolian::to_c(part_), dw_, dh_));
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline void * edje::object::text_insert_filter_callback_del(::efl::eina::string_view part_, Edje_Text_Filter_Cb func_) const
{
   void * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::edje_obj_text_insert_filter_callback_del(::efl::eolian::to_c(part_), func_));
   return _tmp_ret;
}

inline Edje_Drag_Dir edje::object::part_drag_dir_get(::efl::eina::string_view part_) const
{
   Edje_Drag_Dir _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::edje_obj_part_drag_dir_get(::efl::eolian::to_c(part_)));
   return _tmp_ret;
}

inline bool edje::object::part_text_unescaped_set(::efl::eina::string_view part_, ::efl::eina::string_view text_to_escape_) const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::edje_obj_part_text_unescaped_set(::efl::eolian::to_c(part_), ::efl::eolian::to_c(text_to_escape_)));
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline char * edje::object::part_text_unescaped_get(::efl::eina::string_view part_) const
{
   char * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::edje_obj_part_text_unescaped_get(::efl::eolian::to_c(part_)));
   return _tmp_ret;
}

template <typename F_func_>
inline void edje::object::signal_callback_add(::efl::eina::string_view emission_, ::efl::eina::string_view source_, F_func_ && func_) const
{
   typedef typename std::remove_reference<F_func_>::type _no_ref_F_func_;
   _no_ref_F_func_* _tmp_func_ = new _no_ref_F_func_(std::forward< F_func_ >(func_));
   eo_do(_concrete_eo_ptr(), eo_event_callback_add(EO_EV_DEL, &::efl::eolian::free_callback_calback<_no_ref_F_func_>, _tmp_func_));

   eo_do(_concrete_eo_ptr(), ::edje_obj_signal_callback_add(::efl::eolian::to_c(emission_), ::efl::eolian::to_c(source_), ::efl::eolian::get_callback<Edje_Signal_Cb, _no_ref_F_func_ >(), _tmp_func_));
}

inline void edje::object::part_text_select_all(::efl::eina::string_view part_) const
{
   eo_do(_concrete_eo_ptr(), ::edje_obj_part_text_select_all(::efl::eolian::to_c(part_)));
}

inline void edje::object::part_text_input_panel_return_key_disabled_set(::efl::eina::string_view part_, bool disabled_) const
{
   eo_do(_concrete_eo_ptr(), ::edje_obj_part_text_input_panel_return_key_disabled_set(::efl::eolian::to_c(part_), ::efl::eolian::to_c(disabled_)));
}

inline bool edje::object::part_text_input_panel_return_key_disabled_get(::efl::eina::string_view part_) const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::edje_obj_part_text_input_panel_return_key_disabled_get(::efl::eolian::to_c(part_)));
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline void edje::object::part_text_autocapital_type_set(::efl::eina::string_view part_, Edje_Text_Autocapital_Type autocapital_type_) const
{
   eo_do(_concrete_eo_ptr(), ::edje_obj_part_text_autocapital_type_set(::efl::eolian::to_c(part_), autocapital_type_));
}

inline Edje_Text_Autocapital_Type edje::object::part_text_autocapital_type_get(::efl::eina::string_view part_) const
{
   Edje_Text_Autocapital_Type _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::edje_obj_part_text_autocapital_type_get(::efl::eolian::to_c(part_)));
   return _tmp_ret;
}

inline void edje::object::part_unswallow(::evas::object obj_swallow_) const
{
   eo_do(_concrete_eo_ptr(), ::edje_obj_part_unswallow(::efl::eolian::to_c(obj_swallow_)));
}

inline void edje::object::part_text_prediction_allow_set(::efl::eina::string_view part_, bool prediction_) const
{
   eo_do(_concrete_eo_ptr(), ::edje_obj_part_text_prediction_allow_set(::efl::eolian::to_c(part_), ::efl::eolian::to_c(prediction_)));
}

inline bool edje::object::part_text_prediction_allow_get(::efl::eina::string_view part_) const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::edje_obj_part_text_prediction_allow_get(::efl::eolian::to_c(part_)));
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline ::efl::eina::string_view edje::object::data_get(::efl::eina::string_view key_) const
{
   const char * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::edje_obj_data_get(::efl::eolian::to_c(key_)));
   return ::efl::eolian::to_cxx<::efl::eina::string_view>(_tmp_ret, std::tuple<std::false_type>());
}

inline void edje::object::text_markup_filter_callback_add(::efl::eina::string_view part_, Edje_Markup_Filter_Cb func_, void * data_) const
{
   eo_do(_concrete_eo_ptr(), ::edje_obj_text_markup_filter_callback_add(::efl::eolian::to_c(part_), func_, data_));
}

inline void edje::object::message_signal_process() const
{
   eo_do(_concrete_eo_ptr(), ::edje_obj_message_signal_process());
}

inline ::evas::object edje::object::part_box_remove(::efl::eina::string_view part_, ::evas::object child_) const
{
   Evas_Object * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::edje_obj_part_box_remove(::efl::eolian::to_c(part_), ::efl::eolian::to_c(child_)));
   return ::efl::eolian::to_cxx<::evas::object>(_tmp_ret, std::tuple<std::false_type>());
}

inline int edje::object::thaw() const
{
   int _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::edje_obj_thaw());
   return _tmp_ret;
}

inline ::evas::object edje::object::part_swallow_get(::efl::eina::string_view part_) const
{
   Evas_Object * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::edje_obj_part_swallow_get(::efl::eolian::to_c(part_)));
   return ::efl::eolian::to_cxx<::evas::object>(_tmp_ret, std::tuple<std::false_type>());
}

inline void edje::object::part_text_imf_context_reset(::efl::eina::string_view part_) const
{
   eo_do(_concrete_eo_ptr(), ::edje_obj_part_text_imf_context_reset(::efl::eolian::to_c(part_)));
}

inline void edje::object::part_text_input_panel_return_key_type_set(::efl::eina::string_view part_, Edje_Input_Panel_Return_Key_Type return_key_type_) const
{
   eo_do(_concrete_eo_ptr(), ::edje_obj_part_text_input_panel_return_key_type_set(::efl::eolian::to_c(part_), return_key_type_));
}

inline Edje_Input_Panel_Return_Key_Type edje::object::part_text_input_panel_return_key_type_get(::efl::eina::string_view part_) const
{
   Edje_Input_Panel_Return_Key_Type _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::edje_obj_part_text_input_panel_return_key_type_get(::efl::eolian::to_c(part_)));
   return _tmp_ret;
}

inline ::evas::object edje::object::part_table_child_get(::efl::eina::string_view part_, unsigned int col_, unsigned int row_) const
{
   Evas_Object * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::edje_obj_part_table_child_get(::efl::eolian::to_c(part_), col_, row_));
   return ::efl::eolian::to_cxx<::evas::object>(_tmp_ret, std::tuple<std::false_type>());
}

inline bool edje::object::part_box_insert_before(::efl::eina::string_view part_, ::evas::object child_, ::evas::object reference_) const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::edje_obj_part_box_insert_before(::efl::eolian::to_c(part_), ::efl::eolian::to_c(child_), ::efl::eolian::to_c(reference_)));
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline bool edje::object::part_external_param_set(::efl::eina::string_view part_, const Edje_External_Param * param_) const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::edje_obj_part_external_param_set(::efl::eolian::to_c(part_), param_));
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline bool edje::object::part_external_param_get(::efl::eina::string_view part_, Edje_External_Param* param_) const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::edje_obj_part_external_param_get(::efl::eolian::to_c(part_), param_));
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline void edje::object::size_min_calc(Evas_Coord* minw_, Evas_Coord* minh_) const
{
   eo_do(_concrete_eo_ptr(), ::edje_obj_size_min_calc(minw_, minh_));
}

inline bool edje::object::part_box_append(::efl::eina::string_view part_, ::evas::object child_) const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::edje_obj_part_box_append(::efl::eolian::to_c(part_), ::efl::eolian::to_c(child_)));
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline void edje::object::size_min_restricted_calc(Evas_Coord* minw_, Evas_Coord* minh_, Evas_Coord restrictedw_, Evas_Coord restrictedh_) const
{
   eo_do(_concrete_eo_ptr(), ::edje_obj_size_min_restricted_calc(minw_, minh_, restrictedw_, restrictedh_));
}

inline bool edje::object::part_box_remove_all(::efl::eina::string_view part_, bool clear_) const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::edje_obj_part_box_remove_all(::efl::eolian::to_c(part_), ::efl::eolian::to_c(clear_)));
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline bool edje::object::part_drag_page(::efl::eina::string_view part_, double dx_, double dy_) const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::edje_obj_part_drag_page(::efl::eolian::to_c(part_), dx_, dy_));
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline bool edje::object::part_text_set(::efl::eina::string_view part_, ::efl::eina::string_view text_) const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::edje_obj_part_text_set(::efl::eolian::to_c(part_), ::efl::eolian::to_c(text_)));
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline ::efl::eina::string_view edje::object::part_text_get(::efl::eina::string_view part_) const
{
   const char * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::edje_obj_part_text_get(::efl::eolian::to_c(part_)));
   return ::efl::eolian::to_cxx<::efl::eina::string_view>(_tmp_ret, std::tuple<std::false_type>());
}

inline void edje::object::part_text_input_panel_show_on_demand_set(::efl::eina::string_view part_, bool ondemand_) const
{
   eo_do(_concrete_eo_ptr(), ::edje_obj_part_text_input_panel_show_on_demand_set(::efl::eolian::to_c(part_), ::efl::eolian::to_c(ondemand_)));
}

inline bool edje::object::part_text_input_panel_show_on_demand_get(::efl::eina::string_view part_) const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::edje_obj_part_text_input_panel_show_on_demand_get(::efl::eolian::to_c(part_)));
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline void edje::object::part_text_input_hint_set(::efl::eina::string_view part_, Edje_Input_Hints input_hints_) const
{
   eo_do(_concrete_eo_ptr(), ::edje_obj_part_text_input_hint_set(::efl::eolian::to_c(part_), input_hints_));
}

inline Edje_Input_Hints edje::object::part_text_input_hint_get(::efl::eina::string_view part_) const
{
   Edje_Input_Hints _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::edje_obj_part_text_input_hint_get(::efl::eolian::to_c(part_)));
   return _tmp_ret;
}

inline ::efl::eina::string_view edje::object::part_text_selection_get(::efl::eina::string_view part_) const
{
   const char * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::edje_obj_part_text_selection_get(::efl::eolian::to_c(part_)));
   return ::efl::eolian::to_cxx<::efl::eina::string_view>(_tmp_ret, std::tuple<std::false_type>());
}

inline bool edje::object::part_text_cursor_is_format_get(::efl::eina::string_view part_, Edje_Cursor cur_) const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::edje_obj_part_text_cursor_is_format_get(::efl::eolian::to_c(part_), cur_));
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline bool edje::object::text_class_get(::efl::eina::string_view text_class_, const char ** font_, Evas_Font_Size* size_) const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::edje_obj_text_class_get(::efl::eolian::to_c(text_class_), font_, size_));
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline void edje::object::text_class_del(::efl::eina::string_view text_class_) const
{
   eo_do(_concrete_eo_ptr(), ::edje_obj_text_class_del(::efl::eolian::to_c(text_class_)));
}

inline bool edje::object::color_class_set(::efl::eina::string_view color_class_, int r_, int g_, int b_, int a_, int r2_, int g2_, int b2_, int a2_, int r3_, int g3_, int b3_, int a3_) const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::edje_obj_color_class_set(::efl::eolian::to_c(color_class_), r_, g_, b_, a_, r2_, g2_, b2_, a2_, r3_, g3_, b3_, a3_));
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline bool edje::object::color_class_get(::efl::eina::string_view color_class_, int* r_, int* g_, int* b_, int* a_, int* r2_, int* g2_, int* b2_, int* a2_, int* r3_, int* g3_, int* b3_, int* a3_) const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::edje_obj_color_class_get(::efl::eolian::to_c(color_class_), r_, g_, b_, a_, r2_, g2_, b2_, a2_, r3_, g3_, b3_, a3_));
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline ::efl::eina::string_view edje::object::color_class_description_get(::efl::eina::string_view color_class_) const
{
   const char * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::edje_obj_color_class_description_get(::efl::eolian::to_c(color_class_)));
   return ::efl::eolian::to_cxx<::efl::eina::string_view>(_tmp_ret, std::tuple<std::false_type>());
}

inline bool edje::object::color_class_clear() const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::edje_obj_color_class_clear());
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline void edje::object::color_class_del(::efl::eina::string_view color_class_) const
{
   eo_do(_concrete_eo_ptr(), ::edje_obj_color_class_del(::efl::eolian::to_c(color_class_)));
}

inline bool edje::object::size_class_set(::efl::eina::string_view size_class_, int minw_, int minh_, int maxw_, int maxh_) const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::edje_obj_size_class_set(::efl::eolian::to_c(size_class_), minw_, minh_, maxw_, maxh_));
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline bool edje::object::size_class_get(::efl::eina::string_view size_class_, int* minw_, int* minh_, int* maxw_, int* maxh_) const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::edje_obj_size_class_get(::efl::eolian::to_c(size_class_), minw_, minh_, maxw_, maxh_));
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline void edje::object::size_class_del(::efl::eina::string_view size_class_) const
{
   eo_do(_concrete_eo_ptr(), ::edje_obj_size_class_del(::efl::eolian::to_c(size_class_)));
}

inline bool edje::object::part_drag_step(::efl::eina::string_view part_, double dx_, double dy_) const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::edje_obj_part_drag_step(::efl::eolian::to_c(part_), dx_, dy_));
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline bool edje::object::part_text_cursor_up(::efl::eina::string_view part_, Edje_Cursor cur_) const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::edje_obj_part_text_cursor_up(::efl::eolian::to_c(part_), cur_));
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline void edje::object::part_text_cursor_geometry_get(::efl::eina::string_view part_, Evas_Coord* x_, Evas_Coord* y_, Evas_Coord* w_, Evas_Coord* h_) const
{
   eo_do(_concrete_eo_ptr(), ::edje_obj_part_text_cursor_geometry_get(::efl::eolian::to_c(part_), x_, y_, w_, h_));
}

inline ::efl::eina::crange_list< ::efl::eina::string_view > edje::object::part_text_anchor_list_get(::efl::eina::string_view part_) const
{
   const Eina_List * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::edje_obj_part_text_anchor_list_get(::efl::eolian::to_c(part_)));
   return ::efl::eolian::to_cxx<::efl::eina::crange_list< ::efl::eina::string_view >>(_tmp_ret, std::tuple<std::false_type, std::false_type>());
}

inline void edje::object::text_insert_filter_callback_add(::efl::eina::string_view part_, Edje_Text_Filter_Cb func_, void * data_) const
{
   eo_do(_concrete_eo_ptr(), ::edje_obj_text_insert_filter_callback_add(::efl::eolian::to_c(part_), func_, data_));
}

inline void edje::object::part_text_input_panel_show(::efl::eina::string_view part_) const
{
   eo_do(_concrete_eo_ptr(), ::edje_obj_part_text_input_panel_show(::efl::eolian::to_c(part_)));
}

inline bool edje::object::part_exists(::efl::eina::string_view part_) const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::edje_obj_part_exists(::efl::eolian::to_c(part_)));
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline void * edje::object::text_markup_filter_callback_del(::efl::eina::string_view part_, Edje_Markup_Filter_Cb func_) const
{
   void * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::edje_obj_text_markup_filter_callback_del(::efl::eolian::to_c(part_), func_));
   return _tmp_ret;
}

inline bool edje::object::part_text_cursor_is_visible_format_get(::efl::eina::string_view part_, Edje_Cursor cur_) const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::edje_obj_part_text_cursor_is_visible_format_get(::efl::eolian::to_c(part_), cur_));
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline void edje::object::part_text_user_insert(::efl::eina::string_view part_, ::efl::eina::string_view text_) const
{
   eo_do(_concrete_eo_ptr(), ::edje_obj_part_text_user_insert(::efl::eolian::to_c(part_), ::efl::eolian::to_c(text_)));
}

inline bool edje::object::part_text_cursor_prev(::efl::eina::string_view part_, Edje_Cursor cur_) const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::edje_obj_part_text_cursor_prev(::efl::eolian::to_c(part_), cur_));
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline ::efl::eina::crange_list< ::efl::eina::string_view > edje::object::part_text_item_list_get(::efl::eina::string_view part_) const
{
   const Eina_List * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::edje_obj_part_text_item_list_get(::efl::eolian::to_c(part_)));
   return ::efl::eolian::to_cxx<::efl::eina::crange_list< ::efl::eina::string_view >>(_tmp_ret, std::tuple<std::false_type, std::false_type>());
}

inline bool edje::object::part_swallow(::efl::eina::string_view part_, ::evas::object obj_swallow_) const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::edje_obj_part_swallow(::efl::eolian::to_c(part_), ::efl::eolian::to_c(obj_swallow_)));
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline bool edje::object::update_hints_get() const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::edje_obj_update_hints_get());
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline void edje::object::update_hints_set(bool update_) const
{
   eo_do(_concrete_eo_ptr(), ::edje_obj_update_hints_set(::efl::eolian::to_c(update_)));
}

inline bool edje::object::mirrored_get() const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::edje_obj_mirrored_get());
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline void edje::object::mirrored_set(bool rtl_) const
{
   eo_do(_concrete_eo_ptr(), ::edje_obj_mirrored_set(::efl::eolian::to_c(rtl_)));
}

inline ::efl::eina::string_view edje::object::language_get() const
{
   const char * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::edje_obj_language_get());
   return ::efl::eolian::to_cxx<::efl::eina::string_view>(_tmp_ret, std::tuple<std::false_type>());
}

inline void edje::object::language_set(::efl::eina::string_view language_) const
{
   eo_do(_concrete_eo_ptr(), ::edje_obj_language_set(::efl::eolian::to_c(language_)));
}

inline bool edje::object::animation_get() const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::edje_obj_animation_get());
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline void edje::object::animation_set(bool on_) const
{
   eo_do(_concrete_eo_ptr(), ::edje_obj_animation_set(::efl::eolian::to_c(on_)));
}

inline bool edje::object::play_get() const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::edje_obj_play_get());
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline void edje::object::play_set(bool play_) const
{
   eo_do(_concrete_eo_ptr(), ::edje_obj_play_set(::efl::eolian::to_c(play_)));
}

inline const Edje_Perspective * edje::object::perspective_get() const
{
   const Edje_Perspective * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::edje_obj_perspective_get());
   return _tmp_ret;
}

inline void edje::object::perspective_set(Edje_Perspective * ps_) const
{
   eo_do(_concrete_eo_ptr(), ::edje_obj_perspective_set(ps_));
}

inline double edje::object::scale_get() const
{
   double _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::edje_obj_scale_get());
   return _tmp_ret;
}

inline bool edje::object::scale_set(double scale_) const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::edje_obj_scale_set(scale_));
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline double edje::object::base_scale_get() const
{
   double _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::edje_obj_base_scale_get());
   return _tmp_ret;
}

inline void edje::object::text_change_cb_set(Edje_Text_Change_Cb func_, void * data_) const
{
   eo_do(_concrete_eo_ptr(), ::edje_obj_text_change_cb_set(func_, data_));
}

inline void edje::object::part_text_cursor_begin_set(::efl::eina::string_view part_, Edje_Cursor cur_) const
{
   eo_do(_concrete_eo_ptr(), ::edje_obj_part_text_cursor_begin_set(::efl::eolian::to_c(part_), cur_));
}

inline void edje::object::part_text_cursor_line_end_set(::efl::eina::string_view part_, Edje_Cursor cur_) const
{
   eo_do(_concrete_eo_ptr(), ::edje_obj_part_text_cursor_line_end_set(::efl::eolian::to_c(part_), cur_));
}

inline bool edje::object::text_class_set(::efl::eina::string_view text_class_, ::efl::eina::string_view font_, Evas_Font_Size size_) const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::edje_obj_text_class_set(::efl::eolian::to_c(text_class_), ::efl::eolian::to_c(font_), size_));
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline bool edje::object::part_text_cursor_coord_set(::efl::eina::string_view part_, Edje_Cursor cur_, Evas_Coord x_, Evas_Coord y_) const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::edje_obj_part_text_cursor_coord_set(::efl::eolian::to_c(part_), cur_, x_, y_));
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline void edje::object::part_text_cursor_end_set(::efl::eina::string_view part_, Edje_Cursor cur_) const
{
   eo_do(_concrete_eo_ptr(), ::edje_obj_part_text_cursor_end_set(::efl::eolian::to_c(part_), cur_));
}

inline bool edje::object::part_text_escaped_set(::efl::eina::string_view part_, ::efl::eina::string_view text_) const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::edje_obj_part_text_escaped_set(::efl::eolian::to_c(part_), ::efl::eolian::to_c(text_)));
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline void edje::object::item_provider_set(Edje_Item_Provider_Cb func_, void * data_) const
{
   eo_do(_concrete_eo_ptr(), ::edje_obj_item_provider_set(func_, data_));
}

inline void edje::object::part_text_cursor_line_begin_set(::efl::eina::string_view part_, Edje_Cursor cur_) const
{
   eo_do(_concrete_eo_ptr(), ::edje_obj_part_text_cursor_line_begin_set(::efl::eolian::to_c(part_), cur_));
}

inline void edje::object::message_handler_set(Edje_Message_Handler_Cb func_, void * data_) const
{
   eo_do(_concrete_eo_ptr(), ::edje_obj_message_handler_set(func_, data_));
}

inline void edje::object::size_min_get(Evas_Coord* minw_, Evas_Coord* minh_) const
{
   eo_do(_concrete_eo_ptr(), ::edje_obj_size_min_get(minw_, minh_));
}

inline ::efl::eina::range_list< ::efl::eina::string_view > edje::object::access_part_list_get() const
{
   Eina_List * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::edje_obj_access_part_list_get());
   return ::efl::eolian::to_cxx<::efl::eina::range_list< ::efl::eina::string_view >>(_tmp_ret, std::tuple<std::false_type, std::false_type>());
}

inline Edje_Load_Error edje::object::load_error_get() const
{
   Edje_Load_Error _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::edje_obj_load_error_get());
   return _tmp_ret;
}

inline void edje::object::size_max_get(Evas_Coord* maxw_, Evas_Coord* maxh_) const
{
   eo_do(_concrete_eo_ptr(), ::edje_obj_size_max_get(maxw_, maxh_));
}

inline double edje::object::transition_duration_factor_get() const
{
   double _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::edje_obj_transition_duration_factor_get());
   return _tmp_ret;
}

inline void edje::object::transition_duration_factor_set(double scale_) const
{
   eo_do(_concrete_eo_ptr(), ::edje_obj_transition_duration_factor_set(scale_));
}

inline bool eo_cxx::edje::object::part_table_clear(::efl::eina::string_view part_, bool clear_) const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::edje_obj_part_table_clear(::efl::eolian::to_c(part_), ::efl::eolian::to_c(clear_)));
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline Edje_External_Param_Type eo_cxx::edje::object::part_external_param_type_get(::efl::eina::string_view part_, const char* param_) const
{
   Edje_External_Param_Type _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::edje_obj_part_external_param_type_get(::efl::eolian::to_c(part_), param_));
   return _tmp_ret;
}

inline void eo_cxx::edje::object::part_text_select_allow_set(::efl::eina::string_view part_, bool allow_) const
{
   eo_do(_concrete_eo_ptr(), ::edje_obj_part_text_select_allow_set(::efl::eolian::to_c(part_), ::efl::eolian::to_c(allow_)));
}

inline ::efl::eina::string_view eo_cxx::edje::object::part_state_get(::efl::eina::string_view part_, double* val_ret_) const
{
   const char * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::edje_obj_part_state_get(::efl::eolian::to_c(part_), val_ret_));
   return ::efl::eolian::to_cxx<::efl::eina::string_view>(_tmp_ret, std::tuple<std::false_type>());
}

inline void * eo_cxx::edje::object::text_markup_filter_callback_del_full(::efl::eina::string_view part_, Edje_Markup_Filter_Cb func_, void * data_) const
{
   void * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::edje_obj_text_markup_filter_callback_del_full(::efl::eolian::to_c(part_), func_, data_));
   return _tmp_ret;
}

inline bool eo_cxx::edje::object::part_drag_step_set(::efl::eina::string_view part_, double dx_, double dy_) const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::edje_obj_part_drag_step_set(::efl::eolian::to_c(part_), dx_, dy_));
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline bool eo_cxx::edje::object::part_drag_step_get(::efl::eina::string_view part_, double* dx_, double* dy_) const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::edje_obj_part_drag_step_get(::efl::eolian::to_c(part_), dx_, dy_));
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline void * eo_cxx::edje::object::part_text_imf_context_get(::efl::eina::string_view part_) const
{
   void * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::edje_obj_part_text_imf_context_get(::efl::eolian::to_c(part_)));
   return _tmp_ret;
}

inline void eo_cxx::edje::object::part_text_select_begin(::efl::eina::string_view part_) const
{
   eo_do(_concrete_eo_ptr(), ::edje_obj_part_text_select_begin(::efl::eolian::to_c(part_)));
}

inline ::efl::eina::string_view eo_cxx::edje::object::part_text_style_user_peek(::efl::eina::string_view part_) const
{
   const char * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::edje_obj_part_text_style_user_peek(::efl::eolian::to_c(part_)));
   return ::efl::eolian::to_cxx<::efl::eina::string_view>(_tmp_ret, std::tuple<std::false_type>());
}

template <typename F_func_>
inline void * eo_cxx::edje::object::signal_callback_del(::efl::eina::string_view emission_, ::efl::eina::string_view source_, F_func_ && func_) const
{
   void * _tmp_ret;
   typedef typename std::remove_reference<F_func_>::type _no_ref_F_func_;
   _no_ref_F_func_* _tmp_func_ = new _no_ref_F_func_(std::forward< F_func_ >(func_));
   eo_do(_concrete_eo_ptr(), eo_event_callback_add(EO_EV_DEL, &::efl::eolian::free_callback_calback<_no_ref_F_func_>, _tmp_func_));

   eo_do(_concrete_eo_ptr(), _tmp_ret = ::edje_obj_signal_callback_del(::efl::eolian::to_c(emission_), ::efl::eolian::to_c(source_), ::efl::eolian::get_callback<Edje_Signal_Cb, _no_ref_F_func_ >(), _tmp_func_));
   return _tmp_ret;
}

inline bool eo_cxx::edje::object::part_text_cursor_next(::efl::eina::string_view part_, Edje_Cursor cur_) const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::edje_obj_part_text_cursor_next(::efl::eolian::to_c(part_), cur_));
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline void eo_cxx::edje::object::part_text_style_user_push(::efl::eina::string_view part_, ::efl::eina::string_view style_) const
{
   eo_do(_concrete_eo_ptr(), ::edje_obj_part_text_style_user_push(::efl::eolian::to_c(part_), ::efl::eolian::to_c(style_)));
}

inline void eo_cxx::edje::object::part_text_append(::efl::eina::string_view part_, ::efl::eina::string_view text_) const
{
   eo_do(_concrete_eo_ptr(), ::edje_obj_part_text_append(::efl::eolian::to_c(part_), ::efl::eolian::to_c(text_)));
}

inline bool eo_cxx::edje::object::part_geometry_get(::efl::eina::string_view part_, Evas_Coord* x_, Evas_Coord* y_, Evas_Coord* w_, Evas_Coord* h_) const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::edje_obj_part_geometry_get(::efl::eolian::to_c(part_), x_, y_, w_, h_));
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline void eo_cxx::edje::object::part_text_input_panel_hide(::efl::eina::string_view part_) const
{
   eo_do(_concrete_eo_ptr(), ::edje_obj_part_text_input_panel_hide(::efl::eolian::to_c(part_)));
}

inline bool eo_cxx::edje::object::part_text_item_geometry_get(::efl::eina::string_view part_, ::efl::eina::string_view item_, Evas_Coord* cx_, Evas_Coord* cy_, Evas_Coord* cw_, Evas_Coord* ch_) const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::edje_obj_part_text_item_geometry_get(::efl::eolian::to_c(part_), ::efl::eolian::to_c(item_), cx_, cy_, cw_, ch_));
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline bool eo_cxx::edje::object::part_table_unpack(::efl::eina::string_view part_, ::evas::object child_obj_) const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::edje_obj_part_table_unpack(::efl::eolian::to_c(part_), ::efl::eolian::to_c(child_obj_)));
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline void eo_cxx::edje::object::part_text_select_abort(::efl::eina::string_view part_) const
{
   eo_do(_concrete_eo_ptr(), ::edje_obj_part_text_select_abort(::efl::eolian::to_c(part_)));
}

inline void * eo_cxx::edje::object::text_insert_filter_callback_del_full(::efl::eina::string_view part_, Edje_Text_Filter_Cb func_, void * data_) const
{
   void * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::edje_obj_text_insert_filter_callback_del_full(::efl::eolian::to_c(part_), func_, data_));
   return _tmp_ret;
}

inline void eo_cxx::edje::object::part_text_style_user_pop(::efl::eina::string_view part_) const
{
   eo_do(_concrete_eo_ptr(), ::edje_obj_part_text_style_user_pop(::efl::eolian::to_c(part_)));
}

inline void eo_cxx::edje::object::part_text_input_panel_imdata_set(::efl::eina::string_view part_, const void * data_, int len_) const
{
   eo_do(_concrete_eo_ptr(), ::edje_obj_part_text_input_panel_imdata_set(::efl::eolian::to_c(part_), data_, len_));
}

inline void eo_cxx::edje::object::part_text_input_panel_imdata_get(::efl::eina::string_view part_, void * data_, int * len_) const
{
   eo_do(_concrete_eo_ptr(), ::edje_obj_part_text_input_panel_imdata_get(::efl::eolian::to_c(part_), data_, len_));
}

inline void eo_cxx::edje::object::part_text_insert(::efl::eina::string_view part_, ::efl::eina::string_view text_) const
{
   eo_do(_concrete_eo_ptr(), ::edje_obj_part_text_insert(::efl::eolian::to_c(part_), ::efl::eolian::to_c(text_)));
}

inline ::evas::object eo_cxx::edje::object::part_box_remove_at(::efl::eina::string_view part_, unsigned int pos_) const
{
   Evas_Object * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::edje_obj_part_box_remove_at(::efl::eolian::to_c(part_), pos_));
   return ::efl::eolian::to_cxx<::evas::object>(_tmp_ret, std::tuple<std::false_type>());
}

inline void eo_cxx::edje::object::part_text_cursor_copy(::efl::eina::string_view part_, Edje_Cursor src_, Edje_Cursor dst_) const
{
   eo_do(_concrete_eo_ptr(), ::edje_obj_part_text_cursor_copy(::efl::eolian::to_c(part_), src_, dst_));
}

inline bool eo_cxx::edje::object::parts_extends_calc(Evas_Coord* x_, Evas_Coord* y_, Evas_Coord* w_, Evas_Coord* h_) const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::edje_obj_parts_extends_calc(x_, y_, w_, h_));
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline bool eo_cxx::edje::object::part_drag_value_set(::efl::eina::string_view part_, double dx_, double dy_) const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::edje_obj_part_drag_value_set(::efl::eolian::to_c(part_), dx_, dy_));
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline bool eo_cxx::edje::object::part_drag_value_get(::efl::eina::string_view part_, double* dx_, double* dy_) const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::edje_obj_part_drag_value_get(::efl::eolian::to_c(part_), dx_, dy_));
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline void eo_cxx::edje::object::calc_force() const
{
   eo_do(_concrete_eo_ptr(), ::edje_obj_calc_force());
}

inline void eo_cxx::edje::object::part_text_cursor_pos_set(::efl::eina::string_view part_, Edje_Cursor cur_, int pos_) const
{
   eo_do(_concrete_eo_ptr(), ::edje_obj_part_text_cursor_pos_set(::efl::eolian::to_c(part_), cur_, pos_));
}

inline int eo_cxx::edje::object::part_text_cursor_pos_get(::efl::eina::string_view part_, Edje_Cursor cur_) const
{
   int _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::edje_obj_part_text_cursor_pos_get(::efl::eolian::to_c(part_), cur_));
   return _tmp_ret;
}

inline int eo_cxx::edje::object::freeze() const
{
   int _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::edje_obj_freeze());
   return _tmp_ret;
}

inline char * eo_cxx::edje::object::part_text_cursor_content_get(::efl::eina::string_view part_, Edje_Cursor cur_) const
{
   char * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::edje_obj_part_text_cursor_content_get(::efl::eolian::to_c(part_), cur_));
   return _tmp_ret;
}

inline void eo_cxx::edje::object::part_text_input_panel_layout_set(::efl::eina::string_view part_, Edje_Input_Panel_Layout layout_) const
{
   eo_do(_concrete_eo_ptr(), ::edje_obj_part_text_input_panel_layout_set(::efl::eolian::to_c(part_), layout_));
}

inline Edje_Input_Panel_Layout eo_cxx::edje::object::part_text_input_panel_layout_get(::efl::eina::string_view part_) const
{
   Edje_Input_Panel_Layout _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::edje_obj_part_text_input_panel_layout_get(::efl::eolian::to_c(part_)));
   return _tmp_ret;
}

inline bool eo_cxx::edje::object::part_table_pack(::efl::eina::string_view part_, ::evas::object child_obj_, unsigned short col_, unsigned short row_, unsigned short colspan_, unsigned short rowspan_) const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::edje_obj_part_table_pack(::efl::eolian::to_c(part_), ::efl::eolian::to_c(child_obj_), col_, row_, colspan_, rowspan_));
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline void eo_cxx::edje::object::part_text_input_panel_language_set(::efl::eina::string_view part_, Edje_Input_Panel_Lang lang_) const
{
   eo_do(_concrete_eo_ptr(), ::edje_obj_part_text_input_panel_language_set(::efl::eolian::to_c(part_), lang_));
}

inline Edje_Input_Panel_Lang eo_cxx::edje::object::part_text_input_panel_language_get(::efl::eina::string_view part_) const
{
   Edje_Input_Panel_Lang _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::edje_obj_part_text_input_panel_language_get(::efl::eolian::to_c(part_)));
   return _tmp_ret;
}

inline bool eo_cxx::edje::object::part_table_col_row_size_get(::efl::eina::string_view part_, int* cols_, int* rows_) const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::edje_obj_part_table_col_row_size_get(::efl::eolian::to_c(part_), cols_, rows_));
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline ::evas::object eo_cxx::edje::object::part_external_object_get(::efl::eina::string_view part_) const
{
   Evas_Object * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::edje_obj_part_external_object_get(::efl::eolian::to_c(part_)));
   return ::efl::eolian::to_cxx<::evas::object>(_tmp_ret, std::tuple<std::false_type>());
}

inline ::evas::object eo_cxx::edje::object::part_external_content_get(::efl::eina::string_view part_, const char* content_) const
{
   Evas_Object * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::edje_obj_part_external_content_get(::efl::eolian::to_c(part_), content_));
   return ::efl::eolian::to_cxx<::evas::object>(_tmp_ret, std::tuple<std::false_type>());
}

inline bool eo_cxx::edje::object::preload(bool cancel_) const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::edje_obj_preload(::efl::eolian::to_c(cancel_)));
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline void eo_cxx::edje::object::part_text_input_panel_enabled_set(::efl::eina::string_view part_, bool enabled_) const
{
   eo_do(_concrete_eo_ptr(), ::edje_obj_part_text_input_panel_enabled_set(::efl::eolian::to_c(part_), ::efl::eolian::to_c(enabled_)));
}

inline bool eo_cxx::edje::object::part_text_input_panel_enabled_get(::efl::eina::string_view part_) const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::edje_obj_part_text_input_panel_enabled_get(::efl::eolian::to_c(part_)));
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline void eo_cxx::edje::object::part_text_select_extend(::efl::eina::string_view part_) const
{
   eo_do(_concrete_eo_ptr(), ::edje_obj_part_text_select_extend(::efl::eolian::to_c(part_)));
}

inline bool eo_cxx::edje::object::part_box_insert_at(::efl::eina::string_view part_, ::evas::object child_, unsigned int pos_) const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::edje_obj_part_box_insert_at(::efl::eolian::to_c(part_), ::efl::eolian::to_c(child_), pos_));
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline ::efl::eina::crange_list< const Evas_Textblock_Rectangle * > eo_cxx::edje::object::part_text_anchor_geometry_get(::efl::eina::string_view part_, ::efl::eina::string_view anchor_) const
{
   const Eina_List * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::edje_obj_part_text_anchor_geometry_get(::efl::eolian::to_c(part_), ::efl::eolian::to_c(anchor_)));
   return ::efl::eolian::to_cxx<::efl::eina::crange_list< const Evas_Textblock_Rectangle * >>(_tmp_ret, std::tuple<std::false_type, std::false_type>());
}

inline bool eo_cxx::edje::object::part_text_cursor_down(::efl::eina::string_view part_, Edje_Cursor cur_) const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::edje_obj_part_text_cursor_down(::efl::eolian::to_c(part_), cur_));
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline bool eo_cxx::edje::object::part_drag_page_set(::efl::eina::string_view part_, double dx_, double dy_) const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::edje_obj_part_drag_page_set(::efl::eolian::to_c(part_), dx_, dy_));
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline bool eo_cxx::edje::object::part_drag_page_get(::efl::eina::string_view part_, double* dx_, double* dy_) const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::edje_obj_part_drag_page_get(::efl::eolian::to_c(part_), dx_, dy_));
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline bool eo_cxx::edje::object::part_box_prepend(::efl::eina::string_view part_, ::evas::object child_) const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::edje_obj_part_box_prepend(::efl::eolian::to_c(part_), ::efl::eolian::to_c(child_)));
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline void eo_cxx::edje::object::signal_emit(::efl::eina::string_view emission_, ::efl::eina::string_view source_) const
{
   eo_do(_concrete_eo_ptr(), ::edje_obj_signal_emit(::efl::eolian::to_c(emission_), ::efl::eolian::to_c(source_)));
}

inline void eo_cxx::edje::object::part_text_input_panel_layout_variation_set(::efl::eina::string_view part_, int variation_) const
{
   eo_do(_concrete_eo_ptr(), ::edje_obj_part_text_input_panel_layout_variation_set(::efl::eolian::to_c(part_), variation_));
}

inline int eo_cxx::edje::object::part_text_input_panel_layout_variation_get(::efl::eina::string_view part_) const
{
   int _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::edje_obj_part_text_input_panel_layout_variation_get(::efl::eolian::to_c(part_)));
   return _tmp_ret;
}

inline void eo_cxx::edje::object::message_send(Edje_Message_Type type_, int id_, void * msg_) const
{
   eo_do(_concrete_eo_ptr(), ::edje_obj_message_send(type_, id_, msg_));
}

inline void eo_cxx::edje::object::part_text_select_none(::efl::eina::string_view part_) const
{
   eo_do(_concrete_eo_ptr(), ::edje_obj_part_text_select_none(::efl::eolian::to_c(part_)));
}

inline ::evas::object eo_cxx::edje::object::part_object_get(::efl::eina::string_view part_) const
{
   const Evas_Object * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::edje_obj_part_object_get(::efl::eolian::to_c(part_)));
   return ::efl::eolian::to_cxx<::evas::object>(_tmp_ret, std::tuple<std::false_type>());
}

inline bool eo_cxx::edje::object::part_drag_size_set(::efl::eina::string_view part_, double dw_, double dh_) const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::edje_obj_part_drag_size_set(::efl::eolian::to_c(part_), dw_, dh_));
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline bool eo_cxx::edje::object::part_drag_size_get(::efl::eina::string_view part_, double* dw_, double* dh_) const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::edje_obj_part_drag_size_get(::efl::eolian::to_c(part_), dw_, dh_));
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline void * eo_cxx::edje::object::text_insert_filter_callback_del(::efl::eina::string_view part_, Edje_Text_Filter_Cb func_) const
{
   void * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::edje_obj_text_insert_filter_callback_del(::efl::eolian::to_c(part_), func_));
   return _tmp_ret;
}

inline Edje_Drag_Dir eo_cxx::edje::object::part_drag_dir_get(::efl::eina::string_view part_) const
{
   Edje_Drag_Dir _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::edje_obj_part_drag_dir_get(::efl::eolian::to_c(part_)));
   return _tmp_ret;
}

inline bool eo_cxx::edje::object::part_text_unescaped_set(::efl::eina::string_view part_, ::efl::eina::string_view text_to_escape_) const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::edje_obj_part_text_unescaped_set(::efl::eolian::to_c(part_), ::efl::eolian::to_c(text_to_escape_)));
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline char * eo_cxx::edje::object::part_text_unescaped_get(::efl::eina::string_view part_) const
{
   char * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::edje_obj_part_text_unescaped_get(::efl::eolian::to_c(part_)));
   return _tmp_ret;
}

template <typename F_func_>
inline void eo_cxx::edje::object::signal_callback_add(::efl::eina::string_view emission_, ::efl::eina::string_view source_, F_func_ && func_) const
{
   typedef typename std::remove_reference<F_func_>::type _no_ref_F_func_;
   _no_ref_F_func_* _tmp_func_ = new _no_ref_F_func_(std::forward< F_func_ >(func_));
   eo_do(_concrete_eo_ptr(), eo_event_callback_add(EO_EV_DEL, &::efl::eolian::free_callback_calback<_no_ref_F_func_>, _tmp_func_));

   eo_do(_concrete_eo_ptr(), ::edje_obj_signal_callback_add(::efl::eolian::to_c(emission_), ::efl::eolian::to_c(source_), ::efl::eolian::get_callback<Edje_Signal_Cb, _no_ref_F_func_ >(), _tmp_func_));
}

inline void eo_cxx::edje::object::part_text_select_all(::efl::eina::string_view part_) const
{
   eo_do(_concrete_eo_ptr(), ::edje_obj_part_text_select_all(::efl::eolian::to_c(part_)));
}

inline void eo_cxx::edje::object::part_text_input_panel_return_key_disabled_set(::efl::eina::string_view part_, bool disabled_) const
{
   eo_do(_concrete_eo_ptr(), ::edje_obj_part_text_input_panel_return_key_disabled_set(::efl::eolian::to_c(part_), ::efl::eolian::to_c(disabled_)));
}

inline bool eo_cxx::edje::object::part_text_input_panel_return_key_disabled_get(::efl::eina::string_view part_) const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::edje_obj_part_text_input_panel_return_key_disabled_get(::efl::eolian::to_c(part_)));
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline void eo_cxx::edje::object::part_text_autocapital_type_set(::efl::eina::string_view part_, Edje_Text_Autocapital_Type autocapital_type_) const
{
   eo_do(_concrete_eo_ptr(), ::edje_obj_part_text_autocapital_type_set(::efl::eolian::to_c(part_), autocapital_type_));
}

inline Edje_Text_Autocapital_Type eo_cxx::edje::object::part_text_autocapital_type_get(::efl::eina::string_view part_) const
{
   Edje_Text_Autocapital_Type _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::edje_obj_part_text_autocapital_type_get(::efl::eolian::to_c(part_)));
   return _tmp_ret;
}

inline void eo_cxx::edje::object::part_unswallow(::evas::object obj_swallow_) const
{
   eo_do(_concrete_eo_ptr(), ::edje_obj_part_unswallow(::efl::eolian::to_c(obj_swallow_)));
}

inline void eo_cxx::edje::object::part_text_prediction_allow_set(::efl::eina::string_view part_, bool prediction_) const
{
   eo_do(_concrete_eo_ptr(), ::edje_obj_part_text_prediction_allow_set(::efl::eolian::to_c(part_), ::efl::eolian::to_c(prediction_)));
}

inline bool eo_cxx::edje::object::part_text_prediction_allow_get(::efl::eina::string_view part_) const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::edje_obj_part_text_prediction_allow_get(::efl::eolian::to_c(part_)));
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline ::efl::eina::string_view eo_cxx::edje::object::data_get(::efl::eina::string_view key_) const
{
   const char * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::edje_obj_data_get(::efl::eolian::to_c(key_)));
   return ::efl::eolian::to_cxx<::efl::eina::string_view>(_tmp_ret, std::tuple<std::false_type>());
}

inline void eo_cxx::edje::object::text_markup_filter_callback_add(::efl::eina::string_view part_, Edje_Markup_Filter_Cb func_, void * data_) const
{
   eo_do(_concrete_eo_ptr(), ::edje_obj_text_markup_filter_callback_add(::efl::eolian::to_c(part_), func_, data_));
}

inline void eo_cxx::edje::object::message_signal_process() const
{
   eo_do(_concrete_eo_ptr(), ::edje_obj_message_signal_process());
}

inline ::evas::object eo_cxx::edje::object::part_box_remove(::efl::eina::string_view part_, ::evas::object child_) const
{
   Evas_Object * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::edje_obj_part_box_remove(::efl::eolian::to_c(part_), ::efl::eolian::to_c(child_)));
   return ::efl::eolian::to_cxx<::evas::object>(_tmp_ret, std::tuple<std::false_type>());
}

inline int eo_cxx::edje::object::thaw() const
{
   int _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::edje_obj_thaw());
   return _tmp_ret;
}

inline ::evas::object eo_cxx::edje::object::part_swallow_get(::efl::eina::string_view part_) const
{
   Evas_Object * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::edje_obj_part_swallow_get(::efl::eolian::to_c(part_)));
   return ::efl::eolian::to_cxx<::evas::object>(_tmp_ret, std::tuple<std::false_type>());
}

inline void eo_cxx::edje::object::part_text_imf_context_reset(::efl::eina::string_view part_) const
{
   eo_do(_concrete_eo_ptr(), ::edje_obj_part_text_imf_context_reset(::efl::eolian::to_c(part_)));
}

inline void eo_cxx::edje::object::part_text_input_panel_return_key_type_set(::efl::eina::string_view part_, Edje_Input_Panel_Return_Key_Type return_key_type_) const
{
   eo_do(_concrete_eo_ptr(), ::edje_obj_part_text_input_panel_return_key_type_set(::efl::eolian::to_c(part_), return_key_type_));
}

inline Edje_Input_Panel_Return_Key_Type eo_cxx::edje::object::part_text_input_panel_return_key_type_get(::efl::eina::string_view part_) const
{
   Edje_Input_Panel_Return_Key_Type _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::edje_obj_part_text_input_panel_return_key_type_get(::efl::eolian::to_c(part_)));
   return _tmp_ret;
}

inline ::evas::object eo_cxx::edje::object::part_table_child_get(::efl::eina::string_view part_, unsigned int col_, unsigned int row_) const
{
   Evas_Object * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::edje_obj_part_table_child_get(::efl::eolian::to_c(part_), col_, row_));
   return ::efl::eolian::to_cxx<::evas::object>(_tmp_ret, std::tuple<std::false_type>());
}

inline bool eo_cxx::edje::object::part_box_insert_before(::efl::eina::string_view part_, ::evas::object child_, ::evas::object reference_) const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::edje_obj_part_box_insert_before(::efl::eolian::to_c(part_), ::efl::eolian::to_c(child_), ::efl::eolian::to_c(reference_)));
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline bool eo_cxx::edje::object::part_external_param_set(::efl::eina::string_view part_, const Edje_External_Param * param_) const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::edje_obj_part_external_param_set(::efl::eolian::to_c(part_), param_));
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline bool eo_cxx::edje::object::part_external_param_get(::efl::eina::string_view part_, Edje_External_Param* param_) const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::edje_obj_part_external_param_get(::efl::eolian::to_c(part_), param_));
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline void eo_cxx::edje::object::size_min_calc(Evas_Coord* minw_, Evas_Coord* minh_) const
{
   eo_do(_concrete_eo_ptr(), ::edje_obj_size_min_calc(minw_, minh_));
}

inline bool eo_cxx::edje::object::part_box_append(::efl::eina::string_view part_, ::evas::object child_) const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::edje_obj_part_box_append(::efl::eolian::to_c(part_), ::efl::eolian::to_c(child_)));
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline void eo_cxx::edje::object::size_min_restricted_calc(Evas_Coord* minw_, Evas_Coord* minh_, Evas_Coord restrictedw_, Evas_Coord restrictedh_) const
{
   eo_do(_concrete_eo_ptr(), ::edje_obj_size_min_restricted_calc(minw_, minh_, restrictedw_, restrictedh_));
}

inline bool eo_cxx::edje::object::part_box_remove_all(::efl::eina::string_view part_, bool clear_) const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::edje_obj_part_box_remove_all(::efl::eolian::to_c(part_), ::efl::eolian::to_c(clear_)));
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline bool eo_cxx::edje::object::part_drag_page(::efl::eina::string_view part_, double dx_, double dy_) const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::edje_obj_part_drag_page(::efl::eolian::to_c(part_), dx_, dy_));
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline bool eo_cxx::edje::object::part_text_set(::efl::eina::string_view part_, ::efl::eina::string_view text_) const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::edje_obj_part_text_set(::efl::eolian::to_c(part_), ::efl::eolian::to_c(text_)));
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline ::efl::eina::string_view eo_cxx::edje::object::part_text_get(::efl::eina::string_view part_) const
{
   const char * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::edje_obj_part_text_get(::efl::eolian::to_c(part_)));
   return ::efl::eolian::to_cxx<::efl::eina::string_view>(_tmp_ret, std::tuple<std::false_type>());
}

inline void eo_cxx::edje::object::part_text_input_panel_show_on_demand_set(::efl::eina::string_view part_, bool ondemand_) const
{
   eo_do(_concrete_eo_ptr(), ::edje_obj_part_text_input_panel_show_on_demand_set(::efl::eolian::to_c(part_), ::efl::eolian::to_c(ondemand_)));
}

inline bool eo_cxx::edje::object::part_text_input_panel_show_on_demand_get(::efl::eina::string_view part_) const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::edje_obj_part_text_input_panel_show_on_demand_get(::efl::eolian::to_c(part_)));
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline void eo_cxx::edje::object::part_text_input_hint_set(::efl::eina::string_view part_, Edje_Input_Hints input_hints_) const
{
   eo_do(_concrete_eo_ptr(), ::edje_obj_part_text_input_hint_set(::efl::eolian::to_c(part_), input_hints_));
}

inline Edje_Input_Hints eo_cxx::edje::object::part_text_input_hint_get(::efl::eina::string_view part_) const
{
   Edje_Input_Hints _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::edje_obj_part_text_input_hint_get(::efl::eolian::to_c(part_)));
   return _tmp_ret;
}

inline ::efl::eina::string_view eo_cxx::edje::object::part_text_selection_get(::efl::eina::string_view part_) const
{
   const char * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::edje_obj_part_text_selection_get(::efl::eolian::to_c(part_)));
   return ::efl::eolian::to_cxx<::efl::eina::string_view>(_tmp_ret, std::tuple<std::false_type>());
}

inline bool eo_cxx::edje::object::part_text_cursor_is_format_get(::efl::eina::string_view part_, Edje_Cursor cur_) const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::edje_obj_part_text_cursor_is_format_get(::efl::eolian::to_c(part_), cur_));
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline bool eo_cxx::edje::object::text_class_get(::efl::eina::string_view text_class_, const char ** font_, Evas_Font_Size* size_) const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::edje_obj_text_class_get(::efl::eolian::to_c(text_class_), font_, size_));
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline void eo_cxx::edje::object::text_class_del(::efl::eina::string_view text_class_) const
{
   eo_do(_concrete_eo_ptr(), ::edje_obj_text_class_del(::efl::eolian::to_c(text_class_)));
}

inline bool eo_cxx::edje::object::color_class_set(::efl::eina::string_view color_class_, int r_, int g_, int b_, int a_, int r2_, int g2_, int b2_, int a2_, int r3_, int g3_, int b3_, int a3_) const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::edje_obj_color_class_set(::efl::eolian::to_c(color_class_), r_, g_, b_, a_, r2_, g2_, b2_, a2_, r3_, g3_, b3_, a3_));
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline bool eo_cxx::edje::object::color_class_get(::efl::eina::string_view color_class_, int* r_, int* g_, int* b_, int* a_, int* r2_, int* g2_, int* b2_, int* a2_, int* r3_, int* g3_, int* b3_, int* a3_) const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::edje_obj_color_class_get(::efl::eolian::to_c(color_class_), r_, g_, b_, a_, r2_, g2_, b2_, a2_, r3_, g3_, b3_, a3_));
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline ::efl::eina::string_view eo_cxx::edje::object::color_class_description_get(::efl::eina::string_view color_class_) const
{
   const char * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::edje_obj_color_class_description_get(::efl::eolian::to_c(color_class_)));
   return ::efl::eolian::to_cxx<::efl::eina::string_view>(_tmp_ret, std::tuple<std::false_type>());
}

inline bool eo_cxx::edje::object::color_class_clear() const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::edje_obj_color_class_clear());
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline void eo_cxx::edje::object::color_class_del(::efl::eina::string_view color_class_) const
{
   eo_do(_concrete_eo_ptr(), ::edje_obj_color_class_del(::efl::eolian::to_c(color_class_)));
}

inline bool eo_cxx::edje::object::size_class_set(::efl::eina::string_view size_class_, int minw_, int minh_, int maxw_, int maxh_) const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::edje_obj_size_class_set(::efl::eolian::to_c(size_class_), minw_, minh_, maxw_, maxh_));
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline bool eo_cxx::edje::object::size_class_get(::efl::eina::string_view size_class_, int* minw_, int* minh_, int* maxw_, int* maxh_) const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::edje_obj_size_class_get(::efl::eolian::to_c(size_class_), minw_, minh_, maxw_, maxh_));
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline void eo_cxx::edje::object::size_class_del(::efl::eina::string_view size_class_) const
{
   eo_do(_concrete_eo_ptr(), ::edje_obj_size_class_del(::efl::eolian::to_c(size_class_)));
}

inline bool eo_cxx::edje::object::part_drag_step(::efl::eina::string_view part_, double dx_, double dy_) const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::edje_obj_part_drag_step(::efl::eolian::to_c(part_), dx_, dy_));
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline bool eo_cxx::edje::object::part_text_cursor_up(::efl::eina::string_view part_, Edje_Cursor cur_) const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::edje_obj_part_text_cursor_up(::efl::eolian::to_c(part_), cur_));
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline void eo_cxx::edje::object::part_text_cursor_geometry_get(::efl::eina::string_view part_, Evas_Coord* x_, Evas_Coord* y_, Evas_Coord* w_, Evas_Coord* h_) const
{
   eo_do(_concrete_eo_ptr(), ::edje_obj_part_text_cursor_geometry_get(::efl::eolian::to_c(part_), x_, y_, w_, h_));
}

inline ::efl::eina::crange_list< ::efl::eina::string_view > eo_cxx::edje::object::part_text_anchor_list_get(::efl::eina::string_view part_) const
{
   const Eina_List * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::edje_obj_part_text_anchor_list_get(::efl::eolian::to_c(part_)));
   return ::efl::eolian::to_cxx<::efl::eina::crange_list< ::efl::eina::string_view >>(_tmp_ret, std::tuple<std::false_type, std::false_type>());
}

inline void eo_cxx::edje::object::text_insert_filter_callback_add(::efl::eina::string_view part_, Edje_Text_Filter_Cb func_, void * data_) const
{
   eo_do(_concrete_eo_ptr(), ::edje_obj_text_insert_filter_callback_add(::efl::eolian::to_c(part_), func_, data_));
}

inline void eo_cxx::edje::object::part_text_input_panel_show(::efl::eina::string_view part_) const
{
   eo_do(_concrete_eo_ptr(), ::edje_obj_part_text_input_panel_show(::efl::eolian::to_c(part_)));
}

inline bool eo_cxx::edje::object::part_exists(::efl::eina::string_view part_) const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::edje_obj_part_exists(::efl::eolian::to_c(part_)));
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline void * eo_cxx::edje::object::text_markup_filter_callback_del(::efl::eina::string_view part_, Edje_Markup_Filter_Cb func_) const
{
   void * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::edje_obj_text_markup_filter_callback_del(::efl::eolian::to_c(part_), func_));
   return _tmp_ret;
}

inline bool eo_cxx::edje::object::part_text_cursor_is_visible_format_get(::efl::eina::string_view part_, Edje_Cursor cur_) const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::edje_obj_part_text_cursor_is_visible_format_get(::efl::eolian::to_c(part_), cur_));
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline void eo_cxx::edje::object::part_text_user_insert(::efl::eina::string_view part_, ::efl::eina::string_view text_) const
{
   eo_do(_concrete_eo_ptr(), ::edje_obj_part_text_user_insert(::efl::eolian::to_c(part_), ::efl::eolian::to_c(text_)));
}

inline bool eo_cxx::edje::object::part_text_cursor_prev(::efl::eina::string_view part_, Edje_Cursor cur_) const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::edje_obj_part_text_cursor_prev(::efl::eolian::to_c(part_), cur_));
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline ::efl::eina::crange_list< ::efl::eina::string_view > eo_cxx::edje::object::part_text_item_list_get(::efl::eina::string_view part_) const
{
   const Eina_List * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::edje_obj_part_text_item_list_get(::efl::eolian::to_c(part_)));
   return ::efl::eolian::to_cxx<::efl::eina::crange_list< ::efl::eina::string_view >>(_tmp_ret, std::tuple<std::false_type, std::false_type>());
}

inline bool eo_cxx::edje::object::part_swallow(::efl::eina::string_view part_, ::evas::object obj_swallow_) const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::edje_obj_part_swallow(::efl::eolian::to_c(part_), ::efl::eolian::to_c(obj_swallow_)));
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline bool eo_cxx::edje::object::update_hints_get() const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::edje_obj_update_hints_get());
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline void eo_cxx::edje::object::update_hints_set(bool update_) const
{
   eo_do(_concrete_eo_ptr(), ::edje_obj_update_hints_set(::efl::eolian::to_c(update_)));
}

inline bool eo_cxx::edje::object::mirrored_get() const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::edje_obj_mirrored_get());
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline void eo_cxx::edje::object::mirrored_set(bool rtl_) const
{
   eo_do(_concrete_eo_ptr(), ::edje_obj_mirrored_set(::efl::eolian::to_c(rtl_)));
}

inline ::efl::eina::string_view eo_cxx::edje::object::language_get() const
{
   const char * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::edje_obj_language_get());
   return ::efl::eolian::to_cxx<::efl::eina::string_view>(_tmp_ret, std::tuple<std::false_type>());
}

inline void eo_cxx::edje::object::language_set(::efl::eina::string_view language_) const
{
   eo_do(_concrete_eo_ptr(), ::edje_obj_language_set(::efl::eolian::to_c(language_)));
}

inline bool eo_cxx::edje::object::animation_get() const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::edje_obj_animation_get());
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline void eo_cxx::edje::object::animation_set(bool on_) const
{
   eo_do(_concrete_eo_ptr(), ::edje_obj_animation_set(::efl::eolian::to_c(on_)));
}

inline bool eo_cxx::edje::object::play_get() const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::edje_obj_play_get());
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline void eo_cxx::edje::object::play_set(bool play_) const
{
   eo_do(_concrete_eo_ptr(), ::edje_obj_play_set(::efl::eolian::to_c(play_)));
}

inline const Edje_Perspective * eo_cxx::edje::object::perspective_get() const
{
   const Edje_Perspective * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::edje_obj_perspective_get());
   return _tmp_ret;
}

inline void eo_cxx::edje::object::perspective_set(Edje_Perspective * ps_) const
{
   eo_do(_concrete_eo_ptr(), ::edje_obj_perspective_set(ps_));
}

inline double eo_cxx::edje::object::scale_get() const
{
   double _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::edje_obj_scale_get());
   return _tmp_ret;
}

inline bool eo_cxx::edje::object::scale_set(double scale_) const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::edje_obj_scale_set(scale_));
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline double eo_cxx::edje::object::base_scale_get() const
{
   double _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::edje_obj_base_scale_get());
   return _tmp_ret;
}

inline void eo_cxx::edje::object::text_change_cb_set(Edje_Text_Change_Cb func_, void * data_) const
{
   eo_do(_concrete_eo_ptr(), ::edje_obj_text_change_cb_set(func_, data_));
}

inline void eo_cxx::edje::object::part_text_cursor_begin_set(::efl::eina::string_view part_, Edje_Cursor cur_) const
{
   eo_do(_concrete_eo_ptr(), ::edje_obj_part_text_cursor_begin_set(::efl::eolian::to_c(part_), cur_));
}

inline void eo_cxx::edje::object::part_text_cursor_line_end_set(::efl::eina::string_view part_, Edje_Cursor cur_) const
{
   eo_do(_concrete_eo_ptr(), ::edje_obj_part_text_cursor_line_end_set(::efl::eolian::to_c(part_), cur_));
}

inline bool eo_cxx::edje::object::text_class_set(::efl::eina::string_view text_class_, ::efl::eina::string_view font_, Evas_Font_Size size_) const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::edje_obj_text_class_set(::efl::eolian::to_c(text_class_), ::efl::eolian::to_c(font_), size_));
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline bool eo_cxx::edje::object::part_text_cursor_coord_set(::efl::eina::string_view part_, Edje_Cursor cur_, Evas_Coord x_, Evas_Coord y_) const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::edje_obj_part_text_cursor_coord_set(::efl::eolian::to_c(part_), cur_, x_, y_));
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline void eo_cxx::edje::object::part_text_cursor_end_set(::efl::eina::string_view part_, Edje_Cursor cur_) const
{
   eo_do(_concrete_eo_ptr(), ::edje_obj_part_text_cursor_end_set(::efl::eolian::to_c(part_), cur_));
}

inline bool eo_cxx::edje::object::part_text_escaped_set(::efl::eina::string_view part_, ::efl::eina::string_view text_) const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::edje_obj_part_text_escaped_set(::efl::eolian::to_c(part_), ::efl::eolian::to_c(text_)));
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline void eo_cxx::edje::object::item_provider_set(Edje_Item_Provider_Cb func_, void * data_) const
{
   eo_do(_concrete_eo_ptr(), ::edje_obj_item_provider_set(func_, data_));
}

inline void eo_cxx::edje::object::part_text_cursor_line_begin_set(::efl::eina::string_view part_, Edje_Cursor cur_) const
{
   eo_do(_concrete_eo_ptr(), ::edje_obj_part_text_cursor_line_begin_set(::efl::eolian::to_c(part_), cur_));
}

inline void eo_cxx::edje::object::message_handler_set(Edje_Message_Handler_Cb func_, void * data_) const
{
   eo_do(_concrete_eo_ptr(), ::edje_obj_message_handler_set(func_, data_));
}

inline void eo_cxx::edje::object::size_min_get(Evas_Coord* minw_, Evas_Coord* minh_) const
{
   eo_do(_concrete_eo_ptr(), ::edje_obj_size_min_get(minw_, minh_));
}

inline ::efl::eina::range_list< ::efl::eina::string_view > eo_cxx::edje::object::access_part_list_get() const
{
   Eina_List * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::edje_obj_access_part_list_get());
   return ::efl::eolian::to_cxx<::efl::eina::range_list< ::efl::eina::string_view >>(_tmp_ret, std::tuple<std::false_type, std::false_type>());
}

inline Edje_Load_Error eo_cxx::edje::object::load_error_get() const
{
   Edje_Load_Error _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::edje_obj_load_error_get());
   return _tmp_ret;
}

inline void eo_cxx::edje::object::size_max_get(Evas_Coord* maxw_, Evas_Coord* maxh_) const
{
   eo_do(_concrete_eo_ptr(), ::edje_obj_size_max_get(maxw_, maxh_));
}

inline double eo_cxx::edje::object::transition_duration_factor_get() const
{
   double _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::edje_obj_transition_duration_factor_get());
   return _tmp_ret;
}

inline void eo_cxx::edje::object::transition_duration_factor_set(double scale_) const
{
   eo_do(_concrete_eo_ptr(), ::edje_obj_transition_duration_factor_set(scale_));
}

inline ::eo_cxx::edje::object::operator ::edje::object() const
{
   return *static_cast<::edje::object const*>(static_cast<void const*>(this));
}

inline ::eo_cxx::edje::object::operator ::edje::object&()
{
   return *static_cast<::edje::object*>(static_cast<void*>(this));
}

inline ::eo_cxx::edje::object::operator ::edje::object const&() const
{
   return *static_cast<::edje::object const*>(static_cast<void const*>(this));
}

template <typename T>
bool edje_object_part_table_clear_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, const char * part_, Eina_Bool clear_)
{
   try
      {
         return static_cast<T*>(self->this_)->part_table_clear(::efl::eolian::to_cxx<::efl::eina::string_view>(part_, std::tuple<std::false_type>()), ::efl::eolian::to_cxx<bool>(clear_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Eina_Bool _tmp_ret{};
         return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }
}

template <typename T>
Edje_External_Param_Type edje_object_part_external_param_type_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, const char * part_, const char* param_)
{
   try
      {
         return static_cast<T*>(self->this_)->part_external_param_type_get(::efl::eolian::to_cxx<::efl::eina::string_view>(part_, std::tuple<std::false_type>()), param_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Edje_External_Param_Type _tmp_ret{};
         return _tmp_ret;
      }
}

template <typename T>
void edje_object_part_text_select_allow_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, const char * part_, Eina_Bool allow_)
{
   try
      {
         static_cast<T*>(self->this_)->part_text_select_allow_set(::efl::eolian::to_cxx<::efl::eina::string_view>(part_, std::tuple<std::false_type>()), ::efl::eolian::to_cxx<bool>(allow_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
::efl::eina::string_view edje_object_part_state_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, const char * part_, double* val_ret_)
{
   try
      {
         return static_cast<T*>(self->this_)->part_state_get(::efl::eolian::to_cxx<::efl::eina::string_view>(part_, std::tuple<std::false_type>()), val_ret_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         const char * _tmp_ret{};
         return ::efl::eolian::to_cxx<::efl::eina::string_view>(_tmp_ret, std::tuple<std::false_type>());
      }
}

template <typename T>
void * edje_object_text_markup_filter_callback_del_full_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, const char * part_, Edje_Markup_Filter_Cb func_, void * data_)
{
   try
      {
         return static_cast<T*>(self->this_)->text_markup_filter_callback_del_full(::efl::eolian::to_cxx<::efl::eina::string_view>(part_, std::tuple<std::false_type>()), func_, data_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         void * _tmp_ret{};
         return _tmp_ret;
      }
}

template <typename T>
bool edje_object_part_drag_step_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, const char * part_, double dx_, double dy_)
{
   try
      {
         return static_cast<T*>(self->this_)->part_drag_step_set(::efl::eolian::to_cxx<::efl::eina::string_view>(part_, std::tuple<std::false_type>()), dx_, dy_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Eina_Bool _tmp_ret{};
         return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }
}

template <typename T>
bool edje_object_part_drag_step_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, const char * part_, double* dx_, double* dy_)
{
   try
      {
         return static_cast<T*>(self->this_)->part_drag_step_get(::efl::eolian::to_cxx<::efl::eina::string_view>(part_, std::tuple<std::false_type>()), dx_, dy_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Eina_Bool _tmp_ret{};
         return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }
}

template <typename T>
void * edje_object_part_text_imf_context_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, const char * part_)
{
   try
      {
         return static_cast<T*>(self->this_)->part_text_imf_context_get(::efl::eolian::to_cxx<::efl::eina::string_view>(part_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         void * _tmp_ret{};
         return _tmp_ret;
      }
}

template <typename T>
void edje_object_part_text_select_begin_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, const char * part_)
{
   try
      {
         static_cast<T*>(self->this_)->part_text_select_begin(::efl::eolian::to_cxx<::efl::eina::string_view>(part_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
::efl::eina::string_view edje_object_part_text_style_user_peek_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, const char * part_)
{
   try
      {
         return static_cast<T*>(self->this_)->part_text_style_user_peek(::efl::eolian::to_cxx<::efl::eina::string_view>(part_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         const char * _tmp_ret{};
         return ::efl::eolian::to_cxx<::efl::eina::string_view>(_tmp_ret, std::tuple<std::false_type>());
      }
}

template <typename T>
void * edje_object_signal_callback_del_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, const char * emission_, const char * source_, Edje_Signal_Cb func_, void * data_)
{
   try
      {
         return static_cast<T*>(self->this_)->signal_callback_del(::efl::eolian::to_cxx<::efl::eina::string_view>(emission_, std::tuple<std::false_type>()), ::efl::eolian::to_cxx<::efl::eina::string_view>(source_, std::tuple<std::false_type>()), func_, data_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         void * _tmp_ret{};
         return _tmp_ret;
      }
}

template <typename T>
bool edje_object_part_text_cursor_next_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, const char * part_, Edje_Cursor cur_)
{
   try
      {
         return static_cast<T*>(self->this_)->part_text_cursor_next(::efl::eolian::to_cxx<::efl::eina::string_view>(part_, std::tuple<std::false_type>()), cur_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Eina_Bool _tmp_ret{};
         return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }
}

template <typename T>
void edje_object_part_text_style_user_push_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, const char * part_, const char * style_)
{
   try
      {
         static_cast<T*>(self->this_)->part_text_style_user_push(::efl::eolian::to_cxx<::efl::eina::string_view>(part_, std::tuple<std::false_type>()), ::efl::eolian::to_cxx<::efl::eina::string_view>(style_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void edje_object_part_text_append_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, const char * part_, const char * text_)
{
   try
      {
         static_cast<T*>(self->this_)->part_text_append(::efl::eolian::to_cxx<::efl::eina::string_view>(part_, std::tuple<std::false_type>()), ::efl::eolian::to_cxx<::efl::eina::string_view>(text_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
bool edje_object_part_geometry_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, const char * part_, Evas_Coord* x_, Evas_Coord* y_, Evas_Coord* w_, Evas_Coord* h_)
{
   try
      {
         return static_cast<T*>(self->this_)->part_geometry_get(::efl::eolian::to_cxx<::efl::eina::string_view>(part_, std::tuple<std::false_type>()), x_, y_, w_, h_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Eina_Bool _tmp_ret{};
         return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }
}

template <typename T>
void edje_object_part_text_input_panel_hide_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, const char * part_)
{
   try
      {
         static_cast<T*>(self->this_)->part_text_input_panel_hide(::efl::eolian::to_cxx<::efl::eina::string_view>(part_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
bool edje_object_part_text_item_geometry_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, const char * part_, const char * item_, Evas_Coord* cx_, Evas_Coord* cy_, Evas_Coord* cw_, Evas_Coord* ch_)
{
   try
      {
         return static_cast<T*>(self->this_)->part_text_item_geometry_get(::efl::eolian::to_cxx<::efl::eina::string_view>(part_, std::tuple<std::false_type>()), ::efl::eolian::to_cxx<::efl::eina::string_view>(item_, std::tuple<std::false_type>()), cx_, cy_, cw_, ch_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Eina_Bool _tmp_ret{};
         return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }
}

template <typename T>
bool edje_object_part_table_unpack_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, const char * part_, Evas_Object * child_obj_)
{
   try
      {
         return static_cast<T*>(self->this_)->part_table_unpack(::efl::eolian::to_cxx<::efl::eina::string_view>(part_, std::tuple<std::false_type>()), ::efl::eolian::to_cxx<::evas::object>(child_obj_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Eina_Bool _tmp_ret{};
         return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }
}

template <typename T>
void edje_object_part_text_select_abort_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, const char * part_)
{
   try
      {
         static_cast<T*>(self->this_)->part_text_select_abort(::efl::eolian::to_cxx<::efl::eina::string_view>(part_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void * edje_object_text_insert_filter_callback_del_full_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, const char * part_, Edje_Text_Filter_Cb func_, void * data_)
{
   try
      {
         return static_cast<T*>(self->this_)->text_insert_filter_callback_del_full(::efl::eolian::to_cxx<::efl::eina::string_view>(part_, std::tuple<std::false_type>()), func_, data_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         void * _tmp_ret{};
         return _tmp_ret;
      }
}

template <typename T>
void edje_object_part_text_style_user_pop_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, const char * part_)
{
   try
      {
         static_cast<T*>(self->this_)->part_text_style_user_pop(::efl::eolian::to_cxx<::efl::eina::string_view>(part_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void edje_object_part_text_input_panel_imdata_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, const char * part_, const void * data_, int len_)
{
   try
      {
         static_cast<T*>(self->this_)->part_text_input_panel_imdata_set(::efl::eolian::to_cxx<::efl::eina::string_view>(part_, std::tuple<std::false_type>()), data_, len_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void edje_object_part_text_input_panel_imdata_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, const char * part_, void * data_, int * len_)
{
   try
      {
         static_cast<T*>(self->this_)->part_text_input_panel_imdata_get(::efl::eolian::to_cxx<::efl::eina::string_view>(part_, std::tuple<std::false_type>()), data_, len_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void edje_object_part_text_insert_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, const char * part_, const char * text_)
{
   try
      {
         static_cast<T*>(self->this_)->part_text_insert(::efl::eolian::to_cxx<::efl::eina::string_view>(part_, std::tuple<std::false_type>()), ::efl::eolian::to_cxx<::efl::eina::string_view>(text_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
::evas::object edje_object_part_box_remove_at_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, const char * part_, unsigned int pos_)
{
   try
      {
         return static_cast<T*>(self->this_)->part_box_remove_at(::efl::eolian::to_cxx<::efl::eina::string_view>(part_, std::tuple<std::false_type>()), pos_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Evas_Object * _tmp_ret{};
         return ::efl::eolian::to_cxx<::evas::object>(_tmp_ret, std::tuple<std::false_type>());
      }
}

template <typename T>
void edje_object_part_text_cursor_copy_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, const char * part_, Edje_Cursor src_, Edje_Cursor dst_)
{
   try
      {
         static_cast<T*>(self->this_)->part_text_cursor_copy(::efl::eolian::to_cxx<::efl::eina::string_view>(part_, std::tuple<std::false_type>()), src_, dst_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
bool edje_object_parts_extends_calc_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Evas_Coord* x_, Evas_Coord* y_, Evas_Coord* w_, Evas_Coord* h_)
{
   try
      {
         return static_cast<T*>(self->this_)->parts_extends_calc(x_, y_, w_, h_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Eina_Bool _tmp_ret{};
         return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }
}

template <typename T>
bool edje_object_part_drag_value_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, const char * part_, double dx_, double dy_)
{
   try
      {
         return static_cast<T*>(self->this_)->part_drag_value_set(::efl::eolian::to_cxx<::efl::eina::string_view>(part_, std::tuple<std::false_type>()), dx_, dy_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Eina_Bool _tmp_ret{};
         return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }
}

template <typename T>
bool edje_object_part_drag_value_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, const char * part_, double* dx_, double* dy_)
{
   try
      {
         return static_cast<T*>(self->this_)->part_drag_value_get(::efl::eolian::to_cxx<::efl::eina::string_view>(part_, std::tuple<std::false_type>()), dx_, dy_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Eina_Bool _tmp_ret{};
         return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }
}

template <typename T>
void edje_object_calc_force_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         static_cast<T*>(self->this_)->calc_force();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void edje_object_part_text_cursor_pos_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, const char * part_, Edje_Cursor cur_, int pos_)
{
   try
      {
         static_cast<T*>(self->this_)->part_text_cursor_pos_set(::efl::eolian::to_cxx<::efl::eina::string_view>(part_, std::tuple<std::false_type>()), cur_, pos_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
int edje_object_part_text_cursor_pos_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, const char * part_, Edje_Cursor cur_)
{
   try
      {
         return static_cast<T*>(self->this_)->part_text_cursor_pos_get(::efl::eolian::to_cxx<::efl::eina::string_view>(part_, std::tuple<std::false_type>()), cur_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         int _tmp_ret{};
         return _tmp_ret;
      }
}

template <typename T>
int edje_object_freeze_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->freeze();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         int _tmp_ret{};
         return _tmp_ret;
      }
}

template <typename T>
char * edje_object_part_text_cursor_content_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, const char * part_, Edje_Cursor cur_)
{
   try
      {
         return static_cast<T*>(self->this_)->part_text_cursor_content_get(::efl::eolian::to_cxx<::efl::eina::string_view>(part_, std::tuple<std::false_type>()), cur_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         char * _tmp_ret{};
         return _tmp_ret;
      }
}

template <typename T>
void edje_object_part_text_input_panel_layout_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, const char * part_, Edje_Input_Panel_Layout layout_)
{
   try
      {
         static_cast<T*>(self->this_)->part_text_input_panel_layout_set(::efl::eolian::to_cxx<::efl::eina::string_view>(part_, std::tuple<std::false_type>()), layout_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
Edje_Input_Panel_Layout edje_object_part_text_input_panel_layout_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, const char * part_)
{
   try
      {
         return static_cast<T*>(self->this_)->part_text_input_panel_layout_get(::efl::eolian::to_cxx<::efl::eina::string_view>(part_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Edje_Input_Panel_Layout _tmp_ret{};
         return _tmp_ret;
      }
}

template <typename T>
bool edje_object_part_table_pack_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, const char * part_, Evas_Object * child_obj_, unsigned short col_, unsigned short row_, unsigned short colspan_, unsigned short rowspan_)
{
   try
      {
         return static_cast<T*>(self->this_)->part_table_pack(::efl::eolian::to_cxx<::efl::eina::string_view>(part_, std::tuple<std::false_type>()), ::efl::eolian::to_cxx<::evas::object>(child_obj_, std::tuple<std::false_type>()), col_, row_, colspan_, rowspan_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Eina_Bool _tmp_ret{};
         return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }
}

template <typename T>
void edje_object_part_text_input_panel_language_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, const char * part_, Edje_Input_Panel_Lang lang_)
{
   try
      {
         static_cast<T*>(self->this_)->part_text_input_panel_language_set(::efl::eolian::to_cxx<::efl::eina::string_view>(part_, std::tuple<std::false_type>()), lang_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
Edje_Input_Panel_Lang edje_object_part_text_input_panel_language_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, const char * part_)
{
   try
      {
         return static_cast<T*>(self->this_)->part_text_input_panel_language_get(::efl::eolian::to_cxx<::efl::eina::string_view>(part_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Edje_Input_Panel_Lang _tmp_ret{};
         return _tmp_ret;
      }
}

template <typename T>
bool edje_object_part_table_col_row_size_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, const char * part_, int* cols_, int* rows_)
{
   try
      {
         return static_cast<T*>(self->this_)->part_table_col_row_size_get(::efl::eolian::to_cxx<::efl::eina::string_view>(part_, std::tuple<std::false_type>()), cols_, rows_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Eina_Bool _tmp_ret{};
         return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }
}

template <typename T>
::evas::object edje_object_part_external_object_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, const char * part_)
{
   try
      {
         return static_cast<T*>(self->this_)->part_external_object_get(::efl::eolian::to_cxx<::efl::eina::string_view>(part_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Evas_Object * _tmp_ret{};
         return ::efl::eolian::to_cxx<::evas::object>(_tmp_ret, std::tuple<std::false_type>());
      }
}

template <typename T>
::evas::object edje_object_part_external_content_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, const char * part_, const char* content_)
{
   try
      {
         return static_cast<T*>(self->this_)->part_external_content_get(::efl::eolian::to_cxx<::efl::eina::string_view>(part_, std::tuple<std::false_type>()), content_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Evas_Object * _tmp_ret{};
         return ::efl::eolian::to_cxx<::evas::object>(_tmp_ret, std::tuple<std::false_type>());
      }
}

template <typename T>
bool edje_object_preload_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Eina_Bool cancel_)
{
   try
      {
         return static_cast<T*>(self->this_)->preload(::efl::eolian::to_cxx<bool>(cancel_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Eina_Bool _tmp_ret{};
         return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }
}

template <typename T>
void edje_object_part_text_input_panel_enabled_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, const char * part_, Eina_Bool enabled_)
{
   try
      {
         static_cast<T*>(self->this_)->part_text_input_panel_enabled_set(::efl::eolian::to_cxx<::efl::eina::string_view>(part_, std::tuple<std::false_type>()), ::efl::eolian::to_cxx<bool>(enabled_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
bool edje_object_part_text_input_panel_enabled_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, const char * part_)
{
   try
      {
         return static_cast<T*>(self->this_)->part_text_input_panel_enabled_get(::efl::eolian::to_cxx<::efl::eina::string_view>(part_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Eina_Bool _tmp_ret{};
         return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }
}

template <typename T>
void edje_object_part_text_select_extend_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, const char * part_)
{
   try
      {
         static_cast<T*>(self->this_)->part_text_select_extend(::efl::eolian::to_cxx<::efl::eina::string_view>(part_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
bool edje_object_part_box_insert_at_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, const char * part_, Evas_Object * child_, unsigned int pos_)
{
   try
      {
         return static_cast<T*>(self->this_)->part_box_insert_at(::efl::eolian::to_cxx<::efl::eina::string_view>(part_, std::tuple<std::false_type>()), ::efl::eolian::to_cxx<::evas::object>(child_, std::tuple<std::false_type>()), pos_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Eina_Bool _tmp_ret{};
         return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }
}

template <typename T>
::efl::eina::crange_list< const Evas_Textblock_Rectangle * > edje_object_part_text_anchor_geometry_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, const char * part_, const char * anchor_)
{
   try
      {
         return static_cast<T*>(self->this_)->part_text_anchor_geometry_get(::efl::eolian::to_cxx<::efl::eina::string_view>(part_, std::tuple<std::false_type>()), ::efl::eolian::to_cxx<::efl::eina::string_view>(anchor_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         const Eina_List * _tmp_ret{};
         return ::efl::eolian::to_cxx<::efl::eina::crange_list< const Evas_Textblock_Rectangle * >>(_tmp_ret, std::tuple<std::false_type, std::false_type>());
      }
}

template <typename T>
bool edje_object_part_text_cursor_down_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, const char * part_, Edje_Cursor cur_)
{
   try
      {
         return static_cast<T*>(self->this_)->part_text_cursor_down(::efl::eolian::to_cxx<::efl::eina::string_view>(part_, std::tuple<std::false_type>()), cur_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Eina_Bool _tmp_ret{};
         return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }
}

template <typename T>
bool edje_object_part_drag_page_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, const char * part_, double dx_, double dy_)
{
   try
      {
         return static_cast<T*>(self->this_)->part_drag_page_set(::efl::eolian::to_cxx<::efl::eina::string_view>(part_, std::tuple<std::false_type>()), dx_, dy_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Eina_Bool _tmp_ret{};
         return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }
}

template <typename T>
bool edje_object_part_drag_page_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, const char * part_, double* dx_, double* dy_)
{
   try
      {
         return static_cast<T*>(self->this_)->part_drag_page_get(::efl::eolian::to_cxx<::efl::eina::string_view>(part_, std::tuple<std::false_type>()), dx_, dy_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Eina_Bool _tmp_ret{};
         return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }
}

template <typename T>
bool edje_object_part_box_prepend_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, const char * part_, Evas_Object * child_)
{
   try
      {
         return static_cast<T*>(self->this_)->part_box_prepend(::efl::eolian::to_cxx<::efl::eina::string_view>(part_, std::tuple<std::false_type>()), ::efl::eolian::to_cxx<::evas::object>(child_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Eina_Bool _tmp_ret{};
         return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }
}

template <typename T>
void edje_object_signal_emit_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, const char * emission_, const char * source_)
{
   try
      {
         static_cast<T*>(self->this_)->signal_emit(::efl::eolian::to_cxx<::efl::eina::string_view>(emission_, std::tuple<std::false_type>()), ::efl::eolian::to_cxx<::efl::eina::string_view>(source_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void edje_object_part_text_input_panel_layout_variation_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, const char * part_, int variation_)
{
   try
      {
         static_cast<T*>(self->this_)->part_text_input_panel_layout_variation_set(::efl::eolian::to_cxx<::efl::eina::string_view>(part_, std::tuple<std::false_type>()), variation_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
int edje_object_part_text_input_panel_layout_variation_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, const char * part_)
{
   try
      {
         return static_cast<T*>(self->this_)->part_text_input_panel_layout_variation_get(::efl::eolian::to_cxx<::efl::eina::string_view>(part_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         int _tmp_ret{};
         return _tmp_ret;
      }
}

template <typename T>
void edje_object_message_send_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Edje_Message_Type type_, int id_, void * msg_)
{
   try
      {
         static_cast<T*>(self->this_)->message_send(type_, id_, msg_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void edje_object_part_text_select_none_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, const char * part_)
{
   try
      {
         static_cast<T*>(self->this_)->part_text_select_none(::efl::eolian::to_cxx<::efl::eina::string_view>(part_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
::evas::object edje_object_part_object_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, const char * part_)
{
   try
      {
         return static_cast<T*>(self->this_)->part_object_get(::efl::eolian::to_cxx<::efl::eina::string_view>(part_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         const Evas_Object * _tmp_ret{};
         return ::efl::eolian::to_cxx<::evas::object>(_tmp_ret, std::tuple<std::false_type>());
      }
}

template <typename T>
bool edje_object_part_drag_size_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, const char * part_, double dw_, double dh_)
{
   try
      {
         return static_cast<T*>(self->this_)->part_drag_size_set(::efl::eolian::to_cxx<::efl::eina::string_view>(part_, std::tuple<std::false_type>()), dw_, dh_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Eina_Bool _tmp_ret{};
         return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }
}

template <typename T>
bool edje_object_part_drag_size_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, const char * part_, double* dw_, double* dh_)
{
   try
      {
         return static_cast<T*>(self->this_)->part_drag_size_get(::efl::eolian::to_cxx<::efl::eina::string_view>(part_, std::tuple<std::false_type>()), dw_, dh_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Eina_Bool _tmp_ret{};
         return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }
}

template <typename T>
void * edje_object_text_insert_filter_callback_del_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, const char * part_, Edje_Text_Filter_Cb func_)
{
   try
      {
         return static_cast<T*>(self->this_)->text_insert_filter_callback_del(::efl::eolian::to_cxx<::efl::eina::string_view>(part_, std::tuple<std::false_type>()), func_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         void * _tmp_ret{};
         return _tmp_ret;
      }
}

template <typename T>
Edje_Drag_Dir edje_object_part_drag_dir_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, const char * part_)
{
   try
      {
         return static_cast<T*>(self->this_)->part_drag_dir_get(::efl::eolian::to_cxx<::efl::eina::string_view>(part_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Edje_Drag_Dir _tmp_ret{};
         return _tmp_ret;
      }
}

template <typename T>
bool edje_object_part_text_unescaped_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, const char * part_, const char * text_to_escape_)
{
   try
      {
         return static_cast<T*>(self->this_)->part_text_unescaped_set(::efl::eolian::to_cxx<::efl::eina::string_view>(part_, std::tuple<std::false_type>()), ::efl::eolian::to_cxx<::efl::eina::string_view>(text_to_escape_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Eina_Bool _tmp_ret{};
         return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }
}

template <typename T>
char * edje_object_part_text_unescaped_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, const char * part_)
{
   try
      {
         return static_cast<T*>(self->this_)->part_text_unescaped_get(::efl::eolian::to_cxx<::efl::eina::string_view>(part_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         char * _tmp_ret{};
         return _tmp_ret;
      }
}

template <typename T>
void edje_object_signal_callback_add_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, const char * emission_, const char * source_, Edje_Signal_Cb func_, void * data_)
{
   try
      {
         static_cast<T*>(self->this_)->signal_callback_add(::efl::eolian::to_cxx<::efl::eina::string_view>(emission_, std::tuple<std::false_type>()), ::efl::eolian::to_cxx<::efl::eina::string_view>(source_, std::tuple<std::false_type>()), func_, data_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void edje_object_part_text_select_all_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, const char * part_)
{
   try
      {
         static_cast<T*>(self->this_)->part_text_select_all(::efl::eolian::to_cxx<::efl::eina::string_view>(part_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void edje_object_part_text_input_panel_return_key_disabled_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, const char * part_, Eina_Bool disabled_)
{
   try
      {
         static_cast<T*>(self->this_)->part_text_input_panel_return_key_disabled_set(::efl::eolian::to_cxx<::efl::eina::string_view>(part_, std::tuple<std::false_type>()), ::efl::eolian::to_cxx<bool>(disabled_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
bool edje_object_part_text_input_panel_return_key_disabled_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, const char * part_)
{
   try
      {
         return static_cast<T*>(self->this_)->part_text_input_panel_return_key_disabled_get(::efl::eolian::to_cxx<::efl::eina::string_view>(part_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Eina_Bool _tmp_ret{};
         return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }
}

template <typename T>
void edje_object_part_text_autocapital_type_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, const char * part_, Edje_Text_Autocapital_Type autocapital_type_)
{
   try
      {
         static_cast<T*>(self->this_)->part_text_autocapital_type_set(::efl::eolian::to_cxx<::efl::eina::string_view>(part_, std::tuple<std::false_type>()), autocapital_type_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
Edje_Text_Autocapital_Type edje_object_part_text_autocapital_type_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, const char * part_)
{
   try
      {
         return static_cast<T*>(self->this_)->part_text_autocapital_type_get(::efl::eolian::to_cxx<::efl::eina::string_view>(part_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Edje_Text_Autocapital_Type _tmp_ret{};
         return _tmp_ret;
      }
}

template <typename T>
void edje_object_part_unswallow_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Evas_Object * obj_swallow_)
{
   try
      {
         static_cast<T*>(self->this_)->part_unswallow(::efl::eolian::to_cxx<::evas::object>(obj_swallow_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void edje_object_part_text_prediction_allow_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, const char * part_, Eina_Bool prediction_)
{
   try
      {
         static_cast<T*>(self->this_)->part_text_prediction_allow_set(::efl::eolian::to_cxx<::efl::eina::string_view>(part_, std::tuple<std::false_type>()), ::efl::eolian::to_cxx<bool>(prediction_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
bool edje_object_part_text_prediction_allow_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, const char * part_)
{
   try
      {
         return static_cast<T*>(self->this_)->part_text_prediction_allow_get(::efl::eolian::to_cxx<::efl::eina::string_view>(part_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Eina_Bool _tmp_ret{};
         return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }
}

template <typename T>
::efl::eina::string_view edje_object_data_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, const char * key_)
{
   try
      {
         return static_cast<T*>(self->this_)->data_get(::efl::eolian::to_cxx<::efl::eina::string_view>(key_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         const char * _tmp_ret{};
         return ::efl::eolian::to_cxx<::efl::eina::string_view>(_tmp_ret, std::tuple<std::false_type>());
      }
}

template <typename T>
void edje_object_text_markup_filter_callback_add_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, const char * part_, Edje_Markup_Filter_Cb func_, void * data_)
{
   try
      {
         static_cast<T*>(self->this_)->text_markup_filter_callback_add(::efl::eolian::to_cxx<::efl::eina::string_view>(part_, std::tuple<std::false_type>()), func_, data_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void edje_object_message_signal_process_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         static_cast<T*>(self->this_)->message_signal_process();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
::evas::object edje_object_part_box_remove_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, const char * part_, Evas_Object * child_)
{
   try
      {
         return static_cast<T*>(self->this_)->part_box_remove(::efl::eolian::to_cxx<::efl::eina::string_view>(part_, std::tuple<std::false_type>()), ::efl::eolian::to_cxx<::evas::object>(child_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Evas_Object * _tmp_ret{};
         return ::efl::eolian::to_cxx<::evas::object>(_tmp_ret, std::tuple<std::false_type>());
      }
}

template <typename T>
int edje_object_thaw_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->thaw();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         int _tmp_ret{};
         return _tmp_ret;
      }
}

template <typename T>
::evas::object edje_object_part_swallow_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, const char * part_)
{
   try
      {
         return static_cast<T*>(self->this_)->part_swallow_get(::efl::eolian::to_cxx<::efl::eina::string_view>(part_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Evas_Object * _tmp_ret{};
         return ::efl::eolian::to_cxx<::evas::object>(_tmp_ret, std::tuple<std::false_type>());
      }
}

template <typename T>
void edje_object_part_text_imf_context_reset_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, const char * part_)
{
   try
      {
         static_cast<T*>(self->this_)->part_text_imf_context_reset(::efl::eolian::to_cxx<::efl::eina::string_view>(part_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void edje_object_part_text_input_panel_return_key_type_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, const char * part_, Edje_Input_Panel_Return_Key_Type return_key_type_)
{
   try
      {
         static_cast<T*>(self->this_)->part_text_input_panel_return_key_type_set(::efl::eolian::to_cxx<::efl::eina::string_view>(part_, std::tuple<std::false_type>()), return_key_type_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
Edje_Input_Panel_Return_Key_Type edje_object_part_text_input_panel_return_key_type_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, const char * part_)
{
   try
      {
         return static_cast<T*>(self->this_)->part_text_input_panel_return_key_type_get(::efl::eolian::to_cxx<::efl::eina::string_view>(part_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Edje_Input_Panel_Return_Key_Type _tmp_ret{};
         return _tmp_ret;
      }
}

template <typename T>
::evas::object edje_object_part_table_child_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, const char * part_, unsigned int col_, unsigned int row_)
{
   try
      {
         return static_cast<T*>(self->this_)->part_table_child_get(::efl::eolian::to_cxx<::efl::eina::string_view>(part_, std::tuple<std::false_type>()), col_, row_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Evas_Object * _tmp_ret{};
         return ::efl::eolian::to_cxx<::evas::object>(_tmp_ret, std::tuple<std::false_type>());
      }
}

template <typename T>
bool edje_object_part_box_insert_before_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, const char * part_, Evas_Object * child_, const Evas_Object * reference_)
{
   try
      {
         return static_cast<T*>(self->this_)->part_box_insert_before(::efl::eolian::to_cxx<::efl::eina::string_view>(part_, std::tuple<std::false_type>()), ::efl::eolian::to_cxx<::evas::object>(child_, std::tuple<std::false_type>()), ::efl::eolian::to_cxx<::evas::object>(reference_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Eina_Bool _tmp_ret{};
         return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }
}

template <typename T>
bool edje_object_part_external_param_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, const char * part_, const Edje_External_Param * param_)
{
   try
      {
         return static_cast<T*>(self->this_)->part_external_param_set(::efl::eolian::to_cxx<::efl::eina::string_view>(part_, std::tuple<std::false_type>()), param_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Eina_Bool _tmp_ret{};
         return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }
}

template <typename T>
bool edje_object_part_external_param_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, const char * part_, Edje_External_Param* param_)
{
   try
      {
         return static_cast<T*>(self->this_)->part_external_param_get(::efl::eolian::to_cxx<::efl::eina::string_view>(part_, std::tuple<std::false_type>()), param_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Eina_Bool _tmp_ret{};
         return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }
}

template <typename T>
void edje_object_size_min_calc_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Evas_Coord* minw_, Evas_Coord* minh_)
{
   try
      {
         static_cast<T*>(self->this_)->size_min_calc(minw_, minh_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
bool edje_object_part_box_append_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, const char * part_, Evas_Object * child_)
{
   try
      {
         return static_cast<T*>(self->this_)->part_box_append(::efl::eolian::to_cxx<::efl::eina::string_view>(part_, std::tuple<std::false_type>()), ::efl::eolian::to_cxx<::evas::object>(child_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Eina_Bool _tmp_ret{};
         return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }
}

template <typename T>
void edje_object_size_min_restricted_calc_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Evas_Coord* minw_, Evas_Coord* minh_, Evas_Coord restrictedw_, Evas_Coord restrictedh_)
{
   try
      {
         static_cast<T*>(self->this_)->size_min_restricted_calc(minw_, minh_, restrictedw_, restrictedh_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
bool edje_object_part_box_remove_all_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, const char * part_, Eina_Bool clear_)
{
   try
      {
         return static_cast<T*>(self->this_)->part_box_remove_all(::efl::eolian::to_cxx<::efl::eina::string_view>(part_, std::tuple<std::false_type>()), ::efl::eolian::to_cxx<bool>(clear_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Eina_Bool _tmp_ret{};
         return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }
}

template <typename T>
bool edje_object_part_drag_page_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, const char * part_, double dx_, double dy_)
{
   try
      {
         return static_cast<T*>(self->this_)->part_drag_page(::efl::eolian::to_cxx<::efl::eina::string_view>(part_, std::tuple<std::false_type>()), dx_, dy_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Eina_Bool _tmp_ret{};
         return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }
}

template <typename T>
bool edje_object_part_text_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, const char * part_, const char * text_)
{
   try
      {
         return static_cast<T*>(self->this_)->part_text_set(::efl::eolian::to_cxx<::efl::eina::string_view>(part_, std::tuple<std::false_type>()), ::efl::eolian::to_cxx<::efl::eina::string_view>(text_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Eina_Bool _tmp_ret{};
         return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }
}

template <typename T>
::efl::eina::string_view edje_object_part_text_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, const char * part_)
{
   try
      {
         return static_cast<T*>(self->this_)->part_text_get(::efl::eolian::to_cxx<::efl::eina::string_view>(part_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         const char * _tmp_ret{};
         return ::efl::eolian::to_cxx<::efl::eina::string_view>(_tmp_ret, std::tuple<std::false_type>());
      }
}

template <typename T>
void edje_object_part_text_input_panel_show_on_demand_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, const char * part_, Eina_Bool ondemand_)
{
   try
      {
         static_cast<T*>(self->this_)->part_text_input_panel_show_on_demand_set(::efl::eolian::to_cxx<::efl::eina::string_view>(part_, std::tuple<std::false_type>()), ::efl::eolian::to_cxx<bool>(ondemand_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
bool edje_object_part_text_input_panel_show_on_demand_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, const char * part_)
{
   try
      {
         return static_cast<T*>(self->this_)->part_text_input_panel_show_on_demand_get(::efl::eolian::to_cxx<::efl::eina::string_view>(part_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Eina_Bool _tmp_ret{};
         return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }
}

template <typename T>
void edje_object_part_text_input_hint_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, const char * part_, Edje_Input_Hints input_hints_)
{
   try
      {
         static_cast<T*>(self->this_)->part_text_input_hint_set(::efl::eolian::to_cxx<::efl::eina::string_view>(part_, std::tuple<std::false_type>()), input_hints_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
Edje_Input_Hints edje_object_part_text_input_hint_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, const char * part_)
{
   try
      {
         return static_cast<T*>(self->this_)->part_text_input_hint_get(::efl::eolian::to_cxx<::efl::eina::string_view>(part_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Edje_Input_Hints _tmp_ret{};
         return _tmp_ret;
      }
}

template <typename T>
::efl::eina::string_view edje_object_part_text_selection_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, const char * part_)
{
   try
      {
         return static_cast<T*>(self->this_)->part_text_selection_get(::efl::eolian::to_cxx<::efl::eina::string_view>(part_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         const char * _tmp_ret{};
         return ::efl::eolian::to_cxx<::efl::eina::string_view>(_tmp_ret, std::tuple<std::false_type>());
      }
}

template <typename T>
bool edje_object_part_text_cursor_is_format_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, const char * part_, Edje_Cursor cur_)
{
   try
      {
         return static_cast<T*>(self->this_)->part_text_cursor_is_format_get(::efl::eolian::to_cxx<::efl::eina::string_view>(part_, std::tuple<std::false_type>()), cur_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Eina_Bool _tmp_ret{};
         return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }
}

template <typename T>
bool edje_object_text_class_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, const char * text_class_, const char ** font_, Evas_Font_Size* size_)
{
   try
      {
         return static_cast<T*>(self->this_)->text_class_get(::efl::eolian::to_cxx<::efl::eina::string_view>(text_class_, std::tuple<std::false_type>()), font_, size_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Eina_Bool _tmp_ret{};
         return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }
}

template <typename T>
void edje_object_text_class_del_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, const char * text_class_)
{
   try
      {
         static_cast<T*>(self->this_)->text_class_del(::efl::eolian::to_cxx<::efl::eina::string_view>(text_class_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
bool edje_object_color_class_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, const char * color_class_, int r_, int g_, int b_, int a_, int r2_, int g2_, int b2_, int a2_, int r3_, int g3_, int b3_, int a3_)
{
   try
      {
         return static_cast<T*>(self->this_)->color_class_set(::efl::eolian::to_cxx<::efl::eina::string_view>(color_class_, std::tuple<std::false_type>()), r_, g_, b_, a_, r2_, g2_, b2_, a2_, r3_, g3_, b3_, a3_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Eina_Bool _tmp_ret{};
         return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }
}

template <typename T>
bool edje_object_color_class_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, const char * color_class_, int* r_, int* g_, int* b_, int* a_, int* r2_, int* g2_, int* b2_, int* a2_, int* r3_, int* g3_, int* b3_, int* a3_)
{
   try
      {
         return static_cast<T*>(self->this_)->color_class_get(::efl::eolian::to_cxx<::efl::eina::string_view>(color_class_, std::tuple<std::false_type>()), r_, g_, b_, a_, r2_, g2_, b2_, a2_, r3_, g3_, b3_, a3_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Eina_Bool _tmp_ret{};
         return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }
}

template <typename T>
::efl::eina::string_view edje_object_color_class_description_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, const char * color_class_)
{
   try
      {
         return static_cast<T*>(self->this_)->color_class_description_get(::efl::eolian::to_cxx<::efl::eina::string_view>(color_class_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         const char * _tmp_ret{};
         return ::efl::eolian::to_cxx<::efl::eina::string_view>(_tmp_ret, std::tuple<std::false_type>());
      }
}

template <typename T>
bool edje_object_color_class_clear_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->color_class_clear();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Eina_Bool _tmp_ret{};
         return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }
}

template <typename T>
void edje_object_color_class_del_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, const char * color_class_)
{
   try
      {
         static_cast<T*>(self->this_)->color_class_del(::efl::eolian::to_cxx<::efl::eina::string_view>(color_class_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
bool edje_object_size_class_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, const char * size_class_, int minw_, int minh_, int maxw_, int maxh_)
{
   try
      {
         return static_cast<T*>(self->this_)->size_class_set(::efl::eolian::to_cxx<::efl::eina::string_view>(size_class_, std::tuple<std::false_type>()), minw_, minh_, maxw_, maxh_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Eina_Bool _tmp_ret{};
         return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }
}

template <typename T>
bool edje_object_size_class_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, const char * size_class_, int* minw_, int* minh_, int* maxw_, int* maxh_)
{
   try
      {
         return static_cast<T*>(self->this_)->size_class_get(::efl::eolian::to_cxx<::efl::eina::string_view>(size_class_, std::tuple<std::false_type>()), minw_, minh_, maxw_, maxh_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Eina_Bool _tmp_ret{};
         return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }
}

template <typename T>
void edje_object_size_class_del_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, const char * size_class_)
{
   try
      {
         static_cast<T*>(self->this_)->size_class_del(::efl::eolian::to_cxx<::efl::eina::string_view>(size_class_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
bool edje_object_part_drag_step_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, const char * part_, double dx_, double dy_)
{
   try
      {
         return static_cast<T*>(self->this_)->part_drag_step(::efl::eolian::to_cxx<::efl::eina::string_view>(part_, std::tuple<std::false_type>()), dx_, dy_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Eina_Bool _tmp_ret{};
         return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }
}

template <typename T>
bool edje_object_part_text_cursor_up_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, const char * part_, Edje_Cursor cur_)
{
   try
      {
         return static_cast<T*>(self->this_)->part_text_cursor_up(::efl::eolian::to_cxx<::efl::eina::string_view>(part_, std::tuple<std::false_type>()), cur_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Eina_Bool _tmp_ret{};
         return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }
}

template <typename T>
void edje_object_part_text_cursor_geometry_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, const char * part_, Evas_Coord* x_, Evas_Coord* y_, Evas_Coord* w_, Evas_Coord* h_)
{
   try
      {
         static_cast<T*>(self->this_)->part_text_cursor_geometry_get(::efl::eolian::to_cxx<::efl::eina::string_view>(part_, std::tuple<std::false_type>()), x_, y_, w_, h_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
::efl::eina::crange_list< ::efl::eina::string_view > edje_object_part_text_anchor_list_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, const char * part_)
{
   try
      {
         return static_cast<T*>(self->this_)->part_text_anchor_list_get(::efl::eolian::to_cxx<::efl::eina::string_view>(part_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         const Eina_List * _tmp_ret{};
         return ::efl::eolian::to_cxx<::efl::eina::crange_list< ::efl::eina::string_view >>(_tmp_ret, std::tuple<std::false_type, std::false_type>());
      }
}

template <typename T>
void edje_object_text_insert_filter_callback_add_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, const char * part_, Edje_Text_Filter_Cb func_, void * data_)
{
   try
      {
         static_cast<T*>(self->this_)->text_insert_filter_callback_add(::efl::eolian::to_cxx<::efl::eina::string_view>(part_, std::tuple<std::false_type>()), func_, data_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void edje_object_part_text_input_panel_show_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, const char * part_)
{
   try
      {
         static_cast<T*>(self->this_)->part_text_input_panel_show(::efl::eolian::to_cxx<::efl::eina::string_view>(part_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
bool edje_object_part_exists_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, const char * part_)
{
   try
      {
         return static_cast<T*>(self->this_)->part_exists(::efl::eolian::to_cxx<::efl::eina::string_view>(part_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Eina_Bool _tmp_ret{};
         return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }
}

template <typename T>
void * edje_object_text_markup_filter_callback_del_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, const char * part_, Edje_Markup_Filter_Cb func_)
{
   try
      {
         return static_cast<T*>(self->this_)->text_markup_filter_callback_del(::efl::eolian::to_cxx<::efl::eina::string_view>(part_, std::tuple<std::false_type>()), func_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         void * _tmp_ret{};
         return _tmp_ret;
      }
}

template <typename T>
bool edje_object_part_text_cursor_is_visible_format_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, const char * part_, Edje_Cursor cur_)
{
   try
      {
         return static_cast<T*>(self->this_)->part_text_cursor_is_visible_format_get(::efl::eolian::to_cxx<::efl::eina::string_view>(part_, std::tuple<std::false_type>()), cur_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Eina_Bool _tmp_ret{};
         return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }
}

template <typename T>
void edje_object_part_text_user_insert_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, const char * part_, const char * text_)
{
   try
      {
         static_cast<T*>(self->this_)->part_text_user_insert(::efl::eolian::to_cxx<::efl::eina::string_view>(part_, std::tuple<std::false_type>()), ::efl::eolian::to_cxx<::efl::eina::string_view>(text_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
bool edje_object_part_text_cursor_prev_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, const char * part_, Edje_Cursor cur_)
{
   try
      {
         return static_cast<T*>(self->this_)->part_text_cursor_prev(::efl::eolian::to_cxx<::efl::eina::string_view>(part_, std::tuple<std::false_type>()), cur_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Eina_Bool _tmp_ret{};
         return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }
}

template <typename T>
::efl::eina::crange_list< ::efl::eina::string_view > edje_object_part_text_item_list_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, const char * part_)
{
   try
      {
         return static_cast<T*>(self->this_)->part_text_item_list_get(::efl::eolian::to_cxx<::efl::eina::string_view>(part_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         const Eina_List * _tmp_ret{};
         return ::efl::eolian::to_cxx<::efl::eina::crange_list< ::efl::eina::string_view >>(_tmp_ret, std::tuple<std::false_type, std::false_type>());
      }
}

template <typename T>
bool edje_object_part_swallow_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, const char * part_, Evas_Object * obj_swallow_)
{
   try
      {
         return static_cast<T*>(self->this_)->part_swallow(::efl::eolian::to_cxx<::efl::eina::string_view>(part_, std::tuple<std::false_type>()), ::efl::eolian::to_cxx<::evas::object>(obj_swallow_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Eina_Bool _tmp_ret{};
         return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }
}

template <typename T>
bool edje_object_update_hints_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->update_hints_get();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Eina_Bool _tmp_ret{};
         return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }
}

template <typename T>
void edje_object_update_hints_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Eina_Bool update_)
{
   try
      {
         static_cast<T*>(self->this_)->update_hints_set(::efl::eolian::to_cxx<bool>(update_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
bool edje_object_mirrored_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->mirrored_get();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Eina_Bool _tmp_ret{};
         return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }
}

template <typename T>
void edje_object_mirrored_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Eina_Bool rtl_)
{
   try
      {
         static_cast<T*>(self->this_)->mirrored_set(::efl::eolian::to_cxx<bool>(rtl_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
::efl::eina::string_view edje_object_language_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->language_get();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         const char * _tmp_ret{};
         return ::efl::eolian::to_cxx<::efl::eina::string_view>(_tmp_ret, std::tuple<std::false_type>());
      }
}

template <typename T>
void edje_object_language_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, const char * language_)
{
   try
      {
         static_cast<T*>(self->this_)->language_set(::efl::eolian::to_cxx<::efl::eina::string_view>(language_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
bool edje_object_animation_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->animation_get();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Eina_Bool _tmp_ret{};
         return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }
}

template <typename T>
void edje_object_animation_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Eina_Bool on_)
{
   try
      {
         static_cast<T*>(self->this_)->animation_set(::efl::eolian::to_cxx<bool>(on_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
bool edje_object_play_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->play_get();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Eina_Bool _tmp_ret{};
         return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }
}

template <typename T>
void edje_object_play_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Eina_Bool play_)
{
   try
      {
         static_cast<T*>(self->this_)->play_set(::efl::eolian::to_cxx<bool>(play_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
const Edje_Perspective * edje_object_perspective_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->perspective_get();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         const Edje_Perspective * _tmp_ret{};
         return _tmp_ret;
      }
}

template <typename T>
void edje_object_perspective_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Edje_Perspective * ps_)
{
   try
      {
         static_cast<T*>(self->this_)->perspective_set(ps_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
double edje_object_scale_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
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
bool edje_object_scale_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, double scale_)
{
   try
      {
         return static_cast<T*>(self->this_)->scale_set(scale_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Eina_Bool _tmp_ret{};
         return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }
}

template <typename T>
double edje_object_base_scale_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->base_scale_get();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         double _tmp_ret{};
         return _tmp_ret;
      }
}

template <typename T>
void edje_object_text_change_cb_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Edje_Text_Change_Cb func_, void * data_)
{
   try
      {
         static_cast<T*>(self->this_)->text_change_cb_set(func_, data_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void edje_object_part_text_cursor_begin_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, const char * part_, Edje_Cursor cur_)
{
   try
      {
         static_cast<T*>(self->this_)->part_text_cursor_begin_set(::efl::eolian::to_cxx<::efl::eina::string_view>(part_, std::tuple<std::false_type>()), cur_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void edje_object_part_text_cursor_line_end_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, const char * part_, Edje_Cursor cur_)
{
   try
      {
         static_cast<T*>(self->this_)->part_text_cursor_line_end_set(::efl::eolian::to_cxx<::efl::eina::string_view>(part_, std::tuple<std::false_type>()), cur_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
bool edje_object_text_class_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, const char * text_class_, const char * font_, Evas_Font_Size size_)
{
   try
      {
         return static_cast<T*>(self->this_)->text_class_set(::efl::eolian::to_cxx<::efl::eina::string_view>(text_class_, std::tuple<std::false_type>()), ::efl::eolian::to_cxx<::efl::eina::string_view>(font_, std::tuple<std::false_type>()), size_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Eina_Bool _tmp_ret{};
         return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }
}

template <typename T>
bool edje_object_part_text_cursor_coord_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, const char * part_, Edje_Cursor cur_, Evas_Coord x_, Evas_Coord y_)
{
   try
      {
         return static_cast<T*>(self->this_)->part_text_cursor_coord_set(::efl::eolian::to_cxx<::efl::eina::string_view>(part_, std::tuple<std::false_type>()), cur_, x_, y_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Eina_Bool _tmp_ret{};
         return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }
}

template <typename T>
void edje_object_part_text_cursor_end_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, const char * part_, Edje_Cursor cur_)
{
   try
      {
         static_cast<T*>(self->this_)->part_text_cursor_end_set(::efl::eolian::to_cxx<::efl::eina::string_view>(part_, std::tuple<std::false_type>()), cur_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
bool edje_object_part_text_escaped_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, const char * part_, const char * text_)
{
   try
      {
         return static_cast<T*>(self->this_)->part_text_escaped_set(::efl::eolian::to_cxx<::efl::eina::string_view>(part_, std::tuple<std::false_type>()), ::efl::eolian::to_cxx<::efl::eina::string_view>(text_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Eina_Bool _tmp_ret{};
         return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }
}

template <typename T>
void edje_object_item_provider_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Edje_Item_Provider_Cb func_, void * data_)
{
   try
      {
         static_cast<T*>(self->this_)->item_provider_set(func_, data_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void edje_object_part_text_cursor_line_begin_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, const char * part_, Edje_Cursor cur_)
{
   try
      {
         static_cast<T*>(self->this_)->part_text_cursor_line_begin_set(::efl::eolian::to_cxx<::efl::eina::string_view>(part_, std::tuple<std::false_type>()), cur_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void edje_object_message_handler_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Edje_Message_Handler_Cb func_, void * data_)
{
   try
      {
         static_cast<T*>(self->this_)->message_handler_set(func_, data_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void edje_object_size_min_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Evas_Coord* minw_, Evas_Coord* minh_)
{
   try
      {
         static_cast<T*>(self->this_)->size_min_get(minw_, minh_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
::efl::eina::range_list< ::efl::eina::string_view > edje_object_access_part_list_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->access_part_list_get();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Eina_List * _tmp_ret{};
         return ::efl::eolian::to_cxx<::efl::eina::range_list< ::efl::eina::string_view >>(_tmp_ret, std::tuple<std::false_type, std::false_type>());
      }
}

template <typename T>
Edje_Load_Error edje_object_load_error_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->load_error_get();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Edje_Load_Error _tmp_ret{};
         return _tmp_ret;
      }
}

template <typename T>
void edje_object_size_max_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Evas_Coord* maxw_, Evas_Coord* maxh_)
{
   try
      {
         static_cast<T*>(self->this_)->size_max_get(maxw_, maxh_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
double edje_object_transition_duration_factor_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->transition_duration_factor_get();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         double _tmp_ret{};
         return _tmp_ret;
      }
}

template <typename T>
void edje_object_transition_duration_factor_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, double scale_)
{
   try
      {
         static_cast<T*>(self->this_)->transition_duration_factor_set(scale_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

namespace efl { namespace eo { namespace detail {

template<>
struct operations< ::edje::object >
{
   template <typename T>
   struct type
         : virtual operations< ::evas::smart_clipped >::template type<T>
         , virtual operations< ::efl::file >::template type<T>
   {
      virtual bool part_table_clear(::efl::eina::string_view part_, bool clear_)
      {
         Eina_Bool _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::edje_obj_part_table_clear(::efl::eolian::to_c(part_), ::efl::eolian::to_c(clear_)));
            return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }

      virtual Edje_External_Param_Type part_external_param_type_get(::efl::eina::string_view part_, const char* param_)
      {
         Edje_External_Param_Type _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::edje_obj_part_external_param_type_get(::efl::eolian::to_c(part_), param_));
            return _tmp_ret;
      }

      virtual void part_text_select_allow_set(::efl::eina::string_view part_, bool allow_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::edje_obj_part_text_select_allow_set(::efl::eolian::to_c(part_), ::efl::eolian::to_c(allow_)));
      }

      virtual ::efl::eina::string_view part_state_get(::efl::eina::string_view part_, double* val_ret_)
      {
         const char * _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::edje_obj_part_state_get(::efl::eolian::to_c(part_), val_ret_));
            return ::efl::eolian::to_cxx<::efl::eina::string_view>(_tmp_ret, std::tuple<std::false_type>());
      }

      virtual void * text_markup_filter_callback_del_full(::efl::eina::string_view part_, Edje_Markup_Filter_Cb func_, void * data_)
      {
         void * _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::edje_obj_text_markup_filter_callback_del_full(::efl::eolian::to_c(part_), func_, data_));
            return _tmp_ret;
      }

      virtual bool part_drag_step_set(::efl::eina::string_view part_, double dx_, double dy_)
      {
         Eina_Bool _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::edje_obj_part_drag_step_set(::efl::eolian::to_c(part_), dx_, dy_));
            return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }

      virtual bool part_drag_step_get(::efl::eina::string_view part_, double* dx_, double* dy_)
      {
         Eina_Bool _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::edje_obj_part_drag_step_get(::efl::eolian::to_c(part_), dx_, dy_));
            return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }

      virtual void * part_text_imf_context_get(::efl::eina::string_view part_)
      {
         void * _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::edje_obj_part_text_imf_context_get(::efl::eolian::to_c(part_)));
            return _tmp_ret;
      }

      virtual void part_text_select_begin(::efl::eina::string_view part_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::edje_obj_part_text_select_begin(::efl::eolian::to_c(part_)));
      }

      virtual ::efl::eina::string_view part_text_style_user_peek(::efl::eina::string_view part_)
      {
         const char * _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::edje_obj_part_text_style_user_peek(::efl::eolian::to_c(part_)));
            return ::efl::eolian::to_cxx<::efl::eina::string_view>(_tmp_ret, std::tuple<std::false_type>());
      }

      template <typename F_func_>
      void * signal_callback_del(::efl::eina::string_view emission_, ::efl::eina::string_view source_, F_func_ && func_)
      {
         void * _tmp_ret = {};
         typedef typename std::remove_reference<F_func_>::type _no_ref_F_func_;
         _no_ref_F_func_* _tmp_func_ = new _no_ref_F_func_(std::forward< F_func_ >(func_));
         eo_do(dynamic_cast<T*>(this)->_eo_ptr(), eo_event_callback_add(EO_EV_DEL, &::efl::eolian::free_callback_calback<_no_ref_F_func_>, _tmp_func_));


         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::edje_obj_signal_callback_del(::efl::eolian::to_c(emission_), ::efl::eolian::to_c(source_), ::efl::eolian::get_callback<Edje_Signal_Cb, _no_ref_F_func_ >(), _tmp_func_));
            return _tmp_ret;
      }

      virtual bool part_text_cursor_next(::efl::eina::string_view part_, Edje_Cursor cur_)
      {
         Eina_Bool _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::edje_obj_part_text_cursor_next(::efl::eolian::to_c(part_), cur_));
            return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }

      virtual void part_text_style_user_push(::efl::eina::string_view part_, ::efl::eina::string_view style_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::edje_obj_part_text_style_user_push(::efl::eolian::to_c(part_), ::efl::eolian::to_c(style_)));
      }

      virtual void part_text_append(::efl::eina::string_view part_, ::efl::eina::string_view text_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::edje_obj_part_text_append(::efl::eolian::to_c(part_), ::efl::eolian::to_c(text_)));
      }

      virtual bool part_geometry_get(::efl::eina::string_view part_, Evas_Coord* x_, Evas_Coord* y_, Evas_Coord* w_, Evas_Coord* h_)
      {
         Eina_Bool _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::edje_obj_part_geometry_get(::efl::eolian::to_c(part_), x_, y_, w_, h_));
            return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }

      virtual void part_text_input_panel_hide(::efl::eina::string_view part_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::edje_obj_part_text_input_panel_hide(::efl::eolian::to_c(part_)));
      }

      virtual bool part_text_item_geometry_get(::efl::eina::string_view part_, ::efl::eina::string_view item_, Evas_Coord* cx_, Evas_Coord* cy_, Evas_Coord* cw_, Evas_Coord* ch_)
      {
         Eina_Bool _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::edje_obj_part_text_item_geometry_get(::efl::eolian::to_c(part_), ::efl::eolian::to_c(item_), cx_, cy_, cw_, ch_));
            return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }

      virtual bool part_table_unpack(::efl::eina::string_view part_, ::evas::object child_obj_)
      {
         Eina_Bool _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::edje_obj_part_table_unpack(::efl::eolian::to_c(part_), ::efl::eolian::to_c(child_obj_)));
            return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }

      virtual void part_text_select_abort(::efl::eina::string_view part_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::edje_obj_part_text_select_abort(::efl::eolian::to_c(part_)));
      }

      virtual void * text_insert_filter_callback_del_full(::efl::eina::string_view part_, Edje_Text_Filter_Cb func_, void * data_)
      {
         void * _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::edje_obj_text_insert_filter_callback_del_full(::efl::eolian::to_c(part_), func_, data_));
            return _tmp_ret;
      }

      virtual void part_text_style_user_pop(::efl::eina::string_view part_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::edje_obj_part_text_style_user_pop(::efl::eolian::to_c(part_)));
      }

      virtual void part_text_input_panel_imdata_set(::efl::eina::string_view part_, const void * data_, int len_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::edje_obj_part_text_input_panel_imdata_set(::efl::eolian::to_c(part_), data_, len_));
      }

      virtual void part_text_input_panel_imdata_get(::efl::eina::string_view part_, void * data_, int * len_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::edje_obj_part_text_input_panel_imdata_get(::efl::eolian::to_c(part_), data_, len_));
      }

      virtual void part_text_insert(::efl::eina::string_view part_, ::efl::eina::string_view text_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::edje_obj_part_text_insert(::efl::eolian::to_c(part_), ::efl::eolian::to_c(text_)));
      }

      virtual ::evas::object part_box_remove_at(::efl::eina::string_view part_, unsigned int pos_)
      {
         Evas_Object * _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::edje_obj_part_box_remove_at(::efl::eolian::to_c(part_), pos_));
            return ::efl::eolian::to_cxx<::evas::object>(_tmp_ret, std::tuple<std::false_type>());
      }

      virtual void part_text_cursor_copy(::efl::eina::string_view part_, Edje_Cursor src_, Edje_Cursor dst_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::edje_obj_part_text_cursor_copy(::efl::eolian::to_c(part_), src_, dst_));
      }

      virtual bool parts_extends_calc(Evas_Coord* x_, Evas_Coord* y_, Evas_Coord* w_, Evas_Coord* h_)
      {
         Eina_Bool _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::edje_obj_parts_extends_calc(x_, y_, w_, h_));
            return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }

      virtual bool part_drag_value_set(::efl::eina::string_view part_, double dx_, double dy_)
      {
         Eina_Bool _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::edje_obj_part_drag_value_set(::efl::eolian::to_c(part_), dx_, dy_));
            return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }

      virtual bool part_drag_value_get(::efl::eina::string_view part_, double* dx_, double* dy_)
      {
         Eina_Bool _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::edje_obj_part_drag_value_get(::efl::eolian::to_c(part_), dx_, dy_));
            return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }

      virtual void calc_force()
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::edje_obj_calc_force());
      }

      virtual void part_text_cursor_pos_set(::efl::eina::string_view part_, Edje_Cursor cur_, int pos_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::edje_obj_part_text_cursor_pos_set(::efl::eolian::to_c(part_), cur_, pos_));
      }

      virtual int part_text_cursor_pos_get(::efl::eina::string_view part_, Edje_Cursor cur_)
      {
         int _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::edje_obj_part_text_cursor_pos_get(::efl::eolian::to_c(part_), cur_));
            return _tmp_ret;
      }

      virtual int freeze()
      {
         int _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::edje_obj_freeze());
            return _tmp_ret;
      }

      virtual char * part_text_cursor_content_get(::efl::eina::string_view part_, Edje_Cursor cur_)
      {
         char * _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::edje_obj_part_text_cursor_content_get(::efl::eolian::to_c(part_), cur_));
            return _tmp_ret;
      }

      virtual void part_text_input_panel_layout_set(::efl::eina::string_view part_, Edje_Input_Panel_Layout layout_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::edje_obj_part_text_input_panel_layout_set(::efl::eolian::to_c(part_), layout_));
      }

      virtual Edje_Input_Panel_Layout part_text_input_panel_layout_get(::efl::eina::string_view part_)
      {
         Edje_Input_Panel_Layout _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::edje_obj_part_text_input_panel_layout_get(::efl::eolian::to_c(part_)));
            return _tmp_ret;
      }

      virtual bool part_table_pack(::efl::eina::string_view part_, ::evas::object child_obj_, unsigned short col_, unsigned short row_, unsigned short colspan_, unsigned short rowspan_)
      {
         Eina_Bool _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::edje_obj_part_table_pack(::efl::eolian::to_c(part_), ::efl::eolian::to_c(child_obj_), col_, row_, colspan_, rowspan_));
            return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }

      virtual void part_text_input_panel_language_set(::efl::eina::string_view part_, Edje_Input_Panel_Lang lang_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::edje_obj_part_text_input_panel_language_set(::efl::eolian::to_c(part_), lang_));
      }

      virtual Edje_Input_Panel_Lang part_text_input_panel_language_get(::efl::eina::string_view part_)
      {
         Edje_Input_Panel_Lang _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::edje_obj_part_text_input_panel_language_get(::efl::eolian::to_c(part_)));
            return _tmp_ret;
      }

      virtual bool part_table_col_row_size_get(::efl::eina::string_view part_, int* cols_, int* rows_)
      {
         Eina_Bool _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::edje_obj_part_table_col_row_size_get(::efl::eolian::to_c(part_), cols_, rows_));
            return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }

      virtual ::evas::object part_external_object_get(::efl::eina::string_view part_)
      {
         Evas_Object * _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::edje_obj_part_external_object_get(::efl::eolian::to_c(part_)));
            return ::efl::eolian::to_cxx<::evas::object>(_tmp_ret, std::tuple<std::false_type>());
      }

      virtual ::evas::object part_external_content_get(::efl::eina::string_view part_, const char* content_)
      {
         Evas_Object * _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::edje_obj_part_external_content_get(::efl::eolian::to_c(part_), content_));
            return ::efl::eolian::to_cxx<::evas::object>(_tmp_ret, std::tuple<std::false_type>());
      }

      virtual bool preload(bool cancel_)
      {
         Eina_Bool _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::edje_obj_preload(::efl::eolian::to_c(cancel_)));
            return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }

      virtual void part_text_input_panel_enabled_set(::efl::eina::string_view part_, bool enabled_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::edje_obj_part_text_input_panel_enabled_set(::efl::eolian::to_c(part_), ::efl::eolian::to_c(enabled_)));
      }

      virtual bool part_text_input_panel_enabled_get(::efl::eina::string_view part_)
      {
         Eina_Bool _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::edje_obj_part_text_input_panel_enabled_get(::efl::eolian::to_c(part_)));
            return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }

      virtual void part_text_select_extend(::efl::eina::string_view part_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::edje_obj_part_text_select_extend(::efl::eolian::to_c(part_)));
      }

      virtual bool part_box_insert_at(::efl::eina::string_view part_, ::evas::object child_, unsigned int pos_)
      {
         Eina_Bool _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::edje_obj_part_box_insert_at(::efl::eolian::to_c(part_), ::efl::eolian::to_c(child_), pos_));
            return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }

      virtual ::efl::eina::crange_list< const Evas_Textblock_Rectangle * > part_text_anchor_geometry_get(::efl::eina::string_view part_, ::efl::eina::string_view anchor_)
      {
         const Eina_List * _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::edje_obj_part_text_anchor_geometry_get(::efl::eolian::to_c(part_), ::efl::eolian::to_c(anchor_)));
            return ::efl::eolian::to_cxx<::efl::eina::crange_list< const Evas_Textblock_Rectangle * >>(_tmp_ret, std::tuple<std::false_type, std::false_type>());
      }

      virtual bool part_text_cursor_down(::efl::eina::string_view part_, Edje_Cursor cur_)
      {
         Eina_Bool _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::edje_obj_part_text_cursor_down(::efl::eolian::to_c(part_), cur_));
            return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }

      virtual bool part_drag_page_set(::efl::eina::string_view part_, double dx_, double dy_)
      {
         Eina_Bool _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::edje_obj_part_drag_page_set(::efl::eolian::to_c(part_), dx_, dy_));
            return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }

      virtual bool part_drag_page_get(::efl::eina::string_view part_, double* dx_, double* dy_)
      {
         Eina_Bool _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::edje_obj_part_drag_page_get(::efl::eolian::to_c(part_), dx_, dy_));
            return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }

      virtual bool part_box_prepend(::efl::eina::string_view part_, ::evas::object child_)
      {
         Eina_Bool _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::edje_obj_part_box_prepend(::efl::eolian::to_c(part_), ::efl::eolian::to_c(child_)));
            return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }

      virtual void signal_emit(::efl::eina::string_view emission_, ::efl::eina::string_view source_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::edje_obj_signal_emit(::efl::eolian::to_c(emission_), ::efl::eolian::to_c(source_)));
      }

      virtual void part_text_input_panel_layout_variation_set(::efl::eina::string_view part_, int variation_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::edje_obj_part_text_input_panel_layout_variation_set(::efl::eolian::to_c(part_), variation_));
      }

      virtual int part_text_input_panel_layout_variation_get(::efl::eina::string_view part_)
      {
         int _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::edje_obj_part_text_input_panel_layout_variation_get(::efl::eolian::to_c(part_)));
            return _tmp_ret;
      }

      virtual void message_send(Edje_Message_Type type_, int id_, void * msg_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::edje_obj_message_send(type_, id_, msg_));
      }

      virtual void part_text_select_none(::efl::eina::string_view part_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::edje_obj_part_text_select_none(::efl::eolian::to_c(part_)));
      }

      virtual ::evas::object part_object_get(::efl::eina::string_view part_)
      {
         const Evas_Object * _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::edje_obj_part_object_get(::efl::eolian::to_c(part_)));
            return ::efl::eolian::to_cxx<::evas::object>(_tmp_ret, std::tuple<std::false_type>());
      }

      virtual bool part_drag_size_set(::efl::eina::string_view part_, double dw_, double dh_)
      {
         Eina_Bool _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::edje_obj_part_drag_size_set(::efl::eolian::to_c(part_), dw_, dh_));
            return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }

      virtual bool part_drag_size_get(::efl::eina::string_view part_, double* dw_, double* dh_)
      {
         Eina_Bool _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::edje_obj_part_drag_size_get(::efl::eolian::to_c(part_), dw_, dh_));
            return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }

      virtual void * text_insert_filter_callback_del(::efl::eina::string_view part_, Edje_Text_Filter_Cb func_)
      {
         void * _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::edje_obj_text_insert_filter_callback_del(::efl::eolian::to_c(part_), func_));
            return _tmp_ret;
      }

      virtual Edje_Drag_Dir part_drag_dir_get(::efl::eina::string_view part_)
      {
         Edje_Drag_Dir _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::edje_obj_part_drag_dir_get(::efl::eolian::to_c(part_)));
            return _tmp_ret;
      }

      virtual bool part_text_unescaped_set(::efl::eina::string_view part_, ::efl::eina::string_view text_to_escape_)
      {
         Eina_Bool _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::edje_obj_part_text_unescaped_set(::efl::eolian::to_c(part_), ::efl::eolian::to_c(text_to_escape_)));
            return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }

      virtual char * part_text_unescaped_get(::efl::eina::string_view part_)
      {
         char * _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::edje_obj_part_text_unescaped_get(::efl::eolian::to_c(part_)));
            return _tmp_ret;
      }

      template <typename F_func_>
      void signal_callback_add(::efl::eina::string_view emission_, ::efl::eina::string_view source_, F_func_ && func_)
      {
         typedef typename std::remove_reference<F_func_>::type _no_ref_F_func_;
         _no_ref_F_func_* _tmp_func_ = new _no_ref_F_func_(std::forward< F_func_ >(func_));
         eo_do(dynamic_cast<T*>(this)->_eo_ptr(), eo_event_callback_add(EO_EV_DEL, &::efl::eolian::free_callback_calback<_no_ref_F_func_>, _tmp_func_));


         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::edje_obj_signal_callback_add(::efl::eolian::to_c(emission_), ::efl::eolian::to_c(source_), ::efl::eolian::get_callback<Edje_Signal_Cb, _no_ref_F_func_ >(), _tmp_func_));
      }

      virtual void part_text_select_all(::efl::eina::string_view part_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::edje_obj_part_text_select_all(::efl::eolian::to_c(part_)));
      }

      virtual void part_text_input_panel_return_key_disabled_set(::efl::eina::string_view part_, bool disabled_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::edje_obj_part_text_input_panel_return_key_disabled_set(::efl::eolian::to_c(part_), ::efl::eolian::to_c(disabled_)));
      }

      virtual bool part_text_input_panel_return_key_disabled_get(::efl::eina::string_view part_)
      {
         Eina_Bool _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::edje_obj_part_text_input_panel_return_key_disabled_get(::efl::eolian::to_c(part_)));
            return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }

      virtual void part_text_autocapital_type_set(::efl::eina::string_view part_, Edje_Text_Autocapital_Type autocapital_type_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::edje_obj_part_text_autocapital_type_set(::efl::eolian::to_c(part_), autocapital_type_));
      }

      virtual Edje_Text_Autocapital_Type part_text_autocapital_type_get(::efl::eina::string_view part_)
      {
         Edje_Text_Autocapital_Type _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::edje_obj_part_text_autocapital_type_get(::efl::eolian::to_c(part_)));
            return _tmp_ret;
      }

      virtual void part_unswallow(::evas::object obj_swallow_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::edje_obj_part_unswallow(::efl::eolian::to_c(obj_swallow_)));
      }

      virtual void part_text_prediction_allow_set(::efl::eina::string_view part_, bool prediction_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::edje_obj_part_text_prediction_allow_set(::efl::eolian::to_c(part_), ::efl::eolian::to_c(prediction_)));
      }

      virtual bool part_text_prediction_allow_get(::efl::eina::string_view part_)
      {
         Eina_Bool _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::edje_obj_part_text_prediction_allow_get(::efl::eolian::to_c(part_)));
            return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }

      virtual ::efl::eina::string_view data_get(::efl::eina::string_view key_)
      {
         const char * _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::edje_obj_data_get(::efl::eolian::to_c(key_)));
            return ::efl::eolian::to_cxx<::efl::eina::string_view>(_tmp_ret, std::tuple<std::false_type>());
      }

      virtual void text_markup_filter_callback_add(::efl::eina::string_view part_, Edje_Markup_Filter_Cb func_, void * data_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::edje_obj_text_markup_filter_callback_add(::efl::eolian::to_c(part_), func_, data_));
      }

      virtual void message_signal_process()
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::edje_obj_message_signal_process());
      }

      virtual ::evas::object part_box_remove(::efl::eina::string_view part_, ::evas::object child_)
      {
         Evas_Object * _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::edje_obj_part_box_remove(::efl::eolian::to_c(part_), ::efl::eolian::to_c(child_)));
            return ::efl::eolian::to_cxx<::evas::object>(_tmp_ret, std::tuple<std::false_type>());
      }

      virtual int thaw()
      {
         int _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::edje_obj_thaw());
            return _tmp_ret;
      }

      virtual ::evas::object part_swallow_get(::efl::eina::string_view part_)
      {
         Evas_Object * _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::edje_obj_part_swallow_get(::efl::eolian::to_c(part_)));
            return ::efl::eolian::to_cxx<::evas::object>(_tmp_ret, std::tuple<std::false_type>());
      }

      virtual void part_text_imf_context_reset(::efl::eina::string_view part_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::edje_obj_part_text_imf_context_reset(::efl::eolian::to_c(part_)));
      }

      virtual void part_text_input_panel_return_key_type_set(::efl::eina::string_view part_, Edje_Input_Panel_Return_Key_Type return_key_type_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::edje_obj_part_text_input_panel_return_key_type_set(::efl::eolian::to_c(part_), return_key_type_));
      }

      virtual Edje_Input_Panel_Return_Key_Type part_text_input_panel_return_key_type_get(::efl::eina::string_view part_)
      {
         Edje_Input_Panel_Return_Key_Type _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::edje_obj_part_text_input_panel_return_key_type_get(::efl::eolian::to_c(part_)));
            return _tmp_ret;
      }

      virtual ::evas::object part_table_child_get(::efl::eina::string_view part_, unsigned int col_, unsigned int row_)
      {
         Evas_Object * _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::edje_obj_part_table_child_get(::efl::eolian::to_c(part_), col_, row_));
            return ::efl::eolian::to_cxx<::evas::object>(_tmp_ret, std::tuple<std::false_type>());
      }

      virtual bool part_box_insert_before(::efl::eina::string_view part_, ::evas::object child_, ::evas::object reference_)
      {
         Eina_Bool _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::edje_obj_part_box_insert_before(::efl::eolian::to_c(part_), ::efl::eolian::to_c(child_), ::efl::eolian::to_c(reference_)));
            return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }

      virtual bool part_external_param_set(::efl::eina::string_view part_, const Edje_External_Param * param_)
      {
         Eina_Bool _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::edje_obj_part_external_param_set(::efl::eolian::to_c(part_), param_));
            return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }

      virtual bool part_external_param_get(::efl::eina::string_view part_, Edje_External_Param* param_)
      {
         Eina_Bool _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::edje_obj_part_external_param_get(::efl::eolian::to_c(part_), param_));
            return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }

      virtual void size_min_calc(Evas_Coord* minw_, Evas_Coord* minh_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::edje_obj_size_min_calc(minw_, minh_));
      }

      virtual bool part_box_append(::efl::eina::string_view part_, ::evas::object child_)
      {
         Eina_Bool _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::edje_obj_part_box_append(::efl::eolian::to_c(part_), ::efl::eolian::to_c(child_)));
            return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }

      virtual void size_min_restricted_calc(Evas_Coord* minw_, Evas_Coord* minh_, Evas_Coord restrictedw_, Evas_Coord restrictedh_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::edje_obj_size_min_restricted_calc(minw_, minh_, restrictedw_, restrictedh_));
      }

      virtual bool part_box_remove_all(::efl::eina::string_view part_, bool clear_)
      {
         Eina_Bool _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::edje_obj_part_box_remove_all(::efl::eolian::to_c(part_), ::efl::eolian::to_c(clear_)));
            return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }

      virtual bool part_drag_page(::efl::eina::string_view part_, double dx_, double dy_)
      {
         Eina_Bool _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::edje_obj_part_drag_page(::efl::eolian::to_c(part_), dx_, dy_));
            return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }

      virtual bool part_text_set(::efl::eina::string_view part_, ::efl::eina::string_view text_)
      {
         Eina_Bool _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::edje_obj_part_text_set(::efl::eolian::to_c(part_), ::efl::eolian::to_c(text_)));
            return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }

      virtual ::efl::eina::string_view part_text_get(::efl::eina::string_view part_)
      {
         const char * _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::edje_obj_part_text_get(::efl::eolian::to_c(part_)));
            return ::efl::eolian::to_cxx<::efl::eina::string_view>(_tmp_ret, std::tuple<std::false_type>());
      }

      virtual void part_text_input_panel_show_on_demand_set(::efl::eina::string_view part_, bool ondemand_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::edje_obj_part_text_input_panel_show_on_demand_set(::efl::eolian::to_c(part_), ::efl::eolian::to_c(ondemand_)));
      }

      virtual bool part_text_input_panel_show_on_demand_get(::efl::eina::string_view part_)
      {
         Eina_Bool _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::edje_obj_part_text_input_panel_show_on_demand_get(::efl::eolian::to_c(part_)));
            return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }

      virtual void part_text_input_hint_set(::efl::eina::string_view part_, Edje_Input_Hints input_hints_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::edje_obj_part_text_input_hint_set(::efl::eolian::to_c(part_), input_hints_));
      }

      virtual Edje_Input_Hints part_text_input_hint_get(::efl::eina::string_view part_)
      {
         Edje_Input_Hints _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::edje_obj_part_text_input_hint_get(::efl::eolian::to_c(part_)));
            return _tmp_ret;
      }

      virtual ::efl::eina::string_view part_text_selection_get(::efl::eina::string_view part_)
      {
         const char * _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::edje_obj_part_text_selection_get(::efl::eolian::to_c(part_)));
            return ::efl::eolian::to_cxx<::efl::eina::string_view>(_tmp_ret, std::tuple<std::false_type>());
      }

      virtual bool part_text_cursor_is_format_get(::efl::eina::string_view part_, Edje_Cursor cur_)
      {
         Eina_Bool _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::edje_obj_part_text_cursor_is_format_get(::efl::eolian::to_c(part_), cur_));
            return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }

      virtual bool text_class_get(::efl::eina::string_view text_class_, const char ** font_, Evas_Font_Size* size_)
      {
         Eina_Bool _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::edje_obj_text_class_get(::efl::eolian::to_c(text_class_), font_, size_));
            return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }

      virtual void text_class_del(::efl::eina::string_view text_class_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::edje_obj_text_class_del(::efl::eolian::to_c(text_class_)));
      }

      virtual bool color_class_set(::efl::eina::string_view color_class_, int r_, int g_, int b_, int a_, int r2_, int g2_, int b2_, int a2_, int r3_, int g3_, int b3_, int a3_)
      {
         Eina_Bool _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::edje_obj_color_class_set(::efl::eolian::to_c(color_class_), r_, g_, b_, a_, r2_, g2_, b2_, a2_, r3_, g3_, b3_, a3_));
            return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }

      virtual bool color_class_get(::efl::eina::string_view color_class_, int* r_, int* g_, int* b_, int* a_, int* r2_, int* g2_, int* b2_, int* a2_, int* r3_, int* g3_, int* b3_, int* a3_)
      {
         Eina_Bool _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::edje_obj_color_class_get(::efl::eolian::to_c(color_class_), r_, g_, b_, a_, r2_, g2_, b2_, a2_, r3_, g3_, b3_, a3_));
            return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }

      virtual ::efl::eina::string_view color_class_description_get(::efl::eina::string_view color_class_)
      {
         const char * _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::edje_obj_color_class_description_get(::efl::eolian::to_c(color_class_)));
            return ::efl::eolian::to_cxx<::efl::eina::string_view>(_tmp_ret, std::tuple<std::false_type>());
      }

      virtual bool color_class_clear()
      {
         Eina_Bool _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::edje_obj_color_class_clear());
            return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }

      virtual void color_class_del(::efl::eina::string_view color_class_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::edje_obj_color_class_del(::efl::eolian::to_c(color_class_)));
      }

      virtual bool size_class_set(::efl::eina::string_view size_class_, int minw_, int minh_, int maxw_, int maxh_)
      {
         Eina_Bool _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::edje_obj_size_class_set(::efl::eolian::to_c(size_class_), minw_, minh_, maxw_, maxh_));
            return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }

      virtual bool size_class_get(::efl::eina::string_view size_class_, int* minw_, int* minh_, int* maxw_, int* maxh_)
      {
         Eina_Bool _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::edje_obj_size_class_get(::efl::eolian::to_c(size_class_), minw_, minh_, maxw_, maxh_));
            return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }

      virtual void size_class_del(::efl::eina::string_view size_class_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::edje_obj_size_class_del(::efl::eolian::to_c(size_class_)));
      }

      virtual bool part_drag_step(::efl::eina::string_view part_, double dx_, double dy_)
      {
         Eina_Bool _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::edje_obj_part_drag_step(::efl::eolian::to_c(part_), dx_, dy_));
            return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }

      virtual bool part_text_cursor_up(::efl::eina::string_view part_, Edje_Cursor cur_)
      {
         Eina_Bool _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::edje_obj_part_text_cursor_up(::efl::eolian::to_c(part_), cur_));
            return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }

      virtual void part_text_cursor_geometry_get(::efl::eina::string_view part_, Evas_Coord* x_, Evas_Coord* y_, Evas_Coord* w_, Evas_Coord* h_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::edje_obj_part_text_cursor_geometry_get(::efl::eolian::to_c(part_), x_, y_, w_, h_));
      }

      virtual ::efl::eina::crange_list< ::efl::eina::string_view > part_text_anchor_list_get(::efl::eina::string_view part_)
      {
         const Eina_List * _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::edje_obj_part_text_anchor_list_get(::efl::eolian::to_c(part_)));
            return ::efl::eolian::to_cxx<::efl::eina::crange_list< ::efl::eina::string_view >>(_tmp_ret, std::tuple<std::false_type, std::false_type>());
      }

      virtual void text_insert_filter_callback_add(::efl::eina::string_view part_, Edje_Text_Filter_Cb func_, void * data_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::edje_obj_text_insert_filter_callback_add(::efl::eolian::to_c(part_), func_, data_));
      }

      virtual void part_text_input_panel_show(::efl::eina::string_view part_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::edje_obj_part_text_input_panel_show(::efl::eolian::to_c(part_)));
      }

      virtual bool part_exists(::efl::eina::string_view part_)
      {
         Eina_Bool _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::edje_obj_part_exists(::efl::eolian::to_c(part_)));
            return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }

      virtual void * text_markup_filter_callback_del(::efl::eina::string_view part_, Edje_Markup_Filter_Cb func_)
      {
         void * _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::edje_obj_text_markup_filter_callback_del(::efl::eolian::to_c(part_), func_));
            return _tmp_ret;
      }

      virtual bool part_text_cursor_is_visible_format_get(::efl::eina::string_view part_, Edje_Cursor cur_)
      {
         Eina_Bool _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::edje_obj_part_text_cursor_is_visible_format_get(::efl::eolian::to_c(part_), cur_));
            return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }

      virtual void part_text_user_insert(::efl::eina::string_view part_, ::efl::eina::string_view text_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::edje_obj_part_text_user_insert(::efl::eolian::to_c(part_), ::efl::eolian::to_c(text_)));
      }

      virtual bool part_text_cursor_prev(::efl::eina::string_view part_, Edje_Cursor cur_)
      {
         Eina_Bool _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::edje_obj_part_text_cursor_prev(::efl::eolian::to_c(part_), cur_));
            return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }

      virtual ::efl::eina::crange_list< ::efl::eina::string_view > part_text_item_list_get(::efl::eina::string_view part_)
      {
         const Eina_List * _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::edje_obj_part_text_item_list_get(::efl::eolian::to_c(part_)));
            return ::efl::eolian::to_cxx<::efl::eina::crange_list< ::efl::eina::string_view >>(_tmp_ret, std::tuple<std::false_type, std::false_type>());
      }

      virtual bool part_swallow(::efl::eina::string_view part_, ::evas::object obj_swallow_)
      {
         Eina_Bool _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::edje_obj_part_swallow(::efl::eolian::to_c(part_), ::efl::eolian::to_c(obj_swallow_)));
            return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }

      virtual bool update_hints_get()
      {
         Eina_Bool _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::edje_obj_update_hints_get());
            return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }

      virtual void update_hints_set(bool update_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::edje_obj_update_hints_set(::efl::eolian::to_c(update_)));
      }

      virtual bool mirrored_get()
      {
         Eina_Bool _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::edje_obj_mirrored_get());
            return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }

      virtual void mirrored_set(bool rtl_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::edje_obj_mirrored_set(::efl::eolian::to_c(rtl_)));
      }

      virtual ::efl::eina::string_view language_get()
      {
         const char * _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::edje_obj_language_get());
            return ::efl::eolian::to_cxx<::efl::eina::string_view>(_tmp_ret, std::tuple<std::false_type>());
      }

      virtual void language_set(::efl::eina::string_view language_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::edje_obj_language_set(::efl::eolian::to_c(language_)));
      }

      virtual bool animation_get()
      {
         Eina_Bool _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::edje_obj_animation_get());
            return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }

      virtual void animation_set(bool on_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::edje_obj_animation_set(::efl::eolian::to_c(on_)));
      }

      virtual bool play_get()
      {
         Eina_Bool _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::edje_obj_play_get());
            return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }

      virtual void play_set(bool play_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::edje_obj_play_set(::efl::eolian::to_c(play_)));
      }

      virtual const Edje_Perspective * perspective_get()
      {
         const Edje_Perspective * _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::edje_obj_perspective_get());
            return _tmp_ret;
      }

      virtual void perspective_set(Edje_Perspective * ps_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::edje_obj_perspective_set(ps_));
      }

      virtual double scale_get()
      {
         double _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::edje_obj_scale_get());
            return _tmp_ret;
      }

      virtual bool scale_set(double scale_)
      {
         Eina_Bool _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::edje_obj_scale_set(scale_));
            return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }

      virtual double base_scale_get()
      {
         double _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::edje_obj_base_scale_get());
            return _tmp_ret;
      }

      virtual void text_change_cb_set(Edje_Text_Change_Cb func_, void * data_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::edje_obj_text_change_cb_set(func_, data_));
      }

      virtual void part_text_cursor_begin_set(::efl::eina::string_view part_, Edje_Cursor cur_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::edje_obj_part_text_cursor_begin_set(::efl::eolian::to_c(part_), cur_));
      }

      virtual void part_text_cursor_line_end_set(::efl::eina::string_view part_, Edje_Cursor cur_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::edje_obj_part_text_cursor_line_end_set(::efl::eolian::to_c(part_), cur_));
      }

      virtual bool text_class_set(::efl::eina::string_view text_class_, ::efl::eina::string_view font_, Evas_Font_Size size_)
      {
         Eina_Bool _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::edje_obj_text_class_set(::efl::eolian::to_c(text_class_), ::efl::eolian::to_c(font_), size_));
            return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }

      virtual bool part_text_cursor_coord_set(::efl::eina::string_view part_, Edje_Cursor cur_, Evas_Coord x_, Evas_Coord y_)
      {
         Eina_Bool _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::edje_obj_part_text_cursor_coord_set(::efl::eolian::to_c(part_), cur_, x_, y_));
            return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }

      virtual void part_text_cursor_end_set(::efl::eina::string_view part_, Edje_Cursor cur_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::edje_obj_part_text_cursor_end_set(::efl::eolian::to_c(part_), cur_));
      }

      virtual bool part_text_escaped_set(::efl::eina::string_view part_, ::efl::eina::string_view text_)
      {
         Eina_Bool _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::edje_obj_part_text_escaped_set(::efl::eolian::to_c(part_), ::efl::eolian::to_c(text_)));
            return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }

      virtual void item_provider_set(Edje_Item_Provider_Cb func_, void * data_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::edje_obj_item_provider_set(func_, data_));
      }

      virtual void part_text_cursor_line_begin_set(::efl::eina::string_view part_, Edje_Cursor cur_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::edje_obj_part_text_cursor_line_begin_set(::efl::eolian::to_c(part_), cur_));
      }

      virtual void message_handler_set(Edje_Message_Handler_Cb func_, void * data_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::edje_obj_message_handler_set(func_, data_));
      }

      virtual void size_min_get(Evas_Coord* minw_, Evas_Coord* minh_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::edje_obj_size_min_get(minw_, minh_));
      }

      virtual ::efl::eina::range_list< ::efl::eina::string_view > access_part_list_get()
      {
         Eina_List * _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::edje_obj_access_part_list_get());
            return ::efl::eolian::to_cxx<::efl::eina::range_list< ::efl::eina::string_view >>(_tmp_ret, std::tuple<std::false_type, std::false_type>());
      }

      virtual Edje_Load_Error load_error_get()
      {
         Edje_Load_Error _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::edje_obj_load_error_get());
            return _tmp_ret;
      }

      virtual void size_max_get(Evas_Coord* maxw_, Evas_Coord* maxh_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::edje_obj_size_max_get(maxw_, maxh_));
      }

      virtual double transition_duration_factor_get()
      {
         double _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::edje_obj_transition_duration_factor_get());
            return _tmp_ret;
      }

      virtual void transition_duration_factor_set(double scale_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::edje_obj_transition_duration_factor_set(scale_));
      }

   };
};


template<>
struct operation_description_class_size< ::edje::object >
{
   static constexpr int value = 
#if defined(OBJECT_PROTECTED) && defined(OBJECT_BETA)
      153
#elif defined(OBJECT_PROTECTED)
      153
#elif defined(OBJECT_BETA)
      153
#else
      153
#endif
      + operation_description_class_size<::evas::smart_clipped >::value      + operation_description_class_size<::efl::file >::value;
};

template <typename T>
int initialize_operation_description(::efl::eo::detail::tag<::edje::object>
                                 , Eo_Op_Description* ops)
{
   int i = 0;
   (void)i;
   (void)ops;
   ops[i].func = reinterpret_cast<void*>(& ::edje_object_part_table_clear_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::edje_obj_part_table_clear);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::edje_object_part_external_param_type_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::edje_obj_part_external_param_type_get);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::edje_object_part_text_select_allow_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::edje_obj_part_text_select_allow_set);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::edje_object_part_state_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::edje_obj_part_state_get);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::edje_object_text_markup_filter_callback_del_full_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::edje_obj_text_markup_filter_callback_del_full);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::edje_object_part_drag_step_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::edje_obj_part_drag_step_set);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::edje_object_part_drag_step_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::edje_obj_part_drag_step_get);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::edje_object_part_text_imf_context_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::edje_obj_part_text_imf_context_get);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::edje_object_part_text_select_begin_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::edje_obj_part_text_select_begin);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::edje_object_part_text_style_user_peek_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::edje_obj_part_text_style_user_peek);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::edje_object_signal_callback_del_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::edje_obj_signal_callback_del);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::edje_object_part_text_cursor_next_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::edje_obj_part_text_cursor_next);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::edje_object_part_text_style_user_push_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::edje_obj_part_text_style_user_push);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::edje_object_part_text_append_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::edje_obj_part_text_append);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::edje_object_part_geometry_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::edje_obj_part_geometry_get);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::edje_object_part_text_input_panel_hide_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::edje_obj_part_text_input_panel_hide);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::edje_object_part_text_item_geometry_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::edje_obj_part_text_item_geometry_get);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::edje_object_part_table_unpack_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::edje_obj_part_table_unpack);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::edje_object_part_text_select_abort_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::edje_obj_part_text_select_abort);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::edje_object_text_insert_filter_callback_del_full_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::edje_obj_text_insert_filter_callback_del_full);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::edje_object_part_text_style_user_pop_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::edje_obj_part_text_style_user_pop);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::edje_object_part_text_input_panel_imdata_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::edje_obj_part_text_input_panel_imdata_set);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::edje_object_part_text_input_panel_imdata_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::edje_obj_part_text_input_panel_imdata_get);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::edje_object_part_text_insert_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::edje_obj_part_text_insert);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::edje_object_part_box_remove_at_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::edje_obj_part_box_remove_at);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::edje_object_part_text_cursor_copy_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::edje_obj_part_text_cursor_copy);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::edje_object_parts_extends_calc_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::edje_obj_parts_extends_calc);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::edje_object_part_drag_value_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::edje_obj_part_drag_value_set);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::edje_object_part_drag_value_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::edje_obj_part_drag_value_get);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::edje_object_calc_force_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::edje_obj_calc_force);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::edje_object_part_text_cursor_pos_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::edje_obj_part_text_cursor_pos_set);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::edje_object_part_text_cursor_pos_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::edje_obj_part_text_cursor_pos_get);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::edje_object_freeze_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::edje_obj_freeze);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::edje_object_part_text_cursor_content_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::edje_obj_part_text_cursor_content_get);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::edje_object_part_text_input_panel_layout_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::edje_obj_part_text_input_panel_layout_set);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::edje_object_part_text_input_panel_layout_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::edje_obj_part_text_input_panel_layout_get);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::edje_object_part_table_pack_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::edje_obj_part_table_pack);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::edje_object_part_text_input_panel_language_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::edje_obj_part_text_input_panel_language_set);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::edje_object_part_text_input_panel_language_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::edje_obj_part_text_input_panel_language_get);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::edje_object_part_table_col_row_size_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::edje_obj_part_table_col_row_size_get);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::edje_object_part_external_object_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::edje_obj_part_external_object_get);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::edje_object_part_external_content_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::edje_obj_part_external_content_get);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::edje_object_preload_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::edje_obj_preload);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::edje_object_part_text_input_panel_enabled_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::edje_obj_part_text_input_panel_enabled_set);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::edje_object_part_text_input_panel_enabled_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::edje_obj_part_text_input_panel_enabled_get);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::edje_object_part_text_select_extend_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::edje_obj_part_text_select_extend);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::edje_object_part_box_insert_at_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::edje_obj_part_box_insert_at);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::edje_object_part_text_anchor_geometry_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::edje_obj_part_text_anchor_geometry_get);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::edje_object_part_text_cursor_down_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::edje_obj_part_text_cursor_down);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::edje_object_part_drag_page_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::edje_obj_part_drag_page_set);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::edje_object_part_drag_page_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::edje_obj_part_drag_page_get);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::edje_object_part_box_prepend_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::edje_obj_part_box_prepend);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::edje_object_signal_emit_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::edje_obj_signal_emit);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::edje_object_part_text_input_panel_layout_variation_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::edje_obj_part_text_input_panel_layout_variation_set);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::edje_object_part_text_input_panel_layout_variation_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::edje_obj_part_text_input_panel_layout_variation_get);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::edje_object_message_send_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::edje_obj_message_send);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::edje_object_part_text_select_none_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::edje_obj_part_text_select_none);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::edje_object_part_object_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::edje_obj_part_object_get);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::edje_object_part_drag_size_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::edje_obj_part_drag_size_set);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::edje_object_part_drag_size_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::edje_obj_part_drag_size_get);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::edje_object_text_insert_filter_callback_del_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::edje_obj_text_insert_filter_callback_del);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::edje_object_part_drag_dir_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::edje_obj_part_drag_dir_get);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::edje_object_part_text_unescaped_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::edje_obj_part_text_unescaped_set);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::edje_object_part_text_unescaped_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::edje_obj_part_text_unescaped_get);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::edje_object_signal_callback_add_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::edje_obj_signal_callback_add);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::edje_object_part_text_select_all_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::edje_obj_part_text_select_all);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::edje_object_part_text_input_panel_return_key_disabled_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::edje_obj_part_text_input_panel_return_key_disabled_set);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::edje_object_part_text_input_panel_return_key_disabled_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::edje_obj_part_text_input_panel_return_key_disabled_get);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::edje_object_part_text_autocapital_type_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::edje_obj_part_text_autocapital_type_set);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::edje_object_part_text_autocapital_type_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::edje_obj_part_text_autocapital_type_get);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::edje_object_part_unswallow_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::edje_obj_part_unswallow);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::edje_object_part_text_prediction_allow_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::edje_obj_part_text_prediction_allow_set);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::edje_object_part_text_prediction_allow_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::edje_obj_part_text_prediction_allow_get);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::edje_object_data_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::edje_obj_data_get);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::edje_object_text_markup_filter_callback_add_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::edje_obj_text_markup_filter_callback_add);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::edje_object_message_signal_process_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::edje_obj_message_signal_process);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::edje_object_part_box_remove_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::edje_obj_part_box_remove);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::edje_object_thaw_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::edje_obj_thaw);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::edje_object_part_swallow_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::edje_obj_part_swallow_get);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::edje_object_part_text_imf_context_reset_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::edje_obj_part_text_imf_context_reset);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::edje_object_part_text_input_panel_return_key_type_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::edje_obj_part_text_input_panel_return_key_type_set);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::edje_object_part_text_input_panel_return_key_type_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::edje_obj_part_text_input_panel_return_key_type_get);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::edje_object_part_table_child_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::edje_obj_part_table_child_get);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::edje_object_part_box_insert_before_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::edje_obj_part_box_insert_before);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::edje_object_part_external_param_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::edje_obj_part_external_param_set);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::edje_object_part_external_param_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::edje_obj_part_external_param_get);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::edje_object_size_min_calc_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::edje_obj_size_min_calc);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::edje_object_part_box_append_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::edje_obj_part_box_append);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::edje_object_size_min_restricted_calc_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::edje_obj_size_min_restricted_calc);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::edje_object_part_box_remove_all_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::edje_obj_part_box_remove_all);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::edje_object_part_drag_page_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::edje_obj_part_drag_page);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::edje_object_part_text_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::edje_obj_part_text_set);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::edje_object_part_text_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::edje_obj_part_text_get);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::edje_object_part_text_input_panel_show_on_demand_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::edje_obj_part_text_input_panel_show_on_demand_set);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::edje_object_part_text_input_panel_show_on_demand_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::edje_obj_part_text_input_panel_show_on_demand_get);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::edje_object_part_text_input_hint_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::edje_obj_part_text_input_hint_set);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::edje_object_part_text_input_hint_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::edje_obj_part_text_input_hint_get);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::edje_object_part_text_selection_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::edje_obj_part_text_selection_get);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::edje_object_part_text_cursor_is_format_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::edje_obj_part_text_cursor_is_format_get);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::edje_object_text_class_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::edje_obj_text_class_get);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::edje_object_text_class_del_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::edje_obj_text_class_del);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::edje_object_color_class_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::edje_obj_color_class_set);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::edje_object_color_class_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::edje_obj_color_class_get);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::edje_object_color_class_description_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::edje_obj_color_class_description_get);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::edje_object_color_class_clear_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::edje_obj_color_class_clear);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::edje_object_color_class_del_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::edje_obj_color_class_del);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::edje_object_size_class_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::edje_obj_size_class_set);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::edje_object_size_class_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::edje_obj_size_class_get);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::edje_object_size_class_del_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::edje_obj_size_class_del);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::edje_object_part_drag_step_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::edje_obj_part_drag_step);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::edje_object_part_text_cursor_up_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::edje_obj_part_text_cursor_up);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::edje_object_part_text_cursor_geometry_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::edje_obj_part_text_cursor_geometry_get);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::edje_object_part_text_anchor_list_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::edje_obj_part_text_anchor_list_get);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::edje_object_text_insert_filter_callback_add_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::edje_obj_text_insert_filter_callback_add);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::edje_object_part_text_input_panel_show_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::edje_obj_part_text_input_panel_show);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::edje_object_part_exists_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::edje_obj_part_exists);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::edje_object_text_markup_filter_callback_del_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::edje_obj_text_markup_filter_callback_del);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::edje_object_part_text_cursor_is_visible_format_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::edje_obj_part_text_cursor_is_visible_format_get);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::edje_object_part_text_user_insert_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::edje_obj_part_text_user_insert);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::edje_object_part_text_cursor_prev_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::edje_obj_part_text_cursor_prev);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::edje_object_part_text_item_list_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::edje_obj_part_text_item_list_get);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::edje_object_part_swallow_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::edje_obj_part_swallow);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::edje_object_update_hints_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::edje_obj_update_hints_get);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::edje_object_update_hints_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::edje_obj_update_hints_set);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::edje_object_mirrored_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::edje_obj_mirrored_get);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::edje_object_mirrored_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::edje_obj_mirrored_set);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::edje_object_language_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::edje_obj_language_get);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::edje_object_language_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::edje_obj_language_set);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::edje_object_animation_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::edje_obj_animation_get);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::edje_object_animation_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::edje_obj_animation_set);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::edje_object_play_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::edje_obj_play_get);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::edje_object_play_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::edje_obj_play_set);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::edje_object_perspective_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::edje_obj_perspective_get);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::edje_object_perspective_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::edje_obj_perspective_set);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::edje_object_scale_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::edje_obj_scale_get);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::edje_object_scale_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::edje_obj_scale_set);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::edje_object_base_scale_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::edje_obj_base_scale_get);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::edje_object_text_change_cb_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::edje_obj_text_change_cb_set);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::edje_object_part_text_cursor_begin_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::edje_obj_part_text_cursor_begin_set);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::edje_object_part_text_cursor_line_end_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::edje_obj_part_text_cursor_line_end_set);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::edje_object_text_class_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::edje_obj_text_class_set);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::edje_object_part_text_cursor_coord_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::edje_obj_part_text_cursor_coord_set);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::edje_object_part_text_cursor_end_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::edje_obj_part_text_cursor_end_set);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::edje_object_part_text_escaped_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::edje_obj_part_text_escaped_set);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::edje_object_item_provider_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::edje_obj_item_provider_set);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::edje_object_part_text_cursor_line_begin_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::edje_obj_part_text_cursor_line_begin_set);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::edje_object_message_handler_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::edje_obj_message_handler_set);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::edje_object_size_min_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::edje_obj_size_min_get);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::edje_object_access_part_list_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::edje_obj_access_part_list_get);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::edje_object_load_error_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::edje_obj_load_error_get);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::edje_object_size_max_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::edje_obj_size_max_get);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::edje_object_transition_duration_factor_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::edje_obj_transition_duration_factor_get);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::edje_object_transition_duration_factor_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::edje_obj_transition_duration_factor_set);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   initialize_operation_description<T>(::efl::eo::detail::tag<::evas::smart_clipped>(), &ops[operation_description_class_size< ::edje::object >::value]);
   initialize_operation_description<T>(::efl::eo::detail::tag<::efl::file>(), &ops[operation_description_class_size< ::edje::object >::value + operation_description_class_size<::evas::smart_clipped>::value]);
   return 0;
}
inline Eo_Class const* get_eo_class(tag<::edje::object>)
{
   return (EDJE_OBJECT_CLASS);
}

} } }

/// @endcond

