#include "functions.h"
#undef DAT_00046380
#define DAT_00046380 (*(uint8_t *)(0x46380U))
#undef DAT_0004ce10
#define DAT_0004ce10 (*(int *)(0x4ce10U))
#undef DAT_0004ce14
#define DAT_0004ce14 (*(int *)(0x4ce14U))
#define local_105 (*(byte (*)[241])(frame + 16))
#define local_14 (*(char * *)(frame + 257))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2be29
 */

undefined4 recovered_2be29(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
               undefined4 param_6)

{
  unsigned char frame[309];

  int iVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;

  if ((((param_1 == 0) || (recovered_2a475(param_1,local_105), local_105[0] == 0)) ||
      (uVar3 = recovered_2a62d(local_105), uVar3 != 0xffffffff)) ||
     (bVar2 = recovered_2a733(DAT_0004ce14 + 1), iVar1 = DAT_0004ce10, !bVar2)) {
    recovered_21203(param_2);
  }
  else {
    iVar4 = DAT_0004ce14 * 0x108;
    local_14 = (char *)(DAT_0004ce10 + iVar4);
    DAT_0004ce14 = DAT_0004ce14 + 1;
    recovered_213af((int)local_14,0,0x108);
    recovered_21de7(local_14,0xf1,&DAT_00046380,local_105);
    *(int *)(iVar1 + 0xf4 + iVar4) = param_2;
    *(undefined4 *)(iVar1 + 0xf8 + iVar4) = param_3;
    *(undefined4 *)(iVar1 + 0xfc + iVar4) = param_4;
    *(undefined4 *)(iVar1 + 0x100 + iVar4) = param_5;
    *(undefined4 *)(iVar1 + 0x104 + iVar4) = param_6;
    uVar3 = recovered_2a7f6(DAT_0004ce14 - 1);
    if ((char)uVar3 != '\0') {
      return CONCAT31((int3)(uVar3 >> 8),1);
    }
    recovered_21203(param_2);
    recovered_213af((int)local_14,0,0x108);
    DAT_0004ce14 = DAT_0004ce14 + -1;
  }
  return 0;
}
