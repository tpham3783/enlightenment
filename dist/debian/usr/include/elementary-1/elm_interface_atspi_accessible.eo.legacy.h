#ifndef _ELM_INTERFACE_ATSPI_ACCESSIBLE_EO_LEGACY_H_
#define _ELM_INTERFACE_ATSPI_ACCESSIBLE_EO_LEGACY_H_

#ifndef _ELM_INTERFACE_ATSPI_ACCESSIBLE_EO_CLASS_TYPE
#define _ELM_INTERFACE_ATSPI_ACCESSIBLE_EO_CLASS_TYPE

typedef Eo Elm_Interface_Atspi_Accessible;

#endif

#ifndef _ELM_INTERFACE_ATSPI_ACCESSIBLE_EO_TYPES
#define _ELM_INTERFACE_ATSPI_ACCESSIBLE_EO_TYPES

/** Type of accessibility object
 *
 * @ingroup Elm_Atspi
 */
typedef enum
{
  ELM_ATSPI_TYPE_REGULAR = 0, /** default accessibile object */
  ELM_ATSPI_TYPE_DISABLED, /** skip object and its children in accessibility
                            * hierarchy */
  ELM_ATSPI_TYPE_SKIPPED /** skip object in accessibility hierarchy */
} Elm_Atspi_Type;


#endif

#endif
