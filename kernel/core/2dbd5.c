#include "functions.h"
#undef DAT_00040424
#define DAT_00040424 (*(uint8_t *)(0x40424U))
#define local_64 (*(char (*)[32])(frame + 16))
#define local_44 (*(int (*)[9])(frame + 48))
#define local_20 (*(int * *)(frame + 84))
#define local_1c (*(int * *)(frame + 88))
#define local_18 (*(int *)(frame + 92))
#define local_14 (*(int *)(frame + 96))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2dbd5
 */

int recovered_2dbd5(int *param_1,int *param_2,byte param_3)

{
  unsigned char frame[148];

  int *piVar1;
  bool bVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;

  local_18 = 0;
  if (param_2 == (int *)0x0 || param_1 == (int *)0x0) {
    return 0;
  }
  if (*param_1 == 8) {
    iVar6 = 0;
    if ((param_1[7] != 0) && (bVar2 = recovered_31cc9(param_2,&local_18), bVar2)) {
      iVar6 = recovered_2967e(param_1[7],local_18,param_3);
    }
    recovered_20dfd(local_18);
    return iVar6;
  }
  if (*param_1 != 7) {
    return 0;
  }
  if (*param_2 == 1) {
    uVar5 = param_2[1];
    if (((int)uVar5 < 1 & param_3) == 0) {
      if ((int)uVar5 < 1) {
        return 0;
      }
      iVar6 = param_1[6];
      if (iVar6 == 0) {
        return 0;
      }
      if (*(uint *)(iVar6 + 8) < uVar5) {
        if (param_3 == 0) {
          return 0;
        }
        uVar4 = recovered_2ef40(iVar6,uVar5);
        if ((char)uVar4 == '\0') {
          return 0;
        }
        iVar6 = param_1[6];
        uVar5 = param_2[1];
      }
      return *(int *)(iVar6 + 0x10) + uVar5 * 0x24 + -0x24;
    }
    local_14 = param_1[6];
  }
  else {
    if (param_3 == 0) {
      return 0;
    }
    local_14 = param_1[6];
  }
  if (local_14 == 0) {
    return 0;
  }
  local_44[0] = 0;
  local_44[1] = 0;
  local_44[2] = 0;
  local_44[3] = 0;
  local_44[4] = 0;
  local_44[5] = 0;
  local_44[6] = 0;
  local_44[7] = 0;
  local_44[8] = 0;
  local_20 = param_1;
  bVar2 = recovered_28c07(local_44);
  if (bVar2) {
    iVar7 = 1;
    iVar6 = 0;
    local_1c = param_2;
    while( true ) {
      piVar1 = local_20;
      if (*(uint *)(local_14 + 8) <= iVar7 - 1U) {
        recovered_28761(local_20);
        recovered_28761(piVar1);
        piVar8 = local_44;
        piVar9 = piVar1;
        for (iVar6 = 9; iVar6 != 0; iVar6 = iVar6 + -1) {
          *piVar9 = *piVar8;
          piVar8 = piVar8 + 1;
          piVar9 = piVar9 + 1;
        }
        local_44[0] = 0;
        local_44[1] = 0;
        local_44[2] = 0;
        local_44[3] = 0;
        local_44[4] = 0;
        local_44[5] = 0;
        local_44[6] = 0;
        local_44[7] = 0;
        local_44[8] = 0;
        iVar6 = recovered_2dbd5(piVar1,local_1c,1);
        return iVar6;
      }
      recovered_219e1(local_64,0x20,&DAT_00040424,iVar7);
      puVar3 = (undefined4 *)recovered_2967e(local_44[7],(int)local_64,'\x01');
      if ((puVar3 == (undefined4 *)0x0) ||
         (uVar4 = recovered_289c3(puVar3,(undefined4 *)(*(int *)(local_14 + 0x10) + iVar6)),
         (char)uVar4 == '\0')) break;
      iVar7 = iVar7 + 1;
      iVar6 = iVar6 + 0x24;
    }
    recovered_28761(local_44);
    return 0;
  }
  return 0;
}
