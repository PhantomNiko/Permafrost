/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

double recovered_40403068(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  double dVar2;

  uVar1 = (uint)((ulonglong)value >> 0x20);
  dVar2 = (double)(((ulonglong)uVar1 << 0x20) + ((ulonglong)value & 0xffffffff));
  if (dVar2 < 0.0) {
    dVar2 = (double)(((ulonglong)(uVar1 ^ 0x80000000) << 0x20) + ((ulonglong)value & 0xffffffff));
  }
  return dVar2;
}
