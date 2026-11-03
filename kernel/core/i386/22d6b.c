#include "functions.h"
#undef DAT_00046264
#define DAT_00046264 (*(uint8_t *)(0x46264U))
#define local_110 (*(char (*)[256])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x22d6b
 */

uint recovered_22d6b(char *param_1)

{
  unsigned char frame[320];

  char cVar1;
  uint extraout_EAX = 0;
  uint uVar2;
  char *pcVar3;

  if (param_1 == (char *)0x0) {
    pcVar3 = &DAT_00046264;
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
        recovered_29854(local_110,uVar2,1,'\x01');
        uVar2 = 0;
      }
      else if (uVar2 + 1 < 0x100) {
        local_110[uVar2] = cVar1;
        uVar2 = uVar2 + 1;
      }
    }
    pcVar3 = local_110;
  }
  recovered_29854(pcVar3,uVar2,1,'\x01');
  return extraout_EAX;
}
