/// @cond EO_CXX_EO_IMPL

template <typename F_func_>
inline ::ecore::idle::exiter::_c_constructor<F_func_> ecore::idle::exiter::constructor(F_func_ && func_)
{
   return _c_constructor<F_func_>(std::forward<F_func_>(func_));
}

inline ::eo_cxx::ecore::idle::exiter::operator ::ecore::idle::exiter() const
{
   return *static_cast<::ecore::idle::exiter const*>(static_cast<void const*>(this));
}

inline ::eo_cxx::ecore::idle::exiter::operator ::ecore::idle::exiter&()
{
   return *static_cast<::ecore::idle::exiter*>(static_cast<void*>(this));
}

inline ::eo_cxx::ecore::idle::exiter::operator ::ecore::idle::exiter const&() const
{
   return *static_cast<::ecore::idle::exiter const*>(static_cast<void const*>(this));
}

namespace efl { namespace eo { namespace detail {

template<>
struct operations< ::ecore::idle::exiter >
{
   template <typename T>
   struct type
         : virtual operations< ::eo::base >::template type<T>
   {
   };
};


template<>
struct operation_description_class_size< ::ecore::idle::exiter >
{
   static constexpr int value = 
#if defined(EXITER_PROTECTED) && defined(EXITER_BETA)
      0
#elif defined(EXITER_PROTECTED)
      0
#elif defined(EXITER_BETA)
      0
#else
      0
#endif
      + operation_description_class_size<::eo::base >::value;
};

template <typename T>
int initialize_operation_description(::efl::eo::detail::tag<::ecore::idle::exiter>
                                 , Eo_Op_Description* ops)
{
   int i = 0;
   (void)i;
   (void)ops;
   initialize_operation_description<T>(::efl::eo::detail::tag<::eo::base>(), &ops[operation_description_class_size< ::ecore::idle::exiter >::value]);
   return 0;
}
inline Eo_Class const* get_eo_class(tag<::ecore::idle::exiter>)
{
   return (ECORE_IDLE_EXITER_CLASS);
}

} } }

/// @endcond

