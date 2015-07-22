/// @cond EO_CXX_EO_IMPL

template <typename F_func_>
inline ::ecore::animator::_c_constructor<F_func_> ecore::animator::constructor(F_func_ && func_)
{
   return _c_constructor<F_func_>(std::forward<F_func_>(func_));
}

template <typename F_func_>
inline ::ecore::animator::_c_timeline_constructor<F_func_> ecore::animator::timeline_constructor(double runtime_, F_func_ && func_)
{
   return _c_timeline_constructor<F_func_>(runtime_, std::forward<F_func_>(func_));
}

inline ::eo_cxx::ecore::animator::operator ::ecore::animator() const
{
   return *static_cast<::ecore::animator const*>(static_cast<void const*>(this));
}

inline ::eo_cxx::ecore::animator::operator ::ecore::animator&()
{
   return *static_cast<::ecore::animator*>(static_cast<void*>(this));
}

inline ::eo_cxx::ecore::animator::operator ::ecore::animator const&() const
{
   return *static_cast<::ecore::animator const*>(static_cast<void const*>(this));
}

namespace efl { namespace eo { namespace detail {

template<>
struct operations< ::ecore::animator >
{
   template <typename T>
   struct type
         : virtual operations< ::eo::base >::template type<T>
   {
   };
};


template<>
struct operation_description_class_size< ::ecore::animator >
{
   static constexpr int value = 
#if defined(ANIMATOR_PROTECTED) && defined(ANIMATOR_BETA)
      0
#elif defined(ANIMATOR_PROTECTED)
      0
#elif defined(ANIMATOR_BETA)
      0
#else
      0
#endif
      + operation_description_class_size<::eo::base >::value;
};

template <typename T>
int initialize_operation_description(::efl::eo::detail::tag<::ecore::animator>
                                 , Eo_Op_Description* ops)
{
   int i = 0;
   (void)i;
   (void)ops;
   initialize_operation_description<T>(::efl::eo::detail::tag<::eo::base>(), &ops[operation_description_class_size< ::ecore::animator >::value]);
   return 0;
}
inline Eo_Class const* get_eo_class(tag<::ecore::animator>)
{
   return (ECORE_ANIMATOR_CLASS);
}

} } }

/// @endcond

