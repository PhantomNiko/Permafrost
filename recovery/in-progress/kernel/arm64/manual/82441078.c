/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

bool recovered_82441078(long param_1,uint param_2,uint param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;

  bVar1 = false;
  if (param_1 != 0) {
    if (*(long *)(param_1 + 0x30) == 0) {
      return false;
    }
    bVar1 = (ulong)param_2 <= *(ulong *)(param_1 + 0x38) &&
            (ulong)param_3 <= *(ulong *)(param_1 + 0x38) - (ulong)param_2;
  }
  return bVar1;
}
