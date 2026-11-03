#include "functions.h"
#undef DAT_00047dfc
#define DAT_00047dfc (*(int *)(0x47dfcU))
#undef DAT_00047e00
#define DAT_00047e00 (*(int *)(0x47e00U))
#undef DAT_00047e30
#define DAT_00047e30 (*(uint8_t *)(0x47e30U))
#undef DAT_00047e34
#define DAT_00047e34 (*(int *)(0x47e34U))
#undef DAT_00047e7c
#define DAT_00047e7c (*(char *)(0x47e7cU))
#define local_20d (*(byte (*)[241])(frame + 16))
#define local_11c (*(undefined1 (*)[244])(frame + 257))
#define local_28 (*(int *)(frame + 501))
#define local_24 (*(undefined4 *)(frame + 505))
#define local_20 (*(undefined4 *)(frame + 509))
#define local_1c (*(uint *)(frame + 513))
#define local_18 (*(int *)(frame + 517))
#define local_14 (*(uint *)(frame + 521))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x22737
 */

undefined4 recovered_22737(int param_1)

{
  unsigned char frame[573];

  uint uVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;

  if ((((param_1 != 0) && (DAT_00047e7c != '\0')) && (((byte)DAT_00047e30 & 1) == 0)) &&
     ((recovered_29392(param_1,local_20d), local_20d[0] != 0 &&
      (uVar3 = recovered_2954a(local_20d), iVar6 = DAT_00047dfc, uVar3 != 0xffffffff)))) {
    iVar5 = uVar3 * 0x108;
    local_14 = DAT_00047dfc + iVar5;
    recovered_20f42((int)local_11c,local_14,0xf4);
    uVar1 = *(uint *)(iVar6 + 0xfc + iVar5);
    if ((uVar1 & 1) == 0) {
      local_18 = *(int *)(iVar6 + 0xf4 + iVar5);
      local_20 = *(undefined4 *)(iVar6 + 0xf8 + iVar5);
      local_1c = *(uint *)(iVar6 + 0x100 + iVar5);
      local_24 = *(undefined4 *)(iVar6 + 0x104 + iVar5);
      iVar7 = ~uVar3 + DAT_00047e00;
      local_28 = iVar5;
      if (iVar7 != 0) {
        recovered_20f63(local_14,local_14 + 0x108,iVar7 * 0x108);
        iVar6 = DAT_00047dfc;
      }
      DAT_00047e00 = DAT_00047e00 + -1;
      recovered_20fa9(DAT_00047e00 * 0x108 + iVar6,0,0x108);
      if (DAT_00047e34 == 2) {
        recovered_29ee8(local_1c);
        uVar4 = recovered_29de9();
        cVar2 = (char)uVar4;
      }
      else {
        cVar2 = recovered_22ff4();
      }
      iVar6 = local_28;
      if (cVar2 == '\0') {
        local_14 = uVar1;
        if (iVar7 != 0) {
          recovered_20f63(DAT_00047dfc + local_28 + 0x108,DAT_00047dfc + local_28,iVar7 * 0x108);
        }
        iVar5 = DAT_00047dfc;
        recovered_20f42(DAT_00047dfc + iVar6,(int)local_11c,0xf4);
        *(int *)(iVar5 + 0xf4 + iVar6) = local_18;
        *(undefined4 *)(iVar5 + 0xf8 + iVar6) = local_20;
        *(uint *)(iVar5 + 0xfc + iVar6) = local_14;
        *(uint *)(iVar5 + 0x100 + iVar6) = local_1c;
        *(undefined4 *)(iVar5 + 0x104 + iVar6) = local_24;
        DAT_00047e00 = DAT_00047e00 + 1;
        recovered_29774();
      }
      else {
        uVar3 = recovered_29774();
        if ((char)uVar3 != '\0') {
          uVar4 = CONCAT31((int3)(uVar1 >> 8),1);
          if (local_18 == 0) {
            return uVar4;
          }
          recovered_20dfd(local_18);
          return uVar4;
        }
      }
    }
  }
  return 0;
}
