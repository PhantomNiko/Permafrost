#include "functions.h"
#undef DAT_0005dea4
#define DAT_0005dea4 (*(uint *)(0x5dea4U))
#undef DAT_0005dea8
#define DAT_0005dea8 (*(uint32_t *)(0x5dea8U))
#undef DAT_0005e69b
#define DAT_0005e69b (*(uint8_t *)(0x5e69bU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x37312
 */

void FUN_00037312(void)

{
  unsigned char frame[64] = {0};

  int iVar1;

  DAT_0005dea8 = 0;
  if (DAT_0005dea4 + 1 < 0x19) {
    DAT_0005dea4 = DAT_0005dea4 + 1;
    return;
  }
  recovered_21369(0x5deb3,0x5df04,0x798);
  for (iVar1 = -0x50; iVar1 != 0; iVar1 = iVar1 + 1) {
    (&DAT_0005e69b)[iVar1] = 0x20;
  }
  DAT_0005e69b = 0;
  return;
}
