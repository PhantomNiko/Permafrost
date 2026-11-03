#include "functions.h"
#undef DAT_0004c5f0
#define DAT_0004c5f0 (*(int *)(0x4c5f0U))
#define local_20 (*(uint *)(frame + 16))
#define local_1c (*(int *)(frame + 20))
#define local_14 (*(int *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x29589
 */

uint recovered_29589(uint param_1,uint param_2,byte param_3)

{
  unsigned char frame[80];

  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;

  if (DAT_0004c5f0 == 8) {
    local_1c = 0x80;
    local_20 = 3;
    iVar3 = 0x82;
    uVar4 = 7;
    local_14 = 0x82;
    uVar1 = uVar4;
  }
  else {
    if (DAT_0004c5f0 == 0x10) {
      local_14 = 0x9e;
      uVar1 = 0x3f;
    }
    else {
      if (DAT_0004c5f0 != 0xf) goto LAB_00029680;
      uVar1 = 0x1f;
      local_14 = 0x8e;
    }
    uVar4 = 0x1f;
    iVar3 = 0x8e;
    local_1c = 0x8e;
    local_20 = uVar4;
  }
  iVar2 = (param_1 & 0xff) * uVar4;
  iVar5 = (param_2 & 0xff) * uVar1;
  param_1 = ((iVar2 + iVar3) - (iVar2 + 0x7fU) % 0xff) / uVar4;
  param_2 = ((iVar5 + local_14) - (iVar5 + 0x7fU) % 0xff) / uVar1;
  param_3 = (byte)(((param_3 * local_20 + local_1c) - (param_3 * local_20 + 0x7f) % 0xff) / local_20
                  );
LAB_00029680:
  uVar1 = recovered_296c0(param_1 & 0xff,param_2 & 0xff,param_3);
  return uVar1;
}
