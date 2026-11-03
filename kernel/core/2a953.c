#include "functions.h"
#define local_20 (*(int *)(frame + 16))
#define local_1c (*(uint *)(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2a953
 */

bool recovered_2a953(int param_1,uint param_2,int param_3,uint param_4,int param_5,uint param_6,
               uint param_7,uint param_8,undefined4 *param_9,int *param_10)

{
  unsigned char frame[80];

  void *pvVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;

  if (param_10 != (int *)0x0 && param_9 != (undefined4 *)0x0) {
    *param_9 = 0;
    *param_10 = 0;
    if (param_8 == 0) {
      return param_7 == 0;
    }
    pvVar1 = recovered_20df4(param_8);
    if (pvVar1 == (void *)0x0) {
      return false;
    }
    local_1c = param_7;
    local_20 = 0;
    uVar3 = 0;
    do {
      iVar2 = (local_1c - 2) * param_4 + param_3;
      do {
        uVar4 = param_8 - uVar3;
        if (param_8 < uVar3 || uVar4 == 0) {
          *param_9 = pvVar1;
          *param_10 = local_20;
          return true;
        }
        if (param_6 <= local_1c || local_1c < 2) goto LAB_0002aa44;
        if (param_4 <= uVar4) {
          uVar4 = param_4;
        }
        if (param_2 < iVar2 + uVar4) goto LAB_0002aa44;
        local_20 = local_20 + 1;
        recovered_20f42((int)pvVar1 + uVar3,iVar2 + param_1,uVar4);
        uVar3 = uVar3 + uVar4;
      } while (param_8 <= uVar3);
      local_1c = *(uint *)(param_5 + local_1c * 4);
    } while (1 < local_1c + 1);
LAB_0002aa44:
    recovered_20dfd((int)pvVar1);
  }
  return false;
}
