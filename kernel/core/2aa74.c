#include "functions.h"
#undef DAT_00042730
#define DAT_00042730 (*(uint8_t *)(0x42730U))
#undef DAT_00047dfc
#define DAT_00047dfc (*(int *)(0x47dfcU))
#undef DAT_00047e00
#define DAT_00047e00 (*(int *)(0x47e00U))
#define local_105 (*(byte (*)[241])(frame + 16))
#define local_14 (*(char * *)(frame + 257))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2aa74
 */

undefined4 recovered_2aa74(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
               undefined4 param_6)

{
  unsigned char frame[309];

  int iVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;

  if ((((param_1 == 0) || (recovered_29392(param_1,local_105), local_105[0] == 0)) ||
      (uVar3 = recovered_2954a(local_105), uVar3 != 0xffffffff)) ||
     (bVar2 = recovered_29650(DAT_00047e00 + 1), iVar1 = DAT_00047dfc, !bVar2)) {
    recovered_20dfd(param_2);
  }
  else {
    iVar4 = DAT_00047e00 * 0x108;
    local_14 = (char *)(DAT_00047dfc + iVar4);
    DAT_00047e00 = DAT_00047e00 + 1;
    recovered_20fa9((int)local_14,0,0x108);
    recovered_219e1(local_14,0xf1,&DAT_00042730,local_105);
    *(int *)(iVar1 + 0xf4 + iVar4) = param_2;
    *(undefined4 *)(iVar1 + 0xf8 + iVar4) = param_3;
    *(undefined4 *)(iVar1 + 0xfc + iVar4) = param_4;
    *(undefined4 *)(iVar1 + 0x100 + iVar4) = param_5;
    *(undefined4 *)(iVar1 + 0x104 + iVar4) = param_6;
    uVar3 = recovered_29713(DAT_00047e00 - 1);
    if ((char)uVar3 != '\0') {
      return CONCAT31((int3)(uVar3 >> 8),1);
    }
    recovered_20dfd(param_2);
    recovered_20fa9((int)local_14,0,0x108);
    DAT_00047e00 = DAT_00047e00 + -1;
  }
  return 0;
}
