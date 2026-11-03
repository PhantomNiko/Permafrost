#include "functions.h"
#undef DAT_0004989d
#define DAT_0004989d (*(uint8_t *)(0x4989dU))
#undef DAT_00049a03
#define DAT_00049a03 (*(uint8_t *)(0x49a03U))
#undef str_0004d939
#define str_0004d939 (*(char (*)[1])(0x4d939U))
#define local_8 (*(char * *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x480d9
 */

void recovered_480d9(int param_1)

{
  unsigned char frame[64];

  bool bVar1;
  char *pcVar2;

  local_8 = (char *)0x0;
  if (param_1 == 0) {
    recovered_22d6b(&DAT_0004989d);
    return;
  }
  bVar1 = recovered_37af6((int *)param_1,(int *)&local_8);
  if (bVar1) {
    pcVar2 = &DAT_00049a03;
    if (local_8 != (char *)0x0) {
      pcVar2 = local_8;
    }
  }
  else {
    pcVar2 = str_0004d939;
  }
  recovered_22d6b(pcVar2);
  recovered_21203((int)local_8);
  return;
}
