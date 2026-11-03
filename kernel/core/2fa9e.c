#include "functions.h"
#undef DAT_00057391
#define DAT_00057391 (*(uint8_t *)(0x57391U))
#undef DAT_0005e69c
#define DAT_0005e69c (*(int *)(0x5e69cU))
#undef DAT_0005e6a0
#define DAT_0005e6a0 (*(uint *)(0x5e6a0U))
#undef DAT_0005e6c0
#define DAT_0005e6c0 (*(uint *)(0x5e6c0U))
#undef DAT_0005e6d0
#define DAT_0005e6d0 (*(uint8_t *)(0x5e6d0U))
#undef DAT_0005e6d4
#define DAT_0005e6d4 (*(int *)(0x5e6d4U))
#undef DAT_0005e71c
#define DAT_0005e71c (*(char *)(0x5e71cU))
#define local_221 (*(byte (*)[241])(frame + 43))
#define local_130 (*(undefined1 (*)[244])(frame + 284))
#define local_3c (*(int *)(frame + 528))
#define local_34 (*(uint *)(frame + 536))
#define local_30 (*(undefined4 *)(frame + 540))
#define local_2c (*(undefined4 *)(frame + 544))
#define local_24 (*(int *)(frame + 552))
#define local_20 (*(uint *)(frame + 556))
#define local_1c (*(uint *)(frame + 560))
#define local_18 (*(char * *)(frame + 564))
#define local_14 (*(void * *)(frame + 568))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2fa9e
 */

undefined4 recovered_2fa9e(int param_1,int param_2,uint param_3)

{
  unsigned char frame[620] = {0};

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
  if (DAT_0005e71c == '\0') {
    return 0;
  }
  if (param_2 == 0 && param_3 != 0) {
    return 0;
  }
  if (((byte)DAT_0005e6d0 & 1) != 0) {
    return 0;
  }
  recovered_37f88(param_1,local_221);
  if (local_221[0] == 0) {
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
  uVar2 = recovered_38140(local_221);
  recovered_213af((int)local_130,0,0x10c);
  if (uVar2 == 0xffffffff) {
    bVar1 = recovered_38a82(DAT_0005e6a0 + 1);
    local_20 = DAT_0005e6a0;
    if (!bVar1) goto LAB_0002fc92;
    iVar3 = DAT_0005e6a0 * 0x10c;
    DAT_0005e6a0 = DAT_0005e6a0 + 1;
    recovered_213af(iVar3 + DAT_0005e69c,0,0x10c);
    local_24 = DAT_0005e69c;
  }
  else {
    local_24 = DAT_0005e69c;
    recovered_21348((int)local_130,uVar2 * 0x10c + DAT_0005e69c,0x10c);
    if (((local_34 & 2) != 0) || (local_20 = uVar2, (local_34 & 1) != 0)) {
LAB_0002fc92:
      recovered_21203((int)local_14);
      return 0;
    }
  }
  iVar3 = local_24;
  iVar6 = local_20 * 0x10c;
  local_18 = (char *)(local_24 + iVar6);
  local_1c = uVar2;
  recovered_22362(local_18,0xf1,&DAT_00057391,local_221);
  uVar2 = local_1c;
  *(undefined4 *)(iVar3 + 0xfc + iVar6) = 0;
  *(void **)(iVar3 + 0xf4 + iVar6) = local_14;
  *(uint *)(iVar3 + 0xf8 + iVar6) = param_3;
  *(undefined4 *)(iVar3 + 0x100 + iVar6) = local_30;
  *(undefined4 *)(iVar3 + 0x104 + iVar6) = local_2c;
  *(undefined1 *)(iVar3 + 0x108 + iVar6) = 1;
  if ((local_1c == 0xffffffff) && (uVar4 = recovered_38b45(local_20), (char)uVar4 == '\0')) {
    recovered_21203((int)local_14);
    recovered_213af((int)local_18,0,0x10c);
    DAT_0005e6a0 = DAT_0005e6a0 - 1;
    return 0;
  }
  pcVar7 = local_18;
  if (DAT_0005e6d4 != 2) {
    bVar1 = recovered_30806();
    uVar4 = uVar2;
    if (bVar1) goto LAB_0002fda4;
    recovered_21203((int)local_14);
    pcVar7 = local_18;
    if (uVar2 == 0xffffffff) goto LAB_0002fdfd;
    goto LAB_0002fde8;
  }
  if (*(int *)(local_18 + 0xf8) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = ((*(int *)(local_18 + 0xf8) + DAT_0005e6c0) - 1) / DAT_0005e6c0;
  }
  bVar1 = recovered_38d89((uint *)(local_24 + iVar6 + 0x100),*(uint *)(local_18 + 0x104),uVar2);
  if (bVar1) {
    *(uint *)(pcVar7 + 0x104) = uVar2;
    bVar1 = recovered_38f42(*(uint *)(pcVar7 + 0x100),*(int *)(pcVar7 + 0xf4),
                            *(uint *)(pcVar7 + 0xf8),uVar2);
    if (bVar1) {
      if (local_1c == 0xffffffff) {
        uVar5 = recovered_3908b(local_20,1);
        uVar2 = CONCAT31((int3)(uVar2 >> 8),1);
        if ((char)uVar5 != '\0') {
          return uVar2;
        }
LAB_0002fd97:
        uVar5 = recovered_3921b();
        if ((char)uVar5 == '\0') goto LAB_0002fdca;
      }
      else {
        uVar5 = recovered_3908b(local_20,0);
        if ((char)uVar5 == '\0') goto LAB_0002fd97;
      }
      uVar4 = local_1c;
LAB_0002fda4:
      uVar5 = CONCAT31((int3)(uVar2 >> 8),1);
      if (local_3c == 0 || uVar4 == 0xffffffff) {
        return uVar5;
      }
      recovered_21203(local_3c);
      return uVar5;
    }
  }
LAB_0002fdca:
  recovered_21203((int)local_14);
  if (local_1c == 0xffffffff) {
LAB_0002fdfd:
    recovered_213af((int)pcVar7,0,0x10c);
    DAT_0005e6a0 = DAT_0005e6a0 - 1;
    recovered_38ba6();
    return 0;
  }
LAB_0002fde8:
  recovered_21348((int)pcVar7,(int)local_130,0x10c);
  return 0;
}
