/*
 * File:          edu_csdms_openmi_Vector_jniSkel.c
 * Symbol:        edu.csdms.openmi.Vector-v0.0
 * Symbol Type:   class
 * Babel Version: 1.4.0 (Revision: 6607 release-1-4-0-branch)
 * Description:   Server-side JNI glue code for edu.csdms.openmi.Vector
 * 
 * WARNING: Automatically generated; only changes within splicers preserved
 * 
 */

#include "sidl_Java.h"
#include "sidl_Loader.h"
#include "sidl_String.h"
#include "edu_csdms_openmi_Vector_IOR.h"
#include "babel_config.h"
#include "sidl_Exception.h"
#ifndef included_sidl_BaseException_h
#include "sidl_BaseException.h"
#endif
#ifndef included_sidl_LangSpecificException_h
#include "sidl_LangSpecificException.h"
#endif
#include <stdio.h>
/*
 * Includes for all method dependencies.
 */

#ifndef included_edu_csdms_openmi_IVector_jniStub_h
#include "edu_csdms_openmi_IVector_jniStub.h"
#endif
#ifndef included_edu_csdms_openmi_Vector_jniStub_h
#include "edu_csdms_openmi_Vector_jniStub.h"
#endif
#ifndef included_sidl_BaseClass_jniStub_h
#include "sidl_BaseClass_jniStub.h"
#endif
#ifndef included_sidl_BaseInterface_jniStub_h
#include "sidl_BaseInterface_jniStub.h"
#endif
#ifndef included_sidl_ClassInfo_jniStub_h
#include "sidl_ClassInfo_jniStub.h"
#endif
#ifndef included_sidl_RuntimeException_jniStub_h
#include "sidl_RuntimeException_jniStub.h"
#endif

/*
 * Convert between jlong and void* pointers.
 */

#if (SIZEOF_VOID_P == 8)
#define JLONG_TO_POINTER(x) ((void*)(x))
#define POINTER_TO_JLONG(x) ((jlong)(x))
#else
#define JLONG_TO_POINTER(x) ((void*)(int32_t)(x))
#define POINTER_TO_JLONG(x) ((jlong)(int32_t)(x))
#endif

#ifndef NULL
#define NULL 0
#endif

/**
 * JNISkel data struct to cache JNIEnv, class, and needed MID's
 */
static struct edu_csdms_openmi_Vector_jniSkel__data
{
  jclass thisCls;
  jmethodID ctorMID;
  jmethodID dtorMID;
  jmethodID set_ImplMID;
  jmethodID boccaForceUsePortInclude_ImplMID;
  jmethodID getXComponent_ImplMID;
  jmethodID getYComponent_ImplMID;
  jmethodID getZComponent_ImplMID;
} s_data;

/**
 * Method to initialize struct members
 */
static void
init_data(void)
{
  JNIEnv* env = sidl_Java_getEnv();
  {
    jclass tempCls = NULL;
    tempCls = (*env)->FindClass(env, "edu/csdms/openmi/Vector_Impl");
    if ((*env)->ExceptionCheck(env)) {
      (*env)->ExceptionDescribe(env);
      return ;
    }

    s_data.thisCls = (*env)->NewGlobalRef(env, tempCls);
    (*env)->DeleteLocalRef(env, tempCls);
    if ((*env)->ExceptionCheck(env)) {
      (*env)->ExceptionDescribe(env);
      return ;
    }
  }
  s_data.ctorMID = (*env)->GetMethodID(env, s_data.thisCls, "<init>", "(J)V");
  if ((*env)->ExceptionCheck(env)) {
    (*env)->ExceptionDescribe(env);
    return ;
  }
  s_data.dtorMID = (*env)->GetMethodID(env, s_data.thisCls, "dtor", "()V");
  if ((*env)->ExceptionCheck(env)) {
    (*env)->ExceptionDescribe(env);
    return ;
  }
  s_data.set_ImplMID = (*env)->GetMethodID(env, s_data.thisCls, "set_Impl", 
    "(DDD)V");
  if ((*env)->ExceptionCheck(env)) {
    (*env)->ExceptionDescribe(env);
    return ;
  }
  s_data.boccaForceUsePortInclude_ImplMID = (*env)->GetMethodID(env, 
    s_data.thisCls, "boccaForceUsePortInclude_Impl", "()V");
  if ((*env)->ExceptionCheck(env)) {
    (*env)->ExceptionDescribe(env);
    return ;
  }
  s_data.getXComponent_ImplMID = (*env)->GetMethodID(env, s_data.thisCls, 
    "getXComponent_Impl", "()D");
  if ((*env)->ExceptionCheck(env)) {
    (*env)->ExceptionDescribe(env);
    return ;
  }
  s_data.getYComponent_ImplMID = (*env)->GetMethodID(env, s_data.thisCls, 
    "getYComponent_Impl", "()D");
  if ((*env)->ExceptionCheck(env)) {
    (*env)->ExceptionDescribe(env);
    return ;
  }
  s_data.getZComponent_ImplMID = (*env)->GetMethodID(env, s_data.thisCls, 
    "getZComponent_Impl", "()D");
  if ((*env)->ExceptionCheck(env)) {
    (*env)->ExceptionDescribe(env);
    return ;
  }
}

static void handleUnidentifiableException(JNIEnv* env, jthrowable javaEx, 
  sidl_BaseInterface* _ex) {
  sidl_BaseInterface _throwaway =  NULL;
  sidl_BaseException _be =  NULL;
  sidl_BaseInterface _tmp_ex = NULL;
  sidl_LangSpecificException _le = 
    sidl_LangSpecificException__create(&_throwaway);
  if(sidl_Java_isSIDLException(env, javaEx)) {
    _tmp_ex = sidl_Java_catch_SIDLException(env, javaEx, "sidl.BaseException", 
      NULL);
    if(_tmp_ex != NULL) {
      _be = sidl_BaseException__cast(_tmp_ex, &_throwaway);
      sidl_LangSpecificException_setNote(_le, sidl_BaseException_getNote(_be, 
        &_throwaway), &_throwaway);
      sidl_LangSpecificException_addLine(_le, sidl_BaseException_getTrace(_be, 
        &_throwaway), &_throwaway);
      sidl_BaseInterface_deleteRef(_tmp_ex, &_throwaway);
      sidl_BaseException_deleteRef(_be, &_throwaway);
    } else {
      /*
       * If the thrown object isn't a BaseException either... 
       */

      sidl_LangSpecificException_setNote(_le, "Unidentifiable SIDL object thrown as exception from Java", &_throwaway);
      sidl_LangSpecificException_addLine(_le, "in unknown at unknown", &_throwaway);
    }
  } else {
    jclass locCls = (*env)->FindClass(env, "java/lang/Throwable");
    jmethodID toString = (*env)->GetMethodID(env, locCls, "toString", 
      "()Ljava/lang/String;");
    jstring note = NULL;
    note = (*env)->CallObjectMethod(env, javaEx, toString);
    sidl_LangSpecificException_setNote(_le, sidl_Java_J2I_string(env, note), 
      &_throwaway);
    sidl_LangSpecificException_addLine(_le, "in unknown at unknown", 
      &_throwaway);
  }
  *_ex = (sidl_BaseInterface) _le;
}
/**
 * Constructor
 */
static void
jni__ctor(struct edu_csdms_openmi_Vector__object *self, struct 
  sidl_BaseInterface__object * *_ex)
{
  JNIEnv* env = sidl_Java_getEnv();
  if (env != NULL) {
    if ((*env)->PushLocalFrame(env, 8) < 0) goto JAVA_EXIT;
    {
      jobject this = (*env)->NewObject(env, s_data.thisCls, s_data.ctorMID, 
        POINTER_TO_JLONG(self));
      JAVA_CHECK(env);
      self->d_data = (*env)->NewGlobalRef(env, this);
      (*env)->DeleteLocalRef(env, this);

      JAVA_CHECK(env);
    }
    (*env)->PopLocalFrame(env, NULL);
  }
  return;
  JAVA_EXIT:
  {
    jthrowable javaEx = (*env)->ExceptionOccurred(env);
    (*env)->ExceptionClear(env);
    if(sidl_Java_isSIDLException(env, javaEx)) {
      *_ex = sidl_Java_catch_SIDLException(env, javaEx, 
        "sidl.RuntimeException",
      NULL);
    } 

    /**
     * If _ex is still Null, the exception was not expected.  
     * Throw a LangSpecificException instead.  
     */
    if(*_ex == NULL) {
      handleUnidentifiableException(env, javaEx, _ex);
    }
    /*
     * Return all inout and out arguments a NULL
     */

    (*env)->PopLocalFrame(env, NULL);
    return;
  } 
}

/**
 * This constructor is called by the IOR when a user passes intheir own private data. (new the Impl) Java doesn't need it, so it's empty
 */
static void
jni__ctor2(struct edu_csdms_openmi_Vector__object *self, void* ddata, struct 
  sidl_BaseInterface__object * *_ex)
{ *_ex = NULL; }
/**
 * Deconstructing method
 */
static void
jni__dtor(struct edu_csdms_openmi_Vector__object *self, struct 
  sidl_BaseInterface__object * *_ex)
{
  jfieldID j_ior = NULL;
  JNIEnv* env = sidl_Java_getEnv();
  if ((*env)->PushLocalFrame(env, 4) < 0) goto JAVA_EXIT;
  (*env)->CallVoidMethod(env, (jobject)self->d_data, s_data.dtorMID);
  JAVA_CHECK(env);
  j_ior = (*env)->GetFieldID(env, s_data.thisCls, "d_ior", "J");
  (*env)->SetLongField(env, (jobject)self->d_data, j_ior, 
    POINTER_TO_JLONG(NULL));
  (*env)->DeleteGlobalRef(env, (jobject)self->d_data);
  JAVA_CHECK(env);
  (*env)->PopLocalFrame(env, NULL);
  return;
  JAVA_EXIT:
  {
    jthrowable javaEx = (*env)->ExceptionOccurred(env);
    (*env)->ExceptionClear(env);
    if(sidl_Java_isSIDLException(env, javaEx)) {
      *_ex = sidl_Java_catch_SIDLException(env, javaEx, 
        "sidl.RuntimeException",
      NULL);
    } 

    /**
     * If _ex is still Null, the exception was not expected.  
     * Throw a LangSpecificException instead.  
     */
    if(*_ex == NULL) {
      handleUnidentifiableException(env, javaEx, _ex);
    }
    /*
     * Return all inout and out arguments a NULL
     */

    (*env)->PopLocalFrame(env, NULL);
    return;
  } 
}

void edu_csdms_openmi_Vector__call_load(void) { 
  /* FIXME: Not implemented for Java yet */
}

/*
 * Method:  set[]
 */

static void
jni_set(
  struct edu_csdms_openmi_Vector__object *self,
  double x,
  double y,
  double z,
  struct sidl_BaseInterface__object **_ex
  )
{
  JNIEnv* env = sidl_Java_getEnv();
  /* Reference to the object */
  jobject this = (jobject)(self->d_data);

  /* Declare return and temp variables */
  jdouble _tmp_x = 0.0;
  jdouble _tmp_y = 0.0;
  jdouble _tmp_z = 0.0;
  *_ex = NULL;

  if ((*env)->PushLocalFrame(env, 9) < 0) goto JAVA_EXIT;
  /* Preprocess JNI variables */
  _tmp_x = (double) x;
  _tmp_y = (double) y;
  _tmp_z = (double) z;

  /* Callback to java method */
  (*env)->CallVoidMethod(env, this, s_data.set_ImplMID, _tmp_x, _tmp_y, _tmp_z);
  JAVA_CHECK(env);
  /* Postprocess inout/out args */

  (*env)->PopLocalFrame(env, NULL);
  return;
  JAVA_EXIT:
  {
    jthrowable javaEx = (*env)->ExceptionOccurred(env);
    (*env)->ExceptionClear(env);
    if(sidl_Java_isSIDLException(env, javaEx)) {
      *_ex = sidl_Java_catch_SIDLException(env, javaEx, 
        "sidl.RuntimeException",
      NULL);
    } 

    /**
     * If _ex is still Null, the exception was not expected.  
     * Throw a LangSpecificException instead.  
     */
    if(*_ex == NULL) {
      handleUnidentifiableException(env, javaEx, _ex);
    }
    /*
     * Return all inout and out arguments a NULL
     */

    (*env)->PopLocalFrame(env, NULL);
    return;
  } 
}

/*
 *  This function should never be called, but helps babel generate better code. 
 */

static void
jni_boccaForceUsePortInclude(
  struct edu_csdms_openmi_Vector__object *self,
  struct sidl_BaseInterface__object **_ex
  )
{
  JNIEnv* env = sidl_Java_getEnv();
  /* Reference to the object */
  jobject this = (jobject)(self->d_data);

  /* Declare return and temp variables */
  *_ex = NULL;

  if ((*env)->PushLocalFrame(env, 9) < 0) goto JAVA_EXIT;
  /* Callback to java method */
  (*env)->CallVoidMethod(env, this, s_data.boccaForceUsePortInclude_ImplMID);
  JAVA_CHECK(env);
  /* Postprocess inout/out args */

  (*env)->PopLocalFrame(env, NULL);
  return;
  JAVA_EXIT:
  {
    jthrowable javaEx = (*env)->ExceptionOccurred(env);
    (*env)->ExceptionClear(env);
    if(sidl_Java_isSIDLException(env, javaEx)) {
      *_ex = sidl_Java_catch_SIDLException(env, javaEx, 
        "sidl.RuntimeException",
      NULL);
    } 

    /**
     * If _ex is still Null, the exception was not expected.  
     * Throw a LangSpecificException instead.  
     */
    if(*_ex == NULL) {
      handleUnidentifiableException(env, javaEx, _ex);
    }
    /*
     * Return all inout and out arguments a NULL
     */

    (*env)->PopLocalFrame(env, NULL);
    return;
  } 
}

/*
 * Method:  getXComponent[]
 */

static double
jni_getXComponent(
  struct edu_csdms_openmi_Vector__object *self,
  struct sidl_BaseInterface__object **_ex
  )
{
  JNIEnv* env = sidl_Java_getEnv();
  /* Reference to the object */
  jobject this = (jobject)(self->d_data);

  /* Declare return and temp variables */
  jdouble _j_retval = 0.0;
  double _retval = 0.0;
  *_ex = NULL;

  if ((*env)->PushLocalFrame(env, 9) < 0) goto JAVA_EXIT;
  /* Callback to java method */
  _j_retval = (*env)->CallDoubleMethod(env, this, s_data.getXComponent_ImplMID);
  JAVA_CHECK(env);
  /* Postprocess inout/out args */
  _retval = (double) _j_retval;
  (*env)->PopLocalFrame(env, NULL);
  return _retval;
  JAVA_EXIT:
  {
    jthrowable javaEx = (*env)->ExceptionOccurred(env);
    (*env)->ExceptionClear(env);
    if(sidl_Java_isSIDLException(env, javaEx)) {
      *_ex = sidl_Java_catch_SIDLException(env, javaEx, 
        "sidl.RuntimeException",
      NULL);
    } 

    /**
     * If _ex is still Null, the exception was not expected.  
     * Throw a LangSpecificException instead.  
     */
    if(*_ex == NULL) {
      handleUnidentifiableException(env, javaEx, _ex);
    }
    /*
     * Return all inout and out arguments a NULL
     */

    (*env)->PopLocalFrame(env, NULL);
    return _retval;
  } 
}

/*
 * Method:  getYComponent[]
 */

static double
jni_getYComponent(
  struct edu_csdms_openmi_Vector__object *self,
  struct sidl_BaseInterface__object **_ex
  )
{
  JNIEnv* env = sidl_Java_getEnv();
  /* Reference to the object */
  jobject this = (jobject)(self->d_data);

  /* Declare return and temp variables */
  jdouble _j_retval = 0.0;
  double _retval = 0.0;
  *_ex = NULL;

  if ((*env)->PushLocalFrame(env, 9) < 0) goto JAVA_EXIT;
  /* Callback to java method */
  _j_retval = (*env)->CallDoubleMethod(env, this, s_data.getYComponent_ImplMID);
  JAVA_CHECK(env);
  /* Postprocess inout/out args */
  _retval = (double) _j_retval;
  (*env)->PopLocalFrame(env, NULL);
  return _retval;
  JAVA_EXIT:
  {
    jthrowable javaEx = (*env)->ExceptionOccurred(env);
    (*env)->ExceptionClear(env);
    if(sidl_Java_isSIDLException(env, javaEx)) {
      *_ex = sidl_Java_catch_SIDLException(env, javaEx, 
        "sidl.RuntimeException",
      NULL);
    } 

    /**
     * If _ex is still Null, the exception was not expected.  
     * Throw a LangSpecificException instead.  
     */
    if(*_ex == NULL) {
      handleUnidentifiableException(env, javaEx, _ex);
    }
    /*
     * Return all inout and out arguments a NULL
     */

    (*env)->PopLocalFrame(env, NULL);
    return _retval;
  } 
}

/*
 * Method:  getZComponent[]
 */

static double
jni_getZComponent(
  struct edu_csdms_openmi_Vector__object *self,
  struct sidl_BaseInterface__object **_ex
  )
{
  JNIEnv* env = sidl_Java_getEnv();
  /* Reference to the object */
  jobject this = (jobject)(self->d_data);

  /* Declare return and temp variables */
  jdouble _j_retval = 0.0;
  double _retval = 0.0;
  *_ex = NULL;

  if ((*env)->PushLocalFrame(env, 9) < 0) goto JAVA_EXIT;
  /* Callback to java method */
  _j_retval = (*env)->CallDoubleMethod(env, this, s_data.getZComponent_ImplMID);
  JAVA_CHECK(env);
  /* Postprocess inout/out args */
  _retval = (double) _j_retval;
  (*env)->PopLocalFrame(env, NULL);
  return _retval;
  JAVA_EXIT:
  {
    jthrowable javaEx = (*env)->ExceptionOccurred(env);
    (*env)->ExceptionClear(env);
    if(sidl_Java_isSIDLException(env, javaEx)) {
      *_ex = sidl_Java_catch_SIDLException(env, javaEx, 
        "sidl.RuntimeException",
      NULL);
    } 

    /**
     * If _ex is still Null, the exception was not expected.  
     * Throw a LangSpecificException instead.  
     */
    if(*_ex == NULL) {
      handleUnidentifiableException(env, javaEx, _ex);
    }
    /*
     * Return all inout and out arguments a NULL
     */

    (*env)->PopLocalFrame(env, NULL);
    return _retval;
  } 
}

#ifdef __cplusplus
extern "C" {
#endif

void
edu_csdms_openmi_Vector__set_epv(struct edu_csdms_openmi_Vector__epv *epv)
{
  /* initialize skel data struct */
  init_data();

  /* initialize builtin methods */
  epv->f__ctor = jni__ctor;
  epv->f__ctor2 = jni__ctor2;
  epv->f__dtor = jni__dtor;

  /* initialize local methods */
  epv->f_set = jni_set;
  epv->f_boccaForceUsePortInclude = jni_boccaForceUsePortInclude;
  epv->f_getXComponent = jni_getXComponent;
  epv->f_getYComponent = jni_getYComponent;
  epv->f_getZComponent = jni_getZComponent;
}
#ifdef __cplusplus
}
#endif

#ifdef WITH_RMI
#ifdef __cplusplus
extern "C" {
#endif

struct sidl_BaseInterface__object* 
  skel_edu_csdms_openmi_Vector_fconnect_sidl_BaseInterface(const char* url, 
  sidl_bool ar, sidl_BaseInterface *_ex) { 
  return sidl_BaseInterface__connectI(url, ar, _ex);
}

#ifdef __cplusplus
}
#endif
#endif /*WITH_RMI*/
