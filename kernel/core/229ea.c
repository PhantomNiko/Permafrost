#include "functions.h"
#undef DAT_00047600
#define DAT_00047600 (*(uint8_t *)(0x47600U))
#undef DAT_00047e80
#define DAT_00047e80 (*(uint8_t *)(0x47e80U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x229ea
 */

int recovered_229ea(char *buffer,uint capacity,char *prompt,int echo)

{
  unsigned char frame[64];

  uint uVar1;

  DAT_00047600 = 0;
  DAT_00047e80 = 0;
  uVar1 = recovered_22a27(buffer,capacity,prompt,echo != 0,'\x01');
  return uVar1 & 0xff;
}
