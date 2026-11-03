#include "functions.h"
#define local_ac (*(undefined4 (*)[17])(frame + 16))
#define local_68 (*(undefined4 *)(frame + 84))
#define local_5c (*(undefined1 *)(frame + 96))
#define local_58 (*(uint (*)[16])(frame + 100))
#define local_18 (*(int *)(frame + 164))
#define local_14 (*(int * *)(frame + 168))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x27072
 */

undefined4 recovered_27072(int *param_1,int *param_2,undefined1 param_3)

{
  unsigned char frame[220] = {0};

  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  uint *puVar8;

  iVar6 = 0;
  puVar7 = local_ac;
  local_14 = param_1;
  for (iVar4 = 0x14; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  local_5c = 0;
  recovered_27298(param_2,local_ac);
  local_68 = 0;
  recovered_23194();
  iVar4 = *local_14;
  local_18 = local_14[1];
  for (; local_18 * 4 != iVar6; iVar6 = iVar6 + 4) {
    uVar5 = *(uint *)(iVar4 + iVar6);
    if (0xf < uVar5) goto LAB_00027106;
    param_2[uVar5] = param_2[uVar5] + 1;
    if (uVar5 < (uint)param_2[0x13]) {
      uVar5 = param_2[0x13];
    }
    param_2[0x13] = uVar5;
  }
  uVar2 = CONCAT31((int3)((uint)local_18 >> 8),param_3);
  if (*param_2 == local_18) {
LAB_0002717f:
    *(char *)(param_2 + 0x14) = (char)uVar2;
  }
  else {
    iVar6 = 1;
    iVar4 = 1;
    do {
      if (iVar4 == 0x10) {
        uVar5 = 0;
        puVar8 = local_58;
        for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar8 = 0;
          puVar8 = puVar8 + 1;
        }
        for (iVar4 = 1; iVar4 != 0x10; iVar4 = iVar4 + 1) {
          local_58[iVar4] = uVar5;
          uVar5 = uVar5 + param_2[iVar4];
        }
        PF_PART2(local_ac[0], 0) = 0;
        recovered_272d8(param_2 + 0x10,uVar5,(undefined2 *)local_ac);
        local_18 = *local_14;
        iVar4 = local_14[1];
        piVar3 = (int *)param_2[0x10];
        local_14 = piVar3;
        for (iVar6 = 0; iVar4 != iVar6; iVar6 = iVar6 + 1) {
          iVar1 = *(int *)(local_18 + iVar6 * 4);
          piVar3 = (int *)local_18;
          if (iVar1 != 0) {
            uVar5 = local_58[iVar1];
            local_58[iVar1] = uVar5 + 1;
            *(short *)((int)local_14 + uVar5 * 2) = (short)iVar6;
            piVar3 = local_14;
          }
        }
        uVar2 = CONCAT31((int3)((uint)piVar3 >> 8),1);
        goto LAB_0002717f;
      }
      iVar6 = iVar6 * 2 - param_2[iVar4];
      iVar4 = iVar4 + 1;
    } while (-1 < iVar6);
LAB_00027106:
    uVar2 = 0;
  }
  return uVar2;
}
