#ifndef _UTIL_HPP_
#define _UTIL_HPP_

#include <jni.h>

extern "C" {
#include <cstdlib>
}

#define JNI_FUNC(retType, bindClass, name)  JNIEXPORT retType JNICALL Java_io_stanwood_pdfium_##bindClass##_##name
#define JNI_ARGS JNIEnv *env, jobject thiz

#define LOG_TAG "jniPdfium"


#endif