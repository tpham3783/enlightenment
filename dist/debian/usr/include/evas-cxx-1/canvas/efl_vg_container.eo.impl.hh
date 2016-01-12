/// @cond EO_CXX_EO_IMPL

inline ::efl::vg::base efl::vg::container::child_get(::efl::eina::string_view name_) const
{
   Efl_VG_Base * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::efl_vg_container_child_get(::efl::eolian::to_c(name_)));
   return ::efl::eolian::to_cxx<::efl::vg::base>(_tmp_ret, std::tuple<std::false_type>());
}

inline Eina_Iterator * efl::vg::container::children_get() const
{
   Eina_Iterator * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::efl_vg_container_children_get());
   return _tmp_ret;
}

inline ::efl::vg::base eo_cxx::efl::vg::container::child_get(::efl::eina::string_view name_) const
{
   Efl_VG_Base * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::efl_vg_container_child_get(::efl::eolian::to_c(name_)));
   return ::efl::eolian::to_cxx<::efl::vg::base>(_tmp_ret, std::tuple<std::false_type>());
}

inline Eina_Iterator * eo_cxx::efl::vg::container::children_get() const
{
   Eina_Iterator * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::efl_vg_container_children_get());
   return _tmp_ret;
}

inline ::eo_cxx::efl::vg::container::operator ::efl::vg::container() const
{
   return *static_cast<::efl::vg::container const*>(static_cast<void const*>(this));
}

inline ::eo_cxx::efl::vg::container::operator ::efl::vg::container&()
{
   return *static_cast<::efl::vg::container*>(static_cast<void*>(this));
}

inline ::eo_cxx::efl::vg::container::operator ::efl::vg::container const&() const
{
   return *static_cast<::efl::vg::container const*>(static_cast<void const*>(this));
}

template <typename T>
::efl::vg::base efl_vg_container_child_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, const char * name_)
{
   try
      {
         return static_cast<T*>(self->this_)->child_get(::efl::eolian::to_cxx<::efl::eina::string_view>(name_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Efl_VG_Base * _tmp_ret{};
         return ::efl::eolian::to_cxx<::efl::vg::base>(_tmp_ret, std::tuple<std::false_type>());
      }
}

template <typename T>
Eina_Iterator * efl_vg_container_children_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->children_get();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Eina_Iterator * _tmp_ret{};
         return _tmp_ret;
      }
}

namespace efl { namespace eo { namespace detail {

template<>
struct operations< ::efl::vg::container >
{
   template <typename T>
   struct type
         : virtual operations< ::efl::vg::base >::template type<T>
   {
      virtual ::efl::vg::base child_get(::efl::eina::string_view name_)
      {
         Efl_VG_Base * _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::efl_vg_container_child_get(::efl::eolian::to_c(name_)));
            return ::efl::eolian::to_cxx<::efl::vg::base>(_tmp_ret, std::tuple<std::false_type>());
      }

      virtual Eina_Iterator * children_get()
      {
         Eina_Iterator * _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::efl_vg_container_children_get());
            return _tmp_ret;
      }

   };
};


template<>
struct operation_description_class_size< ::efl::vg::container >
{
   static constexpr int value = 
#if defined(CONTAINER_PROTECTED) && defined(CONTAINER_BETA)
      2
#elif defined(CONTAINER_PROTECTED)
      2
#elif defined(CONTAINER_BETA)
      2
#else
      2
#endif
      + operation_description_class_size<::efl::vg::base >::value;
};

template <typename T>
int initialize_operation_description(::efl::eo::detail::tag<::efl::vg::container>
                                 , Eo_Op_Description* ops)
{
   int i = 0;
   (void)i;
   (void)ops;
   ops[i].func = reinterpret_cast<void*>(& ::efl_vg_container_child_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::efl_vg_container_child_get);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::efl_vg_container_children_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::efl_vg_container_children_get);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   initialize_operation_description<T>(::efl::eo::detail::tag<::efl::vg::base>(), &ops[operation_description_class_size< ::efl::vg::container >::value]);
   return 0;
}
inline Eo_Class const* get_eo_class(tag<::efl::vg::container>)
{
   return (EFL_VG_CONTAINER_CLASS);
}

} } }

/// @endcond

