/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_10004000
#define DAT_10004000 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x95cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000428
 */

void * recovered_10000428(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return &DAT_10004000;
}

#undef DAT_10004000

#undef DAT_100036a4
#define DAT_100036a4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x0U)))
#undef DAT_10008000
#define DAT_10008000 (*(uint *)(((uintptr_t)pf_module_state + 0x495cU)))
#undef DAT_10009098
#define DAT_10009098 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x59f4U)))
#undef str_100036a5
#define str_100036a5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1U)))
#define local_60 (*(undefined4 *)(pf_stack_frame + 1072))
#define local_5c (*(undefined4 *)(pf_stack_frame + 1076))
#define local_54 (*(undefined4 *)(pf_stack_frame + 1084))
#define abStack_480 (*(byte (*)[1152])(pf_stack_frame + 16))
#define uStack_74 (*(undefined4 *)(pf_stack_frame + 1052))
#define uStack_6c (*(undefined4 *)(pf_stack_frame + 1060))
#define uStack_64 (*(undefined4 *)(pf_stack_frame + 1068))
#define uStack_58 (*(undefined4 *)(pf_stack_frame + 1080))
#define local_474 (*(char *)(pf_stack_frame + 28))
#define local_80 (*(byte (*)[128])(pf_stack_frame + 1040))
#define local_7c (*(uint *)(pf_stack_frame + 1044))
#define local_78 (*(undefined4 *)(pf_stack_frame + 1048))
#define local_70 (*(undefined4 *)(pf_stack_frame + 1056))
#define local_68 (*(undefined4 *)(pf_stack_frame + 1064))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000434
 */

uint recovered_10000434(void *api)

{
  unsigned char pf_stack_frame[1200] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined8 uVar2;
  long lVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;

  if (api == (void *)0x0) {
    return 0;
  }
  if (((*(int *)api == 0x54584b57) && (*(int *)((long)api + 4) == 1100000)) &&
     (0xf7 < *(uint *)((long)api + 8))) {
    DAT_10008000 = 0;
    if (*(int *)((long)api + 0x5c) != 0) {
      iVar1 = 0;
      for (uVar5 = 0; uVar5 != 8; uVar5 = uVar5 + 1) {
        for (uVar6 = 0; uVar6 != 0x20; uVar6 = uVar6 + 1) {
          uVar2 = recovered_1000191c(api,(ulong)(uVar5 & 0xff),(ulong)(uVar6 & 0xff),0,abStack_480);
          if ((int)uVar2 != 0) {
            uVar2 = recovered_10000664(api,abStack_480);
            iVar1 = (int)uVar2 + iVar1;
            if (local_474 < '\0') {
              for (uVar7 = 1; uVar7 != 8; uVar7 = uVar7 + 1) {
                uVar2 = recovered_1000191c(api,(ulong)(uVar5 & 0xff),(ulong)(uVar6 & 0xff),
                                           (ulong)(uVar7 & 0xff),local_80);
                if ((int)uVar2 != 0) {
                  uVar2 = recovered_10000664(api,local_80);
                  iVar1 = (int)uVar2 + iVar1;
                }
              }
            }
          }
        }
      }
      if ((iVar1 != 0) && (DAT_10008000 != 0)) {
        recovered_100016a4(local_80,0x30);
        local_7c = DAT_10008000;
        lVar3 = (ulong)DAT_10008000 + 1;
        piVar4 = &DAT_10009098;
        uStack_6c = ((uintptr_t)&recovered_100016bc);
        do {
          lVar3 = lVar3 + -1;
          if (lVar3 == 0) goto LAB_10000584;
          iVar1 = *piVar4;
          piVar4 = piVar4 + 0x1c00;
        } while (iVar1 != 0);
        uStack_6c = 0;
LAB_10000584:
        local_80[0] = 3;
        local_80[1] = 0;
        local_80[2] = 0;
        local_80[3] = 0;
        local_78 = ((uintptr_t)&recovered_1000176c);
        uStack_74 = ((uintptr_t)&recovered_10001810);
        local_70 = ((uintptr_t)&recovered_10001818);
        local_68 = ((uintptr_t)&recovered_10001820);
        uStack_64 = 0;
        local_60 = 0;
        local_5c = 0;
        uStack_58 = 0;
        local_54 = 0;
        recovered_1000190c(abStack_480,0x400,&DAT_100036a4);
        if (((*(uint *)((long)api + 0xc) != 0) &&
            (iVar1 = (*(code *)(ulong)*(uint *)((long)api + 0xc))
                               (&DAT_100036a4,str_100036a5,abStack_480), iVar1 != 0)) &&
           ((*(int *)api == 0x54584b57 &&
            (((0xd3 < *(uint *)((long)api + 8) && (*(uint *)((long)api + 0xd0) != 0)) &&
             (iVar1 = (*(code *)(ulong)*(uint *)((long)api + 0xd0))(local_80), iVar1 != 0)))))) {
          return 1;
        }
      }
    }
    recovered_10001658();
  }
  return 0;
}

#undef DAT_100036a4
#undef DAT_10008000
#undef DAT_10009098
#undef str_100036a5
#undef local_60
#undef local_5c
#undef local_54
#undef abStack_480
#undef uStack_74
#undef uStack_6c
#undef uStack_64
#undef uStack_58
#undef local_474
#undef local_80
#undef local_7c
#undef local_78
#undef local_70
#undef local_68

#undef DAT_100036a4
#define DAT_100036a4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x0U)))
#undef DAT_1000376c
#define DAT_1000376c (*(uint8_t *)(((uintptr_t)pf_module_state + 0xc8U)))
#undef DAT_10003772
#define DAT_10003772 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xceU)))
#undef DAT_10003777
#define DAT_10003777 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xd3U)))
#undef DAT_1000377a
#define DAT_1000377a (*(uint8_t *)(((uintptr_t)pf_module_state + 0xd6U)))
#undef DAT_1000377c
#define DAT_1000377c (*(uint8_t *)(((uintptr_t)pf_module_state + 0xd8U)))
#undef DAT_10008000
#define DAT_10008000 (*(int *)(((uintptr_t)pf_module_state + 0x495cU)))
#undef DAT_10009000
#define DAT_10009000 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x595cU)))
#undef DAT_10009008
#define DAT_10009008 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5964U)))
#undef DAT_10009010
#define DAT_10009010 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x596cU)))
#undef DAT_10009020
#define DAT_10009020 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x597cU)))
#undef DAT_10009028
#define DAT_10009028 (*(uint *)(((uintptr_t)pf_module_state + 0x5984U)))
#undef DAT_10009030
#define DAT_10009030 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x598cU)))
#undef DAT_10009038
#define DAT_10009038 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5994U)))
#undef DAT_1000903c
#define DAT_1000903c (*(uint *)(((uintptr_t)pf_module_state + 0x5998U)))
#undef DAT_10009040
#define DAT_10009040 (*(uint *)(((uintptr_t)pf_module_state + 0x599cU)))
#undef DAT_1000904c
#define DAT_1000904c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x59a8U)))
#undef DAT_10009050
#define DAT_10009050 (*(uint *)(((uintptr_t)pf_module_state + 0x59acU)))
#undef DAT_10009054
#define DAT_10009054 (*(uint *)(((uintptr_t)pf_module_state + 0x59b0U)))
#undef DAT_1000905c
#define DAT_1000905c (*(uint *)(((uintptr_t)pf_module_state + 0x59b8U)))
#undef DAT_10009060
#define DAT_10009060 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x59bcU)))
#undef DAT_10009068
#define DAT_10009068 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x59c4U)))
#undef DAT_1000906c
#define DAT_1000906c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x59c8U)))
#undef DAT_10009070
#define DAT_10009070 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x59ccU)))
#undef DAT_10009078
#define DAT_10009078 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x59d4U)))
#undef DAT_10009088
#define DAT_10009088 (*(byte *)(((uintptr_t)pf_module_state + 0x59e4U)))
#undef DAT_10009089
#define DAT_10009089 (*(byte *)(((uintptr_t)pf_module_state + 0x59e5U)))
#undef DAT_1000908a
#define DAT_1000908a (*(byte *)(((uintptr_t)pf_module_state + 0x59e6U)))
#undef DAT_1000908b
#define DAT_1000908b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x59e7U)))
#undef DAT_1000908c
#define DAT_1000908c (*(uint16_t *)(((uintptr_t)pf_module_state + 0x59e8U)))
#undef DAT_10009090
#define DAT_10009090 (*(uint *)(((uintptr_t)pf_module_state + 0x59ecU)))
#undef DAT_10009094
#define DAT_10009094 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x59f0U)))
#undef DAT_10009098
#define DAT_10009098 (*(uint *)(((uintptr_t)pf_module_state + 0x59f4U)))
#undef DAT_1000909c
#define DAT_1000909c (*(uint *)(((uintptr_t)pf_module_state + 0x59f8U)))
#undef DAT_100090b0
#define DAT_100090b0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5a0cU)))
#undef DAT_100090b4
#define DAT_100090b4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5a10U)))
#undef DAT_100090b6
#define DAT_100090b6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5a12U)))
#undef DAT_100090c4
#define DAT_100090c4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5a20U)))
#undef DAT_100090c8
#define DAT_100090c8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5a24U)))
#undef DAT_100090d0
#define DAT_100090d0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5a2cU)))
#undef DAT_1000a000
#define DAT_1000a000 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x695cU)))
#undef UNK_10009018
#define UNK_10009018 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5974U)))
#undef UNK_1000902c
#define UNK_1000902c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5988U)))
#undef UNK_10009034
#define UNK_10009034 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5990U)))
#undef UNK_10009044
#define UNK_10009044 (*(int *)(((uintptr_t)pf_module_state + 0x59a0U)))
#undef UNK_10009048
#define UNK_10009048 (*(uint *)(((uintptr_t)pf_module_state + 0x59a4U)))
#undef UNK_100090a4
#define UNK_100090a4 (*(ushort *)(((uintptr_t)pf_module_state + 0x5a00U)))
#undef UNK_100090aa
#define UNK_100090aa (*(uint16_t *)(((uintptr_t)pf_module_state + 0x5a06U)))
#undef UNK_100090ac
#define UNK_100090ac (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5a08U)))
#undef UNK_100090b2
#define UNK_100090b2 (*(short *)(((uintptr_t)pf_module_state + 0x5a0eU)))
#undef _DAT_10009000
#define _DAT_10009000 (*(int * *)(((uintptr_t)pf_module_state + 0x595cU)))
#undef _DAT_100090b0
#define _DAT_100090b0 (*(short *)(((uintptr_t)pf_module_state + 0x5a0cU)))
#undef _DAT_100090b4
#define _DAT_100090b4 (*(uint16_t *)(((uintptr_t)pf_module_state + 0x5a10U)))
#undef _DAT_100090c4
#define _DAT_100090c4 (*(int *)(((uintptr_t)pf_module_state + 0x5a20U)))
#undef _DAT_100090c8
#define _DAT_100090c8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5a24U)))
#undef _DAT_100090d0
#define _DAT_100090d0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5a2cU)))
#undef iRam0000000010009044
#define iRam0000000010009044 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x59a0U)))
#undef sRam00000000100090b2
#define sRam00000000100090b2 (*(uint16_t *)(((uintptr_t)pf_module_state + 0x5a0eU)))
#undef str_100036e1
#define str_100036e1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3dU)))
#undef str_10003700
#define str_10003700 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5cU)))
#undef str_10003709
#define str_10003709 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x65U)))
#undef str_10003712
#define str_10003712 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6eU)))
#undef str_10003721
#define str_10003721 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7dU)))
#undef uRam0000000010009018
#define uRam0000000010009018 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5974U)))
#undef uRam000000001000902c
#define uRam000000001000902c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5988U)))
#undef uRam0000000010009034
#define uRam0000000010009034 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5990U)))
#undef uRam0000000010009048
#define uRam0000000010009048 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x59a4U)))
#undef uRam00000000100090a4
#define uRam00000000100090a4 (*(uint16_t *)(((uintptr_t)pf_module_state + 0x5a00U)))
#undef uRam00000000100090aa
#define uRam00000000100090aa (*(uint16_t *)(((uintptr_t)pf_module_state + 0x5a06U)))
#undef uRam00000000100090ac
#define uRam00000000100090ac (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5a08U)))
#define acStack_90c (*(char (*)[2316])(pf_stack_frame + 20))
#define iStack_50c (*(int *)(pf_stack_frame + 1044))
#define uStack_508 (*(undefined8 *)(pf_stack_frame + 1048))
#define uStack_500 (*(undefined8 *)(pf_stack_frame + 1056))
#define uStack_4f8 (*(undefined8 *)(pf_stack_frame + 1064))
#define uStack_4f0 (*(undefined8 *)(pf_stack_frame + 1072))
#define uStack_4e8 (*(uint *)(pf_stack_frame + 1080))
#define uStack_4e4 (*(uint *)(pf_stack_frame + 1084))
#define uStack_4e0 (*(undefined8 *)(pf_stack_frame + 1088))
#define uStack_4d8 (*(undefined8 *)(pf_stack_frame + 1096))
#define uStack_4d0 (*(undefined8 *)(pf_stack_frame + 1104))
#define auStack_4c8 (*(ulong (*)[153])(pf_stack_frame + 1112))
#define auStack_c8 (*(uint (*)[50])(pf_stack_frame + 2136))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000664
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_10000664(int *param_1,byte *param_2)

{
  unsigned char pf_stack_frame[2368] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  uint uVar2;
  byte bVar3;
  short sVar4;
  short sVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined8 uVar11;
  ushort uVar12;
  int iVar13;
  long lVar14;
  uint *puVar15;
  byte bVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  undefined2 uVar20;

  if (param_2 == (byte *)0x0) {
    return 0;
  }
  if (((*(short *)(param_2 + 4) == 0x1af4) &&
      (*(short *)(param_2 + 6) == 0x1001 || *(short *)(param_2 + 6) == 0x1042)) ||
     ((param_2[8] == 1 && (param_2[9] == 1)))) {
    if (DAT_10008000 != 0) {
      return 0;
    }
  }
  else {
    if (*(short *)(param_2 + 4) != 0x106b) {
      return 0;
    }
    if (*(short *)(param_2 + 6) != 0x10) {
      return 0;
    }
    if (DAT_10008000 != 0) {
      return 0;
    }
  }
  recovered_100016a4(&DAT_10009000,0x7000);
  recovered_1000190c(acStack_90c,0x400,&DAT_100036a4);
  uStack_4e8 = 0;
  uStack_4f0 = 0;
  uStack_4f8 = 0;
  uStack_500 = 0;
  uStack_508 = 0;
  iStack_50c = 0;
  DAT_10009088 = *param_2;
  uVar17 = (ulong)DAT_10009088;
  DAT_10009089 = param_2[1];
  uVar18 = (ulong)DAT_10009089;
  DAT_1000908a = param_2[2];
  uVar19 = (ulong)DAT_1000908a;
  _DAT_10009000 = param_1;
  DAT_10009090 = recovered_10001bd8(param_2);
  uVar11 = recovered_10001a58(param_1,uVar17,uVar18,uVar19,4,2,(long)&uStack_508);
  if ((int)uVar11 == 0) goto LAB_10001484;
  DAT_1000908c = (undefined2)uStack_508;
  DAT_1000908b = 1;
  if (((param_2[8] == 1) && (param_2[9] == 1)) ||
     ((*(short *)(param_2 + 4) == 0x106b && (*(short *)(param_2 + 6) == 0x10)))) {
    auStack_4c8[0] = 0;
    if (param_1 != (int *)0x0) {
      if ((*(short *)(param_2 + 4) == 0x106b) && (*(short *)(param_2 + 6) == 0x10)) {
        bVar6 = true;
      }
      else {
        if ((param_2[8] != 1) || (param_2[9] != 1)) goto LAB_10001478;
        bVar6 = false;
      }
      bVar7 = recovered_10001bf8(param_1,param_2,(long)acStack_90c);
      if (bVar7) {
        if (bVar6) {
          uVar11 = recovered_10001ff8(param_1,param_2,0,0x22000,auStack_4c8);
          if ((int)uVar11 != 0) {
            _DAT_100090c8 = auStack_4c8[0] + 0x20000;
            _DAT_100090d0 = 1;
            _DAT_100090b4 = 0xe0;
            DAT_100090b6 = 0;
            _DAT_100090c4 = 1;
            uVar11 = recovered_100021ac(param_1,(long *)&DAT_10009000);
            if ((int)uVar11 != 0) goto LAB_10001290;
          }
        }
        else {
          bVar3 = param_2[10];
          if (((bVar3 ^ 0xff) & 5) == 0) {
LAB_100014c8:
            puVar15 = (uint *)(param_2 + 0x18);
            for (lVar14 = 0; lVar14 != 4; lVar14 = lVar14 + 2) {
              bVar16 = 4;
              if (lVar14 == 0) {
                bVar16 = 1;
              }
              if ((bVar16 & bVar3) == 0) {
                uVar20 = 0x1f0;
                if (lVar14 != 0) {
                  uVar20 = 0x170;
                }
                *(undefined2 *)((long)auStack_4c8 + lVar14 + -8) = uVar20;
                uVar12 = 0x3f6;
                if (lVar14 != 0) {
                  uVar12 = 0x376;
                }
              }
              else {
                uVar10 = puVar15[-1];
                uVar2 = *puVar15;
                uVar8 = 0xfffffff0;
                if ((uVar10 & 1) != 0) {
                  uVar8 = 0xfffffffc;
                }
                uVar9 = 0xfffffff0;
                if ((uVar2 & 1) != 0) {
                  uVar9 = 0xfffffffc;
                }
                if (((uVar10 & 1) != 0) && ((uVar2 & 1) != 0)) {
                  if (0xffff0000 < (uVar8 & uVar10) - 0x10000 &&
                      0xffff0002 < (uVar9 & uVar2) - 0xfffe) {
                    *(short *)((long)auStack_4c8 + lVar14 + -8) = (short)(uVar8 & uVar10);
                    uVar12 = (ushort)(uVar9 & uVar2) | 2;
                    goto LAB_10001574;
                  }
                }
                uVar12 = 0;
                *(undefined2 *)((long)auStack_4c8 + lVar14 + -8) = 0;
              }
LAB_10001574:
              *(ushort *)((long)auStack_4c8 + lVar14 + -0xc) = uVar12;
              puVar15 = puVar15 + 2;
            }
            for (lVar14 = 0; lVar14 != 2; lVar14 = lVar14 + 1) {
              sVar4 = *(short *)((long)auStack_4c8 + lVar14 * 2 + -8);
              if ((sVar4 != 0) &&
                 (sVar5 = *(short *)((long)auStack_4c8 + lVar14 * 2 + -0xc), sVar5 != 0)) {
                DAT_100090b6 = 0;
                for (iVar13 = 0; iVar13 != 2; iVar13 = iVar13 + 1) {
                  _DAT_100090b4 = CONCAT11((char)lVar14,(char)iVar13 * '\x10' + -0x20);
                  _DAT_100090c4 = 1;
                  _DAT_100090b0 = sVar4;
                  sRam00000000100090b2 = sVar5;
                  uVar11 = recovered_100021ac(param_1,(long *)&DAT_10009000);
                  if ((int)uVar11 != 0) goto LAB_10001290;
                  _DAT_100090c4 = 0;
                }
              }
            }
          }
          else {
            auStack_c8[0] = 0;
            uVar11 = recovered_10001a58(param_1,(ulong)*param_2,(ulong)param_2[1],(ulong)param_2[2],
                                        4,2,(long)auStack_c8);
            if ((int)uVar11 != 0) {
              uStack_4d0 = CONCAT44(auStack_c8[0],(uint)uStack_4d0) | 0x100000000;
              uVar11 = recovered_100023ac(param_1,(ulong)*param_2,(ulong)param_2[1],
                                          (ulong)param_2[2],(ulong)(auStack_c8[0] | 1));
              if ((((int)uVar11 != 0) &&
                  (uVar11 = recovered_10001a58(param_1,(ulong)*param_2,(ulong)param_2[1],
                                               (ulong)param_2[2],4,2,(long)&uStack_4d0 + 4),
                  (int)uVar11 != 0)) && ((uStack_4d0 & 0x100000000) != 0)) {
                bVar3 = param_2[10];
                goto LAB_100014c8;
              }
            }
          }
        }
      }
    }
  }
  else {
    bVar6 = recovered_10001bf8(param_1,param_2,(long)acStack_90c);
    if (bVar6) {
      auStack_c8[0] = 0;
      recovered_100016a4((undefined1 *)&DAT_10009008,0x80);
      uVar11 = recovered_10001a58(param_1,(ulong)*param_2,(ulong)param_2[1],(ulong)param_2[2],0x34,1
                                  ,(long)auStack_c8);
      if ((int)uVar11 != 0) {
        uVar8 = 0;
        while ((uVar8 < 0x20 && (auStack_c8[0] - 0x40 < 0xb0))) {
          uStack_4d0 = 0;
          uStack_4d8 = 0;
          uStack_4e0 = 0;
          uVar11 = recovered_10001a58(param_1,(ulong)*param_2,(ulong)param_2[1],(ulong)param_2[2],
                                      (ulong)(auStack_c8[0] & 0xffff),1,(long)&uStack_4d0 + 4);
          if (((int)uVar11 == 0) ||
             (uVar11 = recovered_10001a58(param_1,(ulong)*param_2,(ulong)param_2[1],
                                          (ulong)param_2[2],
                                          (ulong)((auStack_c8[0] & 0xffff) + 1 & 0xffff),1,
                                          (long)&uStack_4d0), (int)uVar11 == 0)) break;
          if ((((PF_PART4(uStack_4d0, 4) == 9) &&
               (uVar11 = recovered_10001a58(param_1,(ulong)*param_2,(ulong)param_2[1],
                                            (ulong)param_2[2],
                                            (ulong)((auStack_c8[0] & 0xffff) + 3 & 0xffff),1,
                                            (long)&uStack_4d8 + 4), (int)uVar11 != 0)) &&
              (uVar11 = recovered_10001a58(param_1,(ulong)*param_2,(ulong)param_2[1],
                                           (ulong)param_2[2],
                                           (ulong)((auStack_c8[0] & 0xffff) + 4 & 0xffff),1,
                                           (long)&uStack_4d8), (int)uVar11 != 0)) &&
             ((uVar11 = recovered_10001a58(param_1,(ulong)*param_2,(ulong)param_2[1],
                                           (ulong)param_2[2],
                                           (ulong)((auStack_c8[0] & 0xffff) + 8 & 0xffff),4,
                                           (long)&uStack_4e0 + 4), (int)uVar11 != 0 &&
              (uVar11 = recovered_10001a58(param_1,(ulong)*param_2,(ulong)param_2[1],
                                           (ulong)param_2[2],
                                           (ulong)((auStack_c8[0] & 0xffff) + 0xc & 0xffff),4,
                                           (long)&uStack_4e0), (int)uVar11 != 0)))) {
            auStack_4c8[0] = 0;
            iRam0000000010009044 = iRam0000000010009044 + 1;
            if ((PF_PART4(uStack_4d8, 4) == 1) && (0x37 < (uint)uStack_4e0)) {
              uVar11 = recovered_10002980(param_1,param_2,(uint)uStack_4d8,PF_PART4(uStack_4e0, 4),
                                          (uint)uStack_4e0,auStack_4c8);
              if ((int)uVar11 != 0) {
                DAT_10009008 = auStack_4c8[0];
                uRam000000001000902c = (uint)uStack_4d8;
                goto LAB_10000a5c;
              }
            }
            iVar13 = PF_PART4(uStack_4d8, 4);
            if (PF_PART4(uStack_4d8, 4) == 2 && 1 < (uint)uStack_4e0) {
              uVar11 = recovered_10002980(param_1,param_2,(uint)uStack_4d8,PF_PART4(uStack_4e0, 4),
                                          (uint)uStack_4e0,auStack_4c8);
              if ((int)uVar11 != 0) {
                uStack_4e4 = 0;
                DAT_10009010 = auStack_4c8[0];
                DAT_10009030 = (uint)uStack_4d8;
                uVar11 = recovered_10001a58(param_1,(ulong)*param_2,(ulong)param_2[1],
                                            (ulong)param_2[2],
                                            (ulong)((auStack_c8[0] & 0xffff) + 0x10 & 0xffff),4,
                                            (long)&uStack_4e4);
                if (((int)uVar11 == 0) || (uStack_4e4 == 0)) {
                  DAT_10009010 = 0;
                }
                else {
                  DAT_1000903c = uStack_4e4;
                  DAT_10009040 = (uint)uStack_4e0;
                }
                goto LAB_10000a5c;
              }
              iVar13 = PF_PART4(uStack_4d8, 4);
            }
            if (iVar13 == 3) {
              uVar11 = recovered_10002980(param_1,param_2,(uint)uStack_4d8,PF_PART4(uStack_4e0, 4),
                                          (uint)uStack_4e0,auStack_4c8);
              if ((int)uVar11 != 0) {
                uRam0000000010009018 = auStack_4c8[0];
                uRam0000000010009034 = (uint)uStack_4d8;
                goto LAB_10000a5c;
              }
              iVar13 = PF_PART4(uStack_4d8, 4);
            }
            if (iVar13 == 4) {
              uVar11 = recovered_10002980(param_1,param_2,(uint)uStack_4d8,PF_PART4(uStack_4e0, 4),
                                          (uint)uStack_4e0,auStack_4c8);
              if ((int)uVar11 != 0) {
                DAT_10009020 = auStack_4c8[0];
                DAT_10009028 = (uint)uStack_4e0;
                DAT_10009038 = (uint)uStack_4d8;
              }
            }
          }
LAB_10000a5c:
          if (((uint)uStack_4d0 == 0) || ((uint)uStack_4d0 == auStack_c8[0])) break;
          uVar8 = uVar8 + 1;
          auStack_c8[0] = (uint)uStack_4d0;
        }
        if (DAT_10009008 != 0) {
          auStack_4c8[0] = auStack_4c8[0] & 0xffffffff00000000;
          auStack_c8[0] = 0;
          recovered_10001ec0(param_1,DAT_10009008,0x14,((uintptr_t)pf_module_state+0x59b4U));
          DAT_10009060 = 1;
          uVar17 = recovered_100029e4(param_1,DAT_10009008);
          if ((int)uVar17 != 0) {
            DAT_10009060 = 2;
            uVar11 = recovered_10002834(param_1,DAT_10009008,0x14,1);
            if ((((int)uVar11 != 0) &&
                (uVar11 = recovered_10001ec0(param_1,DAT_10009008,0x14,(long)auStack_c8),
                (int)uVar11 != 0)) && ((auStack_c8[0] & 0xc1) == 1)) {
              DAT_10009060 = 3;
              uVar11 = recovered_10002834(param_1,DAT_10009008,0x14,3);
              if ((((int)uVar11 != 0) &&
                  (uVar11 = recovered_10001ec0(param_1,DAT_10009008,0x14,(long)auStack_c8),
                  (int)uVar11 != 0)) && ((auStack_c8[0] & 0xc3) == 3)) {
                DAT_10009060 = 4;
                uVar11 = recovered_10002a74(param_1,DAT_10009008,0,0);
                if ((((int)uVar11 != 0) &&
                    (uVar11 = recovered_10001ed8(param_1,DAT_10009008,4,(undefined4 *)((uintptr_t)pf_module_state+0x59a4U)),
                    (int)uVar11 != 0)) &&
                   ((uVar11 = recovered_10002a74(param_1,DAT_10009008,0,1), (int)uVar11 != 0 &&
                    ((uVar11 = recovered_10001ed8(param_1,DAT_10009008,4,&DAT_1000904c),
                     (int)uVar11 != 0 && ((DAT_1000904c & 1) != 0)))))) {
                  DAT_10009050 = uRam0000000010009048 & 0x200;
                  DAT_10009054 = DAT_1000904c & 3;
                  DAT_10009060 = 5;
                  uVar11 = recovered_10002a74(param_1,DAT_10009008,8,0);
                  if (((int)uVar11 != 0) &&
                     (((uVar11 = recovered_10002a74(param_1,DAT_10009008,0xc,(ulong)DAT_10009050),
                       (int)uVar11 != 0 &&
                       (uVar11 = recovered_10002a74(param_1,DAT_10009008,8,1), (int)uVar11 != 0)) &&
                      (uVar11 = recovered_10002a74(param_1,DAT_10009008,0xc,(ulong)DAT_10009054),
                      (int)uVar11 != 0)))) {
                    recovered_10001de0(param_1);
                    auStack_c8[0] = 0xb;
                    DAT_10009060 = 6;
                    uVar11 = recovered_10002834(param_1,DAT_10009008,0x14,0xb);
                    if ((((int)uVar11 != 0) &&
                        (uVar11 = recovered_10001ec0(param_1,DAT_10009008,0x14,((uintptr_t)pf_module_state+0x59b8U)),
                        (int)uVar11 != 0)) && ((DAT_1000905c & 200) == 8)) {
                      DAT_10009060 = 7;
                      uVar11 = recovered_10001e78(param_1,DAT_10009008,0x12,(undefined4 *)((uintptr_t)pf_module_state+0x59c0U)
                                                 );
                      if ((((int)uVar11 != 0) &&
                          (uVar11 = recovered_10001ec0(param_1,DAT_10009008,0x15,((uintptr_t)pf_module_state+0x59dcU)),
                          (int)uVar11 != 0)) &&
                         ((uVar11 = recovered_10001e10(param_1,DAT_10009008,0x16,0),
                          (int)uVar11 != 0 &&
                          ((uVar11 = recovered_10001e78(param_1,DAT_10009008,0x18,&DAT_10009068),
                           (int)uVar11 != 0 &&
                           (uVar11 = recovered_10001e78(param_1,DAT_10009008,0x1c,&DAT_1000906c),
                           (int)uVar11 != 0)))))) {
                        uVar11 = recovered_10001e78(param_1,DAT_10009008,0x1e,
                                                    (undefined4 *)auStack_4c8);
                        uVar8 = DAT_10009054;
                        if ((int)uVar11 != 0) {
                          DAT_10009070 = (uint)auStack_4c8[0];
                          if ((((DAT_10009010 != 0) && (DAT_1000903c != 0)) && (1 < DAT_10009040))
                             && ((uVar17 = (ulong)DAT_1000903c * (auStack_4c8[0] & 0xffffffff),
                                 !CARRY8(DAT_10009010,uVar17) && (uVar17 <= (ulong)DAT_10009040 - 2)
                                 ))) {
                            DAT_10009078 = uVar17 + DAT_10009010;
                          }
                        }
                        DAT_10009060 = 8;
                        uVar10 = recovered_10001bd8(param_2);
                        DAT_10009090 = ((uVar8 & 2) << 0x1d | uVar10) ^ 0x40000000;
                        if (((DAT_10009078 != 0) && (DAT_10009020 != 0)) &&
                           ((7 < DAT_10009028 &&
                            ((uVar8 = CONCAT13(POPCOUNT((char)(DAT_10009068 >> 0x18)),
                                               CONCAT12(POPCOUNT((char)(DAT_10009068 >> 0x10)),
                                                        CONCAT11(POPCOUNT((char)(DAT_10009068 >> 8))
                                                                 ,POPCOUNT((char)DAT_10009068)))),
                             uVar20 = NEON_uaddlv((ulong)uVar8,1),
                             2 < DAT_10009068 && CONCAT22((short)(uVar8 >> 0x10),uVar20) < 2 &&
                             (DAT_1000906c == 0)))))) {
                          uVar8 = DAT_10009068;
                          if (7 < DAT_10009068) {
                            uVar8 = 8;
                          }
                          uRam00000000100090a4 = (ushort)uVar8;
                          recovered_100016a4((undefined1 *)((uintptr_t)pf_module_state+0x5a5cU),0x80);
                          recovered_100016a4((undefined1 *)((uintptr_t)pf_module_state+0x5b5cU),0x16);
                          recovered_100016a4((undefined1 *)((uintptr_t)pf_module_state+0x5c5cU),0x46);
                          uVar8 = recovered_10001d40(&DAT_10009000,(void *)((uintptr_t)pf_module_state+0x5a5cU),0x80,
                                                     &uStack_4e8,(uint *)((long)&uStack_4f0 + 4));
                          if ((((uVar8 != 0) &&
                               (uVar8 = recovered_10001d40(&DAT_10009000,(void *)((uintptr_t)pf_module_state+0x5b5cU),0x16,
                                                           (uint *)&uStack_4f0,
                                                           (uint *)((long)&uStack_4f8 + 4)),
                               uVar8 != 0)) &&
                              (uVar8 = recovered_10001d40(&DAT_10009000,(void *)((uintptr_t)pf_module_state+0x5c5cU),0x46,
                                                          (uint *)&uStack_4f8,
                                                          (uint *)((long)&uStack_500 + 4)),
                              uVar8 != 0)) &&
                             ((((uStack_4e8 & 0xf) == 0 && ((uStack_4f0 & 1) == 0)) &&
                              ((uStack_4f8 & 3) == 0)))) {
                            recovered_10001da4(param_1,(ulong)DAT_10009090,((uintptr_t)pf_module_state+0x5a5cU),0x80);
                            recovered_10001da4(param_1,(ulong)DAT_10009090,((uintptr_t)pf_module_state+0x5b5cU),0x16);
                            recovered_10001da4(param_1,(ulong)DAT_10009090,((uintptr_t)pf_module_state+0x5c5cU),0x46);
                            recovered_10001de0(param_1);
                            uVar11 = recovered_10001e10(param_1,DAT_10009008,0x16,0);
                            if ((((int)uVar11 != 0) &&
                                (uVar11 = recovered_10001e10(param_1,DAT_10009008,0x18,
                                                             (ulong)uRam00000000100090a4),
                                (int)uVar11 != 0)) &&
                               (((uVar17 = recovered_10001e24(param_1,DAT_10009008,0x20,
                                                              (ulong)uStack_4e8,uStack_4f0 >> 0x20),
                                 (int)uVar17 != 0 &&
                                 (((uVar17 = recovered_10001e24(param_1,DAT_10009008,0x28,
                                                                uStack_4f0 & 0xffffffff,
                                                                uStack_4f8 >> 0x20),
                                   (int)uVar17 != 0 &&
                                   (uVar17 = recovered_10001e24(param_1,DAT_10009008,0x30,
                                                                uStack_4f8 & 0xffffffff,
                                                                uStack_500 >> 0x20),
                                   (int)uVar17 != 0)) &&
                                  (uVar11 = recovered_10001e10(param_1,DAT_10009008,0x1c,1),
                                  (int)uVar11 != 0)))) &&
                                ((uVar11 = recovered_10001e78(param_1,DAT_10009008,0x1c,&iStack_50c)
                                 , (int)uVar11 != 0 && (iStack_50c == 1)))))) {
                              iVar13 = 5;
                              do {
                                iVar13 = iVar13 + -1;
                                if (iVar13 == 0) goto LAB_10001478;
                                auStack_4c8[0] = auStack_4c8[0] & 0xffffffff00000000;
                                auStack_c8[0] = 0;
                                uVar11 = recovered_10001ec0(param_1,DAT_10009008,0x15,
                                                            (long)auStack_4c8);
                                if ((((int)uVar11 == 0) ||
                                    (uVar11 = recovered_10001ed8(param_1,DAT_10009020,0,
                                                                 (undefined4 *)&uStack_500),
                                    (int)uVar11 == 0)) ||
                                   (uVar11 = recovered_10001ed8(param_1,DAT_10009020,4,
                                                                (undefined4 *)
                                                                ((long)&uStack_508 + 4)),
                                   (int)uVar11 == 0)) goto LAB_10001478;
                                uVar11 = recovered_10001ec0(param_1,DAT_10009008,0x15,
                                                            (long)auStack_c8);
                                uVar17 = DAT_10009008;
                                if ((int)uVar11 == 0) goto LAB_10001478;
                              } while ((uint)auStack_4c8[0] != auStack_c8[0]);
                              if (PF_PART4(uStack_508, 4) == 0) {
                                DAT_1000909c = (uint)uStack_500;
                                if (((((((uint)uStack_500 != 0) &&
                                       (auStack_4c8[0] = auStack_4c8[0] & 0xffffffff00000000,
                                       DAT_10009008 != 0)) &&
                                      (uVar11 = recovered_10001ec0(param_1,DAT_10009008,0x14,
                                                                   (long)auStack_4c8),
                                      (int)uVar11 != 0)) &&
                                     ((((uint)auStack_4c8[0] & 200) == 8 &&
                                      (uVar11 = recovered_10002834(param_1,uVar17,0x14,
                                                                   (ulong)((uint)auStack_4c8[0] | 4)
                                                                  ), (int)uVar11 != 0)))) &&
                                    (uVar11 = recovered_10001ec0(param_1,uVar17,0x14,
                                                                 (long)auStack_4c8),
                                    (int)uVar11 != 0)) && (((uint)auStack_4c8[0] & 0xc4) == 4)) {
                                  DAT_10009098 = DAT_10009050 >> 9 & 1;
                                  DAT_10009094 = 1;
                                  goto LAB_10001290;
                                }
                              }
                            }
                          }
                        }
                        goto LAB_10001478;
                      }
                    }
                  }
                }
              }
            }
          }
          uVar11 = recovered_10001ec0(param_1,DAT_10009008,0x14,(long)auStack_c8);
          if (((int)uVar11 != 0) && (auStack_c8[0] != 0)) {
            recovered_10002834(param_1,DAT_10009008,0x14,(ulong)(auStack_c8[0] | 0x80));
          }
          uVar8 = DAT_10009054;
          uVar10 = recovered_10001bd8(param_2);
          DAT_10009090 = ((uVar8 & 2) << 0x1d | uVar10) ^ 0x40000000;
          goto LAB_10001478;
        }
      }
      auStack_4c8[0] = auStack_4c8[0] & 0xffffffff00000000;
      auStack_c8[0] = 0;
      uStack_4d0 = 0;
      uStack_4d8 = 0;
      uStack_4e0 = uStack_4e0 & 0xffffffff;
      if ((((param_1 != (int *)0x0) && (*(short *)(param_2 + 4) == 0x1af4)) &&
          (*(short *)(param_2 + 6) == 0x1001)) &&
         ((uVar8 = *(uint *)(param_2 + 0x14), (uVar8 & 1) != 0 && ((uVar8 & 0xfffc) != 0)))) {
        uVar2 = uVar8 & 0xfffffffc;
        uVar10 = uVar2 + 0x12;
        uVar11 = recovered_10002848(param_1,(ulong)(uVar10 & 0xffff),1,0);
        if (((int)uVar11 != 0) &&
           ((uVar11 = recovered_10002848(param_1,(ulong)(uVar10 & 0xffff),1,3), (int)uVar11 != 0 &&
            (uVar11 = recovered_100028e0(param_1,(ulong)(uVar8 & 0xfffc),4,(long)auStack_4c8),
            (int)uVar11 != 0)))) {
          uVar11 = recovered_10002848(param_1,(ulong)(uVar2 + 4 & 0xffff),4,
                                      (ulong)((uint)auStack_4c8[0] & 0x200));
          if (((int)uVar11 != 0) &&
             (uVar11 = recovered_10002848(param_1,(ulong)(uVar2 + 0xe & 0xffff),2,0),
             (int)uVar11 != 0)) {
            uVar11 = recovered_100028e0(param_1,(ulong)(uVar2 + 0xc & 0xffff),2,(long)&uStack_4d0);
            uVar17 = uStack_4d0;
            if ((int)uVar11 != 0) {
              uVar8 = CONCAT13(POPCOUNT((char)(uStack_4d0 >> 0x18)),
                               CONCAT12(POPCOUNT((char)(uStack_4d0 >> 0x10)),
                                        CONCAT11(POPCOUNT((char)(uStack_4d0 >> 8)),
                                                 POPCOUNT((char)uStack_4d0))));
              uVar20 = NEON_uaddlv((ulong)uVar8,1);
              if ((uint)uStack_4d0 - 3 < 0x7e && CONCAT22((short)(uVar8 >> 0x10),uVar20) < 2) {
                uRam00000000100090ac = 1;
                uVar8 = recovered_10001bd8(param_2);
                DAT_10009090 = uVar8 | 0x40000000;
                uRam00000000100090aa = (undefined2)uVar2;
                uRam00000000100090a4 = (ushort)uVar17;
                recovered_100016a4(&DAT_1000a000,0x2000);
                uVar8 = recovered_10001d40(&DAT_10009000,&DAT_1000a000,0x2000,auStack_c8,
                                           (uint *)((long)&uStack_4d0 + 4));
                if (((uVar8 != 0) && (PF_PART4(uStack_4d0, 4) == 0)) && ((auStack_c8[0] & 0xfff) == 0)) {
                  recovered_10001da4(param_1,(ulong)DAT_10009090,&DAT_1000a000,0x2000);
                  recovered_10001de0(param_1);
                  uVar11 = recovered_10002848(param_1,(ulong)(uVar2 + 8 & 0xffff),4,
                                              (ulong)(auStack_c8[0] >> 0xc));
                  if ((((((int)uVar11 != 0) &&
                        (uVar11 = recovered_100028e0(param_1,(ulong)(uVar2 + 0x14 & 0xffff),4,
                                                     (long)&uStack_4d8 + 4), (int)uVar11 != 0)) &&
                       ((uVar11 = recovered_100028e0(param_1,(ulong)(uVar2 + 0x18 & 0xffff),4,
                                                     (long)&uStack_4d8), (int)uVar11 != 0 &&
                        (((uint)uStack_4d8 == 0 && (PF_PART4(uStack_4d8, 4) != 0)))))) &&
                      (uVar11 = recovered_10002848(param_1,(ulong)(uVar10 & 0xffff),1,7),
                      (int)uVar11 != 0)) &&
                     ((uVar11 = recovered_100028e0(param_1,(ulong)(uVar10 & 0xffff),1,
                                                   (long)&uStack_4e0 + 4), (int)uVar11 != 0 &&
                      ((PF_PART1(uStack_4e0, 4) >> 2 & 1) != 0)))) {
                    DAT_10009098 = (uint)auStack_4c8[0] >> 9 & 1;
                    DAT_1000909c = PF_PART4(uStack_4d8, 4);
                    DAT_10009094 = 1;
LAB_10001290:
                    recovered_1000190c(acStack_90c,0x400,&DAT_100036a4);
                    recovered_10001ad8((long)acStack_90c,0x400,DAT_1000909c);
                    recovered_10001b80((long)acStack_90c,0x400,str_10003700);
                    DAT_10008000 = DAT_10008000 + 1;
                    pcVar1 = str_10003721;
                    if (_DAT_100090c4 != 0) {
                      pcVar1 = str_10003712;
                    }
                    recovered_1000190c((undefined1 *)auStack_c8,0x60,str_10003709);
                    recovered_10001b80((long)auStack_c8,0x60,&DAT_1000376c);
                    recovered_10002b30((long)auStack_c8,0x60,(uint)*param_2,2);
                    recovered_10001b80((long)auStack_c8,0x60,(char *)((uintptr_t)pf_module_state+0xcaU));
                    recovered_10002b30((long)auStack_c8,0x60,(uint)param_2[1],2);
                    recovered_10001b80((long)auStack_c8,0x60,(char *)((uintptr_t)pf_module_state+0xccU));
                    recovered_10001ad8((long)auStack_c8,0x60,(uint)param_2[2]);
                    recovered_1000190c((undefined1 *)auStack_4c8,0x400,&DAT_10003772);
                    recovered_10002b30((long)auStack_4c8,0x400,(uint)*param_2,2);
                    recovered_10001b80((long)auStack_4c8,0x400,(char *)((uintptr_t)pf_module_state+0xcaU));
                    recovered_10002b30((long)auStack_4c8,0x400,(uint)param_2[1],2);
                    recovered_10001b80((long)auStack_4c8,0x400,(char *)((uintptr_t)pf_module_state+0xccU));
                    recovered_10001ad8((long)auStack_4c8,0x400,(uint)param_2[2]);
                    recovered_10001b80((long)auStack_4c8,0x400,&DAT_10003777);
                    recovered_10002b30((long)auStack_4c8,0x400,(uint)*(ushort *)(param_2 + 4),4);
                    recovered_10001b80((long)auStack_4c8,0x400,(char *)((uintptr_t)pf_module_state+0xcaU));
                    recovered_10002b30((long)auStack_4c8,0x400,(uint)*(ushort *)(param_2 + 6),4);
                    recovered_10001b80((long)auStack_4c8,0x400,&DAT_1000377a);
                    if (acStack_90c[0] != '\0') {
                      recovered_10001b80((long)auStack_4c8,0x400,&DAT_1000377c);
                      recovered_10001b80((long)auStack_4c8,0x400,acStack_90c);
                    }
                    if ((param_1 != (int *)0x0) && (param_1[3] != 0)) {
                      (*(code *)(ulong)(uint)param_1[3])(auStack_c8,pcVar1,auStack_4c8);
                    }
                    return 1;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_10001478:
  recovered_10001f20((undefined8 *)&DAT_10009000);
LAB_10001484:
  recovered_10001aa4(param_1,str_100036e1);
  return 0;
}

#undef DAT_100036a4
#undef DAT_1000376c
#undef DAT_10003772
#undef DAT_10003777
#undef DAT_1000377a
#undef DAT_1000377c
#undef DAT_10008000
#undef DAT_10009000
#undef DAT_10009008
#undef DAT_10009010
#undef DAT_10009020
#undef DAT_10009028
#undef DAT_10009030
#undef DAT_10009038
#undef DAT_1000903c
#undef DAT_10009040
#undef DAT_1000904c
#undef DAT_10009050
#undef DAT_10009054
#undef DAT_1000905c
#undef DAT_10009060
#undef DAT_10009068
#undef DAT_1000906c
#undef DAT_10009070
#undef DAT_10009078
#undef DAT_10009088
#undef DAT_10009089
#undef DAT_1000908a
#undef DAT_1000908b
#undef DAT_1000908c
#undef DAT_10009090
#undef DAT_10009094
#undef DAT_10009098
#undef DAT_1000909c
#undef DAT_100090b0
#undef DAT_100090b4
#undef DAT_100090b6
#undef DAT_100090c4
#undef DAT_100090c8
#undef DAT_100090d0
#undef DAT_1000a000
#undef UNK_10009018
#undef UNK_1000902c
#undef UNK_10009034
#undef UNK_10009044
#undef UNK_10009048
#undef UNK_100090a4
#undef UNK_100090aa
#undef UNK_100090ac
#undef UNK_100090b2
#undef _DAT_10009000
#undef _DAT_100090b0
#undef _DAT_100090b4
#undef _DAT_100090c4
#undef _DAT_100090c8
#undef _DAT_100090d0
#undef iRam0000000010009044
#undef sRam00000000100090b2
#undef str_100036e1
#undef str_10003700
#undef str_10003709
#undef str_10003712
#undef str_10003721
#undef uRam0000000010009018
#undef uRam000000001000902c
#undef uRam0000000010009034
#undef uRam0000000010009048
#undef uRam00000000100090a4
#undef uRam00000000100090aa
#undef uRam00000000100090ac
#undef acStack_90c
#undef iStack_50c
#undef uStack_508
#undef uStack_500
#undef uStack_4f8
#undef uStack_4f0
#undef uStack_4e8
#undef uStack_4e4
#undef uStack_4e0
#undef uStack_4d8
#undef uStack_4d0
#undef auStack_4c8
#undef auStack_c8

#undef DAT_10008000
#define DAT_10008000 (*(uint *)(((uintptr_t)pf_module_state + 0x495cU)))
#undef DAT_10009000
#define DAT_10009000 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x595cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001658
 */

void recovered_10001658(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  ulong uVar2;

  puVar1 = (undefined8 *)&DAT_10009000;
  for (uVar2 = 0; uVar2 < DAT_10008000; uVar2 = uVar2 + 1) {
    recovered_10001f20(puVar1);
    puVar1 = puVar1 + 0xe00;
  }
  DAT_10008000 = 0;
  return;
}

#undef DAT_10008000
#undef DAT_10009000

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100016a4
 */

void recovered_100016a4(undefined1 *param_1,long param_2)

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


#undef DAT_10008000
#define DAT_10008000 (*(uint *)(((uintptr_t)pf_module_state + 0x495cU)))
#undef DAT_10009000
#define DAT_10009000 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x595cU)))
#undef DAT_10009078
#define DAT_10009078 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x59d4U)))
#undef DAT_10009090
#define DAT_10009090 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x59ecU)))
#undef DAT_10009094
#define DAT_10009094 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x59f0U)))
#undef DAT_10009098
#define DAT_10009098 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x59f4U)))
#undef DAT_100090b4
#define DAT_100090b4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5a10U)))
#undef DAT_100090c4
#define DAT_100090c4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5a20U)))
#define auStack_78 (*(uint (*)[30])(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100016bc
 */

/* WARNING: Removing unreachable block (ram,0x10002c64) */
/* WARNING: Removing unreachable block (ram,0x10002f3c) */
/* WARNING: Removing unreachable block (ram,0x10002f40) */
/* WARNING: Removing unreachable block (ram,0x10002d14) */
/* WARNING: Removing unreachable block (ram,0x10002d64) */
/* WARNING: Removing unreachable block (ram,0x10002d70) */
/* WARNING: Removing unreachable block (ram,0x10002f00) */
/* WARNING: Removing unreachable block (ram,0x10002c6c) */
/* WARNING: Removing unreachable block (ram,0x10002cf0) */
/* WARNING: Removing unreachable block (ram,0x10002d0c) */

ulong recovered_100016bc(uint param_1)

{
  unsigned char pf_stack_frame[176] __attribute__((aligned(16))) = {0};

  char *data;
  undefined4 *data_00;
  undefined1 *puVar1;
  long lVar2;
  ushort uVar3;
  ushort uVar4;
  long lVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  long *device;
  long *plVar12;
  long lVar13;

  if (DAT_10008000 <= param_1) {
    return 0;
  }
  uVar11 = (ulong)param_1;
  lVar5 = uVar11 * 0x7000;
  device = (long *)(&DAT_10009000 + lVar5);
  if ((&DAT_10009098)[uVar11 * 0x1c00] == 0) {
    return 0;
  }
  if (*(int *)(&DAT_100090c4 + lVar5) != 0) {
    recovered_10002ba8((long)device);
    uVar11 = recovered_100023f4(device,2);
    if ((((int)uVar11 != 0) &&
        (uVar11 = recovered_100025a0(device,(ulong)(byte)(&DAT_100090b4)[lVar5]), (int)uVar11 != 0))
       && (uVar11 = recovered_10002680(device,0xe7), (int)uVar11 != 0)) {
      uVar9 = recovered_100026d0(device,0,0x29);
      uVar11 = (ulong)((int)uVar9 != 0);
    }
    *(undefined4 *)(lVar5 + ((uintptr_t)pf_module_state+0x59fcU)) = 0;
    return uVar11;
  }
  if (device == (long *)0x0) {
    return 0;
  }
  recovered_10002ba8((long)device);
  auStack_78[2] = 0;
  auStack_78[3] = 0;
  auStack_78[4] = 0;
  auStack_78[5] = 0;
  auStack_78[0] = 0;
  auStack_78[1] = 0;
  lVar2 = 0x100;
  if (*(int *)(lVar5 + ((uintptr_t)pf_module_state+0x5a08U)) == 0) {
    plVar12 = (long *)(lVar5 + ((uintptr_t)pf_module_state+0x5b5cU));
    lVar13 = 0x300;
  }
  else {
    lVar2 = 0x1000;
    plVar12 = device + (ulong)*(ushort *)(lVar5 + ((uintptr_t)pf_module_state+0x5a00U)) * 2 + 0x200;
    lVar13 = 0x2000;
  }
  if (((&DAT_10009094)[uVar11 * 0x1c00] != 0) && ((&DAT_10009098)[uVar11 * 0x1c00] != 0)) {
    data = (char *)(lVar5 + ((uintptr_t)pf_module_state+0xb95cU));
    data_00 = (undefined4 *)(lVar5 + ((uintptr_t)pf_module_state+0x895cU));
    recovered_100016a4((undefined1 *)data_00,0x10);
    *data_00 = 4;
    recovered_10002f8c((undefined1 *)(lVar5 + ((uintptr_t)pf_module_state+0x8964U)),0,0);
    *data = -1;
    uVar6 = recovered_10001d40(device,data_00,0x10,auStack_78 + 5,auStack_78 + 4);
    uVar10 = (ulong)uVar6;
    if (uVar6 == 0) goto LAB_10002f64;
    uVar6 = recovered_10001d40(device,data,1,auStack_78 + 1,auStack_78);
    uVar10 = (ulong)uVar6;
    if (uVar6 == 0) goto LAB_10002f64;
    puVar1 = (undefined1 *)((long)device + lVar2);
    recovered_100016a4(puVar1,(ulong)*(ushort *)(lVar5 + ((uintptr_t)pf_module_state+0x5a00U)) << 4);
    recovered_10002fe8(puVar1,auStack_78[5],auStack_78[4],0x10,1,1);
    recovered_10002fe8(puVar1 + 0x10,auStack_78[1],auStack_78[0],1,2,0);
    uVar3 = *(ushort *)(lVar5 + ((uintptr_t)pf_module_state+0x5a00U));
    uVar6 = 0;
    if (uVar3 != 0) {
      uVar6 = (uint)*(ushort *)(lVar5 + ((uintptr_t)pf_module_state+0x5a02U)) / (uint)uVar3;
    }
    *(undefined2 *)
     ((long)plVar12 + (ulong)((uint)*(ushort *)(lVar5 + ((uintptr_t)pf_module_state+0x5a02U)) - uVar6 * uVar3) * 2 + 4) = 0;
    iVar7 = *(ushort *)(lVar5 + ((uintptr_t)pf_module_state+0x5a02U)) + 1;
    *(short *)(lVar5 + ((uintptr_t)pf_module_state+0x5a02U)) = (short)iVar7;
    *(char *)((long)plVar12 + 2) = (char)iVar7;
    *(char *)((long)plVar12 + 3) = (char)((uint)iVar7 >> 8);
    uVar3 = *(ushort *)(lVar5 + ((uintptr_t)pf_module_state+0x5a04U));
    recovered_10001da4((int *)*device,(ulong)(uint)(&DAT_10009090)[uVar11 * 0x1c00],data_00,0x10);
    recovered_10001da4((int *)*device,(ulong)(uint)(&DAT_10009090)[uVar11 * 0x1c00],
                       lVar5 + ((uintptr_t)pf_module_state+0x995cU),0);
    recovered_10001da4((int *)*device,(ulong)(uint)(&DAT_10009090)[uVar11 * 0x1c00],data,1);
    recovered_10001da4((int *)*device,(ulong)(uint)(&DAT_10009090)[uVar11 * 0x1c00],puVar1,
                       (ulong)*(ushort *)(lVar5 + ((uintptr_t)pf_module_state+0x5a00U)) << 4);
    recovered_10001da4((int *)*device,(ulong)(uint)(&DAT_10009090)[uVar11 * 0x1c00],plVar12,
                       (ulong)((uint)*(ushort *)(lVar5 + ((uintptr_t)pf_module_state+0x5a00U)) * 2 + 6));
    recovered_10001de0((int *)*device);
    if (*(int *)(lVar5 + ((uintptr_t)pf_module_state+0x5a08U)) == 0) {
LAB_10002e58:
      uVar9 = recovered_10001e10((int *)*device,(&DAT_10009078)[uVar11 * 0xe00],0,0);
      if ((int)uVar9 != 0) {
LAB_10002e70:
        lVar13 = (long)device + lVar13;
        uVar6 = uVar3 + 1;
        iVar7 = 50000;
        do {
          recovered_10001da4((int *)*device,(ulong)(uint)(&DAT_10009090)[uVar11 * 0x1c00],lVar13,
                             (ulong)((uint)*(ushort *)(lVar5 + ((uintptr_t)pf_module_state+0x5a00U)) << 3 | 6));
          uVar4 = *(ushort *)(lVar13 + 2);
          *(ushort *)(lVar5 + ((uintptr_t)pf_module_state+0x5a04U)) = uVar4;
          if ((uint)uVar4 == (uVar6 & 0xffff)) goto LAB_10002ed4;
          recovered_100024fc((int *)*device,100);
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
        if ((uint)*(ushort *)(lVar5 + ((uintptr_t)pf_module_state+0x5a04U)) == (uVar6 & 0xffff)) {
LAB_10002ed4:
          uVar4 = *(ushort *)(lVar5 + ((uintptr_t)pf_module_state+0x5a00U));
          uVar6 = 0;
          if (uVar4 != 0) {
            uVar6 = (uint)uVar3 / (uint)uVar4;
          }
          lVar13 = lVar13 + (ulong)((uint)uVar3 - uVar6 * uVar4) * 8;
          iVar7 = recovered_10003048((undefined4 *)(lVar13 + 4));
          iVar8 = recovered_10003048((undefined4 *)(lVar13 + 8));
          if ((iVar7 == 0) && (iVar8 == 1)) {
            recovered_10001da4((int *)*device,(ulong)(uint)(&DAT_10009090)[uVar11 * 0x1c00],data,1);
            recovered_10001da4((int *)*device,(ulong)(uint)(&DAT_10009090)[uVar11 * 0x1c00],
                               lVar5 + ((uintptr_t)pf_module_state+0x995cU),0);
            uVar10 = (ulong)(*data == '\0');
            goto LAB_10002f64;
          }
        }
      }
    }
    else {
      uVar9 = recovered_10002848((int *)*device,
                                 (ulong)(*(ushort *)(lVar5 + ((uintptr_t)pf_module_state+0x5a06U)) + 0x10 & 0xffff),2,0);
      if ((int)uVar9 != 0) {
        if (*(int *)(lVar5 + ((uintptr_t)pf_module_state+0x5a08U)) == 0) goto LAB_10002e58;
        goto LAB_10002e70;
      }
    }
    recovered_10001f20(device);
  }
  uVar10 = 0;
LAB_10002f64:
  *(undefined4 *)(lVar5 + ((uintptr_t)pf_module_state+0x59fcU)) = 0;
  return uVar10;
}

#undef DAT_10008000
#undef DAT_10009000
#undef DAT_10009078
#undef DAT_10009090
#undef DAT_10009094
#undef DAT_10009098
#undef DAT_100090b4
#undef DAT_100090c4
#undef auStack_78

#undef DAT_10008000
#define DAT_10008000 (*(uint *)(((uintptr_t)pf_module_state + 0x495cU)))
#undef DAT_1000909c
#define DAT_1000909c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x59f8U)))
#undef DAT_100090c4
#define DAT_100090c4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5a20U)))
#undef str_1000377f
#define str_1000377f (*(char (*)[1])(((uintptr_t)pf_module_state + 0xdbU)))
#undef str_1000378c
#define str_1000378c (*(char (*)[1])(((uintptr_t)pf_module_state + 0xe8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000176c
 */

undefined8 recovered_1000176c(uint param_1,undefined4 *param_2,long param_3,int param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  undefined8 uVar2;
  long lVar3;
  uint uVar4;

  uVar2 = 0;
  if ((param_2 != (undefined4 *)0x0) && (param_1 < DAT_10008000)) {
    *param_2 = (&DAT_1000909c)[(ulong)param_1 * 0x1c00];
    pcVar1 = str_1000377f;
    if (*(int *)(&DAT_100090c4 + (ulong)param_1 * 0x7000) != 0) {
      pcVar1 = str_1000378c;
    }
    uVar2 = 1;
    if ((param_3 != 0) && (param_4 != 0)) {
      uVar4 = param_4 - 1;
      for (lVar3 = 0; uVar4 != (uint)lVar3; lVar3 = lVar3 + 1) {
        if (pcVar1[lVar3] == '\0') {
          *(byte *)(param_3 + lVar3) = (char)param_1 + (char)(param_1 / 10) * -10 | 0x30;
          uVar4 = (uint)lVar3 + 1;
          break;
        }
        *(char *)(param_3 + lVar3) = pcVar1[lVar3];
      }
      *(undefined1 *)(param_3 + (ulong)uVar4) = 0;
      uVar2 = 1;
    }
  }
  return uVar2;
}

#undef DAT_10008000
#undef DAT_1000909c
#undef DAT_100090c4
#undef str_1000377f
#undef str_1000378c

#undef DAT_10008000
#define DAT_10008000 (*(uint *)(((uintptr_t)pf_module_state + 0x495cU)))
#undef DAT_10009000
#define DAT_10009000 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x595cU)))
#undef DAT_1000909c
#define DAT_1000909c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x59f8U)))
#undef DAT_100090b4
#define DAT_100090b4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5a10U)))
#undef DAT_100090b6
#define DAT_100090b6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5a12U)))
#undef DAT_100090c4
#define DAT_100090c4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5a20U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001810
 */

undefined8 recovered_10001810(uint param_1,ulong param_2,long param_3,uint param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  bool bVar2;
  undefined8 uVar3;
  ulong uVar4;
  long *plVar5;
  uint uVar6;

  uVar3 = 0;
  if (((param_4 != 0) && (param_3 != 0)) && (param_1 < DAT_10008000)) {
    lVar1 = (ulong)param_1 * 0x7000;
    plVar5 = (long *)(&DAT_10009000 + lVar1);
    if ((uint)(&DAT_1000909c)[(ulong)param_1 * 0x1c00] < (uint)param_2 ||
        (&DAT_1000909c)[(ulong)param_1 * 0x1c00] - (uint)param_2 < param_4) {
      uVar3 = 0;
    }
    else if (*(int *)(&DAT_100090c4 + lVar1) == 0) {
      do {
        if (param_4 == 0) {
          return 1;
        }
        uVar6 = param_4;
        if (0xf < param_4) {
          uVar6 = 0x10;
        }
        bVar2 = recovered_10002bd0(plVar5,0,(int)param_2,(undefined1 *)param_3,uVar6);
        param_2 = (ulong)((int)param_2 + uVar6);
        param_4 = param_4 - uVar6;
        param_3 = param_3 + (ulong)(uVar6 << 9);
      } while (bVar2);
      uVar3 = 0;
    }
    else {
      recovered_10002ba8((long)plVar5);
      for (; param_4 != 0; param_4 = param_4 - 1) {
        uVar3 = recovered_10003218(plVar5,param_2,param_3,0);
        if ((int)uVar3 == 0) {
          if (((((*(int *)(&DAT_100090c4 + lVar1) != 0) && (*plVar5 != 0)) &&
               ((uVar3 = recovered_100023f4(plVar5,6), (int)uVar3 != 0 &&
                ((uVar3 = recovered_100024fc((int *)*plVar5,10), (int)uVar3 != 0 &&
                 (uVar3 = recovered_100023f4(plVar5,2), (int)uVar3 != 0)))))) &&
              (uVar3 = recovered_100024fc((int *)*plVar5,2000), (int)uVar3 != 0)) &&
             (((uVar4 = recovered_10002530(plVar5), (int)uVar4 != 0 &&
               (uVar3 = recovered_100025a0(plVar5,(ulong)(byte)(&DAT_100090b4)[lVar1]),
               (int)uVar3 != 0)) && (uVar4 = recovered_100025fc(plVar5), (int)uVar4 != 0)))) {
            (&DAT_100090b6)[lVar1] = 1;
            uVar3 = recovered_10003218(plVar5,param_2,param_3,0);
            if ((int)uVar3 != 0) goto LAB_10003184;
          }
          recovered_1000336c(plVar5,(uint)param_2,0);
          uVar3 = 0;
          goto LAB_100031b0;
        }
LAB_10003184:
        param_2 = (ulong)((uint)param_2 + 1);
        param_3 = param_3 + 0x200;
      }
      uVar3 = 1;
LAB_100031b0:
      *(undefined4 *)(lVar1 + ((uintptr_t)pf_module_state+0x59fcU)) = 0;
    }
  }
  return uVar3;
}

#undef DAT_10008000
#undef DAT_10009000
#undef DAT_1000909c
#undef DAT_100090b4
#undef DAT_100090b6
#undef DAT_100090c4

#undef DAT_10008000
#define DAT_10008000 (*(uint *)(((uintptr_t)pf_module_state + 0x495cU)))
#undef DAT_10009000
#define DAT_10009000 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x595cU)))
#undef DAT_1000909c
#define DAT_1000909c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x59f8U)))
#undef DAT_100090b4
#define DAT_100090b4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5a10U)))
#undef DAT_100090b6
#define DAT_100090b6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5a12U)))
#undef DAT_100090c4
#define DAT_100090c4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5a20U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001818
 */

undefined8 recovered_10001818(uint param_1,ulong param_2,long param_3,uint param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  bool bVar2;
  undefined8 uVar3;
  ulong uVar4;
  long *plVar5;
  uint uVar6;

  uVar3 = 0;
  if (((param_4 != 0) && (param_3 != 0)) && (param_1 < DAT_10008000)) {
    lVar1 = (ulong)param_1 * 0x7000;
    plVar5 = (long *)(&DAT_10009000 + lVar1);
    if ((uint)(&DAT_1000909c)[(ulong)param_1 * 0x1c00] < (uint)param_2 ||
        (&DAT_1000909c)[(ulong)param_1 * 0x1c00] - (uint)param_2 < param_4) {
      uVar3 = 0;
    }
    else if (*(int *)(&DAT_100090c4 + lVar1) == 0) {
      do {
        if (param_4 == 0) {
          return 1;
        }
        uVar6 = param_4;
        if (0xf < param_4) {
          uVar6 = 0x10;
        }
        bVar2 = recovered_10002bd0(plVar5,1,(int)param_2,(undefined1 *)param_3,uVar6);
        param_2 = (ulong)((int)param_2 + uVar6);
        param_4 = param_4 - uVar6;
        param_3 = param_3 + (ulong)(uVar6 << 9);
      } while (bVar2);
      uVar3 = 0;
    }
    else {
      recovered_10002ba8((long)plVar5);
      for (; param_4 != 0; param_4 = param_4 - 1) {
        uVar3 = recovered_10003218(plVar5,param_2,param_3,1);
        if ((int)uVar3 == 0) {
          if (((((*(int *)(&DAT_100090c4 + lVar1) != 0) && (*plVar5 != 0)) &&
               ((uVar3 = recovered_100023f4(plVar5,6), (int)uVar3 != 0 &&
                ((uVar3 = recovered_100024fc((int *)*plVar5,10), (int)uVar3 != 0 &&
                 (uVar3 = recovered_100023f4(plVar5,2), (int)uVar3 != 0)))))) &&
              (uVar3 = recovered_100024fc((int *)*plVar5,2000), (int)uVar3 != 0)) &&
             (((uVar4 = recovered_10002530(plVar5), (int)uVar4 != 0 &&
               (uVar3 = recovered_100025a0(plVar5,(ulong)(byte)(&DAT_100090b4)[lVar1]),
               (int)uVar3 != 0)) && (uVar4 = recovered_100025fc(plVar5), (int)uVar4 != 0)))) {
            (&DAT_100090b6)[lVar1] = 1;
            uVar3 = recovered_10003218(plVar5,param_2,param_3,1);
            if ((int)uVar3 != 0) goto LAB_10003184;
          }
          recovered_1000336c(plVar5,(uint)param_2,1);
          uVar3 = 0;
          goto LAB_100031b0;
        }
LAB_10003184:
        param_2 = (ulong)((uint)param_2 + 1);
        param_3 = param_3 + 0x200;
      }
      uVar3 = 1;
LAB_100031b0:
      *(undefined4 *)(lVar1 + ((uintptr_t)pf_module_state+0x59fcU)) = 0;
    }
  }
  return uVar3;
}

#undef DAT_10008000
#undef DAT_10009000
#undef DAT_1000909c
#undef DAT_100090b4
#undef DAT_100090b6
#undef DAT_100090c4

#undef DAT_100037c9
#define DAT_100037c9 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x125U)))
#undef DAT_10008000
#define DAT_10008000 (*(uint *)(((uintptr_t)pf_module_state + 0x495cU)))
#undef DAT_10009088
#define DAT_10009088 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x59e4U)))
#undef DAT_10009089
#define DAT_10009089 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x59e5U)))
#undef DAT_1000908a
#define DAT_1000908a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x59e6U)))
#undef DAT_100090b0
#define DAT_100090b0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5a0cU)))
#undef DAT_100090b4
#define DAT_100090b4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5a10U)))
#undef DAT_100090c4
#define DAT_100090c4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5a20U)))
#undef DAT_100090c8
#define DAT_100090c8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5a24U)))
#undef DAT_100090d0
#define DAT_100090d0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5a2cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001820
 */

undefined8 recovered_10001820(uint param_1,long param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  ushort uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 *puVar7;
  long lVar8;

  if (DAT_10008000 <= param_1) {
    return 0;
  }
  lVar8 = (ulong)param_1 * 0x7000;
  puVar7 = (undefined1 *)((uintptr_t)pf_module_state+0x12aU);
  if (*(int *)(&DAT_100090c4 + lVar8) != 0) {
    puVar7 = &DAT_100037c9;
  }
  if (*(int *)(&DAT_100090d0 + lVar8) == 0) {
    uVar5 = (ulong)*(ushort *)(&DAT_100090b0 + lVar8);
  }
  else {
    uVar5 = *(ulong *)(&DAT_100090c8 + lVar8);
  }
  uVar1 = (&DAT_10009088)[lVar8];
  uVar2 = (&DAT_10009089)[lVar8];
  uVar3 = (&DAT_1000908a)[lVar8];
  uVar4 = *(ushort *)(&DAT_100090b4 + lVar8);
  for (lVar8 = 0; lVar8 != 0x40; lVar8 = lVar8 + 1) {
    *(undefined1 *)(param_2 + lVar8) = 0;
  }
  for (lVar8 = 0; lVar8 != 4; lVar8 = lVar8 + 1) {
    *(undefined1 *)(param_2 + lVar8) = puVar7[lVar8];
  }
  *(undefined1 *)(param_2 + 4) = uVar1;
  *(undefined1 *)(param_2 + 5) = uVar2;
  *(undefined1 *)(param_2 + 6) = uVar3;
  puVar7 = (undefined1 *)(param_2 + 8);
  for (lVar8 = 0; lVar8 != 0x20; lVar8 = lVar8 + 8) {
    *puVar7 = (char)(uVar4 >> (ulong)((uint)lVar8 & 0x1f));
    puVar7 = puVar7 + 1;
  }
  puVar7 = (undefined1 *)(param_2 + 0x10);
  for (uVar6 = 0; uVar6 != 0x40; uVar6 = uVar6 + 8) {
    *puVar7 = (char)(uVar5 >> (uVar6 & 0x3f));
    puVar7 = puVar7 + 1;
  }
  return 1;
}

#undef DAT_100037c9
#undef DAT_10008000
#undef DAT_10009088
#undef DAT_10009089
#undef DAT_1000908a
#undef DAT_100090b0
#undef DAT_100090b4
#undef DAT_100090c4
#undef DAT_100090c8
#undef DAT_100090d0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000190c
 */

void recovered_1000190c(undefined1 *param_1,ulong param_2,char *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  char *pcVar2;

  if (param_1 == (undefined1 *)0x0) {
    return;
  }
  *param_1 = 0;
  uVar1 = recovered_10002964((long)param_1);
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


#define uStack_50 (*(undefined4 *)(pf_stack_frame + 16))
#define local_4c (*(undefined4 *)(pf_stack_frame + 20))
#define local_48 (*(undefined8 *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000191c
 */

undefined8
recovered_1000191c(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
    uVar2 = recovered_10001a58(param_1,param_2,param_3,param_4,0,4,(long)&local_48 + 4);
    if ((int)uVar2 != 0) {
      uVar2 = 0;
      if (((PF_PART2(local_48, 4) != 0) && (PF_PART2(local_48, 4) != 0xffffU)) &&
         (uVar2 = recovered_10001a58(param_1,param_2,param_3,param_4,8,4,(long)&local_48),
         (int)uVar2 != 0)) {
        uVar2 = recovered_10001a58(param_1,param_2,param_3,param_4,4,4,(long)(param_5 + 0x10));
        if ((int)uVar2 == 0) {
          *(undefined4 *)(param_5 + 0x10) = 0;
        }
        uVar2 = recovered_10001a58(param_1,param_2,param_3,param_4,0xc,4,(long)&local_4c);
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
          uVar2 = recovered_10001a58(param_1,param_2,param_3,param_4,
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

#undef uStack_50
#undef local_4c
#undef local_48

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001a58
 */

undefined8
recovered_10001a58(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if ((((param_1 == (int *)0x0) || (*param_1 != 0x54584b57)) || ((uint)param_1[2] < 0x60)) ||
     ((param_7 == 0 || (param_1[0x17] == 0)))) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x10001aa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)(ulong)(uint)param_1[0x17])(param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001aa4
 */

void recovered_10001aa4(int *param_1,undefined8 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if ((((param_1 == (int *)0x0) || (*param_1 != 0x54584b57)) || ((uint)param_1[2] < 0x2c)) ||
     (param_1[10] == 0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x10001ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulong)(uint)param_1[10])(param_2);
  return;
}


#define local_3b (*(byte (*)[59])(pf_stack_frame + 21))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001ad8
 */

void recovered_10001ad8(long param_1,ulong param_2,uint param_3)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  long lVar1;
  ulong uVar2;

  if (param_3 == 0) {
    lVar1 = recovered_10002964(param_1);
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
    recovered_10002af0(param_1,param_2,local_3b[uVar2]);
  }
  return;
}

#undef local_3b

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001b80
 */

void recovered_10001b80(long param_1,ulong param_2,char *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  char *pcVar2;

  uVar1 = recovered_10002964(param_1);
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
 * Address: 0x10001bd8
 */

uint recovered_10001bd8(byte *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return (uint)*param_1 << 0x10 | (uint)param_1[2] << 8 | (uint)param_1[1] << 0xb | 0x80000000;
}


#undef str_10003735
#define str_10003735 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x91U)))
#undef str_10003747
#define str_10003747 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa3U)))
#undef str_10003759
#define str_10003759 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb5U)))
#define uStack_38 (*(uint *)(pf_stack_frame + 24))
#define local_34 (*(uint *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001bf8
 */

bool recovered_10001bf8(int *param_1,byte *param_2,long param_3)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  uint uVar1;
  undefined8 uVar2;
  char *pcVar3;
  long lVar4;
  uint uVar5;

  local_34 = 0;
  if ((((param_1 == (int *)0x0) || (*param_1 != 0x54584b57)) || ((uint)param_1[2] < 100)) ||
     (param_1[0x18] == 0)) {
    pcVar3 = str_10003735;
  }
  else {
    uVar2 = recovered_10001a58(param_1,(ulong)*param_2,(ulong)param_2[1],(ulong)param_2[2],4,2,
                               (long)&local_34);
    if ((int)uVar2 == 0) {
      pcVar3 = str_10003747;
    }
    else {
      uVar5 = 0;
      for (lVar4 = 0x14; lVar4 != 0x2c; lVar4 = lVar4 + 4) {
        uVar1 = uVar5 | 1;
        if (*(uint *)(param_2 + lVar4) != 0) {
          uVar5 = uVar5 | 2;
        }
        if ((*(uint *)(param_2 + lVar4) & 1) != 0) {
          uVar5 = uVar1;
        }
      }
      lVar4 = recovered_10002964(((uintptr_t)pf_module_state+0x28U));
      if (lVar4 != 0) {
        uVar5 = uVar5 | 4;
      }
      if (param_2[8] == 6) {
        if (param_2[9] != 0) {
          uVar5 = uVar5 | 2;
        }
      }
      uStack_38 = local_34 | uVar5;
      uVar2 = recovered_100023ac(param_1,(ulong)*param_2,(ulong)param_2[1],(ulong)param_2[2],
                                 (ulong)uStack_38);
      if ((int)uVar2 != 0) {
        recovered_10001a58(param_1,(ulong)*param_2,(ulong)param_2[1],(ulong)param_2[2],4,2,
                           (long)&uStack_38);
        return (uVar5 & (uStack_38 ^ 0xffffffff)) == 0;
      }
      pcVar3 = str_10003759;
    }
  }
  recovered_10001b80(param_3,0x400,pcVar3);
  return false;
}

#undef str_10003735
#undef str_10003747
#undef str_10003759
#undef uStack_38
#undef local_34

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001d40
 */

uint recovered_10001d40(void *device,void *data,uint bytes,uint *low,uint *high)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int *piVar2;

  piVar2 = *(int **)device;
  if (((piVar2 == (int *)0x0) || (*piVar2 != 0x54584b57)) || ((uint)piVar2[2] < 0x74)) {
    return 0;
  }
  uVar1 = 0;
  if (((low != (uint *)0x0) && (data != (void *)0x0)) && (piVar2[0x1c] != 0)) {
    uVar1 = (*(code *)(ulong)(uint)piVar2[0x1c])(*(uint *)((long)device + 0x90),data,bytes,low,high)
    ;
    uVar1 = (uint)(uVar1 != 0);
  }
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001da4
 */

void recovered_10001da4(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if ((((param_1 == (int *)0x0) || (*param_1 != 0x54584b57)) || ((uint)param_1[2] < 0x78)) ||
     (param_1[0x1d] == 0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x10001dd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulong)(uint)param_1[0x1d])(param_2,param_3,param_4);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001de0
 */

void recovered_10001de0(int *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if ((((param_1 == (int *)0x0) || (*param_1 != 0x54584b57)) || ((uint)param_1[2] < 0x7c)) ||
     (param_1[0x1e] == 0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x10001e08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulong)(uint)param_1[0x1e])();
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001e10
 */

undefined8 recovered_10001e10(int *param_1,long param_2,ulong param_3,undefined8 param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  undefined8 uVar2;

  if (param_2 == 0) {
    return 0;
  }
  uVar1 = param_2 + (param_3 & 0xffffffff);
  if ((param_1 != (int *)0x0) && (*param_1 == 0x54584b57)) {
    if ((0xc3 < (uint)param_1[2]) && (param_1[0x30] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x100028b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*(code *)(ulong)(uint)param_1[0x30])(uVar1,2,param_4);
      return uVar2;
    }
    if (((uVar1 >> 0x20 == 0) && (0x6f < (uint)param_1[2])) && (param_1[0x1b] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10014a8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*(code *)(ulong)(uint)param_1[0x1b])(uVar1,2,param_4);
      return uVar2;
    }
  }
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001e24
 */

ulong recovered_10001e24(int *param_1,long param_2,ulong param_3,undefined8 param_4,
                        undefined8 param_5)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  undefined8 uVar2;

  uVar1 = recovered_10002a74(param_1,param_2,param_3,param_4);
  if ((int)uVar1 != 0) {
    uVar2 = recovered_10002a74(param_1,param_2,(ulong)((int)param_3 + 4),param_5);
    uVar1 = (ulong)((int)uVar2 != 0);
  }
  return uVar1;
}


#define uStack_24 (*(undefined4 *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001e78
 */

undefined8 recovered_10001e78(int *param_1,long param_2,ulong param_3,undefined4 *param_4)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  uVar1 = 0;
  uStack_24 = 0;
  if (((param_2 != 0) && (param_4 != (undefined4 *)0x0)) &&
     (uVar1 = recovered_10002a88(param_1,param_2 + (param_3 & 0xffffffff),2,(long)&uStack_24),
     (int)uVar1 != 0)) {
    *param_4 = uStack_24;
    uVar1 = 1;
  }
  return uVar1;
}

#undef uStack_24

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001ec0
 */

undefined8 recovered_10001ec0(int *param_1,long param_2,ulong param_3,long param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  undefined8 uVar2;

  if ((param_2 == 0) || (param_4 == 0)) {
    return 0;
  }
  uVar1 = param_2 + (param_3 & 0xffffffff);
  if ((param_1 != (int *)0x0) && (*param_1 == 0x54584b57)) {
    if ((0xbf < (uint)param_1[2]) && ((param_4 != 0 && (param_1[0x2f] != 0)))) {
                    /* WARNING: Could not recover jumptable at 0x10002ad8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*(code *)(ulong)(uint)param_1[0x2f])(uVar1,1,param_4);
      return uVar2;
    }
    if ((((uVar1 >> 0x20 == 0) && (0x6b < (uint)param_1[2])) && (param_4 != 0)) &&
       (param_1[0x1a] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10014b2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*(code *)(ulong)(uint)param_1[0x1a])(uVar1,1,param_4);
      return uVar2;
    }
  }
  return 0;
}


#define uStack_24 (*(undefined4 *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001ed8
 */

undefined8 recovered_10001ed8(int *param_1,long param_2,ulong param_3,undefined4 *param_4)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  uVar1 = 0;
  uStack_24 = 0;
  if (((param_2 != 0) && (param_4 != (undefined4 *)0x0)) &&
     (uVar1 = recovered_10002a88(param_1,param_2 + (param_3 & 0xffffffff),4,(long)&uStack_24),
     (int)uVar1 != 0)) {
    *param_4 = uStack_24;
    uVar1 = 1;
  }
  return uVar1;
}

#undef uStack_24

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001f20
 */

void recovered_10001f20(undefined8 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  int *piVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;

  if ((param_1 != (undefined8 *)0x0) && (piVar3 = (int *)*param_1, piVar3 != (int *)0x0)) {
    *(undefined4 *)((long)param_1 + 0x94) = 0;
    *(undefined4 *)(param_1 + 0x13) = 0;
    if ((*(int *)((long)param_1 + 0xac) == 0) || (*(short *)((long)param_1 + 0xaa) == 0)) {
      if (param_1[1] == 0) {
        iVar2 = 1;
      }
      else {
        uVar4 = recovered_100029e4(piVar3,param_1[1]);
        iVar2 = (int)uVar4;
      }
    }
    else {
      uVar5 = recovered_10002848(piVar3,(ulong)(ushort)(*(short *)((long)param_1 + 0xaa) + 0x12),1,0
                                );
      iVar2 = (int)uVar5;
    }
    if (*(char *)((long)param_1 + 0x8b) != '\0') {
      uVar1 = *(ushort *)((long)param_1 + 0x8c) & 0xfffffffb;
      if (iVar2 != 0) {
        uVar1 = (uint)*(ushort *)((long)param_1 + 0x8c);
      }
      recovered_100023ac((int *)*param_1,(ulong)*(byte *)(param_1 + 0x11),
                         (ulong)*(byte *)((long)param_1 + 0x89),
                         (ulong)*(byte *)((long)param_1 + 0x8a),(ulong)uVar1);
      *(undefined1 *)((long)param_1 + 0x8b) = 0;
    }
    *(undefined8 *)((long)param_1 + 0xb4) = 0;
    *(undefined8 *)((long)param_1 + 0xac) = 0;
    *(undefined2 *)((long)param_1 + 0xaa) = 0;
    *(undefined4 *)((long)param_1 + 0xc4) = 0;
    *(undefined1 *)((long)param_1 + 0xbc) = 0;
    for (lVar6 = 0; lVar6 != 4; lVar6 = lVar6 + 1) {
      *(undefined1 *)((long)param_1 + lVar6 + 0xbd) = 0;
    }
    param_1[0x19] = 0;
    *(undefined4 *)(param_1 + 0x1a) = 0;
  }
  return;
}


#define local_5c (*(uint *)(pf_stack_frame + 20))
#define local_58 (*(int *)(pf_stack_frame + 24))
#define uStack_54 (*(uint *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001ff8
 */

undefined8
recovered_10001ff8(int *param_1,byte *param_2,uint param_3,undefined8 param_4,ulong *param_5)

{
  unsigned char pf_stack_frame[144] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  int iVar2;
  uint uVar3;

  local_58 = 0;
  if ((param_5 != (ulong *)0x0) &&
     ((param_3 == 0 || ((*(uint *)(param_2 + (ulong)(param_3 - 1) * 4 + 0x14) & 7) != 4)))) {
    local_5c = *(uint *)(param_2 + (ulong)param_3 * 4 + 0x14);
    if (local_5c == 0) {
      return 0;
    }
    if ((local_5c & 1) != 0) {
      return 0;
    }
    recovered_10001a58(param_1,(ulong)*param_2,(ulong)param_2[1],(ulong)param_2[2],
                       (ulong)(param_3 * 4 + 0x10 & 0xfffc),4,(long)&local_5c);
    if ((local_5c & 7) == 4) {
      if (4 < param_3) {
        return 0;
      }
      local_58 = *(int *)(param_2 + (ulong)(param_3 + 1) * 4 + 0x14);
      recovered_10001a58(param_1,(ulong)*param_2,(ulong)param_2[1],(ulong)param_2[2],
                         (ulong)(param_3 * 4 + 0x14 & 0xffff),4,(long)&local_58);
      iVar2 = local_58;
    }
    else {
      iVar2 = 0;
    }
    uVar3 = 0xfffffff0;
    if ((local_5c & 1) != 0) {
      uVar3 = 0xfffffffc;
    }
    uVar3 = uVar3 & local_5c;
    if ((int)param_4 == 0) {
      return 0;
    }
    if (uVar3 == 0 && iVar2 == 0) {
      return 0;
    }
    *param_5 = 0;
    uStack_54 = 0;
    if ((param_1 != (int *)0x0) && (*param_1 == 0x54584b57)) {
      if ((0xbb < (uint)param_1[2]) && (param_1[0x2e] != 0)) {
        uVar1 = (*(code *)(ulong)(uint)param_1[0x2e])(uVar3,iVar2,param_4,param_5);
        return uVar1;
      }
      if (iVar2 != 0) {
        return 0;
      }
      if ((uint)param_1[2] < 0x68) {
        return 0;
      }
      if (param_1[0x19] != 0) {
        uVar1 = (*(code *)(ulong)(uint)param_1[0x19])(uVar3,0,param_4,&uStack_54);
        if ((int)uVar1 == 0) {
          return uVar1;
        }
        *param_5 = (ulong)uStack_54;
        return 1;
      }
    }
  }
  return 0;
}

#undef local_5c
#undef local_58
#undef uStack_54

#define uStack_48 (*(undefined4 *)(pf_stack_frame + 24))
#define local_44 (*(uint *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100021ac
 */

undefined8 recovered_100021ac(int *param_1,long *param_2)

{
  unsigned char pf_stack_frame[128] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  ulong uVar2;
  uint uVar3;
  long lVar4;
  long *plVar5;

  local_44 = 0;
  if ((*(int *)((long)param_2 + 0xc4) != 0) && (*(char *)((long)param_2 + 0xb6) != '\x02')) {
    if (*(char *)((long)param_2 + 0xb6) == '\0') {
      uVar1 = recovered_100023f4(param_2,6);
      if ((int)uVar1 == 0) {
        recovered_1000242c(param_2,1);
        *(undefined1 *)((long)param_2 + 0xb6) = 2;
        return 0;
      }
      uVar1 = recovered_100024fc(param_1,10);
      if (((((int)uVar1 == 0) || (uVar1 = recovered_100023f4(param_2,2), (int)uVar1 == 0)) ||
          (uVar1 = recovered_100024fc(param_1,2000), (int)uVar1 == 0)) ||
         (uVar2 = recovered_10002530(param_2), (int)uVar2 == 0)) {
        recovered_1000242c(param_2,2);
        *(undefined1 *)((long)param_2 + 0xb6) = 2;
        return 0;
      }
      *(undefined1 *)((long)param_2 + 0xb6) = 1;
    }
    uVar1 = recovered_100025a0(param_2,(ulong)*(byte *)((long)param_2 + 0xb4));
    if ((int)uVar1 == 0) {
      uVar3 = 3;
    }
    else {
      uVar2 = recovered_100025fc(param_2);
      if ((int)uVar2 != 0) {
        uVar1 = recovered_10002680(param_2,0xec);
        if ((int)uVar1 == 0) {
          uVar3 = 5;
        }
        else {
          uVar1 = recovered_100026d0(param_2,8,0x21);
          if ((int)uVar1 == 0) {
            uVar3 = 6;
          }
          else {
            lVar4 = 0x100;
            plVar5 = param_2 + 0x800;
            do {
              uStack_48 = 0;
              uVar1 = recovered_10002760(param_2,0,2,&uStack_48);
              if ((int)uVar1 == 0) {
                uVar3 = 7;
                goto LAB_1000239c;
              }
              *(short *)plVar5 = (short)uStack_48;
              lVar4 = lVar4 + -1;
              plVar5 = (long *)((long)plVar5 + 2);
            } while (lVar4 != 0);
            uVar1 = recovered_100024fc(param_1,1);
            if ((int)uVar1 == 0) {
              uVar3 = 8;
            }
            else {
              lVar4 = param_2[0x80f];
              if ((int)lVar4 == 0) {
                uVar3 = 9;
              }
              else {
                uVar1 = recovered_100027b4(param_2);
                if ((int)uVar1 == 0) {
                  uVar3 = 10;
                }
                else {
                  uVar1 = recovered_10002760(param_2,7,1,&local_44);
                  if ((((int)uVar1 != 0) && (local_44 != 0)) && ((local_44 & 0x29) == 0)) {
                    *(int *)((long)param_2 + 0x9c) = (int)lVar4;
                    *(undefined8 *)((long)param_2 + 0x94) = 0x100000001;
                    return 1;
                  }
                  uVar3 = 0xb;
                }
              }
            }
          }
        }
LAB_1000239c:
        recovered_1000242c(param_2,uVar3);
        *(undefined1 *)((long)param_2 + 0xb6) = 0;
        return 0;
      }
      uVar3 = 4;
    }
    recovered_1000242c(param_2,uVar3);
  }
  return 0;
}

#undef uStack_48
#undef local_44

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100023ac
 */

undefined8
recovered_100023ac(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if ((((param_1 == (int *)0x0) || (*param_1 != 0x54584b57)) || ((uint)param_1[2] < 100)) ||
     (param_1[0x18] == 0)) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x100023ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)(ulong)(uint)param_1[0x18])(param_2,param_3,param_4,4,2,param_5);
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100023f4
 */

undefined8 recovered_100023f4(undefined8 *param_1,undefined8 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  undefined8 uVar2;
  int *piVar3;

  if (param_1 == (undefined8 *)0x0) {
    return 0;
  }
  piVar3 = (int *)*param_1;
  if (*(int *)(param_1 + 0x1a) == 0) {
    if ((((piVar3 == (int *)0x0) || (*(short *)((long)param_1 + 0xb2) == 0)) ||
        (*piVar3 != 0x54584b57)) || (((uint)piVar3[2] < 0x5c || (piVar3[0x16] == 0)))) {
      return 0;
    }
                    /* WARNING: Could not recover jumptable at 0x10014a64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)(ulong)(uint)piVar3[0x16])(*(short *)((long)param_1 + 0xb2),1,param_2);
    return uVar2;
  }
  if (param_1[0x19] == 0) {
    return 0;
  }
  uVar1 = param_1[0x19] + 0x160;
  if ((piVar3 != (int *)0x0) && (*piVar3 == 0x54584b57)) {
    if ((0xc3 < (uint)piVar3[2]) && (piVar3[0x30] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x100028b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*(code *)(ulong)(uint)piVar3[0x30])(uVar1,1,param_2);
      return uVar2;
    }
    if (((uVar1 >> 0x20 == 0) && (0x6f < (uint)piVar3[2])) && (piVar3[0x1b] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10014a8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*(code *)(ulong)(uint)piVar3[0x1b])(uVar1,1,param_2);
      return uVar2;
    }
  }
  return 0;
}


#define local_24 (*(undefined4 *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000242c
 */

void recovered_1000242c(undefined8 *param_1,uint param_2)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  undefined1 uVar1;
  undefined8 uVar2;
  long lVar3;

  local_24 = 0;
  if (*(byte *)((long)param_1 + 0xb7) < param_2) {
    *(char *)((long)param_1 + 0xb7) = (char)param_2;
    *(undefined1 *)(param_1 + 0x17) = *(undefined1 *)((long)param_1 + 0xb5);
    *(byte *)((long)param_1 + 0xb9) = *(byte *)((long)param_1 + 0xb4) >> 4 & 1;
    if (*(int *)(param_1 + 0x1a) == 0) {
      uVar2 = recovered_100028e0((int *)*param_1,(ulong)*(ushort *)((long)param_1 + 0xb2),1,
                                 (long)&local_24);
      uVar1 = (undefined1)uVar2;
    }
    else {
      uVar2 = recovered_10001ec0((int *)*param_1,param_1[0x19],0x160,(long)&local_24);
      uVar1 = (undefined1)uVar2;
    }
    *(undefined1 *)((long)param_1 + 0xbb) = uVar1;
    *(char *)((long)param_1 + 0xba) = (char)local_24;
    *(undefined1 *)((long)param_1 + 0xbc) = 1;
    for (lVar3 = 0xbd; lVar3 != 0xc1; lVar3 = lVar3 + 1) {
      uVar2 = recovered_10002760(param_1,(int)lVar3 + -0xbb,1,&local_24);
      if ((int)uVar2 == 0) {
        *(undefined1 *)((long)param_1 + 0xbc) = 0;
        local_24 = 0;
      }
      *(char *)((long)param_1 + lVar3) = (char)local_24;
    }
  }
  return;
}

#undef local_24

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100024fc
 */

undefined8 recovered_100024fc(int *param_1,undefined8 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if ((((param_1 == (int *)0x0) || (*param_1 != 0x54584b57)) || ((uint)param_1[2] < 0x34)) ||
     (param_1[0xc] == 0)) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x10002528. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)(ulong)(uint)param_1[0xc])(param_2);
  return uVar1;
}


#define local_24 (*(uint *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002530
 */

ulong recovered_10002530(undefined8 *param_1)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  int iVar2;

  local_24 = 0;
  iVar2 = 31000;
  while( true ) {
    uVar1 = recovered_10002760(param_1,7,1,&local_24);
    if ((int)uVar1 == 0) {
      return uVar1;
    }
    if (local_24 == 0) {
      return 1;
    }
    if (local_24 == 0xff) {
      return 1;
    }
    if ((local_24 >> 7 & 1) == 0) break;
    recovered_100024fc((int *)*param_1,1000);
    iVar2 = iVar2 + -1;
    if (iVar2 == 0) {
      return 0;
    }
  }
  return (ulong)((local_24 & 0x29) == 0);
}

#undef local_24

#define uStack_34 (*(uint *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100025a0
 */

undefined8 recovered_100025a0(long *param_1,undefined8 param_2)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  int iVar2;

  if ((((param_1 == (long *)0x0) || (*param_1 == 0)) ||
      (uVar1 = recovered_1000291c(param_1,6,1,param_2), (int)uVar1 == 0)) ||
     (uVar1 = recovered_100024fc((int *)*param_1,1), (int)uVar1 == 0)) {
    return 0;
  }
  uStack_34 = 0;
  iVar2 = 100000;
  while( true ) {
    uVar1 = recovered_10002760(param_1,7,1,&uStack_34);
    if ((int)uVar1 == 0) {
      return uVar1;
    }
    if (uStack_34 == 0) {
      return 0;
    }
    if (uStack_34 == 0xff) {
      return 0;
    }
    if ((uStack_34 >> 7 & 1) == 0) break;
    recovered_100024fc((int *)*param_1,10);
    iVar2 = iVar2 + -1;
    if (iVar2 == 0) {
      return 0;
    }
  }
  if ((uStack_34 & 0x29) == 0) {
    return 1;
  }
  return 0;
}

#undef uStack_34

#define uStack_28 (*(undefined8 *)(pf_stack_frame + 24))
#define local_30 (*(undefined8 *)(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100025fc
 */

ulong recovered_100025fc(undefined8 *param_1)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  local_30 = 0;
  uStack_28 = 0;
  uVar1 = recovered_10002760(param_1,2,1,(undefined4 *)((long)&uStack_28 + 4));
  if (((((int)uVar1 != 0) &&
       (uVar1 = recovered_10002760(param_1,3,1,(undefined4 *)&uStack_28), (int)uVar1 != 0)) &&
      (uVar1 = recovered_10002760(param_1,4,1,(undefined4 *)((long)&local_30 + 4)), (int)uVar1 != 0)
      ) && (uVar1 = recovered_10002760(param_1,5,1,(undefined4 *)&local_30), (int)uVar1 != 0)) {
    uVar1 = (ulong)(((PF_PART4(uStack_28, 4) == 1 && (int)uStack_28 == 1) && PF_PART4(local_30, 4) == 0) &&
                   (int)local_30 == 0);
  }
  return uVar1;
}

#undef uStack_28
#undef local_30

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002680
 */

undefined8 recovered_10002680(long *param_1,undefined8 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int *piVar1;
  undefined8 uVar2;

  if (((param_1 == (long *)0x0) || (*param_1 == 0)) ||
     (uVar2 = recovered_1000291c(param_1,7,1,param_2), (int)uVar2 == 0)) {
    return 0;
  }
  piVar1 = (int *)*param_1;
  if (((piVar1 == (int *)0x0) || (*piVar1 != 0x54584b57)) ||
     (((uint)piVar1[2] < 0x34 || (piVar1[0xc] == 0)))) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x10002528. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*(code *)(ulong)(uint)piVar1[0xc])(1);
  return uVar2;
}


#define local_34 (*(uint *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100026d0
 */

undefined8 recovered_100026d0(undefined8 *param_1,uint param_2,uint param_3)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  int iVar2;

  local_34 = 0;
  iVar2 = 100000;
  do {
    uVar1 = recovered_10002760(param_1,7,1,&local_34);
    if ((int)uVar1 == 0) {
      return uVar1;
    }
    if (local_34 == 0) {
      return 0;
    }
    if (local_34 == 0xff) {
      return 0;
    }
    if ((local_34 >> 7 & 1) == 0) {
      if ((local_34 & param_3) != 0) {
        return 0;
      }
      if ((param_2 & (local_34 ^ 0xffffffff)) == 0) {
        return 1;
      }
    }
    recovered_100024fc((int *)*param_1,10);
    iVar2 = iVar2 + -1;
    if (iVar2 == 0) {
      return 0;
    }
  } while( true );
}

#undef local_34

#define uStack_24 (*(undefined4 *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002760
 */

undefined8
recovered_10002760(undefined8 *param_1,int param_2,undefined8 param_3,undefined4 *param_4)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  int *piVar5;

  if ((param_1 == (undefined8 *)0x0) || (param_4 == (undefined4 *)0x0)) {
    return 0;
  }
  if (*(int *)(param_1 + 0x1a) == 0) {
    piVar5 = (int *)*param_1;
    uVar2 = (uint)*(ushort *)(param_1 + 0x16) + param_2 & 0xffff;
    if ((((piVar5 == (int *)0x0) || (uVar2 == 0)) || (param_4 == (undefined4 *)0x0)) ||
       (((*piVar5 != 0x54584b57 || ((uint)piVar5[2] < 0x58)) || (piVar5[0x15] == 0)))) {
      return 0;
    }
                    /* WARNING: Could not recover jumptable at 0x10014ab4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (*(code *)(ulong)(uint)piVar5[0x15])(uVar2,param_3,param_4);
    return uVar3;
  }
  piVar5 = (int *)*param_1;
  lVar4 = param_1[0x19];
  if ((int)param_3 == 2) {
    uVar3 = 0;
    uStack_24 = 0;
    if (((lVar4 != 0) && (param_4 != (undefined4 *)0x0)) &&
       (uVar3 = recovered_10002a88(piVar5,lVar4 + (ulong)(uint)(param_2 << 4),2,(long)&uStack_24),
       (int)uVar3 != 0)) {
      *param_4 = uStack_24;
      uVar3 = 1;
    }
    return uVar3;
  }
  if ((lVar4 == 0) || (param_4 == (undefined4 *)0x0)) {
    return 0;
  }
  uVar1 = lVar4 + (ulong)(uint)(param_2 << 4);
  if ((piVar5 != (int *)0x0) && (*piVar5 == 0x54584b57)) {
    if ((0xbf < (uint)piVar5[2]) && ((param_4 != (undefined4 *)0x0 && (piVar5[0x2f] != 0)))) {
                    /* WARNING: Could not recover jumptable at 0x10002ad8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (*(code *)(ulong)(uint)piVar5[0x2f])(uVar1,1,param_4);
      return uVar3;
    }
    if ((((uVar1 >> 0x20 == 0) && (0x6b < (uint)piVar5[2])) && (param_4 != (undefined4 *)0x0)) &&
       (piVar5[0x1a] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10014b2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (*(code *)(ulong)(uint)piVar5[0x1a])(uVar1,1,param_4);
      return uVar3;
    }
  }
  return 0;
}

#undef uStack_24

#define local_34 (*(uint *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100027b4
 */

undefined8 recovered_100027b4(undefined8 *param_1)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  int iVar2;

  local_34 = 0;
  iVar2 = 100000;
  do {
    uVar1 = recovered_10002760(param_1,7,1,&local_34);
    if ((int)uVar1 == 0) {
      return 0;
    }
    if (local_34 == 0) {
      return 0;
    }
    if (local_34 == 0xff) {
      return 0;
    }
    if ((local_34 >> 7 & 1) == 0) {
      if ((local_34 & 0x21) != 0) {
        return 0;
      }
      if ((local_34 >> 3 & 1) == 0) {
        return 1;
      }
    }
    recovered_100024fc((int *)*param_1,10);
    iVar2 = iVar2 + -1;
    if (iVar2 == 0) {
      return 0;
    }
  } while( true );
}

#undef local_34

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002834
 */

undefined8 recovered_10002834(int *param_1,long param_2,ulong param_3,undefined8 param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  undefined8 uVar2;

  if (param_2 == 0) {
    return 0;
  }
  uVar1 = param_2 + (param_3 & 0xffffffff);
  if ((param_1 != (int *)0x0) && (*param_1 == 0x54584b57)) {
    if ((0xc3 < (uint)param_1[2]) && (param_1[0x30] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x100028b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*(code *)(ulong)(uint)param_1[0x30])(uVar1,1,param_4);
      return uVar2;
    }
    if (((uVar1 >> 0x20 == 0) && (0x6f < (uint)param_1[2])) && (param_1[0x1b] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10014a8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*(code *)(ulong)(uint)param_1[0x1b])(uVar1,1,param_4);
      return uVar2;
    }
  }
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002848
 */

undefined8 recovered_10002848(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if ((((param_1 == (int *)0x0) || ((int)param_2 == 0)) || (*param_1 != 0x54584b57)) ||
     (((uint)param_1[2] < 0x5c || (param_1[0x16] == 0)))) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x10014a64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)(ulong)(uint)param_1[0x16])(param_2,param_3,param_4);
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002880
 */

undefined8 recovered_10002880(int *param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if ((param_1 != (int *)0x0) && (*param_1 == 0x54584b57)) {
    if ((0xc3 < (uint)param_1[2]) && (param_1[0x30] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x100028b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*(code *)(ulong)(uint)param_1[0x30])(param_2,param_3,param_4);
      return uVar1;
    }
    if (((param_2 >> 0x20 == 0) && (0x6f < (uint)param_1[2])) && (param_1[0x1b] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10014a8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*(code *)(ulong)(uint)param_1[0x1b])(param_2,param_3,param_4);
      return uVar1;
    }
  }
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100028e0
 */

undefined8 recovered_100028e0(int *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if ((((param_1 == (int *)0x0) || ((int)param_2 == 0)) || (param_4 == 0)) ||
     (((*param_1 != 0x54584b57 || ((uint)param_1[2] < 0x58)) || (param_1[0x15] == 0)))) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x10014ab4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)(ulong)(uint)param_1[0x15])(param_2,param_3,param_4);
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000291c
 */

undefined8 recovered_1000291c(undefined8 *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  int *piVar5;

  if (*(int *)(param_1 + 0x1a) != 0) {
    piVar5 = (int *)*param_1;
    lVar3 = param_1[0x19];
    if ((int)param_3 == 2) {
      if (lVar3 == 0) {
        return 0;
      }
      uVar4 = 2;
    }
    else {
      if (lVar3 == 0) {
        return 0;
      }
      uVar4 = 1;
    }
    uVar2 = lVar3 + (ulong)(uint)(param_2 << 4);
    if ((piVar5 != (int *)0x0) && (*piVar5 == 0x54584b57)) {
      if ((0xc3 < (uint)piVar5[2]) && (piVar5[0x30] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x100028b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar4 = (*(code *)(ulong)(uint)piVar5[0x30])(uVar2,uVar4,param_4);
        return uVar4;
      }
      if (((uVar2 >> 0x20 == 0) && (0x6f < (uint)piVar5[2])) && (piVar5[0x1b] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10014a8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar4 = (*(code *)(ulong)(uint)piVar5[0x1b])(uVar2,uVar4,param_4);
        return uVar4;
      }
    }
    return 0;
  }
  piVar5 = (int *)*param_1;
  uVar1 = (uint)*(ushort *)(param_1 + 0x16) + param_2 & 0xffff;
  if ((((piVar5 == (int *)0x0) || (uVar1 == 0)) || (*piVar5 != 0x54584b57)) ||
     (((uint)piVar5[2] < 0x5c || (piVar5[0x16] == 0)))) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x10014a64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar4 = (*(code *)(ulong)(uint)piVar5[0x16])(uVar1,param_3,param_4);
  return uVar4;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002964
 */

long recovered_10002964(long param_1)

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


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002980
 */

undefined8
recovered_10002980(int *param_1,byte *param_2,uint param_3,uint param_4,uint param_5,ulong *param_6)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  uVar1 = 0;
  if ((((!CARRY4(param_5,param_4)) && (param_5 != 0)) && (param_3 < 6)) &&
     ((param_6 != (ulong *)0x0 &&
      (uVar1 = recovered_10001ff8(param_1,param_2,param_3,(ulong)(param_5 + param_4),param_6),
      (int)uVar1 != 0)))) {
    *param_6 = *param_6 + (ulong)param_4;
    uVar1 = 1;
  }
  return uVar1;
}


#define local_34 (*(int *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100029e4
 */

ulong recovered_100029e4(int *param_1,long param_2)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  undefined8 uVar2;
  uint uVar3;

  uVar1 = 0;
  local_34 = 0xff;
  if (((param_1 != (int *)0x0) && (param_2 != 0)) &&
     (uVar1 = recovered_10002834(param_1,param_2,0x14,0), (int)uVar1 != 0)) {
    recovered_10001de0(param_1);
    uVar3 = 0;
    while ((uVar3 != 1000 &&
           ((uVar2 = recovered_10001ec0(param_1,param_2,0x14,(long)&local_34), (int)uVar2 == 0 ||
            (local_34 != 0))))) {
      recovered_100024fc(param_1,10);
      uVar3 = uVar3 + 1;
    }
    uVar1 = (ulong)(uVar3 < 1000);
  }
  return uVar1;
}

#undef local_34

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002a74
 */

undefined8 recovered_10002a74(int *param_1,long param_2,ulong param_3,undefined8 param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  undefined8 uVar2;

  if (param_2 == 0) {
    return 0;
  }
  uVar1 = param_2 + (param_3 & 0xffffffff);
  if ((param_1 != (int *)0x0) && (*param_1 == 0x54584b57)) {
    if ((0xc3 < (uint)param_1[2]) && (param_1[0x30] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x100028b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*(code *)(ulong)(uint)param_1[0x30])(uVar1,4,param_4);
      return uVar2;
    }
    if (((uVar1 >> 0x20 == 0) && (0x6f < (uint)param_1[2])) && (param_1[0x1b] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10014a8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*(code *)(ulong)(uint)param_1[0x1b])(uVar1,4,param_4);
      return uVar2;
    }
  }
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002a88
 */

undefined8 recovered_10002a88(int *param_1,ulong param_2,undefined8 param_3,long param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if ((param_1 != (int *)0x0) && (*param_1 == 0x54584b57)) {
    if ((0xbf < (uint)param_1[2]) && ((param_4 != 0 && (param_1[0x2f] != 0)))) {
                    /* WARNING: Could not recover jumptable at 0x10002ad8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*(code *)(ulong)(uint)param_1[0x2f])(param_2,param_3,param_4);
      return uVar1;
    }
    if ((((param_2 >> 0x20 == 0) && (0x6b < (uint)param_1[2])) && (param_4 != 0)) &&
       (param_1[0x1a] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10014b2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*(code *)(ulong)(uint)param_1[0x1a])(param_2,param_3,param_4);
      return uVar1;
    }
  }
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002af0
 */

void recovered_10002af0(long param_1,ulong param_2,undefined1 param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;

  lVar1 = recovered_10002964(param_1);
  if ((param_1 != 0) && (lVar1 + 1U < param_2)) {
    *(undefined1 *)(param_1 + lVar1) = param_3;
    *(undefined1 *)(param_1 + lVar1 + 1U) = 0;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002b30
 */

void recovered_10002b30(long param_1,ulong param_2,uint param_3,int param_4)

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
    recovered_10002af0(param_1,param_2,bVar2);
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002ba8
 */

void recovered_10002ba8(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;

  piVar1 = (int *)(param_1 + 0xa0);
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


#define local_78 (*(uint (*)[30])(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002bd0
 */

bool recovered_10002bd0(undefined8 *param_1,int param_2,undefined4 param_3,undefined1 *param_4,
                       int param_5)

{
  unsigned char pf_stack_frame[176] __attribute__((aligned(16))) = {0};

  char *data;
  int *data_00;
  undefined1 *puVar1;
  long lVar2;
  ushort uVar3;
  ushort uVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  undefined1 *puVar10;
  undefined8 uVar11;
  undefined4 uVar12;
  undefined8 *puVar13;
  long lVar14;

  if (param_1 == (undefined8 *)0x0) {
    return false;
  }
  recovered_10002ba8((long)param_1);
  local_78[2] = 0;
  local_78[3] = 0;
  local_78[4] = 0;
  local_78[5] = 0;
  local_78[0] = 0;
  local_78[1] = 0;
  lVar2 = 0x100;
  if (*(int *)((long)param_1 + 0xac) == 0) {
    puVar13 = param_1 + 0x40;
    lVar14 = 0x300;
  }
  else {
    lVar2 = 0x1000;
    puVar13 = param_1 + (ulong)*(ushort *)((long)param_1 + 0xa4) * 2 + 0x200;
    lVar14 = 0x2000;
  }
  if (*(int *)((long)param_1 + 0x94) != 0) {
    if (param_2 == 4) {
      if (*(int *)(param_1 + 0x13) == 0) goto LAB_10002f60;
    }
    else {
      bVar5 = false;
      if ((param_4 == (undefined1 *)0x0) || (param_5 - 0x11U < 0xfffffff0)) goto LAB_10002f64;
    }
    data = (char *)(param_1 + 0xc00);
    data_00 = (int *)(param_1 + 0x600);
    recovered_100016a4((undefined1 *)data_00,0x10);
    *data_00 = param_2;
    recovered_10002f8c((undefined1 *)(param_1 + 0x601),param_3,0);
    *data = -1;
    uVar6 = recovered_10001d40(param_1,data_00,0x10,local_78 + 5,local_78 + 4);
    bVar5 = false;
    if (uVar6 == 0) goto LAB_10002f64;
    uVar6 = recovered_10001d40(param_1,data,1,local_78 + 1,local_78);
    bVar5 = false;
    if (uVar6 == 0) goto LAB_10002f64;
    uVar6 = param_5 * 0x200;
    if (param_2 != 4) {
      uVar7 = recovered_10001d40(param_1,param_1 + 0x800,uVar6,local_78 + 3,local_78 + 2);
      bVar5 = false;
      if (uVar7 == 0) goto LAB_10002f64;
      if (param_2 == 1) {
        recovered_10002fcc((undefined1 *)(param_1 + 0x800),param_4,uVar6);
      }
    }
    puVar1 = (undefined1 *)((long)param_1 + lVar2);
    recovered_100016a4(puVar1,(ulong)*(ushort *)((long)param_1 + 0xa4) << 4);
    recovered_10002fe8(puVar1,local_78[5],local_78[4],0x10,1,1);
    if (param_2 == 4) {
      puVar10 = puVar1 + 0x10;
    }
    else {
      uVar12 = 3;
      if (param_2 != 0) {
        uVar12 = 1;
      }
      recovered_10002fe8(puVar1 + 0x10,local_78[3],local_78[2],uVar6,uVar12,2);
      puVar10 = puVar1 + 0x20;
    }
    recovered_10002fe8(puVar10,local_78[1],local_78[0],1,2,0);
    uVar3 = *(ushort *)((long)param_1 + 0xa4);
    uVar7 = 0;
    if (uVar3 != 0) {
      uVar7 = (uint)*(ushort *)((long)param_1 + 0xa6) / (uint)uVar3;
    }
    *(undefined2 *)
     ((long)puVar13 + (ulong)((uint)*(ushort *)((long)param_1 + 0xa6) - uVar7 * uVar3) * 2 + 4) = 0;
    iVar8 = *(ushort *)((long)param_1 + 0xa6) + 1;
    *(short *)((long)param_1 + 0xa6) = (short)iVar8;
    *(char *)((long)puVar13 + 2) = (char)iVar8;
    *(char *)((long)puVar13 + 3) = (char)((uint)iVar8 >> 8);
    uVar3 = *(ushort *)(param_1 + 0x15);
    recovered_10001da4((int *)*param_1,(ulong)*(uint *)(param_1 + 0x12),data_00,0x10);
    recovered_10001da4((int *)*param_1,(ulong)*(uint *)(param_1 + 0x12),param_1 + 0x800,(ulong)uVar6
                      );
    recovered_10001da4((int *)*param_1,(ulong)*(uint *)(param_1 + 0x12),data,1);
    recovered_10001da4((int *)*param_1,(ulong)*(uint *)(param_1 + 0x12),puVar1,
                       (ulong)*(ushort *)((long)param_1 + 0xa4) << 4);
    recovered_10001da4((int *)*param_1,(ulong)*(uint *)(param_1 + 0x12),puVar13,
                       (ulong)((uint)*(ushort *)((long)param_1 + 0xa4) * 2 + 6));
    recovered_10001de0((int *)*param_1);
    if (*(int *)((long)param_1 + 0xac) == 0) {
LAB_10002e58:
      uVar11 = recovered_10001e10((int *)*param_1,param_1[0xf],0,0);
      if ((int)uVar11 != 0) {
LAB_10002e70:
        lVar14 = (long)param_1 + lVar14;
        uVar7 = uVar3 + 1;
        iVar8 = 50000;
        do {
          recovered_10001da4((int *)*param_1,(ulong)*(uint *)(param_1 + 0x12),lVar14,
                             (ulong)((uint)*(ushort *)((long)param_1 + 0xa4) << 3 | 6));
          uVar4 = *(ushort *)(lVar14 + 2);
          *(ushort *)(param_1 + 0x15) = uVar4;
          if ((uint)uVar4 == (uVar7 & 0xffff)) goto LAB_10002ed4;
          recovered_100024fc((int *)*param_1,100);
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
        if ((uint)*(ushort *)(param_1 + 0x15) == (uVar7 & 0xffff)) {
LAB_10002ed4:
          uVar4 = *(ushort *)((long)param_1 + 0xa4);
          uVar7 = 0;
          if (uVar4 != 0) {
            uVar7 = (uint)uVar3 / (uint)uVar4;
          }
          lVar14 = lVar14 + (ulong)((uint)uVar3 - uVar7 * uVar4) * 8;
          iVar8 = recovered_10003048((undefined4 *)(lVar14 + 4));
          uVar9 = recovered_10003048((undefined4 *)(lVar14 + 8));
          uVar7 = 1;
          if (param_2 == 0) {
            uVar7 = uVar6 + 1;
          }
          if ((iVar8 == 0) && (uVar9 != 0 && uVar9 <= uVar7)) {
            recovered_10001da4((int *)*param_1,(ulong)*(uint *)(param_1 + 0x12),data,1);
            recovered_10001da4((int *)*param_1,(ulong)*(uint *)(param_1 + 0x12),param_1 + 0x800,
                               (ulong)uVar6);
            bVar5 = *data == '\0';
            if ((param_2 == 0) && (*data == '\0')) {
              recovered_10002fcc(param_4,(undefined1 *)(param_1 + 0x800),uVar6);
              bVar5 = true;
            }
            goto LAB_10002f64;
          }
        }
      }
    }
    else {
      uVar11 = recovered_10002848((int *)*param_1,
                                  (ulong)(*(ushort *)((long)param_1 + 0xaa) + 0x10 & 0xffff),2,0);
      if ((int)uVar11 != 0) {
        if (*(int *)((long)param_1 + 0xac) == 0) goto LAB_10002e58;
        goto LAB_10002e70;
      }
    }
    recovered_10001f20(param_1);
  }
LAB_10002f60:
  bVar5 = false;
LAB_10002f64:
  *(undefined4 *)(param_1 + 0x14) = 0;
  return bVar5;
}

#undef local_78

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002f8c
 */

void recovered_10002f8c(undefined1 *param_1,undefined4 param_2,undefined4 param_3)

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
 * Address: 0x10002fcc
 */

void recovered_10002fcc(undefined1 *param_1,undefined1 *param_2,uint param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  for (uVar1 = (ulong)param_3; uVar1 != 0; uVar1 = uVar1 - 1) {
    *param_1 = *param_2;
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002fe8
 */

void recovered_10002fe8(undefined1 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4
                       ,undefined4 param_5,undefined4 param_6)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10002f8c(param_1,param_2,param_3);
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
 * Address: 0x10003048
 */

undefined4 recovered_10003048(undefined4 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;

  uVar1 = 0;
  if (param_1 != (undefined4 *)0x0) {
    uVar1 = *param_1;
  }
  return uVar1;
}


#undef DAT_10008000
#define DAT_10008000 (*(uint *)(((uintptr_t)pf_module_state + 0x495cU)))
#undef DAT_10009000
#define DAT_10009000 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x595cU)))
#undef DAT_1000909c
#define DAT_1000909c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x59f8U)))
#undef DAT_100090b4
#define DAT_100090b4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5a10U)))
#undef DAT_100090b6
#define DAT_100090b6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5a12U)))
#undef DAT_100090c4
#define DAT_100090c4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5a20U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000306c
 */

undefined1
recovered_1000306c(uint param_1,ulong param_2,undefined1 *param_3,uint param_4,int param_5)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  bool bVar2;
  undefined1 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  uint uVar7;

  uVar3 = 0;
  if (((param_4 != 0) && (uVar3 = 0, param_3 != (undefined1 *)0x0)) && (param_1 < DAT_10008000)) {
    lVar1 = (ulong)param_1 * 0x7000;
    plVar6 = (long *)(&DAT_10009000 + lVar1);
    if ((uint)(&DAT_1000909c)[(ulong)param_1 * 0x1c00] < (uint)param_2 ||
        (&DAT_1000909c)[(ulong)param_1 * 0x1c00] - (uint)param_2 < param_4) {
      uVar3 = 0;
    }
    else if (*(int *)(&DAT_100090c4 + lVar1) == 0) {
      do {
        if (param_4 == 0) {
          uVar3 = 1;
          goto LAB_10003214;
        }
        uVar7 = param_4;
        if (0xf < param_4) {
          uVar7 = 0x10;
        }
        bVar2 = recovered_10002bd0(plVar6,param_5,(int)param_2,param_3,uVar7);
        param_2 = (ulong)((int)param_2 + uVar7);
        param_4 = param_4 - uVar7;
        param_3 = param_3 + (uVar7 << 9);
      } while (bVar2);
      uVar3 = 0;
    }
    else {
      recovered_10002ba8((long)plVar6);
      bVar2 = param_5 == 1;
      for (; param_4 != 0; param_4 = param_4 - 1) {
        uVar5 = recovered_10003218(plVar6,param_2,(long)param_3,(uint)bVar2);
        if ((int)uVar5 == 0) {
          if (((((*(int *)(&DAT_100090c4 + lVar1) != 0) && (*plVar6 != 0)) &&
               ((uVar5 = recovered_100023f4(plVar6,6), (int)uVar5 != 0 &&
                ((uVar5 = recovered_100024fc((int *)*plVar6,10), (int)uVar5 != 0 &&
                 (uVar5 = recovered_100023f4(plVar6,2), (int)uVar5 != 0)))))) &&
              (uVar5 = recovered_100024fc((int *)*plVar6,2000), (int)uVar5 != 0)) &&
             (((uVar4 = recovered_10002530(plVar6), (int)uVar4 != 0 &&
               (uVar5 = recovered_100025a0(plVar6,(ulong)(byte)(&DAT_100090b4)[lVar1]),
               (int)uVar5 != 0)) && (uVar4 = recovered_100025fc(plVar6), (int)uVar4 != 0)))) {
            (&DAT_100090b6)[lVar1] = 1;
            uVar5 = recovered_10003218(plVar6,param_2,(long)param_3,(uint)bVar2);
            if ((int)uVar5 != 0) goto LAB_10003184;
          }
          recovered_1000336c(plVar6,(uint)param_2,(uint)bVar2);
          uVar3 = 0;
          goto LAB_100031b0;
        }
LAB_10003184:
        param_2 = (ulong)((uint)param_2 + 1);
        param_3 = param_3 + 0x200;
      }
      uVar3 = 1;
LAB_100031b0:
      *(undefined4 *)(lVar1 + ((uintptr_t)pf_module_state+0x59fcU)) = 0;
    }
  }
LAB_10003214:
  return uVar3;
}

#undef DAT_10008000
#undef DAT_10009000
#undef DAT_1000909c
#undef DAT_100090b4
#undef DAT_100090b6
#undef DAT_100090c4

#define uStack_34 (*(uint *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003218
 */

undefined8 recovered_10003218(long *param_1,ulong param_2,long param_3,int param_4)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;

  uVar1 = 0;
  if ((((param_1 != (long *)0x0) && (uVar1 = 0, (param_2 >> 0x1c & 0xf) == 0)) && (param_3 != 0)) &&
     ((*(int *)((long)param_1 + 0xc4) != 0 &&
      (uVar1 = recovered_100023f4(param_1,2), (int)uVar1 != 0)))) {
    uVar1 = recovered_100025a0(param_1,(ulong)((uint)*(byte *)((long)param_1 + 0xb4) |
                                              (uint)param_2 >> 0x18));
    if (((((int)uVar1 != 0) &&
         ((uVar1 = recovered_1000291c(param_1,2,1,1), (int)uVar1 != 0 &&
          (uVar1 = recovered_1000291c(param_1,3,1,param_2), (int)uVar1 != 0)))) &&
        (uVar1 = recovered_1000291c(param_1,4,1,(ulong)((uint)param_2 >> 8)), (int)uVar1 != 0)) &&
       (uVar1 = recovered_1000291c(param_1,5,1,param_2 >> 0x10 & 0xffff), (int)uVar1 != 0)) {
      uVar2 = 0x20;
      if (param_4 != 0) {
        uVar2 = 0x30;
      }
      uVar1 = recovered_10002680(param_1,(ulong)uVar2);
      if (((int)uVar1 != 0) && (uVar1 = recovered_100026d0(param_1,8,0x21), (int)uVar1 != 0)) {
        lVar3 = param_3 + 1;
        lVar4 = 0x100;
        do {
          uStack_34 = 0;
          if (param_4 == 0) {
            uVar1 = recovered_10002760(param_1,0,2,&uStack_34);
            if ((int)uVar1 == 0) {
              return 0;
            }
            *(short *)(lVar3 + -1) = (short)uStack_34;
          }
          else {
            uStack_34 = (uint)*(ushort *)(lVar3 + -1);
            uVar1 = recovered_1000291c(param_1,0,2,(ulong)*(ushort *)(lVar3 + -1));
            if ((int)uVar1 == 0) {
              return 0;
            }
          }
          lVar4 = lVar4 + -1;
          lVar3 = lVar3 + 2;
        } while (lVar4 != 0);
        uVar1 = recovered_100024fc((int *)*param_1,1);
        if ((int)uVar1 != 0) {
          uVar1 = recovered_100027b4(param_1);
        }
      }
    }
  }
  return uVar1;
}

#undef uStack_34

#undef str_10003796
#define str_10003796 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xf2U)))
#undef str_100037b0
#define str_100037b0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x10cU)))
#define auStack_e0 (*(undefined1 (*)[224])(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000336c
 */

void recovered_1000336c(long *param_1,uint param_2,int param_3)

{
  unsigned char pf_stack_frame[272] __attribute__((aligned(16))) = {0};

  char *pcVar1;

  if (param_1 != (long *)0x0) {
    if (((*param_1 != 0) && (*(int *)((long)param_1 + 0x94) != 0)) &&
       (*(int *)((long)param_1 + 0xd4) == 0)) {
      *(undefined4 *)((long)param_1 + 0xd4) = 1;
      pcVar1 = str_100037b0;
      if (param_3 != 0) {
        pcVar1 = str_10003796;
      }
      recovered_1000190c(auStack_e0,0xc0,pcVar1);
      recovered_10001ad8((long)auStack_e0,0xc0,param_2);
      recovered_10001aa4((int *)*param_1,auStack_e0);
    }
  }
  return;
}

#undef str_10003796
#undef str_100037b0
#undef auStack_e0

void *memset(void *p,int v,size_t n){volatile unsigned char *b=p;while(n--)*b++=(unsigned char)v;return p;}
void __bzero(void *p,size_t n){volatile unsigned char *b=p;while(n--)*b++=0;}
void bzero(void *p,size_t n){__bzero(p,n);}
