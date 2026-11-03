#include "functions.h"
#undef DAT_00057364
#define DAT_00057364 (*(uint8_t *)(0x57364U))
#undef DAT_00057b1c
#define DAT_00057b1c (*(uint8_t *)(0x57b1cU))
#undef DAT_00058399
#define DAT_00058399 (*(uint8_t *)(0x58399U))
#undef DAT_0005839b
#define DAT_0005839b (*(uint8_t *)(0x5839bU))
#undef DAT_00058881
#define DAT_00058881 (*(uint8_t *)(0x58881U))
#undef DAT_00058883
#define DAT_00058883 (*(uint8_t *)(0x58883U))
#undef DAT_00058908
#define DAT_00058908 (*(uint8_t *)(0x58908U))
#undef DAT_0005893b
#define DAT_0005893b (*(uint8_t *)(0x5893bU))
#undef DAT_00058a63
#define DAT_00058a63 (*(uint8_t *)(0x58a63U))
#undef DAT_00058b0f
#define DAT_00058b0f (*(uint8_t *)(0x58b0fU))
#undef DAT_00058b21
#define DAT_00058b21 (*(uint8_t *)(0x58b21U))
#undef DAT_00058b26
#define DAT_00058b26 (*(uint8_t *)(0x58b26U))
#undef DAT_00058b2b
#define DAT_00058b2b (*(uint8_t *)(0x58b2bU))
#undef DAT_00058b30
#define DAT_00058b30 (*(uint8_t *)(0x58b30U))
#undef DAT_00058b33
#define DAT_00058b33 (*(uint8_t *)(0x58b33U))
#undef str_00058a68
#define str_00058a68 (*(char (*)[1])(0x58a68U))
#undef str_00058b12
#define str_00058b12 (*(char (*)[1])(0x58b12U))
#undef str_00058b1b
#define str_00058b1b (*(char (*)[1])(0x58b1bU))
#undef str_00058b36
#define str_00058b36 (*(char (*)[1])(0x58b36U))
#undef str_00058b41
#define str_00058b41 (*(char (*)[1])(0x58b41U))
#define local_18 (*(uint *)(frame + 124))
#define local_14 (*(uint *)(frame + 128))
#define local_78 (*(char (*)[96])(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x45e2d
 */

uint recovered_45e2d(int *param_1,int *param_2,uint param_3)

{
  unsigned char frame[180] = {0};

  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  int iVar6;
  char *pcVar7;

  if (param_2 == (int *)0x0) {
    return 0;
  }
  if ((param_1 == (int *)0x0) || (*param_1 == 0)) {
    pcVar7 = &DAT_00058908;
    goto switchD_00045e7a_default;
  }
  if (0x10 < param_3) {
    pcVar7 = str_00058b12;
    goto switchD_00045e7a_default;
  }
  switch((uintptr_t)(*param_1)) {
  case 1:
    iVar6 = param_1[1];
    pcVar7 = &DAT_0005893b;
    goto LAB_00046027;
  case 2:
    pcVar5 = local_78;
    recovered_22362(pcVar5,0x60,&DAT_00058b0f,(double)pf_bits_float((uint32_t)param_1[2]));
    goto LAB_00046036;
  case 3:
    pcVar7 = &DAT_00057364;
    if ((char *)param_1[3] != (char *)0x0) {
      pcVar7 = (char *)param_1[3];
    }
    break;
  case 4:
    uVar1 = recovered_46111(param_2,&DAT_00058b21);
    if ((char)uVar1 == '\0') {
      return 0;
    }
    if (param_1[4] != 0) {
      local_14 = 0x20;
      if ((uint)param_1[5] < 0x20) {
        local_14 = param_1[5];
      }
      uVar1 = 0;
      while (local_14 != uVar1) {
        if ((uVar1 != 0) && (uVar3 = recovered_46111(param_2,&DAT_00057b1c), (char)uVar3 == '\0')) {
          return 0;
        }
        recovered_22362(local_78,0x60,&DAT_00058b26,(uint)*(byte *)(param_1[4] + uVar1));
        uVar3 = recovered_46111(param_2,local_78);
        uVar1 = uVar1 + 1;
        if ((char)uVar3 == '\0') {
          return 0;
        }
      }
      if ((local_14 < (uint)param_1[5]) &&
         (uVar1 = recovered_46111(param_2,&DAT_00058b2b), (char)uVar1 == '\0')) {
        return 0;
      }
    }
    pcVar5 = &DAT_0005839b;
    goto LAB_00046036;
  case 5:
    pcVar7 = &DAT_00058a63;
    if (param_1[1] == 0) {
      pcVar7 = str_00058a68;
    }
    break;
  case 6:
    iVar6 = param_1[1];
    pcVar7 = str_00058b1b;
LAB_00046027:
    pcVar5 = local_78;
    recovered_22362(pcVar5,0x60,pcVar7,iVar6);
LAB_00046036:
    uVar1 = recovered_46111(param_2,pcVar5);
    return uVar1;
  case 7:
    uVar1 = recovered_46111(param_2,&DAT_00058399);
    if ((char)uVar1 == '\0') {
      return 0;
    }
    local_18 = param_3;
    if (param_1[6] != 0) {
      local_18 = param_3 + 1;
      uVar1 = 0;
      uVar3 = 0;
      while (iVar6 = param_1[6], uVar3 < *(uint *)(iVar6 + 8)) {
        local_14 = uVar1;
        if (uVar3 != 0) {
          uVar1 = recovered_46111(param_2,&DAT_00058b30);
          if ((char)uVar1 == '\0') {
            return 0;
          }
          iVar6 = param_1[6];
        }
        uVar4 = recovered_45e2d((int *)(*(int *)(iVar6 + 0x10) + local_14),param_2,local_18);
        uVar3 = uVar3 + 1;
        uVar1 = local_14 + 0x24;
        if ((char)uVar4 == '\0') {
          return 0;
        }
      }
    }
    pcVar7 = &DAT_0005839b;
    break;
  case 8:
    uVar1 = recovered_46111(param_2,&DAT_00058881);
    if ((char)uVar1 == '\0') {
      return 0;
    }
    if (param_1[7] != 0) {
      local_18 = param_3 + 1;
      uVar1 = 0;
      iVar6 = 4;
      while (iVar2 = param_1[7], uVar1 < *(uint *)(iVar2 + 4)) {
        local_14 = uVar1;
        if (uVar1 != 0) {
          uVar1 = recovered_46111(param_2,&DAT_00058b30);
          if ((char)uVar1 == '\0') {
            return 0;
          }
          iVar2 = param_1[7];
        }
        pcVar7 = *(char **)(*(int *)(iVar2 + 0xc) + -4 + iVar6);
        pcVar5 = &DAT_00057364;
        if (pcVar7 != (char *)0x0) {
          pcVar5 = pcVar7;
        }
        uVar1 = recovered_46111(param_2,pcVar5);
        if ((char)uVar1 == '\0') {
          return 0;
        }
        uVar1 = recovered_46111(param_2,&DAT_00058b33);
        if ((char)uVar1 == '\0') {
          return 0;
        }
        uVar3 = recovered_45e2d((int *)(*(int *)(param_1[7] + 0xc) + iVar6),param_2,local_18);
        uVar1 = local_14 + 1;
        iVar6 = iVar6 + 0x28;
        if ((char)uVar3 == '\0') {
          return 0;
        }
      }
    }
    pcVar7 = &DAT_00058883;
    break;
  case 9:
    pcVar7 = str_00058b36;
    break;
  default:
    pcVar7 = str_00058b41;
  }
switchD_00045e7a_default:
  uVar1 = recovered_46111(param_2,pcVar7);
  return uVar1;
}
