/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020cea30 (*(uint64_t volatile *)(0x215a260U))
void recovered_201d030(undefined8 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  uVar1 = DAT_020cea30;
  *param_1 = uVar1;
  DAT_020cea30 = param_1;
  return;
}
