#include "functions.h"
#undef DAT_000938e0
#define DAT_000938e0 (*(char *)(0x938e0U))
#undef str_0005a0f4
#define str_0005a0f4 (*(char (*)[1])(0x5a0f4U))
#undef str_0005a110
#define str_0005a110 (*(char (*)[1])(0x5a110U))
#undef str_0005a124
#define str_0005a124 (*(char (*)[1])(0x5a124U))
#define format (*(char * *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x53738
 */

int recovered_53738(uint a,uint b,uint c)

{
  unsigned char frame[84] = {0};

  bool bVar1;
  int *piVar2;

  if ((DAT_000938e0 != '\0') || (bVar1 = recovered_365c7(), bVar1)) {
    piVar2 = recovered_396e8(c);
    if (piVar2 == (int *)0x0) {
      format = str_0005a110;
    }
    else {
      if (piVar2[0xc] != 0) {
        return CONCAT31((int3)((uint)piVar2 >> 8),1);
      }
      format = str_0005a124;
    }
  }
  else {
    format = str_0005a0f4;
  }
  recovered_3f39b(a,(char *)b,format);
  return 0;
}
