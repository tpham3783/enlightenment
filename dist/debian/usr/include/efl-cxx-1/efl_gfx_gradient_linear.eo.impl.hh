/// @cond EO_CXX_EO_IMPL

inline void efl::gfx::gradient::linear::start_get(double* x_, double* y_) const
{
   eo_do(_concrete_eo_ptr(), ::efl_gfx_gradient_linear_start_get(x_, y_));
}

inline void efl::gfx::gradient::linear::start_set(double x_, double y_) const
{
   eo_do(_concrete_eo_ptr(), ::efl_gfx_gradient_linear_start_set(x_, y_));
}

inline void efl::gfx::gradient::linear::end_get(double* x_, double* y_) const
{
   eo_do(_concrete_eo_ptr(), ::efl_gfx_gradient_linear_end_get(x_, y_));
}

inline void efl::gfx::gradient::linear::end_set(double x_, double y_) const
{
   eo_do(_concrete_eo_ptr(), ::efl_gfx_gradient_linear_end_set(x_, y_));
}

inline void eo_cxx::efl::gfx::gradient::linear::start_get(double* x_, double* y_) const
{
   eo_do(_concrete_eo_ptr(), ::efl_gfx_gradient_linear_start_get(x_, y_));
}

inline void eo_cxx::efl::gfx::gradient::linear::start_set(double x_, double y_) const
{
   eo_do(_concrete_eo_ptr(), ::efl_gfx_gradient_linear_start_set(x_, y_));
}

inline void eo_cxx::efl::gfx::gradient::linear::end_get(double* x_, double* y_) const
{
   eo_do(_concrete_eo_ptr(), ::efl_gfx_gradient_linear_end_get(x_, y_));
}

inline void eo_cxx::efl::gfx::gradient::linear::end_set(double x_, double y_) const
{
   eo_do(_concrete_eo_ptr(), ::efl_gfx_gradient_linear_end_set(x_, y_));
}

inline ::eo_cxx::efl::gfx::gradient::linear::operator ::efl::gfx::gradient::linear() const
{
   return *static_cast<::efl::gfx::gradient::linear const*>(static_cast<void const*>(this));
}

inline ::eo_cxx::efl::gfx::gradient::linear::operator ::efl::gfx::gradient::linear&()
{
   return *static_cast<::efl::gfx::gradient::linear*>(static_cast<void*>(this));
}

inline ::eo_cxx::efl::gfx::gradient::linear::operator ::efl::gfx::gradient::linear const&() const
{
   return *static_cast<::efl::gfx::gradient::linear const*>(static_cast<void const*>(this));
}

template <typename T>
void efl_gfx_gradient_linear_start_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, double* x_, double* y_)
{
   try
      {
         static_cast<T*>(self->this_)->start_get(x_, y_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void efl_gfx_gradient_linear_start_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, double x_, double y_)
{
   try
      {
         static_cast<T*>(self->this_)->start_set(x_, y_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void efl_gfx_gradient_linear_end_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, double* x_, double* y_)
{
   try
      {
         static_cast<T*>(self->this_)->end_get(x_, y_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void efl_gfx_gradient_linear_end_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, double x_, double y_)
{
   try
      {
         static_cast<T*>(self->this_)->end_set(x_, y_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

namespace efl { namespace eo { namespace detail {

template<>
struct operations< ::efl::gfx::gradient::linear >
{
   template <typename T>
   struct type
         : virtual operations< ::efl::gfx::gradient::base >::template type<T>
   {
      virtual void start_get(double* x_, double* y_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::efl_gfx_gradient_linear_start_get(x_, y_));
      }

      virtual void start_set(double x_, double y_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::efl_gfx_gradient_linear_start_set(x_, y_));
      }

      virtual void end_get(double* x_, double* y_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::efl_gfx_gradient_linear_end_get(x_, y_));
      }

      virtual void end_set(double x_, double y_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::efl_gfx_gradient_linear_end_set(x_, y_));
      }

   };
};


template<>
struct operation_description_class_size< ::efl::gfx::gradient::linear >
{
   static constexpr int value = 
#if defined(LINEAR_PROTECTED) && defined(LINEAR_BETA)
      4
#elif defined(LINEAR_PROTECTED)
      4
#elif defined(LINEAR_BETA)
      4
#else
      4
#endif
      + operation_description_class_size<::efl::gfx::gradient::base >::value;
};

template <typename T>
int initialize_operation_description(::efl::eo::detail::tag<::efl::gfx::gradient::linear>
                                 , Eo_Op_Description* ops)
{
   int i = 0;
   (void)i;
   (void)ops;
   ops[i].func = reinterpret_cast<void*>(& ::efl_gfx_gradient_linear_start_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::efl_gfx_gradient_linear_start_get);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::efl_gfx_gradient_linear_start_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::efl_gfx_gradient_linear_start_set);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::efl_gfx_gradient_linear_end_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::efl_gfx_gradient_linear_end_get);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::efl_gfx_gradient_linear_end_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::efl_gfx_gradient_linear_end_set);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   initialize_operation_description<T>(::efl::eo::detail::tag<::efl::gfx::gradient::base>(), &ops[operation_description_class_size< ::efl::gfx::gradient::linear >::value]);
   return 0;
}
inline Eo_Class const* get_eo_class(tag<::efl::gfx::gradient::linear>)
{
   return (EFL_GFX_GRADIENT_LINEAR_INTERFACE);
}

} } }

/// @endcond

