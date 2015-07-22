/// @cond EO_CXX_EO_IMPL

inline void evas::canvas3d::camera::projection_matrix_set(const Evas_Real * matrix_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas3d_camera_projection_matrix_set(matrix_));
}

inline void evas::canvas3d::camera::projection_matrix_get(Evas_Real* matrix_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas3d_camera_projection_matrix_get(matrix_));
}

inline void evas::canvas3d::camera::projection_perspective_set(Evas_Real fovy_, Evas_Real aspect_, Evas_Real dnear_, Evas_Real dfar_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas3d_camera_projection_perspective_set(fovy_, aspect_, dnear_, dfar_));
}

inline void evas::canvas3d::camera::projection_frustum_set(Evas_Real left_, Evas_Real right_, Evas_Real bottom_, Evas_Real top_, Evas_Real dnear_, Evas_Real dfar_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas3d_camera_projection_frustum_set(left_, right_, bottom_, top_, dnear_, dfar_));
}

inline void evas::canvas3d::camera::projection_ortho_set(Evas_Real left_, Evas_Real right_, Evas_Real bottom_, Evas_Real top_, Evas_Real dnear_, Evas_Real dfar_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas3d_camera_projection_ortho_set(left_, right_, bottom_, top_, dnear_, dfar_));
}

inline bool evas::canvas3d::camera::node_visible_get(::evas::canvas3d::node camera_node_, ::evas::canvas3d::node node_, Evas_Canvas3D_Frustum_Mode key_) const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_canvas3d_camera_node_visible_get(::efl::eolian::to_c(camera_node_), ::efl::eolian::to_c(node_), key_));
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline void eo_cxx::evas::canvas3d::camera::projection_matrix_set(const Evas_Real * matrix_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas3d_camera_projection_matrix_set(matrix_));
}

inline void eo_cxx::evas::canvas3d::camera::projection_matrix_get(Evas_Real* matrix_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas3d_camera_projection_matrix_get(matrix_));
}

inline void eo_cxx::evas::canvas3d::camera::projection_perspective_set(Evas_Real fovy_, Evas_Real aspect_, Evas_Real dnear_, Evas_Real dfar_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas3d_camera_projection_perspective_set(fovy_, aspect_, dnear_, dfar_));
}

inline void eo_cxx::evas::canvas3d::camera::projection_frustum_set(Evas_Real left_, Evas_Real right_, Evas_Real bottom_, Evas_Real top_, Evas_Real dnear_, Evas_Real dfar_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas3d_camera_projection_frustum_set(left_, right_, bottom_, top_, dnear_, dfar_));
}

inline void eo_cxx::evas::canvas3d::camera::projection_ortho_set(Evas_Real left_, Evas_Real right_, Evas_Real bottom_, Evas_Real top_, Evas_Real dnear_, Evas_Real dfar_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas3d_camera_projection_ortho_set(left_, right_, bottom_, top_, dnear_, dfar_));
}

inline bool eo_cxx::evas::canvas3d::camera::node_visible_get(::evas::canvas3d::node camera_node_, ::evas::canvas3d::node node_, Evas_Canvas3D_Frustum_Mode key_) const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_canvas3d_camera_node_visible_get(::efl::eolian::to_c(camera_node_), ::efl::eolian::to_c(node_), key_));
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline ::eo_cxx::evas::canvas3d::camera::operator ::evas::canvas3d::camera() const
{
   return *static_cast<::evas::canvas3d::camera const*>(static_cast<void const*>(this));
}

inline ::eo_cxx::evas::canvas3d::camera::operator ::evas::canvas3d::camera&()
{
   return *static_cast<::evas::canvas3d::camera*>(static_cast<void*>(this));
}

inline ::eo_cxx::evas::canvas3d::camera::operator ::evas::canvas3d::camera const&() const
{
   return *static_cast<::evas::canvas3d::camera const*>(static_cast<void const*>(this));
}

template <typename T>
void evas_canvas3d_camera_projection_matrix_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, const Evas_Real * matrix_)
{
   try
      {
         static_cast<T*>(self->this_)->projection_matrix_set(matrix_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void evas_canvas3d_camera_projection_matrix_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Evas_Real* matrix_)
{
   try
      {
         static_cast<T*>(self->this_)->projection_matrix_get(matrix_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void evas_canvas3d_camera_projection_perspective_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Evas_Real fovy_, Evas_Real aspect_, Evas_Real dnear_, Evas_Real dfar_)
{
   try
      {
         static_cast<T*>(self->this_)->projection_perspective_set(fovy_, aspect_, dnear_, dfar_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void evas_canvas3d_camera_projection_frustum_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Evas_Real left_, Evas_Real right_, Evas_Real bottom_, Evas_Real top_, Evas_Real dnear_, Evas_Real dfar_)
{
   try
      {
         static_cast<T*>(self->this_)->projection_frustum_set(left_, right_, bottom_, top_, dnear_, dfar_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void evas_canvas3d_camera_projection_ortho_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Evas_Real left_, Evas_Real right_, Evas_Real bottom_, Evas_Real top_, Evas_Real dnear_, Evas_Real dfar_)
{
   try
      {
         static_cast<T*>(self->this_)->projection_ortho_set(left_, right_, bottom_, top_, dnear_, dfar_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
bool evas_canvas3d_camera_node_visible_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Evas_Canvas3D_Node * camera_node_, Evas_Canvas3D_Node * node_, Evas_Canvas3D_Frustum_Mode key_)
{
   try
      {
         return static_cast<T*>(self->this_)->node_visible_get(::efl::eolian::to_cxx<::evas::canvas3d::node>(camera_node_, std::tuple<std::false_type>()), ::efl::eolian::to_cxx<::evas::canvas3d::node>(node_, std::tuple<std::false_type>()), key_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Eina_Bool _tmp_ret{};
         return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }
}

namespace efl { namespace eo { namespace detail {

template<>
struct operations< ::evas::canvas3d::camera >
{
   template <typename T>
   struct type
         : virtual operations< ::evas::canvas3d::object >::template type<T>
         , virtual operations< ::evas::common_interface >::template type<T>
   {
      virtual void projection_matrix_set(const Evas_Real * matrix_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_canvas3d_camera_projection_matrix_set(matrix_));
      }

      virtual void projection_matrix_get(Evas_Real* matrix_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_canvas3d_camera_projection_matrix_get(matrix_));
      }

      virtual void projection_perspective_set(Evas_Real fovy_, Evas_Real aspect_, Evas_Real dnear_, Evas_Real dfar_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_canvas3d_camera_projection_perspective_set(fovy_, aspect_, dnear_, dfar_));
      }

      virtual void projection_frustum_set(Evas_Real left_, Evas_Real right_, Evas_Real bottom_, Evas_Real top_, Evas_Real dnear_, Evas_Real dfar_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_canvas3d_camera_projection_frustum_set(left_, right_, bottom_, top_, dnear_, dfar_));
      }

      virtual void projection_ortho_set(Evas_Real left_, Evas_Real right_, Evas_Real bottom_, Evas_Real top_, Evas_Real dnear_, Evas_Real dfar_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_canvas3d_camera_projection_ortho_set(left_, right_, bottom_, top_, dnear_, dfar_));
      }

      virtual bool node_visible_get(::evas::canvas3d::node camera_node_, ::evas::canvas3d::node node_, Evas_Canvas3D_Frustum_Mode key_)
      {
         Eina_Bool _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_canvas3d_camera_node_visible_get(::efl::eolian::to_c(camera_node_), ::efl::eolian::to_c(node_), key_));
            return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }

   };
};


template<>
struct operation_description_class_size< ::evas::canvas3d::camera >
{
   static constexpr int value = 
#if defined(CAMERA_PROTECTED) && defined(CAMERA_BETA)
      6
#elif defined(CAMERA_PROTECTED)
      6
#elif defined(CAMERA_BETA)
      6
#else
      6
#endif
      + operation_description_class_size<::evas::canvas3d::object >::value      + operation_description_class_size<::evas::common_interface >::value;
};

template <typename T>
int initialize_operation_description(::efl::eo::detail::tag<::evas::canvas3d::camera>
                                 , Eo_Op_Description* ops)
{
   int i = 0;
   (void)i;
   (void)ops;
   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas3d_camera_projection_matrix_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas3d_camera_projection_matrix_set);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas3d_camera_projection_matrix_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas3d_camera_projection_matrix_get);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas3d_camera_projection_perspective_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas3d_camera_projection_perspective_set);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas3d_camera_projection_frustum_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas3d_camera_projection_frustum_set);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas3d_camera_projection_ortho_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas3d_camera_projection_ortho_set);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas3d_camera_node_visible_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas3d_camera_node_visible_get);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   initialize_operation_description<T>(::efl::eo::detail::tag<::evas::canvas3d::object>(), &ops[operation_description_class_size< ::evas::canvas3d::camera >::value]);
   initialize_operation_description<T>(::efl::eo::detail::tag<::evas::common_interface>(), &ops[operation_description_class_size< ::evas::canvas3d::camera >::value + operation_description_class_size<::evas::canvas3d::object>::value]);
   return 0;
}
inline Eo_Class const* get_eo_class(tag<::evas::canvas3d::camera>)
{
   return (EVAS_CANVAS3D_CAMERA_CLASS);
}

} } }

/// @endcond

