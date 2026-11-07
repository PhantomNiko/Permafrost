/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

uchar recovered_209f2c0(undefined4 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;

  if (param_1 == (undefined4 *)0x0) {
    return '\0';
  }
  puVar1 = recovered_2000ad0(0x20);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 1;
    *(undefined8 *)(puVar1 + 2) = 0;
    *(undefined8 *)(puVar1 + 4) = 0;
    *(undefined8 *)(puVar1 + 6) = 0;
    recovered_205ec00((undefined8 *)param_1);
    *param_1 = 8;
    *(undefined4 **)(param_1 + 0xc) = puVar1;
  }
  return puVar1 != (undefined4 *)0x0;
}
