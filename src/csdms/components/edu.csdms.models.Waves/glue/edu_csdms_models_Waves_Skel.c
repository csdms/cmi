/*
 * File:          edu_csdms_models_Waves_Skel.c
 * Symbol:        edu.csdms.models.Waves-v0.0
 * Symbol Type:   class
 * Babel Version: 1.4.0 (Revision: 6607 release-1-4-0-branch)
 * Description:   Server-side glue code for edu.csdms.models.Waves
 * 
 * WARNING: Automatically generated; changes will be lost
 * 
 */

#include "edu_csdms_models_Waves_IOR.h"
#include "edu_csdms_models_Waves.h"
#include <stddef.h>

#ifdef WITH_RMI
#ifndef included_edu_csdms_tools_ConfigDialog_h
#include "edu_csdms_tools_ConfigDialog.h"
#endif
#ifndef included_gov_cca_Services_h
#include "gov_cca_Services.h"
#endif
#ifndef included_edu_csdms_tools_PrintQueue_h
#include "edu_csdms_tools_PrintQueue.h"
#endif
#ifndef included_edu_csdms_tools_Verbose_h
#include "edu_csdms_tools_Verbose.h"
#endif
#ifndef included_edu_csdms_openmi_ScalarSet_h
#include "edu_csdms_openmi_ScalarSet.h"
#endif
#ifndef included_sidl_BaseInterface_h
#include "sidl_BaseInterface.h"
#endif
#ifndef included_gov_cca_ports_ParameterPortFactory_h
#include "gov_cca_ports_ParameterPortFactory.h"
#endif
#ifndef included_edu_csdms_openmi_IValueSet_h
#include "edu_csdms_openmi_IValueSet.h"
#endif
#endif /* WITH_RMI */
extern
void
impl_edu_csdms_models_Waves__load(
  /* out */ sidl_BaseInterface *_ex);

extern
void
impl_edu_csdms_models_Waves__ctor(
  /* in */ edu_csdms_models_Waves self,
  /* out */ sidl_BaseInterface *_ex);

extern
void
impl_edu_csdms_models_Waves__ctor2(
  /* in */ edu_csdms_models_Waves self,
  /* in */ void* private_data,
  /* out */ sidl_BaseInterface *_ex);

extern
void
impl_edu_csdms_models_Waves__dtor(
  /* in */ edu_csdms_models_Waves self,
  /* out */ sidl_BaseInterface *_ex);

#ifdef WITH_RMI
extern struct edu_csdms_tools_ConfigDialog__object* 
  impl_edu_csdms_models_Waves_fconnect_edu_csdms_tools_ConfigDialog(const char* 
  url, sidl_bool ar, sidl_BaseInterface *_ex);
extern struct gov_cca_Services__object* 
  impl_edu_csdms_models_Waves_fconnect_gov_cca_Services(const char* url, 
  sidl_bool ar, sidl_BaseInterface *_ex);
extern struct edu_csdms_tools_PrintQueue__object* 
  impl_edu_csdms_models_Waves_fconnect_edu_csdms_tools_PrintQueue(const char* 
  url, sidl_bool ar, sidl_BaseInterface *_ex);
extern struct edu_csdms_tools_Verbose__object* 
  impl_edu_csdms_models_Waves_fconnect_edu_csdms_tools_Verbose(const char* url, 
  sidl_bool ar, sidl_BaseInterface *_ex);
extern struct edu_csdms_openmi_ScalarSet__object* 
  impl_edu_csdms_models_Waves_fconnect_edu_csdms_openmi_ScalarSet(const char* 
  url, sidl_bool ar, sidl_BaseInterface *_ex);
extern struct sidl_BaseInterface__object* 
  impl_edu_csdms_models_Waves_fconnect_sidl_BaseInterface(const char* url, 
  sidl_bool ar, sidl_BaseInterface *_ex);
extern struct gov_cca_ports_ParameterPortFactory__object* 
  impl_edu_csdms_models_Waves_fconnect_gov_cca_ports_ParameterPortFactory(const 
  char* url, sidl_bool ar, sidl_BaseInterface *_ex);
extern struct edu_csdms_openmi_IValueSet__object* 
  impl_edu_csdms_models_Waves_fconnect_edu_csdms_openmi_IValueSet(const char* 
  url, sidl_bool ar, sidl_BaseInterface *_ex);
#endif /*WITH_RMI*/
extern
void
impl_edu_csdms_models_Waves_boccaSetServices(
  /* in */ edu_csdms_models_Waves self,
  /* in */ gov_cca_Services services,
  /* out */ sidl_BaseInterface *_ex);

extern
void
impl_edu_csdms_models_Waves_boccaReleaseServices(
  /* in */ edu_csdms_models_Waves self,
  /* in */ gov_cca_Services services,
  /* out */ sidl_BaseInterface *_ex);

extern
void
impl_edu_csdms_models_Waves_checkException(
  /* in */ edu_csdms_models_Waves self,
  /* in */ sidl_BaseInterface excpt,
  /* in */ const char* msg,
  /* in */ sidl_bool fatal,
  /* out */ sidl_BaseInterface *_ex);

extern
void
impl_edu_csdms_models_Waves_boccaForceUsePortInclude(
  /* in */ edu_csdms_models_Waves self,
  /* in */ gov_cca_ports_ParameterPortFactory dummy0,
  /* in */ edu_csdms_tools_Verbose dummy1,
  /* in */ edu_csdms_openmi_ScalarSet dummy2,
  /* in */ edu_csdms_tools_ConfigDialog dummy3,
  /* in */ edu_csdms_tools_PrintQueue dummy4,
  /* out */ sidl_BaseInterface *_ex);

extern
void
impl_edu_csdms_models_Waves_setServices(
  /* in */ edu_csdms_models_Waves self,
  /* in */ gov_cca_Services services,
  /* out */ sidl_BaseInterface *_ex);

extern
void
impl_edu_csdms_models_Waves_releaseServices(
  /* in */ edu_csdms_models_Waves self,
  /* in */ gov_cca_Services services,
  /* out */ sidl_BaseInterface *_ex);

extern
int32_t
impl_edu_csdms_models_Waves_go(
  /* in */ edu_csdms_models_Waves self,
  /* out */ sidl_BaseInterface *_ex);

extern
void
impl_edu_csdms_models_Waves_initialize(
  /* in */ edu_csdms_models_Waves self,
  /* in array<string> */ struct sidl_string__array* properties,
  /* out */ sidl_BaseInterface *_ex);

extern
void
impl_edu_csdms_models_Waves_run(
  /* in */ edu_csdms_models_Waves self,
  /* in */ double time,
  /* out */ sidl_BaseInterface *_ex);

extern
void
impl_edu_csdms_models_Waves_finalize(
  /* in */ edu_csdms_models_Waves self,
  /* out */ sidl_BaseInterface *_ex);

extern
int64_t
impl_edu_csdms_models_Waves_getRaster_nx(
  /* in */ edu_csdms_models_Waves self,
  /* out */ sidl_BaseInterface *_ex);

extern
int64_t
impl_edu_csdms_models_Waves_getRaster_ny(
  /* in */ edu_csdms_models_Waves self,
  /* out */ sidl_BaseInterface *_ex);

extern
double
impl_edu_csdms_models_Waves_getRaster_dx(
  /* in */ edu_csdms_models_Waves self,
  /* out */ sidl_BaseInterface *_ex);

extern
double
impl_edu_csdms_models_Waves_getRaster_dy(
  /* in */ edu_csdms_models_Waves self,
  /* out */ sidl_BaseInterface *_ex);

extern
double
impl_edu_csdms_models_Waves_getRaster_ulx(
  /* in */ edu_csdms_models_Waves self,
  /* out */ sidl_BaseInterface *_ex);

extern
double
impl_edu_csdms_models_Waves_getRaster_uly(
  /* in */ edu_csdms_models_Waves self,
  /* out */ sidl_BaseInterface *_ex);

extern
struct sidl_double__array*
impl_edu_csdms_models_Waves_getRaster_grid(
  /* in */ edu_csdms_models_Waves self,
  /* in */ const char* val_string,
  /* out */ sidl_BaseInterface *_ex);

extern
struct sidl_int__array*
impl_edu_csdms_models_Waves_get_raster_dimen(
  /* in */ edu_csdms_models_Waves self,
  /* in */ const char* val_string,
  /* out */ sidl_BaseInterface *_ex);

extern
struct sidl_double__array*
impl_edu_csdms_models_Waves_get_raster_res(
  /* in */ edu_csdms_models_Waves self,
  /* in */ const char* val_string,
  /* out */ sidl_BaseInterface *_ex);

extern
struct sidl__array*
impl_edu_csdms_models_Waves_get_raster_data(
  /* in */ edu_csdms_models_Waves self,
  /* in */ const char* val_string,
  /* out */ sidl_BaseInterface *_ex);

extern
struct sidl_double__array*
impl_edu_csdms_models_Waves_get_time_span(
  /* in */ edu_csdms_models_Waves self,
  /* out */ sidl_BaseInterface *_ex);

extern
edu_csdms_openmi_IElementSet
impl_edu_csdms_models_Waves_get_element_set(
  /* in */ edu_csdms_models_Waves self,
  /* in */ const char* val_string,
  /* out */ sidl_BaseInterface *_ex);

extern
edu_csdms_openmi_IValueSet
impl_edu_csdms_models_Waves_get_value_set(
  /* in */ edu_csdms_models_Waves self,
  /* in */ const char* val_string,
  /* out */ sidl_BaseInterface *_ex);

extern
struct sidl__array*
impl_edu_csdms_models_Waves_get_value_set_data(
  /* in */ edu_csdms_models_Waves self,
  /* in */ const char* val_string,
  /* out */ sidl_BaseInterface *_ex);

extern
void
impl_edu_csdms_models_Waves_set_value_set(
  /* in */ edu_csdms_models_Waves self,
  /* in */ const char* val_string,
  /* in */ edu_csdms_openmi_IValueSet values,
  /* out */ sidl_BaseInterface *_ex);

#ifdef WITH_RMI
extern struct edu_csdms_tools_ConfigDialog__object* 
  impl_edu_csdms_models_Waves_fconnect_edu_csdms_tools_ConfigDialog(const char* 
  url, sidl_bool ar, sidl_BaseInterface *_ex);
extern struct gov_cca_Services__object* 
  impl_edu_csdms_models_Waves_fconnect_gov_cca_Services(const char* url, 
  sidl_bool ar, sidl_BaseInterface *_ex);
extern struct edu_csdms_tools_PrintQueue__object* 
  impl_edu_csdms_models_Waves_fconnect_edu_csdms_tools_PrintQueue(const char* 
  url, sidl_bool ar, sidl_BaseInterface *_ex);
extern struct edu_csdms_tools_Verbose__object* 
  impl_edu_csdms_models_Waves_fconnect_edu_csdms_tools_Verbose(const char* url, 
  sidl_bool ar, sidl_BaseInterface *_ex);
extern struct edu_csdms_openmi_ScalarSet__object* 
  impl_edu_csdms_models_Waves_fconnect_edu_csdms_openmi_ScalarSet(const char* 
  url, sidl_bool ar, sidl_BaseInterface *_ex);
extern struct sidl_BaseInterface__object* 
  impl_edu_csdms_models_Waves_fconnect_sidl_BaseInterface(const char* url, 
  sidl_bool ar, sidl_BaseInterface *_ex);
extern struct gov_cca_ports_ParameterPortFactory__object* 
  impl_edu_csdms_models_Waves_fconnect_gov_cca_ports_ParameterPortFactory(const 
  char* url, sidl_bool ar, sidl_BaseInterface *_ex);
extern struct edu_csdms_openmi_IValueSet__object* 
  impl_edu_csdms_models_Waves_fconnect_edu_csdms_openmi_IValueSet(const char* 
  url, sidl_bool ar, sidl_BaseInterface *_ex);
#endif /*WITH_RMI*/
#ifdef __cplusplus
extern "C" {
#endif

void
edu_csdms_models_Waves__set_epv(struct edu_csdms_models_Waves__epv *epv,
  struct edu_csdms_models_Waves__pre_epv *pre_epv, 
  struct edu_csdms_models_Waves__post_epv *post_epv
)
{
  epv->f__ctor = impl_edu_csdms_models_Waves__ctor;
  epv->f__ctor2 = impl_edu_csdms_models_Waves__ctor2;
  epv->f__dtor = impl_edu_csdms_models_Waves__dtor;
  pre_epv->f_boccaSetServices_pre = NULL;
  epv->f_boccaSetServices = impl_edu_csdms_models_Waves_boccaSetServices;
  post_epv->f_boccaSetServices_post = NULL;
  pre_epv->f_boccaReleaseServices_pre = NULL;
  epv->f_boccaReleaseServices = 
    impl_edu_csdms_models_Waves_boccaReleaseServices;
  post_epv->f_boccaReleaseServices_post = NULL;
  pre_epv->f_checkException_pre = NULL;
  epv->f_checkException = impl_edu_csdms_models_Waves_checkException;
  post_epv->f_checkException_post = NULL;
  pre_epv->f_boccaForceUsePortInclude_pre = NULL;
  epv->f_boccaForceUsePortInclude = 
    impl_edu_csdms_models_Waves_boccaForceUsePortInclude;
  post_epv->f_boccaForceUsePortInclude_post = NULL;
  pre_epv->f_setServices_pre = NULL;
  epv->f_setServices = impl_edu_csdms_models_Waves_setServices;
  post_epv->f_setServices_post = NULL;
  pre_epv->f_releaseServices_pre = NULL;
  epv->f_releaseServices = impl_edu_csdms_models_Waves_releaseServices;
  post_epv->f_releaseServices_post = NULL;
  pre_epv->f_go_pre = NULL;
  epv->f_go = impl_edu_csdms_models_Waves_go;
  post_epv->f_go_post = NULL;
  pre_epv->f_initialize_pre = NULL;
  epv->f_initialize = impl_edu_csdms_models_Waves_initialize;
  post_epv->f_initialize_post = NULL;
  pre_epv->f_run_pre = NULL;
  epv->f_run = impl_edu_csdms_models_Waves_run;
  post_epv->f_run_post = NULL;
  pre_epv->f_finalize_pre = NULL;
  epv->f_finalize = impl_edu_csdms_models_Waves_finalize;
  post_epv->f_finalize_post = NULL;
  pre_epv->f_getRaster_nx_pre = NULL;
  epv->f_getRaster_nx = impl_edu_csdms_models_Waves_getRaster_nx;
  post_epv->f_getRaster_nx_post = NULL;
  pre_epv->f_getRaster_ny_pre = NULL;
  epv->f_getRaster_ny = impl_edu_csdms_models_Waves_getRaster_ny;
  post_epv->f_getRaster_ny_post = NULL;
  pre_epv->f_getRaster_dx_pre = NULL;
  epv->f_getRaster_dx = impl_edu_csdms_models_Waves_getRaster_dx;
  post_epv->f_getRaster_dx_post = NULL;
  pre_epv->f_getRaster_dy_pre = NULL;
  epv->f_getRaster_dy = impl_edu_csdms_models_Waves_getRaster_dy;
  post_epv->f_getRaster_dy_post = NULL;
  pre_epv->f_getRaster_ulx_pre = NULL;
  epv->f_getRaster_ulx = impl_edu_csdms_models_Waves_getRaster_ulx;
  post_epv->f_getRaster_ulx_post = NULL;
  pre_epv->f_getRaster_uly_pre = NULL;
  epv->f_getRaster_uly = impl_edu_csdms_models_Waves_getRaster_uly;
  post_epv->f_getRaster_uly_post = NULL;
  pre_epv->f_getRaster_grid_pre = NULL;
  epv->f_getRaster_grid = impl_edu_csdms_models_Waves_getRaster_grid;
  post_epv->f_getRaster_grid_post = NULL;
  pre_epv->f_get_raster_dimen_pre = NULL;
  epv->f_get_raster_dimen = impl_edu_csdms_models_Waves_get_raster_dimen;
  post_epv->f_get_raster_dimen_post = NULL;
  pre_epv->f_get_raster_res_pre = NULL;
  epv->f_get_raster_res = impl_edu_csdms_models_Waves_get_raster_res;
  post_epv->f_get_raster_res_post = NULL;
  pre_epv->f_get_raster_data_pre = NULL;
  epv->f_get_raster_data = impl_edu_csdms_models_Waves_get_raster_data;
  post_epv->f_get_raster_data_post = NULL;
  pre_epv->f_get_time_span_pre = NULL;
  epv->f_get_time_span = impl_edu_csdms_models_Waves_get_time_span;
  post_epv->f_get_time_span_post = NULL;
  pre_epv->f_get_element_set_pre = NULL;
  epv->f_get_element_set = impl_edu_csdms_models_Waves_get_element_set;
  post_epv->f_get_element_set_post = NULL;
  pre_epv->f_get_value_set_pre = NULL;
  epv->f_get_value_set = impl_edu_csdms_models_Waves_get_value_set;
  post_epv->f_get_value_set_post = NULL;
  pre_epv->f_get_value_set_data_pre = NULL;
  epv->f_get_value_set_data = impl_edu_csdms_models_Waves_get_value_set_data;
  post_epv->f_get_value_set_data_post = NULL;
  pre_epv->f_set_value_set_pre = NULL;
  epv->f_set_value_set = impl_edu_csdms_models_Waves_set_value_set;
  post_epv->f_set_value_set_post = NULL;

}
#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

void edu_csdms_models_Waves__call_load(void) { 
  sidl_BaseInterface _throwaway_exception = NULL;
  impl_edu_csdms_models_Waves__load(&_throwaway_exception);
}
#ifdef WITH_RMI
struct edu_csdms_tools_ConfigDialog__object* 
  skel_edu_csdms_models_Waves_fconnect_edu_csdms_tools_ConfigDialog(const char* 
  url, sidl_bool ar, sidl_BaseInterface *_ex) { 
  return edu_csdms_tools_ConfigDialog__connectI(url, ar, _ex);
}

struct gov_cca_Services__object* 
  skel_edu_csdms_models_Waves_fconnect_gov_cca_Services(const char* url, 
  sidl_bool ar, sidl_BaseInterface *_ex) { 
  return gov_cca_Services__connectI(url, ar, _ex);
}

struct edu_csdms_tools_PrintQueue__object* 
  skel_edu_csdms_models_Waves_fconnect_edu_csdms_tools_PrintQueue(const char* 
  url, sidl_bool ar, sidl_BaseInterface *_ex) { 
  return edu_csdms_tools_PrintQueue__connectI(url, ar, _ex);
}

struct edu_csdms_tools_Verbose__object* 
  skel_edu_csdms_models_Waves_fconnect_edu_csdms_tools_Verbose(const char* url, 
  sidl_bool ar, sidl_BaseInterface *_ex) { 
  return edu_csdms_tools_Verbose__connectI(url, ar, _ex);
}

struct edu_csdms_openmi_ScalarSet__object* 
  skel_edu_csdms_models_Waves_fconnect_edu_csdms_openmi_ScalarSet(const char* 
  url, sidl_bool ar, sidl_BaseInterface *_ex) { 
  return edu_csdms_openmi_ScalarSet__connectI(url, ar, _ex);
}

struct sidl_BaseInterface__object* 
  skel_edu_csdms_models_Waves_fconnect_sidl_BaseInterface(const char* url, 
  sidl_bool ar, sidl_BaseInterface *_ex) { 
  return sidl_BaseInterface__connectI(url, ar, _ex);
}

struct gov_cca_ports_ParameterPortFactory__object* 
  skel_edu_csdms_models_Waves_fconnect_gov_cca_ports_ParameterPortFactory(const 
  char* url, sidl_bool ar, sidl_BaseInterface *_ex) { 
  return gov_cca_ports_ParameterPortFactory__connectI(url, ar, _ex);
}

struct edu_csdms_openmi_IValueSet__object* 
  skel_edu_csdms_models_Waves_fconnect_edu_csdms_openmi_IValueSet(const char* 
  url, sidl_bool ar, sidl_BaseInterface *_ex) { 
  return edu_csdms_openmi_IValueSet__connectI(url, ar, _ex);
}

#endif /*WITH_RMI*/
struct edu_csdms_models_Waves__data*
edu_csdms_models_Waves__get_data(edu_csdms_models_Waves self)
{
  return (struct edu_csdms_models_Waves__data*)(self ? self->d_data : NULL);
}

void edu_csdms_models_Waves__set_data(
  edu_csdms_models_Waves self,
  struct edu_csdms_models_Waves__data* data)
{
  if (self) {
    self->d_data = data;
  }
}
#ifdef __cplusplus
}
#endif
