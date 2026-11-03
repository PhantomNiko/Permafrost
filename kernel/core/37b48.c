#include "functions.h"
#undef DAT_0004851c
#define DAT_0004851c (*(uint8_t *)(0x4851cU))
#undef DAT_00048aab
#define DAT_00048aab (*(uint8_t *)(0x48aabU))
#undef DAT_0004932e
#define DAT_0004932e (*(uint8_t *)(0x4932eU))
#undef DAT_00049330
#define DAT_00049330 (*(uint8_t *)(0x49330U))
#undef DAT_00049816
#define DAT_00049816 (*(uint8_t *)(0x49816U))
#undef DAT_00049818
#define DAT_00049818 (*(uint8_t *)(0x49818U))
#undef DAT_0004989d
#define DAT_0004989d (*(uint8_t *)(0x4989dU))
#undef DAT_000498d0
#define DAT_000498d0 (*(uint8_t *)(0x498d0U))
#undef DAT_000499f8
#define DAT_000499f8 (*(uint8_t *)(0x499f8U))
#undef DAT_00049aa4
#define DAT_00049aa4 (*(uint8_t *)(0x49aa4U))
#undef DAT_00049ab6
#define DAT_00049ab6 (*(uint8_t *)(0x49ab6U))
#undef DAT_00049abb
#define DAT_00049abb (*(uint8_t *)(0x49abbU))
#undef DAT_00049ac0
#define DAT_00049ac0 (*(uint8_t *)(0x49ac0U))
#undef DAT_00049ac5
#define DAT_00049ac5 (*(uint8_t *)(0x49ac5U))
#undef DAT_00049ac8
#define DAT_00049ac8 (*(uint8_t *)(0x49ac8U))
#undef str_000499fd
#define str_000499fd (*(char (*)[1])(0x499fdU))
#undef str_00049aa7
#define str_00049aa7 (*(char (*)[1])(0x49aa7U))
#undef str_00049ab0
#define str_00049ab0 (*(char (*)[1])(0x49ab0U))
#undef str_00049acb
#define str_00049acb (*(char (*)[1])(0x49acbU))
#undef str_00049ad6
#define str_00049ad6 (*(char (*)[1])(0x49ad6U))
#define local_14 (*(uint *)(frame + 128))
#define local_78 (*(char (*)[96])(frame + 28))
#define local_18 (*(uint *)(frame + 124))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x37b48
 */

uint recovered_37b48(int *param_1,int *param_2,uint param_3)

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
    pcVar7 = &DAT_0004989d;
    goto switchD_00037b95_default;
  }
  if (0x10 < param_3) {
    pcVar7 = str_00049aa7;
    goto switchD_00037b95_default;
  }
  switch((uintptr_t)(*param_1)) {
  case 1:
    iVar6 = param_1[1];
    pcVar7 = &DAT_000498d0;
    goto LAB_00037d42;
  case 2:
    pcVar5 = local_78;
    recovered_21de7(pcVar5,0x60,&DAT_00049aa4,(double)pf_bits_float((uint32_t)param_1[2]));
    goto LAB_00037d51;
  case 3:
    pcVar7 = &DAT_0004851c;
    if ((char *)param_1[3] != (char *)0x0) {
      pcVar7 = (char *)param_1[3];
    }
    break;
  case 4:
    uVar1 = recovered_37e2c(param_2,&DAT_00049ab6);
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
        if ((uVar1 != 0) && (uVar3 = recovered_37e2c(param_2,&DAT_00048aab), (char)uVar3 == '\0')) {
          return 0;
        }
        recovered_21de7(local_78,0x60,&DAT_00049abb,(uint)*(byte *)(param_1[4] + uVar1));
        uVar3 = recovered_37e2c(param_2,local_78);
        uVar1 = uVar1 + 1;
        if ((char)uVar3 == '\0') {
          return 0;
        }
      }
      if ((local_14 < (uint)param_1[5]) &&
         (uVar1 = recovered_37e2c(param_2,&DAT_00049ac0), (char)uVar1 == '\0')) {
        return 0;
      }
    }
    pcVar5 = &DAT_00049330;
    goto LAB_00037d51;
  case 5:
    pcVar7 = &DAT_000499f8;
    if (param_1[1] == 0) {
      pcVar7 = str_000499fd;
    }
    break;
  case 6:
    iVar6 = param_1[1];
    pcVar7 = str_00049ab0;
LAB_00037d42:
    pcVar5 = local_78;
    recovered_21de7(pcVar5,0x60,pcVar7,iVar6);
LAB_00037d51:
    uVar1 = recovered_37e2c(param_2,pcVar5);
    return uVar1;
  case 7:
    uVar1 = recovered_37e2c(param_2,&DAT_0004932e);
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
          uVar1 = recovered_37e2c(param_2,&DAT_00049ac5);
          if ((char)uVar1 == '\0') {
            return 0;
          }
          iVar6 = param_1[6];
        }
        uVar4 = recovered_37b48((int *)(*(int *)(iVar6 + 0x10) + local_14),param_2,local_18);
        uVar3 = uVar3 + 1;
        uVar1 = local_14 + 0x24;
        if ((char)uVar4 == '\0') {
          return 0;
        }
      }
    }
    pcVar7 = &DAT_00049330;
    break;
  case 8:
    uVar1 = recovered_37e2c(param_2,&DAT_00049816);
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
          uVar1 = recovered_37e2c(param_2,&DAT_00049ac5);
          if ((char)uVar1 == '\0') {
            return 0;
          }
          iVar2 = param_1[7];
        }
        pcVar7 = *(char **)(*(int *)(iVar2 + 0xc) + -4 + iVar6);
        pcVar5 = &DAT_0004851c;
        if (pcVar7 != (char *)0x0) {
          pcVar5 = pcVar7;
        }
        uVar1 = recovered_37e2c(param_2,pcVar5);
        if ((char)uVar1 == '\0') {
          return 0;
        }
        uVar1 = recovered_37e2c(param_2,&DAT_00049ac8);
        if ((char)uVar1 == '\0') {
          return 0;
        }
        uVar3 = recovered_37b48((int *)(*(int *)(param_1[7] + 0xc) + iVar6),param_2,local_18);
        uVar1 = local_14 + 1;
        iVar6 = iVar6 + 0x28;
        if ((char)uVar3 == '\0') {
          return 0;
        }
      }
    }
    pcVar7 = &DAT_00049818;
    break;
  case 9:
    pcVar7 = str_00049acb;
    break;
  default:
    pcVar7 = str_00049ad6;
  }
switchD_00037b95_default:
  uVar1 = recovered_37e2c(param_2,pcVar7);
  return uVar1;
}
