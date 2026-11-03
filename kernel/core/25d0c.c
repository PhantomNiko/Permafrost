#include "functions.h"
#undef DAT_0005d9d0
#define DAT_0005d9d0 (*(char *)(0x5d9d0U))
#undef DAT_0005d9d4
#define DAT_0005d9d4 (*(uint32_t *)(0x5d9d4U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x25d0c
 */

uint recovered_25d0c(uint param_1,int param_2,int param_3)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;

  if (DAT_0005d9d0 == '\0') {
    for (uVar4 = 0; uVar4 != 0x100; uVar4 = uVar4 + 1) {
      iVar5 = 8;
      uVar3 = uVar4;
      while (bVar6 = iVar5 != 0, iVar5 = iVar5 + -1, bVar6) {
        uVar2 = uVar3 >> 1;
        uVar1 = uVar3 & 1;
        uVar3 = uVar2 ^ 0xedb88320;
        if (uVar1 == 0) {
          uVar3 = uVar2;
        }
      }
      (&DAT_0005d9d4)[uVar4] = uVar3;
    }
    DAT_0005d9d0 = '\x01';
  }
  uVar4 = ~param_1;
  for (iVar5 = 0; param_3 != iVar5; iVar5 = iVar5 + 1) {
    uVar4 = uVar4 >> 8 ^ (&DAT_0005d9d4)[(byte)(*(byte *)(param_2 + iVar5) ^ (byte)uVar4)];
  }
  return ~uVar4;
}
