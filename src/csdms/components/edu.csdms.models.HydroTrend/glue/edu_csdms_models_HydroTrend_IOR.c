/*
 * File:          edu_csdms_models_HydroTrend_IOR.c
 * Symbol:        edu.csdms.models.HydroTrend-v0.0
 * Symbol Type:   class
 * Babel Version: 1.4.0 (Revision: 6607 release-1-4-0-branch)
 * Description:   Intermediate Object Representation for edu.csdms.models.HydroTrend
 * 
 * WARNING: Automatically generated; changes will be lost
 * 
 */

/*
 * Begin: RMI includes
 */

#include "sidl_rmi_InstanceHandle.h"
#include "sidl_rmi_InstanceRegistry.h"
#include "sidl_rmi_ServerRegistry.h"
#include "sidl_rmi_Call.h"
#include "sidl_rmi_Return.h"
#include "sidl_Exception.h"
#include "sidl_exec_err.h"
#include "sidl_PreViolation.h"
#include "sidl_NotImplementedException.h"
#include <stdio.h>
/*
 * End: RMI includes
 */

#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#ifndef included_sidlOps_h
#include "sidlOps.h"
#endif
#include "edu_csdms_models_HydroTrend_IOR.h"
#ifndef included_sidl_BaseClass_Impl_h
#include "sidl_BaseClass_Impl.h"
#endif
#ifndef included_sidl_BaseClass_h
#include "sidl_BaseClass.h"
#endif
#ifndef included_sidl_ClassInfo_h
#include "sidl_ClassInfo.h"
#endif
#ifndef included_sidl_ClassInfoI_h
#include "sidl_ClassInfoI.h"
#endif

#ifndef NULL
#define NULL 0
#endif

#include "sidl_thread.h"
#ifdef HAVE_PTHREAD
static struct sidl_recursive_mutex_t edu_csdms_models_HydroTrend__mutex= SIDL_RECURSIVE_MUTEX_INITIALIZER;
#define LOCK_STATIC_GLOBALS sidl_recursive_mutex_lock( &edu_csdms_models_HydroTrend__mutex )
#define UNLOCK_STATIC_GLOBALS sidl_recursive_mutex_unlock( &edu_csdms_models_HydroTrend__mutex )
/* #define HAVE_LOCKED_STATIC_GLOBALS (sidl_recursive_mutex_trylock( &edu_csdms_models_HydroTrend__mutex )==EDEADLOCK) */
#else
#define LOCK_STATIC_GLOBALS
#define UNLOCK_STATIC_GLOBALS
/* #define HAVE_LOCKED_STATIC_GLOBALS (1) */
#endif

/*
 * Static variables to hold version of IOR
 */

static const int32_t s_IOR_MAJOR_VERSION = 2;
static const int32_t s_IOR_MINOR_VERSION = 0;

/*
 * Static variable to hold shared ClassInfo interface.
 */

static sidl_ClassInfo s_classInfo  = NULL;

/*
 * Static variable to make sure _load called no more than once.
 */

static int s_load_called = 0;

/*
 * Static variables for managing EPV initialization.
 */

static int s_method_initialized = 0;

static struct edu_csdms_models_HydroTrend__epv 
  s_my_epv__edu_csdms_models_hydrotrend;

static struct edu_csdms_models_HydroTrend__epv 
  s_my_epv_contracts__edu_csdms_models_hydrotrend;

static struct edu_csdms_models_HydroTrend__epv 
  s_my_epv_hooks__edu_csdms_models_hydrotrend;

static struct edu_csdms_ports_IRFPort__epv s_my_epv__edu_csdms_ports_irfport;
static struct edu_csdms_ports_IRFPort__epv 
  s_my_epv_hooks__edu_csdms_ports_irfport;

static struct gov_cca_Component__epv s_my_epv__gov_cca_component;
static struct gov_cca_Component__epv s_my_epv_hooks__gov_cca_component;

static struct gov_cca_ComponentRelease__epv s_my_epv__gov_cca_componentrelease;
static struct gov_cca_ComponentRelease__epv 
  s_my_epv_hooks__gov_cca_componentrelease;

static struct gov_cca_Port__epv s_my_epv__gov_cca_port;
static struct gov_cca_Port__epv s_my_epv_hooks__gov_cca_port;

static struct gov_cca_ports_GoPort__epv s_my_epv__gov_cca_ports_goport;
static struct gov_cca_ports_GoPort__epv s_my_epv_hooks__gov_cca_ports_goport;

static struct sidl_BaseClass__epv  s_my_epv__sidl_baseclass;
static struct sidl_BaseClass__epv* s_par_epv__sidl_baseclass;

static struct sidl_BaseInterface__epv  s_my_epv__sidl_baseinterface;
static struct sidl_BaseInterface__epv* s_par_epv__sidl_baseinterface;

static struct edu_csdms_models_HydroTrend__pre_epv s_preEPV;
static struct edu_csdms_models_HydroTrend__post_epv s_postEPV;

/*
 * Declare EPV routines defined in the skeleton file.
 */

#ifdef __cplusplus
extern "C" {
#endif

extern void edu_csdms_models_HydroTrend__set_epv(
  struct edu_csdms_models_HydroTrend__epv* epv,
    struct edu_csdms_models_HydroTrend__pre_epv* pre_epv,
    struct edu_csdms_models_HydroTrend__post_epv* post_epv);

extern void edu_csdms_models_HydroTrend__call_load(void);
#ifdef __cplusplus
}
#endif

static void
edu_csdms_models_HydroTrend_boccaSetServices__exec(
        struct edu_csdms_models_HydroTrend__object* self,
        struct sidl_rmi_Call__object* inArgs,
        struct sidl_rmi_Return__object* outArgs,
        struct sidl_BaseInterface__object ** _ex) {
  /* stack space for arguments */
  char* services_str = NULL;
#ifndef WITH_RMI
  sidl_BaseClass services_bc = NULL;
#endif /* WITH_RMI */
  struct gov_cca_Services__object* services = NULL;
  sidl_BaseInterface _throwaway_exception = NULL;
  sidl_BaseInterface _ex3   = NULL;
  sidl_BaseException _SIDLex = NULL;
  /* unpack in and inout argments */
  sidl_rmi_Call_unpackString( inArgs, "services", &services_str, 
    _ex);SIDL_CHECK(*_ex);
#ifdef WITH_RMI

  services = skel_edu_csdms_models_HydroTrend_fconnect_gov_cca_Services(
    services_str, TRUE, _ex);SIDL_CHECK(*_ex);
#else
  services_bc = sidl_rmi_InstanceRegistry_getInstanceByString(services_str, 
    _ex);SIDL_CHECK(*_ex);
  if(services_bc != NULL) {
    services= (struct edu_csdms_models_HydroTrend__object*) (
      *services_bc->d_epv->f__cast)(services_bc, "edu.csdms.models.HydroTrend", 
      _ex);
    if(services != NULL) {
      (((struct sidl_BaseInterface__object*)(services))->d_epv->f_deleteRef)(((
        struct sidl_BaseInterface__object*)services)->d_object, _ex); 
        SIDL_CHECK(*_ex);
    } else {
      (*services_bc->d_epv->f_deleteRef)(services_bc, _ex);
    }
  }
#endif /* WITH_RMI */

  /* make the call */
  (self->d_epv->f_boccaSetServices)(
    self,
    services,
    _ex);  SIDL_CHECK(*_ex);

  /* pack return value */
  /* pack out and inout argments */
  EXIT:
  /* clean-up dangling references */
  if(services_str) {free(services_str);}
  if(services) {
    sidl_BaseInterface_deleteRef((sidl_BaseInterface)services, &_ex3); 
      EXEC_CHECK(_ex3);
  }
  EXEC_ERR:
  if(*_ex) { 
    _SIDLex = sidl_BaseException__cast(*_ex,&_throwaway_exception);
    sidl_rmi_Return_throwException(outArgs, _SIDLex, &_throwaway_exception); 
    if(_throwaway_exception) {
      /* Throwing failed, throw _ex up the stack then. */
      sidl_BaseInterface_deleteRef(_throwaway_exception, &_throwaway_exception);
      return;
    }
    sidl_BaseException_deleteRef(_SIDLex, &_throwaway_exception);
    sidl_BaseInterface_deleteRef(*_ex, &_throwaway_exception);
    *_ex = NULL;
    if(_ex3) { 
      sidl_BaseInterface_deleteRef(_ex3, &_throwaway_exception);
      _ex3 = NULL;
    }
  } else if(_ex3) {
    _SIDLex = sidl_BaseException__cast(_ex3,&_throwaway_exception);
    sidl_rmi_Return_throwException(outArgs, _SIDLex, &_throwaway_exception); 
    if(_throwaway_exception) {
      /* Throwing failed throw _ex3 up the stack then. */
      sidl_BaseInterface_deleteRef(_throwaway_exception, &_throwaway_exception);
      return;
    }
    sidl_BaseException_deleteRef(_SIDLex, &_throwaway_exception);
    sidl_BaseInterface_deleteRef(_ex3, &_throwaway_exception);
    _ex3 = NULL;
  }
}

static void
edu_csdms_models_HydroTrend_boccaReleaseServices__exec(
        struct edu_csdms_models_HydroTrend__object* self,
        struct sidl_rmi_Call__object* inArgs,
        struct sidl_rmi_Return__object* outArgs,
        struct sidl_BaseInterface__object ** _ex) {
  /* stack space for arguments */
  char* services_str = NULL;
#ifndef WITH_RMI
  sidl_BaseClass services_bc = NULL;
#endif /* WITH_RMI */
  struct gov_cca_Services__object* services = NULL;
  sidl_BaseInterface _throwaway_exception = NULL;
  sidl_BaseInterface _ex3   = NULL;
  sidl_BaseException _SIDLex = NULL;
  /* unpack in and inout argments */
  sidl_rmi_Call_unpackString( inArgs, "services", &services_str, 
    _ex);SIDL_CHECK(*_ex);
#ifdef WITH_RMI

  services = skel_edu_csdms_models_HydroTrend_fconnect_gov_cca_Services(
    services_str, TRUE, _ex);SIDL_CHECK(*_ex);
#else
  services_bc = sidl_rmi_InstanceRegistry_getInstanceByString(services_str, 
    _ex);SIDL_CHECK(*_ex);
  if(services_bc != NULL) {
    services= (struct edu_csdms_models_HydroTrend__object*) (
      *services_bc->d_epv->f__cast)(services_bc, "edu.csdms.models.HydroTrend", 
      _ex);
    if(services != NULL) {
      (((struct sidl_BaseInterface__object*)(services))->d_epv->f_deleteRef)(((
        struct sidl_BaseInterface__object*)services)->d_object, _ex); 
        SIDL_CHECK(*_ex);
    } else {
      (*services_bc->d_epv->f_deleteRef)(services_bc, _ex);
    }
  }
#endif /* WITH_RMI */

  /* make the call */
  (self->d_epv->f_boccaReleaseServices)(
    self,
    services,
    _ex);  SIDL_CHECK(*_ex);

  /* pack return value */
  /* pack out and inout argments */
  EXIT:
  /* clean-up dangling references */
  if(services_str) {free(services_str);}
  if(services) {
    sidl_BaseInterface_deleteRef((sidl_BaseInterface)services, &_ex3); 
      EXEC_CHECK(_ex3);
  }
  EXEC_ERR:
  if(*_ex) { 
    _SIDLex = sidl_BaseException__cast(*_ex,&_throwaway_exception);
    sidl_rmi_Return_throwException(outArgs, _SIDLex, &_throwaway_exception); 
    if(_throwaway_exception) {
      /* Throwing failed, throw _ex up the stack then. */
      sidl_BaseInterface_deleteRef(_throwaway_exception, &_throwaway_exception);
      return;
    }
    sidl_BaseException_deleteRef(_SIDLex, &_throwaway_exception);
    sidl_BaseInterface_deleteRef(*_ex, &_throwaway_exception);
    *_ex = NULL;
    if(_ex3) { 
      sidl_BaseInterface_deleteRef(_ex3, &_throwaway_exception);
      _ex3 = NULL;
    }
  } else if(_ex3) {
    _SIDLex = sidl_BaseException__cast(_ex3,&_throwaway_exception);
    sidl_rmi_Return_throwException(outArgs, _SIDLex, &_throwaway_exception); 
    if(_throwaway_exception) {
      /* Throwing failed throw _ex3 up the stack then. */
      sidl_BaseInterface_deleteRef(_throwaway_exception, &_throwaway_exception);
      return;
    }
    sidl_BaseException_deleteRef(_SIDLex, &_throwaway_exception);
    sidl_BaseInterface_deleteRef(_ex3, &_throwaway_exception);
    _ex3 = NULL;
  }
}

static void
edu_csdms_models_HydroTrend_checkException__exec(
        struct edu_csdms_models_HydroTrend__object* self,
        struct sidl_rmi_Call__object* inArgs,
        struct sidl_rmi_Return__object* outArgs,
        struct sidl_BaseInterface__object ** _ex) {
  /* stack space for arguments */
  char* excpt_str = NULL;
#ifndef WITH_RMI
  sidl_BaseClass excpt_bc = NULL;
#endif /* WITH_RMI */
  struct sidl_BaseInterface__object* excpt = NULL;
  char* msg= NULL;
  sidl_bool fatal = FALSE;
  sidl_BaseInterface _throwaway_exception = NULL;
  sidl_BaseInterface _ex3   = NULL;
  sidl_BaseException _SIDLex = NULL;
  /* unpack in and inout argments */
  sidl_rmi_Call_unpackString( inArgs, "excpt", &excpt_str, _ex);SIDL_CHECK(
    *_ex);
#ifdef WITH_RMI

  excpt = skel_edu_csdms_models_HydroTrend_fconnect_sidl_BaseInterface(
    excpt_str, TRUE, _ex);SIDL_CHECK(*_ex);
#else
  excpt_bc = sidl_rmi_InstanceRegistry_getInstanceByString(excpt_str, 
    _ex);SIDL_CHECK(*_ex);
  if(excpt_bc != NULL) {
    excpt= (struct edu_csdms_models_HydroTrend__object*) (
      *excpt_bc->d_epv->f__cast)(excpt_bc, "edu.csdms.models.HydroTrend", _ex);
    if(excpt != NULL) {
      (((struct sidl_BaseInterface__object*)(excpt))->d_epv->f_deleteRef)(((
        struct sidl_BaseInterface__object*)excpt)->d_object, _ex); SIDL_CHECK(
        *_ex);
    } else {
      (*excpt_bc->d_epv->f_deleteRef)(excpt_bc, _ex);
    }
  }
#endif /* WITH_RMI */
  sidl_rmi_Call_unpackString( inArgs, "msg", &msg, _ex);SIDL_CHECK(*_ex);
  sidl_rmi_Call_unpackBool( inArgs, "fatal", &fatal, _ex);SIDL_CHECK(*_ex);

  /* make the call */
  (self->d_epv->f_checkException)(
    self,
    excpt,
    msg,
    fatal,
    _ex);  SIDL_CHECK(*_ex);

  /* pack return value */
  /* pack out and inout argments */
  EXIT:
  /* clean-up dangling references */
  if(excpt_str) {free(excpt_str);}
  if(excpt) {
    sidl_BaseInterface_deleteRef((sidl_BaseInterface)excpt, &_ex3); EXEC_CHECK(
      _ex3);
  }
  if(msg) {free(msg);}
  EXEC_ERR:
  if(*_ex) { 
    _SIDLex = sidl_BaseException__cast(*_ex,&_throwaway_exception);
    sidl_rmi_Return_throwException(outArgs, _SIDLex, &_throwaway_exception); 
    if(_throwaway_exception) {
      /* Throwing failed, throw _ex up the stack then. */
      sidl_BaseInterface_deleteRef(_throwaway_exception, &_throwaway_exception);
      return;
    }
    sidl_BaseException_deleteRef(_SIDLex, &_throwaway_exception);
    sidl_BaseInterface_deleteRef(*_ex, &_throwaway_exception);
    *_ex = NULL;
    if(_ex3) { 
      sidl_BaseInterface_deleteRef(_ex3, &_throwaway_exception);
      _ex3 = NULL;
    }
  } else if(_ex3) {
    _SIDLex = sidl_BaseException__cast(_ex3,&_throwaway_exception);
    sidl_rmi_Return_throwException(outArgs, _SIDLex, &_throwaway_exception); 
    if(_throwaway_exception) {
      /* Throwing failed throw _ex3 up the stack then. */
      sidl_BaseInterface_deleteRef(_throwaway_exception, &_throwaway_exception);
      return;
    }
    sidl_BaseException_deleteRef(_SIDLex, &_throwaway_exception);
    sidl_BaseInterface_deleteRef(_ex3, &_throwaway_exception);
    _ex3 = NULL;
  }
}

static void
edu_csdms_models_HydroTrend_boccaForceUsePortInclude__exec(
        struct edu_csdms_models_HydroTrend__object* self,
        struct sidl_rmi_Call__object* inArgs,
        struct sidl_rmi_Return__object* outArgs,
        struct sidl_BaseInterface__object ** _ex) {
  /* stack space for arguments */
  char* dummy0_str = NULL;
#ifndef WITH_RMI
  sidl_BaseClass dummy0_bc = NULL;
#endif /* WITH_RMI */
  struct gov_cca_ports_ParameterPortFactory__object* dummy0 = NULL;
  char* dummy1_str = NULL;
#ifndef WITH_RMI
  sidl_BaseClass dummy1_bc = NULL;
#endif /* WITH_RMI */
  struct edu_csdms_tools_Verbose__object* dummy1 = NULL;
  char* dummy2_str = NULL;
#ifndef WITH_RMI
  sidl_BaseClass dummy2_bc = NULL;
#endif /* WITH_RMI */
  struct edu_csdms_tools_TemplateFiles__object* dummy2 = NULL;
  char* dummy3_str = NULL;
#ifndef WITH_RMI
  sidl_BaseClass dummy3_bc = NULL;
#endif /* WITH_RMI */
  struct edu_csdms_openmi_ScalarSet__object* dummy3 = NULL;
  char* dummy4_str = NULL;
#ifndef WITH_RMI
  sidl_BaseClass dummy4_bc = NULL;
#endif /* WITH_RMI */
  struct edu_csdms_tools_ConfigDialog__object* dummy4 = NULL;
  char* dummy5_str = NULL;
#ifndef WITH_RMI
  sidl_BaseClass dummy5_bc = NULL;
#endif /* WITH_RMI */
  struct edu_csdms_tools_PrintQueue__object* dummy5 = NULL;
  sidl_BaseInterface _throwaway_exception = NULL;
  sidl_BaseInterface _ex3   = NULL;
  sidl_BaseException _SIDLex = NULL;
  /* unpack in and inout argments */
  sidl_rmi_Call_unpackString( inArgs, "dummy0", &dummy0_str, _ex);SIDL_CHECK(
    *_ex);
#ifdef WITH_RMI

  dummy0 = 
    skel_edu_csdms_models_HydroTrend_fconnect_gov_cca_ports_ParameterPortFactory
    (dummy0_str, TRUE, _ex);SIDL_CHECK(*_ex);
#else
  dummy0_bc = sidl_rmi_InstanceRegistry_getInstanceByString(dummy0_str, 
    _ex);SIDL_CHECK(*_ex);
  if(dummy0_bc != NULL) {
    dummy0= (struct edu_csdms_models_HydroTrend__object*) (
      *dummy0_bc->d_epv->f__cast)(dummy0_bc, "edu.csdms.models.HydroTrend", 
      _ex);
    if(dummy0 != NULL) {
      (((struct sidl_BaseInterface__object*)(dummy0))->d_epv->f_deleteRef)(((
        struct sidl_BaseInterface__object*)dummy0)->d_object, _ex); SIDL_CHECK(
        *_ex);
    } else {
      (*dummy0_bc->d_epv->f_deleteRef)(dummy0_bc, _ex);
    }
  }
#endif /* WITH_RMI */
  sidl_rmi_Call_unpackString( inArgs, "dummy1", &dummy1_str, _ex);SIDL_CHECK(
    *_ex);
#ifdef WITH_RMI

  dummy1 = skel_edu_csdms_models_HydroTrend_fconnect_edu_csdms_tools_Verbose(
    dummy1_str, TRUE, _ex);SIDL_CHECK(*_ex);
#else
  dummy1_bc = sidl_rmi_InstanceRegistry_getInstanceByString(dummy1_str, 
    _ex);SIDL_CHECK(*_ex);
  if(dummy1_bc != NULL) {
    dummy1= (struct edu_csdms_models_HydroTrend__object*) (
      *dummy1_bc->d_epv->f__cast)(dummy1_bc, "edu.csdms.models.HydroTrend", 
      _ex);
    if(dummy1 != NULL) {
      (((struct sidl_BaseInterface__object*)(dummy1))->d_epv->f_deleteRef)(((
        struct sidl_BaseInterface__object*)dummy1)->d_object, _ex); SIDL_CHECK(
        *_ex);
    } else {
      (*dummy1_bc->d_epv->f_deleteRef)(dummy1_bc, _ex);
    }
  }
#endif /* WITH_RMI */
  sidl_rmi_Call_unpackString( inArgs, "dummy2", &dummy2_str, _ex);SIDL_CHECK(
    *_ex);
#ifdef WITH_RMI

  dummy2 = 
    skel_edu_csdms_models_HydroTrend_fconnect_edu_csdms_tools_TemplateFiles(
    dummy2_str, TRUE, _ex);SIDL_CHECK(*_ex);
#else
  dummy2_bc = sidl_rmi_InstanceRegistry_getInstanceByString(dummy2_str, 
    _ex);SIDL_CHECK(*_ex);
  if(dummy2_bc != NULL) {
    dummy2= (struct edu_csdms_models_HydroTrend__object*) (
      *dummy2_bc->d_epv->f__cast)(dummy2_bc, "edu.csdms.models.HydroTrend", 
      _ex);
    if(dummy2 != NULL) {
      (((struct sidl_BaseInterface__object*)(dummy2))->d_epv->f_deleteRef)(((
        struct sidl_BaseInterface__object*)dummy2)->d_object, _ex); SIDL_CHECK(
        *_ex);
    } else {
      (*dummy2_bc->d_epv->f_deleteRef)(dummy2_bc, _ex);
    }
  }
#endif /* WITH_RMI */
  sidl_rmi_Call_unpackString( inArgs, "dummy3", &dummy3_str, _ex);SIDL_CHECK(
    *_ex);
#ifdef WITH_RMI

  dummy3 = skel_edu_csdms_models_HydroTrend_fconnect_edu_csdms_openmi_ScalarSet(
    dummy3_str, TRUE, _ex);SIDL_CHECK(*_ex);
#else
  dummy3_bc = sidl_rmi_InstanceRegistry_getInstanceByString(dummy3_str, 
    _ex);SIDL_CHECK(*_ex);
  if(dummy3_bc != NULL) {
    dummy3= (struct edu_csdms_models_HydroTrend__object*) (
      *dummy3_bc->d_epv->f__cast)(dummy3_bc, "edu.csdms.models.HydroTrend", 
      _ex);
    if(dummy3 != NULL) {
      (((struct sidl_BaseInterface__object*)(dummy3))->d_epv->f_deleteRef)(((
        struct sidl_BaseInterface__object*)dummy3)->d_object, _ex); SIDL_CHECK(
        *_ex);
    } else {
      (*dummy3_bc->d_epv->f_deleteRef)(dummy3_bc, _ex);
    }
  }
#endif /* WITH_RMI */
  sidl_rmi_Call_unpackString( inArgs, "dummy4", &dummy4_str, _ex);SIDL_CHECK(
    *_ex);
#ifdef WITH_RMI

  dummy4 = 
    skel_edu_csdms_models_HydroTrend_fconnect_edu_csdms_tools_ConfigDialog(
    dummy4_str, TRUE, _ex);SIDL_CHECK(*_ex);
#else
  dummy4_bc = sidl_rmi_InstanceRegistry_getInstanceByString(dummy4_str, 
    _ex);SIDL_CHECK(*_ex);
  if(dummy4_bc != NULL) {
    dummy4= (struct edu_csdms_models_HydroTrend__object*) (
      *dummy4_bc->d_epv->f__cast)(dummy4_bc, "edu.csdms.models.HydroTrend", 
      _ex);
    if(dummy4 != NULL) {
      (((struct sidl_BaseInterface__object*)(dummy4))->d_epv->f_deleteRef)(((
        struct sidl_BaseInterface__object*)dummy4)->d_object, _ex); SIDL_CHECK(
        *_ex);
    } else {
      (*dummy4_bc->d_epv->f_deleteRef)(dummy4_bc, _ex);
    }
  }
#endif /* WITH_RMI */
  sidl_rmi_Call_unpackString( inArgs, "dummy5", &dummy5_str, _ex);SIDL_CHECK(
    *_ex);
#ifdef WITH_RMI

  dummy5 = skel_edu_csdms_models_HydroTrend_fconnect_edu_csdms_tools_PrintQueue(
    dummy5_str, TRUE, _ex);SIDL_CHECK(*_ex);
#else
  dummy5_bc = sidl_rmi_InstanceRegistry_getInstanceByString(dummy5_str, 
    _ex);SIDL_CHECK(*_ex);
  if(dummy5_bc != NULL) {
    dummy5= (struct edu_csdms_models_HydroTrend__object*) (
      *dummy5_bc->d_epv->f__cast)(dummy5_bc, "edu.csdms.models.HydroTrend", 
      _ex);
    if(dummy5 != NULL) {
      (((struct sidl_BaseInterface__object*)(dummy5))->d_epv->f_deleteRef)(((
        struct sidl_BaseInterface__object*)dummy5)->d_object, _ex); SIDL_CHECK(
        *_ex);
    } else {
      (*dummy5_bc->d_epv->f_deleteRef)(dummy5_bc, _ex);
    }
  }
#endif /* WITH_RMI */

  /* make the call */
  (self->d_epv->f_boccaForceUsePortInclude)(
    self,
    dummy0,
    dummy1,
    dummy2,
    dummy3,
    dummy4,
    dummy5,
    _ex);  SIDL_CHECK(*_ex);

  /* pack return value */
  /* pack out and inout argments */
  EXIT:
  /* clean-up dangling references */
  if(dummy0_str) {free(dummy0_str);}
  if(dummy0) {
    sidl_BaseInterface_deleteRef((sidl_BaseInterface)dummy0, &_ex3); EXEC_CHECK(
      _ex3);
  }
  if(dummy1_str) {free(dummy1_str);}
  if(dummy1) {
    sidl_BaseInterface_deleteRef((sidl_BaseInterface)dummy1, &_ex3); EXEC_CHECK(
      _ex3);
  }
  if(dummy2_str) {free(dummy2_str);}
  if(dummy2) {
    sidl_BaseInterface_deleteRef((sidl_BaseInterface)dummy2, &_ex3); EXEC_CHECK(
      _ex3);
  }
  if(dummy3_str) {free(dummy3_str);}
  if(dummy3) {
    sidl_BaseInterface_deleteRef((sidl_BaseInterface)dummy3, &_ex3); EXEC_CHECK(
      _ex3);
  }
  if(dummy4_str) {free(dummy4_str);}
  if(dummy4) {
    sidl_BaseInterface_deleteRef((sidl_BaseInterface)dummy4, &_ex3); EXEC_CHECK(
      _ex3);
  }
  if(dummy5_str) {free(dummy5_str);}
  if(dummy5) {
    sidl_BaseInterface_deleteRef((sidl_BaseInterface)dummy5, &_ex3); EXEC_CHECK(
      _ex3);
  }
  EXEC_ERR:
  if(*_ex) { 
    _SIDLex = sidl_BaseException__cast(*_ex,&_throwaway_exception);
    sidl_rmi_Return_throwException(outArgs, _SIDLex, &_throwaway_exception); 
    if(_throwaway_exception) {
      /* Throwing failed, throw _ex up the stack then. */
      sidl_BaseInterface_deleteRef(_throwaway_exception, &_throwaway_exception);
      return;
    }
    sidl_BaseException_deleteRef(_SIDLex, &_throwaway_exception);
    sidl_BaseInterface_deleteRef(*_ex, &_throwaway_exception);
    *_ex = NULL;
    if(_ex3) { 
      sidl_BaseInterface_deleteRef(_ex3, &_throwaway_exception);
      _ex3 = NULL;
    }
  } else if(_ex3) {
    _SIDLex = sidl_BaseException__cast(_ex3,&_throwaway_exception);
    sidl_rmi_Return_throwException(outArgs, _SIDLex, &_throwaway_exception); 
    if(_throwaway_exception) {
      /* Throwing failed throw _ex3 up the stack then. */
      sidl_BaseInterface_deleteRef(_throwaway_exception, &_throwaway_exception);
      return;
    }
    sidl_BaseException_deleteRef(_SIDLex, &_throwaway_exception);
    sidl_BaseInterface_deleteRef(_ex3, &_throwaway_exception);
    _ex3 = NULL;
  }
}

static void
edu_csdms_models_HydroTrend_addRef__exec(
        struct edu_csdms_models_HydroTrend__object* self,
        struct sidl_rmi_Call__object* inArgs,
        struct sidl_rmi_Return__object* outArgs,
        struct sidl_BaseInterface__object ** _ex) {
  /* stack space for arguments */
  sidl_BaseInterface _throwaway_exception = NULL;
  sidl_BaseInterface _ex3   = NULL;
  sidl_BaseException _SIDLex = NULL;
  /* unpack in and inout argments */

  /* make the call */
  (self->d_epv->f_addRef)(
    self,
    _ex);  SIDL_CHECK(*_ex);

  /* pack return value */
  /* pack out and inout argments */
  EXIT:
  /* clean-up dangling references */
  if(*_ex) { 
    _SIDLex = sidl_BaseException__cast(*_ex,&_throwaway_exception);
    sidl_rmi_Return_throwException(outArgs, _SIDLex, &_throwaway_exception); 
    if(_throwaway_exception) {
      /* Throwing failed, throw _ex up the stack then. */
      sidl_BaseInterface_deleteRef(_throwaway_exception, &_throwaway_exception);
      return;
    }
    sidl_BaseException_deleteRef(_SIDLex, &_throwaway_exception);
    sidl_BaseInterface_deleteRef(*_ex, &_throwaway_exception);
    *_ex = NULL;
    if(_ex3) { 
      sidl_BaseInterface_deleteRef(_ex3, &_throwaway_exception);
      _ex3 = NULL;
    }
  } else if(_ex3) {
    _SIDLex = sidl_BaseException__cast(_ex3,&_throwaway_exception);
    sidl_rmi_Return_throwException(outArgs, _SIDLex, &_throwaway_exception); 
    if(_throwaway_exception) {
      /* Throwing failed throw _ex3 up the stack then. */
      sidl_BaseInterface_deleteRef(_throwaway_exception, &_throwaway_exception);
      return;
    }
    sidl_BaseException_deleteRef(_SIDLex, &_throwaway_exception);
    sidl_BaseInterface_deleteRef(_ex3, &_throwaway_exception);
    _ex3 = NULL;
  }
}

static void
edu_csdms_models_HydroTrend_deleteRef__exec(
        struct edu_csdms_models_HydroTrend__object* self,
        struct sidl_rmi_Call__object* inArgs,
        struct sidl_rmi_Return__object* outArgs,
        struct sidl_BaseInterface__object ** _ex) {
  /* stack space for arguments */
  sidl_BaseInterface _throwaway_exception = NULL;
  sidl_BaseInterface _ex3   = NULL;
  sidl_BaseException _SIDLex = NULL;
  /* unpack in and inout argments */

  /* make the call */
  (self->d_epv->f_deleteRef)(
    self,
    _ex);  SIDL_CHECK(*_ex);

  /* pack return value */
  /* pack out and inout argments */
  EXIT:
  /* clean-up dangling references */
  if(*_ex) { 
    _SIDLex = sidl_BaseException__cast(*_ex,&_throwaway_exception);
    sidl_rmi_Return_throwException(outArgs, _SIDLex, &_throwaway_exception); 
    if(_throwaway_exception) {
      /* Throwing failed, throw _ex up the stack then. */
      sidl_BaseInterface_deleteRef(_throwaway_exception, &_throwaway_exception);
      return;
    }
    sidl_BaseException_deleteRef(_SIDLex, &_throwaway_exception);
    sidl_BaseInterface_deleteRef(*_ex, &_throwaway_exception);
    *_ex = NULL;
    if(_ex3) { 
      sidl_BaseInterface_deleteRef(_ex3, &_throwaway_exception);
      _ex3 = NULL;
    }
  } else if(_ex3) {
    _SIDLex = sidl_BaseException__cast(_ex3,&_throwaway_exception);
    sidl_rmi_Return_throwException(outArgs, _SIDLex, &_throwaway_exception); 
    if(_throwaway_exception) {
      /* Throwing failed throw _ex3 up the stack then. */
      sidl_BaseInterface_deleteRef(_throwaway_exception, &_throwaway_exception);
      return;
    }
    sidl_BaseException_deleteRef(_SIDLex, &_throwaway_exception);
    sidl_BaseInterface_deleteRef(_ex3, &_throwaway_exception);
    _ex3 = NULL;
  }
}

static void
edu_csdms_models_HydroTrend_isSame__exec(
        struct edu_csdms_models_HydroTrend__object* self,
        struct sidl_rmi_Call__object* inArgs,
        struct sidl_rmi_Return__object* outArgs,
        struct sidl_BaseInterface__object ** _ex) {
  /* stack space for arguments */
  char* iobj_str = NULL;
#ifndef WITH_RMI
  sidl_BaseClass iobj_bc = NULL;
#endif /* WITH_RMI */
  struct sidl_BaseInterface__object* iobj = NULL;
  sidl_bool _retval = FALSE;
  sidl_BaseInterface _throwaway_exception = NULL;
  sidl_BaseInterface _ex3   = NULL;
  sidl_BaseException _SIDLex = NULL;
  /* unpack in and inout argments */
  sidl_rmi_Call_unpackString( inArgs, "iobj", &iobj_str, _ex);SIDL_CHECK(*_ex);
#ifdef WITH_RMI

  iobj = skel_edu_csdms_models_HydroTrend_fconnect_sidl_BaseInterface(iobj_str, 
    TRUE, _ex);SIDL_CHECK(*_ex);
#else
  iobj_bc = sidl_rmi_InstanceRegistry_getInstanceByString(iobj_str, 
    _ex);SIDL_CHECK(*_ex);
  if(iobj_bc != NULL) {
    iobj= (struct edu_csdms_models_HydroTrend__object*) (
      *iobj_bc->d_epv->f__cast)(iobj_bc, "edu.csdms.models.HydroTrend", _ex);
    if(iobj != NULL) {
      (((struct sidl_BaseInterface__object*)(iobj))->d_epv->f_deleteRef)(((
        struct sidl_BaseInterface__object*)iobj)->d_object, _ex); SIDL_CHECK(
        *_ex);
    } else {
      (*iobj_bc->d_epv->f_deleteRef)(iobj_bc, _ex);
    }
  }
#endif /* WITH_RMI */

  /* make the call */
  _retval = (self->d_epv->f_isSame)(
    self,
    iobj,
    _ex);  SIDL_CHECK(*_ex);

  /* pack return value */
  sidl_rmi_Return_packBool( outArgs, "_retval", _retval, _ex);SIDL_CHECK(*_ex);
  /* pack out and inout argments */
  EXIT:
  /* clean-up dangling references */
  if(iobj_str) {free(iobj_str);}
  if(iobj) {
    sidl_BaseInterface_deleteRef((sidl_BaseInterface)iobj, &_ex3); EXEC_CHECK(
      _ex3);
  }
  EXEC_ERR:
  if(*_ex) { 
    _SIDLex = sidl_BaseException__cast(*_ex,&_throwaway_exception);
    sidl_rmi_Return_throwException(outArgs, _SIDLex, &_throwaway_exception); 
    if(_throwaway_exception) {
      /* Throwing failed, throw _ex up the stack then. */
      sidl_BaseInterface_deleteRef(_throwaway_exception, &_throwaway_exception);
      return;
    }
    sidl_BaseException_deleteRef(_SIDLex, &_throwaway_exception);
    sidl_BaseInterface_deleteRef(*_ex, &_throwaway_exception);
    *_ex = NULL;
    if(_ex3) { 
      sidl_BaseInterface_deleteRef(_ex3, &_throwaway_exception);
      _ex3 = NULL;
    }
  } else if(_ex3) {
    _SIDLex = sidl_BaseException__cast(_ex3,&_throwaway_exception);
    sidl_rmi_Return_throwException(outArgs, _SIDLex, &_throwaway_exception); 
    if(_throwaway_exception) {
      /* Throwing failed throw _ex3 up the stack then. */
      sidl_BaseInterface_deleteRef(_throwaway_exception, &_throwaway_exception);
      return;
    }
    sidl_BaseException_deleteRef(_SIDLex, &_throwaway_exception);
    sidl_BaseInterface_deleteRef(_ex3, &_throwaway_exception);
    _ex3 = NULL;
  }
}

static void
edu_csdms_models_HydroTrend_isType__exec(
        struct edu_csdms_models_HydroTrend__object* self,
        struct sidl_rmi_Call__object* inArgs,
        struct sidl_rmi_Return__object* outArgs,
        struct sidl_BaseInterface__object ** _ex) {
  /* stack space for arguments */
  char* name= NULL;
  sidl_bool _retval = FALSE;
  sidl_BaseInterface _throwaway_exception = NULL;
  sidl_BaseInterface _ex3   = NULL;
  sidl_BaseException _SIDLex = NULL;
  /* unpack in and inout argments */
  sidl_rmi_Call_unpackString( inArgs, "name", &name, _ex);SIDL_CHECK(*_ex);

  /* make the call */
  _retval = (self->d_epv->f_isType)(
    self,
    name,
    _ex);  SIDL_CHECK(*_ex);

  /* pack return value */
  sidl_rmi_Return_packBool( outArgs, "_retval", _retval, _ex);SIDL_CHECK(*_ex);
  /* pack out and inout argments */
  EXIT:
  /* clean-up dangling references */
  if(name) {free(name);}
  if(*_ex) { 
    _SIDLex = sidl_BaseException__cast(*_ex,&_throwaway_exception);
    sidl_rmi_Return_throwException(outArgs, _SIDLex, &_throwaway_exception); 
    if(_throwaway_exception) {
      /* Throwing failed, throw _ex up the stack then. */
      sidl_BaseInterface_deleteRef(_throwaway_exception, &_throwaway_exception);
      return;
    }
    sidl_BaseException_deleteRef(_SIDLex, &_throwaway_exception);
    sidl_BaseInterface_deleteRef(*_ex, &_throwaway_exception);
    *_ex = NULL;
    if(_ex3) { 
      sidl_BaseInterface_deleteRef(_ex3, &_throwaway_exception);
      _ex3 = NULL;
    }
  } else if(_ex3) {
    _SIDLex = sidl_BaseException__cast(_ex3,&_throwaway_exception);
    sidl_rmi_Return_throwException(outArgs, _SIDLex, &_throwaway_exception); 
    if(_throwaway_exception) {
      /* Throwing failed throw _ex3 up the stack then. */
      sidl_BaseInterface_deleteRef(_throwaway_exception, &_throwaway_exception);
      return;
    }
    sidl_BaseException_deleteRef(_SIDLex, &_throwaway_exception);
    sidl_BaseInterface_deleteRef(_ex3, &_throwaway_exception);
    _ex3 = NULL;
  }
}

static void
edu_csdms_models_HydroTrend_getClassInfo__exec(
        struct edu_csdms_models_HydroTrend__object* self,
        struct sidl_rmi_Call__object* inArgs,
        struct sidl_rmi_Return__object* outArgs,
        struct sidl_BaseInterface__object ** _ex) {
  /* stack space for arguments */
  struct sidl_ClassInfo__object* _retval = NULL;
  sidl_BaseInterface _throwaway_exception = NULL;
  sidl_BaseInterface _ex3   = NULL;
  sidl_BaseException _SIDLex = NULL;
  /* unpack in and inout argments */

  /* make the call */
  _retval = (self->d_epv->f_getClassInfo)(
    self,
    _ex);  SIDL_CHECK(*_ex);

  /* pack return value */
  if(_retval){
    char* _url = sidl_BaseInterface__getURL((sidl_BaseInterface)_retval, 
      _ex);SIDL_CHECK(*_ex);
    sidl_rmi_Return_packString( outArgs, "_retval", _url, _ex);SIDL_CHECK(*_ex);
    free((void*)_url);
  } else {
    sidl_rmi_Return_packString( outArgs, "_retval", NULL, _ex);SIDL_CHECK(*_ex);
  }
  /* pack out and inout argments */
  EXIT:
  /* clean-up dangling references */
  if(_retval && sidl_BaseInterface__isRemote((sidl_BaseInterface)_retval, 
    &_throwaway_exception)) {
    (*((sidl_BaseInterface)_retval)->d_epv->f__raddRef)(((
      sidl_BaseInterface)_retval)->d_object, &_ex3); EXEC_CHECK(_ex3);
    sidl_BaseInterface_deleteRef((sidl_BaseInterface)_retval, &_ex3); 
      EXEC_CHECK(_ex3);
  }
  EXEC_ERR:
  if(*_ex) { 
    _SIDLex = sidl_BaseException__cast(*_ex,&_throwaway_exception);
    sidl_rmi_Return_throwException(outArgs, _SIDLex, &_throwaway_exception); 
    if(_throwaway_exception) {
      /* Throwing failed, throw _ex up the stack then. */
      sidl_BaseInterface_deleteRef(_throwaway_exception, &_throwaway_exception);
      return;
    }
    sidl_BaseException_deleteRef(_SIDLex, &_throwaway_exception);
    sidl_BaseInterface_deleteRef(*_ex, &_throwaway_exception);
    *_ex = NULL;
    if(_ex3) { 
      sidl_BaseInterface_deleteRef(_ex3, &_throwaway_exception);
      _ex3 = NULL;
    }
  } else if(_ex3) {
    _SIDLex = sidl_BaseException__cast(_ex3,&_throwaway_exception);
    sidl_rmi_Return_throwException(outArgs, _SIDLex, &_throwaway_exception); 
    if(_throwaway_exception) {
      /* Throwing failed throw _ex3 up the stack then. */
      sidl_BaseInterface_deleteRef(_throwaway_exception, &_throwaway_exception);
      return;
    }
    sidl_BaseException_deleteRef(_SIDLex, &_throwaway_exception);
    sidl_BaseInterface_deleteRef(_ex3, &_throwaway_exception);
    _ex3 = NULL;
  }
}

static void
edu_csdms_models_HydroTrend_setServices__exec(
        struct edu_csdms_models_HydroTrend__object* self,
        struct sidl_rmi_Call__object* inArgs,
        struct sidl_rmi_Return__object* outArgs,
        struct sidl_BaseInterface__object ** _ex) {
  /* stack space for arguments */
  char* services_str = NULL;
#ifndef WITH_RMI
  sidl_BaseClass services_bc = NULL;
#endif /* WITH_RMI */
  struct gov_cca_Services__object* services = NULL;
  sidl_BaseInterface _throwaway_exception = NULL;
  sidl_BaseInterface _ex3   = NULL;
  sidl_BaseException _SIDLex = NULL;
  /* unpack in and inout argments */
  sidl_rmi_Call_unpackString( inArgs, "services", &services_str, 
    _ex);SIDL_CHECK(*_ex);
#ifdef WITH_RMI

  services = skel_edu_csdms_models_HydroTrend_fconnect_gov_cca_Services(
    services_str, TRUE, _ex);SIDL_CHECK(*_ex);
#else
  services_bc = sidl_rmi_InstanceRegistry_getInstanceByString(services_str, 
    _ex);SIDL_CHECK(*_ex);
  if(services_bc != NULL) {
    services= (struct edu_csdms_models_HydroTrend__object*) (
      *services_bc->d_epv->f__cast)(services_bc, "edu.csdms.models.HydroTrend", 
      _ex);
    if(services != NULL) {
      (((struct sidl_BaseInterface__object*)(services))->d_epv->f_deleteRef)(((
        struct sidl_BaseInterface__object*)services)->d_object, _ex); 
        SIDL_CHECK(*_ex);
    } else {
      (*services_bc->d_epv->f_deleteRef)(services_bc, _ex);
    }
  }
#endif /* WITH_RMI */

  /* make the call */
  (self->d_epv->f_setServices)(
    self,
    services,
    _ex);  SIDL_CHECK(*_ex);

  /* pack return value */
  /* pack out and inout argments */
  EXIT:
  /* clean-up dangling references */
  if(services_str) {free(services_str);}
  if(services) {
    sidl_BaseInterface_deleteRef((sidl_BaseInterface)services, &_ex3); 
      EXEC_CHECK(_ex3);
  }
  EXEC_ERR:
  if(*_ex) { 
    _SIDLex = sidl_BaseException__cast(*_ex,&_throwaway_exception);
    sidl_rmi_Return_throwException(outArgs, _SIDLex, &_throwaway_exception); 
    if(_throwaway_exception) {
      /* Throwing failed, throw _ex up the stack then. */
      sidl_BaseInterface_deleteRef(_throwaway_exception, &_throwaway_exception);
      return;
    }
    sidl_BaseException_deleteRef(_SIDLex, &_throwaway_exception);
    sidl_BaseInterface_deleteRef(*_ex, &_throwaway_exception);
    *_ex = NULL;
    if(_ex3) { 
      sidl_BaseInterface_deleteRef(_ex3, &_throwaway_exception);
      _ex3 = NULL;
    }
  } else if(_ex3) {
    _SIDLex = sidl_BaseException__cast(_ex3,&_throwaway_exception);
    sidl_rmi_Return_throwException(outArgs, _SIDLex, &_throwaway_exception); 
    if(_throwaway_exception) {
      /* Throwing failed throw _ex3 up the stack then. */
      sidl_BaseInterface_deleteRef(_throwaway_exception, &_throwaway_exception);
      return;
    }
    sidl_BaseException_deleteRef(_SIDLex, &_throwaway_exception);
    sidl_BaseInterface_deleteRef(_ex3, &_throwaway_exception);
    _ex3 = NULL;
  }
}

static void
edu_csdms_models_HydroTrend_releaseServices__exec(
        struct edu_csdms_models_HydroTrend__object* self,
        struct sidl_rmi_Call__object* inArgs,
        struct sidl_rmi_Return__object* outArgs,
        struct sidl_BaseInterface__object ** _ex) {
  /* stack space for arguments */
  char* services_str = NULL;
#ifndef WITH_RMI
  sidl_BaseClass services_bc = NULL;
#endif /* WITH_RMI */
  struct gov_cca_Services__object* services = NULL;
  sidl_BaseInterface _throwaway_exception = NULL;
  sidl_BaseInterface _ex3   = NULL;
  sidl_BaseException _SIDLex = NULL;
  /* unpack in and inout argments */
  sidl_rmi_Call_unpackString( inArgs, "services", &services_str, 
    _ex);SIDL_CHECK(*_ex);
#ifdef WITH_RMI

  services = skel_edu_csdms_models_HydroTrend_fconnect_gov_cca_Services(
    services_str, TRUE, _ex);SIDL_CHECK(*_ex);
#else
  services_bc = sidl_rmi_InstanceRegistry_getInstanceByString(services_str, 
    _ex);SIDL_CHECK(*_ex);
  if(services_bc != NULL) {
    services= (struct edu_csdms_models_HydroTrend__object*) (
      *services_bc->d_epv->f__cast)(services_bc, "edu.csdms.models.HydroTrend", 
      _ex);
    if(services != NULL) {
      (((struct sidl_BaseInterface__object*)(services))->d_epv->f_deleteRef)(((
        struct sidl_BaseInterface__object*)services)->d_object, _ex); 
        SIDL_CHECK(*_ex);
    } else {
      (*services_bc->d_epv->f_deleteRef)(services_bc, _ex);
    }
  }
#endif /* WITH_RMI */

  /* make the call */
  (self->d_epv->f_releaseServices)(
    self,
    services,
    _ex);  SIDL_CHECK(*_ex);

  /* pack return value */
  /* pack out and inout argments */
  EXIT:
  /* clean-up dangling references */
  if(services_str) {free(services_str);}
  if(services) {
    sidl_BaseInterface_deleteRef((sidl_BaseInterface)services, &_ex3); 
      EXEC_CHECK(_ex3);
  }
  EXEC_ERR:
  if(*_ex) { 
    _SIDLex = sidl_BaseException__cast(*_ex,&_throwaway_exception);
    sidl_rmi_Return_throwException(outArgs, _SIDLex, &_throwaway_exception); 
    if(_throwaway_exception) {
      /* Throwing failed, throw _ex up the stack then. */
      sidl_BaseInterface_deleteRef(_throwaway_exception, &_throwaway_exception);
      return;
    }
    sidl_BaseException_deleteRef(_SIDLex, &_throwaway_exception);
    sidl_BaseInterface_deleteRef(*_ex, &_throwaway_exception);
    *_ex = NULL;
    if(_ex3) { 
      sidl_BaseInterface_deleteRef(_ex3, &_throwaway_exception);
      _ex3 = NULL;
    }
  } else if(_ex3) {
    _SIDLex = sidl_BaseException__cast(_ex3,&_throwaway_exception);
    sidl_rmi_Return_throwException(outArgs, _SIDLex, &_throwaway_exception); 
    if(_throwaway_exception) {
      /* Throwing failed throw _ex3 up the stack then. */
      sidl_BaseInterface_deleteRef(_throwaway_exception, &_throwaway_exception);
      return;
    }
    sidl_BaseException_deleteRef(_SIDLex, &_throwaway_exception);
    sidl_BaseInterface_deleteRef(_ex3, &_throwaway_exception);
    _ex3 = NULL;
  }
}

static void
edu_csdms_models_HydroTrend_go__exec(
        struct edu_csdms_models_HydroTrend__object* self,
        struct sidl_rmi_Call__object* inArgs,
        struct sidl_rmi_Return__object* outArgs,
        struct sidl_BaseInterface__object ** _ex) {
  /* stack space for arguments */
  int32_t _retval = 0;
  sidl_BaseInterface _throwaway_exception = NULL;
  sidl_BaseInterface _ex3   = NULL;
  sidl_BaseException _SIDLex = NULL;
  /* unpack in and inout argments */

  /* make the call */
  _retval = (self->d_epv->f_go)(
    self,
    _ex);  SIDL_CHECK(*_ex);

  /* pack return value */
  sidl_rmi_Return_packInt( outArgs, "_retval", _retval, _ex);SIDL_CHECK(*_ex);
  /* pack out and inout argments */
  EXIT:
  /* clean-up dangling references */
  if(*_ex) { 
    _SIDLex = sidl_BaseException__cast(*_ex,&_throwaway_exception);
    sidl_rmi_Return_throwException(outArgs, _SIDLex, &_throwaway_exception); 
    if(_throwaway_exception) {
      /* Throwing failed, throw _ex up the stack then. */
      sidl_BaseInterface_deleteRef(_throwaway_exception, &_throwaway_exception);
      return;
    }
    sidl_BaseException_deleteRef(_SIDLex, &_throwaway_exception);
    sidl_BaseInterface_deleteRef(*_ex, &_throwaway_exception);
    *_ex = NULL;
    if(_ex3) { 
      sidl_BaseInterface_deleteRef(_ex3, &_throwaway_exception);
      _ex3 = NULL;
    }
  } else if(_ex3) {
    _SIDLex = sidl_BaseException__cast(_ex3,&_throwaway_exception);
    sidl_rmi_Return_throwException(outArgs, _SIDLex, &_throwaway_exception); 
    if(_throwaway_exception) {
      /* Throwing failed throw _ex3 up the stack then. */
      sidl_BaseInterface_deleteRef(_throwaway_exception, &_throwaway_exception);
      return;
    }
    sidl_BaseException_deleteRef(_SIDLex, &_throwaway_exception);
    sidl_BaseInterface_deleteRef(_ex3, &_throwaway_exception);
    _ex3 = NULL;
  }
}

static void
edu_csdms_models_HydroTrend_initialize__exec(
        struct edu_csdms_models_HydroTrend__object* self,
        struct sidl_rmi_Call__object* inArgs,
        struct sidl_rmi_Return__object* outArgs,
        struct sidl_BaseInterface__object ** _ex) {
  /* stack space for arguments */
  struct sidl_string__array* properties = NULL;
  sidl_BaseInterface _throwaway_exception = NULL;
  sidl_BaseInterface _ex3   = NULL;
  sidl_BaseException _SIDLex = NULL;
  /* unpack in and inout argments */
  sidl_rmi_Call_unpackStringArray( inArgs, "properties", &properties,0,0,FALSE, 
    _ex);SIDL_CHECK(*_ex);

  /* make the call */
  (self->d_epv->f_initialize)(
    self,
    properties,
    _ex);  SIDL_CHECK(*_ex);

  /* pack return value */
  /* pack out and inout argments */
  EXIT:
  /* clean-up dangling references */
  sidl__array_deleteRef((struct sidl__array*)properties);
  if(*_ex) { 
    _SIDLex = sidl_BaseException__cast(*_ex,&_throwaway_exception);
    sidl_rmi_Return_throwException(outArgs, _SIDLex, &_throwaway_exception); 
    if(_throwaway_exception) {
      /* Throwing failed, throw _ex up the stack then. */
      sidl_BaseInterface_deleteRef(_throwaway_exception, &_throwaway_exception);
      return;
    }
    sidl_BaseException_deleteRef(_SIDLex, &_throwaway_exception);
    sidl_BaseInterface_deleteRef(*_ex, &_throwaway_exception);
    *_ex = NULL;
    if(_ex3) { 
      sidl_BaseInterface_deleteRef(_ex3, &_throwaway_exception);
      _ex3 = NULL;
    }
  } else if(_ex3) {
    _SIDLex = sidl_BaseException__cast(_ex3,&_throwaway_exception);
    sidl_rmi_Return_throwException(outArgs, _SIDLex, &_throwaway_exception); 
    if(_throwaway_exception) {
      /* Throwing failed throw _ex3 up the stack then. */
      sidl_BaseInterface_deleteRef(_throwaway_exception, &_throwaway_exception);
      return;
    }
    sidl_BaseException_deleteRef(_SIDLex, &_throwaway_exception);
    sidl_BaseInterface_deleteRef(_ex3, &_throwaway_exception);
    _ex3 = NULL;
  }
}

static void
edu_csdms_models_HydroTrend_run__exec(
        struct edu_csdms_models_HydroTrend__object* self,
        struct sidl_rmi_Call__object* inArgs,
        struct sidl_rmi_Return__object* outArgs,
        struct sidl_BaseInterface__object ** _ex) {
  /* stack space for arguments */
  double time = 0;
  sidl_BaseInterface _throwaway_exception = NULL;
  sidl_BaseInterface _ex3   = NULL;
  sidl_BaseException _SIDLex = NULL;
  /* unpack in and inout argments */
  sidl_rmi_Call_unpackDouble( inArgs, "time", &time, _ex);SIDL_CHECK(*_ex);

  /* make the call */
  (self->d_epv->f_run)(
    self,
    time,
    _ex);  SIDL_CHECK(*_ex);

  /* pack return value */
  /* pack out and inout argments */
  EXIT:
  /* clean-up dangling references */
  if(*_ex) { 
    _SIDLex = sidl_BaseException__cast(*_ex,&_throwaway_exception);
    sidl_rmi_Return_throwException(outArgs, _SIDLex, &_throwaway_exception); 
    if(_throwaway_exception) {
      /* Throwing failed, throw _ex up the stack then. */
      sidl_BaseInterface_deleteRef(_throwaway_exception, &_throwaway_exception);
      return;
    }
    sidl_BaseException_deleteRef(_SIDLex, &_throwaway_exception);
    sidl_BaseInterface_deleteRef(*_ex, &_throwaway_exception);
    *_ex = NULL;
    if(_ex3) { 
      sidl_BaseInterface_deleteRef(_ex3, &_throwaway_exception);
      _ex3 = NULL;
    }
  } else if(_ex3) {
    _SIDLex = sidl_BaseException__cast(_ex3,&_throwaway_exception);
    sidl_rmi_Return_throwException(outArgs, _SIDLex, &_throwaway_exception); 
    if(_throwaway_exception) {
      /* Throwing failed throw _ex3 up the stack then. */
      sidl_BaseInterface_deleteRef(_throwaway_exception, &_throwaway_exception);
      return;
    }
    sidl_BaseException_deleteRef(_SIDLex, &_throwaway_exception);
    sidl_BaseInterface_deleteRef(_ex3, &_throwaway_exception);
    _ex3 = NULL;
  }
}

static void
edu_csdms_models_HydroTrend_finalize__exec(
        struct edu_csdms_models_HydroTrend__object* self,
        struct sidl_rmi_Call__object* inArgs,
        struct sidl_rmi_Return__object* outArgs,
        struct sidl_BaseInterface__object ** _ex) {
  /* stack space for arguments */
  sidl_BaseInterface _throwaway_exception = NULL;
  sidl_BaseInterface _ex3   = NULL;
  sidl_BaseException _SIDLex = NULL;
  /* unpack in and inout argments */

  /* make the call */
  (self->d_epv->f_finalize)(
    self,
    _ex);  SIDL_CHECK(*_ex);

  /* pack return value */
  /* pack out and inout argments */
  EXIT:
  /* clean-up dangling references */
  if(*_ex) { 
    _SIDLex = sidl_BaseException__cast(*_ex,&_throwaway_exception);
    sidl_rmi_Return_throwException(outArgs, _SIDLex, &_throwaway_exception); 
    if(_throwaway_exception) {
      /* Throwing failed, throw _ex up the stack then. */
      sidl_BaseInterface_deleteRef(_throwaway_exception, &_throwaway_exception);
      return;
    }
    sidl_BaseException_deleteRef(_SIDLex, &_throwaway_exception);
    sidl_BaseInterface_deleteRef(*_ex, &_throwaway_exception);
    *_ex = NULL;
    if(_ex3) { 
      sidl_BaseInterface_deleteRef(_ex3, &_throwaway_exception);
      _ex3 = NULL;
    }
  } else if(_ex3) {
    _SIDLex = sidl_BaseException__cast(_ex3,&_throwaway_exception);
    sidl_rmi_Return_throwException(outArgs, _SIDLex, &_throwaway_exception); 
    if(_throwaway_exception) {
      /* Throwing failed throw _ex3 up the stack then. */
      sidl_BaseInterface_deleteRef(_throwaway_exception, &_throwaway_exception);
      return;
    }
    sidl_BaseException_deleteRef(_SIDLex, &_throwaway_exception);
    sidl_BaseInterface_deleteRef(_ex3, &_throwaway_exception);
    _ex3 = NULL;
  }
}

static void
edu_csdms_models_HydroTrend_getRaster_nx__exec(
        struct edu_csdms_models_HydroTrend__object* self,
        struct sidl_rmi_Call__object* inArgs,
        struct sidl_rmi_Return__object* outArgs,
        struct sidl_BaseInterface__object ** _ex) {
  /* stack space for arguments */
  int64_t _retval = 0;
  sidl_BaseInterface _throwaway_exception = NULL;
  sidl_BaseInterface _ex3   = NULL;
  sidl_BaseException _SIDLex = NULL;
  /* unpack in and inout argments */

  /* make the call */
  _retval = (self->d_epv->f_getRaster_nx)(
    self,
    _ex);  SIDL_CHECK(*_ex);

  /* pack return value */
  sidl_rmi_Return_packLong( outArgs, "_retval", _retval, _ex);SIDL_CHECK(*_ex);
  /* pack out and inout argments */
  EXIT:
  /* clean-up dangling references */
  if(*_ex) { 
    _SIDLex = sidl_BaseException__cast(*_ex,&_throwaway_exception);
    sidl_rmi_Return_throwException(outArgs, _SIDLex, &_throwaway_exception); 
    if(_throwaway_exception) {
      /* Throwing failed, throw _ex up the stack then. */
      sidl_BaseInterface_deleteRef(_throwaway_exception, &_throwaway_exception);
      return;
    }
    sidl_BaseException_deleteRef(_SIDLex, &_throwaway_exception);
    sidl_BaseInterface_deleteRef(*_ex, &_throwaway_exception);
    *_ex = NULL;
    if(_ex3) { 
      sidl_BaseInterface_deleteRef(_ex3, &_throwaway_exception);
      _ex3 = NULL;
    }
  } else if(_ex3) {
    _SIDLex = sidl_BaseException__cast(_ex3,&_throwaway_exception);
    sidl_rmi_Return_throwException(outArgs, _SIDLex, &_throwaway_exception); 
    if(_throwaway_exception) {
      /* Throwing failed throw _ex3 up the stack then. */
      sidl_BaseInterface_deleteRef(_throwaway_exception, &_throwaway_exception);
      return;
    }
    sidl_BaseException_deleteRef(_SIDLex, &_throwaway_exception);
    sidl_BaseInterface_deleteRef(_ex3, &_throwaway_exception);
    _ex3 = NULL;
  }
}

static void
edu_csdms_models_HydroTrend_getRaster_ny__exec(
        struct edu_csdms_models_HydroTrend__object* self,
        struct sidl_rmi_Call__object* inArgs,
        struct sidl_rmi_Return__object* outArgs,
        struct sidl_BaseInterface__object ** _ex) {
  /* stack space for arguments */
  int64_t _retval = 0;
  sidl_BaseInterface _throwaway_exception = NULL;
  sidl_BaseInterface _ex3   = NULL;
  sidl_BaseException _SIDLex = NULL;
  /* unpack in and inout argments */

  /* make the call */
  _retval = (self->d_epv->f_getRaster_ny)(
    self,
    _ex);  SIDL_CHECK(*_ex);

  /* pack return value */
  sidl_rmi_Return_packLong( outArgs, "_retval", _retval, _ex);SIDL_CHECK(*_ex);
  /* pack out and inout argments */
  EXIT:
  /* clean-up dangling references */
  if(*_ex) { 
    _SIDLex = sidl_BaseException__cast(*_ex,&_throwaway_exception);
    sidl_rmi_Return_throwException(outArgs, _SIDLex, &_throwaway_exception); 
    if(_throwaway_exception) {
      /* Throwing failed, throw _ex up the stack then. */
      sidl_BaseInterface_deleteRef(_throwaway_exception, &_throwaway_exception);
      return;
    }
    sidl_BaseException_deleteRef(_SIDLex, &_throwaway_exception);
    sidl_BaseInterface_deleteRef(*_ex, &_throwaway_exception);
    *_ex = NULL;
    if(_ex3) { 
      sidl_BaseInterface_deleteRef(_ex3, &_throwaway_exception);
      _ex3 = NULL;
    }
  } else if(_ex3) {
    _SIDLex = sidl_BaseException__cast(_ex3,&_throwaway_exception);
    sidl_rmi_Return_throwException(outArgs, _SIDLex, &_throwaway_exception); 
    if(_throwaway_exception) {
      /* Throwing failed throw _ex3 up the stack then. */
      sidl_BaseInterface_deleteRef(_throwaway_exception, &_throwaway_exception);
      return;
    }
    sidl_BaseException_deleteRef(_SIDLex, &_throwaway_exception);
    sidl_BaseInterface_deleteRef(_ex3, &_throwaway_exception);
    _ex3 = NULL;
  }
}

static void
edu_csdms_models_HydroTrend_getRaster_dx__exec(
        struct edu_csdms_models_HydroTrend__object* self,
        struct sidl_rmi_Call__object* inArgs,
        struct sidl_rmi_Return__object* outArgs,
        struct sidl_BaseInterface__object ** _ex) {
  /* stack space for arguments */
  double _retval = 0;
  sidl_BaseInterface _throwaway_exception = NULL;
  sidl_BaseInterface _ex3   = NULL;
  sidl_BaseException _SIDLex = NULL;
  /* unpack in and inout argments */

  /* make the call */
  _retval = (self->d_epv->f_getRaster_dx)(
    self,
    _ex);  SIDL_CHECK(*_ex);

  /* pack return value */
  sidl_rmi_Return_packDouble( outArgs, "_retval", _retval, _ex);SIDL_CHECK(
    *_ex);
  /* pack out and inout argments */
  EXIT:
  /* clean-up dangling references */
  if(*_ex) { 
    _SIDLex = sidl_BaseException__cast(*_ex,&_throwaway_exception);
    sidl_rmi_Return_throwException(outArgs, _SIDLex, &_throwaway_exception); 
    if(_throwaway_exception) {
      /* Throwing failed, throw _ex up the stack then. */
      sidl_BaseInterface_deleteRef(_throwaway_exception, &_throwaway_exception);
      return;
    }
    sidl_BaseException_deleteRef(_SIDLex, &_throwaway_exception);
    sidl_BaseInterface_deleteRef(*_ex, &_throwaway_exception);
    *_ex = NULL;
    if(_ex3) { 
      sidl_BaseInterface_deleteRef(_ex3, &_throwaway_exception);
      _ex3 = NULL;
    }
  } else if(_ex3) {
    _SIDLex = sidl_BaseException__cast(_ex3,&_throwaway_exception);
    sidl_rmi_Return_throwException(outArgs, _SIDLex, &_throwaway_exception); 
    if(_throwaway_exception) {
      /* Throwing failed throw _ex3 up the stack then. */
      sidl_BaseInterface_deleteRef(_throwaway_exception, &_throwaway_exception);
      return;
    }
    sidl_BaseException_deleteRef(_SIDLex, &_throwaway_exception);
    sidl_BaseInterface_deleteRef(_ex3, &_throwaway_exception);
    _ex3 = NULL;
  }
}

static void
edu_csdms_models_HydroTrend_getRaster_dy__exec(
        struct edu_csdms_models_HydroTrend__object* self,
        struct sidl_rmi_Call__object* inArgs,
        struct sidl_rmi_Return__object* outArgs,
        struct sidl_BaseInterface__object ** _ex) {
  /* stack space for arguments */
  double _retval = 0;
  sidl_BaseInterface _throwaway_exception = NULL;
  sidl_BaseInterface _ex3   = NULL;
  sidl_BaseException _SIDLex = NULL;
  /* unpack in and inout argments */

  /* make the call */
  _retval = (self->d_epv->f_getRaster_dy)(
    self,
    _ex);  SIDL_CHECK(*_ex);

  /* pack return value */
  sidl_rmi_Return_packDouble( outArgs, "_retval", _retval, _ex);SIDL_CHECK(
    *_ex);
  /* pack out and inout argments */
  EXIT:
  /* clean-up dangling references */
  if(*_ex) { 
    _SIDLex = sidl_BaseException__cast(*_ex,&_throwaway_exception);
    sidl_rmi_Return_throwException(outArgs, _SIDLex, &_throwaway_exception); 
    if(_throwaway_exception) {
      /* Throwing failed, throw _ex up the stack then. */
      sidl_BaseInterface_deleteRef(_throwaway_exception, &_throwaway_exception);
      return;
    }
    sidl_BaseException_deleteRef(_SIDLex, &_throwaway_exception);
    sidl_BaseInterface_deleteRef(*_ex, &_throwaway_exception);
    *_ex = NULL;
    if(_ex3) { 
      sidl_BaseInterface_deleteRef(_ex3, &_throwaway_exception);
      _ex3 = NULL;
    }
  } else if(_ex3) {
    _SIDLex = sidl_BaseException__cast(_ex3,&_throwaway_exception);
    sidl_rmi_Return_throwException(outArgs, _SIDLex, &_throwaway_exception); 
    if(_throwaway_exception) {
      /* Throwing failed throw _ex3 up the stack then. */
      sidl_BaseInterface_deleteRef(_throwaway_exception, &_throwaway_exception);
      return;
    }
    sidl_BaseException_deleteRef(_SIDLex, &_throwaway_exception);
    sidl_BaseInterface_deleteRef(_ex3, &_throwaway_exception);
    _ex3 = NULL;
  }
}

static void
edu_csdms_models_HydroTrend_getRaster_ulx__exec(
        struct edu_csdms_models_HydroTrend__object* self,
        struct sidl_rmi_Call__object* inArgs,
        struct sidl_rmi_Return__object* outArgs,
        struct sidl_BaseInterface__object ** _ex) {
  /* stack space for arguments */
  double _retval = 0;
  sidl_BaseInterface _throwaway_exception = NULL;
  sidl_BaseInterface _ex3   = NULL;
  sidl_BaseException _SIDLex = NULL;
  /* unpack in and inout argments */

  /* make the call */
  _retval = (self->d_epv->f_getRaster_ulx)(
    self,
    _ex);  SIDL_CHECK(*_ex);

  /* pack return value */
  sidl_rmi_Return_packDouble( outArgs, "_retval", _retval, _ex);SIDL_CHECK(
    *_ex);
  /* pack out and inout argments */
  EXIT:
  /* clean-up dangling references */
  if(*_ex) { 
    _SIDLex = sidl_BaseException__cast(*_ex,&_throwaway_exception);
    sidl_rmi_Return_throwException(outArgs, _SIDLex, &_throwaway_exception); 
    if(_throwaway_exception) {
      /* Throwing failed, throw _ex up the stack then. */
      sidl_BaseInterface_deleteRef(_throwaway_exception, &_throwaway_exception);
      return;
    }
    sidl_BaseException_deleteRef(_SIDLex, &_throwaway_exception);
    sidl_BaseInterface_deleteRef(*_ex, &_throwaway_exception);
    *_ex = NULL;
    if(_ex3) { 
      sidl_BaseInterface_deleteRef(_ex3, &_throwaway_exception);
      _ex3 = NULL;
    }
  } else if(_ex3) {
    _SIDLex = sidl_BaseException__cast(_ex3,&_throwaway_exception);
    sidl_rmi_Return_throwException(outArgs, _SIDLex, &_throwaway_exception); 
    if(_throwaway_exception) {
      /* Throwing failed throw _ex3 up the stack then. */
      sidl_BaseInterface_deleteRef(_throwaway_exception, &_throwaway_exception);
      return;
    }
    sidl_BaseException_deleteRef(_SIDLex, &_throwaway_exception);
    sidl_BaseInterface_deleteRef(_ex3, &_throwaway_exception);
    _ex3 = NULL;
  }
}

static void
edu_csdms_models_HydroTrend_getRaster_uly__exec(
        struct edu_csdms_models_HydroTrend__object* self,
        struct sidl_rmi_Call__object* inArgs,
        struct sidl_rmi_Return__object* outArgs,
        struct sidl_BaseInterface__object ** _ex) {
  /* stack space for arguments */
  double _retval = 0;
  sidl_BaseInterface _throwaway_exception = NULL;
  sidl_BaseInterface _ex3   = NULL;
  sidl_BaseException _SIDLex = NULL;
  /* unpack in and inout argments */

  /* make the call */
  _retval = (self->d_epv->f_getRaster_uly)(
    self,
    _ex);  SIDL_CHECK(*_ex);

  /* pack return value */
  sidl_rmi_Return_packDouble( outArgs, "_retval", _retval, _ex);SIDL_CHECK(
    *_ex);
  /* pack out and inout argments */
  EXIT:
  /* clean-up dangling references */
  if(*_ex) { 
    _SIDLex = sidl_BaseException__cast(*_ex,&_throwaway_exception);
    sidl_rmi_Return_throwException(outArgs, _SIDLex, &_throwaway_exception); 
    if(_throwaway_exception) {
      /* Throwing failed, throw _ex up the stack then. */
      sidl_BaseInterface_deleteRef(_throwaway_exception, &_throwaway_exception);
      return;
    }
    sidl_BaseException_deleteRef(_SIDLex, &_throwaway_exception);
    sidl_BaseInterface_deleteRef(*_ex, &_throwaway_exception);
    *_ex = NULL;
    if(_ex3) { 
      sidl_BaseInterface_deleteRef(_ex3, &_throwaway_exception);
      _ex3 = NULL;
    }
  } else if(_ex3) {
    _SIDLex = sidl_BaseException__cast(_ex3,&_throwaway_exception);
    sidl_rmi_Return_throwException(outArgs, _SIDLex, &_throwaway_exception); 
    if(_throwaway_exception) {
      /* Throwing failed throw _ex3 up the stack then. */
      sidl_BaseInterface_deleteRef(_throwaway_exception, &_throwaway_exception);
      return;
    }
    sidl_BaseException_deleteRef(_SIDLex, &_throwaway_exception);
    sidl_BaseInterface_deleteRef(_ex3, &_throwaway_exception);
    _ex3 = NULL;
  }
}

static void
edu_csdms_models_HydroTrend_getRaster_grid__exec(
        struct edu_csdms_models_HydroTrend__object* self,
        struct sidl_rmi_Call__object* inArgs,
        struct sidl_rmi_Return__object* outArgs,
        struct sidl_BaseInterface__object ** _ex) {
  /* stack space for arguments */
  char* val_string= NULL;
  struct sidl_double__array* _retval = 0;
  sidl_BaseInterface _throwaway_exception = NULL;
  sidl_BaseInterface _ex3   = NULL;
  sidl_BaseException _SIDLex = NULL;
  /* unpack in and inout argments */
  sidl_rmi_Call_unpackString( inArgs, "val_string", &val_string, 
    _ex);SIDL_CHECK(*_ex);

  /* make the call */
  _retval = (self->d_epv->f_getRaster_grid)(
    self,
    val_string,
    _ex);  SIDL_CHECK(*_ex);

  /* pack return value */
  sidl_rmi_Return_packDoubleArray( outArgs, "_retval",_retval,0,0,0, 
    _ex);SIDL_CHECK(*_ex);
  /* pack out and inout argments */
  EXIT:
  /* clean-up dangling references */
  sidl__array_deleteRef((struct sidl__array*)_retval);
  if(val_string) {free(val_string);}
  if(*_ex) { 
    _SIDLex = sidl_BaseException__cast(*_ex,&_throwaway_exception);
    sidl_rmi_Return_throwException(outArgs, _SIDLex, &_throwaway_exception); 
    if(_throwaway_exception) {
      /* Throwing failed, throw _ex up the stack then. */
      sidl_BaseInterface_deleteRef(_throwaway_exception, &_throwaway_exception);
      return;
    }
    sidl_BaseException_deleteRef(_SIDLex, &_throwaway_exception);
    sidl_BaseInterface_deleteRef(*_ex, &_throwaway_exception);
    *_ex = NULL;
    if(_ex3) { 
      sidl_BaseInterface_deleteRef(_ex3, &_throwaway_exception);
      _ex3 = NULL;
    }
  } else if(_ex3) {
    _SIDLex = sidl_BaseException__cast(_ex3,&_throwaway_exception);
    sidl_rmi_Return_throwException(outArgs, _SIDLex, &_throwaway_exception); 
    if(_throwaway_exception) {
      /* Throwing failed throw _ex3 up the stack then. */
      sidl_BaseInterface_deleteRef(_throwaway_exception, &_throwaway_exception);
      return;
    }
    sidl_BaseException_deleteRef(_SIDLex, &_throwaway_exception);
    sidl_BaseInterface_deleteRef(_ex3, &_throwaway_exception);
    _ex3 = NULL;
  }
}

static void
edu_csdms_models_HydroTrend_get_raster_dimen__exec(
        struct edu_csdms_models_HydroTrend__object* self,
        struct sidl_rmi_Call__object* inArgs,
        struct sidl_rmi_Return__object* outArgs,
        struct sidl_BaseInterface__object ** _ex) {
  /* stack space for arguments */
  char* val_string= NULL;
  struct sidl_int__array* _retval = 0;
  sidl_BaseInterface _throwaway_exception = NULL;
  sidl_BaseInterface _ex3   = NULL;
  sidl_BaseException _SIDLex = NULL;
  /* unpack in and inout argments */
  sidl_rmi_Call_unpackString( inArgs, "val_string", &val_string, 
    _ex);SIDL_CHECK(*_ex);

  /* make the call */
  _retval = (self->d_epv->f_get_raster_dimen)(
    self,
    val_string,
    _ex);  SIDL_CHECK(*_ex);

  /* pack return value */
  sidl_rmi_Return_packIntArray( outArgs, "_retval",_retval,0,0,0, 
    _ex);SIDL_CHECK(*_ex);
  /* pack out and inout argments */
  EXIT:
  /* clean-up dangling references */
  sidl__array_deleteRef((struct sidl__array*)_retval);
  if(val_string) {free(val_string);}
  if(*_ex) { 
    _SIDLex = sidl_BaseException__cast(*_ex,&_throwaway_exception);
    sidl_rmi_Return_throwException(outArgs, _SIDLex, &_throwaway_exception); 
    if(_throwaway_exception) {
      /* Throwing failed, throw _ex up the stack then. */
      sidl_BaseInterface_deleteRef(_throwaway_exception, &_throwaway_exception);
      return;
    }
    sidl_BaseException_deleteRef(_SIDLex, &_throwaway_exception);
    sidl_BaseInterface_deleteRef(*_ex, &_throwaway_exception);
    *_ex = NULL;
    if(_ex3) { 
      sidl_BaseInterface_deleteRef(_ex3, &_throwaway_exception);
      _ex3 = NULL;
    }
  } else if(_ex3) {
    _SIDLex = sidl_BaseException__cast(_ex3,&_throwaway_exception);
    sidl_rmi_Return_throwException(outArgs, _SIDLex, &_throwaway_exception); 
    if(_throwaway_exception) {
      /* Throwing failed throw _ex3 up the stack then. */
      sidl_BaseInterface_deleteRef(_throwaway_exception, &_throwaway_exception);
      return;
    }
    sidl_BaseException_deleteRef(_SIDLex, &_throwaway_exception);
    sidl_BaseInterface_deleteRef(_ex3, &_throwaway_exception);
    _ex3 = NULL;
  }
}

static void
edu_csdms_models_HydroTrend_get_raster_res__exec(
        struct edu_csdms_models_HydroTrend__object* self,
        struct sidl_rmi_Call__object* inArgs,
        struct sidl_rmi_Return__object* outArgs,
        struct sidl_BaseInterface__object ** _ex) {
  /* stack space for arguments */
  char* val_string= NULL;
  struct sidl_double__array* _retval = 0;
  sidl_BaseInterface _throwaway_exception = NULL;
  sidl_BaseInterface _ex3   = NULL;
  sidl_BaseException _SIDLex = NULL;
  /* unpack in and inout argments */
  sidl_rmi_Call_unpackString( inArgs, "val_string", &val_string, 
    _ex);SIDL_CHECK(*_ex);

  /* make the call */
  _retval = (self->d_epv->f_get_raster_res)(
    self,
    val_string,
    _ex);  SIDL_CHECK(*_ex);

  /* pack return value */
  sidl_rmi_Return_packDoubleArray( outArgs, "_retval",_retval,0,0,0, 
    _ex);SIDL_CHECK(*_ex);
  /* pack out and inout argments */
  EXIT:
  /* clean-up dangling references */
  sidl__array_deleteRef((struct sidl__array*)_retval);
  if(val_string) {free(val_string);}
  if(*_ex) { 
    _SIDLex = sidl_BaseException__cast(*_ex,&_throwaway_exception);
    sidl_rmi_Return_throwException(outArgs, _SIDLex, &_throwaway_exception); 
    if(_throwaway_exception) {
      /* Throwing failed, throw _ex up the stack then. */
      sidl_BaseInterface_deleteRef(_throwaway_exception, &_throwaway_exception);
      return;
    }
    sidl_BaseException_deleteRef(_SIDLex, &_throwaway_exception);
    sidl_BaseInterface_deleteRef(*_ex, &_throwaway_exception);
    *_ex = NULL;
    if(_ex3) { 
      sidl_BaseInterface_deleteRef(_ex3, &_throwaway_exception);
      _ex3 = NULL;
    }
  } else if(_ex3) {
    _SIDLex = sidl_BaseException__cast(_ex3,&_throwaway_exception);
    sidl_rmi_Return_throwException(outArgs, _SIDLex, &_throwaway_exception); 
    if(_throwaway_exception) {
      /* Throwing failed throw _ex3 up the stack then. */
      sidl_BaseInterface_deleteRef(_throwaway_exception, &_throwaway_exception);
      return;
    }
    sidl_BaseException_deleteRef(_SIDLex, &_throwaway_exception);
    sidl_BaseInterface_deleteRef(_ex3, &_throwaway_exception);
    _ex3 = NULL;
  }
}

static void
edu_csdms_models_HydroTrend_get_raster_data__exec(
        struct edu_csdms_models_HydroTrend__object* self,
        struct sidl_rmi_Call__object* inArgs,
        struct sidl_rmi_Return__object* outArgs,
        struct sidl_BaseInterface__object ** _ex) {
  /* stack space for arguments */
  char* val_string= NULL;
  struct sidl__array* _retval = 0;
  sidl_BaseInterface _throwaway_exception = NULL;
  sidl_BaseInterface _ex3   = NULL;
  sidl_BaseException _SIDLex = NULL;
  /* unpack in and inout argments */
  sidl_rmi_Call_unpackString( inArgs, "val_string", &val_string, 
    _ex);SIDL_CHECK(*_ex);

  /* make the call */
  _retval = (self->d_epv->f_get_raster_data)(
    self,
    val_string,
    _ex);  SIDL_CHECK(*_ex);

  /* pack return value */
  sidl_rmi_Return_packGenericArray( outArgs, "_retval",_retval,0, 
    _ex);SIDL_CHECK(*_ex);
  /* pack out and inout argments */
  EXIT:
  /* clean-up dangling references */
  sidl__array_deleteRef((struct sidl__array*)_retval);
  if(val_string) {free(val_string);}
  if(*_ex) { 
    _SIDLex = sidl_BaseException__cast(*_ex,&_throwaway_exception);
    sidl_rmi_Return_throwException(outArgs, _SIDLex, &_throwaway_exception); 
    if(_throwaway_exception) {
      /* Throwing failed, throw _ex up the stack then. */
      sidl_BaseInterface_deleteRef(_throwaway_exception, &_throwaway_exception);
      return;
    }
    sidl_BaseException_deleteRef(_SIDLex, &_throwaway_exception);
    sidl_BaseInterface_deleteRef(*_ex, &_throwaway_exception);
    *_ex = NULL;
    if(_ex3) { 
      sidl_BaseInterface_deleteRef(_ex3, &_throwaway_exception);
      _ex3 = NULL;
    }
  } else if(_ex3) {
    _SIDLex = sidl_BaseException__cast(_ex3,&_throwaway_exception);
    sidl_rmi_Return_throwException(outArgs, _SIDLex, &_throwaway_exception); 
    if(_throwaway_exception) {
      /* Throwing failed throw _ex3 up the stack then. */
      sidl_BaseInterface_deleteRef(_throwaway_exception, &_throwaway_exception);
      return;
    }
    sidl_BaseException_deleteRef(_SIDLex, &_throwaway_exception);
    sidl_BaseInterface_deleteRef(_ex3, &_throwaway_exception);
    _ex3 = NULL;
  }
}

static void
edu_csdms_models_HydroTrend_get_time_span__exec(
        struct edu_csdms_models_HydroTrend__object* self,
        struct sidl_rmi_Call__object* inArgs,
        struct sidl_rmi_Return__object* outArgs,
        struct sidl_BaseInterface__object ** _ex) {
  /* stack space for arguments */
  struct sidl_double__array* _retval = 0;
  sidl_BaseInterface _throwaway_exception = NULL;
  sidl_BaseInterface _ex3   = NULL;
  sidl_BaseException _SIDLex = NULL;
  /* unpack in and inout argments */

  /* make the call */
  _retval = (self->d_epv->f_get_time_span)(
    self,
    _ex);  SIDL_CHECK(*_ex);

  /* pack return value */
  sidl_rmi_Return_packDoubleArray( outArgs, "_retval",_retval,0,0,0, 
    _ex);SIDL_CHECK(*_ex);
  /* pack out and inout argments */
  EXIT:
  /* clean-up dangling references */
  sidl__array_deleteRef((struct sidl__array*)_retval);
  if(*_ex) { 
    _SIDLex = sidl_BaseException__cast(*_ex,&_throwaway_exception);
    sidl_rmi_Return_throwException(outArgs, _SIDLex, &_throwaway_exception); 
    if(_throwaway_exception) {
      /* Throwing failed, throw _ex up the stack then. */
      sidl_BaseInterface_deleteRef(_throwaway_exception, &_throwaway_exception);
      return;
    }
    sidl_BaseException_deleteRef(_SIDLex, &_throwaway_exception);
    sidl_BaseInterface_deleteRef(*_ex, &_throwaway_exception);
    *_ex = NULL;
    if(_ex3) { 
      sidl_BaseInterface_deleteRef(_ex3, &_throwaway_exception);
      _ex3 = NULL;
    }
  } else if(_ex3) {
    _SIDLex = sidl_BaseException__cast(_ex3,&_throwaway_exception);
    sidl_rmi_Return_throwException(outArgs, _SIDLex, &_throwaway_exception); 
    if(_throwaway_exception) {
      /* Throwing failed throw _ex3 up the stack then. */
      sidl_BaseInterface_deleteRef(_throwaway_exception, &_throwaway_exception);
      return;
    }
    sidl_BaseException_deleteRef(_SIDLex, &_throwaway_exception);
    sidl_BaseInterface_deleteRef(_ex3, &_throwaway_exception);
    _ex3 = NULL;
  }
}

static void
edu_csdms_models_HydroTrend_get_element_set__exec(
        struct edu_csdms_models_HydroTrend__object* self,
        struct sidl_rmi_Call__object* inArgs,
        struct sidl_rmi_Return__object* outArgs,
        struct sidl_BaseInterface__object ** _ex) {
  /* stack space for arguments */
  char* val_string= NULL;
  struct edu_csdms_openmi_IElementSet__object* _retval = NULL;
  sidl_BaseInterface _throwaway_exception = NULL;
  sidl_BaseInterface _ex3   = NULL;
  sidl_BaseException _SIDLex = NULL;
  /* unpack in and inout argments */
  sidl_rmi_Call_unpackString( inArgs, "val_string", &val_string, 
    _ex);SIDL_CHECK(*_ex);

  /* make the call */
  _retval = (self->d_epv->f_get_element_set)(
    self,
    val_string,
    _ex);  SIDL_CHECK(*_ex);

  /* pack return value */
  if(_retval){
    char* _url = sidl_BaseInterface__getURL((sidl_BaseInterface)_retval, 
      _ex);SIDL_CHECK(*_ex);
    sidl_rmi_Return_packString( outArgs, "_retval", _url, _ex);SIDL_CHECK(*_ex);
    free((void*)_url);
  } else {
    sidl_rmi_Return_packString( outArgs, "_retval", NULL, _ex);SIDL_CHECK(*_ex);
  }
  /* pack out and inout argments */
  EXIT:
  /* clean-up dangling references */
  if(_retval && sidl_BaseInterface__isRemote((sidl_BaseInterface)_retval, 
    &_throwaway_exception)) {
    (*((sidl_BaseInterface)_retval)->d_epv->f__raddRef)(((
      sidl_BaseInterface)_retval)->d_object, &_ex3); EXEC_CHECK(_ex3);
    sidl_BaseInterface_deleteRef((sidl_BaseInterface)_retval, &_ex3); 
      EXEC_CHECK(_ex3);
  }
  if(val_string) {free(val_string);}
  EXEC_ERR:
  if(*_ex) { 
    _SIDLex = sidl_BaseException__cast(*_ex,&_throwaway_exception);
    sidl_rmi_Return_throwException(outArgs, _SIDLex, &_throwaway_exception); 
    if(_throwaway_exception) {
      /* Throwing failed, throw _ex up the stack then. */
      sidl_BaseInterface_deleteRef(_throwaway_exception, &_throwaway_exception);
      return;
    }
    sidl_BaseException_deleteRef(_SIDLex, &_throwaway_exception);
    sidl_BaseInterface_deleteRef(*_ex, &_throwaway_exception);
    *_ex = NULL;
    if(_ex3) { 
      sidl_BaseInterface_deleteRef(_ex3, &_throwaway_exception);
      _ex3 = NULL;
    }
  } else if(_ex3) {
    _SIDLex = sidl_BaseException__cast(_ex3,&_throwaway_exception);
    sidl_rmi_Return_throwException(outArgs, _SIDLex, &_throwaway_exception); 
    if(_throwaway_exception) {
      /* Throwing failed throw _ex3 up the stack then. */
      sidl_BaseInterface_deleteRef(_throwaway_exception, &_throwaway_exception);
      return;
    }
    sidl_BaseException_deleteRef(_SIDLex, &_throwaway_exception);
    sidl_BaseInterface_deleteRef(_ex3, &_throwaway_exception);
    _ex3 = NULL;
  }
}

static void
edu_csdms_models_HydroTrend_get_value_set__exec(
        struct edu_csdms_models_HydroTrend__object* self,
        struct sidl_rmi_Call__object* inArgs,
        struct sidl_rmi_Return__object* outArgs,
        struct sidl_BaseInterface__object ** _ex) {
  /* stack space for arguments */
  char* val_string= NULL;
  struct edu_csdms_openmi_IValueSet__object* _retval = NULL;
  sidl_BaseInterface _throwaway_exception = NULL;
  sidl_BaseInterface _ex3   = NULL;
  sidl_BaseException _SIDLex = NULL;
  /* unpack in and inout argments */
  sidl_rmi_Call_unpackString( inArgs, "val_string", &val_string, 
    _ex);SIDL_CHECK(*_ex);

  /* make the call */
  _retval = (self->d_epv->f_get_value_set)(
    self,
    val_string,
    _ex);  SIDL_CHECK(*_ex);

  /* pack return value */
  if(_retval){
    char* _url = sidl_BaseInterface__getURL((sidl_BaseInterface)_retval, 
      _ex);SIDL_CHECK(*_ex);
    sidl_rmi_Return_packString( outArgs, "_retval", _url, _ex);SIDL_CHECK(*_ex);
    free((void*)_url);
  } else {
    sidl_rmi_Return_packString( outArgs, "_retval", NULL, _ex);SIDL_CHECK(*_ex);
  }
  /* pack out and inout argments */
  EXIT:
  /* clean-up dangling references */
  if(_retval && sidl_BaseInterface__isRemote((sidl_BaseInterface)_retval, 
    &_throwaway_exception)) {
    (*((sidl_BaseInterface)_retval)->d_epv->f__raddRef)(((
      sidl_BaseInterface)_retval)->d_object, &_ex3); EXEC_CHECK(_ex3);
    sidl_BaseInterface_deleteRef((sidl_BaseInterface)_retval, &_ex3); 
      EXEC_CHECK(_ex3);
  }
  if(val_string) {free(val_string);}
  EXEC_ERR:
  if(*_ex) { 
    _SIDLex = sidl_BaseException__cast(*_ex,&_throwaway_exception);
    sidl_rmi_Return_throwException(outArgs, _SIDLex, &_throwaway_exception); 
    if(_throwaway_exception) {
      /* Throwing failed, throw _ex up the stack then. */
      sidl_BaseInterface_deleteRef(_throwaway_exception, &_throwaway_exception);
      return;
    }
    sidl_BaseException_deleteRef(_SIDLex, &_throwaway_exception);
    sidl_BaseInterface_deleteRef(*_ex, &_throwaway_exception);
    *_ex = NULL;
    if(_ex3) { 
      sidl_BaseInterface_deleteRef(_ex3, &_throwaway_exception);
      _ex3 = NULL;
    }
  } else if(_ex3) {
    _SIDLex = sidl_BaseException__cast(_ex3,&_throwaway_exception);
    sidl_rmi_Return_throwException(outArgs, _SIDLex, &_throwaway_exception); 
    if(_throwaway_exception) {
      /* Throwing failed throw _ex3 up the stack then. */
      sidl_BaseInterface_deleteRef(_throwaway_exception, &_throwaway_exception);
      return;
    }
    sidl_BaseException_deleteRef(_SIDLex, &_throwaway_exception);
    sidl_BaseInterface_deleteRef(_ex3, &_throwaway_exception);
    _ex3 = NULL;
  }
}

static void
edu_csdms_models_HydroTrend_get_value_set_data__exec(
        struct edu_csdms_models_HydroTrend__object* self,
        struct sidl_rmi_Call__object* inArgs,
        struct sidl_rmi_Return__object* outArgs,
        struct sidl_BaseInterface__object ** _ex) {
  /* stack space for arguments */
  char* val_string= NULL;
  struct sidl__array* _retval = 0;
  sidl_BaseInterface _throwaway_exception = NULL;
  sidl_BaseInterface _ex3   = NULL;
  sidl_BaseException _SIDLex = NULL;
  /* unpack in and inout argments */
  sidl_rmi_Call_unpackString( inArgs, "val_string", &val_string, 
    _ex);SIDL_CHECK(*_ex);

  /* make the call */
  _retval = (self->d_epv->f_get_value_set_data)(
    self,
    val_string,
    _ex);  SIDL_CHECK(*_ex);

  /* pack return value */
  sidl_rmi_Return_packGenericArray( outArgs, "_retval",_retval,0, 
    _ex);SIDL_CHECK(*_ex);
  /* pack out and inout argments */
  EXIT:
  /* clean-up dangling references */
  sidl__array_deleteRef((struct sidl__array*)_retval);
  if(val_string) {free(val_string);}
  if(*_ex) { 
    _SIDLex = sidl_BaseException__cast(*_ex,&_throwaway_exception);
    sidl_rmi_Return_throwException(outArgs, _SIDLex, &_throwaway_exception); 
    if(_throwaway_exception) {
      /* Throwing failed, throw _ex up the stack then. */
      sidl_BaseInterface_deleteRef(_throwaway_exception, &_throwaway_exception);
      return;
    }
    sidl_BaseException_deleteRef(_SIDLex, &_throwaway_exception);
    sidl_BaseInterface_deleteRef(*_ex, &_throwaway_exception);
    *_ex = NULL;
    if(_ex3) { 
      sidl_BaseInterface_deleteRef(_ex3, &_throwaway_exception);
      _ex3 = NULL;
    }
  } else if(_ex3) {
    _SIDLex = sidl_BaseException__cast(_ex3,&_throwaway_exception);
    sidl_rmi_Return_throwException(outArgs, _SIDLex, &_throwaway_exception); 
    if(_throwaway_exception) {
      /* Throwing failed throw _ex3 up the stack then. */
      sidl_BaseInterface_deleteRef(_throwaway_exception, &_throwaway_exception);
      return;
    }
    sidl_BaseException_deleteRef(_SIDLex, &_throwaway_exception);
    sidl_BaseInterface_deleteRef(_ex3, &_throwaway_exception);
    _ex3 = NULL;
  }
}

static void
edu_csdms_models_HydroTrend_set_value_set__exec(
        struct edu_csdms_models_HydroTrend__object* self,
        struct sidl_rmi_Call__object* inArgs,
        struct sidl_rmi_Return__object* outArgs,
        struct sidl_BaseInterface__object ** _ex) {
  /* stack space for arguments */
  char* val_string= NULL;
  char* values_str = NULL;
#ifndef WITH_RMI
  sidl_BaseClass values_bc = NULL;
#endif /* WITH_RMI */
  struct edu_csdms_openmi_IValueSet__object* values = NULL;
  sidl_BaseInterface _throwaway_exception = NULL;
  sidl_BaseInterface _ex3   = NULL;
  sidl_BaseException _SIDLex = NULL;
  /* unpack in and inout argments */
  sidl_rmi_Call_unpackString( inArgs, "val_string", &val_string, 
    _ex);SIDL_CHECK(*_ex);
  sidl_rmi_Call_unpackString( inArgs, "values", &values_str, _ex);SIDL_CHECK(
    *_ex);
#ifdef WITH_RMI

  values = skel_edu_csdms_models_HydroTrend_fconnect_edu_csdms_openmi_IValueSet(
    values_str, TRUE, _ex);SIDL_CHECK(*_ex);
#else
  values_bc = sidl_rmi_InstanceRegistry_getInstanceByString(values_str, 
    _ex);SIDL_CHECK(*_ex);
  if(values_bc != NULL) {
    values= (struct edu_csdms_models_HydroTrend__object*) (
      *values_bc->d_epv->f__cast)(values_bc, "edu.csdms.models.HydroTrend", 
      _ex);
    if(values != NULL) {
      (((struct sidl_BaseInterface__object*)(values))->d_epv->f_deleteRef)(((
        struct sidl_BaseInterface__object*)values)->d_object, _ex); SIDL_CHECK(
        *_ex);
    } else {
      (*values_bc->d_epv->f_deleteRef)(values_bc, _ex);
    }
  }
#endif /* WITH_RMI */

  /* make the call */
  (self->d_epv->f_set_value_set)(
    self,
    val_string,
    values,
    _ex);  SIDL_CHECK(*_ex);

  /* pack return value */
  /* pack out and inout argments */
  EXIT:
  /* clean-up dangling references */
  if(val_string) {free(val_string);}
  if(values_str) {free(values_str);}
  if(values) {
    sidl_BaseInterface_deleteRef((sidl_BaseInterface)values, &_ex3); EXEC_CHECK(
      _ex3);
  }
  EXEC_ERR:
  if(*_ex) { 
    _SIDLex = sidl_BaseException__cast(*_ex,&_throwaway_exception);
    sidl_rmi_Return_throwException(outArgs, _SIDLex, &_throwaway_exception); 
    if(_throwaway_exception) {
      /* Throwing failed, throw _ex up the stack then. */
      sidl_BaseInterface_deleteRef(_throwaway_exception, &_throwaway_exception);
      return;
    }
    sidl_BaseException_deleteRef(_SIDLex, &_throwaway_exception);
    sidl_BaseInterface_deleteRef(*_ex, &_throwaway_exception);
    *_ex = NULL;
    if(_ex3) { 
      sidl_BaseInterface_deleteRef(_ex3, &_throwaway_exception);
      _ex3 = NULL;
    }
  } else if(_ex3) {
    _SIDLex = sidl_BaseException__cast(_ex3,&_throwaway_exception);
    sidl_rmi_Return_throwException(outArgs, _SIDLex, &_throwaway_exception); 
    if(_throwaway_exception) {
      /* Throwing failed throw _ex3 up the stack then. */
      sidl_BaseInterface_deleteRef(_throwaway_exception, &_throwaway_exception);
      return;
    }
    sidl_BaseException_deleteRef(_SIDLex, &_throwaway_exception);
    sidl_BaseInterface_deleteRef(_ex3, &_throwaway_exception);
    _ex3 = NULL;
  }
}

static void
edu_csdms_models_HydroTrend__cast__exec(
        struct edu_csdms_models_HydroTrend__object* self,
        struct sidl_rmi_Call__object* inArgs,
        struct sidl_rmi_Return__object* outArgs,
        struct sidl_BaseInterface__object ** _ex) {
  /* stack space for arguments */
  char* name= NULL;
  void* _retval = 0;
  sidl_BaseInterface _throwaway_exception = NULL;
  sidl_BaseInterface _ex3   = NULL;
  sidl_BaseException _SIDLex = NULL;
  /* unpack in and inout argments */
  sidl_rmi_Call_unpackString( inArgs, "name", &name, _ex);SIDL_CHECK(*_ex);

  /* make the call */
  _retval = (self->d_epv->f__cast)(
    self,
    name,
    _ex);  SIDL_CHECK(*_ex);

  /* pack return value */
  sidl_rmi_Return_packOpaque( outArgs, "_retval", _retval, _ex);SIDL_CHECK(
    *_ex);
  /* pack out and inout argments */
  EXIT:
  /* clean-up dangling references */
  if(name) {free(name);}
  if(*_ex) { 
    _SIDLex = sidl_BaseException__cast(*_ex,&_throwaway_exception);
    sidl_rmi_Return_throwException(outArgs, _SIDLex, &_throwaway_exception); 
    if(_throwaway_exception) {
      /* Throwing failed, throw _ex up the stack then. */
      sidl_BaseInterface_deleteRef(_throwaway_exception, &_throwaway_exception);
      return;
    }
    sidl_BaseException_deleteRef(_SIDLex, &_throwaway_exception);
    sidl_BaseInterface_deleteRef(*_ex, &_throwaway_exception);
    *_ex = NULL;
    if(_ex3) { 
      sidl_BaseInterface_deleteRef(_ex3, &_throwaway_exception);
      _ex3 = NULL;
    }
  } else if(_ex3) {
    _SIDLex = sidl_BaseException__cast(_ex3,&_throwaway_exception);
    sidl_rmi_Return_throwException(outArgs, _SIDLex, &_throwaway_exception); 
    if(_throwaway_exception) {
      /* Throwing failed throw _ex3 up the stack then. */
      sidl_BaseInterface_deleteRef(_throwaway_exception, &_throwaway_exception);
      return;
    }
    sidl_BaseException_deleteRef(_SIDLex, &_throwaway_exception);
    sidl_BaseInterface_deleteRef(_ex3, &_throwaway_exception);
    _ex3 = NULL;
  }
}

/*
 * CHECKS: Enable/disable contract enforcement.
 */

static void ior_edu_csdms_models_HydroTrend__set_contracts(
  struct edu_csdms_models_HydroTrend__object* self,
  sidl_bool   enable,
  const char* enfFilename,
  sidl_bool   resetCounters,
  struct sidl_BaseInterface__object **_ex)
{
  *_ex  = NULL;
  {
    /*
     * Nothing to do since contract enforcement not needed.
     */

  }
}

/*
 * DUMP: Dump interface contract enforcement statistics.
 */

static void ior_edu_csdms_models_HydroTrend__dump_stats(
  struct edu_csdms_models_HydroTrend__object* self,
  const char* filename,
  const char* prefix,
  struct sidl_BaseInterface__object **_ex)
{
  *_ex = NULL;
  {
    /*
     * Nothing to do since contract checks not generated.
     */

  }
}

static void ior_edu_csdms_models_HydroTrend__ensure_load_called(void) {
  /*
   * assert( HAVE_LOCKED_STATIC_GLOBALS );
   */

  if (! s_load_called ) {
    s_load_called=1;
    edu_csdms_models_HydroTrend__call_load();
  }
}

/* CAST: dynamic type casting support. */
static void* ior_edu_csdms_models_HydroTrend__cast(
  struct edu_csdms_models_HydroTrend__object* self,
  const char* name, sidl_BaseInterface* _ex)
{
  int cmp;
  void* cast = NULL;
  *_ex = NULL; /* default to no exception */
  cmp = strcmp(name, "gov.cca.Port");
  if (!cmp) {
    (*self->d_epv->f_addRef)(self, _ex); SIDL_CHECK(*_ex);
    cast = &((*self).d_gov_cca_port);
    return cast;
  }
  else if (cmp < 0) {
    cmp = strcmp(name, "gov.cca.Component");
    if (!cmp) {
      (*self->d_epv->f_addRef)(self, _ex); SIDL_CHECK(*_ex);
      cast = &((*self).d_gov_cca_component);
      return cast;
    }
    else if (cmp < 0) {
      cmp = strcmp(name, "edu.csdms.ports.IRFPort");
      if (!cmp) {
        (*self->d_epv->f_addRef)(self, _ex); SIDL_CHECK(*_ex);
        cast = &((*self).d_edu_csdms_ports_irfport);
        return cast;
      }
      else if (cmp < 0) {
        cmp = strcmp(name, "edu.csdms.models.HydroTrend");
        if (!cmp) {
          (*self->d_epv->f_addRef)(self, _ex); SIDL_CHECK(*_ex);
          cast = ((struct edu_csdms_models_HydroTrend__object*)self);
          return cast;
        }
      }
    }
    else if (cmp > 0) {
      cmp = strcmp(name, "gov.cca.ComponentRelease");
      if (!cmp) {
        (*self->d_epv->f_addRef)(self, _ex); SIDL_CHECK(*_ex);
        cast = &((*self).d_gov_cca_componentrelease);
        return cast;
      }
    }
  }
  else if (cmp > 0) {
    cmp = strcmp(name, "sidl.BaseClass");
    if (!cmp) {
      (*self->d_epv->f_addRef)(self, _ex); SIDL_CHECK(*_ex);
      cast = ((struct sidl_BaseClass__object*)self);
      return cast;
    }
    else if (cmp < 0) {
      cmp = strcmp(name, "gov.cca.ports.GoPort");
      if (!cmp) {
        (*self->d_epv->f_addRef)(self, _ex); SIDL_CHECK(*_ex);
        cast = &((*self).d_gov_cca_ports_goport);
        return cast;
      }
    }
    else if (cmp > 0) {
      cmp = strcmp(name, "sidl.BaseInterface");
      if (!cmp) {
        (*self->d_epv->f_addRef)(self, _ex); SIDL_CHECK(*_ex);
        cast = &((*self).d_sidl_baseclass.d_sidl_baseinterface);
        return cast;
      }
    }
  }
  return cast;
  EXIT:
  return NULL;
}

/*
 * HOOKS: Enable/disable hooks.
 */

static void ior_edu_csdms_models_HydroTrend__set_hooks(
  struct edu_csdms_models_HydroTrend__object* self,
  sidl_bool enable, struct sidl_BaseInterface__object **_ex )
{
  *_ex  = NULL;
  /*
   * Nothing else to do since hook methods not generated.
   */

}

/*
 * DELETE: call destructor and free object memory.
 */

static void ior_edu_csdms_models_HydroTrend__delete(
  struct edu_csdms_models_HydroTrend__object* self, struct 
    sidl_BaseInterface__object **_ex)
{
  *_ex  = NULL; /* default to no exception */
  edu_csdms_models_HydroTrend__fini(self, _ex);
  memset((void*)self, 0, sizeof(struct edu_csdms_models_HydroTrend__object));
  free((void*) self);
}

static char*
ior_edu_csdms_models_HydroTrend__getURL(
  struct edu_csdms_models_HydroTrend__object* self,
  struct sidl_BaseInterface__object **_ex)
{
  char* ret  = NULL;
  char* objid = sidl_rmi_InstanceRegistry_getInstanceByClass((sidl_BaseClass)self, _ex); SIDL_CHECK(*_ex);
  if (!objid) {
    objid = sidl_rmi_InstanceRegistry_registerInstance((sidl_BaseClass)self, _ex); SIDL_CHECK(*_ex);
  }
#ifdef WITH_RMI

  ret = sidl_rmi_ServerRegistry_getServerURL(objid, _ex); SIDL_CHECK(*_ex);

#else

  ret = objid;

#endif /*WITH_RMI*/
  return ret;
  EXIT:
  return NULL;
}
static void
ior_edu_csdms_models_HydroTrend__raddRef(
    struct edu_csdms_models_HydroTrend__object* self, sidl_BaseInterface* _ex) {
  sidl_BaseInterface_addRef((sidl_BaseInterface)self, _ex);
}

static sidl_bool
ior_edu_csdms_models_HydroTrend__isRemote(
    struct edu_csdms_models_HydroTrend__object* self, sidl_BaseInterface* _ex) {
  *_ex  = NULL; /* default to no exception */
  return FALSE;
}

struct edu_csdms_models_HydroTrend__method {
  const char *d_name;
  void (*d_func)(struct edu_csdms_models_HydroTrend__object*,
    struct sidl_rmi_Call__object *,
    struct sidl_rmi_Return__object *,
    struct sidl_BaseInterface__object **);
};

static void
ior_edu_csdms_models_HydroTrend__exec(
  struct edu_csdms_models_HydroTrend__object* self,
  const char* methodName,
  struct sidl_rmi_Call__object* inArgs,
  struct sidl_rmi_Return__object* outArgs,
  struct sidl_BaseInterface__object **_ex )
{
  static const struct edu_csdms_models_HydroTrend__method  s_methods[] = {
    { "_cast", edu_csdms_models_HydroTrend__cast__exec },
    { "addRef", edu_csdms_models_HydroTrend_addRef__exec },
    { "boccaForceUsePortInclude", 
      edu_csdms_models_HydroTrend_boccaForceUsePortInclude__exec },
    { "boccaReleaseServices", 
      edu_csdms_models_HydroTrend_boccaReleaseServices__exec },
    { "boccaSetServices", edu_csdms_models_HydroTrend_boccaSetServices__exec },
    { "checkException", edu_csdms_models_HydroTrend_checkException__exec },
    { "deleteRef", edu_csdms_models_HydroTrend_deleteRef__exec },
    { "finalize", edu_csdms_models_HydroTrend_finalize__exec },
    { "getClassInfo", edu_csdms_models_HydroTrend_getClassInfo__exec },
    { "getRaster_dx", edu_csdms_models_HydroTrend_getRaster_dx__exec },
    { "getRaster_dy", edu_csdms_models_HydroTrend_getRaster_dy__exec },
    { "getRaster_grid", edu_csdms_models_HydroTrend_getRaster_grid__exec },
    { "getRaster_nx", edu_csdms_models_HydroTrend_getRaster_nx__exec },
    { "getRaster_ny", edu_csdms_models_HydroTrend_getRaster_ny__exec },
    { "getRaster_ulx", edu_csdms_models_HydroTrend_getRaster_ulx__exec },
    { "getRaster_uly", edu_csdms_models_HydroTrend_getRaster_uly__exec },
    { "get_element_set", edu_csdms_models_HydroTrend_get_element_set__exec },
    { "get_raster_data", edu_csdms_models_HydroTrend_get_raster_data__exec },
    { "get_raster_dimen", edu_csdms_models_HydroTrend_get_raster_dimen__exec },
    { "get_raster_res", edu_csdms_models_HydroTrend_get_raster_res__exec },
    { "get_time_span", edu_csdms_models_HydroTrend_get_time_span__exec },
    { "get_value_set", edu_csdms_models_HydroTrend_get_value_set__exec },
    { "get_value_set_data", 
      edu_csdms_models_HydroTrend_get_value_set_data__exec },
    { "go", edu_csdms_models_HydroTrend_go__exec },
    { "initialize", edu_csdms_models_HydroTrend_initialize__exec },
    { "isSame", edu_csdms_models_HydroTrend_isSame__exec },
    { "isType", edu_csdms_models_HydroTrend_isType__exec },
    { "releaseServices", edu_csdms_models_HydroTrend_releaseServices__exec },
    { "run", edu_csdms_models_HydroTrend_run__exec },
    { "setServices", edu_csdms_models_HydroTrend_setServices__exec },
    { "set_value_set", edu_csdms_models_HydroTrend_set_value_set__exec }
  };
  int i, cmp, l = 0;
  int u = sizeof(s_methods)/sizeof(struct edu_csdms_models_HydroTrend__method);
  *_ex  = NULL; /* default to no exception */

  if (methodName) {
    /* Use binary search to locate method */
    while (l < u) {
      i = (l + u) >> 1;
      if (!(cmp=strcmp(methodName, s_methods[i].d_name))) {
        (s_methods[i].d_func)(self, inArgs, outArgs, _ex); SIDL_CHECK(*_ex);
        return;
      }
      else if (cmp < 0) u = i;
      else l = i + 1;
    }
  }
  /* TODO: add code for method not found */
  SIDL_THROW(*_ex, sidl_PreViolation, "method name not found");
  EXIT:
  return;
}
/*
 * EPV: create method entry point vector (EPV) structure.
 */

static void edu_csdms_models_HydroTrend__init_epv(void)
{
/*
 * assert( HAVE_LOCKED_STATIC_GLOBALS );
 */

  struct edu_csdms_models_HydroTrend__epv*  epv  = &s_my_epv__edu_csdms_models_hydrotrend;
  struct edu_csdms_ports_IRFPort__epv*      e0   = &s_my_epv__edu_csdms_ports_irfport;
  struct gov_cca_Component__epv*            e1   = &s_my_epv__gov_cca_component;
  struct gov_cca_ComponentRelease__epv*     e2   = &s_my_epv__gov_cca_componentrelease;
  struct gov_cca_Port__epv*                 e3   = &s_my_epv__gov_cca_port;
  struct gov_cca_ports_GoPort__epv*         e4   = &s_my_epv__gov_cca_ports_goport;
  struct sidl_BaseClass__epv*               e5   = &s_my_epv__sidl_baseclass;
  struct sidl_BaseInterface__epv*           e6   = &s_my_epv__sidl_baseinterface;

  struct sidl_BaseClass__epv*              s1 = NULL;

  /*
   * Get my parent's EPVs so I can start with their functions.
   */

  sidl_BaseClass__getEPVs(
    &s_par_epv__sidl_baseinterface,
    &s_par_epv__sidl_baseclass);


  /*
   * Alias the static epvs to some handy small names.
   */

  s1  =  s_par_epv__sidl_baseclass;

  epv->f__cast                    = ior_edu_csdms_models_HydroTrend__cast;
  epv->f__delete                  = ior_edu_csdms_models_HydroTrend__delete;
  epv->f__exec                    = ior_edu_csdms_models_HydroTrend__exec;
  epv->f__getURL                  = ior_edu_csdms_models_HydroTrend__getURL;
  epv->f__raddRef                 = ior_edu_csdms_models_HydroTrend__raddRef;
  epv->f__isRemote                = ior_edu_csdms_models_HydroTrend__isRemote;
  epv->f__set_hooks               = ior_edu_csdms_models_HydroTrend__set_hooks;
  epv->f__set_contracts           = ior_edu_csdms_models_HydroTrend__set_contracts;
  epv->f__dump_stats              = ior_edu_csdms_models_HydroTrend__dump_stats;
  epv->f__ctor                    = NULL;
  epv->f__ctor2                   = NULL;
  epv->f__dtor                    = NULL;
  epv->f_boccaSetServices         = NULL;
  epv->f_boccaReleaseServices     = NULL;
  epv->f_checkException           = NULL;
  epv->f_boccaForceUsePortInclude = NULL;
  epv->f_addRef                   = (void (*)(struct edu_csdms_models_HydroTrend__object*,struct sidl_BaseInterface__object **)) s1->f_addRef;
  epv->f_deleteRef                = (void (*)(struct edu_csdms_models_HydroTrend__object*,struct sidl_BaseInterface__object **)) s1->f_deleteRef;
  epv->f_isSame                   = (sidl_bool (*)(struct edu_csdms_models_HydroTrend__object*,struct sidl_BaseInterface__object*,struct sidl_BaseInterface__object **)) s1->f_isSame;
  epv->f_isType                   = (sidl_bool (*)(struct edu_csdms_models_HydroTrend__object*,const char*,struct sidl_BaseInterface__object **)) s1->f_isType;
  epv->f_getClassInfo             = (struct sidl_ClassInfo__object* (*)(struct edu_csdms_models_HydroTrend__object*,struct sidl_BaseInterface__object **)) s1->f_getClassInfo;
  epv->f_setServices              = NULL;
  epv->f_releaseServices          = NULL;
  epv->f_go                       = NULL;
  epv->f_initialize               = NULL;
  epv->f_run                      = NULL;
  epv->f_finalize                 = NULL;
  epv->f_getRaster_nx             = NULL;
  epv->f_getRaster_ny             = NULL;
  epv->f_getRaster_dx             = NULL;
  epv->f_getRaster_dy             = NULL;
  epv->f_getRaster_ulx            = NULL;
  epv->f_getRaster_uly            = NULL;
  epv->f_getRaster_grid           = NULL;
  epv->f_get_raster_dimen         = NULL;
  epv->f_get_raster_res           = NULL;
  epv->f_get_raster_data          = NULL;
  epv->f_get_time_span            = NULL;
  epv->f_get_element_set          = NULL;
  epv->f_get_value_set            = NULL;
  epv->f_get_value_set_data       = NULL;
  epv->f_set_value_set            = NULL;

  edu_csdms_models_HydroTrend__set_epv(epv, &s_preEPV, &s_postEPV);

  /*
   * Override function pointers for edu.csdms.ports.IRFPort with mine, as needed.
   */

  e0->f__cast                 = (void* (*)(void*,const char*, struct sidl_BaseInterface__object**))epv->f__cast;
  e0->f__delete               = (void (*)(void*, struct sidl_BaseInterface__object **)) epv->f__delete;
  e0->f__getURL               = (char* (*)(void*, struct sidl_BaseInterface__object **)) epv->f__getURL;
  e0->f__raddRef              = (void (*)(void*, struct sidl_BaseInterface__object **)) epv->f__raddRef;
  e0->f__isRemote             = (sidl_bool (*)(void*, struct sidl_BaseInterface__object **)) epv->f__isRemote;
  e0->f__exec                 = (void (*)(void*,const char*,struct sidl_rmi_Call__object*,struct sidl_rmi_Return__object*,struct sidl_BaseInterface__object **)) epv->f__exec;
  e0->f_initialize            = (void (*)(void*,struct sidl_string__array*,struct sidl_BaseInterface__object **)) epv->f_initialize;
  e0->f_run                   = (void (*)(void*,double,struct sidl_BaseInterface__object **)) epv->f_run;
  e0->f_finalize              = (void (*)(void*,struct sidl_BaseInterface__object **)) epv->f_finalize;
  e0->f_getRaster_nx          = (int64_t (*)(void*,struct sidl_BaseInterface__object **)) epv->f_getRaster_nx;
  e0->f_getRaster_ny          = (int64_t (*)(void*,struct sidl_BaseInterface__object **)) epv->f_getRaster_ny;
  e0->f_getRaster_dx          = (double (*)(void*,struct sidl_BaseInterface__object **)) epv->f_getRaster_dx;
  e0->f_getRaster_dy          = (double (*)(void*,struct sidl_BaseInterface__object **)) epv->f_getRaster_dy;
  e0->f_getRaster_ulx         = (double (*)(void*,struct sidl_BaseInterface__object **)) epv->f_getRaster_ulx;
  e0->f_getRaster_uly         = (double (*)(void*,struct sidl_BaseInterface__object **)) epv->f_getRaster_uly;
  e0->f_getRaster_grid        = (struct sidl_double__array* (*)(void*,const char*,struct sidl_BaseInterface__object **)) epv->f_getRaster_grid;
  e0->f_get_raster_dimen      = (struct sidl_int__array* (*)(void*,const char*,struct sidl_BaseInterface__object **)) epv->f_get_raster_dimen;
  e0->f_get_raster_res        = (struct sidl_double__array* (*)(void*,const char*,struct sidl_BaseInterface__object **)) epv->f_get_raster_res;
  e0->f_get_raster_data       = (struct sidl__array* (*)(void*,const char*,struct sidl_BaseInterface__object **)) epv->f_get_raster_data;
  e0->f_get_time_span         = (struct sidl_double__array* (*)(void*,struct sidl_BaseInterface__object **)) epv->f_get_time_span;
  e0->f_get_element_set       = (struct edu_csdms_openmi_IElementSet__object* (*)(void*,const char*,struct sidl_BaseInterface__object **)) epv->f_get_element_set;
  e0->f_get_value_set         = (struct edu_csdms_openmi_IValueSet__object* (*)(void*,const char*,struct sidl_BaseInterface__object **)) epv->f_get_value_set;
  e0->f_get_value_set_data    = (struct sidl__array* (*)(void*,const char*,struct sidl_BaseInterface__object **)) epv->f_get_value_set_data;
  e0->f_set_value_set         = (void (*)(void*,const char*,struct edu_csdms_openmi_IValueSet__object*,struct sidl_BaseInterface__object **)) epv->f_set_value_set;
  e0->f_addRef                = (void (*)(void*,struct sidl_BaseInterface__object **)) epv->f_addRef;
  e0->f_deleteRef             = (void (*)(void*,struct sidl_BaseInterface__object **)) epv->f_deleteRef;
  e0->f_isSame                = (sidl_bool (*)(void*,struct sidl_BaseInterface__object*,struct sidl_BaseInterface__object **)) epv->f_isSame;
  e0->f_isType                = (sidl_bool (*)(void*,const char*,struct sidl_BaseInterface__object **)) epv->f_isType;
  e0->f_getClassInfo          = (struct sidl_ClassInfo__object* (*)(void*,struct sidl_BaseInterface__object **)) epv->f_getClassInfo;


  /*
   * Override function pointers for gov.cca.Component with mine, as needed.
   */

  e1->f__cast                 = (void* (*)(void*,const char*, struct sidl_BaseInterface__object**))epv->f__cast;
  e1->f__delete               = (void (*)(void*, struct sidl_BaseInterface__object **)) epv->f__delete;
  e1->f__getURL               = (char* (*)(void*, struct sidl_BaseInterface__object **)) epv->f__getURL;
  e1->f__raddRef              = (void (*)(void*, struct sidl_BaseInterface__object **)) epv->f__raddRef;
  e1->f__isRemote             = (sidl_bool (*)(void*, struct sidl_BaseInterface__object **)) epv->f__isRemote;
  e1->f__exec                 = (void (*)(void*,const char*,struct sidl_rmi_Call__object*,struct sidl_rmi_Return__object*,struct sidl_BaseInterface__object **)) epv->f__exec;
  e1->f_setServices           = (void (*)(void*,struct gov_cca_Services__object*,struct sidl_BaseInterface__object **)) epv->f_setServices;
  e1->f_addRef                = (void (*)(void*,struct sidl_BaseInterface__object **)) epv->f_addRef;
  e1->f_deleteRef             = (void (*)(void*,struct sidl_BaseInterface__object **)) epv->f_deleteRef;
  e1->f_isSame                = (sidl_bool (*)(void*,struct sidl_BaseInterface__object*,struct sidl_BaseInterface__object **)) epv->f_isSame;
  e1->f_isType                = (sidl_bool (*)(void*,const char*,struct sidl_BaseInterface__object **)) epv->f_isType;
  e1->f_getClassInfo          = (struct sidl_ClassInfo__object* (*)(void*,struct sidl_BaseInterface__object **)) epv->f_getClassInfo;


  /*
   * Override function pointers for gov.cca.ComponentRelease with mine, as needed.
   */

  e2->f__cast                 = (void* (*)(void*,const char*, struct sidl_BaseInterface__object**))epv->f__cast;
  e2->f__delete               = (void (*)(void*, struct sidl_BaseInterface__object **)) epv->f__delete;
  e2->f__getURL               = (char* (*)(void*, struct sidl_BaseInterface__object **)) epv->f__getURL;
  e2->f__raddRef              = (void (*)(void*, struct sidl_BaseInterface__object **)) epv->f__raddRef;
  e2->f__isRemote             = (sidl_bool (*)(void*, struct sidl_BaseInterface__object **)) epv->f__isRemote;
  e2->f__exec                 = (void (*)(void*,const char*,struct sidl_rmi_Call__object*,struct sidl_rmi_Return__object*,struct sidl_BaseInterface__object **)) epv->f__exec;
  e2->f_releaseServices       = (void (*)(void*,struct gov_cca_Services__object*,struct sidl_BaseInterface__object **)) epv->f_releaseServices;
  e2->f_addRef                = (void (*)(void*,struct sidl_BaseInterface__object **)) epv->f_addRef;
  e2->f_deleteRef             = (void (*)(void*,struct sidl_BaseInterface__object **)) epv->f_deleteRef;
  e2->f_isSame                = (sidl_bool (*)(void*,struct sidl_BaseInterface__object*,struct sidl_BaseInterface__object **)) epv->f_isSame;
  e2->f_isType                = (sidl_bool (*)(void*,const char*,struct sidl_BaseInterface__object **)) epv->f_isType;
  e2->f_getClassInfo          = (struct sidl_ClassInfo__object* (*)(void*,struct sidl_BaseInterface__object **)) epv->f_getClassInfo;


  /*
   * Override function pointers for gov.cca.Port with mine, as needed.
   */

  e3->f__cast                 = (void* (*)(void*,const char*, struct sidl_BaseInterface__object**))epv->f__cast;
  e3->f__delete               = (void (*)(void*, struct sidl_BaseInterface__object **)) epv->f__delete;
  e3->f__getURL               = (char* (*)(void*, struct sidl_BaseInterface__object **)) epv->f__getURL;
  e3->f__raddRef              = (void (*)(void*, struct sidl_BaseInterface__object **)) epv->f__raddRef;
  e3->f__isRemote             = (sidl_bool (*)(void*, struct sidl_BaseInterface__object **)) epv->f__isRemote;
  e3->f__exec                 = (void (*)(void*,const char*,struct sidl_rmi_Call__object*,struct sidl_rmi_Return__object*,struct sidl_BaseInterface__object **)) epv->f__exec;
  e3->f_addRef                = (void (*)(void*,struct sidl_BaseInterface__object **)) epv->f_addRef;
  e3->f_deleteRef             = (void (*)(void*,struct sidl_BaseInterface__object **)) epv->f_deleteRef;
  e3->f_isSame                = (sidl_bool (*)(void*,struct sidl_BaseInterface__object*,struct sidl_BaseInterface__object **)) epv->f_isSame;
  e3->f_isType                = (sidl_bool (*)(void*,const char*,struct sidl_BaseInterface__object **)) epv->f_isType;
  e3->f_getClassInfo          = (struct sidl_ClassInfo__object* (*)(void*,struct sidl_BaseInterface__object **)) epv->f_getClassInfo;


  /*
   * Override function pointers for gov.cca.ports.GoPort with mine, as needed.
   */

  e4->f__cast                 = (void* (*)(void*,const char*, struct sidl_BaseInterface__object**))epv->f__cast;
  e4->f__delete               = (void (*)(void*, struct sidl_BaseInterface__object **)) epv->f__delete;
  e4->f__getURL               = (char* (*)(void*, struct sidl_BaseInterface__object **)) epv->f__getURL;
  e4->f__raddRef              = (void (*)(void*, struct sidl_BaseInterface__object **)) epv->f__raddRef;
  e4->f__isRemote             = (sidl_bool (*)(void*, struct sidl_BaseInterface__object **)) epv->f__isRemote;
  e4->f__exec                 = (void (*)(void*,const char*,struct sidl_rmi_Call__object*,struct sidl_rmi_Return__object*,struct sidl_BaseInterface__object **)) epv->f__exec;
  e4->f_go                    = (int32_t (*)(void*,struct sidl_BaseInterface__object **)) epv->f_go;
  e4->f_addRef                = (void (*)(void*,struct sidl_BaseInterface__object **)) epv->f_addRef;
  e4->f_deleteRef             = (void (*)(void*,struct sidl_BaseInterface__object **)) epv->f_deleteRef;
  e4->f_isSame                = (sidl_bool (*)(void*,struct sidl_BaseInterface__object*,struct sidl_BaseInterface__object **)) epv->f_isSame;
  e4->f_isType                = (sidl_bool (*)(void*,const char*,struct sidl_BaseInterface__object **)) epv->f_isType;
  e4->f_getClassInfo          = (struct sidl_ClassInfo__object* (*)(void*,struct sidl_BaseInterface__object **)) epv->f_getClassInfo;


  /*
   * Override function pointers for sidl.BaseClass with mine, as needed.
   */

  e5->f__cast                 = (void* (*)(struct sidl_BaseClass__object*,const char*, struct sidl_BaseInterface__object**))epv->f__cast;
  e5->f__delete               = (void (*)(struct sidl_BaseClass__object*, struct sidl_BaseInterface__object **)) epv->f__delete;
  e5->f__getURL               = (char* (*)(struct sidl_BaseClass__object*, struct sidl_BaseInterface__object **)) epv->f__getURL;
  e5->f__raddRef              = (void (*)(struct sidl_BaseClass__object*, struct sidl_BaseInterface__object **)) epv->f__raddRef;
  e5->f__isRemote             = (sidl_bool (*)(struct sidl_BaseClass__object*, struct sidl_BaseInterface__object **)) epv->f__isRemote;
  e5->f__exec                 = (void (*)(struct sidl_BaseClass__object*,const char*,struct sidl_rmi_Call__object*,struct sidl_rmi_Return__object*,struct sidl_BaseInterface__object **)) epv->f__exec;
  e5->f_addRef                = (void (*)(struct sidl_BaseClass__object*,struct sidl_BaseInterface__object **)) epv->f_addRef;
  e5->f_deleteRef             = (void (*)(struct sidl_BaseClass__object*,struct sidl_BaseInterface__object **)) epv->f_deleteRef;
  e5->f_isSame                = (sidl_bool (*)(struct sidl_BaseClass__object*,struct sidl_BaseInterface__object*,struct sidl_BaseInterface__object **)) epv->f_isSame;
  e5->f_isType                = (sidl_bool (*)(struct sidl_BaseClass__object*,const char*,struct sidl_BaseInterface__object **)) epv->f_isType;
  e5->f_getClassInfo          = (struct sidl_ClassInfo__object* (*)(struct sidl_BaseClass__object*,struct sidl_BaseInterface__object **)) epv->f_getClassInfo;


  /*
   * Override function pointers for sidl.BaseInterface with mine, as needed.
   */

  e6->f__cast                 = (void* (*)(void*,const char*, struct sidl_BaseInterface__object**))epv->f__cast;
  e6->f__delete               = (void (*)(void*, struct sidl_BaseInterface__object **)) epv->f__delete;
  e6->f__getURL               = (char* (*)(void*, struct sidl_BaseInterface__object **)) epv->f__getURL;
  e6->f__raddRef              = (void (*)(void*, struct sidl_BaseInterface__object **)) epv->f__raddRef;
  e6->f__isRemote             = (sidl_bool (*)(void*, struct sidl_BaseInterface__object **)) epv->f__isRemote;
  e6->f__exec                 = (void (*)(void*,const char*,struct sidl_rmi_Call__object*,struct sidl_rmi_Return__object*,struct sidl_BaseInterface__object **)) epv->f__exec;
  e6->f_addRef                = (void (*)(void*,struct sidl_BaseInterface__object **)) epv->f_addRef;
  e6->f_deleteRef             = (void (*)(void*,struct sidl_BaseInterface__object **)) epv->f_deleteRef;
  e6->f_isSame                = (sidl_bool (*)(void*,struct sidl_BaseInterface__object*,struct sidl_BaseInterface__object **)) epv->f_isSame;
  e6->f_isType                = (sidl_bool (*)(void*,const char*,struct sidl_BaseInterface__object **)) epv->f_isType;
  e6->f_getClassInfo          = (struct sidl_ClassInfo__object* (*)(void*,struct sidl_BaseInterface__object **)) epv->f_getClassInfo;


  s_method_initialized = 1;
  ior_edu_csdms_models_HydroTrend__ensure_load_called();
}

/*
 * edu_csdms_models_HydroTrend__getEPVs: Get my version of all relevant EPVs.
 */

void edu_csdms_models_HydroTrend__getEPVs (
  struct sidl_BaseInterface__epv **s_arg_epv__sidl_baseinterface,
  struct sidl_BaseClass__epv **s_arg_epv__sidl_baseclass,
  struct edu_csdms_ports_IRFPort__epv **s_arg_epv__edu_csdms_ports_irfport,
  struct edu_csdms_ports_IRFPort__epv **s_arg_epv_hooks__edu_csdms_ports_irfport,
  struct gov_cca_Component__epv **s_arg_epv__gov_cca_component,
  struct gov_cca_Component__epv **s_arg_epv_hooks__gov_cca_component,
  struct gov_cca_ComponentRelease__epv **s_arg_epv__gov_cca_componentrelease,
  struct gov_cca_ComponentRelease__epv **s_arg_epv_hooks__gov_cca_componentrelease,
  struct gov_cca_Port__epv **s_arg_epv__gov_cca_port,
  struct gov_cca_Port__epv **s_arg_epv_hooks__gov_cca_port,
  struct gov_cca_ports_GoPort__epv **s_arg_epv__gov_cca_ports_goport,
  struct gov_cca_ports_GoPort__epv **s_arg_epv_hooks__gov_cca_ports_goport,
  struct edu_csdms_models_HydroTrend__epv **s_arg_epv__edu_csdms_models_hydrotrend,
  struct edu_csdms_models_HydroTrend__epv **s_arg_epv_hooks__edu_csdms_models_hydrotrend)
{
  LOCK_STATIC_GLOBALS;
  if (!s_method_initialized) {
    edu_csdms_models_HydroTrend__init_epv();
  }
  UNLOCK_STATIC_GLOBALS;

  *s_arg_epv__sidl_baseinterface = &s_my_epv__sidl_baseinterface;
  *s_arg_epv__sidl_baseclass = &s_my_epv__sidl_baseclass;
  *s_arg_epv__edu_csdms_ports_irfport = &s_my_epv__edu_csdms_ports_irfport;
  *s_arg_epv_hooks__edu_csdms_ports_irfport = &s_my_epv_hooks__edu_csdms_ports_irfport;
  *s_arg_epv__gov_cca_component = &s_my_epv__gov_cca_component;
  *s_arg_epv_hooks__gov_cca_component = &s_my_epv_hooks__gov_cca_component;
  *s_arg_epv__gov_cca_componentrelease = &s_my_epv__gov_cca_componentrelease;
  *s_arg_epv_hooks__gov_cca_componentrelease = &s_my_epv_hooks__gov_cca_componentrelease;
  *s_arg_epv__gov_cca_port = &s_my_epv__gov_cca_port;
  *s_arg_epv_hooks__gov_cca_port = &s_my_epv_hooks__gov_cca_port;
  *s_arg_epv__gov_cca_ports_goport = &s_my_epv__gov_cca_ports_goport;
  *s_arg_epv_hooks__gov_cca_ports_goport = &s_my_epv_hooks__gov_cca_ports_goport;
  *s_arg_epv__edu_csdms_models_hydrotrend = &s_my_epv__edu_csdms_models_hydrotrend;
  *s_arg_epv_hooks__edu_csdms_models_hydrotrend = &s_my_epv_hooks__edu_csdms_models_hydrotrend;
}
/*
 * __getSuperEPV: returns parent's non-overrided EPV
 */

static struct sidl_BaseClass__epv* edu_csdms_models_HydroTrend__getSuperEPV(void) {
  return s_par_epv__sidl_baseclass;
}

/*
 * initClassInfo: create a ClassInfo interface if necessary.
 */

static void
initClassInfo(sidl_ClassInfo *info, struct sidl_BaseInterface__object **_ex)
{
  LOCK_STATIC_GLOBALS;
  *_ex  = NULL; /* default to no exception */

  if (!s_classInfo) {
    sidl_ClassInfoI impl;
    impl = sidl_ClassInfoI__create(_ex);
    s_classInfo = sidl_ClassInfo__cast(impl,_ex);
    if (impl) {
      sidl_ClassInfoI_setName(impl, "edu.csdms.models.HydroTrend", _ex);
      sidl_ClassInfoI_setVersion(impl, "0.0", _ex);
      sidl_ClassInfoI_setIORVersion(impl, s_IOR_MAJOR_VERSION,
        s_IOR_MINOR_VERSION, _ex);
      sidl_ClassInfoI_deleteRef(impl,_ex);
      sidl_atexit(sidl_deleteRef_atexit, &s_classInfo);
    }
  }
  UNLOCK_STATIC_GLOBALS;
  if (s_classInfo) {
    if (*info) {
      sidl_ClassInfo_deleteRef(*info,_ex);
    }
    *info = s_classInfo;
    sidl_ClassInfo_addRef(*info,_ex);
  }
}

/*
 * initMetadata: store IOR version & class in sidl.BaseClass's data
 */

static void
initMetadata(struct edu_csdms_models_HydroTrend__object* self, sidl_BaseInterface* _ex)
{
  *_ex = 0; /* default no exception */
  if (self) {
    struct sidl_BaseClass__data *data = (struct sidl_BaseClass__data*)((*self).d_sidl_baseclass.d_data);
    if (data) {
      data->d_IOR_major_version = s_IOR_MAJOR_VERSION;
      data->d_IOR_minor_version = s_IOR_MINOR_VERSION;
      initClassInfo(&(data->d_classinfo),_ex); SIDL_CHECK(*_ex);
    }
  }
EXIT:
return;
}

/*
 * edu_csdms_models_HydroTrend__createObject: Allocate the object and initialize it.
 */

struct edu_csdms_models_HydroTrend__object*
edu_csdms_models_HydroTrend__createObject(void* ddata, struct sidl_BaseInterface__object ** _ex)
{
  struct edu_csdms_models_HydroTrend__object* self =
    (struct edu_csdms_models_HydroTrend__object*) sidl_malloc(
      sizeof(struct edu_csdms_models_HydroTrend__object),
      "Object allocation failed for struct edu_csdms_models_HydroTrend__object",
        __FILE__, __LINE__, "edu_csdms_models_HydroTrend__createObject", _ex);
  if (!self) goto EXIT;
  edu_csdms_models_HydroTrend__init(self, ddata, _ex); SIDL_CHECK(*_ex);
  initMetadata(self, _ex); SIDL_CHECK(*_ex);
  return self;

  EXIT:
  return NULL;
}

/*
 * INIT: initialize a new instance of the class object.
 */

void edu_csdms_models_HydroTrend__init(
  struct edu_csdms_models_HydroTrend__object* self,
   void* ddata,
  struct sidl_BaseInterface__object **_ex)
{
  struct edu_csdms_models_HydroTrend__object* s0 = self;
  struct sidl_BaseClass__object*              s1 = &s0->d_sidl_baseclass;

  *_ex = 0; /* default no exception */
  LOCK_STATIC_GLOBALS;
  if (!s_method_initialized) {
    edu_csdms_models_HydroTrend__init_epv();
  }
  UNLOCK_STATIC_GLOBALS;

  sidl_BaseClass__init(s1, NULL, _ex); SIDL_CHECK(*_ex);

  s1->d_sidl_baseinterface.d_epv = &s_my_epv__sidl_baseinterface;
  s1->d_epv                      = &s_my_epv__sidl_baseclass;

  s0->d_edu_csdms_ports_irfport.d_epv  = &s_my_epv__edu_csdms_ports_irfport;
  s0->d_gov_cca_component.d_epv        = &s_my_epv__gov_cca_component;
  s0->d_gov_cca_componentrelease.d_epv = &s_my_epv__gov_cca_componentrelease;
  s0->d_gov_cca_port.d_epv             = &s_my_epv__gov_cca_port;
  s0->d_gov_cca_ports_goport.d_epv     = &s_my_epv__gov_cca_ports_goport;
  s0->d_epv                            = &s_my_epv__edu_csdms_models_hydrotrend;

  s0->d_edu_csdms_ports_irfport.d_object = self;

  s0->d_gov_cca_component.d_object = self;

  s0->d_gov_cca_componentrelease.d_object = self;

  s0->d_gov_cca_port.d_object = self;

  s0->d_gov_cca_ports_goport.d_object = self;

  s0->d_data = NULL;

  if (ddata) {
    self->d_data = ddata;
    (*(self->d_epv->f__ctor2))(self,ddata,_ex); SIDL_CHECK(*_ex);
  } else { 
    (*(self->d_epv->f__ctor))(self,_ex); SIDL_CHECK(*_ex);
  }
  EXIT:
  return;
}

/*
 * FINI: deallocate a class instance (destructor).
 */

void edu_csdms_models_HydroTrend__fini(
  struct edu_csdms_models_HydroTrend__object* self,
  struct sidl_BaseInterface__object **_ex)
{
  struct edu_csdms_models_HydroTrend__object* s0 = self;
  struct sidl_BaseClass__object*              s1 = &s0->d_sidl_baseclass;

  *_ex  = NULL; /* default to no exception */

  (*(s0->d_epv->f__dtor))(s0,_ex); SIDL_CHECK(*_ex);

  s1->d_sidl_baseinterface.d_epv = s_par_epv__sidl_baseinterface;
  s1->d_epv                      = s_par_epv__sidl_baseclass;

  sidl_BaseClass__fini(s1, _ex); SIDL_CHECK(*_ex);

  EXIT:
  return;
}

/*
 * VERSION: Return the version of the IOR used to generate this IOR.
 */

void
edu_csdms_models_HydroTrend__IOR_version(int32_t *major, int32_t *minor)
{
  *major = s_IOR_MAJOR_VERSION;
  *minor = s_IOR_MINOR_VERSION;
}

static const struct edu_csdms_models_HydroTrend__external
s_externalEntryPoints = {
  edu_csdms_models_HydroTrend__createObject,
  edu_csdms_models_HydroTrend__getSuperEPV,
  2, 
  0
};

/*
 * This function returns a pointer to a static structure of
 * pointers to function entry points.  Its purpose is to provide
 * one-stop shopping for loading DLLs.
 */

const struct edu_csdms_models_HydroTrend__external*
edu_csdms_models_HydroTrend__externals(void)
{
  return &s_externalEntryPoints;
}

