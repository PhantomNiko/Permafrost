#include "functions.h"
#undef DAT_0004c614
#define DAT_0004c614 (*(uint8_t *)(0x4c614U))
#undef DAT_0004ce94
#define DAT_0004ce94 (*(uint8_t *)(0x4ce94U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x22df0
 */

int recovered_22df0(char *buffer,uint capacity,char *prompt,int echo)

{
  unsigned char frame[64];

  uint uVar1;

  DAT_0004c614 = 0;
  DAT_0004ce94 = 0;
  uVar1 = recovered_22e2d(buffer,capacity,(undefined **)prompt,echo != 0,'\x01');
  return uVar1 & 0xff;
}
