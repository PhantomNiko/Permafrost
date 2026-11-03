#include "functions.h"
#define local_44 (*(undefined4 *)(frame + 36))
#define local_40 (*(undefined4 *)(frame + 40))
#define local_3c (*(undefined4 *)(frame + 44))
#define local_38 (*(uint (*)[8])(frame + 48))
#define local_18 (*(uint * *)(frame + 80))
#define local_11 (*(char *)(frame + 87))
#define local_58 (*(undefined4 *)(frame + 16))
#define local_54 (*(undefined4 *)(frame + 20))
#define local_50 (*(undefined4 *)(frame + 24))
#define local_4c (*(undefined4 *)(frame + 28))
#define local_48 (*(undefined4 *)(frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x27a2f
 */

undefined4 recovered_27a2f(undefined4 *param_1,int *param_2)

{
  unsigned char frame[136];

  char *pcVar1;
  uint *puVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *unaff_EBX = 0;
  
  cVar3 = recovered_27b50(param_1,param_2);
  if (cVar3 == '\0') {
LAB_00027b44:
    uVar5 = 0;
  }
  else {
    local_18 = (uint *)param_2;
    while( true ) {
      uVar5 = CONCAT31((int3)((uint)unaff_EBX >> 8),1);
      if (*(uint *)param_1[1] <= (uint)param_1[2]) break;
      pcVar1 = *(char **)(((uint *)param_1[1])[2] + param_1[2] * 4);
      iVar4 = recovered_20cea((int)pcVar1,0x2ce81);
      if (((iVar4 != 0) && (iVar4 = recovered_20cea((int)pcVar1,0x2ce83), iVar4 != 0)) &&
         (iVar4 = recovered_20cea((int)pcVar1,0x2ce85), iVar4 != 0)) {
        return uVar5;
      }
      param_1[2] = param_1[2] + 1;
      local_38[0] = 0;
      local_38[1] = 0;
      local_38[2] = 0;
      local_38[3] = 0;
      local_38[4] = 0;
      local_38[5] = 0;
      local_38[6] = 0;
      local_38[7] = 0;
      local_58 = 0;
      local_54 = 0;
      local_50 = 0;
      local_4c = 0;
      local_48 = 0;
      local_44 = 0;
      local_40 = 0;
      local_3c = 0;
      cVar3 = recovered_27b50(param_1,(int *)local_38);
      puVar2 = local_18;
      if (cVar3 == '\0') {
        recovered_24daf(local_18);
        goto LAB_00027b44;
      }
      uVar5 = recovered_2729c((int *)*param_1,pcVar1,local_18,local_38,&local_58);
      local_11 = (char)uVar5;
      recovered_24daf(puVar2);
      recovered_24daf(local_38);
      if (local_11 == '\0') goto LAB_00027b44;
      recovered_278d3(puVar2,&local_58);
      unaff_EBX = param_1;
    }
  }
  return uVar5;
}

