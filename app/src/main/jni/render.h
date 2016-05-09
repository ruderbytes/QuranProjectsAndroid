/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_loopslab_wordbywordquran_text_NativeRenderer */

#ifndef _Included_com_loopslab_wordbywordquran_text_NativeRenderer
#define _Included_com_loopslab_wordbywordquran_text_NativeRenderer
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_grafian_bquran_text_NativeRenderer
 * Method:    loadFont
 * Signature: ([B)V
 */
JNIEXPORT void JNICALL
Java_com_loopslab_wordbywordquran_text_NativeRenderer_loadFont
(JNIEnv
*, jclass, jbyteArray);

/*
 * Class:     com_grafian_bquran_text_NativeRenderer
 * Method:    getTextExtent
 * Signature: (Ljava/lang/String;I)[I
 */
JNIEXPORT jintArray

JNICALL Java_com_loopslab_wordbywordquran_text_NativeRenderer_getTextExtent
        (JNIEnv *, jclass, jstring, jint);

/*
 * Class:     com_grafian_bquran_text_NativeRenderer
 * Method:    renderText
 * Signature: (Ljava/lang/String;I)Ljava/lang/Object;
 */
JNIEXPORT jobject

JNICALL Java_com_loopslab_wordbywordquran_text_NativeRenderer_renderText
        (JNIEnv *, jclass, jstring, jint);

#ifdef __cplusplus
}
#endif
#endif