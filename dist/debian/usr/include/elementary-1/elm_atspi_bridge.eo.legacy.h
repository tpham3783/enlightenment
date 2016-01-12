#ifndef _ELM_ATSPI_BRIDGE_EO_LEGACY_H_
#define _ELM_ATSPI_BRIDGE_EO_LEGACY_H_

#ifndef _ELM_ATSPI_BRIDGE_EO_CLASS_TYPE
#define _ELM_ATSPI_BRIDGE_EO_CLASS_TYPE

typedef Eo Elm_Atspi_Bridge;

#endif

#ifndef _ELM_ATSPI_BRIDGE_EO_TYPES
#define _ELM_ATSPI_BRIDGE_EO_TYPES


#endif

/** Indicate if connection with AT-SPI2 bus has been established.
 *
 * @ingroup Elm_Atspi_Bridge
 */
EAPI Eina_Bool elm_atspi_bridge_connected_get(const Elm_Atspi_Bridge *obj);

#endif
