/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

ulong recovered_8241c2f8(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;

  if (param_1 == 0) {
    return 0;
  }
  pvVar1 = recovered_8240fa98(param_1 << 3);
  return (ulong)pvVar1;
}
