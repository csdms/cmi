/*
 * File:          edu_csdms_openmi_ValueSet_jniStub.c
 * Symbol:        edu.csdms.openmi.ValueSet-v0.0
 * Symbol Type:   class
 * Babel Version: 1.4.0 (Revision: 6607 release-1-4-0-branch)
 * Description:   Client-side JNI glue code for edu.csdms.openmi.ValueSet
 * 
 * WARNING: Automatically generated; changes will be lost
 * 
 */

#include "sidl_Java.h"
#include "sidl_Loader.h"
#include "sidl_String.h"
#include "edu_csdms_openmi_ValueSet_IOR.h"
#include "babel_config.h"
/*
 * Includes for all method dependencies.
 */

#ifndef included_edu_csdms_openmi_IValueSet_jniStub_h
#include "edu_csdms_openmi_IValueSet_jniStub.h"
#endif
#ifndef included_edu_csdms_openmi_ValueSet_jniStub_h
#include "edu_csdms_openmi_ValueSet_jniStub.h"
#endif
#ifndef included_sidl_BaseClass_jniStub_h
#include "sidl_BaseClass_jniStub.h"
#endif
#ifndef included_sidl_BaseInterface_jniStub_h
#include "sidl_BaseInterface_jniStub.h"
#endif
#ifndef included_sidl_ClassInfo_jniStub_h
#include "sidl_ClassInfo_jniStub.h"
#endif
#ifndef included_sidl_RuntimeException_jniStub_h
#include "sidl_RuntimeException_jniStub.h"
#endif

/*
 * Convert between jlong and void* pointers.
 */

#if (SIZEOF_VOID_P == 8)
#define JLONG_TO_POINTER(x) ((void*)(x))
#define POINTER_TO_JLONG(x) ((jlong)(x))
#else
#define JLONG_TO_POINTER(x) ((void*)(int32_t)(x))
#define POINTER_TO_JLONG(x) ((jlong)(int32_t)(x))
#endif

#ifndef NULL
#define NULL 0
#endif


#define LANG_SPECIFIC_INIT()

#ifdef WITH_RMI

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#ifndef included_sidl_BaseClass_h
#include "sidl_BaseClass.h"
#endif
#ifndef included_sidl_ClassInfo_h
#include "sidl_ClassInfo.h"
#endif
#ifndef included_sidl_rmi_ProtocolFactory_h
#include "sidl_rmi_ProtocolFactory.h"
#endif
#ifndef included_sidl_rmi_InstanceRegistry_h
#include "sidl_rmi_InstanceRegistry.h"
#endif
#ifndef included_sidl_rmi_InstanceHandle_h
#include "sidl_rmi_InstanceHandle.h"
#endif
#ifndef included_sidl_rmi_Invocation_h
#include "sidl_rmi_Invocation.h"
#endif
#ifndef included_sidl_rmi_Response_h
#include "sidl_rmi_Response.h"
#endif
#ifndef included_sidl_rmi_ServerRegistry_h
#include "sidl_rmi_ServerRegistry.h"
#endif
#ifndef included_sidl_rmi_ConnectRegistry_h
#include "sidl_rmi_ConnectRegistry.h"
#endif
#ifndef included_sidl_io_Serializable_h
#include "sidl_io_Serializable.h"
#endif
#ifndef included_sidl_MemAllocException_h
#include "sidl_MemAllocException.h"
#endif
#ifndef included_sidl_NotImplementedException_h
#include "sidl_NotImplementedException.h"
#endif
#include "sidl_Exception.h"

#ifndef NULL
#define NULL 0
#endif

#include "sidl_thread.h"
#ifdef HAVE_PTHREAD
static struct sidl_recursive_mutex_t edu_csdms_openmi_ValueSet__mutex= SIDL_RECURSIVE_MUTEX_INITIALIZER;
#define LOCK_STATIC_GLOBALS sidl_recursive_mutex_lock( &edu_csdms_openmi_ValueSet__mutex )
#define UNLOCK_STATIC_GLOBALS sidl_recursive_mutex_unlock( &edu_csdms_openmi_ValueSet__mutex )
/* #define HAVE_LOCKED_STATIC_GLOBALS (sidl_recursive_mutex_trylock( &edu_csdms_openmi_ValueSet__mutex )==EDEADLOCK) */
#else
#define LOCK_STATIC_GLOBALS
#define UNLOCK_STATIC_GLOBALS
/* #define HAVE_LOCKED_STATIC_GLOBALS (1) */
#endif

/* Static variables to hold version of IOR */
static const int32_t s_IOR_MAJOR_VERSION = 2;
static const int32_t s_IOR_MINOR_VERSION = 0;

/* Static variables for managing EPV initialization. */
static int s_remote_initialized = 0;

static struct edu_csdms_openmi_ValueSet__epv 
  s_rem_epv__edu_csdms_openmi_valueset;

static struct edu_csdms_openmi_IValueSet__epv 
  s_rem_epv__edu_csdms_openmi_ivalueset;

static struct sidl_BaseClass__epv  s_rem_epv__sidl_baseclass;

static struct sidl_BaseInterface__epv  s_rem_epv__sidl_baseinterface;


/* REMOTE CAST: dynamic type casting for remote objects. */
static void* remote_edu_csdms_openmi_ValueSet__cast(
  struct edu_csdms_openmi_ValueSet__object* self,
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
    cmp = strcmp(name, "edu.csdms.openmi.ValueSet");
    if (!cmp) {
      (*self->d_epv->f_addRef)(self, _ex); SIDL_CHECK(*_ex);
      cast = ((struct edu_csdms_openmi_ValueSet__object*)self);
      return cast;
    }
    else if (cmp < 0) {
      cmp = strcmp(name, "edu.csdms.openmi.IValueSet");
      if (!cmp) {
        (*self->d_epv->f_addRef)(self, _ex); SIDL_CHECK(*_ex);
        cast = &((*self).d_edu_csdms_openmi_ivalueset);
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
  if ((*self->d_epv->f_isType)(self,name, _ex)) {
    void* (*func)(struct sidl_rmi_InstanceHandle__object*, struct 
      sidl_BaseInterface__object**) = 
      (void* (*)(struct sidl_rmi_InstanceHandle__object*, struct 
        sidl_BaseInterface__object**)) 
      sidl_rmi_ConnectRegistry_getConnect(name, _ex);SIDL_CHECK(*_ex);
    cast =  (*func)(((struct 
      edu_csdms_openmi_ValueSet__remote*)self->d_data)->d_ih, _ex);
  }

  return cast;
  EXIT:
  return NULL;
}

/* REMOTE DELETE: call the remote destructor for the object. */
static void remote_edu_csdms_openmi_ValueSet__delete(
  struct edu_csdms_openmi_ValueSet__object* self,
  struct sidl_BaseInterface__object* *_ex)
{
  *_ex = NULL;
  free((void*) self);
}

/* REMOTE GETURL: call the getURL function for the object. */
static char* remote_edu_csdms_openmi_ValueSet__getURL(
  struct edu_csdms_openmi_ValueSet__object* self, struct 
    sidl_BaseInterface__object* *_ex)
{
  struct sidl_rmi_InstanceHandle__object *conn = ((struct 
    edu_csdms_openmi_ValueSet__remote*)self->d_data)->d_ih;
  *_ex = NULL;
  if(conn != NULL) {
    return sidl_rmi_InstanceHandle_getObjectURL(conn, _ex);
  }
  return NULL;
}

/* REMOTE ADDREF: For internal babel use only! Remote addRef. */
static void remote_edu_csdms_openmi_ValueSet__raddRef(
  struct edu_csdms_openmi_ValueSet__object* self,struct 
    sidl_BaseInterface__object* *_ex)
{
  struct sidl_BaseException__object* netex = NULL;
  /* initialize a new invocation */
  struct sidl_BaseInterface__object* _throwaway = NULL;
  struct sidl_rmi_InstanceHandle__object *_conn = ((struct 
    edu_csdms_openmi_ValueSet__remote*)self->d_data)->d_ih;
  sidl_rmi_Response _rsvp = NULL;
  sidl_rmi_Invocation _inv = sidl_rmi_InstanceHandle_createInvocation( _conn, 
    "addRef", _ex ); SIDL_CHECK(*_ex);
  /* send actual RMI request */
  _rsvp = sidl_rmi_Invocation_invokeMethod(_inv,_ex);SIDL_CHECK(*_ex);
  /* Check for exceptions */
  netex = sidl_rmi_Response_getExceptionThrown(_rsvp, _ex);
  if(netex != NULL) {
    *_ex = (struct sidl_BaseInterface__object*)netex;
    return;
  }

  /* cleanup and return */
  EXIT:
  if(_inv) { sidl_rmi_Invocation_deleteRef(_inv,&_throwaway); }
  if(_rsvp) { sidl_rmi_Response_deleteRef(_rsvp,&_throwaway); }
  return;
}

/* REMOTE ISREMOTE: returns true if this object is Remote (it is). */
static sidl_bool
remote_edu_csdms_openmi_ValueSet__isRemote(
    struct edu_csdms_openmi_ValueSet__object* self, 
    struct sidl_BaseInterface__object* *_ex) {
  *_ex = NULL;
  return TRUE;
}

/* REMOTE METHOD STUB:_set_hooks */
static void
remote_edu_csdms_openmi_ValueSet__set_hooks(
  /* in */ struct edu_csdms_openmi_ValueSet__object*self ,
  /* in */ sidl_bool enable,
  /* out */ struct sidl_BaseInterface__object **_ex)
{
  LANG_SPECIFIC_INIT();
  *_ex = NULL;
  {
    /* initialize a new invocation */
    struct sidl_BaseInterface__object* _throwaway = NULL;
    sidl_BaseException _be = NULL;
    sidl_rmi_Response _rsvp = NULL;
    struct sidl_rmi_InstanceHandle__object * _conn = ((struct 
      edu_csdms_openmi_ValueSet__remote*)self->d_data)->d_ih;
    sidl_rmi_Invocation _inv = sidl_rmi_InstanceHandle_createInvocation( _conn, 
      "_set_hooks", _ex ); SIDL_CHECK(*_ex);

    /* pack in and inout arguments */
    sidl_rmi_Invocation_packBool( _inv, "enable", enable, _ex);SIDL_CHECK(*_ex);

    /* send actual RMI request */
    _rsvp = sidl_rmi_Invocation_invokeMethod(_inv, _ex);SIDL_CHECK(*_ex);

    _be = sidl_rmi_Response_getExceptionThrown(_rsvp, _ex);SIDL_CHECK(*_ex);
    if (_be != NULL) {
      struct sidl_BaseInterface__object* throwaway_exception = NULL;
      sidl_BaseException_addLine(_be, 
      "Exception unserialized from edu.csdms.openmi.ValueSet._set_hooks.",
        &throwaway_exception);
      *_ex = (struct sidl_BaseInterface__object*) sidl_BaseInterface__cast(_be,
        &throwaway_exception);
      goto EXIT;
    }

    /* unpack out and inout arguments */

    /* cleanup and return */
    EXIT:
    if(_inv) { sidl_rmi_Invocation_deleteRef(_inv, &_throwaway); }
    if(_rsvp) { sidl_rmi_Response_deleteRef(_rsvp, &_throwaway); }
    return;
  }
}

/* Contract enforcement has not been implemented for remote use. */
/* REMOTE METHOD STUB:_set_contracts */
static void
remote_edu_csdms_openmi_ValueSet__set_contracts(
  /* in */ struct edu_csdms_openmi_ValueSet__object*self ,
  /* in */ sidl_bool enable,
  /* in */ const char* enfFilename,
  /* in */ sidl_bool resetCounters,
  /* out */ struct sidl_BaseInterface__object **_ex)
{
  LANG_SPECIFIC_INIT();
  *_ex = NULL;
  {
    /* initialize a new invocation */
    struct sidl_BaseInterface__object* _throwaway = NULL;
    sidl_BaseException _be = NULL;
    sidl_rmi_Response _rsvp = NULL;
    struct sidl_rmi_InstanceHandle__object * _conn = ((struct 
      edu_csdms_openmi_ValueSet__remote*)self->d_data)->d_ih;
    sidl_rmi_Invocation _inv = sidl_rmi_InstanceHandle_createInvocation( _conn, 
      "_set_contracts", _ex ); SIDL_CHECK(*_ex);

    /* pack in and inout arguments */
    sidl_rmi_Invocation_packBool( _inv, "enable", enable, _ex);SIDL_CHECK(*_ex);
    sidl_rmi_Invocation_packString( _inv, "enfFilename", enfFilename, 
      _ex);SIDL_CHECK(*_ex);
    sidl_rmi_Invocation_packBool( _inv, "resetCounters", resetCounters, 
      _ex);SIDL_CHECK(*_ex);

    /* send actual RMI request */
    _rsvp = sidl_rmi_Invocation_invokeMethod(_inv, _ex);SIDL_CHECK(*_ex);

    _be = sidl_rmi_Response_getExceptionThrown(_rsvp, _ex);SIDL_CHECK(*_ex);
    if (_be != NULL) {
      struct sidl_BaseInterface__object* throwaway_exception = NULL;
      sidl_BaseException_addLine(_be, 
      "Exception unserialized from edu.csdms.openmi.ValueSet._set_contracts.",
        &throwaway_exception);
      *_ex = (struct sidl_BaseInterface__object*) sidl_BaseInterface__cast(_be,
        &throwaway_exception);
      goto EXIT;
    }

    /* unpack out and inout arguments */

    /* cleanup and return */
    EXIT:
    if(_inv) { sidl_rmi_Invocation_deleteRef(_inv, &_throwaway); }
    if(_rsvp) { sidl_rmi_Response_deleteRef(_rsvp, &_throwaway); }
    return;
  }
}

/* Contract enforcement has not been implemented for remote use. */
/* REMOTE METHOD STUB:_dump_stats */
static void
remote_edu_csdms_openmi_ValueSet__dump_stats(
  /* in */ struct edu_csdms_openmi_ValueSet__object*self ,
  /* in */ const char* filename,
  /* in */ const char* prefix,
  /* out */ struct sidl_BaseInterface__object **_ex)
{
  LANG_SPECIFIC_INIT();
  *_ex = NULL;
  {
    /* initialize a new invocation */
    struct sidl_BaseInterface__object* _throwaway = NULL;
    sidl_BaseException _be = NULL;
    sidl_rmi_Response _rsvp = NULL;
    struct sidl_rmi_InstanceHandle__object * _conn = ((struct 
      edu_csdms_openmi_ValueSet__remote*)self->d_data)->d_ih;
    sidl_rmi_Invocation _inv = sidl_rmi_InstanceHandle_createInvocation( _conn, 
      "_dump_stats", _ex ); SIDL_CHECK(*_ex);

    /* pack in and inout arguments */
    sidl_rmi_Invocation_packString( _inv, "filename", filename, _ex);SIDL_CHECK(
      *_ex);
    sidl_rmi_Invocation_packString( _inv, "prefix", prefix, _ex);SIDL_CHECK(
      *_ex);

    /* send actual RMI request */
    _rsvp = sidl_rmi_Invocation_invokeMethod(_inv, _ex);SIDL_CHECK(*_ex);

    _be = sidl_rmi_Response_getExceptionThrown(_rsvp, _ex);SIDL_CHECK(*_ex);
    if (_be != NULL) {
      struct sidl_BaseInterface__object* throwaway_exception = NULL;
      sidl_BaseException_addLine(_be, 
      "Exception unserialized from edu.csdms.openmi.ValueSet._dump_stats.",
        &throwaway_exception);
      *_ex = (struct sidl_BaseInterface__object*) sidl_BaseInterface__cast(_be,
        &throwaway_exception);
      goto EXIT;
    }

    /* unpack out and inout arguments */

    /* cleanup and return */
    EXIT:
    if(_inv) { sidl_rmi_Invocation_deleteRef(_inv, &_throwaway); }
    if(_rsvp) { sidl_rmi_Response_deleteRef(_rsvp, &_throwaway); }
    return;
  }
}

/* REMOTE EXEC: call the exec function for the object. */
static void remote_edu_csdms_openmi_ValueSet__exec(
  struct edu_csdms_openmi_ValueSet__object* self,const char* methodName,
  sidl_rmi_Call inArgs,
  sidl_rmi_Return outArgs,
  struct sidl_BaseInterface__object* *_ex)
{
  *_ex = NULL;
}

/* REMOTE METHOD STUB:setData */
static void
remote_edu_csdms_openmi_ValueSet_setData(
  /* in */ struct edu_csdms_openmi_ValueSet__object*self ,
  /* in array<double> */ struct sidl_double__array* values,
  /* out */ struct sidl_BaseInterface__object **_ex)
{
  LANG_SPECIFIC_INIT();
  *_ex = NULL;
  {
    /* initialize a new invocation */
    struct sidl_BaseInterface__object* _throwaway = NULL;
    sidl_BaseException _be = NULL;
    sidl_rmi_Response _rsvp = NULL;
    struct sidl_rmi_InstanceHandle__object * _conn = ((struct 
      edu_csdms_openmi_ValueSet__remote*)self->d_data)->d_ih;
    sidl_rmi_Invocation _inv = sidl_rmi_InstanceHandle_createInvocation( _conn, 
      "setData", _ex ); SIDL_CHECK(*_ex);

    /* pack in and inout arguments */
    sidl_rmi_Invocation_packDoubleArray( _inv, "values",values,0,0,0, 
      _ex);SIDL_CHECK(*_ex);

    /* send actual RMI request */
    _rsvp = sidl_rmi_Invocation_invokeMethod(_inv, _ex);SIDL_CHECK(*_ex);

    _be = sidl_rmi_Response_getExceptionThrown(_rsvp, _ex);SIDL_CHECK(*_ex);
    if (_be != NULL) {
      struct sidl_BaseInterface__object* throwaway_exception = NULL;
      sidl_BaseException_addLine(_be, 
      "Exception unserialized from edu.csdms.openmi.ValueSet.setData.",
        &throwaway_exception);
      *_ex = (struct sidl_BaseInterface__object*) sidl_BaseInterface__cast(_be,
        &throwaway_exception);
      goto EXIT;
    }

    /* unpack out and inout arguments */

    /* cleanup and return */
    EXIT:
    if(_inv) { sidl_rmi_Invocation_deleteRef(_inv, &_throwaway); }
    if(_rsvp) { sidl_rmi_Response_deleteRef(_rsvp, &_throwaway); }
    return;
  }
}

/* REMOTE METHOD STUB:setValue */
static void
remote_edu_csdms_openmi_ValueSet_setValue(
  /* in */ struct edu_csdms_openmi_ValueSet__object*self ,
  /* in */ int32_t index,
  /* in */ double value,
  /* out */ struct sidl_BaseInterface__object **_ex)
{
  LANG_SPECIFIC_INIT();
  *_ex = NULL;
  {
    /* initialize a new invocation */
    struct sidl_BaseInterface__object* _throwaway = NULL;
    sidl_BaseException _be = NULL;
    sidl_rmi_Response _rsvp = NULL;
    struct sidl_rmi_InstanceHandle__object * _conn = ((struct 
      edu_csdms_openmi_ValueSet__remote*)self->d_data)->d_ih;
    sidl_rmi_Invocation _inv = sidl_rmi_InstanceHandle_createInvocation( _conn, 
      "setValue", _ex ); SIDL_CHECK(*_ex);

    /* pack in and inout arguments */
    sidl_rmi_Invocation_packInt( _inv, "index", index, _ex);SIDL_CHECK(*_ex);
    sidl_rmi_Invocation_packDouble( _inv, "value", value, _ex);SIDL_CHECK(*_ex);

    /* send actual RMI request */
    _rsvp = sidl_rmi_Invocation_invokeMethod(_inv, _ex);SIDL_CHECK(*_ex);

    _be = sidl_rmi_Response_getExceptionThrown(_rsvp, _ex);SIDL_CHECK(*_ex);
    if (_be != NULL) {
      struct sidl_BaseInterface__object* throwaway_exception = NULL;
      sidl_BaseException_addLine(_be, 
      "Exception unserialized from edu.csdms.openmi.ValueSet.setValue.",
        &throwaway_exception);
      *_ex = (struct sidl_BaseInterface__object*) sidl_BaseInterface__cast(_be,
        &throwaway_exception);
      goto EXIT;
    }

    /* unpack out and inout arguments */

    /* cleanup and return */
    EXIT:
    if(_inv) { sidl_rmi_Invocation_deleteRef(_inv, &_throwaway); }
    if(_rsvp) { sidl_rmi_Response_deleteRef(_rsvp, &_throwaway); }
    return;
  }
}

/* REMOTE METHOD STUB:getValue */
static double
remote_edu_csdms_openmi_ValueSet_getValue(
  /* in */ struct edu_csdms_openmi_ValueSet__object*self ,
  /* in */ int32_t index,
  /* out */ struct sidl_BaseInterface__object **_ex)
{
  LANG_SPECIFIC_INIT();
  *_ex = NULL;
  {
    /* initialize a new invocation */
    struct sidl_BaseInterface__object* _throwaway = NULL;
    sidl_BaseException _be = NULL;
    sidl_rmi_Response _rsvp = NULL;
    double _retval = 0;
    struct sidl_rmi_InstanceHandle__object * _conn = ((struct 
      edu_csdms_openmi_ValueSet__remote*)self->d_data)->d_ih;
    sidl_rmi_Invocation _inv = sidl_rmi_InstanceHandle_createInvocation( _conn, 
      "getValue", _ex ); SIDL_CHECK(*_ex);

    /* pack in and inout arguments */
    sidl_rmi_Invocation_packInt( _inv, "index", index, _ex);SIDL_CHECK(*_ex);

    /* send actual RMI request */
    _rsvp = sidl_rmi_Invocation_invokeMethod(_inv, _ex);SIDL_CHECK(*_ex);

    _be = sidl_rmi_Response_getExceptionThrown(_rsvp, _ex);SIDL_CHECK(*_ex);
    if (_be != NULL) {
      struct sidl_BaseInterface__object* throwaway_exception = NULL;
      sidl_BaseException_addLine(_be, 
      "Exception unserialized from edu.csdms.openmi.ValueSet.getValue.",
        &throwaway_exception);
      *_ex = (struct sidl_BaseInterface__object*) sidl_BaseInterface__cast(_be,
        &throwaway_exception);
      goto EXIT;
    }

    /* extract return value */
    sidl_rmi_Response_unpackDouble( _rsvp, "_retval", &_retval, _ex);SIDL_CHECK(
      *_ex);

    /* unpack out and inout arguments */

    /* cleanup and return */
    EXIT:
    if(_inv) { sidl_rmi_Invocation_deleteRef(_inv, &_throwaway); }
    if(_rsvp) { sidl_rmi_Response_deleteRef(_rsvp, &_throwaway); }
    return _retval;
  }
}

/* REMOTE METHOD STUB:setRasterGrid */
static void
remote_edu_csdms_openmi_ValueSet_setRasterGrid(
  /* in */ struct edu_csdms_openmi_ValueSet__object*self ,
  /* in array<double,2> */ struct sidl_double__array* grid,
  /* out */ struct sidl_BaseInterface__object **_ex)
{
  LANG_SPECIFIC_INIT();
  *_ex = NULL;
  {
    /* initialize a new invocation */
    struct sidl_BaseInterface__object* _throwaway = NULL;
    sidl_BaseException _be = NULL;
    sidl_rmi_Response _rsvp = NULL;
    struct sidl_rmi_InstanceHandle__object * _conn = ((struct 
      edu_csdms_openmi_ValueSet__remote*)self->d_data)->d_ih;
    sidl_rmi_Invocation _inv = sidl_rmi_InstanceHandle_createInvocation( _conn, 
      "setRasterGrid", _ex ); SIDL_CHECK(*_ex);

    /* pack in and inout arguments */
    sidl_rmi_Invocation_packDoubleArray( _inv, "grid",grid,0,0,0, 
      _ex);SIDL_CHECK(*_ex);

    /* send actual RMI request */
    _rsvp = sidl_rmi_Invocation_invokeMethod(_inv, _ex);SIDL_CHECK(*_ex);

    _be = sidl_rmi_Response_getExceptionThrown(_rsvp, _ex);SIDL_CHECK(*_ex);
    if (_be != NULL) {
      struct sidl_BaseInterface__object* throwaway_exception = NULL;
      sidl_BaseException_addLine(_be, 
      "Exception unserialized from edu.csdms.openmi.ValueSet.setRasterGrid.",
        &throwaway_exception);
      *_ex = (struct sidl_BaseInterface__object*) sidl_BaseInterface__cast(_be,
        &throwaway_exception);
      goto EXIT;
    }

    /* unpack out and inout arguments */

    /* cleanup and return */
    EXIT:
    if(_inv) { sidl_rmi_Invocation_deleteRef(_inv, &_throwaway); }
    if(_rsvp) { sidl_rmi_Response_deleteRef(_rsvp, &_throwaway); }
    return;
  }
}

/* REMOTE METHOD STUB:boccaForceUsePortInclude */
static void
remote_edu_csdms_openmi_ValueSet_boccaForceUsePortInclude(
  /* in */ struct edu_csdms_openmi_ValueSet__object*self ,
  /* out */ struct sidl_BaseInterface__object **_ex)
{
  LANG_SPECIFIC_INIT();
  *_ex = NULL;
  {
    /* initialize a new invocation */
    struct sidl_BaseInterface__object* _throwaway = NULL;
    sidl_BaseException _be = NULL;
    sidl_rmi_Response _rsvp = NULL;
    struct sidl_rmi_InstanceHandle__object * _conn = ((struct 
      edu_csdms_openmi_ValueSet__remote*)self->d_data)->d_ih;
    sidl_rmi_Invocation _inv = sidl_rmi_InstanceHandle_createInvocation( _conn, 
      "boccaForceUsePortInclude", _ex ); SIDL_CHECK(*_ex);

    /* pack in and inout arguments */

    /* send actual RMI request */
    _rsvp = sidl_rmi_Invocation_invokeMethod(_inv, _ex);SIDL_CHECK(*_ex);

    _be = sidl_rmi_Response_getExceptionThrown(_rsvp, _ex);SIDL_CHECK(*_ex);
    if (_be != NULL) {
      struct sidl_BaseInterface__object* throwaway_exception = NULL;
      sidl_BaseException_addLine(_be, 
      "Exception unserialized from edu.csdms.openmi.ValueSet.boccaForceUsePortInclude.",
        &throwaway_exception);
      *_ex = (struct sidl_BaseInterface__object*) sidl_BaseInterface__cast(_be,
        &throwaway_exception);
      goto EXIT;
    }

    /* unpack out and inout arguments */

    /* cleanup and return */
    EXIT:
    if(_inv) { sidl_rmi_Invocation_deleteRef(_inv, &_throwaway); }
    if(_rsvp) { sidl_rmi_Response_deleteRef(_rsvp, &_throwaway); }
    return;
  }
}

/* REMOTE METHOD STUB:addRef */
static void
remote_edu_csdms_openmi_ValueSet_addRef(
  /* in */ struct edu_csdms_openmi_ValueSet__object*self ,
  /* out */ struct sidl_BaseInterface__object **_ex)
{
  LANG_SPECIFIC_INIT();
  *_ex = NULL;
  {
    struct edu_csdms_openmi_ValueSet__remote* r_obj = (struct 
      edu_csdms_openmi_ValueSet__remote*)self->d_data;
    LOCK_STATIC_GLOBALS;
    r_obj->d_refcount++;
#ifdef SIDL_DEBUG_REFCOUNT
    fprintf(stderr, "babel: addRef %p new count %d (type %s)\n",
      r_obj, r_obj->d_refcount, 
      "edu.csdms.openmi.ValueSet Remote Stub");
#endif /* SIDL_DEBUG_REFCOUNT */ 
    UNLOCK_STATIC_GLOBALS;
  }
}

/* REMOTE METHOD STUB:deleteRef */
static void
remote_edu_csdms_openmi_ValueSet_deleteRef(
  /* in */ struct edu_csdms_openmi_ValueSet__object*self ,
  /* out */ struct sidl_BaseInterface__object **_ex)
{
  LANG_SPECIFIC_INIT();
  *_ex = NULL;
  {
    struct edu_csdms_openmi_ValueSet__remote* r_obj = (struct 
      edu_csdms_openmi_ValueSet__remote*)self->d_data;
    LOCK_STATIC_GLOBALS;
    r_obj->d_refcount--;
#ifdef SIDL_DEBUG_REFCOUNT
    fprintf(stderr, "babel: deleteRef %p new count %d (type %s)\n",r_obj, r_obj->d_refcount, "edu.csdms.openmi.ValueSet Remote Stub");
#endif /* SIDL_DEBUG_REFCOUNT */ 
    if(r_obj->d_refcount == 0) {
      sidl_rmi_InstanceHandle_deleteRef(r_obj->d_ih, _ex);
      free(r_obj);
      free(self);
    }
    UNLOCK_STATIC_GLOBALS;
  }
}

/* REMOTE METHOD STUB:isSame */
static sidl_bool
remote_edu_csdms_openmi_ValueSet_isSame(
  /* in */ struct edu_csdms_openmi_ValueSet__object*self ,
  /* in */ struct sidl_BaseInterface__object* iobj,
  /* out */ struct sidl_BaseInterface__object **_ex)
{
  LANG_SPECIFIC_INIT();
  *_ex = NULL;
  {
    /* initialize a new invocation */
    struct sidl_BaseInterface__object* _throwaway = NULL;
    sidl_BaseException _be = NULL;
    sidl_rmi_Response _rsvp = NULL;
    sidl_bool _retval = FALSE;
    struct sidl_rmi_InstanceHandle__object * _conn = ((struct 
      edu_csdms_openmi_ValueSet__remote*)self->d_data)->d_ih;
    sidl_rmi_Invocation _inv = sidl_rmi_InstanceHandle_createInvocation( _conn, 
      "isSame", _ex ); SIDL_CHECK(*_ex);

    /* pack in and inout arguments */
    if(iobj){
      char* _url = sidl_BaseInterface__getURL((sidl_BaseInterface)iobj, 
        _ex);SIDL_CHECK(*_ex);
      sidl_rmi_Invocation_packString( _inv, "iobj", _url, _ex);SIDL_CHECK(*_ex);
      free((void*)_url);
    } else {
      sidl_rmi_Invocation_packString( _inv, "iobj", NULL, _ex);SIDL_CHECK(*_ex);
    }

    /* send actual RMI request */
    _rsvp = sidl_rmi_Invocation_invokeMethod(_inv, _ex);SIDL_CHECK(*_ex);

    _be = sidl_rmi_Response_getExceptionThrown(_rsvp, _ex);SIDL_CHECK(*_ex);
    if (_be != NULL) {
      struct sidl_BaseInterface__object* throwaway_exception = NULL;
      sidl_BaseException_addLine(_be, 
      "Exception unserialized from edu.csdms.openmi.ValueSet.isSame.",
        &throwaway_exception);
      *_ex = (struct sidl_BaseInterface__object*) sidl_BaseInterface__cast(_be,
        &throwaway_exception);
      goto EXIT;
    }

    /* extract return value */
    sidl_rmi_Response_unpackBool( _rsvp, "_retval", &_retval, _ex);SIDL_CHECK(
      *_ex);

    /* unpack out and inout arguments */

    /* cleanup and return */
    EXIT:
    if(_inv) { sidl_rmi_Invocation_deleteRef(_inv, &_throwaway); }
    if(_rsvp) { sidl_rmi_Response_deleteRef(_rsvp, &_throwaway); }
    return _retval;
  }
}

/* REMOTE METHOD STUB:isType */
static sidl_bool
remote_edu_csdms_openmi_ValueSet_isType(
  /* in */ struct edu_csdms_openmi_ValueSet__object*self ,
  /* in */ const char* name,
  /* out */ struct sidl_BaseInterface__object **_ex)
{
  LANG_SPECIFIC_INIT();
  *_ex = NULL;
  {
    /* initialize a new invocation */
    struct sidl_BaseInterface__object* _throwaway = NULL;
    sidl_BaseException _be = NULL;
    sidl_rmi_Response _rsvp = NULL;
    sidl_bool _retval = FALSE;
    struct sidl_rmi_InstanceHandle__object * _conn = ((struct 
      edu_csdms_openmi_ValueSet__remote*)self->d_data)->d_ih;
    sidl_rmi_Invocation _inv = sidl_rmi_InstanceHandle_createInvocation( _conn, 
      "isType", _ex ); SIDL_CHECK(*_ex);

    /* pack in and inout arguments */
    sidl_rmi_Invocation_packString( _inv, "name", name, _ex);SIDL_CHECK(*_ex);

    /* send actual RMI request */
    _rsvp = sidl_rmi_Invocation_invokeMethod(_inv, _ex);SIDL_CHECK(*_ex);

    _be = sidl_rmi_Response_getExceptionThrown(_rsvp, _ex);SIDL_CHECK(*_ex);
    if (_be != NULL) {
      struct sidl_BaseInterface__object* throwaway_exception = NULL;
      sidl_BaseException_addLine(_be, 
      "Exception unserialized from edu.csdms.openmi.ValueSet.isType.",
        &throwaway_exception);
      *_ex = (struct sidl_BaseInterface__object*) sidl_BaseInterface__cast(_be,
        &throwaway_exception);
      goto EXIT;
    }

    /* extract return value */
    sidl_rmi_Response_unpackBool( _rsvp, "_retval", &_retval, _ex);SIDL_CHECK(
      *_ex);

    /* unpack out and inout arguments */

    /* cleanup and return */
    EXIT:
    if(_inv) { sidl_rmi_Invocation_deleteRef(_inv, &_throwaway); }
    if(_rsvp) { sidl_rmi_Response_deleteRef(_rsvp, &_throwaway); }
    return _retval;
  }
}

/* REMOTE METHOD STUB:getClassInfo */
static struct sidl_ClassInfo__object*
remote_edu_csdms_openmi_ValueSet_getClassInfo(
  /* in */ struct edu_csdms_openmi_ValueSet__object*self ,
  /* out */ struct sidl_BaseInterface__object **_ex)
{
  LANG_SPECIFIC_INIT();
  *_ex = NULL;
  {
    /* initialize a new invocation */
    struct sidl_BaseInterface__object* _throwaway = NULL;
    sidl_BaseException _be = NULL;
    sidl_rmi_Response _rsvp = NULL;
    char*_retval_str = NULL;
    struct sidl_ClassInfo__object* _retval = 0;
    struct sidl_rmi_InstanceHandle__object * _conn = ((struct 
      edu_csdms_openmi_ValueSet__remote*)self->d_data)->d_ih;
    sidl_rmi_Invocation _inv = sidl_rmi_InstanceHandle_createInvocation( _conn, 
      "getClassInfo", _ex ); SIDL_CHECK(*_ex);

    /* pack in and inout arguments */

    /* send actual RMI request */
    _rsvp = sidl_rmi_Invocation_invokeMethod(_inv, _ex);SIDL_CHECK(*_ex);

    _be = sidl_rmi_Response_getExceptionThrown(_rsvp, _ex);SIDL_CHECK(*_ex);
    if (_be != NULL) {
      struct sidl_BaseInterface__object* throwaway_exception = NULL;
      sidl_BaseException_addLine(_be, 
      "Exception unserialized from edu.csdms.openmi.ValueSet.getClassInfo.",
        &throwaway_exception);
      *_ex = (struct sidl_BaseInterface__object*) sidl_BaseInterface__cast(_be,
        &throwaway_exception);
      goto EXIT;
    }

    /* extract return value */
    sidl_rmi_Response_unpackString( _rsvp, "_retval", &_retval_str, 
      _ex);SIDL_CHECK(*_ex);
    _retval = sidl_ClassInfo__connectI(_retval_str, FALSE, _ex);SIDL_CHECK(
      *_ex);

    /* unpack out and inout arguments */

    /* cleanup and return */
    EXIT:
    if(_inv) { sidl_rmi_Invocation_deleteRef(_inv, &_throwaway); }
    if(_rsvp) { sidl_rmi_Response_deleteRef(_rsvp, &_throwaway); }
    return _retval;
  }
}

/* REMOTE METHOD STUB:getCount */
static int32_t
remote_edu_csdms_openmi_ValueSet_getCount(
  /* in */ struct edu_csdms_openmi_ValueSet__object*self ,
  /* out */ struct sidl_BaseInterface__object **_ex)
{
  LANG_SPECIFIC_INIT();
  *_ex = NULL;
  {
    /* initialize a new invocation */
    struct sidl_BaseInterface__object* _throwaway = NULL;
    sidl_BaseException _be = NULL;
    sidl_rmi_Response _rsvp = NULL;
    int32_t _retval = 0;
    struct sidl_rmi_InstanceHandle__object * _conn = ((struct 
      edu_csdms_openmi_ValueSet__remote*)self->d_data)->d_ih;
    sidl_rmi_Invocation _inv = sidl_rmi_InstanceHandle_createInvocation( _conn, 
      "getCount", _ex ); SIDL_CHECK(*_ex);

    /* pack in and inout arguments */

    /* send actual RMI request */
    _rsvp = sidl_rmi_Invocation_invokeMethod(_inv, _ex);SIDL_CHECK(*_ex);

    _be = sidl_rmi_Response_getExceptionThrown(_rsvp, _ex);SIDL_CHECK(*_ex);
    if (_be != NULL) {
      struct sidl_BaseInterface__object* throwaway_exception = NULL;
      sidl_BaseException_addLine(_be, 
      "Exception unserialized from edu.csdms.openmi.ValueSet.getCount.",
        &throwaway_exception);
      *_ex = (struct sidl_BaseInterface__object*) sidl_BaseInterface__cast(_be,
        &throwaway_exception);
      goto EXIT;
    }

    /* extract return value */
    sidl_rmi_Response_unpackInt( _rsvp, "_retval", &_retval, _ex);SIDL_CHECK(
      *_ex);

    /* unpack out and inout arguments */

    /* cleanup and return */
    EXIT:
    if(_inv) { sidl_rmi_Invocation_deleteRef(_inv, &_throwaway); }
    if(_rsvp) { sidl_rmi_Response_deleteRef(_rsvp, &_throwaway); }
    return _retval;
  }
}

/* REMOTE METHOD STUB:isValid */
static sidl_bool
remote_edu_csdms_openmi_ValueSet_isValid(
  /* in */ struct edu_csdms_openmi_ValueSet__object*self ,
  /* in */ int32_t elementIndex,
  /* out */ struct sidl_BaseInterface__object **_ex)
{
  LANG_SPECIFIC_INIT();
  *_ex = NULL;
  {
    /* initialize a new invocation */
    struct sidl_BaseInterface__object* _throwaway = NULL;
    sidl_BaseException _be = NULL;
    sidl_rmi_Response _rsvp = NULL;
    sidl_bool _retval = FALSE;
    struct sidl_rmi_InstanceHandle__object * _conn = ((struct 
      edu_csdms_openmi_ValueSet__remote*)self->d_data)->d_ih;
    sidl_rmi_Invocation _inv = sidl_rmi_InstanceHandle_createInvocation( _conn, 
      "isValid", _ex ); SIDL_CHECK(*_ex);

    /* pack in and inout arguments */
    sidl_rmi_Invocation_packInt( _inv, "elementIndex", elementIndex, 
      _ex);SIDL_CHECK(*_ex);

    /* send actual RMI request */
    _rsvp = sidl_rmi_Invocation_invokeMethod(_inv, _ex);SIDL_CHECK(*_ex);

    _be = sidl_rmi_Response_getExceptionThrown(_rsvp, _ex);SIDL_CHECK(*_ex);
    if (_be != NULL) {
      struct sidl_BaseInterface__object* throwaway_exception = NULL;
      sidl_BaseException_addLine(_be, 
      "Exception unserialized from edu.csdms.openmi.ValueSet.isValid.",
        &throwaway_exception);
      *_ex = (struct sidl_BaseInterface__object*) sidl_BaseInterface__cast(_be,
        &throwaway_exception);
      goto EXIT;
    }

    /* extract return value */
    sidl_rmi_Response_unpackBool( _rsvp, "_retval", &_retval, _ex);SIDL_CHECK(
      *_ex);

    /* unpack out and inout arguments */

    /* cleanup and return */
    EXIT:
    if(_inv) { sidl_rmi_Invocation_deleteRef(_inv, &_throwaway); }
    if(_rsvp) { sidl_rmi_Response_deleteRef(_rsvp, &_throwaway); }
    return _retval;
  }
}

/* REMOTE EPV: create remote entry point vectors (EPVs). */
static void edu_csdms_openmi_ValueSet__init_remote_epv(void)
{
  /* assert( HAVE_LOCKED_STATIC_GLOBALS ); */
  struct edu_csdms_openmi_ValueSet__epv*  epv = 
    &s_rem_epv__edu_csdms_openmi_valueset;
  struct edu_csdms_openmi_IValueSet__epv* e0  = 
    &s_rem_epv__edu_csdms_openmi_ivalueset;
  struct sidl_BaseClass__epv*             e1  = &s_rem_epv__sidl_baseclass;
  struct sidl_BaseInterface__epv*         e2  = &s_rem_epv__sidl_baseinterface;

  epv->f__cast                         = remote_edu_csdms_openmi_ValueSet__cast;
  epv->f__delete                       = 
    remote_edu_csdms_openmi_ValueSet__delete;
  epv->f__exec                         = remote_edu_csdms_openmi_ValueSet__exec;
  epv->f__getURL                       = 
    remote_edu_csdms_openmi_ValueSet__getURL;
  epv->f__raddRef                      = 
    remote_edu_csdms_openmi_ValueSet__raddRef;
  epv->f__isRemote                     = 
    remote_edu_csdms_openmi_ValueSet__isRemote;
  epv->f__set_hooks                    = 
    remote_edu_csdms_openmi_ValueSet__set_hooks;
  epv->f__set_contracts                = 
    remote_edu_csdms_openmi_ValueSet__set_contracts;
  epv->f__dump_stats                   = 
    remote_edu_csdms_openmi_ValueSet__dump_stats;
  epv->f__ctor                         = NULL;
  epv->f__ctor2                        = NULL;
  epv->f__dtor                         = NULL;
  epv->f_setData                       = 
    remote_edu_csdms_openmi_ValueSet_setData;
  epv->f_setValue                      = 
    remote_edu_csdms_openmi_ValueSet_setValue;
  epv->f_getValue                      = 
    remote_edu_csdms_openmi_ValueSet_getValue;
  epv->f_setRasterGrid                 = 
    remote_edu_csdms_openmi_ValueSet_setRasterGrid;
  epv->f_boccaForceUsePortInclude      = 
    remote_edu_csdms_openmi_ValueSet_boccaForceUsePortInclude;
  epv->f_addRef                        = 
    remote_edu_csdms_openmi_ValueSet_addRef;
  epv->f_deleteRef                     = 
    remote_edu_csdms_openmi_ValueSet_deleteRef;
  epv->f_isSame                        = 
    remote_edu_csdms_openmi_ValueSet_isSame;
  epv->f_isType                        = 
    remote_edu_csdms_openmi_ValueSet_isType;
  epv->f_getClassInfo                  = 
    remote_edu_csdms_openmi_ValueSet_getClassInfo;
  epv->f_getCount                      = 
    remote_edu_csdms_openmi_ValueSet_getCount;
  epv->f_isValid                       = 
    remote_edu_csdms_openmi_ValueSet_isValid;

  e0->f__cast          = (void* (*)(void*, const char*, struct 
    sidl_BaseInterface__object**)) epv->f__cast;
  e0->f__delete        = (void (*)(void*, struct sidl_BaseInterface__object**)) 
    epv->f__delete;
  e0->f__getURL        = (char* (*)(void*, struct 
    sidl_BaseInterface__object**)) epv->f__getURL;
  e0->f__raddRef       = (void (*)(void*, struct sidl_BaseInterface__object**)) 
    epv->f__raddRef;
  e0->f__isRemote      = (sidl_bool (*)(void*, struct 
    sidl_BaseInterface__object**)) epv->f__isRemote;
  e0->f__set_hooks     = (void (*)(void*, sidl_bool, struct 
    sidl_BaseInterface__object**)) epv->f__set_hooks;
  e0->f__set_contracts = (void (*)(void*, sidl_bool, const char*, sidl_bool, 
    struct sidl_BaseInterface__object**)) epv->f__set_contracts;
  e0->f__dump_stats    = (void (*)(void*, const char*, const char*, struct 
    sidl_BaseInterface__object**)) epv->f__dump_stats;
  e0->f__exec          = (void (*)(void*,const char*,struct 
    sidl_rmi_Call__object*,struct sidl_rmi_Return__object*,struct 
    sidl_BaseInterface__object **)) epv->f__exec;
  e0->f_getCount       = (int32_t (*)(void*,struct sidl_BaseInterface__object 
    **)) epv->f_getCount;
  e0->f_isValid        = (sidl_bool (*)(void*,int32_t,struct 
    sidl_BaseInterface__object **)) epv->f_isValid;
  e0->f_addRef         = (void (*)(void*,struct sidl_BaseInterface__object **)) 
    epv->f_addRef;
  e0->f_deleteRef      = (void (*)(void*,struct sidl_BaseInterface__object **)) 
    epv->f_deleteRef;
  e0->f_isSame         = (sidl_bool (*)(void*,struct 
    sidl_BaseInterface__object*,struct sidl_BaseInterface__object **)) 
    epv->f_isSame;
  e0->f_isType         = (sidl_bool (*)(void*,const char*,struct 
    sidl_BaseInterface__object **)) epv->f_isType;
  e0->f_getClassInfo   = (struct sidl_ClassInfo__object* (*)(void*,struct 
    sidl_BaseInterface__object **)) epv->f_getClassInfo;

  e1->f__cast          = (void* (*)(struct sidl_BaseClass__object*, const char*,
    struct sidl_BaseInterface__object**)) epv->f__cast;
  e1->f__delete        = (void (*)(struct sidl_BaseClass__object*, struct 
    sidl_BaseInterface__object**)) epv->f__delete;
  e1->f__getURL        = (char* (*)(struct sidl_BaseClass__object*, struct 
    sidl_BaseInterface__object**)) epv->f__getURL;
  e1->f__raddRef       = (void (*)(struct sidl_BaseClass__object*, struct 
    sidl_BaseInterface__object**)) epv->f__raddRef;
  e1->f__isRemote      = (sidl_bool (*)(struct sidl_BaseClass__object*, struct 
    sidl_BaseInterface__object**)) epv->f__isRemote;
  e1->f__set_hooks     = (void (*)(struct sidl_BaseClass__object*, sidl_bool, 
    struct sidl_BaseInterface__object**)) epv->f__set_hooks;
  e1->f__set_contracts = (void (*)(struct sidl_BaseClass__object*, sidl_bool, 
    const char*, sidl_bool, struct sidl_BaseInterface__object**)) 
    epv->f__set_contracts;
  e1->f__dump_stats    = (void (*)(struct sidl_BaseClass__object*, const char*, 
    const char*, struct sidl_BaseInterface__object**)) epv->f__dump_stats;
  e1->f__exec          = (void (*)(struct sidl_BaseClass__object*,const char*,
    struct sidl_rmi_Call__object*,struct sidl_rmi_Return__object*,struct 
    sidl_BaseInterface__object **)) epv->f__exec;
  e1->f_addRef         = (void (*)(struct sidl_BaseClass__object*,struct 
    sidl_BaseInterface__object **)) epv->f_addRef;
  e1->f_deleteRef      = (void (*)(struct sidl_BaseClass__object*,struct 
    sidl_BaseInterface__object **)) epv->f_deleteRef;
  e1->f_isSame         = (sidl_bool (*)(struct sidl_BaseClass__object*,struct 
    sidl_BaseInterface__object*,struct sidl_BaseInterface__object **)) 
    epv->f_isSame;
  e1->f_isType         = (sidl_bool (*)(struct sidl_BaseClass__object*,const 
    char*,struct sidl_BaseInterface__object **)) epv->f_isType;
  e1->f_getClassInfo   = (struct sidl_ClassInfo__object* (*)(struct 
    sidl_BaseClass__object*,struct sidl_BaseInterface__object **)) 
    epv->f_getClassInfo;

  e2->f__cast          = (void* (*)(void*, const char*, struct 
    sidl_BaseInterface__object**)) epv->f__cast;
  e2->f__delete        = (void (*)(void*, struct sidl_BaseInterface__object**)) 
    epv->f__delete;
  e2->f__getURL        = (char* (*)(void*, struct 
    sidl_BaseInterface__object**)) epv->f__getURL;
  e2->f__raddRef       = (void (*)(void*, struct sidl_BaseInterface__object**)) 
    epv->f__raddRef;
  e2->f__isRemote      = (sidl_bool (*)(void*, struct 
    sidl_BaseInterface__object**)) epv->f__isRemote;
  e2->f__set_hooks     = (void (*)(void*, sidl_bool, struct 
    sidl_BaseInterface__object**)) epv->f__set_hooks;
  e2->f__set_contracts = (void (*)(void*, sidl_bool, const char*, sidl_bool, 
    struct sidl_BaseInterface__object**)) epv->f__set_contracts;
  e2->f__dump_stats    = (void (*)(void*, const char*, const char*, struct 
    sidl_BaseInterface__object**)) epv->f__dump_stats;
  e2->f__exec          = (void (*)(void*,const char*,struct 
    sidl_rmi_Call__object*,struct sidl_rmi_Return__object*,struct 
    sidl_BaseInterface__object **)) epv->f__exec;
  e2->f_addRef         = (void (*)(void*,struct sidl_BaseInterface__object **)) 
    epv->f_addRef;
  e2->f_deleteRef      = (void (*)(void*,struct sidl_BaseInterface__object **)) 
    epv->f_deleteRef;
  e2->f_isSame         = (sidl_bool (*)(void*,struct 
    sidl_BaseInterface__object*,struct sidl_BaseInterface__object **)) 
    epv->f_isSame;
  e2->f_isType         = (sidl_bool (*)(void*,const char*,struct 
    sidl_BaseInterface__object **)) epv->f_isType;
  e2->f_getClassInfo   = (struct sidl_ClassInfo__object* (*)(void*,struct 
    sidl_BaseInterface__object **)) epv->f_getClassInfo;

  s_remote_initialized = 1;
}

/* Create an instance that connects to an existing remote object. */
static struct edu_csdms_openmi_ValueSet__object*
edu_csdms_openmi_ValueSet__remoteConnect(const char *url, sidl_bool ar, struct 
  sidl_BaseInterface__object* *_ex)
{
  struct edu_csdms_openmi_ValueSet__object* self = NULL;

  struct edu_csdms_openmi_ValueSet__object* s0;
  struct sidl_BaseClass__object* s1;

  struct edu_csdms_openmi_ValueSet__remote* r_obj = NULL;
  sidl_rmi_InstanceHandle instance = NULL;
  char* objectID = NULL;
  objectID = NULL;
  *_ex = NULL;
  if(url == NULL) {return NULL;}
  objectID = sidl_rmi_ServerRegistry_isLocalObject(url, _ex);
  if(objectID) {
    struct edu_csdms_openmi_ValueSet__object* retobj = NULL;
    struct sidl_BaseInterface__object *throwaway_exception;
    sidl_BaseInterface bi = (
      sidl_BaseInterface)sidl_rmi_InstanceRegistry_getInstanceByString(objectID,
      _ex); SIDL_CHECK(*_ex);
    (*bi->d_epv->f_deleteRef)(bi->d_object, &throwaway_exception);
    retobj = (struct edu_csdms_openmi_ValueSet__object*) (*bi->d_epv->f__cast)(
      bi->d_object, "edu.csdms.openmi.ValueSet", _ex);
    if(!ar) { 
      (*bi->d_epv->f_deleteRef)(bi->d_object, &throwaway_exception);
    }
    return retobj;
  }
  instance = sidl_rmi_ProtocolFactory_connectInstance(url, 
    "edu.csdms.openmi.ValueSet", ar, _ex ); SIDL_CHECK(*_ex);
  if ( instance == NULL) { return NULL; }
  self =
    (struct edu_csdms_openmi_ValueSet__object*) malloc(
      sizeof(struct edu_csdms_openmi_ValueSet__object));

  r_obj =
    (struct edu_csdms_openmi_ValueSet__remote*) malloc(
      sizeof(struct edu_csdms_openmi_ValueSet__remote));

  if(!self || !r_obj) {
    sidl_MemAllocException ex = sidl_MemAllocException_getSingletonException(
      _ex);
    SIDL_CHECK(*_ex);
    sidl_MemAllocException_setNote(ex, "Out of memory.", _ex); SIDL_CHECK(*_ex);
    sidl_MemAllocException_add(ex, __FILE__, __LINE__, 
      "edu.csdms.openmi.ValueSet.EPVgeneration", _ex);
    SIDL_CHECK(*_ex);
    *_ex = (struct sidl_BaseInterface__object*)ex;
    goto EXIT;
  }

  r_obj->d_refcount = 1;
  r_obj->d_ih = instance;
  s0 =                                     self;
  s1 =                                     &s0->d_sidl_baseclass;

  LOCK_STATIC_GLOBALS;
  if (!s_remote_initialized) {
    edu_csdms_openmi_ValueSet__init_remote_epv();
  }
  UNLOCK_STATIC_GLOBALS;

  s1->d_sidl_baseinterface.d_epv    = &s_rem_epv__sidl_baseinterface;
  s1->d_sidl_baseinterface.d_object = (void*) self;

  s1->d_data = (void*) r_obj;
  s1->d_epv  = &s_rem_epv__sidl_baseclass;

  s0->d_edu_csdms_openmi_ivalueset.d_epv    = 
    &s_rem_epv__edu_csdms_openmi_ivalueset;
  s0->d_edu_csdms_openmi_ivalueset.d_object = (void*) self;

  s0->d_data = (void*) r_obj;
  s0->d_epv  = &s_rem_epv__edu_csdms_openmi_valueset;

  self->d_data = (void*) r_obj;

  return self;
  EXIT:
  if(self) { free(self); }
  if(r_obj) { free(r_obj); }
  return NULL;
}
/* Create an instance that uses an already existing  */
/* InstanceHandle to connect to an existing remote object. */
static struct edu_csdms_openmi_ValueSet__object*
edu_csdms_openmi_ValueSet__IHConnect(sidl_rmi_InstanceHandle instance, struct 
  sidl_BaseInterface__object* *_ex)
{
  struct edu_csdms_openmi_ValueSet__object* self = NULL;

  struct edu_csdms_openmi_ValueSet__object* s0;
  struct sidl_BaseClass__object* s1;

  struct edu_csdms_openmi_ValueSet__remote* r_obj = NULL;
  self =
    (struct edu_csdms_openmi_ValueSet__object*) malloc(
      sizeof(struct edu_csdms_openmi_ValueSet__object));

  r_obj =
    (struct edu_csdms_openmi_ValueSet__remote*) malloc(
      sizeof(struct edu_csdms_openmi_ValueSet__remote));

  if(!self || !r_obj) {
    sidl_MemAllocException ex = sidl_MemAllocException_getSingletonException(
      _ex);
    SIDL_CHECK(*_ex);
    sidl_MemAllocException_setNote(ex, "Out of memory.", _ex); SIDL_CHECK(*_ex);
    sidl_MemAllocException_add(ex, __FILE__, __LINE__, 
      "edu.csdms.openmi.ValueSet.EPVgeneration", _ex);
    SIDL_CHECK(*_ex);
    *_ex = (struct sidl_BaseInterface__object*)ex;
    goto EXIT;
  }

  r_obj->d_refcount = 1;
  r_obj->d_ih = instance;
  s0 =                                     self;
  s1 =                                     &s0->d_sidl_baseclass;

  LOCK_STATIC_GLOBALS;
  if (!s_remote_initialized) {
    edu_csdms_openmi_ValueSet__init_remote_epv();
  }
  UNLOCK_STATIC_GLOBALS;

  s1->d_sidl_baseinterface.d_epv    = &s_rem_epv__sidl_baseinterface;
  s1->d_sidl_baseinterface.d_object = (void*) self;

  s1->d_data = (void*) r_obj;
  s1->d_epv  = &s_rem_epv__sidl_baseclass;

  s0->d_edu_csdms_openmi_ivalueset.d_epv    = 
    &s_rem_epv__edu_csdms_openmi_ivalueset;
  s0->d_edu_csdms_openmi_ivalueset.d_object = (void*) self;

  s0->d_data = (void*) r_obj;
  s0->d_epv  = &s_rem_epv__edu_csdms_openmi_valueset;

  self->d_data = (void*) r_obj;

  sidl_rmi_InstanceHandle_addRef(instance,_ex);SIDL_CHECK(*_ex);
  return self;
  EXIT:
  if(self) { free(self); }
  if(r_obj) { free(r_obj); }
  return NULL;
}
/* REMOTE: generate remote instance given URL string. */
static struct edu_csdms_openmi_ValueSet__object*
edu_csdms_openmi_ValueSet__remoteCreate(const char *url, struct 
  sidl_BaseInterface__object **_ex)
{
  struct sidl_BaseInterface__object* _throwaway_exception = NULL;
  struct edu_csdms_openmi_ValueSet__object* self = NULL;

  struct edu_csdms_openmi_ValueSet__object* s0;
  struct sidl_BaseClass__object* s1;

  struct edu_csdms_openmi_ValueSet__remote* r_obj = NULL;
  sidl_rmi_InstanceHandle instance = sidl_rmi_ProtocolFactory_createInstance(
    url, "edu.csdms.openmi.ValueSet", _ex ); SIDL_CHECK(*_ex);
  if ( instance == NULL) { return NULL; }
  self =
    (struct edu_csdms_openmi_ValueSet__object*) malloc(
      sizeof(struct edu_csdms_openmi_ValueSet__object));

  r_obj =
    (struct edu_csdms_openmi_ValueSet__remote*) malloc(
      sizeof(struct edu_csdms_openmi_ValueSet__remote));

  if(!self || !r_obj) {
    sidl_MemAllocException ex = sidl_MemAllocException_getSingletonException(
      _ex);
    SIDL_CHECK(*_ex);
    sidl_MemAllocException_setNote(ex, "Out of memory.", _ex); SIDL_CHECK(*_ex);
    sidl_MemAllocException_add(ex, __FILE__, __LINE__, 
      "edu.csdms.openmi.ValueSet.EPVgeneration", _ex);
    SIDL_CHECK(*_ex);
    *_ex = (struct sidl_BaseInterface__object*)ex;
    goto EXIT;
  }

  r_obj->d_refcount = 1;
  r_obj->d_ih = instance;
  s0 =                                     self;
  s1 =                                     &s0->d_sidl_baseclass;

  LOCK_STATIC_GLOBALS;
  if (!s_remote_initialized) {
    edu_csdms_openmi_ValueSet__init_remote_epv();
  }
  UNLOCK_STATIC_GLOBALS;

  s1->d_sidl_baseinterface.d_epv    = &s_rem_epv__sidl_baseinterface;
  s1->d_sidl_baseinterface.d_object = (void*) self;

  s1->d_data = (void*) r_obj;
  s1->d_epv  = &s_rem_epv__sidl_baseclass;

  s0->d_edu_csdms_openmi_ivalueset.d_epv    = 
    &s_rem_epv__edu_csdms_openmi_ivalueset;
  s0->d_edu_csdms_openmi_ivalueset.d_object = (void*) self;

  s0->d_data = (void*) r_obj;
  s0->d_epv  = &s_rem_epv__edu_csdms_openmi_valueset;

  self->d_data = (void*) r_obj;

  return self;
  EXIT:
  if(instance) { sidl_rmi_InstanceHandle_deleteRef(instance, 
    &_throwaway_exception); }
  if(self) { free(self); }
  if(r_obj) { free(r_obj); }
  return NULL;
}
/*
 * RMI connector function for the class.
 */

struct edu_csdms_openmi_ValueSet__object*
edu_csdms_openmi_ValueSet__connectI(const char* url, sidl_bool ar, struct 
  sidl_BaseInterface__object **_ex)
{
  return edu_csdms_openmi_ValueSet__remoteConnect(url, ar, _ex);
}


#endif /*WITH_RMI*/
/*
 * Function to extract IOR reference from the Java object.
 */

static struct edu_csdms_openmi_ValueSet__object* _get_ior(
  JNIEnv* env,
  jobject obj)
{
  void* ptr = NULL;
  static jmethodID mid = (jmethodID) NULL;

  if (mid == (jmethodID) NULL) {
    jclass cls = (*env)->GetObjectClass(env, obj);
    mid = (*env)->GetMethodID(env, cls, "_get_ior", "()J");
    (*env)->DeleteLocalRef(env, cls);
  }

  ptr = JLONG_TO_POINTER((*env)->CallLongMethod(env, obj, mid));
  return (struct edu_csdms_openmi_ValueSet__object*) ptr;
}

/*
 * External reference to IOR methods.
 */

static const struct edu_csdms_openmi_ValueSet__external* s_external = NULL;

/*
 * Create object instance and return reference.
 */

static jlong jni__create_ior(
  JNIEnv* env,
  jclass  cls)
{
  struct sidl_BaseInterface__object *_ex = NULL;
  jlong _res = POINTER_TO_JLONG((*s_external->createObject)(NULL, &_ex));
  (void) env;
  (void) cls;
  if(_ex) {
    sidl_Java_CheckException(
      env,
      _ex,
      "sidl.RuntimeException",
      NULL);

    return _res;
  }
  return _res;

}

/*
 * Create a remote object instance and return reference.
 */

static jlong jni__create_remote_ior(
  JNIEnv* env,
  jclass  cls,
  jstring url)
{
  jlong _res = 0;

#ifdef WITH_RMI

  struct sidl_BaseInterface__object *_ex = NULL;
  char* _tmp_url = sidl_Java_J2I_string(env, url);
  _res = POINTER_TO_JLONG(edu_csdms_openmi_ValueSet__remoteCreate(_tmp_url, 
    &_ex));
  if(_ex) {
    sidl_Java_CheckException(
      env,
      _ex,
      "sidl.RuntimeException",
      NULL);

    return _res;
  }

#endif /*WITH_RMI*/

  (void) env;
  (void) cls;
  return _res;

}

/*
 * Create object instance and seet ddata to be the passed in object.
 */

static jlong jni__wrap(
  JNIEnv* env,
  jclass  cls,
  jobject obj)
{
  struct sidl_BaseInterface__object *_ex = NULL;
  jlong _res = 0;
  void* g_data = (void*)(*env)->NewGlobalRef(env, obj);
  struct edu_csdms_openmi_ValueSet__object *_ptr = (*s_external->createObject)(
    g_data, &_ex);
  (void) env;
  (void) cls;
  if(_ex) {
    sidl_Java_CheckException(
      env,
      _ex,
      "sidl.RuntimeException",
      NULL);

    return _res;
  }
  _res = POINTER_TO_JLONG(_ptr);
  return _res;

}

/*
 * Connect to a remote object instance and return reference.
 */

static jlong jni__connect_remote_ior(
  JNIEnv* env,
  jclass  cls,
  jstring url)
{
  jlong _res = 0;

#ifdef WITH_RMI

  struct sidl_BaseInterface__object *_ex = NULL;
  char* _tmp_url = sidl_Java_J2I_string(env, url);
  _res = POINTER_TO_JLONG(edu_csdms_openmi_ValueSet__remoteConnect(_tmp_url, 1, 
    &_ex));
  if(_ex) {
    sidl_Java_CheckException(
      env,
      _ex,
      "sidl.RuntimeException",
      NULL);

    return _res;
  }

#endif /*WITH_RMI*/

  (void) env;
  (void) cls;
  return _res;

}

/*
 * Method:  setData[]
 */

static void
jni_setData(
  JNIEnv* env,
  jobject obj,
  jobject _arg_values)
{
  /*
   * Declare return and temporary variables.
   */

  struct edu_csdms_openmi_ValueSet__object* _ior = NULL;
  struct sidl_double__array* _tmp_values = (struct sidl_double__array*) NULL;
  struct sidl_BaseInterface__object *_ex = NULL;

  /*
   * Preprocess Java types and convert into IOR.
   */

  _ior = _get_ior(env, obj);
  _tmp_values = (struct sidl_double__array*) sidl_Java_J2I_borrow_array(env, 
    _arg_values);

  /*
   * Call the IOR method through the EPV.
   */

  (*(_ior->d_epv->f_setData))(
    _ior,
    _tmp_values,
    &_ex);

  /*
   * Postprocess OUT, INOUT, returns, and exceptions.
   */

  if(_ex) {
    sidl_Java_CheckException(
      env,
      _ex,
      "sidl.RuntimeException",
      NULL);
    return;
  }
}

/*
 * Method:  setValue[]
 */

static void
jni_setValue(
  JNIEnv* env,
  jobject obj,
  jint _arg_index,
  jdouble _arg_value)
{
  /*
   * Declare return and temporary variables.
   */

  struct edu_csdms_openmi_ValueSet__object* _ior = NULL;
  int32_t _tmp_index = 0;
  double _tmp_value = 0.0;
  struct sidl_BaseInterface__object *_ex = NULL;

  /*
   * Preprocess Java types and convert into IOR.
   */

  _ior = _get_ior(env, obj);
  _tmp_index = (int32_t) _arg_index;
  _tmp_value = (double) _arg_value;

  /*
   * Call the IOR method through the EPV.
   */

  (*(_ior->d_epv->f_setValue))(
    _ior,
    _tmp_index,
    _tmp_value,
    &_ex);

  /*
   * Postprocess OUT, INOUT, returns, and exceptions.
   */

  if(_ex) {
    sidl_Java_CheckException(
      env,
      _ex,
      "sidl.RuntimeException",
      NULL);
    return;
  }
}

/*
 * Method:  getValue[]
 */

static jdouble
jni_getValue(
  JNIEnv* env,
  jobject obj,
  jint _arg_index)
{
  /*
   * Declare return and temporary variables.
   */

  struct edu_csdms_openmi_ValueSet__object* _ior = NULL;
  int32_t _tmp_index = 0;
  double _ior_res = 0.0;
  jdouble _res = 0.0;
  struct sidl_BaseInterface__object *_ex = NULL;

  /*
   * Preprocess Java types and convert into IOR.
   */

  _ior = _get_ior(env, obj);
  _tmp_index = (int32_t) _arg_index;

  /*
   * Call the IOR method through the EPV.
   */

  _ior_res = (*(_ior->d_epv->f_getValue))(
    _ior,
    _tmp_index,
    &_ex);

  /*
   * Postprocess OUT, INOUT, returns, and exceptions.
   */

  if(_ex) {
    sidl_Java_CheckException(
      env,
      _ex,
      "sidl.RuntimeException",
      NULL);

    return _res;
  }
  _res = (jdouble) _ior_res;

  return _res;
}

/*
 * Method:  setRasterGrid[]
 */

static void
jni_setRasterGrid(
  JNIEnv* env,
  jobject obj,
  jobject _arg_grid)
{
  /*
   * Declare return and temporary variables.
   */

  struct edu_csdms_openmi_ValueSet__object* _ior = NULL;
  struct sidl_double__array* _tmp_grid = (struct sidl_double__array*) NULL;
  struct sidl_BaseInterface__object *_ex = NULL;

  /*
   * Preprocess Java types and convert into IOR.
   */

  _ior = _get_ior(env, obj);
  _tmp_grid = (struct sidl_double__array*) sidl_Java_J2I_borrow_array(env, 
    _arg_grid);

  /*
   * Call the IOR method through the EPV.
   */

  (*(_ior->d_epv->f_setRasterGrid))(
    _ior,
    _tmp_grid,
    &_ex);

  /*
   * Postprocess OUT, INOUT, returns, and exceptions.
   */

  if(_ex) {
    sidl_Java_CheckException(
      env,
      _ex,
      "sidl.RuntimeException",
      NULL);
    return;
  }
}

/*
 *  This function should never be called, but helps babel generate better code. 
 */

static void
jni_boccaForceUsePortInclude(
  JNIEnv* env,
  jobject obj)
{
  /*
   * Declare return and temporary variables.
   */

  struct edu_csdms_openmi_ValueSet__object* _ior = NULL;
  struct sidl_BaseInterface__object *_ex = NULL;

  /*
   * Preprocess Java types and convert into IOR.
   */

  _ior = _get_ior(env, obj);

  /*
   * Call the IOR method through the EPV.
   */

  (*(_ior->d_epv->f_boccaForceUsePortInclude))(
    _ior,
    &_ex);

  /*
   * Postprocess OUT, INOUT, returns, and exceptions.
   */

  if(_ex) {
    sidl_Java_CheckException(
      env,
      _ex,
      "sidl.RuntimeException",
      NULL);
    return;
  }
}

/*
 * Method:  getCount[]
 */

static jint
jni_getCount(
  JNIEnv* env,
  jobject obj)
{
  /*
   * Declare return and temporary variables.
   */

  struct edu_csdms_openmi_ValueSet__object* _ior = NULL;
  int32_t _ior_res = 0;
  jint _res = 0;
  struct sidl_BaseInterface__object *_ex = NULL;

  /*
   * Preprocess Java types and convert into IOR.
   */

  _ior = _get_ior(env, obj);

  /*
   * Call the IOR method through the EPV.
   */

  _ior_res = (*(_ior->d_epv->f_getCount))(
    _ior,
    &_ex);

  /*
   * Postprocess OUT, INOUT, returns, and exceptions.
   */

  if(_ex) {
    sidl_Java_CheckException(
      env,
      _ex,
      "sidl.RuntimeException",
      NULL);

    return _res;
  }
  _res = (jint) _ior_res;

  return _res;
}

/*
 * Method:  isValid[]
 */

static jboolean
jni_isValid(
  JNIEnv* env,
  jobject obj,
  jint _arg_elementIndex)
{
  /*
   * Declare return and temporary variables.
   */

  struct edu_csdms_openmi_ValueSet__object* _ior = NULL;
  int32_t _tmp_elementIndex = 0;
  sidl_bool _ior_res = FALSE;
  jboolean _res = JNI_FALSE;
  struct sidl_BaseInterface__object *_ex = NULL;

  /*
   * Preprocess Java types and convert into IOR.
   */

  _ior = _get_ior(env, obj);
  _tmp_elementIndex = (int32_t) _arg_elementIndex;

  /*
   * Call the IOR method through the EPV.
   */

  _ior_res = (*(_ior->d_epv->f_isValid))(
    _ior,
    _tmp_elementIndex,
    &_ex);

  /*
   * Postprocess OUT, INOUT, returns, and exceptions.
   */

  if(_ex) {
    sidl_Java_CheckException(
      env,
      _ex,
      "sidl.RuntimeException",
      NULL);

    return _res;
  }
  _res = (jboolean) _ior_res;

  return _res;
}

/*
 * Select and execute a method by name
 */

static void
jni__exec(
  JNIEnv* env,
  jobject obj,
  jstring _arg_methodName,
  jobject _arg_inArgs,
  jobject _arg_outArgs)
{
  /*
   * Declare return and temporary variables.
   */

  struct edu_csdms_openmi_ValueSet__object* _ior = NULL;
  char* _tmp_methodName = (char*) NULL;
  struct sidl_rmi_Call__object* _tmp_inArgs = (struct sidl_rmi_Call__object*) 
    NULL;
  struct sidl_rmi_Return__object* _tmp_outArgs = (struct 
    sidl_rmi_Return__object*) NULL;
  struct sidl_BaseInterface__object *_ex = NULL;

  /*
   * Preprocess Java types and convert into IOR.
   */

  _ior = _get_ior(env, obj);
  _tmp_methodName = sidl_Java_J2I_string(env, _arg_methodName);
  _tmp_inArgs = (struct sidl_rmi_Call__object*) sidl_Java_J2I_ifc(env, 
    _arg_inArgs, "sidl.rmi.Call", FALSE);JAVA_CHECK(env);
  _tmp_outArgs = (struct sidl_rmi_Return__object*) sidl_Java_J2I_ifc(env, 
    _arg_outArgs, "sidl.rmi.Return", FALSE);JAVA_CHECK(env);

  /*
   * Call the IOR method through the EPV.
   */

  (*(_ior->d_epv->f__exec))(
    _ior,
    _tmp_methodName,
    _tmp_inArgs,
    _tmp_outArgs,
    &_ex);

  /*
   * Postprocess OUT, INOUT, returns, and exceptions.
   */

  if(_ex) {
    sidl_Java_CheckException(
      env,
      _ex,
      "sidl.RuntimeException",
      NULL);
    return;
  }
  sidl_String_free(_tmp_methodName);
  JAVA_EXIT:
  return;
}
/*
 * Method to enable/disable method hooks invocation.
 */

static void
jni__set_hooks(
  JNIEnv* env,
  jobject obj,
  jboolean _arg_enable)
{
  /*
   * Declare return and temporary variables.
   */

  struct edu_csdms_openmi_ValueSet__object* _ior = NULL;
  sidl_bool _tmp_enable = FALSE;
  struct sidl_BaseInterface__object *_ex = NULL;

  /*
   * Preprocess Java types and convert into IOR.
   */

  _ior = _get_ior(env, obj);
  _tmp_enable = (sidl_bool) _arg_enable;

  /*
   * Call the IOR method through the EPV.
   */

  (*(_ior->d_epv->f__set_hooks))(
    _ior,
    _tmp_enable,
    &_ex);

  /*
   * Postprocess OUT, INOUT, returns, and exceptions.
   */

  if(_ex) {
    sidl_Java_CheckException(
      env,
      _ex,
      "sidl.RuntimeException",
      NULL);
    return;
  }
}

/*
 * Register JNI methods with the Java JVM.
 */

void edu_csdms_openmi_ValueSet__register(JNIEnv* env)
{
  JNINativeMethod methods[13];
  jclass cls;

#ifdef SIDL_STATIC_LIBRARY
  s_external = edu_csdms_openmi_ValueSet__externals();
#else
  s_external = (struct edu_csdms_openmi_ValueSet__external*)sidl_dynamicLoadIOR(
    "edu.csdms.openmi.ValueSet","edu_csdms_openmi_ValueSet__externals") ;
  sidl_checkIORVersion("edu.csdms.openmi.ValueSet", 
    s_external->d_ior_major_version, s_external->d_ior_minor_version, 2, 0);
#endif

  methods[0].name      = "_connect_remote_ior";
  methods[0].signature = "(Ljava/lang/String;)J";
  methods[0].fnPtr     = (void *)jni__connect_remote_ior;
  methods[1].name      = "_create_remote_ior";
  methods[1].signature = "(Ljava/lang/String;)J";
  methods[1].fnPtr     = (void *)jni__create_remote_ior;
  methods[2].name      = "_wrap";
  methods[2].signature = "(Ledu/csdms/openmi/ValueSet;)J";
  methods[2].fnPtr     = (void *)jni__wrap;
  methods[3].name      = "_create_ior";
  methods[3].signature = "()J";
  methods[3].fnPtr     = (void *)jni__create_ior;
  methods[4].name      = "_exec";
  methods[4].signature = "(Ljava/lang/String;Lsidl/rmi/Call;Lsidl/rmi/Return;)V";
  methods[4].fnPtr     = (void *)jni__exec;
  methods[5].name      = "_set_hooks";
  methods[5].signature = "(Z)V";
  methods[5].fnPtr     = (void *)jni__set_hooks;
  methods[6].name      = "setData";
  methods[6].signature = "(Lsidl/Double$Array1;)V";
  methods[6].fnPtr     = (void *)jni_setData;
  methods[7].name      = "setValue";
  methods[7].signature = "(ID)V";
  methods[7].fnPtr     = (void *)jni_setValue;
  methods[8].name      = "getValue";
  methods[8].signature = "(I)D";
  methods[8].fnPtr     = (void *)jni_getValue;
  methods[9].name      = "setRasterGrid";
  methods[9].signature = "(Lsidl/Double$Array2;)V";
  methods[9].fnPtr     = (void *)jni_setRasterGrid;
  methods[10].name      = "boccaForceUsePortInclude";
  methods[10].signature = "()V";
  methods[10].fnPtr     = (void *)jni_boccaForceUsePortInclude;
  methods[11].name      = "getCount";
  methods[11].signature = "()I";
  methods[11].fnPtr     = (void *)jni_getCount;
  methods[12].name      = "isValid";
  methods[12].signature = "(I)Z";
  methods[12].fnPtr     = (void *)jni_isValid;


  cls = (*env)->FindClass(env, "edu/csdms/openmi/ValueSet");
  if (cls) {
    (*env)->RegisterNatives(env, cls, methods, 13);
    (*env)->DeleteLocalRef(env, cls);
  }
}
