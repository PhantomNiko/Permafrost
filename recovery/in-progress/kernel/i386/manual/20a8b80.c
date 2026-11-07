/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_02098820 (*(uint32_t volatile *)(0x20de324U))
void recovered_20a8b80(int incoming_ecx,uint incoming_edx)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;

  if (incoming_ecx != 0) {
    iVar4 = 0;
    iVar1 = -0x10;
    uVar2 = DAT_02098820;
    uVar3 = 0;
    do {
      if (iVar4 == 0) {
        uVar2 = uVar2 * 0x19660d + 0x3c6ef35f;
        DAT_02098820 = uVar2;
        iVar4 = 4;
        uVar3 = uVar2;
      }
      *(char *)(incoming_ecx + 0x10 + iVar1) = (char)uVar3;
      uVar3 = uVar3 >> 8;
      iVar4 = iVar4 + -1;
      iVar1 = iVar1 + 1;
    } while (iVar1 != 0);
    *(byte *)(incoming_ecx + 6) = *(byte *)(incoming_ecx + 6) & 0xf | 0x40;
    *(byte *)(incoming_ecx + 8) = *(byte *)(incoming_ecx + 8) & 0x3f | 0x80;
  }
  return;
}
