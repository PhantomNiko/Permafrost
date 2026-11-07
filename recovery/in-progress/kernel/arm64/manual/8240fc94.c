/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_4047ba30 (*(uint64_t volatile *)(0x82547b10U))
void recovered_8240fc94(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;

  puVar1 = (undefined8 *)DAT_4047ba30;
  if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    recovered_8240fa4c();
  }
  *(undefined1 *)(puVar1 + 5) = 1;
  puVar1[4] = 0;
  puVar1[3] = 0;
                    /* WARNING: Subroutine does not return */
  recovered_8240fc30(puVar1);
}
