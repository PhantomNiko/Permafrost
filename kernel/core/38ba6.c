#include "functions.h"
#undef DAT_0005e69c
#define DAT_0005e69c (*(uint32_t *)(0x5e69cU))
#undef DAT_0005e6a0
#define DAT_0005e6a0 (*(uint *)(0x5e6a0U))
#undef DAT_0005e6ac
#define DAT_0005e6ac (*(int *)(0x5e6acU))
#undef DAT_0005e6b0
#define DAT_0005e6b0 (*(uint *)(0x5e6b0U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x38ba6
 */

uint recovered_38ba6(void)

{
  unsigned char frame[64] = {0};

  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 unaff_EBX = 0;
  uint uVar4;
  uint uVar5;

  iVar1 = DAT_0005e6ac;
  if (DAT_0005e6a0 == 0) {
    uVar4 = CONCAT31((int3)((uint)unaff_EBX >> 8),1);
    if (DAT_0005e6ac != 0) {
      for (uVar5 = 0; uVar5 < DAT_0005e6b0; uVar5 = uVar5 + 1) {
        *(undefined4 *)(iVar1 + uVar5 * 4) = 0xffffffff;
      }
    }
  }
  else {
    uVar2 = recovered_38c2a(&DAT_0005e69c,DAT_0005e6a0);
    iVar1 = DAT_0005e6ac;
    uVar4 = 0;
    if ((char)uVar2 != '\0') {
      for (; uVar4 < DAT_0005e6b0; uVar4 = uVar4 + 1) {
        *(undefined4 *)(iVar1 + uVar4 * 4) = 0xffffffff;
      }
      uVar5 = 0;
      do {
        uVar4 = CONCAT31((int3)(uVar4 >> 8),DAT_0005e6a0 <= uVar5);
        if (DAT_0005e6a0 <= uVar5) {
          return uVar4;
        }
        uVar3 = recovered_38cda(&DAT_0005e69c,DAT_0005e6ac,DAT_0005e6b0,uVar5);
        uVar5 = uVar5 + 1;
      } while ((char)uVar3 != '\0');
    }
  }
  return uVar4;
}
