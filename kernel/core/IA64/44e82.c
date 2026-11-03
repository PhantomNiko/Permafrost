#include "functions.h"
#define local_18 (*(uint *)(frame + 1108))
#define local_14 (*(void * *)(frame + 1112))
#define local_45c (*(undefined1 (*)[12])(frame + 16))
#define local_450 (*(int *)(frame + 28))
#define local_44c (*(uint *)(frame + 32))
#define local_404 (*(undefined1 *)(frame + 104))
#define local_403 (*(undefined1 *)(frame + 105))
#define local_402 (*(undefined1 *)(frame + 106))
#define local_401 (*(undefined1 *)(frame + 107))
#define local_25c (*(undefined1 (*)[12])(frame + 528))
#define local_250 (*(int *)(frame + 540))
#define local_24c (*(uint *)(frame + 544))
#define local_204 (*(uint *)(frame + 616))
#define local_5c (*(int (*)[3])(frame + 1040))
#define local_50 (*(uint *)(frame + 1052))
#define local_4c (*(uint *)(frame + 1056))
#define local_48 (*(int *)(frame + 1060))
#define local_44 (*(int *)(frame + 1064))
#define local_40 (*(uint *)(frame + 1068))
#define local_3c (*(uint *)(frame + 1072))
#define auStack_ae (*(undefined1 (*)[4])(frame + 958))
#define local_38 (*(uint *)(frame + 1076))
#define local_24 (*(int *)(frame + 1096))
#define local_20 (*(int *)(frame + 1100))
#define acStack_aa (*(char (*)[78])(frame + 962))
#define local_1c (*(uint *)(frame + 1104))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x44e82
 */

undefined4 recovered_44e82(int param_1,uint param_2,uint param_3)

{
  unsigned char frame[1164];

  bool bVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined3 extraout_var = 0;
  int iVar4;
  undefined3 extraout_var_00 = 0;
  int iVar5;
  undefined1 *puVar6;
  uint uVar7;
  void *pvVar8;

  if (param_3 == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x14) < 1) {
    return 0;
  }
  local_18 = param_2;
  puVar2 = recovered_44c20(*(char *)(param_1 + 4));
  if ((puVar2 == (undefined4 *)0x0) ||
     (uVar3 = recovered_2d6e3((uint)*(byte *)(puVar2 + 1),puVar2[3],local_5c,0), (char)uVar3 == '\0'
     )) {
    return 0;
  }
  if (local_5c[0] != 2) {
    if (local_5c[0] != 1) {
      return 0;
    }
    if (*(int *)(param_1 + 0x14) - 5U < 0xfffffffc) {
      return 0;
    }
    bVar1 = recovered_2b3d8((uint)*(byte *)(param_1 + 4),0,(int)local_25c,0x200);
    if (!bVar1) {
      return 0;
    }
    iVar5 = *(int *)(param_1 + 0x14) * 0x10;
    if (acStack_aa[iVar5] == '\0') {
      return 0;
    }
    puVar6 = auStack_ae + iVar5;
    local_14 = (void *)CONCAT31(PF_PART3(local_14, 1),*puVar6);
    recovered_44dae((int)puVar6,acStack_aa[iVar5],local_18,param_3);
    *puVar6 = PF_PART1(local_14, 0);
    bVar1 = recovered_2b0f9(*(byte *)(param_1 + 4),0,(int)local_25c,0x200);
    return CONCAT31(extraout_var,bVar1);
  }
  iVar5 = param_3 + local_18;
  local_24 = (CARRY4(param_3,local_18) - 1) + (uint)(iVar5 != 0);
  if (local_50 < *(uint *)(param_1 + 0x14) || (int)*(uint *)(param_1 + 0x14) < 1) {
    return 0;
  }
  uVar7 = local_44 << 9;
  local_20 = local_50 * local_48;
  local_14 = recovered_211fa(uVar7);
  if (local_14 == (void *)0x0) {
    return 0;
  }
  local_1c = uVar7;
  bVar1 = recovered_2b3d8((uint)*(byte *)(param_1 + 4),local_4c,(int)local_14,uVar7);
  if (((bVar1) &&
      (bVar1 = recovered_2b3d8((uint)*(byte *)(param_1 + 4),local_3c,(int)local_25c,0x200), bVar1))
     && (bVar1 = recovered_2b3d8((uint)*(byte *)(param_1 + 4),local_38,(int)local_45c,0x200), bVar1)
     ) {
    pvVar8 = (void *)((int)local_14 + (*(int *)(param_1 + 0x14) + -1) * local_48);
    iVar4 = recovered_213cb((int)pvVar8,0x461c8,0x10);
    if (iVar4 != 0) {
      recovered_44e1e((undefined1 *)((int)pvVar8 + 0x20),local_18,0);
      recovered_44e1e((undefined1 *)((int)pvVar8 + 0x28),iVar5 + -1,(char)local_24);
      local_204 = recovered_44e47((int)local_14,local_20);
      local_404 = (undefined1)local_204;
      local_403 = (undefined1)(local_204 >> 8);
      local_402 = (undefined1)(local_204 >> 0x10);
      local_401 = (undefined1)(local_204 >> 0x18);
      local_24c = 0;
      local_44c = 0;
      local_24c = recovered_44e47((int)local_25c,local_250);
      local_44c = recovered_44e47((int)local_45c,local_450);
      uVar7 = local_1c;
      bVar1 = recovered_2b0f9(*(byte *)(param_1 + 4),local_4c,(int)local_14,local_1c);
      if (((bVar1) &&
          (bVar1 = recovered_2b0f9(*(byte *)(param_1 + 4),local_40,(int)local_14,uVar7), bVar1)) &&
         (bVar1 = recovered_2b0f9(*(byte *)(param_1 + 4),local_3c,(int)local_25c,0x200), bVar1)) {
        bVar1 = recovered_2b0f9(*(byte *)(param_1 + 4),local_38,(int)local_45c,0x200);
        uVar3 = CONCAT31(extraout_var_00,bVar1);
        goto LAB_00045158;
      }
    }
  }
  uVar3 = 0;
LAB_00045158:
  recovered_21203((int)local_14);
  return uVar3;
}
