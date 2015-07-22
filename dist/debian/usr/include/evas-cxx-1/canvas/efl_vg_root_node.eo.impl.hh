/// @cond EO_CXX_EO_IMPL

inline ::eo_cxx::efl::vg::root_node::operator ::efl::vg::root_node() const
{
   return *static_cast<::efl::vg::root_node const*>(static_cast<void const*>(this));
}

inline ::eo_cxx::efl::vg::root_node::operator ::efl::vg::root_node&()
{
   return *static_cast<::efl::vg::root_node*>(static_cast<void*>(this));
}

inline ::eo_cxx::efl::vg::root_node::operator ::efl::vg::root_node const&() const
{
   return *static_cast<::efl::vg::root_node const*>(static_cast<void const*>(this));
}

namespace efl { namespace eo { namespace detail {

template<>
struct operations< ::efl::vg::root_node >
{
   template <typename T>
   struct type
         : virtual operations< ::efl::vg::container >::template type<T>
   {
   };
};


template<>
struct operation_description_class_size< ::efl::vg::root_node >
{
   static constexpr int value = 
#if defined(ROOT_NODE_PROTECTED) && defined(ROOT_NODE_BETA)
      0
#elif defined(ROOT_NODE_PROTECTED)
      0
#elif defined(ROOT_NODE_BETA)
      0
#else
      0
#endif
      + operation_description_class_size<::efl::vg::container >::value;
};

template <typename T>
int initialize_operation_description(::efl::eo::detail::tag<::efl::vg::root_node>
                                 , Eo_Op_Description* ops)
{
   int i = 0;
   (void)i;
   (void)ops;
   initialize_operation_description<T>(::efl::eo::detail::tag<::efl::vg::container>(), &ops[operation_description_class_size< ::efl::vg::root_node >::value]);
   return 0;
}
inline Eo_Class const* get_eo_class(tag<::efl::vg::root_node>)
{
   return (EFL_VG_ROOT_NODE_CLASS);
}

} } }

/// @endcond

