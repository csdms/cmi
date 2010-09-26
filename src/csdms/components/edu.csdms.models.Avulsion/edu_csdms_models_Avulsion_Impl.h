/*
 * File:          edu_csdms_models_Avulsion_Impl.h
 * Symbol:        edu.csdms.models.Avulsion-v0.0
 * Symbol Type:   class
 * Babel Version: 1.4.0 (Revision: 6607 release-1-4-0-branch)
 * Description:   Server-side implementation for edu.csdms.models.Avulsion
 * 
 * WARNING: Automatically generated; only changes within splicers preserved
 * 
 */

#ifndef included_edu_csdms_models_Avulsion_Impl_h
#define included_edu_csdms_models_Avulsion_Impl_h

#ifndef included_sidl_header_h
#include "sidl_header.h"
#endif
#ifndef included_edu_csdms_models_Avulsion_h
#include "edu_csdms_models_Avulsion.h"
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
#ifndef included_gov_cca_Component_h
#include "gov_cca_Component.h"
#endif
#ifndef included_gov_cca_ComponentRelease_h
#include "gov_cca_ComponentRelease.h"
#endif
#ifndef included_gov_cca_Port_h
#include "gov_cca_Port.h"
#endif
#ifndef included_gov_cca_Services_h
#include "gov_cca_Services.h"
#endif
#ifndef included_gov_cca_ports_GoPort_h
#include "gov_cca_ports_GoPort.h"
#endif
#ifndef included_gov_cca_ports_ParameterPortFactory_h
#include "gov_cca_ports_ParameterPortFactory.h"
#endif
#ifndef included_sidl_BaseClass_h
#include "sidl_BaseClass.h"
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
/* DO-NOT-DELETE splicer.begin(edu.csdms.models.Avulsion._hincludes) */
/* Insert-Code-Here {edu.csdms.models.Avulsion._hincludes} (include files) */
#include <eh_utils.h>
#include <avulsion_api.h>

#if !defined (PRINT)
# define PRINT(l, m) { \
    struct edu_csdms_models_Avulsion__data *pd = \
             edu_csdms_models_Avulsion__get_data (self); \
    edu_csdms_tools_Verbose_log (pd->log, (l), "Avulsion: " m, _ex); }
#endif
/* DO-NOT-DELETE splicer.end(edu.csdms.models.Avulsion._hincludes) */

/*
 * Private data for class edu.csdms.models.Avulsion
 */

struct edu_csdms_models_Avulsion__data {
  /* DO-NOT-DELETE splicer.begin(edu.csdms.models.Avulsion._data) */

  /* Bocca generated code. bocca.protected.begin(edu.csdms.models.Avulsion._data) */
  /* Handle to framework services object */
  gov_cca_Services d_services;
  /* Bocca generated code. bocca.protected.end(edu.csdms.models.Avulsion._data) */

  /* Put other private data members here... */
  gov_cca_TypeMap userinput;
  Avulsion_state* state;

  edu_csdms_tools_IRFPortQueue irf_ports;
  edu_csdms_tools_PrintQueue print_queue;
  edu_csdms_tools_Verbose log;

  int discharge_port_is_on;
  int elevation_port_is_on;

  /* DO-NOT-DELETE splicer.end(edu.csdms.models.Avulsion._data) */
};

#ifdef __cplusplus
extern "C" {
#endif

/*
 * Access functions for class private data and built-in methods
 */

extern struct edu_csdms_models_Avulsion__data*
edu_csdms_models_Avulsion__get_data(
  edu_csdms_models_Avulsion);

extern void
edu_csdms_models_Avulsion__set_data(
  edu_csdms_models_Avulsion,
  struct edu_csdms_models_Avulsion__data*);

extern
void
impl_edu_csdms_models_Avulsion__load(
  /* out */ sidl_BaseInterface *_ex);

extern
void
impl_edu_csdms_models_Avulsion__ctor(
  /* in */ edu_csdms_models_Avulsion self,
  /* out */ sidl_BaseInterface *_ex);

extern
void
impl_edu_csdms_models_Avulsion__ctor2(
  /* in */ edu_csdms_models_Avulsion self,
  /* in */ void* private_data,
  /* out */ sidl_BaseInterface *_ex);

extern
void
impl_edu_csdms_models_Avulsion__dtor(
  /* in */ edu_csdms_models_Avulsion self,
  /* out */ sidl_BaseInterface *_ex);

/*
 * User-defined object methods
 */

#ifdef WITH_RMI
extern struct edu_csdms_tools_ConfigDialog__object* 
  impl_edu_csdms_models_Avulsion_fconnect_edu_csdms_tools_ConfigDialog(const 
  char* url, sidl_bool ar, sidl_BaseInterface *_ex);
extern struct gov_cca_Services__object* 
  impl_edu_csdms_models_Avulsion_fconnect_gov_cca_Services(const char* url, 
  sidl_bool ar, sidl_BaseInterface *_ex);
extern struct edu_csdms_tools_PrintQueue__object* 
  impl_edu_csdms_models_Avulsion_fconnect_edu_csdms_tools_PrintQueue(const 
  char* url, sidl_bool ar, sidl_BaseInterface *_ex);
extern struct edu_csdms_openmi_IScalarSet__object* 
  impl_edu_csdms_models_Avulsion_fconnect_edu_csdms_openmi_IScalarSet(const 
  char* url, sidl_bool ar, sidl_BaseInterface *_ex);
extern struct edu_csdms_tools_Verbose__object* 
  impl_edu_csdms_models_Avulsion_fconnect_edu_csdms_tools_Verbose(const char* 
  url, sidl_bool ar, sidl_BaseInterface *_ex);
extern struct edu_csdms_ports_IRFPort__object* 
  impl_edu_csdms_models_Avulsion_fconnect_edu_csdms_ports_IRFPort(const char* 
  url, sidl_bool ar, sidl_BaseInterface *_ex);
extern struct edu_csdms_openmi_ScalarSet__object* 
  impl_edu_csdms_models_Avulsion_fconnect_edu_csdms_openmi_ScalarSet(const 
  char* url, sidl_bool ar, sidl_BaseInterface *_ex);
extern struct edu_csdms_openmi_ValueSet__object* 
  impl_edu_csdms_models_Avulsion_fconnect_edu_csdms_openmi_ValueSet(const char* 
  url, sidl_bool ar, sidl_BaseInterface *_ex);
extern struct sidl_BaseInterface__object* 
  impl_edu_csdms_models_Avulsion_fconnect_sidl_BaseInterface(const char* url, 
  sidl_bool ar, sidl_BaseInterface *_ex);
extern struct edu_csdms_tools_IRFPortQueue__object* 
  impl_edu_csdms_models_Avulsion_fconnect_edu_csdms_tools_IRFPortQueue(const 
  char* url, sidl_bool ar, sidl_BaseInterface *_ex);
extern struct gov_cca_ports_ParameterPortFactory__object* 
  impl_edu_csdms_models_Avulsion_fconnect_gov_cca_ports_ParameterPortFactory(
  const char* url, sidl_bool ar, sidl_BaseInterface *_ex);
extern struct edu_csdms_openmi_IValueSet__object* 
  impl_edu_csdms_models_Avulsion_fconnect_edu_csdms_openmi_IValueSet(const 
  char* url, sidl_bool ar, sidl_BaseInterface *_ex);
#endif /*WITH_RMI*/
extern
void
impl_edu_csdms_models_Avulsion_boccaSetServices(
  /* in */ edu_csdms_models_Avulsion self,
  /* in */ gov_cca_Services services,
  /* out */ sidl_BaseInterface *_ex);

extern
void
impl_edu_csdms_models_Avulsion_boccaReleaseServices(
  /* in */ edu_csdms_models_Avulsion self,
  /* in */ gov_cca_Services services,
  /* out */ sidl_BaseInterface *_ex);

extern
void
impl_edu_csdms_models_Avulsion_checkException(
  /* in */ edu_csdms_models_Avulsion self,
  /* in */ sidl_BaseInterface excpt,
  /* in */ const char* msg,
  /* in */ sidl_bool fatal,
  /* out */ sidl_BaseInterface *_ex);

extern
void
impl_edu_csdms_models_Avulsion_boccaForceUsePortInclude(
  /* in */ edu_csdms_models_Avulsion self,
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
  /* out */ sidl_BaseInterface *_ex);

extern
void
impl_edu_csdms_models_Avulsion_setServices(
  /* in */ edu_csdms_models_Avulsion self,
  /* in */ gov_cca_Services services,
  /* out */ sidl_BaseInterface *_ex);

extern
void
impl_edu_csdms_models_Avulsion_releaseServices(
  /* in */ edu_csdms_models_Avulsion self,
  /* in */ gov_cca_Services services,
  /* out */ sidl_BaseInterface *_ex);

extern
int32_t
impl_edu_csdms_models_Avulsion_go(
  /* in */ edu_csdms_models_Avulsion self,
  /* out */ sidl_BaseInterface *_ex);

extern
void
impl_edu_csdms_models_Avulsion_initialize(
  /* in */ edu_csdms_models_Avulsion self,
  /* in array<string> */ struct sidl_string__array* properties,
  /* out */ sidl_BaseInterface *_ex);

extern
void
impl_edu_csdms_models_Avulsion_run(
  /* in */ edu_csdms_models_Avulsion self,
  /* in */ double time,
  /* out */ sidl_BaseInterface *_ex);

extern
void
impl_edu_csdms_models_Avulsion_finalize(
  /* in */ edu_csdms_models_Avulsion self,
  /* out */ sidl_BaseInterface *_ex);

extern
int64_t
impl_edu_csdms_models_Avulsion_getRaster_nx(
  /* in */ edu_csdms_models_Avulsion self,
  /* out */ sidl_BaseInterface *_ex);

extern
int64_t
impl_edu_csdms_models_Avulsion_getRaster_ny(
  /* in */ edu_csdms_models_Avulsion self,
  /* out */ sidl_BaseInterface *_ex);

extern
double
impl_edu_csdms_models_Avulsion_getRaster_dx(
  /* in */ edu_csdms_models_Avulsion self,
  /* out */ sidl_BaseInterface *_ex);

extern
double
impl_edu_csdms_models_Avulsion_getRaster_dy(
  /* in */ edu_csdms_models_Avulsion self,
  /* out */ sidl_BaseInterface *_ex);

extern
double
impl_edu_csdms_models_Avulsion_getRaster_ulx(
  /* in */ edu_csdms_models_Avulsion self,
  /* out */ sidl_BaseInterface *_ex);

extern
double
impl_edu_csdms_models_Avulsion_getRaster_uly(
  /* in */ edu_csdms_models_Avulsion self,
  /* out */ sidl_BaseInterface *_ex);

extern
struct sidl_double__array*
impl_edu_csdms_models_Avulsion_getRaster_grid(
  /* in */ edu_csdms_models_Avulsion self,
  /* in */ const char* val_string,
  /* out */ sidl_BaseInterface *_ex);

extern
struct sidl_int__array*
impl_edu_csdms_models_Avulsion_get_raster_dimen(
  /* in */ edu_csdms_models_Avulsion self,
  /* in */ const char* val_string,
  /* out */ sidl_BaseInterface *_ex);

extern
struct sidl_double__array*
impl_edu_csdms_models_Avulsion_get_raster_res(
  /* in */ edu_csdms_models_Avulsion self,
  /* in */ const char* val_string,
  /* out */ sidl_BaseInterface *_ex);

extern
struct sidl__array*
impl_edu_csdms_models_Avulsion_get_raster_data(
  /* in */ edu_csdms_models_Avulsion self,
  /* in */ const char* val_string,
  /* out */ sidl_BaseInterface *_ex);

extern
struct sidl_double__array*
impl_edu_csdms_models_Avulsion_get_time_span(
  /* in */ edu_csdms_models_Avulsion self,
  /* out */ sidl_BaseInterface *_ex);

extern
edu_csdms_openmi_IElementSet
impl_edu_csdms_models_Avulsion_get_element_set(
  /* in */ edu_csdms_models_Avulsion self,
  /* in */ const char* val_string,
  /* out */ sidl_BaseInterface *_ex);

extern
edu_csdms_openmi_IValueSet
impl_edu_csdms_models_Avulsion_get_value_set(
  /* in */ edu_csdms_models_Avulsion self,
  /* in */ const char* val_string,
  /* out */ sidl_BaseInterface *_ex);

extern
struct sidl__array*
impl_edu_csdms_models_Avulsion_get_value_set_data(
  /* in */ edu_csdms_models_Avulsion self,
  /* in */ const char* val_string,
  /* out */ sidl_BaseInterface *_ex);

extern
void
impl_edu_csdms_models_Avulsion_set_value_set(
  /* in */ edu_csdms_models_Avulsion self,
  /* in */ const char* val_string,
  /* in */ edu_csdms_openmi_IValueSet values,
  /* out */ sidl_BaseInterface *_ex);

#ifdef WITH_RMI
extern struct edu_csdms_tools_ConfigDialog__object* 
  impl_edu_csdms_models_Avulsion_fconnect_edu_csdms_tools_ConfigDialog(const 
  char* url, sidl_bool ar, sidl_BaseInterface *_ex);
extern struct gov_cca_Services__object* 
  impl_edu_csdms_models_Avulsion_fconnect_gov_cca_Services(const char* url, 
  sidl_bool ar, sidl_BaseInterface *_ex);
extern struct edu_csdms_tools_PrintQueue__object* 
  impl_edu_csdms_models_Avulsion_fconnect_edu_csdms_tools_PrintQueue(const 
  char* url, sidl_bool ar, sidl_BaseInterface *_ex);
extern struct edu_csdms_openmi_IScalarSet__object* 
  impl_edu_csdms_models_Avulsion_fconnect_edu_csdms_openmi_IScalarSet(const 
  char* url, sidl_bool ar, sidl_BaseInterface *_ex);
extern struct edu_csdms_tools_Verbose__object* 
  impl_edu_csdms_models_Avulsion_fconnect_edu_csdms_tools_Verbose(const char* 
  url, sidl_bool ar, sidl_BaseInterface *_ex);
extern struct edu_csdms_ports_IRFPort__object* 
  impl_edu_csdms_models_Avulsion_fconnect_edu_csdms_ports_IRFPort(const char* 
  url, sidl_bool ar, sidl_BaseInterface *_ex);
extern struct edu_csdms_openmi_ScalarSet__object* 
  impl_edu_csdms_models_Avulsion_fconnect_edu_csdms_openmi_ScalarSet(const 
  char* url, sidl_bool ar, sidl_BaseInterface *_ex);
extern struct edu_csdms_openmi_ValueSet__object* 
  impl_edu_csdms_models_Avulsion_fconnect_edu_csdms_openmi_ValueSet(const char* 
  url, sidl_bool ar, sidl_BaseInterface *_ex);
extern struct sidl_BaseInterface__object* 
  impl_edu_csdms_models_Avulsion_fconnect_sidl_BaseInterface(const char* url, 
  sidl_bool ar, sidl_BaseInterface *_ex);
extern struct edu_csdms_tools_IRFPortQueue__object* 
  impl_edu_csdms_models_Avulsion_fconnect_edu_csdms_tools_IRFPortQueue(const 
  char* url, sidl_bool ar, sidl_BaseInterface *_ex);
extern struct gov_cca_ports_ParameterPortFactory__object* 
  impl_edu_csdms_models_Avulsion_fconnect_gov_cca_ports_ParameterPortFactory(
  const char* url, sidl_bool ar, sidl_BaseInterface *_ex);
extern struct edu_csdms_openmi_IValueSet__object* 
  impl_edu_csdms_models_Avulsion_fconnect_edu_csdms_openmi_IValueSet(const 
  char* url, sidl_bool ar, sidl_BaseInterface *_ex);
#endif /*WITH_RMI*/

/* DO-NOT-DELETE splicer.begin(_hmisc) */
/* Insert-Code-Here {_hmisc} (miscellaneous things) */
/* DO-NOT-DELETE splicer.end(_hmisc) */

#ifdef __cplusplus
}
#endif
#endif
