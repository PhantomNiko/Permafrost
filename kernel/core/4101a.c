#include "functions.h"
#undef DAT_0004808c
#define DAT_0004808c (*(uint *)(0x4808cU))
#undef DAT_00048090
#define DAT_00048090 (*(uint32_t *)(0x48090U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x4101a
 */

undefined4 * recovered_4101a(char param_1)

{
  unsigned char frame[64];

  undefined4 *puVar1;
  uint uVar2;

  puVar1 = &DAT_00048090;
  uVar2 = 0;
  while( true ) {
    if (DAT_0004808c <= uVar2) {
      return (undefined4 *)0x0;
    }
    if ((*(char *)(puVar1 + 1) == param_1) && (puVar1[5] == 0)) break;
    uVar2 = uVar2 + 1;
    puVar1 = puVar1 + 0xd;
  }
  return puVar1;
}
