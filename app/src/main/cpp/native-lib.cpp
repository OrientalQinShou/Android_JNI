#include <jni.h>
#include <string>

extern "C"
JNIEXPORT jstring JNICALL
Java_com_heaven_jniandroid_jniimpl_JniOutput_stringFromJNI(JNIEnv *env, jobject thiz) {
    // TODO: implement stringFromJNI()
}extern "C"
JNIEXPORT jstring JNICALL
Java_com_heaven_jniandroid_MainActivity_stringFromJNI(JNIEnv *env, jobject thiz) {
    // TODO: implement stringFromJNI()

    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}
extern "C"
JNIEXPORT jstring JNICALL
Java_com_heaven_jniandroid_jniimpl_JniOutput_stringJNI(JNIEnv *env, jclass thiz) {
    // TODO: implement stringJNI()
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}