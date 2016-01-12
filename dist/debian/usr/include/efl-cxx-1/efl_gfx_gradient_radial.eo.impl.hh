/// @cond EO_CXX_EO_IMPL

inline void efl::gfx::gradient::radial::center_get(double* x_, double* y_) const
{
   eo_do(_concrete_eo_ptr(), ::efl_gfx_gradient_radial_center_get(x_, y_));
}

inline void efl::gfx::gradient::radial::center_set(double x_, double y_) const
{
   eo_do(_concrete_eo_ptr(), ::efl_gfx_gradient_radial_center_set(x_, y_));
}

inline double efl::gfx::gradient::radial::radius_get() const
{
   double _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::efl_gfx_gradient_radial_radius_get());
   return _tmp_ret;
}

inline void efl::gfx::gradient::radial::radius_set(double r_) const
{
   eo_do(_concrete_eo_ptr(), ::efl_gfx_gradient_radial_radius_set(r_));
}

inline void efl::gfx::gradient::radial::focal_get(double* x_, double* y_) const
{
   eo_do(_concrete_eo_ptr(), ::efl_gfx_gradient_radial_focal_get(x_, y_));
}

inline void efl::gfx::gradient::radial::focal_set(double x_, double y_) const
{
   eo_do(_concrete_eo_ptr(), ::efl_gfx_gradient_radial_focal_set(x_, y_));
}

inline void eo_cxx::efl::gfx::gradient::radial::center_get(double* x_, double* y_) const
{
   eo_do(_concrete_eo_ptr(), ::efl_gfx_gradient_radial_center_get(x_, y_));
}

inline void eo_cxx::efl::gfx::gradient::radial::center_set(double x_, double y_) const
{
   eo_do(_concrete_eo_ptr(), ::efl_gfx_gradient_radial_center_set(x_, y_));
}

inline double eo_cxx::efl::gfx::gradient::radial::radius_get() const
{
   double _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::efl_gfx_gradient_radial_radius_get());
   return _tmp_ret;
}

inline void eo_cxx::efl::gfx::gradient::radial::radius_set(double r_) const
{
   eo_do(_concrete_eo_ptr(), ::efl_gfx_gradient_radial_radius_set(r_));
}

inline void eo_cxx::efl::gfx::gradient::radial::focal_get(double* x_, double* y_) const
{
   eo_do(_concrete_eo_ptr(), ::efl_gfx_gradient_radial_focal_get(x_, y_));
}

inline void eo_cxx::efl::gfx::gradient::radial::focal_set(double x_, double y_) const
{
   eo_do(_concrete_eo_ptr(), ::efl_gfx_gradient_radial_focal_set(x_, y_));
}

inline ::eo_cxx::efl::gfx::gradient::radial::operator ::efl::gfx::gradient::radial() const
{
   return *static_cast<::efl::gfx::gradient::radial const*>(static_cast<void const*>(this));
}

inline ::eo_cxx::efl::gfx::gradient::radial::operator ::efl::gfx::gradient::radial&()
{
   return *static_cast<::efl::gfx::gradient::radial*>(static_cast<void*>(this));
}

inline ::eo_cxx::efl::gfx::gradient::radial::operator ::efl::gfx::gradient::radial const&() const
{
   return *static_cast<::efl::gfx::gradient::radial const*>(static_cast<void const*>(this));
}

template <typename T>
void efl_gfx_gradient_radial_center_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, double* x_, double* y_)
{
   try
      {
         static_cast<T*>(self->this_)->center_get(x_, y_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void efl_gfx_gradient_radial_center_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, double x_, double y_)
{
   try
      {
         static_cast<T*>(self->this_)->center_set(x_, y_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
double efl_gfx_gradient_radial_radius_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->radius_get();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         double _tmp_ret{};
         return _tmp_ret;
      }
}

template <typename T>
void efl_gfx_gradient_radial_radius_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, double r_)
{
   try
      {
         static_cast<T*>(self->this_)->radius_set(r_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void efl_gfx_gradient_radial_focal_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, double* x_, double* y_)
{
   try
      {
         static_cast<T*>(self->this_)->focal_get(x_, y_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void efl_gfx_gradient_radial_focal_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, double x_, double y_)
{
   try
      {
         static_cast<T*>(self->this_)->focal_set(x_, y_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

namespace efl { namespace eo { namespace detail {

template<>
struct operations< ::efl::gfx::gradient::radial >
{
   template <typename T>
   struct type
         : virtual operations< ::efl::gfx::gradient::base >::template type<T>
   {
      virtual void center_get(double* x_, double* y_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::efl_gfx_gradient_radial_center_get(x_, y_));
      }

      virtual void center_set(double x_, double y_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::efl_gfx_gradient_radial_center_set(x_, y_));
      }

      virtual double radius_get()
      {
         double _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::efl_gfx_gradient_radial_radius_get());
            return _tmp_ret;
      }

      virtual void radius_set(double r_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::efl_gfx_gradient_radial_radius_set(r_));
      }

      virtual void focal_get(double* x_, double* y_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::efl_gfx_gradient_radial_focal_get(x_, y_));
      }

      virtual void focal_set(double x_, double y_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::efl_gfx_gradient_radial_focal_set(x_, y_));
      }

   };
};


template<>
struct operation_description_class_size< ::efl::gfx::gradient::radial >
{
   static constexpr int value = 
#if defined(RADIAL_PROTECTED) && defined(RADIAL_BETA)
      6
#elif defined(RADIAL_PROTECTED)
      6
#elif defined(RADIAL_BETA)
      6
#else
      6
#endif
      + operation_description_class_size<::efl::gfx::gradient::base >::value;
};

template <typename T>
int initialize_operation_description(::efl::eo::detail::tag<::efl::gfx::gradient::radial>
                                 , Eo_Op_Description* ops)
{
   int i = 0;
   (void)i;
   (void)ops;
   ops[i].func = reinterpret_cast<void*>(& ::efl_gfx_gradient_radial_center_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::efl_gfx_gradient_radial_center_get);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::efl_gfx_gradient_radial_center_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::efl_gfx_gradient_radial_center_set);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::efl_gfx_gradient_radial_radius_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::efl_gfx_gradient_radial_radius_get);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::efl_gfx_gradient_radial_radius_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::efl_gfx_gradient_radial_radius_set);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::efl_gfx_gradient_radial_focal_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::efl_gfx_gradient_radial_focal_get);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::efl_gfx_gradient_radial_focal_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::efl_gfx_gradient_radial_focal_set);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   initialize_operation_description<T>(::efl::eo::detail::tag<::efl::gfx::gradient::base>(), &ops[operation_description_class_size< ::efl::gfx::gradient::radial >::value]);
   return 0;
}
inline Eo_Class const* get_eo_class(tag<::efl::gfx::gradient::radial>)
{
   return (EFL_GFX_GRADIENT_RADIAL_INTERFACE);
}

} } }

/// @endcond

