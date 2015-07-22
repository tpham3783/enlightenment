/// @cond EO_CXX_EO_IMPL

inline void evas::canvas3d::material::color_set(Evas_Canvas3D_Material_Attrib attrib_, Evas_Real r_, Evas_Real g_, Evas_Real b_, Evas_Real a_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas3d_material_color_set(attrib_, r_, g_, b_, a_));
}

inline void evas::canvas3d::material::color_get(Evas_Canvas3D_Material_Attrib attrib_, Evas_Real* r_, Evas_Real* g_, Evas_Real* b_, Evas_Real* a_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas3d_material_color_get(attrib_, r_, g_, b_, a_));
}

inline bool evas::canvas3d::material::enable_get(Evas_Canvas3D_Material_Attrib attrib_) const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_canvas3d_material_enable_get(attrib_));
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline void evas::canvas3d::material::enable_set(Evas_Canvas3D_Material_Attrib attrib_, bool enable_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas3d_material_enable_set(attrib_, ::efl::eolian::to_c(enable_)));
}

inline Evas_Real evas::canvas3d::material::shininess_get() const
{
   Evas_Real _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_canvas3d_material_shininess_get());
   return _tmp_ret;
}

inline void evas::canvas3d::material::shininess_set(Evas_Real shininess_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas3d_material_shininess_set(shininess_));
}

inline ::evas::canvas3d::texture evas::canvas3d::material::texture_get(Evas_Canvas3D_Material_Attrib attrib_) const
{
   Evas_Canvas3D_Texture * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_canvas3d_material_texture_get(attrib_));
   return ::efl::eolian::to_cxx<::evas::canvas3d::texture>(_tmp_ret, std::tuple<std::false_type>());
}

inline void evas::canvas3d::material::texture_set(Evas_Canvas3D_Material_Attrib attrib_, ::evas::canvas3d::texture texture_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas3d_material_texture_set(attrib_, ::efl::eolian::to_c(texture_)));
}

inline void eo_cxx::evas::canvas3d::material::color_set(Evas_Canvas3D_Material_Attrib attrib_, Evas_Real r_, Evas_Real g_, Evas_Real b_, Evas_Real a_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas3d_material_color_set(attrib_, r_, g_, b_, a_));
}

inline void eo_cxx::evas::canvas3d::material::color_get(Evas_Canvas3D_Material_Attrib attrib_, Evas_Real* r_, Evas_Real* g_, Evas_Real* b_, Evas_Real* a_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas3d_material_color_get(attrib_, r_, g_, b_, a_));
}

inline bool eo_cxx::evas::canvas3d::material::enable_get(Evas_Canvas3D_Material_Attrib attrib_) const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_canvas3d_material_enable_get(attrib_));
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline void eo_cxx::evas::canvas3d::material::enable_set(Evas_Canvas3D_Material_Attrib attrib_, bool enable_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas3d_material_enable_set(attrib_, ::efl::eolian::to_c(enable_)));
}

inline Evas_Real eo_cxx::evas::canvas3d::material::shininess_get() const
{
   Evas_Real _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_canvas3d_material_shininess_get());
   return _tmp_ret;
}

inline void eo_cxx::evas::canvas3d::material::shininess_set(Evas_Real shininess_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas3d_material_shininess_set(shininess_));
}

inline ::evas::canvas3d::texture eo_cxx::evas::canvas3d::material::texture_get(Evas_Canvas3D_Material_Attrib attrib_) const
{
   Evas_Canvas3D_Texture * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_canvas3d_material_texture_get(attrib_));
   return ::efl::eolian::to_cxx<::evas::canvas3d::texture>(_tmp_ret, std::tuple<std::false_type>());
}

inline void eo_cxx::evas::canvas3d::material::texture_set(Evas_Canvas3D_Material_Attrib attrib_, ::evas::canvas3d::texture texture_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas3d_material_texture_set(attrib_, ::efl::eolian::to_c(texture_)));
}

inline ::eo_cxx::evas::canvas3d::material::operator ::evas::canvas3d::material() const
{
   return *static_cast<::evas::canvas3d::material const*>(static_cast<void const*>(this));
}

inline ::eo_cxx::evas::canvas3d::material::operator ::evas::canvas3d::material&()
{
   return *static_cast<::evas::canvas3d::material*>(static_cast<void*>(this));
}

inline ::eo_cxx::evas::canvas3d::material::operator ::evas::canvas3d::material const&() const
{
   return *static_cast<::evas::canvas3d::material const*>(static_cast<void const*>(this));
}

template <typename T>
void evas_canvas3d_material_color_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Evas_Canvas3D_Material_Attrib attrib_, Evas_Real r_, Evas_Real g_, Evas_Real b_, Evas_Real a_)
{
   try
      {
         static_cast<T*>(self->this_)->color_set(attrib_, r_, g_, b_, a_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void evas_canvas3d_material_color_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Evas_Canvas3D_Material_Attrib attrib_, Evas_Real* r_, Evas_Real* g_, Evas_Real* b_, Evas_Real* a_)
{
   try
      {
         static_cast<T*>(self->this_)->color_get(attrib_, r_, g_, b_, a_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
bool evas_canvas3d_material_enable_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Evas_Canvas3D_Material_Attrib attrib_)
{
   try
      {
         return static_cast<T*>(self->this_)->enable_get(attrib_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Eina_Bool _tmp_ret{};
         return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }
}

template <typename T>
void evas_canvas3d_material_enable_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Evas_Canvas3D_Material_Attrib attrib_, Eina_Bool enable_)
{
   try
      {
         static_cast<T*>(self->this_)->enable_set(attrib_, ::efl::eolian::to_cxx<bool>(enable_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
Evas_Real evas_canvas3d_material_shininess_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->shininess_get();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Evas_Real _tmp_ret{};
         return _tmp_ret;
      }
}

template <typename T>
void evas_canvas3d_material_shininess_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Evas_Real shininess_)
{
   try
      {
         static_cast<T*>(self->this_)->shininess_set(shininess_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
::evas::canvas3d::texture evas_canvas3d_material_texture_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Evas_Canvas3D_Material_Attrib attrib_)
{
   try
      {
         return static_cast<T*>(self->this_)->texture_get(attrib_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Evas_Canvas3D_Texture * _tmp_ret{};
         return ::efl::eolian::to_cxx<::evas::canvas3d::texture>(_tmp_ret, std::tuple<std::false_type>());
      }
}

template <typename T>
void evas_canvas3d_material_texture_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Evas_Canvas3D_Material_Attrib attrib_, Evas_Canvas3D_Texture * texture_)
{
   try
      {
         static_cast<T*>(self->this_)->texture_set(attrib_, ::efl::eolian::to_cxx<::evas::canvas3d::texture>(texture_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

namespace efl { namespace eo { namespace detail {

template<>
struct operations< ::evas::canvas3d::material >
{
   template <typename T>
   struct type
         : virtual operations< ::evas::canvas3d::object >::template type<T>
         , virtual operations< ::evas::common_interface >::template type<T>
   {
      virtual void color_set(Evas_Canvas3D_Material_Attrib attrib_, Evas_Real r_, Evas_Real g_, Evas_Real b_, Evas_Real a_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_canvas3d_material_color_set(attrib_, r_, g_, b_, a_));
      }

      virtual void color_get(Evas_Canvas3D_Material_Attrib attrib_, Evas_Real* r_, Evas_Real* g_, Evas_Real* b_, Evas_Real* a_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_canvas3d_material_color_get(attrib_, r_, g_, b_, a_));
      }

      virtual bool enable_get(Evas_Canvas3D_Material_Attrib attrib_)
      {
         Eina_Bool _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_canvas3d_material_enable_get(attrib_));
            return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }

      virtual void enable_set(Evas_Canvas3D_Material_Attrib attrib_, bool enable_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_canvas3d_material_enable_set(attrib_, ::efl::eolian::to_c(enable_)));
      }

      virtual Evas_Real shininess_get()
      {
         Evas_Real _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_canvas3d_material_shininess_get());
            return _tmp_ret;
      }

      virtual void shininess_set(Evas_Real shininess_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_canvas3d_material_shininess_set(shininess_));
      }

      virtual ::evas::canvas3d::texture texture_get(Evas_Canvas3D_Material_Attrib attrib_)
      {
         Evas_Canvas3D_Texture * _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_canvas3d_material_texture_get(attrib_));
            return ::efl::eolian::to_cxx<::evas::canvas3d::texture>(_tmp_ret, std::tuple<std::false_type>());
      }

      virtual void texture_set(Evas_Canvas3D_Material_Attrib attrib_, ::evas::canvas3d::texture texture_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_canvas3d_material_texture_set(attrib_, ::efl::eolian::to_c(texture_)));
      }

   };
};


template<>
struct operation_description_class_size< ::evas::canvas3d::material >
{
   static constexpr int value = 
#if defined(MATERIAL_PROTECTED) && defined(MATERIAL_BETA)
      8
#elif defined(MATERIAL_PROTECTED)
      8
#elif defined(MATERIAL_BETA)
      8
#else
      8
#endif
      + operation_description_class_size<::evas::canvas3d::object >::value      + operation_description_class_size<::evas::common_interface >::value;
};

template <typename T>
int initialize_operation_description(::efl::eo::detail::tag<::evas::canvas3d::material>
                                 , Eo_Op_Description* ops)
{
   int i = 0;
   (void)i;
   (void)ops;
   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas3d_material_color_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas3d_material_color_set);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas3d_material_color_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas3d_material_color_get);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas3d_material_enable_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas3d_material_enable_get);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas3d_material_enable_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas3d_material_enable_set);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas3d_material_shininess_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas3d_material_shininess_get);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas3d_material_shininess_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas3d_material_shininess_set);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas3d_material_texture_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas3d_material_texture_get);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas3d_material_texture_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas3d_material_texture_set);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   initialize_operation_description<T>(::efl::eo::detail::tag<::evas::canvas3d::object>(), &ops[operation_description_class_size< ::evas::canvas3d::material >::value]);
   initialize_operation_description<T>(::efl::eo::detail::tag<::evas::common_interface>(), &ops[operation_description_class_size< ::evas::canvas3d::material >::value + operation_description_class_size<::evas::canvas3d::object>::value]);
   return 0;
}
inline Eo_Class const* get_eo_class(tag<::evas::canvas3d::material>)
{
   return (EVAS_CANVAS3D_MATERIAL_CLASS);
}

} } }

/// @endcond

