cmake_minimum_required(VERSION 3.22)
project(BridgeProvider)

set (CMAKE_VERBOSE_MAKEFILE ON)
set (CMAKE_CXX_STANDARD 11)

add_library(react-native-bridge-provider            SHARED
            ../cpp/react-native-bridge-provider.cpp
            cpp-adapter.cpp
)

# Link against the correct Android library
if(CMAKE_ANDROID_ARCH_ABI STREQUAL arm64-v8a)
    message(INFO "[Android] Building for ARM 64")
    target_link_directories(react-native-bridge-provider PUBLIC ../cpp/target/aarch64-linux-android/release/)
    target_link_libraries(react-native-bridge-provider librustbridge.a)
elseif(CMAKE_ANDROID_ARCH_ABI STREQUAL x86)
    message(INFO "[Android] Building for x86")
    target_link_directories(react-native-bridge-provider PUBLIC ../cpp/target/i686-linux-android/release/)
    target_link_libraries(react-native-bridge-provider librustbridge.a)
elseif(CMAKE_ANDROID_ARCH_ABI STREQUAL x86_64)
    message(INFO "[Android] Building for x86_64")
    target_link_directories(react-native-bridge-provider PUBLIC ../cpp/target/x86_64-linux-android/release/)
    target_link_libraries(react-native-bridge-provider librustbridge.a)
elseif(CMAKE_ANDROID_ARCH_ABI STREQUAL armeabi-v7a)
    message(INFO "[Android] Building for armeabi-v7a")
    target_link_directories(react-native-bridge-provider PUBLIC ../cpp/target/armv7-linux-androideabi/release/)
    target_link_libraries(react-native-bridge-provider librustbridge.a)
else()
    message(ERROR "[Andrpid] UNKNOWN or UNSUPPORTED platform and/or abi")
endif()

# Specifies a path to native header files.
include_directories(
            ../cpp
)
