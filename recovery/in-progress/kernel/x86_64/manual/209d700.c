/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

ulonglong recovered_209d700(uint *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  void *buffer;
  long lVar1;
  uint uVar2;
  ulonglong in_RAX;
  ulonglong extraout_RAX = 0;
  long lVar3;
  ulong uVar4;

  if (param_1 != (uint *)0x0) {
    if (*param_1 < 2) {
      if (*(long *)(param_1 + 0x1a) != 0) {
        uVar4 = 0;
        do {
          recovered_2000bb0(*(void **)(*(long *)(param_1 + 0x18) + uVar4 * 8));
          uVar4 = uVar4 + 1;
        } while (uVar4 < *(ulong *)(param_1 + 0x1a));
      }
      recovered_2000bb0(*(void **)(param_1 + 0x18));
      buffer = *(void **)(param_1 + 0x1c);
      if (buffer != (void *)0x0) {
        lVar1 = *(long *)(param_1 + 0x1e);
        if (lVar1 != 0) {
          lVar3 = 0;
          do {
            recovered_2000bb0(*(void **)((long)buffer + lVar3 * 8));
            *(undefined8 *)((long)buffer + lVar3 * 8) = 0;
            lVar3 = lVar3 + 1;
          } while (lVar1 != lVar3);
        }
        recovered_2000bb0(buffer);
      }
      recovered_2000bb0(*(void **)(param_1 + 4));
      recovered_2000bb0(*(void **)(param_1 + 6));
      recovered_205ec00((undefined8 *)(param_1 + 8));
      recovered_2000bb0(param_1);
      return extraout_RAX;
    }
    uVar2 = *param_1 - 1;
    in_RAX = (ulonglong)uVar2;
    *param_1 = uVar2;
  }
  return in_RAX;
}
