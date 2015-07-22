#ifdef E_TYPEDEFS

typedef struct _E_Comp_X_Client_Data E_Comp_X_Client_Data;

#else
# ifndef E_COMP_X_H
#  define E_COMP_X_H
#  include <Ecore_X.h>
#  include "e_atoms.h"
#  include "e_hints.h"

struct _E_Comp_X_Client_Data
{
   Ecore_X_Window lock_win;

   Ecore_X_Damage       damage;  // damage region
   Ecore_X_Visual       vis;  // window visual
   Ecore_X_Colormap     cmap; // colormap of window
   int pw, ph; //XPRESENT!
   Eina_Rectangle shape; //SHAPE

#if 0 //NOT USED
   Ecore_X_Pixmap       cache_pixmap;  // the cached pixmap (1/nth the dimensions)
   int                  cache_w, cache_h;  // cached pixmap size
#endif

   Ecore_X_Image       *xim;  // x image - software fallback
   Ecore_X_Sync_Alarm   alarm;
   Ecore_X_Sync_Counter sync_counter;  // netwm sync counter

   Ecore_X_Window_Attributes initial_attributes;

   unsigned int move_counter; //reduce X calls when moving a window
   unsigned int internal_props_set; //don't need to refetch our own internal props

   Ecore_Timer *first_draw_delay; //configurable placebo
   Eina_Bool first_damage : 1; //ignore first damage on non-re_manage clients

   unsigned int parent_activate_count; //number of times a win has activated itself when parent was focused

   struct
   {
      struct
      {
         struct
         {
            unsigned char conformant : 1;
         } fetch;
         unsigned char conformant : 1;
      } conformant;
      struct
      {
         struct
         {
            unsigned char state : 1;
            struct
            {
               unsigned int major : 1;
               unsigned int minor : 1;
            } priority;
            unsigned char quickpanel : 1;
            unsigned char zone : 1;
         } fetch;
         Ecore_X_Illume_Quickpanel_State state;
         struct
         {
            unsigned int major : 1;
            unsigned int minor : 1;
         } priority;
         unsigned char                   quickpanel : 1;
         int                             zone;
      } quickpanel;
      struct
      {
         struct
         {
            unsigned char drag : 1;
            unsigned char locked : 1;
         } fetch;
         unsigned char drag : 1;
         unsigned char locked : 1;
      } drag;
      struct
      {
         struct
         {
            unsigned char state : 1;
         } fetch;
         Ecore_X_Illume_Window_State state;
      } win_state;
   } illume;
#ifdef HAVE_WAYLAND
   uint32_t surface_id;
#endif

   Eina_Bool moving : 1;
   Eina_Bool first_map : 1;
   Eina_Bool change_icon : 1;
   Eina_Bool need_reparent : 1;
   Eina_Bool reparented : 1;
   Eina_Bool deleted : 1;
   Eina_Bool button_grabbed : 1;
   Eina_Bool fetch_exe : 1;
   Eina_Bool set_win_type : 1;
   Eina_Bool frame_update : 1;
   Eina_Bool evas_init : 1;
   Eina_Bool unredirected_single : 1;
};

E_API Eina_Bool e_comp_x_init(void);
E_API void e_comp_x_shutdown(void);

E_API void e_alert_composite_win(Ecore_X_Window root, Ecore_X_Window win);
EINTERN void e_comp_x_nocomp_end(void);
EINTERN void e_comp_x_xwayland_client_setup(E_Client *ec, E_Client *wc);

E_API E_Pixmap *e_comp_x_client_pixmap_get(const E_Client *ec);

# endif
#endif
