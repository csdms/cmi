/*
 * File:          edu_csdms_models_CEM_Impl.c
 * Symbol:        edu.csdms.models.CEM-v0.0
 * Symbol Type:   class
 * Babel Version: 1.4.0 (Revision: 6607 release-1-4-0-branch)
 * Description:   Server-side implementation for edu.csdms.models.CEM
 * 
 * WARNING: Automatically generated; only changes within splicers preserved
 * 
 */

/*
 * DEVELOPERS ARE EXPECTED TO PROVIDE IMPLEMENTATIONS
 * FOR THE FOLLOWING METHODS BETWEEN SPLICER PAIRS.
 */

/*
 * Symbol "edu.csdms.models.CEM" (version 0.0)
 */

#include "edu_csdms_models_CEM_Impl.h"
#include "sidl_NotImplementedException.h"
#include "sidl_Exception.h"
#ifndef included_sidl_MemAllocException_h
#include "sidl_MemAllocException.h"
#endif

/* DO-NOT-DELETE splicer.begin(edu.csdms.models.CEM._includes) */

/* Insert-UserCode-Here {edu.csdms.models.CEM._includes} (includes and arbitrary code) */
#include <glib.h>

/* Bocca generated code. bocca.protected.begin(edu.csdms.models.CEM._includes) */
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
/* Bocca generated code. bocca.protected.end(edu.csdms.models.CEM._includes) */

/* Insert-UserCode-Here {edu.csdms.models.CEM._includes} (includes and arbitrary code) */

/* DO-NOT-DELETE splicer.end(edu.csdms.models.CEM._includes) */

#define SIDL_IOR_MAJOR_VERSION 2
#define SIDL_IOR_MINOR_VERSION 0
/*
 * Static class initializer called exactly once before any user-defined method is dispatched
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_CEM__load"

#ifdef __cplusplus
extern "C"
#endif
void
impl_edu_csdms_models_CEM__load(
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.CEM._load) */
    /* Insert-Code-Here {edu.csdms.models.CEM._load} (static class initializer 
      method) */
    /*
     * This method has not been implemented
     */

    /* DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.CEM._load) */
    SIDL_THROW(*_ex, sidl_NotImplementedException,     "This method has not been implemented");
  EXIT:;
    /* DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.CEM._load) */
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.CEM._load) */
  }
}
/*
 * Class constructor called when the class is created.
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_CEM__ctor"

#ifdef __cplusplus
extern "C"
#endif
void
impl_edu_csdms_models_CEM__ctor(
  /* in */ edu_csdms_models_CEM self,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.CEM._ctor) */

  /* Insert-UserDecl-Here {edu.csdms.models.CEM._ctor} (constructor method) */
    
  /* bocca-default-code. User may edit or delete.begin(edu.csdms.models.CEM._ctor) */
   struct edu_csdms_models_CEM__data *dptr = 
       (struct edu_csdms_models_CEM__data*)malloc(sizeof(struct edu_csdms_models_CEM__data));
   if (dptr) {
      memset(dptr, 0, sizeof(struct edu_csdms_models_CEM__data));
   }
   edu_csdms_models_CEM__set_data(self, dptr);
   #if _BOCCA_CTOR_MESSAGES
     BOCCA_FPRINTF(stderr, 
        "CTOR edu.csdms.models.CEM: %s constructed data %p in self %p\n", 
        __FUNC__, dptr, self);
   #endif /* _BOCCA_CTOR_MESSAGES */
  /* bocca-default-code. User may edit or delete.end(edu.csdms.models.CEM._ctor) */

  /* initialize user elements of dptr here */
  /* Insert-UserCode-Here {edu.csdms.models.CEM._ctor} (constructor method) */

    /* Initialize private data */
    dptr->state = NULL;
    dptr->log = NULL;

    /* DO-NOT-DELETE splicer.end(edu.csdms.models.CEM._ctor) */
  }
}

/*
 * Special Class constructor called when the user wants to wrap his own private data.
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_CEM__ctor2"

#ifdef __cplusplus
extern "C"
#endif
void
impl_edu_csdms_models_CEM__ctor2(
  /* in */ edu_csdms_models_CEM self,
  /* in */ void* private_data,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.CEM._ctor2) */
    /* Insert-Code-Here {edu.csdms.models.CEM._ctor2} (special constructor 
      method) */
    /*
     * This method has not been implemented
     */

    /* DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.CEM._ctor2) */
    SIDL_THROW(*_ex, sidl_NotImplementedException,     "This method has not been implemented");
  EXIT:;
    /* DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.CEM._ctor2) */
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.CEM._ctor2) */
  }
}
/*
 * Class destructor called when the class is deleted.
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_CEM__dtor"

#ifdef __cplusplus
extern "C"
#endif
void
impl_edu_csdms_models_CEM__dtor(
  /* in */ edu_csdms_models_CEM self,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.CEM._dtor) */

  /* deinitialize user elements of dptr here */
  /* Insert-UserCode-Here {edu.csdms.models.CEM._dtor} (destructor method) */
    
  /* bocca-default-code. User may edit or delete.begin(edu.csdms.models.CEM._dtor) */
   struct edu_csdms_models_CEM__data *dptr = 
                edu_csdms_models_CEM__get_data(self);
   if (dptr) {
      free(dptr);
      edu_csdms_models_CEM__set_data(self, NULL);
   }
   #if _BOCCA_CTOR_MESSAGES
     BOCCA_FPRINTF(stderr, "DTOR edu.csdms.models.CEM: %s freed data %p in self %p\n", 
                   __FUNC__, dptr, self);
   #endif /* _BOCCA_CTOR_MESSAGES */
  /* bocca-default-code. User may edit or delete.end(edu.csdms.models.CEM._dtor) */

    /* DO-NOT-DELETE splicer.end(edu.csdms.models.CEM._dtor) */
  }
}

/*
 * Method:  boccaSetServices[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_CEM_boccaSetServices"

#ifdef __cplusplus
extern "C"
#endif
void
impl_edu_csdms_models_CEM_boccaSetServices(
  /* in */ edu_csdms_models_CEM self,
  /* in */ gov_cca_Services services,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.CEM.boccaSetServices) */
/* DO-NOT-EDIT-BOCCA */
/* Bocca generated code. bocca.protected.begin(edu.csdms.models.CEM.boccaSetServices) */
   struct edu_csdms_models_CEM__data *pd;
   gov_cca_ComponentRelease   compRelease = NULL;
   sidl_BaseInterface throwaway_excpt = NULL; /* for use in EXIT block only. */
   int dr_services=0; /* assume releaseServices will not be called if setServices fails */
   

   gov_cca_TypeMap typeMap = NULL;
   gov_cca_Port port = NULL;

   pd = edu_csdms_models_CEM__get_data(self);
   if (pd == NULL) {
     SIDL_THROW(*_ex, sidl_SIDLException, 
          "NULL data pointer in edu.csdms.models.CEM boccaSetServices");
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

   /* Provide a edu.csdms.ports.IRFPort port with port name Elevation */
   gov_cca_Services_addProvidesPort(pd->d_services,   
                                    port,		/* the implementing object */
                                    "Elevation", /* the name seen by the user */
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

  /* Register a use port of type edu.csdms.ports.IRFPort with port name River */  
   gov_cca_Services_registerUsesPort(pd->d_services,   
                                     "River", /* the name seen by the user */
                                     "edu.csdms.ports.IRFPort", /* sidl name of the port type. */
                                     typeMap, /* extra properties */
                                     _ex); SIDL_CHECK(*_ex);

  /* Register a use port of type edu.csdms.ports.IRFPort with port name Waves */  
   gov_cca_Services_registerUsesPort(pd->d_services,   
                                     "Waves", /* the name seen by the user */
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

/* Bocca generated code. bocca.protected.end(edu.csdms.models.CEM.boccaSetServices) */
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.CEM.boccaSetServices) */
  }
}

/*
 * Method:  boccaReleaseServices[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_CEM_boccaReleaseServices"

#ifdef __cplusplus
extern "C"
#endif
void
impl_edu_csdms_models_CEM_boccaReleaseServices(
  /* in */ edu_csdms_models_CEM self,
  /* in */ gov_cca_Services services,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.CEM.boccaReleaseServices) */
/* DO-NOT-EDIT-BOCCA */
/*  Bocca generated code. bocca.protected.begin(edu.csdms.models.CEM.boccaReleaseServices) */

   struct edu_csdms_models_CEM__data *pd;
   sidl_BaseInterface throwaway_excpt = NULL;
   sidl_BaseInterface dummy_excpt = NULL;
   char *errMsg=NULL;
   /* our policy is to trap and optionally print all port-related messages,
      attempting to eliminate all ports. */


   /* UN-Provide a gov.cca.ports.GoPort port with port name Run */
   gov_cca_Services_removeProvidesPort(services, "Run", 
                                       &throwaway_excpt);
   errMsg = "Error: Could not removeProvidesPort(\"Run\")";
   edu_csdms_models_CEM_checkException(self, throwaway_excpt, errMsg, FALSE, 
                                   &dummy_excpt);

   /* UN-Provide a edu.csdms.ports.IRFPort port with port name Elevation */
   gov_cca_Services_removeProvidesPort(services, "Elevation", 
                                       &throwaway_excpt);
   errMsg = "Error: Could not removeProvidesPort(\"Elevation\")";
   edu_csdms_models_CEM_checkException(self, throwaway_excpt, errMsg, FALSE, 
                                   &dummy_excpt);

  /* Un-Register a use port of type gov.cca.ports.ParameterPortFactory with port name ppf */  
   gov_cca_Services_unregisterUsesPort(services, "ppf", 
                                       &throwaway_excpt);
   errMsg= "Error: Could not unregisterUsesPort(\"ppf\")";
   edu_csdms_models_CEM_checkException(self, throwaway_excpt, errMsg, FALSE, 
                                   &dummy_excpt);

  /* Un-Register a use port of type edu.csdms.ports.IRFPort with port name River */  
   gov_cca_Services_unregisterUsesPort(services, "River", 
                                       &throwaway_excpt);
   errMsg= "Error: Could not unregisterUsesPort(\"River\")";
   edu_csdms_models_CEM_checkException(self, throwaway_excpt, errMsg, FALSE, 
                                   &dummy_excpt);

  /* Un-Register a use port of type edu.csdms.ports.IRFPort with port name Waves */  
   gov_cca_Services_unregisterUsesPort(services, "Waves", 
                                       &throwaway_excpt);
   errMsg= "Error: Could not unregisterUsesPort(\"Waves\")";
   edu_csdms_models_CEM_checkException(self, throwaway_excpt, errMsg, FALSE, 
                                   &dummy_excpt);

   services = NULL;
   pd = edu_csdms_models_CEM__get_data(self);
   if (pd == NULL) {
     SIDL_THROW(*_ex, sidl_SIDLException, 
        "NULL data pointer in edu.csdms.models.CEM boccaSetServices");
   }
   gov_cca_Services_deleteRef(pd->d_services, _ex); 
   SIDL_CHECK(*_ex);
   pd->d_services = NULL;
   return;

EXIT:;
   return;
/*  Bocca generated code. bocca.protected.end(edu.csdms.models.CEM.boccaReleaseServices) */
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.CEM.boccaReleaseServices) */
  }
}

/*
 * Method:  checkException[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_CEM_checkException"

#ifdef __cplusplus
extern "C"
#endif
void
impl_edu_csdms_models_CEM_checkException(
  /* in */ edu_csdms_models_CEM self,
  /* in */ sidl_BaseInterface excpt,
  /* in */ const char* msg,
  /* in */ sidl_bool fatal,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.CEM.checkException) */
/* DO-NOT-EDIT-BOCCA */
/*  Bocca generated code. bocca.protected.begin(edu.csdms.models.CEM.checkException) */
#ifdef _BOCCA_STDERR
   sidl_BaseException be = NULL;
   char *etext=NULL;
#endif
   
   if (SIDL_CATCH(excpt, "sidl.BaseException")) {
#ifdef _BOCCA_STDERR
      be  = sidl_BaseException__cast(excpt, _ex); SIDL_CLEAR(*_ex);
      etext = sidl_BaseException_getNote(be, _ex); SIDL_CLEAR(*_ex);
      fprintf(stderr, "edu.csdms.models.CEM: %s \n%s\n", msg,etext);
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
   
/*  Bocca generated code. bocca.protected.end(edu.csdms.models.CEM.checkException) */
    
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.CEM.checkException) */
  }
}

/*
 *  This function should never be called, but helps babel generate better code. 
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_CEM_boccaForceUsePortInclude"

#ifdef __cplusplus
extern "C"
#endif
void
impl_edu_csdms_models_CEM_boccaForceUsePortInclude(
  /* in */ edu_csdms_models_CEM self,
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
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.CEM.boccaForceUsePortInclude) */
/* DO-NOT-EDIT-BOCCA */
  /* Bocca generated code. bocca.protected.begin(edu.csdms.models.CEM.boccaForceUsePortInclude) */
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

  /* Bocca generated code. bocca.protected.end(edu.csdms.models.CEM.boccaForceUsePortInclude) */
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.CEM.boccaForceUsePortInclude) */
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
#define __FUNC__ "impl_edu_csdms_models_CEM_setServices"

#ifdef __cplusplus
extern "C"
#endif
void
impl_edu_csdms_models_CEM_setServices(
  /* in */ edu_csdms_models_CEM self,
  /* in */ gov_cca_Services services,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.CEM.setServices) */

  /*  Insert-UserDecl-Here {edu.csdms.models.CEM.setServices} (setServices method) */
    struct edu_csdms_models_CEM__data *pd;
    gov_cca_ports_ParameterPortFactory ppf;
    gov_cca_Port gcp;

  /* bocca-default-code. User may edit or delete.begin(edu.csdms.models.CEM.setServices) */
    impl_edu_csdms_models_CEM_boccaSetServices(self, services, _ex); SIDL_CHECK(*_ex);
  /* bocca-default-code. User may edit or delete.end(edu.csdms.models.CEM.setServices) */
  
  /*  Insert-UserCode-Here {edu.csdms.models.CEM.setServices} (setServices method) */
    pd = edu_csdms_models_CEM__get_data (self);
    if (!pd)
     SIDL_THROW(*_ex, sidl_SIDLException,
        "NULL data pointer (pd) in edu.csdms.models.CEM setServices");
 
    pd->userinput = gov_cca_Services_createTypeMap(services, _ex);
 
    gcp = gov_cca_Services_getPort(services, "ppf", _ex);
    if (!gcp)
     SIDL_THROW(*_ex, sidl_SIDLException,
        "NULL data pointer (gcp) in edu.csdms.models.CEM setServices");
 
    ppf = gov_cca_ports_ParameterPortFactory__cast (gcp, _ex);
    if (!ppf)
     SIDL_THROW(*_ex, sidl_SIDLException,
        "NULL data pointer (ppf) in edu.csdms.models.CEM setServices");
 
    gov_cca_ports_ParameterPortFactory_initParameterData (ppf,
      &(pd->userinput), "Configure", _ex);
    //gov_cca_ports_ParameterPortFactory_setBatchTitle (ppf,
    //  pd->userinput, "CEM Parameters", _ex);

    {
      edu_csdms_tools_ConfigDialog dialog;

      dialog = edu_csdms_tools_ConfigDialog__create (_ex);
      edu_csdms_tools_ConfigDialog_read (dialog, "CEM.xml", _ex);
      edu_csdms_tools_ConfigDialog_construct (dialog, ppf, pd->userinput, _ex);
    }

    gov_cca_ports_ParameterPortFactory_addRequestString (ppf, pd->userinput,
      "HTML_HELP_FILE", "HTML help file:", "URL for HTML help file",
      "http://csdms.colorado.edu/help/cmt_helpfiles/CEM_Parameters.html", _ex);

#if 0
/*
    gov_cca_ports_ParameterPortFactory_setGroupName (ppf,
      pd->userinput, "File and Directories", _ex);
    gov_cca_ports_ParameterPortFactory_addRequestString (ppf, pd->userinput,
      "OutputFilePrefix", "Prefix for output files.",
      "Prefix for output files", "cem", _ex);
    {
      const char* work_dir = g_get_current_dir ();
 
      gov_cca_ports_ParameterPortFactory_addRequestString (ppf, pd->userinput,
        "WorkingDir", "Working directory to run simulation.",
        "Working directory", work_dir, _ex);
    }
*/
    { /* File and directories tab */
      const char* work_dir = g_get_current_dir ();

      gov_cca_ports_ParameterPortFactory_setGroupName (ppf,
        pd->userinput, "Files and Directories", _ex);

      gov_cca_ports_ParameterPortFactory_addRequestString (ppf, pd->userinput,
        "CEMOutputDir", "Path to output files.",
        "Output directory", work_dir, _ex);
      gov_cca_ports_ParameterPortFactory_addRequestString (ppf, pd->userinput,
        "CEMSitePrefix", "Site prefix for input/output files.",
        "Site prefix", "Waipaoa", _ex);
      gov_cca_ports_ParameterPortFactory_addRequestString (ppf, pd->userinput,
        "CEMCasePrefix", "Case prefix for input/output files.",
        "Case prefix", "50k", _ex);
    }

    { /* Run parameters tab */
      gov_cca_ports_ParameterPortFactory_setGroupName (ppf,
        pd->userinput, "Run Parameters", _ex);

      gov_cca_ports_ParameterPortFactory_addRequestDouble (ppf, pd->userinput,
        "RunTime",
        "Stop time for model.",
        "Stop time for model", 100, 0, 1e6, _ex);
      gov_cca_ports_ParameterPortFactory_addRequestDouble (ppf, pd->userinput,
        "OutputInterval",
        "Interval between output files.",
        "Interval between output files", 10, 0, 1e6, _ex);
      /*
      gov_cca_ports_ParameterPortFactory_addRequestDouble (ppf, pd->userinput,
        "AngleAsymmetry",
        "Asymmetry of incoming wave angles.",
        "Asymmetry of incoming wave angles", .5, 0, 1, _ex);
      gov_cca_ports_ParameterPortFactory_addRequestDouble (ppf, pd->userinput,
        "AngleHighness",
        "Highness factor for incoming wave angles.",
        "Highness factor for incoming wave angles", .5, 0, 1, _ex);
      */
    }

    { /* Output tab*/
      gchar** items = NULL;
      gchar** item = NULL;

      gov_cca_ports_ParameterPortFactory_setGroupName (ppf,
        pd->userinput, "Output Files", _ex);

      items = (gchar**)deltas_get_exchange_items ();

      for (item=items; item && *item; item++)
      {
        gchar* var_name = g_strdup_printf ("CEMOutput%s", *item);
        gchar* var_help = g_strdup_printf (
          "Output file prefix for variable, %s"
          "{cb;OFF;cem_%s.nc}", *item, *item);
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
        "ModelAuthor", "Author of this model.", "Author", "Brad Murray", _ex);
      gov_cca_ports_ParameterPortFactory_addRequestString (ppf, pd->userinput,
        "ModelName", "Name of this model.", "Model Name", "CEM", _ex);
    }
#endif
    gov_cca_ports_ParameterPortFactory_addParameterPort (ppf,
      pd->userinput, services, _ex);
    gov_cca_Services_releasePort (services, "ppf", _ex);

EXIT:;
    /* Insert additional exception cleanup here if needed. */
    return;

    /* DO-NOT-DELETE splicer.end(edu.csdms.models.CEM.setServices) */
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
#define __FUNC__ "impl_edu_csdms_models_CEM_releaseServices"

#ifdef __cplusplus
extern "C"
#endif
void
impl_edu_csdms_models_CEM_releaseServices(
  /* in */ edu_csdms_models_CEM self,
  /* in */ gov_cca_Services services,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.CEM.releaseServices) */

  /*  Insert-UserCode-Here {edu.csdms.models.CEM.releaseServices} (releaseServices method) */

  /* bocca-default-code. User may edit or delete.begin(edu.csdms.models.CEM.releaseServices) */
    impl_edu_csdms_models_CEM_boccaReleaseServices(self, services, _ex); SIDL_CHECK(*_ex);
    return;
  /* bocca-default-code. User may edit or delete.end(edu.csdms.models.CEM.releaseServices) */

EXIT:;
    /* Insert additional exception cleanup here if needed. */
    return;

    /* DO-NOT-DELETE splicer.end(edu.csdms.models.CEM.releaseServices) */
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
#define __FUNC__ "impl_edu_csdms_models_CEM_go"

#ifdef __cplusplus
extern "C"
#endif
int32_t
impl_edu_csdms_models_CEM_go(
  /* in */ edu_csdms_models_CEM self,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.CEM.go) */
    int bocca_status = 0;

    {
      int i;
      struct sidl_string__array* properties = sidl_string__array_create1d (2);
      struct edu_csdms_models_CEM__data *pd =
               edu_csdms_models_CEM__get_data (self);
      double duration;
    
      if (!pd->log)
      {
        pd->log = edu_csdms_tools_Verbose__create (_ex);
        edu_csdms_tools_Verbose_set_log_level (pd->log, 1, _ex);
      }

      { /* Set site and case prefix from GUI */
        gchar *site_prefix = gov_cca_TypeMap_getString (pd->userinput,
                               "CEMSitePrefix", NULL, _ex);
        gchar *case_prefix = gov_cca_TypeMap_getString (pd->userinput,
                               "CEMCasePrefix", NULL, _ex);

        /* Duration in days */
        duration = gov_cca_TypeMap_getDouble (pd->userinput,
                     "/CEM/RunDuration", 100, _ex);

        sidl_string__array_set1 (properties, 0, site_prefix);
        sidl_string__array_set1 (properties, 1, case_prefix);
      }

      PRINT (1, "Initialize");
      edu_csdms_models_CEM_initialize (self, properties, _ex); SIDL_CHECK(*_ex);

      PRINT (1, "Run");
      edu_csdms_models_CEM_run (self, duration, _ex); SIDL_CHECK(*_ex);

      PRINT (1, "Finalize");
      edu_csdms_models_CEM_finalize (self, _ex); SIDL_CHECK(*_ex);
    }

    return bocca_status;

EXIT:
    bocca_status = 2;
    edu_csdms_models_CEM_finalize (self, _ex);
    return bocca_status;

#if 0
    edu_csdms_ports_PrinterPort printer;
    edu_csdms_ports_IRFPort river;
    edu_csdms_ports_IRFPort waves;
    struct edu_csdms_models_CEM__data *pd =
      edu_csdms_models_CEM__get_data (self);
    double stop_time = 0;
    int output_interval = 0;
    char* run_prefix = NULL;

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

    { /* Connect to the River port. */
      gov_cca_Port port;
      sidl_BaseInterface exception = NULL;
      port = gov_cca_Services_getPort(pd->d_services, "River", &exception);
      if (SIDL_CATCH(exception, "gov.cca.CCAException"))
      {
        fprintf(stderr, "Exception:: %s:%d: getPort(\"River\") failed.\n",
                __FILE__, __LINE__);
        SIDL_CLEAR(exception);
        return -1;
      }

      river = edu_csdms_ports_IRFPort__cast (port, &exception);
      if (river == NULL)
      {
        fprintf(stderr, "Exception:: %s:%d: cast(\"River\") failed.\n",
                __FILE__, __LINE__);
        SIDL_CLEAR(exception);
        return -1;
      }
    }

    { /* Connect to the Waves port. */
      gov_cca_Port port;
      sidl_BaseInterface exception = NULL;
      port = gov_cca_Services_getPort(pd->d_services, "Waves", &exception);
      if (SIDL_CATCH(exception, "gov.cca.CCAException"))
      {
        fprintf(stderr, "Exception:: %s:%d: getPort(\"Waves\") failed.\n",
                __FILE__, __LINE__);
        SIDL_CLEAR(exception);
        return -1;
      }

      waves = edu_csdms_ports_IRFPort__cast (port, &exception);
      if (waves == NULL)
      {
        fprintf(stderr, "Exception:: %s:%d: cast(\"Waves\") failed.\n",
                __FILE__, __LINE__);
        SIDL_CLEAR(exception);
        return -1;
      }
    }

    { /* Set the output directory. */
      char* work_dir = NULL;
 
      work_dir = gov_cca_TypeMap_getString (pd->userinput,
                   "WorkingDir", NULL, _ex);
      run_prefix = gov_cca_TypeMap_getString (pd->userinput,
                     "OutputFilePrefix", NULL, _ex);
 
      g_chdir (work_dir);
    }

    { /* Set the finish time. */
      stop_time = gov_cca_TypeMap_getDouble (pd->userinput,
                   "RunTime", 0, _ex);
      output_interval = gov_cca_TypeMap_getDouble (pd->userinput,
                   "OutputInterval", stop_time, _ex);
    }

    impl_edu_csdms_models_CEM_initialize (self, NULL, _ex);
    
    { /* Set angles. */
      double wave_asymmetry = 0.5;
      double wave_highness = 0.5;

      wave_asymmetry = gov_cca_TypeMap_getDouble (pd->userinput,
                         "AngleAsymmetry", .5, _ex);
      wave_highness = gov_cca_TypeMap_getDouble (pd->userinput,
                        "AngleHighness", .5, _ex);
    
      deltas_set_angle_asymmetry (pd->state, wave_asymmetry);
      deltas_set_angle_highness (pd->state, wave_highness);
    }

    edu_csdms_ports_IRFPort_initialize (river, NULL, _ex);
    edu_csdms_ports_IRFPort_initialize (waves, NULL, _ex);

    { /* Run the model and print output. */
      int i;
      edu_csdms_openmi_IScalarSet scalar_set;
      edu_csdms_openmi_IValueSet value_set;

      for (i=0; i<stop_time; i++)
      {
        edu_csdms_ports_IRFPort_run (river, i, _ex);
        edu_csdms_ports_IRFPort_run (waves, i, _ex);

        /* Get and set river values. */
        value_set = edu_csdms_ports_IRFPort_get_Value_Set (river,
                      "bed_load_flux_from_river", _ex);
        scalar_set = edu_csdms_openmi_IScalarSet__cast (value_set, _ex);
        impl_edu_csdms_models_CEM_setValueSet (self,
          "bed_load_flux_from_river",
          value_set, _ex);
    
        /* Get and set wave values. */
        value_set = edu_csdms_ports_IRFPort_get_Value_Set (waves,
                      "sea_surface_wave_from_direction", _ex);
        scalar_set = edu_csdms_openmi_IScalarSet__cast (value_set, _ex);
        impl_edu_csdms_models_CEM_setValueSet (self,
          "sea_surface_wave_from_direction",
          value_set, _ex);

        impl_edu_csdms_models_CEM_run (self, i, _ex);
    
        if (printer && i%output_interval==0)
        {
          char* prefix = g_strdup_printf ("%s_%d_depth", run_prefix, i);
          float* data = deltas_get_depth (pd->state);
          struct sidl_float__array* array;
          int lower[2] = {0, 0};
          int upper[2] = {deltas_get_nx (pd->state)-1,
                          deltas_get_ny (pd->state)/2-1};
          int stride[2] = {1, deltas_get_ny (pd->state)};
          
          array = sidl_float__array_borrow (
                    data + deltas_get_ny(pd->state)/4,
                    2, lower, upper, stride);

          fprintf (stderr, "*** Printing output to file: %s\n", prefix);
          fflush (stderr);

          edu_csdms_ports_PrinterPort_PrintMatrix (printer, prefix,
            "Water Depth", (struct sidl__array*)array, _ex);

          free (prefix);
        }
      }
    }

    edu_csdms_ports_IRFPort_finalize (river, _ex);
    edu_csdms_ports_IRFPort_finalize (waves, _ex);

    impl_edu_csdms_models_CEM_finalize (self, _ex);

    { /* Release the ports. */
      gov_cca_Services_releasePort(pd->d_services, "Printer", _ex);
      if (SIDL_CATCH(*_ex, "gov.cca.CCAException")) {
        fprintf(stderr, "Exception:: %s:%d: releasePort(\"Printer\") failed.\n",
           __FILE__, __LINE__);
        SIDL_CLEAR(*_ex);
        return(-1);
      }

      gov_cca_Services_releasePort(pd->d_services, "River", _ex);
      if (SIDL_CATCH(*_ex, "gov.cca.CCAException")) {
        fprintf(stderr, "Exception:: %s:%d: releasePort(\"River\") failed.\n",
           __FILE__, __LINE__);
        SIDL_CLEAR(*_ex);
        return(-1);
      }

      gov_cca_Services_releasePort(pd->d_services, "Waves", _ex);
      if (SIDL_CATCH(*_ex, "gov.cca.CCAException")) {
        fprintf(stderr, "Exception:: %s:%d: releasePort(\"Waves\") failed.\n",
           __FILE__, __LINE__);
        SIDL_CLEAR(*_ex);
        return(-1);
      }
    }

    return;
#endif
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.CEM.go) */
  }
}

/*
 * Method:  initialize[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_CEM_initialize"

#ifdef __cplusplus
extern "C"
#endif
void
impl_edu_csdms_models_CEM_initialize(
  /* in */ edu_csdms_models_CEM self,
  /* in array<string> */ struct sidl_string__array* properties,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.CEM.initialize) */
    struct edu_csdms_models_CEM__data* pd;

    /* Access private data structure */
    pd = edu_csdms_models_CEM__get_data(self);

    if (!pd->log)
    {
      pd->log = edu_csdms_tools_Verbose__create (_ex);
      edu_csdms_tools_Verbose_set_log_level (pd->log, 1, _ex);
    }

    /* Initialize CEM. */
    if (pd->state)
    {
      PRINT (1, "Model is already initialized");
      return;
    }

    PRINT (2, "Create port queue");
    {
      pd->irf_ports = edu_csdms_tools_IRFPortQueue__create (_ex);

      PRINT (2, "Initialize port queue");
      edu_csdms_tools_IRFPortQueue_initialize (pd->irf_ports, pd->d_services,
        edu_csdms_ports_IRFPort__cast (self, _ex), _ex);

      PRINT (2, "Add port to queue");
      edu_csdms_tools_IRFPortQueue_add_port (pd->irf_ports, "River", _ex);
      edu_csdms_tools_IRFPortQueue_add_port (pd->irf_ports, "Waves", _ex);

      PRINT (2, "Connect ports in queue");
      edu_csdms_tools_IRFPortQueue_connect_ports (pd->irf_ports, _ex);
    }

    PRINT (2, "Initialize model");
    { /* Initialize CEM */
      double shoreface_slope, shoreface_depth, shelf_slope;

      pd->state = deltas_new ();

      shoreface_slope= gov_cca_TypeMap_getDouble (pd->userinput,
                     "/CEM/ShorefaceSlope", .01, _ex);
      shoreface_depth = gov_cca_TypeMap_getDouble (pd->userinput,
                     "/CEM/ShorefaceDepth", 10, _ex);
      shelf_slope = gov_cca_TypeMap_getDouble (pd->userinput,
                     "/CEM/ShelfSlope", .001, _ex);

      deltas_set_shoreface_slope (pd->state, shoreface_slope);
      deltas_set_shoreface_depth (pd->state, shoreface_depth);
      deltas_set_shelf_slope (pd->state, shelf_slope);

      pd->state = deltas_init (pd->state);

      deltas_use_external_waves (pd->state);
      deltas_use_sed_flux (pd->state);
    }

    PRINT (2, "Set up PrintQueue");
    {
      edu_csdms_ports_IRFPort port = edu_csdms_ports_IRFPort__cast (self, _ex); SIDL_CHECK (*_ex);
      pd->print_queue = edu_csdms_tools_PrintQueue__create (_ex); SIDL_CHECK (*_ex);
      edu_csdms_tools_PrintQueue_initialize (pd->print_queue, pd->userinput,
        "/CEM", port, _ex); SIDL_CHECK (*_ex);
      edu_csdms_tools_PrintQueue_add_files (pd->print_queue, "Output/Grid", _ex); SIDL_CHECK (*_ex);
    }

    PRINT (2, "Initialize model uses ports");
    edu_csdms_tools_IRFPortQueue_initialize_ports (pd->irf_ports, properties,
                                                   _ex);
    PRINT (2, "Initialize mappers");
    edu_csdms_tools_IRFPortQueue_initialize_mapper (pd->irf_ports, "River", _ex);
    edu_csdms_tools_IRFPortQueue_initialize_mapper (pd->irf_ports, "Waves", _ex);

    {
      double duration;
      sidl_bool ok;
      duration = gov_cca_TypeMap_getDouble (pd->userinput,
                                            "/CEM/RunDuration", 100, _ex);
      ok = edu_csdms_tools_IRFPortQueue_check_time_spans (pd->irf_ports,
                                                          0, duration, _ex);

      if (!ok)
      {
        PRINT (0, "Incompatible time horizons");
        SIDL_THROW(*_ex, sidl_SIDLException, "Incompatible time horizons");
      }
    }

    PRINT (2, "Model initialization complete");

    return;
#if 0
    {
      pd->irf_ports = edu_csdms_tools_irfports__create (_ex);

      edu_csdms_tools_irfports_set_services (pd->irf_ports, pd->d_services,
                                             _ex);
      edu_csdms_tools_irfports_add_port (pd->irf_ports, "River", _ex);
      edu_csdms_tools_irfports_add_port (pd->irf_ports, "Waves", _ex);
      edu_csdms_tools_irfports_connect_ports (pd->irf_ports, _ex);

      fprintf (stderr, "Ports are connected\n");
      fflush (stderr);
      fflush (stdout);
    }

    { /* Initialize CEM */
      fprintf (stderr, "CEM: Initialize\n"); fflush (stderr);
      pd->state = deltas_init (NULL);
      deltas_use_external_waves (pd->state);
    }

    fprintf (stderr, "CEM: Uses ports\n"); fflush (stderr);
    edu_csdms_tools_irfports_initialize_ports (pd->irf_ports, properties, _ex);

    { /*  Set up printing */
      char** items = deltas_get_exchange_items ();
      char** item;
      char* var_name;
      char* file;
      char* units = g_strdup ("-");
      int i;
      const int nx = deltas_get_nx (pd->state);
      const int ny = deltas_get_ny (pd->state)/2;
      const double dx = deltas_get_dx (pd->state);
      const double dy = deltas_get_dy (pd->state);
      gchar* output_dir = NULL;
      gchar* file_path = NULL;

      output_dir = gov_cca_TypeMap_getString (pd->userinput,
                     "CEMOutputDir", NULL, _ex);

      pd->ncgs_files = edu_csdms_tools_ncgsfiles__create (_ex);

      pd->print_vals = g_new (char*, g_strv_length (items));
      for (item=items, i=0; item && *item; item++)
      {
        var_name = g_strdup_printf ("CEMOutput%s", *item);
        file = gov_cca_TypeMap_getString (pd->userinput, var_name, NULL, _ex);
        file_path = g_build_filename (output_dir, file, NULL);
        if (g_ascii_strcasecmp (file,"OFF")!=0)
        {
          edu_csdms_tools_ncgsfiles_add_file (pd->ncgs_files, file_path, *item,
                                              units, ny, nx, dy, dx, _ex);
          pd->print_vals[i] = g_strdup (*item);
          i++;
        }
        g_free (file_path);
      }
      pd->print_vals[i] = NULL;
      g_free (units);

      edu_csdms_tools_ncgsfiles_open_all (pd->ncgs_files, _ex);
    }

    return;
#endif
#if 0
    if (pd->state==NULL)
      pd->state = deltas_init (NULL);
    else
      SIDL_THROW(*_ex, sidl_SIDLException, "CEM has already been initialized.");

    { /* Set the prefix for outputfiles. */
      struct edu_csdms_models_CEM__data *pd;
      char* prefix = NULL;

      pd = edu_csdms_models_CEM__get_data (self);

      prefix = gov_cca_TypeMap_getString (pd->userinput,
                    "OutputFilePrefix", NULL, _ex);

      deltas_set_save_file (pd->state, prefix);
    }

    return;
#endif
  EXIT:;
    return;
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.CEM.initialize) */
  }
}

/*
 * Method:  run[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_CEM_run"

#ifdef __cplusplus
extern "C"
#endif
void
impl_edu_csdms_models_CEM_run(
  /* in */ edu_csdms_models_CEM self,
  /* in */ double time,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.CEM.run) */
    struct edu_csdms_models_CEM__data* pd =
      edu_csdms_models_CEM__get_data(self);

    /* Run CEM. */
    if (pd && pd->state)
    {
      const double horizon = deltas_get_end_time (pd->state);
      double current = deltas_get_current_time (pd->state);
      const double start = deltas_get_start_time (pd->state);
      double print_time = edu_csdms_tools_PrintQueue_next_print_time (
                            pd->print_queue, _ex);

      while (print_time<time)
      {
        impl_edu_csdms_models_CEM_run (self, print_time, _ex);
        print_time = edu_csdms_tools_PrintQueue_next_print_time (
                       pd->print_queue, _ex);
      }

      current = deltas_get_current_time (pd->state);
/*
      fprintf (stderr, "CEM: current time is %f\n", current);
      fprintf (stderr, "CEM: horizon time is %f\n", horizon);
      fprintf (stderr, "CEM: time is %f\n", time);
      fflush (stderr);
*/
      if (time>horizon)
      {
        PRINT (1, "Requested time is greater than horizon.");
      }
      else if (time>=current)
      {
        double t;
        const double dt = 1;
        const double stop_time = time;

        while (current<stop_time)
        {
          t = current + dt;
          if (t>stop_time)
            t = stop_time;

          fprintf (stderr, "#CMT Time: %f\n", current);

          //fprintf (stderr, "CEM: Run ports until %f\n", t); fflush (stderr);
          edu_csdms_tools_IRFPortQueue_run_ports (pd->irf_ports, current, _ex);

          //fprintf (stderr, "CEM: Map flux values\n"); fflush (stderr);
          //edu_csdms_tools_IRFPortQueue_map_value (pd->irf_ports,
          //  "River", "SedimentFlux", "SedimentFlux", _ex);
          {
            struct sidl__array* data;
            struct sidl_double__array* d_array;
            double* vals;
            edu_csdms_ports_IRFPort port;

            port = edu_csdms_tools_IRFPortQueue_get_port (pd->irf_ports,
                     "River", _ex);
            data = edu_csdms_ports_IRFPort_get_raster_data (port,
                     "SedimentFlux", _ex);
            d_array  = sidl_double__array_cast (data);
            vals = sidl_double__array_first (d_array);
            deltas_set_sediment_flux_grid (pd->state, vals);
            sidl__array_deleteRef (data);
          }

          //edu_csdms_tools_IRFPortQueue_map_value (pd->irf_ports,
          //  "River", "mean_suspended_load_flux_from_river",
          //  "mean_suspended_load_flux_from_river", _ex);
          //fprintf (stderr, "CEM: Map wave values\n"); fflush (stderr);
          edu_csdms_tools_IRFPortQueue_map_value (pd->irf_ports,
            "Waves", "sea_surface_wave_from_direction",
            "sea_surface_wave_from_direction", _ex);

          edu_csdms_tools_IRFPortQueue_map_value (pd->irf_ports,
            "Waves", "sea_surface_wave_height",
            "sea_surface_wave_height", _ex);
          edu_csdms_tools_IRFPortQueue_map_value (pd->irf_ports,
            "Waves", "sea_surface_wave_period",
            "sea_surface_wave_period", _ex);

          //fprintf (stderr, "CEM: Run CEM until %f\n", t); fflush (stderr);
          {
            double now;
            deltas_run_until (pd->state, t);
            now = deltas_get_current_time (pd->state);
            //fprintf (stderr, "CEM: Current time is now %f\n", now); fflush (stderr);
          }
      
          PRINT (2, "Print everything in the queue");
          edu_csdms_tools_PrintQueue_print_all (pd->print_queue, t, _ex);

          current = deltas_get_current_time (pd->state);
          //fprintf (stderr, "CEM: Time is now %f\n", current);
        }

#if 0
        edu_csdms_tools_irfports_run_ports (pd->irf_ports, current, _ex);

        {
          edu_csdms_openmi_IScalarSet scalar_set;
          edu_csdms_openmi_IValueSet value_set;
          edu_csdms_ports_IRFPort river;
          edu_csdms_ports_IRFPort waves;

          river = edu_csdms_tools_irfports_get_port (pd->irf_ports, "River",
                                                     _ex); 
          waves = edu_csdms_tools_irfports_get_port (pd->irf_ports, "Waves",
                                                     _ex); 

          /* Get and set river values. */
          value_set = edu_csdms_ports_IRFPort_get_Value_Set (river,
                        "bed_load_flux_from_river", _ex);
          scalar_set = edu_csdms_openmi_IScalarSet__cast (value_set, _ex);
          impl_edu_csdms_models_CEM_setValueSet (self,
            "bed_load_flux_from_river",
            value_set, _ex);
    
          /* Get and set wave values. */
          value_set = edu_csdms_ports_IRFPort_get_Value_Set (waves,
                        "sea_surface_wave_from_direction", _ex);
          scalar_set = edu_csdms_openmi_IScalarSet__cast (value_set, _ex);
          impl_edu_csdms_models_CEM_setValueSet (self,
            "sea_surface_wave_from_direction",
            value_set, _ex);
        }

        deltas_run_until (pd->state, time);
        fprintf (stderr, "CEM: wave angle is %f\n",
                         deltas_get_wave_angle (pd->state));
        fprintf (stderr, "CEM: time is %f\n",
                         deltas_get_current_time (pd->state));
        fflush (stderr);

        {
          char** item;
          struct sidl_double__array* array;
          double* val;
          int lower[2] = {0, 0};
          int upper[2] = {deltas_get_nx (pd->state)-1,
                          deltas_get_ny (pd->state)/2-1};
          int stride[2] = {1, deltas_get_ny (pd->state)};
                              
          for (item=pd->print_vals; item && *item; item++) 
          {
            fprintf (stderr, "CEM: Get value grid\n");
            fflush (stderr);
            //val = deltas_get_value_grid (pd->state, *item);
            fprintf (stderr, "CEM: Borrow array\n");
            //fprintf (stderr, "CEM: val is %ld\n", val);
            fprintf (stderr, "CEM: nx is %d\n", deltas_get_nx (pd->state));
            fprintf (stderr, "CEM: ny is %d\n", deltas_get_ny (pd->state));
            fprintf (stderr, "CEM: sizeof (double) = %d\n", sizeof (double));
            fflush (stderr);
            /*
            array = sidl_double__array_borrow (
                      val + deltas_get_ny(pd->state)/4,
                      2, lower, upper, stride);
            */
            array = impl_edu_csdms_models_CEM_getRaster_grid(self, "DEPTH", _ex);
            fprintf (stderr, "CEM: Appending val %s to file\n", *item);
            fflush (stderr);
            edu_csdms_tools_ncgsfiles_append_val (pd->ncgs_files, *item, array,
                                                 _ex);
            fprintf (stderr, "CEM: Done\n");
            fflush (stderr);
          }

        }
#endif
      }
      else
      {
        //fprintf (stderr, "CEM: Time is less than current time (%f<%f)",
        //                 time, current);
        PRINT (2, "Time is less than current time");
      }
    }

    PRINT (2, "End of this run step");
    return;

#if 0
    if (pd->state==NULL)
      SIDL_THROW(*_ex, sidl_SIDLException,
        "CEM must be initialized before it can be run.");

    deltas_run_until( pd->state, time );
    return;
#endif
  EXIT:;
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.CEM.run) */
  }
}

/*
 * Method:  finalize[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_CEM_finalize"

#ifdef __cplusplus
extern "C"
#endif
void
impl_edu_csdms_models_CEM_finalize(
  /* in */ edu_csdms_models_CEM self,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.CEM.finalize) */
    struct edu_csdms_models_CEM__data* pd =
      edu_csdms_models_CEM__get_data(self);

    /* Clean up CEM. */
    PRINT (1, "Clean up.");

    if (pd->state)
    {
      { /* Free resources. */
        deltas_finalize(pd->state, TRUE);
        pd->state = NULL;
      }

      PRINT (1, "Close print queue.");
      edu_csdms_tools_PrintQueue_close (pd->print_queue, _ex);

      PRINT (1, "Finalize ports.");
      edu_csdms_tools_IRFPortQueue_finalize_ports (pd->irf_ports, _ex);
      PRINT (1, "Disconnect ports.");
      edu_csdms_tools_IRFPortQueue_disconnect_ports (pd->irf_ports, _ex);
  
      PRINT (1, "Done finalize step");

#if 0
    edu_csdms_tools_irfports_finalize_ports (pd->irf_ports, _ex);
    edu_csdms_tools_irfports_disconnect_ports (pd->irf_ports, _ex);

    pd->state = NULL;

    edu_csdms_tools_ncgsfiles_close_all (pd->ncgs_files, _ex);
#endif

      pd->log = NULL;
    }

    return;

#if 0
    if (pd->state==NULL)
      SIDL_THROW(*_ex, sidl_SIDLException,
        "CEM must be initialized before it can be run.");

    deltas_finalize(pd->state, TRUE);
    return;
#endif
  EXIT:;
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.CEM.finalize) */
  }
}

/*
 * Method:  getRaster_nx[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_CEM_getRaster_nx"

#ifdef __cplusplus
extern "C"
#endif
int64_t
impl_edu_csdms_models_CEM_getRaster_nx(
  /* in */ edu_csdms_models_CEM self,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.CEM.getRaster_nx) */
    /* Insert-Code-Here {edu.csdms.models.CEM.getRaster_nx} (getRaster_nx 
      method) */
    /*
     * This method has not been implemented
     */

    /* DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.CEM.getRaster_nx) */
    SIDL_THROW(*_ex, sidl_NotImplementedException,     "This method has not been implemented");
  EXIT:;
    /* DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.CEM.getRaster_nx) */
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.CEM.getRaster_nx) */
  }
}

/*
 * Method:  getRaster_ny[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_CEM_getRaster_ny"

#ifdef __cplusplus
extern "C"
#endif
int64_t
impl_edu_csdms_models_CEM_getRaster_ny(
  /* in */ edu_csdms_models_CEM self,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.CEM.getRaster_ny) */
    /* Insert-Code-Here {edu.csdms.models.CEM.getRaster_ny} (getRaster_ny 
      method) */
    /*
     * This method has not been implemented
     */

    /* DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.CEM.getRaster_ny) */
    SIDL_THROW(*_ex, sidl_NotImplementedException,     "This method has not been implemented");
  EXIT:;
    /* DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.CEM.getRaster_ny) */
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.CEM.getRaster_ny) */
  }
}

/*
 * Method:  getRaster_dx[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_CEM_getRaster_dx"

#ifdef __cplusplus
extern "C"
#endif
double
impl_edu_csdms_models_CEM_getRaster_dx(
  /* in */ edu_csdms_models_CEM self,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.CEM.getRaster_dx) */
    /* Insert-Code-Here {edu.csdms.models.CEM.getRaster_dx} (getRaster_dx 
      method) */
    /*
     * This method has not been implemented
     */

    /* DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.CEM.getRaster_dx) */
    SIDL_THROW(*_ex, sidl_NotImplementedException,     "This method has not been implemented");
  EXIT:;
    /* DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.CEM.getRaster_dx) */
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.CEM.getRaster_dx) */
  }
}

/*
 * Method:  getRaster_dy[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_CEM_getRaster_dy"

#ifdef __cplusplus
extern "C"
#endif
double
impl_edu_csdms_models_CEM_getRaster_dy(
  /* in */ edu_csdms_models_CEM self,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.CEM.getRaster_dy) */
    /* Insert-Code-Here {edu.csdms.models.CEM.getRaster_dy} (getRaster_dy 
      method) */
    /*
     * This method has not been implemented
     */

    /* DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.CEM.getRaster_dy) */
    SIDL_THROW(*_ex, sidl_NotImplementedException,     "This method has not been implemented");
  EXIT:;
    /* DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.CEM.getRaster_dy) */
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.CEM.getRaster_dy) */
  }
}

/*
 * Method:  getRaster_ulx[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_CEM_getRaster_ulx"

#ifdef __cplusplus
extern "C"
#endif
double
impl_edu_csdms_models_CEM_getRaster_ulx(
  /* in */ edu_csdms_models_CEM self,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.CEM.getRaster_ulx) */
    /* Insert-Code-Here {edu.csdms.models.CEM.getRaster_ulx} (getRaster_ulx 
      method) */
    /*
     * This method has not been implemented
     */

    /* DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.CEM.getRaster_ulx) */
    SIDL_THROW(*_ex, sidl_NotImplementedException,     "This method has not been implemented");
  EXIT:;
    /* DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.CEM.getRaster_ulx) */
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.CEM.getRaster_ulx) */
  }
}

/*
 * Method:  getRaster_uly[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_CEM_getRaster_uly"

#ifdef __cplusplus
extern "C"
#endif
double
impl_edu_csdms_models_CEM_getRaster_uly(
  /* in */ edu_csdms_models_CEM self,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.CEM.getRaster_uly) */
    /* Insert-Code-Here {edu.csdms.models.CEM.getRaster_uly} (getRaster_uly 
      method) */
    /*
     * This method has not been implemented
     */

    /* DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.CEM.getRaster_uly) */
    SIDL_THROW(*_ex, sidl_NotImplementedException,     "This method has not been implemented");
  EXIT:;
    /* DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.CEM.getRaster_uly) */
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.CEM.getRaster_uly) */
  }
}

/*
 * Method:  getRaster_grid[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_CEM_getRaster_grid"

#ifdef __cplusplus
extern "C"
#endif
struct sidl_double__array*
impl_edu_csdms_models_CEM_getRaster_grid(
  /* in */ edu_csdms_models_CEM self,
  /* in */ const char* val_string,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.CEM.getRaster_grid) */
    struct sidl_double__array* array = NULL;
#if 0
    struct edu_csdms_models_CEM__data *pd =
      edu_csdms_models_CEM__get_data (self);

    {
      float* data = NULL;
      int nx = deltas_get_nx (pd->state);
      int ny = deltas_get_ny (pd->state);
      int i, j;

      array = sidl_double__array_create2dRow (nx, ny/2);

      data = deltas_get_depth (pd->state);
      data += ny/4;
      for (i=0; i<nx; i++)
      {
        for (j=0; j<ny/2; j++)
          sidl_double__array_set2 (array, i, j, data[j]);
        data += ny;
      }
    }

#endif
    return array;
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.CEM.getRaster_grid) */
  }
}

/*
 * Method:  get_raster_dimen[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_CEM_get_raster_dimen"

#ifdef __cplusplus
extern "C"
#endif
struct sidl_int__array*
impl_edu_csdms_models_CEM_get_raster_dimen(
  /* in */ edu_csdms_models_CEM self,
  /* in */ const char* val_string,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.CEM.get_raster_dimen) */
    struct edu_csdms_models_CEM__data *pd =
      edu_csdms_models_CEM__get_data (self);
    struct sidl_int__array* dimen = sidl_int__array_create1d (3);
    int shape[3];

    deltas_get_value_dimen (pd->state, val_string, shape);
    
    {
      int i;
      for (i=0; i<3; i++)
        sidl_int__array_set1 (dimen, i, shape[i]);
    }

    return dimen;
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.CEM.get_raster_dimen) */
  }
}

/*
 * Method:  get_raster_res[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_CEM_get_raster_res"

#ifdef __cplusplus
extern "C"
#endif
struct sidl_double__array*
impl_edu_csdms_models_CEM_get_raster_res(
  /* in */ edu_csdms_models_CEM self,
  /* in */ const char* val_string,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.CEM.get_raster_res) */
    struct edu_csdms_models_CEM__data *pd =
      edu_csdms_models_CEM__get_data (self);
    struct sidl_double__array* res = sidl_double__array_create1d (3);
    double c_array[3];

    deltas_get_value_res (pd->state, val_string, c_array);

    {
      int i;
      for (i=0; i<3; i++)
        sidl_double__array_set1 (res, i, c_array[i]);
    }

    return res;
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.CEM.get_raster_res) */
  }
}

/*
 * Method:  get_raster_data[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_CEM_get_raster_data"

#ifdef __cplusplus
extern "C"
#endif
struct sidl__array*
impl_edu_csdms_models_CEM_get_raster_data(
  /* in */ edu_csdms_models_CEM self,
  /* in */ const char* val_string,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.CEM.get_raster_data) */
    struct sidl__array* generic = NULL;

    {
      struct sidl_double__array* vals = NULL;
      struct edu_csdms_models_CEM__data *pd =
               edu_csdms_models_CEM__get_data (self);
  
      if (pd && pd->state)
      {
        int lower[2];
        int upper[2];
        int stride[2];
        double* data = deltas_get_value_data (pd->state, val_string, lower,
                                             upper, stride);

        {
          double max = -1e32;
          double min = 1e32;
          int i;
          int len = (upper[0]-lower[0]+1)*(upper[1]-lower[1]+1);

//fprintf (stderr, "CEM: Array len is %d\n", len);
          for (i=0; i<len; i++)
          {
            if (data[i]>max)
              max = data[i];
            if (data[i]<min)
              min = data[i];
          }
//fprintf (stderr, "CEM: min/max %s = %f/%f\n", val_string, min, max);       
        }

/*
      if (g_ascii_strcasecmp (val_string, "elevation")==0)
      {
        int i;

        for (i=0; i<100000; i++)
          if (i<500*30)
            data[i] = 1;
          else
            data[i] = -1;
      }
*/
//fprintf (stderr, "CEM: lower = %d, %d\n", lower[0], lower[1]);
//fprintf (stderr, "CEM: upper = %d, %d\n", upper[0], upper[1]);
//fprintf (stderr, "CEM: stride = %d, %d\n", stride[0], stride[1]);
        //data += lower[0];
        //upper[0] += lower[0];
        if (data)
        {
          data += lower[0];
          vals = sidl_double__array_borrow (data, 2, lower, upper, stride);

          generic = (struct sidl__array*)sidl_double__array_smartCopy (vals);
          sidl_double__array_deleteRef (vals);

          free (data-lower[0]);
        }
        else
          fprintf (stderr, "#CEM: Unable to get raster data.\n");
//fprintf (stderr, "DONE\n");
      }

      //generic = (struct sidl__array*)vals;
    }

    return generic;
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.CEM.get_raster_data) */
  }
}

/*
 * Method:  get_time_span[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_CEM_get_time_span"

#ifdef __cplusplus
extern "C"
#endif
struct sidl_double__array*
impl_edu_csdms_models_CEM_get_time_span(
  /* in */ edu_csdms_models_CEM self,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.CEM.get_time_span) */
    struct sidl_double__array* span = sidl_double__array_create1d (2);

    {
      struct edu_csdms_models_CEM__data *pd =
        edu_csdms_models_CEM__get_data (self);
      const double start = deltas_get_start_time (pd->state);
      const double end = deltas_get_end_time (pd->state);
      
      sidl_double__array_set1 (span, 0, start);
      sidl_double__array_set1 (span, 1, end);
    }

    return span;
  EXIT:;
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.CEM.get_time_span) */
  }
}

/*
 * Method:  get_element_set[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_CEM_get_element_set"

#ifdef __cplusplus
extern "C"
#endif
edu_csdms_openmi_IElementSet
impl_edu_csdms_models_CEM_get_element_set(
  /* in */ edu_csdms_models_CEM self,
  /* in */ const char* val_string,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.CEM.get_element_set) */
    //if (g_ascii_strcasecmp ("bed_load_flux_from_river",val_string)==0 ||
    //    g_ascii_strcasecmp ("sea_surface_wave_from_direction",val_string)==0)
    SIDL_THROW(*_ex, sidl_NotImplementedException,
      "This method has not been implemented");

    PRINT (2, "Get element set.");
    if (g_ascii_strcasecmp ("River",val_string)==0 ||
        g_ascii_strcasecmp ("Waves",val_string)==0)
    {/* These values don't have an element set */
      SIDL_THROW(*_ex, sidl_NotImplementedException,
                 "This method has not been implemented");
    }
    else if (g_ascii_strcasecmp ("Elevation", val_string)==0)
    {
      edu_csdms_openmi_ElementSet elementSet =
        edu_csdms_openmi_ElementSet__create (_ex);

      {
        struct edu_csdms_models_CEM__data *pd;
        int64_t nx = 0;
        int64_t ny = 0;
        double dx = 0;
        double dy = 0;

        pd = edu_csdms_models_CEM__get_data (self);

        if (pd && pd->state)
        {
          nx = deltas_get_nx (pd->state);
          ny = deltas_get_ny (pd->state)/2;
          dx = deltas_get_dx (pd->state);
          dy = deltas_get_dy (pd->state);
        }

/*
        fprintf (stderr, "nx: %d\n", nx);
        fprintf (stderr, "ny: %d\n", ny);
        fprintf (stderr, "dx: %f\n", dx);
        fprintf (stderr, "dy: %f\n", dy);
        fflush (stderr);
*/
        //edu_csdms_openmi_ElementSet_setRasterGrid (elementSet,
        //  nx, ny, dx, dy, 0., 0., _ex);
        //fprintf (stderr, "Done."); fflush (stderr);

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
      }
      return edu_csdms_openmi_IElementSet__cast (elementSet, _ex);
    }
    else if (g_str_has_prefix (val_string, "Point"))
    {
/*
      int i;
      edu_csdms_openmi_ElementSet elementSet =
        edu_csdms_openmi_ElementSet__create (_ex);

      // Points
      for (i=0; i<len; i+=3)
      {
        edu_csdms_openmi_Element element =
          edu_csdms_openmi_Element__create (_ex);

        {
          edu_csdms_openmi_Vertex vertex =
            edu_csdms_openmi_Vertex__create (_ex);

          edu_csdms_openmi_Vertex_setX (vertex, , _ex);
          edu_csdms_openmi_Vertex_setY (vertex, , _ex);
          edu_csdms_openmi_Vertex_setZ (vertex, , _ex);

          edu_csdms_openmi_Element_addVertex (element, vertex, _ex);
        }

        elementSet.addElement (element);
      }
*/
    }

  EXIT:;

    return NULL;
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.CEM.get_element_set) */
  }
}

/*
 * Method:  get_value_set[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_CEM_get_value_set"

#ifdef __cplusplus
extern "C"
#endif
edu_csdms_openmi_IValueSet
impl_edu_csdms_models_CEM_get_value_set(
  /* in */ edu_csdms_models_CEM self,
  /* in */ const char* val_string,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.CEM.get_value_set) */
    edu_csdms_openmi_ScalarSet scalarSet =
      edu_csdms_openmi_ScalarSet__create (_ex);

    PRINT (2, "Get value set");
    {
      struct sidl_double__array* vals;
      struct sidl__array* data =
        impl_edu_csdms_models_CEM_get_raster_data (self, val_string, _ex);
      vals = sidl_double__array_cast (data);
//fprintf (stderr, "CEM: Create a ScalarSet from the raster data\n");
//fprintf (stderr, "CEM: dimen = %d\n", sidl_double__array_dimen (vals));
//fprintf (stderr, "CEM: lower = %d, %d\n", sidl_double__array_lower (vals, 0),
//                                          sidl_double__array_lower (vals, 1));
//fprintf (stderr, "CEM: upper = %d, %d\n", sidl_double__array_upper (vals, 0),
//                                          sidl_double__array_upper (vals, 1));
//fprintf (stderr, "CEM: stride = %d, %d\n", sidl_double__array_stride (vals, 0),
//                                          sidl_double__array_stride (vals, 1));

/*
{
  int i, j, n;
  int len_i = sidl_double__array_length (vals, 0);
  int len_j = sidl_double__array_length (vals, 1);
  double* first = sidl_double__array_first (vals);
  for (j=0, n=0; j<len_j; j++)
    for (i=0; i<len_i; i++, n++)
      if (fabs (first[n]-sidl_double__array_get2 (vals, i, j))>1e-6)
        fprintf (stderr, "val[%d][%d] = %f (%f)\n", i, j,
                         sidl_double__array_get2 (vals, i, j), first[n]);
}
*/

      edu_csdms_openmi_ScalarSet_setRasterGrid (scalarSet, vals, _ex);
//fprintf (stderr, "CEM: Cast it to a ValueSet\n");
    }
    return edu_csdms_openmi_IValueSet__cast (scalarSet, _ex);
  EXIT:;
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.CEM.get_value_set) */
  }
}

/*
 * Method:  get_value_set_data[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_CEM_get_value_set_data"

#ifdef __cplusplus
extern "C"
#endif
struct sidl__array*
impl_edu_csdms_models_CEM_get_value_set_data(
  /* in */ edu_csdms_models_CEM self,
  /* in */ const char* val_string,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.CEM.get_value_set_data) */
    return impl_edu_csdms_models_CEM_get_raster_data (
             self, val_string, _ex);
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.CEM.get_value_set_data) */
  }
}

/*
 * Method:  set_value_set[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_models_CEM_set_value_set"

#ifdef __cplusplus
extern "C"
#endif
void
impl_edu_csdms_models_CEM_set_value_set(
  /* in */ edu_csdms_models_CEM self,
  /* in */ const char* val_string,
  /* in */ edu_csdms_openmi_IValueSet values,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.models.CEM.set_value_set) */
    struct edu_csdms_models_CEM__data *pd =
      edu_csdms_models_CEM__get_data (self);
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

      //deltas_set_sed_rate (pd->state, val);
      deltas_set_sed_flux (pd->state, val);
    }
    else if (g_ascii_strcasecmp (val_string,
                                 "sea_surface_wave_from_direction")==0)
    {
      double val;
      PRINT (2, "Found sea_surface_wave_from_direction");
      PRINT (2, "Get the first scalar");
      val = edu_csdms_openmi_ScalarSet_getScalar (scalarSet, 0, _ex);
fprintf (stderr, "direction: %f\n", val);
      deltas_set_wave_angle (pd->state, val);
    }
    else if (g_ascii_strcasecmp (val_string,
                                 "sea_surface_wave_height")==0)
    {
      double val;
      PRINT (2, "Found sea_surface_wave_height");
      PRINT (2, "Get the first scalar");
      val = edu_csdms_openmi_ScalarSet_getScalar (scalarSet, 0, _ex);

      deltas_set_wave_height (pd->state, val);
    }
    else if (g_ascii_strcasecmp (val_string,
                                 "sea_surface_wave_period")==0)
    {
      double val;
      PRINT (2, "Found sea_surface_wave_period");
      PRINT (2, "Get the first scalar");
      val = edu_csdms_openmi_ScalarSet_getScalar (scalarSet, 0, _ex);

      deltas_set_wave_period (pd->state, val);
    }
    else if (g_ascii_strcasecmp (val_string,
                                 "SedimentFlux")==0)
    {
      const int nx = deltas_get_nx (pd->state);
      const int ny = deltas_get_ny (pd->state)/2;
      const int len = nx*ny;
      int i;
      double max = -1e32;
      double min = 1e32;
      double* vals;
//      struct sidl_double__array* array;

//      fprintf (stderr, "Mapped values start\n");
//      fprintf (stderr, "There should be %d values\n", len);
//      fprintf (stderr, "There are %d values\n", edu_csdms_openmi_ScalarSet_getCount (scalarSet, _ex));

//      array = edu_csdms_openmi_ScalarSet_toArray (scalarSet, _ex);
//fprintf (stderr, "Get first value\n");
//      vals = sidl_double__array_first (array);
//fprintf (stderr, "Find max and min\n");
//fprintf (stderr, "Array dimension is %d\n", sidl_double__array_dimen (array));
//fprintf (stderr, "Array length is %d\n", sidl_double__array_length (array, 0));

      vals = g_new (double, len);
      for (i=0; i<len; i++)
      {
        vals[i] = edu_csdms_openmi_ScalarSet_getScalar (scalarSet, i, _ex);

        if (vals[i]>max)
          max = vals[i];
        if (vals[i]<min)
          min = vals[i];

        //vals[i] = 0;
        //fprintf (stderr, "%f\n", vals[i]);
      }

      //vals[17250] = 250.;
      fprintf (stderr, "CEM: Max discharge value (from Avulsion) is %f\n", max);
      fprintf (stderr, "CEM: Min discharge value (from Avulsion) is %f\n", min);
      //fprintf (stderr, "Mapped values end\n");

      deltas_set_sediment_flux_grid (pd->state, vals);

      g_free (vals);
    }
    else
      fprintf (stderr, "%s: Invalid value string.", val_string);

    PRINT (2, "Done setValueSet");

    return;
    /* DO-NOT-DELETE splicer.end(edu.csdms.models.CEM.set_value_set) */
  }
}
/* Babel internal methods, Users should not edit below this line. */

/* DO-NOT-DELETE splicer.begin(_misc) */
/* Insert-Code-Here {_misc} (miscellaneous code) */
/* DO-NOT-DELETE splicer.end(_misc) */

