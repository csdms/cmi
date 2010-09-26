/*
 * File:          edu_csdms_models_HydroTrend_Impl.h
 * Symbol:        edu.csdms.models.HydroTrend-v0.0
 * Symbol Type:   class
 * Babel Version: 1.4.0 (Revision: 6607 release-1-4-0-branch)
 * Description:   Server-side implementation for edu.csdms.models.HydroTrend
 * 
 * WARNING: Automatically generated; only changes within splicers preserved
 * 
 */

#ifndef included_edu_csdms_models_HydroTrend_Impl_h
#define included_edu_csdms_models_HydroTrend_Impl_h

#ifndef included_sidl_header_h
#include "sidl_header.h"
#endif
#ifndef included_edu_csdms_models_HydroTrend_h
#include "edu_csdms_models_HydroTrend.h"
#endif
#ifndef included_edu_csdms_openmi_IElementSet_h
#include "edu_csdms_openmi_IElementSet.h"
#endif
#ifndef included_edu_csdms_openmi_IValueSet_h
#include "edu_csdms_openmi_IValueSet.h"
#endif
#ifndef included_edu_csdms_openmi_ScalarSet_h
#include "edu_csdms_openmi_ScalarSet.h"
#endif
#ifndef included_edu_csdms_ports_IRFPort_h
#include "edu_csdms_ports_IRFPort.h"
#endif
#ifndef included_edu_csdms_tools_ConfigDialog_h
#include "edu_csdms_tools_ConfigDialog.h"
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
/* DO-NOT-DELETE splicer.begin(edu.csdms.models.HydroTrend._hincludes) */
/* Insert-Code-Here {edu.csdms.models.HydroTrend._hincludes} (include files) */
#include <hydrotrend_api.h>
#if !defined (PRINT)
# define PRINT(l, m) { \
    struct edu_csdms_models_HydroTrend__data *pd = \
             edu_csdms_models_HydroTrend__get_data (self); \
    if (pd && pd->log) \
      edu_csdms_tools_Verbose_log (pd->log, (l), "HydroTrend: " m, _ex); }
#endif
#if !defined (PRINT_DBL)
# define PRINT_DBL(l, val) { \
    struct edu_csdms_models_HydroTrend__data *pd = \
             edu_csdms_models_HydroTrend__get_data (self); \
    if (pd && pd->log) { \
      char* msg = g_strdup_printf ("HydroTrend: " #val " = %f", val); \
      edu_csdms_tools_Verbose_log (pd->log, (l), msg, _ex); \
      g_free (msg);} }
#endif
/* DO-NOT-DELETE splicer.end(edu.csdms.models.HydroTrend._hincludes) */

/*
 * Private data for class edu.csdms.models.HydroTrend
 */

struct edu_csdms_models_HydroTrend__data {
  /* DO-NOT-DELETE splicer.begin(edu.csdms.models.HydroTrend._data) */

  /* Bocca generated code. bocca.protected.begin(edu.csdms.models.HydroTrend._data) */
  /* Handle to framework services object */
  gov_cca_Services d_services;
  /* Bocca generated code. bocca.protected.end(edu.csdms.models.HydroTrend._data) */

  /* Put other private data members here... */
  gov_cca_TypeMap userinput;
  ht_state* state;

  //edu_csdms_tools_IRFPortQueue irf_ports;
  edu_csdms_tools_PrintQueue print_queue;
  edu_csdms_tools_Verbose log;

  //tools_ncts ncts_bedload;
  //edu_csdms_tools_nctsfiles ncts_files;
  //char** print_vals;
  /* DO-NOT-DELETE splicer.end(edu.csdms.models.HydroTrend._data) */
};

#ifdef __cplusplus
extern "C" {
#endif

/*
 * Access functions for class private data and built-in methods
 */

extern struct edu_csdms_models_HydroTrend__data*
edu_csdms_models_HydroTrend__get_data(
  edu_csdms_models_HydroTrend);

extern void
edu_csdms_models_HydroTrend__set_data(
  edu_csdms_models_HydroTrend,
  struct edu_csdms_models_HydroTrend__data*);

extern
void
impl_edu_csdms_models_HydroTrend__load(
  /* out */ sidl_BaseInterface *_ex);

extern
void
impl_edu_csdms_models_HydroTrend__ctor(
  /* in */ edu_csdms_models_HydroTrend self,
  /* out */ sidl_BaseInterface *_ex);

extern
void
impl_edu_csdms_models_HydroTrend__ctor2(
  /* in */ edu_csdms_models_HydroTrend self,
  /* in */ void* private_data,
  /* out */ sidl_BaseInterface *_ex);

extern
void
impl_edu_csdms_models_HydroTrend__dtor(
  /* in */ edu_csdms_models_HydroTrend self,
  /* out */ sidl_BaseInterface *_ex);

/*
 * User-defined object methods
 */

#ifdef WITH_RMI
extern struct edu_csdms_tools_ConfigDialog__object* 
  impl_edu_csdms_models_HydroTrend_fconnect_edu_csdms_tools_ConfigDialog(const 
  char* url, sidl_bool ar, sidl_BaseInterface *_ex);
extern struct edu_csdms_tools_TemplateFiles__object* 
  impl_edu_csdms_models_HydroTrend_fconnect_edu_csdms_tools_TemplateFiles(const 
  char* url, sidl_bool ar, sidl_BaseInterface *_ex);
extern struct gov_cca_Services__object* 
  impl_edu_csdms_models_HydroTrend_fconnect_gov_cca_Services(const char* url, 
  sidl_bool ar, sidl_BaseInterface *_ex);
extern struct edu_csdms_tools_PrintQueue__object* 
  impl_edu_csdms_models_HydroTrend_fconnect_edu_csdms_tools_PrintQueue(const 
  char* url, sidl_bool ar, sidl_BaseInterface *_ex);
extern struct edu_csdms_tools_Verbose__object* 
  impl_edu_csdms_models_HydroTrend_fconnect_edu_csdms_tools_Verbose(const char* 
  url, sidl_bool ar, sidl_BaseInterface *_ex);
extern struct edu_csdms_openmi_ScalarSet__object* 
  impl_edu_csdms_models_HydroTrend_fconnect_edu_csdms_openmi_ScalarSet(const 
  char* url, sidl_bool ar, sidl_BaseInterface *_ex);
extern struct sidl_BaseInterface__object* 
  impl_edu_csdms_models_HydroTrend_fconnect_sidl_BaseInterface(const char* url, 
  sidl_bool ar, sidl_BaseInterface *_ex);
extern struct gov_cca_ports_ParameterPortFactory__object* 
  impl_edu_csdms_models_HydroTrend_fconnect_gov_cca_ports_ParameterPortFactory(
  const char* url, sidl_bool ar, sidl_BaseInterface *_ex);
extern struct edu_csdms_openmi_IValueSet__object* 
  impl_edu_csdms_models_HydroTrend_fconnect_edu_csdms_openmi_IValueSet(const 
  char* url, sidl_bool ar, sidl_BaseInterface *_ex);
#endif /*WITH_RMI*/
extern
void
impl_edu_csdms_models_HydroTrend_boccaSetServices(
  /* in */ edu_csdms_models_HydroTrend self,
  /* in */ gov_cca_Services services,
  /* out */ sidl_BaseInterface *_ex);

extern
void
impl_edu_csdms_models_HydroTrend_boccaReleaseServices(
  /* in */ edu_csdms_models_HydroTrend self,
  /* in */ gov_cca_Services services,
  /* out */ sidl_BaseInterface *_ex);

extern
void
impl_edu_csdms_models_HydroTrend_checkException(
  /* in */ edu_csdms_models_HydroTrend self,
  /* in */ sidl_BaseInterface excpt,
  /* in */ const char* msg,
  /* in */ sidl_bool fatal,
  /* out */ sidl_BaseInterface *_ex);

extern
void
impl_edu_csdms_models_HydroTrend_boccaForceUsePortInclude(
  /* in */ edu_csdms_models_HydroTrend self,
  /* in */ gov_cca_ports_ParameterPortFactory dummy0,
  /* in */ edu_csdms_tools_Verbose dummy1,
  /* in */ edu_csdms_tools_TemplateFiles dummy2,
  /* in */ edu_csdms_openmi_ScalarSet dummy3,
  /* in */ edu_csdms_tools_ConfigDialog dummy4,
  /* in */ edu_csdms_tools_PrintQueue dummy5,
  /* out */ sidl_BaseInterface *_ex);

extern
void
impl_edu_csdms_models_HydroTrend_setServices(
  /* in */ edu_csdms_models_HydroTrend self,
  /* in */ gov_cca_Services services,
  /* out */ sidl_BaseInterface *_ex);

extern
void
impl_edu_csdms_models_HydroTrend_releaseServices(
  /* in */ edu_csdms_models_HydroTrend self,
  /* in */ gov_cca_Services services,
  /* out */ sidl_BaseInterface *_ex);

extern
int32_t
impl_edu_csdms_models_HydroTrend_go(
  /* in */ edu_csdms_models_HydroTrend self,
  /* out */ sidl_BaseInterface *_ex);

extern
void
impl_edu_csdms_models_HydroTrend_initialize(
  /* in */ edu_csdms_models_HydroTrend self,
  /* in array<string> */ struct sidl_string__array* properties,
  /* out */ sidl_BaseInterface *_ex);

extern
void
impl_edu_csdms_models_HydroTrend_run(
  /* in */ edu_csdms_models_HydroTrend self,
  /* in */ double time,
  /* out */ sidl_BaseInterface *_ex);

extern
void
impl_edu_csdms_models_HydroTrend_finalize(
  /* in */ edu_csdms_models_HydroTrend self,
  /* out */ sidl_BaseInterface *_ex);

extern
int64_t
impl_edu_csdms_models_HydroTrend_getRaster_nx(
  /* in */ edu_csdms_models_HydroTrend self,
  /* out */ sidl_BaseInterface *_ex);

extern
int64_t
impl_edu_csdms_models_HydroTrend_getRaster_ny(
  /* in */ edu_csdms_models_HydroTrend self,
  /* out */ sidl_BaseInterface *_ex);

extern
double
impl_edu_csdms_models_HydroTrend_getRaster_dx(
  /* in */ edu_csdms_models_HydroTrend self,
  /* out */ sidl_BaseInterface *_ex);

extern
double
impl_edu_csdms_models_HydroTrend_getRaster_dy(
  /* in */ edu_csdms_models_HydroTrend self,
  /* out */ sidl_BaseInterface *_ex);

extern
double
impl_edu_csdms_models_HydroTrend_getRaster_ulx(
  /* in */ edu_csdms_models_HydroTrend self,
  /* out */ sidl_BaseInterface *_ex);

extern
double
impl_edu_csdms_models_HydroTrend_getRaster_uly(
  /* in */ edu_csdms_models_HydroTrend self,
  /* out */ sidl_BaseInterface *_ex);

extern
struct sidl_double__array*
impl_edu_csdms_models_HydroTrend_getRaster_grid(
  /* in */ edu_csdms_models_HydroTrend self,
  /* in */ const char* val_string,
  /* out */ sidl_BaseInterface *_ex);

extern
struct sidl_int__array*
impl_edu_csdms_models_HydroTrend_get_raster_dimen(
  /* in */ edu_csdms_models_HydroTrend self,
  /* in */ const char* val_string,
  /* out */ sidl_BaseInterface *_ex);

extern
struct sidl_double__array*
impl_edu_csdms_models_HydroTrend_get_raster_res(
  /* in */ edu_csdms_models_HydroTrend self,
  /* in */ const char* val_string,
  /* out */ sidl_BaseInterface *_ex);

extern
struct sidl__array*
impl_edu_csdms_models_HydroTrend_get_raster_data(
  /* in */ edu_csdms_models_HydroTrend self,
  /* in */ const char* val_string,
  /* out */ sidl_BaseInterface *_ex);

extern
struct sidl_double__array*
impl_edu_csdms_models_HydroTrend_get_time_span(
  /* in */ edu_csdms_models_HydroTrend self,
  /* out */ sidl_BaseInterface *_ex);

extern
edu_csdms_openmi_IElementSet
impl_edu_csdms_models_HydroTrend_get_element_set(
  /* in */ edu_csdms_models_HydroTrend self,
  /* in */ const char* val_string,
  /* out */ sidl_BaseInterface *_ex);

extern
edu_csdms_openmi_IValueSet
impl_edu_csdms_models_HydroTrend_get_value_set(
  /* in */ edu_csdms_models_HydroTrend self,
  /* in */ const char* val_string,
  /* out */ sidl_BaseInterface *_ex);

extern
struct sidl__array*
impl_edu_csdms_models_HydroTrend_get_value_set_data(
  /* in */ edu_csdms_models_HydroTrend self,
  /* in */ const char* val_string,
  /* out */ sidl_BaseInterface *_ex);

extern
void
impl_edu_csdms_models_HydroTrend_set_value_set(
  /* in */ edu_csdms_models_HydroTrend self,
  /* in */ const char* val_string,
  /* in */ edu_csdms_openmi_IValueSet values,
  /* out */ sidl_BaseInterface *_ex);

#ifdef WITH_RMI
extern struct edu_csdms_tools_ConfigDialog__object* 
  impl_edu_csdms_models_HydroTrend_fconnect_edu_csdms_tools_ConfigDialog(const 
  char* url, sidl_bool ar, sidl_BaseInterface *_ex);
extern struct edu_csdms_tools_TemplateFiles__object* 
  impl_edu_csdms_models_HydroTrend_fconnect_edu_csdms_tools_TemplateFiles(const 
  char* url, sidl_bool ar, sidl_BaseInterface *_ex);
extern struct gov_cca_Services__object* 
  impl_edu_csdms_models_HydroTrend_fconnect_gov_cca_Services(const char* url, 
  sidl_bool ar, sidl_BaseInterface *_ex);
extern struct edu_csdms_tools_PrintQueue__object* 
  impl_edu_csdms_models_HydroTrend_fconnect_edu_csdms_tools_PrintQueue(const 
  char* url, sidl_bool ar, sidl_BaseInterface *_ex);
extern struct edu_csdms_tools_Verbose__object* 
  impl_edu_csdms_models_HydroTrend_fconnect_edu_csdms_tools_Verbose(const char* 
  url, sidl_bool ar, sidl_BaseInterface *_ex);
extern struct edu_csdms_openmi_ScalarSet__object* 
  impl_edu_csdms_models_HydroTrend_fconnect_edu_csdms_openmi_ScalarSet(const 
  char* url, sidl_bool ar, sidl_BaseInterface *_ex);
extern struct sidl_BaseInterface__object* 
  impl_edu_csdms_models_HydroTrend_fconnect_sidl_BaseInterface(const char* url, 
  sidl_bool ar, sidl_BaseInterface *_ex);
extern struct gov_cca_ports_ParameterPortFactory__object* 
  impl_edu_csdms_models_HydroTrend_fconnect_gov_cca_ports_ParameterPortFactory(
  const char* url, sidl_bool ar, sidl_BaseInterface *_ex);
extern struct edu_csdms_openmi_IValueSet__object* 
  impl_edu_csdms_models_HydroTrend_fconnect_edu_csdms_openmi_IValueSet(const 
  char* url, sidl_bool ar, sidl_BaseInterface *_ex);
#endif /*WITH_RMI*/

/* DO-NOT-DELETE splicer.begin(_hmisc) */
/* Insert-Code-Here {_hmisc} (miscellaneous things) */
/* DO-NOT-DELETE splicer.end(_hmisc) */

#ifdef __cplusplus
}
#endif
#endif
