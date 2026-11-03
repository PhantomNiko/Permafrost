#include "functions.h"
#define local_18 (*(uint * *)(frame + 80))
#define local_58 (*(uint (*)[16])(frame + 16))
#define local_14 (*(undefined4 *)(frame + 84))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2715f
 */

undefined4 recovered_2715f(undefined4 *param_1,uint *param_2)

{
  unsigned char frame[136];

  char *pcVar1;
  uint *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 extraout_EDX = 0;
  undefined4 extraout_EDX_00 = 0;
  
  uVar3 = recovered_27923(param_1,(int *)param_2);
  if ((char)uVar3 == '\0') {
LAB_0002728a:
    local_14 = 0;
  }
  else {
    uVar3 = extraout_EDX;
    local_18 = param_2;
    while( true ) {
      local_14 = CONCAT31((int3)((uint)uVar3 >> 8),1);
      if (*(uint *)param_1[1] <= (uint)param_1[2]) break;
      pcVar1 = *(char **)(((uint *)param_1[1])[2] + param_1[2] * 4);
      iVar4 = recovered_20cea((int)pcVar1,0x2ce73);
      if ((((iVar4 != 0) && (iVar4 = recovered_20cea((int)pcVar1,0x2ce75), iVar4 != 0)) &&
          (iVar4 = recovered_20cea((int)pcVar1,0x2ce77), iVar4 != 0)) &&
         (iVar4 = recovered_20cea((int)pcVar1,0x2ce7a), iVar4 != 0)) {
        return local_14;
      }
      param_1[2] = param_1[2] + 1;
      local_58[0] = 0;
      local_58[1] = 0;
      local_58[2] = 0;
      local_58[3] = 0;
      local_58[4] = 0;
      local_58[5] = 0;
      local_58[6] = 0;
      local_58[7] = 0;
      local_58[8] = 0;
      local_58[9] = 0;
      local_58[10] = 0;
      local_58[0xb] = 0;
      local_58[0xc] = 0;
      local_58[0xd] = 0;
      local_58[0xe] = 0;
      local_58[0xf] = 0;
      uVar3 = recovered_27923(param_1,(int *)local_58);
      puVar2 = local_18;
      if ((char)uVar3 == '\0') {
        recovered_24daf(local_18);
        goto LAB_0002728a;
      }
      uVar3 = recovered_2729c((int *)*param_1,pcVar1,local_18,local_58,local_58 + 8);
      local_14 = CONCAT31(PF_PART3(local_14, 1),(char)uVar3);
      recovered_24daf(puVar2);
      recovered_24daf(local_58);
      if ((char)local_14 == '\0') goto LAB_0002728a;
      recovered_278d3(puVar2,local_58 + 8);
      uVar3 = extraout_EDX_00;
    }
  }
  return local_14;
}

