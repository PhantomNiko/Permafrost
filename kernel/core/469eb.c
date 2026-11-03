#include "functions.h"
#undef DAT_0004eeac
#define DAT_0004eeac (*(uint *)(0x4eeacU))
#undef DAT_0004eeb0
#define DAT_0004eeb0 (*(uint32_t *)(0x4eeb0U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x469eb
 */

undefined4 * recovered_469eb(char param_1)

{
  unsigned char frame[64];

  undefined4 *puVar1;
  uint uVar2;

  puVar1 = &DAT_0004eeb0;
  uVar2 = 0;
  while( true ) {
    if (DAT_0004eeac <= uVar2) {
      return (undefined4 *)0x0;
    }
    if ((*(char *)(puVar1 + 1) == param_1) && (puVar1[5] == 0)) break;
    uVar2 = uVar2 + 1;
    puVar1 = puVar1 + 0xd;
  }
  return puVar1;
}
