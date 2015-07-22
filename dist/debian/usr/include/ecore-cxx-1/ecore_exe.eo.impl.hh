/// @cond EO_CXX_EO_IMPL

inline ::ecore::exe::_c_command ecore::exe::command(::efl::eina::string_view exe_cmd_, Ecore_Exe_Flags flags_)
{
   return _c_command(exe_cmd_, flags_);
}

inline void ecore::exe::command_get(const char ** exe_cmd_, Ecore_Exe_Flags* flags_) const
{
   eo_do(_concrete_eo_ptr(), ::ecore_obj_exe_command_get(exe_cmd_, flags_));
}

inline void ecore::exe::command_set(::efl::eina::string_view exe_cmd_, Ecore_Exe_Flags flags_) const
{
   eo_do(_concrete_eo_ptr(), ::ecore_obj_exe_command_set(::efl::eolian::to_c(exe_cmd_), flags_));
}

inline void eo_cxx::ecore::exe::command_get(const char ** exe_cmd_, Ecore_Exe_Flags* flags_) const
{
   eo_do(_concrete_eo_ptr(), ::ecore_obj_exe_command_get(exe_cmd_, flags_));
}

inline void eo_cxx::ecore::exe::command_set(::efl::eina::string_view exe_cmd_, Ecore_Exe_Flags flags_) const
{
   eo_do(_concrete_eo_ptr(), ::ecore_obj_exe_command_set(::efl::eolian::to_c(exe_cmd_), flags_));
}

inline ::eo_cxx::ecore::exe::operator ::ecore::exe() const
{
   return *static_cast<::ecore::exe const*>(static_cast<void const*>(this));
}

inline ::eo_cxx::ecore::exe::operator ::ecore::exe&()
{
   return *static_cast<::ecore::exe*>(static_cast<void*>(this));
}

inline ::eo_cxx::ecore::exe::operator ::ecore::exe const&() const
{
   return *static_cast<::ecore::exe const*>(static_cast<void const*>(this));
}

template <typename T>
void ecore_exe_command_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, const char ** exe_cmd_, Ecore_Exe_Flags* flags_)
{
   try
      {
         static_cast<T*>(self->this_)->command_get(exe_cmd_, flags_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void ecore_exe_command_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, const char * exe_cmd_, Ecore_Exe_Flags flags_)
{
   try
      {
         static_cast<T*>(self->this_)->command_set(::efl::eolian::to_cxx<::efl::eina::string_view>(exe_cmd_, std::tuple<std::false_type>()), flags_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

namespace efl { namespace eo { namespace detail {

template<>
struct operations< ::ecore::exe >
{
   template <typename T>
   struct type
         : virtual operations< ::eo::base >::template type<T>
         , virtual operations< ::efl::control >::template type<T>
   {
      virtual void command_get(const char ** exe_cmd_, Ecore_Exe_Flags* flags_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::ecore_obj_exe_command_get(exe_cmd_, flags_));
      }

      virtual void command_set(::efl::eina::string_view exe_cmd_, Ecore_Exe_Flags flags_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::ecore_obj_exe_command_set(::efl::eolian::to_c(exe_cmd_), flags_));
      }

   };
};


template<>
struct operation_description_class_size< ::ecore::exe >
{
   static constexpr int value = 
#if defined(EXE_PROTECTED) && defined(EXE_BETA)
      2
#elif defined(EXE_PROTECTED)
      2
#elif defined(EXE_BETA)
      2
#else
      2
#endif
      + operation_description_class_size<::eo::base >::value      + operation_description_class_size<::efl::control >::value;
};

template <typename T>
int initialize_operation_description(::efl::eo::detail::tag<::ecore::exe>
                                 , Eo_Op_Description* ops)
{
   int i = 0;
   (void)i;
   (void)ops;
   ops[i].func = reinterpret_cast<void*>(& ::ecore_exe_command_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::ecore_obj_exe_command_get);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::ecore_exe_command_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::ecore_obj_exe_command_set);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   initialize_operation_description<T>(::efl::eo::detail::tag<::eo::base>(), &ops[operation_description_class_size< ::ecore::exe >::value]);
   initialize_operation_description<T>(::efl::eo::detail::tag<::efl::control>(), &ops[operation_description_class_size< ::ecore::exe >::value + operation_description_class_size<::eo::base>::value]);
   return 0;
}
inline Eo_Class const* get_eo_class(tag<::ecore::exe>)
{
   return (ECORE_EXE_CLASS);
}

} } }

/// @endcond

