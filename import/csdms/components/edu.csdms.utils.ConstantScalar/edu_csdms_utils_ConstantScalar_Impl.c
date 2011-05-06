/*
 * File:          edu_csdms_utils_ConstantScalar_Impl.c
 * Symbol:        edu.csdms.utils.ConstantScalar-v0.0
 * Symbol Type:   class
 * Babel Version: 1.4.0 (Revision: 6607 release-1-4-0-branch)
 * Description:   Server-side implementation for edu.csdms.utils.ConstantScalar
 * 
 * WARNING: Automatically generated; only changes within splicers preserved
 * 
 */

/*
 * DEVELOPERS ARE EXPECTED TO PROVIDE IMPLEMENTATIONS
 * FOR THE FOLLOWING METHODS BETWEEN SPLICER PAIRS.
 */

/*
 * Symbol "edu.csdms.utils.ConstantScalar" (version 0.0)
 */

#include "edu_csdms_utils_ConstantScalar_Impl.h"
#include "sidl_NotImplementedException.h"
#include "sidl_Exception.h"
#ifndef included_sidl_MemAllocException_h
#include "sidl_MemAllocException.h"
#endif

/* DO-NOT-DELETE splicer.begin(edu.csdms.utils.ConstantScalar._includes) */

/* Insert-UserCode-Here {edu.csdms.utils.ConstantScalar._includes} (includes and arbitrary code) */
#include <float.h>

/* Bocca generated code. bocca.protected.begin(edu.csdms.utils.ConstantScalar._includes) */
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
/* Bocca generated code. bocca.protected.end(edu.csdms.utils.ConstantScalar._includes) */

/* Insert-UserCode-Here {edu.csdms.utils.ConstantScalar._includes} (includes and arbitrary code) */

/* DO-NOT-DELETE splicer.end(edu.csdms.utils.ConstantScalar._includes) */

#define SIDL_IOR_MAJOR_VERSION 2
#define SIDL_IOR_MINOR_VERSION 0
/*
 * Static class initializer called exactly once before any user-defined method is dispatched
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_utils_ConstantScalar__load"

#ifdef __cplusplus
extern "C"
#endif
void
impl_edu_csdms_utils_ConstantScalar__load(
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.utils.ConstantScalar._load) */
    /* Insert-Code-Here {edu.csdms.utils.ConstantScalar._load} (static class 
      initializer method) */
    /*
     * This method has not been implemented
     */

    /* DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.utils.ConstantScalar._load) */
    SIDL_THROW(*_ex, sidl_NotImplementedException,     "This method has not been implemented");
  EXIT:;
    /* DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.utils.ConstantScalar._load) */
    /* DO-NOT-DELETE splicer.end(edu.csdms.utils.ConstantScalar._load) */
  }
}
/*
 * Class constructor called when the class is created.
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_utils_ConstantScalar__ctor"

#ifdef __cplusplus
extern "C"
#endif
void
impl_edu_csdms_utils_ConstantScalar__ctor(
  /* in */ edu_csdms_utils_ConstantScalar self,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.utils.ConstantScalar._ctor) */

  /* Insert-UserDecl-Here {edu.csdms.utils.ConstantScalar._ctor} (constructor method) */
    
  /* bocca-default-code. User may edit or delete.begin(edu.csdms.utils.ConstantScalar._ctor) */
   struct edu_csdms_utils_ConstantScalar__data *dptr = 
       (struct edu_csdms_utils_ConstantScalar__data*)malloc(sizeof(struct edu_csdms_utils_ConstantScalar__data));
   if (dptr) {
      memset(dptr, 0, sizeof(struct edu_csdms_utils_ConstantScalar__data));
   }
   edu_csdms_utils_ConstantScalar__set_data(self, dptr);
   #if _BOCCA_CTOR_MESSAGES
     BOCCA_FPRINTF(stderr, 
        "CTOR edu.csdms.utils.ConstantScalar: %s constructed data %p in self %p\n", 
        __FUNC__, dptr, self);
   #endif /* _BOCCA_CTOR_MESSAGES */
  /* bocca-default-code. User may edit or delete.end(edu.csdms.utils.ConstantScalar._ctor) */

  /* initialize user elements of dptr here */
  /* Insert-UserCode-Here {edu.csdms.utils.ConstantScalar._ctor} (constructor method) */

    /* DO-NOT-DELETE splicer.end(edu.csdms.utils.ConstantScalar._ctor) */
  }
}

/*
 * Special Class constructor called when the user wants to wrap his own private data.
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_utils_ConstantScalar__ctor2"

#ifdef __cplusplus
extern "C"
#endif
void
impl_edu_csdms_utils_ConstantScalar__ctor2(
  /* in */ edu_csdms_utils_ConstantScalar self,
  /* in */ void* private_data,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.utils.ConstantScalar._ctor2) */
    /* Insert-Code-Here {edu.csdms.utils.ConstantScalar._ctor2} (special 
      constructor method) */
    /*
     * This method has not been implemented
     */

    /* DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.utils.ConstantScalar._ctor2) */
    SIDL_THROW(*_ex, sidl_NotImplementedException,     "This method has not been implemented");
  EXIT:;
    /* DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.utils.ConstantScalar._ctor2) */
    /* DO-NOT-DELETE splicer.end(edu.csdms.utils.ConstantScalar._ctor2) */
  }
}
/*
 * Class destructor called when the class is deleted.
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_utils_ConstantScalar__dtor"

#ifdef __cplusplus
extern "C"
#endif
void
impl_edu_csdms_utils_ConstantScalar__dtor(
  /* in */ edu_csdms_utils_ConstantScalar self,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.utils.ConstantScalar._dtor) */

  /* deinitialize user elements of dptr here */
  /* Insert-UserCode-Here {edu.csdms.utils.ConstantScalar._dtor} (destructor method) */
    
  /* bocca-default-code. User may edit or delete.begin(edu.csdms.utils.ConstantScalar._dtor) */
   struct edu_csdms_utils_ConstantScalar__data *dptr = 
                edu_csdms_utils_ConstantScalar__get_data(self);
   if (dptr) {
      free(dptr);
      edu_csdms_utils_ConstantScalar__set_data(self, NULL);
   }
   #if _BOCCA_CTOR_MESSAGES
     BOCCA_FPRINTF(stderr, "DTOR edu.csdms.utils.ConstantScalar: %s freed data %p in self %p\n", 
                   __FUNC__, dptr, self);
   #endif /* _BOCCA_CTOR_MESSAGES */
  /* bocca-default-code. User may edit or delete.end(edu.csdms.utils.ConstantScalar._dtor) */

    /* DO-NOT-DELETE splicer.end(edu.csdms.utils.ConstantScalar._dtor) */
  }
}

/*
 * Method:  boccaSetServices[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_utils_ConstantScalar_boccaSetServices"

#ifdef __cplusplus
extern "C"
#endif
void
impl_edu_csdms_utils_ConstantScalar_boccaSetServices(
  /* in */ edu_csdms_utils_ConstantScalar self,
  /* in */ gov_cca_Services services,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.utils.ConstantScalar.boccaSetServices) */
/* DO-NOT-EDIT-BOCCA */
/* Bocca generated code. bocca.protected.begin(edu.csdms.utils.ConstantScalar.boccaSetServices) */
   struct edu_csdms_utils_ConstantScalar__data *pd;
   gov_cca_ComponentRelease   compRelease = NULL;
   sidl_BaseInterface throwaway_excpt = NULL; /* for use in EXIT block only. */
   int dr_services=0; /* assume releaseServices will not be called if setServices fails */
   

   gov_cca_TypeMap typeMap = NULL;
   gov_cca_Port port = NULL;

   pd = edu_csdms_utils_ConstantScalar__get_data(self);
   if (pd == NULL) {
     SIDL_THROW(*_ex, sidl_SIDLException, 
          "NULL data pointer in edu.csdms.utils.ConstantScalar boccaSetServices");
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

   /* Provide a edu.csdms.ports.IRFPort port with port name ConstantScalar */
   gov_cca_Services_addProvidesPort(pd->d_services,   
                                    port,		/* the implementing object */
                                    "ConstantScalar", /* the name seen by the user */
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

/* Bocca generated code. bocca.protected.end(edu.csdms.utils.ConstantScalar.boccaSetServices) */
    /* DO-NOT-DELETE splicer.end(edu.csdms.utils.ConstantScalar.boccaSetServices) */
  }
}

/*
 * Method:  boccaReleaseServices[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_utils_ConstantScalar_boccaReleaseServices"

#ifdef __cplusplus
extern "C"
#endif
void
impl_edu_csdms_utils_ConstantScalar_boccaReleaseServices(
  /* in */ edu_csdms_utils_ConstantScalar self,
  /* in */ gov_cca_Services services,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.utils.ConstantScalar.boccaReleaseServices) */
/* DO-NOT-EDIT-BOCCA */
/*  Bocca generated code. bocca.protected.begin(edu.csdms.utils.ConstantScalar.boccaReleaseServices) */

   struct edu_csdms_utils_ConstantScalar__data *pd;
   sidl_BaseInterface throwaway_excpt = NULL;
   sidl_BaseInterface dummy_excpt = NULL;
   char *errMsg=NULL;
   /* our policy is to trap and optionally print all port-related messages,
      attempting to eliminate all ports. */


   /* UN-Provide a edu.csdms.ports.IRFPort port with port name ConstantScalar */
   gov_cca_Services_removeProvidesPort(services, "ConstantScalar", 
                                       &throwaway_excpt);
   errMsg = "Error: Could not removeProvidesPort(\"ConstantScalar\")";
   edu_csdms_utils_ConstantScalar_checkException(self, throwaway_excpt, errMsg, FALSE, 
                                   &dummy_excpt);

  /* Un-Register a use port of type gov.cca.ports.ParameterPortFactory with port name ppf */  
   gov_cca_Services_unregisterUsesPort(services, "ppf", 
                                       &throwaway_excpt);
   errMsg= "Error: Could not unregisterUsesPort(\"ppf\")";
   edu_csdms_utils_ConstantScalar_checkException(self, throwaway_excpt, errMsg, FALSE, 
                                   &dummy_excpt);

   services = NULL;
   pd = edu_csdms_utils_ConstantScalar__get_data(self);
   if (pd == NULL) {
     SIDL_THROW(*_ex, sidl_SIDLException, 
        "NULL data pointer in edu.csdms.utils.ConstantScalar boccaSetServices");
   }
   gov_cca_Services_deleteRef(pd->d_services, _ex); 
   SIDL_CHECK(*_ex);
   pd->d_services = NULL;
   return;

EXIT:;
   return;
/*  Bocca generated code. bocca.protected.end(edu.csdms.utils.ConstantScalar.boccaReleaseServices) */
    /* DO-NOT-DELETE splicer.end(edu.csdms.utils.ConstantScalar.boccaReleaseServices) */
  }
}

/*
 * Method:  checkException[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_utils_ConstantScalar_checkException"

#ifdef __cplusplus
extern "C"
#endif
void
impl_edu_csdms_utils_ConstantScalar_checkException(
  /* in */ edu_csdms_utils_ConstantScalar self,
  /* in */ sidl_BaseInterface excpt,
  /* in */ const char* msg,
  /* in */ sidl_bool fatal,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.utils.ConstantScalar.checkException) */
/* DO-NOT-EDIT-BOCCA */
/*  Bocca generated code. bocca.protected.begin(edu.csdms.utils.ConstantScalar.checkException) */
#ifdef _BOCCA_STDERR
   sidl_BaseException be = NULL;
   char *etext=NULL;
#endif
   
   if (SIDL_CATCH(excpt, "sidl.BaseException")) {
#ifdef _BOCCA_STDERR
      be  = sidl_BaseException__cast(excpt, _ex); SIDL_CLEAR(*_ex);
      etext = sidl_BaseException_getNote(be, _ex); SIDL_CLEAR(*_ex);
      fprintf(stderr, "edu.csdms.utils.ConstantScalar: %s \n%s\n", msg,etext);
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
   
/*  Bocca generated code. bocca.protected.end(edu.csdms.utils.ConstantScalar.checkException) */
    
    /* DO-NOT-DELETE splicer.end(edu.csdms.utils.ConstantScalar.checkException) */
  }
}

/*
 *  This function should never be called, but helps babel generate better code. 
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_utils_ConstantScalar_boccaForceUsePortInclude"

#ifdef __cplusplus
extern "C"
#endif
void
impl_edu_csdms_utils_ConstantScalar_boccaForceUsePortInclude(
  /* in */ edu_csdms_utils_ConstantScalar self,
  /* in */ gov_cca_ports_ParameterPortFactory dummy0,
  /* in */ edu_csdms_tools_Verbose dummy1,
  /* in */ edu_csdms_openmi_ValueSet dummy2,
  /* in */ edu_csdms_openmi_ScalarSet dummy3,
  /* in */ edu_csdms_tools_ConfigDialog dummy4,
  /* in */ edu_csdms_openmi_IScalarSet dummy5,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.utils.ConstantScalar.boccaForceUsePortInclude) */
/* DO-NOT-EDIT-BOCCA */
  /* Bocca generated code. bocca.protected.begin(edu.csdms.utils.ConstantScalar.boccaForceUsePortInclude) */
    (void)self;
    (void)dummy0;
    (void)dummy1;
    (void)dummy2;
    (void)dummy3;
    (void)dummy4;
    (void)dummy5;

  /* Bocca generated code. bocca.protected.end(edu.csdms.utils.ConstantScalar.boccaForceUsePortInclude) */
    /* DO-NOT-DELETE splicer.end(edu.csdms.utils.ConstantScalar.boccaForceUsePortInclude) */
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
#define __FUNC__ "impl_edu_csdms_utils_ConstantScalar_setServices"

#ifdef __cplusplus
extern "C"
#endif
void
impl_edu_csdms_utils_ConstantScalar_setServices(
  /* in */ edu_csdms_utils_ConstantScalar self,
  /* in */ gov_cca_Services services,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.utils.ConstantScalar.setServices) */

  /*  Insert-UserDecl-Here {edu.csdms.utils.ConstantScalar.setServices} (setServices method) */
    struct edu_csdms_utils_ConstantScalar__data *pd;
    gov_cca_ports_ParameterPortFactory ppf;
    gov_cca_Port gcp;

  /* bocca-default-code. User may edit or delete.begin(edu.csdms.utils.ConstantScalar.setServices) */
    impl_edu_csdms_utils_ConstantScalar_boccaSetServices(self, services, _ex); SIDL_CHECK(*_ex);
  /* bocca-default-code. User may edit or delete.end(edu.csdms.utils.ConstantScalar.setServices) */
  
  /*  Insert-UserCode-Here {edu.csdms.utils.ConstantScalar.setServices} (setServices method) */
    pd = edu_csdms_utils_ConstantScalar__get_data (self);
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
      pd->userinput, "ConstantScalar Parameters", _ex);

    {
      edu_csdms_tools_ConfigDialog dialog;
    
      dialog = edu_csdms_tools_ConfigDialog__create (_ex);
      edu_csdms_tools_ConfigDialog_read (dialog, "ConstantScalar.xml", _ex);
      edu_csdms_tools_ConfigDialog_construct (dialog, ppf, pd->userinput, _ex);
    }
    
    gov_cca_ports_ParameterPortFactory_addParameterPort (ppf,
      pd->userinput, services, _ex);
    gov_cca_Services_releasePort (services, "ppf", _ex);

EXIT:;
    /* Insert additional exception cleanup here if needed. */
    return;

    /* DO-NOT-DELETE splicer.end(edu.csdms.utils.ConstantScalar.setServices) */
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
#define __FUNC__ "impl_edu_csdms_utils_ConstantScalar_releaseServices"

#ifdef __cplusplus
extern "C"
#endif
void
impl_edu_csdms_utils_ConstantScalar_releaseServices(
  /* in */ edu_csdms_utils_ConstantScalar self,
  /* in */ gov_cca_Services services,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.utils.ConstantScalar.releaseServices) */

  /*  Insert-UserCode-Here {edu.csdms.utils.ConstantScalar.releaseServices} (releaseServices method) */

  /* bocca-default-code. User may edit or delete.begin(edu.csdms.utils.ConstantScalar.releaseServices) */
    impl_edu_csdms_utils_ConstantScalar_boccaReleaseServices(self, services, _ex); SIDL_CHECK(*_ex);
    return;
  /* bocca-default-code. User may edit or delete.end(edu.csdms.utils.ConstantScalar.releaseServices) */

EXIT:;
    /* Insert additional exception cleanup here if needed. */
    return;

    /* DO-NOT-DELETE splicer.end(edu.csdms.utils.ConstantScalar.releaseServices) */
  }
}

/*
 * Method:  initialize[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_utils_ConstantScalar_initialize"

#ifdef __cplusplus
extern "C"
#endif
void
impl_edu_csdms_utils_ConstantScalar_initialize(
  /* in */ edu_csdms_utils_ConstantScalar self,
  /* in array<string> */ struct sidl_string__array* properties,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.utils.ConstantScalar.initialize) */
    struct edu_csdms_utils_ConstantScalar__data *pd =
             edu_csdms_utils_ConstantScalar__get_data (self);

    {
      double value;

      value = gov_cca_TypeMap_getDouble (pd->userinput,
                 "/ConstantScalar/Value", 0, _ex);
      pd->val = value;
    }
    /* DO-NOT-DELETE splicer.end(edu.csdms.utils.ConstantScalar.initialize) */
  }
}

/*
 * Method:  run[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_utils_ConstantScalar_run"

#ifdef __cplusplus
extern "C"
#endif
void
impl_edu_csdms_utils_ConstantScalar_run(
  /* in */ edu_csdms_utils_ConstantScalar self,
  /* in */ double time,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.utils.ConstantScalar.run) */
    return;
    /* DO-NOT-DELETE splicer.end(edu.csdms.utils.ConstantScalar.run) */
  }
}

/*
 * Method:  finalize[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_utils_ConstantScalar_finalize"

#ifdef __cplusplus
extern "C"
#endif
void
impl_edu_csdms_utils_ConstantScalar_finalize(
  /* in */ edu_csdms_utils_ConstantScalar self,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.utils.ConstantScalar.finalize) */
    struct edu_csdms_utils_ConstantScalar__data *pd =
             edu_csdms_utils_ConstantScalar__get_data (self);

    pd->val = 0;

    return;
    /* DO-NOT-DELETE splicer.end(edu.csdms.utils.ConstantScalar.finalize) */
  }
}

/*
 * Method:  getRaster_nx[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_utils_ConstantScalar_getRaster_nx"

#ifdef __cplusplus
extern "C"
#endif
int64_t
impl_edu_csdms_utils_ConstantScalar_getRaster_nx(
  /* in */ edu_csdms_utils_ConstantScalar self,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.utils.ConstantScalar.getRaster_nx) */
    /* Insert-Code-Here {edu.csdms.utils.ConstantScalar.getRaster_nx} (
      getRaster_nx method) */
    /*
     * This method has not been implemented
     */

    /* DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.utils.ConstantScalar.getRaster_nx) */
    SIDL_THROW(*_ex, sidl_NotImplementedException,     "This method has not been implemented");
  EXIT:;
    /* DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.utils.ConstantScalar.getRaster_nx) */
    /* DO-NOT-DELETE splicer.end(edu.csdms.utils.ConstantScalar.getRaster_nx) */
  }
}

/*
 * Method:  getRaster_ny[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_utils_ConstantScalar_getRaster_ny"

#ifdef __cplusplus
extern "C"
#endif
int64_t
impl_edu_csdms_utils_ConstantScalar_getRaster_ny(
  /* in */ edu_csdms_utils_ConstantScalar self,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.utils.ConstantScalar.getRaster_ny) */
    /* Insert-Code-Here {edu.csdms.utils.ConstantScalar.getRaster_ny} (
      getRaster_ny method) */
    /*
     * This method has not been implemented
     */

    /* DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.utils.ConstantScalar.getRaster_ny) */
    SIDL_THROW(*_ex, sidl_NotImplementedException,     "This method has not been implemented");
  EXIT:;
    /* DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.utils.ConstantScalar.getRaster_ny) */
    /* DO-NOT-DELETE splicer.end(edu.csdms.utils.ConstantScalar.getRaster_ny) */
  }
}

/*
 * Method:  getRaster_dx[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_utils_ConstantScalar_getRaster_dx"

#ifdef __cplusplus
extern "C"
#endif
double
impl_edu_csdms_utils_ConstantScalar_getRaster_dx(
  /* in */ edu_csdms_utils_ConstantScalar self,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.utils.ConstantScalar.getRaster_dx) */
    /* Insert-Code-Here {edu.csdms.utils.ConstantScalar.getRaster_dx} (
      getRaster_dx method) */
    /*
     * This method has not been implemented
     */

    /* DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.utils.ConstantScalar.getRaster_dx) */
    SIDL_THROW(*_ex, sidl_NotImplementedException,     "This method has not been implemented");
  EXIT:;
    /* DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.utils.ConstantScalar.getRaster_dx) */
    /* DO-NOT-DELETE splicer.end(edu.csdms.utils.ConstantScalar.getRaster_dx) */
  }
}

/*
 * Method:  getRaster_dy[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_utils_ConstantScalar_getRaster_dy"

#ifdef __cplusplus
extern "C"
#endif
double
impl_edu_csdms_utils_ConstantScalar_getRaster_dy(
  /* in */ edu_csdms_utils_ConstantScalar self,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.utils.ConstantScalar.getRaster_dy) */
    /* Insert-Code-Here {edu.csdms.utils.ConstantScalar.getRaster_dy} (
      getRaster_dy method) */
    /*
     * This method has not been implemented
     */

    /* DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.utils.ConstantScalar.getRaster_dy) */
    SIDL_THROW(*_ex, sidl_NotImplementedException,     "This method has not been implemented");
  EXIT:;
    /* DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.utils.ConstantScalar.getRaster_dy) */
    /* DO-NOT-DELETE splicer.end(edu.csdms.utils.ConstantScalar.getRaster_dy) */
  }
}

/*
 * Method:  getRaster_ulx[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_utils_ConstantScalar_getRaster_ulx"

#ifdef __cplusplus
extern "C"
#endif
double
impl_edu_csdms_utils_ConstantScalar_getRaster_ulx(
  /* in */ edu_csdms_utils_ConstantScalar self,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.utils.ConstantScalar.getRaster_ulx) */
    /* Insert-Code-Here {edu.csdms.utils.ConstantScalar.getRaster_ulx} (
      getRaster_ulx method) */
    /*
     * This method has not been implemented
     */

    /* DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.utils.ConstantScalar.getRaster_ulx) */
    SIDL_THROW(*_ex, sidl_NotImplementedException,     "This method has not been implemented");
  EXIT:;
    /* DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.utils.ConstantScalar.getRaster_ulx) */
    /* DO-NOT-DELETE splicer.end(edu.csdms.utils.ConstantScalar.getRaster_ulx) */
  }
}

/*
 * Method:  getRaster_uly[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_utils_ConstantScalar_getRaster_uly"

#ifdef __cplusplus
extern "C"
#endif
double
impl_edu_csdms_utils_ConstantScalar_getRaster_uly(
  /* in */ edu_csdms_utils_ConstantScalar self,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.utils.ConstantScalar.getRaster_uly) */
    /* Insert-Code-Here {edu.csdms.utils.ConstantScalar.getRaster_uly} (
      getRaster_uly method) */
    /*
     * This method has not been implemented
     */

    /* DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.utils.ConstantScalar.getRaster_uly) */
    SIDL_THROW(*_ex, sidl_NotImplementedException,     "This method has not been implemented");
  EXIT:;
    /* DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.utils.ConstantScalar.getRaster_uly) */
    /* DO-NOT-DELETE splicer.end(edu.csdms.utils.ConstantScalar.getRaster_uly) */
  }
}

/*
 * Method:  getRaster_grid[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_utils_ConstantScalar_getRaster_grid"

#ifdef __cplusplus
extern "C"
#endif
struct sidl_double__array*
impl_edu_csdms_utils_ConstantScalar_getRaster_grid(
  /* in */ edu_csdms_utils_ConstantScalar self,
  /* in */ const char* val_string,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.utils.ConstantScalar.getRaster_grid) */
    /* Insert-Code-Here {edu.csdms.utils.ConstantScalar.getRaster_grid} (
      getRaster_grid method) */
    /*
     * This method has not been implemented
     */

    /* DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.utils.ConstantScalar.getRaster_grid) */
    SIDL_THROW(*_ex, sidl_NotImplementedException,     "This method has not been implemented");
  EXIT:;
    /* DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.utils.ConstantScalar.getRaster_grid) */
    /* DO-NOT-DELETE splicer.end(edu.csdms.utils.ConstantScalar.getRaster_grid) */
  }
}

/*
 * Method:  get_raster_dimen[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_utils_ConstantScalar_get_raster_dimen"

#ifdef __cplusplus
extern "C"
#endif
struct sidl_int__array*
impl_edu_csdms_utils_ConstantScalar_get_raster_dimen(
  /* in */ edu_csdms_utils_ConstantScalar self,
  /* in */ const char* val_string,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.utils.ConstantScalar.get_raster_dimen) */
    /* Insert-Code-Here {edu.csdms.utils.ConstantScalar.get_raster_dimen} (
      get_raster_dimen method) */
    /*
     * This method has not been implemented
     */

    /* DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.utils.ConstantScalar.get_raster_dimen) */
    SIDL_THROW(*_ex, sidl_NotImplementedException,     "This method has not been implemented");
  EXIT:;
    /* DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.utils.ConstantScalar.get_raster_dimen) */
    /* DO-NOT-DELETE splicer.end(edu.csdms.utils.ConstantScalar.get_raster_dimen) */
  }
}

/*
 * Method:  get_raster_res[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_utils_ConstantScalar_get_raster_res"

#ifdef __cplusplus
extern "C"
#endif
struct sidl_double__array*
impl_edu_csdms_utils_ConstantScalar_get_raster_res(
  /* in */ edu_csdms_utils_ConstantScalar self,
  /* in */ const char* val_string,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.utils.ConstantScalar.get_raster_res) */
    /* Insert-Code-Here {edu.csdms.utils.ConstantScalar.get_raster_res} (
      get_raster_res method) */
    /*
     * This method has not been implemented
     */

    /* DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.utils.ConstantScalar.get_raster_res) */
    SIDL_THROW(*_ex, sidl_NotImplementedException,     "This method has not been implemented");
  EXIT:;
    /* DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.utils.ConstantScalar.get_raster_res) */
    /* DO-NOT-DELETE splicer.end(edu.csdms.utils.ConstantScalar.get_raster_res) */
  }
}

/*
 * Method:  get_raster_data[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_utils_ConstantScalar_get_raster_data"

#ifdef __cplusplus
extern "C"
#endif
struct sidl__array*
impl_edu_csdms_utils_ConstantScalar_get_raster_data(
  /* in */ edu_csdms_utils_ConstantScalar self,
  /* in */ const char* val_string,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.utils.ConstantScalar.get_raster_data) */
    /* Insert-Code-Here {edu.csdms.utils.ConstantScalar.get_raster_data} (
      get_raster_data method) */
    /*
     * This method has not been implemented
     */

    /* DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.utils.ConstantScalar.get_raster_data) */
    SIDL_THROW(*_ex, sidl_NotImplementedException,     "This method has not been implemented");
  EXIT:;
    /* DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.utils.ConstantScalar.get_raster_data) */
    /* DO-NOT-DELETE splicer.end(edu.csdms.utils.ConstantScalar.get_raster_data) */
  }
}

/*
 * Method:  get_time_span[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_utils_ConstantScalar_get_time_span"

#ifdef __cplusplus
extern "C"
#endif
struct sidl_double__array*
impl_edu_csdms_utils_ConstantScalar_get_time_span(
  /* in */ edu_csdms_utils_ConstantScalar self,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.utils.ConstantScalar.get_time_span) */
    struct sidl_double__array* span = sidl_double__array_create1d (2);

    {
      sidl_double__array_set1 (span, 0, -DBL_MAX);
      sidl_double__array_set1 (span, 1, DBL_MAX);
    }

    return span;
    /* DO-NOT-DELETE splicer.end(edu.csdms.utils.ConstantScalar.get_time_span) */
  }
}

/*
 * Method:  get_element_set[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_utils_ConstantScalar_get_element_set"

#ifdef __cplusplus
extern "C"
#endif
edu_csdms_openmi_IElementSet
impl_edu_csdms_utils_ConstantScalar_get_element_set(
  /* in */ edu_csdms_utils_ConstantScalar self,
  /* in */ const char* val_string,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.utils.ConstantScalar.get_element_set) */
    /* Insert-Code-Here {edu.csdms.utils.ConstantScalar.get_element_set} (
      get_element_set method) */
    /*
     * This method has not been implemented
     */

    /* DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.utils.ConstantScalar.get_element_set) */
    SIDL_THROW(*_ex, sidl_NotImplementedException,     "This method has not been implemented");
  EXIT:;
    /* DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.utils.ConstantScalar.get_element_set) */
    /* DO-NOT-DELETE splicer.end(edu.csdms.utils.ConstantScalar.get_element_set) */
  }
}

/*
 * Method:  get_value_set[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_utils_ConstantScalar_get_value_set"

#ifdef __cplusplus
extern "C"
#endif
edu_csdms_openmi_IValueSet
impl_edu_csdms_utils_ConstantScalar_get_value_set(
  /* in */ edu_csdms_utils_ConstantScalar self,
  /* in */ const char* val_string,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.utils.ConstantScalar.get_value_set) */
    edu_csdms_openmi_ScalarSet scalarSet =
      edu_csdms_openmi_ScalarSet__create (_ex);

    {
      struct sidl_double__array* value_array = sidl_double__array_create1d (1);
      struct edu_csdms_utils_ConstantScalar__data* pd =
               edu_csdms_utils_ConstantScalar__get_data(self);
      
      sidl_double__array_set1 (value_array, 0, pd->val);

      edu_csdms_openmi_ScalarSet_init (scalarSet, value_array, _ex);
      sidl_double__array_deleteRef (value_array);
    }

    return edu_csdms_openmi_IValueSet__cast (scalarSet, _ex);
    /* DO-NOT-DELETE splicer.end(edu.csdms.utils.ConstantScalar.get_value_set) */
  }
}

/*
 * Method:  get_value_set_data[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_utils_ConstantScalar_get_value_set_data"

#ifdef __cplusplus
extern "C"
#endif
struct sidl__array*
impl_edu_csdms_utils_ConstantScalar_get_value_set_data(
  /* in */ edu_csdms_utils_ConstantScalar self,
  /* in */ const char* val_string,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.utils.ConstantScalar.get_value_set_data) */
    /* Insert-Code-Here {edu.csdms.utils.ConstantScalar.get_value_set_data} (
      get_value_set_data method) */
    /*
     * This method has not been implemented
     */

    /* DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.utils.ConstantScalar.get_value_set_data) */
    SIDL_THROW(*_ex, sidl_NotImplementedException,     "This method has not been implemented");
  EXIT:;
    /* DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.utils.ConstantScalar.get_value_set_data) */
    /* DO-NOT-DELETE splicer.end(edu.csdms.utils.ConstantScalar.get_value_set_data) */
  }
}

/*
 * Method:  set_value_set[]
 */

#undef __FUNC__
#define __FUNC__ "impl_edu_csdms_utils_ConstantScalar_set_value_set"

#ifdef __cplusplus
extern "C"
#endif
void
impl_edu_csdms_utils_ConstantScalar_set_value_set(
  /* in */ edu_csdms_utils_ConstantScalar self,
  /* in */ const char* val_string,
  /* in */ edu_csdms_openmi_IValueSet values,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(edu.csdms.utils.ConstantScalar.set_value_set) */
    /* Insert-Code-Here {edu.csdms.utils.ConstantScalar.set_value_set} (
      set_value_set method) */
    /*
     * This method has not been implemented
     */

    /* DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.utils.ConstantScalar.set_value_set) */
    SIDL_THROW(*_ex, sidl_NotImplementedException,     "This method has not been implemented");
  EXIT:;
    /* DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.utils.ConstantScalar.set_value_set) */
    /* DO-NOT-DELETE splicer.end(edu.csdms.utils.ConstantScalar.set_value_set) */
  }
}
/* Babel internal methods, Users should not edit below this line. */

/* DO-NOT-DELETE splicer.begin(_misc) */
/* Insert-Code-Here {_misc} (miscellaneous code) */
/* DO-NOT-DELETE splicer.end(_misc) */

