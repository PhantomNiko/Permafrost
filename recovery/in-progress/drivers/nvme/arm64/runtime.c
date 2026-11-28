/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_10004000
#define DAT_10004000 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17bcU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000478
 */

void * recovered_10000478(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return &DAT_10004000;
}

#undef DAT_10004000

#undef DAT_10002850
#define DAT_10002850 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xcU)))
#undef DAT_10008000
#define DAT_10008000 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x57bcU)))
#undef DAT_10008004
#define DAT_10008004 (*(int *)(((uintptr_t)pf_module_state + 0x57c0U)))
#undef DAT_10008008
#define DAT_10008008 (*(int *)(((uintptr_t)pf_module_state + 0x57c4U)))
#undef DAT_10008010
#define DAT_10008010 (*(int * *)(((uintptr_t)pf_module_state + 0x57ccU)))
#undef DAT_10008018
#define DAT_10008018 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x57d4U)))
#undef DAT_100080b8
#define DAT_100080b8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5874U)))
#undef UNK_10002858
#define UNK_10002858 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x14U)))
#undef _DAT_10002850
#define _DAT_10002850 (*(uint64_t *)(((uintptr_t)pf_module_state + 0xcU)))
#undef _DAT_10008000
#define _DAT_10008000 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x57bcU)))
#undef str_10002878
#define str_10002878 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x34U)))
#undef str_100029d9
#define str_100029d9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x195U)))
#undef str_100029ed
#define str_100029ed (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1a9U)))
#undef str_100029fa
#define str_100029fa (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1b6U)))
#undef str_10002a08
#define str_10002a08 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1c4U)))
#undef uRam0000000010002858
#define uRam0000000010002858 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x14U)))
#define local_250 (*(byte (*)[592])(pf_stack_frame + 16))
#define local_248 (*(undefined4 *)(pf_stack_frame + 24))
#define local_240 (*(undefined4 *)(pf_stack_frame + 32))
#define local_238 (*(undefined4 *)(pf_stack_frame + 40))
#define local_230 (*(undefined4 *)(pf_stack_frame + 48))
#define local_228 (*(undefined4 *)(pf_stack_frame + 56))
#define local_220 (*(undefined8 *)(pf_stack_frame + 64))
#define local_208 (*(code * *)(pf_stack_frame + 88))
#define iStack_24c (*(int *)(pf_stack_frame + 20))
#define uStack_244 (*(undefined4 *)(pf_stack_frame + 28))
#define uStack_23c (*(undefined4 *)(pf_stack_frame + 36))
#define uStack_234 (*(undefined4 *)(pf_stack_frame + 44))
#define uStack_22c (*(undefined4 *)(pf_stack_frame + 52))
#define uStack_224 (*(undefined4 *)(pf_stack_frame + 60))
#define uStack_218 (*(undefined8 *)(pf_stack_frame + 72))
#define auStack_1f8 (*(undefined1 (*)[504])(pf_stack_frame + 104))
#define auStack_1b8 (*(undefined1 (*)[440])(pf_stack_frame + 168))
#define auStack_178 (*(undefined1 (*)[376])(pf_stack_frame + 232))
#define auStack_118 (*(undefined1 (*)[280])(pf_stack_frame + 328))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000484
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint recovered_10000484(void *api)

{
  unsigned char pf_stack_frame[640] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;

  if (api == (void *)0x0) {
    return 0;
  }
  if (*(int *)api != 0x54584b57) {
    return 0;
  }
  if (*(int *)((long)api + 4) != 1100000) {
    return 0;
  }
  if (*(uint *)((long)api + 8) < 0xf8) {
    return 0;
  }
  _DAT_10008000 = 0;
  recovered_10000754(&DAT_100080b8,0x540);
  recovered_10000754((undefined1 *)&DAT_10008018,0xa0);
  DAT_10008008 = 0;
  DAT_10008010 = api;
  if (((*(int *)api == 0x54584b57) && (0x5f < *(uint *)((long)api + 8))) &&
     (*(int *)((long)api + 0x5c) != 0)) {
    iVar1 = 0;
    for (uVar3 = 0; uVar3 != 0x100; uVar3 = uVar3 + 1) {
      for (uVar4 = 0; uVar4 != 0x20; uVar4 = uVar4 + 1) {
        uVar2 = recovered_100014c0(api,(ulong)(uVar3 & 0xff),(ulong)(uVar4 & 0xff),0,
                                   (undefined1 *)&local_220);
        if ((int)uVar2 != 0) {
          uVar2 = recovered_1000076c(api,(byte *)&local_220);
          iVar1 = (int)uVar2 + iVar1;
          if (((int8_t)PF_PART1(uStack_218, 4)) < '\0') {
            for (uVar5 = 1; uVar5 != 8; uVar5 = uVar5 + 1) {
              uVar2 = recovered_100014c0(api,(ulong)(uVar3 & 0xff),(ulong)(uVar4 & 0xff),
                                         (ulong)(uVar5 & 0xff),local_250);
              if ((int)uVar2 != 0) {
                uVar2 = recovered_1000076c(api,local_250);
                iVar1 = (int)uVar2 + iVar1;
              }
            }
          }
        }
      }
    }
    if (DAT_10008008 != 0) goto LAB_100005d8;
  }
  else {
    iVar1 = 0;
  }
  recovered_100011a4(api,str_10002878);
LAB_100005d8:
  if ((iVar1 != 0) && (DAT_10008004 != 0)) {
    local_250[0] = 3;
    local_250[1] = 0;
    local_250[2] = 0;
    local_250[3] = 0;
    iStack_24c = DAT_10008004;
    local_248 = 0x10001250;
    uStack_244 = 0x10001300;
    local_240 = 0x10001308;
    uStack_23c = 0x10001310;
    local_238 = 0x100013f0;
    uStack_234 = 0;
    local_230 = 0;
    uStack_22c = 0;
    local_228 = 0;
    uStack_224 = 0;
    if (((*(int *)api == 0x54584b57) &&
        ((0xd3 < *(uint *)((long)api + 8) && (*(uint *)((long)api + 0xd0) != 0)))) &&
       (iVar1 = (*(code *)(ulong)*(uint *)((long)api + 0xd0))(local_250), iVar1 != 0)) {
      recovered_10000754((undefined1 *)&local_220,0x1c8);
      uStack_218 = uRam0000000010002858;
      local_220 = _DAT_10002850;
      local_208 = recovered_10002574;
      recovered_10001648(auStack_1f8,0x40,str_100029d9);
      recovered_10001648(auStack_1b8,0x40,str_100029ed);
      recovered_10001648(auStack_178,0x60,str_100029fa);
      recovered_10001648(auStack_118,0xc0,str_10002a08);
      if ((((DAT_10008010 != (int *)0x0) && (*DAT_10008010 == 0x54584b57)) &&
          (0xef < (uint)DAT_10008010[2])) &&
         ((DAT_10008010[0x3b] != 0 &&
          (iVar1 = (*(code *)(ulong)(uint)DAT_10008010[0x3b])(&local_220), iVar1 != 0)))) {
        return 1;
      }
    }
  }
  recovered_100011d8(api);
  return 0;
}

#undef DAT_10002850
#undef DAT_10008000
#undef DAT_10008004
#undef DAT_10008008
#undef DAT_10008010
#undef DAT_10008018
#undef DAT_100080b8
#undef UNK_10002858
#undef _DAT_10002850
#undef _DAT_10008000
#undef str_10002878
#undef str_100029d9
#undef str_100029ed
#undef str_100029fa
#undef str_10002a08
#undef uRam0000000010002858
#undef local_250
#undef local_248
#undef local_240
#undef local_238
#undef local_230
#undef local_228
#undef local_220
#undef local_208
#undef iStack_24c
#undef uStack_244
#undef uStack_23c
#undef uStack_234
#undef uStack_22c
#undef uStack_224
#undef uStack_218
#undef auStack_1f8
#undef auStack_1b8
#undef auStack_178
#undef auStack_118

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000754
 */

void recovered_10000754(undefined1 *param_1,long param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 != (undefined1 *)0x0) {
    for (; param_2 != 0; param_2 = param_2 + -1) {
      *param_1 = 0;
      param_1 = param_1 + 1;
    }
  }
  return;
}


#undef DAT_10002860
#define DAT_10002860 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1cU)))
#undef DAT_100028cb
#define DAT_100028cb (*(uint8_t *)(((uintptr_t)pf_module_state + 0x87U)))
#undef DAT_100029b7
#define DAT_100029b7 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x173U)))
#undef DAT_100029bd
#define DAT_100029bd (*(uint8_t *)(((uintptr_t)pf_module_state + 0x179U)))
#undef DAT_100029c2
#define DAT_100029c2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17eU)))
#undef DAT_100029c5
#define DAT_100029c5 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x181U)))
#undef DAT_100029c7
#define DAT_100029c7 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x183U)))
#undef DAT_10008000
#define DAT_10008000 (*(uint *)(((uintptr_t)pf_module_state + 0x57bcU)))
#undef DAT_10008004
#define DAT_10008004 (*(uint *)(((uintptr_t)pf_module_state + 0x57c0U)))
#undef DAT_10008008
#define DAT_10008008 (*(int *)(((uintptr_t)pf_module_state + 0x57c4U)))
#undef DAT_10008018
#define DAT_10008018 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x57d4U)))
#undef DAT_1000801c
#define DAT_1000801c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x57d8U)))
#undef DAT_10008020
#define DAT_10008020 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x57dcU)))
#undef DAT_10008028
#define DAT_10008028 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x57e4U)))
#undef DAT_100080b8
#define DAT_100080b8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5874U)))
#undef DAT_100080bc
#define DAT_100080bc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5878U)))
#undef DAT_100080c8
#define DAT_100080c8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5884U)))
#undef DAT_100080c9
#define DAT_100080c9 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5885U)))
#undef DAT_100080ca
#define DAT_100080ca (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5886U)))
#undef DAT_100080d0
#define DAT_100080d0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x588cU)))
#undef str_100028cc
#define str_100028cc (*(char (*)[1])(((uintptr_t)pf_module_state + 0x88U)))
#undef str_100028f3
#define str_100028f3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xafU)))
#undef str_10002911
#define str_10002911 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xcdU)))
#undef str_10002930
#define str_10002930 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xecU)))
#undef str_1000294b
#define str_1000294b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x107U)))
#undef str_10002956
#define str_10002956 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x112U)))
#undef str_10002962
#define str_10002962 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x11eU)))
#undef str_10002970
#define str_10002970 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x12cU)))
#undef str_10002980
#define str_10002980 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x13cU)))
#undef str_10002992
#define str_10002992 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x14eU)))
#undef str_100029a4
#define str_100029a4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x160U)))
#define local_8dc (*(undefined4 *)(pf_stack_frame + 20))
#define acStack_8d8 (*(char (*)[2264])(pf_stack_frame + 24))
#define uStack_4d8 (*(undefined8 *)(pf_stack_frame + 1048))
#define uStack_4d0 (*(uint *)(pf_stack_frame + 1056))
#define uStack_4cc (*(uint *)(pf_stack_frame + 1060))
#define auStack_4c8 (*(uint (*)[306])(pf_stack_frame + 1064))
#define auStack_c8 (*(uint (*)[50])(pf_stack_frame + 2088))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000076c
 */

undefined8 recovered_1000076c(int *param_1,byte *param_2)

{
  unsigned char pf_stack_frame[2320] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  long extraout_x0;
  long extraout_x0_00;
  long extraout_x0_01;
  char *pcVar13;
  long lVar14;
  ulong uVar15;
  uint uVar16;
  uint uVar17;

  uVar7 = DAT_10008000;
  local_8dc = 0;
  if (param_2[8] != 1) {
    return 0;
  }
  if (param_2[9] != 8) {
    return 0;
  }
  if (param_2[10] != 2) {
    return 0;
  }
  DAT_10008008 = DAT_10008008 + 1;
  if (3 < DAT_10008000) {
    return 0;
  }
  lVar6 = (ulong)DAT_10008000 * 0x150;
  puVar1 = (undefined4 *)(&DAT_100080b8 + lVar6);
  recovered_10000754((undefined1 *)puVar1,0x150);
  *(uint *)(&DAT_100080bc + lVar6) = uVar7;
  bVar2 = *param_2;
  (&DAT_100080c8)[lVar6] = bVar2;
  bVar3 = param_2[1];
  (&DAT_100080c9)[lVar6] = bVar3;
  bVar4 = param_2[2];
  (&DAT_100080ca)[lVar6] = bVar4;
  *(uint *)(&DAT_100080d0 + lVar6) =
       (uint)bVar2 << 0x10 | (uint)bVar3 << 0xb | (uint)bVar4 << 8 | 0x80000000;
  recovered_10001648(acStack_8d8,0x400,&DAT_100028cb);
  uVar12 = recovered_100015fc(param_1,(ulong)*param_2,(ulong)param_2[1],(ulong)param_2[2],4,2,
                              (long)&local_8dc);
  if ((int)uVar12 == 0) {
    pcVar13 = str_100028cc;
    goto LAB_100008f0;
  }
  *(short *)(lVar6 + ((uintptr_t)pf_module_state+0x5888U)) = (short)local_8dc;
  *(undefined1 *)(lVar6 + ((uintptr_t)pf_module_state+0x5887U)) = 1;
  auStack_4c8[0] = 0;
  if ((((param_1 == (int *)0x0) || (*param_1 != 0x54584b57)) || ((uint)param_1[2] < 100)) ||
     (param_1[0x18] == 0)) {
    pcVar13 = str_10002980;
LAB_100008cc:
    recovered_10001858((long)acStack_8d8,0x400,pcVar13);
  }
  else {
    uVar12 = recovered_100015fc(param_1,(ulong)*param_2,(ulong)param_2[1],(ulong)param_2[2],4,2,
                                (long)auStack_4c8);
    if ((int)uVar12 == 0) {
      pcVar13 = str_10002992;
      goto LAB_100008cc;
    }
    uVar16 = 0;
    for (lVar14 = 0x14; lVar14 != 0x2c; lVar14 = lVar14 + 4) {
      uVar10 = uVar16 | 1;
      if (*(uint *)(param_2 + lVar14) != 0) {
        uVar16 = uVar16 | 2;
      }
      if ((*(uint *)(param_2 + lVar14) & 1) != 0) {
        uVar16 = uVar10;
      }
    }
    lVar14 = recovered_100018f8(((uintptr_t)pf_module_state+0x75U));
    if (lVar14 != 0) {
      uVar16 = uVar16 | 4;
    }
    if (param_2[8] == 6) {
      if (param_2[9] != 0) {
        uVar16 = uVar16 | 2;
      }
    }
    auStack_c8[0] = auStack_4c8[0] | uVar16;
    uVar12 = recovered_100018b0(param_1,(ulong)*param_2,(ulong)param_2[1],(ulong)param_2[2],
                                (ulong)auStack_c8[0]);
    if ((int)uVar12 == 0) {
      pcVar13 = str_100029a4;
      goto LAB_100008cc;
    }
    recovered_100015fc(param_1,(ulong)*param_2,(ulong)param_2[1],(ulong)param_2[2],4,2,
                       (long)auStack_c8);
    if ((uVar16 & (auStack_c8[0] ^ 0xffffffff)) == 0) {
      uStack_4d0 = 0;
      uStack_4d8 = 0;
      auStack_c8[0] = 0;
      uVar16 = *(uint *)(param_2 + 0x14);
      if ((uVar16 != 0) && ((uVar16 & 1) == 0)) {
        uStack_4cc = uVar16;
        recovered_100015fc(param_1,(ulong)*param_2,(ulong)param_2[1],(ulong)param_2[2],0x10,4,
                           (long)&uStack_4cc);
        if ((uStack_4cc & 7) == 4) {
          auStack_c8[0] = *(uint *)(param_2 + 0x18);
          recovered_100015fc(param_1,(ulong)*param_2,(ulong)param_2[1],(ulong)param_2[2],0x14,4,
                             (long)auStack_c8);
          uVar16 = auStack_c8[0];
        }
        else {
          uVar16 = 0;
        }
        uVar10 = 0xfffffff0;
        if ((uStack_4cc & 1) != 0) {
          uVar10 = 0xfffffffc;
        }
        uVar10 = uVar10 & uStack_4cc;
        if (uVar10 != 0 || uVar16 != 0) {
          *(undefined8 *)(lVar6 + ((uintptr_t)pf_module_state+0x587cU)) = 0;
          auStack_4c8[0] = 0;
          if (*param_1 == 0x54584b57) {
            if (((uint)param_1[2] < 0xbc) || (param_1[0x2e] == 0)) {
              if ((uVar16 == 0) &&
                 (((0x67 < (uint)param_1[2] && (param_1[0x19] != 0)) &&
                  (iVar9 = (*(code *)(ulong)(uint)param_1[0x19])(uVar10,0,0x4000,auStack_4c8),
                  iVar9 != 0)))) {
                uVar15 = (ulong)auStack_4c8[0];
                *(ulong *)(lVar6 + ((uintptr_t)pf_module_state+0x587cU)) = uVar15;
                goto LAB_10000a94;
              }
            }
            else {
              iVar9 = (*(code *)(ulong)(uint)param_1[0x2e])(uVar10,uVar16,0x4000,lVar6 + ((uintptr_t)pf_module_state+0x587cU))
              ;
              if (iVar9 != 0) {
                uVar15 = *(ulong *)(lVar6 + ((uintptr_t)pf_module_state+0x587cU));
LAB_10000a94:
                if (((uVar15 != 0) &&
                    (uVar12 = recovered_10001914(param_1,(long)puVar1,0,&uStack_4d0),
                    (int)uVar12 != 0)) &&
                   ((uVar12 = recovered_10001914(param_1,(long)puVar1,4,
                                                 (undefined4 *)((long)&uStack_4d8 + 4)),
                    (int)uVar12 != 0 &&
                    (((PF_PART4(uStack_4d8, 4) & 0xf0020) == 0x20 &&
                     (uVar16 = 4 << (ulong)(PF_PART4(uStack_4d8, 4) & 0xf),
                     *(uint *)(lVar6 + ((uintptr_t)pf_module_state+0x5890U)) = uVar16, uVar16 < 0x401)))))) {
                  uVar16 = 0x10;
                  if ((uStack_4d0 & 0xfff0) == 0) {
                    uVar16 = (uStack_4d0 & 0xffff) + 1;
                  }
                  uVar10 = 0x20;
                  if ((uStack_4d0 & 0xffe0) == 0) {
                    uVar10 = (uStack_4d0 & 0xffff) + 1;
                  }
                  *(uint *)(lVar6 + ((uintptr_t)pf_module_state+0x5898U)) = uVar16;
                  *(uint *)(lVar6 + ((uintptr_t)pf_module_state+0x589cU)) = uVar10;
                  if (1 < uVar16 && 1 < uVar10) {
                    uVar10 = (uStack_4d0 >> 0x18) * 500 + 500;
                    *(uint *)(lVar6 + ((uintptr_t)pf_module_state+0x5894U)) = uVar10;
                    *(undefined4 *)(lVar6 + ((uintptr_t)pf_module_state+0x58a0U)) = 0x2000;
                    lVar14 = *(long *)(lVar6 + ((uintptr_t)pf_module_state+0x587cU)) + 0x1000;
                    uVar12 = recovered_10001ba8(param_1,(long)puVar1,(long *)(lVar6 + ((uintptr_t)pf_module_state+0x58acU)),
                                                uVar16,0x40,0,lVar14);
                    if (((((int)uVar12 != 0) &&
                         (uVar12 = recovered_10001ba8(param_1,(long)puVar1,
                                                      (long *)(lVar6 + ((uintptr_t)pf_module_state+0x58e4U)),
                                                      *(int *)(lVar6 + ((uintptr_t)pf_module_state+0x5898U)),0x10,0,
                                                      lVar14 + (ulong)*(uint *)(lVar6 + ((uintptr_t)pf_module_state+0x5890U)))
                         , (int)uVar12 != 0)) &&
                        (uVar12 = recovered_10001ba8(param_1,(long)puVar1,
                                                     (long *)(lVar6 + ((uintptr_t)pf_module_state+0x591cU)),
                                                     *(int *)(lVar6 + ((uintptr_t)pf_module_state+0x589cU)),0x40,1,
                                                     lVar14 + (ulong)(uint)(*(int *)(lVar6 +
                                                  ((uintptr_t)pf_module_state+0x5890U)) << 1)), (int)uVar12 != 0)) &&
                       (uVar12 = recovered_10001ba8(param_1,(long)puVar1,
                                                    (long *)(lVar6 + ((uintptr_t)pf_module_state+0x5954U)),
                                                    *(int *)(lVar6 + ((uintptr_t)pf_module_state+0x589cU)),0x10,1,
                                                    lVar14 + (ulong)(uint)(*(int *)(lVar6 +
                                                  ((uintptr_t)pf_module_state+0x5890U)) * 3)), (int)uVar12 != 0)) {
                      uVar15 = recovered_10001c84(param_1,0x2000,(long *)(lVar6 + ((uintptr_t)pf_module_state+0x5994U)));
                      *(ulong *)(lVar6 + ((uintptr_t)pf_module_state+0x598cU)) = uVar15;
                      uVar15 = recovered_10001c84(param_1,0x1000,(long *)(lVar6 + ((uintptr_t)pf_module_state+0x59b4U)));
                      *(ulong *)(lVar6 + ((uintptr_t)pf_module_state+0x59acU)) = uVar15;
                      if ((((*(long *)(lVar6 + ((uintptr_t)pf_module_state+0x598cU)) != 0) && (uVar15 != 0)) &&
                          (((uVar12 = recovered_10001d08(param_1,(long)puVar1,
                                                         *(long *)(lVar6 + ((uintptr_t)pf_module_state+0x598cU)),0x1000,
                                                         lVar6 + ((uintptr_t)pf_module_state+0x599cU),lVar6 + ((uintptr_t)pf_module_state+0x59a0U)),
                            (int)uVar12 != 0 &&
                            ((uVar12 = recovered_10001d08(param_1,(long)puVar1,
                                                          *(long *)(lVar6 + ((uintptr_t)pf_module_state+0x598cU)) + 0x1000,
                                                          0x1000,lVar6 + ((uintptr_t)pf_module_state+0x59a4U),
                                                          lVar6 + ((uintptr_t)pf_module_state+0x59a8U)), (int)uVar12 != 0 &&
                             (uVar12 = recovered_10001d08(param_1,(long)puVar1,
                                                          *(long *)(lVar6 + ((uintptr_t)pf_module_state+0x59acU)),0x1000,
                                                          lVar6 + ((uintptr_t)pf_module_state+0x59bcU),lVar6 + ((uintptr_t)pf_module_state+0x59c0U)),
                             (int)uVar12 != 0)))) &&
                           ((*(ushort *)(lVar6 + ((uintptr_t)pf_module_state+0x599cU)) & 0xfff) == 0)))) &&
                         (((*(ushort *)(lVar6 + ((uintptr_t)pf_module_state+0x59a4U)) & 0xfff) == 0 &&
                          ((*(ushort *)(lVar6 + ((uintptr_t)pf_module_state+0x59bcU)) & 0xfff) == 0)))) {
                        recovered_10000754(*(undefined1 **)(lVar6 + ((uintptr_t)pf_module_state+0x598cU)),0x2000);
                        recovered_10000754(*(undefined1 **)(lVar6 + ((uintptr_t)pf_module_state+0x59acU)),0x1000);
                        recovered_10001d58(param_1,(ulong)*(uint *)(&DAT_100080d0 + lVar6),
                                           *(undefined8 *)(lVar6 + ((uintptr_t)pf_module_state+0x598cU)),0x2000);
                        recovered_10001d58(param_1,(ulong)*(uint *)(&DAT_100080d0 + lVar6),
                                           *(undefined8 *)(lVar6 + ((uintptr_t)pf_module_state+0x59acU)),0x1000);
                        recovered_100019f0(param_1);
                        uVar12 = recovered_10001914(param_1,(long)puVar1,0x14,
                                                    (undefined4 *)&uStack_4d8);
                        if ((((int)uVar12 != 0) &&
                            ((((((uStack_4d8 & 1) == 0 ||
                                (uVar12 = recovered_100019d8(param_1,(long)puVar1,0x14,
                                                             (ulong)((uint)uStack_4d8 & 0xfffffffe))
                                , (int)uVar12 != 0)) &&
                               (uVar12 = recovered_10001a20(param_1,(long)puVar1,0,uVar10),
                               (int)uVar12 != 0)) &&
                              ((uVar16 = *(int *)(lVar6 + ((uintptr_t)pf_module_state+0x5898U)) - 1,
                               uVar12 = recovered_100019d8(param_1,(long)puVar1,0x24,
                                                           (ulong)(uVar16 | uVar16 * 0x10000)),
                               (int)uVar12 != 0 &&
                               (uVar12 = recovered_100019d8(param_1,(long)puVar1,0x28,
                                                            (ulong)*(uint *)(lVar6 + ((uintptr_t)pf_module_state+0x58bcU))),
                               (int)uVar12 != 0)))) &&
                             (uVar12 = recovered_100019d8(param_1,(long)puVar1,0x2c,
                                                          (ulong)*(uint *)(lVar6 + ((uintptr_t)pf_module_state+0x58c0U))),
                             (int)uVar12 != 0)))) &&
                           ((((uVar12 = recovered_100019d8(param_1,(long)puVar1,0x30,
                                                           (ulong)*(uint *)(lVar6 + ((uintptr_t)pf_module_state+0x58f4U))),
                              (int)uVar12 != 0 &&
                              (uVar12 = recovered_100019d8(param_1,(long)puVar1,0x34,
                                                           (ulong)*(uint *)(lVar6 + ((uintptr_t)pf_module_state+0x58f8U))),
                              (int)uVar12 != 0)) &&
                             (uVar12 = recovered_100019d8(param_1,(long)puVar1,0xc,0xffffffff),
                             (int)uVar12 != 0)) &&
                            (((uVar12 = recovered_100019d8(param_1,(long)puVar1,0x14,0x460000),
                              (int)uVar12 != 0 &&
                              (uVar12 = recovered_100019d8(param_1,(long)puVar1,0x14,0x460001),
                              (int)uVar12 != 0)) &&
                             (uVar12 = recovered_10001a20(param_1,(long)puVar1,1,uVar10),
                             (int)uVar12 != 0)))))) {
                          auStack_c8[0] = auStack_c8[0] & 0xffff0000;
                          recovered_10001d94((long)puVar1,lVar6 + ((uintptr_t)pf_module_state+0x58acU),9,0,
                                             (undefined2 *)auStack_c8);
                          *(undefined8 *)(extraout_x0 + 0x28) = DAT_10002860;
                          bVar8 = recovered_10001dfc(param_1,puVar1,lVar6 + ((uintptr_t)pf_module_state+0x58acU),
                                                     lVar6 + ((uintptr_t)pf_module_state+0x58e4U),auStack_c8[0] & 0xffff,
                                                     auStack_4c8);
                          if (bVar8) {
                            auStack_4c8[0] = auStack_4c8[0] & 0xffff0000;
                            recovered_10001d94((long)puVar1,lVar6 + ((uintptr_t)pf_module_state+0x58acU),5,0,
                                               (undefined2 *)auStack_4c8);
                            recovered_10002040(extraout_x0_00,*(undefined4 *)(lVar6 + ((uintptr_t)pf_module_state+0x5964U)),
                                               *(undefined4 *)(lVar6 + ((uintptr_t)pf_module_state+0x5968U)),0,0);
                            iVar9 = *(int *)(lVar6 + ((uintptr_t)pf_module_state+0x589cU)) * 0x10000 + -0xffff;
                            *(undefined2 *)(extraout_x0_00 + 0x28) = 1;
                            *(char *)(extraout_x0_00 + 0x2a) = (char)((uint)iVar9 >> 0x10);
                            *(char *)(extraout_x0_00 + 0x2b) = (char)((uint)iVar9 >> 0x18);
                            *(undefined4 *)(extraout_x0_00 + 0x2c) = 1;
                            bVar8 = recovered_10001dfc(param_1,puVar1,lVar6 + ((uintptr_t)pf_module_state+0x58acU),
                                                       lVar6 + ((uintptr_t)pf_module_state+0x58e4U),auStack_4c8[0] & 0xffff,
                                                       (undefined4 *)0x0);
                            if (bVar8) {
                              recovered_10001d94((long)puVar1,lVar6 + ((uintptr_t)pf_module_state+0x58acU),1,0,
                                                 (undefined2 *)auStack_4c8);
                              recovered_10002040(extraout_x0_01,*(undefined4 *)(lVar6 + ((uintptr_t)pf_module_state+0x592cU)),
                                                 *(undefined4 *)(lVar6 + ((uintptr_t)pf_module_state+0x5930U)),0,0);
                              iVar9 = *(int *)(lVar6 + ((uintptr_t)pf_module_state+0x589cU)) * 0x10000 + -0xffff;
                              *(undefined2 *)(extraout_x0_01 + 0x28) = 1;
                              *(char *)(extraout_x0_01 + 0x2a) = (char)((uint)iVar9 >> 0x10);
                              *(char *)(extraout_x0_01 + 0x2b) = (char)((uint)iVar9 >> 0x18);
                              *(undefined4 *)(extraout_x0_01 + 0x2c) = 0x10001;
                              bVar8 = recovered_10001dfc(param_1,puVar1,lVar6 + ((uintptr_t)pf_module_state+0x58acU),
                                                         lVar6 + ((uintptr_t)pf_module_state+0x58e4U),auStack_4c8[0] & 0xffff,
                                                         (undefined4 *)0x0);
                              if (bVar8) {
                                *puVar1 = 1;
                                uVar16 = DAT_10008004;
                                bVar8 = recovered_100020b4(param_1,puVar1,1,0);
                                if (bVar8) {
                                  uVar10 = (uint)*(byte *)(*(long *)(lVar6 + ((uintptr_t)pf_module_state+0x59acU)) + 0x4d);
                                  if ((uVar10 - 1 < 0x13) &&
                                     (uVar10 = 0x1000 << (ulong)(uVar10 & 0x1f),
                                     uVar10 < *(uint *)(lVar6 + ((uintptr_t)pf_module_state+0x58a0U)))) {
                                    *(uint *)(lVar6 + ((uintptr_t)pf_module_state+0x58a0U)) = uVar10;
                                  }
                                  uVar10 = recovered_1000201c(*(long *)(lVar6 + ((uintptr_t)pf_module_state+0x59acU)),0x204);
                                  if (7 < uVar10) {
                                    uVar10 = 8;
                                  }
                                  for (uVar17 = 1; uVar17 <= uVar10 && DAT_10008004 < 8;
                                      uVar17 = uVar17 + 1) {
                                    bVar8 = recovered_100020b4(param_1,puVar1,0,uVar17);
                                    if (bVar8) {
                                      lVar14 = *(long *)(lVar6 + ((uintptr_t)pf_module_state+0x59acU));
                                      iVar9 = recovered_1000201c(lVar14,0);
                                      uVar11 = recovered_1000201c(lVar14,4);
                                      if ((CONCAT44(uVar11,iVar9) != 0) &&
                                         (uVar15 = (ulong)*(byte *)(lVar14 + 0x1a) & 0xf,
                                         (uint)uVar15 <= (*(byte *)(lVar14 + 0x19) & 0xf))) {
                                        uVar15 = uVar15 << 2 | 0x80;
                                        bVar2 = *(byte *)(lVar14 + uVar15 + 2);
                                        if ((bVar2 == 0xc || bVar2 == 9) &&
                                           ((*(char *)(lVar14 + uVar15) == '\0' &&
                                            (*(char *)(lVar14 + uVar15 + 1) == '\0')))) {
                                          uVar15 = (ulong)(bVar2 - 9);
                                          if (CONCAT44(uVar11,iVar9) <=
                                              0xffffffffUL >> (uVar15 & 0x3f)) {
                                            uVar5 = (ulong)DAT_10008004;
                                            *(uint *)(&DAT_10008020 + uVar5 * 0x14) = uVar17;
                                            *(int *)(uVar5 * 0x14 + ((uintptr_t)pf_module_state+0x57e0U)) =
                                                 1 << (ulong)(bVar2 & 0x1f);
                                            (&DAT_10008028)[uVar5 * 5] = iVar9 << (uVar15 & 0x3f);
                                            (&DAT_10008018)[uVar5 * 5] = 1;
                                            (&DAT_1000801c)[uVar5 * 5] = uVar7;
                                            DAT_10008004 = DAT_10008004 + 1;
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                                uVar16 = DAT_10008004 - uVar16;
                                if (uVar16 != 0) {
                                  DAT_10008000 = DAT_10008000 + 1;
                                  recovered_10001648(acStack_8d8,0x400,&DAT_100028cb);
                                  recovered_100017bc((long)acStack_8d8,0x400,uVar16);
                                  pcVar13 = str_1000294b;
                                  if (uVar16 != 1) {
                                    pcVar13 = str_10002956;
                                  }
                                  recovered_10001858((long)acStack_8d8,0x400,pcVar13);
                                  recovered_10001648((undefined1 *)auStack_c8,0x60,str_10002962);
                                  recovered_10001858((long)auStack_c8,0x60,&DAT_100029b7);
                                  recovered_10002194((long)auStack_c8,0x60,(uint)*param_2,2);
                                  recovered_10001858((long)auStack_c8,0x60,(char *)((uintptr_t)pf_module_state+0x175U));
                                  recovered_10002194((long)auStack_c8,0x60,(uint)param_2[1],2);
                                  recovered_10001858((long)auStack_c8,0x60,(char *)((uintptr_t)pf_module_state+0x177U));
                                  recovered_100017bc((long)auStack_c8,0x60,(uint)param_2[2]);
                                  recovered_10001648((undefined1 *)auStack_4c8,0x400,&DAT_100029bd);
                                  recovered_10002194((long)auStack_4c8,0x400,(uint)*param_2,2);
                                  recovered_10001858((long)auStack_4c8,0x400,(char *)((uintptr_t)pf_module_state+0x175U));
                                  recovered_10002194((long)auStack_4c8,0x400,(uint)param_2[1],2);
                                  recovered_10001858((long)auStack_4c8,0x400,(char *)((uintptr_t)pf_module_state+0x177U));
                                  recovered_100017bc((long)auStack_4c8,0x400,(uint)param_2[2]);
                                  recovered_10001858((long)auStack_4c8,0x400,&DAT_100029c2);
                                  recovered_10002194((long)auStack_4c8,0x400,
                                                     (uint)*(ushort *)(param_2 + 4),4);
                                  recovered_10001858((long)auStack_4c8,0x400,(char *)((uintptr_t)pf_module_state+0x175U));
                                  recovered_10002194((long)auStack_4c8,0x400,
                                                     (uint)*(ushort *)(param_2 + 6),4);
                                  recovered_10001858((long)auStack_4c8,0x400,&DAT_100029c5);
                                  if (acStack_8d8[0] != '\0') {
                                    recovered_10001858((long)auStack_4c8,0x400,&DAT_100029c7);
                                    recovered_10001858((long)auStack_4c8,0x400,acStack_8d8);
                                  }
                                  if (param_1[3] != 0) {
                                    (*(code *)(ulong)(uint)param_1[3])
                                              (auStack_c8,str_10002970,auStack_4c8);
                                  }
                                  return 1;
                                }
                                recovered_10001658(param_1,puVar1);
                                pcVar13 = str_10002930;
                                goto LAB_100008f0;
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
      recovered_10001658(param_1,puVar1);
      pcVar13 = str_10002911;
      goto LAB_100008f0;
    }
  }
  recovered_10001658(param_1,puVar1);
  pcVar13 = str_100028f3;
LAB_100008f0:
  recovered_100011a4(param_1,pcVar13);
  return 0;
}

#undef DAT_10002860
#undef DAT_100028cb
#undef DAT_100029b7
#undef DAT_100029bd
#undef DAT_100029c2
#undef DAT_100029c5
#undef DAT_100029c7
#undef DAT_10008000
#undef DAT_10008004
#undef DAT_10008008
#undef DAT_10008018
#undef DAT_1000801c
#undef DAT_10008020
#undef DAT_10008028
#undef DAT_100080b8
#undef DAT_100080bc
#undef DAT_100080c8
#undef DAT_100080c9
#undef DAT_100080ca
#undef DAT_100080d0
#undef str_100028cc
#undef str_100028f3
#undef str_10002911
#undef str_10002930
#undef str_1000294b
#undef str_10002956
#undef str_10002962
#undef str_10002970
#undef str_10002980
#undef str_10002992
#undef str_100029a4
#undef local_8dc
#undef acStack_8d8
#undef uStack_4d8
#undef uStack_4d0
#undef uStack_4cc
#undef auStack_4c8
#undef auStack_c8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100011a4
 */

void recovered_100011a4(int *param_1,undefined8 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if ((((param_1 == (int *)0x0) || (*param_1 != 0x54584b57)) || ((uint)param_1[2] < 0x2c)) ||
     (param_1[10] == 0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x100011d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulong)(uint)param_1[10])(param_2);
  return;
}


#undef DAT_10008000
#define DAT_10008000 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x57bcU)))
#undef DAT_10008010
#define DAT_10008010 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x57ccU)))
#undef DAT_10008018
#define DAT_10008018 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x57d4U)))
#undef DAT_100080b8
#define DAT_100080b8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5874U)))
#undef _DAT_10008000
#define _DAT_10008000 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x57bcU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100011d8
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_100011d8(int *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;
  ulong uVar2;

  puVar1 = (undefined4 *)&DAT_100080b8;
  for (uVar2 = 0; uVar2 < (_DAT_10008000 & 0xffffffff); uVar2 = uVar2 + 1) {
    recovered_10001658(param_1,puVar1);
    puVar1 = puVar1 + 0x54;
  }
  puVar1 = &DAT_10008018;
  for (_DAT_10008000 = _DAT_10008000 >> 0x20; _DAT_10008000 != 0; _DAT_10008000 = _DAT_10008000 - 1)
  {
    *puVar1 = 0;
    puVar1 = puVar1 + 5;
  }
  _DAT_10008000 = 0;
  DAT_10008010 = 0;
  return;
}

#undef DAT_10008000
#undef DAT_10008010
#undef DAT_10008018
#undef DAT_100080b8
#undef _DAT_10008000

#undef DAT_10008004
#define DAT_10008004 (*(uint *)(((uintptr_t)pf_module_state + 0x57c0U)))
#undef DAT_10008018
#define DAT_10008018 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x57d4U)))
#undef DAT_10008028
#define DAT_10008028 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x57e4U)))
#undef str_100029ca
#define str_100029ca (*(char (*)[1])(((uintptr_t)pf_module_state + 0x186U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001250
 */

undefined8 recovered_10001250(uint param_1,undefined4 *param_2,long param_3,int param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;

  if (param_1 < DAT_10008004) {
    uVar2 = 0;
    if ((param_2 != (undefined4 *)0x0) && ((&DAT_10008018)[(ulong)param_1 * 5] != 0)) {
      *param_2 = (&DAT_10008028)[(ulong)param_1 * 5];
      uVar2 = 1;
      if ((param_3 != 0) && (param_4 != 0)) {
        uVar4 = 0;
        uVar1 = param_4 - 1;
        uVar5 = (ulong)uVar1;
        if (8 < uVar1) {
          uVar1 = 9;
        }
        uVar3 = (ulong)uVar1;
        for (; uVar3 != uVar4; uVar4 = uVar4 + 1) {
          *(char *)(param_3 + uVar4) = str_100029ca[uVar4];
        }
        if (uVar4 < uVar5) {
          *(byte *)(param_3 + uVar3) = (char)param_1 + (char)(param_1 / 10) * -10 | 0x30;
          uVar3 = (ulong)(uVar1 + 1);
        }
        *(undefined1 *)(param_3 + uVar3) = 0;
        uVar2 = 1;
      }
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

#undef DAT_10008004
#undef DAT_10008018
#undef DAT_10008028
#undef str_100029ca

#undef DAT_10008000
#define DAT_10008000 (*(uint *)(((uintptr_t)pf_module_state + 0x57bcU)))
#undef DAT_10008004
#define DAT_10008004 (*(uint *)(((uintptr_t)pf_module_state + 0x57c0U)))
#undef DAT_10008010
#define DAT_10008010 (*(int * *)(((uintptr_t)pf_module_state + 0x57ccU)))
#undef DAT_10008018
#define DAT_10008018 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x57d4U)))
#undef DAT_1000801c
#define DAT_1000801c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x57d8U)))
#undef DAT_10008020
#define DAT_10008020 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x57dcU)))
#undef DAT_10008028
#define DAT_10008028 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x57e4U)))
#undef DAT_100080b8
#define DAT_100080b8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5874U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001300
 */

/* WARNING: Removing unreachable block (ram,0x100022fc) */
/* WARNING: Removing unreachable block (ram,0x1000230c) */
/* WARNING: Removing unreachable block (ram,0x10002328) */
/* WARNING: Removing unreachable block (ram,0x10002338) */
/* WARNING: Removing unreachable block (ram,0x10002354) */

ulong recovered_10001300(uint param_1,uint param_2,undefined1 *param_3,uint param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int *piVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  undefined1 *puVar10;
  bool bVar11;
  ulong uVar12;
  int iVar13;
  ulong uVar14;

  if (DAT_10008004 <= param_1) {
    return 0;
  }
  uVar14 = (ulong)param_1;
  lVar8 = uVar14 * 0x14;
  if (((&DAT_10008018)[uVar14 * 5] == 0) || (DAT_10008000 <= (uint)(&DAT_1000801c)[uVar14 * 5])) {
    uVar12 = 0;
  }
  else {
    lVar9 = (ulong)(uint)(&DAT_1000801c)[uVar14 * 5] * 0x150;
    piVar1 = (int *)(&DAT_100080b8 + lVar9);
    recovered_100023f8((long)piVar1);
    uVar12 = 0;
    if (((param_4 != 0) && (param_3 != (undefined1 *)0x0)) && (DAT_10008010 != (int *)0x0)) {
      if (((uint)(&DAT_10008028)[uVar14 * 5] < param_2 ||
           (&DAT_10008028)[uVar14 * 5] - param_2 < param_4) || (*piVar1 == 0)) {
        uVar12 = 0;
      }
      else {
        uVar4 = *(uint *)(lVar8 + ((uintptr_t)pf_module_state+0x57e0U)) >> 9;
        for (; param_4 != 0; param_4 = param_4 - (uVar2 >> 9)) {
          uVar6 = 0;
          if (uVar4 != 0) {
            uVar6 = param_2 / uVar4;
          }
          iVar13 = param_2 - uVar6 * uVar4;
          uVar3 = iVar13 * 0x200;
          uVar5 = *(uint *)(lVar9 + ((uintptr_t)pf_module_state+0x58a0U)) - (uVar3 | *(uint *)(lVar9 + ((uintptr_t)pf_module_state+0x58a0U)) & 0x1ff);
          uVar2 = param_4 << 9;
          if ((ulong)uVar5 <= (ulong)param_4 * 0x200) {
            uVar2 = uVar5;
          }
          uVar5 = *(uint *)(lVar8 + ((uintptr_t)pf_module_state+0x57e0U));
          uVar7 = 0;
          if (uVar5 != 0) {
            uVar7 = ((uVar5 + uVar2 + iVar13 * 0x200) - 1) / uVar5;
          }
          bVar11 = recovered_10002420(DAT_10008010,piVar1,*(undefined4 *)(&DAT_10008020 + lVar8),2,
                                      (ulong)uVar6,uVar7,uVar5);
          uVar12 = (ulong)bVar11;
          if (!bVar11) goto LAB_100023e0;
          iVar13 = 0;
          puVar10 = param_3;
          for (uVar14 = (ulong)uVar2; uVar14 != 0; uVar14 = uVar14 - 1) {
            *puVar10 = *(undefined1 *)(*(long *)(lVar9 + ((uintptr_t)pf_module_state+0x598cU)) + (ulong)(uVar3 + iVar13));
            iVar13 = iVar13 + 1;
            puVar10 = puVar10 + 1;
          }
          param_3 = param_3 + uVar2;
          param_2 = param_2 + (uVar2 >> 9);
        }
        uVar12 = 1;
      }
    }
LAB_100023e0:
    *(undefined4 *)(lVar9 + ((uintptr_t)pf_module_state+0x58a4U)) = 0;
  }
  return uVar12;
}

#undef DAT_10008000
#undef DAT_10008004
#undef DAT_10008010
#undef DAT_10008018
#undef DAT_1000801c
#undef DAT_10008020
#undef DAT_10008028
#undef DAT_100080b8

#undef DAT_10008000
#define DAT_10008000 (*(uint *)(((uintptr_t)pf_module_state + 0x57bcU)))
#undef DAT_10008004
#define DAT_10008004 (*(uint *)(((uintptr_t)pf_module_state + 0x57c0U)))
#undef DAT_10008010
#define DAT_10008010 (*(int * *)(((uintptr_t)pf_module_state + 0x57ccU)))
#undef DAT_10008018
#define DAT_10008018 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x57d4U)))
#undef DAT_1000801c
#define DAT_1000801c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x57d8U)))
#undef DAT_10008020
#define DAT_10008020 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x57dcU)))
#undef DAT_10008028
#define DAT_10008028 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x57e4U)))
#undef DAT_100080b8
#define DAT_100080b8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5874U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001308
 */

/* WARNING: Removing unreachable block (ram,0x10002384) */
/* WARNING: Removing unreachable block (ram,0x100023a0) */
/* WARNING: Removing unreachable block (ram,0x100023b0) */
/* WARNING: Removing unreachable block (ram,0x100023cc) */

ulong recovered_10001308(uint param_1,uint param_2,undefined1 *param_3,uint param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int *piVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  undefined1 *puVar12;
  bool bVar13;
  ulong uVar14;
  int iVar15;
  ulong uVar16;

  if (DAT_10008004 <= param_1) {
    return 0;
  }
  uVar16 = (ulong)param_1;
  lVar10 = uVar16 * 0x14;
  if (((&DAT_10008018)[uVar16 * 5] == 0) || (DAT_10008000 <= (uint)(&DAT_1000801c)[uVar16 * 5])) {
    uVar14 = 0;
  }
  else {
    lVar11 = (ulong)(uint)(&DAT_1000801c)[uVar16 * 5] * 0x150;
    piVar1 = (int *)(&DAT_100080b8 + lVar11);
    recovered_100023f8((long)piVar1);
    uVar14 = 0;
    if (((param_4 != 0) && (param_3 != (undefined1 *)0x0)) && (DAT_10008010 != (int *)0x0)) {
      if (((uint)(&DAT_10008028)[uVar16 * 5] < param_2 ||
           (&DAT_10008028)[uVar16 * 5] - param_2 < param_4) || (*piVar1 == 0)) {
        uVar14 = 0;
      }
      else {
        uVar4 = *(uint *)(lVar10 + ((uintptr_t)pf_module_state+0x57e0U)) >> 9;
        for (; param_4 != 0; param_4 = param_4 - (uVar2 >> 9)) {
          uVar7 = 0;
          if (uVar4 != 0) {
            uVar7 = param_2 / uVar4;
          }
          iVar5 = param_2 - uVar7 * uVar4;
          uVar6 = *(uint *)(lVar11 + ((uintptr_t)pf_module_state+0x58a0U)) -
                  (iVar5 * 0x200 | *(uint *)(lVar11 + ((uintptr_t)pf_module_state+0x58a0U)) & 0x1ff);
          uVar2 = param_4 << 9;
          if ((ulong)uVar6 <= (ulong)param_4 * 0x200) {
            uVar2 = uVar6;
          }
          uVar6 = uVar2 + iVar5 * 0x200;
          uVar3 = *(uint *)(lVar10 + ((uintptr_t)pf_module_state+0x57e0U));
          uVar8 = 0;
          if (uVar3 != 0) {
            uVar8 = ((uVar3 + uVar6) - 1) / uVar3;
          }
          uVar9 = 0;
          if (uVar3 != 0) {
            uVar9 = uVar6 / uVar3;
          }
          if (uVar6 != uVar9 * uVar3 || iVar5 != 0) {
            bVar13 = recovered_10002420(DAT_10008010,piVar1,*(undefined4 *)(&DAT_10008020 + lVar10),
                                        2,(ulong)uVar7,uVar8,uVar3);
            uVar14 = (ulong)bVar13;
            if (!bVar13) goto LAB_100023e0;
          }
          iVar15 = 0;
          puVar12 = param_3;
          for (uVar16 = (ulong)uVar2; uVar16 != 0; uVar16 = uVar16 - 1) {
            *(undefined1 *)(*(long *)(lVar11 + ((uintptr_t)pf_module_state+0x598cU)) + (ulong)(uint)(iVar5 * 0x200 + iVar15))
                 = *puVar12;
            iVar15 = iVar15 + 1;
            puVar12 = puVar12 + 1;
          }
          bVar13 = recovered_10002420(DAT_10008010,piVar1,*(undefined4 *)(&DAT_10008020 + lVar10),1,
                                      (ulong)uVar7,uVar8,*(int *)(lVar10 + ((uintptr_t)pf_module_state+0x57e0U)));
          uVar14 = (ulong)bVar13;
          if (!bVar13) goto LAB_100023e0;
          param_3 = param_3 + uVar2;
          param_2 = param_2 + (uVar2 >> 9);
        }
        uVar14 = 1;
      }
    }
LAB_100023e0:
    *(undefined4 *)(lVar11 + ((uintptr_t)pf_module_state+0x58a4U)) = 0;
  }
  return uVar14;
}

#undef DAT_10008000
#undef DAT_10008004
#undef DAT_10008010
#undef DAT_10008018
#undef DAT_1000801c
#undef DAT_10008020
#undef DAT_10008028
#undef DAT_100080b8

#undef DAT_10008004
#define DAT_10008004 (*(uint *)(((uintptr_t)pf_module_state + 0x57c0U)))
#undef DAT_10008010
#define DAT_10008010 (*(int * *)(((uintptr_t)pf_module_state + 0x57ccU)))
#undef DAT_10008018
#define DAT_10008018 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x57d4U)))
#undef DAT_100080b8
#define DAT_100080b8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5874U)))
#define local_42 (*(ushort *)(pf_stack_frame + 30))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001310
 */

bool recovered_10001310(uint param_1)

{
  unsigned char pf_stack_frame[128] __attribute__((aligned(16))) = {0};

  int *piVar1;
  long lVar2;
  uint uVar3;
  bool bVar4;
  int *piVar5;

  uVar3 = DAT_10008004;
  if (param_1 < DAT_10008004) {
    piVar5 = (int *)0x0;
    if ((&DAT_10008018)[(ulong)param_1 * 5] != 0) {
      piVar5 = &DAT_10008018 + (ulong)param_1 * 5;
    }
  }
  else {
    piVar5 = (int *)0x0;
  }
  bVar4 = false;
  local_42 = 0;
  if ((piVar5 != (int *)0x0) && (DAT_10008010 != (int *)0x0)) {
    lVar2 = (ulong)(uint)piVar5[1] * 0x150;
    piVar1 = (int *)(&DAT_100080b8 + lVar2);
    recovered_100023f8((long)piVar1);
    if ((param_1 < uVar3) && (((&DAT_10008018)[(ulong)param_1 * 5] != 0 && (*piVar1 != 0)))) {
      recovered_10001d94((long)piVar1,lVar2 + ((uintptr_t)pf_module_state+0x591cU),0,piVar5[2],&local_42);
      bVar4 = recovered_10001dfc(DAT_10008010,piVar1,lVar2 + ((uintptr_t)pf_module_state+0x591cU),lVar2 + ((uintptr_t)pf_module_state+0x5954U),
                                 (uint)local_42,(undefined4 *)0x0);
    }
    else {
      bVar4 = false;
    }
    *(undefined4 *)(lVar2 + ((uintptr_t)pf_module_state+0x58a4U)) = 0;
  }
  return bVar4;
}

#undef DAT_10008004
#undef DAT_10008010
#undef DAT_10008018
#undef DAT_100080b8
#undef local_42

#undef DAT_100029d4
#define DAT_100029d4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x190U)))
#undef DAT_10008004
#define DAT_10008004 (*(uint *)(((uintptr_t)pf_module_state + 0x57c0U)))
#undef DAT_10008018
#define DAT_10008018 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x57d4U)))
#undef DAT_1000801c
#define DAT_1000801c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x57d8U)))
#undef DAT_10008020
#define DAT_10008020 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x57dcU)))
#undef DAT_100080c8
#define DAT_100080c8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5884U)))
#undef DAT_100080c9
#define DAT_100080c9 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5885U)))
#undef DAT_100080ca
#define DAT_100080ca (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5886U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100013f0
 */

undefined8 recovered_100013f0(uint param_1,long param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  ulong uVar5;
  undefined1 *puVar6;
  long lVar7;

  if ((DAT_10008004 <= param_1) || (uVar5 = (ulong)param_1, (&DAT_10008018)[uVar5 * 5] == 0)) {
    return 0;
  }
  uVar1 = *(uint *)(&DAT_10008020 + uVar5 * 0x14);
  lVar7 = (ulong)(uint)(&DAT_1000801c)[uVar5 * 5] * 0x150;
  uVar2 = (&DAT_100080c8)[lVar7];
  uVar3 = (&DAT_100080c9)[lVar7];
  uVar4 = (&DAT_100080ca)[lVar7];
  for (lVar7 = 0; lVar7 != 0x40; lVar7 = lVar7 + 1) {
    *(undefined1 *)(param_2 + lVar7) = 0;
  }
  for (lVar7 = 0; lVar7 != 4; lVar7 = lVar7 + 1) {
    *(undefined1 *)(param_2 + lVar7) = (&DAT_100029d4)[lVar7];
  }
  *(undefined1 *)(param_2 + 4) = uVar2;
  *(undefined1 *)(param_2 + 5) = uVar3;
  *(undefined1 *)(param_2 + 6) = uVar4;
  puVar6 = (undefined1 *)(param_2 + 8);
  for (lVar7 = 0; lVar7 != 0x20; lVar7 = lVar7 + 8) {
    *puVar6 = (char)(uVar1 >> (ulong)((uint)lVar7 & 0x1f));
    puVar6 = puVar6 + 1;
  }
  for (lVar7 = 0; lVar7 != 8; lVar7 = lVar7 + 1) {
    *(undefined1 *)(param_2 + 0x10 + lVar7) = 0;
  }
  return 1;
}

#undef DAT_100029d4
#undef DAT_10008004
#undef DAT_10008018
#undef DAT_1000801c
#undef DAT_10008020
#undef DAT_100080c8
#undef DAT_100080c9
#undef DAT_100080ca

#define local_4c (*(undefined4 *)(pf_stack_frame + 20))
#define local_48 (*(undefined8 *)(pf_stack_frame + 24))
#define uStack_50 (*(undefined4 *)(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100014c0
 */

undefined8
recovered_100014c0(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 *param_5)

{
  unsigned char pf_stack_frame[128] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;

  local_48 = 0;
  local_4c = 0;
  if (param_5 == (undefined1 *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = recovered_100015fc(param_1,param_2,param_3,param_4,0,4,(long)&local_48 + 4);
    if ((int)uVar2 != 0) {
      uVar2 = 0;
      if (((PF_PART2(local_48, 4) != 0) && (PF_PART2(local_48, 4) != 0xffffU)) &&
         (uVar2 = recovered_100015fc(param_1,param_2,param_3,param_4,8,4,(long)&local_48),
         (int)uVar2 != 0)) {
        uVar2 = recovered_100015fc(param_1,param_2,param_3,param_4,4,4,(long)(param_5 + 0x10));
        if ((int)uVar2 == 0) {
          *(undefined4 *)(param_5 + 0x10) = 0;
        }
        uVar2 = recovered_100015fc(param_1,param_2,param_3,param_4,0xc,4,(long)&local_4c);
        if ((int)uVar2 == 0) {
          PF_PART1(local_4c, 2) = 0;
          local_4c = 0;
        }
        else {
        }
        *(undefined4 *)(param_5 + 4) = PF_PART4(local_48, 4);
        *(ushort *)(param_5 + 10) =
             (ushort)((ulong)local_48 >> 8) & 0xff | (ushort)(((uint)local_48 & 0xff00ff) << 8);
        param_5[9] = (char)((ulong)local_48 >> 0x10);
        *param_5 = (char)param_2;
        param_5[1] = (char)param_3;
        param_5[2] = (char)param_4;
        param_5[8] = (char)((ulong)local_48 >> 0x18);
        param_5[0xc] = PF_PART1(local_4c, 2);
        for (lVar3 = 0; lVar3 != 6; lVar3 = lVar3 + 1) {
          uStack_50 = 0;
          uVar2 = recovered_100015fc(param_1,param_2,param_3,param_4,
                                     (ulong)((int)lVar3 * 4 + 0x10U & 0xfffc),4,(long)&uStack_50);
          uVar1 = 0;
          if ((int)uVar2 != 0) {
            uVar1 = uStack_50;
          }
          *(undefined4 *)(param_5 + lVar3 * 4 + 0x14) = uVar1;
        }
        uVar2 = 1;
      }
    }
  }
  return uVar2;
}

#undef local_4c
#undef local_48
#undef uStack_50

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100015fc
 */

undefined8
recovered_100015fc(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if ((((param_1 == (int *)0x0) || (*param_1 != 0x54584b57)) || ((uint)param_1[2] < 0x60)) ||
     ((param_7 == 0 || (param_1[0x17] == 0)))) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x10001644. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)(ulong)(uint)param_1[0x17])(param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001648
 */

void recovered_10001648(undefined1 *param_1,ulong param_2,char *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  char *pcVar2;

  if (param_1 == (undefined1 *)0x0) {
    return;
  }
  *param_1 = 0;
  uVar1 = recovered_100018f8((long)param_1);
  if ((param_1 != (undefined1 *)0x0) && (param_3 != (char *)0x0)) {
    pcVar2 = param_1 + uVar1;
    while( true ) {
      uVar1 = uVar1 + 1;
      if (*param_3 == '\0' || param_2 <= uVar1) break;
      *pcVar2 = *param_3;
      pcVar2 = pcVar2 + 1;
      param_3 = param_3 + 1;
    }
    *pcVar2 = '\0';
  }
  return;
}


#undef DAT_10008004
#define DAT_10008004 (*(uint *)(((uintptr_t)pf_module_state + 0x57c0U)))
#undef DAT_1000801c
#define DAT_1000801c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x57d8U)))
#define local_34 (*(uint *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001658
 */

void recovered_10001658(int *param_1,undefined4 *param_2)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  uint uVar1;
  bool bVar2;
  undefined8 uVar3;
  ulong uVar4;
  int *piVar5;
  ulong uVar6;

  local_34 = 0;
  if ((param_1 != (int *)0x0) && (param_2 != (undefined4 *)0x0)) {
    *param_2 = 0;
    piVar5 = &DAT_1000801c;
    uVar6 = (ulong)DAT_10008004;
    for (uVar4 = 0; uVar4 < uVar6; uVar4 = uVar4 + 1) {
      if (*piVar5 == param_2[1]) {
        piVar5[-1] = 0;
      }
      piVar5 = piVar5 + 5;
    }
    if (*(long *)(param_2 + 2) == 0) {
      bVar2 = false;
    }
    else {
      uVar3 = recovered_10001914(param_1,(long)param_2,0x14,&local_34);
      if (((int)uVar3 == 0) ||
         (((local_34 & 1) != 0 &&
          (uVar3 = recovered_100019d8(param_1,(long)param_2,0x14,(ulong)(local_34 & 0xfffffffe)),
          (int)uVar3 == 0)))) {
        bVar2 = true;
      }
      else {
        recovered_100019f0(param_1);
        uVar1 = 5000;
        if (param_2[8] != 0) {
          uVar1 = param_2[8];
        }
        uVar3 = recovered_10001a20(param_1,(long)param_2,0,uVar1);
        bVar2 = (int)uVar3 == 0;
      }
    }
    if (*(char *)((long)param_2 + 0x13) != '\0') {
      uVar1 = *(ushort *)(param_2 + 5) & 0xfffffffb;
      if (!bVar2) {
        uVar1 = (uint)*(ushort *)(param_2 + 5);
      }
      recovered_100018b0(param_1,(ulong)*(byte *)(param_2 + 4),
                         (ulong)*(byte *)((long)param_2 + 0x11),
                         (ulong)*(byte *)((long)param_2 + 0x12),(ulong)uVar1);
      *(undefined1 *)((long)param_2 + 0x13) = 0;
    }
    if (!bVar2) {
      recovered_10001b3c(param_1,(long *)(param_2 + 0xe));
      recovered_10001b3c(param_1,(long *)(param_2 + 0x1c));
      recovered_10001b3c(param_1,(long *)(param_2 + 0x2a));
      recovered_10001b3c(param_1,(long *)(param_2 + 0x38));
      if (*(long *)(param_2 + 0x48) != 0) {
        recovered_10001b74(param_1,*(long *)(param_2 + 0x48));
      }
      if (*(long *)(param_2 + 0x50) != 0) {
        recovered_10001b74(param_1,*(long *)(param_2 + 0x50));
      }
      *(undefined8 *)(param_2 + 0x48) = 0;
      *(undefined8 *)(param_2 + 0x46) = 0;
      *(undefined8 *)(param_2 + 0x50) = 0;
      *(undefined8 *)(param_2 + 0x4e) = 0;
    }
  }
  return;
}

#undef DAT_10008004
#undef DAT_1000801c
#undef local_34

#define local_3b (*(byte (*)[59])(pf_stack_frame + 21))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100017bc
 */

void recovered_100017bc(long param_1,ulong param_2,uint param_3)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  long lVar1;
  ulong uVar2;

  if (param_3 == 0) {
    lVar1 = recovered_100018f8(param_1);
    if ((param_1 != 0) && (lVar1 + 1U < param_2)) {
      *(undefined1 *)(param_1 + lVar1) = 0x30;
      *(undefined1 *)(param_1 + lVar1 + 1U) = 0;
    }
    return;
  }
  for (uVar2 = 0; (param_3 != 0 && (uVar2 < 10)); uVar2 = uVar2 + 1) {
    local_3b[uVar2 + 1] = (char)param_3 + (char)(param_3 / 10) * -10 | 0x30;
    param_3 = param_3 / 10;
  }
  for (; uVar2 != 0; uVar2 = uVar2 - 1) {
    recovered_10002154(param_1,param_2,local_3b[uVar2]);
  }
  return;
}

#undef local_3b

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001858
 */

void recovered_10001858(long param_1,ulong param_2,char *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  char *pcVar2;

  uVar1 = recovered_100018f8(param_1);
  if ((param_1 != 0) && (param_3 != (char *)0x0)) {
    pcVar2 = (char *)(param_1 + uVar1);
    while( true ) {
      uVar1 = uVar1 + 1;
      if (*param_3 == '\0' || param_2 <= uVar1) break;
      *pcVar2 = *param_3;
      pcVar2 = pcVar2 + 1;
      param_3 = param_3 + 1;
    }
    *pcVar2 = '\0';
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100018b0
 */

undefined8
recovered_100018b0(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if ((((param_1 == (int *)0x0) || (*param_1 != 0x54584b57)) || ((uint)param_1[2] < 100)) ||
     (param_1[0x18] == 0)) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x100018f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)(ulong)(uint)param_1[0x18])(param_2,param_3,param_4,4,2,param_5);
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100018f8
 */

long recovered_100018f8(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  long lVar2;

  lVar2 = 0;
  if (param_1 != 0) {
    lVar1 = 0;
    do {
      lVar2 = lVar1;
      lVar1 = lVar2 + 1;
    } while (*(char *)(param_1 + lVar2) != '\0');
  }
  return lVar2;
}


#define local_24 (*(undefined4 *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001914
 */

undefined8 recovered_10001914(int *param_1,long param_2,ulong param_3,undefined4 *param_4)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  int iVar2;

  local_24 = 0;
  if (param_4 == (undefined4 *)0x0) {
    return 0;
  }
  if (*(long *)(param_2 + 8) == 0) {
    return 0;
  }
  if ((param_1 != (int *)0x0) && (*param_1 == 0x54584b57)) {
    uVar1 = *(long *)(param_2 + 8) + (param_3 & 0xffffffff);
    if (((uint)param_1[2] < 0xc0) || (param_1[0x2f] == 0)) {
      if (uVar1 >> 0x20 != 0) {
        return 0;
      }
      if ((uint)param_1[2] < 0x6c) {
        return 0;
      }
      if (param_1[0x1a] == 0) {
        return 0;
      }
      iVar2 = (*(code *)(ulong)(uint)param_1[0x1a])(uVar1,4,&local_24);
    }
    else {
      iVar2 = (*(code *)(ulong)(uint)param_1[0x2f])(uVar1,4,&local_24);
    }
    if (iVar2 != 0) {
      *param_4 = local_24;
      return 1;
    }
  }
  return 0;
}

#undef local_24

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100019d8
 */

undefined8 recovered_100019d8(int *param_1,long param_2,ulong param_3,undefined8 param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  undefined8 uVar2;

  if (*(long *)(param_2 + 8) == 0) {
    return 0;
  }
  uVar1 = *(long *)(param_2 + 8) + (param_3 & 0xffffffff);
  if ((param_1 != (int *)0x0) && (*param_1 == 0x54584b57)) {
    if ((0xc3 < (uint)param_1[2]) && (param_1[0x30] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10001ad8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*(code *)(ulong)(uint)param_1[0x30])(uVar1,4);
      return uVar2;
    }
    if (((uVar1 >> 0x20 == 0) && (0x6f < (uint)param_1[2])) && (param_1[0x1b] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10001b00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*(code *)(ulong)(uint)param_1[0x1b])(uVar1,4,param_4);
      return uVar2;
    }
  }
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100019f0
 */

void recovered_100019f0(int *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if ((((param_1 == (int *)0x0) || (*param_1 != 0x54584b57)) || ((uint)param_1[2] < 0x7c)) ||
     (param_1[0x1e] == 0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x10001a18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulong)(uint)param_1[0x1e])();
  return;
}


#define uStack_44 (*(uint *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001a20
 */

undefined8 recovered_10001a20(int *param_1,long param_2,int param_3,uint param_4)

{
  unsigned char pf_stack_frame[128] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  uint uVar2;

  uVar2 = 0;
  while( true ) {
    if (param_4 < uVar2) {
      return 0;
    }
    uStack_44 = 0;
    uVar1 = recovered_10001914(param_1,param_2,0x1c,&uStack_44);
    if ((int)uVar1 == 0) {
      return uVar1;
    }
    if ((uStack_44 >> 1 & 1) != 0) {
      return 0;
    }
    if ((uint)(param_3 == 0) != (uStack_44 & 1)) break;
    recovered_10001b08(param_1,1000);
    uVar2 = uVar2 + 1;
  }
  return 1;
}

#undef uStack_44

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001aa8
 */

undefined8 recovered_10001aa8(int *param_1,ulong param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if ((param_1 != (int *)0x0) && (*param_1 == 0x54584b57)) {
    if ((0xc3 < (uint)param_1[2]) && (param_1[0x30] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10001ad8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*(code *)(ulong)(uint)param_1[0x30])(param_2,4);
      return uVar1;
    }
    if (((param_2 >> 0x20 == 0) && (0x6f < (uint)param_1[2])) && (param_1[0x1b] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10001b00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*(code *)(ulong)(uint)param_1[0x1b])(param_2,4);
      return uVar1;
    }
  }
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001b08
 */

void recovered_10001b08(int *param_1,undefined8 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if ((((param_1 == (int *)0x0) || (*param_1 != 0x54584b57)) || ((uint)param_1[2] < 0x34)) ||
     (param_1[0xc] == 0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x10001b34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulong)(uint)param_1[0xc])(param_2);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001b3c
 */

void recovered_10001b3c(int *param_1,long *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_2 != (long *)0x0) {
    if (*param_2 != 0) {
      recovered_10001b74(param_1,*param_2);
    }
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[6] = 0;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001b74
 */

void recovered_10001b74(int *param_1,undefined8 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if ((((param_1 == (int *)0x0) || (*param_1 != 0x54584b57)) || ((uint)param_1[2] < 0x3c)) ||
     (param_1[0xe] == 0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x10001ba0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulong)(uint)param_1[0xe])(param_2);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001ba8
 */

undefined8
recovered_10001ba8(int *param_1,long param_2,long *param_3,int param_4,int param_5,
                  undefined2 param_6,long param_7)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;

  uVar3 = (ulong)(uint)(param_5 * param_4);
  uVar1 = recovered_10001c84(param_1,param_5 * param_4,param_3);
  param_3[1] = uVar1;
  if (uVar1 != 0) {
    for (uVar1 = 0; uVar3 != uVar1; uVar1 = uVar1 + 1) {
      *(undefined1 *)(param_3[1] + uVar1) = 0;
    }
    uVar2 = recovered_10001d08(param_1,param_2,param_3[1],uVar3,(long)(param_3 + 2),
                               (long)param_3 + 0x14);
    if (((int)uVar2 != 0) && ((*(ushort *)(param_3 + 2) & 0xfff) == 0)) {
      *(int *)(param_3 + 3) = param_4;
      *(int *)((long)param_3 + 0x1c) = param_5;
      *(undefined2 *)((long)param_3 + 0x2c) = param_6;
      param_3[6] = param_7;
      param_3[4] = 0;
      *(undefined4 *)(param_3 + 5) = 1;
      recovered_10001d58(param_1,(ulong)*(uint *)(param_2 + 0x18),param_3[1],uVar3);
      return 1;
    }
  }
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001c84
 */

ulong recovered_10001c84(int *param_1,int param_2,long *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  ulong uVar2;

  uVar2 = 0;
  if ((param_3 != (long *)0x0) && (0xfff < param_2 + 0xfffU)) {
    *param_3 = 0;
    if (((param_1 == (int *)0x0) ||
        (((*param_1 != 0x54584b57 || ((uint)param_1[2] < 0x38)) || (param_1[0xd] == 0)))) ||
       (lVar1 = (*(code *)(ulong)(uint)param_1[0xd])(), lVar1 == 0)) {
      uVar2 = 0;
    }
    else {
      *param_3 = lVar1;
      uVar2 = lVar1 + 0xfffU & 0xfffffffffffff000;
    }
  }
  return uVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001d08
 */

undefined8
recovered_10001d08(int *param_1,long param_2,long param_3,undefined8 param_4,long param_5,
                  undefined8 param_6)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if ((((param_2 == 0) || (param_1 == (int *)0x0)) || (*param_1 != 0x54584b57)) ||
     ((((uint)param_1[2] < 0x74 || (param_5 == 0)) || ((param_3 == 0 || (param_1[0x1c] == 0)))))) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x10001d54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)(ulong)(uint)param_1[0x1c])
                    (*(undefined4 *)(param_2 + 0x18),param_3,param_4,param_5,param_6);
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001d58
 */

void recovered_10001d58(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if ((((param_1 == (int *)0x0) || (*param_1 != 0x54584b57)) || ((uint)param_1[2] < 0x78)) ||
     (param_1[0x1d] == 0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x10001d8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulong)(uint)param_1[0x1d])(param_2,param_3,param_4);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001d94
 */

void recovered_10001d94(long param_1,long param_2,undefined1 param_3,undefined4 param_4,
                       undefined2 *param_5)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined1 *puVar2;
  long lVar3;

  puVar2 = (undefined1 *)
           (*(long *)(param_2 + 8) +
           (ulong)*(uint *)(param_2 + 0x1c) * (ulong)*(uint *)(param_2 + 0x20));
  iVar1 = *(ushort *)(param_1 + 0x34) + 1;
  *(short *)(param_1 + 0x34) = (short)iVar1;
  for (lVar3 = 0; lVar3 != 0x40; lVar3 = lVar3 + 1) {
    puVar2[lVar3] = 0;
  }
  *puVar2 = param_3;
  puVar2[2] = (char)iVar1;
  puVar2[3] = (char)((uint)iVar1 >> 8);
  puVar2[4] = (char)param_4;
  puVar2[5] = (char)((uint)param_4 >> 8);
  puVar2[6] = (char)((uint)param_4 >> 0x10);
  puVar2[7] = (char)((uint)param_4 >> 0x18);
  *param_5 = (short)iVar1;
  return;
}


#define local_64 (*(undefined4 *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001dfc
 */

bool recovered_10001dfc(int *param_1,undefined4 *param_2,long param_3,long param_4,uint param_5,
                       undefined4 *param_6)

{
  unsigned char pf_stack_frame[160] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  long lVar6;
  int iVar7;
  uint uVar8;

  if (param_6 != (undefined4 *)0x0) {
    *param_6 = 0;
  }
  if ((((param_1 != (int *)0x0) && (param_2 != (undefined4 *)0x0)) && (param_3 != 0)) &&
     (((param_4 != 0 && (*(long *)(param_3 + 8) != 0)) &&
      ((*(long *)(param_4 + 8) != 0 &&
       ((*(int *)(param_3 + 0x18) != 0 && (*(int *)(param_4 + 0x18) != 0)))))))) {
    uVar3 = 5000000;
    if (param_2[8] != 0) {
      uVar3 = param_2[8] * 1000;
    }
    recovered_10001d58(param_1,(ulong)(uint)param_2[6],*(long *)(param_3 + 8),
                       (ulong)(uint)(*(int *)(param_3 + 0x1c) * *(int *)(param_3 + 0x18)));
    uVar8 = *(int *)(param_3 + 0x20) + 1;
    uVar2 = *(uint *)(param_3 + 0x18);
    uVar1 = 0;
    if (uVar2 != 0) {
      uVar1 = uVar8 / uVar2;
    }
    *(uint *)(param_3 + 0x20) = uVar8 - uVar1 * uVar2;
    recovered_100019f0(param_1);
    uVar5 = recovered_10001aa8(param_1,*(ulong *)(param_3 + 0x30));
    if ((int)uVar5 != 0) {
      iVar7 = 0;
      for (uVar8 = 0; uVar8 < uVar3; uVar8 = uVar8 + 100) {
        lVar6 = *(long *)(param_4 + 8) +
                (ulong)*(uint *)(param_4 + 0x1c) * (ulong)*(uint *)(param_4 + 0x24);
        recovered_10001d58(param_1,(ulong)(uint)param_2[6],*(long *)(param_4 + 8),
                           (ulong)(*(int *)(param_4 + 0x18) * *(uint *)(param_4 + 0x1c)));
        uVar2 = recovered_1000201c(lVar6,0xc);
        if ((uVar2 >> 0x10 & 1) == *(uint *)(param_4 + 0x28)) {
          uVar3 = recovered_1000201c(lVar6,8);
          if ((((param_5 == (uVar2 & 0xffff)) &&
               ((uint)*(ushort *)(param_3 + 0x2c) == uVar3 >> 0x10)) &&
              ((uVar3 & 0xffff) < *(uint *)(param_3 + 0x18))) &&
             ((uVar3 & 0xffff) == *(uint *)(param_3 + 0x20))) {
            if (param_6 != (undefined4 *)0x0) {
              uVar4 = recovered_1000201c(lVar6,0);
              *param_6 = uVar4;
            }
            uVar3 = *(int *)(param_4 + 0x24) + 1;
            uVar8 = *(uint *)(param_4 + 0x18);
            uVar1 = 0;
            if (uVar8 != 0) {
              uVar1 = uVar3 / uVar8;
            }
            iVar7 = uVar3 - uVar1 * uVar8;
            *(int *)(param_4 + 0x24) = iVar7;
            if (iVar7 == 0) {
              *(uint *)(param_4 + 0x28) = *(uint *)(param_4 + 0x28) ^ 1;
            }
            uVar5 = recovered_10001aa8(param_1,*(ulong *)(param_4 + 0x30));
            if ((int)uVar5 != 0) {
              return uVar2 < 0x20000;
            }
          }
          break;
        }
        if (iVar7 + (uVar8 / 1000) * 1000 == 0) {
          local_64 = 0;
          uVar5 = recovered_10001914(param_1,(long)param_2,0x1c,&local_64);
          if (((int)uVar5 == 0) || (((byte)local_64 >> 1 & 1) != 0)) break;
        }
        recovered_10001b08(param_1,100);
        iVar7 = iVar7 + -100;
      }
    }
    recovered_10001658(param_1,param_2);
  }
  return false;
}

#undef local_64

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000201c
 */

undefined4 recovered_1000201c(long param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;

  lVar1 = param_1 + (int)param_2;
  return CONCAT13(*(undefined1 *)(lVar1 + 3),
                  CONCAT12(*(undefined1 *)(lVar1 + 2),
                           CONCAT11(*(undefined1 *)(lVar1 + 1),
                                    *(undefined1 *)(param_1 + (ulong)param_2))));
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002040
 */

void recovered_10002040(long param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                       undefined4 param_5)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  *(char *)(param_1 + 0x18) = (char)param_2;
  *(char *)(param_1 + 0x19) = (char)((uint)param_2 >> 8);
  *(char *)(param_1 + 0x1a) = (char)((uint)param_2 >> 0x10);
  *(char *)(param_1 + 0x1b) = (char)((uint)param_2 >> 0x18);
  *(char *)(param_1 + 0x1c) = (char)param_3;
  *(char *)(param_1 + 0x1d) = (char)((uint)param_3 >> 8);
  *(char *)(param_1 + 0x1e) = (char)((uint)param_3 >> 0x10);
  *(char *)(param_1 + 0x1f) = (char)((uint)param_3 >> 0x18);
  *(char *)(param_1 + 0x20) = (char)param_4;
  *(char *)(param_1 + 0x21) = (char)((uint)param_4 >> 8);
  *(char *)(param_1 + 0x22) = (char)((uint)param_4 >> 0x10);
  *(char *)(param_1 + 0x23) = (char)((uint)param_4 >> 0x18);
  *(char *)(param_1 + 0x24) = (char)param_5;
  *(char *)(param_1 + 0x25) = (char)((uint)param_5 >> 8);
  *(char *)(param_1 + 0x26) = (char)((uint)param_5 >> 0x10);
  *(char *)(param_1 + 0x27) = (char)((uint)param_5 >> 0x18);
  return;
}


#define local_32 (*(ushort *)(pf_stack_frame + 30))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100020b4
 */

bool recovered_100020b4(int *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  bool bVar1;
  long extraout_x0;

  local_32 = 0;
  recovered_10001d94((long)param_2,(long)(param_2 + 0xe),6,param_4,&local_32);
  recovered_10002040(extraout_x0,param_2[0x52],param_2[0x53],0,0);
  *(undefined4 *)(extraout_x0 + 0x28) = param_3;
  recovered_10000754(*(undefined1 **)(param_2 + 0x4e),0x1000);
  recovered_10001d58(param_1,(ulong)(uint)param_2[6],*(undefined8 *)(param_2 + 0x4e),0x1000);
  bVar1 = recovered_10001dfc(param_1,param_2,(long)(param_2 + 0xe),(long)(param_2 + 0x1c),
                             (uint)local_32,(undefined4 *)0x0);
  if (bVar1) {
    recovered_10001d58(param_1,(ulong)(uint)param_2[6],*(undefined8 *)(param_2 + 0x4e),0x1000);
  }
  return bVar1;
}

#undef local_32

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002154
 */

void recovered_10002154(long param_1,ulong param_2,undefined1 param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;

  lVar1 = recovered_100018f8(param_1);
  if ((param_1 != 0) && (lVar1 + 1U < param_2)) {
    *(undefined1 *)(param_1 + lVar1) = param_3;
    *(undefined1 *)(param_1 + lVar1 + 1U) = 0;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002194
 */

void recovered_10002194(long param_1,ulong param_2,uint param_3,int param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;

  uVar4 = param_4 * 4;
  for (; param_4 != 0; param_4 = param_4 + -1) {
    uVar4 = uVar4 - 4;
    uVar3 = param_3 >> (ulong)(uVar4 & 0x1f);
    uVar1 = uVar3 & 0xf;
    bVar2 = (byte)uVar3 & 0xf | 0x30;
    if (9 < uVar1) {
      bVar2 = (char)uVar1 + 0x37;
    }
    recovered_10002154(param_1,param_2,bVar2);
  }
  return;
}


#undef DAT_10008000
#define DAT_10008000 (*(uint *)(((uintptr_t)pf_module_state + 0x57bcU)))
#undef DAT_10008004
#define DAT_10008004 (*(uint *)(((uintptr_t)pf_module_state + 0x57c0U)))
#undef DAT_10008010
#define DAT_10008010 (*(int * *)(((uintptr_t)pf_module_state + 0x57ccU)))
#undef DAT_10008018
#define DAT_10008018 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x57d4U)))
#undef DAT_1000801c
#define DAT_1000801c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x57d8U)))
#undef DAT_10008020
#define DAT_10008020 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x57dcU)))
#undef DAT_10008028
#define DAT_10008028 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x57e4U)))
#undef DAT_100080b8
#define DAT_100080b8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5874U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002200
 */

bool recovered_10002200(uint param_1,uint param_2,undefined1 *param_3,uint param_4,int param_5)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int *piVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  undefined1 *puVar11;
  bool bVar12;
  int iVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;

  if (DAT_10008004 <= param_1) {
    return false;
  }
  uVar15 = (ulong)param_1;
  lVar9 = uVar15 * 0x14;
  if (((&DAT_10008018)[uVar15 * 5] == 0) || (DAT_10008000 <= (uint)(&DAT_1000801c)[uVar15 * 5])) {
    bVar12 = false;
  }
  else {
    lVar10 = (ulong)(uint)(&DAT_1000801c)[uVar15 * 5] * 0x150;
    piVar1 = (int *)(&DAT_100080b8 + lVar10);
    recovered_100023f8((long)piVar1);
    bVar12 = false;
    if (((param_4 != 0) && (param_3 != (undefined1 *)0x0)) && (DAT_10008010 != (int *)0x0)) {
      if (((uint)(&DAT_10008028)[uVar15 * 5] < param_2 ||
           (&DAT_10008028)[uVar15 * 5] - param_2 < param_4) || (*piVar1 == 0)) {
        bVar12 = false;
      }
      else {
        uVar4 = *(uint *)(lVar9 + ((uintptr_t)pf_module_state+0x57e0U)) >> 9;
        for (; param_4 != 0; param_4 = param_4 - (uVar6 >> 9)) {
          uVar6 = 0;
          if (uVar4 != 0) {
            uVar6 = param_2 / uVar4;
          }
          uVar15 = (ulong)uVar6;
          iVar13 = param_2 - uVar6 * uVar4;
          uVar3 = iVar13 * 0x200;
          uVar5 = *(uint *)(lVar10 + ((uintptr_t)pf_module_state+0x58a0U)) - (uVar3 | *(uint *)(lVar10 + ((uintptr_t)pf_module_state+0x58a0U)) & 0x1ff);
          uVar6 = param_4 << 9;
          if ((ulong)uVar5 <= (ulong)param_4 * 0x200) {
            uVar6 = uVar5;
          }
          uVar16 = (ulong)uVar6;
          uVar5 = uVar6 + iVar13 * 0x200;
          uVar2 = *(uint *)(lVar9 + ((uintptr_t)pf_module_state+0x57e0U));
          uVar7 = 0;
          if (uVar2 != 0) {
            uVar7 = ((uVar2 + uVar5) - 1) / uVar2;
          }
          if (param_5 == 0) {
            bVar12 = recovered_10002420(DAT_10008010,piVar1,*(undefined4 *)(&DAT_10008020 + lVar9),2
                                        ,uVar15,uVar7,uVar2);
            if (!bVar12) goto LAB_100023e0;
            iVar13 = 0;
            puVar11 = param_3;
            for (uVar15 = uVar16; uVar15 != 0; uVar15 = uVar15 - 1) {
              *puVar11 = *(undefined1 *)(*(long *)(lVar10 + ((uintptr_t)pf_module_state+0x598cU)) + (ulong)(uVar3 + iVar13));
              iVar13 = iVar13 + 1;
              puVar11 = puVar11 + 1;
            }
          }
          else {
            uVar8 = 0;
            if (uVar2 != 0) {
              uVar8 = uVar5 / uVar2;
            }
            if ((uVar5 != uVar8 * uVar2 || iVar13 != 0) &&
               (bVar12 = recovered_10002420(DAT_10008010,piVar1,
                                            *(undefined4 *)(&DAT_10008020 + lVar9),2,uVar15,uVar7,
                                            uVar2), !bVar12)) goto LAB_100023e0;
            iVar13 = 0;
            puVar11 = param_3;
            for (uVar14 = uVar16; uVar14 != 0; uVar14 = uVar14 - 1) {
              *(undefined1 *)(*(long *)(lVar10 + ((uintptr_t)pf_module_state+0x598cU)) + (ulong)(uVar3 + iVar13)) = *puVar11;
              iVar13 = iVar13 + 1;
              puVar11 = puVar11 + 1;
            }
            bVar12 = recovered_10002420(DAT_10008010,piVar1,*(undefined4 *)(&DAT_10008020 + lVar9),1
                                        ,uVar15,uVar7,*(int *)(lVar9 + ((uintptr_t)pf_module_state+0x57e0U)));
            if (!bVar12) goto LAB_100023e0;
          }
          param_3 = param_3 + uVar16;
          param_2 = param_2 + (uVar6 >> 9);
        }
        bVar12 = true;
      }
    }
LAB_100023e0:
    *(undefined4 *)(lVar10 + ((uintptr_t)pf_module_state+0x58a4U)) = 0;
  }
  return bVar12;
}

#undef DAT_10008000
#undef DAT_10008004
#undef DAT_10008010
#undef DAT_10008018
#undef DAT_1000801c
#undef DAT_10008020
#undef DAT_10008028
#undef DAT_100080b8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100023f8
 */

void recovered_100023f8(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;

  piVar1 = (int *)(param_1 + 0x30);
  while( true ) {
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      { __typeof__(*piVar1) pf_exclusive_expected = iVar2;
bVar4 = __atomic_compare_exchange_n(&(*piVar1),&pf_exclusive_expected,1,0,__ATOMIC_ACQ_REL,__ATOMIC_RELAXED);
cVar3 = bVar4 ? 0 : 1;
}
    } while (cVar3 != '\0');
    if (iVar2 == 0) break;
    do {
    } while (*piVar1 != 0);
  }
  return;
}


#define local_52 (*(ushort *)(pf_stack_frame + 30))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002420
 */

bool recovered_10002420(int *param_1,undefined4 *param_2,undefined4 param_3,int param_4,
                       undefined8 param_5,int param_6,int param_7)

{
  unsigned char pf_stack_frame[144] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  bool bVar3;
  long extraout_x0;
  undefined4 uVar4;
  undefined4 uVar5;

  uVar1 = param_7 * param_6;
  local_52 = 0;
  if ((uVar1 - 0x2001 < 0xffffe000) || (param_2[0xb] != 0 && (uint)param_2[0xb] < uVar1)) {
    bVar3 = false;
  }
  else {
    if ((param_4 - 1U & 0xff) < 2) {
      recovered_10001d58(param_1,(ulong)(uint)param_2[6],*(undefined8 *)(param_2 + 0x46),
                         (ulong)uVar1);
    }
    recovered_10001d94((long)param_2,(long)(param_2 + 0x2a),(char)param_4,param_3,&local_52);
    if (uVar1 < 0x1001) {
      uVar4 = 0;
      uVar5 = 0;
    }
    else {
      uVar4 = param_2[0x4c];
      uVar5 = param_2[0x4d];
    }
    recovered_10002040(extraout_x0,param_2[0x4a],param_2[0x4b],uVar4,uVar5);
    *(char *)(extraout_x0 + 0x28) = (char)param_5;
    *(char *)(extraout_x0 + 0x29) = (char)((ulong)param_5 >> 8);
    *(char *)(extraout_x0 + 0x2a) = (char)((ulong)param_5 >> 0x10);
    *(char *)(extraout_x0 + 0x2b) = (char)((ulong)param_5 >> 0x18);
    *(undefined4 *)(extraout_x0 + 0x2c) = 0;
    iVar2 = param_6 + -1;
    *(char *)(extraout_x0 + 0x30) = (char)iVar2;
    *(char *)(extraout_x0 + 0x31) = (char)((uint)iVar2 >> 8);
    *(char *)(extraout_x0 + 0x32) = (char)((uint)iVar2 >> 0x10);
    *(char *)(extraout_x0 + 0x33) = (char)((uint)iVar2 >> 0x18);
    bVar3 = recovered_10001dfc(param_1,param_2,(long)(param_2 + 0x2a),(long)(param_2 + 0x38),
                               (uint)local_52,(undefined4 *)0x0);
    if ((param_4 == 2) && (bVar3)) {
      recovered_10001d58(param_1,(ulong)(uint)param_2[6],*(undefined8 *)(param_2 + 0x46),
                         (ulong)uVar1);
      bVar3 = true;
    }
  }
  return bVar3;
}

#undef local_52

#undef DAT_10002868
#define DAT_10002868 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x24U)))
#undef DAT_10002870
#define DAT_10002870 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2cU)))
#undef DAT_10008000
#define DAT_10008000 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x57bcU)))
#undef DAT_10008004
#define DAT_10008004 (*(uint *)(((uintptr_t)pf_module_state + 0x57c0U)))
#undef DAT_10008010
#define DAT_10008010 (*(int * *)(((uintptr_t)pf_module_state + 0x57ccU)))
#undef DAT_10008028
#define DAT_10008028 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x57e4U)))
#undef str_100029d9
#define str_100029d9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x195U)))
#undef str_100029ed
#define str_100029ed (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1a9U)))
#undef str_10002a36
#define str_10002a36 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1f2U)))
#undef str_10002a49
#define str_10002a49 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x205U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002574
 */

undefined8 recovered_10002574(undefined8 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  uint *puVar5;
  long lVar6;

  uVar3 = 0;
  if (((param_1 != (undefined8 *)0x0) && (DAT_10008010 != (int *)0x0)) &&
     (uVar4 = (ulong)DAT_10008004, DAT_10008004 != 0)) {
    lVar6 = 0;
    puVar5 = &DAT_10008028;
    for (; uVar4 != 0; uVar4 = uVar4 - 1) {
      if (puVar5[-4] != 0) {
        lVar6 = lVar6 + (ulong)*puVar5;
      }
      puVar5 = puVar5 + 5;
    }
    recovered_10000754((undefined1 *)param_1,500);
    *param_1 = DAT_10002868;
    *(undefined8 *)((long)param_1 + 0xc) = DAT_10002870;
    if (((DAT_10008010 == (int *)0x0) || (*DAT_10008010 != 0x54584b57)) ||
       (((uint)DAT_10008010[2] < 0x30 || (DAT_10008010[0xb] == 0)))) {
      uVar2 = 0;
    }
    else {
      uVar2 = (*(code *)(ulong)(uint)DAT_10008010[0xb])();
    }
    *(undefined4 *)(param_1 + 3) = uVar2;
    uVar1 = DAT_10008004;
    *(undefined4 *)((long)param_1 + 0x44) = DAT_10008000;
    *(uint *)(param_1 + 9) = uVar1;
    *(int *)((long)param_1 + 0x4c) = (int)lVar6;
    *(int *)(param_1 + 10) = (int)((ulong)lVar6 >> 0x20);
    recovered_10001648((undefined1 *)((long)param_1 + 0x54),0x40,str_100029d9);
    recovered_10001648((undefined1 *)((long)param_1 + 0x94),0x40,str_100029ed);
    recovered_10001648((undefined1 *)((long)param_1 + 0xd4),0x60,str_10002a36);
    recovered_10001648((undefined1 *)((long)param_1 + 0x134),0xc0,str_10002a49);
    uVar3 = 1;
  }
  return uVar3;
}

#undef DAT_10002868
#undef DAT_10002870
#undef DAT_10008000
#undef DAT_10008004
#undef DAT_10008010
#undef DAT_10008028
#undef str_100029d9
#undef str_100029ed
#undef str_10002a36
#undef str_10002a49

void *memset(void *p,int v,size_t n){volatile unsigned char *b=p;while(n--)*b++=(unsigned char)v;return p;}
void __bzero(void *p,size_t n){volatile unsigned char *b=p;while(n--)*b++=0;}
void bzero(void *p,size_t n){__bzero(p,n);}
