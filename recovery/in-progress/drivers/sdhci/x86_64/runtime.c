/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_10003000
#define DAT_10003000 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x71eU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000470
 */

void * recovered_10000470(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return &DAT_10003000;
}

#undef DAT_10003000

#undef DAT_100028f0
#define DAT_100028f0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xeU)))
#undef DAT_10004000
#define DAT_10004000 (*(int * *)(((uintptr_t)pf_module_state + 0x171eU)))
#undef DAT_10004008
#define DAT_10004008 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1726U)))
#undef DAT_1000400c
#define DAT_1000400c (*(int *)(((uintptr_t)pf_module_state + 0x172aU)))
#undef UNK_100028f8
#define UNK_100028f8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x16U)))
#undef _DAT_100028f0
#define _DAT_100028f0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0xeU)))
#undef str_10002a1f
#define str_10002a1f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x13dU)))
#undef str_10002a33
#define str_10002a33 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x151U)))
#undef str_10002a41
#define str_10002a41 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x15fU)))
#undef str_10002a54
#define str_10002a54 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x172U)))
#undef uRam00000000100028f8
#define uRam00000000100028f8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x16U)))
#define local_34 (*(uint *)(pf_stack_frame + 540))
#define uStack_230 (*(undefined8 *)(pf_stack_frame + 32))
#define local_238 (*(undefined8 *)(pf_stack_frame + 24))
#define local_220 (*(code * *)(pf_stack_frame + 48))
#define local_210 (*(undefined1 (*)[528])(pf_stack_frame + 64))
#define local_1d0 (*(undefined1 (*)[464])(pf_stack_frame + 128))
#define local_190 (*(undefined1 (*)[400])(pf_stack_frame + 192))
#define local_130 (*(undefined1 (*)[304])(pf_stack_frame + 288))
#define local_68 (*(byte (*)[104])(pf_stack_frame + 488))
#define local_64 (*(int *)(pf_stack_frame + 492))
#define local_60 (*(undefined4 *)(pf_stack_frame + 496))
#define local_5c (*(undefined4 *)(pf_stack_frame + 500))
#define local_58 (*(undefined4 *)(pf_stack_frame + 504))
#define local_54 (*(undefined4 *)(pf_stack_frame + 508))
#define local_50 (*(undefined4 *)(pf_stack_frame + 512))
#define local_4c (*(undefined4 *)(pf_stack_frame + 516))
#define local_48 (*(undefined4 *)(pf_stack_frame + 520))
#define local_44 (*(undefined4 *)(pf_stack_frame + 524))
#define local_40 (*(undefined4 *)(pf_stack_frame + 528))
#define local_3c (*(undefined4 *)(pf_stack_frame + 532))
#define local_38 (*(uint *)(pf_stack_frame + 536))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000047d
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint recovered_1000047d(void *api)

{
  unsigned char pf_stack_frame[624] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;

  if (api == (void *)0x0) {
    return 0;
  }
  if (((*(int *)api == 0x54584b57) && (*(int *)((long)api + 4) == 1100000)) &&
     (0xf7 < *(uint *)((long)api + 8))) {
    DAT_10004008 = 0;
    DAT_1000400c = 0;
    DAT_10004000 = api;
    recovered_1000072e(((uintptr_t)pf_module_state+0x172eU),0xd0);
    recovered_1000072e(((uintptr_t)pf_module_state+0x17feU),0x1c0);
    if (((*(int *)api == 0x54584b57) && (0x5f < *(uint *)((long)api + 8))) &&
       (*(int *)((long)api + 0x5c) != 0)) {
      uVar3 = 0;
      while (uVar3 != 0x100) {
        uVar4 = 0;
        local_34 = uVar3;
        while (uVar4 != 0x20) {
          local_38 = uVar4;
          iVar1 = recovered_100017b0(api,uVar3 & 0xff,uVar4 & 0xff,0,(undefined1 *)&local_238);
          if (iVar1 != 0) {
            recovered_10000749((byte *)&local_238);
            if (((int8_t)PF_PART1(uStack_230, 4)) < '\0') {
              for (iVar1 = -7; iVar1 != 0; iVar1 = iVar1 + 1) {
                iVar2 = recovered_100017b0(api,uVar3 & 0xff,uVar4 & 0xff,iVar1 + 8U & 0xff,local_68)
                ;
                if (iVar2 != 0) {
                  recovered_10000749(local_68);
                }
              }
            }
          }
          uVar4 = local_38 + 1;
        }
        uVar3 = local_34 + 1;
      }
    }
    if (DAT_1000400c != 0) {
      local_64 = DAT_1000400c;
      local_68[0] = 3;
      local_68[1] = 0;
      local_68[2] = 0;
      local_68[3] = 0;
      local_60 = ((uintptr_t)&recovered_10001625);
      local_5c = ((uintptr_t)&recovered_1000167d);
      local_58 = ((uintptr_t)&recovered_1000168a);
      local_54 = ((uintptr_t)&recovered_10001698);
      local_50 = ((uintptr_t)&recovered_100016fa);
      local_4c = 0;
      local_48 = 0;
      local_44 = 0;
      local_40 = 0;
      local_3c = 0;
      recovered_1000072e((long)&local_238,0x1c8);
      local_238 = _DAT_100028f0;
      uStack_230 = uRam00000000100028f8;
      local_220 = recovered_10002798;
      recovered_100022c6(local_210,0x40,str_10002a1f);
      recovered_100022c6(local_1d0,0x40,str_10002a33);
      recovered_100022c6(local_190,0x60,str_10002a41);
      recovered_100022c6(local_130,0xc0,str_10002a54);
      if (((DAT_10004000 != (int *)0x0) && (*DAT_10004000 == 0x54584b57)) &&
         (((0xef < (uint)DAT_10004000[2] &&
           (((((code *)(ulong)(uint)DAT_10004000[0x3b] != (code *)0x0 &&
              (iVar1 = (*(code *)(ulong)(uint)DAT_10004000[0x3b])(&local_238), iVar1 != 0)) &&
             (*(int *)api == 0x54584b57)) &&
            ((0xd3 < *(uint *)((long)api + 8) &&
             ((code *)(ulong)*(uint *)((long)api + 0xd0) != (code *)0x0)))))) &&
          (iVar1 = (*(code *)(ulong)*(uint *)((long)api + 0xd0))(local_68), iVar1 != 0)))) {
        return 1;
      }
    }
    recovered_100015bf();
  }
  return 0;
}

#undef DAT_100028f0
#undef DAT_10004000
#undef DAT_10004008
#undef DAT_1000400c
#undef UNK_100028f8
#undef _DAT_100028f0
#undef str_10002a1f
#undef str_10002a33
#undef str_10002a41
#undef str_10002a54
#undef uRam00000000100028f8
#undef local_34
#undef uStack_230
#undef local_238
#undef local_220
#undef local_210
#undef local_1d0
#undef local_190
#undef local_130
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

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000072e
 */

void recovered_1000072e(long param_1,long param_2)

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


#undef DAT_10002900
#define DAT_10002900 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1eU)))
#undef DAT_10002910
#define DAT_10002910 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2eU)))
#undef DAT_100029cb
#define DAT_100029cb (*(uint8_t *)(((uintptr_t)pf_module_state + 0xe9U)))
#undef DAT_100029cd
#define DAT_100029cd (*(uint8_t *)(((uintptr_t)pf_module_state + 0xebU)))
#undef DAT_100029cf
#define DAT_100029cf (*(uint8_t *)(((uintptr_t)pf_module_state + 0xedU)))
#undef DAT_100029d1
#define DAT_100029d1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xefU)))
#undef DAT_100029d6
#define DAT_100029d6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xf4U)))
#undef DAT_100029d9
#define DAT_100029d9 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xf7U)))
#undef DAT_100029db
#define DAT_100029db (*(uint8_t *)(((uintptr_t)pf_module_state + 0xf9U)))
#undef DAT_10004000
#define DAT_10004000 (*(int * *)(((uintptr_t)pf_module_state + 0x171eU)))
#undef DAT_10004008
#define DAT_10004008 (*(uint *)(((uintptr_t)pf_module_state + 0x1726U)))
#undef DAT_1000400c
#define DAT_1000400c (*(uint *)(((uintptr_t)pf_module_state + 0x172aU)))
#undef DAT_10004010
#define DAT_10004010 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x172eU)))
#undef DAT_10004020
#define DAT_10004020 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x173eU)))
#undef DAT_1000402c
#define DAT_1000402c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x174aU)))
#undef DAT_100040e0
#define DAT_100040e0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17feU)))
#undef DAT_100040e8
#define DAT_100040e8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1806U)))
#undef DAT_100040ec
#define DAT_100040ec (*(uint8_t *)(((uintptr_t)pf_module_state + 0x180aU)))
#undef str_10002947
#define str_10002947 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x65U)))
#undef str_10002964
#define str_10002964 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x82U)))
#undef str_10002973
#define str_10002973 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x91U)))
#undef str_1000298a
#define str_1000298a (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa8U)))
#define local_4f8 (*(uint (*)[318])(pf_stack_frame + 24))
#define local_f8 (*(undefined4 *)(pf_stack_frame + 1048))
#define bStack_4f9 (*(byte *)(pf_stack_frame + 23))
#define local_90 (*(ulong *)(pf_stack_frame + 1152))
#define local_88 (*(undefined8 *)(pf_stack_frame + 1160))
#define local_80 (*(uint *)(pf_stack_frame + 1168))
#define local_7c (*(uint *)(pf_stack_frame + 1172))
#define local_78 (*(uint *)(pf_stack_frame + 1176))
#define local_74 (*(uint *)(pf_stack_frame + 1180))
#define local_70 (*(int * *)(pf_stack_frame + 1184))
#define local_68 (*(uint *)(pf_stack_frame + 1192))
#define local_64 (*(uint *)(pf_stack_frame + 1196))
#define local_60 (*(undefined8 *)(pf_stack_frame + 1200))
#define local_58 (*(int *)(pf_stack_frame + 1208))
#define local_54 (*(uint *)(pf_stack_frame + 1212))
#define local_50 (*(undefined * *)(pf_stack_frame + 1216))
#define local_44 (*(uint *)(pf_stack_frame + 1228))
#define local_40 (*(uint *)(pf_stack_frame + 1232))
#define local_3c (*(uint *)(pf_stack_frame + 1236))
#define local_38 (*(ulong * *)(pf_stack_frame + 1240))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000749
 */

void recovered_10000749(byte *param_1)

{
  unsigned char pf_stack_frame[1328] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int *piVar4;
  ulong *puVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined4 extraout_var = 0;
  undefined4 extraout_var_00 = 0;
  uint uVar12;
  long lVar13;
  long lVar14;
  uint uVar15;
  undefined *puVar16;
  uint uVar17;
  long lVar18;
  ulong uVar19;
  bool bVar20;

  uVar17 = DAT_1000400c;
  if (((((param_1[8] == 8) && (param_1[9] == 5)) && (param_1[10] < 2)) &&
      (((param_1[0xc] & 0x7f) == 0 && (DAT_10004008 < 4)))) &&
     (uVar9 = recovered_10001962(DAT_10004000,*param_1,param_1[1],param_1[2],0x40,1,(long)&local_78)
     , (int)uVar9 != 0)) {
    uVar12 = local_78 & 7;
    local_90 = (ulong)uVar12;
    uVar15 = local_78 >> 4 & 7;
    local_70 = (int *)(ulong)uVar15;
    if ((uVar12 < 6 && (local_78 & 0x88) == 0) && uVar15 < -(uVar12 - 6)) {
      lVar18 = (ulong)DAT_10004008 * 0x34;
      local_50 = &DAT_10004010 + lVar18;
      recovered_1000072e((long)local_50,0x34);
      uVar9 = *(undefined8 *)param_1;
      uVar11 = *(undefined8 *)(param_1 + 8);
      uVar1 = *(undefined8 *)(param_1 + 0x10);
      uVar2 = *(undefined8 *)(param_1 + 0x18);
      uVar3 = *(undefined8 *)(param_1 + 0x24);
      *(undefined8 *)(&DAT_1000402c + lVar18) = *(undefined8 *)(param_1 + 0x1c);
      *(undefined8 *)(lVar18 + ((uintptr_t)pf_module_state+0x1752U)) = uVar3;
      *(undefined8 *)(&DAT_10004020 + lVar18) = uVar1;
      *(undefined8 *)(lVar18 + ((uintptr_t)pf_module_state+0x1746U)) = uVar2;
      *(undefined8 *)(&DAT_10004010 + lVar18) = uVar9;
      *(undefined8 *)(lVar18 + ((uintptr_t)pf_module_state+0x1736U)) = uVar11;
      if ((param_1[0x12] & 0x10) == 0) {
        puVar16 = local_50;
      }
      else {
        uVar9 = recovered_10001962(DAT_10004000,*param_1,param_1[1],param_1[2],0x34,1,
                                   (long)local_4f8);
        if ((int)uVar9 == 0) {
          return;
        }
        local_38 = (ulong *)CONCAT44(PF_PART4(local_38, 4),uVar17);
        bVar6 = false;
        bVar20 = false;
        for (uVar17 = 0; (local_4f8[0] != 0 && (uVar17 < 0x30)); uVar17 = uVar17 + 1) {
          if ((0xbc < local_4f8[0] - 0x40) || ((local_4f8[0] & 3) != 0)) goto LAB_10000905;
          uVar9 = recovered_10001962(DAT_10004000,*param_1,param_1[1],param_1[2],(short)local_4f8[0]
                                     ,2,(long)&local_f8);
          puVar16 = local_50;
          if ((int)uVar9 == 0) goto LAB_10000905;
          if ((char)local_f8 == '\x01') {
            uVar17 = (uint)local_38;
            if (local_4f8[0] < 0xf9) {
              uVar9 = recovered_10001962(DAT_10004000,*param_1,param_1[1],param_1[2],
                                         (short)local_4f8[0] + 4,2,(long)&local_3c);
              if ((int)uVar9 != 0) {
                uVar9 = recovered_100019af(DAT_10004000,*param_1,param_1[1],param_1[2],
                                           (short)local_4f8[0] + 4);
                if ((int)uVar9 != 0) {
                  recovered_10001b3c(DAT_10004000,10000);
                  uVar9 = recovered_10001962(DAT_10004000,*param_1,param_1[1],param_1[2],
                                             (short)local_4f8[0] + 4,2,(long)&local_3c);
                  bVar20 = (local_3c & 3) == 0 && (int)uVar9 != 0;
                }
              }
            }
            goto LAB_1000090d;
          }
          local_4f8[0] = local_f8 >> 8;
        }
        bVar6 = local_4f8[0] == 0;
LAB_10000905:
        bVar20 = bVar6;
        puVar16 = local_50;
        uVar17 = (uint)local_38;
LAB_1000090d:
        if (!bVar20) {
          return;
        }
      }
      uVar9 = recovered_10001962(DAT_10004000,*param_1,param_1[1],param_1[2],4,2,
                                 (long)(puVar16 + 0x2c));
      if ((int)uVar9 != 0) {
        local_64 = *(uint *)(puVar16 + 0x2c) & 0xfffffbf9 | 0x402;
        *(undefined4 *)(puVar16 + 0x30) = 1;
        uVar9 = recovered_100019af(DAT_10004000,*param_1,param_1[1],param_1[2],4);
        if ((((int)uVar9 != 0) &&
            (uVar9 = recovered_10001962(DAT_10004000,*param_1,param_1[1],param_1[2],4,2,
                                        (long)&local_64), (int)uVar9 != 0)) &&
           ((local_64 & 0x406) == 0x402)) {
          uVar19 = 0;
LAB_100009ca:
          if ((uVar19 <= local_70) && (DAT_1000400c < 8)) {
            lVar18 = (ulong)DAT_1000400c * 0x38;
            local_38 = (ulong *)(&DAT_100040e0 + lVar18);
            recovered_1000072e((long)local_38,0x38);
            *(uint *)(&DAT_100040e8 + lVar18) = DAT_10004008;
            *(int *)(&DAT_100040ec + lVar18) = (int)uVar19;
            piVar4 = DAT_10004000;
            local_f8 = 0;
            uVar10 = uVar19 + local_90;
            if (((4 < (local_90 + uVar19) - 1) ||
                ((*(uint *)(param_1 + uVar10 * 4 + 0x10) & 7) != 4)) &&
               (uVar12 = *(uint *)(param_1 + uVar10 * 4 + 0x14), (uVar12 & 1) == 0 && uVar12 != 0))
            {
              local_3c = uVar12;
              recovered_10001962(DAT_10004000,*param_1,param_1[1],param_1[2],
                                 (short)uVar10 * 4 + 0x10,4,(long)&local_3c);
              uVar12 = 0;
              if ((local_3c & 7) == 4) {
                if (4 < uVar10) goto LAB_10001264;
                local_f8 = *(uint *)(param_1 + uVar10 * 4 + 0x18);
                recovered_10001962(piVar4,*param_1,param_1[1],param_1[2],(short)uVar10 * 4 + 0x14,4,
                                   (long)&local_f8);
                uVar12 = local_f8;
              }
              puVar5 = local_38;
              uVar15 = 0xfffffffc;
              if ((local_3c & 1) == 0) {
                uVar15 = 0xfffffff0;
              }
              uVar15 = uVar15 & local_3c;
              if (uVar15 == 0 && uVar12 == 0) goto LAB_10001264;
              *local_38 = 0;
              local_4f8[0] = 0;
              if ((piVar4 == (int *)0x0) || (*piVar4 != 0x54584b57)) goto LAB_10001264;
              if (((uint)piVar4[2] < 0xbc) || ((code *)(ulong)(uint)piVar4[0x2e] == (code *)0x0)) {
                if (((0x67 < (uint)piVar4[2] && uVar12 == 0) &&
                    ((code *)(ulong)(uint)piVar4[0x19] != (code *)0x0)) &&
                   (iVar7 = (*(code *)(ulong)(uint)piVar4[0x19])(uVar15,0,0x100,local_4f8),
                   iVar7 != 0)) {
                  *puVar5 = (ulong)local_4f8[0];
                  goto LAB_10000b93;
                }
                goto LAB_10001264;
              }
              iVar7 = (*(code *)(ulong)(uint)piVar4[0x2e])(uVar15,uVar12,0x100,local_38);
              if (iVar7 == 0) goto LAB_10001264;
LAB_10000b93:
              uVar9 = recovered_10001b62((long *)puVar5,1);
              if (((((int)uVar9 != 0) &&
                   (uVar9 = recovered_10001be0((long *)local_38,0xfe,2,&local_68), (int)uVar9 != 0))
                  && ((local_68 != 0xffff &&
                      ((uVar9 = recovered_10001be0((long *)local_38,0x40,4,&local_80),
                       (int)uVar9 != 0 && (local_80 != 0xffffffff)))))) &&
                 ((local_80 & 0x1000000) != 0)) {
                uVar12 = 0x3f;
                if (1 < (local_68 & 0xff)) {
                  uVar12 = 0xff;
                }
                *(uint *)(local_38 + 2) = local_68 & 0xff;
                *(uint *)((long)local_38 + 0x14) = (uVar12 & local_80 >> 8) * 1000000;
                uVar9 = recovered_10001cc0((long *)local_38,0x38,4,0);
                if ((((((int)uVar9 != 0) &&
                      (uVar9 = recovered_10001cc0((long *)local_38,0x34,4,0xffff80f3),
                      (int)uVar9 != 0)) &&
                     (uVar9 = recovered_10001cc0((long *)local_38,0x30,4,0xffffffff),
                     (int)uVar9 != 0)) &&
                    ((uVar9 = recovered_10001cc0((long *)local_38,0x29,1,0), (int)uVar9 != 0 &&
                     (uVar9 = recovered_10001cc0((long *)local_38,0x28,1,0), (int)uVar9 != 0)))) &&
                   (((uint)local_38[2] < 2 ||
                    (uVar9 = recovered_10001cc0((long *)local_38,0x3e,2,0), (int)uVar9 != 0)))) {
                  recovered_10001b3c(DAT_10004000,10000);
                  uVar9 = recovered_10001cc0((long *)local_38,0x29,1,0xe);
                  if (((int)uVar9 != 0) &&
                     (uVar9 = recovered_10001cc0((long *)local_38,0x29,1,0xf), (int)uVar9 != 0)) {
                    recovered_10001b3c(DAT_10004000,10000);
                    iVar7 = 999;
                    while( true ) {
                      uVar9 = recovered_10001be0((long *)local_38,0x24,4,&local_7c);
                      if (((int)uVar9 == 0) || (local_7c == 0xffffffff)) goto LAB_10001249;
                      if ((~local_7c & 0x30000) == 0) break;
                      bVar20 = iVar7 == 0;
                      iVar7 = iVar7 + -1;
                      if (bVar20) goto LAB_10001249;
                      recovered_10001b3c(DAT_10004000,1000);
                    }
                    uVar10 = recovered_10001d03((long *)local_38,400000);
                    if (((int)uVar10 != 0) &&
                       (uVar9 = recovered_10001cc0((long *)local_38,0x2e,1,0xe), (int)uVar9 != 0)) {
                      recovered_10001b3c(DAT_10004000,1000);
                      local_44 = 0;
                      uVar9 = recovered_10001eee((long *)local_38,0,0,0,0,0,(undefined4 *)0x0);
                      if ((int)uVar9 != 0) {
                        uVar9 = recovered_10001eee((long *)local_38,8,0x1aa,2,0x18,0,&local_3c);
                        if ((int)uVar9 == 0) {
                          if (*(short *)((long)local_38 + 0x1e) == 1) {
                            uVar11 = recovered_10001b62((long *)local_38,6);
                            local_40 = 0x300000;
                            if ((int)uVar11 != 0) goto LAB_10000e54;
                          }
                        }
                        else {
                          local_40 = 0x40300000;
                          if ((local_3c & 0xfff) == 0x1aa) {
LAB_10000e54:
                            iVar7 = 100;
                            goto LAB_10000e58;
                          }
                        }
                      }
                    }
                  }
                }
              }
              goto LAB_10001249;
            }
            goto LAB_10001264;
          }
          if (DAT_1000400c != uVar17) {
            DAT_10004008 = DAT_10004008 + 1;
            local_70 = DAT_10004000;
            recovered_100022c6((undefined1 *)&local_f8,0x60,str_10002964);
            recovered_100022e5((long)&local_f8,0x60,&DAT_100029cb);
            recovered_100023b0((long)&local_f8,0x60,(uint)*param_1,2);
            recovered_100022e5((long)&local_f8,0x60,&DAT_100029cd);
            recovered_100023b0((long)&local_f8,0x60,(uint)param_1[1],2);
            recovered_100022e5((long)&local_f8,0x60,&DAT_100029cf);
            recovered_10002339((long)&local_f8,0x60,(ulong)param_1[2]);
            recovered_100022c6((undefined1 *)local_4f8,0x400,&DAT_100029d1);
            recovered_100023b0((long)local_4f8,0x400,(uint)*param_1,2);
            recovered_100022e5((long)local_4f8,0x400,&DAT_100029cd);
            recovered_100023b0((long)local_4f8,0x400,(uint)param_1[1],2);
            recovered_100022e5((long)local_4f8,0x400,&DAT_100029cf);
            recovered_10002339((long)local_4f8,0x400,(ulong)param_1[2]);
            recovered_100022e5((long)local_4f8,0x400,&DAT_100029d6);
            recovered_100023b0((long)local_4f8,0x400,(uint)*(ushort *)(param_1 + 4),4);
            recovered_100022e5((long)local_4f8,0x400,&DAT_100029cd);
            recovered_100023b0((long)local_4f8,0x400,(uint)*(ushort *)(param_1 + 6),4);
            recovered_100022e5((long)local_4f8,0x400,&DAT_100029d9);
            recovered_100022e5((long)local_4f8,0x400,&DAT_100029db);
            recovered_100022e5((long)local_4f8,0x400,str_1000298a);
            if (local_70 == (int *)0x0) {
              return;
            }
            if ((code *)(ulong)(uint)local_70[3] == (code *)0x0) {
              return;
            }
            (*(code *)(ulong)(uint)local_70[3])(&local_f8,str_10002973,local_4f8);
            return;
          }
          puVar16 = local_50;
        }
        recovered_100019e7(puVar16);
      }
    }
  }
  return;
LAB_10000e58:
  bVar20 = iVar7 == 0;
  iVar7 = iVar7 + -1;
  if (bVar20) goto LAB_10000ef7;
  uVar11 = recovered_10001eee((long *)local_38,0x37,0,2,0x18,0,&local_3c);
  if ((((int)uVar11 == 0) || ((local_3c & 0xfff9a028) != 0x20)) ||
     (uVar11 = recovered_10001eee((long *)local_38,0x29,local_40,2,0,0,&local_44), (int)uVar11 == 0)
     ) goto LAB_10001249;
  if (SBORROW4(0,local_44 & 0x81000000) && (local_44 & 0x300000) != 0) {
    bVar20 = true;
    goto LAB_10000f06;
  }
  recovered_10001b3c(DAT_10004000,10000);
  goto LAB_10000e58;
LAB_10000ef7:
  bVar20 = (local_44 & 0x300000) != 0;
LAB_10000f06:
  if (((!(bool)(bVar20 ^ 1U | !SBORROW4(0,local_44 & 0x81000000))) &&
      (((int)uVar9 == 0 & (byte)(local_44 >> 0x1e) & 1) == 0)) &&
     ((uVar9 = recovered_10001eee((long *)local_38,2,0,1,8,0,(undefined4 *)0x0), (int)uVar9 != 0 &&
      ((uVar9 = recovered_10001eee((long *)local_38,3,0,2,0x18,0,&local_3c), (int)uVar9 != 0 &&
       (0xffff < local_3c && (local_3c & 0xe000) == 0)))))) {
    *(uint *)(local_38 + 3) = local_3c & 0xffff0000;
    uVar9 = recovered_10001eee((long *)local_38,9,local_3c & 0xffff0000,1,8,0,(undefined4 *)0x0);
    if ((int)uVar9 != 0) {
      lVar18 = 0;
LAB_10000fc9:
      if (lVar18 + 4 != 0x14) goto code_r0x10000fd3;
      lVar18 = (long)&local_f8 + 3;
      lVar14 = 4;
      while (lVar13 = lVar14 + -1, lVar14 != 0) {
        uVar12 = local_4f8[lVar13] << 8;
        if (lVar14 != 1) {
          uVar12 = uVar12 | *(byte *)((long)local_4f8 + lVar13 * 4 + -1);
        }
        *(uint *)(lVar18 + -3) =
             uVar12 >> 0x18 | (uVar12 & 0xff0000) >> 8 | (uVar12 & 0xff00) << 8 | uVar12 << 0x18;
        lVar18 = lVar18 + 4;
        lVar14 = lVar13;
      }
      local_54 = local_44 & 0x40000000;
      local_58 = recovered_1000226f((long)&local_f8,0x7f,0x7e);
      iVar7 = recovered_1000226f((long)&local_f8,0x53,0x50);
      local_60 = CONCAT44(extraout_var,iVar7);
      iVar7 = recovered_1000226f((long)&local_f8,0x19,0x16);
      local_88 = CONCAT44(extraout_var_00,iVar7);
      local_40 = recovered_1000226f((long)&local_f8,0x5f,0x54);
      uVar12 = recovered_1000226f((long)&local_f8,0x67,0x60);
      uVar15 = uVar12 >> 3 & 0xf;
      iVar7 = 0;
      if (uVar15 != 0 && ((uVar12 & 7) < 4 && -1 < (char)uVar12)) {
        iVar7 = (uint)(byte)(&DAT_10002900)[uVar15] *
                *(int *)(&DAT_10002910 + (ulong)(uVar12 & 7) * 4);
      }
      if (((local_40 & 4) == 0) || (iVar7 == 0)) goto LAB_10001249;
      if (local_58 == 1) {
        if ((uint)local_60 == 9 && local_54 != 0) {
          uVar12 = recovered_1000226f((long)&local_f8,0x45,0x30);
          uVar10 = (ulong)uVar12 * 0x400 + 0x400;
          goto LAB_100011aa;
        }
        goto LAB_10001249;
      }
      if (((local_58 != 0) || ((uint)local_60 - 0xc < 0xfffffffd || local_54 != 0)) ||
         ((9 < (uint)local_60 && (iVar8 = recovered_1000226f((long)&local_f8,0x4f,0x4f), iVar8 == 0)
          ))) goto LAB_10001249;
      local_74 = recovered_1000226f((long)&local_f8,0x49,0x3e);
      iVar8 = recovered_1000226f((long)&local_f8,0x31,0x2f);
      uVar10 = (ulong)local_74 + 1 << (((char)local_60 + (char)iVar8) - 7U & 0x3f);
LAB_100011aa:
      local_60 = CONCAT71(PF_PART7(local_60, 1),uVar10 >> 0x20 != 0);
      if (0xfffffffe < uVar10) {
        uVar10 = 0xffffffff;
      }
      iVar8 = recovered_1000226f((long)&local_f8,0xd,0xc);
      bVar20 = true;
      if ((iVar8 == 0) && (0xfffffffc < (int)local_88 - 0xcU && (local_40 & 0x10) != 0)) {
        bVar20 = (int)local_88 != 9 && local_58 == 1;
      }
      *(int *)(local_38 + 5) = (int)uVar10;
      *(int *)((long)local_38 + 0x2c) = iVar7;
      *(undefined1 *)(local_38 + 6) = (undefined1)local_60;
      *(byte *)((long)local_38 + 0x31) = (byte)(local_54 >> 0x1e);
      *(bool *)((long)local_38 + 0x32) = bVar20;
      uVar9 = recovered_10001eee((long *)local_38,7,(int)local_38[3],3,0x18,0,&local_3c);
      if ((((int)uVar9 == 0) || ((local_3c & 0xfff9a008) != 0)) ||
         ((*(char *)((long)local_38 + 0x31) == '\0' &&
          ((uVar9 = recovered_10001eee((long *)local_38,0x10,0x200,2,0x18,0,&local_3c),
           (int)uVar9 == 0 || ((local_3c & 0xfff9a008) != 0)))))) goto LAB_10001249;
      uVar12 = *(uint *)((long)local_38 + 0x2c);
      if (24999999 < uVar12) {
        uVar12 = 25000000;
      }
      uVar10 = recovered_10001d03((long *)local_38,uVar12);
      if (((int)uVar10 == 0) || (uVar9 = recovered_100020a1((long *)local_38), (int)uVar9 == 0))
      goto LAB_10001249;
      *(undefined4 *)(local_38 + 4) = 1;
      DAT_1000400c = DAT_1000400c + 1;
      goto LAB_10001264;
    }
  }
LAB_10001249:
  puVar5 = local_38;
  recovered_10001a20((long)local_38,str_10002947);
  recovered_10001ae7((long *)puVar5);
LAB_10001264:
  uVar19 = uVar19 + 1;
  goto LAB_100009ca;
code_r0x10000fd3:
  uVar9 = recovered_10001be0((long *)local_38,(ulong)((uint)lVar18 | 0x10),4,
                             (undefined4 *)((long)local_4f8 + lVar18));
  lVar18 = lVar18 + 4;
  if ((int)uVar9 == 0) goto LAB_10001249;
  goto LAB_10000fc9;
}

#undef DAT_10002900
#undef DAT_10002910
#undef DAT_100029cb
#undef DAT_100029cd
#undef DAT_100029cf
#undef DAT_100029d1
#undef DAT_100029d6
#undef DAT_100029d9
#undef DAT_100029db
#undef DAT_10004000
#undef DAT_10004008
#undef DAT_1000400c
#undef DAT_10004010
#undef DAT_10004020
#undef DAT_1000402c
#undef DAT_100040e0
#undef DAT_100040e8
#undef DAT_100040ec
#undef str_10002947
#undef str_10002964
#undef str_10002973
#undef str_1000298a
#undef local_4f8
#undef local_f8
#undef bStack_4f9
#undef local_90
#undef local_88
#undef local_80
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef local_68
#undef local_64
#undef local_60
#undef local_58
#undef local_54
#undef local_50
#undef local_44
#undef local_40
#undef local_3c
#undef local_38

#undef DAT_10004008
#define DAT_10004008 (*(uint *)(((uintptr_t)pf_module_state + 0x1726U)))
#undef DAT_1000400c
#define DAT_1000400c (*(uint *)(((uintptr_t)pf_module_state + 0x172aU)))
#undef DAT_10004010
#define DAT_10004010 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x172eU)))
#undef DAT_100040e0
#define DAT_100040e0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17feU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100015bf
 */

void recovered_100015bf(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long *plVar1;
  undefined1 *puVar2;
  ulong uVar3;

  plVar1 = (long *)&DAT_100040e0;
  for (uVar3 = 0; uVar3 < DAT_1000400c; uVar3 = uVar3 + 1) {
    recovered_10001ae7(plVar1);
    plVar1 = plVar1 + 7;
  }
  puVar2 = &DAT_10004010;
  for (uVar3 = 0; uVar3 < DAT_10004008; uVar3 = uVar3 + 1) {
    recovered_100019e7(puVar2);
    puVar2 = puVar2 + 0x34;
  }
  DAT_1000400c = 0;
  DAT_10004008 = 0;
  return;
}

#undef DAT_10004008
#undef DAT_1000400c
#undef DAT_10004010
#undef DAT_100040e0

#undef DAT_1000400c
#define DAT_1000400c (*(uint *)(((uintptr_t)pf_module_state + 0x172aU)))
#undef DAT_10004100
#define DAT_10004100 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x181eU)))
#undef DAT_10004108
#define DAT_10004108 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1826U)))
#undef DAT_10004111
#define DAT_10004111 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x182fU)))
#undef str_100029de
#define str_100029de (*(char (*)[1])(((uintptr_t)pf_module_state + 0xfcU)))
#undef str_100029f3
#define str_100029f3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x111U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001625
 */

undefined8 recovered_10001625(uint param_1,undefined4 *param_2,undefined1 *param_3,uint param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  char *pcVar2;
  ulong uVar3;

  uVar1 = 0;
  if (((param_2 != (undefined4 *)0x0) && (param_1 < DAT_1000400c)) &&
     (uVar3 = (ulong)param_1, (&DAT_10004100)[uVar3 * 0xe] != 0)) {
    *param_2 = (&DAT_10004108)[uVar3 * 0xe];
    pcVar2 = str_100029f3;
    if ((&DAT_10004111)[uVar3 * 0x38] != '\0') {
      pcVar2 = str_100029de;
    }
    recovered_100022c6(param_3,(ulong)param_4,pcVar2);
    uVar1 = 1;
  }
  return uVar1;
}

#undef DAT_1000400c
#undef DAT_10004100
#undef DAT_10004108
#undef DAT_10004111
#undef str_100029de
#undef str_100029f3

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000167d
 */

void recovered_1000167d(uint param_1,uint param_2,long param_3,uint param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10002467(param_1,param_2,param_3,param_4,0);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000168a
 */

void recovered_1000168a(uint param_1,uint param_2,long param_3,uint param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10002467(param_1,param_2,param_3,param_4,1);
  return;
}


#undef DAT_1000400c
#define DAT_1000400c (*(uint *)(((uintptr_t)pf_module_state + 0x172aU)))
#undef DAT_100040e0
#define DAT_100040e0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17feU)))
#undef DAT_10004100
#define DAT_10004100 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x181eU)))
#undef DAT_10004104
#define DAT_10004104 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1822U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001698
 */

undefined8 recovered_10001698(uint param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long *plVar1;
  undefined8 uVar2;
  long lVar3;

  if (DAT_1000400c <= param_1) {
    return 0;
  }
  lVar3 = (ulong)param_1 * 0x38;
  plVar1 = (long *)(&DAT_100040e0 + lVar3);
  recovered_1000277d((long)plVar1);
  if (((&DAT_10004100)[(ulong)param_1 * 0xe] == 0) ||
     (uVar2 = recovered_100020a1(plVar1), (int)uVar2 == 0)) {
    recovered_10001ae7(plVar1);
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  *(undefined4 *)(&DAT_10004104 + lVar3) = 0;
  return uVar2;
}

#undef DAT_1000400c
#undef DAT_100040e0
#undef DAT_10004100
#undef DAT_10004104

#undef DAT_10002a1a
#define DAT_10002a1a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x138U)))
#undef DAT_1000400c
#define DAT_1000400c (*(uint *)(((uintptr_t)pf_module_state + 0x172aU)))
#undef DAT_10004010
#define DAT_10004010 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x172eU)))
#undef DAT_10004011
#define DAT_10004011 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x172fU)))
#undef DAT_10004012
#define DAT_10004012 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1730U)))
#undef DAT_100040e8
#define DAT_100040e8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1806U)))
#undef DAT_100040ec
#define DAT_100040ec (*(uint8_t *)(((uintptr_t)pf_module_state + 0x180aU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100016fa
 */

undefined8 recovered_100016fa(uint param_1,long param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  long lVar7;

  uVar5 = 0;
  if ((param_2 != 0) && (param_1 < DAT_1000400c)) {
    uVar4 = *(uint *)(&DAT_100040ec + (ulong)param_1 * 0x38);
    lVar7 = (ulong)*(uint *)(&DAT_100040e8 + (ulong)param_1 * 0x38) * 0x34;
    uVar1 = (&DAT_10004010)[lVar7];
    uVar2 = (&DAT_10004011)[lVar7];
    uVar3 = (&DAT_10004012)[lVar7];
    for (lVar7 = 0; lVar7 != 0x40; lVar7 = lVar7 + 1) {
      *(undefined1 *)(param_2 + lVar7) = 0;
    }
    for (lVar7 = 0; lVar7 != 4; lVar7 = lVar7 + 1) {
      *(undefined1 *)(param_2 + lVar7) = (&DAT_10002a1a)[lVar7];
    }
    *(undefined1 *)(param_2 + 4) = uVar1;
    *(undefined1 *)(param_2 + 5) = uVar2;
    *(undefined1 *)(param_2 + 6) = uVar3;
    puVar6 = (undefined1 *)(param_2 + 8);
    for (lVar7 = 0; lVar7 != 0x20; lVar7 = lVar7 + 8) {
      *puVar6 = (char)(uVar4 >> ((byte)lVar7 & 0x1f));
      puVar6 = puVar6 + 1;
    }
    uVar5 = 1;
    for (lVar7 = 0; lVar7 != 8; lVar7 = lVar7 + 1) {
      *(undefined1 *)(param_2 + 0x10 + lVar7) = 0;
    }
  }
  return uVar5;
}

#undef DAT_10002a1a
#undef DAT_1000400c
#undef DAT_10004010
#undef DAT_10004011
#undef DAT_10004012
#undef DAT_100040e8
#undef DAT_100040ec

#define local_50 (*(undefined4 *)(pf_stack_frame + 16))
#define local_4c (*(undefined4 *)(pf_stack_frame + 20))
#define local_48 (*(undefined4 *)(pf_stack_frame + 24))
#define local_44 (*(undefined4 *)(pf_stack_frame + 28))
#define local_40 (*(undefined4 *)(pf_stack_frame + 32))
#define local_3c (*(undefined4 *)(pf_stack_frame + 36))
#define local_38 (*(undefined4 *)(pf_stack_frame + 40))
#define local_34 (*(undefined4 *)(pf_stack_frame + 44))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100017b0
 */

undefined4
recovered_100017b0(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
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
    uVar2 = recovered_10001962(param_1,uVar5,uVar4,uVar3,0,4,(long)&local_3c);
    if ((((int)uVar2 != 0) && ((short)local_3c != 0)) && ((short)local_3c != -1)) {
      uVar2 = recovered_10001962(param_1,uVar5,uVar4,uVar3,8,4,(long)&local_50);
      if ((int)uVar2 != 0) {
        uVar2 = recovered_10001962(param_1,uVar5,uVar4,uVar3,4,4,(long)(param_5 + 0x10));
        if ((int)uVar2 == 0) {
          *(undefined4 *)(param_5 + 0x10) = 0;
        }
        uVar2 = recovered_10001962(param_1,uVar5,uVar4,uVar3,0xc,4,(long)&local_38);
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
          uVar2 = recovered_10001962(param_1,uVar5,uVar4,uVar3,(short)lVar6 + 0x10,4,(long)&local_4c
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
 * Address: 0x10001962
 */

undefined8
recovered_10001962(int *param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4,
                  undefined2 param_5,undefined4 param_6,long param_7)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if (((param_1 != (int *)0x0) && (*param_1 == 0x54584b57)) && (0x5f < (uint)param_1[2])) {
    if (param_7 != 0 && (code *)(ulong)(uint)param_1[0x17] != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x100019a9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*(code *)(ulong)(uint)param_1[0x17])(param_2,param_3,param_4,param_5,param_6,param_7)
      ;
      return uVar1;
    }
  }
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100019af
 */

undefined8
recovered_100019af(int *param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4,
                  undefined2 param_5)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if ((((param_1 == (int *)0x0) || (*param_1 != 0x54584b57)) || ((uint)param_1[2] < 100)) ||
     ((code *)(ulong)(uint)param_1[0x18] == (code *)0x0)) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x100019e1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)(ulong)(uint)param_1[0x18])(param_2,param_3,param_4,param_5,2);
  return uVar1;
}


#undef DAT_10004000
#define DAT_10004000 (*(int * *)(((uintptr_t)pf_module_state + 0x171eU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100019e7
 */

void recovered_100019e7(undefined1 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (*(int *)(param_1 + 0x30) != 0) {
    recovered_100019af(DAT_10004000,*param_1,param_1[1],param_1[2],4);
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  return;
}

#undef DAT_10004000

#undef DAT_10004000
#define DAT_10004000 (*(int * *)(((uintptr_t)pf_module_state + 0x171eU)))
#undef str_100029b1
#define str_100029b1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xcfU)))
#undef str_100029b9
#define str_100029b9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xd7U)))
#undef str_100029c1
#define str_100029c1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xdfU)))
#define local_e8 (*(undefined1 (*)[232])(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001a20
 */

void recovered_10001a20(long param_1,char *param_2)

{
  unsigned char pf_stack_frame[288] __attribute__((aligned(16))) = {0};


  recovered_100022c6(local_e8,0xc0,str_100029b1);
  recovered_100022e5((long)local_e8,0xc0,param_2);
  recovered_100022e5((long)local_e8,0xc0,str_100029b9);
  recovered_10002339((long)local_e8,0xc0,(ulong)*(uint *)(param_1 + 0xc));
  recovered_100022e5((long)local_e8,0xc0,str_100029c1);
  recovered_100023b0((long)local_e8,0xc0,*(uint *)(param_1 + 0x1c),8);
  if ((((DAT_10004000 != (int *)0x0) && (*DAT_10004000 == 0x54584b57)) &&
      (0x2b < (uint)DAT_10004000[2])) && ((code *)(ulong)(uint)DAT_10004000[10] != (code *)0x0)) {
    (*(code *)(ulong)(uint)DAT_10004000[10])(local_e8);
  }
  return;
}

#undef DAT_10004000
#undef str_100029b1
#undef str_100029b9
#undef str_100029c1
#undef local_e8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001ae7
 */

void recovered_10001ae7(long *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  *(undefined4 *)(param_1 + 4) = 0;
  if (*param_1 == 0) {
    return;
  }
  recovered_10001cc0(param_1,0x38,4,0);
  recovered_10001b62(param_1,1);
  recovered_10001cc0(param_1,0x2c,2,0);
  recovered_10001cc0(param_1,0x29,1,0);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001b3c
 */

void recovered_10001b3c(int *param_1,undefined4 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if ((((param_1 == (int *)0x0) || (*param_1 != 0x54584b57)) || ((uint)param_1[2] < 0x34)) ||
     ((code *)(ulong)(uint)param_1[0xc] == (code *)0x0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x10001b5e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulong)(uint)param_1[0xc])(param_2);
  return;
}


#undef DAT_10004000
#define DAT_10004000 (*(int * *)(((uintptr_t)pf_module_state + 0x171eU)))
#define uStack_38 (*(undefined8 *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001b62
 */

undefined8 recovered_10001b62(long *param_1,uint param_2)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  undefined8 in_RAX;
  undefined8 uVar1;
  int iVar2;
  bool bVar3;

  uStack_38 = in_RAX;
  uVar1 = recovered_10001cc0(param_1,0x2f,1,param_2);
  if ((int)uVar1 != 0) {
    iVar2 = 1000;
    while (bVar3 = iVar2 != 0, iVar2 = iVar2 + -1, bVar3) {
      uVar1 = recovered_10001be0(param_1,0x2f,1,(undefined4 *)((long)&uStack_38 + 4));
      if ((int)uVar1 == 0) {
        return 0;
      }
      if ((PF_PART4(uStack_38, 4) & param_2) == 0) {
        return 1;
      }
      recovered_10001b3c(DAT_10004000,100);
    }
  }
  return 0;
}

#undef DAT_10004000
#undef uStack_38

#undef DAT_10004000
#define DAT_10004000 (*(int * *)(((uintptr_t)pf_module_state + 0x171eU)))
#define local_20 (*(undefined4 *)(pf_stack_frame + 16))
#define local_1c (*(undefined4 *)(pf_stack_frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001be0
 */

undefined8 recovered_10001be0(long *param_1,ulong param_2,int param_3,undefined4 *param_4)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if (param_3 == 2) {
    local_1c = 0;
    if (*param_1 == 0 || param_4 == (undefined4 *)0x0) {
      return 0;
    }
    uVar1 = recovered_10001e2a(DAT_10004000,*param_1 + (param_2 & 0xffffffff),2,(long)&local_1c);
    if ((int)uVar1 == 0) {
      return 0;
    }
    local_20 = local_1c;
  }
  else {
    if (param_3 == 1) {
      if (*param_1 == 0 || param_4 == (undefined4 *)0x0) {
        return 0;
      }
      uVar1 = recovered_10001e2a(DAT_10004000,*param_1 + (param_2 & 0xffffffff),1,(long)param_4);
      return uVar1;
    }
    local_20 = 0;
    if (*param_1 == 0 || param_4 == (undefined4 *)0x0) {
      return 0;
    }
    uVar1 = recovered_10001e2a(DAT_10004000,*param_1 + (param_2 & 0xffffffff),4,(long)&local_20);
    if ((int)uVar1 == 0) {
      return 0;
    }
  }
  *param_4 = local_20;
  return 1;
}

#undef DAT_10004000
#undef local_20
#undef local_1c

#undef DAT_10004000
#define DAT_10004000 (*(int * *)(((uintptr_t)pf_module_state + 0x171eU)))
#define uStack_10 (*(undefined4 *)(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001cc0
 */

undefined8 recovered_10001cc0(long *param_1,uint param_2,int param_3,undefined4 param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  undefined8 uVar2;

  lVar1 = *param_1;
  if (param_3 == 2) {
    if (lVar1 == 0) {
      return 0;
    }
    uStack_10 = 2;
  }
  else if (param_3 == 1) {
    if (lVar1 == 0) {
      return 0;
    }
    uStack_10 = 1;
  }
  else {
    if (lVar1 == 0) {
      return 0;
    }
    uStack_10 = 4;
  }
  uVar2 = recovered_10001e9b(DAT_10004000,lVar1 + (ulong)param_2,uStack_10,param_4);
  return uVar2;
}

#undef DAT_10004000
#undef uStack_10

#undef DAT_10004000
#define DAT_10004000 (*(int * *)(((uintptr_t)pf_module_state + 0x171eU)))
#define uStack_38 (*(undefined8 *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001d03
 */

ulong recovered_10001d03(long *param_1,uint param_2)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  ulong in_RAX;
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  bool bVar8;

  uVar6 = *(uint *)(param_1 + 2);
  uVar2 = 0x100;
  if (1 < uVar6) {
    uVar2 = 0x7fe;
  }
  if (((uVar6 < 6) && (param_2 != 0)) && (*(uint *)((long)param_1 + 0x14) != 0)) {
    uVar7 = 1;
    while (uVar5 = (uint)uVar7, uVar7 * param_2 < (ulong)*(uint *)((long)param_1 + 0x14)) {
      if (uVar2 <= uVar5) {
        return 0;
      }
      uVar3 = uVar5 + 2;
      if (uVar5 == 1) {
        uVar3 = 2;
      }
      uVar5 = uVar5 * 2;
      if (1 < uVar6) {
        uVar5 = uVar3;
      }
      uVar7 = (ulong)uVar5;
    }
    uStack_38 = in_RAX;
    uVar1 = recovered_10001cc0(param_1,0x2c,2,0);
    if ((int)uVar1 != 0) {
      uVar6 = uVar5 >> 3 & 0xc0 | (uVar5 & 0x1fe) << 7;
      uVar1 = recovered_10001cc0(param_1,0x2c,2,uVar6 | 1);
      if ((int)uVar1 != 0) {
        iVar4 = 0x5dc;
        while (bVar8 = iVar4 != 0, iVar4 = iVar4 + -1, bVar8) {
          uVar1 = recovered_10001be0(param_1,0x2c,2,(undefined4 *)((long)&uStack_38 + 4));
          if ((int)uVar1 == 0) {
            return 0;
          }
          if ((uStack_38 & 0x200000000) != 0) {
            uVar7 = recovered_10001cc0(param_1,0x2c,2,uVar6 | 5);
            return uVar7 & 0xffffffff;
          }
          recovered_10001b3c(DAT_10004000,100);
        }
      }
    }
  }
  return 0;
}

#undef DAT_10004000
#undef uStack_38

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001e2a
 */

undefined8 recovered_10001e2a(int *param_1,ulong param_2,undefined4 param_3,long param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if ((param_1 != (int *)0x0) && (*param_1 == 0x54584b57)) {
    if (0xbf < (uint)param_1[2]) {
      if (param_4 != 0 && (code *)(ulong)(uint)param_1[0x2f] != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x10001e66. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar1 = (*(code *)(ulong)(uint)param_1[0x2f])(param_2,param_3,param_4);
        return uVar1;
      }
    }
    if ((param_2 >> 0x20 == 0) && (0x6b < (uint)param_1[2])) {
      if (param_4 != 0 && (code *)(ulong)(uint)param_1[0x1a] != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x10001e95. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar1 = (*(code *)(ulong)(uint)param_1[0x1a])(param_2 & 0xffffffff,param_3,param_4);
        return uVar1;
      }
    }
  }
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001e9b
 */

undefined8 recovered_10001e9b(int *param_1,ulong param_2,undefined4 param_3,undefined4 param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if ((param_1 != (int *)0x0) && (*param_1 == 0x54584b57)) {
    if ((0xc3 < (uint)param_1[2]) && ((code *)(ulong)(uint)param_1[0x30] != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x10001ec8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*(code *)(ulong)(uint)param_1[0x30])(param_2,param_3,param_4);
      return uVar1;
    }
    if (((param_2 >> 0x20 == 0) && (0x6f < (uint)param_1[2])) &&
       ((code *)(ulong)(uint)param_1[0x1b] != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x10001ee8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*(code *)(ulong)(uint)param_1[0x1b])(param_2 & 0xffffffff,param_3,param_4);
      return uVar1;
    }
  }
  return 0;
}


#undef DAT_10004000
#define DAT_10004000 (*(int * *)(((uintptr_t)pf_module_state + 0x171eU)))
#define local_48 (*(uint *)(pf_stack_frame + 24))
#define local_44 (*(undefined4 *)(pf_stack_frame + 28))
#define local_40 (*(uint *)(pf_stack_frame + 32))
#define local_3c (*(int *)(pf_stack_frame + 36))
#define local_38 (*(uint *)(pf_stack_frame + 40))
#define local_34 (*(int *)(pf_stack_frame + 44))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001eee
 */

undefined8
recovered_10001eee(long *param_1,int param_2,undefined4 param_3,uint param_4,uint param_5,
                  int param_6,undefined4 *param_7)

{
  unsigned char pf_stack_frame[128] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;

  uVar3 = (uint)(param_6 != 0) * 2 + 1;
  if (param_4 == 3) {
    uVar3 = 3;
  }
  *(undefined4 *)((long)param_1 + 0x1c) = 0;
  local_44 = param_3;
  local_40 = param_5;
  local_3c = param_6;
  uVar1 = recovered_10002143(param_1);
  if ((int)uVar1 != 0) {
    iVar2 = 1000;
    local_38 = param_4;
    local_34 = param_2;
    while (((bVar4 = iVar2 != 0, iVar2 = iVar2 + -1, bVar4 &&
            (uVar1 = recovered_10001be0(param_1,0x24,4,&local_48), (int)uVar1 != 0)) &&
           (local_48 != 0xffffffff))) {
      if ((local_48 & uVar3) == 0) {
        uVar1 = recovered_10001cc0(param_1,0x30,4,0xffffff7f);
        if ((int)uVar1 == 0) {
          return 0;
        }
        uVar1 = recovered_10001cc0(param_1,8,4,local_44);
        if ((int)uVar1 == 0) {
          return 0;
        }
        bVar4 = local_3c != 0;
        recovered_100021b8(DAT_10004000);
        uVar3 = local_38;
        uVar1 = recovered_10001cc0(param_1,0xe,2,
                                   local_34 << 8 | local_40 | local_38 | (uint)bVar4 << 5);
        if ((int)uVar1 == 0) {
          return 0;
        }
        uVar1 = recovered_100021dc(param_1,1,10000);
        if ((int)uVar1 == 0) {
          return 0;
        }
        uVar1 = recovered_10001cc0(param_1,0x30,4,1);
        if ((int)uVar1 == 0) {
          return 0;
        }
        if ((param_7 != (undefined4 *)0x0) &&
           (uVar1 = recovered_10001be0(param_1,0x10,4,param_7), (int)uVar1 == 0)) {
          return 0;
        }
        if (uVar3 == 3) {
          uVar1 = recovered_100021dc(param_1,2,20000);
          if ((int)uVar1 == 0) {
            return 0;
          }
          uVar1 = recovered_10001cc0(param_1,0x30,4,2);
          if ((int)uVar1 == 0) {
            return 0;
          }
        }
        return 1;
      }
      recovered_10001b3c(DAT_10004000,100);
    }
  }
  return 0;
}

#undef DAT_10004000
#undef local_48
#undef local_44
#undef local_40
#undef local_3c
#undef local_38
#undef local_34

#undef DAT_10004000
#define DAT_10004000 (*(int * *)(((uintptr_t)pf_module_state + 0x171eU)))
#define local_34 (*(uint *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100020a1
 */

undefined8 recovered_100020a1(long *param_1)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  int iVar2;
  bool bVar3;

  iVar2 = 5000;
  while( true ) {
    bVar3 = iVar2 == 0;
    iVar2 = iVar2 + -1;
    if (bVar3) {
      return 0;
    }
    uVar1 = recovered_10001eee(param_1,0xd,(int)param_1[3],2,0x18,0,&local_34);
    if ((int)uVar1 == 0) {
      return 0;
    }
    if ((local_34 & 0xfff9a008) != 0) {
      return 0;
    }
    if ((local_34 & 0x1f00) == 0x900) break;
    if ((local_34 & 0x1c00) != 0xc00) {
      return 0;
    }
    recovered_10001b3c(DAT_10004000,1000);
  }
  return 1;
}

#undef DAT_10004000
#undef local_34

#define local_20 (*(int *)(pf_stack_frame + 16))
#define local_1c (*(int *)(pf_stack_frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002143
 */

undefined8 recovered_10002143(long *param_1)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  uVar1 = recovered_10001be0(param_1,0x24,4,&local_1c);
  if (((int)uVar1 == 0) ||
     (uVar1 = recovered_10001be0(param_1,0x30,4,&local_20),
     ((byte)((uint)local_1c >> 0x10) & local_20 != -1 & (local_1c != -1 && (int)uVar1 != 0) &
     -1 < (char)local_20) == 0)) {
    *(undefined4 *)(param_1 + 4) = 0;
    return 0;
  }
  return 1;
}

#undef local_20
#undef local_1c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100021b8
 */

void recovered_100021b8(int *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if ((((param_1 == (int *)0x0) || (*param_1 != 0x54584b57)) || ((uint)param_1[2] < 0x7c)) ||
     ((code *)(ulong)(uint)param_1[0x1e] == (code *)0x0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x100021d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulong)(uint)param_1[0x1e])();
  return;
}


#undef DAT_10004000
#define DAT_10004000 (*(int * *)(((uintptr_t)pf_module_state + 0x171eU)))
#define local_38 (*(undefined8 *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100021dc
 */

undefined8 recovered_100021dc(long *param_1,uint param_2,int param_3)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  ulong in_RAX;
  undefined8 uVar1;
  bool bVar2;

  local_38 = in_RAX;
  while( true ) {
    bVar2 = param_3 == 0;
    param_3 = param_3 + -1;
    if (bVar2) {
      return 0;
    }
    uVar1 = recovered_10001be0(param_1,0x30,4,(undefined4 *)&local_38);
    if ((int)uVar1 == 0) {
      return 0;
    }
    uVar1 = recovered_10001be0(param_1,0x24,4,(undefined4 *)((long)&local_38 + 4));
    if ((int)uVar1 == 0) {
      return 0;
    }
    *(uint *)((long)param_1 + 0x1c) = (uint)local_38;
    if ((local_38 & 0xffff8080) != 0) break;
    if ((local_38 & 0x1000000000000) == 0) {
      return 0;
    }
    if (((uint)local_38 & param_2) != 0) {
      return 1;
    }
    recovered_10001b3c(DAT_10004000,100);
  }
  return 0;
}

#undef DAT_10004000
#undef local_38

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000226f
 */

int recovered_1000226f(long param_1,uint param_2,uint param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;

  iVar1 = 0;
  if (param_2 - param_3 < 0x20 && (param_3 <= param_2 && param_1 != 0)) {
    uVar2 = 0x7f - param_2;
    iVar1 = 0;
    do {
      iVar1 = (uint)((*(byte *)(param_1 + (ulong)(uVar2 >> 3)) >> (param_2 & 7) & 1) != 0) +
              iVar1 * 2;
      param_2 = param_2 - 1;
      uVar2 = uVar2 + 1;
    } while (param_3 - 1 != param_2);
  }
  return iVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100022c6
 */

void recovered_100022c6(undefined1 *param_1,ulong param_2,char *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_2 == 0 || param_1 == (undefined1 *)0x0) {
    return;
  }
  *param_1 = 0;
  recovered_100022e5((long)param_1,param_2,param_3);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100022e5
 */

void recovered_100022e5(long param_1,ulong param_2,char *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  uVar1 = recovered_1000240d(param_1);
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


#define abStack_2b (*(byte (*)[43])(pf_stack_frame + 21))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002339
 */

void recovered_10002339(long param_1,ulong param_2,ulong param_3)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  ulong uVar2;

  if ((int)param_3 == 0) {
    recovered_1000242d(param_1,param_2,0x30);
    return;
  }
  for (uVar2 = 0; (uVar1 = param_3 & 0xffffffff, (int)param_3 != 0 && (uVar2 < 10));
      uVar2 = uVar2 + 1) {
    param_3 = uVar1 / 10;
    abStack_2b[uVar2 + 1] = (byte)(uVar1 % 10) | 0x30;
  }
  while (uVar2 != 0) {
    recovered_1000242d(param_1,param_2,abStack_2b[uVar2]);
    uVar2 = uVar2 - 1;
  }
  return;
}

#undef abStack_2b

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100023b0
 */

void recovered_100023b0(long param_1,ulong param_2,uint param_3,int param_4)

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
    recovered_1000242d(param_1,param_2,cVar4);
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000240d
 */

long recovered_1000240d(long param_1)

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
 * Address: 0x1000242d
 */

void recovered_1000242d(long param_1,ulong param_2,undefined1 param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;

  lVar1 = recovered_1000240d(param_1);
  if ((param_1 != 0) && (lVar1 + 1U < param_2)) {
    *(undefined1 *)(param_1 + lVar1) = param_3;
    *(undefined1 *)(param_1 + 1 + lVar1) = 0;
  }
  return;
}


#undef DAT_10004000
#define DAT_10004000 (*(int * *)(((uintptr_t)pf_module_state + 0x171eU)))
#undef DAT_1000400c
#define DAT_1000400c (*(uint *)(((uintptr_t)pf_module_state + 0x172aU)))
#undef DAT_100040e0
#define DAT_100040e0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17feU)))
#undef DAT_10004100
#define DAT_10004100 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x181eU)))
#undef DAT_10004104
#define DAT_10004104 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1822U)))
#undef DAT_10004108
#define DAT_10004108 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1826U)))
#undef DAT_10004111
#define DAT_10004111 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x182fU)))
#undef DAT_10004112
#define DAT_10004112 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1830U)))
#undef str_10002a01
#define str_10002a01 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x11fU)))
#undef str_10002a0e
#define str_10002a0e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x12cU)))
#define local_58 (*(undefined4 *)(pf_stack_frame + 24))
#define local_54 (*(int *)(pf_stack_frame + 28))
#define local_50 (*(ulong *)(pf_stack_frame + 32))
#define local_44 (*(undefined4 *)(pf_stack_frame + 44))
#define local_40 (*(undefined4 *)(pf_stack_frame + 48))
#define local_3c (*(int *)(pf_stack_frame + 52))
#define local_38 (*(uint *)(pf_stack_frame + 56))
#define local_34 (*(uint *)(pf_stack_frame + 60))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002467
 */

undefined8 recovered_10002467(uint param_1,uint param_2,long param_3,uint param_4,int param_5)

{
  unsigned char pf_stack_frame[144] __attribute__((aligned(16))) = {0};

  long *plVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  char *pcVar6;
  long lVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;

  if (param_3 == 0) {
    return 0;
  }
  if (DAT_1000400c <= param_1) {
    return 0;
  }
  uVar9 = (ulong)param_1;
  lVar7 = uVar9 * 0x38;
  plVar1 = (long *)(&DAT_100040e0 + lVar7);
  local_54 = param_5;
  local_50 = param_3;
  recovered_1000277d((long)plVar1);
  if (((((&DAT_10004100)[uVar9 * 0xe] == 0) || ((uint)(&DAT_10004108)[uVar9 * 0xe] <= param_2)) ||
      ((&DAT_10004108)[uVar9 * 0xe] - param_2 <= param_4 - 1)) ||
     ((((ulong)param_2 + (ulong)param_4 < 0x800001 | (&DAT_10004111)[lVar7]) != 1 ||
      (uVar5 = recovered_10002143(plVar1), uVar9 = local_50, iVar2 = local_54, (int)uVar5 == 0)))) {
LAB_10002522:
    *(undefined4 *)(&DAT_10004104 + lVar7) = 0;
    uVar5 = 0;
  }
  else {
    if (local_54 == 0) {
      local_34 = 0x20;
      local_40 = 0x12;
      local_3c = 0x11;
    }
    else {
      if ((((&DAT_10004112)[lVar7] != '\0') ||
          (uVar5 = recovered_10001be0(plVar1,0x24,4,&local_38), (int)uVar5 == 0)) ||
         ((local_38 & 0x80000) == 0)) goto LAB_10002522;
      local_34 = 0x10;
      local_40 = 2;
      local_3c = 0x18;
    }
    lVar10 = uVar9 + 3;
    for (local_50 = 0; local_50 != param_4; local_50 = local_50 + 1) {
      uVar3 = (int)local_50 + param_2;
      if ((0x7fffff < uVar3 & ((&DAT_10004111)[lVar7] ^ 1)) != 0) {
LAB_10002745:
        pcVar6 = str_10002a01;
        if (iVar2 == 0) {
          pcVar6 = str_10002a0e;
        }
        recovered_10001a20((long)plVar1,pcVar6);
        recovered_10001ae7(plVar1);
        uVar5 = 0;
        goto LAB_1000276c;
      }
      uVar8 = uVar3 * 0x200;
      if ((&DAT_10004111)[lVar7] != 0) {
        uVar8 = uVar3;
      }
      uVar5 = recovered_10001be0(plVar1,0x24,4,&local_58);
      if (((((int)uVar5 == 0) ||
           (((iVar2 != 0 && (((&DAT_10004112)[lVar7] != '\0' || ((PF_PART1(local_58, 2) & 8) == 0)))) ||
            (uVar5 = recovered_10001cc0(plVar1,4,2,0x200), (int)uVar5 == 0)))) ||
          ((((uVar5 = recovered_10001cc0(plVar1,6,2,1), (int)uVar5 == 0 ||
             (uVar5 = recovered_10001cc0(plVar1,0xc,2,local_40), (int)uVar5 == 0)) ||
            (uVar5 = recovered_10001eee(plVar1,local_3c,uVar8,2,0x18,1,&local_38), (int)uVar5 == 0))
           || (((local_38 & 0xfff9a008) != 0 ||
               (uVar5 = recovered_100021dc(plVar1,local_34,20000), (int)uVar5 == 0)))))) ||
         (uVar5 = recovered_10001cc0(plVar1,0x30,4,local_34), (int)uVar5 == 0)) goto LAB_10002745;
      for (uVar9 = 0; uVar9 < 0x200; uVar9 = uVar9 + 4) {
        if (iVar2 == 0) {
          uVar5 = recovered_10001be0(plVar1,0x20,4,&local_44);
          if ((int)uVar5 == 0) goto LAB_10002745;
          *(undefined4 *)(lVar10 + -3 + uVar9) = local_44;
        }
        else {
          local_44 = *(undefined4 *)(lVar10 + -3 + uVar9);
          uVar5 = recovered_10001cc0(plVar1,0x20,4,local_44);
          if ((int)uVar5 == 0) goto LAB_10002745;
        }
      }
      recovered_100021b8(DAT_10004000);
      uVar5 = recovered_100021dc(plVar1,2,20000);
      if ((int)uVar5 == 0) goto LAB_10002745;
      uVar5 = recovered_10001cc0(plVar1,0x30,4,2);
      iVar4 = (int)uVar5;
      if (iVar4 != 0 && iVar2 != 0) {
        uVar5 = recovered_100020a1(plVar1);
        iVar4 = (int)uVar5;
      }
      if (iVar4 == 0) goto LAB_10002745;
      lVar10 = lVar10 + 0x200;
    }
    uVar5 = 1;
LAB_1000276c:
    *(undefined4 *)(&DAT_10004104 + lVar7) = 0;
  }
  return uVar5;
}

#undef DAT_10004000
#undef DAT_1000400c
#undef DAT_100040e0
#undef DAT_10004100
#undef DAT_10004104
#undef DAT_10004108
#undef DAT_10004111
#undef DAT_10004112
#undef str_10002a01
#undef str_10002a0e
#undef local_58
#undef local_54
#undef local_50
#undef local_44
#undef local_40
#undef local_3c
#undef local_38
#undef local_34

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000277d
 */

void recovered_1000277d(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  while( true ) {
    iVar1 = __atomic_exchange_n(&(*(int *)(param_1 + 0x24)),1,__ATOMIC_SEQ_CST);
    if (iVar1 == 0) break;
    do {
    } while (*(int *)(param_1 + 0x24) != 0);
  }
  return;
}


#undef DAT_10004000
#define DAT_10004000 (*(int * *)(((uintptr_t)pf_module_state + 0x171eU)))
#undef DAT_10004008
#define DAT_10004008 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1726U)))
#undef DAT_1000400c
#define DAT_1000400c (*(uint *)(((uintptr_t)pf_module_state + 0x172aU)))
#undef DAT_10004100
#define DAT_10004100 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x181eU)))
#undef DAT_10004108
#define DAT_10004108 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1826U)))
#undef str_10002a1f
#define str_10002a1f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x13dU)))
#undef str_10002a33
#define str_10002a33 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x151U)))
#undef str_10002a41
#define str_10002a41 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x15fU)))
#undef str_10002a91
#define str_10002a91 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1afU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002798
 */

undefined8 recovered_10002798(undefined8 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  uint uVar5;

  uVar2 = 0;
  if (DAT_1000400c != 0 && (DAT_10004000 != (int *)0x0 && param_1 != (undefined8 *)0x0)) {
    uVar5 = 0;
    lVar4 = 0;
    for (lVar3 = 0; (ulong)DAT_1000400c * 0x38 != lVar3; lVar3 = lVar3 + 0x38) {
      if (*(int *)((long)&DAT_10004100 + lVar3) != 0) {
        uVar5 = uVar5 + 1;
        lVar4 = lVar4 + (ulong)*(uint *)((long)&DAT_10004108 + lVar3);
      }
    }
    recovered_1000072e((long)param_1,500);
    *param_1 = 0x1000001f4;
    *(undefined4 *)((long)param_1 + 0xc) = 0x11;
    uVar1 = 9;
    if (uVar5 == DAT_1000400c) {
      uVar1 = 0x13;
    }
    *(undefined4 *)(param_1 + 2) = uVar1;
    uVar1 = 0;
    if ((((DAT_10004000 != (int *)0x0) && (*DAT_10004000 == 0x54584b57)) &&
        (0x2f < (uint)DAT_10004000[2])) && ((code *)(ulong)(uint)DAT_10004000[0xb] != (code *)0x0))
    {
      uVar1 = (*(code *)(ulong)(uint)DAT_10004000[0xb])();
    }
    *(undefined4 *)(param_1 + 3) = uVar1;
    *(undefined4 *)((long)param_1 + 0x44) = DAT_10004008;
    *(uint *)(param_1 + 9) = uVar5;
    *(int *)((long)param_1 + 0x4c) = (int)lVar4;
    *(int *)(param_1 + 10) = (int)((ulong)lVar4 >> 0x20);
    recovered_100022c6((undefined1 *)((long)param_1 + 0x54),0x40,str_10002a1f);
    recovered_100022c6((undefined1 *)((long)param_1 + 0x94),0x40,str_10002a33);
    recovered_100022c6((undefined1 *)((long)param_1 + 0xd4),0x60,str_10002a41);
    recovered_100022c6((undefined1 *)((long)param_1 + 0x134),0xc0,str_10002a91);
    uVar2 = 1;
  }
  return uVar2;
}

#undef DAT_10004000
#undef DAT_10004008
#undef DAT_1000400c
#undef DAT_10004100
#undef DAT_10004108
#undef str_10002a1f
#undef str_10002a33
#undef str_10002a41
#undef str_10002a91

void *memset(void *p,int v,size_t n){volatile unsigned char *b=p;while(n--)*b++=(unsigned char)v;return p;}
void __bzero(void *p,size_t n){volatile unsigned char *b=p;while(n--)*b++=0;}
void bzero(void *p,size_t n){__bzero(p,n);}
