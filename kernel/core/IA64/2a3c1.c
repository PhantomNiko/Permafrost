#include "functions.h"
#undef DAT_00006238
#define DAT_00006238 (*(uint8_t *)(0x6238U))
#undef DAT_0004ce98
#define DAT_0004ce98 (*(int *)(0x4ce98U))
#undef _DAT_00006238
#define _DAT_00006238 (*(uint *)(0x6238U))
#undef str_0004690e
#define str_0004690e (*(char (*)[1])(0x4690eU))
#undef str_0004691a
#define str_0004691a (*(char (*)[1])(0x4691aU))
#undef str_0004692d
#define str_0004692d (*(char (*)[1])(0x4692dU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2a3c1
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * recovered_2a3c1(void)

{
  unsigned char frame[64];

  char *pcVar1;

  if (DAT_0004ce98 == 0) {
    return str_0004692d;
  }
  pcVar1 = str_0004690e;
  if (((_DAT_00006238 & 2) == 0) && (pcVar1 = str_0004691a, (_DAT_00006238 & 1) == 0)) {
    pcVar1 = str_0004692d;
  }
  return pcVar1;
}
