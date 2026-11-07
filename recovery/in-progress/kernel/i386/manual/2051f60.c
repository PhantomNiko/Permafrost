/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

void recovered_2051f60(void *incoming_ecx,char *incoming_edx)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  uint uVar2;

  recovered_2001e00(incoming_ecx,0x20,0xb);
  if ((incoming_edx != (char *)0x0) && (cVar1 = *incoming_edx, cVar1 != '\0')) {
    uVar2 = 0;
    do {
      *(char *)((int)incoming_ecx + uVar2) = cVar1;
      if (9 < uVar2) {
        return;
      }
      cVar1 = incoming_edx[uVar2 + 1];
      uVar2 = uVar2 + 1;
    } while (cVar1 != '\0');
  }
  return;
}
