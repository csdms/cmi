/*
 * File:          edu_csdms_tools_BOVRasterFile_IOR.h
 * Symbol:        edu.csdms.tools.BOVRasterFile-v0.0
 * Symbol Type:   class
 * Babel Version: 1.4.0 (Revision: 6607 release-1-4-0-branch)
 * Description:   Intermediate Object Representation for edu.csdms.tools.BOVRasterFile
 * 
 * WARNING: Automatically generated; changes will be lost
 * 
 */

#ifndef included_edu_csdms_tools_BOVRasterFile_IOR_h
#define included_edu_csdms_tools_BOVRasterFile_IOR_h

#ifndef included_sidl_header_h
#include "sidl_header.h"
#endif
struct sidl_rmi_InstanceHandle__object;
#ifndef included_edu_csdms_tools_IRasterOutputFile_IOR_h
#include "edu_csdms_tools_IRasterOutputFile_IOR.h"
#endif
#ifndef included_sidl_BaseClass_IOR_h
#include "sidl_BaseClass_IOR.h"
#endif

#ifdef __cplusplus
extern "C" {
#endif

/*
 * Symbol "edu.csdms.tools.BOVRasterFile" (version 0.0)
 */

struct edu_csdms_tools_BOVRasterFile__array;
struct edu_csdms_tools_BOVRasterFile__object;

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

struct edu_csdms_tools_BOVRasterFile__epv {
  /* Implicit builtin methods */
  /* 0 */
  void* (*f__cast)(
    /* in */ struct edu_csdms_tools_BOVRasterFile__object* self,
    /* in */ const char* name,
    /* out */ struct sidl_BaseInterface__object **_ex);
  /* 1 */
  void (*f__delete)(
    /* in */ struct edu_csdms_tools_BOVRasterFile__object* self,
    /* out */ struct sidl_BaseInterface__object **_ex);
  /* 2 */
  void (*f__exec)(
    /* in */ struct edu_csdms_tools_BOVRasterFile__object* self,
    /* in */ const char* methodName,
    /* in */ struct sidl_rmi_Call__object* inArgs,
    /* in */ struct sidl_rmi_Return__object* outArgs,
    /* out */ struct sidl_BaseInterface__object **_ex);
  /* 3 */
  char* (*f__getURL)(
    /* in */ struct edu_csdms_tools_BOVRasterFile__object* self,
    /* out */ struct sidl_BaseInterface__object **_ex);
  /* 4 */
  void (*f__raddRef)(
    /* in */ struct edu_csdms_tools_BOVRasterFile__object* self,
    /* out */ struct sidl_BaseInterface__object **_ex);
  /* 5 */
  sidl_bool (*f__isRemote)(
    /* in */ struct edu_csdms_tools_BOVRasterFile__object* self,
    /* out */ struct sidl_BaseInterface__object **_ex);
  /* 6 */
  void (*f__set_hooks)(
    /* in */ struct edu_csdms_tools_BOVRasterFile__object* self,
    /* in */ sidl_bool enable,
    /* out */ struct sidl_BaseInterface__object **_ex);
  /* 7 */
  void (*f__set_contracts)(
    /* in */ struct edu_csdms_tools_BOVRasterFile__object* self,
    /* in */ sidl_bool enable,
    /* in */ const char* enfFilename,
    /* in */ sidl_bool resetCounters,
    /* out */ struct sidl_BaseInterface__object **_ex);
  /* 8 */
  void (*f__dump_stats)(
    /* in */ struct edu_csdms_tools_BOVRasterFile__object* self,
    /* in */ const char* filename,
    /* in */ const char* prefix,
    /* out */ struct sidl_BaseInterface__object **_ex);
  /* 9 */
  void (*f__ctor)(
    /* in */ struct edu_csdms_tools_BOVRasterFile__object* self,
    /* out */ struct sidl_BaseInterface__object **_ex);
  /* 10 */
  void (*f__ctor2)(
    /* in */ struct edu_csdms_tools_BOVRasterFile__object* self,
    /* in */ void* private_data,
    /* out */ struct sidl_BaseInterface__object **_ex);
  /* 11 */
  void (*f__dtor)(
    /* in */ struct edu_csdms_tools_BOVRasterFile__object* self,
    /* out */ struct sidl_BaseInterface__object **_ex);
  /* 12 */
  void (*f__load)(
    /* out */ struct sidl_BaseInterface__object **_ex);
  /* Methods introduced in sidl.BaseInterface-v0.9.17 */
  void (*f_addRef)(
    /* in */ struct edu_csdms_tools_BOVRasterFile__object* self,
    /* out */ struct sidl_BaseInterface__object **_ex);
  void (*f_deleteRef)(
    /* in */ struct edu_csdms_tools_BOVRasterFile__object* self,
    /* out */ struct sidl_BaseInterface__object **_ex);
  sidl_bool (*f_isSame)(
    /* in */ struct edu_csdms_tools_BOVRasterFile__object* self,
    /* in */ struct sidl_BaseInterface__object* iobj,
    /* out */ struct sidl_BaseInterface__object **_ex);
  sidl_bool (*f_isType)(
    /* in */ struct edu_csdms_tools_BOVRasterFile__object* self,
    /* in */ const char* name,
    /* out */ struct sidl_BaseInterface__object **_ex);
  struct sidl_ClassInfo__object* (*f_getClassInfo)(
    /* in */ struct edu_csdms_tools_BOVRasterFile__object* self,
    /* out */ struct sidl_BaseInterface__object **_ex);
  /* Methods introduced in sidl.BaseClass-v0.9.17 */
  /* Methods introduced in edu.csdms.tools.IRasterOutputFile-v0.0 */
  void (*f_init)(
    /* in */ struct edu_csdms_tools_BOVRasterFile__object* self,
    /* in */ const char* name,
    /* in */ const char* units,
    /* in array<int> */ struct sidl_int__array* dimen,
    /* in array<double> */ struct sidl_double__array* res,
    /* out */ struct sidl_BaseInterface__object **_ex);
  void (*f_open)(
    /* in */ struct edu_csdms_tools_BOVRasterFile__object* self,
    /* in */ const char* file,
    /* out */ struct sidl_BaseInterface__object **_ex);
  void (*f_append)(
    /* in */ struct edu_csdms_tools_BOVRasterFile__object* self,
    /* in array<> */ struct sidl__array* value,
    /* out */ struct sidl_BaseInterface__object **_ex);
  void (*f_close)(
    /* in */ struct edu_csdms_tools_BOVRasterFile__object* self,
    /* out */ struct sidl_BaseInterface__object **_ex);
  /* Methods introduced in edu.csdms.tools.BOVRasterFile-v0.0 */
  void (*f_boccaForceUsePortInclude)(
    /* in */ struct edu_csdms_tools_BOVRasterFile__object* self,
    /* out */ struct sidl_BaseInterface__object **_ex);
};

/*
 * Declare the method pre hooks entry point vector.
 */

struct edu_csdms_tools_BOVRasterFile__pre_epv {
  void (*f_boccaForceUsePortInclude_pre)(
    /* in */ struct edu_csdms_tools_BOVRasterFile__object* self,
    /* out */ struct sidl_BaseInterface__object **_ex);
  void (*f_init_pre)(
    /* in */ struct edu_csdms_tools_BOVRasterFile__object* self,
    /* in */ const char* name,
    /* in */ const char* units,
    /* in array<int> */ struct sidl_int__array* dimen,
    /* in array<double> */ struct sidl_double__array* res,
    /* out */ struct sidl_BaseInterface__object **_ex);
  void (*f_open_pre)(
    /* in */ struct edu_csdms_tools_BOVRasterFile__object* self,
    /* in */ const char* file,
    /* out */ struct sidl_BaseInterface__object **_ex);
  void (*f_append_pre)(
    /* in */ struct edu_csdms_tools_BOVRasterFile__object* self,
    /* in array<> */ struct sidl__array* value,
    /* out */ struct sidl_BaseInterface__object **_ex);
  void (*f_close_pre)(
    /* in */ struct edu_csdms_tools_BOVRasterFile__object* self,
    /* out */ struct sidl_BaseInterface__object **_ex);
};

/*
 * Declare the method post hooks entry point vector.
 */

struct edu_csdms_tools_BOVRasterFile__post_epv {
  void (*f_boccaForceUsePortInclude_post)(
    /* in */ struct edu_csdms_tools_BOVRasterFile__object* self,
    /* out */ struct sidl_BaseInterface__object **_ex);
  void (*f_init_post)(
    /* in */ struct edu_csdms_tools_BOVRasterFile__object* self,
    /* in */ const char* name,
    /* in */ const char* units,
    /* in array<int> */ struct sidl_int__array* dimen,
    /* in array<double> */ struct sidl_double__array* res,
    /* out */ struct sidl_BaseInterface__object **_ex);
  void (*f_open_post)(
    /* in */ struct edu_csdms_tools_BOVRasterFile__object* self,
    /* in */ const char* file,
    /* out */ struct sidl_BaseInterface__object **_ex);
  void (*f_append_post)(
    /* in */ struct edu_csdms_tools_BOVRasterFile__object* self,
    /* in array<> */ struct sidl__array* value,
    /* out */ struct sidl_BaseInterface__object **_ex);
  void (*f_close_post)(
    /* in */ struct edu_csdms_tools_BOVRasterFile__object* self,
    /* out */ struct sidl_BaseInterface__object **_ex);
};

/*
 * Define the controls and statistics structure.
 */


struct edu_csdms_tools_BOVRasterFile__cstats {
  sidl_bool use_hooks;
};

/*
 * Define the class object structure.
 */

struct edu_csdms_tools_BOVRasterFile__object {
  struct sidl_BaseClass__object                    d_sidl_baseclass;
  struct edu_csdms_tools_IRasterOutputFile__object 
    d_edu_csdms_tools_irasteroutputfile;
  struct edu_csdms_tools_BOVRasterFile__epv*       d_epv;
  struct edu_csdms_tools_BOVRasterFile__cstats     d_cstats;
  void*                                            d_data;
};

struct edu_csdms_tools_BOVRasterFile__external {
  struct edu_csdms_tools_BOVRasterFile__object*
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

const struct edu_csdms_tools_BOVRasterFile__external*
edu_csdms_tools_BOVRasterFile__externals(void);

extern struct edu_csdms_tools_BOVRasterFile__object*
edu_csdms_tools_BOVRasterFile__createObject(void* ddata,struct 
  sidl_BaseInterface__object ** _ex);

extern void edu_csdms_tools_BOVRasterFile__init(
  struct edu_csdms_tools_BOVRasterFile__object* self, void* ddata, struct 
    sidl_BaseInterface__object ** _ex);

extern void edu_csdms_tools_BOVRasterFile__getEPVs(
  struct sidl_BaseInterface__epv **s_arg_epv__sidl_baseinterface,
  struct sidl_BaseClass__epv **s_arg_epv__sidl_baseclass,
  struct edu_csdms_tools_IRasterOutputFile__epv 
    **s_arg_epv__edu_csdms_tools_irasteroutputfile,
  struct edu_csdms_tools_IRasterOutputFile__epv 
    **s_arg_epv_hooks__edu_csdms_tools_irasteroutputfile,
  struct edu_csdms_tools_BOVRasterFile__epv 
    **s_arg_epv__edu_csdms_tools_bovrasterfile,
  struct edu_csdms_tools_BOVRasterFile__epv 
    **s_arg_epv_hooks__edu_csdms_tools_bovrasterfile);

extern void edu_csdms_tools_BOVRasterFile__fini(
  struct edu_csdms_tools_BOVRasterFile__object* self, struct 
    sidl_BaseInterface__object ** _ex);

extern void edu_csdms_tools_BOVRasterFile__IOR_version(int32_t *major, int32_t 
  *minor);

struct sidl_BaseInterface__object* 
  skel_edu_csdms_tools_BOVRasterFile_fconnect_sidl_BaseInterface(const char* 
  url, sidl_bool ar, struct sidl_BaseInterface__object * *_ex);
struct edu_csdms_tools_BOVRasterFile__remote{
  int d_refcount;
  struct sidl_rmi_InstanceHandle__object *d_ih;
};

#ifdef __cplusplus
}
#endif
#endif
