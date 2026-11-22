/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

undefined1 * recovered_20197e0(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined1 *puVar1;
  undefined1 *puVar2;
  ulong size;

  size = param_1 + 0x1c + (uint)(param_1 == 0);
  puVar1 = recovered_2001650(size);
  if (puVar1 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
    recovered_2019480();
  }
  if (size != 0) {
    puVar2 = puVar1;
    do {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
      size = size - 1;
    } while (size != 0);
  }
  return puVar1 + 0x1c;
}
