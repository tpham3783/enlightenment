/// @cond EO_CXX_EO_IMPL

inline ::eo::base eo::base::constructor() const
{
   Eo_Base * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::eo_constructor());
   return ::efl::eolian::to_cxx<::eo::base>(_tmp_ret, std::tuple<std::false_type>());
}

inline void eo::base::destructor() const
{
   eo_do(_concrete_eo_ptr(), ::eo_destructor());
}

inline ::eo::base eo::base::finalize() const
{
   Eo_Base * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::eo_finalize());
   return ::efl::eolian::to_cxx<::eo::base>(_tmp_ret, std::tuple<std::false_type>());
}

inline void eo::base::wref_add(::eo::base* wref_) const
{
   eo_do(_concrete_eo_ptr(), ::eo_wref_add(::efl::eolian::to_c(wref_)));
}

inline void eo::base::wref_del(Eo_Base ** wref_) const
{
   eo_do(_concrete_eo_ptr(), ::eo_wref_del(wref_));
}

inline void eo::base::key_data_set(::efl::eina::string_view key_, const void * data_) const
{
   eo_do(_concrete_eo_ptr(), ::eo_key_data_set(::efl::eolian::to_c(key_), data_));
}

inline void * eo::base::key_data_get(::efl::eina::string_view key_) const
{
   void * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::eo_key_data_get(::efl::eolian::to_c(key_)));
   return _tmp_ret;
}

inline void eo::base::key_data_del(::efl::eina::string_view key_) const
{
   eo_do(_concrete_eo_ptr(), ::eo_key_data_del(::efl::eolian::to_c(key_)));
}

inline void eo::base::event_thaw() const
{
   eo_do(_concrete_eo_ptr(), ::eo_event_thaw());
}

inline void eo::base::event_freeze() const
{
   eo_do(_concrete_eo_ptr(), ::eo_event_freeze());
}

inline void eo::base::event_global_thaw()
{
   eo_do(_eo_class(), ::eo_event_global_thaw());
}

inline void eo::base::event_global_freeze()
{
   eo_do(_eo_class(), ::eo_event_global_freeze());
}

inline void eo::base::event_callback_priority_add(const Eo_Event_Description * desc_, Eo_Callback_Priority priority_, Eo_Event_Cb cb_, const void * data_) const
{
   eo_do(_concrete_eo_ptr(), ::eo_event_callback_priority_add(desc_, priority_, cb_, data_));
}

inline void eo::base::event_callback_del(const Eo_Event_Description * desc_, Eo_Event_Cb func_, const void * user_data_) const
{
   eo_do(_concrete_eo_ptr(), ::eo_event_callback_del(desc_, func_, user_data_));
}

inline void eo::base::event_callback_array_priority_add(const Eo_Callback_Array_Item * array_, Eo_Callback_Priority priority_, const void * data_) const
{
   eo_do(_concrete_eo_ptr(), ::eo_event_callback_array_priority_add(array_, priority_, data_));
}

inline void eo::base::event_callback_array_del(const Eo_Callback_Array_Item * array_, const void * user_data_) const
{
   eo_do(_concrete_eo_ptr(), ::eo_event_callback_array_del(array_, user_data_));
}

inline bool eo::base::event_callback_call(const Eo_Event_Description * desc_, void * event_info_) const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::eo_event_callback_call(desc_, event_info_));
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline void eo::base::event_callback_forwarder_add(const Eo_Event_Description * desc_, ::eo::base new_obj_) const
{
   eo_do(_concrete_eo_ptr(), ::eo_event_callback_forwarder_add(desc_, ::efl::eolian::to_c(new_obj_)));
}

inline void eo::base::event_callback_forwarder_del(const Eo_Event_Description * desc_, ::eo::base new_obj_) const
{
   eo_do(_concrete_eo_ptr(), ::eo_event_callback_forwarder_del(desc_, ::efl::eolian::to_c(new_obj_)));
}

inline void eo::base::dbg_info_get(Eo_Dbg_Info * root_node_) const
{
   eo_do(_concrete_eo_ptr(), ::eo_dbg_info_get(root_node_));
}

inline Eina_Iterator * eo::base::children_iterator_new() const
{
   Eina_Iterator * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::eo_children_iterator_new());
   return _tmp_ret;
}

#ifdef BASE_BETA
inline bool eo::base::composite_attach(::eo::base comp_obj_) const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::eo_composite_attach(::efl::eolian::to_c(comp_obj_)));
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}
#endif

#ifdef BASE_BETA
inline bool eo::base::composite_detach(::eo::base comp_obj_) const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::eo_composite_detach(::efl::eolian::to_c(comp_obj_)));
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}
#endif

#ifdef BASE_BETA
inline bool eo::base::composite_part_is() const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::eo_composite_part_is());
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}
#endif

inline ::eo::base eo::base::parent_get() const
{
   Eo_Base * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::eo_parent_get());
   return ::efl::eolian::to_cxx<::eo::base>(_tmp_ret, std::tuple<std::false_type>());
}

inline void eo::base::parent_set(::eo::base parent_) const
{
   eo_do(_concrete_eo_ptr(), ::eo_parent_set(::efl::eolian::to_c(parent_)));
}

inline int eo::base::event_global_freeze_count_get() const
{
   int _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::eo_event_global_freeze_count_get());
   return _tmp_ret;
}

inline int eo::base::event_freeze_count_get() const
{
   int _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::eo_event_freeze_count_get());
   return _tmp_ret;
}

inline bool eo::base::finalized_get() const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::eo_finalized_get());
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline ::eo::base eo_cxx::eo::base::constructor() const
{
   Eo_Base * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::eo_constructor());
   return ::efl::eolian::to_cxx<::eo::base>(_tmp_ret, std::tuple<std::false_type>());
}

inline void eo_cxx::eo::base::destructor() const
{
   eo_do(_concrete_eo_ptr(), ::eo_destructor());
}

inline ::eo::base eo_cxx::eo::base::finalize() const
{
   Eo_Base * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::eo_finalize());
   return ::efl::eolian::to_cxx<::eo::base>(_tmp_ret, std::tuple<std::false_type>());
}

inline void eo_cxx::eo::base::wref_add(::eo::base* wref_) const
{
   eo_do(_concrete_eo_ptr(), ::eo_wref_add(::efl::eolian::to_c(wref_)));
}

inline void eo_cxx::eo::base::wref_del(Eo_Base ** wref_) const
{
   eo_do(_concrete_eo_ptr(), ::eo_wref_del(wref_));
}

inline void eo_cxx::eo::base::key_data_set(::efl::eina::string_view key_, const void * data_) const
{
   eo_do(_concrete_eo_ptr(), ::eo_key_data_set(::efl::eolian::to_c(key_), data_));
}

inline void * eo_cxx::eo::base::key_data_get(::efl::eina::string_view key_) const
{
   void * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::eo_key_data_get(::efl::eolian::to_c(key_)));
   return _tmp_ret;
}

inline void eo_cxx::eo::base::key_data_del(::efl::eina::string_view key_) const
{
   eo_do(_concrete_eo_ptr(), ::eo_key_data_del(::efl::eolian::to_c(key_)));
}

inline void eo_cxx::eo::base::event_thaw() const
{
   eo_do(_concrete_eo_ptr(), ::eo_event_thaw());
}

inline void eo_cxx::eo::base::event_freeze() const
{
   eo_do(_concrete_eo_ptr(), ::eo_event_freeze());
}

inline void eo_cxx::eo::base::event_global_thaw()
{
   eo_do(_eo_class(), ::eo_event_global_thaw());
}

inline void eo_cxx::eo::base::event_global_freeze()
{
   eo_do(_eo_class(), ::eo_event_global_freeze());
}

inline void eo_cxx::eo::base::event_callback_priority_add(const Eo_Event_Description * desc_, Eo_Callback_Priority priority_, Eo_Event_Cb cb_, const void * data_) const
{
   eo_do(_concrete_eo_ptr(), ::eo_event_callback_priority_add(desc_, priority_, cb_, data_));
}

inline void eo_cxx::eo::base::event_callback_del(const Eo_Event_Description * desc_, Eo_Event_Cb func_, const void * user_data_) const
{
   eo_do(_concrete_eo_ptr(), ::eo_event_callback_del(desc_, func_, user_data_));
}

inline void eo_cxx::eo::base::event_callback_array_priority_add(const Eo_Callback_Array_Item * array_, Eo_Callback_Priority priority_, const void * data_) const
{
   eo_do(_concrete_eo_ptr(), ::eo_event_callback_array_priority_add(array_, priority_, data_));
}

inline void eo_cxx::eo::base::event_callback_array_del(const Eo_Callback_Array_Item * array_, const void * user_data_) const
{
   eo_do(_concrete_eo_ptr(), ::eo_event_callback_array_del(array_, user_data_));
}

inline bool eo_cxx::eo::base::event_callback_call(const Eo_Event_Description * desc_, void * event_info_) const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::eo_event_callback_call(desc_, event_info_));
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline void eo_cxx::eo::base::event_callback_forwarder_add(const Eo_Event_Description * desc_, ::eo::base new_obj_) const
{
   eo_do(_concrete_eo_ptr(), ::eo_event_callback_forwarder_add(desc_, ::efl::eolian::to_c(new_obj_)));
}

inline void eo_cxx::eo::base::event_callback_forwarder_del(const Eo_Event_Description * desc_, ::eo::base new_obj_) const
{
   eo_do(_concrete_eo_ptr(), ::eo_event_callback_forwarder_del(desc_, ::efl::eolian::to_c(new_obj_)));
}

inline void eo_cxx::eo::base::dbg_info_get(Eo_Dbg_Info * root_node_) const
{
   eo_do(_concrete_eo_ptr(), ::eo_dbg_info_get(root_node_));
}

inline Eina_Iterator * eo_cxx::eo::base::children_iterator_new() const
{
   Eina_Iterator * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::eo_children_iterator_new());
   return _tmp_ret;
}

#ifdef BASE_BETA
inline bool eo_cxx::eo::base::composite_attach(::eo::base comp_obj_) const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::eo_composite_attach(::efl::eolian::to_c(comp_obj_)));
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}
#endif

#ifdef BASE_BETA
inline bool eo_cxx::eo::base::composite_detach(::eo::base comp_obj_) const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::eo_composite_detach(::efl::eolian::to_c(comp_obj_)));
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}
#endif

#ifdef BASE_BETA
inline bool eo_cxx::eo::base::composite_part_is() const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::eo_composite_part_is());
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}
#endif

inline ::eo::base eo_cxx::eo::base::parent_get() const
{
   Eo_Base * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::eo_parent_get());
   return ::efl::eolian::to_cxx<::eo::base>(_tmp_ret, std::tuple<std::false_type>());
}

inline void eo_cxx::eo::base::parent_set(::eo::base parent_) const
{
   eo_do(_concrete_eo_ptr(), ::eo_parent_set(::efl::eolian::to_c(parent_)));
}

inline int eo_cxx::eo::base::event_global_freeze_count_get() const
{
   int _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::eo_event_global_freeze_count_get());
   return _tmp_ret;
}

inline int eo_cxx::eo::base::event_freeze_count_get() const
{
   int _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::eo_event_freeze_count_get());
   return _tmp_ret;
}

inline bool eo_cxx::eo::base::finalized_get() const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::eo_finalized_get());
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline ::eo_cxx::eo::base::operator ::eo::base() const
{
   return *static_cast<::eo::base const*>(static_cast<void const*>(this));
}

inline ::eo_cxx::eo::base::operator ::eo::base&()
{
   return *static_cast<::eo::base*>(static_cast<void*>(this));
}

inline ::eo_cxx::eo::base::operator ::eo::base const&() const
{
   return *static_cast<::eo::base const*>(static_cast<void const*>(this));
}


/// @endcond

