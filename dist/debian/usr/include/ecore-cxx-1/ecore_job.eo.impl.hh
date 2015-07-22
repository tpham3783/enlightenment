/// @cond EO_CXX_EO_IMPL

template <typename F_func_>
inline ::ecore::job::_c_constructor<F_func_> ecore::job::constructor(F_func_ && func_)
{
   return _c_constructor<F_func_>(std::forward<F_func_>(func_));
}

inline ::eo_cxx::ecore::job::operator ::ecore::job() const
{
   return *static_cast<::ecore::job const*>(static_cast<void const*>(this));
}

inline ::eo_cxx::ecore::job::operator ::ecore::job&()
{
   return *static_cast<::ecore::job*>(static_cast<void*>(this));
}

inline ::eo_cxx::ecore::job::operator ::ecore::job const&() const
{
   return *static_cast<::ecore::job const*>(static_cast<void const*>(this));
}

namespace efl { namespace eo { namespace detail {

template<>
struct operations< ::ecore::job >
{
   template <typename T>
   struct type
         : virtual operations< ::eo::base >::template type<T>
   {
   };
};


template<>
struct operation_description_class_size< ::ecore::job >
{
   static constexpr int value = 
#if defined(JOB_PROTECTED) && defined(JOB_BETA)
      0
#elif defined(JOB_PROTECTED)
      0
#elif defined(JOB_BETA)
      0
#else
      0
#endif
      + operation_description_class_size<::eo::base >::value;
};

template <typename T>
int initialize_operation_description(::efl::eo::detail::tag<::ecore::job>
                                 , Eo_Op_Description* ops)
{
   int i = 0;
   (void)i;
   (void)ops;
   initialize_operation_description<T>(::efl::eo::detail::tag<::eo::base>(), &ops[operation_description_class_size< ::ecore::job >::value]);
   return 0;
}
inline Eo_Class const* get_eo_class(tag<::ecore::job>)
{
   return (ECORE_JOB_CLASS);
}

} } }

/// @endcond

