/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

ulong * recovered_82400e50(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  void *out;
  ulong *puVar2;

  puVar2 = (ulong *)0x0;
  if (param_1 != 0) {
    uVar1 = recovered_82400de8((char *)param_1);
    out = recovered_8240043c(uVar1 + 1);
    puVar2 = (ulong *)0x0;
    if (out != (void *)0x0) {
      puVar2 = recovered_82400928(out,(void *)param_1,uVar1 + 1);
    }
  }
  return puVar2;
}
