/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020a2578 (*(uint8_t *)(0x20ec414U))
#define DAT_020a96d9 (*(uint8_t *)(0x20fd897U))
#define DAT_020a96de (*(uint8_t *)(0x20fd89cU))
#define local_238 (*(char (*)[320])(frame + 24))
#define local_34 (*(uint *)(frame + 540))
#define local_38 (*(uint *)(frame + 536))
#define local_3c (*(uint *)(frame + 532))
#define local_40 (*(uint *)(frame + 528))
#define local_44 (*(uint *)(frame + 524))
#define local_48 (*(uint *)(frame + 520))
#define local_4c (*(uint *)(frame + 516))
#define local_50 (*(undefined4 *)(frame + 512))
#define local_54 (*(undefined4 *)(frame + 508))
#define local_58 (*(uint *)(frame + 504))
#define local_5c (*(uint *)(frame + 500))
#define local_68 (*(ulong *)(frame + 488))
#define local_6c (*(uint *)(frame + 484))
#define local_78 (*(ulong *)(frame + 472))
#define local_80 (*(ulong *)(frame + 464))
#define local_88 (*(ulong *)(frame + 456))
#define local_90 (*(ulong *)(frame + 448))
#define local_98 (*(ulong *)(frame + 440))
#define local_a0 (*(ulong *)(frame + 432))
#define local_a8 (*(ulong *)(frame + 424))
#define local_b0 (*(ulong *)(frame + 416))
#define local_b8 (*(ulong *)(frame + 408))
#define local_f8 (*(char (*)[64])(frame + 344))
#define str_020a9603 (*(char (*)[1])(0x20fd7c1U))
#define str_020a9615 (*(char (*)[1])(0x20fd7d3U))
#define str_020a96ca (*(char (*)[1])(0x20fd888U))
#define str_020a96e2 (*(char (*)[1])(0x20fd8a0U))
#define str_020a96f0 (*(char (*)[1])(0x20fd8aeU))
#define str_020a96ff (*(char (*)[1])(0x20fd8bdU))
#define str_020a9712 (*(char (*)[1])(0x20fd8d0U))
#define str_020a9723 (*(char (*)[1])(0x20fd8e1U))
#define str_020a9736 (*(char (*)[1])(0x20fd8f4U))
#define str_020a9748 (*(char (*)[1])(0x20fd906U))
#define str_020a974e (*(char (*)[1])(0x20fd90cU))
uchar recovered_20e4b00(byte param_1,byte param_2,byte param_3)

{
  unsigned char frame[624] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  undefined7 in_register_00000011 = 0;
  char cVar7;
  char *pcVar8;
  uchar uVar9;
  uint uVar10;
  uint uVar11;

  local_5c = 0;
  local_58 = 0;
  local_54 = 0;
  local_50 = 0;
  uVar9 = '\0';
  uVar4 = recovered_20067d0(param_1,param_2,CONCAT71(in_register_00000011,param_3),0,4,&local_5c);
  uVar11 = local_5c;
  if ((((char)uVar4 != '\0') && (uVar9 = '\0', (short)local_5c != 0)) &&
     (local_4c = local_5c & 0xffff, local_4c != 0xffff)) {
    local_b8 = (ulong)(local_5c & 0xffff);
    uVar1 = (ulong)param_3;
    recovered_20067d0(param_1,param_2,uVar1,8,4,&local_58);
    recovered_20067d0(param_1,param_2,uVar1,4,4,&local_54);
    recovered_20067d0(param_1,param_2,uVar1,0xc,4,&local_50);
    uVar3 = local_58;
    local_68 = CONCAT44(PF_PART4(local_68, 4),local_58);
    uVar10 = local_58 >> 0x10;
    local_b0 = (ulong)(local_58 >> 0x18);
    local_a8 = (ulong)PF_PART1(local_50, 2);
    local_48 = 0;
    recovered_20067d0(param_1,param_2,uVar1,0x10,4,&local_48);
    local_44 = 0;
    recovered_20067d0(param_1,param_2,uVar1,0x14,4,&local_44);
    local_40 = 0;
    recovered_20067d0(param_1,param_2,uVar1,0x18,4,&local_40);
    local_3c = 0;
    recovered_20067d0(param_1,param_2,uVar1,0x1c,4,&local_3c);
    local_38 = 0;
    recovered_20067d0(param_1,param_2,uVar1,0x20,4,&local_38);
    local_34 = 0;
    recovered_20067d0(param_1,param_2,uVar1,0x24,4,&local_34);
    pf_varargs_20039e0__4__4__4_
              (local_f8,0x40,str_020a9603,(uint)param_1,(uint)param_2,(uint)param_3);
    uVar2 = local_b0;
    local_a0 = (ulong)(uVar10 & 0xff);
    uVar4 = (uint)local_68 >> 8;
    uVar5 = uVar4 & 0xff;
    local_98 = (ulong)uVar5;
    local_68 = (ulong)((uint)local_68 & 0xff);
    local_90 = (ulong)(ushort)local_54;
    local_88 = (ulong)local_48;
    local_80 = (ulong)local_44;
    local_78 = (ulong)local_40;
    local_6c = uVar10;
    recovered_2005a30(local_238,0x140,str_020a9615,(ulong)(uint)param_1,(ulong)param_2,uVar1,
                      local_b8,(ulong)(uVar11 >> 0x10),local_b0,local_a0,local_98,local_68,local_90,
                      local_a8,local_88,local_80,local_78,(ulong)local_3c,(ulong)local_38,
                      (ulong)local_34);
    uVar11 = (uint)uVar2;
    if ((char)(uVar3 >> 0x10) == '\x03' && uVar11 == 0xc) {
      uVar11 = uVar4 << 0x1c | uVar5 >> 4;
      if (uVar11 < 4) {
        pcVar8 = &DAT_020a2578 + *(int *)(&DAT_020a2578 + (ulong)uVar11 * 4);
      }
      else {
        pcVar8 = str_020a96ca;
      }
    }
    else {
      cVar7 = (char)local_6c;
      if (uVar11 == 1 && cVar7 == '\x06') {
        pcVar8 = &DAT_020a96d9;
      }
      else if (uVar11 == 4 && cVar7 == '\x03') {
        pcVar8 = &DAT_020a96de;
      }
      else if ((char)uVar2 == '\x02') {
        pcVar8 = str_020a9723;
        if (local_4c == 0x14e4) {
          pcVar8 = str_020a9712;
        }
      }
      else if ((uVar11 & 0xff) == 6) {
        pcVar8 = str_020a9736;
      }
      else if ((uVar11 & 0xff) == 3) {
        pcVar6 = str_020a96ff;
        if (local_4c == 0x10de) {
          pcVar6 = str_020a96f0;
        }
        pcVar8 = str_020a96e2;
        if (local_4c != 0x8086) {
          pcVar8 = pcVar6;
        }
      }
      else {
        pcVar8 = str_020a9748;
        if (cVar7 != '\x05') {
          pcVar8 = str_020a974e;
        }
        if (uVar11 != 0xc) {
          pcVar8 = str_020a974e;
        }
      }
    }
    recovered_208d6d0(local_f8,(long)pcVar8,(long)local_238);
    uVar9 = '\x01';
  }
  return uVar9;
}
