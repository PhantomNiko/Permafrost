#include "functions.h"
#undef DAT_00047618
#define DAT_00047618 (*(uint8_t *)(0x47618U))
#undef DAT_00047758
#define DAT_00047758 (*(uint8_t *)(0x47758U))
#undef str_0004b204
#define str_0004b204 (*(char (*)[1])(0x4b204U))
#define local_8 (*(char * *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x45e4f
 */

void recovered_45e4f(int param_1)

{
  unsigned char frame[64];

  bool bVar1;
  char *pcVar2;

  local_8 = (char *)0x0;
  if (param_1 == 0) {
    recovered_22d6b(&DAT_00047618);
    return;
  }
  bVar1 = recovered_35e82((int *)param_1,(int *)&local_8);
  if (bVar1) {
    pcVar2 = &DAT_00047758;
    if (local_8 != (char *)0x0) {
      pcVar2 = local_8;
    }
  }
  else {
    pcVar2 = str_0004b204;
  }
  recovered_22d6b(pcVar2);
  recovered_21203((int)local_8);
  return;
}
