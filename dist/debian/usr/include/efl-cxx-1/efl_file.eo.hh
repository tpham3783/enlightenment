#ifndef EFL_GENERATED_EFL_FILE_HH
#define EFL_GENERATED_EFL_FILE_HH

extern "C"
{
#include <Efl.h>
}
#include <Eo.hh>

#include <eo_cxx_interop.hh>

extern "C"
{
#include "efl_file.eo.h"
}

#include <string>

namespace efl {

struct file;

}

/// @cond EO_CXX_ABSTRACT
namespace eo_cxx {

namespace efl {

struct file
{
   /// @param file 
   /// @param key 
   /// @param flags 
   ///
   bool save(::efl::eina::string_view file_, ::efl::eina::string_view key_, ::efl::eina::string_view flags_) const;

   void eject() const;

   bool async_wait() const;

   void mmap_get(const Eina_File ** f_, const char ** key_) const;

   bool mmap_set(const Eina_File * f_, ::efl::eina::string_view key_) const;

   void file_get(const char ** file_, const char ** key_) const;

   bool file_set(::efl::eina::string_view file_, ::efl::eina::string_view key_) const;

   bool async_get() const;

   void async_set(bool async_) const;

   template <typename F>
   ::efl::eo::signal_connection
   callback_async_opened_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EFL_FILE_EVENT_ASYNC_OPENED, priority_,
            &::efl::eo::_detail::event_callback<::efl::file, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::efl::file, function_type>,
         EFL_FILE_EVENT_ASYNC_OPENED );
   }

   template <typename T>
   void
   callback_async_opened_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EFL_FILE_EVENT_ASYNC_OPENED, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_async_error_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EFL_FILE_EVENT_ASYNC_ERROR, priority_,
            &::efl::eo::_detail::event_callback<::efl::file, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::efl::file, function_type>,
         EFL_FILE_EVENT_ASYNC_ERROR );
   }

   template <typename T>
   void
   callback_async_error_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EFL_FILE_EVENT_ASYNC_ERROR, info));
   }



   static Eo_Class const* _eo_class()
   {
      return(EFL_FILE_INTERFACE);
   }

   operator ::efl::file() const;
   operator ::efl::file&();
   operator ::efl::file const&() const;

   /// @cond LOCAL
   template <typename D>
   struct address_of
   {
      operator ::efl::file*() const { return static_cast<::efl::file*>(static_cast<D const*>(this)->p); }
      operator ::efl::file const*() const { return static_cast<::efl::file const*>(static_cast<D const*>(this)->p); }
   };

   template <typename D>
   struct address_const_of
   {
      operator ::efl::file const*() const { return static_cast<::efl::file const*>(static_cast<D const*>(this)->p); }
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

}
/// @endcond

namespace efl {

/// @brief Class file
struct file
      : ::efl::eo::concrete
{
   //@{
   /**
      @brief Constructs a new efl::file object.

      Constructs a new efl::file object. If you want this object to be a child
      of another Eo object, use an @ref efl::eo::parent expression, like the example.

      Example:
      @code
      efl::file my_file(efl::eo::parent = parent_object);
      @endcode

      @see file(Eo* eo)
   */
   explicit file(::efl::eo::parent_type _p)
      : file(_ctors_call(_p))
   {}

   explicit file()
      : file(_ctors_call(::efl::eo::parent = nullptr))
   {}
   //@}

   /// @brief Eo Constructor.
   ///
   /// Constructs the object from an Eo* pointer stealing its ownership.
   ///
   /// @param eo The Eo object pointer.
   ///
   explicit file(Eo* eo)
      : ::efl::eo::concrete(eo)
   {}

   /// @brief nullptr_t Constructor.
   ///
   /// Constructs an empty (null) object.
   ///
   explicit file(std::nullptr_t)
      : ::efl::eo::concrete(nullptr)
   {}

   /// @brief Copy Constructor.
   ///
   file(file const& other)
      : file(eo_ref(other._eo_ptr()))
   {}

   ~file() {}

   /// @param file 
   /// @param key 
   /// @param flags 
   ///
   bool save(::efl::eina::string_view file_, ::efl::eina::string_view key_, ::efl::eina::string_view flags_) const;

   void eject() const;

   bool async_wait() const;

   void mmap_get(const Eina_File ** f_, const char ** key_) const;

   bool mmap_set(const Eina_File * f_, ::efl::eina::string_view key_) const;

   void file_get(const char ** file_, const char ** key_) const;

   bool file_set(::efl::eina::string_view file_, ::efl::eina::string_view key_) const;

   bool async_get() const;

   void async_set(bool async_) const;

   template <typename F>
   ::efl::eo::signal_connection
   callback_async_error_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EFL_FILE_EVENT_ASYNC_ERROR, priority_,
            &::efl::eo::_detail::event_callback<::efl::file, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::efl::file, function_type>,
         EFL_FILE_EVENT_ASYNC_ERROR );
   }

   template <typename T>
   void
   callback_async_error_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EFL_FILE_EVENT_ASYNC_ERROR, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_async_opened_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EFL_FILE_EVENT_ASYNC_OPENED, priority_,
            &::efl::eo::_detail::event_callback<::efl::file, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::efl::file, function_type>,
         EFL_FILE_EVENT_ASYNC_OPENED );
   }

   template <typename T>
   void
   callback_async_opened_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EFL_FILE_EVENT_ASYNC_OPENED, info));
   }



   static Eo_Class const* _eo_class()
   {
      return(EFL_FILE_INTERFACE);
   }

   /// @cond LOCAL
   struct address_of
      : ::eo_cxx::efl::file::address_of<address_of>
      , ::efl::eo::detail::concrete_address_of
   {
      explicit address_of(::efl::file* p)
         : ::efl::eo::detail::concrete_address_of(p)
      {}
   };
   address_of operator&() { return address_of(this); }

   struct address_const_of
      : ::eo_cxx::efl::file::address_const_of<address_const_of>
      , ::efl::eo::detail::concrete_address_const_of
   {
      explicit address_const_of(::efl::file const* p)
         : ::efl::eo::detail::concrete_address_const_of(p)
      {}
   };
   address_const_of operator&() const { return address_const_of(this); }

   /// @endcond

private:

   /// @internal
   static Eo* _ctors_call(::efl::eo::parent_type _p)
   {
      Eo* _ret_eo = eo_add_ref(EFL_FILE_INTERFACE, _p._eo_raw);

      return _ret_eo;
   }

   /// @internal
   Eo* _concrete_eo_ptr() const { return _eo_ptr(); }
};

static_assert(sizeof(::efl::file) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<::efl::file>::value, "");

}


#include "efl_file.eo.impl.hh"

#endif // EFL_GENERATED_EFL_FILE_HH

