/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

void recovered_209c600(undefined8 *param_1,undefined8 *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;

  if (param_2 != (undefined8 *)0x0 && param_1 != (undefined8 *)0x0) {
    recovered_205ec00(param_1);
    uVar1 = *param_2;
    uVar2 = param_2[1];
    uVar3 = param_2[2];
    uVar4 = param_2[3];
    uVar5 = param_2[4];
    uVar6 = param_2[5];
    uVar7 = param_2[7];
    param_1[6] = param_2[6];
    param_1[7] = uVar7;
    param_1[4] = uVar5;
    param_1[5] = uVar6;
    param_1[2] = uVar3;
    param_1[3] = uVar4;
    *param_1 = uVar1;
    param_1[1] = uVar2;
    *param_2 = 0;
    *(undefined4 *)(param_2 + 1) = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[4] = 0;
    param_2[5] = 0;
    param_2[6] = 0;
    param_2[7] = 0;
  }
  return;
}
