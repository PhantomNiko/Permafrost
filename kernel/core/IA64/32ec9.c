#include "functions.h"
#define local_60 (*(int (*)[18])(frame + 16))
#define local_18 (*(uint * *)(frame + 88))
#define local_11 (*(char *)(frame + 95))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x32ec9
 */

undefined4 recovered_32ec9(uint *param_1,uint *param_2)

{
  unsigned char frame[144];

  char *pcVar1;
  uint *puVar2;
  undefined4 uVar3;
  int iVar4;
  uint *unaff_EBX = 0;

  uVar3 = recovered_32ff2(param_1,param_2);
  if ((char)uVar3 == '\0') {
LAB_00032fe6:
    uVar3 = 0;
  }
  else {
    local_18 = param_2;
    while( true ) {
      uVar3 = CONCAT31((int3)((uint)unaff_EBX >> 8),1);
      if (*(uint *)param_1[1] <= param_1[2]) break;
      pcVar1 = *(char **)(((uint *)param_1[1])[2] + param_1[2] * 4);
      iVar4 = recovered_21415((int)pcVar1,0x475d3);
      if (((iVar4 != 0) && (iVar4 = recovered_21415((int)pcVar1,0x475d6), iVar4 != 0)) &&
         (iVar4 = recovered_21415((int)pcVar1,0x475d9), iVar4 != 0)) {
        return uVar3;
      }
      param_1[2] = param_1[2] + 1;
      local_60[9] = 0;
      local_60[10] = 0;
      local_60[0xb] = 0;
      local_60[0xc] = 0;
      local_60[0xd] = 0;
      local_60[0xe] = 0;
      local_60[0xf] = 0;
      local_60[0x10] = 0;
      local_60[0x11] = 0;
      local_60[0] = 0;
      local_60[1] = 0;
      local_60[2] = 0;
      local_60[3] = 0;
      local_60[4] = 0;
      local_60[5] = 0;
      local_60[6] = 0;
      local_60[7] = 0;
      local_60[8] = 0;
      uVar3 = recovered_32ff2(param_1,(uint *)(local_60 + 9));
      puVar2 = local_18;
      if ((char)uVar3 == '\0') {
        recovered_26052(local_18);
        goto LAB_00032fe6;
      }
      uVar3 = recovered_33137((float)*param_1,pcVar1,local_18,(uint *)(local_60 + 9),local_60);
      local_11 = (char)uVar3;
      recovered_26052(puVar2);
      recovered_26052(local_60 + 9);
      if (local_11 == '\0') goto LAB_00032fe6;
      recovered_31013(puVar2,local_60);
      unaff_EBX = param_1;
    }
  }
  return uVar3;
}
