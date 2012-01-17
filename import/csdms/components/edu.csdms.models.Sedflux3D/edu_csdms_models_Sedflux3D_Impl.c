/*
 * File:          edu_csdms_models_Sedflux3D_Impl.c
 * Symbol:        edu.csdms.models.Sedflux3D-v0.0
 * Symbol Type:   class
 * Babel Version: 1.4.0 (Revision: 6607 release-1-4-0-branch)
 * Description:   Server-side implementation for edu.csdms.models.Sedflux3D
 * 
 * WARNING: Automatically generated; only changes within splicers preserved
 * 
 */

/*
 * DEVELOPERS ARE EXPECTED TO PROVIDE IMPLEMENTATIONS
 * FOR THE FOLLOWING METHODS BETWEEN SPLICER PAIRS.
 */

/*
 * Symbol "edu.csdms.models.Sedflux3D" (version 0.0)
 */

#include "edu_csdms_models_Sedflux3D_Impl.h"
#include "sidl_NotImplementedException.h"
#include "sidl_Exception.h"
#ifndef included_sidl_MemAllocException_h
#include "sidl_MemAllocException.h"
#endif

/* DO-NOT-DELETE splicer.begin(edu.csdms.models.Sedflux3D._includes) */

/* Insert-UserCode-Here {edu.csdms.models.Sedflux3D._includes} (includes and arbitrary code) */

/* Bocca generated code. bocca.protected.begin(edu.csdms.models.Sedflux3D._includes) */
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
/* Bocca generated code. bocca.protected.end(edu.csdms.models.Sedflux3D._includes) */

/* Insert-UserCode-Here {edu.csdms.models.Sedflux3D._includes} (includes and arbitrary code) */

/* DO-NOT-DELETE splicer.end(edu.csdms.models.Sedflux3D._includes) */

#define SIDL_IOR_MAJOR_VERSION 2
#define SIDL_IOR_MINOR_VERSION 0
/*
 * Static class initializer called exactly once before any user-defined method is dispatched
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_Sedflux3D__load"

#ifdef __cplusplus
extern "C"
#endif
void
impl_edu_csdms_models_Sedflux3D__load(
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.Sedflux3D._load) */
    /* Insert-Code-Here {edu.csdms.models.Sedflux3D._load} (static class 
      initializer method) */
    /*
     * This method has not been implemented
     */

    /* DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.Sedflux3D._load) */
    SIDL_THROW(*_ex, sidl_NotImplementedException,     "This method has not been implemented");
  EXIT:;
    /* DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.Sedflux3D._load) */
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.Sedflux3D._load) */
  }
}
/*
 * Class constructor called when the class is created.
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_Sedflux3D__ctor"

#ifdef __cplusplus
extern "C"
#endif
void
impl_edu_csdms_models_Sedflux3D__ctor(
  /* in */ edu_csdms_models_Sedflux3D self,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.Sedflux3D._ctor) */

  /* Insert-UserDecl-Here {edu.csdms.models.Sedflux3D._ctor} (constructor method) */
    
  /* bocca-default-code. User may edit or delete.begin(edu.csdms.models.Sedflux3D._ctor) */
   struct edu_csdms_models_Sedflux3D__data *dptr = 
       (struct edu_csdms_models_Sedflux3D__data*)malloc(sizeof(struct edu_csdms_models_Sedflux3D__data));
   if (dptr) {
      memset(dptr, 0, sizeof(struct edu_csdms_models_Sedflux3D__data));
   }
   edu_csdms_models_Sedflux3D__set_data(self, dptr);
   #if _BOCCA_CTOR_MESSAGES
     BOCCA_FPRINTF(stderr, 
        "CTOR edu.csdms.models.Sedflux3D: %s constructed data %p in self %p\n", 
        __FUNC__, dptr, self);
   #endif /* _BOCCA_CTOR_MESSAGES */
  /* bocca-default-code. User may edit or delete.end(edu.csdms.models.Sedflux3D._ctor) */

  /* initialize user elements of dptr here */
  /* Insert-UserCode-Here {edu.csdms.models.Sedflux3D._ctor} (constructor method) */
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
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.Sedflux3D._ctor) */
  }
}

/*
 * Special Class constructor called when the user wants to wrap his own private data.
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_Sedflux3D__ctor2"

#ifdef __cplusplus
extern "C"
#endif
void
impl_edu_csdms_models_Sedflux3D__ctor2(
  /* in */ edu_csdms_models_Sedflux3D self,
  /* in */ void* private_data,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.Sedflux3D._ctor2) */
    /* Insert-Code-Here {edu.csdms.models.Sedflux3D._ctor2} (special 
      constructor method) */
    /*
     * This method has not been implemented
     */

    /* DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.Sedflux3D._ctor2) */
    SIDL_THROW(*_ex, sidl_NotImplementedException,     "This method has not been implemented");
  EXIT:;
    /* DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.Sedflux3D._ctor2) */
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.Sedflux3D._ctor2) */
  }
}
/*
 * Class destructor called when the class is deleted.
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_Sedflux3D__dtor"

#ifdef __cplusplus
extern "C"
#endif
void
impl_edu_csdms_models_Sedflux3D__dtor(
  /* in */ edu_csdms_models_Sedflux3D self,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.Sedflux3D._dtor) */

  /* deinitialize user elements of dptr here */
  /* Insert-UserCode-Here {edu.csdms.models.Sedflux3D._dtor} (destructor method) */
    
  /* bocca-default-code. User may edit or delete.begin(edu.csdms.models.Sedflux3D._dtor) */
   struct edu_csdms_models_Sedflux3D__data *dptr = 
                edu_csdms_models_Sedflux3D__get_data(self);
   if (dptr) {
      free(dptr);
      edu_csdms_models_Sedflux3D__set_data(self, NULL);
   }
   #if _BOCCA_CTOR_MESSAGES
     BOCCA_FPRINTF(stderr, "DTOR edu.csdms.models.Sedflux3D: %s freed data %p in self %p\n", 
                   __FUNC__, dptr, self);
   #endif /* _BOCCA_CTOR_MESSAGES */
  /* bocca-default-code. User may edit or delete.end(edu.csdms.models.Sedflux3D._dtor) */

    /* DO-NOT-DELETE splicer.end(edu.csdms.models.Sedflux3D._dtor) */
  }
}

/*
 * Method:  boccaSetServices[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_Sedflux3D_boccaSetServices"

#ifdef __cplusplus
extern "C"
#endif
void
impl_edu_csdms_models_Sedflux3D_boccaSetServices(
  /* in */ edu_csdms_models_Sedflux3D self,
  /* in */ gov_cca_Services services,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.Sedflux3D.boccaSetServices) */
/* DO-NOT-EDIT-BOCCA */
/* Bocca generated code. bocca.protected.begin(edu.csdms.models.Sedflux3D.boccaSetServices) */
   struct edu_csdms_models_Sedflux3D__data *pd;
   gov_cca_ComponentRelease   compRelease = NULL;
   sidl_BaseInterface throwaway_excpt = NULL; /* for use in EXIT block only. */
   int dr_services=0; /* assume releaseServices will not be called if setServices fails */
   

   gov_cca_TypeMap typeMap = NULL;
   gov_cca_Port port = NULL;

   pd = edu_csdms_models_Sedflux3D__get_data(self);
   if (pd == NULL) {
     SIDL_THROW(*_ex, sidl_SIDLException, 
          "NULL data pointer in edu.csdms.models.Sedflux3D boccaSetServices");
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

/* Bocca generated code. bocca.protected.end(edu.csdms.models.Sedflux3D.boccaSetServices) */
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.Sedflux3D.boccaSetServices) */
  }
}

/*
 * Method:  boccaReleaseServices[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_Sedflux3D_boccaReleaseServices"

#ifdef __cplusplus
extern "C"
#endif
void
impl_edu_csdms_models_Sedflux3D_boccaReleaseServices(
  /* in */ edu_csdms_models_Sedflux3D self,
  /* in */ gov_cca_Services services,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.Sedflux3D.boccaReleaseServices) */
/* DO-NOT-EDIT-BOCCA */
/*  Bocca generated code. bocca.protected.begin(edu.csdms.models.Sedflux3D.boccaReleaseServices) */

   struct edu_csdms_models_Sedflux3D__data *pd;
   sidl_BaseInterface throwaway_excpt = NULL;
   sidl_BaseInterface dummy_excpt = NULL;
   char *errMsg=NULL;
   /* our policy is to trap and optionally print all port-related messages,
      attempting to eliminate all ports. */


   /* UN-Provide a gov.cca.ports.GoPort port with port name Run */
   gov_cca_Services_removeProvidesPort(services, "Run", 
                                       &throwaway_excpt);
   errMsg = "Error: Could not removeProvidesPort(\"Run\")";
   edu_csdms_models_Sedflux3D_checkException(self, throwaway_excpt, errMsg, FALSE, 
                                   &dummy_excpt);

   /* UN-Provide a edu.csdms.ports.CMIPort port with port name SubaqueousDelta */
   gov_cca_Services_removeProvidesPort(services, "SubaqueousDelta", 
                                       &throwaway_excpt);
   errMsg = "Error: Could not removeProvidesPort(\"SubaqueousDelta\")";
   edu_csdms_models_Sedflux3D_checkException(self, throwaway_excpt, errMsg, FALSE, 
                                   &dummy_excpt);

  /* Un-Register a use port of type gov.cca.ports.ParameterPortFactory with port name ppf */  
   gov_cca_Services_unregisterUsesPort(services, "ppf", 
                                       &throwaway_excpt);
   errMsg= "Error: Could not unregisterUsesPort(\"ppf\")";
   edu_csdms_models_Sedflux3D_checkException(self, throwaway_excpt, errMsg, FALSE, 
                                   &dummy_excpt);

  /* Un-Register a use port of type edu.csdms.ports.CMIPort with port name SubaerialDelta */  
   gov_cca_Services_unregisterUsesPort(services, "SubaerialDelta", 
                                       &throwaway_excpt);
   errMsg= "Error: Could not unregisterUsesPort(\"SubaerialDelta\")";
   edu_csdms_models_Sedflux3D_checkException(self, throwaway_excpt, errMsg, FALSE, 
                                   &dummy_excpt);

   services = NULL;
   pd = edu_csdms_models_Sedflux3D__get_data(self);
   if (pd == NULL) {
     SIDL_THROW(*_ex, sidl_SIDLException, 
        "NULL data pointer in edu.csdms.models.Sedflux3D boccaSetServices");
   }
   gov_cca_Services_deleteRef(pd->d_services, _ex); 
   SIDL_CHECK(*_ex);
   pd->d_services = NULL;
   return;

EXIT:;
   return;
/*  Bocca generated code. bocca.protected.end(edu.csdms.models.Sedflux3D.boccaReleaseServices) */
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.Sedflux3D.boccaReleaseServices) */
  }
}

/*
 * Method:  checkException[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_Sedflux3D_checkException"

#ifdef __cplusplus
extern "C"
#endif
void
impl_edu_csdms_models_Sedflux3D_checkException(
  /* in */ edu_csdms_models_Sedflux3D self,
  /* in */ sidl_BaseInterface excpt,
  /* in */ const char* msg,
  /* in */ sidl_bool fatal,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.Sedflux3D.checkException) */
/* DO-NOT-EDIT-BOCCA */
/*  Bocca generated code. bocca.protected.begin(edu.csdms.models.Sedflux3D.checkException) */
#ifdef _BOCCA_STDERR
   sidl_BaseException be = NULL;
   char *etext=NULL;
#endif
   
   if (SIDL_CATCH(excpt, "sidl.BaseException")) {
#ifdef _BOCCA_STDERR
      be  = sidl_BaseException__cast(excpt, _ex); SIDL_CLEAR(*_ex);
      etext = sidl_BaseException_getNote(be, _ex); SIDL_CLEAR(*_ex);
      fprintf(stderr, "edu.csdms.models.Sedflux3D: %s \n%s\n", msg,etext);
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
   
/*  Bocca generated code. bocca.protected.end(edu.csdms.models.Sedflux3D.checkException) */
    
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.Sedflux3D.checkException) */
  }
}

/*
 *  This function should never be called, but helps babel generate better code. 
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_Sedflux3D_boccaForceUsePortInclude"

#ifdef __cplusplus
extern "C"
#endif
void
impl_edu_csdms_models_Sedflux3D_boccaForceUsePortInclude(
  /* in */ edu_csdms_models_Sedflux3D self,
  /* in */ gov_cca_ports_ParameterPortFactory dummy0,
  /* in */ edu_csdms_ports_CMIPort dummy1,
  /* in */ edu_csdms_tools_IRFPortQueue dummy2,
  /* in */ edu_csdms_tools_Verbose dummy3,
  /* in */ edu_csdms_openmi_ValueSet dummy4,
  /* in */ edu_csdms_tools_TemplateFiles dummy5,
  /* in */ edu_csdms_openmi_ScalarSet dummy6,
  /* in */ edu_csdms_tools_ConfigDialog dummy7,
  /* in */ edu_csdms_openmi_IScalarSet dummy8,
  /* in */ edu_csdms_tools_PrintQueue dummy9,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.Sedflux3D.boccaForceUsePortInclude) */
/* DO-NOT-EDIT-BOCCA */
  /* Bocca generated code. bocca.protected.begin(edu.csdms.models.Sedflux3D.boccaForceUsePortInclude) */
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
    (void)dummy9;

  /* Bocca generated code. bocca.protected.end(edu.csdms.models.Sedflux3D.boccaForceUsePortInclude) */
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.Sedflux3D.boccaForceUsePortInclude) */
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
#define __FUNC__ "impl_edu_csdms_models_Sedflux3D_setServices"

#ifdef __cplusplus
extern "C"
#endif
void
impl_edu_csdms_models_Sedflux3D_setServices(
  /* in */ edu_csdms_models_Sedflux3D self,
  /* in */ gov_cca_Services services,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.Sedflux3D.setServices) */

  /*  Insert-UserDecl-Here {edu.csdms.models.Sedflux3D.setServices} (setServices method) */
    struct edu_csdms_models_Sedflux3D__data *pd;
    gov_cca_ports_ParameterPortFactory ppf;
    gov_cca_Port gcp;

  /* bocca-default-code. User may edit or delete.begin(edu.csdms.models.Sedflux3D.setServices) */
    impl_edu_csdms_models_Sedflux3D_boccaSetServices(self, services, _ex); SIDL_CHECK(*_ex);
  /* bocca-default-code. User may edit or delete.end(edu.csdms.models.Sedflux3D.setServices) */
  
  /*  Insert-UserCode-Here {edu.csdms.models.Sedflux3D.setServices} (setServices method) */
    pd = edu_csdms_models_Sedflux3D__get_data (self);
    pd->userinput = gov_cca_Services_createTypeMap(services, _ex);
    gcp = gov_cca_Services_getPort(services, "ppf", _ex);
    if (!gcp)
      fprintf (stderr,"ERROR: gcp is NULL.\n");

    ppf = gov_cca_ports_ParameterPortFactory__cast (gcp, _ex);
    if (!ppf)
      fprintf (stderr,"ERROR: ppf is NULL.\n");

    gov_cca_ports_ParameterPortFactory_initParameterData (ppf,
      &(pd->userinput), "Configure", _ex);

    fprintf (stderr, "%s: Set batch title.", CMI_COMPONENT_NAME);
    gov_cca_ports_ParameterPortFactory_setBatchTitle (ppf,
      pd->userinput, CMI_COMPONENT_NAME" Parameters", _ex);

    fprintf (stderr, "%s: Create config dialog.", CMI_COMPONENT_NAME);
    {
      edu_csdms_tools_ConfigDialog dialog;

      dialog = edu_csdms_tools_ConfigDialog__create (_ex);

      fprintf (stderr, "%s: %s: Create config dialog.", CMI_COMPONENT_NAME, CMI_CONFIG_DIALOG_XML_FILE);
      edu_csdms_tools_ConfigDialog_read (dialog,
          CMI_CONFIG_DIALOG_XML_FILE, _ex);
      edu_csdms_tools_ConfigDialog_construct (dialog, ppf, pd->userinput, _ex);
    }
    fprintf (stderr, "%s: Created.", CMI_COMPONENT_NAME);

    gov_cca_ports_ParameterPortFactory_addParameterPort (ppf,
      pd->userinput, services, _ex);
    gov_cca_Services_releasePort (services, "ppf", _ex);

EXIT:;
    /* Insert additional exception cleanup here if needed. */
    return;

    /* DO-NOT-DELETE splicer.end(edu.csdms.models.Sedflux3D.setServices) */
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
#define __FUNC__ "impl_edu_csdms_models_Sedflux3D_releaseServices"

#ifdef __cplusplus
extern "C"
#endif
void
impl_edu_csdms_models_Sedflux3D_releaseServices(
  /* in */ edu_csdms_models_Sedflux3D self,
  /* in */ gov_cca_Services services,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.Sedflux3D.releaseServices) */

  /*  Insert-UserCode-Here {edu.csdms.models.Sedflux3D.releaseServices} (releaseServices method) */

  /* bocca-default-code. User may edit or delete.begin(edu.csdms.models.Sedflux3D.releaseServices) */
    impl_edu_csdms_models_Sedflux3D_boccaReleaseServices(self, services, _ex); SIDL_CHECK(*_ex);
    return;
  /* bocca-default-code. User may edit or delete.end(edu.csdms.models.Sedflux3D.releaseServices) */

EXIT:;
    /* Insert additional exception cleanup here if needed. */
    return;

    /* DO-NOT-DELETE splicer.end(edu.csdms.models.Sedflux3D.releaseServices) */
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
#define __FUNC__ "impl_edu_csdms_models_Sedflux3D_go"

#ifdef __cplusplus
extern "C"
#endif
int32_t
impl_edu_csdms_models_Sedflux3D_go(
  /* in */ edu_csdms_models_Sedflux3D self,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.Sedflux3D.go) */
    int bocca_status = 0;
    struct edu_csdms_models_Sedflux3D__data *pd =
      edu_csdms_models_Sedflux3D__get_data (self);

    pd->is_driver = TRUE;
    
    //PRINT(1, "Initialize sedflux");
    fprintf (stderr, "Initialize sedflux\n"); fflush (stderr);
    edu_csdms_models_Sedflux3D_CMI_initialize (self, NULL, _ex);

    fprintf (stderr, "Run sedflux\n"); fflush (stderr);
    //PRINT (1, "Run sedflux");
    edu_csdms_models_Sedflux3D_CMI_run (self, -1, _ex);

    fprintf (stderr, "Finalize sedflux\n"); fflush (stderr);
    //PRINT (1, "Finalize sedflux");
    edu_csdms_models_Sedflux3D_CMI_finalize (self, _ex);
EXIT:
    bocca_status = 2;
    edu_csdms_models_Sedflux3D_finalize (self, _ex);
    return bocca_status;
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.Sedflux3D.go) */
  }
}

/*
 * Method:  CMI_initialize[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_Sedflux3D_CMI_initialize"

#ifdef __cplusplus
extern "C"
#endif
sidl_bool
impl_edu_csdms_models_Sedflux3D_CMI_initialize(
  /* in */ edu_csdms_models_Sedflux3D self,
  /* in */ const char* config_file,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.Sedflux3D.CMI_initialize) */
    struct edu_csdms_models_Sedflux3D__data *this =
             edu_csdms_models_Sedflux3D__get_data (self);

    fprintf (stderr, "%s: Initializing.\n", CMI_COMPONENT_NAME);

    if (this->status >= CMI_STATUS_INITIALIZING)
      return TRUE;
    else
      this->status = CMI_STATUS_INITIALIZING;

    fprintf (stderr, "%s: Create port queue.\n", CMI_COMPONENT_NAME);
    { // Create port queue.
      edu_csdms_ports_CMIPort port = edu_csdms_ports_CMIPort__cast (self, _ex);

      this->ports = edu_csdms_tools_IRFPortQueue__create (_ex);
      fprintf (stderr, "%s: Initialize port queue.\n", CMI_COMPONENT_NAME);
      edu_csdms_tools_IRFPortQueue_initialize_cmi (this->ports, this->d_services, port, _ex);
      fprintf (stderr, "%s: %s: Add ports to queue.\n", CMI_COMPONENT_NAME, CMI_PORT_NAMES);
      edu_csdms_tools_IRFPortQueue_add_ports (this->ports, CMI_PORT_NAMES, _ex);
      fprintf (stderr, "%s: Connect ports.\n", CMI_COMPONENT_NAME);
      edu_csdms_tools_IRFPortQueue_connect_cmi_ports (this->ports, _ex);
    }

    fprintf (stderr, "%s: Open log.\n", CMI_COMPONENT_NAME);
    if (!this->log)
    {
      this->log = edu_csdms_tools_Verbose__create (_ex);
      edu_csdms_tools_Verbose_set_log_level (this->log, 1, _ex);
    }

    fprintf (stderr, "%s: Read parameters.\n", CMI_COMPONENT_NAME);
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
          "/Sedflux3D/Input/Var/InputDir", "GUI", _ex);
      if (g_ascii_strcasecmp (val, "GUI")==0)
        gov_cca_TypeMap_putString (this->userinput,
            "/Sedflux3D/Input/Var/InputDir", ".", _ex);

      val = gov_cca_TypeMap_getString (this->userinput,
          "/Sedflux3D/Input/Var/InitializationFile", "GUI", _ex);
      if (g_ascii_strcasecmp (val, "GUI")==0)
        gov_cca_TypeMap_putString (this->userinput,
            "/Sedflux3D/Input/Var/InitializationFile",
            "${SimulationName}_init.kvf", _ex);

      val = gov_cca_TypeMap_getString (this->userinput,
          "/Sedflux3D/Input/Var/RiverFile", "GUI", _ex);
      if (g_ascii_strcasecmp (val, "GUI")==0)
        gov_cca_TypeMap_putString (this->userinput,
            "/Sedflux3D/Input/Var/RiverFile",
            "${SimulationName}_river.kvf", _ex);

      val = gov_cca_TypeMap_getString (this->userinput,
          "/Sedflux3D/Input/Var/SedimentFile", "GUI", _ex);
      if (g_ascii_strcasecmp (val, "GUI")==0)
        gov_cca_TypeMap_putString (this->userinput,
            "/Sedflux3D/Input/Var/SedimentFile",
            "${SimulationName}_sediment.kvf", _ex);

      gov_cca_TypeMap_putString (this->userinput,
          "/Sedflux3D/Input/Var/ProcessFile",
          "${SimulationName}_process.kvf", _ex);

      edu_csdms_tools_TemplateFiles_substitute (template,
          this->userinput, "/"CMI_COMPONENT_NAME"/Input/Var/", ".",
          _ex);

      val = gov_cca_TypeMap_getString (this->userinput,
          "/Sedflux3D/Input/Var/SimulationName", CMI_COMPONENT_NAME, _ex);
      gov_cca_TypeMap_putString (this->userinput,
          "/Sedflux3D/SimulationName", val, _ex);
    }
/*
This is what Sedflux3D.txt will look like,
"sedflux -3 --silent --no-signals --init-file=${INIT_FILE} --input-dir=${INPUT_DIR} --working-dir=${WORKING_DIR}"
*/
    fprintf (stderr, "%s: BMI initialize\n", CMI_COMPONENT_NAME);
    this->state = BMI_Initialize (CMI_COMPONENT_NAME"_command_line.txt");

    fprintf (stderr, "%s: Set up PrintQueue.\n", CMI_COMPONENT_NAME);
    PRINT (2, "Set up PrintQueue");
    {
      edu_csdms_ports_CMIPort port = edu_csdms_ports_CMIPort__cast (self, _ex);
      fprintf (stderr, "Create PrintQueue\n"); fflush (stderr);
      this->print_queue = edu_csdms_tools_PrintQueue__create (_ex);
      fprintf (stderr, "Initialize PrintQueue\n"); fflush (stderr);
      edu_csdms_tools_PrintQueue_initialize_cmi (this->print_queue,
          this->userinput, "/"CMI_COMPONENT_NAME, port, _ex);
      fprintf (stderr, "Add file to PrintQueue\n"); fflush (stderr);
      edu_csdms_tools_PrintQueue_add_files_from_list (this->print_queue,
          CMI_OUTPUT_FILE_NS, _ex);
      fprintf (stderr, "Created PrintQueue\n"); fflush (stderr);
    }

    fprintf (stderr, "%s: Initialize uses ports.\n", CMI_COMPONENT_NAME);
    PRINT (2, "Initialize model uses ports");
    edu_csdms_tools_IRFPortQueue_initialize_ports (this->ports, NULL, _ex);

#if CMI_TURN_OFF_MAPPING
    fprintf (stderr, "%s: Forgetting mappers.\n", CMI_COMPONENT_NAME);
#else
    fprintf (stderr, "%s: Set up mappers.\n", CMI_COMPONENT_NAME);
    edu_csdms_tools_IRFPortQueue_add_mappers (this->ports, CMI_MAPPERS, _ex);
#endif
    //fprintf (stderr, "%s: Run mappers.\n", CMI_COMPONENT_NAME);
    //edu_csdms_tools_IRFPortQueue_run_mappers (this->ports, _ex);

    fprintf (stderr, "%s: Initialized.\n", CMI_COMPONENT_NAME);
    this->status = CMI_STATUS_INITIALIZED;
    return TRUE;
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.Sedflux3D.CMI_initialize) */
  }
}

/*
 * Method:  CMI_run_for[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_Sedflux3D_CMI_run_for"

#ifdef __cplusplus
extern "C"
#endif
sidl_bool
impl_edu_csdms_models_Sedflux3D_CMI_run_for(
  /* in */ edu_csdms_models_Sedflux3D self,
  /* in */ double time_interval,
  /* in */ const char* time_units,
  /* in */ const char* stop_rule,
  /* in array<double> */ struct sidl_double__array* stop_vars,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.Sedflux3D.CMI_run_for) */
    /* Insert-Code-Here {edu.csdms.models.Sedflux3D.CMI_run_for} (CMI_run_for 
      method) */
    /*
     * This method has not been implemented
     */

    /* DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.Sedflux3D.CMI_run_for) */
    SIDL_THROW(*_ex, sidl_NotImplementedException,     "This method has not been implemented");
  EXIT:;
    /* DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.Sedflux3D.CMI_run_for) */
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.Sedflux3D.CMI_run_for) */
  }
}

/*
 * Method:  CMI_run[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_Sedflux3D_CMI_run"

#ifdef __cplusplus
extern "C"
#endif
sidl_bool
impl_edu_csdms_models_Sedflux3D_CMI_run(
  /* in */ edu_csdms_models_Sedflux3D self,
  /* in */ double time_interval,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.Sedflux3D.CMI_run) */
    struct edu_csdms_models_Sedflux3D__data *this =
             edu_csdms_models_Sedflux3D__get_data (self);

    fprintf (stderr, "%s: Status is %s.\n", CMI_COMPONENT_NAME,
        edu_csdms_models_Sedflux3D_CMI_get_status (self, _ex));

    if (this->status == CMI_STATUS_UPDATING)
      return TRUE;
    else
      this->status = CMI_STATUS_UPDATING;

    if (time_interval<0)
      time_interval = BMI_Get_end_time (this->state);

    //if (time_interval>BMI_Get_end_time (this->state))
    //  time_interval = BMI_Get_end_time (this->state);

    fprintf (stderr, "%s: Updating until %f.\n", CMI_COMPONENT_NAME, time_interval);
    {
      double print_time = edu_csdms_tools_PrintQueue_next_print_time (
          this->print_queue, _ex);
      //double stop_time = time_interval;
      fprintf (stderr, "%s: Next print time is %f.\n", CMI_COMPONENT_NAME, print_time);
      while (print_time>0 && print_time<time_interval)
      {
        this->status = CMI_STATUS_UPDATED;
        fprintf (stderr, "%s: Running until print time %f.\n", CMI_COMPONENT_NAME, print_time);
        edu_csdms_models_Sedflux3D_CMI_run (self, print_time, _ex);
        edu_csdms_tools_PrintQueue_print_all (this->print_queue, print_time, _ex);
        print_time = edu_csdms_tools_PrintQueue_next_print_time (
            this->print_queue, _ex);
        fprintf (stderr, "%s: Print time is now %f.\n", CMI_COMPONENT_NAME, print_time);
      }
    }

    {
      double now = BMI_Get_current_time (this->state);
      const double port_queue_dt = CMI_PORT_QUEUE_DT;
      double t = now + port_queue_dt;

      fprintf (stderr, "%s: Updating ports until %f.\n", CMI_COMPONENT_NAME, time_interval);
      for (; t<time_interval; t+=port_queue_dt)
      {
        //edu_csdms_tools_PrintQueue_print_all (this->print_queue,
        //    BMI_Get_current_time (this->state), _ex);

        //fprintf (stderr, "%s: Forgetting ports for now.\n", CMI_COMPONENT_NAME);
        fprintf (stderr, "%s: Updating ports until %f.\n", CMI_COMPONENT_NAME, now);
        edu_csdms_tools_IRFPortQueue_run_ports (this->ports, now, _ex);
#if CMI_TURN_OFF_MAPPING
        fprintf (stderr, "%s: Forgetting mappers.\n", CMI_COMPONENT_NAME);
#else
        fprintf (stderr, "%s: Run mappers.\n", CMI_COMPONENT_NAME);
        edu_csdms_tools_IRFPortQueue_run_mappers (this->ports, _ex);
#endif

        fprintf (stderr, "%s: Updating myself until %f.\n", CMI_COMPONENT_NAME, t);
        BMI_Update_until (this->state, t);
        now = BMI_Get_current_time (this->state);
      }

      if (t>time_interval)
      {
        //edu_csdms_tools_PrintQueue_print_all (this->print_queue,
        //    BMI_Get_current_time (this->state), _ex);

        fprintf (stderr, "%s: Updating ports until %f.\n", CMI_COMPONENT_NAME, now);
        edu_csdms_tools_IRFPortQueue_run_ports (this->ports, now, _ex);

#if CMI_TURN_OFF_MAPPING
        fprintf (stderr, "%s: Forgetting mappers.\n", CMI_COMPONENT_NAME);
#else
        fprintf (stderr, "%s: Run mappers.\n", CMI_COMPONENT_NAME);
        edu_csdms_tools_IRFPortQueue_run_mappers (this->ports, _ex);
#endif

        BMI_Update_until (this->state, time_interval);
      }
    }

    fprintf (stderr, "%s: Updated.\n", CMI_COMPONENT_NAME);
    this->status = CMI_STATUS_UPDATED;

    return TRUE;
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.Sedflux3D.CMI_run) */
  }
}

/*
 * Method:  CMI_finalize[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_Sedflux3D_CMI_finalize"

#ifdef __cplusplus
extern "C"
#endif
sidl_bool
impl_edu_csdms_models_Sedflux3D_CMI_finalize(
  /* in */ edu_csdms_models_Sedflux3D self,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.Sedflux3D.CMI_finalize) */
    struct edu_csdms_models_Sedflux3D__data *this =
             edu_csdms_models_Sedflux3D__get_data (self);

    this->status = CMI_STATUS_FINALIZING;

    {
      BMI_Finalize (this->state);

      this->is_driver = FALSE;
      this->state = NULL;

      edu_csdms_tools_PrintQueue_close (this->print_queue, _ex);
    }

    this->status = CMI_STATUS_FINALIZED;

    return TRUE;
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.Sedflux3D.CMI_finalize) */
  }
}

/*
 * Method:  CMI_run_model[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_Sedflux3D_CMI_run_model"

#ifdef __cplusplus
extern "C"
#endif
sidl_bool
impl_edu_csdms_models_Sedflux3D_CMI_run_model(
  /* in */ edu_csdms_models_Sedflux3D self,
  /* in */ const char* config_file,
  /* in */ const char* stop_rule,
  /* in */ double stop_var,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.Sedflux3D.CMI_run_model) */
    /* Insert-Code-Here {edu.csdms.models.Sedflux3D.CMI_run_model} (
      CMI_run_model method) */
    /*
     * This method has not been implemented
     */

    /* DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.Sedflux3D.CMI_run_model) */
    SIDL_THROW(*_ex, sidl_NotImplementedException,     "This method has not been implemented");
  EXIT:;
    /* DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.Sedflux3D.CMI_run_model) */
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.Sedflux3D.CMI_run_model) */
  }
}

/*
 * Method:  CMI_get_values[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_Sedflux3D_CMI_get_values"

#ifdef __cplusplus
extern "C"
#endif
struct sidl__array*
impl_edu_csdms_models_Sedflux3D_CMI_get_values(
  /* in */ edu_csdms_models_Sedflux3D self,
  /* in */ const char* long_var_name,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.Sedflux3D.CMI_get_values) */
    struct sidl__array* generic = NULL;

    {
      struct sidl_double__array* vals = NULL;
      struct edu_csdms_models_Sedflux3D__data *this =
        edu_csdms_models_Sedflux3D__get_data (self);

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
            //upper[i] = dimen[n_dims-i-1]-1;
          }
          //for (i=1, stride[0]=1; i<n_dims; i++)
          //  stride[i] = stride[i-1]*dimen[i-1];
          for (i=n_dims-2, stride[n_dims-1]=1; i>=0; i--)
            stride[i] = stride[i+1]*dimen[i+1];

          if (n_dims==2)
          {
            int i, i_0;
            fprintf (stderr, "%s: Getting values\n", CMI_COMPONENT_NAME);
            fprintf (stderr, "%s: Shape is %dx%d\n", CMI_COMPONENT_NAME,
                dimen[0], dimen[1]);
            fprintf (stderr, "%s: Stride is %dx%d\n", CMI_COMPONENT_NAME,
                stride[0], stride[1]);
            fflush (stderr);
            /*
            for (i_0=5*stride[1], i=i_0; i-i_0<dimen[0]; i+=stride[0])
            {
              data[i] = 100.;
              fprintf (stderr, "%s: Row 5, Col %d is %f \n", CMI_COMPONENT_NAME, i-i_0, data[i]);
              fflush (stderr);
            }
            for (i=5*stride[0]; i<dimen[1]*dimen[0]; i+=stride[1])
            {
              data[i] = 200.;
              fprintf (stderr, "%s: Row %d, Col 5 is %f\n", CMI_COMPONENT_NAME, i/stride[1], data[i]);
              fflush (stderr);
            }
            fprintf (stderr, "%s: Got values\n", CMI_COMPONENT_NAME);
            fflush (stderr);
            */
          }
/*
          {
            int i;
            fprintf (stderr, "\n+++\n");
            for (i=0; i<dimen[1]*dimen[0]; i++) {
              //data[i] = i;
              fprintf (stderr, "%f\n", data[i]);
            }
            fprintf (stderr, "+++\n");
          }
*/
          //vals = sidl_double__array_borrow (data, n_dims, lower, upper,
          //    stride);
          {
            const int _n_dims = 1;
            const int _lower[1] = {0};
            const int _upper[1] = {dimen[0]*dimen[1]-1};
            const int _stride[1] = {1};

            vals = sidl_double__array_borrow (data, _n_dims, _lower,
                _upper, _stride);
          }
/*
          {
            int i, j;
            fprintf (stderr, "\n+++\n");
            for (i=lower[0]; i<=upper[0]; i++)
              for (j=lower[1]; j<=upper[1]; j++)
                fprintf (stderr, "%f\n", sidl_double__array_get2 (vals,
                      i, j));
            fprintf (stderr, "+++\n");
          }
*/

          free (stride);
          free (upper);
          free (lower);
        }

        //free (dimen);
      }
      generic = (struct sidl__array*)vals;
    }
    return generic;
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.Sedflux3D.CMI_get_values) */
  }
}

/*
 * Method:  CMI_set_values[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_Sedflux3D_CMI_set_values"

#ifdef __cplusplus
extern "C"
#endif
void
impl_edu_csdms_models_Sedflux3D_CMI_set_values(
  /* in */ edu_csdms_models_Sedflux3D self,
  /* in */ const char* long_var_name,
  /* in array<> */ struct sidl__array* in_values,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.Sedflux3D.CMI_set_values) */
    /* Insert-Code-Here {edu.csdms.models.Sedflux3D.CMI_set_values} (
      CMI_set_values method) */
    /*
     * This method has not been implemented
     */

    /* DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.Sedflux3D.CMI_set_values) */
    SIDL_THROW(*_ex, sidl_NotImplementedException,     "This method has not been implemented");
  EXIT:;
    /* DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.Sedflux3D.CMI_set_values) */
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.Sedflux3D.CMI_set_values) */
  }
}

/*
 * Method:  CMI_get_status[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_Sedflux3D_CMI_get_status"

#ifdef __cplusplus
extern "C"
#endif
char*
impl_edu_csdms_models_Sedflux3D_CMI_get_status(
  /* in */ edu_csdms_models_Sedflux3D self,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.Sedflux3D.CMI_get_status) */
    struct edu_csdms_models_Sedflux3D__data *this =
             edu_csdms_models_Sedflux3D__get_data (self);

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
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.Sedflux3D.CMI_get_status) */
  }
}

/*
 * Method:  CMI_get_component_name[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_Sedflux3D_CMI_get_component_name"

#ifdef __cplusplus
extern "C"
#endif
char*
impl_edu_csdms_models_Sedflux3D_CMI_get_component_name(
  /* in */ edu_csdms_models_Sedflux3D self,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.Sedflux3D.CMI_get_component_name) */
    /* Insert-Code-Here {edu.csdms.models.Sedflux3D.CMI_get_component_name} (
      CMI_get_component_name method) */
    /*
     * This method has not been implemented
     */

    /* DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.Sedflux3D.CMI_get_component_name) */
    SIDL_THROW(*_ex, sidl_NotImplementedException,     "This method has not been implemented");
  EXIT:;
    /* DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.Sedflux3D.CMI_get_component_name) */
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.Sedflux3D.CMI_get_component_name) */
  }
}

/*
 * Method:  CMI_get_input_item_list[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_Sedflux3D_CMI_get_input_item_list"

#ifdef __cplusplus
extern "C"
#endif
struct sidl_string__array*
impl_edu_csdms_models_Sedflux3D_CMI_get_input_item_list(
  /* in */ edu_csdms_models_Sedflux3D self,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.Sedflux3D.CMI_get_input_item_list) */
    /* Insert-Code-Here {edu.csdms.models.Sedflux3D.CMI_get_input_item_list} (
      CMI_get_input_item_list method) */
    /*
     * This method has not been implemented
     */

    /* DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.Sedflux3D.CMI_get_input_item_list) */
    SIDL_THROW(*_ex, sidl_NotImplementedException,     "This method has not been implemented");
  EXIT:;
    /* DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.Sedflux3D.CMI_get_input_item_list) */
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.Sedflux3D.CMI_get_input_item_list) */
  }
}

/*
 * Method:  CMI_get_output_item_list[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_Sedflux3D_CMI_get_output_item_list"

#ifdef __cplusplus
extern "C"
#endif
struct sidl_string__array*
impl_edu_csdms_models_Sedflux3D_CMI_get_output_item_list(
  /* in */ edu_csdms_models_Sedflux3D self,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.Sedflux3D.CMI_get_output_item_list) */
    /* Insert-Code-Here {edu.csdms.models.Sedflux3D.CMI_get_output_item_list} (
      CMI_get_output_item_list method) */
    /*
     * This method has not been implemented
     */

    /* DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.Sedflux3D.CMI_get_output_item_list) */
    SIDL_THROW(*_ex, sidl_NotImplementedException,     "This method has not been implemented");
  EXIT:;
    /* DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.Sedflux3D.CMI_get_output_item_list) */
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.Sedflux3D.CMI_get_output_item_list) */
  }
}

/*
 * Method:  CMI_get_required_ports[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_Sedflux3D_CMI_get_required_ports"

#ifdef __cplusplus
extern "C"
#endif
void
impl_edu_csdms_models_Sedflux3D_CMI_get_required_ports(
  /* in */ edu_csdms_models_Sedflux3D self,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.Sedflux3D.CMI_get_required_ports) */
    /* Insert-Code-Here {edu.csdms.models.Sedflux3D.CMI_get_required_ports} (
      CMI_get_required_ports method) */
    /*
     * This method has not been implemented
     */

    /* DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.Sedflux3D.CMI_get_required_ports) */
    SIDL_THROW(*_ex, sidl_NotImplementedException,     "This method has not been implemented");
  EXIT:;
    /* DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.Sedflux3D.CMI_get_required_ports) */
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.Sedflux3D.CMI_get_required_ports) */
  }
}

/*
 * Method:  CMI_release_required_ports[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_Sedflux3D_CMI_release_required_ports"

#ifdef __cplusplus
extern "C"
#endif
void
impl_edu_csdms_models_Sedflux3D_CMI_release_required_ports(
  /* in */ edu_csdms_models_Sedflux3D self,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.Sedflux3D.CMI_release_required_ports) */
    /* Insert-Code-Here {edu.csdms.models.Sedflux3D.CMI_release_required_ports} 
      (CMI_release_required_ports method) */
    /*
     * This method has not been implemented
     */

    /* DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.Sedflux3D.CMI_release_required_ports) */
    SIDL_THROW(*_ex, sidl_NotImplementedException,     "This method has not been implemented");
  EXIT:;
    /* DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.Sedflux3D.CMI_release_required_ports) */
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.Sedflux3D.CMI_release_required_ports) */
  }
}

/*
 * Method:  CMI_get_values_at_indices[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_Sedflux3D_CMI_get_values_at_indices"

#ifdef __cplusplus
extern "C"
#endif
struct sidl__array*
impl_edu_csdms_models_Sedflux3D_CMI_get_values_at_indices(
  /* in */ edu_csdms_models_Sedflux3D self,
  /* in */ const char* long_var_name,
  /* in array<int> */ struct sidl_int__array* indices,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.Sedflux3D.CMI_get_values_at_indices) */
    /* Insert-Code-Here {edu.csdms.models.Sedflux3D.CMI_get_values_at_indices} (
      CMI_get_values_at_indices method) */
    /*
     * This method has not been implemented
     */

    /* DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.Sedflux3D.CMI_get_values_at_indices) */
    SIDL_THROW(*_ex, sidl_NotImplementedException,     "This method has not been implemented");
  EXIT:;
    /* DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.Sedflux3D.CMI_get_values_at_indices) */
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.Sedflux3D.CMI_get_values_at_indices) */
  }
}

/*
 * Method:  CMI_set_values_at_indices[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_Sedflux3D_CMI_set_values_at_indices"

#ifdef __cplusplus
extern "C"
#endif
void
impl_edu_csdms_models_Sedflux3D_CMI_set_values_at_indices(
  /* in */ edu_csdms_models_Sedflux3D self,
  /* in */ const char* long_var_name,
  /* in array<int> */ struct sidl_int__array* indices,
  /* in array<> */ struct sidl__array* in_values,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.Sedflux3D.CMI_set_values_at_indices) */
    /* Insert-Code-Here {edu.csdms.models.Sedflux3D.CMI_set_values_at_indices} (
      CMI_set_values_at_indices method) */
    /*
     * This method has not been implemented
     */

    /* DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.Sedflux3D.CMI_set_values_at_indices) */
    SIDL_THROW(*_ex, sidl_NotImplementedException,     "This method has not been implemented");
  EXIT:;
    /* DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.Sedflux3D.CMI_set_values_at_indices) */
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.Sedflux3D.CMI_set_values_at_indices) */
  }
}

/*
 * Method:  CMI_print_traceback[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_Sedflux3D_CMI_print_traceback"

#ifdef __cplusplus
extern "C"
#endif
void
impl_edu_csdms_models_Sedflux3D_CMI_print_traceback(
  /* in */ edu_csdms_models_Sedflux3D self,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.Sedflux3D.CMI_print_traceback) */
    /* Insert-Code-Here {edu.csdms.models.Sedflux3D.CMI_print_traceback} (
      CMI_print_traceback method) */
    /*
     * This method has not been implemented
     */

    /* DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.Sedflux3D.CMI_print_traceback) */
    SIDL_THROW(*_ex, sidl_NotImplementedException,     "This method has not been implemented");
  EXIT:;
    /* DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.Sedflux3D.CMI_print_traceback) */
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.Sedflux3D.CMI_print_traceback) */
  }
}

/*
 * Method:  CMI_get_grid_spacing[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_Sedflux3D_CMI_get_grid_spacing"

#ifdef __cplusplus
extern "C"
#endif
struct sidl_double__array*
impl_edu_csdms_models_Sedflux3D_CMI_get_grid_spacing(
  /* in */ edu_csdms_models_Sedflux3D self,
  /* in */ const char* long_var_name,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.Sedflux3D.CMI_get_grid_spacing) */
    struct edu_csdms_models_Sedflux3D__data *this =
      edu_csdms_models_Sedflux3D__get_data (self);
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
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.Sedflux3D.CMI_get_grid_spacing) */
  }
}

/*
 * Method:  CMI_get_grid_lower_left[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_Sedflux3D_CMI_get_grid_lower_left"

#ifdef __cplusplus
extern "C"
#endif
struct sidl_double__array*
impl_edu_csdms_models_Sedflux3D_CMI_get_grid_lower_left(
  /* in */ edu_csdms_models_Sedflux3D self,
  /* in */ const char* long_var_name,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.Sedflux3D.CMI_get_grid_lower_left) */
    struct edu_csdms_models_Sedflux3D__data *this =
      edu_csdms_models_Sedflux3D__get_data (self);
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

    g_free (corner);
    return sidl_corner;
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.Sedflux3D.CMI_get_grid_lower_left) */
  }
}

/*
 * Method:  CMI_get_grid_shape[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_Sedflux3D_CMI_get_grid_shape"

#ifdef __cplusplus
extern "C"
#endif
struct sidl_int__array*
impl_edu_csdms_models_Sedflux3D_CMI_get_grid_shape(
  /* in */ edu_csdms_models_Sedflux3D self,
  /* in */ const char* long_var_name,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.Sedflux3D.CMI_get_grid_shape) */
    struct edu_csdms_models_Sedflux3D__data *this =
      edu_csdms_models_Sedflux3D__get_data (self);
    struct sidl_int__array* sidl_shape;
    int * shape;
    int n_dims;

    shape = BMI_Get_grid_shape (this->state, long_var_name, &n_dims);
    sidl_shape = sidl_int__array_create1d (n_dims);

    {
      int i;
      for (i=0; i<n_dims; i++)
        sidl_int__array_set1 (sidl_shape, i, shape[i]);
    }

    g_free (shape);
    return sidl_shape;
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.Sedflux3D.CMI_get_grid_shape) */
  }
}

/*
 * Method:  CMI_get_grid_x[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_Sedflux3D_CMI_get_grid_x"

#ifdef __cplusplus
extern "C"
#endif
struct sidl_double__array*
impl_edu_csdms_models_Sedflux3D_CMI_get_grid_x(
  /* in */ edu_csdms_models_Sedflux3D self,
  /* in */ const char* long_var_name,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.Sedflux3D.CMI_get_grid_x) */
    struct edu_csdms_models_Sedflux3D__data *this =
      edu_csdms_models_Sedflux3D__get_data (self);
    struct sidl_double__array* vals = NULL;

    {
      int len;
      double * x = BMI_Get_grid_x (this->state, long_var_name, &len);
      int lower[1] = {0};
      int upper[1] = {len-1};
      int stride[1] = {1};
  
      {
        int i;
        for (i=lower[0]; i<=upper[0]; i++)
          fprintf (stderr, "%f (%d), ", x[i], i);
        fprintf (stderr, "\n---\n");
      }

      vals = sidl_double__array_borrow (x, 1, lower, upper, stride);
    }

    return vals;
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.Sedflux3D.CMI_get_grid_x) */
  }
}

/*
 * Method:  CMI_get_grid_y[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_Sedflux3D_CMI_get_grid_y"

#ifdef __cplusplus
extern "C"
#endif
struct sidl_double__array*
impl_edu_csdms_models_Sedflux3D_CMI_get_grid_y(
  /* in */ edu_csdms_models_Sedflux3D self,
  /* in */ const char* long_var_name,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.Sedflux3D.CMI_get_grid_y) */
    struct edu_csdms_models_Sedflux3D__data *this =
      edu_csdms_models_Sedflux3D__get_data (self);
    struct sidl_double__array* vals = NULL;

    {
      int len;
      double * y = BMI_Get_grid_y (this->state, long_var_name, &len);
      int lower[1] = {0};
      int upper[1] = {len-1};
      int stride[1] = {1};
  
      {
        int i;
        for (i=lower[0]; i<=upper[0]; i++)
          fprintf (stderr, "%f (%d), ", y[i], i);
        fprintf (stderr, "\n---\n");
      }
      vals = sidl_double__array_borrow (y, 1, lower, upper, stride);
    }

    return vals;
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.Sedflux3D.CMI_get_grid_y) */
  }
}

/*
 * Method:  CMI_get_grid_z[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_Sedflux3D_CMI_get_grid_z"

#ifdef __cplusplus
extern "C"
#endif
struct sidl_double__array*
impl_edu_csdms_models_Sedflux3D_CMI_get_grid_z(
  /* in */ edu_csdms_models_Sedflux3D self,
  /* in */ const char* long_var_name,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.Sedflux3D.CMI_get_grid_z) */
    struct edu_csdms_models_Sedflux3D__data *this =
      edu_csdms_models_Sedflux3D__get_data (self);
    struct sidl_double__array* vals = NULL;

    {
      int len;
      double * z = BMI_Get_grid_z (this->state, long_var_name, &len);
      int lower[1] = {0};
      int upper[1] = {len-1};
      int stride[1] = {1};
  
      {
        int i;
        for (i=lower[0]; i<=upper[0]; i++)
          fprintf (stderr, "%f (%d), ", z[i], i);
        fprintf (stderr, "\n---\n");
      }
      vals = sidl_double__array_borrow (z, 1, lower, upper, stride);
    }

    return vals;
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.Sedflux3D.CMI_get_grid_z) */
  }
}

/*
 * Method:  get_grid_connectivity[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_Sedflux3D_get_grid_connectivity"

#ifdef __cplusplus
extern "C"
#endif
struct sidl_int__array*
impl_edu_csdms_models_Sedflux3D_get_grid_connectivity(
  /* in */ edu_csdms_models_Sedflux3D self,
  /* in */ const char* long_var_name,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.Sedflux3D.get_grid_connectivity) */
    struct edu_csdms_models_Sedflux3D__data *this =
      edu_csdms_models_Sedflux3D__get_data (self);
    struct sidl_int__array* vals = NULL;

    {
      int len;
      int * connectivity = BMI_Get_grid_connectivity (this->state,
          long_var_name, &len);
      int lower[1] = {0};
      int upper[1] = {len-1};
      int stride[1] = {1};
  
      vals = sidl_int__array_borrow (connectivity, 1, lower, upper, stride);
    }

    return vals;
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.Sedflux3D.get_grid_connectivity) */
  }
}

/*
 * Method:  get_grid_offset[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_Sedflux3D_get_grid_offset"

#ifdef __cplusplus
extern "C"
#endif
struct sidl_int__array*
impl_edu_csdms_models_Sedflux3D_get_grid_offset(
  /* in */ edu_csdms_models_Sedflux3D self,
  /* in */ const char* long_var_name,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.Sedflux3D.get_grid_offset) */
    struct edu_csdms_models_Sedflux3D__data *this =
      edu_csdms_models_Sedflux3D__get_data (self);
    struct sidl_int__array* vals = NULL;

    {
      int len;
      int * offset = BMI_Get_grid_offset (this->state,
          long_var_name, &len);
      int lower[1] = {0};
      int upper[1] = {len-1};
      int stride[1] = {1};
  
      vals = sidl_int__array_borrow (offset, 1, lower, upper, stride);
    }

    return vals;
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.Sedflux3D.get_grid_offset) */
  }
}

/*
 * Method:  initialize[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_Sedflux3D_initialize"

#ifdef __cplusplus
extern "C"
#endif
sidl_bool
impl_edu_csdms_models_Sedflux3D_initialize(
  /* in */ edu_csdms_models_Sedflux3D self,
  /* in */ const char* config_file,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.Sedflux3D.initialize) */
#if 0
/* old stuff */
    struct edu_csdms_models_Sedflux3D__data *pd =
             edu_csdms_models_Sedflux3D__get_data (self);

    if (!pd->log)
    {
      pd->log = edu_csdms_tools_Verbose__create (_ex);
      edu_csdms_tools_Verbose_set_log_level (pd->log, 1, _ex);
    }

    if (pd->state)
    {
      PRINT (1, "Model is already initialized")
      return;
    }

    { /* Read Ports configure tab */
      gchar* str = NULL;

      str = gov_cca_TypeMap_getString (pd->userinput,
              "/Sedflux/Port/WaterDischarge", "ON", _ex);
      if (g_ascii_strcasecmp (str, "ON")==0)
        pd->discharge_port_is_on = TRUE;
      else
        pd->discharge_port_is_on = FALSE;
      free (str);

      str = gov_cca_TypeMap_getString (pd->userinput,
              "/Sedflux/Port/SubaerialErosion", "ON", _ex);
      if (g_ascii_strcasecmp (str, "ON")==0)
        pd->subaerial_erosion_port_is_on = TRUE;
      else
        pd->subaerial_erosion_port_is_on = FALSE;
      free (str);
    }

    PRINT (2, "Create port queue");
    {
      pd->irf_ports = edu_csdms_tools_IRFPortQueue__create (_ex);
    
      PRINT (2, "Initialize port queue");
      edu_csdms_tools_IRFPortQueue_initialize (pd->irf_ports, pd->d_services,
        edu_csdms_ports_IRFPort__cast (self, _ex), _ex);

      PRINT (2, "Add port to queue");
      if (pd->discharge_port_is_on)
        edu_csdms_tools_IRFPortQueue_add_port (pd->irf_ports, "WaterDischarge",
                                               _ex);
      if (pd->subaerial_erosion_port_is_on)
        edu_csdms_tools_IRFPortQueue_add_port (pd->irf_ports, "SubaerialErosion",
                                               _ex);

      PRINT (2, "Connect ports in queue");
      edu_csdms_tools_IRFPortQueue_connect_ports (pd->irf_ports, _ex);
    }

    PRINT (2, "Initialize model");
    { /*  Initialize sedflux */
      gchar* site_prefix = sidl_string__array_get1 (properties, 0);
      gchar* case_prefix = sidl_string__array_get1 (properties, 1);
      gchar* prefix = NULL; // Path to input files.
      gchar* run_prefix = NULL; // File prefix for input/output files
      gchar* init_file = NULL; // Initialization file
      gchar* work_dir = NULL; // Path where run will be executed

      prefix = gov_cca_TypeMap_getString (pd->userinput,
                 "/Sedflux/Input/Dir", "/", _ex);
      run_prefix = g_strconcat (site_prefix, "_", case_prefix, NULL);
      init_file = g_strconcat (run_prefix, ".kvf", NULL);
      work_dir = g_get_current_dir ();

      if (g_ascii_strcasecmp (prefix,"GUI")==0)
      { /* Read parameters from the GUI, create input files */
        edu_csdms_tools_TemplateFiles template;
        gchar* to_file = NULL;

        template = edu_csdms_tools_TemplateFiles__create (_ex);

        to_file = g_strdup (init_file);
        edu_csdms_tools_TemplateFiles_add_file (template,
          "Sedflux3D_init.kvf.in", to_file, _ex);
        gov_cca_TypeMap_putString (pd->userinput,
                                  "/Sedflux/Input/Var/InitFile",
                                  g_strdup (to_file), _ex);
        g_free (to_file);

        to_file = g_strconcat (run_prefix, "_process.kvf", NULL);
        edu_csdms_tools_TemplateFiles_add_file (template, 
          "Sedflux3D_process.kvf.in", to_file, _ex);
        gov_cca_TypeMap_putString (pd->userinput,
                                  "/Sedflux/Input/Var/ProcessFile",
                                  g_strdup (to_file), _ex);
        g_free (to_file);

        to_file = g_strconcat (run_prefix, "_bathy.csv", NULL);
        edu_csdms_tools_TemplateFiles_add_file (template, 
          "Sedflux3D_bathy.csv.in", to_file, _ex);
        gov_cca_TypeMap_putString (pd->userinput,
                                  "/Sedflux/Input/Var/BathyFile",
                                  g_strdup (to_file), _ex);
        g_free (to_file);

        to_file = g_strconcat (run_prefix, "_river.kvf", NULL);
        edu_csdms_tools_TemplateFiles_add_file (template, 
          "Sedflux3D_river.kvf.in", to_file, _ex);
        gov_cca_TypeMap_putString (pd->userinput,
                                  "/Sedflux/Input/Var/RiverFile",
                                  g_strdup (to_file), _ex);
        g_free (to_file);

        to_file = g_strconcat (run_prefix, "_sediment.kvf", NULL);
        edu_csdms_tools_TemplateFiles_add_file (template, 
          "Sedflux3D_sediment.kvf.in", to_file, _ex);
        gov_cca_TypeMap_putString (pd->userinput,
                                  "/Sedflux/Input/Var/SedimentFile",
                                  g_strdup (to_file), _ex);
        g_free (to_file);

        edu_csdms_tools_TemplateFiles_substitute (template,
          pd->userinput, "/Sedflux/Input/Var/", work_dir, _ex);

        g_free (prefix);
        prefix = g_strdup (work_dir);
      }

      { /* Initialize the model */
        gint argc = 7;
        gchar* argv[7];
        int i;

        argv[0] = g_strdup ("sedflux");
        argv[1] = g_strdup ("-3");
        argv[2] = g_strdup ("--silent");
        argv[3] = g_strdup ("--no-signals");
        argv[4] = g_strconcat ("--init-file=", init_file, NULL);
        argv[5] = g_strconcat ("--input-dir=", prefix, NULL);
        argv[6] = g_strconcat ("--working-dir=", work_dir, NULL);

        pd->state = sedflux_initialize (argc, (const gchar**)argv);
        eh_require (pd->state);

        for (i=0; i<argc; i++)
          g_free (argv[i]);
      }

      g_free (work_dir);
      g_free (init_file);
      g_free (run_prefix);
      g_free (prefix);
    }

    PRINT (2, "Set up PrintQueue");
    {
      edu_csdms_ports_IRFPort port = edu_csdms_ports_IRFPort__cast (self, _ex);
      pd->print_queue = edu_csdms_tools_PrintQueue__create (_ex);
      edu_csdms_tools_PrintQueue_initialize (pd->print_queue, pd->userinput,
        "/Sedflux", port, _ex);
      edu_csdms_tools_PrintQueue_add_files (pd->print_queue, "Output/Grid",
                                            _ex);
      edu_csdms_tools_PrintQueue_add_files (pd->print_queue, "Output/Cube",
                                            _ex);
    }

    PRINT (2, "Initialize model uses ports");
    edu_csdms_tools_IRFPortQueue_initialize_ports (pd->irf_ports, properties,
                                                   _ex);

    if (pd->discharge_port_is_on)
    { /*  Create the WaterDischarge mapper */
      PRINT (2, "Initialize mapper for WaterDischarge");
      edu_csdms_tools_IRFPortQueue_initialize_mapper (pd->irf_ports,
                                                      "WaterDischarge", _ex);
    }

    if (pd->subaerial_erosion_port_is_on)
    { /*  Create the WaterDischarge mapper */
      PRINT (2, "Initialize mapper for SubaerialErosion");
      edu_csdms_tools_IRFPortQueue_initialize_mapper (pd->irf_ports,
                                                      "SubaerialErosion", _ex);
    }

    return;
#endif /* old stuff */
EXIT:;
    fprintf (stderr, "ERROR: There was an error initializing Sedflux3D\n");
    fflush (stderr);
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.Sedflux3D.initialize) */
  }
}

/*
 * Method:  run_for[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_Sedflux3D_run_for"

#ifdef __cplusplus
extern "C"
#endif
sidl_bool
impl_edu_csdms_models_Sedflux3D_run_for(
  /* in */ edu_csdms_models_Sedflux3D self,
  /* in */ double time_interval,
  /* in */ const char* time_units,
  /* in */ const char* stop_rule,
  /* in array<double> */ struct sidl_double__array* stop_vars,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.Sedflux3D.run_for) */
    /* Insert-Code-Here {edu.csdms.models.Sedflux3D.run_for} (run_for method) */
    /*
     * This method has not been implemented
     */

    /* DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.Sedflux3D.run_for) */
    SIDL_THROW(*_ex, sidl_NotImplementedException,     "This method has not been implemented");
  EXIT:;
    /* DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.Sedflux3D.run_for) */
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.Sedflux3D.run_for) */
  }
}

/*
 * Method:  finalize[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_Sedflux3D_finalize"

#ifdef __cplusplus
extern "C"
#endif
void
impl_edu_csdms_models_Sedflux3D_finalize(
  /* in */ edu_csdms_models_Sedflux3D self,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.Sedflux3D.finalize) */
    struct edu_csdms_models_Sedflux3D__data *pd =
      edu_csdms_models_Sedflux3D__get_data (self);

    if (pd->state)
    {
      PRINT (1, "Clean up");

      sedflux_finalize (pd->state);
      pd->state = NULL;

      edu_csdms_tools_PrintQueue_close (pd->print_queue, _ex);

      edu_csdms_tools_IRFPortQueue_finalize_ports (pd->irf_ports, _ex);
      edu_csdms_tools_IRFPortQueue_disconnect_ports (pd->irf_ports, _ex);

      PRINT (1, "Done finalize step");

      pd->log = NULL;
    }
    return;
EXIT:;
  return;
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.Sedflux3D.finalize) */
  }
}

/*
 * Method:  run_model[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_Sedflux3D_run_model"

#ifdef __cplusplus
extern "C"
#endif
sidl_bool
impl_edu_csdms_models_Sedflux3D_run_model(
  /* in */ edu_csdms_models_Sedflux3D self,
  /* in */ const char* config_file,
  /* in */ const char* stop_rule,
  /* in */ double stop_var,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.Sedflux3D.run_model) */
    /* Insert-Code-Here {edu.csdms.models.Sedflux3D.run_model} (run_model 
      method) */
    /*
     * This method has not been implemented
     */

    /* DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.Sedflux3D.run_model) */
    SIDL_THROW(*_ex, sidl_NotImplementedException,     "This method has not been implemented");
  EXIT:;
    /* DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.Sedflux3D.run_model) */
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.Sedflux3D.run_model) */
  }
}

/*
 * Method:  get_values[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_Sedflux3D_get_values"

#ifdef __cplusplus
extern "C"
#endif
struct sidl__array*
impl_edu_csdms_models_Sedflux3D_get_values(
  /* in */ edu_csdms_models_Sedflux3D self,
  /* in */ const char* long_var_name,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.Sedflux3D.get_values) */
    /* Insert-Code-Here {edu.csdms.models.Sedflux3D.get_values} (get_values 
      method) */
    /*
     * This method has not been implemented
     */

    /* DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.Sedflux3D.get_values) */
    SIDL_THROW(*_ex, sidl_NotImplementedException,     "This method has not been implemented");
  EXIT:;
    /* DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.Sedflux3D.get_values) */
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.Sedflux3D.get_values) */
  }
}

/*
 * Method:  set_values[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_Sedflux3D_set_values"

#ifdef __cplusplus
extern "C"
#endif
void
impl_edu_csdms_models_Sedflux3D_set_values(
  /* in */ edu_csdms_models_Sedflux3D self,
  /* in */ const char* long_var_name,
  /* in array<> */ struct sidl__array* in_values,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.Sedflux3D.set_values) */
    /* Insert-Code-Here {edu.csdms.models.Sedflux3D.set_values} (set_values 
      method) */
    /*
     * This method has not been implemented
     */

    /* DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.Sedflux3D.set_values) */
    SIDL_THROW(*_ex, sidl_NotImplementedException,     "This method has not been implemented");
  EXIT:;
    /* DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.Sedflux3D.set_values) */
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.Sedflux3D.set_values) */
  }
}

/*
 * Method:  get_status[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_Sedflux3D_get_status"

#ifdef __cplusplus
extern "C"
#endif
char*
impl_edu_csdms_models_Sedflux3D_get_status(
  /* in */ edu_csdms_models_Sedflux3D self,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.Sedflux3D.get_status) */
    /* Insert-Code-Here {edu.csdms.models.Sedflux3D.get_status} (get_status 
      method) */
    /*
     * This method has not been implemented
     */

    /* DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.Sedflux3D.get_status) */
    SIDL_THROW(*_ex, sidl_NotImplementedException,     "This method has not been implemented");
  EXIT:;
    /* DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.Sedflux3D.get_status) */
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.Sedflux3D.get_status) */
  }
}

/*
 * Method:  get_component_name[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_Sedflux3D_get_component_name"

#ifdef __cplusplus
extern "C"
#endif
char*
impl_edu_csdms_models_Sedflux3D_get_component_name(
  /* in */ edu_csdms_models_Sedflux3D self,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.Sedflux3D.get_component_name) */
    /* Insert-Code-Here {edu.csdms.models.Sedflux3D.get_component_name} (
      get_component_name method) */
    /*
     * This method has not been implemented
     */

    /* DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.Sedflux3D.get_component_name) */
    SIDL_THROW(*_ex, sidl_NotImplementedException,     "This method has not been implemented");
  EXIT:;
    /* DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.Sedflux3D.get_component_name) */
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.Sedflux3D.get_component_name) */
  }
}

/*
 * Method:  get_input_item_list[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_Sedflux3D_get_input_item_list"

#ifdef __cplusplus
extern "C"
#endif
struct sidl_string__array*
impl_edu_csdms_models_Sedflux3D_get_input_item_list(
  /* in */ edu_csdms_models_Sedflux3D self,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.Sedflux3D.get_input_item_list) */
    /* Insert-Code-Here {edu.csdms.models.Sedflux3D.get_input_item_list} (
      get_input_item_list method) */
    /*
     * This method has not been implemented
     */

    /* DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.Sedflux3D.get_input_item_list) */
    SIDL_THROW(*_ex, sidl_NotImplementedException,     "This method has not been implemented");
  EXIT:;
    /* DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.Sedflux3D.get_input_item_list) */
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.Sedflux3D.get_input_item_list) */
  }
}

/*
 * Method:  get_output_item_list[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_Sedflux3D_get_output_item_list"

#ifdef __cplusplus
extern "C"
#endif
struct sidl_string__array*
impl_edu_csdms_models_Sedflux3D_get_output_item_list(
  /* in */ edu_csdms_models_Sedflux3D self,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.Sedflux3D.get_output_item_list) */
    /* Insert-Code-Here {edu.csdms.models.Sedflux3D.get_output_item_list} (
      get_output_item_list method) */
    /*
     * This method has not been implemented
     */

    /* DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.Sedflux3D.get_output_item_list) */
    SIDL_THROW(*_ex, sidl_NotImplementedException,     "This method has not been implemented");
  EXIT:;
    /* DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.Sedflux3D.get_output_item_list) */
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.Sedflux3D.get_output_item_list) */
  }
}

/*
 * Method:  get_required_ports[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_Sedflux3D_get_required_ports"

#ifdef __cplusplus
extern "C"
#endif
void
impl_edu_csdms_models_Sedflux3D_get_required_ports(
  /* in */ edu_csdms_models_Sedflux3D self,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.Sedflux3D.get_required_ports) */
    /* Insert-Code-Here {edu.csdms.models.Sedflux3D.get_required_ports} (
      get_required_ports method) */
    /*
     * This method has not been implemented
     */

    /* DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.Sedflux3D.get_required_ports) */
    SIDL_THROW(*_ex, sidl_NotImplementedException,     "This method has not been implemented");
  EXIT:;
    /* DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.Sedflux3D.get_required_ports) */
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.Sedflux3D.get_required_ports) */
  }
}

/*
 * Method:  release_required_ports[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_Sedflux3D_release_required_ports"

#ifdef __cplusplus
extern "C"
#endif
void
impl_edu_csdms_models_Sedflux3D_release_required_ports(
  /* in */ edu_csdms_models_Sedflux3D self,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.Sedflux3D.release_required_ports) */
    /* Insert-Code-Here {edu.csdms.models.Sedflux3D.release_required_ports} (
      release_required_ports method) */
    /*
     * This method has not been implemented
     */

    /* DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.Sedflux3D.release_required_ports) */
    SIDL_THROW(*_ex, sidl_NotImplementedException,     "This method has not been implemented");
  EXIT:;
    /* DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.Sedflux3D.release_required_ports) */
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.Sedflux3D.release_required_ports) */
  }
}

/*
 * Method:  get_values_at_indices[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_Sedflux3D_get_values_at_indices"

#ifdef __cplusplus
extern "C"
#endif
struct sidl__array*
impl_edu_csdms_models_Sedflux3D_get_values_at_indices(
  /* in */ edu_csdms_models_Sedflux3D self,
  /* in */ const char* long_var_name,
  /* in array<int> */ struct sidl_int__array* indices,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.Sedflux3D.get_values_at_indices) */
    /* Insert-Code-Here {edu.csdms.models.Sedflux3D.get_values_at_indices} (
      get_values_at_indices method) */
    /*
     * This method has not been implemented
     */

    /* DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.Sedflux3D.get_values_at_indices) */
    SIDL_THROW(*_ex, sidl_NotImplementedException,     "This method has not been implemented");
  EXIT:;
    /* DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.Sedflux3D.get_values_at_indices) */
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.Sedflux3D.get_values_at_indices) */
  }
}

/*
 * Method:  set_values_at_indices[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_Sedflux3D_set_values_at_indices"

#ifdef __cplusplus
extern "C"
#endif
void
impl_edu_csdms_models_Sedflux3D_set_values_at_indices(
  /* in */ edu_csdms_models_Sedflux3D self,
  /* in */ const char* long_var_name,
  /* in array<int> */ struct sidl_int__array* indices,
  /* in array<> */ struct sidl__array* in_values,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.Sedflux3D.set_values_at_indices) */
    /* Insert-Code-Here {edu.csdms.models.Sedflux3D.set_values_at_indices} (
      set_values_at_indices method) */
    /*
     * This method has not been implemented
     */

    /* DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.Sedflux3D.set_values_at_indices) */
    SIDL_THROW(*_ex, sidl_NotImplementedException,     "This method has not been implemented");
  EXIT:;
    /* DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.Sedflux3D.set_values_at_indices) */
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.Sedflux3D.set_values_at_indices) */
  }
}

/*
 * Method:  print_traceback[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_Sedflux3D_print_traceback"

#ifdef __cplusplus
extern "C"
#endif
void
impl_edu_csdms_models_Sedflux3D_print_traceback(
  /* in */ edu_csdms_models_Sedflux3D self,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.Sedflux3D.print_traceback) */
    /* Insert-Code-Here {edu.csdms.models.Sedflux3D.print_traceback} (
      print_traceback method) */
    /*
     * This method has not been implemented
     */

    /* DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.Sedflux3D.print_traceback) */
    SIDL_THROW(*_ex, sidl_NotImplementedException,     "This method has not been implemented");
  EXIT:;
    /* DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.Sedflux3D.print_traceback) */
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.Sedflux3D.print_traceback) */
  }
}

/*
 * Method:  getRaster_nx[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_Sedflux3D_getRaster_nx"

#ifdef __cplusplus
extern "C"
#endif
int64_t
impl_edu_csdms_models_Sedflux3D_getRaster_nx(
  /* in */ edu_csdms_models_Sedflux3D self,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.Sedflux3D.getRaster_nx) */
    /* Insert-Code-Here {edu.csdms.models.Sedflux3D.getRaster_nx} (getRaster_nx 
      method) */
    /*
     * This method has not been implemented
     */

    /* DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.Sedflux3D.getRaster_nx) */
    SIDL_THROW(*_ex, sidl_NotImplementedException,     "This method has not been implemented");
  EXIT:;
    /* DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.Sedflux3D.getRaster_nx) */
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.Sedflux3D.getRaster_nx) */
  }
}

/*
 * Method:  getRaster_ny[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_Sedflux3D_getRaster_ny"

#ifdef __cplusplus
extern "C"
#endif
int64_t
impl_edu_csdms_models_Sedflux3D_getRaster_ny(
  /* in */ edu_csdms_models_Sedflux3D self,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.Sedflux3D.getRaster_ny) */
    /* Insert-Code-Here {edu.csdms.models.Sedflux3D.getRaster_ny} (getRaster_ny 
      method) */
    /*
     * This method has not been implemented
     */

    /* DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.Sedflux3D.getRaster_ny) */
    SIDL_THROW(*_ex, sidl_NotImplementedException,     "This method has not been implemented");
  EXIT:;
    /* DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.Sedflux3D.getRaster_ny) */
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.Sedflux3D.getRaster_ny) */
  }
}

/*
 * Method:  getRaster_dx[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_Sedflux3D_getRaster_dx"

#ifdef __cplusplus
extern "C"
#endif
double
impl_edu_csdms_models_Sedflux3D_getRaster_dx(
  /* in */ edu_csdms_models_Sedflux3D self,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.Sedflux3D.getRaster_dx) */
    /* Insert-Code-Here {edu.csdms.models.Sedflux3D.getRaster_dx} (getRaster_dx 
      method) */
    /*
     * This method has not been implemented
     */

    /* DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.Sedflux3D.getRaster_dx) */
    SIDL_THROW(*_ex, sidl_NotImplementedException,     "This method has not been implemented");
  EXIT:;
    /* DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.Sedflux3D.getRaster_dx) */
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.Sedflux3D.getRaster_dx) */
  }
}

/*
 * Method:  getRaster_dy[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_Sedflux3D_getRaster_dy"

#ifdef __cplusplus
extern "C"
#endif
double
impl_edu_csdms_models_Sedflux3D_getRaster_dy(
  /* in */ edu_csdms_models_Sedflux3D self,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.Sedflux3D.getRaster_dy) */
    /* Insert-Code-Here {edu.csdms.models.Sedflux3D.getRaster_dy} (getRaster_dy 
      method) */
    /*
     * This method has not been implemented
     */

    /* DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.Sedflux3D.getRaster_dy) */
    SIDL_THROW(*_ex, sidl_NotImplementedException,     "This method has not been implemented");
  EXIT:;
    /* DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.Sedflux3D.getRaster_dy) */
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.Sedflux3D.getRaster_dy) */
  }
}

/*
 * Method:  getRaster_ulx[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_Sedflux3D_getRaster_ulx"

#ifdef __cplusplus
extern "C"
#endif
double
impl_edu_csdms_models_Sedflux3D_getRaster_ulx(
  /* in */ edu_csdms_models_Sedflux3D self,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.Sedflux3D.getRaster_ulx) */
    /* Insert-Code-Here {edu.csdms.models.Sedflux3D.getRaster_ulx} (
      getRaster_ulx method) */
    /*
     * This method has not been implemented
     */

    /* DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.Sedflux3D.getRaster_ulx) */
    SIDL_THROW(*_ex, sidl_NotImplementedException,     "This method has not been implemented");
  EXIT:;
    /* DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.Sedflux3D.getRaster_ulx) */
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.Sedflux3D.getRaster_ulx) */
  }
}

/*
 * Method:  getRaster_uly[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_Sedflux3D_getRaster_uly"

#ifdef __cplusplus
extern "C"
#endif
double
impl_edu_csdms_models_Sedflux3D_getRaster_uly(
  /* in */ edu_csdms_models_Sedflux3D self,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.Sedflux3D.getRaster_uly) */
    /* Insert-Code-Here {edu.csdms.models.Sedflux3D.getRaster_uly} (
      getRaster_uly method) */
    /*
     * This method has not been implemented
     */

    /* DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.Sedflux3D.getRaster_uly) */
    SIDL_THROW(*_ex, sidl_NotImplementedException,     "This method has not been implemented");
  EXIT:;
    /* DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.Sedflux3D.getRaster_uly) */
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.Sedflux3D.getRaster_uly) */
  }
}

/*
 * Method:  getRaster_grid[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_Sedflux3D_getRaster_grid"

#ifdef __cplusplus
extern "C"
#endif
struct sidl_double__array*
impl_edu_csdms_models_Sedflux3D_getRaster_grid(
  /* in */ edu_csdms_models_Sedflux3D self,
  /* in */ const char* val_string,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.Sedflux3D.getRaster_grid) */
    /* Insert-Code-Here {edu.csdms.models.Sedflux3D.getRaster_grid} (
      getRaster_grid method) */
    /*
     * This method has not been implemented
     */

    /* DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.Sedflux3D.getRaster_grid) */
    SIDL_THROW(*_ex, sidl_NotImplementedException,     "This method has not been implemented");
  EXIT:;
    /* DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.Sedflux3D.getRaster_grid) */
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.Sedflux3D.getRaster_grid) */
  }
}

/*
 * Method:  get_raster_dimen[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_Sedflux3D_get_raster_dimen"

#ifdef __cplusplus
extern "C"
#endif
struct sidl_int__array*
impl_edu_csdms_models_Sedflux3D_get_raster_dimen(
  /* in */ edu_csdms_models_Sedflux3D self,
  /* in */ const char* val_string,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.Sedflux3D.get_raster_dimen) */
    struct edu_csdms_models_Sedflux3D__data *pd =
      edu_csdms_models_Sedflux3D__get_data (self);
    struct sidl_int__array* dimen = sidl_int__array_create1d (3);
    int shape[3];

    sedflux_get_value_dimen (pd->state, val_string, shape);

    {
      int i;
      for (i=0; i<3; i++)
        sidl_int__array_set1 (dimen, i, shape[i]);
    }

    return dimen;
  EXIT:;
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.Sedflux3D.get_raster_dimen) */
  }
}

/*
 * Method:  get_raster_res[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_Sedflux3D_get_raster_res"

#ifdef __cplusplus
extern "C"
#endif
struct sidl_double__array*
impl_edu_csdms_models_Sedflux3D_get_raster_res(
  /* in */ edu_csdms_models_Sedflux3D self,
  /* in */ const char* val_string,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.Sedflux3D.get_raster_res) */
    struct edu_csdms_models_Sedflux3D__data *pd =
      edu_csdms_models_Sedflux3D__get_data (self);
    struct sidl_double__array* res = sidl_double__array_create1d (3);
    double c_array[3];

    sedflux_get_value_res (pd->state, val_string, c_array);

    {
      int i;
      for (i=0; i<3; i++)
        sidl_double__array_set1 (res, i, c_array[i]);
    }

    return res;
  EXIT:;
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.Sedflux3D.get_raster_res) */
  }
}

/*
 * Method:  get_raster_data[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_Sedflux3D_get_raster_data"

#ifdef __cplusplus
extern "C"
#endif
struct sidl__array*
impl_edu_csdms_models_Sedflux3D_get_raster_data(
  /* in */ edu_csdms_models_Sedflux3D self,
  /* in */ const char* val_string,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.Sedflux3D.get_raster_data) */
    struct sidl__array* generic = NULL;

    {
      struct sidl_double__array* vals = NULL;
      struct edu_csdms_models_Sedflux3D__data *pd =
        edu_csdms_models_Sedflux3D__get_data (self);

      if (pd && pd->state)
      {
        generic = edu_csdms_models_Sedflux3D_CMI_get_values (self, val_string, _ex);
 #if 0
        int dimen[3];
        double* data = sedflux_get_value_data (pd->state, val_string, dimen);

        if (data)
        { /* Create an array that borrows these values. */
          if (dimen[2]==1)
          { /* This is a 2D grid */
            const int lower[2] = {0, 0};
            const int upper[2] = {dimen[0]-1, dimen[1]-1};
            const int stride[2] = {1, dimen[0]};

            {
              int i;
              const int len = dimen[0]*dimen[1];
              for (i=0; i<len; i++)
                if (eh_is_boundary_id (dimen[1], dimen[0], i))
                {
//                  if (i%dimen[0]>=30)
//                    data[i] = 30.;
//                  else
                    data[i] = 0;
                }

            }

            vals = sidl_double__array_borrow (data, 2, lower, upper, stride);
          }
          else
          { /* This is a 3D cube */
            const int lower[3] = {0, 0, 0};
            const int upper[3] = {dimen[0]-1, dimen[1]-1, dimen[2]-1};
            const int stride[3] = {1, dimen[0], dimen[0]*dimen[1]};

            vals = sidl_double__array_borrow (data, 3, lower, upper, stride);
          }
        }
#endif
      }
#if 0
      generic = (struct sidl__array*)vals;
#endif
    }
    return generic;
  EXIT:;
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.Sedflux3D.get_raster_data) */
  }
}

/*
 * Method:  get_time_span[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_Sedflux3D_get_time_span"

#ifdef __cplusplus
extern "C"
#endif
struct sidl_double__array*
impl_edu_csdms_models_Sedflux3D_get_time_span(
  /* in */ edu_csdms_models_Sedflux3D self,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.Sedflux3D.get_time_span) */
    struct sidl_double__array* span = sidl_double__array_create1d (2);

    {
      struct edu_csdms_models_Sedflux3D__data *pd =
        edu_csdms_models_Sedflux3D__get_data (self);
      /*
      const double start = sedflux_get_start_time (pd->state);
      const double end = sedflux_get_end_time (pd->state);
      */
      const double start = BMI_Get_start_time (pd->state);
      const double end = BMI_Get_end_time (pd->state);
      
      sidl_double__array_set1 (span, 0, start);
      sidl_double__array_set1 (span, 1, end);
    }

    return span;
  EXIT:;
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.Sedflux3D.get_time_span) */
  }
}

/*
 * Method:  get_value_set[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_Sedflux3D_get_value_set"

#ifdef __cplusplus
extern "C"
#endif
edu_csdms_openmi_IValueSet
impl_edu_csdms_models_Sedflux3D_get_value_set(
  /* in */ edu_csdms_models_Sedflux3D self,
  /* in */ const char* val_string,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.Sedflux3D.get_value_set) */
  edu_csdms_openmi_ScalarSet scalarSet =
    edu_csdms_openmi_ScalarSet__create (_ex);
  
  fprintf (stderr, "%s: Get ValueSet for %s\n", CMI_COMPONENT_NAME,
      val_string);
  fflush (stderr);

  {
    struct sidl__array* generic = NULL;
    struct sidl_double__array* vals = NULL;

    generic = edu_csdms_models_Sedflux3D_CMI_get_values (self, val_string, _ex);
    vals = sidl_double__array_cast (generic);
    fprintf (stderr, "%s: Size of array is %d\n", CMI_COMPONENT_NAME,
        sidl_double__array_upper (vals, 0));
    edu_csdms_openmi_ScalarSet_init (scalarSet, vals, _ex);
    /*
    fprintf (stderr, "%s: Size of ValueSet is %d\n", CMI_COMPONENT_NAME,
        sidl_double__array_upper (vals, 0),
        sidl_double__array_upper (vals, 1));
    */
  }

  return edu_csdms_openmi_IValueSet__cast (scalarSet, _ex);
#if 0
    edu_csdms_openmi_ScalarSet scalarSet =
      edu_csdms_openmi_ScalarSet__create (_ex);

    {
      struct sidl__array* generic;
      struct sidl_double__array* vals;

      /*
      struct sidl__array* data =
        impl_edu_csdms_models_Sedflux3D_get_raster_data (self, val_string, _ex);
      */
      generic = edu_csdms_models_Sedflux3D_CMI_get_values (self, val_string, _ex);
      vals = sidl_double__array_cast (generic);

      edu_csdms_openmi_ScalarSet_setRasterGrid (scalarSet, vals, _ex);
    }
    return edu_csdms_openmi_IValueSet__cast (scalarSet, _ex);
  EXIT:;
#endif
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.Sedflux3D.get_value_set) */
  }
}

/*
 * Method:  get_element_set[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_Sedflux3D_get_element_set"

#ifdef __cplusplus
extern "C"
#endif
edu_csdms_openmi_IElementSet
impl_edu_csdms_models_Sedflux3D_get_element_set(
  /* in */ edu_csdms_models_Sedflux3D self,
  /* in */ const char* val_string,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.Sedflux3D.get_element_set) */
    struct edu_csdms_models_Sedflux3D__data *pd;
    edu_csdms_openmi_ElementSet elementSet =
      edu_csdms_openmi_ElementSet__create (_ex);

    pd = edu_csdms_models_Sedflux3D__get_data (self);

    edu_csdms_openmi_ElementSet_setID (elementSet, CMI_COMPONENT_NAME, _ex);
  
    // 4=XYPolygon
    edu_csdms_openmi_ElementSet_setElementType (elementSet, 4, _ex);

    fprintf (stderr, "%s: Getting ElementSet for %s\n", CMI_COMPONENT_NAME, val_string);
    fflush (stderr);

    {
      int x_len, y_len, z_len;
      int connectivity_len, offset_len;
      double * x;
      double * y;
      double * z;
      int * connectivity;
      int * offsets;

      fprintf (stderr, "%s: Get grid x, y, z.\n", CMI_COMPONENT_NAME);
      // x, y, and z coordinate of each point.
      x = BMI_Get_grid_x (pd->state, val_string, &x_len);
      y = BMI_Get_grid_y (pd->state, val_string, &y_len);
      z = BMI_Get_grid_z (pd->state, val_string, &z_len);

      fprintf (stderr, "%s: x_len is %d.\n", CMI_COMPONENT_NAME, x_len);
      fprintf (stderr, "%s: y_len is %d.\n", CMI_COMPONENT_NAME, y_len);
      fprintf (stderr, "%s: z_len is %d.\n", CMI_COMPONENT_NAME, z_len);
/*
      {
        int i;
        for (i=0; i<x_len; i++)
          fprintf (stderr, "%f (%d), ", x[i], i);
        fprintf (stderr, "\n---\n");
        for (i=0; i<y_len; i++)
          fprintf (stderr, "%f (%d), ", y[i], i);
        fprintf (stderr, "\n---\n");
        for (i=0; i<z_len; i++)
          fprintf (stderr, "%f (%d), ", z[i], i);
        fprintf (stderr, "\n---\n");
      }
      */
      fprintf (stderr, "%s: Get grid connectivity.\n", CMI_COMPONENT_NAME);
      // Connect points in an element to their x, y, and z position.
      connectivity = BMI_Get_grid_connectivity (pd->state, val_string, &connectivity_len);
      fprintf (stderr, "%s: connectivity_len is %d.\n", CMI_COMPONENT_NAME, connectivity_len);

      fprintf (stderr, "%s: Get grid offsets.\n", CMI_COMPONENT_NAME);
      // Index offset into connectivity array for each element.
      offsets = BMI_Get_grid_offset (pd->state, val_string, &offset_len);
      fprintf (stderr, "%s: offset_len is %d.\n", CMI_COMPONENT_NAME, offset_len);

      fprintf (stderr, "%s: Create element set.\n", CMI_COMPONENT_NAME);
      { // Loop over elements
        int i, j, j_0;
        for (i=0, j_0=0; i<offset_len; i++) {
          edu_csdms_openmi_Element element = edu_csdms_openmi_Element__create (_ex);
          const int j_1 = offsets[i];

          // Loop over vertices of the element
          for (j=j_0; j<j_1; j++) {
            const int id = connectivity[j];
            edu_csdms_openmi_Vertex vertex = edu_csdms_openmi_Vertex__create (_ex);

            edu_csdms_openmi_Vertex_setX (vertex, x[id], _ex);
            edu_csdms_openmi_Vertex_setY (vertex, y[id], _ex);
            edu_csdms_openmi_Vertex_setZ (vertex, z[id], _ex);

            edu_csdms_openmi_Element_addVertex (element, vertex, _ex);
          }

          edu_csdms_openmi_ElementSet_addElement (elementSet, element, _ex);

          j_0 = j_1;
        }

        fprintf (stderr, "%s: Clean up.\n", CMI_COMPONENT_NAME);
        g_free (offsets);
        g_free (connectivity);
        g_free (z);
        g_free (y);
        g_free (x);
      }

      fprintf (stderr, "%s: Return IElementSet.\n", CMI_COMPONENT_NAME);
      return edu_csdms_openmi_IElementSet__cast (elementSet, _ex);
    }

#if 0
    edu_csdms_openmi_ElementSet elementSet =
      edu_csdms_openmi_ElementSet__create (_ex);

    {
      struct edu_csdms_models_Sedflux3D__data *pd;
      pd = edu_csdms_models_Sedflux3D__get_data (self);

      eh_require (pd);
      eh_require (pd->state);

      if (pd && pd->state)
      {
        int * shape;
        double * spacing;
        double * lower_left;
        int n_dims;

        shape = BMI_Get_grid_shape (pd->state, val_string, &n_dims);
        spacing = BMI_Get_grid_spacing (pd->state, val_string, &n_dims);
        lower_left = BMI_Get_grid_lower_left_corner (pd->state, val_string, &n_dims);
        fprintf (stderr, "%s: shape: (%d, %d)\n", CMI_COMPONENT_NAME, shape[0], shape[1]);
        fprintf (stderr, "%s: spacing: (%f, %f)\n", CMI_COMPONENT_NAME, spacing[0], spacing[1]);
        fprintf (stderr, "%s: lower_left_corner: (%f, %f)\n", CMI_COMPONENT_NAME, lower_left[0], lower_left[1]);
        fflush (stderr);

        edu_csdms_openmi_ElementSet_setRasterGrid (elementSet,
          shape[0], shape[1], spacing[0], spacing[1], lower_left[0], lower_left[1], _ex);
/*
        edu_csdms_openmi_ElementSet_setRasterGrid (elementSet,
          nx, ny, dx, dy, 0., 0., _ex);
*/
        fprintf (stderr, "Done."); fflush (stderr);

        g_free (lower_left);
        g_free (spacing);
        g_free (shape);
      }

    }

    return edu_csdms_openmi_IElementSet__cast (elementSet, _ex);
#endif
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.Sedflux3D.get_element_set) */
  }
}

/*
 * Method:  get_value_set_data[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_Sedflux3D_get_value_set_data"

#ifdef __cplusplus
extern "C"
#endif
struct sidl__array*
impl_edu_csdms_models_Sedflux3D_get_value_set_data(
  /* in */ edu_csdms_models_Sedflux3D self,
  /* in */ const char* val_string,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.Sedflux3D.get_value_set_data) */
    return impl_edu_csdms_models_Sedflux3D_get_raster_data (
             self, val_string, _ex);
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.Sedflux3D.get_value_set_data) */
  }
}

/*
 * Method:  set_value_set[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_Sedflux3D_set_value_set"

#ifdef __cplusplus
extern "C"
#endif
void
impl_edu_csdms_models_Sedflux3D_set_value_set(
  /* in */ edu_csdms_models_Sedflux3D self,
  /* in */ const char* val_string,
  /* in */ edu_csdms_openmi_IValueSet values,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.Sedflux3D.set_value_set) */
    struct edu_csdms_models_Sedflux3D__data *this =
      edu_csdms_models_Sedflux3D__get_data (self);
    double * vals;

    fprintf (stderr, "%s: Setting %s.\n", CMI_COMPONENT_NAME, val_string);
    { // Copy values from the IScalarSet to a c-array
      const int len = edu_csdms_openmi_IValueSet_getCount (values, _ex);
      edu_csdms_openmi_IScalarSet scalars =
        edu_csdms_openmi_IScalarSet__cast (values, _ex);
      int i;

      fprintf (stderr, "%s: Got ScalarSet.\n", CMI_COMPONENT_NAME);
      vals = g_new (double, len);
      for (i=0; i<len; i++)
        vals[i] = edu_csdms_openmi_IScalarSet_getScalar (scalars, i, _ex);
    }

    { // Set values through the c-array
      int n_dim;
      int * shape = BMI_Get_grid_shape (this->state, val_string, &n_dim);

      fprintf (stderr, "%s: Calling BMI_Set_double.\n", CMI_COMPONENT_NAME);
      BMI_Set_double (this->state, val_string, vals, n_dim, shape);

      g_free (shape);
    }

    g_free (vals);

    fprintf (stderr, "%s: Values are set.\n", CMI_COMPONENT_NAME);
    return;
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.Sedflux3D.set_value_set) */
  }
}
/* Babel internal methods, Users should not edit below this line. */

/* DO-NOT-DELETE splicer.begin(_misc) */
/* Insert-Code-Here {_misc} (miscellaneous code) */
/* DO-NOT-DELETE splicer.end(_misc) */

