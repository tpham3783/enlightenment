/// @cond EO_CXX_EO_IMPL

inline int evas::text::last_up_to_pos(Evas_Coord x_, Evas_Coord y_) const
{
   int _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_text_last_up_to_pos(x_, y_));
   return _tmp_ret;
}

inline int evas::text::char_coords_get(Evas_Coord x_, Evas_Coord y_, Evas_Coord* cx_, Evas_Coord* cy_, Evas_Coord* cw_, Evas_Coord* ch_) const
{
   int _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_text_char_coords_get(x_, y_, cx_, cy_, cw_, ch_));
   return _tmp_ret;
}

inline bool evas::text::char_pos_get(int pos_, Evas_Coord* cx_, Evas_Coord* cy_, Evas_Coord* cw_, Evas_Coord* ch_) const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_text_char_pos_get(pos_, cx_, cy_, cw_, ch_));
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline void evas::text::shadow_color_get(int* r_, int* g_, int* b_, int* a_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_text_shadow_color_get(r_, g_, b_, a_));
}

inline void evas::text::shadow_color_set(int r_, int g_, int b_, int a_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_text_shadow_color_set(r_, g_, b_, a_));
}

inline double evas::text::ellipsis_get() const
{
   double _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_text_ellipsis_get());
   return _tmp_ret;
}

inline void evas::text::ellipsis_set(double ellipsis_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_text_ellipsis_set(ellipsis_));
}

inline ::efl::eina::string_view evas::text::bidi_delimiters_get() const
{
   const char * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_text_bidi_delimiters_get());
   return ::efl::eolian::to_cxx<::efl::eina::string_view>(_tmp_ret, std::tuple<std::false_type>());
}

inline void evas::text::bidi_delimiters_set(::efl::eina::string_view delim_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_text_bidi_delimiters_set(::efl::eolian::to_c(delim_)));
}

inline void evas::text::outline_color_get(int* r_, int* g_, int* b_, int* a_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_text_outline_color_get(r_, g_, b_, a_));
}

inline void evas::text::outline_color_set(int r_, int g_, int b_, int a_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_text_outline_color_set(r_, g_, b_, a_));
}

inline void evas::text::glow2_color_get(int* r_, int* g_, int* b_, int* a_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_text_glow2_color_get(r_, g_, b_, a_));
}

inline void evas::text::glow2_color_set(int r_, int g_, int b_, int a_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_text_glow2_color_set(r_, g_, b_, a_));
}

inline Evas_Text_Style_Type evas::text::style_get() const
{
   Evas_Text_Style_Type _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_text_style_get());
   return _tmp_ret;
}

inline void evas::text::style_set(Evas_Text_Style_Type style_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_text_style_set(style_));
}

inline void evas::text::glow_color_get(int* r_, int* g_, int* b_, int* a_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_text_glow_color_get(r_, g_, b_, a_));
}

inline void evas::text::glow_color_set(int r_, int g_, int b_, int a_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_text_glow_color_set(r_, g_, b_, a_));
}

inline Evas_Coord evas::text::max_descent_get() const
{
   Evas_Coord _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_text_max_descent_get());
   return _tmp_ret;
}

inline void evas::text::style_pad_get(int* l_, int* r_, int* t_, int* b_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_text_style_pad_get(l_, r_, t_, b_));
}

inline Evas_BiDi_Direction evas::text::direction_get() const
{
   Evas_BiDi_Direction _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_text_direction_get());
   return _tmp_ret;
}

inline Evas_Coord evas::text::ascent_get() const
{
   Evas_Coord _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_text_ascent_get());
   return _tmp_ret;
}

inline Evas_Coord evas::text::horiz_advance_get() const
{
   Evas_Coord _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_text_horiz_advance_get());
   return _tmp_ret;
}

inline Evas_Coord evas::text::inset_get() const
{
   Evas_Coord _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_text_inset_get());
   return _tmp_ret;
}

inline Evas_Coord evas::text::max_ascent_get() const
{
   Evas_Coord _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_text_max_ascent_get());
   return _tmp_ret;
}

inline Evas_Coord evas::text::vert_advance_get() const
{
   Evas_Coord _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_text_vert_advance_get());
   return _tmp_ret;
}

inline Evas_Coord evas::text::descent_get() const
{
   Evas_Coord _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_text_descent_get());
   return _tmp_ret;
}

inline int eo_cxx::evas::text::last_up_to_pos(Evas_Coord x_, Evas_Coord y_) const
{
   int _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_text_last_up_to_pos(x_, y_));
   return _tmp_ret;
}

inline int eo_cxx::evas::text::char_coords_get(Evas_Coord x_, Evas_Coord y_, Evas_Coord* cx_, Evas_Coord* cy_, Evas_Coord* cw_, Evas_Coord* ch_) const
{
   int _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_text_char_coords_get(x_, y_, cx_, cy_, cw_, ch_));
   return _tmp_ret;
}

inline bool eo_cxx::evas::text::char_pos_get(int pos_, Evas_Coord* cx_, Evas_Coord* cy_, Evas_Coord* cw_, Evas_Coord* ch_) const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_text_char_pos_get(pos_, cx_, cy_, cw_, ch_));
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline void eo_cxx::evas::text::shadow_color_get(int* r_, int* g_, int* b_, int* a_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_text_shadow_color_get(r_, g_, b_, a_));
}

inline void eo_cxx::evas::text::shadow_color_set(int r_, int g_, int b_, int a_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_text_shadow_color_set(r_, g_, b_, a_));
}

inline double eo_cxx::evas::text::ellipsis_get() const
{
   double _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_text_ellipsis_get());
   return _tmp_ret;
}

inline void eo_cxx::evas::text::ellipsis_set(double ellipsis_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_text_ellipsis_set(ellipsis_));
}

inline ::efl::eina::string_view eo_cxx::evas::text::bidi_delimiters_get() const
{
   const char * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_text_bidi_delimiters_get());
   return ::efl::eolian::to_cxx<::efl::eina::string_view>(_tmp_ret, std::tuple<std::false_type>());
}

inline void eo_cxx::evas::text::bidi_delimiters_set(::efl::eina::string_view delim_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_text_bidi_delimiters_set(::efl::eolian::to_c(delim_)));
}

inline void eo_cxx::evas::text::outline_color_get(int* r_, int* g_, int* b_, int* a_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_text_outline_color_get(r_, g_, b_, a_));
}

inline void eo_cxx::evas::text::outline_color_set(int r_, int g_, int b_, int a_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_text_outline_color_set(r_, g_, b_, a_));
}

inline void eo_cxx::evas::text::glow2_color_get(int* r_, int* g_, int* b_, int* a_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_text_glow2_color_get(r_, g_, b_, a_));
}

inline void eo_cxx::evas::text::glow2_color_set(int r_, int g_, int b_, int a_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_text_glow2_color_set(r_, g_, b_, a_));
}

inline Evas_Text_Style_Type eo_cxx::evas::text::style_get() const
{
   Evas_Text_Style_Type _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_text_style_get());
   return _tmp_ret;
}

inline void eo_cxx::evas::text::style_set(Evas_Text_Style_Type style_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_text_style_set(style_));
}

inline void eo_cxx::evas::text::glow_color_get(int* r_, int* g_, int* b_, int* a_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_text_glow_color_get(r_, g_, b_, a_));
}

inline void eo_cxx::evas::text::glow_color_set(int r_, int g_, int b_, int a_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_text_glow_color_set(r_, g_, b_, a_));
}

inline Evas_Coord eo_cxx::evas::text::max_descent_get() const
{
   Evas_Coord _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_text_max_descent_get());
   return _tmp_ret;
}

inline void eo_cxx::evas::text::style_pad_get(int* l_, int* r_, int* t_, int* b_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_text_style_pad_get(l_, r_, t_, b_));
}

inline Evas_BiDi_Direction eo_cxx::evas::text::direction_get() const
{
   Evas_BiDi_Direction _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_text_direction_get());
   return _tmp_ret;
}

inline Evas_Coord eo_cxx::evas::text::ascent_get() const
{
   Evas_Coord _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_text_ascent_get());
   return _tmp_ret;
}

inline Evas_Coord eo_cxx::evas::text::horiz_advance_get() const
{
   Evas_Coord _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_text_horiz_advance_get());
   return _tmp_ret;
}

inline Evas_Coord eo_cxx::evas::text::inset_get() const
{
   Evas_Coord _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_text_inset_get());
   return _tmp_ret;
}

inline Evas_Coord eo_cxx::evas::text::max_ascent_get() const
{
   Evas_Coord _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_text_max_ascent_get());
   return _tmp_ret;
}

inline Evas_Coord eo_cxx::evas::text::vert_advance_get() const
{
   Evas_Coord _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_text_vert_advance_get());
   return _tmp_ret;
}

inline Evas_Coord eo_cxx::evas::text::descent_get() const
{
   Evas_Coord _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_text_descent_get());
   return _tmp_ret;
}

inline ::eo_cxx::evas::text::operator ::evas::text() const
{
   return *static_cast<::evas::text const*>(static_cast<void const*>(this));
}

inline ::eo_cxx::evas::text::operator ::evas::text&()
{
   return *static_cast<::evas::text*>(static_cast<void*>(this));
}

inline ::eo_cxx::evas::text::operator ::evas::text const&() const
{
   return *static_cast<::evas::text const*>(static_cast<void const*>(this));
}

template <typename T>
int evas_text_last_up_to_pos_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Evas_Coord x_, Evas_Coord y_)
{
   try
      {
         return static_cast<T*>(self->this_)->last_up_to_pos(x_, y_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         int _tmp_ret{};
         return _tmp_ret;
      }
}

template <typename T>
int evas_text_char_coords_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Evas_Coord x_, Evas_Coord y_, Evas_Coord* cx_, Evas_Coord* cy_, Evas_Coord* cw_, Evas_Coord* ch_)
{
   try
      {
         return static_cast<T*>(self->this_)->char_coords_get(x_, y_, cx_, cy_, cw_, ch_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         int _tmp_ret{};
         return _tmp_ret;
      }
}

template <typename T>
bool evas_text_char_pos_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, int pos_, Evas_Coord* cx_, Evas_Coord* cy_, Evas_Coord* cw_, Evas_Coord* ch_)
{
   try
      {
         return static_cast<T*>(self->this_)->char_pos_get(pos_, cx_, cy_, cw_, ch_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Eina_Bool _tmp_ret{};
         return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }
}

template <typename T>
void evas_text_shadow_color_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, int* r_, int* g_, int* b_, int* a_)
{
   try
      {
         static_cast<T*>(self->this_)->shadow_color_get(r_, g_, b_, a_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void evas_text_shadow_color_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, int r_, int g_, int b_, int a_)
{
   try
      {
         static_cast<T*>(self->this_)->shadow_color_set(r_, g_, b_, a_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
double evas_text_ellipsis_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->ellipsis_get();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         double _tmp_ret{};
         return _tmp_ret;
      }
}

template <typename T>
void evas_text_ellipsis_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, double ellipsis_)
{
   try
      {
         static_cast<T*>(self->this_)->ellipsis_set(ellipsis_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
::efl::eina::string_view evas_text_bidi_delimiters_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
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
void evas_text_bidi_delimiters_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, const char * delim_)
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
void evas_text_outline_color_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, int* r_, int* g_, int* b_, int* a_)
{
   try
      {
         static_cast<T*>(self->this_)->outline_color_get(r_, g_, b_, a_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void evas_text_outline_color_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, int r_, int g_, int b_, int a_)
{
   try
      {
         static_cast<T*>(self->this_)->outline_color_set(r_, g_, b_, a_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void evas_text_glow2_color_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, int* r_, int* g_, int* b_, int* a_)
{
   try
      {
         static_cast<T*>(self->this_)->glow2_color_get(r_, g_, b_, a_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void evas_text_glow2_color_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, int r_, int g_, int b_, int a_)
{
   try
      {
         static_cast<T*>(self->this_)->glow2_color_set(r_, g_, b_, a_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
Evas_Text_Style_Type evas_text_style_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->style_get();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Evas_Text_Style_Type _tmp_ret{};
         return _tmp_ret;
      }
}

template <typename T>
void evas_text_style_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Evas_Text_Style_Type style_)
{
   try
      {
         static_cast<T*>(self->this_)->style_set(style_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void evas_text_glow_color_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, int* r_, int* g_, int* b_, int* a_)
{
   try
      {
         static_cast<T*>(self->this_)->glow_color_get(r_, g_, b_, a_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void evas_text_glow_color_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, int r_, int g_, int b_, int a_)
{
   try
      {
         static_cast<T*>(self->this_)->glow_color_set(r_, g_, b_, a_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
Evas_Coord evas_text_max_descent_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->max_descent_get();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Evas_Coord _tmp_ret{};
         return _tmp_ret;
      }
}

template <typename T>
void evas_text_style_pad_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, int* l_, int* r_, int* t_, int* b_)
{
   try
      {
         static_cast<T*>(self->this_)->style_pad_get(l_, r_, t_, b_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
Evas_BiDi_Direction evas_text_direction_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->direction_get();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Evas_BiDi_Direction _tmp_ret{};
         return _tmp_ret;
      }
}

template <typename T>
Evas_Coord evas_text_ascent_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->ascent_get();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Evas_Coord _tmp_ret{};
         return _tmp_ret;
      }
}

template <typename T>
Evas_Coord evas_text_horiz_advance_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->horiz_advance_get();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Evas_Coord _tmp_ret{};
         return _tmp_ret;
      }
}

template <typename T>
Evas_Coord evas_text_inset_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->inset_get();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Evas_Coord _tmp_ret{};
         return _tmp_ret;
      }
}

template <typename T>
Evas_Coord evas_text_max_ascent_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->max_ascent_get();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Evas_Coord _tmp_ret{};
         return _tmp_ret;
      }
}

template <typename T>
Evas_Coord evas_text_vert_advance_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->vert_advance_get();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Evas_Coord _tmp_ret{};
         return _tmp_ret;
      }
}

template <typename T>
Evas_Coord evas_text_descent_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->descent_get();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Evas_Coord _tmp_ret{};
         return _tmp_ret;
      }
}

namespace efl { namespace eo { namespace detail {

template<>
struct operations< ::evas::text >
{
   template <typename T>
   struct type
         : virtual operations< ::evas::object >::template type<T>
         , virtual operations< ::efl::text >::template type<T>
         , virtual operations< ::efl::text_properties >::template type<T>
         , virtual operations< ::evas::filter >::template type<T>
   {
      virtual int last_up_to_pos(Evas_Coord x_, Evas_Coord y_)
      {
         int _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_obj_text_last_up_to_pos(x_, y_));
            return _tmp_ret;
      }

      virtual int char_coords_get(Evas_Coord x_, Evas_Coord y_, Evas_Coord* cx_, Evas_Coord* cy_, Evas_Coord* cw_, Evas_Coord* ch_)
      {
         int _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_obj_text_char_coords_get(x_, y_, cx_, cy_, cw_, ch_));
            return _tmp_ret;
      }

      virtual bool char_pos_get(int pos_, Evas_Coord* cx_, Evas_Coord* cy_, Evas_Coord* cw_, Evas_Coord* ch_)
      {
         Eina_Bool _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_obj_text_char_pos_get(pos_, cx_, cy_, cw_, ch_));
            return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }

      virtual void shadow_color_get(int* r_, int* g_, int* b_, int* a_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_obj_text_shadow_color_get(r_, g_, b_, a_));
      }

      virtual void shadow_color_set(int r_, int g_, int b_, int a_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_obj_text_shadow_color_set(r_, g_, b_, a_));
      }

      virtual double ellipsis_get()
      {
         double _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_obj_text_ellipsis_get());
            return _tmp_ret;
      }

      virtual void ellipsis_set(double ellipsis_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_obj_text_ellipsis_set(ellipsis_));
      }

      virtual ::efl::eina::string_view bidi_delimiters_get()
      {
         const char * _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_obj_text_bidi_delimiters_get());
            return ::efl::eolian::to_cxx<::efl::eina::string_view>(_tmp_ret, std::tuple<std::false_type>());
      }

      virtual void bidi_delimiters_set(::efl::eina::string_view delim_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_obj_text_bidi_delimiters_set(::efl::eolian::to_c(delim_)));
      }

      virtual void outline_color_get(int* r_, int* g_, int* b_, int* a_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_obj_text_outline_color_get(r_, g_, b_, a_));
      }

      virtual void outline_color_set(int r_, int g_, int b_, int a_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_obj_text_outline_color_set(r_, g_, b_, a_));
      }

      virtual void glow2_color_get(int* r_, int* g_, int* b_, int* a_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_obj_text_glow2_color_get(r_, g_, b_, a_));
      }

      virtual void glow2_color_set(int r_, int g_, int b_, int a_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_obj_text_glow2_color_set(r_, g_, b_, a_));
      }

      virtual Evas_Text_Style_Type style_get()
      {
         Evas_Text_Style_Type _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_obj_text_style_get());
            return _tmp_ret;
      }

      virtual void style_set(Evas_Text_Style_Type style_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_obj_text_style_set(style_));
      }

      virtual void glow_color_get(int* r_, int* g_, int* b_, int* a_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_obj_text_glow_color_get(r_, g_, b_, a_));
      }

      virtual void glow_color_set(int r_, int g_, int b_, int a_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_obj_text_glow_color_set(r_, g_, b_, a_));
      }

      virtual Evas_Coord max_descent_get()
      {
         Evas_Coord _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_obj_text_max_descent_get());
            return _tmp_ret;
      }

      virtual void style_pad_get(int* l_, int* r_, int* t_, int* b_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_obj_text_style_pad_get(l_, r_, t_, b_));
      }

      virtual Evas_BiDi_Direction direction_get()
      {
         Evas_BiDi_Direction _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_obj_text_direction_get());
            return _tmp_ret;
      }

      virtual Evas_Coord ascent_get()
      {
         Evas_Coord _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_obj_text_ascent_get());
            return _tmp_ret;
      }

      virtual Evas_Coord horiz_advance_get()
      {
         Evas_Coord _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_obj_text_horiz_advance_get());
            return _tmp_ret;
      }

      virtual Evas_Coord inset_get()
      {
         Evas_Coord _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_obj_text_inset_get());
            return _tmp_ret;
      }

      virtual Evas_Coord max_ascent_get()
      {
         Evas_Coord _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_obj_text_max_ascent_get());
            return _tmp_ret;
      }

      virtual Evas_Coord vert_advance_get()
      {
         Evas_Coord _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_obj_text_vert_advance_get());
            return _tmp_ret;
      }

      virtual Evas_Coord descent_get()
      {
         Evas_Coord _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_obj_text_descent_get());
            return _tmp_ret;
      }

   };
};


template<>
struct operation_description_class_size< ::evas::text >
{
   static constexpr int value = 
#if defined(TEXT_PROTECTED) && defined(TEXT_BETA)
      26
#elif defined(TEXT_PROTECTED)
      26
#elif defined(TEXT_BETA)
      26
#else
      26
#endif
      + operation_description_class_size<::evas::object >::value      + operation_description_class_size<::efl::text >::value      + operation_description_class_size<::efl::text_properties >::value      + operation_description_class_size<::evas::filter >::value;
};

template <typename T>
int initialize_operation_description(::efl::eo::detail::tag<::evas::text>
                                 , Eo_Op_Description* ops)
{
   int i = 0;
   (void)i;
   (void)ops;
   ops[i].func = reinterpret_cast<void*>(& ::evas_text_last_up_to_pos_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_text_last_up_to_pos);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_text_char_coords_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_text_char_coords_get);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_text_char_pos_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_text_char_pos_get);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_text_shadow_color_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_text_shadow_color_get);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_text_shadow_color_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_text_shadow_color_set);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_text_ellipsis_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_text_ellipsis_get);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_text_ellipsis_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_text_ellipsis_set);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_text_bidi_delimiters_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_text_bidi_delimiters_get);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_text_bidi_delimiters_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_text_bidi_delimiters_set);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_text_outline_color_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_text_outline_color_get);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_text_outline_color_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_text_outline_color_set);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_text_glow2_color_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_text_glow2_color_get);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_text_glow2_color_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_text_glow2_color_set);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_text_style_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_text_style_get);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_text_style_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_text_style_set);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_text_glow_color_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_text_glow_color_get);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_text_glow_color_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_text_glow_color_set);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_text_max_descent_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_text_max_descent_get);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_text_style_pad_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_text_style_pad_get);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_text_direction_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_text_direction_get);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_text_ascent_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_text_ascent_get);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_text_horiz_advance_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_text_horiz_advance_get);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_text_inset_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_text_inset_get);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_text_max_ascent_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_text_max_ascent_get);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_text_vert_advance_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_text_vert_advance_get);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_text_descent_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_text_descent_get);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   initialize_operation_description<T>(::efl::eo::detail::tag<::evas::object>(), &ops[operation_description_class_size< ::evas::text >::value]);
   initialize_operation_description<T>(::efl::eo::detail::tag<::efl::text>(), &ops[operation_description_class_size< ::evas::text >::value + operation_description_class_size<::evas::object>::value]);
   initialize_operation_description<T>(::efl::eo::detail::tag<::efl::text_properties>(), &ops[operation_description_class_size< ::evas::text >::value + operation_description_class_size<::evas::object>::value + operation_description_class_size<::efl::text>::value]);
   initialize_operation_description<T>(::efl::eo::detail::tag<::evas::filter>(), &ops[operation_description_class_size< ::evas::text >::value + operation_description_class_size<::evas::object>::value + operation_description_class_size<::efl::text>::value + operation_description_class_size<::efl::text_properties>::value]);
   return 0;
}
inline Eo_Class const* get_eo_class(tag<::evas::text>)
{
   return (EVAS_TEXT_CLASS);
}

} } }

/// @endcond

