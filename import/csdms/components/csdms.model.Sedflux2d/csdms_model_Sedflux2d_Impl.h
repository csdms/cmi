/*
 * File:          csdms_model_Sedflux2d_Impl.h
 * Symbol:        csdms.model.Sedflux2d-v0.0
 * Symbol Type:   class
 * Babel Version: 1.4.0 (Revision: 6607 release-1-4-0-branch)
 * Description:   Server-side implementation for csdms.model.Sedflux2d
 * 
 * WARNING: Automatically generated; only changes within splicers preserved
 * 
 */

#ifndef included_csdms_model_Sedflux2d_Impl_h
#define included_csdms_model_Sedflux2d_Impl_h

#ifndef included_sidl_header_h
#include "sidl_header.h"
#endif
#ifndef included_csdms_core_Bmi_h
#include "csdms_core_Bmi.h"
#endif
#ifndef included_csdms_model_Sedflux2d_h
#include "csdms_model_Sedflux2d.h"
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
/* DO-NOT-DELETE splicer.begin(csdms.model.Sedflux2d._hincludes) */
/* Insert-Code-Here {csdms.model.Sedflux2d._hincludes} (include files) */
#include <bmi_sedflux2d.h>

#define _CALL_BMI(prefix, func, ...) { \
  int status = prefix##_##func(__VA_ARGS__); \
  if (status != 0) { \
    fprintf(stderr, "Error running " #func "\n"); \
    SIDL_THROW(*_ex, sidl_NotImplementedException, "Error running " #func " "); \
  } \
}

#define _PRIVATE_METHOD(clazz, func) csdms_model_##clazz##_##func

#define _GET_PRIVATE_DATA(clazz, var) \
  struct csdms_model_##clazz##__data *var = \
      csdms_model_##clazz##__get_data(self);

#define PRIVATE_METHOD(func) _PRIVATE_METHOD(Sedflux2d, func)

#define CALL_BMI(func, ...) _CALL_BMI(BMI_SEDFLUX2D, func, __VA_ARGS__)
#define GET_PRIVATE_DATA(var) _GET_PRIVATE_DATA(Sedflux2d, var)

/* DO-NOT-DELETE splicer.end(csdms.model.Sedflux2d._hincludes) */

/*
 * Private data for class csdms.model.Sedflux2d
 */

struct csdms_model_Sedflux2d__data {
  /* DO-NOT-DELETE splicer.begin(csdms.model.Sedflux2d._data) */
  /* Insert-Code-Here {csdms.model.Sedflux2d._data} (private data members) */
  BMI_Model *state;
  int ignore; /* dummy to force non-empty struct; remove if you add data */
  /* DO-NOT-DELETE splicer.end(csdms.model.Sedflux2d._data) */
};

#ifdef __cplusplus
extern "C" {
#endif

/*
 * Access functions for class private data and built-in methods
 */

extern struct csdms_model_Sedflux2d__data*
csdms_model_Sedflux2d__get_data(
  csdms_model_Sedflux2d);

extern void
csdms_model_Sedflux2d__set_data(
  csdms_model_Sedflux2d,
  struct csdms_model_Sedflux2d__data*);

extern
void
impl_csdms_model_Sedflux2d__load(
  /* out */ sidl_BaseInterface *_ex);

extern
void
impl_csdms_model_Sedflux2d__ctor(
  /* in */ csdms_model_Sedflux2d self,
  /* out */ sidl_BaseInterface *_ex);

extern
void
impl_csdms_model_Sedflux2d__ctor2(
  /* in */ csdms_model_Sedflux2d self,
  /* in */ void* private_data,
  /* out */ sidl_BaseInterface *_ex);

extern
void
impl_csdms_model_Sedflux2d__dtor(
  /* in */ csdms_model_Sedflux2d self,
  /* out */ sidl_BaseInterface *_ex);

/*
 * User-defined object methods
 */

#ifdef WITH_RMI
extern struct sidl_BaseInterface__object* 
  impl_csdms_model_Sedflux2d_fconnect_sidl_BaseInterface(const char* url, 
  sidl_bool ar, sidl_BaseInterface *_ex);
#endif /*WITH_RMI*/
extern
void
impl_csdms_model_Sedflux2d_boccaForceUsePortInclude(
  /* in */ csdms_model_Sedflux2d self,
  /* out */ sidl_BaseInterface *_ex);

extern
sidl_bool
impl_csdms_model_Sedflux2d_initialize(
  /* in */ csdms_model_Sedflux2d self,
  /* in */ const char* config_file,
  /* out */ sidl_BaseInterface *_ex);

extern
sidl_bool
impl_csdms_model_Sedflux2d_update(
  /* in */ csdms_model_Sedflux2d self,
  /* in */ double time_interval,
  /* out */ sidl_BaseInterface *_ex);

extern
sidl_bool
impl_csdms_model_Sedflux2d_finalize(
  /* in */ csdms_model_Sedflux2d self,
  /* out */ sidl_BaseInterface *_ex);

extern
double
impl_csdms_model_Sedflux2d_get_start_time(
  /* in */ csdms_model_Sedflux2d self,
  /* out */ sidl_BaseInterface *_ex);

extern
double
impl_csdms_model_Sedflux2d_get_current_time(
  /* in */ csdms_model_Sedflux2d self,
  /* out */ sidl_BaseInterface *_ex);

extern
double
impl_csdms_model_Sedflux2d_get_end_time(
  /* in */ csdms_model_Sedflux2d self,
  /* out */ sidl_BaseInterface *_ex);

extern
struct sidl__array*
impl_csdms_model_Sedflux2d_get_values(
  /* in */ csdms_model_Sedflux2d self,
  /* in */ const char* long_var_name,
  /* out */ sidl_BaseInterface *_ex);

extern
void
impl_csdms_model_Sedflux2d_set_values(
  /* in */ csdms_model_Sedflux2d self,
  /* in */ const char* long_var_name,
  /* in array<> */ struct sidl__array* in_values,
  /* out */ sidl_BaseInterface *_ex);

extern
char*
impl_csdms_model_Sedflux2d_get_component_name(
  /* in */ csdms_model_Sedflux2d self,
  /* out */ sidl_BaseInterface *_ex);

extern
int32_t
impl_csdms_model_Sedflux2d_get_input_item_count(
  /* in */ csdms_model_Sedflux2d self,
  /* out */ sidl_BaseInterface *_ex);

extern
struct sidl_string__array*
impl_csdms_model_Sedflux2d_get_input_item_list(
  /* in */ csdms_model_Sedflux2d self,
  /* out */ sidl_BaseInterface *_ex);

extern
int32_t
impl_csdms_model_Sedflux2d_get_output_item_count(
  /* in */ csdms_model_Sedflux2d self,
  /* out */ sidl_BaseInterface *_ex);

extern
struct sidl_string__array*
impl_csdms_model_Sedflux2d_get_output_item_list(
  /* in */ csdms_model_Sedflux2d self,
  /* out */ sidl_BaseInterface *_ex);

extern
struct sidl__array*
impl_csdms_model_Sedflux2d_get_values_at_indices(
  /* in */ csdms_model_Sedflux2d self,
  /* in */ const char* long_var_name,
  /* in array<int> */ struct sidl_int__array* indices,
  /* out */ sidl_BaseInterface *_ex);

extern
void
impl_csdms_model_Sedflux2d_set_values_at_indices(
  /* in */ csdms_model_Sedflux2d self,
  /* in */ const char* long_var_name,
  /* in array<int> */ struct sidl_int__array* indices,
  /* in array<> */ struct sidl__array* in_values,
  /* out */ sidl_BaseInterface *_ex);

extern
int32_t
impl_csdms_model_Sedflux2d_get_grid_rank(
  /* in */ csdms_model_Sedflux2d self,
  /* in */ const char* long_var_name,
  /* out */ sidl_BaseInterface *_ex);

extern
struct sidl_double__array*
impl_csdms_model_Sedflux2d_get_grid_spacing(
  /* in */ csdms_model_Sedflux2d self,
  /* in */ const char* long_var_name,
  /* out */ sidl_BaseInterface *_ex);

extern
struct sidl_double__array*
impl_csdms_model_Sedflux2d_get_grid_origin(
  /* in */ csdms_model_Sedflux2d self,
  /* in */ const char* long_var_name,
  /* out */ sidl_BaseInterface *_ex);

extern
struct sidl_int__array*
impl_csdms_model_Sedflux2d_get_grid_shape(
  /* in */ csdms_model_Sedflux2d self,
  /* in */ const char* long_var_name,
  /* out */ sidl_BaseInterface *_ex);

extern
struct sidl_double__array*
impl_csdms_model_Sedflux2d_get_grid_x(
  /* in */ csdms_model_Sedflux2d self,
  /* in */ const char* long_var_name,
  /* out */ sidl_BaseInterface *_ex);

extern
struct sidl_double__array*
impl_csdms_model_Sedflux2d_get_grid_y(
  /* in */ csdms_model_Sedflux2d self,
  /* in */ const char* long_var_name,
  /* out */ sidl_BaseInterface *_ex);

extern
struct sidl_double__array*
impl_csdms_model_Sedflux2d_get_grid_z(
  /* in */ csdms_model_Sedflux2d self,
  /* in */ const char* long_var_name,
  /* out */ sidl_BaseInterface *_ex);

extern
struct sidl_int__array*
impl_csdms_model_Sedflux2d_get_grid_connectivity(
  /* in */ csdms_model_Sedflux2d self,
  /* in */ const char* long_var_name,
  /* out */ sidl_BaseInterface *_ex);

extern
struct sidl_int__array*
impl_csdms_model_Sedflux2d_get_grid_offset(
  /* in */ csdms_model_Sedflux2d self,
  /* in */ const char* long_var_name,
  /* out */ sidl_BaseInterface *_ex);

extern
struct sidl_double__array*
impl_csdms_model_Sedflux2d_get_grid_values(
  /* in */ csdms_model_Sedflux2d self,
  /* in */ const char* long_var_name,
  /* out */ sidl_BaseInterface *_ex);

extern
void
impl_csdms_model_Sedflux2d_set_grid_values(
  /* in */ csdms_model_Sedflux2d self,
  /* in */ const char* long_var_name,
  /* in array<double> */ struct sidl_double__array* vals,
  /* out */ sidl_BaseInterface *_ex);

#ifdef WITH_RMI
extern struct sidl_BaseInterface__object* 
  impl_csdms_model_Sedflux2d_fconnect_sidl_BaseInterface(const char* url, 
  sidl_bool ar, sidl_BaseInterface *_ex);
#endif /*WITH_RMI*/

/* DO-NOT-DELETE splicer.begin(_hmisc) */
/* Insert-Code-Here {_hmisc} (miscellaneous things) */
/* DO-NOT-DELETE splicer.end(_hmisc) */

#ifdef __cplusplus
}
#endif
#endif
