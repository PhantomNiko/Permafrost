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
 * Address: 0x2a851
 */

uint recovered_2a851(void)

{
  unsigned char frame[64];

  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 unaff_EBX = 0;
  uint uVar4;
  uint uVar5;

  iVar1 = DAT_0004ee20;
  if (DAT_0004ee14 == 0) {
    uVar4 = CONCAT31((int3)((uint)unaff_EBX >> 8),1);
    if (DAT_0004ee20 != 0) {
      for (uVar5 = 0; uVar5 < DAT_0004ee24; uVar5 = uVar5 + 1) {
        *(undefined4 *)(iVar1 + uVar5 * 4) = 0xffffffff;
      }
    }
  }
  else {
    uVar2 = recovered_2a8d5(&DAT_0004ee10,DAT_0004ee14);
    iVar1 = DAT_0004ee20;
    uVar4 = 0;
    if ((char)uVar2 != '\0') {
      for (; uVar4 < DAT_0004ee24; uVar4 = uVar4 + 1) {
        *(undefined4 *)(iVar1 + uVar4 * 4) = 0xffffffff;
      }
      uVar5 = 0;
      do {
        uVar4 = CONCAT31((int3)(uVar4 >> 8),DAT_0004ee14 <= uVar5);
        if (DAT_0004ee14 <= uVar5) {
          return uVar4;
        }
        uVar3 = recovered_2a985(&DAT_0004ee10,DAT_0004ee20,DAT_0004ee24,uVar5);
        uVar5 = uVar5 + 1;
      } while ((char)uVar3 != '\0');
    }
  }
  return uVar4;
}
