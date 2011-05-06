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
    dptr->state = NULL;
    dptr->log = NULL;
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

   /* Provide a edu.csdms.ports.IRFPort port with port name SubaqueousErosion */
   gov_cca_Services_addProvidesPort(pd->d_services,   
                                    port,		/* the implementing object */
                                    "SubaqueousErosion", /* the name seen by the user */
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

  /* Register a use port of type edu.csdms.ports.IRFPort with port name WaterDischarge */  
   gov_cca_Services_registerUsesPort(pd->d_services,   
                                     "WaterDischarge", /* the name seen by the user */
                                     "edu.csdms.ports.IRFPort", /* sidl name of the port type. */
                                     typeMap, /* extra properties */
                                     _ex); SIDL_CHECK(*_ex);

  /* Register a use port of type edu.csdms.ports.IRFPort with port name SubaerialErosion */  
   gov_cca_Services_registerUsesPort(pd->d_services,   
                                     "SubaerialErosion", /* the name seen by the user */
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

   /* UN-Provide a edu.csdms.ports.IRFPort port with port name SubaqueousErosion */
   gov_cca_Services_removeProvidesPort(services, "SubaqueousErosion", 
                                       &throwaway_excpt);
   errMsg = "Error: Could not removeProvidesPort(\"SubaqueousErosion\")";
   edu_csdms_models_Sedflux3D_checkException(self, throwaway_excpt, errMsg, FALSE, 
                                   &dummy_excpt);

  /* Un-Register a use port of type gov.cca.ports.ParameterPortFactory with port name ppf */  
   gov_cca_Services_unregisterUsesPort(services, "ppf", 
                                       &throwaway_excpt);
   errMsg= "Error: Could not unregisterUsesPort(\"ppf\")";
   edu_csdms_models_Sedflux3D_checkException(self, throwaway_excpt, errMsg, FALSE, 
                                   &dummy_excpt);

  /* Un-Register a use port of type edu.csdms.ports.IRFPort with port name WaterDischarge */  
   gov_cca_Services_unregisterUsesPort(services, "WaterDischarge", 
                                       &throwaway_excpt);
   errMsg= "Error: Could not unregisterUsesPort(\"WaterDischarge\")";
   edu_csdms_models_Sedflux3D_checkException(self, throwaway_excpt, errMsg, FALSE, 
                                   &dummy_excpt);

  /* Un-Register a use port of type edu.csdms.ports.IRFPort with port name SubaerialErosion */  
   gov_cca_Services_unregisterUsesPort(services, "SubaerialErosion", 
                                       &throwaway_excpt);
   errMsg= "Error: Could not unregisterUsesPort(\"SubaerialErosion\")";
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
  /* in */ edu_csdms_ports_IRFPort dummy1,
  /* in */ edu_csdms_ports_IRFPort dummy2,
  /* in */ edu_csdms_tools_IRFPortQueue dummy3,
  /* in */ edu_csdms_tools_Verbose dummy4,
  /* in */ edu_csdms_openmi_ValueSet dummy5,
  /* in */ edu_csdms_tools_TemplateFiles dummy6,
  /* in */ edu_csdms_openmi_ScalarSet dummy7,
  /* in */ edu_csdms_tools_ConfigDialog dummy8,
  /* in */ edu_csdms_openmi_IScalarSet dummy9,
  /* in */ edu_csdms_tools_PrintQueue dummy10,
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
    (void)dummy10;

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

    gov_cca_ports_ParameterPortFactory_setBatchTitle (ppf,
      pd->userinput, "Sedflux3D Parameters", _ex);

    {
      edu_csdms_tools_ConfigDialog dialog;

      dialog = edu_csdms_tools_ConfigDialog__create (_ex);
      edu_csdms_tools_ConfigDialog_read (dialog, "Sedflux3D.xml", _ex);
      edu_csdms_tools_ConfigDialog_construct (dialog, ppf, pd->userinput, _ex);
    }

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

    {
      struct sidl_string__array* properties = sidl_string__array_create1d (2);
      struct edu_csdms_models_Sedflux3D__data *pd =
               edu_csdms_models_Sedflux3D__get_data (self);
      double duration;

      if (!pd->log)
      {
        pd->log = edu_csdms_tools_Verbose__create (_ex);
        edu_csdms_tools_Verbose_set_log_level (pd->log, 1, _ex);
      }

      { /*  Set site and case prefix from GUI */
        gchar *site_prefix = gov_cca_TypeMap_getString (pd->userinput,
                               "/Sedflux/SitePrefix", NULL, _ex);
        gchar *case_prefix = gov_cca_TypeMap_getString (pd->userinput,                               "/Sedflux/CasePrefix", NULL, _ex);

        duration = gov_cca_TypeMap_getDouble (pd->userinput,                               "/Sedflux/Input/Var/RunDuration", 0., _ex);

        sidl_string__array_set1 (properties, 0, site_prefix);
        sidl_string__array_set1 (properties, 1, case_prefix);
      }

      PRINT(1, "Initialize sedflux");
      edu_csdms_models_Sedflux3D_initialize (self, properties, _ex);

      PRINT (1, "Run sedflux");
      edu_csdms_models_Sedflux3D_run (self, duration, _ex);

      PRINT (1, "Finalize sedflux");
      edu_csdms_models_Sedflux3D_finalize (self, _ex);
    }

    return bocca_status;

EXIT:
    bocca_status = 2;
    edu_csdms_models_Sedflux3D_finalize (self, _ex);
    return bocca_status;
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.Sedflux3D.go) */
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
void
impl_edu_csdms_models_Sedflux3D_initialize(
  /* in */ edu_csdms_models_Sedflux3D self,
  /* in array<string> */ struct sidl_string__array* properties,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.Sedflux3D.initialize) */
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

EXIT:;
    fprintf (stderr, "ERROR: There was an error initializing Sedflux3D\n");
    fflush (stderr);
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.Sedflux3D.initialize) */
  }
}

/*
 * Method:  run[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_Sedflux3D_run"

#ifdef __cplusplus
extern "C"
#endif
void
impl_edu_csdms_models_Sedflux3D_run(
  /* in */ edu_csdms_models_Sedflux3D self,
  /* in */ double time,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.Sedflux3D.run) */
    struct edu_csdms_models_Sedflux3D__data *pd =
      edu_csdms_models_Sedflux3D__get_data (self);

    if (pd && pd->state)
    {
      const double horizon = sedflux_get_end_time (pd->state);
      double current = sedflux_get_current_time (pd->state);
      const double start = sedflux_get_start_time (pd->state);
      double print_time = edu_csdms_tools_PrintQueue_next_print_time (
                            pd->print_queue, _ex);

      fprintf (stderr, "DEBUG: initial print time is %f\n", print_time);
      while (print_time<time)
      {
        fprintf (stderr, "DEBUG: run until %f\n", print_time);
        impl_edu_csdms_models_Sedflux3D_run (self, print_time, _ex);

        print_time = edu_csdms_tools_PrintQueue_next_print_time (
                       pd->print_queue, _ex);
        fprintf (stderr, "DEBUG: new print time is %f\n", print_time);
      }

      current = sedflux_get_current_time (pd->state);

      fprintf (stderr, "DEBUG: current time is %f\n", current);
      fprintf (stderr, "DEBUG: horizon time is %f\n", horizon);
      fprintf (stderr, "DEBUG: time is %f\n", time);
      fflush (stderr);
      if (time>horizon)
      {
        PRINT (1, "Requested time is greater than horizon.");
      }
      else if (time>=current)
      {
        double t;
        const double dt = 1.;
        const double stop_time = time;

        fprintf (stderr, "DEBUG: run from %f to %f\n", current, time);
        fflush (stderr);

        while (current<stop_time)
        {
          t = current + dt;
          if (t>stop_time)
            t = stop_time;

          edu_csdms_tools_IRFPortQueue_run_ports (pd->irf_ports, current, _ex);

          if (pd->discharge_port_is_on)
          { /*  Run and map WaterDischarge values */
            edu_csdms_tools_IRFPortQueue_map_value (pd->irf_ports,
              "WaterDischarge", "BED_LOAD_FLUX", "sediment", _ex);
          }

          if (pd->subaerial_erosion_port_is_on)
          { /*  Run and map SubaerialErosion values */
            //edu_csdms_tools_IRFPortQueue_map_value (pd->irf_ports,
            //  "SubaerialErosion", "Basement", "elevation", _ex);
            edu_csdms_tools_IRFPortQueue_map_value (pd->irf_ports,
              "SubaerialErosion", "Erosion", "elevation", _ex);
            //edu_csdms_tools_IRFPortQueue_map_value (pd->irf_ports,
            //  "SubaerialErosion", "Erosion", "erosion", _ex);
          }

          {
            double now;
            sedflux_run_until (pd->state, t);
            now = sedflux_get_current_time (pd->state);
            fprintf (stderr, "DEBUG: Does %f == %f?  It should.\n", now, t);
          }

          PRINT (2, "Print everything in the queue");
          edu_csdms_tools_PrintQueue_print_all (pd->print_queue, t, _ex);

          current = sedflux_get_current_time (pd->state);
        }
      }
      else
      {
        fprintf (stderr, "DEBUG: time < current (%f<%f\n", time, current);
        fflush (stderr);
      }
    }

    PRINT (2, "End of this run step");
    return;

EXIT:;
    return;
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.Sedflux3D.run) */
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
      }
      generic = (struct sidl__array*)vals;
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
      const double start = sedflux_get_start_time (pd->state);
      const double end = sedflux_get_end_time (pd->state);
      
      sidl_double__array_set1 (span, 0, start);
      sidl_double__array_set1 (span, 1, end);
    }

    return span;
  EXIT:;
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.Sedflux3D.get_time_span) */
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
    edu_csdms_openmi_ElementSet elementSet =
      edu_csdms_openmi_ElementSet__create (_ex);

    {
      struct edu_csdms_models_Sedflux3D__data *pd;
      int64_t nx = 0;
      int64_t ny = 0;
      double dx = 0;
      double dy = 0;

      pd = edu_csdms_models_Sedflux3D__get_data (self);

      eh_require (pd);
      eh_require (pd->state);

      if (pd && pd->state)
      {
        nx = sedflux_get_nx (pd->state);
        ny = sedflux_get_ny (pd->state);
        dx = sedflux_get_xres (pd->state);
        dy = sedflux_get_yres (pd->state);
      }

      fprintf (stderr, "nx: %d\n", nx);
      fprintf (stderr, "ny: %d\n", ny);
      fprintf (stderr, "dx: %f\n", dx);
      fprintf (stderr, "dy: %f\n", dy);
      fflush (stderr);

      edu_csdms_openmi_ElementSet_setRasterGrid (elementSet,
        nx, ny, dx, dy, 0., 0., _ex);
      fprintf (stderr, "Done."); fflush (stderr);
    }

    return edu_csdms_openmi_IElementSet__cast (elementSet, _ex);
  EXIT:;
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.Sedflux3D.get_element_set) */
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

    {
      struct sidl_double__array* vals;
      struct sidl__array* data =
        impl_edu_csdms_models_Sedflux3D_get_raster_data (self, val_string, _ex);
      vals = sidl_double__array_cast (data);

      edu_csdms_openmi_ScalarSet_setRasterGrid (scalarSet, vals, _ex);
    }
    return edu_csdms_openmi_IValueSet__cast (scalarSet, _ex);
  EXIT:;
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.Sedflux3D.get_value_set) */
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
    struct edu_csdms_models_Sedflux3D__data *pd =
             edu_csdms_models_Sedflux3D__get_data (self);

    g_assert (val_string);
    g_assert (values);
    g_assert (pd);
    g_assert (pd->state);
    
    {
      const int len = edu_csdms_openmi_IValueSet_getCount (values, _ex);
      double* vals = g_new (double, len);
      edu_csdms_openmi_IScalarSet scalars;
      int i;

      scalars = edu_csdms_openmi_IScalarSet__cast (values, _ex);

      {
        gdouble max = -1e32;
        gdouble min = 1e32;
        const gint nx = sedflux_get_nx (pd->state);
        const gint ny = sedflux_get_ny (pd->state);
        fprintf (stderr, "Mapped values start\n");
        fprintf (stderr, "There are %d values\n", len);
        for (i=0; i<len; i++)
        {
          vals[i] = edu_csdms_openmi_IScalarSet_getScalar (scalars, i, _ex);

//          if (eh_is_boundary_id (nx, ny, i))
//            vals[i] = 0;
          
          if (vals[i]>max)
            max = vals[i];
          if (vals[i]<min)
            min = vals[i];
          //fprintf (stderr, "%f\n", vals[i]);
        }
        fprintf (stderr, "Max value is %f\n", max);
        fprintf (stderr, "Min value is %f\n", min);
        fprintf (stderr, "Mapped values end\n");
      }

      if (g_ascii_strcasecmp (val_string, "BASEMENT")==0 )
        sedflux_set_basement (pd->state, vals);
      else if (g_ascii_strcasecmp (val_string, "EROSION")==0 )
        sedflux_set_subaerial_deposition_to (pd->state, vals);
        //sedflux_set_deposition (pd->state, vals);
      else if (g_ascii_strcasecmp (val_string, "WATER_DISCHARGE")==0 )
        sedflux_set_discharge (pd->state, vals);
      else if (g_ascii_strcasecmp (val_string, "BED_LOAD_FLUX")==0 )
        sedflux_set_bed_load_flux (pd->state, vals);
      else
      {
        fprintf (stderr, "sedflux: %s: Unknown value string\n", val_string);
        fflush (stderr);
      }

      g_free (vals);
    }

  EXIT:;
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.Sedflux3D.set_value_set) */
  }
}
/* Babel internal methods, Users should not edit below this line. */

/* DO-NOT-DELETE splicer.begin(_misc) */
/* Insert-Code-Here {_misc} (miscellaneous code) */
/* DO-NOT-DELETE splicer.end(_misc) */

