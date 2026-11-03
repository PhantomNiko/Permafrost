#include "functions.h"
#undef DAT_0008207c
#define DAT_0008207c (*(uint32_t * *)(0x8207cU))
#undef DAT_00082080
#define DAT_00082080 (*(int *)(0x82080U))
#undef DAT_00082084
#define DAT_00082084 (*(uint8_t *)(0x82084U))
#undef _DAT_00082084
#define _DAT_00082084 (*(uint32_t *)(0x82084U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2e33f
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_2e33f(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  unsigned char frame[64];

  recovered_2c1d3(DAT_0008207c,DAT_00082080);
  DAT_0008207c = (undefined4 *)param_1;
  DAT_00082080 = param_2;
  _DAT_00082084 = param_3;
  return;
}
