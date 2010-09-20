/*
 * File:          edu_csdms_tools_NCRasterFile_Module.h
 * Symbol:        edu.csdms.tools.NCRasterFile-v0.0
 * Symbol Type:   class
 * Babel Version: 1.4.0 (Revision: 6607 release-1-4-0-branch)
 * Description:   expose a constructor for the Python wrapper
 * 
 * WARNING: Automatically generated; only changes within splicers preserved
 * 
 */

/*
 * THIS CODE IS AUTOMATICALLY GENERATED BY THE BABEL
 * COMPILER. DO NOT EDIT THIS!
 * 
 * External clients need an entry point to wrap a pointer
 * to an instance of edu.csdms.tools.NCRasterFile.
 * This header files defines two methods that such clients
 * will need.
 *     edu_csdms_tools_NCRasterFile__import
 *         This should be called in the client's init
 *         module method.
 *     edu_csdms_tools_NCRasterFile__wrap
 *         This will wrap an IOR in a Python object.
 */

#ifndef included_edu_csdms_tools_NCRasterFile_MODULE
#define included_edu_csdms_tools_NCRasterFile_MODULE

#include <Python.h>
#include "sidlType.h"
#ifdef HAVE_PTHREAD
#include <pthread.h>
#endif /* HAVE_PTHREAD */

#ifdef __cplusplus
extern "C" {
#endif

struct sidl__array;

/* Forward declaration of IOR structure */
struct edu_csdms_tools_NCRasterFile__object;
struct edu_csdms_tools_NCRasterFile__array;
struct sidl_BaseInterface__object;

#define edu_csdms_tools_NCRasterFile__wrap_NUM 0
#define edu_csdms_tools_NCRasterFile__wrap_RETURN PyObject *
#define edu_csdms_tools_NCRasterFile__wrap_PROTO (const struct edu_csdms_tools_NCRasterFile__object *sidlobj)

#define edu_csdms_tools_NCRasterFile__convert_NUM 1
#define edu_csdms_tools_NCRasterFile__convert_RETURN int
#define edu_csdms_tools_NCRasterFile__convert_PROTO (PyObject *obj, struct edu_csdms_tools_NCRasterFile__object **sidlobj)

#define edu_csdms_tools_NCRasterFile__convert_python_array_NUM 2
#define edu_csdms_tools_NCRasterFile__convert_python_array_RETURN int
#define edu_csdms_tools_NCRasterFile__convert_python_array_PROTO (PyObject *obj, struct edu_csdms_tools_NCRasterFile__array **sidlarray)

#define edu_csdms_tools_NCRasterFile__convert_sidl_array_NUM 3
#define edu_csdms_tools_NCRasterFile__convert_sidl_array_RETURN PyObject *
#define edu_csdms_tools_NCRasterFile__convert_sidl_array_PROTO (struct sidl__array *sidlarray)

#define edu_csdms_tools_NCRasterFile__weakRef_NUM 4
#define edu_csdms_tools_NCRasterFile__weakRef_RETURN PyObject *
#define edu_csdms_tools_NCRasterFile__weakRef_PROTO (struct edu_csdms_tools_NCRasterFile__object *sidlobj)

#define edu_csdms_tools_NCRasterFile_deref_NUM 5
#define edu_csdms_tools_NCRasterFile_deref_RETURN void
#define edu_csdms_tools_NCRasterFile_deref_PROTO (struct edu_csdms_tools_NCRasterFile__object *sidlobj)

#define edu_csdms_tools_NCRasterFile__newRef_NUM 6
#define edu_csdms_tools_NCRasterFile__newRef_RETURN PyObject *
#define edu_csdms_tools_NCRasterFile__newRef_PROTO (struct edu_csdms_tools_NCRasterFile__object *sidlobj)

#define edu_csdms_tools_NCRasterFile__addRef_NUM 7
#define edu_csdms_tools_NCRasterFile__addRef_RETURN void
#define edu_csdms_tools_NCRasterFile__addRef_PROTO (struct edu_csdms_tools_NCRasterFile__object *sidlobj)

#define edu_csdms_tools_NCRasterFile_PyType_NUM 8
#define edu_csdms_tools_NCRasterFile_PyType_RETURN PyTypeObject *
#define edu_csdms_tools_NCRasterFile_PyType_PROTO (void)

#define edu_csdms_tools_NCRasterFile__connectI_NUM 9
#define edu_csdms_tools_NCRasterFile__connectI_RETURN struct edu_csdms_tools_NCRasterFile__object* 
#define edu_csdms_tools_NCRasterFile__connectI_PROTO (const char* url, sidl_bool ar, struct sidl_BaseInterface__object ** _ex)

#define edu_csdms_tools_NCRasterFile__API_NUM 10

#ifdef edu_csdms_tools_NCRasterFile_INTERNAL

#define edu_csdms_tools_NCRasterFile__import() ;


/*
 * This declaration is not for clients.
 */

static edu_csdms_tools_NCRasterFile__wrap_RETURN
edu_csdms_tools_NCRasterFile__wrap
edu_csdms_tools_NCRasterFile__wrap_PROTO;

static edu_csdms_tools_NCRasterFile__convert_RETURN
edu_csdms_tools_NCRasterFile__convert
edu_csdms_tools_NCRasterFile__convert_PROTO;

static edu_csdms_tools_NCRasterFile__convert_python_array_RETURN
edu_csdms_tools_NCRasterFile__convert_python_array
edu_csdms_tools_NCRasterFile__convert_python_array_PROTO;

static edu_csdms_tools_NCRasterFile__convert_sidl_array_RETURN
edu_csdms_tools_NCRasterFile__convert_sidl_array
edu_csdms_tools_NCRasterFile__convert_sidl_array_PROTO;

static edu_csdms_tools_NCRasterFile__weakRef_RETURN
edu_csdms_tools_NCRasterFile__weakRef
edu_csdms_tools_NCRasterFile__weakRef_PROTO;

static edu_csdms_tools_NCRasterFile_deref_RETURN
edu_csdms_tools_NCRasterFile_deref
edu_csdms_tools_NCRasterFile_deref_PROTO;

static edu_csdms_tools_NCRasterFile__newRef_RETURN
edu_csdms_tools_NCRasterFile__newRef
edu_csdms_tools_NCRasterFile__newRef_PROTO;

static edu_csdms_tools_NCRasterFile__addRef_RETURN
edu_csdms_tools_NCRasterFile__addRef
edu_csdms_tools_NCRasterFile__addRef_PROTO;

static edu_csdms_tools_NCRasterFile_PyType_RETURN
edu_csdms_tools_NCRasterFile_PyType
edu_csdms_tools_NCRasterFile_PyType_PROTO;

#else

static void **edu_csdms_tools_NCRasterFile__API = NULL;

#define edu_csdms_tools_NCRasterFile__wrap \
  (*((edu_csdms_tools_NCRasterFile__wrap_RETURN (*) \
  edu_csdms_tools_NCRasterFile__wrap_PROTO) \
  (edu_csdms_tools_NCRasterFile__API \
  [edu_csdms_tools_NCRasterFile__wrap_NUM])))

#define edu_csdms_tools_NCRasterFile__convert \
  (*((edu_csdms_tools_NCRasterFile__convert_RETURN (*) \
  edu_csdms_tools_NCRasterFile__convert_PROTO) \
  (edu_csdms_tools_NCRasterFile__API \
  [edu_csdms_tools_NCRasterFile__convert_NUM])))

#define edu_csdms_tools_NCRasterFile__convert_python_array \
  (*((edu_csdms_tools_NCRasterFile__convert_python_array_RETURN (*) \
  edu_csdms_tools_NCRasterFile__convert_python_array_PROTO) \
  (edu_csdms_tools_NCRasterFile__API \
  [edu_csdms_tools_NCRasterFile__convert_python_array_NUM])))

#define edu_csdms_tools_NCRasterFile__convert_sidl_array \
  (*((edu_csdms_tools_NCRasterFile__convert_sidl_array_RETURN (*) \
  edu_csdms_tools_NCRasterFile__convert_sidl_array_PROTO) \
  (edu_csdms_tools_NCRasterFile__API \
  [edu_csdms_tools_NCRasterFile__convert_sidl_array_NUM])))

#define edu_csdms_tools_NCRasterFile__weakRef \
  (*((edu_csdms_tools_NCRasterFile__weakRef_RETURN (*) \
  edu_csdms_tools_NCRasterFile__weakRef_PROTO) \
  (edu_csdms_tools_NCRasterFile__API \
  [edu_csdms_tools_NCRasterFile__weakRef_NUM])))

#define edu_csdms_tools_NCRasterFile_deref \
  (*((edu_csdms_tools_NCRasterFile_deref_RETURN (*) \
  edu_csdms_tools_NCRasterFile_deref_PROTO) \
  (edu_csdms_tools_NCRasterFile__API \
  [edu_csdms_tools_NCRasterFile_deref_NUM])))

#define edu_csdms_tools_NCRasterFile__newRef \
  (*((edu_csdms_tools_NCRasterFile__newRef_RETURN (*) \
  edu_csdms_tools_NCRasterFile__newRef_PROTO) \
  (edu_csdms_tools_NCRasterFile__API \
  [edu_csdms_tools_NCRasterFile__newRef_NUM])))

#define edu_csdms_tools_NCRasterFile__addRef \
  (*((edu_csdms_tools_NCRasterFile__addRef_RETURN (*) \
  edu_csdms_tools_NCRasterFile__addRef_PROTO) \
  (edu_csdms_tools_NCRasterFile__API \
  [edu_csdms_tools_NCRasterFile__addRef_NUM])))

#define edu_csdms_tools_NCRasterFile_PyType \
  (*((edu_csdms_tools_NCRasterFile_PyType_RETURN (*) \
  edu_csdms_tools_NCRasterFile_PyType_PROTO) \
  (edu_csdms_tools_NCRasterFile__API \
  [edu_csdms_tools_NCRasterFile_PyType_NUM])))

#define edu_csdms_tools_NCRasterFile__connectI \
  (*((edu_csdms_tools_NCRasterFile__connectI_RETURN (*) \
  edu_csdms_tools_NCRasterFile__connectI_PROTO) \
  (edu_csdms_tools_NCRasterFile__API \
  [edu_csdms_tools_NCRasterFile__connectI_NUM])))

#ifdef HAVE_PTHREAD
#define edu_csdms_tools_NCRasterFile__import() \
{ \
  pthread_mutex_t __sidl_pyapi_mutex = PTHREAD_MUTEX_INITIALIZER; \
  pthread_mutex_lock(&__sidl_pyapi_mutex); \
  if (!edu_csdms_tools_NCRasterFile__API) { \
    PyObject *module = PyImport_ImportModule("edu.csdms.tools.NCRasterFile"); \
    if (module != NULL) { \
      PyObject *module_dict = PyModule_GetDict(module); \
      PyObject *c_api_object = \
        PyDict_GetItemString(module_dict, "_C_API"); \
      if (c_api_object && PyCObject_Check(c_api_object)) { \
        edu_csdms_tools_NCRasterFile__API = \
          (void **)PyCObject_AsVoidPtr(c_api_object); \
      } \
      else { fprintf(stderr, "babel: edu_csdms_tools_NCRasterFile__import failed to lookup _C_API (%p %p %s).\n", c_api_object, c_api_object ? c_api_object->ob_type : NULL, c_api_object ? c_api_object->ob_type->tp_name : ""); }\
      Py_DECREF(module); \
    } else { fprintf(stderr, "babel: edu_csdms_tools_NCRasterFile__import failed to import its module.\n"); \
      if (PyErr_Occurred()) { PyErr_Print(); PyErr_Clear();}\
    }\
  }\
  pthread_mutex_unlock(&__sidl_pyapi_mutex); \
  pthread_mutex_destroy(&__sidl_pyapi_mutex); \
}
#else /* !HAVE_PTHREAD */
#define edu_csdms_tools_NCRasterFile__import() \
if (!edu_csdms_tools_NCRasterFile__API) { \
  PyObject *module = PyImport_ImportModule("edu.csdms.tools.NCRasterFile"); \
  if (module != NULL) { \
    PyObject *module_dict = PyModule_GetDict(module); \
    PyObject *c_api_object = \
      PyDict_GetItemString(module_dict, "_C_API"); \
    if (c_api_object && PyCObject_Check(c_api_object)) { \
      edu_csdms_tools_NCRasterFile__API = \
        (void **)PyCObject_AsVoidPtr(c_api_object); \
    } \
    else { fprintf(stderr, "babel: edu_csdms_tools_NCRasterFile__import failed to lookup _C_API (%p %p %s).\n", c_api_object, c_api_object ? c_api_object->ob_type : NULL, c_api_object ? c_api_object->ob_type->tp_name : ""); }\
    Py_DECREF(module); \
  } else { fprintf(stderr, "babel: edu_csdms_tools_NCRasterFile__import failed to import its module.\n"); \
    if (PyErr_Occurred()) { PyErr_Print(); PyErr_Clear();}\
  }\
}
#endif /* HAVE_PTHREAD */

#endif

#ifdef __cplusplus
}
#endif

#endif
