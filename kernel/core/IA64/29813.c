#include "functions.h"
#undef DAT_0004c618
#define DAT_0004c618 (*(uint *)(0x4c618U))
#undef DAT_0004c61c
#define DAT_0004c61c (*(uint32_t *)(0x4c61cU))
#undef DAT_0004ce0f
#define DAT_0004ce0f (*(uint8_t *)(0x4ce0fU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x29813
 */

void FUN_00029813(void)

{
  unsigned char frame[64];

  int iVar1;

  DAT_0004c61c = 0;
  if (DAT_0004c618 + 1 < 0x19) {
    DAT_0004c618 = DAT_0004c618 + 1;
    return;
  }
  recovered_21369(0x4c627,0x4c678,0x798);
  for (iVar1 = -0x50; iVar1 != 0; iVar1 = iVar1 + 1) {
    (&DAT_0004ce0f)[iVar1] = 0x20;
  }
  DAT_0004ce0f = 0;
  return;
}
