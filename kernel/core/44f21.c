#include "functions.h"
#undef str_00058b7b
#define str_00058b7b (*(char (*)[1])(0x58b7bU))
#define local_58 (*(char (*)[64])(frame + 16))
#define local_18 (*(uint *)(frame + 80))
#define local_14 (*(int *)(frame + 84))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x44f21
 */

int recovered_44f21(int *param_1,int *param_2,uint *param_3)

{
  unsigned char frame[136] = {0};

  bool bVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;

  local_14 = 0;
  if (param_3 == (uint *)0x0 || (param_2 == (int *)0x0 || param_1 == (int *)0x0)) goto LAB_00045162;
  iVar2 = *param_1;
  if (iVar2 == 3) {
    if (*param_2 == 1) {
      uVar4 = param_1[3];
      if (uVar4 == 0) goto LAB_00045162;
      local_18 = param_2[1];
      if ((0 < (int)local_18) && (uVar4 = recovered_214de(uVar4), local_18 <= uVar4)) {
        iVar2 = recovered_3aab9(param_3,(char *)(param_1[3] + param_2[1] + -1),1);
        return iVar2;
      }
LAB_000451a0:
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
      if ((*param_2 != 3) || (param_2[3] == 0)) goto LAB_00045162;
      recovered_22362(local_58,0x40,str_00058b7b,param_2[3]);
      uVar4 = recovered_463e5(param_3,(int)local_58,(int)param_1);
      if ((char)uVar4 == '\0') goto LAB_000451a0;
    }
LAB_000451c3:
    iVar2 = CONCAT31((int3)(uVar4 >> 8),1);
  }
  else {
    if (iVar2 == 8) {
      if ((param_1[7] != 0) && (bVar1 = recovered_45d1e(param_2,&local_14), bVar1)) {
        if (((*param_1 == 8) &&
            ((param_1[7] != 0 &&
             (piVar3 = (int *)recovered_4646b(param_1[7],0x58b69), piVar3 != (int *)0x0)))) &&
           ((*piVar3 == 6 && (((piVar3[1] != 0 && (*param_2 == 3)) && (param_2[3] != 0)))))) {
          iVar2 = recovered_214f9(param_2[3],0x58022);
          if (iVar2 == 0) {
            iVar2 = recovered_4646b(param_1[7],0x58b69);
            iVar2 = recovered_463e5(param_3,0x5818e,iVar2);
            if ((char)iVar2 == '\0') goto LAB_00045046;
LAB_000450bc:
            uVar4 = recovered_21203(local_14);
            goto LAB_000451c3;
          }
LAB_00045046:
          iVar2 = recovered_214f9(param_2[3],0x58027);
          if (iVar2 == 0) {
            iVar2 = recovered_4646b(param_1[7],0x58b69);
            iVar2 = recovered_463e5(param_3,0x5819d,iVar2);
            if ((char)iVar2 != '\0') goto LAB_000450bc;
          }
          iVar2 = recovered_214f9(param_2[3],0x58b75);
          if (iVar2 == 0) {
            iVar2 = recovered_4646b(param_1[7],0x58b69);
            iVar2 = recovered_463e5(param_3,0x581ad,iVar2);
            if ((char)iVar2 != '\0') goto LAB_000450bc;
          }
        }
        uVar5 = recovered_3a9bd(param_1[7],local_14);
        uVar4 = recovered_21203(local_14);
        if (-1 < (int)uVar5) {
          iVar2 = recovered_3a8b0(param_3,(uint *)(*(int *)(param_1[7] + 0xc) + uVar5 * 0x28 + 4));
          return iVar2;
        }
        goto LAB_000451a0;
      }
      recovered_21203(local_14);
    }
    else if (iVar2 == 7) {
      uVar4 = 0;
      if ((((*param_2 == 1) && (uVar4 = param_1[6], uVar4 != 0)) &&
          (uVar5 = param_2[1], 0 < (int)uVar5)) && (uVar5 <= *(uint *)(uVar4 + 8))) {
        iVar2 = recovered_3a8b0(param_3,(uint *)(*(int *)(uVar4 + 0x10) + uVar5 * 0x24 + -0x24));
        return iVar2;
      }
      goto LAB_000451a0;
    }
LAB_00045162:
    iVar2 = 0;
  }
  return iVar2;
}
