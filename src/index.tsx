const BridgeProvider = require('./NativeBridgeProvider').default;

export function multiply(a: number, b: number): number {
  return BridgeProvider.multiply(a, b);
}
