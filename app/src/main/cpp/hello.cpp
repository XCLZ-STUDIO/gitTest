//
// Created by 13043 on 2019/8/2.
//

extern "C" {
    #include <jni.h>

    JNIEXPORT jstring JNICALL Java_com_xclz_gittest_MainActivity_stringFromJNI(JNIEnv *env, jobject thiz) {
        return env->NewStringUTF("Hello from JNI~~~~!");
    }
}