/*
 * File:          edu_csdms_models_Waves_Impl.c
 * Symbol:        edu.csdms.models.Waves-v0.0
 * Symbol Type:   class
 * Babel Version: 1.4.0 (Revision: 6607 release-1-4-0-branch)
 * Description:   Server-side implementation for edu.csdms.models.Waves
 * 
 * WARNING: Automatically generated; only changes within splicers preserved
 * 
 */

/*
 * DEVELOPERS ARE EXPECTED TO PROVIDE IMPLEMENTATIONS
 * FOR THE FOLLOWING METHODS BETWEEN SPLICER PAIRS.
 */

/*
 * Symbol "edu.csdms.models.Waves" (version 0.0)
 */

#include "edu_csdms_models_Waves_Impl.h"
#include "sidl_NotImplementedException.h"
#include "sidl_Exception.h"
#ifndef included_sidl_MemAllocException_h
#include "sidl_MemAllocException.h"
#endif

/* DO-NOT-DELETE splicer.begin(edu.csdms.models.Waves._includes) */

/* Insert-UserCode-Here {edu.csdms.models.Waves._includes} (includes and arbitrary code) */
#include <glib.h>
#include <waves_api.h>

/* Bocca generated code. bocca.protected.begin(edu.csdms.models.Waves._includes) */
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
/* Bocca generated code. bocca.protected.end(edu.csdms.models.Waves._includes) */

/* Insert-UserCode-Here {edu.csdms.models.Waves._includes} (includes and arbitrary code) */

/* DO-NOT-DELETE splicer.end(edu.csdms.models.Waves._includes) */

#define SIDL_IOR_MAJOR_VERSION 2
#define SIDL_IOR_MINOR_VERSION 0
/*
 * Static class initializer called exactly once before any user-defined method is dispatched
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_Waves__load"

#ifdef __cplusplus
extern "C"
#endif
void
impl_edu_csdms_models_Waves__load(
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.Waves._load) */
    /* Insert-Code-Here {edu.csdms.models.Waves._load} (static class 
      initializer method) */
    /*
     * This method has not been implemented
     */

    /* DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.Waves._load) */
    SIDL_THROW(*_ex, sidl_NotImplementedException,     "This method has not been implemented");
  EXIT:;
    /* DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.Waves._load) */
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.Waves._load) */
  }
}
/*
 * Class constructor called when the class is created.
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_Waves__ctor"

#ifdef __cplusplus
extern "C"
#endif
void
impl_edu_csdms_models_Waves__ctor(
  /* in */ edu_csdms_models_Waves self,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.Waves._ctor) */

  /* Insert-UserDecl-Here {edu.csdms.models.Waves._ctor} (constructor method) */
    
  /* bocca-default-code. User may edit or delete.begin(edu.csdms.models.Waves._ctor) */
   struct edu_csdms_models_Waves__data *dptr = 
       (struct edu_csdms_models_Waves__data*)malloc(sizeof(struct edu_csdms_models_Waves__data));
   if (dptr) {
      memset(dptr, 0, sizeof(struct edu_csdms_models_Waves__data));
   }
   edu_csdms_models_Waves__set_data(self, dptr);
   #if _BOCCA_CTOR_MESSAGES
     BOCCA_FPRINTF(stderr, 
        "CTOR edu.csdms.models.Waves: %s constructed data %p in self %p\n", 
        __FUNC__, dptr, self);
   #endif /* _BOCCA_CTOR_MESSAGES */
  /* bocca-default-code. User may edit or delete.end(edu.csdms.models.Waves._ctor) */

  /* initialize user elements of dptr here */
  /* Insert-UserCode-Here {edu.csdms.models.Waves._ctor} (constructor method) */
    dptr->state = NULL;
    dptr->log = NULL;

    /* DO-NOT-DELETE splicer.end(edu.csdms.models.Waves._ctor) */
  }
}

/*
 * Special Class constructor called when the user wants to wrap his own private data.
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_Waves__ctor2"

#ifdef __cplusplus
extern "C"
#endif
void
impl_edu_csdms_models_Waves__ctor2(
  /* in */ edu_csdms_models_Waves self,
  /* in */ void* private_data,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.Waves._ctor2) */
    /* Insert-Code-Here {edu.csdms.models.Waves._ctor2} (special constructor 
      method) */
    /*
     * This method has not been implemented
     */

    /* DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.Waves._ctor2) */
    SIDL_THROW(*_ex, sidl_NotImplementedException,     "This method has not been implemented");
  EXIT:;
    /* DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.Waves._ctor2) */
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.Waves._ctor2) */
  }
}
/*
 * Class destructor called when the class is deleted.
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_Waves__dtor"

#ifdef __cplusplus
extern "C"
#endif
void
impl_edu_csdms_models_Waves__dtor(
  /* in */ edu_csdms_models_Waves self,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.Waves._dtor) */

  /* deinitialize user elements of dptr here */
  /* Insert-UserCode-Here {edu.csdms.models.Waves._dtor} (destructor method) */
    
  /* bocca-default-code. User may edit or delete.begin(edu.csdms.models.Waves._dtor) */
   struct edu_csdms_models_Waves__data *dptr = 
                edu_csdms_models_Waves__get_data(self);
   if (dptr) {
      free(dptr);
      edu_csdms_models_Waves__set_data(self, NULL);
   }
   #if _BOCCA_CTOR_MESSAGES
     BOCCA_FPRINTF(stderr, "DTOR edu.csdms.models.Waves: %s freed data %p in self %p\n", 
                   __FUNC__, dptr, self);
   #endif /* _BOCCA_CTOR_MESSAGES */
  /* bocca-default-code. User may edit or delete.end(edu.csdms.models.Waves._dtor) */

    /* DO-NOT-DELETE splicer.end(edu.csdms.models.Waves._dtor) */
  }
}

/*
 * Method:  boccaSetServices[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_Waves_boccaSetServices"

#ifdef __cplusplus
extern "C"
#endif
void
impl_edu_csdms_models_Waves_boccaSetServices(
  /* in */ edu_csdms_models_Waves self,
  /* in */ gov_cca_Services services,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.Waves.boccaSetServices) */
/* DO-NOT-EDIT-BOCCA */
/* Bocca generated code. bocca.protected.begin(edu.csdms.models.Waves.boccaSetServices) */
   struct edu_csdms_models_Waves__data *pd;
   gov_cca_ComponentRelease   compRelease = NULL;
   sidl_BaseInterface throwaway_excpt = NULL; /* for use in EXIT block only. */
   int dr_services=0; /* assume releaseServices will not be called if setServices fails */
   

   gov_cca_TypeMap typeMap = NULL;
   gov_cca_Port port = NULL;

   pd = edu_csdms_models_Waves__get_data(self);
   if (pd == NULL) {
     SIDL_THROW(*_ex, sidl_SIDLException, 
          "NULL data pointer in edu.csdms.models.Waves boccaSetServices");
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

   /* Provide a edu.csdms.ports.IRFPort port with port name Waves */
   gov_cca_Services_addProvidesPort(pd->d_services,   
                                    port,		/* the implementing object */
                                    "Waves", /* the name seen by the user */
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

/* Bocca generated code. bocca.protected.end(edu.csdms.models.Waves.boccaSetServices) */
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.Waves.boccaSetServices) */
  }
}

/*
 * Method:  boccaReleaseServices[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_Waves_boccaReleaseServices"

#ifdef __cplusplus
extern "C"
#endif
void
impl_edu_csdms_models_Waves_boccaReleaseServices(
  /* in */ edu_csdms_models_Waves self,
  /* in */ gov_cca_Services services,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.Waves.boccaReleaseServices) */
/* DO-NOT-EDIT-BOCCA */
/*  Bocca generated code. bocca.protected.begin(edu.csdms.models.Waves.boccaReleaseServices) */

   struct edu_csdms_models_Waves__data *pd;
   sidl_BaseInterface throwaway_excpt = NULL;
   sidl_BaseInterface dummy_excpt = NULL;
   char *errMsg=NULL;
   /* our policy is to trap and optionally print all port-related messages,
      attempting to eliminate all ports. */


   /* UN-Provide a gov.cca.ports.GoPort port with port name Run */
   gov_cca_Services_removeProvidesPort(services, "Run", 
                                       &throwaway_excpt);
   errMsg = "Error: Could not removeProvidesPort(\"Run\")";
   edu_csdms_models_Waves_checkException(self, throwaway_excpt, errMsg, FALSE, 
                                   &dummy_excpt);

   /* UN-Provide a edu.csdms.ports.IRFPort port with port name Waves */
   gov_cca_Services_removeProvidesPort(services, "Waves", 
                                       &throwaway_excpt);
   errMsg = "Error: Could not removeProvidesPort(\"Waves\")";
   edu_csdms_models_Waves_checkException(self, throwaway_excpt, errMsg, FALSE, 
                                   &dummy_excpt);

  /* Un-Register a use port of type gov.cca.ports.ParameterPortFactory with port name ppf */  
   gov_cca_Services_unregisterUsesPort(services, "ppf", 
                                       &throwaway_excpt);
   errMsg= "Error: Could not unregisterUsesPort(\"ppf\")";
   edu_csdms_models_Waves_checkException(self, throwaway_excpt, errMsg, FALSE, 
                                   &dummy_excpt);

   services = NULL;
   pd = edu_csdms_models_Waves__get_data(self);
   if (pd == NULL) {
     SIDL_THROW(*_ex, sidl_SIDLException, 
        "NULL data pointer in edu.csdms.models.Waves boccaSetServices");
   }
   gov_cca_Services_deleteRef(pd->d_services, _ex); 
   SIDL_CHECK(*_ex);
   pd->d_services = NULL;
   return;

EXIT:;
   return;
/*  Bocca generated code. bocca.protected.end(edu.csdms.models.Waves.boccaReleaseServices) */
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.Waves.boccaReleaseServices) */
  }
}

/*
 * Method:  checkException[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_Waves_checkException"

#ifdef __cplusplus
extern "C"
#endif
void
impl_edu_csdms_models_Waves_checkException(
  /* in */ edu_csdms_models_Waves self,
  /* in */ sidl_BaseInterface excpt,
  /* in */ const char* msg,
  /* in */ sidl_bool fatal,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.Waves.checkException) */
/* DO-NOT-EDIT-BOCCA */
/*  Bocca generated code. bocca.protected.begin(edu.csdms.models.Waves.checkException) */
#ifdef _BOCCA_STDERR
   sidl_BaseException be = NULL;
   char *etext=NULL;
#endif
   
   if (SIDL_CATCH(excpt, "sidl.BaseException")) {
#ifdef _BOCCA_STDERR
      be  = sidl_BaseException__cast(excpt, _ex); SIDL_CLEAR(*_ex);
      etext = sidl_BaseException_getNote(be, _ex); SIDL_CLEAR(*_ex);
      fprintf(stderr, "edu.csdms.models.Waves: %s \n%s\n", msg,etext);
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
   
/*  Bocca generated code. bocca.protected.end(edu.csdms.models.Waves.checkException) */
    
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.Waves.checkException) */
  }
}

/*
 *  This function should never be called, but helps babel generate better code. 
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_Waves_boccaForceUsePortInclude"

#ifdef __cplusplus
extern "C"
#endif
void
impl_edu_csdms_models_Waves_boccaForceUsePortInclude(
  /* in */ edu_csdms_models_Waves self,
  /* in */ gov_cca_ports_ParameterPortFactory dummy0,
  /* in */ edu_csdms_tools_Verbose dummy1,
  /* in */ edu_csdms_openmi_ScalarSet dummy2,
  /* in */ edu_csdms_tools_ConfigDialog dummy3,
  /* in */ edu_csdms_tools_PrintQueue dummy4,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.Waves.boccaForceUsePortInclude) */
/* DO-NOT-EDIT-BOCCA */
  /* Bocca generated code. bocca.protected.begin(edu.csdms.models.Waves.boccaForceUsePortInclude) */
    (void)self;
    (void)dummy0;
    (void)dummy1;
    (void)dummy2;
    (void)dummy3;
    (void)dummy4;

  /* Bocca generated code. bocca.protected.end(edu.csdms.models.Waves.boccaForceUsePortInclude) */
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.Waves.boccaForceUsePortInclude) */
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
#define __FUNC__ "impl_edu_csdms_models_Waves_setServices"

#ifdef __cplusplus
extern "C"
#endif
void
impl_edu_csdms_models_Waves_setServices(
  /* in */ edu_csdms_models_Waves self,
  /* in */ gov_cca_Services services,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.Waves.setServices) */

  /*  Insert-UserDecl-Here {edu.csdms.models.Waves.setServices} (setServices method) */
    struct edu_csdms_models_Waves__data *pd;
    gov_cca_ports_ParameterPortFactory ppf;
    gov_cca_Port gcp;

  /* bocca-default-code. User may edit or delete.begin(edu.csdms.models.Waves.setServices) */
    impl_edu_csdms_models_Waves_boccaSetServices(self, services, _ex); SIDL_CHECK(*_ex);
  /* bocca-default-code. User may edit or delete.end(edu.csdms.models.Waves.setServices) */
  
  /*  Insert-UserCode-Here {edu.csdms.models.Waves.setServices} (setServices method) */
    pd = edu_csdms_models_Waves__get_data (self);
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
      pd->userinput, "Waves Parameters", _ex);

    {
      edu_csdms_tools_ConfigDialog dialog;
  
      dialog = edu_csdms_tools_ConfigDialog__create (_ex);
      edu_csdms_tools_ConfigDialog_read (dialog, "Waves.xml", _ex);
      edu_csdms_tools_ConfigDialog_construct (dialog, ppf, pd->userinput, _ex);
    }

#if 0
    { /* Files and Directories */
      const char* work_dir = g_get_current_dir ();

      gov_cca_ports_ParameterPortFactory_setGroupName (ppf,
        pd->userinput, "Files and Directories", _ex);

      gov_cca_ports_ParameterPortFactory_addRequestString (ppf, pd->userinput,
        "WavesOutputDir", "Path to output files.",
        "Output directory", work_dir, _ex); 
      gov_cca_ports_ParameterPortFactory_addRequestString (ppf, pd->userinput,
        "WavesSitePrefix", "Site prefix for input/output files.",
        "Site prefix", "Waipaoa", _ex);
      gov_cca_ports_ParameterPortFactory_addRequestString (ppf, pd->userinput,
        "HydrotrendCasePrefix", "Case prefix for input/output files.",
        "Case prefix", "50k", _ex);
    }

    { /* Wave Angle tab */
      gov_cca_ports_ParameterPortFactory_setGroupName (ppf,
        pd->userinput, "Wave Angle", _ex);

      gov_cca_ports_ParameterPortFactory_addRequestDouble (ppf, pd->userinput,
        "AngleAsymmetry",
        "Asymmetry of incoming wave angles.",
        "Asymmetry of incoming wave angles", .5, 0, 1, _ex);
      gov_cca_ports_ParameterPortFactory_addRequestDouble (ppf, pd->userinput,
        "AngleHighness",
        "Highness factor for incoming wave angles.",
        "Highness factor for incoming wave angles", .5, 0, 1, _ex);
    }

    { /* Output tab */
      gchar** items = NULL;
      gchar** item = NULL;

      gov_cca_ports_ParameterPortFactory_setGroupName (ppf,
        pd->userinput, "Output Files", _ex);

      items = (gchar**)waves_get_exchange_items ();
      for (item=items; item && *item; item++)
      {
        gchar* var_name = g_strdup_printf ("WavesOutput%s", *item);
        gchar* var_help = g_strdup_printf (
          "Output file prefix for variable, %s"
          "{cb;OFF;waves_%s.nc}", *item, *item);
        gchar* var_label = g_strdup_printf ("%s File", *item);
        gchar* var_default = g_strdup_printf ("OFF");

        gov_cca_ports_ParameterPortFactory_addRequestString (ppf, pd->userinput,
          var_name, var_help, var_label, var_default, _ex);

        g_free (var_name);
        g_free (var_help);
        g_free (var_label);
        g_free (var_default);
      }
    }

    { /* About tab */
      gov_cca_ports_ParameterPortFactory_setGroupName (ppf,
        pd->userinput, "About", _ex);

      gov_cca_ports_ParameterPortFactory_addRequestString (ppf, pd->userinput,
        "ModelName", "Name of the model.",
        "Model name", "Waves", _ex);
      gov_cca_ports_ParameterPortFactory_addRequestString (ppf, pd->userinput,
        "ModelAuthor", "Name of the model author.",
        "Model author", "Eric Hutton", _ex);
    }

#endif
    gov_cca_ports_ParameterPortFactory_addParameterPort (ppf,
      pd->userinput, services, _ex);
    gov_cca_Services_releasePort (services, "ppf", _ex);

    return;

EXIT:;
    /* Insert additional exception cleanup here if needed. */
    return;

    /* DO-NOT-DELETE splicer.end(edu.csdms.models.Waves.setServices) */
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
#define __FUNC__ "impl_edu_csdms_models_Waves_releaseServices"

#ifdef __cplusplus
extern "C"
#endif
void
impl_edu_csdms_models_Waves_releaseServices(
  /* in */ edu_csdms_models_Waves self,
  /* in */ gov_cca_Services services,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.Waves.releaseServices) */

  /*  Insert-UserCode-Here {edu.csdms.models.Waves.releaseServices} (releaseServices method) */

  /* bocca-default-code. User may edit or delete.begin(edu.csdms.models.Waves.releaseServices) */
    impl_edu_csdms_models_Waves_boccaReleaseServices(self, services, _ex); SIDL_CHECK(*_ex);
    return;
  /* bocca-default-code. User may edit or delete.end(edu.csdms.models.Waves.releaseServices) */

EXIT:;
    /* Insert additional exception cleanup here if needed. */
    return;

    /* DO-NOT-DELETE splicer.end(edu.csdms.models.Waves.releaseServices) */
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
#define __FUNC__ "impl_edu_csdms_models_Waves_go"

#ifdef __cplusplus
extern "C"
#endif
int32_t
impl_edu_csdms_models_Waves_go(
  /* in */ edu_csdms_models_Waves self,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.Waves.go) */
    int bocca_status = 0;

    {
      struct sidl_string__array* properties = sidl_string__array_create1d (2);
      struct edu_csdms_models_Waves__data *pd =
               edu_csdms_models_Waves__get_data (self);
      double duration;

      if (!pd->log)
      {
        pd->log = edu_csdms_tools_Verbose__create (_ex);
        edu_csdms_tools_Verbose_set_log_level (pd->log, 1, _ex);
      }

      { /*  Set site and case prefix from GUI */
        gchar *site_prefix = gov_cca_TypeMap_getString (pd->userinput,
                               "WavesSitePrefix", NULL, _ex);
        gchar *case_prefix = gov_cca_TypeMap_getString (pd->userinput,
                               "WavesCasePrefix", NULL, _ex);
        duration = gov_cca_TypeMap_getDouble (pd->userinput,
                     "/Waves/RunDuration", 100, _ex);

        sidl_string__array_set1 (properties, 0, site_prefix);
        sidl_string__array_set1 (properties, 1, case_prefix);
      }

      PRINT (1, "Initialize");
      edu_csdms_models_Waves_initialize (self, properties, _ex); SIDL_CHECK(*_ex);

      PRINT (1, "Run");
      edu_csdms_models_Waves_run (self, duration, _ex); SIDL_CHECK(*_ex);

      PRINT (1, "Finalize");
      edu_csdms_models_Waves_finalize (self, _ex); SIDL_CHECK(*_ex);
    }

    return bocca_status;

EXIT:
    bocca_status = 2;
    edu_csdms_models_waves_finalize (self, _ex);
    return bocca_status;
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.Waves.go) */
  }
}

/*
 * Method:  initialize[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_Waves_initialize"

#ifdef __cplusplus
extern "C"
#endif
void
impl_edu_csdms_models_Waves_initialize(
  /* in */ edu_csdms_models_Waves self,
  /* in array<string> */ struct sidl_string__array* properties,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.Waves.initialize) */
    struct edu_csdms_models_Waves__data* pd;

    /*  Access private data structure */
    pd = edu_csdms_models_Waves__get_data(self);

    if (!pd->log)
    {
      pd->log = edu_csdms_tools_Verbose__create (_ex);
      edu_csdms_tools_Verbose_set_log_level (pd->log, 1, _ex);
    }

    PRINT (2, "Initialize model");
    {
      double asymmetry = 0;
      double highness = 0;
      double height;
      double period;

      { /* Set user-specified constants. */
        asymmetry = gov_cca_TypeMap_getDouble (pd->userinput,
                      "/Waves/AngleAsymmetry", 0.5, _ex);
        highness = gov_cca_TypeMap_getDouble (pd->userinput,
                     "/Waves/AngleHighness", 0.5, _ex);
        height = gov_cca_TypeMap_getDouble (pd->userinput,
                     "/Waves/Height", 2, _ex);
        period = gov_cca_TypeMap_getDouble (pd->userinput,
                     "/Waves/Period", 7, _ex);
      }

      /* Initialize Waves. */
      if (pd->state==NULL)
      {
        pd->state = waves_init (NULL);
        waves_set_angle_asymmetry (pd->state, asymmetry);
        waves_set_angle_highness (pd->state, highness);
        waves_set_height (pd->state, height);
        waves_set_period (pd->state, period);
      }
      else
        SIDL_THROW(*_ex, sidl_SIDLException,
                   "Waves has already been initialized.");
    }

    PRINT (2, "Set up PrintQueue");
    {
      edu_csdms_ports_IRFPort port = edu_csdms_ports_IRFPort__cast (self, _ex); SIDL_CHECK (*_ex);
      pd->print_queue = edu_csdms_tools_PrintQueue__create (_ex); SIDL_CHECK (*_ex);
      edu_csdms_tools_PrintQueue_initialize (pd->print_queue, pd->userinput,
        "/Waves", port, _ex); SIDL_CHECK (*_ex); 
      edu_csdms_tools_PrintQueue_add_files (pd->print_queue, "Output/Scalar", _ex); SIDL_CHECK (*_ex);
    }

    PRINT (2, "Model initialization complete");

    return;

#if 0
    { /* Set up printing */
      char** items = waves_get_exchange_items ();
      char** item;
      char* var_name;
      char* file;
      char* units = g_strdup ("-");
      int i;
      gchar* output_dir = NULL;
      gchar* file_path = NULL;

      output_dir = gov_cca_TypeMap_getString (pd->userinput,
                     "WavesOutputDir", NULL, _ex);

      pd->ncts_files = edu_csdms_tools_nctsfiles__create (_ex);

      pd->print_vals = g_new (char*, g_strv_length (items));
      for (item=items, i=0; item && *item; item++)
      {
        var_name = g_strdup_printf ("WavesOutput%s", *item);
        file = gov_cca_TypeMap_getString (pd->userinput, var_name, NULL, _ex);
        file_path = g_build_filename (output_dir, file, NULL);
        if (g_ascii_strcasecmp (file,"OFF")!=0)
        {
          edu_csdms_tools_nctsfiles_add_file (pd->ncts_files, file_path, *item,
                                              units, _ex);
          pd->print_vals[i] = g_strdup (*item);
          i++;
        }
      }
      pd->print_vals[i] = NULL;
      g_free (units);

      edu_csdms_tools_nctsfiles_open_all (pd->ncts_files, _ex);
    }

    return;
#endif
    EXIT:;
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.Waves.initialize) */
  }
}

/*
 * Method:  run[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_Waves_run"

#ifdef __cplusplus
extern "C"
#endif
void
impl_edu_csdms_models_Waves_run(
  /* in */ edu_csdms_models_Waves self,
  /* in */ double time,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.Waves.run) */
    struct edu_csdms_models_Waves__data* pd =
      edu_csdms_models_Waves__get_data(self);

    /* Initialize Waves. */
    if (pd->state==NULL)
      SIDL_THROW(*_ex, sidl_SIDLException,
        "Waves must be initialized before it can be run.");

    if (pd && pd->state)
    {
      const double horizon = waves_get_end_time (pd->state);
      const double current = waves_get_current_time (pd->state);
      const double start = waves_get_start_time (pd->state);
      double print_time = edu_csdms_tools_PrintQueue_next_print_time (
                            pd->print_queue, _ex);
  
      while (print_time<time)
      {
        impl_edu_csdms_models_Waves_run (self, print_time, _ex);
        print_time = edu_csdms_tools_PrintQueue_next_print_time (
                       pd->print_queue, _ex);
      }

      PRINT_DBL (2, time);
      PRINT_DBL (2, current);

      if (time>horizon)
      {
        PRINT (1, "Requested time is greater than horizon.");
      }
      else if (time>current)
      {
        waves_run_until (pd->state, time);
      
        PRINT (2, "Print everything in the queue");
        edu_csdms_tools_PrintQueue_print_all (pd->print_queue, time, _ex);
      }
      else
      {
        PRINT (2, "Time is less than current time");
      }
    }

    PRINT (2, "End of this run step");
    return;

  EXIT:;
#if 0
    {
      char** item;
      double val;

      for (item=pd->print_vals; item && *item; item++)
      {
        val = waves_get_value (pd->state, *item);
        edu_csdms_tools_nctsfiles_append_val (pd->ncts_files, *item, time, val,
                                              _ex);
      }
    }

    //fprintf (stderr, "Wave angle is %f\n", waves_get_wave_angle (pd->state));

    return;

  EXIT:;
#endif
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.Waves.run) */
  }
}

/*
 * Method:  finalize[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_Waves_finalize"

#ifdef __cplusplus
extern "C"
#endif
void
impl_edu_csdms_models_Waves_finalize(
  /* in */ edu_csdms_models_Waves self,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.Waves.finalize) */
    struct edu_csdms_models_Waves__data* pd =
      edu_csdms_models_Waves__get_data(self);

    PRINT (1, "Clean up.");
    /* Finalize Waves. */
    if (pd->state==NULL)
      SIDL_THROW(*_ex, sidl_SIDLException,
        "Waves must be initialized before it can be destroyed.");

    PRINT (1, "Call finalize.");
    pd->state = waves_finalize (pd->state, TRUE);
    //edu_csdms_tools_nctsfiles_close_all (pd->ncts_files, _ex);

    PRINT (1, "Close print queue");
    edu_csdms_tools_PrintQueue_close (pd->print_queue, _ex);
    
    PRINT (1, "Done finalize step");
    pd->log = NULL;

    return;

  EXIT:;
    PRINT (1, "There was an error");
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.Waves.finalize) */
  }
}

/*
 * Method:  getRaster_nx[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_Waves_getRaster_nx"

#ifdef __cplusplus
extern "C"
#endif
int64_t
impl_edu_csdms_models_Waves_getRaster_nx(
  /* in */ edu_csdms_models_Waves self,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.Waves.getRaster_nx) */
    /* Insert-Code-Here {edu.csdms.models.Waves.getRaster_nx} (getRaster_nx 
      method) */
    /*
     * This method has not been implemented
     */

    /* DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.Waves.getRaster_nx) */
    SIDL_THROW(*_ex, sidl_NotImplementedException,     "This method has not been implemented");
  EXIT:;
    /* DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.Waves.getRaster_nx) */
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.Waves.getRaster_nx) */
  }
}

/*
 * Method:  getRaster_ny[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_Waves_getRaster_ny"

#ifdef __cplusplus
extern "C"
#endif
int64_t
impl_edu_csdms_models_Waves_getRaster_ny(
  /* in */ edu_csdms_models_Waves self,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.Waves.getRaster_ny) */
    /* Insert-Code-Here {edu.csdms.models.Waves.getRaster_ny} (getRaster_ny 
      method) */
    /*
     * This method has not been implemented
     */

    /* DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.Waves.getRaster_ny) */
    SIDL_THROW(*_ex, sidl_NotImplementedException,     "This method has not been implemented");
  EXIT:;
    /* DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.Waves.getRaster_ny) */
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.Waves.getRaster_ny) */
  }
}

/*
 * Method:  getRaster_dx[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_Waves_getRaster_dx"

#ifdef __cplusplus
extern "C"
#endif
double
impl_edu_csdms_models_Waves_getRaster_dx(
  /* in */ edu_csdms_models_Waves self,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.Waves.getRaster_dx) */
    /* Insert-Code-Here {edu.csdms.models.Waves.getRaster_dx} (getRaster_dx 
      method) */
    /*
     * This method has not been implemented
     */

    /* DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.Waves.getRaster_dx) */
    SIDL_THROW(*_ex, sidl_NotImplementedException,     "This method has not been implemented");
  EXIT:;
    /* DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.Waves.getRaster_dx) */
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.Waves.getRaster_dx) */
  }
}

/*
 * Method:  getRaster_dy[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_Waves_getRaster_dy"

#ifdef __cplusplus
extern "C"
#endif
double
impl_edu_csdms_models_Waves_getRaster_dy(
  /* in */ edu_csdms_models_Waves self,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.Waves.getRaster_dy) */
    /* Insert-Code-Here {edu.csdms.models.Waves.getRaster_dy} (getRaster_dy 
      method) */
    /*
     * This method has not been implemented
     */

    /* DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.Waves.getRaster_dy) */
    SIDL_THROW(*_ex, sidl_NotImplementedException,     "This method has not been implemented");
  EXIT:;
    /* DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.Waves.getRaster_dy) */
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.Waves.getRaster_dy) */
  }
}

/*
 * Method:  getRaster_ulx[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_Waves_getRaster_ulx"

#ifdef __cplusplus
extern "C"
#endif
double
impl_edu_csdms_models_Waves_getRaster_ulx(
  /* in */ edu_csdms_models_Waves self,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.Waves.getRaster_ulx) */
    /* Insert-Code-Here {edu.csdms.models.Waves.getRaster_ulx} (getRaster_ulx 
      method) */
    /*
     * This method has not been implemented
     */

    /* DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.Waves.getRaster_ulx) */
    SIDL_THROW(*_ex, sidl_NotImplementedException,     "This method has not been implemented");
  EXIT:;
    /* DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.Waves.getRaster_ulx) */
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.Waves.getRaster_ulx) */
  }
}

/*
 * Method:  getRaster_uly[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_Waves_getRaster_uly"

#ifdef __cplusplus
extern "C"
#endif
double
impl_edu_csdms_models_Waves_getRaster_uly(
  /* in */ edu_csdms_models_Waves self,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.Waves.getRaster_uly) */
    /* Insert-Code-Here {edu.csdms.models.Waves.getRaster_uly} (getRaster_uly 
      method) */
    /*
     * This method has not been implemented
     */

    /* DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.Waves.getRaster_uly) */
    SIDL_THROW(*_ex, sidl_NotImplementedException,     "This method has not been implemented");
  EXIT:;
    /* DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.Waves.getRaster_uly) */
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.Waves.getRaster_uly) */
  }
}

/*
 * Method:  getRaster_grid[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_Waves_getRaster_grid"

#ifdef __cplusplus
extern "C"
#endif
struct sidl_double__array*
impl_edu_csdms_models_Waves_getRaster_grid(
  /* in */ edu_csdms_models_Waves self,
  /* in */ const char* val_string,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.Waves.getRaster_grid) */
    /* Insert-Code-Here {edu.csdms.models.Waves.getRaster_grid} (getRaster_grid 
      method) */
    /*
     * This method has not been implemented
     */

    /* DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.Waves.getRaster_grid) */
    SIDL_THROW(*_ex, sidl_NotImplementedException,     "This method has not been implemented");
  EXIT:;
    /* DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.Waves.getRaster_grid) */
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.Waves.getRaster_grid) */
  }
}

/*
 * Method:  get_raster_dimen[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_Waves_get_raster_dimen"

#ifdef __cplusplus
extern "C"
#endif
struct sidl_int__array*
impl_edu_csdms_models_Waves_get_raster_dimen(
  /* in */ edu_csdms_models_Waves self,
  /* in */ const char* val_string,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.Waves.get_raster_dimen) */

    struct edu_csdms_models_Waves__data *pd =
      edu_csdms_models_Waves__get_data (self);
    struct sidl_int__array* dimen = sidl_int__array_create1d (3);

    {
      int i;
      for (i=0; i<3; i++)
        sidl_int__array_set1 (dimen, i, 1);
    }

    return dimen;
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.Waves.get_raster_dimen) */
  }
}

/*
 * Method:  get_raster_res[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_Waves_get_raster_res"

#ifdef __cplusplus
extern "C"
#endif
struct sidl_double__array*
impl_edu_csdms_models_Waves_get_raster_res(
  /* in */ edu_csdms_models_Waves self,
  /* in */ const char* val_string,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.Waves.get_raster_res) */
    struct edu_csdms_models_Waves__data *pd =
      edu_csdms_models_Waves__get_data (self);
    struct sidl_double__array* res = sidl_double__array_create1d (3);

    {
      int i;
      for (i=0; i<3; i++)
        sidl_double__array_set1 (res, i, 1.);
    }

    return res;
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.Waves.get_raster_res) */
  }
}

/*
 * Method:  get_raster_data[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_Waves_get_raster_data"

#ifdef __cplusplus
extern "C"
#endif
struct sidl__array*
impl_edu_csdms_models_Waves_get_raster_data(
  /* in */ edu_csdms_models_Waves self,
  /* in */ const char* val_string,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.Waves.get_raster_data) */
    struct sidl__array* generic = NULL;

    {
      struct sidl_double__array* vals = NULL;
      struct edu_csdms_models_Waves__data *pd =
        edu_csdms_models_Waves__get_data (self);
  
      if (pd && pd->state)
      {
        double data = waves_get_value (pd->state, val_string);

        vals = sidl_double__array_create1d (1);
        sidl_double__array_set1 (vals, 0, data);
      }

      generic = (struct sidl__array*)vals;
    }

    return generic;
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.Waves.get_raster_data) */
  }
}

/*
 * Method:  get_time_span[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_Waves_get_time_span"

#ifdef __cplusplus
extern "C"
#endif
struct sidl_double__array*
impl_edu_csdms_models_Waves_get_time_span(
  /* in */ edu_csdms_models_Waves self,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.Waves.get_time_span) */
    struct sidl_double__array* span = sidl_double__array_create1d (2);

    {
      struct edu_csdms_models_Waves__data *pd =
        edu_csdms_models_Waves__get_data (self);
      const double start = waves_get_start_time (pd->state);
      const double end = waves_get_end_time (pd->state);
      
      sidl_double__array_set1 (span, 0, start);
      sidl_double__array_set1 (span, 1, end);
    }

    return span;
  EXIT:;
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.Waves.get_time_span) */
  }
}

/*
 * Method:  get_element_set[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_Waves_get_element_set"

#ifdef __cplusplus
extern "C"
#endif
edu_csdms_openmi_IElementSet
impl_edu_csdms_models_Waves_get_element_set(
  /* in */ edu_csdms_models_Waves self,
  /* in */ const char* val_string,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.Waves.get_element_set) */
    /* Insert-Code-Here {edu.csdms.models.Waves.get_element_set} (
      get_element_set method) */
    /*
     * This method has not been implemented
     */

    /* DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.Waves.get_element_set) */
    SIDL_THROW(*_ex, sidl_NotImplementedException,     "This method has not been implemented");
  EXIT:;
    /* DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.Waves.get_element_set) */
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.Waves.get_element_set) */
  }
}

/*
 * Method:  get_value_set[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_Waves_get_value_set"

#ifdef __cplusplus
extern "C"
#endif
edu_csdms_openmi_IValueSet
impl_edu_csdms_models_Waves_get_value_set(
  /* in */ edu_csdms_models_Waves self,
  /* in */ const char* val_string,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.Waves.get_value_set) */
    edu_csdms_openmi_ScalarSet scalarSet =
      edu_csdms_openmi_ScalarSet__create (_ex);

    if (scalarSet)
    {
      struct sidl_double__array* value_array = sidl_double__array_create1d (1);

      { /* Get the private data. */
        struct edu_csdms_models_Waves__data* pd =
          edu_csdms_models_Waves__get_data(self);
        double val;

        if (pd->state==NULL)
          SIDL_THROW(*_ex, sidl_SIDLException,
            "Waves has not been initialized.");

        //val = waves_get_wave_angle (pd->state);
        val = waves_get_value (pd->state, val_string);

        sidl_double__array_set1 (value_array, 0, val);
      }

      edu_csdms_openmi_ScalarSet_init (scalarSet, value_array, _ex);

      sidl_double__array_deleteRef (value_array);
    }
    else
    {
        SIDL_THROW(*_ex, sidl_SIDLException, "Error creating ValueSet.");
    }

    return edu_csdms_openmi_IValueSet__cast (scalarSet, _ex);

  EXIT:;
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.Waves.get_value_set) */
  }
}

/*
 * Method:  get_value_set_data[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_Waves_get_value_set_data"

#ifdef __cplusplus
extern "C"
#endif
struct sidl__array*
impl_edu_csdms_models_Waves_get_value_set_data(
  /* in */ edu_csdms_models_Waves self,
  /* in */ const char* val_string,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.Waves.get_value_set_data) */
    /* Insert-Code-Here {edu.csdms.models.Waves.get_value_set_data} (
      get_value_set_data method) */
    /*
     * This method has not been implemented
     */

    /* DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.Waves.get_value_set_data) */
    SIDL_THROW(*_ex, sidl_NotImplementedException,     "This method has not been implemented");
  EXIT:;
    /* DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.Waves.get_value_set_data) */
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.Waves.get_value_set_data) */
  }
}

/*
 * Method:  set_value_set[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_Waves_set_value_set"

#ifdef __cplusplus
extern "C"
#endif
void
impl_edu_csdms_models_Waves_set_value_set(
  /* in */ edu_csdms_models_Waves self,
  /* in */ const char* val_string,
  /* in */ edu_csdms_openmi_IValueSet values,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.Waves.set_value_set) */
    /* Insert-Code-Here {edu.csdms.models.Waves.set_value_set} (set_value_set 
      method) */
    /*
     * This method has not been implemented
     */

    /* DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.Waves.set_value_set) */
    SIDL_THROW(*_ex, sidl_NotImplementedException,     "This method has not been implemented");
  EXIT:;
    /* DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.Waves.set_value_set) */
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.Waves.set_value_set) */
  }
}
/* Babel internal methods, Users should not edit below this line. */

/* DO-NOT-DELETE splicer.begin(_misc) */
/* Insert-Code-Here {_misc} (miscellaneous code) */
/* DO-NOT-DELETE splicer.end(_misc) */

