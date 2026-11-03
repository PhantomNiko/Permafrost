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
 * Address: 0x38b45
 */

uint recovered_38b45(uint param_1)

{
  unsigned char frame[64] = {0};

  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;

  uVar2 = DAT_0005e6b0;
  iVar1 = DAT_0005e6ac;
  if ((param_1 < DAT_0005e6a0) &&
     (uVar3 = recovered_38c2a(&DAT_0005e69c,DAT_0005e6a0), (char)uVar3 != '\0')) {
    uVar4 = CONCAT31((int3)((uint)uVar3 >> 8),1);
    if ((DAT_0005e6ac == iVar1) && (DAT_0005e6b0 == uVar2)) {
      uVar4 = recovered_38cda(&DAT_0005e69c,DAT_0005e6ac,uVar2,param_1);
    }
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}
