/// @cond EO_CXX_EO_IMPL

inline ::evas::canvas3d::node::_c_constructor evas::canvas3d::node::constructor(Evas_Canvas3D_Node_Type type_)
{
   return _c_constructor(type_);
}

inline Evas_Canvas3D_Node_Type evas::canvas3d::node::type_get() const
{
   Evas_Canvas3D_Node_Type _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_canvas3d_node_type_get());
   return _tmp_ret;
}

inline void evas::canvas3d::node::member_add(::evas::canvas3d::node member_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas3d_node_member_add(::efl::eolian::to_c(member_)));
}

inline void evas::canvas3d::node::member_del(::evas::canvas3d::node member_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas3d_node_member_del(::efl::eolian::to_c(member_)));
}

inline ::evas::canvas3d::node evas::canvas3d::node::parent_get() const
{
   Evas_Canvas3D_Node * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_canvas3d_node_parent_get());
   return ::efl::eolian::to_cxx<::evas::canvas3d::node>(_tmp_ret, std::tuple<std::false_type>());
}

inline ::efl::eina::crange_list< ::evas::canvas3d::node > evas::canvas3d::node::member_list_get() const
{
   const Eina_List * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_canvas3d_node_member_list_get());
   return ::efl::eolian::to_cxx<::efl::eina::crange_list< ::evas::canvas3d::node >>(_tmp_ret, std::tuple<std::false_type, std::false_type>());
}

inline Eina_Hash * evas::canvas3d::node::scene_root_get() const
{
   Eina_Hash * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_canvas3d_node_scene_root_get());
   return _tmp_ret;
}

inline void evas::canvas3d::node::position_set(Evas_Real x_, Evas_Real y_, Evas_Real z_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas3d_node_position_set(x_, y_, z_));
}

inline void evas::canvas3d::node::orientation_set(Evas_Real x_, Evas_Real y_, Evas_Real z_, Evas_Real w_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas3d_node_orientation_set(x_, y_, z_, w_));
}

inline void evas::canvas3d::node::orientation_angle_axis_set(Evas_Real angle_, Evas_Real x_, Evas_Real y_, Evas_Real z_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas3d_node_orientation_angle_axis_set(angle_, x_, y_, z_));
}

inline void evas::canvas3d::node::scale_set(Evas_Real x_, Evas_Real y_, Evas_Real z_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas3d_node_scale_set(x_, y_, z_));
}

inline void evas::canvas3d::node::position_get(Evas_Canvas3D_Space space_, Evas_Real* x_, Evas_Real* y_, Evas_Real* z_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas3d_node_position_get(space_, x_, y_, z_));
}

inline void evas::canvas3d::node::orientation_get(Evas_Canvas3D_Space space_, Evas_Real* x_, Evas_Real* y_, Evas_Real* z_, Evas_Real* w_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas3d_node_orientation_get(space_, x_, y_, z_, w_));
}

inline void evas::canvas3d::node::scale_get(Evas_Canvas3D_Space space_, Evas_Real* x_, Evas_Real* y_, Evas_Real* z_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas3d_node_scale_get(space_, x_, y_, z_));
}

inline void evas::canvas3d::node::look_at_set(Evas_Canvas3D_Space target_space_, Evas_Real x_, Evas_Real y_, Evas_Real z_, Evas_Canvas3D_Space up_space_, Evas_Real ux_, Evas_Real uy_, Evas_Real uz_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas3d_node_look_at_set(target_space_, x_, y_, z_, up_space_, ux_, uy_, uz_));
}

inline void evas::canvas3d::node::mesh_add(::evas::canvas3d::mesh mesh_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas3d_node_mesh_add(::efl::eolian::to_c(mesh_)));
}

inline void evas::canvas3d::node::mesh_del(::evas::canvas3d::mesh mesh_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas3d_node_mesh_del(::efl::eolian::to_c(mesh_)));
}

inline ::efl::eina::crange_list< ::evas::canvas3d::mesh > evas::canvas3d::node::mesh_list_get() const
{
   const Eina_List * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_canvas3d_node_mesh_list_get());
   return ::efl::eolian::to_cxx<::efl::eina::crange_list< ::evas::canvas3d::mesh >>(_tmp_ret, std::tuple<std::false_type, std::false_type>());
}

inline void evas::canvas3d::node::bounding_box_get(Evas_Real * x_, Evas_Real * y_, Evas_Real * z_, Evas_Real * x2_, Evas_Real * y2_, Evas_Real * z2_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas3d_node_bounding_box_get(x_, y_, z_, x2_, y2_, z2_));
}

inline void evas::canvas3d::node::bounding_sphere_get(Evas_Real * x_, Evas_Real * y_, Evas_Real * z_, Evas_Real * r_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas3d_node_bounding_sphere_get(x_, y_, z_, r_));
}

inline bool evas::canvas3d::node::position_inherit_get() const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_canvas3d_node_position_inherit_get());
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline void evas::canvas3d::node::position_inherit_set(bool inherit_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas3d_node_position_inherit_set(::efl::eolian::to_c(inherit_)));
}

inline bool evas::canvas3d::node::orientation_inherit_get() const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_canvas3d_node_orientation_inherit_get());
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline void evas::canvas3d::node::orientation_inherit_set(bool inherit_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas3d_node_orientation_inherit_set(::efl::eolian::to_c(inherit_)));
}

inline bool evas::canvas3d::node::scale_inherit_get() const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_canvas3d_node_scale_inherit_get());
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline void evas::canvas3d::node::scale_inherit_set(bool inherit_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas3d_node_scale_inherit_set(::efl::eolian::to_c(inherit_)));
}

inline ::evas::canvas3d::object evas::canvas3d::node::camera_get() const
{
   Evas_Canvas3D_Object * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_canvas3d_node_camera_get());
   return ::efl::eolian::to_cxx<::evas::canvas3d::object>(_tmp_ret, std::tuple<std::false_type>());
}

inline void evas::canvas3d::node::camera_set(::evas::canvas3d::object camera_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas3d_node_camera_set(::efl::eolian::to_c(camera_)));
}

inline ::evas::canvas3d::light evas::canvas3d::node::light_get() const
{
   Evas_Canvas3D_Light * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_canvas3d_node_light_get());
   return ::efl::eolian::to_cxx<::evas::canvas3d::light>(_tmp_ret, std::tuple<std::false_type>());
}

inline void evas::canvas3d::node::light_set(::evas::canvas3d::light light_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas3d_node_light_set(::efl::eolian::to_c(light_)));
}

inline int evas::canvas3d::node::mesh_frame_get(::evas::canvas3d::mesh mesh_) const
{
   int _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_canvas3d_node_mesh_frame_get(::efl::eolian::to_c(mesh_)));
   return _tmp_ret;
}

inline void evas::canvas3d::node::mesh_frame_set(::evas::canvas3d::mesh mesh_, int frame_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas3d_node_mesh_frame_set(::efl::eolian::to_c(mesh_), frame_));
}

inline ::evas::canvas3d::node evas::canvas3d::node::billboard_target_get() const
{
   Evas_Canvas3D_Node * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_canvas3d_node_billboard_target_get());
   return ::efl::eolian::to_cxx<::evas::canvas3d::node>(_tmp_ret, std::tuple<std::false_type>());
}

inline void evas::canvas3d::node::billboard_target_set(::evas::canvas3d::node target_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas3d_node_billboard_target_set(::efl::eolian::to_c(target_)));
}

inline Evas_Canvas3D_Node_Type eo_cxx::evas::canvas3d::node::type_get() const
{
   Evas_Canvas3D_Node_Type _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_canvas3d_node_type_get());
   return _tmp_ret;
}

inline void eo_cxx::evas::canvas3d::node::member_add(::evas::canvas3d::node member_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas3d_node_member_add(::efl::eolian::to_c(member_)));
}

inline void eo_cxx::evas::canvas3d::node::member_del(::evas::canvas3d::node member_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas3d_node_member_del(::efl::eolian::to_c(member_)));
}

inline ::evas::canvas3d::node eo_cxx::evas::canvas3d::node::parent_get() const
{
   Evas_Canvas3D_Node * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_canvas3d_node_parent_get());
   return ::efl::eolian::to_cxx<::evas::canvas3d::node>(_tmp_ret, std::tuple<std::false_type>());
}

inline ::efl::eina::crange_list< ::evas::canvas3d::node > eo_cxx::evas::canvas3d::node::member_list_get() const
{
   const Eina_List * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_canvas3d_node_member_list_get());
   return ::efl::eolian::to_cxx<::efl::eina::crange_list< ::evas::canvas3d::node >>(_tmp_ret, std::tuple<std::false_type, std::false_type>());
}

inline Eina_Hash * eo_cxx::evas::canvas3d::node::scene_root_get() const
{
   Eina_Hash * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_canvas3d_node_scene_root_get());
   return _tmp_ret;
}

inline void eo_cxx::evas::canvas3d::node::position_set(Evas_Real x_, Evas_Real y_, Evas_Real z_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas3d_node_position_set(x_, y_, z_));
}

inline void eo_cxx::evas::canvas3d::node::orientation_set(Evas_Real x_, Evas_Real y_, Evas_Real z_, Evas_Real w_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas3d_node_orientation_set(x_, y_, z_, w_));
}

inline void eo_cxx::evas::canvas3d::node::orientation_angle_axis_set(Evas_Real angle_, Evas_Real x_, Evas_Real y_, Evas_Real z_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas3d_node_orientation_angle_axis_set(angle_, x_, y_, z_));
}

inline void eo_cxx::evas::canvas3d::node::scale_set(Evas_Real x_, Evas_Real y_, Evas_Real z_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas3d_node_scale_set(x_, y_, z_));
}

inline void eo_cxx::evas::canvas3d::node::position_get(Evas_Canvas3D_Space space_, Evas_Real* x_, Evas_Real* y_, Evas_Real* z_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas3d_node_position_get(space_, x_, y_, z_));
}

inline void eo_cxx::evas::canvas3d::node::orientation_get(Evas_Canvas3D_Space space_, Evas_Real* x_, Evas_Real* y_, Evas_Real* z_, Evas_Real* w_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas3d_node_orientation_get(space_, x_, y_, z_, w_));
}

inline void eo_cxx::evas::canvas3d::node::scale_get(Evas_Canvas3D_Space space_, Evas_Real* x_, Evas_Real* y_, Evas_Real* z_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas3d_node_scale_get(space_, x_, y_, z_));
}

inline void eo_cxx::evas::canvas3d::node::look_at_set(Evas_Canvas3D_Space target_space_, Evas_Real x_, Evas_Real y_, Evas_Real z_, Evas_Canvas3D_Space up_space_, Evas_Real ux_, Evas_Real uy_, Evas_Real uz_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas3d_node_look_at_set(target_space_, x_, y_, z_, up_space_, ux_, uy_, uz_));
}

inline void eo_cxx::evas::canvas3d::node::mesh_add(::evas::canvas3d::mesh mesh_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas3d_node_mesh_add(::efl::eolian::to_c(mesh_)));
}

inline void eo_cxx::evas::canvas3d::node::mesh_del(::evas::canvas3d::mesh mesh_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas3d_node_mesh_del(::efl::eolian::to_c(mesh_)));
}

inline ::efl::eina::crange_list< ::evas::canvas3d::mesh > eo_cxx::evas::canvas3d::node::mesh_list_get() const
{
   const Eina_List * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_canvas3d_node_mesh_list_get());
   return ::efl::eolian::to_cxx<::efl::eina::crange_list< ::evas::canvas3d::mesh >>(_tmp_ret, std::tuple<std::false_type, std::false_type>());
}

inline void eo_cxx::evas::canvas3d::node::bounding_box_get(Evas_Real * x_, Evas_Real * y_, Evas_Real * z_, Evas_Real * x2_, Evas_Real * y2_, Evas_Real * z2_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas3d_node_bounding_box_get(x_, y_, z_, x2_, y2_, z2_));
}

inline void eo_cxx::evas::canvas3d::node::bounding_sphere_get(Evas_Real * x_, Evas_Real * y_, Evas_Real * z_, Evas_Real * r_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas3d_node_bounding_sphere_get(x_, y_, z_, r_));
}

inline bool eo_cxx::evas::canvas3d::node::position_inherit_get() const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_canvas3d_node_position_inherit_get());
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline void eo_cxx::evas::canvas3d::node::position_inherit_set(bool inherit_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas3d_node_position_inherit_set(::efl::eolian::to_c(inherit_)));
}

inline bool eo_cxx::evas::canvas3d::node::orientation_inherit_get() const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_canvas3d_node_orientation_inherit_get());
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline void eo_cxx::evas::canvas3d::node::orientation_inherit_set(bool inherit_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas3d_node_orientation_inherit_set(::efl::eolian::to_c(inherit_)));
}

inline bool eo_cxx::evas::canvas3d::node::scale_inherit_get() const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_canvas3d_node_scale_inherit_get());
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline void eo_cxx::evas::canvas3d::node::scale_inherit_set(bool inherit_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas3d_node_scale_inherit_set(::efl::eolian::to_c(inherit_)));
}

inline ::evas::canvas3d::object eo_cxx::evas::canvas3d::node::camera_get() const
{
   Evas_Canvas3D_Object * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_canvas3d_node_camera_get());
   return ::efl::eolian::to_cxx<::evas::canvas3d::object>(_tmp_ret, std::tuple<std::false_type>());
}

inline void eo_cxx::evas::canvas3d::node::camera_set(::evas::canvas3d::object camera_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas3d_node_camera_set(::efl::eolian::to_c(camera_)));
}

inline ::evas::canvas3d::light eo_cxx::evas::canvas3d::node::light_get() const
{
   Evas_Canvas3D_Light * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_canvas3d_node_light_get());
   return ::efl::eolian::to_cxx<::evas::canvas3d::light>(_tmp_ret, std::tuple<std::false_type>());
}

inline void eo_cxx::evas::canvas3d::node::light_set(::evas::canvas3d::light light_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas3d_node_light_set(::efl::eolian::to_c(light_)));
}

inline int eo_cxx::evas::canvas3d::node::mesh_frame_get(::evas::canvas3d::mesh mesh_) const
{
   int _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_canvas3d_node_mesh_frame_get(::efl::eolian::to_c(mesh_)));
   return _tmp_ret;
}

inline void eo_cxx::evas::canvas3d::node::mesh_frame_set(::evas::canvas3d::mesh mesh_, int frame_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas3d_node_mesh_frame_set(::efl::eolian::to_c(mesh_), frame_));
}

inline ::evas::canvas3d::node eo_cxx::evas::canvas3d::node::billboard_target_get() const
{
   Evas_Canvas3D_Node * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_canvas3d_node_billboard_target_get());
   return ::efl::eolian::to_cxx<::evas::canvas3d::node>(_tmp_ret, std::tuple<std::false_type>());
}

inline void eo_cxx::evas::canvas3d::node::billboard_target_set(::evas::canvas3d::node target_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas3d_node_billboard_target_set(::efl::eolian::to_c(target_)));
}

inline ::eo_cxx::evas::canvas3d::node::operator ::evas::canvas3d::node() const
{
   return *static_cast<::evas::canvas3d::node const*>(static_cast<void const*>(this));
}

inline ::eo_cxx::evas::canvas3d::node::operator ::evas::canvas3d::node&()
{
   return *static_cast<::evas::canvas3d::node*>(static_cast<void*>(this));
}

inline ::eo_cxx::evas::canvas3d::node::operator ::evas::canvas3d::node const&() const
{
   return *static_cast<::evas::canvas3d::node const*>(static_cast<void const*>(this));
}

template <typename T>
Evas_Canvas3D_Node_Type evas_canvas3d_node_type_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->type_get();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Evas_Canvas3D_Node_Type _tmp_ret{};
         return _tmp_ret;
      }
}

template <typename T>
void evas_canvas3d_node_member_add_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Evas_Canvas3D_Node * member_)
{
   try
      {
         static_cast<T*>(self->this_)->member_add(::efl::eolian::to_cxx<::evas::canvas3d::node>(member_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void evas_canvas3d_node_member_del_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Evas_Canvas3D_Node * member_)
{
   try
      {
         static_cast<T*>(self->this_)->member_del(::efl::eolian::to_cxx<::evas::canvas3d::node>(member_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
::evas::canvas3d::node evas_canvas3d_node_parent_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->parent_get();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Evas_Canvas3D_Node * _tmp_ret{};
         return ::efl::eolian::to_cxx<::evas::canvas3d::node>(_tmp_ret, std::tuple<std::false_type>());
      }
}

template <typename T>
::efl::eina::crange_list< ::evas::canvas3d::node > evas_canvas3d_node_member_list_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->member_list_get();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         const Eina_List * _tmp_ret{};
         return ::efl::eolian::to_cxx<::efl::eina::crange_list< ::evas::canvas3d::node >>(_tmp_ret, std::tuple<std::false_type, std::false_type>());
      }
}

template <typename T>
Eina_Hash * evas_canvas3d_node_scene_root_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->scene_root_get();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Eina_Hash * _tmp_ret{};
         return _tmp_ret;
      }
}

template <typename T>
void evas_canvas3d_node_position_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Evas_Real x_, Evas_Real y_, Evas_Real z_)
{
   try
      {
         static_cast<T*>(self->this_)->position_set(x_, y_, z_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void evas_canvas3d_node_orientation_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Evas_Real x_, Evas_Real y_, Evas_Real z_, Evas_Real w_)
{
   try
      {
         static_cast<T*>(self->this_)->orientation_set(x_, y_, z_, w_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void evas_canvas3d_node_orientation_angle_axis_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Evas_Real angle_, Evas_Real x_, Evas_Real y_, Evas_Real z_)
{
   try
      {
         static_cast<T*>(self->this_)->orientation_angle_axis_set(angle_, x_, y_, z_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void evas_canvas3d_node_scale_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Evas_Real x_, Evas_Real y_, Evas_Real z_)
{
   try
      {
         static_cast<T*>(self->this_)->scale_set(x_, y_, z_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void evas_canvas3d_node_position_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Evas_Canvas3D_Space space_, Evas_Real* x_, Evas_Real* y_, Evas_Real* z_)
{
   try
      {
         static_cast<T*>(self->this_)->position_get(space_, x_, y_, z_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void evas_canvas3d_node_orientation_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Evas_Canvas3D_Space space_, Evas_Real* x_, Evas_Real* y_, Evas_Real* z_, Evas_Real* w_)
{
   try
      {
         static_cast<T*>(self->this_)->orientation_get(space_, x_, y_, z_, w_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void evas_canvas3d_node_scale_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Evas_Canvas3D_Space space_, Evas_Real* x_, Evas_Real* y_, Evas_Real* z_)
{
   try
      {
         static_cast<T*>(self->this_)->scale_get(space_, x_, y_, z_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void evas_canvas3d_node_look_at_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Evas_Canvas3D_Space target_space_, Evas_Real x_, Evas_Real y_, Evas_Real z_, Evas_Canvas3D_Space up_space_, Evas_Real ux_, Evas_Real uy_, Evas_Real uz_)
{
   try
      {
         static_cast<T*>(self->this_)->look_at_set(target_space_, x_, y_, z_, up_space_, ux_, uy_, uz_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void evas_canvas3d_node_mesh_add_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Evas_Canvas3D_Mesh * mesh_)
{
   try
      {
         static_cast<T*>(self->this_)->mesh_add(::efl::eolian::to_cxx<::evas::canvas3d::mesh>(mesh_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void evas_canvas3d_node_mesh_del_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Evas_Canvas3D_Mesh * mesh_)
{
   try
      {
         static_cast<T*>(self->this_)->mesh_del(::efl::eolian::to_cxx<::evas::canvas3d::mesh>(mesh_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
::efl::eina::crange_list< ::evas::canvas3d::mesh > evas_canvas3d_node_mesh_list_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->mesh_list_get();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         const Eina_List * _tmp_ret{};
         return ::efl::eolian::to_cxx<::efl::eina::crange_list< ::evas::canvas3d::mesh >>(_tmp_ret, std::tuple<std::false_type, std::false_type>());
      }
}

template <typename T>
void evas_canvas3d_node_bounding_box_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Evas_Real * x_, Evas_Real * y_, Evas_Real * z_, Evas_Real * x2_, Evas_Real * y2_, Evas_Real * z2_)
{
   try
      {
         static_cast<T*>(self->this_)->bounding_box_get(x_, y_, z_, x2_, y2_, z2_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void evas_canvas3d_node_bounding_sphere_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Evas_Real * x_, Evas_Real * y_, Evas_Real * z_, Evas_Real * r_)
{
   try
      {
         static_cast<T*>(self->this_)->bounding_sphere_get(x_, y_, z_, r_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
bool evas_canvas3d_node_position_inherit_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->position_inherit_get();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Eina_Bool _tmp_ret{};
         return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }
}

template <typename T>
void evas_canvas3d_node_position_inherit_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Eina_Bool inherit_)
{
   try
      {
         static_cast<T*>(self->this_)->position_inherit_set(::efl::eolian::to_cxx<bool>(inherit_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
bool evas_canvas3d_node_orientation_inherit_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->orientation_inherit_get();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Eina_Bool _tmp_ret{};
         return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }
}

template <typename T>
void evas_canvas3d_node_orientation_inherit_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Eina_Bool inherit_)
{
   try
      {
         static_cast<T*>(self->this_)->orientation_inherit_set(::efl::eolian::to_cxx<bool>(inherit_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
bool evas_canvas3d_node_scale_inherit_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->scale_inherit_get();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Eina_Bool _tmp_ret{};
         return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }
}

template <typename T>
void evas_canvas3d_node_scale_inherit_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Eina_Bool inherit_)
{
   try
      {
         static_cast<T*>(self->this_)->scale_inherit_set(::efl::eolian::to_cxx<bool>(inherit_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
::evas::canvas3d::object evas_canvas3d_node_camera_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->camera_get();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Evas_Canvas3D_Object * _tmp_ret{};
         return ::efl::eolian::to_cxx<::evas::canvas3d::object>(_tmp_ret, std::tuple<std::false_type>());
      }
}

template <typename T>
void evas_canvas3d_node_camera_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Evas_Canvas3D_Object * camera_)
{
   try
      {
         static_cast<T*>(self->this_)->camera_set(::efl::eolian::to_cxx<::evas::canvas3d::object>(camera_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
::evas::canvas3d::light evas_canvas3d_node_light_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->light_get();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Evas_Canvas3D_Light * _tmp_ret{};
         return ::efl::eolian::to_cxx<::evas::canvas3d::light>(_tmp_ret, std::tuple<std::false_type>());
      }
}

template <typename T>
void evas_canvas3d_node_light_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Evas_Canvas3D_Light * light_)
{
   try
      {
         static_cast<T*>(self->this_)->light_set(::efl::eolian::to_cxx<::evas::canvas3d::light>(light_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
int evas_canvas3d_node_mesh_frame_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Evas_Canvas3D_Mesh * mesh_)
{
   try
      {
         return static_cast<T*>(self->this_)->mesh_frame_get(::efl::eolian::to_cxx<::evas::canvas3d::mesh>(mesh_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         int _tmp_ret{};
         return _tmp_ret;
      }
}

template <typename T>
void evas_canvas3d_node_mesh_frame_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Evas_Canvas3D_Mesh * mesh_, int frame_)
{
   try
      {
         static_cast<T*>(self->this_)->mesh_frame_set(::efl::eolian::to_cxx<::evas::canvas3d::mesh>(mesh_, std::tuple<std::false_type>()), frame_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
::evas::canvas3d::node evas_canvas3d_node_billboard_target_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->billboard_target_get();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Evas_Canvas3D_Node * _tmp_ret{};
         return ::efl::eolian::to_cxx<::evas::canvas3d::node>(_tmp_ret, std::tuple<std::false_type>());
      }
}

template <typename T>
void evas_canvas3d_node_billboard_target_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Evas_Canvas3D_Node * target_)
{
   try
      {
         static_cast<T*>(self->this_)->billboard_target_set(::efl::eolian::to_cxx<::evas::canvas3d::node>(target_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

namespace efl { namespace eo { namespace detail {

template<>
struct operations< ::evas::canvas3d::node >
{
   template <typename T>
   struct type
         : virtual operations< ::evas::canvas3d::object >::template type<T>
         , virtual operations< ::evas::common_interface >::template type<T>
   {
      virtual Evas_Canvas3D_Node_Type type_get()
      {
         Evas_Canvas3D_Node_Type _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_canvas3d_node_type_get());
            return _tmp_ret;
      }

      virtual void member_add(::evas::canvas3d::node member_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_canvas3d_node_member_add(::efl::eolian::to_c(member_)));
      }

      virtual void member_del(::evas::canvas3d::node member_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_canvas3d_node_member_del(::efl::eolian::to_c(member_)));
      }

      virtual ::evas::canvas3d::node parent_get()
      {
         Evas_Canvas3D_Node * _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_canvas3d_node_parent_get());
            return ::efl::eolian::to_cxx<::evas::canvas3d::node>(_tmp_ret, std::tuple<std::false_type>());
      }

      virtual ::efl::eina::crange_list< ::evas::canvas3d::node > member_list_get()
      {
         const Eina_List * _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_canvas3d_node_member_list_get());
            return ::efl::eolian::to_cxx<::efl::eina::crange_list< ::evas::canvas3d::node >>(_tmp_ret, std::tuple<std::false_type, std::false_type>());
      }

      virtual Eina_Hash * scene_root_get()
      {
         Eina_Hash * _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_canvas3d_node_scene_root_get());
            return _tmp_ret;
      }

      virtual void position_set(Evas_Real x_, Evas_Real y_, Evas_Real z_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_canvas3d_node_position_set(x_, y_, z_));
      }

      virtual void orientation_set(Evas_Real x_, Evas_Real y_, Evas_Real z_, Evas_Real w_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_canvas3d_node_orientation_set(x_, y_, z_, w_));
      }

      virtual void orientation_angle_axis_set(Evas_Real angle_, Evas_Real x_, Evas_Real y_, Evas_Real z_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_canvas3d_node_orientation_angle_axis_set(angle_, x_, y_, z_));
      }

      virtual void scale_set(Evas_Real x_, Evas_Real y_, Evas_Real z_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_canvas3d_node_scale_set(x_, y_, z_));
      }

      virtual void position_get(Evas_Canvas3D_Space space_, Evas_Real* x_, Evas_Real* y_, Evas_Real* z_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_canvas3d_node_position_get(space_, x_, y_, z_));
      }

      virtual void orientation_get(Evas_Canvas3D_Space space_, Evas_Real* x_, Evas_Real* y_, Evas_Real* z_, Evas_Real* w_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_canvas3d_node_orientation_get(space_, x_, y_, z_, w_));
      }

      virtual void scale_get(Evas_Canvas3D_Space space_, Evas_Real* x_, Evas_Real* y_, Evas_Real* z_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_canvas3d_node_scale_get(space_, x_, y_, z_));
      }

      virtual void look_at_set(Evas_Canvas3D_Space target_space_, Evas_Real x_, Evas_Real y_, Evas_Real z_, Evas_Canvas3D_Space up_space_, Evas_Real ux_, Evas_Real uy_, Evas_Real uz_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_canvas3d_node_look_at_set(target_space_, x_, y_, z_, up_space_, ux_, uy_, uz_));
      }

      virtual void mesh_add(::evas::canvas3d::mesh mesh_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_canvas3d_node_mesh_add(::efl::eolian::to_c(mesh_)));
      }

      virtual void mesh_del(::evas::canvas3d::mesh mesh_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_canvas3d_node_mesh_del(::efl::eolian::to_c(mesh_)));
      }

      virtual ::efl::eina::crange_list< ::evas::canvas3d::mesh > mesh_list_get()
      {
         const Eina_List * _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_canvas3d_node_mesh_list_get());
            return ::efl::eolian::to_cxx<::efl::eina::crange_list< ::evas::canvas3d::mesh >>(_tmp_ret, std::tuple<std::false_type, std::false_type>());
      }

      virtual void bounding_box_get(Evas_Real * x_, Evas_Real * y_, Evas_Real * z_, Evas_Real * x2_, Evas_Real * y2_, Evas_Real * z2_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_canvas3d_node_bounding_box_get(x_, y_, z_, x2_, y2_, z2_));
      }

      virtual void bounding_sphere_get(Evas_Real * x_, Evas_Real * y_, Evas_Real * z_, Evas_Real * r_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_canvas3d_node_bounding_sphere_get(x_, y_, z_, r_));
      }

      virtual bool position_inherit_get()
      {
         Eina_Bool _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_canvas3d_node_position_inherit_get());
            return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }

      virtual void position_inherit_set(bool inherit_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_canvas3d_node_position_inherit_set(::efl::eolian::to_c(inherit_)));
      }

      virtual bool orientation_inherit_get()
      {
         Eina_Bool _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_canvas3d_node_orientation_inherit_get());
            return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }

      virtual void orientation_inherit_set(bool inherit_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_canvas3d_node_orientation_inherit_set(::efl::eolian::to_c(inherit_)));
      }

      virtual bool scale_inherit_get()
      {
         Eina_Bool _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_canvas3d_node_scale_inherit_get());
            return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }

      virtual void scale_inherit_set(bool inherit_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_canvas3d_node_scale_inherit_set(::efl::eolian::to_c(inherit_)));
      }

      virtual ::evas::canvas3d::object camera_get()
      {
         Evas_Canvas3D_Object * _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_canvas3d_node_camera_get());
            return ::efl::eolian::to_cxx<::evas::canvas3d::object>(_tmp_ret, std::tuple<std::false_type>());
      }

      virtual void camera_set(::evas::canvas3d::object camera_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_canvas3d_node_camera_set(::efl::eolian::to_c(camera_)));
      }

      virtual ::evas::canvas3d::light light_get()
      {
         Evas_Canvas3D_Light * _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_canvas3d_node_light_get());
            return ::efl::eolian::to_cxx<::evas::canvas3d::light>(_tmp_ret, std::tuple<std::false_type>());
      }

      virtual void light_set(::evas::canvas3d::light light_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_canvas3d_node_light_set(::efl::eolian::to_c(light_)));
      }

      virtual int mesh_frame_get(::evas::canvas3d::mesh mesh_)
      {
         int _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_canvas3d_node_mesh_frame_get(::efl::eolian::to_c(mesh_)));
            return _tmp_ret;
      }

      virtual void mesh_frame_set(::evas::canvas3d::mesh mesh_, int frame_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_canvas3d_node_mesh_frame_set(::efl::eolian::to_c(mesh_), frame_));
      }

      virtual ::evas::canvas3d::node billboard_target_get()
      {
         Evas_Canvas3D_Node * _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_canvas3d_node_billboard_target_get());
            return ::efl::eolian::to_cxx<::evas::canvas3d::node>(_tmp_ret, std::tuple<std::false_type>());
      }

      virtual void billboard_target_set(::evas::canvas3d::node target_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_canvas3d_node_billboard_target_set(::efl::eolian::to_c(target_)));
      }

   };
};


template<>
struct operation_description_class_size< ::evas::canvas3d::node >
{
   static constexpr int value = 
#if defined(NODE_PROTECTED) && defined(NODE_BETA)
      33
#elif defined(NODE_PROTECTED)
      33
#elif defined(NODE_BETA)
      33
#else
      33
#endif
      + operation_description_class_size<::evas::canvas3d::object >::value      + operation_description_class_size<::evas::common_interface >::value;
};

template <typename T>
int initialize_operation_description(::efl::eo::detail::tag<::evas::canvas3d::node>
                                 , Eo_Op_Description* ops)
{
   int i = 0;
   (void)i;
   (void)ops;
   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas3d_node_type_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas3d_node_type_get);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas3d_node_member_add_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas3d_node_member_add);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas3d_node_member_del_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas3d_node_member_del);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas3d_node_parent_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas3d_node_parent_get);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas3d_node_member_list_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas3d_node_member_list_get);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas3d_node_scene_root_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas3d_node_scene_root_get);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas3d_node_position_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas3d_node_position_set);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas3d_node_orientation_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas3d_node_orientation_set);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas3d_node_orientation_angle_axis_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas3d_node_orientation_angle_axis_set);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas3d_node_scale_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas3d_node_scale_set);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas3d_node_position_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas3d_node_position_get);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas3d_node_orientation_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas3d_node_orientation_get);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas3d_node_scale_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas3d_node_scale_get);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas3d_node_look_at_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas3d_node_look_at_set);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas3d_node_mesh_add_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas3d_node_mesh_add);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas3d_node_mesh_del_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas3d_node_mesh_del);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas3d_node_mesh_list_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas3d_node_mesh_list_get);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas3d_node_bounding_box_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas3d_node_bounding_box_get);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas3d_node_bounding_sphere_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas3d_node_bounding_sphere_get);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas3d_node_position_inherit_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas3d_node_position_inherit_get);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas3d_node_position_inherit_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas3d_node_position_inherit_set);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas3d_node_orientation_inherit_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas3d_node_orientation_inherit_get);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas3d_node_orientation_inherit_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas3d_node_orientation_inherit_set);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas3d_node_scale_inherit_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas3d_node_scale_inherit_get);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas3d_node_scale_inherit_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas3d_node_scale_inherit_set);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas3d_node_camera_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas3d_node_camera_get);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas3d_node_camera_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas3d_node_camera_set);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas3d_node_light_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas3d_node_light_get);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas3d_node_light_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas3d_node_light_set);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas3d_node_mesh_frame_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas3d_node_mesh_frame_get);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas3d_node_mesh_frame_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas3d_node_mesh_frame_set);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas3d_node_billboard_target_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas3d_node_billboard_target_get);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas3d_node_billboard_target_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas3d_node_billboard_target_set);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   initialize_operation_description<T>(::efl::eo::detail::tag<::evas::canvas3d::object>(), &ops[operation_description_class_size< ::evas::canvas3d::node >::value]);
   initialize_operation_description<T>(::efl::eo::detail::tag<::evas::common_interface>(), &ops[operation_description_class_size< ::evas::canvas3d::node >::value + operation_description_class_size<::evas::canvas3d::object>::value]);
   return 0;
}
inline Eo_Class const* get_eo_class(tag<::evas::canvas3d::node>)
{
   return (EVAS_CANVAS3D_NODE_CLASS);
}

} } }

/// @endcond

