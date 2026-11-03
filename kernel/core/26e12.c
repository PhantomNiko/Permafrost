#include "functions.h"
#undef DAT_00056bdc
#define DAT_00056bdc (*(uint8_t *)(0x56bdcU))
#undef DAT_00056c54
#define DAT_00056c54 (*(uint8_t *)(0x56c54U))
#define local_20 (*(uint *)(frame + 16))
#define local_1c (*(uint *)(frame + 20))
#define local_18 (*(int * *)(frame + 24))
#define local_14 (*(uint *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x26e12
 */

undefined4 recovered_26e12(uint param_1,int param_2,int param_3,int *param_4)

{
  unsigned char frame[80] = {0};

  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  bool bVar5;

  local_18 = (int *)param_1;
  while( true ) {
    while( true ) {
      local_20 = 0;
      uVar1 = recovered_26fb2(param_1,param_2,&local_20);
      if ((char)uVar1 == '\0') {
        return 0;
      }
      if (0xff < local_20) break;
      local_14 = CONCAT31(PF_PART3(local_14, 1),(char)local_20);
      recovered_2ccb8(param_4,(undefined1 *)&local_14);
    }
    if (local_20 == 0x100) {
      return 0x101;
    }
    if (0x11d < local_20) {
      return 0;
    }
    iVar3 = *(int *)(local_20 * 4 + 0x566f0);
    uVar1 = *(uint *)(local_20 * 4 + 0x56764);
    if (uVar1 != 0) {
      local_14 = 0;
      uVar2 = recovered_26d70((int *)param_1,uVar1,&local_14);
      if ((char)uVar2 == '\0') {
        return 0;
      }
      iVar3 = iVar3 + local_14;
    }
    local_14 = 0;
    uVar1 = recovered_26fb2(param_1,param_3,&local_14);
    if ((char)uVar1 == '\0') break;
    if (0x1d < local_14) {
      return 0;
    }
    iVar4 = *(int *)(&DAT_00056bdc + local_14 * 4);
    if (*(uint *)(&DAT_00056c54 + local_14 * 4) != 0) {
      local_1c = 0;
      uVar2 = recovered_26d70(local_18,*(uint *)(&DAT_00056c54 + local_14 * 4),&local_1c);
      if ((char)uVar2 == '\0') {
        return 0;
      }
      iVar4 = iVar4 + local_1c;
    }
    if ((uint)param_4[1] <= iVar4 - 1U) {
      return 0;
    }
    while (bVar5 = iVar3 != 0, iVar3 = iVar3 + -1, bVar5) {
      recovered_2b424(param_4,(undefined1 *)((param_4[1] - iVar4) + *param_4));
    }
    param_1 = (uint)local_18;
  }
  return 0;
}
