/// @cond EO_CXX_EO_IMPL

inline Efl_VG * efl::vg::shape::fill_get() const
{
   Efl_VG * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::efl_vg_shape_fill_get());
   return _tmp_ret;
}

inline void efl::vg::shape::fill_set(Efl_VG * f_) const
{
   eo_do(_concrete_eo_ptr(), ::efl_vg_shape_fill_set(f_));
}

inline Efl_VG * efl::vg::shape::stroke_fill_get() const
{
   Efl_VG * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::efl_vg_shape_stroke_fill_get());
   return _tmp_ret;
}

inline void efl::vg::shape::stroke_fill_set(Efl_VG * f_) const
{
   eo_do(_concrete_eo_ptr(), ::efl_vg_shape_stroke_fill_set(f_));
}

inline Efl_VG * efl::vg::shape::stroke_marker_get() const
{
   Efl_VG * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::efl_vg_shape_stroke_marker_get());
   return _tmp_ret;
}

inline void efl::vg::shape::stroke_marker_set(Efl_VG * m_) const
{
   eo_do(_concrete_eo_ptr(), ::efl_vg_shape_stroke_marker_set(m_));
}

inline Efl_VG * eo_cxx::efl::vg::shape::fill_get() const
{
   Efl_VG * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::efl_vg_shape_fill_get());
   return _tmp_ret;
}

inline void eo_cxx::efl::vg::shape::fill_set(Efl_VG * f_) const
{
   eo_do(_concrete_eo_ptr(), ::efl_vg_shape_fill_set(f_));
}

inline Efl_VG * eo_cxx::efl::vg::shape::stroke_fill_get() const
{
   Efl_VG * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::efl_vg_shape_stroke_fill_get());
   return _tmp_ret;
}

inline void eo_cxx::efl::vg::shape::stroke_fill_set(Efl_VG * f_) const
{
   eo_do(_concrete_eo_ptr(), ::efl_vg_shape_stroke_fill_set(f_));
}

inline Efl_VG * eo_cxx::efl::vg::shape::stroke_marker_get() const
{
   Efl_VG * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::efl_vg_shape_stroke_marker_get());
   return _tmp_ret;
}

inline void eo_cxx::efl::vg::shape::stroke_marker_set(Efl_VG * m_) const
{
   eo_do(_concrete_eo_ptr(), ::efl_vg_shape_stroke_marker_set(m_));
}

inline ::eo_cxx::efl::vg::shape::operator ::efl::vg::shape() const
{
   return *static_cast<::efl::vg::shape const*>(static_cast<void const*>(this));
}

inline ::eo_cxx::efl::vg::shape::operator ::efl::vg::shape&()
{
   return *static_cast<::efl::vg::shape*>(static_cast<void*>(this));
}

inline ::eo_cxx::efl::vg::shape::operator ::efl::vg::shape const&() const
{
   return *static_cast<::efl::vg::shape const*>(static_cast<void const*>(this));
}

template <typename T>
Efl_VG * efl_vg_shape_fill_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->fill_get();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Efl_VG * _tmp_ret{};
         return _tmp_ret;
      }
}

template <typename T>
void efl_vg_shape_fill_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Efl_VG * f_)
{
   try
      {
         static_cast<T*>(self->this_)->fill_set(f_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
Efl_VG * efl_vg_shape_stroke_fill_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->stroke_fill_get();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Efl_VG * _tmp_ret{};
         return _tmp_ret;
      }
}

template <typename T>
void efl_vg_shape_stroke_fill_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Efl_VG * f_)
{
   try
      {
         static_cast<T*>(self->this_)->stroke_fill_set(f_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
Efl_VG * efl_vg_shape_stroke_marker_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->stroke_marker_get();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Efl_VG * _tmp_ret{};
         return _tmp_ret;
      }
}

template <typename T>
void efl_vg_shape_stroke_marker_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Efl_VG * m_)
{
   try
      {
         static_cast<T*>(self->this_)->stroke_marker_set(m_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

namespace efl { namespace eo { namespace detail {

template<>
struct operations< ::efl::vg::shape >
{
   template <typename T>
   struct type
         : virtual operations< ::efl::vg::base >::template type<T>
         , virtual operations< ::efl::gfx::shape >::template type<T>
   {
      virtual Efl_VG * fill_get()
      {
         Efl_VG * _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::efl_vg_shape_fill_get());
            return _tmp_ret;
      }

      virtual void fill_set(Efl_VG * f_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::efl_vg_shape_fill_set(f_));
      }

      virtual Efl_VG * stroke_fill_get()
      {
         Efl_VG * _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::efl_vg_shape_stroke_fill_get());
            return _tmp_ret;
      }

      virtual void stroke_fill_set(Efl_VG * f_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::efl_vg_shape_stroke_fill_set(f_));
      }

      virtual Efl_VG * stroke_marker_get()
      {
         Efl_VG * _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::efl_vg_shape_stroke_marker_get());
            return _tmp_ret;
      }

      virtual void stroke_marker_set(Efl_VG * m_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::efl_vg_shape_stroke_marker_set(m_));
      }

   };
};


template<>
struct operation_description_class_size< ::efl::vg::shape >
{
   static constexpr int value = 
#if defined(SHAPE_PROTECTED) && defined(SHAPE_BETA)
      6
#elif defined(SHAPE_PROTECTED)
      6
#elif defined(SHAPE_BETA)
      6
#else
      6
#endif
      + operation_description_class_size<::efl::vg::base >::value      + operation_description_class_size<::efl::gfx::shape >::value;
};

template <typename T>
int initialize_operation_description(::efl::eo::detail::tag<::efl::vg::shape>
                                 , Eo_Op_Description* ops)
{
   int i = 0;
   (void)i;
   (void)ops;
   ops[i].func = reinterpret_cast<void*>(& ::efl_vg_shape_fill_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::efl_vg_shape_fill_get);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::efl_vg_shape_fill_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::efl_vg_shape_fill_set);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::efl_vg_shape_stroke_fill_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::efl_vg_shape_stroke_fill_get);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::efl_vg_shape_stroke_fill_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::efl_vg_shape_stroke_fill_set);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::efl_vg_shape_stroke_marker_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::efl_vg_shape_stroke_marker_get);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::efl_vg_shape_stroke_marker_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::efl_vg_shape_stroke_marker_set);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   initialize_operation_description<T>(::efl::eo::detail::tag<::efl::vg::base>(), &ops[operation_description_class_size< ::efl::vg::shape >::value]);
   initialize_operation_description<T>(::efl::eo::detail::tag<::efl::gfx::shape>(), &ops[operation_description_class_size< ::efl::vg::shape >::value + operation_description_class_size<::efl::vg::base>::value]);
   return 0;
}
inline Eo_Class const* get_eo_class(tag<::efl::vg::shape>)
{
   return (EFL_VG_SHAPE_CLASS);
}

} } }

/// @endcond

