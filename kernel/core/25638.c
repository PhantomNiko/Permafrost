#include "functions.h"
#undef DAT_0007041c
#define DAT_0007041c (*(uint32_t * *)(0x7041cU))
#undef DAT_00070420
#define DAT_00070420 (*(int *)(0x70420U))
#undef _DAT_00070424
#define _DAT_00070424 (*(uint32_t *)(0x70424U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x25638
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_25638(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  unsigned char frame[64];

  recovered_256e9(DAT_0007041c,DAT_00070420);
  DAT_0007041c = (undefined4 *)param_1;
  DAT_00070420 = param_2;
  _DAT_00070424 = param_3;
  return;
}

