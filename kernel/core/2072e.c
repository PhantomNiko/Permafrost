#include "functions.h"
#undef DAT_0002f0b0
#define DAT_0002f0b0 (*(char *)(0x2f0b0U))
#undef DAT_0002f0b4
#define DAT_0002f0b4 (*(uint32_t *)(0x2f0b4U))
#undef DAT_00300008
#define DAT_00300008 (*(uint8_t *)(0x300008U))
#undef _DAT_00006088
#define _DAT_00006088 (*(uint *)(0x6088U))
#undef _DAT_00300000
#define _DAT_00300000 (*(int *)(0x300000U))
#undef _DAT_00300004
#define _DAT_00300004 (*(uint32_t *)(0x300004U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2072e
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint recovered_2072e(void)

{
  unsigned char frame[64];

  uint in_EAX = 0;
  uint uVar1;
  
  if (DAT_0002f0b0 == '\0') {
    uVar1 = 0x4000000;
    if (0x300000 < _DAT_00006088) {
      uVar1 = _DAT_00006088 & 0xfffffff0;
    }
    DAT_0002f0b4 = 0x300000;
    _DAT_00300000 = 0x3cffff4;
    if (0x30001c < uVar1) {
      _DAT_00300000 = uVar1 - 0x30000c;
    }
    _DAT_00300004 = 0;
    in_EAX = CONCAT31((int3)((uint)_DAT_00300000 >> 8),1);
    DAT_00300008 = 1;
    DAT_0002f0b0 = '\x01';
  }
  return in_EAX;
}

