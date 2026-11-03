#include "functions.h"
#undef DAT_0005e69c
#define DAT_0005e69c (*(int *)(0x5e69cU))
#undef DAT_0005e6a0
#define DAT_0005e6a0 (*(int *)(0x5e6a0U))
#undef DAT_0005e6d0
#define DAT_0005e6d0 (*(uint8_t *)(0x5e6d0U))
#undef DAT_0005e6d4
#define DAT_0005e6d4 (*(int *)(0x5e6d4U))
#undef DAT_0005e71c
#define DAT_0005e71c (*(char *)(0x5e71cU))
#define local_211 (*(byte (*)[241])(frame + 16))
#define local_120 (*(undefined1 (*)[244])(frame + 257))
#define local_2c (*(uint *)(frame + 501))
#define local_28 (*(uint *)(frame + 505))
#define local_24 (*(undefined4 *)(frame + 509))
#define local_20 (*(undefined4 *)(frame + 513))
#define local_1c (*(undefined4 *)(frame + 517))
#define local_18 (*(uint *)(frame + 521))
#define local_14 (*(int *)(frame + 525))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2fe2b
 */

undefined4 recovered_2fe2b(int param_1)

{
  unsigned char frame[577] = {0};

  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;

  if ((((param_1 != 0) && (DAT_0005e71c != '\0')) && (((byte)DAT_0005e6d0 & 1) == 0)) &&
     ((recovered_37f88(param_1,local_211), local_211[0] != 0 &&
      (uVar2 = recovered_38140(local_211), iVar5 = DAT_0005e69c, uVar2 != 0xffffffff)))) {
    iVar4 = uVar2 * 0x10c;
    local_2c = DAT_0005e69c + iVar4;
    recovered_21348((int)local_120,local_2c,0xf4);
    local_28 = *(uint *)(iVar5 + 0xfc + iVar4);
    if ((local_28 & 1) == 0) {
      local_14 = *(int *)(iVar5 + 0xf4 + iVar4);
      local_1c = *(undefined4 *)(iVar5 + 0xf8 + iVar4);
      local_18 = *(uint *)(iVar5 + 0x100 + iVar4);
      local_20 = *(undefined4 *)(iVar5 + 0x108 + iVar4);
      local_24 = *(undefined4 *)(iVar5 + 0x104 + iVar4);
      iVar6 = ~uVar2 + DAT_0005e6a0;
      if (iVar6 != 0) {
        recovered_21369(local_2c,local_2c + 0x10c,iVar6 * 0x10c);
        iVar5 = DAT_0005e69c;
      }
      DAT_0005e6a0 = DAT_0005e6a0 + -1;
      recovered_213af(DAT_0005e6a0 * 0x10c + iVar5,0,0x10c);
      if (DAT_0005e6d4 == 2) {
        recovered_3931a(local_18);
        uVar3 = recovered_3921b();
        cVar1 = (char)uVar3;
      }
      else {
        cVar1 = recovered_30806();
      }
      if (cVar1 == '\0') {
        if (iVar6 != 0) {
          recovered_21369(DAT_0005e69c + iVar4 + 0x10c,DAT_0005e69c + iVar4,iVar6 * 0x10c);
        }
        iVar5 = DAT_0005e69c;
        recovered_21348(DAT_0005e69c + iVar4,(int)local_120,0xf4);
        *(int *)(iVar5 + 0xf4 + iVar4) = local_14;
        *(undefined4 *)(iVar5 + 0xf8 + iVar4) = local_1c;
        *(uint *)(iVar5 + 0xfc + iVar4) = local_28;
        *(uint *)(iVar5 + 0x100 + iVar4) = local_18;
        *(undefined4 *)(iVar5 + 0x108 + iVar4) = local_20;
        *(undefined4 *)(iVar5 + 0x104 + iVar4) = local_24;
        DAT_0005e6a0 = DAT_0005e6a0 + 1;
        recovered_38ba6();
      }
      else {
        uVar2 = recovered_38ba6();
        if ((char)uVar2 != '\0') {
          uVar3 = CONCAT31((int3)((uint)iVar4 >> 8),1);
          if (local_14 == 0) {
            return uVar3;
          }
          recovered_21203(local_14);
          return uVar3;
        }
      }
    }
  }
  return 0;
}
