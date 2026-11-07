/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

void recovered_8246e2dc(uint *param_1,uint *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  if (param_2 != (uint *)0x0) {
    uVar1 = *param_2;
    param_1[1] = param_1[1] | param_2[1];
    if ((uVar1 >> 1 & 1) != 0) {
      *param_1 = *param_1 | 2;
      *(ulong *)(param_1 + 4) =
           CONCAT44((int)((ulong)*(undefined8 *)(param_1 + 4) >> 0x20) +
                    (int)((ulong)*(undefined8 *)(param_2 + 4) >> 0x20),
                    (int)*(undefined8 *)(param_1 + 4) + (int)*(undefined8 *)(param_2 + 4));
      uVar1 = *param_2;
    }
    if ((uVar1 & 1) != 0) {
      *param_1 = *param_1 | 1;
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
      *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
    }
  }
  return;
}
