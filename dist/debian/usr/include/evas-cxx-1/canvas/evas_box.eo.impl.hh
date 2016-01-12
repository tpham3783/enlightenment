/// @cond EO_CXX_EO_IMPL

inline void evas::box::layout_horizontal(Evas_Object_Box_Data * priv_, void * data_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_box_layout_horizontal(priv_, data_));
}

inline void evas::box::layout_vertical(Evas_Object_Box_Data * priv_, void * data_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_box_layout_vertical(priv_, data_));
}

inline void evas::box::layout_homogeneous_max_size_horizontal(Evas_Object_Box_Data * priv_, void * data_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_box_layout_homogeneous_max_size_horizontal(priv_, data_));
}

inline ::evas::object evas::box::internal_remove(::evas::object child_) const
{
   Evas_Object * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_box_internal_remove(::efl::eolian::to_c(child_)));
   return ::efl::eolian::to_cxx<::evas::object>(_tmp_ret, std::tuple<std::false_type>());
}

inline void evas::box::layout_flow_vertical(Evas_Object_Box_Data * priv_, void * data_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_box_layout_flow_vertical(priv_, data_));
}

inline void evas::box::internal_option_free(Evas_Object_Box_Option * opt_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_box_internal_option_free(opt_));
}

inline Evas_Object_Box_Option * evas::box::insert_after(::evas::object child_, ::evas::object reference_) const
{
   Evas_Object_Box_Option * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_box_insert_after(::efl::eolian::to_c(child_), ::efl::eolian::to_c(reference_)));
   return _tmp_ret;
}

inline bool evas::box::remove_all(bool clear_) const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_box_remove_all(::efl::eolian::to_c(clear_)));
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline Eina_Iterator * evas::box::iterator_new() const
{
   Eina_Iterator * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_box_iterator_new());
   return _tmp_ret;
}

inline ::evas::object evas::box::add_to() const
{
   Evas_Object * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_box_add_to());
   return ::efl::eolian::to_cxx<::evas::object>(_tmp_ret, std::tuple<std::false_type>());
}

inline Evas_Object_Box_Option * evas::box::append(::evas::object child_) const
{
   Evas_Object_Box_Option * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_box_append(::efl::eolian::to_c(child_)));
   return _tmp_ret;
}

inline int evas::box::option_property_id_get(::efl::eina::string_view name_) const
{
   int _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_box_option_property_id_get(::efl::eolian::to_c(name_)));
   return _tmp_ret;
}

inline Evas_Object_Box_Option * evas::box::prepend(::evas::object child_) const
{
   Evas_Object_Box_Option * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_box_prepend(::efl::eolian::to_c(child_)));
   return _tmp_ret;
}

inline Eina_Accessor * evas::box::accessor_new() const
{
   Eina_Accessor * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_box_accessor_new());
   return _tmp_ret;
}

inline Evas_Object_Box_Option * evas::box::internal_append(::evas::object child_) const
{
   Evas_Object_Box_Option * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_box_internal_append(::efl::eolian::to_c(child_)));
   return _tmp_ret;
}

inline bool evas::box::option_property_vset(Evas_Object_Box_Option * opt_, int property_, va_list * args_) const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_box_option_property_vset(opt_, property_, args_));
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline ::evas::object evas::box::internal_remove_at(unsigned int pos_) const
{
   Evas_Object * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_box_internal_remove_at(pos_));
   return ::efl::eolian::to_cxx<::evas::object>(_tmp_ret, std::tuple<std::false_type>());
}

inline bool evas::box::remove_at(unsigned int pos_) const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_box_remove_at(pos_));
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline bool evas::box::option_property_vget(Evas_Object_Box_Option * opt_, int property_, va_list * args_) const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_box_option_property_vget(opt_, property_, args_));
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline Evas_Object_Box_Option * evas::box::internal_insert_at(::evas::object child_, unsigned int pos_) const
{
   Evas_Object_Box_Option * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_box_internal_insert_at(::efl::eolian::to_c(child_), pos_));
   return _tmp_ret;
}

inline Evas_Object_Box_Option * evas::box::insert_before(::evas::object child_, ::evas::object reference_) const
{
   Evas_Object_Box_Option * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_box_insert_before(::efl::eolian::to_c(child_), ::efl::eolian::to_c(reference_)));
   return _tmp_ret;
}

inline ::efl::eina::string_view evas::box::option_property_name_get(int property_) const
{
   const char * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_box_option_property_name_get(property_));
   return ::efl::eolian::to_cxx<::efl::eina::string_view>(_tmp_ret, std::tuple<std::false_type>());
}

inline Evas_Object_Box_Option * evas::box::internal_insert_before(::evas::object child_, ::evas::object reference_) const
{
   Evas_Object_Box_Option * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_box_internal_insert_before(::efl::eolian::to_c(child_), ::efl::eolian::to_c(reference_)));
   return _tmp_ret;
}

inline void evas::box::layout_homogeneous_horizontal(Evas_Object_Box_Data * priv_, void * data_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_box_layout_homogeneous_horizontal(priv_, data_));
}

inline Evas_Object_Box_Option * evas::box::internal_option_new(::evas::object child_) const
{
   Evas_Object_Box_Option * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_box_internal_option_new(::efl::eolian::to_c(child_)));
   return _tmp_ret;
}

inline void evas::box::layout_homogeneous_max_size_vertical(Evas_Object_Box_Data * priv_, void * data_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_box_layout_homogeneous_max_size_vertical(priv_, data_));
}

inline Evas_Object_Box_Option * evas::box::internal_insert_after(::evas::object child_, ::evas::object reference_) const
{
   Evas_Object_Box_Option * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_box_internal_insert_after(::efl::eolian::to_c(child_), ::efl::eolian::to_c(reference_)));
   return _tmp_ret;
}

inline Evas_Object_Box_Option * evas::box::insert_at(::evas::object child_, unsigned int pos_) const
{
   Evas_Object_Box_Option * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_box_insert_at(::efl::eolian::to_c(child_), pos_));
   return _tmp_ret;
}

inline Evas_Object_Box_Option * evas::box::internal_prepend(::evas::object child_) const
{
   Evas_Object_Box_Option * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_box_internal_prepend(::efl::eolian::to_c(child_)));
   return _tmp_ret;
}

inline bool evas::box::remove(::evas::object child_) const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_box_remove(::efl::eolian::to_c(child_)));
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline void evas::box::layout_stack(Evas_Object_Box_Data * priv_, void * data_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_box_layout_stack(priv_, data_));
}

inline void evas::box::layout_homogeneous_vertical(Evas_Object_Box_Data * priv_, void * data_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_box_layout_homogeneous_vertical(priv_, data_));
}

inline void evas::box::layout_flow_horizontal(Evas_Object_Box_Data * priv_, void * data_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_box_layout_flow_horizontal(priv_, data_));
}

inline void evas::box::align_get(double* horizontal_, double* vertical_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_box_align_get(horizontal_, vertical_));
}

inline void evas::box::align_set(double horizontal_, double vertical_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_box_align_set(horizontal_, vertical_));
}

inline void evas::box::padding_get(Evas_Coord* horizontal_, Evas_Coord* vertical_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_box_padding_get(horizontal_, vertical_));
}

inline void evas::box::padding_set(Evas_Coord horizontal_, Evas_Coord vertical_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_box_padding_set(horizontal_, vertical_));
}

inline void evas::box::layout_set(Evas_Object_Box_Layout cb_, const void * data_, Eina_Free_Cb free_data_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_box_layout_set(cb_, data_, free_data_));
}

inline void eo_cxx::evas::box::layout_horizontal(Evas_Object_Box_Data * priv_, void * data_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_box_layout_horizontal(priv_, data_));
}

inline void eo_cxx::evas::box::layout_vertical(Evas_Object_Box_Data * priv_, void * data_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_box_layout_vertical(priv_, data_));
}

inline void eo_cxx::evas::box::layout_homogeneous_max_size_horizontal(Evas_Object_Box_Data * priv_, void * data_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_box_layout_homogeneous_max_size_horizontal(priv_, data_));
}

inline ::evas::object eo_cxx::evas::box::internal_remove(::evas::object child_) const
{
   Evas_Object * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_box_internal_remove(::efl::eolian::to_c(child_)));
   return ::efl::eolian::to_cxx<::evas::object>(_tmp_ret, std::tuple<std::false_type>());
}

inline void eo_cxx::evas::box::layout_flow_vertical(Evas_Object_Box_Data * priv_, void * data_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_box_layout_flow_vertical(priv_, data_));
}

inline void eo_cxx::evas::box::internal_option_free(Evas_Object_Box_Option * opt_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_box_internal_option_free(opt_));
}

inline Evas_Object_Box_Option * eo_cxx::evas::box::insert_after(::evas::object child_, ::evas::object reference_) const
{
   Evas_Object_Box_Option * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_box_insert_after(::efl::eolian::to_c(child_), ::efl::eolian::to_c(reference_)));
   return _tmp_ret;
}

inline bool eo_cxx::evas::box::remove_all(bool clear_) const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_box_remove_all(::efl::eolian::to_c(clear_)));
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline Eina_Iterator * eo_cxx::evas::box::iterator_new() const
{
   Eina_Iterator * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_box_iterator_new());
   return _tmp_ret;
}

inline ::evas::object eo_cxx::evas::box::add_to() const
{
   Evas_Object * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_box_add_to());
   return ::efl::eolian::to_cxx<::evas::object>(_tmp_ret, std::tuple<std::false_type>());
}

inline Evas_Object_Box_Option * eo_cxx::evas::box::append(::evas::object child_) const
{
   Evas_Object_Box_Option * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_box_append(::efl::eolian::to_c(child_)));
   return _tmp_ret;
}

inline int eo_cxx::evas::box::option_property_id_get(::efl::eina::string_view name_) const
{
   int _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_box_option_property_id_get(::efl::eolian::to_c(name_)));
   return _tmp_ret;
}

inline Evas_Object_Box_Option * eo_cxx::evas::box::prepend(::evas::object child_) const
{
   Evas_Object_Box_Option * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_box_prepend(::efl::eolian::to_c(child_)));
   return _tmp_ret;
}

inline Eina_Accessor * eo_cxx::evas::box::accessor_new() const
{
   Eina_Accessor * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_box_accessor_new());
   return _tmp_ret;
}

inline Evas_Object_Box_Option * eo_cxx::evas::box::internal_append(::evas::object child_) const
{
   Evas_Object_Box_Option * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_box_internal_append(::efl::eolian::to_c(child_)));
   return _tmp_ret;
}

inline bool eo_cxx::evas::box::option_property_vset(Evas_Object_Box_Option * opt_, int property_, va_list * args_) const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_box_option_property_vset(opt_, property_, args_));
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline ::evas::object eo_cxx::evas::box::internal_remove_at(unsigned int pos_) const
{
   Evas_Object * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_box_internal_remove_at(pos_));
   return ::efl::eolian::to_cxx<::evas::object>(_tmp_ret, std::tuple<std::false_type>());
}

inline bool eo_cxx::evas::box::remove_at(unsigned int pos_) const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_box_remove_at(pos_));
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline bool eo_cxx::evas::box::option_property_vget(Evas_Object_Box_Option * opt_, int property_, va_list * args_) const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_box_option_property_vget(opt_, property_, args_));
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline Evas_Object_Box_Option * eo_cxx::evas::box::internal_insert_at(::evas::object child_, unsigned int pos_) const
{
   Evas_Object_Box_Option * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_box_internal_insert_at(::efl::eolian::to_c(child_), pos_));
   return _tmp_ret;
}

inline Evas_Object_Box_Option * eo_cxx::evas::box::insert_before(::evas::object child_, ::evas::object reference_) const
{
   Evas_Object_Box_Option * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_box_insert_before(::efl::eolian::to_c(child_), ::efl::eolian::to_c(reference_)));
   return _tmp_ret;
}

inline ::efl::eina::string_view eo_cxx::evas::box::option_property_name_get(int property_) const
{
   const char * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_box_option_property_name_get(property_));
   return ::efl::eolian::to_cxx<::efl::eina::string_view>(_tmp_ret, std::tuple<std::false_type>());
}

inline Evas_Object_Box_Option * eo_cxx::evas::box::internal_insert_before(::evas::object child_, ::evas::object reference_) const
{
   Evas_Object_Box_Option * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_box_internal_insert_before(::efl::eolian::to_c(child_), ::efl::eolian::to_c(reference_)));
   return _tmp_ret;
}

inline void eo_cxx::evas::box::layout_homogeneous_horizontal(Evas_Object_Box_Data * priv_, void * data_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_box_layout_homogeneous_horizontal(priv_, data_));
}

inline Evas_Object_Box_Option * eo_cxx::evas::box::internal_option_new(::evas::object child_) const
{
   Evas_Object_Box_Option * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_box_internal_option_new(::efl::eolian::to_c(child_)));
   return _tmp_ret;
}

inline void eo_cxx::evas::box::layout_homogeneous_max_size_vertical(Evas_Object_Box_Data * priv_, void * data_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_box_layout_homogeneous_max_size_vertical(priv_, data_));
}

inline Evas_Object_Box_Option * eo_cxx::evas::box::internal_insert_after(::evas::object child_, ::evas::object reference_) const
{
   Evas_Object_Box_Option * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_box_internal_insert_after(::efl::eolian::to_c(child_), ::efl::eolian::to_c(reference_)));
   return _tmp_ret;
}

inline Evas_Object_Box_Option * eo_cxx::evas::box::insert_at(::evas::object child_, unsigned int pos_) const
{
   Evas_Object_Box_Option * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_box_insert_at(::efl::eolian::to_c(child_), pos_));
   return _tmp_ret;
}

inline Evas_Object_Box_Option * eo_cxx::evas::box::internal_prepend(::evas::object child_) const
{
   Evas_Object_Box_Option * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_box_internal_prepend(::efl::eolian::to_c(child_)));
   return _tmp_ret;
}

inline bool eo_cxx::evas::box::remove(::evas::object child_) const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_box_remove(::efl::eolian::to_c(child_)));
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline void eo_cxx::evas::box::layout_stack(Evas_Object_Box_Data * priv_, void * data_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_box_layout_stack(priv_, data_));
}

inline void eo_cxx::evas::box::layout_homogeneous_vertical(Evas_Object_Box_Data * priv_, void * data_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_box_layout_homogeneous_vertical(priv_, data_));
}

inline void eo_cxx::evas::box::layout_flow_horizontal(Evas_Object_Box_Data * priv_, void * data_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_box_layout_flow_horizontal(priv_, data_));
}

inline void eo_cxx::evas::box::align_get(double* horizontal_, double* vertical_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_box_align_get(horizontal_, vertical_));
}

inline void eo_cxx::evas::box::align_set(double horizontal_, double vertical_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_box_align_set(horizontal_, vertical_));
}

inline void eo_cxx::evas::box::padding_get(Evas_Coord* horizontal_, Evas_Coord* vertical_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_box_padding_get(horizontal_, vertical_));
}

inline void eo_cxx::evas::box::padding_set(Evas_Coord horizontal_, Evas_Coord vertical_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_box_padding_set(horizontal_, vertical_));
}

inline void eo_cxx::evas::box::layout_set(Evas_Object_Box_Layout cb_, const void * data_, Eina_Free_Cb free_data_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_box_layout_set(cb_, data_, free_data_));
}

inline ::eo_cxx::evas::box::operator ::evas::box() const
{
   return *static_cast<::evas::box const*>(static_cast<void const*>(this));
}

inline ::eo_cxx::evas::box::operator ::evas::box&()
{
   return *static_cast<::evas::box*>(static_cast<void*>(this));
}

inline ::eo_cxx::evas::box::operator ::evas::box const&() const
{
   return *static_cast<::evas::box const*>(static_cast<void const*>(this));
}

template <typename T>
void evas_box_layout_horizontal_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Evas_Object_Box_Data * priv_, void * data_)
{
   try
      {
         static_cast<T*>(self->this_)->layout_horizontal(priv_, data_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void evas_box_layout_vertical_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Evas_Object_Box_Data * priv_, void * data_)
{
   try
      {
         static_cast<T*>(self->this_)->layout_vertical(priv_, data_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void evas_box_layout_homogeneous_max_size_horizontal_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Evas_Object_Box_Data * priv_, void * data_)
{
   try
      {
         static_cast<T*>(self->this_)->layout_homogeneous_max_size_horizontal(priv_, data_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
::evas::object evas_box_internal_remove_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Evas_Object * child_)
{
   try
      {
         return static_cast<T*>(self->this_)->internal_remove(::efl::eolian::to_cxx<::evas::object>(child_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Evas_Object * _tmp_ret{};
         return ::efl::eolian::to_cxx<::evas::object>(_tmp_ret, std::tuple<std::false_type>());
      }
}

template <typename T>
void evas_box_layout_flow_vertical_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Evas_Object_Box_Data * priv_, void * data_)
{
   try
      {
         static_cast<T*>(self->this_)->layout_flow_vertical(priv_, data_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void evas_box_internal_option_free_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Evas_Object_Box_Option * opt_)
{
   try
      {
         static_cast<T*>(self->this_)->internal_option_free(opt_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
Evas_Object_Box_Option * evas_box_insert_after_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Evas_Object * child_, const Evas_Object * reference_)
{
   try
      {
         return static_cast<T*>(self->this_)->insert_after(::efl::eolian::to_cxx<::evas::object>(child_, std::tuple<std::false_type>()), ::efl::eolian::to_cxx<::evas::object>(reference_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Evas_Object_Box_Option * _tmp_ret{};
         return _tmp_ret;
      }
}

template <typename T>
bool evas_box_remove_all_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Eina_Bool clear_)
{
   try
      {
         return static_cast<T*>(self->this_)->remove_all(::efl::eolian::to_cxx<bool>(clear_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Eina_Bool _tmp_ret{};
         return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }
}

template <typename T>
Eina_Iterator * evas_box_iterator_new_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->iterator_new();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Eina_Iterator * _tmp_ret{};
         return _tmp_ret;
      }
}

template <typename T>
::evas::object evas_box_add_to_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->add_to();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Evas_Object * _tmp_ret{};
         return ::efl::eolian::to_cxx<::evas::object>(_tmp_ret, std::tuple<std::false_type>());
      }
}

template <typename T>
Evas_Object_Box_Option * evas_box_append_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Evas_Object * child_)
{
   try
      {
         return static_cast<T*>(self->this_)->append(::efl::eolian::to_cxx<::evas::object>(child_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Evas_Object_Box_Option * _tmp_ret{};
         return _tmp_ret;
      }
}

template <typename T>
int evas_box_option_property_id_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, const char * name_)
{
   try
      {
         return static_cast<T*>(self->this_)->option_property_id_get(::efl::eolian::to_cxx<::efl::eina::string_view>(name_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         int _tmp_ret{};
         return _tmp_ret;
      }
}

template <typename T>
Evas_Object_Box_Option * evas_box_prepend_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Evas_Object * child_)
{
   try
      {
         return static_cast<T*>(self->this_)->prepend(::efl::eolian::to_cxx<::evas::object>(child_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Evas_Object_Box_Option * _tmp_ret{};
         return _tmp_ret;
      }
}

template <typename T>
Eina_Accessor * evas_box_accessor_new_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->accessor_new();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Eina_Accessor * _tmp_ret{};
         return _tmp_ret;
      }
}

template <typename T>
Evas_Object_Box_Option * evas_box_internal_append_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Evas_Object * child_)
{
   try
      {
         return static_cast<T*>(self->this_)->internal_append(::efl::eolian::to_cxx<::evas::object>(child_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Evas_Object_Box_Option * _tmp_ret{};
         return _tmp_ret;
      }
}

template <typename T>
bool evas_box_option_property_vset_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Evas_Object_Box_Option * opt_, int property_, va_list * args_)
{
   try
      {
         return static_cast<T*>(self->this_)->option_property_vset(opt_, property_, args_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Eina_Bool _tmp_ret{};
         return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }
}

template <typename T>
::evas::object evas_box_internal_remove_at_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, unsigned int pos_)
{
   try
      {
         return static_cast<T*>(self->this_)->internal_remove_at(pos_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Evas_Object * _tmp_ret{};
         return ::efl::eolian::to_cxx<::evas::object>(_tmp_ret, std::tuple<std::false_type>());
      }
}

template <typename T>
bool evas_box_remove_at_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, unsigned int pos_)
{
   try
      {
         return static_cast<T*>(self->this_)->remove_at(pos_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Eina_Bool _tmp_ret{};
         return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }
}

template <typename T>
bool evas_box_option_property_vget_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Evas_Object_Box_Option * opt_, int property_, va_list * args_)
{
   try
      {
         return static_cast<T*>(self->this_)->option_property_vget(opt_, property_, args_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Eina_Bool _tmp_ret{};
         return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }
}

template <typename T>
Evas_Object_Box_Option * evas_box_internal_insert_at_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Evas_Object * child_, unsigned int pos_)
{
   try
      {
         return static_cast<T*>(self->this_)->internal_insert_at(::efl::eolian::to_cxx<::evas::object>(child_, std::tuple<std::false_type>()), pos_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Evas_Object_Box_Option * _tmp_ret{};
         return _tmp_ret;
      }
}

template <typename T>
Evas_Object_Box_Option * evas_box_insert_before_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Evas_Object * child_, const Evas_Object * reference_)
{
   try
      {
         return static_cast<T*>(self->this_)->insert_before(::efl::eolian::to_cxx<::evas::object>(child_, std::tuple<std::false_type>()), ::efl::eolian::to_cxx<::evas::object>(reference_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Evas_Object_Box_Option * _tmp_ret{};
         return _tmp_ret;
      }
}

template <typename T>
::efl::eina::string_view evas_box_option_property_name_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, int property_)
{
   try
      {
         return static_cast<T*>(self->this_)->option_property_name_get(property_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         const char * _tmp_ret{};
         return ::efl::eolian::to_cxx<::efl::eina::string_view>(_tmp_ret, std::tuple<std::false_type>());
      }
}

template <typename T>
Evas_Object_Box_Option * evas_box_internal_insert_before_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Evas_Object * child_, const Evas_Object * reference_)
{
   try
      {
         return static_cast<T*>(self->this_)->internal_insert_before(::efl::eolian::to_cxx<::evas::object>(child_, std::tuple<std::false_type>()), ::efl::eolian::to_cxx<::evas::object>(reference_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Evas_Object_Box_Option * _tmp_ret{};
         return _tmp_ret;
      }
}

template <typename T>
void evas_box_layout_homogeneous_horizontal_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Evas_Object_Box_Data * priv_, void * data_)
{
   try
      {
         static_cast<T*>(self->this_)->layout_homogeneous_horizontal(priv_, data_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
Evas_Object_Box_Option * evas_box_internal_option_new_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Evas_Object * child_)
{
   try
      {
         return static_cast<T*>(self->this_)->internal_option_new(::efl::eolian::to_cxx<::evas::object>(child_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Evas_Object_Box_Option * _tmp_ret{};
         return _tmp_ret;
      }
}

template <typename T>
void evas_box_layout_homogeneous_max_size_vertical_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Evas_Object_Box_Data * priv_, void * data_)
{
   try
      {
         static_cast<T*>(self->this_)->layout_homogeneous_max_size_vertical(priv_, data_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
Evas_Object_Box_Option * evas_box_internal_insert_after_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Evas_Object * child_, const Evas_Object * reference_)
{
   try
      {
         return static_cast<T*>(self->this_)->internal_insert_after(::efl::eolian::to_cxx<::evas::object>(child_, std::tuple<std::false_type>()), ::efl::eolian::to_cxx<::evas::object>(reference_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Evas_Object_Box_Option * _tmp_ret{};
         return _tmp_ret;
      }
}

template <typename T>
Evas_Object_Box_Option * evas_box_insert_at_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Evas_Object * child_, unsigned int pos_)
{
   try
      {
         return static_cast<T*>(self->this_)->insert_at(::efl::eolian::to_cxx<::evas::object>(child_, std::tuple<std::false_type>()), pos_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Evas_Object_Box_Option * _tmp_ret{};
         return _tmp_ret;
      }
}

template <typename T>
Evas_Object_Box_Option * evas_box_internal_prepend_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Evas_Object * child_)
{
   try
      {
         return static_cast<T*>(self->this_)->internal_prepend(::efl::eolian::to_cxx<::evas::object>(child_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Evas_Object_Box_Option * _tmp_ret{};
         return _tmp_ret;
      }
}

template <typename T>
bool evas_box_remove_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Evas_Object * child_)
{
   try
      {
         return static_cast<T*>(self->this_)->remove(::efl::eolian::to_cxx<::evas::object>(child_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Eina_Bool _tmp_ret{};
         return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }
}

template <typename T>
void evas_box_layout_stack_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Evas_Object_Box_Data * priv_, void * data_)
{
   try
      {
         static_cast<T*>(self->this_)->layout_stack(priv_, data_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void evas_box_layout_homogeneous_vertical_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Evas_Object_Box_Data * priv_, void * data_)
{
   try
      {
         static_cast<T*>(self->this_)->layout_homogeneous_vertical(priv_, data_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void evas_box_layout_flow_horizontal_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Evas_Object_Box_Data * priv_, void * data_)
{
   try
      {
         static_cast<T*>(self->this_)->layout_flow_horizontal(priv_, data_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void evas_box_align_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, double* horizontal_, double* vertical_)
{
   try
      {
         static_cast<T*>(self->this_)->align_get(horizontal_, vertical_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void evas_box_align_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, double horizontal_, double vertical_)
{
   try
      {
         static_cast<T*>(self->this_)->align_set(horizontal_, vertical_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void evas_box_padding_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Evas_Coord* horizontal_, Evas_Coord* vertical_)
{
   try
      {
         static_cast<T*>(self->this_)->padding_get(horizontal_, vertical_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void evas_box_padding_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Evas_Coord horizontal_, Evas_Coord vertical_)
{
   try
      {
         static_cast<T*>(self->this_)->padding_set(horizontal_, vertical_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void evas_box_layout_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Evas_Object_Box_Layout cb_, const void * data_, Eina_Free_Cb free_data_)
{
   try
      {
         static_cast<T*>(self->this_)->layout_set(cb_, data_, free_data_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

namespace efl { namespace eo { namespace detail {

template<>
struct operations< ::evas::box >
{
   template <typename T>
   struct type
         : virtual operations< ::evas::smart_clipped >::template type<T>
   {
      virtual void layout_horizontal(Evas_Object_Box_Data * priv_, void * data_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_obj_box_layout_horizontal(priv_, data_));
      }

      virtual void layout_vertical(Evas_Object_Box_Data * priv_, void * data_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_obj_box_layout_vertical(priv_, data_));
      }

      virtual void layout_homogeneous_max_size_horizontal(Evas_Object_Box_Data * priv_, void * data_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_obj_box_layout_homogeneous_max_size_horizontal(priv_, data_));
      }

      virtual ::evas::object internal_remove(::evas::object child_)
      {
         Evas_Object * _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_obj_box_internal_remove(::efl::eolian::to_c(child_)));
            return ::efl::eolian::to_cxx<::evas::object>(_tmp_ret, std::tuple<std::false_type>());
      }

      virtual void layout_flow_vertical(Evas_Object_Box_Data * priv_, void * data_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_obj_box_layout_flow_vertical(priv_, data_));
      }

      virtual void internal_option_free(Evas_Object_Box_Option * opt_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_obj_box_internal_option_free(opt_));
      }

      virtual Evas_Object_Box_Option * insert_after(::evas::object child_, ::evas::object reference_)
      {
         Evas_Object_Box_Option * _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_obj_box_insert_after(::efl::eolian::to_c(child_), ::efl::eolian::to_c(reference_)));
            return _tmp_ret;
      }

      virtual bool remove_all(bool clear_)
      {
         Eina_Bool _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_obj_box_remove_all(::efl::eolian::to_c(clear_)));
            return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }

      virtual Eina_Iterator * iterator_new()
      {
         Eina_Iterator * _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_obj_box_iterator_new());
            return _tmp_ret;
      }

      virtual ::evas::object add_to()
      {
         Evas_Object * _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_obj_box_add_to());
            return ::efl::eolian::to_cxx<::evas::object>(_tmp_ret, std::tuple<std::false_type>());
      }

      virtual Evas_Object_Box_Option * append(::evas::object child_)
      {
         Evas_Object_Box_Option * _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_obj_box_append(::efl::eolian::to_c(child_)));
            return _tmp_ret;
      }

      virtual int option_property_id_get(::efl::eina::string_view name_)
      {
         int _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_obj_box_option_property_id_get(::efl::eolian::to_c(name_)));
            return _tmp_ret;
      }

      virtual Evas_Object_Box_Option * prepend(::evas::object child_)
      {
         Evas_Object_Box_Option * _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_obj_box_prepend(::efl::eolian::to_c(child_)));
            return _tmp_ret;
      }

      virtual Eina_Accessor * accessor_new()
      {
         Eina_Accessor * _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_obj_box_accessor_new());
            return _tmp_ret;
      }

      virtual Evas_Object_Box_Option * internal_append(::evas::object child_)
      {
         Evas_Object_Box_Option * _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_obj_box_internal_append(::efl::eolian::to_c(child_)));
            return _tmp_ret;
      }

      virtual bool option_property_vset(Evas_Object_Box_Option * opt_, int property_, va_list * args_)
      {
         Eina_Bool _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_obj_box_option_property_vset(opt_, property_, args_));
            return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }

      virtual ::evas::object internal_remove_at(unsigned int pos_)
      {
         Evas_Object * _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_obj_box_internal_remove_at(pos_));
            return ::efl::eolian::to_cxx<::evas::object>(_tmp_ret, std::tuple<std::false_type>());
      }

      virtual bool remove_at(unsigned int pos_)
      {
         Eina_Bool _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_obj_box_remove_at(pos_));
            return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }

      virtual bool option_property_vget(Evas_Object_Box_Option * opt_, int property_, va_list * args_)
      {
         Eina_Bool _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_obj_box_option_property_vget(opt_, property_, args_));
            return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }

      virtual Evas_Object_Box_Option * internal_insert_at(::evas::object child_, unsigned int pos_)
      {
         Evas_Object_Box_Option * _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_obj_box_internal_insert_at(::efl::eolian::to_c(child_), pos_));
            return _tmp_ret;
      }

      virtual Evas_Object_Box_Option * insert_before(::evas::object child_, ::evas::object reference_)
      {
         Evas_Object_Box_Option * _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_obj_box_insert_before(::efl::eolian::to_c(child_), ::efl::eolian::to_c(reference_)));
            return _tmp_ret;
      }

      virtual ::efl::eina::string_view option_property_name_get(int property_)
      {
         const char * _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_obj_box_option_property_name_get(property_));
            return ::efl::eolian::to_cxx<::efl::eina::string_view>(_tmp_ret, std::tuple<std::false_type>());
      }

      virtual Evas_Object_Box_Option * internal_insert_before(::evas::object child_, ::evas::object reference_)
      {
         Evas_Object_Box_Option * _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_obj_box_internal_insert_before(::efl::eolian::to_c(child_), ::efl::eolian::to_c(reference_)));
            return _tmp_ret;
      }

      virtual void layout_homogeneous_horizontal(Evas_Object_Box_Data * priv_, void * data_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_obj_box_layout_homogeneous_horizontal(priv_, data_));
      }

      virtual Evas_Object_Box_Option * internal_option_new(::evas::object child_)
      {
         Evas_Object_Box_Option * _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_obj_box_internal_option_new(::efl::eolian::to_c(child_)));
            return _tmp_ret;
      }

      virtual void layout_homogeneous_max_size_vertical(Evas_Object_Box_Data * priv_, void * data_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_obj_box_layout_homogeneous_max_size_vertical(priv_, data_));
      }

      virtual Evas_Object_Box_Option * internal_insert_after(::evas::object child_, ::evas::object reference_)
      {
         Evas_Object_Box_Option * _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_obj_box_internal_insert_after(::efl::eolian::to_c(child_), ::efl::eolian::to_c(reference_)));
            return _tmp_ret;
      }

      virtual Evas_Object_Box_Option * insert_at(::evas::object child_, unsigned int pos_)
      {
         Evas_Object_Box_Option * _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_obj_box_insert_at(::efl::eolian::to_c(child_), pos_));
            return _tmp_ret;
      }

      virtual Evas_Object_Box_Option * internal_prepend(::evas::object child_)
      {
         Evas_Object_Box_Option * _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_obj_box_internal_prepend(::efl::eolian::to_c(child_)));
            return _tmp_ret;
      }

      virtual bool remove(::evas::object child_)
      {
         Eina_Bool _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_obj_box_remove(::efl::eolian::to_c(child_)));
            return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }

      virtual void layout_stack(Evas_Object_Box_Data * priv_, void * data_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_obj_box_layout_stack(priv_, data_));
      }

      virtual void layout_homogeneous_vertical(Evas_Object_Box_Data * priv_, void * data_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_obj_box_layout_homogeneous_vertical(priv_, data_));
      }

      virtual void layout_flow_horizontal(Evas_Object_Box_Data * priv_, void * data_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_obj_box_layout_flow_horizontal(priv_, data_));
      }

      virtual void align_get(double* horizontal_, double* vertical_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_obj_box_align_get(horizontal_, vertical_));
      }

      virtual void align_set(double horizontal_, double vertical_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_obj_box_align_set(horizontal_, vertical_));
      }

      virtual void padding_get(Evas_Coord* horizontal_, Evas_Coord* vertical_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_obj_box_padding_get(horizontal_, vertical_));
      }

      virtual void padding_set(Evas_Coord horizontal_, Evas_Coord vertical_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_obj_box_padding_set(horizontal_, vertical_));
      }

      virtual void layout_set(Evas_Object_Box_Layout cb_, const void * data_, Eina_Free_Cb free_data_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_obj_box_layout_set(cb_, data_, free_data_));
      }

   };
};


template<>
struct operation_description_class_size< ::evas::box >
{
   static constexpr int value = 
#if defined(BOX_PROTECTED) && defined(BOX_BETA)
      38
#elif defined(BOX_PROTECTED)
      38
#elif defined(BOX_BETA)
      38
#else
      38
#endif
      + operation_description_class_size<::evas::smart_clipped >::value;
};

template <typename T>
int initialize_operation_description(::efl::eo::detail::tag<::evas::box>
                                 , Eo_Op_Description* ops)
{
   int i = 0;
   (void)i;
   (void)ops;
   ops[i].func = reinterpret_cast<void*>(& ::evas_box_layout_horizontal_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_box_layout_horizontal);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_box_layout_vertical_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_box_layout_vertical);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_box_layout_homogeneous_max_size_horizontal_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_box_layout_homogeneous_max_size_horizontal);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_box_internal_remove_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_box_internal_remove);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_box_layout_flow_vertical_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_box_layout_flow_vertical);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_box_internal_option_free_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_box_internal_option_free);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_box_insert_after_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_box_insert_after);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_box_remove_all_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_box_remove_all);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_box_iterator_new_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_box_iterator_new);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_box_add_to_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_box_add_to);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_box_append_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_box_append);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_box_option_property_id_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_box_option_property_id_get);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_box_prepend_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_box_prepend);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_box_accessor_new_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_box_accessor_new);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_box_internal_append_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_box_internal_append);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_box_option_property_vset_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_box_option_property_vset);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_box_internal_remove_at_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_box_internal_remove_at);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_box_remove_at_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_box_remove_at);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_box_option_property_vget_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_box_option_property_vget);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_box_internal_insert_at_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_box_internal_insert_at);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_box_insert_before_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_box_insert_before);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_box_option_property_name_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_box_option_property_name_get);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_box_internal_insert_before_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_box_internal_insert_before);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_box_layout_homogeneous_horizontal_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_box_layout_homogeneous_horizontal);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_box_internal_option_new_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_box_internal_option_new);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_box_layout_homogeneous_max_size_vertical_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_box_layout_homogeneous_max_size_vertical);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_box_internal_insert_after_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_box_internal_insert_after);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_box_insert_at_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_box_insert_at);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_box_internal_prepend_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_box_internal_prepend);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_box_remove_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_box_remove);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_box_layout_stack_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_box_layout_stack);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_box_layout_homogeneous_vertical_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_box_layout_homogeneous_vertical);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_box_layout_flow_horizontal_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_box_layout_flow_horizontal);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_box_align_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_box_align_get);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_box_align_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_box_align_set);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_box_padding_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_box_padding_get);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_box_padding_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_box_padding_set);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_box_layout_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_box_layout_set);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   initialize_operation_description<T>(::efl::eo::detail::tag<::evas::smart_clipped>(), &ops[operation_description_class_size< ::evas::box >::value]);
   return 0;
}
inline Eo_Class const* get_eo_class(tag<::evas::box>)
{
   return (EVAS_BOX_CLASS);
}

} } }

/// @endcond

