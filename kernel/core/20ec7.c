#include "functions.h"
#undef DAT_0005d7bc
#define DAT_0005d7bc (*(uint32_t *)(0x5d7bcU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x20ec7
 */

uint * recovered_20ec7(int param_1)

{
  unsigned char frame[64] = {0};

  uint *puVar1;
  uint uVar2;

  if (param_1 != 0) {
    recovered_20c94();
    uVar2 = param_1 + 0xfU & 0xfffffff0;
    for (puVar1 = &DAT_0005d7bc; puVar1 = (uint *)*puVar1, puVar1 != (uint *)0x0;
        puVar1 = puVar1 + 1) {
      if (((char)puVar1[2] == '\x01') && (uVar2 <= *puVar1)) {
        recovered_20f1a(puVar1,uVar2);
        *(undefined1 *)(puVar1 + 2) = 0;
        return puVar1 + 3;
      }
    }
  }
  return (uint *)0x0;
}
