/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_10004000
#define DAT_10004000 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x424U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000418
 */

void * recovered_10000418(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return &DAT_10004000;
}

#undef DAT_10004000

#undef DAT_10003bdc
#define DAT_10003bdc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x0U)))
#undef DAT_10005000
#define DAT_10005000 (*(uint *)(((uintptr_t)pf_module_state + 0x1424U)))
#undef DAT_10006098
#define DAT_10006098 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x24bcU)))
#undef str_10003bdd
#define str_10003bdd (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1U)))
#define local_478 (*(byte (*)[1144])(pf_stack_frame + 24))
#define local_46c (*(char *)(pf_stack_frame + 36))
#define local_78 (*(int * *)(pf_stack_frame + 1048))
#define local_6c (*(byte (*)[108])(pf_stack_frame + 1060))
#define local_68 (*(uint *)(pf_stack_frame + 1064))
#define local_64 (*(undefined4 *)(pf_stack_frame + 1068))
#define local_60 (*(undefined4 *)(pf_stack_frame + 1072))
#define local_5c (*(undefined4 *)(pf_stack_frame + 1076))
#define local_58 (*(undefined4 *)(pf_stack_frame + 1080))
#define local_54 (*(undefined4 *)(pf_stack_frame + 1084))
#define local_50 (*(undefined4 *)(pf_stack_frame + 1088))
#define local_4c (*(undefined4 *)(pf_stack_frame + 1092))
#define local_48 (*(undefined4 *)(pf_stack_frame + 1096))
#define local_44 (*(undefined4 *)(pf_stack_frame + 1100))
#define local_40 (*(undefined4 *)(pf_stack_frame + 1104))
#define local_3c (*(uint *)(pf_stack_frame + 1108))
#define local_38 (*(uint *)(pf_stack_frame + 1112))
#define local_34 (*(uint *)(pf_stack_frame + 1116))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000425
 */

uint recovered_10000425(void *api)

{
  unsigned char pf_stack_frame[1200] __attribute__((aligned(16))) = {0};

  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  long lVar6;
  int iVar7;
  uint uVar8;

  if (api == (void *)0x0) {
    return 0;
  }
  if (((*(int *)api == 0x54584b57) && (*(int *)((long)api + 4) == 1100000)) &&
     (0xf7 < *(uint *)((long)api + 8))) {
    DAT_10005000 = 0;
    if (*(int *)((long)api + 0x5c) != 0) {
      iVar7 = 0;
      local_78 = api;
      for (uVar8 = 0; uVar8 != 8; uVar8 = uVar8 + 1) {
        local_38 = uVar8 & 0xff;
        uVar4 = 0;
        local_34 = uVar8;
        while (uVar4 != 0x20) {
          local_3c = uVar4;
          iVar2 = recovered_10001f0d(api,local_38,uVar4 & 0xff,0,local_478);
          if (iVar2 != 0) {
            uVar5 = recovered_10000691(api,local_478);
            iVar7 = (int)uVar5 + iVar7;
            if (local_46c < '\0') {
              for (iVar2 = -7; iVar2 != 0; iVar2 = iVar2 + 1) {
                iVar3 = recovered_10001f0d(api,local_38,uVar4 & 0xff,iVar2 + 8U & 0xff,local_6c);
                if (iVar3 != 0) {
                  uVar5 = recovered_10000691(api,local_6c);
                  iVar7 = iVar7 + (int)uVar5;
                }
                api = local_78;
              }
            }
            uVar8 = local_34;
          }
          uVar4 = local_3c + 1;
        }
      }
      if ((iVar7 != 0) && (DAT_10005000 != 0)) {
        recovered_10001c77((long)local_6c,0x30);
        local_68 = DAT_10005000;
        local_58 = ((uintptr_t)&recovered_10001c92);
        lVar6 = 0;
        do {
          if ((ulong)DAT_10005000 * 0x7000 + 0x7000 == lVar6 + 0x7000) goto LAB_100005b9;
          piVar1 = (int *)((long)&DAT_10006098 + lVar6);
          lVar6 = lVar6 + 0x7000;
        } while (*piVar1 != 0);
        local_58 = 0;
LAB_100005b9:
        local_6c[0] = 3;
        local_6c[1] = 0;
        local_6c[2] = 0;
        local_6c[3] = 0;
        local_64 = ((uintptr_t)&recovered_10001d4a);
        local_60 = ((uintptr_t)&recovered_10001deb);
        local_5c = ((uintptr_t)&recovered_10001df8);
        local_54 = ((uintptr_t)&recovered_10001e06);
        local_50 = 0;
        local_4c = 0;
        local_48 = 0;
        local_44 = 0;
        local_40 = 0;
        recovered_10001ef9(local_478,0x400,&DAT_10003bdc);
        if ((((code *)(ulong)*(uint *)((long)api + 0xc) != (code *)0x0) &&
            (iVar7 = (*(code *)(ulong)*(uint *)((long)api + 0xc))
                               (&DAT_10003bdc,str_10003bdd,local_478), iVar7 != 0)) &&
           ((*(int *)api == 0x54584b57 &&
            (((0xd3 < *(uint *)((long)api + 8) &&
              ((code *)(ulong)*(uint *)((long)api + 0xd0) != (code *)0x0)) &&
             (iVar7 = (*(code *)(ulong)*(uint *)((long)api + 0xd0))(local_6c), iVar7 != 0)))))) {
          return 1;
        }
      }
    }
    recovered_10001c3b();
  }
  return 0;
}

#undef DAT_10003bdc
#undef DAT_10005000
#undef DAT_10006098
#undef str_10003bdd
#undef local_478
#undef local_46c
#undef local_78
#undef local_6c
#undef local_68
#undef local_64
#undef local_60
#undef local_5c
#undef local_58
#undef local_54
#undef local_50
#undef local_4c
#undef local_48
#undef local_44
#undef local_40
#undef local_3c
#undef local_38
#undef local_34

#undef DAT_10003bdc
#define DAT_10003bdc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x0U)))
#undef DAT_10003ca4
#define DAT_10003ca4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xc8U)))
#undef DAT_10003ca6
#define DAT_10003ca6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xcaU)))
#undef DAT_10003ca8
#define DAT_10003ca8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xccU)))
#undef DAT_10003caa
#define DAT_10003caa (*(uint8_t *)(((uintptr_t)pf_module_state + 0xceU)))
#undef DAT_10003caf
#define DAT_10003caf (*(uint8_t *)(((uintptr_t)pf_module_state + 0xd3U)))
#undef DAT_10003cb2
#define DAT_10003cb2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xd6U)))
#undef DAT_10003cb4
#define DAT_10003cb4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xd8U)))
#undef DAT_10005000
#define DAT_10005000 (*(int *)(((uintptr_t)pf_module_state + 0x1424U)))
#undef DAT_10006000
#define DAT_10006000 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2424U)))
#undef DAT_10006008
#define DAT_10006008 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x242cU)))
#undef DAT_10006010
#define DAT_10006010 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2434U)))
#undef DAT_10006018
#define DAT_10006018 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x243cU)))
#undef DAT_10006020
#define DAT_10006020 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2444U)))
#undef DAT_10006028
#define DAT_10006028 (*(uint *)(((uintptr_t)pf_module_state + 0x244cU)))
#undef DAT_1000602c
#define DAT_1000602c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2450U)))
#undef DAT_10006030
#define DAT_10006030 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2454U)))
#undef DAT_10006034
#define DAT_10006034 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2458U)))
#undef DAT_10006038
#define DAT_10006038 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x245cU)))
#undef DAT_1000603c
#define DAT_1000603c (*(uint *)(((uintptr_t)pf_module_state + 0x2460U)))
#undef DAT_10006040
#define DAT_10006040 (*(uint *)(((uintptr_t)pf_module_state + 0x2464U)))
#undef DAT_10006044
#define DAT_10006044 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2468U)))
#undef DAT_10006048
#define DAT_10006048 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x246cU)))
#undef DAT_1000604c
#define DAT_1000604c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2470U)))
#undef DAT_10006050
#define DAT_10006050 (*(uint *)(((uintptr_t)pf_module_state + 0x2474U)))
#undef DAT_10006054
#define DAT_10006054 (*(uint *)(((uintptr_t)pf_module_state + 0x2478U)))
#undef DAT_1000605c
#define DAT_1000605c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2480U)))
#undef DAT_10006060
#define DAT_10006060 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2484U)))
#undef DAT_10006064
#define DAT_10006064 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2488U)))
#undef DAT_10006068
#define DAT_10006068 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x248cU)))
#undef DAT_1000606c
#define DAT_1000606c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2490U)))
#undef DAT_10006070
#define DAT_10006070 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2494U)))
#undef DAT_10006078
#define DAT_10006078 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x249cU)))
#undef DAT_10006088
#define DAT_10006088 (*(byte *)(((uintptr_t)pf_module_state + 0x24acU)))
#undef DAT_10006089
#define DAT_10006089 (*(byte *)(((uintptr_t)pf_module_state + 0x24adU)))
#undef DAT_1000608a
#define DAT_1000608a (*(byte *)(((uintptr_t)pf_module_state + 0x24aeU)))
#undef DAT_1000608b
#define DAT_1000608b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x24afU)))
#undef DAT_1000608c
#define DAT_1000608c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x24b0U)))
#undef DAT_10006090
#define DAT_10006090 (*(uint *)(((uintptr_t)pf_module_state + 0x24b4U)))
#undef DAT_10006094
#define DAT_10006094 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x24b8U)))
#undef DAT_10006098
#define DAT_10006098 (*(uint *)(((uintptr_t)pf_module_state + 0x24bcU)))
#undef DAT_1000609c
#define DAT_1000609c (*(uint *)(((uintptr_t)pf_module_state + 0x24c0U)))
#undef DAT_100060a4
#define DAT_100060a4 (*(ushort *)(((uintptr_t)pf_module_state + 0x24c8U)))
#undef DAT_100060aa
#define DAT_100060aa (*(uint8_t *)(((uintptr_t)pf_module_state + 0x24ceU)))
#undef DAT_100060ac
#define DAT_100060ac (*(uint8_t *)(((uintptr_t)pf_module_state + 0x24d0U)))
#undef DAT_100060b0
#define DAT_100060b0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x24d4U)))
#undef DAT_100060b2
#define DAT_100060b2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x24d6U)))
#undef DAT_100060b4
#define DAT_100060b4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x24d8U)))
#undef DAT_100060b6
#define DAT_100060b6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x24daU)))
#undef DAT_100060c4
#define DAT_100060c4 (*(int *)(((uintptr_t)pf_module_state + 0x24e8U)))
#undef DAT_100060c8
#define DAT_100060c8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x24ecU)))
#undef DAT_100060d0
#define DAT_100060d0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x24f4U)))
#undef DAT_10006100
#define DAT_10006100 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2524U)))
#undef DAT_10006200
#define DAT_10006200 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2624U)))
#undef DAT_10006300
#define DAT_10006300 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2724U)))
#undef DAT_10007000
#define DAT_10007000 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3424U)))
#undef _DAT_10006000
#define _DAT_10006000 (*(int * *)(((uintptr_t)pf_module_state + 0x2424U)))
#undef _DAT_10006018
#define _DAT_10006018 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x243cU)))
#undef _DAT_1000602c
#define _DAT_1000602c (*(uint *)(((uintptr_t)pf_module_state + 0x2450U)))
#undef _DAT_10006030
#define _DAT_10006030 (*(uint *)(((uintptr_t)pf_module_state + 0x2454U)))
#undef _DAT_10006034
#define _DAT_10006034 (*(uint *)(((uintptr_t)pf_module_state + 0x2458U)))
#undef _DAT_10006038
#define _DAT_10006038 (*(uint *)(((uintptr_t)pf_module_state + 0x245cU)))
#undef _DAT_10006044
#define _DAT_10006044 (*(int *)(((uintptr_t)pf_module_state + 0x2468U)))
#undef _DAT_10006048
#define _DAT_10006048 (*(uint *)(((uintptr_t)pf_module_state + 0x246cU)))
#undef _DAT_1000605c
#define _DAT_1000605c (*(uint *)(((uintptr_t)pf_module_state + 0x2480U)))
#undef _DAT_10006060
#define _DAT_10006060 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2484U)))
#undef _DAT_10006070
#define _DAT_10006070 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2494U)))
#undef _DAT_1000608c
#define _DAT_1000608c (*(uint16_t *)(((uintptr_t)pf_module_state + 0x24b0U)))
#undef _DAT_10006094
#define _DAT_10006094 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x24b8U)))
#undef _DAT_100060aa
#define _DAT_100060aa (*(short *)(((uintptr_t)pf_module_state + 0x24ceU)))
#undef _DAT_100060ac
#define _DAT_100060ac (*(uint32_t *)(((uintptr_t)pf_module_state + 0x24d0U)))
#undef _DAT_100060b0
#define _DAT_100060b0 (*(short *)(((uintptr_t)pf_module_state + 0x24d4U)))
#undef _DAT_100060b2
#define _DAT_100060b2 (*(short *)(((uintptr_t)pf_module_state + 0x24d6U)))
#undef _DAT_100060b4
#define _DAT_100060b4 (*(uint16_t *)(((uintptr_t)pf_module_state + 0x24d8U)))
#undef _DAT_100060c8
#define _DAT_100060c8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x24ecU)))
#undef _DAT_100060d0
#define _DAT_100060d0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x24f4U)))
#undef str_10003c19
#define str_10003c19 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3dU)))
#undef str_10003c38
#define str_10003c38 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5cU)))
#undef str_10003c41
#define str_10003c41 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x65U)))
#undef str_10003c4a
#define str_10003c4a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6eU)))
#undef str_10003c59
#define str_10003c59 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7dU)))
#define local_4e8 (*(ulong (*)[157])(pf_stack_frame + 1048))
#define local_e8 (*(uint (*)[58])(pf_stack_frame + 2072))
#define local_7c (*(undefined4 *)(pf_stack_frame + 2180))
#define local_78 (*(uint *)(pf_stack_frame + 2184))
#define local_74 (*(uint *)(pf_stack_frame + 2188))
#define local_70 (*(uint *)(pf_stack_frame + 2192))
#define local_6c (*(uint *)(pf_stack_frame + 2196))
#define local_68 (*(uint *)(pf_stack_frame + 2200))
#define local_64 (*(int *)(pf_stack_frame + 2204))
#define local_60 (*(int *)(pf_stack_frame + 2208))
#define local_5c (*(uint *)(pf_stack_frame + 2212))
#define local_58 (*(uint *)(pf_stack_frame + 2216))
#define local_54 (*(uint *)(pf_stack_frame + 2220))
#define local_50 (*(uint *)(pf_stack_frame + 2224))
#define local_4c (*(uint *)(pf_stack_frame + 2228))
#define local_48 (*(uint *)(pf_stack_frame + 2232))
#define local_44 (*(uint *)(pf_stack_frame + 2236))
#define local_40 (*(uint *)(pf_stack_frame + 2240))
#define local_3c (*(uint *)(pf_stack_frame + 2244))
#define local_38 (*(int * *)(pf_stack_frame + 2248))
#define local_8e8 (*(char (*)[2280])(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000691
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_10000691(int *param_1,byte *param_2)

{
  unsigned char pf_stack_frame[2336] __attribute__((aligned(16))) = {0};

  byte bVar1;
  byte bVar2;
  short sVar3;
  int *piVar4;
  bool bVar5;
  bool bVar6;
  byte bVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  undefined8 uVar11;
  undefined7 extraout_var = 0;
  undefined7 extraout_var_00 = 0;
  undefined7 extraout_var_01 = 0;
  undefined7 extraout_var_02 = 0;
  undefined7 extraout_var_03 = 0;
  undefined7 extraout_var_04 = 0;
  uint uVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  ushort uVar16;
  short sVar17;
  uint uVar18;

  if (param_2 == (byte *)0x0) {
    return 0;
  }
  if (((*(short *)(param_2 + 4) != 0x1af4) ||
      ((*(short *)(param_2 + 6) != 0x1001 && (*(short *)(param_2 + 6) != 0x1042)))) &&
     ((param_2[8] != 1 || (param_2[9] != 1)))) {
    if (*(short *)(param_2 + 4) != 0x106b) {
      return 0;
    }
    if (*(short *)(param_2 + 6) != 0x10) {
      return 0;
    }
  }
  if (DAT_10005000 != 0) {
    return 0;
  }
  recovered_10001c77(((uintptr_t)pf_module_state+0x2424U),0x7000);
  recovered_10001ef9(local_8e8,0x400,&DAT_10003bdc);
  local_5c = 0;
  local_74 = 0;
  local_58 = 0;
  local_70 = 0;
  local_54 = 0;
  local_6c = 0;
  local_68 = 0;
  local_64 = 0;
  local_7c = 0;
  local_60 = 0;
  bVar7 = *param_2;
  bVar1 = param_2[1];
  bVar2 = param_2[2];
  _DAT_10006000 = param_1;
  DAT_10006088 = bVar7;
  DAT_10006089 = bVar1;
  DAT_1000608a = bVar2;
  local_38 = param_1;
  DAT_10006090 = recovered_100021fe(param_2);
  piVar15 = local_38;
  uVar11 = recovered_100020bf(local_38,bVar7,bVar1,bVar2,4,2,(long)&local_7c);
  if ((int)uVar11 == 0) goto LAB_100017e2;
  _DAT_1000608c = (undefined2)local_7c;
  DAT_1000608b = 1;
  if (((param_2[8] == 1) && (param_2[9] == 1)) ||
     ((*(short *)(param_2 + 4) == 0x106b && (*(short *)(param_2 + 6) == 0x10)))) {
    local_4e8[0] = 0;
    if (piVar15 != (int *)0x0) {
      if ((*(short *)(param_2 + 4) != 0x106b) || (bVar6 = true, *(short *)(param_2 + 6) != 0x10)) {
        if ((param_2[8] != 1) || (param_2[9] != 1)) goto LAB_100017d2;
        bVar6 = false;
      }
      bVar5 = recovered_10002221(local_38,param_2,(long)local_8e8);
      piVar15 = local_38;
      if ((int)CONCAT71(extraout_var,bVar5) != 0) {
        if (bVar6) {
          iVar8 = recovered_1000263b(local_38,param_2,0,0x22000,local_4e8);
          piVar15 = local_38;
          if (iVar8 != 0) {
            _DAT_100060c8 = local_4e8[0] + 0x20000;
            _DAT_100060d0 = 1;
            _DAT_100060b4 = 0xe0;
            DAT_100060b6 = 0;
            DAT_100060c4 = 1;
            uVar11 = recovered_100027e2(local_38,(long *)&DAT_10006000);
            if ((int)uVar11 != 0) {
LAB_100019fe:
              recovered_10001ef9(local_8e8,0x400,&DAT_10003bdc);
              recovered_10002133((long)local_8e8,0x400,(ulong)DAT_1000609c);
              recovered_100021aa((long)local_8e8,0x400,str_10003c38);
              DAT_10005000 = DAT_10005000 + 1;
              local_38 = (int *)str_10003c4a;
              if (DAT_100060c4 == 0) {
                local_38 = (int *)str_10003c59;
              }
              recovered_10001ef9((undefined1 *)local_e8,0x60,str_10003c41);
              recovered_100021aa((long)local_e8,0x60,&DAT_10003ca4);
              recovered_100031cd((long)local_e8,0x60,(uint)*param_2,2);
              recovered_100021aa((long)local_e8,0x60,&DAT_10003ca6);
              recovered_100031cd((long)local_e8,0x60,(uint)param_2[1],2);
              recovered_100021aa((long)local_e8,0x60,&DAT_10003ca8);
              recovered_10002133((long)local_e8,0x60,(ulong)param_2[2]);
              recovered_10001ef9((undefined1 *)local_4e8,0x400,&DAT_10003caa);
              recovered_100031cd((long)local_4e8,0x400,(uint)*param_2,2);
              recovered_100021aa((long)local_4e8,0x400,&DAT_10003ca6);
              recovered_100031cd((long)local_4e8,0x400,(uint)param_2[1],2);
              recovered_100021aa((long)local_4e8,0x400,&DAT_10003ca8);
              recovered_10002133((long)local_4e8,0x400,(ulong)param_2[2]);
              recovered_100021aa((long)local_4e8,0x400,&DAT_10003caf);
              recovered_100031cd((long)local_4e8,0x400,(uint)*(ushort *)(param_2 + 4),4);
              recovered_100021aa((long)local_4e8,0x400,&DAT_10003ca6);
              recovered_100031cd((long)local_4e8,0x400,(uint)*(ushort *)(param_2 + 6),4);
              recovered_100021aa((long)local_4e8,0x400,&DAT_10003cb2);
              if (local_8e8[0] != '\0') {
                recovered_100021aa((long)local_4e8,0x400,&DAT_10003cb4);
                recovered_100021aa((long)local_4e8,0x400,local_8e8);
              }
              if ((piVar15 != (int *)0x0) && ((code *)(ulong)(uint)piVar15[3] != (code *)0x0)) {
                (*(code *)(ulong)(uint)piVar15[3])(local_e8,local_38,local_4e8);
              }
              return 1;
            }
            goto LAB_100017d6;
          }
        }
        else {
          bVar7 = param_2[10];
          if ((~bVar7 & 5) == 0) {
LAB_1000181a:
            for (lVar13 = 0; lVar13 != 4; lVar13 = lVar13 + 2) {
              if (((lVar13 != 0) * '\x03' + 1U & bVar7) == 0) {
                uVar16 = (ushort)(lVar13 == 0) * 0x80;
                *(ushort *)((long)&local_44 + lVar13) = uVar16 + 0x170;
                uVar16 = uVar16 | 0x376;
              }
              else {
                uVar18 = *(uint *)(param_2 + lVar13 * 4 + 0x14);
                uVar9 = 0xfffffff0;
                if ((uVar18 & 1) != 0) {
                  uVar9 = 0xfffffffc;
                }
                uVar10 = *(uint *)(param_2 + lVar13 * 4 + 0x18);
                uVar12 = 0xfffffff0;
                if ((uVar10 & 1) != 0) {
                  uVar12 = 0xfffffffc;
                }
                if ((((uVar18 & 1) == 0) || ((uVar10 & 1) == 0)) ||
                   (((uVar9 & uVar18) - 0x10000 < 0xffff0001 ||
                    ((uVar12 & uVar10) - 0xfffe < 0xffff0003)))) {
                  *(undefined2 *)((long)&local_44 + lVar13) = 0;
                  uVar16 = 0;
                }
                else {
                  *(short *)((long)&local_44 + lVar13) = (short)(uVar9 & uVar18);
                  uVar16 = (ushort)(uVar12 & uVar10) | 2;
                }
              }
              *(ushort *)((long)&local_40 + lVar13) = uVar16;
            }
            for (lVar13 = 0; lVar13 != 2; lVar13 = lVar13 + 1) {
              sVar17 = *(short *)((long)&local_44 + lVar13 * 2);
              if ((sVar17 != 0) && (sVar3 = *(short *)((long)&local_40 + lVar13 * 2), sVar3 != 0)) {
                DAT_100060b6 = 0;
                for (iVar8 = -0x20; iVar8 != 0; iVar8 = iVar8 + 0x10) {
                  _DAT_100060b4 = CONCAT11((char)lVar13,(char)iVar8);
                  DAT_100060c4 = 1;
                  _DAT_100060b0 = sVar17;
                  _DAT_100060b2 = sVar3;
                  uVar11 = recovered_100027e2(local_38,(long *)&DAT_10006000);
                  if ((int)uVar11 != 0) {
                    piVar15 = local_38;
                    goto LAB_100019fe;
                  }
                  DAT_100060c4 = 0;
                }
              }
            }
          }
          else {
            local_e8[0] = 0;
            uVar11 = recovered_100020bf(local_38,*param_2,param_2[1],param_2[2],4,2,(long)local_e8);
            if ((int)uVar11 != 0) {
              local_4c = local_e8[0] | 1;
              uVar11 = recovered_10002a1f(piVar15,*param_2,param_2[1],param_2[2],local_4c);
              if ((((int)uVar11 != 0) &&
                  (uVar11 = recovered_100020bf(piVar15,*param_2,param_2[1],param_2[2],4,2,
                                               (long)&local_4c), (int)uVar11 != 0)) &&
                 ((local_4c & 1) != 0)) {
                bVar7 = param_2[10];
                goto LAB_1000181a;
              }
            }
          }
        }
      }
    }
LAB_100017d2:
    piVar15 = local_38;
  }
  else {
    bVar6 = recovered_10002221(piVar15,param_2,(long)local_8e8);
    if ((int)CONCAT71(extraout_var_00,bVar6) != 0) {
      local_e8[0] = 0;
      recovered_10001c77(((uintptr_t)pf_module_state+0x242cU),0x80);
      piVar15 = local_38;
      uVar11 = recovered_100020bf(local_38,*param_2,param_2[1],param_2[2],0x34,1,(long)local_e8);
      if ((int)uVar11 != 0) {
        uVar18 = 0;
        while ((uVar18 < 0x20 && (local_e8[0] - 0x40 < 0xb0))) {
          local_4c = 0;
          local_44 = 0;
          local_40 = 0;
          local_3c = 0;
          local_48 = 0;
          local_50 = 0;
          uVar11 = recovered_100020bf(piVar15,*param_2,param_2[1],param_2[2],(short)local_e8[0],1,
                                      (long)&local_4c);
          if (((int)uVar11 == 0) ||
             (uVar11 = recovered_100020bf(piVar15,*param_2,param_2[1],param_2[2],
                                          (short)local_e8[0] + 1,1,(long)&local_44),
             (int)uVar11 == 0)) break;
          if ((((local_4c == 9) &&
               (uVar11 = recovered_100020bf(piVar15,*param_2,param_2[1],param_2[2],
                                            (short)local_e8[0] + 3,1,(long)&local_40),
               (int)uVar11 != 0)) &&
              (uVar11 = recovered_100020bf(piVar15,*param_2,param_2[1],param_2[2],
                                           (short)local_e8[0] + 4,1,(long)&local_3c),
              (int)uVar11 != 0)) &&
             ((uVar11 = recovered_100020bf(piVar15,*param_2,param_2[1],param_2[2],
                                           (short)local_e8[0] + 8,4,(long)&local_48),
              (int)uVar11 != 0 &&
              (uVar11 = recovered_100020bf(piVar15,*param_2,param_2[1],param_2[2],
                                           (short)local_e8[0] + 0xc,4,(long)&local_50),
              (int)uVar11 != 0)))) {
            local_4e8[0] = 0;
            _DAT_10006044 = _DAT_10006044 + 1;
            if ((local_50 < 0x38 || local_40 != 1) ||
               (uVar11 = recovered_10003013(piVar15,param_2,local_3c,local_48,local_50,local_4e8),
               (int)uVar11 == 0)) {
              if ((local_50 < 2 || local_40 != 2) ||
                 (uVar11 = recovered_10003013(piVar15,param_2,local_3c,local_48,local_50,local_4e8),
                 (int)uVar11 == 0)) {
                if ((local_40 == 3) &&
                   (uVar11 = recovered_10003013(piVar15,param_2,local_3c,local_48,local_50,local_4e8
                                               ), (int)uVar11 != 0)) {
                  _DAT_10006018 = local_4e8[0];
                  _DAT_10006034 = local_3c;
                }
                else if ((local_40 == 4) &&
                        (uVar11 = recovered_10003013(piVar15,param_2,local_3c,local_48,local_50,
                                                     local_4e8), (int)uVar11 != 0)) {
                  DAT_10006020 = local_4e8[0];
                  DAT_10006028 = local_50;
                  _DAT_10006038 = local_3c;
                }
              }
              else {
                local_78 = 0;
                DAT_10006010 = local_4e8[0];
                _DAT_10006030 = local_3c;
                uVar11 = recovered_100020bf(piVar15,*param_2,param_2[1],param_2[2],
                                            (short)local_e8[0] + 0x10,4,(long)&local_78);
                if (local_78 == 0 || (int)uVar11 == 0) {
                  DAT_10006010 = 0;
                }
                else {
                  DAT_1000603c = local_78;
                  DAT_10006040 = local_50;
                }
              }
            }
            else {
              DAT_10006008 = local_4e8[0];
              _DAT_1000602c = local_3c;
            }
          }
          if ((local_44 == 0) || (local_44 == local_e8[0])) break;
          uVar18 = uVar18 + 1;
          local_e8[0] = local_44;
        }
        if (DAT_10006008 != 0) {
          local_4e8[0] = local_4e8[0] & 0xffffffff00000000;
          local_e8[0] = 0;
          recovered_100024ce(piVar15,DAT_10006008,0x14,((uintptr_t)pf_module_state+0x247cU));
          _DAT_10006060 = 1;
          bVar6 = recovered_1000305e(piVar15,DAT_10006008);
          if ((int)CONCAT71(extraout_var_01,bVar6) != 0) {
            _DAT_10006060 = 2;
            uVar18 = recovered_10002ec7(piVar15,DAT_10006008,0x14,1);
            if (((uVar18 != 0) &&
                (uVar11 = recovered_100024ce(piVar15,DAT_10006008,0x14,(long)local_e8),
                (int)uVar11 != 0)) && ((local_e8[0] & 0xc1) == 1)) {
              _DAT_10006060 = 3;
              uVar18 = recovered_10002ec7(piVar15,DAT_10006008,0x14,3);
              if (((uVar18 != 0) &&
                  (uVar11 = recovered_100024ce(piVar15,DAT_10006008,0x14,(long)local_e8),
                  (int)uVar11 != 0)) && ((local_e8[0] & 0xc3) == 3)) {
                _DAT_10006060 = 4;
                uVar11 = recovered_10003104(piVar15,DAT_10006008,0,0);
                if ((((int)uVar11 != 0) &&
                    (uVar11 = recovered_100024f9(piVar15,DAT_10006008,4,(undefined4 *)&DAT_10006048)
                    , (int)uVar11 != 0)) &&
                   ((uVar11 = recovered_10003104(piVar15,DAT_10006008,0,1), (int)uVar11 != 0 &&
                    ((uVar11 = recovered_100024f9(piVar15,DAT_10006008,4,&DAT_1000604c),
                     (int)uVar11 != 0 && ((DAT_1000604c & 1) != 0)))))) {
                  DAT_10006050 = _DAT_10006048 & 0x200;
                  DAT_10006054 = DAT_1000604c & 3;
                  _DAT_10006060 = 5;
                  uVar11 = recovered_10003104(piVar15,DAT_10006008,8,0);
                  if (((int)uVar11 != 0) &&
                     (((uVar11 = recovered_10003104(piVar15,DAT_10006008,0xc,DAT_10006050),
                       (int)uVar11 != 0 &&
                       (uVar11 = recovered_10003104(piVar15,DAT_10006008,8,1), (int)uVar11 != 0)) &&
                      (uVar11 = recovered_10003104(piVar15,DAT_10006008,0xc,DAT_10006054),
                      (int)uVar11 != 0)))) {
                    recovered_100023f0(piVar15);
                    local_e8[0] = 0xb;
                    _DAT_10006060 = 6;
                    uVar18 = recovered_10002ec7(piVar15,DAT_10006008,0x14,0xb);
                    if (((uVar18 != 0) &&
                        (uVar11 = recovered_100024ce(piVar15,DAT_10006008,0x14,((uintptr_t)pf_module_state+0x2480U)),
                        (int)uVar11 != 0)) && ((_DAT_1000605c & 200) == 8)) {
                      _DAT_10006060 = 7;
                      uVar11 = recovered_1000247c(piVar15,DAT_10006008,0x12,
                                                  (undefined4 *)&DAT_10006064);
                      if ((((int)uVar11 != 0) &&
                          (uVar11 = recovered_100024ce(piVar15,DAT_10006008,0x15,((uintptr_t)pf_module_state+0x24a4U)),
                          (int)uVar11 != 0)) &&
                         ((uVar18 = recovered_10002414(piVar15,DAT_10006008,0x16,0), uVar18 != 0 &&
                          ((uVar11 = recovered_1000247c(piVar15,DAT_10006008,0x18,&DAT_10006068),
                           (int)uVar11 != 0 &&
                           (uVar11 = recovered_1000247c(piVar15,DAT_10006008,0x1c,&DAT_1000606c),
                           (int)uVar11 != 0)))))) {
                        uVar11 = recovered_1000247c(piVar15,DAT_10006008,0x1e,
                                                    (undefined4 *)local_4e8);
                        uVar18 = DAT_10006054;
                        if ((int)uVar11 != 0) {
                          _DAT_10006070 = (uint)local_4e8[0];
                          if (((DAT_10006010 != 0) && ((ulong)DAT_1000603c != 0)) &&
                             (1 < (ulong)DAT_10006040)) {
                            uVar14 = (ulong)DAT_1000603c * (local_4e8[0] & 0xffffffff);
                            if (!CARRY8(DAT_10006010,uVar14) && uVar14 <= (ulong)DAT_10006040 - 2) {
                              DAT_10006078 = DAT_10006010 + uVar14;
                            }
                          }
                        }
                        _DAT_10006060 = 8;
                        uVar9 = recovered_100021fe(param_2);
                        piVar15 = local_38;
                        DAT_10006090 = ((uVar18 & 2) << 0x1d | uVar9) ^ 0x40000000;
                        if (((DAT_10006078 != 0) && (DAT_10006020 != 0)) &&
                           (((7 < DAT_10006028 &&
                             ((2 < DAT_10006068 &&
                              (uVar18 = DAT_10006068 - (DAT_10006068 >> 1 & 0x55555555),
                              uVar18 = (uVar18 >> 2 & 0x33333333) + (uVar18 & 0x33333333),
                              ((uVar18 >> 4) + uVar18 & 0xf0f0f0f) * 0x1010101 >> 0x18 < 2)))) &&
                            (DAT_1000606c == 0)))) {
                          DAT_100060a4 = 8;
                          if (DAT_10006068 < 8) {
                            DAT_100060a4 = (ushort)DAT_10006068;
                          }
                          recovered_10001c77(((uintptr_t)pf_module_state+0x2524U),0x80);
                          recovered_10001c77(((uintptr_t)pf_module_state+0x2624U),0x16);
                          recovered_10001c77(((uintptr_t)pf_module_state+0x2724U),0x46);
                          uVar18 = recovered_10002380(&DAT_10006000,&DAT_10006100,0x80,&local_5c,
                                                      &local_74);
                          if (((((uVar18 != 0) &&
                                (uVar18 = recovered_10002380(&DAT_10006000,&DAT_10006200,0x16,
                                                             &local_58,&local_70), uVar18 != 0)) &&
                               (uVar18 = recovered_10002380(&DAT_10006000,&DAT_10006300,0x46,
                                                            &local_54,&local_6c), uVar18 != 0)) &&
                              (((local_5c & 0xf) == 0 && ((local_58 & 1) == 0)))) &&
                             ((local_54 & 3) == 0)) {
                            recovered_100023c5(piVar15,DAT_10006090,&DAT_10006100,0x80);
                            recovered_100023c5(piVar15,DAT_10006090,&DAT_10006200,0x16);
                            recovered_100023c5(piVar15,DAT_10006090,&DAT_10006300,0x46);
                            recovered_100023f0(piVar15);
                            uVar18 = recovered_10002414(piVar15,DAT_10006008,0x16,0);
                            if ((((uVar18 != 0) &&
                                 (uVar18 = recovered_10002414(piVar15,DAT_10006008,0x18,
                                                              (uint)DAT_100060a4), uVar18 != 0)) &&
                                ((bVar6 = recovered_10002432(piVar15,DAT_10006008,0x20,local_5c,
                                                             local_74),
                                 (int)CONCAT71(extraout_var_02,bVar6) != 0 &&
                                 (((bVar6 = recovered_10002432(piVar15,DAT_10006008,0x28,local_58,
                                                               local_70),
                                   (int)CONCAT71(extraout_var_03,bVar6) != 0 &&
                                   (bVar6 = recovered_10002432(piVar15,DAT_10006008,0x30,local_54,
                                                               local_6c),
                                   (int)CONCAT71(extraout_var_04,bVar6) != 0)) &&
                                  (uVar18 = recovered_10002414(piVar15,DAT_10006008,0x1c,1),
                                  uVar18 != 0)))))) &&
                               ((uVar11 = recovered_1000247c(piVar15,DAT_10006008,0x1c,&local_60),
                                piVar4 = local_38, (int)uVar11 != 0 && (local_60 == 1)))) {
                              iVar8 = 5;
                              do {
                                iVar8 = iVar8 + -1;
                                piVar15 = piVar4;
                                if (iVar8 == 0) goto LAB_100017d6;
                                local_4e8[0] = local_4e8[0] & 0xffffffff00000000;
                                local_e8[0] = 0;
                                uVar11 = recovered_100024ce(piVar4,DAT_10006008,0x15,(long)local_4e8
                                                           );
                                if ((((int)uVar11 == 0) ||
                                    (uVar11 = recovered_100024f9(local_38,DAT_10006020,0,&local_68),
                                    (int)uVar11 == 0)) ||
                                   ((uVar11 = recovered_100024f9(local_38,DAT_10006020,4,&local_64),
                                    (int)uVar11 == 0 ||
                                    (uVar11 = recovered_100024ce(local_38,DAT_10006008,0x15,
                                                                 (long)local_e8),
                                    uVar14 = DAT_10006008, (int)uVar11 == 0)))) goto LAB_100017d2;
                              } while ((uint)local_4e8[0] != local_e8[0]);
                              piVar15 = local_38;
                              if ((local_64 == 0) && (DAT_1000609c = local_68, local_68 != 0)) {
                                local_4e8[0] = local_4e8[0] & 0xffffffff00000000;
                                if (((DAT_10006008 == 0) ||
                                    (((uVar11 = recovered_100024ce(local_38,DAT_10006008,0x14,
                                                                   (long)local_4e8),
                                      (int)uVar11 == 0 || (((uint)local_4e8[0] & 200) != 8)) ||
                                     (uVar18 = recovered_10002ec7(local_38,uVar14,0x14,
                                                                  (uint)local_4e8[0] | 4),
                                     uVar18 == 0)))) ||
                                   (uVar11 = recovered_100024ce(local_38,uVar14,0x14,(long)local_4e8
                                                               ), (int)uVar11 == 0))
                                goto LAB_100017d2;
                                piVar15 = local_38;
                                if (((uint)local_4e8[0] & 0xc4) == 4) {
                                  _DAT_10006094 = 1;
                                  DAT_10006098 = DAT_10006050 >> 9 & 1;
                                  goto LAB_100019fe;
                                }
                              }
                            }
                          }
                        }
                        goto LAB_100017d6;
                      }
                    }
                  }
                }
              }
            }
          }
          uVar11 = recovered_100024ce(piVar15,DAT_10006008,0x14,(long)local_e8);
          if (local_e8[0] != 0 && (int)uVar11 != 0) {
            recovered_10002ec7(piVar15,DAT_10006008,0x14,local_e8[0] | 0x80);
          }
          uVar18 = DAT_10006054;
          uVar9 = recovered_100021fe(param_2);
          DAT_10006090 = ((uVar18 & 2) << 0x1d | uVar9) ^ 0x40000000;
          goto LAB_100017d2;
        }
      }
      local_4e8[0] = local_4e8[0] & 0xffffffff00000000;
      local_e8[0] = 0;
      local_4c = 0;
      local_44 = 0;
      local_40 = 0;
      local_3c = 0;
      local_48 = 0;
      if (((piVar15 != (int *)0x0) && (*(short *)(param_2 + 4) == 0x1af4)) &&
         ((*(short *)(param_2 + 6) == 0x1001 &&
          (((*(uint *)(param_2 + 0x14) & 1) != 0 &&
           (uVar18 = *(uint *)(param_2 + 0x14) & 0xfffc, uVar18 != 0)))))) {
        uVar9 = uVar18 + 0x12;
        uVar11 = recovered_10002ee5(piVar15,uVar9 & 0xffff,1,0);
        if (((int)uVar11 != 0) &&
           (uVar11 = recovered_10002ee5(piVar15,uVar9 & 0xffff,1,3), (int)uVar11 != 0)) {
          sVar17 = (short)uVar18;
          uVar11 = recovered_10002f71(piVar15,sVar17,4,(long)local_4e8);
          if ((int)uVar11 != 0) {
            uVar11 = recovered_10002ee5(piVar15,uVar18 + 4 & 0xffff,4,(uint)local_4e8[0] & 0x200);
            if (((((int)uVar11 != 0) &&
                 (uVar11 = recovered_10002ee5(piVar15,uVar18 + 0xe & 0xffff,2,0), (int)uVar11 != 0))
                && (uVar11 = recovered_10002f71(piVar15,sVar17 + 0xc,2,(long)&local_44),
                   uVar10 = local_44, (int)uVar11 != 0)) &&
               ((local_44 - 3 < 0x7e &&
                (uVar12 = local_44 - (local_44 >> 1 & 0x55555555),
                uVar12 = (uVar12 >> 2 & 0x33333333) + (uVar12 & 0x33333333),
                ((uVar12 >> 4) + uVar12 & 0xf0f0f0f) * 0x1010101 >> 0x18 < 2)))) {
              _DAT_100060ac = 1;
              uVar12 = recovered_100021fe(param_2);
              DAT_10006090 = uVar12 | 0x40000000;
              DAT_100060a4 = (ushort)uVar10;
              _DAT_100060aa = sVar17;
              recovered_10001c77(((uintptr_t)pf_module_state+0x3424U),0x2000);
              uVar10 = recovered_10002380(&DAT_10006000,&DAT_10007000,0x2000,local_e8,&local_4c);
              if ((uVar10 != 0) && ((local_4c == 0 && ((local_e8[0] & 0xfff) == 0)))) {
                recovered_100023c5(piVar15,DAT_10006090,&DAT_10007000,0x2000);
                recovered_100023f0(piVar15);
                uVar11 = recovered_10002ee5(piVar15,uVar18 + 8 & 0xffff,4,local_e8[0] >> 0xc);
                if (((int)uVar11 != 0) &&
                   (((((uVar11 = recovered_10002f71(piVar15,sVar17 + 0x14,4,(long)&local_40),
                       (int)uVar11 != 0 &&
                       (uVar11 = recovered_10002f71(piVar15,sVar17 + 0x18,4,(long)&local_3c),
                       (int)uVar11 != 0)) && (local_3c == 0)) &&
                     ((local_40 != 0 &&
                      (uVar11 = recovered_10002ee5(piVar15,uVar9 & 0xffff,1,7), (int)uVar11 != 0))))
                    && ((uVar11 = recovered_10002f71(piVar15,(short)uVar9,1,(long)&local_48),
                        (int)uVar11 != 0 && ((local_48 & 4) != 0)))))) {
                  DAT_1000609c = local_40;
                  DAT_10006098 = (uint)local_4e8[0] >> 9 & 1;
                  _DAT_10006094 = 1;
                  goto LAB_100019fe;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_100017d6:
  recovered_1000254b((undefined8 *)&DAT_10006000);
LAB_100017e2:
  recovered_1000210c(piVar15,str_10003c19);
  return 0;
}

#undef DAT_10003bdc
#undef DAT_10003ca4
#undef DAT_10003ca6
#undef DAT_10003ca8
#undef DAT_10003caa
#undef DAT_10003caf
#undef DAT_10003cb2
#undef DAT_10003cb4
#undef DAT_10005000
#undef DAT_10006000
#undef DAT_10006008
#undef DAT_10006010
#undef DAT_10006018
#undef DAT_10006020
#undef DAT_10006028
#undef DAT_1000602c
#undef DAT_10006030
#undef DAT_10006034
#undef DAT_10006038
#undef DAT_1000603c
#undef DAT_10006040
#undef DAT_10006044
#undef DAT_10006048
#undef DAT_1000604c
#undef DAT_10006050
#undef DAT_10006054
#undef DAT_1000605c
#undef DAT_10006060
#undef DAT_10006064
#undef DAT_10006068
#undef DAT_1000606c
#undef DAT_10006070
#undef DAT_10006078
#undef DAT_10006088
#undef DAT_10006089
#undef DAT_1000608a
#undef DAT_1000608b
#undef DAT_1000608c
#undef DAT_10006090
#undef DAT_10006094
#undef DAT_10006098
#undef DAT_1000609c
#undef DAT_100060a4
#undef DAT_100060aa
#undef DAT_100060ac
#undef DAT_100060b0
#undef DAT_100060b2
#undef DAT_100060b4
#undef DAT_100060b6
#undef DAT_100060c4
#undef DAT_100060c8
#undef DAT_100060d0
#undef DAT_10006100
#undef DAT_10006200
#undef DAT_10006300
#undef DAT_10007000
#undef _DAT_10006000
#undef _DAT_10006018
#undef _DAT_1000602c
#undef _DAT_10006030
#undef _DAT_10006034
#undef _DAT_10006038
#undef _DAT_10006044
#undef _DAT_10006048
#undef _DAT_1000605c
#undef _DAT_10006060
#undef _DAT_10006070
#undef _DAT_1000608c
#undef _DAT_10006094
#undef _DAT_100060aa
#undef _DAT_100060ac
#undef _DAT_100060b0
#undef _DAT_100060b2
#undef _DAT_100060b4
#undef _DAT_100060c8
#undef _DAT_100060d0
#undef str_10003c19
#undef str_10003c38
#undef str_10003c41
#undef str_10003c4a
#undef str_10003c59
#undef local_4e8
#undef local_e8
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef local_6c
#undef local_68
#undef local_64
#undef local_60
#undef local_5c
#undef local_58
#undef local_54
#undef local_50
#undef local_4c
#undef local_48
#undef local_44
#undef local_40
#undef local_3c
#undef local_38
#undef local_8e8

#undef DAT_10005000
#define DAT_10005000 (*(uint *)(((uintptr_t)pf_module_state + 0x1424U)))
#undef DAT_10006000
#define DAT_10006000 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2424U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001c3b
 */

void recovered_10001c3b(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  ulong uVar2;

  puVar1 = (undefined8 *)&DAT_10006000;
  for (uVar2 = 0; uVar2 < DAT_10005000; uVar2 = uVar2 + 1) {
    recovered_1000254b(puVar1);
    puVar1 = puVar1 + 0xe00;
  }
  DAT_10005000 = 0;
  return;
}

#undef DAT_10005000
#undef DAT_10006000

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001c77
 */

void recovered_10001c77(long param_1,long param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;

  if (param_1 != 0) {
    for (lVar1 = 0; param_2 != lVar1; lVar1 = lVar1 + 1) {
      *(undefined1 *)(param_1 + lVar1) = 0;
    }
  }
  return;
}


#undef DAT_10005000
#define DAT_10005000 (*(uint *)(((uintptr_t)pf_module_state + 0x1424U)))
#undef DAT_10006000
#define DAT_10006000 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2424U)))
#undef DAT_10006098
#define DAT_10006098 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x24bcU)))
#undef DAT_100060a0
#define DAT_100060a0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x24c4U)))
#undef DAT_100060b4
#define DAT_100060b4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x24d8U)))
#undef DAT_100060c4
#define DAT_100060c4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x24e8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001c92
 */

bool recovered_10001c92(uint param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  bool bVar5;

  bVar5 = false;
  if ((param_1 < DAT_10005000) &&
     (uVar1 = (ulong)param_1, lVar2 = uVar1 * 0x7000, (&DAT_10006098)[uVar1 * 0x1c00] != 0)) {
    plVar4 = (long *)(&DAT_10006000 + lVar2);
    if ((&DAT_100060c4)[uVar1 * 0x1c00] == 0) {
      bVar5 = recovered_1000324b(plVar4,4,0,0,0);
      return bVar5;
    }
    recovered_1000322a((long)plVar4);
    uVar3 = recovered_10002a59(plVar4,2);
    bVar5 = false;
    if ((int)uVar3 != 0) {
      uVar3 = recovered_10002c33(plVar4,(uint)(byte)(&DAT_100060b4)[lVar2]);
      if ((int)uVar3 != 0) {
        uVar3 = recovered_10002d1e(plVar4,0xe7);
        if ((int)uVar3 != 0) {
          uVar3 = recovered_10002d60(plVar4,0,0x29);
          bVar5 = (int)uVar3 != 0;
        }
      }
    }
    *(undefined4 *)(&DAT_100060a0 + lVar2) = 0;
  }
  return bVar5;
}

#undef DAT_10005000
#undef DAT_10006000
#undef DAT_10006098
#undef DAT_100060a0
#undef DAT_100060b4
#undef DAT_100060c4

#undef DAT_10005000
#define DAT_10005000 (*(uint *)(((uintptr_t)pf_module_state + 0x1424U)))
#undef DAT_1000609c
#define DAT_1000609c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x24c0U)))
#undef DAT_100060c4
#define DAT_100060c4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x24e8U)))
#undef str_10003cb7
#define str_10003cb7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xdbU)))
#undef str_10003cc4
#define str_10003cc4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xe8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001d4a
 */

undefined8 recovered_10001d4a(uint param_1,undefined4 *param_2,long param_3,int param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;

  uVar4 = 0;
  if ((param_2 != (undefined4 *)0x0) && (param_1 < DAT_10005000)) {
    *param_2 = (&DAT_1000609c)[(ulong)param_1 * 0x1c00];
    pcVar1 = str_10003cc4;
    if ((&DAT_100060c4)[(ulong)param_1 * 0x1c00] == 0) {
      pcVar1 = str_10003cb7;
    }
    uVar4 = 1;
    if (param_4 != 0 && param_3 != 0) {
      uVar2 = param_4 - 1;
      for (lVar3 = 0; uVar2 != (uint)lVar3; lVar3 = lVar3 + 1) {
        if (pcVar1[lVar3] == '\0') {
          *(byte *)(param_3 + lVar3) = (byte)((ulong)param_1 % 10) | 0x30;
          uVar2 = (uint)lVar3 + 1;
          break;
        }
        *(char *)(param_3 + lVar3) = pcVar1[lVar3];
      }
      *(undefined1 *)(param_3 + (ulong)uVar2) = 0;
    }
  }
  return uVar4;
}

#undef DAT_10005000
#undef DAT_1000609c
#undef DAT_100060c4
#undef str_10003cb7
#undef str_10003cc4

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001deb
 */

void recovered_10001deb(uint param_1,uint param_2,long param_3,uint param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_100037c7(param_1,param_2,param_3,param_4,0);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001df8
 */

void recovered_10001df8(uint param_1,uint param_2,long param_3,uint param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_100037c7(param_1,param_2,param_3,param_4,1);
  return;
}


#undef DAT_10003d01
#define DAT_10003d01 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x125U)))
#undef DAT_10003d06
#define DAT_10003d06 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x12aU)))
#undef DAT_10005000
#define DAT_10005000 (*(uint *)(((uintptr_t)pf_module_state + 0x1424U)))
#undef DAT_10006088
#define DAT_10006088 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x24acU)))
#undef DAT_10006089
#define DAT_10006089 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x24adU)))
#undef DAT_1000608a
#define DAT_1000608a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x24aeU)))
#undef DAT_100060b0
#define DAT_100060b0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x24d4U)))
#undef DAT_100060b4
#define DAT_100060b4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x24d8U)))
#undef DAT_100060c4
#define DAT_100060c4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x24e8U)))
#undef DAT_100060c8
#define DAT_100060c8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x24ecU)))
#undef DAT_100060d0
#define DAT_100060d0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x24f4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001e06
 */

undefined8 recovered_10001e06(uint param_1,long param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  ushort uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined1 *puVar9;

  uVar5 = 0;
  if (param_1 < DAT_10005000) {
    lVar6 = (ulong)param_1 * 0x7000;
    puVar7 = &DAT_10003d01;
    if ((&DAT_100060c4)[(ulong)param_1 * 0x1c00] == 0) {
      puVar7 = &DAT_10003d06;
    }
    if (*(int *)(&DAT_100060d0 + lVar6) == 0) {
      uVar8 = (ulong)*(ushort *)(&DAT_100060b0 + lVar6);
    }
    else {
      uVar8 = *(ulong *)(&DAT_100060c8 + lVar6);
    }
    uVar1 = (&DAT_10006088)[lVar6];
    uVar2 = (&DAT_10006089)[lVar6];
    uVar3 = (&DAT_1000608a)[lVar6];
    uVar4 = *(ushort *)(&DAT_100060b4 + lVar6);
    for (lVar6 = 0; lVar6 != 0x40; lVar6 = lVar6 + 1) {
      *(undefined1 *)(param_2 + lVar6) = 0;
    }
    for (lVar6 = 0; lVar6 != 4; lVar6 = lVar6 + 1) {
      *(undefined *)(param_2 + lVar6) = puVar7[lVar6];
    }
    *(undefined1 *)(param_2 + 4) = uVar1;
    *(undefined1 *)(param_2 + 5) = uVar2;
    *(undefined1 *)(param_2 + 6) = uVar3;
    puVar9 = (undefined1 *)(param_2 + 8);
    for (lVar6 = 0; lVar6 != 0x20; lVar6 = lVar6 + 8) {
      *puVar9 = (char)(uVar4 >> ((byte)lVar6 & 0x1f));
      puVar9 = puVar9 + 1;
    }
    puVar9 = (undefined1 *)(param_2 + 0x10);
    uVar5 = 1;
    for (lVar6 = 0; lVar6 != 0x40; lVar6 = lVar6 + 8) {
      *puVar9 = (char)(uVar8 >> ((byte)lVar6 & 0x3f));
      puVar9 = puVar9 + 1;
    }
  }
  return uVar5;
}

#undef DAT_10003d01
#undef DAT_10003d06
#undef DAT_10005000
#undef DAT_10006088
#undef DAT_10006089
#undef DAT_1000608a
#undef DAT_100060b0
#undef DAT_100060b4
#undef DAT_100060c4
#undef DAT_100060c8
#undef DAT_100060d0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001ef9
 */

void recovered_10001ef9(undefined1 *param_1,ulong param_2,char *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == (undefined1 *)0x0) {
    return;
  }
  *param_1 = 0;
  recovered_100021aa((long)param_1,param_2,param_3);
  return;
}


#define local_50 (*(undefined4 *)(pf_stack_frame + 16))
#define local_4c (*(undefined4 *)(pf_stack_frame + 20))
#define local_48 (*(undefined4 *)(pf_stack_frame + 24))
#define local_44 (*(undefined4 *)(pf_stack_frame + 28))
#define local_40 (*(undefined4 *)(pf_stack_frame + 32))
#define local_3c (*(undefined4 *)(pf_stack_frame + 36))
#define local_38 (*(undefined4 *)(pf_stack_frame + 40))
#define local_34 (*(undefined4 *)(pf_stack_frame + 44))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001f0d
 */

undefined4
recovered_10001f0d(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined1 *param_5)

{
  unsigned char pf_stack_frame[128] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  long lVar6;

  local_3c = 0;
  local_50 = 0;
  local_38 = 0;
  if (param_5 == (undefined1 *)0x0) {
    local_34 = 0;
  }
  else {
    uVar5 = (undefined1)param_2;
    uVar4 = (undefined1)param_3;
    uVar3 = (undefined1)param_4;
    local_34 = 0;
    local_48 = param_4;
    local_44 = param_3;
    local_40 = param_2;
    uVar2 = recovered_100020bf(param_1,uVar5,uVar4,uVar3,0,4,(long)&local_3c);
    if ((((int)uVar2 != 0) && ((short)local_3c != 0)) && ((short)local_3c != -1)) {
      uVar2 = recovered_100020bf(param_1,uVar5,uVar4,uVar3,8,4,(long)&local_50);
      if ((int)uVar2 != 0) {
        uVar2 = recovered_100020bf(param_1,uVar5,uVar4,uVar3,4,4,(long)(param_5 + 0x10));
        if ((int)uVar2 == 0) {
          *(undefined4 *)(param_5 + 0x10) = 0;
        }
        uVar2 = recovered_100020bf(param_1,uVar5,uVar4,uVar3,0xc,4,(long)&local_38);
        if ((int)uVar2 == 0) {
          local_38 = 0;
          PF_PART1(local_38, 2) = 0;
        }
        else {
        }
        *param_5 = (char)local_40;
        param_5[1] = (char)local_44;
        param_5[2] = (char)local_48;
        *(undefined4 *)(param_5 + 4) = local_3c;
        *(ushort *)(param_5 + 10) = (ushort)local_50 << 8 | (ushort)local_50 >> 8;
        param_5[9] = (char)((uint)local_50 >> 0x10);
        param_5[8] = (char)((uint)local_50 >> 0x18);
        param_5[0xc] = PF_PART1(local_38, 2);
        local_34 = 1;
        for (lVar6 = 0; lVar6 != 0x18; lVar6 = lVar6 + 4) {
          local_4c = 0;
          uVar2 = recovered_100020bf(param_1,uVar5,uVar4,uVar3,(short)lVar6 + 0x10,4,(long)&local_4c
                                    );
          uVar1 = 0;
          if ((int)uVar2 != 0) {
            uVar1 = local_4c;
          }
          *(undefined4 *)(param_5 + lVar6 + 0x14) = uVar1;
        }
      }
    }
  }
  return local_34;
}

#undef local_50
#undef local_4c
#undef local_48
#undef local_44
#undef local_40
#undef local_3c
#undef local_38
#undef local_34

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100020bf
 */

undefined8
recovered_100020bf(int *param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4,
                  undefined2 param_5,undefined4 param_6,long param_7)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if (((param_1 != (int *)0x0) && (*param_1 == 0x54584b57)) && (0x5f < (uint)param_1[2])) {
    if (param_7 != 0 && (code *)(ulong)(uint)param_1[0x17] != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x10002106. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*(code *)(ulong)(uint)param_1[0x17])(param_2,param_3,param_4,param_5,param_6,param_7)
      ;
      return uVar1;
    }
  }
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000210c
 */

void recovered_1000210c(int *param_1,undefined8 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if ((((param_1 == (int *)0x0) || (*param_1 != 0x54584b57)) || ((uint)param_1[2] < 0x2c)) ||
     ((code *)(ulong)(uint)param_1[10] == (code *)0x0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x1000212f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulong)(uint)param_1[10])(param_2);
  return;
}


#define abStack_2b (*(byte (*)[43])(pf_stack_frame + 21))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002133
 */

void recovered_10002133(long param_1,ulong param_2,ulong param_3)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  ulong uVar2;

  if ((int)param_3 == 0) {
    recovered_10003193(param_1,param_2,0x30);
    return;
  }
  for (uVar2 = 0; (uVar1 = param_3 & 0xffffffff, (int)param_3 != 0 && (uVar2 < 10));
      uVar2 = uVar2 + 1) {
    param_3 = uVar1 / 10;
    abStack_2b[uVar2 + 1] = (byte)(uVar1 % 10) | 0x30;
  }
  while (uVar2 != 0) {
    recovered_10003193(param_1,param_2,abStack_2b[uVar2]);
    uVar2 = uVar2 - 1;
  }
  return;
}

#undef abStack_2b

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100021aa
 */

void recovered_100021aa(long param_1,ulong param_2,char *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  uVar1 = recovered_10002ff3(param_1);
  if (param_3 != (char *)0x0 && param_1 != 0) {
    while( true ) {
      uVar1 = uVar1 + 1;
      if ((*param_3 == '\0') || (param_2 <= uVar1)) break;
      *(char *)(param_1 + -1 + uVar1) = *param_3;
      param_3 = param_3 + 1;
    }
    *(undefined1 *)(param_1 + -1 + uVar1) = 0;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100021fe
 */

uint recovered_100021fe(byte *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return (uint)param_1[1] << 0xb | (uint)*param_1 << 0x10 | (uint)param_1[2] << 8 | 0x80000000;
}


#undef str_10003c6d
#define str_10003c6d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x91U)))
#undef str_10003c7f
#define str_10003c7f (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa3U)))
#undef str_10003c91
#define str_10003c91 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb5U)))
#define local_38 (*(uint *)(pf_stack_frame + 24))
#define local_34 (*(uint *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002221
 */

bool recovered_10002221(int *param_1,undefined1 *param_2,long param_3)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  long lVar2;
  uint uVar3;
  char *pcVar4;
  uint uVar5;
  uint uVar6;

  local_34 = 0;
  if ((((param_1 == (int *)0x0) || (*param_1 != 0x54584b57)) || ((uint)param_1[2] < 100)) ||
     (param_1[0x18] == 0)) {
    pcVar4 = str_10003c6d;
  }
  else {
    uVar1 = recovered_100020bf(param_1,*param_2,param_2[1],param_2[2],4,2,(long)&local_34);
    if ((int)uVar1 == 0) {
      pcVar4 = str_10003c7f;
    }
    else {
      uVar6 = 0;
      for (lVar2 = 5; lVar2 != 0xb; lVar2 = lVar2 + 1) {
        uVar3 = uVar6 | 1;
        uVar5 = uVar6 | 2;
        if (*(uint *)(param_2 + lVar2 * 4) == 0) {
          uVar5 = uVar6;
        }
        uVar6 = uVar5;
        if ((*(uint *)(param_2 + lVar2 * 4) & 1) != 0) {
          uVar6 = uVar3;
        }
      }
      lVar2 = recovered_10002ff3(((uintptr_t)pf_module_state+0x28U));
      uVar5 = uVar6 | 4;
      if (lVar2 == 0) {
        uVar5 = uVar6;
      }
      if ((param_2[8] == '\x06') && (param_2[9] != '\0')) {
        uVar5 = uVar5 | 2;
      }
      local_38 = local_34 | uVar5;
      uVar1 = recovered_10002a1f(param_1,*param_2,param_2[1],param_2[2],local_38);
      if ((int)uVar1 != 0) {
        recovered_100020bf(param_1,*param_2,param_2[1],param_2[2],4,2,(long)&local_38);
        return (uVar5 & ~local_38) == 0;
      }
      pcVar4 = str_10003c91;
    }
  }
  recovered_100021aa(param_3,0x400,pcVar4);
  return false;
}

#undef str_10003c6d
#undef str_10003c7f
#undef str_10003c91
#undef local_38
#undef local_34

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002380
 */

uint recovered_10002380(void *device,void *data,uint bytes,uint *low,uint *high)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int *piVar1;
  uint uVar2;

  piVar1 = *(int **)device;
  uVar2 = 0;
  if ((((piVar1 != (int *)0x0) && (*piVar1 == 0x54584b57)) && (0x73 < (uint)piVar1[2])) &&
     (((low != (uint *)0x0 && (data != (void *)0x0)) && (piVar1[0x1c] != 0)))) {
    uVar2 = (*(code *)(ulong)(uint)piVar1[0x1c])(*(uint *)((long)device + 0x90),data,bytes,low,high)
    ;
    uVar2 = (uint)(uVar2 != 0);
  }
  return uVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100023c5
 */

void recovered_100023c5(int *param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if ((((param_1 == (int *)0x0) || (*param_1 != 0x54584b57)) || ((uint)param_1[2] < 0x78)) ||
     ((code *)(ulong)(uint)param_1[0x1d] == (code *)0x0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x100023ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulong)(uint)param_1[0x1d])(param_2,param_3,param_4);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100023f0
 */

void recovered_100023f0(int *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if ((((param_1 == (int *)0x0) || (*param_1 != 0x54584b57)) || ((uint)param_1[2] < 0x7c)) ||
     ((code *)(ulong)(uint)param_1[0x1e] == (code *)0x0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x10002410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulong)(uint)param_1[0x1e])();
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002414
 */

uint recovered_10002414(int *api,ulong base,uint offset,uint value)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if (base == 0) {
    return 0;
  }
  uVar1 = recovered_10002f1e(api,offset + base,2,value);
  return (uint)uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002432
 */

bool recovered_10002432(int *param_1,long param_2,ulong param_3,undefined4 param_4,
                       undefined4 param_5)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  bool bVar2;

  uVar1 = recovered_10003104(param_1,param_2,param_3,param_4);
  if ((int)uVar1 == 0) {
    bVar2 = false;
  }
  else {
    uVar1 = recovered_10003104(param_1,param_2,(ulong)((int)param_3 + 4),param_5);
    bVar2 = (int)uVar1 != 0;
  }
  return bVar2;
}


#define local_1c (*(undefined4 *)(pf_stack_frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000247c
 */

undefined8 recovered_1000247c(int *param_1,long param_2,ulong param_3,undefined4 *param_4)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  undefined8 uVar2;

  local_1c = 0;
  uVar2 = 0;
  if (param_2 != 0 && param_4 != (undefined4 *)0x0) {
    uVar1 = recovered_10003122(param_1,(param_3 & 0xffffffff) + param_2,2,(long)&local_1c);
    if ((int)uVar1 != 0) {
      *param_4 = local_1c;
      uVar2 = 1;
    }
  }
  return uVar2;
}

#undef local_1c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100024ce
 */

undefined8 recovered_100024ce(int *param_1,long param_2,ulong param_3,long param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if (param_2 == 0 || param_4 == 0) {
    return 0;
  }
  uVar1 = recovered_10003122(param_1,(param_3 & 0xffffffff) + param_2,1,param_4);
  return uVar1;
}


#define local_1c (*(undefined4 *)(pf_stack_frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100024f9
 */

undefined8 recovered_100024f9(int *param_1,long param_2,ulong param_3,undefined4 *param_4)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  undefined8 uVar2;

  local_1c = 0;
  uVar2 = 0;
  if (param_2 != 0 && param_4 != (undefined4 *)0x0) {
    uVar1 = recovered_10003122(param_1,(param_3 & 0xffffffff) + param_2,4,(long)&local_1c);
    if ((int)uVar1 != 0) {
      *param_4 = local_1c;
      uVar2 = 1;
    }
  }
  return uVar2;
}

#undef local_1c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000254b
 */

void recovered_1000254b(undefined8 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int *piVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  undefined7 extraout_var = 0;
  long lVar5;
  uint uVar6;

  if ((param_1 != (undefined8 *)0x0) && (piVar1 = (int *)*param_1, piVar1 != (int *)0x0)) {
    *(undefined8 *)((long)param_1 + 0x94) = 0;
    if ((*(int *)((long)param_1 + 0xac) == 0) || (*(short *)((long)param_1 + 0xaa) == 0)) {
      if (param_1[1] == 0) {
        iVar3 = 1;
      }
      else {
        bVar2 = recovered_1000305e(piVar1,param_1[1]);
        iVar3 = (int)CONCAT71(extraout_var,bVar2);
      }
    }
    else {
      uVar4 = recovered_10002ee5(piVar1,(uint)(ushort)(*(short *)((long)param_1 + 0xaa) + 0x12),1,0)
      ;
      iVar3 = (int)uVar4;
    }
    if (*(char *)((long)param_1 + 0x8b) != '\0') {
      uVar6 = *(uint *)((long)param_1 + 0x8c) & 0xfffffffb;
      if (iVar3 != 0) {
        uVar6 = *(uint *)((long)param_1 + 0x8c);
      }
      recovered_10002a1f((int *)*param_1,*(undefined1 *)(param_1 + 0x11),
                         *(undefined1 *)((long)param_1 + 0x89),*(undefined1 *)((long)param_1 + 0x8a)
                         ,uVar6 & 0xffff);
      *(undefined1 *)((long)param_1 + 0x8b) = 0;
    }
    *(undefined8 *)((long)param_1 + 0xac) = 0;
    *(undefined8 *)((long)param_1 + 0xb4) = 0;
    *(undefined2 *)((long)param_1 + 0xaa) = 0;
    *(undefined4 *)((long)param_1 + 0xc4) = 0;
    *(undefined1 *)((long)param_1 + 0xbc) = 0;
    for (lVar5 = 0; lVar5 != 4; lVar5 = lVar5 + 1) {
      *(undefined1 *)((long)param_1 + lVar5 + 0xbd) = 0;
    }
    param_1[0x19] = 0;
    *(undefined4 *)(param_1 + 0x1a) = 0;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000263b
 */

undefined4
recovered_1000263b(int *param_1,undefined1 *param_2,uint param_3,int param_4,ulong *param_5)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int local_40;
  uint local_3c;
  int local_38;
  uint local_34;
  
  local_40 = 0;
  uVar2 = 0;
  if ((param_5 != (ulong *)0x0) &&
     ((param_3 == 0 || ((*(uint *)(param_2 + (ulong)(param_3 - 1) * 4 + 0x14) & 7) != 4)))) {
    local_3c = *(uint *)(param_2 + (ulong)param_3 * 4 + 0x14);
    if ((local_3c & 1) == 0 && local_3c != 0) {
      local_38 = param_4;
      recovered_100020bf(param_1,*param_2,param_2[1],param_2[2],(short)param_3 * 4 + 0x10,4,
                         (long)&local_3c);
      uVar2 = 0;
      iVar3 = 0;
      if ((local_3c & 7) == 4) {
        if (4 < param_3) {
          return 0;
        }
        local_40 = *(int *)(param_2 + (ulong)param_3 * 4 + 0x18);
        recovered_100020bf(param_1,*param_2,param_2[1],param_2[2],(short)param_3 * 4 + 0x14,4,
                           (long)&local_40);
        iVar3 = local_40;
      }
      uVar1 = 0xfffffffc;
      if ((local_3c & 1) == 0) {
        uVar1 = 0xfffffff0;
      }
      if ((local_38 != 0) && ((uVar1 & local_3c) != 0 || iVar3 != 0)) {
        *param_5 = 0;
        local_34 = 0;
        uVar2 = 0;
        if ((param_1 != (int *)0x0) && (*param_1 == 0x54584b57)) {
          if (((uint)param_1[2] < 0xbc) || ((code *)(ulong)(uint)param_1[0x2e] == (code *)0x0)) {
            if ((0x67 < (uint)param_1[2] && iVar3 == 0) &&
               ((code *)(ulong)(uint)param_1[0x19] != (code *)0x0)) {
              uVar2 = 0;
              iVar3 = (*(code *)(ulong)(uint)param_1[0x19])(uVar1 & local_3c,0,local_38,&local_34);
              if (iVar3 != 0) {
                *param_5 = (ulong)local_34;
                uVar2 = 1;
              }
            }
          }
          else {
            uVar2 = (*(code *)(ulong)(uint)param_1[0x2e])(uVar1 & local_3c,iVar3,local_38,param_5);
          }
        }
      }
    }
  }
  return uVar2;
}



#define local_38 (*(undefined8 *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100027e2
 */

undefined8 recovered_100027e2(int *param_1,long *param_2)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  uint uVar1;
  bool bVar2;
  ulong in_RAX;
  undefined8 uVar3;
  undefined7 extraout_var = 0;
  undefined7 extraout_var_00 = 0;
  long lVar4;

  local_38 = in_RAX & 0xffffffff00000000;
  if (*(int *)((long)param_2 + 0xc4) == 0) {
    return 0;
  }
  if (*(char *)((long)param_2 + 0xb6) == '\x02') {
    return 0;
  }
  if (*(char *)((long)param_2 + 0xb6) == '\0') {
    uVar3 = recovered_10002a59(param_2,6);
    if ((int)uVar3 == 0) {
      uVar1 = 1;
    }
    else {
      uVar3 = recovered_10002b8a(param_1,10);
      if (((((int)uVar3 != 0) && (uVar3 = recovered_10002a59(param_2,2), (int)uVar3 != 0)) &&
          (uVar3 = recovered_10002b8a(param_1,2000), (int)uVar3 != 0)) &&
         (bVar2 = recovered_10002bb2(param_2), (int)CONCAT71(extraout_var,bVar2) != 0)) {
        *(undefined1 *)((long)param_2 + 0xb6) = 1;
        goto LAB_10002883;
      }
      uVar1 = 2;
    }
    recovered_10002a9c(param_2,uVar1);
    *(undefined1 *)((long)param_2 + 0xb6) = 2;
  }
  else {
LAB_10002883:
    uVar3 = recovered_10002c33(param_2,(uint)*(byte *)((long)param_2 + 0xb4));
    if ((int)uVar3 == 0) {
      uVar1 = 3;
    }
    else {
      bVar2 = recovered_10002c86(param_2);
      if ((int)CONCAT71(extraout_var_00,bVar2) != 0) {
        uVar3 = recovered_10002d1e(param_2,0xec);
        if ((int)uVar3 == 0) {
          uVar1 = 5;
        }
        else {
          uVar3 = recovered_10002d60(param_2,8,0x21);
          if ((int)uVar3 != 0) {
            lVar4 = 0x2000;
            do {
              if (lVar4 == 0x2100) {
                uVar3 = recovered_10002b8a(param_1,1);
                if ((int)uVar3 == 0) {
                  uVar1 = 8;
                }
                else {
                  lVar4 = param_2[0x80f];
                  if ((int)lVar4 == 0) {
                    uVar1 = 9;
                  }
                  else {
                    uVar3 = recovered_10002e4a(param_2);
                    if ((int)uVar3 == 0) {
                      uVar1 = 10;
                    }
                    else {
                      uVar3 = recovered_10002de9(param_2,7,1,(undefined4 *)&local_38);
                      if ((((int)uVar3 != 0) && ((int)local_38 != 0)) && ((local_38 & 0x29) == 0)) {
                        *(int *)((long)param_2 + 0x9c) = (int)lVar4;
                        *(undefined8 *)((long)param_2 + 0x94) = 0x100000001;
                        return 1;
                      }
                      uVar1 = 0xb;
                    }
                  }
                }
LAB_100029fa:
                recovered_10002a9c(param_2,uVar1);
                *(undefined1 *)((long)param_2 + 0xb6) = 0;
                return 0;
              }
              local_38 = local_38 & 0xffffffff;
              uVar3 = recovered_10002de9(param_2,0,2,(undefined4 *)((long)&local_38 + 4));
              if ((int)uVar3 == 0) {
                uVar1 = 7;
                goto LAB_100029fa;
              }
              *(undefined2 *)((long)param_2 + lVar4 * 2) = PF_PART2(local_38, 4);
              lVar4 = lVar4 + 1;
            } while( true );
          }
          uVar1 = 6;
        }
        recovered_10002a9c(param_2,uVar1);
        *(undefined1 *)((long)param_2 + 0xb6) = 0;
        return 0;
      }
      uVar1 = 4;
    }
    recovered_10002a9c(param_2,uVar1);
  }
  return 0;
}

#undef local_38

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002a1f
 */

undefined8
recovered_10002a1f(int *param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4,
                  undefined4 param_5)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if ((((param_1 == (int *)0x0) || (*param_1 != 0x54584b57)) || ((uint)param_1[2] < 100)) ||
     ((code *)(ulong)(uint)param_1[0x18] == (code *)0x0)) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x10002a53. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)(ulong)(uint)param_1[0x18])(param_2,param_3,param_4,4,2,param_5);
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002a59
 */

undefined8 recovered_10002a59(undefined8 *param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  undefined4 extraout_var = 0;
  undefined8 uVar2;

  if (param_1 == (undefined8 *)0x0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x1a) == 0) {
    uVar2 = recovered_10002ee5((int *)*param_1,(uint)*(ushort *)((long)param_1 + 0xb2),1,param_2);
    return uVar2;
  }
  uVar1 = recovered_10002ec7((int *)*param_1,param_1[0x19],0x160,param_2);
  return CONCAT44(extraout_var,uVar1);
}


#define local_2c (*(undefined4 *)(pf_stack_frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002a9c
 */

void recovered_10002a9c(undefined8 *param_1,uint param_2)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  undefined1 uVar1;
  undefined8 uVar2;
  long lVar3;

  local_2c = 0;
  if (*(byte *)((long)param_1 + 0xb7) < param_2) {
    *(char *)((long)param_1 + 0xb7) = (char)param_2;
    *(undefined1 *)(param_1 + 0x17) = *(undefined1 *)((long)param_1 + 0xb5);
    *(byte *)((long)param_1 + 0xb9) = *(byte *)((long)param_1 + 0xb4) >> 4 & 1;
    if (*(int *)(param_1 + 0x1a) == 0) {
      uVar2 = recovered_10002f71((int *)*param_1,*(short *)((long)param_1 + 0xb2),1,(long)&local_2c)
      ;
      uVar1 = (undefined1)uVar2;
    }
    else {
      uVar2 = recovered_100024ce((int *)*param_1,param_1[0x19],0x160,(long)&local_2c);
      uVar1 = (undefined1)uVar2;
    }
    *(undefined1 *)((long)param_1 + 0xbb) = uVar1;
    *(undefined1 *)((long)param_1 + 0xba) = (undefined1)local_2c;
    *(undefined1 *)((long)param_1 + 0xbc) = 1;
    for (lVar3 = 0xbd; lVar3 != 0xc1; lVar3 = lVar3 + 1) {
      uVar2 = recovered_10002de9(param_1,(int)lVar3 + -0xbb,1,&local_2c);
      if ((int)uVar2 == 0) {
        *(undefined1 *)((long)param_1 + 0xbc) = 0;
        local_2c = 0;
        PF_PART1(local_2c, 0) = 0;
      }
      else {
      }
      *(undefined1 *)((long)param_1 + lVar3) = (undefined1)local_2c;
    }
  }
  return;
}

#undef local_2c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002b8a
 */

undefined8 recovered_10002b8a(int *param_1,undefined4 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if ((((param_1 == (int *)0x0) || (*param_1 != 0x54584b57)) || ((uint)param_1[2] < 0x34)) ||
     ((code *)(ulong)(uint)param_1[0xc] == (code *)0x0)) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x10002bac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)(ulong)(uint)param_1[0xc])(param_2);
  return uVar1;
}


#define uStack_38 (*(undefined8 *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002bb2
 */

bool recovered_10002bb2(undefined8 *param_1)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  uint in_EAX = 0;
  undefined8 uVar1;
  int iVar2;
  bool bVar3;

  uStack_38 = (ulong)in_EAX;
  iVar2 = 31000;
  while( true ) {
    bVar3 = iVar2 == 0;
    iVar2 = iVar2 + -1;
    if (bVar3) {
      return false;
    }
    uVar1 = recovered_10002de9(param_1,7,1,(undefined4 *)((long)&uStack_38 + 4));
    if ((int)uVar1 == 0) break;
    if ((PF_PART4(uStack_38, 4) == 0) || (PF_PART4(uStack_38, 4) == 0xff)) {
      return true;
    }
    if (-1 < (char)(uStack_38 >> 0x20)) {
      return (uStack_38 & 0x2900000000) == 0;
    }
    recovered_10002b8a((int *)*param_1,1000);
  }
  return false;
}

#undef uStack_38

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002c33
 */

undefined8 recovered_10002c33(long *param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  undefined8 uVar2;

  if ((param_1 != (long *)0x0) && (*param_1 != 0)) {
    uVar1 = recovered_10002fa9(param_1,6,1,param_2);
    if (uVar1 != 0) {
      uVar2 = recovered_10002b8a((int *)*param_1,1);
      if ((int)uVar2 != 0) {
        uVar2 = recovered_10002d60(param_1,0,0x29);
        return uVar2;
      }
    }
  }
  return 0;
}


#define local_28 (*(int *)(pf_stack_frame + 24))
#define local_24 (*(int *)(pf_stack_frame + 28))
#define local_20 (*(int *)(pf_stack_frame + 32))
#define local_1c (*(int *)(pf_stack_frame + 36))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002c86
 */

bool recovered_10002c86(undefined8 *param_1)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  bool bVar2;

  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  uVar1 = recovered_10002de9(param_1,2,1,&local_28);
  bVar2 = false;
  if ((int)uVar1 != 0) {
    uVar1 = recovered_10002de9(param_1,3,1,&local_24);
    if ((int)uVar1 != 0) {
      uVar1 = recovered_10002de9(param_1,4,1,&local_20);
      if ((int)uVar1 != 0) {
        uVar1 = recovered_10002de9(param_1,5,1,&local_1c);
        if ((int)uVar1 != 0) {
          bVar2 = ((local_24 == 1 && local_28 == 1) && local_20 == 0) && local_1c == 0;
        }
      }
    }
  }
  return bVar2;
}

#undef local_28
#undef local_24
#undef local_20
#undef local_1c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002d1e
 */

undefined8 recovered_10002d1e(long *param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  undefined8 uVar2;

  if ((param_1 != (long *)0x0) && (*param_1 != 0)) {
    uVar1 = recovered_10002fa9(param_1,7,1,param_2);
    if (uVar1 != 0) {
      uVar2 = recovered_10002b8a((int *)*param_1,1);
      return uVar2;
    }
  }
  return 0;
}


#define local_3c (*(uint *)(pf_stack_frame + 20))
#define local_38 (*(uint *)(pf_stack_frame + 24))
#define local_34 (*(uint *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002d60
 */

undefined8 recovered_10002d60(undefined8 *param_1,uint param_2,uint param_3)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  int iVar2;
  bool bVar3;

  local_3c = 0;
  iVar2 = 100000;
  local_38 = param_3;
  local_34 = param_2;
  while( true ) {
    bVar3 = iVar2 == 0;
    iVar2 = iVar2 + -1;
    if (bVar3) {
      return 0;
    }
    uVar1 = recovered_10002de9(param_1,7,1,&local_3c);
    if ((int)uVar1 == 0) {
      return 0;
    }
    if (local_3c == 0) {
      return 0;
    }
    if (local_3c == 0xff) break;
    if (-1 < (char)local_3c) {
      if ((local_38 & local_3c) != 0) {
        return 0;
      }
      if ((local_34 & ~local_3c) == 0) {
        return 1;
      }
    }
    recovered_10002b8a((int *)*param_1,10);
  }
  return 0;
}

#undef local_3c
#undef local_38
#undef local_34

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002de9
 */

undefined8 recovered_10002de9(undefined8 *param_1,int param_2,int param_3,undefined4 *param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if (param_4 == (undefined4 *)0x0 || param_1 == (undefined8 *)0x0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x1a) == 0) {
    uVar1 = recovered_10002f71((int *)*param_1,(short)param_2 + *(short *)(param_1 + 0x16),param_3,
                               (long)param_4);
    return uVar1;
  }
  if (param_3 == 2) {
    uVar1 = recovered_1000247c((int *)*param_1,param_1[0x19],(ulong)(uint)(param_2 << 4),param_4);
    return uVar1;
  }
  uVar1 = recovered_100024ce((int *)*param_1,param_1[0x19],(ulong)(uint)(param_2 << 4),(long)param_4
                            );
  return uVar1;
}


#define uStack_38 (*(undefined8 *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002e4a
 */

undefined8 recovered_10002e4a(undefined8 *param_1)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  uint in_EAX = 0;
  undefined8 uVar1;
  int iVar2;
  bool bVar3;

  uStack_38 = (ulong)in_EAX;
  iVar2 = 100000;
  while( true ) {
    bVar3 = iVar2 == 0;
    iVar2 = iVar2 + -1;
    if (bVar3) {
      return 0;
    }
    uVar1 = recovered_10002de9(param_1,7,1,(undefined4 *)((long)&uStack_38 + 4));
    if ((int)uVar1 == 0) {
      return 0;
    }
    if (PF_PART4(uStack_38, 4) == 0) {
      return 0;
    }
    if (PF_PART4(uStack_38, 4) == 0xff) break;
    if (-1 < (char)(uStack_38 >> 0x20)) {
      if ((uStack_38 & 0x2100000000) != 0) {
        return 0;
      }
      if ((uStack_38 & 0x800000000) == 0) {
        return 1;
      }
    }
    recovered_10002b8a((int *)*param_1,10);
  }
  return 0;
}

#undef uStack_38

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002ec7
 */

uint recovered_10002ec7(int *api,ulong base,uint offset,uint value)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if (base == 0) {
    return 0;
  }
  uVar1 = recovered_10002f1e(api,offset + base,1,value);
  return (uint)uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002ee5
 */

undefined8 recovered_10002ee5(int *param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if ((((param_1 == (int *)0x0 || param_2 == 0) || (*param_1 != 0x54584b57)) ||
      ((uint)param_1[2] < 0x5c)) || ((code *)(ulong)(uint)param_1[0x16] == (code *)0x0)) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x10002f18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)(ulong)(uint)param_1[0x16])((short)param_2,param_3,param_4);
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002f1e
 */

undefined8 recovered_10002f1e(int *param_1,ulong param_2,undefined4 param_3,undefined4 param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if ((param_1 != (int *)0x0) && (*param_1 == 0x54584b57)) {
    if ((0xc3 < (uint)param_1[2]) && ((code *)(ulong)(uint)param_1[0x30] != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x10002f4b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*(code *)(ulong)(uint)param_1[0x30])(param_2,param_3,param_4);
      return uVar1;
    }
    if (((param_2 >> 0x20 == 0) && (0x6f < (uint)param_1[2])) &&
       ((code *)(ulong)(uint)param_1[0x1b] != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x10002f6b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*(code *)(ulong)(uint)param_1[0x1b])(param_2 & 0xffffffff,param_3,param_4);
      return uVar1;
    }
  }
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002f71
 */

undefined8 recovered_10002f71(int *param_1,short param_2,undefined4 param_3,long param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if ((((param_1 == (int *)0x0) || (param_2 == 0)) || (param_4 == 0)) ||
     (((*param_1 != 0x54584b57 || ((uint)param_1[2] < 0x58)) ||
      ((code *)(ulong)(uint)param_1[0x15] == (code *)0x0)))) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x10002fa3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)(ulong)(uint)param_1[0x15])(param_2,param_3,param_4);
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002fa9
 */

uint recovered_10002fa9(void *device,uint offset,uint width,uint value)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  undefined8 uVar2;

  if (*(int *)((long)device + 0xd0) == 0) {
    uVar2 = recovered_10002ee5(*(int **)device,
                               (uint)(ushort)((short)offset + *(short *)((long)device + 0xb0)),width
                               ,value);
    return (uint)uVar2;
  }
  if (width == 2) {
    uVar1 = recovered_10002414(*(int **)device,*(ulong *)((long)device + 200),offset << 4,value);
    return uVar1;
  }
  uVar1 = recovered_10002ec7(*(int **)device,*(ulong *)((long)device + 200),offset << 4,value);
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002ff3
 */

long recovered_10002ff3(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  long lVar2;
  long lVar3;

  if (param_1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar3 = -1;
    do {
      lVar2 = lVar3 + 1;
      pcVar1 = (char *)(param_1 + 1 + lVar3);
      lVar3 = lVar2;
    } while (*pcVar1 != '\0');
  }
  return lVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003013
 */

undefined8
recovered_10003013(int *param_1,undefined1 *param_2,uint param_3,uint param_4,uint param_5,
                  ulong *param_6)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined8 uVar2;

  uVar2 = 0;
  if ((((!CARRY4(param_5,param_4)) && (param_5 != 0)) && (param_3 < 6)) && (param_6 != (ulong *)0x0)
     ) {
    iVar1 = recovered_1000263b(param_1,param_2,param_3,param_5 + param_4,param_6);
    if (iVar1 != 0) {
      *param_6 = *param_6 + (ulong)param_4;
      uVar2 = 1;
    }
  }
  return uVar2;
}


#define local_34 (*(int *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000305e
 */

bool recovered_1000305e(int *param_1,long param_2)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  uint uVar1;
  undefined8 uVar2;
  bool bVar3;

  local_34 = 0xff;
  bVar3 = false;
  if (param_2 != 0 && param_1 != (int *)0x0) {
    bVar3 = false;
    uVar1 = recovered_10002ec7(param_1,param_2,0x14,0);
    if (uVar1 != 0) {
      recovered_100023f0(param_1);
      for (uVar1 = 0; uVar1 != 1000; uVar1 = uVar1 + 1) {
        uVar2 = recovered_100024ce(param_1,param_2,0x14,(long)&local_34);
        if (((int)uVar2 != 0) && (local_34 == 0)) break;
        recovered_10002b8a(param_1,10);
      }
      bVar3 = uVar1 < 1000;
    }
  }
  return bVar3;
}

#undef local_34

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003104
 */

undefined8 recovered_10003104(int *param_1,long param_2,ulong param_3,undefined4 param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if (param_2 == 0) {
    return 0;
  }
  uVar1 = recovered_10002f1e(param_1,(param_3 & 0xffffffff) + param_2,4,param_4);
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003122
 */

undefined8 recovered_10003122(int *param_1,ulong param_2,undefined4 param_3,long param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if ((param_1 != (int *)0x0) && (*param_1 == 0x54584b57)) {
    if (0xbf < (uint)param_1[2]) {
      if (param_4 != 0 && (code *)(ulong)(uint)param_1[0x2f] != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x1000315e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar1 = (*(code *)(ulong)(uint)param_1[0x2f])(param_2,param_3,param_4);
        return uVar1;
      }
    }
    if ((param_2 >> 0x20 == 0) && (0x6b < (uint)param_1[2])) {
      if (param_4 != 0 && (code *)(ulong)(uint)param_1[0x1a] != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x1000318d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar1 = (*(code *)(ulong)(uint)param_1[0x1a])(param_2 & 0xffffffff,param_3,param_4);
        return uVar1;
      }
    }
  }
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003193
 */

void recovered_10003193(long param_1,ulong param_2,undefined1 param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;

  lVar1 = recovered_10002ff3(param_1);
  if ((param_1 != 0) && (lVar1 + 1U < param_2)) {
    *(undefined1 *)(param_1 + lVar1) = param_3;
    *(undefined1 *)(param_1 + 1 + lVar1) = 0;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100031cd
 */

void recovered_100031cd(long param_1,ulong param_2,uint param_3,int param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  char cVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;

  iVar1 = param_4 * 4;
  while( true ) {
    iVar1 = iVar1 + -4;
    bVar5 = param_4 == 0;
    param_4 = param_4 + -1;
    if (bVar5) break;
    uVar3 = param_3 >> ((byte)iVar1 & 0x1f) & 0xf;
    cVar2 = (char)uVar3;
    cVar4 = cVar2 + '7';
    if (uVar3 < 10) {
      cVar4 = cVar2 + '0';
    }
    recovered_10003193(param_1,param_2,cVar4);
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000322a
 */

void recovered_1000322a(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  while( true ) {
    iVar1 = __atomic_exchange_n(&(*(int *)(param_1 + 0xa0)),1,__ATOMIC_SEQ_CST);
    if (iVar1 == 0) break;
    do {
    } while (*(int *)(param_1 + 0xa0) != 0);
  }
  return;
}


#define local_5c (*(uint *)(pf_stack_frame + 20))
#define local_58 (*(uint *)(pf_stack_frame + 24))
#define local_54 (*(uint *)(pf_stack_frame + 28))
#define local_50 (*(uint *)(pf_stack_frame + 32))
#define local_4c (*(uint *)(pf_stack_frame + 36))
#define local_48 (*(uint *)(pf_stack_frame + 40))
#define local_44 (*(uint *)(pf_stack_frame + 44))
#define local_40 (*(ulong *)(pf_stack_frame + 48))
#define local_34 (*(int *)(pf_stack_frame + 60))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000324b
 */

bool recovered_1000324b(undefined8 *param_1,int param_2,undefined4 param_3,long param_4,
                       undefined8 param_5)

{
  unsigned char pf_stack_frame[144] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  undefined8 *data;
  short sVar2;
  undefined8 *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  undefined8 *puVar9;
  long lVar10;
  short sVar11;
  uint uVar12;
  ulong uVar13;
  bool bVar14;
  bool bVar15;

  if (param_1 == (undefined8 *)0x0) {
    return false;
  }
  local_40 = param_5;
  local_34 = param_2;
  recovered_1000322a((long)param_1);
  local_5c = 0;
  local_58 = 0;
  local_54 = 0;
  local_50 = 0;
  local_48 = 0;
  local_44 = 0;
  puVar3 = param_1 + 0x20;
  if (*(int *)((long)param_1 + 0xac) == 0) {
    puVar9 = param_1 + 0x40;
    lVar10 = 0x300;
  }
  else {
    puVar9 = param_1 + (ulong)*(ushort *)((long)param_1 + 0xa4) * 2 + 0x200;
    lVar10 = 0x2000;
    puVar3 = param_1 + 0x200;
  }
  bVar14 = false;
  if (*(int *)((long)param_1 + 0x94) == 0) goto LAB_100036e1;
  if (local_34 == 4) {
    if (*(int *)(param_1 + 0x13) == 0) goto LAB_100036e1;
  }
  else if ((int)local_40 - 0x11U < 0xfffffff0 || param_4 == 0) goto LAB_100036e1;
  puVar1 = param_1 + 0x600;
  recovered_10001c77((long)puVar1,0x10);
  *(int *)(param_1 + 0x600) = local_34;
  bVar14 = false;
  recovered_100036fd((undefined1 *)(param_1 + 0x601),param_3,0);
  *(undefined1 *)(param_1 + 0xc00) = 0xff;
  uVar4 = recovered_10002380(param_1,puVar1,0x10,&local_5c,&local_58);
  if (uVar4 == 0) goto LAB_100036e1;
  data = param_1 + 0xc00;
  uVar4 = recovered_10002380(param_1,data,1,&local_48,&local_44);
  if (uVar4 == 0) goto LAB_100036e1;
  uVar4 = (int)local_40 << 9;
  local_40 = (ulong)uVar4;
  iVar5 = local_34;
  if (local_34 != 4) {
    uVar4 = recovered_10002380(param_1,param_1 + 0x800,uVar4,&local_54,&local_50);
    iVar5 = local_34;
    if (uVar4 == 0) goto LAB_100036e1;
    if (local_34 == 1) {
      recovered_10003731((long)(param_1 + 0x800),param_4,(uint)local_40);
    }
  }
  recovered_10001c77((long)puVar3,(ulong)*(ushort *)((long)param_1 + 0xa4) << 4);
  recovered_1000374b((undefined1 *)puVar3,local_5c,local_58,0x10,1,1);
  if (iVar5 == 4) {
    recovered_1000374b((undefined1 *)(puVar3 + 2),local_48,local_44,1,2,0);
    uVar8 = (undefined4)local_40;
  }
  else {
    uVar8 = (undefined4)local_40;
    recovered_1000374b((undefined1 *)(puVar3 + 2),local_54,local_50,uVar8,(uint)(iVar5 == 0) * 2 + 1
                       ,2);
    recovered_1000374b((undefined1 *)(puVar3 + 4),local_48,local_44,1,2,0);
  }
  *(undefined2 *)
   ((long)puVar9 +
   (ulong)(*(ushort *)((long)param_1 + 0xa6) % *(ushort *)((long)param_1 + 0xa4)) * 2 + 4) = 0;
  iVar5 = *(ushort *)((long)param_1 + 0xa6) + 1;
  *(short *)((long)param_1 + 0xa6) = (short)iVar5;
  *(char *)((long)puVar9 + 2) = (char)iVar5;
  *(char *)((long)puVar9 + 3) = (char)((uint)iVar5 >> 8);
  local_4c = *(uint *)(param_1 + 0x15);
  recovered_100023c5((int *)*param_1,*(undefined4 *)(param_1 + 0x12),puVar1,0x10);
  puVar1 = param_1 + 0x800;
  recovered_100023c5((int *)*param_1,*(undefined4 *)(param_1 + 0x12),puVar1,uVar8);
  recovered_100023c5((int *)*param_1,*(undefined4 *)(param_1 + 0x12),data,1);
  recovered_100023c5((int *)*param_1,*(undefined4 *)(param_1 + 0x12),puVar3,
                     (uint)*(ushort *)((long)param_1 + 0xa4) << 4);
  recovered_100023c5((int *)*param_1,*(undefined4 *)(param_1 + 0x12),puVar9,
                     (uint)*(ushort *)((long)param_1 + 0xa4) * 2 + 6);
  recovered_100023f0((int *)*param_1);
  if (*(int *)((long)param_1 + 0xac) == 0) {
LAB_10003589:
    uVar4 = recovered_10002414((int *)*param_1,param_1[0xf],0,0);
    if (uVar4 != 0) {
LAB_100035a1:
      lVar10 = lVar10 + (long)param_1;
      sVar11 = (short)local_4c + 1;
      iVar5 = 50000;
      while (bVar14 = iVar5 != 0, iVar5 = iVar5 + -1, bVar14) {
        recovered_100023c5((int *)*param_1,*(undefined4 *)(param_1 + 0x12),lVar10,
                           (uint)*(ushort *)((long)param_1 + 0xa4) * 8 + 6);
        sVar2 = *(short *)(lVar10 + 2);
        *(short *)(param_1 + 0x15) = sVar2;
        if (sVar2 == sVar11) goto LAB_10003611;
        recovered_10002b8a((int *)*param_1,100);
      }
      if (*(short *)(param_1 + 0x15) == sVar11) {
LAB_10003611:
        bVar14 = false;
        uVar13 = (ulong)(ushort)((local_4c & 0xffff) % (uint)*(ushort *)((long)param_1 + 0xa4));
        iVar5 = recovered_1000379a((undefined4 *)(uVar13 * 8 + 4 + lVar10));
        uVar6 = recovered_1000379a((undefined4 *)(uVar13 * 8 + 8 + lVar10));
        uVar12 = (uint)local_40;
        uVar4 = uVar12 | 1;
        if (local_34 != 0) {
          uVar4 = 1;
        }
        if (((iVar5 == 0) && (uVar6 != 0)) && (uVar6 <= uVar4)) {
          bVar15 = local_34 == 0;
          bVar14 = true;
          recovered_100023c5((int *)*param_1,*(undefined4 *)(param_1 + 0x12),data,1);
          recovered_100023c5((int *)*param_1,*(undefined4 *)(param_1 + 0x12),puVar1,uVar12);
          if (*(char *)(param_1 + 0xc00) == '\0' && bVar15) {
            recovered_10003731(param_4,(long)puVar1,uVar12);
          }
          else {
            bVar14 = *(char *)(param_1 + 0xc00) == '\0';
          }
        }
        else {
          recovered_1000254b(param_1);
        }
        goto LAB_100036e1;
      }
    }
  }
  else {
    uVar7 = recovered_10002ee5((int *)*param_1,
                               (uint)(ushort)(*(short *)((long)param_1 + 0xaa) + 0x10),2,0);
    if ((int)uVar7 != 0) {
      if (*(int *)((long)param_1 + 0xac) == 0) goto LAB_10003589;
      goto LAB_100035a1;
    }
  }
  recovered_1000254b(param_1);
  bVar14 = false;
LAB_100036e1:
  *(undefined4 *)(param_1 + 0x14) = 0;
  return bVar14;
}

#undef local_5c
#undef local_58
#undef local_54
#undef local_50
#undef local_4c
#undef local_48
#undef local_44
#undef local_40
#undef local_34

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100036fd
 */

void recovered_100036fd(undefined1 *param_1,undefined4 param_2,undefined4 param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 != (undefined1 *)0x0) {
    *param_1 = (char)param_2;
    param_1[1] = (char)((uint)param_2 >> 8);
    param_1[2] = (char)((uint)param_2 >> 0x10);
    param_1[3] = (char)((uint)param_2 >> 0x18);
    param_1[4] = (char)param_3;
    param_1[5] = (char)((uint)param_3 >> 8);
    param_1[6] = (char)((uint)param_3 >> 0x10);
    param_1[7] = (char)((uint)param_3 >> 0x18);
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003731
 */

void recovered_10003731(long param_1,long param_2,uint param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  for (uVar1 = 0; param_3 != uVar1; uVar1 = uVar1 + 1) {
    *(undefined1 *)(param_1 + uVar1) = *(undefined1 *)(param_2 + uVar1);
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000374b
 */

void recovered_1000374b(undefined1 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4
                       ,undefined4 param_5,undefined4 param_6)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_100036fd(param_1,param_2,param_3);
  param_1[8] = (char)param_4;
  param_1[9] = (char)((uint)param_4 >> 8);
  param_1[10] = (char)((uint)param_4 >> 0x10);
  param_1[0xb] = (char)((uint)param_4 >> 0x18);
  param_1[0xc] = (char)param_5;
  param_1[0xd] = (char)((uint)param_5 >> 8);
  param_1[0xe] = (char)param_6;
  param_1[0xf] = (char)((uint)param_6 >> 8);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000379a
 */

undefined4 recovered_1000379a(undefined4 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;

  if (param_1 == (undefined4 *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *param_1;
  }
  return uVar1;
}


#undef DAT_10005000
#define DAT_10005000 (*(uint *)(((uintptr_t)pf_module_state + 0x1424U)))
#undef DAT_10006000
#define DAT_10006000 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2424U)))
#undef DAT_1000609c
#define DAT_1000609c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x24c0U)))
#undef DAT_100060a0
#define DAT_100060a0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x24c4U)))
#undef DAT_100060b4
#define DAT_100060b4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x24d8U)))
#undef DAT_100060b6
#define DAT_100060b6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x24daU)))
#undef DAT_100060c4
#define DAT_100060c4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x24e8U)))
#define uStack_38 (*(ulong *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100037c7
 */

ulong recovered_100037c7(uint param_1,uint param_2,long param_3,uint param_4,int param_5)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined7 extraout_var = 0;
  undefined7 extraout_var_00 = 0;
  undefined7 extraout_var_01 = 0;
  uint uVar5;
  long *plVar6;
  bool bVar7;

  if (((param_4 != 0) && (param_3 != 0)) && (param_1 < DAT_10005000)) {
    uVar1 = (ulong)param_1;
    lVar2 = uVar1 * 0x7000;
    if (param_4 <= (&DAT_1000609c)[uVar1 * 0x1c00] - param_2 &&
        param_2 <= (uint)(&DAT_1000609c)[uVar1 * 0x1c00]) {
      plVar6 = (long *)(&DAT_10006000 + lVar2);
      if ((&DAT_100060c4)[uVar1 * 0x1c00] != 0) {
        recovered_1000322a((long)plVar6);
        uStack_38 = 0x100000000;
        do {
          bVar7 = param_4 == 0;
          param_4 = param_4 - 1;
          if (bVar7) {
LAB_10003990:
            *(undefined4 *)(&DAT_100060a0 + lVar2) = 0;
            return uStack_38 >> 0x20;
          }
          uVar5 = (uint)(param_5 == 1);
          uVar3 = recovered_100039ad(plVar6,param_2,param_3,uVar5);
          if ((int)uVar3 == 0) {
            if ((((((&DAT_100060c4)[uVar1 * 0x1c00] != 0) && (*plVar6 != 0)) &&
                 ((uVar4 = recovered_10002a59(plVar6,6), (int)uVar4 != 0 &&
                  ((uVar4 = recovered_10002b8a((int *)*plVar6,10), (int)uVar4 != 0 &&
                   (uVar4 = recovered_10002a59(plVar6,2), (int)uVar4 != 0)))))) &&
                (uVar4 = recovered_10002b8a((int *)*plVar6,2000), (int)uVar4 != 0)) &&
               (((bVar7 = recovered_10002bb2(plVar6), (int)CONCAT71(extraout_var,bVar7) != 0 &&
                 (uVar4 = recovered_10002c33(plVar6,(uint)(byte)(&DAT_100060b4)[lVar2]),
                 (int)uVar4 != 0)) &&
                (bVar7 = recovered_10002c86(plVar6), (int)CONCAT71(extraout_var_00,bVar7) != 0)))) {
              (&DAT_100060b6)[lVar2] = 1;
              uVar3 = recovered_100039ad(plVar6,param_2,param_3,(uint)(param_5 == 1));
              if ((int)uVar3 != 0) goto LAB_1000392e;
            }
            recovered_10003b4a(plVar6,param_2,uVar5);
            uStack_38 = 0;
            goto LAB_10003990;
          }
LAB_1000392e:
          param_2 = param_2 + 1;
          param_3 = param_3 + 0x200;
        } while( true );
      }
      do {
        if (param_4 == 0) {
          return 1;
        }
        uVar5 = 0x10;
        if (param_4 < 0x10) {
          uVar5 = param_4;
        }
        bVar7 = recovered_1000324b(plVar6,param_5,param_2,param_3,(ulong)uVar5);
        param_2 = param_2 + uVar5;
        param_4 = param_4 - uVar5;
        param_3 = param_3 + (ulong)(uVar5 << 9);
      } while ((int)CONCAT71(extraout_var_01,bVar7) != 0);
    }
  }
  return 0;
}

#undef DAT_10005000
#undef DAT_10006000
#undef DAT_1000609c
#undef DAT_100060a0
#undef DAT_100060b4
#undef DAT_100060b6
#undef DAT_100060c4
#undef uStack_38

#define uStack_38 (*(undefined8 *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100039ad
 */

ulong recovered_100039ad(long *param_1,uint param_2,long param_3,int param_4)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  ushort uVar1;
  uint uVar2;
  ulong in_RAX;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;

  uVar4 = 0;
  if (((((param_1 != (long *)0x0) && (param_2 < 0x10000000)) && (param_3 != 0)) &&
      ((((*(int *)((long)param_1 + 0xc4) != 0 &&
         (uStack_38 = in_RAX, uVar3 = recovered_10002a59(param_1,2), (int)uVar3 != 0)) &&
        ((uVar3 = recovered_10002c33(param_1,param_2 >> 0x18 | (uint)*(byte *)((long)param_1 + 0xb4)
                                    ), (int)uVar3 != 0 &&
         ((uVar2 = recovered_10002fa9(param_1,2,1,1), uVar2 != 0 &&
          (uVar2 = recovered_10002fa9(param_1,3,1,param_2), uVar2 != 0)))))) &&
       (uVar2 = recovered_10002fa9(param_1,4,1,param_2 >> 8), uVar2 != 0)))) &&
     (((uVar2 = recovered_10002fa9(param_1,5,1,param_2 >> 0x10), uVar2 != 0 &&
       (uVar3 = recovered_10002d1e(param_1,(uint)(param_4 != 0) << 4 | 0x20), (int)uVar3 != 0)) &&
      (uVar3 = recovered_10002d60(param_1,8,0x21), (int)uVar3 != 0)))) {
    for (lVar5 = 0; uVar4 = uStack_38, lVar5 != 0x100; lVar5 = lVar5 + 1) {
      uStack_38 = uStack_38 & 0xffffffff;
      if (param_4 == 0) {
        uVar3 = recovered_10002de9(param_1,0,2,(undefined4 *)((long)&uStack_38 + 4));
        if ((int)uVar3 == 0) goto LAB_10003b35;
        *(undefined2 *)(param_3 + lVar5 * 2) = PF_PART2(uStack_38, 4);
      }
      else {
        uVar1 = *(ushort *)(param_3 + lVar5 * 2);
        PF_PART4(uStack_38, 0) = (undefined4)uVar4;
        uStack_38 = (ulong)CONCAT24(uVar1,(undefined4)uStack_38);
        uVar2 = recovered_10002fa9(param_1,0,2,(uint)uVar1);
        if (uVar2 == 0) goto LAB_10003b35;
      }
    }
    uVar3 = recovered_10002b8a((int *)*param_1,1);
    if ((int)uVar3 == 0) {
LAB_10003b35:
      uVar4 = 0;
    }
    else {
      uVar4 = recovered_10002e4a(param_1);
      uVar4 = uVar4 & 0xffffffff;
    }
  }
  return uVar4;
}

#undef uStack_38

#undef str_10003cce
#define str_10003cce (*(char (*)[1])(((uintptr_t)pf_module_state + 0xf2U)))
#undef str_10003ce8
#define str_10003ce8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x10cU)))
#define local_e8 (*(undefined1 (*)[232])(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003b4a
 */

void recovered_10003b4a(long *param_1,uint param_2,int param_3)

{
  unsigned char pf_stack_frame[288] __attribute__((aligned(16))) = {0};

  char *pcVar1;

  if ((((param_1 != (long *)0x0) && (*param_1 != 0)) && (*(int *)((long)param_1 + 0x94) != 0)) &&
     (*(int *)((long)param_1 + 0xd4) == 0)) {
    *(undefined4 *)((long)param_1 + 0xd4) = 1;
    pcVar1 = str_10003cce;
    if (param_3 == 0) {
      pcVar1 = str_10003ce8;
    }
    recovered_10001ef9(local_e8,0xc0,pcVar1);
    recovered_10002133((long)local_e8,0xc0,(ulong)param_2);
    recovered_1000210c((int *)*param_1,local_e8);
  }
  return;
}

#undef str_10003cce
#undef str_10003ce8
#undef local_e8

void *memset(void *p,int v,size_t n){volatile unsigned char *b=p;while(n--)*b++=(unsigned char)v;return p;}
void __bzero(void *p,size_t n){volatile unsigned char *b=p;while(n--)*b++=0;}
void bzero(void *p,size_t n){__bzero(p,n);}
