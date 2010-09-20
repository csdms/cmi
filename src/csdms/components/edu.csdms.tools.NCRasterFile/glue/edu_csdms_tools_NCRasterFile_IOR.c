/*
 * File:          edu_csdms_tools_NCRasterFile_IOR.c
 * Symbol:        edu.csdms.tools.NCRasterFile-v0.0
 * Symbol Type:   class
 * Babel Version: 1.4.0 (Revision: 6607 release-1-4-0-branch)
 * Description:   Intermediate Object Representation for edu.csdms.tools.NCRasterFile
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
#include "edu_csdms_tools_NCRasterFile_IOR.h"
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
static struct sidl_recursive_mutex_t edu_csdms_tools_NCRasterFile__mutex= SIDL_RECURSIVE_MUTEX_INITIALIZER;
#define LOCK_STATIC_GLOBALS sidl_recursive_mutex_lock( &edu_csdms_tools_NCRasterFile__mutex )
#define UNLOCK_STATIC_GLOBALS sidl_recursive_mutex_unlock( &edu_csdms_tools_NCRasterFile__mutex )
/* #define HAVE_LOCKED_STATIC_GLOBALS (sidl_recursive_mutex_trylock( &edu_csdms_tools_NCRasterFile__mutex )==EDEADLOCK) */
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

static struct edu_csdms_tools_NCRasterFile__epv 
  s_my_epv__edu_csdms_tools_ncrasterfile;

static struct edu_csdms_tools_NCRasterFile__epv 
  s_my_epv_contracts__edu_csdms_tools_ncrasterfile;

static struct edu_csdms_tools_NCRasterFile__epv 
  s_my_epv_hooks__edu_csdms_tools_ncrasterfile;

static struct edu_csdms_tools_IRasterOutputFile__epv 
  s_my_epv__edu_csdms_tools_irasteroutputfile;
static struct edu_csdms_tools_IRasterOutputFile__epv 
  s_my_epv_hooks__edu_csdms_tools_irasteroutputfile;

static struct sidl_BaseClass__epv  s_my_epv__sidl_baseclass;
static struct sidl_BaseClass__epv* s_par_epv__sidl_baseclass;

static struct sidl_BaseInterface__epv  s_my_epv__sidl_baseinterface;
static struct sidl_BaseInterface__epv* s_par_epv__sidl_baseinterface;

static struct edu_csdms_tools_NCRasterFile__pre_epv s_preEPV;
static struct edu_csdms_tools_NCRasterFile__post_epv s_postEPV;

/*
 * Declare EPV routines defined in the skeleton file.
 */

#ifdef __cplusplus
extern "C" {
#endif

extern void edu_csdms_tools_NCRasterFile__set_epv(
  struct edu_csdms_tools_NCRasterFile__epv* epv,
    struct edu_csdms_tools_NCRasterFile__pre_epv* pre_epv,
    struct edu_csdms_tools_NCRasterFile__post_epv* post_epv);

extern void edu_csdms_tools_NCRasterFile__call_load(void);
#ifdef __cplusplus
}
#endif

static void
edu_csdms_tools_NCRasterFile_boccaForceUsePortInclude__exec(
        struct edu_csdms_tools_NCRasterFile__object* self,
        struct sidl_rmi_Call__object* inArgs,
        struct sidl_rmi_Return__object* outArgs,
        struct sidl_BaseInterface__object ** _ex) {
  /* stack space for arguments */
  sidl_BaseInterface _throwaway_exception = NULL;
  sidl_BaseInterface _ex3   = NULL;
  sidl_BaseException _SIDLex = NULL;
  /* unpack in and inout argments */

  /* make the call */
  (self->d_epv->f_boccaForceUsePortInclude)(
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
edu_csdms_tools_NCRasterFile_addRef__exec(
        struct edu_csdms_tools_NCRasterFile__object* self,
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
edu_csdms_tools_NCRasterFile_deleteRef__exec(
        struct edu_csdms_tools_NCRasterFile__object* self,
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
edu_csdms_tools_NCRasterFile_isSame__exec(
        struct edu_csdms_tools_NCRasterFile__object* self,
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

  iobj = skel_edu_csdms_tools_NCRasterFile_fconnect_sidl_BaseInterface(iobj_str,
    TRUE, _ex);SIDL_CHECK(*_ex);
#else
  iobj_bc = sidl_rmi_InstanceRegistry_getInstanceByString(iobj_str, 
    _ex);SIDL_CHECK(*_ex);
  if(iobj_bc != NULL) {
    iobj= (struct edu_csdms_tools_NCRasterFile__object*) (
      *iobj_bc->d_epv->f__cast)(iobj_bc, "edu.csdms.tools.NCRasterFile", _ex);
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
edu_csdms_tools_NCRasterFile_isType__exec(
        struct edu_csdms_tools_NCRasterFile__object* self,
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
edu_csdms_tools_NCRasterFile_getClassInfo__exec(
        struct edu_csdms_tools_NCRasterFile__object* self,
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
edu_csdms_tools_NCRasterFile_init__exec(
        struct edu_csdms_tools_NCRasterFile__object* self,
        struct sidl_rmi_Call__object* inArgs,
        struct sidl_rmi_Return__object* outArgs,
        struct sidl_BaseInterface__object ** _ex) {
  /* stack space for arguments */
  char* name= NULL;
  char* units= NULL;
  struct sidl_int__array* dimen = NULL;
  struct sidl_double__array* res = NULL;
  sidl_BaseInterface _throwaway_exception = NULL;
  sidl_BaseInterface _ex3   = NULL;
  sidl_BaseException _SIDLex = NULL;
  /* unpack in and inout argments */
  sidl_rmi_Call_unpackString( inArgs, "name", &name, _ex);SIDL_CHECK(*_ex);
  sidl_rmi_Call_unpackString( inArgs, "units", &units, _ex);SIDL_CHECK(*_ex);
  sidl_rmi_Call_unpackIntArray( inArgs, "dimen", &dimen,0,0,FALSE, 
    _ex);SIDL_CHECK(*_ex);
  sidl_rmi_Call_unpackDoubleArray( inArgs, "res", &res,0,0,FALSE, 
    _ex);SIDL_CHECK(*_ex);

  /* make the call */
  (self->d_epv->f_init)(
    self,
    name,
    units,
    dimen,
    res,
    _ex);  SIDL_CHECK(*_ex);

  /* pack return value */
  /* pack out and inout argments */
  EXIT:
  /* clean-up dangling references */
  if(name) {free(name);}
  if(units) {free(units);}
  sidl__array_deleteRef((struct sidl__array*)dimen);
  sidl__array_deleteRef((struct sidl__array*)res);
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
edu_csdms_tools_NCRasterFile_open__exec(
        struct edu_csdms_tools_NCRasterFile__object* self,
        struct sidl_rmi_Call__object* inArgs,
        struct sidl_rmi_Return__object* outArgs,
        struct sidl_BaseInterface__object ** _ex) {
  /* stack space for arguments */
  char* file= NULL;
  sidl_BaseInterface _throwaway_exception = NULL;
  sidl_BaseInterface _ex3   = NULL;
  sidl_BaseException _SIDLex = NULL;
  /* unpack in and inout argments */
  sidl_rmi_Call_unpackString( inArgs, "file", &file, _ex);SIDL_CHECK(*_ex);

  /* make the call */
  (self->d_epv->f_open)(
    self,
    file,
    _ex);  SIDL_CHECK(*_ex);

  /* pack return value */
  /* pack out and inout argments */
  EXIT:
  /* clean-up dangling references */
  if(file) {free(file);}
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
edu_csdms_tools_NCRasterFile_append__exec(
        struct edu_csdms_tools_NCRasterFile__object* self,
        struct sidl_rmi_Call__object* inArgs,
        struct sidl_rmi_Return__object* outArgs,
        struct sidl_BaseInterface__object ** _ex) {
  /* stack space for arguments */
  struct sidl__array* value = NULL;
  sidl_BaseInterface _throwaway_exception = NULL;
  sidl_BaseInterface _ex3   = NULL;
  sidl_BaseException _SIDLex = NULL;
  /* unpack in and inout argments */
  sidl_rmi_Call_unpackGenericArray( inArgs, "value", &value, _ex);SIDL_CHECK(
    *_ex);

  /* make the call */
  (self->d_epv->f_append)(
    self,
    value,
    _ex);  SIDL_CHECK(*_ex);

  /* pack return value */
  /* pack out and inout argments */
  EXIT:
  /* clean-up dangling references */
  sidl__array_deleteRef((struct sidl__array*)value);
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
edu_csdms_tools_NCRasterFile_close__exec(
        struct edu_csdms_tools_NCRasterFile__object* self,
        struct sidl_rmi_Call__object* inArgs,
        struct sidl_rmi_Return__object* outArgs,
        struct sidl_BaseInterface__object ** _ex) {
  /* stack space for arguments */
  sidl_BaseInterface _throwaway_exception = NULL;
  sidl_BaseInterface _ex3   = NULL;
  sidl_BaseException _SIDLex = NULL;
  /* unpack in and inout argments */

  /* make the call */
  (self->d_epv->f_close)(
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
edu_csdms_tools_NCRasterFile__cast__exec(
        struct edu_csdms_tools_NCRasterFile__object* self,
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

static void ior_edu_csdms_tools_NCRasterFile__set_contracts(
  struct edu_csdms_tools_NCRasterFile__object* self,
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

static void ior_edu_csdms_tools_NCRasterFile__dump_stats(
  struct edu_csdms_tools_NCRasterFile__object* self,
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

static void ior_edu_csdms_tools_NCRasterFile__ensure_load_called(void) {
  /*
   * assert( HAVE_LOCKED_STATIC_GLOBALS );
   */

  if (! s_load_called ) {
    s_load_called=1;
    edu_csdms_tools_NCRasterFile__call_load();
  }
}

/* CAST: dynamic type casting support. */
static void* ior_edu_csdms_tools_NCRasterFile__cast(
  struct edu_csdms_tools_NCRasterFile__object* self,
  const char* name, sidl_BaseInterface* _ex)
{
  int cmp;
  void* cast = NULL;
  *_ex = NULL; /* default to no exception */
  cmp = strcmp(name, "sidl.BaseClass");
  if (!cmp) {
    (*self->d_epv->f_addRef)(self, _ex); SIDL_CHECK(*_ex);
    cast = ((struct sidl_BaseClass__object*)self);
    return cast;
  }
  else if (cmp < 0) {
    cmp = strcmp(name, "edu.csdms.tools.NCRasterFile");
    if (!cmp) {
      (*self->d_epv->f_addRef)(self, _ex); SIDL_CHECK(*_ex);
      cast = ((struct edu_csdms_tools_NCRasterFile__object*)self);
      return cast;
    }
    else if (cmp < 0) {
      cmp = strcmp(name, "edu.csdms.tools.IRasterOutputFile");
      if (!cmp) {
        (*self->d_epv->f_addRef)(self, _ex); SIDL_CHECK(*_ex);
        cast = &((*self).d_edu_csdms_tools_irasteroutputfile);
        return cast;
      }
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
  return cast;
  EXIT:
  return NULL;
}

/*
 * HOOKS: Enable/disable hooks.
 */

static void ior_edu_csdms_tools_NCRasterFile__set_hooks(
  struct edu_csdms_tools_NCRasterFile__object* self,
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

static void ior_edu_csdms_tools_NCRasterFile__delete(
  struct edu_csdms_tools_NCRasterFile__object* self, struct 
    sidl_BaseInterface__object **_ex)
{
  *_ex  = NULL; /* default to no exception */
  edu_csdms_tools_NCRasterFile__fini(self, _ex);
  memset((void*)self, 0, sizeof(struct edu_csdms_tools_NCRasterFile__object));
  free((void*) self);
}

static char*
ior_edu_csdms_tools_NCRasterFile__getURL(
  struct edu_csdms_tools_NCRasterFile__object* self,
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
ior_edu_csdms_tools_NCRasterFile__raddRef(
    struct edu_csdms_tools_NCRasterFile__object* self, sidl_BaseInterface* _ex) 
  {
  sidl_BaseInterface_addRef((sidl_BaseInterface)self, _ex);
}

static sidl_bool
ior_edu_csdms_tools_NCRasterFile__isRemote(
    struct edu_csdms_tools_NCRasterFile__object* self, sidl_BaseInterface* _ex) 
  {
  *_ex  = NULL; /* default to no exception */
  return FALSE;
}

struct edu_csdms_tools_NCRasterFile__method {
  const char *d_name;
  void (*d_func)(struct edu_csdms_tools_NCRasterFile__object*,
    struct sidl_rmi_Call__object *,
    struct sidl_rmi_Return__object *,
    struct sidl_BaseInterface__object **);
};

static void
ior_edu_csdms_tools_NCRasterFile__exec(
  struct edu_csdms_tools_NCRasterFile__object* self,
  const char* methodName,
  struct sidl_rmi_Call__object* inArgs,
  struct sidl_rmi_Return__object* outArgs,
  struct sidl_BaseInterface__object **_ex )
{
  static const struct edu_csdms_tools_NCRasterFile__method  s_methods[] = {
    { "_cast", edu_csdms_tools_NCRasterFile__cast__exec },
    { "addRef", edu_csdms_tools_NCRasterFile_addRef__exec },
    { "append", edu_csdms_tools_NCRasterFile_append__exec },
    { "boccaForceUsePortInclude", 
      edu_csdms_tools_NCRasterFile_boccaForceUsePortInclude__exec },
    { "close", edu_csdms_tools_NCRasterFile_close__exec },
    { "deleteRef", edu_csdms_tools_NCRasterFile_deleteRef__exec },
    { "getClassInfo", edu_csdms_tools_NCRasterFile_getClassInfo__exec },
    { "init", edu_csdms_tools_NCRasterFile_init__exec },
    { "isSame", edu_csdms_tools_NCRasterFile_isSame__exec },
    { "isType", edu_csdms_tools_NCRasterFile_isType__exec },
    { "open", edu_csdms_tools_NCRasterFile_open__exec }
  };
  int i, cmp, l = 0;
  int u = sizeof(s_methods)/sizeof(struct edu_csdms_tools_NCRasterFile__method);
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

static void edu_csdms_tools_NCRasterFile__init_epv(void)
{
/*
 * assert( HAVE_LOCKED_STATIC_GLOBALS );
 */

  struct edu_csdms_tools_NCRasterFile__epv*      epv  = &s_my_epv__edu_csdms_tools_ncrasterfile;
  struct edu_csdms_tools_IRasterOutputFile__epv* e0   = &s_my_epv__edu_csdms_tools_irasteroutputfile;
  struct sidl_BaseClass__epv*                    e1   = &s_my_epv__sidl_baseclass;
  struct sidl_BaseInterface__epv*                e2   = &s_my_epv__sidl_baseinterface;

  struct sidl_BaseClass__epv*               s1 = NULL;

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

  epv->f__cast                    = ior_edu_csdms_tools_NCRasterFile__cast;
  epv->f__delete                  = ior_edu_csdms_tools_NCRasterFile__delete;
  epv->f__exec                    = ior_edu_csdms_tools_NCRasterFile__exec;
  epv->f__getURL                  = ior_edu_csdms_tools_NCRasterFile__getURL;
  epv->f__raddRef                 = ior_edu_csdms_tools_NCRasterFile__raddRef;
  epv->f__isRemote                = ior_edu_csdms_tools_NCRasterFile__isRemote;
  epv->f__set_hooks               = ior_edu_csdms_tools_NCRasterFile__set_hooks;
  epv->f__set_contracts           = ior_edu_csdms_tools_NCRasterFile__set_contracts;
  epv->f__dump_stats              = ior_edu_csdms_tools_NCRasterFile__dump_stats;
  epv->f__ctor                    = NULL;
  epv->f__ctor2                   = NULL;
  epv->f__dtor                    = NULL;
  epv->f_boccaForceUsePortInclude = NULL;
  epv->f_addRef                   = (void (*)(struct edu_csdms_tools_NCRasterFile__object*,struct sidl_BaseInterface__object **)) s1->f_addRef;
  epv->f_deleteRef                = (void (*)(struct edu_csdms_tools_NCRasterFile__object*,struct sidl_BaseInterface__object **)) s1->f_deleteRef;
  epv->f_isSame                   = (sidl_bool (*)(struct edu_csdms_tools_NCRasterFile__object*,struct sidl_BaseInterface__object*,struct sidl_BaseInterface__object **)) s1->f_isSame;
  epv->f_isType                   = (sidl_bool (*)(struct edu_csdms_tools_NCRasterFile__object*,const char*,struct sidl_BaseInterface__object **)) s1->f_isType;
  epv->f_getClassInfo             = (struct sidl_ClassInfo__object* (*)(struct edu_csdms_tools_NCRasterFile__object*,struct sidl_BaseInterface__object **)) s1->f_getClassInfo;
  epv->f_init                     = NULL;
  epv->f_open                     = NULL;
  epv->f_append                   = NULL;
  epv->f_close                    = NULL;

  edu_csdms_tools_NCRasterFile__set_epv(epv, &s_preEPV, &s_postEPV);

  /*
   * Override function pointers for edu.csdms.tools.IRasterOutputFile with mine, as needed.
   */

  e0->f__cast                 = (void* (*)(void*,const char*, struct sidl_BaseInterface__object**))epv->f__cast;
  e0->f__delete               = (void (*)(void*, struct sidl_BaseInterface__object **)) epv->f__delete;
  e0->f__getURL               = (char* (*)(void*, struct sidl_BaseInterface__object **)) epv->f__getURL;
  e0->f__raddRef              = (void (*)(void*, struct sidl_BaseInterface__object **)) epv->f__raddRef;
  e0->f__isRemote             = (sidl_bool (*)(void*, struct sidl_BaseInterface__object **)) epv->f__isRemote;
  e0->f__exec                 = (void (*)(void*,const char*,struct sidl_rmi_Call__object*,struct sidl_rmi_Return__object*,struct sidl_BaseInterface__object **)) epv->f__exec;
  e0->f_init                  = (void (*)(void*,const char*,const char*,struct sidl_int__array*,struct sidl_double__array*,struct sidl_BaseInterface__object **)) epv->f_init;
  e0->f_open                  = (void (*)(void*,const char*,struct sidl_BaseInterface__object **)) epv->f_open;
  e0->f_append                = (void (*)(void*,struct sidl__array*,struct sidl_BaseInterface__object **)) epv->f_append;
  e0->f_close                 = (void (*)(void*,struct sidl_BaseInterface__object **)) epv->f_close;
  e0->f_addRef                = (void (*)(void*,struct sidl_BaseInterface__object **)) epv->f_addRef;
  e0->f_deleteRef             = (void (*)(void*,struct sidl_BaseInterface__object **)) epv->f_deleteRef;
  e0->f_isSame                = (sidl_bool (*)(void*,struct sidl_BaseInterface__object*,struct sidl_BaseInterface__object **)) epv->f_isSame;
  e0->f_isType                = (sidl_bool (*)(void*,const char*,struct sidl_BaseInterface__object **)) epv->f_isType;
  e0->f_getClassInfo          = (struct sidl_ClassInfo__object* (*)(void*,struct sidl_BaseInterface__object **)) epv->f_getClassInfo;


  /*
   * Override function pointers for sidl.BaseClass with mine, as needed.
   */

  e1->f__cast                 = (void* (*)(struct sidl_BaseClass__object*,const char*, struct sidl_BaseInterface__object**))epv->f__cast;
  e1->f__delete               = (void (*)(struct sidl_BaseClass__object*, struct sidl_BaseInterface__object **)) epv->f__delete;
  e1->f__getURL               = (char* (*)(struct sidl_BaseClass__object*, struct sidl_BaseInterface__object **)) epv->f__getURL;
  e1->f__raddRef              = (void (*)(struct sidl_BaseClass__object*, struct sidl_BaseInterface__object **)) epv->f__raddRef;
  e1->f__isRemote             = (sidl_bool (*)(struct sidl_BaseClass__object*, struct sidl_BaseInterface__object **)) epv->f__isRemote;
  e1->f__exec                 = (void (*)(struct sidl_BaseClass__object*,const char*,struct sidl_rmi_Call__object*,struct sidl_rmi_Return__object*,struct sidl_BaseInterface__object **)) epv->f__exec;
  e1->f_addRef                = (void (*)(struct sidl_BaseClass__object*,struct sidl_BaseInterface__object **)) epv->f_addRef;
  e1->f_deleteRef             = (void (*)(struct sidl_BaseClass__object*,struct sidl_BaseInterface__object **)) epv->f_deleteRef;
  e1->f_isSame                = (sidl_bool (*)(struct sidl_BaseClass__object*,struct sidl_BaseInterface__object*,struct sidl_BaseInterface__object **)) epv->f_isSame;
  e1->f_isType                = (sidl_bool (*)(struct sidl_BaseClass__object*,const char*,struct sidl_BaseInterface__object **)) epv->f_isType;
  e1->f_getClassInfo          = (struct sidl_ClassInfo__object* (*)(struct sidl_BaseClass__object*,struct sidl_BaseInterface__object **)) epv->f_getClassInfo;


  /*
   * Override function pointers for sidl.BaseInterface with mine, as needed.
   */

  e2->f__cast                 = (void* (*)(void*,const char*, struct sidl_BaseInterface__object**))epv->f__cast;
  e2->f__delete               = (void (*)(void*, struct sidl_BaseInterface__object **)) epv->f__delete;
  e2->f__getURL               = (char* (*)(void*, struct sidl_BaseInterface__object **)) epv->f__getURL;
  e2->f__raddRef              = (void (*)(void*, struct sidl_BaseInterface__object **)) epv->f__raddRef;
  e2->f__isRemote             = (sidl_bool (*)(void*, struct sidl_BaseInterface__object **)) epv->f__isRemote;
  e2->f__exec                 = (void (*)(void*,const char*,struct sidl_rmi_Call__object*,struct sidl_rmi_Return__object*,struct sidl_BaseInterface__object **)) epv->f__exec;
  e2->f_addRef                = (void (*)(void*,struct sidl_BaseInterface__object **)) epv->f_addRef;
  e2->f_deleteRef             = (void (*)(void*,struct sidl_BaseInterface__object **)) epv->f_deleteRef;
  e2->f_isSame                = (sidl_bool (*)(void*,struct sidl_BaseInterface__object*,struct sidl_BaseInterface__object **)) epv->f_isSame;
  e2->f_isType                = (sidl_bool (*)(void*,const char*,struct sidl_BaseInterface__object **)) epv->f_isType;
  e2->f_getClassInfo          = (struct sidl_ClassInfo__object* (*)(void*,struct sidl_BaseInterface__object **)) epv->f_getClassInfo;


  s_method_initialized = 1;
  ior_edu_csdms_tools_NCRasterFile__ensure_load_called();
}

/*
 * edu_csdms_tools_NCRasterFile__getEPVs: Get my version of all relevant EPVs.
 */

void edu_csdms_tools_NCRasterFile__getEPVs (
  struct sidl_BaseInterface__epv **s_arg_epv__sidl_baseinterface,
  struct sidl_BaseClass__epv **s_arg_epv__sidl_baseclass,
  struct edu_csdms_tools_IRasterOutputFile__epv **s_arg_epv__edu_csdms_tools_irasteroutputfile,
  struct edu_csdms_tools_IRasterOutputFile__epv **s_arg_epv_hooks__edu_csdms_tools_irasteroutputfile,
  struct edu_csdms_tools_NCRasterFile__epv **s_arg_epv__edu_csdms_tools_ncrasterfile,
  struct edu_csdms_tools_NCRasterFile__epv **s_arg_epv_hooks__edu_csdms_tools_ncrasterfile)
{
  LOCK_STATIC_GLOBALS;
  if (!s_method_initialized) {
    edu_csdms_tools_NCRasterFile__init_epv();
  }
  UNLOCK_STATIC_GLOBALS;

  *s_arg_epv__sidl_baseinterface = &s_my_epv__sidl_baseinterface;
  *s_arg_epv__sidl_baseclass = &s_my_epv__sidl_baseclass;
  *s_arg_epv__edu_csdms_tools_irasteroutputfile = &s_my_epv__edu_csdms_tools_irasteroutputfile;
  *s_arg_epv_hooks__edu_csdms_tools_irasteroutputfile = &s_my_epv_hooks__edu_csdms_tools_irasteroutputfile;
  *s_arg_epv__edu_csdms_tools_ncrasterfile = &s_my_epv__edu_csdms_tools_ncrasterfile;
  *s_arg_epv_hooks__edu_csdms_tools_ncrasterfile = &s_my_epv_hooks__edu_csdms_tools_ncrasterfile;
}
/*
 * __getSuperEPV: returns parent's non-overrided EPV
 */

static struct sidl_BaseClass__epv* edu_csdms_tools_NCRasterFile__getSuperEPV(void) {
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
      sidl_ClassInfoI_setName(impl, "edu.csdms.tools.NCRasterFile", _ex);
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
initMetadata(struct edu_csdms_tools_NCRasterFile__object* self, sidl_BaseInterface* _ex)
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
 * edu_csdms_tools_NCRasterFile__createObject: Allocate the object and initialize it.
 */

struct edu_csdms_tools_NCRasterFile__object*
edu_csdms_tools_NCRasterFile__createObject(void* ddata, struct sidl_BaseInterface__object ** _ex)
{
  struct edu_csdms_tools_NCRasterFile__object* self =
    (struct edu_csdms_tools_NCRasterFile__object*) sidl_malloc(
      sizeof(struct edu_csdms_tools_NCRasterFile__object),
      "Object allocation failed for struct edu_csdms_tools_NCRasterFile__object",
        __FILE__, __LINE__, "edu_csdms_tools_NCRasterFile__createObject", _ex);
  if (!self) goto EXIT;
  edu_csdms_tools_NCRasterFile__init(self, ddata, _ex); SIDL_CHECK(*_ex);
  initMetadata(self, _ex); SIDL_CHECK(*_ex);
  return self;

  EXIT:
  return NULL;
}

/*
 * INIT: initialize a new instance of the class object.
 */

void edu_csdms_tools_NCRasterFile__init(
  struct edu_csdms_tools_NCRasterFile__object* self,
   void* ddata,
  struct sidl_BaseInterface__object **_ex)
{
  struct edu_csdms_tools_NCRasterFile__object* s0 = self;
  struct sidl_BaseClass__object*               s1 = &s0->d_sidl_baseclass;

  *_ex = 0; /* default no exception */
  LOCK_STATIC_GLOBALS;
  if (!s_method_initialized) {
    edu_csdms_tools_NCRasterFile__init_epv();
  }
  UNLOCK_STATIC_GLOBALS;

  sidl_BaseClass__init(s1, NULL, _ex); SIDL_CHECK(*_ex);

  s1->d_sidl_baseinterface.d_epv = &s_my_epv__sidl_baseinterface;
  s1->d_epv                      = &s_my_epv__sidl_baseclass;

  s0->d_edu_csdms_tools_irasteroutputfile.d_epv = &s_my_epv__edu_csdms_tools_irasteroutputfile;
  s0->d_epv                                     = &s_my_epv__edu_csdms_tools_ncrasterfile;

  s0->d_edu_csdms_tools_irasteroutputfile.d_object = self;

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

void edu_csdms_tools_NCRasterFile__fini(
  struct edu_csdms_tools_NCRasterFile__object* self,
  struct sidl_BaseInterface__object **_ex)
{
  struct edu_csdms_tools_NCRasterFile__object* s0 = self;
  struct sidl_BaseClass__object*               s1 = &s0->d_sidl_baseclass;

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
edu_csdms_tools_NCRasterFile__IOR_version(int32_t *major, int32_t *minor)
{
  *major = s_IOR_MAJOR_VERSION;
  *minor = s_IOR_MINOR_VERSION;
}

static const struct edu_csdms_tools_NCRasterFile__external
s_externalEntryPoints = {
  edu_csdms_tools_NCRasterFile__createObject,
  edu_csdms_tools_NCRasterFile__getSuperEPV,
  2, 
  0
};

/*
 * This function returns a pointer to a static structure of
 * pointers to function entry points.  Its purpose is to provide
 * one-stop shopping for loading DLLs.
 */

const struct edu_csdms_tools_NCRasterFile__external*
edu_csdms_tools_NCRasterFile__externals(void)
{
  return &s_externalEntryPoints;
}

