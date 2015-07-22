/// @cond EO_CXX_EO_IMPL

inline void efl::gfx::gradient::base::stop_get(const Efl_Gfx_Gradient_Stop ** colors_, unsigned int* length_) const
{
   eo_do(_concrete_eo_ptr(), ::efl_gfx_gradient_stop_get(colors_, length_));
}

inline void efl::gfx::gradient::base::stop_set(const Efl_Gfx_Gradient_Stop * colors_, unsigned int length_) const
{
   eo_do(_concrete_eo_ptr(), ::efl_gfx_gradient_stop_set(colors_, length_));
}

inline Efl_Gfx_Gradient_Spread efl::gfx::gradient::base::spread_get() const
{
   Efl_Gfx_Gradient_Spread _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::efl_gfx_gradient_spread_get());
   return _tmp_ret;
}

inline void efl::gfx::gradient::base::spread_set(Efl_Gfx_Gradient_Spread s_) const
{
   eo_do(_concrete_eo_ptr(), ::efl_gfx_gradient_spread_set(s_));
}

inline void eo_cxx::efl::gfx::gradient::base::stop_get(const Efl_Gfx_Gradient_Stop ** colors_, unsigned int* length_) const
{
   eo_do(_concrete_eo_ptr(), ::efl_gfx_gradient_stop_get(colors_, length_));
}

inline void eo_cxx::efl::gfx::gradient::base::stop_set(const Efl_Gfx_Gradient_Stop * colors_, unsigned int length_) const
{
   eo_do(_concrete_eo_ptr(), ::efl_gfx_gradient_stop_set(colors_, length_));
}

inline Efl_Gfx_Gradient_Spread eo_cxx::efl::gfx::gradient::base::spread_get() const
{
   Efl_Gfx_Gradient_Spread _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::efl_gfx_gradient_spread_get());
   return _tmp_ret;
}

inline void eo_cxx::efl::gfx::gradient::base::spread_set(Efl_Gfx_Gradient_Spread s_) const
{
   eo_do(_concrete_eo_ptr(), ::efl_gfx_gradient_spread_set(s_));
}

inline ::eo_cxx::efl::gfx::gradient::base::operator ::efl::gfx::gradient::base() const
{
   return *static_cast<::efl::gfx::gradient::base const*>(static_cast<void const*>(this));
}

inline ::eo_cxx::efl::gfx::gradient::base::operator ::efl::gfx::gradient::base&()
{
   return *static_cast<::efl::gfx::gradient::base*>(static_cast<void*>(this));
}

inline ::eo_cxx::efl::gfx::gradient::base::operator ::efl::gfx::gradient::base const&() const
{
   return *static_cast<::efl::gfx::gradient::base const*>(static_cast<void const*>(this));
}

template <typename T>
void efl_gfx_gradient_base_stop_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, const Efl_Gfx_Gradient_Stop ** colors_, unsigned int* length_)
{
   try
      {
         static_cast<T*>(self->this_)->stop_get(colors_, length_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void efl_gfx_gradient_base_stop_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, const Efl_Gfx_Gradient_Stop * colors_, unsigned int length_)
{
   try
      {
         static_cast<T*>(self->this_)->stop_set(colors_, length_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
Efl_Gfx_Gradient_Spread efl_gfx_gradient_base_spread_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->spread_get();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Efl_Gfx_Gradient_Spread _tmp_ret{};
         return _tmp_ret;
      }
}

template <typename T>
void efl_gfx_gradient_base_spread_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Efl_Gfx_Gradient_Spread s_)
{
   try
      {
         static_cast<T*>(self->this_)->spread_set(s_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

namespace efl { namespace eo { namespace detail {

template<>
struct operations< ::efl::gfx::gradient::base >
{
   template <typename T>
   struct type
   {
      virtual void stop_get(const Efl_Gfx_Gradient_Stop ** colors_, unsigned int* length_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::efl_gfx_gradient_stop_get(colors_, length_));
      }

      virtual void stop_set(const Efl_Gfx_Gradient_Stop * colors_, unsigned int length_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::efl_gfx_gradient_stop_set(colors_, length_));
      }

      virtual Efl_Gfx_Gradient_Spread spread_get()
      {
         Efl_Gfx_Gradient_Spread _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::efl_gfx_gradient_spread_get());
            return _tmp_ret;
      }

      virtual void spread_set(Efl_Gfx_Gradient_Spread s_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::efl_gfx_gradient_spread_set(s_));
      }

   };
};


template<>
struct operation_description_class_size< ::efl::gfx::gradient::base >
{
   static constexpr int value = 
#if defined(BASE_PROTECTED) && defined(BASE_BETA)
      4
#elif defined(BASE_PROTECTED)
      4
#elif defined(BASE_BETA)
      4
#else
      4
#endif
;
};

template <typename T>
int initialize_operation_description(::efl::eo::detail::tag<::efl::gfx::gradient::base>
                                 , Eo_Op_Description* ops)
{
   int i = 0;
   (void)i;
   (void)ops;
   ops[i].func = reinterpret_cast<void*>(& ::efl_gfx_gradient_base_stop_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::efl_gfx_gradient_stop_get);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::efl_gfx_gradient_base_stop_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::efl_gfx_gradient_stop_set);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::efl_gfx_gradient_base_spread_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::efl_gfx_gradient_spread_get);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::efl_gfx_gradient_base_spread_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::efl_gfx_gradient_spread_set);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   return 0;
}
inline Eo_Class const* get_eo_class(tag<::efl::gfx::gradient::base>)
{
   return (EFL_GFX_GRADIENT_BASE_INTERFACE);
}

} } }

/// @endcond

