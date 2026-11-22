/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020ce7c8 (*(uint32_t volatile *)(0x212d354U))
#define DAT_020ce7cc (*(uint32_t volatile *)(0x212d358U))
#define DAT_020ce7d0 (*(uint32_t volatile *)(0x212d35cU))
#define DAT_020ce7d4 (*(uint8_t volatile *)(0x212d360U))
void recovered_200c210(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  DAT_020ce7c8 = param_1;
  DAT_020ce7cc = param_2;
  DAT_020ce7d0 = param_3;
  DAT_020ce7d4 = param_4;
  return;
}
