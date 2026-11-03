#include "functions.h"
#undef DAT_00046264
#define DAT_00046264 (*(uint8_t *)(0x46264U))
#undef DAT_000467f3
#define DAT_000467f3 (*(uint8_t *)(0x467f3U))
#undef DAT_00047058
#define DAT_00047058 (*(uint8_t *)(0x47058U))
#undef DAT_0004705a
#define DAT_0004705a (*(uint8_t *)(0x4705aU))
#undef DAT_0004753c
#define DAT_0004753c (*(uint8_t *)(0x4753cU))
#undef DAT_0004753e
#define DAT_0004753e (*(uint8_t *)(0x4753eU))
#undef DAT_000475c3
#define DAT_000475c3 (*(uint8_t *)(0x475c3U))
#undef DAT_000475f6
#define DAT_000475f6 (*(uint8_t *)(0x475f6U))
#undef DAT_000476f8
#define DAT_000476f8 (*(uint8_t *)(0x476f8U))
#undef DAT_000477a4
#define DAT_000477a4 (*(uint8_t *)(0x477a4U))
#undef DAT_000477b6
#define DAT_000477b6 (*(uint8_t *)(0x477b6U))
#undef DAT_000477bb
#define DAT_000477bb (*(uint8_t *)(0x477bbU))
#undef DAT_000477c0
#define DAT_000477c0 (*(uint8_t *)(0x477c0U))
#undef DAT_000477c5
#define DAT_000477c5 (*(uint8_t *)(0x477c5U))
#undef DAT_000477c8
#define DAT_000477c8 (*(uint8_t *)(0x477c8U))
#undef str_000476fd
#define str_000476fd (*(char (*)[1])(0x476fdU))
#undef str_000477a7
#define str_000477a7 (*(char (*)[1])(0x477a7U))
#undef str_000477b0
#define str_000477b0 (*(char (*)[1])(0x477b0U))
#undef str_000477cb
#define str_000477cb (*(char (*)[1])(0x477cbU))
#undef str_000477d6
#define str_000477d6 (*(char (*)[1])(0x477d6U))
#define local_78 (*(char (*)[96])(frame + 28))
#define local_18 (*(uint *)(frame + 124))
#define local_14 (*(uint *)(frame + 128))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x35e9c
 */

uint recovered_35e9c(int *param_1,int *param_2,uint param_3)

{
  unsigned char frame[180];

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
    pcVar7 = &DAT_000475c3;
    goto switchD_00035ee9_default;
  }
  if (0x10 < param_3) {
    pcVar7 = str_000477a7;
    goto switchD_00035ee9_default;
  }
  switch((uintptr_t)(*param_1)) {
  case 1:
    iVar6 = param_1[1];
    pcVar7 = &DAT_000475f6;
    goto LAB_00036096;
  case 2:
    pcVar5 = local_78;
    recovered_21de7(pcVar5,0x60,&DAT_000477a4,(double)pf_bits_float((uint32_t)param_1[2]));
    goto LAB_000360a5;
  case 3:
    pcVar7 = &DAT_00046264;
    if ((char *)param_1[3] != (char *)0x0) {
      pcVar7 = (char *)param_1[3];
    }
    break;
  case 4:
    uVar1 = recovered_36180(param_2,&DAT_000477b6);
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
        if ((uVar1 != 0) && (uVar3 = recovered_36180(param_2,&DAT_000467f3), (char)uVar3 == '\0')) {
          return 0;
        }
        recovered_21de7(local_78,0x60,&DAT_000477bb,(uint)*(byte *)(param_1[4] + uVar1));
        uVar3 = recovered_36180(param_2,local_78);
        uVar1 = uVar1 + 1;
        if ((char)uVar3 == '\0') {
          return 0;
        }
      }
      if ((local_14 < (uint)param_1[5]) &&
         (uVar1 = recovered_36180(param_2,&DAT_000477c0), (char)uVar1 == '\0')) {
        return 0;
      }
    }
    pcVar5 = &DAT_0004705a;
    goto LAB_000360a5;
  case 5:
    pcVar7 = &DAT_000476f8;
    if (param_1[1] == 0) {
      pcVar7 = str_000476fd;
    }
    break;
  case 6:
    iVar6 = param_1[1];
    pcVar7 = str_000477b0;
LAB_00036096:
    pcVar5 = local_78;
    recovered_21de7(pcVar5,0x60,pcVar7,iVar6);
LAB_000360a5:
    uVar1 = recovered_36180(param_2,pcVar5);
    return uVar1;
  case 7:
    uVar1 = recovered_36180(param_2,&DAT_00047058);
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
          uVar1 = recovered_36180(param_2,&DAT_000477c5);
          if ((char)uVar1 == '\0') {
            return 0;
          }
          iVar6 = param_1[6];
        }
        uVar4 = recovered_35e9c((int *)(*(int *)(iVar6 + 0x10) + local_14),param_2,local_18);
        uVar3 = uVar3 + 1;
        uVar1 = local_14 + 0x24;
        if ((char)uVar4 == '\0') {
          return 0;
        }
      }
    }
    pcVar7 = &DAT_0004705a;
    break;
  case 8:
    uVar1 = recovered_36180(param_2,&DAT_0004753c);
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
          uVar1 = recovered_36180(param_2,&DAT_000477c5);
          if ((char)uVar1 == '\0') {
            return 0;
          }
          iVar2 = param_1[7];
        }
        pcVar7 = *(char **)(*(int *)(iVar2 + 0xc) + -4 + iVar6);
        pcVar5 = &DAT_00046264;
        if (pcVar7 != (char *)0x0) {
          pcVar5 = pcVar7;
        }
        uVar1 = recovered_36180(param_2,pcVar5);
        if ((char)uVar1 == '\0') {
          return 0;
        }
        uVar1 = recovered_36180(param_2,&DAT_000477c8);
        if ((char)uVar1 == '\0') {
          return 0;
        }
        uVar3 = recovered_35e9c((int *)(*(int *)(param_1[7] + 0xc) + iVar6),param_2,local_18);
        uVar1 = local_14 + 1;
        iVar6 = iVar6 + 0x28;
        if ((char)uVar3 == '\0') {
          return 0;
        }
      }
    }
    pcVar7 = &DAT_0004753e;
    break;
  case 9:
    pcVar7 = str_000477cb;
    break;
  default:
    pcVar7 = str_000477d6;
  }
switchD_00035ee9_default:
  uVar1 = recovered_36180(param_2,pcVar7);
  return uVar1;
}
