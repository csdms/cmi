/*
 * File:          edu_csdms_openmi_ElementSet_jniStub.c
 * Symbol:        edu.csdms.openmi.ElementSet-v0.0
 * Symbol Type:   class
 * Babel Version: 1.4.0 (Revision: 6607 release-1-4-0-branch)
 * Description:   Client-side JNI glue code for edu.csdms.openmi.ElementSet
 * 
 * WARNING: Automatically generated; changes will be lost
 * 
 */

#include "sidl_Java.h"
#include "sidl_Loader.h"
#include "sidl_String.h"
#include "edu_csdms_openmi_ElementSet_IOR.h"
#include "babel_config.h"
/*
 * Includes for all method dependencies.
 */

#ifndef included_edu_csdms_openmi_Element_jniStub_h
#include "edu_csdms_openmi_Element_jniStub.h"
#endif
#ifndef included_edu_csdms_openmi_ElementSet_jniStub_h
#include "edu_csdms_openmi_ElementSet_jniStub.h"
#endif
#ifndef included_edu_csdms_openmi_IElementSet_jniStub_h
#include "edu_csdms_openmi_IElementSet_jniStub.h"
#endif
#ifndef included_edu_csdms_openmi_ISpatialReference_jniStub_h
#include "edu_csdms_openmi_ISpatialReference_jniStub.h"
#endif
#ifndef included_edu_csdms_openmi_SpatialReference_jniStub_h
#include "edu_csdms_openmi_SpatialReference_jniStub.h"
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
static struct sidl_recursive_mutex_t edu_csdms_openmi_ElementSet__mutex= SIDL_RECURSIVE_MUTEX_INITIALIZER;
#define LOCK_STATIC_GLOBALS sidl_recursive_mutex_lock( &edu_csdms_openmi_ElementSet__mutex )
#define UNLOCK_STATIC_GLOBALS sidl_recursive_mutex_unlock( &edu_csdms_openmi_ElementSet__mutex )
/* #define HAVE_LOCKED_STATIC_GLOBALS (sidl_recursive_mutex_trylock( &edu_csdms_openmi_ElementSet__mutex )==EDEADLOCK) */
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

static struct edu_csdms_openmi_ElementSet__epv 
  s_rem_epv__edu_csdms_openmi_elementset;

static struct edu_csdms_openmi_IElementSet__epv 
  s_rem_epv__edu_csdms_openmi_ielementset;

static struct sidl_BaseClass__epv  s_rem_epv__sidl_baseclass;

static struct sidl_BaseInterface__epv  s_rem_epv__sidl_baseinterface;


/* REMOTE CAST: dynamic type casting for remote objects. */
static void* remote_edu_csdms_openmi_ElementSet__cast(
  struct edu_csdms_openmi_ElementSet__object* self,
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
    cmp = strcmp(name, "edu.csdms.openmi.IElementSet");
    if (!cmp) {
      (*self->d_epv->f_addRef)(self, _ex); SIDL_CHECK(*_ex);
      cast = &((*self).d_edu_csdms_openmi_ielementset);
      return cast;
    }
    else if (cmp < 0) {
      cmp = strcmp(name, "edu.csdms.openmi.ElementSet");
      if (!cmp) {
        (*self->d_epv->f_addRef)(self, _ex); SIDL_CHECK(*_ex);
        cast = ((struct edu_csdms_openmi_ElementSet__object*)self);
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
      edu_csdms_openmi_ElementSet__remote*)self->d_data)->d_ih, _ex);
  }

  return cast;
  EXIT:
  return NULL;
}

/* REMOTE DELETE: call the remote destructor for the object. */
static void remote_edu_csdms_openmi_ElementSet__delete(
  struct edu_csdms_openmi_ElementSet__object* self,
  struct sidl_BaseInterface__object* *_ex)
{
  *_ex = NULL;
  free((void*) self);
}

/* REMOTE GETURL: call the getURL function for the object. */
static char* remote_edu_csdms_openmi_ElementSet__getURL(
  struct edu_csdms_openmi_ElementSet__object* self, struct 
    sidl_BaseInterface__object* *_ex)
{
  struct sidl_rmi_InstanceHandle__object *conn = ((struct 
    edu_csdms_openmi_ElementSet__remote*)self->d_data)->d_ih;
  *_ex = NULL;
  if(conn != NULL) {
    return sidl_rmi_InstanceHandle_getObjectURL(conn, _ex);
  }
  return NULL;
}

/* REMOTE ADDREF: For internal babel use only! Remote addRef. */
static void remote_edu_csdms_openmi_ElementSet__raddRef(
  struct edu_csdms_openmi_ElementSet__object* self,struct 
    sidl_BaseInterface__object* *_ex)
{
  struct sidl_BaseException__object* netex = NULL;
  /* initialize a new invocation */
  struct sidl_BaseInterface__object* _throwaway = NULL;
  struct sidl_rmi_InstanceHandle__object *_conn = ((struct 
    edu_csdms_openmi_ElementSet__remote*)self->d_data)->d_ih;
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
remote_edu_csdms_openmi_ElementSet__isRemote(
    struct edu_csdms_openmi_ElementSet__object* self, 
    struct sidl_BaseInterface__object* *_ex) {
  *_ex = NULL;
  return TRUE;
}

/* REMOTE METHOD STUB:_set_hooks */
static void
remote_edu_csdms_openmi_ElementSet__set_hooks(
  /* in */ struct edu_csdms_openmi_ElementSet__object*self ,
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
      edu_csdms_openmi_ElementSet__remote*)self->d_data)->d_ih;
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
      "Exception unserialized from edu.csdms.openmi.ElementSet._set_hooks.",
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
remote_edu_csdms_openmi_ElementSet__set_contracts(
  /* in */ struct edu_csdms_openmi_ElementSet__object*self ,
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
      edu_csdms_openmi_ElementSet__remote*)self->d_data)->d_ih;
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
      "Exception unserialized from edu.csdms.openmi.ElementSet._set_contracts.",
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
remote_edu_csdms_openmi_ElementSet__dump_stats(
  /* in */ struct edu_csdms_openmi_ElementSet__object*self ,
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
      edu_csdms_openmi_ElementSet__remote*)self->d_data)->d_ih;
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
      "Exception unserialized from edu.csdms.openmi.ElementSet._dump_stats.",
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
static void remote_edu_csdms_openmi_ElementSet__exec(
  struct edu_csdms_openmi_ElementSet__object* self,const char* methodName,
  sidl_rmi_Call inArgs,
  sidl_rmi_Return outArgs,
  struct sidl_BaseInterface__object* *_ex)
{
  *_ex = NULL;
}

/* REMOTE METHOD STUB:setID */
static void
remote_edu_csdms_openmi_ElementSet_setID(
  /* in */ struct edu_csdms_openmi_ElementSet__object*self ,
  /* in */ const char* ID,
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
      edu_csdms_openmi_ElementSet__remote*)self->d_data)->d_ih;
    sidl_rmi_Invocation _inv = sidl_rmi_InstanceHandle_createInvocation( _conn, 
      "setID", _ex ); SIDL_CHECK(*_ex);

    /* pack in and inout arguments */
    sidl_rmi_Invocation_packString( _inv, "ID", ID, _ex);SIDL_CHECK(*_ex);

    /* send actual RMI request */
    _rsvp = sidl_rmi_Invocation_invokeMethod(_inv, _ex);SIDL_CHECK(*_ex);

    _be = sidl_rmi_Response_getExceptionThrown(_rsvp, _ex);SIDL_CHECK(*_ex);
    if (_be != NULL) {
      struct sidl_BaseInterface__object* throwaway_exception = NULL;
      sidl_BaseException_addLine(_be, 
      "Exception unserialized from edu.csdms.openmi.ElementSet.setID.",
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

/* REMOTE METHOD STUB:setElements */
static void
remote_edu_csdms_openmi_ElementSet_setElements(
  /* in */ struct edu_csdms_openmi_ElementSet__object*self ,
  /* in array<edu.csdms.openmi.Element> */ struct 
    edu_csdms_openmi_Element__array* values,
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
      edu_csdms_openmi_ElementSet__remote*)self->d_data)->d_ih;
    sidl_rmi_Invocation _inv = sidl_rmi_InstanceHandle_createInvocation( _conn, 
      "setElements", _ex ); SIDL_CHECK(*_ex);

    /* pack in and inout arguments */
    SIDL_THROW(*_ex, sidl_NotImplementedException, "An array of type "
    "edu.csdms.openmi.Element"
    " cannot currently be passed through RMI.  That functionality"
    "is not implemented.");

    /* send actual RMI request */
    _rsvp = sidl_rmi_Invocation_invokeMethod(_inv, _ex);SIDL_CHECK(*_ex);

    _be = sidl_rmi_Response_getExceptionThrown(_rsvp, _ex);SIDL_CHECK(*_ex);
    if (_be != NULL) {
      struct sidl_BaseInterface__object* throwaway_exception = NULL;
      sidl_BaseException_addLine(_be, 
      "Exception unserialized from edu.csdms.openmi.ElementSet.setElements.",
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

/* REMOTE METHOD STUB:addElement */
static void
remote_edu_csdms_openmi_ElementSet_addElement(
  /* in */ struct edu_csdms_openmi_ElementSet__object*self ,
  /* in */ struct edu_csdms_openmi_Element__object* element,
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
      edu_csdms_openmi_ElementSet__remote*)self->d_data)->d_ih;
    sidl_rmi_Invocation _inv = sidl_rmi_InstanceHandle_createInvocation( _conn, 
      "addElement", _ex ); SIDL_CHECK(*_ex);

    /* pack in and inout arguments */
    if(element){
      char* _url = sidl_BaseInterface__getURL((sidl_BaseInterface)element, 
        _ex);SIDL_CHECK(*_ex);
      sidl_rmi_Invocation_packString( _inv, "element", _url, _ex);SIDL_CHECK(
        *_ex);
      free((void*)_url);
    } else {
      sidl_rmi_Invocation_packString( _inv, "element", NULL, _ex);SIDL_CHECK(
        *_ex);
    }

    /* send actual RMI request */
    _rsvp = sidl_rmi_Invocation_invokeMethod(_inv, _ex);SIDL_CHECK(*_ex);

    _be = sidl_rmi_Response_getExceptionThrown(_rsvp, _ex);SIDL_CHECK(*_ex);
    if (_be != NULL) {
      struct sidl_BaseInterface__object* throwaway_exception = NULL;
      sidl_BaseException_addLine(_be, 
      "Exception unserialized from edu.csdms.openmi.ElementSet.addElement.",
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

/* REMOTE METHOD STUB:setElementType */
static void
remote_edu_csdms_openmi_ElementSet_setElementType(
  /* in */ struct edu_csdms_openmi_ElementSet__object*self ,
  /* in */ int64_t elementType,
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
      edu_csdms_openmi_ElementSet__remote*)self->d_data)->d_ih;
    sidl_rmi_Invocation _inv = sidl_rmi_InstanceHandle_createInvocation( _conn, 
      "setElementType", _ex ); SIDL_CHECK(*_ex);

    /* pack in and inout arguments */
    sidl_rmi_Invocation_packLong( _inv, "elementType", elementType, 
      _ex);SIDL_CHECK(*_ex);

    /* send actual RMI request */
    _rsvp = sidl_rmi_Invocation_invokeMethod(_inv, _ex);SIDL_CHECK(*_ex);

    _be = sidl_rmi_Response_getExceptionThrown(_rsvp, _ex);SIDL_CHECK(*_ex);
    if (_be != NULL) {
      struct sidl_BaseInterface__object* throwaway_exception = NULL;
      sidl_BaseException_addLine(_be, 
      "Exception unserialized from edu.csdms.openmi.ElementSet.setElementType.",
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

/* REMOTE METHOD STUB:setSpatialReference */
static void
remote_edu_csdms_openmi_ElementSet_setSpatialReference(
  /* in */ struct edu_csdms_openmi_ElementSet__object*self ,
  /* in */ struct edu_csdms_openmi_ISpatialReference__object* spatialReference,
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
      edu_csdms_openmi_ElementSet__remote*)self->d_data)->d_ih;
    sidl_rmi_Invocation _inv = sidl_rmi_InstanceHandle_createInvocation( _conn, 
      "setSpatialReference", _ex ); SIDL_CHECK(*_ex);

    /* pack in and inout arguments */
    if(spatialReference){
      char* _url = sidl_BaseInterface__getURL((
        sidl_BaseInterface)spatialReference, _ex);SIDL_CHECK(*_ex);
      sidl_rmi_Invocation_packString( _inv, "spatialReference", _url, 
        _ex);SIDL_CHECK(*_ex);
      free((void*)_url);
    } else {
      sidl_rmi_Invocation_packString( _inv, "spatialReference", NULL, 
        _ex);SIDL_CHECK(*_ex);
    }

    /* send actual RMI request */
    _rsvp = sidl_rmi_Invocation_invokeMethod(_inv, _ex);SIDL_CHECK(*_ex);

    _be = sidl_rmi_Response_getExceptionThrown(_rsvp, _ex);SIDL_CHECK(*_ex);
    if (_be != NULL) {
      struct sidl_BaseInterface__object* throwaway_exception = NULL;
      sidl_BaseException_addLine(_be, 
      "Exception unserialized from edu.csdms.openmi.ElementSet.setSpatialReference.",
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

/* REMOTE METHOD STUB:setRasterGrid */
static void
remote_edu_csdms_openmi_ElementSet_setRasterGrid(
  /* in */ struct edu_csdms_openmi_ElementSet__object*self ,
  /* in */ int32_t nx,
  /* in */ int32_t ny,
  /* in */ double dx,
  /* in */ double dy,
  /* in */ double x0,
  /* in */ double y0,
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
      edu_csdms_openmi_ElementSet__remote*)self->d_data)->d_ih;
    sidl_rmi_Invocation _inv = sidl_rmi_InstanceHandle_createInvocation( _conn, 
      "setRasterGrid", _ex ); SIDL_CHECK(*_ex);

    /* pack in and inout arguments */
    sidl_rmi_Invocation_packInt( _inv, "nx", nx, _ex);SIDL_CHECK(*_ex);
    sidl_rmi_Invocation_packInt( _inv, "ny", ny, _ex);SIDL_CHECK(*_ex);
    sidl_rmi_Invocation_packDouble( _inv, "dx", dx, _ex);SIDL_CHECK(*_ex);
    sidl_rmi_Invocation_packDouble( _inv, "dy", dy, _ex);SIDL_CHECK(*_ex);
    sidl_rmi_Invocation_packDouble( _inv, "x0", x0, _ex);SIDL_CHECK(*_ex);
    sidl_rmi_Invocation_packDouble( _inv, "y0", y0, _ex);SIDL_CHECK(*_ex);

    /* send actual RMI request */
    _rsvp = sidl_rmi_Invocation_invokeMethod(_inv, _ex);SIDL_CHECK(*_ex);

    _be = sidl_rmi_Response_getExceptionThrown(_rsvp, _ex);SIDL_CHECK(*_ex);
    if (_be != NULL) {
      struct sidl_BaseInterface__object* throwaway_exception = NULL;
      sidl_BaseException_addLine(_be, 
      "Exception unserialized from edu.csdms.openmi.ElementSet.setRasterGrid.",
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
remote_edu_csdms_openmi_ElementSet_boccaForceUsePortInclude(
  /* in */ struct edu_csdms_openmi_ElementSet__object*self ,
  /* in */ struct edu_csdms_openmi_SpatialReference__object* dummy0,
  /* in */ struct edu_csdms_openmi_Element__object* dummy1,
  /* in */ struct edu_csdms_openmi_ISpatialReference__object* dummy2,
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
      edu_csdms_openmi_ElementSet__remote*)self->d_data)->d_ih;
    sidl_rmi_Invocation _inv = sidl_rmi_InstanceHandle_createInvocation( _conn, 
      "boccaForceUsePortInclude", _ex ); SIDL_CHECK(*_ex);

    /* pack in and inout arguments */
    if(dummy0){
      char* _url = sidl_BaseInterface__getURL((sidl_BaseInterface)dummy0, 
        _ex);SIDL_CHECK(*_ex);
      sidl_rmi_Invocation_packString( _inv, "dummy0", _url, _ex);SIDL_CHECK(
        *_ex);
      free((void*)_url);
    } else {
      sidl_rmi_Invocation_packString( _inv, "dummy0", NULL, _ex);SIDL_CHECK(
        *_ex);
    }
    if(dummy1){
      char* _url = sidl_BaseInterface__getURL((sidl_BaseInterface)dummy1, 
        _ex);SIDL_CHECK(*_ex);
      sidl_rmi_Invocation_packString( _inv, "dummy1", _url, _ex);SIDL_CHECK(
        *_ex);
      free((void*)_url);
    } else {
      sidl_rmi_Invocation_packString( _inv, "dummy1", NULL, _ex);SIDL_CHECK(
        *_ex);
    }
    if(dummy2){
      char* _url = sidl_BaseInterface__getURL((sidl_BaseInterface)dummy2, 
        _ex);SIDL_CHECK(*_ex);
      sidl_rmi_Invocation_packString( _inv, "dummy2", _url, _ex);SIDL_CHECK(
        *_ex);
      free((void*)_url);
    } else {
      sidl_rmi_Invocation_packString( _inv, "dummy2", NULL, _ex);SIDL_CHECK(
        *_ex);
    }

    /* send actual RMI request */
    _rsvp = sidl_rmi_Invocation_invokeMethod(_inv, _ex);SIDL_CHECK(*_ex);

    _be = sidl_rmi_Response_getExceptionThrown(_rsvp, _ex);SIDL_CHECK(*_ex);
    if (_be != NULL) {
      struct sidl_BaseInterface__object* throwaway_exception = NULL;
      sidl_BaseException_addLine(_be, 
      "Exception unserialized from edu.csdms.openmi.ElementSet.boccaForceUsePortInclude.",
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
remote_edu_csdms_openmi_ElementSet_addRef(
  /* in */ struct edu_csdms_openmi_ElementSet__object*self ,
  /* out */ struct sidl_BaseInterface__object **_ex)
{
  LANG_SPECIFIC_INIT();
  *_ex = NULL;
  {
    struct edu_csdms_openmi_ElementSet__remote* r_obj = (struct 
      edu_csdms_openmi_ElementSet__remote*)self->d_data;
    LOCK_STATIC_GLOBALS;
    r_obj->d_refcount++;
#ifdef SIDL_DEBUG_REFCOUNT
    fprintf(stderr, "babel: addRef %p new count %d (type %s)\n",
      r_obj, r_obj->d_refcount, 
      "edu.csdms.openmi.ElementSet Remote Stub");
#endif /* SIDL_DEBUG_REFCOUNT */ 
    UNLOCK_STATIC_GLOBALS;
  }
}

/* REMOTE METHOD STUB:deleteRef */
static void
remote_edu_csdms_openmi_ElementSet_deleteRef(
  /* in */ struct edu_csdms_openmi_ElementSet__object*self ,
  /* out */ struct sidl_BaseInterface__object **_ex)
{
  LANG_SPECIFIC_INIT();
  *_ex = NULL;
  {
    struct edu_csdms_openmi_ElementSet__remote* r_obj = (struct 
      edu_csdms_openmi_ElementSet__remote*)self->d_data;
    LOCK_STATIC_GLOBALS;
    r_obj->d_refcount--;
#ifdef SIDL_DEBUG_REFCOUNT
    fprintf(stderr, "babel: deleteRef %p new count %d (type %s)\n",r_obj, r_obj->d_refcount, "edu.csdms.openmi.ElementSet Remote Stub");
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
remote_edu_csdms_openmi_ElementSet_isSame(
  /* in */ struct edu_csdms_openmi_ElementSet__object*self ,
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
      edu_csdms_openmi_ElementSet__remote*)self->d_data)->d_ih;
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
      "Exception unserialized from edu.csdms.openmi.ElementSet.isSame.",
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
remote_edu_csdms_openmi_ElementSet_isType(
  /* in */ struct edu_csdms_openmi_ElementSet__object*self ,
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
      edu_csdms_openmi_ElementSet__remote*)self->d_data)->d_ih;
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
      "Exception unserialized from edu.csdms.openmi.ElementSet.isType.",
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
remote_edu_csdms_openmi_ElementSet_getClassInfo(
  /* in */ struct edu_csdms_openmi_ElementSet__object*self ,
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
      edu_csdms_openmi_ElementSet__remote*)self->d_data)->d_ih;
    sidl_rmi_Invocation _inv = sidl_rmi_InstanceHandle_createInvocation( _conn, 
      "getClassInfo", _ex ); SIDL_CHECK(*_ex);

    /* pack in and inout arguments */

    /* send actual RMI request */
    _rsvp = sidl_rmi_Invocation_invokeMethod(_inv, _ex);SIDL_CHECK(*_ex);

    _be = sidl_rmi_Response_getExceptionThrown(_rsvp, _ex);SIDL_CHECK(*_ex);
    if (_be != NULL) {
      struct sidl_BaseInterface__object* throwaway_exception = NULL;
      sidl_BaseException_addLine(_be, 
      "Exception unserialized from edu.csdms.openmi.ElementSet.getClassInfo.",
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

/* REMOTE METHOD STUB:getID */
static char*
remote_edu_csdms_openmi_ElementSet_getID(
  /* in */ struct edu_csdms_openmi_ElementSet__object*self ,
  /* out */ struct sidl_BaseInterface__object **_ex)
{
  LANG_SPECIFIC_INIT();
  *_ex = NULL;
  {
    /* initialize a new invocation */
    struct sidl_BaseInterface__object* _throwaway = NULL;
    sidl_BaseException _be = NULL;
    sidl_rmi_Response _rsvp = NULL;
    char* _retval = 0;
    struct sidl_rmi_InstanceHandle__object * _conn = ((struct 
      edu_csdms_openmi_ElementSet__remote*)self->d_data)->d_ih;
    sidl_rmi_Invocation _inv = sidl_rmi_InstanceHandle_createInvocation( _conn, 
      "getID", _ex ); SIDL_CHECK(*_ex);

    /* pack in and inout arguments */

    /* send actual RMI request */
    _rsvp = sidl_rmi_Invocation_invokeMethod(_inv, _ex);SIDL_CHECK(*_ex);

    _be = sidl_rmi_Response_getExceptionThrown(_rsvp, _ex);SIDL_CHECK(*_ex);
    if (_be != NULL) {
      struct sidl_BaseInterface__object* throwaway_exception = NULL;
      sidl_BaseException_addLine(_be, 
      "Exception unserialized from edu.csdms.openmi.ElementSet.getID.",
        &throwaway_exception);
      *_ex = (struct sidl_BaseInterface__object*) sidl_BaseInterface__cast(_be,
        &throwaway_exception);
      goto EXIT;
    }

    /* extract return value */
    sidl_rmi_Response_unpackString( _rsvp, "_retval", &_retval, _ex);SIDL_CHECK(
      *_ex);

    /* unpack out and inout arguments */

    /* cleanup and return */
    EXIT:
    if(_inv) { sidl_rmi_Invocation_deleteRef(_inv, &_throwaway); }
    if(_rsvp) { sidl_rmi_Response_deleteRef(_rsvp, &_throwaway); }
    return _retval;
  }
}

/* REMOTE METHOD STUB:getDescription */
static char*
remote_edu_csdms_openmi_ElementSet_getDescription(
  /* in */ struct edu_csdms_openmi_ElementSet__object*self ,
  /* out */ struct sidl_BaseInterface__object **_ex)
{
  LANG_SPECIFIC_INIT();
  *_ex = NULL;
  {
    /* initialize a new invocation */
    struct sidl_BaseInterface__object* _throwaway = NULL;
    sidl_BaseException _be = NULL;
    sidl_rmi_Response _rsvp = NULL;
    char* _retval = 0;
    struct sidl_rmi_InstanceHandle__object * _conn = ((struct 
      edu_csdms_openmi_ElementSet__remote*)self->d_data)->d_ih;
    sidl_rmi_Invocation _inv = sidl_rmi_InstanceHandle_createInvocation( _conn, 
      "getDescription", _ex ); SIDL_CHECK(*_ex);

    /* pack in and inout arguments */

    /* send actual RMI request */
    _rsvp = sidl_rmi_Invocation_invokeMethod(_inv, _ex);SIDL_CHECK(*_ex);

    _be = sidl_rmi_Response_getExceptionThrown(_rsvp, _ex);SIDL_CHECK(*_ex);
    if (_be != NULL) {
      struct sidl_BaseInterface__object* throwaway_exception = NULL;
      sidl_BaseException_addLine(_be, 
      "Exception unserialized from edu.csdms.openmi.ElementSet.getDescription.",
        &throwaway_exception);
      *_ex = (struct sidl_BaseInterface__object*) sidl_BaseInterface__cast(_be,
        &throwaway_exception);
      goto EXIT;
    }

    /* extract return value */
    sidl_rmi_Response_unpackString( _rsvp, "_retval", &_retval, _ex);SIDL_CHECK(
      *_ex);

    /* unpack out and inout arguments */

    /* cleanup and return */
    EXIT:
    if(_inv) { sidl_rmi_Invocation_deleteRef(_inv, &_throwaway); }
    if(_rsvp) { sidl_rmi_Response_deleteRef(_rsvp, &_throwaway); }
    return _retval;
  }
}

/* REMOTE METHOD STUB:getSpatialReference */
static struct edu_csdms_openmi_ISpatialReference__object*
remote_edu_csdms_openmi_ElementSet_getSpatialReference(
  /* in */ struct edu_csdms_openmi_ElementSet__object*self ,
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
    struct edu_csdms_openmi_ISpatialReference__object* _retval = 0;
    struct sidl_rmi_InstanceHandle__object * _conn = ((struct 
      edu_csdms_openmi_ElementSet__remote*)self->d_data)->d_ih;
    sidl_rmi_Invocation _inv = sidl_rmi_InstanceHandle_createInvocation( _conn, 
      "getSpatialReference", _ex ); SIDL_CHECK(*_ex);

    /* pack in and inout arguments */

    /* send actual RMI request */
    _rsvp = sidl_rmi_Invocation_invokeMethod(_inv, _ex);SIDL_CHECK(*_ex);

    _be = sidl_rmi_Response_getExceptionThrown(_rsvp, _ex);SIDL_CHECK(*_ex);
    if (_be != NULL) {
      struct sidl_BaseInterface__object* throwaway_exception = NULL;
      sidl_BaseException_addLine(_be, 
      "Exception unserialized from edu.csdms.openmi.ElementSet.getSpatialReference.",
        &throwaway_exception);
      *_ex = (struct sidl_BaseInterface__object*) sidl_BaseInterface__cast(_be,
        &throwaway_exception);
      goto EXIT;
    }

    /* extract return value */
    sidl_rmi_Response_unpackString( _rsvp, "_retval", &_retval_str, 
      _ex);SIDL_CHECK(*_ex);
    _retval = edu_csdms_openmi_ISpatialReference__connectI(_retval_str, FALSE, 
      _ex);SIDL_CHECK(*_ex);

    /* unpack out and inout arguments */

    /* cleanup and return */
    EXIT:
    if(_inv) { sidl_rmi_Invocation_deleteRef(_inv, &_throwaway); }
    if(_rsvp) { sidl_rmi_Response_deleteRef(_rsvp, &_throwaway); }
    return _retval;
  }
}

/* REMOTE METHOD STUB:getElementType */
static int64_t
remote_edu_csdms_openmi_ElementSet_getElementType(
  /* in */ struct edu_csdms_openmi_ElementSet__object*self ,
  /* out */ struct sidl_BaseInterface__object **_ex)
{
  LANG_SPECIFIC_INIT();
  *_ex = NULL;
  {
    /* initialize a new invocation */
    struct sidl_BaseInterface__object* _throwaway = NULL;
    sidl_BaseException _be = NULL;
    sidl_rmi_Response _rsvp = NULL;
    int64_t _retval_tmp = 0;
    int64_t _retval = edu_csdms_openmi_ElementType_IDBased;
    struct sidl_rmi_InstanceHandle__object * _conn = ((struct 
      edu_csdms_openmi_ElementSet__remote*)self->d_data)->d_ih;
    sidl_rmi_Invocation _inv = sidl_rmi_InstanceHandle_createInvocation( _conn, 
      "getElementType", _ex ); SIDL_CHECK(*_ex);

    /* pack in and inout arguments */

    /* send actual RMI request */
    _rsvp = sidl_rmi_Invocation_invokeMethod(_inv, _ex);SIDL_CHECK(*_ex);

    _be = sidl_rmi_Response_getExceptionThrown(_rsvp, _ex);SIDL_CHECK(*_ex);
    if (_be != NULL) {
      struct sidl_BaseInterface__object* throwaway_exception = NULL;
      sidl_BaseException_addLine(_be, 
      "Exception unserialized from edu.csdms.openmi.ElementSet.getElementType.",
        &throwaway_exception);
      *_ex = (struct sidl_BaseInterface__object*) sidl_BaseInterface__cast(_be,
        &throwaway_exception);
      goto EXIT;
    }

    /* extract return value */
    sidl_rmi_Response_unpackLong( _rsvp, "_retval", &_retval_tmp, 
      _ex);SIDL_CHECK(*_ex);
    _retval = (int64_t)_retval_tmp;

    /* unpack out and inout arguments */

    /* cleanup and return */
    EXIT:
    if(_inv) { sidl_rmi_Invocation_deleteRef(_inv, &_throwaway); }
    if(_rsvp) { sidl_rmi_Response_deleteRef(_rsvp, &_throwaway); }
    return _retval;
  }
}

/* REMOTE METHOD STUB:getElementCount */
static int32_t
remote_edu_csdms_openmi_ElementSet_getElementCount(
  /* in */ struct edu_csdms_openmi_ElementSet__object*self ,
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
      edu_csdms_openmi_ElementSet__remote*)self->d_data)->d_ih;
    sidl_rmi_Invocation _inv = sidl_rmi_InstanceHandle_createInvocation( _conn, 
      "getElementCount", _ex ); SIDL_CHECK(*_ex);

    /* pack in and inout arguments */

    /* send actual RMI request */
    _rsvp = sidl_rmi_Invocation_invokeMethod(_inv, _ex);SIDL_CHECK(*_ex);

    _be = sidl_rmi_Response_getExceptionThrown(_rsvp, _ex);SIDL_CHECK(*_ex);
    if (_be != NULL) {
      struct sidl_BaseInterface__object* throwaway_exception = NULL;
      sidl_BaseException_addLine(_be, 
      "Exception unserialized from edu.csdms.openmi.ElementSet.getElementCount.",
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

/* REMOTE METHOD STUB:getVersion */
static int32_t
remote_edu_csdms_openmi_ElementSet_getVersion(
  /* in */ struct edu_csdms_openmi_ElementSet__object*self ,
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
      edu_csdms_openmi_ElementSet__remote*)self->d_data)->d_ih;
    sidl_rmi_Invocation _inv = sidl_rmi_InstanceHandle_createInvocation( _conn, 
      "getVersion", _ex ); SIDL_CHECK(*_ex);

    /* pack in and inout arguments */

    /* send actual RMI request */
    _rsvp = sidl_rmi_Invocation_invokeMethod(_inv, _ex);SIDL_CHECK(*_ex);

    _be = sidl_rmi_Response_getExceptionThrown(_rsvp, _ex);SIDL_CHECK(*_ex);
    if (_be != NULL) {
      struct sidl_BaseInterface__object* throwaway_exception = NULL;
      sidl_BaseException_addLine(_be, 
      "Exception unserialized from edu.csdms.openmi.ElementSet.getVersion.",
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

/* REMOTE METHOD STUB:getElementIndex */
static int32_t
remote_edu_csdms_openmi_ElementSet_getElementIndex(
  /* in */ struct edu_csdms_openmi_ElementSet__object*self ,
  /* in */ const char* elementID,
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
      edu_csdms_openmi_ElementSet__remote*)self->d_data)->d_ih;
    sidl_rmi_Invocation _inv = sidl_rmi_InstanceHandle_createInvocation( _conn, 
      "getElementIndex", _ex ); SIDL_CHECK(*_ex);

    /* pack in and inout arguments */
    sidl_rmi_Invocation_packString( _inv, "elementID", elementID, 
      _ex);SIDL_CHECK(*_ex);

    /* send actual RMI request */
    _rsvp = sidl_rmi_Invocation_invokeMethod(_inv, _ex);SIDL_CHECK(*_ex);

    _be = sidl_rmi_Response_getExceptionThrown(_rsvp, _ex);SIDL_CHECK(*_ex);
    if (_be != NULL) {
      struct sidl_BaseInterface__object* throwaway_exception = NULL;
      sidl_BaseException_addLine(_be, 
      "Exception unserialized from edu.csdms.openmi.ElementSet.getElementIndex.",
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

/* REMOTE METHOD STUB:getElementID */
static char*
remote_edu_csdms_openmi_ElementSet_getElementID(
  /* in */ struct edu_csdms_openmi_ElementSet__object*self ,
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
    char* _retval = 0;
    struct sidl_rmi_InstanceHandle__object * _conn = ((struct 
      edu_csdms_openmi_ElementSet__remote*)self->d_data)->d_ih;
    sidl_rmi_Invocation _inv = sidl_rmi_InstanceHandle_createInvocation( _conn, 
      "getElementID", _ex ); SIDL_CHECK(*_ex);

    /* pack in and inout arguments */
    sidl_rmi_Invocation_packInt( _inv, "elementIndex", elementIndex, 
      _ex);SIDL_CHECK(*_ex);

    /* send actual RMI request */
    _rsvp = sidl_rmi_Invocation_invokeMethod(_inv, _ex);SIDL_CHECK(*_ex);

    _be = sidl_rmi_Response_getExceptionThrown(_rsvp, _ex);SIDL_CHECK(*_ex);
    if (_be != NULL) {
      struct sidl_BaseInterface__object* throwaway_exception = NULL;
      sidl_BaseException_addLine(_be, 
      "Exception unserialized from edu.csdms.openmi.ElementSet.getElementID.",
        &throwaway_exception);
      *_ex = (struct sidl_BaseInterface__object*) sidl_BaseInterface__cast(_be,
        &throwaway_exception);
      goto EXIT;
    }

    /* extract return value */
    sidl_rmi_Response_unpackString( _rsvp, "_retval", &_retval, _ex);SIDL_CHECK(
      *_ex);

    /* unpack out and inout arguments */

    /* cleanup and return */
    EXIT:
    if(_inv) { sidl_rmi_Invocation_deleteRef(_inv, &_throwaway); }
    if(_rsvp) { sidl_rmi_Response_deleteRef(_rsvp, &_throwaway); }
    return _retval;
  }
}

/* REMOTE METHOD STUB:getVertexCount */
static int32_t
remote_edu_csdms_openmi_ElementSet_getVertexCount(
  /* in */ struct edu_csdms_openmi_ElementSet__object*self ,
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
    int32_t _retval = 0;
    struct sidl_rmi_InstanceHandle__object * _conn = ((struct 
      edu_csdms_openmi_ElementSet__remote*)self->d_data)->d_ih;
    sidl_rmi_Invocation _inv = sidl_rmi_InstanceHandle_createInvocation( _conn, 
      "getVertexCount", _ex ); SIDL_CHECK(*_ex);

    /* pack in and inout arguments */
    sidl_rmi_Invocation_packInt( _inv, "elementIndex", elementIndex, 
      _ex);SIDL_CHECK(*_ex);

    /* send actual RMI request */
    _rsvp = sidl_rmi_Invocation_invokeMethod(_inv, _ex);SIDL_CHECK(*_ex);

    _be = sidl_rmi_Response_getExceptionThrown(_rsvp, _ex);SIDL_CHECK(*_ex);
    if (_be != NULL) {
      struct sidl_BaseInterface__object* throwaway_exception = NULL;
      sidl_BaseException_addLine(_be, 
      "Exception unserialized from edu.csdms.openmi.ElementSet.getVertexCount.",
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

/* REMOTE METHOD STUB:getFaceCount */
static int32_t
remote_edu_csdms_openmi_ElementSet_getFaceCount(
  /* in */ struct edu_csdms_openmi_ElementSet__object*self ,
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
    int32_t _retval = 0;
    struct sidl_rmi_InstanceHandle__object * _conn = ((struct 
      edu_csdms_openmi_ElementSet__remote*)self->d_data)->d_ih;
    sidl_rmi_Invocation _inv = sidl_rmi_InstanceHandle_createInvocation( _conn, 
      "getFaceCount", _ex ); SIDL_CHECK(*_ex);

    /* pack in and inout arguments */
    sidl_rmi_Invocation_packInt( _inv, "elementIndex", elementIndex, 
      _ex);SIDL_CHECK(*_ex);

    /* send actual RMI request */
    _rsvp = sidl_rmi_Invocation_invokeMethod(_inv, _ex);SIDL_CHECK(*_ex);

    _be = sidl_rmi_Response_getExceptionThrown(_rsvp, _ex);SIDL_CHECK(*_ex);
    if (_be != NULL) {
      struct sidl_BaseInterface__object* throwaway_exception = NULL;
      sidl_BaseException_addLine(_be, 
      "Exception unserialized from edu.csdms.openmi.ElementSet.getFaceCount.",
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

/* REMOTE METHOD STUB:getFaceVertexIndices */
static struct sidl_int__array*
remote_edu_csdms_openmi_ElementSet_getFaceVertexIndices(
  /* in */ struct edu_csdms_openmi_ElementSet__object*self ,
  /* in */ int32_t elementIndex,
  /* in */ int32_t faceIndex,
  /* out */ struct sidl_BaseInterface__object **_ex)
{
  LANG_SPECIFIC_INIT();
  *_ex = NULL;
  {
    /* initialize a new invocation */
    struct sidl_BaseInterface__object* _throwaway = NULL;
    sidl_BaseException _be = NULL;
    sidl_rmi_Response _rsvp = NULL;
    struct sidl_int__array* _retval = 0;
    struct sidl_rmi_InstanceHandle__object * _conn = ((struct 
      edu_csdms_openmi_ElementSet__remote*)self->d_data)->d_ih;
    sidl_rmi_Invocation _inv = sidl_rmi_InstanceHandle_createInvocation( _conn, 
      "getFaceVertexIndices", _ex ); SIDL_CHECK(*_ex);

    /* pack in and inout arguments */
    sidl_rmi_Invocation_packInt( _inv, "elementIndex", elementIndex, 
      _ex);SIDL_CHECK(*_ex);
    sidl_rmi_Invocation_packInt( _inv, "faceIndex", faceIndex, _ex);SIDL_CHECK(
      *_ex);

    /* send actual RMI request */
    _rsvp = sidl_rmi_Invocation_invokeMethod(_inv, _ex);SIDL_CHECK(*_ex);

    _be = sidl_rmi_Response_getExceptionThrown(_rsvp, _ex);SIDL_CHECK(*_ex);
    if (_be != NULL) {
      struct sidl_BaseInterface__object* throwaway_exception = NULL;
      sidl_BaseException_addLine(_be, 
      "Exception unserialized from edu.csdms.openmi.ElementSet.getFaceVertexIndices.",
        &throwaway_exception);
      *_ex = (struct sidl_BaseInterface__object*) sidl_BaseInterface__cast(_be,
        &throwaway_exception);
      goto EXIT;
    }

    /* extract return value */
    sidl_rmi_Response_unpackIntArray( _rsvp, "_retval", &_retval,0,0,FALSE, 
      _ex);SIDL_CHECK(*_ex);

    /* unpack out and inout arguments */

    /* cleanup and return */
    EXIT:
    if(_inv) { sidl_rmi_Invocation_deleteRef(_inv, &_throwaway); }
    if(_rsvp) { sidl_rmi_Response_deleteRef(_rsvp, &_throwaway); }
    return _retval;
  }
}

/* REMOTE METHOD STUB:getXCoordinate */
static double
remote_edu_csdms_openmi_ElementSet_getXCoordinate(
  /* in */ struct edu_csdms_openmi_ElementSet__object*self ,
  /* in */ int32_t elementIndex,
  /* in */ int32_t vertexIndex,
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
      edu_csdms_openmi_ElementSet__remote*)self->d_data)->d_ih;
    sidl_rmi_Invocation _inv = sidl_rmi_InstanceHandle_createInvocation( _conn, 
      "getXCoordinate", _ex ); SIDL_CHECK(*_ex);

    /* pack in and inout arguments */
    sidl_rmi_Invocation_packInt( _inv, "elementIndex", elementIndex, 
      _ex);SIDL_CHECK(*_ex);
    sidl_rmi_Invocation_packInt( _inv, "vertexIndex", vertexIndex, 
      _ex);SIDL_CHECK(*_ex);

    /* send actual RMI request */
    _rsvp = sidl_rmi_Invocation_invokeMethod(_inv, _ex);SIDL_CHECK(*_ex);

    _be = sidl_rmi_Response_getExceptionThrown(_rsvp, _ex);SIDL_CHECK(*_ex);
    if (_be != NULL) {
      struct sidl_BaseInterface__object* throwaway_exception = NULL;
      sidl_BaseException_addLine(_be, 
      "Exception unserialized from edu.csdms.openmi.ElementSet.getXCoordinate.",
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

/* REMOTE METHOD STUB:getYCoordinate */
static double
remote_edu_csdms_openmi_ElementSet_getYCoordinate(
  /* in */ struct edu_csdms_openmi_ElementSet__object*self ,
  /* in */ int32_t elementIndex,
  /* in */ int32_t vertexIndex,
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
      edu_csdms_openmi_ElementSet__remote*)self->d_data)->d_ih;
    sidl_rmi_Invocation _inv = sidl_rmi_InstanceHandle_createInvocation( _conn, 
      "getYCoordinate", _ex ); SIDL_CHECK(*_ex);

    /* pack in and inout arguments */
    sidl_rmi_Invocation_packInt( _inv, "elementIndex", elementIndex, 
      _ex);SIDL_CHECK(*_ex);
    sidl_rmi_Invocation_packInt( _inv, "vertexIndex", vertexIndex, 
      _ex);SIDL_CHECK(*_ex);

    /* send actual RMI request */
    _rsvp = sidl_rmi_Invocation_invokeMethod(_inv, _ex);SIDL_CHECK(*_ex);

    _be = sidl_rmi_Response_getExceptionThrown(_rsvp, _ex);SIDL_CHECK(*_ex);
    if (_be != NULL) {
      struct sidl_BaseInterface__object* throwaway_exception = NULL;
      sidl_BaseException_addLine(_be, 
      "Exception unserialized from edu.csdms.openmi.ElementSet.getYCoordinate.",
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

/* REMOTE METHOD STUB:getZCoordinate */
static double
remote_edu_csdms_openmi_ElementSet_getZCoordinate(
  /* in */ struct edu_csdms_openmi_ElementSet__object*self ,
  /* in */ int32_t elementIndex,
  /* in */ int32_t vertexIndex,
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
      edu_csdms_openmi_ElementSet__remote*)self->d_data)->d_ih;
    sidl_rmi_Invocation _inv = sidl_rmi_InstanceHandle_createInvocation( _conn, 
      "getZCoordinate", _ex ); SIDL_CHECK(*_ex);

    /* pack in and inout arguments */
    sidl_rmi_Invocation_packInt( _inv, "elementIndex", elementIndex, 
      _ex);SIDL_CHECK(*_ex);
    sidl_rmi_Invocation_packInt( _inv, "vertexIndex", vertexIndex, 
      _ex);SIDL_CHECK(*_ex);

    /* send actual RMI request */
    _rsvp = sidl_rmi_Invocation_invokeMethod(_inv, _ex);SIDL_CHECK(*_ex);

    _be = sidl_rmi_Response_getExceptionThrown(_rsvp, _ex);SIDL_CHECK(*_ex);
    if (_be != NULL) {
      struct sidl_BaseInterface__object* throwaway_exception = NULL;
      sidl_BaseException_addLine(_be, 
      "Exception unserialized from edu.csdms.openmi.ElementSet.getZCoordinate.",
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

/* REMOTE EPV: create remote entry point vectors (EPVs). */
static void edu_csdms_openmi_ElementSet__init_remote_epv(void)
{
  /* assert( HAVE_LOCKED_STATIC_GLOBALS ); */
  struct edu_csdms_openmi_ElementSet__epv*  epv = 
    &s_rem_epv__edu_csdms_openmi_elementset;
  struct edu_csdms_openmi_IElementSet__epv* e0  = 
    &s_rem_epv__edu_csdms_openmi_ielementset;
  struct sidl_BaseClass__epv*               e1  = &s_rem_epv__sidl_baseclass;
  struct sidl_BaseInterface__epv*           e2  = 
    &s_rem_epv__sidl_baseinterface;

  epv->f__cast                         = 
    remote_edu_csdms_openmi_ElementSet__cast;
  epv->f__delete                       = 
    remote_edu_csdms_openmi_ElementSet__delete;
  epv->f__exec                         = 
    remote_edu_csdms_openmi_ElementSet__exec;
  epv->f__getURL                       = 
    remote_edu_csdms_openmi_ElementSet__getURL;
  epv->f__raddRef                      = 
    remote_edu_csdms_openmi_ElementSet__raddRef;
  epv->f__isRemote                     = 
    remote_edu_csdms_openmi_ElementSet__isRemote;
  epv->f__set_hooks                    = 
    remote_edu_csdms_openmi_ElementSet__set_hooks;
  epv->f__set_contracts                = 
    remote_edu_csdms_openmi_ElementSet__set_contracts;
  epv->f__dump_stats                   = 
    remote_edu_csdms_openmi_ElementSet__dump_stats;
  epv->f__ctor                         = NULL;
  epv->f__ctor2                        = NULL;
  epv->f__dtor                         = NULL;
  epv->f_setID                         = 
    remote_edu_csdms_openmi_ElementSet_setID;
  epv->f_setElements                   = 
    remote_edu_csdms_openmi_ElementSet_setElements;
  epv->f_addElement                    = 
    remote_edu_csdms_openmi_ElementSet_addElement;
  epv->f_setElementType                = 
    remote_edu_csdms_openmi_ElementSet_setElementType;
  epv->f_setSpatialReference           = 
    remote_edu_csdms_openmi_ElementSet_setSpatialReference;
  epv->f_setRasterGrid                 = 
    remote_edu_csdms_openmi_ElementSet_setRasterGrid;
  epv->f_boccaForceUsePortInclude      = 
    remote_edu_csdms_openmi_ElementSet_boccaForceUsePortInclude;
  epv->f_addRef                        = 
    remote_edu_csdms_openmi_ElementSet_addRef;
  epv->f_deleteRef                     = 
    remote_edu_csdms_openmi_ElementSet_deleteRef;
  epv->f_isSame                        = 
    remote_edu_csdms_openmi_ElementSet_isSame;
  epv->f_isType                        = 
    remote_edu_csdms_openmi_ElementSet_isType;
  epv->f_getClassInfo                  = 
    remote_edu_csdms_openmi_ElementSet_getClassInfo;
  epv->f_getID                         = 
    remote_edu_csdms_openmi_ElementSet_getID;
  epv->f_getDescription                = 
    remote_edu_csdms_openmi_ElementSet_getDescription;
  epv->f_getSpatialReference           = 
    remote_edu_csdms_openmi_ElementSet_getSpatialReference;
  epv->f_getElementType                = 
    remote_edu_csdms_openmi_ElementSet_getElementType;
  epv->f_getElementCount               = 
    remote_edu_csdms_openmi_ElementSet_getElementCount;
  epv->f_getVersion                    = 
    remote_edu_csdms_openmi_ElementSet_getVersion;
  epv->f_getElementIndex               = 
    remote_edu_csdms_openmi_ElementSet_getElementIndex;
  epv->f_getElementID                  = 
    remote_edu_csdms_openmi_ElementSet_getElementID;
  epv->f_getVertexCount                = 
    remote_edu_csdms_openmi_ElementSet_getVertexCount;
  epv->f_getFaceCount                  = 
    remote_edu_csdms_openmi_ElementSet_getFaceCount;
  epv->f_getFaceVertexIndices          = 
    remote_edu_csdms_openmi_ElementSet_getFaceVertexIndices;
  epv->f_getXCoordinate                = 
    remote_edu_csdms_openmi_ElementSet_getXCoordinate;
  epv->f_getYCoordinate                = 
    remote_edu_csdms_openmi_ElementSet_getYCoordinate;
  epv->f_getZCoordinate                = 
    remote_edu_csdms_openmi_ElementSet_getZCoordinate;

  e0->f__cast                = (void* (*)(void*, const char*, struct 
    sidl_BaseInterface__object**)) epv->f__cast;
  e0->f__delete              = (void (*)(void*, struct 
    sidl_BaseInterface__object**)) epv->f__delete;
  e0->f__getURL              = (char* (*)(void*, struct 
    sidl_BaseInterface__object**)) epv->f__getURL;
  e0->f__raddRef             = (void (*)(void*, struct 
    sidl_BaseInterface__object**)) epv->f__raddRef;
  e0->f__isRemote            = (sidl_bool (*)(void*, struct 
    sidl_BaseInterface__object**)) epv->f__isRemote;
  e0->f__set_hooks           = (void (*)(void*, sidl_bool, struct 
    sidl_BaseInterface__object**)) epv->f__set_hooks;
  e0->f__set_contracts       = (void (*)(void*, sidl_bool, const char*, 
    sidl_bool, struct sidl_BaseInterface__object**)) epv->f__set_contracts;
  e0->f__dump_stats          = (void (*)(void*, const char*, const char*, 
    struct sidl_BaseInterface__object**)) epv->f__dump_stats;
  e0->f__exec                = (void (*)(void*,const char*,struct 
    sidl_rmi_Call__object*,struct sidl_rmi_Return__object*,struct 
    sidl_BaseInterface__object **)) epv->f__exec;
  e0->f_getID                = (char* (*)(void*,struct 
    sidl_BaseInterface__object **)) epv->f_getID;
  e0->f_getDescription       = (char* (*)(void*,struct 
    sidl_BaseInterface__object **)) epv->f_getDescription;
  e0->f_getSpatialReference  = (struct 
    edu_csdms_openmi_ISpatialReference__object* (*)(void*,struct 
    sidl_BaseInterface__object **)) epv->f_getSpatialReference;
  e0->f_getElementType       = (int64_t (*)(void*,struct 
    sidl_BaseInterface__object **)) epv->f_getElementType;
  e0->f_getElementCount      = (int32_t (*)(void*,struct 
    sidl_BaseInterface__object **)) epv->f_getElementCount;
  e0->f_getVersion           = (int32_t (*)(void*,struct 
    sidl_BaseInterface__object **)) epv->f_getVersion;
  e0->f_getElementIndex      = (int32_t (*)(void*,const char*,struct 
    sidl_BaseInterface__object **)) epv->f_getElementIndex;
  e0->f_getElementID         = (char* (*)(void*,int32_t,struct 
    sidl_BaseInterface__object **)) epv->f_getElementID;
  e0->f_getVertexCount       = (int32_t (*)(void*,int32_t,struct 
    sidl_BaseInterface__object **)) epv->f_getVertexCount;
  e0->f_getFaceCount         = (int32_t (*)(void*,int32_t,struct 
    sidl_BaseInterface__object **)) epv->f_getFaceCount;
  e0->f_getFaceVertexIndices = (struct sidl_int__array* (*)(void*,int32_t,
    int32_t,struct sidl_BaseInterface__object **)) epv->f_getFaceVertexIndices;
  e0->f_getXCoordinate       = (double (*)(void*,int32_t,int32_t,struct 
    sidl_BaseInterface__object **)) epv->f_getXCoordinate;
  e0->f_getYCoordinate       = (double (*)(void*,int32_t,int32_t,struct 
    sidl_BaseInterface__object **)) epv->f_getYCoordinate;
  e0->f_getZCoordinate       = (double (*)(void*,int32_t,int32_t,struct 
    sidl_BaseInterface__object **)) epv->f_getZCoordinate;
  e0->f_addRef               = (void (*)(void*,struct 
    sidl_BaseInterface__object **)) epv->f_addRef;
  e0->f_deleteRef            = (void (*)(void*,struct 
    sidl_BaseInterface__object **)) epv->f_deleteRef;
  e0->f_isSame               = (sidl_bool (*)(void*,struct 
    sidl_BaseInterface__object*,struct sidl_BaseInterface__object **)) 
    epv->f_isSame;
  e0->f_isType               = (sidl_bool (*)(void*,const char*,struct 
    sidl_BaseInterface__object **)) epv->f_isType;
  e0->f_getClassInfo         = (struct sidl_ClassInfo__object* (*)(void*,struct 
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
static struct edu_csdms_openmi_ElementSet__object*
edu_csdms_openmi_ElementSet__remoteConnect(const char *url, sidl_bool ar, 
  struct sidl_BaseInterface__object* *_ex)
{
  struct edu_csdms_openmi_ElementSet__object* self = NULL;

  struct edu_csdms_openmi_ElementSet__object* s0;
  struct sidl_BaseClass__object* s1;

  struct edu_csdms_openmi_ElementSet__remote* r_obj = NULL;
  sidl_rmi_InstanceHandle instance = NULL;
  char* objectID = NULL;
  objectID = NULL;
  *_ex = NULL;
  if(url == NULL) {return NULL;}
  objectID = sidl_rmi_ServerRegistry_isLocalObject(url, _ex);
  if(objectID) {
    struct edu_csdms_openmi_ElementSet__object* retobj = NULL;
    struct sidl_BaseInterface__object *throwaway_exception;
    sidl_BaseInterface bi = (
      sidl_BaseInterface)sidl_rmi_InstanceRegistry_getInstanceByString(objectID,
      _ex); SIDL_CHECK(*_ex);
    (*bi->d_epv->f_deleteRef)(bi->d_object, &throwaway_exception);
    retobj = (struct edu_csdms_openmi_ElementSet__object*) (
      *bi->d_epv->f__cast)(bi->d_object, "edu.csdms.openmi.ElementSet", _ex);
    if(!ar) { 
      (*bi->d_epv->f_deleteRef)(bi->d_object, &throwaway_exception);
    }
    return retobj;
  }
  instance = sidl_rmi_ProtocolFactory_connectInstance(url, 
    "edu.csdms.openmi.ElementSet", ar, _ex ); SIDL_CHECK(*_ex);
  if ( instance == NULL) { return NULL; }
  self =
    (struct edu_csdms_openmi_ElementSet__object*) malloc(
      sizeof(struct edu_csdms_openmi_ElementSet__object));

  r_obj =
    (struct edu_csdms_openmi_ElementSet__remote*) malloc(
      sizeof(struct edu_csdms_openmi_ElementSet__remote));

  if(!self || !r_obj) {
    sidl_MemAllocException ex = sidl_MemAllocException_getSingletonException(
      _ex);
    SIDL_CHECK(*_ex);
    sidl_MemAllocException_setNote(ex, "Out of memory.", _ex); SIDL_CHECK(*_ex);
    sidl_MemAllocException_add(ex, __FILE__, __LINE__, 
      "edu.csdms.openmi.ElementSet.EPVgeneration", _ex);
    SIDL_CHECK(*_ex);
    *_ex = (struct sidl_BaseInterface__object*)ex;
    goto EXIT;
  }

  r_obj->d_refcount = 1;
  r_obj->d_ih = instance;
  s0 =                                       self;
  s1 =                                       &s0->d_sidl_baseclass;

  LOCK_STATIC_GLOBALS;
  if (!s_remote_initialized) {
    edu_csdms_openmi_ElementSet__init_remote_epv();
  }
  UNLOCK_STATIC_GLOBALS;

  s1->d_sidl_baseinterface.d_epv    = &s_rem_epv__sidl_baseinterface;
  s1->d_sidl_baseinterface.d_object = (void*) self;

  s1->d_data = (void*) r_obj;
  s1->d_epv  = &s_rem_epv__sidl_baseclass;

  s0->d_edu_csdms_openmi_ielementset.d_epv    = 
    &s_rem_epv__edu_csdms_openmi_ielementset;
  s0->d_edu_csdms_openmi_ielementset.d_object = (void*) self;

  s0->d_data = (void*) r_obj;
  s0->d_epv  = &s_rem_epv__edu_csdms_openmi_elementset;

  self->d_data = (void*) r_obj;

  return self;
  EXIT:
  if(self) { free(self); }
  if(r_obj) { free(r_obj); }
  return NULL;
}
/* Create an instance that uses an already existing  */
/* InstanceHandle to connect to an existing remote object. */
static struct edu_csdms_openmi_ElementSet__object*
edu_csdms_openmi_ElementSet__IHConnect(sidl_rmi_InstanceHandle instance, struct 
  sidl_BaseInterface__object* *_ex)
{
  struct edu_csdms_openmi_ElementSet__object* self = NULL;

  struct edu_csdms_openmi_ElementSet__object* s0;
  struct sidl_BaseClass__object* s1;

  struct edu_csdms_openmi_ElementSet__remote* r_obj = NULL;
  self =
    (struct edu_csdms_openmi_ElementSet__object*) malloc(
      sizeof(struct edu_csdms_openmi_ElementSet__object));

  r_obj =
    (struct edu_csdms_openmi_ElementSet__remote*) malloc(
      sizeof(struct edu_csdms_openmi_ElementSet__remote));

  if(!self || !r_obj) {
    sidl_MemAllocException ex = sidl_MemAllocException_getSingletonException(
      _ex);
    SIDL_CHECK(*_ex);
    sidl_MemAllocException_setNote(ex, "Out of memory.", _ex); SIDL_CHECK(*_ex);
    sidl_MemAllocException_add(ex, __FILE__, __LINE__, 
      "edu.csdms.openmi.ElementSet.EPVgeneration", _ex);
    SIDL_CHECK(*_ex);
    *_ex = (struct sidl_BaseInterface__object*)ex;
    goto EXIT;
  }

  r_obj->d_refcount = 1;
  r_obj->d_ih = instance;
  s0 =                                       self;
  s1 =                                       &s0->d_sidl_baseclass;

  LOCK_STATIC_GLOBALS;
  if (!s_remote_initialized) {
    edu_csdms_openmi_ElementSet__init_remote_epv();
  }
  UNLOCK_STATIC_GLOBALS;

  s1->d_sidl_baseinterface.d_epv    = &s_rem_epv__sidl_baseinterface;
  s1->d_sidl_baseinterface.d_object = (void*) self;

  s1->d_data = (void*) r_obj;
  s1->d_epv  = &s_rem_epv__sidl_baseclass;

  s0->d_edu_csdms_openmi_ielementset.d_epv    = 
    &s_rem_epv__edu_csdms_openmi_ielementset;
  s0->d_edu_csdms_openmi_ielementset.d_object = (void*) self;

  s0->d_data = (void*) r_obj;
  s0->d_epv  = &s_rem_epv__edu_csdms_openmi_elementset;

  self->d_data = (void*) r_obj;

  sidl_rmi_InstanceHandle_addRef(instance,_ex);SIDL_CHECK(*_ex);
  return self;
  EXIT:
  if(self) { free(self); }
  if(r_obj) { free(r_obj); }
  return NULL;
}
/* REMOTE: generate remote instance given URL string. */
static struct edu_csdms_openmi_ElementSet__object*
edu_csdms_openmi_ElementSet__remoteCreate(const char *url, struct 
  sidl_BaseInterface__object **_ex)
{
  struct sidl_BaseInterface__object* _throwaway_exception = NULL;
  struct edu_csdms_openmi_ElementSet__object* self = NULL;

  struct edu_csdms_openmi_ElementSet__object* s0;
  struct sidl_BaseClass__object* s1;

  struct edu_csdms_openmi_ElementSet__remote* r_obj = NULL;
  sidl_rmi_InstanceHandle instance = sidl_rmi_ProtocolFactory_createInstance(
    url, "edu.csdms.openmi.ElementSet", _ex ); SIDL_CHECK(*_ex);
  if ( instance == NULL) { return NULL; }
  self =
    (struct edu_csdms_openmi_ElementSet__object*) malloc(
      sizeof(struct edu_csdms_openmi_ElementSet__object));

  r_obj =
    (struct edu_csdms_openmi_ElementSet__remote*) malloc(
      sizeof(struct edu_csdms_openmi_ElementSet__remote));

  if(!self || !r_obj) {
    sidl_MemAllocException ex = sidl_MemAllocException_getSingletonException(
      _ex);
    SIDL_CHECK(*_ex);
    sidl_MemAllocException_setNote(ex, "Out of memory.", _ex); SIDL_CHECK(*_ex);
    sidl_MemAllocException_add(ex, __FILE__, __LINE__, 
      "edu.csdms.openmi.ElementSet.EPVgeneration", _ex);
    SIDL_CHECK(*_ex);
    *_ex = (struct sidl_BaseInterface__object*)ex;
    goto EXIT;
  }

  r_obj->d_refcount = 1;
  r_obj->d_ih = instance;
  s0 =                                       self;
  s1 =                                       &s0->d_sidl_baseclass;

  LOCK_STATIC_GLOBALS;
  if (!s_remote_initialized) {
    edu_csdms_openmi_ElementSet__init_remote_epv();
  }
  UNLOCK_STATIC_GLOBALS;

  s1->d_sidl_baseinterface.d_epv    = &s_rem_epv__sidl_baseinterface;
  s1->d_sidl_baseinterface.d_object = (void*) self;

  s1->d_data = (void*) r_obj;
  s1->d_epv  = &s_rem_epv__sidl_baseclass;

  s0->d_edu_csdms_openmi_ielementset.d_epv    = 
    &s_rem_epv__edu_csdms_openmi_ielementset;
  s0->d_edu_csdms_openmi_ielementset.d_object = (void*) self;

  s0->d_data = (void*) r_obj;
  s0->d_epv  = &s_rem_epv__edu_csdms_openmi_elementset;

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

struct edu_csdms_openmi_ElementSet__object*
edu_csdms_openmi_ElementSet__connectI(const char* url, sidl_bool ar, struct 
  sidl_BaseInterface__object **_ex)
{
  return edu_csdms_openmi_ElementSet__remoteConnect(url, ar, _ex);
}


#endif /*WITH_RMI*/
/*
 * Function to extract IOR reference from the Java object.
 */

static struct edu_csdms_openmi_ElementSet__object* _get_ior(
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
  return (struct edu_csdms_openmi_ElementSet__object*) ptr;
}

/*
 * External reference to IOR methods.
 */

static const struct edu_csdms_openmi_ElementSet__external* s_external = NULL;

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
  _res = POINTER_TO_JLONG(edu_csdms_openmi_ElementSet__remoteCreate(_tmp_url, 
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
  struct edu_csdms_openmi_ElementSet__object *_ptr = (
    *s_external->createObject)(g_data, &_ex);
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
  _res = POINTER_TO_JLONG(edu_csdms_openmi_ElementSet__remoteConnect(_tmp_url, 
    1, &_ex));
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
 * Method:  setID[]
 */

static void
jni_setID(
  JNIEnv* env,
  jobject obj,
  jstring _arg_ID)
{
  /*
   * Declare return and temporary variables.
   */

  struct edu_csdms_openmi_ElementSet__object* _ior = NULL;
  char* _tmp_ID = (char*) NULL;
  struct sidl_BaseInterface__object *_ex = NULL;

  /*
   * Preprocess Java types and convert into IOR.
   */

  _ior = _get_ior(env, obj);
  _tmp_ID = sidl_Java_J2I_string(env, _arg_ID);

  /*
   * Call the IOR method through the EPV.
   */

  (*(_ior->d_epv->f_setID))(
    _ior,
    _tmp_ID,
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
  sidl_String_free(_tmp_ID);
}

/*
 * Method:  setElements[]
 */

static void
jni_setElements(
  JNIEnv* env,
  jobject obj,
  jobject _arg_values)
{
  /*
   * Declare return and temporary variables.
   */

  struct edu_csdms_openmi_ElementSet__object* _ior = NULL;
  struct edu_csdms_openmi_Element__array* _tmp_values = (struct 
    edu_csdms_openmi_Element__array*) NULL;
  struct sidl_BaseInterface__object *_ex = NULL;

  /*
   * Preprocess Java types and convert into IOR.
   */

  _ior = _get_ior(env, obj);
  _tmp_values = (struct edu_csdms_openmi_Element__array*) 
    sidl_Java_J2I_borrow_array(env, _arg_values);

  /*
   * Call the IOR method through the EPV.
   */

  (*(_ior->d_epv->f_setElements))(
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
 * Method:  addElement[]
 */

static void
jni_addElement(
  JNIEnv* env,
  jobject obj,
  jobject _arg_element)
{
  /*
   * Declare return and temporary variables.
   */

  struct edu_csdms_openmi_ElementSet__object* _ior = NULL;
  struct edu_csdms_openmi_Element__object* _tmp_element = (struct 
    edu_csdms_openmi_Element__object*) NULL;
  struct sidl_BaseInterface__object *_ex = NULL;

  /*
   * Preprocess Java types and convert into IOR.
   */

  _ior = _get_ior(env, obj);
  _tmp_element = (struct edu_csdms_openmi_Element__object*) sidl_Java_J2I_cls(
    env, _arg_element, FALSE);JAVA_CHECK(env);

  /*
   * Call the IOR method through the EPV.
   */

  (*(_ior->d_epv->f_addElement))(
    _ior,
    _tmp_element,
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
  JAVA_EXIT:
  return;
}

/*
 * Method:  setElementType[]
 */

static void
jni_setElementType(
  JNIEnv* env,
  jobject obj,
  jlong _arg_elementType)
{
  /*
   * Declare return and temporary variables.
   */

  struct edu_csdms_openmi_ElementSet__object* _ior = NULL;
  int64_t _tmp_elementType = (int64_t) 0;
  struct sidl_BaseInterface__object *_ex = NULL;

  /*
   * Preprocess Java types and convert into IOR.
   */

  _ior = _get_ior(env, obj);
  _tmp_elementType = (int64_t) _arg_elementType;

  /*
   * Call the IOR method through the EPV.
   */

  (*(_ior->d_epv->f_setElementType))(
    _ior,
    _tmp_elementType,
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
 * Method:  setSpatialReference[]
 */

static void
jni_setSpatialReference(
  JNIEnv* env,
  jobject obj,
  jobject _arg_spatialReference)
{
  /*
   * Declare return and temporary variables.
   */

  struct edu_csdms_openmi_ElementSet__object* _ior = NULL;
  struct edu_csdms_openmi_ISpatialReference__object* _tmp_spatialReference = (
    struct edu_csdms_openmi_ISpatialReference__object*) NULL;
  struct sidl_BaseInterface__object *_ex = NULL;

  /*
   * Preprocess Java types and convert into IOR.
   */

  _ior = _get_ior(env, obj);
  _tmp_spatialReference = (struct edu_csdms_openmi_ISpatialReference__object*) 
    sidl_Java_J2I_ifc(env, _arg_spatialReference, 
    "edu.csdms.openmi.ISpatialReference", FALSE);JAVA_CHECK(env);

  /*
   * Call the IOR method through the EPV.
   */

  (*(_ior->d_epv->f_setSpatialReference))(
    _ior,
    _tmp_spatialReference,
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
  JAVA_EXIT:
  return;
}

/*
 * Method:  setRasterGrid[]
 */

static void
jni_setRasterGrid(
  JNIEnv* env,
  jobject obj,
  jint _arg_nx,
  jint _arg_ny,
  jdouble _arg_dx,
  jdouble _arg_dy,
  jdouble _arg_x0,
  jdouble _arg_y0)
{
  /*
   * Declare return and temporary variables.
   */

  struct edu_csdms_openmi_ElementSet__object* _ior = NULL;
  int32_t _tmp_nx = 0;
  int32_t _tmp_ny = 0;
  double _tmp_dx = 0.0;
  double _tmp_dy = 0.0;
  double _tmp_x0 = 0.0;
  double _tmp_y0 = 0.0;
  struct sidl_BaseInterface__object *_ex = NULL;

  /*
   * Preprocess Java types and convert into IOR.
   */

  _ior = _get_ior(env, obj);
  _tmp_nx = (int32_t) _arg_nx;
  _tmp_ny = (int32_t) _arg_ny;
  _tmp_dx = (double) _arg_dx;
  _tmp_dy = (double) _arg_dy;
  _tmp_x0 = (double) _arg_x0;
  _tmp_y0 = (double) _arg_y0;

  /*
   * Call the IOR method through the EPV.
   */

  (*(_ior->d_epv->f_setRasterGrid))(
    _ior,
    _tmp_nx,
    _tmp_ny,
    _tmp_dx,
    _tmp_dy,
    _tmp_x0,
    _tmp_y0,
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
  jobject obj,
  jobject _arg_dummy0,
  jobject _arg_dummy1,
  jobject _arg_dummy2)
{
  /*
   * Declare return and temporary variables.
   */

  struct edu_csdms_openmi_ElementSet__object* _ior = NULL;
  struct edu_csdms_openmi_SpatialReference__object* _tmp_dummy0 = (struct 
    edu_csdms_openmi_SpatialReference__object*) NULL;
  struct edu_csdms_openmi_Element__object* _tmp_dummy1 = (struct 
    edu_csdms_openmi_Element__object*) NULL;
  struct edu_csdms_openmi_ISpatialReference__object* _tmp_dummy2 = (struct 
    edu_csdms_openmi_ISpatialReference__object*) NULL;
  struct sidl_BaseInterface__object *_ex = NULL;

  /*
   * Preprocess Java types and convert into IOR.
   */

  _ior = _get_ior(env, obj);
  _tmp_dummy0 = (struct edu_csdms_openmi_SpatialReference__object*) 
    sidl_Java_J2I_cls(env, _arg_dummy0, FALSE);JAVA_CHECK(env);
  _tmp_dummy1 = (struct edu_csdms_openmi_Element__object*) sidl_Java_J2I_cls(
    env, _arg_dummy1, FALSE);JAVA_CHECK(env);
  _tmp_dummy2 = (struct edu_csdms_openmi_ISpatialReference__object*) 
    sidl_Java_J2I_ifc(env, _arg_dummy2, "edu.csdms.openmi.ISpatialReference", 
    FALSE);JAVA_CHECK(env);

  /*
   * Call the IOR method through the EPV.
   */

  (*(_ior->d_epv->f_boccaForceUsePortInclude))(
    _ior,
    _tmp_dummy0,
    _tmp_dummy1,
    _tmp_dummy2,
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
  JAVA_EXIT:
  return;
}

/*
 * Method:  getID[]
 */

static jstring
jni_getID(
  JNIEnv* env,
  jobject obj)
{
  /*
   * Declare return and temporary variables.
   */

  struct edu_csdms_openmi_ElementSet__object* _ior = NULL;
  char* _ior_res = (char*) NULL;
  jstring _res = (jstring) NULL;
  struct sidl_BaseInterface__object *_ex = NULL;

  /*
   * Preprocess Java types and convert into IOR.
   */

  _ior = _get_ior(env, obj);

  /*
   * Call the IOR method through the EPV.
   */

  _ior_res = (*(_ior->d_epv->f_getID))(
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
  _res = sidl_Java_I2J_string(env, _ior_res);
  sidl_String_free(_ior_res);

  return _res;
}

/*
 * Method:  getDescription[]
 */

static jstring
jni_getDescription(
  JNIEnv* env,
  jobject obj)
{
  /*
   * Declare return and temporary variables.
   */

  struct edu_csdms_openmi_ElementSet__object* _ior = NULL;
  char* _ior_res = (char*) NULL;
  jstring _res = (jstring) NULL;
  struct sidl_BaseInterface__object *_ex = NULL;

  /*
   * Preprocess Java types and convert into IOR.
   */

  _ior = _get_ior(env, obj);

  /*
   * Call the IOR method through the EPV.
   */

  _ior_res = (*(_ior->d_epv->f_getDescription))(
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
  _res = sidl_Java_I2J_string(env, _ior_res);
  sidl_String_free(_ior_res);

  return _res;
}

/*
 * Method:  getSpatialReference[]
 */

static jobject
jni_getSpatialReference(
  JNIEnv* env,
  jobject obj)
{
  /*
   * Declare return and temporary variables.
   */

  struct edu_csdms_openmi_ElementSet__object* _ior = NULL;
  struct edu_csdms_openmi_ISpatialReference__object* _ior_res = (struct 
    edu_csdms_openmi_ISpatialReference__object*) NULL;
  jobject _res = (jobject) NULL;
  struct sidl_BaseInterface__object *_ex = NULL;

  /*
   * Preprocess Java types and convert into IOR.
   */

  _ior = _get_ior(env, obj);

  /*
   * Call the IOR method through the EPV.
   */

  _ior_res = (*(_ior->d_epv->f_getSpatialReference))(
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
  _res = sidl_Java_I2J_ifc(env, _ior_res, "edu.csdms.openmi.ISpatialReference", 
    FALSE);JAVA_CHECK(env);

  return _res;
  JAVA_EXIT:

  return _res;
}

/*
 * Method:  getElementType[]
 */

static jlong
jni_getElementType(
  JNIEnv* env,
  jobject obj)
{
  /*
   * Declare return and temporary variables.
   */

  struct edu_csdms_openmi_ElementSet__object* _ior = NULL;
  int64_t _ior_res = (int64_t) 0;
  jlong _res = 0;
  struct sidl_BaseInterface__object *_ex = NULL;

  /*
   * Preprocess Java types and convert into IOR.
   */

  _ior = _get_ior(env, obj);

  /*
   * Call the IOR method through the EPV.
   */

  _ior_res = (*(_ior->d_epv->f_getElementType))(
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
  _res = (jlong) _ior_res;

  return _res;
}

/*
 * Method:  getElementCount[]
 */

static jint
jni_getElementCount(
  JNIEnv* env,
  jobject obj)
{
  /*
   * Declare return and temporary variables.
   */

  struct edu_csdms_openmi_ElementSet__object* _ior = NULL;
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

  _ior_res = (*(_ior->d_epv->f_getElementCount))(
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
 * Method:  getVersion[]
 */

static jint
jni_getVersion(
  JNIEnv* env,
  jobject obj)
{
  /*
   * Declare return and temporary variables.
   */

  struct edu_csdms_openmi_ElementSet__object* _ior = NULL;
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

  _ior_res = (*(_ior->d_epv->f_getVersion))(
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
 * Method:  getElementIndex[]
 */

static jint
jni_getElementIndex(
  JNIEnv* env,
  jobject obj,
  jstring _arg_elementID)
{
  /*
   * Declare return and temporary variables.
   */

  struct edu_csdms_openmi_ElementSet__object* _ior = NULL;
  char* _tmp_elementID = (char*) NULL;
  int32_t _ior_res = 0;
  jint _res = 0;
  struct sidl_BaseInterface__object *_ex = NULL;

  /*
   * Preprocess Java types and convert into IOR.
   */

  _ior = _get_ior(env, obj);
  _tmp_elementID = sidl_Java_J2I_string(env, _arg_elementID);

  /*
   * Call the IOR method through the EPV.
   */

  _ior_res = (*(_ior->d_epv->f_getElementIndex))(
    _ior,
    _tmp_elementID,
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
  sidl_String_free(_tmp_elementID);
  _res = (jint) _ior_res;

  return _res;
}

/*
 * Method:  getElementID[]
 */

static jstring
jni_getElementID(
  JNIEnv* env,
  jobject obj,
  jint _arg_elementIndex)
{
  /*
   * Declare return and temporary variables.
   */

  struct edu_csdms_openmi_ElementSet__object* _ior = NULL;
  int32_t _tmp_elementIndex = 0;
  char* _ior_res = (char*) NULL;
  jstring _res = (jstring) NULL;
  struct sidl_BaseInterface__object *_ex = NULL;

  /*
   * Preprocess Java types and convert into IOR.
   */

  _ior = _get_ior(env, obj);
  _tmp_elementIndex = (int32_t) _arg_elementIndex;

  /*
   * Call the IOR method through the EPV.
   */

  _ior_res = (*(_ior->d_epv->f_getElementID))(
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
  _res = sidl_Java_I2J_string(env, _ior_res);
  sidl_String_free(_ior_res);

  return _res;
}

/*
 * Method:  getVertexCount[]
 */

static jint
jni_getVertexCount(
  JNIEnv* env,
  jobject obj,
  jint _arg_elementIndex)
{
  /*
   * Declare return and temporary variables.
   */

  struct edu_csdms_openmi_ElementSet__object* _ior = NULL;
  int32_t _tmp_elementIndex = 0;
  int32_t _ior_res = 0;
  jint _res = 0;
  struct sidl_BaseInterface__object *_ex = NULL;

  /*
   * Preprocess Java types and convert into IOR.
   */

  _ior = _get_ior(env, obj);
  _tmp_elementIndex = (int32_t) _arg_elementIndex;

  /*
   * Call the IOR method through the EPV.
   */

  _ior_res = (*(_ior->d_epv->f_getVertexCount))(
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
  _res = (jint) _ior_res;

  return _res;
}

/*
 * Method:  getFaceCount[]
 */

static jint
jni_getFaceCount(
  JNIEnv* env,
  jobject obj,
  jint _arg_elementIndex)
{
  /*
   * Declare return and temporary variables.
   */

  struct edu_csdms_openmi_ElementSet__object* _ior = NULL;
  int32_t _tmp_elementIndex = 0;
  int32_t _ior_res = 0;
  jint _res = 0;
  struct sidl_BaseInterface__object *_ex = NULL;

  /*
   * Preprocess Java types and convert into IOR.
   */

  _ior = _get_ior(env, obj);
  _tmp_elementIndex = (int32_t) _arg_elementIndex;

  /*
   * Call the IOR method through the EPV.
   */

  _ior_res = (*(_ior->d_epv->f_getFaceCount))(
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
  _res = (jint) _ior_res;

  return _res;
}

/*
 * Method:  getFaceVertexIndices[]
 */

static jobject
jni_getFaceVertexIndices(
  JNIEnv* env,
  jobject obj,
  jint _arg_elementIndex,
  jint _arg_faceIndex)
{
  /*
   * Declare return and temporary variables.
   */

  struct edu_csdms_openmi_ElementSet__object* _ior = NULL;
  int32_t _tmp_elementIndex = 0;
  int32_t _tmp_faceIndex = 0;
  struct sidl_int__array* _ior_res = (struct sidl_int__array*) NULL;
  jobject _res = (jobject) NULL;
  struct sidl_BaseInterface__object *_ex = NULL;

  /*
   * Preprocess Java types and convert into IOR.
   */

  _ior = _get_ior(env, obj);
  _tmp_elementIndex = (int32_t) _arg_elementIndex;
  _tmp_faceIndex = (int32_t) _arg_faceIndex;

  /*
   * Call the IOR method through the EPV.
   */

  _ior_res = (*(_ior->d_epv->f_getFaceVertexIndices))(
    _ior,
    _tmp_elementIndex,
    _tmp_faceIndex,
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
  _res = sidl_Java_I2J_new_array(env, _ior_res, "sidl.Integer$Array1");

  return _res;
}

/*
 * Method:  getXCoordinate[]
 */

static jdouble
jni_getXCoordinate(
  JNIEnv* env,
  jobject obj,
  jint _arg_elementIndex,
  jint _arg_vertexIndex)
{
  /*
   * Declare return and temporary variables.
   */

  struct edu_csdms_openmi_ElementSet__object* _ior = NULL;
  int32_t _tmp_elementIndex = 0;
  int32_t _tmp_vertexIndex = 0;
  double _ior_res = 0.0;
  jdouble _res = 0.0;
  struct sidl_BaseInterface__object *_ex = NULL;

  /*
   * Preprocess Java types and convert into IOR.
   */

  _ior = _get_ior(env, obj);
  _tmp_elementIndex = (int32_t) _arg_elementIndex;
  _tmp_vertexIndex = (int32_t) _arg_vertexIndex;

  /*
   * Call the IOR method through the EPV.
   */

  _ior_res = (*(_ior->d_epv->f_getXCoordinate))(
    _ior,
    _tmp_elementIndex,
    _tmp_vertexIndex,
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
 * Method:  getYCoordinate[]
 */

static jdouble
jni_getYCoordinate(
  JNIEnv* env,
  jobject obj,
  jint _arg_elementIndex,
  jint _arg_vertexIndex)
{
  /*
   * Declare return and temporary variables.
   */

  struct edu_csdms_openmi_ElementSet__object* _ior = NULL;
  int32_t _tmp_elementIndex = 0;
  int32_t _tmp_vertexIndex = 0;
  double _ior_res = 0.0;
  jdouble _res = 0.0;
  struct sidl_BaseInterface__object *_ex = NULL;

  /*
   * Preprocess Java types and convert into IOR.
   */

  _ior = _get_ior(env, obj);
  _tmp_elementIndex = (int32_t) _arg_elementIndex;
  _tmp_vertexIndex = (int32_t) _arg_vertexIndex;

  /*
   * Call the IOR method through the EPV.
   */

  _ior_res = (*(_ior->d_epv->f_getYCoordinate))(
    _ior,
    _tmp_elementIndex,
    _tmp_vertexIndex,
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
 * Method:  getZCoordinate[]
 */

static jdouble
jni_getZCoordinate(
  JNIEnv* env,
  jobject obj,
  jint _arg_elementIndex,
  jint _arg_vertexIndex)
{
  /*
   * Declare return and temporary variables.
   */

  struct edu_csdms_openmi_ElementSet__object* _ior = NULL;
  int32_t _tmp_elementIndex = 0;
  int32_t _tmp_vertexIndex = 0;
  double _ior_res = 0.0;
  jdouble _res = 0.0;
  struct sidl_BaseInterface__object *_ex = NULL;

  /*
   * Preprocess Java types and convert into IOR.
   */

  _ior = _get_ior(env, obj);
  _tmp_elementIndex = (int32_t) _arg_elementIndex;
  _tmp_vertexIndex = (int32_t) _arg_vertexIndex;

  /*
   * Call the IOR method through the EPV.
   */

  _ior_res = (*(_ior->d_epv->f_getZCoordinate))(
    _ior,
    _tmp_elementIndex,
    _tmp_vertexIndex,
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

  struct edu_csdms_openmi_ElementSet__object* _ior = NULL;
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

  struct edu_csdms_openmi_ElementSet__object* _ior = NULL;
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

void edu_csdms_openmi_ElementSet__register(JNIEnv* env)
{
  JNINativeMethod methods[27];
  jclass cls;

#ifdef SIDL_STATIC_LIBRARY
  s_external = edu_csdms_openmi_ElementSet__externals();
#else
  s_external = (struct 
    edu_csdms_openmi_ElementSet__external*)sidl_dynamicLoadIOR(
    "edu.csdms.openmi.ElementSet","edu_csdms_openmi_ElementSet__externals") ;
  sidl_checkIORVersion("edu.csdms.openmi.ElementSet", 
    s_external->d_ior_major_version, s_external->d_ior_minor_version, 2, 0);
#endif

  methods[0].name      = "_connect_remote_ior";
  methods[0].signature = "(Ljava/lang/String;)J";
  methods[0].fnPtr     = (void *)jni__connect_remote_ior;
  methods[1].name      = "_create_remote_ior";
  methods[1].signature = "(Ljava/lang/String;)J";
  methods[1].fnPtr     = (void *)jni__create_remote_ior;
  methods[2].name      = "_wrap";
  methods[2].signature = "(Ledu/csdms/openmi/ElementSet;)J";
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
  methods[6].name      = "setID";
  methods[6].signature = "(Ljava/lang/String;)V";
  methods[6].fnPtr     = (void *)jni_setID;
  methods[7].name      = "setElements";
  methods[7].signature = "(Ledu/csdms/openmi/Element$Array1;)V";
  methods[7].fnPtr     = (void *)jni_setElements;
  methods[8].name      = "addElement";
  methods[8].signature = "(Ledu/csdms/openmi/Element;)V";
  methods[8].fnPtr     = (void *)jni_addElement;
  methods[9].name      = "setElementType";
  methods[9].signature = "(J)V";
  methods[9].fnPtr     = (void *)jni_setElementType;
  methods[10].name      = "setSpatialReference";
  methods[10].signature = "(Ledu/csdms/openmi/ISpatialReference;)V";
  methods[10].fnPtr     = (void *)jni_setSpatialReference;
  methods[11].name      = "setRasterGrid";
  methods[11].signature = "(IIDDDD)V";
  methods[11].fnPtr     = (void *)jni_setRasterGrid;
  methods[12].name      = "boccaForceUsePortInclude";
  methods[12].signature = "(Ledu/csdms/openmi/SpatialReference;Ledu/csdms/openmi/Element;Ledu/csdms/openmi/ISpatialReference;)V";
  methods[12].fnPtr     = (void *)jni_boccaForceUsePortInclude;
  methods[13].name      = "getID";
  methods[13].signature = "()Ljava/lang/String;";
  methods[13].fnPtr     = (void *)jni_getID;
  methods[14].name      = "getDescription";
  methods[14].signature = "()Ljava/lang/String;";
  methods[14].fnPtr     = (void *)jni_getDescription;
  methods[15].name      = "getSpatialReference";
  methods[15].signature = "()Ledu/csdms/openmi/ISpatialReference;";
  methods[15].fnPtr     = (void *)jni_getSpatialReference;
  methods[16].name      = "getElementType";
  methods[16].signature = "()J";
  methods[16].fnPtr     = (void *)jni_getElementType;
  methods[17].name      = "getElementCount";
  methods[17].signature = "()I";
  methods[17].fnPtr     = (void *)jni_getElementCount;
  methods[18].name      = "getVersion";
  methods[18].signature = "()I";
  methods[18].fnPtr     = (void *)jni_getVersion;
  methods[19].name      = "getElementIndex";
  methods[19].signature = "(Ljava/lang/String;)I";
  methods[19].fnPtr     = (void *)jni_getElementIndex;
  methods[20].name      = "getElementID";
  methods[20].signature = "(I)Ljava/lang/String;";
  methods[20].fnPtr     = (void *)jni_getElementID;
  methods[21].name      = "getVertexCount";
  methods[21].signature = "(I)I";
  methods[21].fnPtr     = (void *)jni_getVertexCount;
  methods[22].name      = "getFaceCount";
  methods[22].signature = "(I)I";
  methods[22].fnPtr     = (void *)jni_getFaceCount;
  methods[23].name      = "getFaceVertexIndices";
  methods[23].signature = "(II)Lsidl/Integer$Array1;";
  methods[23].fnPtr     = (void *)jni_getFaceVertexIndices;
  methods[24].name      = "getXCoordinate";
  methods[24].signature = "(II)D";
  methods[24].fnPtr     = (void *)jni_getXCoordinate;
  methods[25].name      = "getYCoordinate";
  methods[25].signature = "(II)D";
  methods[25].fnPtr     = (void *)jni_getYCoordinate;
  methods[26].name      = "getZCoordinate";
  methods[26].signature = "(II)D";
  methods[26].fnPtr     = (void *)jni_getZCoordinate;


  cls = (*env)->FindClass(env, "edu/csdms/openmi/ElementSet");
  if (cls) {
    (*env)->RegisterNatives(env, cls, methods, 27);
    (*env)->DeleteLocalRef(env, cls);
  }
}
