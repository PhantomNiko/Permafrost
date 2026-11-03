#include "functions.h"
#undef DAT_00084054
#define DAT_00084054 (*(char *)(0x84054U))
#undef str_0004b089
#define str_0004b089 (*(char (*)[1])(0x4b089U))
#undef str_0004b0a5
#define str_0004b0a5 (*(char (*)[1])(0x4b0a5U))
#undef str_0004b0b9
#define str_0004b0b9 (*(char (*)[1])(0x4b0b9U))
#define format (*(char * *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x45460
 */

int recovered_45460(uint a,uint b,uint c)

{
  unsigned char frame[84];

  bool bVar1;
  int *piVar2;

  if ((DAT_00084054 != '\0') || (bVar1 = recovered_28aa6(), bVar1)) {
    piVar2 = recovered_2b4d3(c);
    if (piVar2 == (int *)0x0) {
      format = str_0004b0a5;
    }
    else {
      if (piVar2[0xc] != 0) {
        return CONCAT31((int3)((uint)piVar2 >> 8),1);
      }
      format = str_0004b0b9;
    }
  }
  else {
    format = str_0004b089;
  }
  recovered_310b6(a,(char *)b,format);
  return 0;
}
