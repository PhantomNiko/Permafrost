#include "functions.h"
#undef DAT_0007cff0
#define DAT_0007cff0 (*(uint32_t * *)(0x7cff0U))
#undef DAT_0007cff4
#define DAT_0007cff4 (*(int *)(0x7cff4U))
#undef DAT_0007cff8
#define DAT_0007cff8 (*(uint8_t *)(0x7cff8U))
#undef _DAT_0007cff8
#define _DAT_0007cff8 (*(uint32_t *)(0x7cff8U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2ce2f
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_2ce2f(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  unsigned char frame[64];

  recovered_2b315(DAT_0007cff0,DAT_0007cff4);
  DAT_0007cff0 = (undefined4 *)param_1;
  DAT_0007cff4 = param_2;
  _DAT_0007cff8 = param_3;
  return;
}
