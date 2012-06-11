/*
 * File:          edu_csdms_models_Sedflux2D_Impl.c
 * Symbol:        edu.csdms.models.Sedflux2D-v0.0
 * Symbol Type:   class
 * Babel Version: 1.4.0 (Revision: 6607 release-1-4-0-branch)
 * Description:   Server-side implementation for edu.csdms.models.Sedflux2D
 * 
 * WARNING: Automatically generated; only changes within splicers preserved
 * 
 */

/*
 * DEVELOPERS ARE EXPECTED TO PROVIDE IMPLEMENTATIONS
 * FOR THE FOLLOWING METHODS BETWEEN SPLICER PAIRS.
 */

/*
 * Symbol "edu.csdms.models.Sedflux2D" (version 0.0)
 */

#include "edu_csdms_models_Sedflux2D_Impl.h"
#include "sidl_NotImplementedException.h"
#include "sidl_Exception.h"
#ifndef included_sidl_MemAllocException_h
#include "sidl_MemAllocException.h"
#endif

/* DO-NOT-DELETE splicer.begin(edu.csdms.models.Sedflux2D._includes) */

/* Insert-UserCode-Here {edu.csdms.models.Sedflux2D._includes} (includes and arbitrary code) */
#include <glib.h>

/* Bocca generated code. bocca.protected.begin(edu.csdms.models.Sedflux2D._includes) */
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
/* Bocca generated code. bocca.protected.end(edu.csdms.models.Sedflux2D._includes) */

/* Insert-UserCode-Here {edu.csdms.models.Sedflux2D._includes} (includes and arbitrary code) */

/* DO-NOT-DELETE splicer.end(edu.csdms.models.Sedflux2D._includes) */

#define SIDL_IOR_MAJOR_VERSION 2
#define SIDL_IOR_MINOR_VERSION 0
/*
 * Static class initializer called exactly once before any user-defined method is dispatched
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_Sedflux2D__load"

#ifdef __cplusplus
extern "C"
#endif
void
impl_edu_csdms_models_Sedflux2D__load(
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.Sedflux2D._load) */
    /* Insert-Code-Here {edu.csdms.models.Sedflux2D._load} (static class 
      initializer method) */
    /*
     * This method has not been implemented
     */

    /* DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.Sedflux2D._load) */
    SIDL_THROW(*_ex, sidl_NotImplementedException,     "This method has not been implemented");
  EXIT:;
    /* DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.Sedflux2D._load) */
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.Sedflux2D._load) */
  }
}
/*
 * Class constructor called when the class is created.
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_Sedflux2D__ctor"

#ifdef __cplusplus
extern "C"
#endif
void
impl_edu_csdms_models_Sedflux2D__ctor(
  /* in */ edu_csdms_models_Sedflux2D self,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.Sedflux2D._ctor) */

  /* Insert-UserDecl-Here {edu.csdms.models.Sedflux2D._ctor} (constructor method) */
    
  /* bocca-default-code. User may edit or delete.begin(edu.csdms.models.Sedflux2D._ctor) */
   struct edu_csdms_models_Sedflux2D__data *dptr = 
       (struct edu_csdms_models_Sedflux2D__data*)malloc(sizeof(struct edu_csdms_models_Sedflux2D__data));
   if (dptr) {
      memset(dptr, 0, sizeof(struct edu_csdms_models_Sedflux2D__data));
   }
   edu_csdms_models_Sedflux2D__set_data(self, dptr);
   #if _BOCCA_CTOR_MESSAGES
     BOCCA_FPRINTF(stderr, 
        "CTOR edu.csdms.models.Sedflux2D: %s constructed data %p in self %p\n", 
        __FUNC__, dptr, self);
   #endif /* _BOCCA_CTOR_MESSAGES */
  /* bocca-default-code. User may edit or delete.end(edu.csdms.models.Sedflux2D._ctor) */

  /* initialize user elements of dptr here */
  /* Insert-UserCode-Here {edu.csdms.models.Sedflux2D._ctor} (constructor method) */

    if (!g_thread_get_initialized ())
    {
      g_thread_init (NULL);
      eh_init_glib ();
      g_log_set_handler (NULL, G_LOG_LEVEL_MASK, &eh_logger, NULL);
    }


    dptr->log = NULL;
    dptr->state = NULL;
    dptr->status = CMI_STATUS_CREATED;
    dptr->is_driver = FALSE;
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.Sedflux2D._ctor) */
  }
}

/*
 * Special Class constructor called when the user wants to wrap his own private data.
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_Sedflux2D__ctor2"

#ifdef __cplusplus
extern "C"
#endif
void
impl_edu_csdms_models_Sedflux2D__ctor2(
  /* in */ edu_csdms_models_Sedflux2D self,
  /* in */ void* private_data,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.Sedflux2D._ctor2) */
    /* Insert-Code-Here {edu.csdms.models.Sedflux2D._ctor2} (special 
      constructor method) */
    /*
     * This method has not been implemented
     */

    /* DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.Sedflux2D._ctor2) */
    SIDL_THROW(*_ex, sidl_NotImplementedException,     "This method has not been implemented");
  EXIT:;
    /* DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.Sedflux2D._ctor2) */
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.Sedflux2D._ctor2) */
  }
}
/*
 * Class destructor called when the class is deleted.
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_Sedflux2D__dtor"

#ifdef __cplusplus
extern "C"
#endif
void
impl_edu_csdms_models_Sedflux2D__dtor(
  /* in */ edu_csdms_models_Sedflux2D self,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.Sedflux2D._dtor) */

  /* deinitialize user elements of dptr here */
  /* Insert-UserCode-Here {edu.csdms.models.Sedflux2D._dtor} (destructor method) */
    
  /* bocca-default-code. User may edit or delete.begin(edu.csdms.models.Sedflux2D._dtor) */
   struct edu_csdms_models_Sedflux2D__data *dptr = 
                edu_csdms_models_Sedflux2D__get_data(self);
   if (dptr) {
      free(dptr);
      edu_csdms_models_Sedflux2D__set_data(self, NULL);
   }
   #if _BOCCA_CTOR_MESSAGES
     BOCCA_FPRINTF(stderr, "DTOR edu.csdms.models.Sedflux2D: %s freed data %p in self %p\n", 
                   __FUNC__, dptr, self);
   #endif /* _BOCCA_CTOR_MESSAGES */
  /* bocca-default-code. User may edit or delete.end(edu.csdms.models.Sedflux2D._dtor) */

    /* DO-NOT-DELETE splicer.end(edu.csdms.models.Sedflux2D._dtor) */
  }
}

/*
 * Method:  boccaSetServices[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_Sedflux2D_boccaSetServices"

#ifdef __cplusplus
extern "C"
#endif
void
impl_edu_csdms_models_Sedflux2D_boccaSetServices(
  /* in */ edu_csdms_models_Sedflux2D self,
  /* in */ gov_cca_Services services,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.Sedflux2D.boccaSetServices) */
/* DO-NOT-EDIT-BOCCA */
/* Bocca generated code. bocca.protected.begin(edu.csdms.models.Sedflux2D.boccaSetServices) */
   struct edu_csdms_models_Sedflux2D__data *pd;
   gov_cca_ComponentRelease   compRelease = NULL;
   sidl_BaseInterface throwaway_excpt = NULL; /* for use in EXIT block only. */
   int dr_services=0; /* assume releaseServices will not be called if setServices fails */
   

   gov_cca_TypeMap typeMap = NULL;
   gov_cca_Port port = NULL;

   pd = edu_csdms_models_Sedflux2D__get_data(self);
   if (pd == NULL) {
     SIDL_THROW(*_ex, sidl_SIDLException, 
          "NULL data pointer in edu.csdms.models.Sedflux2D boccaSetServices");
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

   /* Provide a edu.csdms.ports.CMIPort port with port name SubaqueousDelta */
   gov_cca_Services_addProvidesPort(pd->d_services,   
                                    port,		/* the implementing object */
                                    "SubaqueousDelta", /* the name seen by the user */
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

  /* Register a use port of type edu.csdms.ports.CMIPort with port name SubaerialDelta */  
   gov_cca_Services_registerUsesPort(pd->d_services,   
                                     "SubaerialDelta", /* the name seen by the user */
                                     "edu.csdms.ports.CMIPort", /* sidl name of the port type. */
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

/* Bocca generated code. bocca.protected.end(edu.csdms.models.Sedflux2D.boccaSetServices) */
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.Sedflux2D.boccaSetServices) */
  }
}

/*
 * Method:  boccaReleaseServices[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_Sedflux2D_boccaReleaseServices"

#ifdef __cplusplus
extern "C"
#endif
void
impl_edu_csdms_models_Sedflux2D_boccaReleaseServices(
  /* in */ edu_csdms_models_Sedflux2D self,
  /* in */ gov_cca_Services services,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.Sedflux2D.boccaReleaseServices) */
/* DO-NOT-EDIT-BOCCA */
/*  Bocca generated code. bocca.protected.begin(edu.csdms.models.Sedflux2D.boccaReleaseServices) */

   struct edu_csdms_models_Sedflux2D__data *pd;
   sidl_BaseInterface throwaway_excpt = NULL;
   sidl_BaseInterface dummy_excpt = NULL;
   char *errMsg=NULL;
   /* our policy is to trap and optionally print all port-related messages,
      attempting to eliminate all ports. */


   /* UN-Provide a gov.cca.ports.GoPort port with port name Run */
   gov_cca_Services_removeProvidesPort(services, "Run", 
                                       &throwaway_excpt);
   errMsg = "Error: Could not removeProvidesPort(\"Run\")";
   edu_csdms_models_Sedflux2D_checkException(self, throwaway_excpt, errMsg, FALSE, 
                                   &dummy_excpt);

   /* UN-Provide a edu.csdms.ports.CMIPort port with port name SubaqueousDelta */
   gov_cca_Services_removeProvidesPort(services, "SubaqueousDelta", 
                                       &throwaway_excpt);
   errMsg = "Error: Could not removeProvidesPort(\"SubaqueousDelta\")";
   edu_csdms_models_Sedflux2D_checkException(self, throwaway_excpt, errMsg, FALSE, 
                                   &dummy_excpt);

  /* Un-Register a use port of type gov.cca.ports.ParameterPortFactory with port name ppf */  
   gov_cca_Services_unregisterUsesPort(services, "ppf", 
                                       &throwaway_excpt);
   errMsg= "Error: Could not unregisterUsesPort(\"ppf\")";
   edu_csdms_models_Sedflux2D_checkException(self, throwaway_excpt, errMsg, FALSE, 
                                   &dummy_excpt);

  /* Un-Register a use port of type edu.csdms.ports.CMIPort with port name SubaerialDelta */  
   gov_cca_Services_unregisterUsesPort(services, "SubaerialDelta", 
                                       &throwaway_excpt);
   errMsg= "Error: Could not unregisterUsesPort(\"SubaerialDelta\")";
   edu_csdms_models_Sedflux2D_checkException(self, throwaway_excpt, errMsg, FALSE, 
                                   &dummy_excpt);

   services = NULL;
   pd = edu_csdms_models_Sedflux2D__get_data(self);
   if (pd == NULL) {
     SIDL_THROW(*_ex, sidl_SIDLException, 
        "NULL data pointer in edu.csdms.models.Sedflux2D boccaSetServices");
   }
   gov_cca_Services_deleteRef(pd->d_services, _ex); 
   SIDL_CHECK(*_ex);
   pd->d_services = NULL;
   return;

EXIT:;
   return;
/*  Bocca generated code. bocca.protected.end(edu.csdms.models.Sedflux2D.boccaReleaseServices) */
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.Sedflux2D.boccaReleaseServices) */
  }
}

/*
 * Method:  checkException[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_Sedflux2D_checkException"

#ifdef __cplusplus
extern "C"
#endif
void
impl_edu_csdms_models_Sedflux2D_checkException(
  /* in */ edu_csdms_models_Sedflux2D self,
  /* in */ sidl_BaseInterface excpt,
  /* in */ const char* msg,
  /* in */ sidl_bool fatal,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.Sedflux2D.checkException) */
/* DO-NOT-EDIT-BOCCA */
/*  Bocca generated code. bocca.protected.begin(edu.csdms.models.Sedflux2D.checkException) */
#ifdef _BOCCA_STDERR
   sidl_BaseException be = NULL;
   char *etext=NULL;
#endif
   
   if (SIDL_CATCH(excpt, "sidl.BaseException")) {
#ifdef _BOCCA_STDERR
      be  = sidl_BaseException__cast(excpt, _ex); SIDL_CLEAR(*_ex);
      etext = sidl_BaseException_getNote(be, _ex); SIDL_CLEAR(*_ex);
      fprintf(stderr, "edu.csdms.models.Sedflux2D: %s \n%s\n", msg,etext);
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
   
/*  Bocca generated code. bocca.protected.end(edu.csdms.models.Sedflux2D.checkException) */
    
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.Sedflux2D.checkException) */
  }
}

/*
 *  This function should never be called, but helps babel generate better code. 
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_Sedflux2D_boccaForceUsePortInclude"

#ifdef __cplusplus
extern "C"
#endif
void
impl_edu_csdms_models_Sedflux2D_boccaForceUsePortInclude(
  /* in */ edu_csdms_models_Sedflux2D self,
  /* in */ gov_cca_ports_ParameterPortFactory dummy0,
  /* in */ edu_csdms_ports_CMIPort dummy1,
  /* in */ edu_csdms_tools_CMIGridUniformRectilinear dummy2,
  /* in */ edu_csdms_tools_Verbose dummy3,
  /* in */ edu_csdms_tools_CMIConfigFile dummy4,
  /* in */ edu_csdms_tools_TemplateFiles dummy5,
  /* in */ edu_csdms_tools_ConfigDialog dummy6,
  /* in */ edu_csdms_tools_CMIPortQueue dummy7,
  /* in */ edu_csdms_tools_PrintQueue dummy8,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.Sedflux2D.boccaForceUsePortInclude) */
/* DO-NOT-EDIT-BOCCA */
  /* Bocca generated code. bocca.protected.begin(edu.csdms.models.Sedflux2D.boccaForceUsePortInclude) */
    (void)self;
    (void)dummy0;
    (void)dummy1;
    (void)dummy2;
    (void)dummy3;
    (void)dummy4;
    (void)dummy5;
    (void)dummy6;
    (void)dummy7;
    (void)dummy8;

  /* Bocca generated code. bocca.protected.end(edu.csdms.models.Sedflux2D.boccaForceUsePortInclude) */
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.Sedflux2D.boccaForceUsePortInclude) */
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
#define __FUNC__ "impl_edu_csdms_models_Sedflux2D_setServices"

#ifdef __cplusplus
extern "C"
#endif
void
impl_edu_csdms_models_Sedflux2D_setServices(
  /* in */ edu_csdms_models_Sedflux2D self,
  /* in */ gov_cca_Services services,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.Sedflux2D.setServices) */

  /*  Insert-UserDecl-Here {edu.csdms.models.Sedflux2D.setServices} (setServices method) */
    struct edu_csdms_models_Sedflux2D__data *pd;
    gov_cca_ports_ParameterPortFactory ppf;
    gov_cca_Port gcp;

  /* bocca-default-code. User may edit or delete.begin(edu.csdms.models.Sedflux2D.setServices) */
    impl_edu_csdms_models_Sedflux2D_boccaSetServices(self, services, _ex); SIDL_CHECK(*_ex);
  /* bocca-default-code. User may edit or delete.end(edu.csdms.models.Sedflux2D.setServices) */
  
  /*  Insert-UserCode-Here {edu.csdms.models.Sedflux2D.setServices} (setServices method) */
    pd = edu_csdms_models_Sedflux2D__get_data (self);
    pd->userinput = gov_cca_Services_createTypeMap(services, _ex);
    gcp = gov_cca_Services_getPort(services, "ppf", _ex);
    if (!gcp)
      fprintf (stderr,"ERROR: gcp is NULL.\n");

    ppf = gov_cca_ports_ParameterPortFactory__cast (gcp, _ex);
    if (!ppf)
      fprintf (stderr,"ERROR: ppf is NULL.\n");

    gov_cca_ports_ParameterPortFactory_initParameterData (ppf,
      &(pd->userinput), "Configure", _ex);

    gov_cca_ports_ParameterPortFactory_setBatchTitle (ppf,
      pd->userinput, CMI_COMPONENT_NAME" Parameters", _ex);

    {
      edu_csdms_tools_ConfigDialog dialog;

      dialog = edu_csdms_tools_ConfigDialog__create (_ex);
      edu_csdms_tools_ConfigDialog_read (dialog,
          CMI_CONFIG_DIALOG_XML_FILE, _ex);
      edu_csdms_tools_ConfigDialog_construct (dialog, ppf, pd->userinput, _ex);
    }

    gov_cca_ports_ParameterPortFactory_addParameterPort (ppf,
      pd->userinput, services, _ex);
    gov_cca_Services_releasePort (services, "ppf", _ex);
EXIT:;
    /* Insert additional exception cleanup here if needed. */
    return;

    /* DO-NOT-DELETE splicer.end(edu.csdms.models.Sedflux2D.setServices) */
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
#define __FUNC__ "impl_edu_csdms_models_Sedflux2D_releaseServices"

#ifdef __cplusplus
extern "C"
#endif
void
impl_edu_csdms_models_Sedflux2D_releaseServices(
  /* in */ edu_csdms_models_Sedflux2D self,
  /* in */ gov_cca_Services services,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.Sedflux2D.releaseServices) */

  /*  Insert-UserCode-Here {edu.csdms.models.Sedflux2D.releaseServices} (releaseServices method) */

  /* bocca-default-code. User may edit or delete.begin(edu.csdms.models.Sedflux2D.releaseServices) */
    impl_edu_csdms_models_Sedflux2D_boccaReleaseServices(self, services, _ex); SIDL_CHECK(*_ex);
    return;
  /* bocca-default-code. User may edit or delete.end(edu.csdms.models.Sedflux2D.releaseServices) */

EXIT:;
    /* Insert additional exception cleanup here if needed. */
    return;

    /* DO-NOT-DELETE splicer.end(edu.csdms.models.Sedflux2D.releaseServices) */
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
#define __FUNC__ "impl_edu_csdms_models_Sedflux2D_go"

#ifdef __cplusplus
extern "C"
#endif
int32_t
impl_edu_csdms_models_Sedflux2D_go(
  /* in */ edu_csdms_models_Sedflux2D self,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.Sedflux2D.go) */
    int bocca_status = 0;
    struct edu_csdms_models_Sedflux2D__data *pd =
      edu_csdms_models_Sedflux2D__get_data (self);

    pd->is_driver = TRUE;
    
    //PRINT(1, "Initialize sedflux");
    fprintf (stderr, "Initialize sedflux\n"); fflush (stderr);
    edu_csdms_models_Sedflux2D_CMI_initialize (self, NULL, _ex);

    fprintf (stderr, "Run sedflux\n"); fflush (stderr);
    //PRINT (1, "Run sedflux");
    edu_csdms_models_Sedflux2D_CMI_run (self, -1, _ex);

    fprintf (stderr, "Finalize sedflux\n"); fflush (stderr);
    //PRINT (1, "Finalize sedflux");
    edu_csdms_models_Sedflux2D_CMI_finalize (self, _ex);
/*
    {
      struct sidl_string__array* properties = sidl_string__array_create1d (2);
      struct edu_csdms_models_Sedflux2D__data *pd =
               edu_csdms_models_Sedflux2D__get_data (self);
      double duration;

      if (!pd->log)
      {
        pd->log = edu_csdms_tools_Verbose__create (_ex);
        edu_csdms_tools_Verbose_set_log_level (pd->log, 1, _ex);
      }

      { //  Set site and case prefix from GUI
        gchar *site_prefix = gov_cca_TypeMap_getString (pd->userinput,
                               "/Sedflux/SitePrefix", NULL, _ex);
        gchar *case_prefix = gov_cca_TypeMap_getString (pd->userinput,                               "/Sedflux/CasePrefix", NULL, _ex);

        duration = gov_cca_TypeMap_getDouble (pd->userinput,
                     "/Sedflux/Input/Var/RunDuration", 0., _ex);

        sidl_string__array_set1 (properties, 0, site_prefix);
        sidl_string__array_set1 (properties, 1, case_prefix);
      }

      PRINT(1, "Initialize sedflux");
      edu_csdms_models_Sedflux2D_initialize (self, properties, _ex);

      PRINT (1, "Run sedflux");
      edu_csdms_models_Sedflux2D_run (self, -1, _ex);

      PRINT (1, "Finalize sedflux");
      edu_csdms_models_Sedflux2D_finalize (self, _ex);
    }
*/
    return bocca_status;

EXIT:
    bocca_status = 2;
    edu_csdms_models_Sedflux2D_CMI_finalize (self, _ex);
    return bocca_status;
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.Sedflux2D.go) */
  }
}

/*
 * Method:  CMI_initialize[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_Sedflux2D_CMI_initialize"

#ifdef __cplusplus
extern "C"
#endif
sidl_bool
impl_edu_csdms_models_Sedflux2D_CMI_initialize(
  /* in */ edu_csdms_models_Sedflux2D self,
  /* in */ const char* config_file,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.Sedflux2D.CMI_initialize) */
    struct edu_csdms_models_Sedflux2D__data *this =
             edu_csdms_models_Sedflux2D__get_data (self);

    if (this->status >= CMI_STATUS_INITIALIZING)
      return TRUE;

    this->status = CMI_STATUS_INITIALIZING;

    if (!this->log)
    {
      this->log = edu_csdms_tools_Verbose__create (_ex);
      edu_csdms_tools_Verbose_set_log_level (this->log, 1, _ex);
    }

    if (this->state)
    {
      PRINT (1, "Model is already initialized")
      return;
    }

    { /* Read parameters from the config dialog. */
      edu_csdms_tools_TemplateFiles template;
      char **src;
      char **dest;
      const char *src_files = CMI_TEMPLATE_SOURCE_FILES;
      const char *dest_files = CMI_TEMPLATE_DEST_FILES;
      char * val;

      template = edu_csdms_tools_TemplateFiles__create (_ex);
      edu_csdms_tools_TemplateFiles_add_files (template, src_files,
          dest_files, _ex);

      val = gov_cca_TypeMap_getString (this->userinput,
          "/Sedflux2D/Input/Var/InputDir", "GUI", _ex);
      if (g_ascii_strcasecmp (val, "GUI")==0)
        gov_cca_TypeMap_putString (this->userinput,
            "/Sedflux2D/Input/Var/InputDir", ".", _ex);

      val = gov_cca_TypeMap_getString (this->userinput,
          "/Sedflux2D/Input/Var/InitializationFile", "GUI", _ex);
      if (g_ascii_strcasecmp (val, "GUI")==0)
        gov_cca_TypeMap_putString (this->userinput,
            "/Sedflux2D/Input/Var/InitializationFile",
            "${SimulationName}_init.kvf", _ex);

      val = gov_cca_TypeMap_getString (this->userinput,
          "/Sedflux2D/Input/Var/RiverFile", "GUI", _ex);
      if (g_ascii_strcasecmp (val, "GUI")==0)
        gov_cca_TypeMap_putString (this->userinput,
            "/Sedflux2D/Input/Var/RiverFile",
            "${SimulationName}_river.kvf", _ex);

      val = gov_cca_TypeMap_getString (this->userinput,
          "/Sedflux2D/Input/Var/SedimentFile", "GUI", _ex);
      if (g_ascii_strcasecmp (val, "GUI")==0)
        gov_cca_TypeMap_putString (this->userinput,
            "/Sedflux2D/Input/Var/SedimentFile",
            "${SimulationName}_sediment.kvf", _ex);

      edu_csdms_tools_TemplateFiles_substitute (template,
          this->userinput, "/"CMI_COMPONENT_NAME"/Input/Var/", ".", NULL,
          _ex);

      val = gov_cca_TypeMap_getString (this->userinput,
          "/Sedflux2D/Input/Var/SimulationName", CMI_COMPONENT_NAME, _ex);
      gov_cca_TypeMap_putString (this->userinput,
          "/Sedflux2D/SimulationName", val, _ex);
    }
/*
This is what Sedflux2D.txt will look like,
"sedflux -2 --silent --no-signals --init-file=${INIT_FILE} --input-dir=${INPUT_DIR} --working-dir=${WORKING_DIR}"
*/
    this->state = BMI_Initialize ("Sedflux2D_command_line.txt");

    PRINT (2, "Set up PrintQueue");
    {
      edu_csdms_ports_CMIPort port = edu_csdms_ports_CMIPort__cast (self, _ex);
      fprintf (stderr, "Create PrintQueue\n"); fflush (stderr);
      this->print_queue = edu_csdms_tools_PrintQueue__create (_ex);
      fprintf (stderr, "Initialize PrintQueue\n"); fflush (stderr);
      edu_csdms_tools_PrintQueue_cmi_initialize (this->print_queue,
          this->userinput, "/"CMI_COMPONENT_NAME, port, _ex);
      fprintf (stderr, "Add file to PrintQueue\n"); fflush (stderr);
      edu_csdms_tools_PrintQueue_add_files (this->print_queue,
          "Output/Grid", _ex);
      fprintf (stderr, "Add file to PrintQueue\n"); fflush (stderr);
      edu_csdms_tools_PrintQueue_add_files (this->print_queue,
          "Output/Cube", _ex);
      fprintf (stderr, "Created PrintQueue\n"); fflush (stderr);
    }

    this->status = CMI_STATUS_INITIALIZED;
    return TRUE;
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.Sedflux2D.CMI_initialize) */
  }
}

/*
 * Method:  prepare[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_Sedflux2D_prepare"

#ifdef __cplusplus
extern "C"
#endif
sidl_bool
impl_edu_csdms_models_Sedflux2D_prepare(
  /* in */ edu_csdms_models_Sedflux2D self,
  /* in */ const char* config_file,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.Sedflux2D.prepare) */
    /* Insert-Code-Here {edu.csdms.models.Sedflux2D.prepare} (prepare method) */
    /*
     * This method has not been implemented
     */

    /* DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.Sedflux2D.prepare) */
    SIDL_THROW(*_ex, sidl_NotImplementedException,     "This method has not been implemented");
  EXIT:;
    /* DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.Sedflux2D.prepare) */
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.Sedflux2D.prepare) */
  }
}

/*
 * Method:  CMI_run_for[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_Sedflux2D_CMI_run_for"

#ifdef __cplusplus
extern "C"
#endif
sidl_bool
impl_edu_csdms_models_Sedflux2D_CMI_run_for(
  /* in */ edu_csdms_models_Sedflux2D self,
  /* in */ double time_interval,
  /* in */ const char* time_units,
  /* in */ const char* stop_rule,
  /* in array<double> */ struct sidl_double__array* stop_vars,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.Sedflux2D.CMI_run_for) */
    /* Insert-Code-Here {edu.csdms.models.Sedflux2D.CMI_run_for} (CMI_run_for 
      method) */
    /*
     * This method has not been implemented
     */

    /* DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.Sedflux2D.CMI_run_for) */
    SIDL_THROW(*_ex, sidl_NotImplementedException,     "This method has not been implemented");
  EXIT:;
    /* DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.Sedflux2D.CMI_run_for) */
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.Sedflux2D.CMI_run_for) */
  }
}

/*
 * Method:  CMI_run[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_Sedflux2D_CMI_run"

#ifdef __cplusplus
extern "C"
#endif
sidl_bool
impl_edu_csdms_models_Sedflux2D_CMI_run(
  /* in */ edu_csdms_models_Sedflux2D self,
  /* in */ double time_interval,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.Sedflux2D.CMI_run) */
    struct edu_csdms_models_Sedflux2D__data *this =
             edu_csdms_models_Sedflux2D__get_data (self);

    fprintf (stderr, "Running until %f\n", time_interval);
    fprintf (stderr, "Status is %d\n", this->status);
    if (this->status == CMI_STATUS_UPDATING)
      return TRUE;
    else
      this->status = CMI_STATUS_UPDATING;
    fprintf (stderr, "Status now is %d\n", this->status);

    fprintf (stderr, "End time is %f\n", BMI_Get_end_time (this->state));
    if (time_interval>BMI_Get_end_time (this->state))
      time_interval = BMI_Get_end_time (this->state);

    if (time_interval<0)
      time_interval = BMI_Get_end_time (this->state);
    fprintf (stderr, "Now running until %f\n", time_interval);

    {
      double print_time = edu_csdms_tools_PrintQueue_next_print_time (
          this->print_queue, _ex);
      double stop_time = time_interval;
      while (print_time<stop_time)
      {
        this->status = CMI_STATUS_UPDATED;
        edu_csdms_models_Sedflux2D_CMI_run (self, print_time, _ex);
        print_time = edu_csdms_tools_PrintQueue_next_print_time (
            this->print_queue, _ex);
      }
    }

    fprintf (stderr, "Current time is %f\n", BMI_Get_current_time (this->state));
    while (BMI_Get_current_time (this->state)<time_interval)
    {
      BMI_Update_until (this->state, time_interval);

    fprintf (stderr, "Current time is %f\n", BMI_Get_current_time (this->state));
      edu_csdms_tools_PrintQueue_print_all (this->print_queue,
          BMI_Get_current_time (this->state), _ex);
    }

    this->status = CMI_STATUS_UPDATED;
    fprintf (stderr, "Status is finally %d\n", this->status);

    return TRUE;

    /* DO-NOT-DELETE splicer.end(edu.csdms.models.Sedflux2D.CMI_run) */
  }
}

/*
 * Method:  run[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_Sedflux2D_run"

#ifdef __cplusplus
extern "C"
#endif
sidl_bool
impl_edu_csdms_models_Sedflux2D_run(
  /* in */ edu_csdms_models_Sedflux2D self,
  /* in */ double time_interval,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.Sedflux2D.run) */
    /* Insert-Code-Here {edu.csdms.models.Sedflux2D.run} (run method) */
    /*
     * This method has not been implemented
     */

    /* DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.Sedflux2D.run) */
    SIDL_THROW(*_ex, sidl_NotImplementedException,     "This method has not been implemented");
  EXIT:;
    /* DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.Sedflux2D.run) */
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.Sedflux2D.run) */
  }
}

/*
 * Method:  CMI_finalize[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_Sedflux2D_CMI_finalize"

#ifdef __cplusplus
extern "C"
#endif
sidl_bool
impl_edu_csdms_models_Sedflux2D_CMI_finalize(
  /* in */ edu_csdms_models_Sedflux2D self,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.Sedflux2D.CMI_finalize) */
    struct edu_csdms_models_Sedflux2D__data *this =
             edu_csdms_models_Sedflux2D__get_data (self);

    this->status = CMI_STATUS_FINALIZING;

    {
      BMI_Finalize (this->state);

      this->is_driver = FALSE;
      this->state = NULL;

      edu_csdms_tools_PrintQueue_close (this->print_queue, _ex);
    }

    this->status = CMI_STATUS_FINALIZED;

    return TRUE;
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.Sedflux2D.CMI_finalize) */
  }
}

/*
 * Method:  finish[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_Sedflux2D_finish"

#ifdef __cplusplus
extern "C"
#endif
sidl_bool
impl_edu_csdms_models_Sedflux2D_finish(
  /* in */ edu_csdms_models_Sedflux2D self,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.Sedflux2D.finish) */
    /* Insert-Code-Here {edu.csdms.models.Sedflux2D.finish} (finish method) */
    /*
     * This method has not been implemented
     */

    /* DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.Sedflux2D.finish) */
    SIDL_THROW(*_ex, sidl_NotImplementedException,     "This method has not been implemented");
  EXIT:;
    /* DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.Sedflux2D.finish) */
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.Sedflux2D.finish) */
  }
}

/*
 * Method:  CMI_run_model[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_Sedflux2D_CMI_run_model"

#ifdef __cplusplus
extern "C"
#endif
sidl_bool
impl_edu_csdms_models_Sedflux2D_CMI_run_model(
  /* in */ edu_csdms_models_Sedflux2D self,
  /* in */ const char* config_file,
  /* in */ const char* stop_rule,
  /* in */ double stop_var,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.Sedflux2D.CMI_run_model) */
    /* Insert-Code-Here {edu.csdms.models.Sedflux2D.CMI_run_model} (
      CMI_run_model method) */
    /*
     * This method has not been implemented
     */

    /* DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.Sedflux2D.CMI_run_model) */
    SIDL_THROW(*_ex, sidl_NotImplementedException,     "This method has not been implemented");
  EXIT:;
    /* DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.Sedflux2D.CMI_run_model) */
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.Sedflux2D.CMI_run_model) */
  }
}

/*
 * Method:  CMI_get_start_time[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_Sedflux2D_CMI_get_start_time"

#ifdef __cplusplus
extern "C"
#endif
double
impl_edu_csdms_models_Sedflux2D_CMI_get_start_time(
  /* in */ edu_csdms_models_Sedflux2D self,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.Sedflux2D.CMI_get_start_time) */
    /* Insert-Code-Here {edu.csdms.models.Sedflux2D.CMI_get_start_time} (
      CMI_get_start_time method) */
    /*
     * This method has not been implemented
     */

    /* DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.Sedflux2D.CMI_get_start_time) */
    SIDL_THROW(*_ex, sidl_NotImplementedException,     "This method has not been implemented");
  EXIT:;
    /* DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.Sedflux2D.CMI_get_start_time) */
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.Sedflux2D.CMI_get_start_time) */
  }
}

/*
 * Method:  CMI_get_current_time[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_Sedflux2D_CMI_get_current_time"

#ifdef __cplusplus
extern "C"
#endif
double
impl_edu_csdms_models_Sedflux2D_CMI_get_current_time(
  /* in */ edu_csdms_models_Sedflux2D self,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.Sedflux2D.CMI_get_current_time) */
    /* Insert-Code-Here {edu.csdms.models.Sedflux2D.CMI_get_current_time} (
      CMI_get_current_time method) */
    /*
     * This method has not been implemented
     */

    /* DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.Sedflux2D.CMI_get_current_time) */
    SIDL_THROW(*_ex, sidl_NotImplementedException,     "This method has not been implemented");
  EXIT:;
    /* DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.Sedflux2D.CMI_get_current_time) */
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.Sedflux2D.CMI_get_current_time) */
  }
}

/*
 * Method:  CMI_get_end_time[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_Sedflux2D_CMI_get_end_time"

#ifdef __cplusplus
extern "C"
#endif
double
impl_edu_csdms_models_Sedflux2D_CMI_get_end_time(
  /* in */ edu_csdms_models_Sedflux2D self,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.Sedflux2D.CMI_get_end_time) */
    /* Insert-Code-Here {edu.csdms.models.Sedflux2D.CMI_get_end_time} (
      CMI_get_end_time method) */
    /*
     * This method has not been implemented
     */

    /* DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.Sedflux2D.CMI_get_end_time) */
    SIDL_THROW(*_ex, sidl_NotImplementedException,     "This method has not been implemented");
  EXIT:;
    /* DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.Sedflux2D.CMI_get_end_time) */
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.Sedflux2D.CMI_get_end_time) */
  }
}

/*
 * Method:  CMI_get_values[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_Sedflux2D_CMI_get_values"

#ifdef __cplusplus
extern "C"
#endif
struct sidl__array*
impl_edu_csdms_models_Sedflux2D_CMI_get_values(
  /* in */ edu_csdms_models_Sedflux2D self,
  /* in */ const char* long_var_name,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.Sedflux2D.CMI_get_values) */
    struct sidl__array* generic = NULL;

    {
      struct sidl_double__array* vals = NULL;
      struct edu_csdms_models_Sedflux2D__data *this =
        edu_csdms_models_Sedflux2D__get_data (self);

      if (this && this->state)
      {
        int n_dims;
        int * dimen;
        double* data = BMI_Get_double (this->state, long_var_name, &n_dims,
            &dimen);

        if (data)
        { /* Create an array that borrows these values. */
          int i;
          int * lower = (int*)malloc (sizeof (int)*n_dims);
          int * upper = (int*)malloc (sizeof (int)*n_dims);
          int * stride = (int*)malloc (sizeof (int)*n_dims);

          /* BMI_get_double returns an array that is compact and has
           * unit stride */
          for (i=0; i<n_dims; i++)
          {
            lower[i] = 0;
            upper[i] = dimen[i]-1;
          }
          for (i=1, stride[0]=1; i<n_dims; i++)
            stride[i] = stride[i-1]*dimen[i-1];

          vals = sidl_double__array_borrow (data, n_dims, lower, upper,
              stride);

          free (stride);
          free (upper);
          free (lower);
        }
      }
      generic = (struct sidl__array*)vals;
    }
    return generic;
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.Sedflux2D.CMI_get_values) */
  }
}

/*
 * Method:  CMI_set_values[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_Sedflux2D_CMI_set_values"

#ifdef __cplusplus
extern "C"
#endif
void
impl_edu_csdms_models_Sedflux2D_CMI_set_values(
  /* in */ edu_csdms_models_Sedflux2D self,
  /* in */ const char* long_var_name,
  /* in array<> */ struct sidl__array* in_values,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.Sedflux2D.CMI_set_values) */
    /* Insert-Code-Here {edu.csdms.models.Sedflux2D.CMI_set_values} (
      CMI_set_values method) */
    /*
     * This method has not been implemented
     */

    /* DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.Sedflux2D.CMI_set_values) */
    SIDL_THROW(*_ex, sidl_NotImplementedException,     "This method has not been implemented");
  EXIT:;
    /* DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.Sedflux2D.CMI_set_values) */
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.Sedflux2D.CMI_set_values) */
  }
}

/*
 * Method:  CMI_get_status[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_Sedflux2D_CMI_get_status"

#ifdef __cplusplus
extern "C"
#endif
char*
impl_edu_csdms_models_Sedflux2D_CMI_get_status(
  /* in */ edu_csdms_models_Sedflux2D self,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.Sedflux2D.CMI_get_status) */
    /* Insert-Code-Here {edu.csdms.models.Sedflux2D.CMI_get_status} (
      CMI_get_status method) */
    /*
     * This method has not been implemented
     */

    /* DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.Sedflux2D.CMI_get_status) */
    SIDL_THROW(*_ex, sidl_NotImplementedException,     "This method has not been implemented");
  EXIT:;
    /* DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.Sedflux2D.CMI_get_status) */
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.Sedflux2D.CMI_get_status) */
  }
}

/*
 * Method:  CMI_get_component_name[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_Sedflux2D_CMI_get_component_name"

#ifdef __cplusplus
extern "C"
#endif
char*
impl_edu_csdms_models_Sedflux2D_CMI_get_component_name(
  /* in */ edu_csdms_models_Sedflux2D self,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.Sedflux2D.CMI_get_component_name) */
    /* Insert-Code-Here {edu.csdms.models.Sedflux2D.CMI_get_component_name} (
      CMI_get_component_name method) */
    /*
     * This method has not been implemented
     */

    /* DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.Sedflux2D.CMI_get_component_name) */
    SIDL_THROW(*_ex, sidl_NotImplementedException,     "This method has not been implemented");
  EXIT:;
    /* DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.Sedflux2D.CMI_get_component_name) */
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.Sedflux2D.CMI_get_component_name) */
  }
}

/*
 * Method:  CMI_get_input_item_list[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_Sedflux2D_CMI_get_input_item_list"

#ifdef __cplusplus
extern "C"
#endif
struct sidl_string__array*
impl_edu_csdms_models_Sedflux2D_CMI_get_input_item_list(
  /* in */ edu_csdms_models_Sedflux2D self,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.Sedflux2D.CMI_get_input_item_list) */
    /* Insert-Code-Here {edu.csdms.models.Sedflux2D.CMI_get_input_item_list} (
      CMI_get_input_item_list method) */
    /*
     * This method has not been implemented
     */

    /* DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.Sedflux2D.CMI_get_input_item_list) */
    SIDL_THROW(*_ex, sidl_NotImplementedException,     "This method has not been implemented");
  EXIT:;
    /* DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.Sedflux2D.CMI_get_input_item_list) */
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.Sedflux2D.CMI_get_input_item_list) */
  }
}

/*
 * Method:  CMI_get_output_item_list[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_Sedflux2D_CMI_get_output_item_list"

#ifdef __cplusplus
extern "C"
#endif
struct sidl_string__array*
impl_edu_csdms_models_Sedflux2D_CMI_get_output_item_list(
  /* in */ edu_csdms_models_Sedflux2D self,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.Sedflux2D.CMI_get_output_item_list) */
    /* Insert-Code-Here {edu.csdms.models.Sedflux2D.CMI_get_output_item_list} (
      CMI_get_output_item_list method) */
    /*
     * This method has not been implemented
     */

    /* DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.Sedflux2D.CMI_get_output_item_list) */
    SIDL_THROW(*_ex, sidl_NotImplementedException,     "This method has not been implemented");
  EXIT:;
    /* DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.Sedflux2D.CMI_get_output_item_list) */
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.Sedflux2D.CMI_get_output_item_list) */
  }
}

/*
 * Method:  CMI_has_output_item[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_Sedflux2D_CMI_has_output_item"

#ifdef __cplusplus
extern "C"
#endif
sidl_bool
impl_edu_csdms_models_Sedflux2D_CMI_has_output_item(
  /* in */ edu_csdms_models_Sedflux2D self,
  /* in */ const char* long_var_name,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.Sedflux2D.CMI_has_output_item) */
    /* Insert-Code-Here {edu.csdms.models.Sedflux2D.CMI_has_output_item} (
      CMI_has_output_item method) */
    /*
     * This method has not been implemented
     */

    /* DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.Sedflux2D.CMI_has_output_item) */
    SIDL_THROW(*_ex, sidl_NotImplementedException,     "This method has not been implemented");
  EXIT:;
    /* DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.Sedflux2D.CMI_has_output_item) */
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.Sedflux2D.CMI_has_output_item) */
  }
}

/*
 * Method:  CMI_has_input_item[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_Sedflux2D_CMI_has_input_item"

#ifdef __cplusplus
extern "C"
#endif
sidl_bool
impl_edu_csdms_models_Sedflux2D_CMI_has_input_item(
  /* in */ edu_csdms_models_Sedflux2D self,
  /* in */ const char* long_var_name,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.Sedflux2D.CMI_has_input_item) */
    /* Insert-Code-Here {edu.csdms.models.Sedflux2D.CMI_has_input_item} (
      CMI_has_input_item method) */
    /*
     * This method has not been implemented
     */

    /* DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.Sedflux2D.CMI_has_input_item) */
    SIDL_THROW(*_ex, sidl_NotImplementedException,     "This method has not been implemented");
  EXIT:;
    /* DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.Sedflux2D.CMI_has_input_item) */
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.Sedflux2D.CMI_has_input_item) */
  }
}

/*
 * Method:  CMI_get_required_ports[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_Sedflux2D_CMI_get_required_ports"

#ifdef __cplusplus
extern "C"
#endif
void
impl_edu_csdms_models_Sedflux2D_CMI_get_required_ports(
  /* in */ edu_csdms_models_Sedflux2D self,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.Sedflux2D.CMI_get_required_ports) */
    /* Insert-Code-Here {edu.csdms.models.Sedflux2D.CMI_get_required_ports} (
      CMI_get_required_ports method) */
    /*
     * This method has not been implemented
     */

    /* DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.Sedflux2D.CMI_get_required_ports) */
    SIDL_THROW(*_ex, sidl_NotImplementedException,     "This method has not been implemented");
  EXIT:;
    /* DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.Sedflux2D.CMI_get_required_ports) */
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.Sedflux2D.CMI_get_required_ports) */
  }
}

/*
 * Method:  CMI_release_required_ports[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_Sedflux2D_CMI_release_required_ports"

#ifdef __cplusplus
extern "C"
#endif
void
impl_edu_csdms_models_Sedflux2D_CMI_release_required_ports(
  /* in */ edu_csdms_models_Sedflux2D self,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.Sedflux2D.CMI_release_required_ports) */
    /* Insert-Code-Here {edu.csdms.models.Sedflux2D.CMI_release_required_ports} 
      (CMI_release_required_ports method) */
    /*
     * This method has not been implemented
     */

    /* DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.Sedflux2D.CMI_release_required_ports) */
    SIDL_THROW(*_ex, sidl_NotImplementedException,     "This method has not been implemented");
  EXIT:;
    /* DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.Sedflux2D.CMI_release_required_ports) */
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.Sedflux2D.CMI_release_required_ports) */
  }
}

/*
 * Method:  CMI_get_values_at_indices[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_Sedflux2D_CMI_get_values_at_indices"

#ifdef __cplusplus
extern "C"
#endif
struct sidl__array*
impl_edu_csdms_models_Sedflux2D_CMI_get_values_at_indices(
  /* in */ edu_csdms_models_Sedflux2D self,
  /* in */ const char* long_var_name,
  /* in array<int> */ struct sidl_int__array* indices,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.Sedflux2D.CMI_get_values_at_indices) */
    /* Insert-Code-Here {edu.csdms.models.Sedflux2D.CMI_get_values_at_indices} (
      CMI_get_values_at_indices method) */
    /*
     * This method has not been implemented
     */

    /* DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.Sedflux2D.CMI_get_values_at_indices) */
    SIDL_THROW(*_ex, sidl_NotImplementedException,     "This method has not been implemented");
  EXIT:;
    /* DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.Sedflux2D.CMI_get_values_at_indices) */
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.Sedflux2D.CMI_get_values_at_indices) */
  }
}

/*
 * Method:  CMI_set_values_at_indices[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_Sedflux2D_CMI_set_values_at_indices"

#ifdef __cplusplus
extern "C"
#endif
void
impl_edu_csdms_models_Sedflux2D_CMI_set_values_at_indices(
  /* in */ edu_csdms_models_Sedflux2D self,
  /* in */ const char* long_var_name,
  /* in array<int> */ struct sidl_int__array* indices,
  /* in array<> */ struct sidl__array* in_values,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.Sedflux2D.CMI_set_values_at_indices) */
    /* Insert-Code-Here {edu.csdms.models.Sedflux2D.CMI_set_values_at_indices} (
      CMI_set_values_at_indices method) */
    /*
     * This method has not been implemented
     */

    /* DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.Sedflux2D.CMI_set_values_at_indices) */
    SIDL_THROW(*_ex, sidl_NotImplementedException,     "This method has not been implemented");
  EXIT:;
    /* DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.Sedflux2D.CMI_set_values_at_indices) */
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.Sedflux2D.CMI_set_values_at_indices) */
  }
}

/*
 * Method:  CMI_print_traceback[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_Sedflux2D_CMI_print_traceback"

#ifdef __cplusplus
extern "C"
#endif
void
impl_edu_csdms_models_Sedflux2D_CMI_print_traceback(
  /* in */ edu_csdms_models_Sedflux2D self,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.Sedflux2D.CMI_print_traceback) */
    /* Insert-Code-Here {edu.csdms.models.Sedflux2D.CMI_print_traceback} (
      CMI_print_traceback method) */
    /*
     * This method has not been implemented
     */

    /* DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.Sedflux2D.CMI_print_traceback) */
    SIDL_THROW(*_ex, sidl_NotImplementedException,     "This method has not been implemented");
  EXIT:;
    /* DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.Sedflux2D.CMI_print_traceback) */
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.Sedflux2D.CMI_print_traceback) */
  }
}

/*
 * Method:  CMI_get_grid_spacing[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_Sedflux2D_CMI_get_grid_spacing"

#ifdef __cplusplus
extern "C"
#endif
struct sidl_double__array*
impl_edu_csdms_models_Sedflux2D_CMI_get_grid_spacing(
  /* in */ edu_csdms_models_Sedflux2D self,
  /* in */ const char* long_var_name,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.Sedflux2D.CMI_get_grid_spacing) */
    struct edu_csdms_models_Sedflux2D__data *this =
      edu_csdms_models_Sedflux2D__get_data (self);
    struct sidl_double__array* sidl_spacing;
    double * spacing;
    int n_dims;

    spacing = BMI_Get_grid_spacing (this->state, long_var_name, &n_dims);
    sidl_spacing = sidl_double__array_create1d (n_dims);

    {
      int i;
      for (i=0; i<n_dims; i++)
        sidl_double__array_set1 (sidl_spacing, i, spacing[i]);
    }

    g_free (spacing);
    return sidl_spacing;
  EXIT:;
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.Sedflux2D.CMI_get_grid_spacing) */
  }
}

/*
 * Method:  get_grid_spacing[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_Sedflux2D_get_grid_spacing"

#ifdef __cplusplus
extern "C"
#endif
struct sidl_double__array*
impl_edu_csdms_models_Sedflux2D_get_grid_spacing(
  /* in */ edu_csdms_models_Sedflux2D self,
  /* in */ const char* long_var_name,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.Sedflux2D.get_grid_spacing) */
    /* Insert-Code-Here {edu.csdms.models.Sedflux2D.get_grid_spacing} (
      get_grid_spacing method) */
    /*
     * This method has not been implemented
     */

    /* DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.Sedflux2D.get_grid_spacing) */
    SIDL_THROW(*_ex, sidl_NotImplementedException,     "This method has not been implemented");
  EXIT:;
    /* DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.Sedflux2D.get_grid_spacing) */
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.Sedflux2D.get_grid_spacing) */
  }
}

/*
 * Method:  CMI_get_grid_lower_left[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_Sedflux2D_CMI_get_grid_lower_left"

#ifdef __cplusplus
extern "C"
#endif
struct sidl_double__array*
impl_edu_csdms_models_Sedflux2D_CMI_get_grid_lower_left(
  /* in */ edu_csdms_models_Sedflux2D self,
  /* in */ const char* long_var_name,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.Sedflux2D.CMI_get_grid_lower_left) */
    /* Insert-Code-Here {edu.csdms.models.Sedflux2D.CMI_get_grid_lower_left} (
      CMI_get_grid_lower_left method) */
    /*
     * This method has not been implemented
     */

    /* DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.Sedflux2D.CMI_get_grid_lower_left) */
    SIDL_THROW(*_ex, sidl_NotImplementedException,     "This method has not been implemented");
  EXIT:;
    /* DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.Sedflux2D.CMI_get_grid_lower_left) */
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.Sedflux2D.CMI_get_grid_lower_left) */
  }
}

/*
 * Method:  get_grid_lower_left[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_Sedflux2D_get_grid_lower_left"

#ifdef __cplusplus
extern "C"
#endif
struct sidl_double__array*
impl_edu_csdms_models_Sedflux2D_get_grid_lower_left(
  /* in */ edu_csdms_models_Sedflux2D self,
  /* in */ const char* long_var_name,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.Sedflux2D.get_grid_lower_left) */
    /* Insert-Code-Here {edu.csdms.models.Sedflux2D.get_grid_lower_left} (
      get_grid_lower_left method) */
    /*
     * This method has not been implemented
     */

    /* DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.Sedflux2D.get_grid_lower_left) */
    SIDL_THROW(*_ex, sidl_NotImplementedException,     "This method has not been implemented");
  EXIT:;
    /* DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.Sedflux2D.get_grid_lower_left) */
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.Sedflux2D.get_grid_lower_left) */
  }
}

/*
 * Method:  CMI_get_grid_shape[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_Sedflux2D_CMI_get_grid_shape"

#ifdef __cplusplus
extern "C"
#endif
struct sidl_int__array*
impl_edu_csdms_models_Sedflux2D_CMI_get_grid_shape(
  /* in */ edu_csdms_models_Sedflux2D self,
  /* in */ const char* long_var_name,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.Sedflux2D.CMI_get_grid_shape) */
    struct edu_csdms_models_Sedflux2D__data *this =
      edu_csdms_models_Sedflux2D__get_data (self);
    struct sidl_int__array* sidl_shape;
    int * shape;
    int n_dims;

    fprintf (stderr, "Calling BMI_Get_grid_shape\n");
    shape = BMI_Get_grid_shape (this->state, long_var_name, &n_dims);
    fprintf (stderr, "Ndims=%d\n", n_dims);
    fprintf (stderr, "dims=(%d, %d)\n", shape[0], shape[1]);
    sidl_shape = sidl_int__array_create1d (n_dims);
    fprintf (stderr, "Creating sidl array\n");
    {
      int i;
      for (i=0; i<n_dims; i++)
      {
        fprintf (stderr, "Setting shape[%d]=%d\n", i, shape[i]);
        sidl_int__array_set1 (sidl_shape, i, shape[i]);
      }
    }
    fprintf (stderr, "Created sidl array\n");

    g_free (shape);
    fprintf (stderr, "Returning\n");
    return sidl_shape;
  EXIT:;
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.Sedflux2D.CMI_get_grid_shape) */
  }
}

/*
 * Method:  get_grid_shape[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_Sedflux2D_get_grid_shape"

#ifdef __cplusplus
extern "C"
#endif
struct sidl_int__array*
impl_edu_csdms_models_Sedflux2D_get_grid_shape(
  /* in */ edu_csdms_models_Sedflux2D self,
  /* in */ const char* long_var_name,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.Sedflux2D.get_grid_shape) */
    /* Insert-Code-Here {edu.csdms.models.Sedflux2D.get_grid_shape} (
      get_grid_shape method) */
    /*
     * This method has not been implemented
     */

    /* DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.Sedflux2D.get_grid_shape) */
    SIDL_THROW(*_ex, sidl_NotImplementedException,     "This method has not been implemented");
  EXIT:;
    /* DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.Sedflux2D.get_grid_shape) */
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.Sedflux2D.get_grid_shape) */
  }
}

/*
 * Method:  CMI_get_grid_x[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_Sedflux2D_CMI_get_grid_x"

#ifdef __cplusplus
extern "C"
#endif
struct sidl_double__array*
impl_edu_csdms_models_Sedflux2D_CMI_get_grid_x(
  /* in */ edu_csdms_models_Sedflux2D self,
  /* in */ const char* long_var_name,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.Sedflux2D.CMI_get_grid_x) */
    /* Insert-Code-Here {edu.csdms.models.Sedflux2D.CMI_get_grid_x} (
      CMI_get_grid_x method) */
    /*
     * This method has not been implemented
     */

    /* DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.Sedflux2D.CMI_get_grid_x) */
    SIDL_THROW(*_ex, sidl_NotImplementedException,     "This method has not been implemented");
  EXIT:;
    /* DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.Sedflux2D.CMI_get_grid_x) */
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.Sedflux2D.CMI_get_grid_x) */
  }
}

/*
 * Method:  get_grid_x[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_Sedflux2D_get_grid_x"

#ifdef __cplusplus
extern "C"
#endif
struct sidl_double__array*
impl_edu_csdms_models_Sedflux2D_get_grid_x(
  /* in */ edu_csdms_models_Sedflux2D self,
  /* in */ const char* long_var_name,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.Sedflux2D.get_grid_x) */
    /* Insert-Code-Here {edu.csdms.models.Sedflux2D.get_grid_x} (get_grid_x 
      method) */
    /*
     * This method has not been implemented
     */

    /* DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.Sedflux2D.get_grid_x) */
    SIDL_THROW(*_ex, sidl_NotImplementedException,     "This method has not been implemented");
  EXIT:;
    /* DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.Sedflux2D.get_grid_x) */
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.Sedflux2D.get_grid_x) */
  }
}

/*
 * Method:  CMI_get_grid_y[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_Sedflux2D_CMI_get_grid_y"

#ifdef __cplusplus
extern "C"
#endif
struct sidl_double__array*
impl_edu_csdms_models_Sedflux2D_CMI_get_grid_y(
  /* in */ edu_csdms_models_Sedflux2D self,
  /* in */ const char* long_var_name,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.Sedflux2D.CMI_get_grid_y) */
    /* Insert-Code-Here {edu.csdms.models.Sedflux2D.CMI_get_grid_y} (
      CMI_get_grid_y method) */
    /*
     * This method has not been implemented
     */

    /* DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.Sedflux2D.CMI_get_grid_y) */
    SIDL_THROW(*_ex, sidl_NotImplementedException,     "This method has not been implemented");
  EXIT:;
    /* DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.Sedflux2D.CMI_get_grid_y) */
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.Sedflux2D.CMI_get_grid_y) */
  }
}

/*
 * Method:  get_grid_y[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_Sedflux2D_get_grid_y"

#ifdef __cplusplus
extern "C"
#endif
struct sidl_double__array*
impl_edu_csdms_models_Sedflux2D_get_grid_y(
  /* in */ edu_csdms_models_Sedflux2D self,
  /* in */ const char* long_var_name,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.Sedflux2D.get_grid_y) */
    /* Insert-Code-Here {edu.csdms.models.Sedflux2D.get_grid_y} (get_grid_y 
      method) */
    /*
     * This method has not been implemented
     */

    /* DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.Sedflux2D.get_grid_y) */
    SIDL_THROW(*_ex, sidl_NotImplementedException,     "This method has not been implemented");
  EXIT:;
    /* DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.Sedflux2D.get_grid_y) */
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.Sedflux2D.get_grid_y) */
  }
}

/*
 * Method:  CMI_get_grid_z[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_Sedflux2D_CMI_get_grid_z"

#ifdef __cplusplus
extern "C"
#endif
struct sidl_double__array*
impl_edu_csdms_models_Sedflux2D_CMI_get_grid_z(
  /* in */ edu_csdms_models_Sedflux2D self,
  /* in */ const char* long_var_name,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.Sedflux2D.CMI_get_grid_z) */
    /* Insert-Code-Here {edu.csdms.models.Sedflux2D.CMI_get_grid_z} (
      CMI_get_grid_z method) */
    /*
     * This method has not been implemented
     */

    /* DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.Sedflux2D.CMI_get_grid_z) */
    SIDL_THROW(*_ex, sidl_NotImplementedException,     "This method has not been implemented");
  EXIT:;
    /* DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.Sedflux2D.CMI_get_grid_z) */
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.Sedflux2D.CMI_get_grid_z) */
  }
}

/*
 * Method:  get_grid_z[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_Sedflux2D_get_grid_z"

#ifdef __cplusplus
extern "C"
#endif
struct sidl_double__array*
impl_edu_csdms_models_Sedflux2D_get_grid_z(
  /* in */ edu_csdms_models_Sedflux2D self,
  /* in */ const char* long_var_name,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.Sedflux2D.get_grid_z) */
    /* Insert-Code-Here {edu.csdms.models.Sedflux2D.get_grid_z} (get_grid_z 
      method) */
    /*
     * This method has not been implemented
     */

    /* DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.Sedflux2D.get_grid_z) */
    SIDL_THROW(*_ex, sidl_NotImplementedException,     "This method has not been implemented");
  EXIT:;
    /* DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.Sedflux2D.get_grid_z) */
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.Sedflux2D.get_grid_z) */
  }
}

/*
 * Method:  get_grid_connectivity[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_Sedflux2D_get_grid_connectivity"

#ifdef __cplusplus
extern "C"
#endif
struct sidl_int__array*
impl_edu_csdms_models_Sedflux2D_get_grid_connectivity(
  /* in */ edu_csdms_models_Sedflux2D self,
  /* in */ const char* long_var_name,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.Sedflux2D.get_grid_connectivity) */
    /* Insert-Code-Here {edu.csdms.models.Sedflux2D.get_grid_connectivity} (
      get_grid_connectivity method) */
    /*
     * This method has not been implemented
     */

    /* DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.Sedflux2D.get_grid_connectivity) */
    SIDL_THROW(*_ex, sidl_NotImplementedException,     "This method has not been implemented");
  EXIT:;
    /* DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.Sedflux2D.get_grid_connectivity) */
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.Sedflux2D.get_grid_connectivity) */
  }
}

/*
 * Method:  get_grid_offset[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_Sedflux2D_get_grid_offset"

#ifdef __cplusplus
extern "C"
#endif
struct sidl_int__array*
impl_edu_csdms_models_Sedflux2D_get_grid_offset(
  /* in */ edu_csdms_models_Sedflux2D self,
  /* in */ const char* long_var_name,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.Sedflux2D.get_grid_offset) */
    /* Insert-Code-Here {edu.csdms.models.Sedflux2D.get_grid_offset} (
      get_grid_offset method) */
    /*
     * This method has not been implemented
     */

    /* DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.Sedflux2D.get_grid_offset) */
    SIDL_THROW(*_ex, sidl_NotImplementedException,     "This method has not been implemented");
  EXIT:;
    /* DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.Sedflux2D.get_grid_offset) */
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.Sedflux2D.get_grid_offset) */
  }
}

/*
 * Method:  get_grid[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_Sedflux2D_get_grid"

#ifdef __cplusplus
extern "C"
#endif
edu_csdms_cmi_IGrid
impl_edu_csdms_models_Sedflux2D_get_grid(
  /* in */ edu_csdms_models_Sedflux2D self,
  /* in */ const char* long_var_name,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.Sedflux2D.get_grid) */
    /* Insert-Code-Here {edu.csdms.models.Sedflux2D.get_grid} (get_grid method) 
      */
    /*
     * This method has not been implemented
     */

    /* DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.Sedflux2D.get_grid) */
    SIDL_THROW(*_ex, sidl_NotImplementedException,     "This method has not been implemented");
  EXIT:;
    /* DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.Sedflux2D.get_grid) */
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.Sedflux2D.get_grid) */
  }
}

/*
 * Method:  get_grid_values[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_Sedflux2D_get_grid_values"

#ifdef __cplusplus
extern "C"
#endif
struct sidl_double__array*
impl_edu_csdms_models_Sedflux2D_get_grid_values(
  /* in */ edu_csdms_models_Sedflux2D self,
  /* in */ const char* long_var_name,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.Sedflux2D.get_grid_values) */
    /* Insert-Code-Here {edu.csdms.models.Sedflux2D.get_grid_values} (
      get_grid_values method) */
    /*
     * This method has not been implemented
     */

    /* DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.Sedflux2D.get_grid_values) */
    SIDL_THROW(*_ex, sidl_NotImplementedException,     "This method has not been implemented");
  EXIT:;
    /* DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.Sedflux2D.get_grid_values) */
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.Sedflux2D.get_grid_values) */
  }
}

/*
 * Method:  set_grid_values[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_Sedflux2D_set_grid_values"

#ifdef __cplusplus
extern "C"
#endif
void
impl_edu_csdms_models_Sedflux2D_set_grid_values(
  /* in */ edu_csdms_models_Sedflux2D self,
  /* in */ const char* long_var_name,
  /* in array<double> */ struct sidl_double__array* vals,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.Sedflux2D.set_grid_values) */
    /* Insert-Code-Here {edu.csdms.models.Sedflux2D.set_grid_values} (
      set_grid_values method) */
    /*
     * This method has not been implemented
     */

    /* DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.Sedflux2D.set_grid_values) */
    SIDL_THROW(*_ex, sidl_NotImplementedException,     "This method has not been implemented");
  EXIT:;
    /* DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.Sedflux2D.set_grid_values) */
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.Sedflux2D.set_grid_values) */
  }
}
/* Babel internal methods, Users should not edit below this line. */

/* DO-NOT-DELETE splicer.begin(_misc) */
/* Insert-Code-Here {_misc} (miscellaneous code) */
/* DO-NOT-DELETE splicer.end(_misc) */

