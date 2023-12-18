#include <jni.h>
#include "react-native-bridge-provider.h"

extern "C"
JNIEXPORT jdouble JNICALL
Java_com_bridgeprovider_BridgeProviderModule_nativeMultiply(JNIEnv *env, jclass type, jdouble a, jdouble b) {
    return bridgeprovider::multiply(a, b);
}
