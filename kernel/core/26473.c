#include "functions.h"
#define local_58 (*(uint (*)[8])(frame + 16))
#define local_38 (*(uint (*)[8])(frame + 48))
#define local_18 (*(uint * *)(frame + 80))
#define local_14 (*(undefined4 * *)(frame + 84))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x26473
 */

undefined4 recovered_26473(undefined4 *param_1,uint *param_2)

{
  unsigned char frame[136];

  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint *unaff_EBX = 0;
  uint *puVar5;
  uint *puVar6;
  
  local_14 = param_1;
  uVar1 = recovered_26f21(param_1,param_2);
  if ((char)uVar1 == '\0') {
LAB_00026558:
    uVar1 = 0;
  }
  else {
    local_18 = param_2;
    while( true ) {
      uVar4 = local_14[2];
      uVar1 = CONCAT31((int3)((uint)unaff_EBX >> 8),1);
      if (*(uint *)local_14[1] <= uVar4) break;
      iVar3 = *(int *)(((uint *)local_14[1])[2] + uVar4 * 4);
      iVar2 = recovered_26458(iVar3,0x2ce5d);
      if ((char)iVar2 == '\0') {
        iVar3 = recovered_20cea(iVar3,0x2ce60);
        if (iVar3 != 0) {
          return uVar1;
        }
        uVar4 = local_14[2];
      }
      local_14[2] = uVar4 + 1;
      local_38[0] = 0;
      local_38[1] = 0;
      local_38[2] = 0;
      local_38[3] = 0;
      local_38[4] = 0;
      local_38[5] = 0;
      local_38[6] = 0;
      local_38[7] = 0;
      uVar1 = recovered_26f21(local_14,local_38);
      puVar6 = local_18;
      if ((char)uVar1 == '\0') {
        recovered_24daf(local_18);
        goto LAB_00026558;
      }
      uVar1 = recovered_26564((int *)local_18);
      uVar4 = 1;
      if ((char)uVar1 == '\0') {
        uVar4 = recovered_26564((int *)local_38);
      }
      recovered_24daf(puVar6);
      recovered_24daf(local_38);
      unaff_EBX = local_58;
      recovered_27014(unaff_EBX,uVar4 & 0xff);
      puVar5 = unaff_EBX;
      for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
    }
  }
  return uVar1;
}

