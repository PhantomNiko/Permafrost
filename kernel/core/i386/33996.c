#include "functions.h"
#undef DAT_0004759d
#define DAT_0004759d (*(uint8_t *)(0x4759dU))
#define local_5c (*(uint (*)[18])(frame + 16))
#define local_11 (*(char *)(frame + 91))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x33996
 */

undefined4 recovered_33996(uint *param_1,uint *param_2)

{
  unsigned char frame[140];

  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 unaff_EBX = 0;
  undefined4 uVar4;

  cVar1 = recovered_33a87(param_1,param_2);
  if (cVar1 != '\0') {
    uVar4 = CONCAT31((int3)((uint)unaff_EBX >> 8),1);
    if (*(uint *)param_1[1] <= param_1[2]) {
      return uVar4;
    }
    iVar2 = recovered_21415(*(int *)(((uint *)param_1[1])[2] + param_1[2] * 4),0x4759d);
    if (iVar2 != 0) {
      return uVar4;
    }
    local_5c[0] = 0;
    local_5c[1] = 0;
    local_5c[2] = 0;
    local_5c[3] = 0;
    local_5c[4] = 0;
    local_5c[5] = 0;
    local_5c[6] = 0;
    local_5c[7] = 0;
    local_5c[8] = 0;
    local_5c[9] = 0;
    local_5c[10] = 0;
    local_5c[0xb] = 0;
    local_5c[0xc] = 0;
    local_5c[0xd] = 0;
    local_5c[0xe] = 0;
    local_5c[0xf] = 0;
    local_5c[0x10] = 0;
    local_5c[0x11] = 0;
    param_1[2] = param_1[2] + 1;
    uVar3 = recovered_33996(param_1,local_5c);
    if ((char)uVar3 == '\0') {
      recovered_2603e(param_2);
    }
    else {
      uVar3 = recovered_330ff((float)*param_1,&DAT_0004759d,param_2,local_5c,(int *)(local_5c + 9));
      local_11 = (char)uVar3;
      recovered_2603e(param_2);
      recovered_2603e(local_5c);
      if (local_11 != '\0') {
        recovered_30fdb(param_2,local_5c + 9);
        return uVar4;
      }
    }
  }
  return 0;
}
