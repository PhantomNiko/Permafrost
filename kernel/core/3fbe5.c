#include "functions.h"
#undef DAT_0007cfd4
#define DAT_0007cfd4 (*(char *)(0x7cfd4U))
#undef str_00044cb8
#define str_00044cb8 (*(char (*)[1])(0x44cb8U))
#undef str_00044cd4
#define str_00044cd4 (*(char (*)[1])(0x44cd4U))
#undef str_00044ce8
#define str_00044ce8 (*(char (*)[1])(0x44ce8U))
#define format (*(char * *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x3fbe5
 */

int recovered_3fbe5(uint a,uint b,uint c)

{
  unsigned char frame[84];

  bool bVar1;
  int *piVar2;

  if ((DAT_0007cfd4 != '\0') || (bVar1 = recovered_27bd3(), bVar1)) {
    piVar2 = recovered_2a2f6(c);
    if (piVar2 == (int *)0x0) {
      format = str_00044cd4;
    }
    else {
      if (piVar2[0xc] != 0) {
        return CONCAT31((int3)((uint)piVar2 >> 8),1);
      }
      format = str_00044ce8;
    }
  }
  else {
    format = str_00044cb8;
  }
  recovered_2f9c3(a,(char *)b,format);
  return 0;
}
