#include "functions.h"
#undef DAT_000475c3
#define DAT_000475c3 (*(uint8_t *)(0x475c3U))
#undef DAT_00047703
#define DAT_00047703 (*(uint8_t *)(0x47703U))
#undef str_0004b1e7
#define str_0004b1e7 (*(char (*)[1])(0x4b1e7U))
#define local_8 (*(char * *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x45e34
 */

void recovered_45e34(int param_1)

{
  unsigned char frame[64];

  bool bVar1;
  char *pcVar2;

  local_8 = (char *)0x0;
  if (param_1 == 0) {
    recovered_22d6b(&DAT_000475c3);
    return;
  }
  bVar1 = recovered_35e4a((int *)param_1,(int *)&local_8);
  if (bVar1) {
    pcVar2 = &DAT_00047703;
    if (local_8 != (char *)0x0) {
      pcVar2 = local_8;
    }
  }
  else {
    pcVar2 = str_0004b1e7;
  }
  recovered_22d6b(pcVar2);
  recovered_21203((int)local_8);
  return;
}
