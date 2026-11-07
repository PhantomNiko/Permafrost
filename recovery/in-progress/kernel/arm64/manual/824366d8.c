/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

void recovered_824366d8(undefined1 *param_1,uint param_2,ulong param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;

  for (lVar1 = 0; (param_3 & 0xffffffff) * 8 != lVar1; lVar1 = lVar1 + 8) {
    *param_1 = (char)(param_2 >> (ulong)((uint)lVar1 & 0x1f));
    param_1 = param_1 + 1;
  }
  return;
}
