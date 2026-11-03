#include "functions.h"
#undef PTR_DAT_0005d69c
#define PTR_DAT_0005d69c (*(uint8_t * *)(0x5d69cU))
#undef str_00057c3f
#define str_00057c3f (*(char (*)[1])(0x57c3fU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x307ed
 */

char * recovered_307ed(int param_1)

{
  unsigned char frame[64] = {0};

  char *pcVar1;

  pcVar1 = str_00057c3f;
  if (param_1 - 1U < 6) {
    pcVar1 = (&PTR_DAT_0005d69c)[param_1];
  }
  return pcVar1;
}
