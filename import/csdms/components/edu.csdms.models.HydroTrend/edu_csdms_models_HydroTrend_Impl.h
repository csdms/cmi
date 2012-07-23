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
#ifndef included_edu_csdms_cmi_ComponentHandler_h
#include "edu_csdms_cmi_ComponentHandler.h"
#endif
#ifndef included_edu_csdms_cmi_IGrid_h
#include "edu_csdms_cmi_IGrid.h"
#endif
#ifndef included_edu_csdms_models_HydroTrend_h
#include "edu_csdms_models_HydroTrend.h"
#endif
#ifndef included_edu_csdms_ports_CMIPort_h
#include "edu_csdms_ports_CMIPort.h"
#endif
#ifndef included_edu_csdms_tools_CMIGridUniformRectilinear_h
#include "edu_csdms_tools_CMIGridUniformRectilinear.h"
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
//#include <hydrotrend_api.h>
#include <bmi.h>

#define CMI_COMPONENT_NAME "HydroTrend"

//#include <cmi.h>
/*
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
*/

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
  edu_csdms_cmi_ComponentHandler handler;
  void *state;
  CMI_Component_status status;
/*
  gov_cca_TypeMap userinput;
  ht_state* state;

  //edu_csdms_tools_IRFPortQueue irf_ports;
  edu_csdms_tools_PrintQueue print_queue;
*/
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
extern struct edu_csdms_cmi_ComponentHandler__object* 
  impl_edu_csdms_models_HydroTrend_fconnect_edu_csdms_cmi_ComponentHandler(
  const char* url, sidl_bool ar, sidl_BaseInterface *_ex);
extern struct gov_cca_Services__object* 
  impl_edu_csdms_models_HydroTrend_fconnect_gov_cca_Services(const char* url, 
  sidl_bool ar, sidl_BaseInterface *_ex);
extern struct edu_csdms_tools_Verbose__object* 
  impl_edu_csdms_models_HydroTrend_fconnect_edu_csdms_tools_Verbose(const char* 
  url, sidl_bool ar, sidl_BaseInterface *_ex);
extern struct sidl_BaseInterface__object* 
  impl_edu_csdms_models_HydroTrend_fconnect_sidl_BaseInterface(const char* url, 
  sidl_bool ar, sidl_BaseInterface *_ex);
extern struct gov_cca_ports_ParameterPortFactory__object* 
  impl_edu_csdms_models_HydroTrend_fconnect_gov_cca_ports_ParameterPortFactory(
  const char* url, sidl_bool ar, sidl_BaseInterface *_ex);
extern struct edu_csdms_tools_CMIGridUniformRectilinear__object* 
  impl_edu_csdms_models_HydroTrend_fconnect_edu_csdms_tools_CMIGridUniformRectilinear
  (const char* url, sidl_bool ar, sidl_BaseInterface *_ex);
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
  /* in */ edu_csdms_tools_CMIGridUniformRectilinear dummy2,
  /* in */ edu_csdms_cmi_ComponentHandler dummy3,
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
sidl_bool
impl_edu_csdms_models_HydroTrend_CMI_initialize(
  /* in */ edu_csdms_models_HydroTrend self,
  /* in */ const char* config_file,
  /* out */ sidl_BaseInterface *_ex);

extern
sidl_bool
impl_edu_csdms_models_HydroTrend_prepare(
  /* in */ edu_csdms_models_HydroTrend self,
  /* in */ const char* config_file,
  /* out */ sidl_BaseInterface *_ex);

extern
sidl_bool
impl_edu_csdms_models_HydroTrend_CMI_run_for(
  /* in */ edu_csdms_models_HydroTrend self,
  /* in */ double time_interval,
  /* in */ const char* time_units,
  /* in */ const char* stop_rule,
  /* in array<double> */ struct sidl_double__array* stop_vars,
  /* out */ sidl_BaseInterface *_ex);

extern
sidl_bool
impl_edu_csdms_models_HydroTrend_CMI_run(
  /* in */ edu_csdms_models_HydroTrend self,
  /* in */ double time_interval,
  /* out */ sidl_BaseInterface *_ex);

extern
sidl_bool
impl_edu_csdms_models_HydroTrend_run(
  /* in */ edu_csdms_models_HydroTrend self,
  /* in */ double time_interval,
  /* out */ sidl_BaseInterface *_ex);

extern
sidl_bool
impl_edu_csdms_models_HydroTrend_CMI_finalize(
  /* in */ edu_csdms_models_HydroTrend self,
  /* out */ sidl_BaseInterface *_ex);

extern
sidl_bool
impl_edu_csdms_models_HydroTrend_finish(
  /* in */ edu_csdms_models_HydroTrend self,
  /* out */ sidl_BaseInterface *_ex);

extern
sidl_bool
impl_edu_csdms_models_HydroTrend_CMI_run_model(
  /* in */ edu_csdms_models_HydroTrend self,
  /* in */ const char* config_file,
  /* in */ const char* stop_rule,
  /* in */ double stop_var,
  /* out */ sidl_BaseInterface *_ex);

extern
double
impl_edu_csdms_models_HydroTrend_CMI_get_start_time(
  /* in */ edu_csdms_models_HydroTrend self,
  /* out */ sidl_BaseInterface *_ex);

extern
double
impl_edu_csdms_models_HydroTrend_CMI_get_current_time(
  /* in */ edu_csdms_models_HydroTrend self,
  /* out */ sidl_BaseInterface *_ex);

extern
double
impl_edu_csdms_models_HydroTrend_CMI_get_end_time(
  /* in */ edu_csdms_models_HydroTrend self,
  /* out */ sidl_BaseInterface *_ex);

extern
struct sidl__array*
impl_edu_csdms_models_HydroTrend_CMI_get_values(
  /* in */ edu_csdms_models_HydroTrend self,
  /* in */ const char* long_var_name,
  /* out */ sidl_BaseInterface *_ex);

extern
void
impl_edu_csdms_models_HydroTrend_CMI_set_values(
  /* in */ edu_csdms_models_HydroTrend self,
  /* in */ const char* long_var_name,
  /* in array<> */ struct sidl__array* in_values,
  /* out */ sidl_BaseInterface *_ex);

extern
char*
impl_edu_csdms_models_HydroTrend_CMI_get_status(
  /* in */ edu_csdms_models_HydroTrend self,
  /* out */ sidl_BaseInterface *_ex);

extern
char*
impl_edu_csdms_models_HydroTrend_CMI_get_component_name(
  /* in */ edu_csdms_models_HydroTrend self,
  /* out */ sidl_BaseInterface *_ex);

extern
struct sidl_string__array*
impl_edu_csdms_models_HydroTrend_CMI_get_input_item_list(
  /* in */ edu_csdms_models_HydroTrend self,
  /* out */ sidl_BaseInterface *_ex);

extern
struct sidl_string__array*
impl_edu_csdms_models_HydroTrend_CMI_get_output_item_list(
  /* in */ edu_csdms_models_HydroTrend self,
  /* out */ sidl_BaseInterface *_ex);

extern
sidl_bool
impl_edu_csdms_models_HydroTrend_CMI_has_output_item(
  /* in */ edu_csdms_models_HydroTrend self,
  /* in */ const char* long_var_name,
  /* out */ sidl_BaseInterface *_ex);

extern
sidl_bool
impl_edu_csdms_models_HydroTrend_CMI_has_input_item(
  /* in */ edu_csdms_models_HydroTrend self,
  /* in */ const char* long_var_name,
  /* out */ sidl_BaseInterface *_ex);

extern
void
impl_edu_csdms_models_HydroTrend_CMI_get_required_ports(
  /* in */ edu_csdms_models_HydroTrend self,
  /* out */ sidl_BaseInterface *_ex);

extern
void
impl_edu_csdms_models_HydroTrend_CMI_release_required_ports(
  /* in */ edu_csdms_models_HydroTrend self,
  /* out */ sidl_BaseInterface *_ex);

extern
struct sidl__array*
impl_edu_csdms_models_HydroTrend_CMI_get_values_at_indices(
  /* in */ edu_csdms_models_HydroTrend self,
  /* in */ const char* long_var_name,
  /* in array<int> */ struct sidl_int__array* indices,
  /* out */ sidl_BaseInterface *_ex);

extern
void
impl_edu_csdms_models_HydroTrend_CMI_set_values_at_indices(
  /* in */ edu_csdms_models_HydroTrend self,
  /* in */ const char* long_var_name,
  /* in array<int> */ struct sidl_int__array* indices,
  /* in array<> */ struct sidl__array* in_values,
  /* out */ sidl_BaseInterface *_ex);

extern
void
impl_edu_csdms_models_HydroTrend_CMI_print_traceback(
  /* in */ edu_csdms_models_HydroTrend self,
  /* out */ sidl_BaseInterface *_ex);

extern
struct sidl_double__array*
impl_edu_csdms_models_HydroTrend_CMI_get_grid_spacing(
  /* in */ edu_csdms_models_HydroTrend self,
  /* in */ const char* long_var_name,
  /* out */ sidl_BaseInterface *_ex);

extern
struct sidl_double__array*
impl_edu_csdms_models_HydroTrend_get_grid_spacing(
  /* in */ edu_csdms_models_HydroTrend self,
  /* in */ const char* long_var_name,
  /* out */ sidl_BaseInterface *_ex);

extern
struct sidl_double__array*
impl_edu_csdms_models_HydroTrend_CMI_get_grid_lower_left(
  /* in */ edu_csdms_models_HydroTrend self,
  /* in */ const char* long_var_name,
  /* out */ sidl_BaseInterface *_ex);

extern
struct sidl_double__array*
impl_edu_csdms_models_HydroTrend_get_grid_lower_left(
  /* in */ edu_csdms_models_HydroTrend self,
  /* in */ const char* long_var_name,
  /* out */ sidl_BaseInterface *_ex);

extern
struct sidl_int__array*
impl_edu_csdms_models_HydroTrend_CMI_get_grid_shape(
  /* in */ edu_csdms_models_HydroTrend self,
  /* in */ const char* long_var_name,
  /* out */ sidl_BaseInterface *_ex);

extern
struct sidl_int__array*
impl_edu_csdms_models_HydroTrend_get_grid_shape(
  /* in */ edu_csdms_models_HydroTrend self,
  /* in */ const char* long_var_name,
  /* out */ sidl_BaseInterface *_ex);

extern
struct sidl_double__array*
impl_edu_csdms_models_HydroTrend_CMI_get_grid_x(
  /* in */ edu_csdms_models_HydroTrend self,
  /* in */ const char* long_var_name,
  /* out */ sidl_BaseInterface *_ex);

extern
struct sidl_double__array*
impl_edu_csdms_models_HydroTrend_get_grid_x(
  /* in */ edu_csdms_models_HydroTrend self,
  /* in */ const char* long_var_name,
  /* out */ sidl_BaseInterface *_ex);

extern
struct sidl_double__array*
impl_edu_csdms_models_HydroTrend_CMI_get_grid_y(
  /* in */ edu_csdms_models_HydroTrend self,
  /* in */ const char* long_var_name,
  /* out */ sidl_BaseInterface *_ex);

extern
struct sidl_double__array*
impl_edu_csdms_models_HydroTrend_get_grid_y(
  /* in */ edu_csdms_models_HydroTrend self,
  /* in */ const char* long_var_name,
  /* out */ sidl_BaseInterface *_ex);

extern
struct sidl_double__array*
impl_edu_csdms_models_HydroTrend_CMI_get_grid_z(
  /* in */ edu_csdms_models_HydroTrend self,
  /* in */ const char* long_var_name,
  /* out */ sidl_BaseInterface *_ex);

extern
struct sidl_double__array*
impl_edu_csdms_models_HydroTrend_get_grid_z(
  /* in */ edu_csdms_models_HydroTrend self,
  /* in */ const char* long_var_name,
  /* out */ sidl_BaseInterface *_ex);

extern
struct sidl_int__array*
impl_edu_csdms_models_HydroTrend_get_grid_connectivity(
  /* in */ edu_csdms_models_HydroTrend self,
  /* in */ const char* long_var_name,
  /* out */ sidl_BaseInterface *_ex);

extern
struct sidl_int__array*
impl_edu_csdms_models_HydroTrend_get_grid_offset(
  /* in */ edu_csdms_models_HydroTrend self,
  /* in */ const char* long_var_name,
  /* out */ sidl_BaseInterface *_ex);

extern
edu_csdms_cmi_IGrid
impl_edu_csdms_models_HydroTrend_get_grid(
  /* in */ edu_csdms_models_HydroTrend self,
  /* in */ const char* long_var_name,
  /* out */ sidl_BaseInterface *_ex);

extern
struct sidl_double__array*
impl_edu_csdms_models_HydroTrend_get_grid_values(
  /* in */ edu_csdms_models_HydroTrend self,
  /* in */ const char* long_var_name,
  /* out */ sidl_BaseInterface *_ex);

extern
void
impl_edu_csdms_models_HydroTrend_set_grid_values(
  /* in */ edu_csdms_models_HydroTrend self,
  /* in */ const char* long_var_name,
  /* in array<double> */ struct sidl_double__array* vals,
  /* out */ sidl_BaseInterface *_ex);

#ifdef WITH_RMI
extern struct edu_csdms_cmi_ComponentHandler__object* 
  impl_edu_csdms_models_HydroTrend_fconnect_edu_csdms_cmi_ComponentHandler(
  const char* url, sidl_bool ar, sidl_BaseInterface *_ex);
extern struct gov_cca_Services__object* 
  impl_edu_csdms_models_HydroTrend_fconnect_gov_cca_Services(const char* url, 
  sidl_bool ar, sidl_BaseInterface *_ex);
extern struct edu_csdms_tools_Verbose__object* 
  impl_edu_csdms_models_HydroTrend_fconnect_edu_csdms_tools_Verbose(const char* 
  url, sidl_bool ar, sidl_BaseInterface *_ex);
extern struct sidl_BaseInterface__object* 
  impl_edu_csdms_models_HydroTrend_fconnect_sidl_BaseInterface(const char* url, 
  sidl_bool ar, sidl_BaseInterface *_ex);
extern struct gov_cca_ports_ParameterPortFactory__object* 
  impl_edu_csdms_models_HydroTrend_fconnect_gov_cca_ports_ParameterPortFactory(
  const char* url, sidl_bool ar, sidl_BaseInterface *_ex);
extern struct edu_csdms_tools_CMIGridUniformRectilinear__object* 
  impl_edu_csdms_models_HydroTrend_fconnect_edu_csdms_tools_CMIGridUniformRectilinear
  (const char* url, sidl_bool ar, sidl_BaseInterface *_ex);
#endif /*WITH_RMI*/

/* DO-NOT-DELETE splicer.begin(_hmisc) */
/* Insert-Code-Here {_hmisc} (miscellaneous things) */
/* DO-NOT-DELETE splicer.end(_hmisc) */

#ifdef __cplusplus
}
#endif
#endif
