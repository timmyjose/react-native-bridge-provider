#ifndef BRIDGEPROVIDER_H
#define BRIDGEPROVIDER_H

extern "C" const char *rust_execute(const char*);

namespace bridgeprovider {
  const char *execute(const char *cmd);
}

#endif /* BRIDGEPROVIDER_H */
