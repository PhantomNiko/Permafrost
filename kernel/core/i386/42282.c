#include "functions.h"
#undef DAT_00046264
#define DAT_00046264 (*(uint8_t *)(0x46264U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x42282
 */

undefined4 recovered_42282(int *param_1,uint *param_2,uint *param_3)

{
  unsigned char frame[64];

  int extraout_EAX = 0;
  undefined1 *puVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined1 *puVar5;
  float10 fVar6;
  float10 fVar7;

  if (param_3 == (uint *)0x0 || (param_2 == (uint *)0x0 || param_1 == (int *)0x0)) {
LAB_00042339:
    uVar3 = 0;
  }
  else {
    iVar2 = *param_1;
    if (iVar2 - 1U < 2) {
LAB_000422bd:
      if ((5 < *param_2) || ((0x26U >> (*param_2 & 0x1f) & 1) == 0)) {
        if (iVar2 != 3) goto LAB_00042339;
        goto LAB_000422ff;
      }
      fVar6 = recovered_31da4(param_1);
      fVar7 = recovered_31da4((int *)param_2);
      iVar2 = extraout_EAX;
      if (fVar7 <= (float10)(float)fVar6) {
        uVar4 = (uint)(fVar7 < (float10)(float)fVar6);
      }
      else {
        uVar4 = 0xffffffff;
      }
    }
    else {
      if (iVar2 != 3) {
        if (iVar2 != 5) goto LAB_00042339;
        goto LAB_000422bd;
      }
LAB_000422ff:
      if (*param_2 != 3) goto LAB_00042339;
      puVar1 = (undefined1 *)param_1[3];
      if (puVar1 == (undefined1 *)0x0) {
        puVar1 = &DAT_00046264;
      }
      puVar5 = (undefined1 *)param_2[3];
      if (puVar5 == (undefined1 *)0x0) {
        puVar5 = &DAT_00046264;
      }
      iVar2 = recovered_21415((int)puVar1,(int)puVar5);
      uVar4 = (uint)(iVar2 != 0);
      if (iVar2 < 0) {
        uVar4 = 0xffffffff;
      }
    }
    *param_3 = uVar4;
    uVar3 = CONCAT31((int3)((uint)iVar2 >> 8),1);
  }
  return uVar3;
}
