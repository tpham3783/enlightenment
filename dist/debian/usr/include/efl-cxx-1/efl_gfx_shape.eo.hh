#ifndef EFL_GENERATED_EFL_GFX_SHAPE_HH
#define EFL_GENERATED_EFL_GFX_SHAPE_HH

extern "C"
{
#include <Efl.h>
}
#include <Eo.hh>

#include <eo_cxx_interop.hh>

extern "C"
{
#include "efl_gfx_shape.eo.h"
}

#include <eo_base.eo.hh>
#include <string>

namespace efl { namespace gfx {

struct shape;

} }

/// @cond EO_CXX_ABSTRACT
namespace eo_cxx {

namespace efl { namespace gfx {

struct shape
{
   /// @param dup_from 
   ///
   void dup(::eo::base dup_from_) const;

   /// @param[out] r 
   ///
   void bounds_get(Eina_Rectangle* r_) const;

   void reset() const;

   /// @param x 
   /// @param y 
   ///
   void append_move_to(double x_, double y_) const;

   /// @param x 
   /// @param y 
   ///
   void append_line_to(double x_, double y_) const;

   /// @param x 
   /// @param y 
   /// @param ctrl_x 
   /// @param ctrl_y 
   ///
   void append_quadratic_to(double x_, double y_, double ctrl_x_, double ctrl_y_) const;

   /// @param x 
   /// @param y 
   ///
   void append_squadratic_to(double x_, double y_) const;

   /// @param x 
   /// @param y 
   /// @param ctrl_x0 
   /// @param ctrl_y0 
   /// @param ctrl_x1 
   /// @param ctrl_y1 
   ///
   void append_cubic_to(double x_, double y_, double ctrl_x0_, double ctrl_y0_, double ctrl_x1_, double ctrl_y1_) const;

   /// @param x 
   /// @param y 
   /// @param ctrl_x 
   /// @param ctrl_y 
   ///
   void append_scubic_to(double x_, double y_, double ctrl_x_, double ctrl_y_) const;

   /// @param x 
   /// @param y 
   /// @param rx 
   /// @param ry 
   /// @param angle 
   /// @param large_arc 
   /// @param sweep 
   ///
   void append_arc_to(double x_, double y_, double rx_, double ry_, double angle_, bool large_arc_, bool sweep_) const;

   void append_close() const;

   /// @param x 
   /// @param y 
   /// @param radius 
   ///
   void append_circle(double x_, double y_, double radius_) const;

   /// @param x 
   /// @param y 
   /// @param w 
   /// @param h 
   /// @param rx 
   /// @param ry 
   ///
   void append_rect(double x_, double y_, double w_, double h_, double rx_, double ry_) const;

   /// @param svg_path_data 
   ///
   void append_svg_path(::efl::eina::string_view svg_path_data_) const;

   /// @param from 
   /// @param to 
   /// @param pos_map 
   ///
   bool interpolate(::eo::base from_, ::eo::base to_, double pos_map_) const;

   /// @param with 
   ///
   bool equal_commands(::eo::base with_) const;

   double stroke_scale_get() const;

   void stroke_scale_set(double s_) const;

   void stroke_color_get(int* r_, int* g_, int* b_, int* a_) const;

   void stroke_color_set(int r_, int g_, int b_, int a_) const;

   double stroke_width_get() const;

   void stroke_width_set(double w_) const;

   double stroke_location_get() const;

   void stroke_location_set(double centered_) const;

   void stroke_dash_get(const Efl_Gfx_Dash ** dash_, unsigned int* length_) const;

   void stroke_dash_set(const Efl_Gfx_Dash * dash_, unsigned int length_) const;

   Efl_Gfx_Cap stroke_cap_get() const;

   void stroke_cap_set(Efl_Gfx_Cap c_) const;

   Efl_Gfx_Join stroke_join_get() const;

   void stroke_join_set(Efl_Gfx_Join j_) const;

   void path_get(const Efl_Gfx_Path_Command ** op_, const double ** points_) const;

   void path_set(const Efl_Gfx_Path_Command * op_, const double * points_) const;

   void path_length_get(unsigned int* commands_, unsigned int* points_) const;

   void current_get(double* x_, double* y_) const;

   void current_ctrl_get(double* x_, double* y_) const;



   static Eo_Class const* _eo_class()
   {
      return(EFL_GFX_SHAPE_MIXIN);
   }

   operator ::efl::gfx::shape() const;
   operator ::efl::gfx::shape&();
   operator ::efl::gfx::shape const&() const;

   /// @cond LOCAL
   template <typename D>
   struct address_of
   {
      operator ::efl::gfx::shape*() const { return static_cast<::efl::gfx::shape*>(static_cast<D const*>(this)->p); }
      operator ::efl::gfx::shape const*() const { return static_cast<::efl::gfx::shape const*>(static_cast<D const*>(this)->p); }
   };

   template <typename D>
   struct address_const_of
   {
      operator ::efl::gfx::shape const*() const { return static_cast<::efl::gfx::shape const*>(static_cast<D const*>(this)->p); }
   };
   /// @endcond

private:

   /// @internal
   Eo* _concrete_eo_ptr() const
   {
      return static_cast<::efl::eo::concrete const*>(static_cast<void const*>(this))->_eo_ptr();
   }

};

} }

}
/// @endcond

namespace efl { namespace gfx {

/// @brief Class shape
struct shape
      : ::efl::eo::concrete
{
   //@{
   /**
      @brief Constructs a new efl::gfx::shape object.

      Constructs a new efl::gfx::shape object. If you want this object to be a child
      of another Eo object, use an @ref efl::eo::parent expression, like the example.

      Example:
      @code
      efl::gfx::shape my_shape(efl::eo::parent = parent_object);
      @endcode

      @see shape(Eo* eo)
   */
   explicit shape(::efl::eo::parent_type _p)
      : shape(_ctors_call(_p))
   {}

   explicit shape()
      : shape(_ctors_call(::efl::eo::parent = nullptr))
   {}
   //@}

   /// @brief Eo Constructor.
   ///
   /// Constructs the object from an Eo* pointer stealing its ownership.
   ///
   /// @param eo The Eo object pointer.
   ///
   explicit shape(Eo* eo)
      : ::efl::eo::concrete(eo)
   {}

   /// @brief nullptr_t Constructor.
   ///
   /// Constructs an empty (null) object.
   ///
   explicit shape(std::nullptr_t)
      : ::efl::eo::concrete(nullptr)
   {}

   /// @brief Copy Constructor.
   ///
   shape(shape const& other)
      : shape(eo_ref(other._eo_ptr()))
   {}

   ~shape() {}

   /// @param dup_from 
   ///
   void dup(::eo::base dup_from_) const;

   /// @param[out] r 
   ///
   void bounds_get(Eina_Rectangle* r_) const;

   void reset() const;

   /// @param x 
   /// @param y 
   ///
   void append_move_to(double x_, double y_) const;

   /// @param x 
   /// @param y 
   ///
   void append_line_to(double x_, double y_) const;

   /// @param x 
   /// @param y 
   /// @param ctrl_x 
   /// @param ctrl_y 
   ///
   void append_quadratic_to(double x_, double y_, double ctrl_x_, double ctrl_y_) const;

   /// @param x 
   /// @param y 
   ///
   void append_squadratic_to(double x_, double y_) const;

   /// @param x 
   /// @param y 
   /// @param ctrl_x0 
   /// @param ctrl_y0 
   /// @param ctrl_x1 
   /// @param ctrl_y1 
   ///
   void append_cubic_to(double x_, double y_, double ctrl_x0_, double ctrl_y0_, double ctrl_x1_, double ctrl_y1_) const;

   /// @param x 
   /// @param y 
   /// @param ctrl_x 
   /// @param ctrl_y 
   ///
   void append_scubic_to(double x_, double y_, double ctrl_x_, double ctrl_y_) const;

   /// @param x 
   /// @param y 
   /// @param rx 
   /// @param ry 
   /// @param angle 
   /// @param large_arc 
   /// @param sweep 
   ///
   void append_arc_to(double x_, double y_, double rx_, double ry_, double angle_, bool large_arc_, bool sweep_) const;

   void append_close() const;

   /// @param x 
   /// @param y 
   /// @param radius 
   ///
   void append_circle(double x_, double y_, double radius_) const;

   /// @param x 
   /// @param y 
   /// @param w 
   /// @param h 
   /// @param rx 
   /// @param ry 
   ///
   void append_rect(double x_, double y_, double w_, double h_, double rx_, double ry_) const;

   /// @param svg_path_data 
   ///
   void append_svg_path(::efl::eina::string_view svg_path_data_) const;

   /// @param from 
   /// @param to 
   /// @param pos_map 
   ///
   bool interpolate(::eo::base from_, ::eo::base to_, double pos_map_) const;

   /// @param with 
   ///
   bool equal_commands(::eo::base with_) const;

   double stroke_scale_get() const;

   void stroke_scale_set(double s_) const;

   void stroke_color_get(int* r_, int* g_, int* b_, int* a_) const;

   void stroke_color_set(int r_, int g_, int b_, int a_) const;

   double stroke_width_get() const;

   void stroke_width_set(double w_) const;

   double stroke_location_get() const;

   void stroke_location_set(double centered_) const;

   void stroke_dash_get(const Efl_Gfx_Dash ** dash_, unsigned int* length_) const;

   void stroke_dash_set(const Efl_Gfx_Dash * dash_, unsigned int length_) const;

   Efl_Gfx_Cap stroke_cap_get() const;

   void stroke_cap_set(Efl_Gfx_Cap c_) const;

   Efl_Gfx_Join stroke_join_get() const;

   void stroke_join_set(Efl_Gfx_Join j_) const;

   void path_get(const Efl_Gfx_Path_Command ** op_, const double ** points_) const;

   void path_set(const Efl_Gfx_Path_Command * op_, const double * points_) const;

   void path_length_get(unsigned int* commands_, unsigned int* points_) const;

   void current_get(double* x_, double* y_) const;

   void current_ctrl_get(double* x_, double* y_) const;



   static Eo_Class const* _eo_class()
   {
      return(EFL_GFX_SHAPE_MIXIN);
   }

   /// @cond LOCAL
   struct address_of
      : ::eo_cxx::efl::gfx::shape::address_of<address_of>
      , ::efl::eo::detail::concrete_address_of
   {
      explicit address_of(::efl::gfx::shape* p)
         : ::efl::eo::detail::concrete_address_of(p)
      {}
   };
   address_of operator&() { return address_of(this); }

   struct address_const_of
      : ::eo_cxx::efl::gfx::shape::address_const_of<address_const_of>
      , ::efl::eo::detail::concrete_address_const_of
   {
      explicit address_const_of(::efl::gfx::shape const* p)
         : ::efl::eo::detail::concrete_address_const_of(p)
      {}
   };
   address_const_of operator&() const { return address_const_of(this); }

   /// @endcond

private:

   /// @internal
   static Eo* _ctors_call(::efl::eo::parent_type _p)
   {
      Eo* _ret_eo = eo_add_ref(EFL_GFX_SHAPE_MIXIN, _p._eo_raw);

      return _ret_eo;
   }

   /// @internal
   Eo* _concrete_eo_ptr() const { return _eo_ptr(); }
};

static_assert(sizeof(::efl::gfx::shape) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<::efl::gfx::shape>::value, "");

} }


#include "efl_gfx_shape.eo.impl.hh"

#endif // EFL_GENERATED_EFL_GFX_SHAPE_HH

