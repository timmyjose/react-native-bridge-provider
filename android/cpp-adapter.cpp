#include <jni.h>
#include "react-native-bridge-provider.h"

extern "C"
JNIEXPORT jstring JNICALL
Java_com_bridgeprovider_BridgeProviderModule_nativeExecute(JNIEnv *env, jclass type, jstring cmd) {
    const char *native_cmd = env->GetStringUTFChars(cmd, JNI_FALSE);
    if (native_cmd == nullptr) {
        return nullptr;
    }
    const char *res = bridgeprovider::execute(native_cmd);
    env->ReleaseStringUTFChars(cmd, native_cmd);

    return env->NewStringUTF(res);
}