#include "functions.h"
#define local_1c (*(uint *)(frame + 16))
#define local_18 (*(int *)(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x20d6c
 */

undefined8 FUN_00020d6c(uint param_1,int param_2,uint param_3,uint param_4)

{
  unsigned char frame[76];

  int iVar1;
  uint uVar2;
  uint uVar3;

  if (param_3 == 0 && param_4 == 0) {
    uVar2 = 0;
    iVar1 = 0;
  }
  else {
    uVar2 = param_2 >> 0x1f;
    uVar3 = (int)param_4 >> 0x1f;
    local_18 = 0;
    local_1c = 0;
    recovered_20bdd((param_1 ^ uVar2) - uVar2,
                    ((param_2 ^ uVar2) - uVar2) - (uint)((param_1 ^ uVar2) < uVar2),
                    (param_3 ^ uVar3) - uVar3,
                    ((param_4 ^ uVar3) - uVar3) - (uint)((param_3 ^ uVar3) < uVar3),&local_1c);
    uVar2 = -local_1c;
    iVar1 = -(uint)(local_1c != 0) - local_18;
    if (-1 < param_2) {
      uVar2 = local_1c;
      iVar1 = local_18;
    }
  }
  return CONCAT44(iVar1,uVar2);
}
