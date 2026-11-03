#include "functions.h"
#undef DAT_0008407c
#define DAT_0008407c (*(uint32_t * *)(0x8407cU))
#undef DAT_00084080
#define DAT_00084080 (*(int *)(0x84080U))
#undef DAT_00084084
#define DAT_00084084 (*(uint8_t *)(0x84084U))
#undef _DAT_00084084
#define _DAT_00084084 (*(uint32_t *)(0x84084U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2e485
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_2e485(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  unsigned char frame[64];

  recovered_2c297(DAT_0008407c,DAT_00084080);
  DAT_0008407c = (undefined4 *)param_1;
  DAT_00084080 = param_2;
  _DAT_00084084 = param_3;
  return;
}
