/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

void recovered_20b6250(int incoming_ecx,uint incoming_edx)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint extraout_EDX = 0;
  uint uVar1;
  int iVar2;

  if (incoming_ecx != 0) {
    if (*(int *)(incoming_ecx + 0x24) != 0) {
      iVar2 = 0;
      uVar1 = 0;
      do {
        recovered_20b62b0((undefined4 *)(*(int *)(incoming_ecx + 0x20) + iVar2),incoming_edx);
        uVar1 = uVar1 + 1;
        iVar2 = iVar2 + 0x5c;
        incoming_edx = extraout_EDX;
      } while (uVar1 < *(uint *)(incoming_ecx + 0x24));
    }
    recovered_2001710(*(void **)(incoming_ecx + 0x20));
    *(undefined4 *)(incoming_ecx + 0x20) = 0;
    *(undefined4 *)(incoming_ecx + 0x24) = 0;
    *(undefined4 *)(incoming_ecx + 0x28) = 0;
  }
  return;
}
