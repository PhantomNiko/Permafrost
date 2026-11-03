#include "functions.h"
#undef DAT_00020800
#define DAT_00020800 (*(uint8_t *)(0x20800U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2a489
 */

void recovered_2a489(int param_1,int param_2,uint param_3,undefined1 param_4)

{
  unsigned char frame[64];

  int iVar1;
  uint uVar2;

  uVar2 = *(uint *)(&DAT_00020800 + param_1);
  if (uVar2 < 0x200) {
    *(uint *)(&DAT_00020800 + param_1) = uVar2 + 1;
    iVar1 = uVar2 * 0x104 + param_1;
    uVar2 = 0xff;
    if (param_3 < 0xff) {
      uVar2 = param_3;
    }
    if (param_3 != 0) {
      recovered_21348(iVar1,param_2,uVar2);
    }
    *(undefined1 *)(iVar1 + uVar2) = 0;
    *(short *)(iVar1 + 0x100) = (short)uVar2;
    *(undefined1 *)(iVar1 + 0x102) = param_4;
  }
  return;
}
