/*
 * File:          edu_csdms_openmi_ElementSet_IOR.h
 * Symbol:        edu.csdms.openmi.ElementSet-v0.0
 * Symbol Type:   class
 * Babel Version: 1.4.0 (Revision: 6607 release-1-4-0-branch)
 * Description:   Intermediate Object Representation for edu.csdms.openmi.ElementSet
 * 
 * WARNING: Automatically generated; changes will be lost
 * 
 */

#ifndef included_edu_csdms_openmi_ElementSet_IOR_h
#define included_edu_csdms_openmi_ElementSet_IOR_h

#ifndef included_sidl_header_h
#include "sidl_header.h"
#endif
struct sidl_rmi_InstanceHandle__object;
#ifndef included_edu_csdms_openmi_ElementType_IOR_h
#include "edu_csdms_openmi_ElementType_IOR.h"
#endif
#ifndef included_edu_csdms_openmi_IElementSet_IOR_h
#include "edu_csdms_openmi_IElementSet_IOR.h"
#endif
#ifndef included_sidl_BaseClass_IOR_h
#include "sidl_BaseClass_IOR.h"
#endif

#ifdef __cplusplus
extern "C" {
#endif

/*
 * Symbol "edu.csdms.openmi.ElementSet" (version 0.0)
 */

struct edu_csdms_openmi_ElementSet__array;
struct edu_csdms_openmi_ElementSet__object;

/*
 * Forward references for external classes and interfaces.
 */

struct edu_csdms_openmi_Element__array;
struct edu_csdms_openmi_Element__object;
struct edu_csdms_openmi_ISpatialReference__array;
struct edu_csdms_openmi_ISpatialReference__object;
struct edu_csdms_openmi_SpatialReference__array;
struct edu_csdms_openmi_SpatialReference__object;
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

struct edu_csdms_openmi_ElementSet__epv {
  /* Implicit builtin methods */
  /* 0 */
  void* (*f__cast)(
    /* in */ struct edu_csdms_openmi_ElementSet__object* self,
    /* in */ const char* name,
    /* out */ struct sidl_BaseInterface__object **_ex);
  /* 1 */
  void (*f__delete)(
    /* in */ struct edu_csdms_openmi_ElementSet__object* self,
    /* out */ struct sidl_BaseInterface__object **_ex);
  /* 2 */
  void (*f__exec)(
    /* in */ struct edu_csdms_openmi_ElementSet__object* self,
    /* in */ const char* methodName,
    /* in */ struct sidl_rmi_Call__object* inArgs,
    /* in */ struct sidl_rmi_Return__object* outArgs,
    /* out */ struct sidl_BaseInterface__object **_ex);
  /* 3 */
  char* (*f__getURL)(
    /* in */ struct edu_csdms_openmi_ElementSet__object* self,
    /* out */ struct sidl_BaseInterface__object **_ex);
  /* 4 */
  void (*f__raddRef)(
    /* in */ struct edu_csdms_openmi_ElementSet__object* self,
    /* out */ struct sidl_BaseInterface__object **_ex);
  /* 5 */
  sidl_bool (*f__isRemote)(
    /* in */ struct edu_csdms_openmi_ElementSet__object* self,
    /* out */ struct sidl_BaseInterface__object **_ex);
  /* 6 */
  void (*f__set_hooks)(
    /* in */ struct edu_csdms_openmi_ElementSet__object* self,
    /* in */ sidl_bool enable,
    /* out */ struct sidl_BaseInterface__object **_ex);
  /* 7 */
  void (*f__set_contracts)(
    /* in */ struct edu_csdms_openmi_ElementSet__object* self,
    /* in */ sidl_bool enable,
    /* in */ const char* enfFilename,
    /* in */ sidl_bool resetCounters,
    /* out */ struct sidl_BaseInterface__object **_ex);
  /* 8 */
  void (*f__dump_stats)(
    /* in */ struct edu_csdms_openmi_ElementSet__object* self,
    /* in */ const char* filename,
    /* in */ const char* prefix,
    /* out */ struct sidl_BaseInterface__object **_ex);
  /* 9 */
  void (*f__ctor)(
    /* in */ struct edu_csdms_openmi_ElementSet__object* self,
    /* out */ struct sidl_BaseInterface__object **_ex);
  /* 10 */
  void (*f__ctor2)(
    /* in */ struct edu_csdms_openmi_ElementSet__object* self,
    /* in */ void* private_data,
    /* out */ struct sidl_BaseInterface__object **_ex);
  /* 11 */
  void (*f__dtor)(
    /* in */ struct edu_csdms_openmi_ElementSet__object* self,
    /* out */ struct sidl_BaseInterface__object **_ex);
  /* 12 */
  void (*f__load)(
    /* out */ struct sidl_BaseInterface__object **_ex);
  /* Methods introduced in sidl.BaseInterface-v0.9.17 */
  void (*f_addRef)(
    /* in */ struct edu_csdms_openmi_ElementSet__object* self,
    /* out */ struct sidl_BaseInterface__object **_ex);
  void (*f_deleteRef)(
    /* in */ struct edu_csdms_openmi_ElementSet__object* self,
    /* out */ struct sidl_BaseInterface__object **_ex);
  sidl_bool (*f_isSame)(
    /* in */ struct edu_csdms_openmi_ElementSet__object* self,
    /* in */ struct sidl_BaseInterface__object* iobj,
    /* out */ struct sidl_BaseInterface__object **_ex);
  sidl_bool (*f_isType)(
    /* in */ struct edu_csdms_openmi_ElementSet__object* self,
    /* in */ const char* name,
    /* out */ struct sidl_BaseInterface__object **_ex);
  struct sidl_ClassInfo__object* (*f_getClassInfo)(
    /* in */ struct edu_csdms_openmi_ElementSet__object* self,
    /* out */ struct sidl_BaseInterface__object **_ex);
  /* Methods introduced in sidl.BaseClass-v0.9.17 */
  /* Methods introduced in edu.csdms.openmi.IElementSet-v0.0 */
  char* (*f_getID)(
    /* in */ struct edu_csdms_openmi_ElementSet__object* self,
    /* out */ struct sidl_BaseInterface__object **_ex);
  char* (*f_getDescription)(
    /* in */ struct edu_csdms_openmi_ElementSet__object* self,
    /* out */ struct sidl_BaseInterface__object **_ex);
  struct edu_csdms_openmi_ISpatialReference__object* (*f_getSpatialReference)(
    /* in */ struct edu_csdms_openmi_ElementSet__object* self,
    /* out */ struct sidl_BaseInterface__object **_ex);
  int64_t (*f_getElementType)(
    /* in */ struct edu_csdms_openmi_ElementSet__object* self,
    /* out */ struct sidl_BaseInterface__object **_ex);
  int32_t (*f_getElementCount)(
    /* in */ struct edu_csdms_openmi_ElementSet__object* self,
    /* out */ struct sidl_BaseInterface__object **_ex);
  int32_t (*f_getVersion)(
    /* in */ struct edu_csdms_openmi_ElementSet__object* self,
    /* out */ struct sidl_BaseInterface__object **_ex);
  int32_t (*f_getElementIndex)(
    /* in */ struct edu_csdms_openmi_ElementSet__object* self,
    /* in */ const char* elementID,
    /* out */ struct sidl_BaseInterface__object **_ex);
  char* (*f_getElementID)(
    /* in */ struct edu_csdms_openmi_ElementSet__object* self,
    /* in */ int32_t elementIndex,
    /* out */ struct sidl_BaseInterface__object **_ex);
  int32_t (*f_getVertexCount)(
    /* in */ struct edu_csdms_openmi_ElementSet__object* self,
    /* in */ int32_t elementIndex,
    /* out */ struct sidl_BaseInterface__object **_ex);
  int32_t (*f_getFaceCount)(
    /* in */ struct edu_csdms_openmi_ElementSet__object* self,
    /* in */ int32_t elementIndex,
    /* out */ struct sidl_BaseInterface__object **_ex);
  struct sidl_int__array* (*f_getFaceVertexIndices)(
    /* in */ struct edu_csdms_openmi_ElementSet__object* self,
    /* in */ int32_t elementIndex,
    /* in */ int32_t faceIndex,
    /* out */ struct sidl_BaseInterface__object **_ex);
  double (*f_getXCoordinate)(
    /* in */ struct edu_csdms_openmi_ElementSet__object* self,
    /* in */ int32_t elementIndex,
    /* in */ int32_t vertexIndex,
    /* out */ struct sidl_BaseInterface__object **_ex);
  double (*f_getYCoordinate)(
    /* in */ struct edu_csdms_openmi_ElementSet__object* self,
    /* in */ int32_t elementIndex,
    /* in */ int32_t vertexIndex,
    /* out */ struct sidl_BaseInterface__object **_ex);
  double (*f_getZCoordinate)(
    /* in */ struct edu_csdms_openmi_ElementSet__object* self,
    /* in */ int32_t elementIndex,
    /* in */ int32_t vertexIndex,
    /* out */ struct sidl_BaseInterface__object **_ex);
  /* Methods introduced in edu.csdms.openmi.ElementSet-v0.0 */
  void (*f_setID)(
    /* in */ struct edu_csdms_openmi_ElementSet__object* self,
    /* in */ const char* ID,
    /* out */ struct sidl_BaseInterface__object **_ex);
  void (*f_setElements)(
    /* in */ struct edu_csdms_openmi_ElementSet__object* self,
    /* in array<edu.csdms.openmi.Element> */ struct 
      edu_csdms_openmi_Element__array* values,
    /* out */ struct sidl_BaseInterface__object **_ex);
  void (*f_addElement)(
    /* in */ struct edu_csdms_openmi_ElementSet__object* self,
    /* in */ struct edu_csdms_openmi_Element__object* element,
    /* out */ struct sidl_BaseInterface__object **_ex);
  void (*f_setElementType)(
    /* in */ struct edu_csdms_openmi_ElementSet__object* self,
    /* in */ int64_t elementType,
    /* out */ struct sidl_BaseInterface__object **_ex);
  void (*f_setSpatialReference)(
    /* in */ struct edu_csdms_openmi_ElementSet__object* self,
    /* in */ struct edu_csdms_openmi_ISpatialReference__object* 
      spatialReference,
    /* out */ struct sidl_BaseInterface__object **_ex);
  void (*f_setRasterGrid)(
    /* in */ struct edu_csdms_openmi_ElementSet__object* self,
    /* in */ int32_t nx,
    /* in */ int32_t ny,
    /* in */ double dx,
    /* in */ double dy,
    /* in */ double x0,
    /* in */ double y0,
    /* out */ struct sidl_BaseInterface__object **_ex);
  void (*f_boccaForceUsePortInclude)(
    /* in */ struct edu_csdms_openmi_ElementSet__object* self,
    /* in */ struct edu_csdms_openmi_SpatialReference__object* dummy0,
    /* in */ struct edu_csdms_openmi_Element__object* dummy1,
    /* in */ struct edu_csdms_openmi_ISpatialReference__object* dummy2,
    /* out */ struct sidl_BaseInterface__object **_ex);
};

/*
 * Declare the method pre hooks entry point vector.
 */

struct edu_csdms_openmi_ElementSet__pre_epv {
  void (*f_setID_pre)(
    /* in */ struct edu_csdms_openmi_ElementSet__object* self,
    /* in */ const char* ID,
    /* out */ struct sidl_BaseInterface__object **_ex);
  void (*f_setElements_pre)(
    /* in */ struct edu_csdms_openmi_ElementSet__object* self,
    /* in array<edu.csdms.openmi.Element> */ struct 
      edu_csdms_openmi_Element__array* values,
    /* out */ struct sidl_BaseInterface__object **_ex);
  void (*f_addElement_pre)(
    /* in */ struct edu_csdms_openmi_ElementSet__object* self,
    /* in */ struct edu_csdms_openmi_Element__object* element,
    /* out */ struct sidl_BaseInterface__object **_ex);
  void (*f_setElementType_pre)(
    /* in */ struct edu_csdms_openmi_ElementSet__object* self,
    /* in */ int64_t elementType,
    /* out */ struct sidl_BaseInterface__object **_ex);
  void (*f_setSpatialReference_pre)(
    /* in */ struct edu_csdms_openmi_ElementSet__object* self,
    /* in */ struct edu_csdms_openmi_ISpatialReference__object* 
      spatialReference,
    /* out */ struct sidl_BaseInterface__object **_ex);
  void (*f_setRasterGrid_pre)(
    /* in */ struct edu_csdms_openmi_ElementSet__object* self,
    /* in */ int32_t nx,
    /* in */ int32_t ny,
    /* in */ double dx,
    /* in */ double dy,
    /* in */ double x0,
    /* in */ double y0,
    /* out */ struct sidl_BaseInterface__object **_ex);
  void (*f_boccaForceUsePortInclude_pre)(
    /* in */ struct edu_csdms_openmi_ElementSet__object* self,
    /* in */ struct edu_csdms_openmi_SpatialReference__object* dummy0,
    /* in */ struct edu_csdms_openmi_Element__object* dummy1,
    /* in */ struct edu_csdms_openmi_ISpatialReference__object* dummy2,
    /* out */ struct sidl_BaseInterface__object **_ex);
  void (*f_getID_pre)(
    /* in */ struct edu_csdms_openmi_ElementSet__object* self,
    /* out */ struct sidl_BaseInterface__object **_ex);
  void (*f_getDescription_pre)(
    /* in */ struct edu_csdms_openmi_ElementSet__object* self,
    /* out */ struct sidl_BaseInterface__object **_ex);
  void (*f_getSpatialReference_pre)(
    /* in */ struct edu_csdms_openmi_ElementSet__object* self,
    /* out */ struct sidl_BaseInterface__object **_ex);
  void (*f_getElementType_pre)(
    /* in */ struct edu_csdms_openmi_ElementSet__object* self,
    /* out */ struct sidl_BaseInterface__object **_ex);
  void (*f_getElementCount_pre)(
    /* in */ struct edu_csdms_openmi_ElementSet__object* self,
    /* out */ struct sidl_BaseInterface__object **_ex);
  void (*f_getVersion_pre)(
    /* in */ struct edu_csdms_openmi_ElementSet__object* self,
    /* out */ struct sidl_BaseInterface__object **_ex);
  void (*f_getElementIndex_pre)(
    /* in */ struct edu_csdms_openmi_ElementSet__object* self,
    /* in */ const char* elementID,
    /* out */ struct sidl_BaseInterface__object **_ex);
  void (*f_getElementID_pre)(
    /* in */ struct edu_csdms_openmi_ElementSet__object* self,
    /* in */ int32_t elementIndex,
    /* out */ struct sidl_BaseInterface__object **_ex);
  void (*f_getVertexCount_pre)(
    /* in */ struct edu_csdms_openmi_ElementSet__object* self,
    /* in */ int32_t elementIndex,
    /* out */ struct sidl_BaseInterface__object **_ex);
  void (*f_getFaceCount_pre)(
    /* in */ struct edu_csdms_openmi_ElementSet__object* self,
    /* in */ int32_t elementIndex,
    /* out */ struct sidl_BaseInterface__object **_ex);
  void (*f_getFaceVertexIndices_pre)(
    /* in */ struct edu_csdms_openmi_ElementSet__object* self,
    /* in */ int32_t elementIndex,
    /* in */ int32_t faceIndex,
    /* out */ struct sidl_BaseInterface__object **_ex);
  void (*f_getXCoordinate_pre)(
    /* in */ struct edu_csdms_openmi_ElementSet__object* self,
    /* in */ int32_t elementIndex,
    /* in */ int32_t vertexIndex,
    /* out */ struct sidl_BaseInterface__object **_ex);
  void (*f_getYCoordinate_pre)(
    /* in */ struct edu_csdms_openmi_ElementSet__object* self,
    /* in */ int32_t elementIndex,
    /* in */ int32_t vertexIndex,
    /* out */ struct sidl_BaseInterface__object **_ex);
  void (*f_getZCoordinate_pre)(
    /* in */ struct edu_csdms_openmi_ElementSet__object* self,
    /* in */ int32_t elementIndex,
    /* in */ int32_t vertexIndex,
    /* out */ struct sidl_BaseInterface__object **_ex);
};

/*
 * Declare the method post hooks entry point vector.
 */

struct edu_csdms_openmi_ElementSet__post_epv {
  void (*f_setID_post)(
    /* in */ struct edu_csdms_openmi_ElementSet__object* self,
    /* in */ const char* ID,
    /* out */ struct sidl_BaseInterface__object **_ex);
  void (*f_setElements_post)(
    /* in */ struct edu_csdms_openmi_ElementSet__object* self,
    /* in array<edu.csdms.openmi.Element> */ struct 
      edu_csdms_openmi_Element__array* values,
    /* out */ struct sidl_BaseInterface__object **_ex);
  void (*f_addElement_post)(
    /* in */ struct edu_csdms_openmi_ElementSet__object* self,
    /* in */ struct edu_csdms_openmi_Element__object* element,
    /* out */ struct sidl_BaseInterface__object **_ex);
  void (*f_setElementType_post)(
    /* in */ struct edu_csdms_openmi_ElementSet__object* self,
    /* in */ int64_t elementType,
    /* out */ struct sidl_BaseInterface__object **_ex);
  void (*f_setSpatialReference_post)(
    /* in */ struct edu_csdms_openmi_ElementSet__object* self,
    /* in */ struct edu_csdms_openmi_ISpatialReference__object* 
      spatialReference,
    /* out */ struct sidl_BaseInterface__object **_ex);
  void (*f_setRasterGrid_post)(
    /* in */ struct edu_csdms_openmi_ElementSet__object* self,
    /* in */ int32_t nx,
    /* in */ int32_t ny,
    /* in */ double dx,
    /* in */ double dy,
    /* in */ double x0,
    /* in */ double y0,
    /* out */ struct sidl_BaseInterface__object **_ex);
  void (*f_boccaForceUsePortInclude_post)(
    /* in */ struct edu_csdms_openmi_ElementSet__object* self,
    /* in */ struct edu_csdms_openmi_SpatialReference__object* dummy0,
    /* in */ struct edu_csdms_openmi_Element__object* dummy1,
    /* in */ struct edu_csdms_openmi_ISpatialReference__object* dummy2,
    /* out */ struct sidl_BaseInterface__object **_ex);
  void (*f_getID_post)(
    /* in */ struct edu_csdms_openmi_ElementSet__object* self,
    /* in */ const char* _retval,
    /* out */ struct sidl_BaseInterface__object **_ex);
  void (*f_getDescription_post)(
    /* in */ struct edu_csdms_openmi_ElementSet__object* self,
    /* in */ const char* _retval,
    /* out */ struct sidl_BaseInterface__object **_ex);
  void (*f_getSpatialReference_post)(
    /* in */ struct edu_csdms_openmi_ElementSet__object* self,
    /* in */ struct edu_csdms_openmi_ISpatialReference__object* _retval,
    /* out */ struct sidl_BaseInterface__object **_ex);
  void (*f_getElementType_post)(
    /* in */ struct edu_csdms_openmi_ElementSet__object* self,
    /* in */ int64_t _retval,
    /* out */ struct sidl_BaseInterface__object **_ex);
  void (*f_getElementCount_post)(
    /* in */ struct edu_csdms_openmi_ElementSet__object* self,
    /* in */ int32_t _retval,
    /* out */ struct sidl_BaseInterface__object **_ex);
  void (*f_getVersion_post)(
    /* in */ struct edu_csdms_openmi_ElementSet__object* self,
    /* in */ int32_t _retval,
    /* out */ struct sidl_BaseInterface__object **_ex);
  void (*f_getElementIndex_post)(
    /* in */ struct edu_csdms_openmi_ElementSet__object* self,
    /* in */ const char* elementID,
    /* in */ int32_t _retval,
    /* out */ struct sidl_BaseInterface__object **_ex);
  void (*f_getElementID_post)(
    /* in */ struct edu_csdms_openmi_ElementSet__object* self,
    /* in */ int32_t elementIndex,
    /* in */ const char* _retval,
    /* out */ struct sidl_BaseInterface__object **_ex);
  void (*f_getVertexCount_post)(
    /* in */ struct edu_csdms_openmi_ElementSet__object* self,
    /* in */ int32_t elementIndex,
    /* in */ int32_t _retval,
    /* out */ struct sidl_BaseInterface__object **_ex);
  void (*f_getFaceCount_post)(
    /* in */ struct edu_csdms_openmi_ElementSet__object* self,
    /* in */ int32_t elementIndex,
    /* in */ int32_t _retval,
    /* out */ struct sidl_BaseInterface__object **_ex);
  void (*f_getFaceVertexIndices_post)(
    /* in */ struct edu_csdms_openmi_ElementSet__object* self,
    /* in */ int32_t elementIndex,
    /* in */ int32_t faceIndex,
    /* in array<int> */ struct sidl_int__array* _retval,
    /* out */ struct sidl_BaseInterface__object **_ex);
  void (*f_getXCoordinate_post)(
    /* in */ struct edu_csdms_openmi_ElementSet__object* self,
    /* in */ int32_t elementIndex,
    /* in */ int32_t vertexIndex,
    /* in */ double _retval,
    /* out */ struct sidl_BaseInterface__object **_ex);
  void (*f_getYCoordinate_post)(
    /* in */ struct edu_csdms_openmi_ElementSet__object* self,
    /* in */ int32_t elementIndex,
    /* in */ int32_t vertexIndex,
    /* in */ double _retval,
    /* out */ struct sidl_BaseInterface__object **_ex);
  void (*f_getZCoordinate_post)(
    /* in */ struct edu_csdms_openmi_ElementSet__object* self,
    /* in */ int32_t elementIndex,
    /* in */ int32_t vertexIndex,
    /* in */ double _retval,
    /* out */ struct sidl_BaseInterface__object **_ex);
};

/*
 * Define the controls and statistics structure.
 */


struct edu_csdms_openmi_ElementSet__cstats {
  sidl_bool use_hooks;
};

/*
 * Define the class object structure.
 */

struct edu_csdms_openmi_ElementSet__object {
  struct sidl_BaseClass__object               d_sidl_baseclass;
  struct edu_csdms_openmi_IElementSet__object d_edu_csdms_openmi_ielementset;
  struct edu_csdms_openmi_ElementSet__epv*    d_epv;
  struct edu_csdms_openmi_ElementSet__cstats  d_cstats;
  void*                                       d_data;
};

struct edu_csdms_openmi_ElementSet__external {
  struct edu_csdms_openmi_ElementSet__object*
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

const struct edu_csdms_openmi_ElementSet__external*
edu_csdms_openmi_ElementSet__externals(void);

extern struct edu_csdms_openmi_ElementSet__object*
edu_csdms_openmi_ElementSet__createObject(void* ddata,struct 
  sidl_BaseInterface__object ** _ex);

extern void edu_csdms_openmi_ElementSet__init(
  struct edu_csdms_openmi_ElementSet__object* self, void* ddata, struct 
    sidl_BaseInterface__object ** _ex);

extern void edu_csdms_openmi_ElementSet__getEPVs(
  struct sidl_BaseInterface__epv **s_arg_epv__sidl_baseinterface,
  struct sidl_BaseClass__epv **s_arg_epv__sidl_baseclass,
  struct edu_csdms_openmi_IElementSet__epv 
    **s_arg_epv__edu_csdms_openmi_ielementset,
  struct edu_csdms_openmi_IElementSet__epv 
    **s_arg_epv_hooks__edu_csdms_openmi_ielementset,
  struct edu_csdms_openmi_ElementSet__epv 
    **s_arg_epv__edu_csdms_openmi_elementset,
  struct edu_csdms_openmi_ElementSet__epv 
    **s_arg_epv_hooks__edu_csdms_openmi_elementset);

extern void edu_csdms_openmi_ElementSet__fini(
  struct edu_csdms_openmi_ElementSet__object* self, struct 
    sidl_BaseInterface__object ** _ex);

extern void edu_csdms_openmi_ElementSet__IOR_version(int32_t *major, int32_t 
  *minor);

struct edu_csdms_openmi_SpatialReference__object* 
  skel_edu_csdms_openmi_ElementSet_fconnect_edu_csdms_openmi_SpatialReference(
  const char* url, sidl_bool ar, struct sidl_BaseInterface__object * *_ex);
struct edu_csdms_openmi_Element__object* 
  skel_edu_csdms_openmi_ElementSet_fconnect_edu_csdms_openmi_Element(const 
  char* url, sidl_bool ar, struct sidl_BaseInterface__object * *_ex);
struct sidl_BaseInterface__object* 
  skel_edu_csdms_openmi_ElementSet_fconnect_sidl_BaseInterface(const char* url, 
  sidl_bool ar, struct sidl_BaseInterface__object * *_ex);
struct edu_csdms_openmi_ISpatialReference__object* 
  skel_edu_csdms_openmi_ElementSet_fconnect_edu_csdms_openmi_ISpatialReference(
  const char* url, sidl_bool ar, struct sidl_BaseInterface__object * *_ex);
struct edu_csdms_openmi_ElementSet__remote{
  int d_refcount;
  struct sidl_rmi_InstanceHandle__object *d_ih;
};

#ifdef __cplusplus
}
#endif
#endif
