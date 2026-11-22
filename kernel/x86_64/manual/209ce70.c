/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

uchar recovered_209ce70(long param_1,long param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  if (param_2 == 0 || param_1 == 0) {
    return '\0';
  }
  if ((*(ulong *)(param_1 + 0x10) < **(ulong **)(param_1 + 8)) &&
     (iVar1 = recovered_2002eb0(*(char **)((*(ulong **)(param_1 + 8))[2] +
                                          *(ulong *)(param_1 + 0x10) * 8),(char *)param_2),
     iVar1 == 0)) {
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 1;
    return '\x01';
  }
  return '\0';
}
