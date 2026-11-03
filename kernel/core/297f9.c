#include "functions.h"
#undef DAT_0004e618
#define DAT_0004e618 (*(uint *)(0x4e618U))
#undef DAT_0004e61c
#define DAT_0004e61c (*(uint32_t *)(0x4e61cU))
#undef DAT_0004ee0f
#define DAT_0004ee0f (*(uint8_t *)(0x4ee0fU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x297f9
 */

void FUN_000297f9(void)

{
  unsigned char frame[64];

  int iVar1;

  DAT_0004e61c = 0;
  if (DAT_0004e618 + 1 < 0x19) {
    DAT_0004e618 = DAT_0004e618 + 1;
    return;
  }
  recovered_21369(0x4e627,0x4e678,0x798);
  for (iVar1 = -0x50; iVar1 != 0; iVar1 = iVar1 + 1) {
    (&DAT_0004ee0f)[iVar1] = 0x20;
  }
  DAT_0004ee0f = 0;
  return;
}
