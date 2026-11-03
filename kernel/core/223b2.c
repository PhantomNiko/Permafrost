#include "functions.h"
#undef DAT_00042730
#define DAT_00042730 (*(uint8_t *)(0x42730U))
#undef DAT_00047dfc
#define DAT_00047dfc (*(int *)(0x47dfcU))
#undef DAT_00047e00
#define DAT_00047e00 (*(uint *)(0x47e00U))
#undef DAT_00047e20
#define DAT_00047e20 (*(uint *)(0x47e20U))
#undef DAT_00047e30
#define DAT_00047e30 (*(uint8_t *)(0x47e30U))
#undef DAT_00047e34
#define DAT_00047e34 (*(int *)(0x47e34U))
#undef DAT_00047e7c
#define DAT_00047e7c (*(char *)(0x47e7cU))
#define local_21d (*(byte (*)[241])(frame + 47))
#define local_12c (*(undefined1 (*)[244])(frame + 288))
#define local_38 (*(int *)(frame + 532))
#define local_30 (*(uint *)(frame + 540))
#define local_2c (*(undefined4 *)(frame + 544))
#define local_28 (*(undefined4 *)(frame + 548))
#define local_24 (*(int *)(frame + 552))
#define local_20 (*(uint *)(frame + 556))
#define local_1c (*(uint *)(frame + 560))
#define local_18 (*(char * *)(frame + 564))
#define local_14 (*(void * *)(frame + 568))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x223b2
 */

undefined4 recovered_223b2(int param_1,int param_2,uint param_3)

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
  if (DAT_00047e7c == '\0') {
    return 0;
  }
  if (param_2 == 0 && param_3 != 0) {
    return 0;
  }
  if (((byte)DAT_00047e30 & 1) != 0) {
    return 0;
  }
  recovered_29392(param_1,local_21d);
  if (local_21d[0] == 0) {
    return 0;
  }
  local_14 = (void *)0x0;
  if (param_3 != 0) {
    local_14 = recovered_20df4(param_3);
    if (local_14 == (void *)0x0) {
      return 0;
    }
    recovered_20f42((int)local_14,param_2,param_3);
  }
  uVar2 = recovered_2954a(local_21d);
  recovered_20fa9((int)local_12c,0,0x108);
  if (uVar2 == 0xffffffff) {
    bVar1 = recovered_29650(DAT_00047e00 + 1);
    local_20 = DAT_00047e00;
    if (!bVar1) goto LAB_0002259e;
    iVar3 = DAT_00047e00 * 0x108;
    DAT_00047e00 = DAT_00047e00 + 1;
    recovered_20fa9(iVar3 + DAT_00047dfc,0,0x108);
    local_24 = DAT_00047dfc;
  }
  else {
    local_24 = DAT_00047dfc;
    recovered_20f42((int)local_12c,uVar2 * 0x108 + DAT_00047dfc,0x108);
    if (((local_30 & 2) != 0) || (local_20 = uVar2, (local_30 & 1) != 0)) {
LAB_0002259e:
      recovered_20dfd((int)local_14);
      return 0;
    }
  }
  iVar3 = local_24;
  iVar6 = local_20 * 0x108;
  local_18 = (char *)(local_24 + iVar6);
  local_1c = uVar2;
  recovered_219e1(local_18,0xf1,&DAT_00042730,local_21d);
  uVar2 = local_1c;
  *(undefined4 *)(iVar3 + 0xfc + iVar6) = 0;
  *(void **)(iVar3 + 0xf4 + iVar6) = local_14;
  *(uint *)(iVar3 + 0xf8 + iVar6) = param_3;
  *(undefined4 *)(iVar3 + 0x100 + iVar6) = local_2c;
  *(undefined4 *)(iVar3 + 0x104 + iVar6) = local_28;
  if ((local_1c == 0xffffffff) && (uVar4 = recovered_29713(local_20), (char)uVar4 == '\0')) {
    recovered_20dfd((int)local_14);
    recovered_20fa9((int)local_18,0,0x108);
    DAT_00047e00 = DAT_00047e00 - 1;
    return 0;
  }
  pcVar7 = local_18;
  if (DAT_00047e34 != 2) {
    bVar1 = recovered_22ff4();
    uVar4 = uVar2;
    if (bVar1) goto LAB_000226b0;
    recovered_20dfd((int)local_14);
    pcVar7 = local_18;
    if (uVar2 == 0xffffffff) goto LAB_00022709;
    goto LAB_000226f4;
  }
  if (*(int *)(local_18 + 0xf8) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = ((*(int *)(local_18 + 0xf8) + DAT_00047e20) - 1) / DAT_00047e20;
  }
  bVar1 = recovered_29957((uint *)(local_24 + iVar6 + 0x100),*(uint *)(local_18 + 0x104),uVar2);
  if (bVar1) {
    *(uint *)(pcVar7 + 0x104) = uVar2;
    bVar1 = recovered_29b10(*(uint *)(pcVar7 + 0x100),*(int *)(pcVar7 + 0xf4),
                            *(uint *)(pcVar7 + 0xf8),uVar2);
    if (bVar1) {
      if (local_1c == 0xffffffff) {
        uVar5 = recovered_29c59(local_20,1);
        uVar2 = CONCAT31((int3)(uVar2 >> 8),1);
        if ((char)uVar5 != '\0') {
          return uVar2;
        }
LAB_000226a3:
        uVar5 = recovered_29de9();
        if ((char)uVar5 == '\0') goto LAB_000226d6;
      }
      else {
        uVar5 = recovered_29c59(local_20,0);
        if ((char)uVar5 == '\0') goto LAB_000226a3;
      }
      uVar4 = local_1c;
LAB_000226b0:
      uVar5 = CONCAT31((int3)(uVar2 >> 8),1);
      if (local_38 == 0 || uVar4 == 0xffffffff) {
        return uVar5;
      }
      recovered_20dfd(local_38);
      return uVar5;
    }
  }
LAB_000226d6:
  recovered_20dfd((int)local_14);
  if (local_1c == 0xffffffff) {
LAB_00022709:
    recovered_20fa9((int)pcVar7,0,0x108);
    DAT_00047e00 = DAT_00047e00 - 1;
    recovered_29774();
    return 0;
  }
LAB_000226f4:
  recovered_20f42((int)pcVar7,(int)local_12c,0x108);
  return 0;
}
