#include "swigtest.h"
#include <jni.h>
#include <string>


extern "C" JNIEXPORT jstring JNICALL
Java_com_mycompany_swigtest_MainActivity_stringFromJNI(
        JNIEnv* env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    swigtest *result = 0 ;
    result = (swigtest *)new swigtest();
    result->GetNumber();
    std::string perfect = std::to_string(result->GetNumber());
    return env->NewStringUTF(perfect.c_str());
}