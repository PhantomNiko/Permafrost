/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

uchar recovered_2075810(long *param_1,int param_2,long in_RDX)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  uint uVar2;

  lVar1 = *param_1;
  if (lVar1 != 0) {
    uVar2 = *(uint *)(param_1 + 1);
    if ((uVar2 & 0x1ff) == 0 && 0x1ff < (ulong)uVar2) {
      uVar2 = recovered_206b1b0(*(byte *)(lVar1 + 4),
                                (ulong)((uVar2 >> 9) * param_2 + *(int *)(lVar1 + 8)),in_RDX,
                                (ulong)uVar2);
      return (uchar)uVar2;
    }
  }
  return '\0';
}
