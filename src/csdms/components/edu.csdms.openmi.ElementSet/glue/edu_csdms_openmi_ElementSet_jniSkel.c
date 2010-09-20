/*
 * File:          edu_csdms_openmi_ElementSet_jniSkel.c
 * Symbol:        edu.csdms.openmi.ElementSet-v0.0
 * Symbol Type:   class
 * Babel Version: 1.4.0 (Revision: 6607 release-1-4-0-branch)
 * Description:   Server-side JNI glue code for edu.csdms.openmi.ElementSet
 * 
 * WARNING: Automatically generated; only changes within splicers preserved
 * 
 */

#include "sidl_Java.h"
#include "sidl_Loader.h"
#include "sidl_String.h"
#include "edu_csdms_openmi_ElementSet_IOR.h"
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

#ifndef included_edu_csdms_openmi_Element_jniStub_h
#include "edu_csdms_openmi_Element_jniStub.h"
#endif
#ifndef included_edu_csdms_openmi_ElementSet_jniStub_h
#include "edu_csdms_openmi_ElementSet_jniStub.h"
#endif
#ifndef included_edu_csdms_openmi_IElementSet_jniStub_h
#include "edu_csdms_openmi_IElementSet_jniStub.h"
#endif
#ifndef included_edu_csdms_openmi_ISpatialReference_jniStub_h
#include "edu_csdms_openmi_ISpatialReference_jniStub.h"
#endif
#ifndef included_edu_csdms_openmi_SpatialReference_jniStub_h
#include "edu_csdms_openmi_SpatialReference_jniStub.h"
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
static struct edu_csdms_openmi_ElementSet_jniSkel__data
{
  jclass thisCls;
  jmethodID ctorMID;
  jmethodID dtorMID;
  jmethodID setID_ImplMID;
  jmethodID setElements_ImplMID;
  jmethodID addElement_ImplMID;
  jmethodID setElementType_ImplMID;
  jmethodID setSpatialReference_ImplMID;
  jmethodID setRasterGrid_ImplMID;
  jmethodID boccaForceUsePortInclude_ImplMID;
  jmethodID getID_ImplMID;
  jmethodID getDescription_ImplMID;
  jmethodID getSpatialReference_ImplMID;
  jmethodID getElementType_ImplMID;
  jmethodID getElementCount_ImplMID;
  jmethodID getVersion_ImplMID;
  jmethodID getElementIndex_ImplMID;
  jmethodID getElementID_ImplMID;
  jmethodID getVertexCount_ImplMID;
  jmethodID getFaceCount_ImplMID;
  jmethodID getFaceVertexIndices_ImplMID;
  jmethodID getXCoordinate_ImplMID;
  jmethodID getYCoordinate_ImplMID;
  jmethodID getZCoordinate_ImplMID;
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
    tempCls = (*env)->FindClass(env, "edu/csdms/openmi/ElementSet_Impl");
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
  s_data.setID_ImplMID = (*env)->GetMethodID(env, s_data.thisCls, "setID_Impl", 
    "(Ljava/lang/String;)V");
  if ((*env)->ExceptionCheck(env)) {
    (*env)->ExceptionDescribe(env);
    return ;
  }
  s_data.setElements_ImplMID = (*env)->GetMethodID(env, s_data.thisCls, 
    "setElements_Impl", "(Ledu/csdms/openmi/Element$Array1;)V");
  if ((*env)->ExceptionCheck(env)) {
    (*env)->ExceptionDescribe(env);
    return ;
  }
  s_data.addElement_ImplMID = (*env)->GetMethodID(env, s_data.thisCls, 
    "addElement_Impl", "(Ledu/csdms/openmi/Element;)V");
  if ((*env)->ExceptionCheck(env)) {
    (*env)->ExceptionDescribe(env);
    return ;
  }
  s_data.setElementType_ImplMID = (*env)->GetMethodID(env, s_data.thisCls, 
    "setElementType_Impl", "(J)V");
  if ((*env)->ExceptionCheck(env)) {
    (*env)->ExceptionDescribe(env);
    return ;
  }
  s_data.setSpatialReference_ImplMID = (*env)->GetMethodID(env, s_data.thisCls, 
    "setSpatialReference_Impl", "(Ledu/csdms/openmi/ISpatialReference;)V");
  if ((*env)->ExceptionCheck(env)) {
    (*env)->ExceptionDescribe(env);
    return ;
  }
  s_data.setRasterGrid_ImplMID = (*env)->GetMethodID(env, s_data.thisCls, 
    "setRasterGrid_Impl", "(IIDDDD)V");
  if ((*env)->ExceptionCheck(env)) {
    (*env)->ExceptionDescribe(env);
    return ;
  }
  s_data.boccaForceUsePortInclude_ImplMID = (*env)->GetMethodID(env, 
    s_data.thisCls, "boccaForceUsePortInclude_Impl", 
    "(Ledu/csdms/openmi/SpatialReference;Ledu/csdms/openmi/Element;Ledu/csdms/openmi/ISpatialReference;)V");
  if ((*env)->ExceptionCheck(env)) {
    (*env)->ExceptionDescribe(env);
    return ;
  }
  s_data.getID_ImplMID = (*env)->GetMethodID(env, s_data.thisCls, "getID_Impl", 
    "()Ljava/lang/String;");
  if ((*env)->ExceptionCheck(env)) {
    (*env)->ExceptionDescribe(env);
    return ;
  }
  s_data.getDescription_ImplMID = (*env)->GetMethodID(env, s_data.thisCls, 
    "getDescription_Impl", "()Ljava/lang/String;");
  if ((*env)->ExceptionCheck(env)) {
    (*env)->ExceptionDescribe(env);
    return ;
  }
  s_data.getSpatialReference_ImplMID = (*env)->GetMethodID(env, s_data.thisCls, 
    "getSpatialReference_Impl", "()Ledu/csdms/openmi/ISpatialReference;");
  if ((*env)->ExceptionCheck(env)) {
    (*env)->ExceptionDescribe(env);
    return ;
  }
  s_data.getElementType_ImplMID = (*env)->GetMethodID(env, s_data.thisCls, 
    "getElementType_Impl", "()J");
  if ((*env)->ExceptionCheck(env)) {
    (*env)->ExceptionDescribe(env);
    return ;
  }
  s_data.getElementCount_ImplMID = (*env)->GetMethodID(env, s_data.thisCls, 
    "getElementCount_Impl", "()I");
  if ((*env)->ExceptionCheck(env)) {
    (*env)->ExceptionDescribe(env);
    return ;
  }
  s_data.getVersion_ImplMID = (*env)->GetMethodID(env, s_data.thisCls, 
    "getVersion_Impl", "()I");
  if ((*env)->ExceptionCheck(env)) {
    (*env)->ExceptionDescribe(env);
    return ;
  }
  s_data.getElementIndex_ImplMID = (*env)->GetMethodID(env, s_data.thisCls, 
    "getElementIndex_Impl", "(Ljava/lang/String;)I");
  if ((*env)->ExceptionCheck(env)) {
    (*env)->ExceptionDescribe(env);
    return ;
  }
  s_data.getElementID_ImplMID = (*env)->GetMethodID(env, s_data.thisCls, 
    "getElementID_Impl", "(I)Ljava/lang/String;");
  if ((*env)->ExceptionCheck(env)) {
    (*env)->ExceptionDescribe(env);
    return ;
  }
  s_data.getVertexCount_ImplMID = (*env)->GetMethodID(env, s_data.thisCls, 
    "getVertexCount_Impl", "(I)I");
  if ((*env)->ExceptionCheck(env)) {
    (*env)->ExceptionDescribe(env);
    return ;
  }
  s_data.getFaceCount_ImplMID = (*env)->GetMethodID(env, s_data.thisCls, 
    "getFaceCount_Impl", "(I)I");
  if ((*env)->ExceptionCheck(env)) {
    (*env)->ExceptionDescribe(env);
    return ;
  }
  s_data.getFaceVertexIndices_ImplMID = (*env)->GetMethodID(env, s_data.thisCls,
    "getFaceVertexIndices_Impl", "(II)Lsidl/Integer$Array1;");
  if ((*env)->ExceptionCheck(env)) {
    (*env)->ExceptionDescribe(env);
    return ;
  }
  s_data.getXCoordinate_ImplMID = (*env)->GetMethodID(env, s_data.thisCls, 
    "getXCoordinate_Impl", "(II)D");
  if ((*env)->ExceptionCheck(env)) {
    (*env)->ExceptionDescribe(env);
    return ;
  }
  s_data.getYCoordinate_ImplMID = (*env)->GetMethodID(env, s_data.thisCls, 
    "getYCoordinate_Impl", "(II)D");
  if ((*env)->ExceptionCheck(env)) {
    (*env)->ExceptionDescribe(env);
    return ;
  }
  s_data.getZCoordinate_ImplMID = (*env)->GetMethodID(env, s_data.thisCls, 
    "getZCoordinate_Impl", "(II)D");
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
jni__ctor(struct edu_csdms_openmi_ElementSet__object *self, struct 
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
jni__ctor2(struct edu_csdms_openmi_ElementSet__object *self, void* ddata, 
  struct sidl_BaseInterface__object * *_ex)
{ *_ex = NULL; }
/**
 * Deconstructing method
 */
static void
jni__dtor(struct edu_csdms_openmi_ElementSet__object *self, struct 
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

void edu_csdms_openmi_ElementSet__call_load(void) { 
  /* FIXME: Not implemented for Java yet */
}

/*
 * Method:  setID[]
 */

static void
jni_setID(
  struct edu_csdms_openmi_ElementSet__object *self,
  const char* ID,
  struct sidl_BaseInterface__object **_ex
  )
{
  JNIEnv* env = sidl_Java_getEnv();
  /* Reference to the object */
  jobject this = (jobject)(self->d_data);

  /* Declare return and temp variables */
  jstring _tmp_ID = (jstring) NULL;
  *_ex = NULL;

  if ((*env)->PushLocalFrame(env, 10) < 0) goto JAVA_EXIT;
  /* Preprocess JNI variables */
  _tmp_ID = sidl_Java_I2J_string(env, ID);

  /* Callback to java method */
  (*env)->CallVoidMethod(env, this, s_data.setID_ImplMID, _tmp_ID);
  JAVA_CHECK(env);
  /* Postprocess inout/out args */
  (*env)->DeleteLocalRef(env, _tmp_ID);
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
 * Method:  setElements[]
 */

static void
jni_setElements(
  struct edu_csdms_openmi_ElementSet__object *self,
  struct edu_csdms_openmi_Element__array* values,
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
    "edu.csdms.openmi.Element$Array1");

  /* Callback to java method */
  (*env)->CallVoidMethod(env, this, s_data.setElements_ImplMID, _tmp_values);
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
 * Method:  addElement[]
 */

static void
jni_addElement(
  struct edu_csdms_openmi_ElementSet__object *self,
  struct edu_csdms_openmi_Element__object* element,
  struct sidl_BaseInterface__object **_ex
  )
{
  JNIEnv* env = sidl_Java_getEnv();
  /* Reference to the object */
  jobject this = (jobject)(self->d_data);

  /* Declare return and temp variables */
  jobject _tmp_element = (jobject) NULL;
  *_ex = NULL;

  if ((*env)->PushLocalFrame(env, 10) < 0) goto JAVA_EXIT;
  /* Preprocess JNI variables */
  _tmp_element = sidl_Java_I2J_cls(env, element, "edu.csdms.openmi.Element", 
    TRUE);JAVA_CHECK(env);

  /* Callback to java method */
  (*env)->CallVoidMethod(env, this, s_data.addElement_ImplMID, _tmp_element);
  JAVA_CHECK(env);
  /* Postprocess inout/out args */
  (*env)->DeleteLocalRef(env, _tmp_element);
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
 * Method:  setElementType[]
 */

static void
jni_setElementType(
  struct edu_csdms_openmi_ElementSet__object *self,
  int64_t elementType,
  struct sidl_BaseInterface__object **_ex
  )
{
  JNIEnv* env = sidl_Java_getEnv();
  /* Reference to the object */
  jobject this = (jobject)(self->d_data);

  /* Declare return and temp variables */
  jlong _tmp_elementType = 0;
  *_ex = NULL;

  if ((*env)->PushLocalFrame(env, 9) < 0) goto JAVA_EXIT;
  /* Preprocess JNI variables */
  _tmp_elementType = (int64_t) elementType;

  /* Callback to java method */
  (*env)->CallVoidMethod(env, this, s_data.setElementType_ImplMID, 
    _tmp_elementType);
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
 * Method:  setSpatialReference[]
 */

static void
jni_setSpatialReference(
  struct edu_csdms_openmi_ElementSet__object *self,
  struct edu_csdms_openmi_ISpatialReference__object* spatialReference,
  struct sidl_BaseInterface__object **_ex
  )
{
  JNIEnv* env = sidl_Java_getEnv();
  /* Reference to the object */
  jobject this = (jobject)(self->d_data);

  /* Declare return and temp variables */
  jobject _tmp_spatialReference = (jobject) NULL;
  *_ex = NULL;

  if ((*env)->PushLocalFrame(env, 10) < 0) goto JAVA_EXIT;
  /* Preprocess JNI variables */
  _tmp_spatialReference = sidl_Java_I2J_ifc(env, spatialReference, 
    "edu.csdms.openmi.ISpatialReference", TRUE);JAVA_CHECK(env);

  /* Callback to java method */
  (*env)->CallVoidMethod(env, this, s_data.setSpatialReference_ImplMID, 
    _tmp_spatialReference);
  JAVA_CHECK(env);
  /* Postprocess inout/out args */
  (*env)->DeleteLocalRef(env, _tmp_spatialReference);
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
  struct edu_csdms_openmi_ElementSet__object *self,
  int32_t nx,
  int32_t ny,
  double dx,
  double dy,
  double x0,
  double y0,
  struct sidl_BaseInterface__object **_ex
  )
{
  JNIEnv* env = sidl_Java_getEnv();
  /* Reference to the object */
  jobject this = (jobject)(self->d_data);

  /* Declare return and temp variables */
  jint _tmp_nx = 0;
  jint _tmp_ny = 0;
  jdouble _tmp_dx = 0.0;
  jdouble _tmp_dy = 0.0;
  jdouble _tmp_x0 = 0.0;
  jdouble _tmp_y0 = 0.0;
  *_ex = NULL;

  if ((*env)->PushLocalFrame(env, 9) < 0) goto JAVA_EXIT;
  /* Preprocess JNI variables */
  _tmp_nx = (int32_t) nx;
  _tmp_ny = (int32_t) ny;
  _tmp_dx = (double) dx;
  _tmp_dy = (double) dy;
  _tmp_x0 = (double) x0;
  _tmp_y0 = (double) y0;

  /* Callback to java method */
  (*env)->CallVoidMethod(env, this, s_data.setRasterGrid_ImplMID, _tmp_nx, 
    _tmp_ny, _tmp_dx, _tmp_dy, _tmp_x0, _tmp_y0);
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
  struct edu_csdms_openmi_ElementSet__object *self,
  struct edu_csdms_openmi_SpatialReference__object* dummy0,
  struct edu_csdms_openmi_Element__object* dummy1,
  struct edu_csdms_openmi_ISpatialReference__object* dummy2,
  struct sidl_BaseInterface__object **_ex
  )
{
  JNIEnv* env = sidl_Java_getEnv();
  /* Reference to the object */
  jobject this = (jobject)(self->d_data);

  /* Declare return and temp variables */
  jobject _tmp_dummy0 = (jobject) NULL;
  jobject _tmp_dummy1 = (jobject) NULL;
  jobject _tmp_dummy2 = (jobject) NULL;
  *_ex = NULL;

  if ((*env)->PushLocalFrame(env, 12) < 0) goto JAVA_EXIT;
  /* Preprocess JNI variables */
  _tmp_dummy0 = sidl_Java_I2J_cls(env, dummy0, 
    "edu.csdms.openmi.SpatialReference", TRUE);JAVA_CHECK(env);
  _tmp_dummy1 = sidl_Java_I2J_cls(env, dummy1, "edu.csdms.openmi.Element", 
    TRUE);JAVA_CHECK(env);
  _tmp_dummy2 = sidl_Java_I2J_ifc(env, dummy2, 
    "edu.csdms.openmi.ISpatialReference", TRUE);JAVA_CHECK(env);

  /* Callback to java method */
  (*env)->CallVoidMethod(env, this, s_data.boccaForceUsePortInclude_ImplMID, 
    _tmp_dummy0, _tmp_dummy1, _tmp_dummy2);
  JAVA_CHECK(env);
  /* Postprocess inout/out args */
  (*env)->DeleteLocalRef(env, _tmp_dummy0);
  JAVA_CHECK(env);
  (*env)->DeleteLocalRef(env, _tmp_dummy1);
  JAVA_CHECK(env);
  (*env)->DeleteLocalRef(env, _tmp_dummy2);
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
 * Method:  getID[]
 */

static char*
jni_getID(
  struct edu_csdms_openmi_ElementSet__object *self,
  struct sidl_BaseInterface__object **_ex
  )
{
  JNIEnv* env = sidl_Java_getEnv();
  /* Reference to the object */
  jobject this = (jobject)(self->d_data);

  /* Declare return and temp variables */
  jstring _j_retval = (jstring) NULL;
  char* _retval = (char*) NULL;
  *_ex = NULL;

  if ((*env)->PushLocalFrame(env, 11) < 0) goto JAVA_EXIT;
  /* Callback to java method */
  _j_retval = (*env)->CallObjectMethod(env, this, s_data.getID_ImplMID);
  JAVA_CHECK(env);
  /* Postprocess inout/out args */
  _retval = sidl_Java_J2I_string(env, _j_retval);
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
 * Method:  getDescription[]
 */

static char*
jni_getDescription(
  struct edu_csdms_openmi_ElementSet__object *self,
  struct sidl_BaseInterface__object **_ex
  )
{
  JNIEnv* env = sidl_Java_getEnv();
  /* Reference to the object */
  jobject this = (jobject)(self->d_data);

  /* Declare return and temp variables */
  jstring _j_retval = (jstring) NULL;
  char* _retval = (char*) NULL;
  *_ex = NULL;

  if ((*env)->PushLocalFrame(env, 11) < 0) goto JAVA_EXIT;
  /* Callback to java method */
  _j_retval = (*env)->CallObjectMethod(env, this, 
    s_data.getDescription_ImplMID);
  JAVA_CHECK(env);
  /* Postprocess inout/out args */
  _retval = sidl_Java_J2I_string(env, _j_retval);
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
 * Method:  getSpatialReference[]
 */

static struct edu_csdms_openmi_ISpatialReference__object*
jni_getSpatialReference(
  struct edu_csdms_openmi_ElementSet__object *self,
  struct sidl_BaseInterface__object **_ex
  )
{
  JNIEnv* env = sidl_Java_getEnv();
  /* Reference to the object */
  jobject this = (jobject)(self->d_data);

  /* Declare return and temp variables */
  jobject _j_retval = (jobject) NULL;
  struct edu_csdms_openmi_ISpatialReference__object* _retval = (struct 
    edu_csdms_openmi_ISpatialReference__object*) NULL;
  *_ex = NULL;

  if ((*env)->PushLocalFrame(env, 11) < 0) goto JAVA_EXIT;
  /* Callback to java method */
  _j_retval = (*env)->CallObjectMethod(env, this, 
    s_data.getSpatialReference_ImplMID);
  JAVA_CHECK(env);
  /* Postprocess inout/out args */
  _retval = (struct edu_csdms_openmi_ISpatialReference__object*) 
    sidl_Java_J2I_ifc(env, _j_retval, "edu.csdms.openmi.ISpatialReference", 
    TRUE);JAVA_CHECK(env);
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

    _retval = NULL; 
    (*env)->PopLocalFrame(env, NULL);
    return _retval;
  } 
}

/*
 * Method:  getElementType[]
 */

static int64_t
jni_getElementType(
  struct edu_csdms_openmi_ElementSet__object *self,
  struct sidl_BaseInterface__object **_ex
  )
{
  JNIEnv* env = sidl_Java_getEnv();
  /* Reference to the object */
  jobject this = (jobject)(self->d_data);

  /* Declare return and temp variables */
  jlong _j_retval = 0;
  int64_t _retval = (int64_t) 0;
  *_ex = NULL;

  if ((*env)->PushLocalFrame(env, 9) < 0) goto JAVA_EXIT;
  /* Callback to java method */
  _j_retval = (*env)->CallLongMethod(env, this, s_data.getElementType_ImplMID);
  JAVA_CHECK(env);
  /* Postprocess inout/out args */
  _retval = (int64_t) _j_retval;
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
 * Method:  getElementCount[]
 */

static int32_t
jni_getElementCount(
  struct edu_csdms_openmi_ElementSet__object *self,
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
  _j_retval = (*env)->CallIntMethod(env, this, s_data.getElementCount_ImplMID);
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
 * Method:  getVersion[]
 */

static int32_t
jni_getVersion(
  struct edu_csdms_openmi_ElementSet__object *self,
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
  _j_retval = (*env)->CallIntMethod(env, this, s_data.getVersion_ImplMID);
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
 * Method:  getElementIndex[]
 */

static int32_t
jni_getElementIndex(
  struct edu_csdms_openmi_ElementSet__object *self,
  const char* elementID,
  struct sidl_BaseInterface__object **_ex
  )
{
  JNIEnv* env = sidl_Java_getEnv();
  /* Reference to the object */
  jobject this = (jobject)(self->d_data);

  /* Declare return and temp variables */
  jstring _tmp_elementID = (jstring) NULL;
  jint _j_retval = 0;
  int32_t _retval = 0;
  *_ex = NULL;

  if ((*env)->PushLocalFrame(env, 10) < 0) goto JAVA_EXIT;
  /* Preprocess JNI variables */
  _tmp_elementID = sidl_Java_I2J_string(env, elementID);

  /* Callback to java method */
  _j_retval = (*env)->CallIntMethod(env, this, s_data.getElementIndex_ImplMID, 
    _tmp_elementID);
  JAVA_CHECK(env);
  /* Postprocess inout/out args */
  (*env)->DeleteLocalRef(env, _tmp_elementID);
  JAVA_CHECK(env);
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
 * Method:  getElementID[]
 */

static char*
jni_getElementID(
  struct edu_csdms_openmi_ElementSet__object *self,
  int32_t elementIndex,
  struct sidl_BaseInterface__object **_ex
  )
{
  JNIEnv* env = sidl_Java_getEnv();
  /* Reference to the object */
  jobject this = (jobject)(self->d_data);

  /* Declare return and temp variables */
  jint _tmp_elementIndex = 0;
  jstring _j_retval = (jstring) NULL;
  char* _retval = (char*) NULL;
  *_ex = NULL;

  if ((*env)->PushLocalFrame(env, 11) < 0) goto JAVA_EXIT;
  /* Preprocess JNI variables */
  _tmp_elementIndex = (int32_t) elementIndex;

  /* Callback to java method */
  _j_retval = (*env)->CallObjectMethod(env, this, s_data.getElementID_ImplMID, 
    _tmp_elementIndex);
  JAVA_CHECK(env);
  /* Postprocess inout/out args */
  _retval = sidl_Java_J2I_string(env, _j_retval);
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
 * Method:  getVertexCount[]
 */

static int32_t
jni_getVertexCount(
  struct edu_csdms_openmi_ElementSet__object *self,
  int32_t elementIndex,
  struct sidl_BaseInterface__object **_ex
  )
{
  JNIEnv* env = sidl_Java_getEnv();
  /* Reference to the object */
  jobject this = (jobject)(self->d_data);

  /* Declare return and temp variables */
  jint _tmp_elementIndex = 0;
  jint _j_retval = 0;
  int32_t _retval = 0;
  *_ex = NULL;

  if ((*env)->PushLocalFrame(env, 9) < 0) goto JAVA_EXIT;
  /* Preprocess JNI variables */
  _tmp_elementIndex = (int32_t) elementIndex;

  /* Callback to java method */
  _j_retval = (*env)->CallIntMethod(env, this, s_data.getVertexCount_ImplMID, 
    _tmp_elementIndex);
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
 * Method:  getFaceCount[]
 */

static int32_t
jni_getFaceCount(
  struct edu_csdms_openmi_ElementSet__object *self,
  int32_t elementIndex,
  struct sidl_BaseInterface__object **_ex
  )
{
  JNIEnv* env = sidl_Java_getEnv();
  /* Reference to the object */
  jobject this = (jobject)(self->d_data);

  /* Declare return and temp variables */
  jint _tmp_elementIndex = 0;
  jint _j_retval = 0;
  int32_t _retval = 0;
  *_ex = NULL;

  if ((*env)->PushLocalFrame(env, 9) < 0) goto JAVA_EXIT;
  /* Preprocess JNI variables */
  _tmp_elementIndex = (int32_t) elementIndex;

  /* Callback to java method */
  _j_retval = (*env)->CallIntMethod(env, this, s_data.getFaceCount_ImplMID, 
    _tmp_elementIndex);
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
 * Method:  getFaceVertexIndices[]
 */

static struct sidl_int__array*
jni_getFaceVertexIndices(
  struct edu_csdms_openmi_ElementSet__object *self,
  int32_t elementIndex,
  int32_t faceIndex,
  struct sidl_BaseInterface__object **_ex
  )
{
  JNIEnv* env = sidl_Java_getEnv();
  /* Reference to the object */
  jobject this = (jobject)(self->d_data);

  /* Declare return and temp variables */
  jint _tmp_elementIndex = 0;
  jint _tmp_faceIndex = 0;
  jobject _j_retval = (jobject) NULL;
  struct sidl_int__array* _retval = (struct sidl_int__array*) NULL;
  *_ex = NULL;

  if ((*env)->PushLocalFrame(env, 11) < 0) goto JAVA_EXIT;
  /* Preprocess JNI variables */
  _tmp_elementIndex = (int32_t) elementIndex;
  _tmp_faceIndex = (int32_t) faceIndex;

  /* Callback to java method */
  _j_retval = (*env)->CallObjectMethod(env, this, 
    s_data.getFaceVertexIndices_ImplMID, _tmp_elementIndex, _tmp_faceIndex);
  JAVA_CHECK(env);
  /* Postprocess inout/out args */
  _retval = (struct sidl_int__array*) sidl_Java_J2I_take_array(env, _j_retval);
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
 * Method:  getXCoordinate[]
 */

static double
jni_getXCoordinate(
  struct edu_csdms_openmi_ElementSet__object *self,
  int32_t elementIndex,
  int32_t vertexIndex,
  struct sidl_BaseInterface__object **_ex
  )
{
  JNIEnv* env = sidl_Java_getEnv();
  /* Reference to the object */
  jobject this = (jobject)(self->d_data);

  /* Declare return and temp variables */
  jint _tmp_elementIndex = 0;
  jint _tmp_vertexIndex = 0;
  jdouble _j_retval = 0.0;
  double _retval = 0.0;
  *_ex = NULL;

  if ((*env)->PushLocalFrame(env, 9) < 0) goto JAVA_EXIT;
  /* Preprocess JNI variables */
  _tmp_elementIndex = (int32_t) elementIndex;
  _tmp_vertexIndex = (int32_t) vertexIndex;

  /* Callback to java method */
  _j_retval = (*env)->CallDoubleMethod(env, this, s_data.getXCoordinate_ImplMID,
    _tmp_elementIndex, _tmp_vertexIndex);
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
 * Method:  getYCoordinate[]
 */

static double
jni_getYCoordinate(
  struct edu_csdms_openmi_ElementSet__object *self,
  int32_t elementIndex,
  int32_t vertexIndex,
  struct sidl_BaseInterface__object **_ex
  )
{
  JNIEnv* env = sidl_Java_getEnv();
  /* Reference to the object */
  jobject this = (jobject)(self->d_data);

  /* Declare return and temp variables */
  jint _tmp_elementIndex = 0;
  jint _tmp_vertexIndex = 0;
  jdouble _j_retval = 0.0;
  double _retval = 0.0;
  *_ex = NULL;

  if ((*env)->PushLocalFrame(env, 9) < 0) goto JAVA_EXIT;
  /* Preprocess JNI variables */
  _tmp_elementIndex = (int32_t) elementIndex;
  _tmp_vertexIndex = (int32_t) vertexIndex;

  /* Callback to java method */
  _j_retval = (*env)->CallDoubleMethod(env, this, s_data.getYCoordinate_ImplMID,
    _tmp_elementIndex, _tmp_vertexIndex);
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
 * Method:  getZCoordinate[]
 */

static double
jni_getZCoordinate(
  struct edu_csdms_openmi_ElementSet__object *self,
  int32_t elementIndex,
  int32_t vertexIndex,
  struct sidl_BaseInterface__object **_ex
  )
{
  JNIEnv* env = sidl_Java_getEnv();
  /* Reference to the object */
  jobject this = (jobject)(self->d_data);

  /* Declare return and temp variables */
  jint _tmp_elementIndex = 0;
  jint _tmp_vertexIndex = 0;
  jdouble _j_retval = 0.0;
  double _retval = 0.0;
  *_ex = NULL;

  if ((*env)->PushLocalFrame(env, 9) < 0) goto JAVA_EXIT;
  /* Preprocess JNI variables */
  _tmp_elementIndex = (int32_t) elementIndex;
  _tmp_vertexIndex = (int32_t) vertexIndex;

  /* Callback to java method */
  _j_retval = (*env)->CallDoubleMethod(env, this, s_data.getZCoordinate_ImplMID,
    _tmp_elementIndex, _tmp_vertexIndex);
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
edu_csdms_openmi_ElementSet__set_epv(struct edu_csdms_openmi_ElementSet__epv 
  *epv)
{
  /* initialize skel data struct */
  init_data();

  /* initialize builtin methods */
  epv->f__ctor = jni__ctor;
  epv->f__ctor2 = jni__ctor2;
  epv->f__dtor = jni__dtor;

  /* initialize local methods */
  epv->f_setID = jni_setID;
  epv->f_setElements = jni_setElements;
  epv->f_addElement = jni_addElement;
  epv->f_setElementType = jni_setElementType;
  epv->f_setSpatialReference = jni_setSpatialReference;
  epv->f_setRasterGrid = jni_setRasterGrid;
  epv->f_boccaForceUsePortInclude = jni_boccaForceUsePortInclude;
  epv->f_getID = jni_getID;
  epv->f_getDescription = jni_getDescription;
  epv->f_getSpatialReference = jni_getSpatialReference;
  epv->f_getElementType = jni_getElementType;
  epv->f_getElementCount = jni_getElementCount;
  epv->f_getVersion = jni_getVersion;
  epv->f_getElementIndex = jni_getElementIndex;
  epv->f_getElementID = jni_getElementID;
  epv->f_getVertexCount = jni_getVertexCount;
  epv->f_getFaceCount = jni_getFaceCount;
  epv->f_getFaceVertexIndices = jni_getFaceVertexIndices;
  epv->f_getXCoordinate = jni_getXCoordinate;
  epv->f_getYCoordinate = jni_getYCoordinate;
  epv->f_getZCoordinate = jni_getZCoordinate;
}
#ifdef __cplusplus
}
#endif

#ifdef WITH_RMI
#ifdef __cplusplus
extern "C" {
#endif

struct edu_csdms_openmi_SpatialReference__object* 
  skel_edu_csdms_openmi_ElementSet_fconnect_edu_csdms_openmi_SpatialReference(const
  char* url, sidl_bool ar, sidl_BaseInterface *_ex) { 
  return edu_csdms_openmi_SpatialReference__connectI(url, ar, _ex);
}

struct edu_csdms_openmi_Element__object* 
  skel_edu_csdms_openmi_ElementSet_fconnect_edu_csdms_openmi_Element(const 
  char* url, sidl_bool ar, sidl_BaseInterface *_ex) { 
  return edu_csdms_openmi_Element__connectI(url, ar, _ex);
}

struct sidl_BaseInterface__object* 
  skel_edu_csdms_openmi_ElementSet_fconnect_sidl_BaseInterface(const char* url, 
  sidl_bool ar, sidl_BaseInterface *_ex) { 
  return sidl_BaseInterface__connectI(url, ar, _ex);
}

struct edu_csdms_openmi_ISpatialReference__object* 
  skel_edu_csdms_openmi_ElementSet_fconnect_edu_csdms_openmi_ISpatialReference(const
  char* url, sidl_bool ar, sidl_BaseInterface *_ex) { 
  return edu_csdms_openmi_ISpatialReference__connectI(url, ar, _ex);
}

#ifdef __cplusplus
}
#endif
#endif /*WITH_RMI*/
