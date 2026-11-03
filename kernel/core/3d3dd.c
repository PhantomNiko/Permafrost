#include "functions.h"
#undef DAT_00054f20
#define DAT_00054f20 (*(uint *)(0x54f20U))
#undef DAT_00054f24
#define DAT_00054f24 (*(uint32_t *)(0x54f24U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x3d3dd
 */

undefined4 * recovered_3d3dd(char param_1)

{
  unsigned char frame[64];

  undefined4 *puVar1;
  uint uVar2;

  puVar1 = &DAT_00054f24;
  uVar2 = 0;
  while( true ) {
    if (DAT_00054f20 <= uVar2) {
      return (undefined4 *)0x0;
    }
    if ((*(char *)(puVar1 + 1) == param_1) && (puVar1[4] == 0)) break;
    uVar2 = uVar2 + 1;
    puVar1 = puVar1 + 9;
  }
  return puVar1;
}
