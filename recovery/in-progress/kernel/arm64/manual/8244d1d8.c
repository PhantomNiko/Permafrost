/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

ulonglong recovered_8244d1d8(int *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  ulong uVar2;

  if (param_1 != (int *)0x0) {
    iVar1 = *param_1 + -1;
    if (*param_1 == 0 || iVar1 == 0) {
      for (uVar2 = 0; uVar2 < *(ulong *)(param_1 + 0x1a); uVar2 = uVar2 + 1) {
        recovered_82400748(*(void **)((long)*(void **)(param_1 + 0x18) + uVar2 * 8));
      }
      recovered_82400748(*(void **)(param_1 + 0x18));
      recovered_8244a8c0(*(long **)(param_1 + 0x1c),*(long *)(param_1 + 0x1e));
      recovered_82400748(*(void **)(param_1 + 4));
      recovered_82400748(*(void **)(param_1 + 6));
      recovered_8243166c((undefined8 *)(param_1 + 8));
      uVar2 = recovered_82400748(param_1);
      return uVar2;
    }
    *param_1 = iVar1;
  }
  return (ulonglong)param_1;
}
