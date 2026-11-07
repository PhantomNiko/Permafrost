/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

ulong recovered_8246b1ec(long *param_1,byte *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  char *left;
  ulong uVar2;
  long lVar3;

  if (param_1 != (long *)0x0) {
    lVar3 = 0;
    for (uVar2 = 0; uVar2 < (ulong)param_1[1]; uVar2 = uVar2 + 1) {
      if (((*(char *)(*param_1 + lVar3 + 0x48) == '\x01') &&
          (left = *(char **)(*param_1 + lVar3), left != (char *)0x0)) &&
         (iVar1 = recovered_82400e0c(left,(char *)param_2), iVar1 == 0)) {
        return uVar2;
      }
      lVar3 = lVar3 + 0x50;
    }
  }
  return 0xffffffff;
}
