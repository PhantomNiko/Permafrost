/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

uint recovered_209bc20(undefined2 *incoming_ecx,uint incoming_edx)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *buffer;
  uint in_EAX = 0;
  uint extraout_EAX = 0;
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;

  if (incoming_ecx != (undefined2 *)0x0) {
    if (*(int *)(incoming_ecx + 2) != 0) {
      uVar2 = 0;
      do {
        recovered_2001710(*(void **)(*(int *)(incoming_ecx + 6) + uVar2 * 4));
        uVar2 = uVar2 + 1;
      } while (uVar2 < *(uint *)(incoming_ecx + 2));
    }
    recovered_2001710(*(void **)(incoming_ecx + 6));
    *(undefined4 *)(incoming_ecx + 2) = 0;
    *(undefined4 *)(incoming_ecx + 4) = 0;
    *(undefined4 *)(incoming_ecx + 6) = 0;
    recovered_2001710(*(void **)(incoming_ecx + 0xc));
    *(undefined4 *)(incoming_ecx + 8) = 0;
    *(undefined4 *)(incoming_ecx + 10) = 0;
    *(undefined4 *)(incoming_ecx + 0xc) = 0;
    buffer = *(undefined4 **)(incoming_ecx + 0xe);
    if (buffer != (undefined4 *)0x0) {
      iVar1 = *(int *)(incoming_ecx + 0x10);
      if (iVar1 != 0) {
        puVar3 = buffer;
        do {
          recovered_2001710((void *)*puVar3);
          *puVar3 = 0;
          puVar3 = puVar3 + 1;
          iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
      }
      recovered_2001710(buffer);
    }
    recovered_2001710(*(void **)(incoming_ecx + 0x14));
    recovered_2001710(*(void **)(incoming_ecx + 0x16));
    *(undefined4 *)(incoming_ecx + 0xe) = 0;
    *(undefined4 *)(incoming_ecx + 0x10) = 0;
    *(undefined4 *)(incoming_ecx + 0x12) = 0;
    *(undefined4 *)(incoming_ecx + 0x14) = 0;
    *(undefined4 *)(incoming_ecx + 0x16) = 0;
    *incoming_ecx = 1;
    in_EAX = extraout_EAX;
  }
  return in_EAX;
}
