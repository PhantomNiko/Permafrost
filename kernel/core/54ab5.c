#include "functions.h"
#undef DAT_0005e938
#define DAT_0005e938 (*(uint *)(0x5e938U))
#undef DAT_0005e93c
#define DAT_0005e93c (*(uint32_t *)(0x5e93cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x54ab5
 */

undefined4 * recovered_54ab5(char param_1)

{
  unsigned char frame[64] = {0};

  undefined4 *puVar1;
  uint uVar2;

  puVar1 = &DAT_0005e93c;
  uVar2 = 0;
  while( true ) {
    if (DAT_0005e938 <= uVar2) {
      return (undefined4 *)0x0;
    }
    if ((*(char *)(puVar1 + 1) == param_1) && (puVar1[5] == 0)) break;
    uVar2 = uVar2 + 1;
    puVar1 = puVar1 + 0xd;
  }
  return puVar1;
}
