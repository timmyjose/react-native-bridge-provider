#include "react-native-bridge-provider.h"

namespace bridgeprovider {
	const char *execute(const char *cmd) {
		return rust_execute(cmd);
	}
}
