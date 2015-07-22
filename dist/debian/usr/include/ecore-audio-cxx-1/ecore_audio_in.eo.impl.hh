/// @cond EO_CXX_EO_IMPL

inline ssize_t ecore_audio_in::read(void * buf_, size_t len_) const
{
   ssize_t _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::ecore_audio_obj_in_read(buf_, len_));
   return _tmp_ret;
}

inline ssize_t ecore_audio_in::read_internal(void * buf_, size_t len_) const
{
   ssize_t _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::ecore_audio_obj_in_read_internal(buf_, len_));
   return _tmp_ret;
}

inline double ecore_audio_in::seek(double offs_, int mode_) const
{
   double _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::ecore_audio_obj_in_seek(offs_, mode_));
   return _tmp_ret;
}

inline double ecore_audio_in::speed_get() const
{
   double _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::ecore_audio_obj_in_speed_get());
   return _tmp_ret;
}

inline void ecore_audio_in::speed_set(double speed_) const
{
   eo_do(_concrete_eo_ptr(), ::ecore_audio_obj_in_speed_set(speed_));
}

inline int ecore_audio_in::samplerate_get() const
{
   int _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::ecore_audio_obj_in_samplerate_get());
   return _tmp_ret;
}

inline void ecore_audio_in::samplerate_set(int samplerate_) const
{
   eo_do(_concrete_eo_ptr(), ::ecore_audio_obj_in_samplerate_set(samplerate_));
}

inline int ecore_audio_in::channels_get() const
{
   int _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::ecore_audio_obj_in_channels_get());
   return _tmp_ret;
}

inline void ecore_audio_in::channels_set(int channels_) const
{
   eo_do(_concrete_eo_ptr(), ::ecore_audio_obj_in_channels_set(channels_));
}

inline bool ecore_audio_in::preloaded_get() const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::ecore_audio_obj_in_preloaded_get());
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline void ecore_audio_in::preloaded_set(bool preloaded_) const
{
   eo_do(_concrete_eo_ptr(), ::ecore_audio_obj_in_preloaded_set(::efl::eolian::to_c(preloaded_)));
}

inline bool ecore_audio_in::looped_get() const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::ecore_audio_obj_in_looped_get());
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline void ecore_audio_in::looped_set(bool looped_) const
{
   eo_do(_concrete_eo_ptr(), ::ecore_audio_obj_in_looped_set(::efl::eolian::to_c(looped_)));
}

inline double ecore_audio_in::length_get() const
{
   double _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::ecore_audio_obj_in_length_get());
   return _tmp_ret;
}

inline void ecore_audio_in::length_set(double length_) const
{
   eo_do(_concrete_eo_ptr(), ::ecore_audio_obj_in_length_set(length_));
}

inline ::efl::eo::concrete ecore_audio_in::output_get() const
{
   Eo * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::ecore_audio_obj_in_output_get());
   return ::efl::eolian::to_cxx<::efl::eo::concrete>(_tmp_ret, std::tuple<std::false_type>());
}

inline double ecore_audio_in::remaining_get() const
{
   double _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::ecore_audio_obj_in_remaining_get());
   return _tmp_ret;
}

inline ssize_t eo_cxx::ecore_audio_in::read(void * buf_, size_t len_) const
{
   ssize_t _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::ecore_audio_obj_in_read(buf_, len_));
   return _tmp_ret;
}

inline ssize_t eo_cxx::ecore_audio_in::read_internal(void * buf_, size_t len_) const
{
   ssize_t _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::ecore_audio_obj_in_read_internal(buf_, len_));
   return _tmp_ret;
}

inline double eo_cxx::ecore_audio_in::seek(double offs_, int mode_) const
{
   double _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::ecore_audio_obj_in_seek(offs_, mode_));
   return _tmp_ret;
}

inline double eo_cxx::ecore_audio_in::speed_get() const
{
   double _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::ecore_audio_obj_in_speed_get());
   return _tmp_ret;
}

inline void eo_cxx::ecore_audio_in::speed_set(double speed_) const
{
   eo_do(_concrete_eo_ptr(), ::ecore_audio_obj_in_speed_set(speed_));
}

inline int eo_cxx::ecore_audio_in::samplerate_get() const
{
   int _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::ecore_audio_obj_in_samplerate_get());
   return _tmp_ret;
}

inline void eo_cxx::ecore_audio_in::samplerate_set(int samplerate_) const
{
   eo_do(_concrete_eo_ptr(), ::ecore_audio_obj_in_samplerate_set(samplerate_));
}

inline int eo_cxx::ecore_audio_in::channels_get() const
{
   int _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::ecore_audio_obj_in_channels_get());
   return _tmp_ret;
}

inline void eo_cxx::ecore_audio_in::channels_set(int channels_) const
{
   eo_do(_concrete_eo_ptr(), ::ecore_audio_obj_in_channels_set(channels_));
}

inline bool eo_cxx::ecore_audio_in::preloaded_get() const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::ecore_audio_obj_in_preloaded_get());
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline void eo_cxx::ecore_audio_in::preloaded_set(bool preloaded_) const
{
   eo_do(_concrete_eo_ptr(), ::ecore_audio_obj_in_preloaded_set(::efl::eolian::to_c(preloaded_)));
}

inline bool eo_cxx::ecore_audio_in::looped_get() const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::ecore_audio_obj_in_looped_get());
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline void eo_cxx::ecore_audio_in::looped_set(bool looped_) const
{
   eo_do(_concrete_eo_ptr(), ::ecore_audio_obj_in_looped_set(::efl::eolian::to_c(looped_)));
}

inline double eo_cxx::ecore_audio_in::length_get() const
{
   double _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::ecore_audio_obj_in_length_get());
   return _tmp_ret;
}

inline void eo_cxx::ecore_audio_in::length_set(double length_) const
{
   eo_do(_concrete_eo_ptr(), ::ecore_audio_obj_in_length_set(length_));
}

inline ::efl::eo::concrete eo_cxx::ecore_audio_in::output_get() const
{
   Eo * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::ecore_audio_obj_in_output_get());
   return ::efl::eolian::to_cxx<::efl::eo::concrete>(_tmp_ret, std::tuple<std::false_type>());
}

inline double eo_cxx::ecore_audio_in::remaining_get() const
{
   double _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::ecore_audio_obj_in_remaining_get());
   return _tmp_ret;
}

inline ::eo_cxx::ecore_audio_in::operator ::ecore_audio_in() const
{
   return *static_cast<::ecore_audio_in const*>(static_cast<void const*>(this));
}

inline ::eo_cxx::ecore_audio_in::operator ::ecore_audio_in&()
{
   return *static_cast<::ecore_audio_in*>(static_cast<void*>(this));
}

inline ::eo_cxx::ecore_audio_in::operator ::ecore_audio_in const&() const
{
   return *static_cast<::ecore_audio_in const*>(static_cast<void const*>(this));
}

template <typename T>
ssize_t _ecore_audio_in_read_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, void * buf_, size_t len_)
{
   try
      {
         return static_cast<T*>(self->this_)->read(buf_, len_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         ssize_t _tmp_ret{};
         return _tmp_ret;
      }
}

template <typename T>
ssize_t _ecore_audio_in_read_internal_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, void * buf_, size_t len_)
{
   try
      {
         return static_cast<T*>(self->this_)->read_internal(buf_, len_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         ssize_t _tmp_ret{};
         return _tmp_ret;
      }
}

template <typename T>
double _ecore_audio_in_seek_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, double offs_, int mode_)
{
   try
      {
         return static_cast<T*>(self->this_)->seek(offs_, mode_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         double _tmp_ret{};
         return _tmp_ret;
      }
}

template <typename T>
double _ecore_audio_in_speed_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->speed_get();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         double _tmp_ret{};
         return _tmp_ret;
      }
}

template <typename T>
void _ecore_audio_in_speed_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, double speed_)
{
   try
      {
         static_cast<T*>(self->this_)->speed_set(speed_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
int _ecore_audio_in_samplerate_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->samplerate_get();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         int _tmp_ret{};
         return _tmp_ret;
      }
}

template <typename T>
void _ecore_audio_in_samplerate_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, int samplerate_)
{
   try
      {
         static_cast<T*>(self->this_)->samplerate_set(samplerate_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
int _ecore_audio_in_channels_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->channels_get();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         int _tmp_ret{};
         return _tmp_ret;
      }
}

template <typename T>
void _ecore_audio_in_channels_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, int channels_)
{
   try
      {
         static_cast<T*>(self->this_)->channels_set(channels_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
bool _ecore_audio_in_preloaded_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->preloaded_get();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Eina_Bool _tmp_ret{};
         return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }
}

template <typename T>
void _ecore_audio_in_preloaded_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Eina_Bool preloaded_)
{
   try
      {
         static_cast<T*>(self->this_)->preloaded_set(::efl::eolian::to_cxx<bool>(preloaded_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
bool _ecore_audio_in_looped_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->looped_get();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Eina_Bool _tmp_ret{};
         return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }
}

template <typename T>
void _ecore_audio_in_looped_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Eina_Bool looped_)
{
   try
      {
         static_cast<T*>(self->this_)->looped_set(::efl::eolian::to_cxx<bool>(looped_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
double _ecore_audio_in_length_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->length_get();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         double _tmp_ret{};
         return _tmp_ret;
      }
}

template <typename T>
void _ecore_audio_in_length_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, double length_)
{
   try
      {
         static_cast<T*>(self->this_)->length_set(length_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
::efl::eo::concrete _ecore_audio_in_output_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->output_get();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Eo * _tmp_ret{};
         return ::efl::eolian::to_cxx<::efl::eo::concrete>(_tmp_ret, std::tuple<std::false_type>());
      }
}

template <typename T>
double _ecore_audio_in_remaining_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->remaining_get();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         double _tmp_ret{};
         return _tmp_ret;
      }
}

namespace efl { namespace eo { namespace detail {

template<>
struct operations< ::ecore_audio_in >
{
   template <typename T>
   struct type
         : virtual operations< ::ecore_audio >::template type<T>
   {
      virtual ssize_t read(void * buf_, size_t len_)
      {
         ssize_t _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::ecore_audio_obj_in_read(buf_, len_));
            return _tmp_ret;
      }

      virtual ssize_t read_internal(void * buf_, size_t len_)
      {
         ssize_t _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::ecore_audio_obj_in_read_internal(buf_, len_));
            return _tmp_ret;
      }

      virtual double seek(double offs_, int mode_)
      {
         double _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::ecore_audio_obj_in_seek(offs_, mode_));
            return _tmp_ret;
      }

      virtual double speed_get()
      {
         double _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::ecore_audio_obj_in_speed_get());
            return _tmp_ret;
      }

      virtual void speed_set(double speed_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::ecore_audio_obj_in_speed_set(speed_));
      }

      virtual int samplerate_get()
      {
         int _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::ecore_audio_obj_in_samplerate_get());
            return _tmp_ret;
      }

      virtual void samplerate_set(int samplerate_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::ecore_audio_obj_in_samplerate_set(samplerate_));
      }

      virtual int channels_get()
      {
         int _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::ecore_audio_obj_in_channels_get());
            return _tmp_ret;
      }

      virtual void channels_set(int channels_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::ecore_audio_obj_in_channels_set(channels_));
      }

      virtual bool preloaded_get()
      {
         Eina_Bool _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::ecore_audio_obj_in_preloaded_get());
            return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }

      virtual void preloaded_set(bool preloaded_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::ecore_audio_obj_in_preloaded_set(::efl::eolian::to_c(preloaded_)));
      }

      virtual bool looped_get()
      {
         Eina_Bool _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::ecore_audio_obj_in_looped_get());
            return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }

      virtual void looped_set(bool looped_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::ecore_audio_obj_in_looped_set(::efl::eolian::to_c(looped_)));
      }

      virtual double length_get()
      {
         double _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::ecore_audio_obj_in_length_get());
            return _tmp_ret;
      }

      virtual void length_set(double length_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::ecore_audio_obj_in_length_set(length_));
      }

      virtual ::efl::eo::concrete output_get()
      {
         Eo * _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::ecore_audio_obj_in_output_get());
            return ::efl::eolian::to_cxx<::efl::eo::concrete>(_tmp_ret, std::tuple<std::false_type>());
      }

      virtual double remaining_get()
      {
         double _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::ecore_audio_obj_in_remaining_get());
            return _tmp_ret;
      }

   };
};


template<>
struct operation_description_class_size< ::ecore_audio_in >
{
   static constexpr int value = 
#if defined(ECORE_AUDIO_IN_PROTECTED) && defined(ECORE_AUDIO_IN_BETA)
      17
#elif defined(ECORE_AUDIO_IN_PROTECTED)
      17
#elif defined(ECORE_AUDIO_IN_BETA)
      17
#else
      17
#endif
      + operation_description_class_size<::ecore_audio >::value;
};

template <typename T>
int initialize_operation_description(::efl::eo::detail::tag<::ecore_audio_in>
                                 , Eo_Op_Description* ops)
{
   int i = 0;
   (void)i;
   (void)ops;
   ops[i].func = reinterpret_cast<void*>(& ::_ecore_audio_in_read_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::ecore_audio_obj_in_read);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::_ecore_audio_in_read_internal_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::ecore_audio_obj_in_read_internal);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::_ecore_audio_in_seek_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::ecore_audio_obj_in_seek);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::_ecore_audio_in_speed_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::ecore_audio_obj_in_speed_get);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::_ecore_audio_in_speed_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::ecore_audio_obj_in_speed_set);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::_ecore_audio_in_samplerate_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::ecore_audio_obj_in_samplerate_get);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::_ecore_audio_in_samplerate_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::ecore_audio_obj_in_samplerate_set);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::_ecore_audio_in_channels_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::ecore_audio_obj_in_channels_get);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::_ecore_audio_in_channels_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::ecore_audio_obj_in_channels_set);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::_ecore_audio_in_preloaded_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::ecore_audio_obj_in_preloaded_get);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::_ecore_audio_in_preloaded_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::ecore_audio_obj_in_preloaded_set);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::_ecore_audio_in_looped_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::ecore_audio_obj_in_looped_get);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::_ecore_audio_in_looped_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::ecore_audio_obj_in_looped_set);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::_ecore_audio_in_length_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::ecore_audio_obj_in_length_get);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::_ecore_audio_in_length_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::ecore_audio_obj_in_length_set);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::_ecore_audio_in_output_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::ecore_audio_obj_in_output_get);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::_ecore_audio_in_remaining_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::ecore_audio_obj_in_remaining_get);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   initialize_operation_description<T>(::efl::eo::detail::tag<::ecore_audio>(), &ops[operation_description_class_size< ::ecore_audio_in >::value]);
   return 0;
}
inline Eo_Class const* get_eo_class(tag<::ecore_audio_in>)
{
   return (ECORE_AUDIO_IN_CLASS);
}

} } }

/// @endcond

