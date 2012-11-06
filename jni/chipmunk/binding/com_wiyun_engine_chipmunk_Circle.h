/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_wiyun_engine_chipmunk_Circle */

#ifndef _Included_com_wiyun_engine_chipmunk_Circle
#define _Included_com_wiyun_engine_chipmunk_Circle
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_wiyun_engine_chipmunk_Circle
 * Method:    init
 * Signature: (Lcom/wiyun/engine/chipmunk/Body;FFF)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_chipmunk_Circle_init
  (JNIEnv *, jobject, jobject, jfloat, jfloat, jfloat);

/*
 * Class:     com_wiyun_engine_chipmunk_Circle
 * Method:    setRadius
 * Signature: (F)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_chipmunk_Circle_setRadius
  (JNIEnv *, jobject, jfloat);

/*
 * Class:     com_wiyun_engine_chipmunk_Circle
 * Method:    getRadius
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_com_wiyun_engine_chipmunk_Circle_getRadius
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_chipmunk_Circle
 * Method:    setOffset
 * Signature: (FF)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_chipmunk_Circle_setOffset
  (JNIEnv *, jobject, jfloat, jfloat);

/*
 * Class:     com_wiyun_engine_chipmunk_Circle
 * Method:    getOffsetX
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_com_wiyun_engine_chipmunk_Circle_getOffsetX
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_chipmunk_Circle
 * Method:    getOffsetY
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_com_wiyun_engine_chipmunk_Circle_getOffsetY
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif