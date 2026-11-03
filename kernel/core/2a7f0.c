#include "functions.h"
#undef DAT_0004ee10
#define DAT_0004ee10 (*(uint32_t *)(0x4ee10U))
#undef DAT_0004ee14
#define DAT_0004ee14 (*(uint *)(0x4ee14U))
#undef DAT_0004ee20
#define DAT_0004ee20 (*(int *)(0x4ee20U))
#undef DAT_0004ee24
#define DAT_0004ee24 (*(uint *)(0x4ee24U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2a7f0
 */

uint recovered_2a7f0(uint param_1)

{
  unsigned char frame[64];

  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;

  uVar2 = DAT_0004ee24;
  iVar1 = DAT_0004ee20;
  if ((param_1 < DAT_0004ee14) &&
     (uVar3 = recovered_2a8d5(&DAT_0004ee10,DAT_0004ee14), (char)uVar3 != '\0')) {
    uVar4 = CONCAT31((int3)((uint)uVar3 >> 8),1);
    if ((DAT_0004ee20 == iVar1) && (DAT_0004ee24 == uVar2)) {
      uVar4 = recovered_2a985(&DAT_0004ee10,DAT_0004ee20,uVar2,param_1);
    }
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}
