/// @cond EO_CXX_EO_IMPL

inline bool efl::file::save(::efl::eina::string_view file_, ::efl::eina::string_view key_, ::efl::eina::string_view flags_) const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::efl_file_save(::efl::eolian::to_c(file_), ::efl::eolian::to_c(key_), ::efl::eolian::to_c(flags_)));
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline void efl::file::eject() const
{
   eo_do(_concrete_eo_ptr(), ::efl_file_eject());
}

inline bool efl::file::async_wait() const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::efl_file_async_wait());
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline void efl::file::mmap_get(const Eina_File ** f_, const char ** key_) const
{
   eo_do(_concrete_eo_ptr(), ::efl_file_mmap_get(f_, key_));
}

inline bool efl::file::mmap_set(const Eina_File * f_, ::efl::eina::string_view key_) const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::efl_file_mmap_set(f_, ::efl::eolian::to_c(key_)));
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline void efl::file::file_get(const char ** file_, const char ** key_) const
{
   eo_do(_concrete_eo_ptr(), ::efl_file_get(file_, key_));
}

inline bool efl::file::file_set(::efl::eina::string_view file_, ::efl::eina::string_view key_) const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::efl_file_set(::efl::eolian::to_c(file_), ::efl::eolian::to_c(key_)));
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline bool efl::file::async_get() const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::efl_file_async_get());
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline void efl::file::async_set(bool async_) const
{
   eo_do(_concrete_eo_ptr(), ::efl_file_async_set(::efl::eolian::to_c(async_)));
}

inline bool eo_cxx::efl::file::save(::efl::eina::string_view file_, ::efl::eina::string_view key_, ::efl::eina::string_view flags_) const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::efl_file_save(::efl::eolian::to_c(file_), ::efl::eolian::to_c(key_), ::efl::eolian::to_c(flags_)));
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline void eo_cxx::efl::file::eject() const
{
   eo_do(_concrete_eo_ptr(), ::efl_file_eject());
}

inline bool eo_cxx::efl::file::async_wait() const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::efl_file_async_wait());
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline void eo_cxx::efl::file::mmap_get(const Eina_File ** f_, const char ** key_) const
{
   eo_do(_concrete_eo_ptr(), ::efl_file_mmap_get(f_, key_));
}

inline bool eo_cxx::efl::file::mmap_set(const Eina_File * f_, ::efl::eina::string_view key_) const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::efl_file_mmap_set(f_, ::efl::eolian::to_c(key_)));
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline void eo_cxx::efl::file::file_get(const char ** file_, const char ** key_) const
{
   eo_do(_concrete_eo_ptr(), ::efl_file_get(file_, key_));
}

inline bool eo_cxx::efl::file::file_set(::efl::eina::string_view file_, ::efl::eina::string_view key_) const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::efl_file_set(::efl::eolian::to_c(file_), ::efl::eolian::to_c(key_)));
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline bool eo_cxx::efl::file::async_get() const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::efl_file_async_get());
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline void eo_cxx::efl::file::async_set(bool async_) const
{
   eo_do(_concrete_eo_ptr(), ::efl_file_async_set(::efl::eolian::to_c(async_)));
}

inline ::eo_cxx::efl::file::operator ::efl::file() const
{
   return *static_cast<::efl::file const*>(static_cast<void const*>(this));
}

inline ::eo_cxx::efl::file::operator ::efl::file&()
{
   return *static_cast<::efl::file*>(static_cast<void*>(this));
}

inline ::eo_cxx::efl::file::operator ::efl::file const&() const
{
   return *static_cast<::efl::file const*>(static_cast<void const*>(this));
}

template <typename T>
bool efl_file_save_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, const char * file_, const char * key_, const char * flags_)
{
   try
      {
         return static_cast<T*>(self->this_)->save(::efl::eolian::to_cxx<::efl::eina::string_view>(file_, std::tuple<std::false_type>()), ::efl::eolian::to_cxx<::efl::eina::string_view>(key_, std::tuple<std::false_type>()), ::efl::eolian::to_cxx<::efl::eina::string_view>(flags_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Eina_Bool _tmp_ret{};
         return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }
}

template <typename T>
void efl_file_eject_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         static_cast<T*>(self->this_)->eject();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
bool efl_file_async_wait_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->async_wait();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Eina_Bool _tmp_ret{};
         return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }
}

template <typename T>
void efl_file_mmap_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, const Eina_File ** f_, const char ** key_)
{
   try
      {
         static_cast<T*>(self->this_)->mmap_get(f_, key_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
bool efl_file_mmap_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, const Eina_File * f_, const char * key_)
{
   try
      {
         return static_cast<T*>(self->this_)->mmap_set(f_, ::efl::eolian::to_cxx<::efl::eina::string_view>(key_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Eina_Bool _tmp_ret{};
         return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }
}

template <typename T>
void efl_file_file_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, const char ** file_, const char ** key_)
{
   try
      {
         static_cast<T*>(self->this_)->file_get(file_, key_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
bool efl_file_file_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, const char * file_, const char * key_)
{
   try
      {
         return static_cast<T*>(self->this_)->file_set(::efl::eolian::to_cxx<::efl::eina::string_view>(file_, std::tuple<std::false_type>()), ::efl::eolian::to_cxx<::efl::eina::string_view>(key_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Eina_Bool _tmp_ret{};
         return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }
}

template <typename T>
bool efl_file_async_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->async_get();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Eina_Bool _tmp_ret{};
         return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }
}

template <typename T>
void efl_file_async_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Eina_Bool async_)
{
   try
      {
         static_cast<T*>(self->this_)->async_set(::efl::eolian::to_cxx<bool>(async_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

namespace efl { namespace eo { namespace detail {

template<>
struct operations< ::efl::file >
{
   template <typename T>
   struct type
   {
      virtual bool save(::efl::eina::string_view file_, ::efl::eina::string_view key_, ::efl::eina::string_view flags_)
      {
         Eina_Bool _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::efl_file_save(::efl::eolian::to_c(file_), ::efl::eolian::to_c(key_), ::efl::eolian::to_c(flags_)));
            return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }

      virtual void eject()
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::efl_file_eject());
      }

      virtual bool async_wait()
      {
         Eina_Bool _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::efl_file_async_wait());
            return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }

      virtual void mmap_get(const Eina_File ** f_, const char ** key_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::efl_file_mmap_get(f_, key_));
      }

      virtual bool mmap_set(const Eina_File * f_, ::efl::eina::string_view key_)
      {
         Eina_Bool _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::efl_file_mmap_set(f_, ::efl::eolian::to_c(key_)));
            return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }

      virtual void file_get(const char ** file_, const char ** key_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::efl_file_get(file_, key_));
      }

      virtual bool file_set(::efl::eina::string_view file_, ::efl::eina::string_view key_)
      {
         Eina_Bool _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::efl_file_set(::efl::eolian::to_c(file_), ::efl::eolian::to_c(key_)));
            return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }

      virtual bool async_get()
      {
         Eina_Bool _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::efl_file_async_get());
            return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }

      virtual void async_set(bool async_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::efl_file_async_set(::efl::eolian::to_c(async_)));
      }

   };
};


template<>
struct operation_description_class_size< ::efl::file >
{
   static constexpr int value = 
#if defined(FILE_PROTECTED) && defined(FILE_BETA)
      9
#elif defined(FILE_PROTECTED)
      9
#elif defined(FILE_BETA)
      9
#else
      9
#endif
;
};

template <typename T>
int initialize_operation_description(::efl::eo::detail::tag<::efl::file>
                                 , Eo_Op_Description* ops)
{
   int i = 0;
   (void)i;
   (void)ops;
   ops[i].func = reinterpret_cast<void*>(& ::efl_file_save_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::efl_file_save);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::efl_file_eject_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::efl_file_eject);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::efl_file_async_wait_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::efl_file_async_wait);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::efl_file_mmap_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::efl_file_mmap_get);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::efl_file_mmap_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::efl_file_mmap_set);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::efl_file_file_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::efl_file_get);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::efl_file_file_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::efl_file_set);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::efl_file_async_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::efl_file_async_get);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::efl_file_async_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::efl_file_async_set);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   return 0;
}
inline Eo_Class const* get_eo_class(tag<::efl::file>)
{
   return (EFL_FILE_INTERFACE);
}

} } }

/// @endcond

