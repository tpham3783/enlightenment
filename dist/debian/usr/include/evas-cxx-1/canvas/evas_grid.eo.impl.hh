/// @cond EO_CXX_EO_IMPL

inline Eina_Accessor * evas::grid::accessor_new() const
{
   Eina_Accessor * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_grid_accessor_new());
   return _tmp_ret;
}

inline void evas::grid::clear(bool clear_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_grid_clear(::efl::eolian::to_c(clear_)));
}

inline Eina_Iterator * evas::grid::iterator_new() const
{
   Eina_Iterator * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_grid_iterator_new());
   return _tmp_ret;
}

inline ::evas::object evas::grid::add_to() const
{
   Evas_Object * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_grid_add_to());
   return ::efl::eolian::to_cxx<::evas::object>(_tmp_ret, std::tuple<std::false_type>());
}

inline bool evas::grid::unpack(::evas::object child_) const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_grid_unpack(::efl::eolian::to_c(child_)));
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline bool evas::grid::pack_get(::evas::object child_, int* x_, int* y_, int* w_, int* h_) const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_grid_pack_get(::efl::eolian::to_c(child_), x_, y_, w_, h_));
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline bool evas::grid::pack(::evas::object child_, int x_, int y_, int w_, int h_) const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_grid_pack(::efl::eolian::to_c(child_), x_, y_, w_, h_));
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline bool evas::grid::mirrored_get() const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_grid_mirrored_get());
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline void evas::grid::mirrored_set(bool mirrored_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_grid_mirrored_set(::efl::eolian::to_c(mirrored_)));
}

inline void evas::grid::size_get(int* w_, int* h_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_grid_size_get(w_, h_));
}

inline void evas::grid::size_set(int w_, int h_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_grid_size_set(w_, h_));
}

inline ::efl::eina::list< ::evas::object > evas::grid::children_get() const
{
   Eina_List * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_grid_children_get());
   return ::efl::eolian::to_cxx<::efl::eina::list< ::evas::object >>(_tmp_ret, std::tuple<std::true_type, std::false_type>());
}

inline Eina_Accessor * eo_cxx::evas::grid::accessor_new() const
{
   Eina_Accessor * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_grid_accessor_new());
   return _tmp_ret;
}

inline void eo_cxx::evas::grid::clear(bool clear_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_grid_clear(::efl::eolian::to_c(clear_)));
}

inline Eina_Iterator * eo_cxx::evas::grid::iterator_new() const
{
   Eina_Iterator * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_grid_iterator_new());
   return _tmp_ret;
}

inline ::evas::object eo_cxx::evas::grid::add_to() const
{
   Evas_Object * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_grid_add_to());
   return ::efl::eolian::to_cxx<::evas::object>(_tmp_ret, std::tuple<std::false_type>());
}

inline bool eo_cxx::evas::grid::unpack(::evas::object child_) const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_grid_unpack(::efl::eolian::to_c(child_)));
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline bool eo_cxx::evas::grid::pack_get(::evas::object child_, int* x_, int* y_, int* w_, int* h_) const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_grid_pack_get(::efl::eolian::to_c(child_), x_, y_, w_, h_));
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline bool eo_cxx::evas::grid::pack(::evas::object child_, int x_, int y_, int w_, int h_) const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_grid_pack(::efl::eolian::to_c(child_), x_, y_, w_, h_));
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline bool eo_cxx::evas::grid::mirrored_get() const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_grid_mirrored_get());
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline void eo_cxx::evas::grid::mirrored_set(bool mirrored_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_grid_mirrored_set(::efl::eolian::to_c(mirrored_)));
}

inline void eo_cxx::evas::grid::size_get(int* w_, int* h_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_grid_size_get(w_, h_));
}

inline void eo_cxx::evas::grid::size_set(int w_, int h_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_grid_size_set(w_, h_));
}

inline ::efl::eina::list< ::evas::object > eo_cxx::evas::grid::children_get() const
{
   Eina_List * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_grid_children_get());
   return ::efl::eolian::to_cxx<::efl::eina::list< ::evas::object >>(_tmp_ret, std::tuple<std::true_type, std::false_type>());
}

inline ::eo_cxx::evas::grid::operator ::evas::grid() const
{
   return *static_cast<::evas::grid const*>(static_cast<void const*>(this));
}

inline ::eo_cxx::evas::grid::operator ::evas::grid&()
{
   return *static_cast<::evas::grid*>(static_cast<void*>(this));
}

inline ::eo_cxx::evas::grid::operator ::evas::grid const&() const
{
   return *static_cast<::evas::grid const*>(static_cast<void const*>(this));
}

template <typename T>
Eina_Accessor * evas_grid_accessor_new_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
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
void evas_grid_clear_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Eina_Bool clear_)
{
   try
      {
         static_cast<T*>(self->this_)->clear(::efl::eolian::to_cxx<bool>(clear_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
Eina_Iterator * evas_grid_iterator_new_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
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
::evas::object evas_grid_add_to_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
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
bool evas_grid_unpack_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Evas_Object * child_)
{
   try
      {
         return static_cast<T*>(self->this_)->unpack(::efl::eolian::to_cxx<::evas::object>(child_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Eina_Bool _tmp_ret{};
         return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }
}

template <typename T>
bool evas_grid_pack_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Evas_Object * child_, int* x_, int* y_, int* w_, int* h_)
{
   try
      {
         return static_cast<T*>(self->this_)->pack_get(::efl::eolian::to_cxx<::evas::object>(child_, std::tuple<std::false_type>()), x_, y_, w_, h_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Eina_Bool _tmp_ret{};
         return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }
}

template <typename T>
bool evas_grid_pack_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Evas_Object * child_, int x_, int y_, int w_, int h_)
{
   try
      {
         return static_cast<T*>(self->this_)->pack(::efl::eolian::to_cxx<::evas::object>(child_, std::tuple<std::false_type>()), x_, y_, w_, h_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Eina_Bool _tmp_ret{};
         return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }
}

template <typename T>
bool evas_grid_mirrored_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->mirrored_get();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Eina_Bool _tmp_ret{};
         return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }
}

template <typename T>
void evas_grid_mirrored_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Eina_Bool mirrored_)
{
   try
      {
         static_cast<T*>(self->this_)->mirrored_set(::efl::eolian::to_cxx<bool>(mirrored_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void evas_grid_size_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, int* w_, int* h_)
{
   try
      {
         static_cast<T*>(self->this_)->size_get(w_, h_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void evas_grid_size_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, int w_, int h_)
{
   try
      {
         static_cast<T*>(self->this_)->size_set(w_, h_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
::efl::eina::list< ::evas::object > evas_grid_children_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->children_get();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Eina_List * _tmp_ret{};
         return ::efl::eolian::to_cxx<::efl::eina::list< ::evas::object >>(_tmp_ret, std::tuple<std::true_type, std::false_type>());
      }
}

namespace efl { namespace eo { namespace detail {

template<>
struct operations< ::evas::grid >
{
   template <typename T>
   struct type
         : virtual operations< ::evas::smart_clipped >::template type<T>
   {
      virtual Eina_Accessor * accessor_new()
      {
         Eina_Accessor * _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_obj_grid_accessor_new());
            return _tmp_ret;
      }

      virtual void clear(bool clear_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_obj_grid_clear(::efl::eolian::to_c(clear_)));
      }

      virtual Eina_Iterator * iterator_new()
      {
         Eina_Iterator * _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_obj_grid_iterator_new());
            return _tmp_ret;
      }

      virtual ::evas::object add_to()
      {
         Evas_Object * _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_obj_grid_add_to());
            return ::efl::eolian::to_cxx<::evas::object>(_tmp_ret, std::tuple<std::false_type>());
      }

      virtual bool unpack(::evas::object child_)
      {
         Eina_Bool _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_obj_grid_unpack(::efl::eolian::to_c(child_)));
            return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }

      virtual bool pack_get(::evas::object child_, int* x_, int* y_, int* w_, int* h_)
      {
         Eina_Bool _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_obj_grid_pack_get(::efl::eolian::to_c(child_), x_, y_, w_, h_));
            return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }

      virtual bool pack(::evas::object child_, int x_, int y_, int w_, int h_)
      {
         Eina_Bool _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_obj_grid_pack(::efl::eolian::to_c(child_), x_, y_, w_, h_));
            return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }

      virtual bool mirrored_get()
      {
         Eina_Bool _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_obj_grid_mirrored_get());
            return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }

      virtual void mirrored_set(bool mirrored_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_obj_grid_mirrored_set(::efl::eolian::to_c(mirrored_)));
      }

      virtual void size_get(int* w_, int* h_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_obj_grid_size_get(w_, h_));
      }

      virtual void size_set(int w_, int h_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_obj_grid_size_set(w_, h_));
      }

      virtual ::efl::eina::list< ::evas::object > children_get()
      {
         Eina_List * _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_obj_grid_children_get());
            return ::efl::eolian::to_cxx<::efl::eina::list< ::evas::object >>(_tmp_ret, std::tuple<std::true_type, std::false_type>());
      }

   };
};


template<>
struct operation_description_class_size< ::evas::grid >
{
   static constexpr int value = 
#if defined(GRID_PROTECTED) && defined(GRID_BETA)
      12
#elif defined(GRID_PROTECTED)
      12
#elif defined(GRID_BETA)
      12
#else
      12
#endif
      + operation_description_class_size<::evas::smart_clipped >::value;
};

template <typename T>
int initialize_operation_description(::efl::eo::detail::tag<::evas::grid>
                                 , Eo_Op_Description* ops)
{
   int i = 0;
   (void)i;
   (void)ops;
   ops[i].func = reinterpret_cast<void*>(& ::evas_grid_accessor_new_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_grid_accessor_new);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_grid_clear_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_grid_clear);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_grid_iterator_new_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_grid_iterator_new);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_grid_add_to_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_grid_add_to);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_grid_unpack_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_grid_unpack);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_grid_pack_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_grid_pack_get);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_grid_pack_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_grid_pack);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_grid_mirrored_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_grid_mirrored_get);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_grid_mirrored_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_grid_mirrored_set);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_grid_size_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_grid_size_get);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_grid_size_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_grid_size_set);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_grid_children_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_grid_children_get);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   initialize_operation_description<T>(::efl::eo::detail::tag<::evas::smart_clipped>(), &ops[operation_description_class_size< ::evas::grid >::value]);
   return 0;
}
inline Eo_Class const* get_eo_class(tag<::evas::grid>)
{
   return (EVAS_GRID_CLASS);
}

} } }

/// @endcond

