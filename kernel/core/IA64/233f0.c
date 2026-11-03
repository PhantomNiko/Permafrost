#include "functions.h"
#undef PTR_DAT_0004c570
#define PTR_DAT_0004c570 (*(uint8_t * *)(0x4c570U))
#undef str_0004696b
#define str_0004696b (*(char (*)[1])(0x4696bU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x233f0
 */

char * recovered_233f0(int param_1)

{
  unsigned char frame[64];

  char *pcVar1;

  pcVar1 = str_0004696b;
  if (param_1 - 1U < 6) {
    pcVar1 = (&PTR_DAT_0004c570)[param_1];
  }
  return pcVar1;
}
