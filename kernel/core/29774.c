#include "functions.h"
#undef DAT_00047dfc
#define DAT_00047dfc (*(uint32_t *)(0x47dfcU))
#undef DAT_00047e00
#define DAT_00047e00 (*(uint *)(0x47e00U))
#undef DAT_00047e0c
#define DAT_00047e0c (*(int *)(0x47e0cU))
#undef DAT_00047e10
#define DAT_00047e10 (*(uint *)(0x47e10U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x29774
 */

uint recovered_29774(void)

{
  unsigned char frame[64];

  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 unaff_EBX = 0;
  uint uVar4;
  uint uVar5;

  iVar1 = DAT_00047e0c;
  if (DAT_00047e00 == 0) {
    uVar4 = CONCAT31((int3)((uint)unaff_EBX >> 8),1);
    if (DAT_00047e0c != 0) {
      for (uVar5 = 0; uVar5 < DAT_00047e10; uVar5 = uVar5 + 1) {
        *(undefined4 *)(iVar1 + uVar5 * 4) = 0xffffffff;
      }
    }
  }
  else {
    uVar2 = recovered_297f8(&DAT_00047dfc,DAT_00047e00);
    iVar1 = DAT_00047e0c;
    uVar4 = 0;
    if ((char)uVar2 != '\0') {
      for (; uVar4 < DAT_00047e10; uVar4 = uVar4 + 1) {
        *(undefined4 *)(iVar1 + uVar4 * 4) = 0xffffffff;
      }
      uVar5 = 0;
      do {
        uVar4 = CONCAT31((int3)(uVar4 >> 8),DAT_00047e00 <= uVar5);
        if (DAT_00047e00 <= uVar5) {
          return uVar4;
        }
        uVar3 = recovered_298a8(&DAT_00047dfc,DAT_00047e0c,DAT_00047e10,uVar5);
        uVar5 = uVar5 + 1;
      } while ((char)uVar3 != '\0');
    }
  }
  return uVar4;
}
