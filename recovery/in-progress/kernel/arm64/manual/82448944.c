/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

ulong * recovered_82448944(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong *puVar1;

  if (param_1 == 0) {
    return (ulong *)0x0;
  }
  puVar1 = recovered_82400744((ulong)(uint)param_1);
  return puVar1;
}
