/*
 * File:          edu_csdms_models_HydroTrend_Impl.c
 * Symbol:        edu.csdms.models.HydroTrend-v0.0
 * Symbol Type:   class
 * Babel Version: 1.4.0 (Revision: 6607 release-1-4-0-branch)
 * Description:   Server-side implementation for edu.csdms.models.HydroTrend
 * 
 * WARNING: Automatically generated; only changes within splicers preserved
 * 
 */

/*
 * DEVELOPERS ARE EXPECTED TO PROVIDE IMPLEMENTATIONS
 * FOR THE FOLLOWING METHODS BETWEEN SPLICER PAIRS.
 */

/*
 * Symbol "edu.csdms.models.HydroTrend" (version 0.0)
 */

#include "edu_csdms_models_HydroTrend_Impl.h"
#include "sidl_NotImplementedException.h"
#include "sidl_Exception.h"
#ifndef included_sidl_MemAllocException_h
#include "sidl_MemAllocException.h"
#endif

/* DO-NOT-DELETE splicer.begin(edu.csdms.models.HydroTrend._includes) */

/* Insert-UserCode-Here {edu.csdms.models.HydroTrend._includes} (includes and arbitrary code) */
//#include <glib.h>

/* Bocca generated code. bocca.protected.begin(edu.csdms.models.HydroTrend._includes) */
#include <stdlib.h>
#include <string.h>
#include "sidl_SIDLException.h"

#define _BOCCA_CTOR_MESSAGES 0

#ifdef _BOCCA_STDERR

#define BOCCA_FPRINTF fprintf
#include <stdio.h>
#include "sidl_String.h"
#ifdef _BOCCA_CTOR_PRINT
#undef _BOCCA_CTOR_MESSAGES
#define _BOCCA_CTOR_MESSAGES 1
#endif /* _BOCCA_CTOR_PRINT */

#else /* _BOCCA_STDERR */
#define BOCCA_FPRINTF boccaPrintNothing
#endif /* _BOCCA_STDERR */

static int
boccaPrintNothing(void *v, const char * s, ...)
{
  (void)v; (void)s;
  return 0;
}
/* Bocca generated code. bocca.protected.end(edu.csdms.models.HydroTrend._includes) */

/* Insert-UserCode-Here {edu.csdms.models.HydroTrend._includes} (includes and arbitrary code) */

/* DO-NOT-DELETE splicer.end(edu.csdms.models.HydroTrend._includes) */

#define SIDL_IOR_MAJOR_VERSION 2
#define SIDL_IOR_MINOR_VERSION 0
/*
 * Static class initializer called exactly once before any user-defined method is dispatched
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_HydroTrend__load"

#ifdef __cplusplus
extern "C"
#endif
void
impl_edu_csdms_models_HydroTrend__load(
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.HydroTrend._load) */
    /* Insert-Code-Here {edu.csdms.models.HydroTrend._load} (static class 
      initializer method) */
    /*
     * This method has not been implemented
     */

    /* DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.HydroTrend._load) */
    SIDL_THROW(*_ex, sidl_NotImplementedException,     "This method has not been implemented");
  EXIT:;
    /* DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.HydroTrend._load) */
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.HydroTrend._load) */
  }
}
/*
 * Class constructor called when the class is created.
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_HydroTrend__ctor"

#ifdef __cplusplus
extern "C"
#endif
void
impl_edu_csdms_models_HydroTrend__ctor(
  /* in */ edu_csdms_models_HydroTrend self,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.HydroTrend._ctor) */

  /* Insert-UserDecl-Here {edu.csdms.models.HydroTrend._ctor} (constructor method) */
    
  /* bocca-default-code. User may edit or delete.begin(edu.csdms.models.HydroTrend._ctor) */
   struct edu_csdms_models_HydroTrend__data *dptr = 
       (struct edu_csdms_models_HydroTrend__data*)malloc(sizeof(struct edu_csdms_models_HydroTrend__data));
   if (dptr) {
      memset(dptr, 0, sizeof(struct edu_csdms_models_HydroTrend__data));
   }
   edu_csdms_models_HydroTrend__set_data(self, dptr);
   #if _BOCCA_CTOR_MESSAGES
     BOCCA_FPRINTF(stderr, 
        "CTOR edu.csdms.models.HydroTrend: %s constructed data %p in self %p\n", 
        __FUNC__, dptr, self);
   #endif /* _BOCCA_CTOR_MESSAGES */
  /* bocca-default-code. User may edit or delete.end(edu.csdms.models.HydroTrend._ctor) */

  /* initialize user elements of dptr here */
  /* Insert-UserCode-Here {edu.csdms.models.HydroTrend._ctor} (constructor method) */

    { /* Initialize private data */
/*
      if (!dptr)
        SIDL_THROW(*_ex, sidl_SIDLException, 
             "NULL data pointer in edu.csdms.models.HydroTrend _ctor");
*/
      dptr->log = NULL;
      dptr->state = NULL;
    }

    /* DO-NOT-DELETE splicer.end(edu.csdms.models.HydroTrend._ctor) */
  }
}

/*
 * Special Class constructor called when the user wants to wrap his own private data.
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_HydroTrend__ctor2"

#ifdef __cplusplus
extern "C"
#endif
void
impl_edu_csdms_models_HydroTrend__ctor2(
  /* in */ edu_csdms_models_HydroTrend self,
  /* in */ void* private_data,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.HydroTrend._ctor2) */
    /* Insert-Code-Here {edu.csdms.models.HydroTrend._ctor2} (special 
      constructor method) */
    /*
     * This method has not been implemented
     */

    /* DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.HydroTrend._ctor2) */
    SIDL_THROW(*_ex, sidl_NotImplementedException,     "This method has not been implemented");
  EXIT:;
    /* DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.HydroTrend._ctor2) */
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.HydroTrend._ctor2) */
  }
}
/*
 * Class destructor called when the class is deleted.
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_HydroTrend__dtor"

#ifdef __cplusplus
extern "C"
#endif
void
impl_edu_csdms_models_HydroTrend__dtor(
  /* in */ edu_csdms_models_HydroTrend self,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.HydroTrend._dtor) */

  /* deinitialize user elements of dptr here */
  /* Insert-UserCode-Here {edu.csdms.models.HydroTrend._dtor} (destructor method) */
    
  /* bocca-default-code. User may edit or delete.begin(edu.csdms.models.HydroTrend._dtor) */
   struct edu_csdms_models_HydroTrend__data *dptr = 
                edu_csdms_models_HydroTrend__get_data(self);
   if (dptr) {
      free(dptr);
      edu_csdms_models_HydroTrend__set_data(self, NULL);
   }
   #if _BOCCA_CTOR_MESSAGES
     BOCCA_FPRINTF(stderr, "DTOR edu.csdms.models.HydroTrend: %s freed data %p in self %p\n", 
                   __FUNC__, dptr, self);
   #endif /* _BOCCA_CTOR_MESSAGES */
  /* bocca-default-code. User may edit or delete.end(edu.csdms.models.HydroTrend._dtor) */

    /* DO-NOT-DELETE splicer.end(edu.csdms.models.HydroTrend._dtor) */
  }
}

/*
 * Method:  boccaSetServices[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_HydroTrend_boccaSetServices"

#ifdef __cplusplus
extern "C"
#endif
void
impl_edu_csdms_models_HydroTrend_boccaSetServices(
  /* in */ edu_csdms_models_HydroTrend self,
  /* in */ gov_cca_Services services,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.HydroTrend.boccaSetServices) */
/* DO-NOT-EDIT-BOCCA */
/* Bocca generated code. bocca.protected.begin(edu.csdms.models.HydroTrend.boccaSetServices) */
   struct edu_csdms_models_HydroTrend__data *pd;
   gov_cca_ComponentRelease   compRelease = NULL;
   sidl_BaseInterface throwaway_excpt = NULL; /* for use in EXIT block only. */
   int dr_services=0; /* assume releaseServices will not be called if setServices fails */
   

   gov_cca_TypeMap typeMap = NULL;
   gov_cca_Port port = NULL;

   pd = edu_csdms_models_HydroTrend__get_data(self);
   if (pd == NULL) {
     SIDL_THROW(*_ex, sidl_SIDLException, 
          "NULL data pointer in edu.csdms.models.HydroTrend boccaSetServices");
   }

   pd->d_services = services;
   gov_cca_Services_addRef(services, _ex); SIDL_CHECK(*_ex);
   dr_services=1;


  /* Create a typemap  */
   typeMap = gov_cca_Services_createTypeMap(pd->d_services, _ex); 
   SIDL_CHECK(*_ex);
   /* We must pass the exception back up; the framework is hosed and not our problem. */

  /* Cast myself to gov.cca.Port */
   port = gov_cca_Port__cast(self, _ex); SIDL_CHECK(*_ex);

   /* Provide a gov.cca.ports.GoPort port with port name Run */
   gov_cca_Services_addProvidesPort(pd->d_services,   
                                    port,		/* the implementing object */
                                    "Run", /* the name seen by the user */
                                    "gov.cca.ports.GoPort", /* sidl name of the port type. */
                                    typeMap,            /* extra properties */
                                    _ex); SIDL_CHECK(*_ex);

   /* Provide a edu.csdms.ports.CMIPort port with port name Discharge */
   gov_cca_Services_addProvidesPort(pd->d_services,   
                                    port,		/* the implementing object */
                                    "Discharge", /* the name seen by the user */
                                    "edu.csdms.ports.CMIPort", /* sidl name of the port type. */
                                    typeMap,            /* extra properties */
                                    _ex); SIDL_CHECK(*_ex);

   gov_cca_Port_deleteRef(port, _ex); port = NULL; SIDL_CHECK(*_ex);

  /* Register a use port of type gov.cca.ports.ParameterPortFactory with port name ppf */  
   gov_cca_Services_registerUsesPort(pd->d_services,   
                                     "ppf", /* the name seen by the user */
                                     "gov.cca.ports.ParameterPortFactory", /* sidl name of the port type. */
                                     typeMap, /* extra properties */
                                     _ex); SIDL_CHECK(*_ex);

   gov_cca_TypeMap_deleteRef(typeMap,_ex); typeMap = NULL; SIDL_CHECK(*_ex);

   /* Cast myself to gov.cca.ComponentRelease */
   compRelease = gov_cca_ComponentRelease__cast(self, _ex); SIDL_CHECK(*_ex);
   gov_cca_Services_registerForRelease(pd->d_services, 
                                       compRelease, _ex);
   SIDL_CHECK(*_ex);
   gov_cca_ComponentRelease_deleteRef(compRelease, _ex); compRelease = NULL; 
   SIDL_CHECK(*_ex);
   return;

   /* exceptions exit through here, where we clean up memory references. */
EXIT:;
   if (dr_services != 0) { 
     gov_cca_Services_deleteRef(services, &throwaway_excpt); 
     SIDL_CLEAR(throwaway_excpt);
     services = NULL;
   }
   if (compRelease != NULL) {
     gov_cca_ComponentRelease_deleteRef(compRelease, &throwaway_excpt); 
     SIDL_CLEAR(throwaway_excpt);
     compRelease = NULL;
   }

   if (typeMap != NULL) {
     gov_cca_TypeMap_deleteRef(typeMap, &throwaway_excpt); 
     SIDL_CLEAR(throwaway_excpt);
     port = NULL;
   }
   if (port != NULL) {
     gov_cca_Port_deleteRef(port, &throwaway_excpt); 
     SIDL_CLEAR(throwaway_excpt);
     port = NULL;
   }

   return;

/* Bocca generated code. bocca.protected.end(edu.csdms.models.HydroTrend.boccaSetServices) */
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.HydroTrend.boccaSetServices) */
  }
}

/*
 * Method:  boccaReleaseServices[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_HydroTrend_boccaReleaseServices"

#ifdef __cplusplus
extern "C"
#endif
void
impl_edu_csdms_models_HydroTrend_boccaReleaseServices(
  /* in */ edu_csdms_models_HydroTrend self,
  /* in */ gov_cca_Services services,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.HydroTrend.boccaReleaseServices) */
/* DO-NOT-EDIT-BOCCA */
/*  Bocca generated code. bocca.protected.begin(edu.csdms.models.HydroTrend.boccaReleaseServices) */

   struct edu_csdms_models_HydroTrend__data *pd;
   sidl_BaseInterface throwaway_excpt = NULL;
   sidl_BaseInterface dummy_excpt = NULL;
   char *errMsg=NULL;
   /* our policy is to trap and optionally print all port-related messages,
      attempting to eliminate all ports. */


   /* UN-Provide a gov.cca.ports.GoPort port with port name Run */
   gov_cca_Services_removeProvidesPort(services, "Run", 
                                       &throwaway_excpt);
   errMsg = "Error: Could not removeProvidesPort(\"Run\")";
   edu_csdms_models_HydroTrend_checkException(self, throwaway_excpt, errMsg, FALSE, 
                                   &dummy_excpt);

   /* UN-Provide a edu.csdms.ports.CMIPort port with port name Discharge */
   gov_cca_Services_removeProvidesPort(services, "Discharge", 
                                       &throwaway_excpt);
   errMsg = "Error: Could not removeProvidesPort(\"Discharge\")";
   edu_csdms_models_HydroTrend_checkException(self, throwaway_excpt, errMsg, FALSE, 
                                   &dummy_excpt);

  /* Un-Register a use port of type gov.cca.ports.ParameterPortFactory with port name ppf */  
   gov_cca_Services_unregisterUsesPort(services, "ppf", 
                                       &throwaway_excpt);
   errMsg= "Error: Could not unregisterUsesPort(\"ppf\")";
   edu_csdms_models_HydroTrend_checkException(self, throwaway_excpt, errMsg, FALSE, 
                                   &dummy_excpt);

   services = NULL;
   pd = edu_csdms_models_HydroTrend__get_data(self);
   if (pd == NULL) {
     SIDL_THROW(*_ex, sidl_SIDLException, 
        "NULL data pointer in edu.csdms.models.HydroTrend boccaSetServices");
   }
   gov_cca_Services_deleteRef(pd->d_services, _ex); 
   SIDL_CHECK(*_ex);
   pd->d_services = NULL;
   return;

EXIT:;
   return;
/*  Bocca generated code. bocca.protected.end(edu.csdms.models.HydroTrend.boccaReleaseServices) */
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.HydroTrend.boccaReleaseServices) */
  }
}

/*
 * Method:  checkException[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_HydroTrend_checkException"

#ifdef __cplusplus
extern "C"
#endif
void
impl_edu_csdms_models_HydroTrend_checkException(
  /* in */ edu_csdms_models_HydroTrend self,
  /* in */ sidl_BaseInterface excpt,
  /* in */ const char* msg,
  /* in */ sidl_bool fatal,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.HydroTrend.checkException) */
/* DO-NOT-EDIT-BOCCA */
/*  Bocca generated code. bocca.protected.begin(edu.csdms.models.HydroTrend.checkException) */
#ifdef _BOCCA_STDERR
   sidl_BaseException be = NULL;
   char *etext=NULL;
#endif
   
   if (SIDL_CATCH(excpt, "sidl.BaseException")) {
#ifdef _BOCCA_STDERR
      be  = sidl_BaseException__cast(excpt, _ex); SIDL_CLEAR(*_ex);
      etext = sidl_BaseException_getNote(be, _ex); SIDL_CLEAR(*_ex);
      fprintf(stderr, "edu.csdms.models.HydroTrend: %s \n%s\n", msg,etext);
      sidl_String_free(etext);
      if (be != NULL) { 
        sidl_BaseException_deleteRef(be, _ex); SIDL_CLEAR(*_ex);
        be = NULL;
      }
#endif
      SIDL_CLEAR(excpt);
      if (fatal) exit(1);
   }
   return;
   
/*  Bocca generated code. bocca.protected.end(edu.csdms.models.HydroTrend.checkException) */
    
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.HydroTrend.checkException) */
  }
}

/*
 *  This function should never be called, but helps babel generate better code. 
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_HydroTrend_boccaForceUsePortInclude"

#ifdef __cplusplus
extern "C"
#endif
void
impl_edu_csdms_models_HydroTrend_boccaForceUsePortInclude(
  /* in */ edu_csdms_models_HydroTrend self,
  /* in */ gov_cca_ports_ParameterPortFactory dummy0,
  /* in */ edu_csdms_tools_Verbose dummy1,
  /* in */ edu_csdms_tools_CMIGridUniformRectilinear dummy2,
  /* in */ edu_csdms_cmi_ComponentHandler dummy3,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.HydroTrend.boccaForceUsePortInclude) */
/* DO-NOT-EDIT-BOCCA */
  /* Bocca generated code. bocca.protected.begin(edu.csdms.models.HydroTrend.boccaForceUsePortInclude) */
    (void)self;
    (void)dummy0;
    (void)dummy1;
    (void)dummy2;
    (void)dummy3;

  /* Bocca generated code. bocca.protected.end(edu.csdms.models.HydroTrend.boccaForceUsePortInclude) */
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.HydroTrend.boccaForceUsePortInclude) */
  }
}

/*
 *  Starts up a component presence in the calling framework.
 * @param services the component instance's handle on the framework world.
 * Contracts concerning services and setServices:
 * 
 * The component interaction with the CCA framework
 * and Ports begins on the call to setServices by the framework.
 * 
 * This function is called exactly once for each instance created
 * by the framework.
 * 
 * The argument services will never be nil/null.
 * 
 * Those uses ports which are automatically connected by the framework
 * (so-called service-ports) may be obtained via getPort during
 * setServices.
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_HydroTrend_setServices"

#ifdef __cplusplus
extern "C"
#endif
void
impl_edu_csdms_models_HydroTrend_setServices(
  /* in */ edu_csdms_models_HydroTrend self,
  /* in */ gov_cca_Services services,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.HydroTrend.setServices) */

  /*  Insert-UserDecl-Here {edu.csdms.models.HydroTrend.setServices} (setServices method) */
    struct edu_csdms_models_HydroTrend__data *pd;
    gov_cca_ports_ParameterPortFactory ppf;
    gov_cca_Port gcp;

  /* bocca-default-code. User may edit or delete.begin(edu.csdms.models.HydroTrend.setServices) */
    impl_edu_csdms_models_HydroTrend_boccaSetServices(self, services, _ex); SIDL_CHECK(*_ex);
  /* bocca-default-code. User may edit or delete.end(edu.csdms.models.HydroTrend.setServices) */
  
  /*  Insert-UserCode-Here {edu.csdms.models.HydroTrend.setServices} (setServices method) */
    pd = edu_csdms_models_HydroTrend__get_data (self);
    if (!pd->log) {
      pd->log = edu_csdms_tools_Verbose__create (_ex);
      edu_csdms_tools_Verbose_initialize (pd->log, CMI_COMPONENT_NAME, 2, _ex);
    }

    edu_csdms_tools_Verbose_info (pd->log, "Creating ComponentHandler", _ex);

    {
      edu_csdms_ports_CMIPort port = edu_csdms_ports_CMIPort__cast (self, _ex);
      pd->handler = edu_csdms_cmi_ComponentHandler__create (_ex);
      edu_csdms_cmi_ComponentHandler_set_up (pd->handler,
          CMI_COMPONENT_NAME, port, services, _ex);
    }
    edu_csdms_tools_Verbose_info (pd->log, "Created ComponentHandler", _ex);

#if 0

    pd->userinput = gov_cca_Services_createTypeMap(services, _ex); 

    gcp = gov_cca_Services_getPort(services, "ppf", _ex);
    if (!gcp)
     SIDL_THROW(*_ex, sidl_SIDLException, 
        "NULL data pointer (gcp) in edu.csdms.models.HydroTrend setServices");

    ppf = gov_cca_ports_ParameterPortFactory__cast (gcp, _ex);
    if (!ppf)
     SIDL_THROW(*_ex, sidl_SIDLException, 
        "NULL data pointer (ppf) in edu.csdms.models.HydroTrend setServices");

    gov_cca_ports_ParameterPortFactory_initParameterData (ppf,
      &(pd->userinput), "Configure", _ex);
    gov_cca_ports_ParameterPortFactory_setBatchTitle (ppf,
      pd->userinput, "HydroTrend Parameters", _ex);

    {
      edu_csdms_tools_ConfigDialog dialog;
      //char* xml_file = "/data/progs/cca/project/csdms_eric/data/HydroTrend.xml";

      dialog = edu_csdms_tools_ConfigDialog__create (_ex);
      edu_csdms_tools_ConfigDialog_read (dialog, "HydroTrend.xml", _ex);
      edu_csdms_tools_ConfigDialog_construct (dialog, ppf, pd->userinput, _ex);
    }

    gov_cca_ports_ParameterPortFactory_addParameterPort (ppf,
      pd->userinput, services, _ex);
    gov_cca_Services_releasePort (services, "ppf", _ex);
#endif

EXIT:;
    /* Insert additional exception cleanup here if needed. */
    return;

    /* DO-NOT-DELETE splicer.end(edu.csdms.models.HydroTrend.setServices) */
  }
}

/*
 * Shuts down a component presence in the calling framework.
 * @param services the component instance's handle on the framework world.
 * Contracts concerning services and setServices:
 * 
 * This function is called exactly once for each callback registered
 * through Services.
 * 
 * The argument services will never be nil/null.
 * The argument services will always be the same as that received in
 * setServices.
 * 
 * During this call the component should release any interfaces
 * acquired by getPort().
 * 
 * During this call the component should reset to nil any stored
 * reference to services.
 * 
 * After this call, the component instance will be removed from the
 * framework. If the component instance was created by the
 * framework, it will be destroyed, not recycled, The behavior of
 * any port references obtained from this component instance and
 * stored elsewhere becomes undefined.
 * 
 * Notes for the component implementor:
 * 1) The component writer may perform blocking activities
 * within releaseServices, such as waiting for remote computations
 * to shutdown.
 * 2) It is good practice during releaseServices for the component
 * writer to remove or unregister all the ports it defined.
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_HydroTrend_releaseServices"

#ifdef __cplusplus
extern "C"
#endif
void
impl_edu_csdms_models_HydroTrend_releaseServices(
  /* in */ edu_csdms_models_HydroTrend self,
  /* in */ gov_cca_Services services,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.HydroTrend.releaseServices) */

  /*  Insert-UserCode-Here {edu.csdms.models.HydroTrend.releaseServices} (releaseServices method) */

  /* bocca-default-code. User may edit or delete.begin(edu.csdms.models.HydroTrend.releaseServices) */
    impl_edu_csdms_models_HydroTrend_boccaReleaseServices(self, services, _ex); SIDL_CHECK(*_ex);
    return;
  /* bocca-default-code. User may edit or delete.end(edu.csdms.models.HydroTrend.releaseServices) */

EXIT:;
    /* Insert additional exception cleanup here if needed. */
    return;

    /* DO-NOT-DELETE splicer.end(edu.csdms.models.HydroTrend.releaseServices) */
  }
}

/*
 *  
 * Execute some encapsulated functionality on the component. 
 * Return 0 if ok, -1 if internal error but component may be 
 * used further, and -2 if error so severe that component cannot
 * be further used safely.
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_HydroTrend_go"

#ifdef __cplusplus
extern "C"
#endif
int32_t
impl_edu_csdms_models_HydroTrend_go(
  /* in */ edu_csdms_models_HydroTrend self,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.HydroTrend.go) */
    int bocca_status = 0;
    struct edu_csdms_models_HydroTrend__data *this =
      edu_csdms_models_HydroTrend__get_data (self);

    this->status = CMI_STATUS_INITIALIZING;
    edu_csdms_cmi_ComponentHandler_go (this->handler, _ex);

    return bocca_status;
#if 0
    {
      struct sidl_string__array* properties = sidl_string__array_create1d (2);
      struct edu_csdms_models_HydroTrend__data *pd =
               edu_csdms_models_HydroTrend__get_data (self);
      double duration;

      if (!pd->log)
      {
        pd->log = edu_csdms_tools_Verbose__create (_ex);
        edu_csdms_tools_Verbose_set_log_level (pd->log, 1, _ex);
      }

      { /* Set site and case prefix from GUI */
        gchar *site_prefix = gov_cca_TypeMap_getString (pd->userinput,
                               "/HydroTrend/SitePrefix", NULL, _ex);
        gchar *case_prefix = gov_cca_TypeMap_getString (pd->userinput,
                               "/HydroTrend/CasePrefix", NULL, _ex);

        /* Duration in years.  Convert to days. */
        duration = gov_cca_TypeMap_getInt (pd->userinput,
                     "/HydroTrend/Input/Var/RunDuration", 100, _ex);
        duration *= 365.;

        sidl_string__array_set1 (properties, 0, site_prefix);
        sidl_string__array_set1 (properties, 1, case_prefix);
      }

      PRINT (1, "Initialize");
      edu_csdms_models_HydroTrend_initialize (self, properties, _ex); SIDL_CHECK(*_ex);

      PRINT (1, "Run");
      edu_csdms_models_HydroTrend_run (self, duration, _ex); SIDL_CHECK(*_ex);

      PRINT (1, "Finalize");
      edu_csdms_models_HydroTrend_finalize (self, _ex); SIDL_CHECK(*_ex);
    }
    
    return bocca_status;
#endif

EXIT:
    bocca_status = 2;
    edu_csdms_models_HydroTrend_finalize (self, _ex);
    return bocca_status;

#if 0
    struct edu_csdms_models_HydroTrend__data* pd;
    edu_csdms_ports_PrinterPort printer;

    /* Access private data structure */
    pd = edu_csdms_models_HydroTrend__get_data(self);

    { /* Connect to the printer port. */
      gov_cca_Port port;
      sidl_BaseInterface exception = NULL, throwaway_excpt = NULL;
      port = gov_cca_Services_getPort(pd->d_services, "Printer", &exception);
      if (SIDL_CATCH(exception, "gov.cca.CCAException"))
      {
        fprintf(stderr, "Exception:: %s:%d: getPort(\"Printer\") failed.\n",
                __FILE__, __LINE__);
        SIDL_CLEAR(exception);
        port = NULL;
      }

      printer = edu_csdms_ports_PrinterPort__cast (port, &throwaway_excpt);
      if (printer == NULL)
      {
        fprintf (stderr,
                 "PrintPort not connected.  There will not be any output.\n");
      }
    }

    impl_edu_csdms_models_HydroTrend_initialize (self, NULL, _ex);

    { /* Run the model and print output. */
      int i;
      struct sidl_double__array* data;
      //struct sidl_double__array* time;
      int lower[2] = {0, 0};
      int upper[2] = {99, 1};
      char* output_file = g_build_filename (g_get_home_dir (), "HYDRO.curve");

      //time = sidl_double__array_createCol (1, lower, upper);
      data = sidl_double__array_create2dCol (100, 2);

      for (i=0; i<100; i++)
      {
        impl_edu_csdms_models_HydroTrend_run (self, i, _ex);
        if (printer)
        {
          sidl_double__array_set2 (data, i, 0, i);
          sidl_double__array_set2 (data, i, 1, ht_get_bedload_flux (pd->state));
        }
      }

      if (printer)
        edu_csdms_ports_PrinterPort_PrintMatrix (printer,
          output_file, "Bedload Flux",
          (struct sidl__array*)data, _ex);

      sidl_double__array_deleteRef (data);
      free (output_file);
    }

    impl_edu_csdms_models_HydroTrend_finalize (self, _ex);

    { /* Release the ports. */
      gov_cca_Services_releasePort(pd->d_services, "Printer", _ex);
      if (SIDL_CATCH(*_ex, "gov.cca.CCAException")) {
        fprintf(stderr, "Exception:: %s:%d: releasePort(\"Printer\") failed.\n",
           __FILE__, __LINE__);
        SIDL_CLEAR(*_ex);
        return(-1);
      }
    }
#endif

    /* DO-NOT-DELETE splicer.end(edu.csdms.models.HydroTrend.go) */
  }
}

/*
 * Method:  CMI_initialize[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_HydroTrend_CMI_initialize"

#ifdef __cplusplus
extern "C"
#endif
sidl_bool
impl_edu_csdms_models_HydroTrend_CMI_initialize(
  /* in */ edu_csdms_models_HydroTrend self,
  /* in */ const char* config_file,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.HydroTrend.CMI_initialize) */
    struct edu_csdms_models_HydroTrend__data *this =
      edu_csdms_models_HydroTrend__get_data (self);

    if (this->status < CMI_STATUS_INITIALIZING) {
      this->status = CMI_STATUS_INITIALIZING;
      edu_csdms_cmi_ComponentHandler_init_component (this->handler, "", _ex);
      this->status = CMI_STATUS_INITIALIZED;
    }

    return TRUE;

    /* DO-NOT-DELETE splicer.end(edu.csdms.models.HydroTrend.CMI_initialize) */
  }
}

/*
 * Method:  prepare[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_HydroTrend_prepare"

#ifdef __cplusplus
extern "C"
#endif
sidl_bool
impl_edu_csdms_models_HydroTrend_prepare(
  /* in */ edu_csdms_models_HydroTrend self,
  /* in */ const char* config_file,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.HydroTrend.prepare) */
    struct edu_csdms_models_HydroTrend__data *this =
      edu_csdms_models_HydroTrend__get_data (self);

    this->state = BMI_Initialize (config_file);
    if (!this->state) {
      edu_csdms_tools_Verbose_error (this->log, "Unable to initialize", _ex);
    }

    return TRUE;

    /* DO-NOT-DELETE splicer.end(edu.csdms.models.HydroTrend.prepare) */
  }
}

/*
 * Method:  CMI_run_for[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_HydroTrend_CMI_run_for"

#ifdef __cplusplus
extern "C"
#endif
sidl_bool
impl_edu_csdms_models_HydroTrend_CMI_run_for(
  /* in */ edu_csdms_models_HydroTrend self,
  /* in */ double time_interval,
  /* in */ const char* time_units,
  /* in */ const char* stop_rule,
  /* in array<double> */ struct sidl_double__array* stop_vars,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.HydroTrend.CMI_run_for) */
    /* Insert-Code-Here {edu.csdms.models.HydroTrend.CMI_run_for} (CMI_run_for 
      method) */
    /*
     * This method has not been implemented
     */

    /* DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.HydroTrend.CMI_run_for) */
    SIDL_THROW(*_ex, sidl_NotImplementedException,     "This method has not been implemented");
  EXIT:;
    /* DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.HydroTrend.CMI_run_for) */
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.HydroTrend.CMI_run_for) */
  }
}

/*
 * Method:  CMI_run[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_HydroTrend_CMI_run"

#ifdef __cplusplus
extern "C"
#endif
sidl_bool
impl_edu_csdms_models_HydroTrend_CMI_run(
  /* in */ edu_csdms_models_HydroTrend self,
  /* in */ double time_interval,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.HydroTrend.CMI_run) */
    struct edu_csdms_models_HydroTrend__data *this =
      edu_csdms_models_HydroTrend__get_data (self);

      
    this->status = CMI_STATUS_UPDATING;
    edu_csdms_cmi_ComponentHandler_run_component (this->handler, time_interval, _ex);
    this->status = CMI_STATUS_UPDATED;

    return TRUE;

    /* DO-NOT-DELETE splicer.end(edu.csdms.models.HydroTrend.CMI_run) */
  }
}

/*
 * Method:  run[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_HydroTrend_run"

#ifdef __cplusplus
extern "C"
#endif
sidl_bool
impl_edu_csdms_models_HydroTrend_run(
  /* in */ edu_csdms_models_HydroTrend self,
  /* in */ double time_interval,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.HydroTrend.run) */
    struct edu_csdms_models_HydroTrend__data *this =
      edu_csdms_models_HydroTrend__get_data (self);

    edu_csdms_tools_Verbose_info (this->log, "Running...", _ex);
    BMI_Update_until (this->state, time_interval);
    edu_csdms_tools_Verbose_info (this->log, "Ran.", _ex);

    return TRUE;
#if 0
    struct edu_csdms_models_HydroTrend__data *pd =
      edu_csdms_models_HydroTrend__get_data (self);

    /*  Initialize HydroTrend. */
    if (pd->state==NULL)
      SIDL_THROW(*_ex, sidl_SIDLException,
        "HydroTrend must be initialized before it can be run.");

    if (pd && pd->state)
    {
      const double horizon = ht_get_end_time (pd->state);
      const double current = ht_get_current_time (pd->state);
      const double start = ht_get_start_time (pd->state);
      double print_time = edu_csdms_tools_PrintQueue_next_print_time (
                            pd->print_queue, _ex);

      PRINT_DBL (2, time);
      PRINT_DBL (2, current);
  
      while (print_time<time)
      {
        impl_edu_csdms_models_HydroTrend_run (self, print_time, _ex);
        print_time = edu_csdms_tools_PrintQueue_next_print_time (
                       pd->print_queue, _ex);
      }

      if (time>horizon)
      {
        PRINT (1, "Requested time is greater than horizon.");
      }
      else if (time>current)
      {
        ht_run_until (pd->state, time);

        PRINT (2, "Print everything in the queue");
        edu_csdms_tools_PrintQueue_print_all (pd->print_queue, time, _ex);
      }
      else
      {
        PRINT (2, "Time is less than current time");
      }
    }

    return;

#if 0
      const double horizon = ht_get_end_time (pd->state);
      const double current = ht_get_current_time (pd->state);

      if (time>horizon)
      {
        fprintf (stderr,
                 "HydroTrend: Requested time is greater than horizon.\n");
      }
      else if (time>current)
      {
        ht_run_until (pd->state, time);

        {
          char** item;
          //double val = ht_get_bedload_flux (pd->state);
          double val;

          for (item=pd->print_vals; item && *item; item++)
          {
            val = ht_get_value (pd->state, *item);
            edu_csdms_tools_nctsfiles_append_val (pd->ncts_files, *item, time,
                                                  val, _ex);
          }
          //tools_ncts_append (pd->ncts_bedload, val, "bed_load_flux", time, _ex);
        }

#if 0
        if (pd->printer_port_is_on)
        {
          struct sidl_double__array* data;
          char* output_file = g_build_filename (g_get_current_dir (),
                                                "HYDRO.curve");
          int lower[2] = {0, 0};
          int upper[2] = {99, 1};
          data = sidl_double__array_create2dCol (100, 2);
  
          sidl_double__array_set2 (data, i, 0, i);
          sidl_double__array_set2 (data, i, 1, ht_get_bedload_flux (pd->state));
  
          edu_csdms_ports_PrinterPort_PrintMatrix (printer,
            output_file, "Bedload Flux",
            (struct sidl__array*)data, _ex);
  
          sidl_double__array_deleteRef (data);

          edu_csdms_openmi_IValueSet valueSet;
          edu_csdms_openmi_ScalarSet scalarSet;

          valueSet = impl_edu_csdms_models_HydroTrend_get_Value_Set (pd,
                       "Bedload Flux", _ex);
          scalarSet = edu_csdms_openmi_ScalarSet__cast (ValueSet, _ex);

          edu_csdms_ports_PrinterPort_PrintMatrix (printer,
            output_file, "Bedload Flux",
            (struct sidl__array*)data, _ex);

          free (output_file);
        }
#endif

#if 0
    { /* Run the model and print output. */
      int i;
      struct sidl_double__array* data;
      //struct sidl_double__array* time;
      int lower[2] = {0, 0};
      int upper[2] = {99, 1};
      char* output_file = g_build_filename (g_get_home_dir (), "HYDRO.curve");

      //time = sidl_double__array_createCol (1, lower, upper);
      data = sidl_double__array_create2dCol (100, 2);

      for (i=0; i<100; i++)
      {
        impl_edu_csdms_models_HydroTrend_run (self, i, _ex);
        if (pd->printer_port_is_on)
        {
          sidl_double__array_set2 (data, i, 0, i);
          sidl_double__array_set2 (data, i, 1, ht_get_bedload_flux (pd->state));
        }
      }

      sidl_double__array_deleteRef (data);
      free (output_file);
    }
#endif
      }
    }
    else if (pd->state==NULL)
      SIDL_THROW(*_ex, sidl_SIDLException,
        "hydrotrend must be initialized before it can be run.");
#endif

#if 0
    struct edu_csdms_models_HydroTrend__data* pd =
      edu_csdms_models_HydroTrend__get_data(self);

    /* Initialize hydrotrend. */
    if (pd->state==NULL)
      SIDL_THROW(*_ex, sidl_SIDLException,
        "hydrotrend must be initialized before it can be run.");

    ht_run_until (pd->state, time);
    return;

  EXIT:;
#endif
#endif

EXIT:;
    return;
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.HydroTrend.run) */
  }
}

/*
 * Method:  CMI_finalize[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_HydroTrend_CMI_finalize"

#ifdef __cplusplus
extern "C"
#endif
sidl_bool
impl_edu_csdms_models_HydroTrend_CMI_finalize(
  /* in */ edu_csdms_models_HydroTrend self,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.HydroTrend.CMI_finalize) */
    struct edu_csdms_models_HydroTrend__data *this =
      edu_csdms_models_HydroTrend__get_data (self);

    if (this->status < CMI_STATUS_FINALIZING) {
      this->status = CMI_STATUS_FINALIZING;
      edu_csdms_cmi_ComponentHandler_finalize_component (this->handler, _ex);
      this->status = CMI_STATUS_FINALIZED;
    }

    return TRUE;

    /* DO-NOT-DELETE splicer.end(edu.csdms.models.HydroTrend.CMI_finalize) */
  }
}

/*
 * Method:  finish[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_HydroTrend_finish"

#ifdef __cplusplus
extern "C"
#endif
sidl_bool
impl_edu_csdms_models_HydroTrend_finish(
  /* in */ edu_csdms_models_HydroTrend self,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.HydroTrend.finish) */
    struct edu_csdms_models_HydroTrend__data *this =
      edu_csdms_models_HydroTrend__get_data (self);

    BMI_Finalize (this->state);

    return TRUE;
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.HydroTrend.finish) */
  }
}

/*
 * Method:  CMI_run_model[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_HydroTrend_CMI_run_model"

#ifdef __cplusplus
extern "C"
#endif
sidl_bool
impl_edu_csdms_models_HydroTrend_CMI_run_model(
  /* in */ edu_csdms_models_HydroTrend self,
  /* in */ const char* config_file,
  /* in */ const char* stop_rule,
  /* in */ double stop_var,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.HydroTrend.CMI_run_model) */
    /* Insert-Code-Here {edu.csdms.models.HydroTrend.CMI_run_model} (
      CMI_run_model method) */
    /*
     * This method has not been implemented
     */

    /* DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.HydroTrend.CMI_run_model) */
    SIDL_THROW(*_ex, sidl_NotImplementedException,     "This method has not been implemented");
  EXIT:;
    /* DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.HydroTrend.CMI_run_model) */
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.HydroTrend.CMI_run_model) */
  }
}

/*
 * Method:  CMI_get_start_time[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_HydroTrend_CMI_get_start_time"

#ifdef __cplusplus
extern "C"
#endif
double
impl_edu_csdms_models_HydroTrend_CMI_get_start_time(
  /* in */ edu_csdms_models_HydroTrend self,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.HydroTrend.CMI_get_start_time) */
    struct edu_csdms_models_HydroTrend__data *this =
      edu_csdms_models_HydroTrend__get_data (self);

    return BMI_Get_start_time (this->state);
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.HydroTrend.CMI_get_start_time) */
  }
}

/*
 * Method:  CMI_get_current_time[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_HydroTrend_CMI_get_current_time"

#ifdef __cplusplus
extern "C"
#endif
double
impl_edu_csdms_models_HydroTrend_CMI_get_current_time(
  /* in */ edu_csdms_models_HydroTrend self,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.HydroTrend.CMI_get_current_time) */
    struct edu_csdms_models_HydroTrend__data *this =
      edu_csdms_models_HydroTrend__get_data (self);

    return BMI_Get_current_time (this->state);
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.HydroTrend.CMI_get_current_time) */
  }
}

/*
 * Method:  CMI_get_end_time[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_HydroTrend_CMI_get_end_time"

#ifdef __cplusplus
extern "C"
#endif
double
impl_edu_csdms_models_HydroTrend_CMI_get_end_time(
  /* in */ edu_csdms_models_HydroTrend self,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.HydroTrend.CMI_get_end_time) */
    struct edu_csdms_models_HydroTrend__data *this =
      edu_csdms_models_HydroTrend__get_data (self);

    return BMI_Get_end_time (this->state);
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.HydroTrend.CMI_get_end_time) */
  }
}

/*
 * Method:  CMI_get_values[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_HydroTrend_CMI_get_values"

#ifdef __cplusplus
extern "C"
#endif
struct sidl__array*
impl_edu_csdms_models_HydroTrend_CMI_get_values(
  /* in */ edu_csdms_models_HydroTrend self,
  /* in */ const char* long_var_name,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.HydroTrend.CMI_get_values) */
    struct sidl__array* generic = NULL;

    {
      struct sidl_double__array* vals = 
        edu_csdms_models_HydroTrend_get_grid_values (self, long_var_name, _ex);
      generic = (struct sidl__array*)vals;
    }

    return generic;

    /* DO-NOT-DELETE splicer.end(edu.csdms.models.HydroTrend.CMI_get_values) */
  }
}

/*
 * Method:  CMI_set_values[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_HydroTrend_CMI_set_values"

#ifdef __cplusplus
extern "C"
#endif
void
impl_edu_csdms_models_HydroTrend_CMI_set_values(
  /* in */ edu_csdms_models_HydroTrend self,
  /* in */ const char* long_var_name,
  /* in array<> */ struct sidl__array* in_values,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.HydroTrend.CMI_set_values) */
    /* Insert-Code-Here {edu.csdms.models.HydroTrend.CMI_set_values} (
      CMI_set_values method) */
    /*
     * This method has not been implemented
     */

    /* DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.HydroTrend.CMI_set_values) */
    SIDL_THROW(*_ex, sidl_NotImplementedException,     "This method has not been implemented");
  EXIT:;
    /* DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.HydroTrend.CMI_set_values) */
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.HydroTrend.CMI_set_values) */
  }
}

/*
 * Method:  CMI_get_status[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_HydroTrend_CMI_get_status"

#ifdef __cplusplus
extern "C"
#endif
char*
impl_edu_csdms_models_HydroTrend_CMI_get_status(
  /* in */ edu_csdms_models_HydroTrend self,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.HydroTrend.CMI_get_status) */
    struct edu_csdms_models_HydroTrend__data *this =
      edu_csdms_models_HydroTrend__get_data (self);

    switch (this->status) {
      case CMI_STATUS_CREATED:
        return "Created";
      case CMI_STATUS_INITIALIZING:
        return "Initializing";
      case CMI_STATUS_INITIALIZED:
        return "Initialized";
      case CMI_STATUS_UPDATING:
        return "Updating";
      case CMI_STATUS_UPDATED:
        return "Updated";
      case CMI_STATUS_FINALIZING:
        return "Finalizing";
      case CMI_STATUS_FINALIZED:
        return "Finalized";
      default:
        return "Unknown";
    }

    /* DO-NOT-DELETE splicer.end(edu.csdms.models.HydroTrend.CMI_get_status) */
  }
}

/*
 * Method:  CMI_get_component_name[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_HydroTrend_CMI_get_component_name"

#ifdef __cplusplus
extern "C"
#endif
char*
impl_edu_csdms_models_HydroTrend_CMI_get_component_name(
  /* in */ edu_csdms_models_HydroTrend self,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.HydroTrend.CMI_get_component_name) */
    return strdup (CMI_COMPONENT_NAME);
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.HydroTrend.CMI_get_component_name) */
  }
}

/*
 * Method:  CMI_get_input_item_list[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_HydroTrend_CMI_get_input_item_list"

#ifdef __cplusplus
extern "C"
#endif
struct sidl_string__array*
impl_edu_csdms_models_HydroTrend_CMI_get_input_item_list(
  /* in */ edu_csdms_models_HydroTrend self,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.HydroTrend.CMI_get_input_item_list) */
    /* Insert-Code-Here {edu.csdms.models.HydroTrend.CMI_get_input_item_list} (
      CMI_get_input_item_list method) */
    /*
     * This method has not been implemented
     */

    /* DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.HydroTrend.CMI_get_input_item_list) */
    SIDL_THROW(*_ex, sidl_NotImplementedException,     "This method has not been implemented");
  EXIT:;
    /* DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.HydroTrend.CMI_get_input_item_list) */
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.HydroTrend.CMI_get_input_item_list) */
  }
}

/*
 * Method:  CMI_get_output_item_list[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_HydroTrend_CMI_get_output_item_list"

#ifdef __cplusplus
extern "C"
#endif
struct sidl_string__array*
impl_edu_csdms_models_HydroTrend_CMI_get_output_item_list(
  /* in */ edu_csdms_models_HydroTrend self,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.HydroTrend.CMI_get_output_item_list) */
    /* Insert-Code-Here {edu.csdms.models.HydroTrend.CMI_get_output_item_list} (
      CMI_get_output_item_list method) */
    /*
     * This method has not been implemented
     */

    /* DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.HydroTrend.CMI_get_output_item_list) */
    SIDL_THROW(*_ex, sidl_NotImplementedException,     "This method has not been implemented");
  EXIT:;
    /* DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.HydroTrend.CMI_get_output_item_list) */
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.HydroTrend.CMI_get_output_item_list) */
  }
}

/*
 * Method:  CMI_has_output_item[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_HydroTrend_CMI_has_output_item"

#ifdef __cplusplus
extern "C"
#endif
sidl_bool
impl_edu_csdms_models_HydroTrend_CMI_has_output_item(
  /* in */ edu_csdms_models_HydroTrend self,
  /* in */ const char* long_var_name,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.HydroTrend.CMI_has_output_item) */
    struct edu_csdms_models_HydroTrend__data *this =
      edu_csdms_models_HydroTrend__get_data (self);
    const char ** names = BMI_Get_output_var_names (this->state);
    char ** name;

    for (name=(char**)names; *name; name++) {
      if (g_ascii_strcasecmp (*name, long_var_name)==0) {
        return TRUE;
      }
    }

    return FALSE;
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.HydroTrend.CMI_has_output_item) */
  }
}

/*
 * Method:  CMI_has_input_item[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_HydroTrend_CMI_has_input_item"

#ifdef __cplusplus
extern "C"
#endif
sidl_bool
impl_edu_csdms_models_HydroTrend_CMI_has_input_item(
  /* in */ edu_csdms_models_HydroTrend self,
  /* in */ const char* long_var_name,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.HydroTrend.CMI_has_input_item) */
    struct edu_csdms_models_HydroTrend__data *this =
      edu_csdms_models_HydroTrend__get_data (self);
    const char ** names = BMI_Get_input_var_names (this->state);
    char **name;

    for (name=(char**)names; *name; name++)
      if (g_ascii_strcasecmp (*name, long_var_name)==0)
        return TRUE;
    return FALSE;
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.HydroTrend.CMI_has_input_item) */
  }
}

/*
 * Method:  CMI_get_required_ports[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_HydroTrend_CMI_get_required_ports"

#ifdef __cplusplus
extern "C"
#endif
void
impl_edu_csdms_models_HydroTrend_CMI_get_required_ports(
  /* in */ edu_csdms_models_HydroTrend self,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.HydroTrend.CMI_get_required_ports) */
    /* Insert-Code-Here {edu.csdms.models.HydroTrend.CMI_get_required_ports} (
      CMI_get_required_ports method) */
    /*
     * This method has not been implemented
     */

    /* DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.HydroTrend.CMI_get_required_ports) */
    SIDL_THROW(*_ex, sidl_NotImplementedException,     "This method has not been implemented");
  EXIT:;
    /* DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.HydroTrend.CMI_get_required_ports) */
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.HydroTrend.CMI_get_required_ports) */
  }
}

/*
 * Method:  CMI_release_required_ports[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_HydroTrend_CMI_release_required_ports"

#ifdef __cplusplus
extern "C"
#endif
void
impl_edu_csdms_models_HydroTrend_CMI_release_required_ports(
  /* in */ edu_csdms_models_HydroTrend self,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.HydroTrend.CMI_release_required_ports) */
    /* Insert-Code-Here 
      {edu.csdms.models.HydroTrend.CMI_release_required_ports} (
      CMI_release_required_ports method) */
    /*
     * This method has not been implemented
     */

    /* DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.HydroTrend.CMI_release_required_ports) */
    SIDL_THROW(*_ex, sidl_NotImplementedException,     "This method has not been implemented");
  EXIT:;
    /* DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.HydroTrend.CMI_release_required_ports) */
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.HydroTrend.CMI_release_required_ports) */
  }
}

/*
 * Method:  CMI_get_values_at_indices[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_HydroTrend_CMI_get_values_at_indices"

#ifdef __cplusplus
extern "C"
#endif
struct sidl__array*
impl_edu_csdms_models_HydroTrend_CMI_get_values_at_indices(
  /* in */ edu_csdms_models_HydroTrend self,
  /* in */ const char* long_var_name,
  /* in array<int> */ struct sidl_int__array* indices,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.HydroTrend.CMI_get_values_at_indices) */
    /* Insert-Code-Here {edu.csdms.models.HydroTrend.CMI_get_values_at_indices} 
      (CMI_get_values_at_indices method) */
    /*
     * This method has not been implemented
     */

    /* DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.HydroTrend.CMI_get_values_at_indices) */
    SIDL_THROW(*_ex, sidl_NotImplementedException,     "This method has not been implemented");
  EXIT:;
    /* DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.HydroTrend.CMI_get_values_at_indices) */
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.HydroTrend.CMI_get_values_at_indices) */
  }
}

/*
 * Method:  CMI_set_values_at_indices[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_HydroTrend_CMI_set_values_at_indices"

#ifdef __cplusplus
extern "C"
#endif
void
impl_edu_csdms_models_HydroTrend_CMI_set_values_at_indices(
  /* in */ edu_csdms_models_HydroTrend self,
  /* in */ const char* long_var_name,
  /* in array<int> */ struct sidl_int__array* indices,
  /* in array<> */ struct sidl__array* in_values,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.HydroTrend.CMI_set_values_at_indices) */
    /* Insert-Code-Here {edu.csdms.models.HydroTrend.CMI_set_values_at_indices} 
      (CMI_set_values_at_indices method) */
    /*
     * This method has not been implemented
     */

    /* DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.HydroTrend.CMI_set_values_at_indices) */
    SIDL_THROW(*_ex, sidl_NotImplementedException,     "This method has not been implemented");
  EXIT:;
    /* DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.HydroTrend.CMI_set_values_at_indices) */
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.HydroTrend.CMI_set_values_at_indices) */
  }
}

/*
 * Method:  CMI_print_traceback[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_HydroTrend_CMI_print_traceback"

#ifdef __cplusplus
extern "C"
#endif
void
impl_edu_csdms_models_HydroTrend_CMI_print_traceback(
  /* in */ edu_csdms_models_HydroTrend self,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.HydroTrend.CMI_print_traceback) */
    /* Insert-Code-Here {edu.csdms.models.HydroTrend.CMI_print_traceback} (
      CMI_print_traceback method) */
    /*
     * This method has not been implemented
     */

    /* DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.HydroTrend.CMI_print_traceback) */
    SIDL_THROW(*_ex, sidl_NotImplementedException,     "This method has not been implemented");
  EXIT:;
    /* DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.HydroTrend.CMI_print_traceback) */
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.HydroTrend.CMI_print_traceback) */
  }
}

/*
 * Method:  CMI_get_grid_spacing[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_HydroTrend_CMI_get_grid_spacing"

#ifdef __cplusplus
extern "C"
#endif
struct sidl_double__array*
impl_edu_csdms_models_HydroTrend_CMI_get_grid_spacing(
  /* in */ edu_csdms_models_HydroTrend self,
  /* in */ const char* long_var_name,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.HydroTrend.CMI_get_grid_spacing) */
    struct edu_csdms_models_HydroTrend__data *this =
      edu_csdms_models_HydroTrend__get_data (self);
    struct sidl_double__array * sidl_spacing;
    double * spacing;
    int n_dims;

    spacing = BMI_Get_grid_spacing (this->state, long_var_name, &n_dims);
    sidl_spacing = sidl_double__array_create1d (n_dims);

    {
      int i;
      for (i=0; i<n_dims; i++)
        sidl_double__array_set1 (sidl_spacing, i, spacing[i]);
    }

    free (spacing);
    return sidl_spacing;
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.HydroTrend.CMI_get_grid_spacing) */
  }
}

/*
 * Method:  get_grid_spacing[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_HydroTrend_get_grid_spacing"

#ifdef __cplusplus
extern "C"
#endif
struct sidl_double__array*
impl_edu_csdms_models_HydroTrend_get_grid_spacing(
  /* in */ edu_csdms_models_HydroTrend self,
  /* in */ const char* long_var_name,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.HydroTrend.get_grid_spacing) */
    struct edu_csdms_models_HydroTrend__data *this =
      edu_csdms_models_HydroTrend__get_data (self);
    struct sidl_double__array * sidl_spacing;
    double * spacing;
    int n_dims;

    spacing = BMI_Get_grid_spacing (this->state, long_var_name, &n_dims);
    sidl_spacing = sidl_double__array_create1d (n_dims);

    {
      int i;
      for (i=0; i<n_dims; i++)
        sidl_double__array_set1 (sidl_spacing, i, spacing[i]);
    }

    free (spacing);
    return sidl_spacing;
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.HydroTrend.get_grid_spacing) */
  }
}

/*
 * Method:  CMI_get_grid_lower_left[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_HydroTrend_CMI_get_grid_lower_left"

#ifdef __cplusplus
extern "C"
#endif
struct sidl_double__array*
impl_edu_csdms_models_HydroTrend_CMI_get_grid_lower_left(
  /* in */ edu_csdms_models_HydroTrend self,
  /* in */ const char* long_var_name,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.HydroTrend.CMI_get_grid_lower_left) */
    struct edu_csdms_models_HydroTrend__data *this =
      edu_csdms_models_HydroTrend__get_data (self);
    struct sidl_double__array * sidl_corner;
    double * corner;
    int n_dims;

    corner = BMI_Get_grid_lower_left_corner (this->state, long_var_name, &n_dims);
    sidl_corner = sidl_double__array_create1d (n_dims);

    {
      int i;
      for (i=0; i<n_dims; i++)
        sidl_double__array_set1 (sidl_corner, i, corner[i]);
    }

    free (corner);
    return sidl_corner;
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.HydroTrend.CMI_get_grid_lower_left) */
  }
}

/*
 * Method:  get_grid_lower_left[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_HydroTrend_get_grid_lower_left"

#ifdef __cplusplus
extern "C"
#endif
struct sidl_double__array*
impl_edu_csdms_models_HydroTrend_get_grid_lower_left(
  /* in */ edu_csdms_models_HydroTrend self,
  /* in */ const char* long_var_name,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.HydroTrend.get_grid_lower_left) */
    struct edu_csdms_models_HydroTrend__data *this =
      edu_csdms_models_HydroTrend__get_data (self);
    struct sidl_double__array * sidl_corner;
    double * corner;
    int n_dims;

    corner = BMI_Get_grid_lower_left_corner (this->state, long_var_name, &n_dims);
    sidl_corner = sidl_double__array_create1d (n_dims);

    {
      int i;
      for (i=0; i<n_dims; i++)
        sidl_double__array_set1 (sidl_corner, i, corner[i]);
    }

    free (corner);
    return sidl_corner;
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.HydroTrend.get_grid_lower_left) */
  }
}

/*
 * Method:  CMI_get_grid_shape[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_HydroTrend_CMI_get_grid_shape"

#ifdef __cplusplus
extern "C"
#endif
struct sidl_int__array*
impl_edu_csdms_models_HydroTrend_CMI_get_grid_shape(
  /* in */ edu_csdms_models_HydroTrend self,
  /* in */ const char* long_var_name,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.HydroTrend.CMI_get_grid_shape) */
    struct edu_csdms_models_HydroTrend__data *this =
      edu_csdms_models_HydroTrend__get_data (self);
    struct sidl_int__array * sidl_shape;
    int * shape;
    int n_dims;

    shape = BMI_Get_grid_shape (this->state, long_var_name, &n_dims);
    sidl_shape = sidl_int__array_create1d (n_dims);

    {
      int i;
      for (i=0; i<n_dims; i++)
        sidl_int__array_set1 (sidl_shape, i, shape[i]);
    }

    free (shape);
    return sidl_shape;
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.HydroTrend.CMI_get_grid_shape) */
  }
}

/*
 * Method:  get_grid_shape[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_HydroTrend_get_grid_shape"

#ifdef __cplusplus
extern "C"
#endif
struct sidl_int__array*
impl_edu_csdms_models_HydroTrend_get_grid_shape(
  /* in */ edu_csdms_models_HydroTrend self,
  /* in */ const char* long_var_name,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.HydroTrend.get_grid_shape) */
    struct edu_csdms_models_HydroTrend__data *this =
      edu_csdms_models_HydroTrend__get_data (self);
    struct sidl_int__array * sidl_shape;
    int * shape;
    int n_dims;

    shape = BMI_Get_grid_shape (this->state, long_var_name, &n_dims);
    sidl_shape = sidl_int__array_create1d (n_dims);

    {
      int i;
      for (i=0; i<n_dims; i++)
        sidl_int__array_set1 (sidl_shape, i, shape[i]);
    }

    free (shape);
    return sidl_shape;
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.HydroTrend.get_grid_shape) */
  }
}

/*
 * Method:  CMI_get_grid_x[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_HydroTrend_CMI_get_grid_x"

#ifdef __cplusplus
extern "C"
#endif
struct sidl_double__array*
impl_edu_csdms_models_HydroTrend_CMI_get_grid_x(
  /* in */ edu_csdms_models_HydroTrend self,
  /* in */ const char* long_var_name,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.HydroTrend.CMI_get_grid_x) */
    /* Insert-Code-Here {edu.csdms.models.HydroTrend.CMI_get_grid_x} (
      CMI_get_grid_x method) */
    /*
     * This method has not been implemented
     */

    /* DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.HydroTrend.CMI_get_grid_x) */
    SIDL_THROW(*_ex, sidl_NotImplementedException,     "This method has not been implemented");
  EXIT:;
    /* DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.HydroTrend.CMI_get_grid_x) */
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.HydroTrend.CMI_get_grid_x) */
  }
}

/*
 * Method:  get_grid_x[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_HydroTrend_get_grid_x"

#ifdef __cplusplus
extern "C"
#endif
struct sidl_double__array*
impl_edu_csdms_models_HydroTrend_get_grid_x(
  /* in */ edu_csdms_models_HydroTrend self,
  /* in */ const char* long_var_name,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.HydroTrend.get_grid_x) */
    /* Insert-Code-Here {edu.csdms.models.HydroTrend.get_grid_x} (get_grid_x 
      method) */
    /*
     * This method has not been implemented
     */

    /* DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.HydroTrend.get_grid_x) */
    SIDL_THROW(*_ex, sidl_NotImplementedException,     "This method has not been implemented");
  EXIT:;
    /* DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.HydroTrend.get_grid_x) */
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.HydroTrend.get_grid_x) */
  }
}

/*
 * Method:  CMI_get_grid_y[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_HydroTrend_CMI_get_grid_y"

#ifdef __cplusplus
extern "C"
#endif
struct sidl_double__array*
impl_edu_csdms_models_HydroTrend_CMI_get_grid_y(
  /* in */ edu_csdms_models_HydroTrend self,
  /* in */ const char* long_var_name,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.HydroTrend.CMI_get_grid_y) */
    /* Insert-Code-Here {edu.csdms.models.HydroTrend.CMI_get_grid_y} (
      CMI_get_grid_y method) */
    /*
     * This method has not been implemented
     */

    /* DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.HydroTrend.CMI_get_grid_y) */
    SIDL_THROW(*_ex, sidl_NotImplementedException,     "This method has not been implemented");
  EXIT:;
    /* DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.HydroTrend.CMI_get_grid_y) */
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.HydroTrend.CMI_get_grid_y) */
  }
}

/*
 * Method:  get_grid_y[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_HydroTrend_get_grid_y"

#ifdef __cplusplus
extern "C"
#endif
struct sidl_double__array*
impl_edu_csdms_models_HydroTrend_get_grid_y(
  /* in */ edu_csdms_models_HydroTrend self,
  /* in */ const char* long_var_name,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.HydroTrend.get_grid_y) */
    /* Insert-Code-Here {edu.csdms.models.HydroTrend.get_grid_y} (get_grid_y 
      method) */
    /*
     * This method has not been implemented
     */

    /* DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.HydroTrend.get_grid_y) */
    SIDL_THROW(*_ex, sidl_NotImplementedException,     "This method has not been implemented");
  EXIT:;
    /* DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.HydroTrend.get_grid_y) */
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.HydroTrend.get_grid_y) */
  }
}

/*
 * Method:  CMI_get_grid_z[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_HydroTrend_CMI_get_grid_z"

#ifdef __cplusplus
extern "C"
#endif
struct sidl_double__array*
impl_edu_csdms_models_HydroTrend_CMI_get_grid_z(
  /* in */ edu_csdms_models_HydroTrend self,
  /* in */ const char* long_var_name,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.HydroTrend.CMI_get_grid_z) */
    /* Insert-Code-Here {edu.csdms.models.HydroTrend.CMI_get_grid_z} (
      CMI_get_grid_z method) */
    /*
     * This method has not been implemented
     */

    /* DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.HydroTrend.CMI_get_grid_z) */
    SIDL_THROW(*_ex, sidl_NotImplementedException,     "This method has not been implemented");
  EXIT:;
    /* DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.HydroTrend.CMI_get_grid_z) */
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.HydroTrend.CMI_get_grid_z) */
  }
}

/*
 * Method:  get_grid_z[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_HydroTrend_get_grid_z"

#ifdef __cplusplus
extern "C"
#endif
struct sidl_double__array*
impl_edu_csdms_models_HydroTrend_get_grid_z(
  /* in */ edu_csdms_models_HydroTrend self,
  /* in */ const char* long_var_name,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.HydroTrend.get_grid_z) */
    /* Insert-Code-Here {edu.csdms.models.HydroTrend.get_grid_z} (get_grid_z 
      method) */
    /*
     * This method has not been implemented
     */

    /* DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.HydroTrend.get_grid_z) */
    SIDL_THROW(*_ex, sidl_NotImplementedException,     "This method has not been implemented");
  EXIT:;
    /* DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.HydroTrend.get_grid_z) */
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.HydroTrend.get_grid_z) */
  }
}

/*
 * Method:  get_grid_connectivity[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_HydroTrend_get_grid_connectivity"

#ifdef __cplusplus
extern "C"
#endif
struct sidl_int__array*
impl_edu_csdms_models_HydroTrend_get_grid_connectivity(
  /* in */ edu_csdms_models_HydroTrend self,
  /* in */ const char* long_var_name,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.HydroTrend.get_grid_connectivity) */
    /* Insert-Code-Here {edu.csdms.models.HydroTrend.get_grid_connectivity} (
      get_grid_connectivity method) */
    /*
     * This method has not been implemented
     */

    /* DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.HydroTrend.get_grid_connectivity) */
    SIDL_THROW(*_ex, sidl_NotImplementedException,     "This method has not been implemented");
  EXIT:;
    /* DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.HydroTrend.get_grid_connectivity) */
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.HydroTrend.get_grid_connectivity) */
  }
}

/*
 * Method:  get_grid_offset[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_HydroTrend_get_grid_offset"

#ifdef __cplusplus
extern "C"
#endif
struct sidl_int__array*
impl_edu_csdms_models_HydroTrend_get_grid_offset(
  /* in */ edu_csdms_models_HydroTrend self,
  /* in */ const char* long_var_name,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.HydroTrend.get_grid_offset) */
    /* Insert-Code-Here {edu.csdms.models.HydroTrend.get_grid_offset} (
      get_grid_offset method) */
    /*
     * This method has not been implemented
     */

    /* DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.HydroTrend.get_grid_offset) */
    SIDL_THROW(*_ex, sidl_NotImplementedException,     "This method has not been implemented");
  EXIT:;
    /* DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.HydroTrend.get_grid_offset) */
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.HydroTrend.get_grid_offset) */
  }
}

/*
 * Method:  get_grid[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_HydroTrend_get_grid"

#ifdef __cplusplus
extern "C"
#endif
edu_csdms_cmi_IGrid
impl_edu_csdms_models_HydroTrend_get_grid(
  /* in */ edu_csdms_models_HydroTrend self,
  /* in */ const char* long_var_name,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.HydroTrend.get_grid) */
    edu_csdms_tools_CMIGridUniformRectilinear grid =
      edu_csdms_tools_CMIGridUniformRectilinear__create (_ex);

    {
      struct sidl_double__array* lower_left = 
        edu_csdms_models_HydroTrend_get_grid_lower_left (self,
            long_var_name, _ex);
      struct sidl_double__array* spacing = 
        edu_csdms_models_HydroTrend_get_grid_spacing (self,
            long_var_name, _ex);
      struct sidl_int__array* shape = 
        edu_csdms_models_HydroTrend_get_grid_shape (self,
            long_var_name, _ex);

      sidl_int__array_set1 (shape, 0, sidl_int__array_get1 (shape, 0));
      sidl_int__array_set1 (shape, 1, sidl_int__array_get1 (shape, 1));

      edu_csdms_tools_CMIGridUniformRectilinear_initialize (grid,
          shape, spacing, lower_left, _ex);
    }
    return edu_csdms_cmi_IGrid__cast (grid, _ex);
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.HydroTrend.get_grid) */
  }
}

/*
 * Method:  get_grid_values[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_HydroTrend_get_grid_values"

#ifdef __cplusplus
extern "C"
#endif
struct sidl_double__array*
impl_edu_csdms_models_HydroTrend_get_grid_values(
  /* in */ edu_csdms_models_HydroTrend self,
  /* in */ const char* long_var_name,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.HydroTrend.get_grid_values) */
    struct sidl_double__array* vals = NULL;
    struct edu_csdms_models_HydroTrend__data *this =
      edu_csdms_models_HydroTrend__get_data (self);

    edu_csdms_tools_Verbose_info (this->log, "Getting values.", _ex);

    if (this && this->state) {
      int n_dims;
      int * dimen;
      double * data = BMI_Get_double (this->state, long_var_name, &n_dims,
          &dimen);

      if (data) {
        int i;
        int * lower = (int*)malloc (sizeof (int)*n_dims);
        int * upper = (int*)malloc (sizeof (int)*n_dims);
        int * stride = (int*)malloc (sizeof (int)*n_dims);
        int n_vals = 1;

        for (i=0; i<n_dims; i++) {
          lower[i] = 0;
          upper[i] = dimen[i]-1;
          n_vals *= dimen[i];
        }

        for (i=n_dims-2, stride[n_dims-1]=1; i>=0; i--)
          stride[i] = stride[i+1]*dimen[i+1];

        {
          const int _n_dims = 1;
          const int _lower[1] = {0};
          const int _upper[1] = {n_vals-1};
          const int _stride[1] = {1};

          vals = sidl_double__array_borrow (data, _n_dims, _lower,
              _upper, _stride);
        }

        free (stride);
        free (upper);
        free (lower);
      }
    }

    edu_csdms_tools_Verbose_info (this->log, "Got values.", _ex);

    return vals;
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.HydroTrend.get_grid_values) */
  }
}

/*
 * Method:  set_grid_values[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_HydroTrend_set_grid_values"

#ifdef __cplusplus
extern "C"
#endif
void
impl_edu_csdms_models_HydroTrend_set_grid_values(
  /* in */ edu_csdms_models_HydroTrend self,
  /* in */ const char* long_var_name,
  /* in array<double> */ struct sidl_double__array* vals,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.HydroTrend.set_grid_values) */
    /* Insert-Code-Here {edu.csdms.models.HydroTrend.set_grid_values} (
      set_grid_values method) */
    /*
     * This method has not been implemented
     */

    /* DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.HydroTrend.set_grid_values) */
    SIDL_THROW(*_ex, sidl_NotImplementedException,     "This method has not been implemented");
  EXIT:;
    /* DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.HydroTrend.set_grid_values) */
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.HydroTrend.set_grid_values) */
  }
}
/* Babel internal methods, Users should not edit below this line. */

/* DO-NOT-DELETE splicer.begin(_misc) */
/* Insert-Code-Here {_misc} (miscellaneous code) */
/* DO-NOT-DELETE splicer.end(_misc) */

