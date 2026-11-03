#include "functions.h"
#undef DAT_000403f1
#define DAT_000403f1 (*(uint8_t *)(0x403f1U))
#undef DAT_00040531
#define DAT_00040531 (*(uint8_t *)(0x40531U))
#undef str_00043248
#define str_00043248 (*(char (*)[1])(0x43248U))
#define local_8 (*(char * *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x3eea4
 */

void recovered_3eea4(int param_1)

{
  unsigned char frame[64];

  bool bVar1;
  char *pcVar2;

  local_8 = (char *)0x0;
  if (param_1 == 0) {
    recovered_22401(&DAT_000403f1);
    return;
  }
  bVar1 = recovered_31d86((int *)param_1,(int *)&local_8);
  if (bVar1) {
    pcVar2 = &DAT_00040531;
    if (local_8 != (char *)0x0) {
      pcVar2 = local_8;
    }
  }
  else {
    pcVar2 = str_00043248;
  }
  recovered_22401(pcVar2);
  recovered_20dfd((int)local_8);
  return;
}
