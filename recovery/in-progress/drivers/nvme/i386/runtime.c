/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef LAB_10003000
#define LAB_10003000 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x286U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100005fe
 */

void * recovered_100005fe(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return &LAB_10003000;
}

#undef LAB_10003000

#undef DAT_1000301c
#define DAT_1000301c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2a2U)))
#undef DAT_10003020
#define DAT_10003020 (*(int *)(((uintptr_t)pf_module_state + 0x2a6U)))
#undef DAT_100034f4
#define DAT_100034f4 (*(int * *)(((uintptr_t)pf_module_state + 0x77aU)))
#undef DAT_100034f8
#define DAT_100034f8 (*(int *)(((uintptr_t)pf_module_state + 0x77eU)))
#undef str_10002edb
#define str_10002edb (*(char (*)[1])(((uintptr_t)pf_module_state + 0x161U)))
#undef str_10002eef
#define str_10002eef (*(char (*)[1])(((uintptr_t)pf_module_state + 0x175U)))
#undef str_10002efc
#define str_10002efc (*(char (*)[1])(((uintptr_t)pf_module_state + 0x182U)))
#undef str_10002f0a
#define str_10002f0a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x190U)))
#define local_210 (*(int *)(pf_stack_frame + 16))
#define local_200 (*(undefined4 *)(pf_stack_frame + 32))
#define local_1fc (*(int *)(pf_stack_frame + 36))
#define local_1f8 (*(code * *)(pf_stack_frame + 40))
#define local_1f4 (*(code * *)(pf_stack_frame + 44))
#define local_1f0 (*(code * *)(pf_stack_frame + 48))
#define local_1ec (*(code * *)(pf_stack_frame + 52))
#define local_1e8 (*(code * *)(pf_stack_frame + 56))
#define local_1e4 (*(undefined4 *)(pf_stack_frame + 60))
#define local_1e0 (*(undefined4 *)(pf_stack_frame + 64))
#define local_1dc (*(undefined4 *)(pf_stack_frame + 68))
#define local_1d8 (*(undefined4 *)(pf_stack_frame + 72))
#define local_1d4 (*(undefined4 *)(pf_stack_frame + 76))
#define local_1d0 (*(undefined4 *)(pf_stack_frame + 80))
#define local_1cc (*(undefined4 *)(pf_stack_frame + 84))
#define local_1c8 (*(undefined4 *)(pf_stack_frame + 88))
#define local_1c4 (*(undefined4 *)(pf_stack_frame + 92))
#define local_1bc (*(code * *)(pf_stack_frame + 100))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000614
 */

uint recovered_10000614(void *api)

{
  unsigned char pf_stack_frame[576] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;

  if (api == (void *)0x0) {
    return 0;
  }
  if (*(int *)api != 0x54584b57) {
    return 0;
  }
  if (*(int *)((int)api + 4) != 1100000) {
    return 0;
  }
  if (*(uint *)((int)api + 8) < 0xf8) {
    return 0;
  }
  DAT_1000301c = 0;
  DAT_10003020 = 0;
  recovered_10000939();
  recovered_10000939();
  DAT_100034f4 = api;
  DAT_100034f8 = 0;
  local_210 = 0;
  if (((*(int *)api == 0x54584b57) && (0x5f < *(uint *)((int)api + 8))) &&
     (*(int *)((int)api + 0x5c) != 0)) {
    local_210 = 0;
    for (iVar1 = 0; iVar1 != 0x100; iVar1 = iVar1 + 1) {
      for (iVar4 = 0; iVar4 != 0x20; iVar4 = iVar4 + 1) {
        iVar2 = recovered_10001ae9((byte)iVar4,0,(undefined1 *)&local_1d0);
        if (iVar2 != 0) {
          iVar2 = recovered_10000952();
          local_210 = iVar2 + local_210;
          if ((char)local_1c4 < '\0') {
            for (iVar2 = -7; iVar2 != 0; iVar2 = iVar2 + 1) {
              iVar3 = recovered_10001ae9((byte)iVar4,(char)iVar2 + '\b',(undefined1 *)&local_200);
              if (iVar3 != 0) {
                iVar3 = recovered_10000952();
                local_210 = local_210 + iVar3;
              }
            }
          }
        }
      }
    }
    if (DAT_100034f8 != 0) goto LAB_100007b4;
  }
  recovered_100017b9();
LAB_100007b4:
  if (DAT_10003020 != 0 && local_210 != 0) {
    local_200 = 3;
    local_1f8 = recovered_10001860;
    local_1f4 = recovered_100018fe;
    local_1f0 = recovered_10001924;
    local_1ec = recovered_1000194a;
    local_1e8 = recovered_10001a2f;
    local_1e4 = 0;
    local_1e0 = 0;
    local_1dc = 0;
    local_1d8 = 0;
    local_1d4 = 0;
    local_1fc = DAT_10003020;
    if (((*(int *)api == 0x54584b57) && (0xd3 < *(uint *)((int)api + 8))) &&
       ((*(code **)((int)api + 0xd0) != (code *)0x0 &&
        (iVar1 = (**(code **)((int)api + 0xd0))(&local_200), iVar1 != 0)))) {
      recovered_10000939();
      local_1d0 = 0x1bc;
      local_1cc = 1;
      local_1c8 = 0x11;
      local_1c4 = 0x13;
      local_1bc = recovered_10002b88;
      recovered_10001cca(str_10002edb);
      recovered_10001cca(str_10002eef);
      recovered_10001cca(str_10002efc);
      recovered_10001cca(str_10002f0a);
      if (((DAT_100034f4 != (int *)0x0) && (*DAT_100034f4 == 0x54584b57)) &&
         ((0xef < (uint)DAT_100034f4[2] &&
          (((code *)DAT_100034f4[0x3b] != (code *)0x0 &&
           (iVar1 = (*(code *)DAT_100034f4[0x3b])(&local_1d0), iVar1 != 0)))))) {
        return 1;
      }
    }
  }
  recovered_100017e4();
  return 0;
}

#undef DAT_1000301c
#undef DAT_10003020
#undef DAT_100034f4
#undef DAT_100034f8
#undef str_10002edb
#undef str_10002eef
#undef str_10002efc
#undef str_10002f0a
#undef local_210
#undef local_200
#undef local_1fc
#undef local_1f8
#undef local_1f4
#undef local_1f0
#undef local_1ec
#undef local_1e8
#undef local_1e4
#undef local_1e0
#undef local_1dc
#undef local_1d8
#undef local_1d4
#undef local_1d0
#undef local_1cc
#undef local_1c8
#undef local_1c4
#undef local_1bc

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000939
 */

void recovered_10000939(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined1 *in_ECX;
  int in_EDX;
  bool bVar1;

  if (in_ECX != (undefined1 *)0x0) {
    while (bVar1 = in_EDX != 0, in_EDX = in_EDX + -1, bVar1) {
      *in_ECX = 0;
      in_ECX = in_ECX + 1;
    }
  }
  return;
}


#undef DAT_10002dcd
#define DAT_10002dcd (*(uint8_t *)(((uintptr_t)pf_module_state + 0x53U)))
#undef DAT_10002eb9
#define DAT_10002eb9 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x13fU)))
#undef DAT_10002ebb
#define DAT_10002ebb (*(uint8_t *)(((uintptr_t)pf_module_state + 0x141U)))
#undef DAT_10002ebd
#define DAT_10002ebd (*(uint8_t *)(((uintptr_t)pf_module_state + 0x143U)))
#undef DAT_10002ebf
#define DAT_10002ebf (*(uint8_t *)(((uintptr_t)pf_module_state + 0x145U)))
#undef DAT_10002ec4
#define DAT_10002ec4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x14aU)))
#undef DAT_10002ec7
#define DAT_10002ec7 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x14dU)))
#undef DAT_10002ec9
#define DAT_10002ec9 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x14fU)))
#undef DAT_1000301c
#define DAT_1000301c (*(uint *)(((uintptr_t)pf_module_state + 0x2a2U)))
#undef DAT_10003020
#define DAT_10003020 (*(uint *)(((uintptr_t)pf_module_state + 0x2a6U)))
#undef DAT_10003024
#define DAT_10003024 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2aaU)))
#undef DAT_10003028
#define DAT_10003028 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2aeU)))
#undef DAT_1000302c
#define DAT_1000302c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2b2U)))
#undef DAT_10003030
#define DAT_10003030 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2b6U)))
#undef DAT_10003031
#define DAT_10003031 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2b7U)))
#undef DAT_10003032
#define DAT_10003032 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2b8U)))
#undef DAT_10003033
#define DAT_10003033 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2b9U)))
#undef DAT_10003034
#define DAT_10003034 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2baU)))
#undef DAT_10003038
#define DAT_10003038 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2beU)))
#undef DAT_1000303c
#define DAT_1000303c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2c2U)))
#undef DAT_10003040
#define DAT_10003040 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2c6U)))
#undef DAT_10003044
#define DAT_10003044 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2caU)))
#undef DAT_10003048
#define DAT_10003048 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2ceU)))
#undef DAT_1000304c
#define DAT_1000304c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2d2U)))
#undef DAT_100030bc
#define DAT_100030bc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x342U)))
#undef DAT_100030e8
#define DAT_100030e8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x36eU)))
#undef DAT_10003108
#define DAT_10003108 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x38eU)))
#undef DAT_10003110
#define DAT_10003110 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x396U)))
#undef DAT_10003118
#define DAT_10003118 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x39eU)))
#undef DAT_10003120
#define DAT_10003120 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3a6U)))
#undef DAT_10003128
#define DAT_10003128 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3aeU)))
#undef DAT_10003454
#define DAT_10003454 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x6daU)))
#undef DAT_10003458
#define DAT_10003458 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x6deU)))
#undef DAT_1000345c
#define DAT_1000345c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6e2U)))
#undef DAT_10003460
#define DAT_10003460 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6e6U)))
#undef DAT_10003464
#define DAT_10003464 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x6eaU)))
#undef DAT_100034f8
#define DAT_100034f8 (*(int *)(((uintptr_t)pf_module_state + 0x77eU)))
#undef str_10002e4d
#define str_10002e4d (*(char (*)[1])(((uintptr_t)pf_module_state + 0xd3U)))
#undef str_10002e58
#define str_10002e58 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xdeU)))
#undef str_10002e64
#define str_10002e64 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xeaU)))
#undef str_10002e72
#define str_10002e72 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xf8U)))
#undef str_10002e82
#define str_10002e82 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x108U)))
#undef str_10002e94
#define str_10002e94 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x11aU)))
#undef str_10002ea6
#define str_10002ea6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x12cU)))
#define local_8a4 (*(uint *)(pf_stack_frame + 44))
#define local_88c (*(undefined4 *)(pf_stack_frame + 68))
#define local_888 (*(uint *)(pf_stack_frame + 72))
#define local_884 (*(uint *)(pf_stack_frame + 76))
#define local_880 (*(uint *)(pf_stack_frame + 80))
#define local_87c (*(char * *)(pf_stack_frame + 84))
#define local_878 (*(uint *)(pf_stack_frame + 88))
#define local_874 (*(uint (*)[541])(pf_stack_frame + 92))
#define local_814 (*(uint (*)[517])(pf_stack_frame + 188))
#define local_414 (*(char (*)[1044])(pf_stack_frame + 1212))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000952
 */

undefined4 recovered_10000952(void)

{
  unsigned char pf_stack_frame[2288] __attribute__((aligned(16))) = {0};

  uint *puVar1;
  int *piVar2;
  int *piVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  char *pcVar13;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  undefined3 extraout_var_01 = 0;
  int extraout_EAX = 0;
  undefined3 extraout_var_02 = 0;
  int extraout_EAX_00 = 0;
  undefined3 extraout_var_03 = 0;
  int extraout_EAX_01 = 0;
  undefined3 extraout_var_04 = 0;
  undefined3 extraout_var_05 = 0;
  undefined3 extraout_var_06 = 0;
  int *in_ECX;
  uint uVar14;
  byte *in_EDX;
  uint uVar15;
  int iVar16;
  uint uVar17;
  undefined8 uVar18;
  uint uVar19;

  uVar8 = DAT_1000301c;
  local_88c = 0;
  if (in_EDX[8] != 1) {
    return 0;
  }
  if (in_EDX[9] != 8) {
    return 0;
  }
  if (in_EDX[10] != 2) {
    return 0;
  }
  DAT_100034f8 = DAT_100034f8 + 1;
  if (3 < DAT_1000301c) {
    return 0;
  }
  iVar10 = DAT_1000301c * 0x10c;
  recovered_10000939();
  *(uint *)(&DAT_10003028 + iVar10) = uVar8;
  bVar4 = *in_EDX;
  (&DAT_10003030)[iVar10] = bVar4;
  bVar5 = in_EDX[1];
  (&DAT_10003031)[iVar10] = bVar5;
  bVar6 = in_EDX[2];
  (&DAT_10003032)[iVar10] = bVar6;
  *(uint *)(&DAT_10003038 + iVar10) =
       (uint)bVar6 << 8 | (uint)bVar5 << 0xb | (uint)bVar4 << 0x10 | 0x80000000;
  local_87c = &DAT_10002dcd;
  recovered_10001cca(&DAT_10002dcd);
  iVar11 = recovered_10001c66(in_EDX[1],in_EDX[2],4,2,(int)&local_88c);
  if (iVar11 == 0) goto LAB_10000d12;
  *(undefined2 *)(&DAT_10003034 + iVar10) = (undefined2)local_88c;
  (&DAT_10003033)[iVar10] = 1;
  local_814[0] = 0;
  pcVar13 = str_10002e82;
  if ((((in_ECX == (int *)0x0) || (*in_ECX != 0x54584b57)) || ((uint)in_ECX[2] < 100)) ||
     (in_ECX[0x18] == 0)) {
LAB_10000ce7:
    recovered_10001ed3(pcVar13);
  }
  else {
    iVar11 = recovered_10001c66(in_EDX[1],in_EDX[2],4,2,(int)local_814);
    if (iVar11 == 0) {
      pcVar13 = str_10002e94;
      goto LAB_10000ce7;
    }
    uVar17 = 0;
    for (iVar11 = -0x18; iVar11 != 0; iVar11 = iVar11 + 4) {
      uVar15 = uVar17 | 1;
      uVar12 = uVar17 | 2;
      if (*(uint *)(in_EDX + iVar11 + 0x2c) == 0) {
        uVar12 = uVar17;
      }
      uVar17 = uVar12;
      if ((*(uint *)(in_EDX + iVar11 + 0x2c) & 1) != 0) {
        uVar17 = uVar15;
      }
    }
    iVar11 = recovered_10001f66();
    uVar12 = uVar17 | 4;
    if (iVar11 == 0) {
      uVar12 = uVar17;
    }
    if ((in_EDX[8] == 6) && (in_EDX[9] != 0)) {
      uVar12 = uVar12 | 2;
    }
    local_874[0] = local_814[0] | uVar12;
    iVar11 = recovered_10001f19(in_EDX[1],in_EDX[2],local_874[0]);
    if (iVar11 == 0) {
      pcVar13 = str_10002ea6;
      goto LAB_10000ce7;
    }
    recovered_10001c66(in_EDX[1],in_EDX[2],4,2,(int)local_874);
    if ((uVar12 & ~local_874[0]) == 0) {
      local_880 = 0;
      local_884 = 0;
      local_888 = 0;
      local_874[0] = 0;
      uVar17 = *(uint *)(in_EDX + 0x14);
      if ((uVar17 & 1) == 0 && uVar17 != 0) {
        local_878 = uVar17;
        recovered_10001c66(in_EDX[1],in_EDX[2],0x10,4,(int)&local_878);
        uVar17 = 0;
        if ((local_878 & 7) == 4) {
          local_874[0] = *(uint *)(in_EDX + 0x18);
          recovered_10001c66(in_EDX[1],in_EDX[2],0x14,4,(int)local_874);
          uVar17 = local_874[0];
        }
        uVar12 = 0xfffffffc;
        if ((local_878 & 1) == 0) {
          uVar12 = 0xfffffff0;
        }
        uVar12 = uVar12 & local_878;
        if (uVar12 != 0 || uVar17 != 0) {
          puVar1 = (uint *)(&DAT_1000302c + iVar10);
          *puVar1 = 0;
          local_814[0] = 0;
          if (*in_ECX == 0x54584b57) {
            if (((uint)in_ECX[2] < 0xbc) || ((code *)in_ECX[0x2e] == (code *)0x0)) {
              if ((0x67 < (uint)in_ECX[2] && uVar17 == 0) &&
                 (((code *)in_ECX[0x19] != (code *)0x0 &&
                  (iVar11 = (*(code *)in_ECX[0x19])(uVar12,0,0x4000,local_814), iVar11 != 0)))) {
                *puVar1 = local_814[0];
                uVar17 = local_814[0];
                goto LAB_10000d6a;
              }
            }
            else {
              iVar11 = (*(code *)in_ECX[0x2e])(uVar12,uVar17,0x4000,puVar1);
              if (iVar11 != 0) {
                uVar17 = *puVar1;
LAB_10000d6a:
                if ((((uVar17 != 0) &&
                     (bVar9 = recovered_10001f87(0,&local_880), CONCAT31(extraout_var,bVar9) != 0))
                    && (bVar9 = recovered_10001f87(4,&local_884),
                       CONCAT31(extraout_var_00,bVar9) != 0)) &&
                   (((local_884 & 0xf0020) == 0x20 &&
                    (uVar17 = 4 << ((byte)local_884 & 0xf),
                    *(uint *)(&DAT_1000303c + iVar10) = uVar17, uVar17 < 0x401)))) {
                  uVar12 = local_880 & 0xffff;
                  uVar17 = 0x10;
                  if (uVar12 < 0x10) {
                    uVar17 = uVar12 + 1;
                  }
                  *(uint *)(&DAT_10003044 + iVar10) = uVar17;
                  uVar15 = 0x20;
                  if (uVar12 < 0x20) {
                    uVar15 = uVar12 + 1;
                  }
                  *(uint *)(&DAT_10003048 + iVar10) = uVar15;
                  if (1 < uVar15 && 1 < uVar17) {
                    uVar12 = (local_880 >> 0x18) * 500 + 500;
                    *(uint *)(&DAT_10003040 + iVar10) = uVar12;
                    *(undefined4 *)(&DAT_1000304c + iVar10) = 0x2000;
                    iVar16 = *(int *)(&DAT_1000302c + iVar10) + 0x1000;
                    piVar2 = (int *)(iVar10 + ((uintptr_t)pf_module_state+0x2deU));
                    iVar11 = recovered_1000219a(piVar2,uVar17,0x40,0,iVar16);
                    if (iVar11 != 0) {
                      piVar3 = (int *)(iVar10 + ((uintptr_t)pf_module_state+0x30aU));
                      iVar11 = recovered_1000219a(piVar3,*(int *)(&DAT_10003044 + iVar10),0x10,0,
                                                  *(int *)(&DAT_1000303c + iVar10) + iVar16);
                      if (((iVar11 != 0) &&
                          (iVar11 = recovered_1000219a((int *)(iVar10 + ((uintptr_t)pf_module_state+0x336U)),
                                                       *(int *)(&DAT_10003048 + iVar10),0x40,1,
                                                       iVar16 + *(int *)(&DAT_1000303c + iVar10) * 2
                                                      ), iVar11 != 0)) &&
                         (iVar11 = recovered_1000219a((int *)(iVar10 + ((uintptr_t)pf_module_state+0x362U)),
                                                      *(int *)(&DAT_10003048 + iVar10),0x10,1,
                                                      *(int *)(&DAT_1000303c + iVar10) * 3 + iVar16)
                         , iVar11 != 0)) {
                        uVar17 = recovered_1000226b((int *)(iVar10 + ((uintptr_t)pf_module_state+0x392U)));
                        *(uint *)(&DAT_10003108 + iVar10) = uVar17;
                        uVar17 = recovered_1000226b((int *)(iVar10 + ((uintptr_t)pf_module_state+0x3aaU)));
                        *(uint *)(&DAT_10003120 + iVar10) = uVar17;
                        if (uVar17 != 0 && *(int *)(&DAT_10003108 + iVar10) != 0) {
                          iVar11 = recovered_100022cf(*(int *)(&DAT_10003108 + iVar10),0x1000,
                                                      (int)(&DAT_10003110 + iVar10),
                                                      iVar10 + ((uintptr_t)pf_module_state+0x39aU));
                          if (iVar11 != 0) {
                            iVar11 = recovered_100022cf(*(int *)(&DAT_10003108 + iVar10) + 0x1000,
                                                        0x1000,(int)(&DAT_10003118 + iVar10),
                                                        iVar10 + ((uintptr_t)pf_module_state+0x3a2U));
                            if (iVar11 != 0) {
                              iVar11 = recovered_100022cf(*(int *)(&DAT_10003120 + iVar10),0x1000,
                                                          (int)(&DAT_10003128 + iVar10),
                                                          iVar10 + ((uintptr_t)pf_module_state+0x3b2U));
                              if ((((iVar11 != 0) &&
                                   ((*(ushort *)(&DAT_10003110 + iVar10) & 0xfff) == 0)) &&
                                  ((*(ushort *)(&DAT_10003118 + iVar10) & 0xfff) == 0)) &&
                                 ((*(ushort *)(&DAT_10003128 + iVar10) & 0xfff) == 0)) {
                                recovered_10000939();
                                recovered_10000939();
                                recovered_10002321();
                                recovered_10002321();
                                recovered_1000202a();
                                bVar9 = recovered_10001f87(0x14,&local_888);
                                if (((((CONCAT31(extraout_var_01,bVar9) != 0) &&
                                      (((local_888 & 1) == 0 ||
                                       (iVar11 = recovered_10002005(), iVar11 != 0)))) &&
                                     (iVar11 = recovered_10002052(0,uVar12), iVar11 != 0)) &&
                                    (((iVar11 = recovered_10002005(), iVar11 != 0 &&
                                      (iVar11 = recovered_10002005(), iVar11 != 0)) &&
                                     ((iVar11 = recovered_10002005(), iVar11 != 0 &&
                                      ((((iVar11 = recovered_10002005(), iVar11 != 0 &&
                                         (iVar11 = recovered_10002005(), iVar11 != 0)) &&
                                        (iVar11 = recovered_10002005(), iVar11 != 0)) &&
                                       ((iVar11 = recovered_10002005(), iVar11 != 0 &&
                                        (iVar11 = recovered_10002005(), iVar11 != 0)))))))))) &&
                                   (iVar11 = recovered_10002052(1,uVar12), iVar11 != 0)) {
                                  local_874[0] = local_874[0] & 0xffff0000;
                                  recovered_10002353(9,0,(undefined2 *)local_874);
                                  *(undefined4 *)(extraout_EAX + 0x28) = 7;
                                  *(undefined4 *)(extraout_EAX + 0x2c) = 0;
                                  bVar9 = recovered_100023ad((int)piVar2,(int)piVar3,
                                                             (short)local_874[0],local_814);
                                  if (CONCAT31(extraout_var_02,bVar9) != 0) {
                                    local_814[0] = local_814[0] & 0xffff0000;
                                    recovered_10002353(5,0,(undefined2 *)local_814);
                                    recovered_100025e1(*(undefined4 *)(&DAT_100030e8 + iVar10),0,0);
                                    iVar11 = *(int *)(&DAT_10003048 + iVar10) * 0x10000 + -0xffff;
                                    *(undefined2 *)(extraout_EAX_00 + 0x28) = 1;
                                    *(char *)(extraout_EAX_00 + 0x2a) = (char)((uint)iVar11 >> 0x10)
                                    ;
                                    *(char *)(extraout_EAX_00 + 0x2b) = (char)((uint)iVar11 >> 0x18)
                                    ;
                                    *(undefined4 *)(extraout_EAX_00 + 0x2c) = 1;
                                    bVar9 = recovered_100023ad((int)piVar2,(int)piVar3,
                                                               (short)local_814[0],(undefined4 *)0x0
                                                              );
                                    if (CONCAT31(extraout_var_03,bVar9) != 0) {
                                      recovered_10002353(1,0,(undefined2 *)local_814);
                                      recovered_100025e1(*(undefined4 *)(&DAT_100030bc + iVar10),0,0
                                                        );
                                      iVar11 = *(int *)(&DAT_10003048 + iVar10) * 0x10000 + -0xffff;
                                      *(undefined2 *)(extraout_EAX_01 + 0x28) = 1;
                                      *(char *)(extraout_EAX_01 + 0x2a) =
                                           (char)((uint)iVar11 >> 0x10);
                                      *(char *)(extraout_EAX_01 + 0x2b) =
                                           (char)((uint)iVar11 >> 0x18);
                                      *(undefined4 *)(extraout_EAX_01 + 0x2c) = 0x10001;
                                      bVar9 = recovered_100023ad((int)piVar2,(int)piVar3,
                                                                 (short)local_814[0],
                                                                 (undefined4 *)0x0);
                                      if (CONCAT31(extraout_var_04,bVar9) != 0) {
                                        *(undefined4 *)(&DAT_10003024 + iVar10) = 1;
                                        uVar17 = DAT_10003020;
                                        bVar9 = recovered_10002644(1,0);
                                        if (CONCAT31(extraout_var_05,bVar9) != 0) {
                                          bVar4 = *(byte *)(*(int *)(&DAT_10003120 + iVar10) + 0x4d)
                                          ;
                                          if (((byte)(bVar4 - 1) < 0x13) &&
                                             (uVar12 = 0x1000 << (bVar4 & 0x1f),
                                             uVar12 < *(uint *)(&DAT_1000304c + iVar10))) {
                                            *(uint *)(&DAT_1000304c + iVar10) = uVar12;
                                          }
                                          uVar12 = *(uint *)(*(int *)(&DAT_10003120 + iVar10) +
                                                            0x204);
                                          uVar15 = 8;
                                          if (uVar12 < 8) {
                                            uVar15 = uVar12;
                                          }
                                          local_8a4 = 1;
                                          while ((local_8a4 <= uVar15 && (DAT_10003020 < 8))) {
                                            bVar9 = recovered_10002644(0,local_8a4);
                                            if (CONCAT31(extraout_var_06,bVar9) != 0) {
                                              puVar1 = *(uint **)(&DAT_10003120 + iVar10);
                                              uVar12 = *puVar1;
                                              uVar7 = puVar1[1];
                                              if ((((uVar12 != 0 || uVar7 != 0) &&
                                                   (uVar14 = *(byte *)((int)puVar1 + 0x1a) & 0xf,
                                                   (byte)uVar14 <=
                                                   (*(byte *)((int)puVar1 + 0x19) & 0xf))) &&
                                                  ((bVar4 = *(byte *)((int)puVar1 +
                                                                     uVar14 * 4 + 0x82),
                                                   bVar4 == 0xc || (bVar4 == 9)))) &&
                                                 (((char)puVar1[uVar14 + 0x20] == '\0' &&
                                                  (*(char *)((int)puVar1 + uVar14 * 4 + 0x81) ==
                                                   '\0')))) {
                                                uVar19 = 0;
                                                uVar18 = recovered_10002d00(0xffffffff,0,
                                                                            (uint)(byte)(bVar4 - 9))
                                                ;
                                                uVar14 = (uint)((ulonglong)uVar18 >> 0x20);
                                                if (uVar7 <= uVar14 &&
                                                    (uint)((uint)uVar18 < uVar12) <= uVar14 - uVar7)
                                                {
                                                  uVar18 = recovered_10002cbe(uVar12,uVar19,
                                                                              (uint)(byte)(bVar4 - 9
                                                                                          ));
                                                  (&DAT_10003458)[DAT_10003020 * 5] = uVar8;
                                                  *(uint *)(&DAT_1000345c + DAT_10003020 * 0x14) =
                                                       local_8a4;
                                                  *(int *)(&DAT_10003460 + DAT_10003020 * 0x14) =
                                                       1 << (bVar4 & 0x1f);
                                                  (&DAT_10003464)[DAT_10003020 * 5] = (int)uVar18;
                                                  (&DAT_10003454)[DAT_10003020 * 5] = 1;
                                                  DAT_10003020 = DAT_10003020 + 1;
                                                }
                                              }
                                            }
                                            local_8a4 = local_8a4 + 1;
                                          }
                                        }
                                        uVar17 = DAT_10003020 - uVar17;
                                        if (uVar17 != 0) {
                                          DAT_1000301c = DAT_1000301c + 1;
                                          recovered_10001cca(local_87c);
                                          recovered_10001e6c(uVar17);
                                          pcVar13 = str_10002e58;
                                          if (uVar17 == 1) {
                                            pcVar13 = str_10002e4d;
                                          }
                                          recovered_10001ed3(pcVar13);
                                          recovered_10001cca(str_10002e64);
                                          recovered_10001ed3(&DAT_10002eb9);
                                          recovered_10002747((uint)*in_EDX,2);
                                          recovered_10001ed3(&DAT_10002ebb);
                                          recovered_10002747((uint)in_EDX[1],2);
                                          recovered_10001ed3(&DAT_10002ebd);
                                          recovered_10001e6c((uint)in_EDX[2]);
                                          recovered_10001cca(&DAT_10002ebf);
                                          recovered_10002747((uint)*in_EDX,2);
                                          recovered_10001ed3(&DAT_10002ebb);
                                          recovered_10002747((uint)in_EDX[1],2);
                                          recovered_10001ed3(&DAT_10002ebd);
                                          recovered_10001e6c((uint)in_EDX[2]);
                                          recovered_10001ed3(&DAT_10002ec4);
                                          recovered_10002747((uint)*(ushort *)(in_EDX + 4),4);
                                          recovered_10001ed3(&DAT_10002ebb);
                                          recovered_10002747((uint)*(ushort *)(in_EDX + 6),4);
                                          recovered_10001ed3(&DAT_10002ec7);
                                          if (local_414[0] != '\0') {
                                            recovered_10001ed3(&DAT_10002ec9);
                                            recovered_10001ed3(local_414);
                                          }
                                          if ((code *)in_ECX[3] != (code *)0x0) {
                                            (*(code *)in_ECX[3])(local_874,str_10002e72,local_814);
                                          }
                                          return 1;
                                        }
                                        recovered_10001ce9();
                                        goto LAB_10000d12;
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
      recovered_10001ce9();
      goto LAB_10000d12;
    }
  }
  recovered_10001ce9();
LAB_10000d12:
  recovered_100017b9();
  return 0;
}

#undef DAT_10002dcd
#undef DAT_10002eb9
#undef DAT_10002ebb
#undef DAT_10002ebd
#undef DAT_10002ebf
#undef DAT_10002ec4
#undef DAT_10002ec7
#undef DAT_10002ec9
#undef DAT_1000301c
#undef DAT_10003020
#undef DAT_10003024
#undef DAT_10003028
#undef DAT_1000302c
#undef DAT_10003030
#undef DAT_10003031
#undef DAT_10003032
#undef DAT_10003033
#undef DAT_10003034
#undef DAT_10003038
#undef DAT_1000303c
#undef DAT_10003040
#undef DAT_10003044
#undef DAT_10003048
#undef DAT_1000304c
#undef DAT_100030bc
#undef DAT_100030e8
#undef DAT_10003108
#undef DAT_10003110
#undef DAT_10003118
#undef DAT_10003120
#undef DAT_10003128
#undef DAT_10003454
#undef DAT_10003458
#undef DAT_1000345c
#undef DAT_10003460
#undef DAT_10003464
#undef DAT_100034f8
#undef str_10002e4d
#undef str_10002e58
#undef str_10002e64
#undef str_10002e72
#undef str_10002e82
#undef str_10002e94
#undef str_10002ea6
#undef local_8a4
#undef local_88c
#undef local_888
#undef local_884
#undef local_880
#undef local_87c
#undef local_878
#undef local_874
#undef local_814
#undef local_414

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100017b9
 */

void recovered_100017b9(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int *in_ECX;

  if ((((in_ECX != (int *)0x0) && (*in_ECX == 0x54584b57)) && (0x2b < (uint)in_ECX[2])) &&
     ((code *)in_ECX[10] != (code *)0x0)) {
    (*(code *)in_ECX[10])();
  }
  return;
}


#undef DAT_1000301c
#define DAT_1000301c (*(uint *)(((uintptr_t)pf_module_state + 0x2a2U)))
#undef DAT_10003020
#define DAT_10003020 (*(int *)(((uintptr_t)pf_module_state + 0x2a6U)))
#undef DAT_10003454
#define DAT_10003454 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x6daU)))
#undef DAT_100034f4
#define DAT_100034f4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x77aU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100017e4
 */

void recovered_100017e4(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;
  uint uVar2;
  bool bVar3;

  for (uVar2 = 0; uVar2 < DAT_1000301c; uVar2 = uVar2 + 1) {
    recovered_10001ce9();
  }
  puVar1 = &DAT_10003454;
  while (bVar3 = DAT_10003020 != 0, DAT_10003020 = DAT_10003020 + -1, bVar3) {
    *puVar1 = 0;
    puVar1 = puVar1 + 5;
  }
  DAT_1000301c = 0;
  DAT_10003020 = 0;
  DAT_100034f4 = 0;
  return;
}

#undef DAT_1000301c
#undef DAT_10003020
#undef DAT_10003454
#undef DAT_100034f4

#undef DAT_10003020
#define DAT_10003020 (*(uint *)(((uintptr_t)pf_module_state + 0x2a6U)))
#undef DAT_10003454
#define DAT_10003454 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x6daU)))
#undef DAT_10003464
#define DAT_10003464 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x6eaU)))
#undef str_10002ecc
#define str_10002ecc (*(char (*)[1])(((uintptr_t)pf_module_state + 0x152U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001860
 */

undefined4 recovered_10001860(uint param_1,undefined4 *param_2,int param_3,int param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  char *pcVar4;
  uint uVar5;

  uVar2 = 0;
  if (((param_1 < DAT_10003020) && (param_2 != (undefined4 *)0x0)) &&
     ((&DAT_10003454)[param_1 * 5] != 0)) {
    *param_2 = (&DAT_10003464)[param_1 * 5];
    uVar2 = 1;
    if (param_4 != 0 && param_3 != 0) {
      uVar1 = param_4 - 1;
      uVar5 = 9;
      if (uVar1 < 9) {
        uVar5 = uVar1;
      }
      pcVar4 = str_10002ecc;
      for (uVar3 = 0; uVar5 != uVar3; uVar3 = uVar3 + 1) {
        *(char *)(param_3 + uVar3) = *pcVar4;
        pcVar4 = pcVar4 + 1;
      }
      if (uVar3 < uVar1) {
        *(byte *)(param_3 + uVar5) = (byte)(param_1 % 10) | 0x30;
        uVar5 = uVar5 + 1;
      }
      *(undefined1 *)(param_3 + uVar5) = 0;
    }
  }
  return uVar2;
}

#undef DAT_10003020
#undef DAT_10003454
#undef DAT_10003464
#undef str_10002ecc

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100018fe
 */

void recovered_100018fe(undefined4 param_1,undefined4 param_2,undefined1 *param_3,uint param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10002799(param_3,param_4,0);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001924
 */

void recovered_10001924(undefined4 param_1,undefined4 param_2,undefined1 *param_3,uint param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10002799(param_3,param_4,1);
  return;
}


#undef DAT_10003020
#define DAT_10003020 (*(uint *)(((uintptr_t)pf_module_state + 0x2a6U)))
#undef DAT_10003024
#define DAT_10003024 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2aaU)))
#undef DAT_10003050
#define DAT_10003050 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2d6U)))
#undef DAT_10003454
#define DAT_10003454 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x6daU)))
#undef DAT_100034f4
#define DAT_100034f4 (*(int *)(((uintptr_t)pf_module_state + 0x77aU)))
#define local_1a (*(short *)(pf_stack_frame + 22))
#define local_18 (*(int *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000194a
 */

bool recovered_1000194a(uint param_1)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  uint uVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;

  uVar1 = DAT_10003020;
  bVar2 = false;
  piVar4 = (int *)0x0;
  if ((param_1 < DAT_10003020) && (piVar4 = &DAT_10003454 + param_1 * 5, *piVar4 == 0)) {
    piVar4 = (int *)0x0;
  }
  local_1a = 0;
  if ((piVar4 != (int *)0x0) && (DAT_100034f4 != 0)) {
    iVar3 = piVar4[1] * 0x10c;
    recovered_10002a05();
    bVar2 = false;
    if ((param_1 < uVar1) &&
       (((&DAT_10003454)[param_1 * 5] != 0 && (*(int *)(&DAT_10003024 + iVar3) != 0)))) {
      local_18 = iVar3 + ((uintptr_t)pf_module_state+0x336U);
      recovered_10002353(0,piVar4[2],&local_1a);
      bVar2 = recovered_100023ad(local_18,iVar3 + ((uintptr_t)pf_module_state+0x362U),local_1a,(undefined4 *)0x0);
    }
    *(undefined4 *)(&DAT_10003050 + iVar3) = 0;
  }
  return bVar2;
}

#undef DAT_10003020
#undef DAT_10003024
#undef DAT_10003050
#undef DAT_10003454
#undef DAT_100034f4
#undef local_1a
#undef local_18

#undef DAT_10002ed6
#define DAT_10002ed6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x15cU)))
#undef DAT_10003020
#define DAT_10003020 (*(uint *)(((uintptr_t)pf_module_state + 0x2a6U)))
#undef DAT_10003030
#define DAT_10003030 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2b6U)))
#undef DAT_10003031
#define DAT_10003031 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2b7U)))
#undef DAT_10003032
#define DAT_10003032 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2b8U)))
#undef DAT_10003454
#define DAT_10003454 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x6daU)))
#undef DAT_10003458
#define DAT_10003458 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x6deU)))
#undef DAT_1000345c
#define DAT_1000345c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6e2U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001a2f
 */

undefined4 recovered_10001a2f(uint param_1,int param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  uint uVar4;
  undefined4 uVar5;
  byte bVar6;
  undefined1 *puVar7;
  int iVar8;

  uVar5 = 0;
  if ((param_1 < DAT_10003020) && ((&DAT_10003454)[param_1 * 5] != 0)) {
    iVar8 = (&DAT_10003458)[param_1 * 5] * 0x10c;
    uVar1 = (&DAT_10003030)[iVar8];
    uVar2 = (&DAT_10003031)[iVar8];
    uVar3 = (&DAT_10003032)[iVar8];
    uVar4 = *(uint *)(&DAT_1000345c + param_1 * 0x14);
    for (iVar8 = -0x40; iVar8 != 0; iVar8 = iVar8 + 1) {
      *(undefined1 *)(param_2 + 0x40 + iVar8) = 0;
    }
    puVar7 = &DAT_10002ed6;
    for (iVar8 = -4; iVar8 != 0; iVar8 = iVar8 + 1) {
      *(undefined1 *)(param_2 + 4 + iVar8) = *puVar7;
      puVar7 = puVar7 + 1;
    }
    *(undefined1 *)(param_2 + 4) = uVar1;
    *(undefined1 *)(param_2 + 5) = uVar2;
    *(undefined1 *)(param_2 + 6) = uVar3;
    bVar6 = 0;
    for (iVar8 = -4; iVar8 != 0; iVar8 = iVar8 + 1) {
      *(char *)(param_2 + 0xc + iVar8) = (char)(uVar4 >> (bVar6 & 0x1f));
      bVar6 = bVar6 + 8;
    }
    uVar5 = 1;
    for (iVar8 = -8; iVar8 != 0; iVar8 = iVar8 + 1) {
      *(undefined1 *)(param_2 + 0x18 + iVar8) = 0;
    }
  }
  return uVar5;
}

#undef DAT_10002ed6
#undef DAT_10003020
#undef DAT_10003030
#undef DAT_10003031
#undef DAT_10003032
#undef DAT_10003454
#undef DAT_10003458
#undef DAT_1000345c

#define local_34 (*(undefined4 *)(pf_stack_frame + 28))
#define local_30 (*(uint *)(pf_stack_frame + 32))
#define local_2c (*(undefined1 *)(pf_stack_frame + 36))
#define local_28 (*(undefined4 *)(pf_stack_frame + 40))
#define local_24 (*(undefined4 *)(pf_stack_frame + 44))
#define local_20 (*(undefined4 * *)(pf_stack_frame + 48))
#define local_1c (*(uint *)(pf_stack_frame + 52))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001ae9
 */

undefined4 recovered_10001ae9(byte param_1,undefined1 param_2,undefined1 *param_3)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined1 in_DL;

  local_30 = 0;
  local_24 = 0;
  local_34 = 0;
  uVar1 = 0;
  if (param_3 != (undefined1 *)0x0) {
    local_2c = in_DL;
    iVar2 = recovered_10001c66(param_1,param_2,0,4,(int)&local_30);
    if (((iVar2 == 0) || ((local_30 & 0xffff) == 0)) || ((local_30 & 0xffff) == 0xffff)) {
      uVar1 = 0;
    }
    else {
      iVar2 = recovered_10001c66(param_1,param_2,8,4,(int)&local_24);
      uVar1 = 0;
      if (iVar2 != 0) {
        local_20 = (undefined4 *)(param_3 + 0x10);
        iVar2 = recovered_10001c66(param_1,param_2,4,4,(int)local_20);
        if (iVar2 == 0) {
          *local_20 = 0;
        }
        iVar2 = recovered_10001c66(param_1,param_2,0xc,4,(int)&local_34);
        if (iVar2 == 0) {
          local_34 = 0;
          PF_PART1(local_34, 2) = 0;
        }
        else {
        }
        *param_3 = local_2c;
        param_3[1] = param_1;
        param_3[2] = param_2;
        *(uint *)(param_3 + 4) = local_30;
        *(ushort *)(param_3 + 10) = (ushort)local_24 << 8 | (ushort)local_24 >> 8;
        param_3[9] = (char)((uint)local_24 >> 0x10);
        param_3[8] = (char)((uint)local_24 >> 0x18);
        param_3[0xc] = PF_PART1(local_34, 2);
        local_1c = (uint)param_1;
        for (iVar2 = -0x18; iVar2 != 0; iVar2 = iVar2 + 4) {
          local_28 = 0;
          iVar3 = recovered_10001c66((char)local_1c,param_2,(short)iVar2 + 0x28,4,(int)&local_28);
          uVar1 = 0;
          if (iVar3 != 0) {
            uVar1 = local_28;
          }
          *(undefined4 *)(param_3 + iVar2 + 0x2c) = uVar1;
        }
        uVar1 = 1;
      }
    }
  }
  return uVar1;
}

#undef local_34
#undef local_30
#undef local_2c
#undef local_28
#undef local_24
#undef local_20
#undef local_1c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001c66
 */

undefined4
recovered_10001c66(undefined1 param_1,undefined1 param_2,undefined2 param_3,undefined4 param_4,
                  int param_5)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  int *in_ECX;
  undefined1 in_DL;

  if ((((in_ECX == (int *)0x0) || (*in_ECX != 0x54584b57)) || ((uint)in_ECX[2] < 0x60)) ||
     (param_5 == 0 || (code *)in_ECX[0x17] == (code *)0x0)) {
    return 0;
  }
  uVar1 = (*(code *)in_ECX[0x17])(in_DL,param_1,param_2,param_3,param_4,param_5);
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001cca
 */

void recovered_10001cca(char *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined1 *in_ECX;

  if (in_ECX != (undefined1 *)0x0) {
    *in_ECX = 0;
    recovered_10001ed3(param_1);
  }
  return;
}


#undef DAT_10003020
#define DAT_10003020 (*(uint *)(((uintptr_t)pf_module_state + 0x2a6U)))
#undef DAT_10003458
#define DAT_10003458 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x6deU)))
#define local_20 (*(uint *)(pf_stack_frame + 16))
#define local_1c (*(uint *)(pf_stack_frame + 20))
#define local_18 (*(uint *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001ce9
 */

void recovered_10001ce9(void)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  bool bVar1;
  uint uVar2;
  undefined3 extraout_var = 0;
  int iVar3;
  int in_ECX;
  int *piVar4;
  uint uVar5;
  undefined4 *in_EDX;
  bool bVar6;

  local_20 = 0;
  if (in_EDX == (undefined4 *)0x0 || in_ECX == 0) {
    return;
  }
  *in_EDX = 0;
  uVar5 = DAT_10003020;
  piVar4 = &DAT_10003458;
  for (uVar2 = 0; uVar2 < uVar5; uVar2 = uVar2 + 1) {
    if (*piVar4 == in_EDX[1]) {
      piVar4[-1] = 0;
    }
    piVar4 = piVar4 + 5;
  }
  if (in_EDX[2] == 0) {
    bVar6 = false;
  }
  else {
    bVar1 = recovered_10001f87(0x14,&local_20);
    bVar6 = true;
    if ((CONCAT31(extraout_var,bVar1) != 0) &&
       (((local_20 & 1) == 0 || (iVar3 = recovered_10002005(), iVar3 != 0)))) {
      recovered_1000202a();
      uVar5 = 5000;
      if (in_EDX[7] != 0) {
        uVar5 = in_EDX[7];
      }
      iVar3 = recovered_10002052(0,uVar5);
      bVar6 = iVar3 == 0;
    }
  }
  if (*(char *)((int)in_EDX + 0xf) != '\0') {
    local_18 = (uint)*(byte *)((int)in_EDX + 0xd);
    uVar5 = in_EDX[4] & 0xfffffffb;
    if (!bVar6) {
      uVar5 = in_EDX[4];
    }
    local_1c = (uint)*(byte *)((int)in_EDX + 0xe);
    recovered_10001f19(*(byte *)((int)in_EDX + 0xd),*(byte *)((int)in_EDX + 0xe),uVar5 & 0xffff);
    *(undefined1 *)((int)in_EDX + 0xf) = 0;
  }
  if (!bVar6) {
    recovered_10002133();
    recovered_10002133();
    recovered_10002133();
    recovered_10002133();
    if (in_EDX[0x3a] != 0) {
      recovered_1000216f();
    }
    if (in_EDX[0x40] != 0) {
      recovered_1000216f();
    }
    in_EDX[0x3a] = 0;
    in_EDX[0x39] = 0;
    in_EDX[0x40] = 0;
    in_EDX[0x3f] = 0;
  }
  return;
}

#undef DAT_10003020
#undef DAT_10003458
#undef local_20
#undef local_1c
#undef local_18

#define abStack_1f (*(byte (*)[31])(pf_stack_frame + 17))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001e6c
 */

void recovered_10001e6c(uint param_1)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  uint uVar1;

  if (param_1 == 0) {
    recovered_10002719(0x30);
  }
  else {
    for (uVar1 = 0; (param_1 != 0 && (uVar1 < 10)); uVar1 = uVar1 + 1) {
      abStack_1f[uVar1 + 1] = (byte)(param_1 % 10) | 0x30;
      param_1 = param_1 / 10;
    }
    while (uVar1 != 0) {
      recovered_10002719(abStack_1f[uVar1]);
      uVar1 = uVar1 - 1;
    }
  }
  return;
}

#undef abStack_1f

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001ed3
 */

void recovered_10001ed3(char *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int in_ECX;
  uint in_EDX;

  uVar1 = recovered_10001f66();
  if (param_1 != (char *)0x0 && in_ECX != 0) {
    while( true ) {
      uVar1 = uVar1 + 1;
      if ((*param_1 == '\0') || (in_EDX <= uVar1)) break;
      *(char *)(in_ECX + -1 + uVar1) = *param_1;
      param_1 = param_1 + 1;
    }
    *(undefined1 *)(in_ECX + -1 + uVar1) = 0;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001f19
 */

undefined4 recovered_10001f19(undefined1 param_1,undefined1 param_2,undefined4 param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  int *in_ECX;
  undefined1 in_DL;

  if ((((in_ECX == (int *)0x0) || (*in_ECX != 0x54584b57)) || ((uint)in_ECX[2] < 100)) ||
     ((code *)in_ECX[0x18] == (code *)0x0)) {
    return 0;
  }
  uVar1 = (*(code *)in_ECX[0x18])(in_DL,param_1,param_2,4,2,param_3);
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001f66
 */

int recovered_10001f66(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  int iVar2;
  int in_ECX;
  int iVar3;

  if (in_ECX == 0) {
    iVar2 = 0;
  }
  else {
    iVar3 = -1;
    do {
      iVar2 = iVar3 + 1;
      pcVar1 = (char *)(in_ECX + 1 + iVar3);
      iVar3 = iVar2;
    } while (*pcVar1 != '\0');
  }
  return iVar2;
}


#define local_14 (*(undefined4 (*)[5])(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001f87
 */

bool recovered_10001f87(int param_1,undefined4 *param_2)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  int iVar1;
  int *in_ECX;
  int in_EDX;
  code *pcVar2;

  local_14[0] = 0;
  if (*(int *)(in_EDX + 8) == 0 || param_2 == (undefined4 *)0x0) {
    return false;
  }
  if (in_ECX == (int *)0x0) {
    return false;
  }
  if (*in_ECX != 0x54584b57) {
    return false;
  }
  if ((uint)in_ECX[2] < 0xc0) {
    if ((uint)in_ECX[2] < 0x6c) {
      return false;
    }
  }
  else {
    pcVar2 = (code *)in_ECX[0x2f];
    if (pcVar2 != (code *)0x0) goto LAB_10001fdc;
  }
  pcVar2 = (code *)in_ECX[0x1a];
  if (pcVar2 == (code *)0x0) {
    return false;
  }
LAB_10001fdc:
  iVar1 = (*pcVar2)(*(int *)(in_EDX + 8) + param_1,4,local_14);
  if (iVar1 != 0) {
    *param_2 = local_14[0];
  }
  return iVar1 != 0;
}

#undef local_14

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002005
 */

undefined4 recovered_10002005(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  int in_EDX;

  if (*(int *)(in_EDX + 8) == 0) {
    return 0;
  }
  uVar1 = recovered_100020bf();
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000202a
 */

void recovered_1000202a(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int *in_ECX;

  if ((((in_ECX != (int *)0x0) && (*in_ECX == 0x54584b57)) && (0x7b < (uint)in_ECX[2])) &&
     ((code *)in_ECX[0x1e] != (code *)0x0)) {
    (*(code *)in_ECX[0x1e])();
  }
  return;
}


#define local_18 (*(uint (*)[6])(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002052
 */

undefined4 recovered_10002052(int param_1,uint param_2)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  bool bVar1;
  undefined3 extraout_var = 0;
  uint uVar2;

  uVar2 = 0;
  while( true ) {
    if (param_2 < uVar2) {
      return 0;
    }
    local_18[0] = 0;
    bVar1 = recovered_10001f87(0x1c,local_18);
    if ((CONCAT31(extraout_var,bVar1) == 0) || ((local_18[0] & 2) != 0)) break;
    if ((param_1 == 0) != (bool)((byte)local_18[0] & 1)) {
      return 1;
    }
    recovered_10002108();
    uVar2 = uVar2 + 1;
  }
  return 0;
}

#undef local_18

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100020bf
 */

undefined4 recovered_100020bf(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  code *pcVar1;
  undefined4 uVar2;
  int *in_ECX;

  if ((in_ECX != (int *)0x0) && (*in_ECX == 0x54584b57)) {
    if ((uint)in_ECX[2] < 0xc4) {
      if ((uint)in_ECX[2] < 0x70) {
        return 0;
      }
    }
    else {
      pcVar1 = (code *)in_ECX[0x30];
      if (pcVar1 != (code *)0x0) goto LAB_100020ed;
    }
    pcVar1 = (code *)in_ECX[0x1b];
    if (pcVar1 != (code *)0x0) {
LAB_100020ed:
      uVar2 = (*pcVar1)();
      return uVar2;
    }
  }
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002108
 */

void recovered_10002108(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int *in_ECX;

  if ((((in_ECX != (int *)0x0) && (*in_ECX == 0x54584b57)) && (0x33 < (uint)in_ECX[2])) &&
     ((code *)in_ECX[0xc] != (code *)0x0)) {
    (*(code *)in_ECX[0xc])();
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002133
 */

void recovered_10002133(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int *in_EDX;

  if (in_EDX != (int *)0x0) {
    if (*in_EDX != 0) {
      recovered_1000216f();
    }
    *in_EDX = 0;
    in_EDX[1] = 0;
    in_EDX[2] = 0;
    in_EDX[3] = 0;
    in_EDX[4] = 0;
    in_EDX[5] = 0;
    in_EDX[10] = 0;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000216f
 */

void recovered_1000216f(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int *in_ECX;

  if ((((in_ECX != (int *)0x0) && (*in_ECX == 0x54584b57)) && (0x3b < (uint)in_ECX[2])) &&
     ((code *)in_ECX[0xe] != (code *)0x0)) {
    (*(code *)in_ECX[0xe])();
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000219a
 */

undefined4 recovered_1000219a(int *param_1,int param_2,int param_3,undefined2 param_4,int param_5)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  undefined4 uVar3;

  uVar1 = recovered_1000226b(param_1);
  param_1[1] = uVar1;
  if (uVar1 == 0) {
    uVar3 = 0;
  }
  else {
    for (iVar2 = 0; param_3 * param_2 != iVar2; iVar2 = iVar2 + 1) {
      *(undefined1 *)(param_1[1] + iVar2) = 0;
    }
    iVar2 = recovered_100022cf(param_1[1],param_3 * param_2,(int)(param_1 + 2),param_1 + 3);
    uVar3 = 0;
    if ((iVar2 != 0) && ((*(ushort *)(param_1 + 2) & 0xfff) == 0)) {
      param_1[4] = param_2;
      param_1[5] = param_3;
      *(undefined2 *)(param_1 + 9) = param_4;
      param_1[10] = param_5;
      param_1[6] = 0;
      param_1[7] = 0;
      param_1[8] = 1;
      recovered_10002321();
      uVar3 = 1;
    }
  }
  return uVar3;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000226b
 */

uint recovered_1000226b(int *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int *in_ECX;
  int in_EDX;
  uint uVar2;

  uVar2 = 0;
  if ((((0xfff < in_EDX + 0xfffU && param_1 != (int *)0x0) && (*param_1 = 0, in_ECX != (int *)0x0))
      && (*in_ECX == 0x54584b57)) &&
     ((0x37 < (uint)in_ECX[2] && ((code *)in_ECX[0xd] != (code *)0x0)))) {
    iVar1 = (*(code *)in_ECX[0xd])(in_EDX + 0xfffU);
    if (iVar1 != 0) {
      *param_1 = iVar1;
      uVar2 = iVar1 + 0xfffU & 0xfffff000;
    }
  }
  return uVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100022cf
 */

undefined4 recovered_100022cf(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  int *in_ECX;
  int in_EDX;

  if ((((in_EDX == 0) || (in_ECX == (int *)0x0)) || (*in_ECX != 0x54584b57)) ||
     ((((uint)in_ECX[2] < 0x74 || (param_3 == 0)) ||
      ((param_1 == 0 || ((code *)in_ECX[0x1c] == (code *)0x0)))))) {
    uVar1 = 0;
  }
  else {
    uVar1 = (*(code *)in_ECX[0x1c])(*(undefined4 *)(in_EDX + 0x14),param_1,param_2,param_3,param_4);
  }
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002321
 */

void recovered_10002321(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int *in_ECX;

  if ((((in_ECX != (int *)0x0) && (*in_ECX == 0x54584b57)) && (0x77 < (uint)in_ECX[2])) &&
     ((code *)in_ECX[0x1d] != (code *)0x0)) {
    (*(code *)in_ECX[0x1d])();
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002353
 */

void recovered_10002353(undefined1 param_1,undefined4 param_2,undefined2 *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined1 *puVar1;
  int in_ECX;
  int in_EDX;
  int iVar2;
  int iVar3;

  puVar1 = (undefined1 *)(*(int *)(in_EDX + 0x14) * *(int *)(in_EDX + 0x18) + *(int *)(in_EDX + 4));
  iVar2 = *(int *)(in_ECX + 0x30) + 1;
  *(short *)(in_ECX + 0x30) = (short)iVar2;
  for (iVar3 = -0x40; iVar3 != 0; iVar3 = iVar3 + 1) {
    puVar1[iVar3 + 0x40] = 0;
  }
  *puVar1 = param_1;
  puVar1[2] = (char)iVar2;
  puVar1[3] = (char)((uint)iVar2 >> 8);
  puVar1[4] = (char)param_2;
  puVar1[5] = (char)((uint)param_2 >> 8);
  puVar1[6] = (char)((uint)param_2 >> 0x10);
  puVar1[7] = (char)((uint)param_2 >> 0x18);
  *param_3 = (short)iVar2;
  return;
}


#define local_28 (*(uint *)(pf_stack_frame + 24))
#define local_24 (*(uint *)(pf_stack_frame + 28))
#define local_20 (*(uint *)(pf_stack_frame + 32))
#define local_1c (*(uint *)(pf_stack_frame + 36))
#define local_18 (*(int *)(pf_stack_frame + 40))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100023ad
 */

bool recovered_100023ad(int param_1,int param_2,short param_3,undefined4 *param_4)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  int iVar1;
  bool bVar2;
  int iVar3;
  undefined3 extraout_var = 0;
  uint uVar4;
  int in_ECX;
  int in_EDX;
  uint uVar5;
  int iVar6;

  if (param_4 != (undefined4 *)0x0) {
    *param_4 = 0;
  }
  if ((((param_2 != 0 && (param_1 != 0 && (in_EDX != 0 && in_ECX != 0))) &&
       (*(int *)(param_1 + 4) != 0)) && (*(int *)(param_2 + 4) != 0)) &&
     ((*(int *)(param_1 + 0x10) != 0 && (*(int *)(param_2 + 0x10) != 0)))) {
    local_24 = 5000000;
    if (*(int *)(in_EDX + 0x1c) != 0) {
      local_24 = *(int *)(in_EDX + 0x1c) * 1000;
    }
    recovered_10002321();
    *(uint *)(param_1 + 0x18) = (*(int *)(param_1 + 0x18) + 1U) % *(uint *)(param_1 + 0x10);
    recovered_1000202a();
    iVar3 = recovered_100020bf();
    if (iVar3 != 0) {
      iVar3 = 0;
      uVar5 = 0;
      while (uVar5 < local_24) {
        iVar1 = *(int *)(param_2 + 4);
        iVar6 = *(int *)(param_2 + 0x1c) * *(int *)(param_2 + 0x14);
        local_20 = uVar5;
        local_1c = uVar5 / 1000;
        local_18 = iVar3;
        recovered_10002321();
        iVar3 = local_18;
        uVar5 = *(uint *)(iVar1 + 0xc + iVar6);
        if ((uVar5 >> 0x10 & 1) == *(uint *)(param_2 + 0x20)) {
          if ((((short)uVar5 == param_3) &&
              (uVar4 = *(uint *)(iVar1 + 8 + iVar6),
              uVar4 >> 0x10 == (uint)*(ushort *)(param_1 + 0x24))) &&
             ((uVar4 = uVar4 & 0xffff, uVar4 < *(uint *)(param_1 + 0x10) &&
              (uVar4 == *(uint *)(param_1 + 0x18))))) {
            if (param_4 != (undefined4 *)0x0) {
              *param_4 = *(undefined4 *)(iVar1 + iVar6);
            }
            uVar4 = (*(int *)(param_2 + 0x1c) + 1U) % *(uint *)(param_2 + 0x10);
            *(uint *)(param_2 + 0x1c) = uVar4;
            if (uVar4 == 0) {
              *(byte *)(param_2 + 0x20) = *(byte *)(param_2 + 0x20) ^ 1;
            }
            iVar3 = recovered_100020bf();
            if (iVar3 != 0) {
              return uVar5 < 0x20000;
            }
          }
          break;
        }
        if (local_1c * 1000 + local_18 == 0) {
          local_28 = 0;
          bVar2 = recovered_10001f87(0x1c,&local_28);
          if ((CONCAT31(extraout_var,bVar2) == 0) || ((local_28 & 2) != 0)) break;
        }
        recovered_10002108();
        iVar3 = iVar3 + -100;
        uVar5 = local_20 + 100;
      }
    }
    recovered_10001ce9();
  }
  return false;
}

#undef local_28
#undef local_24
#undef local_20
#undef local_1c
#undef local_18

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100025e1
 */

void recovered_100025e1(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int in_ECX;
  undefined4 in_EDX;

  *(char *)(in_ECX + 0x18) = (char)in_EDX;
  *(char *)(in_ECX + 0x19) = (char)((uint)in_EDX >> 8);
  *(char *)(in_ECX + 0x1a) = (char)((uint)in_EDX >> 0x10);
  *(char *)(in_ECX + 0x1b) = (char)((uint)in_EDX >> 0x18);
  *(char *)(in_ECX + 0x1c) = (char)param_1;
  *(char *)(in_ECX + 0x1d) = (char)((uint)param_1 >> 8);
  *(char *)(in_ECX + 0x1e) = (char)((uint)param_1 >> 0x10);
  *(char *)(in_ECX + 0x1f) = (char)((uint)param_1 >> 0x18);
  *(char *)(in_ECX + 0x20) = (char)param_2;
  *(char *)(in_ECX + 0x21) = (char)((uint)param_2 >> 8);
  *(char *)(in_ECX + 0x22) = (char)((uint)param_2 >> 0x10);
  *(char *)(in_ECX + 0x23) = (char)((uint)param_2 >> 0x18);
  *(char *)(in_ECX + 0x24) = (char)param_3;
  *(char *)(in_ECX + 0x25) = (char)((uint)param_3 >> 8);
  *(char *)(in_ECX + 0x26) = (char)((uint)param_3 >> 0x10);
  *(char *)(in_ECX + 0x27) = (char)((uint)param_3 >> 0x18);
  return;
}


#define local_1e (*(short (*)[15])(pf_stack_frame + 18))
#define local_18 (*(int *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002644
 */

bool recovered_10002644(undefined4 param_1,undefined4 param_2)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  bool bVar1;
  int extraout_EAX = 0;
  undefined3 extraout_var = 0;
  int in_EDX;

  local_1e[0] = 0;
  local_18 = in_EDX + 0x34;
  recovered_10002353(6,param_2,local_1e);
  recovered_100025e1(*(undefined4 *)(in_EDX + 0x108),0,0);
  *(undefined4 *)(extraout_EAX + 0x28) = param_1;
  recovered_10000939();
  recovered_10002321();
  bVar1 = recovered_100023ad(local_18,in_EDX + 0x60,local_1e[0],(undefined4 *)0x0);
  bVar1 = CONCAT31(extraout_var,bVar1) != 0;
  if (bVar1) {
    recovered_10002321();
  }
  return bVar1;
}

#undef local_1e
#undef local_18

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002719
 */

void recovered_10002719(undefined1 param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int in_ECX;
  uint in_EDX;

  iVar1 = recovered_10001f66();
  if ((in_ECX != 0) && (iVar1 + 1U < in_EDX)) {
    *(undefined1 *)(in_ECX + iVar1) = param_1;
    *(undefined1 *)(in_ECX + 1 + iVar1) = 0;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002747
 */

void recovered_10002747(uint param_1,int param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  bool bVar5;

  iVar4 = param_2 * 4;
  while( true ) {
    iVar4 = iVar4 + -4;
    bVar5 = param_2 == 0;
    param_2 = param_2 + -1;
    if (bVar5) break;
    uVar2 = param_1 >> ((byte)iVar4 & 0x1f) & 0xf;
    cVar1 = (char)uVar2;
    cVar3 = cVar1 + '7';
    if (uVar2 < 10) {
      cVar3 = cVar1 + '0';
    }
    recovered_10002719(cVar3);
  }
  return;
}


#undef DAT_1000301c
#define DAT_1000301c (*(uint *)(((uintptr_t)pf_module_state + 0x2a2U)))
#undef DAT_10003020
#define DAT_10003020 (*(uint *)(((uintptr_t)pf_module_state + 0x2a6U)))
#undef DAT_10003024
#define DAT_10003024 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2aaU)))
#undef DAT_1000304c
#define DAT_1000304c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2d2U)))
#undef DAT_10003050
#define DAT_10003050 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2d6U)))
#undef DAT_10003108
#define DAT_10003108 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x38eU)))
#undef DAT_10003454
#define DAT_10003454 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x6daU)))
#undef DAT_10003458
#define DAT_10003458 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x6deU)))
#undef DAT_1000345c
#define DAT_1000345c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6e2U)))
#undef DAT_10003460
#define DAT_10003460 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6e6U)))
#undef DAT_10003464
#define DAT_10003464 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x6eaU)))
#undef DAT_100034f4
#define DAT_100034f4 (*(int *)(((uintptr_t)pf_module_state + 0x77aU)))
#define local_48 (*(int *)(pf_stack_frame + 24))
#define local_38 (*(undefined1 * *)(pf_stack_frame + 40))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002799
 */

undefined4 recovered_10002799(undefined1 *param_1,uint param_2,int param_3)

{
  unsigned char pf_stack_frame[128] __attribute__((aligned(16))) = {0};

  uint uVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined3 extraout_var = 0;
  undefined1 *puVar8;
  undefined3 extraout_var_00 = 0;
  undefined3 extraout_var_01 = 0;
  int iVar9;
  uint in_ECX;
  int iVar10;
  uint in_EDX;
  uint uVar11;
  uint uVar12;
  uint uVar13;

  uVar3 = 0;
  if ((in_ECX < DAT_10003020) && (iVar10 = in_ECX * 0x14, (&DAT_10003454)[in_ECX * 5] != 0)) {
    if ((uint)(&DAT_10003458)[in_ECX * 5] < DAT_1000301c) {
      iVar4 = (&DAT_10003458)[in_ECX * 5] * 0x10c;
      recovered_10002a05();
      uVar3 = 0;
      if ((((param_2 != 0) && (local_38 = param_1, param_1 != (undefined1 *)0x0)) &&
          (DAT_100034f4 != 0)) &&
         ((param_2 <= (&DAT_10003464)[in_ECX * 5] - in_EDX &&
           in_EDX <= (uint)(&DAT_10003464)[in_ECX * 5] && (*(int *)(&DAT_10003024 + iVar4) != 0))))
      {
        uVar1 = *(uint *)(&DAT_10003460 + iVar10);
        for (; uVar3 = 1, param_2 != 0; param_2 = param_2 - (uVar13 >> 9)) {
          uVar5 = in_EDX / (uVar1 >> 9);
          uVar11 = in_EDX % (uVar1 >> 9);
          uVar12 = uVar11 * 0x200;
          uVar6 = *(uint *)(&DAT_1000304c + iVar4) -
                  (*(uint *)(&DAT_1000304c + iVar4) & 0x1ff | uVar12);
          uVar13 = param_2 << 9;
          if ((uint)(param_2 << 9 < uVar6) <= param_2 >> 0x17) {
            uVar13 = uVar6;
          }
          uVar6 = *(uint *)(&DAT_10003460 + iVar10);
          uVar7 = ((uVar6 - 1) + uVar13 + uVar12) / uVar6;
          if (param_3 == 0) {
            bVar2 = recovered_10002a24(*(undefined4 *)(&DAT_1000345c + iVar10),'\x02',uVar5,0,uVar7,
                                       uVar6);
            if (CONCAT31(extraout_var_01,bVar2) == 0) goto LAB_100029f4;
            iVar9 = 0;
            uVar5 = uVar13;
            puVar8 = local_38;
            while (bVar2 = uVar5 != 0, uVar5 = uVar5 - 1, bVar2) {
              *puVar8 = *(undefined1 *)(iVar9 + *(int *)(&DAT_10003108 + iVar4) + uVar12);
              iVar9 = iVar9 + 1;
              puVar8 = puVar8 + 1;
            }
          }
          else {
            if ((uVar13 + uVar12) % uVar6 != 0 || uVar11 != 0) {
              bVar2 = recovered_10002a24(*(undefined4 *)(&DAT_1000345c + iVar10),'\x02',uVar5,0,
                                         uVar7,uVar6);
              if (CONCAT31(extraout_var,bVar2) == 0) goto LAB_100029f4;
            }
            local_48 = 0;
            puVar8 = local_38;
            uVar6 = uVar13;
            while (bVar2 = uVar6 != 0, uVar6 = uVar6 - 1, bVar2) {
              *(undefined1 *)(local_48 + *(int *)(&DAT_10003108 + iVar4) + uVar12) = *puVar8;
              local_48 = local_48 + 1;
              puVar8 = puVar8 + 1;
            }
            bVar2 = recovered_10002a24(*(undefined4 *)(&DAT_1000345c + iVar10),'\x01',uVar5,0,uVar7,
                                       *(int *)(&DAT_10003460 + iVar10));
            if (CONCAT31(extraout_var_00,bVar2) == 0) {
LAB_100029f4:
              uVar3 = 0;
              break;
            }
          }
          local_38 = local_38 + uVar13;
          in_EDX = in_EDX + (uVar13 >> 9);
        }
      }
      *(undefined4 *)(&DAT_10003050 + iVar4) = 0;
    }
  }
  return uVar3;
}

#undef DAT_1000301c
#undef DAT_10003020
#undef DAT_10003024
#undef DAT_1000304c
#undef DAT_10003050
#undef DAT_10003108
#undef DAT_10003454
#undef DAT_10003458
#undef DAT_1000345c
#undef DAT_10003460
#undef DAT_10003464
#undef DAT_100034f4
#undef local_48
#undef local_38

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002a05
 */

void recovered_10002a05(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int in_ECX;

  while( true ) {
    iVar1 = __atomic_exchange_n(&(*(int *)(in_ECX + 0x2c)),1,__ATOMIC_SEQ_CST);
    if (iVar1 == 0) break;
    do {
    } while (*(int *)(in_ECX + 0x2c) != 0);
  }
  return;
}


#define local_22 (*(short (*)[17])(pf_stack_frame + 30))
#define local_1c (*(undefined4 *)(pf_stack_frame + 36))
#define local_18 (*(int *)(pf_stack_frame + 40))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002a24
 */

bool recovered_10002a24(undefined4 param_1,char param_2,undefined4 param_3,undefined4 param_4,
                       int param_5,int param_6)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  bool bVar1;
  int extraout_EAX = 0;
  undefined4 uVar2;
  undefined3 extraout_var = 0;
  int iVar3;
  int in_EDX;
  uint uVar4;

  uVar4 = param_6 * param_5;
  local_22[0] = 0;
  bVar1 = false;
  if ((0xffffdfff < uVar4 - 0x2001) &&
     (*(uint *)(in_EDX + 0x28) == 0 || uVar4 <= *(uint *)(in_EDX + 0x28))) {
    if ((byte)(param_2 - 1U) < 2) {
      recovered_10002321();
    }
    local_18 = in_EDX + 0x8c;
    recovered_10002353(param_2,param_1,local_22);
    local_1c = 0;
    uVar2 = 0;
    if (0x1000 < uVar4) {
      local_1c = *(undefined4 *)(in_EDX + 0xf4);
      uVar2 = *(undefined4 *)(in_EDX + 0xf8);
    }
    recovered_100025e1(*(undefined4 *)(in_EDX + 0xf0),local_1c,uVar2);
    *(char *)(extraout_EAX + 0x28) = (char)param_3;
    *(char *)(extraout_EAX + 0x29) = (char)((uint)param_3 >> 8);
    *(char *)(extraout_EAX + 0x2a) = (char)((uint)param_3 >> 0x10);
    *(char *)(extraout_EAX + 0x2b) = (char)((uint)param_3 >> 0x18);
    *(undefined4 *)(extraout_EAX + 0x2c) = 0;
    iVar3 = param_5 + -1;
    *(char *)(extraout_EAX + 0x30) = (char)iVar3;
    *(char *)(extraout_EAX + 0x31) = (char)((uint)iVar3 >> 8);
    *(char *)(extraout_EAX + 0x32) = (char)((uint)iVar3 >> 0x10);
    *(char *)(extraout_EAX + 0x33) = (char)((uint)iVar3 >> 0x18);
    bVar1 = recovered_100023ad(local_18,in_EDX + 0xb8,local_22[0],(undefined4 *)0x0);
    bVar1 = CONCAT31(extraout_var,bVar1) != 0;
    if (bVar1 && param_2 == '\x02') {
      recovered_10002321();
      bVar1 = true;
    }
  }
  return bVar1;
}

#undef local_22
#undef local_1c
#undef local_18

#undef DAT_1000301c
#define DAT_1000301c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2a2U)))
#undef DAT_10003020
#define DAT_10003020 (*(int *)(((uintptr_t)pf_module_state + 0x2a6U)))
#undef DAT_10003464
#define DAT_10003464 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x6eaU)))
#undef DAT_100034f4
#define DAT_100034f4 (*(int * *)(((uintptr_t)pf_module_state + 0x77aU)))
#undef str_10002edb
#define str_10002edb (*(char (*)[1])(((uintptr_t)pf_module_state + 0x161U)))
#undef str_10002eef
#define str_10002eef (*(char (*)[1])(((uintptr_t)pf_module_state + 0x175U)))
#undef str_10002f38
#define str_10002f38 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1beU)))
#undef str_10002f4b
#define str_10002f4b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1d1U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002b88
 */

undefined4 recovered_10002b88(undefined4 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;

  uVar1 = 0;
  if (DAT_10003020 != 0 && (DAT_100034f4 != (int *)0x0 && param_1 != (undefined4 *)0x0)) {
    uVar5 = 0;
    puVar2 = &DAT_10003464;
    iVar4 = 0;
    iVar3 = DAT_10003020;
    while (bVar6 = iVar3 != 0, iVar3 = iVar3 + -1, bVar6) {
      if (puVar2[-4] != 0) {
        bVar6 = CARRY4(uVar5,*puVar2);
        uVar5 = uVar5 + *puVar2;
        iVar4 = iVar4 + (uint)bVar6;
      }
      puVar2 = puVar2 + 5;
    }
    recovered_10000939();
    *param_1 = 500;
    param_1[1] = 1;
    param_1[3] = 0x11;
    param_1[4] = 0x13;
    uVar1 = 0;
    if ((((DAT_100034f4 != (int *)0x0) && (*DAT_100034f4 == 0x54584b57)) &&
        (0x2f < (uint)DAT_100034f4[2])) && ((code *)DAT_100034f4[0xb] != (code *)0x0)) {
      uVar1 = (*(code *)DAT_100034f4[0xb])();
    }
    param_1[6] = uVar1;
    param_1[0x11] = DAT_1000301c;
    param_1[0x12] = DAT_10003020;
    param_1[0x13] = uVar5;
    param_1[0x14] = iVar4;
    recovered_10001cca(str_10002edb);
    recovered_10001cca(str_10002eef);
    recovered_10001cca(str_10002f38);
    recovered_10001cca(str_10002f4b);
    uVar1 = 1;
  }
  return uVar1;
}

#undef DAT_1000301c
#undef DAT_10003020
#undef DAT_10003464
#undef DAT_100034f4
#undef str_10002edb
#undef str_10002eef
#undef str_10002f38
#undef str_10002f4b

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002cbe
 */

undefined8 recovered_10002cbe(uint param_1,uint param_2,uint param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  byte bVar2;
  uint uVar3;

  if ((int)param_3 < 1) {
    uVar3 = param_2;
  }
  else {
    uVar3 = 0;
    uVar1 = 0;
    if (0x3f < param_3) goto LAB_10002cf9;
    bVar2 = (byte)param_3;
    if (0x1f < param_3) {
      uVar3 = param_1 << (bVar2 & 0x1f);
      uVar1 = 0;
      goto LAB_10002cf9;
    }
    uVar3 = param_1 >> 0x20 - (bVar2 & 0x1f);
    param_1 = param_1 << (bVar2 & 0x1f);
    uVar3 = param_2 << (bVar2 & 0x1f) | uVar3;
  }
  uVar1 = param_1;
LAB_10002cf9:
  return CONCAT44(uVar3,uVar1);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002d00
 */

undefined8 recovered_10002d00(uint param_1,uint param_2,uint param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  byte bVar2;
  uint uVar3;

  if ((int)param_3 < 1) {
    uVar1 = param_1;
    uVar3 = param_2;
  }
  else {
    uVar1 = 0;
    uVar3 = 0;
    if (param_3 < 0x40) {
      bVar2 = (byte)param_3;
      if (param_3 < 0x20) {
        uVar1 = param_1 >> (bVar2 & 0x1f) | param_2 << 0x20 - (bVar2 & 0x1f);
        uVar3 = param_2 >> (bVar2 & 0x1f);
      }
      else {
        uVar1 = param_2 >> (bVar2 & 0x1f);
        uVar3 = 0;
      }
    }
  }
  return CONCAT44(uVar3,uVar1);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002d44
 */

undefined8 recovered_10002d44(uint param_1,uint param_2,uint param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  uint uVar2;

  uVar2 = param_2;
  if (0 < (int)param_3) {
    uVar2 = (int)param_2 >> 0x1f;
    if (param_3 < 0x40) {
      bVar1 = (byte)param_3;
      if (param_3 < 0x20) {
        param_1 = param_1 >> (bVar1 & 0x1f) | param_2 << 0x20 - (bVar1 & 0x1f);
        uVar2 = (int)param_2 >> (bVar1 & 0x1f);
      }
      else {
        param_1 = (int)param_2 >> (bVar1 & 0x1f);
      }
    }
    else {
      param_1 = uVar2;
    }
  }
  return CONCAT44(uVar2,param_1);
}


void *memset(void *p,int v,size_t n){volatile unsigned char *b=p;while(n--)*b++=(unsigned char)v;return p;}
void __bzero(void *p,size_t n){volatile unsigned char *b=p;while(n--)*b++=0;}
void bzero(void *p,size_t n){__bzero(p,n);}
