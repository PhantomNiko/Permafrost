#include "functions.h"
#undef DAT_0005dea0
#define DAT_0005dea0 (*(char *)(0x5dea0U))
#undef DAT_0005dea4
#define DAT_0005dea4 (*(int *)(0x5dea4U))
#undef DAT_0005dea8
#define DAT_0005dea8 (*(uint *)(0x5dea8U))
#undef DAT_0005deb2
#define DAT_0005deb2 (*(uint8_t *)(0x5deb2U))
#undef DAT_0005deb3
#define DAT_0005deb3 (*(uint8_t *)(0x5deb3U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2f39b
 */

void recovered_2f39b(byte param_1)

{
  unsigned char frame[64] = {0};

  int iVar1;

  if (DAT_0005dea0 == '\x01') {
    if (param_1 == 8) {
      if (DAT_0005dea8 != 0) {
        iVar1 = DAT_0005dea8 + DAT_0005dea4 * 0x51;
        DAT_0005dea8 = DAT_0005dea8 - 1;
        (&DAT_0005deb2)[iVar1] = 0x20;
      }
    }
    else {
      if (param_1 == 10) {
LAB_0002f40f:
        FUN_00037312();
        return;
      }
      if (param_1 == 0xd) {
        DAT_0005dea8 = 0;
      }
      else if (0x1f < param_1) {
        (&DAT_0005deb3)[DAT_0005dea8 + DAT_0005dea4 * 0x51] = param_1;
        if (0x4f < DAT_0005dea8 + 1) goto LAB_0002f40f;
        DAT_0005dea8 = DAT_0005dea8 + 1;
      }
    }
  }
  return;
}
