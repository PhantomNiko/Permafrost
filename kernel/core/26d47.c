#include "functions.h"
#undef DAT_00044df0
#define DAT_00044df0 (*(uint8_t *)(0x44df0U))
#undef DAT_00054df0
#define DAT_00054df0 (*(uint *)(0x54df0U))
#define local_101 (*(undefined1 (*)[241])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x26d47
 */

uint recovered_26d47(char *path)

{
  unsigned char frame[305];

  int iVar1;
  uint uVar2;
  undefined1 *puVar3;

  recovered_26d9b((int)path,local_101);
  uVar2 = 0;
  puVar3 = &DAT_00044df0;
  while( true ) {
    if (DAT_00054df0 <= uVar2) {
      return 0xffffffff;
    }
    iVar1 = recovered_2100f((int)puVar3,(int)local_101);
    if (iVar1 == 0) break;
    uVar2 = uVar2 + 1;
    puVar3 = puVar3 + 0x100;
  }
  return uVar2;
}
