/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_0208e2dc (*(uint8_t *)(0x20c5084U))
#define local_14 (*(undefined4 * *)(frame + 124))
#define local_18 (*(undefined4 * *)(frame + 120))
#define local_1c (*(uint *)(frame + 116))
#define local_20 (*(uint *)(frame + 112))
#define local_24 (*(void * *)(frame + 108))
#define local_28 (*(uint *)(frame + 104))
#define local_2c (*(uint *)(frame + 100))
#define local_30 (*(ulong *)(frame + 96))
#define local_34 (*(ulong *)(frame + 92))
#define local_38 (*(ulong * *)(frame + 88))
#define local_3c (*(char * *)(frame + 84))
#define local_40 (*(uint *)(frame + 80))
#define local_44 (*(uint *)(frame + 76))
#define local_48 (*(uint * *)(frame + 72))
#define local_4c (*(void * *)(frame + 68))
#define local_50 (*(undefined4 *)(frame + 64))
#define local_54 (*(undefined4 *)(frame + 60))
#define local_58 (*(undefined4 *)(frame + 56))
#define local_5c (*(undefined4 *)(frame + 52))
#define local_60 (*(undefined4 *)(frame + 48))
#define local_64 (*(undefined4 *)(frame + 44))
#define local_68 (*(undefined4 *)(frame + 40))
#define local_6c (*(undefined4 *)(frame + 36))
#define local_70 (*(ulong *)(frame + 32))
#define str_02097338 (*(char (*)[1])(0x20d57c7U))
#define str_0209734c (*(char (*)[1])(0x20d57dbU))
#define str_02097443 (*(char (*)[1])(0x20d58cfU))
uchar recovered_207de10(long param_1,ulong *param_2,ulong param_3,ulong param_4,ulong *param_5)

{
  unsigned char frame[176] __attribute__((aligned(16))) = {0};

  uchar uVar1;
  ulong size;
  undefined4 *puVar2;
  void *pf_output_slot;
  int iVar3;
  undefined4 *puVar4;
  uint incoming_edx;
  ulong *puVar5;
  uint uVar6;
  byte bVar7;
  char *pcVar8;

  bVar7 = 0;
  if ((((param_4 <= param_3) || (param_2 == (ulong *)0x0)) || (param_5 == (ulong *)0x0)) ||
     (*param_2 < param_4)) {
    pcVar8 = str_02097338;
LAB_02053abd:
    pf_varargs_204ff60___((void *)param_1,(char *)0x0,pcVar8);
    return '\0';
  }
  local_20 = 0;
  local_1c = 0;
  local_18 = (undefined4 *)0x0;
  local_14 = (undefined4 *)0x0;
  local_28 = 0;
  local_38 = param_2;
  local_24 = (void *)param_1;
  do {
    uVar6 = local_20;
    pcVar8 = *(char **)(local_38[2] + param_3 * 4);
    local_3c = &DAT_0208e2dc;
    if (pcVar8 != (char *)0x0) {
      local_3c = pcVar8;
    }
    size = recovered_2002270(local_3c);
    puVar4 = local_14;
    local_40 = uVar6 + 1;
    local_2c = uVar6;
    if (local_28 < local_40) {
      uVar6 = 8;
      if (local_28 != 0) {
        uVar6 = local_28;
      }
      for (; uVar6 < local_40; uVar6 = uVar6 * 2) {
        if ((int)uVar6 < 0) {
          uVar6 = local_40;
          break;
        }
      }
      local_34 = param_3;
      local_30 = size;
      puVar2 = recovered_2001860(local_14,uVar6 * 4);
      if (puVar2 != (undefined4 *)0x0) {
        iVar3 = uVar6 - local_28;
        if (local_28 <= uVar6 && iVar3 != 0) {
          puVar4 = puVar2 + local_28;
          do {
            *puVar4 = 0;
            puVar4 = puVar4 + 1;
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
        }
        size = local_30;
        param_3 = local_34;
        local_28 = uVar6;
        local_1c = uVar6;
        local_18 = puVar2;
        local_14 = puVar2;
        goto LAB_02053bce;
      }
LAB_02053c04:
      if (local_2c != 0) {
        iVar3 = local_20 + (local_20 == 0);
        puVar2 = puVar4;
        do {
          recovered_2001710((void *)*puVar2);
          puVar2 = puVar2 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      recovered_2001710(puVar4);
      pcVar8 = str_0209734c;
      param_1 = (long)local_24;
      goto LAB_02053abd;
    }
LAB_02053bce:
    pf_output_slot = recovered_2001650(size + 1);
    if (pf_output_slot == (void *)0x0) {
      puVar4 = local_14;
      goto LAB_02053c04;
    }
    if (size != 0) {
      recovered_2001b70(pf_output_slot,local_3c,size);
    }
    *(undefined1 *)((int)pf_output_slot + size) = 0;
    local_20 = local_40;
    local_14[local_2c] = pf_output_slot;
    param_3 = param_3 + 1;
  } while (param_3 != param_4);
  local_4c = local_24;
  local_48 = &local_20;
  local_44 = 0;
  local_70 = 0;
  local_6c = 0;
  local_68 = 0;
  local_64 = 0;
  local_60 = 0;
  local_5c = 0;
  local_58 = 0;
  local_54 = 0;
  local_50 = 0;
  uVar1 = recovered_207f710((ulonglong *)&local_4c,&local_70);
  if (uVar1 != '\0') {
    if (local_44 == local_20) {
      recovered_2043a90(param_5,incoming_edx);
      puVar5 = &local_70;
      for (iVar3 = 9; iVar3 != 0; iVar3 = iVar3 + -1) {
        *param_5 = *puVar5;
        puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
        param_5 = param_5 + (uint)bVar7 * -2 + 1;
      }
      uVar1 = '\x01';
      goto joined_r0x02053d00;
    }
    recovered_2043a90(&local_70,incoming_edx);
    pf_varargs_204ff60___(local_24,(char *)local_18[local_44],str_02097443);
  }
  uVar1 = '\0';
joined_r0x02053d00:
  if (local_20 != 0) {
    uVar6 = 0;
    do {
      recovered_2001710((void *)local_18[uVar6]);
      uVar6 = uVar6 + 1;
    } while (uVar6 < local_20);
  }
  recovered_2001710(local_18);
  return uVar1;
}
