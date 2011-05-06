/*
 * File:          edu_csdms_models_Sedflux2D_Impl.h
 * Symbol:        edu.csdms.models.Sedflux2D-v0.0
 * Symbol Type:   class
 * Babel Version: 1.4.0 (Revision: 6607 release-1-4-0-branch)
 * Description:   Server-side implementation for edu.csdms.models.Sedflux2D
 * 
 * WARNING: Automatically generated; only changes within splicers preserved
 * 
 */

#ifndef included_edu_csdms_models_Sedflux2D_Impl_h
#define included_edu_csdms_models_Sedflux2D_Impl_h

#ifndef included_sidl_header_h
#include "sidl_header.h"
#endif
#ifndef included_edu_csdms_models_Sedflux2D_h
#include "edu_csdms_models_Sedflux2D.h"
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
#ifndef included_edu_csdms_tools_TemplateFiles_h
#include "edu_csdms_tools_TemplateFiles.h"
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
/* DO-NOT-DELETE splicer.begin(edu.csdms.models.Sedflux2D._hincludes) */
/* Insert-Code-Here {edu.csdms.models.Sedflux2D._hincludes} (include files) */
#include <eh_utils.h>
#include <sed.h>
#include <sedflux.h>
#include <sedflux_api.h>

#if !defined (PRINT)
# define PRINT(l, m) { \
    struct edu_csdms_models_Sedflux2D__data *pd = \
             edu_csdms_models_Sedflux2D__get_data (self); \
    edu_csdms_tools_Verbose_log (pd->log, (l), "Sedflux2D: " m, _ex); }
#endif
/* DO-NOT-DELETE splicer.end(edu.csdms.models.Sedflux2D._hincludes) */

/*
 * Private data for class edu.csdms.models.Sedflux2D
 */

struct edu_csdms_models_Sedflux2D__data {
  /* DO-NOT-DELETE splicer.begin(edu.csdms.models.Sedflux2D._data) */

  /* Bocca generated code. bocca.protected.begin(edu.csdms.models.Sedflux2D._data) */
  /* Handle to framework services object */
  gov_cca_Services d_services;
  /* Bocca generated code. bocca.protected.end(edu.csdms.models.Sedflux2D._data) */

  /* Put other private data members here... */
  gov_cca_TypeMap userinput;
  Sedflux_state* state;

  edu_csdms_tools_IRFPortQueue irf_ports;
  edu_csdms_tools_PrintQueue print_queue;
  edu_csdms_tools_Verbose log;

  int discharge_port_is_on;

  /* DO-NOT-DELETE splicer.end(edu.csdms.models.Sedflux2D._data) */
};

#ifdef __cplusplus
extern "C" {
#endif

/*
 * Access functions for class private data and built-in methods
 */

extern struct edu_csdms_models_Sedflux2D__data*
edu_csdms_models_Sedflux2D__get_data(
  edu_csdms_models_Sedflux2D);

extern void
edu_csdms_models_Sedflux2D__set_data(
  edu_csdms_models_Sedflux2D,
  struct edu_csdms_models_Sedflux2D__data*);

extern
void
impl_edu_csdms_models_Sedflux2D__load(
  /* out */ sidl_BaseInterface *_ex);

extern
void
impl_edu_csdms_models_Sedflux2D__ctor(
  /* in */ edu_csdms_models_Sedflux2D self,
  /* out */ sidl_BaseInterface *_ex);

extern
void
impl_edu_csdms_models_Sedflux2D__ctor2(
  /* in */ edu_csdms_models_Sedflux2D self,
  /* in */ void* private_data,
  /* out */ sidl_BaseInterface *_ex);

extern
void
impl_edu_csdms_models_Sedflux2D__dtor(
  /* in */ edu_csdms_models_Sedflux2D self,
  /* out */ sidl_BaseInterface *_ex);

/*
 * User-defined object methods
 */

#ifdef WITH_RMI
extern struct edu_csdms_tools_TemplateFiles__object* 
  impl_edu_csdms_models_Sedflux2D_fconnect_edu_csdms_tools_TemplateFiles(const 
  char* url, sidl_bool ar, sidl_BaseInterface *_ex);
extern struct edu_csdms_tools_PrintQueue__object* 
  impl_edu_csdms_models_Sedflux2D_fconnect_edu_csdms_tools_PrintQueue(const 
  char* url, sidl_bool ar, sidl_BaseInterface *_ex);
extern struct edu_csdms_openmi_IScalarSet__object* 
  impl_edu_csdms_models_Sedflux2D_fconnect_edu_csdms_openmi_IScalarSet(const 
  char* url, sidl_bool ar, sidl_BaseInterface *_ex);
extern struct sidl_BaseInterface__object* 
  impl_edu_csdms_models_Sedflux2D_fconnect_sidl_BaseInterface(const char* url, 
  sidl_bool ar, sidl_BaseInterface *_ex);
extern struct edu_csdms_tools_IRFPortQueue__object* 
  impl_edu_csdms_models_Sedflux2D_fconnect_edu_csdms_tools_IRFPortQueue(const 
  char* url, sidl_bool ar, sidl_BaseInterface *_ex);
extern struct gov_cca_ports_ParameterPortFactory__object* 
  impl_edu_csdms_models_Sedflux2D_fconnect_gov_cca_ports_ParameterPortFactory(
  const char* url, sidl_bool ar, sidl_BaseInterface *_ex);
extern struct edu_csdms_openmi_IValueSet__object* 
  impl_edu_csdms_models_Sedflux2D_fconnect_edu_csdms_openmi_IValueSet(const 
  char* url, sidl_bool ar, sidl_BaseInterface *_ex);
extern struct edu_csdms_tools_ConfigDialog__object* 
  impl_edu_csdms_models_Sedflux2D_fconnect_edu_csdms_tools_ConfigDialog(const 
  char* url, sidl_bool ar, sidl_BaseInterface *_ex);
extern struct gov_cca_Services__object* 
  impl_edu_csdms_models_Sedflux2D_fconnect_gov_cca_Services(const char* url, 
  sidl_bool ar, sidl_BaseInterface *_ex);
extern struct edu_csdms_ports_IRFPort__object* 
  impl_edu_csdms_models_Sedflux2D_fconnect_edu_csdms_ports_IRFPort(const char* 
  url, sidl_bool ar, sidl_BaseInterface *_ex);
extern struct edu_csdms_tools_Verbose__object* 
  impl_edu_csdms_models_Sedflux2D_fconnect_edu_csdms_tools_Verbose(const char* 
  url, sidl_bool ar, sidl_BaseInterface *_ex);
extern struct edu_csdms_openmi_ValueSet__object* 
  impl_edu_csdms_models_Sedflux2D_fconnect_edu_csdms_openmi_ValueSet(const 
  char* url, sidl_bool ar, sidl_BaseInterface *_ex);
extern struct edu_csdms_openmi_ScalarSet__object* 
  impl_edu_csdms_models_Sedflux2D_fconnect_edu_csdms_openmi_ScalarSet(const 
  char* url, sidl_bool ar, sidl_BaseInterface *_ex);
#endif /*WITH_RMI*/
extern
void
impl_edu_csdms_models_Sedflux2D_boccaSetServices(
  /* in */ edu_csdms_models_Sedflux2D self,
  /* in */ gov_cca_Services services,
  /* out */ sidl_BaseInterface *_ex);

extern
void
impl_edu_csdms_models_Sedflux2D_boccaReleaseServices(
  /* in */ edu_csdms_models_Sedflux2D self,
  /* in */ gov_cca_Services services,
  /* out */ sidl_BaseInterface *_ex);

extern
void
impl_edu_csdms_models_Sedflux2D_checkException(
  /* in */ edu_csdms_models_Sedflux2D self,
  /* in */ sidl_BaseInterface excpt,
  /* in */ const char* msg,
  /* in */ sidl_bool fatal,
  /* out */ sidl_BaseInterface *_ex);

extern
void
impl_edu_csdms_models_Sedflux2D_boccaForceUsePortInclude(
  /* in */ edu_csdms_models_Sedflux2D self,
  /* in */ gov_cca_ports_ParameterPortFactory dummy0,
  /* in */ edu_csdms_ports_IRFPort dummy1,
  /* in */ edu_csdms_tools_IRFPortQueue dummy2,
  /* in */ edu_csdms_tools_Verbose dummy3,
  /* in */ edu_csdms_openmi_ValueSet dummy4,
  /* in */ edu_csdms_openmi_ScalarSet dummy5,
  /* in */ edu_csdms_tools_ConfigDialog dummy6,
  /* in */ edu_csdms_openmi_IScalarSet dummy7,
  /* in */ edu_csdms_tools_PrintQueue dummy8,
  /* in */ edu_csdms_tools_TemplateFiles dummy9,
  /* out */ sidl_BaseInterface *_ex);

extern
void
impl_edu_csdms_models_Sedflux2D_setServices(
  /* in */ edu_csdms_models_Sedflux2D self,
  /* in */ gov_cca_Services services,
  /* out */ sidl_BaseInterface *_ex);

extern
void
impl_edu_csdms_models_Sedflux2D_releaseServices(
  /* in */ edu_csdms_models_Sedflux2D self,
  /* in */ gov_cca_Services services,
  /* out */ sidl_BaseInterface *_ex);

extern
int32_t
impl_edu_csdms_models_Sedflux2D_go(
  /* in */ edu_csdms_models_Sedflux2D self,
  /* out */ sidl_BaseInterface *_ex);

extern
void
impl_edu_csdms_models_Sedflux2D_initialize(
  /* in */ edu_csdms_models_Sedflux2D self,
  /* in array<string> */ struct sidl_string__array* properties,
  /* out */ sidl_BaseInterface *_ex);

extern
void
impl_edu_csdms_models_Sedflux2D_run(
  /* in */ edu_csdms_models_Sedflux2D self,
  /* in */ double time,
  /* out */ sidl_BaseInterface *_ex);

extern
void
impl_edu_csdms_models_Sedflux2D_finalize(
  /* in */ edu_csdms_models_Sedflux2D self,
  /* out */ sidl_BaseInterface *_ex);

extern
int64_t
impl_edu_csdms_models_Sedflux2D_getRaster_nx(
  /* in */ edu_csdms_models_Sedflux2D self,
  /* out */ sidl_BaseInterface *_ex);

extern
int64_t
impl_edu_csdms_models_Sedflux2D_getRaster_ny(
  /* in */ edu_csdms_models_Sedflux2D self,
  /* out */ sidl_BaseInterface *_ex);

extern
double
impl_edu_csdms_models_Sedflux2D_getRaster_dx(
  /* in */ edu_csdms_models_Sedflux2D self,
  /* out */ sidl_BaseInterface *_ex);

extern
double
impl_edu_csdms_models_Sedflux2D_getRaster_dy(
  /* in */ edu_csdms_models_Sedflux2D self,
  /* out */ sidl_BaseInterface *_ex);

extern
double
impl_edu_csdms_models_Sedflux2D_getRaster_ulx(
  /* in */ edu_csdms_models_Sedflux2D self,
  /* out */ sidl_BaseInterface *_ex);

extern
double
impl_edu_csdms_models_Sedflux2D_getRaster_uly(
  /* in */ edu_csdms_models_Sedflux2D self,
  /* out */ sidl_BaseInterface *_ex);

extern
struct sidl_double__array*
impl_edu_csdms_models_Sedflux2D_getRaster_grid(
  /* in */ edu_csdms_models_Sedflux2D self,
  /* in */ const char* val_string,
  /* out */ sidl_BaseInterface *_ex);

extern
struct sidl_int__array*
impl_edu_csdms_models_Sedflux2D_get_raster_dimen(
  /* in */ edu_csdms_models_Sedflux2D self,
  /* in */ const char* val_string,
  /* out */ sidl_BaseInterface *_ex);

extern
struct sidl_double__array*
impl_edu_csdms_models_Sedflux2D_get_raster_res(
  /* in */ edu_csdms_models_Sedflux2D self,
  /* in */ const char* val_string,
  /* out */ sidl_BaseInterface *_ex);

extern
struct sidl__array*
impl_edu_csdms_models_Sedflux2D_get_raster_data(
  /* in */ edu_csdms_models_Sedflux2D self,
  /* in */ const char* val_string,
  /* out */ sidl_BaseInterface *_ex);

extern
struct sidl_double__array*
impl_edu_csdms_models_Sedflux2D_get_time_span(
  /* in */ edu_csdms_models_Sedflux2D self,
  /* out */ sidl_BaseInterface *_ex);

extern
edu_csdms_openmi_IElementSet
impl_edu_csdms_models_Sedflux2D_get_element_set(
  /* in */ edu_csdms_models_Sedflux2D self,
  /* in */ const char* val_string,
  /* out */ sidl_BaseInterface *_ex);

extern
edu_csdms_openmi_IValueSet
impl_edu_csdms_models_Sedflux2D_get_value_set(
  /* in */ edu_csdms_models_Sedflux2D self,
  /* in */ const char* val_string,
  /* out */ sidl_BaseInterface *_ex);

extern
struct sidl__array*
impl_edu_csdms_models_Sedflux2D_get_value_set_data(
  /* in */ edu_csdms_models_Sedflux2D self,
  /* in */ const char* val_string,
  /* out */ sidl_BaseInterface *_ex);

extern
void
impl_edu_csdms_models_Sedflux2D_set_value_set(
  /* in */ edu_csdms_models_Sedflux2D self,
  /* in */ const char* val_string,
  /* in */ edu_csdms_openmi_IValueSet values,
  /* out */ sidl_BaseInterface *_ex);

#ifdef WITH_RMI
extern struct edu_csdms_tools_TemplateFiles__object* 
  impl_edu_csdms_models_Sedflux2D_fconnect_edu_csdms_tools_TemplateFiles(const 
  char* url, sidl_bool ar, sidl_BaseInterface *_ex);
extern struct edu_csdms_tools_PrintQueue__object* 
  impl_edu_csdms_models_Sedflux2D_fconnect_edu_csdms_tools_PrintQueue(const 
  char* url, sidl_bool ar, sidl_BaseInterface *_ex);
extern struct edu_csdms_openmi_IScalarSet__object* 
  impl_edu_csdms_models_Sedflux2D_fconnect_edu_csdms_openmi_IScalarSet(const 
  char* url, sidl_bool ar, sidl_BaseInterface *_ex);
extern struct sidl_BaseInterface__object* 
  impl_edu_csdms_models_Sedflux2D_fconnect_sidl_BaseInterface(const char* url, 
  sidl_bool ar, sidl_BaseInterface *_ex);
extern struct edu_csdms_tools_IRFPortQueue__object* 
  impl_edu_csdms_models_Sedflux2D_fconnect_edu_csdms_tools_IRFPortQueue(const 
  char* url, sidl_bool ar, sidl_BaseInterface *_ex);
extern struct gov_cca_ports_ParameterPortFactory__object* 
  impl_edu_csdms_models_Sedflux2D_fconnect_gov_cca_ports_ParameterPortFactory(
  const char* url, sidl_bool ar, sidl_BaseInterface *_ex);
extern struct edu_csdms_openmi_IValueSet__object* 
  impl_edu_csdms_models_Sedflux2D_fconnect_edu_csdms_openmi_IValueSet(const 
  char* url, sidl_bool ar, sidl_BaseInterface *_ex);
extern struct edu_csdms_tools_ConfigDialog__object* 
  impl_edu_csdms_models_Sedflux2D_fconnect_edu_csdms_tools_ConfigDialog(const 
  char* url, sidl_bool ar, sidl_BaseInterface *_ex);
extern struct gov_cca_Services__object* 
  impl_edu_csdms_models_Sedflux2D_fconnect_gov_cca_Services(const char* url, 
  sidl_bool ar, sidl_BaseInterface *_ex);
extern struct edu_csdms_ports_IRFPort__object* 
  impl_edu_csdms_models_Sedflux2D_fconnect_edu_csdms_ports_IRFPort(const char* 
  url, sidl_bool ar, sidl_BaseInterface *_ex);
extern struct edu_csdms_tools_Verbose__object* 
  impl_edu_csdms_models_Sedflux2D_fconnect_edu_csdms_tools_Verbose(const char* 
  url, sidl_bool ar, sidl_BaseInterface *_ex);
extern struct edu_csdms_openmi_ValueSet__object* 
  impl_edu_csdms_models_Sedflux2D_fconnect_edu_csdms_openmi_ValueSet(const 
  char* url, sidl_bool ar, sidl_BaseInterface *_ex);
extern struct edu_csdms_openmi_ScalarSet__object* 
  impl_edu_csdms_models_Sedflux2D_fconnect_edu_csdms_openmi_ScalarSet(const 
  char* url, sidl_bool ar, sidl_BaseInterface *_ex);
#endif /*WITH_RMI*/

/* DO-NOT-DELETE splicer.begin(_hmisc) */
/* Insert-Code-Here {_hmisc} (miscellaneous things) */
/* DO-NOT-DELETE splicer.end(_hmisc) */

#ifdef __cplusplus
}
#endif
#endif