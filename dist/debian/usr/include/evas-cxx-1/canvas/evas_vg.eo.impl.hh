/// @cond EO_CXX_EO_IMPL

inline Efl_VG * evas::vg::root_node_get() const
{
   Efl_VG * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_vg_root_node_get());
   return _tmp_ret;
}

inline Efl_VG * eo_cxx::evas::vg::root_node_get() const
{
   Efl_VG * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_vg_root_node_get());
   return _tmp_ret;
}

inline ::eo_cxx::evas::vg::operator ::evas::vg() const
{
   return *static_cast<::evas::vg const*>(static_cast<void const*>(this));
}

inline ::eo_cxx::evas::vg::operator ::evas::vg&()
{
   return *static_cast<::evas::vg*>(static_cast<void*>(this));
}

inline ::eo_cxx::evas::vg::operator ::evas::vg const&() const
{
   return *static_cast<::evas::vg const*>(static_cast<void const*>(this));
}

template <typename T>
Efl_VG * evas_vg_root_node_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->root_node_get();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Efl_VG * _tmp_ret{};
         return _tmp_ret;
      }
}

namespace efl { namespace eo { namespace detail {

template<>
struct operations< ::evas::vg >
{
   template <typename T>
   struct type
         : virtual operations< ::evas::object >::template type<T>
         , virtual operations< ::efl::gfx::fill >::template type<T>
         , virtual operations< ::efl::gfx::view >::template type<T>
   {
      virtual Efl_VG * root_node_get()
      {
         Efl_VG * _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_obj_vg_root_node_get());
            return _tmp_ret;
      }

   };
};


template<>
struct operation_description_class_size< ::evas::vg >
{
   static constexpr int value = 
#if defined(VG_PROTECTED) && defined(VG_BETA)
      1
#elif defined(VG_PROTECTED)
      1
#elif defined(VG_BETA)
      1
#else
      1
#endif
      + operation_description_class_size<::evas::object >::value      + operation_description_class_size<::efl::gfx::fill >::value      + operation_description_class_size<::efl::gfx::view >::value;
};

template <typename T>
int initialize_operation_description(::efl::eo::detail::tag<::evas::vg>
                                 , Eo_Op_Description* ops)
{
   int i = 0;
   (void)i;
   (void)ops;
   ops[i].func = reinterpret_cast<void*>(& ::evas_vg_root_node_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_vg_root_node_get);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   initialize_operation_description<T>(::efl::eo::detail::tag<::evas::object>(), &ops[operation_description_class_size< ::evas::vg >::value]);
   initialize_operation_description<T>(::efl::eo::detail::tag<::efl::gfx::fill>(), &ops[operation_description_class_size< ::evas::vg >::value + operation_description_class_size<::evas::object>::value]);
   initialize_operation_description<T>(::efl::eo::detail::tag<::efl::gfx::view>(), &ops[operation_description_class_size< ::evas::vg >::value + operation_description_class_size<::evas::object>::value + operation_description_class_size<::efl::gfx::fill>::value]);
   return 0;
}
inline Eo_Class const* get_eo_class(tag<::evas::vg>)
{
   return (EVAS_VG_CLASS);
}

} } }

/// @endcond

