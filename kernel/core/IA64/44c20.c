#include "functions.h"
#undef DAT_0004ceac
#define DAT_0004ceac (*(uint *)(0x4ceacU))
#undef DAT_0004ceb0
#define DAT_0004ceb0 (*(uint32_t *)(0x4ceb0U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x44c20
 */

undefined4 * recovered_44c20(char param_1)

{
  unsigned char frame[64];

  undefined4 *puVar1;
  uint uVar2;

  puVar1 = &DAT_0004ceb0;
  uVar2 = 0;
  while( true ) {
    if (DAT_0004ceac <= uVar2) {
      return (undefined4 *)0x0;
    }
    if ((*(char *)(puVar1 + 1) == param_1) && (puVar1[5] == 0)) break;
    uVar2 = uVar2 + 1;
    puVar1 = puVar1 + 0xd;
  }
  return puVar1;
}
