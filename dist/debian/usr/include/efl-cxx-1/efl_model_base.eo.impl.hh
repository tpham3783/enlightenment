/// @cond EO_CXX_EO_IMPL

inline void efl::model::base::load() const
{
   eo_do(_concrete_eo_ptr(), ::efl_model_load());
}

inline void efl::model::base::unload() const
{
   eo_do(_concrete_eo_ptr(), ::efl_model_unload());
}

inline void efl::model::base::properties_load() const
{
   eo_do(_concrete_eo_ptr(), ::efl_model_properties_load());
}

inline void efl::model::base::children_load() const
{
   eo_do(_concrete_eo_ptr(), ::efl_model_children_load());
}

inline ::eo::base efl::model::base::child_add() const
{
   Eo_Base * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::efl_model_child_add());
   return ::efl::eolian::to_cxx<::eo::base>(_tmp_ret, std::tuple<std::false_type>());
}

inline Efl_Model_Load_Status efl::model::base::child_del(::eo::base child_) const
{
   Efl_Model_Load_Status _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::efl_model_child_del(::efl::eolian::to_c(child_)));
   return _tmp_ret;
}

inline Efl_Model_Load_Status efl::model::base::load_status_get() const
{
   Efl_Model_Load_Status _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::efl_model_load_status_get());
   return _tmp_ret;
}

inline Efl_Model_Load_Status efl::model::base::properties_get(Eina_Array * const* properties_) const
{
   Efl_Model_Load_Status _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::efl_model_properties_get(properties_));
   return _tmp_ret;
}

inline Efl_Model_Load_Status efl::model::base::property_get(::efl::eina::string_view property_, const Eina_Value ** value_) const
{
   Efl_Model_Load_Status _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::efl_model_property_get(::efl::eolian::to_c(property_), value_));
   return _tmp_ret;
}

inline Efl_Model_Load_Status efl::model::base::property_set(::efl::eina::string_view property_, const Eina_Value * value_) const
{
   Efl_Model_Load_Status _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::efl_model_property_set(::efl::eolian::to_c(property_), value_));
   return _tmp_ret;
}

inline Efl_Model_Load_Status efl::model::base::children_slice_get(unsigned int start_, unsigned int count_, Eina_Accessor ** children_accessor_) const
{
   Efl_Model_Load_Status _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::efl_model_children_slice_get(start_, count_, children_accessor_));
   return _tmp_ret;
}

inline Efl_Model_Load_Status efl::model::base::children_count_get(unsigned int* children_count_) const
{
   Efl_Model_Load_Status _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::efl_model_children_count_get(children_count_));
   return _tmp_ret;
}

inline void eo_cxx::efl::model::base::load() const
{
   eo_do(_concrete_eo_ptr(), ::efl_model_load());
}

inline void eo_cxx::efl::model::base::unload() const
{
   eo_do(_concrete_eo_ptr(), ::efl_model_unload());
}

inline void eo_cxx::efl::model::base::properties_load() const
{
   eo_do(_concrete_eo_ptr(), ::efl_model_properties_load());
}

inline void eo_cxx::efl::model::base::children_load() const
{
   eo_do(_concrete_eo_ptr(), ::efl_model_children_load());
}

inline ::eo::base eo_cxx::efl::model::base::child_add() const
{
   Eo_Base * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::efl_model_child_add());
   return ::efl::eolian::to_cxx<::eo::base>(_tmp_ret, std::tuple<std::false_type>());
}

inline Efl_Model_Load_Status eo_cxx::efl::model::base::child_del(::eo::base child_) const
{
   Efl_Model_Load_Status _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::efl_model_child_del(::efl::eolian::to_c(child_)));
   return _tmp_ret;
}

inline Efl_Model_Load_Status eo_cxx::efl::model::base::load_status_get() const
{
   Efl_Model_Load_Status _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::efl_model_load_status_get());
   return _tmp_ret;
}

inline Efl_Model_Load_Status eo_cxx::efl::model::base::properties_get(Eina_Array * const* properties_) const
{
   Efl_Model_Load_Status _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::efl_model_properties_get(properties_));
   return _tmp_ret;
}

inline Efl_Model_Load_Status eo_cxx::efl::model::base::property_get(::efl::eina::string_view property_, const Eina_Value ** value_) const
{
   Efl_Model_Load_Status _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::efl_model_property_get(::efl::eolian::to_c(property_), value_));
   return _tmp_ret;
}

inline Efl_Model_Load_Status eo_cxx::efl::model::base::property_set(::efl::eina::string_view property_, const Eina_Value * value_) const
{
   Efl_Model_Load_Status _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::efl_model_property_set(::efl::eolian::to_c(property_), value_));
   return _tmp_ret;
}

inline Efl_Model_Load_Status eo_cxx::efl::model::base::children_slice_get(unsigned int start_, unsigned int count_, Eina_Accessor ** children_accessor_) const
{
   Efl_Model_Load_Status _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::efl_model_children_slice_get(start_, count_, children_accessor_));
   return _tmp_ret;
}

inline Efl_Model_Load_Status eo_cxx::efl::model::base::children_count_get(unsigned int* children_count_) const
{
   Efl_Model_Load_Status _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::efl_model_children_count_get(children_count_));
   return _tmp_ret;
}

inline ::eo_cxx::efl::model::base::operator ::efl::model::base() const
{
   return *static_cast<::efl::model::base const*>(static_cast<void const*>(this));
}

inline ::eo_cxx::efl::model::base::operator ::efl::model::base&()
{
   return *static_cast<::efl::model::base*>(static_cast<void*>(this));
}

inline ::eo_cxx::efl::model::base::operator ::efl::model::base const&() const
{
   return *static_cast<::efl::model::base const*>(static_cast<void const*>(this));
}

template <typename T>
void efl_model_base_load_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         static_cast<T*>(self->this_)->load();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void efl_model_base_unload_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         static_cast<T*>(self->this_)->unload();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void efl_model_base_properties_load_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         static_cast<T*>(self->this_)->properties_load();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void efl_model_base_children_load_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         static_cast<T*>(self->this_)->children_load();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
::eo::base efl_model_base_child_add_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->child_add();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Eo_Base * _tmp_ret{};
         return ::efl::eolian::to_cxx<::eo::base>(_tmp_ret, std::tuple<std::false_type>());
      }
}

template <typename T>
Efl_Model_Load_Status efl_model_base_child_del_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Eo_Base * child_)
{
   try
      {
         return static_cast<T*>(self->this_)->child_del(::efl::eolian::to_cxx<::eo::base>(child_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Efl_Model_Load_Status _tmp_ret{};
         return _tmp_ret;
      }
}

template <typename T>
Efl_Model_Load_Status efl_model_base_load_status_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->load_status_get();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Efl_Model_Load_Status _tmp_ret{};
         return _tmp_ret;
      }
}

template <typename T>
Efl_Model_Load_Status efl_model_base_properties_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Eina_Array * const* properties_)
{
   try
      {
         return static_cast<T*>(self->this_)->properties_get(properties_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Efl_Model_Load_Status _tmp_ret{};
         return _tmp_ret;
      }
}

template <typename T>
Efl_Model_Load_Status efl_model_base_property_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, const char * property_, const Eina_Value ** value_)
{
   try
      {
         return static_cast<T*>(self->this_)->property_get(::efl::eolian::to_cxx<::efl::eina::string_view>(property_, std::tuple<std::false_type>()), value_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Efl_Model_Load_Status _tmp_ret{};
         return _tmp_ret;
      }
}

template <typename T>
Efl_Model_Load_Status efl_model_base_property_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, const char * property_, const Eina_Value * value_)
{
   try
      {
         return static_cast<T*>(self->this_)->property_set(::efl::eolian::to_cxx<::efl::eina::string_view>(property_, std::tuple<std::false_type>()), value_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Efl_Model_Load_Status _tmp_ret{};
         return _tmp_ret;
      }
}

template <typename T>
Efl_Model_Load_Status efl_model_base_children_slice_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, unsigned int start_, unsigned int count_, Eina_Accessor ** children_accessor_)
{
   try
      {
         return static_cast<T*>(self->this_)->children_slice_get(start_, count_, children_accessor_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Efl_Model_Load_Status _tmp_ret{};
         return _tmp_ret;
      }
}

template <typename T>
Efl_Model_Load_Status efl_model_base_children_count_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, unsigned int* children_count_)
{
   try
      {
         return static_cast<T*>(self->this_)->children_count_get(children_count_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Efl_Model_Load_Status _tmp_ret{};
         return _tmp_ret;
      }
}

namespace efl { namespace eo { namespace detail {

template<>
struct operations< ::efl::model::base >
{
   template <typename T>
   struct type
   {
      virtual void load()
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::efl_model_load());
      }

      virtual void unload()
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::efl_model_unload());
      }

      virtual void properties_load()
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::efl_model_properties_load());
      }

      virtual void children_load()
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::efl_model_children_load());
      }

      virtual ::eo::base child_add()
      {
         Eo_Base * _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::efl_model_child_add());
            return ::efl::eolian::to_cxx<::eo::base>(_tmp_ret, std::tuple<std::false_type>());
      }

      virtual Efl_Model_Load_Status child_del(::eo::base child_)
      {
         Efl_Model_Load_Status _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::efl_model_child_del(::efl::eolian::to_c(child_)));
            return _tmp_ret;
      }

      virtual Efl_Model_Load_Status load_status_get()
      {
         Efl_Model_Load_Status _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::efl_model_load_status_get());
            return _tmp_ret;
      }

      virtual Efl_Model_Load_Status properties_get(Eina_Array * const* properties_)
      {
         Efl_Model_Load_Status _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::efl_model_properties_get(properties_));
            return _tmp_ret;
      }

      virtual Efl_Model_Load_Status property_get(::efl::eina::string_view property_, const Eina_Value ** value_)
      {
         Efl_Model_Load_Status _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::efl_model_property_get(::efl::eolian::to_c(property_), value_));
            return _tmp_ret;
      }

      virtual Efl_Model_Load_Status property_set(::efl::eina::string_view property_, const Eina_Value * value_)
      {
         Efl_Model_Load_Status _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::efl_model_property_set(::efl::eolian::to_c(property_), value_));
            return _tmp_ret;
      }

      virtual Efl_Model_Load_Status children_slice_get(unsigned int start_, unsigned int count_, Eina_Accessor ** children_accessor_)
      {
         Efl_Model_Load_Status _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::efl_model_children_slice_get(start_, count_, children_accessor_));
            return _tmp_ret;
      }

      virtual Efl_Model_Load_Status children_count_get(unsigned int* children_count_)
      {
         Efl_Model_Load_Status _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::efl_model_children_count_get(children_count_));
            return _tmp_ret;
      }

   };
};


template<>
struct operation_description_class_size< ::efl::model::base >
{
   static constexpr int value = 
#if defined(BASE_PROTECTED) && defined(BASE_BETA)
      12
#elif defined(BASE_PROTECTED)
      12
#elif defined(BASE_BETA)
      12
#else
      12
#endif
;
};

template <typename T>
int initialize_operation_description(::efl::eo::detail::tag<::efl::model::base>
                                 , Eo_Op_Description* ops)
{
   int i = 0;
   (void)i;
   (void)ops;
   ops[i].func = reinterpret_cast<void*>(& ::efl_model_base_load_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::efl_model_load);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::efl_model_base_unload_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::efl_model_unload);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::efl_model_base_properties_load_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::efl_model_properties_load);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::efl_model_base_children_load_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::efl_model_children_load);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::efl_model_base_child_add_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::efl_model_child_add);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::efl_model_base_child_del_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::efl_model_child_del);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::efl_model_base_load_status_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::efl_model_load_status_get);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::efl_model_base_properties_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::efl_model_properties_get);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::efl_model_base_property_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::efl_model_property_get);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::efl_model_base_property_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::efl_model_property_set);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::efl_model_base_children_slice_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::efl_model_children_slice_get);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::efl_model_base_children_count_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::efl_model_children_count_get);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   return 0;
}
inline Eo_Class const* get_eo_class(tag<::efl::model::base>)
{
   return (EFL_MODEL_BASE_INTERFACE);
}

} } }

/// @endcond

