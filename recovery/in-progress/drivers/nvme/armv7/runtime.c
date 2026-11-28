/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_10000ba4
#define DAT_10000ba4 (*(uint32_t *)(0x10000ba4U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000b98
 */

void * recovered_10000b98(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return (void *)(((uintptr_t)pf_module_state + 0x4280U));
}

#undef DAT_10000ba4

#undef DAT_10000ed4
#define DAT_10000ed4 (*(int *)(0x10000ed4U))
#undef DAT_10000ed8
#define DAT_10000ed8 (*(uint64_t *)(0x10000ed8U))
#undef DAT_10000ee0
#define DAT_10000ee0 (*(uint64_t *)(0x10000ee0U))
#undef DAT_10000ee8
#define DAT_10000ee8 (*(int *)(0x10000ee8U))
#undef DAT_10000eec
#define DAT_10000eec (*(int *)(0x10000eecU))
#undef DAT_10000ef0
#define DAT_10000ef0 (*(int *)(0x10000ef0U))
#undef DAT_10000ef4
#define DAT_10000ef4 (*(int *)(0x10000ef4U))
#undef DAT_10000ef8
#define DAT_10000ef8 (*(int *)(0x10000ef8U))
#undef DAT_10000efc
#define DAT_10000efc (*(int *)(0x10000efcU))
#undef DAT_10000f00
#define DAT_10000f00 (*(int *)(0x10000f00U))
#undef DAT_10000f04
#define DAT_10000f04 (*(int *)(0x10000f04U))
#undef DAT_10000f08
#define DAT_10000f08 (*(int *)(0x10000f08U))
#undef DAT_10000f0c
#define DAT_10000f0c (*(int *)(0x10000f0cU))
#undef DAT_10000f10
#define DAT_10000f10 (*(int *)(0x10000f10U))
#undef DAT_10000f14
#define DAT_10000f14 (*(int *)(0x10000f14U))
#undef DAT_10000f18
#define DAT_10000f18 (*(int *)(0x10000f18U))
#undef DAT_10000f1c
#define DAT_10000f1c (*(int *)(0x10000f1cU))
#undef DAT_10000f20
#define DAT_10000f20 (*(int *)(0x10000f20U))
#define local_1cc (*(int *)(pf_stack_frame + 84))
#define uStack_1f0 (*(undefined4 *)(pf_stack_frame + 48))
#define uStack_1ec (*(undefined4 *)(pf_stack_frame + 52))
#define uStack_1e8 (*(undefined4 *)(pf_stack_frame + 56))
#define uStack_1d8 (*(undefined8 *)(pf_stack_frame + 72))
#define auStack_1c4 (*(undefined1 (*)[452])(pf_stack_frame + 92))
#define auStack_184 (*(undefined1 (*)[388])(pf_stack_frame + 156))
#define auStack_144 (*(undefined1 (*)[324])(pf_stack_frame + 220))
#define auStack_e4 (*(undefined1 (*)[228])(pf_stack_frame + 316))
#define local_210 (*(byte (*)[528])(pf_stack_frame + 16))
#define local_20c (*(int *)(pf_stack_frame + 20))
#define local_208 (*(int *)(pf_stack_frame + 24))
#define local_204 (*(int *)(pf_stack_frame + 28))
#define local_200 (*(int *)(pf_stack_frame + 32))
#define local_1fc (*(int *)(pf_stack_frame + 36))
#define local_1f8 (*(int *)(pf_stack_frame + 40))
#define local_1f4 (*(undefined4 *)(pf_stack_frame + 44))
#define local_1e4 (*(undefined4 *)(pf_stack_frame + 60))
#define local_1e0 (*(undefined8 *)(pf_stack_frame + 64))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000ba8
 */

uint recovered_10000ba8(void *api)

{
  unsigned char pf_stack_frame[576] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  int iVar3;
  int extraout_r0 = 0;
  int *piVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint uVar7;
  int iVar8;

  iVar3 = (*(uint32_t *)(uint32_t[]){0x38e0ULL});
  iVar2 = (*(uint32_t *)(uint32_t[]){0x54584b57ULL});
  if (api == (void *)0x0) {
    return 0;
  }
  if (*(int *)api != (*(uint32_t *)(uint32_t[]){0x54584b57ULL})) {
    return 0;
  }
  if (*(int *)((int)api + 4) != 1100000) {
    return 0;
  }
  if (*(uint *)((int)api + 8) < 0xf8) {
    return 0;
  }
  iVar8 = 0;
  puVar6 = (undefined4 *)(((uintptr_t)pf_module_state + 0x768U));
  *(undefined4 *)(((uintptr_t)pf_module_state + 0x76cU)) = 0;
  *puVar6 = 0;
  recovered_10000f24((undefined1 *)(((uintptr_t)pf_module_state + 0x298U)),0x430);
  recovered_10000f24((undefined1 *)(((uintptr_t)pf_module_state + 0x6c8U)),0xa0);
  *(undefined4 *)(((uintptr_t)pf_module_state+0x774U)) = 0;
  *(void **)(((uintptr_t)pf_module_state+0x770U)) = api;
  if (((*(int *)api == iVar2) && (0x5f < *(uint *)((int)api + 8))) &&
     (*(int *)((int)api + 0x5c) != 0)) {
    for (uVar1 = 0; uVar1 != 0x100; uVar1 = uVar1 + 1) {
      for (uVar5 = 0; uVar5 != 0x20; uVar5 = uVar5 + 1) {
        iVar2 = recovered_10002194(api,uVar1 & 0xff,uVar5 & 0xff,0,(undefined1 *)&local_1e0);
        if (iVar2 != 0) {
          iVar2 = recovered_10000f48(api,(byte *)&local_1e0);
          iVar8 = iVar2 + iVar8;
          if (0x7fffffff < (uint)(int)PF_PART1(uStack_1d8, 4)) {
            for (uVar7 = 1; uVar7 != 8; uVar7 = uVar7 + 1) {
              iVar2 = recovered_10002194(api,uVar1 & 0xff,uVar5 & 0xff,uVar7 & 0xff,local_210);
              if (iVar2 != 0) {
                iVar2 = recovered_10000f48(api,local_210);
                iVar8 = iVar2 + iVar8;
              }
            }
          }
        }
      }
    }
    puVar6 = (undefined4 *)(((uintptr_t)pf_module_state + 0x768U));
    iVar3 = *(int *)(((uintptr_t)pf_module_state + 0x774U));
    iVar2 = (*(uint32_t *)(uint32_t[]){0x54584b57ULL});
    if (iVar3 != 0) goto LAB_10000d4c;
  }
  recovered_10001da8(api,((uintptr_t)pf_module_state + 0x24U));
  iVar3 = extraout_r0;
LAB_10000d4c:
  if (iVar8 != 0) {
    iVar3 = puVar6[1];
  }
  if (iVar8 != 0 && iVar3 != 0) {
    uStack_1f0 = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 4);
    uStack_1ec = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 8);
    uStack_1e8 = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 12);
    local_1f4 = 0;
    local_1e4 = 0;
    local_1f8 = ((uintptr_t)&recovered_1000208c);
    local_1fc = ((uintptr_t)&recovered_10001f74);
    local_200 = ((uintptr_t)&recovered_10001f58);
    local_204 = ((uintptr_t)&recovered_10001f3c);
    local_208 = ((uintptr_t)&recovered_10001e78);
    local_210[0] = 3;
    local_210[1] = 0;
    local_210[2] = 0;
    local_210[3] = 0;
    local_20c = iVar3;
    if (((*(int *)api == iVar2) && (0xd3 < *(uint *)((int)api + 8))) &&
       ((*(code **)((int)api + 0xd0) != (code *)0x0 &&
        (iVar3 = (**(code **)((int)api + 0xd0))(local_210), iVar3 != 0)))) {
      recovered_10000f24((undefined1 *)&local_1e0,0x1bc);
      local_1e0 = (*(uint64_t *)(uint64_t[]){0x1000001bcULL});
      uStack_1d8 = (*(uint64_t *)(uint64_t[]){0x1300000011ULL});
      local_1cc = ((uintptr_t)&recovered_100035c8);
      recovered_100023cc(auStack_1c4,0x40,(char *)(((uintptr_t)pf_module_state + 0x185U)));
      recovered_100023cc(auStack_184,0x40,(char *)(((uintptr_t)pf_module_state + 0x199U)));
      recovered_100023cc(auStack_144,0x60,(char *)(((uintptr_t)pf_module_state + 0x1a6U)));
      recovered_100023cc(auStack_e4,0xc0,(char *)(((uintptr_t)pf_module_state + 0x1b4U)));
      piVar4 = (int *)puVar6[2];
      if (((piVar4 != (int *)0x0) && (*piVar4 == iVar2)) &&
         ((0xef < (uint)piVar4[2] &&
          (((code *)piVar4[0x3b] != (code *)0x0 &&
           (iVar2 = (*(code *)piVar4[0x3b])(&local_1e0), iVar2 != 0)))))) {
        return 1;
      }
    }
  }
  recovered_10001de8(api);
  return 0;
}

#undef DAT_10000ed4
#undef DAT_10000ed8
#undef DAT_10000ee0
#undef DAT_10000ee8
#undef DAT_10000eec
#undef DAT_10000ef0
#undef DAT_10000ef4
#undef DAT_10000ef8
#undef DAT_10000efc
#undef DAT_10000f00
#undef DAT_10000f04
#undef DAT_10000f08
#undef DAT_10000f0c
#undef DAT_10000f10
#undef DAT_10000f14
#undef DAT_10000f18
#undef DAT_10000f1c
#undef DAT_10000f20
#undef local_1cc
#undef uStack_1f0
#undef uStack_1ec
#undef uStack_1e8
#undef uStack_1d8
#undef auStack_1c4
#undef auStack_184
#undef auStack_144
#undef auStack_e4
#undef local_210
#undef local_20c
#undef local_208
#undef local_204
#undef local_200
#undef local_1fc
#undef local_1f8
#undef local_1f4
#undef local_1e4
#undef local_1e0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000f24
 */

void recovered_10000f24(undefined1 *param_1,int param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == (undefined1 *)0x0) {
    return;
  }
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0;
    param_1 = param_1 + 1;
  }
  return;
}


#undef DAT_10001d3c
#define DAT_10001d3c (*(int *)(0x10001d3cU))
#undef DAT_10001d40
#define DAT_10001d40 (*(int *)(0x10001d40U))
#undef DAT_10001d44
#define DAT_10001d44 (*(int *)(0x10001d44U))
#undef DAT_10001d48
#define DAT_10001d48 (*(int *)(0x10001d48U))
#undef DAT_10001d4c
#define DAT_10001d4c (*(int *)(0x10001d4cU))
#undef DAT_10001d50
#define DAT_10001d50 (*(int *)(0x10001d50U))
#undef DAT_10001d54
#define DAT_10001d54 (*(int *)(0x10001d54U))
#undef DAT_10001d58
#define DAT_10001d58 (*(int *)(0x10001d58U))
#undef DAT_10001d5c
#define DAT_10001d5c (*(int *)(0x10001d5cU))
#undef DAT_10001d60
#define DAT_10001d60 (*(int *)(0x10001d60U))
#undef DAT_10001d64
#define DAT_10001d64 (*(int *)(0x10001d64U))
#undef DAT_10001d68
#define DAT_10001d68 (*(int *)(0x10001d68U))
#undef DAT_10001d6c
#define DAT_10001d6c (*(int *)(0x10001d6cU))
#undef DAT_10001d70
#define DAT_10001d70 (*(int *)(0x10001d70U))
#undef DAT_10001d74
#define DAT_10001d74 (*(int *)(0x10001d74U))
#undef DAT_10001d78
#define DAT_10001d78 (*(int *)(0x10001d78U))
#undef DAT_10001d7c
#define DAT_10001d7c (*(int *)(0x10001d7cU))
#undef DAT_10001d80
#define DAT_10001d80 (*(int *)(0x10001d80U))
#undef DAT_10001d84
#define DAT_10001d84 (*(int *)(0x10001d84U))
#undef DAT_10001d88
#define DAT_10001d88 (*(int *)(0x10001d88U))
#undef DAT_10001d8c
#define DAT_10001d8c (*(int *)(0x10001d8cU))
#undef DAT_10001d90
#define DAT_10001d90 (*(int *)(0x10001d90U))
#undef DAT_10001d94
#define DAT_10001d94 (*(int *)(0x10001d94U))
#undef DAT_10001d98
#define DAT_10001d98 (*(int *)(0x10001d98U))
#undef DAT_10001d9c
#define DAT_10001d9c (*(int *)(0x10001d9cU))
#undef DAT_10001da0
#define DAT_10001da0 (*(int *)(0x10001da0U))
#undef DAT_10001da4
#define DAT_10001da4 (*(int *)(0x10001da4U))
#define local_898 (*(undefined4 *)(pf_stack_frame + 24))
#define local_894 (*(char (*)[2196])(pf_stack_frame + 28))
#define local_494 (*(uint *)(pf_stack_frame + 1052))
#define local_490 (*(uint *)(pf_stack_frame + 1056))
#define local_48c (*(uint *)(pf_stack_frame + 1060))
#define local_488 (*(uint *)(pf_stack_frame + 1064))
#define local_484 (*(uint (*)[289])(pf_stack_frame + 1068))
#define local_84 (*(uint (*)[33])(pf_stack_frame + 2092))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000f48
 */

undefined4 recovered_10000f48(int *param_1,byte *param_2)

{
  unsigned char pf_stack_frame[2256] __attribute__((aligned(16))) = {0};

  byte bVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  int extraout_r0 = 0;
  int extraout_r0_00 = 0;
  int extraout_r0_01 = 0;
  int extraout_r0_02 = 0;
  int extraout_r0_03 = 0;
  int extraout_r0_04 = 0;
  int extraout_r0_05 = 0;
  int extraout_r0_06 = 0;
  int extraout_r0_07 = 0;
  int extraout_r0_08 = 0;
  int extraout_r0_09 = 0;
  int extraout_r0_10 = 0;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint extraout_r1 = 0;
  char *pcVar10;
  uint uVar11;
  int *piVar12;
  int *piVar13;
  uint uVar14;
  undefined4 *puVar15;
  uint *extraout_r3 = 0;
  uint *puVar16;
  uint uVar17;
  int iVar18;
  int *piVar19;
  uint uVar20;
  undefined4 *puVar21;
  char *pcVar22;
  uint uVar23;
  bool bVar24;
  bool bVar25;

  iVar9 = (*(uint32_t *)(uint32_t[]){0x3544ULL});
  local_898 = 0;
  if (param_2[8] != 1) {
    return 0;
  }
  bVar1 = param_2[9];
  bVar24 = bVar1 == 8;
  if (bVar24) {
    bVar1 = param_2[10];
  }
  if (!bVar24 || bVar1 != 2) {
    return 0;
  }
  piVar19 = (int *)(((uintptr_t)pf_module_state + 0x768U));
  *(int *)(((uintptr_t)pf_module_state + 0x774U)) = *(int *)(((uintptr_t)pf_module_state + 0x774U)) + 1;
  uVar23 = *(uint *)(((uintptr_t)pf_module_state + 0x768U));
  if (3 < uVar23) {
    return 0;
  }
  puVar21 = (undefined4 *)(uVar23 * 0x10c + ((uintptr_t)pf_module_state + 0x298U));
  recovered_10000f24((undefined1 *)puVar21,0x10c);
  puVar21[1] = uVar23;
  bVar1 = *param_2;
  bVar2 = param_2[1];
  bVar3 = param_2[2];
  *(byte *)(puVar21 + 3) = bVar1;
  *(byte *)((int)puVar21 + 0xd) = bVar2;
  *(byte *)((int)puVar21 + 0xe) = bVar3;
  puVar21[5] = (uint)bVar1 << 0x10 | (uint)bVar2 << 0xb | (uint)bVar3 << 8 | 0x80000000;
  recovered_100023cc(local_894,0x400,(char *)(((uintptr_t)pf_module_state + 0x77U)));
  iVar5 = recovered_10002358(param_1,(uint)*param_2,(uint)param_2[1],(uint)param_2[2],4,2,
                             (int)&local_898);
  if (iVar5 == 0) {
    recovered_10001da8(param_1,((uintptr_t)pf_module_state + 0x78U));
    return 0;
  }
  *(short *)(puVar21 + 4) = (short)local_898;
  *(undefined1 *)((int)puVar21 + 0xf) = 1;
  local_484[0] = 0;
  pcVar10 = (char *)(((uintptr_t)pf_module_state + 0x12cU));
  if ((((param_1 == (int *)0x0) || (*param_1 != (*(uint32_t *)(uint32_t[]){0x54584b57ULL}))) || ((uint)param_1[2] < 100)) ||
     (param_1[0x18] == 0)) {
LAB_100012dc:
    recovered_10002644((int)local_894,0x400,pcVar10);
  }
  else {
    iVar5 = recovered_10002358(param_1,(uint)*param_2,(uint)param_2[1],(uint)param_2[2],4,2,
                               (int)local_484);
    if (iVar5 == 0) {
      pcVar10 = (char *)(((uintptr_t)pf_module_state + 0x13eU));
      goto LAB_100012dc;
    }
    iVar5 = 5;
    uVar17 = 0;
    while (iVar5 != 0xb) {
      iVar18 = iVar5 * 4;
      iVar5 = iVar5 + 1;
      uVar11 = uVar17;
      if (*(uint *)(param_2 + iVar18) != 0) {
        uVar11 = uVar17 | 2;
      }
      if ((*(uint *)(param_2 + iVar18) & 1) != 0) {
        uVar11 = uVar17 | 1;
      }
      uVar17 = uVar11;
    }
    iVar5 = recovered_10002708(((uintptr_t)pf_module_state + 0x65U));
    if (iVar5 != 0) {
      uVar17 = uVar17 | 4;
    }
    if ((param_2[8] == 6) && (param_2[9] != 0)) {
      uVar17 = uVar17 | 2;
    }
    local_84[0] = local_484[0] | uVar17;
    iVar5 = recovered_10002698(param_1,(uint)*param_2,(uint)param_2[1],(uint)param_2[2],local_84[0])
    ;
    if (iVar5 == 0) {
      pcVar10 = (char *)(((uintptr_t)pf_module_state + 0x150U));
      goto LAB_100012dc;
    }
    recovered_10002358(param_1,(uint)*param_2,(uint)param_2[1],(uint)param_2[2],4,2,(int)local_84);
    if ((local_84[0] & uVar17) == uVar17) {
      local_48c = 0;
      local_490 = 0;
      local_494 = 0;
      local_84[0] = 0;
      uVar17 = *(uint *)(param_2 + 0x14);
      if ((uVar17 != 0) && ((uVar17 & 1) == 0)) {
        local_488 = uVar17;
        recovered_10002358(param_1,(uint)*param_2,(uint)param_2[1],(uint)param_2[2],0x10,4,
                           (int)&local_488);
        uVar17 = 0;
        if ((local_488 & 7) == 4) {
          local_84[0] = *(uint *)(param_2 + 0x18);
          recovered_10002358(param_1,(uint)*param_2,(uint)param_2[1],(uint)param_2[2],0x14,4,
                             (int)local_84);
          uVar17 = local_84[0];
        }
        uVar11 = 0xfffffffc;
        if ((local_488 & 1) == 0) {
          uVar11 = 0xfffffff0;
        }
        uVar11 = uVar11 & local_488;
        if (uVar11 != 0 || uVar17 != 0) {
          puVar16 = puVar21 + 2;
          local_484[0] = 0;
          *puVar16 = 0;
          if (*param_1 == (*(uint32_t *)(uint32_t[]){0x54584b57ULL})) {
            if (((uint)param_1[2] < 0xbc) || ((code *)param_1[0x2e] == (code *)0x0)) {
              if ((uVar17 == 0) &&
                 (((0x67 < (uint)param_1[2] && ((code *)param_1[0x19] != (code *)0x0)) &&
                  (iVar5 = (*(code *)param_1[0x19])(uVar11,0,0x4000,local_484), iVar5 != 0)))) {
                *puVar16 = local_484[0];
                uVar17 = local_484[0];
                goto LAB_1000134c;
              }
            }
            else {
              iVar5 = (*(code *)param_1[0x2e])(uVar11,uVar17,0x4000,puVar16);
              if (iVar5 != 0) {
                uVar17 = *puVar16;
LAB_1000134c:
                if (((uVar17 != 0) &&
                    (bVar24 = recovered_10002730(param_1,(int)puVar21,0,&local_48c), bVar24)) &&
                   ((bVar24 = recovered_10002730(param_1,(int)puVar21,4,&local_490), bVar24 &&
                    (((local_490 & 0xf0020) == 0x20 &&
                     (uVar17 = 4 << (local_490 & 0xf), puVar21[6] = uVar17, uVar17 < 0x401)))))) {
                  uVar11 = (local_48c & 0xffff) + 1;
                  uVar17 = uVar11;
                  if (0x1f < (local_48c & 0xffff)) {
                    uVar17 = 0x20;
                  }
                  if (0xf < (local_48c & 0xffff)) {
                    uVar11 = 0x10;
                  }
                  puVar21[9] = uVar17;
                  puVar21[8] = uVar11;
                  if (1 < uVar11 && 1 < uVar17) {
                    puVar21[10] = 0x2000;
                    uVar17 = (short)(ushort)(byte)(local_48c >> 0x18) * 500 + 500;
                    piVar12 = puVar21 + 0xd;
                    puVar21[7] = uVar17;
                    iVar18 = puVar21[2] + 0x1000;
                    iVar5 = recovered_100029e8(param_1,(int)puVar21,piVar12,uVar11,0x40,0,iVar18);
                    if (iVar5 != 0) {
                      piVar13 = puVar21 + 0x18;
                      iVar5 = recovered_100029e8(param_1,(int)puVar21,piVar13,puVar21[8],0x10,0,
                                                 puVar21[6] + iVar18);
                      if (((iVar5 != 0) &&
                          (iVar5 = recovered_100029e8(param_1,(int)puVar21,puVar21 + 0x23,puVar21[9]
                                                      ,0x40,1,iVar18 + puVar21[6] * 2), iVar5 != 0))
                         && (iVar5 = recovered_100029e8(param_1,(int)puVar21,puVar21 + 0x2e,
                                                        puVar21[9],0x10,1,puVar21[6] * 3 + iVar18),
                            iVar5 != 0)) {
                        uVar11 = recovered_10002ae4(param_1,0x2000,puVar21 + 0x3a);
                        puVar21[0x39] = uVar11;
                        uVar11 = recovered_10002ae4(param_1,0x1000,puVar21 + 0x40);
                        puVar21[0x3f] = uVar11;
                        if (puVar21[0x39] != 0 && uVar11 != 0) {
                          iVar5 = recovered_10002b68(param_1,(int)puVar21,puVar21[0x39],0x1000,
                                                     (int)(puVar21 + 0x3b),puVar21 + 0x3c);
                          if (iVar5 != 0) {
                            iVar5 = recovered_10002b68(param_1,(int)puVar21,puVar21[0x39] + 0x1000,
                                                       0x1000,(int)(puVar21 + 0x3d),puVar21 + 0x3e);
                            if (iVar5 != 0) {
                              iVar5 = recovered_10002b68(param_1,(int)puVar21,puVar21[0x3f],0x1000,
                                                         (int)(puVar21 + 0x41),puVar21 + 0x42);
                              if (((iVar5 != 0) && ((*(ushort *)(puVar21 + 0x3b) & 0xfff) == 0)) &&
                                 (((*(ushort *)(puVar21 + 0x3d) & 0xfff) == 0 &&
                                  ((*(ushort *)(puVar21 + 0x41) & 0xfff) == 0)))) {
                                recovered_10000f24((undefined1 *)puVar21[0x39],0x2000);
                                recovered_10000f24((undefined1 *)puVar21[0x3f],0x1000);
                                recovered_10002be4(param_1,puVar21[5],puVar21[0x39],0x2000);
                                recovered_10002be4(param_1,puVar21[5],puVar21[0x3f],0x1000);
                                recovered_100027ec(param_1);
                                bVar24 = recovered_10002730(param_1,(int)puVar21,0x14,&local_494);
                                if ((((bVar24) &&
                                     (((((local_494 & 1) == 0 ||
                                        (recovered_100027d0(param_1,(int)puVar21,0x14),
                                        extraout_r0 != 0)) &&
                                       ((iVar5 = recovered_10002828(param_1,(int)puVar21,0,uVar17),
                                        iVar5 != 0 &&
                                        ((((recovered_100027d0(param_1,(int)puVar21,0x24),
                                           extraout_r0_00 != 0 &&
                                           (recovered_100027d0(param_1,(int)puVar21,0x28),
                                           extraout_r0_01 != 0)) &&
                                          (recovered_100027d0(param_1,(int)puVar21,0x2c),
                                          extraout_r0_02 != 0)) &&
                                         ((recovered_100027d0(param_1,(int)puVar21,0x30),
                                          extraout_r0_03 != 0 &&
                                          (recovered_100027d0(param_1,(int)puVar21,0x34),
                                          extraout_r0_04 != 0)))))))) &&
                                      (recovered_100027d0(param_1,(int)puVar21,0xc),
                                      extraout_r0_05 != 0)))) &&
                                    ((recovered_100027d0(param_1,(int)puVar21,0x14),
                                     extraout_r0_06 != 0 &&
                                     (recovered_100027d0(param_1,(int)puVar21,0x14),
                                     extraout_r0_07 != 0)))) &&
                                   (iVar5 = recovered_10002828(param_1,(int)puVar21,1,uVar17),
                                   iVar5 != 0)) {
                                  local_84[0] = local_84[0] & 0xffff0000;
                                  recovered_10002c2c((int)puVar21,(int)piVar12,9,0,
                                                     (undefined2 *)local_84);
                                  *(undefined4 *)(extraout_r0_08 + 0x2c) = 0;
                                  *(undefined4 *)(extraout_r0_08 + 0x28) = 7;
                                  bVar24 = recovered_10002ca4(param_1,puVar21,(int)piVar12,
                                                              (int)piVar13,local_84[0] & 0xffff,
                                                              local_484);
                                  if (bVar24) {
                                    local_484[0] = local_484[0] & 0xffff0000;
                                    recovered_10002c2c((int)puVar21,(int)piVar12,5,0,
                                                       (undefined2 *)local_484);
                                    recovered_10002f54(extraout_r0_09,puVar21[0x30],puVar21[0x31],0,
                                                       0);
                                    iVar5 = puVar21[9];
                                    *(undefined4 *)(extraout_r0_09 + 0x2c) = 1;
                                    *(undefined2 *)(extraout_r0_09 + 0x28) = 1;
                                    iVar5 = iVar5 * 0x10000 + -0xffff;
                                    *(char *)(extraout_r0_09 + 0x2a) = (char)((uint)iVar5 >> 0x10);
                                    *(char *)(extraout_r0_09 + 0x2b) = (char)((uint)iVar5 >> 0x18);
                                    bVar24 = recovered_10002ca4(param_1,puVar21,(int)piVar12,
                                                                (int)piVar13,local_484[0] & 0xffff,
                                                                (undefined4 *)0x0);
                                    if (bVar24) {
                                      recovered_10002c2c((int)puVar21,(int)piVar12,1,0,
                                                         (undefined2 *)local_484);
                                      recovered_10002f54(extraout_r0_10,puVar21[0x25],puVar21[0x26],
                                                         0,0);
                                      iVar5 = puVar21[9];
                                      *(undefined4 *)(extraout_r0_10 + 0x2c) = 0x10001;
                                      *(undefined2 *)(extraout_r0_10 + 0x28) = 1;
                                      iVar5 = iVar5 * 0x10000 + -0xffff;
                                      *(char *)(extraout_r0_10 + 0x2a) = (char)((uint)iVar5 >> 0x10)
                                      ;
                                      *(char *)(extraout_r0_10 + 0x2b) = (char)((uint)iVar5 >> 0x18)
                                      ;
                                      bVar24 = recovered_10002ca4(param_1,puVar21,(int)piVar12,
                                                                  (int)piVar13,local_484[0] & 0xffff
                                                                  ,(undefined4 *)0x0);
                                      if (bVar24) {
                                        *puVar21 = 1;
                                        uVar17 = *(uint *)(((uintptr_t)pf_module_state+0x76cU));
                                        bVar24 = recovered_10002fcc(param_1,puVar21,1,0);
                                        if (bVar24) {
                                          uVar11 = (uint)*(byte *)(puVar21[0x3f] + 0x4d);
                                          if ((uVar11 - 1 < 0x13) &&
                                             ((uint)(0x1000 << uVar11) < (uint)puVar21[10])) {
                                            puVar21[10] = 0x1000 << uVar11;
                                          }
                                          uVar6 = *(uint *)(puVar21[0x3f] + 0x204);
                                          if (7 < uVar6) {
                                            uVar6 = 8;
                                          }
                                          uVar7 = 1;
                                          while( true ) {
                                            uVar11 = *(uint *)(((uintptr_t)pf_module_state+0x76cU));
                                            bVar25 = uVar6 <= uVar7;
                                            bVar24 = uVar7 == uVar6;
                                            if (!bVar25 || bVar24) {
                                              bVar25 = 6 < uVar11;
                                              bVar24 = uVar11 == 7;
                                            }
                                            if (bVar25 && !bVar24) break;
                                            bVar24 = recovered_10002fcc(param_1,puVar21,0,uVar7);
                                            uVar8 = 0;
                                            uVar11 = extraout_r1;
                                            puVar16 = extraout_r3;
                                            if (bVar24) {
                                              puVar16 = (uint *)puVar21[0x3f];
                                              uVar8 = *puVar16;
                                              uVar11 = puVar16[1];
                                            }
                                            if ((bVar24 && (uVar8 != 0 || uVar11 != 0)) &&
                                               (uVar14 = *(byte *)((int)puVar16 + 0x1a) & 0xf,
                                               uVar14 <= (*(byte *)((int)puVar16 + 0x19) & 0xf))) {
                                              uVar14 = uVar14 << 2 | 0x80;
                                              uVar20 = (uint)*(byte *)((int)puVar16 + uVar14 + 2);
                                              if (uVar20 == 0xc || uVar20 == 9) {
                                                cVar4 = *(char *)((int)puVar16 + uVar14);
                                                bVar24 = cVar4 == '\0';
                                                if (bVar24) {
                                                  cVar4 = *(char *)((int)puVar16 + uVar14 + 1);
                                                }
                                                if (bVar24 && cVar4 == '\0') {
                                                  uVar14 = 0xffffffff >> (uVar20 - 9 & 0xff);
                                                  if (-1 < (int)(uVar20 - 0x29)) {
                                                    uVar14 = 0;
                                                  }
                                                  if (-uVar11 < (uint)(uVar8 <= uVar14)) {
                                                    iVar18 = *(int *)(((uintptr_t)pf_module_state+0x76cU));
                                                    iVar5 = uVar8 << (uVar20 - 9 & 0xff);
                                                    *(int *)(((uintptr_t)pf_module_state+0x76cU)) = iVar18 + 1;
                                                    puVar15 = (undefined4 *)
                                                              (((uintptr_t)pf_module_state + 0x6c8U) +
                                                              iVar18 * 0x14);
                                                    *puVar15 = 1;
                                                    if (-1 < (int)(uVar20 - 0x29)) {
                                                      iVar5 = 0;
                                                    }
                                                    puVar15[4] = iVar5;
                                                    puVar15[3] = 1 << uVar20;
                                                    puVar15[2] = uVar7;
                                                    puVar15[1] = uVar23;
                                                  }
                                                }
                                              }
                                            }
                                            uVar7 = uVar7 + 1;
                                          }
                                        }
                                        else {
                                          uVar11 = *(uint *)(((uintptr_t)pf_module_state+0x76cU));
                                        }
                                        if (uVar11 != uVar17) {
                                          *piVar19 = *(int *)(((uintptr_t)pf_module_state + 0x768U)) + 1;
                                          recovered_100023cc(local_894,0x400,
                                                             (char *)(((uintptr_t)pf_module_state + 0x77U)));
                                          iVar9 = uVar11 - uVar17;
                                          recovered_10002594((int)local_894,0x400,iVar9);
                                          pcVar10 = (char *)(((uintptr_t)pf_module_state + 0x102U));
                                          if (iVar9 == 1) {
                                            pcVar10 = (char *)(((uintptr_t)pf_module_state + 0xf7U));
                                          }
                                          recovered_10002644((int)local_894,0x400,pcVar10);
                                          recovered_100023cc((undefined1 *)local_84,0x60,
                                                             (char *)(((uintptr_t)pf_module_state + 0x10eU)));
                                          recovered_10002644((int)local_84,0x60,
                                                             (char *)(((uintptr_t)pf_module_state + 0x163U)));
                                          recovered_100030cc((int)local_84,0x60,(uint)*param_2,2);
                                          pcVar10 = (char *)(((uintptr_t)pf_module_state + 0x165U));
                                          recovered_10002644((int)local_84,0x60,pcVar10);
                                          recovered_100030cc((int)local_84,0x60,(uint)param_2[1],2);
                                          pcVar22 = (char *)(((uintptr_t)pf_module_state + 0x167U));
                                          recovered_10002644((int)local_84,0x60,pcVar22);
                                          recovered_10002594((int)local_84,0x60,(uint)param_2[2]);
                                          recovered_100023cc((undefined1 *)local_484,0x400,
                                                             (char *)(((uintptr_t)pf_module_state + 0x169U)));
                                          recovered_100030cc((int)local_484,0x400,(uint)*param_2,2);
                                          recovered_10002644((int)local_484,0x400,pcVar10);
                                          recovered_100030cc((int)local_484,0x400,(uint)param_2[1],2
                                                            );
                                          recovered_10002644((int)local_484,0x400,pcVar22);
                                          recovered_10002594((int)local_484,0x400,(uint)param_2[2]);
                                          recovered_10002644((int)local_484,0x400,
                                                             (char *)(((uintptr_t)pf_module_state + 0x16eU)));
                                          recovered_100030cc((int)local_484,0x400,
                                                             (uint)*(ushort *)(param_2 + 4),4);
                                          recovered_10002644((int)local_484,0x400,pcVar10);
                                          recovered_100030cc((int)local_484,0x400,
                                                             (uint)*(ushort *)(param_2 + 6),4);
                                          recovered_10002644((int)local_484,0x400,
                                                             (char *)(((uintptr_t)pf_module_state + 0x171U)));
                                          if (local_894[0] != '\0') {
                                            recovered_10002644((int)local_484,0x400,
                                                               (char *)(((uintptr_t)pf_module_state + 0x173U)));
                                            recovered_10002644((int)local_484,0x400,local_894);
                                          }
                                          if ((code *)param_1[3] != (code *)0x0) {
                                            (*(code *)param_1[3])
                                                      (local_84,((uintptr_t)pf_module_state + 0x11cU),local_484)
                                            ;
                                          }
                                          return 1;
                                        }
                                        recovered_100023e0(param_1,puVar21);
                                        iVar9 = ((uintptr_t)pf_module_state + 0xdcU);
                                        goto LAB_100012fc;
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      recovered_100023e0(param_1,puVar21);
      iVar9 = ((uintptr_t)pf_module_state + 0xbdU);
      goto LAB_100012fc;
    }
  }
  recovered_100023e0(param_1,puVar21);
  iVar9 = ((uintptr_t)pf_module_state + 0x9fU);
LAB_100012fc:
  recovered_10001da8(param_1,iVar9);
  return 0;
}

#undef DAT_10001d3c
#undef DAT_10001d40
#undef DAT_10001d44
#undef DAT_10001d48
#undef DAT_10001d4c
#undef DAT_10001d50
#undef DAT_10001d54
#undef DAT_10001d58
#undef DAT_10001d5c
#undef DAT_10001d60
#undef DAT_10001d64
#undef DAT_10001d68
#undef DAT_10001d6c
#undef DAT_10001d70
#undef DAT_10001d74
#undef DAT_10001d78
#undef DAT_10001d7c
#undef DAT_10001d80
#undef DAT_10001d84
#undef DAT_10001d88
#undef DAT_10001d8c
#undef DAT_10001d90
#undef DAT_10001d94
#undef DAT_10001d98
#undef DAT_10001d9c
#undef DAT_10001da0
#undef DAT_10001da4
#undef local_898
#undef local_894
#undef local_494
#undef local_490
#undef local_48c
#undef local_488
#undef local_484
#undef local_84

#undef DAT_10001de4
#define DAT_10001de4 (*(int *)(0x10001de4U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001da8
 */

void recovered_10001da8(int *param_1,undefined4 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if ((param_1 != (int *)0x0) && (*param_1 == (*(uint32_t *)(uint32_t[]){0x54584b57ULL}))) {
    if ((uint)param_1[2] < 0x2c) {
      return;
    }
    if ((code *)param_1[10] != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x10001ddc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)param_1[10])(param_2);
      return;
    }
  }
  return;
}

#undef DAT_10001de4

#undef DAT_10001e68
#define DAT_10001e68 (*(int *)(0x10001e68U))
#undef DAT_10001e6c
#define DAT_10001e6c (*(int *)(0x10001e6cU))
#undef DAT_10001e70
#define DAT_10001e70 (*(int *)(0x10001e70U))
#undef DAT_10001e74
#define DAT_10001e74 (*(int *)(0x10001e74U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001de8
 */

void recovered_10001de8(int *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;

  puVar4 = (undefined4 *)(((uintptr_t)pf_module_state + 0x298U));
  for (uVar5 = 0; iVar1 = (*(uint32_t *)(uint32_t[]){0x26b4ULL}), uVar5 < *(uint *)(((uintptr_t)pf_module_state + 0x768U));
      uVar5 = uVar5 + 1) {
    recovered_100023e0(param_1,puVar4);
    puVar4 = puVar4 + 0x43;
  }
  puVar2 = (undefined4 *)(((uintptr_t)pf_module_state + 0x768U));
  puVar4 = (undefined4 *)(((uintptr_t)pf_module_state + 0x6c8U));
  for (iVar3 = *(int *)(((uintptr_t)pf_module_state + 0x76cU)); iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 5;
  }
  *(undefined4 *)(((uintptr_t)pf_module_state+0x770U)) = 0;
  *(undefined4 *)(((uintptr_t)pf_module_state+0x76cU)) = 0;
  *puVar2 = 0;
  return;
}

#undef DAT_10001e68
#undef DAT_10001e6c
#undef DAT_10001e70
#undef DAT_10001e74

#undef DAT_10001f30
#define DAT_10001f30 (*(int *)(0x10001f30U))
#undef DAT_10001f34
#define DAT_10001f34 (*(int *)(0x10001f34U))
#undef DAT_10001f38
#define DAT_10001f38 (*(int *)(0x10001f38U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001e78
 */

undefined4 recovered_10001e78(int *param_1,int *param_2,int param_3,int param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int unaff_r6;
  uint uVar5;
  uint uVar6;

  uVar4 = 0;
  piVar1 = *(int **)(((uintptr_t)pf_module_state + 0x76cU));
  if (param_1 < piVar1) {
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)(((uintptr_t)pf_module_state + 0x6c8U) + (int)(uintptr_t)param_1 * 0x14);
      unaff_r6 = *piVar1;
    }
    if (param_2 != (int *)0x0 && unaff_r6 != 0) {
      uVar4 = 1;
      *param_2 = piVar1[4];
      if (param_3 != 0 && param_4 != 0) {
        uVar6 = param_4 - 1;
        uVar2 = 0;
        iVar3 = ((uintptr_t)pf_module_state + 0x176U);
        uVar5 = uVar6;
        if (8 < uVar6) {
          uVar5 = 9;
        }
        for (; uVar5 != uVar2; uVar2 = uVar2 + 1) {
          *(undefined1 *)(param_3 + uVar2) = *(undefined1 *)(iVar3 + uVar2);
        }
        if (uVar2 < uVar6) {
          uVar2 = recovered_10003798((uint)param_1,10);
          *(byte *)(param_3 + uVar5) = (byte)uVar2 | 0x30;
          uVar5 = uVar5 + 1;
        }
        *(undefined1 *)(param_3 + uVar5) = 0;
      }
    }
  }
  return uVar4;
}

#undef DAT_10001f30
#undef DAT_10001f34
#undef DAT_10001f38

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001f3c
 */

void recovered_10001f3c(uint param_1,uint param_2,undefined1 *param_3,uint param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_1000312c(param_1,param_2,param_3,param_4,0);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001f58
 */

void recovered_10001f58(uint param_1,uint param_2,undefined1 *param_3,uint param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_1000312c(param_1,param_2,param_3,param_4,1);
  return;
}


#undef DAT_1000207c
#define DAT_1000207c (*(int *)(0x1000207cU))
#undef DAT_10002080
#define DAT_10002080 (*(int *)(0x10002080U))
#undef DAT_10002084
#define DAT_10002084 (*(int *)(0x10002084U))
#undef DAT_10002088
#define DAT_10002088 (*(int *)(0x10002088U))
#define uStack_24 (*(undefined4 *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001f74
 */

bool recovered_10001f74(uint param_1)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  int iVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int *piVar6;

  iVar1 = (*(uint32_t *)(uint32_t[]){0x2554ULL});
  bVar2 = false;
  piVar4 = (int *)0x0;
  uVar5 = *(uint *)(((uintptr_t)pf_module_state + 0x76cU));
  iVar3 = ((uintptr_t)pf_module_state + 0x6c8U);
  if (param_1 < uVar5) {
    piVar4 = (int *)(iVar3 + param_1 * 0x14);
    iVar3 = *piVar4;
    if (iVar3 == 0) {
      piVar4 = (int *)0x0;
    }
  }
  uStack_24 = 0;
  if (piVar4 != (int *)0x0) {
    iVar3 = *(int *)(((uintptr_t)pf_module_state + 0x770U));
  }
  if (piVar4 != (int *)0x0 && iVar3 != 0) {
    piVar6 = (int *)(piVar4[1] * 0x10c + ((uintptr_t)pf_module_state + 0x298U));
    recovered_10003430((int)piVar6);
    bVar2 = false;
    if (((param_1 < uVar5) &&
        (bVar2 = false, *(int *)(((uintptr_t)pf_module_state + 0x6c8U) + param_1 * 0x14) != 0)) &&
       (bVar2 = false, *piVar6 != 0)) {
      recovered_10002c2c((int)piVar6,(int)(piVar6 + 0x23),0,piVar4[2],
                         (undefined2 *)((int)&uStack_24 + 2));
      bVar2 = recovered_10002ca4(*(int **)(((uintptr_t)pf_module_state+0x770U)),piVar6,(int)(piVar6 + 0x23),
                                 (int)(piVar6 + 0x2e),uStack_24 >> 0x10,(undefined4 *)0x0);
    }
    DataMemoryBarrier(0xb);
    piVar6[0xb] = 0;
  }
  return bVar2;
}

#undef DAT_1000207c
#undef DAT_10002080
#undef DAT_10002084
#undef DAT_10002088
#undef uStack_24

#undef DAT_10002184
#define DAT_10002184 (*(int *)(0x10002184U))
#undef DAT_10002188
#define DAT_10002188 (*(int *)(0x10002188U))
#undef DAT_1000218c
#define DAT_1000218c (*(int *)(0x1000218cU))
#undef DAT_10002190
#define DAT_10002190 (*(int *)(0x10002190U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000208c
 */

undefined4 recovered_1000208c(uint param_1,int param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  undefined1 *puVar8;
  int iVar9;
  uint uVar10;

  uVar4 = 0;
  if (param_1 < *(uint *)(((uintptr_t)pf_module_state + 0x76cU))) {
    piVar6 = (int *)(((uintptr_t)pf_module_state + 0x6c8U) + param_1 * 0x14);
    if (*piVar6 == 0) {
      return 0;
    }
    uVar5 = piVar6[2];
    iVar7 = piVar6[1] * 0x10c + ((uintptr_t)pf_module_state + 0x298U);
    uVar1 = *(undefined1 *)(iVar7 + 0xc);
    uVar2 = *(undefined1 *)(iVar7 + 0xd);
    uVar3 = *(undefined1 *)(iVar7 + 0xe);
    for (iVar7 = 0; iVar7 != 0x40; iVar7 = iVar7 + 1) {
      *(undefined1 *)(param_2 + iVar7) = 0;
    }
    iVar7 = ((uintptr_t)pf_module_state + 0x180U);
    for (iVar9 = 0; iVar9 != 4; iVar9 = iVar9 + 1) {
      *(undefined1 *)(param_2 + iVar9) = *(undefined1 *)(iVar7 + iVar9);
    }
    *(undefined1 *)(param_2 + 6) = uVar3;
    *(undefined1 *)(param_2 + 5) = uVar2;
    *(undefined1 *)(param_2 + 4) = uVar1;
    puVar8 = (undefined1 *)(param_2 + 8);
    for (uVar10 = 0; uVar10 != 0x20; uVar10 = uVar10 + 8) {
      *puVar8 = (char)(uVar5 >> (uVar10 & 0xff));
      puVar8 = puVar8 + 1;
    }
    for (iVar7 = 0; iVar7 != 8; iVar7 = iVar7 + 1) {
      *(undefined1 *)(param_2 + 0x10 + iVar7) = 0;
    }
    uVar4 = 1;
  }
  return uVar4;
}

#undef DAT_10002184
#undef DAT_10002188
#undef DAT_1000218c
#undef DAT_10002190

/* Pooka's Free Software License. PCI device records recovered from register stores. */
undefined4 recovered_10002194(undefined4 *api,uint bus,uint slot,uint function,undefined1 *out)
{
 uint identity=0,classification=0,header=0,command=0,value=0;
 if(!out || !recovered_10002358((int *)api,bus,slot,function,0,4,&identity) || !(identity&65535) || (identity&65535)==65535)return 0;
 if(!recovered_10002358((int *)api,bus,slot,function,8,4,&classification))return 0;
 if(!recovered_10002358((int *)api,bus,slot,function,4,4,&command))command=0;
 if(!recovered_10002358((int *)api,bus,slot,function,12,4,&header))header=0;
 out[0]=(byte)bus;out[1]=(byte)slot;out[2]=(byte)function;
 __builtin_memcpy(out+4,&identity,4);out[8]=(byte)(classification>>24);out[9]=(byte)(classification>>16);out[10]=(byte)(classification>>8);out[11]=(byte)classification;out[12]=(byte)(header>>16);
 __builtin_memcpy(out+16,&command,4);
 for(uint i=0;i<6;i++){value=0;recovered_10002358((int *)api,bus,slot,function,16+i*4,4,&value);__builtin_memcpy(out+20+i*4,&value,4);}
 return 1;
}


#undef DAT_100023c8
#define DAT_100023c8 (*(uint8_t * *)(0x100023c8U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002358
 */

undefined4
recovered_10002358(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,int param_7)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  code *pcVar2;

  if (((param_1 != (undefined4 *)0x0) && ((code *)*param_1 == (*(uint32_t *)(uint32_t[]){0x54584b57ULL}))) &&
     (0x5f < (uint)param_1[2])) {
    pcVar2 = (*(uint32_t *)(uint32_t[]){0x54584b57ULL});
    if (param_7 != 0) {
      pcVar2 = (code *)param_1[0x17];
    }
    if (param_7 != 0 && pcVar2 != (code *)0x0) {
      uVar1 = (*pcVar2)(param_2,param_3,param_4,param_5,param_6,param_7);
      return uVar1;
    }
  }
  return 0;
}

#undef DAT_100023c8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100023cc
 */

void recovered_100023cc(undefined1 *param_1,uint param_2,char *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == (undefined1 *)0x0) {
    return;
  }
  *param_1 = 0;
  recovered_10002644((int)param_1,param_2,param_3);
  return;
}


#undef DAT_1000258c
#define DAT_1000258c (*(int *)(0x1000258cU))
#undef DAT_10002590
#define DAT_10002590 (*(int *)(0x10002590U))
#define local_1c (*(uint *)(pf_stack_frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100023e0
 */

void recovered_100023e0(int *param_1,undefined4 *param_2)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  bool bVar1;
  bool bVar2;
  int extraout_r0 = 0;
  int iVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *unaff_r4;

  if (param_1 != (int *)0x0) {
    unaff_r4 = param_2;
  }
  local_1c = 0;
  if (param_1 != (int *)0x0 && param_2 != (undefined4 *)0x0) {
    *unaff_r4 = 0;
    uVar6 = 0;
    piVar4 = (int *)(((uintptr_t)pf_module_state + 0x6ccU));
    uVar5 = *(uint *)(((uintptr_t)pf_module_state + 0x76cU));
    while (uVar6 < uVar5) {
      uVar6 = uVar6 + 1;
      if (*piVar4 == unaff_r4[1]) {
        piVar4[-1] = 0;
      }
      piVar4 = piVar4 + 5;
    }
    if (unaff_r4[2] == 0) {
      bVar1 = false;
    }
    else {
      bVar2 = recovered_10002730(param_1,(int)unaff_r4,0x14,&local_1c);
      bVar1 = true;
      if ((bVar2) &&
         (((local_1c & 1) == 0 || (recovered_100027d0(param_1,(int)unaff_r4,0x14), extraout_r0 != 0)
          ))) {
        recovered_100027ec(param_1);
        uVar5 = unaff_r4[7];
        if (uVar5 == 0) {
          uVar5 = 5000;
        }
        iVar3 = recovered_10002828(param_1,(int)unaff_r4,0,uVar5);
        bVar1 = iVar3 == 0;
      }
    }
    if (*(char *)((int)unaff_r4 + 0xf) != '\0') {
      uVar5 = (uint)*(ushort *)(unaff_r4 + 4);
      if (bVar1) {
        uVar5 = uVar5 & 0xfffffffb;
      }
      recovered_10002698(param_1,(uint)*(byte *)(unaff_r4 + 3),(uint)*(byte *)((int)unaff_r4 + 0xd),
                         (uint)*(byte *)((int)unaff_r4 + 0xe),uVar5);
      *(undefined1 *)((int)unaff_r4 + 0xf) = 0;
    }
    if (!bVar1) {
      recovered_10002960(param_1,unaff_r4 + 0xd);
      recovered_10002960(param_1,unaff_r4 + 0x18);
      recovered_10002960(param_1,unaff_r4 + 0x23);
      recovered_10002960(param_1,unaff_r4 + 0x2e);
      if (unaff_r4[0x3a] != 0) {
        recovered_100029a8(param_1,unaff_r4[0x3a]);
      }
      if (unaff_r4[0x40] != 0) {
        recovered_100029a8(param_1,unaff_r4[0x40]);
      }
      unaff_r4[0x40] = 0;
      unaff_r4[0x39] = 0;
      unaff_r4[0x3a] = 0;
      unaff_r4[0x3f] = 0;
    }
  }
  return;
}

#undef DAT_1000258c
#undef DAT_10002590
#undef local_1c

#define abStack_a8 (*(byte (*)[168])(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002594
 */

void recovered_10002594(int param_1,uint param_2,int param_3)

{
  unsigned char pf_stack_frame[224] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  int iVar3;

  if (param_3 == 0) {
    recovered_10003090(param_1,param_2,0x30);
    return;
  }
  for (uVar2 = 0; (param_3 != 0 && (uVar2 < 10)); uVar2 = uVar2 + 1) {
    uVar1 = recovered_10003748(param_3,10);
    abStack_a8[uVar2 + 0x82] = (char)param_3 + (char)uVar1 * -10 | 0x30;
    param_3 = uVar1;
  }
  for (iVar3 = -uVar2; iVar3 != 0; iVar3 = iVar3 + 1) {
    recovered_10003090(param_1,param_2,abStack_a8[0x81 - iVar3]);
  }
  return;
}

#undef abStack_a8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002644
 */

void recovered_10002644(int param_1,uint param_2,char *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  uVar1 = recovered_10002708(param_1);
  if (param_1 == 0 || param_3 == (char *)0x0) {
    return;
  }
  while( true ) {
    if ((*param_3 == '\0') || (param_2 <= uVar1 + 1)) break;
    *(char *)(param_1 + uVar1) = *param_3;
    uVar1 = uVar1 + 1;
    param_3 = param_3 + 1;
  }
  *(undefined1 *)(param_1 + uVar1) = 0;
  return;
}


#undef DAT_10002704
#define DAT_10002704 (*(int *)(0x10002704U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002698
 */

undefined4
recovered_10002698(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;

  if ((((param_1 == (int *)0x0) || (*param_1 != (*(uint32_t *)(uint32_t[]){0x54584b57ULL}))) || ((uint)param_1[2] < 100)) ||
     ((code *)param_1[0x18] == (code *)0x0)) {
    return 0;
  }
  uVar1 = (*(code *)param_1[0x18])(param_2,param_3,param_4,4,2,param_5);
  return uVar1;
}

#undef DAT_10002704

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002708
 */

int recovered_10002708(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;

  if (param_1 == 0) {
    return 0;
  }
  iVar1 = 0;
  do {
    iVar2 = iVar1;
    iVar1 = iVar2 + 1;
  } while (*(char *)(param_1 + iVar2) != '\0');
  return iVar2;
}


#undef DAT_100027cc
#define DAT_100027cc (*(int *)(0x100027ccU))
#define local_14 (*(undefined4 *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002730
 */

bool recovered_10002730(int *param_1,int param_2,int param_3,undefined4 *param_4)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  int iVar1;
  code *pcVar2;

  local_14 = 0;
  if (param_4 == (undefined4 *)0x0) {
    return false;
  }
  if (*(int *)(param_2 + 8) == 0 || param_1 == (int *)0x0) {
    return false;
  }
  if (*param_1 != (*(uint32_t *)(uint32_t[]){0x54584b57ULL})) {
    return false;
  }
  if ((uint)param_1[2] < 0xc0) {
    if ((uint)param_1[2] < 0x6c) {
      return false;
    }
  }
  else {
    pcVar2 = (code *)param_1[0x2f];
    if (pcVar2 != (code *)0x0) goto LAB_100027a8;
  }
  pcVar2 = (code *)param_1[0x1a];
  if (pcVar2 == (code *)0x0) {
    return false;
  }
LAB_100027a8:
  iVar1 = (*pcVar2)(*(int *)(param_2 + 8) + param_3,4,&local_14);
  if (iVar1 != 0) {
    *param_4 = local_14;
  }
  return iVar1 != 0;
}

#undef DAT_100027cc
#undef local_14

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100027d0
 */

void recovered_100027d0(int *param_1,int param_2,int param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (*(int *)(param_2 + 8) == 0) {
    return;
  }
  recovered_100028c0(param_1,*(int *)(param_2 + 8) + param_3);
  return;
}


#undef DAT_10002824
#define DAT_10002824 (*(int *)(0x10002824U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100027ec
 */

void recovered_100027ec(int *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if ((param_1 != (int *)0x0) && (*param_1 == (*(uint32_t *)(uint32_t[]){0x54584b57ULL}))) {
    if ((uint)param_1[2] < 0x7c) {
      return;
    }
    if ((code *)param_1[0x1e] != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x1000281c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)param_1[0x1e])();
      return;
    }
  }
  return;
}

#undef DAT_10002824

#define local_24 (*(uint *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002828
 */

undefined4 recovered_10002828(int *param_1,int param_2,int param_3,uint param_4)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  bool bVar1;
  uint uVar2;

  uVar2 = 0;
  while( true ) {
    if (param_4 < uVar2) {
      return 0;
    }
    local_24 = 0;
    bVar1 = recovered_10002730(param_1,param_2,0x1c,&local_24);
    if (!bVar1) {
      return 0;
    }
    if ((local_24 & 2) != 0) {
      return 0;
    }
    if ((uint)(param_3 == 0) != (local_24 & 1)) break;
    recovered_10002920(param_1,1000);
    uVar2 = uVar2 + 1;
  }
  return 1;
}

#undef local_24

#undef DAT_1000291c
#define DAT_1000291c (*(int *)(0x1000291cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100028c0
 */

undefined4 recovered_100028c0(int *param_1,undefined4 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  code *UNRECOVERED_JUMPTABLE;

  if ((param_1 != (int *)0x0) && (*param_1 == (*(uint32_t *)(uint32_t[]){0x54584b57ULL}))) {
    if ((uint)param_1[2] < 0xc4) {
      if ((uint)param_1[2] < 0x70) {
        return 0;
      }
    }
    else {
      UNRECOVERED_JUMPTABLE = (code *)param_1[0x30];
      if (UNRECOVERED_JUMPTABLE != (code *)0x0) goto LAB_10002908;
    }
    UNRECOVERED_JUMPTABLE = (code *)param_1[0x1b];
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
LAB_10002908:
                    /* WARNING: Could not recover jumptable at 0x10002910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*UNRECOVERED_JUMPTABLE)(param_2,4);
      return uVar1;
    }
  }
  return 0;
}

#undef DAT_1000291c

#undef DAT_1000295c
#define DAT_1000295c (*(int *)(0x1000295cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002920
 */

void recovered_10002920(int *param_1,undefined4 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if ((param_1 != (int *)0x0) && (*param_1 == (*(uint32_t *)(uint32_t[]){0x54584b57ULL}))) {
    if ((uint)param_1[2] < 0x34) {
      return;
    }
    if ((code *)param_1[0xc] != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x10002954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)param_1[0xc])(param_2);
      return;
    }
  }
  return;
}

#undef DAT_1000295c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002960
 */

void recovered_10002960(int *param_1,int *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_2 == (int *)0x0) {
    return;
  }
  if (*param_2 != 0) {
    recovered_100029a8(param_1,*param_2);
  }
  param_2[2] = 0;
  param_2[3] = *(int *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 4);
  param_2[4] = *(int *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 8);
  param_2[5] = *(int *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 12);
  param_2[1] = 0;
  *param_2 = 0;
  param_2[10] = 0;
  return;
}


#undef DAT_100029e4
#define DAT_100029e4 (*(int *)(0x100029e4U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100029a8
 */

void recovered_100029a8(int *param_1,undefined4 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if ((param_1 != (int *)0x0) && (*param_1 == (*(uint32_t *)(uint32_t[]){0x54584b57ULL}))) {
    if ((uint)param_1[2] < 0x3c) {
      return;
    }
    if ((code *)param_1[0xe] != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x100029dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)param_1[0xe])(param_2);
      return;
    }
  }
  return;
}

#undef DAT_100029e4

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100029e8
 */

undefined4
recovered_100029e8(int *param_1,int param_2,int *param_3,int param_4,int param_5,undefined2 param_6,
                  int param_7)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;

  iVar4 = param_5 * param_4;
  uVar1 = recovered_10002ae4(param_1,iVar4,param_3);
  param_3[1] = uVar1;
  if (uVar1 == 0) {
    uVar5 = 0;
  }
  else {
    for (iVar2 = 0; iVar4 != iVar2; iVar2 = iVar2 + 1) {
      *(undefined1 *)(param_3[1] + iVar2) = 0;
    }
    iVar2 = recovered_10002b68(param_1,param_2,param_3[1],iVar4,(int)(param_3 + 2),param_3 + 3);
    uVar5 = 0;
    if ((iVar2 != 0) && ((*(ushort *)(param_3 + 2) & 0xfff) == 0)) {
      uVar5 = 1;
      param_3[10] = param_7;
      *(undefined2 *)(param_3 + 9) = param_6;
      param_3[5] = param_5;
      param_3[7] = 0;
      param_3[6] = 0;
      param_3[4] = param_4;
      uVar3 = *(undefined4 *)(param_2 + 0x14);
      param_3[8] = 1;
      recovered_10002be4(param_1,uVar3,param_3[1],iVar4);
    }
  }
  return uVar5;
}


#undef DAT_10002b64
#define DAT_10002b64 (*(int *)(0x10002b64U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002ae4
 */

uint recovered_10002ae4(int *param_1,int param_2,int *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;

  uVar2 = 0;
  if ((((param_3 != (int *)0x0) && (0xfff < param_2 + 0xfffU)) &&
      (*param_3 = 0, param_1 != (int *)0x0)) &&
     (((*param_1 == (*(uint32_t *)(uint32_t[]){0x54584b57ULL}) && (0x37 < (uint)param_1[2])) &&
      (((code *)param_1[0xd] != (code *)0x0 &&
       (iVar1 = (*(code *)param_1[0xd])(param_2 + 0xfffU), iVar1 != 0)))))) {
    *param_3 = iVar1;
    uVar2 = iVar1 + 0xfffU & 0xfffff000;
  }
  return uVar2;
}

#undef DAT_10002b64

#undef DAT_10002be0
#define DAT_10002be0 (*(uint8_t * *)(0x10002be0U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002b68
 */

undefined4
recovered_10002b68(undefined4 *param_1,int param_2,int param_3,undefined4 param_4,int param_5,
                  undefined4 param_6)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  code *pcVar2;

  if ((((param_2 != 0 && param_1 != (undefined4 *)0x0) && ((code *)*param_1 == (*(uint32_t *)(uint32_t[]){0x54584b57ULL}))) &&
      (0x73 < (uint)param_1[2])) && (param_5 != 0)) {
    pcVar2 = (*(uint32_t *)(uint32_t[]){0x54584b57ULL});
    if (param_3 != 0) {
      pcVar2 = (code *)param_1[0x1c];
    }
    if (param_3 != 0 && pcVar2 != (code *)0x0) {
      uVar1 = (*pcVar2)(*(undefined4 *)(param_2 + 0x14),param_3,param_4,param_5,param_6);
      return uVar1;
    }
  }
  return 0;
}

#undef DAT_10002be0

#undef DAT_10002c28
#define DAT_10002c28 (*(int *)(0x10002c28U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002be4
 */

void recovered_10002be4(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if ((param_1 != (int *)0x0) && (*param_1 == (*(uint32_t *)(uint32_t[]){0x54584b57ULL}))) {
    if ((uint)param_1[2] < 0x78) {
      return;
    }
    if ((code *)param_1[0x1d] != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x10002c20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)param_1[0x1d])(param_2,param_3,param_4);
      return;
    }
  }
  return;
}

#undef DAT_10002c28

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002c2c
 */

void recovered_10002c2c(int param_1,int param_2,undefined1 param_3,undefined4 param_4,
                       undefined2 *param_5)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined1 *puVar1;
  int iVar2;
  int iVar3;

  iVar3 = *(int *)(param_2 + 4);
  iVar2 = *(ushort *)(param_1 + 0x30) + 1;
  *(short *)(param_1 + 0x30) = (short)iVar2;
  puVar1 = (undefined1 *)(*(int *)(param_2 + 0x14) * *(int *)(param_2 + 0x18) + iVar3);
  for (iVar3 = 0; iVar3 != 0x40; iVar3 = iVar3 + 1) {
    puVar1[iVar3] = 0;
  }
  puVar1[4] = (char)param_4;
  puVar1[7] = (char)((uint)param_4 >> 0x18);
  puVar1[6] = (char)((uint)param_4 >> 0x10);
  puVar1[5] = (char)((uint)param_4 >> 8);
  puVar1[2] = (char)iVar2;
  *puVar1 = param_3;
  puVar1[3] = (char)((uint)iVar2 >> 8);
  *param_5 = (short)iVar2;
  return;
}


#define local_24 (*(undefined4 *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002ca4
 */

bool recovered_10002ca4(int *param_1,undefined4 *param_2,int param_3,int param_4,uint param_5,
                       undefined4 *param_6)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  bool bVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;

  local_24 = 0;
  piVar2 = param_1;
  if (param_6 != (undefined4 *)0x0) {
    piVar2 = (int *)0x0;
    *param_6 = 0;
  }
  if ((param_1 != (int *)0x0 && param_2 != (undefined4 *)0x0) && (param_3 != 0 && param_4 != 0)) {
    iVar7 = *(int *)(param_3 + 4);
    if (iVar7 != 0) {
      piVar2 = *(int **)(param_4 + 4);
    }
    if (iVar7 != 0 && piVar2 != (int *)0x0) {
      iVar3 = *(int *)(param_3 + 0x10);
      puVar6 = param_6;
      if (iVar3 != 0) {
        puVar6 = *(undefined4 **)(param_4 + 0x10);
      }
      if (iVar3 != 0 && puVar6 != (undefined4 *)0x0) {
        iVar10 = param_2[7];
        recovered_10002be4(param_1,param_2[5],iVar7,*(int *)(param_3 + 0x14) * iVar3);
        uVar4 = recovered_10003798(*(int *)(param_3 + 0x18) + 1,*(uint *)(param_3 + 0x10));
        *(uint *)(param_3 + 0x18) = uVar4;
        recovered_100027ec(param_1);
        uVar4 = iVar10 * 1000;
        if (iVar10 == 0) {
          uVar4 = 0x4b40;
        }
        if (iVar10 == 0) {
          uVar4 = uVar4 & 0xffff | 0x4c0000;
        }
        iVar7 = recovered_100028c0(param_1,*(undefined4 *)(param_3 + 0x28));
        if (iVar7 == 0) {
          recovered_100023e0(param_1,param_2);
        }
        else {
          iVar7 = 0;
          for (uVar9 = 0; uVar5 = recovered_10003748(uVar9,1000), uVar9 < uVar4; uVar9 = uVar9 + 100
              ) {
            iVar3 = *(int *)(param_4 + 0x14);
            iVar10 = *(int *)(param_4 + 4);
            iVar11 = *(int *)(param_4 + 0x1c);
            recovered_10002be4(param_1,param_2[5],iVar10,*(int *)(param_4 + 0x10) * iVar3);
            puVar6 = (undefined4 *)(iVar3 * iVar11 + iVar10);
            uVar8 = puVar6[3];
            if (-((int)(uVar8 << 0xf) >> 0x1f) == *(int *)(param_4 + 0x20)) {
              if (((((uVar8 & 0xffff) == param_5) &&
                   ((uint)*(ushort *)(param_3 + 0x24) == (uint)puVar6[2] >> 0x10)) &&
                  (uVar4 = puVar6[2] & 0xffff, uVar4 < *(uint *)(param_3 + 0x10))) &&
                 (uVar4 == *(uint *)(param_3 + 0x18))) {
                if (param_6 != (undefined4 *)0x0) {
                  *param_6 = *puVar6;
                }
                uVar4 = recovered_10003798(*(int *)(param_4 + 0x1c) + 1,*(uint *)(param_4 + 0x10));
                bVar1 = uVar4 == 0;
                *(uint *)(param_4 + 0x1c) = uVar4;
                if (bVar1) {
                  uVar4 = *(uint *)(param_4 + 0x20);
                }
                if (bVar1) {
                  *(uint *)(param_4 + 0x20) = uVar4 ^ 1;
                }
                iVar7 = recovered_100028c0(param_1,*(undefined4 *)(param_4 + 0x28));
                if (iVar7 != 0) {
                  return uVar8 < 0x20000;
                }
              }
              break;
            }
            if (uVar5 * 1000 + iVar7 == 0) {
              local_24 = 0;
              bVar1 = recovered_10002730(param_1,(int)param_2,0x1c,&local_24);
              if ((!bVar1) || ((local_24 & 2) != 0)) break;
            }
            recovered_10002920(param_1,100);
            iVar7 = iVar7 + -100;
          }
          recovered_100023e0(param_1,param_2);
        }
      }
    }
  }
  return false;
}

#undef local_24

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002f54
 */

void recovered_10002f54(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                       undefined4 param_5)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  *(char *)(param_1 + 0x24) = (char)param_5;
  *(char *)(param_1 + 0x20) = (char)param_4;
  *(char *)(param_1 + 0x1c) = (char)param_3;
  *(char *)(param_1 + 0x27) = (char)((uint)param_5 >> 0x18);
  *(char *)(param_1 + 0x18) = (char)param_2;
  *(char *)(param_1 + 0x25) = (char)((uint)param_5 >> 8);
  *(char *)(param_1 + 0x23) = (char)((uint)param_4 >> 0x18);
  *(char *)(param_1 + 0x26) = (char)((uint)param_5 >> 0x10);
  *(char *)(param_1 + 0x21) = (char)((uint)param_4 >> 8);
  *(char *)(param_1 + 0x1f) = (char)((uint)param_3 >> 0x18);
  *(char *)(param_1 + 0x22) = (char)((uint)param_4 >> 0x10);
  *(char *)(param_1 + 0x1d) = (char)((uint)param_3 >> 8);
  *(char *)(param_1 + 0x1b) = (char)((uint)param_2 >> 0x18);
  *(char *)(param_1 + 0x1e) = (char)((uint)param_3 >> 0x10);
  *(char *)(param_1 + 0x1a) = (char)((uint)param_2 >> 0x10);
  *(char *)(param_1 + 0x19) = (char)((uint)param_2 >> 8);
  return;
}


#define uStack_24 (*(undefined4 *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002fcc
 */

bool recovered_10002fcc(int *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  bool bVar1;
  int extraout_r0 = 0;

  uStack_24 = 0;
  recovered_10002c2c((int)param_2,(int)(param_2 + 0xd),6,param_4,(undefined2 *)((int)&uStack_24 + 2)
                    );
  recovered_10002f54(extraout_r0,param_2[0x41],param_2[0x42],0,0);
  *(undefined4 *)(extraout_r0 + 0x28) = param_3;
  recovered_10000f24((undefined1 *)param_2[0x3f],0x1000);
  recovered_10002be4(param_1,param_2[5],param_2[0x3f],0x1000);
  bVar1 = recovered_10002ca4(param_1,param_2,(int)(param_2 + 0xd),(int)(param_2 + 0x18),
                             uStack_24 >> 0x10,(undefined4 *)0x0);
  if (bVar1) {
    recovered_10002be4(param_1,param_2[5],param_2[0x3f],0x1000);
  }
  return bVar1;
}

#undef uStack_24

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003090
 */

void recovered_10003090(int param_1,uint param_2,undefined1 param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = recovered_10002708(param_1);
  if ((param_1 != 0) && (iVar1 + 1U < param_2)) {
    *(undefined1 *)(param_1 + iVar1) = param_3;
    *(undefined1 *)(param_1 + iVar1 + 1U) = 0;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100030cc
 */

void recovered_100030cc(int param_1,uint param_2,uint param_3,int param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;

  uVar4 = param_4 * 4;
  for (; uVar4 = uVar4 - 4, param_4 != 0; param_4 = param_4 + -1) {
    uVar2 = param_3 >> (uVar4 & 0xff) & 0xf;
    bVar1 = (byte)uVar2;
    bVar3 = bVar1 + 0x37;
    if (uVar2 < 10) {
      bVar3 = bVar1 | 0x30;
    }
    recovered_10003090(param_1,param_2,bVar3);
  }
  return;
}


#undef DAT_10003410
#define DAT_10003410 (*(int *)(0x10003410U))
#undef DAT_10003414
#define DAT_10003414 (*(int *)(0x10003414U))
#undef DAT_10003418
#define DAT_10003418 (*(int *)(0x10003418U))
#undef DAT_1000341c
#define DAT_1000341c (*(int *)(0x1000341cU))
#undef DAT_10003420
#define DAT_10003420 (*(int *)(0x10003420U))
#undef DAT_10003424
#define DAT_10003424 (*(int *)(0x10003424U))
#undef DAT_10003428
#define DAT_10003428 (*(int *)(0x10003428U))
#undef DAT_1000342c
#define DAT_1000342c (*(int *)(0x1000342cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000312c
 */

undefined4
recovered_1000312c(uint param_1,uint param_2,undefined1 *param_3,uint param_4,int param_5)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined1 *puVar1;
  bool bVar2;
  int extraout_r0 = 0;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint extraout_r1 = 0;
  undefined1 *puVar9;
  int *piVar10;
  int *piVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  undefined4 uVar15;
  uint uVar16;

  uVar15 = 0;
  if (((param_1 < *(uint *)(((uintptr_t)pf_module_state + 0x76cU))) &&
      (piVar11 = (int *)(((uintptr_t)pf_module_state + 0x6c8U) + param_1 * 0x14), *piVar11 != 0)) &&
     ((uint)piVar11[1] < *(uint *)(((uintptr_t)pf_module_state + 0x768U)))) {
    piVar10 = (int *)(piVar11[1] * 0x10c + ((uintptr_t)pf_module_state + 0x298U));
    recovered_10003430((int)piVar10);
    if (param_4 != 0) {
      iVar3 = extraout_r0;
      if (param_3 != (undefined1 *)0x0) {
        iVar3 = *(int *)(((uintptr_t)pf_module_state + 0x770U));
      }
      if (param_3 != (undefined1 *)0x0 && iVar3 != 0) {
        uVar4 = piVar11[4];
        uVar13 = extraout_r1;
        if (param_2 <= uVar4) {
          uVar13 = param_4;
        }
        if ((param_2 <= uVar4 && param_4 <= uVar4 - param_2) && (*piVar10 != 0)) {
          uVar4 = piVar11[3];
          for (; uVar13 != 0; uVar13 = uVar13 - (uVar14 >> 9)) {
            uVar5 = recovered_10003748(param_2,uVar4 >> 9);
            iVar3 = param_2 - uVar5 * (uVar4 >> 9);
            uVar14 = piVar10[10] - (piVar10[10] & 0x1ffU | iVar3 * 0x200);
            if (uVar13 >> 0x17 == 0 && (uint)(uVar14 <= uVar13 << 9) <= uVar13 >> 0x17) {
              uVar14 = uVar13 << 9;
            }
            uVar12 = piVar11[3];
            uVar16 = uVar14 + iVar3 * 0x200;
            uVar6 = recovered_10003748((uVar12 + uVar16) - 1,uVar12);
            if (param_5 == 0) {
              uVar15 = 0;
              bVar2 = recovered_10003464(*(int **)(((uintptr_t)pf_module_state + 0x770U)),piVar10,piVar11[2],2,
                                         uVar5,0,uVar6,uVar12);
              if (!bVar2) goto LAB_100031e4;
              iVar8 = 0;
              puVar9 = param_3;
              for (uVar5 = uVar14; uVar5 != 0; uVar5 = uVar5 - 1) {
                puVar1 = (undefined1 *)(piVar10[0x39] + iVar3 * 0x200 + iVar8);
                iVar8 = iVar8 + 1;
                *puVar9 = *puVar1;
                puVar9 = puVar9 + 1;
              }
            }
            else {
              uVar16 = recovered_10003798(uVar16,uVar12);
              if (uVar16 != 0 || iVar3 != 0) {
                uVar15 = 0;
                bVar2 = recovered_10003464(*(int **)(((uintptr_t)pf_module_state + 0x770U)),piVar10,piVar11[2],2
                                           ,uVar5,0,uVar6,uVar12);
                if (!bVar2) goto LAB_100031e4;
              }
              iVar8 = (*(uint32_t *)(uint32_t[]){0x11ccULL});
              iVar7 = 0;
              puVar9 = param_3;
              for (uVar12 = uVar14; uVar12 != 0; uVar12 = uVar12 - 1) {
                *(undefined1 *)(piVar10[0x39] + iVar3 * 0x200 + iVar7) = *puVar9;
                iVar7 = iVar7 + 1;
                puVar9 = puVar9 + 1;
              }
              uVar15 = 0;
              bVar2 = recovered_10003464(*(int **)(((uintptr_t)pf_module_state+0x770U)),piVar10,piVar11[2],1,uVar5,0,
                                         uVar6,piVar11[3]);
              if (!bVar2) goto LAB_100031e4;
            }
            param_3 = param_3 + uVar14;
            param_2 = param_2 + (uVar14 >> 9);
          }
          uVar15 = 1;
        }
      }
    }
LAB_100031e4:
    DataMemoryBarrier(0xb);
    piVar10[0xb] = 0;
  }
  return uVar15;
}

#undef DAT_10003410
#undef DAT_10003414
#undef DAT_10003418
#undef DAT_1000341c
#undef DAT_10003420
#undef DAT_10003424
#undef DAT_10003428
#undef DAT_1000342c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003430
 */

void recovered_10003430(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int *piVar1;
  int iVar2;
  int iVar3;

  piVar1 = (int *)(param_1 + 0x2c);
  while( true ) {
    do {
      iVar2 = pf_arm_ldrex32(piVar1);
      iVar3 = pf_arm_strex32(piVar1,1);
    } while (iVar3 != 0);
    DataMemoryBarrier(0xb);
    if (iVar2 == 0) break;
    do {
    } while (*piVar1 != 0);
  }
  return;
}


#define uStack_24 (*(undefined4 *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003464
 */

bool recovered_10003464(int *param_1,undefined4 *param_2,undefined4 param_3,int param_4,
                       undefined4 param_5,undefined4 param_6,int param_7,int param_8)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  bool bVar1;
  int extraout_r0 = 0;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;

  bVar1 = false;
  uStack_24 = 0;
  uVar5 = param_8 * param_7;
  if ((0xffffdfff < uVar5 - 0x2001) && (param_2[10] == 0 || uVar5 <= (uint)param_2[10])) {
    if ((param_4 - 1U & 0xff) < 2) {
      recovered_10002be4(param_1,param_2[5],param_2[0x39],uVar5);
    }
    recovered_10002c2c((int)param_2,(int)(param_2 + 0x23),(char)param_4,param_3,
                       (undefined2 *)((int)&uStack_24 + 2));
    uVar4 = 0;
    uVar2 = 0;
    if (0x1000 < uVar5) {
      uVar4 = param_2[0x3d];
    }
    if (0x1000 < uVar5) {
      uVar2 = param_2[0x3e];
    }
    recovered_10002f54(extraout_r0,param_2[0x3b],param_2[0x3c],uVar4,uVar2);
    iVar3 = param_7 + -1;
    *(char *)(extraout_r0 + 0x30) = (char)iVar3;
    *(undefined4 *)(extraout_r0 + 0x2c) = 0;
    *(char *)(extraout_r0 + 0x33) = (char)((uint)iVar3 >> 0x18);
    *(char *)(extraout_r0 + 0x32) = (char)((uint)iVar3 >> 0x10);
    *(char *)(extraout_r0 + 0x31) = (char)((uint)iVar3 >> 8);
    *(char *)(extraout_r0 + 0x28) = (char)param_5;
    *(char *)(extraout_r0 + 0x2b) = (char)((uint)param_5 >> 0x18);
    *(char *)(extraout_r0 + 0x2a) = (char)((uint)param_5 >> 0x10);
    *(char *)(extraout_r0 + 0x29) = (char)((uint)param_5 >> 8);
    bVar1 = recovered_10002ca4(param_1,param_2,(int)(param_2 + 0x23),(int)(param_2 + 0x2e),
                               uStack_24 >> 0x10,(undefined4 *)0x0);
    if ((param_4 == 2) && (bVar1)) {
      recovered_10002be4(param_1,param_2[5],param_2[0x39],uVar5);
      bVar1 = true;
    }
  }
  return bVar1;
}

#undef uStack_24

#undef DAT_10003724
#define DAT_10003724 (*(int *)(0x10003724U))
#undef DAT_10003728
#define DAT_10003728 (*(int *)(0x10003728U))
#undef DAT_1000372c
#define DAT_1000372c (*(int *)(0x1000372cU))
#undef DAT_10003730
#define DAT_10003730 (*(int *)(0x10003730U))
#undef DAT_10003734
#define DAT_10003734 (*(int *)(0x10003734U))
#undef DAT_10003738
#define DAT_10003738 (*(int *)(0x10003738U))
#undef DAT_1000373c
#define DAT_1000373c (*(int *)(0x1000373cU))
#undef DAT_10003740
#define DAT_10003740 (*(int *)(0x10003740U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100035c8
 */

undefined4 recovered_100035c8(undefined4 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint *puVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  bool bVar9;

  iVar1 = (*(uint32_t *)(uint32_t[]){0xefcULL});
  uVar8 = 0;
  if (param_1 != (undefined4 *)0x0) {
    bVar9 = *(int *)(((uintptr_t)pf_module_state + 0x770U)) != 0;
    iVar2 = 0;
    if (bVar9) {
      iVar2 = *(int *)(((uintptr_t)pf_module_state + 0x76cU));
    }
    if (bVar9 && iVar2 != 0) {
      uVar7 = 0;
      iVar6 = 0;
      puVar4 = (uint *)(((uintptr_t)pf_module_state + 0x6d8U));
      for (; iVar2 != 0; iVar2 = iVar2 + -1) {
        if (puVar4[-4] != 0) {
          bVar9 = CARRY4(uVar7,*puVar4);
          uVar7 = uVar7 + *puVar4;
          iVar6 = iVar6 + (uint)bVar9;
        }
        puVar4 = puVar4 + 5;
      }
      recovered_10000f24((undefined1 *)param_1,500);
      piVar5 = *(int **)(((uintptr_t)pf_module_state+0x770U));
      param_1[4] = 0x13;
      param_1[3] = 0x11;
      uVar8 = 1;
      uVar3 = 0;
      param_1[1] = 1;
      *param_1 = 500;
      if ((((piVar5 != (int *)0x0) && (*piVar5 == (*(uint32_t *)(uint32_t[]){0x54584b57ULL}))) && (0x2f < (uint)piVar5[2])) &&
         ((code *)piVar5[0xb] != (code *)0x0)) {
        uVar3 = (*(code *)piVar5[0xb])();
      }
      param_1[6] = uVar3;
      param_1[0x11] = *(undefined4 *)(((uintptr_t)pf_module_state + 0x768U));
      param_1[0x12] = *(undefined4 *)(((uintptr_t)pf_module_state+0x76cU));
      param_1[0x13] = uVar7;
      param_1[0x14] = iVar6;
      recovered_100023cc((undefined1 *)(param_1 + 0x15),0x40,(char *)(((uintptr_t)pf_module_state + 0x185U)));
      recovered_100023cc((undefined1 *)(param_1 + 0x25),0x40,(char *)(((uintptr_t)pf_module_state + 0x199U)));
      recovered_100023cc((undefined1 *)(param_1 + 0x35),0x60,(char *)(((uintptr_t)pf_module_state + 0x1e2U)));
      recovered_100023cc((undefined1 *)(param_1 + 0x4d),0xc0,(char *)(((uintptr_t)pf_module_state + 0x1f5U)));
    }
  }
  return uVar8;
}

#undef DAT_10003724
#undef DAT_10003728
#undef DAT_1000372c
#undef DAT_10003730
#undef DAT_10003734
#undef DAT_10003738
#undef DAT_1000373c
#undef DAT_10003740

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003748
 */

uint recovered_10003748(uint param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;

  if (param_2 == 0) {
    return 0;
  }
  uVar1 = 0;
  uVar2 = 0;
  uVar3 = 0x1f;
  do {
    uVar1 = param_1 >> (uVar3 & 0xff) & 1 | uVar1 << 1;
    if (param_2 <= uVar1) {
      uVar2 = uVar2 | 1 << (uVar3 & 0xff);
      uVar1 = uVar1 - param_2;
    }
    bVar4 = uVar3 != 0;
    uVar3 = uVar3 - 1;
  } while (bVar4);
  return uVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003798
 */

uint recovered_10003798(uint param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;

  uVar1 = 0;
  if (param_2 != 0) {
    uVar3 = 0x1f;
    do {
      uVar2 = param_1 >> (uVar3 & 0xff) & 1 | uVar1 << 1;
      uVar1 = uVar2 - param_2;
      if (uVar2 < param_2) {
        uVar1 = uVar2;
      }
      bVar4 = uVar3 != 0;
      uVar3 = uVar3 - 1;
    } while (bVar4);
  }
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100037d0
 */

uint recovered_100037d0(uint param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;

  uVar4 = param_2;
  if ((int)param_2 < 0) {
    uVar4 = -param_2;
  }
  uVar3 = param_1;
  if ((int)param_1 < 0) {
    uVar3 = -param_1;
  }
  if (param_2 == 0) {
    uVar5 = 0;
  }
  else {
    uVar2 = 0;
    uVar5 = 0;
    uVar1 = 0x1f;
    do {
      uVar2 = uVar3 >> (uVar1 & 0xff) & 1 | uVar2 << 1;
      if (uVar4 <= uVar2) {
        uVar5 = uVar5 | 1 << (uVar1 & 0xff);
        uVar2 = uVar2 - uVar4;
      }
      bVar6 = uVar1 != 0;
      uVar1 = uVar1 - 1;
    } while (bVar6);
  }
  if ((int)(param_2 ^ param_1) < 0) {
    uVar5 = -uVar5;
  }
  return uVar5;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003840
 */

uint recovered_10003840(uint param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;

  uVar4 = param_2;
  if ((int)param_2 < 0) {
    uVar4 = -param_2;
  }
  uVar5 = param_1;
  if ((int)param_1 < 0) {
    uVar5 = -param_1;
  }
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = 0;
    uVar2 = 0x1f;
    do {
      uVar3 = uVar5 >> (uVar2 & 0xff) & 1 | uVar1 << 1;
      uVar1 = uVar3 - uVar4;
      if (uVar3 < uVar4) {
        uVar1 = uVar3;
      }
      bVar6 = uVar2 != 0;
      uVar2 = uVar2 - 1;
    } while (bVar6);
  }
  if ((int)param_1 < 0) {
    uVar1 = -uVar1;
  }
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100038a8
 */

undefined8 recovered_100038a8(uint param_1,uint param_2,uint param_3,uint param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;

  if (param_3 == 0 && param_4 == 0) {
    uVar6 = 0;
    uVar8 = 0;
  }
  else {
    uVar9 = 0;
    uVar4 = 0;
    uVar6 = 0;
    uVar8 = 0;
    uVar2 = 0x3f;
    do {
      uVar7 = uVar4 << 1 | uVar9 >> 0x1f;
      uVar3 = uVar2 - 0x20;
      uVar4 = param_1 >> (uVar2 & 0xff) | param_2 << (0x20 - uVar2 & 0xff);
      if (-1 < (int)uVar3) {
        uVar4 = param_2 >> (uVar3 & 0xff);
      }
      uVar5 = uVar4 & 1 | uVar9 << 1;
      bVar10 = uVar7 <= param_4;
      bVar1 = (uint)(param_3 <= uVar5) <= uVar7 - param_4;
      uVar4 = uVar7 - (param_4 + (param_3 > uVar5));
      uVar9 = uVar5 - param_3;
      if (bVar10 && bVar1) {
        uVar4 = uVar7;
        uVar9 = uVar5;
      }
      uVar7 = 1 >> (0x20 - uVar2 & 0xff);
      if (-1 < (int)uVar3) {
        uVar7 = 1 << (uVar3 & 0xff);
      }
      if (!bVar10 || !bVar1) {
        uVar8 = uVar8 | uVar7;
      }
      uVar7 = 1 << (uVar2 & 0xff);
      if (-1 < (int)uVar3) {
        uVar7 = 0;
      }
      if (!bVar10 || !bVar1) {
        uVar6 = uVar6 | uVar7;
      }
      bVar10 = uVar2 != 0;
      uVar2 = uVar2 - 1;
    } while (bVar10);
  }
  return CONCAT44(uVar8,uVar6);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000398c
 */

undefined8 recovered_1000398c(uint param_1,uint param_2,uint param_3,uint param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;

  if (param_3 == 0 && param_4 == 0) {
    return 0;
  }
  uVar1 = 0;
  uVar4 = 0;
  uVar5 = 0x3f;
  do {
    uVar3 = uVar4 << 1 | uVar1 >> 0x1f;
    uVar4 = param_1 >> (uVar5 & 0xff) | param_2 << (0x20 - uVar5 & 0xff);
    if (-1 < (int)(uVar5 - 0x20)) {
      uVar4 = param_2 >> (uVar5 - 0x20 & 0xff);
    }
    uVar2 = uVar4 & 1 | uVar1 << 1;
    uVar1 = uVar2 - param_3;
    uVar4 = uVar3 - (param_4 + (param_3 > uVar2));
    if (uVar3 <= param_4 && (uint)(param_3 <= uVar2) <= uVar3 - param_4) {
      uVar1 = uVar2;
      uVar4 = uVar3;
    }
    bVar6 = uVar5 != 0;
    uVar5 = uVar5 - 1;
  } while (bVar6);
  return CONCAT44(uVar4,uVar1);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003a0c
 */

undefined8 recovered_10003a0c(uint param_1,uint param_2,uint param_3,uint param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  bool bVar15;

  uVar1 = (int)param_4 >> 0x1f;
  uVar8 = (param_3 ^ uVar1) - uVar1;
  uVar2 = (int)param_2 >> 0x1f;
  uVar13 = (param_4 ^ uVar1) - (uVar1 + ((param_3 ^ uVar1) < uVar1));
  uVar11 = (param_2 ^ uVar2) - (uVar2 + ((param_1 ^ uVar2) < uVar2));
  if (param_3 == 0 && param_4 == 0) {
    uVar12 = 0;
    uVar14 = 0;
  }
  else {
    uVar9 = 0;
    uVar4 = 0;
    uVar12 = 0;
    uVar14 = 0;
    uVar10 = 0x3f;
    do {
      uVar6 = uVar4 << 1 | uVar9 >> 0x1f;
      uVar5 = uVar10 - 0x20;
      uVar4 = (param_1 ^ uVar2) - uVar2 >> (uVar10 & 0xff) | uVar11 << (0x20 - uVar10 & 0xff);
      if (-1 < (int)uVar5) {
        uVar4 = uVar11 >> (uVar5 & 0xff);
      }
      uVar7 = uVar4 & 1 | uVar9 << 1;
      bVar15 = uVar6 <= uVar13;
      bVar3 = (uint)(uVar8 <= uVar7) <= uVar6 - uVar13;
      uVar4 = uVar6 - (uVar13 + (uVar8 > uVar7));
      uVar9 = uVar7 - uVar8;
      if (bVar15 && bVar3) {
        uVar4 = uVar6;
        uVar9 = uVar7;
      }
      uVar6 = 1 >> (0x20 - uVar10 & 0xff);
      if (-1 < (int)uVar5) {
        uVar6 = 1 << (uVar5 & 0xff);
      }
      if (!bVar15 || !bVar3) {
        uVar14 = uVar14 | uVar6;
      }
      uVar6 = 1 << (uVar10 & 0xff);
      if (-1 < (int)uVar5) {
        uVar6 = 0;
      }
      if (!bVar15 || !bVar3) {
        uVar12 = uVar12 | uVar6;
      }
      bVar15 = uVar10 != 0;
      uVar10 = uVar10 - 1;
    } while (bVar15);
  }
  uVar11 = -uVar12;
  uVar8 = -(uVar14 + (uVar12 != 0));
  if (-uVar2 == -uVar1) {
    uVar11 = uVar12;
    uVar8 = uVar14;
  }
  return CONCAT44(uVar8,uVar11);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003b2c
 */

undefined8 recovered_10003b2c(uint param_1,uint param_2,uint param_3,uint param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;

  uVar7 = (int)param_4 >> 0x1f;
  uVar8 = (param_3 ^ uVar7) - uVar7;
  uVar1 = (int)param_2 >> 0x1f;
  uVar9 = (param_4 ^ uVar7) - (uVar7 + ((param_3 ^ uVar7) < uVar7));
  uVar7 = (param_2 ^ uVar1) - (uVar1 + ((param_1 ^ uVar1) < uVar1));
  if (param_3 == 0 && param_4 == 0) {
    uVar3 = 0;
    uVar4 = 0;
  }
  else {
    uVar3 = 0;
    uVar4 = 0;
    uVar2 = 0x3f;
    do {
      uVar5 = uVar4 << 1 | uVar3 >> 0x1f;
      uVar4 = (param_1 ^ uVar1) - uVar1 >> (uVar2 & 0xff) | uVar7 << (0x20 - uVar2 & 0xff);
      if (-1 < (int)(uVar2 - 0x20)) {
        uVar4 = uVar7 >> (uVar2 - 0x20 & 0xff);
      }
      uVar6 = uVar4 & 1 | uVar3 << 1;
      uVar3 = uVar6 - uVar8;
      uVar4 = uVar5 - (uVar9 + (uVar8 > uVar6));
      if (uVar5 <= uVar9 && (uint)(uVar8 <= uVar6) <= uVar5 - uVar9) {
        uVar3 = uVar6;
        uVar4 = uVar5;
      }
      bVar10 = uVar2 != 0;
      uVar2 = uVar2 - 1;
    } while (bVar10);
  }
  uVar1 = -uVar3;
  uVar7 = -(uVar4 + (uVar3 != 0));
  if (-1 < (int)param_2) {
    uVar1 = uVar3;
    uVar7 = uVar4;
  }
  return CONCAT44(uVar7,uVar1);
}


#undef DAT_10003c68
#define DAT_10003c68 (*(double *)(0x10003c68U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003be8
 */

undefined8 recovered_10003be8(undefined4 param_1,undefined4 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  double dVar7;
  double dVar8;

  dVar7 = pf_bits_double(CONCAT44(param_2,param_1));
  uVar1 = 0;
  uVar2 = 0;
  if (dVar7 <= 0.0) {
    return 0;
  }
  uVar3 = 0x3f;
  dVar8 = pf_bits_double(0x43e0000000000000ULL);
  do {
    uVar4 = 1 << (uVar3 & 0xff);
    uVar5 = uVar3 - 0x20;
    if (-1 < (int)uVar5) {
      uVar4 = 0;
    }
    if (dVar8 <= dVar7) {
      uVar1 = uVar1 | uVar4;
    }
    uVar4 = 1 >> (0x20 - uVar3 & 0xff);
    if (-1 < (int)uVar5) {
      uVar4 = 1 << (uVar5 & 0xff);
    }
    if (dVar8 <= dVar7) {
      uVar2 = uVar2 | uVar4;
      dVar7 = dVar7 - dVar8;
    }
    bVar6 = uVar3 != 0;
    uVar3 = uVar3 - 1;
    dVar8 = dVar8 * 0.5;
  } while (bVar6);
  return CONCAT44(uVar2,uVar1);
}

#undef DAT_10003c68

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003c70
 */

undefined8 recovered_10003c70(undefined4 param_1,undefined4 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  undefined8 uVar2;

  dVar1 = pf_bits_double(CONCAT44(param_2,param_1));
  if (NAN(dVar1)) {
    return 0;
  }
  if (dVar1 < 0.0) {
    uVar2 = recovered_10003be8(SUB84(-dVar1,0),(int)((ulonglong)-dVar1 >> 0x20));
    return CONCAT44(-((int)((ulonglong)uVar2 >> 0x20) + (uint)((int)uVar2 != 0)),-(int)uVar2);
  }
  uVar2 = recovered_10003be8(param_1,param_2);
  return uVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003cbc
 */

undefined8 recovered_10003cbc(float param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  uVar1 = recovered_10003be8(SUB84((double)param_1,0),(int)((ulonglong)(double)param_1 >> 0x20));
  return uVar1;
}


#undef DAT_10004000
#define DAT_10004000 (*(code * *)(((uintptr_t)pf_module_state + 0x27cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003ccc
 */

void recovered_10003ccc(float param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

                    /* WARNING: Could not recover jumptable at ((uintptr_t)pf_module_state+0x264U). Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_10004000)(SUB84((double)param_1,0),(int)((ulonglong)(double)param_1 >> 0x20));
  return;
}

#undef DAT_10004000

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003cdc
 */

double recovered_10003cdc(uint param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  double dVar2;
  double dVar3;
  double dVar4;

  if (param_1 == 0 && param_2 == 0) {
    return 0.0;
  }
  dVar2 = 1.0;
  dVar3 = 0.0;
  do {
    dVar4 = dVar3 + dVar2;
    dVar2 = dVar2 + dVar2;
    if ((param_1 & 1) == 0) {
      dVar4 = dVar3;
    }
    dVar3 = dVar4;
    bVar1 = (byte)param_2;
    param_2 = param_2 >> 1;
    param_1 = (uint)(bVar1 & 1) << 0x1f | param_1 >> 1;
  } while (param_1 != 0 || param_2 != 0);
  return dVar3;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003d24
 */

double recovered_10003d24(uint param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  if ((int)param_2 < 0) {
    dVar1 = recovered_10003cdc(-param_1,-(param_2 + (param_1 != 0)));
    return -dVar1;
  }
  dVar1 = recovered_10003cdc(param_1,param_2);
  return dVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003d4c
 */

float recovered_10003d4c(uint param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_10003cdc(param_1,param_2);
  return (float)pf_bits_double(((pf_double_bits(dVar1) & 0xffffffff00000000) + (pf_double_bits(dVar1) & 0xffffffff)));
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003d68
 */

float recovered_10003d68(uint param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_10003d24(param_1,param_2);
  return (float)pf_bits_double(((pf_double_bits(dVar1) & 0xffffffff00000000) + (pf_double_bits(dVar1) & 0xffffffff)));
}


void *memset(void *p,int v,size_t n){volatile unsigned char *b=p;while(n--)*b++=(unsigned char)v;return p;}
void __bzero(void *p,size_t n){volatile unsigned char *b=p;while(n--)*b++=0;}
void bzero(void *p,size_t n){__bzero(p,n);}
