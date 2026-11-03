#include "functions.h"
#undef DAT_0004627c
#define DAT_0004627c (*(uint8_t *)(0x4627cU))
#undef DAT_0004680b
#define DAT_0004680b (*(uint8_t *)(0x4680bU))
#undef DAT_000470ad
#define DAT_000470ad (*(uint8_t *)(0x470adU))
#undef DAT_000470af
#define DAT_000470af (*(uint8_t *)(0x470afU))
#undef DAT_00047591
#define DAT_00047591 (*(uint8_t *)(0x47591U))
#undef DAT_00047593
#define DAT_00047593 (*(uint8_t *)(0x47593U))
#undef DAT_00047618
#define DAT_00047618 (*(uint8_t *)(0x47618U))
#undef DAT_0004764b
#define DAT_0004764b (*(uint8_t *)(0x4764bU))
#undef DAT_0004774d
#define DAT_0004774d (*(uint8_t *)(0x4774dU))
#undef DAT_000477f9
#define DAT_000477f9 (*(uint8_t *)(0x477f9U))
#undef DAT_0004780b
#define DAT_0004780b (*(uint8_t *)(0x4780bU))
#undef DAT_00047810
#define DAT_00047810 (*(uint8_t *)(0x47810U))
#undef DAT_00047815
#define DAT_00047815 (*(uint8_t *)(0x47815U))
#undef DAT_0004781a
#define DAT_0004781a (*(uint8_t *)(0x4781aU))
#undef DAT_0004781d
#define DAT_0004781d (*(uint8_t *)(0x4781dU))
#undef str_00047752
#define str_00047752 (*(char (*)[1])(0x47752U))
#undef str_000477fc
#define str_000477fc (*(char (*)[1])(0x477fcU))
#undef str_00047805
#define str_00047805 (*(char (*)[1])(0x47805U))
#undef str_00047820
#define str_00047820 (*(char (*)[1])(0x47820U))
#undef str_0004782b
#define str_0004782b (*(char (*)[1])(0x4782bU))
#define local_78 (*(char (*)[96])(frame + 28))
#define local_18 (*(uint *)(frame + 124))
#define local_14 (*(uint *)(frame + 128))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x35ed4
 */

uint recovered_35ed4(int *param_1,int *param_2,uint param_3)

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
    pcVar7 = &DAT_00047618;
    goto switchD_00035f21_default;
  }
  if (0x10 < param_3) {
    pcVar7 = str_000477fc;
    goto switchD_00035f21_default;
  }
  switch((uintptr_t)(*param_1)) {
  case 1:
    iVar6 = param_1[1];
    pcVar7 = &DAT_0004764b;
    goto LAB_000360ce;
  case 2:
    pcVar5 = local_78;
    recovered_21de7(pcVar5,0x60,&DAT_000477f9,(double)pf_bits_float((uint32_t)param_1[2]));
    goto LAB_000360dd;
  case 3:
    pcVar7 = &DAT_0004627c;
    if ((char *)param_1[3] != (char *)0x0) {
      pcVar7 = (char *)param_1[3];
    }
    break;
  case 4:
    uVar1 = recovered_361b8(param_2,&DAT_0004780b);
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
        if ((uVar1 != 0) && (uVar3 = recovered_361b8(param_2,&DAT_0004680b), (char)uVar3 == '\0')) {
          return 0;
        }
        recovered_21de7(local_78,0x60,&DAT_00047810,(uint)*(byte *)(param_1[4] + uVar1));
        uVar3 = recovered_361b8(param_2,local_78);
        uVar1 = uVar1 + 1;
        if ((char)uVar3 == '\0') {
          return 0;
        }
      }
      if ((local_14 < (uint)param_1[5]) &&
         (uVar1 = recovered_361b8(param_2,&DAT_00047815), (char)uVar1 == '\0')) {
        return 0;
      }
    }
    pcVar5 = &DAT_000470af;
    goto LAB_000360dd;
  case 5:
    pcVar7 = &DAT_0004774d;
    if (param_1[1] == 0) {
      pcVar7 = str_00047752;
    }
    break;
  case 6:
    iVar6 = param_1[1];
    pcVar7 = str_00047805;
LAB_000360ce:
    pcVar5 = local_78;
    recovered_21de7(pcVar5,0x60,pcVar7,iVar6);
LAB_000360dd:
    uVar1 = recovered_361b8(param_2,pcVar5);
    return uVar1;
  case 7:
    uVar1 = recovered_361b8(param_2,&DAT_000470ad);
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
          uVar1 = recovered_361b8(param_2,&DAT_0004781a);
          if ((char)uVar1 == '\0') {
            return 0;
          }
          iVar6 = param_1[6];
        }
        uVar4 = recovered_35ed4((int *)(*(int *)(iVar6 + 0x10) + local_14),param_2,local_18);
        uVar3 = uVar3 + 1;
        uVar1 = local_14 + 0x24;
        if ((char)uVar4 == '\0') {
          return 0;
        }
      }
    }
    pcVar7 = &DAT_000470af;
    break;
  case 8:
    uVar1 = recovered_361b8(param_2,&DAT_00047591);
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
          uVar1 = recovered_361b8(param_2,&DAT_0004781a);
          if ((char)uVar1 == '\0') {
            return 0;
          }
          iVar2 = param_1[7];
        }
        pcVar7 = *(char **)(*(int *)(iVar2 + 0xc) + -4 + iVar6);
        pcVar5 = &DAT_0004627c;
        if (pcVar7 != (char *)0x0) {
          pcVar5 = pcVar7;
        }
        uVar1 = recovered_361b8(param_2,pcVar5);
        if ((char)uVar1 == '\0') {
          return 0;
        }
        uVar1 = recovered_361b8(param_2,&DAT_0004781d);
        if ((char)uVar1 == '\0') {
          return 0;
        }
        uVar3 = recovered_35ed4((int *)(*(int *)(param_1[7] + 0xc) + iVar6),param_2,local_18);
        uVar1 = local_14 + 1;
        iVar6 = iVar6 + 0x28;
        if ((char)uVar3 == '\0') {
          return 0;
        }
      }
    }
    pcVar7 = &DAT_00047593;
    break;
  case 9:
    pcVar7 = str_00047820;
    break;
  default:
    pcVar7 = str_0004782b;
  }
switchD_00035f21_default:
  uVar1 = recovered_361b8(param_2,pcVar7);
  return uVar1;
}
