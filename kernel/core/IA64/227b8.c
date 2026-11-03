#include "functions.h"
#undef DAT_00046398
#define DAT_00046398 (*(uint8_t *)(0x46398U))
#undef DAT_0004ce10
#define DAT_0004ce10 (*(int *)(0x4ce10U))
#undef DAT_0004ce14
#define DAT_0004ce14 (*(uint *)(0x4ce14U))
#undef DAT_0004ce34
#define DAT_0004ce34 (*(uint *)(0x4ce34U))
#undef DAT_0004ce44
#define DAT_0004ce44 (*(uint8_t *)(0x4ce44U))
#undef DAT_0004ce48
#define DAT_0004ce48 (*(int *)(0x4ce48U))
#undef DAT_0004ce90
#define DAT_0004ce90 (*(char *)(0x4ce90U))
#define local_18 (*(char * *)(frame + 564))
#define local_14 (*(void * *)(frame + 568))
#define local_21d (*(byte (*)[241])(frame + 47))
#define local_12c (*(undefined1 (*)[244])(frame + 288))
#define local_38 (*(int *)(frame + 532))
#define local_30 (*(uint *)(frame + 540))
#define local_2c (*(undefined4 *)(frame + 544))
#define local_28 (*(undefined4 *)(frame + 548))
#define local_24 (*(int *)(frame + 552))
#define local_20 (*(uint *)(frame + 556))
#define local_1c (*(uint *)(frame + 560))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x227b8
 */

undefined4 recovered_227b8(int param_1,int param_2,uint param_3)

{
  unsigned char frame[620];

  bool bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  char *pcVar7;

  if (param_1 == 0) {
    return 0;
  }
  if (DAT_0004ce90 == '\0') {
    return 0;
  }
  if (param_2 == 0 && param_3 != 0) {
    return 0;
  }
  if (((byte)DAT_0004ce44 & 1) != 0) {
    return 0;
  }
  recovered_2a4eb(param_1,local_21d);
  if (local_21d[0] == 0) {
    return 0;
  }
  local_14 = (void *)0x0;
  if (param_3 != 0) {
    local_14 = recovered_211fa(param_3);
    if (local_14 == (void *)0x0) {
      return 0;
    }
    recovered_21348((int)local_14,param_2,param_3);
  }
  uVar2 = recovered_2a6a3(local_21d);
  recovered_213af((int)local_12c,0,0x108);
  if (uVar2 == 0xffffffff) {
    bVar1 = recovered_2a7a9(DAT_0004ce14 + 1);
    local_20 = DAT_0004ce14;
    if (!bVar1) goto LAB_000229a4;
    iVar3 = DAT_0004ce14 * 0x108;
    DAT_0004ce14 = DAT_0004ce14 + 1;
    recovered_213af(iVar3 + DAT_0004ce10,0,0x108);
    local_24 = DAT_0004ce10;
  }
  else {
    local_24 = DAT_0004ce10;
    recovered_21348((int)local_12c,uVar2 * 0x108 + DAT_0004ce10,0x108);
    if (((local_30 & 2) != 0) || (local_20 = uVar2, (local_30 & 1) != 0)) {
LAB_000229a4:
      recovered_21203((int)local_14);
      return 0;
    }
  }
  iVar3 = local_24;
  iVar6 = local_20 * 0x108;
  local_18 = (char *)(local_24 + iVar6);
  local_1c = uVar2;
  recovered_21de7(local_18,0xf1,&DAT_00046398,local_21d);
  uVar2 = local_1c;
  *(undefined4 *)(iVar3 + 0xfc + iVar6) = 0;
  *(void **)(iVar3 + 0xf4 + iVar6) = local_14;
  *(uint *)(iVar3 + 0xf8 + iVar6) = param_3;
  *(undefined4 *)(iVar3 + 0x100 + iVar6) = local_2c;
  *(undefined4 *)(iVar3 + 0x104 + iVar6) = local_28;
  if ((local_1c == 0xffffffff) && (uVar4 = recovered_2a86c(local_20), (char)uVar4 == '\0')) {
    recovered_21203((int)local_14);
    recovered_213af((int)local_18,0,0x108);
    DAT_0004ce14 = DAT_0004ce14 - 1;
    return 0;
  }
  pcVar7 = local_18;
  if (DAT_0004ce48 != 2) {
    bVar1 = recovered_23409();
    uVar4 = uVar2;
    if (bVar1) goto LAB_00022ab6;
    recovered_21203((int)local_14);
    pcVar7 = local_18;
    if (uVar2 == 0xffffffff) goto LAB_00022b0f;
    goto LAB_00022afa;
  }
  if (*(int *)(local_18 + 0xf8) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = ((*(int *)(local_18 + 0xf8) + DAT_0004ce34) - 1) / DAT_0004ce34;
  }
  bVar1 = recovered_2aab0((uint *)(local_24 + iVar6 + 0x100),*(uint *)(local_18 + 0x104),uVar2);
  if (bVar1) {
    *(uint *)(pcVar7 + 0x104) = uVar2;
    bVar1 = recovered_2ac69(*(uint *)(pcVar7 + 0x100),*(int *)(pcVar7 + 0xf4),
                            *(uint *)(pcVar7 + 0xf8),uVar2);
    if (bVar1) {
      if (local_1c == 0xffffffff) {
        uVar5 = recovered_2adb2(local_20,1);
        uVar2 = CONCAT31((int3)(uVar2 >> 8),1);
        if ((char)uVar5 != '\0') {
          return uVar2;
        }
LAB_00022aa9:
        uVar5 = recovered_2af42();
        if ((char)uVar5 == '\0') goto LAB_00022adc;
      }
      else {
        uVar5 = recovered_2adb2(local_20,0);
        if ((char)uVar5 == '\0') goto LAB_00022aa9;
      }
      uVar4 = local_1c;
LAB_00022ab6:
      uVar5 = CONCAT31((int3)(uVar2 >> 8),1);
      if (local_38 == 0 || uVar4 == 0xffffffff) {
        return uVar5;
      }
      recovered_21203(local_38);
      return uVar5;
    }
  }
LAB_00022adc:
  recovered_21203((int)local_14);
  if (local_1c == 0xffffffff) {
LAB_00022b0f:
    recovered_213af((int)pcVar7,0,0x108);
    DAT_0004ce14 = DAT_0004ce14 - 1;
    recovered_2a8cd();
    return 0;
  }
LAB_00022afa:
  recovered_21348((int)pcVar7,(int)local_12c,0x108);
  return 0;
}
