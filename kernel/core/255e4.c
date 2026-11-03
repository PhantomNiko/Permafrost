#include "functions.h"
#undef DAT_0002f0bc
#define DAT_0002f0bc (*(uint8_t *)(0x2f0bcU))
#undef DAT_0003f0bc
#define DAT_0003f0bc (*(uint *)(0x3f0bcU))
#define local_101 (*(undefined1 (*)[241])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x255e4
 */

uint recovered_255e4(char *path)

{
  unsigned char frame[305];

  int iVar1;
  uint uVar2;
  undefined *puVar3;
  
  recovered_25240((int)path,local_101);
  uVar2 = 0;
  puVar3 = &DAT_0002f0bc;
  while( true ) {
    if (DAT_0003f0bc <= uVar2) {
      return 0xffffffff;
    }
    iVar1 = recovered_20cea((int)puVar3,(int)local_101);
    if (iVar1 == 0) break;
    uVar2 = uVar2 + 1;
    puVar3 = puVar3 + 0x100;
  }
  return uVar2;
}

