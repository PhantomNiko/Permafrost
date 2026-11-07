/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

ulong recovered_8241b024(long *param_1,long param_2,ulong param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  ulong size;
  ulong uVar2;

  if ((((param_2 != 0) && (param_3 < (ulong)param_1[1])) &&
      (size = recovered_82400de8((char *)param_2), size != 0)) &&
     (uVar2 = param_1[1], size <= uVar2 - param_3)) {
    for (; size + param_3 <= uVar2; param_3 = param_3 + 1) {
      iVar1 = recovered_82400bb4((void *)(*param_1 + param_3),(void *)param_2,size);
      if (iVar1 == 0) {
        return param_3;
      }
      uVar2 = param_1[1];
    }
  }
  return 0xffffffffffffffff;
}
