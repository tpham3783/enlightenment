#include "e_mod_main.h"

/* actual module specifics */
static Eina_Array* ifaces = NULL;

/* module setup */
E_API E_Module_Api e_modapi =
{
   E_MODULE_API_VERSION,
   "IPC Extension"
};

E_API void *
e_modapi_init(E_Module *m)
{
   ifaces = eina_array_new(5);

   msgbus_lang_init(ifaces);
   msgbus_desktop_init(ifaces);
   msgbus_audit_init(ifaces);

   return m;
}

E_API int
e_modapi_shutdown(E_Module *m EINA_UNUSED)
{
   Eldbus_Service_Interface* iface;
   Eina_Array_Iterator iter;
   size_t i;
   EINA_ARRAY_ITER_NEXT(ifaces, i, iface, iter)
     eldbus_service_interface_unregister(iface);
   eina_array_free(ifaces);
   ifaces = NULL;
   return 1;
}

E_API int
e_modapi_save(E_Module *m EINA_UNUSED)
{
   return 1;
}
