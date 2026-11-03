#include "functions.h"
#undef DAT_00047e00
#define DAT_00047e00 (*(uint32_t *)(0x47e00U))
#undef DAT_00047e14
#define DAT_00047e14 (*(byte *)(0x47e14U))
#undef DAT_00047e18
#define DAT_00047e18 (*(uint *)(0x47e18U))
#undef DAT_00047e1c
#define DAT_00047e1c (*(uint32_t *)(0x47e1cU))
#undef DAT_00047e24
#define DAT_00047e24 (*(int *)(0x47e24U))
#undef DAT_00047e28
#define DAT_00047e28 (*(uint32_t *)(0x47e28U))
#undef DAT_00047e38
#define DAT_00047e38 (*(int *)(0x47e38U))
#undef DAT_00047e3c
#define DAT_00047e3c (*(uint32_t *)(0x47e3cU))
#undef DAT_00047e40
#define DAT_00047e40 (*(uint32_t *)(0x47e40U))
#undef DAT_00047e44
#define DAT_00047e44 (*(uint32_t *)(0x47e44U))
#undef DAT_00047e48
#define DAT_00047e48 (*(uint32_t *)(0x47e48U))
#undef DAT_00047e4c
#define DAT_00047e4c (*(uint32_t *)(0x47e4cU))
#undef DAT_00047e50
#define DAT_00047e50 (*(int *)(0x47e50U))
#undef DAT_00047e54
#define DAT_00047e54 (*(int *)(0x47e54U))
#undef DAT_00047e5c
#define DAT_00047e5c (*(uint *)(0x47e5cU))
#undef DAT_00047e60
#define DAT_00047e60 (*(uint *)(0x47e60U))
#undef DAT_00047e64
#define DAT_00047e64 (*(char *)(0x47e64U))
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
#define local_3c (*(undefined4 *)(frame + 1072))
#define local_38 (*(undefined4 *)(frame + 1076))
#define local_34 (*(undefined4 *)(frame + 1080))
#define local_30 (*(undefined4 *)(frame + 1084))
#define local_2c (*(undefined4 *)(frame + 1088))
#define local_18 (*(uint *)(frame + 1108))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2a056
 */

undefined4 recovered_2a056(void)

{
  unsigned char frame[1164];

  bool bVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined3 extraout_var = 0;
  uint uVar5;
  uint uVar6;

  if (DAT_00047e50 == 0) {
    return 0;
  }
  if (DAT_00047e64 == '\x01') {
    local_14 = DAT_00047e54 << 2;
    uVar2 = DAT_00047e5c / (DAT_00047e18 >> 2);
    local_18 = DAT_00047e60 / (DAT_00047e18 >> 2);
    do {
      if (local_18 < uVar2) {
        DAT_00047e64 = '\0';
        goto LAB_0002a131;
      }
      uVar6 = DAT_00047e18 * uVar2;
      recovered_20fa9((int)local_45c,0,0x200);
      uVar3 = local_14 - uVar6;
      if (uVar6 <= local_14 && uVar3 != 0) {
        uVar5 = DAT_00047e18;
        if (uVar3 < DAT_00047e18) {
          uVar5 = uVar3;
        }
        recovered_20f42((int)local_45c,uVar6 + DAT_00047e50,uVar5);
      }
      bVar1 = recovered_29fa0((uint)DAT_00047e14,DAT_00047e24 + uVar2 + DAT_00047e38,(int)local_45c,
                              DAT_00047e18);
      uVar2 = uVar2 + 1;
    } while (bVar1);
    uVar4 = 0;
  }
  else {
LAB_0002a131:
    recovered_20fa9((int)local_25c,0,0x200);
    recovered_20fa9((int)local_5c,0,0x44);
    recovered_20f42((int)local_5c,0x42600,8);
    local_54 = 1;
    local_50 = DAT_00047e18;
    local_4c = DAT_00047e1c;
    local_48 = DAT_00047e38;
    local_44 = DAT_00047e3c;
    local_40 = DAT_00047e40;
    local_3c = DAT_00047e44;
    local_38 = DAT_00047e48;
    local_34 = DAT_00047e4c;
    local_30 = DAT_00047e00;
    local_2c = DAT_00047e28;
    recovered_20f42((int)local_25c,(int)local_5c,0x44);
    bVar1 = recovered_29fa0((uint)DAT_00047e14,DAT_00047e24,(int)local_25c,0x200);
    uVar4 = CONCAT31(extraout_var,bVar1);
  }
  return uVar4;
}
