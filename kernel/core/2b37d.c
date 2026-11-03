#include "functions.h"
#undef DAT_0002ca9c
#define DAT_0002ca9c (*(uint8_t *)(0x2ca9cU))
#undef DAT_0002cee1
#define DAT_0002cee1 (*(uint8_t *)(0x2cee1U))
#undef DAT_0002cf06
#define DAT_0002cf06 (*(uint8_t *)(0x2cf06U))
#undef DAT_0002cf1e
#define DAT_0002cf1e (*(uint8_t *)(0x2cf1eU))
#undef DAT_0002cf43
#define DAT_0002cf43 (*(uint8_t *)(0x2cf43U))
#undef DAT_0002cf78
#define DAT_0002cf78 (*(uint8_t *)(0x2cf78U))
#undef DAT_0002d051
#define DAT_0002d051 (*(uint8_t *)(0x2d051U))
#undef DAT_0002d054
#define DAT_0002d054 (*(uint8_t *)(0x2d054U))
#undef DAT_0002d057
#define DAT_0002d057 (*(uint8_t *)(0x2d057U))
#undef DAT_0002d06b
#define DAT_0002d06b (*(uint8_t *)(0x2d06bU))
#undef DAT_0002d070
#define DAT_0002d070 (*(uint8_t *)(0x2d070U))
#undef DAT_0002d072
#define DAT_0002d072 (*(uint8_t *)(0x2d072U))
#undef DAT_0002d077
#define DAT_0002d077 (*(uint8_t *)(0x2d077U))
#undef DAT_0002d07c
#define DAT_0002d07c (*(uint8_t *)(0x2d07cU))
#undef DAT_0002d07f
#define DAT_0002d07f (*(uint8_t *)(0x2d07fU))
#undef str_0002cf7d
#define str_0002cf7d (*(char (*)[1])(0x2cf7dU))
#undef str_0002d05c
#define str_0002d05c (*(char (*)[1])(0x2d05cU))
#undef str_0002d065
#define str_0002d065 (*(char (*)[1])(0x2d065U))
#undef str_0002d082
#define str_0002d082 (*(char (*)[1])(0x2d082U))
#define local_78 (*(char (*)[96])(frame + 28))
#define local_18 (*(uint *)(frame + 124))
#define local_14 (*(uint *)(frame + 128))
#define pcVar8 (*(char * *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2b37d
 */

uint recovered_2b37d(int *param_1,int *param_2,uint param_3)

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
  
  if (param_2 == (int *)0x0) {
    return 0;
  }
  if ((param_1 == (int *)0x0) || (*param_1 == 0)) {
    pcVar8 = &DAT_0002d057;
    goto switchD_0002b3ca_default;
  }
  if (0x10 < param_3) {
    pcVar8 = str_0002d05c;
    goto switchD_0002b3ca_default;
  }
  switch((uintptr_t)(*param_1)) {
  case 1:
    iVar7 = param_1[1];
    pcVar8 = &DAT_0002d051;
    goto LAB_0002b577;
  case 2:
    out = local_78;
    recovered_216bc(out,0x60,&DAT_0002d054,(double)pf_bits_float((uint32_t)param_1[2]));
    goto LAB_0002b586;
  case 3:
    pcVar8 = &DAT_0002ca9c;
    if ((char *)param_1[3] != (char *)0x0) {
      pcVar8 = (char *)param_1[3];
    }
    break;
  case 4:
    uVar2 = recovered_2b68d(param_2,&DAT_0002d06b);
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
        if ((uVar2 != 0) && (uVar4 = recovered_2b68d(param_2,&DAT_0002d070), (char)uVar4 == '\0')) {
          return 0;
        }
        recovered_216bc(local_78,0x60,&DAT_0002d072,(uint)*(byte *)(param_1[4] + uVar2));
        uVar4 = recovered_2b68d(param_2,local_78);
        uVar2 = uVar2 + 1;
        if ((char)uVar4 == '\0') {
          return 0;
        }
      }
      if ((local_14 < (uint)param_1[5]) &&
         (uVar2 = recovered_2b68d(param_2,&DAT_0002d077), (char)uVar2 == '\0')) {
        return 0;
      }
    }
    out = &DAT_0002cf06;
    goto LAB_0002b586;
  case 5:
    pcVar8 = &DAT_0002cf78;
    if (param_1[1] == 0) {
      pcVar8 = str_0002cf7d;
    }
    break;
  case 6:
    iVar7 = param_1[1];
    pcVar8 = str_0002d065;
LAB_0002b577:
    out = local_78;
    recovered_216bc(out,0x60,pcVar8,iVar7);
LAB_0002b586:
    uVar2 = recovered_2b68d(param_2,out);
    return uVar2;
  case 7:
    uVar2 = recovered_2b68d(param_2,&DAT_0002cee1);
    if ((char)uVar2 == '\0') {
      return 0;
    }
    local_18 = param_3;
    if (param_1[6] != 0) {
      local_18 = param_3 + 1;
      uVar2 = 0;
      uVar4 = 0;
      while (iVar7 = param_1[6], uVar4 < *(uint *)(iVar7 + 4)) {
        local_14 = uVar2;
        if (uVar4 != 0) {
          uVar2 = recovered_2b68d(param_2,&DAT_0002d07c);
          if ((char)uVar2 == '\0') {
            return 0;
          }
          iVar7 = param_1[6];
        }
        uVar5 = recovered_2b37d((int *)(*(int *)(iVar7 + 0xc) + local_14),param_2,local_18);
        uVar4 = uVar4 + 1;
        uVar2 = local_14 + 0x20;
        if ((char)uVar5 == '\0') {
          return 0;
        }
      }
    }
    pcVar8 = &DAT_0002cf06;
    break;
  case 8:
    uVar2 = recovered_2b68d(param_2,&DAT_0002cf1e);
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
          uVar2 = recovered_2b68d(param_2,&DAT_0002d07c);
          if ((char)uVar2 == '\0') {
            return 0;
          }
          iVar3 = param_1[7];
        }
        puVar1 = *(undefined1 **)(*(int *)(iVar3 + 0xc) + -4 + iVar7);
        puVar6 = &DAT_0002ca9c;
        if (puVar1 != (undefined1 *)0x0) {
          puVar6 = puVar1;
        }
        uVar2 = recovered_2b68d(param_2,puVar6);
        if ((char)uVar2 == '\0') {
          return 0;
        }
        uVar2 = recovered_2b68d(param_2,&DAT_0002d07f);
        if ((char)uVar2 == '\0') {
          return 0;
        }
        uVar4 = recovered_2b37d((int *)(*(int *)(param_1[7] + 0xc) + iVar7),param_2,local_18);
        uVar2 = local_14 + 1;
        iVar7 = iVar7 + 0x24;
        if ((char)uVar4 == '\0') {
          return 0;
        }
      }
    }
    pcVar8 = &DAT_0002cf43;
    break;
  default:
    pcVar8 = str_0002d082;
  }
switchD_0002b3ca_default:
  uVar2 = recovered_2b68d(param_2,pcVar8);
  return uVar2;
}

