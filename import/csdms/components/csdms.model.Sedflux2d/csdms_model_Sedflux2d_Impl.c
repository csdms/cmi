/*
 * File:          csdms_model_Sedflux2d_Impl.c
 * Symbol:        csdms.model.Sedflux2d-v0.0
 * Symbol Type:   class
 * Babel Version: 1.4.0 (Revision: 6607 release-1-4-0-branch)
 * Description:   Server-side implementation for csdms.model.Sedflux2d
 * 
 * WARNING: Automatically generated; only changes within splicers preserved
 * 
 */

/*
 * DEVELOPERS ARE EXPECTED TO PROVIDE IMPLEMENTATIONS
 * FOR THE FOLLOWING METHODS BETWEEN SPLICER PAIRS.
 */

/*
 * Symbol "csdms.model.Sedflux2d" (version 0.0)
 */

#include "csdms_model_Sedflux2d_Impl.h"
#include "sidl_NotImplementedException.h"
#include "sidl_Exception.h"
#ifndef included_sidl_MemAllocException_h
#include "sidl_MemAllocException.h"
#endif

/* DO-NOT-DELETE splicer.begin(csdms.model.Sedflux2d._includes) */

/* Insert-UserCode-Here {csdms.model.Sedflux2d._includes} (includes and arbitrary code) */

/* Bocca generated code. bocca.protected.begin(csdms.model.Sedflux2d._includes) */
#include <stdlib.h>
#include <string.h>
#include "sidl_SIDLException.h"

#define _BOCCA_CTOR_MESSAGES 0

#ifdef _BOCCA_STDERR

#define BOCCA_FPRINTF fprintf
#include <stdio.h>
#include "sidl_String.h"
#ifdef _BOCCA_CTOR_PRINT
#undef _BOCCA_CTOR_MESSAGES
#define _BOCCA_CTOR_MESSAGES 1
#endif /* _BOCCA_CTOR_PRINT */

#else /* _BOCCA_STDERR */
#define BOCCA_FPRINTF boccaPrintNothing
#endif /* _BOCCA_STDERR */

static int
boccaPrintNothing(void *v, const char * s, ...)
{
  (void)v; (void)s;
  return 0;
}
/* Bocca generated code. bocca.protected.end(csdms.model.Sedflux2d._includes) */

/* Insert-UserCode-Here {csdms.model.Sedflux2d._includes} (includes and arbitrary code) */

/* DO-NOT-DELETE splicer.end(csdms.model.Sedflux2d._includes) */

#define SIDL_IOR_MAJOR_VERSION 2
#define SIDL_IOR_MINOR_VERSION 0
/*
 * Static class initializer called exactly once before any user-defined method is dispatched
 */

#undef __FUNC__
#define __FUNC__ "impl_csdms_model_Sedflux2d__load"

#ifdef __cplusplus
extern "C"
#endif
void
impl_csdms_model_Sedflux2d__load(
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(csdms.model.Sedflux2d._load) */
    /* Insert-Code-Here {csdms.model.Sedflux2d._load} (static class 
      initializer method) */
    /*
     * This method has not been implemented
     */

    /* DO-DELETE-WHEN-IMPLEMENTING exception.begin(csdms.model.Sedflux2d._load) */
    SIDL_THROW(*_ex, sidl_NotImplementedException,     "This method has not been implemented");
  EXIT:;
    /* DO-DELETE-WHEN-IMPLEMENTING exception.end(csdms.model.Sedflux2d._load) */
    /* DO-NOT-DELETE splicer.end(csdms.model.Sedflux2d._load) */
  }
}
/*
 * Class constructor called when the class is created.
 */

#undef __FUNC__
#define __FUNC__ "impl_csdms_model_Sedflux2d__ctor"

#ifdef __cplusplus
extern "C"
#endif
void
impl_csdms_model_Sedflux2d__ctor(
  /* in */ csdms_model_Sedflux2d self,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(csdms.model.Sedflux2d._ctor) */

  /* Insert-UserDecl-Here {csdms.model.Sedflux2d._ctor} (constructor method) */
    
  /* bocca-default-code. User may edit or delete.begin(csdms.model.Sedflux2d._ctor) */
   struct csdms_model_Sedflux2d__data *dptr = 
       (struct csdms_model_Sedflux2d__data*)malloc(sizeof(struct csdms_model_Sedflux2d__data));
   if (dptr) {
      memset(dptr, 0, sizeof(struct csdms_model_Sedflux2d__data));
   }
   csdms_model_Sedflux2d__set_data(self, dptr);
   #if _BOCCA_CTOR_MESSAGES
     BOCCA_FPRINTF(stderr, 
        "CTOR csdms.model.Sedflux2d: %s constructed data %p in self %p\n", 
        __FUNC__, dptr, self);
   #endif /* _BOCCA_CTOR_MESSAGES */
  /* bocca-default-code. User may edit or delete.end(csdms.model.Sedflux2d._ctor) */

  /* initialize user elements of dptr here */
  /* Insert-UserCode-Here {csdms.model.Sedflux2d._ctor} (constructor method) */

    /* DO-NOT-DELETE splicer.end(csdms.model.Sedflux2d._ctor) */
  }
}

/*
 * Special Class constructor called when the user wants to wrap his own private data.
 */

#undef __FUNC__
#define __FUNC__ "impl_csdms_model_Sedflux2d__ctor2"

#ifdef __cplusplus
extern "C"
#endif
void
impl_csdms_model_Sedflux2d__ctor2(
  /* in */ csdms_model_Sedflux2d self,
  /* in */ void* private_data,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(csdms.model.Sedflux2d._ctor2) */
    /* Insert-Code-Here {csdms.model.Sedflux2d._ctor2} (special constructor 
      method) */
    /*
     * This method has not been implemented
     */

    /* DO-DELETE-WHEN-IMPLEMENTING exception.begin(csdms.model.Sedflux2d._ctor2) */
    SIDL_THROW(*_ex, sidl_NotImplementedException,     "This method has not been implemented");
  EXIT:;
    /* DO-DELETE-WHEN-IMPLEMENTING exception.end(csdms.model.Sedflux2d._ctor2) */
    /* DO-NOT-DELETE splicer.end(csdms.model.Sedflux2d._ctor2) */
  }
}
/*
 * Class destructor called when the class is deleted.
 */

#undef __FUNC__
#define __FUNC__ "impl_csdms_model_Sedflux2d__dtor"

#ifdef __cplusplus
extern "C"
#endif
void
impl_csdms_model_Sedflux2d__dtor(
  /* in */ csdms_model_Sedflux2d self,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(csdms.model.Sedflux2d._dtor) */

  /* deinitialize user elements of dptr here */
  /* Insert-UserCode-Here {csdms.model.Sedflux2d._dtor} (destructor method) */
    
  /* bocca-default-code. User may edit or delete.begin(csdms.model.Sedflux2d._dtor) */
   struct csdms_model_Sedflux2d__data *dptr = 
                csdms_model_Sedflux2d__get_data(self);
   if (dptr) {
      free(dptr);
      csdms_model_Sedflux2d__set_data(self, NULL);
   }
   #if _BOCCA_CTOR_MESSAGES
     BOCCA_FPRINTF(stderr, "DTOR csdms.model.Sedflux2d: %s freed data %p in self %p\n", 
                   __FUNC__, dptr, self);
   #endif /* _BOCCA_CTOR_MESSAGES */
  /* bocca-default-code. User may edit or delete.end(csdms.model.Sedflux2d._dtor) */

    /* DO-NOT-DELETE splicer.end(csdms.model.Sedflux2d._dtor) */
  }
}

/*
 *  This function should never be called, but helps babel generate better code. 
 */

#undef __FUNC__
#define __FUNC__ "impl_csdms_model_Sedflux2d_boccaForceUsePortInclude"

#ifdef __cplusplus
extern "C"
#endif
void
impl_csdms_model_Sedflux2d_boccaForceUsePortInclude(
  /* in */ csdms_model_Sedflux2d self,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(csdms.model.Sedflux2d.boccaForceUsePortInclude) */
/* DO-NOT-EDIT-BOCCA */
  /* Bocca generated code. bocca.protected.begin(csdms.model.Sedflux2d.boccaForceUsePortInclude) */
    (void)self;

  /* Bocca generated code. bocca.protected.end(csdms.model.Sedflux2d.boccaForceUsePortInclude) */
    /* DO-NOT-DELETE splicer.end(csdms.model.Sedflux2d.boccaForceUsePortInclude) */
  }
}

/*
 * Method:  initialize[]
 */

#undef __FUNC__
#define __FUNC__ "impl_csdms_model_Sedflux2d_initialize"

#ifdef __cplusplus
extern "C"
#endif
sidl_bool
impl_csdms_model_Sedflux2d_initialize(
  /* in */ csdms_model_Sedflux2d self,
  /* in */ const char* config_file,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(csdms.model.Sedflux2d.initialize) */
    GET_PRIVATE_DATA(this);
    CALL_BMI(Initialize, config_file, &(this->state));

    return 0;

  EXIT:;
    return 1;
    /* DO-NOT-DELETE splicer.end(csdms.model.Sedflux2d.initialize) */
  }
}

/*
 * Method:  update[]
 */

#undef __FUNC__
#define __FUNC__ "impl_csdms_model_Sedflux2d_update"

#ifdef __cplusplus
extern "C"
#endif
sidl_bool
impl_csdms_model_Sedflux2d_update(
  /* in */ csdms_model_Sedflux2d self,
  /* in */ double time_interval,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(csdms.model.Sedflux2d.update) */
    GET_PRIVATE_DATA(this);
    CALL_BMI(Update_until, this->state, time_interval);
    return 0;

  EXIT:;

    return 1;
    /* DO-NOT-DELETE splicer.end(csdms.model.Sedflux2d.update) */
  }
}

/*
 * Method:  finalize[]
 */

#undef __FUNC__
#define __FUNC__ "impl_csdms_model_Sedflux2d_finalize"

#ifdef __cplusplus
extern "C"
#endif
sidl_bool
impl_csdms_model_Sedflux2d_finalize(
  /* in */ csdms_model_Sedflux2d self,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(csdms.model.Sedflux2d.finalize) */
    GET_PRIVATE_DATA(this);
    CALL_BMI(Finalize, this->state);
    return 0;
  EXIT:;
    return 1;
    /* DO-NOT-DELETE splicer.end(csdms.model.Sedflux2d.finalize) */
  }
}

/*
 * Method:  get_start_time[]
 */

#undef __FUNC__
#define __FUNC__ "impl_csdms_model_Sedflux2d_get_start_time"

#ifdef __cplusplus
extern "C"
#endif
double
impl_csdms_model_Sedflux2d_get_start_time(
  /* in */ csdms_model_Sedflux2d self,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(csdms.model.Sedflux2d.get_start_time) */
    GET_PRIVATE_DATA(this);
    double time;

    CALL_BMI(Get_start_time, this->state, &time);
    return time;

  EXIT:;
    return -1.;
    /* DO-NOT-DELETE splicer.end(csdms.model.Sedflux2d.get_start_time) */
  }
}

/*
 * Method:  get_current_time[]
 */

#undef __FUNC__
#define __FUNC__ "impl_csdms_model_Sedflux2d_get_current_time"

#ifdef __cplusplus
extern "C"
#endif
double
impl_csdms_model_Sedflux2d_get_current_time(
  /* in */ csdms_model_Sedflux2d self,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(csdms.model.Sedflux2d.get_current_time) */
    GET_PRIVATE_DATA(this);
    double time;

    CALL_BMI(Get_current_time, this->state, &time);

    return time;
  EXIT:;
    return -1.;
    /* DO-NOT-DELETE splicer.end(csdms.model.Sedflux2d.get_current_time) */
  }
}

/*
 * Method:  get_end_time[]
 */

#undef __FUNC__
#define __FUNC__ "impl_csdms_model_Sedflux2d_get_end_time"

#ifdef __cplusplus
extern "C"
#endif
double
impl_csdms_model_Sedflux2d_get_end_time(
  /* in */ csdms_model_Sedflux2d self,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(csdms.model.Sedflux2d.get_end_time) */
    GET_PRIVATE_DATA(this);
    double time;

    CALL_BMI(Get_end_time, this->state, &time);
    return time;
  EXIT:;
    return -1;
    /* DO-NOT-DELETE splicer.end(csdms.model.Sedflux2d.get_end_time) */
  }
}

/*
 * Method:  get_values[]
 */

#undef __FUNC__
#define __FUNC__ "impl_csdms_model_Sedflux2d_get_values"

#ifdef __cplusplus
extern "C"
#endif
struct sidl__array*
impl_csdms_model_Sedflux2d_get_values(
  /* in */ csdms_model_Sedflux2d self,
  /* in */ const char* long_var_name,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(csdms.model.Sedflux2d.get_values) */
    /* Insert-Code-Here {csdms.model.Sedflux2d.get_values} (get_values method) 
      */
    /*
     * This method has not been implemented
     */

    /* DO-DELETE-WHEN-IMPLEMENTING exception.begin(csdms.model.Sedflux2d.get_values) */
    SIDL_THROW(*_ex, sidl_NotImplementedException,     "This method has not been implemented");
  EXIT:;
    /* DO-DELETE-WHEN-IMPLEMENTING exception.end(csdms.model.Sedflux2d.get_values) */
    /* DO-NOT-DELETE splicer.end(csdms.model.Sedflux2d.get_values) */
  }
}

/*
 * Method:  set_values[]
 */

#undef __FUNC__
#define __FUNC__ "impl_csdms_model_Sedflux2d_set_values"

#ifdef __cplusplus
extern "C"
#endif
void
impl_csdms_model_Sedflux2d_set_values(
  /* in */ csdms_model_Sedflux2d self,
  /* in */ const char* long_var_name,
  /* in array<> */ struct sidl__array* in_values,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(csdms.model.Sedflux2d.set_values) */
    /* Insert-Code-Here {csdms.model.Sedflux2d.set_values} (set_values method) 
      */
    /*
     * This method has not been implemented
     */

    /* DO-DELETE-WHEN-IMPLEMENTING exception.begin(csdms.model.Sedflux2d.set_values) */
    SIDL_THROW(*_ex, sidl_NotImplementedException,     "This method has not been implemented");
  EXIT:;
    /* DO-DELETE-WHEN-IMPLEMENTING exception.end(csdms.model.Sedflux2d.set_values) */
    /* DO-NOT-DELETE splicer.end(csdms.model.Sedflux2d.set_values) */
  }
}

/*
 * Method:  get_component_name[]
 */

#undef __FUNC__
#define __FUNC__ "impl_csdms_model_Sedflux2d_get_component_name"

#ifdef __cplusplus
extern "C"
#endif
char*
impl_csdms_model_Sedflux2d_get_component_name(
  /* in */ csdms_model_Sedflux2d self,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(csdms.model.Sedflux2d.get_component_name) */
    GET_PRIVATE_DATA(this);
    char *name = (char*)malloc(sizeof(char) * 2048);

    CALL_BMI(Get_component_name, this->state, name);
    return name;

  EXIT:;
    free(name);
    return NULL;
    /* DO-NOT-DELETE splicer.end(csdms.model.Sedflux2d.get_component_name) */
  }
}

/*
 * Method:  get_input_item_count[]
 */

#undef __FUNC__
#define __FUNC__ "impl_csdms_model_Sedflux2d_get_input_item_count"

#ifdef __cplusplus
extern "C"
#endif
int32_t
impl_csdms_model_Sedflux2d_get_input_item_count(
  /* in */ csdms_model_Sedflux2d self,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(csdms.model.Sedflux2d.get_input_item_count) */
    GET_PRIVATE_DATA(this);
    int number_of_names = 0;
    CALL_BMI(Get_input_var_name_count, this->state, &number_of_names);
    return number_of_names;

EXIT:
    return -1;
    /* DO-NOT-DELETE splicer.end(csdms.model.Sedflux2d.get_input_item_count) */
  }
}

/*
 * Method:  get_input_item_list[]
 */

#undef __FUNC__
#define __FUNC__ "impl_csdms_model_Sedflux2d_get_input_item_list"

#ifdef __cplusplus
extern "C"
#endif
struct sidl_string__array*
impl_csdms_model_Sedflux2d_get_input_item_list(
  /* in */ csdms_model_Sedflux2d self,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(csdms.model.Sedflux2d.get_input_item_list) */
    struct sidl_string__array* item_names_array = NULL;
    char **item_names = NULL;
    const int MAX_NAME_LENGTH = 2048;
    int number_of_names = 0;
    int i;

    GET_PRIVATE_DATA(this);
    CALL_BMI(Get_input_var_name_count, this->state, &number_of_names);

    item_names = (char**)malloc(sizeof(char*) * number_of_names);
    item_names[0] = (char*)calloc(number_of_names * MAX_NAME_LENGTH,
        sizeof(char));
    for (i = 1; i < number_of_names; i ++) {
      item_names[i] = item_names[i - 1] + MAX_NAME_LENGTH;
    }

    CALL_BMI(Get_input_var_names, this->state, item_names);

    item_names_array = sidl_string__array_create1d(number_of_names);
    for (i = 0; i < number_of_names; i ++) {
      sidl_string__array_set1(item_names_array, i, item_names[i]);
    }
    free(item_names);

    return item_names_array;

    EXIT: return NULL;
    /* DO-NOT-DELETE splicer.end(csdms.model.Sedflux2d.get_input_item_list) */
  }
}

/*
 * Method:  get_output_item_count[]
 */

#undef __FUNC__
#define __FUNC__ "impl_csdms_model_Sedflux2d_get_output_item_count"

#ifdef __cplusplus
extern "C"
#endif
int32_t
impl_csdms_model_Sedflux2d_get_output_item_count(
  /* in */ csdms_model_Sedflux2d self,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(csdms.model.Sedflux2d.get_output_item_count) */
    GET_PRIVATE_DATA(this);
    int number_of_names = 0;
    CALL_BMI(Get_output_var_name_count, this->state, &number_of_names);
    return number_of_names;

EXIT:
    return -1;
    /* DO-NOT-DELETE splicer.end(csdms.model.Sedflux2d.get_output_item_count) */
  }
}

/*
 * Method:  get_output_item_list[]
 */

#undef __FUNC__
#define __FUNC__ "impl_csdms_model_Sedflux2d_get_output_item_list"

#ifdef __cplusplus
extern "C"
#endif
struct sidl_string__array*
impl_csdms_model_Sedflux2d_get_output_item_list(
  /* in */ csdms_model_Sedflux2d self,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(csdms.model.Sedflux2d.get_output_item_list) */
    struct sidl_string__array* item_names_array = NULL;
    char **item_names = NULL;
    const int MAX_NAME_LENGTH = 2048;
    int number_of_names = 0;
    int i;

    GET_PRIVATE_DATA(this);
    CALL_BMI(Get_output_var_name_count, this->state, &number_of_names);

    item_names = (char**)malloc(sizeof(char*) * number_of_names);
    item_names[0] = (char*)calloc(number_of_names * MAX_NAME_LENGTH,
        sizeof(char));
    for (i = 1; i < number_of_names; i ++) {
      item_names[i] = item_names[i - 1] + MAX_NAME_LENGTH;
    }

    CALL_BMI(Get_output_var_names, this->state, item_names);

    item_names_array = sidl_string__array_create1d(number_of_names);
    for (i = 0; i < number_of_names; i ++) {
      sidl_string__array_set1(item_names_array, i, item_names[i]);
    }
    free(item_names);

    return item_names_array;

    EXIT: return NULL;
    /* DO-NOT-DELETE splicer.end(csdms.model.Sedflux2d.get_output_item_list) */
  }
}

/*
 * Method:  get_values_at_indices[]
 */

#undef __FUNC__
#define __FUNC__ "impl_csdms_model_Sedflux2d_get_values_at_indices"

#ifdef __cplusplus
extern "C"
#endif
struct sidl__array*
impl_csdms_model_Sedflux2d_get_values_at_indices(
  /* in */ csdms_model_Sedflux2d self,
  /* in */ const char* long_var_name,
  /* in array<int> */ struct sidl_int__array* indices,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(csdms.model.Sedflux2d.get_values_at_indices) */
    /* Insert-Code-Here {csdms.model.Sedflux2d.get_values_at_indices} (
      get_values_at_indices method) */
    /*
     * This method has not been implemented
     */

    /* DO-DELETE-WHEN-IMPLEMENTING exception.begin(csdms.model.Sedflux2d.get_values_at_indices) */
    SIDL_THROW(*_ex, sidl_NotImplementedException,     "This method has not been implemented");
  EXIT:;
    /* DO-DELETE-WHEN-IMPLEMENTING exception.end(csdms.model.Sedflux2d.get_values_at_indices) */
    /* DO-NOT-DELETE splicer.end(csdms.model.Sedflux2d.get_values_at_indices) */
  }
}

/*
 * Method:  set_values_at_indices[]
 */

#undef __FUNC__
#define __FUNC__ "impl_csdms_model_Sedflux2d_set_values_at_indices"

#ifdef __cplusplus
extern "C"
#endif
void
impl_csdms_model_Sedflux2d_set_values_at_indices(
  /* in */ csdms_model_Sedflux2d self,
  /* in */ const char* long_var_name,
  /* in array<int> */ struct sidl_int__array* indices,
  /* in array<> */ struct sidl__array* in_values,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(csdms.model.Sedflux2d.set_values_at_indices) */
    /* Insert-Code-Here {csdms.model.Sedflux2d.set_values_at_indices} (
      set_values_at_indices method) */
    /*
     * This method has not been implemented
     */

    /* DO-DELETE-WHEN-IMPLEMENTING exception.begin(csdms.model.Sedflux2d.set_values_at_indices) */
    SIDL_THROW(*_ex, sidl_NotImplementedException,     "This method has not been implemented");
  EXIT:;
    /* DO-DELETE-WHEN-IMPLEMENTING exception.end(csdms.model.Sedflux2d.set_values_at_indices) */
    /* DO-NOT-DELETE splicer.end(csdms.model.Sedflux2d.set_values_at_indices) */
  }
}

/*
 * Method:  get_grid_rank[]
 */

#undef __FUNC__
#define __FUNC__ "impl_csdms_model_Sedflux2d_get_grid_rank"

#ifdef __cplusplus
extern "C"
#endif
int32_t
impl_csdms_model_Sedflux2d_get_grid_rank(
  /* in */ csdms_model_Sedflux2d self,
  /* in */ const char* long_var_name,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(csdms.model.Sedflux2d.get_grid_rank) */
    GET_PRIVATE_DATA(this);

    int rank;
    CALL_BMI(Get_var_rank, this->state, long_var_name, &rank);
    if (rank == 0)
      rank = 1;

    return rank;

EXIT:
    return -1;
    /* DO-NOT-DELETE splicer.end(csdms.model.Sedflux2d.get_grid_rank) */
  }
}

/*
 * Method:  get_grid_spacing[]
 */

#undef __FUNC__
#define __FUNC__ "impl_csdms_model_Sedflux2d_get_grid_spacing"

#ifdef __cplusplus
extern "C"
#endif
struct sidl_double__array*
impl_csdms_model_Sedflux2d_get_grid_spacing(
  /* in */ csdms_model_Sedflux2d self,
  /* in */ const char* long_var_name,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(csdms.model.Sedflux2d.get_grid_spacing) */
    GET_PRIVATE_DATA(this);
    struct sidl_double__array* spacing = NULL;
    int rank;

    rank = PRIVATE_METHOD(get_grid_rank)(self, long_var_name, _ex);

    spacing = sidl_double__array_create1d(rank);

    CALL_BMI(Get_grid_spacing, this->state, long_var_name,
        sidl_double__array_first(spacing));

    return spacing;

  EXIT:;

    return NULL;
    /* DO-NOT-DELETE splicer.end(csdms.model.Sedflux2d.get_grid_spacing) */
  }
}

/*
 * Method:  get_grid_origin[]
 */

#undef __FUNC__
#define __FUNC__ "impl_csdms_model_Sedflux2d_get_grid_origin"

#ifdef __cplusplus
extern "C"
#endif
struct sidl_double__array*
impl_csdms_model_Sedflux2d_get_grid_origin(
  /* in */ csdms_model_Sedflux2d self,
  /* in */ const char* long_var_name,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(csdms.model.Sedflux2d.get_grid_origin) */
    GET_PRIVATE_DATA(this);
    struct sidl_double__array* origin = NULL;
    int rank;

    rank = PRIVATE_METHOD(get_grid_rank)(self, long_var_name, _ex);

    origin = sidl_double__array_create1d(rank);

    CALL_BMI(Get_grid_origin, this->state, long_var_name,
        sidl_double__array_first(origin));

    return origin;

EXIT:

    return NULL;
    /* DO-NOT-DELETE splicer.end(csdms.model.Sedflux2d.get_grid_origin) */
  }
}

/*
 * Method:  get_grid_shape[]
 */

#undef __FUNC__
#define __FUNC__ "impl_csdms_model_Sedflux2d_get_grid_shape"

#ifdef __cplusplus
extern "C"
#endif
struct sidl_int__array*
impl_csdms_model_Sedflux2d_get_grid_shape(
  /* in */ csdms_model_Sedflux2d self,
  /* in */ const char* long_var_name,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(csdms.model.Sedflux2d.get_grid_shape) */
    GET_PRIVATE_DATA(this);
    struct sidl_int__array* shape = NULL;
    int rank;

    rank = PRIVATE_METHOD(get_grid_rank)(self, long_var_name, _ex);

    shape = sidl_int__array_create1d(rank);

    CALL_BMI(Get_grid_shape, this->state, long_var_name,
        sidl_int__array_first(shape));

    return shape;

  EXIT:;

    return NULL;
    /* DO-NOT-DELETE splicer.end(csdms.model.Sedflux2d.get_grid_shape) */
  }
}

/*
 * Method:  get_grid_x[]
 */

#undef __FUNC__
#define __FUNC__ "impl_csdms_model_Sedflux2d_get_grid_x"

#ifdef __cplusplus
extern "C"
#endif
struct sidl_double__array*
impl_csdms_model_Sedflux2d_get_grid_x(
  /* in */ csdms_model_Sedflux2d self,
  /* in */ const char* long_var_name,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(csdms.model.Sedflux2d.get_grid_x) */
    /* Insert-Code-Here {csdms.model.Sedflux2d.get_grid_x} (get_grid_x method) 
      */
    /*
     * This method has not been implemented
     */

    /* DO-DELETE-WHEN-IMPLEMENTING exception.begin(csdms.model.Sedflux2d.get_grid_x) */
    SIDL_THROW(*_ex, sidl_NotImplementedException,     "This method has not been implemented");
  EXIT:;
    /* DO-DELETE-WHEN-IMPLEMENTING exception.end(csdms.model.Sedflux2d.get_grid_x) */
    /* DO-NOT-DELETE splicer.end(csdms.model.Sedflux2d.get_grid_x) */
  }
}

/*
 * Method:  get_grid_y[]
 */

#undef __FUNC__
#define __FUNC__ "impl_csdms_model_Sedflux2d_get_grid_y"

#ifdef __cplusplus
extern "C"
#endif
struct sidl_double__array*
impl_csdms_model_Sedflux2d_get_grid_y(
  /* in */ csdms_model_Sedflux2d self,
  /* in */ const char* long_var_name,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(csdms.model.Sedflux2d.get_grid_y) */
    /* Insert-Code-Here {csdms.model.Sedflux2d.get_grid_y} (get_grid_y method) 
      */
    /*
     * This method has not been implemented
     */

    /* DO-DELETE-WHEN-IMPLEMENTING exception.begin(csdms.model.Sedflux2d.get_grid_y) */
    SIDL_THROW(*_ex, sidl_NotImplementedException,     "This method has not been implemented");
  EXIT:;
    /* DO-DELETE-WHEN-IMPLEMENTING exception.end(csdms.model.Sedflux2d.get_grid_y) */
    /* DO-NOT-DELETE splicer.end(csdms.model.Sedflux2d.get_grid_y) */
  }
}

/*
 * Method:  get_grid_z[]
 */

#undef __FUNC__
#define __FUNC__ "impl_csdms_model_Sedflux2d_get_grid_z"

#ifdef __cplusplus
extern "C"
#endif
struct sidl_double__array*
impl_csdms_model_Sedflux2d_get_grid_z(
  /* in */ csdms_model_Sedflux2d self,
  /* in */ const char* long_var_name,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(csdms.model.Sedflux2d.get_grid_z) */
    /* Insert-Code-Here {csdms.model.Sedflux2d.get_grid_z} (get_grid_z method) 
      */
    /*
     * This method has not been implemented
     */

    /* DO-DELETE-WHEN-IMPLEMENTING exception.begin(csdms.model.Sedflux2d.get_grid_z) */
    SIDL_THROW(*_ex, sidl_NotImplementedException,     "This method has not been implemented");
  EXIT:;
    /* DO-DELETE-WHEN-IMPLEMENTING exception.end(csdms.model.Sedflux2d.get_grid_z) */
    /* DO-NOT-DELETE splicer.end(csdms.model.Sedflux2d.get_grid_z) */
  }
}

/*
 * Method:  get_grid_connectivity[]
 */

#undef __FUNC__
#define __FUNC__ "impl_csdms_model_Sedflux2d_get_grid_connectivity"

#ifdef __cplusplus
extern "C"
#endif
struct sidl_int__array*
impl_csdms_model_Sedflux2d_get_grid_connectivity(
  /* in */ csdms_model_Sedflux2d self,
  /* in */ const char* long_var_name,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(csdms.model.Sedflux2d.get_grid_connectivity) */
    /* Insert-Code-Here {csdms.model.Sedflux2d.get_grid_connectivity} (
      get_grid_connectivity method) */
    /*
     * This method has not been implemented
     */

    /* DO-DELETE-WHEN-IMPLEMENTING exception.begin(csdms.model.Sedflux2d.get_grid_connectivity) */
    SIDL_THROW(*_ex, sidl_NotImplementedException,     "This method has not been implemented");
  EXIT:;
    /* DO-DELETE-WHEN-IMPLEMENTING exception.end(csdms.model.Sedflux2d.get_grid_connectivity) */
    /* DO-NOT-DELETE splicer.end(csdms.model.Sedflux2d.get_grid_connectivity) */
  }
}

/*
 * Method:  get_grid_offset[]
 */

#undef __FUNC__
#define __FUNC__ "impl_csdms_model_Sedflux2d_get_grid_offset"

#ifdef __cplusplus
extern "C"
#endif
struct sidl_int__array*
impl_csdms_model_Sedflux2d_get_grid_offset(
  /* in */ csdms_model_Sedflux2d self,
  /* in */ const char* long_var_name,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(csdms.model.Sedflux2d.get_grid_offset) */
    /* Insert-Code-Here {csdms.model.Sedflux2d.get_grid_offset} (
      get_grid_offset method) */
    /*
     * This method has not been implemented
     */

    /* DO-DELETE-WHEN-IMPLEMENTING exception.begin(csdms.model.Sedflux2d.get_grid_offset) */
    SIDL_THROW(*_ex, sidl_NotImplementedException,     "This method has not been implemented");
  EXIT:;
    /* DO-DELETE-WHEN-IMPLEMENTING exception.end(csdms.model.Sedflux2d.get_grid_offset) */
    /* DO-NOT-DELETE splicer.end(csdms.model.Sedflux2d.get_grid_offset) */
  }
}

/*
 * Method:  get_grid_values[]
 */

#undef __FUNC__
#define __FUNC__ "impl_csdms_model_Sedflux2d_get_grid_values"

#ifdef __cplusplus
extern "C"
#endif
struct sidl_double__array*
impl_csdms_model_Sedflux2d_get_grid_values(
  /* in */ csdms_model_Sedflux2d self,
  /* in */ const char* long_var_name,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(csdms.model.Sedflux2d.get_grid_values) */

    struct sidl_double__array* vals = NULL;
    GET_PRIVATE_DATA(this);

    if (this && this->state)
    {
      int rank;
      double *data = NULL;
      int n_vals = 0;
      int status = 0;

      CALL_BMI(Get_var_point_count, this->state, long_var_name, &n_vals);
      rank = PRIVATE_METHOD(get_grid_rank)(self, long_var_name, _ex);

      data = (double*)malloc(sizeof(double) * n_vals);
      CALL_BMI(Get_double, this->state, long_var_name, data);

      if (data)
      { /* Create an array that borrows these values. */
        int i;
        int * lower = (int*)malloc(sizeof(int) * rank);
        int * upper = (int*)malloc(sizeof(int) * rank);
        int * stride = (int*)malloc(sizeof(int) * rank);

        {
          const int _n_dims = 1;
          const int _lower[1] = {0};
          const int _upper[1] = {n_vals - 1};
          const int _stride[1] = {1};

          vals = sidl_double__array_borrow(data, _n_dims,
              _lower, _upper, _stride);
        }

        free(stride);
        free(upper);
        free(lower);
      }
    }

    return vals;

  EXIT: return NULL;
    /* DO-NOT-DELETE splicer.end(csdms.model.Sedflux2d.get_grid_values) */
  }
}

/*
 * Method:  set_grid_values[]
 */

#undef __FUNC__
#define __FUNC__ "impl_csdms_model_Sedflux2d_set_grid_values"

#ifdef __cplusplus
extern "C"
#endif
void
impl_csdms_model_Sedflux2d_set_grid_values(
  /* in */ csdms_model_Sedflux2d self,
  /* in */ const char* long_var_name,
  /* in array<double> */ struct sidl_double__array* vals,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
    /* DO-NOT-DELETE splicer.begin(csdms.model.Sedflux2d.set_grid_values) */
    /* Insert-Code-Here {csdms.model.Sedflux2d.set_grid_values} (
      set_grid_values method) */
    /*
     * This method has not been implemented
     */

    /* DO-DELETE-WHEN-IMPLEMENTING exception.begin(csdms.model.Sedflux2d.set_grid_values) */
    SIDL_THROW(*_ex, sidl_NotImplementedException,     "This method has not been implemented");
  EXIT:;
    /* DO-DELETE-WHEN-IMPLEMENTING exception.end(csdms.model.Sedflux2d.set_grid_values) */
    /* DO-NOT-DELETE splicer.end(csdms.model.Sedflux2d.set_grid_values) */
  }
}
/* Babel internal methods, Users should not edit below this line. */

/* DO-NOT-DELETE splicer.begin(_misc) */
/* Insert-Code-Here {_misc} (miscellaneous code) */
/* DO-NOT-DELETE splicer.end(_misc) */

