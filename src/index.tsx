/* eslint-disable prettier/prettier */
const BridgeProvider = require('./NativeBridgeProvider').default

export function execute(cmd: string): string {
  return BridgeProvider.execute(cmd)
}
