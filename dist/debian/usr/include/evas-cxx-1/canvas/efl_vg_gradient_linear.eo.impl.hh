/// @cond EO_CXX_EO_IMPL

inline ::eo_cxx::efl::vg::gradient_linear::operator ::efl::vg::gradient_linear() const
{
   return *static_cast<::efl::vg::gradient_linear const*>(static_cast<void const*>(this));
}

inline ::eo_cxx::efl::vg::gradient_linear::operator ::efl::vg::gradient_linear&()
{
   return *static_cast<::efl::vg::gradient_linear*>(static_cast<void*>(this));
}

inline ::eo_cxx::efl::vg::gradient_linear::operator ::efl::vg::gradient_linear const&() const
{
   return *static_cast<::efl::vg::gradient_linear const*>(static_cast<void const*>(this));
}

namespace efl { namespace eo { namespace detail {

template<>
struct operations< ::efl::vg::gradient_linear >
{
   template <typename T>
   struct type
         : virtual operations< ::efl::vg::gradient >::template type<T>
         , virtual operations< ::efl::gfx::gradient::linear >::template type<T>
   {
   };
};


template<>
struct operation_description_class_size< ::efl::vg::gradient_linear >
{
   static constexpr int value = 
#if defined(GRADIENT_LINEAR_PROTECTED) && defined(GRADIENT_LINEAR_BETA)
      0
#elif defined(GRADIENT_LINEAR_PROTECTED)
      0
#elif defined(GRADIENT_LINEAR_BETA)
      0
#else
      0
#endif
      + operation_description_class_size<::efl::vg::gradient >::value      + operation_description_class_size<::efl::gfx::gradient::linear >::value;
};

template <typename T>
int initialize_operation_description(::efl::eo::detail::tag<::efl::vg::gradient_linear>
                                 , Eo_Op_Description* ops)
{
   int i = 0;
   (void)i;
   (void)ops;
   initialize_operation_description<T>(::efl::eo::detail::tag<::efl::vg::gradient>(), &ops[operation_description_class_size< ::efl::vg::gradient_linear >::value]);
   initialize_operation_description<T>(::efl::eo::detail::tag<::efl::gfx::gradient::linear>(), &ops[operation_description_class_size< ::efl::vg::gradient_linear >::value + operation_description_class_size<::efl::vg::gradient>::value]);
   return 0;
}
inline Eo_Class const* get_eo_class(tag<::efl::vg::gradient_linear>)
{
   return (EFL_VG_GRADIENT_LINEAR_CLASS);
}

} } }

/// @endcond

