/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

void recovered_8246d844(long param_1,int param_2,int param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  if ((param_1 != 0) && (param_3 != 0)) {
    uVar1 = param_2 - 2;
    for (; param_3 != 0; param_3 = param_3 + -1) {
      *(byte *)(param_1 + (ulong)(uVar1 >> 3)) =
           *(byte *)(param_1 + (ulong)(uVar1 >> 3)) | (byte)(1 << (ulong)(uVar1 & 7));
      uVar1 = uVar1 + 1;
    }
  }
  return;
}
