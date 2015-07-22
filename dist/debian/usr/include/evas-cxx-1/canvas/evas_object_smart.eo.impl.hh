/// @cond EO_CXX_EO_IMPL

inline void evas::object_smart::show() const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_smart_show());
}

inline void evas::object_smart::move(Evas_Coord x_, Evas_Coord y_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_smart_move(x_, y_));
}

inline bool evas::object_smart::callbacks_descriptions_set(const Evas_Smart_Cb_Description * descriptions_) const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_smart_callbacks_descriptions_set(descriptions_));
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline void evas::object_smart::callbacks_descriptions_get(const Evas_Smart_Cb_Description *** class_descriptions_, unsigned int* class_count_, const Evas_Smart_Cb_Description *** instance_descriptions_, unsigned int* instance_count_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_smart_callbacks_descriptions_get(class_descriptions_, class_count_, instance_descriptions_, instance_count_));
}

inline Eina_Iterator * evas::object_smart::iterator_new() const
{
   Eina_Iterator * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_smart_iterator_new());
   return _tmp_ret;
}

inline void evas::object_smart::callback_description_find(::efl::eina::string_view name_, const Evas_Smart_Cb_Description ** class_description_, const Evas_Smart_Cb_Description ** instance_description_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_smart_callback_description_find(::efl::eolian::to_c(name_), class_description_, instance_description_));
}

inline void evas::object_smart::hide() const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_smart_hide());
}

inline void evas::object_smart::calculate() const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_smart_calculate());
}

inline void evas::object_smart::add() const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_smart_add());
}

inline void evas::object_smart::member_add(::evas::object sub_obj_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_smart_member_add(::efl::eolian::to_c(sub_obj_)));
}

inline void evas::object_smart::resize(Evas_Coord w_, Evas_Coord h_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_smart_resize(w_, h_));
}

inline void evas::object_smart::clip_unset() const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_smart_clip_unset());
}

inline void evas::object_smart::changed() const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_smart_changed());
}

inline void evas::object_smart::member_del(::evas::object sub_obj_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_smart_member_del(::efl::eolian::to_c(sub_obj_)));
}

inline void evas::object_smart::del() const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_smart_del());
}

inline void evas::object_smart::attach(Evas_Smart * s_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_smart_attach(s_));
}

inline bool evas::object_smart::need_recalculate_get() const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_smart_need_recalculate_get());
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline void evas::object_smart::need_recalculate_set(bool value_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_smart_need_recalculate_set(::efl::eolian::to_c(value_)));
}

inline void evas::object_smart::clip_set(::evas::object clip_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_smart_clip_set(::efl::eolian::to_c(clip_)));
}

inline void evas::object_smart::color_set(int r_, int g_, int b_, int a_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_smart_color_set(r_, g_, b_, a_));
}

inline void evas::object_smart::data_set(void * data_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_smart_data_set(data_));
}

inline ::efl::eina::range_list< ::evas::object > evas::object_smart::members_get() const
{
   Eina_List * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_smart_members_get());
   return ::efl::eolian::to_cxx<::efl::eina::range_list< ::evas::object >>(_tmp_ret, std::tuple<std::false_type, std::false_type>());
}

inline Evas_Smart * evas::object_smart::smart_get() const
{
   Evas_Smart * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_smart_get());
   return _tmp_ret;
}

inline void eo_cxx::evas::object_smart::show() const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_smart_show());
}

inline void eo_cxx::evas::object_smart::move(Evas_Coord x_, Evas_Coord y_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_smart_move(x_, y_));
}

inline bool eo_cxx::evas::object_smart::callbacks_descriptions_set(const Evas_Smart_Cb_Description * descriptions_) const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_smart_callbacks_descriptions_set(descriptions_));
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline void eo_cxx::evas::object_smart::callbacks_descriptions_get(const Evas_Smart_Cb_Description *** class_descriptions_, unsigned int* class_count_, const Evas_Smart_Cb_Description *** instance_descriptions_, unsigned int* instance_count_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_smart_callbacks_descriptions_get(class_descriptions_, class_count_, instance_descriptions_, instance_count_));
}

inline Eina_Iterator * eo_cxx::evas::object_smart::iterator_new() const
{
   Eina_Iterator * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_smart_iterator_new());
   return _tmp_ret;
}

inline void eo_cxx::evas::object_smart::callback_description_find(::efl::eina::string_view name_, const Evas_Smart_Cb_Description ** class_description_, const Evas_Smart_Cb_Description ** instance_description_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_smart_callback_description_find(::efl::eolian::to_c(name_), class_description_, instance_description_));
}

inline void eo_cxx::evas::object_smart::hide() const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_smart_hide());
}

inline void eo_cxx::evas::object_smart::calculate() const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_smart_calculate());
}

inline void eo_cxx::evas::object_smart::add() const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_smart_add());
}

inline void eo_cxx::evas::object_smart::member_add(::evas::object sub_obj_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_smart_member_add(::efl::eolian::to_c(sub_obj_)));
}

inline void eo_cxx::evas::object_smart::resize(Evas_Coord w_, Evas_Coord h_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_smart_resize(w_, h_));
}

inline void eo_cxx::evas::object_smart::clip_unset() const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_smart_clip_unset());
}

inline void eo_cxx::evas::object_smart::changed() const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_smart_changed());
}

inline void eo_cxx::evas::object_smart::member_del(::evas::object sub_obj_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_smart_member_del(::efl::eolian::to_c(sub_obj_)));
}

inline void eo_cxx::evas::object_smart::del() const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_smart_del());
}

inline void eo_cxx::evas::object_smart::attach(Evas_Smart * s_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_smart_attach(s_));
}

inline bool eo_cxx::evas::object_smart::need_recalculate_get() const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_smart_need_recalculate_get());
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline void eo_cxx::evas::object_smart::need_recalculate_set(bool value_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_smart_need_recalculate_set(::efl::eolian::to_c(value_)));
}

inline void eo_cxx::evas::object_smart::clip_set(::evas::object clip_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_smart_clip_set(::efl::eolian::to_c(clip_)));
}

inline void eo_cxx::evas::object_smart::color_set(int r_, int g_, int b_, int a_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_smart_color_set(r_, g_, b_, a_));
}

inline void eo_cxx::evas::object_smart::data_set(void * data_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_smart_data_set(data_));
}

inline ::efl::eina::range_list< ::evas::object > eo_cxx::evas::object_smart::members_get() const
{
   Eina_List * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_smart_members_get());
   return ::efl::eolian::to_cxx<::efl::eina::range_list< ::evas::object >>(_tmp_ret, std::tuple<std::false_type, std::false_type>());
}

inline Evas_Smart * eo_cxx::evas::object_smart::smart_get() const
{
   Evas_Smart * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_smart_get());
   return _tmp_ret;
}

inline ::eo_cxx::evas::object_smart::operator ::evas::object_smart() const
{
   return *static_cast<::evas::object_smart const*>(static_cast<void const*>(this));
}

inline ::eo_cxx::evas::object_smart::operator ::evas::object_smart&()
{
   return *static_cast<::evas::object_smart*>(static_cast<void*>(this));
}

inline ::eo_cxx::evas::object_smart::operator ::evas::object_smart const&() const
{
   return *static_cast<::evas::object_smart const*>(static_cast<void const*>(this));
}

template <typename T>
void evas_object_smart_show_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         static_cast<T*>(self->this_)->show();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void evas_object_smart_move_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Evas_Coord x_, Evas_Coord y_)
{
   try
      {
         static_cast<T*>(self->this_)->move(x_, y_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
bool evas_object_smart_callbacks_descriptions_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, const Evas_Smart_Cb_Description * descriptions_)
{
   try
      {
         return static_cast<T*>(self->this_)->callbacks_descriptions_set(descriptions_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Eina_Bool _tmp_ret{};
         return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }
}

template <typename T>
void evas_object_smart_callbacks_descriptions_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, const Evas_Smart_Cb_Description *** class_descriptions_, unsigned int* class_count_, const Evas_Smart_Cb_Description *** instance_descriptions_, unsigned int* instance_count_)
{
   try
      {
         static_cast<T*>(self->this_)->callbacks_descriptions_get(class_descriptions_, class_count_, instance_descriptions_, instance_count_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
Eina_Iterator * evas_object_smart_iterator_new_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
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
void evas_object_smart_callback_description_find_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, const char * name_, const Evas_Smart_Cb_Description ** class_description_, const Evas_Smart_Cb_Description ** instance_description_)
{
   try
      {
         static_cast<T*>(self->this_)->callback_description_find(::efl::eolian::to_cxx<::efl::eina::string_view>(name_, std::tuple<std::false_type>()), class_description_, instance_description_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void evas_object_smart_hide_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         static_cast<T*>(self->this_)->hide();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void evas_object_smart_calculate_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         static_cast<T*>(self->this_)->calculate();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void evas_object_smart_add_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         static_cast<T*>(self->this_)->add();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void evas_object_smart_member_add_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Evas_Object * sub_obj_)
{
   try
      {
         static_cast<T*>(self->this_)->member_add(::efl::eolian::to_cxx<::evas::object>(sub_obj_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void evas_object_smart_resize_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Evas_Coord w_, Evas_Coord h_)
{
   try
      {
         static_cast<T*>(self->this_)->resize(w_, h_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void evas_object_smart_clip_unset_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         static_cast<T*>(self->this_)->clip_unset();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void evas_object_smart_changed_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         static_cast<T*>(self->this_)->changed();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void evas_object_smart_member_del_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Evas_Object * sub_obj_)
{
   try
      {
         static_cast<T*>(self->this_)->member_del(::efl::eolian::to_cxx<::evas::object>(sub_obj_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void evas_object_smart_del_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         static_cast<T*>(self->this_)->del();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void evas_object_smart_attach_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Evas_Smart * s_)
{
   try
      {
         static_cast<T*>(self->this_)->attach(s_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
bool evas_object_smart_need_recalculate_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->need_recalculate_get();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Eina_Bool _tmp_ret{};
         return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }
}

template <typename T>
void evas_object_smart_need_recalculate_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Eina_Bool value_)
{
   try
      {
         static_cast<T*>(self->this_)->need_recalculate_set(::efl::eolian::to_cxx<bool>(value_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void evas_object_smart_clip_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Evas_Object * clip_)
{
   try
      {
         static_cast<T*>(self->this_)->clip_set(::efl::eolian::to_cxx<::evas::object>(clip_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void evas_object_smart_color_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, int r_, int g_, int b_, int a_)
{
   try
      {
         static_cast<T*>(self->this_)->color_set(r_, g_, b_, a_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void evas_object_smart_data_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, void * data_)
{
   try
      {
         static_cast<T*>(self->this_)->data_set(data_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
::efl::eina::range_list< ::evas::object > evas_object_smart_members_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->members_get();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Eina_List * _tmp_ret{};
         return ::efl::eolian::to_cxx<::efl::eina::range_list< ::evas::object >>(_tmp_ret, std::tuple<std::false_type, std::false_type>());
      }
}

template <typename T>
Evas_Smart * evas_object_smart_smart_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->smart_get();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Evas_Smart * _tmp_ret{};
         return _tmp_ret;
      }
}

namespace efl { namespace eo { namespace detail {

template<>
struct operations< ::evas::object_smart >
{
   template <typename T>
   struct type
         : virtual operations< ::evas::object >::template type<T>
         , virtual operations< ::evas::signal_interface >::template type<T>
   {
      virtual void show()
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_obj_smart_show());
      }

      virtual void move(Evas_Coord x_, Evas_Coord y_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_obj_smart_move(x_, y_));
      }

      virtual bool callbacks_descriptions_set(const Evas_Smart_Cb_Description * descriptions_)
      {
         Eina_Bool _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_obj_smart_callbacks_descriptions_set(descriptions_));
            return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }

      virtual void callbacks_descriptions_get(const Evas_Smart_Cb_Description *** class_descriptions_, unsigned int* class_count_, const Evas_Smart_Cb_Description *** instance_descriptions_, unsigned int* instance_count_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_obj_smart_callbacks_descriptions_get(class_descriptions_, class_count_, instance_descriptions_, instance_count_));
      }

      virtual Eina_Iterator * iterator_new()
      {
         Eina_Iterator * _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_obj_smart_iterator_new());
            return _tmp_ret;
      }

      virtual void callback_description_find(::efl::eina::string_view name_, const Evas_Smart_Cb_Description ** class_description_, const Evas_Smart_Cb_Description ** instance_description_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_obj_smart_callback_description_find(::efl::eolian::to_c(name_), class_description_, instance_description_));
      }

      virtual void hide()
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_obj_smart_hide());
      }

      virtual void calculate()
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_obj_smart_calculate());
      }

      virtual void add()
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_obj_smart_add());
      }

      virtual void member_add(::evas::object sub_obj_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_obj_smart_member_add(::efl::eolian::to_c(sub_obj_)));
      }

      virtual void resize(Evas_Coord w_, Evas_Coord h_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_obj_smart_resize(w_, h_));
      }

      virtual void clip_unset()
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_obj_smart_clip_unset());
      }

      virtual void changed()
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_obj_smart_changed());
      }

      virtual void member_del(::evas::object sub_obj_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_obj_smart_member_del(::efl::eolian::to_c(sub_obj_)));
      }

      virtual void del()
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_obj_smart_del());
      }

      virtual void attach(Evas_Smart * s_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_obj_smart_attach(s_));
      }

      virtual bool need_recalculate_get()
      {
         Eina_Bool _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_obj_smart_need_recalculate_get());
            return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }

      virtual void need_recalculate_set(bool value_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_obj_smart_need_recalculate_set(::efl::eolian::to_c(value_)));
      }

      virtual void clip_set(::evas::object clip_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_obj_smart_clip_set(::efl::eolian::to_c(clip_)));
      }

      virtual void color_set(int r_, int g_, int b_, int a_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_obj_smart_color_set(r_, g_, b_, a_));
      }

      virtual void data_set(void * data_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_obj_smart_data_set(data_));
      }

      virtual ::efl::eina::range_list< ::evas::object > members_get()
      {
         Eina_List * _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_obj_smart_members_get());
            return ::efl::eolian::to_cxx<::efl::eina::range_list< ::evas::object >>(_tmp_ret, std::tuple<std::false_type, std::false_type>());
      }

      virtual Evas_Smart * smart_get()
      {
         Evas_Smart * _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_obj_smart_get());
            return _tmp_ret;
      }

   };
};


template<>
struct operation_description_class_size< ::evas::object_smart >
{
   static constexpr int value = 
#if defined(OBJECT_SMART_PROTECTED) && defined(OBJECT_SMART_BETA)
      23
#elif defined(OBJECT_SMART_PROTECTED)
      23
#elif defined(OBJECT_SMART_BETA)
      23
#else
      23
#endif
      + operation_description_class_size<::evas::object >::value      + operation_description_class_size<::evas::signal_interface >::value;
};

template <typename T>
int initialize_operation_description(::efl::eo::detail::tag<::evas::object_smart>
                                 , Eo_Op_Description* ops)
{
   int i = 0;
   (void)i;
   (void)ops;
   ops[i].func = reinterpret_cast<void*>(& ::evas_object_smart_show_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_smart_show);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_object_smart_move_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_smart_move);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_object_smart_callbacks_descriptions_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_smart_callbacks_descriptions_set);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_object_smart_callbacks_descriptions_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_smart_callbacks_descriptions_get);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_object_smart_iterator_new_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_smart_iterator_new);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_object_smart_callback_description_find_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_smart_callback_description_find);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_object_smart_hide_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_smart_hide);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_object_smart_calculate_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_smart_calculate);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_object_smart_add_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_smart_add);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_object_smart_member_add_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_smart_member_add);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_object_smart_resize_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_smart_resize);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_object_smart_clip_unset_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_smart_clip_unset);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_object_smart_changed_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_smart_changed);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_object_smart_member_del_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_smart_member_del);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_object_smart_del_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_smart_del);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_object_smart_attach_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_smart_attach);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_object_smart_need_recalculate_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_smart_need_recalculate_get);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_object_smart_need_recalculate_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_smart_need_recalculate_set);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_object_smart_clip_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_smart_clip_set);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_object_smart_color_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_smart_color_set);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_object_smart_data_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_smart_data_set);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_object_smart_members_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_smart_members_get);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_object_smart_smart_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_smart_get);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   initialize_operation_description<T>(::efl::eo::detail::tag<::evas::object>(), &ops[operation_description_class_size< ::evas::object_smart >::value]);
   initialize_operation_description<T>(::efl::eo::detail::tag<::evas::signal_interface>(), &ops[operation_description_class_size< ::evas::object_smart >::value + operation_description_class_size<::evas::object>::value]);
   return 0;
}
inline Eo_Class const* get_eo_class(tag<::evas::object_smart>)
{
   return (EVAS_OBJECT_SMART_CLASS);
}

} } }

/// @endcond

