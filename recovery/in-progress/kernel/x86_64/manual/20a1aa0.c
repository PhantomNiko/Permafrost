/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

uchar recovered_20a1aa0(long param_1,long param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uchar uVar1;
  uint uVar2;

  if (param_2 != 0 && param_1 != 0) {
    uVar1 = recovered_20a1b00(param_1,*(long *)(param_1 + 8) + 1);
    if (uVar1 != '\0') {
      uVar2 = recovered_20a0670((undefined8 *)
                                (*(long *)(param_1 + 0x18) + *(long *)(param_1 + 8) * 0x40 + -0x40),
                                (undefined8 *)param_2);
      return (uchar)uVar2;
    }
  }
  return '\0';
}
