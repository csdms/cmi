/*
 * File:          edu_csdms_openmi_VectorSet_IOR.h
 * Symbol:        edu.csdms.openmi.VectorSet-v0.0
 * Symbol Type:   class
 * Babel Version: 1.4.0 (Revision: 6607 release-1-4-0-branch)
 * Description:   Intermediate Object Representation for edu.csdms.openmi.VectorSet
 * 
 * WARNING: Automatically generated; changes will be lost
 * 
 */

#ifndef included_edu_csdms_openmi_VectorSet_IOR_h
#define included_edu_csdms_openmi_VectorSet_IOR_h

#ifndef included_sidl_header_h
#include "sidl_header.h"
#endif
struct sidl_rmi_InstanceHandle__object;
#ifndef included_edu_csdms_openmi_IValueSet_IOR_h
#include "edu_csdms_openmi_IValueSet_IOR.h"
#endif
#ifndef included_edu_csdms_openmi_IVector_IOR_h
#include "edu_csdms_openmi_IVector_IOR.h"
#endif
#ifndef included_edu_csdms_openmi_IVectorSet_IOR_h
#include "edu_csdms_openmi_IVectorSet_IOR.h"
#endif
#ifndef included_sidl_BaseClass_IOR_h
#include "sidl_BaseClass_IOR.h"
#endif

#ifdef __cplusplus
extern "C" {
#endif

/*
 * Symbol "edu.csdms.openmi.VectorSet" (version 0.0)
 */

struct edu_csdms_openmi_VectorSet__array;
struct edu_csdms_openmi_VectorSet__object;

/*
 * Forward references for external classes and interfaces.
 */

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

struct edu_csdms_openmi_VectorSet__epv {
  /* Implicit builtin methods */
  /* 0 */
  void* (*f__cast)(
    /* in */ struct edu_csdms_openmi_VectorSet__object* self,
    /* in */ const char* name,
    /* out */ struct sidl_BaseInterface__object **_ex);
  /* 1 */
  void (*f__delete)(
    /* in */ struct edu_csdms_openmi_VectorSet__object* self,
    /* out */ struct sidl_BaseInterface__object **_ex);
  /* 2 */
  void (*f__exec)(
    /* in */ struct edu_csdms_openmi_VectorSet__object* self,
    /* in */ const char* methodName,
    /* in */ struct sidl_rmi_Call__object* inArgs,
    /* in */ struct sidl_rmi_Return__object* outArgs,
    /* out */ struct sidl_BaseInterface__object **_ex);
  /* 3 */
  char* (*f__getURL)(
    /* in */ struct edu_csdms_openmi_VectorSet__object* self,
    /* out */ struct sidl_BaseInterface__object **_ex);
  /* 4 */
  void (*f__raddRef)(
    /* in */ struct edu_csdms_openmi_VectorSet__object* self,
    /* out */ struct sidl_BaseInterface__object **_ex);
  /* 5 */
  sidl_bool (*f__isRemote)(
    /* in */ struct edu_csdms_openmi_VectorSet__object* self,
    /* out */ struct sidl_BaseInterface__object **_ex);
  /* 6 */
  void (*f__set_hooks)(
    /* in */ struct edu_csdms_openmi_VectorSet__object* self,
    /* in */ sidl_bool enable,
    /* out */ struct sidl_BaseInterface__object **_ex);
  /* 7 */
  void (*f__set_contracts)(
    /* in */ struct edu_csdms_openmi_VectorSet__object* self,
    /* in */ sidl_bool enable,
    /* in */ const char* enfFilename,
    /* in */ sidl_bool resetCounters,
    /* out */ struct sidl_BaseInterface__object **_ex);
  /* 8 */
  void (*f__dump_stats)(
    /* in */ struct edu_csdms_openmi_VectorSet__object* self,
    /* in */ const char* filename,
    /* in */ const char* prefix,
    /* out */ struct sidl_BaseInterface__object **_ex);
  /* 9 */
  void (*f__ctor)(
    /* in */ struct edu_csdms_openmi_VectorSet__object* self,
    /* out */ struct sidl_BaseInterface__object **_ex);
  /* 10 */
  void (*f__ctor2)(
    /* in */ struct edu_csdms_openmi_VectorSet__object* self,
    /* in */ void* private_data,
    /* out */ struct sidl_BaseInterface__object **_ex);
  /* 11 */
  void (*f__dtor)(
    /* in */ struct edu_csdms_openmi_VectorSet__object* self,
    /* out */ struct sidl_BaseInterface__object **_ex);
  /* 12 */
  void (*f__load)(
    /* out */ struct sidl_BaseInterface__object **_ex);
  /* Methods introduced in sidl.BaseInterface-v0.9.17 */
  void (*f_addRef)(
    /* in */ struct edu_csdms_openmi_VectorSet__object* self,
    /* out */ struct sidl_BaseInterface__object **_ex);
  void (*f_deleteRef)(
    /* in */ struct edu_csdms_openmi_VectorSet__object* self,
    /* out */ struct sidl_BaseInterface__object **_ex);
  sidl_bool (*f_isSame)(
    /* in */ struct edu_csdms_openmi_VectorSet__object* self,
    /* in */ struct sidl_BaseInterface__object* iobj,
    /* out */ struct sidl_BaseInterface__object **_ex);
  sidl_bool (*f_isType)(
    /* in */ struct edu_csdms_openmi_VectorSet__object* self,
    /* in */ const char* name,
    /* out */ struct sidl_BaseInterface__object **_ex);
  struct sidl_ClassInfo__object* (*f_getClassInfo)(
    /* in */ struct edu_csdms_openmi_VectorSet__object* self,
    /* out */ struct sidl_BaseInterface__object **_ex);
  /* Methods introduced in sidl.BaseClass-v0.9.17 */
  /* Methods introduced in edu.csdms.openmi.IVector-v0.0 */
  double (*f_getXComponent)(
    /* in */ struct edu_csdms_openmi_VectorSet__object* self,
    /* out */ struct sidl_BaseInterface__object **_ex);
  double (*f_getYComponent)(
    /* in */ struct edu_csdms_openmi_VectorSet__object* self,
    /* out */ struct sidl_BaseInterface__object **_ex);
  double (*f_getZComponent)(
    /* in */ struct edu_csdms_openmi_VectorSet__object* self,
    /* out */ struct sidl_BaseInterface__object **_ex);
  /* Methods introduced in edu.csdms.openmi.IValueSet-v0.0 */
  int32_t (*f_getCount)(
    /* in */ struct edu_csdms_openmi_VectorSet__object* self,
    /* out */ struct sidl_BaseInterface__object **_ex);
  sidl_bool (*f_isValid)(
    /* in */ struct edu_csdms_openmi_VectorSet__object* self,
    /* in */ int32_t elementIndex,
    /* out */ struct sidl_BaseInterface__object **_ex);
  /* Methods introduced in edu.csdms.openmi.IVectorSet-v0.0 */
  struct edu_csdms_openmi_IVector__object* (*f_getVector)(
    /* in */ struct edu_csdms_openmi_VectorSet__object* self,
    /* in */ int32_t elementIndex,
    /* out */ struct sidl_BaseInterface__object **_ex);
  /* Methods introduced in edu.csdms.openmi.VectorSet-v0.0 */
  void (*f_init)(
    /* in */ struct edu_csdms_openmi_VectorSet__object* self,
    /* in array<edu.csdms.openmi.IVector> */ struct 
      edu_csdms_openmi_IVector__array* values,
    /* out */ struct sidl_BaseInterface__object **_ex);
  void (*f_boccaForceUsePortInclude)(
    /* in */ struct edu_csdms_openmi_VectorSet__object* self,
    /* out */ struct sidl_BaseInterface__object **_ex);
};

/*
 * Declare the method pre hooks entry point vector.
 */

struct edu_csdms_openmi_VectorSet__pre_epv {
  void (*f_init_pre)(
    /* in */ struct edu_csdms_openmi_VectorSet__object* self,
    /* in array<edu.csdms.openmi.IVector> */ struct 
      edu_csdms_openmi_IVector__array* values,
    /* out */ struct sidl_BaseInterface__object **_ex);
  void (*f_boccaForceUsePortInclude_pre)(
    /* in */ struct edu_csdms_openmi_VectorSet__object* self,
    /* out */ struct sidl_BaseInterface__object **_ex);
  void (*f_getVector_pre)(
    /* in */ struct edu_csdms_openmi_VectorSet__object* self,
    /* in */ int32_t elementIndex,
    /* out */ struct sidl_BaseInterface__object **_ex);
  void (*f_getCount_pre)(
    /* in */ struct edu_csdms_openmi_VectorSet__object* self,
    /* out */ struct sidl_BaseInterface__object **_ex);
  void (*f_isValid_pre)(
    /* in */ struct edu_csdms_openmi_VectorSet__object* self,
    /* in */ int32_t elementIndex,
    /* out */ struct sidl_BaseInterface__object **_ex);
  void (*f_getXComponent_pre)(
    /* in */ struct edu_csdms_openmi_VectorSet__object* self,
    /* out */ struct sidl_BaseInterface__object **_ex);
  void (*f_getYComponent_pre)(
    /* in */ struct edu_csdms_openmi_VectorSet__object* self,
    /* out */ struct sidl_BaseInterface__object **_ex);
  void (*f_getZComponent_pre)(
    /* in */ struct edu_csdms_openmi_VectorSet__object* self,
    /* out */ struct sidl_BaseInterface__object **_ex);
};

/*
 * Declare the method post hooks entry point vector.
 */

struct edu_csdms_openmi_VectorSet__post_epv {
  void (*f_init_post)(
    /* in */ struct edu_csdms_openmi_VectorSet__object* self,
    /* in array<edu.csdms.openmi.IVector> */ struct 
      edu_csdms_openmi_IVector__array* values,
    /* out */ struct sidl_BaseInterface__object **_ex);
  void (*f_boccaForceUsePortInclude_post)(
    /* in */ struct edu_csdms_openmi_VectorSet__object* self,
    /* out */ struct sidl_BaseInterface__object **_ex);
  void (*f_getVector_post)(
    /* in */ struct edu_csdms_openmi_VectorSet__object* self,
    /* in */ int32_t elementIndex,
    /* in */ struct edu_csdms_openmi_IVector__object* _retval,
    /* out */ struct sidl_BaseInterface__object **_ex);
  void (*f_getCount_post)(
    /* in */ struct edu_csdms_openmi_VectorSet__object* self,
    /* in */ int32_t _retval,
    /* out */ struct sidl_BaseInterface__object **_ex);
  void (*f_isValid_post)(
    /* in */ struct edu_csdms_openmi_VectorSet__object* self,
    /* in */ int32_t elementIndex,
    /* in */ sidl_bool _retval,
    /* out */ struct sidl_BaseInterface__object **_ex);
  void (*f_getXComponent_post)(
    /* in */ struct edu_csdms_openmi_VectorSet__object* self,
    /* in */ double _retval,
    /* out */ struct sidl_BaseInterface__object **_ex);
  void (*f_getYComponent_post)(
    /* in */ struct edu_csdms_openmi_VectorSet__object* self,
    /* in */ double _retval,
    /* out */ struct sidl_BaseInterface__object **_ex);
  void (*f_getZComponent_post)(
    /* in */ struct edu_csdms_openmi_VectorSet__object* self,
    /* in */ double _retval,
    /* out */ struct sidl_BaseInterface__object **_ex);
};

/*
 * Define the controls and statistics structure.
 */


struct edu_csdms_openmi_VectorSet__cstats {
  sidl_bool use_hooks;
};

/*
 * Define the class object structure.
 */

struct edu_csdms_openmi_VectorSet__object {
  struct sidl_BaseClass__object              d_sidl_baseclass;
  struct edu_csdms_openmi_IValueSet__object  d_edu_csdms_openmi_ivalueset;
  struct edu_csdms_openmi_IVector__object    d_edu_csdms_openmi_ivector;
  struct edu_csdms_openmi_IVectorSet__object d_edu_csdms_openmi_ivectorset;
  struct edu_csdms_openmi_VectorSet__epv*    d_epv;
  struct edu_csdms_openmi_VectorSet__cstats  d_cstats;
  void*                                      d_data;
};

struct edu_csdms_openmi_VectorSet__external {
  struct edu_csdms_openmi_VectorSet__object*
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

const struct edu_csdms_openmi_VectorSet__external*
edu_csdms_openmi_VectorSet__externals(void);

extern struct edu_csdms_openmi_VectorSet__object*
edu_csdms_openmi_VectorSet__createObject(void* ddata,struct 
  sidl_BaseInterface__object ** _ex);

extern void edu_csdms_openmi_VectorSet__init(
  struct edu_csdms_openmi_VectorSet__object* self, void* ddata, struct 
    sidl_BaseInterface__object ** _ex);

extern void edu_csdms_openmi_VectorSet__getEPVs(
  struct sidl_BaseInterface__epv **s_arg_epv__sidl_baseinterface,
  struct sidl_BaseClass__epv **s_arg_epv__sidl_baseclass,
  struct edu_csdms_openmi_IValueSet__epv 
    **s_arg_epv__edu_csdms_openmi_ivalueset,
  struct edu_csdms_openmi_IValueSet__epv 
    **s_arg_epv_hooks__edu_csdms_openmi_ivalueset,
  struct edu_csdms_openmi_IVector__epv **s_arg_epv__edu_csdms_openmi_ivector,
  struct edu_csdms_openmi_IVector__epv 
    **s_arg_epv_hooks__edu_csdms_openmi_ivector,
  struct edu_csdms_openmi_IVectorSet__epv 
    **s_arg_epv__edu_csdms_openmi_ivectorset,
  struct edu_csdms_openmi_IVectorSet__epv 
    **s_arg_epv_hooks__edu_csdms_openmi_ivectorset,
  struct edu_csdms_openmi_VectorSet__epv 
    **s_arg_epv__edu_csdms_openmi_vectorset,
  struct edu_csdms_openmi_VectorSet__epv 
    **s_arg_epv_hooks__edu_csdms_openmi_vectorset);

extern void edu_csdms_openmi_VectorSet__fini(
  struct edu_csdms_openmi_VectorSet__object* self, struct 
    sidl_BaseInterface__object ** _ex);

extern void edu_csdms_openmi_VectorSet__IOR_version(int32_t *major, int32_t 
  *minor);

struct sidl_BaseInterface__object* 
  skel_edu_csdms_openmi_VectorSet_fconnect_sidl_BaseInterface(const char* url, 
  sidl_bool ar, struct sidl_BaseInterface__object * *_ex);
struct edu_csdms_openmi_VectorSet__remote{
  int d_refcount;
  struct sidl_rmi_InstanceHandle__object *d_ih;
};

#ifdef __cplusplus
}
#endif
#endif
