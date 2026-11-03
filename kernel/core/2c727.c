#include "functions.h"
#undef DAT_0002d057
#define DAT_0002d057 (*(uint8_t *)(0x2d057U))
#undef str_0002e4bc
#define str_0002e4bc (*(char (*)[1])(0x2e4bcU))
#define local_8 (*(char * *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2c727
 */

void recovered_2c727(int param_1)

{
  unsigned char frame[64];

  bool bVar1;
  char *pcVar2;
  
  local_8 = (char *)0x0;
  if (param_1 == 0) {
    recovered_2176e(&DAT_0002d057);
    return;
  }
  bVar1 = recovered_2b32b((int *)param_1,&local_8);
  if (bVar1) {
    pcVar2 = &DAT_0002d057;
    if (local_8 != (char *)0x0) {
      pcVar2 = local_8;
    }
  }
  else {
    pcVar2 = str_0002e4bc;
  }
  recovered_2176e(pcVar2);
  recovered_20aee((int)local_8);
  return;
}

