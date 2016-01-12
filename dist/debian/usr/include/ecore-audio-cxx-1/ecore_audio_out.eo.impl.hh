/// @cond EO_CXX_EO_IMPL

inline bool ecore_audio_out::input_attach(::ecore_audio_in input_) const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::ecore_audio_obj_out_input_attach(::efl::eolian::to_c(input_)));
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline bool ecore_audio_out::input_detach(::ecore_audio_in input_) const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::ecore_audio_obj_out_input_detach(::efl::eolian::to_c(input_)));
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline ::efl::eina::range_list< ::ecore_audio_in > ecore_audio_out::inputs_get() const
{
   Eina_List * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::ecore_audio_obj_out_inputs_get());
   return ::efl::eolian::to_cxx<::efl::eina::range_list< ::ecore_audio_in >>(_tmp_ret, std::tuple<std::false_type, std::false_type>());
}

inline bool eo_cxx::ecore_audio_out::input_attach(::ecore_audio_in input_) const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::ecore_audio_obj_out_input_attach(::efl::eolian::to_c(input_)));
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline bool eo_cxx::ecore_audio_out::input_detach(::ecore_audio_in input_) const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::ecore_audio_obj_out_input_detach(::efl::eolian::to_c(input_)));
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline ::efl::eina::range_list< ::ecore_audio_in > eo_cxx::ecore_audio_out::inputs_get() const
{
   Eina_List * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::ecore_audio_obj_out_inputs_get());
   return ::efl::eolian::to_cxx<::efl::eina::range_list< ::ecore_audio_in >>(_tmp_ret, std::tuple<std::false_type, std::false_type>());
}

inline ::eo_cxx::ecore_audio_out::operator ::ecore_audio_out() const
{
   return *static_cast<::ecore_audio_out const*>(static_cast<void const*>(this));
}

inline ::eo_cxx::ecore_audio_out::operator ::ecore_audio_out&()
{
   return *static_cast<::ecore_audio_out*>(static_cast<void*>(this));
}

inline ::eo_cxx::ecore_audio_out::operator ::ecore_audio_out const&() const
{
   return *static_cast<::ecore_audio_out const*>(static_cast<void const*>(this));
}

template <typename T>
bool _ecore_audio_out_input_attach_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Ecore_Audio_In * input_)
{
   try
      {
         return static_cast<T*>(self->this_)->input_attach(::efl::eolian::to_cxx<::ecore_audio_in>(input_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Eina_Bool _tmp_ret{};
         return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }
}

template <typename T>
bool _ecore_audio_out_input_detach_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Ecore_Audio_In * input_)
{
   try
      {
         return static_cast<T*>(self->this_)->input_detach(::efl::eolian::to_cxx<::ecore_audio_in>(input_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Eina_Bool _tmp_ret{};
         return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }
}

template <typename T>
::efl::eina::range_list< ::ecore_audio_in > _ecore_audio_out_inputs_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->inputs_get();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Eina_List * _tmp_ret{};
         return ::efl::eolian::to_cxx<::efl::eina::range_list< ::ecore_audio_in >>(_tmp_ret, std::tuple<std::false_type, std::false_type>());
      }
}

namespace efl { namespace eo { namespace detail {

template<>
struct operations< ::ecore_audio_out >
{
   template <typename T>
   struct type
         : virtual operations< ::ecore_audio >::template type<T>
   {
      virtual bool input_attach(::ecore_audio_in input_)
      {
         Eina_Bool _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::ecore_audio_obj_out_input_attach(::efl::eolian::to_c(input_)));
            return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }

      virtual bool input_detach(::ecore_audio_in input_)
      {
         Eina_Bool _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::ecore_audio_obj_out_input_detach(::efl::eolian::to_c(input_)));
            return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }

      virtual ::efl::eina::range_list< ::ecore_audio_in > inputs_get()
      {
         Eina_List * _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::ecore_audio_obj_out_inputs_get());
            return ::efl::eolian::to_cxx<::efl::eina::range_list< ::ecore_audio_in >>(_tmp_ret, std::tuple<std::false_type, std::false_type>());
      }

   };
};


template<>
struct operation_description_class_size< ::ecore_audio_out >
{
   static constexpr int value = 
#if defined(ECORE_AUDIO_OUT_PROTECTED) && defined(ECORE_AUDIO_OUT_BETA)
      3
#elif defined(ECORE_AUDIO_OUT_PROTECTED)
      3
#elif defined(ECORE_AUDIO_OUT_BETA)
      3
#else
      3
#endif
      + operation_description_class_size<::ecore_audio >::value;
};

template <typename T>
int initialize_operation_description(::efl::eo::detail::tag<::ecore_audio_out>
                                 , Eo_Op_Description* ops)
{
   int i = 0;
   (void)i;
   (void)ops;
   ops[i].func = reinterpret_cast<void*>(& ::_ecore_audio_out_input_attach_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::ecore_audio_obj_out_input_attach);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::_ecore_audio_out_input_detach_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::ecore_audio_obj_out_input_detach);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::_ecore_audio_out_inputs_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::ecore_audio_obj_out_inputs_get);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   initialize_operation_description<T>(::efl::eo::detail::tag<::ecore_audio>(), &ops[operation_description_class_size< ::ecore_audio_out >::value]);
   return 0;
}
inline Eo_Class const* get_eo_class(tag<::ecore_audio_out>)
{
   return (ECORE_AUDIO_OUT_CLASS);
}

} } }

/// @endcond

