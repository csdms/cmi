/*
 * File:          edu_csdms_models_CEM.h
 * Symbol:        edu.csdms.models.CEM-v0.0
 * Symbol Type:   class
 * Babel Version: 1.4.0 (Revision: 6607 release-1-4-0-branch)
 * Description:   Client-side glue code for edu.csdms.models.CEM
 * 
 * WARNING: Automatically generated; changes will be lost
 * 
 */

#ifndef included_edu_csdms_models_CEM_h
#define included_edu_csdms_models_CEM_h

/**
 * Symbol "edu.csdms.models.CEM" (version 0.0)
 */
struct edu_csdms_models_CEM__object;
struct edu_csdms_models_CEM__array;
typedef struct edu_csdms_models_CEM__object* edu_csdms_models_CEM;

/*
 * Includes for all header dependencies.
 */

#ifndef included_sidl_header_h
#include "sidl_header.h"
#endif
#ifndef included_edu_csdms_openmi_IElementSet_h
#include "edu_csdms_openmi_IElementSet.h"
#endif
#ifndef included_edu_csdms_openmi_IScalarSet_h
#include "edu_csdms_openmi_IScalarSet.h"
#endif
#ifndef included_edu_csdms_openmi_IValueSet_h
#include "edu_csdms_openmi_IValueSet.h"
#endif
#ifndef included_edu_csdms_openmi_ScalarSet_h
#include "edu_csdms_openmi_ScalarSet.h"
#endif
#ifndef included_edu_csdms_openmi_ValueSet_h
#include "edu_csdms_openmi_ValueSet.h"
#endif
#ifndef included_edu_csdms_ports_IRFPort_h
#include "edu_csdms_ports_IRFPort.h"
#endif
#ifndef included_edu_csdms_tools_ConfigDialog_h
#include "edu_csdms_tools_ConfigDialog.h"
#endif
#ifndef included_edu_csdms_tools_IRFPortQueue_h
#include "edu_csdms_tools_IRFPortQueue.h"
#endif
#ifndef included_edu_csdms_tools_PrintQueue_h
#include "edu_csdms_tools_PrintQueue.h"
#endif
#ifndef included_edu_csdms_tools_Verbose_h
#include "edu_csdms_tools_Verbose.h"
#endif
#ifndef included_gov_cca_CCAException_h
#include "gov_cca_CCAException.h"
#endif
#ifndef included_gov_cca_Services_h
#include "gov_cca_Services.h"
#endif
#ifndef included_gov_cca_ports_ParameterPortFactory_h
#include "gov_cca_ports_ParameterPortFactory.h"
#endif
#ifndef included_sidl_BaseException_h
#include "sidl_BaseException.h"
#endif
#ifndef included_sidl_BaseInterface_h
#include "sidl_BaseInterface.h"
#endif
#ifndef included_sidl_ClassInfo_h
#include "sidl_ClassInfo.h"
#endif
#ifndef included_sidl_RuntimeException_h
#include "sidl_RuntimeException.h"
#endif
#ifndef included_sidl_SIDLException_h
#include "sidl_SIDLException.h"
#endif

#ifndef included_sidl_rmi_Call_h
#include "sidl_rmi_Call.h"
#endif
#ifndef included_sidl_rmi_Return_h
#include "sidl_rmi_Return.h"
#endif
#ifdef SIDL_C_HAS_INLINE
#ifndef included_edu_csdms_models_CEM_IOR_h
#include "edu_csdms_models_CEM_IOR.h"
#endif
#endif /* SIDL_C_HAS_INLINE */
#ifdef __cplusplus
extern "C" {
#endif

#if !defined(EDU_CSDMS_MODELS_CEM_INLINE_DECL) && defined(SIDL_C_HAS_INLINE)
#if (defined(__STDC_VERSION__) && (__STDC_VERSION__ >= 199901L)) || defined(__INTEL_COMPILER) || !defined(__GNUC__)
#define EDU_CSDMS_MODELS_CEM_INLINE_DECL inline
#else
#define EDU_CSDMS_MODELS_CEM_INLINE_DECL extern inline
#endif
#endif /* inline preprocessor definitions */
/**
 * Constructor function for the class.
 */
struct edu_csdms_models_CEM__object*
edu_csdms_models_CEM__create(sidl_BaseInterface* _ex);

/**
 * Wraps up the private data struct pointer (struct edu_csdms_models_CEM__data) passed in rather than running the constructor.
 */
edu_csdms_models_CEM
edu_csdms_models_CEM__wrapObj(void * data, sidl_BaseInterface *_ex);

#ifdef WITH_RMI

/**
 * RMI constructor function for the class.
 */
edu_csdms_models_CEM
edu_csdms_models_CEM__createRemote(const char * url, sidl_BaseInterface *_ex);

/**
 * RMI connector function for the class.(addrefs)
 */
edu_csdms_models_CEM
edu_csdms_models_CEM__connect(const char *, sidl_BaseInterface *_ex);


#endif /*WITH_RMI*/
/**
 * Method to enable/disable interface contract enforcement.
 */
void
edu_csdms_models_CEM__set_contracts(
  edu_csdms_models_CEM self,
  sidl_bool   enable,
  const char* enfFilename,
  sidl_bool   resetCounters,
  struct sidl_BaseInterface__object **_ex);

/**
 * Method to dump interface contract enforcement statistics.
 */
void
edu_csdms_models_CEM__dump_stats(
  edu_csdms_models_CEM self,
  const char* filename,
  const char* prefix,
  struct sidl_BaseInterface__object **_ex);

/**
 * Method:  boccaSetServices[]
 */
EDU_CSDMS_MODELS_CEM_INLINE_DECL
void
edu_csdms_models_CEM_boccaSetServices(
  /* in */ edu_csdms_models_CEM self,
  /* in */ gov_cca_Services services,
  /* out */ sidl_BaseInterface *_ex)
#ifdef EDU_CSDMS_MODELS_CEM_INLINE_DECL
{
  (*self->d_epv->f_boccaSetServices)(
    self,
    services,
    _ex);
}
#else
;
#endif /* EDU_CSDMS_MODELS_CEM_INLINE_DECL */


/**
 * Method:  boccaReleaseServices[]
 */
EDU_CSDMS_MODELS_CEM_INLINE_DECL
void
edu_csdms_models_CEM_boccaReleaseServices(
  /* in */ edu_csdms_models_CEM self,
  /* in */ gov_cca_Services services,
  /* out */ sidl_BaseInterface *_ex)
#ifdef EDU_CSDMS_MODELS_CEM_INLINE_DECL
{
  (*self->d_epv->f_boccaReleaseServices)(
    self,
    services,
    _ex);
}
#else
;
#endif /* EDU_CSDMS_MODELS_CEM_INLINE_DECL */


/**
 * Method:  checkException[]
 */
EDU_CSDMS_MODELS_CEM_INLINE_DECL
void
edu_csdms_models_CEM_checkException(
  /* in */ edu_csdms_models_CEM self,
  /* in */ sidl_BaseInterface excpt,
  /* in */ const char* msg,
  /* in */ sidl_bool fatal,
  /* out */ sidl_BaseInterface *_ex)
#ifdef EDU_CSDMS_MODELS_CEM_INLINE_DECL
{
  (*self->d_epv->f_checkException)(
    self,
    excpt,
    msg,
    fatal,
    _ex);
}
#else
;
#endif /* EDU_CSDMS_MODELS_CEM_INLINE_DECL */


/**
 *  This function should never be called, but helps babel generate better code. 
 */
EDU_CSDMS_MODELS_CEM_INLINE_DECL
void
edu_csdms_models_CEM_boccaForceUsePortInclude(
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
#ifdef EDU_CSDMS_MODELS_CEM_INLINE_DECL
{
  (*self->d_epv->f_boccaForceUsePortInclude)(
    self,
    dummy0,
    dummy1,
    dummy2,
    dummy3,
    dummy4,
    dummy5,
    dummy6,
    dummy7,
    dummy8,
    dummy9,
    _ex);
}
#else
;
#endif /* EDU_CSDMS_MODELS_CEM_INLINE_DECL */


/**
 * <p>
 * Add one to the intrinsic reference count in the underlying object.
 * Object in <code>sidl</code> have an intrinsic reference count.
 * Objects continue to exist as long as the reference count is
 * positive. Clients should call this method whenever they
 * create another ongoing reference to an object or interface.
 * </p>
 * <p>
 * This does not have a return value because there is no language
 * independent type that can refer to an interface or a
 * class.
 * </p>
 */
EDU_CSDMS_MODELS_CEM_INLINE_DECL
void
edu_csdms_models_CEM_addRef(
  /* in */ edu_csdms_models_CEM self,
  /* out */ sidl_BaseInterface *_ex)
#ifdef EDU_CSDMS_MODELS_CEM_INLINE_DECL
{
  (*self->d_epv->f_addRef)(
    self,
    _ex);
}
#else
;
#endif /* EDU_CSDMS_MODELS_CEM_INLINE_DECL */


/**
 * Decrease by one the intrinsic reference count in the underlying
 * object, and delete the object if the reference is non-positive.
 * Objects in <code>sidl</code> have an intrinsic reference count.
 * Clients should call this method whenever they remove a
 * reference to an object or interface.
 */
EDU_CSDMS_MODELS_CEM_INLINE_DECL
void
edu_csdms_models_CEM_deleteRef(
  /* in */ edu_csdms_models_CEM self,
  /* out */ sidl_BaseInterface *_ex)
#ifdef EDU_CSDMS_MODELS_CEM_INLINE_DECL
{
  (*self->d_epv->f_deleteRef)(
    self,
    _ex);
}
#else
;
#endif /* EDU_CSDMS_MODELS_CEM_INLINE_DECL */


/**
 * Return true if and only if <code>obj</code> refers to the same
 * object as this object.
 */
EDU_CSDMS_MODELS_CEM_INLINE_DECL
sidl_bool
edu_csdms_models_CEM_isSame(
  /* in */ edu_csdms_models_CEM self,
  /* in */ sidl_BaseInterface iobj,
  /* out */ sidl_BaseInterface *_ex)
#ifdef EDU_CSDMS_MODELS_CEM_INLINE_DECL
{
  sidl_bool _result;
  _result = (*self->d_epv->f_isSame)(
    self,
    iobj,
    _ex);
  return _result;
}
#else
;
#endif /* EDU_CSDMS_MODELS_CEM_INLINE_DECL */


/**
 * Return whether this object is an instance of the specified type.
 * The string name must be the <code>sidl</code> type name.  This
 * routine will return <code>true</code> if and only if a cast to
 * the string type name would succeed.
 */
EDU_CSDMS_MODELS_CEM_INLINE_DECL
sidl_bool
edu_csdms_models_CEM_isType(
  /* in */ edu_csdms_models_CEM self,
  /* in */ const char* name,
  /* out */ sidl_BaseInterface *_ex)
#ifdef EDU_CSDMS_MODELS_CEM_INLINE_DECL
{
  sidl_bool _result;
  _result = (*self->d_epv->f_isType)(
    self,
    name,
    _ex);
  return _result;
}
#else
;
#endif /* EDU_CSDMS_MODELS_CEM_INLINE_DECL */


/**
 * Return the meta-data about the class implementing this interface.
 */
EDU_CSDMS_MODELS_CEM_INLINE_DECL
sidl_ClassInfo
edu_csdms_models_CEM_getClassInfo(
  /* in */ edu_csdms_models_CEM self,
  /* out */ sidl_BaseInterface *_ex)
#ifdef EDU_CSDMS_MODELS_CEM_INLINE_DECL
{
  sidl_ClassInfo _result;
  _result = (*self->d_epv->f_getClassInfo)(
    self,
    _ex);
  return _result;
}
#else
;
#endif /* EDU_CSDMS_MODELS_CEM_INLINE_DECL */


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
EDU_CSDMS_MODELS_CEM_INLINE_DECL
void
edu_csdms_models_CEM_setServices(
  /* in */ edu_csdms_models_CEM self,
  /* in */ gov_cca_Services services,
  /* out */ sidl_BaseInterface *_ex)
#ifdef EDU_CSDMS_MODELS_CEM_INLINE_DECL
{
  (*self->d_epv->f_setServices)(
    self,
    services,
    _ex);
}
#else
;
#endif /* EDU_CSDMS_MODELS_CEM_INLINE_DECL */


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
EDU_CSDMS_MODELS_CEM_INLINE_DECL
void
edu_csdms_models_CEM_releaseServices(
  /* in */ edu_csdms_models_CEM self,
  /* in */ gov_cca_Services services,
  /* out */ sidl_BaseInterface *_ex)
#ifdef EDU_CSDMS_MODELS_CEM_INLINE_DECL
{
  (*self->d_epv->f_releaseServices)(
    self,
    services,
    _ex);
}
#else
;
#endif /* EDU_CSDMS_MODELS_CEM_INLINE_DECL */


/**
 *  
 * Execute some encapsulated functionality on the component. 
 * Return 0 if ok, -1 if internal error but component may be 
 * used further, and -2 if error so severe that component cannot
 * be further used safely.
 */
EDU_CSDMS_MODELS_CEM_INLINE_DECL
int32_t
edu_csdms_models_CEM_go(
  /* in */ edu_csdms_models_CEM self,
  /* out */ sidl_BaseInterface *_ex)
#ifdef EDU_CSDMS_MODELS_CEM_INLINE_DECL
{
  int32_t _result;
  _result = (*self->d_epv->f_go)(
    self,
    _ex);
  return _result;
}
#else
;
#endif /* EDU_CSDMS_MODELS_CEM_INLINE_DECL */


/**
 * Method:  initialize[]
 */
EDU_CSDMS_MODELS_CEM_INLINE_DECL
void
edu_csdms_models_CEM_initialize(
  /* in */ edu_csdms_models_CEM self,
  /* in array<string> */ struct sidl_string__array* properties,
  /* out */ sidl_BaseInterface *_ex)
#ifdef EDU_CSDMS_MODELS_CEM_INLINE_DECL
{
  (*self->d_epv->f_initialize)(
    self,
    properties,
    _ex);
}
#else
;
#endif /* EDU_CSDMS_MODELS_CEM_INLINE_DECL */


/**
 * Method:  run[]
 */
EDU_CSDMS_MODELS_CEM_INLINE_DECL
void
edu_csdms_models_CEM_run(
  /* in */ edu_csdms_models_CEM self,
  /* in */ double time,
  /* out */ sidl_BaseInterface *_ex)
#ifdef EDU_CSDMS_MODELS_CEM_INLINE_DECL
{
  (*self->d_epv->f_run)(
    self,
    time,
    _ex);
}
#else
;
#endif /* EDU_CSDMS_MODELS_CEM_INLINE_DECL */


/**
 * Method:  finalize[]
 */
EDU_CSDMS_MODELS_CEM_INLINE_DECL
void
edu_csdms_models_CEM_finalize(
  /* in */ edu_csdms_models_CEM self,
  /* out */ sidl_BaseInterface *_ex)
#ifdef EDU_CSDMS_MODELS_CEM_INLINE_DECL
{
  (*self->d_epv->f_finalize)(
    self,
    _ex);
}
#else
;
#endif /* EDU_CSDMS_MODELS_CEM_INLINE_DECL */


/**
 * Method:  getRaster_nx[]
 */
EDU_CSDMS_MODELS_CEM_INLINE_DECL
int64_t
edu_csdms_models_CEM_getRaster_nx(
  /* in */ edu_csdms_models_CEM self,
  /* out */ sidl_BaseInterface *_ex)
#ifdef EDU_CSDMS_MODELS_CEM_INLINE_DECL
{
  int64_t _result;
  _result = (*self->d_epv->f_getRaster_nx)(
    self,
    _ex);
  return _result;
}
#else
;
#endif /* EDU_CSDMS_MODELS_CEM_INLINE_DECL */


/**
 * Method:  getRaster_ny[]
 */
EDU_CSDMS_MODELS_CEM_INLINE_DECL
int64_t
edu_csdms_models_CEM_getRaster_ny(
  /* in */ edu_csdms_models_CEM self,
  /* out */ sidl_BaseInterface *_ex)
#ifdef EDU_CSDMS_MODELS_CEM_INLINE_DECL
{
  int64_t _result;
  _result = (*self->d_epv->f_getRaster_ny)(
    self,
    _ex);
  return _result;
}
#else
;
#endif /* EDU_CSDMS_MODELS_CEM_INLINE_DECL */


/**
 * Method:  getRaster_dx[]
 */
EDU_CSDMS_MODELS_CEM_INLINE_DECL
double
edu_csdms_models_CEM_getRaster_dx(
  /* in */ edu_csdms_models_CEM self,
  /* out */ sidl_BaseInterface *_ex)
#ifdef EDU_CSDMS_MODELS_CEM_INLINE_DECL
{
  double _result;
  _result = (*self->d_epv->f_getRaster_dx)(
    self,
    _ex);
  return _result;
}
#else
;
#endif /* EDU_CSDMS_MODELS_CEM_INLINE_DECL */


/**
 * Method:  getRaster_dy[]
 */
EDU_CSDMS_MODELS_CEM_INLINE_DECL
double
edu_csdms_models_CEM_getRaster_dy(
  /* in */ edu_csdms_models_CEM self,
  /* out */ sidl_BaseInterface *_ex)
#ifdef EDU_CSDMS_MODELS_CEM_INLINE_DECL
{
  double _result;
  _result = (*self->d_epv->f_getRaster_dy)(
    self,
    _ex);
  return _result;
}
#else
;
#endif /* EDU_CSDMS_MODELS_CEM_INLINE_DECL */


/**
 * Method:  getRaster_ulx[]
 */
EDU_CSDMS_MODELS_CEM_INLINE_DECL
double
edu_csdms_models_CEM_getRaster_ulx(
  /* in */ edu_csdms_models_CEM self,
  /* out */ sidl_BaseInterface *_ex)
#ifdef EDU_CSDMS_MODELS_CEM_INLINE_DECL
{
  double _result;
  _result = (*self->d_epv->f_getRaster_ulx)(
    self,
    _ex);
  return _result;
}
#else
;
#endif /* EDU_CSDMS_MODELS_CEM_INLINE_DECL */


/**
 * Method:  getRaster_uly[]
 */
EDU_CSDMS_MODELS_CEM_INLINE_DECL
double
edu_csdms_models_CEM_getRaster_uly(
  /* in */ edu_csdms_models_CEM self,
  /* out */ sidl_BaseInterface *_ex)
#ifdef EDU_CSDMS_MODELS_CEM_INLINE_DECL
{
  double _result;
  _result = (*self->d_epv->f_getRaster_uly)(
    self,
    _ex);
  return _result;
}
#else
;
#endif /* EDU_CSDMS_MODELS_CEM_INLINE_DECL */


/**
 * Method:  getRaster_grid[]
 */
EDU_CSDMS_MODELS_CEM_INLINE_DECL
struct sidl_double__array*
edu_csdms_models_CEM_getRaster_grid(
  /* in */ edu_csdms_models_CEM self,
  /* in */ const char* val_string,
  /* out */ sidl_BaseInterface *_ex)
#ifdef EDU_CSDMS_MODELS_CEM_INLINE_DECL
{
  struct sidl_double__array* _result;
  _result = (*self->d_epv->f_getRaster_grid)(
    self,
    val_string,
    _ex);
  return _result;
}
#else
;
#endif /* EDU_CSDMS_MODELS_CEM_INLINE_DECL */


/**
 * Method:  get_raster_dimen[]
 */
EDU_CSDMS_MODELS_CEM_INLINE_DECL
struct sidl_int__array*
edu_csdms_models_CEM_get_raster_dimen(
  /* in */ edu_csdms_models_CEM self,
  /* in */ const char* val_string,
  /* out */ sidl_BaseInterface *_ex)
#ifdef EDU_CSDMS_MODELS_CEM_INLINE_DECL
{
  struct sidl_int__array* _result;
  _result = (*self->d_epv->f_get_raster_dimen)(
    self,
    val_string,
    _ex);
  return _result;
}
#else
;
#endif /* EDU_CSDMS_MODELS_CEM_INLINE_DECL */


/**
 * Method:  get_raster_res[]
 */
EDU_CSDMS_MODELS_CEM_INLINE_DECL
struct sidl_double__array*
edu_csdms_models_CEM_get_raster_res(
  /* in */ edu_csdms_models_CEM self,
  /* in */ const char* val_string,
  /* out */ sidl_BaseInterface *_ex)
#ifdef EDU_CSDMS_MODELS_CEM_INLINE_DECL
{
  struct sidl_double__array* _result;
  _result = (*self->d_epv->f_get_raster_res)(
    self,
    val_string,
    _ex);
  return _result;
}
#else
;
#endif /* EDU_CSDMS_MODELS_CEM_INLINE_DECL */


/**
 * Method:  get_raster_data[]
 */
EDU_CSDMS_MODELS_CEM_INLINE_DECL
struct sidl__array*
edu_csdms_models_CEM_get_raster_data(
  /* in */ edu_csdms_models_CEM self,
  /* in */ const char* val_string,
  /* out */ sidl_BaseInterface *_ex)
#ifdef EDU_CSDMS_MODELS_CEM_INLINE_DECL
{
  struct sidl__array* _result;
  _result = (*self->d_epv->f_get_raster_data)(
    self,
    val_string,
    _ex);
  return _result;
}
#else
;
#endif /* EDU_CSDMS_MODELS_CEM_INLINE_DECL */


/**
 * Method:  get_time_span[]
 */
EDU_CSDMS_MODELS_CEM_INLINE_DECL
struct sidl_double__array*
edu_csdms_models_CEM_get_time_span(
  /* in */ edu_csdms_models_CEM self,
  /* out */ sidl_BaseInterface *_ex)
#ifdef EDU_CSDMS_MODELS_CEM_INLINE_DECL
{
  struct sidl_double__array* _result;
  _result = (*self->d_epv->f_get_time_span)(
    self,
    _ex);
  return _result;
}
#else
;
#endif /* EDU_CSDMS_MODELS_CEM_INLINE_DECL */


/**
 * Method:  get_element_set[]
 */
EDU_CSDMS_MODELS_CEM_INLINE_DECL
edu_csdms_openmi_IElementSet
edu_csdms_models_CEM_get_element_set(
  /* in */ edu_csdms_models_CEM self,
  /* in */ const char* val_string,
  /* out */ sidl_BaseInterface *_ex)
#ifdef EDU_CSDMS_MODELS_CEM_INLINE_DECL
{
  edu_csdms_openmi_IElementSet _result;
  _result = (*self->d_epv->f_get_element_set)(
    self,
    val_string,
    _ex);
  return _result;
}
#else
;
#endif /* EDU_CSDMS_MODELS_CEM_INLINE_DECL */


/**
 * Method:  get_value_set[]
 */
EDU_CSDMS_MODELS_CEM_INLINE_DECL
edu_csdms_openmi_IValueSet
edu_csdms_models_CEM_get_value_set(
  /* in */ edu_csdms_models_CEM self,
  /* in */ const char* val_string,
  /* out */ sidl_BaseInterface *_ex)
#ifdef EDU_CSDMS_MODELS_CEM_INLINE_DECL
{
  edu_csdms_openmi_IValueSet _result;
  _result = (*self->d_epv->f_get_value_set)(
    self,
    val_string,
    _ex);
  return _result;
}
#else
;
#endif /* EDU_CSDMS_MODELS_CEM_INLINE_DECL */


/**
 * Method:  get_value_set_data[]
 */
EDU_CSDMS_MODELS_CEM_INLINE_DECL
struct sidl__array*
edu_csdms_models_CEM_get_value_set_data(
  /* in */ edu_csdms_models_CEM self,
  /* in */ const char* val_string,
  /* out */ sidl_BaseInterface *_ex)
#ifdef EDU_CSDMS_MODELS_CEM_INLINE_DECL
{
  struct sidl__array* _result;
  _result = (*self->d_epv->f_get_value_set_data)(
    self,
    val_string,
    _ex);
  return _result;
}
#else
;
#endif /* EDU_CSDMS_MODELS_CEM_INLINE_DECL */


/**
 * Method:  set_value_set[]
 */
EDU_CSDMS_MODELS_CEM_INLINE_DECL
void
edu_csdms_models_CEM_set_value_set(
  /* in */ edu_csdms_models_CEM self,
  /* in */ const char* val_string,
  /* in */ edu_csdms_openmi_IValueSet values,
  /* out */ sidl_BaseInterface *_ex)
#ifdef EDU_CSDMS_MODELS_CEM_INLINE_DECL
{
  (*self->d_epv->f_set_value_set)(
    self,
    val_string,
    values,
    _ex);
}
#else
;
#endif /* EDU_CSDMS_MODELS_CEM_INLINE_DECL */


/**
 * Cast method for interface and class type conversions.
 */
struct edu_csdms_models_CEM__object*
edu_csdms_models_CEM__cast(
  void* obj,
  sidl_BaseInterface* _ex);

/**
 * String cast method for interface and class type conversions.
 */
void*
edu_csdms_models_CEM__cast2(
  void* obj,
  const char* type,
  sidl_BaseInterface *_ex);

/**
 * Select and execute a method by name
 */
EDU_CSDMS_MODELS_CEM_INLINE_DECL
void
edu_csdms_models_CEM__exec(
  /* in */ edu_csdms_models_CEM self,
  /* in */ const char* methodName,
  /* in */ sidl_rmi_Call inArgs,
  /* in */ sidl_rmi_Return outArgs,
  /* out */ sidl_BaseInterface *_ex)
#ifdef EDU_CSDMS_MODELS_CEM_INLINE_DECL
{
  (*self->d_epv->f__exec)(
    self,
    methodName,
    inArgs,
    outArgs,
    _ex);
}
#else
;
#endif /* EDU_CSDMS_MODELS_CEM_INLINE_DECL */

/**
 * Get the URL of the Implementation of this object (for RMI)
 */
EDU_CSDMS_MODELS_CEM_INLINE_DECL
char*
edu_csdms_models_CEM__getURL(
  /* in */ edu_csdms_models_CEM self,
  /* out */ sidl_BaseInterface *_ex)
#ifdef EDU_CSDMS_MODELS_CEM_INLINE_DECL
{
  char* _result;
  _result = (*self->d_epv->f__getURL)(
    self,
    _ex);
  return _result;
}
#else
;
#endif /* EDU_CSDMS_MODELS_CEM_INLINE_DECL */

/**
 * On a remote object, addrefs the remote instance.
 */
EDU_CSDMS_MODELS_CEM_INLINE_DECL
void
edu_csdms_models_CEM__raddRef(
  /* in */ edu_csdms_models_CEM self,
  /* out */ sidl_BaseInterface *_ex)
#ifdef EDU_CSDMS_MODELS_CEM_INLINE_DECL
{
  (*self->d_epv->f__raddRef)(
    self,
    _ex);
}
#else
;
#endif /* EDU_CSDMS_MODELS_CEM_INLINE_DECL */

/**
 * TRUE if this object is remote, false if local
 */
EDU_CSDMS_MODELS_CEM_INLINE_DECL
sidl_bool
edu_csdms_models_CEM__isRemote(
  /* in */ edu_csdms_models_CEM self,
  /* out */ sidl_BaseInterface *_ex)
#ifdef EDU_CSDMS_MODELS_CEM_INLINE_DECL
{
  sidl_bool _result;
  _result = (*self->d_epv->f__isRemote)(
    self,
    _ex);
  return _result;
}
#else
;
#endif /* EDU_CSDMS_MODELS_CEM_INLINE_DECL */

/**
 * TRUE if this object is remote, false if local
 */
sidl_bool
edu_csdms_models_CEM__isLocal(
  /* in */ edu_csdms_models_CEM self,
  /* out */ sidl_BaseInterface *_ex);
/**
 * Method to enable/disable method hooks invocation.
 */
EDU_CSDMS_MODELS_CEM_INLINE_DECL
void
edu_csdms_models_CEM__set_hooks(
  /* in */ edu_csdms_models_CEM self,
  /* in */ sidl_bool enable,
  /* out */ sidl_BaseInterface *_ex)
#ifdef EDU_CSDMS_MODELS_CEM_INLINE_DECL
{
  (*self->d_epv->f__set_hooks)(
    self,
    enable,
    _ex);
}
#else
;
#endif /* EDU_CSDMS_MODELS_CEM_INLINE_DECL */

/**
 * Create a contiguous array of the given dimension with specified
 * index bounds in column-major order. This array
 * owns and manages its data.
 * This function initializes the contents of the array to
 * NULL.
 */
struct edu_csdms_models_CEM__array*
edu_csdms_models_CEM__array_createCol(
  int32_t       dimen,
  const int32_t lower[],
  const int32_t upper[]);

/**
 * Create a contiguous array of the given dimension with specified
 * index bounds in row-major order. This array
 * owns and manages its data.
 * This function initializes the contents of the array to
 * NULL.
 */
struct edu_csdms_models_CEM__array*
edu_csdms_models_CEM__array_createRow(
  int32_t       dimen,
  const int32_t lower[],
  const int32_t upper[]);

/**
 * Create a contiguous one-dimensional array with a lower index
 * of 0 and an upper index of len-1. This array
 * owns and manages its data.
 * This function initializes the contents of the array to
 * NULL.
 */
struct edu_csdms_models_CEM__array*
edu_csdms_models_CEM__array_create1d(int32_t len);

/**
 * Create a dense one-dimensional vector with a lower
 * index of 0 and an upper index of len-1. The initial data for this
 * new array is copied from data. This will increment the reference
 * count of each non-NULL object/interface reference in data.
 * 
 * This array owns and manages its data.
 */
struct edu_csdms_models_CEM__array*
edu_csdms_models_CEM__array_create1dInit(
  int32_t len, 
  edu_csdms_models_CEM* data);

/**
 * Create a contiguous two-dimensional array in column-major
 * order with a lower index of (0,0) and an upper index of
 * (m-1,n-1). This array owns and manages its data.
 * This function initializes the contents of the array to
 * NULL.
 */
struct edu_csdms_models_CEM__array*
edu_csdms_models_CEM__array_create2dCol(int32_t m, int32_t n);

/**
 * Create a contiguous two-dimensional array in row-major
 * order with a lower index of (0,0) and an upper index of
 * (m-1,n-1). This array owns and manages its data.
 * This function initializes the contents of the array to
 * NULL.
 */
struct edu_csdms_models_CEM__array*
edu_csdms_models_CEM__array_create2dRow(int32_t m, int32_t n);

/**
 * Create an array that uses data (memory) from another
 * source. The initial contents are determined by the
 * data being borrowed.
 * Any time an element in the borrowed array is replaced
 * via a set call, deleteRef will be called on the
 * value being replaced if it is not NULL.
 */
struct edu_csdms_models_CEM__array*
edu_csdms_models_CEM__array_borrow(
  edu_csdms_models_CEM* firstElement,
  int32_t       dimen,
  const int32_t lower[],
  const int32_t upper[],
  const int32_t stride[]);

/**
 * If array is borrowed, allocate a new self-sufficient
 * array and copy the borrowed array into the new array;
 * otherwise, increment the reference count and return
 * the array passed in. Use this whenever you want to
 * make a copy of a method argument because arrays
 * passed into methods aren't guaranteed to exist after
 * the method call.
 */
struct edu_csdms_models_CEM__array*
edu_csdms_models_CEM__array_smartCopy(
  struct edu_csdms_models_CEM__array *array);

/**
 * Increment the array's internal reference count by one.
 */
void
edu_csdms_models_CEM__array_addRef(
  struct edu_csdms_models_CEM__array* array);

/**
 * Decrement the array's internal reference count by one.
 * If the reference count goes to zero, destroy the array.
 * If the array isn't borrowed, this releases all the
 * object references held by the array.
 */
void
edu_csdms_models_CEM__array_deleteRef(
  struct edu_csdms_models_CEM__array* array);

/**
 * Retrieve element i1 of a(n) 1-dimensional array.
 */
edu_csdms_models_CEM
edu_csdms_models_CEM__array_get1(
  const struct edu_csdms_models_CEM__array* array,
  const int32_t i1);

/**
 * Retrieve element (i1,i2) of a(n) 2-dimensional array.
 */
edu_csdms_models_CEM
edu_csdms_models_CEM__array_get2(
  const struct edu_csdms_models_CEM__array* array,
  const int32_t i1,
  const int32_t i2);

/**
 * Retrieve element (i1,i2,i3) of a(n) 3-dimensional array.
 */
edu_csdms_models_CEM
edu_csdms_models_CEM__array_get3(
  const struct edu_csdms_models_CEM__array* array,
  const int32_t i1,
  const int32_t i2,
  const int32_t i3);

/**
 * Retrieve element (i1,i2,i3,i4) of a(n) 4-dimensional array.
 */
edu_csdms_models_CEM
edu_csdms_models_CEM__array_get4(
  const struct edu_csdms_models_CEM__array* array,
  const int32_t i1,
  const int32_t i2,
  const int32_t i3,
  const int32_t i4);

/**
 * Retrieve element (i1,i2,i3,i4,i5) of a(n) 5-dimensional array.
 */
edu_csdms_models_CEM
edu_csdms_models_CEM__array_get5(
  const struct edu_csdms_models_CEM__array* array,
  const int32_t i1,
  const int32_t i2,
  const int32_t i3,
  const int32_t i4,
  const int32_t i5);

/**
 * Retrieve element (i1,i2,i3,i4,i5,i6) of a(n) 6-dimensional array.
 */
edu_csdms_models_CEM
edu_csdms_models_CEM__array_get6(
  const struct edu_csdms_models_CEM__array* array,
  const int32_t i1,
  const int32_t i2,
  const int32_t i3,
  const int32_t i4,
  const int32_t i5,
  const int32_t i6);

/**
 * Retrieve element (i1,i2,i3,i4,i5,i6,i7) of a(n) 7-dimensional array.
 */
edu_csdms_models_CEM
edu_csdms_models_CEM__array_get7(
  const struct edu_csdms_models_CEM__array* array,
  const int32_t i1,
  const int32_t i2,
  const int32_t i3,
  const int32_t i4,
  const int32_t i5,
  const int32_t i6,
  const int32_t i7);

/**
 * Retrieve element indices of an n-dimensional array.
 * indices is assumed to have the right number of elements
 * for the dimension of array.
 */
edu_csdms_models_CEM
edu_csdms_models_CEM__array_get(
  const struct edu_csdms_models_CEM__array* array,
  const int32_t indices[]);

/**
 * Set element i1 of a(n) 1-dimensional array to value.
 */
void
edu_csdms_models_CEM__array_set1(
  struct edu_csdms_models_CEM__array* array,
  const int32_t i1,
  edu_csdms_models_CEM const value);

/**
 * Set element (i1,i2) of a(n) 2-dimensional array to value.
 */
void
edu_csdms_models_CEM__array_set2(
  struct edu_csdms_models_CEM__array* array,
  const int32_t i1,
  const int32_t i2,
  edu_csdms_models_CEM const value);

/**
 * Set element (i1,i2,i3) of a(n) 3-dimensional array to value.
 */
void
edu_csdms_models_CEM__array_set3(
  struct edu_csdms_models_CEM__array* array,
  const int32_t i1,
  const int32_t i2,
  const int32_t i3,
  edu_csdms_models_CEM const value);

/**
 * Set element (i1,i2,i3,i4) of a(n) 4-dimensional array to value.
 */
void
edu_csdms_models_CEM__array_set4(
  struct edu_csdms_models_CEM__array* array,
  const int32_t i1,
  const int32_t i2,
  const int32_t i3,
  const int32_t i4,
  edu_csdms_models_CEM const value);

/**
 * Set element (i1,i2,i3,i4,i5) of a(n) 5-dimensional array to value.
 */
void
edu_csdms_models_CEM__array_set5(
  struct edu_csdms_models_CEM__array* array,
  const int32_t i1,
  const int32_t i2,
  const int32_t i3,
  const int32_t i4,
  const int32_t i5,
  edu_csdms_models_CEM const value);

/**
 * Set element (i1,i2,i3,i4,i5,i6) of a(n) 6-dimensional array to value.
 */
void
edu_csdms_models_CEM__array_set6(
  struct edu_csdms_models_CEM__array* array,
  const int32_t i1,
  const int32_t i2,
  const int32_t i3,
  const int32_t i4,
  const int32_t i5,
  const int32_t i6,
  edu_csdms_models_CEM const value);

/**
 * Set element (i1,i2,i3,i4,i5,i6,i7) of a(n) 7-dimensional array to value.
 */
void
edu_csdms_models_CEM__array_set7(
  struct edu_csdms_models_CEM__array* array,
  const int32_t i1,
  const int32_t i2,
  const int32_t i3,
  const int32_t i4,
  const int32_t i5,
  const int32_t i6,
  const int32_t i7,
  edu_csdms_models_CEM const value);

/**
 * Set element indices of an n-dimensional array to value.indices is assumed to have the right number of elements
 * for the dimension of array.
 */
void
edu_csdms_models_CEM__array_set(
  struct edu_csdms_models_CEM__array* array,
  const int32_t indices[],
  edu_csdms_models_CEM const value);

/**
 * Return the dimension of array. If the array pointer is
 * NULL, zero is returned.
 */
int32_t
edu_csdms_models_CEM__array_dimen(
  const struct edu_csdms_models_CEM__array* array);

/**
 * Return the lower bound of dimension ind.
 * If ind is not a valid dimension, 0 is returned.
 * The valid range for ind is from 0 to dimen-1.
 */
int32_t
edu_csdms_models_CEM__array_lower(
  const struct edu_csdms_models_CEM__array* array,
  const int32_t ind);

/**
 * Return the upper bound of dimension ind.
 * If ind is not a valid dimension, -1 is returned.
 * The valid range for ind is from 0 to dimen-1.
 */
int32_t
edu_csdms_models_CEM__array_upper(
  const struct edu_csdms_models_CEM__array* array,
  const int32_t ind);

/**
 * Return the length of dimension ind.
 * If ind is not a valid dimension, -1 is returned.
 * The valid range for ind is from 0 to dimen-1.
 */
int32_t
edu_csdms_models_CEM__array_length(
  const struct edu_csdms_models_CEM__array* array,
  const int32_t ind);

/**
 * Return the stride of dimension ind.
 * If ind is not a valid dimension, 0 is returned.
 * The valid range for ind is from 0 to dimen-1.
 */
int32_t
edu_csdms_models_CEM__array_stride(
  const struct edu_csdms_models_CEM__array* array,
  const int32_t ind);

/**
 * Return a true value iff the array is a contiguous
 * column-major ordered array. A NULL array argument
 * causes 0 to be returned.
 */
int
edu_csdms_models_CEM__array_isColumnOrder(
  const struct edu_csdms_models_CEM__array* array);

/**
 * Return a true value iff the array is a contiguous
 * row-major ordered array. A NULL array argument
 * causes 0 to be returned.
 */
int
edu_csdms_models_CEM__array_isRowOrder(
  const struct edu_csdms_models_CEM__array* array);

/**
 * Create a sub-array of another array. This resulting
 * array shares data with the original array. The new
 * array can be of the same dimension or potentially
 * less assuming the original array has dimension
 * greater than 1.  If you are removing dimension,
 * indicate the dimensions to remove by setting
 * numElem[i] to zero for any dimension i wthat should
 * go away in the new array.  The meaning of each
 * argument is covered below.
 * 
 * src       the array to be created will be a subset
 *           of this array. If this argument is NULL,
 *           NULL will be returned. The array returned
 *           borrows data from src, so modifying src or
 *           the returned array will modify both
 *           arrays.
 * 
 * dimen     this argument must be greater than zero
 *           and less than or equal to the dimension of
 *           src. An illegal value will cause a NULL
 *           return value.
 * 
 * numElem   this specifies how many elements from src
 *           should be taken in each dimension. A zero
 *           entry indicates that the dimension should
 *           not appear in the new array.  This
 *           argument should be an array with an entry
 *           for each dimension of src.  Passing NULL
 *           here will cause NULL to be returned.  If
 *           srcStart[i] + numElem[i]*srcStride[i] is
 *           greater than upper[i] for src or if
 *           srcStart[i] + numElem[i]*srcStride[i] is
 *           less than lower[i] for src, NULL will be
 *           returned.
 * 
 * srcStart  this array holds the coordinates of the
 *           first element of the new array. If this
 *           argument is NULL, the first element of src
 *           will be the first element of the new
 *           array. If non-NULL, this argument should
 *           be an array with an entry for each
 *           dimension of src.  If srcStart[i] is less
 *           than lower[i] for the array src, NULL will
 *           be returned.
 * 
 * srcStride this array lets you specify the stride
 *           between elements in each dimension of
 *           src. This stride is relative to the
 *           coordinate system of the src array. If
 *           this argument is NULL, the stride is taken
 *           to be one in each dimension.  If non-NULL,
 *           this argument should be an array with an
 *           entry for each dimension of src.
 * 
 * newLower  this argument is like lower in a create
 *           method. It sets the coordinates for the
 *           first element in the new array.  If this
 *           argument is NULL, the values indicated by
 *           srcStart will be used. If non-NULL, this
 *           should be an array with dimen elements.
 */
struct edu_csdms_models_CEM__array*
edu_csdms_models_CEM__array_slice(
  struct edu_csdms_models_CEM__array* src,
  int32_t        dimen,
  const int32_t  numElem[],
  const int32_t  *srcStart,
  const int32_t  *srcStride,
  const int32_t  *newStart);

/**
 * Copy the contents of one array (src) to a second array
 * (dest). For the copy to take place, both arrays must
 * exist and be of the same dimension. This method will
 * not modify dest's size, index bounds, or stride; only
 * the array element values of dest may be changed by
 * this function. No part of src is ever changed by copy.
 * 
 * On exit, dest[i][j][k]... = src[i][j][k]... for all
 * indices i,j,k...  that are in both arrays. If dest and
 * src have no indices in common, nothing is copied. For
 * example, if src is a 1-d array with elements 0-5 and
 * dest is a 1-d array with elements 2-3, this function
 * will make the following assignments:
 *   dest[2] = src[2],
 *   dest[3] = src[3].
 * The function copied the elements that both arrays have
 * in common.  If dest had elements 4-10, this function
 * will make the following assignments:
 *   dest[4] = src[4],
 *   dest[5] = src[5].
 */
void
edu_csdms_models_CEM__array_copy(
  const struct edu_csdms_models_CEM__array* src,
  struct edu_csdms_models_CEM__array* dest);

/**
 * If necessary, convert a general matrix into a matrix
 * with the required properties. This checks the
 * dimension and ordering of the matrix.  If both these
 * match, it simply returns a new reference to the
 * existing matrix. If the dimension of the incoming
 * array doesn't match, it returns NULL. If the ordering
 * of the incoming array doesn't match the specification,
 * a new array is created with the desired ordering and
 * the content of the incoming array is copied to the new
 * array.
 * 
 * The ordering parameter should be one of the constants
 * defined in enum sidl_array_ordering
 * (e.g. sidl_general_order, sidl_column_major_order, or
 * sidl_row_major_order). If you specify
 * sidl_general_order, this routine will only check the
 * dimension because any matrix is sidl_general_order.
 * 
 * The caller assumes ownership of the returned reference
 * unless it's NULL.
 */
struct edu_csdms_models_CEM__array*
edu_csdms_models_CEM__array_ensure(
  struct edu_csdms_models_CEM__array* src,
  int32_t dimen,
  int     ordering);


#pragma weak edu_csdms_models_CEM__connectI

/**
 * RMI connector function for the class. (no addref)
 */
struct edu_csdms_models_CEM__object*
edu_csdms_models_CEM__connectI(const char * url, sidl_bool ar, struct 
  sidl_BaseInterface__object **_ex);

#ifdef __cplusplus
}
#endif
#endif
