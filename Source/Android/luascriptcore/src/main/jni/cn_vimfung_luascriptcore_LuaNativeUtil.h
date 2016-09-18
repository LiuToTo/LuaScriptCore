/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class cn_vimfung_luascriptcore_LuaNativeUtil */

#ifndef _Included_cn_vimfung_luascriptcore_LuaNativeUtil
#define _Included_cn_vimfung_luascriptcore_LuaNativeUtil
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     cn_vimfung_luascriptcore_LuaNativeUtil
 * Method:    createContext
 * Signature: ()Lcn/vimfung/luascriptcore/LuaContext;
 */
JNIEXPORT jobject JNICALL Java_cn_vimfung_luascriptcore_LuaNativeUtil_createContext
  (JNIEnv *, jclass);

/*
 * Class:     cn_vimfung_luascriptcore_LuaNativeUtil
 * Method:    addSearchPath
 * Signature: (ILjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_cn_vimfung_luascriptcore_LuaNativeUtil_addSearchPath
  (JNIEnv *, jclass, jint, jstring);

/*
 * Class:     cn_vimfung_luascriptcore_LuaNativeUtil
 * Method:    evalScript
 * Signature: (ILjava/lang/String;)Lcn/vimfung/luascriptcore/LuaValue;
 */
JNIEXPORT jobject JNICALL Java_cn_vimfung_luascriptcore_LuaNativeUtil_evalScript
  (JNIEnv *, jclass, jint, jstring);

/*
 * Class:     cn_vimfung_luascriptcore_LuaNativeUtil
 * Method:    evalScriptFromFile
 * Signature: (ILjava/lang/String;)Lcn/vimfung/luascriptcore/LuaValue;
 */
JNIEXPORT jobject JNICALL Java_cn_vimfung_luascriptcore_LuaNativeUtil_evalScriptFromFile
  (JNIEnv *, jclass, jint, jstring);

/*
 * Class:     cn_vimfung_luascriptcore_LuaNativeUtil
 * Method:    callMethod
 * Signature: (ILjava/lang/String;[Lcn/vimfung/luascriptcore/LuaValue;)Lcn/vimfung/luascriptcore/LuaValue;
 */
JNIEXPORT jobject JNICALL Java_cn_vimfung_luascriptcore_LuaNativeUtil_callMethod
  (JNIEnv *, jclass, jint, jstring, jobjectArray);

/*
 * Class:     cn_vimfung_luascriptcore_LuaNativeUtil
 * Method:    registerMethod
 * Signature: (ILjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_cn_vimfung_luascriptcore_LuaNativeUtil_registerMethod
  (JNIEnv *, jclass, jint, jstring);

/*
 * Class:     cn_vimfung_luascriptcore_LuaNativeUtil
 * Method:    releaseNativeObject
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_cn_vimfung_luascriptcore_LuaNativeUtil_releaseNativeObject
  (JNIEnv *, jclass, jint);

#ifdef __cplusplus
}
#endif
#endif
