#include "functions.h"
#undef DAT_000445ec
#define DAT_000445ec (*(uint32_t *)(0x445ecU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x20ac1
 */

uint * recovered_20ac1(int param_1)

{
  unsigned char frame[64];

  uint *puVar1;
  uint uVar2;
  
  if (param_1 != 0) {
    recovered_208b2();
    uVar2 = param_1 + 0xfU & 0xfffffff0;
    for (puVar1 = &DAT_000445ec; puVar1 = (uint *)*puVar1, puVar1 != (uint *)0x0;
        puVar1 = puVar1 + 1) {
      if (((char)puVar1[2] == '\x01') && (uVar2 <= *puVar1)) {
        recovered_20b14(puVar1,uVar2);
        *(undefined1 *)(puVar1 + 2) = 0;
        return puVar1 + 3;
      }
    }
  }
  return (uint *)0x0;
}

