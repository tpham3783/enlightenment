/// @cond EO_CXX_EO_IMPL

inline ::eo_cxx::ecore_audio_in_sndfile::operator ::ecore_audio_in_sndfile() const
{
   return *static_cast<::ecore_audio_in_sndfile const*>(static_cast<void const*>(this));
}

inline ::eo_cxx::ecore_audio_in_sndfile::operator ::ecore_audio_in_sndfile&()
{
   return *static_cast<::ecore_audio_in_sndfile*>(static_cast<void*>(this));
}

inline ::eo_cxx::ecore_audio_in_sndfile::operator ::ecore_audio_in_sndfile const&() const
{
   return *static_cast<::ecore_audio_in_sndfile const*>(static_cast<void const*>(this));
}

namespace efl { namespace eo { namespace detail {

template<>
struct operations< ::ecore_audio_in_sndfile >
{
   template <typename T>
   struct type
         : virtual operations< ::ecore_audio_in >::template type<T>
   {
   };
};


template<>
struct operation_description_class_size< ::ecore_audio_in_sndfile >
{
   static constexpr int value = 
#if defined(ECORE_AUDIO_IN_SNDFILE_PROTECTED) && defined(ECORE_AUDIO_IN_SNDFILE_BETA)
      0
#elif defined(ECORE_AUDIO_IN_SNDFILE_PROTECTED)
      0
#elif defined(ECORE_AUDIO_IN_SNDFILE_BETA)
      0
#else
      0
#endif
      + operation_description_class_size<::ecore_audio_in >::value;
};

template <typename T>
int initialize_operation_description(::efl::eo::detail::tag<::ecore_audio_in_sndfile>
                                 , Eo_Op_Description* ops)
{
   int i = 0;
   (void)i;
   (void)ops;
   initialize_operation_description<T>(::efl::eo::detail::tag<::ecore_audio_in>(), &ops[operation_description_class_size< ::ecore_audio_in_sndfile >::value]);
   return 0;
}
inline Eo_Class const* get_eo_class(tag<::ecore_audio_in_sndfile>)
{
   return (ECORE_AUDIO_IN_SNDFILE_CLASS);
}

} } }

/// @endcond

