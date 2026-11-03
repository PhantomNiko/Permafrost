#include "functions.h"
#undef DAT_00057364
#define DAT_00057364 (*(uint8_t *)(0x57364U))
#define local_110 (*(char (*)[256])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x3018f
 */

uint recovered_3018f(char *param_1)

{
  unsigned char frame[320] = {0};

  char cVar1;
  uint extraout_EAX = 0;
  uint uVar2;
  char *pcVar3;

  if (param_1 == (char *)0x0) {
    pcVar3 = &DAT_00057364;
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
        recovered_37367(local_110,uVar2,1,'\x01');
        uVar2 = 0;
      }
      else if (uVar2 + 1 < 0x100) {
        local_110[uVar2] = cVar1;
        uVar2 = uVar2 + 1;
      }
    }
    pcVar3 = local_110;
  }
  recovered_37367(pcVar3,uVar2,1,'\x01');
  return extraout_EAX;
}
