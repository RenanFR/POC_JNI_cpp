#include <iostream>
#include "jni.h"

extern "C" JNIEXPORT jint JNICALL Java_com_example_Native_addNumbers(JNIEnv* env, jobject obj, jint a, jint b) {
    return a + b;
}
