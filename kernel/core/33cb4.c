#include "functions.h"
#undef str_00043abf
#define str_00043abf (*(char (*)[1])(0x43abfU))
#define local_58 (*(char (*)[64])(frame + 16))
#define local_18 (*(uint *)(frame + 80))
#define local_14 (*(int *)(frame + 84))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x33cb4
 */

undefined4 recovered_33cb4(int *param_1,int *param_2,uint *param_3)

{
  unsigned char frame[136];

  bool bVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;

  local_14 = 0;
  if (param_3 == (uint *)0x0 || (param_2 == (int *)0x0 || param_1 == (int *)0x0)) goto LAB_00033ef5;
  iVar4 = *param_1;
  if (iVar4 == 3) {
    if (*param_2 == 1) {
      uVar5 = param_1[3];
      if (uVar5 == 0) goto LAB_00033ef5;
      local_18 = param_2[1];
      if ((0 < (int)local_18) && (uVar5 = recovered_20ff4(uVar5), local_18 <= uVar5)) {
        iVar4 = recovered_2b08b(param_3,(char *)(param_1[3] + param_2[1] + -1),1);
        return iVar4;
      }
LAB_00033f33:
      *param_3 = 0;
      param_3[1] = 0;
      param_3[2] = 0;
      param_3[3] = 0;
      param_3[4] = 0;
      param_3[5] = 0;
      param_3[6] = 0;
      param_3[7] = 0;
      param_3[8] = 0;
    }
    else {
      if ((*param_2 != 3) || (param_2[3] == 0)) goto LAB_00033ef5;
      recovered_219e1(local_58,0x40,str_00043abf,param_2[3]);
      uVar5 = recovered_34a03(param_3,(int)local_58,(int)param_1);
      if ((char)uVar5 == '\0') goto LAB_00033f33;
    }
LAB_00033f56:
    uVar2 = CONCAT31((int3)(uVar5 >> 8),1);
  }
  else {
    if (iVar4 == 8) {
      if ((param_1[7] != 0) && (bVar1 = recovered_3444b(param_2,&local_14), bVar1)) {
        if (((*param_1 == 8) &&
            ((param_1[7] != 0 &&
             (piVar3 = (int *)recovered_34a89(param_1[7],0x43aad), piVar3 != (int *)0x0)))) &&
           ((*piVar3 == 6 && (((piVar3[1] != 0 && (*param_2 == 3)) && (param_2[3] != 0)))))) {
          iVar4 = recovered_2100f(param_2[3],0x42fbe);
          if (iVar4 == 0) {
            iVar4 = recovered_34a89(param_1[7],0x43aad);
            iVar4 = recovered_34a03(param_3,0x43122,iVar4);
            if ((char)iVar4 == '\0') goto LAB_00033dd9;
LAB_00033e4f:
            uVar5 = recovered_20dfd(local_14);
            goto LAB_00033f56;
          }
LAB_00033dd9:
          iVar4 = recovered_2100f(param_2[3],0x42fc3);
          if (iVar4 == 0) {
            iVar4 = recovered_34a89(param_1[7],0x43aad);
            iVar4 = recovered_34a03(param_3,0x43131,iVar4);
            if ((char)iVar4 != '\0') goto LAB_00033e4f;
          }
          iVar4 = recovered_2100f(param_2[3],0x43ab9);
          if (iVar4 == 0) {
            iVar4 = recovered_34a89(param_1[7],0x43aad);
            iVar4 = recovered_34a03(param_3,0x43141,iVar4);
            if ((char)iVar4 != '\0') goto LAB_00033e4f;
          }
        }
        uVar6 = recovered_2bf37(param_1[7],local_14);
        uVar5 = recovered_20dfd(local_14);
        if (-1 < (int)uVar6) {
          uVar2 = recovered_2b123(param_3,(undefined4 *)
                                          (*(int *)(param_1[7] + 0xc) + uVar6 * 0x28 + 4));
          return uVar2;
        }
        goto LAB_00033f33;
      }
      recovered_20dfd(local_14);
    }
    else if (iVar4 == 7) {
      uVar5 = 0;
      if ((((*param_2 == 1) && (uVar5 = param_1[6], uVar5 != 0)) &&
          (uVar6 = param_2[1], 0 < (int)uVar6)) && (uVar6 <= *(uint *)(uVar5 + 8))) {
        uVar2 = recovered_2b123(param_3,(undefined4 *)
                                        (*(int *)(uVar5 + 0x10) + uVar6 * 0x24 + -0x24));
        return uVar2;
      }
      goto LAB_00033f33;
    }
LAB_00033ef5:
    uVar2 = 0;
  }
  return uVar2;
}
