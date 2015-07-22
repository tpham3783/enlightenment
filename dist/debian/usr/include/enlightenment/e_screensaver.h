#ifdef E_TYPEDEFS
#else
#ifndef E_SCREENSAVER_H
#define E_SCREENSAVER_H

EINTERN void e_screensaver_preinit(void);
EINTERN int e_screensaver_init(void);
EINTERN int e_screensaver_shutdown(void);

E_API void e_screensaver_update(void);
E_API void e_screensaver_force_update(void);

E_API int e_screensaver_timeout_get(Eina_Bool use_idle);
E_API void e_screensaver_attrs_set(int timeout, int blanking, int expose);
E_API Eina_Bool e_screensaver_on_get(void);
E_API void e_screensaver_activate(void);
E_API void e_screensaver_deactivate(void);

E_API extern int E_EVENT_SCREENSAVER_ON;
E_API extern int E_EVENT_SCREENSAVER_OFF;

#endif
#endif
