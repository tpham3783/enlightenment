/// @cond EO_CXX_EO_IMPL

inline Evas_Canvas3D_Mesh_Primitive evas::canvas3d::primitive::form_get() const
{
   Evas_Canvas3D_Mesh_Primitive _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_canvas3d_primitive_form_get());
   return _tmp_ret;
}

inline void evas::canvas3d::primitive::form_set(Evas_Canvas3D_Mesh_Primitive form_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas3d_primitive_form_set(form_));
}

inline Evas_Canvas3D_Primitive_Mode evas::canvas3d::primitive::mode_get() const
{
   Evas_Canvas3D_Primitive_Mode _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_canvas3d_primitive_mode_get());
   return _tmp_ret;
}

inline void evas::canvas3d::primitive::mode_set(Evas_Canvas3D_Primitive_Mode mode_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas3d_primitive_mode_set(mode_));
}

inline Evas_Real evas::canvas3d::primitive::ratio_get() const
{
   Evas_Real _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_canvas3d_primitive_ratio_get());
   return _tmp_ret;
}

inline void evas::canvas3d::primitive::ratio_set(Evas_Real ratio_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas3d_primitive_ratio_set(ratio_));
}

inline int evas::canvas3d::primitive::precision_get() const
{
   int _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_canvas3d_primitive_precision_get());
   return _tmp_ret;
}

inline void evas::canvas3d::primitive::precision_set(int precision_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas3d_primitive_precision_set(precision_));
}

inline void evas::canvas3d::primitive::surface_set(Evas_Canvas3D_Surface_Func * surface_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas3d_primitive_surface_set(surface_));
}

inline void evas::canvas3d::primitive::tex_scale_get(Evas_Real* tex_scale_x_, Evas_Real* tex_scale_y_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas3d_primitive_tex_scale_get(tex_scale_x_, tex_scale_y_));
}

inline void evas::canvas3d::primitive::tex_scale_set(Evas_Real tex_scale_x_, Evas_Real tex_scale_y_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas3d_primitive_tex_scale_set(tex_scale_x_, tex_scale_y_));
}

inline Evas_Canvas3D_Mesh_Primitive eo_cxx::evas::canvas3d::primitive::form_get() const
{
   Evas_Canvas3D_Mesh_Primitive _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_canvas3d_primitive_form_get());
   return _tmp_ret;
}

inline void eo_cxx::evas::canvas3d::primitive::form_set(Evas_Canvas3D_Mesh_Primitive form_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas3d_primitive_form_set(form_));
}

inline Evas_Canvas3D_Primitive_Mode eo_cxx::evas::canvas3d::primitive::mode_get() const
{
   Evas_Canvas3D_Primitive_Mode _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_canvas3d_primitive_mode_get());
   return _tmp_ret;
}

inline void eo_cxx::evas::canvas3d::primitive::mode_set(Evas_Canvas3D_Primitive_Mode mode_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas3d_primitive_mode_set(mode_));
}

inline Evas_Real eo_cxx::evas::canvas3d::primitive::ratio_get() const
{
   Evas_Real _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_canvas3d_primitive_ratio_get());
   return _tmp_ret;
}

inline void eo_cxx::evas::canvas3d::primitive::ratio_set(Evas_Real ratio_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas3d_primitive_ratio_set(ratio_));
}

inline int eo_cxx::evas::canvas3d::primitive::precision_get() const
{
   int _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_canvas3d_primitive_precision_get());
   return _tmp_ret;
}

inline void eo_cxx::evas::canvas3d::primitive::precision_set(int precision_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas3d_primitive_precision_set(precision_));
}

inline void eo_cxx::evas::canvas3d::primitive::surface_set(Evas_Canvas3D_Surface_Func * surface_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas3d_primitive_surface_set(surface_));
}

inline void eo_cxx::evas::canvas3d::primitive::tex_scale_get(Evas_Real* tex_scale_x_, Evas_Real* tex_scale_y_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas3d_primitive_tex_scale_get(tex_scale_x_, tex_scale_y_));
}

inline void eo_cxx::evas::canvas3d::primitive::tex_scale_set(Evas_Real tex_scale_x_, Evas_Real tex_scale_y_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas3d_primitive_tex_scale_set(tex_scale_x_, tex_scale_y_));
}

inline ::eo_cxx::evas::canvas3d::primitive::operator ::evas::canvas3d::primitive() const
{
   return *static_cast<::evas::canvas3d::primitive const*>(static_cast<void const*>(this));
}

inline ::eo_cxx::evas::canvas3d::primitive::operator ::evas::canvas3d::primitive&()
{
   return *static_cast<::evas::canvas3d::primitive*>(static_cast<void*>(this));
}

inline ::eo_cxx::evas::canvas3d::primitive::operator ::evas::canvas3d::primitive const&() const
{
   return *static_cast<::evas::canvas3d::primitive const*>(static_cast<void const*>(this));
}

template <typename T>
Evas_Canvas3D_Mesh_Primitive evas_canvas3d_primitive_form_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->form_get();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Evas_Canvas3D_Mesh_Primitive _tmp_ret{};
         return _tmp_ret;
      }
}

template <typename T>
void evas_canvas3d_primitive_form_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Evas_Canvas3D_Mesh_Primitive form_)
{
   try
      {
         static_cast<T*>(self->this_)->form_set(form_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
Evas_Canvas3D_Primitive_Mode evas_canvas3d_primitive_mode_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->mode_get();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Evas_Canvas3D_Primitive_Mode _tmp_ret{};
         return _tmp_ret;
      }
}

template <typename T>
void evas_canvas3d_primitive_mode_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Evas_Canvas3D_Primitive_Mode mode_)
{
   try
      {
         static_cast<T*>(self->this_)->mode_set(mode_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
Evas_Real evas_canvas3d_primitive_ratio_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->ratio_get();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Evas_Real _tmp_ret{};
         return _tmp_ret;
      }
}

template <typename T>
void evas_canvas3d_primitive_ratio_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Evas_Real ratio_)
{
   try
      {
         static_cast<T*>(self->this_)->ratio_set(ratio_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
int evas_canvas3d_primitive_precision_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->precision_get();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         int _tmp_ret{};
         return _tmp_ret;
      }
}

template <typename T>
void evas_canvas3d_primitive_precision_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, int precision_)
{
   try
      {
         static_cast<T*>(self->this_)->precision_set(precision_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void evas_canvas3d_primitive_surface_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Evas_Canvas3D_Surface_Func * surface_)
{
   try
      {
         static_cast<T*>(self->this_)->surface_set(surface_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void evas_canvas3d_primitive_tex_scale_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Evas_Real* tex_scale_x_, Evas_Real* tex_scale_y_)
{
   try
      {
         static_cast<T*>(self->this_)->tex_scale_get(tex_scale_x_, tex_scale_y_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void evas_canvas3d_primitive_tex_scale_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Evas_Real tex_scale_x_, Evas_Real tex_scale_y_)
{
   try
      {
         static_cast<T*>(self->this_)->tex_scale_set(tex_scale_x_, tex_scale_y_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

namespace efl { namespace eo { namespace detail {

template<>
struct operations< ::evas::canvas3d::primitive >
{
   template <typename T>
   struct type
         : virtual operations< ::evas::canvas3d::object >::template type<T>
         , virtual operations< ::evas::common_interface >::template type<T>
   {
      virtual Evas_Canvas3D_Mesh_Primitive form_get()
      {
         Evas_Canvas3D_Mesh_Primitive _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_canvas3d_primitive_form_get());
            return _tmp_ret;
      }

      virtual void form_set(Evas_Canvas3D_Mesh_Primitive form_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_canvas3d_primitive_form_set(form_));
      }

      virtual Evas_Canvas3D_Primitive_Mode mode_get()
      {
         Evas_Canvas3D_Primitive_Mode _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_canvas3d_primitive_mode_get());
            return _tmp_ret;
      }

      virtual void mode_set(Evas_Canvas3D_Primitive_Mode mode_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_canvas3d_primitive_mode_set(mode_));
      }

      virtual Evas_Real ratio_get()
      {
         Evas_Real _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_canvas3d_primitive_ratio_get());
            return _tmp_ret;
      }

      virtual void ratio_set(Evas_Real ratio_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_canvas3d_primitive_ratio_set(ratio_));
      }

      virtual int precision_get()
      {
         int _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_canvas3d_primitive_precision_get());
            return _tmp_ret;
      }

      virtual void precision_set(int precision_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_canvas3d_primitive_precision_set(precision_));
      }

      virtual void surface_set(Evas_Canvas3D_Surface_Func * surface_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_canvas3d_primitive_surface_set(surface_));
      }

      virtual void tex_scale_get(Evas_Real* tex_scale_x_, Evas_Real* tex_scale_y_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_canvas3d_primitive_tex_scale_get(tex_scale_x_, tex_scale_y_));
      }

      virtual void tex_scale_set(Evas_Real tex_scale_x_, Evas_Real tex_scale_y_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_canvas3d_primitive_tex_scale_set(tex_scale_x_, tex_scale_y_));
      }

   };
};


template<>
struct operation_description_class_size< ::evas::canvas3d::primitive >
{
   static constexpr int value = 
#if defined(PRIMITIVE_PROTECTED) && defined(PRIMITIVE_BETA)
      11
#elif defined(PRIMITIVE_PROTECTED)
      11
#elif defined(PRIMITIVE_BETA)
      11
#else
      11
#endif
      + operation_description_class_size<::evas::canvas3d::object >::value      + operation_description_class_size<::evas::common_interface >::value;
};

template <typename T>
int initialize_operation_description(::efl::eo::detail::tag<::evas::canvas3d::primitive>
                                 , Eo_Op_Description* ops)
{
   int i = 0;
   (void)i;
   (void)ops;
   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas3d_primitive_form_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas3d_primitive_form_get);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas3d_primitive_form_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas3d_primitive_form_set);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas3d_primitive_mode_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas3d_primitive_mode_get);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas3d_primitive_mode_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas3d_primitive_mode_set);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas3d_primitive_ratio_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas3d_primitive_ratio_get);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas3d_primitive_ratio_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas3d_primitive_ratio_set);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas3d_primitive_precision_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas3d_primitive_precision_get);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas3d_primitive_precision_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas3d_primitive_precision_set);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas3d_primitive_surface_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas3d_primitive_surface_set);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas3d_primitive_tex_scale_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas3d_primitive_tex_scale_get);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas3d_primitive_tex_scale_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas3d_primitive_tex_scale_set);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   initialize_operation_description<T>(::efl::eo::detail::tag<::evas::canvas3d::object>(), &ops[operation_description_class_size< ::evas::canvas3d::primitive >::value]);
   initialize_operation_description<T>(::efl::eo::detail::tag<::evas::common_interface>(), &ops[operation_description_class_size< ::evas::canvas3d::primitive >::value + operation_description_class_size<::evas::canvas3d::object>::value]);
   return 0;
}
inline Eo_Class const* get_eo_class(tag<::evas::canvas3d::primitive>)
{
   return (EVAS_CANVAS3D_PRIMITIVE_CLASS);
}

} } }

/// @endcond

