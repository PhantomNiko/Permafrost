#include "functions.h"
#undef PTR_DAT_00047570
#define PTR_DAT_00047570 (*(uint8_t * *)(0x47570U))
#undef str_00042c8f
#define str_00042c8f (*(char (*)[1])(0x42c8fU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x22fdb
 */

char * recovered_22fdb(int param_1)

{
  unsigned char frame[64];

  char *pcVar1;

  pcVar1 = str_00042c8f;
  if (param_1 - 1U < 5) {
    pcVar1 = (&PTR_DAT_00047570)[param_1];
  }
  return pcVar1;
}
