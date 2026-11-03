#include "functions.h"
#undef DAT_00043872
#define DAT_00043872 (*(uint8_t *)(0x43872U))
#undef DAT_000439b2
#define DAT_000439b2 (*(uint8_t *)(0x439b2U))
#undef str_00046b9a
#define str_00046b9a (*(char (*)[1])(0x46b9aU))
#define local_8 (*(char * *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x42249
 */

void recovered_42249(int param_1)

{
  unsigned char frame[64];

  bool bVar1;
  char *pcVar2;

  local_8 = (char *)0x0;
  if (param_1 == 0) {
    recovered_22965(&DAT_00043872);
    return;
  }
  bVar1 = recovered_34508((int *)param_1,(int *)&local_8);
  if (bVar1) {
    pcVar2 = &DAT_000439b2;
    if (local_8 != (char *)0x0) {
      pcVar2 = local_8;
    }
  }
  else {
    pcVar2 = str_00046b9a;
  }
  recovered_22965(pcVar2);
  recovered_20dfd((int)local_8);
  return;
}
