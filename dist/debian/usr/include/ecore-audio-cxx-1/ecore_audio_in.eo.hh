#ifndef EFL_GENERATED_ECORE_AUDIO_IN_HH
#define EFL_GENERATED_ECORE_AUDIO_IN_HH

extern "C"
{
#include <Efl.h>
}
#include <Eo.hh>

#include <eo_cxx_interop.hh>

extern "C"
{
#include "ecore_audio_in.eo.h"
}

#include "ecore_audio.eo.hh"

struct ecore_audio_in;

/// @cond EO_CXX_ABSTRACT
namespace eo_cxx {

struct ecore_audio_in
{
   /// @param buf 
   /// @param len 
   ///
   ssize_t read(void * buf_, size_t len_) const;

   /// @param buf 
   /// @param len 
   ///
   ssize_t read_internal(void * buf_, size_t len_) const;

   /// @param offs 
   /// @param mode 
   ///
   double seek(double offs_, int mode_) const;

   double speed_get() const;

   void speed_set(double speed_) const;

   int samplerate_get() const;

   void samplerate_set(int samplerate_) const;

   int channels_get() const;

   void channels_set(int channels_) const;

   bool preloaded_get() const;

   void preloaded_set(bool preloaded_) const;

   bool looped_get() const;

   void looped_set(bool looped_) const;

   double length_get() const;

   void length_set(double length_) const;

   ::efl::eo::concrete output_get() const;

   double remaining_get() const;

   template <typename F>
   ::efl::eo::signal_connection
   callback_in_looped_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (ECORE_AUDIO_IN_EVENT_IN_LOOPED, priority_,
            &::efl::eo::_detail::event_callback<::ecore_audio_in, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::ecore_audio_in, function_type>,
         ECORE_AUDIO_IN_EVENT_IN_LOOPED );
   }

   template <typename T>
   void
   callback_in_looped_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (ECORE_AUDIO_IN_EVENT_IN_LOOPED, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_in_stopped_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (ECORE_AUDIO_IN_EVENT_IN_STOPPED, priority_,
            &::efl::eo::_detail::event_callback<::ecore_audio_in, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::ecore_audio_in, function_type>,
         ECORE_AUDIO_IN_EVENT_IN_STOPPED );
   }

   template <typename T>
   void
   callback_in_stopped_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (ECORE_AUDIO_IN_EVENT_IN_STOPPED, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_in_samplerate_changed_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (ECORE_AUDIO_IN_EVENT_IN_SAMPLERATE_CHANGED, priority_,
            &::efl::eo::_detail::event_callback<::ecore_audio_in, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::ecore_audio_in, function_type>,
         ECORE_AUDIO_IN_EVENT_IN_SAMPLERATE_CHANGED );
   }

   template <typename T>
   void
   callback_in_samplerate_changed_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (ECORE_AUDIO_IN_EVENT_IN_SAMPLERATE_CHANGED, info));
   }



   static Eo_Class const* _eo_class()
   {
      return(ECORE_AUDIO_IN_CLASS);
   }

   operator ::ecore_audio_in() const;
   operator ::ecore_audio_in&();
   operator ::ecore_audio_in const&() const;

   /// @cond LOCAL
   template <typename D>
   struct address_of
   {
      operator ::ecore_audio_in*() const { return static_cast<::ecore_audio_in*>(static_cast<D const*>(this)->p); }
      operator ::ecore_audio_in const*() const { return static_cast<::ecore_audio_in const*>(static_cast<D const*>(this)->p); }
   };

   template <typename D>
   struct address_const_of
   {
      operator ::ecore_audio_in const*() const { return static_cast<::ecore_audio_in const*>(static_cast<D const*>(this)->p); }
   };
   /// @endcond

private:

   /// @internal
   Eo* _concrete_eo_ptr() const
   {
      return static_cast<::efl::eo::concrete const*>(static_cast<void const*>(this))->_eo_ptr();
   }

};

}
/// @endcond

/// @brief Class ecore_audio_in
struct ecore_audio_in
      : ::efl::eo::concrete
      , EO_CXX_INHERIT(ecore_audio)
      , EO_CXX_INHERIT(eo::base)
{
   //@{
   /**
      @brief Constructs a new ecore_audio_in object.

      Constructs a new ecore_audio_in object. If you want this object to be a child
      of another Eo object, use an @ref efl::eo::parent expression, like the example.

      Example:
      @code
      ecore_audio_in my_ecore_audio_in(efl::eo::parent = parent_object);
      @endcode

      @see ecore_audio_in(Eo* eo)
   */
   explicit ecore_audio_in(::efl::eo::parent_type _p)
      : ecore_audio_in(_ctors_call(_p))
   {}

   explicit ecore_audio_in()
      : ecore_audio_in(_ctors_call(::efl::eo::parent = nullptr))
   {}
   //@}

   /// @brief Eo Constructor.
   ///
   /// Constructs the object from an Eo* pointer stealing its ownership.
   ///
   /// @param eo The Eo object pointer.
   ///
   explicit ecore_audio_in(Eo* eo)
      : ::efl::eo::concrete(eo)
   {}

   /// @brief nullptr_t Constructor.
   ///
   /// Constructs an empty (null) object.
   ///
   explicit ecore_audio_in(std::nullptr_t)
      : ::efl::eo::concrete(nullptr)
   {}

   /// @brief Copy Constructor.
   ///
   ecore_audio_in(ecore_audio_in const& other)
      : ecore_audio_in(eo_ref(other._eo_ptr()))
   {}

   ~ecore_audio_in() {}

   /// @param buf 
   /// @param len 
   ///
   ssize_t read(void * buf_, size_t len_) const;

   /// @param buf 
   /// @param len 
   ///
   ssize_t read_internal(void * buf_, size_t len_) const;

   /// @param offs 
   /// @param mode 
   ///
   double seek(double offs_, int mode_) const;

   double speed_get() const;

   void speed_set(double speed_) const;

   int samplerate_get() const;

   void samplerate_set(int samplerate_) const;

   int channels_get() const;

   void channels_set(int channels_) const;

   bool preloaded_get() const;

   void preloaded_set(bool preloaded_) const;

   bool looped_get() const;

   void looped_set(bool looped_) const;

   double length_get() const;

   void length_set(double length_) const;

   ::efl::eo::concrete output_get() const;

   double remaining_get() const;

   template <typename F>
   ::efl::eo::signal_connection
   callback_callback_add_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EO_BASE_EVENT_CALLBACK_ADD, priority_,
            &::efl::eo::_detail::event_callback<::ecore_audio_in, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::ecore_audio_in, function_type>,
         EO_BASE_EVENT_CALLBACK_ADD );
   }

   template <typename T>
   void
   callback_callback_add_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EO_BASE_EVENT_CALLBACK_ADD, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_callback_del_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EO_BASE_EVENT_CALLBACK_DEL, priority_,
            &::efl::eo::_detail::event_callback<::ecore_audio_in, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::ecore_audio_in, function_type>,
         EO_BASE_EVENT_CALLBACK_DEL );
   }

   template <typename T>
   void
   callback_callback_del_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EO_BASE_EVENT_CALLBACK_DEL, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_del_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EO_BASE_EVENT_DEL, priority_,
            &::efl::eo::_detail::event_callback<::ecore_audio_in, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::ecore_audio_in, function_type>,
         EO_BASE_EVENT_DEL );
   }

   template <typename T>
   void
   callback_del_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EO_BASE_EVENT_DEL, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_in_looped_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (ECORE_AUDIO_IN_EVENT_IN_LOOPED, priority_,
            &::efl::eo::_detail::event_callback<::ecore_audio_in, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::ecore_audio_in, function_type>,
         ECORE_AUDIO_IN_EVENT_IN_LOOPED );
   }

   template <typename T>
   void
   callback_in_looped_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (ECORE_AUDIO_IN_EVENT_IN_LOOPED, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_in_samplerate_changed_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (ECORE_AUDIO_IN_EVENT_IN_SAMPLERATE_CHANGED, priority_,
            &::efl::eo::_detail::event_callback<::ecore_audio_in, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::ecore_audio_in, function_type>,
         ECORE_AUDIO_IN_EVENT_IN_SAMPLERATE_CHANGED );
   }

   template <typename T>
   void
   callback_in_samplerate_changed_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (ECORE_AUDIO_IN_EVENT_IN_SAMPLERATE_CHANGED, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_in_stopped_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (ECORE_AUDIO_IN_EVENT_IN_STOPPED, priority_,
            &::efl::eo::_detail::event_callback<::ecore_audio_in, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::ecore_audio_in, function_type>,
         ECORE_AUDIO_IN_EVENT_IN_STOPPED );
   }

   template <typename T>
   void
   callback_in_stopped_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (ECORE_AUDIO_IN_EVENT_IN_STOPPED, info));
   }



   static Eo_Class const* _eo_class()
   {
      return(ECORE_AUDIO_IN_CLASS);
   }

   /// @cond LOCAL
   struct address_of
      : ::eo_cxx::ecore_audio_in::address_of<address_of>
      , ::eo_cxx::ecore_audio::address_of<address_of>
      , ::eo_cxx::eo::base::address_of<address_of>
      , ::efl::eo::detail::concrete_address_of
   {
      explicit address_of(::ecore_audio_in* p)
         : ::efl::eo::detail::concrete_address_of(p)
      {}
   };
   address_of operator&() { return address_of(this); }

   struct address_const_of
      : ::eo_cxx::ecore_audio_in::address_const_of<address_const_of>
      , ::eo_cxx::ecore_audio::address_const_of<address_const_of>
      , ::eo_cxx::eo::base::address_const_of<address_const_of>
      , ::efl::eo::detail::concrete_address_const_of
   {
      explicit address_const_of(::ecore_audio_in const* p)
         : ::efl::eo::detail::concrete_address_const_of(p)
      {}
   };
   address_const_of operator&() const { return address_const_of(this); }

   /// @endcond

private:

   /// @internal
   static Eo* _ctors_call(::efl::eo::parent_type _p)
   {
      Eo* _ret_eo = eo_add_ref(ECORE_AUDIO_IN_CLASS, _p._eo_raw);

      return _ret_eo;
   }

   /// @internal
   Eo* _concrete_eo_ptr() const { return _eo_ptr(); }
};

static_assert(sizeof(::ecore_audio_in) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<::ecore_audio_in>::value, "");


#include "ecore_audio_in.eo.impl.hh"

#endif // EFL_GENERATED_ECORE_AUDIO_IN_HH

