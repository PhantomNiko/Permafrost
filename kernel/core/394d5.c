#include "functions.h"
#undef DAT_0005e6a0
#define DAT_0005e6a0 (*(uint32_t *)(0x5e6a0U))
#undef DAT_0005e6b4
#define DAT_0005e6b4 (*(byte *)(0x5e6b4U))
#undef DAT_0005e6b8
#define DAT_0005e6b8 (*(uint *)(0x5e6b8U))
#undef DAT_0005e6bc
#define DAT_0005e6bc (*(uint32_t *)(0x5e6bcU))
#undef DAT_0005e6c4
#define DAT_0005e6c4 (*(uint *)(0x5e6c4U))
#undef DAT_0005e6c8
#define DAT_0005e6c8 (*(uint32_t *)(0x5e6c8U))
#undef DAT_0005e6d8
#define DAT_0005e6d8 (*(int *)(0x5e6d8U))
#undef DAT_0005e6dc
#define DAT_0005e6dc (*(uint32_t *)(0x5e6dcU))
#undef DAT_0005e6e0
#define DAT_0005e6e0 (*(uint32_t *)(0x5e6e0U))
#undef DAT_0005e6e4
#define DAT_0005e6e4 (*(uint32_t *)(0x5e6e4U))
#undef DAT_0005e6e8
#define DAT_0005e6e8 (*(uint32_t *)(0x5e6e8U))
#undef DAT_0005e6ec
#define DAT_0005e6ec (*(uint32_t *)(0x5e6ecU))
#undef DAT_0005e6f0
#define DAT_0005e6f0 (*(int *)(0x5e6f0U))
#undef DAT_0005e6f4
#define DAT_0005e6f4 (*(int *)(0x5e6f4U))
#undef DAT_0005e6fc
#define DAT_0005e6fc (*(uint *)(0x5e6fcU))
#undef DAT_0005e700
#define DAT_0005e700 (*(uint *)(0x5e700U))
#undef DAT_0005e704
#define DAT_0005e704 (*(char *)(0x5e704U))
#define local_44 (*(undefined4 *)(frame + 1064))
#define local_40 (*(undefined4 *)(frame + 1068))
#define local_3c (*(undefined4 *)(frame + 1072))
#define local_38 (*(undefined4 *)(frame + 1076))
#define local_34 (*(undefined4 *)(frame + 1080))
#define local_30 (*(undefined4 *)(frame + 1084))
#define local_2c (*(undefined4 *)(frame + 1088))
#define local_18 (*(uint *)(frame + 1108))
#define local_14 (*(uint *)(frame + 1112))
#define local_45c (*(undefined1 (*)[512])(frame + 16))
#define local_25c (*(undefined1 (*)[512])(frame + 528))
#define local_5c (*(undefined1 (*)[8])(frame + 1040))
#define local_54 (*(undefined4 *)(frame + 1048))
#define local_50 (*(uint *)(frame + 1052))
#define local_4c (*(undefined4 *)(frame + 1056))
#define local_48 (*(int *)(frame + 1060))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x394d5
 */

undefined4 recovered_394d5(void)

{
  unsigned char frame[1164] = {0};

  bool bVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined3 extraout_var = 0;
  uint uVar5;
  uint uVar6;

  if (DAT_0005e6f0 == 0) {
    return 0;
  }
  if (DAT_0005e704 == '\x01') {
    local_14 = DAT_0005e6f4 << 2;
    uVar2 = DAT_0005e6fc / (DAT_0005e6b8 >> 2);
    local_18 = DAT_0005e700 / (DAT_0005e6b8 >> 2);
    do {
      if (local_18 < uVar2) {
        DAT_0005e704 = '\0';
        goto LAB_000395b0;
      }
      uVar6 = DAT_0005e6b8 * uVar2;
      recovered_213af((int)local_45c,0,0x200);
      uVar3 = local_14 - uVar6;
      if (uVar6 <= local_14 && uVar3 != 0) {
        uVar5 = DAT_0005e6b8;
        if (uVar3 < DAT_0005e6b8) {
          uVar5 = uVar3;
        }
        recovered_21348((int)local_45c,uVar6 + DAT_0005e6f0,uVar5);
      }
      bVar1 = recovered_393d2((uint)DAT_0005e6b4,DAT_0005e6c4 + uVar2 + DAT_0005e6d8,(int)local_45c,
                              DAT_0005e6b8);
      uVar2 = uVar2 + 1;
    } while (bVar1);
    uVar4 = 0;
  }
  else {
LAB_000395b0:
    recovered_213af((int)local_25c,0,0x200);
    recovered_213af((int)local_5c,0,0x44);
    recovered_21348((int)local_5c,0x57350,8);
    local_54 = 1;
    local_50 = DAT_0005e6b8;
    local_4c = DAT_0005e6bc;
    local_48 = DAT_0005e6d8;
    local_44 = DAT_0005e6dc;
    local_40 = DAT_0005e6e0;
    local_3c = DAT_0005e6e4;
    local_38 = DAT_0005e6e8;
    local_34 = DAT_0005e6ec;
    local_30 = DAT_0005e6a0;
    local_2c = DAT_0005e6c8;
    recovered_21348((int)local_25c,(int)local_5c,0x44);
    bVar1 = recovered_393d2((uint)DAT_0005e6b4,DAT_0005e6c4,(int)local_25c,0x200);
    uVar4 = CONCAT31(extraout_var,bVar1);
  }
  return uVar4;
}
