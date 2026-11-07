/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

void * recovered_201cb00(ulong size)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;

  pvVar1 = recovered_2000ad0(size + (size == 0));
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    recovered_2000aa0();
  }
  return pvVar1;
}
