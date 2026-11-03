#include "functions.h"
#undef DAT_00082054
#define DAT_00082054 (*(char *)(0x82054U))
#undef str_00048d0d
#define str_00048d0d (*(char (*)[1])(0x48d0dU))
#undef str_00048d29
#define str_00048d29 (*(char (*)[1])(0x48d29U))
#undef str_00048d3d
#define str_00048d3d (*(char (*)[1])(0x48d3dU))
#define format (*(char * *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x43627
 */

int recovered_43627(uint a,uint b,uint c)

{
  unsigned char frame[84];

  bool bVar1;
  int *piVar2;

  if ((DAT_00082054 != '\0') || (bVar1 = recovered_28ac0(), bVar1)) {
    piVar2 = recovered_2b54f(c);
    if (piVar2 == (int *)0x0) {
      format = str_00048d29;
    }
    else {
      if (piVar2[0xc] != 0) {
        return CONCAT31((int3)((uint)piVar2 >> 8),1);
      }
      format = str_00048d3d;
    }
  }
  else {
    format = str_00048d0d;
  }
  recovered_30f0b(a,(char *)b,format);
  return 0;
}
