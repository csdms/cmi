/*
 * File:          edu_csdms_openmi_ScalarSet_jniSkel.c
 * Symbol:        edu.csdms.openmi.ScalarSet-v0.0
 * Symbol Type:   class
 * Babel Version: 1.4.0 (Revision: 6607 release-1-4-0-branch)
 * Description:   Server-side JNI glue code for edu.csdms.openmi.ScalarSet
 * 
 * WARNING: Automatically generated; only changes within splicers preserved
 * 
 */

#include "sidl_Java.h"
#include "sidl_Loader.h"
#include "sidl_String.h"
#include "edu_csdms_openmi_ScalarSet_IOR.h"
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

#ifndef included_edu_csdms_openmi_IScalarSet_jniStub_h
#include "edu_csdms_openmi_IScalarSet_jniStub.h"
#endif
#ifndef included_edu_csdms_openmi_IValueSet_jniStub_h
#include "edu_csdms_openmi_IValueSet_jniStub.h"
#endif
#ifndef included_edu_csdms_openmi_ScalarSet_jniStub_h
#include "edu_csdms_openmi_ScalarSet_jniStub.h"
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
static struct edu_csdms_openmi_ScalarSet_jniSkel__data
{
  jclass thisCls;
  jmethodID ctorMID;
  jmethodID dtorMID;
  jmethodID init_ImplMID;
  jmethodID setRasterGrid_ImplMID;
  jmethodID toArray_ImplMID;
  jmethodID boccaForceUsePortInclude_ImplMID;
  jmethodID getScalar_ImplMID;
  jmethodID getCount_ImplMID;
  jmethodID isValid_ImplMID;
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
    tempCls = (*env)->FindClass(env, "edu/csdms/openmi/ScalarSet_Impl");
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
  s_data.init_ImplMID = (*env)->GetMethodID(env, s_data.thisCls, "init_Impl", 
    "(Lsidl/Double$Array1;)V");
  if ((*env)->ExceptionCheck(env)) {
    (*env)->ExceptionDescribe(env);
    return ;
  }
  s_data.setRasterGrid_ImplMID = (*env)->GetMethodID(env, s_data.thisCls, 
    "setRasterGrid_Impl", "(Lsidl/Double$Array2;)V");
  if ((*env)->ExceptionCheck(env)) {
    (*env)->ExceptionDescribe(env);
    return ;
  }
  s_data.toArray_ImplMID = (*env)->GetMethodID(env, s_data.thisCls, 
    "toArray_Impl", "()Lsidl/Double$Array1;");
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
  s_data.getScalar_ImplMID = (*env)->GetMethodID(env, s_data.thisCls, 
    "getScalar_Impl", "(I)D");
  if ((*env)->ExceptionCheck(env)) {
    (*env)->ExceptionDescribe(env);
    return ;
  }
  s_data.getCount_ImplMID = (*env)->GetMethodID(env, s_data.thisCls, 
    "getCount_Impl", "()I");
  if ((*env)->ExceptionCheck(env)) {
    (*env)->ExceptionDescribe(env);
    return ;
  }
  s_data.isValid_ImplMID = (*env)->GetMethodID(env, s_data.thisCls, 
    "isValid_Impl", "(I)Z");
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
jni__ctor(struct edu_csdms_openmi_ScalarSet__object *self, struct 
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
jni__ctor2(struct edu_csdms_openmi_ScalarSet__object *self, void* ddata, struct 
  sidl_BaseInterface__object * *_ex)
{ *_ex = NULL; }
/**
 * Deconstructing method
 */
static void
jni__dtor(struct edu_csdms_openmi_ScalarSet__object *self, struct 
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

void edu_csdms_openmi_ScalarSet__call_load(void) { 
  /* FIXME: Not implemented for Java yet */
}

/*
 * Method:  init[]
 */

static void
jni_init(
  struct edu_csdms_openmi_ScalarSet__object *self,
  struct sidl_double__array* values,
  struct sidl_BaseInterface__object **_ex
  )
{
  JNIEnv* env = sidl_Java_getEnv();
  /* Reference to the object */
  jobject this = (jobject)(self->d_data);

  /* Declare return and temp variables */
  jobject _tmp_values = (jobject) NULL;
  *_ex = NULL;

  if ((*env)->PushLocalFrame(env, 10) < 0) goto JAVA_EXIT;
  /* Preprocess JNI variables */
  _tmp_values = sidl_Java_I2J_new_array_server(env, values, 
    "sidl.Double$Array1");

  /* Callback to java method */
  (*env)->CallVoidMethod(env, this, s_data.init_ImplMID, _tmp_values);
  JAVA_CHECK(env);
  /* Postprocess inout/out args */
  (*env)->DeleteLocalRef(env, _tmp_values);
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

/*
 * Method:  setRasterGrid[]
 */

static void
jni_setRasterGrid(
  struct edu_csdms_openmi_ScalarSet__object *self,
  struct sidl_double__array* grid,
  struct sidl_BaseInterface__object **_ex
  )
{
  JNIEnv* env = sidl_Java_getEnv();
  /* Reference to the object */
  jobject this = (jobject)(self->d_data);

  /* Declare return and temp variables */
  jobject _tmp_grid = (jobject) NULL;
  *_ex = NULL;

  if ((*env)->PushLocalFrame(env, 10) < 0) goto JAVA_EXIT;
  /* Preprocess JNI variables */
  _tmp_grid = sidl_Java_I2J_new_array_server(env, grid, "sidl.Double$Array2");

  /* Callback to java method */
  (*env)->CallVoidMethod(env, this, s_data.setRasterGrid_ImplMID, _tmp_grid);
  JAVA_CHECK(env);
  /* Postprocess inout/out args */
  (*env)->DeleteLocalRef(env, _tmp_grid);
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

/*
 * Method:  toArray[]
 */

static struct sidl_double__array*
jni_toArray(
  struct edu_csdms_openmi_ScalarSet__object *self,
  struct sidl_BaseInterface__object **_ex
  )
{
  JNIEnv* env = sidl_Java_getEnv();
  /* Reference to the object */
  jobject this = (jobject)(self->d_data);

  /* Declare return and temp variables */
  jobject _j_retval = (jobject) NULL;
  struct sidl_double__array* _retval = (struct sidl_double__array*) NULL;
  *_ex = NULL;

  if ((*env)->PushLocalFrame(env, 11) < 0) goto JAVA_EXIT;
  /* Callback to java method */
  _j_retval = (*env)->CallObjectMethod(env, this, s_data.toArray_ImplMID);
  JAVA_CHECK(env);
  /* Postprocess inout/out args */
  _retval = (struct sidl_double__array*) sidl_Java_J2I_take_array(env, 
    _j_retval);
  (*env)->DeleteLocalRef(env, _j_retval);
  JAVA_CHECK(env);
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
 *  This function should never be called, but helps babel generate better code. 
 */

static void
jni_boccaForceUsePortInclude(
  struct edu_csdms_openmi_ScalarSet__object *self,
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
 * Method:  getScalar[]
 */

static double
jni_getScalar(
  struct edu_csdms_openmi_ScalarSet__object *self,
  int32_t elementIndex,
  struct sidl_BaseInterface__object **_ex
  )
{
  JNIEnv* env = sidl_Java_getEnv();
  /* Reference to the object */
  jobject this = (jobject)(self->d_data);

  /* Declare return and temp variables */
  jint _tmp_elementIndex = 0;
  jdouble _j_retval = 0.0;
  double _retval = 0.0;
  *_ex = NULL;

  if ((*env)->PushLocalFrame(env, 9) < 0) goto JAVA_EXIT;
  /* Preprocess JNI variables */
  _tmp_elementIndex = (int32_t) elementIndex;

  /* Callback to java method */
  _j_retval = (*env)->CallDoubleMethod(env, this, s_data.getScalar_ImplMID, 
    _tmp_elementIndex);
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
 * Method:  getCount[]
 */

static int32_t
jni_getCount(
  struct edu_csdms_openmi_ScalarSet__object *self,
  struct sidl_BaseInterface__object **_ex
  )
{
  JNIEnv* env = sidl_Java_getEnv();
  /* Reference to the object */
  jobject this = (jobject)(self->d_data);

  /* Declare return and temp variables */
  jint _j_retval = 0;
  int32_t _retval = 0;
  *_ex = NULL;

  if ((*env)->PushLocalFrame(env, 9) < 0) goto JAVA_EXIT;
  /* Callback to java method */
  _j_retval = (*env)->CallIntMethod(env, this, s_data.getCount_ImplMID);
  JAVA_CHECK(env);
  /* Postprocess inout/out args */
  _retval = (int32_t) _j_retval;
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
 * Method:  isValid[]
 */

static sidl_bool
jni_isValid(
  struct edu_csdms_openmi_ScalarSet__object *self,
  int32_t elementIndex,
  struct sidl_BaseInterface__object **_ex
  )
{
  JNIEnv* env = sidl_Java_getEnv();
  /* Reference to the object */
  jobject this = (jobject)(self->d_data);

  /* Declare return and temp variables */
  jint _tmp_elementIndex = 0;
  jboolean _j_retval = JNI_FALSE;
  sidl_bool _retval = FALSE;
  *_ex = NULL;

  if ((*env)->PushLocalFrame(env, 9) < 0) goto JAVA_EXIT;
  /* Preprocess JNI variables */
  _tmp_elementIndex = (int32_t) elementIndex;

  /* Callback to java method */
  _j_retval = (*env)->CallBooleanMethod(env, this, s_data.isValid_ImplMID, 
    _tmp_elementIndex);
  JAVA_CHECK(env);
  /* Postprocess inout/out args */
  _retval = ( (_j_retval) ? TRUE : FALSE);
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
edu_csdms_openmi_ScalarSet__set_epv(struct edu_csdms_openmi_ScalarSet__epv *epv)
{
  /* initialize skel data struct */
  init_data();

  /* initialize builtin methods */
  epv->f__ctor = jni__ctor;
  epv->f__ctor2 = jni__ctor2;
  epv->f__dtor = jni__dtor;

  /* initialize local methods */
  epv->f_init = jni_init;
  epv->f_setRasterGrid = jni_setRasterGrid;
  epv->f_toArray = jni_toArray;
  epv->f_boccaForceUsePortInclude = jni_boccaForceUsePortInclude;
  epv->f_getScalar = jni_getScalar;
  epv->f_getCount = jni_getCount;
  epv->f_isValid = jni_isValid;
}
#ifdef __cplusplus
}
#endif

#ifdef WITH_RMI
#ifdef __cplusplus
extern "C" {
#endif

struct sidl_BaseInterface__object* 
  skel_edu_csdms_openmi_ScalarSet_fconnect_sidl_BaseInterface(const char* url, 
  sidl_bool ar, sidl_BaseInterface *_ex) { 
  return sidl_BaseInterface__connectI(url, ar, _ex);
}

#ifdef __cplusplus
}
#endif
#endif /*WITH_RMI*/
