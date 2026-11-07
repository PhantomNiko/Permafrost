/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020ae088 (*(uint64_t volatile *)(0x2108008U))
long recovered_20005f0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long *plVar1;
  long lVar2;

  recovered_20000b0();
  plVar1 = (long *)DAT_020ae088;
  lVar2 = 0;
  for (; plVar1 != (long *)0x0; plVar1 = (long *)plVar1[1]) {
    lVar2 = lVar2 + *plVar1;
  }
  return lVar2;
}
