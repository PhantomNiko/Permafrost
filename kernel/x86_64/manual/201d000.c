/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020cea28 (*(uint64_t volatile *)(0x215a258U))
void recovered_201d000(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;

  puVar1 = (undefined8 *)DAT_020cea28;
  if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    recovered_201ca30();
  }
  *(undefined1 *)(puVar1 + 5) = 1;
  puVar1[3] = 0;
  puVar1[4] = 0;
                    /* WARNING: Subroutine does not return */
  recovered_201cf80(puVar1);
}
