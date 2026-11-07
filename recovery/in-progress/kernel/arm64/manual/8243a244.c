/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

void recovered_8243a244(long param_1,long param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  recovered_82400b14((void *)param_1,0x20,0xb);
  if (param_2 != 0) {
    for (uVar1 = 0; (uVar1 < 0xb && (*(char *)(param_2 + uVar1) != '\0')); uVar1 = uVar1 + 1) {
      *(char *)(param_1 + uVar1) = *(char *)(param_2 + uVar1);
    }
  }
  return;
}
