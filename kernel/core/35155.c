#include "functions.h"
#define local_60 (*(uint (*)[18])(frame + 16))
#define local_18 (*(uint * *)(frame + 88))
#define local_14 (*(undefined4 *)(frame + 92))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x35155
 */

undefined4 recovered_35155(uint *param_1,uint *param_2)

{
  unsigned char frame[144];

  char *pcVar1;
  uint *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 extraout_EDX = 0;
  undefined4 extraout_EDX_00 = 0;

  uVar3 = recovered_3529a(param_1,param_2);
  if ((char)uVar3 == '\0') {
LAB_00035288:
    local_14 = 0;
  }
  else {
    uVar3 = extraout_EDX;
    local_18 = param_2;
    while( true ) {
      local_14 = CONCAT31((int3)((uint)uVar3 >> 8),1);
      if (*(uint *)param_1[1] <= param_1[2]) break;
      pcVar1 = *(char **)(((uint *)param_1[1])[2] + param_1[2] * 4);
      iVar4 = recovered_21415((int)pcVar1,0x4986f);
      if ((((iVar4 != 0) && (iVar4 = recovered_21415((int)pcVar1,0x49871), iVar4 != 0)) &&
          (iVar4 = recovered_21415((int)pcVar1,0x49873), iVar4 != 0)) &&
         (iVar4 = recovered_21415((int)pcVar1,0x49875), iVar4 != 0)) {
        return local_14;
      }
      param_1[2] = param_1[2] + 1;
      local_60[0] = 0;
      local_60[1] = 0;
      local_60[2] = 0;
      local_60[3] = 0;
      local_60[4] = 0;
      local_60[5] = 0;
      local_60[6] = 0;
      local_60[7] = 0;
      local_60[8] = 0;
      local_60[9] = 0;
      local_60[10] = 0;
      local_60[0xb] = 0;
      local_60[0xc] = 0;
      local_60[0xd] = 0;
      local_60[0xe] = 0;
      local_60[0xf] = 0;
      local_60[0x10] = 0;
      local_60[0x11] = 0;
      uVar3 = recovered_3529a(param_1,local_60);
      puVar2 = local_18;
      if ((char)uVar3 == '\0') {
        recovered_25fea(local_18);
        goto LAB_00035288;
      }
      uVar3 = recovered_34a03((float)*param_1,pcVar1,local_18,local_60,(int *)(local_60 + 9));
      local_14 = CONCAT31(PF_PART3(local_14, 1),(char)uVar3);
      recovered_25fea(puVar2);
      recovered_25fea(local_60);
      if ((char)local_14 == '\0') goto LAB_00035288;
      recovered_311be(puVar2,local_60 + 9);
      uVar3 = extraout_EDX_00;
    }
  }
  return local_14;
}
