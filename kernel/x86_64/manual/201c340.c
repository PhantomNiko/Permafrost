/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020adff0 (*(uint32_t volatile *)(0x2107190U))
ulonglong recovered_201c340(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == 0) {
    DAT_020adff0 = 0x16;
    return 0xffffffffffffffff;
  }
  return *(ulonglong *)(param_1 + 0x118);
}
