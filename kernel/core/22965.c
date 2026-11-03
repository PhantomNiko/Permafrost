#include "functions.h"
#undef DAT_00042614
#define DAT_00042614 (*(uint8_t *)(0x42614U))
#define local_110 (*(char (*)[256])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x22965
 */

uint recovered_22965(char *param_1)

{
  unsigned char frame[320];

  char cVar1;
  uint extraout_EAX = 0;
  uint uVar2;
  char *pcVar3;

  if (param_1 == (char *)0x0) {
    pcVar3 = &DAT_00042614;
    uVar2 = 0;
  }
  else {
    uVar2 = 0;
    while( true ) {
      do {
        pcVar3 = param_1 + 1;
        cVar1 = *param_1;
        param_1 = pcVar3;
      } while (cVar1 == '\r');
      if (cVar1 == '\0') break;
      if (cVar1 == '\n') {
        recovered_287eb(local_110,uVar2,1,'\x01');
        uVar2 = 0;
      }
      else if (uVar2 + 1 < 0x100) {
        local_110[uVar2] = cVar1;
        uVar2 = uVar2 + 1;
      }
    }
    pcVar3 = local_110;
  }
  recovered_287eb(pcVar3,uVar2,1,'\x01');
  return extraout_EAX;
}
