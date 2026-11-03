#include "functions.h"
#undef DAT_00057364
#define DAT_00057364 (*(uint8_t *)(0x57364U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x560f0
 */

char * recovered_560f0(char *param_1)

{
  unsigned char frame[64] = {0};

  char cVar1;
  char *pcVar2;
  char *pcVar3;

  if (param_1 == (char *)0x0) {
    return &DAT_00057364;
  }
  pcVar3 = param_1;
  do {
    while( true ) {
      pcVar2 = pcVar3 + 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar2;
      if ((cVar1 != '/') && (cVar1 != '\\')) break;
      param_1 = pcVar2;
    }
  } while (cVar1 != '\0');
  return param_1;
}
