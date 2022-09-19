#include <jni.h>
#include <string>
#include "libfoo.h"

extern "C" {
jstring
Java_com_reactapp_GoModule_reverse(JNIEnv* env, jobject, jstring str) {
    globalEnv=env;
    const char* cstr = env->GetStringUTFChars(str, 0);
    char* cout = reverse(const_cast<char*>(cstr));
    jstring out = env->NewStringUTF(cout);
    env->ReleaseStringUTFChars(str, cstr);
    free(cout);
    return out;
}
}
