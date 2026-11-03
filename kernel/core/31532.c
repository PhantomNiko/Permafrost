#include "functions.h"
#undef str_0004063e
#define str_0004063e (*(char (*)[1])(0x4063eU))
#define local_58 (*(char (*)[64])(frame + 16))
#define local_18 (*(uint *)(frame + 80))
#define local_14 (*(int *)(frame + 84))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x31532
 */

undefined4 recovered_31532(int *param_1,int *param_2,undefined4 *param_3)

{
  unsigned char frame[136];

  bool bVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  local_14 = 0;
  if (param_3 == (undefined4 *)0x0 || (param_2 == (int *)0x0 || param_1 == (int *)0x0))
  goto LAB_00031773;
  iVar4 = *param_1;
  if (iVar4 == 3) {
    if (*param_2 == 1) {
      uVar5 = param_1[3];
      if (uVar5 == 0) goto LAB_00031773;
      local_18 = param_2[1];
      if ((0 < (int)local_18) && (uVar5 = recovered_20ff4(uVar5), local_18 <= uVar5)) {
        iVar4 = recovered_2892b(param_3,(char *)(param_1[3] + param_2[1] + -1),1);
        return iVar4;
      }
LAB_000317b1:
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
      if ((*param_2 != 3) || (param_2[3] == 0)) goto LAB_00031773;
      recovered_219e1(local_58,0x40,str_0004063e,param_2[3]);
      uVar5 = recovered_32281(param_3,(int)local_58,(int)param_1);
      if ((char)uVar5 == '\0') goto LAB_000317b1;
    }
LAB_000317d4:
    uVar2 = CONCAT31((int3)(uVar5 >> 8),1);
  }
  else {
    if (iVar4 == 8) {
      if ((param_1[7] != 0) && (bVar1 = recovered_31cc9(param_2,&local_14), bVar1)) {
        if (((*param_1 == 8) &&
            ((param_1[7] != 0 &&
             (piVar3 = (int *)recovered_32307(param_1[7],0x4062c), piVar3 != (int *)0x0)))) &&
           ((*piVar3 == 6 && (((piVar3[1] != 0 && (*param_2 == 3)) && (param_2[3] != 0)))))) {
          iVar4 = recovered_2100f(param_2[3],0x3fb94);
          if (iVar4 == 0) {
            iVar4 = recovered_32307(param_1[7],0x4062c);
            iVar4 = recovered_32281(param_3,0x3fcf3,iVar4);
            if ((char)iVar4 == '\0') goto LAB_00031657;
LAB_000316cd:
            uVar5 = recovered_20dfd(local_14);
            goto LAB_000317d4;
          }
LAB_00031657:
          iVar4 = recovered_2100f(param_2[3],0x3fb99);
          if (iVar4 == 0) {
            iVar4 = recovered_32307(param_1[7],0x4062c);
            iVar4 = recovered_32281(param_3,0x3fd02,iVar4);
            if ((char)iVar4 != '\0') goto LAB_000316cd;
          }
          iVar4 = recovered_2100f(param_2[3],0x40638);
          if (iVar4 == 0) {
            iVar4 = recovered_32307(param_1[7],0x4062c);
            iVar4 = recovered_32281(param_3,0x3fd12,iVar4);
            if ((char)iVar4 != '\0') goto LAB_000316cd;
          }
        }
        uVar6 = recovered_297af(param_1[7],local_14);
        uVar5 = recovered_20dfd(local_14);
        if (-1 < (int)uVar6) {
          uVar2 = recovered_289c3(param_3,(undefined4 *)
                                          (*(int *)(param_1[7] + 0xc) + uVar6 * 0x28 + 4));
          return uVar2;
        }
        goto LAB_000317b1;
      }
      recovered_20dfd(local_14);
    }
    else if (iVar4 == 7) {
      uVar5 = 0;
      if ((((*param_2 == 1) && (uVar5 = param_1[6], uVar5 != 0)) &&
          (uVar6 = param_2[1], 0 < (int)uVar6)) && (uVar6 <= *(uint *)(uVar5 + 8))) {
        uVar2 = recovered_289c3(param_3,(undefined4 *)
                                        (*(int *)(uVar5 + 0x10) + uVar6 * 0x24 + -0x24));
        return uVar2;
      }
      goto LAB_000317b1;
    }
LAB_00031773:
    uVar2 = 0;
  }
  return uVar2;
}

