/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020ade08 (*(uint32_t volatile *)(0x2106f90U))
void recovered_20ce4c0(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;

  if (param_1 != 0) {
    lVar1 = 0;
    uVar2 = DAT_020ade08;
    lVar3 = 0;
    uVar4 = 0;
    do {
      if (lVar3 == 0) {
        uVar2 = uVar2 * 0x19660d + 0x3c6ef35f;
        DAT_020ade08 = uVar2;
        lVar3 = 4;
        uVar4 = uVar2;
      }
      *(char *)(param_1 + lVar1) = (char)uVar4;
      lVar3 = lVar3 + -1;
      if (lVar3 == 0) {
        uVar2 = uVar2 * 0x19660d + 0x3c6ef35f;
        DAT_020ade08 = uVar2;
        lVar3 = 4;
        uVar4 = uVar2;
      }
      else {
        uVar4 = uVar4 >> 8;
      }
      *(char *)(param_1 + 1 + lVar1) = (char)uVar4;
      uVar4 = uVar4 >> 8;
      lVar3 = lVar3 + -1;
      lVar1 = lVar1 + 2;
    } while (lVar1 != 0x10);
    *(byte *)(param_1 + 6) = *(byte *)(param_1 + 6) & 0xf | 0x40;
    *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) & 0x3f | 0x80;
  }
  return;
}
