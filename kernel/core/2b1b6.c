#include "functions.h"
#undef DAT_0004ee14
#define DAT_0004ee14 (*(uint32_t *)(0x4ee14U))
#undef DAT_0004ee28
#define DAT_0004ee28 (*(byte *)(0x4ee28U))
#undef DAT_0004ee2c
#define DAT_0004ee2c (*(uint *)(0x4ee2cU))
#undef DAT_0004ee30
#define DAT_0004ee30 (*(uint32_t *)(0x4ee30U))
#undef DAT_0004ee38
#define DAT_0004ee38 (*(uint *)(0x4ee38U))
#undef DAT_0004ee3c
#define DAT_0004ee3c (*(uint32_t *)(0x4ee3cU))
#undef DAT_0004ee4c
#define DAT_0004ee4c (*(int *)(0x4ee4cU))
#undef DAT_0004ee50
#define DAT_0004ee50 (*(uint32_t *)(0x4ee50U))
#undef DAT_0004ee54
#define DAT_0004ee54 (*(uint32_t *)(0x4ee54U))
#undef DAT_0004ee58
#define DAT_0004ee58 (*(uint32_t *)(0x4ee58U))
#undef DAT_0004ee5c
#define DAT_0004ee5c (*(uint32_t *)(0x4ee5cU))
#undef DAT_0004ee60
#define DAT_0004ee60 (*(uint32_t *)(0x4ee60U))
#undef DAT_0004ee64
#define DAT_0004ee64 (*(int *)(0x4ee64U))
#undef DAT_0004ee68
#define DAT_0004ee68 (*(int *)(0x4ee68U))
#undef DAT_0004ee70
#define DAT_0004ee70 (*(uint *)(0x4ee70U))
#undef DAT_0004ee74
#define DAT_0004ee74 (*(uint *)(0x4ee74U))
#undef DAT_0004ee78
#define DAT_0004ee78 (*(char *)(0x4ee78U))
#define local_45c (*(undefined1 (*)[512])(frame + 16))
#define local_25c (*(undefined1 (*)[512])(frame + 528))
#define local_5c (*(undefined1 (*)[8])(frame + 1040))
#define local_54 (*(undefined4 *)(frame + 1048))
#define local_50 (*(uint *)(frame + 1052))
#define local_4c (*(undefined4 *)(frame + 1056))
#define local_48 (*(int *)(frame + 1060))
#define local_44 (*(undefined4 *)(frame + 1064))
#define local_40 (*(undefined4 *)(frame + 1068))
#define local_3c (*(undefined4 *)(frame + 1072))
#define local_38 (*(undefined4 *)(frame + 1076))
#define local_34 (*(undefined4 *)(frame + 1080))
#define local_30 (*(undefined4 *)(frame + 1084))
#define local_2c (*(undefined4 *)(frame + 1088))
#define local_18 (*(uint *)(frame + 1108))
#define local_14 (*(uint *)(frame + 1112))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2b1b6
 */

undefined4 recovered_2b1b6(void)

{
  unsigned char frame[1164];

  bool bVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined3 extraout_var = 0;
  uint uVar5;
  uint uVar6;

  if (DAT_0004ee64 == 0) {
    return 0;
  }
  if (DAT_0004ee78 == '\x01') {
    local_14 = DAT_0004ee68 << 2;
    uVar2 = DAT_0004ee70 / (DAT_0004ee2c >> 2);
    local_18 = DAT_0004ee74 / (DAT_0004ee2c >> 2);
    do {
      if (local_18 < uVar2) {
        DAT_0004ee78 = '\0';
        goto LAB_0002b291;
      }
      uVar6 = DAT_0004ee2c * uVar2;
      recovered_213af((int)local_45c,0,0x200);
      uVar3 = local_14 - uVar6;
      if (uVar6 <= local_14 && uVar3 != 0) {
        uVar5 = DAT_0004ee2c;
        if (uVar3 < DAT_0004ee2c) {
          uVar5 = uVar3;
        }
        recovered_21348((int)local_45c,uVar6 + DAT_0004ee64,uVar5);
      }
      bVar1 = recovered_2b07d(DAT_0004ee28,DAT_0004ee38 + uVar2 + DAT_0004ee4c,(int)local_45c,
                              DAT_0004ee2c);
      uVar2 = uVar2 + 1;
    } while (bVar1);
    uVar4 = 0;
  }
  else {
LAB_0002b291:
    recovered_213af((int)local_25c,0,0x200);
    recovered_213af((int)local_5c,0,0x44);
    recovered_21348((int)local_5c,0x48508,8);
    local_54 = 1;
    local_50 = DAT_0004ee2c;
    local_4c = DAT_0004ee30;
    local_48 = DAT_0004ee4c;
    local_44 = DAT_0004ee50;
    local_40 = DAT_0004ee54;
    local_3c = DAT_0004ee58;
    local_38 = DAT_0004ee5c;
    local_34 = DAT_0004ee60;
    local_30 = DAT_0004ee14;
    local_2c = DAT_0004ee3c;
    recovered_21348((int)local_25c,(int)local_5c,0x44);
    bVar1 = recovered_2b07d(DAT_0004ee28,DAT_0004ee38,(int)local_25c,0x200);
    uVar4 = CONCAT31(extraout_var,bVar1);
  }
  return uVar4;
}
