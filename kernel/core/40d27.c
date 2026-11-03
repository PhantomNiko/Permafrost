#include "functions.h"
#undef str_0004560d
#define str_0004560d (*(char (*)[1])(0x4560dU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x40d27
 */

void recovered_40d27(int param_1,undefined1 *param_2)

{
  unsigned char frame[64];

  byte bVar1;
  uint uVar2;
  int iVar3;

  if ((param_2 != (undefined1 *)0x0) && (*param_2 = 0, param_1 != 0)) {
    uVar2 = 0;
    for (iVar3 = 0; iVar3 != 0xc; iVar3 = iVar3 + 1) {
      bVar1 = *(byte *)(param_1 + iVar3);
      if ((bVar1 == 0) || (0x3f < uVar2 + 1)) break;
      if (bVar1 == 0x7f || bVar1 < 0x20) {
        if (0x3f < uVar2 + 4) break;
        recovered_219e1(param_2 + uVar2,0x40 - uVar2,str_0004560d,(uint)bVar1);
        uVar2 = uVar2 + 4;
      }
      else {
        param_2[uVar2] = bVar1;
        uVar2 = uVar2 + 1;
      }
    }
    param_2[uVar2] = 0;
  }
  return;
}
