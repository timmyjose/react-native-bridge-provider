package com.bridgeprovider;

import androidx.annotation.NonNull;

import com.facebook.react.bridge.ReactApplicationContext;
import com.facebook.react.module.annotations.ReactModule;

@ReactModule(name = BridgeProviderModule.NAME)
public class BridgeProviderModule extends NativeBridgeProviderSpec {
  public static final String NAME = "BridgeProvider";

  public BridgeProviderModule(ReactApplicationContext reactContext) {
    super(reactContext);
  }

  @Override
  @NonNull
  public String getName() {
    return NAME;
  }

  static {
    System.loadLibrary("react-native-bridge-provider");
  }

  private static native String nativeExecute(String cmd);

  // Example method
  // See https://reactnative.dev/docs/native-modules-android
  @Override
  public String execute(String cmd) {
    return nativeExecute(cmd);
  }
}
