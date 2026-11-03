#include "functions.h"
#undef DAT_00057364
#define DAT_00057364 (*(uint8_t *)(0x57364U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x22a56
 */

uint recovered_22a56(int *param_1)

{
  unsigned char frame[64] = {0};

  bool bVar1;
  int iVar2;
  uint uVar3;

  if ((param_1 != (int *)0x0) && ((char)param_1[0x44] == '\x01')) {
    uVar3 = param_1[0x43];
    if (uVar3 != 0xffffffff) {
      param_1[0x43] = -1;
      return uVar3;
    }
    if (*param_1 == 1) {
      uVar3 = param_1[199];
      if (uVar3 < (uint)param_1[0xc6]) {
LAB_00022af0:
        param_1[199] = uVar3 + 1;
        return (uint)*(byte *)((int)param_1 + uVar3 + 0x116);
      }
      bVar1 = recovered_225c9((int)param_1 + 0x116,0x1fe,&DAT_00057364,0);
      if (bVar1) {
        iVar2 = recovered_214de((int)param_1 + 0x116);
        param_1[0xc6] = iVar2 + 1;
        *(undefined1 *)((int)param_1 + iVar2 + 0x116) = 10;
        *(undefined1 *)((int)param_1 + param_1[0xc6] + 0x116) = 0;
        uVar3 = 0;
        goto LAB_00022af0;
      }
    }
    else {
      uVar3 = param_1[0x42];
      if (uVar3 < (uint)param_1[0x40]) {
        param_1[0x42] = uVar3 + 1;
        return (uint)*(byte *)(param_1[0x3e] + uVar3);
      }
    }
    *(undefined1 *)(param_1 + 0x45) = 1;
  }
  return 0xffffffff;
}
