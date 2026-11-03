#include "functions.h"
#undef DAT_000445f4
#define DAT_000445f4 (*(uint *)(0x445f4U))
#undef DAT_000445f8
#define DAT_000445f8 (*(uint32_t *)(0x445f8U))
#undef DAT_00044deb
#define DAT_00044deb (*(uint8_t *)(0x44debU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x27242
 */

void FUN_00027242(void)

{
  unsigned char frame[64];

  int iVar1;

  DAT_000445f8 = 0;
  if (DAT_000445f4 + 1 < 0x19) {
    DAT_000445f4 = DAT_000445f4 + 1;
    return;
  }
  recovered_20f63(0x44603,0x44654,0x798);
  for (iVar1 = -0x50; iVar1 != 0; iVar1 = iVar1 + 1) {
    (&DAT_00044deb)[iVar1] = 0x20;
  }
  DAT_00044deb = 0;
  return;
}
