/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

ulong recovered_82467cd8(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;

  if (param_1 < 2) {
    return 8;
  }
  uVar3 = 8;
  do {
    uVar2 = (uint)uVar3;
    if (0x3ff < uVar2) {
      return uVar3;
    }
    uVar1 = 0;
    if (uVar3 != 0) {
      uVar1 = (((ulong)param_1 - 1) + uVar3) / uVar3;
    }
    uVar1 = uVar1 * 4 - 0x7fffff9;
    uVar4 = uVar2 << 1;
    if (0x200 < uVar2) {
      uVar4 = 0x400;
    }
    if (0xfffffffff7fffffe < uVar1) {
      uVar4 = uVar2;
    }
    uVar3 = (ulong)uVar4;
  } while (uVar2 < 0x201 && uVar1 < 0xfffffffff7ffffff);
  return uVar3;
}
