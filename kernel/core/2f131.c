#include "functions.h"
#define local_18 (*(uint * *)(frame + 52))
#define local_14 (*(uint * *)(frame + 56))
#define local_3c (*(uint (*)[9])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2f131
 */

undefined4 recovered_2f131(uint *param_1,uint *param_2)

{
  unsigned char frame[108];

  uint *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 unaff_EBX = 0;
  uint uVar5;
  
  local_18 = param_1;
  local_14 = param_2;
  uVar2 = recovered_2f20b(param_1,param_2);
  if ((char)uVar2 == '\0') {
LAB_0002f1ff:
    uVar2 = 0;
  }
  else {
    while( true ) {
      uVar5 = local_18[2];
      uVar2 = CONCAT31((int3)((uint)unaff_EBX >> 8),1);
      if (*(uint *)local_18[1] <= uVar5) break;
      iVar4 = *(int *)(((uint *)local_18[1])[2] + uVar5 * 4);
      iVar3 = recovered_29600(iVar4,0x403a5);
      if ((char)iVar3 == '\0') {
        iVar4 = recovered_2100f(iVar4,0x403a9);
        if (iVar4 != 0) {
          return uVar2;
        }
        uVar5 = local_18[2];
      }
      unaff_EBX = recovered_2de6b((int *)local_14);
      local_18[2] = uVar5 + 1;
      local_3c[0] = 0;
      local_3c[1] = 0;
      local_3c[2] = 0;
      local_3c[3] = 0;
      local_3c[4] = 0;
      local_3c[5] = 0;
      local_3c[6] = 0;
      local_3c[7] = 0;
      local_3c[8] = 0;
      uVar2 = recovered_2f20b(local_18,local_3c);
      puVar1 = local_14;
      if ((char)uVar2 == '\0') {
        recovered_28761(local_14);
        goto LAB_0002f1ff;
      }
      if ((char)unaff_EBX != '\0') {
        recovered_28761(local_14);
        recovered_2d349(puVar1,local_3c);
      }
      recovered_28761(local_3c);
    }
  }
  return uVar2;
}

