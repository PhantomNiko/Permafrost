/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_10004000
#define DAT_10004000 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xd5dU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000468
 */

void * recovered_10000468(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return &DAT_10004000;
}

#undef DAT_10004000

#undef DAT_100032cc
#define DAT_100032cc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x29U)))
#undef DAT_10005000
#define DAT_10005000 (*(uint *)(((uintptr_t)pf_module_state + 0x1d5dU)))
#undef DAT_10005004
#define DAT_10005004 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1d61U)))
#undef DAT_10005008
#define DAT_10005008 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1d65U)))
#undef DAT_1000500c
#define DAT_1000500c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1d69U)))
#undef DAT_10005010
#define DAT_10005010 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1d6dU)))
#undef DAT_10005014
#define DAT_10005014 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1d71U)))
#undef DAT_10005018
#define DAT_10005018 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1d75U)))
#undef DAT_100051a0
#define DAT_100051a0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1efdU)))
#undef DAT_100051a4
#define DAT_100051a4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1f01U)))
#undef DAT_100051a8
#define DAT_100051a8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1f05U)))
#undef _DAT_10005010
#define _DAT_10005010 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1d6dU)))
#undef str_100032cd
#define str_100032cd (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2aU)))
#undef str_100032da
#define str_100032da (*(char (*)[1])(((uintptr_t)pf_module_state + 0x37U)))
#undef str_100032e9
#define str_100032e9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x46U)))
#define local_478 (*(byte (*)[1144])(pf_stack_frame + 24))
#define local_46c (*(char *)(pf_stack_frame + 36))
#define local_6c (*(byte (*)[108])(pf_stack_frame + 1060))
#define local_40 (*(uint *)(pf_stack_frame + 1104))
#define local_3c (*(uint *)(pf_stack_frame + 1108))
#define local_38 (*(uint *)(pf_stack_frame + 1112))
#define local_34 (*(uint *)(pf_stack_frame + 1116))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000475
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint recovered_10000475(void *api)

{
  unsigned char pf_stack_frame[1200] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  bool bVar10;
  bool bVar11;

  if (api == (void *)0x0) {
    return 0;
  }
  if (((*(int *)api == 0x54584b57) && (*(int *)((long)api + 4) == 1100000)) &&
     (0xf7 < *(uint *)((long)api + 8))) {
    DAT_10005000 = 0;
    DAT_10005004 = 0;
    DAT_10005008 = 0;
    DAT_1000500c = 0;
    _DAT_10005010 = 0;
    DAT_10005014 = 0;
    DAT_10005018 = 0;
    recovered_10000767(((uintptr_t)pf_module_state+0x1d7dU),0x20);
    if (((*(int *)api == 0x54584b57) && (0x5f < *(uint *)((long)api + 8))) &&
       (*(int *)((long)api + 0x5c) != 0)) {
      iVar9 = 0;
      for (uVar8 = 0; uVar8 != 8; uVar8 = uVar8 + 1) {
        local_34 = uVar8 & 0xff;
        local_38 = uVar8;
        for (uVar7 = 0; uVar7 != 0x20; uVar7 = uVar7 + 1) {
          local_40 = uVar7 & 0xff;
          iVar1 = recovered_10001b53(api,local_34,local_40,0,local_478);
          if (iVar1 != 0) {
            uVar3 = recovered_10000782(api,local_478);
            iVar9 = (int)uVar3 + iVar9;
            if (local_46c < '\0') {
              local_3c = uVar7;
              for (iVar1 = -7; iVar1 != 0; iVar1 = iVar1 + 1) {
                iVar2 = recovered_10001b53(api,local_34,local_40,iVar1 + 8U & 0xff,local_6c);
                if (iVar2 != 0) {
                  uVar3 = recovered_10000782(api,local_6c);
                  iVar9 = iVar9 + (int)uVar3;
                }
              }
              uVar8 = local_38;
              uVar7 = local_3c;
            }
          }
        }
      }
      if (DAT_10005000 != 0 && iVar9 != 0) {
        iVar1 = 0;
        iVar9 = 0;
        bVar6 = 0;
        for (lVar4 = 0; (ulong)DAT_10005000 * 0x700 != lVar4; lVar4 = lVar4 + 0x700) {
          iVar1 = (iVar1 + 1) - (uint)(*(int *)((long)&DAT_100051a0 + lVar4) == 0);
          bVar10 = *(int *)((long)&DAT_100051a4 + lVar4) != 0;
          bVar5 = bVar6 | 2;
          if (!bVar10) {
            bVar5 = bVar6;
          }
          bVar11 = *(int *)((long)&DAT_100051a8 + lVar4) != 0;
          bVar6 = bVar5 | bVar11;
          iVar9 = iVar9 + (uint)(bVar11 || bVar10);
        }
        recovered_10001ab9(local_478,0x400,&DAT_100032cc);
        if (((code *)(ulong)*(uint *)((long)api + 0xc) != (code *)0x0) &&
           (iVar2 = (*(code *)(ulong)*(uint *)((long)api + 0xc))
                              (&DAT_100032cc,str_100032cd,local_478), iVar2 != 0)) {
          bVar10 = true;
          if ((iVar9 != 0) &&
             ((bVar6 != 0 && ((code *)(ulong)*(uint *)((long)api + 0x20) != (code *)0x0)))) {
            iVar9 = (*(code *)(ulong)*(uint *)((long)api + 0x20))
                              (recovered_10001acd,bVar6,str_100032da);
            bVar10 = iVar9 == 0;
          }
          bVar11 = true;
          if ((((iVar1 != 0) && (*(int *)api == 0x54584b57)) && (0xa7 < *(uint *)((long)api + 8)))
             && ((code *)(ulong)*(uint *)((long)api + 0xa4) != (code *)0x0)) {
            iVar9 = (*(code *)(ulong)*(uint *)((long)api + 0xa4))(recovered_10001b2b,3,str_100032e9)
            ;
            bVar11 = iVar9 == 0;
          }
          if (!(bool)(bVar10 & bVar11)) {
            if ((code *)(ulong)*(uint *)((long)api + 0xc) == (code *)0x0) {
              return 1;
            }
            (*(code *)(ulong)*(uint *)((long)api + 0xc))(&DAT_100032cc,str_100032cd,local_478);
            return 1;
          }
        }
      }
    }
    recovered_10001a7d();
  }
  return 0;
}

#undef DAT_100032cc
#undef DAT_10005000
#undef DAT_10005004
#undef DAT_10005008
#undef DAT_1000500c
#undef DAT_10005010
#undef DAT_10005014
#undef DAT_10005018
#undef DAT_100051a0
#undef DAT_100051a4
#undef DAT_100051a8
#undef _DAT_10005010
#undef str_100032cd
#undef str_100032da
#undef str_100032e9
#undef local_478
#undef local_46c
#undef local_6c
#undef local_40
#undef local_3c
#undef local_38
#undef local_34

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000767
 */

void recovered_10000767(long param_1,long param_2)

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


#undef DAT_100032cc
#define DAT_100032cc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x29U)))
#undef DAT_100033bb
#define DAT_100033bb (*(uint8_t *)(((uintptr_t)pf_module_state + 0x118U)))
#undef DAT_100033bd
#define DAT_100033bd (*(uint8_t *)(((uintptr_t)pf_module_state + 0x11aU)))
#undef DAT_100033bf
#define DAT_100033bf (*(uint8_t *)(((uintptr_t)pf_module_state + 0x11cU)))
#undef DAT_100033c1
#define DAT_100033c1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x11eU)))
#undef DAT_100033c6
#define DAT_100033c6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x123U)))
#undef DAT_100033c9
#define DAT_100033c9 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x126U)))
#undef DAT_100033cb
#define DAT_100033cb (*(uint8_t *)(((uintptr_t)pf_module_state + 0x128U)))
#undef DAT_10005000
#define DAT_10005000 (*(uint *)(((uintptr_t)pf_module_state + 0x1d5dU)))
#undef DAT_10005100
#define DAT_10005100 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1e5dU)))
#undef DAT_10005192
#define DAT_10005192 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1eefU)))
#undef DAT_10005193
#define DAT_10005193 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1ef0U)))
#undef DAT_10005194
#define DAT_10005194 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1ef1U)))
#undef DAT_10005196
#define DAT_10005196 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1ef3U)))
#undef DAT_10005198
#define DAT_10005198 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1ef5U)))
#undef str_10003325
#define str_10003325 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x82U)))
#undef str_10003333
#define str_10003333 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x90U)))
#undef str_1000333c
#define str_1000333c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x99U)))
#undef str_1000334f
#define str_1000334f (*(char (*)[1])(((uintptr_t)pf_module_state + 0xacU)))
#undef str_10003360
#define str_10003360 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xbdU)))
#undef str_10003373
#define str_10003373 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xd0U)))
#undef str_10003384
#define str_10003384 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xe1U)))
#undef str_10003396
#define str_10003396 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xf3U)))
#undef str_100033a8
#define str_100033a8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x105U)))
#define local_908 (*(char (*)[2312])(pf_stack_frame + 24))
#define local_508 (*(undefined8 *)(pf_stack_frame + 1048))
#define local_100 (*(long * *)(pf_stack_frame + 2080))
#define local_f8 (*(uint (*)[62])(pf_stack_frame + 2088))
#define local_98 (*(long * *)(pf_stack_frame + 2184))
#define local_90 (*(long * *)(pf_stack_frame + 2192))
#define local_88 (*(ulong *)(pf_stack_frame + 2200))
#define local_7c (*(int *)(pf_stack_frame + 2212))
#define local_78 (*(undefined4 *)(pf_stack_frame + 2216))
#define local_74 (*(undefined4 *)(pf_stack_frame + 2220))
#define local_70 (*(undefined4 *)(pf_stack_frame + 2224))
#define local_6c (*(int *)(pf_stack_frame + 2228))
#define local_68 (*(uint *)(pf_stack_frame + 2232))
#define local_64 (*(uint *)(pf_stack_frame + 2236))
#define local_60 (*(uint *)(pf_stack_frame + 2240))
#define local_5c (*(int *)(pf_stack_frame + 2244))
#define local_58 (*(uint *)(pf_stack_frame + 2248))
#define local_54 (*(uint *)(pf_stack_frame + 2252))
#define local_50 (*(long * *)(pf_stack_frame + 2256))
#define local_44 (*(uint *)(pf_stack_frame + 2268))
#define local_40 (*(int *)(pf_stack_frame + 2272))
#define local_3c (*(uint *)(pf_stack_frame + 2276))
#define local_38 (*(long * *)(pf_stack_frame + 2280))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000782
 */

undefined8 recovered_10000782(int *param_1,byte *param_2)

{
  unsigned char pf_stack_frame[2368] __attribute__((aligned(16))) = {0};

  long *plVar1;
  uint *puVar2;
  int *piVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  ushort uVar7;
  long *plVar8;
  bool bVar9;
  int iVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined7 extraout_var = 0;
  undefined7 extraout_var_00 = 0;
  undefined7 extraout_var_01 = 0;
  undefined7 extraout_var_02 = 0;
  undefined2 uVar13;
  uint uVar14;
  char *pcVar15;
  ulong uVar16;
  uint uVar17;
  uint uVar18;
  long lVar19;

  if (param_2 == (byte *)0x0) {
    return 0;
  }
  if (*(short *)(param_2 + 4) != 0x1af4) {
    return 0;
  }
  if (*(short *)(param_2 + 6) == 0x1012) {
    if (3 < DAT_10005000) {
      return 0;
    }
  }
  else if (3 < DAT_10005000 || *(short *)(param_2 + 6) != 0x1052) {
    return 0;
  }
  uVar11 = (ulong)DAT_10005000;
  lVar19 = uVar11 * 0x700;
  local_38 = &DAT_10005100 + uVar11 * 0xe0;
  recovered_10000767((long)local_38,0x700);
  recovered_10001ab9(local_908,0x400,&DAT_100032cc);
  local_68 = 0;
  local_78 = 0;
  local_64 = 0;
  local_74 = 0;
  local_60 = 0;
  local_70 = 0;
  local_6c = 0;
  (&DAT_10005100)[uVar11 * 0xe0] = param_1;
  bVar4 = *param_2;
  (&DAT_10005192)[lVar19] = bVar4;
  bVar5 = param_2[1];
  (&DAT_10005193)[lVar19] = bVar5;
  bVar6 = param_2[2];
  (&DAT_10005194)[lVar19] = bVar6;
  local_508 = (ulong)PF_PART4(local_508, 4) << 0x20;
  *(undefined2 *)(&DAT_10005196 + lVar19) = *(undefined2 *)(param_2 + 0x10);
  *(undefined4 *)(&DAT_10005198 + lVar19) = 1;
  pcVar15 = str_10003384;
  if ((((param_1 != (int *)0x0) && (*param_1 == 0x54584b57)) && (99 < (uint)param_1[2])) &&
     (param_1[0x18] != 0)) {
    uVar12 = recovered_10001d05(param_1,bVar4,bVar5,bVar6,4,2,(long)&local_508);
    if ((int)uVar12 == 0) {
      pcVar15 = str_10003396;
    }
    else {
      uVar18 = 0;
      for (lVar19 = 5; lVar19 != 0xb; lVar19 = lVar19 + 1) {
        uVar14 = uVar18 | 1;
        uVar17 = uVar18 | 2;
        if (*(uint *)(param_2 + lVar19 * 4) == 0) {
          uVar17 = uVar18;
        }
        uVar18 = uVar17;
        if ((*(uint *)(param_2 + lVar19 * 4) & 1) != 0) {
          uVar18 = uVar14;
        }
      }
      lVar19 = recovered_10002264(((uintptr_t)pf_module_state+0x6fU));
      uVar17 = uVar18 | 4;
      if (lVar19 == 0) {
        uVar17 = uVar18;
      }
      if ((param_2[8] == 6) && (param_2[9] != 0)) {
        uVar17 = uVar17 | 2;
      }
      local_f8[0] = (uint)local_508 | uVar17;
      uVar12 = recovered_1000222a(param_1,*param_2,param_2[1],param_2[2],local_f8[0]);
      if ((int)uVar12 != 0) {
        recovered_10001d05(param_1,*param_2,param_2[1],param_2[2],4,2,(long)local_f8);
        if ((uVar17 & ~local_f8[0]) == 0) {
          plVar1 = local_38 + 1;
          local_f8[0] = 0;
          recovered_10000767((long)plVar1,0x80);
          uVar12 = recovered_10001d05(param_1,*param_2,param_2[1],param_2[2],0x34,1,(long)local_f8);
          if ((int)uVar12 != 0) {
            uVar18 = 0;
            local_50 = plVar1;
            while ((uVar18 < 0x20 && (local_f8[0] - 0x40 < 0xb0))) {
              local_5c = 0;
              local_58 = 0;
              local_40 = 0;
              local_3c = 0;
              local_54 = 0;
              local_44 = 0;
              uVar12 = recovered_10001d05(param_1,*param_2,param_2[1],param_2[2],(short)local_f8[0],
                                          1,(long)&local_5c);
              if (((int)uVar12 == 0) ||
                 (uVar12 = recovered_10001d05(param_1,*param_2,param_2[1],param_2[2],
                                              (short)local_f8[0] + 1,1,(long)&local_58),
                 (int)uVar12 == 0)) break;
              if ((((local_5c == 9) &&
                   (uVar12 = recovered_10001d05(param_1,*param_2,param_2[1],param_2[2],
                                                (short)local_f8[0] + 3,1,(long)&local_40),
                   (int)uVar12 != 0)) &&
                  (uVar12 = recovered_10001d05(param_1,*param_2,param_2[1],param_2[2],
                                               (short)local_f8[0] + 4,1,(long)&local_3c),
                  (int)uVar12 != 0)) &&
                 ((uVar12 = recovered_10001d05(param_1,*param_2,param_2[1],param_2[2],
                                               (short)local_f8[0] + 8,4,(long)&local_54),
                  (int)uVar12 != 0 &&
                  (uVar12 = recovered_10001d05(param_1,*param_2,param_2[1],param_2[2],
                                               (short)local_f8[0] + 0xc,4,(long)&local_44),
                  (int)uVar12 != 0)))) {
                local_508 = 0;
                *(int *)((long)local_38 + 0x44) = *(int *)((long)local_38 + 0x44) + 1;
                if ((local_44 < 0x38 || local_40 != 1) ||
                   (uVar12 = recovered_10002284(param_1,param_2,local_3c,local_54,local_44,
                                                &local_508), (int)uVar12 == 0)) {
                  if ((local_44 < 2 || local_40 != 2) ||
                     (uVar12 = recovered_10002284(param_1,param_2,local_3c,local_54,local_44,
                                                  &local_508), (int)uVar12 == 0)) {
                    if ((local_40 == 3) &&
                       (uVar12 = recovered_10002284(param_1,param_2,local_3c,local_54,local_44,
                                                    &local_508), (int)uVar12 != 0)) {
                      local_38[3] = local_508;
                      *(uint *)((long)local_38 + 0x34) = local_3c;
                    }
                    else if ((local_40 == 4) &&
                            (uVar12 = recovered_10002284(param_1,param_2,local_3c,local_54,local_44,
                                                         &local_508), (int)uVar12 != 0)) {
                      local_38[4] = local_508;
                      *(uint *)(local_38 + 5) = local_44;
                      *(uint *)(local_38 + 7) = local_3c;
                    }
                  }
                  else {
                    local_7c = 0;
                    local_38[2] = local_508;
                    *(uint *)(local_38 + 6) = local_3c;
                    uVar12 = recovered_10001d05(param_1,*param_2,param_2[1],param_2[2],
                                                (short)local_f8[0] + 0x10,4,(long)&local_7c);
                    if (local_7c == 0 || (int)uVar12 == 0) {
                      local_38[2] = 0;
                    }
                    else {
                      *(int *)((long)local_38 + 0x3c) = local_7c;
                      *(uint *)(local_38 + 8) = local_44;
                    }
                  }
                }
                else {
                  local_38[1] = local_508;
                  *(uint *)((long)local_38 + 0x2c) = local_3c;
                }
              }
              if ((local_58 == 0) || (local_58 == local_f8[0])) break;
              uVar18 = uVar18 + 1;
              local_f8[0] = local_58;
            }
            plVar1 = local_38;
            if (*local_50 != 0) {
              local_508 = local_508 & 0xffffffff00000000;
              local_f8[0] = 0;
              recovered_10002453(param_1,*local_50,0x14,(long)(local_38 + 0xb));
              *(undefined4 *)(plVar1 + 0xc) = 1;
              bVar9 = recovered_1000247e(param_1,plVar1[1]);
              if ((int)CONCAT71(extraout_var,bVar9) != 0) {
                *(undefined4 *)(local_38 + 0xc) = 2;
                uVar12 = recovered_10002537(param_1,local_38[1],0x14,1);
                if ((((int)uVar12 != 0) &&
                    (uVar12 = recovered_10002453(param_1,*local_50,0x14,(long)local_f8),
                    (int)uVar12 != 0)) && ((local_f8[0] & 0xc1) == 1)) {
                  *(undefined4 *)(local_38 + 0xc) = 3;
                  uVar12 = recovered_10002537(param_1,local_38[1],0x14,3);
                  if ((((int)uVar12 != 0) &&
                      (uVar12 = recovered_10002453(param_1,*local_50,0x14,(long)local_f8),
                      (int)uVar12 != 0)) && ((local_f8[0] & 0xc3) == 3)) {
                    *(undefined4 *)(local_38 + 0xc) = 4;
                    uVar12 = recovered_10002555(param_1,local_38[1],0,0);
                    if ((((int)uVar12 != 0) &&
                        (uVar12 = recovered_10002573(param_1,local_38[1],
                                                     (undefined4 *)(local_38 + 9)), (int)uVar12 != 0
                        )) && (uVar12 = recovered_10002555(param_1,*local_50,0,1), (int)uVar12 != 0)
                       ) {
                      puVar2 = (uint *)((long)local_38 + 0x4c);
                      uVar12 = recovered_10002573(param_1,local_38[1],puVar2);
                      if (((int)uVar12 != 0) && (uVar18 = *puVar2, (uVar18 & 1) != 0)) {
                        *(undefined4 *)(local_38 + 10) = 0;
                        *(uint *)((long)local_38 + 0x54) = uVar18 & 3;
                        *(undefined4 *)(local_38 + 0xc) = 5;
                        uVar12 = recovered_10002555(param_1,local_38[1],8,0);
                        if (((int)uVar12 != 0) &&
                           (((uVar12 = recovered_10002555(param_1,local_38[1],0xc,(int)local_38[10])
                             , (int)uVar12 != 0 &&
                             (uVar12 = recovered_10002555(param_1,*local_50,8,1), (int)uVar12 != 0))
                            && (uVar12 = recovered_10002555(param_1,local_38[1],0xc,
                                                            *(undefined4 *)((long)local_38 + 0x54)),
                               (int)uVar12 != 0)))) {
                          recovered_100025c1(param_1);
                          local_f8[0] = 0xb;
                          *(undefined4 *)(local_38 + 0xc) = 6;
                          uVar12 = recovered_10002537(param_1,local_38[1],0x14,0xb);
                          if ((int)uVar12 != 0) {
                            puVar2 = (uint *)((long)local_38 + 0x5c);
                            uVar12 = recovered_10002453(param_1,local_38[1],0x14,(long)puVar2);
                            if (((int)uVar12 != 0) && ((*puVar2 & 200) == 8)) {
                              *(undefined4 *)(local_38 + 0xc) = 7;
                              uVar12 = recovered_100020eb(param_1,local_38[1],0x12,
                                                          (undefined4 *)((long)local_38 + 100));
                              if ((((int)uVar12 != 0) &&
                                  ((uVar12 = recovered_10002453(param_1,local_38[1],0x15,
                                                                (long)(local_38 + 0x10)),
                                   (int)uVar12 != 0 &&
                                   (uVar12 = recovered_10002083(param_1,*local_50,0x16,0),
                                   (int)uVar12 != 0)))) &&
                                 (uVar12 = recovered_100020eb(param_1,local_38[1],0x18,
                                                              (undefined4 *)(local_38 + 0xd)),
                                 (int)uVar12 != 0)) {
                                piVar3 = (int *)((long)local_38 + 0x6c);
                                uVar12 = recovered_100020eb(param_1,local_38[1],0x1c,piVar3);
                                if ((int)uVar12 != 0) {
                                  uVar12 = recovered_100020eb(param_1,*local_50,0x1e,
                                                              (undefined4 *)&local_508);
                                  if ((int)uVar12 != 0) {
                                    *(uint *)(local_38 + 0xe) = (uint)local_508;
                                    uVar11 = local_38[2];
                                    if (((uVar11 != 0) &&
                                        ((ulong)*(uint *)((long)local_38 + 0x3c) != 0)) &&
                                       (1 < (ulong)*(uint *)(local_38 + 8))) {
                                      uVar16 = (ulong)*(uint *)((long)local_38 + 0x3c) *
                                               (local_508 & 0xffffffff);
                                      if ((!CARRY8(uVar11,uVar16)) &&
                                         (uVar16 <= (ulong)*(uint *)(local_38 + 8) - 2)) {
                                        local_38[0xf] = uVar11 + uVar16;
                                      }
                                    }
                                  }
                                  *(undefined4 *)(local_38 + 0xc) = 8;
                                  *(uint *)((long)local_38 + 0x9c) =
                                       (uint)((*(byte *)((long)local_38 + 0x54) & 2) == 0) << 0x1e |
                                       (uint)param_2[2] << 8 | (uint)*param_2 << 0x10 |
                                       (uint)param_2[1] << 0xb | 0x80000000;
                                  uVar18 = *(uint *)(local_38 + 0xd) - 1;
                                  if (((uVar18 < (*(uint *)(local_38 + 0xd) ^ uVar18)) &&
                                      (*piVar3 == 0)) && (local_38[0xf] != 0)) {
                                    local_f8[0] = 0;
                                    local_5c = 0;
                                    local_58 = 0;
                                    local_40 = 0;
                                    local_3c = 0;
                                    uVar11 = 1;
                                    iVar10 = recovered_100026a9(local_38,0x11,1,(long)&local_508,
                                                                local_f8);
                                    if (iVar10 != 0) {
                                      while ((uVar18 = (uint)uVar11, uVar18 != 0x100 &&
                                             ((local_f8[0] <= (uint)(uVar11 >> 3) ||
                                              (((byte)local_908[(uVar11 >> 3) + 0x400] >>
                                                (uVar18 & 7) & 1) == 0))))) {
                                        uVar11 = (ulong)(uVar18 + 1);
                                      }
                                      *(uint *)(local_38 + 0x14) = (uint)(uVar18 < 0x100);
                                    }
                                    iVar10 = recovered_100026a9(local_38,0x11,2,(long)&local_508,
                                                                local_f8);
                                    if (iVar10 == 0) {
                                      uVar18 = 0;
                                    }
                                    else {
                                      uVar18 = (uint)((~(byte)local_508 & 3) == 0 &&
                                                     local_f8[0] != 0);
                                    }
                                    *(uint *)((long)local_38 + 0xa4) = uVar18;
                                    iVar10 = recovered_100026a9(local_38,0x11,3,(long)&local_508,
                                                                local_f8);
                                    if ((((((iVar10 != 0) && (local_f8[0] != 0)) &&
                                          ((~(byte)local_508 & 3) == 0)) &&
                                         ((iVar10 = recovered_100026a9(local_38,0x12,0,
                                                                       (long)&local_508,local_f8),
                                          iVar10 != 0 &&
                                          (uVar12 = recovered_1000287c((undefined4 *)&local_508,
                                                                       local_f8[0],&local_5c,
                                                                       &local_40), (int)uVar12 != 0)
                                          ))) && (iVar10 = recovered_100026a9(local_38,0x12,1,
                                                                              (long)&local_508,
                                                                              local_f8), iVar10 != 0
                                                 )) &&
                                       (uVar12 = recovered_1000287c((undefined4 *)&local_508,
                                                                    local_f8[0],(int *)&local_58,
                                                                    &local_3c), (int)uVar12 != 0)) {
                                      *(undefined4 *)(local_38 + 0x15) = 1;
                                      *(int *)((long)local_38 + 0xac) = local_5c;
                                      *(uint *)(local_38 + 0x16) = local_58;
                                      *(int *)((long)local_38 + 0xb4) = local_40;
                                      *(uint *)(local_38 + 0x17) = local_3c;
                                    }
                                    plVar1 = local_38;
                                    recovered_10002537((int *)*local_38,local_38[4],0,0);
                                    recovered_10002537((int *)*plVar1,plVar1[4],1,0);
                                    plVar8 = local_38;
                                    if ((((int)plVar1[0x14] != 0) ||
                                        (*(int *)((long)local_38 + 0xa4) != 0)) ||
                                       ((int)local_38[0x15] != 0)) {
                                      uVar13 = 0x20;
                                      if (*(uint *)(local_38 + 0xd) < 0x20) {
                                        uVar13 = (undefined2)*(uint *)(local_38 + 0xd);
                                      }
                                      *(undefined2 *)((long)local_38 + 0x8c) = uVar13;
                                      plVar1 = local_38 + 0x20;
                                      recovered_10000767((long)plVar1,0x200);
                                      local_98 = plVar8 + 0x60;
                                      recovered_10000767((long)local_98,0x46);
                                      local_90 = plVar8 + 0x80;
                                      recovered_10000767((long)local_90,0x106);
                                      local_100 = plVar8 + 0xc0;
                                      recovered_10000767((long)local_100,0x100);
                                      uVar12 = recovered_1000201c(param_1,*(undefined4 *)
                                                                           ((long)plVar8 + 0x9c),
                                                                  (long)plVar1,0x200,(long)&local_68
                                                                  ,&local_78);
                                      if ((((((int)uVar12 != 0) &&
                                            (uVar12 = recovered_1000201c(param_1,*(undefined4 *)
                                                                                  ((long)local_38 +
                                                                                  0x9c),
                                                                         (long)local_98,0x46,
                                                                         (long)&local_64,&local_74),
                                            (int)uVar12 != 0)) &&
                                           (uVar12 = recovered_1000201c(param_1,*(undefined4 *)
                                                                                 ((long)local_38 +
                                                                                 0x9c),
                                                                        (long)local_90,0x106,
                                                                        (long)&local_60,&local_70),
                                           (int)uVar12 != 0)) &&
                                          (((local_68 & 0xf) == 0 && ((local_64 & 1) == 0)))) &&
                                         ((local_60 & 3) == 0)) {
                                        lVar19 = 0x600;
                                        for (local_88 = 0; plVar8 = local_38,
                                            uVar7 = *(ushort *)((long)local_38 + 0x8c),
                                            local_88 < uVar7; local_88 = local_88 + 1) {
                                          local_508 = local_508 & 0xffffffff00000000;
                                          local_f8[0] = 0;
                                          uVar12 = recovered_1000201c(param_1,*(undefined4 *)
                                                                               ((long)local_38 +
                                                                               0x9c),
                                                                      (long)local_38 + lVar19,8,
                                                                      (long)&local_508,local_f8);
                                          if ((int)uVar12 == 0) goto LAB_10000d4e;
                                          *(char *)((long)local_38 + lVar19 * 2 + -0xb00) =
                                               (char)local_508;
                                          *(char *)((long)local_38 + lVar19 * 2 + -0xaff) =
                                               (char)(local_508 >> 8);
                                          *(char *)((long)local_38 + lVar19 * 2 + -0xafe) =
                                               (char)(local_508 >> 0x10);
                                          *(char *)((long)local_38 + lVar19 * 2 + -0xafd) =
                                               (char)(local_508 >> 0x18);
                                          *(char *)((long)local_38 + lVar19 * 2 + -0xafc) =
                                               (char)local_f8[0];
                                          *(char *)((long)local_38 + lVar19 * 2 + -0xafb) =
                                               (char)(local_f8[0] >> 8);
                                          *(char *)((long)local_38 + lVar19 * 2 + -0xafa) =
                                               (char)(local_f8[0] >> 0x10);
                                          *(char *)((long)local_38 + lVar19 * 2 + -0xaf9) =
                                               (char)(local_f8[0] >> 0x18);
                                          *(undefined4 *)((long)local_38 + lVar19 * 2 + -0xaf8) = 8;
                                          *(undefined2 *)((long)local_38 + lVar19 * 2 + -0xaf4) = 2;
                                          *(char *)((long)local_38 + local_88 * 2 + 0x304) =
                                               (char)local_88;
                                          *(char *)((long)local_38 + local_88 * 2 + 0x305) =
                                               (char)(local_88 >> 8);
                                          lVar19 = lVar19 + 8;
                                        }
                                        *(ushort *)((long)local_38 + 0x8e) = uVar7;
                                        *(char *)((long)local_38 + 0x302) = (char)uVar7;
                                        *(char *)((long)local_38 + 0x303) = (char)(uVar7 >> 8);
                                        recovered_10002058(param_1,*(undefined4 *)
                                                                    ((long)local_38 + 0x9c),plVar1,
                                                           0x200);
                                        recovered_10002058(param_1,*(undefined4 *)
                                                                    ((long)plVar8 + 0x9c),local_98,
                                                           0x46);
                                        recovered_10002058(param_1,*(undefined4 *)
                                                                    ((long)plVar8 + 0x9c),local_90,
                                                           0x106);
                                        recovered_10002058(param_1,*(undefined4 *)
                                                                    ((long)plVar8 + 0x9c),local_100,
                                                           0x100);
                                        uVar12 = recovered_10002083(param_1,plVar8[1],0x16,0);
                                        if (((((int)uVar12 != 0) &&
                                             (uVar12 = recovered_10002083(param_1,local_38[1],0x18,
                                                                          (uint)*(ushort *)
                                                                                 ((long)local_38 +
                                                                                 0x8c)),
                                             (int)uVar12 != 0)) &&
                                            ((bVar9 = recovered_100020a1(param_1,*local_50,0x20,
                                                                         local_68,local_78),
                                             (int)CONCAT71(extraout_var_00,bVar9) != 0 &&
                                             (((bVar9 = recovered_100020a1(param_1,*local_50,0x28,
                                                                           local_64,local_74),
                                               (int)CONCAT71(extraout_var_01,bVar9) != 0 &&
                                               (bVar9 = recovered_100020a1(param_1,*local_50,0x30,
                                                                           local_60,local_70),
                                               (int)CONCAT71(extraout_var_02,bVar9) != 0)) &&
                                              (uVar12 = recovered_10002083(param_1,*local_50,0x1c,1)
                                              , (int)uVar12 != 0)))))) &&
                                           ((uVar12 = recovered_100020eb(param_1,*local_50,0x1c,
                                                                         &local_6c),
                                            (int)uVar12 != 0 && (local_6c != 0)))) {
                                          lVar19 = *local_50;
                                          local_508 = local_508 & 0xffffffff00000000;
                                          if ((lVar19 != 0) &&
                                             (((uVar12 = recovered_10002453(param_1,lVar19,0x14,
                                                                            (long)&local_508),
                                               (int)uVar12 != 0 && (((uint)local_508 & 200) == 8))
                                              && ((uVar12 = recovered_10002537(param_1,lVar19,0x14,
                                                                               (uint)local_508 | 4),
                                                  (int)uVar12 != 0 &&
                                                  (((uVar12 = recovered_10002453(param_1,lVar19,0x14
                                                                                 ,(long)&local_508),
                                                    (int)uVar12 != 0 &&
                                                    (((uint)local_508 & 0xc4) == 4)) &&
                                                   (uVar12 = recovered_10002083(param_1,local_38[0xf
                                                  ],0,0), plVar1 = local_38, (int)uVar12 != 0)))))))
                                             ) {
                                            *(undefined4 *)(local_38 + 0x11) = 1;
                                            recovered_10001ab9(local_908,0x400,&DAT_100032cc);
                                            if ((int)plVar1[0x14] != 0) {
                                              recovered_1000213d((long)local_908,0x400,str_10003333)
                                              ;
                                            }
                                            if (*(int *)((long)local_38 + 0xa4) != 0) {
                                              pcVar15 = str_1000333c;
                                              if (local_908[0] == '\0') {
                                                pcVar15 = str_1000334f;
                                              }
                                              recovered_1000213d((long)local_908,0x400,pcVar15);
                                            }
                                            if ((int)local_38[0x15] != 0) {
                                              pcVar15 = str_10003360;
                                              if (local_908[0] == '\0') {
                                                pcVar15 = str_10003373;
                                              }
                                              recovered_1000213d((long)local_908,0x400,pcVar15);
                                            }
                                            DAT_10005000 = DAT_10005000 + 1;
                                            local_38 = (long *)recovered_10001d52((long)param_2);
                                            recovered_10001ab9((undefined1 *)local_f8,0x60,
                                                               str_10003325);
                                            recovered_1000213d((long)local_f8,0x60,&DAT_100033bb);
                                            recovered_10002930((long)local_f8,0x60,(uint)*param_2,2)
                                            ;
                                            recovered_1000213d((long)local_f8,0x60,&DAT_100033bd);
                                            recovered_10002930((long)local_f8,0x60,(uint)param_2[1],
                                                               2);
                                            recovered_1000213d((long)local_f8,0x60,&DAT_100033bf);
                                            recovered_1000298d((long)local_f8,0x60,(ulong)param_2[2]
                                                              );
                                            recovered_10001ab9((undefined1 *)&local_508,0x400,
                                                               &DAT_100033c1);
                                            recovered_10002930((long)&local_508,0x400,(uint)*param_2
                                                               ,2);
                                            recovered_1000213d((long)&local_508,0x400,&DAT_100033bd)
                                            ;
                                            recovered_10002930((long)&local_508,0x400,
                                                               (uint)param_2[1],2);
                                            recovered_1000213d((long)&local_508,0x400,&DAT_100033bf)
                                            ;
                                            recovered_1000298d((long)&local_508,0x400,
                                                               (ulong)param_2[2]);
                                            recovered_1000213d((long)&local_508,0x400,&DAT_100033c6)
                                            ;
                                            recovered_10002930((long)&local_508,0x400,
                                                               (uint)*(ushort *)(param_2 + 4),4);
                                            recovered_1000213d((long)&local_508,0x400,&DAT_100033bd)
                                            ;
                                            recovered_10002930((long)&local_508,0x400,
                                                               (uint)*(ushort *)(param_2 + 6),4);
                                            recovered_1000213d((long)&local_508,0x400,&DAT_100033c9)
                                            ;
                                            if (local_908[0] != '\0') {
                                              recovered_1000213d((long)&local_508,0x400,
                                                                 &DAT_100033cb);
                                              recovered_1000213d((long)&local_508,0x400,local_908);
                                            }
                                            if ((code *)(ulong)(uint)param_1[3] != (code *)0x0) {
                                              (*(code *)(ulong)(uint)param_1[3])
                                                        (local_f8,local_38,&local_508);
                                            }
                                            return 1;
                                          }
                                        }
                                      }
                                    }
                                  }
                                  goto LAB_10000d4e;
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
              plVar1 = local_50;
              uVar12 = recovered_10002453(param_1,*local_50,0x14,(long)local_f8);
              if (local_f8[0] != 0 && (int)uVar12 != 0) {
                recovered_10002537(param_1,*plVar1,0x14,local_f8[0] | 0x80);
              }
            }
          }
        }
        goto LAB_10000d4e;
      }
      pcVar15 = str_100033a8;
    }
  }
  recovered_1000213d((long)local_908,0x400,pcVar15);
LAB_10000d4e:
  recovered_10002191(local_38);
  return 0;
}

#undef DAT_100032cc
#undef DAT_100033bb
#undef DAT_100033bd
#undef DAT_100033bf
#undef DAT_100033c1
#undef DAT_100033c6
#undef DAT_100033c9
#undef DAT_100033cb
#undef DAT_10005000
#undef DAT_10005100
#undef DAT_10005192
#undef DAT_10005193
#undef DAT_10005194
#undef DAT_10005196
#undef DAT_10005198
#undef str_10003325
#undef str_10003333
#undef str_1000333c
#undef str_1000334f
#undef str_10003360
#undef str_10003373
#undef str_10003384
#undef str_10003396
#undef str_100033a8
#undef local_908
#undef local_508
#undef local_100
#undef local_f8
#undef local_98
#undef local_90
#undef local_88
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
#undef local_44
#undef local_40
#undef local_3c
#undef local_38

#undef DAT_10005000
#define DAT_10005000 (*(uint *)(((uintptr_t)pf_module_state + 0x1d5dU)))
#undef DAT_10005100
#define DAT_10005100 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1e5dU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001a7d
 */

void recovered_10001a7d(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long *plVar1;
  ulong uVar2;

  plVar1 = &DAT_10005100;
  for (uVar2 = 0; uVar2 < DAT_10005000; uVar2 = uVar2 + 1) {
    recovered_10002191(plVar1);
    plVar1 = plVar1 + 0xe0;
  }
  DAT_10005000 = 0;
  return;
}

#undef DAT_10005000
#undef DAT_10005100

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001ab9
 */

void recovered_10001ab9(undefined1 *param_1,ulong param_2,char *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == (undefined1 *)0x0) {
    return;
  }
  *param_1 = 0;
  recovered_1000213d((long)param_1,param_2,param_3);
  return;
}


#undef DAT_10005014
#define DAT_10005014 (*(char *)(((uintptr_t)pf_module_state + 0x1d71U)))
#undef DAT_10005018
#define DAT_10005018 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1d75U)))
#undef DAT_10005020
#define DAT_10005020 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1d7dU)))
#undef DAT_10005028
#define DAT_10005028 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1d85U)))
#undef DAT_10005030
#define DAT_10005030 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1d8dU)))
#undef DAT_10005038
#define DAT_10005038 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1d95U)))
#undef _DAT_10005020
#define _DAT_10005020 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1d7dU)))
#undef _DAT_10005028
#define _DAT_10005028 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1d85U)))
#undef _DAT_10005030
#define _DAT_10005030 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1d8dU)))
#undef _DAT_10005038
#define _DAT_10005038 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1d95U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001acd
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool recovered_10001acd(undefined8 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  bool bVar2;

  if (param_1 == (undefined8 *)0x0) {
    return false;
  }
  recovered_10002aa4();
  recovered_10002ac5();
  uVar1 = _DAT_10005028;
  bVar2 = DAT_10005014 == '\x01';
  if (bVar2) {
    *param_1 = _DAT_10005020;
    param_1[1] = uVar1;
    uVar1 = _DAT_10005038;
    param_1[2] = _DAT_10005030;
    param_1[3] = uVar1;
    _DAT_10005030 = 0;
    DAT_10005014 = '\0';
  }
  DAT_10005018 = 0;
  return bVar2;
}

#undef DAT_10005014
#undef DAT_10005018
#undef DAT_10005020
#undef DAT_10005028
#undef DAT_10005030
#undef DAT_10005038
#undef _DAT_10005020
#undef _DAT_10005028
#undef _DAT_10005030
#undef _DAT_10005038

#undef DAT_10005018
#define DAT_10005018 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1d75U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001b2b
 */

uint recovered_10001b2b(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  recovered_10002aa4();
  uVar1 = recovered_10003278();
  if (uVar1 == 0) {
    recovered_10002ac5();
    uVar1 = recovered_10003278();
  }
  DAT_10005018 = 0;
  return uVar1;
}

#undef DAT_10005018

#define local_34 (*(undefined4 *)(pf_stack_frame + 44))
#define local_50 (*(undefined4 *)(pf_stack_frame + 16))
#define local_4c (*(undefined4 *)(pf_stack_frame + 20))
#define local_48 (*(undefined4 *)(pf_stack_frame + 24))
#define local_44 (*(undefined4 *)(pf_stack_frame + 28))
#define local_40 (*(undefined4 *)(pf_stack_frame + 32))
#define local_3c (*(undefined4 *)(pf_stack_frame + 36))
#define local_38 (*(undefined4 *)(pf_stack_frame + 40))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001b53
 */

undefined4
recovered_10001b53(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
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
    uVar2 = recovered_10001d05(param_1,uVar5,uVar4,uVar3,0,4,(long)&local_3c);
    if ((((int)uVar2 != 0) && ((short)local_3c != 0)) && ((short)local_3c != -1)) {
      uVar2 = recovered_10001d05(param_1,uVar5,uVar4,uVar3,8,4,(long)&local_50);
      if ((int)uVar2 != 0) {
        uVar2 = recovered_10001d05(param_1,uVar5,uVar4,uVar3,4,4,(long)(param_5 + 0x10));
        if ((int)uVar2 == 0) {
          *(undefined4 *)(param_5 + 0x10) = 0;
        }
        uVar2 = recovered_10001d05(param_1,uVar5,uVar4,uVar3,0xc,4,(long)&local_38);
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
          uVar2 = recovered_10001d05(param_1,uVar5,uVar4,uVar3,(short)lVar6 + 0x10,4,(long)&local_4c
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

#undef local_34
#undef local_50
#undef local_4c
#undef local_48
#undef local_44
#undef local_40
#undef local_3c
#undef local_38

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001d05
 */

undefined8
recovered_10001d05(int *param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4,
                  undefined2 param_5,undefined4 param_6,long param_7)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if (((param_1 != (int *)0x0) && (*param_1 == 0x54584b57)) && (0x5f < (uint)param_1[2])) {
    if (param_7 != 0 && (code *)(ulong)(uint)param_1[0x17] != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x10001d4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*(code *)(ulong)(uint)param_1[0x17])(param_2,param_3,param_4,param_5,param_6,param_7)
      ;
      return uVar1;
    }
  }
  return 0;
}


#undef str_100033ce
#define str_100033ce (*(char (*)[1])(((uintptr_t)pf_module_state + 0x12bU)))
#undef str_100033d9
#define str_100033d9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x136U)))
#undef str_100033e8
#define str_100033e8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x145U)))
#undef str_100033f9
#define str_100033f9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x156U)))
#undef str_1000340c
#define str_1000340c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x169U)))
#undef str_1000341f
#define str_1000341f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x17cU)))
#undef str_1000342f
#define str_1000342f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x18cU)))
#undef str_1000343e
#define str_1000343e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x19bU)))
#undef str_1000344d
#define str_1000344d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1aaU)))
#undef str_1000345e
#define str_1000345e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1bbU)))
#undef str_10003469
#define str_10003469 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1c6U)))
#undef str_10003475
#define str_10003475 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1d2U)))
#undef str_1000347f
#define str_1000347f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1dcU)))
#undef str_10003488
#define str_10003488 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1e5U)))
#undef str_10003493
#define str_10003493 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1f0U)))
#undef str_1000349c
#define str_1000349c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1f9U)))
#undef str_100034a4
#define str_100034a4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x201U)))
#undef str_100034ad
#define str_100034ad (*(char (*)[1])(((uintptr_t)pf_module_state + 0x20aU)))
#undef str_100034b4
#define str_100034b4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x211U)))
#undef str_100034c7
#define str_100034c7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x224U)))
#undef str_100034da
#define str_100034da (*(char (*)[1])(((uintptr_t)pf_module_state + 0x237U)))
#undef str_100034ed
#define str_100034ed (*(char (*)[1])(((uintptr_t)pf_module_state + 0x24aU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001d52
 */

char * recovered_10001d52(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  short sVar1;
  char *pcVar2;

  pcVar2 = str_100033ce;
  if (param_1 == 0) {
    return pcVar2;
  }
  sVar1 = *(short *)(param_1 + 4);
  if (sVar1 == 0x1013) {
    if ((*(ushort *)(param_1 + 6) & 0xfffe) == 0xb8) {
      return str_10003488;
    }
LAB_10001f07:
    switch((uintptr_t)(*(undefined1 *)(param_1 + 8))) {
    case 1:
      pcVar2 = str_100034da;
      break;
    case 2:
      pcVar2 = str_100034c7;
      break;
    case 3:
      pcVar2 = str_100034b4;
      break;
    case 4:
      pcVar2 = str_100034ed;
      break;
    case 0xc:
      if (*(char *)(param_1 + 9) == '\x03') {
LAB_10001f4c:
        pcVar2 = recovered_10002a3e((uint)*(byte *)(param_1 + 10));
        return pcVar2;
      }
    }
  }
  else {
    if (sVar1 == 0x1033) {
      if (*(short *)(param_1 + 6) == 0x194) {
        return str_1000347f;
      }
      goto LAB_10001f07;
    }
    if (sVar1 == 0x106b) {
      if (*(short *)(param_1 + 6) == 0x21) {
LAB_10001e96:
        return str_100034ad;
      }
      goto LAB_10001f07;
    }
    if (sVar1 == 0x108e) {
      if (*(short *)(param_1 + 6) == 0x2bad) goto LAB_10001e96;
      goto LAB_10001f07;
    }
    if (sVar1 == 0x10ec) {
      if (*(short *)(param_1 + 6) == -0x7fd7) {
        return str_100034a4;
      }
      goto LAB_10001f07;
    }
    if (sVar1 == 0x1234) {
      if (*(short *)(param_1 + 6) == 0x1111) {
        return str_10003493;
      }
      goto LAB_10001f07;
    }
    if (sVar1 == -0x7f7a) {
      if (*(short *)(param_1 + 6) == 0x100e) {
        return str_10003469;
      }
      if (*(char *)(param_1 + 8) == '\f') {
        if (*(char *)(param_1 + 9) == '\x03') goto LAB_10001f4c;
      }
      else if ((*(char *)(param_1 + 8) == '\x04') && (*(char *)(param_1 + 9) == '\x03')) {
        return str_10003475;
      }
      goto LAB_10001f07;
    }
    if (sVar1 == 0x1b36) {
      if (*(short *)(param_1 + 6) == 0x100) {
        return str_1000349c;
      }
      goto LAB_10001f07;
    }
    if (sVar1 != 0x1af4) goto LAB_10001f07;
    pcVar2 = str_100033d9;
    switch((uintptr_t)(*(undefined2 *)(param_1 + 6))) {
    case 0x1041:
      break;
    case 0x1042:
switchD_10001df6_caseD_1042:
      pcVar2 = str_100033e8;
      break;
    case 0x1043:
switchD_10001df6_caseD_1043:
      pcVar2 = str_1000340c;
      break;
    case 0x1044:
switchD_10001df6_caseD_1044:
      pcVar2 = str_1000342f;
      break;
    case 0x1045:
switchD_10001df6_caseD_1045:
      pcVar2 = str_100033f9;
      break;
    case 0x1046:
    case 0x1047:
    case 0x1049:
    case 0x104a:
    case 0x104b:
    case 0x104c:
    case 0x104d:
    case 0x104e:
    case 0x104f:
    case 0x1051:
switchD_10001df6_caseD_1046:
      pcVar2 = str_1000345e;
      break;
    case 0x1048:
switchD_10001df6_caseD_1048:
      pcVar2 = str_1000341f;
      break;
    case 0x1050:
      pcVar2 = str_1000343e;
      break;
    case 0x1052:
      pcVar2 = str_1000344d;
      break;
    default:
      switch((uintptr_t)(*(undefined2 *)(param_1 + 6))) {
      case 0x1000:
        break;
      case 0x1001:
        goto switchD_10001df6_caseD_1042;
      case 0x1002:
        goto switchD_10001df6_caseD_1045;
      case 0x1003:
        goto switchD_10001df6_caseD_1043;
      case 0x1004:
        goto switchD_10001df6_caseD_1048;
      case 0x1005:
        goto switchD_10001df6_caseD_1044;
      default:
        goto switchD_10001df6_caseD_1046;
      }
    }
  }
  return pcVar2;
}

#undef str_100033ce
#undef str_100033d9
#undef str_100033e8
#undef str_100033f9
#undef str_1000340c
#undef str_1000341f
#undef str_1000342f
#undef str_1000343e
#undef str_1000344d
#undef str_1000345e
#undef str_10003469
#undef str_10003475
#undef str_1000347f
#undef str_10003488
#undef str_10003493
#undef str_1000349c
#undef str_100034a4
#undef str_100034ad
#undef str_100034b4
#undef str_100034c7
#undef str_100034da
#undef str_100034ed

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000201c
 */

undefined8
recovered_1000201c(int *param_1,undefined4 param_2,long param_3,undefined4 param_4,long param_5,
                  undefined8 param_6)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if ((((param_1 == (int *)0x0) || (*param_1 != 0x54584b57)) || ((uint)param_1[2] < 0x74)) ||
     (((param_5 == 0 || (param_3 == 0)) || (param_1[0x1c] == 0)))) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x10002056. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)(ulong)(uint)param_1[0x1c])(param_2,param_3,param_4,param_5,param_6);
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002058
 */

void recovered_10002058(int *param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if ((((param_1 == (int *)0x0) || (*param_1 != 0x54584b57)) || ((uint)param_1[2] < 0x78)) ||
     ((code *)(ulong)(uint)param_1[0x1d] == (code *)0x0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x1000207f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulong)(uint)param_1[0x1d])(param_2,param_3,param_4);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002083
 */

undefined8 recovered_10002083(int *param_1,long param_2,ulong param_3,undefined4 param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if (param_2 == 0) {
    return 0;
  }
  uVar1 = recovered_10002656(param_1,(param_3 & 0xffffffff) + param_2,2,param_4);
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100020a1
 */

bool recovered_100020a1(int *param_1,long param_2,ulong param_3,undefined4 param_4,
                       undefined4 param_5)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  bool bVar2;

  uVar1 = recovered_10002555(param_1,param_2,param_3,param_4);
  if ((int)uVar1 == 0) {
    bVar2 = false;
  }
  else {
    uVar1 = recovered_10002555(param_1,param_2,(ulong)((int)param_3 + 4),param_5);
    bVar2 = (int)uVar1 != 0;
  }
  return bVar2;
}


#define local_1c (*(undefined4 *)(pf_stack_frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100020eb
 */

undefined8 recovered_100020eb(int *param_1,long param_2,ulong param_3,undefined4 *param_4)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  undefined8 uVar2;

  local_1c = 0;
  uVar2 = 0;
  if (param_2 != 0 && param_4 != (undefined4 *)0x0) {
    uVar1 = recovered_100025e5(param_1,(param_3 & 0xffffffff) + param_2,2,(long)&local_1c);
    if ((int)uVar1 != 0) {
      *param_4 = local_1c;
      uVar2 = 1;
    }
  }
  return uVar2;
}

#undef local_1c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000213d
 */

void recovered_1000213d(long param_1,ulong param_2,char *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  uVar1 = recovered_10002264(param_1);
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
 * Address: 0x10002191
 */

void recovered_10002191(long *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  undefined7 extraout_var = 0;
  int *piVar2;
  ushort uVar3;

  if (param_1 == (long *)0x0) {
    return;
  }
  piVar2 = (int *)*param_1;
  if (piVar2 != (int *)0x0) {
    if (param_1[1] == 0) {
      bVar1 = false;
    }
    else {
      bVar1 = recovered_1000247e(piVar2,param_1[1]);
      bVar1 = (int)CONCAT71(extraout_var,bVar1) == 0;
      piVar2 = (int *)*param_1;
      if (piVar2 == (int *)0x0) goto LAB_10002206;
    }
    if ((int)param_1[0x13] != 0) {
      uVar3 = *(ushort *)((long)param_1 + 0x96) & 0xfffb;
      if (!bVar1) {
        uVar3 = *(ushort *)((long)param_1 + 0x96);
      }
      recovered_1000222a(piVar2,*(undefined1 *)((long)param_1 + 0x92),
                         *(undefined1 *)((long)param_1 + 0x93),*(undefined1 *)((long)param_1 + 0x94)
                         ,(uint)uVar3);
    }
  }
LAB_10002206:
  *(undefined4 *)(param_1 + 0x13) = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000222a
 */

undefined8
recovered_1000222a(int *param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4,
                  undefined4 param_5)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if ((((param_1 == (int *)0x0) || (*param_1 != 0x54584b57)) || ((uint)param_1[2] < 100)) ||
     ((code *)(ulong)(uint)param_1[0x18] == (code *)0x0)) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x1000225e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)(ulong)(uint)param_1[0x18])(param_2,param_3,param_4,4,2,param_5);
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002264
 */

long recovered_10002264(long param_1)

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


#define local_40 (*(int *)(pf_stack_frame + 16))
#define local_3c (*(uint *)(pf_stack_frame + 20))
#define local_38 (*(uint *)(pf_stack_frame + 24))
#define local_34 (*(uint *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002284
 */

undefined8
recovered_10002284(int *param_1,undefined1 *param_2,uint param_3,uint param_4,uint param_5,
                  ulong *param_6)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;

  iVar4 = param_5 + param_4;
  if (CARRY4(param_5,param_4)) {
    return 0;
  }
  if (param_5 == 0) {
    return 0;
  }
  if (5 < param_3) {
    return 0;
  }
  if (param_6 == (ulong *)0x0) {
    return 0;
  }
  local_40 = 0;
  if ((param_3 != 0) && ((*(uint *)(param_2 + (ulong)(param_3 - 1) * 4 + 0x14) & 7) == 4)) {
    return 0;
  }
  local_38 = *(uint *)(param_2 + (ulong)param_3 * 4 + 0x14);
  if ((local_38 & 1) != 0 || local_38 == 0) {
    return 0;
  }
  local_34 = param_4;
  recovered_10001d05(param_1,*param_2,param_2[1],param_2[2],(short)param_3 * 4 + 0x10,4,
                     (long)&local_38);
  iVar2 = 0;
  if ((local_38 & 7) == 4) {
    if (4 < param_3) {
      return 0;
    }
    local_40 = *(int *)(param_2 + (ulong)param_3 * 4 + 0x18);
    recovered_10001d05(param_1,*param_2,param_2[1],param_2[2],(short)param_3 * 4 + 0x14,4,
                       (long)&local_40);
    iVar2 = local_40;
  }
  uVar3 = 0xfffffffc;
  if ((local_38 & 1) == 0) {
    uVar3 = 0xfffffff0;
  }
  uVar3 = uVar3 & local_38;
  if (iVar4 == 0) {
    return 0;
  }
  if (uVar3 == 0 && iVar2 == 0) {
    return 0;
  }
  *param_6 = 0;
  local_3c = 0;
  if ((param_1 != (int *)0x0) && (*param_1 == 0x54584b57)) {
    if (((uint)param_1[2] < 0xbc) || ((code *)(ulong)(uint)param_1[0x2e] == (code *)0x0)) {
      if (((0x67 < (uint)param_1[2] && iVar2 == 0) &&
          ((code *)(ulong)(uint)param_1[0x19] != (code *)0x0)) &&
         (iVar4 = (*(code *)(ulong)(uint)param_1[0x19])(uVar3,0,iVar4,&local_3c), iVar4 != 0)) {
        uVar1 = (ulong)local_3c;
        goto LAB_10002430;
      }
    }
    else {
      iVar4 = (*(code *)(ulong)(uint)param_1[0x2e])(uVar3,iVar2,iVar4);
      if (iVar4 != 0) {
        uVar1 = *param_6;
LAB_10002430:
        *param_6 = local_34 + uVar1;
        return 1;
      }
    }
  }
  return 0;
}

#undef local_40
#undef local_3c
#undef local_38
#undef local_34

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002453
 */

undefined8 recovered_10002453(int *param_1,long param_2,ulong param_3,long param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if (param_2 == 0 || param_4 == 0) {
    return 0;
  }
  uVar1 = recovered_100025e5(param_1,(param_3 & 0xffffffff) + param_2,1,param_4);
  return uVar1;
}


#define local_34 (*(int *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000247e
 */

bool recovered_1000247e(int *param_1,long param_2)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  uint uVar2;
  bool bVar3;

  local_34 = 0xff;
  bVar3 = false;
  if (param_2 != 0 && param_1 != (int *)0x0) {
    bVar3 = false;
    uVar1 = recovered_10002537(param_1,param_2,0x14,0);
    if ((int)uVar1 != 0) {
      recovered_100025c1(param_1);
      for (uVar2 = 0; uVar2 != 1000; uVar2 = uVar2 + 1) {
        uVar1 = recovered_10002453(param_1,param_2,0x14,(long)&local_34);
        if (((int)uVar1 != 0) && (local_34 == 0)) break;
        if (((*param_1 == 0x54584b57) && (0x33 < (uint)param_1[2])) &&
           ((code *)(ulong)(uint)param_1[0xc] != (code *)0x0)) {
          (*(code *)(ulong)(uint)param_1[0xc])(10);
        }
      }
      bVar3 = uVar2 < 1000;
    }
  }
  return bVar3;
}

#undef local_34

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002537
 */

undefined8 recovered_10002537(int *param_1,long param_2,ulong param_3,undefined4 param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if (param_2 == 0) {
    return 0;
  }
  uVar1 = recovered_10002656(param_1,(param_3 & 0xffffffff) + param_2,1,param_4);
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002555
 */

undefined8 recovered_10002555(int *param_1,long param_2,ulong param_3,undefined4 param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if (param_2 == 0) {
    return 0;
  }
  uVar1 = recovered_10002656(param_1,(param_3 & 0xffffffff) + param_2,4,param_4);
  return uVar1;
}


#define local_1c (*(undefined4 *)(pf_stack_frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002573
 */

undefined8 recovered_10002573(int *param_1,long param_2,undefined4 *param_3)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  undefined8 uVar2;

  local_1c = 0;
  uVar2 = 0;
  if (param_2 != 0 && param_3 != (undefined4 *)0x0) {
    uVar1 = recovered_100025e5(param_1,param_2 + 4,4,(long)&local_1c);
    if ((int)uVar1 != 0) {
      *param_3 = local_1c;
      uVar2 = 1;
    }
  }
  return uVar2;
}

#undef local_1c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100025c1
 */

void recovered_100025c1(int *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if ((((param_1 == (int *)0x0) || (*param_1 != 0x54584b57)) || ((uint)param_1[2] < 0x7c)) ||
     ((code *)(ulong)(uint)param_1[0x1e] == (code *)0x0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x100025e1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulong)(uint)param_1[0x1e])();
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100025e5
 */

undefined8 recovered_100025e5(int *param_1,ulong param_2,undefined4 param_3,long param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if ((param_1 != (int *)0x0) && (*param_1 == 0x54584b57)) {
    if (0xbf < (uint)param_1[2]) {
      if (param_4 != 0 && (code *)(ulong)(uint)param_1[0x2f] != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x10002621. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar1 = (*(code *)(ulong)(uint)param_1[0x2f])(param_2,param_3,param_4);
        return uVar1;
      }
    }
    if ((param_2 >> 0x20 == 0) && (0x6b < (uint)param_1[2])) {
      if (param_4 != 0 && (code *)(ulong)(uint)param_1[0x1a] != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x10002650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar1 = (*(code *)(ulong)(uint)param_1[0x1a])(param_2 & 0xffffffff,param_3,param_4);
        return uVar1;
      }
    }
  }
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002656
 */

undefined8 recovered_10002656(int *param_1,ulong param_2,undefined4 param_3,undefined4 param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if ((param_1 != (int *)0x0) && (*param_1 == 0x54584b57)) {
    if ((0xc3 < (uint)param_1[2]) && ((code *)(ulong)(uint)param_1[0x30] != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x10002683. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*(code *)(ulong)(uint)param_1[0x30])(param_2,param_3,param_4);
      return uVar1;
    }
    if (((param_2 >> 0x20 == 0) && (0x6f < (uint)param_1[2])) &&
       ((code *)(ulong)(uint)param_1[0x1b] != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x100026a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*(code *)(ulong)(uint)param_1[0x1b])(param_2 & 0xffffffff,param_3,param_4);
      return uVar1;
    }
  }
  return 0;
}


#define local_40 (*(int *)(pf_stack_frame + 32))
#define local_3c (*(uint *)(pf_stack_frame + 36))
#define local_38 (*(undefined4 *)(pf_stack_frame + 40))
#define local_34 (*(undefined4 *)(pf_stack_frame + 44))
#define local_44 (*(int *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100026a9
 */

undefined4
recovered_100026a9(long *param_1,undefined4 param_2,undefined4 param_3,long param_4,
                  undefined4 *param_5)

{
  unsigned char pf_stack_frame[128] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;

  if (param_5 != (undefined4 *)0x0) {
    *param_5 = 0;
  }
  uVar1 = 0;
  if ((((param_4 != 0) && (*param_1 != 0)) && (param_1[4] != 0)) && (8 < *(uint *)(param_1 + 5))) {
    uVar3 = *(uint *)(param_1 + 5) - 8;
    iVar4 = 0;
    do {
      if (iVar4 == 4) {
        return 0;
      }
      local_44 = 0;
      local_40 = 0;
      local_3c = 0;
      recovered_10000767(param_4,0x80);
      uVar2 = recovered_10002453((int *)*param_1,param_1[1],0x15,(long)&local_44);
      if ((int)uVar2 == 0) {
        return 0;
      }
      local_34 = 0;
      uVar2 = recovered_10002537((int *)*param_1,param_1[4],0,param_2);
      if ((int)uVar2 == 0) {
        return local_34;
      }
      uVar2 = recovered_10002537((int *)*param_1,param_1[4],1,param_3);
      if ((int)uVar2 == 0) {
        return local_34;
      }
      recovered_100025c1((int *)*param_1);
      uVar2 = recovered_10002453((int *)*param_1,param_1[4],2,(long)&local_3c);
      if ((int)uVar2 == 0) {
        return local_34;
      }
      uVar6 = local_3c;
      if (uVar3 < local_3c) {
        uVar6 = uVar3;
      }
      uVar7 = (ulong)uVar6;
      if (0x7f < uVar6) {
        uVar7 = 0x80;
      }
      for (uVar5 = 0; uVar7 != uVar5; uVar5 = uVar5 + 1) {
        local_38 = 0;
        uVar2 = recovered_10002453((int *)*param_1,param_1[4],(ulong)((int)uVar5 + 8),
                                   (long)&local_38);
        if ((int)uVar2 == 0) {
          return local_34;
        }
        *(undefined1 *)(param_4 + uVar5) = (undefined1)local_38;
      }
      recovered_100025c1((int *)*param_1);
      uVar2 = recovered_10002453((int *)*param_1,param_1[1],0x15,(long)&local_40);
      if ((int)uVar2 == 0) {
        return local_34;
      }
      if (local_44 == local_40 && param_5 != (undefined4 *)0x0) {
        *param_5 = (int)uVar7;
        return 1;
      }
      iVar4 = iVar4 + 1;
    } while (local_44 != local_40);
    uVar1 = 1;
  }
  return uVar1;
}

#undef local_40
#undef local_3c
#undef local_38
#undef local_34
#undef local_44

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000287c
 */

undefined8 recovered_1000287c(undefined4 *param_1,uint param_2,int *param_3,undefined4 *param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  undefined8 uVar3;

  uVar3 = 0;
  if ((param_4 != (undefined4 *)0x0 && 7 < param_2) &&
      (param_3 != (int *)0x0 && param_1 != (undefined4 *)0x0)) {
    iVar1 = recovered_10002903(param_1);
    iVar2 = recovered_10002903(param_1 + 1);
    if (0xffffffff00000000 < ((long)iVar2 - (long)iVar1) - 0x100000000U) {
      *param_3 = iVar1;
      *param_4 = (int)((long)iVar2 - (long)iVar1);
      uVar3 = 1;
    }
  }
  return uVar3;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002903
 */

undefined4 recovered_10002903(undefined4 *param_1)

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


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002930
 */

void recovered_10002930(long param_1,ulong param_2,uint param_3,int param_4)

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
    recovered_10002a04(param_1,param_2,cVar4);
  }
  return;
}


#define abStack_2b (*(byte (*)[43])(pf_stack_frame + 21))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000298d
 */

void recovered_1000298d(long param_1,ulong param_2,ulong param_3)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  ulong uVar2;

  if ((int)param_3 == 0) {
    recovered_10002a04(param_1,param_2,0x30);
    return;
  }
  for (uVar2 = 0; (uVar1 = param_3 & 0xffffffff, (int)param_3 != 0 && (uVar2 < 10));
      uVar2 = uVar2 + 1) {
    param_3 = uVar1 / 10;
    abStack_2b[uVar2 + 1] = (byte)(uVar1 % 10) | 0x30;
  }
  while (uVar2 != 0) {
    recovered_10002a04(param_1,param_2,abStack_2b[uVar2]);
    uVar2 = uVar2 - 1;
  }
  return;
}

#undef abStack_2b

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002a04
 */

void recovered_10002a04(long param_1,ulong param_2,undefined1 param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;

  lVar1 = recovered_10002264(param_1);
  if ((param_1 != 0) && (lVar1 + 1U < param_2)) {
    *(undefined1 *)(param_1 + lVar1) = param_3;
    *(undefined1 *)(param_1 + 1 + lVar1) = 0;
  }
  return;
}


#undef DAT_10003503
#define DAT_10003503 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x260U)))
#undef DAT_10003508
#define DAT_10003508 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x265U)))
#undef DAT_1000350d
#define DAT_1000350d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x26aU)))
#undef DAT_10003512
#define DAT_10003512 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x26fU)))
#undef str_10003517
#define str_10003517 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x274U)))
#undef str_10003522
#define str_10003522 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x27fU)))
#undef str_1000352b
#define str_1000352b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x288U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002a3e
 */

char * recovered_10002a3e(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;

  if (param_1 == 0) {
    pcVar1 = &DAT_10003503;
  }
  else if (param_1 == 0xfe) {
    pcVar1 = str_10003522;
  }
  else if (param_1 == 0x20) {
    pcVar1 = &DAT_1000350d;
  }
  else if (param_1 == 0x30) {
    pcVar1 = &DAT_10003512;
  }
  else if (param_1 == 0x80) {
    pcVar1 = str_10003517;
  }
  else if (param_1 == 0x10) {
    pcVar1 = &DAT_10003508;
  }
  else {
    pcVar1 = str_1000352b;
  }
  return pcVar1;
}

#undef DAT_10003503
#undef DAT_10003508
#undef DAT_1000350d
#undef DAT_10003512
#undef str_10003517
#undef str_10003522
#undef str_1000352b

#undef DAT_10005018
#define DAT_10005018 (*(int *)(((uintptr_t)pf_module_state + 0x1d75U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002aa4
 */

/* WARNING: Removing unreachable block (ram,0x10002ac1) */

void recovered_10002aa4(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = DAT_10005018;
  { __typeof__(DAT_10005018) pf_atomic_old = __atomic_exchange_n(&(DAT_10005018),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 == 0) {
    return;
  }
  do {
  } while( true );
}

#undef DAT_10005018

#undef DAT_100032b0
#define DAT_100032b0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xdU)))
#undef DAT_10005000
#define DAT_10005000 (*(uint *)(((uintptr_t)pf_module_state + 0x1d5dU)))
#undef DAT_10005004
#define DAT_10005004 (*(uint *)(((uintptr_t)pf_module_state + 0x1d61U)))
#undef DAT_10005008
#define DAT_10005008 (*(uint *)(((uintptr_t)pf_module_state + 0x1d65U)))
#undef DAT_1000500c
#define DAT_1000500c (*(uint *)(((uintptr_t)pf_module_state + 0x1d69U)))
#undef DAT_10005010
#define DAT_10005010 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1d6dU)))
#undef DAT_10005014
#define DAT_10005014 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1d71U)))
#undef DAT_10005020
#define DAT_10005020 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1d7dU)))
#undef DAT_10005024
#define DAT_10005024 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1d81U)))
#undef DAT_10005028
#define DAT_10005028 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1d85U)))
#undef DAT_1000502c
#define DAT_1000502c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1d89U)))
#undef DAT_10005030
#define DAT_10005030 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1d8dU)))
#undef DAT_10005034
#define DAT_10005034 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1d91U)))
#undef DAT_10005038
#define DAT_10005038 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1d95U)))
#undef DAT_1000503c
#define DAT_1000503c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1d99U)))
#undef DAT_10005100
#define DAT_10005100 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1e5dU)))
#undef DAT_10005178
#define DAT_10005178 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1ed5U)))
#undef DAT_10005188
#define DAT_10005188 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1ee5U)))
#undef DAT_1000518c
#define DAT_1000518c (*(uint16_t *)(((uintptr_t)pf_module_state + 0x1ee9U)))
#undef DAT_1000518e
#define DAT_1000518e (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1eebU)))
#undef DAT_1000519c
#define DAT_1000519c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1ef9U)))
#undef DAT_100051a0
#define DAT_100051a0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1efdU)))
#undef DAT_100051a4
#define DAT_100051a4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1f01U)))
#undef DAT_100051a8
#define DAT_100051a8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1f05U)))
#undef DAT_100051ac
#define DAT_100051ac (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1f09U)))
#undef DAT_100051b0
#define DAT_100051b0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1f0dU)))
#undef DAT_100051b4
#define DAT_100051b4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1f11U)))
#undef DAT_100051b8
#define DAT_100051b8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1f15U)))
#undef DAT_10005400
#define DAT_10005400 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x215dU)))
#undef DAT_10005402
#define DAT_10005402 (*(uint16_t *)(((uintptr_t)pf_module_state + 0x215fU)))
#undef DAT_10005404
#define DAT_10005404 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2161U)))
#undef DAT_10005500
#define DAT_10005500 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x225dU)))
#undef DAT_10005502
#define DAT_10005502 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x225fU)))
#undef DAT_10005700
#define DAT_10005700 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x245dU)))
#undef DAT_10005701
#define DAT_10005701 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x245eU)))
#undef DAT_10005702
#define DAT_10005702 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x245fU)))
#undef DAT_10005703
#define DAT_10005703 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2460U)))
#undef DAT_10006d00
#define DAT_10006d00 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3a5dU)))
#undef UNK_100032b2
#define UNK_100032b2 (*(short *)(((uintptr_t)pf_module_state + 0xfU)))
#undef _DAT_100032b0
#define _DAT_100032b0 (*(short *)(((uintptr_t)pf_module_state + 0xdU)))
#undef _DAT_10005010
#define _DAT_10005010 (*(uint *)(((uintptr_t)pf_module_state + 0x1d6dU)))
#undef _DAT_10005020
#define _DAT_10005020 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1d7dU)))
#undef _DAT_10005024
#define _DAT_10005024 (*(uint *)(((uintptr_t)pf_module_state + 0x1d81U)))
#undef _DAT_10005028
#define _DAT_10005028 (*(uint *)(((uintptr_t)pf_module_state + 0x1d85U)))
#undef _DAT_1000502c
#define _DAT_1000502c (*(uint *)(((uintptr_t)pf_module_state + 0x1d89U)))
#undef _DAT_10005038
#define _DAT_10005038 (*(uint *)(((uintptr_t)pf_module_state + 0x1d95U)))
#undef _DAT_1000503c
#define _DAT_1000503c (*(uint *)(((uintptr_t)pf_module_state + 0x1d99U)))
#undef sRam00000000100032b2
#define sRam00000000100032b2 (*(uint16_t *)(((uintptr_t)pf_module_state + 0xfU)))
#undef str_1000353a
#define str_1000353a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x297U)))
#undef str_10003545
#define str_10003545 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2a2U)))
#undef str_10003550
#define str_10003550 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2adU)))
#undef str_1000355b
#define str_1000355b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2b8U)))
#undef str_10003565
#define str_10003565 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2c2U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002ac5
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10002ac5(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined *puVar1;
  undefined1 uVar2;
  char cVar3;
  short sVar4;
  short sVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  undefined8 uVar9;
  ushort uVar10;
  uint uVar11;
  ulong uVar12;
  uint uVar13;
  uint uVar14;
  int *piVar15;
  uint uVar16;
  char *pcVar17;
  int iVar18;
  uint uVar19;
  long lVar20;
  long *plVar21;
  ushort uVar22;

  uVar12 = 0;
  do {
    if (DAT_10005000 <= uVar12) {
      return;
    }
    lVar20 = uVar12 * 0x700;
    if ((&DAT_10005188)[uVar12 * 0x1c0] != 0) {
      plVar21 = &DAT_10005100 + uVar12 * 0xe0;
      puVar1 = &DAT_10005500 + lVar20;
      recovered_10002058((int *)*plVar21,(&DAT_1000519c)[uVar12 * 0x1c0],puVar1,0x106);
      sVar4 = *(short *)(&DAT_10005502 + lVar20);
      uVar6 = *(uint *)((long)&DAT_1000518e + lVar20 + 2);
      uVar10 = (&DAT_1000518c)[uVar12 * 0x380];
      if (uVar10 < (ushort)(sVar4 - (short)uVar6)) {
LAB_10002b5b:
        recovered_10002191(plVar21);
      }
      else {
        iVar18 = 0;
        while ((short)uVar6 != sVar4) {
          uVar8 = (ulong)(ushort)((uVar6 & 0xffff) % (uint)uVar10);
          uVar6 = recovered_10002903((undefined4 *)(puVar1 + uVar8 * 8 + 4));
          iVar7 = recovered_10002903((undefined4 *)(puVar1 + uVar8 * 8 + 8));
          if (((ushort)(&DAT_1000518c)[uVar12 * 0x380] <= uVar6) || (iVar7 != 8)) goto LAB_10002b5b;
          uVar8 = (ulong)uVar6;
          recovered_10002058((int *)*plVar21,(&DAT_1000519c)[uVar12 * 0x1c0],
                             &DAT_10005700 + uVar8 * 8 + lVar20,8);
          sVar5 = CONCAT11((&DAT_10005701)[uVar8 * 8 + lVar20],(&DAT_10005700)[uVar8 * 8 + lVar20]);
          uVar2 = (&DAT_10005702)[uVar8 * 8 + lVar20];
          cVar3 = (&DAT_10005703)[uVar8 * 8 + lVar20];
          uVar10 = CONCAT11(cVar3,uVar2);
          uVar19 = (uint)uVar10;
          iVar7 = recovered_10002903((undefined4 *)(&DAT_10005700 + uVar8 * 8 + lVar20 + 4));
          uVar11 = (uint)CONCAT11(cVar3,uVar2);
          if (sVar5 == 3) {
            if ((&DAT_100051a8)[uVar12 * 0x1c0] == 0) goto LAB_10002efc;
            _DAT_10005020 = 1;
            _DAT_10005038 = (&DAT_100051b4)[uVar12 * 0x1c0];
            _DAT_1000503c = (&DAT_100051b8)[uVar12 * 0x1c0];
            if (uVar10 == 1) {
              uVar8 = (long)iVar7 - (long)(int)(&DAT_100051b0)[uVar12 * 0x1c0];
              if ((long)uVar8 < 0) {
                _DAT_1000502c = 0;
              }
              else if (_DAT_1000503c < uVar8) {
                _DAT_1000502c = _DAT_1000503c;
                if (0x7ffffffe < _DAT_1000503c) {
                  _DAT_1000502c = 0x7fffffff;
                }
              }
              else {
                if (0x7ffffffe < uVar8) {
                  uVar8 = 0x7fffffff;
                }
                _DAT_1000502c = (uint)uVar8;
              }
            }
            else if (uVar11 == 0) {
              uVar8 = (long)iVar7 - (long)(int)(&DAT_100051ac)[uVar12 * 0x1c0];
              if ((long)uVar8 < 0) {
                _DAT_10005028 = 0;
              }
              else if (_DAT_10005038 < uVar8) {
                _DAT_10005028 = _DAT_10005038;
                if (0x7ffffffe < _DAT_10005038) {
                  _DAT_10005028 = 0x7fffffff;
                }
              }
              else {
                if (0x7ffffffe < uVar8) {
                  uVar8 = 0x7fffffff;
                }
                _DAT_10005028 = (uint)uVar8;
              }
            }
LAB_10002ef5:
            DAT_10005014 = 1;
            goto LAB_10002efc;
          }
          if (sVar5 == 2) {
            if ((&DAT_100051a4)[uVar12 * 0x1c0] == 0) goto LAB_10002efc;
            _DAT_10005020 = 2;
            piVar15 = &DAT_10005030;
            if (uVar10 != 0) {
              if (uVar11 != 1) goto LAB_10002ef5;
              piVar15 = &DAT_10005034;
            }
            *piVar15 = *piVar15 + iVar7;
            goto LAB_10002ef5;
          }
          if (sVar5 != 1) {
            if ((sVar5 != 0 || uVar10 != 0) ||
               (((&DAT_100051a4)[uVar12 * 0x1c0] == 0 && ((&DAT_100051a8)[uVar12 * 0x1c0] == 0))))
            goto LAB_10002efc;
            goto LAB_10002ef5;
          }
          if ((((&DAT_100051a4)[uVar12 * 0x1c0] != 0) || ((&DAT_100051a8)[uVar12 * 0x1c0] != 0)) &&
             ((ushort)(uVar10 - 0x110) < 3)) {
            uVar11 = ((const uint[]){1U,2U,4U})[(uint)uVar10-0x110U];
            if (iVar7 == 0) {
              _DAT_10005024 = ~uVar11 & _DAT_10005024;
            }
            else {
              _DAT_10005024 = uVar11 | _DAT_10005024;
            }
            goto LAB_10002ef5;
          }
          if ((&DAT_100051a0)[uVar12 * 0x1c0] == 0) goto LAB_10002efc;
          if (((uVar10 < 0x39) && ((0x140040020000000U >> ((ulong)uVar11 & 0x3f) & 1) != 0)) ||
             ((uVar11 - 0x61 < 0x1e && ((0x30000009U >> (uVar11 - 0x61 & 0x1f) & 1) != 0)))) {
            if (uVar10 == 0x1d) {
              uVar19 = 4;
            }
            else {
              uVar19 = 1;
              if (uVar11 != 0x2a) {
                if (uVar11 == 0x7e) {
                  uVar19 = 0x80;
                }
                else if (uVar11 == 0x38) {
                  uVar19 = 0x10;
                }
                else if (uVar11 == 0x61) {
                  uVar19 = 8;
                }
                else if (uVar11 == 100) {
                  uVar19 = 0x20;
                }
                else if (uVar11 == 0x7d) {
                  uVar19 = 0x40;
                }
                else {
                  if (uVar11 != 0x36) goto LAB_10002efc;
                  uVar19 = 2;
                }
              }
            }
            if (iVar7 == 0) {
              _DAT_10005010 = ~uVar19 & _DAT_10005010;
            }
            else {
              _DAT_10005010 = uVar19 | _DAT_10005010;
            }
            uVar19 = (uint)((_DAT_10005010 & 3) != 0) * 0x10000;
            uVar11 = uVar19 + 0x20000;
            if ((_DAT_10005010 & 0xc) == 0) {
              uVar11 = uVar19;
            }
            DAT_1000500c = uVar11 + 0x40000;
            if ((_DAT_10005010 & 0xf0) == 0) {
              DAT_1000500c = uVar11;
            }
            uVar11 = DAT_1000500c | 0x80000000;
            goto LAB_10002fa1;
          }
          if (iVar7 == 0) goto LAB_10002efc;
          uVar13 = DAT_1000500c >> 0x10 & 1;
          if (uVar19 - 2 < 10) {
            pcVar17 = str_10003545;
            if (uVar13 == 0) {
              pcVar17 = str_1000353a;
            }
            uVar16 = (uint)(byte)pcVar17[uVar19 - 2];
            goto switchD_10003094_caseD_2a;
          }
          if (uVar19 - 0x10 < 10) {
            uVar8 = (ulong)(uVar19 - 0x10);
            pcVar17 = str_10003550;
LAB_10003008:
            uVar16 = (byte)pcVar17[uVar8] - 0x20 & 0xff;
            if (uVar13 == 0) {
              uVar16 = (uint)(byte)pcVar17[uVar8];
            }
switchD_10003094_caseD_2a:
            switch((uintptr_t)(uVar11)) {
            case 0x60:
              uVar11 = 0x1c;
              break;
            default:
              uVar11 = 0;
              uVar14 = uVar16;
              if (cVar3 == '\0') goto LAB_10003130;
              goto LAB_10003133;
            case 0x66:
              uVar11 = 0x47;
              break;
            case 0x67:
              uVar11 = 0x48;
              break;
            case 0x68:
              uVar11 = 0x49;
              break;
            case 0x69:
              uVar11 = 0x4b;
              break;
            case 0x6a:
              uVar11 = 0x4d;
              break;
            case 0x6b:
              uVar11 = 0x4f;
              break;
            case 0x6c:
              uVar11 = 0x50;
              break;
            case 0x6d:
              uVar11 = 0x51;
              break;
            case 0x6e:
              uVar11 = 0x52;
              break;
            case 0x6f:
              uVar11 = 0x53;
            }
            goto LAB_1000305f;
          }
          if (uVar19 - 0x1e < 9) {
            uVar8 = (ulong)(uVar19 - 0x1e);
            pcVar17 = str_1000355b;
            goto LAB_10003008;
          }
          if (uVar19 - 0x2c < 7) {
            uVar8 = (ulong)(uVar19 - 0x2c);
            pcVar17 = str_10003565;
            goto LAB_10003008;
          }
          uVar16 = 0;
          switch((uintptr_t)(uVar11)) {
          case 0x27:
            uVar14 = uVar13 ^ 0x3b;
            break;
          case 0x28:
            uVar14 = (uint)(uVar13 == 0) * 5 + 0x22;
            break;
          case 0x29:
            uVar14 = 0x7e;
            uVar11 = 0x60;
            goto LAB_1000312c;
          case 0x2a:
          case 0x2c:
          case 0x2d:
          case 0x2e:
          case 0x2f:
          case 0x30:
          case 0x31:
          case 0x32:
          case 0x36:
          case 0x37:
          case 0x38:
            goto switchD_10003094_caseD_2a;
          case 0x2b:
            uVar14 = uVar13 << 5 | 0x5c;
            break;
          case 0x33:
            uVar14 = uVar13 << 4 | 0x2c;
            break;
          case 0x34:
            uVar14 = uVar13 << 4 | 0x2e;
            break;
          case 0x35:
            uVar14 = uVar13 << 4 | 0x2f;
            break;
          case 0x39:
            uVar14 = 0x20;
            goto LAB_10003122;
          default:
            switch((uintptr_t)(uVar11)) {
            case 0xc:
              uVar14 = 0x5f;
              uVar11 = 0x2d;
              goto LAB_1000312c;
            case 0xd:
              uVar14 = 0x2b;
              uVar11 = 0x3d;
LAB_1000312c:
              if (uVar13 == 0) {
                uVar14 = uVar11;
              }
              break;
            case 0xe:
              uVar14 = 8;
              goto LAB_10003122;
            case 0xf:
              uVar14 = 9;
              goto LAB_10003122;
            case 0x10:
            case 0x11:
            case 0x12:
            case 0x13:
            case 0x14:
            case 0x15:
            case 0x16:
            case 0x17:
            case 0x18:
            case 0x19:
              goto switchD_10003094_caseD_2a;
            case 0x1a:
              uVar14 = uVar13 << 5 | 0x5b;
              break;
            case 0x1b:
              uVar14 = uVar13 << 5 | 0x5d;
              break;
            case 0x1c:
              uVar14 = 0xd;
LAB_10003122:
              break;
            default:
              uVar14 = 0x1b;
              if (uVar11 != 1) goto switchD_10003094_caseD_2a;
            }
          }
LAB_10003130:
          uVar16 = uVar14;
          uVar11 = uVar19;
LAB_10003133:
          if (uVar11 != 0 || uVar16 != 0) {
LAB_1000305f:
            uVar11 = uVar11 << 8 | uVar16 | DAT_1000500c;
LAB_10002fa1:
            uVar19 = DAT_10005008 + 1 & 0x3f;
            if (uVar19 != DAT_10005004) {
              *(uint *)(&DAT_10006d00 + (ulong)DAT_10005008 * 4) = uVar11;
              DAT_10005008 = uVar19;
            }
          }
LAB_10002efc:
          uVar10 = (&DAT_1000518c)[uVar12 * 0x380];
          uVar11 = (&DAT_1000518e)[uVar12 * 0x1c0];
          *(short *)(&DAT_10005404 + (ulong)(ushort)((uVar11 & 0xffff) % (uint)uVar10) * 2 + lVar20)
               = (short)uVar6;
          uVar22 = (short)(uVar11 >> 0x10) - sRam00000000100032b2;
          (&DAT_1000518e)[uVar12 * 0x1c0] = CONCAT22(uVar22,(short)uVar11 - _DAT_100032b0);
          iVar18 = iVar18 + -1;
          uVar6 = (uint)uVar22;
        }
        if (iVar18 != 0) {
          (&DAT_10005402)[uVar12 * 0x380] = *(undefined2 *)(&DAT_1000518e + uVar12 * 0x1c0);
          recovered_10002058((int *)*plVar21,(&DAT_1000519c)[uVar12 * 0x1c0],&DAT_10005400 + lVar20,
                             0x46);
          recovered_100025c1((int *)*plVar21);
          uVar9 = recovered_10002083((int *)*plVar21,(&DAT_10005178)[uVar12 * 0xe0],0,0);
          if ((int)uVar9 == 0) goto LAB_10002b5b;
        }
      }
    }
    uVar12 = uVar12 + 1;
  } while( true );
}

#undef DAT_100032b0
#undef DAT_10005000
#undef DAT_10005004
#undef DAT_10005008
#undef DAT_1000500c
#undef DAT_10005010
#undef DAT_10005014
#undef DAT_10005020
#undef DAT_10005024
#undef DAT_10005028
#undef DAT_1000502c
#undef DAT_10005030
#undef DAT_10005034
#undef DAT_10005038
#undef DAT_1000503c
#undef DAT_10005100
#undef DAT_10005178
#undef DAT_10005188
#undef DAT_1000518c
#undef DAT_1000518e
#undef DAT_1000519c
#undef DAT_100051a0
#undef DAT_100051a4
#undef DAT_100051a8
#undef DAT_100051ac
#undef DAT_100051b0
#undef DAT_100051b4
#undef DAT_100051b8
#undef DAT_10005400
#undef DAT_10005402
#undef DAT_10005404
#undef DAT_10005500
#undef DAT_10005502
#undef DAT_10005700
#undef DAT_10005701
#undef DAT_10005702
#undef DAT_10005703
#undef DAT_10006d00
#undef UNK_100032b2
#undef _DAT_100032b0
#undef _DAT_10005010
#undef _DAT_10005020
#undef _DAT_10005024
#undef _DAT_10005028
#undef _DAT_1000502c
#undef _DAT_10005038
#undef _DAT_1000503c
#undef sRam00000000100032b2
#undef str_1000353a
#undef str_10003545
#undef str_10003550
#undef str_1000355b
#undef str_10003565

#undef DAT_10005004
#define DAT_10005004 (*(uint *)(((uintptr_t)pf_module_state + 0x1d61U)))
#undef DAT_10005008
#define DAT_10005008 (*(uint *)(((uintptr_t)pf_module_state + 0x1d65U)))
#undef DAT_10006d00
#define DAT_10006d00 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3a5dU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003278
 */

undefined4 recovered_10003278(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;

  uVar1 = 0;
  if (DAT_10005004 != DAT_10005008) {
    uVar1 = *(undefined4 *)(&DAT_10006d00 + (ulong)DAT_10005004 * 4);
    DAT_10005004 = DAT_10005004 + 1 & 0x3f;
  }
  return uVar1;
}

#undef DAT_10005004
#undef DAT_10005008
#undef DAT_10006d00

void *memset(void *p,int v,size_t n){volatile unsigned char *b=p;while(n--)*b++=(unsigned char)v;return p;}
void __bzero(void *p,size_t n){volatile unsigned char *b=p;while(n--)*b++=0;}
void bzero(void *p,size_t n){__bzero(p,n);}
