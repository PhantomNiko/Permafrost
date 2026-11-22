/* Recovered implementation; Pooka's Free Software License. */
#include "functions.h"
#define DAT_02098a58 (*(uint32_t volatile *)(0x20e3c10U))
#define DAT_020e3c10 (*(uint32_t volatile *)(0x20e3c10U))


uint * recovered_2012220(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return &DAT_020e3c10;
}
#undef DAT_02098a58
#undef DAT_020e3c10
