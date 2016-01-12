/// @cond EO_CXX_EO_IMPL

template <typename F_filter_cb_>
inline void eio::model::children_filter_set(F_filter_cb_ && filter_cb_) const
{
   typedef typename std::remove_reference<F_filter_cb_>::type _no_ref_F_filter_cb_;
   _no_ref_F_filter_cb_* _tmp_filter_cb_ = new _no_ref_F_filter_cb_(std::forward< F_filter_cb_ >(filter_cb_));
   eo_do(_concrete_eo_ptr(), eo_event_callback_add(EO_EV_DEL, &::efl::eolian::free_callback_calback<_no_ref_F_filter_cb_>, _tmp_filter_cb_));

   eo_do(_concrete_eo_ptr(), ::eio_model_children_filter_set(::efl::eolian::get_callback<Eio_Filter_Direct_Cb, _no_ref_F_filter_cb_ >(), _tmp_filter_cb_));
}

inline void eio::model::path_set(::efl::eina::string_view path_) const
{
   eo_do(_concrete_eo_ptr(), ::eio_model_path_set(::efl::eolian::to_c(path_)));
}

template <typename F_filter_cb_>
inline void eo_cxx::eio::model::children_filter_set(F_filter_cb_ && filter_cb_) const
{
   typedef typename std::remove_reference<F_filter_cb_>::type _no_ref_F_filter_cb_;
   _no_ref_F_filter_cb_* _tmp_filter_cb_ = new _no_ref_F_filter_cb_(std::forward< F_filter_cb_ >(filter_cb_));
   eo_do(_concrete_eo_ptr(), eo_event_callback_add(EO_EV_DEL, &::efl::eolian::free_callback_calback<_no_ref_F_filter_cb_>, _tmp_filter_cb_));

   eo_do(_concrete_eo_ptr(), ::eio_model_children_filter_set(::efl::eolian::get_callback<Eio_Filter_Direct_Cb, _no_ref_F_filter_cb_ >(), _tmp_filter_cb_));
}

inline void eo_cxx::eio::model::path_set(::efl::eina::string_view path_) const
{
   eo_do(_concrete_eo_ptr(), ::eio_model_path_set(::efl::eolian::to_c(path_)));
}

inline ::eo_cxx::eio::model::operator ::eio::model() const
{
   return *static_cast<::eio::model const*>(static_cast<void const*>(this));
}

inline ::eo_cxx::eio::model::operator ::eio::model&()
{
   return *static_cast<::eio::model*>(static_cast<void*>(this));
}

inline ::eo_cxx::eio::model::operator ::eio::model const&() const
{
   return *static_cast<::eio::model const*>(static_cast<void const*>(this));
}

template <typename T>
void eio_model_children_filter_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Eio_Filter_Direct_Cb filter_cb_, void * userdata_)
{
   try
      {
         static_cast<T*>(self->this_)->children_filter_set(filter_cb_, userdata_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void eio_model_path_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, const char * path_)
{
   try
      {
         static_cast<T*>(self->this_)->path_set(::efl::eolian::to_cxx<::efl::eina::string_view>(path_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

namespace efl { namespace eo { namespace detail {

template<>
struct operations< ::eio::model >
{
   template <typename T>
   struct type
         : virtual operations< ::eo::base >::template type<T>
         , virtual operations< ::efl::model::base >::template type<T>
   {
      template <typename F_filter_cb_>
      void children_filter_set(F_filter_cb_ && filter_cb_)
      {
         typedef typename std::remove_reference<F_filter_cb_>::type _no_ref_F_filter_cb_;
         _no_ref_F_filter_cb_* _tmp_filter_cb_ = new _no_ref_F_filter_cb_(std::forward< F_filter_cb_ >(filter_cb_));
         eo_do(dynamic_cast<T*>(this)->_eo_ptr(), eo_event_callback_add(EO_EV_DEL, &::efl::eolian::free_callback_calback<_no_ref_F_filter_cb_>, _tmp_filter_cb_));


         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::eio_model_children_filter_set(::efl::eolian::get_callback<Eio_Filter_Direct_Cb, _no_ref_F_filter_cb_ >(), _tmp_filter_cb_));
      }

      virtual void path_set(::efl::eina::string_view path_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::eio_model_path_set(::efl::eolian::to_c(path_)));
      }

   };
};


template<>
struct operation_description_class_size< ::eio::model >
{
   static constexpr int value = 
#if defined(MODEL_PROTECTED) && defined(MODEL_BETA)
      2
#elif defined(MODEL_PROTECTED)
      2
#elif defined(MODEL_BETA)
      2
#else
      2
#endif
      + operation_description_class_size<::eo::base >::value      + operation_description_class_size<::efl::model::base >::value;
};

template <typename T>
int initialize_operation_description(::efl::eo::detail::tag<::eio::model>
                                 , Eo_Op_Description* ops)
{
   int i = 0;
   (void)i;
   (void)ops;
   ops[i].func = reinterpret_cast<void*>(& ::eio_model_children_filter_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::eio_model_children_filter_set);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::eio_model_path_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::eio_model_path_set);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   initialize_operation_description<T>(::efl::eo::detail::tag<::eo::base>(), &ops[operation_description_class_size< ::eio::model >::value]);
   initialize_operation_description<T>(::efl::eo::detail::tag<::efl::model::base>(), &ops[operation_description_class_size< ::eio::model >::value + operation_description_class_size<::eo::base>::value]);
   return 0;
}
inline Eo_Class const* get_eo_class(tag<::eio::model>)
{
   return (EIO_MODEL_CLASS);
}

} } }

/// @endcond

