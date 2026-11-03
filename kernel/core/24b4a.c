#include "functions.h"
#undef DAT_00020200
#define DAT_00020200 (*(uint8_t *)(0x20200U))
#undef DAT_0002ca9c
#define DAT_0002ca9c (*(uint8_t *)(0x2ca9cU))
#undef DAT_0002cb77
#define DAT_0002cb77 (*(uint8_t *)(0x2cb77U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x24b4a
 */

void recovered_24b4a(int param_1,undefined1 *param_2,undefined1 param_3)

{
  unsigned char frame[64];

  uint uVar1;
  undefined1 *puVar2;
  
  uVar1 = *(uint *)(&DAT_00020200 + param_1);
  if (uVar1 < 0x200) {
    *(uint *)(&DAT_00020200 + param_1) = uVar1 + 1;
    puVar2 = &DAT_0002ca9c;
    if (param_2 != (undefined1 *)0x0) {
      puVar2 = param_2;
    }
    recovered_216bc((char *)(param_1 + uVar1 * 0x101),0x100,&DAT_0002cb77,puVar2);
    *(undefined1 *)(param_1 + 0x100 + uVar1 * 0x101) = param_3;
  }
  return;
}

