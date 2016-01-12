/// @cond EO_CXX_EO_IMPL

#ifdef FILTER_BETA
inline void efl::gfx::filter::source_set(::efl::eina::string_view name_, ::efl::gfx::base source_) const
{
   eo_do(_concrete_eo_ptr(), ::efl_gfx_filter_source_set(::efl::eolian::to_c(name_), ::efl::eolian::to_c(source_)));
}
#endif

#ifdef FILTER_BETA
inline void efl::gfx::filter::source_get(::efl::eina::string_view name_, ::efl::gfx::base* source_) const
{
   eo_do(_concrete_eo_ptr(), ::efl_gfx_filter_source_get(::efl::eolian::to_c(name_), ::efl::eolian::to_c(source_)));
}
#endif

#ifdef FILTER_BETA
inline void efl::gfx::filter::data_set(::efl::eina::string_view name_, ::efl::eina::string_view value_, bool execute_) const
{
   eo_do(_concrete_eo_ptr(), ::efl_gfx_filter_data_set(::efl::eolian::to_c(name_), ::efl::eolian::to_c(value_), ::efl::eolian::to_c(execute_)));
}
#endif

#ifdef FILTER_BETA
inline void efl::gfx::filter::program_get(const char ** code_, const char ** name_) const
{
   eo_do(_concrete_eo_ptr(), ::efl_gfx_filter_program_get(code_, name_));
}
#endif

#ifdef FILTER_BETA
inline void efl::gfx::filter::program_set(::efl::eina::string_view code_, ::efl::eina::string_view name_) const
{
   eo_do(_concrete_eo_ptr(), ::efl_gfx_filter_program_set(::efl::eolian::to_c(code_), ::efl::eolian::to_c(name_)));
}
#endif

#ifdef FILTER_BETA
inline void efl::gfx::filter::state_set(::efl::eina::string_view cur_state_, double cur_val_, ::efl::eina::string_view next_state_, double next_val_, double pos_) const
{
   eo_do(_concrete_eo_ptr(), ::efl_gfx_filter_state_set(::efl::eolian::to_c(cur_state_), cur_val_, ::efl::eolian::to_c(next_state_), next_val_, pos_));
}
#endif

#ifdef FILTER_BETA
inline void efl::gfx::filter::padding_get(int* l_, int* r_, int* t_, int* b_) const
{
   eo_do(_concrete_eo_ptr(), ::efl_gfx_filter_padding_get(l_, r_, t_, b_));
}
#endif

#ifdef FILTER_BETA
inline void eo_cxx::efl::gfx::filter::source_set(::efl::eina::string_view name_, ::efl::gfx::base source_) const
{
   eo_do(_concrete_eo_ptr(), ::efl_gfx_filter_source_set(::efl::eolian::to_c(name_), ::efl::eolian::to_c(source_)));
}
#endif

#ifdef FILTER_BETA
inline void eo_cxx::efl::gfx::filter::source_get(::efl::eina::string_view name_, ::efl::gfx::base* source_) const
{
   eo_do(_concrete_eo_ptr(), ::efl_gfx_filter_source_get(::efl::eolian::to_c(name_), ::efl::eolian::to_c(source_)));
}
#endif

#ifdef FILTER_BETA
inline void eo_cxx::efl::gfx::filter::data_set(::efl::eina::string_view name_, ::efl::eina::string_view value_, bool execute_) const
{
   eo_do(_concrete_eo_ptr(), ::efl_gfx_filter_data_set(::efl::eolian::to_c(name_), ::efl::eolian::to_c(value_), ::efl::eolian::to_c(execute_)));
}
#endif

#ifdef FILTER_BETA
inline void eo_cxx::efl::gfx::filter::program_get(const char ** code_, const char ** name_) const
{
   eo_do(_concrete_eo_ptr(), ::efl_gfx_filter_program_get(code_, name_));
}
#endif

#ifdef FILTER_BETA
inline void eo_cxx::efl::gfx::filter::program_set(::efl::eina::string_view code_, ::efl::eina::string_view name_) const
{
   eo_do(_concrete_eo_ptr(), ::efl_gfx_filter_program_set(::efl::eolian::to_c(code_), ::efl::eolian::to_c(name_)));
}
#endif

#ifdef FILTER_BETA
inline void eo_cxx::efl::gfx::filter::state_set(::efl::eina::string_view cur_state_, double cur_val_, ::efl::eina::string_view next_state_, double next_val_, double pos_) const
{
   eo_do(_concrete_eo_ptr(), ::efl_gfx_filter_state_set(::efl::eolian::to_c(cur_state_), cur_val_, ::efl::eolian::to_c(next_state_), next_val_, pos_));
}
#endif

#ifdef FILTER_BETA
inline void eo_cxx::efl::gfx::filter::padding_get(int* l_, int* r_, int* t_, int* b_) const
{
   eo_do(_concrete_eo_ptr(), ::efl_gfx_filter_padding_get(l_, r_, t_, b_));
}
#endif

inline ::eo_cxx::efl::gfx::filter::operator ::efl::gfx::filter() const
{
   return *static_cast<::efl::gfx::filter const*>(static_cast<void const*>(this));
}

inline ::eo_cxx::efl::gfx::filter::operator ::efl::gfx::filter&()
{
   return *static_cast<::efl::gfx::filter*>(static_cast<void*>(this));
}

inline ::eo_cxx::efl::gfx::filter::operator ::efl::gfx::filter const&() const
{
   return *static_cast<::efl::gfx::filter const*>(static_cast<void const*>(this));
}

#ifdef FILTER_BETA
template <typename T>
void efl_gfx_filter_source_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, const char * name_, Efl_Gfx_Base * source_)
{
   try
      {
         static_cast<T*>(self->this_)->source_set(::efl::eolian::to_cxx<::efl::eina::string_view>(name_, std::tuple<std::false_type>()), ::efl::eolian::to_cxx<::efl::gfx::base>(source_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}
#endif

#ifdef FILTER_BETA
template <typename T>
void efl_gfx_filter_source_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, const char * name_, Efl_Gfx_Base ** source_)
{
   try
      {
         static_cast<T*>(self->this_)->source_get(::efl::eolian::to_cxx<::efl::eina::string_view>(name_, std::tuple<std::false_type>()), ::efl::eolian::to_cxx<::efl::gfx::base*>(source_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}
#endif

#ifdef FILTER_BETA
template <typename T>
void efl_gfx_filter_data_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, const char * name_, const char * value_, Eina_Bool execute_)
{
   try
      {
         static_cast<T*>(self->this_)->data_set(::efl::eolian::to_cxx<::efl::eina::string_view>(name_, std::tuple<std::false_type>()), ::efl::eolian::to_cxx<::efl::eina::string_view>(value_, std::tuple<std::false_type>()), ::efl::eolian::to_cxx<bool>(execute_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}
#endif

#ifdef FILTER_BETA
template <typename T>
void efl_gfx_filter_program_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, const char ** code_, const char ** name_)
{
   try
      {
         static_cast<T*>(self->this_)->program_get(code_, name_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}
#endif

#ifdef FILTER_BETA
template <typename T>
void efl_gfx_filter_program_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, const char * code_, const char * name_)
{
   try
      {
         static_cast<T*>(self->this_)->program_set(::efl::eolian::to_cxx<::efl::eina::string_view>(code_, std::tuple<std::false_type>()), ::efl::eolian::to_cxx<::efl::eina::string_view>(name_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}
#endif

#ifdef FILTER_BETA
template <typename T>
void efl_gfx_filter_state_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, const char * cur_state_, double cur_val_, const char * next_state_, double next_val_, double pos_)
{
   try
      {
         static_cast<T*>(self->this_)->state_set(::efl::eolian::to_cxx<::efl::eina::string_view>(cur_state_, std::tuple<std::false_type>()), cur_val_, ::efl::eolian::to_cxx<::efl::eina::string_view>(next_state_, std::tuple<std::false_type>()), next_val_, pos_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}
#endif

#ifdef FILTER_BETA
template <typename T>
void efl_gfx_filter_padding_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, int* l_, int* r_, int* t_, int* b_)
{
   try
      {
         static_cast<T*>(self->this_)->padding_get(l_, r_, t_, b_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}
#endif

namespace efl { namespace eo { namespace detail {

template<>
struct operations< ::efl::gfx::filter >
{
   template <typename T>
   struct type
   {
#ifdef FILTER_BETA
      virtual void source_set(::efl::eina::string_view name_, ::efl::gfx::base source_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::efl_gfx_filter_source_set(::efl::eolian::to_c(name_), ::efl::eolian::to_c(source_)));
      }
#endif

#ifdef FILTER_BETA
      virtual void source_get(::efl::eina::string_view name_, ::efl::gfx::base* source_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::efl_gfx_filter_source_get(::efl::eolian::to_c(name_), ::efl::eolian::to_c(source_)));
      }
#endif

#ifdef FILTER_BETA
      virtual void data_set(::efl::eina::string_view name_, ::efl::eina::string_view value_, bool execute_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::efl_gfx_filter_data_set(::efl::eolian::to_c(name_), ::efl::eolian::to_c(value_), ::efl::eolian::to_c(execute_)));
      }
#endif

#ifdef FILTER_BETA
      virtual void program_get(const char ** code_, const char ** name_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::efl_gfx_filter_program_get(code_, name_));
      }
#endif

#ifdef FILTER_BETA
      virtual void program_set(::efl::eina::string_view code_, ::efl::eina::string_view name_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::efl_gfx_filter_program_set(::efl::eolian::to_c(code_), ::efl::eolian::to_c(name_)));
      }
#endif

#ifdef FILTER_BETA
      virtual void state_set(::efl::eina::string_view cur_state_, double cur_val_, ::efl::eina::string_view next_state_, double next_val_, double pos_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::efl_gfx_filter_state_set(::efl::eolian::to_c(cur_state_), cur_val_, ::efl::eolian::to_c(next_state_), next_val_, pos_));
      }
#endif

#ifdef FILTER_BETA
      virtual void padding_get(int* l_, int* r_, int* t_, int* b_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::efl_gfx_filter_padding_get(l_, r_, t_, b_));
      }
#endif

   };
};


template<>
struct operation_description_class_size< ::efl::gfx::filter >
{
   static constexpr int value = 
#if defined(FILTER_PROTECTED) && defined(FILTER_BETA)
      7
#elif defined(FILTER_PROTECTED)
      0
#elif defined(FILTER_BETA)
      7
#else
      0
#endif
;
};

template <typename T>
int initialize_operation_description(::efl::eo::detail::tag<::efl::gfx::filter>
                                 , Eo_Op_Description* ops)
{
   int i = 0;
   (void)i;
   (void)ops;
#ifdef FILTER_BETA
   ops[i].func = reinterpret_cast<void*>(& ::efl_gfx_filter_source_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::efl_gfx_filter_source_set);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;
#endif

#ifdef FILTER_BETA
   ops[i].func = reinterpret_cast<void*>(& ::efl_gfx_filter_source_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::efl_gfx_filter_source_get);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;
#endif

#ifdef FILTER_BETA
   ops[i].func = reinterpret_cast<void*>(& ::efl_gfx_filter_data_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::efl_gfx_filter_data_set);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;
#endif

#ifdef FILTER_BETA
   ops[i].func = reinterpret_cast<void*>(& ::efl_gfx_filter_program_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::efl_gfx_filter_program_get);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;
#endif

#ifdef FILTER_BETA
   ops[i].func = reinterpret_cast<void*>(& ::efl_gfx_filter_program_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::efl_gfx_filter_program_set);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;
#endif

#ifdef FILTER_BETA
   ops[i].func = reinterpret_cast<void*>(& ::efl_gfx_filter_state_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::efl_gfx_filter_state_set);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;
#endif

#ifdef FILTER_BETA
   ops[i].func = reinterpret_cast<void*>(& ::efl_gfx_filter_padding_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::efl_gfx_filter_padding_get);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;
#endif

   return 0;
}
inline Eo_Class const* get_eo_class(tag<::efl::gfx::filter>)
{
   return (EFL_GFX_FILTER_INTERFACE);
}

} } }

/// @endcond

