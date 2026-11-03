#include "functions.h"
#undef PTR_DAT_0004e570
#define PTR_DAT_0004e570 (*(uint8_t * *)(0x4e570U))
#undef str_00048bce
#define str_00048bce (*(char (*)[1])(0x48bceU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x233c9
 */

char * recovered_233c9(int param_1)

{
  unsigned char frame[64];

  char *pcVar1;

  pcVar1 = str_00048bce;
  if (param_1 - 1U < 6) {
    pcVar1 = (&PTR_DAT_0004e570)[param_1];
  }
  return pcVar1;
}
