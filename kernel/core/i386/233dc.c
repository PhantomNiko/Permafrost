#include "functions.h"
#undef PTR_DAT_0004c570
#define PTR_DAT_0004c570 (*(uint8_t * *)(0x4c570U))
#undef str_00046916
#define str_00046916 (*(char (*)[1])(0x46916U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x233dc
 */

char * recovered_233dc(int param_1)

{
  unsigned char frame[64];

  char *pcVar1;

  pcVar1 = str_00046916;
  if (param_1 - 1U < 6) {
    pcVar1 = (&PTR_DAT_0004c570)[param_1];
  }
  return pcVar1;
}
