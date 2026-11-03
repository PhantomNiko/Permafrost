#include "functions.h"
#undef DAT_0002f0b4
#define DAT_0002f0b4 (*(uint32_t *)(0x2f0b4U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x207b2
 */

uint * recovered_207b2(int param_1)

{
  unsigned char frame[64];

  uint *puVar1;
  uint uVar2;
  
  if (param_1 != 0) {
    recovered_2072e();
    uVar2 = param_1 + 0xfU & 0xfffffff0;
    for (puVar1 = &DAT_0002f0b4; puVar1 = (uint *)*puVar1, puVar1 != (uint *)0x0;
        puVar1 = puVar1 + 1) {
      if (((char)puVar1[2] == '\x01') && (uVar2 <= *puVar1)) {
        recovered_20805(puVar1,uVar2);
        *(undefined1 *)(puVar1 + 2) = 0;
        return puVar1 + 3;
      }
    }
  }
  return (uint *)0x0;
}

