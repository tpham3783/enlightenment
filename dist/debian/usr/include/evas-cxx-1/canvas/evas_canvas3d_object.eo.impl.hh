/// @cond EO_CXX_EO_IMPL

inline void evas::canvas3d::object::change(Evas_Canvas3D_State state_, ::evas::canvas3d::object ref_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas3d_object_change(state_, ::efl::eolian::to_c(ref_)));
}

inline Evas_Canvas3D_Object_Type evas::canvas3d::object::type_get() const
{
   Evas_Canvas3D_Object_Type _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_canvas3d_object_type_get());
   return _tmp_ret;
}

inline void evas::canvas3d::object::type_set(Evas_Canvas3D_Object_Type type_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas3d_object_type_set(type_));
}

inline bool evas::canvas3d::object::dirty_get(Evas_Canvas3D_State state_) const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_canvas3d_object_dirty_get(state_));
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline void evas::canvas3d::object::update() const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas3d_object_update());
}

inline void evas::canvas3d::object::update_notify() const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas3d_object_update_notify());
}

inline void evas::canvas3d::object::change_notify(Evas_Canvas3D_State state_, ::evas::canvas3d::object ref_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas3d_object_change_notify(state_, ::efl::eolian::to_c(ref_)));
}

inline void evas::canvas3d::object::callback_register(::efl::eina::string_view event_, const void * data_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas3d_object_callback_register(::efl::eolian::to_c(event_), data_));
}

inline void evas::canvas3d::object::callback_unregister(::efl::eina::string_view event_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas3d_object_callback_unregister(::efl::eolian::to_c(event_)));
}

inline void eo_cxx::evas::canvas3d::object::change(Evas_Canvas3D_State state_, ::evas::canvas3d::object ref_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas3d_object_change(state_, ::efl::eolian::to_c(ref_)));
}

inline Evas_Canvas3D_Object_Type eo_cxx::evas::canvas3d::object::type_get() const
{
   Evas_Canvas3D_Object_Type _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_canvas3d_object_type_get());
   return _tmp_ret;
}

inline void eo_cxx::evas::canvas3d::object::type_set(Evas_Canvas3D_Object_Type type_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas3d_object_type_set(type_));
}

inline bool eo_cxx::evas::canvas3d::object::dirty_get(Evas_Canvas3D_State state_) const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_canvas3d_object_dirty_get(state_));
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline void eo_cxx::evas::canvas3d::object::update() const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas3d_object_update());
}

inline void eo_cxx::evas::canvas3d::object::update_notify() const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas3d_object_update_notify());
}

inline void eo_cxx::evas::canvas3d::object::change_notify(Evas_Canvas3D_State state_, ::evas::canvas3d::object ref_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas3d_object_change_notify(state_, ::efl::eolian::to_c(ref_)));
}

inline void eo_cxx::evas::canvas3d::object::callback_register(::efl::eina::string_view event_, const void * data_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas3d_object_callback_register(::efl::eolian::to_c(event_), data_));
}

inline void eo_cxx::evas::canvas3d::object::callback_unregister(::efl::eina::string_view event_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas3d_object_callback_unregister(::efl::eolian::to_c(event_)));
}

inline ::eo_cxx::evas::canvas3d::object::operator ::evas::canvas3d::object() const
{
   return *static_cast<::evas::canvas3d::object const*>(static_cast<void const*>(this));
}

inline ::eo_cxx::evas::canvas3d::object::operator ::evas::canvas3d::object&()
{
   return *static_cast<::evas::canvas3d::object*>(static_cast<void*>(this));
}

inline ::eo_cxx::evas::canvas3d::object::operator ::evas::canvas3d::object const&() const
{
   return *static_cast<::evas::canvas3d::object const*>(static_cast<void const*>(this));
}

template <typename T>
void evas_canvas3d_object_change_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Evas_Canvas3D_State state_, Evas_Canvas3D_Object * ref_)
{
   try
      {
         static_cast<T*>(self->this_)->change(state_, ::efl::eolian::to_cxx<::evas::canvas3d::object>(ref_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
Evas_Canvas3D_Object_Type evas_canvas3d_object_type_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->type_get();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Evas_Canvas3D_Object_Type _tmp_ret{};
         return _tmp_ret;
      }
}

template <typename T>
void evas_canvas3d_object_type_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Evas_Canvas3D_Object_Type type_)
{
   try
      {
         static_cast<T*>(self->this_)->type_set(type_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
bool evas_canvas3d_object_dirty_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Evas_Canvas3D_State state_)
{
   try
      {
         return static_cast<T*>(self->this_)->dirty_get(state_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Eina_Bool _tmp_ret{};
         return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }
}

template <typename T>
void evas_canvas3d_object_update_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         static_cast<T*>(self->this_)->update();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void evas_canvas3d_object_update_notify_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         static_cast<T*>(self->this_)->update_notify();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void evas_canvas3d_object_change_notify_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Evas_Canvas3D_State state_, Evas_Canvas3D_Object * ref_)
{
   try
      {
         static_cast<T*>(self->this_)->change_notify(state_, ::efl::eolian::to_cxx<::evas::canvas3d::object>(ref_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void evas_canvas3d_object_callback_register_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, const char * event_, const void * data_)
{
   try
      {
         static_cast<T*>(self->this_)->callback_register(::efl::eolian::to_cxx<::efl::eina::string_view>(event_, std::tuple<std::false_type>()), data_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void evas_canvas3d_object_callback_unregister_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, const char * event_)
{
   try
      {
         static_cast<T*>(self->this_)->callback_unregister(::efl::eolian::to_cxx<::efl::eina::string_view>(event_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

namespace efl { namespace eo { namespace detail {

template<>
struct operations< ::evas::canvas3d::object >
{
   template <typename T>
   struct type
         : virtual operations< ::eo::base >::template type<T>
         , virtual operations< ::evas::common_interface >::template type<T>
   {
      virtual void change(Evas_Canvas3D_State state_, ::evas::canvas3d::object ref_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_canvas3d_object_change(state_, ::efl::eolian::to_c(ref_)));
      }

      virtual Evas_Canvas3D_Object_Type type_get()
      {
         Evas_Canvas3D_Object_Type _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_canvas3d_object_type_get());
            return _tmp_ret;
      }

      virtual void type_set(Evas_Canvas3D_Object_Type type_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_canvas3d_object_type_set(type_));
      }

      virtual bool dirty_get(Evas_Canvas3D_State state_)
      {
         Eina_Bool _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_canvas3d_object_dirty_get(state_));
            return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }

      virtual void update()
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_canvas3d_object_update());
      }

      virtual void update_notify()
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_canvas3d_object_update_notify());
      }

      virtual void change_notify(Evas_Canvas3D_State state_, ::evas::canvas3d::object ref_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_canvas3d_object_change_notify(state_, ::efl::eolian::to_c(ref_)));
      }

      virtual void callback_register(::efl::eina::string_view event_, const void * data_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_canvas3d_object_callback_register(::efl::eolian::to_c(event_), data_));
      }

      virtual void callback_unregister(::efl::eina::string_view event_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_canvas3d_object_callback_unregister(::efl::eolian::to_c(event_)));
      }

   };
};


template<>
struct operation_description_class_size< ::evas::canvas3d::object >
{
   static constexpr int value = 
#if defined(OBJECT_PROTECTED) && defined(OBJECT_BETA)
      9
#elif defined(OBJECT_PROTECTED)
      9
#elif defined(OBJECT_BETA)
      9
#else
      9
#endif
      + operation_description_class_size<::eo::base >::value      + operation_description_class_size<::evas::common_interface >::value;
};

template <typename T>
int initialize_operation_description(::efl::eo::detail::tag<::evas::canvas3d::object>
                                 , Eo_Op_Description* ops)
{
   int i = 0;
   (void)i;
   (void)ops;
   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas3d_object_change_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas3d_object_change);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas3d_object_type_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas3d_object_type_get);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas3d_object_type_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas3d_object_type_set);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas3d_object_dirty_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas3d_object_dirty_get);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas3d_object_update_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas3d_object_update);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas3d_object_update_notify_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas3d_object_update_notify);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas3d_object_change_notify_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas3d_object_change_notify);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas3d_object_callback_register_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas3d_object_callback_register);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas3d_object_callback_unregister_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas3d_object_callback_unregister);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   initialize_operation_description<T>(::efl::eo::detail::tag<::eo::base>(), &ops[operation_description_class_size< ::evas::canvas3d::object >::value]);
   initialize_operation_description<T>(::efl::eo::detail::tag<::evas::common_interface>(), &ops[operation_description_class_size< ::evas::canvas3d::object >::value + operation_description_class_size<::eo::base>::value]);
   return 0;
}
inline Eo_Class const* get_eo_class(tag<::evas::canvas3d::object>)
{
   return (EVAS_CANVAS3D_OBJECT_CLASS);
}

} } }

/// @endcond

