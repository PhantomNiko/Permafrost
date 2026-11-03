#include "functions.h"
#undef DAT_0005dea0
#define DAT_0005dea0 (*(uint8_t *)(0x5dea0U))
#undef DAT_0005e720
#define DAT_0005e720 (*(uint8_t *)(0x5e720U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x30214
 */

int recovered_30214(char *buffer,uint capacity,char *prompt,int echo)

{
  unsigned char frame[64] = {0};

  uint uVar1;

  DAT_0005dea0 = 0;
  DAT_0005e720 = 0;
  uVar1 = recovered_30251(buffer,capacity,(undefined **)prompt,echo != 0,'\x01');
  return uVar1 & 0xff;
}
