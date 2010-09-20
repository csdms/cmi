/*
 * File:          edu_csdms_tools_BOVRasterFile_pLaunch.c
 * Symbol:        edu.csdms.tools.BOVRasterFile-v0.0
 * Symbol Type:   class
 * Babel Version: 1.4.0 (Revision: 6607 release-1-4-0-branch)
 * Description:   launch the implementation
 * 
 * WARNING: Automatically generated; changes will be lost
 * 
 */

#ifndef included_sidl_Python_h
#include "sidl_Python.h"
#endif
#ifndef included_sidl_Loader_h
#include "sidl_Loader.h"
#endif
#include <stdio.h>

struct edu_csdms_tools_BOVRasterFile__epv;
struct edu_csdms_tools_BOVRasterFile__pre_epv;
struct edu_csdms_tools_BOVRasterFile__post_epv;

static void (*s_getEPV)
  (struct edu_csdms_tools_BOVRasterFile__epv*, struct 
    edu_csdms_tools_BOVRasterFile__pre_epv*, struct 
    edu_csdms_tools_BOVRasterFile__post_epv*);

struct edu_csdms_tools_BOVRasterFile__rmiExternals {
  struct sidl_BaseInterface__object* (
    *f_pskel_edu_csdms_tools_BOVRasterFile_fconnect_sidl_BaseInterface)(
    /* in */ const char* url,
    /* in */ sidl_bool ar,
    /* out */ struct sidl_BaseInterface__object **_ex);

};

static struct edu_csdms_tools_BOVRasterFile__rmiExternals *s_rmiExternals;

static void
initImplementation(void) {
  struct sidl_BaseInterface__object *throwaway_exception;
  static int notInitialized = 1;
  if (notInitialized) {
    sidl_Python_Init(); /* must happen before findLibrary */
    {
      sidl_DLL dll = sidl_Loader_findLibrary("edu.csdms.tools.BOVRasterFile",
        "python/impl", sidl_Scope_SCLSCOPE,
        sidl_Resolve_SCLRESOLVE, &throwaway_exception);
      if (dll) {
        struct edu_csdms_tools_BOVRasterFile__rmiExternals *((*rmi_func)(void));
        notInitialized = 0;
        s_getEPV = (void (*)(struct edu_csdms_tools_BOVRasterFile__epv *, 
          struct edu_csdms_tools_BOVRasterFile__pre_epv*, struct 
          edu_csdms_tools_BOVRasterFile__post_epv*))
          sidl_DLL_lookupSymbol(dll, 
            "edu_csdms_tools_BOVRasterFile__impl_set_epv", 
            &throwaway_exception);
        rmi_func = (struct edu_csdms_tools_BOVRasterFile__rmiExternals*((*)(
          void))) 
          sidl_DLL_lookupSymbol(dll, 
            "edu_csdms_tools_BOVRasterFile__impl_rmi_externals", 
            &throwaway_exception);
          if (rmi_func) {
            s_rmiExternals = (*rmi_func)();
          }
        sidl_DLL_deleteRef(dll, &throwaway_exception);
      }
    }
  }
}

#ifdef __cplusplus
extern "C" {
#endif

void
edu_csdms_tools_BOVRasterFile__set_epv(struct 
  edu_csdms_tools_BOVRasterFile__epv *epv,
  struct edu_csdms_tools_BOVRasterFile__pre_epv *pre_epv, struct 
    edu_csdms_tools_BOVRasterFile__post_epv *post_epv)
{
  initImplementation();
  if (s_getEPV) (*s_getEPV)(epv,pre_epv,post_epv);
  else {
    fputs("\
Babel: Fatal error loading stage 2 Python implementation for edu.csdms.tools.BOVRasterFile",
    stderr);
  }
}
#ifdef __cplusplus
}
#endif

void edu_csdms_tools_BOVRasterFile__call_load(void) { 
  /* Python doesn't really need load */
}

#ifdef __cplusplus
extern "C" {
#endif


struct sidl_BaseInterface__object* 
  skel_edu_csdms_tools_BOVRasterFile_fconnect_sidl_BaseInterface(const char* 
  url, sidl_bool ar, struct sidl_BaseInterface__object **_ex) { 
  return (
    *s_rmiExternals->f_pskel_edu_csdms_tools_BOVRasterFile_fconnect_sidl_BaseInterface)
    (url, ar, _ex);
}

#ifdef __cplusplus
}
#endif
