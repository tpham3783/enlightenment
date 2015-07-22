#ifndef _ECORE_MAINLOOP_EO_H_
#define _ECORE_MAINLOOP_EO_H_

#ifndef _ECORE_MAINLOOP_EO_CLASS_TYPE
#define _ECORE_MAINLOOP_EO_CLASS_TYPE

typedef Eo Ecore_Mainloop;

#endif

#ifndef _ECORE_MAINLOOP_EO_TYPES
#define _ECORE_MAINLOOP_EO_TYPES


#endif
#define ECORE_MAINLOOP_CLASS ecore_mainloop_class_get()

EAPI const Eo_Class *ecore_mainloop_class_get(void) EINA_CONST;

/**
 * No description supplied.
 *
 * @param[in] select_func No description supplied.
 */
EOAPI void  ecore_mainloop_select_func_set(Ecore_Select_Function select_func);

/**
 * No description supplied.
 */
EOAPI Ecore_Select_Function  ecore_mainloop_select_func_get(void);

/**
 * No description supplied.
 */
EOAPI void  ecore_mainloop_iterate(void);

/**
 * No description supplied.
 *
 * @param[in] may_block No description supplied.
 */
EOAPI int  ecore_mainloop_iterate_may_block(int may_block);

/**
 * No description supplied.
 */
EOAPI void  ecore_mainloop_begin(void);

/**
 * No description supplied.
 */
EOAPI void  ecore_mainloop_quit(void);

/**
 * No description supplied.
 */
EOAPI Eina_Bool  ecore_mainloop_animator_ticked(void);

EOAPI extern const Eo_Event_Description _ECORE_MAINLOOP_EVENT_IDLE_ENTER;
EOAPI extern const Eo_Event_Description _ECORE_MAINLOOP_EVENT_IDLE_EXIT;
EOAPI extern const Eo_Event_Description _ECORE_MAINLOOP_EVENT_IDLE;

/**
 * No description
 */
#define ECORE_MAINLOOP_EVENT_IDLE_ENTER (&(_ECORE_MAINLOOP_EVENT_IDLE_ENTER))

/**
 * No description
 */
#define ECORE_MAINLOOP_EVENT_IDLE_EXIT (&(_ECORE_MAINLOOP_EVENT_IDLE_EXIT))

/**
 * No description
 */
#define ECORE_MAINLOOP_EVENT_IDLE (&(_ECORE_MAINLOOP_EVENT_IDLE))

#endif
