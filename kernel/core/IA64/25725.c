#include "functions.h"
#undef DAT_0004ce9c
#define DAT_0004ce9c (*(char *)(0x4ce9cU))
#undef PTR_DAT_0004c038
#define PTR_DAT_0004c038 (*(uint8_t * *)(0x4c038U))
#undef PTR_DAT_0004c03c
#define PTR_DAT_0004c03c (*(uint8_t * *)(0x4c03cU))
#undef PTR_DAT_0004c040
#define PTR_DAT_0004c040 (*(uint8_t * *)(0x4c040U))
#undef PTR_DAT_0004c044
#define PTR_DAT_0004c044 (*(uint8_t * *)(0x4c044U))
#undef PTR_DAT_0004c048
#define PTR_DAT_0004c048 (*(uint8_t * *)(0x4c048U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x25725
 */

uint recovered_25725(void)

{
  unsigned char frame[64];

  uint uVar1;

  uVar1 = 0;
  if ((((DAT_0004ce9c == '\x01') && (*(int *)PTR_DAT_0004c040 != 0)) &&
      (*(int *)PTR_DAT_0004c044 != 0)) &&
     ((*(int *)PTR_DAT_0004c048 != 0 && (*(int *)PTR_DAT_0004c03c != 0)))) {
    if (*(int *)PTR_DAT_0004c038 - 0xfU < 0x12) {
      uVar1 = 0x20203 >> ((byte)(*(int *)PTR_DAT_0004c038 - 0xfU) & 0x1f);
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1 & 0xffffff01;
}
