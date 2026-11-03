#include "functions.h"
#undef DAT_00058908
#define DAT_00058908 (*(uint8_t *)(0x58908U))
#undef DAT_00058a6e
#define DAT_00058a6e (*(uint8_t *)(0x58a6eU))
#undef str_0005cc8b
#define str_0005cc8b (*(char (*)[1])(0x5cc8bU))
#define local_8 (*(char * *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x56714
 */

void recovered_56714(int param_1)

{
  unsigned char frame[64] = {0};

  bool bVar1;
  char *pcVar2;

  local_8 = (char *)0x0;
  if (param_1 == 0) {
    recovered_3018f(&DAT_00058908);
    return;
  }
  bVar1 = recovered_45ddb((int *)param_1,(int *)&local_8);
  if (bVar1) {
    pcVar2 = &DAT_00058a6e;
    if (local_8 != (char *)0x0) {
      pcVar2 = local_8;
    }
  }
  else {
    pcVar2 = str_0005cc8b;
  }
  recovered_3018f(pcVar2);
  recovered_21203((int)local_8);
  return;
}
