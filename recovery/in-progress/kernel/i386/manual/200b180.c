/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020b916c (*(uint32_t volatile *)(0x2104338U))
#define DAT_020b9170 (*(uint32_t volatile *)(0x210433cU))
#define DAT_020b9174 (*(uint32_t volatile *)(0x2104340U))
#define DAT_020b9178 (*(uint8_t volatile *)(0x2104344U))
void recovered_200b180(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  DAT_020b916c = param_1;
  DAT_020b9170 = param_2;
  DAT_020b9174 = param_3;
  DAT_020b9178 = param_4;
  return;
}
