#include "functions.h"
#undef DAT_00047604
#define DAT_00047604 (*(uint *)(0x47604U))
#undef DAT_00047608
#define DAT_00047608 (*(uint32_t *)(0x47608U))
#undef DAT_00047dfb
#define DAT_00047dfb (*(uint8_t *)(0x47dfbU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x28796
 */

void FUN_00028796(void)

{
  unsigned char frame[64];

  int iVar1;

  DAT_00047608 = 0;
  if (DAT_00047604 + 1 < 0x19) {
    DAT_00047604 = DAT_00047604 + 1;
    return;
  }
  recovered_20f63(0x47613,0x47664,0x798);
  for (iVar1 = -0x50; iVar1 != 0; iVar1 = iVar1 + 1) {
    (&DAT_00047dfb)[iVar1] = 0x20;
  }
  DAT_00047dfb = 0;
  return;
}
