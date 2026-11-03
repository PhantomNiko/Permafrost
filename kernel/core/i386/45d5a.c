#include "functions.h"
#undef DAT_00046264
#define DAT_00046264 (*(uint8_t *)(0x46264U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x45d5a
 */

char * recovered_45d5a(char *param_1)

{
  unsigned char frame[64];

  char cVar1;
  char *pcVar2;
  char *pcVar3;

  if (param_1 == (char *)0x0) {
    return &DAT_00046264;
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
