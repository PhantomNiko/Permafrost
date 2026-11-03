#include "functions.h"
#undef DAT_00082054
#define DAT_00082054 (*(char *)(0x82054U))
#undef str_00048d2f
#define str_00048d2f (*(char (*)[1])(0x48d2fU))
#undef str_00048d4b
#define str_00048d4b (*(char (*)[1])(0x48d4bU))
#undef str_00048d5f
#define str_00048d5f (*(char (*)[1])(0x48d5fU))
#define format (*(char * *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x4360c
 */

int recovered_4360c(uint a,uint b,uint c)

{
  unsigned char frame[84];

  bool bVar1;
  int *piVar2;

  if ((DAT_00082054 != '\0') || (bVar1 = recovered_28aac(), bVar1)) {
    piVar2 = recovered_2b4d9(c);
    if (piVar2 == (int *)0x0) {
      format = str_00048d4b;
    }
    else {
      if (piVar2[0xc] != 0) {
        return CONCAT31((int3)((uint)piVar2 >> 8),1);
      }
      format = str_00048d5f;
    }
  }
  else {
    format = str_00048d2f;
  }
  recovered_30ed3(a,(char *)b,format);
  return 0;
}
