#include "functions.h"
#undef DAT_00006200
#define DAT_00006200 (*(uint8_t *)(0x6200U))
#undef DAT_00006204
#define DAT_00006204 (*(uint8_t *)(0x6204U))
#undef DAT_00006208
#define DAT_00006208 (*(uint8_t *)(0x6208U))
#undef _DAT_00006200
#define _DAT_00006200 (*(int *)(0x6200U))
#undef _DAT_00006204
#define _DAT_00006204 (*(int *)(0x6204U))
#undef _DAT_00006208
#define _DAT_00006208 (*(uint *)(0x6208U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2308a
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_2308a(int param_1)

{
  unsigned char frame[64] = {0};

  undefined4 uVar1;

  if (((_DAT_00006200 == 0x50414d57) && (_DAT_00006204 != 0)) && (0xb < _DAT_00006208)) {
    uVar1 = CONCAT31((int3)(_DAT_00006208 >> 8),param_1 + 4U <= _DAT_00006208);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
