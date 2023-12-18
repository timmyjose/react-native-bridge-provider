#ifdef __cplusplus
#import "react-native-bridge-provider.h"
#endif

#ifdef RCT_NEW_ARCH_ENABLED
#import "RNBridgeProviderSpec.h"

@interface BridgeProvider : NSObject <NativeBridgeProviderSpec>
#else
#import <React/RCTBridgeModule.h>

@interface BridgeProvider : NSObject <RCTBridgeModule>
#endif

@end
