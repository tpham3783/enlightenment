/// @cond EO_CXX_EO_IMPL

inline ::eo_cxx::eo::abstract_class::operator ::eo::abstract_class() const
{
   return *static_cast<::eo::abstract_class const*>(static_cast<void const*>(this));
}

inline ::eo_cxx::eo::abstract_class::operator ::eo::abstract_class&()
{
   return *static_cast<::eo::abstract_class*>(static_cast<void*>(this));
}

inline ::eo_cxx::eo::abstract_class::operator ::eo::abstract_class const&() const
{
   return *static_cast<::eo::abstract_class const*>(static_cast<void const*>(this));
}

namespace efl { namespace eo { namespace detail {

template<>
struct operations< ::eo::abstract_class >
{
   template <typename T>
   struct type
   {
   };
};


template<>
struct operation_description_class_size< ::eo::abstract_class >
{
   static constexpr int value = 
#if defined(ABSTRACT_CLASS_PROTECTED) && defined(ABSTRACT_CLASS_BETA)
      0
#elif defined(ABSTRACT_CLASS_PROTECTED)
      0
#elif defined(ABSTRACT_CLASS_BETA)
      0
#else
      0
#endif
;
};

template <typename T>
int initialize_operation_description(::efl::eo::detail::tag<::eo::abstract_class>
                                 , Eo_Op_Description* ops)
{
   int i = 0;
   (void)i;
   (void)ops;
   return 0;
}
inline Eo_Class const* get_eo_class(tag<::eo::abstract_class>)
{
   return (EO_ABSTRACT_CLASS_CLASS);
}

} } }

/// @endcond

