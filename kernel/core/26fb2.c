#include "functions.h"
#define local_24 (*(uint *)(frame + 16))
#define local_20 (*(uint *)(frame + 20))
#define local_1c (*(int *)(frame + 24))
#define local_18 (*(uint *)(frame + 28))
#define local_14 (*(uint *)(frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x26fb2
 */

uint recovered_26fb2(uint param_1,int param_2,uint *param_3)

{
  unsigned char frame[84] = {0};

  ushort uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;

  if (*(char *)(param_2 + 0x50) == '\x01') {
    local_18 = *(uint *)(param_2 + 0x4c);
    uVar2 = 0;
    if (local_18 != 0) {
      local_1c = 0;
      uVar4 = 0;
      local_14 = param_1;
      for (local_20 = 1; uVar3 = uVar2, local_20 <= local_18; local_20 = local_20 + 1) {
        local_24 = 0;
        uVar3 = recovered_26d70((int *)param_1,1,&local_24);
        if ((char)uVar3 == '\0') {
          local_14 = 0;
          break;
        }
        uVar4 = uVar4 | local_24;
        local_14 = *(uint *)(param_2 + local_20 * 4);
        uVar3 = local_14 + uVar2;
        if (uVar4 < uVar3) {
          uVar2 = (uVar4 - uVar2) + local_1c;
          if (uVar2 < *(uint *)(param_2 + 0x44)) {
            uVar1 = *(ushort *)(*(int *)(param_2 + 0x40) + uVar2 * 2);
            *param_3 = (uint)uVar1;
            uVar3 = CONCAT31((uint3)(byte)(uVar1 >> 8),1);
            local_14 = uVar3;
          }
          else {
            local_14 = 0;
          }
          break;
        }
        local_1c = local_1c + local_14;
        uVar2 = uVar3 * 2;
        uVar4 = uVar4 * 2;
        local_18 = *(uint *)(param_2 + 0x4c);
      }
      uVar2 = CONCAT31((int3)(uVar3 >> 8),local_20 <= local_18 & (byte)local_14);
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
