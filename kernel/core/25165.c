#include "functions.h"
#undef DAT_0002f1b0
#define DAT_0002f1b0 (*(uint32_t *)(0x2f1b0U))
#undef DAT_0003f0bc
#define DAT_0003f0bc (*(uint *)(0x3f0bcU))
#undef DAT_0003f0d4
#define DAT_0003f0d4 (*(uint8_t *)(0x3f0d4U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x25165
 */

void recovered_25165(void)

{
  unsigned char frame[64];

  uint uVar1;
  uint uVar2;
  int *piVar3;
  
  piVar3 = &DAT_0002f1b0;
  uVar1 = DAT_0003f0bc;
  for (uVar2 = 0; uVar2 < uVar1; uVar2 = uVar2 + 1) {
    if (*piVar3 != 0) {
      recovered_20aee(*piVar3);
      *piVar3 = 0;
      uVar1 = DAT_0003f0bc;
    }
    piVar3 = piVar3 + 0x40;
  }
  DAT_0003f0bc = 0;
  DAT_0003f0d4 = 0;
  return;
}

