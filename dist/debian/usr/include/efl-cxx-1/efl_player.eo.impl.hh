/// @cond EO_CXX_EO_IMPL

inline bool efl::player::playable_get() const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::efl_player_playable_get());
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline bool efl::player::play_get() const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::efl_player_play_get());
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline void efl::player::play_set(bool play_) const
{
   eo_do(_concrete_eo_ptr(), ::efl_player_play_set(::efl::eolian::to_c(play_)));
}

inline double efl::player::position_get() const
{
   double _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::efl_player_position_get());
   return _tmp_ret;
}

inline void efl::player::position_set(double sec_) const
{
   eo_do(_concrete_eo_ptr(), ::efl_player_position_set(sec_));
}

inline double efl::player::progress_get() const
{
   double _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::efl_player_progress_get());
   return _tmp_ret;
}

inline double efl::player::play_speed_get() const
{
   double _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::efl_player_play_speed_get());
   return _tmp_ret;
}

inline void efl::player::play_speed_set(double speed_) const
{
   eo_do(_concrete_eo_ptr(), ::efl_player_play_speed_set(speed_));
}

inline double efl::player::audio_volume_get() const
{
   double _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::efl_player_audio_volume_get());
   return _tmp_ret;
}

inline void efl::player::audio_volume_set(double volume_) const
{
   eo_do(_concrete_eo_ptr(), ::efl_player_audio_volume_set(volume_));
}

inline bool efl::player::audio_mute_get() const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::efl_player_audio_mute_get());
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline void efl::player::audio_mute_set(bool mute_) const
{
   eo_do(_concrete_eo_ptr(), ::efl_player_audio_mute_set(::efl::eolian::to_c(mute_)));
}

inline double efl::player::length_get() const
{
   double _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::efl_player_length_get());
   return _tmp_ret;
}

inline bool efl::player::seekable_get() const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::efl_player_seekable_get());
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline bool eo_cxx::efl::player::playable_get() const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::efl_player_playable_get());
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline bool eo_cxx::efl::player::play_get() const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::efl_player_play_get());
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline void eo_cxx::efl::player::play_set(bool play_) const
{
   eo_do(_concrete_eo_ptr(), ::efl_player_play_set(::efl::eolian::to_c(play_)));
}

inline double eo_cxx::efl::player::position_get() const
{
   double _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::efl_player_position_get());
   return _tmp_ret;
}

inline void eo_cxx::efl::player::position_set(double sec_) const
{
   eo_do(_concrete_eo_ptr(), ::efl_player_position_set(sec_));
}

inline double eo_cxx::efl::player::progress_get() const
{
   double _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::efl_player_progress_get());
   return _tmp_ret;
}

inline double eo_cxx::efl::player::play_speed_get() const
{
   double _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::efl_player_play_speed_get());
   return _tmp_ret;
}

inline void eo_cxx::efl::player::play_speed_set(double speed_) const
{
   eo_do(_concrete_eo_ptr(), ::efl_player_play_speed_set(speed_));
}

inline double eo_cxx::efl::player::audio_volume_get() const
{
   double _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::efl_player_audio_volume_get());
   return _tmp_ret;
}

inline void eo_cxx::efl::player::audio_volume_set(double volume_) const
{
   eo_do(_concrete_eo_ptr(), ::efl_player_audio_volume_set(volume_));
}

inline bool eo_cxx::efl::player::audio_mute_get() const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::efl_player_audio_mute_get());
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline void eo_cxx::efl::player::audio_mute_set(bool mute_) const
{
   eo_do(_concrete_eo_ptr(), ::efl_player_audio_mute_set(::efl::eolian::to_c(mute_)));
}

inline double eo_cxx::efl::player::length_get() const
{
   double _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::efl_player_length_get());
   return _tmp_ret;
}

inline bool eo_cxx::efl::player::seekable_get() const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::efl_player_seekable_get());
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline ::eo_cxx::efl::player::operator ::efl::player() const
{
   return *static_cast<::efl::player const*>(static_cast<void const*>(this));
}

inline ::eo_cxx::efl::player::operator ::efl::player&()
{
   return *static_cast<::efl::player*>(static_cast<void*>(this));
}

inline ::eo_cxx::efl::player::operator ::efl::player const&() const
{
   return *static_cast<::efl::player const*>(static_cast<void const*>(this));
}

template <typename T>
bool efl_player_playable_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->playable_get();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Eina_Bool _tmp_ret{};
         return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }
}

template <typename T>
bool efl_player_play_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->play_get();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Eina_Bool _tmp_ret{};
         return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }
}

template <typename T>
void efl_player_play_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Eina_Bool play_)
{
   try
      {
         static_cast<T*>(self->this_)->play_set(::efl::eolian::to_cxx<bool>(play_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
double efl_player_position_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->position_get();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         double _tmp_ret{};
         return _tmp_ret;
      }
}

template <typename T>
void efl_player_position_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, double sec_)
{
   try
      {
         static_cast<T*>(self->this_)->position_set(sec_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
double efl_player_progress_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->progress_get();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         double _tmp_ret{};
         return _tmp_ret;
      }
}

template <typename T>
double efl_player_play_speed_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->play_speed_get();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         double _tmp_ret{};
         return _tmp_ret;
      }
}

template <typename T>
void efl_player_play_speed_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, double speed_)
{
   try
      {
         static_cast<T*>(self->this_)->play_speed_set(speed_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
double efl_player_audio_volume_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->audio_volume_get();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         double _tmp_ret{};
         return _tmp_ret;
      }
}

template <typename T>
void efl_player_audio_volume_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, double volume_)
{
   try
      {
         static_cast<T*>(self->this_)->audio_volume_set(volume_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
bool efl_player_audio_mute_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->audio_mute_get();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Eina_Bool _tmp_ret{};
         return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }
}

template <typename T>
void efl_player_audio_mute_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Eina_Bool mute_)
{
   try
      {
         static_cast<T*>(self->this_)->audio_mute_set(::efl::eolian::to_cxx<bool>(mute_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
double efl_player_length_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
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
bool efl_player_seekable_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->seekable_get();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Eina_Bool _tmp_ret{};
         return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }
}

namespace efl { namespace eo { namespace detail {

template<>
struct operations< ::efl::player >
{
   template <typename T>
   struct type
   {
      virtual bool playable_get()
      {
         Eina_Bool _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::efl_player_playable_get());
            return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }

      virtual bool play_get()
      {
         Eina_Bool _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::efl_player_play_get());
            return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }

      virtual void play_set(bool play_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::efl_player_play_set(::efl::eolian::to_c(play_)));
      }

      virtual double position_get()
      {
         double _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::efl_player_position_get());
            return _tmp_ret;
      }

      virtual void position_set(double sec_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::efl_player_position_set(sec_));
      }

      virtual double progress_get()
      {
         double _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::efl_player_progress_get());
            return _tmp_ret;
      }

      virtual double play_speed_get()
      {
         double _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::efl_player_play_speed_get());
            return _tmp_ret;
      }

      virtual void play_speed_set(double speed_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::efl_player_play_speed_set(speed_));
      }

      virtual double audio_volume_get()
      {
         double _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::efl_player_audio_volume_get());
            return _tmp_ret;
      }

      virtual void audio_volume_set(double volume_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::efl_player_audio_volume_set(volume_));
      }

      virtual bool audio_mute_get()
      {
         Eina_Bool _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::efl_player_audio_mute_get());
            return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }

      virtual void audio_mute_set(bool mute_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::efl_player_audio_mute_set(::efl::eolian::to_c(mute_)));
      }

      virtual double length_get()
      {
         double _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::efl_player_length_get());
            return _tmp_ret;
      }

      virtual bool seekable_get()
      {
         Eina_Bool _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::efl_player_seekable_get());
            return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }

   };
};


template<>
struct operation_description_class_size< ::efl::player >
{
   static constexpr int value = 
#if defined(PLAYER_PROTECTED) && defined(PLAYER_BETA)
      14
#elif defined(PLAYER_PROTECTED)
      14
#elif defined(PLAYER_BETA)
      14
#else
      14
#endif
;
};

template <typename T>
int initialize_operation_description(::efl::eo::detail::tag<::efl::player>
                                 , Eo_Op_Description* ops)
{
   int i = 0;
   (void)i;
   (void)ops;
   ops[i].func = reinterpret_cast<void*>(& ::efl_player_playable_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::efl_player_playable_get);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::efl_player_play_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::efl_player_play_get);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::efl_player_play_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::efl_player_play_set);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::efl_player_position_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::efl_player_position_get);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::efl_player_position_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::efl_player_position_set);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::efl_player_progress_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::efl_player_progress_get);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::efl_player_play_speed_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::efl_player_play_speed_get);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::efl_player_play_speed_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::efl_player_play_speed_set);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::efl_player_audio_volume_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::efl_player_audio_volume_get);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::efl_player_audio_volume_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::efl_player_audio_volume_set);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::efl_player_audio_mute_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::efl_player_audio_mute_get);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::efl_player_audio_mute_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::efl_player_audio_mute_set);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::efl_player_length_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::efl_player_length_get);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::efl_player_seekable_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::efl_player_seekable_get);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   return 0;
}
inline Eo_Class const* get_eo_class(tag<::efl::player>)
{
   return (EFL_PLAYER_INTERFACE);
}

} } }

/// @endcond

