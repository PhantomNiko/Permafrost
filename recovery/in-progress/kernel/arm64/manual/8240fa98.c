/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

void * recovered_8240fa98(ulong size)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;

  if (size < 2) {
    size = 1;
  }
  pvVar1 = recovered_82400744(size);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    recovered_82400730();
  }
  return pvVar1;
}
