#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x20cf8
 */

undefined8 FUN_00020cf8(uint param_1,uint param_2,uint param_3,uint param_4)

{
  unsigned char frame[64];

  uint uVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined8 uVar4;

  if (param_3 == 0 && param_4 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = (int)param_4 >> 0x1f;
    uVar3 = (int)param_2 >> 0x1f;
    uVar4 = recovered_20bdd((param_1 ^ uVar3) - uVar3,
                            ((param_2 ^ uVar3) - uVar3) - (uint)((param_1 ^ uVar3) < uVar3),
                            (param_3 ^ uVar1) - uVar1,
                            ((param_4 ^ uVar1) - uVar1) - (uint)((param_3 ^ uVar1) < uVar1),
                            (uint *)0x0);
    uVar2 = CONCAT44(-(uint)((int)uVar4 != 0) - (int)((ulonglong)uVar4 >> 0x20),-(int)uVar4);
    if (param_2 >> 0x1f == -uVar1) {
      uVar2 = uVar4;
    }
  }
  return uVar2;
}
