/*
 * File:          edu_csdms_openmi_Element_jniSkel.c
 * Symbol:        edu.csdms.openmi.Element-v0.0
 * Symbol Type:   class
 * Babel Version: 1.4.0 (Revision: 6607 release-1-4-0-branch)
 * Description:   Server-side JNI glue code for edu.csdms.openmi.Element
 * 
 * WARNING: Automatically generated; only changes within splicers preserved
 * 
 */

#include "sidl_Java.h"
#include "sidl_Loader.h"
#include "sidl_String.h"
#include "edu_csdms_openmi_Element_IOR.h"
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
#ifndef included_edu_csdms_openmi_Vertex_jniStub_h
#include "edu_csdms_openmi_Vertex_jniStub.h"
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
static struct edu_csdms_openmi_Element_jniSkel__data
{
  jclass thisCls;
  jmethodID ctorMID;
  jmethodID dtorMID;
  jmethodID setVertices_ImplMID;
  jmethodID getID_ImplMID;
  jmethodID setID_ImplMID;
  jmethodID getVertex_ImplMID;
  jmethodID getVertexCount_ImplMID;
  jmethodID addVertex_ImplMID;
  jmethodID getFaceCount_ImplMID;
  jmethodID addFace_ImplMID;
  jmethodID getFaceVertexIndices_ImplMID;
  jmethodID boccaForceUsePortInclude_ImplMID;
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
    tempCls = (*env)->FindClass(env, "edu/csdms/openmi/Element_Impl");
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
  s_data.setVertices_ImplMID = (*env)->GetMethodID(env, s_data.thisCls, 
    "setVertices_Impl", "(Ledu/csdms/openmi/Vertex$Array1;)V");
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
  s_data.setID_ImplMID = (*env)->GetMethodID(env, s_data.thisCls, "setID_Impl", 
    "(Ljava/lang/String;)V");
  if ((*env)->ExceptionCheck(env)) {
    (*env)->ExceptionDescribe(env);
    return ;
  }
  s_data.getVertex_ImplMID = (*env)->GetMethodID(env, s_data.thisCls, 
    "getVertex_Impl", "(I)Ledu/csdms/openmi/Vertex;");
  if ((*env)->ExceptionCheck(env)) {
    (*env)->ExceptionDescribe(env);
    return ;
  }
  s_data.getVertexCount_ImplMID = (*env)->GetMethodID(env, s_data.thisCls, 
    "getVertexCount_Impl", "()I");
  if ((*env)->ExceptionCheck(env)) {
    (*env)->ExceptionDescribe(env);
    return ;
  }
  s_data.addVertex_ImplMID = (*env)->GetMethodID(env, s_data.thisCls, 
    "addVertex_Impl", "(Ledu/csdms/openmi/Vertex;)V");
  if ((*env)->ExceptionCheck(env)) {
    (*env)->ExceptionDescribe(env);
    return ;
  }
  s_data.getFaceCount_ImplMID = (*env)->GetMethodID(env, s_data.thisCls, 
    "getFaceCount_Impl", "()I");
  if ((*env)->ExceptionCheck(env)) {
    (*env)->ExceptionDescribe(env);
    return ;
  }
  s_data.addFace_ImplMID = (*env)->GetMethodID(env, s_data.thisCls, 
    "addFace_Impl", "(Lsidl/Integer$Array1;)V");
  if ((*env)->ExceptionCheck(env)) {
    (*env)->ExceptionDescribe(env);
    return ;
  }
  s_data.getFaceVertexIndices_ImplMID = (*env)->GetMethodID(env, s_data.thisCls,
    "getFaceVertexIndices_Impl", "(I)Lsidl/Integer$Array1;");
  if ((*env)->ExceptionCheck(env)) {
    (*env)->ExceptionDescribe(env);
    return ;
  }
  s_data.boccaForceUsePortInclude_ImplMID = (*env)->GetMethodID(env, 
    s_data.thisCls, "boccaForceUsePortInclude_Impl", 
    "(Ledu/csdms/openmi/Vertex;)V");
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
jni__ctor(struct edu_csdms_openmi_Element__object *self, struct 
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
jni__ctor2(struct edu_csdms_openmi_Element__object *self, void* ddata, struct 
  sidl_BaseInterface__object * *_ex)
{ *_ex = NULL; }
/**
 * Deconstructing method
 */
static void
jni__dtor(struct edu_csdms_openmi_Element__object *self, struct 
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

void edu_csdms_openmi_Element__call_load(void) { 
  /* FIXME: Not implemented for Java yet */
}

/*
 * Method:  setVertices[]
 */

static void
jni_setVertices(
  struct edu_csdms_openmi_Element__object *self,
  struct edu_csdms_openmi_Vertex__array* vertices,
  struct sidl_BaseInterface__object **_ex
  )
{
  JNIEnv* env = sidl_Java_getEnv();
  /* Reference to the object */
  jobject this = (jobject)(self->d_data);

  /* Declare return and temp variables */
  jobject _tmp_vertices = (jobject) NULL;
  *_ex = NULL;

  if ((*env)->PushLocalFrame(env, 10) < 0) goto JAVA_EXIT;
  /* Preprocess JNI variables */
  _tmp_vertices = sidl_Java_I2J_new_array_server(env, vertices, 
    "edu.csdms.openmi.Vertex$Array1");

  /* Callback to java method */
  (*env)->CallVoidMethod(env, this, s_data.setVertices_ImplMID, _tmp_vertices);
  JAVA_CHECK(env);
  /* Postprocess inout/out args */
  (*env)->DeleteLocalRef(env, _tmp_vertices);
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
  struct edu_csdms_openmi_Element__object *self,
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
 * Method:  setID[]
 */

static void
jni_setID(
  struct edu_csdms_openmi_Element__object *self,
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
 * Method:  getVertex[]
 */

static struct edu_csdms_openmi_Vertex__object*
jni_getVertex(
  struct edu_csdms_openmi_Element__object *self,
  int32_t index,
  struct sidl_BaseInterface__object **_ex
  )
{
  JNIEnv* env = sidl_Java_getEnv();
  /* Reference to the object */
  jobject this = (jobject)(self->d_data);

  /* Declare return and temp variables */
  jint _tmp_index = 0;
  jobject _j_retval = (jobject) NULL;
  struct edu_csdms_openmi_Vertex__object* _retval = (struct 
    edu_csdms_openmi_Vertex__object*) NULL;
  *_ex = NULL;

  if ((*env)->PushLocalFrame(env, 11) < 0) goto JAVA_EXIT;
  /* Preprocess JNI variables */
  _tmp_index = (int32_t) index;

  /* Callback to java method */
  _j_retval = (*env)->CallObjectMethod(env, this, s_data.getVertex_ImplMID, 
    _tmp_index);
  JAVA_CHECK(env);
  /* Postprocess inout/out args */
  _retval = (struct edu_csdms_openmi_Vertex__object*) sidl_Java_J2I_cls(env, 
    _j_retval, TRUE);JAVA_CHECK(env);
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
 * Method:  getVertexCount[]
 */

static int32_t
jni_getVertexCount(
  struct edu_csdms_openmi_Element__object *self,
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
  _j_retval = (*env)->CallIntMethod(env, this, s_data.getVertexCount_ImplMID);
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
 * Method:  addVertex[]
 */

static void
jni_addVertex(
  struct edu_csdms_openmi_Element__object *self,
  struct edu_csdms_openmi_Vertex__object* vertex,
  struct sidl_BaseInterface__object **_ex
  )
{
  JNIEnv* env = sidl_Java_getEnv();
  /* Reference to the object */
  jobject this = (jobject)(self->d_data);

  /* Declare return and temp variables */
  jobject _tmp_vertex = (jobject) NULL;
  *_ex = NULL;

  if ((*env)->PushLocalFrame(env, 10) < 0) goto JAVA_EXIT;
  /* Preprocess JNI variables */
  _tmp_vertex = sidl_Java_I2J_cls(env, vertex, "edu.csdms.openmi.Vertex", 
    TRUE);JAVA_CHECK(env);

  /* Callback to java method */
  (*env)->CallVoidMethod(env, this, s_data.addVertex_ImplMID, _tmp_vertex);
  JAVA_CHECK(env);
  /* Postprocess inout/out args */
  (*env)->DeleteLocalRef(env, _tmp_vertex);
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
 * Method:  getFaceCount[]
 */

static int32_t
jni_getFaceCount(
  struct edu_csdms_openmi_Element__object *self,
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
  _j_retval = (*env)->CallIntMethod(env, this, s_data.getFaceCount_ImplMID);
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
 * Method:  addFace[]
 */

static void
jni_addFace(
  struct edu_csdms_openmi_Element__object *self,
  struct sidl_int__array* vertexIndices,
  struct sidl_BaseInterface__object **_ex
  )
{
  JNIEnv* env = sidl_Java_getEnv();
  /* Reference to the object */
  jobject this = (jobject)(self->d_data);

  /* Declare return and temp variables */
  jobject _tmp_vertexIndices = (jobject) NULL;
  *_ex = NULL;

  if ((*env)->PushLocalFrame(env, 10) < 0) goto JAVA_EXIT;
  /* Preprocess JNI variables */
  _tmp_vertexIndices = sidl_Java_I2J_new_array_server(env, vertexIndices, 
    "sidl.Integer$Array1");

  /* Callback to java method */
  (*env)->CallVoidMethod(env, this, s_data.addFace_ImplMID, _tmp_vertexIndices);
  JAVA_CHECK(env);
  /* Postprocess inout/out args */
  (*env)->DeleteLocalRef(env, _tmp_vertexIndices);
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
 * Method:  getFaceVertexIndices[]
 */

static struct sidl_int__array*
jni_getFaceVertexIndices(
  struct edu_csdms_openmi_Element__object *self,
  int32_t faceIndex,
  struct sidl_BaseInterface__object **_ex
  )
{
  JNIEnv* env = sidl_Java_getEnv();
  /* Reference to the object */
  jobject this = (jobject)(self->d_data);

  /* Declare return and temp variables */
  jint _tmp_faceIndex = 0;
  jobject _j_retval = (jobject) NULL;
  struct sidl_int__array* _retval = (struct sidl_int__array*) NULL;
  *_ex = NULL;

  if ((*env)->PushLocalFrame(env, 11) < 0) goto JAVA_EXIT;
  /* Preprocess JNI variables */
  _tmp_faceIndex = (int32_t) faceIndex;

  /* Callback to java method */
  _j_retval = (*env)->CallObjectMethod(env, this, 
    s_data.getFaceVertexIndices_ImplMID, _tmp_faceIndex);
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
 *  This function should never be called, but helps babel generate better code. 
 */

static void
jni_boccaForceUsePortInclude(
  struct edu_csdms_openmi_Element__object *self,
  struct edu_csdms_openmi_Vertex__object* dummy0,
  struct sidl_BaseInterface__object **_ex
  )
{
  JNIEnv* env = sidl_Java_getEnv();
  /* Reference to the object */
  jobject this = (jobject)(self->d_data);

  /* Declare return and temp variables */
  jobject _tmp_dummy0 = (jobject) NULL;
  *_ex = NULL;

  if ((*env)->PushLocalFrame(env, 10) < 0) goto JAVA_EXIT;
  /* Preprocess JNI variables */
  _tmp_dummy0 = sidl_Java_I2J_cls(env, dummy0, "edu.csdms.openmi.Vertex", 
    TRUE);JAVA_CHECK(env);

  /* Callback to java method */
  (*env)->CallVoidMethod(env, this, s_data.boccaForceUsePortInclude_ImplMID, 
    _tmp_dummy0);
  JAVA_CHECK(env);
  /* Postprocess inout/out args */
  (*env)->DeleteLocalRef(env, _tmp_dummy0);
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

#ifdef __cplusplus
extern "C" {
#endif

void
edu_csdms_openmi_Element__set_epv(struct edu_csdms_openmi_Element__epv *epv)
{
  /* initialize skel data struct */
  init_data();

  /* initialize builtin methods */
  epv->f__ctor = jni__ctor;
  epv->f__ctor2 = jni__ctor2;
  epv->f__dtor = jni__dtor;

  /* initialize local methods */
  epv->f_setVertices = jni_setVertices;
  epv->f_getID = jni_getID;
  epv->f_setID = jni_setID;
  epv->f_getVertex = jni_getVertex;
  epv->f_getVertexCount = jni_getVertexCount;
  epv->f_addVertex = jni_addVertex;
  epv->f_getFaceCount = jni_getFaceCount;
  epv->f_addFace = jni_addFace;
  epv->f_getFaceVertexIndices = jni_getFaceVertexIndices;
  epv->f_boccaForceUsePortInclude = jni_boccaForceUsePortInclude;
}
#ifdef __cplusplus
}
#endif

#ifdef WITH_RMI
#ifdef __cplusplus
extern "C" {
#endif

struct sidl_BaseInterface__object* 
  skel_edu_csdms_openmi_Element_fconnect_sidl_BaseInterface(const char* url, 
  sidl_bool ar, sidl_BaseInterface *_ex) { 
  return sidl_BaseInterface__connectI(url, ar, _ex);
}

struct edu_csdms_openmi_Vertex__object* 
  skel_edu_csdms_openmi_Element_fconnect_edu_csdms_openmi_Vertex(const char* 
  url, sidl_bool ar, sidl_BaseInterface *_ex) { 
  return edu_csdms_openmi_Vertex__connectI(url, ar, _ex);
}

#ifdef __cplusplus
}
#endif
#endif /*WITH_RMI*/
