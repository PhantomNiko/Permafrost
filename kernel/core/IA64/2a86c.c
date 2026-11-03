#include "functions.h"
#undef DAT_0004ce10
#define DAT_0004ce10 (*(uint32_t *)(0x4ce10U))
#undef DAT_0004ce14
#define DAT_0004ce14 (*(uint *)(0x4ce14U))
#undef DAT_0004ce20
#define DAT_0004ce20 (*(int *)(0x4ce20U))
#undef DAT_0004ce24
#define DAT_0004ce24 (*(uint *)(0x4ce24U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2a86c
 */

uint recovered_2a86c(uint param_1)

{
  unsigned char frame[64];

  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;

  uVar2 = DAT_0004ce24;
  iVar1 = DAT_0004ce20;
  if ((param_1 < DAT_0004ce14) &&
     (uVar3 = recovered_2a951(&DAT_0004ce10,DAT_0004ce14), (char)uVar3 != '\0')) {
    uVar4 = CONCAT31((int3)((uint)uVar3 >> 8),1);
    if ((DAT_0004ce20 == iVar1) && (DAT_0004ce24 == uVar2)) {
      uVar4 = recovered_2aa01(&DAT_0004ce10,DAT_0004ce20,uVar2,param_1);
    }
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}
