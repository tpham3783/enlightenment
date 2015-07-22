#ifndef _ELM_SYSTRAY_EO_H_
#define _ELM_SYSTRAY_EO_H_

#ifndef _ELM_SYSTRAY_EO_CLASS_TYPE
#define _ELM_SYSTRAY_EO_CLASS_TYPE

typedef Eo Elm_Systray;

#endif

#ifndef _ELM_SYSTRAY_EO_TYPES
#define _ELM_SYSTRAY_EO_TYPES


#endif
#define ELM_SYSTRAY_CLASS elm_systray_class_get()

EAPI const Eo_Class *elm_systray_class_get(void) EINA_CONST;

/**
 * @brief Set the id of the Status Notifier Item.
 *
 * @param[in] id
 *
 * @ingroup Elm_Systray
 */
EOAPI void  elm_obj_systray_id_set(const char *id);

/** Get the id of the Status Notifier Item.
 *
 * @ingroup Elm_Systray
 */
EOAPI const char * elm_obj_systray_id_get(void);

/**
 * @brief Set the category of the Status Notifier Item.
 *
 * @param[in] cat Category
 *
 * @ingroup Elm_Systray
 */
EOAPI void  elm_obj_systray_category_set(Elm_Systray_Category cat);

/**
 * @brief Get the category of the Status Notifier Item.
 *
 * @return Category
 *
 * @ingroup Elm_Systray
 */
EOAPI Elm_Systray_Category  elm_obj_systray_category_get(void);

/**
 * @brief Set the path to the theme where the icons can be found. Set this
 * value to "" to use the default path.
 *
 * @param[in] icon_theme_path
 *
 * @ingroup Elm_Systray
 */
EOAPI void  elm_obj_systray_icon_theme_path_set(const char *icon_theme_path);

/** Get the path to the icon's theme currently in use.
 *
 * @ingroup Elm_Systray
 */
EOAPI const char * elm_obj_systray_icon_theme_path_get(void);

/**
 * @brief Set the object path of the D-Bus Menu that is to be show when the
 * Status Notifier Item is activated by the user.
 *
 * @param[in] menu
 *
 * @ingroup Elm_Systray
 */
EOAPI void  elm_obj_systray_menu_set(const Eo *menu);

/** Get the object path of the D-Bus Menu currently in use.
 *
 * @ingroup Elm_Systray
 */
EOAPI const Eo * elm_obj_systray_menu_get(void);

/**
 * @brief Set the name of the attention icon to be used by the Status Notifier
 * Item.
 *
 * @param[in] att_icon_name
 *
 * @ingroup Elm_Systray
 */
EOAPI void  elm_obj_systray_att_icon_name_set(const char *att_icon_name);

/** Get the name of the attention icon used by the Status Notifier Item.
 *
 * @ingroup Elm_Systray
 */
EOAPI const char * elm_obj_systray_att_icon_name_get(void);

/**
 * @brief Set the status of the Status Notifier Item.
 *
 * @param[in] st Status
 *
 * @ingroup Elm_Systray
 */
EOAPI void  elm_obj_systray_status_set(Elm_Systray_Status st);

/**
 * @brief Get the status of the Status Notifier Item.
 *
 * @return Status
 *
 * @ingroup Elm_Systray
 */
EOAPI Elm_Systray_Status  elm_obj_systray_status_get(void);

/**
 * @brief Set the name of the icon to be used by the Status Notifier Item.
 *
 * @param[in] icon_name
 *
 * @ingroup Elm_Systray
 */
EOAPI void  elm_obj_systray_icon_name_set(const char *icon_name);

/** Get the name of the icon used by the Status Notifier Item.
 *
 * @ingroup Elm_Systray
 */
EOAPI const char * elm_obj_systray_icon_name_get(void);

/**
 * @brief Set the title of the Status Notifier Item.
 *
 * @param[in] title
 *
 * @ingroup Elm_Systray
 */
EOAPI void  elm_obj_systray_title_set(const char *title);

/** Get the title of the Status Notifier Item.
 *
 * @ingroup Elm_Systray
 */
EOAPI const char * elm_obj_systray_title_get(void);

/** Register this Status Notifier Item in the System Tray Watcher. This
 * function should only be called after the event #ELM_EVENT_SYSTRAY_READY is
 * emitted.
 *
 * @ingroup Elm_Systray
 */
EOAPI Eina_Bool  elm_obj_systray_register(void);


#endif
