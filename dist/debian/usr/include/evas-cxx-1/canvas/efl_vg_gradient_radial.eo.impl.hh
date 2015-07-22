/// @cond EO_CXX_EO_IMPL

inline ::eo_cxx::efl::vg::gradient_radial::operator ::efl::vg::gradient_radial() const
{
   return *static_cast<::efl::vg::gradient_radial const*>(static_cast<void const*>(this));
}

inline ::eo_cxx::efl::vg::gradient_radial::operator ::efl::vg::gradient_radial&()
{
   return *static_cast<::efl::vg::gradient_radial*>(static_cast<void*>(this));
}

inline ::eo_cxx::efl::vg::gradient_radial::operator ::efl::vg::gradient_radial const&() const
{
   return *static_cast<::efl::vg::gradient_radial const*>(static_cast<void const*>(this));
}

namespace efl { namespace eo { namespace detail {

template<>
struct operations< ::efl::vg::gradient_radial >
{
   template <typename T>
   struct type
         : virtual operations< ::efl::vg::gradient >::template type<T>
         , virtual operations< ::efl::gfx::gradient::radial >::template type<T>
   {
   };
};


template<>
struct operation_description_class_size< ::efl::vg::gradient_radial >
{
   static constexpr int value = 
#if defined(GRADIENT_RADIAL_PROTECTED) && defined(GRADIENT_RADIAL_BETA)
      0
#elif defined(GRADIENT_RADIAL_PROTECTED)
      0
#elif defined(GRADIENT_RADIAL_BETA)
      0
#else
      0
#endif
      + operation_description_class_size<::efl::vg::gradient >::value      + operation_description_class_size<::efl::gfx::gradient::radial >::value;
};

template <typename T>
int initialize_operation_description(::efl::eo::detail::tag<::efl::vg::gradient_radial>
                                 , Eo_Op_Description* ops)
{
   int i = 0;
   (void)i;
   (void)ops;
   initialize_operation_description<T>(::efl::eo::detail::tag<::efl::vg::gradient>(), &ops[operation_description_class_size< ::efl::vg::gradient_radial >::value]);
   initialize_operation_description<T>(::efl::eo::detail::tag<::efl::gfx::gradient::radial>(), &ops[operation_description_class_size< ::efl::vg::gradient_radial >::value + operation_description_class_size<::efl::vg::gradient>::value]);
   return 0;
}
inline Eo_Class const* get_eo_class(tag<::efl::vg::gradient_radial>)
{
   return (EFL_VG_GRADIENT_RADIAL_CLASS);
}

} } }

/// @endcond

