/*
 * File:          edu_csdms_models_Avulsion_Impl.c
 * Symbol:        edu.csdms.models.Avulsion-v0.0
 * Symbol Type:   class
 * Babel Version: 1.4.0 (Revision: 6607 release-1-4-0-branch)
 * Description:   Server-side implementation for edu.csdms.models.Avulsion
 * 
 * WARNING: Automatically generated; only changes within splicers preserved
 * 
 */

/*
 * DEVELOPERS ARE EXPECTED TO PROVIDE IMPLEMENTATIONS
 * FOR THE FOLLOWING METHODS BETWEEN SPLICER PAIRS.
 */

/*
 * Symbol "edu.csdms.models.Avulsion" (version 0.0)
 */

#include "edu_csdms_models_Avulsion_Impl.h"
#include "sidl_NotImplementedException.h"
#include "sidl_Exception.h"
#ifndef included_sidl_MemAllocException_h
#include "sidl_MemAllocException.h"
#endif

/* DO-NOT-DELETE splicer.begin(edu.csdms.models.Avulsion._includes) */

/* Insert-UserCode-Here {edu.csdms.models.Avulsion._includes} (includes and arbitrary code) */

/* Bocca generated code. bocca.protected.begin(edu.csdms.models.Avulsion._includes) */
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
/* Bocca generated code. bocca.protected.end(edu.csdms.models.Avulsion._includes) */

/* Insert-UserCode-Here {edu.csdms.models.Avulsion._includes} (includes and arbitrary code) */

/* DO-NOT-DELETE splicer.end(edu.csdms.models.Avulsion._includes) */

#define SIDL_IOR_MAJOR_VERSION 2
#define SIDL_IOR_MINOR_VERSION 0
/*
 * Static class initializer called exactly once before any user-defined method is dispatched
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_Avulsion__load"

#ifdef __cplusplus
extern "C"
#endif
void
impl_edu_csdms_models_Avulsion__load(
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.Avulsion._load) */
    /* Insert-Code-Here {edu.csdms.models.Avulsion._load} (static class 
      initializer method) */
    /*
     * This method has not been implemented
     */

    /* DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.Avulsion._load) */
    SIDL_THROW(*_ex, sidl_NotImplementedException,     "This method has not been implemented");
  EXIT:;
    /* DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.Avulsion._load) */
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.Avulsion._load) */
  }
}
/*
 * Class constructor called when the class is created.
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_Avulsion__ctor"

#ifdef __cplusplus
extern "C"
#endif
void
impl_edu_csdms_models_Avulsion__ctor(
  /* in */ edu_csdms_models_Avulsion self,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.Avulsion._ctor) */

  /* Insert-UserDecl-Here {edu.csdms.models.Avulsion._ctor} (constructor method) */
    
  /* bocca-default-code. User may edit or delete.begin(edu.csdms.models.Avulsion._ctor) */
   struct edu_csdms_models_Avulsion__data *dptr = 
       (struct edu_csdms_models_Avulsion__data*)malloc(sizeof(struct edu_csdms_models_Avulsion__data));
   if (dptr) {
      memset(dptr, 0, sizeof(struct edu_csdms_models_Avulsion__data));
   }
   edu_csdms_models_Avulsion__set_data(self, dptr);
   #if _BOCCA_CTOR_MESSAGES
     BOCCA_FPRINTF(stderr, 
        "CTOR edu.csdms.models.Avulsion: %s constructed data %p in self %p\n", 
        __FUNC__, dptr, self);
   #endif /* _BOCCA_CTOR_MESSAGES */
  /* bocca-default-code. User may edit or delete.end(edu.csdms.models.Avulsion._ctor) */

  /* initialize user elements of dptr here */
    if (!g_thread_get_initialized ())
    {
      g_thread_init (NULL);
      eh_init_glib ();
      g_log_set_handler (NULL, G_LOG_LEVEL_MASK, &eh_logger, NULL);
    }
    dptr->state = NULL;
    dptr->log = NULL;
  /* Insert-UserCode-Here {edu.csdms.models.Avulsion._ctor} (constructor method) */

    /* DO-NOT-DELETE splicer.end(edu.csdms.models.Avulsion._ctor) */
  }
}

/*
 * Special Class constructor called when the user wants to wrap his own private data.
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_Avulsion__ctor2"

#ifdef __cplusplus
extern "C"
#endif
void
impl_edu_csdms_models_Avulsion__ctor2(
  /* in */ edu_csdms_models_Avulsion self,
  /* in */ void* private_data,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.Avulsion._ctor2) */
    /* Insert-Code-Here {edu.csdms.models.Avulsion._ctor2} (special constructor 
      method) */
    /*
     * This method has not been implemented
     */

    /* DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.Avulsion._ctor2) */
    SIDL_THROW(*_ex, sidl_NotImplementedException,     "This method has not been implemented");
  EXIT:;
    /* DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.Avulsion._ctor2) */
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.Avulsion._ctor2) */
  }
}
/*
 * Class destructor called when the class is deleted.
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_Avulsion__dtor"

#ifdef __cplusplus
extern "C"
#endif
void
impl_edu_csdms_models_Avulsion__dtor(
  /* in */ edu_csdms_models_Avulsion self,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.Avulsion._dtor) */

  /* deinitialize user elements of dptr here */
  /* Insert-UserCode-Here {edu.csdms.models.Avulsion._dtor} (destructor method) */
    
  /* bocca-default-code. User may edit or delete.begin(edu.csdms.models.Avulsion._dtor) */
   struct edu_csdms_models_Avulsion__data *dptr = 
                edu_csdms_models_Avulsion__get_data(self);
   if (dptr) {
      free(dptr);
      edu_csdms_models_Avulsion__set_data(self, NULL);
   }
   #if _BOCCA_CTOR_MESSAGES
     BOCCA_FPRINTF(stderr, "DTOR edu.csdms.models.Avulsion: %s freed data %p in self %p\n", 
                   __FUNC__, dptr, self);
   #endif /* _BOCCA_CTOR_MESSAGES */
  /* bocca-default-code. User may edit or delete.end(edu.csdms.models.Avulsion._dtor) */

    /* DO-NOT-DELETE splicer.end(edu.csdms.models.Avulsion._dtor) */
  }
}

/*
 * Method:  boccaSetServices[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_Avulsion_boccaSetServices"

#ifdef __cplusplus
extern "C"
#endif
void
impl_edu_csdms_models_Avulsion_boccaSetServices(
  /* in */ edu_csdms_models_Avulsion self,
  /* in */ gov_cca_Services services,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.Avulsion.boccaSetServices) */
/* DO-NOT-EDIT-BOCCA */
/* Bocca generated code. bocca.protected.begin(edu.csdms.models.Avulsion.boccaSetServices) */
   struct edu_csdms_models_Avulsion__data *pd;
   gov_cca_ComponentRelease   compRelease = NULL;
   sidl_BaseInterface throwaway_excpt = NULL; /* for use in EXIT block only. */
   int dr_services=0; /* assume releaseServices will not be called if setServices fails */
   

   gov_cca_TypeMap typeMap = NULL;
   gov_cca_Port port = NULL;

   pd = edu_csdms_models_Avulsion__get_data(self);
   if (pd == NULL) {
     SIDL_THROW(*_ex, sidl_SIDLException, 
          "NULL data pointer in edu.csdms.models.Avulsion boccaSetServices");
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

   /* Provide a edu.csdms.ports.IRFPort port with port name River */
   gov_cca_Services_addProvidesPort(pd->d_services,   
                                    port,		/* the implementing object */
                                    "River", /* the name seen by the user */
                                    "edu.csdms.ports.IRFPort", /* sidl name of the port type. */
                                    typeMap,            /* extra properties */
                                    _ex); SIDL_CHECK(*_ex);

   gov_cca_Port_deleteRef(port, _ex); port = NULL; SIDL_CHECK(*_ex);

  /* Register a use port of type gov.cca.ports.ParameterPortFactory with port name ppf */  
   gov_cca_Services_registerUsesPort(pd->d_services,   
                                     "ppf", /* the name seen by the user */
                                     "gov.cca.ports.ParameterPortFactory", /* sidl name of the port type. */
                                     typeMap, /* extra properties */
                                     _ex); SIDL_CHECK(*_ex);

  /* Register a use port of type edu.csdms.ports.IRFPort with port name Discharge */  
   gov_cca_Services_registerUsesPort(pd->d_services,   
                                     "Discharge", /* the name seen by the user */
                                     "edu.csdms.ports.IRFPort", /* sidl name of the port type. */
                                     typeMap, /* extra properties */
                                     _ex); SIDL_CHECK(*_ex);

  /* Register a use port of type edu.csdms.ports.IRFPort with port name Elevation */  
   gov_cca_Services_registerUsesPort(pd->d_services,   
                                     "Elevation", /* the name seen by the user */
                                     "edu.csdms.ports.IRFPort", /* sidl name of the port type. */
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

/* Bocca generated code. bocca.protected.end(edu.csdms.models.Avulsion.boccaSetServices) */
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.Avulsion.boccaSetServices) */
  }
}

/*
 * Method:  boccaReleaseServices[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_Avulsion_boccaReleaseServices"

#ifdef __cplusplus
extern "C"
#endif
void
impl_edu_csdms_models_Avulsion_boccaReleaseServices(
  /* in */ edu_csdms_models_Avulsion self,
  /* in */ gov_cca_Services services,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.Avulsion.boccaReleaseServices) */
/* DO-NOT-EDIT-BOCCA */
/*  Bocca generated code. bocca.protected.begin(edu.csdms.models.Avulsion.boccaReleaseServices) */

   struct edu_csdms_models_Avulsion__data *pd;
   sidl_BaseInterface throwaway_excpt = NULL;
   sidl_BaseInterface dummy_excpt = NULL;
   char *errMsg=NULL;
   /* our policy is to trap and optionally print all port-related messages,
      attempting to eliminate all ports. */


   /* UN-Provide a gov.cca.ports.GoPort port with port name Run */
   gov_cca_Services_removeProvidesPort(services, "Run", 
                                       &throwaway_excpt);
   errMsg = "Error: Could not removeProvidesPort(\"Run\")";
   edu_csdms_models_Avulsion_checkException(self, throwaway_excpt, errMsg, FALSE, 
                                   &dummy_excpt);

   /* UN-Provide a edu.csdms.ports.IRFPort port with port name River */
   gov_cca_Services_removeProvidesPort(services, "River", 
                                       &throwaway_excpt);
   errMsg = "Error: Could not removeProvidesPort(\"River\")";
   edu_csdms_models_Avulsion_checkException(self, throwaway_excpt, errMsg, FALSE, 
                                   &dummy_excpt);

  /* Un-Register a use port of type gov.cca.ports.ParameterPortFactory with port name ppf */  
   gov_cca_Services_unregisterUsesPort(services, "ppf", 
                                       &throwaway_excpt);
   errMsg= "Error: Could not unregisterUsesPort(\"ppf\")";
   edu_csdms_models_Avulsion_checkException(self, throwaway_excpt, errMsg, FALSE, 
                                   &dummy_excpt);

  /* Un-Register a use port of type edu.csdms.ports.IRFPort with port name Discharge */  
   gov_cca_Services_unregisterUsesPort(services, "Discharge", 
                                       &throwaway_excpt);
   errMsg= "Error: Could not unregisterUsesPort(\"Discharge\")";
   edu_csdms_models_Avulsion_checkException(self, throwaway_excpt, errMsg, FALSE, 
                                   &dummy_excpt);

  /* Un-Register a use port of type edu.csdms.ports.IRFPort with port name Elevation */  
   gov_cca_Services_unregisterUsesPort(services, "Elevation", 
                                       &throwaway_excpt);
   errMsg= "Error: Could not unregisterUsesPort(\"Elevation\")";
   edu_csdms_models_Avulsion_checkException(self, throwaway_excpt, errMsg, FALSE, 
                                   &dummy_excpt);

   services = NULL;
   pd = edu_csdms_models_Avulsion__get_data(self);
   if (pd == NULL) {
     SIDL_THROW(*_ex, sidl_SIDLException, 
        "NULL data pointer in edu.csdms.models.Avulsion boccaSetServices");
   }
   gov_cca_Services_deleteRef(pd->d_services, _ex); 
   SIDL_CHECK(*_ex);
   pd->d_services = NULL;
   return;

EXIT:;
   return;
/*  Bocca generated code. bocca.protected.end(edu.csdms.models.Avulsion.boccaReleaseServices) */
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.Avulsion.boccaReleaseServices) */
  }
}

/*
 * Method:  checkException[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_Avulsion_checkException"

#ifdef __cplusplus
extern "C"
#endif
void
impl_edu_csdms_models_Avulsion_checkException(
  /* in */ edu_csdms_models_Avulsion self,
  /* in */ sidl_BaseInterface excpt,
  /* in */ const char* msg,
  /* in */ sidl_bool fatal,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.Avulsion.checkException) */
/* DO-NOT-EDIT-BOCCA */
/*  Bocca generated code. bocca.protected.begin(edu.csdms.models.Avulsion.checkException) */
#ifdef _BOCCA_STDERR
   sidl_BaseException be = NULL;
   char *etext=NULL;
#endif
   
   if (SIDL_CATCH(excpt, "sidl.BaseException")) {
#ifdef _BOCCA_STDERR
      be  = sidl_BaseException__cast(excpt, _ex); SIDL_CLEAR(*_ex);
      etext = sidl_BaseException_getNote(be, _ex); SIDL_CLEAR(*_ex);
      fprintf(stderr, "edu.csdms.models.Avulsion: %s \n%s\n", msg,etext);
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
   
/*  Bocca generated code. bocca.protected.end(edu.csdms.models.Avulsion.checkException) */
    
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.Avulsion.checkException) */
  }
}

/*
 *  This function should never be called, but helps babel generate better code. 
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_Avulsion_boccaForceUsePortInclude"

#ifdef __cplusplus
extern "C"
#endif
void
impl_edu_csdms_models_Avulsion_boccaForceUsePortInclude(
  /* in */ edu_csdms_models_Avulsion self,
  /* in */ gov_cca_ports_ParameterPortFactory dummy0,
  /* in */ edu_csdms_ports_IRFPort dummy1,
  /* in */ edu_csdms_ports_IRFPort dummy2,
  /* in */ edu_csdms_tools_IRFPortQueue dummy3,
  /* in */ edu_csdms_tools_Verbose dummy4,
  /* in */ edu_csdms_openmi_ValueSet dummy5,
  /* in */ edu_csdms_openmi_ScalarSet dummy6,
  /* in */ edu_csdms_tools_ConfigDialog dummy7,
  /* in */ edu_csdms_openmi_IScalarSet dummy8,
  /* in */ edu_csdms_tools_PrintQueue dummy9,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.Avulsion.boccaForceUsePortInclude) */
/* DO-NOT-EDIT-BOCCA */
  /* Bocca generated code. bocca.protected.begin(edu.csdms.models.Avulsion.boccaForceUsePortInclude) */
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

  /* Bocca generated code. bocca.protected.end(edu.csdms.models.Avulsion.boccaForceUsePortInclude) */
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.Avulsion.boccaForceUsePortInclude) */
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
#define __FUNC__ "impl_edu_csdms_models_Avulsion_setServices"

#ifdef __cplusplus
extern "C"
#endif
void
impl_edu_csdms_models_Avulsion_setServices(
  /* in */ edu_csdms_models_Avulsion self,
  /* in */ gov_cca_Services services,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.Avulsion.setServices) */

  /*  Insert-UserDecl-Here {edu.csdms.models.Avulsion.setServices} (setServices method) */
    struct edu_csdms_models_Avulsion__data *pd;
    gov_cca_ports_ParameterPortFactory ppf;
    gov_cca_Port gcp;

  /* bocca-default-code. User may edit or delete.begin(edu.csdms.models.Avulsion.setServices) */
    impl_edu_csdms_models_Avulsion_boccaSetServices(self, services, _ex); SIDL_CHECK(*_ex);
  /* bocca-default-code. User may edit or delete.end(edu.csdms.models.Avulsion.setServices) */
  
  /*  Insert-UserCode-Here {edu.csdms.models.Avulsion.setServices} (setServices method) */
    pd = edu_csdms_models_Avulsion__get_data (self);
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
      pd->userinput, "Avulsion Parameters", _ex);

    {
      edu_csdms_tools_ConfigDialog dialog;

      dialog = edu_csdms_tools_ConfigDialog__create (_ex);
      edu_csdms_tools_ConfigDialog_read (dialog, "Avulsion.xml", _ex);
      edu_csdms_tools_ConfigDialog_construct (dialog, ppf, pd->userinput, _ex);
    }

    gov_cca_ports_ParameterPortFactory_addParameterPort (ppf,
      pd->userinput, services, _ex);
    gov_cca_Services_releasePort (services, "ppf", _ex);

EXIT:;
    /* Insert additional exception cleanup here if needed. */
    return;

    /* DO-NOT-DELETE splicer.end(edu.csdms.models.Avulsion.setServices) */
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
#define __FUNC__ "impl_edu_csdms_models_Avulsion_releaseServices"

#ifdef __cplusplus
extern "C"
#endif
void
impl_edu_csdms_models_Avulsion_releaseServices(
  /* in */ edu_csdms_models_Avulsion self,
  /* in */ gov_cca_Services services,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.Avulsion.releaseServices) */

  /*  Insert-UserCode-Here {edu.csdms.models.Avulsion.releaseServices} (releaseServices method) */

  /* bocca-default-code. User may edit or delete.begin(edu.csdms.models.Avulsion.releaseServices) */
    impl_edu_csdms_models_Avulsion_boccaReleaseServices(self, services, _ex); SIDL_CHECK(*_ex);
    return;
  /* bocca-default-code. User may edit or delete.end(edu.csdms.models.Avulsion.releaseServices) */

EXIT:;
    /* Insert additional exception cleanup here if needed. */
    return;

    /* DO-NOT-DELETE splicer.end(edu.csdms.models.Avulsion.releaseServices) */
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
#define __FUNC__ "impl_edu_csdms_models_Avulsion_go"

#ifdef __cplusplus
extern "C"
#endif
int32_t
impl_edu_csdms_models_Avulsion_go(
  /* in */ edu_csdms_models_Avulsion self,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.Avulsion.go) */
    int bocca_status = 0;

    {
      struct edu_csdms_models_Avulsion__data *pd =
               edu_csdms_models_Avulsion__get_data (self);
      double duration;
    
      if (!pd->log)
      {
        pd->log = edu_csdms_tools_Verbose__create (_ex);
        edu_csdms_tools_Verbose_set_log_level (pd->log, 1, _ex);
      }

      { /*   Set site and case prefix from GUI */
        gchar *prefix = gov_cca_TypeMap_getString (pd->userinput,
                               "/Avulsion/Prefix", NULL, _ex);
        duration = gov_cca_TypeMap_getDouble (pd->userinput,
                     "/Avulsion/RunDuration", 0., _ex);
      }

      PRINT(1, "Initialize");
      edu_csdms_models_Avulsion_initialize (self, NULL, _ex);

      PRINT (1, "Run");
      edu_csdms_models_Avulsion_run (self, duration, _ex);

      PRINT (1, "Finalize");
      edu_csdms_models_Avulsion_finalize (self, _ex);
    }
    return bocca_status;

EXIT:
    bocca_status = 2;
    edu_csdms_models_Avulsion_finalize (self, _ex);
    return bocca_status;
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.Avulsion.go) */
  }
}

/*
 * Method:  initialize[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_Avulsion_initialize"

#ifdef __cplusplus
extern "C"
#endif
void
impl_edu_csdms_models_Avulsion_initialize(
  /* in */ edu_csdms_models_Avulsion self,
  /* in array<string> */ struct sidl_string__array* properties,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.Avulsion.initialize) */
    struct edu_csdms_models_Avulsion__data *pd =
             edu_csdms_models_Avulsion__get_data (self);

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

    PRINT (2, "Create port queue");
    {
      pd->irf_ports = edu_csdms_tools_IRFPortQueue__create (_ex);

      PRINT (2, "Initialize port queue");
      edu_csdms_tools_IRFPortQueue_initialize (pd->irf_ports, pd->d_services,
        edu_csdms_ports_IRFPort__cast (self, _ex), _ex);

      PRINT (2, "Add port to queue");
      edu_csdms_tools_IRFPortQueue_add_port (pd->irf_ports, "Discharge",
                                             _ex);
      edu_csdms_tools_IRFPortQueue_add_port (pd->irf_ports, "Elevation", _ex);
      PRINT (2, "Connect ports in queue");
      edu_csdms_tools_IRFPortQueue_connect_ports (pd->irf_ports, _ex);
    }

    PRINT (2, "Initialize model");
    { /*   Initialize avulsion */
      int shape[2];
      double res[2];
      int hinge[2];
      double limit[2];
      double variance;
      double exponent_n;
      double exponent_m;
      int n_rivers;

      pd->state = avulsion_init (NULL);

      shape[0] = gov_cca_TypeMap_getInt (pd->userinput,
                   "/Avulsion/Grid/Rows", 500, _ex);
      shape[1] = gov_cca_TypeMap_getInt (pd->userinput,
                   "/Avulsion/Grid/Columns", 200, _ex);
      res[0] = gov_cca_TypeMap_getDouble (pd->userinput,
                    "/Avulsion/Grid/RowSpacing", 100, _ex);
      res[1] = gov_cca_TypeMap_getDouble (pd->userinput,
                    "/Avulsion/Grid/ColumnSpacing", 100, _ex);
      hinge[0] = gov_cca_TypeMap_getInt (pd->userinput,
                   "/Avulsion/Grid/HingeRow", 250, _ex);
      hinge[1] = gov_cca_TypeMap_getInt (pd->userinput,
                   "/Avulsion/Grid/HingeColumn", 0, _ex);
      limit[0] = gov_cca_TypeMap_getDouble (pd->userinput,
                    "/Avulsion/Input/Var/AngleMin", 0, _ex);
      limit[1] = gov_cca_TypeMap_getDouble (pd->userinput,
                   "/Avulsion/Input/Var/AngleMax", 0, _ex);
      variance = gov_cca_TypeMap_getDouble (pd->userinput,
                   "/Avulsion/Input/Var/AngleVariance", 0, _ex);
      exponent_n = gov_cca_TypeMap_getDouble (pd->userinput,
                     "/Avulsion/Input/Var/BedLoadExponent", 1., _ex);
      exponent_m = gov_cca_TypeMap_getDouble (pd->userinput,
                     "/Avulsion/Input/Var/DischargeExponent", 1., _ex);
      n_rivers = gov_cca_TypeMap_getInt (pd->userinput,
                   "/Avulsion/Input/Var/NumberOfRivers", 1, _ex);

      limit[0] *= 3.14/180.;
      limit[1] *= 3.14/180.;
      variance *= 3.14/180.;

      PRINT (2, "Set grid");
      avulsion_set_grid (pd->state, shape, res);
      PRINT (2, "Set angle limits");
      avulsion_set_river_angle_limit (pd->state, limit);
      PRINT (2, "Set angle variance");
      avulsion_set_variance (pd->state, variance);
      PRINT (2, "Set angle hinge");
      avulsion_set_river_hinge (pd->state, hinge);
      avulsion_set_bed_load_exponent (pd->state, exponent_n);
      avulsion_set_discharge_exponent (pd->state, exponent_m);
      avulsion_set_total_river_mouths (pd->state, n_rivers);
//      avulsion_set_hydro (pd->state, hydro);
    }

    PRINT (2, "Set up PrintQueue");
    {
      edu_csdms_ports_IRFPort port = edu_csdms_ports_IRFPort__cast (self, _ex);
      pd->print_queue = edu_csdms_tools_PrintQueue__create (_ex);
      edu_csdms_tools_PrintQueue_initialize (pd->print_queue, pd->userinput,
        "/Avulsion", port, _ex);
      edu_csdms_tools_PrintQueue_add_files (pd->print_queue, "Output/Grid",
                                            _ex);
    }

    PRINT (2, "Initialize model uses ports");
    edu_csdms_tools_IRFPortQueue_initialize_ports (pd->irf_ports, properties,
                                                   _ex);

    PRINT (2, "Initialize mapper for Discharge");
    edu_csdms_tools_IRFPortQueue_initialize_mapper (pd->irf_ports,
                                                    "Discharge", _ex);

    PRINT (2, "Initialize mapper for Elevation");
    edu_csdms_tools_IRFPortQueue_initialize_mapper (pd->irf_ports,
                                                    "Elevation", _ex);

    PRINT (2, "Initialize model elevations through Elevation");
    { /*   Run and map Elevation values */
      //edu_csdms_tools_IRFPortQueue_map_value (pd->irf_ports,
      //  "Elevation", "Elevation", "Elevation", _ex);
      {
        struct sidl__array* data;
        double* vals;
        edu_csdms_ports_IRFPort port;

        port = edu_csdms_tools_IRFPortQueue_get_port (pd->irf_ports,
                 "Elevation", _ex);
        data = edu_csdms_ports_IRFPort_get_raster_data (port,
                 "Elevation", _ex);
        vals = sidl_double__array_first (sidl_double__array_cast (data));
        avulsion_set_elevation (pd->state, vals);
        sidl__array_deleteRef (data);
      }
    }
    return;
 
EXIT:;
    fprintf (stderr, "ERROR: There was an error initializing Avulsion\n");
    fflush (stderr);

    /* DO-NOT-DELETE splicer.end(edu.csdms.models.Avulsion.initialize) */
  }
}

/*
 * Method:  run[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_Avulsion_run"

#ifdef __cplusplus
extern "C"
#endif
void
impl_edu_csdms_models_Avulsion_run(
  /* in */ edu_csdms_models_Avulsion self,
  /* in */ double time,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.Avulsion.run) */
    struct edu_csdms_models_Avulsion__data *pd =
      edu_csdms_models_Avulsion__get_data (self);

    if (pd && pd->state)
    {
      const double horizon = avulsion_get_end_time (pd->state);
      double current = avulsion_get_current_time (pd->state);
      const double start = avulsion_get_start_time (pd->state);
      double print_time = edu_csdms_tools_PrintQueue_next_print_time (
                            pd->print_queue, _ex);

//fprintf (stderr, "#Avulsion: print time is %f\n", print_time);
//fprintf (stderr, "#Avulsion: time is %f\n", time);

      while (print_time<time)
      {
//fprintf (stderr, "#Avulsion: Running until next print time %f\n", print_time);
        impl_edu_csdms_models_Avulsion_run (self, print_time, _ex);
        print_time = edu_csdms_tools_PrintQueue_next_print_time (
                       pd->print_queue, _ex);
//fprintf (stderr, "#Avulsion: Next print time %f\n", print_time);
      }

      current = avulsion_get_current_time (pd->state);

      //fprintf (stderr, "Avulsion: current time is %f\n", current);
      //fprintf (stderr, "Avulsion: horizon time is %f\n", horizon);
      //fprintf (stderr, "Avulsion: time is %f\n", time);
      //fflush (stderr);

      if (time>horizon)
      {
        PRINT (1, "Requested time is greater than horizon.");
      }
      else if (time>current)
      {
        //double t;
        //const double dt = 1.;
        //const double stop_time = time;

        //fprintf (stderr, "DEBUG: run from %f to %f\n", current, time);
        //fflush (stderr);
/*
        while (current<stop_time)
        {
          t = current + dt;
          if (t>stop_time)
            t = stop_time;
*/
      //fprintf (stderr, "Avulsion: run ports until %f\n", current);
          edu_csdms_tools_IRFPortQueue_run_ports (pd->irf_ports, current, _ex);

      //fprintf (stderr, "Avulsion: map values\n");
          edu_csdms_tools_IRFPortQueue_map_value (pd->irf_ports,
            "Discharge", "mean_bed_load_flux_from_river",
            "mean_bed_load_flux_from_river", _ex);

          edu_csdms_tools_IRFPortQueue_map_value (pd->irf_ports,
            "Discharge", "mean_water_discharge_from_river",
            "mean_water_discharge_from_river", _ex);

          //edu_csdms_tools_IRFPortQueue_map_value (pd->irf_ports,
          //  "Elevation", "Elevation", "Elevation", _ex);
          {
            struct sidl__array* data;
            double* vals;
            edu_csdms_ports_IRFPort port;

            port = edu_csdms_tools_IRFPortQueue_get_port (pd->irf_ports,
                     "Elevation", _ex);
            data = edu_csdms_ports_IRFPort_get_raster_data (port,
                     "Elevation", _ex);
            vals = sidl_double__array_first (sidl_double__array_cast (data));
            avulsion_set_elevation (pd->state, vals);
            sidl__array_deleteRef (data);
          }


          {
            double now;
            avulsion_run_until (pd->state, time);
            now = avulsion_get_current_time (pd->state);
            //fprintf (stderr, "DEBUG: Does %f == %f?  It should.\n", now, time);
          }

          PRINT (2, "Print everything in the queue");
          edu_csdms_tools_PrintQueue_print_all (pd->print_queue, time, _ex);

          current = avulsion_get_current_time (pd->state);
//        }
      }
      else
      {
        fprintf (stderr, "Avulsion: time <= current (%f<%f)\n", time, current);
        fflush (stderr);
      }

      PRINT (2, "Print everything in the queue");
      edu_csdms_tools_PrintQueue_print_all (pd->print_queue, time, _ex);
    }
    PRINT (2, "End of this run step");
    return;

EXIT:;
    return;
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.Avulsion.run) */
  }
}

/*
 * Method:  finalize[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_Avulsion_finalize"

#ifdef __cplusplus
extern "C"
#endif
void
impl_edu_csdms_models_Avulsion_finalize(
  /* in */ edu_csdms_models_Avulsion self,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.Avulsion.finalize) */
    struct edu_csdms_models_Avulsion__data *pd =
      edu_csdms_models_Avulsion__get_data (self);

    if (pd->state)
    {
      PRINT (1, "Clean up");

      avulsion_finalize (pd->state, FALSE);
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
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.Avulsion.finalize) */
  }
}

/*
 * Method:  getRaster_nx[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_Avulsion_getRaster_nx"

#ifdef __cplusplus
extern "C"
#endif
int64_t
impl_edu_csdms_models_Avulsion_getRaster_nx(
  /* in */ edu_csdms_models_Avulsion self,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.Avulsion.getRaster_nx) */
    /* Insert-Code-Here {edu.csdms.models.Avulsion.getRaster_nx} (getRaster_nx 
      method) */
    /*
     * This method has not been implemented
     */

    /* DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.Avulsion.getRaster_nx) */
    SIDL_THROW(*_ex, sidl_NotImplementedException,     "This method has not been implemented");
  EXIT:;
    /* DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.Avulsion.getRaster_nx) */
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.Avulsion.getRaster_nx) */
  }
}

/*
 * Method:  getRaster_ny[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_Avulsion_getRaster_ny"

#ifdef __cplusplus
extern "C"
#endif
int64_t
impl_edu_csdms_models_Avulsion_getRaster_ny(
  /* in */ edu_csdms_models_Avulsion self,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.Avulsion.getRaster_ny) */
    /* Insert-Code-Here {edu.csdms.models.Avulsion.getRaster_ny} (getRaster_ny 
      method) */
    /*
     * This method has not been implemented
     */

    /* DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.Avulsion.getRaster_ny) */
    SIDL_THROW(*_ex, sidl_NotImplementedException,     "This method has not been implemented");
  EXIT:;
    /* DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.Avulsion.getRaster_ny) */
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.Avulsion.getRaster_ny) */
  }
}

/*
 * Method:  getRaster_dx[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_Avulsion_getRaster_dx"

#ifdef __cplusplus
extern "C"
#endif
double
impl_edu_csdms_models_Avulsion_getRaster_dx(
  /* in */ edu_csdms_models_Avulsion self,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.Avulsion.getRaster_dx) */
    /* Insert-Code-Here {edu.csdms.models.Avulsion.getRaster_dx} (getRaster_dx 
      method) */
    /*
     * This method has not been implemented
     */

    /* DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.Avulsion.getRaster_dx) */
    SIDL_THROW(*_ex, sidl_NotImplementedException,     "This method has not been implemented");
  EXIT:;
    /* DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.Avulsion.getRaster_dx) */
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.Avulsion.getRaster_dx) */
  }
}

/*
 * Method:  getRaster_dy[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_Avulsion_getRaster_dy"

#ifdef __cplusplus
extern "C"
#endif
double
impl_edu_csdms_models_Avulsion_getRaster_dy(
  /* in */ edu_csdms_models_Avulsion self,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.Avulsion.getRaster_dy) */
    /* Insert-Code-Here {edu.csdms.models.Avulsion.getRaster_dy} (getRaster_dy 
      method) */
    /*
     * This method has not been implemented
     */

    /* DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.Avulsion.getRaster_dy) */
    SIDL_THROW(*_ex, sidl_NotImplementedException,     "This method has not been implemented");
  EXIT:;
    /* DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.Avulsion.getRaster_dy) */
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.Avulsion.getRaster_dy) */
  }
}

/*
 * Method:  getRaster_ulx[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_Avulsion_getRaster_ulx"

#ifdef __cplusplus
extern "C"
#endif
double
impl_edu_csdms_models_Avulsion_getRaster_ulx(
  /* in */ edu_csdms_models_Avulsion self,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.Avulsion.getRaster_ulx) */
    /* Insert-Code-Here {edu.csdms.models.Avulsion.getRaster_ulx} (
      getRaster_ulx method) */
    /*
     * This method has not been implemented
     */

    /* DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.Avulsion.getRaster_ulx) */
    SIDL_THROW(*_ex, sidl_NotImplementedException,     "This method has not been implemented");
  EXIT:;
    /* DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.Avulsion.getRaster_ulx) */
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.Avulsion.getRaster_ulx) */
  }
}

/*
 * Method:  getRaster_uly[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_Avulsion_getRaster_uly"

#ifdef __cplusplus
extern "C"
#endif
double
impl_edu_csdms_models_Avulsion_getRaster_uly(
  /* in */ edu_csdms_models_Avulsion self,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.Avulsion.getRaster_uly) */
    /* Insert-Code-Here {edu.csdms.models.Avulsion.getRaster_uly} (
      getRaster_uly method) */
    /*
     * This method has not been implemented
     */

    /* DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.Avulsion.getRaster_uly) */
    SIDL_THROW(*_ex, sidl_NotImplementedException,     "This method has not been implemented");
  EXIT:;
    /* DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.Avulsion.getRaster_uly) */
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.Avulsion.getRaster_uly) */
  }
}

/*
 * Method:  getRaster_grid[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_Avulsion_getRaster_grid"

#ifdef __cplusplus
extern "C"
#endif
struct sidl_double__array*
impl_edu_csdms_models_Avulsion_getRaster_grid(
  /* in */ edu_csdms_models_Avulsion self,
  /* in */ const char* val_string,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.Avulsion.getRaster_grid) */
    /* Insert-Code-Here {edu.csdms.models.Avulsion.getRaster_grid} (
      getRaster_grid method) */
    /*
     * This method has not been implemented
     */

    /* DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.Avulsion.getRaster_grid) */
    SIDL_THROW(*_ex, sidl_NotImplementedException,     "This method has not been implemented");
  EXIT:;
    /* DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.Avulsion.getRaster_grid) */
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.Avulsion.getRaster_grid) */
  }
}

/*
 * Method:  get_raster_dimen[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_Avulsion_get_raster_dimen"

#ifdef __cplusplus
extern "C"
#endif
struct sidl_int__array*
impl_edu_csdms_models_Avulsion_get_raster_dimen(
  /* in */ edu_csdms_models_Avulsion self,
  /* in */ const char* val_string,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.Avulsion.get_raster_dimen) */
    struct edu_csdms_models_Avulsion__data *pd =
      edu_csdms_models_Avulsion__get_data (self);
    struct sidl_int__array* dimen = sidl_int__array_create1d (3);
    int shape[3];

    avulsion_get_value_dimen (pd->state, val_string, shape);
    
    {
      int i;
      for (i=0; i<3; i++)
        sidl_int__array_set1 (dimen, i, shape[i]);
    }

    return dimen;
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.Avulsion.get_raster_dimen) */
  }
}

/*
 * Method:  get_raster_res[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_Avulsion_get_raster_res"

#ifdef __cplusplus
extern "C"
#endif
struct sidl_double__array*
impl_edu_csdms_models_Avulsion_get_raster_res(
  /* in */ edu_csdms_models_Avulsion self,
  /* in */ const char* val_string,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.Avulsion.get_raster_res) */
    struct edu_csdms_models_Avulsion__data *pd =
      edu_csdms_models_Avulsion__get_data (self);
    struct sidl_double__array* res = sidl_double__array_create1d (3);
    double c_array[3];

    avulsion_get_value_res (pd->state, val_string, c_array);

    {
      int i;
      for (i=0; i<3; i++)
        sidl_double__array_set1 (res, i, c_array[i]);
    }

    return res;
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.Avulsion.get_raster_res) */
  }
}

/*
 * Method:  get_raster_data[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_Avulsion_get_raster_data"

#ifdef __cplusplus
extern "C"
#endif
struct sidl__array*
impl_edu_csdms_models_Avulsion_get_raster_data(
  /* in */ edu_csdms_models_Avulsion self,
  /* in */ const char* val_string,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.Avulsion.get_raster_data) */
    struct sidl__array* generic = NULL;

    {
      struct sidl_double__array* vals = NULL;
      struct edu_csdms_models_Avulsion__data *pd =
               edu_csdms_models_Avulsion__get_data (self);
  
//fprintf (stderr, "Avulsion: get raster data\n");
      if (pd && pd->state)
      {
        int lower[2];
        int upper[2];
        int stride[2];
        double* data = avulsion_get_value_data (pd->state, val_string, lower,
                                                upper, stride);
/*
eh_watch_ptr (data);
eh_watch_int (lower[0]);
eh_watch_int (lower[1]);
eh_watch_int (upper[0]);
eh_watch_int (upper[1]);
        {
          int i;
          if ((upper[0]-lower[0]+1)*(upper[1]-lower[1]+1)!=100000)
            exit (-1);
          for (i=0; i<100000; i++)
            data[i] = 0;

          data[500*28+250] = 250;
        }
*/
        //data += lower[0];
        if (data)
        {
          data += lower[0];
          vals = sidl_double__array_borrow (data, 2, lower, upper, stride);

          generic = (struct sidl__array*)sidl_double__array_smartCopy (vals);
          sidl_double__array_deleteRef (vals);

          g_free (data-lower[0]);
        }
/*
eh_watch_ptr (vals);
eh_watch_int (sidl_double__array_dimen (vals));
eh_watch_int (sidl_double__array_length (vals, 0));
*/
      }
      else
        fprintf (stderr, "#Avulsion: Unable to get raster data.\n");
 
      //generic = (struct sidl__array*)vals;
    }

    return generic;
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.Avulsion.get_raster_data) */
  }
}

/*
 * Method:  get_time_span[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_Avulsion_get_time_span"

#ifdef __cplusplus
extern "C"
#endif
struct sidl_double__array*
impl_edu_csdms_models_Avulsion_get_time_span(
  /* in */ edu_csdms_models_Avulsion self,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.Avulsion.get_time_span) */
    struct sidl_double__array* span = sidl_double__array_create1d (2);

    {
      struct edu_csdms_models_Avulsion__data *pd =
        edu_csdms_models_Avulsion__get_data (self);
      const double start = avulsion_get_start_time (pd->state);
      const double end = avulsion_get_end_time (pd->state);
   
      sidl_double__array_set1 (span, 0, start);
      sidl_double__array_set1 (span, 1, end);
    }

    return span;
  EXIT:;
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.Avulsion.get_time_span) */
  }
}

/*
 * Method:  get_element_set[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_Avulsion_get_element_set"

#ifdef __cplusplus
extern "C"
#endif
edu_csdms_openmi_IElementSet
impl_edu_csdms_models_Avulsion_get_element_set(
  /* in */ edu_csdms_models_Avulsion self,
  /* in */ const char* val_string,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.Avulsion.get_element_set) */
      edu_csdms_openmi_ElementSet elementSet =
        edu_csdms_openmi_ElementSet__create (_ex);
      
    SIDL_THROW(*_ex, sidl_NotImplementedException,
      "This method has not been implemented");

    PRINT (2, "Get element set.");
    if (g_ascii_strcasecmp ("River",val_string)==0 )
    {/* These values don't have an element set */
      SIDL_THROW(*_ex, sidl_NotImplementedException,
                 "This method has not been implemented");
    }
    else if (g_ascii_strcasecmp ("Elevation", val_string)==0)
    {
      struct edu_csdms_models_Avulsion__data *pd;
      int64_t nx = 0;
      int64_t ny = 0;
      double dx = 0;
      double dy = 0;

      pd = edu_csdms_models_Avulsion__get_data (self);

      if (pd && pd->state)
      {
        nx = avulsion_get_nx (pd->state);
        ny = avulsion_get_ny (pd->state);
        dx = avulsion_get_dx (pd->state);
        dy = avulsion_get_dy (pd->state);
      }
   
/*
      fprintf (stderr, "nx: %d\n", nx);
      fprintf (stderr, "ny: %d\n", ny);
      fprintf (stderr, "dx: %f\n", dx);
      fprintf (stderr, "dy: %f\n", dy);
      fflush (stderr);
*/

//        edu_csdms_openmi_ElementSet_setRasterGrid (elementSet,
//          nx, ny, dx, dy, 0., 0., _ex);

      {
          int i;
          const int len = nx*ny;

          // Points
          for (i=0; i<len; i++)
          {
            edu_csdms_openmi_Element element = 
              edu_csdms_openmi_Element__create (_ex);

            {
              edu_csdms_openmi_Vertex vertex =
                edu_csdms_openmi_Vertex__create (_ex);
              const double x = i/nx*dx;
              const double y = i%nx*dy;
              const double z = 0;

              edu_csdms_openmi_Vertex_setX (vertex, x, _ex);
              edu_csdms_openmi_Vertex_setY (vertex, y, _ex);
              edu_csdms_openmi_Vertex_setZ (vertex, z, _ex);

              edu_csdms_openmi_Element_addVertex (element, vertex, _ex);
            }

            edu_csdms_openmi_ElementSet_addElement (elementSet, element, _ex);
          }
      }

      return edu_csdms_openmi_IElementSet__cast (elementSet, _ex);
    }

EXIT:;
    return NULL;

    /* DO-NOT-DELETE splicer.end(edu.csdms.models.Avulsion.get_element_set) */
  }
}

/*
 * Method:  get_value_set[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_Avulsion_get_value_set"

#ifdef __cplusplus
extern "C"
#endif
edu_csdms_openmi_IValueSet
impl_edu_csdms_models_Avulsion_get_value_set(
  /* in */ edu_csdms_models_Avulsion self,
  /* in */ const char* val_string,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.Avulsion.get_value_set) */
    edu_csdms_openmi_ScalarSet scalarSet =
      edu_csdms_openmi_ScalarSet__create (_ex);

    {
      struct sidl_double__array* vals;
      struct sidl__array* data =
        impl_edu_csdms_models_Avulsion_get_raster_data (self, val_string, _ex);
      vals = sidl_double__array_cast (data);

      edu_csdms_openmi_ScalarSet_setRasterGrid (scalarSet, vals, _ex);
    }
    return edu_csdms_openmi_IValueSet__cast (scalarSet, _ex);
  EXIT:;
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.Avulsion.get_value_set) */
  }
}

/*
 * Method:  get_value_set_data[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_Avulsion_get_value_set_data"

#ifdef __cplusplus
extern "C"
#endif
struct sidl__array*
impl_edu_csdms_models_Avulsion_get_value_set_data(
  /* in */ edu_csdms_models_Avulsion self,
  /* in */ const char* val_string,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.Avulsion.get_value_set_data) */
    return impl_edu_csdms_models_Avulsion_get_raster_data (
             self, val_string, _ex);
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.Avulsion.get_value_set_data) */
  }
}

/*
 * Method:  set_value_set[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_Avulsion_set_value_set"

#ifdef __cplusplus
extern "C"
#endif
void
impl_edu_csdms_models_Avulsion_set_value_set(
  /* in */ edu_csdms_models_Avulsion self,
  /* in */ const char* val_string,
  /* in */ edu_csdms_openmi_IValueSet values,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.Avulsion.set_value_set) */
    struct edu_csdms_models_Avulsion__data *pd =
      edu_csdms_models_Avulsion__get_data (self);
    edu_csdms_openmi_ScalarSet scalarSet;

    PRINT (2, "Convert IValueSet to  ScalarSet");
    scalarSet = edu_csdms_openmi_ScalarSet__cast (values, _ex);

    PRINT (2, "Look for value name");
    if (g_ascii_strcasecmp (val_string,"mean_bed_load_flux_from_river")==0 ||
        g_ascii_strcasecmp (val_string,
                            "mean_suspended_load_flux_from_river")==0)
    {
      double val;
      PRINT (2, "Found bed_load_flux_from_river");
      PRINT (2, "Get the first scalar");
      val = edu_csdms_openmi_ScalarSet_getScalar (scalarSet, 0, _ex);

      //fprintf (stderr, "Avulsion: value is %f\n", val);
      avulsion_set_sed_flux (pd->state, val);
    }
    else if (g_ascii_strcasecmp (val_string,
                                 "mean_water_discharge_from_river")==0)
    {
      double val;
      PRINT (2, "Found water_discharge_from_river");
      PRINT (2, "Get the first scalar");
      val = edu_csdms_openmi_ScalarSet_getScalar (scalarSet, 0, _ex);

      //fprintf (stderr, "Avulsion: value is %f\n", val);
      avulsion_set_discharge (pd->state, val);
    }
    else if (g_ascii_strcasecmp (val_string, "Elevation")==0)
    {
      const int nx = avulsion_get_nx (pd->state);
      const int ny = avulsion_get_ny (pd->state);
      const int len = nx*ny;
      int i;
      double max = -1e32;
      double min = 1e32;
      double* vals = g_new (double, len);

      PRINT (2, "Mapped values start\n");
      PRINT (2, "Setting elevation values\n");
      //fprintf (stderr, "There are %d values\n", len);
      for (i=0; i<len; i++)
      {
        vals[i] = edu_csdms_openmi_ScalarSet_getScalar (scalarSet, i, _ex);

        if (vals[i]>max)
          max = vals[i];
        if (vals[i]<min)
          min = vals[i];

      }
//fprintf (stderr, "Avulsion: min/max elevation = %f/%f\n", min, max);


      fprintf (stderr, "Avulsion: Max elevation value (from CEM) is %f\n", max);
      fprintf (stderr, "Avulsion: Min elevation value (from CEM) is %f\n", min);

      PRINT (2, "Mapped values end\n");

      avulsion_set_elevation (pd->state, vals);

      g_free (vals);
    }
    else
      fprintf (stderr, "%s: Invalid value string.", val_string);

    PRINT (2, "Done setValueSet");

    return;
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.Avulsion.set_value_set) */
  }
}
/* Babel internal methods, Users should not edit below this line. */

/* DO-NOT-DELETE splicer.begin(_misc) */
/* Insert-Code-Here {_misc} (miscellaneous code) */
/* DO-NOT-DELETE splicer.end(_misc) */

