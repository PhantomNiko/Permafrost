#include "functions.h"
#undef DAT_00093908
#define DAT_00093908 (*(uint32_t * *)(0x93908U))
#undef DAT_0009390c
#define DAT_0009390c (*(int *)(0x9390cU))
#undef DAT_00093910
#define DAT_00093910 (*(uint8_t *)(0x93910U))
#undef _DAT_00093910
#define _DAT_00093910 (*(uint32_t *)(0x93910U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x3c76a
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_3c76a(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  unsigned char frame[64] = {0};

  recovered_3a594(DAT_00093908,DAT_0009390c);
  DAT_00093908 = (undefined4 *)param_1;
  DAT_0009390c = param_2;
  _DAT_00093910 = param_3;
  return;
}
