#include "functions.h"
#undef DAT_0003f254
#define DAT_0003f254 (*(uint8_t *)(0x3f254U))
#undef DAT_0003f86e
#define DAT_0003f86e (*(uint8_t *)(0x3f86eU))
#undef DAT_0003fe86
#define DAT_0003fe86 (*(uint8_t *)(0x3fe86U))
#undef DAT_0003fe88
#define DAT_0003fe88 (*(uint8_t *)(0x3fe88U))
#undef DAT_0004036a
#define DAT_0004036a (*(uint8_t *)(0x4036aU))
#undef DAT_0004036c
#define DAT_0004036c (*(uint8_t *)(0x4036cU))
#undef DAT_000403f1
#define DAT_000403f1 (*(uint8_t *)(0x403f1U))
#undef DAT_00040424
#define DAT_00040424 (*(uint8_t *)(0x40424U))
#undef DAT_00040526
#define DAT_00040526 (*(uint8_t *)(0x40526U))
#undef DAT_000405d2
#define DAT_000405d2 (*(uint8_t *)(0x405d2U))
#undef DAT_000405e4
#define DAT_000405e4 (*(uint8_t *)(0x405e4U))
#undef DAT_000405e9
#define DAT_000405e9 (*(uint8_t *)(0x405e9U))
#undef DAT_000405ee
#define DAT_000405ee (*(uint8_t *)(0x405eeU))
#undef DAT_000405f3
#define DAT_000405f3 (*(uint8_t *)(0x405f3U))
#undef DAT_000405f6
#define DAT_000405f6 (*(uint8_t *)(0x405f6U))
#undef str_0004052b
#define str_0004052b (*(char (*)[1])(0x4052bU))
#undef str_000405d5
#define str_000405d5 (*(char (*)[1])(0x405d5U))
#undef str_000405de
#define str_000405de (*(char (*)[1])(0x405deU))
#undef str_000405f9
#define str_000405f9 (*(char (*)[1])(0x405f9U))
#undef str_00040604
#define str_00040604 (*(char (*)[1])(0x40604U))
#define local_18 (*(uint *)(frame + 124))
#define local_14 (*(uint *)(frame + 128))
#define pcVar8 (*(char * *)(frame + 16))
#define local_78 (*(char (*)[96])(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x31dd8
 */

uint recovered_31dd8(int *param_1,int param_2,uint param_3)

{
  unsigned char frame[180];

  undefined1 *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined1 *puVar6;
  char *out;
  int iVar7;

  if (param_2 == 0) {
    return 0;
  }
  if ((param_1 == (int *)0x0) || (*param_1 == 0)) {
    pcVar8 = &DAT_000403f1;
    goto switchD_00031e25_default;
  }
  if (0x10 < param_3) {
    pcVar8 = str_000405d5;
    goto switchD_00031e25_default;
  }
  switch((uintptr_t)(*param_1)) {
  case 1:
    iVar7 = param_1[1];
    pcVar8 = &DAT_00040424;
    goto LAB_00031fd2;
  case 2:
    out = local_78;
    recovered_219e1(out,0x60,&DAT_000405d2,(double)pf_bits_float((uint32_t)param_1[2]));
    goto LAB_00031fe1;
  case 3:
    pcVar8 = &DAT_0003f254;
    if ((char *)param_1[3] != (char *)0x0) {
      pcVar8 = (char *)param_1[3];
    }
    break;
  case 4:
    uVar2 = recovered_320bc((int *)param_2,&DAT_000405e4);
    if ((char)uVar2 == '\0') {
      return 0;
    }
    if (param_1[4] != 0) {
      local_14 = 0x20;
      if ((uint)param_1[5] < 0x20) {
        local_14 = param_1[5];
      }
      uVar2 = 0;
      while (local_14 != uVar2) {
        if ((uVar2 != 0) &&
           (uVar4 = recovered_320bc((int *)param_2,&DAT_0003f86e), (char)uVar4 == '\0')) {
          return 0;
        }
        recovered_219e1(local_78,0x60,&DAT_000405e9,(uint)*(byte *)(param_1[4] + uVar2));
        uVar4 = recovered_320bc((int *)param_2,local_78);
        uVar2 = uVar2 + 1;
        if ((char)uVar4 == '\0') {
          return 0;
        }
      }
      if ((local_14 < (uint)param_1[5]) &&
         (uVar2 = recovered_320bc((int *)param_2,&DAT_000405ee), (char)uVar2 == '\0')) {
        return 0;
      }
    }
    out = &DAT_0003fe88;
    goto LAB_00031fe1;
  case 5:
    pcVar8 = &DAT_00040526;
    if (param_1[1] == 0) {
      pcVar8 = str_0004052b;
    }
    break;
  case 6:
    iVar7 = param_1[1];
    pcVar8 = str_000405de;
LAB_00031fd2:
    out = local_78;
    recovered_219e1(out,0x60,pcVar8,iVar7);
LAB_00031fe1:
    uVar2 = recovered_320bc((int *)param_2,out);
    return uVar2;
  case 7:
    uVar2 = recovered_320bc((int *)param_2,&DAT_0003fe86);
    if ((char)uVar2 == '\0') {
      return 0;
    }
    local_18 = param_3;
    if (param_1[6] != 0) {
      local_18 = param_3 + 1;
      uVar2 = 0;
      uVar4 = 0;
      while (iVar7 = param_1[6], uVar4 < *(uint *)(iVar7 + 8)) {
        local_14 = uVar2;
        if (uVar4 != 0) {
          uVar2 = recovered_320bc((int *)param_2,&DAT_000405f3);
          if ((char)uVar2 == '\0') {
            return 0;
          }
          iVar7 = param_1[6];
        }
        uVar5 = recovered_31dd8((int *)(*(int *)(iVar7 + 0x10) + local_14),param_2,local_18);
        uVar4 = uVar4 + 1;
        uVar2 = local_14 + 0x24;
        if ((char)uVar5 == '\0') {
          return 0;
        }
      }
    }
    pcVar8 = &DAT_0003fe88;
    break;
  case 8:
    uVar2 = recovered_320bc((int *)param_2,&DAT_0004036a);
    if ((char)uVar2 == '\0') {
      return 0;
    }
    if (param_1[7] != 0) {
      local_18 = param_3 + 1;
      uVar2 = 0;
      iVar7 = 4;
      while (iVar3 = param_1[7], uVar2 < *(uint *)(iVar3 + 4)) {
        local_14 = uVar2;
        if (uVar2 != 0) {
          uVar2 = recovered_320bc((int *)param_2,&DAT_000405f3);
          if ((char)uVar2 == '\0') {
            return 0;
          }
          iVar3 = param_1[7];
        }
        puVar1 = *(undefined1 **)(*(int *)(iVar3 + 0xc) + -4 + iVar7);
        puVar6 = &DAT_0003f254;
        if (puVar1 != (undefined1 *)0x0) {
          puVar6 = puVar1;
        }
        uVar2 = recovered_320bc((int *)param_2,puVar6);
        if ((char)uVar2 == '\0') {
          return 0;
        }
        uVar2 = recovered_320bc((int *)param_2,&DAT_000405f6);
        if ((char)uVar2 == '\0') {
          return 0;
        }
        uVar4 = recovered_31dd8((int *)(*(int *)(param_1[7] + 0xc) + iVar7),param_2,local_18);
        uVar2 = local_14 + 1;
        iVar7 = iVar7 + 0x28;
        if ((char)uVar4 == '\0') {
          return 0;
        }
      }
    }
    pcVar8 = &DAT_0004036c;
    break;
  case 9:
    pcVar8 = str_000405f9;
    break;
  default:
    pcVar8 = str_00040604;
  }
switchD_00031e25_default:
  uVar2 = recovered_320bc((int *)param_2,pcVar8);
  return uVar2;
}
