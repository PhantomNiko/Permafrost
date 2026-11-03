#include "functions.h"
#undef str_00049b10
#define str_00049b10 (*(char (*)[1])(0x49b10U))
#define local_58 (*(char (*)[64])(frame + 16))
#define local_18 (*(uint *)(frame + 80))
#define local_14 (*(int *)(frame + 84))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x36c3c
 */

int recovered_36c3c(int *param_1,int *param_2,uint *param_3)

{
  unsigned char frame[136];

  bool bVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;

  local_14 = 0;
  if (param_3 == (uint *)0x0 || (param_2 == (int *)0x0 || param_1 == (int *)0x0)) goto LAB_00036e7d;
  iVar2 = *param_1;
  if (iVar2 == 3) {
    if (*param_2 == 1) {
      uVar4 = param_1[3];
      if (uVar4 == 0) goto LAB_00036e7d;
      local_18 = param_2[1];
      if ((0 < (int)local_18) && (uVar4 = recovered_213fa(uVar4), local_18 <= uVar4)) {
        iVar2 = recovered_2c7bc(param_3,(char *)(param_1[3] + param_2[1] + -1),1);
        return iVar2;
      }
LAB_00036ebb:
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
      if ((*param_2 != 3) || (param_2[3] == 0)) goto LAB_00036e7d;
      recovered_21de7(local_58,0x40,str_00049b10,param_2[3]);
      uVar4 = recovered_38100(param_3,(int)local_58,(int)param_1);
      if ((char)uVar4 == '\0') goto LAB_00036ebb;
    }
LAB_00036ede:
    iVar2 = CONCAT31((int3)(uVar4 >> 8),1);
  }
  else {
    if (iVar2 == 8) {
      if ((param_1[7] != 0) && (bVar1 = recovered_37a39(param_2,&local_14), bVar1)) {
        if (((*param_1 == 8) &&
            ((param_1[7] != 0 &&
             (piVar3 = (int *)recovered_38186(param_1[7],0x49afe), piVar3 != (int *)0x0)))) &&
           ((*piVar3 == 6 && (((piVar3[1] != 0 && (*param_2 == 3)) && (param_2[3] != 0)))))) {
          iVar2 = recovered_21415(param_2[3],0x48fb1);
          if (iVar2 == 0) {
            iVar2 = recovered_38186(param_1[7],0x49afe);
            iVar2 = recovered_38100(param_3,0x49123,iVar2);
            if ((char)iVar2 == '\0') goto LAB_00036d61;
LAB_00036dd7:
            uVar4 = recovered_21203(local_14);
            goto LAB_00036ede;
          }
LAB_00036d61:
          iVar2 = recovered_21415(param_2[3],0x48fb6);
          if (iVar2 == 0) {
            iVar2 = recovered_38186(param_1[7],0x49afe);
            iVar2 = recovered_38100(param_3,0x49132,iVar2);
            if ((char)iVar2 != '\0') goto LAB_00036dd7;
          }
          iVar2 = recovered_21415(param_2[3],0x49b0a);
          if (iVar2 == 0) {
            iVar2 = recovered_38186(param_1[7],0x49afe);
            iVar2 = recovered_38100(param_3,0x49142,iVar2);
            if ((char)iVar2 != '\0') goto LAB_00036dd7;
          }
        }
        uVar5 = recovered_2c6c0(param_1[7],local_14);
        uVar4 = recovered_21203(local_14);
        if (-1 < (int)uVar5) {
          iVar2 = recovered_2c5b3(param_3,(uint *)(*(int *)(param_1[7] + 0xc) + uVar5 * 0x28 + 4));
          return iVar2;
        }
        goto LAB_00036ebb;
      }
      recovered_21203(local_14);
    }
    else if (iVar2 == 7) {
      uVar4 = 0;
      if ((((*param_2 == 1) && (uVar4 = param_1[6], uVar4 != 0)) &&
          (uVar5 = param_2[1], 0 < (int)uVar5)) && (uVar5 <= *(uint *)(uVar4 + 8))) {
        iVar2 = recovered_2c5b3(param_3,(uint *)(*(int *)(uVar4 + 0x10) + uVar5 * 0x24 + -0x24));
        return iVar2;
      }
      goto LAB_00036ebb;
    }
LAB_00036e7d:
    iVar2 = 0;
  }
  return iVar2;
}
