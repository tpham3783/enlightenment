/// @cond EO_CXX_EO_IMPL

inline bool evas::textblock::line_number_geometry_get(int line_, Evas_Coord* cx_, Evas_Coord* cy_, Evas_Coord* cw_, Evas_Coord* ch_) const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_textblock_line_number_geometry_get(line_, cx_, cy_, cw_, ch_));
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline ::efl::eina::string_view evas::textblock::replace_char_get() const
{
   const char * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_textblock_replace_char_get());
   return ::efl::eolian::to_cxx<::efl::eina::string_view>(_tmp_ret, std::tuple<std::false_type>());
}

inline void evas::textblock::style_user_pop() const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_textblock_style_user_pop());
}

inline Evas_Textblock_Cursor * evas::textblock::cursor_new() const
{
   Evas_Textblock_Cursor * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_textblock_cursor_new());
   return _tmp_ret;
}

inline ::efl::eina::crange_list< ::evas::object > evas::textblock::node_format_list_get(::efl::eina::string_view anchor_) const
{
   const Eina_List * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_textblock_node_format_list_get(::efl::eolian::to_c(anchor_)));
   return ::efl::eolian::to_cxx<::efl::eina::crange_list< ::evas::object >>(_tmp_ret, std::tuple<std::false_type, std::false_type>());
}

inline const Evas_Textblock_Style * evas::textblock::style_user_peek() const
{
   const Evas_Textblock_Style * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_textblock_style_user_peek());
   return _tmp_ret;
}

inline void evas::textblock::node_format_remove_pair(Evas_Textblock_Node_Format * n_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_textblock_node_format_remove_pair(n_));
}

inline void evas::textblock::clear() const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_textblock_clear());
}

inline void evas::textblock::style_user_push(Evas_Textblock_Style * ts_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_textblock_style_user_push(ts_));
}

inline bool evas::textblock::obstacle_add(::evas::object eo_obs_) const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_textblock_obstacle_add(::efl::eolian::to_c(eo_obs_)));
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline bool evas::textblock::obstacle_del(::evas::object eo_obs_) const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_textblock_obstacle_del(::efl::eolian::to_c(eo_obs_)));
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline void evas::textblock::obstacles_update() const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_textblock_obstacles_update());
}

inline ::efl::eina::string_view evas::textblock::text_markup_get() const
{
   const char * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_textblock_text_markup_get());
   return ::efl::eolian::to_cxx<::efl::eina::string_view>(_tmp_ret, std::tuple<std::false_type>());
}

inline void evas::textblock::text_markup_set(::efl::eina::string_view text_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_textblock_text_markup_set(::efl::eolian::to_c(text_)));
}

inline double evas::textblock::valign_get() const
{
   double _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_textblock_valign_get());
   return _tmp_ret;
}

inline void evas::textblock::valign_set(double align_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_textblock_valign_set(align_));
}

inline ::efl::eina::string_view evas::textblock::bidi_delimiters_get() const
{
   const char * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_textblock_bidi_delimiters_get());
   return ::efl::eolian::to_cxx<::efl::eina::string_view>(_tmp_ret, std::tuple<std::false_type>());
}

inline void evas::textblock::bidi_delimiters_set(::efl::eina::string_view delim_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_textblock_bidi_delimiters_set(::efl::eolian::to_c(delim_)));
}

inline void evas::textblock::replace_char_set(::efl::eina::string_view ch_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_textblock_replace_char_set(::efl::eolian::to_c(ch_)));
}

inline bool evas::textblock::legacy_newline_get() const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_textblock_legacy_newline_get());
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline void evas::textblock::legacy_newline_set(bool mode_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_textblock_legacy_newline_set(::efl::eolian::to_c(mode_)));
}

inline const Evas_Textblock_Style * evas::textblock::style_get() const
{
   const Evas_Textblock_Style * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_textblock_style_get());
   return _tmp_ret;
}

inline void evas::textblock::style_set(const Evas_Textblock_Style * ts_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_textblock_style_set(ts_));
}

inline const Evas_Textblock_Node_Format * evas::textblock::node_format_first_get() const
{
   const Evas_Textblock_Node_Format * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_textblock_node_format_first_get());
   return _tmp_ret;
}

inline void evas::textblock::size_formatted_get(Evas_Coord* w_, Evas_Coord* h_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_textblock_size_formatted_get(w_, h_));
}

inline const Evas_Textblock_Node_Format * evas::textblock::node_format_last_get() const
{
   const Evas_Textblock_Node_Format * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_textblock_node_format_last_get());
   return _tmp_ret;
}

inline Evas_Textblock_Cursor * evas::textblock::cursor_get() const
{
   Evas_Textblock_Cursor * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_textblock_cursor_get());
   return _tmp_ret;
}

inline void evas::textblock::size_native_get(Evas_Coord* w_, Evas_Coord* h_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_textblock_size_native_get(w_, h_));
}

inline void evas::textblock::style_insets_get(Evas_Coord* l_, Evas_Coord* r_, Evas_Coord* t_, Evas_Coord* b_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_textblock_style_insets_get(l_, r_, t_, b_));
}

inline bool eo_cxx::evas::textblock::line_number_geometry_get(int line_, Evas_Coord* cx_, Evas_Coord* cy_, Evas_Coord* cw_, Evas_Coord* ch_) const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_textblock_line_number_geometry_get(line_, cx_, cy_, cw_, ch_));
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline ::efl::eina::string_view eo_cxx::evas::textblock::replace_char_get() const
{
   const char * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_textblock_replace_char_get());
   return ::efl::eolian::to_cxx<::efl::eina::string_view>(_tmp_ret, std::tuple<std::false_type>());
}

inline void eo_cxx::evas::textblock::style_user_pop() const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_textblock_style_user_pop());
}

inline Evas_Textblock_Cursor * eo_cxx::evas::textblock::cursor_new() const
{
   Evas_Textblock_Cursor * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_textblock_cursor_new());
   return _tmp_ret;
}

inline ::efl::eina::crange_list< ::evas::object > eo_cxx::evas::textblock::node_format_list_get(::efl::eina::string_view anchor_) const
{
   const Eina_List * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_textblock_node_format_list_get(::efl::eolian::to_c(anchor_)));
   return ::efl::eolian::to_cxx<::efl::eina::crange_list< ::evas::object >>(_tmp_ret, std::tuple<std::false_type, std::false_type>());
}

inline const Evas_Textblock_Style * eo_cxx::evas::textblock::style_user_peek() const
{
   const Evas_Textblock_Style * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_textblock_style_user_peek());
   return _tmp_ret;
}

inline void eo_cxx::evas::textblock::node_format_remove_pair(Evas_Textblock_Node_Format * n_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_textblock_node_format_remove_pair(n_));
}

inline void eo_cxx::evas::textblock::clear() const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_textblock_clear());
}

inline void eo_cxx::evas::textblock::style_user_push(Evas_Textblock_Style * ts_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_textblock_style_user_push(ts_));
}

inline bool eo_cxx::evas::textblock::obstacle_add(::evas::object eo_obs_) const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_textblock_obstacle_add(::efl::eolian::to_c(eo_obs_)));
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline bool eo_cxx::evas::textblock::obstacle_del(::evas::object eo_obs_) const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_textblock_obstacle_del(::efl::eolian::to_c(eo_obs_)));
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline void eo_cxx::evas::textblock::obstacles_update() const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_textblock_obstacles_update());
}

inline ::efl::eina::string_view eo_cxx::evas::textblock::text_markup_get() const
{
   const char * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_textblock_text_markup_get());
   return ::efl::eolian::to_cxx<::efl::eina::string_view>(_tmp_ret, std::tuple<std::false_type>());
}

inline void eo_cxx::evas::textblock::text_markup_set(::efl::eina::string_view text_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_textblock_text_markup_set(::efl::eolian::to_c(text_)));
}

inline double eo_cxx::evas::textblock::valign_get() const
{
   double _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_textblock_valign_get());
   return _tmp_ret;
}

inline void eo_cxx::evas::textblock::valign_set(double align_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_textblock_valign_set(align_));
}

inline ::efl::eina::string_view eo_cxx::evas::textblock::bidi_delimiters_get() const
{
   const char * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_textblock_bidi_delimiters_get());
   return ::efl::eolian::to_cxx<::efl::eina::string_view>(_tmp_ret, std::tuple<std::false_type>());
}

inline void eo_cxx::evas::textblock::bidi_delimiters_set(::efl::eina::string_view delim_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_textblock_bidi_delimiters_set(::efl::eolian::to_c(delim_)));
}

inline void eo_cxx::evas::textblock::replace_char_set(::efl::eina::string_view ch_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_textblock_replace_char_set(::efl::eolian::to_c(ch_)));
}

inline bool eo_cxx::evas::textblock::legacy_newline_get() const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_textblock_legacy_newline_get());
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline void eo_cxx::evas::textblock::legacy_newline_set(bool mode_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_textblock_legacy_newline_set(::efl::eolian::to_c(mode_)));
}

inline const Evas_Textblock_Style * eo_cxx::evas::textblock::style_get() const
{
   const Evas_Textblock_Style * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_textblock_style_get());
   return _tmp_ret;
}

inline void eo_cxx::evas::textblock::style_set(const Evas_Textblock_Style * ts_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_textblock_style_set(ts_));
}

inline const Evas_Textblock_Node_Format * eo_cxx::evas::textblock::node_format_first_get() const
{
   const Evas_Textblock_Node_Format * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_textblock_node_format_first_get());
   return _tmp_ret;
}

inline void eo_cxx::evas::textblock::size_formatted_get(Evas_Coord* w_, Evas_Coord* h_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_textblock_size_formatted_get(w_, h_));
}

inline const Evas_Textblock_Node_Format * eo_cxx::evas::textblock::node_format_last_get() const
{
   const Evas_Textblock_Node_Format * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_textblock_node_format_last_get());
   return _tmp_ret;
}

inline Evas_Textblock_Cursor * eo_cxx::evas::textblock::cursor_get() const
{
   Evas_Textblock_Cursor * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_textblock_cursor_get());
   return _tmp_ret;
}

inline void eo_cxx::evas::textblock::size_native_get(Evas_Coord* w_, Evas_Coord* h_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_textblock_size_native_get(w_, h_));
}

inline void eo_cxx::evas::textblock::style_insets_get(Evas_Coord* l_, Evas_Coord* r_, Evas_Coord* t_, Evas_Coord* b_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_textblock_style_insets_get(l_, r_, t_, b_));
}

inline ::eo_cxx::evas::textblock::operator ::evas::textblock() const
{
   return *static_cast<::evas::textblock const*>(static_cast<void const*>(this));
}

inline ::eo_cxx::evas::textblock::operator ::evas::textblock&()
{
   return *static_cast<::evas::textblock*>(static_cast<void*>(this));
}

inline ::eo_cxx::evas::textblock::operator ::evas::textblock const&() const
{
   return *static_cast<::evas::textblock const*>(static_cast<void const*>(this));
}

template <typename T>
bool evas_textblock_line_number_geometry_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, int line_, Evas_Coord* cx_, Evas_Coord* cy_, Evas_Coord* cw_, Evas_Coord* ch_)
{
   try
      {
         return static_cast<T*>(self->this_)->line_number_geometry_get(line_, cx_, cy_, cw_, ch_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Eina_Bool _tmp_ret{};
         return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }
}

template <typename T>
::efl::eina::string_view evas_textblock_replace_char_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->replace_char_get();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         const char * _tmp_ret{};
         return ::efl::eolian::to_cxx<::efl::eina::string_view>(_tmp_ret, std::tuple<std::false_type>());
      }
}

template <typename T>
void evas_textblock_style_user_pop_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         static_cast<T*>(self->this_)->style_user_pop();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
Evas_Textblock_Cursor * evas_textblock_cursor_new_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->cursor_new();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Evas_Textblock_Cursor * _tmp_ret{};
         return _tmp_ret;
      }
}

template <typename T>
::efl::eina::crange_list< ::evas::object > evas_textblock_node_format_list_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, const char * anchor_)
{
   try
      {
         return static_cast<T*>(self->this_)->node_format_list_get(::efl::eolian::to_cxx<::efl::eina::string_view>(anchor_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         const Eina_List * _tmp_ret{};
         return ::efl::eolian::to_cxx<::efl::eina::crange_list< ::evas::object >>(_tmp_ret, std::tuple<std::false_type, std::false_type>());
      }
}

template <typename T>
const Evas_Textblock_Style * evas_textblock_style_user_peek_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->style_user_peek();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         const Evas_Textblock_Style * _tmp_ret{};
         return _tmp_ret;
      }
}

template <typename T>
void evas_textblock_node_format_remove_pair_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Evas_Textblock_Node_Format * n_)
{
   try
      {
         static_cast<T*>(self->this_)->node_format_remove_pair(n_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void evas_textblock_clear_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         static_cast<T*>(self->this_)->clear();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void evas_textblock_style_user_push_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Evas_Textblock_Style * ts_)
{
   try
      {
         static_cast<T*>(self->this_)->style_user_push(ts_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
bool evas_textblock_obstacle_add_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Evas_Object * eo_obs_)
{
   try
      {
         return static_cast<T*>(self->this_)->obstacle_add(::efl::eolian::to_cxx<::evas::object>(eo_obs_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Eina_Bool _tmp_ret{};
         return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }
}

template <typename T>
bool evas_textblock_obstacle_del_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Evas_Object * eo_obs_)
{
   try
      {
         return static_cast<T*>(self->this_)->obstacle_del(::efl::eolian::to_cxx<::evas::object>(eo_obs_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Eina_Bool _tmp_ret{};
         return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }
}

template <typename T>
void evas_textblock_obstacles_update_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         static_cast<T*>(self->this_)->obstacles_update();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
::efl::eina::string_view evas_textblock_text_markup_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->text_markup_get();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         const char * _tmp_ret{};
         return ::efl::eolian::to_cxx<::efl::eina::string_view>(_tmp_ret, std::tuple<std::false_type>());
      }
}

template <typename T>
void evas_textblock_text_markup_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, const char * text_)
{
   try
      {
         static_cast<T*>(self->this_)->text_markup_set(::efl::eolian::to_cxx<::efl::eina::string_view>(text_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
double evas_textblock_valign_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->valign_get();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         double _tmp_ret{};
         return _tmp_ret;
      }
}

template <typename T>
void evas_textblock_valign_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, double align_)
{
   try
      {
         static_cast<T*>(self->this_)->valign_set(align_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
::efl::eina::string_view evas_textblock_bidi_delimiters_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->bidi_delimiters_get();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         const char * _tmp_ret{};
         return ::efl::eolian::to_cxx<::efl::eina::string_view>(_tmp_ret, std::tuple<std::false_type>());
      }
}

template <typename T>
void evas_textblock_bidi_delimiters_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, const char * delim_)
{
   try
      {
         static_cast<T*>(self->this_)->bidi_delimiters_set(::efl::eolian::to_cxx<::efl::eina::string_view>(delim_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void evas_textblock_replace_char_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, const char * ch_)
{
   try
      {
         static_cast<T*>(self->this_)->replace_char_set(::efl::eolian::to_cxx<::efl::eina::string_view>(ch_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
bool evas_textblock_legacy_newline_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->legacy_newline_get();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Eina_Bool _tmp_ret{};
         return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }
}

template <typename T>
void evas_textblock_legacy_newline_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Eina_Bool mode_)
{
   try
      {
         static_cast<T*>(self->this_)->legacy_newline_set(::efl::eolian::to_cxx<bool>(mode_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
const Evas_Textblock_Style * evas_textblock_style_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->style_get();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         const Evas_Textblock_Style * _tmp_ret{};
         return _tmp_ret;
      }
}

template <typename T>
void evas_textblock_style_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, const Evas_Textblock_Style * ts_)
{
   try
      {
         static_cast<T*>(self->this_)->style_set(ts_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
const Evas_Textblock_Node_Format * evas_textblock_node_format_first_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->node_format_first_get();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         const Evas_Textblock_Node_Format * _tmp_ret{};
         return _tmp_ret;
      }
}

template <typename T>
void evas_textblock_size_formatted_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Evas_Coord* w_, Evas_Coord* h_)
{
   try
      {
         static_cast<T*>(self->this_)->size_formatted_get(w_, h_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
const Evas_Textblock_Node_Format * evas_textblock_node_format_last_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->node_format_last_get();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         const Evas_Textblock_Node_Format * _tmp_ret{};
         return _tmp_ret;
      }
}

template <typename T>
Evas_Textblock_Cursor * evas_textblock_cursor_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->cursor_get();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Evas_Textblock_Cursor * _tmp_ret{};
         return _tmp_ret;
      }
}

template <typename T>
void evas_textblock_size_native_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Evas_Coord* w_, Evas_Coord* h_)
{
   try
      {
         static_cast<T*>(self->this_)->size_native_get(w_, h_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void evas_textblock_style_insets_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Evas_Coord* l_, Evas_Coord* r_, Evas_Coord* t_, Evas_Coord* b_)
{
   try
      {
         static_cast<T*>(self->this_)->style_insets_get(l_, r_, t_, b_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

namespace efl { namespace eo { namespace detail {

template<>
struct operations< ::evas::textblock >
{
   template <typename T>
   struct type
         : virtual operations< ::evas::object >::template type<T>
   {
      virtual bool line_number_geometry_get(int line_, Evas_Coord* cx_, Evas_Coord* cy_, Evas_Coord* cw_, Evas_Coord* ch_)
      {
         Eina_Bool _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_obj_textblock_line_number_geometry_get(line_, cx_, cy_, cw_, ch_));
            return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }

      virtual ::efl::eina::string_view replace_char_get()
      {
         const char * _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_obj_textblock_replace_char_get());
            return ::efl::eolian::to_cxx<::efl::eina::string_view>(_tmp_ret, std::tuple<std::false_type>());
      }

      virtual void style_user_pop()
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_obj_textblock_style_user_pop());
      }

      virtual Evas_Textblock_Cursor * cursor_new()
      {
         Evas_Textblock_Cursor * _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_obj_textblock_cursor_new());
            return _tmp_ret;
      }

      virtual ::efl::eina::crange_list< ::evas::object > node_format_list_get(::efl::eina::string_view anchor_)
      {
         const Eina_List * _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_obj_textblock_node_format_list_get(::efl::eolian::to_c(anchor_)));
            return ::efl::eolian::to_cxx<::efl::eina::crange_list< ::evas::object >>(_tmp_ret, std::tuple<std::false_type, std::false_type>());
      }

      virtual const Evas_Textblock_Style * style_user_peek()
      {
         const Evas_Textblock_Style * _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_obj_textblock_style_user_peek());
            return _tmp_ret;
      }

      virtual void node_format_remove_pair(Evas_Textblock_Node_Format * n_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_obj_textblock_node_format_remove_pair(n_));
      }

      virtual void clear()
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_obj_textblock_clear());
      }

      virtual void style_user_push(Evas_Textblock_Style * ts_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_obj_textblock_style_user_push(ts_));
      }

      virtual bool obstacle_add(::evas::object eo_obs_)
      {
         Eina_Bool _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_obj_textblock_obstacle_add(::efl::eolian::to_c(eo_obs_)));
            return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }

      virtual bool obstacle_del(::evas::object eo_obs_)
      {
         Eina_Bool _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_obj_textblock_obstacle_del(::efl::eolian::to_c(eo_obs_)));
            return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }

      virtual void obstacles_update()
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_obj_textblock_obstacles_update());
      }

      virtual ::efl::eina::string_view text_markup_get()
      {
         const char * _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_obj_textblock_text_markup_get());
            return ::efl::eolian::to_cxx<::efl::eina::string_view>(_tmp_ret, std::tuple<std::false_type>());
      }

      virtual void text_markup_set(::efl::eina::string_view text_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_obj_textblock_text_markup_set(::efl::eolian::to_c(text_)));
      }

      virtual double valign_get()
      {
         double _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_obj_textblock_valign_get());
            return _tmp_ret;
      }

      virtual void valign_set(double align_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_obj_textblock_valign_set(align_));
      }

      virtual ::efl::eina::string_view bidi_delimiters_get()
      {
         const char * _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_obj_textblock_bidi_delimiters_get());
            return ::efl::eolian::to_cxx<::efl::eina::string_view>(_tmp_ret, std::tuple<std::false_type>());
      }

      virtual void bidi_delimiters_set(::efl::eina::string_view delim_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_obj_textblock_bidi_delimiters_set(::efl::eolian::to_c(delim_)));
      }

      virtual void replace_char_set(::efl::eina::string_view ch_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_obj_textblock_replace_char_set(::efl::eolian::to_c(ch_)));
      }

      virtual bool legacy_newline_get()
      {
         Eina_Bool _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_obj_textblock_legacy_newline_get());
            return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }

      virtual void legacy_newline_set(bool mode_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_obj_textblock_legacy_newline_set(::efl::eolian::to_c(mode_)));
      }

      virtual const Evas_Textblock_Style * style_get()
      {
         const Evas_Textblock_Style * _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_obj_textblock_style_get());
            return _tmp_ret;
      }

      virtual void style_set(const Evas_Textblock_Style * ts_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_obj_textblock_style_set(ts_));
      }

      virtual const Evas_Textblock_Node_Format * node_format_first_get()
      {
         const Evas_Textblock_Node_Format * _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_obj_textblock_node_format_first_get());
            return _tmp_ret;
      }

      virtual void size_formatted_get(Evas_Coord* w_, Evas_Coord* h_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_obj_textblock_size_formatted_get(w_, h_));
      }

      virtual const Evas_Textblock_Node_Format * node_format_last_get()
      {
         const Evas_Textblock_Node_Format * _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_obj_textblock_node_format_last_get());
            return _tmp_ret;
      }

      virtual Evas_Textblock_Cursor * cursor_get()
      {
         Evas_Textblock_Cursor * _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_obj_textblock_cursor_get());
            return _tmp_ret;
      }

      virtual void size_native_get(Evas_Coord* w_, Evas_Coord* h_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_obj_textblock_size_native_get(w_, h_));
      }

      virtual void style_insets_get(Evas_Coord* l_, Evas_Coord* r_, Evas_Coord* t_, Evas_Coord* b_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_obj_textblock_style_insets_get(l_, r_, t_, b_));
      }

   };
};


template<>
struct operation_description_class_size< ::evas::textblock >
{
   static constexpr int value = 
#if defined(TEXTBLOCK_PROTECTED) && defined(TEXTBLOCK_BETA)
      29
#elif defined(TEXTBLOCK_PROTECTED)
      29
#elif defined(TEXTBLOCK_BETA)
      29
#else
      29
#endif
      + operation_description_class_size<::evas::object >::value;
};

template <typename T>
int initialize_operation_description(::efl::eo::detail::tag<::evas::textblock>
                                 , Eo_Op_Description* ops)
{
   int i = 0;
   (void)i;
   (void)ops;
   ops[i].func = reinterpret_cast<void*>(& ::evas_textblock_line_number_geometry_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_textblock_line_number_geometry_get);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_textblock_replace_char_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_textblock_replace_char_get);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_textblock_style_user_pop_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_textblock_style_user_pop);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_textblock_cursor_new_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_textblock_cursor_new);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_textblock_node_format_list_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_textblock_node_format_list_get);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_textblock_style_user_peek_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_textblock_style_user_peek);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_textblock_node_format_remove_pair_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_textblock_node_format_remove_pair);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_textblock_clear_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_textblock_clear);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_textblock_style_user_push_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_textblock_style_user_push);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_textblock_obstacle_add_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_textblock_obstacle_add);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_textblock_obstacle_del_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_textblock_obstacle_del);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_textblock_obstacles_update_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_textblock_obstacles_update);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_textblock_text_markup_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_textblock_text_markup_get);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_textblock_text_markup_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_textblock_text_markup_set);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_textblock_valign_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_textblock_valign_get);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_textblock_valign_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_textblock_valign_set);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_textblock_bidi_delimiters_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_textblock_bidi_delimiters_get);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_textblock_bidi_delimiters_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_textblock_bidi_delimiters_set);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_textblock_replace_char_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_textblock_replace_char_set);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_textblock_legacy_newline_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_textblock_legacy_newline_get);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_textblock_legacy_newline_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_textblock_legacy_newline_set);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_textblock_style_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_textblock_style_get);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_textblock_style_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_textblock_style_set);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_textblock_node_format_first_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_textblock_node_format_first_get);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_textblock_size_formatted_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_textblock_size_formatted_get);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_textblock_node_format_last_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_textblock_node_format_last_get);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_textblock_cursor_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_textblock_cursor_get);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_textblock_size_native_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_textblock_size_native_get);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_textblock_style_insets_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_textblock_style_insets_get);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   initialize_operation_description<T>(::efl::eo::detail::tag<::evas::object>(), &ops[operation_description_class_size< ::evas::textblock >::value]);
   return 0;
}
inline Eo_Class const* get_eo_class(tag<::evas::textblock>)
{
   return (EVAS_TEXTBLOCK_CLASS);
}

} } }

/// @endcond

