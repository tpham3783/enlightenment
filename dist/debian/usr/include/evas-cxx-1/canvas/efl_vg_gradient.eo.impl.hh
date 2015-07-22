/// @cond EO_CXX_EO_IMPL

inline ::eo_cxx::efl::vg::gradient::operator ::efl::vg::gradient() const
{
   return *static_cast<::efl::vg::gradient const*>(static_cast<void const*>(this));
}

inline ::eo_cxx::efl::vg::gradient::operator ::efl::vg::gradient&()
{
   return *static_cast<::efl::vg::gradient*>(static_cast<void*>(this));
}

inline ::eo_cxx::efl::vg::gradient::operator ::efl::vg::gradient const&() const
{
   return *static_cast<::efl::vg::gradient const*>(static_cast<void const*>(this));
}

namespace efl { namespace eo { namespace detail {

template<>
struct operations< ::efl::vg::gradient >
{
   template <typename T>
   struct type
         : virtual operations< ::efl::vg::base >::template type<T>
         , virtual operations< ::efl::gfx::gradient::base >::template type<T>
   {
   };
};


template<>
struct operation_description_class_size< ::efl::vg::gradient >
{
   static constexpr int value = 
#if defined(GRADIENT_PROTECTED) && defined(GRADIENT_BETA)
      0
#elif defined(GRADIENT_PROTECTED)
      0
#elif defined(GRADIENT_BETA)
      0
#else
      0
#endif
      + operation_description_class_size<::efl::vg::base >::value      + operation_description_class_size<::efl::gfx::gradient::base >::value;
};

template <typename T>
int initialize_operation_description(::efl::eo::detail::tag<::efl::vg::gradient>
                                 , Eo_Op_Description* ops)
{
   int i = 0;
   (void)i;
   (void)ops;
   initialize_operation_description<T>(::efl::eo::detail::tag<::efl::vg::base>(), &ops[operation_description_class_size< ::efl::vg::gradient >::value]);
   initialize_operation_description<T>(::efl::eo::detail::tag<::efl::gfx::gradient::base>(), &ops[operation_description_class_size< ::efl::vg::gradient >::value + operation_description_class_size<::efl::vg::base>::value]);
   return 0;
}
inline Eo_Class const* get_eo_class(tag<::efl::vg::gradient>)
{
   return (EFL_VG_GRADIENT_CLASS);
}

} } }

/// @endcond

