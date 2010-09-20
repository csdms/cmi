/*
 * File:          edu_csdms_openmi_Element_IOR.h
 * Symbol:        edu.csdms.openmi.Element-v0.0
 * Symbol Type:   class
 * Babel Version: 1.4.0 (Revision: 6607 release-1-4-0-branch)
 * Description:   Intermediate Object Representation for edu.csdms.openmi.Element
 * 
 * WARNING: Automatically generated; changes will be lost
 * 
 */

#ifndef included_edu_csdms_openmi_Element_IOR_h
#define included_edu_csdms_openmi_Element_IOR_h

#ifndef included_sidl_header_h
#include "sidl_header.h"
#endif
struct sidl_rmi_InstanceHandle__object;
#ifndef included_sidl_BaseClass_IOR_h
#include "sidl_BaseClass_IOR.h"
#endif

#ifdef __cplusplus
extern "C" {
#endif

/*
 * Symbol "edu.csdms.openmi.Element" (version 0.0)
 */

struct edu_csdms_openmi_Element__array;
struct edu_csdms_openmi_Element__object;

/*
 * Forward references for external classes and interfaces.
 */

struct edu_csdms_openmi_Vertex__array;
struct edu_csdms_openmi_Vertex__object;
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

struct edu_csdms_openmi_Element__epv {
  /* Implicit builtin methods */
  /* 0 */
  void* (*f__cast)(
    /* in */ struct edu_csdms_openmi_Element__object* self,
    /* in */ const char* name,
    /* out */ struct sidl_BaseInterface__object **_ex);
  /* 1 */
  void (*f__delete)(
    /* in */ struct edu_csdms_openmi_Element__object* self,
    /* out */ struct sidl_BaseInterface__object **_ex);
  /* 2 */
  void (*f__exec)(
    /* in */ struct edu_csdms_openmi_Element__object* self,
    /* in */ const char* methodName,
    /* in */ struct sidl_rmi_Call__object* inArgs,
    /* in */ struct sidl_rmi_Return__object* outArgs,
    /* out */ struct sidl_BaseInterface__object **_ex);
  /* 3 */
  char* (*f__getURL)(
    /* in */ struct edu_csdms_openmi_Element__object* self,
    /* out */ struct sidl_BaseInterface__object **_ex);
  /* 4 */
  void (*f__raddRef)(
    /* in */ struct edu_csdms_openmi_Element__object* self,
    /* out */ struct sidl_BaseInterface__object **_ex);
  /* 5 */
  sidl_bool (*f__isRemote)(
    /* in */ struct edu_csdms_openmi_Element__object* self,
    /* out */ struct sidl_BaseInterface__object **_ex);
  /* 6 */
  void (*f__set_hooks)(
    /* in */ struct edu_csdms_openmi_Element__object* self,
    /* in */ sidl_bool enable,
    /* out */ struct sidl_BaseInterface__object **_ex);
  /* 7 */
  void (*f__set_contracts)(
    /* in */ struct edu_csdms_openmi_Element__object* self,
    /* in */ sidl_bool enable,
    /* in */ const char* enfFilename,
    /* in */ sidl_bool resetCounters,
    /* out */ struct sidl_BaseInterface__object **_ex);
  /* 8 */
  void (*f__dump_stats)(
    /* in */ struct edu_csdms_openmi_Element__object* self,
    /* in */ const char* filename,
    /* in */ const char* prefix,
    /* out */ struct sidl_BaseInterface__object **_ex);
  /* 9 */
  void (*f__ctor)(
    /* in */ struct edu_csdms_openmi_Element__object* self,
    /* out */ struct sidl_BaseInterface__object **_ex);
  /* 10 */
  void (*f__ctor2)(
    /* in */ struct edu_csdms_openmi_Element__object* self,
    /* in */ void* private_data,
    /* out */ struct sidl_BaseInterface__object **_ex);
  /* 11 */
  void (*f__dtor)(
    /* in */ struct edu_csdms_openmi_Element__object* self,
    /* out */ struct sidl_BaseInterface__object **_ex);
  /* 12 */
  void (*f__load)(
    /* out */ struct sidl_BaseInterface__object **_ex);
  /* Methods introduced in sidl.BaseInterface-v0.9.17 */
  void (*f_addRef)(
    /* in */ struct edu_csdms_openmi_Element__object* self,
    /* out */ struct sidl_BaseInterface__object **_ex);
  void (*f_deleteRef)(
    /* in */ struct edu_csdms_openmi_Element__object* self,
    /* out */ struct sidl_BaseInterface__object **_ex);
  sidl_bool (*f_isSame)(
    /* in */ struct edu_csdms_openmi_Element__object* self,
    /* in */ struct sidl_BaseInterface__object* iobj,
    /* out */ struct sidl_BaseInterface__object **_ex);
  sidl_bool (*f_isType)(
    /* in */ struct edu_csdms_openmi_Element__object* self,
    /* in */ const char* name,
    /* out */ struct sidl_BaseInterface__object **_ex);
  struct sidl_ClassInfo__object* (*f_getClassInfo)(
    /* in */ struct edu_csdms_openmi_Element__object* self,
    /* out */ struct sidl_BaseInterface__object **_ex);
  /* Methods introduced in sidl.BaseClass-v0.9.17 */
  /* Methods introduced in edu.csdms.openmi.Element-v0.0 */
  void (*f_setVertices)(
    /* in */ struct edu_csdms_openmi_Element__object* self,
    /* in array<edu.csdms.openmi.Vertex> */ struct 
      edu_csdms_openmi_Vertex__array* vertices,
    /* out */ struct sidl_BaseInterface__object **_ex);
  char* (*f_getID)(
    /* in */ struct edu_csdms_openmi_Element__object* self,
    /* out */ struct sidl_BaseInterface__object **_ex);
  void (*f_setID)(
    /* in */ struct edu_csdms_openmi_Element__object* self,
    /* in */ const char* ID,
    /* out */ struct sidl_BaseInterface__object **_ex);
  struct edu_csdms_openmi_Vertex__object* (*f_getVertex)(
    /* in */ struct edu_csdms_openmi_Element__object* self,
    /* in */ int32_t index,
    /* out */ struct sidl_BaseInterface__object **_ex);
  int32_t (*f_getVertexCount)(
    /* in */ struct edu_csdms_openmi_Element__object* self,
    /* out */ struct sidl_BaseInterface__object **_ex);
  void (*f_addVertex)(
    /* in */ struct edu_csdms_openmi_Element__object* self,
    /* in */ struct edu_csdms_openmi_Vertex__object* vertex,
    /* out */ struct sidl_BaseInterface__object **_ex);
  int32_t (*f_getFaceCount)(
    /* in */ struct edu_csdms_openmi_Element__object* self,
    /* out */ struct sidl_BaseInterface__object **_ex);
  void (*f_addFace)(
    /* in */ struct edu_csdms_openmi_Element__object* self,
    /* in array<int> */ struct sidl_int__array* vertexIndices,
    /* out */ struct sidl_BaseInterface__object **_ex);
  struct sidl_int__array* (*f_getFaceVertexIndices)(
    /* in */ struct edu_csdms_openmi_Element__object* self,
    /* in */ int32_t faceIndex,
    /* out */ struct sidl_BaseInterface__object **_ex);
  void (*f_boccaForceUsePortInclude)(
    /* in */ struct edu_csdms_openmi_Element__object* self,
    /* in */ struct edu_csdms_openmi_Vertex__object* dummy0,
    /* out */ struct sidl_BaseInterface__object **_ex);
};

/*
 * Declare the method pre hooks entry point vector.
 */

struct edu_csdms_openmi_Element__pre_epv {
  void (*f_setVertices_pre)(
    /* in */ struct edu_csdms_openmi_Element__object* self,
    /* in array<edu.csdms.openmi.Vertex> */ struct 
      edu_csdms_openmi_Vertex__array* vertices,
    /* out */ struct sidl_BaseInterface__object **_ex);
  void (*f_getID_pre)(
    /* in */ struct edu_csdms_openmi_Element__object* self,
    /* out */ struct sidl_BaseInterface__object **_ex);
  void (*f_setID_pre)(
    /* in */ struct edu_csdms_openmi_Element__object* self,
    /* in */ const char* ID,
    /* out */ struct sidl_BaseInterface__object **_ex);
  void (*f_getVertex_pre)(
    /* in */ struct edu_csdms_openmi_Element__object* self,
    /* in */ int32_t index,
    /* out */ struct sidl_BaseInterface__object **_ex);
  void (*f_getVertexCount_pre)(
    /* in */ struct edu_csdms_openmi_Element__object* self,
    /* out */ struct sidl_BaseInterface__object **_ex);
  void (*f_addVertex_pre)(
    /* in */ struct edu_csdms_openmi_Element__object* self,
    /* in */ struct edu_csdms_openmi_Vertex__object* vertex,
    /* out */ struct sidl_BaseInterface__object **_ex);
  void (*f_getFaceCount_pre)(
    /* in */ struct edu_csdms_openmi_Element__object* self,
    /* out */ struct sidl_BaseInterface__object **_ex);
  void (*f_addFace_pre)(
    /* in */ struct edu_csdms_openmi_Element__object* self,
    /* in array<int> */ struct sidl_int__array* vertexIndices,
    /* out */ struct sidl_BaseInterface__object **_ex);
  void (*f_getFaceVertexIndices_pre)(
    /* in */ struct edu_csdms_openmi_Element__object* self,
    /* in */ int32_t faceIndex,
    /* out */ struct sidl_BaseInterface__object **_ex);
  void (*f_boccaForceUsePortInclude_pre)(
    /* in */ struct edu_csdms_openmi_Element__object* self,
    /* in */ struct edu_csdms_openmi_Vertex__object* dummy0,
    /* out */ struct sidl_BaseInterface__object **_ex);
};

/*
 * Declare the method post hooks entry point vector.
 */

struct edu_csdms_openmi_Element__post_epv {
  void (*f_setVertices_post)(
    /* in */ struct edu_csdms_openmi_Element__object* self,
    /* in array<edu.csdms.openmi.Vertex> */ struct 
      edu_csdms_openmi_Vertex__array* vertices,
    /* out */ struct sidl_BaseInterface__object **_ex);
  void (*f_getID_post)(
    /* in */ struct edu_csdms_openmi_Element__object* self,
    /* in */ const char* _retval,
    /* out */ struct sidl_BaseInterface__object **_ex);
  void (*f_setID_post)(
    /* in */ struct edu_csdms_openmi_Element__object* self,
    /* in */ const char* ID,
    /* out */ struct sidl_BaseInterface__object **_ex);
  void (*f_getVertex_post)(
    /* in */ struct edu_csdms_openmi_Element__object* self,
    /* in */ int32_t index,
    /* in */ struct edu_csdms_openmi_Vertex__object* _retval,
    /* out */ struct sidl_BaseInterface__object **_ex);
  void (*f_getVertexCount_post)(
    /* in */ struct edu_csdms_openmi_Element__object* self,
    /* in */ int32_t _retval,
    /* out */ struct sidl_BaseInterface__object **_ex);
  void (*f_addVertex_post)(
    /* in */ struct edu_csdms_openmi_Element__object* self,
    /* in */ struct edu_csdms_openmi_Vertex__object* vertex,
    /* out */ struct sidl_BaseInterface__object **_ex);
  void (*f_getFaceCount_post)(
    /* in */ struct edu_csdms_openmi_Element__object* self,
    /* in */ int32_t _retval,
    /* out */ struct sidl_BaseInterface__object **_ex);
  void (*f_addFace_post)(
    /* in */ struct edu_csdms_openmi_Element__object* self,
    /* in array<int> */ struct sidl_int__array* vertexIndices,
    /* out */ struct sidl_BaseInterface__object **_ex);
  void (*f_getFaceVertexIndices_post)(
    /* in */ struct edu_csdms_openmi_Element__object* self,
    /* in */ int32_t faceIndex,
    /* in array<int> */ struct sidl_int__array* _retval,
    /* out */ struct sidl_BaseInterface__object **_ex);
  void (*f_boccaForceUsePortInclude_post)(
    /* in */ struct edu_csdms_openmi_Element__object* self,
    /* in */ struct edu_csdms_openmi_Vertex__object* dummy0,
    /* out */ struct sidl_BaseInterface__object **_ex);
};

/*
 * Define the controls and statistics structure.
 */


struct edu_csdms_openmi_Element__cstats {
  sidl_bool use_hooks;
};

/*
 * Define the class object structure.
 */

struct edu_csdms_openmi_Element__object {
  struct sidl_BaseClass__object           d_sidl_baseclass;
  struct edu_csdms_openmi_Element__epv*   d_epv;
  struct edu_csdms_openmi_Element__cstats d_cstats;
  void*                                   d_data;
};

struct edu_csdms_openmi_Element__external {
  struct edu_csdms_openmi_Element__object*
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

const struct edu_csdms_openmi_Element__external*
edu_csdms_openmi_Element__externals(void);

extern struct edu_csdms_openmi_Element__object*
edu_csdms_openmi_Element__createObject(void* ddata,struct 
  sidl_BaseInterface__object ** _ex);

extern void edu_csdms_openmi_Element__init(
  struct edu_csdms_openmi_Element__object* self, void* ddata, struct 
    sidl_BaseInterface__object ** _ex);

extern void edu_csdms_openmi_Element__getEPVs(
  struct sidl_BaseInterface__epv **s_arg_epv__sidl_baseinterface,
  struct sidl_BaseClass__epv **s_arg_epv__sidl_baseclass,
  struct edu_csdms_openmi_Element__epv **s_arg_epv__edu_csdms_openmi_element,
  struct edu_csdms_openmi_Element__epv 
    **s_arg_epv_hooks__edu_csdms_openmi_element);

extern void edu_csdms_openmi_Element__fini(
  struct edu_csdms_openmi_Element__object* self, struct 
    sidl_BaseInterface__object ** _ex);

extern void edu_csdms_openmi_Element__IOR_version(int32_t *major, int32_t 
  *minor);

struct sidl_BaseInterface__object* 
  skel_edu_csdms_openmi_Element_fconnect_sidl_BaseInterface(const char* url, 
  sidl_bool ar, struct sidl_BaseInterface__object * *_ex);
struct edu_csdms_openmi_Vertex__object* 
  skel_edu_csdms_openmi_Element_fconnect_edu_csdms_openmi_Vertex(const char* 
  url, sidl_bool ar, struct sidl_BaseInterface__object * *_ex);
struct edu_csdms_openmi_Element__remote{
  int d_refcount;
  struct sidl_rmi_InstanceHandle__object *d_ih;
};

#ifdef __cplusplus
}
#endif
#endif
