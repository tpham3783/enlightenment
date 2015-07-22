/// @cond EO_CXX_EO_IMPL

inline void evas::canvas3d::mesh::frame_vertex_data_set(int frame_, Evas_Canvas3D_Vertex_Attrib attrib_, int stride_, const void * data_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas3d_mesh_frame_vertex_data_set(frame_, attrib_, stride_, data_));
}

inline void evas::canvas3d::mesh::frame_vertex_data_copy_set(int frame_, Evas_Canvas3D_Vertex_Attrib attrib_, int stride_, const void * data_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas3d_mesh_frame_vertex_data_copy_set(frame_, attrib_, stride_, data_));
}

inline void * evas::canvas3d::mesh::frame_vertex_data_map(int frame_, Evas_Canvas3D_Vertex_Attrib attrib_) const
{
   void * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_canvas3d_mesh_frame_vertex_data_map(frame_, attrib_));
   return _tmp_ret;
}

inline void evas::canvas3d::mesh::frame_vertex_data_unmap(int frame_, Evas_Canvas3D_Vertex_Attrib attrib_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas3d_mesh_frame_vertex_data_unmap(frame_, attrib_));
}

inline int evas::canvas3d::mesh::frame_vertex_stride_get(int frame_, Evas_Canvas3D_Vertex_Attrib attrib_) const
{
   int _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_canvas3d_mesh_frame_vertex_stride_get(frame_, attrib_));
   return _tmp_ret;
}

inline void evas::canvas3d::mesh::index_data_set(Evas_Canvas3D_Index_Format format_, int count_, const void * indices_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas3d_mesh_index_data_set(format_, count_, indices_));
}

inline void evas::canvas3d::mesh::index_data_copy_set(Evas_Canvas3D_Index_Format format_, int count_, const void * indices_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas3d_mesh_index_data_copy_set(format_, count_, indices_));
}

inline Evas_Canvas3D_Index_Format evas::canvas3d::mesh::index_format_get() const
{
   Evas_Canvas3D_Index_Format _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_canvas3d_mesh_index_format_get());
   return _tmp_ret;
}

inline int evas::canvas3d::mesh::index_count_get() const
{
   int _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_canvas3d_mesh_index_count_get());
   return _tmp_ret;
}

inline void * evas::canvas3d::mesh::index_data_map() const
{
   void * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_canvas3d_mesh_index_data_map());
   return _tmp_ret;
}

inline void evas::canvas3d::mesh::index_data_unmap() const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas3d_mesh_index_data_unmap());
}

inline void evas::canvas3d::mesh::frame_add(int frame_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas3d_mesh_frame_add(frame_));
}

inline void evas::canvas3d::mesh::frame_del(int frame_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas3d_mesh_frame_del(frame_));
}

inline void evas::canvas3d::mesh::fog_color_set(Evas_Real r_, Evas_Real g_, Evas_Real b_, Evas_Real a_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas3d_mesh_fog_color_set(r_, g_, b_, a_));
}

inline void evas::canvas3d::mesh::fog_color_get(Evas_Real* r_, Evas_Real* g_, Evas_Real* b_, Evas_Real* a_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas3d_mesh_fog_color_get(r_, g_, b_, a_));
}

inline void evas::canvas3d::mesh::blending_func_set(Evas_Canvas3D_Blend_Func sfactor_, Evas_Canvas3D_Blend_Func dfactor_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas3d_mesh_blending_func_set(sfactor_, dfactor_));
}

inline void evas::canvas3d::mesh::blending_func_get(Evas_Canvas3D_Blend_Func* sfactor_, Evas_Canvas3D_Blend_Func* dfactor_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas3d_mesh_blending_func_get(sfactor_, dfactor_));
}

inline void evas::canvas3d::mesh::from_primitive_set(int frame_, ::evas::canvas3d::primitive primitive_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas3d_mesh_from_primitive_set(frame_, ::efl::eolian::to_c(primitive_)));
}

inline Evas_Canvas3D_Shade_Mode evas::canvas3d::mesh::shade_mode_get() const
{
   Evas_Canvas3D_Shade_Mode _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_canvas3d_mesh_shade_mode_get());
   return _tmp_ret;
}

inline void evas::canvas3d::mesh::shade_mode_set(Evas_Canvas3D_Shade_Mode mode_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas3d_mesh_shade_mode_set(mode_));
}

inline bool evas::canvas3d::mesh::color_pick_enable_get() const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_canvas3d_mesh_color_pick_enable_get());
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline void evas::canvas3d::mesh::color_pick_enable_set(bool enabled_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas3d_mesh_color_pick_enable_set(::efl::eolian::to_c(enabled_)));
}

inline unsigned int evas::canvas3d::mesh::vertex_count_get() const
{
   unsigned int _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_canvas3d_mesh_vertex_count_get());
   return _tmp_ret;
}

inline void evas::canvas3d::mesh::vertex_count_set(unsigned int count_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas3d_mesh_vertex_count_set(count_));
}

inline bool evas::canvas3d::mesh::fog_enable_get() const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_canvas3d_mesh_fog_enable_get());
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline void evas::canvas3d::mesh::fog_enable_set(bool enabled_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas3d_mesh_fog_enable_set(::efl::eolian::to_c(enabled_)));
}

inline bool evas::canvas3d::mesh::alpha_test_enable_get() const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_canvas3d_mesh_alpha_test_enable_get());
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline void evas::canvas3d::mesh::alpha_test_enable_set(bool enabled_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas3d_mesh_alpha_test_enable_set(::efl::eolian::to_c(enabled_)));
}

inline void evas::canvas3d::mesh::alpha_func_get(Evas_Canvas3D_Comparison* comparison_func_, Evas_Real* ref_value_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas3d_mesh_alpha_func_get(comparison_func_, ref_value_));
}

inline void evas::canvas3d::mesh::alpha_func_set(Evas_Canvas3D_Comparison comparison_func_, Evas_Real ref_value_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas3d_mesh_alpha_func_set(comparison_func_, ref_value_));
}

inline bool evas::canvas3d::mesh::blending_enable_get() const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_canvas3d_mesh_blending_enable_get());
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline void evas::canvas3d::mesh::blending_enable_set(bool blending_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas3d_mesh_blending_enable_set(::efl::eolian::to_c(blending_)));
}

inline ::evas::canvas3d::material evas::canvas3d::mesh::frame_material_get(int frame_) const
{
   Evas_Canvas3D_Material * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_canvas3d_mesh_frame_material_get(frame_));
   return ::efl::eolian::to_cxx<::evas::canvas3d::material>(_tmp_ret, std::tuple<std::false_type>());
}

inline void evas::canvas3d::mesh::frame_material_set(int frame_, ::evas::canvas3d::material material_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas3d_mesh_frame_material_set(frame_, ::efl::eolian::to_c(material_)));
}

inline Evas_Canvas3D_Vertex_Assembly evas::canvas3d::mesh::vertex_assembly_get() const
{
   Evas_Canvas3D_Vertex_Assembly _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_canvas3d_mesh_vertex_assembly_get());
   return _tmp_ret;
}

inline void evas::canvas3d::mesh::vertex_assembly_set(Evas_Canvas3D_Vertex_Assembly assembly_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas3d_mesh_vertex_assembly_set(assembly_));
}

inline void eo_cxx::evas::canvas3d::mesh::frame_vertex_data_set(int frame_, Evas_Canvas3D_Vertex_Attrib attrib_, int stride_, const void * data_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas3d_mesh_frame_vertex_data_set(frame_, attrib_, stride_, data_));
}

inline void eo_cxx::evas::canvas3d::mesh::frame_vertex_data_copy_set(int frame_, Evas_Canvas3D_Vertex_Attrib attrib_, int stride_, const void * data_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas3d_mesh_frame_vertex_data_copy_set(frame_, attrib_, stride_, data_));
}

inline void * eo_cxx::evas::canvas3d::mesh::frame_vertex_data_map(int frame_, Evas_Canvas3D_Vertex_Attrib attrib_) const
{
   void * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_canvas3d_mesh_frame_vertex_data_map(frame_, attrib_));
   return _tmp_ret;
}

inline void eo_cxx::evas::canvas3d::mesh::frame_vertex_data_unmap(int frame_, Evas_Canvas3D_Vertex_Attrib attrib_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas3d_mesh_frame_vertex_data_unmap(frame_, attrib_));
}

inline int eo_cxx::evas::canvas3d::mesh::frame_vertex_stride_get(int frame_, Evas_Canvas3D_Vertex_Attrib attrib_) const
{
   int _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_canvas3d_mesh_frame_vertex_stride_get(frame_, attrib_));
   return _tmp_ret;
}

inline void eo_cxx::evas::canvas3d::mesh::index_data_set(Evas_Canvas3D_Index_Format format_, int count_, const void * indices_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas3d_mesh_index_data_set(format_, count_, indices_));
}

inline void eo_cxx::evas::canvas3d::mesh::index_data_copy_set(Evas_Canvas3D_Index_Format format_, int count_, const void * indices_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas3d_mesh_index_data_copy_set(format_, count_, indices_));
}

inline Evas_Canvas3D_Index_Format eo_cxx::evas::canvas3d::mesh::index_format_get() const
{
   Evas_Canvas3D_Index_Format _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_canvas3d_mesh_index_format_get());
   return _tmp_ret;
}

inline int eo_cxx::evas::canvas3d::mesh::index_count_get() const
{
   int _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_canvas3d_mesh_index_count_get());
   return _tmp_ret;
}

inline void * eo_cxx::evas::canvas3d::mesh::index_data_map() const
{
   void * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_canvas3d_mesh_index_data_map());
   return _tmp_ret;
}

inline void eo_cxx::evas::canvas3d::mesh::index_data_unmap() const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas3d_mesh_index_data_unmap());
}

inline void eo_cxx::evas::canvas3d::mesh::frame_add(int frame_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas3d_mesh_frame_add(frame_));
}

inline void eo_cxx::evas::canvas3d::mesh::frame_del(int frame_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas3d_mesh_frame_del(frame_));
}

inline void eo_cxx::evas::canvas3d::mesh::fog_color_set(Evas_Real r_, Evas_Real g_, Evas_Real b_, Evas_Real a_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas3d_mesh_fog_color_set(r_, g_, b_, a_));
}

inline void eo_cxx::evas::canvas3d::mesh::fog_color_get(Evas_Real* r_, Evas_Real* g_, Evas_Real* b_, Evas_Real* a_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas3d_mesh_fog_color_get(r_, g_, b_, a_));
}

inline void eo_cxx::evas::canvas3d::mesh::blending_func_set(Evas_Canvas3D_Blend_Func sfactor_, Evas_Canvas3D_Blend_Func dfactor_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas3d_mesh_blending_func_set(sfactor_, dfactor_));
}

inline void eo_cxx::evas::canvas3d::mesh::blending_func_get(Evas_Canvas3D_Blend_Func* sfactor_, Evas_Canvas3D_Blend_Func* dfactor_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas3d_mesh_blending_func_get(sfactor_, dfactor_));
}

inline void eo_cxx::evas::canvas3d::mesh::from_primitive_set(int frame_, ::evas::canvas3d::primitive primitive_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas3d_mesh_from_primitive_set(frame_, ::efl::eolian::to_c(primitive_)));
}

inline Evas_Canvas3D_Shade_Mode eo_cxx::evas::canvas3d::mesh::shade_mode_get() const
{
   Evas_Canvas3D_Shade_Mode _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_canvas3d_mesh_shade_mode_get());
   return _tmp_ret;
}

inline void eo_cxx::evas::canvas3d::mesh::shade_mode_set(Evas_Canvas3D_Shade_Mode mode_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas3d_mesh_shade_mode_set(mode_));
}

inline bool eo_cxx::evas::canvas3d::mesh::color_pick_enable_get() const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_canvas3d_mesh_color_pick_enable_get());
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline void eo_cxx::evas::canvas3d::mesh::color_pick_enable_set(bool enabled_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas3d_mesh_color_pick_enable_set(::efl::eolian::to_c(enabled_)));
}

inline unsigned int eo_cxx::evas::canvas3d::mesh::vertex_count_get() const
{
   unsigned int _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_canvas3d_mesh_vertex_count_get());
   return _tmp_ret;
}

inline void eo_cxx::evas::canvas3d::mesh::vertex_count_set(unsigned int count_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas3d_mesh_vertex_count_set(count_));
}

inline bool eo_cxx::evas::canvas3d::mesh::fog_enable_get() const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_canvas3d_mesh_fog_enable_get());
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline void eo_cxx::evas::canvas3d::mesh::fog_enable_set(bool enabled_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas3d_mesh_fog_enable_set(::efl::eolian::to_c(enabled_)));
}

inline bool eo_cxx::evas::canvas3d::mesh::alpha_test_enable_get() const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_canvas3d_mesh_alpha_test_enable_get());
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline void eo_cxx::evas::canvas3d::mesh::alpha_test_enable_set(bool enabled_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas3d_mesh_alpha_test_enable_set(::efl::eolian::to_c(enabled_)));
}

inline void eo_cxx::evas::canvas3d::mesh::alpha_func_get(Evas_Canvas3D_Comparison* comparison_func_, Evas_Real* ref_value_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas3d_mesh_alpha_func_get(comparison_func_, ref_value_));
}

inline void eo_cxx::evas::canvas3d::mesh::alpha_func_set(Evas_Canvas3D_Comparison comparison_func_, Evas_Real ref_value_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas3d_mesh_alpha_func_set(comparison_func_, ref_value_));
}

inline bool eo_cxx::evas::canvas3d::mesh::blending_enable_get() const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_canvas3d_mesh_blending_enable_get());
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline void eo_cxx::evas::canvas3d::mesh::blending_enable_set(bool blending_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas3d_mesh_blending_enable_set(::efl::eolian::to_c(blending_)));
}

inline ::evas::canvas3d::material eo_cxx::evas::canvas3d::mesh::frame_material_get(int frame_) const
{
   Evas_Canvas3D_Material * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_canvas3d_mesh_frame_material_get(frame_));
   return ::efl::eolian::to_cxx<::evas::canvas3d::material>(_tmp_ret, std::tuple<std::false_type>());
}

inline void eo_cxx::evas::canvas3d::mesh::frame_material_set(int frame_, ::evas::canvas3d::material material_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas3d_mesh_frame_material_set(frame_, ::efl::eolian::to_c(material_)));
}

inline Evas_Canvas3D_Vertex_Assembly eo_cxx::evas::canvas3d::mesh::vertex_assembly_get() const
{
   Evas_Canvas3D_Vertex_Assembly _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_canvas3d_mesh_vertex_assembly_get());
   return _tmp_ret;
}

inline void eo_cxx::evas::canvas3d::mesh::vertex_assembly_set(Evas_Canvas3D_Vertex_Assembly assembly_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas3d_mesh_vertex_assembly_set(assembly_));
}

inline ::eo_cxx::evas::canvas3d::mesh::operator ::evas::canvas3d::mesh() const
{
   return *static_cast<::evas::canvas3d::mesh const*>(static_cast<void const*>(this));
}

inline ::eo_cxx::evas::canvas3d::mesh::operator ::evas::canvas3d::mesh&()
{
   return *static_cast<::evas::canvas3d::mesh*>(static_cast<void*>(this));
}

inline ::eo_cxx::evas::canvas3d::mesh::operator ::evas::canvas3d::mesh const&() const
{
   return *static_cast<::evas::canvas3d::mesh const*>(static_cast<void const*>(this));
}

template <typename T>
void evas_canvas3d_mesh_frame_vertex_data_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, int frame_, Evas_Canvas3D_Vertex_Attrib attrib_, int stride_, const void * data_)
{
   try
      {
         static_cast<T*>(self->this_)->frame_vertex_data_set(frame_, attrib_, stride_, data_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void evas_canvas3d_mesh_frame_vertex_data_copy_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, int frame_, Evas_Canvas3D_Vertex_Attrib attrib_, int stride_, const void * data_)
{
   try
      {
         static_cast<T*>(self->this_)->frame_vertex_data_copy_set(frame_, attrib_, stride_, data_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void * evas_canvas3d_mesh_frame_vertex_data_map_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, int frame_, Evas_Canvas3D_Vertex_Attrib attrib_)
{
   try
      {
         return static_cast<T*>(self->this_)->frame_vertex_data_map(frame_, attrib_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         void * _tmp_ret{};
         return _tmp_ret;
      }
}

template <typename T>
void evas_canvas3d_mesh_frame_vertex_data_unmap_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, int frame_, Evas_Canvas3D_Vertex_Attrib attrib_)
{
   try
      {
         static_cast<T*>(self->this_)->frame_vertex_data_unmap(frame_, attrib_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
int evas_canvas3d_mesh_frame_vertex_stride_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, int frame_, Evas_Canvas3D_Vertex_Attrib attrib_)
{
   try
      {
         return static_cast<T*>(self->this_)->frame_vertex_stride_get(frame_, attrib_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         int _tmp_ret{};
         return _tmp_ret;
      }
}

template <typename T>
void evas_canvas3d_mesh_index_data_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Evas_Canvas3D_Index_Format format_, int count_, const void * indices_)
{
   try
      {
         static_cast<T*>(self->this_)->index_data_set(format_, count_, indices_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void evas_canvas3d_mesh_index_data_copy_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Evas_Canvas3D_Index_Format format_, int count_, const void * indices_)
{
   try
      {
         static_cast<T*>(self->this_)->index_data_copy_set(format_, count_, indices_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
Evas_Canvas3D_Index_Format evas_canvas3d_mesh_index_format_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->index_format_get();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Evas_Canvas3D_Index_Format _tmp_ret{};
         return _tmp_ret;
      }
}

template <typename T>
int evas_canvas3d_mesh_index_count_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->index_count_get();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         int _tmp_ret{};
         return _tmp_ret;
      }
}

template <typename T>
void * evas_canvas3d_mesh_index_data_map_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->index_data_map();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         void * _tmp_ret{};
         return _tmp_ret;
      }
}

template <typename T>
void evas_canvas3d_mesh_index_data_unmap_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         static_cast<T*>(self->this_)->index_data_unmap();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void evas_canvas3d_mesh_frame_add_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, int frame_)
{
   try
      {
         static_cast<T*>(self->this_)->frame_add(frame_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void evas_canvas3d_mesh_frame_del_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, int frame_)
{
   try
      {
         static_cast<T*>(self->this_)->frame_del(frame_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void evas_canvas3d_mesh_fog_color_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Evas_Real r_, Evas_Real g_, Evas_Real b_, Evas_Real a_)
{
   try
      {
         static_cast<T*>(self->this_)->fog_color_set(r_, g_, b_, a_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void evas_canvas3d_mesh_fog_color_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Evas_Real* r_, Evas_Real* g_, Evas_Real* b_, Evas_Real* a_)
{
   try
      {
         static_cast<T*>(self->this_)->fog_color_get(r_, g_, b_, a_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void evas_canvas3d_mesh_blending_func_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Evas_Canvas3D_Blend_Func sfactor_, Evas_Canvas3D_Blend_Func dfactor_)
{
   try
      {
         static_cast<T*>(self->this_)->blending_func_set(sfactor_, dfactor_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void evas_canvas3d_mesh_blending_func_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Evas_Canvas3D_Blend_Func* sfactor_, Evas_Canvas3D_Blend_Func* dfactor_)
{
   try
      {
         static_cast<T*>(self->this_)->blending_func_get(sfactor_, dfactor_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void evas_canvas3d_mesh_from_primitive_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, int frame_, Evas_Canvas3D_Primitive * primitive_)
{
   try
      {
         static_cast<T*>(self->this_)->from_primitive_set(frame_, ::efl::eolian::to_cxx<::evas::canvas3d::primitive>(primitive_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
Evas_Canvas3D_Shade_Mode evas_canvas3d_mesh_shade_mode_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->shade_mode_get();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Evas_Canvas3D_Shade_Mode _tmp_ret{};
         return _tmp_ret;
      }
}

template <typename T>
void evas_canvas3d_mesh_shade_mode_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Evas_Canvas3D_Shade_Mode mode_)
{
   try
      {
         static_cast<T*>(self->this_)->shade_mode_set(mode_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
bool evas_canvas3d_mesh_color_pick_enable_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->color_pick_enable_get();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Eina_Bool _tmp_ret{};
         return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }
}

template <typename T>
void evas_canvas3d_mesh_color_pick_enable_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Eina_Bool enabled_)
{
   try
      {
         static_cast<T*>(self->this_)->color_pick_enable_set(::efl::eolian::to_cxx<bool>(enabled_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
unsigned int evas_canvas3d_mesh_vertex_count_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->vertex_count_get();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         unsigned int _tmp_ret{};
         return _tmp_ret;
      }
}

template <typename T>
void evas_canvas3d_mesh_vertex_count_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, unsigned int count_)
{
   try
      {
         static_cast<T*>(self->this_)->vertex_count_set(count_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
bool evas_canvas3d_mesh_fog_enable_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->fog_enable_get();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Eina_Bool _tmp_ret{};
         return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }
}

template <typename T>
void evas_canvas3d_mesh_fog_enable_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Eina_Bool enabled_)
{
   try
      {
         static_cast<T*>(self->this_)->fog_enable_set(::efl::eolian::to_cxx<bool>(enabled_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
bool evas_canvas3d_mesh_alpha_test_enable_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->alpha_test_enable_get();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Eina_Bool _tmp_ret{};
         return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }
}

template <typename T>
void evas_canvas3d_mesh_alpha_test_enable_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Eina_Bool enabled_)
{
   try
      {
         static_cast<T*>(self->this_)->alpha_test_enable_set(::efl::eolian::to_cxx<bool>(enabled_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void evas_canvas3d_mesh_alpha_func_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Evas_Canvas3D_Comparison* comparison_func_, Evas_Real* ref_value_)
{
   try
      {
         static_cast<T*>(self->this_)->alpha_func_get(comparison_func_, ref_value_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void evas_canvas3d_mesh_alpha_func_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Evas_Canvas3D_Comparison comparison_func_, Evas_Real ref_value_)
{
   try
      {
         static_cast<T*>(self->this_)->alpha_func_set(comparison_func_, ref_value_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
bool evas_canvas3d_mesh_blending_enable_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->blending_enable_get();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Eina_Bool _tmp_ret{};
         return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }
}

template <typename T>
void evas_canvas3d_mesh_blending_enable_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Eina_Bool blending_)
{
   try
      {
         static_cast<T*>(self->this_)->blending_enable_set(::efl::eolian::to_cxx<bool>(blending_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
::evas::canvas3d::material evas_canvas3d_mesh_frame_material_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, int frame_)
{
   try
      {
         return static_cast<T*>(self->this_)->frame_material_get(frame_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Evas_Canvas3D_Material * _tmp_ret{};
         return ::efl::eolian::to_cxx<::evas::canvas3d::material>(_tmp_ret, std::tuple<std::false_type>());
      }
}

template <typename T>
void evas_canvas3d_mesh_frame_material_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, int frame_, Evas_Canvas3D_Material * material_)
{
   try
      {
         static_cast<T*>(self->this_)->frame_material_set(frame_, ::efl::eolian::to_cxx<::evas::canvas3d::material>(material_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
Evas_Canvas3D_Vertex_Assembly evas_canvas3d_mesh_vertex_assembly_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->vertex_assembly_get();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Evas_Canvas3D_Vertex_Assembly _tmp_ret{};
         return _tmp_ret;
      }
}

template <typename T>
void evas_canvas3d_mesh_vertex_assembly_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Evas_Canvas3D_Vertex_Assembly assembly_)
{
   try
      {
         static_cast<T*>(self->this_)->vertex_assembly_set(assembly_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

namespace efl { namespace eo { namespace detail {

template<>
struct operations< ::evas::canvas3d::mesh >
{
   template <typename T>
   struct type
         : virtual operations< ::evas::canvas3d::object >::template type<T>
         , virtual operations< ::evas::common_interface >::template type<T>
         , virtual operations< ::efl::file >::template type<T>
   {
      virtual void frame_vertex_data_set(int frame_, Evas_Canvas3D_Vertex_Attrib attrib_, int stride_, const void * data_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_canvas3d_mesh_frame_vertex_data_set(frame_, attrib_, stride_, data_));
      }

      virtual void frame_vertex_data_copy_set(int frame_, Evas_Canvas3D_Vertex_Attrib attrib_, int stride_, const void * data_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_canvas3d_mesh_frame_vertex_data_copy_set(frame_, attrib_, stride_, data_));
      }

      virtual void * frame_vertex_data_map(int frame_, Evas_Canvas3D_Vertex_Attrib attrib_)
      {
         void * _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_canvas3d_mesh_frame_vertex_data_map(frame_, attrib_));
            return _tmp_ret;
      }

      virtual void frame_vertex_data_unmap(int frame_, Evas_Canvas3D_Vertex_Attrib attrib_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_canvas3d_mesh_frame_vertex_data_unmap(frame_, attrib_));
      }

      virtual int frame_vertex_stride_get(int frame_, Evas_Canvas3D_Vertex_Attrib attrib_)
      {
         int _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_canvas3d_mesh_frame_vertex_stride_get(frame_, attrib_));
            return _tmp_ret;
      }

      virtual void index_data_set(Evas_Canvas3D_Index_Format format_, int count_, const void * indices_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_canvas3d_mesh_index_data_set(format_, count_, indices_));
      }

      virtual void index_data_copy_set(Evas_Canvas3D_Index_Format format_, int count_, const void * indices_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_canvas3d_mesh_index_data_copy_set(format_, count_, indices_));
      }

      virtual Evas_Canvas3D_Index_Format index_format_get()
      {
         Evas_Canvas3D_Index_Format _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_canvas3d_mesh_index_format_get());
            return _tmp_ret;
      }

      virtual int index_count_get()
      {
         int _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_canvas3d_mesh_index_count_get());
            return _tmp_ret;
      }

      virtual void * index_data_map()
      {
         void * _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_canvas3d_mesh_index_data_map());
            return _tmp_ret;
      }

      virtual void index_data_unmap()
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_canvas3d_mesh_index_data_unmap());
      }

      virtual void frame_add(int frame_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_canvas3d_mesh_frame_add(frame_));
      }

      virtual void frame_del(int frame_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_canvas3d_mesh_frame_del(frame_));
      }

      virtual void fog_color_set(Evas_Real r_, Evas_Real g_, Evas_Real b_, Evas_Real a_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_canvas3d_mesh_fog_color_set(r_, g_, b_, a_));
      }

      virtual void fog_color_get(Evas_Real* r_, Evas_Real* g_, Evas_Real* b_, Evas_Real* a_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_canvas3d_mesh_fog_color_get(r_, g_, b_, a_));
      }

      virtual void blending_func_set(Evas_Canvas3D_Blend_Func sfactor_, Evas_Canvas3D_Blend_Func dfactor_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_canvas3d_mesh_blending_func_set(sfactor_, dfactor_));
      }

      virtual void blending_func_get(Evas_Canvas3D_Blend_Func* sfactor_, Evas_Canvas3D_Blend_Func* dfactor_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_canvas3d_mesh_blending_func_get(sfactor_, dfactor_));
      }

      virtual void from_primitive_set(int frame_, ::evas::canvas3d::primitive primitive_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_canvas3d_mesh_from_primitive_set(frame_, ::efl::eolian::to_c(primitive_)));
      }

      virtual Evas_Canvas3D_Shade_Mode shade_mode_get()
      {
         Evas_Canvas3D_Shade_Mode _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_canvas3d_mesh_shade_mode_get());
            return _tmp_ret;
      }

      virtual void shade_mode_set(Evas_Canvas3D_Shade_Mode mode_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_canvas3d_mesh_shade_mode_set(mode_));
      }

      virtual bool color_pick_enable_get()
      {
         Eina_Bool _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_canvas3d_mesh_color_pick_enable_get());
            return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }

      virtual void color_pick_enable_set(bool enabled_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_canvas3d_mesh_color_pick_enable_set(::efl::eolian::to_c(enabled_)));
      }

      virtual unsigned int vertex_count_get()
      {
         unsigned int _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_canvas3d_mesh_vertex_count_get());
            return _tmp_ret;
      }

      virtual void vertex_count_set(unsigned int count_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_canvas3d_mesh_vertex_count_set(count_));
      }

      virtual bool fog_enable_get()
      {
         Eina_Bool _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_canvas3d_mesh_fog_enable_get());
            return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }

      virtual void fog_enable_set(bool enabled_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_canvas3d_mesh_fog_enable_set(::efl::eolian::to_c(enabled_)));
      }

      virtual bool alpha_test_enable_get()
      {
         Eina_Bool _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_canvas3d_mesh_alpha_test_enable_get());
            return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }

      virtual void alpha_test_enable_set(bool enabled_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_canvas3d_mesh_alpha_test_enable_set(::efl::eolian::to_c(enabled_)));
      }

      virtual void alpha_func_get(Evas_Canvas3D_Comparison* comparison_func_, Evas_Real* ref_value_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_canvas3d_mesh_alpha_func_get(comparison_func_, ref_value_));
      }

      virtual void alpha_func_set(Evas_Canvas3D_Comparison comparison_func_, Evas_Real ref_value_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_canvas3d_mesh_alpha_func_set(comparison_func_, ref_value_));
      }

      virtual bool blending_enable_get()
      {
         Eina_Bool _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_canvas3d_mesh_blending_enable_get());
            return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }

      virtual void blending_enable_set(bool blending_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_canvas3d_mesh_blending_enable_set(::efl::eolian::to_c(blending_)));
      }

      virtual ::evas::canvas3d::material frame_material_get(int frame_)
      {
         Evas_Canvas3D_Material * _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_canvas3d_mesh_frame_material_get(frame_));
            return ::efl::eolian::to_cxx<::evas::canvas3d::material>(_tmp_ret, std::tuple<std::false_type>());
      }

      virtual void frame_material_set(int frame_, ::evas::canvas3d::material material_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_canvas3d_mesh_frame_material_set(frame_, ::efl::eolian::to_c(material_)));
      }

      virtual Evas_Canvas3D_Vertex_Assembly vertex_assembly_get()
      {
         Evas_Canvas3D_Vertex_Assembly _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_canvas3d_mesh_vertex_assembly_get());
            return _tmp_ret;
      }

      virtual void vertex_assembly_set(Evas_Canvas3D_Vertex_Assembly assembly_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_canvas3d_mesh_vertex_assembly_set(assembly_));
      }

   };
};


template<>
struct operation_description_class_size< ::evas::canvas3d::mesh >
{
   static constexpr int value = 
#if defined(MESH_PROTECTED) && defined(MESH_BETA)
      36
#elif defined(MESH_PROTECTED)
      36
#elif defined(MESH_BETA)
      36
#else
      36
#endif
      + operation_description_class_size<::evas::canvas3d::object >::value      + operation_description_class_size<::evas::common_interface >::value      + operation_description_class_size<::efl::file >::value;
};

template <typename T>
int initialize_operation_description(::efl::eo::detail::tag<::evas::canvas3d::mesh>
                                 , Eo_Op_Description* ops)
{
   int i = 0;
   (void)i;
   (void)ops;
   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas3d_mesh_frame_vertex_data_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas3d_mesh_frame_vertex_data_set);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas3d_mesh_frame_vertex_data_copy_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas3d_mesh_frame_vertex_data_copy_set);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas3d_mesh_frame_vertex_data_map_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas3d_mesh_frame_vertex_data_map);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas3d_mesh_frame_vertex_data_unmap_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas3d_mesh_frame_vertex_data_unmap);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas3d_mesh_frame_vertex_stride_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas3d_mesh_frame_vertex_stride_get);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas3d_mesh_index_data_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas3d_mesh_index_data_set);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas3d_mesh_index_data_copy_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas3d_mesh_index_data_copy_set);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas3d_mesh_index_format_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas3d_mesh_index_format_get);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas3d_mesh_index_count_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas3d_mesh_index_count_get);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas3d_mesh_index_data_map_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas3d_mesh_index_data_map);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas3d_mesh_index_data_unmap_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas3d_mesh_index_data_unmap);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas3d_mesh_frame_add_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas3d_mesh_frame_add);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas3d_mesh_frame_del_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas3d_mesh_frame_del);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas3d_mesh_fog_color_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas3d_mesh_fog_color_set);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas3d_mesh_fog_color_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas3d_mesh_fog_color_get);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas3d_mesh_blending_func_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas3d_mesh_blending_func_set);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas3d_mesh_blending_func_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas3d_mesh_blending_func_get);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas3d_mesh_from_primitive_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas3d_mesh_from_primitive_set);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas3d_mesh_shade_mode_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas3d_mesh_shade_mode_get);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas3d_mesh_shade_mode_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas3d_mesh_shade_mode_set);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas3d_mesh_color_pick_enable_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas3d_mesh_color_pick_enable_get);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas3d_mesh_color_pick_enable_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas3d_mesh_color_pick_enable_set);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas3d_mesh_vertex_count_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas3d_mesh_vertex_count_get);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas3d_mesh_vertex_count_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas3d_mesh_vertex_count_set);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas3d_mesh_fog_enable_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas3d_mesh_fog_enable_get);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas3d_mesh_fog_enable_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas3d_mesh_fog_enable_set);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas3d_mesh_alpha_test_enable_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas3d_mesh_alpha_test_enable_get);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas3d_mesh_alpha_test_enable_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas3d_mesh_alpha_test_enable_set);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas3d_mesh_alpha_func_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas3d_mesh_alpha_func_get);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas3d_mesh_alpha_func_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas3d_mesh_alpha_func_set);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas3d_mesh_blending_enable_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas3d_mesh_blending_enable_get);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas3d_mesh_blending_enable_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas3d_mesh_blending_enable_set);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas3d_mesh_frame_material_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas3d_mesh_frame_material_get);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas3d_mesh_frame_material_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas3d_mesh_frame_material_set);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas3d_mesh_vertex_assembly_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas3d_mesh_vertex_assembly_get);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas3d_mesh_vertex_assembly_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas3d_mesh_vertex_assembly_set);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   initialize_operation_description<T>(::efl::eo::detail::tag<::evas::canvas3d::object>(), &ops[operation_description_class_size< ::evas::canvas3d::mesh >::value]);
   initialize_operation_description<T>(::efl::eo::detail::tag<::evas::common_interface>(), &ops[operation_description_class_size< ::evas::canvas3d::mesh >::value + operation_description_class_size<::evas::canvas3d::object>::value]);
   initialize_operation_description<T>(::efl::eo::detail::tag<::efl::file>(), &ops[operation_description_class_size< ::evas::canvas3d::mesh >::value + operation_description_class_size<::evas::canvas3d::object>::value + operation_description_class_size<::evas::common_interface>::value]);
   return 0;
}
inline Eo_Class const* get_eo_class(tag<::evas::canvas3d::mesh>)
{
   return (EVAS_CANVAS3D_MESH_CLASS);
}

} } }

/// @endcond

