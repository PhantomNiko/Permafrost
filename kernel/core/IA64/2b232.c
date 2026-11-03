#include "functions.h"
#undef DAT_0004ce14
#define DAT_0004ce14 (*(uint32_t *)(0x4ce14U))
#undef DAT_0004ce28
#define DAT_0004ce28 (*(byte *)(0x4ce28U))
#undef DAT_0004ce2c
#define DAT_0004ce2c (*(uint *)(0x4ce2cU))
#undef DAT_0004ce30
#define DAT_0004ce30 (*(uint32_t *)(0x4ce30U))
#undef DAT_0004ce38
#define DAT_0004ce38 (*(uint *)(0x4ce38U))
#undef DAT_0004ce3c
#define DAT_0004ce3c (*(uint32_t *)(0x4ce3cU))
#undef DAT_0004ce4c
#define DAT_0004ce4c (*(int *)(0x4ce4cU))
#undef DAT_0004ce50
#define DAT_0004ce50 (*(uint32_t *)(0x4ce50U))
#undef DAT_0004ce54
#define DAT_0004ce54 (*(uint32_t *)(0x4ce54U))
#undef DAT_0004ce58
#define DAT_0004ce58 (*(uint32_t *)(0x4ce58U))
#undef DAT_0004ce5c
#define DAT_0004ce5c (*(uint32_t *)(0x4ce5cU))
#undef DAT_0004ce60
#define DAT_0004ce60 (*(uint32_t *)(0x4ce60U))
#undef DAT_0004ce64
#define DAT_0004ce64 (*(int *)(0x4ce64U))
#undef DAT_0004ce68
#define DAT_0004ce68 (*(int *)(0x4ce68U))
#undef DAT_0004ce70
#define DAT_0004ce70 (*(uint *)(0x4ce70U))
#undef DAT_0004ce74
#define DAT_0004ce74 (*(uint *)(0x4ce74U))
#undef DAT_0004ce78
#define DAT_0004ce78 (*(char *)(0x4ce78U))
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
#define local_44 (*(undefined4 *)(frame + 1064))
#define local_40 (*(undefined4 *)(frame + 1068))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2b232
 */

undefined4 recovered_2b232(void)

{
  unsigned char frame[1164];

  bool bVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined3 extraout_var = 0;
  uint uVar5;
  uint uVar6;

  if (DAT_0004ce64 == 0) {
    return 0;
  }
  if (DAT_0004ce78 == '\x01') {
    local_14 = DAT_0004ce68 << 2;
    uVar2 = DAT_0004ce70 / (DAT_0004ce2c >> 2);
    local_18 = DAT_0004ce74 / (DAT_0004ce2c >> 2);
    do {
      if (local_18 < uVar2) {
        DAT_0004ce78 = '\0';
        goto LAB_0002b30d;
      }
      uVar6 = DAT_0004ce2c * uVar2;
      recovered_213af((int)local_45c,0,0x200);
      uVar3 = local_14 - uVar6;
      if (uVar6 <= local_14 && uVar3 != 0) {
        uVar5 = DAT_0004ce2c;
        if (uVar3 < DAT_0004ce2c) {
          uVar5 = uVar3;
        }
        recovered_21348((int)local_45c,uVar6 + DAT_0004ce64,uVar5);
      }
      bVar1 = recovered_2b0f9(DAT_0004ce28,DAT_0004ce38 + uVar2 + DAT_0004ce4c,(int)local_45c,
                              DAT_0004ce2c);
      uVar2 = uVar2 + 1;
    } while (bVar1);
    uVar4 = 0;
  }
  else {
LAB_0002b30d:
    recovered_213af((int)local_25c,0,0x200);
    recovered_213af((int)local_5c,0,0x44);
    recovered_21348((int)local_5c,0x46268,8);
    local_54 = 1;
    local_50 = DAT_0004ce2c;
    local_4c = DAT_0004ce30;
    local_48 = DAT_0004ce4c;
    local_44 = DAT_0004ce50;
    local_40 = DAT_0004ce54;
    local_3c = DAT_0004ce58;
    local_38 = DAT_0004ce5c;
    local_34 = DAT_0004ce60;
    local_30 = DAT_0004ce14;
    local_2c = DAT_0004ce3c;
    recovered_21348((int)local_25c,(int)local_5c,0x44);
    bVar1 = recovered_2b0f9(DAT_0004ce28,DAT_0004ce38,(int)local_25c,0x200);
    uVar4 = CONCAT31(extraout_var,bVar1);
  }
  return uVar4;
}
