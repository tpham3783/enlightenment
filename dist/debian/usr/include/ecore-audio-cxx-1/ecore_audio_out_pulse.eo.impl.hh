/// @cond EO_CXX_EO_IMPL

inline ::eo_cxx::ecore_audio_out_pulse::operator ::ecore_audio_out_pulse() const
{
   return *static_cast<::ecore_audio_out_pulse const*>(static_cast<void const*>(this));
}

inline ::eo_cxx::ecore_audio_out_pulse::operator ::ecore_audio_out_pulse&()
{
   return *static_cast<::ecore_audio_out_pulse*>(static_cast<void*>(this));
}

inline ::eo_cxx::ecore_audio_out_pulse::operator ::ecore_audio_out_pulse const&() const
{
   return *static_cast<::ecore_audio_out_pulse const*>(static_cast<void const*>(this));
}

namespace efl { namespace eo { namespace detail {

template<>
struct operations< ::ecore_audio_out_pulse >
{
   template <typename T>
   struct type
         : virtual operations< ::ecore_audio_out >::template type<T>
   {
   };
};


template<>
struct operation_description_class_size< ::ecore_audio_out_pulse >
{
   static constexpr int value = 
#if defined(ECORE_AUDIO_OUT_PULSE_PROTECTED) && defined(ECORE_AUDIO_OUT_PULSE_BETA)
      0
#elif defined(ECORE_AUDIO_OUT_PULSE_PROTECTED)
      0
#elif defined(ECORE_AUDIO_OUT_PULSE_BETA)
      0
#else
      0
#endif
      + operation_description_class_size<::ecore_audio_out >::value;
};

template <typename T>
int initialize_operation_description(::efl::eo::detail::tag<::ecore_audio_out_pulse>
                                 , Eo_Op_Description* ops)
{
   int i = 0;
   (void)i;
   (void)ops;
   initialize_operation_description<T>(::efl::eo::detail::tag<::ecore_audio_out>(), &ops[operation_description_class_size< ::ecore_audio_out_pulse >::value]);
   return 0;
}
inline Eo_Class const* get_eo_class(tag<::ecore_audio_out_pulse>)
{
   return (ECORE_AUDIO_OUT_PULSE_CLASS);
}

} } }

/// @endcond

