/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020b93ac (*(uint32_t volatile *)(0x2130240U))
void recovered_20199a0(undefined4 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;

  uVar1 = DAT_020b93ac;
  *param_1 = uVar1;
  DAT_020b93ac = param_1;
  return;
}
