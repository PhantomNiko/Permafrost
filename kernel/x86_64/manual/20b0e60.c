/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020e6080 (*(uint8_t volatile *)(0x22740f0U))
#define DAT_020e6088 (*(uint64_t volatile *)(0x22740f8U))
#define DAT_020e6090 (*(uint64_t volatile *)(0x2274100U))
#define DAT_020e60a8 (*(uint64_t volatile *)(0x2274118U))
#define Ram00000000020e6090 (*(uint128 volatile *)(0x2274100U))
#define Ram00000000020e60a0 (*(uint128 volatile *)(0x2274110U))
#define Ram00000000020e60b0 (*(uint128 volatile *)(0x2274120U))
#define local_38 (*(int * *)(frame + 104))
#define local_40 (*(undefined8 * *)(frame + 96))
#define local_48 (*(undefined8 * *)(frame + 88))
#define local_58 (*(undefined8 *)(frame + 72))
#define local_68 (*(undefined8 *)(frame + 56))
#define local_78 (*(undefined8 *)(frame + 40))
#define local_80 (*(undefined4 *)(frame + 32))
#define local_88 (*(undefined8 *)(frame + 24))
#define piStack_50 (*(int * *)(frame + 80))
#define str_020a3bb7 (*(char (*)[1])(0x20f4378U))
#define str_020ab182 (*(char (*)[1])(0x20fc7fdU))
#define str_020ab1af (*(char (*)[1])(0x20fc82aU))
#define uStack_60 (*(undefined8 *)(frame + 64))
#define uStack_70 (*(undefined8 *)(frame + 48))
uint recovered_20b0e60(int *param_1,int *param_2,undefined8 *param_3,ulong param_4,
                      undefined8 *param_5,undefined8 in_R9)

{
  unsigned char frame[192] __attribute__((aligned(16))) = {0};

  char cVar1;
  uchar uVar2;
  uint uVar3;
  ulong uVar4;
  char *format;
  undefined8 *puVar5;
  char *pcVar6;
  ulong uVar7;

  if (param_2 == (int *)0x0) {
    return 0;
  }
  local_38 = param_1;
  recovered_20c0b60();
  *param_2 = *param_2 + 1;
  DAT_020e6088 = param_2;
  Ram00000000020e6090 = ZEXT816(0);
  Ram00000000020e60a0 = ZEXT816(0);
  Ram00000000020e60b0 = ZEXT816(0);
  uVar2 = recovered_20df320(0x22740f0U,0,*(ulong *)(param_2 + 0x1e));
  if (uVar2 == '\0') {
    recovered_20c0b60();
    pcVar6 = str_020a3bb7;
    if (*(char **)(param_2 + 4) != (char *)0x0) {
      pcVar6 = *(char **)(param_2 + 4);
    }
LAB_02074295:
    format = str_020ab182;
LAB_0207429c:
    uVar3 = 0;
    pf_varargs_205eb00___(local_38,pcVar6,format);
  }
  else {
    pcVar6 = *(char **)(param_2 + 4);
    if ((pcVar6 != (char *)0x0) && (*pcVar6 != '\0')) {
      local_80 = 0;
      local_78 = 0;
      uStack_70 = 0;
      local_68 = 0;
      uStack_60 = 0;
      local_58 = 0;
      local_88 = 9;
      *param_2 = *param_2 + 1;
      piStack_50 = param_2;
      uVar3 = recovered_20df440(&DAT_020e6090,(long)pcVar6,(long)&local_88);
      recovered_205ec00(&local_88);
      if ((char)uVar3 == '\0') {
        recovered_20c0b60();
        pcVar6 = *(char **)(param_2 + 4);
        goto LAB_02074295;
      }
    }
    local_48 = param_5;
    local_40 = param_3;
    if (*(long *)(param_2 + 0x1a) == 0) {
      uVar4 = 0;
      cVar1 = *(char *)((long)param_2 + 10);
    }
    else {
      uVar7 = 0;
      do {
        local_88 = 0;
        local_80 = 0;
        local_78 = 0;
        uStack_70 = 0;
        local_68 = 0;
        uStack_60 = 0;
        local_58 = 0;
        piStack_50 = (int *)0x0;
        puVar5 = &local_88;
        if (uVar7 < param_4) {
          puVar5 = param_3;
        }
        uVar3 = recovered_20df440(&DAT_020e6090,*(long *)(*(long *)(param_2 + 0x18) + uVar7 * 8),
                                  (long)puVar5);
        if ((char)uVar3 == '\0') {
          recovered_20c0b60();
          pcVar6 = *(char **)(*(long *)(param_2 + 0x18) + uVar7 * 8);
          goto LAB_02074295;
        }
        uVar7 = uVar7 + 1;
        uVar4 = *(ulong *)(param_2 + 0x1a);
        param_3 = param_3 + 8;
      } while (uVar7 < uVar4);
      cVar1 = *(char *)((long)param_2 + 10);
    }
    if (cVar1 == '\x01') {
      uVar7 = param_4 - uVar4;
      if (param_4 < uVar4) {
        uVar7 = 0;
      }
      puVar5 = local_40 + uVar4 * 8;
      if (param_4 <= uVar4) {
        puVar5 = (undefined8 *)0x0;
      }
      uVar2 = recovered_20df630(&DAT_020e60a8,(long)puVar5,uVar7);
      if (uVar2 == '\0') {
        recovered_20c0b60();
        pcVar6 = str_020a3bb7;
        if (*(char **)(param_2 + 4) != (char *)0x0) {
          pcVar6 = *(char **)(param_2 + 4);
        }
        format = str_020ab1af;
        goto LAB_0207429c;
      }
    }
    puVar5 = local_48;
    DAT_020e6080 = 1;
    recovered_205ec00(local_48);
    *puVar5 = 0;
    *(undefined4 *)(puVar5 + 1) = 0;
    puVar5[2] = 0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = 0;
    puVar5[6] = 0;
    puVar5[7] = 0;
    uVar3 = (uint)CONCAT71((int7)((ulong)param_2 >> 8),1);
  }
  return uVar3;
}
