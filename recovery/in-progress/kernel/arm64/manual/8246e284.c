/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

bool recovered_8246e284(uint param_1,uint param_2,undefined4 *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  uint uVar2;
  uint uVar3;

  if (param_1 != 0) {
    uVar1 = 0;
    uVar2 = 0;
    uVar3 = 0;
    *param_3 = 0;
    while (uVar1 != param_2) {
      uVar3 = uVar3 + param_1;
      while (param_2 <= uVar3) {
        if (uVar2 < param_1) {
          uVar2 = uVar2 + 1;
        }
        uVar3 = uVar3 - param_2;
      }
      uVar1 = uVar1 + 1;
      param_3[uVar1] = uVar2;
    }
    param_3[param_2] = param_1;
  }
  return param_1 != 0;
}
