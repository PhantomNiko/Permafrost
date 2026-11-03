#include "functions.h"
#undef DAT_00088e78
#define DAT_00088e78 (*(uint32_t * *)(0x88e78U))
#undef DAT_00088e7c
#define DAT_00088e7c (*(int *)(0x88e7cU))
#undef DAT_00088e80
#define DAT_00088e80 (*(uint8_t *)(0x88e80U))
#undef _DAT_00088e80
#define _DAT_00088e80 (*(uint32_t *)(0x88e80U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2a6ad
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_2a6ad(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  unsigned char frame[64];

  recovered_28bb5(DAT_00088e78,DAT_00088e7c);
  DAT_00088e78 = (undefined4 *)param_1;
  DAT_00088e7c = param_2;
  _DAT_00088e80 = param_3;
  return;
}
