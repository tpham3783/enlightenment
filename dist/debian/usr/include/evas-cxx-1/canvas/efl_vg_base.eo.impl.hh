/// @cond EO_CXX_EO_IMPL

inline void efl::vg::base::bounds_get(Eina_Rectangle* r_) const
{
   eo_do(_concrete_eo_ptr(), ::efl_vg_bounds_get(r_));
}

inline bool efl::vg::base::interpolate(::efl::vg::base from_, ::efl::vg::base to_, double pos_map_) const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::efl_vg_interpolate(::efl::eolian::to_c(from_), ::efl::eolian::to_c(to_), pos_map_));
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline void efl::vg::base::dup(::efl::vg::base from_) const
{
   eo_do(_concrete_eo_ptr(), ::efl_vg_dup(::efl::eolian::to_c(from_)));
}

inline ::efl::eina::string_view efl::vg::base::name_get() const
{
   const char * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::efl_vg_name_get());
   return ::efl::eolian::to_cxx<::efl::eina::string_view>(_tmp_ret, std::tuple<std::false_type>());
}

inline void efl::vg::base::name_set(::efl::eina::string_view name_) const
{
   eo_do(_concrete_eo_ptr(), ::efl_vg_name_set(::efl::eolian::to_c(name_)));
}

inline const Eina_Matrix3 * efl::vg::base::transformation_get() const
{
   const Eina_Matrix3 * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::efl_vg_transformation_get());
   return _tmp_ret;
}

inline void efl::vg::base::transformation_set(const Eina_Matrix3 * m_) const
{
   eo_do(_concrete_eo_ptr(), ::efl_vg_transformation_set(m_));
}

inline void efl::vg::base::origin_get(double* x_, double* y_) const
{
   eo_do(_concrete_eo_ptr(), ::efl_vg_origin_get(x_, y_));
}

inline void efl::vg::base::origin_set(double x_, double y_) const
{
   eo_do(_concrete_eo_ptr(), ::efl_vg_origin_set(x_, y_));
}

inline Efl_VG * efl::vg::base::mask_get() const
{
   Efl_VG * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::efl_vg_mask_get());
   return _tmp_ret;
}

inline void efl::vg::base::mask_set(Efl_VG * m_) const
{
   eo_do(_concrete_eo_ptr(), ::efl_vg_mask_set(m_));
}

inline void eo_cxx::efl::vg::base::bounds_get(Eina_Rectangle* r_) const
{
   eo_do(_concrete_eo_ptr(), ::efl_vg_bounds_get(r_));
}

inline bool eo_cxx::efl::vg::base::interpolate(::efl::vg::base from_, ::efl::vg::base to_, double pos_map_) const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::efl_vg_interpolate(::efl::eolian::to_c(from_), ::efl::eolian::to_c(to_), pos_map_));
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline void eo_cxx::efl::vg::base::dup(::efl::vg::base from_) const
{
   eo_do(_concrete_eo_ptr(), ::efl_vg_dup(::efl::eolian::to_c(from_)));
}

inline ::efl::eina::string_view eo_cxx::efl::vg::base::name_get() const
{
   const char * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::efl_vg_name_get());
   return ::efl::eolian::to_cxx<::efl::eina::string_view>(_tmp_ret, std::tuple<std::false_type>());
}

inline void eo_cxx::efl::vg::base::name_set(::efl::eina::string_view name_) const
{
   eo_do(_concrete_eo_ptr(), ::efl_vg_name_set(::efl::eolian::to_c(name_)));
}

inline const Eina_Matrix3 * eo_cxx::efl::vg::base::transformation_get() const
{
   const Eina_Matrix3 * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::efl_vg_transformation_get());
   return _tmp_ret;
}

inline void eo_cxx::efl::vg::base::transformation_set(const Eina_Matrix3 * m_) const
{
   eo_do(_concrete_eo_ptr(), ::efl_vg_transformation_set(m_));
}

inline void eo_cxx::efl::vg::base::origin_get(double* x_, double* y_) const
{
   eo_do(_concrete_eo_ptr(), ::efl_vg_origin_get(x_, y_));
}

inline void eo_cxx::efl::vg::base::origin_set(double x_, double y_) const
{
   eo_do(_concrete_eo_ptr(), ::efl_vg_origin_set(x_, y_));
}

inline Efl_VG * eo_cxx::efl::vg::base::mask_get() const
{
   Efl_VG * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::efl_vg_mask_get());
   return _tmp_ret;
}

inline void eo_cxx::efl::vg::base::mask_set(Efl_VG * m_) const
{
   eo_do(_concrete_eo_ptr(), ::efl_vg_mask_set(m_));
}

inline ::eo_cxx::efl::vg::base::operator ::efl::vg::base() const
{
   return *static_cast<::efl::vg::base const*>(static_cast<void const*>(this));
}

inline ::eo_cxx::efl::vg::base::operator ::efl::vg::base&()
{
   return *static_cast<::efl::vg::base*>(static_cast<void*>(this));
}

inline ::eo_cxx::efl::vg::base::operator ::efl::vg::base const&() const
{
   return *static_cast<::efl::vg::base const*>(static_cast<void const*>(this));
}

template <typename T>
void efl_vg_base_bounds_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Eina_Rectangle* r_)
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
bool efl_vg_base_interpolate_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, const Efl_VG_Base * from_, const Efl_VG_Base * to_, double pos_map_)
{
   try
      {
         return static_cast<T*>(self->this_)->interpolate(::efl::eolian::to_cxx<::efl::vg::base>(from_, std::tuple<std::false_type>()), ::efl::eolian::to_cxx<::efl::vg::base>(to_, std::tuple<std::false_type>()), pos_map_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Eina_Bool _tmp_ret{};
         return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }
}

template <typename T>
void efl_vg_base_dup_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, const Efl_VG_Base * from_)
{
   try
      {
         static_cast<T*>(self->this_)->dup(::efl::eolian::to_cxx<::efl::vg::base>(from_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
::efl::eina::string_view efl_vg_base_name_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->name_get();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         const char * _tmp_ret{};
         return ::efl::eolian::to_cxx<::efl::eina::string_view>(_tmp_ret, std::tuple<std::false_type>());
      }
}

template <typename T>
void efl_vg_base_name_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, const char * name_)
{
   try
      {
         static_cast<T*>(self->this_)->name_set(::efl::eolian::to_cxx<::efl::eina::string_view>(name_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
const Eina_Matrix3 * efl_vg_base_transformation_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->transformation_get();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         const Eina_Matrix3 * _tmp_ret{};
         return _tmp_ret;
      }
}

template <typename T>
void efl_vg_base_transformation_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, const Eina_Matrix3 * m_)
{
   try
      {
         static_cast<T*>(self->this_)->transformation_set(m_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void efl_vg_base_origin_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, double* x_, double* y_)
{
   try
      {
         static_cast<T*>(self->this_)->origin_get(x_, y_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void efl_vg_base_origin_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, double x_, double y_)
{
   try
      {
         static_cast<T*>(self->this_)->origin_set(x_, y_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
Efl_VG * efl_vg_base_mask_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->mask_get();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Efl_VG * _tmp_ret{};
         return _tmp_ret;
      }
}

template <typename T>
void efl_vg_base_mask_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Efl_VG * m_)
{
   try
      {
         static_cast<T*>(self->this_)->mask_set(m_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

namespace efl { namespace eo { namespace detail {

template<>
struct operations< ::efl::vg::base >
{
   template <typename T>
   struct type
         : virtual operations< ::eo::base >::template type<T>
         , virtual operations< ::efl::gfx::base >::template type<T>
         , virtual operations< ::efl::gfx::stack >::template type<T>
   {
      virtual void bounds_get(Eina_Rectangle* r_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::efl_vg_bounds_get(r_));
      }

      virtual bool interpolate(::efl::vg::base from_, ::efl::vg::base to_, double pos_map_)
      {
         Eina_Bool _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::efl_vg_interpolate(::efl::eolian::to_c(from_), ::efl::eolian::to_c(to_), pos_map_));
            return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }

      virtual void dup(::efl::vg::base from_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::efl_vg_dup(::efl::eolian::to_c(from_)));
      }

      virtual ::efl::eina::string_view name_get()
      {
         const char * _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::efl_vg_name_get());
            return ::efl::eolian::to_cxx<::efl::eina::string_view>(_tmp_ret, std::tuple<std::false_type>());
      }

      virtual void name_set(::efl::eina::string_view name_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::efl_vg_name_set(::efl::eolian::to_c(name_)));
      }

      virtual const Eina_Matrix3 * transformation_get()
      {
         const Eina_Matrix3 * _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::efl_vg_transformation_get());
            return _tmp_ret;
      }

      virtual void transformation_set(const Eina_Matrix3 * m_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::efl_vg_transformation_set(m_));
      }

      virtual void origin_get(double* x_, double* y_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::efl_vg_origin_get(x_, y_));
      }

      virtual void origin_set(double x_, double y_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::efl_vg_origin_set(x_, y_));
      }

      virtual Efl_VG * mask_get()
      {
         Efl_VG * _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::efl_vg_mask_get());
            return _tmp_ret;
      }

      virtual void mask_set(Efl_VG * m_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::efl_vg_mask_set(m_));
      }

   };
};


template<>
struct operation_description_class_size< ::efl::vg::base >
{
   static constexpr int value = 
#if defined(BASE_PROTECTED) && defined(BASE_BETA)
      11
#elif defined(BASE_PROTECTED)
      11
#elif defined(BASE_BETA)
      11
#else
      11
#endif
      + operation_description_class_size<::eo::base >::value      + operation_description_class_size<::efl::gfx::base >::value      + operation_description_class_size<::efl::gfx::stack >::value;
};

template <typename T>
int initialize_operation_description(::efl::eo::detail::tag<::efl::vg::base>
                                 , Eo_Op_Description* ops)
{
   int i = 0;
   (void)i;
   (void)ops;
   ops[i].func = reinterpret_cast<void*>(& ::efl_vg_base_bounds_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::efl_vg_bounds_get);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::efl_vg_base_interpolate_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::efl_vg_interpolate);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::efl_vg_base_dup_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::efl_vg_dup);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::efl_vg_base_name_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::efl_vg_name_get);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::efl_vg_base_name_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::efl_vg_name_set);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::efl_vg_base_transformation_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::efl_vg_transformation_get);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::efl_vg_base_transformation_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::efl_vg_transformation_set);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::efl_vg_base_origin_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::efl_vg_origin_get);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::efl_vg_base_origin_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::efl_vg_origin_set);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::efl_vg_base_mask_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::efl_vg_mask_get);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::efl_vg_base_mask_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::efl_vg_mask_set);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   initialize_operation_description<T>(::efl::eo::detail::tag<::eo::base>(), &ops[operation_description_class_size< ::efl::vg::base >::value]);
   initialize_operation_description<T>(::efl::eo::detail::tag<::efl::gfx::base>(), &ops[operation_description_class_size< ::efl::vg::base >::value + operation_description_class_size<::eo::base>::value]);
   initialize_operation_description<T>(::efl::eo::detail::tag<::efl::gfx::stack>(), &ops[operation_description_class_size< ::efl::vg::base >::value + operation_description_class_size<::eo::base>::value + operation_description_class_size<::efl::gfx::base>::value]);
   return 0;
}
inline Eo_Class const* get_eo_class(tag<::efl::vg::base>)
{
   return (EFL_VG_BASE_CLASS);
}

} } }

/// @endcond

