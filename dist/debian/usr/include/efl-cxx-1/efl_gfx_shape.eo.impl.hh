/// @cond EO_CXX_EO_IMPL

inline void efl::gfx::shape::dup(::eo::base dup_from_) const
{
   eo_do(_concrete_eo_ptr(), ::efl_gfx_shape_dup(::efl::eolian::to_c(dup_from_)));
}

inline void efl::gfx::shape::bounds_get(Eina_Rectangle* r_) const
{
   eo_do(_concrete_eo_ptr(), ::efl_gfx_shape_bounds_get(r_));
}

inline void efl::gfx::shape::reset() const
{
   eo_do(_concrete_eo_ptr(), ::efl_gfx_shape_reset());
}

inline void efl::gfx::shape::append_move_to(double x_, double y_) const
{
   eo_do(_concrete_eo_ptr(), ::efl_gfx_shape_append_move_to(x_, y_));
}

inline void efl::gfx::shape::append_line_to(double x_, double y_) const
{
   eo_do(_concrete_eo_ptr(), ::efl_gfx_shape_append_line_to(x_, y_));
}

inline void efl::gfx::shape::append_quadratic_to(double x_, double y_, double ctrl_x_, double ctrl_y_) const
{
   eo_do(_concrete_eo_ptr(), ::efl_gfx_shape_append_quadratic_to(x_, y_, ctrl_x_, ctrl_y_));
}

inline void efl::gfx::shape::append_squadratic_to(double x_, double y_) const
{
   eo_do(_concrete_eo_ptr(), ::efl_gfx_shape_append_squadratic_to(x_, y_));
}

inline void efl::gfx::shape::append_cubic_to(double ctrl_x0_, double ctrl_y0_, double ctrl_x1_, double ctrl_y1_, double x_, double y_) const
{
   eo_do(_concrete_eo_ptr(), ::efl_gfx_shape_append_cubic_to(ctrl_x0_, ctrl_y0_, ctrl_x1_, ctrl_y1_, x_, y_));
}

inline void efl::gfx::shape::append_scubic_to(double x_, double y_, double ctrl_x_, double ctrl_y_) const
{
   eo_do(_concrete_eo_ptr(), ::efl_gfx_shape_append_scubic_to(x_, y_, ctrl_x_, ctrl_y_));
}

inline void efl::gfx::shape::append_arc_to(double x_, double y_, double rx_, double ry_, double angle_, bool large_arc_, bool sweep_) const
{
   eo_do(_concrete_eo_ptr(), ::efl_gfx_shape_append_arc_to(x_, y_, rx_, ry_, angle_, ::efl::eolian::to_c(large_arc_), ::efl::eolian::to_c(sweep_)));
}

inline void efl::gfx::shape::append_close() const
{
   eo_do(_concrete_eo_ptr(), ::efl_gfx_shape_append_close());
}

inline void efl::gfx::shape::append_circle(double x_, double y_, double radius_) const
{
   eo_do(_concrete_eo_ptr(), ::efl_gfx_shape_append_circle(x_, y_, radius_));
}

inline void efl::gfx::shape::append_rect(double x_, double y_, double w_, double h_, double rx_, double ry_) const
{
   eo_do(_concrete_eo_ptr(), ::efl_gfx_shape_append_rect(x_, y_, w_, h_, rx_, ry_));
}

inline void efl::gfx::shape::append_svg_path(::efl::eina::string_view svg_path_data_) const
{
   eo_do(_concrete_eo_ptr(), ::efl_gfx_shape_append_svg_path(::efl::eolian::to_c(svg_path_data_)));
}

inline bool efl::gfx::shape::interpolate(::eo::base from_, ::eo::base to_, double pos_map_) const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::efl_gfx_shape_interpolate(::efl::eolian::to_c(from_), ::efl::eolian::to_c(to_), pos_map_));
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline bool efl::gfx::shape::equal_commands(::eo::base with_) const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::efl_gfx_shape_equal_commands(::efl::eolian::to_c(with_)));
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline double efl::gfx::shape::stroke_scale_get() const
{
   double _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::efl_gfx_shape_stroke_scale_get());
   return _tmp_ret;
}

inline void efl::gfx::shape::stroke_scale_set(double s_) const
{
   eo_do(_concrete_eo_ptr(), ::efl_gfx_shape_stroke_scale_set(s_));
}

inline void efl::gfx::shape::stroke_color_get(int* r_, int* g_, int* b_, int* a_) const
{
   eo_do(_concrete_eo_ptr(), ::efl_gfx_shape_stroke_color_get(r_, g_, b_, a_));
}

inline void efl::gfx::shape::stroke_color_set(int r_, int g_, int b_, int a_) const
{
   eo_do(_concrete_eo_ptr(), ::efl_gfx_shape_stroke_color_set(r_, g_, b_, a_));
}

inline double efl::gfx::shape::stroke_width_get() const
{
   double _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::efl_gfx_shape_stroke_width_get());
   return _tmp_ret;
}

inline void efl::gfx::shape::stroke_width_set(double w_) const
{
   eo_do(_concrete_eo_ptr(), ::efl_gfx_shape_stroke_width_set(w_));
}

inline double efl::gfx::shape::stroke_location_get() const
{
   double _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::efl_gfx_shape_stroke_location_get());
   return _tmp_ret;
}

inline void efl::gfx::shape::stroke_location_set(double centered_) const
{
   eo_do(_concrete_eo_ptr(), ::efl_gfx_shape_stroke_location_set(centered_));
}

inline void efl::gfx::shape::stroke_dash_get(const Efl_Gfx_Dash ** dash_, unsigned int* length_) const
{
   eo_do(_concrete_eo_ptr(), ::efl_gfx_shape_stroke_dash_get(dash_, length_));
}

inline void efl::gfx::shape::stroke_dash_set(const Efl_Gfx_Dash * dash_, unsigned int length_) const
{
   eo_do(_concrete_eo_ptr(), ::efl_gfx_shape_stroke_dash_set(dash_, length_));
}

inline Efl_Gfx_Cap efl::gfx::shape::stroke_cap_get() const
{
   Efl_Gfx_Cap _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::efl_gfx_shape_stroke_cap_get());
   return _tmp_ret;
}

inline void efl::gfx::shape::stroke_cap_set(Efl_Gfx_Cap c_) const
{
   eo_do(_concrete_eo_ptr(), ::efl_gfx_shape_stroke_cap_set(c_));
}

inline Efl_Gfx_Join efl::gfx::shape::stroke_join_get() const
{
   Efl_Gfx_Join _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::efl_gfx_shape_stroke_join_get());
   return _tmp_ret;
}

inline void efl::gfx::shape::stroke_join_set(Efl_Gfx_Join j_) const
{
   eo_do(_concrete_eo_ptr(), ::efl_gfx_shape_stroke_join_set(j_));
}

inline Efl_Gfx_Fill_Rule efl::gfx::shape::fill_rule_get() const
{
   Efl_Gfx_Fill_Rule _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::efl_gfx_shape_fill_rule_get());
   return _tmp_ret;
}

inline void efl::gfx::shape::fill_rule_set(Efl_Gfx_Fill_Rule fill_rule_) const
{
   eo_do(_concrete_eo_ptr(), ::efl_gfx_shape_fill_rule_set(fill_rule_));
}

inline void efl::gfx::shape::path_get(const Efl_Gfx_Path_Command ** op_, const double ** points_) const
{
   eo_do(_concrete_eo_ptr(), ::efl_gfx_shape_path_get(op_, points_));
}

inline void efl::gfx::shape::path_set(const Efl_Gfx_Path_Command * op_, const double * points_) const
{
   eo_do(_concrete_eo_ptr(), ::efl_gfx_shape_path_set(op_, points_));
}

inline void efl::gfx::shape::path_length_get(unsigned int* commands_, unsigned int* points_) const
{
   eo_do(_concrete_eo_ptr(), ::efl_gfx_shape_path_length_get(commands_, points_));
}

inline void efl::gfx::shape::current_get(double* x_, double* y_) const
{
   eo_do(_concrete_eo_ptr(), ::efl_gfx_shape_current_get(x_, y_));
}

inline void efl::gfx::shape::current_ctrl_get(double* x_, double* y_) const
{
   eo_do(_concrete_eo_ptr(), ::efl_gfx_shape_current_ctrl_get(x_, y_));
}

inline void eo_cxx::efl::gfx::shape::dup(::eo::base dup_from_) const
{
   eo_do(_concrete_eo_ptr(), ::efl_gfx_shape_dup(::efl::eolian::to_c(dup_from_)));
}

inline void eo_cxx::efl::gfx::shape::bounds_get(Eina_Rectangle* r_) const
{
   eo_do(_concrete_eo_ptr(), ::efl_gfx_shape_bounds_get(r_));
}

inline void eo_cxx::efl::gfx::shape::reset() const
{
   eo_do(_concrete_eo_ptr(), ::efl_gfx_shape_reset());
}

inline void eo_cxx::efl::gfx::shape::append_move_to(double x_, double y_) const
{
   eo_do(_concrete_eo_ptr(), ::efl_gfx_shape_append_move_to(x_, y_));
}

inline void eo_cxx::efl::gfx::shape::append_line_to(double x_, double y_) const
{
   eo_do(_concrete_eo_ptr(), ::efl_gfx_shape_append_line_to(x_, y_));
}

inline void eo_cxx::efl::gfx::shape::append_quadratic_to(double x_, double y_, double ctrl_x_, double ctrl_y_) const
{
   eo_do(_concrete_eo_ptr(), ::efl_gfx_shape_append_quadratic_to(x_, y_, ctrl_x_, ctrl_y_));
}

inline void eo_cxx::efl::gfx::shape::append_squadratic_to(double x_, double y_) const
{
   eo_do(_concrete_eo_ptr(), ::efl_gfx_shape_append_squadratic_to(x_, y_));
}

inline void eo_cxx::efl::gfx::shape::append_cubic_to(double ctrl_x0_, double ctrl_y0_, double ctrl_x1_, double ctrl_y1_, double x_, double y_) const
{
   eo_do(_concrete_eo_ptr(), ::efl_gfx_shape_append_cubic_to(ctrl_x0_, ctrl_y0_, ctrl_x1_, ctrl_y1_, x_, y_));
}

inline void eo_cxx::efl::gfx::shape::append_scubic_to(double x_, double y_, double ctrl_x_, double ctrl_y_) const
{
   eo_do(_concrete_eo_ptr(), ::efl_gfx_shape_append_scubic_to(x_, y_, ctrl_x_, ctrl_y_));
}

inline void eo_cxx::efl::gfx::shape::append_arc_to(double x_, double y_, double rx_, double ry_, double angle_, bool large_arc_, bool sweep_) const
{
   eo_do(_concrete_eo_ptr(), ::efl_gfx_shape_append_arc_to(x_, y_, rx_, ry_, angle_, ::efl::eolian::to_c(large_arc_), ::efl::eolian::to_c(sweep_)));
}

inline void eo_cxx::efl::gfx::shape::append_close() const
{
   eo_do(_concrete_eo_ptr(), ::efl_gfx_shape_append_close());
}

inline void eo_cxx::efl::gfx::shape::append_circle(double x_, double y_, double radius_) const
{
   eo_do(_concrete_eo_ptr(), ::efl_gfx_shape_append_circle(x_, y_, radius_));
}

inline void eo_cxx::efl::gfx::shape::append_rect(double x_, double y_, double w_, double h_, double rx_, double ry_) const
{
   eo_do(_concrete_eo_ptr(), ::efl_gfx_shape_append_rect(x_, y_, w_, h_, rx_, ry_));
}

inline void eo_cxx::efl::gfx::shape::append_svg_path(::efl::eina::string_view svg_path_data_) const
{
   eo_do(_concrete_eo_ptr(), ::efl_gfx_shape_append_svg_path(::efl::eolian::to_c(svg_path_data_)));
}

inline bool eo_cxx::efl::gfx::shape::interpolate(::eo::base from_, ::eo::base to_, double pos_map_) const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::efl_gfx_shape_interpolate(::efl::eolian::to_c(from_), ::efl::eolian::to_c(to_), pos_map_));
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline bool eo_cxx::efl::gfx::shape::equal_commands(::eo::base with_) const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::efl_gfx_shape_equal_commands(::efl::eolian::to_c(with_)));
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline double eo_cxx::efl::gfx::shape::stroke_scale_get() const
{
   double _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::efl_gfx_shape_stroke_scale_get());
   return _tmp_ret;
}

inline void eo_cxx::efl::gfx::shape::stroke_scale_set(double s_) const
{
   eo_do(_concrete_eo_ptr(), ::efl_gfx_shape_stroke_scale_set(s_));
}

inline void eo_cxx::efl::gfx::shape::stroke_color_get(int* r_, int* g_, int* b_, int* a_) const
{
   eo_do(_concrete_eo_ptr(), ::efl_gfx_shape_stroke_color_get(r_, g_, b_, a_));
}

inline void eo_cxx::efl::gfx::shape::stroke_color_set(int r_, int g_, int b_, int a_) const
{
   eo_do(_concrete_eo_ptr(), ::efl_gfx_shape_stroke_color_set(r_, g_, b_, a_));
}

inline double eo_cxx::efl::gfx::shape::stroke_width_get() const
{
   double _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::efl_gfx_shape_stroke_width_get());
   return _tmp_ret;
}

inline void eo_cxx::efl::gfx::shape::stroke_width_set(double w_) const
{
   eo_do(_concrete_eo_ptr(), ::efl_gfx_shape_stroke_width_set(w_));
}

inline double eo_cxx::efl::gfx::shape::stroke_location_get() const
{
   double _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::efl_gfx_shape_stroke_location_get());
   return _tmp_ret;
}

inline void eo_cxx::efl::gfx::shape::stroke_location_set(double centered_) const
{
   eo_do(_concrete_eo_ptr(), ::efl_gfx_shape_stroke_location_set(centered_));
}

inline void eo_cxx::efl::gfx::shape::stroke_dash_get(const Efl_Gfx_Dash ** dash_, unsigned int* length_) const
{
   eo_do(_concrete_eo_ptr(), ::efl_gfx_shape_stroke_dash_get(dash_, length_));
}

inline void eo_cxx::efl::gfx::shape::stroke_dash_set(const Efl_Gfx_Dash * dash_, unsigned int length_) const
{
   eo_do(_concrete_eo_ptr(), ::efl_gfx_shape_stroke_dash_set(dash_, length_));
}

inline Efl_Gfx_Cap eo_cxx::efl::gfx::shape::stroke_cap_get() const
{
   Efl_Gfx_Cap _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::efl_gfx_shape_stroke_cap_get());
   return _tmp_ret;
}

inline void eo_cxx::efl::gfx::shape::stroke_cap_set(Efl_Gfx_Cap c_) const
{
   eo_do(_concrete_eo_ptr(), ::efl_gfx_shape_stroke_cap_set(c_));
}

inline Efl_Gfx_Join eo_cxx::efl::gfx::shape::stroke_join_get() const
{
   Efl_Gfx_Join _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::efl_gfx_shape_stroke_join_get());
   return _tmp_ret;
}

inline void eo_cxx::efl::gfx::shape::stroke_join_set(Efl_Gfx_Join j_) const
{
   eo_do(_concrete_eo_ptr(), ::efl_gfx_shape_stroke_join_set(j_));
}

inline Efl_Gfx_Fill_Rule eo_cxx::efl::gfx::shape::fill_rule_get() const
{
   Efl_Gfx_Fill_Rule _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::efl_gfx_shape_fill_rule_get());
   return _tmp_ret;
}

inline void eo_cxx::efl::gfx::shape::fill_rule_set(Efl_Gfx_Fill_Rule fill_rule_) const
{
   eo_do(_concrete_eo_ptr(), ::efl_gfx_shape_fill_rule_set(fill_rule_));
}

inline void eo_cxx::efl::gfx::shape::path_get(const Efl_Gfx_Path_Command ** op_, const double ** points_) const
{
   eo_do(_concrete_eo_ptr(), ::efl_gfx_shape_path_get(op_, points_));
}

inline void eo_cxx::efl::gfx::shape::path_set(const Efl_Gfx_Path_Command * op_, const double * points_) const
{
   eo_do(_concrete_eo_ptr(), ::efl_gfx_shape_path_set(op_, points_));
}

inline void eo_cxx::efl::gfx::shape::path_length_get(unsigned int* commands_, unsigned int* points_) const
{
   eo_do(_concrete_eo_ptr(), ::efl_gfx_shape_path_length_get(commands_, points_));
}

inline void eo_cxx::efl::gfx::shape::current_get(double* x_, double* y_) const
{
   eo_do(_concrete_eo_ptr(), ::efl_gfx_shape_current_get(x_, y_));
}

inline void eo_cxx::efl::gfx::shape::current_ctrl_get(double* x_, double* y_) const
{
   eo_do(_concrete_eo_ptr(), ::efl_gfx_shape_current_ctrl_get(x_, y_));
}

inline ::eo_cxx::efl::gfx::shape::operator ::efl::gfx::shape() const
{
   return *static_cast<::efl::gfx::shape const*>(static_cast<void const*>(this));
}

inline ::eo_cxx::efl::gfx::shape::operator ::efl::gfx::shape&()
{
   return *static_cast<::efl::gfx::shape*>(static_cast<void*>(this));
}

inline ::eo_cxx::efl::gfx::shape::operator ::efl::gfx::shape const&() const
{
   return *static_cast<::efl::gfx::shape const*>(static_cast<void const*>(this));
}

template <typename T>
void efl_gfx_shape_dup_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, const Eo_Base * dup_from_)
{
   try
      {
         static_cast<T*>(self->this_)->dup(::efl::eolian::to_cxx<::eo::base>(dup_from_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void efl_gfx_shape_bounds_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Eina_Rectangle* r_)
{
   try
      {
         static_cast<T*>(self->this_)->bounds_get(r_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void efl_gfx_shape_reset_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         static_cast<T*>(self->this_)->reset();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void efl_gfx_shape_append_move_to_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, double x_, double y_)
{
   try
      {
         static_cast<T*>(self->this_)->append_move_to(x_, y_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void efl_gfx_shape_append_line_to_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, double x_, double y_)
{
   try
      {
         static_cast<T*>(self->this_)->append_line_to(x_, y_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void efl_gfx_shape_append_quadratic_to_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, double x_, double y_, double ctrl_x_, double ctrl_y_)
{
   try
      {
         static_cast<T*>(self->this_)->append_quadratic_to(x_, y_, ctrl_x_, ctrl_y_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void efl_gfx_shape_append_squadratic_to_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, double x_, double y_)
{
   try
      {
         static_cast<T*>(self->this_)->append_squadratic_to(x_, y_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void efl_gfx_shape_append_cubic_to_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, double ctrl_x0_, double ctrl_y0_, double ctrl_x1_, double ctrl_y1_, double x_, double y_)
{
   try
      {
         static_cast<T*>(self->this_)->append_cubic_to(ctrl_x0_, ctrl_y0_, ctrl_x1_, ctrl_y1_, x_, y_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void efl_gfx_shape_append_scubic_to_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, double x_, double y_, double ctrl_x_, double ctrl_y_)
{
   try
      {
         static_cast<T*>(self->this_)->append_scubic_to(x_, y_, ctrl_x_, ctrl_y_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void efl_gfx_shape_append_arc_to_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, double x_, double y_, double rx_, double ry_, double angle_, Eina_Bool large_arc_, Eina_Bool sweep_)
{
   try
      {
         static_cast<T*>(self->this_)->append_arc_to(x_, y_, rx_, ry_, angle_, ::efl::eolian::to_cxx<bool>(large_arc_, std::tuple<std::false_type>()), ::efl::eolian::to_cxx<bool>(sweep_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void efl_gfx_shape_append_close_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         static_cast<T*>(self->this_)->append_close();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void efl_gfx_shape_append_circle_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, double x_, double y_, double radius_)
{
   try
      {
         static_cast<T*>(self->this_)->append_circle(x_, y_, radius_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void efl_gfx_shape_append_rect_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, double x_, double y_, double w_, double h_, double rx_, double ry_)
{
   try
      {
         static_cast<T*>(self->this_)->append_rect(x_, y_, w_, h_, rx_, ry_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void efl_gfx_shape_append_svg_path_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, const char * svg_path_data_)
{
   try
      {
         static_cast<T*>(self->this_)->append_svg_path(::efl::eolian::to_cxx<::efl::eina::string_view>(svg_path_data_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
bool efl_gfx_shape_interpolate_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, const Eo_Base * from_, const Eo_Base * to_, double pos_map_)
{
   try
      {
         return static_cast<T*>(self->this_)->interpolate(::efl::eolian::to_cxx<::eo::base>(from_, std::tuple<std::false_type>()), ::efl::eolian::to_cxx<::eo::base>(to_, std::tuple<std::false_type>()), pos_map_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Eina_Bool _tmp_ret{};
         return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }
}

template <typename T>
bool efl_gfx_shape_equal_commands_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, const Eo_Base * with_)
{
   try
      {
         return static_cast<T*>(self->this_)->equal_commands(::efl::eolian::to_cxx<::eo::base>(with_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Eina_Bool _tmp_ret{};
         return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }
}

template <typename T>
double efl_gfx_shape_stroke_scale_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->stroke_scale_get();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         double _tmp_ret{};
         return _tmp_ret;
      }
}

template <typename T>
void efl_gfx_shape_stroke_scale_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, double s_)
{
   try
      {
         static_cast<T*>(self->this_)->stroke_scale_set(s_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void efl_gfx_shape_stroke_color_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, int* r_, int* g_, int* b_, int* a_)
{
   try
      {
         static_cast<T*>(self->this_)->stroke_color_get(r_, g_, b_, a_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void efl_gfx_shape_stroke_color_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, int r_, int g_, int b_, int a_)
{
   try
      {
         static_cast<T*>(self->this_)->stroke_color_set(r_, g_, b_, a_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
double efl_gfx_shape_stroke_width_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->stroke_width_get();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         double _tmp_ret{};
         return _tmp_ret;
      }
}

template <typename T>
void efl_gfx_shape_stroke_width_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, double w_)
{
   try
      {
         static_cast<T*>(self->this_)->stroke_width_set(w_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
double efl_gfx_shape_stroke_location_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->stroke_location_get();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         double _tmp_ret{};
         return _tmp_ret;
      }
}

template <typename T>
void efl_gfx_shape_stroke_location_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, double centered_)
{
   try
      {
         static_cast<T*>(self->this_)->stroke_location_set(centered_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void efl_gfx_shape_stroke_dash_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, const Efl_Gfx_Dash ** dash_, unsigned int* length_)
{
   try
      {
         static_cast<T*>(self->this_)->stroke_dash_get(dash_, length_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void efl_gfx_shape_stroke_dash_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, const Efl_Gfx_Dash * dash_, unsigned int length_)
{
   try
      {
         static_cast<T*>(self->this_)->stroke_dash_set(dash_, length_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
Efl_Gfx_Cap efl_gfx_shape_stroke_cap_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->stroke_cap_get();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Efl_Gfx_Cap _tmp_ret{};
         return _tmp_ret;
      }
}

template <typename T>
void efl_gfx_shape_stroke_cap_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Efl_Gfx_Cap c_)
{
   try
      {
         static_cast<T*>(self->this_)->stroke_cap_set(c_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
Efl_Gfx_Join efl_gfx_shape_stroke_join_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->stroke_join_get();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Efl_Gfx_Join _tmp_ret{};
         return _tmp_ret;
      }
}

template <typename T>
void efl_gfx_shape_stroke_join_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Efl_Gfx_Join j_)
{
   try
      {
         static_cast<T*>(self->this_)->stroke_join_set(j_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
Efl_Gfx_Fill_Rule efl_gfx_shape_fill_rule_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->fill_rule_get();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Efl_Gfx_Fill_Rule _tmp_ret{};
         return _tmp_ret;
      }
}

template <typename T>
void efl_gfx_shape_fill_rule_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Efl_Gfx_Fill_Rule fill_rule_)
{
   try
      {
         static_cast<T*>(self->this_)->fill_rule_set(fill_rule_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void efl_gfx_shape_path_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, const Efl_Gfx_Path_Command ** op_, const double ** points_)
{
   try
      {
         static_cast<T*>(self->this_)->path_get(op_, points_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void efl_gfx_shape_path_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, const Efl_Gfx_Path_Command * op_, const double * points_)
{
   try
      {
         static_cast<T*>(self->this_)->path_set(op_, points_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void efl_gfx_shape_path_length_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, unsigned int* commands_, unsigned int* points_)
{
   try
      {
         static_cast<T*>(self->this_)->path_length_get(commands_, points_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void efl_gfx_shape_current_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, double* x_, double* y_)
{
   try
      {
         static_cast<T*>(self->this_)->current_get(x_, y_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void efl_gfx_shape_current_ctrl_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, double* x_, double* y_)
{
   try
      {
         static_cast<T*>(self->this_)->current_ctrl_get(x_, y_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

namespace efl { namespace eo { namespace detail {

template<>
struct operations< ::efl::gfx::shape >
{
   template <typename T>
   struct type
   {
      virtual void dup(::eo::base dup_from_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::efl_gfx_shape_dup(::efl::eolian::to_c(dup_from_)));
      }

      virtual void bounds_get(Eina_Rectangle* r_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::efl_gfx_shape_bounds_get(r_));
      }

      virtual void reset()
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::efl_gfx_shape_reset());
      }

      virtual void append_move_to(double x_, double y_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::efl_gfx_shape_append_move_to(x_, y_));
      }

      virtual void append_line_to(double x_, double y_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::efl_gfx_shape_append_line_to(x_, y_));
      }

      virtual void append_quadratic_to(double x_, double y_, double ctrl_x_, double ctrl_y_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::efl_gfx_shape_append_quadratic_to(x_, y_, ctrl_x_, ctrl_y_));
      }

      virtual void append_squadratic_to(double x_, double y_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::efl_gfx_shape_append_squadratic_to(x_, y_));
      }

      virtual void append_cubic_to(double ctrl_x0_, double ctrl_y0_, double ctrl_x1_, double ctrl_y1_, double x_, double y_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::efl_gfx_shape_append_cubic_to(ctrl_x0_, ctrl_y0_, ctrl_x1_, ctrl_y1_, x_, y_));
      }

      virtual void append_scubic_to(double x_, double y_, double ctrl_x_, double ctrl_y_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::efl_gfx_shape_append_scubic_to(x_, y_, ctrl_x_, ctrl_y_));
      }

      virtual void append_arc_to(double x_, double y_, double rx_, double ry_, double angle_, bool large_arc_, bool sweep_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::efl_gfx_shape_append_arc_to(x_, y_, rx_, ry_, angle_, ::efl::eolian::to_c(large_arc_), ::efl::eolian::to_c(sweep_)));
      }

      virtual void append_close()
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::efl_gfx_shape_append_close());
      }

      virtual void append_circle(double x_, double y_, double radius_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::efl_gfx_shape_append_circle(x_, y_, radius_));
      }

      virtual void append_rect(double x_, double y_, double w_, double h_, double rx_, double ry_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::efl_gfx_shape_append_rect(x_, y_, w_, h_, rx_, ry_));
      }

      virtual void append_svg_path(::efl::eina::string_view svg_path_data_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::efl_gfx_shape_append_svg_path(::efl::eolian::to_c(svg_path_data_)));
      }

      virtual bool interpolate(::eo::base from_, ::eo::base to_, double pos_map_)
      {
         Eina_Bool _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::efl_gfx_shape_interpolate(::efl::eolian::to_c(from_), ::efl::eolian::to_c(to_), pos_map_));
            return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }

      virtual bool equal_commands(::eo::base with_)
      {
         Eina_Bool _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::efl_gfx_shape_equal_commands(::efl::eolian::to_c(with_)));
            return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }

      virtual double stroke_scale_get()
      {
         double _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::efl_gfx_shape_stroke_scale_get());
            return _tmp_ret;
      }

      virtual void stroke_scale_set(double s_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::efl_gfx_shape_stroke_scale_set(s_));
      }

      virtual void stroke_color_get(int* r_, int* g_, int* b_, int* a_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::efl_gfx_shape_stroke_color_get(r_, g_, b_, a_));
      }

      virtual void stroke_color_set(int r_, int g_, int b_, int a_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::efl_gfx_shape_stroke_color_set(r_, g_, b_, a_));
      }

      virtual double stroke_width_get()
      {
         double _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::efl_gfx_shape_stroke_width_get());
            return _tmp_ret;
      }

      virtual void stroke_width_set(double w_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::efl_gfx_shape_stroke_width_set(w_));
      }

      virtual double stroke_location_get()
      {
         double _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::efl_gfx_shape_stroke_location_get());
            return _tmp_ret;
      }

      virtual void stroke_location_set(double centered_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::efl_gfx_shape_stroke_location_set(centered_));
      }

      virtual void stroke_dash_get(const Efl_Gfx_Dash ** dash_, unsigned int* length_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::efl_gfx_shape_stroke_dash_get(dash_, length_));
      }

      virtual void stroke_dash_set(const Efl_Gfx_Dash * dash_, unsigned int length_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::efl_gfx_shape_stroke_dash_set(dash_, length_));
      }

      virtual Efl_Gfx_Cap stroke_cap_get()
      {
         Efl_Gfx_Cap _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::efl_gfx_shape_stroke_cap_get());
            return _tmp_ret;
      }

      virtual void stroke_cap_set(Efl_Gfx_Cap c_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::efl_gfx_shape_stroke_cap_set(c_));
      }

      virtual Efl_Gfx_Join stroke_join_get()
      {
         Efl_Gfx_Join _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::efl_gfx_shape_stroke_join_get());
            return _tmp_ret;
      }

      virtual void stroke_join_set(Efl_Gfx_Join j_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::efl_gfx_shape_stroke_join_set(j_));
      }

      virtual Efl_Gfx_Fill_Rule fill_rule_get()
      {
         Efl_Gfx_Fill_Rule _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::efl_gfx_shape_fill_rule_get());
            return _tmp_ret;
      }

      virtual void fill_rule_set(Efl_Gfx_Fill_Rule fill_rule_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::efl_gfx_shape_fill_rule_set(fill_rule_));
      }

      virtual void path_get(const Efl_Gfx_Path_Command ** op_, const double ** points_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::efl_gfx_shape_path_get(op_, points_));
      }

      virtual void path_set(const Efl_Gfx_Path_Command * op_, const double * points_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::efl_gfx_shape_path_set(op_, points_));
      }

      virtual void path_length_get(unsigned int* commands_, unsigned int* points_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::efl_gfx_shape_path_length_get(commands_, points_));
      }

      virtual void current_get(double* x_, double* y_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::efl_gfx_shape_current_get(x_, y_));
      }

      virtual void current_ctrl_get(double* x_, double* y_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::efl_gfx_shape_current_ctrl_get(x_, y_));
      }

   };
};


template<>
struct operation_description_class_size< ::efl::gfx::shape >
{
   static constexpr int value = 
#if defined(SHAPE_PROTECTED) && defined(SHAPE_BETA)
      37
#elif defined(SHAPE_PROTECTED)
      37
#elif defined(SHAPE_BETA)
      37
#else
      37
#endif
;
};

template <typename T>
int initialize_operation_description(::efl::eo::detail::tag<::efl::gfx::shape>
                                 , Eo_Op_Description* ops)
{
   int i = 0;
   (void)i;
   (void)ops;
   ops[i].func = reinterpret_cast<void*>(& ::efl_gfx_shape_dup_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::efl_gfx_shape_dup);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::efl_gfx_shape_bounds_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::efl_gfx_shape_bounds_get);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::efl_gfx_shape_reset_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::efl_gfx_shape_reset);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::efl_gfx_shape_append_move_to_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::efl_gfx_shape_append_move_to);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::efl_gfx_shape_append_line_to_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::efl_gfx_shape_append_line_to);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::efl_gfx_shape_append_quadratic_to_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::efl_gfx_shape_append_quadratic_to);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::efl_gfx_shape_append_squadratic_to_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::efl_gfx_shape_append_squadratic_to);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::efl_gfx_shape_append_cubic_to_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::efl_gfx_shape_append_cubic_to);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::efl_gfx_shape_append_scubic_to_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::efl_gfx_shape_append_scubic_to);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::efl_gfx_shape_append_arc_to_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::efl_gfx_shape_append_arc_to);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::efl_gfx_shape_append_close_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::efl_gfx_shape_append_close);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::efl_gfx_shape_append_circle_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::efl_gfx_shape_append_circle);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::efl_gfx_shape_append_rect_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::efl_gfx_shape_append_rect);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::efl_gfx_shape_append_svg_path_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::efl_gfx_shape_append_svg_path);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::efl_gfx_shape_interpolate_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::efl_gfx_shape_interpolate);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::efl_gfx_shape_equal_commands_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::efl_gfx_shape_equal_commands);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::efl_gfx_shape_stroke_scale_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::efl_gfx_shape_stroke_scale_get);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::efl_gfx_shape_stroke_scale_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::efl_gfx_shape_stroke_scale_set);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::efl_gfx_shape_stroke_color_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::efl_gfx_shape_stroke_color_get);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::efl_gfx_shape_stroke_color_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::efl_gfx_shape_stroke_color_set);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::efl_gfx_shape_stroke_width_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::efl_gfx_shape_stroke_width_get);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::efl_gfx_shape_stroke_width_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::efl_gfx_shape_stroke_width_set);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::efl_gfx_shape_stroke_location_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::efl_gfx_shape_stroke_location_get);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::efl_gfx_shape_stroke_location_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::efl_gfx_shape_stroke_location_set);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::efl_gfx_shape_stroke_dash_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::efl_gfx_shape_stroke_dash_get);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::efl_gfx_shape_stroke_dash_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::efl_gfx_shape_stroke_dash_set);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::efl_gfx_shape_stroke_cap_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::efl_gfx_shape_stroke_cap_get);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::efl_gfx_shape_stroke_cap_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::efl_gfx_shape_stroke_cap_set);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::efl_gfx_shape_stroke_join_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::efl_gfx_shape_stroke_join_get);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::efl_gfx_shape_stroke_join_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::efl_gfx_shape_stroke_join_set);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::efl_gfx_shape_fill_rule_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::efl_gfx_shape_fill_rule_get);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::efl_gfx_shape_fill_rule_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::efl_gfx_shape_fill_rule_set);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::efl_gfx_shape_path_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::efl_gfx_shape_path_get);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::efl_gfx_shape_path_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::efl_gfx_shape_path_set);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::efl_gfx_shape_path_length_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::efl_gfx_shape_path_length_get);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::efl_gfx_shape_current_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::efl_gfx_shape_current_get);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::efl_gfx_shape_current_ctrl_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::efl_gfx_shape_current_ctrl_get);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   return 0;
}
inline Eo_Class const* get_eo_class(tag<::efl::gfx::shape>)
{
   return (EFL_GFX_SHAPE_MIXIN);
}

} } }

/// @endcond

