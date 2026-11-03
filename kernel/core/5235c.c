#include "functions.h"
#undef DAT_00057364
#define DAT_00057364 (*(uint8_t *)(0x57364U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x5235c
 */

undefined4 recovered_5235c(int *param_1,uint *param_2,uint *param_3)

{
  unsigned char frame[64] = {0};

  int extraout_EAX = 0;
  undefined1 *puVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined1 *puVar5;
  float10 fVar6;
  float10 fVar7;

  if (param_3 == (uint *)0x0 || (param_2 == (uint *)0x0 || param_1 == (int *)0x0)) {
LAB_00052413:
    uVar3 = 0;
  }
  else {
    iVar2 = *param_1;
    if (iVar2 - 1U < 2) {
LAB_00052397:
      if ((5 < *param_2) || ((0x26U >> (*param_2 & 0x1f) & 1) == 0)) {
        if (iVar2 != 3) goto LAB_00052413;
        goto LAB_000523d9;
      }
      fVar6 = recovered_41c28(param_1);
      fVar7 = recovered_41c28((int *)param_2);
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
        if (iVar2 != 5) goto LAB_00052413;
        goto LAB_00052397;
      }
LAB_000523d9:
      if (*param_2 != 3) goto LAB_00052413;
      puVar1 = (undefined1 *)param_1[3];
      if (puVar1 == (undefined1 *)0x0) {
        puVar1 = &DAT_00057364;
      }
      puVar5 = (undefined1 *)param_2[3];
      if (puVar5 == (undefined1 *)0x0) {
        puVar5 = &DAT_00057364;
      }
      iVar2 = recovered_214f9((int)puVar1,(int)puVar5);
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
