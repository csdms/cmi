/*
 * File:          edu_csdms_models_CEM_IOR.h
 * Symbol:        edu.csdms.models.CEM-v0.0
 * Symbol Type:   class
 * Babel Version: 1.4.0 (Revision: 6607 release-1-4-0-branch)
 * Description:   Intermediate Object Representation for edu.csdms.models.CEM
 * 
 * WARNING: Automatically generated; changes will be lost
 * 
 */

#ifndef included_edu_csdms_models_CEM_IOR_h
#define included_edu_csdms_models_CEM_IOR_h

#ifndef included_sidl_header_h
#include "sidl_header.h"
#endif
struct sidl_rmi_InstanceHandle__object;
#ifndef included_edu_csdms_ports_IRFPort_IOR_h
#include "edu_csdms_ports_IRFPort_IOR.h"
#endif
#ifndef included_gov_cca_Component_IOR_h
#include "gov_cca_Component_IOR.h"
#endif
#ifndef included_gov_cca_ComponentRelease_IOR_h
#include "gov_cca_ComponentRelease_IOR.h"
#endif
#ifndef included_gov_cca_Port_IOR_h
#include "gov_cca_Port_IOR.h"
#endif
#ifndef included_gov_cca_ports_GoPort_IOR_h
#include "gov_cca_ports_GoPort_IOR.h"
#endif
#ifndef included_sidl_BaseClass_IOR_h
#include "sidl_BaseClass_IOR.h"
#endif

#ifdef __cplusplus
extern "C" {
#endif

/*
 * Symbol "edu.csdms.models.CEM" (version 0.0)
 */

struct edu_csdms_models_CEM__array;
struct edu_csdms_models_CEM__object;

/*
 * Forward references for external classes and interfaces.
 */

struct edu_csdms_openmi_IElementSet__array;
struct edu_csdms_openmi_IElementSet__object;
struct edu_csdms_openmi_IScalarSet__array;
struct edu_csdms_openmi_IScalarSet__object;
struct edu_csdms_openmi_IValueSet__array;
struct edu_csdms_openmi_IValueSet__object;
struct edu_csdms_openmi_ScalarSet__array;
struct edu_csdms_openmi_ScalarSet__object;
struct edu_csdms_openmi_ValueSet__array;
struct edu_csdms_openmi_ValueSet__object;
struct edu_csdms_tools_ConfigDialog__array;
struct edu_csdms_tools_ConfigDialog__object;
struct edu_csdms_tools_IRFPortQueue__array;
struct edu_csdms_tools_IRFPortQueue__object;
struct edu_csdms_tools_PrintQueue__array;
struct edu_csdms_tools_PrintQueue__object;
struct edu_csdms_tools_Verbose__array;
struct edu_csdms_tools_Verbose__object;
struct gov_cca_CCAException__array;
struct gov_cca_CCAException__object;
struct gov_cca_Services__array;
struct gov_cca_Services__object;
struct gov_cca_ports_ParameterPortFactory__array;
struct gov_cca_ports_ParameterPortFactory__object;
struct sidl_BaseException__array;
struct sidl_BaseException__object;
struct sidl_BaseInterface__array;
struct sidl_BaseInterface__object;
struct sidl_ClassInfo__array;
struct sidl_ClassInfo__object;
struct sidl_RuntimeException__array;
struct sidl_RuntimeException__object;
struct sidl_rmi_Call__array;
struct sidl_rmi_Call__object;
struct sidl_rmi_Return__array;
struct sidl_rmi_Return__object;

/*
 * Declare the method entry point vector.
 */

struct edu_csdms_models_CEM__epv {
  /* Implicit builtin methods */
  /* 0 */
  void* (*f__cast)(
    /* in */ struct edu_csdms_models_CEM__object* self,
    /* in */ const char* name,
    /* out */ struct sidl_BaseInterface__object **_ex);
  /* 1 */
  void (*f__delete)(
    /* in */ struct edu_csdms_models_CEM__object* self,
    /* out */ struct sidl_BaseInterface__object **_ex);
  /* 2 */
  void (*f__exec)(
    /* in */ struct edu_csdms_models_CEM__object* self,
    /* in */ const char* methodName,
    /* in */ struct sidl_rmi_Call__object* inArgs,
    /* in */ struct sidl_rmi_Return__object* outArgs,
    /* out */ struct sidl_BaseInterface__object **_ex);
  /* 3 */
  char* (*f__getURL)(
    /* in */ struct edu_csdms_models_CEM__object* self,
    /* out */ struct sidl_BaseInterface__object **_ex);
  /* 4 */
  void (*f__raddRef)(
    /* in */ struct edu_csdms_models_CEM__object* self,
    /* out */ struct sidl_BaseInterface__object **_ex);
  /* 5 */
  sidl_bool (*f__isRemote)(
    /* in */ struct edu_csdms_models_CEM__object* self,
    /* out */ struct sidl_BaseInterface__object **_ex);
  /* 6 */
  void (*f__set_hooks)(
    /* in */ struct edu_csdms_models_CEM__object* self,
    /* in */ sidl_bool enable,
    /* out */ struct sidl_BaseInterface__object **_ex);
  /* 7 */
  void (*f__set_contracts)(
    /* in */ struct edu_csdms_models_CEM__object* self,
    /* in */ sidl_bool enable,
    /* in */ const char* enfFilename,
    /* in */ sidl_bool resetCounters,
    /* out */ struct sidl_BaseInterface__object **_ex);
  /* 8 */
  void (*f__dump_stats)(
    /* in */ struct edu_csdms_models_CEM__object* self,
    /* in */ const char* filename,
    /* in */ const char* prefix,
    /* out */ struct sidl_BaseInterface__object **_ex);
  /* 9 */
  void (*f__ctor)(
    /* in */ struct edu_csdms_models_CEM__object* self,
    /* out */ struct sidl_BaseInterface__object **_ex);
  /* 10 */
  void (*f__ctor2)(
    /* in */ struct edu_csdms_models_CEM__object* self,
    /* in */ void* private_data,
    /* out */ struct sidl_BaseInterface__object **_ex);
  /* 11 */
  void (*f__dtor)(
    /* in */ struct edu_csdms_models_CEM__object* self,
    /* out */ struct sidl_BaseInterface__object **_ex);
  /* 12 */
  void (*f__load)(
    /* out */ struct sidl_BaseInterface__object **_ex);
  /* Methods introduced in sidl.BaseInterface-v0.9.17 */
  void (*f_addRef)(
    /* in */ struct edu_csdms_models_CEM__object* self,
    /* out */ struct sidl_BaseInterface__object **_ex);
  void (*f_deleteRef)(
    /* in */ struct edu_csdms_models_CEM__object* self,
    /* out */ struct sidl_BaseInterface__object **_ex);
  sidl_bool (*f_isSame)(
    /* in */ struct edu_csdms_models_CEM__object* self,
    /* in */ struct sidl_BaseInterface__object* iobj,
    /* out */ struct sidl_BaseInterface__object **_ex);
  sidl_bool (*f_isType)(
    /* in */ struct edu_csdms_models_CEM__object* self,
    /* in */ const char* name,
    /* out */ struct sidl_BaseInterface__object **_ex);
  struct sidl_ClassInfo__object* (*f_getClassInfo)(
    /* in */ struct edu_csdms_models_CEM__object* self,
    /* out */ struct sidl_BaseInterface__object **_ex);
  /* Methods introduced in sidl.BaseClass-v0.9.17 */
  /* Methods introduced in gov.cca.Port-v0.8.5 */
  /* Methods introduced in edu.csdms.ports.IRFPort-v0.0 */
  void (*f_initialize)(
    /* in */ struct edu_csdms_models_CEM__object* self,
    /* in array<string> */ struct sidl_string__array* properties,
    /* out */ struct sidl_BaseInterface__object **_ex);
  void (*f_run)(
    /* in */ struct edu_csdms_models_CEM__object* self,
    /* in */ double time,
    /* out */ struct sidl_BaseInterface__object **_ex);
  void (*f_finalize)(
    /* in */ struct edu_csdms_models_CEM__object* self,
    /* out */ struct sidl_BaseInterface__object **_ex);
  int64_t (*f_getRaster_nx)(
    /* in */ struct edu_csdms_models_CEM__object* self,
    /* out */ struct sidl_BaseInterface__object **_ex);
  int64_t (*f_getRaster_ny)(
    /* in */ struct edu_csdms_models_CEM__object* self,
    /* out */ struct sidl_BaseInterface__object **_ex);
  double (*f_getRaster_dx)(
    /* in */ struct edu_csdms_models_CEM__object* self,
    /* out */ struct sidl_BaseInterface__object **_ex);
  double (*f_getRaster_dy)(
    /* in */ struct edu_csdms_models_CEM__object* self,
    /* out */ struct sidl_BaseInterface__object **_ex);
  double (*f_getRaster_ulx)(
    /* in */ struct edu_csdms_models_CEM__object* self,
    /* out */ struct sidl_BaseInterface__object **_ex);
  double (*f_getRaster_uly)(
    /* in */ struct edu_csdms_models_CEM__object* self,
    /* out */ struct sidl_BaseInterface__object **_ex);
  struct sidl_double__array* (*f_getRaster_grid)(
    /* in */ struct edu_csdms_models_CEM__object* self,
    /* in */ const char* val_string,
    /* out */ struct sidl_BaseInterface__object **_ex);
  struct sidl_int__array* (*f_get_raster_dimen)(
    /* in */ struct edu_csdms_models_CEM__object* self,
    /* in */ const char* val_string,
    /* out */ struct sidl_BaseInterface__object **_ex);
  struct sidl_double__array* (*f_get_raster_res)(
    /* in */ struct edu_csdms_models_CEM__object* self,
    /* in */ const char* val_string,
    /* out */ struct sidl_BaseInterface__object **_ex);
  struct sidl__array* (*f_get_raster_data)(
    /* in */ struct edu_csdms_models_CEM__object* self,
    /* in */ const char* val_string,
    /* out */ struct sidl_BaseInterface__object **_ex);
  struct sidl_double__array* (*f_get_time_span)(
    /* in */ struct edu_csdms_models_CEM__object* self,
    /* out */ struct sidl_BaseInterface__object **_ex);
  struct edu_csdms_openmi_IElementSet__object* (*f_get_element_set)(
    /* in */ struct edu_csdms_models_CEM__object* self,
    /* in */ const char* val_string,
    /* out */ struct sidl_BaseInterface__object **_ex);
  struct edu_csdms_openmi_IValueSet__object* (*f_get_value_set)(
    /* in */ struct edu_csdms_models_CEM__object* self,
    /* in */ const char* val_string,
    /* out */ struct sidl_BaseInterface__object **_ex);
  struct sidl__array* (*f_get_value_set_data)(
    /* in */ struct edu_csdms_models_CEM__object* self,
    /* in */ const char* val_string,
    /* out */ struct sidl_BaseInterface__object **_ex);
  void (*f_set_value_set)(
    /* in */ struct edu_csdms_models_CEM__object* self,
    /* in */ const char* val_string,
    /* in */ struct edu_csdms_openmi_IValueSet__object* values,
    /* out */ struct sidl_BaseInterface__object **_ex);
  /* Methods introduced in gov.cca.Component-v0.8.5 */
  void (*f_setServices)(
    /* in */ struct edu_csdms_models_CEM__object* self,
    /* in */ struct gov_cca_Services__object* services,
    /* out */ struct sidl_BaseInterface__object **_ex);
  /* Methods introduced in gov.cca.ComponentRelease-v0.8.5 */
  void (*f_releaseServices)(
    /* in */ struct edu_csdms_models_CEM__object* self,
    /* in */ struct gov_cca_Services__object* services,
    /* out */ struct sidl_BaseInterface__object **_ex);
  /* Methods introduced in gov.cca.ports.GoPort-v0.0 */
  int32_t (*f_go)(
    /* in */ struct edu_csdms_models_CEM__object* self,
    /* out */ struct sidl_BaseInterface__object **_ex);
  /* Methods introduced in edu.csdms.models.CEM-v0.0 */
  void (*f_boccaSetServices)(
    /* in */ struct edu_csdms_models_CEM__object* self,
    /* in */ struct gov_cca_Services__object* services,
    /* out */ struct sidl_BaseInterface__object **_ex);
  void (*f_boccaReleaseServices)(
    /* in */ struct edu_csdms_models_CEM__object* self,
    /* in */ struct gov_cca_Services__object* services,
    /* out */ struct sidl_BaseInterface__object **_ex);
  void (*f_checkException)(
    /* in */ struct edu_csdms_models_CEM__object* self,
    /* in */ struct sidl_BaseInterface__object* excpt,
    /* in */ const char* msg,
    /* in */ sidl_bool fatal,
    /* out */ struct sidl_BaseInterface__object **_ex);
  void (*f_boccaForceUsePortInclude)(
    /* in */ struct edu_csdms_models_CEM__object* self,
    /* in */ struct gov_cca_ports_ParameterPortFactory__object* dummy0,
    /* in */ struct edu_csdms_ports_IRFPort__object* dummy1,
    /* in */ struct edu_csdms_ports_IRFPort__object* dummy2,
    /* in */ struct edu_csdms_tools_IRFPortQueue__object* dummy3,
    /* in */ struct edu_csdms_tools_Verbose__object* dummy4,
    /* in */ struct edu_csdms_openmi_ValueSet__object* dummy5,
    /* in */ struct edu_csdms_openmi_ScalarSet__object* dummy6,
    /* in */ struct edu_csdms_tools_ConfigDialog__object* dummy7,
    /* in */ struct edu_csdms_openmi_IScalarSet__object* dummy8,
    /* in */ struct edu_csdms_tools_PrintQueue__object* dummy9,
    /* out */ struct sidl_BaseInterface__object **_ex);
};

/*
 * Declare the method pre hooks entry point vector.
 */

struct edu_csdms_models_CEM__pre_epv {
  void (*f_boccaSetServices_pre)(
    /* in */ struct edu_csdms_models_CEM__object* self,
    /* in */ struct gov_cca_Services__object* services,
    /* out */ struct sidl_BaseInterface__object **_ex);
  void (*f_boccaReleaseServices_pre)(
    /* in */ struct edu_csdms_models_CEM__object* self,
    /* in */ struct gov_cca_Services__object* services,
    /* out */ struct sidl_BaseInterface__object **_ex);
  void (*f_checkException_pre)(
    /* in */ struct edu_csdms_models_CEM__object* self,
    /* in */ struct sidl_BaseInterface__object* excpt,
    /* in */ const char* msg,
    /* in */ sidl_bool fatal,
    /* out */ struct sidl_BaseInterface__object **_ex);
  void (*f_boccaForceUsePortInclude_pre)(
    /* in */ struct edu_csdms_models_CEM__object* self,
    /* in */ struct gov_cca_ports_ParameterPortFactory__object* dummy0,
    /* in */ struct edu_csdms_ports_IRFPort__object* dummy1,
    /* in */ struct edu_csdms_ports_IRFPort__object* dummy2,
    /* in */ struct edu_csdms_tools_IRFPortQueue__object* dummy3,
    /* in */ struct edu_csdms_tools_Verbose__object* dummy4,
    /* in */ struct edu_csdms_openmi_ValueSet__object* dummy5,
    /* in */ struct edu_csdms_openmi_ScalarSet__object* dummy6,
    /* in */ struct edu_csdms_tools_ConfigDialog__object* dummy7,
    /* in */ struct edu_csdms_openmi_IScalarSet__object* dummy8,
    /* in */ struct edu_csdms_tools_PrintQueue__object* dummy9,
    /* out */ struct sidl_BaseInterface__object **_ex);
  void (*f_setServices_pre)(
    /* in */ struct edu_csdms_models_CEM__object* self,
    /* in */ struct gov_cca_Services__object* services,
    /* out */ struct sidl_BaseInterface__object **_ex);
  void (*f_releaseServices_pre)(
    /* in */ struct edu_csdms_models_CEM__object* self,
    /* in */ struct gov_cca_Services__object* services,
    /* out */ struct sidl_BaseInterface__object **_ex);
  void (*f_go_pre)(
    /* in */ struct edu_csdms_models_CEM__object* self,
    /* out */ struct sidl_BaseInterface__object **_ex);
  void (*f_initialize_pre)(
    /* in */ struct edu_csdms_models_CEM__object* self,
    /* in array<string> */ struct sidl_string__array* properties,
    /* out */ struct sidl_BaseInterface__object **_ex);
  void (*f_run_pre)(
    /* in */ struct edu_csdms_models_CEM__object* self,
    /* in */ double time,
    /* out */ struct sidl_BaseInterface__object **_ex);
  void (*f_finalize_pre)(
    /* in */ struct edu_csdms_models_CEM__object* self,
    /* out */ struct sidl_BaseInterface__object **_ex);
  void (*f_getRaster_nx_pre)(
    /* in */ struct edu_csdms_models_CEM__object* self,
    /* out */ struct sidl_BaseInterface__object **_ex);
  void (*f_getRaster_ny_pre)(
    /* in */ struct edu_csdms_models_CEM__object* self,
    /* out */ struct sidl_BaseInterface__object **_ex);
  void (*f_getRaster_dx_pre)(
    /* in */ struct edu_csdms_models_CEM__object* self,
    /* out */ struct sidl_BaseInterface__object **_ex);
  void (*f_getRaster_dy_pre)(
    /* in */ struct edu_csdms_models_CEM__object* self,
    /* out */ struct sidl_BaseInterface__object **_ex);
  void (*f_getRaster_ulx_pre)(
    /* in */ struct edu_csdms_models_CEM__object* self,
    /* out */ struct sidl_BaseInterface__object **_ex);
  void (*f_getRaster_uly_pre)(
    /* in */ struct edu_csdms_models_CEM__object* self,
    /* out */ struct sidl_BaseInterface__object **_ex);
  void (*f_getRaster_grid_pre)(
    /* in */ struct edu_csdms_models_CEM__object* self,
    /* in */ const char* val_string,
    /* out */ struct sidl_BaseInterface__object **_ex);
  void (*f_get_raster_dimen_pre)(
    /* in */ struct edu_csdms_models_CEM__object* self,
    /* in */ const char* val_string,
    /* out */ struct sidl_BaseInterface__object **_ex);
  void (*f_get_raster_res_pre)(
    /* in */ struct edu_csdms_models_CEM__object* self,
    /* in */ const char* val_string,
    /* out */ struct sidl_BaseInterface__object **_ex);
  void (*f_get_raster_data_pre)(
    /* in */ struct edu_csdms_models_CEM__object* self,
    /* in */ const char* val_string,
    /* out */ struct sidl_BaseInterface__object **_ex);
  void (*f_get_time_span_pre)(
    /* in */ struct edu_csdms_models_CEM__object* self,
    /* out */ struct sidl_BaseInterface__object **_ex);
  void (*f_get_element_set_pre)(
    /* in */ struct edu_csdms_models_CEM__object* self,
    /* in */ const char* val_string,
    /* out */ struct sidl_BaseInterface__object **_ex);
  void (*f_get_value_set_pre)(
    /* in */ struct edu_csdms_models_CEM__object* self,
    /* in */ const char* val_string,
    /* out */ struct sidl_BaseInterface__object **_ex);
  void (*f_get_value_set_data_pre)(
    /* in */ struct edu_csdms_models_CEM__object* self,
    /* in */ const char* val_string,
    /* out */ struct sidl_BaseInterface__object **_ex);
  void (*f_set_value_set_pre)(
    /* in */ struct edu_csdms_models_CEM__object* self,
    /* in */ const char* val_string,
    /* in */ struct edu_csdms_openmi_IValueSet__object* values,
    /* out */ struct sidl_BaseInterface__object **_ex);
};

/*
 * Declare the method post hooks entry point vector.
 */

struct edu_csdms_models_CEM__post_epv {
  void (*f_boccaSetServices_post)(
    /* in */ struct edu_csdms_models_CEM__object* self,
    /* in */ struct gov_cca_Services__object* services,
    /* out */ struct sidl_BaseInterface__object **_ex);
  void (*f_boccaReleaseServices_post)(
    /* in */ struct edu_csdms_models_CEM__object* self,
    /* in */ struct gov_cca_Services__object* services,
    /* out */ struct sidl_BaseInterface__object **_ex);
  void (*f_checkException_post)(
    /* in */ struct edu_csdms_models_CEM__object* self,
    /* in */ struct sidl_BaseInterface__object* excpt,
    /* in */ const char* msg,
    /* in */ sidl_bool fatal,
    /* out */ struct sidl_BaseInterface__object **_ex);
  void (*f_boccaForceUsePortInclude_post)(
    /* in */ struct edu_csdms_models_CEM__object* self,
    /* in */ struct gov_cca_ports_ParameterPortFactory__object* dummy0,
    /* in */ struct edu_csdms_ports_IRFPort__object* dummy1,
    /* in */ struct edu_csdms_ports_IRFPort__object* dummy2,
    /* in */ struct edu_csdms_tools_IRFPortQueue__object* dummy3,
    /* in */ struct edu_csdms_tools_Verbose__object* dummy4,
    /* in */ struct edu_csdms_openmi_ValueSet__object* dummy5,
    /* in */ struct edu_csdms_openmi_ScalarSet__object* dummy6,
    /* in */ struct edu_csdms_tools_ConfigDialog__object* dummy7,
    /* in */ struct edu_csdms_openmi_IScalarSet__object* dummy8,
    /* in */ struct edu_csdms_tools_PrintQueue__object* dummy9,
    /* out */ struct sidl_BaseInterface__object **_ex);
  void (*f_setServices_post)(
    /* in */ struct edu_csdms_models_CEM__object* self,
    /* in */ struct gov_cca_Services__object* services,
    /* out */ struct sidl_BaseInterface__object **_ex);
  void (*f_releaseServices_post)(
    /* in */ struct edu_csdms_models_CEM__object* self,
    /* in */ struct gov_cca_Services__object* services,
    /* out */ struct sidl_BaseInterface__object **_ex);
  void (*f_go_post)(
    /* in */ struct edu_csdms_models_CEM__object* self,
    /* in */ int32_t _retval,
    /* out */ struct sidl_BaseInterface__object **_ex);
  void (*f_initialize_post)(
    /* in */ struct edu_csdms_models_CEM__object* self,
    /* in array<string> */ struct sidl_string__array* properties,
    /* out */ struct sidl_BaseInterface__object **_ex);
  void (*f_run_post)(
    /* in */ struct edu_csdms_models_CEM__object* self,
    /* in */ double time,
    /* out */ struct sidl_BaseInterface__object **_ex);
  void (*f_finalize_post)(
    /* in */ struct edu_csdms_models_CEM__object* self,
    /* out */ struct sidl_BaseInterface__object **_ex);
  void (*f_getRaster_nx_post)(
    /* in */ struct edu_csdms_models_CEM__object* self,
    /* in */ int64_t _retval,
    /* out */ struct sidl_BaseInterface__object **_ex);
  void (*f_getRaster_ny_post)(
    /* in */ struct edu_csdms_models_CEM__object* self,
    /* in */ int64_t _retval,
    /* out */ struct sidl_BaseInterface__object **_ex);
  void (*f_getRaster_dx_post)(
    /* in */ struct edu_csdms_models_CEM__object* self,
    /* in */ double _retval,
    /* out */ struct sidl_BaseInterface__object **_ex);
  void (*f_getRaster_dy_post)(
    /* in */ struct edu_csdms_models_CEM__object* self,
    /* in */ double _retval,
    /* out */ struct sidl_BaseInterface__object **_ex);
  void (*f_getRaster_ulx_post)(
    /* in */ struct edu_csdms_models_CEM__object* self,
    /* in */ double _retval,
    /* out */ struct sidl_BaseInterface__object **_ex);
  void (*f_getRaster_uly_post)(
    /* in */ struct edu_csdms_models_CEM__object* self,
    /* in */ double _retval,
    /* out */ struct sidl_BaseInterface__object **_ex);
  void (*f_getRaster_grid_post)(
    /* in */ struct edu_csdms_models_CEM__object* self,
    /* in */ const char* val_string,
    /* in array<double,2> */ struct sidl_double__array* _retval,
    /* out */ struct sidl_BaseInterface__object **_ex);
  void (*f_get_raster_dimen_post)(
    /* in */ struct edu_csdms_models_CEM__object* self,
    /* in */ const char* val_string,
    /* in array<int> */ struct sidl_int__array* _retval,
    /* out */ struct sidl_BaseInterface__object **_ex);
  void (*f_get_raster_res_post)(
    /* in */ struct edu_csdms_models_CEM__object* self,
    /* in */ const char* val_string,
    /* in array<double> */ struct sidl_double__array* _retval,
    /* out */ struct sidl_BaseInterface__object **_ex);
  void (*f_get_raster_data_post)(
    /* in */ struct edu_csdms_models_CEM__object* self,
    /* in */ const char* val_string,
    /* in array<> */ struct sidl__array* _retval,
    /* out */ struct sidl_BaseInterface__object **_ex);
  void (*f_get_time_span_post)(
    /* in */ struct edu_csdms_models_CEM__object* self,
    /* in array<double> */ struct sidl_double__array* _retval,
    /* out */ struct sidl_BaseInterface__object **_ex);
  void (*f_get_element_set_post)(
    /* in */ struct edu_csdms_models_CEM__object* self,
    /* in */ const char* val_string,
    /* in */ struct edu_csdms_openmi_IElementSet__object* _retval,
    /* out */ struct sidl_BaseInterface__object **_ex);
  void (*f_get_value_set_post)(
    /* in */ struct edu_csdms_models_CEM__object* self,
    /* in */ const char* val_string,
    /* in */ struct edu_csdms_openmi_IValueSet__object* _retval,
    /* out */ struct sidl_BaseInterface__object **_ex);
  void (*f_get_value_set_data_post)(
    /* in */ struct edu_csdms_models_CEM__object* self,
    /* in */ const char* val_string,
    /* in array<> */ struct sidl__array* _retval,
    /* out */ struct sidl_BaseInterface__object **_ex);
  void (*f_set_value_set_post)(
    /* in */ struct edu_csdms_models_CEM__object* self,
    /* in */ const char* val_string,
    /* in */ struct edu_csdms_openmi_IValueSet__object* values,
    /* out */ struct sidl_BaseInterface__object **_ex);
};

/*
 * Define the controls and statistics structure.
 */


struct edu_csdms_models_CEM__cstats {
  sidl_bool use_hooks;
};

/*
 * Define the class object structure.
 */

struct edu_csdms_models_CEM__object {
  struct sidl_BaseClass__object           d_sidl_baseclass;
  struct edu_csdms_ports_IRFPort__object  d_edu_csdms_ports_irfport;
  struct gov_cca_Component__object        d_gov_cca_component;
  struct gov_cca_ComponentRelease__object d_gov_cca_componentrelease;
  struct gov_cca_Port__object             d_gov_cca_port;
  struct gov_cca_ports_GoPort__object     d_gov_cca_ports_goport;
  struct edu_csdms_models_CEM__epv*       d_epv;
  struct edu_csdms_models_CEM__cstats     d_cstats;
  void*                                   d_data;
};

struct edu_csdms_models_CEM__external {
  struct edu_csdms_models_CEM__object*
  (*createObject)(void* ddata, struct sidl_BaseInterface__object **_ex);

  struct sidl_BaseClass__epv*(*getSuperEPV)(void);
  int d_ior_major_version;
  int d_ior_minor_version;
};

/*
 * This function returns a pointer to a static structure of
 * pointers to function entry points.  Its purpose is to provide
 * one-stop shopping for loading DLLs.
 */

const struct edu_csdms_models_CEM__external*
edu_csdms_models_CEM__externals(void);

extern struct edu_csdms_models_CEM__object*
edu_csdms_models_CEM__createObject(void* ddata,struct 
  sidl_BaseInterface__object ** _ex);

extern void edu_csdms_models_CEM__init(
  struct edu_csdms_models_CEM__object* self, void* ddata, struct 
    sidl_BaseInterface__object ** _ex);

extern void edu_csdms_models_CEM__getEPVs(
  struct sidl_BaseInterface__epv **s_arg_epv__sidl_baseinterface,
  struct sidl_BaseClass__epv **s_arg_epv__sidl_baseclass,
  struct edu_csdms_ports_IRFPort__epv **s_arg_epv__edu_csdms_ports_irfport,
  struct edu_csdms_ports_IRFPort__epv 
    **s_arg_epv_hooks__edu_csdms_ports_irfport,
  struct gov_cca_Component__epv **s_arg_epv__gov_cca_component,
  struct gov_cca_Component__epv **s_arg_epv_hooks__gov_cca_component,
  struct gov_cca_ComponentRelease__epv **s_arg_epv__gov_cca_componentrelease,
  struct gov_cca_ComponentRelease__epv 
    **s_arg_epv_hooks__gov_cca_componentrelease,
  struct gov_cca_Port__epv **s_arg_epv__gov_cca_port,
  struct gov_cca_Port__epv **s_arg_epv_hooks__gov_cca_port,
  struct gov_cca_ports_GoPort__epv **s_arg_epv__gov_cca_ports_goport,
  struct gov_cca_ports_GoPort__epv **s_arg_epv_hooks__gov_cca_ports_goport,
  struct edu_csdms_models_CEM__epv **s_arg_epv__edu_csdms_models_cem,
  struct edu_csdms_models_CEM__epv **s_arg_epv_hooks__edu_csdms_models_cem);

extern void edu_csdms_models_CEM__fini(
  struct edu_csdms_models_CEM__object* self, struct sidl_BaseInterface__object 
    ** _ex);

extern void edu_csdms_models_CEM__IOR_version(int32_t *major, int32_t *minor);

struct edu_csdms_tools_ConfigDialog__object* 
  skel_edu_csdms_models_CEM_fconnect_edu_csdms_tools_ConfigDialog(const char* 
  url, sidl_bool ar, struct sidl_BaseInterface__object * *_ex);
struct gov_cca_Services__object* 
  skel_edu_csdms_models_CEM_fconnect_gov_cca_Services(const char* url, 
  sidl_bool ar, struct sidl_BaseInterface__object * *_ex);
struct edu_csdms_tools_PrintQueue__object* 
  skel_edu_csdms_models_CEM_fconnect_edu_csdms_tools_PrintQueue(const char* url,
  sidl_bool ar, struct sidl_BaseInterface__object * *_ex);
struct edu_csdms_openmi_IScalarSet__object* 
  skel_edu_csdms_models_CEM_fconnect_edu_csdms_openmi_IScalarSet(const char* 
  url, sidl_bool ar, struct sidl_BaseInterface__object * *_ex);
struct edu_csdms_tools_Verbose__object* 
  skel_edu_csdms_models_CEM_fconnect_edu_csdms_tools_Verbose(const char* url, 
  sidl_bool ar, struct sidl_BaseInterface__object * *_ex);
struct edu_csdms_ports_IRFPort__object* 
  skel_edu_csdms_models_CEM_fconnect_edu_csdms_ports_IRFPort(const char* url, 
  sidl_bool ar, struct sidl_BaseInterface__object * *_ex);
struct edu_csdms_openmi_ScalarSet__object* 
  skel_edu_csdms_models_CEM_fconnect_edu_csdms_openmi_ScalarSet(const char* url,
  sidl_bool ar, struct sidl_BaseInterface__object * *_ex);
struct edu_csdms_openmi_ValueSet__object* 
  skel_edu_csdms_models_CEM_fconnect_edu_csdms_openmi_ValueSet(const char* url, 
  sidl_bool ar, struct sidl_BaseInterface__object * *_ex);
struct sidl_BaseInterface__object* 
  skel_edu_csdms_models_CEM_fconnect_sidl_BaseInterface(const char* url, 
  sidl_bool ar, struct sidl_BaseInterface__object * *_ex);
struct edu_csdms_tools_IRFPortQueue__object* 
  skel_edu_csdms_models_CEM_fconnect_edu_csdms_tools_IRFPortQueue(const char* 
  url, sidl_bool ar, struct sidl_BaseInterface__object * *_ex);
struct gov_cca_ports_ParameterPortFactory__object* 
  skel_edu_csdms_models_CEM_fconnect_gov_cca_ports_ParameterPortFactory(const 
  char* url, sidl_bool ar, struct sidl_BaseInterface__object * *_ex);
struct edu_csdms_openmi_IValueSet__object* 
  skel_edu_csdms_models_CEM_fconnect_edu_csdms_openmi_IValueSet(const char* url,
  sidl_bool ar, struct sidl_BaseInterface__object * *_ex);
struct edu_csdms_models_CEM__remote{
  int d_refcount;
  struct sidl_rmi_InstanceHandle__object *d_ih;
};

#ifdef __cplusplus
}
#endif
#endif
