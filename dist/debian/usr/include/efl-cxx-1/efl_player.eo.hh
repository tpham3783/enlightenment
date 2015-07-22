#ifndef EFL_GENERATED_EFL_PLAYER_HH
#define EFL_GENERATED_EFL_PLAYER_HH

extern "C"
{
#include <Efl.h>
}
#include <Eo.hh>

#include <eo_cxx_interop.hh>

extern "C"
{
#include "efl_player.eo.h"
}


namespace efl {

struct player;

}

/// @cond EO_CXX_ABSTRACT
namespace eo_cxx {

namespace efl {

struct player
{
   bool playable_get() const;

   bool play_get() const;

   void play_set(bool play_) const;

   double position_get() const;

   void position_set(double sec_) const;

   double progress_get() const;

   double play_speed_get() const;

   void play_speed_set(double speed_) const;

   double audio_volume_get() const;

   void audio_volume_set(double volume_) const;

   bool audio_mute_get() const;

   void audio_mute_set(bool mute_) const;

   double length_get() const;

   bool seekable_get() const;



   static Eo_Class const* _eo_class()
   {
      return(EFL_PLAYER_INTERFACE);
   }

   operator ::efl::player() const;
   operator ::efl::player&();
   operator ::efl::player const&() const;

   /// @cond LOCAL
   template <typename D>
   struct address_of
   {
      operator ::efl::player*() const { return static_cast<::efl::player*>(static_cast<D const*>(this)->p); }
      operator ::efl::player const*() const { return static_cast<::efl::player const*>(static_cast<D const*>(this)->p); }
   };

   template <typename D>
   struct address_const_of
   {
      operator ::efl::player const*() const { return static_cast<::efl::player const*>(static_cast<D const*>(this)->p); }
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

/// @brief Class player
struct player
      : ::efl::eo::concrete
{
   //@{
   /**
      @brief Constructs a new efl::player object.

      Constructs a new efl::player object. If you want this object to be a child
      of another Eo object, use an @ref efl::eo::parent expression, like the example.

      Example:
      @code
      efl::player my_player(efl::eo::parent = parent_object);
      @endcode

      @see player(Eo* eo)
   */
   explicit player(::efl::eo::parent_type _p)
      : player(_ctors_call(_p))
   {}

   explicit player()
      : player(_ctors_call(::efl::eo::parent = nullptr))
   {}
   //@}

   /// @brief Eo Constructor.
   ///
   /// Constructs the object from an Eo* pointer stealing its ownership.
   ///
   /// @param eo The Eo object pointer.
   ///
   explicit player(Eo* eo)
      : ::efl::eo::concrete(eo)
   {}

   /// @brief nullptr_t Constructor.
   ///
   /// Constructs an empty (null) object.
   ///
   explicit player(std::nullptr_t)
      : ::efl::eo::concrete(nullptr)
   {}

   /// @brief Copy Constructor.
   ///
   player(player const& other)
      : player(eo_ref(other._eo_ptr()))
   {}

   ~player() {}

   bool playable_get() const;

   bool play_get() const;

   void play_set(bool play_) const;

   double position_get() const;

   void position_set(double sec_) const;

   double progress_get() const;

   double play_speed_get() const;

   void play_speed_set(double speed_) const;

   double audio_volume_get() const;

   void audio_volume_set(double volume_) const;

   bool audio_mute_get() const;

   void audio_mute_set(bool mute_) const;

   double length_get() const;

   bool seekable_get() const;



   static Eo_Class const* _eo_class()
   {
      return(EFL_PLAYER_INTERFACE);
   }

   /// @cond LOCAL
   struct address_of
      : ::eo_cxx::efl::player::address_of<address_of>
      , ::efl::eo::detail::concrete_address_of
   {
      explicit address_of(::efl::player* p)
         : ::efl::eo::detail::concrete_address_of(p)
      {}
   };
   address_of operator&() { return address_of(this); }

   struct address_const_of
      : ::eo_cxx::efl::player::address_const_of<address_const_of>
      , ::efl::eo::detail::concrete_address_const_of
   {
      explicit address_const_of(::efl::player const* p)
         : ::efl::eo::detail::concrete_address_const_of(p)
      {}
   };
   address_const_of operator&() const { return address_const_of(this); }

   /// @endcond

private:

   /// @internal
   static Eo* _ctors_call(::efl::eo::parent_type _p)
   {
      Eo* _ret_eo = eo_add_ref(EFL_PLAYER_INTERFACE, _p._eo_raw);

      return _ret_eo;
   }

   /// @internal
   Eo* _concrete_eo_ptr() const { return _eo_ptr(); }
};

static_assert(sizeof(::efl::player) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<::efl::player>::value, "");

}


#include "efl_player.eo.impl.hh"

#endif // EFL_GENERATED_EFL_PLAYER_HH

