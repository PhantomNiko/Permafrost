#include "functions.h"
#undef DAT_00042614
#define DAT_00042614 (*(uint8_t *)(0x42614U))
#undef DAT_00042ba3
#define DAT_00042ba3 (*(uint8_t *)(0x42ba3U))
#undef DAT_00043307
#define DAT_00043307 (*(uint8_t *)(0x43307U))
#undef DAT_00043309
#define DAT_00043309 (*(uint8_t *)(0x43309U))
#undef DAT_000437eb
#define DAT_000437eb (*(uint8_t *)(0x437ebU))
#undef DAT_000437ed
#define DAT_000437ed (*(uint8_t *)(0x437edU))
#undef DAT_00043872
#define DAT_00043872 (*(uint8_t *)(0x43872U))
#undef DAT_000438a5
#define DAT_000438a5 (*(uint8_t *)(0x438a5U))
#undef DAT_000439a7
#define DAT_000439a7 (*(uint8_t *)(0x439a7U))
#undef DAT_00043a53
#define DAT_00043a53 (*(uint8_t *)(0x43a53U))
#undef DAT_00043a65
#define DAT_00043a65 (*(uint8_t *)(0x43a65U))
#undef DAT_00043a6a
#define DAT_00043a6a (*(uint8_t *)(0x43a6aU))
#undef DAT_00043a6f
#define DAT_00043a6f (*(uint8_t *)(0x43a6fU))
#undef DAT_00043a74
#define DAT_00043a74 (*(uint8_t *)(0x43a74U))
#undef DAT_00043a77
#define DAT_00043a77 (*(uint8_t *)(0x43a77U))
#undef str_000439ac
#define str_000439ac (*(char (*)[1])(0x439acU))
#undef str_00043a56
#define str_00043a56 (*(char (*)[1])(0x43a56U))
#undef str_00043a5f
#define str_00043a5f (*(char (*)[1])(0x43a5fU))
#undef str_00043a7a
#define str_00043a7a (*(char (*)[1])(0x43a7aU))
#undef str_00043a85
#define str_00043a85 (*(char (*)[1])(0x43a85U))
#define local_78 (*(char (*)[96])(frame + 28))
#define local_18 (*(uint *)(frame + 124))
#define local_14 (*(uint *)(frame + 128))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x3455a
 */

uint recovered_3455a(int *param_1,int param_2,uint param_3)

{
  unsigned char frame[180];

  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  int iVar6;
  char *pcVar7;

  if (param_2 == 0) {
    return 0;
  }
  if ((param_1 == (int *)0x0) || (*param_1 == 0)) {
    pcVar7 = &DAT_00043872;
    goto switchD_000345a7_default;
  }
  if (0x10 < param_3) {
    pcVar7 = str_00043a56;
    goto switchD_000345a7_default;
  }
  switch((uintptr_t)(*param_1)) {
  case 1:
    iVar6 = param_1[1];
    pcVar7 = &DAT_000438a5;
    goto LAB_00034754;
  case 2:
    pcVar5 = local_78;
    recovered_219e1(pcVar5,0x60,&DAT_00043a53,(double)pf_bits_float((uint32_t)param_1[2]));
    goto LAB_00034763;
  case 3:
    pcVar7 = &DAT_00042614;
    if ((char *)param_1[3] != (char *)0x0) {
      pcVar7 = (char *)param_1[3];
    }
    break;
  case 4:
    uVar1 = recovered_3483e((int *)param_2,&DAT_00043a65);
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
        if ((uVar1 != 0) &&
           (uVar3 = recovered_3483e((int *)param_2,&DAT_00042ba3), (char)uVar3 == '\0')) {
          return 0;
        }
        recovered_219e1(local_78,0x60,&DAT_00043a6a,(uint)*(byte *)(param_1[4] + uVar1));
        uVar3 = recovered_3483e((int *)param_2,local_78);
        uVar1 = uVar1 + 1;
        if ((char)uVar3 == '\0') {
          return 0;
        }
      }
      if ((local_14 < (uint)param_1[5]) &&
         (uVar1 = recovered_3483e((int *)param_2,&DAT_00043a6f), (char)uVar1 == '\0')) {
        return 0;
      }
    }
    pcVar5 = &DAT_00043309;
    goto LAB_00034763;
  case 5:
    pcVar7 = &DAT_000439a7;
    if (param_1[1] == 0) {
      pcVar7 = str_000439ac;
    }
    break;
  case 6:
    iVar6 = param_1[1];
    pcVar7 = str_00043a5f;
LAB_00034754:
    pcVar5 = local_78;
    recovered_219e1(pcVar5,0x60,pcVar7,iVar6);
LAB_00034763:
    uVar1 = recovered_3483e((int *)param_2,pcVar5);
    return uVar1;
  case 7:
    uVar1 = recovered_3483e((int *)param_2,&DAT_00043307);
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
          uVar1 = recovered_3483e((int *)param_2,&DAT_00043a74);
          if ((char)uVar1 == '\0') {
            return 0;
          }
          iVar6 = param_1[6];
        }
        uVar4 = recovered_3455a((int *)(*(int *)(iVar6 + 0x10) + local_14),param_2,local_18);
        uVar3 = uVar3 + 1;
        uVar1 = local_14 + 0x24;
        if ((char)uVar4 == '\0') {
          return 0;
        }
      }
    }
    pcVar7 = &DAT_00043309;
    break;
  case 8:
    uVar1 = recovered_3483e((int *)param_2,&DAT_000437eb);
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
          uVar1 = recovered_3483e((int *)param_2,&DAT_00043a74);
          if ((char)uVar1 == '\0') {
            return 0;
          }
          iVar2 = param_1[7];
        }
        pcVar7 = *(char **)(*(int *)(iVar2 + 0xc) + -4 + iVar6);
        pcVar5 = &DAT_00042614;
        if (pcVar7 != (char *)0x0) {
          pcVar5 = pcVar7;
        }
        uVar1 = recovered_3483e((int *)param_2,pcVar5);
        if ((char)uVar1 == '\0') {
          return 0;
        }
        uVar1 = recovered_3483e((int *)param_2,&DAT_00043a77);
        if ((char)uVar1 == '\0') {
          return 0;
        }
        uVar3 = recovered_3455a((int *)(*(int *)(param_1[7] + 0xc) + iVar6),param_2,local_18);
        uVar1 = local_14 + 1;
        iVar6 = iVar6 + 0x28;
        if ((char)uVar3 == '\0') {
          return 0;
        }
      }
    }
    pcVar7 = &DAT_000437ed;
    break;
  case 9:
    pcVar7 = str_00043a7a;
    break;
  default:
    pcVar7 = str_00043a85;
  }
switchD_000345a7_default:
  uVar1 = recovered_3483e((int *)param_2,pcVar7);
  return uVar1;
}
