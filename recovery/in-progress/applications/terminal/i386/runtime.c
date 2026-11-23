/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_00280a04
#define DAT_00280a04 (*(uint8_t *)(0x280a04U))
#undef DAT_00280a3c
#define DAT_00280a3c (*(uint8_t *)(0x280a3cU))
#undef DAT_00280a4c
#define DAT_00280a4c (*(uint8_t *)(0x280a4cU))
#undef DAT_1001016f
#define DAT_1001016f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2d6U)))
#undef DAT_1001032f
#define DAT_1001032f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x496U)))
#undef DAT_1001108c
#define DAT_1001108c (*(uint *)(((uintptr_t)pf_module_state + 0x11f3U)))
#undef DAT_10011090
#define DAT_10011090 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x11f7U)))
#undef Ram00280800
#define Ram00280800 (*(uint32_t *)(0x280800U))
#undef Ram00280804
#define Ram00280804 (*(uint32_t *)(0x280804U))
#undef Ram00280808
#define Ram00280808 (*(uint32_t *)(0x280808U))
#undef UINT_00280828
#define UINT_00280828 (*(uint *)(0x280828U))
#undef UINT_0028082c
#define UINT_0028082c (*(uint *)(0x28082cU))
#undef UINT_0028084c
#define UINT_0028084c (*(uint *)(0x28084cU))
#undef UINT_00280850
#define UINT_00280850 (*(uint *)(0x280850U))
#undef UINT_00280854
#define UINT_00280854 (*(uint *)(0x280854U))
#undef UINT_00280894
#define UINT_00280894 (*(uint *)(0x280894U))
#undef UINT_0028089c
#define UINT_0028089c (*(uint *)(0x28089cU))
#undef UINT_00280978
#define UINT_00280978 (*(uint *)(0x280978U))
#undef UINT_00280984
#define UINT_00280984 (*(uint *)(0x280984U))
#undef _DAT_00280a04
#define _DAT_00280a04 (*(code * *)(0x280a04U))
#undef _DAT_00280a3c
#define _DAT_00280a3c (*(code * *)(0x280a3cU))
#undef _DAT_00280a4c
#define _DAT_00280a4c (*(code * *)(0x280a4cU))
#undef str_100100b6
#define str_100100b6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x21dU)))
#undef str_100100d6
#define str_100100d6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x23dU)))
#undef str_100100e6
#define str_100100e6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x24dU)))
#undef str_100100ed
#define str_100100ed (*(char (*)[1])(((uintptr_t)pf_module_state + 0x254U)))
#undef str_100100fd
#define str_100100fd (*(char (*)[1])(((uintptr_t)pf_module_state + 0x264U)))
#undef str_10010108
#define str_10010108 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x26fU)))
#undef str_1001010f
#define str_1001010f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x276U)))
#undef str_10010117
#define str_10010117 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x27eU)))
#undef str_10010135
#define str_10010135 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x29cU)))
#undef str_10010150
#define str_10010150 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2b7U)))
#undef str_100101ac
#define str_100101ac (*(char (*)[1])(((uintptr_t)pf_module_state + 0x313U)))
#undef str_100103b6
#define str_100103b6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x51dU)))
#undef str_100103c6
#define str_100103c6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x52dU)))
#undef str_100103f8
#define str_100103f8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x55fU)))
#undef str_10010418
#define str_10010418 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x57fU)))
#undef str_10010bc0
#define str_10010bc0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xd27U)))
#define local_4210 (*(undefined4 *)(pf_stack_frame + 144))
#define local_420c (*(char * *)(pf_stack_frame + 148))
#define local_4208 (*(int *)(pf_stack_frame + 152))
#define local_4204 (*(char * *)(pf_stack_frame + 156))
#define local_4200 (*(uint *)(pf_stack_frame + 160))
#define local_41fc (*(char * *)(pf_stack_frame + 164))
#define local_41e8 (*(uint *)(pf_stack_frame + 184))
#define local_41e4 (*(undefined4 *)(pf_stack_frame + 188))
#define local_41e0 (*(uint *)(pf_stack_frame + 192))
#define local_41dc (*(int *)(pf_stack_frame + 196))
#define local_41d8 (*(uint *)(pf_stack_frame + 200))
#define local_3f98 (*(undefined4 *)(pf_stack_frame + 776))
#define local_3f94 (*(undefined4 *)(pf_stack_frame + 780))
#define local_3f90 (*(uint *)(pf_stack_frame + 784))
#define local_3c58 (*(uint *)(pf_stack_frame + 1608))
#define local_3c54 (*(char *)(pf_stack_frame + 1612))
#define local_3c48 (*(int *)(pf_stack_frame + 1624))
#define local_3c44 (*(int *)(pf_stack_frame + 1628))
#define local_3c40 (*(int *)(pf_stack_frame + 1632))
#define local_3c28 (*(void * *)(pf_stack_frame + 1656))
#define local_3c24 (*(void * *)(pf_stack_frame + 1660))
#define local_3c20 (*(byte * *)(pf_stack_frame + 1664))
#define local_3c14 (*(undefined4 *)(pf_stack_frame + 1676))
#define local_3c10 (*(uint *)(pf_stack_frame + 1680))
#define local_3c0c (*(uint *)(pf_stack_frame + 1684))
#define local_3c08 (*(char * *)(pf_stack_frame + 1688))
#define local_3c04 (*(int *)(pf_stack_frame + 1692))
#define local_3c00 (*(char * *)(pf_stack_frame + 1696))
#define local_3bfc (*(char *)(pf_stack_frame + 1700))
#define local_3bf8 (*(int *)(pf_stack_frame + 1704))
#define local_3bf4 (*(int *)(pf_stack_frame + 1708))
#define local_3bf0 (*(int *)(pf_stack_frame + 1712))
#define local_3bec (*(byte * *)(pf_stack_frame + 1716))
#define local_3be8 (*(uint *)(pf_stack_frame + 1720))
#define local_3be4 (*(ulong *)(pf_stack_frame + 1724))
#define local_3be0 (*(uint *)(pf_stack_frame + 1728))
#define local_3bdc (*(uint *)(pf_stack_frame + 1732))
#define local_3bd0 (*(int *)(pf_stack_frame + 1744))
#define local_3bcc (*(uint *)(pf_stack_frame + 1748))
#define local_3bc8 (*(uint *)(pf_stack_frame + 1752))
#define local_3bc4 (*(uint *)(pf_stack_frame + 1756))
#define local_3bc0 (*(uint *)(pf_stack_frame + 1760))
#define local_3bb4 (*(uint *)(pf_stack_frame + 1772))
#define local_3bb0 (*(uint *)(pf_stack_frame + 1776))
#define local_3bac (*(int *)(pf_stack_frame + 1780))
#define local_3ba0 (*(int *)(pf_stack_frame + 1792))
#define local_3b9c (*(int *)(pf_stack_frame + 1796))
#define local_3b98 (*(int *)(pf_stack_frame + 1800))
#define local_3b94 (*(uint *)(pf_stack_frame + 1804))
#define local_3b90 (*(undefined1 * *)(pf_stack_frame + 1808))
#define local_3b8c (*(undefined4 *)(pf_stack_frame + 1812))
#define local_3b88 (*(byte * *)(pf_stack_frame + 1816))
#define local_3b84 (*(undefined4 *)(pf_stack_frame + 1820))
#define local_3a30 (*(uint *)(pf_stack_frame + 2160))
#define local_3a2c (*(undefined4 *)(pf_stack_frame + 2164))
#define local_39e8 (*(char *)(pf_stack_frame + 2232))
#define local_39e4 (*(undefined4 *)(pf_stack_frame + 2236))
#define local_3794 (*(undefined4 *)(pf_stack_frame + 2828))
#define local_3574 (*(char (*)[13684])(pf_stack_frame + 3372))
#define local_3570 (*(char *)(pf_stack_frame + 3376))
#define local_3564 (*(undefined1 (*)[13668])(pf_stack_frame + 3388))
#define local_864 (*(int *)(pf_stack_frame + 14908))
#define local_860 (*(uint *)(pf_stack_frame + 14912))
#define local_85c (*(uint *)(pf_stack_frame + 14916))
#define local_858 (*(int *)(pf_stack_frame + 14920))
#define local_6f4 (*(int *)(pf_stack_frame + 15276))
#define local_6f0 (*(uint *)(pf_stack_frame + 15280))
#define local_6ec (*(int *)(pf_stack_frame + 15284))
#define local_6e8 (*(undefined4 *)(pf_stack_frame + 15288))
#define local_6e4 (*(uint *)(pf_stack_frame + 15292))
#define local_6e0 (*(int *)(pf_stack_frame + 15296))
#define local_6dc (*(int *)(pf_stack_frame + 15300))
#define local_6d8 (*(int *)(pf_stack_frame + 15304))
#define local_6d4 (*(char *)(pf_stack_frame + 15308))
#define local_350 (*(uint * *)(pf_stack_frame + 16208))
#define local_34c (*(int *)(pf_stack_frame + 16212))
#define local_348 (*(int *)(pf_stack_frame + 16216))
#define local_344 (*(int *)(pf_stack_frame + 16220))
#define local_340 (*(int *)(pf_stack_frame + 16224))
#define local_33c (*(int *)(pf_stack_frame + 16228))
#define local_240 (*(uint *)(pf_stack_frame + 16480))
#define local_23c (*(uint *)(pf_stack_frame + 16484))
#define local_238 (*(char *)(pf_stack_frame + 16488))
#define local_1bc (*(byte *)(pf_stack_frame + 16612))
#define local_1c (*(int *)(pf_stack_frame + 17028))
#define iStack_421c (*(int *)(pf_stack_frame + 132))
#define iStack_41f8 (*(int *)(pf_stack_frame + 168))
#define iStack_41d4 (*(int *)(pf_stack_frame + 204))
#define uStack_3f8c (*(uint *)(pf_stack_frame + 788))
#define pvStack_3f6c (*(void * *)(pf_stack_frame + 820))
#define uStack_3c53 (*(undefined1 *)(pf_stack_frame + 1613))
#define auStack_3c50 (*(undefined1 (*)[15440])(pf_stack_frame + 1616))
#define iStack_3c3c (*(int *)(pf_stack_frame + 1636))
#define uStack_3c1c (*(uint *)(pf_stack_frame + 1668))
#define cStack_3bfb (*(char *)(pf_stack_frame + 1701))
#define bStack_3bfa (*(byte *)(pf_stack_frame + 1702))
#define pvStack_3bd8 (*(void * *)(pf_stack_frame + 1736))
#define uStack_3bbc (*(uint *)(pf_stack_frame + 1764))
#define bStack_3ba8 (*(byte *)(pf_stack_frame + 1784))
#define cStack_3ba7 (*(char *)(pf_stack_frame + 1785))
#define cStack_3ba6 (*(char *)(pf_stack_frame + 1786))
#define acStack_3b80 (*(char (*)[15232])(pf_stack_frame + 1824))
#define acStack_3b00 (*(char (*)[15104])(pf_stack_frame + 1952))
#define auStack_3a80 (*(undefined1 (*)[14976])(pf_stack_frame + 2080))
#define acStack_3a58 (*(char (*)[14936])(pf_stack_frame + 2120))
#define auStack_3a28 (*(undefined1 (*)[14888])(pf_stack_frame + 2168))
#define cStack_39e7 (*(char *)(pf_stack_frame + 2233))
#define bStack_39e5 (*(bool *)(pf_stack_frame + 2235))
#define iStack_39e0 (*(int *)(pf_stack_frame + 2240))
#define auStack_39d4 (*(undefined1 (*)[14804])(pf_stack_frame + 2252))
#define auStack_3994 (*(undefined1 (*)[14740])(pf_stack_frame + 2316))
#define auStack_3894 (*(undefined1 (*)[14484])(pf_stack_frame + 2572))
#define uStack_3790 (*(undefined4 *)(pf_stack_frame + 2832))
#define auStack_3784 (*(undefined1 (*)[14212])(pf_stack_frame + 2844))
#define auStack_367c (*(undefined1 (*)[13948])(pf_stack_frame + 3108))
#define cStack_356f (*(char *)(pf_stack_frame + 3377))
#define cStack_356e (*(char *)(pf_stack_frame + 3378))
#define cStack_356d (*(char *)(pf_stack_frame + 3379))
#define auStack_356c (*(undefined1 (*)[13676])(pf_stack_frame + 3380))
#define auStack_355c (*(uint (*)[3415])(pf_stack_frame + 3396))
#define acStack_354f (*(char (*)[13647])(pf_stack_frame + 3409))
#define uStack_854 (*(undefined4 *)(pf_stack_frame + 14924))
#define uStack_6fc (*(uint *)(pf_stack_frame + 15268))
#define cStack_6d3 (*(char *)(pf_stack_frame + 15309))
#define bStack_6d2 (*(byte *)(pf_stack_frame + 15310))
#define cStack_6d1 (*(char *)(pf_stack_frame + 15311))
#define acStack_6d0 (*(char (*)[1744])(pf_stack_frame + 15312))
#define cStack_338 (*(char *)(pf_stack_frame + 16232))
#define acStack_330 (*(char (*)[816])(pf_stack_frame + 16240))
#define iStack_234 (*(int *)(pf_stack_frame + 16492))
#define uStack_1c4 (*(undefined4 *)(pf_stack_frame + 16604))
#define auStack_1b8 (*(uint (*)[110])(pf_stack_frame + 16616))
#define uStack_18 (*(undefined1 *)(pf_stack_frame + 17032))
#define local_427c (*(uint *)(pf_stack_frame + 36))
#define local_4278 (*(uint *)(pf_stack_frame + 40))
#define local_4274 (*(byte * *)(pf_stack_frame + 44))
#define local_4270 (*(uint *)(pf_stack_frame + 48))
#define local_4268 (*(byte * *)(pf_stack_frame + 56))
#define local_4264 (*(uint *)(pf_stack_frame + 60))
#define local_4260 (*(uint *)(pf_stack_frame + 64))
#define local_425c (*(uint *)(pf_stack_frame + 68))
#define local_4254 (*(uint *)(pf_stack_frame + 76))
#define local_4250 (*(uint *)(pf_stack_frame + 80))
#define local_424c (*(int *)(pf_stack_frame + 84))
#define local_4248 (*(uint *)(pf_stack_frame + 88))
#define local_422c (*(undefined4 *)(pf_stack_frame + 116))
#define local_4228 (*(undefined4 * *)(pf_stack_frame + 120))
#define local_4224 (*(uint *)(pf_stack_frame + 124))
#define local_4220 (*(int *)(pf_stack_frame + 128))
#define local_4214 (*(uint *)(pf_stack_frame + 140))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001080
 */

/* WARNING: Removing unreachable block (ram,0x10001c90) */
/* WARNING: Removing unreachable block (ram,0x100027f4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int recovered_10001080(int argc,char **argv)

{
  unsigned char pf_stack_frame[17088] __attribute__((aligned(16))) = {0};

  char cVar1;
  code *pcVar2;
  byte *pbVar3;
  undefined4 *puVar4;
  byte bVar5;
  byte bVar6;
  uchar uVar7;
  undefined1 uVar9;
  undefined1 uVar8;
  undefined1 uVar25;
  char *pcVar10;
  int iVar11;
  byte *pbVar12;
  undefined4 uVar13;
  ulong uVar14;
  void *pvVar15;
  uint uVar16;
  undefined1 *puVar17;
  uint uVar18;
  uint *puVar19;
  uint uVar20;
  int iVar21;
  uint uVar22;
  ulong uVar23;
  uint uVar24;
  uint uVar26;
  uint uVar27;
  char *pcVar28;
  uint uVar29;
  byte bVar30;
  int iVar31;
  byte *dst;
  int iVar32;
  int iVar33;
  byte *pbVar34;
  uint uVar35;
  uint uVar36;
  undefined1 *dst_00;
  int iVar37;
  uint uVar38;
  bool bVar39;
  bool bVar40;
  longlong lVar41;
  undefined1 uVar42;

  uVar26 = 0;
  if ((argv != (char **)0x0 && argc != 0) && (*argv != (char *)0x0)) {
    pcVar10 = thunk_strstr(*argv,str_100100e6);
    uVar26 = (uint)(pcVar10 != (char *)0x0);
  }
  DAT_10011090 = 0;
  DAT_1001108c = uVar26;
  if (1 < argc && argv != (char **)0x0) {
    iVar31 = 1;
    do {
      iVar11 = thunk_strcmp(argv[iVar31],str_100100ed);
      if (iVar11 == 0) {
        DAT_1001108c = 1;
      }
      iVar11 = thunk_strncmp(argv[iVar31],str_100100fd,10);
      if (iVar11 == 0) {
        pcVar10 = argv[iVar31] + 10;
LAB_10001183:
        cVar1 = *pcVar10;
        if (cVar1 == '\0') {
          return 0;
        }
        uVar26 = 0;
        do {
          pcVar10 = pcVar10 + 1;
          if ((byte)(cVar1 - 0x3aU) < 0xf6) {
            return 0;
          }
          if (((byte)(cVar1 - 0x30) ^ 0x7ffffffe) / 10 < uVar26) {
            return 0;
          }
          uVar26 = (uint)(byte)(cVar1 - 0x30) + uVar26 * 10;
          cVar1 = *pcVar10;
        } while (cVar1 != '\0');
        if (uVar26 == 0) {
          return 0;
        }
        DAT_10011090 = uVar26;
      }
      else {
        iVar11 = thunk_strncmp(argv[iVar31],str_10010108,6);
        if (iVar11 == 0) {
          pcVar10 = argv[iVar31] + 6;
          goto LAB_10001183;
        }
      }
      iVar31 = iVar31 + 1;
    } while (iVar31 != argc);
  }
  local_4274 = (byte *)0x0;
  if (1 < argc && argv != (char **)0x0) {
    iVar31 = argc + -1;
    do {
      argv = argv + 1;
      pcVar10 = *argv;
      if (pcVar10 != (char *)0x0) {
        pcVar28 = thunk_strchr(pcVar10,0x3d);
        uVar26 = (int)pcVar28 - (int)pcVar10;
        if ((uVar26 != 0 && pcVar28 != (char *)0x0) && (uVar26 < 0x10)) {
          thunk_memcpy(&local_3f98,pcVar10,uVar26);
          *(undefined1 *)((int)&local_3f98 + uVar26) = 0;
          if ((byte)local_3f98 == 0) {
            iVar11 = 0;
LAB_10001524:
            if (str_1001010f[iVar11] == '\0') {
              local_4274 = (byte *)(pcVar28 + 1);
              break;
            }
          }
          else {
            bVar5 = (byte)local_3f98 | 0x20;
            if (0x19 < (byte)((byte)local_3f98 + 0xbf)) {
              bVar5 = (byte)local_3f98;
            }
            if (bVar5 == 99) {
              if (PF_PART1(local_3f98, 1) == 0) {
                iVar11 = 1;
                goto LAB_10001524;
              }
              bVar5 = PF_PART1(local_3f98, 1) | 0x20;
              if (0x19 < (byte)(PF_PART1(local_3f98, 1) + 0xbf)) {
                bVar5 = PF_PART1(local_3f98, 1);
              }
              if (bVar5 == 0x6f) {
                if (PF_PART1(local_3f98, 2) == 0) {
                  iVar11 = 2;
                  goto LAB_10001524;
                }
                bVar5 = PF_PART1(local_3f98, 2) | 0x20;
                if (0x19 < (byte)(PF_PART1(local_3f98, 2) + 0xbf)) {
                  bVar5 = PF_PART1(local_3f98, 2);
                }
                if (bVar5 == 0x6d) {
                  if (PF_PART1(local_3f98, 3) == 0) {
                    iVar11 = 3;
                    goto LAB_10001524;
                  }
                  bVar5 = PF_PART1(local_3f98, 3) | 0x20;
                  if (0x19 < (byte)(PF_PART1(local_3f98, 3) + 0xbf)) {
                    bVar5 = PF_PART1(local_3f98, 3);
                  }
                  if (bVar5 == 0x6d) {
                    if ((byte)local_3f94 == 0) {
                      iVar11 = 4;
                      goto LAB_10001524;
                    }
                    bVar5 = (byte)local_3f94 | 0x20;
                    if (0x19 < (byte)((byte)local_3f94 + 0xbf)) {
                      bVar5 = (byte)local_3f94;
                    }
                    if (bVar5 == 0x61) {
                      if (PF_PART1(local_3f94, 1) == 0) {
                        iVar11 = 5;
                        goto LAB_10001524;
                      }
                      bVar5 = PF_PART1(local_3f94, 1) | 0x20;
                      if (0x19 < (byte)(PF_PART1(local_3f94, 1) + 0xbf)) {
                        bVar5 = PF_PART1(local_3f94, 1);
                      }
                      if (bVar5 == 0x6e) {
                        if (PF_PART1(local_3f94, 2) == 0) {
                          iVar11 = 6;
                          goto LAB_10001524;
                        }
                        bVar5 = PF_PART1(local_3f94, 2) | 0x20;
                        if (0x19 < (byte)(PF_PART1(local_3f94, 2) + 0xbf)) {
                          bVar5 = PF_PART1(local_3f94, 2);
                        }
                        if (bVar5 == 100) {
                          iVar11 = 7;
                          if (PF_PART1(local_3f94, 3) == '\0') goto LAB_10001524;
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
      iVar31 = iVar31 + -1;
    } while (iVar31 != 0);
  }
  thunk_memset(&local_3f98,0,0x3f84);
  if (local_3be4 < 0x40 || local_3bec == (byte *)0x0) {
    uVar26 = 0x40;
    if (local_3be4 != 0) {
      uVar26 = local_3be4;
    }
    uVar14 = local_3be4;
    if (uVar26 < 0x40) {
      do {
        uVar26 = (uintptr_t)uVar14 * 2;
        bVar39 = uVar14 < 0x20;
        uVar14 = uVar26;
      } while (bVar39);
    }
    iVar31 = Ram00280800;
    if (((((iVar31 == 0x50414d57) && (iVar31 = Ram00280804, iVar31 != 0)) &&
         (uVar27 = Ram00280808, 0xb < uVar27)) &&
        ((uVar27 = Ram00280808, 0x57 < uVar27 &&
         (pcVar2 = (code *)UINT_00280854, pcVar2 != (code *)0x0)))) &&
       (pbVar12 = (*pcVar2)(local_3bec,uVar26), pbVar12 != (byte *)0x0)) {
      if (local_3bec == (byte *)0x0) {
        *pbVar12 = 0;
      }
      local_3bec = pbVar12;
      local_3be4 = uVar26;
      goto LAB_100012da;
    }
  }
  else {
LAB_100012da:
    uVar13 = recovered_10008ec0((int)&local_3f98,0x80);
    if (((char)uVar13 != '\0') && (local_3bdc != 0x7fffffff)) {
      if ((int)local_3be0 <= (int)local_3bdc) {
        uVar26 = local_3be0;
        if (local_3be0 == 0) {
          uVar26 = 0x10;
        }
        uVar27 = 0x1fffffff;
        if (uVar26 < 0x10000000) {
          uVar27 = uVar26 * 2;
        }
        if (local_3be0 == 0) {
          uVar27 = 0x10;
        }
        if ((((0x1fffffff < uVar27 || uVar27 <= local_3bdc) ||
             (iVar31 = Ram00280800, iVar31 != 0x50414d57)) || (iVar31 = Ram00280804, iVar31 == 0))
           || (((uVar26 = Ram00280808, uVar26 < 0xc || (uVar26 = Ram00280808, uVar26 < 0x58)) ||
               ((pcVar2 = (code *)UINT_00280854, pcVar2 == (code *)0x0 ||
                (pvVar15 = (*pcVar2)(local_3c24,uVar27 * 8), pvVar15 == (void *)0x0))))))
        goto LAB_10001303;
        local_3c24 = pvVar15;
        local_3be0 = uVar27;
      }
      uVar26 = 0x2a8;
      pcVar10 = str_100100e6;
      if (DAT_1001108c == 0) {
        uVar26 = 400;
        pcVar10 = str_10010bc0;
      }
      pf_app_window_spec(&local_4210,pcVar10,0x2f8,uVar26);
      local_4200 = thunk_terror_ui_colour(0);
      local_41e0 = local_41e0 | 1;
      uVar26 = thunk_terror_ui_window_open(&local_3f98,&local_4210);
      if (uVar26 != 0) {
        pcVar10 = str_10010135;
        if (DAT_1001108c == 1) {
          pcVar10 = str_10010117;
        }
        terror_ui_window_set_custom_menus(&local_3f98,pcVar10);
        if ((local_3c28 != (void *)0x0) || (local_3c28 = pvStack_3f6c, pvStack_3f6c != (void *)0x0))
        {
          local_3bf4 = 6;
          local_3bf0 = 10;
          thunk_memset(&local_422c,0,0x18);
          iVar31 = Ram00280800;
          if (((iVar31 == 0x50414d57) &&
              (((iVar31 = Ram00280804, iVar31 != 0 && (uVar26 = Ram00280808, 0xb < uVar26)) &&
               (uVar26 = Ram00280808, 0x17b < uVar26)))) &&
             ((pcVar2 = (code *)UINT_00280978, pcVar2 != (code *)0x0 &&
              (uVar26 = (*pcVar2)((char *)((uintptr_t)pf_module_state + 0x2d4U),0xffffffff,0x80000001,0,&local_422c),
              uVar26 != 0)))) {
            if (local_4220 - 1U < 0x40) {
              local_3bf4 = local_4220;
            }
            if (iStack_421c - 1U < 0x40) {
              local_3bf0 = iStack_421c;
            }
            if (((local_422c != (undefined4 *)0x0) && (local_4228 == (undefined4 *)0x0)) &&
               ((local_422c != (undefined4 *)0x0 &&
                ((((iVar31 = Ram00280800, iVar31 == 0x50414d57 &&
                   (iVar31 = Ram00280804, iVar31 != 0)) && (uVar26 = Ram00280808, 0xb < uVar26)) &&
                 ((uVar26 = Ram00280808, 0x53 < uVar26 &&
                  (pcVar2 = (code *)UINT_00280850, pcVar2 != (code *)0x0)))))))) {
              (*pcVar2)(local_422c);
            }
            thunk_memset(&local_422c,0,0x18);
          }
          pbVar12 = (byte *)str_100100e6;
          if (DAT_1001108c == 0) {
            pbVar12 = (byte *)str_10010bc0;
          }
          uVar14 = thunk_strlen((char *)pbVar12);
          recovered_10009300((int)&local_3f98,pbVar12,uVar14,'\0');
          if (DAT_1001108c != 0) {
            thunk_snprintf(acStack_3b80,0x80,str_10010150);
            local_3a30 = DAT_10011090;
            local_6d4 = '\x01';
          }
          local_3bb4 = recovered_100091f0((int)&local_3f98);
          cStack_3ba7 = '\x01';
          if (((DAT_1001108c == 0) && (iVar31 = Ram00280800, iVar31 == 0x50414d57)) &&
             ((iVar31 = Ram00280804, iVar31 != 0 &&
              (((uVar26 = Ram00280808, 0xb < uVar26 && (uVar26 = Ram00280808, 0x23f < uVar26)) &&
               (_DAT_00280a3c != (code *)0x0)))))) {
            iVar31 = (*_DAT_00280a3c)();
            cStack_3ba6 = iVar31 != 0;
          }
          else {
            cStack_3ba6 = false;
          }
          uVar26 = local_3bb0;
          if (local_4274 != (byte *)0x0) {
            recovered_10005b30(&local_3f98,local_4274);
          }
          if (cStack_3ba7 == '\x01') {
            uVar26 = uVar26 >> 0xc & 1;
            bVar39 = true;
LAB_10001b36:
            terror_ui_window_begin_frame(&local_3f98);
            uVar18 = local_3f90;
            uVar27 = local_3f94;
            thunk_memset(&local_4210,0,0x278);
            uVar16 = thunk_terror_ui_window_query(&local_3f98,&local_4210);
            if ((uVar16 != 0) && (uVar16 = thunk_terror_ui_window_sync_buffer(&local_3f98,&local_4210), uVar16 != 0)
               ) {
              local_3c28 = pvStack_3f6c;
              if ((local_3f94 != uVar27) || (local_3f90 != uVar18)) {
                bStack_3ba8 = 1;
              }
              local_3c14 = local_41e4;
              local_3c10 = local_41e0;
              local_3c0c = local_41e8;
              if ((local_41dc != 0) && (local_41dc != local_3bac)) {
                local_3bac = local_41dc;
                if ((local_41d8 ^ 2) == 0 && iStack_41d4 == 0) {
                  recovered_1000ae50((int)&local_3f98);
                }
                else if ((local_41d8 ^ 2) == 0 && iStack_41d4 == 1) {
                  recovered_1000b0e0((int)&local_3f98);
                }
              }
              bVar5 = bStack_3ba8;
              if ((local_41e8 & 0x11) == 0) {
                if (bStack_3ba8 == 1) {
                  bStack_3ba8 = 0;
                }
                puVar17 = recovered_10006d90((int)&local_3f98);
                uVar27 = local_3bb4;
                if (local_3ba0 != 0) {
                  __atomic_thread_fence(__ATOMIC_SEQ_CST);
                  if (local_3b9c == 0) {
                    bVar6 = 0;
                    goto LAB_100024e1;
                  }
                  iVar31 = recovered_100091f0((int)&local_3f98);
                  pbVar12 = local_3b88;
                  if (DAT_1001108c == 0) {
                    if (*local_3b88 == 0) {
                      if (local_3b98 == 0) {
                        uVar14 = thunk_strlen(str_100101ac);
                        recovered_10009300((int)&local_3f98,(byte *)str_100101ac,uVar14,'\0');
                      }
                    }
                    else {
                      dst = (byte *)0x0;
                      if ((local_3b88 < local_3c20 || local_3c20 == (byte *)0x0) ||
                         (uStack_3c1c <= (uint)((int)local_3b88 - (int)local_3c20))) {
LAB_10001dcb:
                        bVar40 = false;
                        pbVar34 = pbVar12;
                        pbVar3 = pbVar12;
                        do {
                          bVar6 = *pbVar3;
                          if (bVar6 == 10) {
                            uVar13 = recovered_10009300((int)&local_3f98,pbVar12,
                                                        (int)pbVar34 - (int)pbVar12,'\x01');
                            if ((char)uVar13 == '\0') goto LAB_1000212d;
                            bVar40 = false;
                            pbVar12 = pbVar3 + 1;
                          }
                          else if (bVar6 != 0xd) {
                            if (bVar6 == 0) goto LAB_10002112;
                            bVar40 = true;
                          }
                          pbVar34 = pbVar34 + 1;
                          pbVar3 = pbVar3 + 1;
                        } while( true );
                      }
                      uVar14 = thunk_strlen((char *)local_3b88);
                      if (((uVar14 != 0xffffffff) &&
                          (((iVar11 = Ram00280800, iVar11 == 0x50414d57 &&
                            (iVar11 = Ram00280804, iVar11 != 0)) &&
                           (uVar18 = Ram00280808, 0xb < uVar18)))) &&
                         ((uVar18 = Ram00280808, 0x4f < uVar18 &&
                          (pcVar2 = (code *)UINT_0028084c, pcVar2 != (code *)0x0)))) {
                        dst = (*pcVar2)(uVar14 + 1);
                        if (dst != (byte *)0x0) {
                          thunk_memcpy(dst,pbVar12,uVar14 + 1);
                          pbVar12 = dst;
                          goto LAB_10001dcb;
                        }
                      }
                    }
                  }
                  else {
                    if (local_6f0 != 0) {
                      if (DAT_10011090 == 0) {
                        if (local_6dc == local_6e0) {
                          DAT_10011090 = local_6f0;
                          local_3a30 = local_6f0;
                        }
                      }
                      else if ((local_864 == 0) || (local_85c != 0)) goto LAB_10001e83;
                      puVar19 = auStack_355c;
                      for (uVar18 = uStack_6fc; uVar18 != 0; uVar18 = uVar18 - 1) {
                        if (*puVar19 == 0) {
                          *puVar19 = local_6f0;
                        }
                        puVar19 = puVar19 + 0x5a;
                      }
                      if (local_240 != 0) {
                        uVar18 = local_240;
                        puVar19 = local_350;
                        do {
                          if ((*puVar19 == 0) && (*(char *)((int)puVar19 + 0x15) == '\x01')) {
                            *puVar19 = local_6f0;
                          }
                          puVar19 = puVar19 + 0x43;
                          uVar18 = uVar18 - 1;
                        } while (uVar18 != 0);
                      }
                    }
LAB_10001e83:
                    local_3a2c = local_39e4;
                    thunk_memcpy(auStack_3a28,auStack_39d4,0x40);
                    if (local_6f0 == DAT_10011090) {
                      cStack_6d1 = cStack_39e7;
                      if (cStack_6d3 == '\x01') {
                        thunk_snprintf(acStack_3a58,0x28,&DAT_1001032f,auStack_3a80);
                        thunk_memcpy(auStack_367c,auStack_3784,0x108);
                        thunk_memcpy(auStack_356c,local_3574,8);
                        thunk_memcpy(auStack_3894,auStack_3994,0x100);
                        uStack_3790 = local_3794;
                        if ((((local_864 == 0) && (local_6dc == local_6e0)) &&
                            (local_3574[iStack_39e0] == '\0')) &&
                           (((((iVar11 = 0, local_3574[0] != '\0' ||
                               (iVar11 = 1, local_3574[1] != '\0')) ||
                              ((iVar11 = 2, local_3574[2] != '\0' ||
                               ((iVar11 = 3, local_3574[3] != '\0' ||
                                (iVar11 = 4, local_3570 != '\0')))))) ||
                             (iVar11 = 5, cStack_356f != '\0')) ||
                            ((iVar11 = 6, cStack_356e != '\0' || (iVar11 = 7, cStack_356d != '\0')))
                            ))) {
                          iStack_39e0 = iVar11;
                        }
                      }
                      if (acStack_6d0[0] == '\0') {
                        thunk_snprintf(acStack_3b80,0x80,&DAT_1001032f,acStack_3b00);
                      }
                    }
                    iVar11 = local_6f4;
                    if (local_864 == 0) {
LAB_1000226e:
                      if ((cStack_39e7 != '\x01') || (local_39e8 == '\x01')) {
LAB_10002282:
                        local_6d8 = local_3bb0 + 0x3c;
                      }
                    }
                    else {
                      if (local_6f4 == 2) goto LAB_10002282;
                      if (local_240 != 0) {
                        puVar19 = local_350 + 6;
                        uVar18 = local_240;
                        do {
                          if (*puVar19 == local_860) {
                            *(undefined1 *)((int)puVar19 + -3) = 0;
                            *(bool *)((int)puVar19 + -2) = local_6f4 != 1;
                          }
                          puVar19 = puVar19 + 0x43;
                          uVar18 = uVar18 - 1;
                        } while (uVar18 != 0);
                      }
                      if (uStack_6fc != 0) {
                        iVar32 = 1;
                        dst_00 = local_3564;
                        do {
                          if (*(uint *)(dst_00 + 4) == local_860) {
                            thunk_memset(dst_00,0,0x168);
                            iVar32 = uStack_6fc - iVar32;
                            uStack_6fc = uStack_6fc - 1;
                            thunk_memmove(dst_00,dst_00 + 0x168,iVar32 * 0x168);
                            thunk_memset(local_3564 + uStack_6fc * 0x168,0,0x168);
                            break;
                          }
                          iVar37 = (1 - uStack_6fc) + iVar32;
                          iVar32 = iVar32 + 1;
                          dst_00 = dst_00 + 0x168;
                        } while (iVar37 != 1);
                      }
                      if (iVar11 == 1) {
                        if (local_864 != 2) goto LAB_1000226a;
                        local_6d4 = '\x01';
                      }
                      else {
                        pcVar10 = str_100103c6;
                        if (acStack_3b00[0] != '\0') {
                          pcVar10 = acStack_3b00;
                        }
                        thunk_snprintf(acStack_6d0,0x80,str_100103b6,local_6f0,
                                           pcVar10);
                        thunk_snprintf(acStack_3b80,0x80,&DAT_1001032f,acStack_6d0);
LAB_1000226a:
                        if (local_864 == 0) goto LAB_1000226e;
                      }
                    }
                    thunk_memset(&local_864,0,0x168);
                    if (local_238 == '\x01') {
                      if (local_240 == 0) {
                        uVar18 = 0;
                      }
                      else {
                        uVar16 = 0;
                        iVar11 = 0x1c;
                        uVar18 = local_240;
                        do {
                          puVar19 = local_350;
                          if (*(int *)((int)local_350 + iVar11 + -0x1c) == local_34c) {
                            if (((local_340 != 0) &&
                                (*(int *)((int)local_350 + iVar11 + -0x10) == local_340)) &&
                               (*(int *)((int)local_350 + iVar11 + -0x18) == local_348))
                            goto LAB_10002476;
                            if ((((*(char *)((int)local_350 + iVar11 + -8) == '\x01') &&
                                 (*(int *)((int)local_350 + iVar11 + -0x10) == 0)) &&
                                ((*(char *)((int)local_350 + iVar11 + -7) == '\0' &&
                                 ((*(char *)((int)local_350 + iVar11 + -6) == '\0' &&
                                  (cStack_338 == '\x01')))))) &&
                               ((*(int *)((int)local_350 + iVar11 + -0x14) == local_344 &&
                                (*(int *)((int)local_350 + iVar11 + -0xc) == local_33c)))) {
                              iVar32 = thunk_strcmp((char *)((int)local_350 + iVar11),
                                                          acStack_330);
                              if (iVar32 == 0) {
                                *(int *)((int)puVar19 + iVar11 + -0x10) = local_340;
                                goto LAB_10002476;
                              }
                              uVar18 = local_240;
                            }
                          }
                          uVar16 = uVar16 + 1;
                          iVar11 = iVar11 + 0x10c;
                        } while (uVar16 < uVar18);
                      }
                      if (uVar18 < local_23c) {
                        local_240 = uVar18;
                      }
                      else {
                        uVar18 = local_23c * 2;
                        if (local_23c == 0) {
                          uVar18 = 0x80;
                        }
                        if (((((0x10000 < uVar18 || uVar18 < local_23c) ||
                              (iVar11 = Ram00280800, iVar11 != 0x50414d57)) ||
                             (iVar11 = Ram00280804, iVar11 == 0)) ||
                            ((uVar16 = Ram00280808, uVar16 < 0xc ||
                             (uVar16 = Ram00280808, uVar16 < 0x58)))) ||
                           ((pcVar2 = (code *)UINT_00280854, pcVar2 == (code *)0x0 ||
                            (puVar19 = (*pcVar2)(local_350,uVar18 * 0x10c), puVar19 == (uint *)0x0))
                           )) {
                          thunk_snprintf(acStack_3b80,0x80,
                                             str_100103f8);
                          goto LAB_10002476;
                        }
                        local_350 = puVar19;
                        local_23c = uVar18;
                      }
                      iVar11 = local_240 * 0x43;
                      local_240 = local_240 + 1;
                      thunk_memcpy(local_350 + iVar11,&local_34c,0x10c);
                    }
                  }
                  goto LAB_10002476;
                }
                bVar6 = 0;
                goto LAB_100024e1;
              }
            }
          }
LAB_1000569e:
          if ((((cStack_3ba6 == '\x01') && (iVar31 = Ram00280800, iVar31 == 0x50414d57)) &&
              (iVar31 = Ram00280804, iVar31 != 0)) &&
             (((uVar26 = Ram00280808, 0xb < uVar26 && (uVar26 = Ram00280808, 0x24f < uVar26)) &&
              (_DAT_00280a4c != (code *)0x0)))) {
            (*_DAT_00280a4c)();
          }
          if (local_3ba0 != 0) {
            do {
              if (local_3b9c != 0) break;
              recovered_10006d90((int)&local_3f98);
              iVar31 = Ram00280800;
              if (((iVar31 == 0x50414d57) && (iVar31 = Ram00280804, iVar31 != 0)) &&
                 ((uVar26 = Ram00280808, 0xb < uVar26 &&
                  ((uVar26 = Ram00280808, 0x9f < uVar26 &&
                   (pcVar2 = (code *)UINT_0028089c, pcVar2 != (code *)0x0)))))) {
                (*pcVar2)();
              }
            } while (local_3ba0 != 0);
          }
          terror_ui_scrollbar_release(auStack_3c50);
          if (local_3f98 != 0) {
            thunk_terror_ui_window_close(&local_3f98);
          }
          if (((((local_3c24 != (void *)0x0) && (iVar31 = Ram00280800, iVar31 == 0x50414d57)) &&
               (iVar31 = Ram00280804, iVar31 != 0)) &&
              ((uVar26 = Ram00280808, 0xb < uVar26 && (uVar26 = Ram00280808, 0x53 < uVar26)))) &&
             (pcVar2 = (code *)UINT_00280850, pcVar2 != (code *)0x0)) {
            (*pcVar2)(local_3c24);
          }
          iVar31 = Ram00280800;
          if (((iVar31 == 0x50414d57) && (iVar31 = Ram00280804, iVar31 != 0)) &&
             ((uVar26 = Ram00280808, 0xb < uVar26 &&
              ((uVar26 = Ram00280808, 0x53 < uVar26 &&
               (pcVar2 = (code *)UINT_00280850, pcVar2 != (code *)0x0)))))) {
            (*pcVar2)(pvStack_3bd8);
          }
          iVar31 = Ram00280800;
          if ((((iVar31 == 0x50414d57) && (iVar31 = Ram00280804, iVar31 != 0)) &&
              (uVar26 = Ram00280808, 0xb < uVar26)) &&
             ((uVar26 = Ram00280808, 0x53 < uVar26 &&
              (pcVar2 = (code *)UINT_00280850, pcVar2 != (code *)0x0)))) {
            (*pcVar2)(local_3c20);
          }
          iVar31 = Ram00280800;
          if (((iVar31 == 0x50414d57) && (iVar31 = Ram00280804, iVar31 != 0)) &&
             ((uVar26 = Ram00280808, 0xb < uVar26 &&
              ((uVar26 = Ram00280808, 0x53 < uVar26 &&
               (pcVar2 = (code *)UINT_00280850, pcVar2 != (code *)0x0)))))) {
            (*pcVar2)(local_3bec);
          }
          iVar31 = Ram00280800;
          if ((((iVar31 == 0x50414d57) && (iVar31 = Ram00280804, iVar31 != 0)) &&
              (uVar26 = Ram00280808, 0xb < uVar26)) &&
             ((uVar26 = Ram00280808, 0x53 < uVar26 &&
              (pcVar2 = (code *)UINT_00280850, pcVar2 != (code *)0x0)))) {
            (*pcVar2)(local_3b90);
          }
          iVar31 = Ram00280800;
          if (((iVar31 == 0x50414d57) && (iVar31 = Ram00280804, iVar31 != 0)) &&
             ((uVar26 = Ram00280808, 0xb < uVar26 &&
              ((uVar26 = Ram00280808, 0x53 < uVar26 &&
               (pcVar2 = (code *)UINT_00280850, pcVar2 != (code *)0x0)))))) {
            (*pcVar2)(local_3b88);
          }
          local_3b88 = (byte *)0x0;
          local_3b90 = (undefined1 *)0x0;
          local_3bec = (byte *)0x0;
          local_3be8 = 0;
          local_3be4 = 0;
          local_3b84 = 0;
          local_3b8c = 0;
          if (local_350 == (uint *)0x0) {
            return 1;
          }
          iVar31 = Ram00280800;
          if (iVar31 != 0x50414d57) {
            return 1;
          }
          iVar31 = Ram00280804;
          if (iVar31 == 0) {
            return 1;
          }
          uVar26 = Ram00280808;
          if (uVar26 < 0xc) {
            return 1;
          }
          uVar26 = Ram00280808;
          if (uVar26 < 0x54) {
            return 1;
          }
          pcVar2 = (code *)UINT_00280850;
          if (pcVar2 == (code *)0x0) {
            return 1;
          }
          (*pcVar2)(local_350);
          return 1;
        }
        thunk_terror_ui_window_close(&local_3f98);
      }
      recovered_10009070((int)&local_3f98);
      goto LAB_10001429;
    }
  }
LAB_10001303:
  iVar31 = Ram00280800;
  if ((((iVar31 == 0x50414d57) && (iVar31 = Ram00280804, iVar31 != 0)) &&
      (uVar26 = Ram00280808, 0xb < uVar26)) &&
     ((uVar26 = Ram00280808, 0x53 < uVar26 &&
      (pcVar2 = (code *)UINT_00280850, pcVar2 != (code *)0x0)))) {
    (*pcVar2)(local_3bec);
  }
  iVar31 = Ram00280800;
  if (((iVar31 == 0x50414d57) && (iVar31 = Ram00280804, iVar31 != 0)) &&
     ((uVar26 = Ram00280808, 0xb < uVar26 &&
      ((uVar26 = Ram00280808, 0x53 < uVar26 &&
       (pcVar2 = (code *)UINT_00280850, pcVar2 != (code *)0x0)))))) {
    (*pcVar2)(local_3b90);
  }
  iVar31 = Ram00280800;
  if ((((iVar31 == 0x50414d57) && (iVar31 = Ram00280804, iVar31 != 0)) &&
      (uVar26 = Ram00280808, 0xb < uVar26)) &&
     ((uVar26 = Ram00280808, 0x53 < uVar26 &&
      (pcVar2 = (code *)UINT_00280850, pcVar2 != (code *)0x0)))) {
    (*pcVar2)(local_3b88);
  }
  local_3b88 = (byte *)0x0;
  local_3b90 = (undefined1 *)0x0;
  local_3bec = (byte *)0x0;
  local_3be8 = 0;
  local_3be4 = 0;
  local_3b84 = 0;
  local_3b8c = 0;
LAB_10001429:
  iVar31 = Ram00280800;
  if (((iVar31 == 0x50414d57) && (iVar31 = Ram00280804, iVar31 != 0)) &&
     ((uVar26 = Ram00280808, 0xb < uVar26 &&
      ((uVar26 = Ram00280808, 0x53 < uVar26 &&
       (pcVar2 = (code *)UINT_00280850, pcVar2 != (code *)0x0)))))) {
    (*pcVar2)(local_3c24);
  }
  iVar31 = Ram00280800;
  if ((((iVar31 == 0x50414d57) && (iVar31 = Ram00280804, iVar31 != 0)) &&
      (uVar26 = Ram00280808, 0xb < uVar26)) &&
     ((uVar26 = Ram00280808, 0x53 < uVar26 &&
      (pcVar2 = (code *)UINT_00280850, pcVar2 != (code *)0x0)))) {
    (*pcVar2)(local_3c20);
  }
  local_3c24 = (void *)0x0;
  iVar31 = Ram00280800;
  if (((iVar31 == 0x50414d57) && (iVar31 = Ram00280804, iVar31 != 0)) &&
     ((uVar26 = Ram00280808, 0xb < uVar26 &&
      ((uVar26 = Ram00280808, 0x2b < uVar26 &&
       (pcVar2 = (code *)UINT_00280828, pcVar2 != (code *)0x0)))))) {
    (*pcVar2)(str_100100b6);
  }
  return 0;
LAB_10002112:
  if (bVar40) {
    recovered_10009300((int)&local_3f98,pbVar12,(int)pbVar34 - (int)pbVar12,'\x01');
  }
LAB_1000212d:
  iVar11 = Ram00280800;
  if (((iVar11 == 0x50414d57) && (iVar11 = Ram00280804, iVar11 != 0)) &&
     ((uVar18 = Ram00280808, 0xb < uVar18 &&
      ((uVar18 = Ram00280808, 0x53 < uVar18 &&
       (pcVar2 = (code *)UINT_00280850, pcVar2 != (code *)0x0)))))) {
    (*pcVar2)(dst);
  }
LAB_10002476:
  *local_3b88 = 0;
  *local_3b90 = 0;
  local_3b94 = 0;
  local_3b9c = 0;
  local_3ba0 = 0;
  bVar6 = 1;
  if (iVar31 <= (int)uVar27) {
    local_3bb4 = recovered_100091f0((int)&local_3f98);
  }
LAB_100024e1:
  bVar5 = (byte)puVar17 | bVar6 | bVar5;
  PF_PART1(local_427c, 0) = bVar5;
  if (DAT_1001108c == 0) {
    local_4210 = 0;
    local_420c = (char *)0x0;
    local_4208 = 0;
    local_4204 = (char *)0x0;
    local_4200 = 0;
    local_41fc = (char *)0x0;
    iVar31 = Ram00280800;
    if (((iVar31 != 0x50414d57) || (iVar31 = Ram00280804, iVar31 == 0)) ||
       ((uVar27 = Ram00280808, uVar27 < 0xc ||
        (((uVar27 = Ram00280808, uVar27 < 0x208 || (_DAT_00280a04 == (code *)0x0)) ||
         (iVar31 = (*_DAT_00280a04)(str_100100d6,&local_4210), iVar31 == 0)))))) goto LAB_100025d8;
    if ((local_4210 & 0xfffffffb) == 1) {
      PF_PART1(local_427c, 0) = 1;
      if (local_420c == (char *)0x0) goto LAB_100025d8;
    }
    else {
      if (local_4204 != (char *)0x0 && local_4210 == 3) {
        switch((uintptr_t)(*local_4204)) {
        case 'T':
        case 'Y':
        case 't':
        case 'y':
LAB_100025cf:
          PF_PART1(local_427c, 0) = 1;
          goto LAB_100025dc;
        case 'U':
        case 'V':
        case 'W':
        case 'X':
        case 'Z':
        case '[':
        case '\\':
        case ']':
        case '^':
        case '_':
        case '`':
        case 'a':
        case 'b':
        case 'c':
        case 'd':
        case 'e':
        case 'f':
        case 'g':
        case 'h':
        case 'i':
        case 'j':
        case 'k':
        case 'l':
        case 'm':
        case 'n':
        case 'o':
        case 'p':
        case 'q':
        case 'r':
        case 's':
        case 'u':
        case 'v':
        case 'w':
        case 'x':
          break;
        default:
          if (*local_4204 == '1') goto LAB_100025cf;
        }
      }
LAB_100025d8:
      PF_PART1(local_427c, 0) = bVar5;
    }
LAB_100025dc:
    if (DAT_1001108c != 0) goto LAB_100025e9;
  }
  else {
LAB_100025e9:
    if (local_3ba0 == 0) {
      thunk_memset(&local_864,0,0x168);
      puVar19 = &DAT_10011090;
      if (local_1bc != 0) {
        puVar19 = auStack_1b8;
      }
      local_6f0 = *puVar19;
      local_6ec = iStack_39e0;
      local_6e8 = uStack_1c4;
      local_6dc = local_6e0;
      local_6e4 = local_3bb0;
      bStack_6d2 = true;
      if ((local_6d4 == '\0') && (local_6f0 != 0)) {
        bStack_6d2 = (local_3bb0 * -0x11111111 >> 2 | local_3bb0 * -0x40000000) < 0x4444445;
      }
      local_6f4 = 0;
      iVar31 = local_3bb0 - local_6d8;
      uVar18 = 0;
      uVar27 = uStack_6fc;
      if ((local_1bc & uStack_6fc != 0) == 1) {
        uVar18 = 0;
        pcVar10 = acStack_354f;
        do {
          if (*(int *)(pcVar10 + -0x15) == 1) {
            iVar11 = thunk_strcmp(pcVar10,str_10010418);
            uVar27 = uStack_6fc;
            if (iVar11 == 0) break;
          }
          uVar18 = uVar18 + 1;
          pcVar10 = pcVar10 + 0x168;
        } while (uVar18 < uVar27);
      }
      if (uVar18 < uVar27) {
        iVar11 = thunk_strcmp(acStack_354f + uVar18 * 0x168,str_10010418);
        bVar40 = iVar11 == 0;
        uVar27 = uStack_6fc;
      }
      else {
        bVar40 = false;
      }
      if ((uVar27 <= uVar18) || (!(bool)(-1 < iVar31 | bVar40))) {
        if (iVar31 < 0) goto LAB_100028f9;
        if (local_6d4 == '\0') {
          __atomic_thread_fence(__ATOMIC_SEQ_CST);
          if (local_1c == 0) goto LAB_10002833;
          bStack_39e5 = (local_3bb0 * -0x11111111 >> 2 | local_3bb0 * -0x40000000) < 0x4444445;
          if (!bStack_39e5) {
            if ((local_3bb0 & 3) == 0) {
              uStack_18 = 1;
              goto LAB_10002849;
            }
            goto LAB_100028f9;
          }
        }
        else {
LAB_10002833:
          bStack_39e5 = true;
        }
        uStack_18 = 0;
      }
      else {
        thunk_memcpy(&local_864,local_3564 + uVar18 * 0x168,0x168);
        local_6f0 = local_85c;
        local_6ec = local_858;
        local_6e8 = uStack_854;
        bStack_6d2 = bStack_6d2 | local_85c == 0;
        bStack_39e5 = false;
        uStack_18 = 0;
      }
LAB_10002849:
      local_6d4 = '\0';
      local_3b9c = 0;
      local_3ba0 = 1;
      pcVar10 = str_100100e6;
      if (DAT_1001108c == 0) {
        pcVar10 = str_10010bc0;
      }
      iVar31 = Ram00280800;
      if ((((iVar31 == 0x50414d57) && (iVar31 = Ram00280804, iVar31 != 0)) &&
          (uVar27 = Ram00280808, 0xb < uVar27)) &&
         ((uVar27 = Ram00280808, 0x97 < uVar27 &&
          (pcVar2 = (code *)UINT_00280894, pcVar2 != (code *)0x0)))) {
        local_3b94 = (*pcVar2)(recovered_10006f50,&local_3f98,pcVar10);
        if (local_3b94 != 0) goto LAB_100028f9;
      }
      else {
        local_3b94 = 0;
      }
      local_3ba0 = 0;
      local_6d8 = local_3bb0 + 0x3c;
    }
  }
LAB_100028f9:
  pcVar28 = local_3c00;
  iVar31 = local_3c04;
  pcVar10 = local_3c08;
  uVar27 = local_3c0c;
  local_3c54 = '\0';
  thunk_memset(&local_4210,0,0x30);
  uVar18 = terror_ui_window_pointer_state_ex(&local_3f98,&local_4210);
  if (uVar18 == 0) {
    local_4264 = DAT_1001108c;
  }
  else {
    if (local_3bfc == '\0') {
      local_3bfc = '\x01';
      if (local_3f94 == 0) {
        local_3c08 = (char *)0x17c;
      }
      else {
        local_3c08 = (char *)((int)local_3f94 / 2);
      }
      if (local_3f90 == 0) {
        local_3c04 = 200;
      }
      else {
        local_3c04 = (int)local_3f90 / 2;
      }
    }
    local_4264 = DAT_1001108c;
    if (local_3bf0 < 1) {
      if (DAT_1001108c != 0) goto LAB_10002a16;
      iVar11 = local_3f90 - 10;
      if (local_3f90 == 0) {
        iVar11 = 0x186;
      }
      iVar37 = 10;
      iVar32 = 0x20;
      local_4264 = 0;
    }
    else if (DAT_1001108c == 0) {
      iVar11 = local_3f90 - 10;
      if (local_3f90 == 0) {
        iVar11 = 0x186;
      }
      iVar32 = local_3bf0 + 0x16;
      iVar37 = 10;
      local_4264 = 0;
    }
    else {
LAB_10002a16:
      iVar37 = local_3bf0 + 0x4c;
      iVar32 = local_3bf0 + 0xc;
      iVar11 = local_3bf0 * 2 + 4;
      if (local_3bf0 < 1) {
        iVar37 = 0x56;
        iVar11 = 0x18;
        iVar32 = 0x16;
      }
      if (0x207 < (int)local_3f94) {
        iVar37 = 0x2e;
      }
      if (local_3f94 == 0) {
        iVar37 = 0x2e;
      }
      iVar37 = iVar37 + iVar11;
      iVar11 = local_3f90 - 10;
      if (local_3f90 == 0) {
        iVar11 = 0x186;
      }
      iVar32 = iVar32 + iVar37;
    }
    iVar11 = (iVar11 - iVar32) + -8;
    if (local_3bf0 < 1) {
      iVar32 = 10;
      if (iVar11 < 0x10) goto LAB_10002aab;
    }
    else {
      iVar32 = local_3bf0;
      if (iVar11 < local_3bf0 + 6) {
LAB_10002aab:
        iVar11 = iVar32 + 6;
      }
    }
    local_3c54 = false;
    if ((local_4210 & 2) != 0) {
      local_3c54 = iStack_41f8 < iVar11 + iVar37 &&
                   (local_41fc + -10 < (char *)0xc && iVar37 <= iStack_41f8);
    }
    local_3c00 = (char *)0x0;
    if ((local_4210 & 4) != 0) {
      local_3c08 = (char *)(local_3f94 - 1);
      if (local_3f94 == 0) {
        local_3c08 = (char *)0x2f7;
      }
      if ((int)local_41fc < (int)local_3c08) {
        local_3c08 = local_41fc;
      }
      if ((int)local_41fc < 0) {
        local_3c08 = (char *)0x0;
      }
      local_3c04 = local_3f90 - 1;
      if (local_3f90 == 0) {
        local_3c04 = 399;
      }
      if (iStack_41f8 < local_3c04) {
        local_3c04 = iStack_41f8;
      }
      if (iStack_41f8 < 0) {
        local_3c04 = 0;
      }
      local_3c00 = local_420c;
    }
  }
  uVar27 = uVar27 & 6;
  if (local_4264 == 0) {
    if (uVar27 != 2) goto LAB_10002d03;
    local_4210 = 0;
    local_420c = (char *)0x0;
    local_4208 = 0;
    local_4204 = (char *)0x0;
    local_4200 = 0;
    local_41fc = (char *)0x0;
    iVar31 = Ram00280800;
    if (((iVar31 != 0x50414d57) || (iVar31 = Ram00280804, iVar31 == 0)) ||
       ((uVar18 = Ram00280808, uVar18 < 0xc ||
        (((uVar18 = Ram00280808, uVar18 < 0x208 || (_DAT_00280a04 == (code *)0x0)) ||
         (iVar31 = (*_DAT_00280a04)(str_100100d6,&local_4210), iVar31 == 0)))))) goto LAB_10002d1a;
    if ((local_4210 & 0xfffffffb) == 1) {
      if (local_420c == (char *)0x0) goto LAB_10002d1e;
      goto LAB_100031df;
    }
    if (local_4204 != (char *)0x0 && local_4210 == 3) {
      switch((uintptr_t)(*local_4204)) {
      case 'T':
      case 'Y':
      case 't':
      case 'y':
LAB_10002d03:
        goto LAB_100031df;
      case 'U':
      case 'V':
      case 'W':
      case 'X':
      case 'Z':
      case '[':
      case '\\':
      case ']':
      case '^':
      case '_':
      case '`':
      case 'a':
      case 'b':
      case 'c':
      case 'd':
      case 'e':
      case 'f':
      case 'g':
      case 'h':
      case 'i':
      case 'j':
      case 'k':
      case 'l':
      case 'm':
      case 'n':
      case 'o':
      case 'p':
      case 'q':
      case 'r':
      case 's':
      case 'u':
      case 'v':
      case 'w':
      case 'x':
        break;
      default:
        if (*local_4204 == '1') goto LAB_10002d03;
      }
    }
LAB_10002d1a:
LAB_10002d1e:
    iVar31 = 0;
    bVar5 = 0;
    do {
      iVar11 = Ram00280800;
      bVar6 = bVar5;
      if ((((iVar11 != 0x50414d57) || (iVar11 = Ram00280804, iVar11 == 0)) ||
          ((uVar18 = Ram00280808, uVar18 < 0xc ||
           ((uVar18 = Ram00280808, uVar18 < 0x30 ||
            (pcVar2 = (code *)UINT_0028082c, pcVar2 == (code *)0x0)))))) ||
         (uVar18 = (*pcVar2)(), uVar18 == 0)) break;
      uVar16 = uVar18 >> 8 & 0xff;
      if ((uVar18 & 0x800000ff) != 0x80000000 || uVar16 != 0) {
        uVar24 = uVar18 & 0xff;
        if ((uVar18 & 0x40000) == 0) {
          if (DAT_1001108c != 0) {
            bVar40 = recovered_1000c280((int)&local_3f98,uVar24,uVar16);
            bVar6 = 1;
            if (bVar40) goto LAB_10002d99;
          }
          if ((uVar18 & 0x20000) == 0) {
            bVar30 = (byte)uVar18;
            if (uVar24 - 0x20 < 0x5f) {
              bVar6 = bVar5;
              if (local_3be8 < 0xfffffffe) {
                uVar18 = local_3be8 + 2;
                if (local_3be4 < uVar18 || local_3bec == (byte *)0x0) {
                  uVar14 = local_3be4;
                  if (local_3be4 == 0) {
                    uVar14 = 0x40;
                  }
                  if (uVar14 < uVar18) {
                    do {
                      bVar40 = (int)uVar14 < 0;
                      uVar14 = (uintptr_t)uVar14 * 2;
                      if (bVar40) {
                        uVar14 = uVar18;
                      }
                    } while (uVar14 < uVar18);
                  }
                  iVar11 = Ram00280800;
                  if (iVar11 == 0x50414d57) {
                    iVar11 = Ram00280804;
                    if (iVar11 != 0) {
                      uVar18 = Ram00280808;
                      if (0xb < uVar18) {
                        uVar18 = Ram00280808;
                        if (0x57 < uVar18) {
                          pcVar2 = (code *)UINT_00280854;
                          if (pcVar2 != (code *)0x0) {
                            pbVar12 = (*pcVar2)(local_3bec,uVar14);
                            if (pbVar12 != (byte *)0x0) {
                              if (local_3bec == (byte *)0x0) {
                                *pbVar12 = 0;
                              }
                              local_3bec = pbVar12;
                              local_3be4 = uVar14;
                              goto LAB_10003181;
                            }
                          }
                        }
                      }
                    }
                  }
                }
                else {
LAB_10003181:
                  local_3bec[local_3be8] = bVar30;
                  local_3bec[local_3be8 + 1] = 0;
                  local_3be8 = local_3be8 + 1;
                  bVar6 = 1;
                }
              }
            }
            else if (((uVar16 == 0xe) || (bVar30 == 0x7f)) || ((uVar18 & 0xff) == 8)) {
              bVar6 = 1;
              if (local_3be8 != 0) {
                do {
                  local_3be8 = local_3be8 - 1;
                  if (local_3be8 == 0) break;
                  uVar18 = CONCAT11(local_3bec[local_3be8],bVar6) & 0xffffc0ff;
                  bVar6 = (byte)uVar18;
                } while (SBORROW1('\0',(char)(uVar18 >> 8)));
                local_3bec[local_3be8] = 0;
              }
            }
            else {
              if (((uVar16 != 0x1c) && (bVar30 != 0xd)) && ((uVar18 & 0xff) != 10)) {
                if (uVar24 != 0x1b) {
                  bVar6 = bVar5;
                  if (uVar16 != 1) goto LAB_10002d99;
                }
                cStack_3ba7 = '\0';
                PF_PART1(local_427c, 0) = 1;
                goto LAB_100031df;
              }
              uVar18 = recovered_10005b30(&local_3f98,local_3bec);
              bVar6 = 1;
              if ((char)uVar18 != '\0') {
                if (local_3bec != (byte *)0x0) {
                  *local_3bec = 0;
                }
                local_3be8 = 0;
              }
            }
          }
          else {
            bVar6 = bVar5;
            if ((cStack_3ba6 == '\x01') && (local_3ba0 != 0)) {
              if (((uVar18 & 0xbf) == 3 || uVar24 == 99) || uVar16 == 0x2e) {
                iVar11 = Ram00280800;
                if ((((iVar11 == 0x50414d57) && (iVar11 = Ram00280804, iVar11 != 0)) &&
                    (uVar18 = Ram00280808, 0xb < uVar18)) &&
                   ((uVar18 = Ram00280808, 0x24f < uVar18 && (_DAT_00280a4c != (code *)0x0)))) {
                  (*_DAT_00280a4c)();
                }
                recovered_1000a3d0((int)&local_3f98,(byte *)((uintptr_t)pf_module_state + 0xd2eU));
                if (local_3bec != (byte *)0x0) {
                  *local_3bec = 0;
                }
                local_3be8 = 0;
                bVar6 = 1;
              }
            }
          }
        }
        else if (((uVar18 & 0xbf) == 3 || uVar24 == 99) || uVar16 == 0x2e) {
          uVar13 = recovered_1000ae50((int)&local_3f98);
          bVar6 = (byte)uVar13 | bVar5;
        }
        else if (((uVar18 & 0xbf) == 0x16 || uVar24 == 0x76) || uVar16 == 0x2f) {
          if ((DAT_1001108c == 0) || (iStack_234 == 0)) {
            uVar13 = recovered_1000b0e0((int)&local_3f98);
            bVar6 = 1;
            if ((char)uVar13 == '\0') {
              bVar6 = bVar5;
            }
          }
          else {
            iVar11 = Ram00280800;
            if ((((iVar11 == 0x50414d57) && (iVar11 = Ram00280804, iVar11 != 0)) &&
                (uVar18 = Ram00280808, 0xb < uVar18)) &&
               ((uVar18 = Ram00280808, 0x187 < uVar18 &&
                (pcVar2 = (code *)UINT_00280984, pcVar2 != (code *)0x0)))) {
              uVar16 = (*pcVar2)((char *)&local_4210,0x42);
              uVar18 = 0x42;
              if (uVar16 < 0x42) {
                uVar18 = uVar16;
              }
              if (uVar16 != 0) {
                uVar16 = 0;
                do {
                  bVar5 = *(byte *)((int)&local_4210 + uVar16);
                  if (bVar5 == 0) break;
                  if (0x1f < bVar5) {
                    recovered_1000c280((int)&local_3f98,(uint)bVar5,0);
                  }
                  uVar16 = uVar16 + 1;
                } while (uVar18 != uVar16);
                bVar6 = 1;
              }
            }
          }
        }
      }
LAB_10002d99:
      iVar31 = iVar31 + 1;
      bVar5 = bVar6;
    } while (iVar31 != 0x18);
    PF_PART1(local_427c, 0) = (byte)local_427c | bVar6;
  }
  else {
    PF_PART1(local_427c, 0) =
         (byte)local_427c |
         (pcVar28 != local_3c00 || (iVar31 != local_3c04 || pcVar10 != local_3c08));
    if (uVar27 == 2) goto LAB_10002d1e;
  }
LAB_100031df:
  iVar31 = local_3c04;
  pcVar10 = local_3c08;
  PF_PART1(local_427c, 0) = (byte)local_427c & 1;
  uVar18 = (uint)local_3c00 & 1;
  if (uVar18 == 0) {
    bStack_3bfa = 0;
  }
  else {
    if (cStack_3bfb == '\0') {
      if (DAT_1001108c != 0) {
        thunk_memset(&local_4210,0,0x2c);
        local_4210 = 1;
        local_420c = pcVar10;
        local_4208 = iVar31;
        local_4200 = 1;
        local_4204 = (char *)0x1;
        local_4228 = &local_4210;
        local_4224 = local_4224 & 0xffffff00;
        local_422c = &local_3f98;
        recovered_1000c6d0(&local_422c);
        PF_PART1(local_427c, 0) = (byte)local_427c | (byte)local_4224 & 1;
        if (DAT_1001108c != 0) goto LAB_10003654;
      }
      iVar11 = local_3bf0 + 0x16;
      iVar32 = local_3f90 - 10;
      if (local_3f90 == 0) {
        iVar32 = 0x186;
      }
      if (local_3bf0 < 1) {
        iVar11 = 0x20;
      }
      uVar16 = (iVar32 - iVar11) - 8;
      if (local_3bf0 < 1) {
        iVar11 = 10;
        if ((int)uVar16 < 0x10) goto LAB_100032e7;
      }
      else {
        iVar11 = local_3bf0;
        if ((int)uVar16 < local_3bf0 + 6) {
LAB_100032e7:
          uVar16 = iVar11 + 6;
        }
      }
      recovered_1000f7e0(&local_422c,(int)&local_3f98);
      uVar24 = local_3bb4;
      if (local_3bf0 < 1) {
        iVar11 = 0x16;
      }
      else {
        iVar11 = local_3bf0 + 0xc;
      }
      if (DAT_1001108c == 0) {
        iVar32 = 10;
        bVar40 = true;
      }
      else {
        iVar32 = local_3bf0 + 0x4c;
        iVar37 = local_3bf0 * 2 + 4;
        if (local_3bf0 < 1) {
          iVar32 = 0x56;
          iVar37 = 0x18;
        }
        if (0x207 < (int)local_3f94) {
          iVar32 = 0x2e;
        }
        if (local_3f94 == 0) {
          iVar32 = 0x2e;
        }
        iVar32 = iVar32 + iVar37;
        bVar40 = false;
      }
      iVar37 = local_3f90 - 10;
      if (local_3f90 == 0) {
        iVar37 = 0x186;
      }
      iVar11 = (iVar37 + -8) - (iVar11 + iVar32);
      if (local_3bf0 < 1) {
        iVar21 = 10;
        if (iVar11 < 0x10) goto LAB_100033b3;
      }
      else {
        iVar21 = local_3bf0;
        if (iVar11 < local_3bf0 + 6) {
LAB_100033b3:
          iVar11 = iVar21 + 6;
        }
      }
      pcVar28 = pcVar10 + -10;
      if (((pcVar28 < (char *)0xc) && (iVar32 + -0x1e + iVar11 <= iVar31)) &&
         (iVar31 < iVar32 + -0x10 + iVar11)) {
        uVar16 = local_3bb4 - 1;
        local_3bb4 = uVar16;
        local_3bb4 = recovered_100091f0((int)&local_3f98);
        if ((int)uVar16 < (int)local_3bb4) {
          local_3bb4 = uVar16;
        }
        if ((int)uVar24 < 1) {
          local_3bb4 = 0;
        }
      }
      else {
        if (local_3bf0 < 1) {
          iVar11 = 0x16;
        }
        else {
          iVar11 = local_3bf0 + 0xc;
        }
        if (bVar40) {
          iVar11 = iVar11 + 10;
          iVar32 = 10;
        }
        else {
          iVar32 = local_3bf0 + 0x4c;
          iVar21 = local_3bf0 * 2 + 4;
          if (local_3bf0 < 1) {
            iVar32 = 0x56;
            iVar21 = 0x18;
          }
          if (0x207 < (int)local_3f94) {
            iVar32 = 0x2e;
          }
          if (local_3f94 == 0) {
            iVar32 = 0x2e;
          }
          iVar32 = iVar32 + iVar21;
          iVar11 = iVar11 + iVar32;
        }
        iVar21 = (iVar37 - iVar11) + -8;
        if (local_3bf0 < 1) {
          iVar33 = 10;
          bVar40 = SBORROW4(iVar21,0x10);
          iVar11 = (iVar37 - iVar11) + -0x18;
        }
        else {
          bVar40 = SBORROW4(iVar21,local_3bf0 + 6);
          iVar11 = iVar21 - (local_3bf0 + 6);
          iVar33 = local_3bf0;
        }
        if (bVar40 != iVar11 < 0) {
          iVar21 = iVar33 + 6;
        }
        if (((pcVar28 < (char *)0xc) && (iVar31 < iVar21 + iVar32)) &&
           (iVar21 + -0xe + iVar32 <= iVar31)) {
          uVar16 = local_3bb4 + 1;
          local_3bb4 = uVar16;
          local_3bb4 = recovered_100091f0((int)&local_3f98);
          if ((int)uVar16 < (int)local_3bb4) {
            local_3bb4 = uVar16;
          }
          if ((int)uVar24 < -1) {
            local_3bb4 = 0;
          }
        }
        else {
          iVar11 = uVar16 - 0x18;
          if (uVar16 < 0x34) {
            iVar11 = 0x1c;
          }
          if ((((char *)0xb < pcVar28) || (iVar31 < 10)) || (iVar11 <= iVar31)) goto LAB_10003654;
          if ((((int)pcVar10 < (int)local_422c) || (iVar31 < (int)local_4228)) ||
             (((int)((int)local_422c + local_4224) <= (int)pcVar10 ||
              ((int)local_4228 + local_4220 <= iVar31)))) {
            recovered_10009a90(&local_4210,(int)&local_3f98);
            pcVar10 = local_420c;
            pcVar28 = local_4204 + -0x22;
            if ((int)(local_4204 + -0x1e) < 0x16) {
              pcVar28 = (char *)0x12;
            }
            recovered_1000f7e0(&local_4210,(int)&local_3f98);
            uVar20 = recovered_100091f0((int)&local_3f98);
            uVar16 = 0;
            if ((0 < (int)uVar20) && (0 < (int)pcVar28 - (int)local_4204)) {
              uVar16 = (iVar31 - (int)pcVar10) - (int)local_4204 / 2;
              lVar41 = (ulonglong)uVar16 * (ulonglong)uVar20;
              lVar41 = thunk___divdi3(CONCAT44(((int)uVar16 >> 0x1f) * uVar20 +
                                                   (int)((ulonglong)lVar41 >> 0x20),(int)lVar41),
                                          (ulonglong)(uint)((int)pcVar28 - (int)local_4204));
              iVar32 = (int)((ulonglong)lVar41 >> 0x20);
              uVar16 = (uint)(uVar20 < (uint)lVar41);
              iVar11 = -iVar32;
              uVar35 = (uint)lVar41;
              if ((SBORROW4(0,iVar32) != SBORROW4(iVar11,uVar16)) != (int)(iVar11 - uVar16) < 0) {
                uVar35 = uVar20;
              }
              if (lVar41 < 0) {
                uVar35 = 0;
              }
              local_3bb4 = uVar35;
              uVar16 = recovered_100091f0((int)&local_3f98);
              if ((int)uVar35 < (int)uVar16) {
                uVar16 = uVar35;
              }
              if ((int)uVar35 < 0) {
                uVar16 = 0;
              }
            }
            local_3bb4 = uVar16;
          }
          recovered_1000f7e0(&local_4210,(int)&local_3f98);
          bStack_3bfa = 1;
          local_3bf8 = iVar31 - (int)local_420c;
        }
      }
      if (local_3bb4 != uVar24) {
        PF_PART1(local_427c, 0) = 1;
      }
    }
LAB_10003654:
    if (bStack_3bfa == 1) {
      if (local_3bf0 < 1) {
        if (DAT_1001108c == 0) {
          local_4270 = 0x16;
          goto LAB_100036dc;
        }
        local_4270 = 0x16;
LAB_10003694:
        iVar32 = local_3bf0 * -2 + -4;
        iVar11 = -0x4c - local_3bf0;
        if (local_3bf0 < 1) {
          iVar11 = -0x56;
          iVar32 = -0x18;
        }
        if (0x207 < (int)local_3f94) {
          iVar11 = -0x2e;
        }
        if (local_3f94 == 0) {
          iVar11 = -0x2e;
        }
        iVar11 = iVar11 + iVar32;
      }
      else {
        local_4270 = local_3bf0 + 0xc;
        if (DAT_1001108c != 0) goto LAB_10003694;
LAB_100036dc:
        iVar11 = -10;
      }
      iVar32 = local_3f90 - 10;
      if (local_3f90 == 0) {
        iVar32 = 0x186;
      }
      uVar16 = (iVar11 - local_4270) + -8 + iVar32;
      if (local_3bf0 < 1) {
        iVar32 = 10;
        if ((int)uVar16 < 0x10) goto LAB_1000370e;
      }
      else {
        iVar32 = local_3bf0;
        if ((int)uVar16 < local_3bf0 + 6) {
LAB_1000370e:
          uVar16 = iVar32 + 6;
        }
      }
      iVar32 = uVar16 - 0x22;
      if (uVar16 < 0x34) {
        iVar32 = 0x12;
      }
      recovered_1000f7e0(&local_4210,(int)&local_3f98);
      uVar24 = recovered_100091f0((int)&local_3f98);
      uVar16 = local_3bb4;
      if (((bStack_3bfa == 1) && (0 < (int)uVar24)) && (0 < iVar32 - (int)local_4204)) {
        uVar20 = (iVar11 + iVar31) - local_3bf8;
        lVar41 = (ulonglong)uVar20 * (ulonglong)uVar24;
        lVar41 = thunk___divdi3(CONCAT44(((int)uVar20 >> 0x1f) * uVar24 +
                                             (int)((ulonglong)lVar41 >> 0x20),(int)lVar41),
                                    (ulonglong)(uint)(iVar32 - (int)local_4204));
        iVar11 = (int)((ulonglong)lVar41 >> 0x20);
        uVar20 = (uint)(uVar24 < (uint)lVar41);
        iVar31 = -iVar11;
        uVar35 = (uint)lVar41;
        if ((SBORROW4(0,iVar11) != SBORROW4(iVar31,uVar20)) != (int)(iVar31 - uVar20) < 0) {
          uVar35 = uVar24;
        }
        if (lVar41 < 0) {
          uVar35 = 0;
        }
        local_3bb4 = uVar35;
        local_3bb4 = recovered_100091f0((int)&local_3f98);
        if ((int)uVar35 < (int)local_3bb4) {
          local_3bb4 = uVar35;
        }
        if ((int)uVar35 < 0) {
          local_3bb4 = 0;
        }
        if (local_3bb4 != uVar16) {
          PF_PART1(local_427c, 0) = 1;
        }
      }
    }
  }
  uVar16 = local_3bb4;
  cStack_3bfb = (char)uVar18;
  uVar42 = 0x10;
  local_3bb4 = recovered_100091f0((int)&local_3f98);
  uVar18 = local_3c58;
  if ((int)uVar16 < (int)local_3bb4) {
    local_3bb4 = uVar16;
  }
  if ((int)uVar16 < 0) {
    local_3bb4 = 0;
  }
  local_4214 = local_3bb0 >> 0xc & 1;
  iVar31 = 1;
  if (uVar27 != 2) {
    local_4214 = 1;
  }
  bVar5 = (byte)local_427c;
  if (uVar26 != local_4214 || local_3bb4 != uVar16) {
    bVar5 = 1;
  }
  if ((local_3c54 == '\0') && ((bStack_3bfa & 1) == 0)) {
    iVar31 = -1;
    if (local_3c58 != 0) goto LAB_10003884;
    uVar26 = 0;
  }
  else {
    uVar26 = local_3c58;
    if (local_3c58 < 0x20) {
LAB_10003884:
      local_3c58 = iVar31 + local_3c58;
      uVar26 = local_3c58;
    }
  }
  if (bVar39) {
LAB_1000389c:
    if (DAT_1001108c == 0) {
      uVar26 = local_3f94;
      if (local_3f94 == 0) {
        uVar26 = 0x2f8;
      }
      uVar18 = local_3f90;
      if (local_3f90 == 0) {
        uVar18 = 400;
      }
      uVar24 = thunk_terror_ui_colour(0);
      uVar16 = local_3f94;
      if (local_3f94 == 0) {
        uVar16 = 0x2f8;
      }
      uVar20 = local_3f90;
      if (local_3f90 == 0) {
        uVar20 = 400;
      }
      uVar29 = (int)uVar20 >> 0x1f & uVar20;
      uVar35 = uVar16;
      if ((int)uVar26 < (int)uVar16) {
        uVar35 = uVar26;
      }
      if ((int)uVar26 < 0) {
        uVar35 = 0;
      }
      if ((int)uVar18 < (int)uVar20) {
        uVar20 = uVar18;
      }
      if ((int)uVar18 < 0) {
        uVar20 = 0;
      }
      if ((int)uVar29 < (int)uVar20) {
        uVar16 = (int)uVar16 >> 0x1f & uVar16;
        do {
          uVar26 = uVar16;
          if ((int)uVar16 < (int)uVar35) {
            do {
              if (-1 < (int)(uVar26 | uVar29) && local_3c28 != (void *)0x0) {
                uVar18 = local_3f94;
                if (local_3f94 == 0) {
                  uVar18 = 0x2f8;
                }
                if ((int)uVar26 < (int)uVar18) {
                  uVar18 = local_3f90;
                  if (local_3f90 == 0) {
                    uVar18 = 400;
                  }
                  if ((int)uVar29 < (int)uVar18) {
                    uVar18 = local_3f94 * 4;
                    if (local_3f94 == 0) {
                      uVar18 = 0xbe0;
                    }
                    if (uStack_3f8c != 0) {
                      uVar18 = uStack_3f8c;
                    }
                    iVar31 = uVar18 * uVar29;
                    *(char *)((int)local_3c28 + uVar26 * 4 + iVar31) = (char)(uVar24 >> 0x10);
                    *(char *)((int)local_3c28 + uVar26 * 4 + iVar31 + 1) = (char)(uVar24 >> 8);
                    *(char *)((int)local_3c28 + uVar26 * 4 + iVar31 + 2) = (char)uVar24;
                    *(undefined1 *)((int)local_3c28 + uVar26 * 4 + iVar31 + 3) = 0xd9;
                  }
                }
              }
              uVar26 = uVar26 + 1;
            } while (uVar35 != uVar26);
          }
          uVar29 = uVar29 + 1;
        } while (uVar29 != uVar20);
      }
      if (local_3bf0 < 1) {
        if (DAT_1001108c == 0) {
          local_427c = 0x16;
          goto LAB_10003bf0;
        }
        local_427c = 0x16;
LAB_10003b98:
        iVar31 = local_3bf0 + 0x4c;
        iVar11 = local_3bf0 * 2 + 4;
        if (local_3bf0 < 1) {
          iVar31 = 0x56;
          iVar11 = 0x18;
        }
        if (0x207 < (int)local_3f94) {
          iVar31 = 0x2e;
        }
        if (local_3f94 == 0) {
          iVar31 = 0x2e;
        }
        local_4254 = iVar31 + iVar11;
        bVar39 = false;
      }
      else {
        local_427c = local_3bf0 + 0xc;
        if (DAT_1001108c != 0) goto LAB_10003b98;
LAB_10003bf0:
        bVar39 = true;
        local_4254 = 10;
      }
      iVar31 = local_3f94 - 0x1c;
      if (local_3f94 == 0) {
        iVar31 = 0x2dc;
      }
      iVar11 = local_3f90 - 10;
      if (local_3f90 == 0) {
        iVar11 = 0x186;
      }
      local_425c = 0x12;
      if (!bVar39) {
        local_425c = 0xe4;
        if (local_3f94 < 700) {
          local_425c = 0xb0;
        }
        if ((int)local_3f94 < 0x208) {
          local_425c = 0xc;
        }
        iVar31 = local_3f94 - 0xc;
        if (local_3f94 == 0) {
          local_425c = 0xe4;
          iVar31 = 0x2ec;
        }
        iVar31 = iVar31 - local_425c;
      }
      iVar32 = (iVar11 - (local_427c + local_4254)) + -8;
      iVar11 = local_3bf4 + 8;
      if (local_3bf4 < 1) {
        iVar11 = 0xe;
      }
      if (iVar11 < iVar31) {
        iVar11 = iVar31;
      }
      if (local_3bf0 < 1) {
        iVar31 = 10;
        if (iVar32 < 0x10) goto LAB_10003ca7;
      }
      else {
        iVar31 = local_3bf0;
        if (iVar32 < local_3bf0 + 6) {
LAB_10003ca7:
          iVar32 = iVar31 + 6;
        }
      }
      uVar16 = thunk_terror_ui_colour(1);
      uVar18 = local_3bb4;
      uVar26 = local_4210;
      PF_PART1(local_4210, 3) = SUB41(uVar26,3);
      PF_PART3(local_4210, 0) = CONCAT12((char)uVar16,CONCAT11((char)(uVar16 >> 8),(char)(uVar16 >> 0x10)))
      ;
      iVar31 = local_3f94 - 0x1c;
      if (local_3f94 == 0) {
        iVar31 = 0x2dc;
      }
      iVar37 = local_3f90 - 10;
      if (local_3f90 == 0) {
        iVar37 = 0x186;
      }
      if (DAT_1001108c != 0) {
        iVar31 = -0xe4;
        if (local_3f94 < 700) {
          iVar31 = -0xb0;
        }
        if ((int)local_3f94 < 0x208) {
          iVar31 = -0xc;
        }
        iVar31 = (local_3f94 - 0xc) + iVar31;
        if (local_3f94 == 0) {
          iVar31 = 0x208;
        }
      }
      iVar21 = local_3bf4 + 8;
      iVar33 = local_3bf4;
      if (local_3bf4 < 1) {
        iVar21 = 0xe;
        iVar33 = 6;
      }
      if (iVar21 < iVar31) {
        iVar21 = iVar31;
      }
      uVar26 = (iVar21 + -8) / iVar33;
      if ((int)uVar26 < 2) {
        uVar26 = 1;
      }
      if (local_3bf0 < 1) {
        iVar31 = 0x16;
      }
      else {
        iVar31 = local_3bf0 + 0xc;
      }
      if (DAT_1001108c == 0) {
        iVar21 = iVar31 + 10;
      }
      else {
        iVar21 = local_3bf0 + 0x4c;
        iVar33 = local_3bf0 * 2 + 4;
        if (local_3bf0 < 1) {
          iVar21 = 0x56;
          iVar33 = 0x18;
        }
        if (0x207 < (int)local_3f94) {
          iVar21 = 0x2e;
        }
        if (local_3f94 == 0) {
          iVar21 = 0x2e;
        }
        iVar21 = iVar33 + iVar31 + iVar21;
      }
      uVar16 = (iVar37 - iVar21) - 8;
      if (local_3bf0 < 1) {
        if ((int)uVar16 < 0x11) {
          uVar16 = 0x10;
        }
        uVar24 = 0xc;
      }
      else {
        if ((int)uVar16 <= (int)(local_3bf0 + 6U)) {
          uVar16 = local_3bf0 + 6U;
        }
        uVar24 = local_3bf0 + 2;
      }
      iVar31 = uVar16 / uVar24 + (uint)(uVar16 / uVar24 == 0);
      local_4248 = 0xffffffff;
      if ((int)local_3bb4 < 0) {
LAB_10003f13:
        local_4270 = 0;
      }
      else {
        uVar42 = 0x10;
        uVar13 = recovered_10009740((int)&local_3f98);
        uVar16 = (int)uVar18 >> 0x1f;
        if ((char)uVar13 == '\0') {
          if (0 < (int)local_3bdc) {
            uVar24 = 0;
            do {
              if (local_3c24 == (void *)0x0) {
                pbVar12 = &DAT_1001016f;
              }
              else {
                pbVar12 = local_3c20 + *(int *)((int)local_3c24 + uVar24 * 8);
              }
              uVar20 = recovered_10009920((int)&local_3f98,(char *)pbVar12,
                                          *(uint *)((int)local_3c24 + uVar24 * 8 + 4));
              iVar37 = (int)uVar20 >> 0x1f;
              if ((SBORROW4(uVar16,iVar37) != SBORROW4(uVar16 - iVar37,(uint)(uVar18 < uVar20))) !=
                  (int)((uVar16 - iVar37) - (uint)(uVar18 < uVar20)) < 0) {
                local_4270 = uVar18;
                local_4248 = uVar24;
                goto LAB_10003f3f;
              }
              bVar39 = uVar18 < uVar20;
              uVar18 = uVar18 - uVar20;
              uVar16 = (uVar16 - iVar37) - (uint)bVar39;
              uVar24 = uVar24 + 1;
            } while ((int)uVar24 < (int)local_3bdc);
          }
          goto LAB_10003f13;
        }
        local_4270 = 0;
        uVar24 = 0;
        if (0 < (int)local_3bdc) {
          uVar24 = 0;
          uVar20 = local_3bdc;
          do {
            iVar37 = (int)(uVar20 - uVar24) / 2;
            uVar35 = iVar37 + uVar24;
            puVar19 = (uint *)((int)pvStack_3bd8 + (uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)uVar35 * 8 + 0xc);
            if (*puVar19 <= uVar16 &&
                (uint)(uVar18 < *(uint *)((int)pvStack_3bd8 + (uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)uVar35 * 8 + 8)) <= uVar16 - *puVar19)
            {
              uVar24 = iVar37 + 1 + uVar24;
              uVar35 = uVar20;
            }
            uVar20 = uVar35;
          } while ((int)uVar24 < (int)uVar35);
        }
        if (uVar24 != local_3bdc) {
          local_4270 = uVar18 - *(int *)((int)pvStack_3bd8 + uVar24 * 8);
          local_4248 = uVar24;
        }
      }
LAB_10003f3f:
      uVar16 = thunk_terror_ui_colour(0);
      uVar18 = local_3f94;
      if (local_3f94 == 0) {
        uVar18 = 0x2f8;
      }
      uVar24 = uVar18;
      if ((int)local_425c < (int)uVar18) {
        uVar24 = local_425c;
      }
      uVar20 = local_3f90;
      if (local_3f90 == 0) {
        uVar20 = 400;
      }
      uVar35 = uVar20;
      if ((int)local_4254 < (int)uVar20) {
        uVar35 = local_4254;
      }
      if ((int)local_4254 < 0) {
        uVar35 = 0;
      }
      uVar29 = iVar11 + local_425c;
      if ((int)uVar29 < (int)uVar18) {
        uVar18 = uVar29;
      }
      if ((int)uVar29 < 0) {
        uVar18 = 0;
      }
      uVar22 = local_4254 + iVar32;
      if ((int)uVar22 < (int)uVar20) {
        uVar20 = uVar22;
      }
      if ((int)uVar22 < 0) {
        uVar20 = 0;
      }
      if ((int)uVar35 < (int)uVar20) {
        do {
          uVar38 = uVar24;
          if ((int)uVar24 < (int)uVar18) {
            do {
              if (-1 < (int)(uVar38 | uVar35) && local_3c28 != (void *)0x0) {
                uVar36 = local_3f94;
                if (local_3f94 == 0) {
                  uVar36 = 0x2f8;
                }
                if ((int)uVar38 < (int)uVar36) {
                  uVar36 = local_3f90;
                  if (local_3f90 == 0) {
                    uVar36 = 400;
                  }
                  if ((int)uVar35 < (int)uVar36) {
                    uVar36 = local_3f94 * 4;
                    if (local_3f94 == 0) {
                      uVar36 = 0xbe0;
                    }
                    if (uStack_3f8c != 0) {
                      uVar36 = uStack_3f8c;
                    }
                    iVar11 = uVar36 * uVar35;
                    *(char *)((int)local_3c28 + uVar38 * 4 + iVar11) = (char)(uVar16 >> 0x10);
                    *(char *)((int)local_3c28 + uVar38 * 4 + iVar11 + 1) = (char)(uVar16 >> 8);
                    *(char *)((int)local_3c28 + uVar38 * 4 + iVar11 + 2) = (char)uVar16;
                    *(undefined1 *)((int)local_3c28 + uVar38 * 4 + iVar11 + 3) = 0xd9;
                  }
                }
              }
              uVar38 = uVar38 + 1;
            } while (uVar18 != uVar38);
          }
          uVar35 = uVar35 + 1;
        } while (uVar35 != uVar20);
      }
      uVar16 = thunk_terror_ui_colour(3);
      uVar18 = local_3f94;
      if (local_3f94 == 0) {
        uVar18 = 0x2f8;
      }
      uVar24 = uVar18;
      if ((int)local_425c < (int)uVar18) {
        uVar24 = local_425c;
      }
      uVar20 = local_3f90;
      if (local_3f90 == 0) {
        uVar20 = 400;
      }
      uVar35 = uVar20;
      if ((int)local_4254 < (int)uVar20) {
        uVar35 = local_4254;
      }
      if ((int)local_4254 < 0) {
        uVar35 = 0;
      }
      if ((int)uVar29 < (int)uVar18) {
        uVar18 = uVar29;
      }
      if ((int)uVar29 < 0) {
        uVar18 = 0;
      }
      if ((int)(local_4254 + 1) < (int)uVar20) {
        uVar20 = local_4254 + 1;
      }
      if ((int)local_4254 < -1) {
        uVar20 = 0;
      }
      uVar8 = (undefined1)uVar16;
      uVar25 = (undefined1)(uVar16 >> 8);
      uVar9 = (undefined1)(uVar16 >> 0x10);
      if ((int)uVar35 < (int)uVar20) {
        do {
          uVar16 = uVar24;
          if ((int)uVar24 < (int)uVar18) {
            do {
              if (-1 < (int)(uVar16 | uVar35) && local_3c28 != (void *)0x0) {
                uVar38 = local_3f94;
                if (local_3f94 == 0) {
                  uVar38 = 0x2f8;
                }
                if ((int)uVar16 < (int)uVar38) {
                  uVar38 = local_3f90;
                  if (local_3f90 == 0) {
                    uVar38 = 400;
                  }
                  if ((int)uVar35 < (int)uVar38) {
                    uVar38 = local_3f94 * 4;
                    if (local_3f94 == 0) {
                      uVar38 = 0xbe0;
                    }
                    if (uStack_3f8c != 0) {
                      uVar38 = uStack_3f8c;
                    }
                    iVar11 = uVar38 * uVar35;
                    *(undefined1 *)((int)local_3c28 + uVar16 * 4 + iVar11) = uVar9;
                    *(undefined1 *)((int)local_3c28 + uVar16 * 4 + iVar11 + 1) = uVar25;
                    *(undefined1 *)((int)local_3c28 + uVar16 * 4 + iVar11 + 2) = uVar8;
                    *(undefined1 *)((int)local_3c28 + uVar16 * 4 + iVar11 + 3) = 0xff;
                  }
                }
              }
              uVar16 = uVar16 + 1;
            } while (uVar18 != uVar16);
          }
          uVar35 = uVar35 + 1;
        } while (uVar35 != uVar20);
      }
      uVar18 = (local_4254 - 1) + iVar32;
      uVar16 = local_3f94;
      if (local_3f94 == 0) {
        uVar16 = 0x2f8;
      }
      uVar24 = uVar16;
      if ((int)local_425c < (int)uVar16) {
        uVar24 = local_425c;
      }
      uVar20 = local_3f90;
      if (local_3f90 == 0) {
        uVar20 = 400;
      }
      uVar35 = uVar20;
      if ((int)uVar18 < (int)uVar20) {
        uVar35 = uVar18;
      }
      if ((int)uVar18 < 0) {
        uVar35 = 0;
      }
      if ((int)uVar29 < (int)uVar16) {
        uVar16 = uVar29;
      }
      if ((int)uVar29 < 0) {
        uVar16 = 0;
      }
      if ((int)uVar22 < (int)uVar20) {
        uVar20 = uVar22;
      }
      if ((int)uVar22 < 0) {
        uVar20 = 0;
      }
      if ((int)uVar35 < (int)uVar20) {
        do {
          uVar18 = uVar24;
          if ((int)uVar24 < (int)uVar16) {
            do {
              if (-1 < (int)(uVar18 | uVar35) && local_3c28 != (void *)0x0) {
                uVar38 = local_3f94;
                if (local_3f94 == 0) {
                  uVar38 = 0x2f8;
                }
                if ((int)uVar18 < (int)uVar38) {
                  uVar38 = local_3f90;
                  if (local_3f90 == 0) {
                    uVar38 = 400;
                  }
                  if ((int)uVar35 < (int)uVar38) {
                    uVar38 = local_3f94 * 4;
                    if (local_3f94 == 0) {
                      uVar38 = 0xbe0;
                    }
                    if (uStack_3f8c != 0) {
                      uVar38 = uStack_3f8c;
                    }
                    iVar11 = uVar38 * uVar35;
                    *(undefined1 *)((int)local_3c28 + uVar18 * 4 + iVar11) = uVar9;
                    *(undefined1 *)((int)local_3c28 + uVar18 * 4 + iVar11 + 1) = uVar25;
                    *(undefined1 *)((int)local_3c28 + uVar18 * 4 + iVar11 + 2) = uVar8;
                    *(undefined1 *)((int)local_3c28 + uVar18 * 4 + iVar11 + 3) = 0xff;
                  }
                }
              }
              uVar18 = uVar18 + 1;
            } while (uVar16 != uVar18);
          }
          uVar35 = uVar35 + 1;
        } while (uVar35 != uVar20);
      }
      uVar18 = local_3f94;
      if (local_3f94 == 0) {
        uVar18 = 0x2f8;
      }
      uVar16 = uVar18;
      if ((int)local_425c < (int)uVar18) {
        uVar16 = local_425c;
      }
      uVar24 = local_3f90;
      if (local_3f90 == 0) {
        uVar24 = 400;
      }
      uVar20 = uVar24;
      if ((int)local_4254 < (int)uVar24) {
        uVar20 = local_4254;
      }
      if ((int)local_4254 < 0) {
        uVar20 = 0;
      }
      uVar35 = local_425c + 1;
      if ((int)uVar18 <= (int)(local_425c + 1)) {
        uVar35 = uVar18;
      }
      if ((int)uVar22 < (int)uVar24) {
        uVar24 = uVar22;
      }
      if ((int)uVar22 < 0) {
        uVar24 = 0;
      }
      if ((int)uVar20 < (int)uVar24) {
        do {
          uVar38 = uVar16;
          if ((int)local_425c < (int)uVar18) {
            do {
              if (-1 < (int)(uVar38 | uVar20) && local_3c28 != (void *)0x0) {
                uVar36 = local_3f94;
                if (local_3f94 == 0) {
                  uVar36 = 0x2f8;
                }
                if ((int)uVar38 < (int)uVar36) {
                  uVar36 = local_3f90;
                  if (local_3f90 == 0) {
                    uVar36 = 400;
                  }
                  if ((int)uVar20 < (int)uVar36) {
                    uVar36 = local_3f94 * 4;
                    if (local_3f94 == 0) {
                      uVar36 = 0xbe0;
                    }
                    if (uStack_3f8c != 0) {
                      uVar36 = uStack_3f8c;
                    }
                    iVar11 = uVar36 * uVar20;
                    *(undefined1 *)((int)local_3c28 + uVar38 * 4 + iVar11) = uVar9;
                    *(undefined1 *)((int)local_3c28 + uVar38 * 4 + iVar11 + 1) = uVar25;
                    *(undefined1 *)((int)local_3c28 + uVar38 * 4 + iVar11 + 2) = uVar8;
                    *(undefined1 *)((int)local_3c28 + uVar38 * 4 + iVar11 + 3) = 0xff;
                  }
                }
              }
              uVar38 = uVar38 + 1;
            } while (uVar35 != uVar38);
          }
          uVar20 = uVar20 + 1;
        } while (uVar20 != uVar24);
      }
      uVar18 = uVar29 - 1;
      uVar16 = local_3f94;
      if (local_3f94 == 0) {
        uVar16 = 0x2f8;
      }
      uVar24 = uVar16;
      if ((int)uVar18 < (int)uVar16) {
        uVar24 = uVar18;
      }
      if ((int)uVar18 < 0) {
        uVar24 = 0;
      }
      uVar18 = local_3f90;
      if (local_3f90 == 0) {
        uVar18 = 400;
      }
      local_427c = uVar18;
      if ((int)local_4254 < (int)uVar18) {
        local_427c = local_4254;
      }
      if ((int)local_4254 < 0) {
        local_427c = 0;
      }
      if ((int)uVar29 < (int)uVar16) {
        uVar16 = uVar29;
      }
      if ((int)uVar29 < 0) {
        uVar16 = 0;
      }
      if ((int)uVar22 < (int)uVar18) {
        uVar18 = uVar22;
      }
      if ((int)uVar22 < 0) {
        uVar18 = 0;
      }
      if ((int)local_427c < (int)uVar18) {
        do {
          uVar20 = uVar24;
          if ((int)uVar24 < (int)uVar16) {
            do {
              if (-1 < (int)(uVar20 | local_427c) && local_3c28 != (void *)0x0) {
                uVar35 = local_3f94;
                if (local_3f94 == 0) {
                  uVar35 = 0x2f8;
                }
                if ((int)uVar20 < (int)uVar35) {
                  uVar35 = local_3f90;
                  if (local_3f90 == 0) {
                    uVar35 = 400;
                  }
                  if ((int)local_427c < (int)uVar35) {
                    uVar35 = local_3f94 * 4;
                    if (local_3f94 == 0) {
                      uVar35 = 0xbe0;
                    }
                    if (uStack_3f8c != 0) {
                      uVar35 = uStack_3f8c;
                    }
                    iVar11 = uVar35 * local_427c;
                    *(undefined1 *)((int)local_3c28 + (uintptr_t)(uintptr_t)uVar20 * 4 + iVar11) = uVar9;
                    *(undefined1 *)((int)local_3c28 + (uintptr_t)(uintptr_t)uVar20 * 4 + iVar11 + 1) = uVar25;
                    *(undefined1 *)((int)local_3c28 + (uintptr_t)(uintptr_t)uVar20 * 4 + iVar11 + 2) = uVar8;
                    *(undefined1 *)((int)local_3c28 + (uintptr_t)(uintptr_t)uVar20 * 4 + iVar11 + 3) = 0xff;
                  }
                }
              }
              uVar20 = uVar20 + 1;
            } while (uVar16 != uVar20);
          }
          local_427c = local_427c + 1;
        } while (local_427c != uVar18);
      }
      if ((-1 < (int)local_4248) && ((int)local_4248 < (int)local_3bdc)) {
        iVar11 = 0;
        local_4250 = local_4248;
        do {
          if (local_3c24 == (void *)0x0) {
            local_4268 = &DAT_1001016f;
          }
          else {
            local_4268 = local_3c20 + *(int *)((int)local_3c24 + local_4250 * 8);
          }
          uVar18 = *(uint *)((int)local_3c24 + local_4250 * 8 + 4);
          if ((local_3bcc == uVar26) && ((int)local_4250 < local_3bd0)) {
            uVar24 = *(uint *)((int)pvStack_3bd8 + local_4250 * 8 + 8);
            puVar19 = (uint *)((int)pvStack_3bd8 + local_4250 * 8);
            uVar16 = uVar24 - *puVar19;
            if (0x7ffffffe < uVar16) {
              uVar16 = 0x7fffffff;
            }
            if (*(int *)((int)pvStack_3bd8 + local_4250 * 8 + 0xc) -
                *(int *)((int)pvStack_3bd8 + local_4250 * 8 + 4) != (uint)(uVar24 < *puVar19)) {
              uVar16 = 0x7fffffff;
            }
          }
          else {
            uVar16 = recovered_10009920((int)&local_3f98,(char *)local_4268,uVar18);
          }
          uVar24 = local_4270 - uVar16;
          if ((int)local_4270 < (int)uVar16) {
            if ((((local_4250 == local_4248) && (local_3bc8 == local_4248)) &&
                (local_3bc4 == local_4270)) && (local_3bc0 == uVar26)) {
              local_4278 = uStack_3bbc;
            }
            else {
              local_4278 = 0;
              uVar24 = local_4278;
              if ((0 < (int)local_4270) && (uVar18 != 0)) {
                local_427c = 0;
                local_4278 = 0;
                do {
                  if (local_4268 != (byte *)0x0) {
                    uVar20 = uVar18 - local_4278;
                    uVar24 = uVar20;
                    if (uVar26 < uVar20) {
                      uVar24 = 0xffffffff;
                      uVar35 = 0;
                      do {
                        bVar6 = local_4268[uVar35 + local_4278];
                        if (bVar6 == 0) break;
                        if (bVar6 == 9) {
                          uVar24 = uVar35;
                        }
                        if (bVar6 == 0x20) {
                          uVar24 = uVar35;
                        }
                        uVar35 = uVar35 + 1;
                      } while (uVar26 != uVar35);
                      uVar35 = uVar26;
                      if ((int)uVar24 < 1) {
                        do {
                          if (!SBORROW1('\0',local_4268[uVar35 + local_4278] & 0xc0)) {
                            uVar24 = uVar35;
                            goto LAB_100047cd;
                          }
                          bVar39 = 1 < (int)uVar35;
                          uVar35 = uVar35 - 1;
                        } while (bVar39);
                        uVar24 = 1;
                        do {
                          if (!SBORROW1('\0',local_4268[uVar24 + local_4278] & 0xc0))
                          goto LAB_100047cd;
                          uVar24 = uVar24 + 1;
                        } while (uVar20 != uVar24);
                        uVar24 = uVar20;
                      }
                    }
LAB_100047cd:
                    local_4278 = uVar24 + local_4278;
                    if (local_4278 < uVar18) {
                      while ((local_4268[local_4278] == 0x20 || (local_4268[local_4278] == 9))) {
                        local_4278 = local_4278 + 1;
                        uVar24 = uVar18;
                        if (uVar18 <= local_4278) goto joined_r0x10004a1e;
                      }
                    }
                  }
                  local_427c = local_427c + 1;
                  uVar24 = local_4278;
                } while (((int)local_427c < (int)local_4270) && (local_4278 < uVar18));
              }
joined_r0x10004a1e:
              local_4278 = uVar24;
              if (local_4250 == local_4248) {
                local_3bc4 = local_4270;
                local_3bc8 = local_4248;
                local_3bc0 = uVar26;
                uStack_3bbc = local_4278;
              }
            }
            do {
              uVar24 = 0;
              if ((local_4268 != (byte *)0x0) &&
                 (uVar20 = uVar18 - local_4278, local_4278 <= uVar18 && uVar20 != 0)) {
                if (uVar26 < uVar20) {
                  uVar24 = 0xffffffff;
                  uVar35 = 0;
                  do {
                    bVar6 = local_4268[uVar35 + local_4278];
                    if (bVar6 == 0) break;
                    if (bVar6 == 9) {
                      uVar24 = uVar35;
                    }
                    if (bVar6 == 0x20) {
                      uVar24 = uVar35;
                    }
                    uVar35 = uVar35 + 1;
                  } while (uVar26 != uVar35);
                  uVar35 = uVar26;
                  if (0 < (int)uVar24) goto LAB_100048ec;
                  do {
                    if (!SBORROW1('\0',local_4268[uVar35 + local_4278] & 0xc0)) {
                      uVar24 = uVar35;
                      goto LAB_100048ec;
                    }
                    bVar39 = 1 < (int)uVar35;
                    uVar35 = uVar35 - 1;
                  } while (bVar39);
                  uVar24 = 1;
                  do {
                    if (!SBORROW1('\0',local_4268[uVar24 + local_4278] & 0xc0)) goto LAB_100048ec;
                    uVar24 = uVar24 + 1;
                  } while (uVar20 != uVar24);
                }
                uVar24 = uVar20;
              }
LAB_100048ec:
              iVar32 = local_3bf0 + 2;
              iVar37 = local_3bf0;
              if (local_3bf0 < 1) {
                iVar32 = 0xc;
                iVar37 = 10;
              }
              iVar32 = iVar32 * iVar11 + local_4254 + 2;
              if ((int)uVar22 < iVar37 + iVar32) goto LAB_10004a29;
              uVar20 = uVar26;
              if (0 < (int)uVar24) {
                uVar20 = uVar24;
              }
              recovered_1000fba0((int)&local_3f98,local_425c + 4,iVar32,
                                 (int)(local_4268 + local_4278),uVar20,
                                 CONCAT13(uVar42,(int3)local_4210));
              if (((0 < (int)uVar24) &&
                  (local_4278 = uVar24 + local_4278, local_4268 != (byte *)0x0)) &&
                 (local_4278 < uVar18)) {
                do {
                  if ((local_4268[local_4278] != 0x20) && (local_4268[local_4278] != 9)) {
                    goto LAB_100049d1;
                  }
                  local_4278 = local_4278 + 1;
                } while (local_4278 < uVar18);
                local_4278 = uVar18;
              }
LAB_100049d1:
              iVar11 = iVar11 + 1;
              local_4270 = local_4270 + 1;
              uVar24 = 0;
            } while (((int)local_4270 < (int)uVar16) && (iVar11 < iVar31));
          }
          local_4250 = local_4250 + 1;
        } while (((int)local_4250 < (int)local_3bdc) && (local_4270 = uVar24, iVar11 < iVar31));
      }
LAB_10004a29:
      uVar42 = 0x10;
      recovered_10008760(&local_3f98);
      local_4254 = local_3bf0;
      if (local_3bf0 < 1) {
        iVar31 = 0x16;
      }
      else {
        iVar31 = local_3bf0 + 0xc;
      }
      if (DAT_1001108c == 0) {
        bVar39 = true;
        local_427c = 10;
      }
      else {
        iVar11 = local_3bf0 + 0x4c;
        iVar32 = local_3bf0 * 2 + 4;
        if (local_3bf0 < 1) {
          iVar11 = 0x56;
          iVar32 = 0x18;
        }
        if (0x207 < (int)local_3f94) {
          iVar11 = 0x2e;
        }
        if (local_3f94 == 0) {
          iVar11 = 0x2e;
        }
        local_427c = iVar11 + iVar32;
        bVar39 = false;
      }
      iVar11 = local_3f94 - 0x1c;
      if (local_3f94 == 0) {
        iVar11 = 0x2dc;
      }
      iVar32 = local_3f90 - 10;
      if (local_3f90 == 0) {
        iVar32 = 0x186;
      }
      local_4260 = 10;
      if (!bVar39) {
        local_4260 = 0xe4;
        if (local_3f94 < 700) {
          local_4260 = 0xb0;
        }
        if ((int)local_3f94 < 0x208) {
          local_4260 = 0xc;
        }
        iVar11 = local_3f94 - 0xc;
        if (local_3f94 == 0) {
          local_4260 = 0xe4;
          iVar11 = 0x2ec;
        }
        iVar11 = iVar11 - local_4260;
      }
      iVar32 = (iVar32 - (iVar31 + local_427c)) + -8;
      iVar31 = local_3bf4 + 8;
      if (local_3bf4 < 1) {
        iVar31 = 0xe;
      }
      if (iVar11 <= iVar31) {
        iVar11 = iVar31;
      }
      if (local_3bf0 < 1) {
        iVar37 = 10;
        if (iVar32 < 0x10) goto LAB_10004b5c;
      }
      else {
        iVar37 = local_3bf0;
        if (iVar32 < local_3bf0 + 6) {
LAB_10004b5c:
          iVar32 = iVar37 + 6;
        }
      }
      uVar26 = local_427c + 8 + iVar32;
      iVar32 = local_3f94 - 0x14;
      if (local_3f94 == 0) {
        iVar32 = 0x2e4;
      }
      uVar18 = local_3f90;
      if (local_3f90 == 0) {
        uVar18 = 400;
      }
      iVar11 = iVar11 + -0x60;
      if (bVar39) {
        iVar11 = iVar32;
      }
      if (iVar11 <= iVar31) {
        iVar11 = iVar31;
      }
      local_424c = (uVar18 - uVar26) + -10;
      if (local_3bf0 < 1) {
        if ((int)(uVar18 - uVar26) < 0x1c) {
          local_424c = 0x12;
        }
        local_4254 = 10;
      }
      else if (local_424c <= local_3bf0 + 8) {
        local_424c = local_3bf0 + 8;
      }
      uVar16 = thunk_terror_ui_colour(2);
      uVar18 = local_3f94;
      if (local_3f94 == 0) {
        uVar18 = 0x2f8;
      }
      uVar24 = uVar18;
      if ((int)local_4260 < (int)uVar18) {
        uVar24 = local_4260;
      }
      uVar20 = local_3f90;
      if (local_3f90 == 0) {
        uVar20 = 400;
      }
      uVar35 = uVar20;
      if ((int)uVar26 < (int)uVar20) {
        uVar35 = uVar26;
      }
      if ((int)uVar26 < 0) {
        uVar35 = 0;
      }
      uVar29 = local_4260 + iVar11;
      if ((int)uVar29 < (int)uVar18) {
        uVar18 = uVar29;
      }
      if ((int)uVar29 < 0) {
        uVar18 = 0;
      }
      uVar22 = uVar26 + local_424c;
      if ((int)uVar22 < (int)uVar20) {
        uVar20 = uVar22;
      }
      if ((int)uVar22 < 0) {
        uVar20 = 0;
      }
      if ((int)uVar35 < (int)uVar20) {
        do {
          uVar38 = uVar24;
          if ((int)uVar24 < (int)uVar18) {
            do {
              if (-1 < (int)(uVar38 | uVar35) && local_3c28 != (void *)0x0) {
                uVar36 = local_3f94;
                if (local_3f94 == 0) {
                  uVar36 = 0x2f8;
                }
                if ((int)uVar38 < (int)uVar36) {
                  uVar36 = local_3f90;
                  if (local_3f90 == 0) {
                    uVar36 = 400;
                  }
                  if ((int)uVar35 < (int)uVar36) {
                    uVar36 = local_3f94 * 4;
                    if (local_3f94 == 0) {
                      uVar36 = 0xbe0;
                    }
                    if (uStack_3f8c != 0) {
                      uVar36 = uStack_3f8c;
                    }
                    iVar31 = uVar36 * uVar35;
                    *(char *)((int)local_3c28 + uVar38 * 4 + iVar31) = (char)(uVar16 >> 0x10);
                    *(char *)((int)local_3c28 + uVar38 * 4 + iVar31 + 1) = (char)(uVar16 >> 8);
                    *(char *)((int)local_3c28 + uVar38 * 4 + iVar31 + 2) = (char)uVar16;
                    *(undefined1 *)((int)local_3c28 + uVar38 * 4 + iVar31 + 3) = 0xd9;
                  }
                }
              }
              uVar38 = uVar38 + 1;
            } while (uVar18 != uVar38);
          }
          uVar35 = uVar35 + 1;
        } while (uVar35 != uVar20);
      }
      uVar16 = thunk_terror_ui_colour(3);
      uVar18 = local_3f94;
      if (local_3f94 == 0) {
        uVar18 = 0x2f8;
      }
      uVar24 = uVar18;
      if ((int)local_4260 < (int)uVar18) {
        uVar24 = local_4260;
      }
      uVar20 = local_3f90;
      if (local_3f90 == 0) {
        uVar20 = 400;
      }
      uVar35 = uVar20;
      if ((int)uVar26 < (int)uVar20) {
        uVar35 = uVar26;
      }
      if ((int)uVar26 < 0) {
        uVar35 = 0;
      }
      if ((int)uVar29 < (int)uVar18) {
        uVar18 = uVar29;
      }
      if ((int)uVar29 < 0) {
        uVar18 = 0;
      }
      if ((int)(uVar26 + 1) < (int)uVar20) {
        uVar20 = uVar26 + 1;
      }
      if ((int)uVar26 < -1) {
        uVar20 = 0;
      }
      uVar8 = (undefined1)uVar16;
      uVar25 = (undefined1)(uVar16 >> 8);
      uVar9 = (undefined1)(uVar16 >> 0x10);
      if ((int)uVar35 < (int)uVar20) {
        do {
          uVar16 = uVar24;
          if ((int)uVar24 < (int)uVar18) {
            do {
              if (-1 < (int)(uVar16 | uVar35) && local_3c28 != (void *)0x0) {
                uVar38 = local_3f94;
                if (local_3f94 == 0) {
                  uVar38 = 0x2f8;
                }
                if ((int)uVar16 < (int)uVar38) {
                  uVar38 = local_3f90;
                  if (local_3f90 == 0) {
                    uVar38 = 400;
                  }
                  if ((int)uVar35 < (int)uVar38) {
                    uVar38 = local_3f94 * 4;
                    if (local_3f94 == 0) {
                      uVar38 = 0xbe0;
                    }
                    if (uStack_3f8c != 0) {
                      uVar38 = uStack_3f8c;
                    }
                    iVar31 = uVar38 * uVar35;
                    *(undefined1 *)((int)local_3c28 + uVar16 * 4 + iVar31) = uVar9;
                    *(undefined1 *)((int)local_3c28 + uVar16 * 4 + iVar31 + 1) = uVar25;
                    *(undefined1 *)((int)local_3c28 + uVar16 * 4 + iVar31 + 2) = uVar8;
                    *(undefined1 *)((int)local_3c28 + uVar16 * 4 + iVar31 + 3) = 0xff;
                  }
                }
              }
              uVar16 = uVar16 + 1;
            } while (uVar18 != uVar16);
          }
          uVar35 = uVar35 + 1;
        } while (uVar35 != uVar20);
      }
      uVar18 = (uVar26 - 1) + local_424c;
      uVar16 = local_3f94;
      if (local_3f94 == 0) {
        uVar16 = 0x2f8;
      }
      uVar24 = uVar16;
      if ((int)local_4260 < (int)uVar16) {
        uVar24 = local_4260;
      }
      uVar20 = local_3f90;
      if (local_3f90 == 0) {
        uVar20 = 400;
      }
      uVar35 = uVar20;
      if ((int)uVar18 < (int)uVar20) {
        uVar35 = uVar18;
      }
      if ((int)uVar18 < 0) {
        uVar35 = 0;
      }
      if ((int)uVar29 < (int)uVar16) {
        uVar16 = uVar29;
      }
      if ((int)uVar29 < 0) {
        uVar16 = 0;
      }
      if ((int)uVar22 < (int)uVar20) {
        uVar20 = uVar22;
      }
      if ((int)uVar22 < 0) {
        uVar20 = 0;
      }
      if ((int)uVar35 < (int)uVar20) {
        do {
          uVar18 = uVar24;
          if ((int)uVar24 < (int)uVar16) {
            do {
              if (-1 < (int)(uVar18 | uVar35) && local_3c28 != (void *)0x0) {
                uVar38 = local_3f94;
                if (local_3f94 == 0) {
                  uVar38 = 0x2f8;
                }
                if ((int)uVar18 < (int)uVar38) {
                  uVar38 = local_3f90;
                  if (local_3f90 == 0) {
                    uVar38 = 400;
                  }
                  if ((int)uVar35 < (int)uVar38) {
                    uVar38 = local_3f94 * 4;
                    if (local_3f94 == 0) {
                      uVar38 = 0xbe0;
                    }
                    if (uStack_3f8c != 0) {
                      uVar38 = uStack_3f8c;
                    }
                    iVar31 = uVar38 * uVar35;
                    *(undefined1 *)((int)local_3c28 + uVar18 * 4 + iVar31) = uVar9;
                    *(undefined1 *)((int)local_3c28 + uVar18 * 4 + iVar31 + 1) = uVar25;
                    *(undefined1 *)((int)local_3c28 + uVar18 * 4 + iVar31 + 2) = uVar8;
                    *(undefined1 *)((int)local_3c28 + uVar18 * 4 + iVar31 + 3) = 0xff;
                  }
                }
              }
              uVar18 = uVar18 + 1;
            } while (uVar16 != uVar18);
          }
          uVar35 = uVar35 + 1;
        } while (uVar35 != uVar20);
      }
      uVar18 = local_3f94;
      if (local_3f94 == 0) {
        uVar18 = 0x2f8;
      }
      uVar16 = uVar18;
      if ((int)local_4260 < (int)uVar18) {
        uVar16 = local_4260;
      }
      uVar24 = local_3f90;
      if (local_3f90 == 0) {
        uVar24 = 400;
      }
      uVar20 = uVar24;
      if ((int)uVar26 < (int)uVar24) {
        uVar20 = uVar26;
      }
      if ((int)uVar26 < 0) {
        uVar20 = 0;
      }
      uVar35 = local_4260 + 1;
      if ((int)uVar18 <= (int)(local_4260 + 1)) {
        uVar35 = uVar18;
      }
      if ((int)uVar22 < (int)uVar24) {
        uVar24 = uVar22;
      }
      if ((int)uVar22 < 0) {
        uVar24 = 0;
      }
      if ((int)uVar20 < (int)uVar24) {
        do {
          uVar38 = uVar16;
          if ((int)local_4260 < (int)uVar18) {
            do {
              if (-1 < (int)(uVar38 | uVar20) && local_3c28 != (void *)0x0) {
                uVar36 = local_3f94;
                if (local_3f94 == 0) {
                  uVar36 = 0x2f8;
                }
                if ((int)uVar38 < (int)uVar36) {
                  uVar36 = local_3f90;
                  if (local_3f90 == 0) {
                    uVar36 = 400;
                  }
                  if ((int)uVar20 < (int)uVar36) {
                    uVar36 = local_3f94 * 4;
                    if (local_3f94 == 0) {
                      uVar36 = 0xbe0;
                    }
                    if (uStack_3f8c != 0) {
                      uVar36 = uStack_3f8c;
                    }
                    iVar31 = uVar36 * uVar20;
                    *(undefined1 *)((int)local_3c28 + uVar38 * 4 + iVar31) = uVar9;
                    *(undefined1 *)((int)local_3c28 + uVar38 * 4 + iVar31 + 1) = uVar25;
                    *(undefined1 *)((int)local_3c28 + uVar38 * 4 + iVar31 + 2) = uVar8;
                    *(undefined1 *)((int)local_3c28 + uVar38 * 4 + iVar31 + 3) = 0xff;
                  }
                }
              }
              uVar38 = uVar38 + 1;
            } while (uVar35 != uVar38);
          }
          uVar20 = uVar20 + 1;
        } while (uVar20 != uVar24);
      }
      uVar18 = uVar29 - 1;
      uVar16 = local_3f94;
      if (local_3f94 == 0) {
        uVar16 = 0x2f8;
      }
      uVar24 = uVar16;
      if ((int)uVar18 < (int)uVar16) {
        uVar24 = uVar18;
      }
      if ((int)uVar18 < 0) {
        uVar24 = 0;
      }
      uVar18 = local_3f90;
      if (local_3f90 == 0) {
        uVar18 = 400;
      }
      local_427c = uVar18;
      if ((int)uVar26 < (int)uVar18) {
        local_427c = uVar26;
      }
      if ((int)uVar26 < 0) {
        local_427c = 0;
      }
      if ((int)uVar29 < (int)uVar16) {
        uVar16 = uVar29;
      }
      if ((int)uVar29 < 0) {
        uVar16 = 0;
      }
      if ((int)uVar22 < (int)uVar18) {
        uVar18 = uVar22;
      }
      if ((int)uVar22 < 0) {
        uVar18 = 0;
      }
      if ((int)local_427c < (int)uVar18) {
        do {
          uVar20 = uVar24;
          if ((int)uVar24 < (int)uVar16) {
            do {
              if (-1 < (int)(uVar20 | local_427c) && local_3c28 != (void *)0x0) {
                uVar35 = local_3f94;
                if (local_3f94 == 0) {
                  uVar35 = 0x2f8;
                }
                if ((int)uVar20 < (int)uVar35) {
                  uVar35 = local_3f90;
                  if (local_3f90 == 0) {
                    uVar35 = 400;
                  }
                  if ((int)local_427c < (int)uVar35) {
                    uVar35 = local_3f94 * 4;
                    if (local_3f94 == 0) {
                      uVar35 = 0xbe0;
                    }
                    if (uStack_3f8c != 0) {
                      uVar35 = uStack_3f8c;
                    }
                    iVar31 = uVar35 * local_427c;
                    *(undefined1 *)((int)local_3c28 + (uintptr_t)(uintptr_t)uVar20 * 4 + iVar31) = uVar9;
                    *(undefined1 *)((int)local_3c28 + (uintptr_t)(uintptr_t)uVar20 * 4 + iVar31 + 1) = uVar25;
                    *(undefined1 *)((int)local_3c28 + (uintptr_t)(uintptr_t)uVar20 * 4 + iVar31 + 2) = uVar8;
                    *(undefined1 *)((int)local_3c28 + (uintptr_t)(uintptr_t)uVar20 * 4 + iVar31 + 3) = 0xff;
                  }
                }
              }
              uVar20 = uVar20 + 1;
            } while (uVar16 != uVar20);
          }
          local_427c = local_427c + 1;
        } while (local_427c != uVar18);
      }
      iVar31 = local_3bf4;
      if (local_3bf4 < 1) {
        iVar31 = 6;
      }
      uVar14 = (iVar11 + -10) / iVar31;
      uVar18 = uVar14 - 0x10;
      if (0xff < uVar18) {
        uVar18 = 0x100;
      }
      if ((int)uVar14 < 0x11) {
        uVar18 = 1;
      }
      uVar16 = local_3be8 - uVar18;
      if (local_3be8 < uVar18) {
        uVar16 = 0;
      }
      if (uVar16 < local_3be8) {
        if (local_3be8 <= uVar18) {
          uVar18 = local_3be8;
        }
        do {
          if (!SBORROW1('\0',local_3bec[uVar16] & 0xc0)) goto LAB_100052ed;
          uVar16 = uVar16 + 1;
          uVar18 = uVar18 - 1;
        } while (uVar18 != 0);
        uVar16 = local_3be8;
      }
LAB_100052ed:
      iVar31 = (int)(local_424c - local_4254) / 2 + uVar26;
      recovered_10009f40((char *)&local_4210,0x180,(int)(local_3bec + uVar16));
      uVar26 = thunk_terror_ui_colour(1);
      puVar4 = local_422c;
      PF_PART2(local_422c, 0) = CONCAT11((char)(uVar26 >> 8),(char)(uVar26 >> 0x10));
      PF_PART1(local_422c, 3) = SUB41(puVar4,3);
      PF_PART3(local_422c, 0) = CONCAT12((char)uVar26,(undefined2)local_422c);
      recovered_1000fba0((int)&local_3f98,local_4260 + 4,iVar31,(int)&local_4210,uVar14,
                         CONCAT13(uVar42,CONCAT12((char)uVar26,(undefined2)local_422c)));
      if (((local_3c0c & 6) == 2) && ((local_3bb0 & 0x1000) == 0)) {
        uVar23 = thunk_strlen((char *)&local_4210);
        if ((int)uVar14 < 1) {
          uVar14 = 0;
        }
        if ((int)uVar23 < (int)uVar14) {
          uVar14 = uVar23;
        }
        if ((int)uVar23 < 0) {
          uVar14 = 0;
        }
        iVar11 = 6;
        if (0 < local_3bf4) {
          iVar11 = local_3bf4;
        }
        uVar26 = iVar11 * uVar14 + local_4260 + 4;
        iVar11 = local_3bf0;
        if (local_3bf0 < 1) {
          iVar11 = 10;
        }
        uVar18 = iVar31 + -1 + iVar11;
        iVar32 = local_3bf4 + -1;
        if (local_3bf4 < 2) {
          iVar32 = 5;
        }
        uVar24 = thunk_terror_ui_colour(4);
        uVar16 = local_3f94;
        if (local_3f94 == 0) {
          uVar16 = 0x2f8;
        }
        uVar20 = uVar16;
        if ((int)uVar26 < (int)uVar16) {
          uVar20 = uVar26;
        }
        if ((int)uVar26 < 0) {
          uVar20 = 0;
        }
        uVar35 = local_3f90;
        if (local_3f90 == 0) {
          uVar35 = 400;
        }
        uVar29 = uVar35;
        if ((int)uVar18 < (int)uVar35) {
          uVar29 = uVar18;
        }
        if ((int)uVar18 < 0) {
          uVar29 = 0;
        }
        uVar26 = iVar32 + uVar26;
        if ((int)uVar26 < (int)uVar16) {
          uVar16 = uVar26;
        }
        uVar22 = iVar31 + 1 + iVar11;
        if ((int)uVar26 < 0) {
          uVar16 = 0;
        }
        if ((int)uVar22 < (int)uVar35) {
          uVar35 = uVar22;
        }
        if ((int)uVar18 < -2) {
          uVar35 = 0;
        }
        if ((int)uVar29 < (int)uVar35) {
          do {
            uVar26 = uVar20;
            if ((int)uVar20 < (int)uVar16) {
              do {
                if (-1 < (int)(uVar26 | uVar29) && local_3c28 != (void *)0x0) {
                  uVar18 = local_3f94;
                  if (local_3f94 == 0) {
                    uVar18 = 0x2f8;
                  }
                  if ((int)uVar26 < (int)uVar18) {
                    uVar18 = local_3f90;
                    if (local_3f90 == 0) {
                      uVar18 = 400;
                    }
                    if ((int)uVar29 < (int)uVar18) {
                      uVar18 = local_3f94 * 4;
                      if (local_3f94 == 0) {
                        uVar18 = 0xbe0;
                      }
                      if (uStack_3f8c != 0) {
                        uVar18 = uStack_3f8c;
                      }
                      iVar31 = uVar18 * uVar29;
                      *(char *)((int)local_3c28 + uVar26 * 4 + iVar31) = (char)(uVar24 >> 0x10);
                      *(char *)((int)local_3c28 + uVar26 * 4 + iVar31 + 1) = (char)(uVar24 >> 8);
                      *(char *)((int)local_3c28 + uVar26 * 4 + iVar31 + 2) = (char)uVar24;
                      *(undefined1 *)((int)local_3c28 + uVar26 * 4 + iVar31 + 3) = 0xff;
                    }
                  }
                }
                uVar26 = uVar26 + 1;
              } while (uVar16 != uVar26);
            }
            uVar29 = uVar29 + 1;
          } while (uVar29 != uVar35);
        }
      }
    }
    else {
      thunk_memset(&local_4210,0,0x2c);
      if ((local_3c0c & 6) == 2) {
        local_4210 = 1;
        local_420c = local_3c08;
        local_4208 = local_3c04;
        local_4204 = local_3c00;
      }
      local_4224 = local_4224 & 0xffffff00;
      local_422c = &local_3f98;
      local_4228 = &local_4210;
      recovered_1000c6d0(&local_422c);
    }
    pvVar15 = local_3c28;
    uVar16 = uStack_3f8c;
    uVar18 = local_3f90;
    uVar26 = local_3f94;
    pcVar10 = str_100100e6;
    if (DAT_1001108c == 0) {
      pcVar10 = str_10010bc0;
    }
    uVar24 = thunk_terror_ui_colour(0);
    thunk_terror_ui_window_present(&local_3f98,pcVar10,pvVar15,uVar26,uVar18,uVar16,uVar24);
  }
  else {
    if (0x1f < uVar26) {
      uVar26 = 0x20;
    }
    if (0x1f < uVar18) {
      uVar18 = 0x20;
    }
    if ((bVar5 == 0) &&
       ((((uVar18 * -0x40 + 0xc00) * uVar18 * 0x20 * uVar18 * 0x20 + 0x80000 >> 0x14) * 10 + 0x200 ^
        ((uVar26 * -0x40 + 0xc00) * uVar26 * 0x20 * uVar26 * 0x20 + 0x80000 >> 0x14) * 10 + 0x200) <
        0x400)) goto LAB_100055d6;
    if ((bVar5 != 0) || (uVar7 = terror_ui_scrollbar_restore(auStack_3c50,&local_3f98), uVar7 == '\0'))
    goto LAB_1000389c;
    uStack_3c53 = 1;
    recovered_10008760(&local_3f98);
    uStack_3c53 = 0;
    pf_app_terror_ui_window_present_rect(&local_3f98,local_3c48,local_3c44,local_3c40,iStack_3c3c);
  }
  bVar39 = false;
LAB_100055d6:
  uVar26 = local_4214;
  local_3bb0 = local_3bb0 + 1;
  if (local_3c58 - 1 < 0x1f) {
    thunk_terror_ui_yield_frames(2);
    uVar26 = local_4214;
  }
  else if ((bVar5 != 0) || (bVar39)) {
    iVar31 = Ram00280800;
    if (iVar31 == 0x50414d57) {
      iVar31 = Ram00280804;
      if (iVar31 != 0) {
        uVar27 = Ram00280808;
        if (0xb < uVar27) {
          uVar27 = Ram00280808;
          if (0x9f < uVar27) {
            pcVar2 = (code *)UINT_0028089c;
            if (pcVar2 != (code *)0x0) {
              (*pcVar2)();
            }
          }
        }
      }
    }
  }
  else {
    uVar18 = 0x18;
    if (uVar27 == 2) {
      uVar18 = 6;
    }
    thunk_terror_ui_yield_frames(uVar18);
  }
  if (cStack_3ba7 == '\0') goto LAB_1000569e;
  goto LAB_10001b36;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280a04
#undef DAT_00280a3c
#undef DAT_00280a4c
#undef DAT_1001016f
#undef DAT_1001032f
#undef DAT_1001108c
#undef DAT_10011090
#undef Ram00280800
#undef Ram00280804
#undef Ram00280808
#undef UINT_00280828
#undef UINT_0028082c
#undef UINT_0028084c
#undef UINT_00280850
#undef UINT_00280854
#undef UINT_00280894
#undef UINT_0028089c
#undef UINT_00280978
#undef UINT_00280984
#undef _DAT_00280a04
#undef _DAT_00280a3c
#undef _DAT_00280a4c
#undef str_100100b6
#undef str_100100d6
#undef str_100100e6
#undef str_100100ed
#undef str_100100fd
#undef str_10010108
#undef str_1001010f
#undef str_10010117
#undef str_10010135
#undef str_10010150
#undef str_100101ac
#undef str_100103b6
#undef str_100103c6
#undef str_100103f8
#undef str_10010418
#undef str_10010bc0
#undef local_4210
#undef local_420c
#undef local_4208
#undef local_4204
#undef local_4200
#undef local_41fc
#undef local_41e8
#undef local_41e4
#undef local_41e0
#undef local_41dc
#undef local_41d8
#undef local_3f98
#undef local_3f94
#undef local_3f90
#undef local_3c58
#undef local_3c54
#undef local_3c48
#undef local_3c44
#undef local_3c40
#undef local_3c28
#undef local_3c24
#undef local_3c20
#undef local_3c14
#undef local_3c10
#undef local_3c0c
#undef local_3c08
#undef local_3c04
#undef local_3c00
#undef local_3bfc
#undef local_3bf8
#undef local_3bf4
#undef local_3bf0
#undef local_3bec
#undef local_3be8
#undef local_3be4
#undef local_3be0
#undef local_3bdc
#undef local_3bd0
#undef local_3bcc
#undef local_3bc8
#undef local_3bc4
#undef local_3bc0
#undef local_3bb4
#undef local_3bb0
#undef local_3bac
#undef local_3ba0
#undef local_3b9c
#undef local_3b98
#undef local_3b94
#undef local_3b90
#undef local_3b8c
#undef local_3b88
#undef local_3b84
#undef local_3a30
#undef local_3a2c
#undef local_39e8
#undef local_39e4
#undef local_3794
#undef local_3574
#undef local_3570
#undef local_3564
#undef local_864
#undef local_860
#undef local_85c
#undef local_858
#undef local_6f4
#undef local_6f0
#undef local_6ec
#undef local_6e8
#undef local_6e4
#undef local_6e0
#undef local_6dc
#undef local_6d8
#undef local_6d4
#undef local_350
#undef local_34c
#undef local_348
#undef local_344
#undef local_340
#undef local_33c
#undef local_240
#undef local_23c
#undef local_238
#undef local_1bc
#undef local_1c
#undef iStack_421c
#undef iStack_41f8
#undef iStack_41d4
#undef uStack_3f8c
#undef pvStack_3f6c
#undef uStack_3c53
#undef auStack_3c50
#undef iStack_3c3c
#undef uStack_3c1c
#undef cStack_3bfb
#undef bStack_3bfa
#undef pvStack_3bd8
#undef uStack_3bbc
#undef bStack_3ba8
#undef cStack_3ba7
#undef cStack_3ba6
#undef acStack_3b80
#undef acStack_3b00
#undef auStack_3a80
#undef acStack_3a58
#undef auStack_3a28
#undef cStack_39e7
#undef bStack_39e5
#undef iStack_39e0
#undef auStack_39d4
#undef auStack_3994
#undef auStack_3894
#undef uStack_3790
#undef auStack_3784
#undef auStack_367c
#undef cStack_356f
#undef cStack_356e
#undef cStack_356d
#undef auStack_356c
#undef auStack_355c
#undef acStack_354f
#undef uStack_854
#undef uStack_6fc
#undef cStack_6d3
#undef bStack_6d2
#undef cStack_6d1
#undef acStack_6d0
#undef cStack_338
#undef acStack_330
#undef iStack_234
#undef uStack_1c4
#undef auStack_1b8
#undef uStack_18
#undef local_427c
#undef local_4278
#undef local_4274
#undef local_4270
#undef local_4268
#undef local_4264
#undef local_4260
#undef local_425c
#undef local_4254
#undef local_4250
#undef local_424c
#undef local_4248
#undef local_422c
#undef local_4228
#undef local_4224
#undef local_4220
#undef local_4214

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_00280a04
#define DAT_00280a04 (*(uint8_t *)(0x280a04U))
#undef DAT_00280a44
#define DAT_00280a44 (*(uint8_t *)(0x280a44U))
#undef DAT_00280a48
#define DAT_00280a48 (*(uint8_t *)(0x280a48U))
#undef DAT_1001016f
#define DAT_1001016f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2d6U)))
#undef DAT_1001019a
#define DAT_1001019a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x301U)))
#undef DAT_100101d3
#define DAT_100101d3 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x33aU)))
#undef DAT_10010329
#define DAT_10010329 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x490U)))
#undef DAT_10010390
#define DAT_10010390 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4f7U)))
#undef DAT_10010395
#define DAT_10010395 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4fcU)))
#undef DAT_1001039a
#define DAT_1001039a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x501U)))
#undef DAT_100103a8
#define DAT_100103a8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x50fU)))
#undef DAT_100103ad
#define DAT_100103ad (*(uint8_t *)(((uintptr_t)pf_module_state + 0x514U)))
#undef DAT_100103b2
#define DAT_100103b2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x519U)))
#undef DAT_1001108c
#define DAT_1001108c (*(int *)(((uintptr_t)pf_module_state + 0x11f3U)))
#undef Ram00280800
#define Ram00280800 (*(uint32_t *)(0x280800U))
#undef Ram00280804
#define Ram00280804 (*(uint32_t *)(0x280804U))
#undef Ram00280808
#define Ram00280808 (*(uint32_t *)(0x280808U))
#undef UINT_0028084c
#define UINT_0028084c (*(uint *)(0x28084cU))
#undef UINT_00280850
#define UINT_00280850 (*(uint *)(0x280850U))
#undef UINT_00280894
#define UINT_00280894 (*(uint *)(0x280894U))
#undef _DAT_00280a04
#define _DAT_00280a04 (*(code * *)(0x280a04U))
#undef _DAT_00280a44
#define _DAT_00280a44 (*(code * *)(0x280a44U))
#undef _DAT_00280a48
#define _DAT_00280a48 (*(code * *)(0x280a48U))
#undef str_10010170
#define str_10010170 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2d7U)))
#undef str_1001019c
#define str_1001019c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x303U)))
#undef str_100101ac
#define str_100101ac (*(char (*)[1])(((uintptr_t)pf_module_state + 0x313U)))
#undef str_100101b2
#define str_100101b2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x319U)))
#undef str_100101d7
#define str_100101d7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x33eU)))
#undef str_100101ff
#define str_100101ff (*(char (*)[1])(((uintptr_t)pf_module_state + 0x366U)))
#undef str_1001020e
#define str_1001020e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x375U)))
#undef str_1001039f
#define str_1001039f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x506U)))
#undef str_10010f95
#define str_10010f95 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x10fcU)))
#define local_144 (*(byte * *)(pf_stack_frame + 28))
#define local_130 (*(uint *)(pf_stack_frame + 48))
#define local_12c (*(int *)(pf_stack_frame + 52))
#define local_128 (*(undefined4 *)(pf_stack_frame + 56))
#define local_124 (*(char * *)(pf_stack_frame + 60))
#define local_120 (*(undefined4 *)(pf_stack_frame + 64))
#define local_11c (*(undefined4 *)(pf_stack_frame + 68))
#define local_118 (*(byte * *)(pf_stack_frame + 72))
#define local_114 (*(byte (*)[276])(pf_stack_frame + 76))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005b30
 */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint recovered_10005b30(void *reg_ecx,byte *reg_edx)

{
  unsigned char pf_stack_frame[384] __attribute__((aligned(16))) = {0};

  ulong size;
  void *dst;
  code *pcVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  ulong uVar7;
  undefined4 uVar8;
  undefined3 extraout_var = 0;
  int iVar9;
  int iVar10;
  byte bVar11;
  undefined1 uVar12;
  ushort uVar13;
  byte *pbVar14;
  byte bVar15;
  uint uVar16;
  undefined3 uVar17;
  char *reg_edx_00;

  if (DAT_1001108c != 0) {
    uVar4 = recovered_10009c40((int)reg_ecx,reg_edx);
    return uVar4;
  }
  iVar10 = *(int *)((int)reg_ecx + 0x3e4);
  iVar5 = recovered_100091f0((int)reg_ecx);
  if ((((*(char *)((int)reg_ecx + 0x3f2) == '\x01') && (*(int *)((int)reg_ecx + 0x3f8) != 0)) &&
      (iVar9 = Ram00280800, iVar9 == 0x50414d57)) &&
     (((iVar9 = Ram00280804, iVar9 != 0 && (uVar4 = Ram00280808, 0xb < uVar4)) &&
      ((uVar4 = Ram00280808, 0x247 < uVar4 &&
       ((_DAT_00280a44 != (code *)0x0 && (uVar4 = (*_DAT_00280a44)(), (uVar4 & 1) != 0)))))))) {
    pbVar14 = &DAT_1001016f;
    if (reg_edx != (byte *)0x0) {
      pbVar14 = reg_edx;
    }
    iVar5 = Ram00280800;
    if ((((iVar5 == 0x50414d57) && (iVar5 = Ram00280804, iVar5 != 0)) &&
        (uVar4 = Ram00280808, 0xb < uVar4)) &&
       ((uVar4 = Ram00280808, 0x24b < uVar4 && (_DAT_00280a48 != (code *)0x0)))) {
      iVar5 = (*_DAT_00280a48)(pbVar14);
      if (iVar5 != 0) {
        return CONCAT31((int3)((uint)iVar10 >> 8),1);
      }
    }
    reg_edx_00 = str_10010170;
    goto LAB_10006aad;
  }
  pbVar6 = reg_edx;
  pbVar14 = reg_edx;
  if (reg_edx != (byte *)0x0) {
    while( true ) {
      pbVar14 = pbVar14 + 1;
      uVar4 = (uint)*pbVar6;
      if ((0x17 < uVar4 - 9) || ((0x800013U >> (uVar4 - 9 & 0x1f) & 1) == 0)) break;
      pbVar6 = pbVar6 + 1;
    }
    if (*pbVar6 != 0) {
      uVar16 = uVar4;
      do {
        bVar15 = (byte)uVar16;
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch((uintptr_t)(uVar16)) {
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 0xb:
        case 0xc:
        case 0xe:
        case 0xf:
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
        case 0x1a:
        case 0x1b:
        case 0x1c:
        case 0x1d:
        case 0x1e:
        case 0x1f:
          goto switchD_10005c19_caseD_1;
        case 9:
        case 10:
        case 0xd:
        case 0x20:
          uVar16 = (uint)*pbVar14;
          pbVar14 = pbVar14 + 1;
          break;
        default:
          if (uVar16 == 0x3e) goto LAB_10005c26;
          goto switchD_10005c19_caseD_1;
        }
      } while( true );
    }
  }
  goto LAB_10006416;
LAB_10005cdd:
  local_114[iVar9 + 0x3f] = 0;
  if (local_114[0] == 0) {
    iVar9 = 0;
    goto LAB_10005db4;
  }
  bVar11 = local_114[0] + 0xbf;
  uVar13 = (ushort)bVar11;
  bVar15 = local_114[0];
  if (bVar11 < 0x1a) {
    bVar15 = local_114[0] | 0x20;
  }
  switch((uintptr_t)(bVar15)) {
  case 0x6c:
    uVar13 = CONCAT11(local_114[1],bVar11);
    if (local_114[1] == 0) {
      iVar9 = 1;
LAB_10006070:
      if (*(char *)(iVar9 + ((uintptr_t)pf_module_state + 0x46bU)) == '\0') goto LAB_10005c26;
    }
    else {
      uVar13 = CONCAT11(local_114[1],bVar11) | 0x2000;
      bVar15 = (byte)(uVar13 >> 8);
      if (0x19 < (byte)(local_114[1] + 0xbf)) {
        bVar15 = local_114[1];
      }
      if (bVar15 == 0x69) {
        uVar13 = CONCAT11(local_114[2],bVar11);
        if (local_114[2] == 0) {
          iVar9 = 2;
        }
        else {
          uVar13 = CONCAT11(local_114[2],bVar11) | 0x2000;
          bVar15 = (byte)(uVar13 >> 8);
          if (0x19 < (byte)(local_114[2] + 0xbf)) {
            bVar15 = local_114[2];
          }
          if (bVar15 != 0x73) goto LAB_1000607e;
          uVar13 = CONCAT11(local_114[3],bVar11);
          if (local_114[3] == 0) {
            iVar9 = 3;
          }
          else {
            uVar13 = CONCAT11(local_114[3],bVar11) | 0x2000;
            bVar15 = (byte)(uVar13 >> 8);
            if (0x19 < (byte)(local_114[3] + 0xbf)) {
              bVar15 = local_114[3];
            }
            if ((bVar15 != 0x74) || (iVar9 = 4, local_114[4] != 0)) goto LAB_1000607e;
          }
        }
        goto LAB_10006070;
      }
    }
LAB_1000607e:
    uVar12 = (undefined1)uVar13;
    uVar13 = CONCAT11(local_114[1],uVar12);
    if (local_114[1] == 0) {
      iVar9 = 1;
LAB_1000622c:
      if (*(char *)(iVar9 + ((uintptr_t)pf_module_state + 0x479U)) == '\0') goto LAB_10005c26;
    }
    else {
      uVar13 = CONCAT11(local_114[1],uVar12) | 0x2000;
      bVar15 = (byte)(uVar13 >> 8);
      if (0x19 < (byte)(local_114[1] + 0xbf)) {
        bVar15 = local_114[1];
      }
      if (bVar15 == 0x6f) {
        uVar13 = CONCAT11(local_114[2],uVar12);
        if (local_114[2] == 0) {
          iVar9 = 2;
        }
        else {
          uVar13 = CONCAT11(local_114[2],uVar12) | 0x2000;
          bVar15 = (byte)(uVar13 >> 8);
          if (0x19 < (byte)(local_114[2] + 0xbf)) {
            bVar15 = local_114[2];
          }
          if (bVar15 != 0x61) goto LAB_1000623a;
          uVar13 = CONCAT11(local_114[3],uVar12);
          if (local_114[3] == 0) {
            iVar9 = 3;
          }
          else {
            uVar13 = CONCAT11(local_114[3],uVar12) | 0x2000;
            bVar15 = (byte)(uVar13 >> 8);
            if (0x19 < (byte)(local_114[3] + 0xbf)) {
              bVar15 = local_114[3];
            }
            if ((bVar15 != 100) || (iVar9 = 4, local_114[4] != 0)) goto LAB_1000623a;
          }
        }
        goto LAB_1000622c;
      }
    }
LAB_1000623a:
    uVar12 = (undefined1)uVar13;
    uVar13 = CONCAT11(local_114[1],uVar12);
    if (local_114[1] == 0) {
      iVar9 = 1;
LAB_1000634c:
      cVar2 = *(char *)(iVar9 + ((uintptr_t)pf_module_state + 0x489U));
      break;
    }
    uVar13 = CONCAT11(local_114[1],uVar12) | 0x2000;
    bVar15 = (byte)(uVar13 >> 8);
    if (0x19 < (byte)(local_114[1] + 0xbf)) {
      bVar15 = local_114[1];
    }
    if (bVar15 == 0x6f) {
      uVar13 = CONCAT11(local_114[2],uVar12);
      if (local_114[2] == 0) {
        iVar9 = 2;
      }
      else {
        uVar13 = CONCAT11(local_114[2],uVar12) | 0x2000;
        bVar15 = (byte)(uVar13 >> 8);
        if (0x19 < (byte)(local_114[2] + 0xbf)) {
          bVar15 = local_114[2];
        }
        if (bVar15 != 0x61) goto switchD_10005d20_caseD_6d;
        uVar13 = CONCAT11(local_114[3],uVar12);
        if (local_114[3] == 0) {
          iVar9 = 3;
        }
        else {
          uVar13 = CONCAT11(local_114[3],uVar12) | 0x2000;
          bVar15 = (byte)(uVar13 >> 8);
          if (0x19 < (byte)(local_114[3] + 0xbf)) {
            bVar15 = local_114[3];
          }
          if (bVar15 != 100) goto switchD_10005d20_caseD_6d;
          uVar13 = CONCAT11(local_114[4],uVar12);
          if (local_114[4] == 0) {
            iVar9 = 4;
          }
          else {
            uVar13 = CONCAT11(local_114[4],uVar12) | 0x2000;
            bVar15 = (byte)(uVar13 >> 8);
            if (0x19 < (byte)(local_114[4] + 0xbf)) {
              bVar15 = local_114[4];
            }
            if (bVar15 != 0x62) goto switchD_10005d20_caseD_6d;
            uVar13 = CONCAT11(local_114[5],uVar12);
            if (local_114[5] == '\0') {
              iVar9 = 5;
            }
            else {
              uVar13 = CONCAT11(local_114[5],uVar12) | 0x2000;
              bVar15 = (char)(uVar13 >> 8);
              if (0x19 < (byte)(local_114[5] + 0xbf)) {
                bVar15 = local_114[5];
              }
              if ((bVar15 != 'c') || (iVar9 = 6, local_114[6] != '\0'))
              goto switchD_10005d20_caseD_6d;
            }
          }
        }
      }
      goto LAB_1000634c;
    }
  default:
    goto switchD_10005d20_caseD_6d;
  case 0x6e:
    uVar13 = CONCAT11(local_114[1],bVar11);
    if (local_114[1] == 0) {
      iVar9 = 1;
    }
    else {
      uVar13 = CONCAT11(local_114[1],bVar11) | 0x2000;
      bVar15 = (byte)(uVar13 >> 8);
      if (0x19 < (byte)(local_114[1] + 0xbf)) {
        bVar15 = local_114[1];
      }
      if (bVar15 != 0x65) goto switchD_10005d20_caseD_6d;
      uVar13 = CONCAT11(local_114[2],bVar11);
      if (local_114[2] == 0) {
        iVar9 = 2;
      }
      else {
        uVar13 = CONCAT11(local_114[2],bVar11) | 0x2000;
        bVar15 = (byte)(uVar13 >> 8);
        if (0x19 < (byte)(local_114[2] + 0xbf)) {
          bVar15 = local_114[2];
        }
        if ((bVar15 != 0x77) || (iVar9 = 3, local_114[3] != 0)) goto switchD_10005d20_caseD_6d;
      }
    }
    cVar2 = *(char *)(iVar9 + ((uintptr_t)pf_module_state + 0x470U));
    break;
  case 0x72:
    uVar13 = CONCAT11(local_114[1],bVar11);
    if (local_114[1] == 0) {
      iVar9 = 1;
LAB_10005fba:
      if (*(char *)(iVar9 + ((uintptr_t)pf_module_state + 0x467U)) == '\0') goto LAB_10005c26;
    }
    else {
      uVar13 = CONCAT11(local_114[1],bVar11) | 0x2000;
      bVar15 = (byte)(uVar13 >> 8);
      if (0x19 < (byte)(local_114[1] + 0xbf)) {
        bVar15 = local_114[1];
      }
      if (bVar15 == 0x65) {
        uVar13 = CONCAT11(local_114[2],bVar11);
        if (local_114[2] == 0) {
          iVar9 = 2;
        }
        else {
          uVar13 = CONCAT11(local_114[2],bVar11) | 0x2000;
          bVar15 = (byte)(uVar13 >> 8);
          if (0x19 < (byte)(local_114[2] + 0xbf)) {
            bVar15 = local_114[2];
          }
          if ((bVar15 != 0x6d) || (iVar9 = 3, local_114[3] != 0)) goto LAB_10005fc8;
        }
        goto LAB_10005fba;
      }
    }
LAB_10005fc8:
    uVar12 = (undefined1)uVar13;
    uVar13 = CONCAT11(local_114[1],uVar12);
    if (local_114[1] != 0) {
      uVar13 = CONCAT11(local_114[1],uVar12) | 0x2000;
      bVar15 = (byte)(uVar13 >> 8);
      if (0x19 < (byte)(local_114[1] + 0xbf)) {
        bVar15 = local_114[1];
      }
      if (bVar15 == 0x75) {
        uVar13 = CONCAT11(local_114[2],uVar12);
        if (local_114[2] == 0) {
          iVar9 = 2;
        }
        else {
          uVar13 = CONCAT11(local_114[2],uVar12) | 0x2000;
          bVar15 = (byte)(uVar13 >> 8);
          if (0x19 < (byte)(local_114[2] + 0xbf)) {
            bVar15 = local_114[2];
          }
          if ((bVar15 != 0x6e) || (iVar9 = 3, local_114[3] != 0)) goto switchD_10005d20_caseD_6d;
        }
        goto LAB_10006058;
      }
      goto switchD_10005d20_caseD_6d;
    }
    iVar9 = 1;
LAB_10006058:
    cVar2 = *(char *)(iVar9 + ((uintptr_t)pf_module_state + 0x47eU));
    break;
  case 0x73:
    uVar13 = CONCAT11(local_114[1],bVar11);
    if (local_114[1] != 0) {
      uVar13 = CONCAT11(local_114[1],bVar11) | 0x2000;
      bVar15 = (byte)(uVar13 >> 8);
      if (0x19 < (byte)(local_114[1] + 0xbf)) {
        bVar15 = local_114[1];
      }
      if (bVar15 == 0x61) {
        uVar13 = CONCAT11(local_114[2],bVar11);
        if (local_114[2] == 0) {
          iVar9 = 2;
        }
        else {
          uVar13 = CONCAT11(local_114[2],bVar11) | 0x2000;
          bVar15 = (byte)(uVar13 >> 8);
          if (0x19 < (byte)(local_114[2] + 0xbf)) {
            bVar15 = local_114[2];
          }
          if (bVar15 != 0x76) goto LAB_10006131;
          uVar13 = CONCAT11(local_114[3],bVar11);
          if (local_114[3] == 0) {
            iVar9 = 3;
          }
          else {
            uVar13 = CONCAT11(local_114[3],bVar11) | 0x2000;
            bVar15 = (byte)(uVar13 >> 8);
            if (0x19 < (byte)(local_114[3] + 0xbf)) {
              bVar15 = local_114[3];
            }
            if ((bVar15 != 0x65) || (iVar9 = 4, local_114[4] != 0)) goto LAB_10006131;
          }
        }
        goto LAB_10006123;
      }
LAB_10006131:
      uVar12 = (undefined1)uVar13;
      uVar13 = CONCAT11(local_114[1],uVar12);
      if (local_114[1] == 0) {
        iVar9 = 1;
LAB_10006338:
        cVar2 = *(char *)(iVar9 + ((uintptr_t)pf_module_state + 0x482U));
        break;
      }
      uVar13 = CONCAT11(local_114[1],uVar12) | 0x2000;
      bVar15 = (byte)(uVar13 >> 8);
      if (0x19 < (byte)(local_114[1] + 0xbf)) {
        bVar15 = local_114[1];
      }
      if (bVar15 == 0x61) {
        uVar13 = CONCAT11(local_114[2],uVar12);
        if (local_114[2] == 0) {
          iVar9 = 2;
        }
        else {
          uVar13 = CONCAT11(local_114[2],uVar12) | 0x2000;
          bVar15 = (byte)(uVar13 >> 8);
          if (0x19 < (byte)(local_114[2] + 0xbf)) {
            bVar15 = local_114[2];
          }
          if (bVar15 != 0x76) goto switchD_10005d20_caseD_6d;
          uVar13 = CONCAT11(local_114[3],uVar12);
          if (local_114[3] == 0) {
            iVar9 = 3;
          }
          else {
            uVar13 = CONCAT11(local_114[3],uVar12) | 0x2000;
            bVar15 = (byte)(uVar13 >> 8);
            if (0x19 < (byte)(local_114[3] + 0xbf)) {
              bVar15 = local_114[3];
            }
            if (bVar15 != 0x65) goto switchD_10005d20_caseD_6d;
            uVar13 = CONCAT11(local_114[4],uVar12);
            if (local_114[4] == 0) {
              iVar9 = 4;
            }
            else {
              uVar13 = CONCAT11(local_114[4],uVar12) | 0x2000;
              bVar15 = (byte)(uVar13 >> 8);
              if (0x19 < (byte)(local_114[4] + 0xbf)) {
                bVar15 = local_114[4];
              }
              if (bVar15 != 0x62) goto switchD_10005d20_caseD_6d;
              uVar13 = CONCAT11(local_114[5],uVar12);
              if (local_114[5] == '\0') {
                iVar9 = 5;
              }
              else {
                uVar13 = CONCAT11(local_114[5],uVar12) | 0x2000;
                bVar15 = (char)(uVar13 >> 8);
                if (0x19 < (byte)(local_114[5] + 0xbf)) {
                  bVar15 = local_114[5];
                }
                if ((bVar15 != 'c') || (iVar9 = 6, local_114[6] != '\0'))
                goto switchD_10005d20_caseD_6d;
              }
            }
          }
        }
        goto LAB_10006338;
      }
      goto switchD_10005d20_caseD_6d;
    }
    iVar9 = 1;
LAB_10006123:
    if (*(char *)(iVar9 + ((uintptr_t)pf_module_state + 0x474U)) != '\0') goto LAB_10006131;
    goto LAB_10005c26;
  }
  if (cVar2 == '\0') {
LAB_10005c26:
    bVar3 = true;
  }
  else {
switchD_10005d20_caseD_6d:
    if ((byte)uVar13 < 0x1a) {
      local_114[0] = local_114[0] | 0x20;
    }
    if (local_114[0] == 0x72) {
      if (local_114[1] == 0) {
        iVar9 = 1;
      }
      else {
        bVar15 = local_114[1] | 0x20;
        if (0x19 < (byte)(local_114[1] + 0xbf)) {
          bVar15 = local_114[1];
        }
        if (bVar15 != 0x75) goto LAB_10006416;
        if (local_114[2] == 0) {
          iVar9 = 2;
        }
        else {
          bVar15 = local_114[2] | 0x20;
          if (0x19 < (byte)(local_114[2] + 0xbf)) {
            bVar15 = local_114[2];
          }
          if (bVar15 != 0x6e) goto LAB_10006416;
          if (local_114[3] == 0) {
            iVar9 = 3;
          }
          else {
            bVar15 = local_114[3] | 0x20;
            if (0x19 < (byte)(local_114[3] + 0xbf)) {
              bVar15 = local_114[3];
            }
            if (bVar15 != 0x62) goto LAB_10006416;
            if (local_114[4] == 0) {
              iVar9 = 4;
            }
            else {
              bVar15 = local_114[4] | 0x20;
              if (0x19 < (byte)(local_114[4] + 0xbf)) {
                bVar15 = local_114[4];
              }
              bVar3 = false;
              if ((bVar15 != 99) || (iVar9 = 5, local_114[5] != '\0')) goto LAB_1000641e;
            }
          }
        }
      }
LAB_10005db4:
      bVar3 = (&DAT_10010329)[iVar9] == '\0';
    }
    else {
LAB_10006416:
      bVar3 = false;
    }
  }
  goto LAB_1000641e;
switchD_10006605_caseD_0:
  bVar3 = recovered_1000a9c0((char *)reg_edx,&DAT_10010390);
  if (((((bVar3) || (bVar3 = recovered_1000a9c0((char *)reg_edx,&DAT_10010395), bVar3)) ||
       ((bVar3 = recovered_1000a9c0((char *)reg_edx,&DAT_1001039a), bVar3 ||
        (((bVar3 = recovered_1000a9c0((char *)reg_edx,str_1001039f), bVar3 ||
          (bVar3 = recovered_1000a9c0((char *)reg_edx,&DAT_100103a8), bVar3)) ||
         (bVar3 = recovered_1000a9c0((char *)reg_edx,&DAT_100103ad), bVar3)))))) ||
      (bVar3 = recovered_1000a9c0((char *)reg_edx,&DAT_100103b2), bVar3)) &&
     (bVar3 = recovered_1000a7e0((int)reg_edx), !bVar3)) {
    cVar2 = recovered_1000a870((char *)reg_edx);
    uVar16 = recovered_1000a820((char *)reg_edx,CONCAT31(extraout_var,cVar2) | 0x80000000);
    uVar4 = CONCAT31(uVar17,uVar16 != 0);
    if (uVar16 == 0) {
      recovered_100091a0((int)reg_ecx,str_100101ac);
    }
    goto LAB_100064b9;
  }
  goto switchD_10006605_caseD_9;
switchD_10005c19_caseD_1:
  if ((byte)(bVar15 + 0xbf) < 0x1a) {
    bVar15 = bVar15 | 0x20;
  }
  if (9 < (byte)(pbVar14[(bVar15 == 0x69) - 1] - 0x30U)) {
LAB_10005c8d:
    iVar9 = -0x3f;
    do {
      if (uVar4 < 0x20) {
        if ((uVar4 == 0) || (uVar4 == 9)) goto LAB_10005cdd;
      }
      else if ((uVar4 == 0x20) || (uVar4 == 0x2c)) goto LAB_10005cdd;
      if (iVar9 == 0) goto LAB_10005cdd;
      local_114[iVar9 + 0x3f] = (byte)uVar4;
      uVar4 = (uint)pbVar6[iVar9 + 0x40];
      iVar9 = iVar9 + 1;
    } while( true );
  }
  pbVar14 = pbVar14 + (bVar15 == 0x69);
  do {
    bVar15 = *pbVar14;
    pbVar14 = pbVar14 + 1;
  } while ((byte)(bVar15 - 0x30U) < 10);
  bVar3 = true;
  if (bVar15 != 0x3e) goto LAB_10005c8d;
LAB_1000641e:
  recovered_10009f40((char *)local_114,0x100,((uintptr_t)pf_module_state + 0x2d6U));
  uVar7 = thunk_strlen(&DAT_1001016f);
  uVar8 = recovered_10009300((int)reg_ecx,&DAT_1001016f,uVar7,'\0');
  if ((char)uVar8 != '\0') {
    *(undefined4 *)((int)reg_ecx + 0x3e0) = 1;
    recovered_1000a3d0((int)reg_ecx,local_114);
    pbVar14 = &DAT_1001016f;
    if (reg_edx != (byte *)0x0) {
      pbVar14 = reg_edx;
    }
    recovered_1000a3d0((int)reg_ecx,pbVar14);
    recovered_1000a3d0((int)reg_ecx,&DAT_1001019a);
  }
  uVar17 = (undefined3)((uint)reg_ecx >> 8);
  if ((reg_edx == (byte *)0x0) || (*reg_edx == 0)) {
    uVar4 = CONCAT31(uVar17,1);
LAB_100064b9:
    if (iVar10 < iVar5) {
      return uVar4;
    }
    iVar10 = recovered_100091f0((int)reg_ecx);
    *(int *)((int)reg_ecx + 0x3e4) = iVar10;
    return uVar4;
  }
  if (bVar3) {
    if (*(int *)((int)reg_ecx + 0x3f8) != 0) goto LAB_10006610;
    goto switchD_100067ef_caseD_54;
  }
  local_130 = 0;
  local_12c = 0;
  local_128 = 0;
  local_124 = (char *)0x0;
  local_120 = 0;
  local_11c = 0;
  iVar9 = Ram00280800;
  if (((((iVar9 == 0x50414d57) && (iVar9 = Ram00280804, iVar9 != 0)) &&
       (uVar4 = Ram00280808, 0xb < uVar4)) &&
      ((uVar4 = Ram00280808, 0x207 < uVar4 && (_DAT_00280a04 != (code *)0x0)))) &&
     (iVar9 = (*_DAT_00280a04)(str_1001019c,&local_130), iVar9 != 0)) {
    if ((local_130 & 0xfffffffb) == 1) {
      if (local_12c != 0) goto switchD_10006605_caseD_9;
      goto switchD_100065c5_caseD_55;
    }
    if (local_124 == (char *)0x0 || local_130 != 3) goto switchD_100065c5_caseD_55;
    switch((uintptr_t)(*local_124)) {
    case 'T':
    case 'Y':
    case 't':
    case 'y':
      break;
    case 'U':
    case 'V':
    case 'W':
    case 'X':
    case 'Z':
    case '[':
    case '\\':
    case ']':
    case '^':
    case '_':
    case '`':
    case 'a':
    case 'b':
    case 'c':
    case 'd':
    case 'e':
    case 'f':
    case 'g':
    case 'h':
    case 'i':
    case 'j':
    case 'k':
    case 'l':
    case 'm':
    case 'n':
    case 'o':
    case 'p':
    case 'q':
    case 'r':
    case 's':
    case 'u':
    case 'v':
    case 'w':
    case 'x':
      goto switchD_100065c5_caseD_55;
    default:
      if (*local_124 != '1') goto switchD_100065c5_caseD_55;
    }
  }
  else {
switchD_100065c5_caseD_55:
    bVar15 = *reg_edx;
    if (bVar15 != 0) {
      pbVar14 = reg_edx;
      do {
        pbVar14 = pbVar14 + 1;
        switch((uintptr_t)(bVar15)) {
        case 0:
          goto switchD_10006605_caseD_0;
        default:
          bVar15 = *pbVar14;
          break;
        case 9:
        case 10:
        case 0xd:
        case 0x20:
          goto switchD_10006605_caseD_9;
        }
      } while( true );
    }
  }
switchD_10006605_caseD_9:
  if (*(int *)((int)reg_ecx + 0x3f8) != 0) {
LAB_10006610:
    uVar7 = thunk_strlen(str_100101b2);
    recovered_10009300((int)reg_ecx,(byte *)str_100101b2,uVar7,'\0');
    if (iVar5 <= iVar10) {
      iVar10 = recovered_100091f0((int)reg_ecx);
      *(int *)((int)reg_ecx + 0x3e4) = iVar10;
    }
    return 0;
  }
  local_130 = 0;
  local_12c = 0;
  local_128 = 0;
  local_124 = (char *)0x0;
  local_120 = 0;
  local_11c = 0;
  iVar9 = Ram00280800;
  if (((iVar9 == 0x50414d57) && (iVar9 = Ram00280804, iVar9 != 0)) &&
     (((uVar4 = Ram00280808, 0xb < uVar4 &&
       ((uVar4 = Ram00280808, 0x207 < uVar4 && (_DAT_00280a04 != (code *)0x0)))) &&
      (iVar9 = (*_DAT_00280a04)(str_1001019c,&local_130), iVar9 != 0)))) {
    if ((local_130 & 0xfffffffb) == 1) {
      if (local_12c != 0) goto switchD_100067ef_caseD_54;
      goto switchD_100067ef_caseD_55;
    }
    if (local_124 == (char *)0x0 || local_130 != 3) goto switchD_100067ef_caseD_55;
    switch((uintptr_t)(*local_124)) {
    case 'T':
    case 'Y':
    case 't':
    case 'y':
      break;
    case 'U':
    case 'V':
    case 'W':
    case 'X':
    case 'Z':
    case '[':
    case '\\':
    case ']':
    case '^':
    case '_':
    case '`':
    case 'a':
    case 'b':
    case 'c':
    case 'd':
    case 'e':
    case 'f':
    case 'g':
    case 'h':
    case 'i':
    case 'j':
    case 'k':
    case 'l':
    case 'm':
    case 'n':
    case 'o':
    case 'p':
    case 'q':
    case 'r':
    case 's':
    case 'u':
    case 'v':
    case 'w':
    case 'x':
      goto switchD_100067ef_caseD_55;
    default:
      if (*local_124 != '1') goto switchD_100067ef_caseD_55;
    }
switchD_100067ef_caseD_54:
    bVar3 = false;
  }
  else {
switchD_100067ef_caseD_55:
    uVar8 = recovered_1000a8f0(reg_edx);
    if ((char)uVar8 != '\0') goto switchD_100067ef_caseD_54;
    bVar3 = recovered_1000a9c0((char *)reg_edx,&DAT_100101d3);
  }
  uVar7 = thunk_strlen((char *)reg_edx);
  if (uVar7 != 0xffffffff) {
    size = uVar7 + 1;
    uVar4 = size;
    if (bVar3 != false) {
      if (0x7fffffee < uVar7) goto LAB_10006aa7;
      uVar4 = uVar7 * 2 + 0x22;
    }
    pbVar14 = *(byte **)((int)reg_ecx + 0x408);
    local_118 = (byte *)0x0;
    local_144 = reg_edx;
    if ((pbVar14 <= reg_edx && pbVar14 != (byte *)0x0) &&
       ((uint)((int)reg_edx - (int)pbVar14) < *(uint *)((int)reg_ecx + 0x40c))) {
      iVar9 = Ram00280800;
      if (((iVar9 != 0x50414d57) ||
          (((iVar9 = Ram00280804, iVar9 == 0 || (uVar16 = Ram00280808, uVar16 < 0xc)) ||
           (uVar16 = Ram00280808, uVar16 < 0x50)))) ||
         ((pcVar1 = (code *)UINT_0028084c, pcVar1 == (code *)0x0 ||
          (local_144 = (*pcVar1)(size), local_144 == (byte *)0x0)))) goto LAB_10006aa7;
      thunk_memcpy(local_144,reg_edx,size);
      local_118 = local_144;
    }
    uVar8 = recovered_10008ec0((int)reg_ecx,uVar4);
    if ((char)uVar8 == '\0') {
LAB_100069d4:
      bVar3 = false;
    }
    else {
      dst = *(void **)((int)reg_ecx + 0x408);
      if (bVar3 != false) {
        uVar4 = *(uint *)((int)reg_ecx + 0x40c);
        if (0x1f < uVar4 && dst != (void *)0x0) {
          thunk_memcpy(dst,str_10010f95,0x1f);
          bVar15 = *local_144;
          if (bVar15 == 0) {
            iVar9 = 0x1f;
          }
          else {
            iVar9 = 0x1f;
            do {
              if (uVar4 < (bVar15 == 0x22 || bVar15 == 0x2f) + 4 + iVar9) goto LAB_100069d4;
              if ((bVar15 == 0x2f) || (bVar15 == 0x22)) {
                *(undefined1 *)((int)dst + iVar9) = 0x2f;
                iVar9 = iVar9 + 1;
                bVar15 = *local_144;
              }
              *(byte *)((int)dst + iVar9) = bVar15;
              iVar9 = iVar9 + 1;
              bVar15 = local_144[1];
              local_144 = local_144 + 1;
            } while (bVar15 != 0);
          }
          if (iVar9 + 3U <= uVar4) {
            *(undefined2 *)((int)dst + iVar9) = 0x7d22;
            *(undefined1 *)((int)dst + iVar9 + 2) = 0;
            goto LAB_100069be;
          }
        }
        goto LAB_100069d4;
      }
      thunk_memcpy(dst,local_144,size);
LAB_100069be:
      bVar3 = true;
    }
    iVar9 = Ram00280800;
    if ((((iVar9 == 0x50414d57) && (iVar9 = Ram00280804, iVar9 != 0)) &&
        (uVar4 = Ram00280808, 0xb < uVar4)) &&
       ((uVar4 = Ram00280808, 0x53 < uVar4 &&
        (pcVar1 = (code *)UINT_00280850, pcVar1 != (code *)0x0)))) {
      (*pcVar1)(local_118);
    }
    if (bVar3) {
      **(undefined1 **)((int)reg_ecx + 0x410) = 0;
      *(undefined4 *)((int)reg_ecx + 0x3fc) = 0;
      *(undefined4 *)((int)reg_ecx + 0x400) = 0;
      *(undefined4 *)((int)reg_ecx + 0x3f8) = 1;
      iVar9 = Ram00280800;
      if (((iVar9 == 0x50414d57) && (iVar9 = Ram00280804, iVar9 != 0)) &&
         ((uVar4 = Ram00280808, 0xb < uVar4 &&
          ((uVar4 = Ram00280808, 0x97 < uVar4 &&
           (pcVar1 = (code *)UINT_00280894, pcVar1 != (code *)0x0)))))) {
        uVar4 = (*pcVar1)(recovered_10006f50,reg_ecx,str_100101ff);
        *(uint *)((int)reg_ecx + 0x404) = uVar4;
        if (uVar4 != 0) goto LAB_10006b08;
      }
      else {
        *(undefined4 *)((int)reg_ecx + 0x404) = 0;
      }
      *(undefined4 *)((int)reg_ecx + 0x3f8) = 0;
      *(undefined4 *)((int)reg_ecx + 0x3fc) = 0;
      recovered_100091a0((int)reg_ecx,str_1001020e);
LAB_10006b08:
      if (iVar5 <= iVar10) {
        iVar10 = recovered_100091f0((int)reg_ecx);
        *(int *)((int)reg_ecx + 0x3e4) = iVar10;
      }
      return CONCAT31(uVar17,*(int *)((int)reg_ecx + 0x404) != 0);
    }
  }
LAB_10006aa7:
  reg_edx_00 = str_100101d7;
LAB_10006aad:
  uVar7 = thunk_strlen(reg_edx_00);
  recovered_10009300((int)reg_ecx,(byte *)reg_edx_00,uVar7,'\0');
  return 0;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280a04
#undef DAT_00280a44
#undef DAT_00280a48
#undef DAT_1001016f
#undef DAT_1001019a
#undef DAT_100101d3
#undef DAT_10010329
#undef DAT_10010390
#undef DAT_10010395
#undef DAT_1001039a
#undef DAT_100103a8
#undef DAT_100103ad
#undef DAT_100103b2
#undef DAT_1001108c
#undef Ram00280800
#undef Ram00280804
#undef Ram00280808
#undef UINT_0028084c
#undef UINT_00280850
#undef UINT_00280894
#undef _DAT_00280a04
#undef _DAT_00280a44
#undef _DAT_00280a48
#undef str_10010170
#undef str_1001019c
#undef str_100101ac
#undef str_100101b2
#undef str_100101d7
#undef str_100101ff
#undef str_1001020e
#undef str_1001039f
#undef str_10010f95
#undef local_144
#undef local_130
#undef local_12c
#undef local_128
#undef local_124
#undef local_120
#undef local_11c
#undef local_118
#undef local_114

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_00280a40
#define DAT_00280a40 (*(uint8_t *)(0x280a40U))
#undef DAT_00280a44
#define DAT_00280a44 (*(uint8_t *)(0x280a44U))
#undef Ram00280800
#define Ram00280800 (*(uint32_t *)(0x280800U))
#undef Ram00280804
#define Ram00280804 (*(uint32_t *)(0x280804U))
#undef Ram00280808
#define Ram00280808 (*(uint32_t *)(0x280808U))
#undef _DAT_00280a40
#define _DAT_00280a40 (*(code * *)(0x280a40U))
#undef _DAT_00280a44
#define _DAT_00280a44 (*(code * *)(0x280a44U))
#define local_414 (*(byte (*)[1044])(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006d90
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * recovered_10006d90(int reg_ecx)

{
  unsigned char pf_stack_frame[1104] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte *reg_edx;

  if ((reg_ecx == 0) || (*(char *)(reg_ecx + 0x3f2) != '\x01')) {
    reg_edx = (byte *)0x0;
  }
  else {
    iVar5 = *(int *)(reg_ecx + 0x3e4);
    iVar2 = recovered_100091f0(reg_ecx);
    iVar3 = Ram00280800;
    reg_edx = (byte *)0x0;
    if (iVar3 == 0x50414d57) {
      iVar3 = Ram00280804;
      if ((((iVar3 == 0) || (uVar1 = Ram00280808, uVar1 < 0xc)) ||
          (uVar1 = Ram00280808, uVar1 < 0x244)) || (_DAT_00280a40 == (code *)0x0)) {
        reg_edx = (byte *)0x0;
      }
      else {
        reg_edx = local_414;
        iVar3 = (*_DAT_00280a40)(reg_edx,0x400);
        if (iVar3 == 0) {
          reg_edx = (byte *)0x0;
        }
        else {
          recovered_1000a3d0(reg_ecx,reg_edx);
          iVar3 = 0xf;
          do {
            iVar4 = Ram00280800;
            reg_edx = (byte *)CONCAT31((int3)((uint)reg_edx >> 8),1);
            if ((((iVar4 != 0x50414d57) || (iVar4 = Ram00280804, iVar4 == 0)) ||
                ((uVar1 = Ram00280808, uVar1 < 0xc ||
                 ((uVar1 = Ram00280808, uVar1 < 0x244 || (_DAT_00280a40 == (code *)0x0)))))) ||
               (iVar4 = (*_DAT_00280a40)(local_414,0x400), iVar4 == 0)) break;
            recovered_1000a3d0(reg_ecx,local_414);
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
        }
      }
    }
    iVar4 = 0;
    iVar3 = Ram00280800;
    if ((((iVar3 == 0x50414d57) && (iVar3 = Ram00280804, iVar3 != 0)) &&
        (uVar1 = Ram00280808, 0xb < uVar1)) &&
       ((uVar1 = Ram00280808, 0x247 < uVar1 && (_DAT_00280a44 != (code *)0x0)))) {
      iVar4 = (*_DAT_00280a44)();
    }
    if (iVar4 != *(int *)(reg_ecx + 0x3f4)) {
      *(int *)(reg_ecx + 0x3f4) = iVar4;
      reg_edx = (byte *)CONCAT31((int3)((uint)reg_edx >> 8),1);
    }
    if (((char)reg_edx != '\0') && (iVar2 <= iVar5)) {
      iVar5 = recovered_100091f0(reg_ecx);
      *(int *)(reg_ecx + 0x3e4) = iVar5;
    }
  }
  return reg_edx;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280a40
#undef DAT_00280a44
#undef Ram00280800
#undef Ram00280804
#undef Ram00280808
#undef _DAT_00280a40
#undef _DAT_00280a44
#undef local_414

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_00280a04
#define DAT_00280a04 (*(uint8_t *)(0x280a04U))
#undef DAT_00280a3c
#define DAT_00280a3c (*(uint8_t *)(0x280a3cU))
#undef DAT_1001016f
#define DAT_1001016f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2d6U)))
#undef DAT_1001032f
#define DAT_1001032f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x496U)))
#undef DAT_10010385
#define DAT_10010385 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4ecU)))
#undef DAT_100103a8
#define DAT_100103a8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x50fU)))
#undef DAT_100103ad
#define DAT_100103ad (*(uint8_t *)(((uintptr_t)pf_module_state + 0x514U)))
#undef DAT_100103b2
#define DAT_100103b2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x519U)))
#undef DAT_100105d8
#define DAT_100105d8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x73fU)))
#undef DAT_100105dd
#define DAT_100105dd (*(uint8_t *)(((uintptr_t)pf_module_state + 0x744U)))
#undef DAT_100105e2
#define DAT_100105e2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x749U)))
#undef DAT_100105e5
#define DAT_100105e5 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x74cU)))
#undef DAT_100105f0
#define DAT_100105f0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x757U)))
#undef DAT_1001071d
#define DAT_1001071d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x884U)))
#undef DAT_10010796
#define DAT_10010796 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8fdU)))
#undef DAT_100109b4
#define DAT_100109b4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb1bU)))
#undef DAT_1001108c
#define DAT_1001108c (*(int *)(((uintptr_t)pf_module_state + 0x11f3U)))
#undef Ram00280800
#define Ram00280800 (*(uint32_t *)(0x280800U))
#undef Ram00280804
#define Ram00280804 (*(uint32_t *)(0x280804U))
#undef Ram00280808
#define Ram00280808 (*(uint32_t *)(0x280808U))
#undef UINT_00280834
#define UINT_00280834 (*(uint *)(0x280834U))
#undef UINT_00280890
#define UINT_00280890 (*(uint *)(0x280890U))
#undef UINT_00280898
#define UINT_00280898 (*(uint *)(0x280898U))
#undef _DAT_00280a04
#define _DAT_00280a04 (*(code * *)(0x280a04U))
#undef _DAT_00280a3c
#define _DAT_00280a3c (*(code * *)(0x280a3cU))
#undef str_1001038a
#define str_1001038a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4f1U)))
#undef str_1001039f
#define str_1001039f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x506U)))
#undef str_10010418
#define str_10010418 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x57fU)))
#undef str_10010420
#define str_10010420 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x587U)))
#undef str_10010439
#define str_10010439 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5a0U)))
#undef str_10010484
#define str_10010484 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5ebU)))
#undef str_1001049c
#define str_1001049c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x603U)))
#undef str_100104c4
#define str_100104c4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x62bU)))
#undef str_100104eb
#define str_100104eb (*(char (*)[1])(((uintptr_t)pf_module_state + 0x652U)))
#undef str_10010518
#define str_10010518 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x67fU)))
#undef str_10010544
#define str_10010544 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6abU)))
#undef str_10010587
#define str_10010587 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6eeU)))
#undef str_10010590
#define str_10010590 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6f7U)))
#undef str_10010598
#define str_10010598 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6ffU)))
#undef str_100105a0
#define str_100105a0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x707U)))
#undef str_100105e8
#define str_100105e8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x74fU)))
#undef str_100105f5
#define str_100105f5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x75cU)))
#undef str_10010627
#define str_10010627 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x78eU)))
#undef str_1001063c
#define str_1001063c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7a3U)))
#undef str_1001067b
#define str_1001067b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7e2U)))
#undef str_10010686
#define str_10010686 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7edU)))
#undef str_100106bd
#define str_100106bd (*(char (*)[1])(((uintptr_t)pf_module_state + 0x824U)))
#undef str_100106c6
#define str_100106c6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x82dU)))
#undef str_100106e5
#define str_100106e5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x84cU)))
#undef str_10010722
#define str_10010722 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x889U)))
#undef str_10010739
#define str_10010739 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x8a0U)))
#undef str_10010769
#define str_10010769 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x8d0U)))
#undef str_10010781
#define str_10010781 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x8e8U)))
#undef str_1001079b
#define str_1001079b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x902U)))
#undef str_100107a4
#define str_100107a4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x90bU)))
#undef str_100107ae
#define str_100107ae (*(char (*)[1])(((uintptr_t)pf_module_state + 0x915U)))
#undef str_100107b5
#define str_100107b5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x91cU)))
#undef str_100107ee
#define str_100107ee (*(char (*)[1])(((uintptr_t)pf_module_state + 0x955U)))
#undef str_100107f5
#define str_100107f5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x95cU)))
#undef str_1001081a
#define str_1001081a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x981U)))
#undef str_10010824
#define str_10010824 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x98bU)))
#undef str_10010857
#define str_10010857 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x9beU)))
#undef str_1001098c
#define str_1001098c (*(char (*)[1])(((uintptr_t)pf_module_state + 0xaf3U)))
#undef str_100109b7
#define str_100109b7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb1eU)))
#undef str_100109ea
#define str_100109ea (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb51U)))
#undef str_10010a15
#define str_10010a15 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb7cU)))
#undef str_10010a34
#define str_10010a34 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb9bU)))
#undef str_10010a6b
#define str_10010a6b (*(char (*)[1])(((uintptr_t)pf_module_state + 0xbd2U)))
#undef str_10010baf
#define str_10010baf (*(char (*)[1])(((uintptr_t)pf_module_state + 0xd16U)))
#define local_384 (*(undefined4 *)(pf_stack_frame + 92))
#define local_380 (*(undefined4 *)(pf_stack_frame + 96))
#define local_334 (*(char (*)[820])(pf_stack_frame + 172))
#define local_2d4 (*(undefined4 *)(pf_stack_frame + 268))
#define local_214 (*(int *)(pf_stack_frame + 460))
#define local_210 (*(uint *)(pf_stack_frame + 464))
#define local_20c (*(undefined4 *)(pf_stack_frame + 468))
#define local_3bc (*(char * *)(pf_stack_frame + 36))
#define local_3b8 (*(char * *)(pf_stack_frame + 40))
#define local_3b4 (*(undefined1 * *)(pf_stack_frame + 44))
#define local_3b0 (*(int *)(pf_stack_frame + 48))
#define local_394 (*(undefined4 *)(pf_stack_frame + 76))
#define local_390 (*(int *)(pf_stack_frame + 80))
#define local_38c (*(undefined4 *)(pf_stack_frame + 84))
#define local_388 (*(char * *)(pf_stack_frame + 88))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006f50
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool recovered_10006f50(undefined4 *param_1)

{
  unsigned char pf_stack_frame[1024] __attribute__((aligned(16))) = {0};

  uint *puVar1;
  char *pcVar2;
  code *pcVar3;
  byte bVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  char *pcVar11;
  undefined4 uVar12;
  ulong uVar13;
  char *pcVar14;
  ulong uVar15;
  int iVar16;
  undefined4 *puVar17;
  char *pcVar18;
  byte *pbVar19;
  uint *puVar20;
  undefined4 *puVar21;
  bool bVar22;
  char *pcVar23;

  pcVar23 = (char *)((uintptr_t)pf_module_state - 0x8f35U);
  if (param_1 == (undefined4 *)0x0) {
    return true;
  }
  *(undefined1 *)param_1[0x104] = 0;
  if ((((*(char *)((int)param_1 + 0x3f2) == '\x01') && (iVar7 = Ram00280800, iVar7 == 0x50414d57))
      && (iVar7 = Ram00280804, iVar7 != 0)) &&
     (((uVar8 = Ram00280808, 0xb < uVar8 && (uVar8 = Ram00280808, 0x23f < uVar8)) &&
      (_DAT_00280a3c != (code *)0x0)))) {
    pcVar23 = (char *)((uintptr_t)pf_module_state - 0x8ee1U);
    (*_DAT_00280a3c)();
  }
  if (DAT_1001108c == 0) {
    pcVar23 = (char *)param_1[0x102];
    pcVar11 = (char *)0x0;
    if (pcVar23 != (char *)0x0) {
      bVar5 = recovered_1000a9c0(pcVar23,str_1001039f);
      if ((bVar5) || (bVar5 = recovered_1000a9c0(pcVar23,&DAT_100103a8), bVar5)) {
        pcVar23 = (char *)param_1[0x102];
        bVar5 = recovered_1000a9c0(pcVar23,str_1001039f);
        uVar9 = 5;
        if (!bVar5) {
          bVar5 = recovered_1000a9c0(pcVar23,&DAT_100103a8);
          uVar9 = 2;
          if (!bVar5) {
            bVar5 = recovered_1000a9c0(pcVar23,&DAT_100103ad);
            uVar9 = 3;
            if (!bVar5) {
              bVar5 = recovered_1000a9c0(pcVar23,&DAT_100103b2);
              uVar9 = (uint)bVar5 * 3 + 1;
            }
          }
        }
        iVar7 = Ram00280800;
        uVar8 = 0;
        if (((iVar7 == 0x50414d57) && (iVar7 = Ram00280804, iVar7 != 0)) &&
           ((uVar10 = Ram00280808, 0xb < uVar10 &&
            ((uVar10 = Ram00280808, 0x93 < uVar10 &&
             (pcVar3 = (code *)UINT_00280890, pcVar3 != (code *)0x0)))))) {
          uVar8 = (*pcVar3)(pcVar23,uVar9);
        }
        goto LAB_10008509;
      }
      pcVar11 = (char *)param_1[0x102];
    }
    iVar7 = Ram00280800;
    if (iVar7 == 0x50414d57) {
      iVar7 = Ram00280804;
      uVar8 = 0;
      if ((((iVar7 != 0) && (uVar9 = Ram00280808, 0xb < uVar9)) &&
          (uVar9 = Ram00280808, 0x9b < uVar9)) &&
         (pcVar3 = (code *)UINT_00280898, pcVar3 != (code *)0x0)) {
        uVar8 = (*pcVar3)(pcVar11,(char *)param_1[0x104],param_1[0x105]);
      }
      goto LAB_10008509;
    }
LAB_10008507:
    uVar8 = 0;
    goto LAB_10008509;
  }
  *(undefined1 *)(param_1 + 0xf58) = 0;
  *(undefined1 *)param_1[0x104] = 0;
  if ((param_1[0xdcd] == 1) &&
     (iVar7 = thunk_strcmp((char *)((int)param_1 + 0x3749),str_10010418), iVar7 == 0)) {
    *(undefined2 *)(param_1 + 0xf77) = 0;
    thunk_snprintf((char *)(param_1 + 0xfbf),0x80,str_10010420);
    thunk_snprintf((char *)(param_1 + 0x126),0x80,&DAT_1001032f,param_1 + 0xfbf);
    param_1[0xe29] = 1;
    uVar8 = 1;
    goto LAB_10008509;
  }
  if (*(char *)((int)param_1 + 0x5b3) == '\x01') {
    *(undefined2 *)(param_1 + 0x16c) = 0;
    *(undefined1 *)((int)param_1 + 0x5b2) = 0;
    *(undefined1 *)((int)param_1 + 0x38c5) = 0;
LAB_10007182:
    pcVar23 = (char *)*param_1;
    thunk_snprintf((char *)&local_2d4,0xc0,str_10010686,(uint)pcVar23);
    iVar7 = Ram00280800;
    bVar5 = true;
    if ((((iVar7 == 0x50414d57) && (iVar7 = Ram00280804, iVar7 != 0)) &&
        (uVar8 = Ram00280808, 0xb < uVar8)) &&
       ((uVar8 = Ram00280808, 0x9b < uVar8 &&
        (pcVar3 = (code *)UINT_00280898, pcVar3 != (code *)0x0)))) {
      uVar8 = (*pcVar3)((char *)&local_2d4,(char *)&local_214,0x100);
      if (uVar8 == 0) {
        bVar5 = true;
      }
      else {
        pcVar23 = (char *)((uintptr_t)pf_module_state - 0x8c81U);
        uVar9 = recovered_1000bd00(param_1,str_1001067b);
        param_1[0x16d] = 0;
        uVar8 = 0x10;
        if (uVar9 < 0x10) {
          uVar8 = uVar9;
        }
        if (uVar9 != 0) {
          uVar9 = 1;
          do {
            thunk_snprintf(local_334,0x60,str_100106bd,uVar9);
            pcVar23 = (char *)((uintptr_t)pf_module_state - 0x8c13U);
            uVar10 = recovered_1000bd00(param_1,local_334);
            if (uVar10 != 0) {
              iVar7 = param_1[0x16d];
              param_1[0x16d] = iVar7 + 1;
              param_1[iVar7 + 0x171] = uVar10;
            }
            iVar7 = (1 - uVar8) + uVar9;
            uVar9 = uVar9 + 1;
          } while (iVar7 != 1);
        }
        bVar5 = true;
        if ((param_1[0xe2a] == 0) && (param_1[0x16d] != 0)) {
          param_1[0xe2a] = param_1[0x171];
        }
      }
    }
  }
  else {
    *(undefined2 *)(param_1 + 0x16c) = 0;
    *(undefined1 *)((int)param_1 + 0x5b2) = 0;
    *(undefined1 *)((int)param_1 + 0x38c5) = 0;
    if (*(char *)((int)param_1 + 0x38c6) == '\x01') goto LAB_10007182;
    bVar5 = false;
  }
  local_3b4 = (undefined1 *)((int)param_1 + 0x38c5);
  local_3b8 = (char *)((int)param_1 + 0x5b1);
  local_3bc = (char *)((int)param_1 + 0x5b2);
  uVar8 = param_1[0xe2a];
  if (uVar8 == 0) {
    pcVar11 = str_100106c6;
override_prt_10007486_9b0a0a95:
    thunk_snprintf((char *)(param_1 + 0x126),0x80,pcVar11,pcVar23);
LAB_1000748e:
    if (*(char *)((int)param_1 + 0x5b3) != '\0') {
      uVar8 = 0;
LAB_1000749d:
      (void)__atomic_exchange_n(&(param_1[0xfdf]),uVar8,__ATOMIC_SEQ_CST);
      uVar8 = 1;
      goto LAB_10008509;
    }
  }
  else {
    if (param_1[0x204] != uVar8) {
      param_1[0x204] = uVar8;
      param_1[0x201] = 0;
      param_1[0x203] = 0x3c;
    }
    thunk_snprintf((char *)&local_2d4,0xc0,str_100106e5,*param_1,uVar8);
    iVar7 = Ram00280800;
    if ((((iVar7 != 0x50414d57) || (iVar7 = Ram00280804, iVar7 == 0)) ||
        (uVar8 = Ram00280808, uVar8 < 0xc)) ||
       (((uVar8 = Ram00280808, uVar8 < 0x9c ||
         (pcVar3 = (code *)UINT_00280898, pcVar3 == (code *)0x0)) ||
        (uVar8 = (*pcVar3)((char *)&local_2d4,(char *)&local_214,0x100), uVar8 == 0)))) {
      pcVar11 = thunk_strstr((char *)&local_214,&DAT_1001071d);
      *(bool *)(param_1 + 0x16c) = pcVar11 != (char *)0x0;
      pcVar23 = str_10010739;
      if (pcVar11 != (char *)0x0) {
        pcVar23 = str_10010722;
      }
      pcVar11 = &DAT_1001032f;
      goto override_prt_10007486_9b0a0a95;
    }
    thunk_snprintf(local_334,0x60,str_10010769,*param_1);
    local_394 = 0;
    local_390 = 0;
    local_38c = 0;
    local_388 = (char *)0x0;
    local_384 = 0;
    local_380 = 0;
    iVar7 = Ram00280800;
    if (((iVar7 != 0x50414d57) || (iVar7 = Ram00280804, iVar7 == 0)) ||
       ((uVar8 = Ram00280808, uVar8 < 0xc ||
        (((uVar8 = Ram00280808, uVar8 < 0x208 || (_DAT_00280a04 == (code *)0x0)) ||
         (iVar7 = (*_DAT_00280a04)(local_334,&local_394), iVar7 == 0))))))
    goto switchD_100075ef_caseD_100075fd;
    if ((local_394 & 0xfffffffb) == 1) {
      bVar22 = local_390 != 0;
      goto switchD_100075ef_caseD_100075ff;
    }
    if (local_388 == (char *)0x0 || local_394 != 3) {
switchD_100075ef_caseD_100075fd:
      bVar22 = false;
    }
    else {
      bVar22 = true;
      switch((uintptr_t)(*local_388)) {
      case 'T':
      case 'Y':
      case 't':
      case 'y':
        break;
      case 'U':
      case 'V':
      case 'W':
      case 'X':
      case 'Z':
      case '[':
      case '\\':
      case ']':
      case '^':
      case '_':
      case '`':
      case 'a':
      case 'b':
      case 'c':
      case 'd':
      case 'e':
      case 'f':
      case 'g':
      case 'h':
      case 'i':
      case 'j':
      case 'k':
      case 'l':
      case 'm':
      case 'n':
      case 'o':
      case 'p':
      case 'q':
      case 'r':
      case 's':
      case 'u':
      case 'v':
      case 'w':
      case 'x':
        goto switchD_100075ef_caseD_100075fd;
      default:
        if (*local_388 != '1') goto switchD_100075ef_caseD_100075fd;
      }
    }
switchD_100075ef_caseD_100075ff:
    *(bool *)((int)param_1 + 0x5b1) = bVar22;
    thunk_snprintf(local_334,0x60,str_10010781,*param_1);
    local_394 = 0;
    local_390 = 0;
    local_38c = 0;
    local_388 = (char *)0x0;
    local_384 = 0;
    local_380 = 0;
    iVar7 = Ram00280800;
    if (((iVar7 != 0x50414d57) || (iVar7 = Ram00280804, iVar7 == 0)) ||
       (((uVar8 = Ram00280808, uVar8 < 0xc ||
         ((uVar8 = Ram00280808, uVar8 < 0x208 || (_DAT_00280a04 == (code *)0x0)))) ||
        (iVar7 = (*_DAT_00280a04)(local_334,&local_394), iVar7 == 0))))
    goto switchD_100076d7_caseD_100076de;
    if ((local_394 & 0xfffffffb) == 1) {
      bVar22 = local_390 != 0;
      goto switchD_100076d7_caseD_100076e0;
    }
    if (local_388 == (char *)0x0 || local_394 != 3) {
switchD_100076d7_caseD_100076de:
      bVar22 = false;
    }
    else {
      bVar22 = true;
      switch((uintptr_t)(*local_388)) {
      case 'T':
      case 'Y':
      case 't':
      case 'y':
        break;
      case 'U':
      case 'V':
      case 'W':
      case 'X':
      case 'Z':
      case '[':
      case '\\':
      case ']':
      case '^':
      case '_':
      case '`':
      case 'a':
      case 'b':
      case 'c':
      case 'd':
      case 'e':
      case 'f':
      case 'g':
      case 'h':
      case 'i':
      case 'j':
      case 'k':
      case 'l':
      case 'm':
      case 'n':
      case 'o':
      case 'p':
      case 'q':
      case 'r':
      case 's':
      case 'u':
      case 'v':
      case 'w':
      case 'x':
        goto switchD_100076d7_caseD_100076de;
      default:
        if (*local_388 != '1') goto switchD_100076d7_caseD_100076de;
      }
    }
switchD_100076d7_caseD_100076e0:
    *(bool *)((int)param_1 + 0x5b2) = bVar22;
    thunk_snprintf((char *)&local_394,0x60,str_10010baf,*param_1,&DAT_10010796);
    recovered_1000ac30((int)(param_1 + 0x146),0x28,&DAT_1001016f);
    uVar9 = recovered_1000bd00(param_1,str_1001079b);
    uVar8 = 8;
    if (uVar9 < 8) {
      uVar8 = uVar9;
    }
    param_1[0x16f] = uVar8;
    thunk_memset(param_1 + 0x289,0,8);
    if (param_1[0x16f] != 0) {
      uVar8 = 0;
      local_3b0 = 0x814;
      do {
        thunk_snprintf(local_334,0x60,str_100107a4,uVar8);
        thunk_snprintf((char *)&local_394,0x60,str_10010baf,*param_1,local_334);
        recovered_1000ac30(local_3b0 + (int)param_1,0x21,&DAT_1001016f);
        thunk_snprintf(local_334,0x60,str_100107ae,uVar8);
        uVar9 = recovered_1000bd00(param_1,local_334);
        *(char *)((int)param_1 + uVar8 + 0xa24) = (char)uVar9;
        uVar8 = uVar8 + 1;
        local_3b0 = local_3b0 + 0x21;
      } while (uVar8 < (uint)param_1[0x16f]);
    }
    *local_3b4 = 1;
    if ((bVar5) || (uVar8 = param_1[0x203], param_1[0x203] = uVar8 + 1, 0x3b < uVar8)) {
      param_1[0x203] = 0;
      thunk_snprintf((char *)&local_2d4,0xc0,str_100107b5,*param_1,param_1[0xe2a]);
      iVar7 = Ram00280800;
      if ((iVar7 == 0x50414d57) &&
         ((((iVar7 = Ram00280804, iVar7 != 0 && (uVar8 = Ram00280808, 0xb < uVar8)) &&
           (uVar8 = Ram00280808, 0x9b < uVar8)) &&
          ((pcVar3 = (code *)UINT_00280898, pcVar3 != (code *)0x0 &&
           (uVar8 = (*pcVar3)((char *)&local_2d4,(char *)&local_214,0x100), uVar8 != 0)))))) {
        uVar9 = recovered_1000bd00(param_1,str_1001067b);
        param_1[0x201] = 0;
        uVar8 = 0x40;
        if (uVar9 < 0x40) {
          uVar8 = uVar9;
        }
        if (uVar9 != 0) {
          uVar9 = 1;
          do {
            thunk_snprintf(local_334,0x60,str_100107ee,uVar9);
            uVar10 = recovered_1000bd00(param_1,local_334);
            if (uVar10 - 1 < 0xfffffffe) {
              iVar7 = param_1[0x201];
              param_1[0x201] = iVar7 + 1;
              param_1[iVar7 + 0x181] = uVar10;
            }
            iVar7 = (1 - uVar8) + uVar9;
            uVar9 = uVar9 + 1;
          } while (iVar7 != 1);
        }
      }
    }
    pcVar23 = (char *)(param_1 + 0x126);
    if (*(char *)((int)param_1 + 0x5b1) == '\x01') {
      pcVar11 = str_10010824;
      if (*local_3bc != '\0') {
        pcVar11 = str_1001081a;
      }
    }
    else {
      pcVar11 = str_100107f5;
    }
    thunk_snprintf(pcVar23,0x80,&DAT_1001032f,pcVar11);
    if ((*(char *)(param_1 + 0xf77) == '\x01') && (*local_3bc == '\x01')) {
      thunk_snprintf(pcVar23,0x80,str_10010857,param_1[0xf7c] + 1,param_1[0xf7b] + 1);
    }
    else if ((*(char *)(param_1 + 0xfbf) != '\0') && (*local_3bc == '\x01')) {
      pcVar11 = (char *)(param_1 + 0xfbf);
      thunk_snprintf(pcVar23,0x80,&DAT_1001032f,pcVar11);
    }
    if (*local_3b8 != '\x01') goto LAB_1000748e;
    uVar9 = param_1[0xe2a];
    if (*(char *)((int)param_1 + 0x5b3) != '\0') {
      uVar8 = (uint)(*(byte *)((int)param_1 + 0x5b2) | uVar9 < 0x40000000);
      goto LAB_1000749d;
    }
    iVar7 = param_1[0xdcd];
    if (*(byte *)((int)param_1 + 0x5b2) != 0) {
LAB_10007a6d:
      if (iVar7 != 1) {
        if (iVar7 == 2) goto LAB_10007df8;
        if ((((*(char *)(param_1 + 0xf77) == '\x01') && (*(char *)((int)param_1 + 0x3ddd) == '\x01')
             ) && (0x1df < (uint)(param_1[0xe2d] - param_1[0xf7e]))) &&
           (uVar12 = recovered_1000b8f0((int)param_1), (char)uVar12 == '\0')) {
          *(undefined1 *)((int)param_1 + 0x3ddd) = 0;
          param_1[0xf7e] = param_1[0xe2d];
          thunk_snprintf(pcVar23,0x80,str_10010518,(void *)param_1[0x104]);
        }
        if (((*(char *)(param_1 + 0xf77) == '\x01') && (*(char *)((int)param_1 + 0x3ddd) == '\0'))
           && (0x3b < (uint)(param_1[0xe2d] - param_1[0xf7e]))) {
          recovered_1000b8f0((int)param_1);
        }
        puVar1 = param_1 + 0xe52;
        uVar8 = param_1[0xe2a];
        iVar7 = 0;
        puVar20 = puVar1;
        do {
          uVar9 = *puVar20;
          if ((uVar9 == 0) || (uVar9 == uVar8)) goto LAB_10007b32;
          iVar7 = iVar7 + 1;
          puVar20 = puVar20 + 6;
        } while (iVar7 != 0x20);
        uVar9 = *puVar1;
        iVar7 = 0;
LAB_10007b32:
        puVar1 = puVar1 + iVar7 * 6;
        if (uVar9 != uVar8) {
          thunk_memset(puVar1,0,0x18);
          puVar1[5] = 0x3c;
          uVar8 = param_1[0xe2a];
        }
        *puVar1 = uVar8;
        thunk_snprintf((char *)&local_214,0x200,str_10010544,*param_1,uVar8,puVar1[1],puVar1[2])
        ;
        pcVar11 = (char *)param_1[0x104];
        iVar7 = Ram00280800;
        if ((((iVar7 == 0x50414d57) && (iVar7 = Ram00280804, iVar7 != 0)) &&
            (uVar8 = Ram00280808, 0xb < uVar8)) &&
           ((uVar8 = Ram00280808, 0x9b < uVar8 &&
            (pcVar3 = (code *)UINT_00280898, pcVar3 != (code *)0x0)))) {
          uVar8 = (*pcVar3)((char *)&local_214,pcVar11,param_1[0x105]);
          if (uVar8 != 0) {
            uVar8 = recovered_1000bd00(param_1,str_10010587);
            puVar1[1] = uVar8;
            uVar8 = recovered_1000bd00(param_1,str_10010590);
            puVar1[2] = uVar8;
            uVar8 = recovered_1000bd00(param_1,str_10010598);
            if (uVar8 != 0) {
              thunk_snprintf(pcVar23,0x80,str_100105a0);
            }
            uVar8 = recovered_1000bd00(param_1,&DAT_100105d8);
            if (uVar8 != 1) {
              uVar8 = param_1[0xe2a];
              if ((uVar8 < 0x40000000) &&
                 ((puVar1[3] < puVar1[4] || (uVar9 = puVar1[5], puVar1[5] = uVar9 + 1, 0x3b < uVar9)
                  ))) {
                puVar1[5] = 0;
                thunk_snprintf((char *)&local_214,0x200,str_1001063c,*param_1,uVar8,puVar1[3]);
                uVar8 = recovered_1000b4b0((char *)&local_214,(char *)param_1[0x104]);
                if (uVar8 == 0) goto LAB_10008507;
                uVar8 = recovered_1000bd00(param_1,str_1001067b);
                puVar1[4] = uVar8;
                if (puVar1[3] < uVar8) {
                  puVar1[3] = puVar1[3] + 1;
                  thunk_memset(param_1 + 0xf13,0,0x10c);
                  param_1[0xf13] = param_1[0xe2a];
                  uVar8 = recovered_1000bd00(param_1,&DAT_100105dd);
                  param_1[0xf14] = uVar8;
                  uVar8 = recovered_1000bd00(param_1,&DAT_100105e2);
                  param_1[0xf15] = uVar8;
                  uVar8 = recovered_1000bd00(param_1,&DAT_100105e5);
                  param_1[0xf16] = uVar8;
                  uVar8 = recovered_1000bd00(param_1,str_100105e8);
                  param_1[0xf17] = uVar8;
                  bVar5 = recovered_1000c0e0(param_1);
                  *(bool *)(param_1 + 0xf18) = bVar5;
                  recovered_1000be10(param_1,&DAT_100105f0,param_1 + 0xf1a,0xf0);
                  if (param_1[0xf16] == 0) {
                    bVar5 = false;
                  }
                  else {
                    bVar5 = *(char *)(param_1 + 0xf1a) != '\0';
                  }
                  *(bool *)(param_1 + 0xf58) = bVar5;
                }
              }
              uVar8 = 1;
              goto LAB_10008509;
            }
            thunk_memset(param_1 + 0xf13,0,0x10c);
            param_1[0xf13] = param_1[0xe2a];
            uVar8 = recovered_1000bd00(param_1,&DAT_100105dd);
            param_1[0xf14] = uVar8;
            uVar8 = recovered_1000bd00(param_1,&DAT_100105e2);
            param_1[0xf15] = uVar8;
            uVar8 = recovered_1000bd00(param_1,&DAT_100105e5);
            param_1[0xf16] = uVar8;
            uVar8 = recovered_1000bd00(param_1,str_100105e8);
            param_1[0xf17] = uVar8;
            pcVar11 = (char *)(param_1 + 0xf1a);
            recovered_1000be10(param_1,&DAT_100105f0,pcVar11,0xf0);
            cVar6 = *(char *)(param_1 + 0xf1a);
            if (cVar6 == '$') {
              uVar13 = thunk_strlen(pcVar11);
              uVar12 = recovered_1000be60(pcVar11,uVar13,&local_2d4,&local_394,local_334);
              if ((char)uVar12 != '\0') {
                if (((local_334[0] == '?') || (local_334[0] == '!')) &&
                   (((*(char *)(param_1 + 0xf77) == '\x01' &&
                     (((*(char *)((int)param_1 + 0x3ddd) == '\x01' &&
                       (param_1[0xf14] == param_1[0xf79])) && (local_2d4 == param_1[0xf7b])))) &&
                    (local_394 == param_1[0xf7c])))) {
                  *(undefined1 *)((int)param_1 + 0x3ddd) = 0;
                  if (local_334[0] == '?') {
                    *(undefined1 *)(param_1 + 0xf77) = 0;
                    puVar21 = (undefined4 *)(local_394 + 1);
                    pcVar11 = str_100105f5;
                  }
                  else {
                    if (local_394 != local_2d4) {
                      param_1[0xf7c] = local_394 + 1;
                      recovered_1000b8f0((int)param_1);
                      goto LAB_1000861c;
                    }
                    *(undefined1 *)(param_1 + 0xf77) = 0;
                    puVar21 = param_1 + 3999;
                    pcVar11 = str_10010627;
                  }
                  thunk_snprintf((char *)(param_1 + 0xfbf),0x80,pcVar11,(uint)puVar21);
                  thunk_snprintf(pcVar23,0x80,&DAT_1001032f,param_1 + 0xfbf);
                }
LAB_1000861c:
                *(undefined1 *)(param_1 + 0xf58) = 0;
                uVar8 = 1;
                goto LAB_10008509;
              }
              cVar6 = *pcVar11;
            }
            *(bool *)(param_1 + 0xf58) = cVar6 != '\0';
            uVar8 = 1;
            goto LAB_10008509;
          }
          pcVar11 = (char *)param_1[0x104];
        }
override_prt_10008384_9b0a0a95:
        thunk_snprintf(pcVar23,0x80,&DAT_1001032f,pcVar11);
        uVar8 = 0;
        goto LAB_10008509;
      }
      param_1[0xe29] = 3;
      iVar7 = (int)param_1 + 0x3749;
      if (*(char *)((int)param_1 + 0x3749) != '$') {
        *(undefined1 *)(param_1 + 0xfbf) = 0;
        bVar5 = recovered_1000b5d0(param_1,uVar9,param_1[0xe2b],
                                   -(uint)(param_1[0xe2c] == 0) | param_1[0xe2c],iVar7);
        if (bVar5) {
          param_1[0xe29] = 1;
          thunk_snprintf(pcVar23,0x80,str_100104eb);
          uVar8 = 1;
          goto LAB_10008509;
        }
        bVar5 = recovered_1000b500((char *)param_1[0x104]);
        param_1[0xe29] = bVar5 ^ 3;
        if (bVar5) {
          pcVar11 = str_100104c4;
        }
        else {
          pcVar11 = (char *)param_1[0x104];
        }
        goto override_prt_10008384_9b0a0a95;
      }
      if (*(char *)(param_1 + 0xf77) == '\x01') {
        pcVar18 = str_1001098c;
      }
      else {
        puVar21 = param_1 + 0xdd2;
        do {
          puVar17 = puVar21;
          iVar7 = iVar7 + 1;
          puVar21 = (undefined4 *)((int)puVar17 + 1);
        } while (*(char *)((int)puVar17 + 2) == ' ');
        pcVar18 = (char *)((int)puVar17 + 2);
        pcVar14 = thunk_strstr(pcVar18,&DAT_100109b4);
        if (pcVar14 == (char *)0x0) {
          uVar13 = thunk_strlen(pcVar18);
        }
        else {
          uVar13 = (int)pcVar14 - iVar7;
        }
        iVar7 = (int)param_1 + 0x3dfd;
        uVar15 = 0;
        iVar16 = 0x7f;
        do {
          if (uVar13 == uVar15) goto LAB_1000831d;
          iVar7 = iVar7 + -1;
          uVar15 = uVar15 + 1;
          iVar16 = iVar16 + 1;
          pcVar2 = (char *)((int)puVar21 + uVar13);
          puVar21 = (undefined4 *)((int)puVar21 + -1);
        } while (*pcVar2 == ' ');
        if ((uVar13 - iVar16 < 0xffffff81) || (param_1[0xe2c] == 0)) {
LAB_1000831d:
          pcVar18 = str_100109b7;
        }
        else {
          pcVar2 = (char *)(param_1 + 0xf7f);
          thunk_memcpy(pcVar2,pcVar18,(uVar13 - uVar15) + 1);
          *(undefined1 *)(iVar7 + uVar13) = 0;
          pcVar18 = pcVar14 + 2;
          if (pcVar14 == (char *)0x0) {
            pcVar18 = pcVar2;
          }
          pcVar18 = pcVar18 + -1;
          do {
            pcVar14 = pcVar18;
            pcVar18 = pcVar14 + 1;
          } while (pcVar14[1] == ' ');
          uVar13 = thunk_strlen(pcVar18);
          if ((uVar13 - 0x80 < 0xffffff81) || (*pcVar18 != '/')) {
            pcVar18 = str_100109ea;
          }
          else {
            if (uVar13 != 1) {
              iVar7 = 0;
              do {
                bVar4 = pcVar14[iVar7 + 2];
                if (((bVar4 < 0x20) || (bVar4 == 0x5c)) ||
                   ((bVar4 == 0x2e && (pcVar18[iVar7] == '.')))) {
                  pcVar18 = str_10010a15;
                  goto override_prt_10008334_9b0a0a95;
                }
                iVar7 = iVar7 + 1;
              } while (uVar13 - 1 != iVar7);
            }
            thunk_memcpy(param_1 + 3999,pcVar18,uVar13 + 1);
            local_20c = 0;
            local_210 = 0;
            local_214 = 0;
            iVar7 = Ram00280800;
            if ((((iVar7 == 0x50414d57) && (iVar7 = Ram00280804, iVar7 != 0)) &&
                (uVar8 = Ram00280808, 0xb < uVar8)) &&
               (((uVar8 = Ram00280808, 0x37 < uVar8 &&
                 (pcVar3 = (code *)UINT_00280834, pcVar3 != (code *)0x0)) &&
                (uVar8 = (*pcVar3)(pcVar2,&local_214), uVar8 != 0)))) {
              if ((local_210 < 0xffdd) && (local_210 == 0 || local_214 != 0)) {
                param_1[0xf78] = param_1[0xe2a];
                param_1[0xf79] = param_1[0xe2c];
                param_1[0xf7a] = param_1[0xe2b];
                param_1[0xf7d] = local_210;
                param_1[0xf7b] = (local_210 + 99) / 100;
                param_1[0xf7c] = 0;
                *(undefined2 *)(param_1 + 0xf77) = 1;
                *(undefined1 *)(param_1 + 0xfbf) = 0;
                uVar12 = recovered_1000b8f0((int)param_1);
                if ((char)uVar12 != '\0') {
                  uVar8 = 1;
                  param_1[0xe29] = 1;
                  goto LAB_10008509;
                }
                *(undefined1 *)(param_1 + 0xf77) = 0;
                pcVar18 = str_10010a6b;
                pcVar11 = (char *)param_1[0x104];
                goto override_prt_10008334_9b0a0a95;
              }
            }
            pcVar18 = str_10010a34;
          }
        }
      }
override_prt_10008334_9b0a0a95:
      thunk_snprintf(pcVar23,0x80,pcVar18,pcVar11);
      bVar5 = recovered_1000b500((char *)param_1[0x104]);
      uVar8 = 0;
      param_1[0xe29] = bVar5 ^ 3;
      goto LAB_10008509;
    }
    if (iVar7 == 2) {
LAB_10007df8:
      param_1[0xe29] = 3;
      local_394 = CONCAT31(PF_PART3(local_394, 1),0x22);
      bVar4 = *(byte *)((int)param_1 + 0x3839);
      iVar16 = 1;
      iVar7 = 1;
      if (bVar4 != 0) {
        pbVar19 = (byte *)((int)param_1 + 0x383a);
        do {
          uVar8 = 0;
          if ((bVar4 < 0x20) || (0x43 < iVar7 + 3U)) goto LAB_10008509;
          if ((bVar4 == 0x2f) || (bVar4 == 0x22)) {
            local_334[iVar7 + -0x60] = '/';
            iVar7 = iVar7 + 1;
          }
          local_334[iVar7 + -0x60] = bVar4;
          iVar7 = iVar7 + 1;
          bVar4 = *pbVar19;
          pbVar19 = pbVar19 + 1;
        } while (bVar4 != 0);
      }
      (local_334 + iVar7 + -0x60)[0] = '\"';
      (local_334 + iVar7 + -0x60)[1] = '\0';
      local_2d4 = CONCAT31(PF_PART3(local_2d4, 1),0x22);
      bVar4 = *(byte *)((int)param_1 + 0x385a);
      if (bVar4 != 0) {
        pbVar19 = (byte *)((int)param_1 + 0x385b);
        iVar16 = 1;
        do {
          uVar8 = 0;
          if ((bVar4 < 0x20) || (0x83 < iVar16 + 3U)) goto LAB_10008509;
          if ((bVar4 == 0x2f) || (bVar4 == 0x22)) {
            local_334[iVar16 + 0x60] = '/';
            iVar16 = iVar16 + 1;
          }
          local_334[iVar16 + 0x60] = bVar4;
          iVar16 = iVar16 + 1;
          bVar4 = *pbVar19;
          pbVar19 = pbVar19 + 1;
        } while (bVar4 != 0);
      }
      (local_334 + iVar16 + 0x60)[0] = '\"';
      (local_334 + iVar16 + 0x60)[1] = '\0';
      pcVar11 = str_1001038a;
      if (*(char *)(param_1 + 0xdd2) != '\0') {
        pcVar11 = &DAT_10010385;
      }
      thunk_snprintf((char *)&local_214,0x200,str_10010439,*param_1,uVar9,param_1[0xdd0],
                         &local_394,&local_2d4,pcVar11);
      uVar8 = recovered_1000b4b0((char *)&local_214,(char *)param_1[0x104]);
      if (uVar8 == 0) {
        bVar5 = recovered_1000b500((char *)param_1[0x104]);
        param_1[0xe29] = bVar5 ^ 3;
        if (bVar5) {
          pcVar11 = str_1001049c;
        }
        else {
          pcVar11 = (char *)param_1[0x104];
        }
      }
      else {
        param_1[0xe29] = 1;
        pcVar11 = str_10010484;
      }
      uVar8 = (uint)(uVar8 != 0);
      thunk_snprintf(pcVar23,0x80,&DAT_1001032f,pcVar11);
      goto LAB_10008509;
    }
    if ((*(byte *)(param_1 + 0xfe0) & uVar9 < 0x40000000) != 0) goto LAB_10007a6d;
  }
  uVar8 = 0;
  (void)__atomic_exchange_n(&(param_1[0xfdf]),0,__ATOMIC_SEQ_CST);
  if (param_1[0xdcd] != 0) {
    param_1[0xe29] = 2;
  }
LAB_10008509:
  param_1[0x100] = uVar8;
  (void)__atomic_exchange_n(&(param_1[0xff]),1,__ATOMIC_SEQ_CST);
  return param_1[0x100] == 0;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280a04
#undef DAT_00280a3c
#undef DAT_1001016f
#undef DAT_1001032f
#undef DAT_10010385
#undef DAT_100103a8
#undef DAT_100103ad
#undef DAT_100103b2
#undef DAT_100105d8
#undef DAT_100105dd
#undef DAT_100105e2
#undef DAT_100105e5
#undef DAT_100105f0
#undef DAT_1001071d
#undef DAT_10010796
#undef DAT_100109b4
#undef DAT_1001108c
#undef Ram00280800
#undef Ram00280804
#undef Ram00280808
#undef UINT_00280834
#undef UINT_00280890
#undef UINT_00280898
#undef _DAT_00280a04
#undef _DAT_00280a3c
#undef str_1001038a
#undef str_1001039f
#undef str_10010418
#undef str_10010420
#undef str_10010439
#undef str_10010484
#undef str_1001049c
#undef str_100104c4
#undef str_100104eb
#undef str_10010518
#undef str_10010544
#undef str_10010587
#undef str_10010590
#undef str_10010598
#undef str_100105a0
#undef str_100105e8
#undef str_100105f5
#undef str_10010627
#undef str_1001063c
#undef str_1001067b
#undef str_10010686
#undef str_100106bd
#undef str_100106c6
#undef str_100106e5
#undef str_10010722
#undef str_10010739
#undef str_10010769
#undef str_10010781
#undef str_1001079b
#undef str_100107a4
#undef str_100107ae
#undef str_100107b5
#undef str_100107ee
#undef str_100107f5
#undef str_1001081a
#undef str_10010824
#undef str_10010857
#undef str_1001098c
#undef str_100109b7
#undef str_100109ea
#undef str_10010a15
#undef str_10010a34
#undef str_10010a6b
#undef str_10010baf
#undef local_384
#undef local_380
#undef local_334
#undef local_2d4
#undef local_214
#undef local_210
#undef local_20c
#undef local_3bc
#undef local_3b8
#undef local_3b4
#undef local_3b0
#undef local_394
#undef local_390
#undef local_38c
#undef local_388

#define local_78 (*(undefined2 *)(pf_stack_frame + 40))
#define local_76 (*(undefined1 *)(pf_stack_frame + 42))
#define in_stack_ffffff7c (*(undefined4 *)(pf_stack_frame + 28))
#define local_74 (*(uint *)(pf_stack_frame + 44))
#define local_6c (*(int *)(pf_stack_frame + 52))
#define local_68 (*(uint *)(pf_stack_frame + 56))
#define local_64 (*(uint *)(pf_stack_frame + 60))
#define local_60 (*(uint *)(pf_stack_frame + 64))
#define local_5c (*(uint *)(pf_stack_frame + 68))
#define local_58 (*(uint *)(pf_stack_frame + 72))
#define local_54 (*(void * *)(pf_stack_frame + 76))
#define local_50 (*(uint *)(pf_stack_frame + 80))
#define local_4c (*(uint *)(pf_stack_frame + 84))
#define local_48 (*(int *)(pf_stack_frame + 88))
#define local_44 (*(uint *)(pf_stack_frame + 92))
#define local_40 (*(uint *)(pf_stack_frame + 96))
#define local_3c (*(uint *)(pf_stack_frame + 100))
#define local_38 (*(uint *)(pf_stack_frame + 104))
#define local_34 (*(uint *)(pf_stack_frame + 108))
#define local_30 (*(int *)(pf_stack_frame + 112))
#define local_2c (*(uint *)(pf_stack_frame + 116))
#define local_28 (*(int *)(pf_stack_frame + 120))
#define local_24 (*(uint *)(pf_stack_frame + 124))
#define local_20 (*(uint *)(pf_stack_frame + 128))
#define local_18 (*(int *)(pf_stack_frame + 136))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008760
 */

void recovered_10008760(void *reg_ecx)

{
  unsigned char pf_stack_frame[192] __attribute__((aligned(16))) = {0};

  void *reg_ecx_00;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined1 uVar6;
  undefined4 uVar5;

  uVar6 = (undefined1)((uint)in_stack_ffffff7c >> 0x18);
  recovered_10009a90((int *)&local_78,(int)reg_ecx);
  local_58 = local_74;
  local_68 = 0x12;
  if (0x15 < local_6c + -0x1e) {
    local_68 = local_6c + -0x22;
  }
  recovered_1000f7e0(&local_24,(int)reg_ecx);
  local_3c = thunk_terror_ui_colour(0xb);
  local_40 = local_3c >> 0x10;
  recovered_10009a90((int *)&local_78,(int)reg_ecx);
  local_2c = local_74;
  local_30 = local_6c;
  uVar3 = (local_74 - 0x1e) + local_6c;
  recovered_10009a90((int *)&local_78,(int)reg_ecx);
  local_44 = local_74;
  local_48 = local_6c;
  local_28 = local_6c + local_74;
  local_4c = uVar3;
  if (*(char *)((int)reg_ecx + 0x345) == '\x01') {
    local_64 = local_68 + local_58;
  }
  else {
    if ((int)local_58 < (int)uVar3) {
      uVar3 = local_58;
    }
    local_64 = local_68 + local_58;
    iVar4 = local_64;
    if ((int)local_64 < local_28) {
      iVar4 = local_28;
    }
    pf_app_terror_ui_scrollbar_capture((void *)((int)reg_ecx + 0x348),reg_ecx,10,uVar3,0xc,iVar4 - uVar3);
    uVar6 = (undefined1)(uVar3 >> 0x18);
  }
  uVar3 = 0x20;
  if (*(uint *)((int)reg_ecx + 0x340) < 0x20) {
    uVar3 = *(uint *)((int)reg_ecx + 0x340);
  }
  local_50 = (uVar3 * -0x40 + 0xc00) * uVar3 * 0x20 * uVar3 * 0x20;
  local_5c = (local_50 + 0x80000 >> 0x14) * 10 + 0x200 >> 10;
  uVar3 = local_5c + 2;
  uVar1 = thunk_terror_ui_colour(5);
  uVar2 = local_58;
  local_78 = CONCAT11((char)(uVar1 >> 8),(char)(uVar1 >> 0x10));
  local_76 = (undefined1)uVar1;
  uVar5 = CONCAT22(CONCAT11(uVar6,local_76),local_78);
  recovered_1000f9c0((int)reg_ecx,10,local_58,uVar3,local_68,uVar5);
  uVar6 = (undefined1)((uint)uVar5 >> 0x18);
  uVar1 = thunk_terror_ui_colour(8);
  local_78 = CONCAT11((char)(uVar1 >> 8),(char)(uVar1 >> 0x10));
  local_76 = (undefined1)uVar1;
  uVar5 = CONCAT22(CONCAT11(uVar6,local_76),local_78);
  local_60 = uVar3;
  recovered_1000f9c0((int)reg_ecx,10,uVar2,uVar3,1,uVar5);
  uVar5 = CONCAT22(CONCAT11((char)((uint)uVar5 >> 0x18),local_76),local_78);
  recovered_1000f9c0((int)reg_ecx,10,local_64 - 1,uVar3,1,uVar5);
  uVar3 = local_68;
  uVar5 = CONCAT22(CONCAT11((char)((uint)uVar5 >> 0x18),local_76),local_78);
  recovered_1000f9c0((int)reg_ecx,10,uVar2,1,local_68,uVar5);
  local_58 = local_5c + 0xb;
  uVar5 = CONCAT22(CONCAT11((char)((uint)uVar5 >> 0x18),local_76),local_78);
  recovered_1000f9c0((int)reg_ecx,local_58,uVar2,1,uVar3,uVar5);
  uVar6 = (undefined1)((uint)uVar5 >> 0x18);
  local_54 = reg_ecx;
  if (0 < local_18) {
    uVar3 = (uint)(0x337ffff < local_50);
    local_38 = local_24;
    local_64 = local_20;
    local_50 = local_24 + uVar3;
    local_34 = local_20 + uVar3;
    iVar4 = local_60 + uVar3 * -2;
    local_68 = local_18;
    uVar2 = thunk_terror_ui_colour(6);
    reg_ecx = local_54;
    local_78 = CONCAT11((char)(uVar2 >> 8),(char)(uVar2 >> 0x10));
    local_76 = (undefined1)uVar2;
    uVar5 = CONCAT22(CONCAT11(uVar6,local_76),local_78);
    recovered_1000f9c0((int)local_54,local_50,local_34,iVar4,local_18 + uVar3 * -2,uVar5);
    uVar6 = (undefined1)((uint)uVar5 >> 0x18);
    uVar1 = thunk_terror_ui_colour(9);
    uVar2 = local_38;
    uVar3 = local_64;
    local_78 = CONCAT11((char)(uVar1 >> 8),(char)(uVar1 >> 0x10));
    local_76 = (undefined1)uVar1;
    uVar5 = CONCAT22(CONCAT11(uVar6,local_76),local_78);
    recovered_1000f9c0((int)reg_ecx,local_38,local_64,local_60,1,uVar5);
    uVar5 = CONCAT22(CONCAT11((char)((uint)uVar5 >> 0x18),local_76),local_78);
    recovered_1000f9c0((int)reg_ecx,uVar2,local_68 + -1 + uVar3,local_60,1,uVar5);
    uVar5 = CONCAT22(CONCAT11((char)((uint)uVar5 >> 0x18),local_76),local_78);
    recovered_1000f9c0((int)reg_ecx,uVar2,uVar3,1,local_68,uVar5);
    uVar5 = CONCAT22(CONCAT11((char)((uint)uVar5 >> 0x18),local_76),local_78);
    recovered_1000f9c0((int)reg_ecx,local_5c + 1 + uVar2,uVar3,1,local_68,uVar5);
    uVar6 = (undefined1)((uint)uVar5 >> 0x18);
  }
  local_64 = local_48 + -0xe + local_44;
  uVar1 = thunk_terror_ui_colour(7);
  uVar2 = local_4c;
  uVar3 = local_60;
  local_78 = CONCAT11((char)(uVar1 >> 8),(char)(uVar1 >> 0x10));
  local_76 = (undefined1)uVar1;
  uVar5 = CONCAT22(CONCAT11(uVar6,local_76),local_78);
  recovered_1000f9c0((int)reg_ecx,10,local_4c,local_60,0xe,uVar5);
  uVar6 = (undefined1)((uint)uVar5 >> 0x18);
  uVar1 = thunk_terror_ui_colour(10);
  local_78 = CONCAT11((char)(uVar1 >> 8),(char)(uVar1 >> 0x10));
  local_76 = (undefined1)uVar1;
  uVar5 = CONCAT22(CONCAT11(uVar6,local_76),local_78);
  recovered_1000f9c0((int)reg_ecx,10,uVar2,uVar3,1,uVar5);
  uVar5 = CONCAT22(CONCAT11((char)((uint)uVar5 >> 0x18),local_76),local_78);
  recovered_1000f9c0((int)reg_ecx,10,uVar2 + 0xd,uVar3,1,uVar5);
  uVar5 = CONCAT22(CONCAT11((char)((uint)uVar5 >> 0x18),local_76),local_78);
  recovered_1000f9c0((int)reg_ecx,10,uVar2,1,0xe,uVar5);
  uVar5 = CONCAT22(CONCAT11((char)((uint)uVar5 >> 0x18),local_76),local_78);
  recovered_1000f9c0((int)reg_ecx,local_58,uVar2,1,0xe,uVar5);
  local_78 = CONCAT11((char)(local_3c >> 8),(char)local_40);
  local_76 = (undefined1)local_3c;
  local_4c = uVar3 >> 1;
  uVar3 = local_4c + 10;
  local_5c = local_5c + 3 >> 1;
  uVar2 = 4;
  if (local_5c < 4) {
    uVar2 = local_5c;
  }
  uVar1 = (local_2c - 0x1b) + local_30;
  iVar4 = 1;
  do {
    uVar5 = CONCAT22(CONCAT11((char)((uint)uVar5 >> 0x18),local_76),local_78);
    local_68 = uVar2;
    recovered_1000f9c0((int)local_54,uVar3,uVar1,iVar4,1,uVar5);
    uVar6 = (undefined1)((uint)uVar5 >> 0x18);
    uVar3 = uVar3 - 1;
    iVar4 = iVar4 + 2;
    uVar1 = uVar1 + 1;
    uVar2 = local_68 - 1;
  } while (uVar2 != 0);
  uVar1 = thunk_terror_ui_colour(7);
  reg_ecx_00 = local_54;
  uVar2 = local_60;
  uVar3 = local_64;
  local_78 = CONCAT11((char)(uVar1 >> 8),(char)(uVar1 >> 0x10));
  local_76 = (undefined1)uVar1;
  uVar5 = CONCAT22(CONCAT11(uVar6,local_76),local_78);
  recovered_1000f9c0((int)local_54,10,local_64,local_60,0xe,uVar5);
  uVar6 = (undefined1)((uint)uVar5 >> 0x18);
  uVar1 = thunk_terror_ui_colour(10);
  local_78 = CONCAT11((char)(uVar1 >> 8),(char)(uVar1 >> 0x10));
  local_76 = (undefined1)uVar1;
  uVar5 = CONCAT22(CONCAT11(uVar6,local_76),local_78);
  recovered_1000f9c0((int)reg_ecx_00,10,uVar3,uVar2,1,uVar5);
  uVar5 = CONCAT22(CONCAT11((char)((uint)uVar5 >> 0x18),local_76),local_78);
  recovered_1000f9c0((int)reg_ecx_00,10,local_28 - 1,uVar2,1,uVar5);
  uVar5 = CONCAT22(CONCAT11((char)((uint)uVar5 >> 0x18),local_76),local_78);
  recovered_1000f9c0((int)reg_ecx_00,10,uVar3,1,0xe,uVar5);
  uVar5 = CONCAT22(CONCAT11((char)((uint)uVar5 >> 0x18),local_76),local_78);
  recovered_1000f9c0((int)reg_ecx_00,local_58,uVar3,1,0xe,uVar5);
  local_78 = CONCAT11((char)(local_3c >> 8),(char)local_40);
  local_76 = (undefined1)local_3c;
  uVar3 = 4;
  if (local_5c < 4) {
    uVar3 = local_5c;
  }
  uVar2 = local_48 + -9 + local_44;
  iVar4 = uVar3 * 2 + -1;
  uVar3 = (local_4c - uVar3) + 0xb;
  do {
    uVar5 = CONCAT22(CONCAT11((char)((uint)uVar5 >> 0x18),local_76),local_78);
    recovered_1000f9c0((int)local_54,uVar3,uVar2,iVar4,1,uVar5);
    iVar4 = iVar4 + -2;
    uVar2 = uVar2 + 1;
    uVar3 = uVar3 + 1;
  } while (iVar4 != -1);
  return;
}

#undef local_78
#undef local_76
#undef in_stack_ffffff7c
#undef local_74
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
#undef local_30
#undef local_2c
#undef local_28
#undef local_24
#undef local_20
#undef local_18

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef Ram00280800
#define Ram00280800 (*(uint32_t *)(0x280800U))
#undef Ram00280804
#define Ram00280804 (*(uint32_t *)(0x280804U))
#undef Ram00280808
#define Ram00280808 (*(uint32_t *)(0x280808U))
#undef UINT_00280854
#define UINT_00280854 (*(uint *)(0x280854U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008ec0
 */

undefined4 recovered_10008ec0(int reg_ecx,uint reg_edx)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  code *pcVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined4 unaff_EBX = 0;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;

  if ((reg_ecx != 0) && (reg_edx != 0)) {
    uVar7 = *(uint *)(reg_ecx + 0x40c);
    bVar8 = *(void **)(reg_ecx + 0x408) == (void *)0x0;
    iVar4 = CONCAT22((short)((uint)unaff_EBX >> 0x10),CONCAT11(uVar7 < reg_edx || bVar8,bVar8));
    if (uVar7 < reg_edx || bVar8) {
      uVar6 = 0x40;
      if (uVar7 != 0) {
        uVar6 = uVar7;
      }
      if (uVar6 < reg_edx) {
        do {
          bVar8 = (int)uVar6 < 0;
          uVar6 = uVar6 * 2;
          if (bVar8) {
            uVar6 = reg_edx;
          }
        } while (uVar6 < reg_edx);
      }
      iVar4 = Ram00280800;
      if (iVar4 != 0x50414d57) {
        return 0;
      }
      iVar4 = Ram00280804;
      if (iVar4 == 0) {
        return 0;
      }
      uVar7 = Ram00280808;
      if (uVar7 < 0xc) {
        return 0;
      }
      uVar7 = Ram00280808;
      if (uVar7 < 0x58) {
        return 0;
      }
      pcVar1 = (code *)UINT_00280854;
      if (pcVar1 == (code *)0x0) {
        return 0;
      }
      puVar3 = (*pcVar1)(*(void **)(reg_ecx + 0x408),uVar6);
      if (puVar3 == (undefined1 *)0x0) {
        return 0;
      }
      if (*(int *)(reg_ecx + 0x408) == 0) {
        *puVar3 = 0;
      }
      *(undefined1 **)(reg_ecx + 0x408) = puVar3;
      *(uint *)(reg_ecx + 0x40c) = uVar6;
      iVar4 = reg_ecx;
    }
    uVar7 = 0x1000;
    if (0x1000 < reg_edx) {
      uVar7 = reg_edx;
    }
    uVar6 = *(uint *)(reg_ecx + 0x414);
    uVar5 = CONCAT31((int3)((uint)iVar4 >> 8),1);
    if (uVar7 <= uVar6 && *(void **)(reg_ecx + 0x410) != (void *)0x0) {
      return uVar5;
    }
    uVar2 = 0x40;
    if (uVar6 != 0) {
      uVar2 = uVar6;
    }
    while (uVar2 < uVar7) {
      bVar8 = (int)uVar2 < 0;
      uVar6 = uVar2 * 2;
      uVar2 = uVar2 * 2;
      if (bVar8) {
        uVar6 = uVar7;
        uVar2 = uVar7;
      }
    }
    iVar4 = Ram00280800;
    if ((((iVar4 == 0x50414d57) && (iVar4 = Ram00280804, iVar4 != 0)) &&
        (uVar7 = Ram00280808, 0xb < uVar7)) &&
       (((uVar7 = Ram00280808, 0x57 < uVar7 &&
         (pcVar1 = (code *)UINT_00280854, pcVar1 != (code *)0x0)) &&
        (puVar3 = (*pcVar1)(*(void **)(reg_ecx + 0x410),uVar6), puVar3 != (undefined1 *)0x0)))) {
      if (*(int *)(reg_ecx + 0x410) == 0) {
        *puVar3 = 0;
      }
      *(undefined1 **)(reg_ecx + 0x410) = puVar3;
      *(uint *)(reg_ecx + 0x414) = uVar6;
      return uVar5;
    }
  }
  return 0;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef Ram00280800
#undef Ram00280804
#undef Ram00280808
#undef UINT_00280854

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef Ram00280800
#define Ram00280800 (*(uint32_t *)(0x280800U))
#undef Ram00280804
#define Ram00280804 (*(uint32_t *)(0x280804U))
#undef Ram00280808
#define Ram00280808 (*(uint32_t *)(0x280808U))
#undef UINT_00280850
#define UINT_00280850 (*(uint *)(0x280850U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009070
 */

void recovered_10009070(int reg_ecx)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  code *pcVar3;

  iVar1 = Ram00280800;
  if ((((iVar1 == 0x50414d57) && (iVar1 = Ram00280804, iVar1 != 0)) &&
      (uVar2 = Ram00280808, 0xb < uVar2)) &&
     ((uVar2 = Ram00280808, 0x53 < uVar2 && (pcVar3 = (code *)UINT_00280850, pcVar3 != (code *)0x0))
     )) {
    (*pcVar3)(*(void **)(reg_ecx + 0x3ac));
  }
  iVar1 = Ram00280800;
  if (((iVar1 == 0x50414d57) && (iVar1 = Ram00280804, iVar1 != 0)) &&
     ((uVar2 = Ram00280808, 0xb < uVar2 &&
      ((uVar2 = Ram00280808, 0x53 < uVar2 && (pcVar3 = (code *)UINT_00280850, pcVar3 != (code *)0x0)
       ))))) {
    (*pcVar3)(*(void **)(reg_ecx + 0x408));
  }
  iVar1 = Ram00280800;
  if ((((iVar1 == 0x50414d57) && (iVar1 = Ram00280804, iVar1 != 0)) &&
      (uVar2 = Ram00280808, 0xb < uVar2)) &&
     ((uVar2 = Ram00280808, 0x53 < uVar2 && (pcVar3 = (code *)UINT_00280850, pcVar3 != (code *)0x0))
     )) {
    (*pcVar3)(*(void **)(reg_ecx + 0x410));
  }
  *(undefined4 *)(reg_ecx + 0x410) = 0;
  *(undefined4 *)(reg_ecx + 0x408) = 0;
  *(undefined4 *)(reg_ecx + 0x3ac) = 0;
  *(undefined4 *)(reg_ecx + 0x3b0) = 0;
  *(undefined4 *)(reg_ecx + 0x3b4) = 0;
  *(undefined4 *)(reg_ecx + 0x414) = 0;
  *(undefined4 *)(reg_ecx + 0x40c) = 0;
  return;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef Ram00280800
#undef Ram00280804
#undef Ram00280808
#undef UINT_00280850

#undef DAT_1001016f
#define DAT_1001016f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2d6U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100091a0
 */

void recovered_100091a0(int reg_ecx,char *reg_edx)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  if (reg_edx == (char *)0x0) {
    reg_edx = &DAT_1001016f;
  }
  uVar1 = thunk_strlen(reg_edx);
  recovered_10009300(reg_ecx,(byte *)reg_edx,uVar1,'\0');
  return;
}

#undef DAT_1001016f

#undef DAT_1001016f
#define DAT_1001016f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2d6U)))
#define local_28 (*(char * *)(pf_stack_frame + 24))
#define local_24 (*(int (*)[9])(pf_stack_frame + 28))
#define local_18 (*(int *)(pf_stack_frame + 40))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100091f0
 */

int recovered_100091f0(int reg_ecx)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  int iVar2;
  int iVar3;
  char *reg_edx;
  uint uVar4;

  if (reg_ecx == 0) {
    uVar4 = 0;
    recovered_10009a90(local_24,0);
  }
  else {
    uVar1 = recovered_10009740(reg_ecx);
    if ((char)uVar1 == '\0') {
      if (*(int *)(reg_ecx + 0x3bc) < 1) {
        uVar4 = 0;
      }
      else {
        iVar3 = 0;
        local_28 = &DAT_1001016f;
        uVar4 = 0;
        do {
          iVar2 = *(int *)(reg_ecx + 0x374);
          reg_edx = local_28;
          if (iVar2 != 0) {
            reg_edx = (char *)(*(int *)(reg_ecx + 0x378) + *(int *)(iVar2 + iVar3 * 8));
          }
          iVar2 = recovered_10009920(reg_ecx,reg_edx,*(uint *)(iVar2 + 4 + iVar3 * 8));
          if ((int)(uVar4 ^ 0x7fffffff) < iVar2) {
            uVar4 = 0x7fffffff;
            break;
          }
          uVar4 = uVar4 + iVar2;
          iVar3 = iVar3 + 1;
        } while (iVar3 < *(int *)(reg_ecx + 0x3bc));
      }
    }
    else {
      uVar4 = *(uint *)(*(int *)(reg_ecx + 0x3c0) + *(int *)(reg_ecx + 0x3bc) * 8);
      if (0x7ffffffe < uVar4) {
        uVar4 = 0x7fffffff;
      }
      if (*(int *)(*(int *)(reg_ecx + 0x3c0) + 4 + *(int *)(reg_ecx + 0x3bc) * 8) != 0) {
        uVar4 = 0x7fffffff;
      }
    }
    recovered_10009a90(local_24,reg_ecx);
    iVar3 = *(int *)(reg_ecx + 0x3a8);
    if (0 < iVar3) goto LAB_100092d5;
  }
  iVar3 = 10;
LAB_100092d5:
  local_18 = local_18 / (iVar3 + 2);
  iVar3 = 1;
  if (1 < local_18) {
    iVar3 = local_18;
  }
  iVar2 = 0;
  if (0 < (int)(uVar4 - iVar3)) {
    iVar2 = uVar4 - iVar3;
  }
  return iVar2;
}

#undef DAT_1001016f
#undef local_28
#undef local_24
#undef local_18

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef Ram00280800
#define Ram00280800 (*(uint32_t *)(0x280800U))
#undef Ram00280804
#define Ram00280804 (*(uint32_t *)(0x280804U))
#undef Ram00280808
#define Ram00280808 (*(uint32_t *)(0x280808U))
#undef UINT_0028084c
#define UINT_0028084c (*(uint *)(0x28084cU))
#undef UINT_00280850
#define UINT_00280850 (*(uint *)(0x280850U))
#undef UINT_00280854
#define UINT_00280854 (*(uint *)(0x280854U))
#define local_20 (*(undefined1 * *)(pf_stack_frame + 16))
#define local_1c (*(int *)(pf_stack_frame + 20))
#define local_18 (*(byte * *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009300
 */

undefined4 recovered_10009300(int reg_ecx,byte *reg_edx,uint param_3,char param_4)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  byte *pbVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  byte bVar6;
  ulong uVar7;
  byte *dst;
  undefined4 uVar8;
  uint uVar9;
  void *pvVar10;
  undefined3 uVar11;
  undefined4 uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  bool bVar16;

  if (reg_edx == (byte *)0x0 || reg_ecx == 0) {
    return 0;
  }
  uVar9 = *(uint *)(reg_ecx + 0x37c);
  local_18 = (byte *)0x0;
  if (-uVar9 - 2 < param_3 || uVar9 == 0xffffffff) {
    return 0;
  }
  pbVar1 = *(byte **)(reg_ecx + 0x378);
  dst = reg_edx;
  if ((uint)((int)reg_edx - (int)pbVar1) < uVar9 && (pbVar1 <= reg_edx && pbVar1 != (byte *)0x0)) {
    uVar7 = thunk_strlen((char *)reg_edx);
    if ((((uVar7 != 0xffffffff) && (iVar3 = Ram00280800, iVar3 == 0x50414d57)) &&
        (iVar3 = Ram00280804, iVar3 != 0)) &&
       (((uVar9 = Ram00280808, 0xb < uVar9 && (uVar9 = Ram00280808, 0x4f < uVar9)) &&
        (pcVar5 = (code *)UINT_0028084c, pcVar5 != (code *)0x0)))) {
      dst = (*pcVar5)(uVar7 + 1);
      if (dst != (byte *)0x0) {
        thunk_memcpy(dst,reg_edx,uVar7 + 1);
        local_18 = dst;
        goto LAB_100093fb;
      }
    }
LAB_10009455:
    uVar8 = 0;
  }
  else {
LAB_100093fb:
    uVar9 = *(uint *)(reg_ecx + 0x3bc);
    if (uVar9 == 0x7fffffff) {
LAB_1000940b:
      iVar3 = Ram00280800;
      if ((((iVar3 != 0x50414d57) || (iVar3 = Ram00280804, iVar3 == 0)) ||
          (uVar9 = Ram00280808, uVar9 < 0xc)) || (uVar9 = Ram00280808, uVar9 < 0x54))
      goto LAB_10009455;
      pcVar5 = (code *)UINT_00280850;
      uVar12 = 0;
      uVar8 = 0;
    }
    else {
      uVar2 = *(uint *)(reg_ecx + 0x3b8);
      if ((int)uVar2 <= (int)uVar9) {
        uVar13 = uVar2;
        if (uVar2 == 0) {
          uVar13 = 0x10;
        }
        uVar14 = 0x1fffffff;
        if (uVar13 < 0x10000000) {
          uVar14 = uVar13 * 2;
        }
        if (uVar2 == 0) {
          uVar14 = 0x10;
        }
        if (uVar14 < 0x20000000 && uVar9 < uVar14) {
          iVar3 = Ram00280800;
          if (((iVar3 == 0x50414d57) && (iVar3 = Ram00280804, iVar3 != 0)) &&
             ((uVar9 = Ram00280808, 0xb < uVar9 &&
              (((uVar9 = Ram00280808, 0x57 < uVar9 &&
                (pcVar5 = (code *)UINT_00280854, pcVar5 != (code *)0x0)) &&
               (pvVar10 = (*pcVar5)(*(void **)(reg_ecx + 0x374),uVar14 * 8), pvVar10 != (void *)0x0)
               ))))) {
            *(void **)(reg_ecx + 0x374) = pvVar10;
            *(uint *)(reg_ecx + 0x3b8) = uVar14;
            goto LAB_10009469;
          }
        }
        goto LAB_1000940b;
      }
LAB_10009469:
      local_1c = *(int *)(reg_ecx + 0x37c);
      uVar9 = local_1c + param_3 + 1;
      if (uVar9 == 0) goto LAB_1000940b;
      local_20 = *(undefined1 **)(reg_ecx + 0x378);
      uVar2 = *(uint *)(reg_ecx + 0x380);
      if (uVar2 < uVar9 || local_20 == (undefined1 *)0x0) {
        uVar13 = 0x40;
        if (uVar2 != 0) {
          uVar13 = uVar2;
        }
        if (uVar13 < uVar9) {
          do {
            bVar16 = (int)uVar13 < 0;
            uVar13 = uVar13 * 2;
            if (bVar16) {
              uVar13 = uVar9;
            }
          } while (uVar13 < uVar9);
        }
        iVar3 = Ram00280800;
        if (((iVar3 != 0x50414d57) || (iVar3 = Ram00280804, iVar3 == 0)) ||
           (((uVar9 = Ram00280808, uVar9 < 0xc ||
             ((uVar9 = Ram00280808, uVar9 < 0x58 ||
              (pcVar5 = (code *)UINT_00280854, pcVar5 == (code *)0x0)))) ||
            (local_20 = (*pcVar5)(local_20,uVar13), local_20 == (undefined1 *)0x0))))
        goto LAB_1000940b;
        if (*(int *)(reg_ecx + 0x378) == 0) {
          *local_20 = 0;
        }
        *(undefined1 **)(reg_ecx + 0x378) = local_20;
        *(uint *)(reg_ecx + 0x380) = uVar13;
        local_1c = *(int *)(reg_ecx + 0x37c);
      }
      iVar3 = *(int *)(reg_ecx + 0x3bc);
      if (param_3 == 0) {
        iVar15 = 0;
      }
      else {
        iVar15 = 0;
        do {
          bVar6 = *dst;
          if ((param_4 == '\0') || (bVar6 != 0xd)) {
            if (bVar6 < 0x21) {
              bVar6 = 0x20;
            }
            *(byte *)(iVar15 + *(int *)(reg_ecx + 0x378) + local_1c) = bVar6;
            iVar15 = iVar15 + 1;
          }
          dst = dst + 1;
          param_3 = param_3 - 1;
        } while (param_3 != 0);
        local_20 = *(undefined1 **)(reg_ecx + 0x378);
      }
      local_20[iVar15 + local_1c] = 0;
      iVar4 = *(int *)(reg_ecx + 0x374);
      *(int *)(iVar4 + iVar3 * 8) = local_1c;
      *(int *)(iVar4 + 4 + iVar3 * 8) = iVar15;
      local_1c = iVar15 + 1 + local_1c;
      *(int *)(reg_ecx + 0x37c) = local_1c;
      *(int *)(reg_ecx + 0x3bc) = *(int *)(reg_ecx + 0x3bc) + 1;
      *(undefined4 *)(reg_ecx + 0x3e0) = 0;
      if (iVar3 < *(int *)(reg_ecx + 0x3c8)) {
        *(int *)(reg_ecx + 0x3c8) = iVar3;
      }
      if (*(int *)(reg_ecx + 0x3d0) == iVar3) {
        *(undefined4 *)(reg_ecx + 0x3d0) = 0xffffffff;
      }
      iVar15 = Ram00280800;
      uVar11 = (undefined3)((uint)local_1c >> 8);
      uVar8 = CONCAT31(uVar11,1);
      if (iVar15 != 0x50414d57) {
        return uVar8;
      }
      iVar15 = Ram00280804;
      if (iVar15 == 0) {
        return uVar8;
      }
      uVar9 = Ram00280808;
      if (uVar9 < 0xc) {
        return uVar8;
      }
      uVar9 = Ram00280808;
      if (uVar9 < 0x54) {
        return uVar8;
      }
      pcVar5 = (code *)UINT_00280850;
      uVar12 = CONCAT31((int3)((uint)iVar3 >> 8),1);
      uVar8 = CONCAT31(uVar11,1);
    }
    if (pcVar5 != (code *)0x0) {
      (*pcVar5)(local_18);
      uVar8 = uVar12;
    }
  }
  return uVar8;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef Ram00280800
#undef Ram00280804
#undef Ram00280808
#undef UINT_0028084c
#undef UINT_00280850
#undef UINT_00280854
#undef local_20
#undef local_1c
#undef local_18

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_1001016f
#define DAT_1001016f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2d6U)))
#undef Ram00280800
#define Ram00280800 (*(uint32_t *)(0x280800U))
#undef Ram00280804
#define Ram00280804 (*(uint32_t *)(0x280804U))
#undef Ram00280808
#define Ram00280808 (*(uint32_t *)(0x280808U))
#undef UINT_00280854
#define UINT_00280854 (*(uint *)(0x280854U))
#define local_28 (*(uint *)(pf_stack_frame + 24))
#define local_24 (*(int (*)[9])(pf_stack_frame + 28))
#define local_1c (*(int *)(pf_stack_frame + 36))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009740
 */

undefined4 recovered_10009740(int reg_ecx)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  uint uVar1;
  code *pcVar2;
  void *pvVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  char *reg_edx;
  int iVar8;
  uint uVar9;
  bool bVar10;

  if (*(int *)(reg_ecx + 0x374) != 0) {
    iVar7 = *(int *)(reg_ecx + 0x3bc);
    uVar5 = iVar7 + 1;
    if (uVar5 < 0x20000000) {
      uVar1 = *(uint *)(reg_ecx + 0x3c4);
      if (uVar1 < uVar5) {
        uVar9 = 0x10;
        if (uVar1 != 0) {
          uVar9 = uVar1;
        }
        for (; uVar9 < uVar5; uVar9 = uVar9 * 2) {
          if (0xfffffff < uVar9) {
            uVar9 = uVar5;
            break;
          }
        }
        iVar7 = Ram00280800;
        if (iVar7 != 0x50414d57) {
          return 0;
        }
        iVar7 = Ram00280804;
        if (iVar7 == 0) {
          return 0;
        }
        uVar5 = Ram00280808;
        if (uVar5 < 0xc) {
          return 0;
        }
        uVar5 = Ram00280808;
        if (uVar5 < 0x58) {
          return 0;
        }
        pcVar2 = (code *)UINT_00280854;
        if (pcVar2 == (code *)0x0) {
          return 0;
        }
        pvVar3 = (*pcVar2)(*(void **)(reg_ecx + 0x3c0),uVar9 * 8);
        if (pvVar3 == (void *)0x0) {
          return 0;
        }
        *(void **)(reg_ecx + 0x3c0) = pvVar3;
        *(uint *)(reg_ecx + 0x3c4) = uVar9;
        iVar7 = *(int *)(reg_ecx + 0x3bc);
      }
      recovered_10009a90(local_24,reg_ecx);
      iVar4 = 6;
      if (0 < *(int *)(reg_ecx + 0x3a4)) {
        iVar4 = *(int *)(reg_ecx + 0x3a4);
      }
      iVar4 = (local_1c + -8) / iVar4;
      iVar8 = 1;
      if (1 < iVar4) {
        iVar8 = iVar4;
      }
      if ((iVar8 != *(int *)(reg_ecx + 0x3cc)) || (iVar4 = *(int *)(reg_ecx + 0x3c8), iVar7 < iVar4)
         ) {
        *(undefined4 *)(reg_ecx + 0x3c8) = 0;
        *(int *)(reg_ecx + 0x3cc) = iVar8;
        iVar4 = 0;
      }
      puVar6 = *(undefined4 **)(reg_ecx + 0x3c0);
      puVar6[1] = 0;
      *puVar6 = 0;
      if (iVar4 < iVar7) {
        local_28 = puVar6[iVar4 * 2];
        iVar8 = puVar6[iVar4 * 2 + 1];
        do {
          iVar7 = *(int *)(reg_ecx + 0x374);
          reg_edx = &DAT_1001016f;
          if (-1 < iVar4 && iVar7 != 0) {
            reg_edx = (char *)(*(int *)(reg_ecx + 0x378) + *(int *)(iVar7 + iVar4 * 8));
          }
          uVar5 = recovered_10009920(reg_ecx,reg_edx,*(uint *)(iVar7 + 4 + iVar4 * 8));
          bVar10 = CARRY4(local_28,uVar5);
          local_28 = local_28 + uVar5;
          iVar8 = iVar8 + ((int)uVar5 >> 0x1f) + (uint)bVar10;
          puVar6 = *(undefined4 **)(reg_ecx + 0x3c0);
          puVar6[iVar4 * 2 + 2] = local_28;
          puVar6[iVar4 * 2 + 3] = iVar8;
          iVar4 = iVar4 + 1;
          iVar7 = *(int *)(reg_ecx + 0x3bc);
        } while (iVar4 < iVar7);
      }
      *(int *)(reg_ecx + 0x3c8) = iVar7;
      return CONCAT31((int3)((uint)puVar6 >> 8),1);
    }
  }
  return 0;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_1001016f
#undef Ram00280800
#undef Ram00280804
#undef Ram00280808
#undef UINT_00280854
#undef local_28
#undef local_24
#undef local_1c

#define local_24 (*(int (*)[9])(pf_stack_frame + 28))
#define local_1c (*(int *)(pf_stack_frame + 36))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009920
 */

int recovered_10009920(int reg_ecx,char *reg_edx,uint param_3)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  char cVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;

  recovered_10009a90(local_24,reg_ecx);
  if (reg_ecx == 0) {
    iVar4 = 6;
  }
  else {
    iVar4 = 6;
    if (0 < *(int *)(reg_ecx + 0x3a4)) {
      iVar4 = *(int *)(reg_ecx + 0x3a4);
    }
  }
  uVar3 = (local_1c + -8) / iVar4;
  iVar4 = 1;
  if ((int)uVar3 < 2) {
    uVar3 = 1;
  }
  if ((reg_edx == (char *)0x0) || (*reg_edx == '\0')) {
LAB_10009a79:
  }
  else {
    iVar6 = 0;
    if (param_3 != 0) {
      uVar7 = 0;
LAB_1000998b:
      uVar9 = param_3 - uVar7;
      if (uVar3 < uVar9) {
        uVar8 = 0xffffffff;
        uVar5 = 0;
        do {
          cVar1 = reg_edx[uVar5 + uVar7];
          if (cVar1 == '\0') break;
          if (cVar1 == '\t') {
            uVar8 = uVar5;
          }
          if (cVar1 == ' ') {
            uVar8 = uVar5;
          }
          uVar5 = uVar5 + 1;
        } while (uVar3 != uVar5);
        uVar5 = uVar3;
        if ((int)uVar8 < 1) {
          do {
            if (!SBORROW1('\0',reg_edx[uVar5 + uVar7] & 0xc0)) goto LAB_10009a5d;
            bVar2 = 1 < (int)uVar5;
            uVar5 = uVar5 - 1;
          } while (bVar2);
          uVar5 = 1;
          do {
            if (!SBORROW1('\0',reg_edx[uVar5 + uVar7] & 0xc0)) goto LAB_10009a5d;
            uVar5 = uVar5 + 1;
          } while (uVar9 != uVar5);
          goto LAB_10009a13;
        }
        goto LAB_10009a17;
      }
LAB_10009a13:
      uVar8 = uVar9;
      if ((int)uVar9 < 1) goto LAB_10009a67;
      goto LAB_10009a17;
    }
LAB_10009a67:
    iVar4 = 1;
    if (1 < iVar6) {
      iVar4 = iVar6;
    }
  }
  return iVar4;
LAB_10009a5d:
  uVar8 = uVar5;
  if ((int)uVar5 < 1) goto LAB_10009a67;
LAB_10009a17:
  if (iVar6 == 0x7fffffff) {
    iVar4 = 0x7fffffff;
    goto LAB_10009a79;
  }
  iVar6 = iVar6 + 1;
  uVar7 = uVar8 + uVar7;
  if (uVar7 < param_3) {
    while ((reg_edx[uVar7] == ' ' || (reg_edx[uVar7] == '\t'))) {
      uVar7 = uVar7 + 1;
      if (param_3 <= uVar7) goto LAB_10009a67;
    }
  }
  if (param_3 <= uVar7) goto LAB_10009a67;
  goto LAB_1000998b;
}

#undef local_24
#undef local_1c

#undef DAT_1001108c
#define DAT_1001108c (*(int *)(((uintptr_t)pf_module_state + 0x11f3U)))
#define local_18 (*(int *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009a90
 */

void recovered_10009a90(int *reg_ecx,int reg_edx)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  uint uVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;

  if (reg_edx == 0) {
    *reg_ecx = 0x12;
    if (DAT_1001108c == 0) {
      reg_ecx[1] = 10;
      reg_ecx[2] = 0x2dc;
      reg_ecx[3] = 0x15e;
      return;
    }
    reg_ecx[1] = 0x46;
    reg_ecx[3] = 0x122;
    *reg_ecx = 0xe4;
    reg_ecx[2] = 0x208;
    return;
  }
  iVar3 = *(int *)(reg_edx + 0x3a8);
  if (iVar3 < 1) {
    *reg_ecx = 0x12;
    local_18 = 0x16;
  }
  else {
    local_18 = iVar3 + 0xc;
    *reg_ecx = 0x12;
  }
  if (DAT_1001108c == 0) {
    bVar2 = true;
    iVar5 = 10;
  }
  else {
    iVar5 = 0x56;
    if (0 < iVar3) {
      iVar5 = iVar3 + 0x4c;
    }
    iVar6 = 0x18;
    if (0 < iVar3) {
      iVar6 = iVar3 * 2 + 4;
    }
    if (0x207 < *(int *)(reg_edx + 4)) {
      iVar5 = 0x2e;
    }
    if (*(int *)(reg_edx + 4) == 0) {
      iVar5 = 0x2e;
    }
    iVar5 = iVar5 + iVar6;
    bVar2 = false;
  }
  reg_ecx[1] = iVar5;
  uVar1 = *(uint *)(reg_edx + 4);
  iVar3 = 0x2dc;
  if (uVar1 != 0) {
    iVar3 = uVar1 - 0x1c;
  }
  reg_ecx[2] = iVar3;
  iVar6 = 0x186;
  if (*(int *)(reg_edx + 8) != 0) {
    iVar6 = *(int *)(reg_edx + 8) + -10;
  }
  iVar5 = (iVar6 - (local_18 + iVar5)) + -8;
  reg_ecx[3] = iVar5;
  if (!bVar2) {
    iVar3 = 0xb0;
    if (699 < uVar1) {
      iVar3 = 0xe4;
    }
    iVar6 = 0xc;
    if (0x207 < (int)uVar1) {
      iVar6 = iVar3;
    }
    if (uVar1 == 0) {
      iVar6 = 0xe4;
    }
    *reg_ecx = iVar6;
    uVar4 = 0x2f8;
    if (uVar1 != 0) {
      uVar4 = uVar1;
    }
    iVar3 = (uVar4 - iVar6) + -0xc;
    reg_ecx[2] = iVar3;
  }
  iVar6 = 0xe;
  if (0 < *(int *)(reg_edx + 0x3a4)) {
    iVar6 = *(int *)(reg_edx + 0x3a4) + 8;
  }
  if (iVar3 < iVar6) {
    reg_ecx[2] = iVar6;
  }
  iVar3 = *(int *)(reg_edx + 0x3a8);
  if (iVar3 < 1) {
    iVar3 = 10;
    if (0xf < iVar5) {
      return;
    }
  }
  else if (iVar3 + 6 <= iVar5) {
    return;
  }
  reg_ecx[3] = iVar3 + 6;
  return;
}

#undef DAT_1001108c
#undef local_18

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_10011090
#define DAT_10011090 (*(uint *)(((uintptr_t)pf_module_state + 0x11f7U)))
#undef Ram00280800
#define Ram00280800 (*(uint32_t *)(0x280800U))
#undef Ram00280804
#define Ram00280804 (*(uint32_t *)(0x280804U))
#undef Ram00280808
#define Ram00280808 (*(uint32_t *)(0x280808U))
#undef UINT_00280854
#define UINT_00280854 (*(uint *)(0x280854U))
#undef str_10010234
#define str_10010234 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x39bU)))
#undef str_10010270
#define str_10010270 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3d7U)))
#undef str_1001029c
#define str_1001029c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x403U)))
#undef str_100102d5
#define str_100102d5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x43cU)))
#define local_24 (*(char * *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009c40
 */

undefined4 recovered_10009c40(int reg_ecx,byte *reg_edx)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  byte bVar1;
  uint uVar2;
  code *pcVar3;
  ulong uVar4;
  int iVar5;
  void *pvVar6;
  byte bVar7;
  byte *pbVar8;
  undefined4 uVar9;
  int iVar10;
  uint uVar11;

  if ((reg_edx == (byte *)0x0) || (*reg_edx == 0)) {
    return 0;
  }
  uVar4 = thunk_strlen((char *)reg_edx);
  local_24 = str_10010234;
  if (uVar4 < 0xea) {
    local_24 = str_10010234;
    bVar1 = *reg_edx;
    if (bVar1 == 0x24) {
LAB_10009cda:
      local_24 = str_10010270;
      pbVar8 = reg_edx;
      bVar7 = bVar1;
      do {
        pbVar8 = pbVar8 + 1;
        if (bVar7 < 0x20) goto LAB_10009cae;
        bVar7 = *pbVar8;
      } while (bVar7 != 0);
      iVar10 = *(int *)(reg_ecx + 0x389c);
      if (iVar10 != 0x20) {
        if (bVar1 != 0x24) {
LAB_10009d24:
          uVar2 = *(uint *)(reg_ecx + 0x3d5c);
          if (uVar2 <= *(uint *)(reg_ecx + 0x3d58)) {
            uVar11 = 0x80;
            if (uVar2 != 0) {
              uVar11 = uVar2 * 2;
            }
            local_24 = str_1001029c;
            if (0x10000 < uVar11 || uVar11 < uVar2) goto LAB_10009c7a;
            local_24 = str_1001029c;
            iVar10 = Ram00280800;
            if ((((iVar10 != 0x50414d57) || (iVar10 = Ram00280804, iVar10 == 0)) ||
                ((uVar2 = Ram00280808, uVar2 < 0xc ||
                 ((uVar2 = Ram00280808, uVar2 < 0x58 ||
                  (pcVar3 = (code *)UINT_00280854, pcVar3 == (code *)0x0)))))) ||
               (pvVar6 = (*pcVar3)(*(void **)(reg_ecx + 0x3c48),uVar11 * 0x10c),
               pvVar6 == (void *)0x0)) goto LAB_10009cae;
            *(void **)(reg_ecx + 0x3c48) = pvVar6;
            *(uint *)(reg_ecx + 0x3d5c) = uVar11;
            iVar10 = *(int *)(reg_ecx + 0x389c);
          }
        }
        *(int *)(reg_ecx + 0x389c) = iVar10 + 1;
        iVar10 = iVar10 * 0x168;
        pvVar6 = (void *)(reg_ecx + 0xa34 + iVar10);
        thunk_memset(pvVar6,0,0x168);
        *(undefined4 *)(reg_ecx + 0xa34 + iVar10) = 1;
        iVar5 = *(int *)(reg_ecx + 0x38a0) + 1;
        *(int *)(reg_ecx + 0x38a0) = iVar5;
        *(int *)(reg_ecx + 0xa38 + iVar10) = iVar5;
        *(uint *)(reg_ecx + 0xa3c + iVar10) = DAT_10011090;
        *(undefined4 *)(reg_ecx + 0xa40 + iVar10) = *(undefined4 *)(reg_ecx + 0x5b8);
        *(undefined4 *)(reg_ecx + 0xa44 + iVar10) = *(undefined4 *)(reg_ecx + 0x3dd4);
        thunk_memcpy((void *)(reg_ecx + 0xa49 + iVar10),reg_edx,uVar4 + 1);
        if (*reg_edx != 0x24) {
          iVar5 = *(int *)(reg_ecx + 0x3c48);
          iVar10 = *(int *)(reg_ecx + 0x3d58);
          *(int *)(reg_ecx + 0x3d58) = iVar10 + 1;
          iVar10 = iVar10 * 0x10c;
          thunk_memset((void *)(iVar5 + iVar10),0,0x10c);
          *(undefined4 *)(iVar5 + iVar10) = *(undefined4 *)((int)pvVar6 + 8);
          *(undefined4 *)(iVar5 + 0x10 + iVar10) = *(undefined4 *)((int)pvVar6 + 0xc);
          *(uint *)(iVar5 + 8 + iVar10) =
               -(uint)(*(uint *)((int)pvVar6 + 0x10) == 0) | *(uint *)((int)pvVar6 + 0x10);
          *(undefined2 *)(iVar5 + 0x14 + iVar10) = 0x101;
          *(undefined4 *)(iVar5 + 0x18 + iVar10) = *(undefined4 *)((int)pvVar6 + 4);
          thunk_memcpy((void *)(iVar5 + 0x1c + iVar10),reg_edx,uVar4 + 1);
        }
        *(undefined4 *)(reg_ecx + 0x5c0) = 0;
        *(undefined1 *)(reg_ecx + 0x38c8) = 0;
        uVar9 = CONCAT31((int3)((uint)iVar10 >> 8),1);
        local_24 = str_100102d5;
        goto LAB_10009cb4;
      }
    }
    else {
      if (((0xdd < uVar4) && (*(int *)(reg_ecx + 0x3dd4) != 0)) && (DAT_10011090 < 0x40000000)) {
LAB_10009cae:
        uVar9 = 0;
        goto LAB_10009cb4;
      }
      if (bVar1 != 0) goto LAB_10009cda;
      iVar10 = *(int *)(reg_ecx + 0x389c);
      if (iVar10 != 0x20) goto LAB_10009d24;
    }
    local_24 = str_1001029c;
  }
LAB_10009c7a:
  uVar9 = 0;
LAB_10009cb4:
  thunk_snprintf((char *)(reg_ecx + 0x418),0x80,local_24);
  return uVar9;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_10011090
#undef Ram00280800
#undef Ram00280804
#undef Ram00280808
#undef UINT_00280854
#undef str_10010234
#undef str_10010270
#undef str_1001029c
#undef str_100102d5
#undef local_24

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_00280a04
#define DAT_00280a04 (*(uint8_t *)(0x280a04U))
#undef DAT_00280a44
#define DAT_00280a44 (*(uint8_t *)(0x280a44U))
#undef DAT_1001016f
#define DAT_1001016f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2d6U)))
#undef DAT_1001032f
#define DAT_1001032f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x496U)))
#undef DAT_1001036e
#define DAT_1001036e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4d5U)))
#undef DAT_10010373
#define DAT_10010373 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4daU)))
#undef DAT_10010382
#define DAT_10010382 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4e9U)))
#undef DAT_1001108c
#define DAT_1001108c (*(int *)(((uintptr_t)pf_module_state + 0x11f3U)))
#undef Ram00280800
#define Ram00280800 (*(uint32_t *)(0x280800U))
#undef Ram00280804
#define Ram00280804 (*(uint32_t *)(0x280804U))
#undef Ram00280808
#define Ram00280808 (*(uint32_t *)(0x280808U))
#undef _DAT_00280a04
#define _DAT_00280a04 (*(code * *)(0x280a04U))
#undef _DAT_00280a44
#define _DAT_00280a44 (*(code * *)(0x280a44U))
#undef str_100100d6
#define str_100100d6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x23dU)))
#undef str_1001019c
#define str_1001019c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x303U)))
#undef str_10010348
#define str_10010348 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4afU)))
#undef str_10010376
#define str_10010376 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4ddU)))
#define arg4 (*(uint * *)(pf_stack_frame + 16))
#define local_194 (*(uint *)(pf_stack_frame + 44))
#define local_190 (*(int *)(pf_stack_frame + 48))
#define local_18c (*(undefined4 *)(pf_stack_frame + 52))
#define local_188 (*(char * *)(pf_stack_frame + 56))
#define local_184 (*(undefined4 *)(pf_stack_frame + 60))
#define local_180 (*(undefined4 *)(pf_stack_frame + 64))
#define local_94 (*(char (*)[148])(pf_stack_frame + 300))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009f40
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10009f40(char *reg_ecx,ulong reg_edx,int param_3)

{
  unsigned char pf_stack_frame[480] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  undefined1 *arg3;
  char *arg3_00;
  ulong n;

  if (reg_ecx == (char *)0x0) {
    return;
  }
  arg3_00 = &DAT_10010373;
  if (DAT_1001108c == 0) {
    iVar2 = Ram00280800;
    if ((((iVar2 == 0x50414d57) && (iVar2 = Ram00280804, iVar2 != 0)) &&
        (uVar1 = Ram00280808, 0xb < uVar1)) &&
       ((uVar1 = Ram00280808, 0x247 < uVar1 && (_DAT_00280a44 != (code *)0x0)))) {
      uVar1 = (*_DAT_00280a44)();
      if ((uVar1 & 1) != 0) {
        if ((uVar1 & 2) == 0) {
          arg3 = &DAT_1001016f;
          if (param_3 != 0) {
            arg3 = (undefined1 *)param_3;
          }
          thunk_snprintf(reg_ecx,reg_edx,&DAT_1001032f,arg3);
          return;
        }
        if (param_3 == 0) {
          uVar1 = 0;
        }
        else {
          uVar1 = thunk_strlen((char *)param_3);
        }
        n = reg_edx - 1;
        if (uVar1 < reg_edx) {
          n = uVar1;
        }
        thunk_memset(reg_ecx,0x2a,n);
        reg_ecx[n] = '\0';
        return;
      }
      if (DAT_1001108c != 0) goto LAB_1000a115;
    }
    local_194 = 0;
    local_190 = 0;
    local_18c = 0;
    local_188 = (char *)0x0;
    local_184 = 0;
    local_180 = 0;
    iVar2 = Ram00280800;
    if (((iVar2 == 0x50414d57) && (iVar2 = Ram00280804, iVar2 != 0)) &&
       ((uVar1 = Ram00280808, 0xb < uVar1 &&
        (((uVar1 = Ram00280808, 0x207 < uVar1 && (_DAT_00280a04 != (code *)0x0)) &&
         (iVar2 = (*_DAT_00280a04)(str_1001019c,&local_194), iVar2 != 0)))))) {
      if ((local_194 & 0xfffffffb) == 1) {
        if (local_190 != 0) goto switchD_1000a0c5_caseD_54;
      }
      else if (local_188 != (char *)0x0 && local_194 == 3) {
        switch((uintptr_t)(*local_188)) {
        case 'T':
        case 'Y':
        case 't':
        case 'y':
switchD_1000a0c5_caseD_54:
          arg3_00 = str_10010376;
          goto LAB_1000a115;
        case 'U':
        case 'V':
        case 'W':
        case 'X':
        case 'Z':
        case '[':
        case '\\':
        case ']':
        case '^':
        case '_':
        case '`':
        case 'a':
        case 'b':
        case 'c':
        case 'd':
        case 'e':
        case 'f':
        case 'g':
        case 'h':
        case 'i':
        case 'j':
        case 'k':
        case 'l':
        case 'm':
        case 'n':
        case 'o':
        case 'p':
        case 'q':
        case 'r':
        case 's':
        case 'u':
        case 'v':
        case 'w':
        case 'x':
          break;
        default:
          if (*local_188 == '1') goto switchD_1000a0c5_caseD_54;
        }
      }
    }
    arg3_00 = &DAT_10010382;
  }
LAB_1000a115:
  thunk_snprintf(local_94,0x80,&DAT_1001032f,arg3_00);
  if (DAT_1001108c == 0) {
    local_194 = 0;
    local_190 = 0;
    local_18c = 0;
    local_188 = (char *)0x0;
    local_184 = 0;
    local_180 = 0;
    iVar2 = Ram00280800;
    if (((iVar2 == 0x50414d57) && (iVar2 = Ram00280804, iVar2 != 0)) &&
       (((uVar1 = Ram00280808, 0xb < uVar1 &&
         ((uVar1 = Ram00280808, 0x207 < uVar1 && (_DAT_00280a04 != (code *)0x0)))) &&
        (iVar2 = (*_DAT_00280a04)(str_100100d6,&local_194), iVar2 != 0)))) {
      if ((local_194 & 0xfffffffb) == 1) {
        if (local_190 != 0) goto switchD_1000a216_caseD_54;
      }
      else if (local_188 != (char *)0x0 && local_194 == 3) {
        switch((uintptr_t)(*local_188)) {
        case 'T':
        case 'Y':
        case 't':
        case 'y':
switchD_1000a216_caseD_54:
          recovered_1000ac30((int)local_94,0x80,str_10010348);
          recovered_1000ac30((int)&local_194,0x100,&DAT_1001016f);
          arg4 = &local_194;
          goto LAB_1000a283;
        case 'U':
        case 'V':
        case 'W':
        case 'X':
        case 'Z':
        case '[':
        case '\\':
        case ']':
        case '^':
        case '_':
        case '`':
        case 'a':
        case 'b':
        case 'c':
        case 'd':
        case 'e':
        case 'f':
        case 'g':
        case 'h':
        case 'i':
        case 'j':
        case 'k':
        case 'l':
        case 'm':
        case 'n':
        case 'o':
        case 'p':
        case 'q':
        case 'r':
        case 's':
        case 'u':
        case 'v':
        case 'w':
        case 'x':
          break;
        default:
          if (*local_188 == '1') goto switchD_1000a216_caseD_54;
        }
      }
    }
  }
  arg4 = (uint *)&DAT_1001016f;
  if (param_3 != 0) {
    arg4 = (uint *)param_3;
  }
LAB_1000a283:
  thunk_snprintf(reg_ecx,reg_edx,&DAT_1001036e,local_94,arg4);
  return;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280a04
#undef DAT_00280a44
#undef DAT_1001016f
#undef DAT_1001032f
#undef DAT_1001036e
#undef DAT_10010373
#undef DAT_10010382
#undef DAT_1001108c
#undef Ram00280800
#undef Ram00280804
#undef Ram00280808
#undef _DAT_00280a04
#undef _DAT_00280a44
#undef str_100100d6
#undef str_1001019c
#undef str_10010348
#undef str_10010376
#undef arg4
#undef local_194
#undef local_190
#undef local_18c
#undef local_188
#undef local_184
#undef local_180
#undef local_94

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_1001016f
#define DAT_1001016f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2d6U)))
#undef Ram00280800
#define Ram00280800 (*(uint32_t *)(0x280800U))
#undef Ram00280804
#define Ram00280804 (*(uint32_t *)(0x280804U))
#undef Ram00280808
#define Ram00280808 (*(uint32_t *)(0x280808U))
#undef UINT_0028084c
#define UINT_0028084c (*(uint *)(0x28084cU))
#undef UINT_00280850
#define UINT_00280850 (*(uint *)(0x280850U))
#undef UINT_00280854
#define UINT_00280854 (*(uint *)(0x280854U))
#define local_30 (*(byte * *)(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a3d0
 */

void recovered_1000a3d0(int reg_ecx,byte *reg_edx)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  byte *pbVar1;
  uint uVar2;
  int iVar3;
  code *pcVar4;
  ulong uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined1 *ptr;
  byte bVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  bool bVar12;

  if (reg_ecx == 0) {
    return;
  }
  if (reg_edx == (byte *)0x0) {
    return;
  }
  if (*(int *)(reg_ecx + 0x374) == 0) {
    return;
  }
  pbVar1 = *(byte **)(reg_ecx + 0x378);
  if ((reg_edx < pbVar1 || pbVar1 == (byte *)0x0) ||
     (*(uint *)(reg_ecx + 0x37c) <= (uint)((int)reg_edx - (int)pbVar1))) {
    local_30 = (byte *)0x0;
  }
  else {
    uVar5 = thunk_strlen((char *)reg_edx);
    if (uVar5 == 0xffffffff) {
      return;
    }
    iVar6 = Ram00280800;
    if (iVar6 != 0x50414d57) {
      return;
    }
    iVar6 = Ram00280804;
    if (iVar6 == 0) {
      return;
    }
    uVar2 = Ram00280808;
    if (uVar2 < 0xc) {
      return;
    }
    uVar2 = Ram00280808;
    if (uVar2 < 0x50) {
      return;
    }
    pcVar4 = (code *)UINT_0028084c;
    if (pcVar4 == (code *)0x0) {
      return;
    }
    local_30 = (*pcVar4)(uVar5 + 1);
    if (local_30 == (byte *)0x0) {
      return;
    }
    thunk_memcpy(local_30,reg_edx,uVar5 + 1);
    reg_edx = local_30;
  }
  do {
    bVar8 = *reg_edx;
    switch((uintptr_t)(bVar8)) {
    case 0:
switchD_1000a519_caseD_0:
      iVar6 = Ram00280800;
      if (((iVar6 == 0x50414d57) && (iVar6 = Ram00280804, iVar6 != 0)) &&
         ((uVar2 = Ram00280808, 0xb < uVar2 &&
          ((uVar2 = Ram00280808, 0x53 < uVar2 &&
           (pcVar4 = (code *)UINT_00280850, pcVar4 != (code *)0x0)))))) {
        (*pcVar4)(local_30);
      }
      return;
    default:
      if (bVar8 < 0x21) {
        bVar8 = 0x20;
      }
      if (*(int *)(reg_ecx + 0x3e0) == 0) {
        uVar5 = thunk_strlen(&DAT_1001016f);
        uVar7 = recovered_10009300(reg_ecx,&DAT_1001016f,uVar5,'\0');
        if ((char)uVar7 == '\0') goto switchD_1000a519_caseD_0;
        *(undefined4 *)(reg_ecx + 0x3e0) = 1;
      }
      uVar2 = *(uint *)(reg_ecx + 0x37c);
      if (uVar2 == 0xffffffff) goto switchD_1000a519_caseD_0;
      iVar6 = *(int *)(reg_ecx + 0x374);
      ptr = *(undefined1 **)(reg_ecx + 0x378);
      uVar10 = *(uint *)(reg_ecx + 0x380);
      iVar3 = *(int *)(reg_ecx + 0x3bc);
      if (uVar10 <= uVar2 || ptr == (undefined1 *)0x0) {
        if (uVar10 == 0) {
          uVar10 = 0x40;
        }
        if (uVar10 <= uVar2) {
          do {
            bVar12 = (int)uVar10 < 0;
            uVar10 = uVar10 * 2;
            if (bVar12) {
              uVar10 = uVar2 + 1;
            }
          } while (uVar10 <= uVar2);
        }
        iVar9 = Ram00280800;
        if (((((iVar9 != 0x50414d57) || (iVar9 = Ram00280804, iVar9 == 0)) ||
             (uVar2 = Ram00280808, uVar2 < 0xc)) ||
            ((uVar2 = Ram00280808, uVar2 < 0x58 ||
             (pcVar4 = (code *)UINT_00280854, pcVar4 == (code *)0x0)))) ||
           (ptr = (*pcVar4)(ptr,uVar10), ptr == (undefined1 *)0x0)) goto switchD_1000a519_caseD_0;
        if (*(int *)(reg_ecx + 0x378) == 0) {
          *ptr = 0;
        }
        *(undefined1 **)(reg_ecx + 0x378) = ptr;
        *(uint *)(reg_ecx + 0x380) = uVar10;
      }
      iVar9 = *(int *)(iVar6 + -8 + iVar3 * 8);
      iVar11 = *(int *)(iVar6 + -4 + iVar3 * 8);
      *(int *)(iVar6 + -4 + iVar3 * 8) = iVar11 + 1;
      ptr[iVar11 + iVar9] = bVar8;
      ptr[*(int *)(iVar6 + -4 + iVar3 * 8) + iVar9] = 0;
      iVar6 = *(int *)(iVar6 + -8 + iVar3 * 8) + 1 + *(int *)(iVar6 + -4 + iVar3 * 8);
LAB_1000a720:
      *(int *)(reg_ecx + 0x37c) = iVar6;
      iVar6 = *(int *)(reg_ecx + 0x3bc) + -1;
      if (*(int *)(reg_ecx + 0x3bc) <= *(int *)(reg_ecx + 0x3c8)) {
        *(int *)(reg_ecx + 0x3c8) = iVar6;
      }
      if (*(int *)(reg_ecx + 0x3d0) == iVar6) {
        *(undefined4 *)(reg_ecx + 0x3d0) = 0xffffffff;
      }
      break;
    case 8:
      if ((*(int *)(reg_ecx + 0x3e0) != 0) && (iVar6 = *(int *)(reg_ecx + 0x3bc), 0 < iVar6)) {
        iVar3 = *(int *)(reg_ecx + 0x374);
        iVar9 = *(int *)(iVar3 + -4 + iVar6 * 8);
        if (iVar9 != 0) {
          iVar11 = *(int *)(reg_ecx + 0x378) + *(int *)(iVar3 + -8 + iVar6 * 8);
          uVar2 = -iVar9;
          do {
            uVar10 = uVar2;
            iVar9 = iVar9 + -1;
            if (iVar9 == 0) break;
            uVar2 = uVar10 + 1;
          } while (SBORROW1('\0',*(byte *)(iVar11 + iVar9) & 0xc0));
          *(undefined1 *)(iVar11 + iVar9) = 0;
          *(uint *)(iVar3 + -4 + iVar6 * 8) = ~uVar10;
          iVar6 = *(int *)(iVar3 + -8 + iVar6 * 8) - uVar10;
          goto LAB_1000a720;
        }
      }
      break;
    case 10:
      if (*(int *)(reg_ecx + 0x3e0) == 0) {
        uVar5 = thunk_strlen(&DAT_1001016f);
        uVar7 = recovered_10009300(reg_ecx,&DAT_1001016f,uVar5,'\0');
        if ((char)uVar7 == '\0') goto switchD_1000a519_caseD_0;
      }
      *(undefined4 *)(reg_ecx + 0x3e0) = 0;
      break;
    case 0xd:
      break;
    }
    reg_edx = reg_edx + 1;
  } while( true );
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_1001016f
#undef Ram00280800
#undef Ram00280804
#undef Ram00280808
#undef UINT_0028084c
#undef UINT_00280850
#undef UINT_00280854
#undef local_30

#undef DAT_100103a8
#define DAT_100103a8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x50fU)))
#undef str_1001039f
#define str_1001039f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x506U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a7e0
 */

bool recovered_1000a7e0(int reg_ecx)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  bool bVar2;

  if (reg_ecx == 0) {
    bVar2 = false;
  }
  else {
    bVar1 = recovered_1000a9c0((char *)reg_ecx,str_1001039f);
    bVar2 = true;
    if (!bVar1) {
      bVar2 = recovered_1000a9c0((char *)reg_ecx,&DAT_100103a8);
    }
  }
  return bVar2;
}

#undef DAT_100103a8
#undef str_1001039f

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef Ram00280800
#define Ram00280800 (*(uint32_t *)(0x280800U))
#undef Ram00280804
#define Ram00280804 (*(uint32_t *)(0x280804U))
#undef Ram00280808
#define Ram00280808 (*(uint32_t *)(0x280808U))
#undef UINT_00280890
#define UINT_00280890 (*(uint *)(0x280890U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a820
 */

uint recovered_1000a820(char *reg_ecx,uint reg_edx)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  code *pcVar2;
  uint uVar3;

  iVar1 = Ram00280800;
  if ((((iVar1 == 0x50414d57) && (iVar1 = Ram00280804, iVar1 != 0)) &&
      (uVar3 = Ram00280808, 0xb < uVar3)) &&
     ((uVar3 = Ram00280808, 0x93 < uVar3 && (pcVar2 = (code *)UINT_00280890, pcVar2 != (code *)0x0))
     )) {
    uVar3 = (*pcVar2)(reg_ecx,reg_edx);
    return uVar3;
  }
  return 0;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef Ram00280800
#undef Ram00280804
#undef Ram00280808
#undef UINT_00280890

#undef DAT_100103a8
#define DAT_100103a8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x50fU)))
#undef DAT_100103ad
#define DAT_100103ad (*(uint8_t *)(((uintptr_t)pf_module_state + 0x514U)))
#undef DAT_100103b2
#define DAT_100103b2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x519U)))
#undef str_1001039f
#define str_1001039f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x506U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a870
 */

char recovered_1000a870(char *reg_ecx)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  char cVar2;

  bVar1 = recovered_1000a9c0(reg_ecx,str_1001039f);
  cVar2 = '\x05';
  if (!bVar1) {
    bVar1 = recovered_1000a9c0(reg_ecx,&DAT_100103a8);
    cVar2 = '\x02';
    if (!bVar1) {
      bVar1 = recovered_1000a9c0(reg_ecx,&DAT_100103ad);
      cVar2 = '\x03';
      if (!bVar1) {
        bVar1 = recovered_1000a9c0(reg_ecx,&DAT_100103b2);
        cVar2 = bVar1 * '\x03' + '\x01';
      }
    }
  }
  return cVar2;
}

#undef DAT_100103a8
#undef DAT_100103ad
#undef DAT_100103b2
#undef str_1001039f

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a8f0
 */

undefined4 recovered_1000a8f0(undefined1 *reg_ecx)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (reg_ecx == (undefined1 *)0x0) {
    return 0;
  }
  do {
    switch((uintptr_t)(*reg_ecx)) {
    case 0:
      return 0;
    default:
      reg_ecx = reg_ecx + 1;
      break;
    case 9:
    case 10:
    case 0xd:
    case 0x20:
      return 0x1000a801;
    }
  } while( true );
}


#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_00280a20
#define DAT_00280a20 (*(uint8_t *)(0x280a20U))
#undef Ram00280800
#define Ram00280800 (*(uint32_t *)(0x280800U))
#undef Ram00280804
#define Ram00280804 (*(uint32_t *)(0x280804U))
#undef Ram00280808
#define Ram00280808 (*(uint32_t *)(0x280808U))
#undef _DAT_00280a20
#define _DAT_00280a20 (*(code * *)(0x280a20U))
#define local_118 (*(uint *)(pf_stack_frame + 24))
#define local_114 (*(char (*)[276])(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a9c0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool recovered_1000a9c0(char *reg_ecx,char *reg_edx)

{
  unsigned char pf_stack_frame[336] __attribute__((aligned(16))) = {0};

  byte bVar1;
  byte bVar2;
  int iVar3;
  ulong uVar4;
  uint uVar5;
  char cVar6;
  byte bVar7;
  ushort uVar8;
  char *pcVar9;
  int iVar10;
  bool bVar11;
  bool bVar12;

  if (reg_edx == (char *)0x0 || reg_ecx == (char *)0x0) {
    return false;
  }
  local_118 = thunk_strlen(reg_ecx);
  if (local_118 == 0) {
    thunk_strlen(reg_edx);
    return false;
  }
  if ((reg_ecx[local_118 - 1] != '>') || (*reg_ecx != '[')) goto LAB_1000abb6;
  uVar5 = 0;
  for (iVar3 = 1; (cVar6 = reg_ecx[iVar3], cVar6 != '\0' && (cVar6 != ']')); iVar3 = iVar3 + 1) {
    if (uVar5 + 1 < 0x80) {
      local_114[uVar5] = cVar6;
      uVar5 = uVar5 + 1;
    }
  }
  local_114[uVar5] = '\0';
  if ((cVar6 == ']') && (iVar3 + 1U < 0x82)) {
    pcVar9 = local_114;
    if (local_114[0] == '[') {
      pcVar9 = local_114 + 1;
    }
    for (iVar3 = -0x7f;
        ((cVar6 = pcVar9[iVar3 + 0x7f], cVar6 != '\0' && (cVar6 != ']')) && (iVar3 != 0));
        iVar3 = iVar3 + 1) {
      local_114[iVar3 + 0xff] = cVar6;
    }
    local_114[iVar3 + 0xff] = '\0';
    if (local_114[0] == '[') {
      if (cVar6 != ']') goto LAB_1000abb2;
      cVar6 = local_114[iVar3 + 0x81];
    }
    if ((cVar6 == '\0') && (local_114[0x80] != '\0')) {
      uVar5 = 1;
      iVar10 = 0;
      iVar3 = -0x7f;
      do {
        if (iVar3 == 0) goto LAB_1000abb2;
        if (local_114[0x80] == '\\') {
          if (iVar10 == 0) goto LAB_1000abb2;
          uVar5 = uVar5 + 1;
          iVar10 = 0;
          if (6 < uVar5) goto LAB_1000abb2;
        }
        else {
          if (((9 < (byte)(local_114[0x80] - 0x30U)) &&
              (uVar8 = CONCAT11(local_114[0x80],local_114[0x80]) & 0xdfff, cVar6 = (char)uVar8,
              0x19 < (byte)((char)(uVar8 >> 8) + 0xbfU))) && ((cVar6 != '_' && (cVar6 != '-'))))
          goto LAB_1000abb2;
          iVar10 = iVar10 + 1;
        }
        local_114[0x80] = local_114[iVar3 + 0x100];
        iVar3 = iVar3 + 1;
      } while (local_114[0x80] != '\0');
      if (((((1 < uVar5 && iVar10 != 0) && (iVar3 = Ram00280800, iVar3 == 0x50414d57)) &&
           (iVar3 = Ram00280804, iVar3 != 0)) &&
          ((uVar5 = Ram00280808, 0xb < uVar5 && (uVar5 = Ram00280808, 0x223 < uVar5)))) &&
         (_DAT_00280a20 != (code *)0x0)) {
        (*_DAT_00280a20)(0xfffffffe,local_114 + 0x80,0x80);
      }
    }
  }
LAB_1000abb2:
  local_118 = local_118 - 1;
LAB_1000abb6:
  uVar4 = thunk_strlen(reg_edx);
  uVar5 = 0;
  bVar11 = false;
  if (uVar4 - 1 < local_118) {
    do {
      bVar1 = reg_ecx[uVar5 + (local_118 - uVar4)];
      bVar2 = bVar1 | 0x20;
      if (0x19 < (byte)(bVar1 + 0xbf)) {
        bVar2 = bVar1;
      }
      bVar1 = reg_edx[uVar5];
      bVar7 = bVar1 | 0x20;
      if (0x19 < (byte)(bVar1 + 0xbf)) {
        bVar7 = bVar1;
      }
      bVar11 = bVar2 == bVar7;
    } while ((bVar11) && (bVar12 = uVar4 - 1 != uVar5, uVar5 = uVar5 + 1, bVar12));
  }
  return bVar11;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280a20
#undef Ram00280800
#undef Ram00280804
#undef Ram00280808
#undef _DAT_00280a20
#undef local_118
#undef local_114

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_00280a04
#define DAT_00280a04 (*(uint8_t *)(0x280a04U))
#undef DAT_1001016f
#define DAT_1001016f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2d6U)))
#undef Ram00280800
#define Ram00280800 (*(uint32_t *)(0x280800U))
#undef Ram00280804
#define Ram00280804 (*(uint32_t *)(0x280804U))
#undef Ram00280808
#define Ram00280808 (*(uint32_t *)(0x280808U))
#undef _DAT_00280a04
#define _DAT_00280a04 (*(code * *)(0x280a04U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ac30
 */

/* WARNING: Removing unreachable block (ram,0x1000ad88) */
/* WARNING: Removing unreachable block (ram,0x1000ad3d) */
/* WARNING: Removing unreachable block (ram,0x1000ad48) */
/* WARNING: Removing unreachable block (ram,0x1000ad4b) */
/* WARNING: Removing unreachable block (ram,0x1000ad50) */
/* WARNING: Removing unreachable block (ram,0x1000ad75) */
/* WARNING: Removing unreachable block (ram,0x1000ad7c) */
/* WARNING: Removing unreachable block (ram,0x1000ad90) */
/* WARNING: Removing unreachable block (ram,0x1000ae3c) */
/* WARNING: Removing unreachable block (ram,0x1000ad9b) */
/* WARNING: Removing unreachable block (ram,0x1000ad9c) */
/* WARNING: Removing unreachable block (ram,0x1000adac) */
/* WARNING: Removing unreachable block (ram,0x1000adb5) */
/* WARNING: Removing unreachable block (ram,0x1000add1) */
/* WARNING: Removing unreachable block (ram,0x1000ade2) */
/* WARNING: Removing unreachable block (ram,0x1000ade5) */
/* WARNING: Removing unreachable block (ram,0x1000adec) */
/* WARNING: Removing unreachable block (ram,0x1000adef) */
/* WARNING: Removing unreachable block (ram,0x1000adf7) */
/* WARNING: Removing unreachable block (ram,0x1000adff) */
/* WARNING: Removing unreachable block (ram,0x1000acfd) */
/* WARNING: Removing unreachable block (ram,0x1000ad08) */
/* WARNING: Removing unreachable block (ram,0x1000ad0b) */
/* WARNING: Removing unreachable block (ram,0x1000ad13) */
/* WARNING: Removing unreachable block (ram,0x1000ad1b) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_1000ac30(int reg_edx,uint param_2,undefined1 *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  undefined1 *puVar2;
  int iVar3;

  if (reg_edx != 0) {
    iVar3 = Ram00280800;
    if ((((iVar3 == 0x50414d57) && (iVar3 = Ram00280804, iVar3 != 0)) &&
        (uVar1 = Ram00280808, 0xb < uVar1)) &&
       ((uVar1 = Ram00280808, 0x207 < uVar1 && (_DAT_00280a04 != (code *)0x0)))) {
      (*_DAT_00280a04)();
    }
    puVar2 = &DAT_1001016f;
    if (param_3 != (undefined1 *)0x0) {
      puVar2 = param_3;
    }
    iVar3 = 0;
    if (1 < param_2) {
      iVar3 = 0;
      do {
        if (puVar2[iVar3] == '\0') break;
        *(undefined1 *)(reg_edx + iVar3) = puVar2[iVar3];
        iVar3 = iVar3 + 1;
      } while (param_2 - 1 != iVar3);
    }
    *(undefined1 *)(reg_edx + iVar3) = 0;
  }
  return;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280a04
#undef DAT_1001016f
#undef Ram00280800
#undef Ram00280804
#undef Ram00280808
#undef _DAT_00280a04

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_1001016f
#define DAT_1001016f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2d6U)))
#undef Ram00280800
#define Ram00280800 (*(uint32_t *)(0x280800U))
#undef Ram00280804
#define Ram00280804 (*(uint32_t *)(0x280804U))
#undef Ram00280808
#define Ram00280808 (*(uint32_t *)(0x280808U))
#undef UINT_00280980
#define UINT_00280980 (*(uint *)(0x280980U))
#define local_20 (*(int *)(pf_stack_frame + 48))
#define local_1c (*(int *)(pf_stack_frame + 52))
#define local_18 (*(int *)(pf_stack_frame + 56))
#define local_38 (*(uint *)(pf_stack_frame + 24))
#define local_24 (*(int *)(pf_stack_frame + 44))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ae50
 */

undefined4 recovered_1000ae50(int reg_ecx)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint *puVar2;
  code *pcVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  ulong textSize;
  int iVar8;
  int iVar9;
  int iVar10;
  char *pcVar11;
  uint uVar12;
  bool bVar13;

  if (reg_ecx == 0) {
    return 0;
  }
  iVar9 = *(int *)(reg_ecx + 0x390);
  iVar10 = *(int *)(reg_ecx + 0x394);
  recovered_10009a90(&local_24,reg_ecx);
  if ((((iVar9 < local_24) || (iVar10 < local_20)) || (local_24 + local_1c <= iVar9)) ||
     (local_18 + local_20 <= iVar10)) {
LAB_1000b024:
    pcVar11 = *(char **)(reg_ecx + 0x3ac);
LAB_1000b02e:
    if (pcVar11 != (char *)0x0) goto LAB_1000b032;
    pcVar11 = (char *)0x0;
  }
  else {
    uVar12 = *(uint *)(reg_ecx + 0x3e4);
    iVar9 = 0xc;
    if (0 < *(int *)(reg_ecx + 0x3a8)) {
      iVar9 = *(int *)(reg_ecx + 0x3a8) + 2;
    }
    uVar4 = ((iVar10 - local_20) + -2) / iVar9;
    uVar7 = 0;
    if (0 < (int)uVar4) {
      uVar7 = uVar4;
    }
    local_38 = uVar7 + uVar12;
    uVar12 = ((int)uVar12 >> 0x1f) + (uint)CARRY4(uVar7,uVar12);
    if ((int)uVar12 < 0) goto LAB_1000b024;
    uVar5 = recovered_10009740(reg_ecx);
    iVar9 = *(int *)(reg_ecx + 0x3bc);
    if ((char)uVar5 == '\0') {
      if (0 < iVar9) {
        iVar10 = 0;
        do {
          iVar9 = *(int *)(reg_ecx + 0x374);
          pcVar11 = &DAT_1001016f;
          if (iVar9 != 0) {
            pcVar11 = (char *)(*(int *)(reg_ecx + 0x378) + *(int *)(iVar9 + iVar10 * 8));
          }
          uVar7 = recovered_10009920(reg_ecx,pcVar11,*(uint *)(iVar9 + 4 + iVar10 * 8));
          iVar9 = (int)uVar7 >> 0x1f;
          if ((SBORROW4(uVar12,iVar9) != SBORROW4(uVar12 - iVar9,(uint)(local_38 < uVar7))) !=
              (int)((uVar12 - iVar9) - (uint)(local_38 < uVar7)) < 0) goto LAB_1000aff1;
          bVar13 = local_38 < uVar7;
          local_38 = local_38 - uVar7;
          uVar12 = (uVar12 - iVar9) - (uint)bVar13;
          iVar10 = iVar10 + 1;
        } while (iVar10 < *(int *)(reg_ecx + 0x3bc));
      }
      goto LAB_1000b024;
    }
    if (iVar9 < 1) {
      iVar10 = 0;
    }
    else {
      iVar10 = 0;
      iVar6 = iVar9;
      do {
        iVar8 = (iVar6 - iVar10) / 2;
        iVar1 = iVar8 + iVar10;
        puVar2 = (uint *)(*(int *)(reg_ecx + 0x3c0) + 0xc + iVar1 * 8);
        if (uVar12 < *puVar2 ||
            uVar12 - *puVar2 <
            (uint)(local_38 < *(uint *)(*(int *)(reg_ecx + 0x3c0) + 8 + iVar1 * 8))) {
          iVar6 = iVar1;
        }
        else {
          iVar10 = iVar8 + 1 + iVar10;
        }
      } while (iVar10 < iVar6);
    }
    if (iVar10 == iVar9) goto LAB_1000b024;
LAB_1000aff1:
    if (iVar10 < 0) goto LAB_1000b024;
    pcVar11 = &DAT_1001016f;
    if ((*(int *)(reg_ecx + 0x374) != 0) && (iVar10 < *(int *)(reg_ecx + 0x3bc))) {
      pcVar11 = (char *)(*(int *)(reg_ecx + 0x378) +
                        *(int *)(*(int *)(reg_ecx + 0x374) + iVar10 * 8));
      goto LAB_1000b02e;
    }
LAB_1000b032:
    if (*pcVar11 != '\0') goto LAB_1000b06d;
  }
  if (0 < *(int *)(reg_ecx + 0x3bc)) {
    if (*(int *)(reg_ecx + 0x374) == 0) {
      pcVar11 = &DAT_1001016f;
    }
    else {
      pcVar11 = (char *)(*(int *)(reg_ecx + 0x378) +
                        *(int *)(*(int *)(reg_ecx + 0x374) + -8 + *(int *)(reg_ecx + 0x3bc) * 8));
    }
  }
LAB_1000b06d:
  textSize = thunk_strlen(pcVar11);
  iVar9 = Ram00280800;
  if (((iVar9 == 0x50414d57) && (iVar9 = Ram00280804, iVar9 != 0)) &&
     ((uVar12 = Ram00280808, 0xb < uVar12 &&
      (((uVar12 = Ram00280808, 0x183 < uVar12 &&
        (pcVar3 = (code *)UINT_00280980, pcVar3 != (code *)0x0)) &&
       (uVar12 = (*pcVar3)(pcVar11,textSize), uVar12 != 0)))))) {
    *(undefined1 *)(reg_ecx + 0x3f0) = 1;
    return CONCAT31((int3)((uint)reg_ecx >> 8),1);
  }
  return 0;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_1001016f
#undef Ram00280800
#undef Ram00280804
#undef Ram00280808
#undef UINT_00280980
#undef local_20
#undef local_1c
#undef local_18
#undef local_38
#undef local_24

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef Ram00280800
#define Ram00280800 (*(uint32_t *)(0x280800U))
#undef Ram00280804
#define Ram00280804 (*(uint32_t *)(0x280804U))
#undef Ram00280808
#define Ram00280808 (*(uint32_t *)(0x280808U))
#undef UINT_0028084c
#define UINT_0028084c (*(uint *)(0x28084cU))
#undef UINT_00280850
#define UINT_00280850 (*(uint *)(0x280850U))
#undef UINT_00280854
#define UINT_00280854 (*(uint *)(0x280854U))
#undef UINT_00280984
#define UINT_00280984 (*(uint *)(0x280984U))
#undef UINT_00280988
#define UINT_00280988 (*(uint *)(0x280988U))
#define local_1c (*(uint *)(pf_stack_frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b0e0
 */

undefined4 recovered_1000b0e0(int reg_ecx)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  int iVar1;
  code *pcVar2;
  uint uVar3;
  byte *outText;
  uint uVar4;
  undefined1 *ptr;
  uint uVar5;
  byte bVar6;
  byte *pbVar7;
  byte bVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;

  iVar1 = Ram00280800;
  if (iVar1 != 0x50414d57) {
    return 0;
  }
  iVar1 = Ram00280804;
  if (iVar1 == 0) {
    return 0;
  }
  uVar3 = Ram00280808;
  if (uVar3 < 0xc) {
    return 0;
  }
  uVar3 = Ram00280808;
  if (uVar3 < 0x18c) {
    return 0;
  }
  pcVar2 = (code *)UINT_00280988;
  if (pcVar2 == (code *)0x0) {
    return 0;
  }
  uVar3 = (*pcVar2)();
  uVar3 = uVar3 + 1;
  if (uVar3 < 2 || reg_ecx == 0) {
    return 0;
  }
  uVar10 = *(uint *)(reg_ecx + 0x3b0);
  iVar1 = Ram00280800;
  if (iVar1 != 0x50414d57) {
    return 0;
  }
  iVar1 = Ram00280804;
  if (iVar1 == 0) {
    return 0;
  }
  uVar9 = Ram00280808;
  if (uVar9 < 0xc) {
    return 0;
  }
  uVar9 = Ram00280808;
  if (uVar9 < 0x50) {
    return 0;
  }
  pcVar2 = (code *)UINT_0028084c;
  if (pcVar2 == (code *)0x0) {
    return 0;
  }
  outText = (*pcVar2)(uVar3);
  if (outText == (byte *)0x0) {
    return 0;
  }
  iVar1 = Ram00280800;
  if ((((iVar1 == 0x50414d57) && (iVar1 = Ram00280804, iVar1 != 0)) &&
      (uVar9 = Ram00280808, 0xb < uVar9)) && (uVar9 = Ram00280808, 0x187 < uVar9)) {
    pcVar2 = (code *)UINT_00280984;
    if (pcVar2 == (code *)0x0) {
      local_1c = 0;
    }
    else {
      uVar3 = (*pcVar2)((char *)outText,uVar3);
      local_1c = 0;
      if (uVar3 != 0) {
        uVar5 = 1;
        uVar9 = uVar3;
        do {
          uVar4 = uVar5;
          uVar9 = uVar9 - 1;
          if (uVar9 == 0) {
            bVar6 = *outText;
            break;
          }
          bVar6 = outText[uVar9];
          uVar5 = uVar4 + 1;
        } while (SBORROW1('\0',bVar6 & 0xc0));
        uVar5 = 4;
        if ((4 < (byte)(bVar6 + 0x10)) && (uVar5 = 3, (bVar6 & 0xf0) != 0xe0)) {
          uVar5 = ((byte)(bVar6 + 0x3e) < 0x1e) + 1;
        }
        local_1c = uVar3;
        if (uVar4 < uVar5) {
          local_1c = uVar9;
        }
      }
    }
  }
  else {
    *outText = 0;
    local_1c = 0;
  }
  if ((-local_1c - 2 < uVar10) || (uVar3 = local_1c + uVar10 + 1, uVar3 == 0)) {
LAB_1000b408:
    iVar1 = Ram00280800;
    if (((iVar1 == 0x50414d57) && (iVar1 = Ram00280804, iVar1 != 0)) &&
       ((uVar3 = Ram00280808, 0xb < uVar3 &&
        ((uVar3 = Ram00280808, 0x53 < uVar3 &&
         (pcVar2 = (code *)UINT_00280850, pcVar2 != (code *)0x0)))))) {
      (*pcVar2)(outText);
    }
  }
  else {
    ptr = *(undefined1 **)(reg_ecx + 0x3ac);
    uVar9 = *(uint *)(reg_ecx + 0x3b4);
    if ((ptr == (undefined1 *)0x0) || (uVar9 < uVar3)) {
      uVar5 = 0x40;
      if (uVar9 != 0) {
        uVar5 = uVar9;
      }
      if (uVar5 < uVar3) {
        do {
          bVar11 = (int)uVar5 < 0;
          uVar5 = uVar5 * 2;
          if (bVar11) {
            uVar5 = uVar3;
          }
        } while (uVar5 < uVar3);
      }
      iVar1 = Ram00280800;
      if ((((iVar1 != 0x50414d57) || (iVar1 = Ram00280804, iVar1 == 0)) ||
          (uVar3 = Ram00280808, uVar3 < 0xc)) ||
         (((uVar3 = Ram00280808, uVar3 < 0x58 ||
           (pcVar2 = (code *)UINT_00280854, pcVar2 == (code *)0x0)) ||
          (ptr = (*pcVar2)(ptr,uVar5), ptr == (undefined1 *)0x0)))) goto LAB_1000b408;
      if (*(int *)(reg_ecx + 0x3ac) == 0) {
        *ptr = 0;
      }
      *(undefined1 **)(reg_ecx + 0x3ac) = ptr;
      *(uint *)(reg_ecx + 0x3b4) = uVar5;
    }
    if (local_1c == 0) {
      bVar11 = false;
    }
    else {
      bVar11 = false;
      pbVar7 = outText;
      do {
        bVar6 = *pbVar7;
        bVar8 = 0x20;
        if ((bVar6 & 0xfb) != 9) {
          bVar8 = bVar6;
        }
        if (bVar6 == 10) {
          bVar8 = 0x20;
        }
        if (bVar8 != 0x7f && 0x1f < bVar8) {
          *(byte *)(*(int *)(reg_ecx + 0x3ac) + uVar10) = bVar8;
          uVar10 = uVar10 + 1;
          bVar11 = true;
        }
        pbVar7 = pbVar7 + 1;
        local_1c = local_1c - 1;
      } while (local_1c != 0);
      ptr = *(undefined1 **)(reg_ecx + 0x3ac);
    }
    ptr[uVar10] = 0;
    *(uint *)(reg_ecx + 0x3b0) = uVar10;
    uVar3 = Ram00280800;
    if ((((uVar3 == 0x50414d57) && (iVar1 = Ram00280804, iVar1 != 0)) &&
        (uVar3 = Ram00280808, 0xb < uVar3)) && (uVar3 = Ram00280808, 0x53 < uVar3)) {
      pcVar2 = (code *)UINT_00280850;
      uVar3 = 0;
      if (pcVar2 != (code *)0x0) {
        uVar3 = (*pcVar2)(outText);
      }
    }
    if (bVar11) {
      *(undefined1 *)(reg_ecx + 0x3f0) = 1;
      return CONCAT31((int3)(uVar3 >> 8),1);
    }
  }
  return 0;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef Ram00280800
#undef Ram00280804
#undef Ram00280808
#undef UINT_0028084c
#undef UINT_00280850
#undef UINT_00280854
#undef UINT_00280984
#undef UINT_00280988
#undef local_1c

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef Ram00280800
#define Ram00280800 (*(uint32_t *)(0x280800U))
#undef Ram00280804
#define Ram00280804 (*(uint32_t *)(0x280804U))
#undef Ram00280808
#define Ram00280808 (*(uint32_t *)(0x280808U))
#undef UINT_00280898
#define UINT_00280898 (*(uint *)(0x280898U))
#define in_stack_00000004 (*(uint *)(pf_stack_frame + 36))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b4b0
 */

uint recovered_1000b4b0(char *reg_ecx,char *reg_edx)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  code *pcVar2;
  uint uVar3;

  iVar1 = Ram00280800;
  if ((((iVar1 == 0x50414d57) && (iVar1 = Ram00280804, iVar1 != 0)) &&
      (uVar3 = Ram00280808, 0xb < uVar3)) &&
     ((uVar3 = Ram00280808, 0x9b < uVar3 && (pcVar2 = (code *)UINT_00280898, pcVar2 != (code *)0x0))
     )) {
    uVar3 = (*pcVar2)(reg_ecx,reg_edx,in_stack_00000004);
    return uVar3;
  }
  return 0;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef Ram00280800
#undef Ram00280804
#undef Ram00280808
#undef UINT_00280898
#undef in_stack_00000004

#undef str_10010887
#define str_10010887 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x9eeU)))
#undef str_1001089a
#define str_1001089a (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa01U)))
#undef str_100108cb
#define str_100108cb (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa32U)))
#undef str_100108e7
#define str_100108e7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa4eU)))
#undef str_10010909
#define str_10010909 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa70U)))
#undef str_10010937
#define str_10010937 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa9eU)))
#undef str_10010978
#define str_10010978 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xadfU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b500
 */

bool recovered_1000b500(char *reg_ecx)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  bool bVar2;

  pcVar1 = thunk_strstr(reg_ecx,str_10010887);
  bVar2 = true;
  if (pcVar1 == (char *)0x0) {
    pcVar1 = thunk_strstr(reg_ecx,str_1001089a);
    if (pcVar1 == (char *)0x0) {
      pcVar1 = thunk_strstr(reg_ecx,str_100108cb);
      if (pcVar1 == (char *)0x0) {
        pcVar1 = thunk_strstr(reg_ecx,str_100108e7);
        if (pcVar1 == (char *)0x0) {
          pcVar1 = thunk_strstr(reg_ecx,str_10010909);
          if (pcVar1 == (char *)0x0) {
            pcVar1 = thunk_strstr(reg_ecx,str_10010937);
            if (pcVar1 == (char *)0x0) {
              pcVar1 = thunk_strstr(reg_ecx,str_10010978);
              bVar2 = pcVar1 != (char *)0x0;
            }
          }
        }
      }
    }
  }
  return bVar2;
}

#undef str_10010887
#undef str_1001089a
#undef str_100108cb
#undef str_100108e7
#undef str_10010909
#undef str_10010937
#undef str_10010978

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef Ram00280800
#define Ram00280800 (*(uint32_t *)(0x280800U))
#undef Ram00280804
#define Ram00280804 (*(uint32_t *)(0x280804U))
#undef Ram00280808
#define Ram00280808 (*(uint32_t *)(0x280808U))
#undef UINT_00280898
#define UINT_00280898 (*(uint *)(0x280898U))
#undef str_10010a93
#define str_10010a93 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xbfaU)))
#undef str_10010ac9
#define str_10010ac9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc30U)))
#undef str_10010b13
#define str_10010b13 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc7aU)))
#define local_465 (*(byte (*)[1125])(pf_stack_frame + 27))
#define local_3ec (*(undefined2 *)(pf_stack_frame + 148))
#define local_214 (*(char (*)[532])(pf_stack_frame + 620))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b5d0
 */

/* WARNING: Type propagation algorithm not settling */

bool recovered_1000b5d0(uint *reg_ecx,uint reg_edx,uint param_3,uint param_4,int param_5)

{
  unsigned char pf_stack_frame[1184] __attribute__((aligned(16))) = {0};

  code *pcVar1;
  ulong uVar2;
  uint uVar3;
  int iVar4;
  byte bVar5;
  ulong n;
  byte *pbVar6;

  uVar2 = thunk_strlen((char *)param_5);
  if (0xffffff16 < uVar2 - 0xea) {
    n = 0x78;
    if (uVar2 < 0x78) {
      n = uVar2;
    }
    thunk_memcpy(local_465,(void *)param_5,n);
    local_465[n] = 0;
    PF_PART1(local_3ec, 0) = 0x22;
    iVar4 = 1;
    if (local_465[0] != 0) {
      pbVar6 = local_465;
      do {
        pbVar6 = pbVar6 + 1;
        if (local_465[0] < 0x20) {
          return false;
        }
        if (0x1d7 < iVar4 + 3U) {
          return false;
        }
        if ((local_465[0] == 0x2f) || (local_465[0] == 0x22)) {
          local_465[iVar4 + 0x79] = 0x2f;
          iVar4 = iVar4 + 1;
        }
        local_465[iVar4 + 0x79] = local_465[0];
        iVar4 = iVar4 + 1;
        local_465[0] = *pbVar6;
      } while (local_465[0] != 0);
    }
    (local_465 + iVar4 + 0x79)[0] = 0x22;
    (local_465 + iVar4 + 0x79)[1] = 0;
    thunk_snprintf(local_214,0x200,str_10010a93,*reg_ecx,&local_3ec);
    iVar4 = Ram00280800;
    if ((((iVar4 == 0x50414d57) && (iVar4 = Ram00280804, iVar4 != 0)) &&
        (uVar3 = Ram00280808, 0xb < uVar3)) &&
       (((uVar3 = Ram00280808, 0x9b < uVar3 &&
         (pcVar1 = (code *)UINT_00280898, pcVar1 != (code *)0x0)) &&
        (uVar3 = (*pcVar1)(local_214,(char *)reg_ecx[0x104],reg_ecx[0x105]), uVar3 != 0)))) {
      if (0x78 < uVar2) {
        PF_PART1(local_3ec, 0) = 0x22;
        bVar5 = *(byte *)(param_5 + n);
        if (bVar5 == 0) {
          iVar4 = 1;
        }
        else {
          pbVar6 = (byte *)(n + 1 + param_5);
          iVar4 = 1;
          do {
            if (bVar5 < 0x20) {
              return false;
            }
            if (0x1d7 < iVar4 + 3U) {
              return false;
            }
            if ((bVar5 == 0x2f) || (bVar5 == 0x22)) {
              local_465[iVar4 + 0x79] = 0x2f;
              iVar4 = iVar4 + 1;
            }
            local_465[iVar4 + 0x79] = bVar5;
            iVar4 = iVar4 + 1;
            bVar5 = *pbVar6;
            pbVar6 = pbVar6 + 1;
          } while (bVar5 != 0);
        }
        (local_465 + iVar4 + 0x79)[0] = 0x22;
        (local_465 + iVar4 + 0x79)[1] = 0;
        thunk_snprintf(local_214,0x200,str_10010ac9,*reg_ecx,*reg_ecx,&local_3ec);
        iVar4 = Ram00280800;
        if (iVar4 != 0x50414d57) {
          return false;
        }
        iVar4 = Ram00280804;
        if (iVar4 == 0) {
          return false;
        }
        uVar3 = Ram00280808;
        if (uVar3 < 0xc) {
          return false;
        }
        uVar3 = Ram00280808;
        if (uVar3 < 0x9c) {
          return false;
        }
        pcVar1 = (code *)UINT_00280898;
        if (pcVar1 == (code *)0x0) {
          return false;
        }
        uVar3 = (*pcVar1)(local_214,(char *)reg_ecx[0x104],reg_ecx[0x105]);
        if (uVar3 == 0) {
          return false;
        }
      }
      thunk_snprintf(local_214,0x200,str_10010b13,*reg_ecx,reg_edx,*reg_ecx,param_3,param_4);
      iVar4 = Ram00280800;
      if ((((iVar4 == 0x50414d57) && (iVar4 = Ram00280804, iVar4 != 0)) &&
          (uVar3 = Ram00280808, 0xb < uVar3)) &&
         ((uVar3 = Ram00280808, 0x9b < uVar3 &&
          (pcVar1 = (code *)UINT_00280898, pcVar1 != (code *)0x0)))) {
        uVar3 = (*pcVar1)(local_214,(char *)reg_ecx[0x104],reg_ecx[0x105]);
        return uVar3 != 0;
      }
    }
  }
  return false;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef Ram00280800
#undef Ram00280804
#undef Ram00280808
#undef UINT_00280898
#undef str_10010a93
#undef str_10010ac9
#undef str_10010b13
#undef local_465
#undef local_3ec
#undef local_214

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef Ram00280800
#define Ram00280800 (*(uint32_t *)(0x280800U))
#undef Ram00280804
#define Ram00280804 (*(uint32_t *)(0x280804U))
#undef Ram00280808
#define Ram00280808 (*(uint32_t *)(0x280808U))
#undef UINT_00280834
#define UINT_00280834 (*(uint *)(0x280834U))
#undef str_10010b66
#define str_10010b66 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xccdU)))
#undef str_10010b9e
#define str_10010b9e (*(char (*)[1])(((uintptr_t)pf_module_state + 0xd05U)))
#define acStack_f5 (*(char (*)[245])(pf_stack_frame + 43))
#define local_110 (*(int *)(pf_stack_frame + 16))
#define local_10c (*(int *)(pf_stack_frame + 20))
#define local_108 (*(undefined4 *)(pf_stack_frame + 24))
#define local_104 (*(undefined1 *)(pf_stack_frame + 28))
#define local_103 (*(char *)(pf_stack_frame + 29))
#define local_102 (*(char *)(pf_stack_frame + 30))
#define local_101 (*(char *)(pf_stack_frame + 31))
#define local_100 (*(char *)(pf_stack_frame + 32))
#define local_ff (*(char *)(pf_stack_frame + 33))
#define local_fe (*(char *)(pf_stack_frame + 34))
#define local_fd (*(char *)(pf_stack_frame + 35))
#define local_fc (*(char *)(pf_stack_frame + 36))
#define local_fb (*(char *)(pf_stack_frame + 37))
#define local_fa (*(char *)(pf_stack_frame + 38))
#define local_f9 (*(char *)(pf_stack_frame + 39))
#define local_f8 (*(char *)(pf_stack_frame + 40))
#define local_f7 (*(undefined2 *)(pf_stack_frame + 41))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b8f0
 */

undefined4 recovered_1000b8f0(int reg_ecx)

{
  unsigned char pf_stack_frame[320] __attribute__((aligned(16))) = {0};

  code *pcVar1;
  bool bVar2;
  ulong uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;

  uVar5 = *(uint *)(reg_ecx + 0x3dec);
  uVar6 = *(uint *)(reg_ecx + 0x3df0);
  if (0xffffff < (uVar6 | uVar5)) {
    return 0;
  }
  local_104 = 0x24;
  local_103 = str_10010b9e[uVar5 >> 0x14];
  local_102 = str_10010b9e[uVar5 >> 0x10 & 0xf];
  local_101 = str_10010b9e[uVar5 >> 0xc & 0xf];
  local_100 = str_10010b9e[uVar5 >> 8 & 0xf];
  local_ff = str_10010b9e[uVar5 >> 4 & 0xf];
  local_fe = str_10010b9e[uVar5 & 0xf];
  local_fd = str_10010b9e[uVar6 >> 0x14];
  local_fc = str_10010b9e[uVar6 >> 0x10 & 0xf];
  local_fb = str_10010b9e[uVar6 >> 0xc & 0xf];
  local_fa = str_10010b9e[uVar6 >> 8 & 0xf];
  local_f9 = str_10010b9e[uVar6 >> 4 & 0xf];
  local_f8 = str_10010b9e[uVar6 & 0xf];
  local_f7 = 0x3a;
  if (uVar6 == uVar5) {
    uVar3 = thunk_strlen((char *)(reg_ecx + 0x3e7c));
    if (0xef < uVar3 + 0xe) {
      return 0;
    }
    thunk_memcpy((void *)((int)&local_f7 + 1),(char *)(reg_ecx + 0x3e7c),uVar3 + 1);
  }
  else {
    local_108 = 0;
    local_10c = 0;
    local_110 = 0;
    iVar4 = Ram00280800;
    if (iVar4 != 0x50414d57) {
      return 0;
    }
    iVar4 = Ram00280804;
    if (iVar4 == 0) {
      return 0;
    }
    uVar5 = Ram00280808;
    if (uVar5 < 0xc) {
      return 0;
    }
    uVar5 = Ram00280808;
    if (uVar5 < 0x38) {
      return 0;
    }
    pcVar1 = (code *)UINT_00280834;
    if (pcVar1 == (code *)0x0) {
      return 0;
    }
    uVar5 = (*pcVar1)((char *)(reg_ecx + 0x3dfc),&local_110);
    if (uVar5 == 0) {
      return 0;
    }
    if (local_110 == 0 || local_10c != *(int *)(reg_ecx + 0x3df4)) {
      return 0;
    }
    uVar5 = *(uint *)(reg_ecx + 0x3df0);
    uVar7 = local_10c + uVar5 * -100;
    uVar6 = 100;
    if (uVar7 < 100) {
      uVar6 = uVar7;
    }
    if (local_10c == uVar5 * 100) {
      return 0;
    }
    uVar7 = *(uint *)(reg_ecx + 0x3dec);
    if (0xffffff < (uVar7 | uVar5)) {
      return 0;
    }
    iVar4 = local_110 + uVar5 * 100;
    local_104 = 0x24;
    local_103 = str_10010b9e[uVar7 >> 0x14];
    local_102 = str_10010b9e[uVar7 >> 0x10 & 0xf];
    local_101 = str_10010b9e[uVar7 >> 0xc & 0xf];
    local_100 = str_10010b9e[uVar7 >> 8 & 0xf];
    local_ff = str_10010b9e[uVar7 >> 4 & 0xf];
    local_fe = str_10010b9e[uVar7 & 0xf];
    local_fd = str_10010b9e[uVar5 >> 0x14];
    local_fc = str_10010b9e[uVar5 >> 0x10 & 0xf];
    local_fb = str_10010b9e[uVar5 >> 0xc & 0xf];
    local_fa = str_10010b9e[uVar5 >> 8 & 0xf];
    local_f9 = str_10010b9e[uVar5 >> 4 & 0xf];
    local_f8 = str_10010b9e[uVar5 & 0xf];
    local_f7 = 0x3a;
    uVar5 = 0;
    do {
      acStack_f5[uVar5 * 2 + -1] = str_10010b9e[*(byte *)(iVar4 + uVar5) >> 4];
      acStack_f5[uVar5 * 2] = str_10010b9e[*(byte *)(iVar4 + uVar5) & 0xf];
      uVar5 = uVar5 + 1;
    } while (uVar6 != uVar5);
    acStack_f5[uVar6 * 2 + -1] = '\0';
  }
  bVar2 = recovered_1000b5d0((uint *)reg_ecx,*(uint *)(reg_ecx + 0x3de0),*(uint *)(reg_ecx + 0x3de8)
                             ,*(uint *)(reg_ecx + 0x3de4),(int)&local_104);
  if (bVar2) {
    *(undefined1 *)(reg_ecx + 0x3ddd) = 1;
    *(undefined4 *)(reg_ecx + 0x3df8) = *(undefined4 *)(reg_ecx + 0x38b4);
    iVar4 = thunk_snprintf((char *)(reg_ecx + 0x498),0x80,str_10010b66,
                               *(int *)(reg_ecx + 0x3df0) + 1,*(int *)(reg_ecx + 0x3dec) + 1);
    return CONCAT31((int3)((uint)iVar4 >> 8),1);
  }
  return 0;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef Ram00280800
#undef Ram00280804
#undef Ram00280808
#undef UINT_00280834
#undef str_10010b66
#undef str_10010b9e
#undef acStack_f5
#undef local_110
#undef local_10c
#undef local_108
#undef local_104
#undef local_103
#undef local_102
#undef local_101
#undef local_100
#undef local_ff
#undef local_fe
#undef local_fd
#undef local_fc
#undef local_fb
#undef local_fa
#undef local_f9
#undef local_f8
#undef local_f7

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_00280a04
#define DAT_00280a04 (*(uint8_t *)(0x280a04U))
#undef Ram00280800
#define Ram00280800 (*(uint32_t *)(0x280800U))
#undef Ram00280804
#define Ram00280804 (*(uint32_t *)(0x280804U))
#undef Ram00280808
#define Ram00280808 (*(uint32_t *)(0x280808U))
#undef _DAT_00280a04
#define _DAT_00280a04 (*(code * *)(0x280a04U))
#undef str_10010baf
#define str_10010baf (*(char (*)[1])(((uintptr_t)pf_module_state + 0xd16U)))
#define local_94 (*(int *)(pf_stack_frame + 28))
#define local_90 (*(uint *)(pf_stack_frame + 32))
#define local_8c (*(float *)(pf_stack_frame + 36))
#define local_88 (*(undefined4 *)(pf_stack_frame + 40))
#define local_84 (*(undefined4 *)(pf_stack_frame + 44))
#define local_80 (*(undefined4 *)(pf_stack_frame + 48))
#define local_7c (*(char (*)[124])(pf_stack_frame + 52))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000bd00
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint recovered_1000bd00(uint *reg_ecx,void *reg_edx)

{
  unsigned char pf_stack_frame[208] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  int iVar3;

  thunk_snprintf(local_7c,0x60,str_10010baf,*reg_ecx,reg_edx);
  local_94 = 0;
  local_90 = 0;
  local_8c = 0.0;
  local_88 = 0;
  local_84 = 0;
  local_80 = 0;
  iVar3 = Ram00280800;
  uVar2 = 0;
  if ((((iVar3 == 0x50414d57) && (iVar3 = Ram00280804, iVar3 != 0)) &&
      (uVar1 = Ram00280808, 0xb < uVar1)) &&
     ((uVar1 = Ram00280808, 0x207 < uVar1 && (_DAT_00280a04 != (code *)0x0)))) {
    iVar3 = (*_DAT_00280a04)(local_7c,&local_94);
    if (iVar3 == 0) {
      uVar2 = 0;
    }
    else if (local_94 == 5) {
      uVar2 = (uint)(local_90 != 0);
    }
    else if (local_94 == 2) {
      uVar2 = (uint)ROUND(local_8c);
    }
    else {
      uVar2 = 0;
      if (local_94 == 1) {
        uVar2 = local_90;
      }
    }
  }
  return uVar2;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280a04
#undef Ram00280800
#undef Ram00280804
#undef Ram00280808
#undef _DAT_00280a04
#undef str_10010baf
#undef local_94
#undef local_90
#undef local_8c
#undef local_88
#undef local_84
#undef local_80
#undef local_7c

#undef DAT_1001016f
#define DAT_1001016f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2d6U)))
#undef str_10010baf
#define str_10010baf (*(char (*)[1])(((uintptr_t)pf_module_state + 0xd16U)))
#define local_74 (*(char (*)[116])(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000be10
 */

void recovered_1000be10(uint *reg_ecx,void *reg_edx,int param_3,uint param_4)

{
  unsigned char pf_stack_frame[176] __attribute__((aligned(16))) = {0};


  thunk_snprintf(local_74,0x60,str_10010baf,*reg_ecx,reg_edx);
  recovered_1000ac30(param_3,param_4,&DAT_1001016f);
  return;
}

#undef DAT_1001016f
#undef str_10010baf
#undef local_74

#define local_38 (*(uint (*)[14])(pf_stack_frame + 24))
#define local_30 (*(uint *)(pf_stack_frame + 32))
#define local_2c (*(uint *)(pf_stack_frame + 36))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000be60
 */

undefined4 recovered_1000be60(char *reg_ecx,uint reg_edx,uint *param_3,uint *param_4,char *param_5)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  char cVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  uint *puVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;

  if ((reg_edx < 0xe || reg_ecx == (char *)0x0) || (*reg_ecx != '$')) {
    return 0;
  }
  local_2c = reg_edx;
  local_38[0] = 0;
  local_30 = 0;
  iVar12 = 1;
  puVar8 = local_38;
  bVar3 = true;
  do {
    bVar2 = bVar3;
    cVar1 = reg_ecx[iVar12];
    iVar9 = (int)cVar1;
    if ((byte)(cVar1 - 0x30U) < 10) {
      iVar9 = iVar9 + -0x30;
    }
    else if ((byte)(cVar1 + 0xbfU) < 6) {
      iVar9 = iVar9 + -0x37;
    }
    else {
      if (5 < (byte)(cVar1 + 0x9fU)) goto LAB_1000c0a6;
      iVar9 = iVar9 + -0x57;
    }
    if (iVar9 < 0) goto LAB_1000c0a6;
    cVar1 = reg_ecx[iVar12 + 1];
    iVar10 = (int)cVar1;
    if ((byte)(cVar1 - 0x30U) < 10) {
      uVar11 = iVar10 - 0x30;
    }
    else if ((byte)(cVar1 + 0xbfU) < 6) {
      uVar11 = iVar10 - 0x37;
    }
    else {
      if (5 < (byte)(cVar1 + 0x9fU)) goto LAB_1000c0a6;
      uVar11 = iVar10 - 0x57;
    }
    if ((int)uVar11 < 0) goto LAB_1000c0a6;
    cVar1 = reg_ecx[iVar12 + 2];
    iVar10 = (int)cVar1;
    if ((byte)(cVar1 - 0x30U) < 10) {
      iVar10 = iVar10 + -0x30;
    }
    else if ((byte)(cVar1 + 0xbfU) < 6) {
      iVar10 = iVar10 + -0x37;
    }
    else {
      if (5 < (byte)(cVar1 + 0x9fU)) goto LAB_1000c0a6;
      iVar10 = iVar10 + -0x57;
    }
    if (iVar10 < 0) goto LAB_1000c0a6;
    cVar1 = reg_ecx[iVar12 + 3];
    iVar6 = (int)cVar1;
    if ((byte)(cVar1 - 0x30U) < 10) {
      uVar7 = iVar6 - 0x30;
    }
    else if ((byte)(cVar1 + 0xbfU) < 6) {
      uVar7 = iVar6 - 0x37;
    }
    else {
      if (5 < (byte)(cVar1 + 0x9fU)) goto LAB_1000c0a6;
      uVar7 = iVar6 - 0x57;
    }
    if ((int)uVar7 < 0) goto LAB_1000c0a6;
    cVar1 = reg_ecx[iVar12 + 4];
    iVar6 = (int)cVar1;
    if ((byte)(cVar1 - 0x30U) < 10) {
      iVar6 = iVar6 + -0x30;
    }
    else if ((byte)(cVar1 + 0xbfU) < 6) {
      iVar6 = iVar6 + -0x37;
    }
    else {
      if (5 < (byte)(cVar1 + 0x9fU)) goto LAB_1000c0a6;
      iVar6 = iVar6 + -0x57;
    }
    if (iVar6 < 0) goto LAB_1000c0a6;
    cVar1 = reg_ecx[iVar12 + 5];
    iVar12 = (int)cVar1;
    if ((byte)(cVar1 - 0x30U) < 10) {
      uVar4 = iVar12 - 0x30;
    }
    else if ((byte)(cVar1 + 0xbfU) < 6) {
      uVar4 = iVar12 - 0x37;
    }
    else {
      if (5 < (byte)(cVar1 + 0x9fU)) goto LAB_1000c0a6;
      uVar4 = iVar12 - 0x57;
    }
    if ((int)uVar4 < 0) goto LAB_1000c0a6;
    *puVar8 = iVar6 << 4 | uVar4 |
              (iVar10 << 4 | uVar7 | (*puVar8 << 8 | uVar11 | iVar9 << 4) << 8) << 8;
    iVar12 = 7;
    puVar8 = &local_30;
    bVar3 = false;
  } while (bVar2);
  uVar5 = 0;
  uVar11 = (byte)reg_ecx[0xd] - 0x21;
  if ((uVar11 < 0x1f) && ((0x42000001U >> (uVar11 & 0x1f) & 1) != 0)) {
    if (local_2c == 0xe || reg_ecx[0xd] == 0x3a) {
      *param_3 = local_38[0];
      *param_4 = local_30;
      *param_5 = reg_ecx[0xd];
      uVar5 = 1;
    }
    else {
LAB_1000c0a6:
      uVar5 = 0;
    }
  }
  return uVar5;
}

#undef local_38
#undef local_30
#undef local_2c

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_00280a04
#define DAT_00280a04 (*(uint8_t *)(0x280a04U))
#undef DAT_10010681
#define DAT_10010681 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7e8U)))
#undef Ram00280800
#define Ram00280800 (*(uint32_t *)(0x280800U))
#undef Ram00280804
#define Ram00280804 (*(uint32_t *)(0x280804U))
#undef Ram00280808
#define Ram00280808 (*(uint32_t *)(0x280808U))
#undef _DAT_00280a04
#define _DAT_00280a04 (*(code * *)(0x280a04U))
#undef str_10010baf
#define str_10010baf (*(char (*)[1])(((uintptr_t)pf_module_state + 0xd16U)))
#define local_88 (*(uint *)(pf_stack_frame + 24))
#define local_84 (*(int *)(pf_stack_frame + 28))
#define local_80 (*(undefined4 *)(pf_stack_frame + 32))
#define local_7c (*(char * *)(pf_stack_frame + 36))
#define local_78 (*(undefined4 *)(pf_stack_frame + 40))
#define local_74 (*(undefined4 *)(pf_stack_frame + 44))
#define local_70 (*(char (*)[112])(pf_stack_frame + 48))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c0e0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool recovered_1000c0e0(uint *reg_ecx)

{
  unsigned char pf_stack_frame[192] __attribute__((aligned(16))) = {0};

  uint uVar1;
  bool bVar2;
  int iVar3;

  thunk_snprintf(local_70,0x60,str_10010baf,*reg_ecx,&DAT_10010681);
  local_88 = 0;
  local_84 = 0;
  local_80 = 0;
  local_7c = (char *)0x0;
  local_78 = 0;
  local_74 = 0;
  iVar3 = Ram00280800;
  if ((((iVar3 == 0x50414d57) && (iVar3 = Ram00280804, iVar3 != 0)) &&
      (uVar1 = Ram00280808, 0xb < uVar1)) &&
     (((uVar1 = Ram00280808, 0x207 < uVar1 && (_DAT_00280a04 != (code *)0x0)) &&
      (iVar3 = (*_DAT_00280a04)(local_70,&local_88), iVar3 != 0)))) {
    if ((local_88 & 0xfffffffb) == 1) {
      return local_84 != 0;
    }
    if (local_7c != (char *)0x0 && local_88 == 3) {
      bVar2 = true;
      switch((uintptr_t)(*local_7c)) {
      case 'T':
      case 'Y':
      case 't':
      case 'y':
        goto switchD_1000c1d2_caseD_54;
      case 'U':
      case 'V':
      case 'W':
      case 'X':
      case 'Z':
      case '[':
      case '\\':
      case ']':
      case '^':
      case '_':
      case '`':
      case 'a':
      case 'b':
      case 'c':
      case 'd':
      case 'e':
      case 'f':
      case 'g':
      case 'h':
      case 'i':
      case 'j':
      case 'k':
      case 'l':
      case 'm':
      case 'n':
      case 'o':
      case 'p':
      case 'q':
      case 'r':
      case 's':
      case 'u':
      case 'v':
      case 'w':
      case 'x':
        break;
      default:
        if (*local_7c == '1') {
          return true;
        }
      }
    }
  }
  bVar2 = false;
switchD_1000c1d2_caseD_54:
  return bVar2;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280a04
#undef DAT_10010681
#undef Ram00280800
#undef Ram00280804
#undef Ram00280808
#undef _DAT_00280a04
#undef str_10010baf
#undef local_88
#undef local_84
#undef local_80
#undef local_7c
#undef local_78
#undef local_74
#undef local_70

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c280
 */

bool recovered_1000c280(int reg_ecx,int reg_edx,int param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  ulong uVar3;
  char *text;
  uint uVar4;
  bool bVar5;

  iVar1 = *(int *)(reg_ecx + 0x3d64);
  if (iVar1 != 0) {
    if (reg_edx == 0x1b || param_3 == 1) {
      *(undefined4 *)(reg_ecx + 0x3d64) = 0;
      thunk_memset((void *)(reg_ecx + 0x3d92),0,0x41);
    }
    else if (reg_edx == 9) {
      *(byte *)(reg_ecx + 0x3d68) = *(byte *)(reg_ecx + 0x3d68) ^ 1;
    }
    else if (((param_3 == 0x1c) || (reg_edx == 0xd)) || (reg_edx == 10)) {
      recovered_1000c3a0(reg_ecx);
    }
    else {
      if (iVar1 == 2) {
        iVar2 = 0x3d71;
        uVar4 = 0x21;
      }
      else {
        bVar5 = *(int *)(reg_ecx + 0x3d68) != 0;
        iVar2 = 0x3d92;
        if (!bVar5) {
          iVar2 = 0x3d71;
        }
        uVar4 = (uint)bVar5 * 0x20 + 0x21;
      }
      text = (char *)(reg_ecx + iVar2);
      uVar3 = thunk_strlen(text);
      if (((reg_edx == 0x7f || reg_edx == 8) || param_3 == 0xe) && (uVar3 != 0)) {
        text[uVar3 - 1] = '\0';
      }
      else if ((reg_edx - 0x20U < 0x5f) && (uVar3 + 1 < uVar4)) {
        text[uVar3] = (char)reg_edx;
        text[uVar3 + 1] = '\0';
      }
    }
  }
  return iVar1 != 0;
}


#undef DAT_10010bcb
#define DAT_10010bcb (*(uint8_t *)(((uintptr_t)pf_module_state + 0xd32U)))
#undef DAT_10010c86
#define DAT_10010c86 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xdedU)))
#undef DAT_10011090
#define DAT_10011090 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x11f7U)))
#undef str_10010bcf
#define str_10010bcf (*(char (*)[1])(((uintptr_t)pf_module_state + 0xd36U)))
#undef str_10010bfc
#define str_10010bfc (*(char (*)[1])(((uintptr_t)pf_module_state + 0xd63U)))
#undef str_10010c29
#define str_10010c29 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xd90U)))
#undef str_10010c59
#define str_10010c59 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xdc0U)))
#undef str_10010c7e
#define str_10010c7e (*(char (*)[1])(((uintptr_t)pf_module_state + 0xde5U)))
#undef str_10010c8b
#define str_10010c8b (*(char (*)[1])(((uintptr_t)pf_module_state + 0xdf2U)))
#undef str_10010ccd
#define str_10010ccd (*(char (*)[1])(((uintptr_t)pf_module_state + 0xe34U)))
#undef str_10010cfa
#define str_10010cfa (*(char (*)[1])(((uintptr_t)pf_module_state + 0xe61U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c3a0
 */

void recovered_1000c3a0(int reg_ecx)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char *text;
  char cVar1;
  int iVar2;
  ulong uVar3;
  int iVar4;
  byte bVar5;
  uint uVar6;
  char *pcVar7;
  byte *a;
  bool bVar8;

  a = (byte *)(reg_ecx + 0x3d71);
  if (*(int *)(reg_ecx + 0x3d64) == 2) {
    iVar2 = thunk_strcmp((char *)a,&DAT_10010bcb);
    if (iVar2 == 0) {
      iVar2 = 0;
LAB_1000c4e9:
      *(int *)(reg_ecx + 0x3dd4) = iVar2;
      *(undefined4 *)(reg_ecx + 0x5c0) = 0;
      *(int *)(reg_ecx + 0x38b8) = *(int *)(reg_ecx + 0x38b8) + 1;
      *(undefined4 *)(reg_ecx + 0x3d64) = 0;
      return;
    }
    if (*(char *)(reg_ecx + 0x3d71) == '!') {
      a = (byte *)(reg_ecx + 0x3d72);
    }
    uVar3 = thunk_strlen((char *)a);
    if (uVar3 == 8) {
      bVar5 = *a;
      if (bVar5 != 0) {
        iVar2 = 0;
        do {
          a = a + 1;
          uVar6 = (uint)(byte)(bVar5 - 0x30U);
          if (9 < (byte)(bVar5 - 0x30U)) {
            if ((byte)(bVar5 + 0x9f) < 6) {
              uVar6 = bVar5 - 0x57;
            }
            else {
              if (5 < (byte)(bVar5 + 0xbf)) {
                pcVar7 = str_10010bfc;
                goto LAB_1000c69a;
              }
              uVar6 = bVar5 - 0x37;
            }
          }
          iVar2 = iVar2 * 0x10 + uVar6;
          bVar5 = *a;
        } while (bVar5 != 0);
        if (1 < iVar2 + 1U) goto LAB_1000c4e9;
      }
      pcVar7 = str_10010c29;
    }
    else {
      pcVar7 = str_10010bcf;
    }
    goto LAB_1000c69a;
  }
  if ((*a == 0) || (*(char *)(reg_ecx + 0x3d92) == '\0')) {
    pcVar7 = str_10010c59;
    goto LAB_1000c69a;
  }
  text = (char *)(reg_ecx + 0x3d92);
  uVar3 = thunk_strlen(text);
  iVar2 = thunk_strcmp(text,str_10010c7e);
  if (iVar2 == 0) {
    bVar8 = true;
    if (uVar3 != 0x40) goto LAB_1000c543;
LAB_1000c548:
    bVar8 = true;
    pcVar7 = text;
    do {
      cVar1 = *pcVar7;
      if (5 < (byte)(cVar1 + 0x9fU) && 9 < (byte)(cVar1 - 0x30U)) {
        bVar8 = (bool)(bVar8 & (byte)(cVar1 + 0xbfU) < 6);
      }
      pcVar7 = pcVar7 + 1;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  else {
    iVar2 = thunk_strcmp(text,&DAT_10010c86);
    bVar8 = iVar2 == 0;
    if (uVar3 == 0x40) goto LAB_1000c548;
LAB_1000c543:
    if (uVar3 == 0x20) goto LAB_1000c548;
  }
  pcVar7 = str_10010c8b;
  if ((0xfffffff8 < *(int *)(reg_ecx + 0x3d6c) - 8U) && ((bool)(*a != 0 & bVar8))) {
    iVar2 = *(int *)(reg_ecx + 0x389c);
    if (iVar2 == 0x20) {
      pcVar7 = str_10010ccd;
    }
    else {
      *(int *)(reg_ecx + 0x389c) = iVar2 + 1;
      iVar2 = iVar2 * 0x168;
      thunk_memset((void *)(reg_ecx + 0xa34 + iVar2),0,0x168);
      *(undefined4 *)(reg_ecx + 0xa34 + iVar2) = 2;
      iVar4 = *(int *)(reg_ecx + 0x38a0) + 1;
      *(int *)(reg_ecx + 0x38a0) = iVar4;
      *(int *)(reg_ecx + 0xa38 + iVar2) = iVar4;
      *(undefined4 *)(reg_ecx + 0xa3c + iVar2) = DAT_10011090;
      *(undefined4 *)(reg_ecx + 0xa40 + iVar2) = *(undefined4 *)(reg_ecx + 0x3d6c);
      *(undefined1 *)(reg_ecx + 0xa48 + iVar2) = *(undefined1 *)(reg_ecx + 0x3d70);
      thunk_memcpy((void *)(reg_ecx + 0xb39 + iVar2),a,0x21);
      thunk_memcpy((void *)(reg_ecx + 0xb5a + iVar2),text,0x41);
      *(undefined4 *)(reg_ecx + 0x3d64) = 0;
      thunk_memset(text,0,0x41);
      *(undefined1 *)(reg_ecx + 0x38c8) = 0;
      pcVar7 = str_10010cfa;
    }
  }
LAB_1000c69a:
  thunk_snprintf((char *)(reg_ecx + 0x418),0x80,pcVar7);
  return;
}

#undef DAT_10010bcb
#undef DAT_10010c86
#undef DAT_10011090
#undef str_10010bcf
#undef str_10010bfc
#undef str_10010c29
#undef str_10010c59
#undef str_10010c7e
#undef str_10010c8b
#undef str_10010ccd
#undef str_10010cfa

#undef DAT_1001016f
#define DAT_1001016f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2d6U)))
#undef DAT_1001032f
#define DAT_1001032f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x496U)))
#undef str_100100e6
#define str_100100e6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x24dU)))
#undef str_100105e8
#define str_100105e8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x74fU)))
#undef str_10010d4b
#define str_10010d4b (*(char (*)[1])(((uintptr_t)pf_module_state + 0xeb2U)))
#undef str_10010e3b
#define str_10010e3b (*(char (*)[1])(((uintptr_t)pf_module_state + 0xfa2U)))
#undef str_10010e41
#define str_10010e41 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xfa8U)))
#undef str_10010e4e
#define str_10010e4e (*(char (*)[1])(((uintptr_t)pf_module_state + 0xfb5U)))
#undef str_10010e5c
#define str_10010e5c (*(char (*)[1])(((uintptr_t)pf_module_state + 0xfc3U)))
#undef str_10010e64
#define str_10010e64 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xfcbU)))
#undef str_10010e72
#define str_10010e72 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xfd9U)))
#undef str_10010e82
#define str_10010e82 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xfe9U)))
#undef str_10010e92
#define str_10010e92 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xff9U)))
#undef str_10010eab
#define str_10010eab (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1012U)))
#undef str_10010ebe
#define str_10010ebe (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1025U)))
#undef str_10010ec4
#define str_10010ec4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x102bU)))
#undef str_10010ecb
#define str_10010ecb (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1032U)))
#undef str_10010ed3
#define str_10010ed3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x103aU)))
#undef str_10010ee1
#define str_10010ee1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1048U)))
#undef str_10010f14
#define str_10010f14 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x107bU)))
#undef str_10010f1a
#define str_10010f1a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1081U)))
#undef str_10010f23
#define str_10010f23 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x108aU)))
#undef str_10010f2a
#define str_10010f2a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1091U)))
#undef str_10010f39
#define str_10010f39 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x10a0U)))
#undef str_10010f4a
#define str_10010f4a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x10b1U)))
#undef str_10010f5b
#define str_10010f5b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x10c2U)))
#undef str_10010f69
#define str_10010f69 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x10d0U)))
#undef str_10010f85
#define str_10010f85 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x10ecU)))
#define auStackY_21d0 (*(undefined4 (*)[2164])(pf_stack_frame + 16))
#define piStack_1f30 (*(int * *)(pf_stack_frame + 688))
#define local_1f6c (*(int *)(pf_stack_frame + 628))
#define local_1f64 (*(int *)(pf_stack_frame + 636))
#define local_1f60 (*(int *)(pf_stack_frame + 640))
#define acStack_1e18 (*(char (*)[7704])(pf_stack_frame + 968))
#define local_1f58 (*(int *)(pf_stack_frame + 648))
#define local_1f54 (*(int *)(pf_stack_frame + 652))
#define local_1f4c (*(uint *)(pf_stack_frame + 660))
#define local_1f40 (*(int *)(pf_stack_frame + 672))
#define local_1f3c (*(int *)(pf_stack_frame + 676))
#define local_1f2c (*(int *)(pf_stack_frame + 692))
#define local_1f28 (*(int *)(pf_stack_frame + 696))
#define local_1f24 (*(int *)(pf_stack_frame + 700))
#define local_1f20 (*(int *)(pf_stack_frame + 704))
#define local_1f1c (*(int * *)(pf_stack_frame + 708))
#define local_1f18 (*(int *)(pf_stack_frame + 712))
#define local_1f14 (*(int * *)(pf_stack_frame + 716))
#define local_1f10 (*(undefined4 *)(pf_stack_frame + 720))
#define local_1f0c (*(undefined4 *)(pf_stack_frame + 724))
#define local_1f08 (*(int *)(pf_stack_frame + 728))
#define local_1f04 (*(int * *)(pf_stack_frame + 732))
#define local_1f00 (*(uint *)(pf_stack_frame + 736))
#define local_1efc (*(int *)(pf_stack_frame + 740))
#define local_1ef8 (*(int *)(pf_stack_frame + 744))
#define local_1ef4 (*(int * *)(pf_stack_frame + 748))
#define local_1ef0 (*(undefined4 *)(pf_stack_frame + 752))
#define local_1eec (*(undefined4 *)(pf_stack_frame + 756))
#define in_stack_ffffe034 (*(undefined1 (*)[8140])(pf_stack_frame + 532))
#define local_1ea8 (*(char (*)[7848])(pf_stack_frame + 824))
#define local_1e58 (*(char (*)[7768])(pf_stack_frame + 904))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c6d0
 */

void recovered_1000c6d0(int *reg_ecx)

{
  unsigned char pf_stack_frame[8704] __attribute__((aligned(16))) = {0};

  char cVar1;
  int iVar2;
  bool bVar3;
  PFUiView view;
  PFUiView view_00;
  PFUiView view_01;
  uint uVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  void *src;
  uint uVar8;
  char *arg3;
  char cVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  void *pvVar15;
  int *piVar16;
  void *pvVar17;
  uint uVar18;
  int *piVar19;
  int **ppiVar20;
  char *pcVar21;
  undefined4 *puVar22;
  char *pcVar23;
  bool bVar24;
  byte bVar25;
  undefined4 uVar26;
  uint uVar27;

  bVar25 = 0;
  iVar12 = *reg_ecx;
  if (iVar12 == 0) {
    local_1f64 = 400;
    iVar11 = 0x2f8;
  }
  else {
    iVar11 = 0x2f8;
    if (*(int *)(iVar12 + 4) != 0) {
      iVar11 = *(int *)(iVar12 + 4);
    }
    local_1f64 = 400;
    if (*(int *)(iVar12 + 8) != 0) {
      local_1f64 = *(int *)(iVar12 + 8);
    }
  }
  uVar4 = thunk_terror_ui_colour(0);
  pf_app_terror_ui_rectangle(local_1ea8,uVar4);
  pcVar21 = local_1ea8;
  pcVar7 = acStack_1e18;
  for (iVar10 = 0x13; iVar10 != 0; iVar10 = iVar10 + -1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar21;
    pcVar21 = pcVar21 + ((uint)bVar25 * -2 + 1) * 4;
    pcVar7 = pcVar7 + ((uint)bVar25 * -2 + 1) * 4;
  }
  if ((0 < iVar11) && (0 < local_1f64)) {
    pvVar15 = (void *)0x0;
    if ((char)reg_ecx[2] == '\0') {
      pvVar15 = (void *)reg_ecx[1];
    }
    pf_app_terror_ui_view_draw((void *)*reg_ecx,acStack_1e18,0,0,iVar11,local_1f64,pvVar15);
  }
  iVar11 = reg_ecx[1];
  if (iVar11 == 0 || *(int *)(iVar12 + 0x3d64) == 0) {
    if (*(int *)(iVar12 + 0x3d64) != 0) goto LAB_1000c7c0;
  }
  else {
    if (*(int *)(iVar11 + 0x10) != 0) {
      recovered_1000e0a0(reg_ecx);
      *(undefined1 *)(reg_ecx + 2) = 1;
    }
LAB_1000c7c0:
    reg_ecx[1] = 0;
  }
  local_1f6c = *reg_ecx;
  local_1ef8 = iVar11;
  if (local_1f6c == 0) {
    iVar12 = 400;
    local_1f58 = 0x1c;
    local_1f60 = 0xd8;
LAB_1000c861:
    uVar4 = thunk_terror_ui_colour(0x2d);
    pf_app_terror_ui_rectangle(local_1ea8,uVar4);
    pcVar21 = local_1ea8;
    pcVar7 = acStack_1e18;
    for (iVar11 = 0x13; iVar11 != 0; iVar11 = iVar11 + -1) {
      *(undefined4 *)pcVar7 = *(undefined4 *)pcVar21;
      pcVar21 = pcVar21 + ((uint)bVar25 * -2 + 1) * 4;
      pcVar7 = pcVar7 + ((uint)bVar25 * -2 + 1) * 4;
    }
    if (0 < iVar12) {
      pvVar15 = (void *)0x0;
      if ((char)reg_ecx[2] == '\0') {
        pvVar15 = (void *)reg_ecx[1];
      }
      pf_app_terror_ui_view_draw((void *)*reg_ecx,acStack_1e18,0,0,local_1f60,iVar12,pvVar15);
    }
    iVar12 = local_1f60 + -0x1c;
    if (local_1f6c == 0) {
      recovered_1000ed70(0xc,iVar12,0xc,str_100100e6,1);
LAB_1000c93a:
      iVar11 = 10;
    }
    else {
      iVar11 = 0xc;
      if (0 < *(int *)(local_1f6c + 0x3a8)) {
        iVar11 = *(int *)(local_1f6c + 0x3a8) + 2;
      }
      recovered_1000ed70(0xc,iVar12,iVar11,str_100100e6,1);
      iVar11 = *(int *)(local_1f6c + 0x3a8);
      if (iVar11 < 1) goto LAB_1000c93a;
    }
    local_1f60 = local_1f60 + -0x14;
    pcVar21 = str_10010e41;
    if (*(char *)(local_1f6c + 0x540) != '\0') {
      pcVar21 = (char *)(local_1f6c + 0x540);
    }
    local_1ef0 = 0;
    local_1eec = 0;
    local_1ef4 = reg_ecx;
    pf_app_terror_ui_button(local_1ea8,pcVar21,recovered_1000f0f0,&local_1ef4);
    pcVar21 = local_1ea8;
    pcVar7 = acStack_1e18;
    for (iVar10 = 0x13; iVar10 != 0; iVar10 = iVar10 + -1) {
      *(undefined4 *)pcVar7 = *(undefined4 *)pcVar21;
      pcVar21 = pcVar21 + ((uint)bVar25 * -2 + 1) * 4;
      pcVar7 = pcVar7 + ((uint)bVar25 * -2 + 1) * 4;
    }
    pvVar15 = (void *)0x0;
    if ((char)reg_ecx[2] == '\0') {
      pvVar15 = (void *)reg_ecx[1];
    }
    pf_app_terror_ui_view_draw((void *)*reg_ecx,acStack_1e18,10,iVar11 + 0x1a,local_1f60,local_1f58,pvVar15)
    ;
    iVar11 = local_1f58 + 0x12 + iVar11 + 0x1a;
    iVar10 = 0xc;
    if (0 < *(int *)(local_1f6c + 0x3a8)) {
      iVar10 = *(int *)(local_1f6c + 0x3a8) + 2;
    }
    recovered_1000ed70(iVar11,iVar12,iVar10,str_10010e4e,0x31);
    iVar10 = *(int *)(local_1f6c + 0x3a8);
    local_1f64 = 0x14;
    if (0 < iVar10) {
      local_1f64 = iVar10 + 10;
    }
    iVar5 = 400;
    if (*(int *)(local_1f6c + 8) != 0) {
      iVar5 = *(int *)(local_1f6c + 8);
    }
    if ((*(char *)(local_1f6c + 0xa2d) != '\0') ||
       (local_1f4c = 1, *(int *)(local_1f6c + 0x5b8) == 1)) {
      local_1f4c = 2;
    }
    if ((*(char *)(local_1f6c + 0xa2e) != '\0') || (*(int *)(local_1f6c + 0x5b8) == 2)) {
      local_1f4c = local_1f4c + 1;
    }
    if ((*(char *)(local_1f6c + 0xa2f) != '\0') || (*(int *)(local_1f6c + 0x5b8) == 3)) {
      local_1f4c = local_1f4c + 1;
    }
    if ((*(char *)(local_1f6c + 0xa30) != '\0') || (*(int *)(local_1f6c + 0x5b8) == 4)) {
      local_1f4c = local_1f4c + 1;
    }
    if ((*(char *)(local_1f6c + 0xa31) != '\0') || (*(int *)(local_1f6c + 0x5b8) == 5)) {
      local_1f4c = local_1f4c + 1;
    }
    if ((*(char *)(local_1f6c + 0xa32) != '\0') || (*(int *)(local_1f6c + 0x5b8) == 6)) {
      local_1f4c = local_1f4c + 1;
    }
    if ((*(char *)(local_1f6c + 0xa33) != '\0') || (*(int *)(local_1f6c + 0x5b8) == 7)) {
      local_1f4c = local_1f4c + 1;
    }
    local_1f64 = local_1f64 + iVar11;
    iVar11 = -0xc;
    if (0 < iVar10) {
      iVar11 = -2 - iVar10;
    }
    iVar5 = iVar11 + local_1f58 * -2 + -0x1c + iVar5;
    if (iVar5 - local_1f64 == 0 || iVar5 < local_1f64) {
      uVar4 = 0;
    }
    else {
      uVar4 = ((iVar5 - local_1f64) + -0xe) / (local_1f58 + 4);
    }
    local_1f40 = local_1f58 + 4;
    local_1f54 = uVar4 - (uVar4 != 0 && uVar4 < local_1f4c);
    if (local_1f54 != 0) {
      pcVar21 = str_10010e5c;
      if (*(char *)(local_1f6c + 0x91c) != '\0') {
        pcVar21 = (char *)(local_1f6c + 0x91c);
      }
      thunk_snprintf(acStack_1e18,0x30,(char *)((uintptr_t)pf_module_state + 0xfbeU),pcVar21);
      if (*(int *)(local_1f6c + 0x3dd4) == 0) {
        bVar24 = *(int *)(local_1f6c + 0x5b8) == 0;
      }
      else {
        bVar24 = false;
      }
      local_1f54 = local_1f54 + -1;
      recovered_1000efc0(local_1f64,local_1f60,local_1f58,acStack_1e18,1,0,bVar24);
      local_1f64 = local_1f64 + local_1f40;
      pcVar21 = (char *)(local_1f6c + 0x93d);
      iVar11 = -7;
      do {
        iVar10 = iVar11 + 8;
        if ((*(char *)(local_1f6c + 0xa34 + iVar11) != '\0') ||
           (iVar10 == *(int *)(local_1f6c + 0x5b8))) {
          if (local_1f54 == 0) break;
          pcVar7 = pcVar21;
          if (*pcVar21 == '\0') {
            pcVar7 = str_100105e8;
          }
          thunk_snprintf(acStack_1e18,0x30,(char *)((uintptr_t)pf_module_state + 0xfbeU),pcVar7);
          if (*(int *)(local_1f6c + 0x3dd4) == 0) {
            bVar24 = iVar10 == *(int *)(local_1f6c + 0x5b8);
          }
          else {
            bVar24 = false;
          }
          local_1f54 = local_1f54 + -1;
          recovered_1000efc0(local_1f64,local_1f60,local_1f58,acStack_1e18,1,iVar10,bVar24);
          local_1f64 = local_1f64 + local_1f40;
        }
        pcVar21 = pcVar21 + 0x21;
        iVar11 = iVar11 + 1;
      } while (iVar11 != 0);
    }
    if ((uVar4 < local_1f4c) && (local_1f64 + local_1f58 < iVar5)) {
      local_1ef0 = 0x10;
      local_1eec = 0;
      local_1ef4 = reg_ecx;
      pf_app_terror_ui_button(local_1ea8,str_10010e64,recovered_1000f0f0,&local_1ef4);
      pcVar21 = local_1ea8;
      pcVar7 = acStack_1e18;
      for (iVar11 = 0x13; iVar11 != 0; iVar11 = iVar11 + -1) {
        *(undefined4 *)pcVar7 = *(undefined4 *)pcVar21;
        pcVar21 = pcVar21 + ((uint)bVar25 * -2 + 1) * 4;
        pcVar7 = pcVar7 + ((uint)bVar25 * -2 + 1) * 4;
      }
      pvVar15 = (void *)0x0;
      if ((char)reg_ecx[2] == '\0') {
        pvVar15 = (void *)reg_ecx[1];
      }
      pf_app_terror_ui_view_draw((void *)*reg_ecx,acStack_1e18,10,local_1f64,local_1f60,local_1f58,pvVar15);
      local_1f64 = local_1f64 + local_1f40;
    }
    iVar11 = *(int *)(local_1f6c + 0x3a8);
    if (iVar11 < 1) {
      iVar11 = 0xc;
      if (local_1f64 + 0x1a < iVar5) goto LAB_1000cda5;
LAB_1000cea5:
      iVar11 = 10;
    }
    else if (local_1f64 + 0x10 + iVar11 < iVar5) {
      iVar11 = iVar11 + 2;
LAB_1000cda5:
      recovered_1000ed70(local_1f64 + 0xe,iVar12,iVar11,str_10010e72,0x31);
      iVar11 = *(int *)(local_1f6c + 0x3a8);
      iVar10 = 10;
      if (0 < iVar11) {
        iVar10 = iVar11;
      }
      if (local_1f58 + 0x18 + local_1f64 + iVar10 < iVar5) {
        iVar10 = local_1f64 + 0x18 + iVar10;
        iVar11 = 0;
        do {
          uVar4 = recovered_1000ee50(local_1f6c,iVar11);
          if (uVar4 == 0) break;
          thunk_snprintf(acStack_1e18,0x20,(char *)((uintptr_t)pf_module_state + 0xed3U),uVar4);
          recovered_1000efc0(iVar10,local_1f60,local_1f58,acStack_1e18,4,uVar4,
                             *(uint *)(local_1f6c + 0x3dd4) == uVar4);
          iVar10 = iVar10 + local_1f40;
          iVar11 = iVar11 + 1;
        } while (local_1f58 + iVar10 < iVar5);
        iVar11 = *(int *)(local_1f6c + 0x3a8);
      }
      if (iVar11 < 1) goto LAB_1000cea5;
    }
    pcVar21 = str_10010e92;
    if (*(char *)(local_1f6c + 0x38c7) != '\0') {
      pcVar21 = str_10010e82;
    }
    recovered_1000ed70(iVar5,iVar12,iVar11 + 2,pcVar21,0x31);
    iVar12 = *(int *)(local_1f6c + 0x3a8) + 2;
    if (*(int *)(local_1f6c + 0x3a8) < 1) {
      iVar12 = 0xc;
    }
    local_1ef0 = 3;
    local_1eec = 0;
    local_1ef4 = reg_ecx;
    pf_app_terror_ui_button(local_1ea8,str_10010eab,recovered_1000f0f0,&local_1ef4);
    pcVar21 = local_1ea8;
    pcVar7 = acStack_1e18;
    for (iVar11 = 0x13; iVar11 != 0; iVar11 = iVar11 + -1) {
      *(undefined4 *)pcVar7 = *(undefined4 *)pcVar21;
      pcVar21 = pcVar21 + ((uint)bVar25 * -2 + 1) * 4;
      pcVar7 = pcVar7 + ((uint)bVar25 * -2 + 1) * 4;
    }
    pvVar15 = (void *)0x0;
    if ((char)reg_ecx[2] == '\0') {
      pvVar15 = (void *)reg_ecx[1];
    }
    pf_app_terror_ui_view_draw((void *)*reg_ecx,acStack_1e18,10,iVar5 + 8 + iVar12,local_1f60,local_1f58,
                       pvVar15);
    iVar12 = 0xc;
    if (0 < *(int *)(local_1f6c + 0x3a8)) {
      iVar12 = *(int *)(local_1f6c + 0x3a8) + 2;
    }
    local_1ef0 = 2;
    local_1eec = 0;
    local_1ef4 = reg_ecx;
    pf_app_terror_ui_button(local_1ea8,str_10010d4b,recovered_1000f0f0,&local_1ef4);
    pcVar21 = local_1ea8;
    pcVar7 = acStack_1e18;
    for (iVar11 = 0x13; iVar11 != 0; iVar11 = iVar11 + -1) {
      *(undefined4 *)pcVar7 = *(undefined4 *)pcVar21;
      pcVar21 = pcVar21 + ((uint)bVar25 * -2 + 1) * 4;
      pcVar7 = pcVar7 + ((uint)bVar25 * -2 + 1) * 4;
    }
    pvVar15 = (void *)0x0;
    if ((char)reg_ecx[2] == '\0') {
      pvVar15 = (void *)reg_ecx[1];
    }
    pf_app_terror_ui_view_draw((void *)*reg_ecx,acStack_1e18,10,iVar12 + 0xe + iVar5 + local_1f58,local_1f60
                       ,local_1f58,pvVar15);
    local_1f6c = *reg_ecx;
    if (local_1f6c != 0) goto LAB_1000d023;
    iVar11 = 0xc;
    local_1f60 = 0x220;
    piVar19 = (int *)0xd8;
    local_1f64 = 0x1c;
    local_1f6c = 0;
    iVar12 = 0x24;
  }
  else {
    uVar4 = *(uint *)(local_1f6c + 4);
    if (uVar4 == 0) {
      local_1f58 = 0x1c;
      if (0 < *(int *)(local_1f6c + 0x3a8)) {
        local_1f58 = *(int *)(local_1f6c + 0x3a8) + 0x12;
      }
      local_1f60 = 0xd8;
LAB_1000c850:
      iVar12 = 400;
      if (*(int *)(local_1f6c + 8) != 0) {
        iVar12 = *(int *)(local_1f6c + 8);
      }
      goto LAB_1000c861;
    }
    local_1f60 = 0xd8;
    if (uVar4 < 700) {
      local_1f60 = 0xa4;
    }
    if (*(int *)(local_1f6c + 0x3a8) < 1) {
      local_1f58 = 0x1c;
      if (0x207 < (int)uVar4) goto LAB_1000c850;
    }
    else if (0x207 < (int)uVar4) {
      local_1f58 = *(int *)(local_1f6c + 0x3a8) + 0x12;
      goto LAB_1000c850;
    }
LAB_1000d023:
    uVar4 = *(uint *)(local_1f6c + 4);
    piVar16 = (int *)0xa4;
    if (699 < uVar4) {
      piVar16 = (int *)0xd8;
    }
    piVar19 = (int *)0x0;
    if (0x207 < (int)uVar4) {
      piVar19 = piVar16;
    }
    bVar24 = uVar4 == 0;
    if (bVar24) {
      piVar19 = (int *)0xd8;
    }
    uVar14 = 0x2f8;
    if (!bVar24) {
      uVar14 = uVar4;
    }
    local_1f60 = uVar14 - (int)piVar19;
    iVar10 = *(int *)(local_1f6c + 0x3a8);
    local_1f64 = 0x1c;
    if (0 < iVar10) {
      local_1f64 = iVar10 + 0x12;
    }
    iVar11 = 0xc;
    if (0 < iVar10) {
      iVar11 = iVar10 + 2;
    }
    iVar12 = 0x24;
    if (!bVar24 && (int)uVar4 < 0x208) {
      iVar12 = 0x4c;
      if (0 < iVar10) {
        iVar12 = iVar10 + 0x42;
      }
    }
  }
  iVar12 = iVar12 + iVar11 * 2;
  uVar4 = thunk_terror_ui_colour(0);
  pf_app_terror_ui_rectangle(local_1ea8,uVar4);
  pcVar21 = local_1ea8;
  pcVar7 = acStack_1e18;
  for (iVar11 = 0x13; iVar11 != 0; iVar11 = iVar11 + -1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar21;
    pcVar21 = pcVar21 + ((uint)bVar25 * -2 + 1) * 4;
    pcVar7 = pcVar7 + ((uint)bVar25 * -2 + 1) * 4;
  }
  if ((0 < local_1f60) && (0 < iVar12)) {
    pvVar15 = (void *)0x0;
    if ((char)reg_ecx[2] == '\0') {
      pvVar15 = (void *)reg_ecx[1];
    }
    pf_app_terror_ui_view_draw((void *)*reg_ecx,acStack_1e18,(int)piVar19,0,local_1f60,iVar12,pvVar15);
  }
  pcVar21 = *(char **)(local_1f6c + 0x3dd4);
  if (pcVar21 == (char *)0x0) {
    iVar11 = *(int *)(local_1f6c + 0x5b8) * 0x21;
    pcVar21 = str_10010e5c;
    if (*(char *)(local_1f6c + 0x91c + iVar11) != '\0') {
      pcVar21 = (char *)(local_1f6c + 0x91c + iVar11);
    }
    pcVar7 = (char *)((uintptr_t)pf_module_state + 0xfbeU);
  }
  else {
    pcVar7 = (char *)((uintptr_t)pf_module_state + 0xed3U);
  }
  thunk_snprintf(local_1e58,0x38,pcVar7,(uint)pcVar21);
  iVar10 = (uint)(0x1df < local_1f60) * 0x10;
  iVar5 = iVar10 + 0x34;
  iVar11 = 0xc;
  if (0 < *(int *)(local_1f6c + 0x3a8)) {
    iVar11 = *(int *)(local_1f6c + 0x3a8) + 2;
  }
  recovered_1000ed70(0xc,local_1f60 + iVar5 * -3 + -0x2c,iVar11,local_1e58,1);
  iVar6 = iVar5 * -3 + -0x1c;
  iVar11 = *(int *)(local_1f6c + 4);
  if (iVar11 == 0) {
    iVar11 = 0x2f8;
  }
  local_1ef0 = 5;
  local_1eec = 0;
  local_1ef4 = reg_ecx;
  pf_app_terror_ui_button(local_1ea8,str_10010ebe,recovered_1000f0f0,&local_1ef4);
  pcVar21 = local_1ea8;
  pcVar7 = acStack_1e18;
  for (iVar13 = 0x13; iVar13 != 0; iVar13 = iVar13 + -1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar21;
    pcVar21 = pcVar21 + ((uint)bVar25 * -2 + 1) * 4;
    pcVar7 = pcVar7 + ((uint)bVar25 * -2 + 1) * 4;
  }
  if (0 < local_1f64) {
    pvVar15 = (void *)0x0;
    if ((char)reg_ecx[2] == '\0') {
      pvVar15 = (void *)reg_ecx[1];
    }
    pf_app_terror_ui_view_draw((void *)*reg_ecx,acStack_1e18,iVar11 + iVar6,8,iVar5,local_1f64,pvVar15);
  }
  iVar10 = iVar10 + 0x3c;
  iVar11 = 0x2f8;
  if (*(int *)(local_1f6c + 4) != 0) {
    iVar11 = *(int *)(local_1f6c + 4);
  }
  local_1ef0 = 6;
  local_1eec = 0;
  local_1ef4 = reg_ecx;
  pf_app_terror_ui_button(local_1ea8,str_10010ec4,recovered_1000f0f0,&local_1ef4);
  pcVar21 = local_1ea8;
  pcVar7 = acStack_1e18;
  for (iVar13 = 0x13; iVar13 != 0; iVar13 = iVar13 + -1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar21;
    pcVar21 = pcVar21 + ((uint)bVar25 * -2 + 1) * 4;
    pcVar7 = pcVar7 + ((uint)bVar25 * -2 + 1) * 4;
  }
  if (0 < local_1f64) {
    pvVar15 = (void *)0x0;
    if ((char)reg_ecx[2] == '\0') {
      pvVar15 = (void *)reg_ecx[1];
    }
    pf_app_terror_ui_view_draw((void *)*reg_ecx,acStack_1e18,iVar11 + iVar6 + iVar10,8,iVar5,local_1f64,
                       pvVar15);
  }
  iVar11 = 0x2f8;
  if (*(int *)(local_1f6c + 4) != 0) {
    iVar11 = *(int *)(local_1f6c + 4);
  }
  local_1ef0 = 7;
  local_1eec = 0;
  local_1ef4 = reg_ecx;
  pf_app_terror_ui_button(local_1ea8,str_10010ecb,recovered_1000f0f0,&local_1ef4);
  pcVar21 = local_1ea8;
  pcVar7 = acStack_1e18;
  for (iVar13 = 0x13; iVar13 != 0; iVar13 = iVar13 + -1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar21;
    pcVar21 = pcVar21 + ((uint)bVar25 * -2 + 1) * 4;
    pcVar7 = pcVar7 + ((uint)bVar25 * -2 + 1) * 4;
  }
  if (0 < local_1f64) {
    pvVar15 = (void *)0x0;
    if ((char)reg_ecx[2] == '\0') {
      pvVar15 = (void *)reg_ecx[1];
    }
    pf_app_terror_ui_view_draw((void *)*reg_ecx,acStack_1e18,iVar6 + iVar10 * 2 + iVar11,8,iVar5,local_1f64,
                       pvVar15);
  }
  pcVar21 = (char *)(local_1f6c + 0x418);
  if (*(uint *)(local_1f6c + 0x389c) == 0) {
    pcVar7 = str_10010ee1;
    if (*pcVar21 != '\0') {
      pcVar7 = pcVar21;
    }
    thunk_snprintf(acStack_1e18,0xa0,&DAT_1001032f,pcVar7);
  }
  else {
    thunk_snprintf(acStack_1e18,0xa0,str_10010ed3,*(uint *)(local_1f6c + 0x389c),
                       pcVar21);
  }
  pvVar15 = (void *)(local_1f64 + 0xe);
  piVar16 = (int *)0xc;
  if (0 < *(int *)(local_1f6c + 0x3a8)) {
    piVar16 = (int *)(*(int *)(local_1f6c + 0x3a8) + 2);
  }
  pcVar21 = (char *)(local_1f60 + -0x1c);
  uVar26 = ((uintptr_t)pf_module_state - 0x29eaU);
  recovered_1000ed70(pvVar15,(int)pcVar21,(int)piVar16,acStack_1e18,0x31);
  if (piVar19 == (int *)0x0) {
    bVar24 = 0 < local_1f64;
    iVar11 = 0x3c;
    if (0 < *(int *)(local_1f6c + 0x3a8)) {
      iVar11 = *(int *)(local_1f6c + 0x3a8) * 2 + 0x28;
    }
    iVar10 = local_1f60 + -0x2f;
    if (-1 < local_1f60 + -0x32) {
      iVar10 = local_1f60 + -0x32;
    }
    iVar10 = iVar10 >> 2;
    local_1f2c = 0;
    local_1f28 = 0;
    piStack_1f30 = reg_ecx;
    pf_app_terror_ui_button(&local_1ef4,str_10010f14,recovered_1000f0f0,&piStack_1f30);
    pcVar7 = local_1ea8;
    bVar3 = 0x35 < local_1f60;
    ppiVar20 = &local_1ef4;
    pcVar23 = pcVar7;
    for (iVar5 = 0x13; iVar5 != 0; iVar5 = iVar5 + -1) {
      *(int **)pcVar23 = *ppiVar20;
      ppiVar20 = ppiVar20 + (uint)bVar25 * -2 + 1;
      pcVar23 = pcVar23 + ((uint)bVar25 * -2 + 1) * 4;
    }
    if (bVar3 && bVar24) {
      pvVar15 = (void *)*reg_ecx;
      pvVar17 = (void *)0x0;
      if ((char)reg_ecx[2] == '\0') {
        pvVar17 = (void *)reg_ecx[1];
      }
      piVar16 = (int *)0xa;
      uVar26 = ((uintptr_t)pf_module_state - 0x2922U);
      pf_app_terror_ui_view_draw(pvVar15,pcVar7,10,iVar11,iVar10,local_1f64,pvVar17);
      pcVar21 = pcVar7;
    }
    local_1f2c = 0x10;
    local_1f28 = 0;
    piStack_1f30 = reg_ecx;
    pf_app_terror_ui_button(&local_1ef4,str_10010f1a,recovered_1000f0f0,&piStack_1f30);
    pcVar7 = local_1ea8;
    ppiVar20 = &local_1ef4;
    pcVar23 = pcVar7;
    for (iVar5 = 0x13; iVar5 != 0; iVar5 = iVar5 + -1) {
      *(int **)pcVar23 = *ppiVar20;
      ppiVar20 = ppiVar20 + (uint)bVar25 * -2 + 1;
      pcVar23 = pcVar23 + ((uint)bVar25 * -2 + 1) * 4;
    }
    if (bVar3 && bVar24) {
      piVar16 = (int *)(iVar10 + 0x14);
      pvVar15 = (void *)*reg_ecx;
      pvVar17 = (void *)0x0;
      if ((char)reg_ecx[2] == '\0') {
        pvVar17 = (void *)reg_ecx[1];
      }
      uVar26 = ((uintptr_t)pf_module_state - 0x289bU);
      pf_app_terror_ui_view_draw(pvVar15,pcVar7,(int)piVar16,iVar11,iVar10,local_1f64,pvVar17);
      pcVar21 = pcVar7;
    }
    local_1f2c = 3;
    local_1f28 = 0;
    piStack_1f30 = reg_ecx;
    pf_app_terror_ui_button(&local_1ef4,str_10010f23,recovered_1000f0f0,&piStack_1f30);
    pcVar7 = local_1ea8;
    ppiVar20 = &local_1ef4;
    pcVar23 = pcVar7;
    for (iVar5 = 0x13; iVar5 != 0; iVar5 = iVar5 + -1) {
      *(int **)pcVar23 = *ppiVar20;
      ppiVar20 = ppiVar20 + (uint)bVar25 * -2 + 1;
      pcVar23 = pcVar23 + ((uint)bVar25 * -2 + 1) * 4;
    }
    if (bVar3 && bVar24) {
      piVar16 = (int *)(iVar10 * 2 + 0x1e);
      pvVar15 = (void *)*reg_ecx;
      pvVar17 = (void *)0x0;
      if ((char)reg_ecx[2] == '\0') {
        pvVar17 = (void *)reg_ecx[1];
      }
      uVar26 = ((uintptr_t)pf_module_state - 0x2813U);
      pf_app_terror_ui_view_draw(pvVar15,pcVar7,(int)piVar16,iVar11,iVar10,local_1f64,pvVar17);
      pcVar21 = pcVar7;
    }
    local_1f2c = 2;
    local_1f28 = 0;
    piStack_1f30 = reg_ecx;
    pf_app_terror_ui_button(&local_1ef4,str_10010f2a,recovered_1000f0f0,&piStack_1f30);
    pcVar7 = local_1ea8;
    ppiVar20 = &local_1ef4;
    pcVar23 = pcVar7;
    for (iVar5 = 0x13; iVar5 != 0; iVar5 = iVar5 + -1) {
      *(int **)pcVar23 = *ppiVar20;
      ppiVar20 = ppiVar20 + (uint)bVar25 * -2 + 1;
      pcVar23 = pcVar23 + ((uint)bVar25 * -2 + 1) * 4;
    }
    if (bVar3 && bVar24) {
      piVar16 = (int *)(iVar10 * 3 + 0x28);
      pvVar15 = (void *)*reg_ecx;
      pvVar17 = (void *)0x0;
      if ((char)reg_ecx[2] == '\0') {
        pvVar17 = (void *)reg_ecx[1];
      }
      uVar26 = ((uintptr_t)pf_module_state - 0x278bU);
      pf_app_terror_ui_view_draw(pvVar15,pcVar7,(int)piVar16,iVar11,iVar10,local_1f64,pvVar17);
      pcVar21 = pcVar7;
    }
  }
  uVar4 = thunk_terror_ui_colour(0x15);
  pf_app_terror_ui_rectangle(&local_1ef4,uVar4);
  ppiVar20 = &local_1ef4;
  pcVar7 = local_1ea8;
  for (iVar11 = 0x13; iVar11 != 0; iVar11 = iVar11 + -1) {
    *(int **)pcVar7 = *ppiVar20;
    ppiVar20 = ppiVar20 + (uint)bVar25 * -2 + 1;
    pcVar7 = pcVar7 + ((uint)bVar25 * -2 + 1) * 4;
  }
  if (0 < local_1f60) {
    pvVar15 = (void *)*reg_ecx;
    pvVar17 = (void *)0x0;
    if ((char)reg_ecx[2] == '\0') {
      pvVar17 = (void *)reg_ecx[1];
    }
    uVar26 = ((uintptr_t)pf_module_state - 0x2724U);
    pcVar21 = local_1ea8;
    pf_app_terror_ui_view_draw(pvVar15,local_1ea8,(int)piVar19,iVar12 + -1,local_1f60,1,pvVar17);
    piVar16 = piVar19;
  }
  iVar12 = *reg_ecx;
  recovered_10009a90((int *)&piStack_1f30,iVar12);
  local_1f3c = local_1f24;
  iVar10 = local_1f28;
  iVar11 = local_1f2c;
  local_1f1c = piStack_1f30;
  uVar4 = thunk_terror_ui_colour(0);
  pf_app_terror_ui_rectangle(local_1ea8,uVar4);
  pcVar7 = local_1ea8;
  pcVar23 = acStack_1e18;
  for (iVar5 = 0x13; iVar5 != 0; iVar5 = iVar5 + -1) {
    *(undefined4 *)pcVar23 = *(undefined4 *)pcVar7;
    pcVar7 = pcVar7 + ((uint)bVar25 * -2 + 1) * 4;
    pcVar23 = pcVar23 + ((uint)bVar25 * -2 + 1) * 4;
  }
  local_1f18 = iVar10;
  if (0 < local_1f3c && 0 < iVar10) {
    pvVar15 = (void *)*reg_ecx;
    pvVar17 = (void *)0x0;
    if ((char)reg_ecx[2] == '\0') {
      pvVar17 = (void *)reg_ecx[1];
    }
    pcVar21 = acStack_1e18;
    uVar26 = ((uintptr_t)pf_module_state - 0x2683U);
    piVar16 = local_1f1c;
    pf_app_terror_ui_view_draw(pvVar15,pcVar21,(int)local_1f1c,iVar11,iVar10,local_1f3c,pvVar17);
  }
  if (iVar12 == 0) {
    uVar4 = (iVar10 + -0x40) / 6;
LAB_1000d85c:
    local_1f20 = 10;
  }
  else {
    local_1f20 = *(int *)(iVar12 + 0x3a8);
    iVar5 = 6;
    if (0 < *(int *)(iVar12 + 0x3a4)) {
      iVar5 = *(int *)(iVar12 + 0x3a4);
    }
    uVar4 = (iVar10 + -0x40) / iVar5;
    if (local_1f20 < 1) goto LAB_1000d85c;
  }
  if (0 < (int)uVar4) {
    piVar19 = (int *)(local_1f20 + 2);
    iVar10 = *(int *)(iVar12 + 0x3d58);
    if (iVar10 != 0) {
      local_1f3c = iVar11 + -8 + local_1f3c;
      uVar14 = 0xef;
      if (uVar4 < 0xef) {
        uVar14 = uVar4;
      }
      local_1f04 = local_1f1c + 1;
      iVar5 = iVar10 * 0x10c + -0xf0;
      local_1f20 = local_1f20 + -0xc;
      pcVar7 = (char *)(local_1f18 + -0x36);
      uVar4 = 0;
      local_1f08 = 0;
      do {
        iVar6 = *(int *)(iVar12 + 0x3c48);
        if (*(int *)(iVar6 + -0x10c + iVar10 * 0x10c) == *(int *)(iVar12 + 0x568)) {
          iVar13 = iVar10 * 0x10c + iVar6;
          if (*(int *)(iVar12 + 0x3dd4) == 0) {
            if ((*(int *)(iVar13 + -0xfc) == *(int *)(iVar12 + 0x5b8)) &&
               (*(int *)(iVar13 + -0x104) == -1)) goto LAB_1000d94f;
          }
          else {
            iVar2 = *(int *)(iVar13 + -0x104);
            if (*(char *)(iVar13 + -0xf8) != '\x01') {
              if (iVar2 == -1) goto LAB_1000d8e4;
              iVar2 = *(int *)(iVar13 + -0x108);
            }
            if (iVar2 == *(int *)(iVar12 + 0x3dd4)) {
LAB_1000d94f:
              uVar8 = uVar4 + 1;
              bVar24 = *(uint *)(iVar12 + 0x5c0) <= uVar4;
              uVar4 = uVar8;
              if (bVar24) {
                cVar9 = *(char *)(iVar13 + -0xf0);
                local_1f00 = uVar8;
                local_1efc = iVar10;
                if (cVar9 == '\0') {
                  acStack_1e18[0] = '\0';
                  uVar4 = 1;
                }
                else {
                  pvVar17 = (void *)(iVar13 + -0xf0);
                  iVar10 = 0;
                  src = pvVar17;
                  uVar8 = 0;
                  do {
                    uVar18 = 0;
                    uVar4 = 0;
                    cVar1 = cVar9;
                    while( true ) {
                      if ((cVar1 == '\0') || (cVar1 == '\n')) goto LAB_1000d9d4;
                      if (uVar14 == uVar18) break;
                      if (cVar1 == ' ') {
                        uVar4 = uVar18;
                      }
                      cVar1 = *(char *)((int)src + uVar18 + 1);
                      uVar18 = uVar18 + 1;
                    }
                    uVar18 = uVar14;
LAB_1000d9d4:
                    if (uVar4 == 0) {
                      uVar4 = uVar18;
                    }
                    if (cVar1 == '\n') {
                      uVar4 = uVar18;
                    }
                    if (cVar1 == '\0') {
                      uVar4 = uVar18;
                    }
                    for (; uVar4 != 0; uVar4 = uVar4 - 1) {
                      if (!SBORROW1('\0',*(byte *)((int)src + uVar4) & 0xc0)) goto LAB_1000da30;
                    }
                    uVar4 = 0;
                    if (cVar9 != '\n') {
                      uVar4 = 1;
                      do {
                        if (!SBORROW1('\0',*(byte *)((int)src + uVar4) & 0xc0)) goto LAB_1000da30;
                        uVar4 = uVar4 + 1;
                      } while (uVar4 != 0xef);
                      uVar4 = 0xef;
                    }
LAB_1000da30:
                    thunk_memcpy(acStack_1e18 + uVar8 * 0xf0,src,uVar4);
                    (acStack_1e18 + uVar8 * 0xf0)[uVar4] = '\0';
                    iVar2 = uVar4 + iVar10;
                    if (*(char *)((int)pvVar17 + iVar2) == '\n') {
                      cVar9 = *(char *)(iVar13 + -0xef + iVar2);
                      iVar10 = iVar2 + 1;
                    }
                    else {
                      iVar10 = (uVar4 - 1) + iVar10;
                      do {
                        cVar9 = *(char *)(iVar6 + iVar5 + 1 + iVar10);
                        iVar10 = iVar10 + 1;
                      } while (cVar9 == ' ');
                    }
                    uVar4 = uVar8 + 1;
                    if (cVar9 == '\0') break;
                    src = (void *)((int)pvVar17 + iVar10);
                    bVar24 = uVar8 < 0x1f;
                    uVar8 = uVar4;
                  } while (bVar24);
                }
                iVar10 = ((local_1f3c - iVar11) + -0xe) / (int)piVar19;
                if (iVar10 < 2) break;
                uVar8 = iVar10 - 1;
                if (uVar4 < uVar8) {
                  uVar8 = uVar4;
                }
                if (*(char *)(iVar13 + -0xf8) == '\x01') {
                  if (*(char *)(iVar13 + -0xf6) == '\0') {
                    arg3 = &DAT_1001016f;
                    if (*(char *)(iVar13 + -0xf7) != '\0') {
                      arg3 = str_10010f4a;
                    }
                  }
                  else {
                    arg3 = str_10010f39;
                  }
                  thunk_snprintf(local_1e58,0x40,(char *)((uintptr_t)pf_module_state + 0x109aU),arg3);
                  pcVar23 = (char *)((uintptr_t)pf_module_state + 0x10bbU);
                }
                else {
                  thunk_snprintf(local_1e58,0x40,str_10010e3b,*(uint *)(iVar13 + -0x108));
                  arg3 = (char *)(uint)*(byte *)(iVar13 + -0x108);
                  pcVar23 = (char *)((uintptr_t)pf_module_state + 0x10bdU);
                }
                thunk_snprintf((char *)&local_1f14,4,pcVar23,(uint)arg3);
                uVar18 = ((uintptr_t)pf_module_state - 0x22b4U);
                pf_app_terror_ui_text(local_1ea8,(char *)&local_1f14);
                pcVar23 = local_1ea8;
                puVar22 = auStackY_21d0 + 0x81;
                for (iVar10 = 0x13; iVar10 != 0; iVar10 = iVar10 + -1) {
                  *puVar22 = *(undefined4 *)pcVar23;
                  pcVar23 = pcVar23 + ((uint)bVar25 * -2 + 1) * 4;
                  puVar22 = puVar22 + (uint)bVar25 * -2 + 1;
                }
                view.words[0xe] = uVar26;
                view.words[0] = PF_PART4(in_stack_ffffe034, 0);
                view.words[1] = PF_PART4(in_stack_ffffe034, 4);
                view.words[2] = PF_PART4(in_stack_ffffe034, 8);
                view.words[3] = PF_PART4(in_stack_ffffe034, 12);
                view.words[4] = PF_PART4(in_stack_ffffe034, 16);
                view.words[5] = PF_PART4(in_stack_ffffe034, 20);
                view.words[6] = PF_PART4(in_stack_ffffe034, 24);
                view.words[7] = PF_PART4(in_stack_ffffe034, 28);
                view.words[8] = PF_PART4(in_stack_ffffe034, 32);
                view.words[9] = PF_PART4(in_stack_ffffe034, 36);
                view.words[10] = PF_PART4(in_stack_ffffe034, 40);
                view.words[0xb] = PF_PART4(in_stack_ffffe034, 44);
                view.words[0xc] = PF_PART4(in_stack_ffffe034, 48);
                view.words[0xd] = PF_PART4(in_stack_ffffe034, 52);
                view.words[0xf] = (uint)pvVar15;
                view.words[0x10] = (uint)pcVar21;
                view.words[0x11] = (uint)piVar16;
                view.words[0x12] = uVar18;
                pf_app_terror_ui_view_alignment(&local_1ef4,view,1);
                uVar27 = ((uintptr_t)pf_module_state - 0x2285U);
                uVar18 = thunk_terror_ui_colour(4);
                ppiVar20 = &local_1ef4;
                puVar22 = auStackY_21d0 + 0x81;
                for (iVar10 = 0x13; iVar10 != 0; iVar10 = iVar10 + -1) {
                  *puVar22 = *ppiVar20;
                  ppiVar20 = ppiVar20 + (uint)bVar25 * -2 + 1;
                  puVar22 = puVar22 + (uint)bVar25 * -2 + 1;
                }
                view_00.words[0xe] = uVar26;
                view_00.words[0] = PF_PART4(in_stack_ffffe034, 0);
                view_00.words[1] = PF_PART4(in_stack_ffffe034, 4);
                view_00.words[2] = PF_PART4(in_stack_ffffe034, 8);
                view_00.words[3] = PF_PART4(in_stack_ffffe034, 12);
                view_00.words[4] = PF_PART4(in_stack_ffffe034, 16);
                view_00.words[5] = PF_PART4(in_stack_ffffe034, 20);
                view_00.words[6] = PF_PART4(in_stack_ffffe034, 24);
                view_00.words[7] = PF_PART4(in_stack_ffffe034, 28);
                view_00.words[8] = PF_PART4(in_stack_ffffe034, 32);
                view_00.words[9] = PF_PART4(in_stack_ffffe034, 36);
                view_00.words[10] = PF_PART4(in_stack_ffffe034, 40);
                view_00.words[0xb] = PF_PART4(in_stack_ffffe034, 44);
                view_00.words[0xc] = PF_PART4(in_stack_ffffe034, 48);
                view_00.words[0xd] = PF_PART4(in_stack_ffffe034, 52);
                view_00.words[0xf] = (uint)pvVar15;
                view_00.words[0x10] = (uint)pcVar21;
                view_00.words[0x11] = (uint)piVar16;
                view_00.words[0x12] = uVar27;
                pf_app_terror_ui_view_foreground(local_1ea8,view_00,uVar18);
                pcVar23 = local_1ea8;
                ppiVar20 = &local_1ef4;
                for (iVar10 = 0x13; iVar10 != 0; iVar10 = iVar10 + -1) {
                  *ppiVar20 = *(int **)pcVar23;
                  pcVar23 = pcVar23 + ((uint)bVar25 * -2 + 1) * 4;
                  ppiVar20 = ppiVar20 + (uint)bVar25 * -2 + 1;
                }
                uVar27 = ((uintptr_t)pf_module_state - 0x224cU);
                uVar18 = thunk_terror_ui_colour(0x2d);
                ppiVar20 = &local_1ef4;
                puVar22 = auStackY_21d0 + 0x81;
                for (iVar10 = 0x13; iVar10 != 0; iVar10 = iVar10 + -1) {
                  *puVar22 = *ppiVar20;
                  ppiVar20 = ppiVar20 + (uint)bVar25 * -2 + 1;
                  puVar22 = puVar22 + (uint)bVar25 * -2 + 1;
                }
                view_01.words[0xe] = uVar26;
                view_01.words[0] = PF_PART4(in_stack_ffffe034, 0);
                view_01.words[1] = PF_PART4(in_stack_ffffe034, 4);
                view_01.words[2] = PF_PART4(in_stack_ffffe034, 8);
                view_01.words[3] = PF_PART4(in_stack_ffffe034, 12);
                view_01.words[4] = PF_PART4(in_stack_ffffe034, 16);
                view_01.words[5] = PF_PART4(in_stack_ffffe034, 20);
                view_01.words[6] = PF_PART4(in_stack_ffffe034, 24);
                view_01.words[7] = PF_PART4(in_stack_ffffe034, 28);
                view_01.words[8] = PF_PART4(in_stack_ffffe034, 32);
                view_01.words[9] = PF_PART4(in_stack_ffffe034, 36);
                view_01.words[10] = PF_PART4(in_stack_ffffe034, 40);
                view_01.words[0xb] = PF_PART4(in_stack_ffffe034, 44);
                view_01.words[0xc] = PF_PART4(in_stack_ffffe034, 48);
                view_01.words[0xd] = PF_PART4(in_stack_ffffe034, 52);
                view_01.words[0xf] = (uint)pvVar15;
                view_01.words[0x10] = (uint)pcVar21;
                view_01.words[0x11] = (uint)piVar16;
                view_01.words[0x12] = uVar27;
                pf_app_terror_ui_view_background(local_1ea8,view_01,uVar18);
                pcVar21 = local_1ea8;
                ppiVar20 = &local_1ef4;
                for (iVar10 = 0x13; iVar10 != 0; iVar10 = iVar10 + -1) {
                  *ppiVar20 = *(int **)pcVar21;
                  pcVar21 = pcVar21 + ((uint)bVar25 * -2 + 1) * 4;
                  ppiVar20 = ppiVar20 + (uint)bVar25 * -2 + 1;
                }
                ppiVar20 = &local_1ef4;
                pcVar21 = local_1ea8;
                for (iVar10 = 0x13; iVar10 != 0; iVar10 = iVar10 + -1) {
                  *(int **)pcVar21 = *ppiVar20;
                  ppiVar20 = ppiVar20 + (uint)bVar25 * -2 + 1;
                  pcVar21 = pcVar21 + ((uint)bVar25 * -2 + 1) * 4;
                }
                pvVar15 = (void *)0x0;
                if ((char)reg_ecx[2] == '\0') {
                  pvVar15 = (void *)reg_ecx[1];
                }
                iVar10 = local_1f3c + -0xe + ~uVar8 * (int)piVar19;
                pf_app_terror_ui_view_draw((void *)*reg_ecx,local_1ea8,(int)local_1f04,iVar10,0x24,0x24,
                                   pvVar15);
                uVar26 = 0x12;
                if ((*(char *)(iVar13 + -0xf6) == '\0') &&
                   (uVar26 = 4, *(char *)(iVar13 + -0xf7) != '\0')) {
                  uVar26 = 0x31;
                }
                recovered_1000ed70(iVar10,(int)pcVar7,(int)piVar19,local_1e58,uVar26);
                iVar6 = uVar8 + (uVar8 == 0);
                pvVar17 = (void *)(local_1f3c + local_1f20 + ~uVar8 * (int)piVar19);
                pcVar23 = acStack_1e18 + uVar4 * 0xf0 + uVar8 * -0xf0;
                do {
                  uVar26 = ((uintptr_t)pf_module_state - 0x212dU);
                  pvVar15 = pvVar17;
                  pcVar21 = pcVar7;
                  piVar16 = piVar19;
                  recovered_1000ed70(pvVar17,(int)pcVar7,(int)piVar19,pcVar23,1);
                  pcVar23 = pcVar23 + 0xf0;
                  pvVar17 = (void *)((int)pvVar17 + (int)piVar19);
                  iVar6 = iVar6 + -1;
                } while (iVar6 != 0);
                local_1f3c = iVar10 + -8;
                local_1f08 = local_1f08 + 1;
                uVar4 = local_1f00;
                iVar10 = local_1efc;
              }
            }
          }
        }
LAB_1000d8e4:
        iVar5 = iVar5 + -0x10c;
        iVar10 = iVar10 + -1;
      } while (iVar10 != 0);
      if (local_1f08 != 0) goto LAB_1000de8e;
    }
    pcVar21 = *(char **)(iVar12 + 0x3dd4);
    if (pcVar21 == (char *)0x0) {
      iVar10 = *(int *)(iVar12 + 0x5b8) * 0x21;
      pcVar21 = str_10010e5c;
      if (*(char *)(iVar12 + 0x91c + iVar10) != '\0') {
        pcVar21 = (char *)(iVar12 + 0x91c + iVar10);
      }
      pcVar7 = (char *)((uintptr_t)pf_module_state + 0xfbeU);
    }
    else {
      pcVar7 = (char *)((uintptr_t)pf_module_state + 0xed3U);
    }
    thunk_snprintf(local_1ea8,0x38,pcVar7,(uint)pcVar21);
    thunk_snprintf(acStack_1e18,0x50,str_10010f5b,local_1ea8);
    iVar12 = local_1f18 + -0x20;
    recovered_1000ed70(iVar11 + 0x18,iVar12,(int)piVar19,acStack_1e18,1);
    recovered_1000ed70(iVar11 + 0x18 + (int)(uintptr_t)piVar19 * 2,iVar12,(int)piVar19,
                       str_10010f69,0x31);
  }
LAB_1000de8e:
  iVar12 = *reg_ecx;
  recovered_1000f6c0(&piStack_1f30,iVar12);
  pcVar21 = *(char **)(iVar12 + 0x3dd4);
  if (pcVar21 == (char *)0x0) {
    iVar11 = *(int *)(iVar12 + 0x5b8) * 0x21;
    pcVar21 = str_10010e5c;
    if (*(char *)(iVar12 + 0x91c + iVar11) != '\0') {
      pcVar21 = (char *)(iVar12 + 0x91c + iVar11);
    }
    pcVar7 = (char *)((uintptr_t)pf_module_state + 0xfbeU);
  }
  else {
    pcVar7 = (char *)((uintptr_t)pf_module_state + 0xed3U);
  }
  thunk_snprintf(local_1e58,0x38,pcVar7,(uint)pcVar21);
  thunk_snprintf(acStack_1e18,0x50,str_10010f85,local_1e58);
  iVar10 = local_1f28;
  iVar11 = local_1f2c;
  piVar19 = piStack_1f30;
  if ((*(uint *)(iVar12 + 0x38c) & 6) == 2) {
    bVar24 = *(int *)(iVar12 + 0x3d64) == 0;
  }
  else {
    bVar24 = false;
  }
  local_1f10 = 0xd;
  local_1f0c = 0;
  local_1f14 = reg_ecx;
  pf_app_terror_ui_text_field(&local_1ef4,*(char **)(iVar12 + 0x3ac),(ulong)acStack_1e18,bVar24,
                     recovered_1000f0f0,&local_1f14);
  ppiVar20 = &local_1ef4;
  pcVar21 = local_1ea8;
  for (iVar12 = 0x13; iVar12 != 0; iVar12 = iVar12 + -1) {
    *(int **)pcVar21 = *ppiVar20;
    ppiVar20 = ppiVar20 + (uint)bVar25 * -2 + 1;
    pcVar21 = pcVar21 + ((uint)bVar25 * -2 + 1) * 4;
  }
  if (0 < local_1f24 && 0 < iVar10) {
    pvVar15 = (void *)0x0;
    if ((char)reg_ecx[2] == '\0') {
      pvVar15 = (void *)reg_ecx[1];
    }
    pf_app_terror_ui_view_draw((void *)*reg_ecx,local_1ea8,(int)piVar19,iVar11,iVar10,local_1f24,pvVar15);
  }
  local_1f10 = 8;
  local_1f0c = 0;
  local_1f14 = reg_ecx;
  pf_app_terror_ui_button(&local_1ef4,(char *)((uintptr_t)pf_module_state + 0x10f7U),recovered_1000f0f0,&local_1f14);
  ppiVar20 = &local_1ef4;
  pcVar21 = local_1ea8;
  for (iVar12 = 0x13; iVar12 != 0; iVar12 = iVar12 + -1) {
    *(int **)pcVar21 = *ppiVar20;
    ppiVar20 = ppiVar20 + (uint)bVar25 * -2 + 1;
    pcVar21 = pcVar21 + ((uint)bVar25 * -2 + 1) * 4;
  }
  if (0 < local_1f24) {
    pvVar15 = (void *)0x0;
    if ((char)reg_ecx[2] == '\0') {
      pvVar15 = (void *)reg_ecx[1];
    }
    pf_app_terror_ui_view_draw((void *)*reg_ecx,local_1ea8,(int)piVar19 + iVar10 + 8,iVar11,0x58,local_1f24,
                       pvVar15);
  }
  reg_ecx[1] = local_1ef8;
  recovered_1000e0a0(reg_ecx);
  return;
}

#undef DAT_1001016f
#undef DAT_1001032f
#undef str_100100e6
#undef str_100105e8
#undef str_10010d4b
#undef str_10010e3b
#undef str_10010e41
#undef str_10010e4e
#undef str_10010e5c
#undef str_10010e64
#undef str_10010e72
#undef str_10010e82
#undef str_10010e92
#undef str_10010eab
#undef str_10010ebe
#undef str_10010ec4
#undef str_10010ecb
#undef str_10010ed3
#undef str_10010ee1
#undef str_10010f14
#undef str_10010f1a
#undef str_10010f23
#undef str_10010f2a
#undef str_10010f39
#undef str_10010f4a
#undef str_10010f5b
#undef str_10010f69
#undef str_10010f85
#undef auStackY_21d0
#undef piStack_1f30
#undef local_1f6c
#undef local_1f64
#undef local_1f60
#undef acStack_1e18
#undef local_1f58
#undef local_1f54
#undef local_1f4c
#undef local_1f40
#undef local_1f3c
#undef local_1f2c
#undef local_1f28
#undef local_1f24
#undef local_1f20
#undef local_1f1c
#undef local_1f18
#undef local_1f14
#undef local_1f10
#undef local_1f0c
#undef local_1f08
#undef local_1f04
#undef local_1f00
#undef local_1efc
#undef local_1ef8
#undef local_1ef4
#undef local_1ef0
#undef local_1eec
#undef in_stack_ffffe034
#undef local_1ea8
#undef local_1e58

#undef str_10010d2f
#define str_10010d2f (*(char (*)[1])(((uintptr_t)pf_module_state + 0xe96U)))
#undef str_10010d4b
#define str_10010d4b (*(char (*)[1])(((uintptr_t)pf_module_state + 0xeb2U)))
#undef str_10010d74
#define str_10010d74 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xedbU)))
#undef str_10010d87
#define str_10010d87 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xeeeU)))
#undef str_10010d97
#define str_10010d97 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xefeU)))
#undef str_10010d9f
#define str_10010d9f (*(char (*)[1])(((uintptr_t)pf_module_state + 0xf06U)))
#undef str_10010db1
#define str_10010db1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xf18U)))
#undef str_10010dbd
#define str_10010dbd (*(char (*)[1])(((uintptr_t)pf_module_state + 0xf24U)))
#undef str_10010dca
#define str_10010dca (*(char (*)[1])(((uintptr_t)pf_module_state + 0xf31U)))
#undef str_10010de8
#define str_10010de8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xf4fU)))
#undef str_10010e15
#define str_10010e15 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xf7cU)))
#undef str_10010e27
#define str_10010e27 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xf8eU)))
#undef str_10010e34
#define str_10010e34 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xf9bU)))
#define local_160 (*(int *)(pf_stack_frame + 16))
#define local_144 (*(int *)(pf_stack_frame + 44))
#define local_12c (*(int * *)(pf_stack_frame + 68))
#define local_128 (*(int *)(pf_stack_frame + 72))
#define local_124 (*(uint *)(pf_stack_frame + 76))
#define local_120 (*(int *)(pf_stack_frame + 80))
#define local_11c (*(int *)(pf_stack_frame + 84))
#define iStack_108 (*(int *)(pf_stack_frame + 104))
#define local_118 (*(int *)(pf_stack_frame + 88))
#define bStack_104 (*(byte *)(pf_stack_frame + 108))
#define local_110 (*(int *)(pf_stack_frame + 96))
#define local_10c (*(int *)(pf_stack_frame + 100))
#define local_d0 (*(char * *)(pf_stack_frame + 160))
#define local_cc (*(char * *)(pf_stack_frame + 164))
#define uStack_b8 (*(undefined4 *)(pf_stack_frame + 184))
#define local_c8 (*(char * *)(pf_stack_frame + 168))
#define local_c4 (*(char * *)(pf_stack_frame + 172))
#define local_c0 (*(int * *)(pf_stack_frame + 176))
#define local_bc (*(undefined4 *)(pf_stack_frame + 180))
#define local_80 (*(int *)(pf_stack_frame + 240))
#define local_7c (*(int *)(pf_stack_frame + 244))
#define local_78 (*(int *)(pf_stack_frame + 248))
#define local_74 (*(int *)(pf_stack_frame + 252))
#define local_64 (*(byte *)(pf_stack_frame + 268))
#define local_60 (*(int (*)[24])(pf_stack_frame + 272))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000e0a0
 */

void recovered_1000e0a0(int *reg_ecx)

{
  unsigned char pf_stack_frame[400] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  int iVar3;
  uint arg3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  char *capacity;
  int iVar7;
  int iVar8;
  void *pvVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  uint uVar13;
  int *piVar14;
  bool bVar15;
  byte bVar16;

  bVar16 = 0;
  iVar8 = *reg_ecx;
  if (*(int *)(iVar8 + 0x3d64) != 0) {
    recovered_1000eb20(&local_80,iVar8);
    uVar2 = thunk_terror_ui_colour(0x2d);
    pf_app_terror_ui_rectangle(local_60,uVar2);
    piVar12 = local_60;
    piVar14 = &local_120;
    for (iVar5 = 0x13; iVar5 != 0; iVar5 = iVar5 + -1) {
      *piVar14 = *piVar12;
      piVar12 = piVar12 + (uint)bVar16 * -2 + 1;
      piVar14 = piVar14 + (uint)bVar16 * -2 + 1;
    }
    if (0 < local_74 && 0 < local_78) {
      pvVar9 = (void *)0x0;
      if ((char)reg_ecx[2] == '\0') {
        pvVar9 = (void *)reg_ecx[1];
      }
      pf_app_terror_ui_view_draw((void *)*reg_ecx,&local_120,local_80,local_7c,local_78,local_74,pvVar9);
    }
    iVar5 = 0xc;
    if (0 < *(int *)(iVar8 + 0x3a8)) {
      iVar5 = *(int *)(iVar8 + 0x3a8) + 2;
    }
    pcVar4 = str_10010d4b;
    if (*(int *)(iVar8 + 0x3d64) == 2) {
      pcVar4 = str_10010d2f;
    }
    recovered_1000ed70(local_7c + 0x10,local_78 + -0x24,iVar5,pcVar4,1);
    if (*(int *)(iVar8 + 0x3d64) == 2) {
      recovered_1000eb20(&local_120,iVar8);
      iVar10 = local_110;
      iVar7 = local_118;
      iVar5 = local_120;
      iVar3 = iStack_108 + local_11c;
      local_bc = 0xd;
      uStack_b8 = 0;
      local_c0 = reg_ecx;
      pf_app_terror_ui_text_field(local_60,(char *)(iVar8 + 0x3d71),((uintptr_t)pf_module_state + 0xec3U),'\x01',recovered_1000f0f0,
                         &local_c0);
      piVar12 = local_60;
      piVar14 = &local_120;
      for (iVar6 = 0x13; iVar6 != 0; iVar6 = iVar6 + -1) {
        *piVar14 = *piVar12;
        piVar12 = piVar12 + (uint)bVar16 * -2 + 1;
        piVar14 = piVar14 + (uint)bVar16 * -2 + 1;
      }
      if (0 < iVar10 && 0x24 < iVar7) {
        pvVar9 = (void *)0x0;
        if ((char)reg_ecx[2] == '\0') {
          pvVar9 = (void *)reg_ecx[1];
        }
        pf_app_terror_ui_view_draw((void *)*reg_ecx,&local_120,iVar5 + 0x12,iVar3,iVar7 + -0x24,iVar10,
                           pvVar9);
      }
      uVar2 = 2 - local_64;
      uVar13 = 0;
      do {
        iVar5 = (*(int *)(iVar8 + 0x3dd8) << ((local_64 ^ 1) & 0x1f)) + uVar13;
        uVar13 = uVar13 + 1;
        arg3 = recovered_1000ee50(iVar8,iVar5);
        if (arg3 != 0) {
          thunk_snprintf((char *)&local_c0,0x30,(char *)((uintptr_t)pf_module_state + 0xed3U),arg3);
          recovered_1000eb20(&local_120,iVar8);
          iVar7 = local_110;
          iVar5 = local_120;
          if ((uVar13 & 0x7ffffffe) == 4) {
            iVar10 = (local_118 + -0x2c) - (local_118 + -0x2c >> 0x1f) >> 1;
            uVar1 = 4 - bStack_104;
          }
          else {
            iVar10 = local_118 + -0x24;
            uVar1 = uVar13;
          }
          local_144 = local_10c * uVar1;
          iVar6 = iStack_108 + local_11c;
          local_128 = 4;
          local_12c = reg_ecx;
          local_124 = arg3;
          pf_app_terror_ui_button(local_60,(char *)&local_c0,recovered_1000f0f0,&local_12c);
          piVar12 = local_60;
          piVar14 = &local_120;
          for (iVar3 = 0x13; iVar3 != 0; iVar3 = iVar3 + -1) {
            *piVar14 = *piVar12;
            piVar12 = piVar12 + (uint)bVar16 * -2 + 1;
            piVar14 = piVar14 + (uint)bVar16 * -2 + 1;
          }
          if (0 < iVar7 && 0 < iVar10) {
            pvVar9 = (void *)0x0;
            if ((char)reg_ecx[2] == '\0') {
              pvVar9 = (void *)reg_ecx[1];
            }
            pf_app_terror_ui_view_draw((void *)*reg_ecx,&local_120,iVar5 + 0x12,iVar6 + local_144,iVar10,
                               iVar7,pvVar9);
          }
        }
      } while (uVar2 != uVar13);
      iVar5 = recovered_1000ee50(iVar8,uVar2);
      if (iVar5 != 0) {
        recovered_1000eb20(&local_120,iVar8);
        iVar10 = local_110;
        iVar7 = local_118;
        iVar5 = local_120;
        iVar3 = (local_64 ^ 3) * local_10c;
        iVar11 = iStack_108 + local_11c;
        local_bc = 0xf;
        uStack_b8 = 0;
        local_c0 = reg_ecx;
        pf_app_terror_ui_button(local_60,str_10010d74,recovered_1000f0f0,&local_c0);
        piVar12 = local_60;
        piVar14 = &local_120;
        for (iVar6 = 0x13; iVar6 != 0; iVar6 = iVar6 + -1) {
          *piVar14 = *piVar12;
          piVar12 = piVar12 + (uint)bVar16 * -2 + 1;
          piVar14 = piVar14 + (uint)bVar16 * -2 + 1;
        }
        if (0 < iVar10 && 0x24 < iVar7) {
          pvVar9 = (void *)0x0;
          if ((char)reg_ecx[2] == '\0') {
            pvVar9 = (void *)reg_ecx[1];
          }
          pf_app_terror_ui_view_draw((void *)*reg_ecx,&local_120,iVar5 + 0x12,iVar11 + iVar3,iVar7 + -0x24,
                             iVar10,pvVar9);
        }
      }
    }
    else {
      thunk_snprintf((char *)&local_c0,0x40,str_10010d87,*(uint *)(iVar8 + 0x3d6c)
                        );
      recovered_1000eb20(&local_120,iVar8);
      iVar10 = local_110;
      iVar7 = local_118;
      iVar5 = local_120;
      iVar3 = iStack_108 + local_11c;
      iVar11 = (local_118 + -0x2c) - (local_118 + -0x2c >> 0x1f) >> 1;
      local_128 = 0xb;
      local_124 = 0;
      local_12c = reg_ecx;
      pf_app_terror_ui_button(local_60,(char *)&local_c0,recovered_1000f0f0,&local_12c);
      piVar12 = local_60;
      piVar14 = &local_120;
      for (iVar6 = 0x13; iVar6 != 0; iVar6 = iVar6 + -1) {
        *piVar14 = *piVar12;
        piVar12 = piVar12 + (uint)bVar16 * -2 + 1;
        piVar14 = piVar14 + (uint)bVar16 * -2 + 1;
      }
      if (0 < iVar10 && 0x2d < iVar7) {
        pvVar9 = (void *)0x0;
        if ((char)reg_ecx[2] == '\0') {
          pvVar9 = (void *)reg_ecx[1];
        }
        pf_app_terror_ui_view_draw((void *)*reg_ecx,&local_120,iVar5 + 0x12,iVar3,iVar11,iVar10,pvVar9);
      }
      pcVar4 = str_10010d9f;
      if (*(char *)(iVar8 + 0x3d70) != '\0') {
        pcVar4 = str_10010d97;
      }
      recovered_1000efc0(iVar3,iVar11,iVar10,pcVar4,0xc,0,*(char *)(iVar8 + 0x3d70));
      iVar5 = 1;
      local_d0 = (char *)((uintptr_t)pf_module_state + 0xf14U);
      local_c4 = (char *)(iVar8 + 0x3d71);
      local_c8 = str_10010dbd;
      local_cc = str_10010dca;
      do {
        recovered_1000eb20(&local_120,iVar8);
        iVar3 = local_110;
        iVar10 = local_118;
        iVar7 = local_120;
        local_160 = local_120 + 0x12;
        iVar6 = local_10c * iVar5 + iStack_108 + local_11c;
        if (local_64 == 0) {
          iVar10 = local_118 + -0x24;
          iVar7 = *(int *)(iVar8 + 0x3a8) + 2;
          if (*(int *)(iVar8 + 0x3a8) < 1) {
            iVar7 = 0xc;
          }
          pcVar4 = str_10010db1;
          if (iVar5 == 1) {
            pcVar4 = (char *)((uintptr_t)pf_module_state + 0xf0fU);
          }
          recovered_1000ed70(iVar6 - iVar7,iVar10,iVar7,pcVar4,0x31);
        }
        else {
          iVar11 = *(int *)(iVar8 + 0x3a8) + 2;
          if (*(int *)(iVar8 + 0x3a8) < 1) {
            iVar11 = 0xc;
          }
          pcVar4 = local_d0;
          if (iVar5 == 1) {
            pcVar4 = (char *)((uintptr_t)pf_module_state + 0xf0fU);
          }
          recovered_1000ed70((local_110 - iVar11) / 2 + iVar6,0x40,iVar11,pcVar4,0x31);
          local_160 = iVar7 + 0x5a;
          iVar10 = iVar10 + -0x6c;
        }
        bVar15 = iVar5 == 1;
        capacity = local_cc;
        pcVar4 = (char *)(iVar8 + 0x3d92);
        if (bVar15) {
          capacity = local_c8;
          pcVar4 = local_c4;
        }
        local_128 = 0xe - (uint)bVar15;
        local_124 = 0;
        local_12c = reg_ecx;
        pf_app_terror_ui_text_field(local_60,pcVar4,(ulong)capacity,(*(int *)(iVar8 + 0x3d68) != 0) != bVar15
                           ,recovered_1000f0f0,&local_12c);
        piVar12 = local_60;
        piVar14 = &local_120;
        for (iVar7 = 0x13; iVar7 != 0; iVar7 = iVar7 + -1) {
          *piVar14 = *piVar12;
          piVar12 = piVar12 + (uint)bVar16 * -2 + 1;
          piVar14 = piVar14 + (uint)bVar16 * -2 + 1;
        }
        if (0 < iVar3 && 0 < iVar10) {
          pvVar9 = (void *)0x0;
          if ((char)reg_ecx[2] == '\0') {
            pvVar9 = (void *)reg_ecx[1];
          }
          pf_app_terror_ui_view_draw((void *)*reg_ecx,&local_120,local_160,iVar6,iVar10,iVar3,pvVar9);
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 != 3);
      if (local_64 == 0) {
        recovered_1000eb20(&local_120,iVar8);
        recovered_1000ed70(local_10c * 3 + iStack_108 + local_11c,local_118 + -0x24,local_110,
                           str_10010de8,0x31);
      }
    }
    recovered_1000eb20(&local_120,iVar8);
    iVar10 = local_110;
    iVar7 = local_118;
    iVar5 = local_120;
    iVar3 = iStack_108 + local_11c;
    iVar6 = (4 - (uint)bStack_104) * local_10c;
    pcVar4 = str_10010e27;
    if (*(int *)(iVar8 + 0x3d64) == 2) {
      pcVar4 = str_10010e15;
    }
    local_bc = 9;
    uStack_b8 = 0;
    local_c0 = reg_ecx;
    pf_app_terror_ui_button(local_60,pcVar4,recovered_1000f0f0,&local_c0);
    piVar12 = local_60;
    piVar14 = &local_120;
    for (iVar11 = 0x13; iVar11 != 0; iVar11 = iVar11 + -1) {
      *piVar14 = *piVar12;
      piVar12 = piVar12 + (uint)bVar16 * -2 + 1;
      piVar14 = piVar14 + (uint)bVar16 * -2 + 1;
    }
    if (0 < iVar10 && 0x2d < iVar7) {
      pvVar9 = (void *)0x0;
      if ((char)reg_ecx[2] == '\0') {
        pvVar9 = (void *)reg_ecx[1];
      }
      pf_app_terror_ui_view_draw((void *)*reg_ecx,&local_120,iVar5 + 0x12,iVar3 + iVar6,
                         (iVar7 + -0x2c) - (iVar7 + -0x2c >> 0x1f) >> 1,iVar10,pvVar9);
    }
    recovered_1000eb20(&local_120,iVar8);
    local_bc = 10;
    uStack_b8 = 0;
    local_c0 = reg_ecx;
    pf_app_terror_ui_button(local_60,str_10010e34,recovered_1000f0f0,&local_c0);
    piVar12 = local_60;
    piVar14 = &local_120;
    for (iVar8 = 0x13; iVar8 != 0; iVar8 = iVar8 + -1) {
      *piVar14 = *piVar12;
      piVar12 = piVar12 + (uint)bVar16 * -2 + 1;
      piVar14 = piVar14 + (uint)bVar16 * -2 + 1;
    }
    if (0 < local_110 && 0x2d < local_118) {
      iVar8 = (local_118 + -0x2c) - (local_118 + -0x2c >> 0x1f) >> 1;
      pvVar9 = (void *)0x0;
      if ((char)reg_ecx[2] == '\0') {
        pvVar9 = (void *)reg_ecx[1];
      }
      pf_app_terror_ui_view_draw((void *)*reg_ecx,&local_120,local_120 + 0x1a + iVar8,
                         iStack_108 + local_11c + (4 - (uint)bStack_104) * local_10c,iVar8,local_110
                         ,pvVar9);
    }
  }
  return;
}

#undef str_10010d2f
#undef str_10010d4b
#undef str_10010d74
#undef str_10010d87
#undef str_10010d97
#undef str_10010d9f
#undef str_10010db1
#undef str_10010dbd
#undef str_10010dca
#undef str_10010de8
#undef str_10010e15
#undef str_10010e27
#undef str_10010e34
#undef local_160
#undef local_144
#undef local_12c
#undef local_128
#undef local_124
#undef local_120
#undef local_11c
#undef iStack_108
#undef local_118
#undef bStack_104
#undef local_110
#undef local_10c
#undef local_d0
#undef local_cc
#undef uStack_b8
#undef local_c8
#undef local_c4
#undef local_c0
#undef local_bc
#undef local_80
#undef local_7c
#undef local_78
#undef local_74
#undef local_64
#undef local_60

#define local_44 (*(int *)(pf_stack_frame + 28))
#define local_40 (*(int *)(pf_stack_frame + 32))
#define local_3c (*(uint *)(pf_stack_frame + 36))
#define local_24 (*(int *)(pf_stack_frame + 60))
#define local_20 (*(int *)(pf_stack_frame + 64))
#define local_1c (*(uint *)(pf_stack_frame + 68))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000eb20
 */

void recovered_1000eb20(int *reg_ecx,int reg_edx)

{
  unsigned char pf_stack_frame[128] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;

  recovered_10009a90(&local_24,reg_edx);
  if (reg_edx == 0) {
    reg_ecx[4] = 0x1c;
    reg_ecx[6] = 0x2e;
    local_3c = local_1c;
    if ((int)local_1c < 0x188) {
      local_40 = 0x230;
    }
    else {
      uVar5 = 0x250;
      if (local_1c < 0x250) {
        uVar5 = local_1c;
      }
      local_40 = uVar5 - 0x20;
    }
    iVar3 = 400;
    iVar7 = 0x1c;
    local_44 = 0x2e;
    goto LAB_1000ec39;
  }
  local_44 = *(int *)(reg_edx + 0x3a8);
  if (local_44 < 1) {
    reg_ecx[4] = 0x1c;
    reg_ecx[6] = 0x2e;
    if ((int)local_1c < 0x188) {
      local_44 = 0x2e;
      iVar7 = 0x1c;
      goto LAB_1000ebd4;
    }
    uVar5 = 0x250;
    if (local_1c < 0x250) {
      uVar5 = local_1c;
    }
    local_44 = 0x2e;
    iVar7 = 0x1c;
  }
  else {
    iVar7 = local_44 + 0x12;
    reg_ecx[4] = iVar7;
    local_44 = local_44 + 0x24;
    reg_ecx[6] = local_44;
    uVar4 = local_1c;
    if ((int)local_1c < 0x188) {
LAB_1000ebd4:
      uVar4 = 0x2f8;
      if (*(uint *)(reg_edx + 4) != 0) {
        uVar4 = *(uint *)(reg_edx + 4);
      }
    }
    uVar5 = 0x250;
    if ((int)uVar4 < 0x250) {
      uVar5 = uVar4;
    }
  }
  local_40 = uVar5 - 0x20;
  iVar3 = 400;
  if (*(int *)(reg_edx + 8) != 0) {
    iVar3 = *(int *)(reg_edx + 8);
  }
  local_3c = local_1c;
LAB_1000ec39:
  iVar10 = (iVar3 - local_20) + -0xc;
  iVar3 = local_44 + 0x62 + (uintptr_t)iVar7 * 5;
  *(bool *)(reg_ecx + 7) = iVar10 < iVar3;
  iVar9 = 0x14;
  if (iVar10 < iVar3) {
    iVar9 = 8;
  }
  uVar5 = iVar10 < iVar3 ^ 5;
  iVar2 = uVar5 * iVar7;
  iVar3 = iVar2 + local_44;
  iVar6 = uVar5 - 1;
  iVar8 = iVar6 * iVar9 + 0x12 + iVar3;
  iVar1 = local_20;
  if (iVar10 < iVar8) {
    if (reg_edx == 0) {
      iVar10 = 0x178;
    }
    else {
      iVar10 = 0x178;
      if (*(int *)(reg_edx + 8) != 0) {
        iVar10 = *(int *)(reg_edx + 8) + -0x18;
      }
    }
    iVar3 = ((iVar10 - iVar3) + -0x12) / iVar6;
    if (iVar3 < iVar9) {
      iVar9 = iVar3;
    }
    if (iVar3 < 0) {
      iVar9 = 0;
    }
    iVar8 = iVar2 + 0x12 + local_44 + iVar6 * iVar9;
    local_44 = 0xc;
    iVar1 = local_44;
  }
  local_44 = iVar1;
  reg_ecx[5] = iVar9 + iVar7;
  if ((int)local_3c < local_40) {
    if (reg_edx == 0) {
      iVar7 = 0x2f8;
    }
    else {
      iVar7 = 0x2f8;
      if (*(int *)(reg_edx + 4) != 0) {
        iVar7 = *(int *)(reg_edx + 4);
      }
    }
    local_24 = (iVar7 - local_40) / 2;
  }
  else {
    local_24 = (int)(local_3c - local_40) / 2 + local_24;
  }
  iVar7 = 0;
  if (iVar10 - iVar8 != 0 && iVar8 <= iVar10) {
    iVar7 = (iVar10 - iVar8) / 2;
  }
  *reg_ecx = local_24;
  reg_ecx[1] = iVar7 + local_44;
  reg_ecx[2] = local_40;
  reg_ecx[3] = iVar8;
  return;
}

#undef local_44
#undef local_40
#undef local_3c
#undef local_24
#undef local_20
#undef local_1c

#define in_stack_fffffee4 (*(undefined1 (*)[284])(pf_stack_frame + 532))
#define in_stack_ffffff1c (*(undefined4 *)(pf_stack_frame + 588))
#define in_stack_ffffff20 (*(undefined4 *)(pf_stack_frame + 592))
#define in_stack_ffffff24 (*(undefined4 *)(pf_stack_frame + 596))
#define in_stack_ffffff28 (*(undefined4 *)(pf_stack_frame + 600))
#define local_b0 (*(undefined4 (*)[44])(pf_stack_frame + 640))
#define auStackY_320 (*(undefined4 (*)[200])(pf_stack_frame + 16))
#define auStack_60 (*(undefined4 (*)[24])(pf_stack_frame + 720))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ed70
 */

void recovered_1000ed70(int param_1,int param_2,int param_3,char *param_4,uint param_5)

{
  unsigned char pf_stack_frame[848] __attribute__((aligned(16))) = {0};

  PFUiView view;
  PFUiView view_00;
  uint value;
  undefined4 *in_ECX;
  int iVar1;
  int in_EDX;
  undefined4 *puVar2;
  void *input;
  undefined4 *puVar3;
  byte bVar4;
  uint uVar5;

  bVar4 = 0;
  pf_app_terror_ui_text(local_b0,param_4);
  uVar5 = ((uintptr_t)pf_module_state - 0x10f7U);
  value = thunk_terror_ui_colour(param_5);
  puVar2 = local_b0;
  puVar3 = auStackY_320 + 0x81;
  for (iVar1 = 0x13; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  view.words[0xe] = in_stack_ffffff1c;
  view.words[0] = PF_PART4(in_stack_fffffee4, 0);
  view.words[1] = PF_PART4(in_stack_fffffee4, 4);
  view.words[2] = PF_PART4(in_stack_fffffee4, 8);
  view.words[3] = PF_PART4(in_stack_fffffee4, 12);
  view.words[4] = PF_PART4(in_stack_fffffee4, 16);
  view.words[5] = PF_PART4(in_stack_fffffee4, 20);
  view.words[6] = PF_PART4(in_stack_fffffee4, 24);
  view.words[7] = PF_PART4(in_stack_fffffee4, 28);
  view.words[8] = PF_PART4(in_stack_fffffee4, 32);
  view.words[9] = PF_PART4(in_stack_fffffee4, 36);
  view.words[10] = PF_PART4(in_stack_fffffee4, 40);
  view.words[0xb] = PF_PART4(in_stack_fffffee4, 44);
  view.words[0xc] = PF_PART4(in_stack_fffffee4, 48);
  view.words[0xd] = PF_PART4(in_stack_fffffee4, 52);
  view.words[0xf] = in_stack_ffffff20;
  view.words[0x10] = in_stack_ffffff24;
  view.words[0x11] = in_stack_ffffff28;
  view.words[0x12] = uVar5;
  pf_app_terror_ui_view_foreground(auStack_60,view,value);
  puVar2 = auStack_60;
  puVar3 = auStackY_320 + 0x81;
  for (iVar1 = 0x13; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  view_00.words[0xe] = in_stack_ffffff1c;
  view_00.words[0] = PF_PART4(in_stack_fffffee4, 0);
  view_00.words[1] = PF_PART4(in_stack_fffffee4, 4);
  view_00.words[2] = PF_PART4(in_stack_fffffee4, 8);
  view_00.words[3] = PF_PART4(in_stack_fffffee4, 12);
  view_00.words[4] = PF_PART4(in_stack_fffffee4, 16);
  view_00.words[5] = PF_PART4(in_stack_fffffee4, 20);
  view_00.words[6] = PF_PART4(in_stack_fffffee4, 24);
  view_00.words[7] = PF_PART4(in_stack_fffffee4, 28);
  view_00.words[8] = PF_PART4(in_stack_fffffee4, 32);
  view_00.words[9] = PF_PART4(in_stack_fffffee4, 36);
  view_00.words[10] = PF_PART4(in_stack_fffffee4, 40);
  view_00.words[0xb] = PF_PART4(in_stack_fffffee4, 44);
  view_00.words[0xc] = PF_PART4(in_stack_fffffee4, 48);
  view_00.words[0xd] = PF_PART4(in_stack_fffffee4, 52);
  view_00.words[0xf] = in_stack_ffffff20;
  view_00.words[0x10] = in_stack_ffffff24;
  view_00.words[0x11] = in_stack_ffffff28;
  view_00.words[0x12] = uVar5;
  pf_app_terror_ui_view_alignment(local_b0,view_00,3);
  puVar2 = local_b0;
  puVar3 = auStack_60;
  for (iVar1 = 0x13; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  puVar2 = auStack_60;
  puVar3 = local_b0;
  for (iVar1 = 0x13; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  if (0 < param_3 && 0 < param_2) {
    input = (void *)0x0;
    if (*(char *)(in_ECX + 2) == '\0') {
      input = (void *)in_ECX[1];
    }
    pf_app_terror_ui_view_draw((void *)*in_ECX,local_b0,in_EDX,param_1,param_2,param_3,input);
  }
  return;
}

#undef in_stack_fffffee4
#undef in_stack_ffffff1c
#undef in_stack_ffffff20
#undef in_stack_ffffff24
#undef in_stack_ffffff28
#undef local_b0
#undef auStackY_320
#undef auStack_60

#define local_24 (*(int *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ee50
 */

int recovered_1000ee50(int reg_ecx,int reg_edx)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;

  iVar1 = *(int *)(reg_ecx + 0x808);
  local_24 = 0;
  if (iVar1 != 0) {
    local_24 = 0;
    iVar7 = 0;
    do {
      iVar6 = *(int *)(reg_ecx + 0x704 + iVar7 * 4);
      if (1 < iVar6 + 1U) {
        if (iVar7 != 0) {
          iVar8 = 0;
          do {
            if (*(int *)(reg_ecx + 0x704 + iVar8 * 4) == iVar6) goto LAB_1000ee8b;
            iVar8 = iVar8 + 1;
          } while (iVar7 != iVar8);
        }
        if (local_24 == reg_edx) {
          return iVar6;
        }
        local_24 = local_24 + 1;
      }
LAB_1000ee8b:
      iVar7 = iVar7 + 1;
    } while (iVar7 != iVar1);
  }
  uVar2 = *(uint *)(reg_ecx + 0x3d58);
  if (uVar2 != 0) {
    iVar7 = *(int *)(reg_ecx + 0x3c48);
    uVar9 = uVar2;
    do {
      iVar6 = uVar9 * 0x10c;
      if (*(int *)(iVar7 + -0x10c + iVar6) == *(int *)(reg_ecx + 0x568)) {
        iVar6 = *(int *)(iVar7 + iVar6 + -0x108 + (uint)*(byte *)(iVar7 + -0xf8 + iVar6) * 4);
        iVar8 = iVar1;
        piVar3 = (int *)(reg_ecx + 0x704);
        if (1 < iVar6 + 1U) {
          while( true ) {
            uVar4 = uVar2;
            piVar5 = (int *)(uVar2 * 0x10c + -0x10c + iVar7);
            if (iVar8 == 0) break;
            if (*piVar3 == iVar6) goto LAB_1000ef17;
            iVar8 = iVar8 + -1;
            piVar3 = piVar3 + 1;
          }
          for (; uVar9 < uVar4; uVar4 = uVar4 - 1) {
            if ((*piVar5 == *(int *)(reg_ecx + 0x568)) &&
               (piVar5[*(byte *)(piVar5 + 5) + 1] == iVar6)) goto LAB_1000ef17;
            piVar5 = piVar5 + -0x43;
          }
          if (local_24 == reg_edx) {
            return iVar6;
          }
          local_24 = local_24 + 1;
        }
      }
LAB_1000ef17:
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  return 0;
}

#undef local_24

#define local_bc (*(undefined1 (*)[188])(pf_stack_frame + 644))
#define local_b8 (*(undefined4 *)(pf_stack_frame + 648))
#define local_b4 (*(undefined4 *)(pf_stack_frame + 652))
#define local_60 (*(undefined4 (*)[24])(pf_stack_frame + 736))
#define auStackY_330 (*(undefined4 (*)[204])(pf_stack_frame + 16))
#define auStack_b0 (*(undefined4 (*)[44])(pf_stack_frame + 656))
#define in_stack_fffffed4 (*(undefined1 (*)[300])(pf_stack_frame + 532))
#define in_stack_ffffff0c (*(undefined4 *)(pf_stack_frame + 588))
#define in_stack_ffffff10 (*(undefined4 *)(pf_stack_frame + 592))
#define in_stack_ffffff14 (*(undefined4 *)(pf_stack_frame + 596))
#define in_stack_ffffff18 (*(undefined4 *)(pf_stack_frame + 600))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000efc0
 */

void recovered_1000efc0(int param_1,int param_2,int param_3,char *param_4,undefined4 param_5,
                       undefined4 param_6,char param_7)

{
  unsigned char pf_stack_frame[864] __attribute__((aligned(16))) = {0};

  PFUiView view;
  PFUiView view_00;
  uint uVar1;
  undefined4 *in_ECX;
  int iVar2;
  int in_EDX;
  undefined4 *puVar3;
  void *input;
  undefined4 *puVar4;
  byte bVar5;
  uint uVar6;

  bVar5 = 0;
  local_b8 = param_5;
  local_b4 = param_6;
  pf_app_terror_ui_button(local_60,param_4,recovered_1000f0f0,local_bc);
  if (param_7 != '\0') {
    uVar6 = ((uintptr_t)pf_module_state - 0xe7bU);
    uVar1 = thunk_terror_ui_colour(0x2b);
    puVar3 = local_60;
    puVar4 = auStackY_330 + 0x81;
    for (iVar2 = 0x13; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
      puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
    }
    view.words[0xe] = in_stack_ffffff0c;
    view.words[0] = PF_PART4(in_stack_fffffed4, 0);
    view.words[1] = PF_PART4(in_stack_fffffed4, 4);
    view.words[2] = PF_PART4(in_stack_fffffed4, 8);
    view.words[3] = PF_PART4(in_stack_fffffed4, 12);
    view.words[4] = PF_PART4(in_stack_fffffed4, 16);
    view.words[5] = PF_PART4(in_stack_fffffed4, 20);
    view.words[6] = PF_PART4(in_stack_fffffed4, 24);
    view.words[7] = PF_PART4(in_stack_fffffed4, 28);
    view.words[8] = PF_PART4(in_stack_fffffed4, 32);
    view.words[9] = PF_PART4(in_stack_fffffed4, 36);
    view.words[10] = PF_PART4(in_stack_fffffed4, 40);
    view.words[0xb] = PF_PART4(in_stack_fffffed4, 44);
    view.words[0xc] = PF_PART4(in_stack_fffffed4, 48);
    view.words[0xd] = PF_PART4(in_stack_fffffed4, 52);
    view.words[0xf] = in_stack_ffffff10;
    view.words[0x10] = in_stack_ffffff14;
    view.words[0x11] = in_stack_ffffff18;
    view.words[0x12] = uVar6;
    pf_app_terror_ui_view_background(auStack_b0,view,uVar1);
    puVar3 = auStack_b0;
    puVar4 = local_60;
    for (iVar2 = 0x13; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
      puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
    }
    uVar6 = ((uintptr_t)pf_module_state - 0xe39U);
    uVar1 = thunk_terror_ui_colour(0xe);
    puVar3 = local_60;
    puVar4 = auStackY_330 + 0x81;
    for (iVar2 = 0x13; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
      puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
    }
    view_00.words[0xe] = in_stack_ffffff0c;
    view_00.words[0] = PF_PART4(in_stack_fffffed4, 0);
    view_00.words[1] = PF_PART4(in_stack_fffffed4, 4);
    view_00.words[2] = PF_PART4(in_stack_fffffed4, 8);
    view_00.words[3] = PF_PART4(in_stack_fffffed4, 12);
    view_00.words[4] = PF_PART4(in_stack_fffffed4, 16);
    view_00.words[5] = PF_PART4(in_stack_fffffed4, 20);
    view_00.words[6] = PF_PART4(in_stack_fffffed4, 24);
    view_00.words[7] = PF_PART4(in_stack_fffffed4, 28);
    view_00.words[8] = PF_PART4(in_stack_fffffed4, 32);
    view_00.words[9] = PF_PART4(in_stack_fffffed4, 36);
    view_00.words[10] = PF_PART4(in_stack_fffffed4, 40);
    view_00.words[0xb] = PF_PART4(in_stack_fffffed4, 44);
    view_00.words[0xc] = PF_PART4(in_stack_fffffed4, 48);
    view_00.words[0xd] = PF_PART4(in_stack_fffffed4, 52);
    view_00.words[0xf] = in_stack_ffffff10;
    view_00.words[0x10] = in_stack_ffffff14;
    view_00.words[0x11] = in_stack_ffffff18;
    view_00.words[0x12] = uVar6;
    pf_app_terror_ui_view_foreground(auStack_b0,view_00,uVar1);
    puVar3 = auStack_b0;
    puVar4 = local_60;
    for (iVar2 = 0x13; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
      puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
    }
  }
  puVar3 = local_60;
  puVar4 = auStack_b0;
  for (iVar2 = 0x13; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
  }
  if (0 < param_3 && 0 < param_2) {
    input = (void *)0x0;
    if (*(char *)(in_ECX + 2) == '\0') {
      input = (void *)in_ECX[1];
    }
    pf_app_terror_ui_view_draw((void *)*in_ECX,auStack_b0,in_EDX,param_1,param_2,param_3,input);
  }
  return;
}

#undef local_bc
#undef local_b8
#undef local_b4
#undef local_60
#undef auStackY_330
#undef auStack_b0
#undef in_stack_fffffed4
#undef in_stack_ffffff0c
#undef in_stack_ffffff10
#undef in_stack_ffffff14
#undef in_stack_ffffff18

#undef DAT_1001032f
#define DAT_1001032f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x496U)))
#undef str_10010e3b
#define str_10010e3b (*(char (*)[1])(((uintptr_t)pf_module_state + 0xfa2U)))
#define local_40 (*(uint *)(pf_stack_frame + 32))
#define local_34 (*(int (*)[13])(pf_stack_frame + 44))
#define local_18 (*(byte *)(pf_stack_frame + 72))
#define arg3 (*(void * *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000f0f0
 */

void recovered_1000f0f0(int *param_1)

{
  unsigned char pf_stack_frame[128] __attribute__((aligned(16))) = {0};

  int iVar1;
  int *piVar2;
  int reg_edx;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  byte bVar7;
  char *pcVar8;
  int iVar9;
  int iVar10;
  int iVar11;

  piVar2 = (int *)*param_1;
  if ((char)piVar2[2] != '\0') {
    return;
  }
  reg_edx = *piVar2;
  *(undefined1 *)(piVar2 + 2) = 1;
  switch((uintptr_t)(param_1[1])) {
  case 0:
    iVar11 = *(int *)(reg_edx + 0x56c);
    if (iVar11 != 0) {
      iVar4 = 0;
      iVar9 = 0;
      do {
        iVar1 = iVar9 + 1;
        iVar10 = iVar1;
        if (iVar9 - iVar11 == -1) {
          iVar10 = 0;
        }
        if (*(int *)(reg_edx + 0x570 + iVar9 * 4) == *(int *)(reg_edx + 0x568)) {
          iVar4 = iVar10;
        }
        iVar9 = iVar1;
      } while (iVar1 != iVar11);
      recovered_1000f630(reg_edx,*(undefined4 *)(reg_edx + 0x570 + iVar4 * 4));
      return;
    }
  case 7:
    *(undefined1 *)(reg_edx + 0x38c4) = 1;
    break;
  case 1:
    uVar3 = param_1[2];
    if (7 < (uint)param_1[2]) {
      return;
    }
    goto LAB_1000f3e2;
  case 2:
    iVar11 = *(int *)(reg_edx + 0x5b8);
    if (iVar11 == 0) {
      if (*(char *)(reg_edx + 0xa2d) == '\0') {
        iVar11 = 1;
      }
      else if (*(char *)(reg_edx + 0xa2e) == '\0') {
        iVar11 = 2;
      }
      else if (*(char *)(reg_edx + 0xa2f) == '\0') {
        iVar11 = 3;
      }
      else if (*(char *)(reg_edx + 0xa30) == '\0') {
        iVar11 = 4;
      }
      else if (*(char *)(reg_edx + 0xa31) == '\0') {
        iVar11 = 5;
      }
      else if (*(char *)(reg_edx + 0xa32) == '\0') {
        iVar11 = 6;
      }
      else {
        iVar11 = iVar11 + (uint)(iVar11 == 0);
        if (*(char *)(reg_edx + 0xa33) == '\0') {
          iVar11 = 7;
        }
      }
    }
    *(undefined4 *)(reg_edx + 0x3d64) = 1;
    *(undefined4 *)(reg_edx + 0x3d68) = 0;
    *(int *)(reg_edx + 0x3d6c) = iVar11;
    *(undefined1 *)(reg_edx + 0x3d70) = 1;
    arg3 = (void *)(reg_edx + 0x91c + iVar11 * 0x21);
    goto override_prt_1000f34d_9b0a0a95;
  case 3:
    *(undefined4 *)(reg_edx + 0x3d64) = 2;
    *(undefined4 *)(reg_edx + 0x3dd8) = 0;
    if (*(uint *)(reg_edx + 0x3dd4) == 0) {
      *(char *)(reg_edx + 0x3d71) = '\0';
    }
    else {
      thunk_snprintf((char *)(reg_edx + 0x3d71),0x21,str_10010e3b,*(uint *)(reg_edx + 0x3dd4));
    }
    break;
  case 4:
    *(int *)(reg_edx + 0x3dd4) = param_1[2];
    *(undefined4 *)(reg_edx + 0x5c0) = 0;
    *(int *)(reg_edx + 0x38b8) = *(int *)(reg_edx + 0x38b8) + 1;
    *(undefined4 *)(reg_edx + 0x3d64) = 0;
    break;
  case 5:
    iVar11 = *(int *)(reg_edx + 0x3d58);
    if (iVar11 != 0) {
      pcVar8 = (char *)(*(int *)(reg_edx + 0x3c48) + 0x14);
      local_40 = 0;
      do {
        if (*(int *)(pcVar8 + -0x14) == *(int *)(reg_edx + 0x568)) {
          if (*(int *)(reg_edx + 0x3dd4) == 0) {
            if ((*(int *)(pcVar8 + -4) == *(int *)(reg_edx + 0x5b8)) &&
               (*(int *)(pcVar8 + -0xc) == -1)) goto LAB_1000f42d;
          }
          else {
            iVar4 = *(int *)(pcVar8 + -0xc);
            if (*pcVar8 != '\x01') {
              if (iVar4 == -1) goto LAB_1000f430;
              iVar4 = *(int *)(pcVar8 + -0x10);
            }
            if (iVar4 == *(int *)(reg_edx + 0x3dd4)) {
LAB_1000f42d:
              local_40 = local_40 + 1;
            }
          }
        }
LAB_1000f430:
        pcVar8 = pcVar8 + 0x10c;
        iVar11 = iVar11 + -1;
      } while (iVar11 != 0);
      uVar6 = *(int *)(reg_edx + 0x5c0) + 1;
      if (uVar6 < local_40) {
        *(uint *)(reg_edx + 0x5c0) = uVar6;
      }
    }
    break;
  case 6:
    *(undefined4 *)(reg_edx + 0x5c0) = 0;
    break;
  case 8:
    uVar5 = recovered_10009c40(reg_edx,*(byte **)(reg_edx + 0x3ac));
    if ((char)uVar5 != '\0') {
      if (*(undefined1 **)(reg_edx + 0x3ac) != (undefined1 *)0x0) {
        **(undefined1 **)(reg_edx + 0x3ac) = 0;
      }
      *(undefined4 *)(reg_edx + 0x3b0) = 0;
    }
    break;
  case 9:
    recovered_1000c3a0(reg_edx);
    break;
  case 10:
    *(undefined4 *)(reg_edx + 0x3d64) = 0;
    thunk_memset((void *)(reg_edx + 0x3d92),0,0x41);
    break;
  case 0xb:
    uVar6 = *(uint *)(reg_edx + 0x3d6c);
    *(uint *)(reg_edx + 0x3d6c) = uVar6 + 1 + (uVar6 / 7) * -7;
    *(undefined1 *)(reg_edx + 0x3d70) = 1;
    arg3 = (void *)(reg_edx + 0x93d + (uVar6 % 7) * 0x21);
override_prt_1000f34d_9b0a0a95:
    thunk_snprintf((char *)(reg_edx + 0x3d71),0x21,&DAT_1001032f,arg3);
    *(undefined1 *)(reg_edx + 0x3d92) = 0;
    break;
  case 0xc:
    *(byte *)(reg_edx + 0x3d70) = *(byte *)(reg_edx + 0x3d70) ^ 1;
    break;
  case 0xd:
    *(undefined4 *)(reg_edx + 0x3d68) = 0;
    break;
  case 0xe:
    *(undefined4 *)(reg_edx + 0x3d68) = 1;
    break;
  case 0xf:
    recovered_1000eb20(local_34,reg_edx);
    iVar11 = *(int *)(reg_edx + 0x3dd8) + 1;
    iVar4 = recovered_1000ee50(reg_edx,iVar11 << ((local_18 ^ 1) & 0x1f));
    if (iVar4 == 0) {
      iVar11 = 0;
    }
    *(int *)(reg_edx + 0x3dd8) = iVar11;
    break;
  case 0x10:
    uVar6 = *(uint *)(reg_edx + 0x5b8);
    uVar3 = uVar6 + 1 & 7;
    if (((~(byte)uVar6 & 7) != 0) && (*(char *)(reg_edx + 0xa2c + uVar3) == '\0')) {
      uVar3 = uVar6 + 2 & 7;
      bVar7 = (byte)uVar6 & 7;
      if ((bVar7 != 6) && (*(char *)(reg_edx + 0xa2c + uVar3) == '\0')) {
        uVar3 = uVar6 + 3 & 7;
        if ((bVar7 != 5) && (*(char *)(reg_edx + 0xa2c + uVar3) == '\0')) {
          uVar3 = uVar6 & 7 ^ 4;
          if ((bVar7 != 4) && (*(char *)(reg_edx + 0xa2c + uVar3) == '\0')) {
            uVar3 = uVar6 + 5 & 7;
            if (bVar7 == 3) {
LAB_1000f246:
            }
            else if (*(char *)(reg_edx + 0xa2c + uVar3) == '\0') {
              uVar3 = uVar6 + 6 & 7;
              if (bVar7 == 2) goto LAB_1000f246;
              if (*(char *)(reg_edx + 0xa2c + uVar3) == '\0') {
                uVar3 = uVar6 - 1 & 7;
                if (bVar7 == 1) goto LAB_1000f246;
                if (*(char *)(reg_edx + 0xa2c + uVar3) == '\0') {
                  uVar3 = uVar6 & 7;
                }
              }
            }
          }
        }
      }
    }
LAB_1000f3e2:
    *(uint *)(reg_edx + 0x5b8) = uVar3;
    *(undefined4 *)(reg_edx + 0x3dd4) = 0;
    *(undefined4 *)(reg_edx + 0x5c0) = 0;
    *(int *)(reg_edx + 0x38b8) = *(int *)(reg_edx + 0x38b8) + 1;
  }
  return;
}

#undef DAT_1001032f
#undef str_10010e3b
#undef local_40
#undef local_34
#undef local_18
#undef arg3

#undef DAT_10011090
#define DAT_10011090 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x11f7U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000f630
 */

void recovered_1000f630(int reg_ecx,undefined4 reg_edx)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  DAT_10011090 = reg_edx;
  *(undefined4 *)(reg_ecx + 0x568) = reg_edx;
  *(undefined4 *)(reg_ecx + 0x5c0) = 0;
  *(int *)(reg_ecx + 0x38b8) = *(int *)(reg_ecx + 0x38b8) + 1;
  *(undefined1 *)(reg_ecx + 0x540) = 0;
  *(undefined4 *)(reg_ecx + 0x808) = 0;
  *(undefined1 *)(reg_ecx + 0x38c7) = 0;
  thunk_memset((void *)(reg_ecx + 0x91c),0,0x108);
  thunk_memset((void *)(reg_ecx + 0xa2c),0,8);
  *(undefined1 *)(reg_ecx + 0x38c4) = 1;
  return;
}

#undef DAT_10011090

#undef DAT_1001108c
#define DAT_1001108c (*(int *)(((uintptr_t)pf_module_state + 0x11f3U)))
#define local_1c (*(int *)(pf_stack_frame + 36))
#define local_18 (*(int *)(pf_stack_frame + 40))
#define local_2c (*(int * *)(pf_stack_frame + 20))
#define local_24 (*(int *)(pf_stack_frame + 28))
#define local_20 (*(int *)(pf_stack_frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000f6c0
 */

void recovered_1000f6c0(undefined4 *reg_ecx,int reg_edx)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;

  recovered_10009a90(&local_24,reg_edx);
  *reg_ecx = 10;
  local_18 = local_20 + 8 + local_18;
  reg_ecx[1] = local_18;
  iVar4 = DAT_1001108c;
  if (reg_edx == 0) {
    iVar3 = 0x2e4;
    if (DAT_1001108c == 1) {
      iVar3 = 0x284;
    }
    reg_ecx[2] = iVar3;
    iVar2 = 400;
  }
  else {
    iVar2 = 0x2e4;
    if (*(int *)(reg_edx + 4) != 0) {
      iVar2 = *(int *)(reg_edx + 4) + -0x14;
    }
    iVar3 = iVar2 + -0x60;
    if (DAT_1001108c != 1) {
      iVar3 = iVar2;
    }
    reg_ecx[2] = iVar3;
    iVar2 = 400;
    if (*(int *)(reg_edx + 8) != 0) {
      iVar2 = *(int *)(reg_edx + 8);
    }
  }
  local_2c = reg_ecx + 2;
  iVar2 = iVar2 - local_18;
  iVar1 = iVar2 + -10;
  reg_ecx[3] = iVar1;
  if (iVar4 != 0) {
    *reg_ecx = local_24;
    iVar3 = local_1c + -0x60;
    reg_ecx[2] = iVar3;
  }
  if (reg_edx == 0) {
    if (iVar3 < 0xe) {
      *local_2c = 0xe;
    }
  }
  else {
    iVar4 = 0xe;
    if (0 < *(int *)(reg_edx + 0x3a4)) {
      iVar4 = *(int *)(reg_edx + 0x3a4) + 8;
    }
    if (iVar3 < iVar4) {
      *local_2c = iVar4;
    }
    iVar4 = *(int *)(reg_edx + 0x3a8);
    if (0 < iVar4) {
      if (iVar4 + 8 <= iVar1) {
        return;
      }
      goto LAB_1000f7cc;
    }
  }
  iVar4 = 10;
  if (0x1b < iVar2) {
    return;
  }
LAB_1000f7cc:
  reg_ecx[3] = iVar4 + 8;
  return;
}

#undef DAT_1001108c
#undef local_1c
#undef local_18
#undef local_2c
#undef local_24
#undef local_20

#undef DAT_1001016f
#define DAT_1001016f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2d6U)))
#define local_34 (*(int *)(pf_stack_frame + 28))
#define local_28 (*(char * *)(pf_stack_frame + 40))
#define local_24 (*(int *)(pf_stack_frame + 44))
#define local_20 (*(int *)(pf_stack_frame + 48))
#define local_18 (*(int *)(pf_stack_frame + 56))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000f7e0
 */

undefined4 * recovered_1000f7e0(undefined4 *reg_ecx,int reg_edx)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  char *reg_edx_00;
  uint uVar5;
  int iVar6;
  longlong lVar7;

  recovered_10009a90(&local_24,reg_edx);
  iVar4 = 0x12;
  if (0x15 < local_18 + -0x1e) {
    iVar4 = local_18 + -0x22;
  }
  *reg_ecx = 10;
  reg_ecx[1] = local_20;
  reg_ecx[2] = 0xc;
  reg_ecx[3] = iVar4;
  recovered_10009a90(&local_24,reg_edx);
  if (reg_edx == 0) {
    local_34 = 1;
    if (1 < local_18 / 0xc) {
      local_34 = local_18 / 0xc;
    }
    uVar5 = 0;
  }
  else {
    if (*(int *)(reg_edx + 0x3a8) < 1) {
      local_34 = 1;
      if (1 < local_18 / 0xc) {
        local_34 = local_18 / 0xc;
      }
    }
    else {
      local_18 = local_18 / (*(int *)(reg_edx + 0x3a8) + 2);
      local_34 = 1;
      if (1 < local_18) {
        local_34 = local_18;
      }
    }
    uVar1 = recovered_10009740(reg_edx);
    if ((char)uVar1 == '\0') {
      if (*(int *)(reg_edx + 0x3bc) < 1) {
        uVar5 = 0;
      }
      else {
        iVar6 = 0;
        local_28 = &DAT_1001016f;
        uVar5 = 0;
        do {
          iVar3 = *(int *)(reg_edx + 0x374);
          reg_edx_00 = local_28;
          if (iVar3 != 0) {
            reg_edx_00 = (char *)(*(int *)(reg_edx + 0x378) + *(int *)(iVar3 + iVar6 * 8));
          }
          iVar3 = recovered_10009920(reg_edx,reg_edx_00,*(uint *)(iVar3 + 4 + iVar6 * 8));
          if ((int)(uVar5 ^ 0x7fffffff) < iVar3) {
            uVar5 = 0x7fffffff;
            break;
          }
          uVar5 = uVar5 + iVar3;
          iVar6 = iVar6 + 1;
        } while (iVar6 < *(int *)(reg_edx + 0x3bc));
      }
    }
    else {
      uVar5 = *(uint *)(*(int *)(reg_edx + 0x3c0) + *(int *)(reg_edx + 0x3bc) * 8);
      if (0x7ffffffe < uVar5) {
        uVar5 = 0x7fffffff;
      }
      if (*(int *)(*(int *)(reg_edx + 0x3c0) + 4 + *(int *)(reg_edx + 0x3bc) * 8) != 0) {
        uVar5 = 0x7fffffff;
      }
    }
  }
  uVar2 = recovered_100091f0(reg_edx);
  if (0 < (int)uVar2 && local_34 < (int)uVar5) {
    iVar3 = (local_34 * iVar4) / (int)uVar5;
    iVar6 = 0x12;
    if (0x12 < iVar3) {
      iVar6 = iVar3;
    }
    if (iVar4 <= iVar6) {
      iVar6 = iVar4;
    }
    reg_ecx[3] = iVar6;
    lVar7 = thunk___divdi3((longlong)(iVar4 - iVar6) * (longlong)*(int *)(reg_edx + 0x3e4),
                               (ulonglong)uVar2);
    reg_ecx[1] = local_20 + (int)lVar7;
  }
  return reg_ecx;
}

#undef DAT_1001016f
#undef local_34
#undef local_28
#undef local_24
#undef local_20
#undef local_18

#define local_28 (*(uint *)(pf_stack_frame + 24))
#define local_1c (*(uint *)(pf_stack_frame + 36))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000f9c0
 */

void recovered_1000f9c0(int reg_ecx,uint reg_edx,uint param_3,int param_4,int param_5,
                       undefined4 param_6)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;

  if (reg_ecx == 0) {
    local_1c = 0x2f8;
    if ((int)reg_edx < 0x2f8) {
      local_1c = reg_edx;
    }
    if ((int)local_1c < 1) {
      local_1c = 0;
    }
    local_28 = 400;
    if ((int)param_3 < 400) {
      local_28 = param_3;
    }
    if ((int)local_28 < 1) {
      local_28 = 0;
    }
    uVar6 = param_4 + reg_edx;
    if (0x2f7 < (int)uVar6) {
      uVar6 = 0x2f8;
    }
    if ((int)uVar6 < 1) {
      uVar6 = 0;
    }
    uVar5 = 400;
  }
  else {
    uVar6 = 0x2f8;
    if (*(uint *)(reg_ecx + 4) != 0) {
      uVar6 = *(uint *)(reg_ecx + 4);
    }
    local_1c = uVar6;
    if ((int)reg_edx < (int)uVar6) {
      local_1c = reg_edx;
    }
    if ((int)reg_edx < 0) {
      local_1c = 0;
    }
    uVar5 = 400;
    if (*(uint *)(reg_ecx + 8) != 0) {
      uVar5 = *(uint *)(reg_ecx + 8);
    }
    local_28 = uVar5;
    if ((int)param_3 < (int)uVar5) {
      local_28 = param_3;
    }
    if ((int)param_3 < 0) {
      local_28 = 0;
    }
    uVar4 = param_4 + reg_edx;
    if ((int)uVar4 < (int)uVar6) {
      uVar6 = uVar4;
    }
    if ((int)uVar4 < 0) {
      uVar6 = 0;
    }
  }
  uVar4 = param_5 + param_3;
  if ((int)uVar4 < (int)uVar5) {
    uVar5 = uVar4;
  }
  uVar2 = 0;
  if (-1 < (int)uVar4) {
    uVar2 = uVar5;
  }
  if ((int)local_28 < (int)uVar2) {
    do {
      uVar5 = local_1c;
      if ((int)local_1c < (int)uVar6) {
        do {
          if ((reg_ecx != 0) && (-1 < (int)(uVar5 | local_28) && *(int *)(reg_ecx + 0x370) != 0)) {
            iVar1 = *(int *)(reg_ecx + 4);
            iVar3 = iVar1;
            if (iVar1 == 0) {
              iVar3 = 0x2f8;
            }
            if ((int)uVar5 < iVar3) {
              iVar3 = *(int *)(reg_ecx + 8);
              if (iVar3 == 0) {
                iVar3 = 400;
              }
              if ((int)local_28 < iVar3) {
                iVar3 = iVar1 * 4;
                if (iVar1 == 0) {
                  iVar3 = 0xbe0;
                }
                if (*(int *)(reg_ecx + 0xc) != 0) {
                  iVar3 = *(int *)(reg_ecx + 0xc);
                }
                iVar3 = iVar3 * local_28;
                *(undefined1 *)(*(int *)(reg_ecx + 0x370) + iVar3 + uVar5 * 4) = (undefined1)param_6
                ;
                *(undefined1 *)(*(int *)(reg_ecx + 0x370) + iVar3 + 1 + uVar5 * 4) = PF_PART1(param_6, 1);
                *(undefined1 *)(*(int *)(reg_ecx + 0x370) + iVar3 + 2 + uVar5 * 4) = PF_PART1(param_6, 2);
                *(undefined1 *)(iVar3 + *(int *)(reg_ecx + 0x370) + 3 + uVar5 * 4) = 0xff;
              }
            }
          }
          uVar5 = uVar5 + 1;
        } while (uVar6 != uVar5);
      }
      local_28 = local_28 + 1;
    } while (local_28 != uVar2);
  }
  return;
}

#undef local_28
#undef local_1c

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef Ram00280800
#define Ram00280800 (*(uint32_t *)(0x280800U))
#undef Ram00280804
#define Ram00280804 (*(uint32_t *)(0x280804U))
#undef Ram00280808
#define Ram00280808 (*(uint32_t *)(0x280808U))
#undef UINT_00280850
#define UINT_00280850 (*(uint *)(0x280850U))
#undef UINT_00280978
#define UINT_00280978 (*(uint *)(0x280978U))
#define local_44 (*(int *)(pf_stack_frame + 28))
#define local_2c (*(void * *)(pf_stack_frame + 52))
#define local_28 (*(int *)(pf_stack_frame + 56))
#define local_20 (*(uint *)(pf_stack_frame + 64))
#define local_1c (*(uint *)(pf_stack_frame + 68))
#define local_18 (*(int *)(pf_stack_frame + 72))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000fba0
 */

void recovered_1000fba0(int reg_ecx,int reg_edx,int param_3,int param_4,int param_5,uint param_6)

{
  unsigned char pf_stack_frame[128] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  int iVar4;
  code *pcVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;

  if (0 < param_5 && param_4 != 0) {
    thunk_memset(&local_2c,0,0x18);
    iVar1 = Ram00280800;
    if (((((iVar1 == 0x50414d57) && (iVar1 = Ram00280804, iVar1 != 0)) &&
         (uVar6 = Ram00280808, 0xb < uVar6)) &&
        ((uVar6 = Ram00280808, 0x17b < uVar6 &&
         (pcVar5 = (code *)UINT_00280978, pcVar5 != (code *)0x0)))) &&
       (uVar6 = (*pcVar5)((char *)param_4,param_5,0x80000001,
                          (param_6 >> 0x10 & 0xff) * 0x100 + 0xff +
                          ((param_6 >> 8 & 0xff) << 0x10 | param_6 << 0x18),&local_2c), uVar6 != 0))
    {
      if (((local_2c != (void *)0x0 || local_28 != 0) && local_2c != (void *)0x0) && local_28 == 0)
      {
        if (local_1c == 0) {
          local_28 = 0;
        }
        else {
          iVar1 = reg_edx * 4;
          uVar9 = 0;
          local_44 = param_3;
          uVar6 = local_20;
          do {
            if (uVar6 == 0) {
              uVar6 = 0;
            }
            else {
              uVar6 = 0;
              do {
                iVar7 = local_18 * uVar9;
                if ((*(char *)((int)local_2c + uVar6 * 4 + iVar7 + 3) != '\0') && (reg_ecx != 0)) {
                  if (-1 < (int)(reg_edx + uVar6 | param_3 + uVar9) &&
                      *(int *)(reg_ecx + 0x370) != 0) {
                    iVar4 = *(int *)(reg_ecx + 4);
                    iVar8 = iVar4;
                    if (iVar4 == 0) {
                      iVar8 = 0x2f8;
                    }
                    if ((int)(reg_edx + uVar6) < iVar8) {
                      iVar8 = *(int *)(reg_ecx + 8);
                      if (iVar8 == 0) {
                        iVar8 = 400;
                      }
                      if ((int)(param_3 + uVar9) < iVar8) {
                        iVar8 = iVar4 * 4;
                        if (iVar4 == 0) {
                          iVar8 = 0xbe0;
                        }
                        if (*(int *)(reg_ecx + 0xc) != 0) {
                          iVar8 = *(int *)(reg_ecx + 0xc);
                        }
                        uVar2 = *(undefined1 *)((int)local_2c + uVar6 * 4 + iVar7 + 1);
                        uVar3 = *(undefined1 *)((int)local_2c + uVar6 * 4 + iVar7 + 2);
                        iVar8 = iVar8 * local_44;
                        *(undefined1 *)(*(int *)(reg_ecx + 0x370) + iVar1 + iVar8 + uVar6 * 4) =
                             *(undefined1 *)((int)local_2c + uVar6 * 4 + iVar7);
                        *(undefined1 *)(*(int *)(reg_ecx + 0x370) + iVar8 + iVar1 + 1 + uVar6 * 4) =
                             uVar2;
                        *(undefined1 *)(*(int *)(reg_ecx + 0x370) + iVar8 + iVar1 + 2 + uVar6 * 4) =
                             uVar3;
                        *(undefined1 *)(iVar8 + *(int *)(reg_ecx + 0x370) + iVar1 + 3 + uVar6 * 4) =
                             0xff;
                      }
                    }
                  }
                }
                uVar6 = uVar6 + 1;
              } while (uVar6 < local_20);
              uVar6 = local_20;
            }
            uVar9 = uVar9 + 1;
            local_44 = local_44 + 1;
          } while (uVar9 < local_1c);
        }
      }
      if ((((local_2c != (void *)0x0) && (local_28 == 0)) && (local_2c != (void *)0x0)) &&
         (((iVar1 = Ram00280800, iVar1 == 0x50414d57 && (iVar1 = Ram00280804, iVar1 != 0)) &&
          ((uVar6 = Ram00280808, 0xb < uVar6 &&
           ((uVar6 = Ram00280808, 0x53 < uVar6 &&
            (pcVar5 = (code *)UINT_00280850, pcVar5 != (code *)0x0)))))))) {
        (*pcVar5)(local_2c);
      }
      thunk_memset(&local_2c,0,0x18);
    }
  }
  return;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef Ram00280800
#undef Ram00280804
#undef Ram00280808
#undef UINT_00280850
#undef UINT_00280978
#undef local_44
#undef local_2c
#undef local_28
#undef local_20
#undef local_1c
#undef local_18
