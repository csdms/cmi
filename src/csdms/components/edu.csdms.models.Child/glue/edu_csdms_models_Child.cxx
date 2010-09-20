// 
// File:          edu_csdms_models_Child.cxx
// Symbol:        edu.csdms.models.Child-v0.0
// Symbol Type:   class
// Babel Version: 1.4.0 (Revision: 6607 release-1-4-0-branch)
// Description:   Client-side glue code for edu.csdms.models.Child
// 
// WARNING: Automatically generated; changes will be lost
// 
// 

#ifndef included_edu_csdms_models_Child_hxx
#include "edu_csdms_models_Child.hxx"
#endif
#ifndef included_sidl_BaseInterface_hxx
#include "sidl_BaseInterface.hxx"
#endif
#ifndef included_sidl_BaseClass_hxx
#include "sidl_BaseClass.hxx"
#endif
#ifndef included_sidl_BaseException_hxx
#include "sidl_BaseException.hxx"
#endif
#ifndef included_sidl_LangSpecificException_hxx
#include "sidl_LangSpecificException.hxx"
#endif
#ifndef included_sidl_RuntimeException_hxx
#include "sidl_RuntimeException.hxx"
#endif
#ifndef included_sidl_CastException_hxx
#include "sidl_CastException.hxx"
#endif
#ifndef included_sidl_rmi_Call_hxx
#include "sidl_rmi_Call.hxx"
#endif
#ifndef included_sidl_rmi_Return_hxx
#include "sidl_rmi_Return.hxx"
#endif
#ifndef included_sidl_rmi_Ticket_hxx
#include "sidl_rmi_Ticket.hxx"
#endif
#ifndef included_sidl_rmi_InstanceHandle_hxx
#include "sidl_rmi_InstanceHandle.hxx"
#endif
#include "sidl_String.h"
#include "sidl_rmi_ConnectRegistry.h"
#include "babel_config.h"
#ifdef SIDL_DYNAMIC_LIBRARY
#include <stdio.h>
#include <stdlib.h>
#include "sidl_Loader.hxx"
#include "sidl_DLL.hxx"
#endif
// 
// Includes for all method dependencies.
// 
#ifndef included_edu_csdms_openmi_ElementMapper_hxx
#include "edu_csdms_openmi_ElementMapper.hxx"
#endif
#ifndef included_edu_csdms_openmi_ElementSet_hxx
#include "edu_csdms_openmi_ElementSet.hxx"
#endif
#ifndef included_edu_csdms_openmi_ElementType_hxx
#include "edu_csdms_openmi_ElementType.hxx"
#endif
#ifndef included_edu_csdms_openmi_IElementSet_hxx
#include "edu_csdms_openmi_IElementSet.hxx"
#endif
#ifndef included_edu_csdms_openmi_IValueSet_hxx
#include "edu_csdms_openmi_IValueSet.hxx"
#endif
#ifndef included_edu_csdms_openmi_ScalarSet_hxx
#include "edu_csdms_openmi_ScalarSet.hxx"
#endif
#ifndef included_edu_csdms_ports_IRFPort_hxx
#include "edu_csdms_ports_IRFPort.hxx"
#endif
#ifndef included_edu_csdms_tools_ConfigDialog_hxx
#include "edu_csdms_tools_ConfigDialog.hxx"
#endif
#ifndef included_edu_csdms_tools_IRFPortQueue_hxx
#include "edu_csdms_tools_IRFPortQueue.hxx"
#endif
#ifndef included_edu_csdms_tools_PrintQueue_hxx
#include "edu_csdms_tools_PrintQueue.hxx"
#endif
#ifndef included_edu_csdms_tools_TemplateFiles_hxx
#include "edu_csdms_tools_TemplateFiles.hxx"
#endif
#ifndef included_edu_csdms_tools_Verbose_hxx
#include "edu_csdms_tools_Verbose.hxx"
#endif
#ifndef included_gov_cca_CCAException_hxx
#include "gov_cca_CCAException.hxx"
#endif
#ifndef included_gov_cca_Services_hxx
#include "gov_cca_Services.hxx"
#endif
#ifndef included_gov_cca_ports_ParameterPortFactory_hxx
#include "gov_cca_ports_ParameterPortFactory.hxx"
#endif
#ifndef included_sidl_BaseInterface_hxx
#include "sidl_BaseInterface.hxx"
#endif
#ifndef included_sidl_ClassInfo_hxx
#include "sidl_ClassInfo.hxx"
#endif
#ifndef included_sidl_RuntimeException_hxx
#include "sidl_RuntimeException.hxx"
#endif

#define LANG_SPECIFIC_INIT()
extern "C" {
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
static struct sidl_recursive_mutex_t edu_csdms_models_Child__mutex= SIDL_RECURSIVE_MUTEX_INITIALIZER;
#define LOCK_STATIC_GLOBALS sidl_recursive_mutex_lock( &edu_csdms_models_Child__mutex )
#define UNLOCK_STATIC_GLOBALS sidl_recursive_mutex_unlock( &edu_csdms_models_Child__mutex )
/* #define HAVE_LOCKED_STATIC_GLOBALS (sidl_recursive_mutex_trylock( &edu_csdms_models_Child__mutex )==EDEADLOCK) */
#else
#define LOCK_STATIC_GLOBALS
#define UNLOCK_STATIC_GLOBALS
/* #define HAVE_LOCKED_STATIC_GLOBALS (1) */
#endif

  // Static variables to hold version of IOR
  static const int32_t s_IOR_MAJOR_VERSION = 2;
  static const int32_t s_IOR_MINOR_VERSION = 0;

  // Static variables for managing EPV initialization.
  static int s_remote_initialized = 0;

  static struct edu_csdms_models_Child__epv s_rem_epv__edu_csdms_models_child;

  static struct edu_csdms_ports_IRFPort__epv s_rem_epv__edu_csdms_ports_irfport;

  static struct gov_cca_Component__epv s_rem_epv__gov_cca_component;

  static struct gov_cca_ComponentRelease__epv 
    s_rem_epv__gov_cca_componentrelease;

  static struct gov_cca_Port__epv s_rem_epv__gov_cca_port;

  static struct gov_cca_ports_GoPort__epv s_rem_epv__gov_cca_ports_goport;

  static struct sidl_BaseClass__epv  s_rem_epv__sidl_baseclass;

  static struct sidl_BaseInterface__epv  s_rem_epv__sidl_baseinterface;


  // REMOTE CAST: dynamic type casting for remote objects.
  static void* remote_edu_csdms_models_Child__cast(
    struct edu_csdms_models_Child__object* self,
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
          cmp = strcmp(name, "edu.csdms.models.Child");
          if (!cmp) {
            (*self->d_epv->f_addRef)(self, _ex); SIDL_CHECK(*_ex);
            cast = ((struct edu_csdms_models_Child__object*)self);
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
    if ((*self->d_epv->f_isType)(self,name, _ex)) {
      void* (*func)(struct sidl_rmi_InstanceHandle__object*, struct 
        sidl_BaseInterface__object**) = 
        (void* (*)(struct sidl_rmi_InstanceHandle__object*, struct 
          sidl_BaseInterface__object**)) 
        sidl_rmi_ConnectRegistry_getConnect(name, _ex);SIDL_CHECK(*_ex);
      cast =  (*func)(((struct 
        edu_csdms_models_Child__remote*)self->d_data)->d_ih, _ex);
    }

    return cast;
    EXIT:
    return NULL;
  }

  // REMOTE DELETE: call the remote destructor for the object.
  static void remote_edu_csdms_models_Child__delete(
    struct edu_csdms_models_Child__object* self,
    struct sidl_BaseInterface__object* *_ex)
  {
    *_ex = NULL;
    free((void*) self);
  }

  // REMOTE GETURL: call the getURL function for the object.
  static char* remote_edu_csdms_models_Child__getURL(
    struct edu_csdms_models_Child__object* self, struct 
      sidl_BaseInterface__object* *_ex)
  {
    struct sidl_rmi_InstanceHandle__object *conn = ((struct 
      edu_csdms_models_Child__remote*)self->d_data)->d_ih;
    *_ex = NULL;
    if(conn != NULL) {
      return sidl_rmi_InstanceHandle_getObjectURL(conn, _ex);
    }
    return NULL;
  }

  // REMOTE ADDREF: For internal babel use only! Remote addRef.
  static void remote_edu_csdms_models_Child__raddRef(
    struct edu_csdms_models_Child__object* self,struct 
      sidl_BaseInterface__object* *_ex)
  {
    struct sidl_BaseException__object* netex = NULL;
    // initialize a new invocation
    struct sidl_BaseInterface__object* _throwaway = NULL;
    struct sidl_rmi_InstanceHandle__object *_conn = ((struct 
      edu_csdms_models_Child__remote*)self->d_data)->d_ih;
    sidl_rmi_Response _rsvp = NULL;
    sidl_rmi_Invocation _inv = sidl_rmi_InstanceHandle_createInvocation( _conn, 
      "addRef", _ex ); SIDL_CHECK(*_ex);
    // send actual RMI request
    _rsvp = sidl_rmi_Invocation_invokeMethod(_inv,_ex);SIDL_CHECK(*_ex);
    // Check for exceptions
    netex = sidl_rmi_Response_getExceptionThrown(_rsvp, _ex);
    if(netex != NULL) {
      *_ex = (struct sidl_BaseInterface__object*)netex;
      return;
    }

    // cleanup and return
    EXIT:
    if(_inv) { sidl_rmi_Invocation_deleteRef(_inv,&_throwaway); }
    if(_rsvp) { sidl_rmi_Response_deleteRef(_rsvp,&_throwaway); }
    return;
  }

  // REMOTE ISREMOTE: returns true if this object is Remote (it is).
  static sidl_bool
  remote_edu_csdms_models_Child__isRemote(
      struct edu_csdms_models_Child__object* self, 
      struct sidl_BaseInterface__object* *_ex) {
    *_ex = NULL;
    return TRUE;
  }

  // REMOTE METHOD STUB:_set_hooks
  static void
  remote_edu_csdms_models_Child__set_hooks(
    /* in */ struct edu_csdms_models_Child__object*self ,
    /* in */ sidl_bool enable,
    /* out */ struct sidl_BaseInterface__object **_ex)
  {
    LANG_SPECIFIC_INIT();
    *_ex = NULL;
    {
      // initialize a new invocation
      struct sidl_BaseInterface__object* _throwaway = NULL;
      sidl_BaseException _be = NULL;
      sidl_rmi_Response _rsvp = NULL;
      struct sidl_rmi_InstanceHandle__object * _conn = ((struct 
        edu_csdms_models_Child__remote*)self->d_data)->d_ih;
      sidl_rmi_Invocation _inv = sidl_rmi_InstanceHandle_createInvocation( 
        _conn, "_set_hooks", _ex ); SIDL_CHECK(*_ex);

      // pack in and inout arguments
      sidl_rmi_Invocation_packBool( _inv, "enable", enable, _ex);SIDL_CHECK(
        *_ex);

      // send actual RMI request
      _rsvp = sidl_rmi_Invocation_invokeMethod(_inv, _ex);SIDL_CHECK(*_ex);

      _be = sidl_rmi_Response_getExceptionThrown(_rsvp, _ex);SIDL_CHECK(*_ex);
      if (_be != NULL) {
        struct sidl_BaseInterface__object* throwaway_exception = NULL;
        sidl_BaseException_addLine(_be, 
      "Exception unserialized from edu.csdms.models.Child._set_hooks.",
          &throwaway_exception);
        *_ex = (struct sidl_BaseInterface__object*) sidl_BaseInterface__cast(
          _be,&throwaway_exception);
        goto EXIT;
      }

      // unpack out and inout arguments

      // cleanup and return
      EXIT:
      if(_inv) { sidl_rmi_Invocation_deleteRef(_inv, &_throwaway); }
      if(_rsvp) { sidl_rmi_Response_deleteRef(_rsvp, &_throwaway); }
      return;
    }
  }

  // Contract enforcement has not been implemented for remote use.
  // REMOTE METHOD STUB:_set_contracts
  static void
  remote_edu_csdms_models_Child__set_contracts(
    /* in */ struct edu_csdms_models_Child__object*self ,
    /* in */ sidl_bool enable,
    /* in */ const char* enfFilename,
    /* in */ sidl_bool resetCounters,
    /* out */ struct sidl_BaseInterface__object **_ex)
  {
    LANG_SPECIFIC_INIT();
    *_ex = NULL;
    {
      // initialize a new invocation
      struct sidl_BaseInterface__object* _throwaway = NULL;
      sidl_BaseException _be = NULL;
      sidl_rmi_Response _rsvp = NULL;
      struct sidl_rmi_InstanceHandle__object * _conn = ((struct 
        edu_csdms_models_Child__remote*)self->d_data)->d_ih;
      sidl_rmi_Invocation _inv = sidl_rmi_InstanceHandle_createInvocation( 
        _conn, "_set_contracts", _ex ); SIDL_CHECK(*_ex);

      // pack in and inout arguments
      sidl_rmi_Invocation_packBool( _inv, "enable", enable, _ex);SIDL_CHECK(
        *_ex);
      sidl_rmi_Invocation_packString( _inv, "enfFilename", enfFilename, 
        _ex);SIDL_CHECK(*_ex);
      sidl_rmi_Invocation_packBool( _inv, "resetCounters", resetCounters, 
        _ex);SIDL_CHECK(*_ex);

      // send actual RMI request
      _rsvp = sidl_rmi_Invocation_invokeMethod(_inv, _ex);SIDL_CHECK(*_ex);

      _be = sidl_rmi_Response_getExceptionThrown(_rsvp, _ex);SIDL_CHECK(*_ex);
      if (_be != NULL) {
        struct sidl_BaseInterface__object* throwaway_exception = NULL;
        sidl_BaseException_addLine(_be, 
      "Exception unserialized from edu.csdms.models.Child._set_contracts.",
          &throwaway_exception);
        *_ex = (struct sidl_BaseInterface__object*) sidl_BaseInterface__cast(
          _be,&throwaway_exception);
        goto EXIT;
      }

      // unpack out and inout arguments

      // cleanup and return
      EXIT:
      if(_inv) { sidl_rmi_Invocation_deleteRef(_inv, &_throwaway); }
      if(_rsvp) { sidl_rmi_Response_deleteRef(_rsvp, &_throwaway); }
      return;
    }
  }

  // Contract enforcement has not been implemented for remote use.
  // REMOTE METHOD STUB:_dump_stats
  static void
  remote_edu_csdms_models_Child__dump_stats(
    /* in */ struct edu_csdms_models_Child__object*self ,
    /* in */ const char* filename,
    /* in */ const char* prefix,
    /* out */ struct sidl_BaseInterface__object **_ex)
  {
    LANG_SPECIFIC_INIT();
    *_ex = NULL;
    {
      // initialize a new invocation
      struct sidl_BaseInterface__object* _throwaway = NULL;
      sidl_BaseException _be = NULL;
      sidl_rmi_Response _rsvp = NULL;
      struct sidl_rmi_InstanceHandle__object * _conn = ((struct 
        edu_csdms_models_Child__remote*)self->d_data)->d_ih;
      sidl_rmi_Invocation _inv = sidl_rmi_InstanceHandle_createInvocation( 
        _conn, "_dump_stats", _ex ); SIDL_CHECK(*_ex);

      // pack in and inout arguments
      sidl_rmi_Invocation_packString( _inv, "filename", filename, 
        _ex);SIDL_CHECK(*_ex);
      sidl_rmi_Invocation_packString( _inv, "prefix", prefix, _ex);SIDL_CHECK(
        *_ex);

      // send actual RMI request
      _rsvp = sidl_rmi_Invocation_invokeMethod(_inv, _ex);SIDL_CHECK(*_ex);

      _be = sidl_rmi_Response_getExceptionThrown(_rsvp, _ex);SIDL_CHECK(*_ex);
      if (_be != NULL) {
        struct sidl_BaseInterface__object* throwaway_exception = NULL;
        sidl_BaseException_addLine(_be, 
      "Exception unserialized from edu.csdms.models.Child._dump_stats.",
          &throwaway_exception);
        *_ex = (struct sidl_BaseInterface__object*) sidl_BaseInterface__cast(
          _be,&throwaway_exception);
        goto EXIT;
      }

      // unpack out and inout arguments

      // cleanup and return
      EXIT:
      if(_inv) { sidl_rmi_Invocation_deleteRef(_inv, &_throwaway); }
      if(_rsvp) { sidl_rmi_Response_deleteRef(_rsvp, &_throwaway); }
      return;
    }
  }

  // REMOTE EXEC: call the exec function for the object.
  static void remote_edu_csdms_models_Child__exec(
    struct edu_csdms_models_Child__object* self,const char* methodName,
    sidl_rmi_Call inArgs,
    sidl_rmi_Return outArgs,
    struct sidl_BaseInterface__object* *_ex)
  {
    *_ex = NULL;
  }

  // REMOTE METHOD STUB:boccaSetServices
  static void
  remote_edu_csdms_models_Child_boccaSetServices(
    /* in */ struct edu_csdms_models_Child__object*self ,
    /* in */ struct gov_cca_Services__object* services,
    /* out */ struct sidl_BaseInterface__object **_ex)
  {
    LANG_SPECIFIC_INIT();
    *_ex = NULL;
    {
      // initialize a new invocation
      struct sidl_BaseInterface__object* _throwaway = NULL;
      sidl_BaseException _be = NULL;
      sidl_rmi_Response _rsvp = NULL;
      struct sidl_rmi_InstanceHandle__object * _conn = ((struct 
        edu_csdms_models_Child__remote*)self->d_data)->d_ih;
      sidl_rmi_Invocation _inv = sidl_rmi_InstanceHandle_createInvocation( 
        _conn, "boccaSetServices", _ex ); SIDL_CHECK(*_ex);

      // pack in and inout arguments
      if(services){
        char* _url = sidl_BaseInterface__getURL((sidl_BaseInterface)services, 
          _ex);SIDL_CHECK(*_ex);
        sidl_rmi_Invocation_packString( _inv, "services", _url, _ex);SIDL_CHECK(
          *_ex);
        free((void*)_url);
      } else {
        sidl_rmi_Invocation_packString( _inv, "services", NULL, _ex);SIDL_CHECK(
          *_ex);
      }

      // send actual RMI request
      _rsvp = sidl_rmi_Invocation_invokeMethod(_inv, _ex);SIDL_CHECK(*_ex);

      _be = sidl_rmi_Response_getExceptionThrown(_rsvp, _ex);SIDL_CHECK(*_ex);
      if (_be != NULL) {
        struct sidl_BaseInterface__object* throwaway_exception = NULL;
        sidl_BaseException_addLine(_be, 
      "Exception unserialized from edu.csdms.models.Child.boccaSetServices.",
          &throwaway_exception);
        *_ex = (struct sidl_BaseInterface__object*) sidl_BaseInterface__cast(
          _be,&throwaway_exception);
        goto EXIT;
      }

      // unpack out and inout arguments

      // cleanup and return
      EXIT:
      if(_inv) { sidl_rmi_Invocation_deleteRef(_inv, &_throwaway); }
      if(_rsvp) { sidl_rmi_Response_deleteRef(_rsvp, &_throwaway); }
      return;
    }
  }

  // REMOTE METHOD STUB:boccaReleaseServices
  static void
  remote_edu_csdms_models_Child_boccaReleaseServices(
    /* in */ struct edu_csdms_models_Child__object*self ,
    /* in */ struct gov_cca_Services__object* services,
    /* out */ struct sidl_BaseInterface__object **_ex)
  {
    LANG_SPECIFIC_INIT();
    *_ex = NULL;
    {
      // initialize a new invocation
      struct sidl_BaseInterface__object* _throwaway = NULL;
      sidl_BaseException _be = NULL;
      sidl_rmi_Response _rsvp = NULL;
      struct sidl_rmi_InstanceHandle__object * _conn = ((struct 
        edu_csdms_models_Child__remote*)self->d_data)->d_ih;
      sidl_rmi_Invocation _inv = sidl_rmi_InstanceHandle_createInvocation( 
        _conn, "boccaReleaseServices", _ex ); SIDL_CHECK(*_ex);

      // pack in and inout arguments
      if(services){
        char* _url = sidl_BaseInterface__getURL((sidl_BaseInterface)services, 
          _ex);SIDL_CHECK(*_ex);
        sidl_rmi_Invocation_packString( _inv, "services", _url, _ex);SIDL_CHECK(
          *_ex);
        free((void*)_url);
      } else {
        sidl_rmi_Invocation_packString( _inv, "services", NULL, _ex);SIDL_CHECK(
          *_ex);
      }

      // send actual RMI request
      _rsvp = sidl_rmi_Invocation_invokeMethod(_inv, _ex);SIDL_CHECK(*_ex);

      _be = sidl_rmi_Response_getExceptionThrown(_rsvp, _ex);SIDL_CHECK(*_ex);
      if (_be != NULL) {
        struct sidl_BaseInterface__object* throwaway_exception = NULL;
        sidl_BaseException_addLine(_be, 
      "Exception unserialized from edu.csdms.models.Child.boccaReleaseServices.",
          &throwaway_exception);
        *_ex = (struct sidl_BaseInterface__object*) sidl_BaseInterface__cast(
          _be,&throwaway_exception);
        goto EXIT;
      }

      // unpack out and inout arguments

      // cleanup and return
      EXIT:
      if(_inv) { sidl_rmi_Invocation_deleteRef(_inv, &_throwaway); }
      if(_rsvp) { sidl_rmi_Response_deleteRef(_rsvp, &_throwaway); }
      return;
    }
  }

  // REMOTE METHOD STUB:boccaForceUsePortInclude
  static void
  remote_edu_csdms_models_Child_boccaForceUsePortInclude(
    /* in */ struct edu_csdms_models_Child__object*self ,
    /* in */ struct gov_cca_ports_ParameterPortFactory__object* dummy0,
    /* in */ struct edu_csdms_ports_IRFPort__object* dummy1,
    /* in */ int64_t dummy2,
    /* in */ struct edu_csdms_tools_TemplateFiles__object* dummy3,
    /* in */ struct edu_csdms_tools_IRFPortQueue__object* dummy4,
    /* in */ struct edu_csdms_tools_Verbose__object* dummy5,
    /* in */ struct edu_csdms_openmi_ElementMapper__object* dummy6,
    /* in */ struct edu_csdms_openmi_ScalarSet__object* dummy7,
    /* in */ struct edu_csdms_tools_ConfigDialog__object* dummy8,
    /* in */ struct edu_csdms_openmi_ElementSet__object* dummy9,
    /* in */ struct edu_csdms_tools_PrintQueue__object* dummy10,
    /* out */ struct sidl_BaseInterface__object **_ex)
  {
    LANG_SPECIFIC_INIT();
    *_ex = NULL;
    {
      // initialize a new invocation
      struct sidl_BaseInterface__object* _throwaway = NULL;
      sidl_BaseException _be = NULL;
      sidl_rmi_Response _rsvp = NULL;
      struct sidl_rmi_InstanceHandle__object * _conn = ((struct 
        edu_csdms_models_Child__remote*)self->d_data)->d_ih;
      sidl_rmi_Invocation _inv = sidl_rmi_InstanceHandle_createInvocation( 
        _conn, "boccaForceUsePortInclude", _ex ); SIDL_CHECK(*_ex);

      // pack in and inout arguments
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
      sidl_rmi_Invocation_packLong( _inv, "dummy2", dummy2, _ex);SIDL_CHECK(
        *_ex);
      if(dummy3){
        char* _url = sidl_BaseInterface__getURL((sidl_BaseInterface)dummy3, 
          _ex);SIDL_CHECK(*_ex);
        sidl_rmi_Invocation_packString( _inv, "dummy3", _url, _ex);SIDL_CHECK(
          *_ex);
        free((void*)_url);
      } else {
        sidl_rmi_Invocation_packString( _inv, "dummy3", NULL, _ex);SIDL_CHECK(
          *_ex);
      }
      if(dummy4){
        char* _url = sidl_BaseInterface__getURL((sidl_BaseInterface)dummy4, 
          _ex);SIDL_CHECK(*_ex);
        sidl_rmi_Invocation_packString( _inv, "dummy4", _url, _ex);SIDL_CHECK(
          *_ex);
        free((void*)_url);
      } else {
        sidl_rmi_Invocation_packString( _inv, "dummy4", NULL, _ex);SIDL_CHECK(
          *_ex);
      }
      if(dummy5){
        char* _url = sidl_BaseInterface__getURL((sidl_BaseInterface)dummy5, 
          _ex);SIDL_CHECK(*_ex);
        sidl_rmi_Invocation_packString( _inv, "dummy5", _url, _ex);SIDL_CHECK(
          *_ex);
        free((void*)_url);
      } else {
        sidl_rmi_Invocation_packString( _inv, "dummy5", NULL, _ex);SIDL_CHECK(
          *_ex);
      }
      if(dummy6){
        char* _url = sidl_BaseInterface__getURL((sidl_BaseInterface)dummy6, 
          _ex);SIDL_CHECK(*_ex);
        sidl_rmi_Invocation_packString( _inv, "dummy6", _url, _ex);SIDL_CHECK(
          *_ex);
        free((void*)_url);
      } else {
        sidl_rmi_Invocation_packString( _inv, "dummy6", NULL, _ex);SIDL_CHECK(
          *_ex);
      }
      if(dummy7){
        char* _url = sidl_BaseInterface__getURL((sidl_BaseInterface)dummy7, 
          _ex);SIDL_CHECK(*_ex);
        sidl_rmi_Invocation_packString( _inv, "dummy7", _url, _ex);SIDL_CHECK(
          *_ex);
        free((void*)_url);
      } else {
        sidl_rmi_Invocation_packString( _inv, "dummy7", NULL, _ex);SIDL_CHECK(
          *_ex);
      }
      if(dummy8){
        char* _url = sidl_BaseInterface__getURL((sidl_BaseInterface)dummy8, 
          _ex);SIDL_CHECK(*_ex);
        sidl_rmi_Invocation_packString( _inv, "dummy8", _url, _ex);SIDL_CHECK(
          *_ex);
        free((void*)_url);
      } else {
        sidl_rmi_Invocation_packString( _inv, "dummy8", NULL, _ex);SIDL_CHECK(
          *_ex);
      }
      if(dummy9){
        char* _url = sidl_BaseInterface__getURL((sidl_BaseInterface)dummy9, 
          _ex);SIDL_CHECK(*_ex);
        sidl_rmi_Invocation_packString( _inv, "dummy9", _url, _ex);SIDL_CHECK(
          *_ex);
        free((void*)_url);
      } else {
        sidl_rmi_Invocation_packString( _inv, "dummy9", NULL, _ex);SIDL_CHECK(
          *_ex);
      }
      if(dummy10){
        char* _url = sidl_BaseInterface__getURL((sidl_BaseInterface)dummy10, 
          _ex);SIDL_CHECK(*_ex);
        sidl_rmi_Invocation_packString( _inv, "dummy10", _url, _ex);SIDL_CHECK(
          *_ex);
        free((void*)_url);
      } else {
        sidl_rmi_Invocation_packString( _inv, "dummy10", NULL, _ex);SIDL_CHECK(
          *_ex);
      }

      // send actual RMI request
      _rsvp = sidl_rmi_Invocation_invokeMethod(_inv, _ex);SIDL_CHECK(*_ex);

      _be = sidl_rmi_Response_getExceptionThrown(_rsvp, _ex);SIDL_CHECK(*_ex);
      if (_be != NULL) {
        struct sidl_BaseInterface__object* throwaway_exception = NULL;
        sidl_BaseException_addLine(_be, 
      "Exception unserialized from edu.csdms.models.Child.boccaForceUsePortInclude.",
          &throwaway_exception);
        *_ex = (struct sidl_BaseInterface__object*) sidl_BaseInterface__cast(
          _be,&throwaway_exception);
        goto EXIT;
      }

      // unpack out and inout arguments

      // cleanup and return
      EXIT:
      if(_inv) { sidl_rmi_Invocation_deleteRef(_inv, &_throwaway); }
      if(_rsvp) { sidl_rmi_Response_deleteRef(_rsvp, &_throwaway); }
      return;
    }
  }

  // REMOTE METHOD STUB:addRef
  static void
  remote_edu_csdms_models_Child_addRef(
    /* in */ struct edu_csdms_models_Child__object*self ,
    /* out */ struct sidl_BaseInterface__object **_ex)
  {
    LANG_SPECIFIC_INIT();
    *_ex = NULL;
    {
      struct edu_csdms_models_Child__remote* r_obj = (struct 
        edu_csdms_models_Child__remote*)self->d_data;
      LOCK_STATIC_GLOBALS;
      r_obj->d_refcount++;
#ifdef SIDL_DEBUG_REFCOUNT
      fprintf(stderr, "babel: addRef %p new count %d (type %s)\n",
        r_obj, r_obj->d_refcount, 
        "edu.csdms.models.Child Remote Stub");
#endif /* SIDL_DEBUG_REFCOUNT */ 
      UNLOCK_STATIC_GLOBALS;
    }
  }

  // REMOTE METHOD STUB:deleteRef
  static void
  remote_edu_csdms_models_Child_deleteRef(
    /* in */ struct edu_csdms_models_Child__object*self ,
    /* out */ struct sidl_BaseInterface__object **_ex)
  {
    LANG_SPECIFIC_INIT();
    *_ex = NULL;
    {
      struct edu_csdms_models_Child__remote* r_obj = (struct 
        edu_csdms_models_Child__remote*)self->d_data;
      LOCK_STATIC_GLOBALS;
      r_obj->d_refcount--;
#ifdef SIDL_DEBUG_REFCOUNT
      fprintf(stderr, "babel: deleteRef %p new count %d (type %s)\n",r_obj, r_obj->d_refcount, "edu.csdms.models.Child Remote Stub");
#endif /* SIDL_DEBUG_REFCOUNT */ 
      if(r_obj->d_refcount == 0) {
        sidl_rmi_InstanceHandle_deleteRef(r_obj->d_ih, _ex);
        free(r_obj);
        free(self);
      }
      UNLOCK_STATIC_GLOBALS;
    }
  }

  // REMOTE METHOD STUB:isSame
  static sidl_bool
  remote_edu_csdms_models_Child_isSame(
    /* in */ struct edu_csdms_models_Child__object*self ,
    /* in */ struct sidl_BaseInterface__object* iobj,
    /* out */ struct sidl_BaseInterface__object **_ex)
  {
    LANG_SPECIFIC_INIT();
    *_ex = NULL;
    {
      // initialize a new invocation
      struct sidl_BaseInterface__object* _throwaway = NULL;
      sidl_BaseException _be = NULL;
      sidl_rmi_Response _rsvp = NULL;
      sidl_bool _retval = FALSE;
      struct sidl_rmi_InstanceHandle__object * _conn = ((struct 
        edu_csdms_models_Child__remote*)self->d_data)->d_ih;
      sidl_rmi_Invocation _inv = sidl_rmi_InstanceHandle_createInvocation( 
        _conn, "isSame", _ex ); SIDL_CHECK(*_ex);

      // pack in and inout arguments
      if(iobj){
        char* _url = sidl_BaseInterface__getURL((sidl_BaseInterface)iobj, 
          _ex);SIDL_CHECK(*_ex);
        sidl_rmi_Invocation_packString( _inv, "iobj", _url, _ex);SIDL_CHECK(
          *_ex);
        free((void*)_url);
      } else {
        sidl_rmi_Invocation_packString( _inv, "iobj", NULL, _ex);SIDL_CHECK(
          *_ex);
      }

      // send actual RMI request
      _rsvp = sidl_rmi_Invocation_invokeMethod(_inv, _ex);SIDL_CHECK(*_ex);

      _be = sidl_rmi_Response_getExceptionThrown(_rsvp, _ex);SIDL_CHECK(*_ex);
      if (_be != NULL) {
        struct sidl_BaseInterface__object* throwaway_exception = NULL;
        sidl_BaseException_addLine(_be, 
      "Exception unserialized from edu.csdms.models.Child.isSame.",
          &throwaway_exception);
        *_ex = (struct sidl_BaseInterface__object*) sidl_BaseInterface__cast(
          _be,&throwaway_exception);
        goto EXIT;
      }

      // extract return value
      sidl_rmi_Response_unpackBool( _rsvp, "_retval", &_retval, _ex);SIDL_CHECK(
        *_ex);

      // unpack out and inout arguments

      // cleanup and return
      EXIT:
      if(_inv) { sidl_rmi_Invocation_deleteRef(_inv, &_throwaway); }
      if(_rsvp) { sidl_rmi_Response_deleteRef(_rsvp, &_throwaway); }
      return _retval;
    }
  }

  // REMOTE METHOD STUB:isType
  static sidl_bool
  remote_edu_csdms_models_Child_isType(
    /* in */ struct edu_csdms_models_Child__object*self ,
    /* in */ const char* name,
    /* out */ struct sidl_BaseInterface__object **_ex)
  {
    LANG_SPECIFIC_INIT();
    *_ex = NULL;
    {
      // initialize a new invocation
      struct sidl_BaseInterface__object* _throwaway = NULL;
      sidl_BaseException _be = NULL;
      sidl_rmi_Response _rsvp = NULL;
      sidl_bool _retval = FALSE;
      struct sidl_rmi_InstanceHandle__object * _conn = ((struct 
        edu_csdms_models_Child__remote*)self->d_data)->d_ih;
      sidl_rmi_Invocation _inv = sidl_rmi_InstanceHandle_createInvocation( 
        _conn, "isType", _ex ); SIDL_CHECK(*_ex);

      // pack in and inout arguments
      sidl_rmi_Invocation_packString( _inv, "name", name, _ex);SIDL_CHECK(*_ex);

      // send actual RMI request
      _rsvp = sidl_rmi_Invocation_invokeMethod(_inv, _ex);SIDL_CHECK(*_ex);

      _be = sidl_rmi_Response_getExceptionThrown(_rsvp, _ex);SIDL_CHECK(*_ex);
      if (_be != NULL) {
        struct sidl_BaseInterface__object* throwaway_exception = NULL;
        sidl_BaseException_addLine(_be, 
      "Exception unserialized from edu.csdms.models.Child.isType.",
          &throwaway_exception);
        *_ex = (struct sidl_BaseInterface__object*) sidl_BaseInterface__cast(
          _be,&throwaway_exception);
        goto EXIT;
      }

      // extract return value
      sidl_rmi_Response_unpackBool( _rsvp, "_retval", &_retval, _ex);SIDL_CHECK(
        *_ex);

      // unpack out and inout arguments

      // cleanup and return
      EXIT:
      if(_inv) { sidl_rmi_Invocation_deleteRef(_inv, &_throwaway); }
      if(_rsvp) { sidl_rmi_Response_deleteRef(_rsvp, &_throwaway); }
      return _retval;
    }
  }

  // REMOTE METHOD STUB:getClassInfo
  static struct sidl_ClassInfo__object*
  remote_edu_csdms_models_Child_getClassInfo(
    /* in */ struct edu_csdms_models_Child__object*self ,
    /* out */ struct sidl_BaseInterface__object **_ex)
  {
    LANG_SPECIFIC_INIT();
    *_ex = NULL;
    {
      // initialize a new invocation
      struct sidl_BaseInterface__object* _throwaway = NULL;
      sidl_BaseException _be = NULL;
      sidl_rmi_Response _rsvp = NULL;
      char*_retval_str = NULL;
      struct sidl_ClassInfo__object* _retval = 0;
      struct sidl_rmi_InstanceHandle__object * _conn = ((struct 
        edu_csdms_models_Child__remote*)self->d_data)->d_ih;
      sidl_rmi_Invocation _inv = sidl_rmi_InstanceHandle_createInvocation( 
        _conn, "getClassInfo", _ex ); SIDL_CHECK(*_ex);

      // pack in and inout arguments

      // send actual RMI request
      _rsvp = sidl_rmi_Invocation_invokeMethod(_inv, _ex);SIDL_CHECK(*_ex);

      _be = sidl_rmi_Response_getExceptionThrown(_rsvp, _ex);SIDL_CHECK(*_ex);
      if (_be != NULL) {
        struct sidl_BaseInterface__object* throwaway_exception = NULL;
        sidl_BaseException_addLine(_be, 
      "Exception unserialized from edu.csdms.models.Child.getClassInfo.",
          &throwaway_exception);
        *_ex = (struct sidl_BaseInterface__object*) sidl_BaseInterface__cast(
          _be,&throwaway_exception);
        goto EXIT;
      }

      // extract return value
      sidl_rmi_Response_unpackString( _rsvp, "_retval", &_retval_str, 
        _ex);SIDL_CHECK(*_ex);
      _retval = sidl_ClassInfo__connectI(_retval_str, FALSE, _ex);SIDL_CHECK(
        *_ex);

      // unpack out and inout arguments

      // cleanup and return
      EXIT:
      if(_inv) { sidl_rmi_Invocation_deleteRef(_inv, &_throwaway); }
      if(_rsvp) { sidl_rmi_Response_deleteRef(_rsvp, &_throwaway); }
      return _retval;
    }
  }

  // REMOTE METHOD STUB:setServices
  static void
  remote_edu_csdms_models_Child_setServices(
    /* in */ struct edu_csdms_models_Child__object*self ,
    /* in */ struct gov_cca_Services__object* services,
    /* out */ struct sidl_BaseInterface__object **_ex)
  {
    LANG_SPECIFIC_INIT();
    *_ex = NULL;
    {
      // initialize a new invocation
      struct sidl_BaseInterface__object* _throwaway = NULL;
      sidl_BaseException _be = NULL;
      sidl_rmi_Response _rsvp = NULL;
      struct sidl_rmi_InstanceHandle__object * _conn = ((struct 
        edu_csdms_models_Child__remote*)self->d_data)->d_ih;
      sidl_rmi_Invocation _inv = sidl_rmi_InstanceHandle_createInvocation( 
        _conn, "setServices", _ex ); SIDL_CHECK(*_ex);

      // pack in and inout arguments
      if(services){
        char* _url = sidl_BaseInterface__getURL((sidl_BaseInterface)services, 
          _ex);SIDL_CHECK(*_ex);
        sidl_rmi_Invocation_packString( _inv, "services", _url, _ex);SIDL_CHECK(
          *_ex);
        free((void*)_url);
      } else {
        sidl_rmi_Invocation_packString( _inv, "services", NULL, _ex);SIDL_CHECK(
          *_ex);
      }

      // send actual RMI request
      _rsvp = sidl_rmi_Invocation_invokeMethod(_inv, _ex);SIDL_CHECK(*_ex);

      _be = sidl_rmi_Response_getExceptionThrown(_rsvp, _ex);SIDL_CHECK(*_ex);
      if (_be != NULL) {
        struct sidl_BaseInterface__object* throwaway_exception = NULL;
        sidl_BaseException_addLine(_be, 
      "Exception unserialized from edu.csdms.models.Child.setServices.",
          &throwaway_exception);
        *_ex = (struct sidl_BaseInterface__object*) sidl_BaseInterface__cast(
          _be,&throwaway_exception);
        goto EXIT;
      }

      // unpack out and inout arguments

      // cleanup and return
      EXIT:
      if(_inv) { sidl_rmi_Invocation_deleteRef(_inv, &_throwaway); }
      if(_rsvp) { sidl_rmi_Response_deleteRef(_rsvp, &_throwaway); }
      return;
    }
  }

  // REMOTE METHOD STUB:releaseServices
  static void
  remote_edu_csdms_models_Child_releaseServices(
    /* in */ struct edu_csdms_models_Child__object*self ,
    /* in */ struct gov_cca_Services__object* services,
    /* out */ struct sidl_BaseInterface__object **_ex)
  {
    LANG_SPECIFIC_INIT();
    *_ex = NULL;
    {
      // initialize a new invocation
      struct sidl_BaseInterface__object* _throwaway = NULL;
      sidl_BaseException _be = NULL;
      sidl_rmi_Response _rsvp = NULL;
      struct sidl_rmi_InstanceHandle__object * _conn = ((struct 
        edu_csdms_models_Child__remote*)self->d_data)->d_ih;
      sidl_rmi_Invocation _inv = sidl_rmi_InstanceHandle_createInvocation( 
        _conn, "releaseServices", _ex ); SIDL_CHECK(*_ex);

      // pack in and inout arguments
      if(services){
        char* _url = sidl_BaseInterface__getURL((sidl_BaseInterface)services, 
          _ex);SIDL_CHECK(*_ex);
        sidl_rmi_Invocation_packString( _inv, "services", _url, _ex);SIDL_CHECK(
          *_ex);
        free((void*)_url);
      } else {
        sidl_rmi_Invocation_packString( _inv, "services", NULL, _ex);SIDL_CHECK(
          *_ex);
      }

      // send actual RMI request
      _rsvp = sidl_rmi_Invocation_invokeMethod(_inv, _ex);SIDL_CHECK(*_ex);

      _be = sidl_rmi_Response_getExceptionThrown(_rsvp, _ex);SIDL_CHECK(*_ex);
      if (_be != NULL) {
        struct sidl_BaseInterface__object* throwaway_exception = NULL;
        sidl_BaseException_addLine(_be, 
      "Exception unserialized from edu.csdms.models.Child.releaseServices.",
          &throwaway_exception);
        *_ex = (struct sidl_BaseInterface__object*) sidl_BaseInterface__cast(
          _be,&throwaway_exception);
        goto EXIT;
      }

      // unpack out and inout arguments

      // cleanup and return
      EXIT:
      if(_inv) { sidl_rmi_Invocation_deleteRef(_inv, &_throwaway); }
      if(_rsvp) { sidl_rmi_Response_deleteRef(_rsvp, &_throwaway); }
      return;
    }
  }

  // REMOTE METHOD STUB:go
  static int32_t
  remote_edu_csdms_models_Child_go(
    /* in */ struct edu_csdms_models_Child__object*self ,
    /* out */ struct sidl_BaseInterface__object **_ex)
  {
    LANG_SPECIFIC_INIT();
    *_ex = NULL;
    {
      // initialize a new invocation
      struct sidl_BaseInterface__object* _throwaway = NULL;
      sidl_BaseException _be = NULL;
      sidl_rmi_Response _rsvp = NULL;
      int32_t _retval = 0;
      struct sidl_rmi_InstanceHandle__object * _conn = ((struct 
        edu_csdms_models_Child__remote*)self->d_data)->d_ih;
      sidl_rmi_Invocation _inv = sidl_rmi_InstanceHandle_createInvocation( 
        _conn, "go", _ex ); SIDL_CHECK(*_ex);

      // pack in and inout arguments

      // send actual RMI request
      _rsvp = sidl_rmi_Invocation_invokeMethod(_inv, _ex);SIDL_CHECK(*_ex);

      _be = sidl_rmi_Response_getExceptionThrown(_rsvp, _ex);SIDL_CHECK(*_ex);
      if (_be != NULL) {
        struct sidl_BaseInterface__object* throwaway_exception = NULL;
        sidl_BaseException_addLine(_be, 
      "Exception unserialized from edu.csdms.models.Child.go.",
          &throwaway_exception);
        *_ex = (struct sidl_BaseInterface__object*) sidl_BaseInterface__cast(
          _be,&throwaway_exception);
        goto EXIT;
      }

      // extract return value
      sidl_rmi_Response_unpackInt( _rsvp, "_retval", &_retval, _ex);SIDL_CHECK(
        *_ex);

      // unpack out and inout arguments

      // cleanup and return
      EXIT:
      if(_inv) { sidl_rmi_Invocation_deleteRef(_inv, &_throwaway); }
      if(_rsvp) { sidl_rmi_Response_deleteRef(_rsvp, &_throwaway); }
      return _retval;
    }
  }

  // REMOTE METHOD STUB:initialize
  static void
  remote_edu_csdms_models_Child_initialize(
    /* in */ struct edu_csdms_models_Child__object*self ,
    /* in array<string> */ struct sidl_string__array* properties,
    /* out */ struct sidl_BaseInterface__object **_ex)
  {
    LANG_SPECIFIC_INIT();
    *_ex = NULL;
    {
      // initialize a new invocation
      struct sidl_BaseInterface__object* _throwaway = NULL;
      sidl_BaseException _be = NULL;
      sidl_rmi_Response _rsvp = NULL;
      struct sidl_rmi_InstanceHandle__object * _conn = ((struct 
        edu_csdms_models_Child__remote*)self->d_data)->d_ih;
      sidl_rmi_Invocation _inv = sidl_rmi_InstanceHandle_createInvocation( 
        _conn, "initialize", _ex ); SIDL_CHECK(*_ex);

      // pack in and inout arguments
      sidl_rmi_Invocation_packStringArray( _inv, "properties",properties,0,0,0, 
        _ex);SIDL_CHECK(*_ex);

      // send actual RMI request
      _rsvp = sidl_rmi_Invocation_invokeMethod(_inv, _ex);SIDL_CHECK(*_ex);

      _be = sidl_rmi_Response_getExceptionThrown(_rsvp, _ex);SIDL_CHECK(*_ex);
      if (_be != NULL) {
        struct sidl_BaseInterface__object* throwaway_exception = NULL;
        sidl_BaseException_addLine(_be, 
      "Exception unserialized from edu.csdms.models.Child.initialize.",
          &throwaway_exception);
        *_ex = (struct sidl_BaseInterface__object*) sidl_BaseInterface__cast(
          _be,&throwaway_exception);
        goto EXIT;
      }

      // unpack out and inout arguments

      // cleanup and return
      EXIT:
      if(_inv) { sidl_rmi_Invocation_deleteRef(_inv, &_throwaway); }
      if(_rsvp) { sidl_rmi_Response_deleteRef(_rsvp, &_throwaway); }
      return;
    }
  }

  // REMOTE METHOD STUB:run
  static void
  remote_edu_csdms_models_Child_run(
    /* in */ struct edu_csdms_models_Child__object*self ,
    /* in */ double time,
    /* out */ struct sidl_BaseInterface__object **_ex)
  {
    LANG_SPECIFIC_INIT();
    *_ex = NULL;
    {
      // initialize a new invocation
      struct sidl_BaseInterface__object* _throwaway = NULL;
      sidl_BaseException _be = NULL;
      sidl_rmi_Response _rsvp = NULL;
      struct sidl_rmi_InstanceHandle__object * _conn = ((struct 
        edu_csdms_models_Child__remote*)self->d_data)->d_ih;
      sidl_rmi_Invocation _inv = sidl_rmi_InstanceHandle_createInvocation( 
        _conn, "run", _ex ); SIDL_CHECK(*_ex);

      // pack in and inout arguments
      sidl_rmi_Invocation_packDouble( _inv, "time", time, _ex);SIDL_CHECK(*_ex);

      // send actual RMI request
      _rsvp = sidl_rmi_Invocation_invokeMethod(_inv, _ex);SIDL_CHECK(*_ex);

      _be = sidl_rmi_Response_getExceptionThrown(_rsvp, _ex);SIDL_CHECK(*_ex);
      if (_be != NULL) {
        struct sidl_BaseInterface__object* throwaway_exception = NULL;
        sidl_BaseException_addLine(_be, 
      "Exception unserialized from edu.csdms.models.Child.run.",
          &throwaway_exception);
        *_ex = (struct sidl_BaseInterface__object*) sidl_BaseInterface__cast(
          _be,&throwaway_exception);
        goto EXIT;
      }

      // unpack out and inout arguments

      // cleanup and return
      EXIT:
      if(_inv) { sidl_rmi_Invocation_deleteRef(_inv, &_throwaway); }
      if(_rsvp) { sidl_rmi_Response_deleteRef(_rsvp, &_throwaway); }
      return;
    }
  }

  // REMOTE METHOD STUB:finalize
  static void
  remote_edu_csdms_models_Child_finalize(
    /* in */ struct edu_csdms_models_Child__object*self ,
    /* out */ struct sidl_BaseInterface__object **_ex)
  {
    LANG_SPECIFIC_INIT();
    *_ex = NULL;
    {
      // initialize a new invocation
      struct sidl_BaseInterface__object* _throwaway = NULL;
      sidl_BaseException _be = NULL;
      sidl_rmi_Response _rsvp = NULL;
      struct sidl_rmi_InstanceHandle__object * _conn = ((struct 
        edu_csdms_models_Child__remote*)self->d_data)->d_ih;
      sidl_rmi_Invocation _inv = sidl_rmi_InstanceHandle_createInvocation( 
        _conn, "finalize", _ex ); SIDL_CHECK(*_ex);

      // pack in and inout arguments

      // send actual RMI request
      _rsvp = sidl_rmi_Invocation_invokeMethod(_inv, _ex);SIDL_CHECK(*_ex);

      _be = sidl_rmi_Response_getExceptionThrown(_rsvp, _ex);SIDL_CHECK(*_ex);
      if (_be != NULL) {
        struct sidl_BaseInterface__object* throwaway_exception = NULL;
        sidl_BaseException_addLine(_be, 
      "Exception unserialized from edu.csdms.models.Child.finalize.",
          &throwaway_exception);
        *_ex = (struct sidl_BaseInterface__object*) sidl_BaseInterface__cast(
          _be,&throwaway_exception);
        goto EXIT;
      }

      // unpack out and inout arguments

      // cleanup and return
      EXIT:
      if(_inv) { sidl_rmi_Invocation_deleteRef(_inv, &_throwaway); }
      if(_rsvp) { sidl_rmi_Response_deleteRef(_rsvp, &_throwaway); }
      return;
    }
  }

  // REMOTE METHOD STUB:getRaster_nx
  static int64_t
  remote_edu_csdms_models_Child_getRaster_nx(
    /* in */ struct edu_csdms_models_Child__object*self ,
    /* out */ struct sidl_BaseInterface__object **_ex)
  {
    LANG_SPECIFIC_INIT();
    *_ex = NULL;
    {
      // initialize a new invocation
      struct sidl_BaseInterface__object* _throwaway = NULL;
      sidl_BaseException _be = NULL;
      sidl_rmi_Response _rsvp = NULL;
      int64_t _retval = 0;
      struct sidl_rmi_InstanceHandle__object * _conn = ((struct 
        edu_csdms_models_Child__remote*)self->d_data)->d_ih;
      sidl_rmi_Invocation _inv = sidl_rmi_InstanceHandle_createInvocation( 
        _conn, "getRaster_nx", _ex ); SIDL_CHECK(*_ex);

      // pack in and inout arguments

      // send actual RMI request
      _rsvp = sidl_rmi_Invocation_invokeMethod(_inv, _ex);SIDL_CHECK(*_ex);

      _be = sidl_rmi_Response_getExceptionThrown(_rsvp, _ex);SIDL_CHECK(*_ex);
      if (_be != NULL) {
        struct sidl_BaseInterface__object* throwaway_exception = NULL;
        sidl_BaseException_addLine(_be, 
      "Exception unserialized from edu.csdms.models.Child.getRaster_nx.",
          &throwaway_exception);
        *_ex = (struct sidl_BaseInterface__object*) sidl_BaseInterface__cast(
          _be,&throwaway_exception);
        goto EXIT;
      }

      // extract return value
      sidl_rmi_Response_unpackLong( _rsvp, "_retval", &_retval, _ex);SIDL_CHECK(
        *_ex);

      // unpack out and inout arguments

      // cleanup and return
      EXIT:
      if(_inv) { sidl_rmi_Invocation_deleteRef(_inv, &_throwaway); }
      if(_rsvp) { sidl_rmi_Response_deleteRef(_rsvp, &_throwaway); }
      return _retval;
    }
  }

  // REMOTE METHOD STUB:getRaster_ny
  static int64_t
  remote_edu_csdms_models_Child_getRaster_ny(
    /* in */ struct edu_csdms_models_Child__object*self ,
    /* out */ struct sidl_BaseInterface__object **_ex)
  {
    LANG_SPECIFIC_INIT();
    *_ex = NULL;
    {
      // initialize a new invocation
      struct sidl_BaseInterface__object* _throwaway = NULL;
      sidl_BaseException _be = NULL;
      sidl_rmi_Response _rsvp = NULL;
      int64_t _retval = 0;
      struct sidl_rmi_InstanceHandle__object * _conn = ((struct 
        edu_csdms_models_Child__remote*)self->d_data)->d_ih;
      sidl_rmi_Invocation _inv = sidl_rmi_InstanceHandle_createInvocation( 
        _conn, "getRaster_ny", _ex ); SIDL_CHECK(*_ex);

      // pack in and inout arguments

      // send actual RMI request
      _rsvp = sidl_rmi_Invocation_invokeMethod(_inv, _ex);SIDL_CHECK(*_ex);

      _be = sidl_rmi_Response_getExceptionThrown(_rsvp, _ex);SIDL_CHECK(*_ex);
      if (_be != NULL) {
        struct sidl_BaseInterface__object* throwaway_exception = NULL;
        sidl_BaseException_addLine(_be, 
      "Exception unserialized from edu.csdms.models.Child.getRaster_ny.",
          &throwaway_exception);
        *_ex = (struct sidl_BaseInterface__object*) sidl_BaseInterface__cast(
          _be,&throwaway_exception);
        goto EXIT;
      }

      // extract return value
      sidl_rmi_Response_unpackLong( _rsvp, "_retval", &_retval, _ex);SIDL_CHECK(
        *_ex);

      // unpack out and inout arguments

      // cleanup and return
      EXIT:
      if(_inv) { sidl_rmi_Invocation_deleteRef(_inv, &_throwaway); }
      if(_rsvp) { sidl_rmi_Response_deleteRef(_rsvp, &_throwaway); }
      return _retval;
    }
  }

  // REMOTE METHOD STUB:getRaster_dx
  static double
  remote_edu_csdms_models_Child_getRaster_dx(
    /* in */ struct edu_csdms_models_Child__object*self ,
    /* out */ struct sidl_BaseInterface__object **_ex)
  {
    LANG_SPECIFIC_INIT();
    *_ex = NULL;
    {
      // initialize a new invocation
      struct sidl_BaseInterface__object* _throwaway = NULL;
      sidl_BaseException _be = NULL;
      sidl_rmi_Response _rsvp = NULL;
      double _retval = 0;
      struct sidl_rmi_InstanceHandle__object * _conn = ((struct 
        edu_csdms_models_Child__remote*)self->d_data)->d_ih;
      sidl_rmi_Invocation _inv = sidl_rmi_InstanceHandle_createInvocation( 
        _conn, "getRaster_dx", _ex ); SIDL_CHECK(*_ex);

      // pack in and inout arguments

      // send actual RMI request
      _rsvp = sidl_rmi_Invocation_invokeMethod(_inv, _ex);SIDL_CHECK(*_ex);

      _be = sidl_rmi_Response_getExceptionThrown(_rsvp, _ex);SIDL_CHECK(*_ex);
      if (_be != NULL) {
        struct sidl_BaseInterface__object* throwaway_exception = NULL;
        sidl_BaseException_addLine(_be, 
      "Exception unserialized from edu.csdms.models.Child.getRaster_dx.",
          &throwaway_exception);
        *_ex = (struct sidl_BaseInterface__object*) sidl_BaseInterface__cast(
          _be,&throwaway_exception);
        goto EXIT;
      }

      // extract return value
      sidl_rmi_Response_unpackDouble( _rsvp, "_retval", &_retval, 
        _ex);SIDL_CHECK(*_ex);

      // unpack out and inout arguments

      // cleanup and return
      EXIT:
      if(_inv) { sidl_rmi_Invocation_deleteRef(_inv, &_throwaway); }
      if(_rsvp) { sidl_rmi_Response_deleteRef(_rsvp, &_throwaway); }
      return _retval;
    }
  }

  // REMOTE METHOD STUB:getRaster_dy
  static double
  remote_edu_csdms_models_Child_getRaster_dy(
    /* in */ struct edu_csdms_models_Child__object*self ,
    /* out */ struct sidl_BaseInterface__object **_ex)
  {
    LANG_SPECIFIC_INIT();
    *_ex = NULL;
    {
      // initialize a new invocation
      struct sidl_BaseInterface__object* _throwaway = NULL;
      sidl_BaseException _be = NULL;
      sidl_rmi_Response _rsvp = NULL;
      double _retval = 0;
      struct sidl_rmi_InstanceHandle__object * _conn = ((struct 
        edu_csdms_models_Child__remote*)self->d_data)->d_ih;
      sidl_rmi_Invocation _inv = sidl_rmi_InstanceHandle_createInvocation( 
        _conn, "getRaster_dy", _ex ); SIDL_CHECK(*_ex);

      // pack in and inout arguments

      // send actual RMI request
      _rsvp = sidl_rmi_Invocation_invokeMethod(_inv, _ex);SIDL_CHECK(*_ex);

      _be = sidl_rmi_Response_getExceptionThrown(_rsvp, _ex);SIDL_CHECK(*_ex);
      if (_be != NULL) {
        struct sidl_BaseInterface__object* throwaway_exception = NULL;
        sidl_BaseException_addLine(_be, 
      "Exception unserialized from edu.csdms.models.Child.getRaster_dy.",
          &throwaway_exception);
        *_ex = (struct sidl_BaseInterface__object*) sidl_BaseInterface__cast(
          _be,&throwaway_exception);
        goto EXIT;
      }

      // extract return value
      sidl_rmi_Response_unpackDouble( _rsvp, "_retval", &_retval, 
        _ex);SIDL_CHECK(*_ex);

      // unpack out and inout arguments

      // cleanup and return
      EXIT:
      if(_inv) { sidl_rmi_Invocation_deleteRef(_inv, &_throwaway); }
      if(_rsvp) { sidl_rmi_Response_deleteRef(_rsvp, &_throwaway); }
      return _retval;
    }
  }

  // REMOTE METHOD STUB:getRaster_ulx
  static double
  remote_edu_csdms_models_Child_getRaster_ulx(
    /* in */ struct edu_csdms_models_Child__object*self ,
    /* out */ struct sidl_BaseInterface__object **_ex)
  {
    LANG_SPECIFIC_INIT();
    *_ex = NULL;
    {
      // initialize a new invocation
      struct sidl_BaseInterface__object* _throwaway = NULL;
      sidl_BaseException _be = NULL;
      sidl_rmi_Response _rsvp = NULL;
      double _retval = 0;
      struct sidl_rmi_InstanceHandle__object * _conn = ((struct 
        edu_csdms_models_Child__remote*)self->d_data)->d_ih;
      sidl_rmi_Invocation _inv = sidl_rmi_InstanceHandle_createInvocation( 
        _conn, "getRaster_ulx", _ex ); SIDL_CHECK(*_ex);

      // pack in and inout arguments

      // send actual RMI request
      _rsvp = sidl_rmi_Invocation_invokeMethod(_inv, _ex);SIDL_CHECK(*_ex);

      _be = sidl_rmi_Response_getExceptionThrown(_rsvp, _ex);SIDL_CHECK(*_ex);
      if (_be != NULL) {
        struct sidl_BaseInterface__object* throwaway_exception = NULL;
        sidl_BaseException_addLine(_be, 
      "Exception unserialized from edu.csdms.models.Child.getRaster_ulx.",
          &throwaway_exception);
        *_ex = (struct sidl_BaseInterface__object*) sidl_BaseInterface__cast(
          _be,&throwaway_exception);
        goto EXIT;
      }

      // extract return value
      sidl_rmi_Response_unpackDouble( _rsvp, "_retval", &_retval, 
        _ex);SIDL_CHECK(*_ex);

      // unpack out and inout arguments

      // cleanup and return
      EXIT:
      if(_inv) { sidl_rmi_Invocation_deleteRef(_inv, &_throwaway); }
      if(_rsvp) { sidl_rmi_Response_deleteRef(_rsvp, &_throwaway); }
      return _retval;
    }
  }

  // REMOTE METHOD STUB:getRaster_uly
  static double
  remote_edu_csdms_models_Child_getRaster_uly(
    /* in */ struct edu_csdms_models_Child__object*self ,
    /* out */ struct sidl_BaseInterface__object **_ex)
  {
    LANG_SPECIFIC_INIT();
    *_ex = NULL;
    {
      // initialize a new invocation
      struct sidl_BaseInterface__object* _throwaway = NULL;
      sidl_BaseException _be = NULL;
      sidl_rmi_Response _rsvp = NULL;
      double _retval = 0;
      struct sidl_rmi_InstanceHandle__object * _conn = ((struct 
        edu_csdms_models_Child__remote*)self->d_data)->d_ih;
      sidl_rmi_Invocation _inv = sidl_rmi_InstanceHandle_createInvocation( 
        _conn, "getRaster_uly", _ex ); SIDL_CHECK(*_ex);

      // pack in and inout arguments

      // send actual RMI request
      _rsvp = sidl_rmi_Invocation_invokeMethod(_inv, _ex);SIDL_CHECK(*_ex);

      _be = sidl_rmi_Response_getExceptionThrown(_rsvp, _ex);SIDL_CHECK(*_ex);
      if (_be != NULL) {
        struct sidl_BaseInterface__object* throwaway_exception = NULL;
        sidl_BaseException_addLine(_be, 
      "Exception unserialized from edu.csdms.models.Child.getRaster_uly.",
          &throwaway_exception);
        *_ex = (struct sidl_BaseInterface__object*) sidl_BaseInterface__cast(
          _be,&throwaway_exception);
        goto EXIT;
      }

      // extract return value
      sidl_rmi_Response_unpackDouble( _rsvp, "_retval", &_retval, 
        _ex);SIDL_CHECK(*_ex);

      // unpack out and inout arguments

      // cleanup and return
      EXIT:
      if(_inv) { sidl_rmi_Invocation_deleteRef(_inv, &_throwaway); }
      if(_rsvp) { sidl_rmi_Response_deleteRef(_rsvp, &_throwaway); }
      return _retval;
    }
  }

  // REMOTE METHOD STUB:getRaster_grid
  static struct sidl_double__array*
  remote_edu_csdms_models_Child_getRaster_grid(
    /* in */ struct edu_csdms_models_Child__object*self ,
    /* in */ const char* val_string,
    /* out */ struct sidl_BaseInterface__object **_ex)
  {
    LANG_SPECIFIC_INIT();
    *_ex = NULL;
    {
      // initialize a new invocation
      struct sidl_BaseInterface__object* _throwaway = NULL;
      sidl_BaseException _be = NULL;
      sidl_rmi_Response _rsvp = NULL;
      struct sidl_double__array* _retval = 0;
      struct sidl_rmi_InstanceHandle__object * _conn = ((struct 
        edu_csdms_models_Child__remote*)self->d_data)->d_ih;
      sidl_rmi_Invocation _inv = sidl_rmi_InstanceHandle_createInvocation( 
        _conn, "getRaster_grid", _ex ); SIDL_CHECK(*_ex);

      // pack in and inout arguments
      sidl_rmi_Invocation_packString( _inv, "val_string", val_string, 
        _ex);SIDL_CHECK(*_ex);

      // send actual RMI request
      _rsvp = sidl_rmi_Invocation_invokeMethod(_inv, _ex);SIDL_CHECK(*_ex);

      _be = sidl_rmi_Response_getExceptionThrown(_rsvp, _ex);SIDL_CHECK(*_ex);
      if (_be != NULL) {
        struct sidl_BaseInterface__object* throwaway_exception = NULL;
        sidl_BaseException_addLine(_be, 
      "Exception unserialized from edu.csdms.models.Child.getRaster_grid.",
          &throwaway_exception);
        *_ex = (struct sidl_BaseInterface__object*) sidl_BaseInterface__cast(
          _be,&throwaway_exception);
        goto EXIT;
      }

      // extract return value
      sidl_rmi_Response_unpackDoubleArray( _rsvp, "_retval", &_retval,0,0,FALSE,
        _ex);SIDL_CHECK(*_ex);

      // unpack out and inout arguments

      // cleanup and return
      EXIT:
      if(_inv) { sidl_rmi_Invocation_deleteRef(_inv, &_throwaway); }
      if(_rsvp) { sidl_rmi_Response_deleteRef(_rsvp, &_throwaway); }
      return _retval;
    }
  }

  // REMOTE METHOD STUB:get_raster_dimen
  static struct sidl_int__array*
  remote_edu_csdms_models_Child_get_raster_dimen(
    /* in */ struct edu_csdms_models_Child__object*self ,
    /* in */ const char* val_string,
    /* out */ struct sidl_BaseInterface__object **_ex)
  {
    LANG_SPECIFIC_INIT();
    *_ex = NULL;
    {
      // initialize a new invocation
      struct sidl_BaseInterface__object* _throwaway = NULL;
      sidl_BaseException _be = NULL;
      sidl_rmi_Response _rsvp = NULL;
      struct sidl_int__array* _retval = 0;
      struct sidl_rmi_InstanceHandle__object * _conn = ((struct 
        edu_csdms_models_Child__remote*)self->d_data)->d_ih;
      sidl_rmi_Invocation _inv = sidl_rmi_InstanceHandle_createInvocation( 
        _conn, "get_raster_dimen", _ex ); SIDL_CHECK(*_ex);

      // pack in and inout arguments
      sidl_rmi_Invocation_packString( _inv, "val_string", val_string, 
        _ex);SIDL_CHECK(*_ex);

      // send actual RMI request
      _rsvp = sidl_rmi_Invocation_invokeMethod(_inv, _ex);SIDL_CHECK(*_ex);

      _be = sidl_rmi_Response_getExceptionThrown(_rsvp, _ex);SIDL_CHECK(*_ex);
      if (_be != NULL) {
        struct sidl_BaseInterface__object* throwaway_exception = NULL;
        sidl_BaseException_addLine(_be, 
      "Exception unserialized from edu.csdms.models.Child.get_raster_dimen.",
          &throwaway_exception);
        *_ex = (struct sidl_BaseInterface__object*) sidl_BaseInterface__cast(
          _be,&throwaway_exception);
        goto EXIT;
      }

      // extract return value
      sidl_rmi_Response_unpackIntArray( _rsvp, "_retval", &_retval,0,0,FALSE, 
        _ex);SIDL_CHECK(*_ex);

      // unpack out and inout arguments

      // cleanup and return
      EXIT:
      if(_inv) { sidl_rmi_Invocation_deleteRef(_inv, &_throwaway); }
      if(_rsvp) { sidl_rmi_Response_deleteRef(_rsvp, &_throwaway); }
      return _retval;
    }
  }

  // REMOTE METHOD STUB:get_raster_res
  static struct sidl_double__array*
  remote_edu_csdms_models_Child_get_raster_res(
    /* in */ struct edu_csdms_models_Child__object*self ,
    /* in */ const char* val_string,
    /* out */ struct sidl_BaseInterface__object **_ex)
  {
    LANG_SPECIFIC_INIT();
    *_ex = NULL;
    {
      // initialize a new invocation
      struct sidl_BaseInterface__object* _throwaway = NULL;
      sidl_BaseException _be = NULL;
      sidl_rmi_Response _rsvp = NULL;
      struct sidl_double__array* _retval = 0;
      struct sidl_rmi_InstanceHandle__object * _conn = ((struct 
        edu_csdms_models_Child__remote*)self->d_data)->d_ih;
      sidl_rmi_Invocation _inv = sidl_rmi_InstanceHandle_createInvocation( 
        _conn, "get_raster_res", _ex ); SIDL_CHECK(*_ex);

      // pack in and inout arguments
      sidl_rmi_Invocation_packString( _inv, "val_string", val_string, 
        _ex);SIDL_CHECK(*_ex);

      // send actual RMI request
      _rsvp = sidl_rmi_Invocation_invokeMethod(_inv, _ex);SIDL_CHECK(*_ex);

      _be = sidl_rmi_Response_getExceptionThrown(_rsvp, _ex);SIDL_CHECK(*_ex);
      if (_be != NULL) {
        struct sidl_BaseInterface__object* throwaway_exception = NULL;
        sidl_BaseException_addLine(_be, 
      "Exception unserialized from edu.csdms.models.Child.get_raster_res.",
          &throwaway_exception);
        *_ex = (struct sidl_BaseInterface__object*) sidl_BaseInterface__cast(
          _be,&throwaway_exception);
        goto EXIT;
      }

      // extract return value
      sidl_rmi_Response_unpackDoubleArray( _rsvp, "_retval", &_retval,0,0,FALSE,
        _ex);SIDL_CHECK(*_ex);

      // unpack out and inout arguments

      // cleanup and return
      EXIT:
      if(_inv) { sidl_rmi_Invocation_deleteRef(_inv, &_throwaway); }
      if(_rsvp) { sidl_rmi_Response_deleteRef(_rsvp, &_throwaway); }
      return _retval;
    }
  }

  // REMOTE METHOD STUB:get_raster_data
  static struct sidl__array*
  remote_edu_csdms_models_Child_get_raster_data(
    /* in */ struct edu_csdms_models_Child__object*self ,
    /* in */ const char* val_string,
    /* out */ struct sidl_BaseInterface__object **_ex)
  {
    LANG_SPECIFIC_INIT();
    *_ex = NULL;
    {
      // initialize a new invocation
      struct sidl_BaseInterface__object* _throwaway = NULL;
      sidl_BaseException _be = NULL;
      sidl_rmi_Response _rsvp = NULL;
      struct sidl__array* _retval = 0;
      struct sidl_rmi_InstanceHandle__object * _conn = ((struct 
        edu_csdms_models_Child__remote*)self->d_data)->d_ih;
      sidl_rmi_Invocation _inv = sidl_rmi_InstanceHandle_createInvocation( 
        _conn, "get_raster_data", _ex ); SIDL_CHECK(*_ex);

      // pack in and inout arguments
      sidl_rmi_Invocation_packString( _inv, "val_string", val_string, 
        _ex);SIDL_CHECK(*_ex);

      // send actual RMI request
      _rsvp = sidl_rmi_Invocation_invokeMethod(_inv, _ex);SIDL_CHECK(*_ex);

      _be = sidl_rmi_Response_getExceptionThrown(_rsvp, _ex);SIDL_CHECK(*_ex);
      if (_be != NULL) {
        struct sidl_BaseInterface__object* throwaway_exception = NULL;
        sidl_BaseException_addLine(_be, 
      "Exception unserialized from edu.csdms.models.Child.get_raster_data.",
          &throwaway_exception);
        *_ex = (struct sidl_BaseInterface__object*) sidl_BaseInterface__cast(
          _be,&throwaway_exception);
        goto EXIT;
      }

      // extract return value
      sidl_rmi_Response_unpackGenericArray( _rsvp, "_retval", &_retval, 
        _ex);SIDL_CHECK(*_ex);

      // unpack out and inout arguments

      // cleanup and return
      EXIT:
      if(_inv) { sidl_rmi_Invocation_deleteRef(_inv, &_throwaway); }
      if(_rsvp) { sidl_rmi_Response_deleteRef(_rsvp, &_throwaway); }
      return _retval;
    }
  }

  // REMOTE METHOD STUB:get_time_span
  static struct sidl_double__array*
  remote_edu_csdms_models_Child_get_time_span(
    /* in */ struct edu_csdms_models_Child__object*self ,
    /* out */ struct sidl_BaseInterface__object **_ex)
  {
    LANG_SPECIFIC_INIT();
    *_ex = NULL;
    {
      // initialize a new invocation
      struct sidl_BaseInterface__object* _throwaway = NULL;
      sidl_BaseException _be = NULL;
      sidl_rmi_Response _rsvp = NULL;
      struct sidl_double__array* _retval = 0;
      struct sidl_rmi_InstanceHandle__object * _conn = ((struct 
        edu_csdms_models_Child__remote*)self->d_data)->d_ih;
      sidl_rmi_Invocation _inv = sidl_rmi_InstanceHandle_createInvocation( 
        _conn, "get_time_span", _ex ); SIDL_CHECK(*_ex);

      // pack in and inout arguments

      // send actual RMI request
      _rsvp = sidl_rmi_Invocation_invokeMethod(_inv, _ex);SIDL_CHECK(*_ex);

      _be = sidl_rmi_Response_getExceptionThrown(_rsvp, _ex);SIDL_CHECK(*_ex);
      if (_be != NULL) {
        struct sidl_BaseInterface__object* throwaway_exception = NULL;
        sidl_BaseException_addLine(_be, 
      "Exception unserialized from edu.csdms.models.Child.get_time_span.",
          &throwaway_exception);
        *_ex = (struct sidl_BaseInterface__object*) sidl_BaseInterface__cast(
          _be,&throwaway_exception);
        goto EXIT;
      }

      // extract return value
      sidl_rmi_Response_unpackDoubleArray( _rsvp, "_retval", &_retval,0,0,FALSE,
        _ex);SIDL_CHECK(*_ex);

      // unpack out and inout arguments

      // cleanup and return
      EXIT:
      if(_inv) { sidl_rmi_Invocation_deleteRef(_inv, &_throwaway); }
      if(_rsvp) { sidl_rmi_Response_deleteRef(_rsvp, &_throwaway); }
      return _retval;
    }
  }

  // REMOTE METHOD STUB:get_element_set
  static struct edu_csdms_openmi_IElementSet__object*
  remote_edu_csdms_models_Child_get_element_set(
    /* in */ struct edu_csdms_models_Child__object*self ,
    /* in */ const char* val_string,
    /* out */ struct sidl_BaseInterface__object **_ex)
  {
    LANG_SPECIFIC_INIT();
    *_ex = NULL;
    {
      // initialize a new invocation
      struct sidl_BaseInterface__object* _throwaway = NULL;
      sidl_BaseException _be = NULL;
      sidl_rmi_Response _rsvp = NULL;
      char*_retval_str = NULL;
      struct edu_csdms_openmi_IElementSet__object* _retval = 0;
      struct sidl_rmi_InstanceHandle__object * _conn = ((struct 
        edu_csdms_models_Child__remote*)self->d_data)->d_ih;
      sidl_rmi_Invocation _inv = sidl_rmi_InstanceHandle_createInvocation( 
        _conn, "get_element_set", _ex ); SIDL_CHECK(*_ex);

      // pack in and inout arguments
      sidl_rmi_Invocation_packString( _inv, "val_string", val_string, 
        _ex);SIDL_CHECK(*_ex);

      // send actual RMI request
      _rsvp = sidl_rmi_Invocation_invokeMethod(_inv, _ex);SIDL_CHECK(*_ex);

      _be = sidl_rmi_Response_getExceptionThrown(_rsvp, _ex);SIDL_CHECK(*_ex);
      if (_be != NULL) {
        struct sidl_BaseInterface__object* throwaway_exception = NULL;
        sidl_BaseException_addLine(_be, 
      "Exception unserialized from edu.csdms.models.Child.get_element_set.",
          &throwaway_exception);
        *_ex = (struct sidl_BaseInterface__object*) sidl_BaseInterface__cast(
          _be,&throwaway_exception);
        goto EXIT;
      }

      // extract return value
      sidl_rmi_Response_unpackString( _rsvp, "_retval", &_retval_str, 
        _ex);SIDL_CHECK(*_ex);
      _retval = edu_csdms_openmi_IElementSet__connectI(_retval_str, FALSE, 
        _ex);SIDL_CHECK(*_ex);

      // unpack out and inout arguments

      // cleanup and return
      EXIT:
      if(_inv) { sidl_rmi_Invocation_deleteRef(_inv, &_throwaway); }
      if(_rsvp) { sidl_rmi_Response_deleteRef(_rsvp, &_throwaway); }
      return _retval;
    }
  }

  // REMOTE METHOD STUB:get_value_set
  static struct edu_csdms_openmi_IValueSet__object*
  remote_edu_csdms_models_Child_get_value_set(
    /* in */ struct edu_csdms_models_Child__object*self ,
    /* in */ const char* val_string,
    /* out */ struct sidl_BaseInterface__object **_ex)
  {
    LANG_SPECIFIC_INIT();
    *_ex = NULL;
    {
      // initialize a new invocation
      struct sidl_BaseInterface__object* _throwaway = NULL;
      sidl_BaseException _be = NULL;
      sidl_rmi_Response _rsvp = NULL;
      char*_retval_str = NULL;
      struct edu_csdms_openmi_IValueSet__object* _retval = 0;
      struct sidl_rmi_InstanceHandle__object * _conn = ((struct 
        edu_csdms_models_Child__remote*)self->d_data)->d_ih;
      sidl_rmi_Invocation _inv = sidl_rmi_InstanceHandle_createInvocation( 
        _conn, "get_value_set", _ex ); SIDL_CHECK(*_ex);

      // pack in and inout arguments
      sidl_rmi_Invocation_packString( _inv, "val_string", val_string, 
        _ex);SIDL_CHECK(*_ex);

      // send actual RMI request
      _rsvp = sidl_rmi_Invocation_invokeMethod(_inv, _ex);SIDL_CHECK(*_ex);

      _be = sidl_rmi_Response_getExceptionThrown(_rsvp, _ex);SIDL_CHECK(*_ex);
      if (_be != NULL) {
        struct sidl_BaseInterface__object* throwaway_exception = NULL;
        sidl_BaseException_addLine(_be, 
      "Exception unserialized from edu.csdms.models.Child.get_value_set.",
          &throwaway_exception);
        *_ex = (struct sidl_BaseInterface__object*) sidl_BaseInterface__cast(
          _be,&throwaway_exception);
        goto EXIT;
      }

      // extract return value
      sidl_rmi_Response_unpackString( _rsvp, "_retval", &_retval_str, 
        _ex);SIDL_CHECK(*_ex);
      _retval = edu_csdms_openmi_IValueSet__connectI(_retval_str, FALSE, 
        _ex);SIDL_CHECK(*_ex);

      // unpack out and inout arguments

      // cleanup and return
      EXIT:
      if(_inv) { sidl_rmi_Invocation_deleteRef(_inv, &_throwaway); }
      if(_rsvp) { sidl_rmi_Response_deleteRef(_rsvp, &_throwaway); }
      return _retval;
    }
  }

  // REMOTE METHOD STUB:get_value_set_data
  static struct sidl__array*
  remote_edu_csdms_models_Child_get_value_set_data(
    /* in */ struct edu_csdms_models_Child__object*self ,
    /* in */ const char* val_string,
    /* out */ struct sidl_BaseInterface__object **_ex)
  {
    LANG_SPECIFIC_INIT();
    *_ex = NULL;
    {
      // initialize a new invocation
      struct sidl_BaseInterface__object* _throwaway = NULL;
      sidl_BaseException _be = NULL;
      sidl_rmi_Response _rsvp = NULL;
      struct sidl__array* _retval = 0;
      struct sidl_rmi_InstanceHandle__object * _conn = ((struct 
        edu_csdms_models_Child__remote*)self->d_data)->d_ih;
      sidl_rmi_Invocation _inv = sidl_rmi_InstanceHandle_createInvocation( 
        _conn, "get_value_set_data", _ex ); SIDL_CHECK(*_ex);

      // pack in and inout arguments
      sidl_rmi_Invocation_packString( _inv, "val_string", val_string, 
        _ex);SIDL_CHECK(*_ex);

      // send actual RMI request
      _rsvp = sidl_rmi_Invocation_invokeMethod(_inv, _ex);SIDL_CHECK(*_ex);

      _be = sidl_rmi_Response_getExceptionThrown(_rsvp, _ex);SIDL_CHECK(*_ex);
      if (_be != NULL) {
        struct sidl_BaseInterface__object* throwaway_exception = NULL;
        sidl_BaseException_addLine(_be, 
      "Exception unserialized from edu.csdms.models.Child.get_value_set_data.",
          &throwaway_exception);
        *_ex = (struct sidl_BaseInterface__object*) sidl_BaseInterface__cast(
          _be,&throwaway_exception);
        goto EXIT;
      }

      // extract return value
      sidl_rmi_Response_unpackGenericArray( _rsvp, "_retval", &_retval, 
        _ex);SIDL_CHECK(*_ex);

      // unpack out and inout arguments

      // cleanup and return
      EXIT:
      if(_inv) { sidl_rmi_Invocation_deleteRef(_inv, &_throwaway); }
      if(_rsvp) { sidl_rmi_Response_deleteRef(_rsvp, &_throwaway); }
      return _retval;
    }
  }

  // REMOTE METHOD STUB:set_value_set
  static void
  remote_edu_csdms_models_Child_set_value_set(
    /* in */ struct edu_csdms_models_Child__object*self ,
    /* in */ const char* val_string,
    /* in */ struct edu_csdms_openmi_IValueSet__object* values,
    /* out */ struct sidl_BaseInterface__object **_ex)
  {
    LANG_SPECIFIC_INIT();
    *_ex = NULL;
    {
      // initialize a new invocation
      struct sidl_BaseInterface__object* _throwaway = NULL;
      sidl_BaseException _be = NULL;
      sidl_rmi_Response _rsvp = NULL;
      struct sidl_rmi_InstanceHandle__object * _conn = ((struct 
        edu_csdms_models_Child__remote*)self->d_data)->d_ih;
      sidl_rmi_Invocation _inv = sidl_rmi_InstanceHandle_createInvocation( 
        _conn, "set_value_set", _ex ); SIDL_CHECK(*_ex);

      // pack in and inout arguments
      sidl_rmi_Invocation_packString( _inv, "val_string", val_string, 
        _ex);SIDL_CHECK(*_ex);
      if(values){
        char* _url = sidl_BaseInterface__getURL((sidl_BaseInterface)values, 
          _ex);SIDL_CHECK(*_ex);
        sidl_rmi_Invocation_packString( _inv, "values", _url, _ex);SIDL_CHECK(
          *_ex);
        free((void*)_url);
      } else {
        sidl_rmi_Invocation_packString( _inv, "values", NULL, _ex);SIDL_CHECK(
          *_ex);
      }

      // send actual RMI request
      _rsvp = sidl_rmi_Invocation_invokeMethod(_inv, _ex);SIDL_CHECK(*_ex);

      _be = sidl_rmi_Response_getExceptionThrown(_rsvp, _ex);SIDL_CHECK(*_ex);
      if (_be != NULL) {
        struct sidl_BaseInterface__object* throwaway_exception = NULL;
        sidl_BaseException_addLine(_be, 
      "Exception unserialized from edu.csdms.models.Child.set_value_set.",
          &throwaway_exception);
        *_ex = (struct sidl_BaseInterface__object*) sidl_BaseInterface__cast(
          _be,&throwaway_exception);
        goto EXIT;
      }

      // unpack out and inout arguments

      // cleanup and return
      EXIT:
      if(_inv) { sidl_rmi_Invocation_deleteRef(_inv, &_throwaway); }
      if(_rsvp) { sidl_rmi_Response_deleteRef(_rsvp, &_throwaway); }
      return;
    }
  }

  // REMOTE EPV: create remote entry point vectors (EPVs).
  static void edu_csdms_models_Child__init_remote_epv(void)
  {
    // assert( HAVE_LOCKED_STATIC_GLOBALS );
    struct edu_csdms_models_Child__epv*   epv = 
      &s_rem_epv__edu_csdms_models_child;
    struct edu_csdms_ports_IRFPort__epv*  e0  = 
      &s_rem_epv__edu_csdms_ports_irfport;
    struct gov_cca_Component__epv*        e1  = &s_rem_epv__gov_cca_component;
    struct gov_cca_ComponentRelease__epv* e2  = 
      &s_rem_epv__gov_cca_componentrelease;
    struct gov_cca_Port__epv*             e3  = &s_rem_epv__gov_cca_port;
    struct gov_cca_ports_GoPort__epv*     e4  = 
      &s_rem_epv__gov_cca_ports_goport;
    struct sidl_BaseClass__epv*           e5  = &s_rem_epv__sidl_baseclass;
    struct sidl_BaseInterface__epv*       e6  = &s_rem_epv__sidl_baseinterface;

    epv->f__cast                         = remote_edu_csdms_models_Child__cast;
    epv->f__delete                       = 
      remote_edu_csdms_models_Child__delete;
    epv->f__exec                         = remote_edu_csdms_models_Child__exec;
    epv->f__getURL                       = 
      remote_edu_csdms_models_Child__getURL;
    epv->f__raddRef                      = 
      remote_edu_csdms_models_Child__raddRef;
    epv->f__isRemote                     = 
      remote_edu_csdms_models_Child__isRemote;
    epv->f__set_hooks                    = 
      remote_edu_csdms_models_Child__set_hooks;
    epv->f__set_contracts                = 
      remote_edu_csdms_models_Child__set_contracts;
    epv->f__dump_stats                   = 
      remote_edu_csdms_models_Child__dump_stats;
    epv->f__ctor                         = NULL;
    epv->f__ctor2                        = NULL;
    epv->f__dtor                         = NULL;
    epv->f_boccaSetServices              = 
      remote_edu_csdms_models_Child_boccaSetServices;
    epv->f_boccaReleaseServices          = 
      remote_edu_csdms_models_Child_boccaReleaseServices;
    epv->f_boccaForceUsePortInclude      = 
      remote_edu_csdms_models_Child_boccaForceUsePortInclude;
    epv->f_addRef                        = remote_edu_csdms_models_Child_addRef;
    epv->f_deleteRef                     = 
      remote_edu_csdms_models_Child_deleteRef;
    epv->f_isSame                        = remote_edu_csdms_models_Child_isSame;
    epv->f_isType                        = remote_edu_csdms_models_Child_isType;
    epv->f_getClassInfo                  = 
      remote_edu_csdms_models_Child_getClassInfo;
    epv->f_setServices                   = 
      remote_edu_csdms_models_Child_setServices;
    epv->f_releaseServices               = 
      remote_edu_csdms_models_Child_releaseServices;
    epv->f_go                            = remote_edu_csdms_models_Child_go;
    epv->f_initialize                    = 
      remote_edu_csdms_models_Child_initialize;
    epv->f_run                           = remote_edu_csdms_models_Child_run;
    epv->f_finalize                      = 
      remote_edu_csdms_models_Child_finalize;
    epv->f_getRaster_nx                  = 
      remote_edu_csdms_models_Child_getRaster_nx;
    epv->f_getRaster_ny                  = 
      remote_edu_csdms_models_Child_getRaster_ny;
    epv->f_getRaster_dx                  = 
      remote_edu_csdms_models_Child_getRaster_dx;
    epv->f_getRaster_dy                  = 
      remote_edu_csdms_models_Child_getRaster_dy;
    epv->f_getRaster_ulx                 = 
      remote_edu_csdms_models_Child_getRaster_ulx;
    epv->f_getRaster_uly                 = 
      remote_edu_csdms_models_Child_getRaster_uly;
    epv->f_getRaster_grid                = 
      remote_edu_csdms_models_Child_getRaster_grid;
    epv->f_get_raster_dimen              = 
      remote_edu_csdms_models_Child_get_raster_dimen;
    epv->f_get_raster_res                = 
      remote_edu_csdms_models_Child_get_raster_res;
    epv->f_get_raster_data               = 
      remote_edu_csdms_models_Child_get_raster_data;
    epv->f_get_time_span                 = 
      remote_edu_csdms_models_Child_get_time_span;
    epv->f_get_element_set               = 
      remote_edu_csdms_models_Child_get_element_set;
    epv->f_get_value_set                 = 
      remote_edu_csdms_models_Child_get_value_set;
    epv->f_get_value_set_data            = 
      remote_edu_csdms_models_Child_get_value_set_data;
    epv->f_set_value_set                 = 
      remote_edu_csdms_models_Child_set_value_set;

    e0->f__cast              = (void* (*)(void*, const char*, struct 
      sidl_BaseInterface__object**)) epv->f__cast;
    e0->f__delete            = (void (*)(void*, struct 
      sidl_BaseInterface__object**)) epv->f__delete;
    e0->f__getURL            = (char* (*)(void*, struct 
      sidl_BaseInterface__object**)) epv->f__getURL;
    e0->f__raddRef           = (void (*)(void*, struct 
      sidl_BaseInterface__object**)) epv->f__raddRef;
    e0->f__isRemote          = (sidl_bool (*)(void*, struct 
      sidl_BaseInterface__object**)) epv->f__isRemote;
    e0->f__set_hooks         = (void (*)(void*, sidl_bool, struct 
      sidl_BaseInterface__object**)) epv->f__set_hooks;
    e0->f__set_contracts     = (void (*)(void*, sidl_bool, const char*, 
      sidl_bool, struct sidl_BaseInterface__object**)) epv->f__set_contracts;
    e0->f__dump_stats        = (void (*)(void*, const char*, const char*, 
      struct sidl_BaseInterface__object**)) epv->f__dump_stats;
    e0->f__exec              = (void (*)(void*,const char*,struct 
      sidl_rmi_Call__object*,struct sidl_rmi_Return__object*,struct 
      sidl_BaseInterface__object **)) epv->f__exec;
    e0->f_initialize         = (void (*)(void*,struct sidl_string__array*,
      struct sidl_BaseInterface__object **)) epv->f_initialize;
    e0->f_run                = (void (*)(void*,double,struct 
      sidl_BaseInterface__object **)) epv->f_run;
    e0->f_finalize           = (void (*)(void*,struct 
      sidl_BaseInterface__object **)) epv->f_finalize;
    e0->f_getRaster_nx       = (int64_t (*)(void*,struct 
      sidl_BaseInterface__object **)) epv->f_getRaster_nx;
    e0->f_getRaster_ny       = (int64_t (*)(void*,struct 
      sidl_BaseInterface__object **)) epv->f_getRaster_ny;
    e0->f_getRaster_dx       = (double (*)(void*,struct 
      sidl_BaseInterface__object **)) epv->f_getRaster_dx;
    e0->f_getRaster_dy       = (double (*)(void*,struct 
      sidl_BaseInterface__object **)) epv->f_getRaster_dy;
    e0->f_getRaster_ulx      = (double (*)(void*,struct 
      sidl_BaseInterface__object **)) epv->f_getRaster_ulx;
    e0->f_getRaster_uly      = (double (*)(void*,struct 
      sidl_BaseInterface__object **)) epv->f_getRaster_uly;
    e0->f_getRaster_grid     = (struct sidl_double__array* (*)(void*,const 
      char*,struct sidl_BaseInterface__object **)) epv->f_getRaster_grid;
    e0->f_get_raster_dimen   = (struct sidl_int__array* (*)(void*,const char*,
      struct sidl_BaseInterface__object **)) epv->f_get_raster_dimen;
    e0->f_get_raster_res     = (struct sidl_double__array* (*)(void*,const 
      char*,struct sidl_BaseInterface__object **)) epv->f_get_raster_res;
    e0->f_get_raster_data    = (struct sidl__array* (*)(void*,const char*,
      struct sidl_BaseInterface__object **)) epv->f_get_raster_data;
    e0->f_get_time_span      = (struct sidl_double__array* (*)(void*,struct 
      sidl_BaseInterface__object **)) epv->f_get_time_span;
    e0->f_get_element_set    = (struct edu_csdms_openmi_IElementSet__object* (
      *)(void*,const char*,struct sidl_BaseInterface__object **)) 
      epv->f_get_element_set;
    e0->f_get_value_set      = (struct edu_csdms_openmi_IValueSet__object* (*)(
      void*,const char*,struct sidl_BaseInterface__object **)) 
      epv->f_get_value_set;
    e0->f_get_value_set_data = (struct sidl__array* (*)(void*,const char*,
      struct sidl_BaseInterface__object **)) epv->f_get_value_set_data;
    e0->f_set_value_set      = (void (*)(void*,const char*,struct 
      edu_csdms_openmi_IValueSet__object*,struct sidl_BaseInterface__object 
      **)) epv->f_set_value_set;
    e0->f_addRef             = (void (*)(void*,struct 
      sidl_BaseInterface__object **)) epv->f_addRef;
    e0->f_deleteRef          = (void (*)(void*,struct 
      sidl_BaseInterface__object **)) epv->f_deleteRef;
    e0->f_isSame             = (sidl_bool (*)(void*,struct 
      sidl_BaseInterface__object*,struct sidl_BaseInterface__object **)) 
      epv->f_isSame;
    e0->f_isType             = (sidl_bool (*)(void*,const char*,struct 
      sidl_BaseInterface__object **)) epv->f_isType;
    e0->f_getClassInfo       = (struct sidl_ClassInfo__object* (*)(void*,struct 
      sidl_BaseInterface__object **)) epv->f_getClassInfo;

    e1->f__cast          = (void* (*)(void*, const char*, struct 
      sidl_BaseInterface__object**)) epv->f__cast;
    e1->f__delete        = (void (*)(void*, struct 
      sidl_BaseInterface__object**)) epv->f__delete;
    e1->f__getURL        = (char* (*)(void*, struct 
      sidl_BaseInterface__object**)) epv->f__getURL;
    e1->f__raddRef       = (void (*)(void*, struct 
      sidl_BaseInterface__object**)) epv->f__raddRef;
    e1->f__isRemote      = (sidl_bool (*)(void*, struct 
      sidl_BaseInterface__object**)) epv->f__isRemote;
    e1->f__set_hooks     = (void (*)(void*, sidl_bool, struct 
      sidl_BaseInterface__object**)) epv->f__set_hooks;
    e1->f__set_contracts = (void (*)(void*, sidl_bool, const char*, sidl_bool, 
      struct sidl_BaseInterface__object**)) epv->f__set_contracts;
    e1->f__dump_stats    = (void (*)(void*, const char*, const char*, struct 
      sidl_BaseInterface__object**)) epv->f__dump_stats;
    e1->f__exec          = (void (*)(void*,const char*,struct 
      sidl_rmi_Call__object*,struct sidl_rmi_Return__object*,struct 
      sidl_BaseInterface__object **)) epv->f__exec;
    e1->f_setServices    = (void (*)(void*,struct gov_cca_Services__object*,
      struct sidl_BaseInterface__object **)) epv->f_setServices;
    e1->f_addRef         = (void (*)(void*,struct sidl_BaseInterface__object 
      **)) epv->f_addRef;
    e1->f_deleteRef      = (void (*)(void*,struct sidl_BaseInterface__object 
      **)) epv->f_deleteRef;
    e1->f_isSame         = (sidl_bool (*)(void*,struct 
      sidl_BaseInterface__object*,struct sidl_BaseInterface__object **)) 
      epv->f_isSame;
    e1->f_isType         = (sidl_bool (*)(void*,const char*,struct 
      sidl_BaseInterface__object **)) epv->f_isType;
    e1->f_getClassInfo   = (struct sidl_ClassInfo__object* (*)(void*,struct 
      sidl_BaseInterface__object **)) epv->f_getClassInfo;

    e2->f__cast           = (void* (*)(void*, const char*, struct 
      sidl_BaseInterface__object**)) epv->f__cast;
    e2->f__delete         = (void (*)(void*, struct 
      sidl_BaseInterface__object**)) epv->f__delete;
    e2->f__getURL         = (char* (*)(void*, struct 
      sidl_BaseInterface__object**)) epv->f__getURL;
    e2->f__raddRef        = (void (*)(void*, struct 
      sidl_BaseInterface__object**)) epv->f__raddRef;
    e2->f__isRemote       = (sidl_bool (*)(void*, struct 
      sidl_BaseInterface__object**)) epv->f__isRemote;
    e2->f__set_hooks      = (void (*)(void*, sidl_bool, struct 
      sidl_BaseInterface__object**)) epv->f__set_hooks;
    e2->f__set_contracts  = (void (*)(void*, sidl_bool, const char*, sidl_bool, 
      struct sidl_BaseInterface__object**)) epv->f__set_contracts;
    e2->f__dump_stats     = (void (*)(void*, const char*, const char*, struct 
      sidl_BaseInterface__object**)) epv->f__dump_stats;
    e2->f__exec           = (void (*)(void*,const char*,struct 
      sidl_rmi_Call__object*,struct sidl_rmi_Return__object*,struct 
      sidl_BaseInterface__object **)) epv->f__exec;
    e2->f_releaseServices = (void (*)(void*,struct gov_cca_Services__object*,
      struct sidl_BaseInterface__object **)) epv->f_releaseServices;
    e2->f_addRef          = (void (*)(void*,struct sidl_BaseInterface__object 
      **)) epv->f_addRef;
    e2->f_deleteRef       = (void (*)(void*,struct sidl_BaseInterface__object 
      **)) epv->f_deleteRef;
    e2->f_isSame          = (sidl_bool (*)(void*,struct 
      sidl_BaseInterface__object*,struct sidl_BaseInterface__object **)) 
      epv->f_isSame;
    e2->f_isType          = (sidl_bool (*)(void*,const char*,struct 
      sidl_BaseInterface__object **)) epv->f_isType;
    e2->f_getClassInfo    = (struct sidl_ClassInfo__object* (*)(void*,struct 
      sidl_BaseInterface__object **)) epv->f_getClassInfo;

    e3->f__cast          = (void* (*)(void*, const char*, struct 
      sidl_BaseInterface__object**)) epv->f__cast;
    e3->f__delete        = (void (*)(void*, struct 
      sidl_BaseInterface__object**)) epv->f__delete;
    e3->f__getURL        = (char* (*)(void*, struct 
      sidl_BaseInterface__object**)) epv->f__getURL;
    e3->f__raddRef       = (void (*)(void*, struct 
      sidl_BaseInterface__object**)) epv->f__raddRef;
    e3->f__isRemote      = (sidl_bool (*)(void*, struct 
      sidl_BaseInterface__object**)) epv->f__isRemote;
    e3->f__set_hooks     = (void (*)(void*, sidl_bool, struct 
      sidl_BaseInterface__object**)) epv->f__set_hooks;
    e3->f__set_contracts = (void (*)(void*, sidl_bool, const char*, sidl_bool, 
      struct sidl_BaseInterface__object**)) epv->f__set_contracts;
    e3->f__dump_stats    = (void (*)(void*, const char*, const char*, struct 
      sidl_BaseInterface__object**)) epv->f__dump_stats;
    e3->f__exec          = (void (*)(void*,const char*,struct 
      sidl_rmi_Call__object*,struct sidl_rmi_Return__object*,struct 
      sidl_BaseInterface__object **)) epv->f__exec;
    e3->f_addRef         = (void (*)(void*,struct sidl_BaseInterface__object 
      **)) epv->f_addRef;
    e3->f_deleteRef      = (void (*)(void*,struct sidl_BaseInterface__object 
      **)) epv->f_deleteRef;
    e3->f_isSame         = (sidl_bool (*)(void*,struct 
      sidl_BaseInterface__object*,struct sidl_BaseInterface__object **)) 
      epv->f_isSame;
    e3->f_isType         = (sidl_bool (*)(void*,const char*,struct 
      sidl_BaseInterface__object **)) epv->f_isType;
    e3->f_getClassInfo   = (struct sidl_ClassInfo__object* (*)(void*,struct 
      sidl_BaseInterface__object **)) epv->f_getClassInfo;

    e4->f__cast          = (void* (*)(void*, const char*, struct 
      sidl_BaseInterface__object**)) epv->f__cast;
    e4->f__delete        = (void (*)(void*, struct 
      sidl_BaseInterface__object**)) epv->f__delete;
    e4->f__getURL        = (char* (*)(void*, struct 
      sidl_BaseInterface__object**)) epv->f__getURL;
    e4->f__raddRef       = (void (*)(void*, struct 
      sidl_BaseInterface__object**)) epv->f__raddRef;
    e4->f__isRemote      = (sidl_bool (*)(void*, struct 
      sidl_BaseInterface__object**)) epv->f__isRemote;
    e4->f__set_hooks     = (void (*)(void*, sidl_bool, struct 
      sidl_BaseInterface__object**)) epv->f__set_hooks;
    e4->f__set_contracts = (void (*)(void*, sidl_bool, const char*, sidl_bool, 
      struct sidl_BaseInterface__object**)) epv->f__set_contracts;
    e4->f__dump_stats    = (void (*)(void*, const char*, const char*, struct 
      sidl_BaseInterface__object**)) epv->f__dump_stats;
    e4->f__exec          = (void (*)(void*,const char*,struct 
      sidl_rmi_Call__object*,struct sidl_rmi_Return__object*,struct 
      sidl_BaseInterface__object **)) epv->f__exec;
    e4->f_go             = (int32_t (*)(void*,struct sidl_BaseInterface__object 
      **)) epv->f_go;
    e4->f_addRef         = (void (*)(void*,struct sidl_BaseInterface__object 
      **)) epv->f_addRef;
    e4->f_deleteRef      = (void (*)(void*,struct sidl_BaseInterface__object 
      **)) epv->f_deleteRef;
    e4->f_isSame         = (sidl_bool (*)(void*,struct 
      sidl_BaseInterface__object*,struct sidl_BaseInterface__object **)) 
      epv->f_isSame;
    e4->f_isType         = (sidl_bool (*)(void*,const char*,struct 
      sidl_BaseInterface__object **)) epv->f_isType;
    e4->f_getClassInfo   = (struct sidl_ClassInfo__object* (*)(void*,struct 
      sidl_BaseInterface__object **)) epv->f_getClassInfo;

    e5->f__cast          = (void* (*)(struct sidl_BaseClass__object*, const 
      char*, struct sidl_BaseInterface__object**)) epv->f__cast;
    e5->f__delete        = (void (*)(struct sidl_BaseClass__object*, struct 
      sidl_BaseInterface__object**)) epv->f__delete;
    e5->f__getURL        = (char* (*)(struct sidl_BaseClass__object*, struct 
      sidl_BaseInterface__object**)) epv->f__getURL;
    e5->f__raddRef       = (void (*)(struct sidl_BaseClass__object*, struct 
      sidl_BaseInterface__object**)) epv->f__raddRef;
    e5->f__isRemote      = (sidl_bool (*)(struct sidl_BaseClass__object*, 
      struct sidl_BaseInterface__object**)) epv->f__isRemote;
    e5->f__set_hooks     = (void (*)(struct sidl_BaseClass__object*, sidl_bool, 
      struct sidl_BaseInterface__object**)) epv->f__set_hooks;
    e5->f__set_contracts = (void (*)(struct sidl_BaseClass__object*, sidl_bool, 
      const char*, sidl_bool, struct sidl_BaseInterface__object**)) 
      epv->f__set_contracts;
    e5->f__dump_stats    = (void (*)(struct sidl_BaseClass__object*, const 
      char*, const char*, struct sidl_BaseInterface__object**)) 
      epv->f__dump_stats;
    e5->f__exec          = (void (*)(struct sidl_BaseClass__object*,const char*,
      struct sidl_rmi_Call__object*,struct sidl_rmi_Return__object*,struct 
      sidl_BaseInterface__object **)) epv->f__exec;
    e5->f_addRef         = (void (*)(struct sidl_BaseClass__object*,struct 
      sidl_BaseInterface__object **)) epv->f_addRef;
    e5->f_deleteRef      = (void (*)(struct sidl_BaseClass__object*,struct 
      sidl_BaseInterface__object **)) epv->f_deleteRef;
    e5->f_isSame         = (sidl_bool (*)(struct sidl_BaseClass__object*,struct 
      sidl_BaseInterface__object*,struct sidl_BaseInterface__object **)) 
      epv->f_isSame;
    e5->f_isType         = (sidl_bool (*)(struct sidl_BaseClass__object*,const 
      char*,struct sidl_BaseInterface__object **)) epv->f_isType;
    e5->f_getClassInfo   = (struct sidl_ClassInfo__object* (*)(struct 
      sidl_BaseClass__object*,struct sidl_BaseInterface__object **)) 
      epv->f_getClassInfo;

    e6->f__cast          = (void* (*)(void*, const char*, struct 
      sidl_BaseInterface__object**)) epv->f__cast;
    e6->f__delete        = (void (*)(void*, struct 
      sidl_BaseInterface__object**)) epv->f__delete;
    e6->f__getURL        = (char* (*)(void*, struct 
      sidl_BaseInterface__object**)) epv->f__getURL;
    e6->f__raddRef       = (void (*)(void*, struct 
      sidl_BaseInterface__object**)) epv->f__raddRef;
    e6->f__isRemote      = (sidl_bool (*)(void*, struct 
      sidl_BaseInterface__object**)) epv->f__isRemote;
    e6->f__set_hooks     = (void (*)(void*, sidl_bool, struct 
      sidl_BaseInterface__object**)) epv->f__set_hooks;
    e6->f__set_contracts = (void (*)(void*, sidl_bool, const char*, sidl_bool, 
      struct sidl_BaseInterface__object**)) epv->f__set_contracts;
    e6->f__dump_stats    = (void (*)(void*, const char*, const char*, struct 
      sidl_BaseInterface__object**)) epv->f__dump_stats;
    e6->f__exec          = (void (*)(void*,const char*,struct 
      sidl_rmi_Call__object*,struct sidl_rmi_Return__object*,struct 
      sidl_BaseInterface__object **)) epv->f__exec;
    e6->f_addRef         = (void (*)(void*,struct sidl_BaseInterface__object 
      **)) epv->f_addRef;
    e6->f_deleteRef      = (void (*)(void*,struct sidl_BaseInterface__object 
      **)) epv->f_deleteRef;
    e6->f_isSame         = (sidl_bool (*)(void*,struct 
      sidl_BaseInterface__object*,struct sidl_BaseInterface__object **)) 
      epv->f_isSame;
    e6->f_isType         = (sidl_bool (*)(void*,const char*,struct 
      sidl_BaseInterface__object **)) epv->f_isType;
    e6->f_getClassInfo   = (struct sidl_ClassInfo__object* (*)(void*,struct 
      sidl_BaseInterface__object **)) epv->f_getClassInfo;

    s_remote_initialized = 1;
  }

  // Create an instance that connects to an existing remote object.
  static struct edu_csdms_models_Child__object*
  edu_csdms_models_Child__remoteConnect(const char *url, sidl_bool ar, struct 
    sidl_BaseInterface__object* *_ex)
  {
    struct edu_csdms_models_Child__object* self = NULL;

    struct edu_csdms_models_Child__object* s0;
    struct sidl_BaseClass__object* s1;

    struct edu_csdms_models_Child__remote* r_obj = NULL;
    sidl_rmi_InstanceHandle instance = NULL;
    char* objectID = NULL;
    objectID = NULL;
    *_ex = NULL;
    if(url == NULL) {return NULL;}
    objectID = sidl_rmi_ServerRegistry_isLocalObject(url, _ex);
    if(objectID) {
      struct edu_csdms_models_Child__object* retobj = NULL;
      struct sidl_BaseInterface__object *throwaway_exception;
      sidl_BaseInterface bi = (
        sidl_BaseInterface)sidl_rmi_InstanceRegistry_getInstanceByString(
        objectID, _ex); SIDL_CHECK(*_ex);
      (*bi->d_epv->f_deleteRef)(bi->d_object, &throwaway_exception);
      retobj = (struct edu_csdms_models_Child__object*) (*bi->d_epv->f__cast)(
        bi->d_object, "edu.csdms.models.Child", _ex);
      if(!ar) { 
        (*bi->d_epv->f_deleteRef)(bi->d_object, &throwaway_exception);
      }
      return retobj;
    }
    instance = sidl_rmi_ProtocolFactory_connectInstance(url, 
      "edu.csdms.models.Child", ar, _ex ); SIDL_CHECK(*_ex);
    if ( instance == NULL) { return NULL; }
    self =
      (struct edu_csdms_models_Child__object*) malloc(
        sizeof(struct edu_csdms_models_Child__object));

    r_obj =
      (struct edu_csdms_models_Child__remote*) malloc(
        sizeof(struct edu_csdms_models_Child__remote));

    if(!self || !r_obj) {
      sidl_MemAllocException ex = sidl_MemAllocException_getSingletonException(
        _ex);
      SIDL_CHECK(*_ex);
      sidl_MemAllocException_setNote(ex, "Out of memory.", _ex); SIDL_CHECK(
        *_ex);
      sidl_MemAllocException_add(ex, __FILE__, __LINE__, 
        "edu.csdms.models.Child.EPVgeneration", _ex);
      SIDL_CHECK(*_ex);
      *_ex = (struct sidl_BaseInterface__object*)ex;
      goto EXIT;
    }

    r_obj->d_refcount = 1;
    r_obj->d_ih = instance;
    s0 =                                  self;
    s1 =                                  &s0->d_sidl_baseclass;

    LOCK_STATIC_GLOBALS;
    if (!s_remote_initialized) {
      edu_csdms_models_Child__init_remote_epv();
    }
    UNLOCK_STATIC_GLOBALS;

    s1->d_sidl_baseinterface.d_epv    = &s_rem_epv__sidl_baseinterface;
    s1->d_sidl_baseinterface.d_object = (void*) self;

    s1->d_data = (void*) r_obj;
    s1->d_epv  = &s_rem_epv__sidl_baseclass;

    s0->d_edu_csdms_ports_irfport.d_epv    = 
      &s_rem_epv__edu_csdms_ports_irfport;
    s0->d_edu_csdms_ports_irfport.d_object = (void*) self;

    s0->d_gov_cca_component.d_epv    = &s_rem_epv__gov_cca_component;
    s0->d_gov_cca_component.d_object = (void*) self;

    s0->d_gov_cca_componentrelease.d_epv    = 
      &s_rem_epv__gov_cca_componentrelease;
    s0->d_gov_cca_componentrelease.d_object = (void*) self;

    s0->d_gov_cca_port.d_epv    = &s_rem_epv__gov_cca_port;
    s0->d_gov_cca_port.d_object = (void*) self;

    s0->d_gov_cca_ports_goport.d_epv    = &s_rem_epv__gov_cca_ports_goport;
    s0->d_gov_cca_ports_goport.d_object = (void*) self;

    s0->d_data = (void*) r_obj;
    s0->d_epv  = &s_rem_epv__edu_csdms_models_child;

    self->d_data = (void*) r_obj;

    return self;
    EXIT:
    if(self) { free(self); }
    if(r_obj) { free(r_obj); }
    return NULL;
  }
  // Create an instance that uses an already existing 
  // InstanceHandle to connect to an existing remote object.
  static struct edu_csdms_models_Child__object*
  edu_csdms_models_Child__IHConnect(sidl_rmi_InstanceHandle instance, struct 
    sidl_BaseInterface__object* *_ex)
  {
    struct edu_csdms_models_Child__object* self = NULL;

    struct edu_csdms_models_Child__object* s0;
    struct sidl_BaseClass__object* s1;

    struct edu_csdms_models_Child__remote* r_obj = NULL;
    self =
      (struct edu_csdms_models_Child__object*) malloc(
        sizeof(struct edu_csdms_models_Child__object));

    r_obj =
      (struct edu_csdms_models_Child__remote*) malloc(
        sizeof(struct edu_csdms_models_Child__remote));

    if(!self || !r_obj) {
      sidl_MemAllocException ex = sidl_MemAllocException_getSingletonException(
        _ex);
      SIDL_CHECK(*_ex);
      sidl_MemAllocException_setNote(ex, "Out of memory.", _ex); SIDL_CHECK(
        *_ex);
      sidl_MemAllocException_add(ex, __FILE__, __LINE__, 
        "edu.csdms.models.Child.EPVgeneration", _ex);
      SIDL_CHECK(*_ex);
      *_ex = (struct sidl_BaseInterface__object*)ex;
      goto EXIT;
    }

    r_obj->d_refcount = 1;
    r_obj->d_ih = instance;
    s0 =                                  self;
    s1 =                                  &s0->d_sidl_baseclass;

    LOCK_STATIC_GLOBALS;
    if (!s_remote_initialized) {
      edu_csdms_models_Child__init_remote_epv();
    }
    UNLOCK_STATIC_GLOBALS;

    s1->d_sidl_baseinterface.d_epv    = &s_rem_epv__sidl_baseinterface;
    s1->d_sidl_baseinterface.d_object = (void*) self;

    s1->d_data = (void*) r_obj;
    s1->d_epv  = &s_rem_epv__sidl_baseclass;

    s0->d_edu_csdms_ports_irfport.d_epv    = 
      &s_rem_epv__edu_csdms_ports_irfport;
    s0->d_edu_csdms_ports_irfport.d_object = (void*) self;

    s0->d_gov_cca_component.d_epv    = &s_rem_epv__gov_cca_component;
    s0->d_gov_cca_component.d_object = (void*) self;

    s0->d_gov_cca_componentrelease.d_epv    = 
      &s_rem_epv__gov_cca_componentrelease;
    s0->d_gov_cca_componentrelease.d_object = (void*) self;

    s0->d_gov_cca_port.d_epv    = &s_rem_epv__gov_cca_port;
    s0->d_gov_cca_port.d_object = (void*) self;

    s0->d_gov_cca_ports_goport.d_epv    = &s_rem_epv__gov_cca_ports_goport;
    s0->d_gov_cca_ports_goport.d_object = (void*) self;

    s0->d_data = (void*) r_obj;
    s0->d_epv  = &s_rem_epv__edu_csdms_models_child;

    self->d_data = (void*) r_obj;

    sidl_rmi_InstanceHandle_addRef(instance,_ex);SIDL_CHECK(*_ex);
    return self;
    EXIT:
    if(self) { free(self); }
    if(r_obj) { free(r_obj); }
    return NULL;
  }
  // REMOTE: generate remote instance given URL string.
  static struct edu_csdms_models_Child__object*
  edu_csdms_models_Child__remoteCreate(const char *url, struct 
    sidl_BaseInterface__object **_ex)
  {
    struct sidl_BaseInterface__object* _throwaway_exception = NULL;
    struct edu_csdms_models_Child__object* self = NULL;

    struct edu_csdms_models_Child__object* s0;
    struct sidl_BaseClass__object* s1;

    struct edu_csdms_models_Child__remote* r_obj = NULL;
    sidl_rmi_InstanceHandle instance = sidl_rmi_ProtocolFactory_createInstance(
      url, "edu.csdms.models.Child", _ex ); SIDL_CHECK(*_ex);
    if ( instance == NULL) { return NULL; }
    self =
      (struct edu_csdms_models_Child__object*) malloc(
        sizeof(struct edu_csdms_models_Child__object));

    r_obj =
      (struct edu_csdms_models_Child__remote*) malloc(
        sizeof(struct edu_csdms_models_Child__remote));

    if(!self || !r_obj) {
      sidl_MemAllocException ex = sidl_MemAllocException_getSingletonException(
        _ex);
      SIDL_CHECK(*_ex);
      sidl_MemAllocException_setNote(ex, "Out of memory.", _ex); SIDL_CHECK(
        *_ex);
      sidl_MemAllocException_add(ex, __FILE__, __LINE__, 
        "edu.csdms.models.Child.EPVgeneration", _ex);
      SIDL_CHECK(*_ex);
      *_ex = (struct sidl_BaseInterface__object*)ex;
      goto EXIT;
    }

    r_obj->d_refcount = 1;
    r_obj->d_ih = instance;
    s0 =                                  self;
    s1 =                                  &s0->d_sidl_baseclass;

    LOCK_STATIC_GLOBALS;
    if (!s_remote_initialized) {
      edu_csdms_models_Child__init_remote_epv();
    }
    UNLOCK_STATIC_GLOBALS;

    s1->d_sidl_baseinterface.d_epv    = &s_rem_epv__sidl_baseinterface;
    s1->d_sidl_baseinterface.d_object = (void*) self;

    s1->d_data = (void*) r_obj;
    s1->d_epv  = &s_rem_epv__sidl_baseclass;

    s0->d_edu_csdms_ports_irfport.d_epv    = 
      &s_rem_epv__edu_csdms_ports_irfport;
    s0->d_edu_csdms_ports_irfport.d_object = (void*) self;

    s0->d_gov_cca_component.d_epv    = &s_rem_epv__gov_cca_component;
    s0->d_gov_cca_component.d_object = (void*) self;

    s0->d_gov_cca_componentrelease.d_epv    = 
      &s_rem_epv__gov_cca_componentrelease;
    s0->d_gov_cca_componentrelease.d_object = (void*) self;

    s0->d_gov_cca_port.d_epv    = &s_rem_epv__gov_cca_port;
    s0->d_gov_cca_port.d_object = (void*) self;

    s0->d_gov_cca_ports_goport.d_epv    = &s_rem_epv__gov_cca_ports_goport;
    s0->d_gov_cca_ports_goport.d_object = (void*) self;

    s0->d_data = (void*) r_obj;
    s0->d_epv  = &s_rem_epv__edu_csdms_models_child;

    self->d_data = (void*) r_obj;

    return self;
    EXIT:
    if(instance) { sidl_rmi_InstanceHandle_deleteRef(instance, 
      &_throwaway_exception); }
    if(self) { free(self); }
    if(r_obj) { free(r_obj); }
    return NULL;
  }
  // 
  // RMI connector function for the class.
  // 
  struct edu_csdms_models_Child__object*
  edu_csdms_models_Child__connectI(const char* url, sidl_bool ar, struct 
    sidl_BaseInterface__object **_ex)
  {
    return edu_csdms_models_Child__remoteConnect(url, ar, _ex);
  }


#endif /*WITH_RMI*/
}

//////////////////////////////////////////////////
// 
// Special methods for throwing exceptions
// 

void
edu::csdms::models::Child::throwException1(
  const char* methodName,
  struct sidl_BaseInterface__object *_exception
)
  // throws:
{
  void * _p = 0;
  struct sidl_BaseInterface__object *throwaway_exception;

  if ( (_p=(*(_exception->d_epv->f__cast))(_exception->d_object, 
    "sidl.RuntimeException", &throwaway_exception)) != 0 ) {
    struct sidl_RuntimeException__object * _realtype = reinterpret_cast< struct 
      sidl_RuntimeException__object*>(_p);
    (*_exception->d_epv->f_deleteRef)(_exception->d_object, 
      &throwaway_exception);
    // Note: alternate constructor does not increment refcount.
    ::sidl::RuntimeException _resolved_exception = ::sidl::RuntimeException( 
      _realtype, false );
    (_resolved_exception._get_ior()->d_epv->f_add) (
      _resolved_exception._get_ior()->d_object , __FILE__, __LINE__, methodName,
      &throwaway_exception);throw _resolved_exception;
  }
  // Any unresolved exception is treated as LangSpecificException
  ::sidl::LangSpecificException _unexpected = 
    ::sidl::LangSpecificException::_create();
  _unexpected.add(__FILE__,__LINE__, "Unknown method");
  _unexpected.setNote("Unexpected exception received by C++ stub.");
  throw _unexpected;
}
void
edu::csdms::models::Child::throwException0(
  const char* methodName,
  struct sidl_BaseInterface__object *_exception
)
  // throws:
  //    ::gov::cca::CCAException
  //    ::sidl::RuntimeException
{
  void * _p = 0;
  struct sidl_BaseInterface__object *throwaway_exception;

  if ( (_p=(*(_exception->d_epv->f__cast))(_exception->d_object, 
    "gov.cca.CCAException", &throwaway_exception)) != 0 ) {
    struct gov_cca_CCAException__object * _realtype = reinterpret_cast< struct 
      gov_cca_CCAException__object*>(_p);
    (*_exception->d_epv->f_deleteRef)(_exception->d_object, 
      &throwaway_exception);
    // Note: alternate constructor does not increment refcount.
    ::gov::cca::CCAException _resolved_exception = ::gov::cca::CCAException( 
      _realtype, false );
    (_resolved_exception._get_ior()->d_epv->f_add) (
      _resolved_exception._get_ior()->d_object , __FILE__, __LINE__, methodName,
      &throwaway_exception);throw _resolved_exception;
  }
  if ( (_p=(*(_exception->d_epv->f__cast))(_exception->d_object, 
    "sidl.RuntimeException", &throwaway_exception)) != 0 ) {
    struct sidl_RuntimeException__object * _realtype = reinterpret_cast< struct 
      sidl_RuntimeException__object*>(_p);
    (*_exception->d_epv->f_deleteRef)(_exception->d_object, 
      &throwaway_exception);
    // Note: alternate constructor does not increment refcount.
    ::sidl::RuntimeException _resolved_exception = ::sidl::RuntimeException( 
      _realtype, false );
    (_resolved_exception._get_ior()->d_epv->f_add) (
      _resolved_exception._get_ior()->d_object , __FILE__, __LINE__, methodName,
      &throwaway_exception);throw _resolved_exception;
  }
  // Any unresolved exception is treated as LangSpecificException
  ::sidl::LangSpecificException _unexpected = 
    ::sidl::LangSpecificException::_create();
  _unexpected.add(__FILE__,__LINE__, "Unknown method");
  _unexpected.setNote("Unexpected exception received by C++ stub.");
  throw _unexpected;
}

//////////////////////////////////////////////////
// 
// User Defined Methods
// 

/**
 * user defined non-static method.
 */
void
edu::csdms::models::Child::boccaSetServices( /* in */const 
  ::gov::cca::Services& services )
// throws:
//   ::gov::cca::CCAException
//   ::sidl::RuntimeException

{

  ior_t* const loc_self = (struct edu_csdms_models_Child__object*) 
    ::edu::csdms::models::Child::_get_ior();
  struct gov_cca_Services__object* _local_services = (struct 
    gov_cca_Services__object*) services.::gov::cca::Services::_get_ior();
  sidl_BaseInterface__object * _exception;
  /*pack args to dispatch to ior*/
  (*(loc_self->d_epv->f_boccaSetServices))(loc_self, /* in */ _local_services, 
    &_exception );
  /*dispatch to ior*/
  if (_exception != NULL ) {

    throwException0("boccaSetServices", _exception);
  }
  /*unpack results and cleanup*/
}


/**
 * user defined non-static method.
 */
void
edu::csdms::models::Child::boccaReleaseServices( /* in */const 
  ::gov::cca::Services& services )
// throws:
//   ::gov::cca::CCAException
//   ::sidl::RuntimeException

{

  ior_t* const loc_self = (struct edu_csdms_models_Child__object*) 
    ::edu::csdms::models::Child::_get_ior();
  struct gov_cca_Services__object* _local_services = (struct 
    gov_cca_Services__object*) services.::gov::cca::Services::_get_ior();
  sidl_BaseInterface__object * _exception;
  /*pack args to dispatch to ior*/
  (*(loc_self->d_epv->f_boccaReleaseServices))(loc_self, /* in */ 
    _local_services, &_exception );
  /*dispatch to ior*/
  if (_exception != NULL ) {

    throwException0("boccaReleaseServices", _exception);
  }
  /*unpack results and cleanup*/
}



/**
 *  This function should never be called, but helps babel generate better code. 
 */
void
edu::csdms::models::Child::boccaForceUsePortInclude( /* in */const 
  ::gov::cca::ports::ParameterPortFactory& dummy0, /* in */const 
  ::edu::csdms::ports::IRFPort& dummy1, /* in 
  */::edu::csdms::openmi::ElementType dummy2, /* in */const 
  ::edu::csdms::tools::TemplateFiles& dummy3, /* in */const 
  ::edu::csdms::tools::IRFPortQueue& dummy4, /* in */const 
  ::edu::csdms::tools::Verbose& dummy5, /* in */const 
  ::edu::csdms::openmi::ElementMapper& dummy6, /* in */const 
  ::edu::csdms::openmi::ScalarSet& dummy7, /* in */const 
  ::edu::csdms::tools::ConfigDialog& dummy8, /* in */const 
  ::edu::csdms::openmi::ElementSet& dummy9, /* in */const 
  ::edu::csdms::tools::PrintQueue& dummy10 )

{

  ior_t* const loc_self = (struct edu_csdms_models_Child__object*) 
    ::edu::csdms::models::Child::_get_ior();
  struct gov_cca_ports_ParameterPortFactory__object* _local_dummy0 = (struct 
    gov_cca_ports_ParameterPortFactory__object*) 
    dummy0.::gov::cca::ports::ParameterPortFactory::_get_ior();
  struct edu_csdms_ports_IRFPort__object* _local_dummy1 = (struct 
    edu_csdms_ports_IRFPort__object*) 
    dummy1.::edu::csdms::ports::IRFPort::_get_ior();
  int64_t _local_dummy2 = dummy2;
  struct edu_csdms_tools_TemplateFiles__object* _local_dummy3 = (struct 
    edu_csdms_tools_TemplateFiles__object*) 
    dummy3.::edu::csdms::tools::TemplateFiles::_get_ior();
  struct edu_csdms_tools_IRFPortQueue__object* _local_dummy4 = (struct 
    edu_csdms_tools_IRFPortQueue__object*) 
    dummy4.::edu::csdms::tools::IRFPortQueue::_get_ior();
  struct edu_csdms_tools_Verbose__object* _local_dummy5 = (struct 
    edu_csdms_tools_Verbose__object*) 
    dummy5.::edu::csdms::tools::Verbose::_get_ior();
  struct edu_csdms_openmi_ElementMapper__object* _local_dummy6 = (struct 
    edu_csdms_openmi_ElementMapper__object*) 
    dummy6.::edu::csdms::openmi::ElementMapper::_get_ior();
  struct edu_csdms_openmi_ScalarSet__object* _local_dummy7 = (struct 
    edu_csdms_openmi_ScalarSet__object*) 
    dummy7.::edu::csdms::openmi::ScalarSet::_get_ior();
  struct edu_csdms_tools_ConfigDialog__object* _local_dummy8 = (struct 
    edu_csdms_tools_ConfigDialog__object*) 
    dummy8.::edu::csdms::tools::ConfigDialog::_get_ior();
  struct edu_csdms_openmi_ElementSet__object* _local_dummy9 = (struct 
    edu_csdms_openmi_ElementSet__object*) 
    dummy9.::edu::csdms::openmi::ElementSet::_get_ior();
  struct edu_csdms_tools_PrintQueue__object* _local_dummy10 = (struct 
    edu_csdms_tools_PrintQueue__object*) 
    dummy10.::edu::csdms::tools::PrintQueue::_get_ior();
  sidl_BaseInterface__object * _exception;
  /*pack args to dispatch to ior*/
  (*(loc_self->d_epv->f_boccaForceUsePortInclude))(loc_self, /* in */ 
    _local_dummy0, /* in */ _local_dummy1, /* in */ _local_dummy2, /* in */ 
    _local_dummy3, /* in */ _local_dummy4, /* in */ _local_dummy5, /* in */ 
    _local_dummy6, /* in */ _local_dummy7, /* in */ _local_dummy8, /* in */ 
    _local_dummy9, /* in */ _local_dummy10, &_exception );
  /*dispatch to ior*/
  if (_exception != NULL ) {

    throwException1("boccaForceUsePortInclude", _exception);
  }
  /*unpack results and cleanup*/
}



/**
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
void
edu::csdms::models::Child::setServices( /* in */const ::gov::cca::Services& 
  services )
// throws:
//   ::gov::cca::CCAException
//   ::sidl::RuntimeException

{

  ior_t* const loc_self = (struct edu_csdms_models_Child__object*) 
    ::edu::csdms::models::Child::_get_ior();
  struct gov_cca_Services__object* _local_services = (struct 
    gov_cca_Services__object*) services.::gov::cca::Services::_get_ior();
  sidl_BaseInterface__object * _exception;
  /*pack args to dispatch to ior*/
  (*(loc_self->d_epv->f_setServices))(loc_self, /* in */ _local_services, 
    &_exception );
  /*dispatch to ior*/
  if (_exception != NULL ) {

    throwException0("setServices", _exception);
  }
  /*unpack results and cleanup*/
}



/**
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
void
edu::csdms::models::Child::releaseServices( /* in */const ::gov::cca::Services& 
  services )
// throws:
//   ::gov::cca::CCAException
//   ::sidl::RuntimeException

{

  ior_t* const loc_self = (struct edu_csdms_models_Child__object*) 
    ::edu::csdms::models::Child::_get_ior();
  struct gov_cca_Services__object* _local_services = (struct 
    gov_cca_Services__object*) services.::gov::cca::Services::_get_ior();
  sidl_BaseInterface__object * _exception;
  /*pack args to dispatch to ior*/
  (*(loc_self->d_epv->f_releaseServices))(loc_self, /* in */ _local_services, 
    &_exception );
  /*dispatch to ior*/
  if (_exception != NULL ) {

    throwException0("releaseServices", _exception);
  }
  /*unpack results and cleanup*/
}



/**
 *  
 * Execute some encapsulated functionality on the component. 
 * Return 0 if ok, -1 if internal error but component may be 
 * used further, and -2 if error so severe that component cannot
 * be further used safely.
 */
int32_t
edu::csdms::models::Child::go(  )

{
  int32_t _result;
  ior_t* const loc_self = (struct edu_csdms_models_Child__object*) 
    ::edu::csdms::models::Child::_get_ior();
  sidl_BaseInterface__object * _exception;
  /*pack args to dispatch to ior*/
  _result = (*(loc_self->d_epv->f_go))(loc_self, &_exception );
  /*dispatch to ior*/
  if (_exception != NULL ) {

    throwException1("go", _exception);
  }
  /*unpack results and cleanup*/
  return _result;
}


/**
 * user defined non-static method.
 */
void
edu::csdms::models::Child::initialize( /* in array<string> */const 
  ::sidl::array< ::std::string>& properties )

{

  ior_t* const loc_self = (struct edu_csdms_models_Child__object*) 
    ::edu::csdms::models::Child::_get_ior();
  sidl_BaseInterface__object * _exception;
  /*pack args to dispatch to ior*/
  (*(loc_self->d_epv->f_initialize))(loc_self, /* in array<string> */ 
    properties._get_ior(), &_exception );
  /*dispatch to ior*/
  if (_exception != NULL ) {

    throwException1("initialize", _exception);
  }
  /*unpack results and cleanup*/
}


/**
 * user defined non-static method.
 */
void
edu::csdms::models::Child::run( /* in */double time )

{

  ior_t* const loc_self = (struct edu_csdms_models_Child__object*) 
    ::edu::csdms::models::Child::_get_ior();
  sidl_BaseInterface__object * _exception;
  /*pack args to dispatch to ior*/
  (*(loc_self->d_epv->f_run))(loc_self, /* in */ time, &_exception );
  /*dispatch to ior*/
  if (_exception != NULL ) {

    throwException1("run", _exception);
  }
  /*unpack results and cleanup*/
}


/**
 * user defined non-static method.
 */
void
edu::csdms::models::Child::finalize(  )

{

  ior_t* const loc_self = (struct edu_csdms_models_Child__object*) 
    ::edu::csdms::models::Child::_get_ior();
  sidl_BaseInterface__object * _exception;
  /*pack args to dispatch to ior*/
  (*(loc_self->d_epv->f_finalize))(loc_self, &_exception );
  /*dispatch to ior*/
  if (_exception != NULL ) {

    throwException1("finalize", _exception);
  }
  /*unpack results and cleanup*/
}


/**
 * user defined non-static method.
 */
int64_t
edu::csdms::models::Child::getRaster_nx(  )

{
  int64_t _result;
  ior_t* const loc_self = (struct edu_csdms_models_Child__object*) 
    ::edu::csdms::models::Child::_get_ior();
  sidl_BaseInterface__object * _exception;
  /*pack args to dispatch to ior*/
  _result = (*(loc_self->d_epv->f_getRaster_nx))(loc_self, &_exception );
  /*dispatch to ior*/
  if (_exception != NULL ) {

    throwException1("getRaster_nx", _exception);
  }
  /*unpack results and cleanup*/
  return _result;
}


/**
 * user defined non-static method.
 */
int64_t
edu::csdms::models::Child::getRaster_ny(  )

{
  int64_t _result;
  ior_t* const loc_self = (struct edu_csdms_models_Child__object*) 
    ::edu::csdms::models::Child::_get_ior();
  sidl_BaseInterface__object * _exception;
  /*pack args to dispatch to ior*/
  _result = (*(loc_self->d_epv->f_getRaster_ny))(loc_self, &_exception );
  /*dispatch to ior*/
  if (_exception != NULL ) {

    throwException1("getRaster_ny", _exception);
  }
  /*unpack results and cleanup*/
  return _result;
}


/**
 * user defined non-static method.
 */
double
edu::csdms::models::Child::getRaster_dx(  )

{
  double _result;
  ior_t* const loc_self = (struct edu_csdms_models_Child__object*) 
    ::edu::csdms::models::Child::_get_ior();
  sidl_BaseInterface__object * _exception;
  /*pack args to dispatch to ior*/
  _result = (*(loc_self->d_epv->f_getRaster_dx))(loc_self, &_exception );
  /*dispatch to ior*/
  if (_exception != NULL ) {

    throwException1("getRaster_dx", _exception);
  }
  /*unpack results and cleanup*/
  return _result;
}


/**
 * user defined non-static method.
 */
double
edu::csdms::models::Child::getRaster_dy(  )

{
  double _result;
  ior_t* const loc_self = (struct edu_csdms_models_Child__object*) 
    ::edu::csdms::models::Child::_get_ior();
  sidl_BaseInterface__object * _exception;
  /*pack args to dispatch to ior*/
  _result = (*(loc_self->d_epv->f_getRaster_dy))(loc_self, &_exception );
  /*dispatch to ior*/
  if (_exception != NULL ) {

    throwException1("getRaster_dy", _exception);
  }
  /*unpack results and cleanup*/
  return _result;
}


/**
 * user defined non-static method.
 */
double
edu::csdms::models::Child::getRaster_ulx(  )

{
  double _result;
  ior_t* const loc_self = (struct edu_csdms_models_Child__object*) 
    ::edu::csdms::models::Child::_get_ior();
  sidl_BaseInterface__object * _exception;
  /*pack args to dispatch to ior*/
  _result = (*(loc_self->d_epv->f_getRaster_ulx))(loc_self, &_exception );
  /*dispatch to ior*/
  if (_exception != NULL ) {

    throwException1("getRaster_ulx", _exception);
  }
  /*unpack results and cleanup*/
  return _result;
}


/**
 * user defined non-static method.
 */
double
edu::csdms::models::Child::getRaster_uly(  )

{
  double _result;
  ior_t* const loc_self = (struct edu_csdms_models_Child__object*) 
    ::edu::csdms::models::Child::_get_ior();
  sidl_BaseInterface__object * _exception;
  /*pack args to dispatch to ior*/
  _result = (*(loc_self->d_epv->f_getRaster_uly))(loc_self, &_exception );
  /*dispatch to ior*/
  if (_exception != NULL ) {

    throwException1("getRaster_uly", _exception);
  }
  /*unpack results and cleanup*/
  return _result;
}


/**
 * user defined non-static method.
 */
::sidl::array<double>
edu::csdms::models::Child::getRaster_grid( /* in */const ::std::string& 
  val_string )

{
  ::sidl::array<double> _result;
  ior_t* const loc_self = (struct edu_csdms_models_Child__object*) 
    ::edu::csdms::models::Child::_get_ior();
  struct sidl_double__array* _local_result;
  sidl_BaseInterface__object * _exception;
  /*pack args to dispatch to ior*/
  _local_result = (*(loc_self->d_epv->f_getRaster_grid))(loc_self, /* in */ 
    val_string.c_str(), &_exception );
  /*dispatch to ior*/
  if (_exception != NULL ) {

    throwException1("getRaster_grid", _exception);
  }
  _result._set_ior(_local_result);
  /*unpack results and cleanup*/
  return _result;
}


/**
 * user defined non-static method.
 */
::sidl::array<int32_t>
edu::csdms::models::Child::get_raster_dimen( /* in */const ::std::string& 
  val_string )

{
  ::sidl::array<int32_t> _result;
  ior_t* const loc_self = (struct edu_csdms_models_Child__object*) 
    ::edu::csdms::models::Child::_get_ior();
  struct sidl_int__array* _local_result;
  sidl_BaseInterface__object * _exception;
  /*pack args to dispatch to ior*/
  _local_result = (*(loc_self->d_epv->f_get_raster_dimen))(loc_self, /* in */ 
    val_string.c_str(), &_exception );
  /*dispatch to ior*/
  if (_exception != NULL ) {

    throwException1("get_raster_dimen", _exception);
  }
  _result._set_ior(_local_result);
  /*unpack results and cleanup*/
  return _result;
}


/**
 * user defined non-static method.
 */
::sidl::array<double>
edu::csdms::models::Child::get_raster_res( /* in */const ::std::string& 
  val_string )

{
  ::sidl::array<double> _result;
  ior_t* const loc_self = (struct edu_csdms_models_Child__object*) 
    ::edu::csdms::models::Child::_get_ior();
  struct sidl_double__array* _local_result;
  sidl_BaseInterface__object * _exception;
  /*pack args to dispatch to ior*/
  _local_result = (*(loc_self->d_epv->f_get_raster_res))(loc_self, /* in */ 
    val_string.c_str(), &_exception );
  /*dispatch to ior*/
  if (_exception != NULL ) {

    throwException1("get_raster_res", _exception);
  }
  _result._set_ior(_local_result);
  /*unpack results and cleanup*/
  return _result;
}


/**
 * user defined non-static method.
 */
::sidl::basearray
edu::csdms::models::Child::get_raster_data( /* in */const ::std::string& 
  val_string )

{
  ::sidl::basearray _result;
  ior_t* const loc_self = (struct edu_csdms_models_Child__object*) 
    ::edu::csdms::models::Child::_get_ior();
  struct sidl__array* _local_result;
  sidl_BaseInterface__object * _exception;
  /*pack args to dispatch to ior*/
  _local_result = (*(loc_self->d_epv->f_get_raster_data))(loc_self, /* in */ 
    val_string.c_str(), &_exception );
  /*dispatch to ior*/
  if (_exception != NULL ) {

    throwException1("get_raster_data", _exception);
  }
  _result._set_ior(_local_result);
  /*unpack results and cleanup*/
  return _result;
}


/**
 * user defined non-static method.
 */
::sidl::array<double>
edu::csdms::models::Child::get_time_span(  )

{
  ::sidl::array<double> _result;
  ior_t* const loc_self = (struct edu_csdms_models_Child__object*) 
    ::edu::csdms::models::Child::_get_ior();
  struct sidl_double__array* _local_result;
  sidl_BaseInterface__object * _exception;
  /*pack args to dispatch to ior*/
  _local_result = (*(loc_self->d_epv->f_get_time_span))(loc_self, &_exception );
  /*dispatch to ior*/
  if (_exception != NULL ) {

    throwException1("get_time_span", _exception);
  }
  _result._set_ior(_local_result);
  /*unpack results and cleanup*/
  return _result;
}


/**
 * user defined non-static method.
 */
::edu::csdms::openmi::IElementSet
edu::csdms::models::Child::get_element_set( /* in */const ::std::string& 
  val_string )

{
  ::edu::csdms::openmi::IElementSet _result;
  ior_t* const loc_self = (struct edu_csdms_models_Child__object*) 
    ::edu::csdms::models::Child::_get_ior();
  sidl_BaseInterface__object * _exception;
  /*pack args to dispatch to ior*/
  _result = ::edu::csdms::openmi::IElementSet( (*(
    loc_self->d_epv->f_get_element_set))(loc_self, /* in */ val_string.c_str(), 
    &_exception ), false);
  /*dispatch to ior*/
  if (_exception != NULL ) {

    throwException1("get_element_set", _exception);
  }
  /*unpack results and cleanup*/
  return _result;
}


/**
 * user defined non-static method.
 */
::edu::csdms::openmi::IValueSet
edu::csdms::models::Child::get_value_set( /* in */const ::std::string& 
  val_string )

{
  ::edu::csdms::openmi::IValueSet _result;
  ior_t* const loc_self = (struct edu_csdms_models_Child__object*) 
    ::edu::csdms::models::Child::_get_ior();
  sidl_BaseInterface__object * _exception;
  /*pack args to dispatch to ior*/
  _result = ::edu::csdms::openmi::IValueSet( (*(
    loc_self->d_epv->f_get_value_set))(loc_self, /* in */ val_string.c_str(), 
    &_exception ), false);
  /*dispatch to ior*/
  if (_exception != NULL ) {

    throwException1("get_value_set", _exception);
  }
  /*unpack results and cleanup*/
  return _result;
}


/**
 * user defined non-static method.
 */
::sidl::basearray
edu::csdms::models::Child::get_value_set_data( /* in */const ::std::string& 
  val_string )

{
  ::sidl::basearray _result;
  ior_t* const loc_self = (struct edu_csdms_models_Child__object*) 
    ::edu::csdms::models::Child::_get_ior();
  struct sidl__array* _local_result;
  sidl_BaseInterface__object * _exception;
  /*pack args to dispatch to ior*/
  _local_result = (*(loc_self->d_epv->f_get_value_set_data))(loc_self, /* in */ 
    val_string.c_str(), &_exception );
  /*dispatch to ior*/
  if (_exception != NULL ) {

    throwException1("get_value_set_data", _exception);
  }
  _result._set_ior(_local_result);
  /*unpack results and cleanup*/
  return _result;
}


/**
 * user defined non-static method.
 */
void
edu::csdms::models::Child::set_value_set( /* in */const ::std::string& 
  val_string, /* in */const ::edu::csdms::openmi::IValueSet& values )

{

  ior_t* const loc_self = (struct edu_csdms_models_Child__object*) 
    ::edu::csdms::models::Child::_get_ior();
  struct edu_csdms_openmi_IValueSet__object* _local_values = (struct 
    edu_csdms_openmi_IValueSet__object*) 
    values.::edu::csdms::openmi::IValueSet::_get_ior();
  sidl_BaseInterface__object * _exception;
  /*pack args to dispatch to ior*/
  (*(loc_self->d_epv->f_set_value_set))(loc_self, /* in */ val_string.c_str(), 
    /* in */ _local_values, &_exception );
  /*dispatch to ior*/
  if (_exception != NULL ) {

    throwException1("set_value_set", _exception);
  }
  /*unpack results and cleanup*/
}



//////////////////////////////////////////////////
// 
// End User Defined Methods
// (everything else in this file is specific to
//  Babel's C++ bindings)
// 

// static constructor
::edu::csdms::models::Child
edu::csdms::models::Child::_create() {
  struct sidl_BaseInterface__object * _exception = NULL;
  ::edu::csdms::models::Child self( (*_get_ext()->createObject)(NULL, 
    &_exception), false );
  if (_exception != NULL) {
    throwException1("::edu::csdms::models::Child"
      "static constructor", _exception);
  }
  return self;
}

// Internal data wrapping method
::edu::csdms::models::Child::ior_t*
edu::csdms::models::Child::_wrapObj(void* private_data) {
  struct sidl_BaseInterface__object *_exception = NULL;
  ::edu::csdms::models::Child::ior_t* returnValue = (*_get_ext()->createObject)(
    private_data ,&_exception);
  if (_exception) {
    throwException1("::edu::csdms::models::Child._wrap", _exception);
  }
  return returnValue;
}

#ifdef WITH_RMI
// remote constructor
::edu::csdms::models::Child
edu::csdms::models::Child::_create(const std::string& url) {
  ior_t* ior_self;
  struct sidl_BaseInterface__object *_exception = NULL;
  ior_self = edu_csdms_models_Child__remoteCreate( url.c_str(), &_exception );
  if (_exception != NULL ) {
    throwException1("::edu::csdms::models::Child remoteCreate", _exception);
  }
  return ::edu::csdms::models::Child( ior_self, false );
}
#endif

#ifdef WITH_RMI
// remote connector
::edu::csdms::models::Child
edu::csdms::models::Child::_connect(const std::string& url, const bool ar ) {
  ior_t* ior_self;
  struct sidl_BaseInterface__object *_exception = NULL;
  ior_self = edu_csdms_models_Child__remoteConnect( url.c_str(), ar?TRUE:FALSE, 
    &_exception );
  if (_exception != NULL ) {
    throwException1("::edu::csdms::models::Child connect",_exception);
  }
  return ::edu::csdms::models::Child( ior_self, false );
}
#endif

// copy constructor
edu::csdms::models::Child::Child ( const ::edu::csdms::models::Child& original 
  ) {
  _set_ior((struct edu_csdms_models_Child__object*) 
    original.::edu::csdms::models::Child::_get_ior());
  if(d_self) {
    addRef();
  }
  d_weak_reference = false;
}

// assignment operator
::edu::csdms::models::Child&
edu::csdms::models::Child::operator=( const ::edu::csdms::models::Child& rhs ) {
  if ( d_self != rhs.d_self ) {
    if ( d_self != 0 ) {
      deleteRef();
    }
    _set_ior((struct edu_csdms_models_Child__object*) 
      rhs.::edu::csdms::models::Child::_get_ior());
    if(d_self) {
      addRef();
    }
    d_weak_reference = false;
  }
  return *this;
}

// conversion from ior to C++ class
edu::csdms::models::Child::Child ( ::edu::csdms::models::Child::ior_t* ior ) : 
  StubBase(reinterpret_cast< void*>(ior)), 
  ::gov::cca::Port((ior==NULL) ? NULL : &((*ior).d_gov_cca_port)),
  ::edu::csdms::ports::IRFPort((ior==NULL) ? NULL : &((
    *ior).d_edu_csdms_ports_irfport)),
  ::gov::cca::Component((ior==NULL) ? NULL : &((*ior).d_gov_cca_component)),
  ::gov::cca::ComponentRelease((ior==NULL) ? NULL : &((
    *ior).d_gov_cca_componentrelease)),
  ::gov::cca::ports::GoPort((ior==NULL) ? NULL : &((
    *ior).d_gov_cca_ports_goport)) {}

// Alternate constructor: does not call addRef()
// (sets d_weak_reference=isWeak)
// For internal use by Impls (fixes bug#275)
edu::csdms::models::Child::Child ( ::edu::csdms::models::Child::ior_t* ior, 
  bool isWeak ) : 
  StubBase(reinterpret_cast< void*>(ior), isWeak), 
  ::gov::cca::Port((ior==NULL) ? NULL : &((*ior).d_gov_cca_port)),
  ::edu::csdms::ports::IRFPort((ior==NULL) ? NULL : &((
    *ior).d_edu_csdms_ports_irfport)),
  ::gov::cca::Component((ior==NULL) ? NULL : &((*ior).d_gov_cca_component)),
  ::gov::cca::ComponentRelease((ior==NULL) ? NULL : &((
    *ior).d_gov_cca_componentrelease)),
  ::gov::cca::ports::GoPort((ior==NULL) ? NULL : &((
    *ior).d_gov_cca_ports_goport)) {}

// This safe IOR cast addresses Roundup issue475
int ::edu::csdms::models::Child::_set_ior_typesafe( struct 
  sidl_BaseInterface__object *obj,
                                         const ::std::type_info &argtype) { 
  if ( obj == NULL || argtype == typeid(*this) ) {
    // optimized case:  _set_ior() is sufficient
    _set_ior( reinterpret_cast<ior_t*>(obj) );
    return 0;
  } else {
    // Attempt to downcast ior pointer to matching stub type
    ior_t* _my_ptr = NULL;
    if ((_my_ptr = _cast( obj )) == NULL ) {
      return 1;
    } else {
      _set_ior(_my_ptr);
      struct sidl_BaseInterface__object* _throwaway=NULL;
      sidl_BaseInterface_deleteRef(obj,&_throwaway);
      return 0;
    }
  }
}

// exec has special argument passing to avoid #include circularities
void ::edu::csdms::models::Child::_exec( const std::string& methodName, 
                        sidl::rmi::Call& inArgs,
                        sidl::rmi::Return& outArgs) { 
  ::edu::csdms::models::Child::ior_t* const loc_self = _get_ior();
  struct sidl_BaseInterface__object *throwaway_exception;
  (*loc_self->d_epv->f__exec)(loc_self,
                                methodName.c_str(),
                                inArgs._get_ior(),
                                outArgs._get_ior(),
                                &throwaway_exception);
}


/**
 * Get the URL of the Implementation of this object (for RMI)
 */
::std::string
edu::csdms::models::Child::_getURL(  )
// throws:
//   ::sidl::RuntimeException

{
  ::std::string _result;
  ior_t* const loc_self = (struct edu_csdms_models_Child__object*) 
    ::edu::csdms::models::Child::_get_ior();
  char * _local_result;
  sidl_BaseInterface__object * _exception;
  /*pack args to dispatch to ior*/
  _local_result = (*(loc_self->d_epv->f__getURL))(loc_self, &_exception );
  /*dispatch to ior*/
  if (_exception != NULL ) {

    throwException1("_getURL", _exception);
  }
  if (_local_result) {
    _result = _local_result;
    ::sidl_String_free( _local_result );
  }
  /*unpack results and cleanup*/
  return _result;
}


/**
 * Method to enable/disable method hooks invocation.
 */
void
edu::csdms::models::Child::_set_hooks( /* in */bool enable )
// throws:
//   ::sidl::RuntimeException

{

  ior_t* const loc_self = (struct edu_csdms_models_Child__object*) 
    ::edu::csdms::models::Child::_get_ior();
  sidl_bool _local_enable = enable;
  sidl_BaseInterface__object * _exception;
  /*pack args to dispatch to ior*/
  (*(loc_self->d_epv->f__set_hooks))(loc_self, /* in */ _local_enable, 
    &_exception );
  /*dispatch to ior*/
  if (_exception != NULL ) {

    throwException1("_set_hooks", _exception);
  }
  /*unpack results and cleanup*/
}


/**
 * Method to enable/disable interface contract enforcement.
 */
void
edu::csdms::models::Child::_set_contracts( /* in */bool enable, /* in */const 
  ::std::string& enfFilename, /* in */bool resetCounters )
// throws:
//   ::sidl::RuntimeException

{

  ior_t* const loc_self = (struct edu_csdms_models_Child__object*) 
    ::edu::csdms::models::Child::_get_ior();
  sidl_bool _local_enable = enable;
  sidl_bool _local_resetCounters = resetCounters;
  sidl_BaseInterface__object * _exception;
  /*pack args to dispatch to ior*/
  (*(loc_self->d_epv->f__set_contracts))(loc_self, /* in */ _local_enable, /* 
    in */ enfFilename.c_str(), /* in */ _local_resetCounters, &_exception );
  /*dispatch to ior*/
  if (_exception != NULL ) {

    throwException1("_set_contracts", _exception);
  }
  /*unpack results and cleanup*/
}


/**
 * Method to dump contract enforcement statistics.
 */
void
edu::csdms::models::Child::_dump_stats( /* in */const ::std::string& filename, 
  /* in */const ::std::string& prefix )
// throws:
//   ::sidl::RuntimeException

{

  ior_t* const loc_self = (struct edu_csdms_models_Child__object*) 
    ::edu::csdms::models::Child::_get_ior();
  sidl_BaseInterface__object * _exception;
  /*pack args to dispatch to ior*/
  (*(loc_self->d_epv->f__dump_stats))(loc_self, /* in */ filename.c_str(), /* 
    in */ prefix.c_str(), &_exception );
  /*dispatch to ior*/
  if (_exception != NULL ) {

    throwException1("_dump_stats", _exception);
  }
  /*unpack results and cleanup*/
}

// protected method that implements casting
struct edu_csdms_models_Child__object* edu::csdms::models::Child::_cast(const 
  void* src)
{
  ior_t* cast = NULL;
#ifdef WITH_RMI
  static int connect_loaded = 0;

  if(!connect_loaded) {
    struct sidl_BaseInterface__object *throwaway_exception;
    sidl_rmi_ConnectRegistry_registerConnect("edu.csdms.models.Child", (
      void*)edu_csdms_models_Child__IHConnect, &throwaway_exception);
    connect_loaded = 1;
  }
#endif
  if ( src != 0 ) {
    // Actually, this thing is still const
    void* tmp = const_cast<void*>(src);
    struct sidl_BaseInterface__object *throwaway_exception;
    struct sidl_BaseInterface__object * base = reinterpret_cast< struct 
      sidl_BaseInterface__object *>(tmp);
    cast = reinterpret_cast< ior_t*>((*base->d_epv->f__cast)(base->d_object, 
      "edu.csdms.models.Child", &throwaway_exception));
  }
  return cast;
}

// Static data type
const ::edu::csdms::models::Child::ext_t * edu::csdms::models::Child::s_ext = 0;

// private static method to get static data type
const ::edu::csdms::models::Child::ext_t *
edu::csdms::models::Child::_get_ext()
  throw ( ::sidl::NullIORException)
{
  if (! s_ext ) {
#ifdef SIDL_STATIC_LIBRARY
    s_ext = edu_csdms_models_Child__externals();
#else
    s_ext = (struct edu_csdms_models_Child__external*)sidl_dynamicLoadIOR(
      "edu.csdms.models.Child","edu_csdms_models_Child__externals") ;
#endif
    sidl_checkIORVersion("edu.csdms.models.Child", s_ext->d_ior_major_version, 
      s_ext->d_ior_minor_version, 2, 0);
  }
  return s_ext;
}

