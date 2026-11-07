/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_4047ba38 (*(uint64_t volatile *)(0x82547b18U))
void recovered_8240fcc4(undefined8 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  uVar1 = DAT_4047ba38;
  *param_1 = uVar1;
  DAT_4047ba38 = param_1;
  return;
}
