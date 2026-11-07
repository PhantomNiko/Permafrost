/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

void recovered_206ebf0(long param_1,char *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  ulong uVar2;

  recovered_2002110((void *)param_1,0x20,0xb);
  if ((param_2 != (char *)0x0) && (cVar1 = *param_2, cVar1 != '\0')) {
    uVar2 = 0;
    do {
      *(char *)(param_1 + uVar2) = cVar1;
      if (9 < uVar2) {
        return;
      }
      cVar1 = param_2[uVar2 + 1];
      uVar2 = uVar2 + 1;
    } while (cVar1 != '\0');
  }
  return;
}
