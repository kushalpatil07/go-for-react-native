#include "jx.h"
JNIEnv* globalEnv;
char* get_battery_status(){
    // Construct a VM
    // Construct a String
    jstring jstr = (*globalEnv)->NewStringUTF(globalEnv,"This string comes from JNI");
    // First get the class that contains the method you need to call
    jclass clazz = (*globalEnv)->FindClass(globalEnv,"com/reactapp/GoModule");
    // Get the method that you want to call
    jmethodID GetBatteryStatus = (*globalEnv)->GetStaticMethodID(globalEnv,clazz, "get_battery_status", "()Ljava/lang/String;");
    // Call the method on the object
    jobject result = (*globalEnv)->CallStaticObjectMethod(globalEnv,clazz, GetBatteryStatus);
    // Get a C-style string
    char* str = (*globalEnv)->GetStringUTFChars(globalEnv,(jstring) result, NULL);
    printf("%s\n", str);
        // Clean up
    (*globalEnv)->ReleaseStringUTFChars(globalEnv,jstr, str);

    // Shutdown the VM.
    //(*vm)->DestroyJavaVM(vm);

    return str;

}
