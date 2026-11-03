#include "functions.h"
#undef DAT_0004ee10
#define DAT_0004ee10 (*(int *)(0x4ee10U))
#undef DAT_0004ee14
#define DAT_0004ee14 (*(int *)(0x4ee14U))
#undef DAT_0004ee44
#define DAT_0004ee44 (*(uint8_t *)(0x4ee44U))
#undef DAT_0004ee48
#define DAT_0004ee48 (*(int *)(0x4ee48U))
#undef DAT_0004ee90
#define DAT_0004ee90 (*(char *)(0x4ee90U))
#define local_20d (*(byte (*)[241])(frame + 16))
#define local_11c (*(undefined1 (*)[244])(frame + 257))
#define local_28 (*(int *)(frame + 501))
#define local_24 (*(undefined4 *)(frame + 505))
#define local_20 (*(undefined4 *)(frame + 509))
#define local_1c (*(uint *)(frame + 513))
#define local_18 (*(int *)(frame + 517))
#define local_14 (*(uint *)(frame + 521))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x22b3d
 */

undefined4 recovered_22b3d(int param_1)

{
  unsigned char frame[573];

  uint uVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;

  if ((((param_1 != 0) && (DAT_0004ee90 != '\0')) && (((byte)DAT_0004ee44 & 1) == 0)) &&
     ((recovered_2a46f(param_1,local_20d), local_20d[0] != 0 &&
      (uVar3 = recovered_2a627(local_20d), iVar6 = DAT_0004ee10, uVar3 != 0xffffffff)))) {
    iVar5 = uVar3 * 0x108;
    local_14 = DAT_0004ee10 + iVar5;
    recovered_21348((int)local_11c,local_14,0xf4);
    uVar1 = *(uint *)(iVar6 + 0xfc + iVar5);
    if ((uVar1 & 1) == 0) {
      local_18 = *(int *)(iVar6 + 0xf4 + iVar5);
      local_20 = *(undefined4 *)(iVar6 + 0xf8 + iVar5);
      local_1c = *(uint *)(iVar6 + 0x100 + iVar5);
      local_24 = *(undefined4 *)(iVar6 + 0x104 + iVar5);
      iVar7 = ~uVar3 + DAT_0004ee14;
      local_28 = iVar5;
      if (iVar7 != 0) {
        recovered_21369(local_14,local_14 + 0x108,iVar7 * 0x108);
        iVar6 = DAT_0004ee10;
      }
      DAT_0004ee14 = DAT_0004ee14 + -1;
      recovered_213af(DAT_0004ee14 * 0x108 + iVar6,0,0x108);
      if (DAT_0004ee48 == 2) {
        recovered_2afc5(local_1c);
        uVar4 = recovered_2aec6();
        cVar2 = (char)uVar4;
      }
      else {
        cVar2 = recovered_233e2();
      }
      iVar6 = local_28;
      if (cVar2 == '\0') {
        local_14 = uVar1;
        if (iVar7 != 0) {
          recovered_21369(DAT_0004ee10 + local_28 + 0x108,DAT_0004ee10 + local_28,iVar7 * 0x108);
        }
        iVar5 = DAT_0004ee10;
        recovered_21348(DAT_0004ee10 + iVar6,(int)local_11c,0xf4);
        *(int *)(iVar5 + 0xf4 + iVar6) = local_18;
        *(undefined4 *)(iVar5 + 0xf8 + iVar6) = local_20;
        *(uint *)(iVar5 + 0xfc + iVar6) = local_14;
        *(uint *)(iVar5 + 0x100 + iVar6) = local_1c;
        *(undefined4 *)(iVar5 + 0x104 + iVar6) = local_24;
        DAT_0004ee14 = DAT_0004ee14 + 1;
        recovered_2a851();
      }
      else {
        uVar3 = recovered_2a851();
        if ((char)uVar3 != '\0') {
          uVar4 = CONCAT31((int3)(uVar1 >> 8),1);
          if (local_18 == 0) {
            return uVar4;
          }
          recovered_21203(local_18);
          return uVar4;
        }
      }
    }
  }
  return 0;
}
