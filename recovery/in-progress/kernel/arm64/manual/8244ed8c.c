/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_4044e204 (*(uint8_t *)(0x82473985U))
#define piStack_28 (*(int * *)(frame + 72))
#define piStack_30 (*(int * *)(frame + 64))
#define piStack_38 (*(int * *)(frame + 56))
#define uStack_40 (*(undefined8 *)(frame + 48))
#define uStack_48 (*(undefined8 *)(frame + 40))
#define uStack_50 (*(undefined8 *)(frame + 32))
#define uStack_54 (*(undefined4 *)(frame + 28))
#define uStack_58 (*(undefined4 *)(frame + 24))
#define uStack_60 (*(undefined8 *)(frame + 16))
undefined8 recovered_8244ed8c(undefined8 *param_1,undefined8 *param_2)

{
  unsigned char frame[144] __attribute__((aligned(16))) = {0};

  undefined1 *puVar1;
  bool bVar2;
  ulong uVar3;
  int *piVar4;

  if (param_1 == (undefined8 *)0x0) {
    return 0;
  }
  if (param_2 == (undefined8 *)0x0) {
    return 0;
  }
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_40 = 0;
  piStack_30 = (int *)0x0;
  piStack_38 = (int *)0x0;
  piStack_28 = (int *)0x0;
  uStack_60 = *param_2;
  uStack_58 = *(undefined4 *)(param_2 + 1);
  switch((uintptr_t)((int)uStack_60)) {
  case 3:
    puVar1 = &DAT_4044e204;
    if ((undefined1 *)param_2[2] != (undefined1 *)0x0) {
      puVar1 = (undefined1 *)param_2[2];
    }
    bVar2 = recovered_8244ee88((undefined4 *)&uStack_60,puVar1);
    if (!bVar2) {
      return 0;
    }
    break;
  case 4:
    uVar3 = recovered_82462eb4((undefined4 *)&uStack_60,param_2[3],param_2[4]);
    if ((uVar3 & 1) == 0) {
      return 0;
    }
    break;
  case 7:
    piVar4 = (int *)param_2[5];
    piStack_38 = piVar4;
    if (piVar4 == (int *)0x0) break;
    goto LAB_40431258;
  case 8:
    piVar4 = (int *)param_2[6];
    piStack_30 = piVar4;
    goto joined_r0x4043128c;
  case 9:
    piVar4 = (int *)param_2[7];
    piStack_28 = piVar4;
joined_r0x4043128c:
    if (piVar4 != (int *)0x0) {
LAB_40431258:
      *piVar4 = *piVar4 + 1;
    }
  }
  recovered_8243166c(param_1);
  param_1[1] = CONCAT44(uStack_54,uStack_58);
  *param_1 = uStack_60;
  param_1[3] = uStack_48;
  param_1[2] = uStack_50;
  param_1[5] = piStack_38;
  param_1[4] = uStack_40;
  param_1[7] = piStack_28;
  param_1[6] = piStack_30;
  return 1;
}
