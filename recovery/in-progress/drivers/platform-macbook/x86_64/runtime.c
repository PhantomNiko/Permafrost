/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_10014000
#define DAT_10014000 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x12b8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000470
 */

void * recovered_10000470(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return &DAT_10014000;
}

#undef DAT_10014000

#undef DAT_10012d50
#define DAT_10012d50 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8U)))
#undef DAT_10013022
#define DAT_10013022 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2daU)))
#undef DAT_100130d7
#define DAT_100130d7 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x38fU)))
#undef DAT_10015000
#define DAT_10015000 (*(int * *)(((uintptr_t)pf_module_state + 0x22b8U)))
#undef UNK_10012d54
#define UNK_10012d54 (*(int *)(((uintptr_t)pf_module_state + 0xcU)))
#undef UNK_10012d58
#define UNK_10012d58 (*(int *)(((uintptr_t)pf_module_state + 0x10U)))
#undef UNK_10012d5c
#define UNK_10012d5c (*(int *)(((uintptr_t)pf_module_state + 0x14U)))
#undef _DAT_10012d50
#define _DAT_10012d50 (*(uint *)(((uintptr_t)pf_module_state + 0x8U)))
#undef iRam0000000010012d54
#define iRam0000000010012d54 (*(uint32_t *)(((uintptr_t)pf_module_state + 0xcU)))
#undef iRam0000000010012d58
#define iRam0000000010012d58 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x10U)))
#undef iRam0000000010012d5c
#define iRam0000000010012d5c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x14U)))
#undef str_10012d78
#define str_10012d78 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x30U)))
#undef str_10012d92
#define str_10012d92 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4aU)))
#undef str_10012daf
#define str_10012daf (*(char (*)[1])(((uintptr_t)pf_module_state + 0x67U)))
#undef str_10012dcb
#define str_10012dcb (*(char (*)[1])(((uintptr_t)pf_module_state + 0x83U)))
#undef str_10012dec
#define str_10012dec (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa4U)))
#undef str_10012e0e
#define str_10012e0e (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc6U)))
#undef str_10012e2f
#define str_10012e2f (*(char (*)[1])(((uintptr_t)pf_module_state + 0xe7U)))
#undef str_10012e48
#define str_10012e48 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x100U)))
#undef str_10012f70
#define str_10012f70 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x228U)))
#undef str_10012f87
#define str_10012f87 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x23fU)))
#undef str_10013027
#define str_10013027 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2dfU)))
#undef str_1001302d
#define str_1001302d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2e5U)))
#undef str_10013041
#define str_10013041 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2f9U)))
#undef str_1001304d
#define str_1001304d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x305U)))
#undef str_10013057
#define str_10013057 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x30fU)))
#undef str_10013063
#define str_10013063 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x31bU)))
#undef str_1001306f
#define str_1001306f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x327U)))
#undef str_1001309d
#define str_1001309d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x355U)))
#undef str_100130a7
#define str_100130a7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x35fU)))
#undef str_100130bc
#define str_100130bc (*(char (*)[1])(((uintptr_t)pf_module_state + 0x374U)))
#undef str_100130c9
#define str_100130c9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x381U)))
#undef str_100130e0
#define str_100130e0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x398U)))
#undef str_100130ea
#define str_100130ea (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3a2U)))
#undef str_100130f6
#define str_100130f6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3aeU)))
#undef str_10013108
#define str_10013108 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3c0U)))
#undef str_10013117
#define str_10013117 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3cfU)))
#undef str_10013135
#define str_10013135 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3edU)))
#undef str_10013143
#define str_10013143 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3fbU)))
#undef str_1001314e
#define str_1001314e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x406U)))
#undef str_1001315f
#define str_1001315f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x417U)))
#undef str_1001316f
#define str_1001316f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x427U)))
#undef str_10013179
#define str_10013179 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x431U)))
#undef str_10013185
#define str_10013185 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x43dU)))
#undef str_1001319c
#define str_1001319c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x454U)))
#undef str_100131c4
#define str_100131c4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x47cU)))
#undef str_100131ce
#define str_100131ce (*(char (*)[1])(((uintptr_t)pf_module_state + 0x486U)))
#undef str_100131e6
#define str_100131e6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x49eU)))
#undef str_10013201
#define str_10013201 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4b9U)))
#undef str_1001322d
#define str_1001322d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4e5U)))
#undef str_1001324d
#define str_1001324d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x505U)))
#undef str_1001327e
#define str_1001327e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x536U)))
#undef str_1001328b
#define str_1001328b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x543U)))
#undef str_1001329d
#define str_1001329d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x555U)))
#undef str_100132a7
#define str_100132a7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x55fU)))
#undef str_100132b4
#define str_100132b4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x56cU)))
#undef str_100132c1
#define str_100132c1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x579U)))
#undef str_100132d2
#define str_100132d2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x58aU)))
#undef str_100132e2
#define str_100132e2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x59aU)))
#undef str_100132ef
#define str_100132ef (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5a7U)))
#undef str_100132fc
#define str_100132fc (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5b4U)))
#undef str_10013308
#define str_10013308 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5c0U)))
#undef str_10013311
#define str_10013311 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5c9U)))
#undef str_10013324
#define str_10013324 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5dcU)))
#undef str_100136fb
#define str_100136fb (*(char (*)[1])(((uintptr_t)pf_module_state + 0x9b3U)))
#undef str_10013729
#define str_10013729 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x9e1U)))
#undef str_10013767
#define str_10013767 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa1fU)))
#undef str_1001378a
#define str_1001378a (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa42U)))
#undef str_100137ab
#define str_100137ab (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa63U)))
#undef str_100137d7
#define str_100137d7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa8fU)))
#undef str_100137ee
#define str_100137ee (*(char (*)[1])(((uintptr_t)pf_module_state + 0xaa6U)))
#undef str_1001380b
#define str_1001380b (*(char (*)[1])(((uintptr_t)pf_module_state + 0xac3U)))
#undef str_10013823
#define str_10013823 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xadbU)))
#undef str_10013841
#define str_10013841 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xaf9U)))
#undef str_10013860
#define str_10013860 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb18U)))
#undef str_10013872
#define str_10013872 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb2aU)))
#undef str_10013894
#define str_10013894 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb4cU)))
#undef str_100138b0
#define str_100138b0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb68U)))
#undef str_100138d4
#define str_100138d4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb8cU)))
#undef str_100138e9
#define str_100138e9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xba1U)))
#undef str_100138ff
#define str_100138ff (*(char (*)[1])(((uintptr_t)pf_module_state + 0xbb7U)))
#undef str_10013918
#define str_10013918 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xbd0U)))
#undef str_1001396c
#define str_1001396c (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc24U)))
#undef str_10013978
#define str_10013978 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc30U)))
#undef str_100139c5
#define str_100139c5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc7dU)))
#undef str_100139e6
#define str_100139e6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc9eU)))
#undef str_100139f9
#define str_100139f9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xcb1U)))
#undef str_10013a68
#define str_10013a68 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xd20U)))
#undef str_10013a77
#define str_10013a77 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xd2fU)))
#undef str_10013a8a
#define str_10013a8a (*(char (*)[1])(((uintptr_t)pf_module_state + 0xd42U)))
#undef str_10013ac6
#define str_10013ac6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xd7eU)))
#undef str_10013ae9
#define str_10013ae9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xda1U)))
#undef str_10013b00
#define str_10013b00 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xdb8U)))
#undef str_10013b4b
#define str_10013b4b (*(char (*)[1])(((uintptr_t)pf_module_state + 0xe03U)))
#undef str_10013b70
#define str_10013b70 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xe28U)))
#undef str_10013b85
#define str_10013b85 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xe3dU)))
#undef str_10013ba1
#define str_10013ba1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xe59U)))
#undef str_10013bac
#define str_10013bac (*(char (*)[1])(((uintptr_t)pf_module_state + 0xe64U)))
#undef str_10013bc2
#define str_10013bc2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xe7aU)))
#undef str_10013bd5
#define str_10013bd5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xe8dU)))
#undef str_10013bfb
#define str_10013bfb (*(char (*)[1])(((uintptr_t)pf_module_state + 0xeb3U)))
#define local_5dc (*(uint *)(frame + 132))
#define local_598 (*(uint (*)[14])(frame + 200))
#define local_558 (*(undefined8 *)(frame + 264))
#define local_548 (*(char (*)[768])(frame + 280))
#define local_248 (*(uint *)(frame + 1048))
#define local_244 (*(uint *)(frame + 1052))
#define local_240 (*(uint *)(frame + 1056))
#define local_23c (*(uint *)(frame + 1060))
#define local_238 (*(byte * *)(frame + 1064))
#define local_22c (*(uint *)(frame + 1076))
#define local_228 (*(uint *)(frame + 1080))
#define local_224 (*(uint *)(frame + 1084))
#define local_220 (*(undefined8 *)(frame + 1088))
#define local_214 (*(undefined4 *)(frame + 1100))
#define local_210 (*(undefined4 *)(frame + 1104))
#define local_208 (*(undefined4 *)(frame + 1112))
#define local_204 (*(int *)(frame + 1116))
#define local_200 (*(int *)(frame + 1120))
#define local_1fc (*(int *)(frame + 1124))
#define local_1dc (*(undefined4 *)(frame + 1156))
#define local_1d8 (*(undefined4 *)(frame + 1160))
#define local_1c8 (*(undefined8 *)(frame + 1176))
#define local_1b8 (*(undefined8 *)(frame + 1192))
#define local_1a8 (*(undefined8 *)(frame + 1208))
#define local_198 (*(undefined8 *)(frame + 1224))
#define local_188 (*(undefined8 *)(frame + 1240))
#define local_178 (*(undefined8 *)(frame + 1256))
#define local_168 (*(undefined8 *)(frame + 1272))
#define local_158 (*(undefined8 *)(frame + 1288))
#define local_4c (*(uint *)(frame + 1556))
#define local_44 (*(undefined4 *)(frame + 1564))
#define local_38 (*(int * *)(frame + 1576))
#define abStack_642 (*(byte (*)[102])(frame + 30))
#define uStack_560 (*(undefined8 *)(frame + 256))
#define uStack_550 (*(undefined8 *)(frame + 272))
#define uStack_1d4 (*(undefined4 *)(frame + 1164))
#define iStack_1d0 (*(int *)(frame + 1168))
#define uStack_1cc (*(undefined4 *)(frame + 1172))
#define uStack_1c0 (*(undefined8 *)(frame + 1184))
#define uStack_1b0 (*(undefined8 *)(frame + 1200))
#define uStack_1a0 (*(undefined8 *)(frame + 1216))
#define uStack_190 (*(undefined8 *)(frame + 1232))
#define uStack_180 (*(undefined8 *)(frame + 1248))
#define uStack_170 (*(undefined8 *)(frame + 1264))
#define uStack_160 (*(undefined8 *)(frame + 1280))
#define uStack_150 (*(undefined8 *)(frame + 1296))
#define acStack_46 (*(char (*)[2])(frame + 1562))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000480
 */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int recovered_10000480(int *api)

{
  unsigned char frame[1664] __attribute__((aligned(16))) = {0};

  long lVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  char *pcVar11;
  uint uVar12;
  char *pcVar13;
  ulong uVar14;
  undefined1 uVar15;
  uint uVar16;
  char cVar17;
  byte bVar18;
  uint uVar19;
  ulong uVar20;
  char *pcVar21;
  char cVar22;
  byte bVar23;
  ulong uVar24;
  uint uVar25;
  byte *pbVar26;
  bool bVar27;

  if (api == (int *)0x0) {
    return 0;
  }
  if (*api != 0x54584b57) {
    return 0;
  }
  uVar16 = api[2];
  if (uVar16 < 0x10) {
    return 0;
  }
  local_1d8 = local_1d8 & 0xffffff00;
  uVar9 = 0;
  do {
    uVar8 = uVar9;
    uVar9 = uVar8 + 1;
  } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
  if (uVar8 + 1 < 0x70) {
    cVar17 = 'a';
    pcVar13 = str_10012d78;
    do {
      pcVar13 = pcVar13 + 1;
      *(char *)((long)&local_1d8 + uVar8) = cVar17;
      uVar8 = uVar8 + 1;
      cVar17 = *pcVar13;
      if (cVar17 == '\0') break;
    } while (uVar8 < 0x6f);
  }
  *(undefined1 *)((long)&local_1d8 + uVar8) = 0;
  uVar9 = 0xffffffffffffffff;
  do {
    uVar8 = uVar9;
    uVar9 = uVar8 + 1;
  } while (*(char *)((long)&local_1d8 + uVar8 + 1) != '\0');
  if (uVar8 + 2 < 0x70) {
    *(undefined1 *)((long)&local_1d8 + uVar8 + 1) = 0x3a;
    bVar27 = uVar9 != 0x6e;
    uVar9 = uVar8 + 2;
    if (bVar27) {
      uVar9 = uVar8 + 3;
      *(undefined1 *)((long)&local_1d8 + uVar8 + 2) = 0x20;
      if (uVar9 < 0x6f) {
        uVar9 = uVar8 + 4;
        *(undefined1 *)((long)&local_1d8 + uVar8 + 3) = 0x6b;
        if (uVar9 < 0x6f) {
          uVar9 = uVar8 + 5;
          *(undefined1 *)((long)&uStack_1d4 + uVar8) = 0x41;
          if (uVar9 < 0x6f) {
            uVar9 = uVar8 + 6;
            *(undefined1 *)((long)&uStack_1d4 + uVar8 + 1) = 0x50;
            if (uVar9 < 0x6f) {
              uVar9 = uVar8 + 7;
              *(undefined1 *)((long)&uStack_1d4 + uVar8 + 2) = 0x49;
              if (uVar9 < 0x6f) {
                uVar9 = uVar8 + 8;
                *(undefined1 *)((long)&uStack_1d4 + uVar8 + 3) = 0x20;
                if (uVar9 < 0x6f) {
                  *(undefined1 *)((long)&iStack_1d0 + uVar8) = 0x76;
                  uVar9 = uVar8 + 9;
                }
              }
            }
          }
        }
      }
    }
  }
  *(undefined1 *)((long)&local_1d8 + uVar9) = 0;
  uVar12 = api[1];
  uVar9 = (ulong)uVar12;
  if (uVar9 < 1000000) {
    if (uVar12 == 0) {
      uVar9 = 0;
      do {
        uVar8 = uVar9;
        uVar9 = uVar8 + 1;
      } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
      if (uVar8 + 1 < 0x70) {
        *(undefined2 *)((long)&local_1d8 + uVar8) = 0x30;
      }
    }
    else {
      uVar8 = 0xffffffffffffffff;
      do {
        uVar14 = uVar8;
        uVar12 = (uint)uVar9;
        abStack_642[uVar14 + 3] = (char)uVar9 + (char)(uVar9 / 10) * -10 | 0x30;
        uVar8 = uVar14 + 1;
        if (8 < uVar8) break;
        uVar9 = uVar9 / 10;
      } while (9 < uVar12);
      if ((uVar8 & 1) == 0) {
        uVar9 = 0;
        do {
          uVar20 = uVar9;
          uVar9 = uVar20 + 1;
        } while (*(char *)((long)&local_1d8 + uVar20) != '\0');
        uVar9 = uVar8;
        if (uVar20 + 1 < 0x70) {
          *(byte *)((long)&local_1d8 + uVar20) = abStack_642[uVar14 + 3];
          *(undefined1 *)((long)&local_1d8 + uVar20 + 1) = 0;
        }
      }
      else {
        uVar9 = uVar14 + 2;
      }
      while (uVar8 != 0) {
        uVar8 = 0;
        do {
          uVar14 = uVar8;
          uVar8 = uVar14 + 1;
        } while (*(char *)((long)&local_1d8 + uVar14) != '\0');
        if (uVar14 + 1 < 0x70) {
          *(byte *)((long)&local_1d8 + uVar14) = abStack_642[uVar9 + 1];
          *(undefined1 *)((long)&local_1d8 + uVar14 + 1) = 0;
        }
        pbVar26 = abStack_642 + uVar9;
        uVar9 = uVar9 - 2;
        uVar8 = 0;
        do {
          uVar14 = uVar8;
          uVar8 = uVar14 + 1;
        } while (*(char *)((long)&local_1d8 + uVar14) != '\0');
        uVar8 = uVar9;
        if (uVar14 + 1 < 0x70) {
          *(byte *)((long)&local_1d8 + uVar14) = *pbVar26;
          *(undefined1 *)((long)&local_1d8 + uVar14 + 1) = 0;
        }
      }
    }
  }
  else {
    iVar3 = (int)(uVar9 / 1000);
    uVar7 = uVar12 + iVar3 * -1000;
    uVar8 = 0xffffffffffffffff;
    uVar12 = uVar12 / 1000000;
    do {
      uVar14 = uVar8;
      abStack_642[uVar14 + 3] = (char)uVar12 + (char)(uVar12 / 10) * -10 | 0x30;
      uVar8 = uVar14 + 1;
      if (8 < uVar8) break;
      bVar27 = 9 < uVar12;
      uVar12 = uVar12 / 10;
    } while (bVar27);
    if ((uVar8 & 1) == 0) {
      uVar20 = 0;
      do {
        uVar10 = uVar20;
        uVar20 = uVar10 + 1;
      } while (*(char *)((long)&local_1d8 + uVar10) != '\0');
      uVar20 = uVar8;
      if (uVar10 + 1 < 0x70) {
        *(byte *)((long)&local_1d8 + uVar10) = abStack_642[uVar14 + 3];
        *(undefined1 *)((long)&local_1d8 + uVar10 + 1) = 0;
      }
    }
    else {
      uVar20 = uVar14 + 2;
    }
    while (uVar8 != 0) {
      uVar8 = 0;
      do {
        uVar14 = uVar8;
        uVar8 = uVar14 + 1;
      } while (*(char *)((long)&local_1d8 + uVar14) != '\0');
      if (uVar14 + 1 < 0x70) {
        *(byte *)((long)&local_1d8 + uVar14) = abStack_642[uVar20 + 1];
        *(undefined1 *)((long)&local_1d8 + uVar14 + 1) = 0;
      }
      pbVar26 = abStack_642 + uVar20;
      uVar20 = uVar20 - 2;
      uVar8 = 0;
      do {
        uVar14 = uVar8;
        uVar8 = uVar14 + 1;
      } while (*(char *)((long)&local_1d8 + uVar14) != '\0');
      uVar8 = uVar20;
      if (uVar14 + 1 < 0x70) {
        *(byte *)((long)&local_1d8 + uVar14) = *pbVar26;
        *(undefined1 *)((long)&local_1d8 + uVar14 + 1) = 0;
      }
    }
    uVar8 = 0;
    do {
      uVar14 = uVar8;
      uVar8 = uVar14 + 1;
    } while (*(char *)((long)&local_1d8 + uVar14) != '\0');
    if (uVar8 < 0x70) {
      *(undefined1 *)((long)&local_1d8 + uVar14) = 0x2e;
      uVar14 = uVar8;
    }
    *(undefined1 *)((long)&local_1d8 + uVar14) = 0;
    uVar12 = iVar3 + (int)((uVar9 / 1000) / 1000) * -1000;
    if (uVar12 == 0) {
      uVar9 = 0;
      do {
        uVar8 = uVar9;
        uVar9 = uVar8 + 1;
      } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
      if (uVar8 + 1 < 0x70) {
        *(undefined2 *)((long)&local_1d8 + uVar8) = 0x30;
      }
    }
    else {
      uVar9 = 0xffffffffffffffff;
      do {
        uVar8 = uVar9;
        abStack_642[uVar8 + 3] = (char)uVar12 + (char)(uVar12 / 10) * -10 | 0x30;
        uVar9 = uVar8 + 1;
        if (8 < uVar9) break;
        bVar27 = 9 < uVar12;
        uVar12 = uVar12 / 10;
      } while (bVar27);
      if ((uVar9 & 1) == 0) {
        uVar14 = 0;
        do {
          uVar20 = uVar14;
          uVar14 = uVar20 + 1;
        } while (*(char *)((long)&local_1d8 + uVar20) != '\0');
        uVar14 = uVar9;
        if (uVar20 + 1 < 0x70) {
          *(byte *)((long)&local_1d8 + uVar20) = abStack_642[uVar8 + 3];
          *(undefined1 *)((long)&local_1d8 + uVar20 + 1) = 0;
        }
      }
      else {
        uVar14 = uVar8 + 2;
      }
      while (uVar9 != 0) {
        uVar9 = 0;
        do {
          uVar8 = uVar9;
          uVar9 = uVar8 + 1;
        } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
        if (uVar8 + 1 < 0x70) {
          *(byte *)((long)&local_1d8 + uVar8) = abStack_642[uVar14 + 1];
          *(undefined1 *)((long)&local_1d8 + uVar8 + 1) = 0;
        }
        pbVar26 = abStack_642 + uVar14;
        uVar14 = uVar14 - 2;
        uVar9 = 0;
        do {
          uVar8 = uVar9;
          uVar9 = uVar8 + 1;
        } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
        uVar9 = uVar14;
        if (uVar8 + 1 < 0x70) {
          *(byte *)((long)&local_1d8 + uVar8) = *pbVar26;
          *(undefined1 *)((long)&local_1d8 + uVar8 + 1) = 0;
        }
      }
    }
    if (uVar7 != 0) {
      uVar9 = 0;
      do {
        uVar8 = uVar9;
        uVar9 = uVar8 + 1;
      } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
      if (uVar9 < 0x70) {
        *(undefined1 *)((long)&local_1d8 + uVar8) = 0x2e;
        uVar8 = uVar9;
      }
      *(undefined1 *)((long)&local_1d8 + uVar8) = 0;
      uVar9 = 0xffffffffffffffff;
      do {
        uVar8 = uVar9;
        abStack_642[uVar8 + 3] = (char)uVar7 + (char)(uVar7 / 10) * -10 | 0x30;
        uVar9 = uVar8 + 1;
        if (8 < uVar9) break;
        bVar27 = 9 < uVar7;
        uVar7 = uVar7 / 10;
      } while (bVar27);
      if ((uVar9 & 1) == 0) {
        uVar14 = 0;
        do {
          uVar20 = uVar14;
          uVar14 = uVar20 + 1;
        } while (*(char *)((long)&local_1d8 + uVar20) != '\0');
        uVar14 = uVar9;
        if (uVar20 + 1 < 0x70) {
          *(byte *)((long)&local_1d8 + uVar20) = abStack_642[uVar8 + 3];
          *(undefined1 *)((long)&local_1d8 + uVar20 + 1) = 0;
        }
      }
      else {
        uVar14 = uVar8 + 2;
      }
      while (uVar9 != 0) {
        uVar9 = 0;
        do {
          uVar8 = uVar9;
          uVar9 = uVar8 + 1;
        } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
        if (uVar8 + 1 < 0x70) {
          *(byte *)((long)&local_1d8 + uVar8) = abStack_642[uVar14 + 1];
          *(undefined1 *)((long)&local_1d8 + uVar8 + 1) = 0;
        }
        pbVar26 = abStack_642 + uVar14;
        uVar14 = uVar14 - 2;
        uVar9 = 0;
        do {
          uVar8 = uVar9;
          uVar9 = uVar8 + 1;
        } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
        uVar9 = uVar14;
        if (uVar8 + 1 < 0x70) {
          *(byte *)((long)&local_1d8 + uVar8) = *pbVar26;
          *(undefined1 *)((long)&local_1d8 + uVar8 + 1) = 0;
        }
      }
    }
  }
  uVar9 = 0xffffffffffffffff;
  do {
    uVar8 = uVar9;
    uVar9 = uVar8 + 1;
  } while (*(char *)((long)&local_1d8 + uVar8 + 1) != '\0');
  if (uVar8 + 2 < 0x70) {
    *(undefined1 *)((long)&local_1d8 + uVar8 + 1) = 0x20;
    bVar27 = uVar9 != 0x6e;
    uVar9 = uVar8 + 2;
    if (bVar27) {
      uVar9 = uVar8 + 3;
      *(undefined1 *)((long)&local_1d8 + uVar8 + 2) = 0x72;
      if (uVar9 < 0x6f) {
        uVar9 = uVar8 + 4;
        *(undefined1 *)((long)&local_1d8 + uVar8 + 3) = 0x65;
        if (uVar9 < 0x6f) {
          uVar9 = uVar8 + 5;
          *(undefined1 *)((long)&uStack_1d4 + uVar8) = 0x61;
          if (uVar9 < 0x6f) {
            uVar9 = uVar8 + 6;
            *(undefined1 *)((long)&uStack_1d4 + uVar8 + 1) = 100;
            if (uVar9 < 0x6f) {
              *(undefined1 *)((long)&uStack_1d4 + uVar8 + 2) = 0x79;
              uVar9 = uVar8 + 7;
            }
          }
        }
      }
    }
  }
  *(undefined1 *)((long)&local_1d8 + uVar9) = 0;
  if ((uVar16 < 0x2c) || ((code *)(ulong)(uint)api[10] == (code *)0x0)) {
LAB_10000c66:
    bVar27 = true;
    if ((0x3f < (uint)api[2]) && ((code *)(ulong)(uint)api[0xf] != (code *)0x0)) {
      iVar3 = (*(code *)(ulong)(uint)api[0xf])(abStack_642 + 2);
      bVar27 = iVar3 == 0;
    }
  }
  else {
    (*(code *)(ulong)(uint)api[10])(&local_1d8);
    bVar27 = true;
    if (*api == 0x54584b57) goto LAB_10000c66;
  }
  local_598[0] = 0;
  local_598[1] = 0;
  local_598[2] = 0;
  local_598[3] = 0;
  local_598[4] = 0;
  local_598[5] = 0;
  local_598[6] = 0;
  local_598[7] = 0;
  local_598[8] = 0;
  local_598[9] = 0;
  local_598[10] = 0;
  local_598[0xb] = 0;
  local_598[0xc] = 0;
  local_598[0xd] = 0;
  uStack_560 = 0;
  local_558 = 0;
  uStack_550 = 0;
  pbVar26 = abStack_642 + 2;
  if (bVar27) {
    pbVar26 = (byte *)0x0;
  }
  recovered_10009f30((long)pbVar26,(uint *)0x0,local_548);
  if ((code *)(ulong)(uint)api[3] == (code *)0x0) {
    return 0;
  }
  local_238 = pbVar26;
  iVar3 = (*(code *)(ulong)(uint)api[3])(str_10012d92,str_10012daf,local_548);
  if (iVar3 == 0) {
    return 0;
  }
  if ((code *)(ulong)(uint)api[4] != (code *)0x0) {
    if (local_5dc < 3) {
      local_5dc = 2;
    }
    uVar16 = 0x40;
    if (local_5dc < 0x40) {
      uVar16 = local_5dc;
    }
    if (bVar27) {
      uVar16 = 2;
    }
    (*(code *)(ulong)(uint)api[4])(uVar16,uVar16 << 7);
  }
  if ((code *)(ulong)(uint)api[6] != (code *)0x0) {
    (*(code *)(ulong)(uint)api[6])(0x100,0x200,0x200);
  }
  local_4c = 0;
  local_38 = api;
  if (((*api == 0x54584b57) && (0x57 < (uint)api[2])) &&
     ((code *)(ulong)(uint)api[0x15] != (code *)0x0)) {
    (*(code *)(ulong)(uint)api[0x15])(0x304,1,&local_4c);
    uVar12 = 8;
    uVar16 = 0;
    do {
      local_1d8 = 0;
      if (((*local_38 != 0x54584b57) || ((uint)local_38[2] < 0x58)) ||
         (((code *)(ulong)(uint)local_38[0x15] == (code *)0x0 ||
          (iVar3 = (*(code *)(ulong)(uint)local_38[0x15])(0x304,1,&local_1d8), iVar3 == 0)))) break;
      if ((local_1d8 & 4) == 0) goto LAB_100051c6;
      if (((*local_38 == 0x54584b57) && (0x33 < (uint)local_38[2])) &&
         ((code *)(ulong)(uint)local_38[0xc] != (code *)0x0)) {
        (*(code *)(ulong)(uint)local_38[0xc])(uVar12);
      }
      uVar12 = uVar12 << (uVar12 < 0x1000 && 9 < uVar16);
      uVar16 = uVar16 + 1;
    } while (uVar16 != 0x18);
    uVar12 = 8;
    uVar16 = 0;
    do {
      local_1d8 = 0;
      if ((((*local_38 != 0x54584b57) || ((uint)local_38[2] < 0x58)) ||
          ((code *)(ulong)(uint)local_38[0x15] == (code *)0x0)) ||
         (iVar3 = (*(code *)(ulong)(uint)local_38[0x15])(0x304,1,&local_1d8), iVar3 == 0)) break;
      if ((local_1d8 & 2) == 0) {
        if (((*local_38 == 0x54584b57) && (0x5b < (uint)local_38[2])) &&
           (((code *)(ulong)(uint)local_38[0x16] != (code *)0x0 &&
            (iVar3 = (*(code *)(ulong)(uint)local_38[0x16])(0x304,1,0x10), iVar3 != 0)))) {
          uVar12 = 8;
          uVar16 = 0;
          goto LAB_10005136;
        }
        break;
      }
      if (((*local_38 == 0x54584b57) && (0x33 < (uint)local_38[2])) &&
         ((code *)(ulong)(uint)local_38[0xc] != (code *)0x0)) {
        (*(code *)(ulong)(uint)local_38[0xc])(uVar12);
      }
      uVar12 = uVar12 << (uVar12 < 0x1000 && 9 < uVar16);
      uVar16 = uVar16 + 1;
    } while (uVar16 != 0x18);
    goto LAB_10007dcc;
  }
  uVar9 = 0;
  do {
    uVar8 = uVar9;
    uVar9 = uVar8 + 1;
  } while (local_548[uVar8] != '\0');
  if (uVar8 + 1 < 0x300) {
    cVar17 = ' ';
    pcVar13 = str_1001302d;
    do {
      pcVar13 = pcVar13 + 1;
      local_548[uVar8] = cVar17;
      uVar8 = uVar8 + 1;
      cVar17 = *pcVar13;
      if (cVar17 == '\0') break;
    } while (uVar8 < 0x2ff);
  }
  local_548[uVar8] = '\0';
  goto LAB_10000e04;
  while( true ) {
    if ((local_1d8 & 4) == 0) goto LAB_100051c6;
    if (((*local_38 == 0x54584b57) && (0x33 < (uint)local_38[2])) &&
       ((code *)(ulong)(uint)local_38[0xc] != (code *)0x0)) {
      (*(code *)(ulong)(uint)local_38[0xc])(uVar12);
    }
    uVar12 = uVar12 << (uVar12 < 0x1000 && 9 < uVar16);
    uVar16 = uVar16 + 1;
    if (uVar16 == 0x18) break;
LAB_10005136:
    local_1d8 = 0;
    if (((*local_38 != 0x54584b57) || ((uint)local_38[2] < 0x58)) ||
       (((code *)(ulong)(uint)local_38[0x15] == (code *)0x0 ||
        (iVar3 = (*(code *)(ulong)(uint)local_38[0x15])(0x304,1,&local_1d8), iVar3 == 0)))) break;
  }
  goto LAB_10007dcc;
  while( true ) {
    acStack_46[local_220 + 2] = (byte)local_210;
    bVar27 = 2 < local_220;
    local_220 = local_220 + 1;
    if (local_220 == 4) break;
LAB_10006364:
    local_210 = 0;
    iVar3 = 0;
    while( true ) {
      local_1d8 = 0;
      if (((*local_38 != 0x54584b57) || ((uint)local_38[2] < 0x58)) ||
         (((code *)(ulong)(uint)local_38[0x15] == (code *)0x0 ||
          (iVar5 = (*(code *)(ulong)(uint)local_38[0x15])(0x304,1,&local_1d8), iVar5 == 0))))
      goto LAB_10007d2b;
      if ((local_1d8 & 1) != 0) break;
      if (((*local_38 == 0x54584b57) && (0x33 < (uint)local_38[2])) &&
         ((code *)(ulong)(uint)local_38[0xc] != (code *)0x0)) {
        (*(code *)(ulong)(uint)local_38[0xc])();
      }
      iVar3 = iVar3 + 1;
      if (iVar3 == 0x18) goto LAB_10007d2b;
    }
    if (((*local_38 != 0x54584b57) || ((uint)local_38[2] < 0x58)) ||
       (((code *)(ulong)(uint)local_38[0x15] == (code *)0x0 ||
        (iVar3 = (*(code *)(ulong)(uint)local_38[0x15])(0x300,1,&local_210), iVar3 == 0)))) {
LAB_10007d2b:
      if (!bVar27) goto LAB_10007dcc;
      break;
    }
  }
  uVar9 = 0;
  do {
    uVar8 = uVar9;
    uVar9 = uVar8 + 1;
  } while (local_548[uVar8] != '\0');
  if (uVar8 + 1 < 0x300) {
    cVar17 = ' ';
    pcVar13 = str_10013057;
    do {
      pcVar13 = pcVar13 + 1;
      local_548[uVar8] = cVar17;
      uVar8 = uVar8 + 1;
      cVar17 = *pcVar13;
      if (cVar17 == '\0') break;
    } while (uVar8 < 0x2ff);
  }
  uVar16 = (local_44 >> 8 & 0xff) << 0x10 | local_44 << 0x18 | (local_44 >> 0x10 & 0xff) << 8 |
           local_44 >> 0x18;
  local_548[uVar8] = '\0';
  uVar9 = 0;
  do {
    uVar8 = uVar9;
    uVar9 = uVar8 + 1;
  } while (local_548[uVar8] != '\0');
  if (uVar9 < 0x300) {
    local_548[uVar8] = ' ';
    uVar8 = uVar9;
  }
  local_548[uVar8] = '\0';
  uVar9 = 0xffffffffffffffff;
  do {
    uVar8 = uVar9;
    uVar9 = uVar8 + 1;
  } while (local_548[uVar8 + 1] != '\0');
  if (uVar8 + 2 < 0x300) {
    local_548[uVar8 + 1] = 's';
    bVar27 = uVar9 != 0x2fe;
    uVar9 = uVar8 + 2;
    if (bVar27) {
      uVar9 = uVar8 + 3;
      local_548[uVar8 + 2] = 'm';
      if (uVar9 < 0x2ff) {
        uVar9 = uVar8 + 4;
        local_548[uVar8 + 3] = 'c';
        if (uVar9 < 0x2ff) {
          uVar9 = uVar8 + 5;
          local_548[uVar8 + 4] = 'I';
          if (uVar9 < 0x2ff) {
            local_548[uVar8 + 5] = 'o';
            uVar9 = uVar8 + 6;
          }
        }
      }
    }
  }
  local_548[uVar9] = '\0';
  uVar9 = 0;
  do {
    uVar8 = uVar9;
    uVar9 = uVar8 + 1;
  } while (local_548[uVar8] != '\0');
  if (uVar9 < 0x300) {
    local_548[uVar8] = '=';
    uVar8 = uVar9;
  }
  local_548[uVar8] = '\0';
  uVar9 = 0;
  do {
    uVar8 = uVar9;
    uVar9 = uVar8 + 1;
  } while (local_548[uVar8] != '\0');
  if (uVar8 + 1 < 0x300) {
    (local_548 + uVar8)[0] = '0';
    (local_548 + uVar8)[1] = '\0';
  }
  uVar9 = 0;
  do {
    uVar8 = uVar9;
    uVar9 = uVar8 + 1;
  } while (local_548[uVar8] != '\0');
  if (uVar8 + 1 < 0x300) {
    (local_548 + uVar8)[0] = '0';
    (local_548 + uVar8)[1] = '\0';
  }
  uVar9 = 0;
  do {
    uVar8 = uVar9;
    uVar9 = uVar8 + 1;
  } while (local_548[uVar8] != '\0');
  if (uVar8 + 1 < 0x300) {
    (local_548 + uVar8)[0] = '0';
    (local_548 + uVar8)[1] = '\0';
  }
  uVar9 = 0;
  do {
    uVar8 = uVar9;
    uVar9 = uVar8 + 1;
  } while (local_548[uVar8] != '\0');
  if (uVar8 + 1 < 0x300) {
    (local_548 + uVar8)[0] = '0';
    (local_548 + uVar8)[1] = '\0';
  }
  uVar9 = 0;
  do {
    uVar8 = uVar9;
    uVar9 = uVar8 + 1;
  } while (local_548[uVar8] != '\0');
  if (uVar8 + 1 < 0x300) {
    (local_548 + uVar8)[0] = '0';
    (local_548 + uVar8)[1] = '\0';
  }
  uVar9 = 0;
  do {
    uVar8 = uVar9;
    uVar9 = uVar8 + 1;
  } while (local_548[uVar8] != '\0');
  if (uVar8 + 1 < 0x300) {
    (local_548 + uVar8)[0] = '3';
    (local_548 + uVar8)[1] = '\0';
  }
  uVar9 = 0;
  do {
    uVar8 = uVar9;
    uVar9 = uVar8 + 1;
  } while (local_548[uVar8] != '\0');
  if (uVar8 + 1 < 0x300) {
    (local_548 + uVar8)[0] = '0';
    (local_548 + uVar8)[1] = '\0';
  }
  uVar9 = 0;
  do {
    uVar8 = uVar9;
    uVar9 = uVar8 + 1;
  } while (local_548[uVar8] != '\0');
  if (uVar8 + 1 < 0x300) {
    (local_548 + uVar8)[0] = '0';
    (local_548 + uVar8)[1] = '\0';
  }
  bVar18 = (byte)local_4c;
  uVar9 = 0;
  do {
    uVar8 = uVar9;
    uVar9 = uVar8 + 1;
  } while (local_548[uVar8] != '\0');
  if (uVar9 < 0x300) {
    local_548[uVar8] = ' ';
    uVar8 = uVar9;
  }
  local_548[uVar8] = '\0';
  uVar9 = 0;
  do {
    uVar8 = uVar9;
    uVar9 = uVar8 + 1;
  } while (local_548[uVar8] != '\0');
  if (uVar8 + 1 < 0x300) {
    cVar17 = 's';
    pcVar13 = str_1001304d;
    do {
      pcVar13 = pcVar13 + 1;
      local_548[uVar8] = cVar17;
      uVar8 = uVar8 + 1;
      cVar17 = *pcVar13;
      if (cVar17 == '\0') break;
    } while (uVar8 < 0x2ff);
  }
  local_548[uVar8] = '\0';
  uVar9 = 0;
  do {
    uVar8 = uVar9;
    uVar9 = uVar8 + 1;
  } while (local_548[uVar8] != '\0');
  if (uVar9 < 0x300) {
    local_548[uVar8] = '=';
    uVar8 = uVar9;
  }
  local_548[uVar8] = '\0';
  iVar3 = 8;
  do {
    bVar23 = bVar18 >> ((char)iVar3 * '\x04' - 4U & 0x1f) & 0xf;
    cVar17 = bVar23 + 0x37;
    if (bVar23 < 10) {
      cVar17 = bVar23 + 0x30;
    }
    uVar9 = 0;
    do {
      uVar8 = uVar9;
      uVar9 = uVar8 + 1;
    } while (local_548[uVar8] != '\0');
    if (uVar8 + 1 < 0x300) {
      local_548[uVar8] = cVar17;
      local_548[uVar8 + 1] = '\0';
    }
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  uVar9 = 0;
  do {
    uVar8 = uVar9;
    uVar9 = uVar8 + 1;
  } while (local_548[uVar8] != '\0');
  if (uVar9 < 0x300) {
    local_548[uVar8] = ' ';
    uVar8 = uVar9;
  }
  local_548[uVar8] = '\0';
  uVar9 = 0;
  do {
    uVar8 = uVar9;
    uVar9 = uVar8 + 1;
  } while (local_548[uVar8] != '\0');
  if (uVar8 + 1 < 0x300) {
    cVar17 = 's';
    pcVar13 = str_10013063;
    do {
      pcVar13 = pcVar13 + 1;
      local_548[uVar8] = cVar17;
      uVar8 = uVar8 + 1;
      cVar17 = *pcVar13;
      if (cVar17 == '\0') break;
    } while (uVar8 < 0x2ff);
  }
  local_548[uVar8] = '\0';
  uVar9 = 0;
  do {
    uVar8 = uVar9;
    uVar9 = uVar8 + 1;
  } while (local_548[uVar8] != '\0');
  if (uVar9 < 0x300) {
    local_548[uVar8] = '=';
    uVar8 = uVar9;
  }
  local_548[uVar8] = '\0';
  if (uVar16 == 0) {
    uVar9 = 0;
    do {
      uVar8 = uVar9;
      uVar9 = uVar8 + 1;
    } while (local_548[uVar8] != '\0');
    if (uVar8 + 1 < 0x300) {
      (local_548 + uVar8)[0] = '0';
      (local_548 + uVar8)[1] = '\0';
    }
  }
  else {
    uVar9 = 0xffffffffffffffff;
    uVar12 = uVar16;
    do {
      uVar8 = uVar9;
      *(byte *)((long)&local_1d8 + uVar8 + 1) = (char)uVar12 + (char)(uVar12 / 10) * -10 | 0x30;
      uVar9 = uVar8 + 1;
      if (8 < uVar9) break;
      bVar27 = 9 < uVar12;
      uVar12 = uVar12 / 10;
    } while (bVar27);
    if ((uVar9 & 1) == 0) {
      uVar14 = 0;
      do {
        uVar20 = uVar14;
        uVar14 = uVar20 + 1;
      } while (local_548[uVar20] != '\0');
      uVar14 = uVar9;
      if (uVar20 + 1 < 0x300) {
        local_548[uVar20] = *(char *)((long)&local_1d8 + uVar8 + 1);
        local_548[uVar20 + 1] = '\0';
      }
    }
    else {
      uVar14 = uVar8 + 2;
    }
    while (uVar9 != 0) {
      uVar9 = 0;
      do {
        uVar8 = uVar9;
        uVar9 = uVar8 + 1;
      } while (local_548[uVar8] != '\0');
      if (uVar8 + 1 < 0x300) {
        local_548[uVar8] = *(char *)((long)&local_1dc + uVar14 + 3);
        local_548[uVar8 + 1] = '\0';
      }
      lVar1 = uVar14 + 2;
      uVar14 = uVar14 - 2;
      uVar9 = 0;
      do {
        uVar8 = uVar9;
        uVar9 = uVar8 + 1;
      } while (local_548[uVar8] != '\0');
      uVar9 = uVar14;
      if (uVar8 + 1 < 0x300) {
        local_548[uVar8] = *(char *)((long)&local_1dc + lVar1);
        local_548[uVar8 + 1] = '\0';
      }
    }
  }
  local_1d8 = local_1d8 & 0xffffff00;
  uVar9 = 0;
  do {
    uVar8 = uVar9;
    uVar9 = uVar8 + 1;
  } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
  if (uVar8 + 1 < 0xa0) {
    cVar17 = 'i';
    pcVar13 = str_1001306f;
    do {
      pcVar13 = pcVar13 + 1;
      *(char *)((long)&local_1d8 + uVar8) = cVar17;
      uVar8 = uVar8 + 1;
      cVar17 = *pcVar13;
      if (cVar17 == '\0') break;
    } while (uVar8 < 0x9f);
  }
  *(undefined1 *)((long)&local_1d8 + uVar8) = 0;
  if (uVar16 == 0) {
    uVar9 = 0;
    do {
      uVar8 = uVar9;
      uVar9 = uVar8 + 1;
    } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
    if (uVar8 + 1 < 0xa0) {
      *(undefined2 *)((long)&local_1d8 + uVar8) = 0x30;
    }
  }
  else {
    uVar9 = 0xffffffffffffffff;
    do {
      uVar8 = uVar9;
      *(byte *)((long)&local_210 + uVar8 + 1) = (byte)(uVar16 % 10) | 0x30;
      uVar9 = uVar8 + 1;
      if (8 < uVar9) break;
      bVar27 = 9 < uVar16;
      uVar16 = uVar16 / 10;
    } while (bVar27);
    if ((uVar9 & 1) == 0) {
      uVar14 = 0;
      do {
        uVar20 = uVar14;
        uVar14 = uVar20 + 1;
      } while (*(char *)((long)&local_1d8 + uVar20) != '\0');
      uVar14 = uVar9;
      if (uVar20 + 1 < 0xa0) {
        *(undefined1 *)((long)&local_1d8 + uVar20) = *(undefined1 *)((long)&local_210 + uVar8 + 1);
        *(undefined1 *)((long)&local_1d8 + uVar20 + 1) = 0;
      }
    }
    else {
      uVar14 = uVar8 + 2;
    }
    while (uVar9 != 0) {
      uVar9 = 0;
      do {
        uVar8 = uVar9;
        uVar9 = uVar8 + 1;
      } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
      if (uVar8 + 1 < 0xa0) {
        *(undefined1 *)((long)&local_1d8 + uVar8) = *(undefined1 *)((long)&local_214 + uVar14 + 3);
        *(undefined1 *)((long)&local_1d8 + uVar8 + 1) = 0;
      }
      lVar1 = uVar14 + 2;
      uVar14 = uVar14 - 2;
      uVar9 = 0;
      do {
        uVar8 = uVar9;
        uVar9 = uVar8 + 1;
      } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
      uVar9 = uVar14;
      if (uVar8 + 1 < 0xa0) {
        *(undefined1 *)((long)&local_1d8 + uVar8) = *(undefined1 *)((long)&local_214 + lVar1);
        *(undefined1 *)((long)&local_1d8 + uVar8 + 1) = 0;
      }
    }
  }
  if ((code *)(ulong)(uint)local_38[3] != (code *)0x0) {
    (*(code *)(ulong)(uint)local_38[3])(str_10012dcb,str_1001309d,&local_1d8);
  }
  uStack_560 = CONCAT44(1,(undefined4)uStack_560);
  local_44 = 0;
  local_4c = 0;
  local_224 = 0;
  local_1dc = 0;
  api = local_38;
  goto LAB_10000e30;
LAB_100051c6:
  uVar12 = 8;
  uVar16 = 0;
  do {
    local_1d8 = 0;
    if ((((*local_38 != 0x54584b57) || ((uint)local_38[2] < 0x58)) ||
        ((code *)(ulong)(uint)local_38[0x15] == (code *)0x0)) ||
       (iVar3 = (*(code *)(ulong)(uint)local_38[0x15])(0x304,1,&local_1d8), iVar3 == 0)) break;
    if ((local_1d8 & 2) == 0) {
      if (((((*local_38 == 0x54584b57) && (0x5b < (uint)local_38[2])) &&
           (((code *)(ulong)(uint)local_38[0x16] != (code *)0x0 &&
            ((iVar3 = (*(code *)(ulong)(uint)local_38[0x16])(0x304,1,0x10), iVar3 != 0 &&
             (uVar6 = recovered_10011300(local_38,0x23), (int)uVar6 != 0)))))) &&
          (uVar6 = recovered_10011300(local_38,0x4b), (int)uVar6 != 0)) &&
         (((uVar6 = recovered_10011300(local_38,0x45), (int)uVar6 != 0 &&
           (uVar6 = recovered_10011300(local_38,0x59), (int)uVar6 != 0)) &&
          (uVar6 = recovered_10011300(local_38,4), (int)uVar6 != 0)))) {
        local_220 = 0;
        bVar27 = false;
        goto LAB_10006364;
      }
      break;
    }
    if (((*local_38 == 0x54584b57) && (0x33 < (uint)local_38[2])) &&
       ((code *)(ulong)(uint)local_38[0xc] != (code *)0x0)) {
      (*(code *)(ulong)(uint)local_38[0xc])(uVar12);
    }
    uVar12 = uVar12 << (uVar12 < 0x1000 && 9 < uVar16);
    uVar16 = uVar16 + 1;
  } while (uVar16 != 0x18);
LAB_10007dcc:
  api = local_38;
  uVar9 = 0;
  do {
    uVar8 = uVar9;
    uVar9 = uVar8 + 1;
  } while (local_548[uVar8] != '\0');
  if (uVar8 + 1 < 0x300) {
    cVar17 = ' ';
    pcVar13 = str_10013041;
    do {
      pcVar13 = pcVar13 + 1;
      local_548[uVar8] = cVar17;
      uVar8 = uVar8 + 1;
      cVar17 = *pcVar13;
      if (cVar17 == '\0') break;
    } while (uVar8 < 0x2ff);
  }
  local_548[uVar8] = '\0';
  uVar9 = 0;
  do {
    uVar8 = uVar9;
    uVar9 = uVar8 + 1;
  } while (local_548[uVar8] != '\0');
  if (uVar9 < 0x300) {
    local_548[uVar8] = ' ';
    uVar8 = uVar9;
  }
  local_548[uVar8] = '\0';
  uVar9 = 0;
  do {
    uVar8 = uVar9;
    uVar9 = uVar8 + 1;
  } while (local_548[uVar8] != '\0');
  if (uVar8 + 1 < 0x300) {
    cVar17 = 's';
    pcVar13 = str_1001304d;
    do {
      pcVar13 = pcVar13 + 1;
      local_548[uVar8] = cVar17;
      uVar8 = uVar8 + 1;
      cVar17 = *pcVar13;
      if (cVar17 == '\0') break;
    } while (uVar8 < 0x2ff);
  }
  local_548[uVar8] = '\0';
  uVar9 = 0;
  do {
    uVar8 = uVar9;
    uVar9 = uVar8 + 1;
  } while (local_548[uVar8] != '\0');
  if (uVar9 < 0x300) {
    local_548[uVar8] = '=';
    uVar8 = uVar9;
  }
  local_548[uVar8] = '\0';
  iVar3 = 8;
  do {
    bVar18 = (byte)local_4c >> ((char)iVar3 * '\x04' - 4U & 0x1f) & 0xf;
    cVar17 = bVar18 + 0x37;
    if (bVar18 < 10) {
      cVar17 = bVar18 + 0x30;
    }
    uVar9 = 0;
    do {
      uVar8 = uVar9;
      uVar9 = uVar8 + 1;
    } while (local_548[uVar8] != '\0');
    if (uVar8 + 1 < 0x300) {
      local_548[uVar8] = cVar17;
      local_548[uVar8 + 1] = '\0';
    }
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
LAB_10000e04:
  uStack_560 = uStack_560 & 0xffffffff;
  local_44 = 0;
  local_4c = 0;
  local_224 = 0;
  local_1dc = 0;
LAB_10000e30:
  local_44 = 0;
  local_4c = 0;
  local_1dc = 0;
  local_224 = 0;
  local_228 = 0;
  if (((*api == 0x54584b57) && (0x57 < (uint)api[2])) && ((api[0x15] != 0 && (api[0x16] != 0)))) {
    uVar6 = recovered_100114a0(api,4,(long)&local_44);
    if ((((int)uVar6 == 0) || (uVar6 = recovered_100114a0(api,5,(long)&local_4c), (int)uVar6 == 0))
       || ((uVar6 = recovered_100114a0(api,6,(long)&local_224), (int)uVar6 == 0 ||
           ((local_44 == 0 || (local_44 == 0xff)))))) {
      uVar9 = 0;
      do {
        uVar8 = uVar9;
        uVar9 = uVar8 + 1;
      } while (local_548[uVar8] != '\0');
      if (uVar8 + 1 < 0x300) {
        cVar17 = ' ';
        pcVar13 = str_100130bc;
        do {
          pcVar13 = pcVar13 + 1;
          local_548[uVar8] = cVar17;
          uVar8 = uVar8 + 1;
          cVar17 = *pcVar13;
          if (cVar17 == '\0') break;
        } while (uVar8 < 0x2ff);
      }
      goto LAB_10000fbc;
    }
    recovered_100116f0(api,0x70,(long)&local_1dc);
    recovered_100116f0(api,0x74,(long)&local_228);
    uVar9 = 0;
    do {
      uVar8 = uVar9;
      uVar9 = uVar8 + 1;
    } while (local_548[uVar8] != '\0');
    if (uVar8 + 1 < 0x300) {
      cVar17 = ' ';
      pcVar13 = str_100130c9;
      do {
        pcVar13 = pcVar13 + 1;
        local_548[uVar8] = cVar17;
        uVar8 = uVar8 + 1;
        cVar17 = *pcVar13;
        if (cVar17 == '\0') break;
      } while (uVar8 < 0x2ff);
    }
    local_548[uVar8] = '\0';
    uVar9 = 0;
    do {
      uVar8 = uVar9;
      uVar9 = uVar8 + 1;
    } while (local_548[uVar8] != '\0');
    if (uVar9 < 0x300) {
      local_548[uVar8] = ' ';
      uVar8 = uVar9;
    }
    local_548[uVar8] = '\0';
    uVar9 = 0xffffffffffffffff;
    do {
      uVar8 = uVar9;
      uVar9 = uVar8 + 1;
    } while (local_548[uVar8 + 1] != '\0');
    if (uVar8 + 2 < 0x300) {
      local_548[uVar8 + 1] = 'g';
      bVar27 = uVar9 != 0x2fe;
      uVar9 = uVar8 + 2;
      if (bVar27) {
        uVar9 = uVar8 + 3;
        local_548[uVar8 + 2] = 'm';
        if (uVar9 < 0x2ff) {
          uVar9 = uVar8 + 4;
          local_548[uVar8 + 3] = 'u';
          if (uVar9 < 0x2ff) {
            uVar9 = uVar8 + 5;
            local_548[uVar8 + 4] = 'x';
            if (uVar9 < 0x2ff) {
              uVar9 = uVar8 + 6;
              local_548[uVar8 + 5] = 'I';
              if (uVar9 < 0x2ff) {
                local_548[uVar8 + 6] = 'o';
                uVar9 = uVar8 + 7;
              }
            }
          }
        }
      }
    }
    local_548[uVar9] = '\0';
    uVar9 = 0;
    do {
      uVar8 = uVar9;
      uVar9 = uVar8 + 1;
    } while (local_548[uVar8] != '\0');
    if (uVar9 < 0x300) {
      local_548[uVar8] = '=';
      uVar8 = uVar9;
    }
    local_548[uVar8] = '\0';
    uVar9 = 0;
    do {
      uVar8 = uVar9;
      uVar9 = uVar8 + 1;
    } while (local_548[uVar8] != '\0');
    if (uVar8 + 1 < 0x300) {
      (local_548 + uVar8)[0] = '0';
      (local_548 + uVar8)[1] = '\0';
    }
    uVar9 = 0;
    do {
      uVar8 = uVar9;
      uVar9 = uVar8 + 1;
    } while (local_548[uVar8] != '\0');
    if (uVar8 + 1 < 0x300) {
      (local_548 + uVar8)[0] = '0';
      (local_548 + uVar8)[1] = '\0';
    }
    uVar9 = 0;
    do {
      uVar8 = uVar9;
      uVar9 = uVar8 + 1;
    } while (local_548[uVar8] != '\0');
    if (uVar8 + 1 < 0x300) {
      (local_548 + uVar8)[0] = '0';
      (local_548 + uVar8)[1] = '\0';
    }
    uVar9 = 0;
    do {
      uVar8 = uVar9;
      uVar9 = uVar8 + 1;
    } while (local_548[uVar8] != '\0');
    if (uVar8 + 1 < 0x300) {
      (local_548 + uVar8)[0] = '0';
      (local_548 + uVar8)[1] = '\0';
    }
    uVar9 = 0;
    do {
      uVar8 = uVar9;
      uVar9 = uVar8 + 1;
    } while (local_548[uVar8] != '\0');
    if (uVar8 + 1 < 0x300) {
      (local_548 + uVar8)[0] = '0';
      (local_548 + uVar8)[1] = '\0';
    }
    uVar9 = 0;
    do {
      uVar8 = uVar9;
      uVar9 = uVar8 + 1;
    } while (local_548[uVar8] != '\0');
    if (uVar8 + 1 < 0x300) {
      (local_548 + uVar8)[0] = '7';
      (local_548 + uVar8)[1] = '\0';
    }
    uVar9 = 0;
    do {
      uVar8 = uVar9;
      uVar9 = uVar8 + 1;
    } while (local_548[uVar8] != '\0');
    if (uVar8 + 1 < 0x300) {
      (local_548 + uVar8)[0] = '0';
      (local_548 + uVar8)[1] = '\0';
    }
    uVar9 = 0;
    do {
      uVar8 = uVar9;
      uVar9 = uVar8 + 1;
    } while (local_548[uVar8] != '\0');
    if (uVar8 + 1 < 0x300) {
      (local_548 + uVar8)[0] = '0';
      (local_548 + uVar8)[1] = '\0';
    }
    bVar18 = (byte)local_44;
    uVar8 = (ulong)(byte)local_44;
    uVar9 = 0;
    do {
      uVar14 = uVar9;
      uVar9 = uVar14 + 1;
    } while (local_548[uVar14] != '\0');
    if (uVar9 < 0x300) {
      local_548[uVar14] = ' ';
      uVar14 = uVar9;
    }
    local_548[uVar14] = '\0';
    uVar9 = 0;
    do {
      uVar14 = uVar9;
      uVar9 = uVar14 + 1;
    } while (local_548[uVar14] != '\0');
    if (uVar14 + 1 < 0x300) {
      cVar17 = 'g';
      pcVar13 = &DAT_100130d7;
      do {
        local_548[uVar14] = cVar17;
        uVar14 = uVar14 + 1;
        cVar17 = *pcVar13;
        if (cVar17 == '\0') break;
        pcVar13 = pcVar13 + 1;
      } while (uVar14 < 0x2ff);
    }
    local_548[uVar14] = '\0';
    uVar9 = 0;
    do {
      uVar14 = uVar9;
      uVar9 = uVar14 + 1;
    } while (local_548[uVar14] != '\0');
    if (uVar9 < 0x300) {
      local_548[uVar14] = '=';
      uVar14 = uVar9;
    }
    local_548[uVar14] = '\0';
    if (bVar18 == 0) {
      uVar9 = 0;
      do {
        uVar8 = uVar9;
        uVar9 = uVar8 + 1;
      } while (local_548[uVar8] != '\0');
      if (uVar8 + 1 < 0x300) {
        (local_548 + uVar8)[0] = '0';
        (local_548 + uVar8)[1] = '\0';
      }
      uVar8 = 0;
    }
    else {
      uVar9 = 0xffffffffffffffff;
      uVar14 = uVar8;
      do {
        uVar20 = uVar9;
        uVar16 = (uint)uVar14;
        *(byte *)((long)&local_1d8 + uVar20 + 1) = (char)uVar14 + (char)(uVar14 / 10) * -10 | 0x30;
        uVar9 = uVar20 + 1;
        if (8 < uVar9) break;
        uVar14 = uVar14 / 10;
      } while (9 < uVar16);
      if ((uVar9 & 1) == 0) {
        uVar14 = 0;
        do {
          uVar10 = uVar14;
          uVar14 = uVar10 + 1;
        } while (local_548[uVar10] != '\0');
        uVar14 = uVar9;
        if (uVar10 + 1 < 0x300) {
          local_548[uVar10] = *(char *)((long)&local_1d8 + uVar20 + 1);
          local_548[uVar10 + 1] = '\0';
        }
      }
      else {
        uVar14 = uVar20 + 2;
      }
      while (uVar9 != 0) {
        uVar9 = 0;
        do {
          uVar20 = uVar9;
          uVar9 = uVar20 + 1;
        } while (local_548[uVar20] != '\0');
        if (uVar20 + 1 < 0x300) {
          local_548[uVar20] = *(char *)((long)&local_1dc + uVar14 + 3);
          local_548[uVar20 + 1] = '\0';
        }
        lVar1 = uVar14 + 2;
        uVar14 = uVar14 - 2;
        uVar9 = 0;
        do {
          uVar20 = uVar9;
          uVar9 = uVar20 + 1;
        } while (local_548[uVar20] != '\0');
        uVar9 = uVar14;
        if (uVar20 + 1 < 0x300) {
          local_548[uVar20] = *(char *)((long)&local_1dc + lVar1);
          local_548[uVar20 + 1] = '\0';
        }
      }
    }
    bVar18 = (byte)local_4c;
    uVar14 = (ulong)(byte)local_4c;
    uVar9 = 0;
    do {
      uVar20 = uVar9;
      uVar9 = uVar20 + 1;
    } while (local_548[uVar20] != '\0');
    if (uVar9 < 0x300) {
      local_548[uVar20] = ' ';
      uVar20 = uVar9;
    }
    local_548[uVar20] = '\0';
    uVar9 = 0;
    do {
      uVar20 = uVar9;
      uVar9 = uVar20 + 1;
    } while (local_548[uVar20] != '\0');
    if (uVar20 + 1 < 0x300) {
      cVar17 = 'g';
      pcVar13 = str_100130e0;
      do {
        pcVar13 = pcVar13 + 1;
        local_548[uVar20] = cVar17;
        uVar20 = uVar20 + 1;
        cVar17 = *pcVar13;
        if (cVar17 == '\0') break;
      } while (uVar20 < 0x2ff);
    }
    local_548[uVar20] = '\0';
    uVar9 = 0;
    do {
      uVar20 = uVar9;
      uVar9 = uVar20 + 1;
    } while (local_548[uVar20] != '\0');
    if (uVar9 < 0x300) {
      local_548[uVar20] = '=';
      uVar20 = uVar9;
    }
    local_548[uVar20] = '\0';
    if (bVar18 == 0) {
      uVar9 = 0;
      do {
        uVar14 = uVar9;
        uVar9 = uVar14 + 1;
      } while (local_548[uVar14] != '\0');
      if (uVar14 + 1 < 0x300) {
        (local_548 + uVar14)[0] = '0';
        (local_548 + uVar14)[1] = '\0';
      }
      uVar14 = 0;
    }
    else {
      uVar9 = 0xffffffffffffffff;
      uVar20 = uVar14;
      do {
        uVar10 = uVar9;
        uVar16 = (uint)uVar20;
        *(byte *)((long)&local_1d8 + uVar10 + 1) = (char)uVar20 + (char)(uVar20 / 10) * -10 | 0x30;
        uVar9 = uVar10 + 1;
        if (8 < uVar9) break;
        uVar20 = uVar20 / 10;
      } while (9 < uVar16);
      if ((uVar9 & 1) == 0) {
        uVar20 = 0;
        do {
          uVar24 = uVar20;
          uVar20 = uVar24 + 1;
        } while (local_548[uVar24] != '\0');
        uVar20 = uVar9;
        if (uVar24 + 1 < 0x300) {
          local_548[uVar24] = *(char *)((long)&local_1d8 + uVar10 + 1);
          local_548[uVar24 + 1] = '\0';
        }
      }
      else {
        uVar20 = uVar10 + 2;
      }
      while (uVar9 != 0) {
        uVar9 = 0;
        do {
          uVar10 = uVar9;
          uVar9 = uVar10 + 1;
        } while (local_548[uVar10] != '\0');
        if (uVar10 + 1 < 0x300) {
          local_548[uVar10] = *(char *)((long)&local_1dc + uVar20 + 3);
          local_548[uVar10 + 1] = '\0';
        }
        lVar1 = uVar20 + 2;
        uVar20 = uVar20 - 2;
        uVar9 = 0;
        do {
          uVar10 = uVar9;
          uVar9 = uVar10 + 1;
        } while (local_548[uVar10] != '\0');
        uVar9 = uVar20;
        if (uVar10 + 1 < 0x300) {
          local_548[uVar10] = *(char *)((long)&local_1dc + lVar1);
          local_548[uVar10 + 1] = '\0';
        }
      }
    }
    cVar17 = (char)local_224;
    uVar16 = local_224 & 0xff;
    uVar9 = 0;
    do {
      uVar20 = uVar9;
      uVar9 = uVar20 + 1;
    } while (local_548[uVar20] != '\0');
    if (uVar9 < 0x300) {
      local_548[uVar20] = ' ';
      uVar20 = uVar9;
    }
    local_548[uVar20] = '\0';
    uVar9 = 0;
    do {
      uVar20 = uVar9;
      uVar9 = uVar20 + 1;
    } while (local_548[uVar20] != '\0');
    if (uVar20 + 1 < 0x300) {
      cVar22 = 'g';
      pcVar13 = str_100130ea;
      do {
        pcVar13 = pcVar13 + 1;
        local_548[uVar20] = cVar22;
        uVar20 = uVar20 + 1;
        cVar22 = *pcVar13;
        if (cVar22 == '\0') break;
      } while (uVar20 < 0x2ff);
    }
    local_548[uVar20] = '\0';
    uVar9 = 0;
    do {
      uVar20 = uVar9;
      uVar9 = uVar20 + 1;
    } while (local_548[uVar20] != '\0');
    if (uVar9 < 0x300) {
      local_548[uVar20] = '=';
      uVar20 = uVar9;
    }
    local_548[uVar20] = '\0';
    if (cVar17 == '\0') {
      uVar9 = 0;
      do {
        uVar20 = uVar9;
        uVar9 = uVar20 + 1;
      } while (local_548[uVar20] != '\0');
      if (uVar20 + 1 < 0x300) {
        (local_548 + uVar20)[0] = '0';
        (local_548 + uVar20)[1] = '\0';
      }
      uVar16 = 0;
    }
    else {
      uVar9 = 0xffffffffffffffff;
      uVar12 = uVar16;
      do {
        uVar20 = uVar9;
        *(byte *)((long)&local_1d8 + uVar20 + 1) = (char)uVar12 + (char)(uVar12 / 10) * -10 | 0x30;
        uVar9 = uVar20 + 1;
        if (8 < uVar9) break;
        bVar27 = 9 < uVar12;
        uVar12 = uVar12 / 10;
      } while (bVar27);
      if ((uVar9 & 1) == 0) {
        uVar10 = 0;
        do {
          uVar24 = uVar10;
          uVar10 = uVar24 + 1;
        } while (local_548[uVar24] != '\0');
        uVar10 = uVar9;
        if (uVar24 + 1 < 0x300) {
          local_548[uVar24] = *(char *)((long)&local_1d8 + uVar20 + 1);
          local_548[uVar24 + 1] = '\0';
        }
      }
      else {
        uVar10 = uVar20 + 2;
      }
      while (uVar9 != 0) {
        uVar9 = 0;
        do {
          uVar20 = uVar9;
          uVar9 = uVar20 + 1;
        } while (local_548[uVar20] != '\0');
        if (uVar20 + 1 < 0x300) {
          local_548[uVar20] = *(char *)((long)&local_1dc + uVar10 + 3);
          local_548[uVar20 + 1] = '\0';
        }
        lVar1 = uVar10 + 2;
        uVar10 = uVar10 - 2;
        uVar9 = 0;
        do {
          uVar20 = uVar9;
          uVar9 = uVar20 + 1;
        } while (local_548[uVar20] != '\0');
        uVar9 = uVar10;
        if (uVar20 + 1 < 0x300) {
          local_548[uVar20] = *(char *)((long)&local_1dc + lVar1);
          local_548[uVar20 + 1] = '\0';
        }
      }
    }
    uVar12 = local_1dc;
    uVar9 = 0;
    do {
      uVar20 = uVar9;
      uVar9 = uVar20 + 1;
    } while (local_548[uVar20] != '\0');
    if (uVar9 < 0x300) {
      local_548[uVar20] = ' ';
      uVar20 = uVar9;
    }
    local_548[uVar20] = '\0';
    uVar9 = 0;
    do {
      uVar20 = uVar9;
      uVar9 = uVar20 + 1;
    } while (local_548[uVar20] != '\0');
    if (uVar20 + 1 < 0x300) {
      cVar17 = 'g';
      pcVar13 = str_100130f6;
      do {
        pcVar13 = pcVar13 + 1;
        local_548[uVar20] = cVar17;
        uVar20 = uVar20 + 1;
        cVar17 = *pcVar13;
        if (cVar17 == '\0') break;
      } while (uVar20 < 0x2ff);
    }
    local_548[uVar20] = '\0';
    uVar9 = 0;
    do {
      uVar20 = uVar9;
      uVar9 = uVar20 + 1;
    } while (local_548[uVar20] != '\0');
    if (uVar9 < 0x300) {
      local_548[uVar20] = '=';
      uVar20 = uVar9;
    }
    local_548[uVar20] = '\0';
    iVar3 = 8;
    do {
      uVar7 = uVar12 >> ((char)iVar3 * '\x04' - 4U & 0x1f) & 0xf;
      cVar17 = (char)uVar7;
      cVar22 = cVar17 + '7';
      if (uVar7 < 10) {
        cVar22 = cVar17 + '0';
      }
      uVar9 = 0;
      do {
        uVar20 = uVar9;
        uVar9 = uVar20 + 1;
      } while (local_548[uVar20] != '\0');
      if (uVar20 + 1 < 0x300) {
        local_548[uVar20] = cVar22;
        local_548[uVar20 + 1] = '\0';
      }
      uVar7 = local_228;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    uVar9 = 0;
    do {
      uVar20 = uVar9;
      uVar9 = uVar20 + 1;
    } while (local_548[uVar20] != '\0');
    if (uVar9 < 0x300) {
      local_548[uVar20] = ' ';
      uVar20 = uVar9;
    }
    local_548[uVar20] = '\0';
    uVar9 = 0;
    do {
      uVar20 = uVar9;
      uVar9 = uVar20 + 1;
    } while (local_548[uVar20] != '\0');
    if (uVar20 + 1 < 0x300) {
      cVar17 = 'g';
      pcVar13 = str_10013108;
      do {
        pcVar13 = pcVar13 + 1;
        local_548[uVar20] = cVar17;
        uVar20 = uVar20 + 1;
        cVar17 = *pcVar13;
        if (cVar17 == '\0') break;
      } while (uVar20 < 0x2ff);
    }
    local_548[uVar20] = '\0';
    uVar9 = 0;
    do {
      uVar20 = uVar9;
      uVar9 = uVar20 + 1;
    } while (local_548[uVar20] != '\0');
    if (uVar9 < 0x300) {
      local_548[uVar20] = '=';
      uVar20 = uVar9;
    }
    local_548[uVar20] = '\0';
    iVar3 = 8;
    do {
      uVar25 = uVar7 >> ((char)iVar3 * '\x04' - 4U & 0x1f) & 0xf;
      cVar17 = (char)uVar25;
      cVar22 = cVar17 + '7';
      if (uVar25 < 10) {
        cVar22 = cVar17 + '0';
      }
      uVar9 = 0;
      do {
        uVar20 = uVar9;
        uVar9 = uVar20 + 1;
      } while (local_548[uVar20] != '\0');
      if (uVar20 + 1 < 0x300) {
        local_548[uVar20] = cVar22;
        local_548[uVar20 + 1] = '\0';
      }
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    local_1d8 = local_1d8 & 0xffffff00;
    uVar9 = 0;
    do {
      uVar20 = uVar9;
      uVar9 = uVar20 + 1;
    } while (*(char *)((long)&local_1d8 + uVar20) != '\0');
    if (uVar20 + 1 < 0xc0) {
      cVar17 = 'i';
      pcVar13 = str_10013117;
      do {
        pcVar13 = pcVar13 + 1;
        *(char *)((long)&local_1d8 + uVar20) = cVar17;
        uVar20 = uVar20 + 1;
        cVar17 = *pcVar13;
        if (cVar17 == '\0') break;
      } while (uVar20 < 0xbf);
    }
    *(undefined1 *)((long)&local_1d8 + uVar20) = 0;
    if ((int)uVar8 == 0) {
      uVar9 = 0;
      do {
        uVar8 = uVar9;
        uVar9 = uVar8 + 1;
      } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
      if (uVar8 + 1 < 0xc0) {
        *(undefined2 *)((long)&local_1d8 + uVar8) = 0x30;
      }
    }
    else {
      uVar9 = 0xffffffffffffffff;
      do {
        uVar20 = uVar9;
        uVar7 = (uint)uVar8;
        *(byte *)((long)&local_210 + uVar20 + 1) = (char)uVar8 + (char)(uVar8 / 10) * -10 | 0x30;
        uVar9 = uVar20 + 1;
        if (8 < uVar9) break;
        uVar8 = uVar8 / 10;
      } while (9 < uVar7);
      if ((uVar9 & 1) == 0) {
        uVar8 = 0;
        do {
          uVar10 = uVar8;
          uVar8 = uVar10 + 1;
        } while (*(char *)((long)&local_1d8 + uVar10) != '\0');
        uVar8 = uVar9;
        if (uVar10 + 1 < 0xc0) {
          *(undefined1 *)((long)&local_1d8 + uVar10) =
               *(undefined1 *)((long)&local_210 + uVar20 + 1);
          *(undefined1 *)((long)&local_1d8 + uVar10 + 1) = 0;
        }
      }
      else {
        uVar8 = uVar20 + 2;
      }
      while (uVar9 != 0) {
        uVar9 = 0;
        do {
          uVar20 = uVar9;
          uVar9 = uVar20 + 1;
        } while (*(char *)((long)&local_1d8 + uVar20) != '\0');
        if (uVar20 + 1 < 0xc0) {
          *(undefined1 *)((long)&local_1d8 + uVar20) = *(undefined1 *)((long)&local_214 + uVar8 + 3)
          ;
          *(undefined1 *)((long)&local_1d8 + uVar20 + 1) = 0;
        }
        lVar1 = uVar8 + 2;
        uVar8 = uVar8 - 2;
        uVar9 = 0;
        do {
          uVar20 = uVar9;
          uVar9 = uVar20 + 1;
        } while (*(char *)((long)&local_1d8 + uVar20) != '\0');
        uVar9 = uVar8;
        if (uVar20 + 1 < 0xc0) {
          *(undefined1 *)((long)&local_1d8 + uVar20) = *(undefined1 *)((long)&local_214 + lVar1);
          *(undefined1 *)((long)&local_1d8 + uVar20 + 1) = 0;
        }
      }
    }
    uVar9 = 0;
    do {
      uVar8 = uVar9;
      uVar9 = uVar8 + 1;
    } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
    if (uVar9 < 0xc0) {
      *(undefined1 *)((long)&local_1d8 + uVar8) = 0x2e;
      uVar8 = uVar9;
    }
    *(undefined1 *)((long)&local_1d8 + uVar8) = 0;
    if ((int)uVar14 == 0) {
      uVar9 = 0;
      do {
        uVar8 = uVar9;
        uVar9 = uVar8 + 1;
      } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
      if (uVar8 + 1 < 0xc0) {
        *(undefined2 *)((long)&local_1d8 + uVar8) = 0x30;
      }
    }
    else {
      uVar9 = 0xffffffffffffffff;
      do {
        uVar8 = uVar9;
        uVar7 = (uint)uVar14;
        *(byte *)((long)&local_210 + uVar8 + 1) = (char)uVar14 + (char)(uVar14 / 10) * -10 | 0x30;
        uVar9 = uVar8 + 1;
        if (8 < uVar9) break;
        uVar14 = uVar14 / 10;
      } while (9 < uVar7);
      if ((uVar9 & 1) == 0) {
        uVar14 = 0;
        do {
          uVar20 = uVar14;
          uVar14 = uVar20 + 1;
        } while (*(char *)((long)&local_1d8 + uVar20) != '\0');
        uVar14 = uVar9;
        if (uVar20 + 1 < 0xc0) {
          *(undefined1 *)((long)&local_1d8 + uVar20) = *(undefined1 *)((long)&local_210 + uVar8 + 1)
          ;
          *(undefined1 *)((long)&local_1d8 + uVar20 + 1) = 0;
        }
      }
      else {
        uVar14 = uVar8 + 2;
      }
      while (uVar9 != 0) {
        uVar9 = 0;
        do {
          uVar8 = uVar9;
          uVar9 = uVar8 + 1;
        } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
        if (uVar8 + 1 < 0xc0) {
          *(undefined1 *)((long)&local_1d8 + uVar8) = *(undefined1 *)((long)&local_214 + uVar14 + 3)
          ;
          *(undefined1 *)((long)&local_1d8 + uVar8 + 1) = 0;
        }
        lVar1 = uVar14 + 2;
        uVar14 = uVar14 - 2;
        uVar9 = 0;
        do {
          uVar8 = uVar9;
          uVar9 = uVar8 + 1;
        } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
        uVar9 = uVar14;
        if (uVar8 + 1 < 0xc0) {
          *(undefined1 *)((long)&local_1d8 + uVar8) = *(undefined1 *)((long)&local_214 + lVar1);
          *(undefined1 *)((long)&local_1d8 + uVar8 + 1) = 0;
        }
      }
    }
    uVar9 = 0;
    do {
      uVar8 = uVar9;
      uVar9 = uVar8 + 1;
    } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
    if (uVar9 < 0xc0) {
      *(undefined1 *)((long)&local_1d8 + uVar8) = 0x2e;
      uVar8 = uVar9;
    }
    *(undefined1 *)((long)&local_1d8 + uVar8) = 0;
    if (uVar16 == 0) {
      uVar9 = 0;
      do {
        uVar8 = uVar9;
        uVar9 = uVar8 + 1;
      } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
      if (uVar8 + 1 < 0xc0) {
        *(undefined2 *)((long)&local_1d8 + uVar8) = 0x30;
      }
    }
    else {
      uVar9 = 0xffffffffffffffff;
      do {
        uVar8 = uVar9;
        *(byte *)((long)&local_210 + uVar8 + 1) = (byte)(uVar16 % 10) | 0x30;
        uVar9 = uVar8 + 1;
        if (8 < uVar9) break;
        bVar27 = 9 < uVar16;
        uVar16 = uVar16 / 10;
      } while (bVar27);
      if ((uVar9 & 1) == 0) {
        uVar14 = 0;
        do {
          uVar20 = uVar14;
          uVar14 = uVar20 + 1;
        } while (*(char *)((long)&local_1d8 + uVar20) != '\0');
        uVar14 = uVar9;
        if (uVar20 + 1 < 0xc0) {
          *(undefined1 *)((long)&local_1d8 + uVar20) = *(undefined1 *)((long)&local_210 + uVar8 + 1)
          ;
          *(undefined1 *)((long)&local_1d8 + uVar20 + 1) = 0;
        }
      }
      else {
        uVar14 = uVar8 + 2;
      }
      while (uVar9 != 0) {
        uVar9 = 0;
        do {
          uVar8 = uVar9;
          uVar9 = uVar8 + 1;
        } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
        if (uVar8 + 1 < 0xc0) {
          *(undefined1 *)((long)&local_1d8 + uVar8) = *(undefined1 *)((long)&local_214 + uVar14 + 3)
          ;
          *(undefined1 *)((long)&local_1d8 + uVar8 + 1) = 0;
        }
        lVar1 = uVar14 + 2;
        uVar14 = uVar14 - 2;
        uVar9 = 0;
        do {
          uVar8 = uVar9;
          uVar9 = uVar8 + 1;
        } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
        uVar9 = uVar14;
        if (uVar8 + 1 < 0xc0) {
          *(undefined1 *)((long)&local_1d8 + uVar8) = *(undefined1 *)((long)&local_214 + lVar1);
          *(undefined1 *)((long)&local_1d8 + uVar8 + 1) = 0;
        }
      }
    }
    uVar9 = 0;
    do {
      uVar8 = uVar9;
      uVar9 = uVar8 + 1;
    } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
    if (uVar9 < 0xc0) {
      *(undefined1 *)((long)&local_1d8 + uVar8) = 0x20;
      uVar8 = uVar9;
    }
    *(undefined1 *)((long)&local_1d8 + uVar8) = 0;
    uVar9 = 0;
    do {
      uVar8 = uVar9;
      uVar9 = uVar8 + 1;
    } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
    if (uVar8 + 1 < 0xc0) {
      cVar17 = 'm';
      pcVar13 = str_10013135;
      do {
        pcVar13 = pcVar13 + 1;
        *(char *)((long)&local_1d8 + uVar8) = cVar17;
        uVar8 = uVar8 + 1;
        cVar17 = *pcVar13;
        if (cVar17 == '\0') break;
      } while (uVar8 < 0xbf);
    }
    *(undefined1 *)((long)&local_1d8 + uVar8) = 0;
    uVar9 = 0;
    do {
      uVar8 = uVar9;
      uVar9 = uVar8 + 1;
    } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
    if (uVar9 < 0xc0) {
      *(undefined1 *)((long)&local_1d8 + uVar8) = 0x3d;
      uVar8 = uVar9;
    }
    *(undefined1 *)((long)&local_1d8 + uVar8) = 0;
    iVar3 = 8;
    do {
      uVar16 = uVar12 >> ((char)iVar3 * '\x04' - 4U & 0x1f) & 0xf;
      cVar17 = (char)uVar16;
      uVar9 = 0;
      do {
        uVar8 = uVar9;
        uVar9 = uVar8 + 1;
      } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
      if (uVar8 + 1 < 0xc0) {
        cVar22 = cVar17 + '7';
        if (uVar16 < 10) {
          cVar22 = cVar17 + '0';
        }
        *(char *)((long)&local_1d8 + uVar8) = cVar22;
        *(undefined1 *)((long)&local_1d8 + uVar8 + 1) = 0;
      }
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    if ((code *)(ulong)(uint)api[3] != (code *)0x0) {
      (*(code *)(ulong)(uint)api[3])(str_10012dec,str_10013143,&local_1d8);
    }
    uVar4 = 1;
  }
  else {
    uVar9 = 0;
    do {
      uVar8 = uVar9;
      uVar9 = uVar8 + 1;
    } while (local_548[uVar8] != '\0');
    if (uVar8 + 1 < 0x300) {
      cVar17 = ' ';
      pcVar13 = str_100130a7;
      do {
        pcVar13 = pcVar13 + 1;
        local_548[uVar8] = cVar17;
        uVar8 = uVar8 + 1;
        cVar17 = *pcVar13;
        if (cVar17 == '\0') break;
      } while (uVar8 < 0x2ff);
    }
LAB_10000fbc:
    local_548[uVar8] = '\0';
    uVar4 = 0;
  }
  local_558 = CONCAT44(PF_PART4(local_558, 4),uVar4);
  local_4c = 0;
  local_224 = 0;
  local_1dc = 0;
  local_228 = 0;
  local_248 = 0;
  local_244 = 0;
  if ((((((*api == 0x54584b57) && (0x7f < (uint)api[2])) &&
        ((code *)(ulong)(uint)api[0x1f] != (code *)0x0)) &&
       ((iVar3 = (*(code *)(ulong)(uint)api[0x1f])(0,0,&local_1d8), iVar3 != 0 &&
        (uStack_1d4 == 0x756e6547)))) && (uStack_1cc == 0x49656e69)) &&
     (((iStack_1d0 == 0x6c65746e && (*api == 0x54584b57)) &&
      ((0x7f < (uint)api[2] && ((code *)(ulong)(uint)api[0x1f] != (code *)0x0)))))) {
    iVar3 = (*(code *)(ulong)(uint)api[0x1f])(1,0,&local_210);
    if (iVar3 == 0) goto LAB_10001181;
    uVar12 = local_210 >> 8 & 0xf;
    uVar16 = (local_210 >> 0x14 & 0xff) + 0xf;
    if (uVar12 != 0xf) {
      uVar16 = uVar12;
    }
    uVar9 = (ulong)uVar16;
    uVar7 = local_210 >> 0xc & 0xf0;
    uVar12 = 0;
    if (uVar16 == 0xf) {
      uVar12 = uVar7;
    }
    uVar8 = 0;
    if (uVar16 == 6) {
      uVar12 = uVar7;
    }
    do {
      uVar14 = uVar8;
      uVar8 = uVar14 + 1;
    } while (local_548[uVar14] != '\0');
    if (uVar14 + 1 < 0x300) {
      cVar17 = ' ';
      pcVar13 = str_1001315f;
      do {
        pcVar13 = pcVar13 + 1;
        local_548[uVar14] = cVar17;
        uVar14 = uVar14 + 1;
        cVar17 = *pcVar13;
        if (cVar17 == '\0') break;
      } while (uVar14 < 0x2ff);
    }
    uVar7 = local_210 & 0xf;
    uVar12 = uVar12 | local_210 >> 4 & 0xf;
    local_548[uVar14] = '\0';
    uVar8 = 0;
    do {
      uVar14 = uVar8;
      uVar8 = uVar14 + 1;
    } while (local_548[uVar14] != '\0');
    if (uVar8 < 0x300) {
      local_548[uVar14] = ' ';
      uVar14 = uVar8;
    }
    local_548[uVar14] = '\0';
    uVar8 = 0;
    do {
      uVar14 = uVar8;
      uVar8 = uVar14 + 1;
    } while (local_548[uVar14] != '\0');
    if (uVar14 + 1 < 0x300) {
      cVar17 = 'c';
      pcVar13 = str_1001316f;
      do {
        pcVar13 = pcVar13 + 1;
        local_548[uVar14] = cVar17;
        uVar14 = uVar14 + 1;
        cVar17 = *pcVar13;
        if (cVar17 == '\0') break;
      } while (uVar14 < 0x2ff);
    }
    local_548[uVar14] = '\0';
    uVar8 = 0;
    do {
      uVar14 = uVar8;
      uVar8 = uVar14 + 1;
    } while (local_548[uVar14] != '\0');
    if (uVar8 < 0x300) {
      local_548[uVar14] = '=';
      uVar14 = uVar8;
    }
    local_548[uVar14] = '\0';
    if (uVar16 == 0) {
      uVar8 = 0;
      do {
        uVar14 = uVar8;
        uVar8 = uVar14 + 1;
      } while (local_548[uVar14] != '\0');
      if (uVar14 + 1 < 0x300) {
        (local_548 + uVar14)[0] = '0';
        (local_548 + uVar14)[1] = '\0';
      }
    }
    else {
      uVar8 = 0xffffffffffffffff;
      uVar14 = (ulong)uVar16;
      do {
        uVar20 = uVar8;
        uVar25 = (uint)uVar14;
        *(byte *)((long)&local_1d8 + uVar20 + 1) = (char)uVar14 + (char)(uVar14 / 10) * -10 | 0x30;
        uVar8 = uVar20 + 1;
        if (8 < uVar8) break;
        uVar14 = uVar14 / 10;
      } while (9 < uVar25);
      if ((uVar8 & 1) == 0) {
        uVar14 = 0;
        do {
          uVar10 = uVar14;
          uVar14 = uVar10 + 1;
        } while (local_548[uVar10] != '\0');
        uVar14 = uVar8;
        if (uVar10 + 1 < 0x300) {
          local_548[uVar10] = *(char *)((long)&local_1d8 + uVar20 + 1);
          local_548[uVar10 + 1] = '\0';
        }
      }
      else {
        uVar14 = uVar20 + 2;
      }
      while (uVar8 != 0) {
        uVar8 = 0;
        do {
          uVar20 = uVar8;
          uVar8 = uVar20 + 1;
        } while (local_548[uVar20] != '\0');
        if (uVar20 + 1 < 0x300) {
          local_548[uVar20] = *(char *)((long)&local_1dc + uVar14 + 3);
          local_548[uVar20 + 1] = '\0';
        }
        lVar1 = uVar14 + 2;
        uVar8 = uVar14 - 2;
        uVar14 = 0;
        do {
          uVar20 = uVar14;
          uVar14 = uVar20 + 1;
        } while (local_548[uVar20] != '\0');
        uVar14 = uVar8;
        if (uVar20 + 1 < 0x300) {
          local_548[uVar20] = *(char *)((long)&local_1dc + lVar1);
          local_548[uVar20 + 1] = '\0';
        }
      }
    }
    uVar8 = 0;
    do {
      uVar14 = uVar8;
      uVar8 = uVar14 + 1;
    } while (local_548[uVar14] != '\0');
    if (uVar8 < 0x300) {
      local_548[uVar14] = ' ';
      uVar14 = uVar8;
    }
    local_548[uVar14] = '\0';
    uVar8 = 0xffffffffffffffff;
    do {
      uVar14 = uVar8;
      uVar8 = uVar14 + 1;
    } while (local_548[uVar14 + 1] != '\0');
    if (uVar14 + 2 < 0x300) {
      local_548[uVar14 + 1] = 'c';
      bVar27 = uVar8 != 0x2fe;
      uVar8 = uVar14 + 2;
      if (bVar27) {
        uVar8 = uVar14 + 3;
        local_548[uVar14 + 2] = 'p';
        if (uVar8 < 0x2ff) {
          uVar8 = uVar14 + 4;
          local_548[uVar14 + 3] = 'u';
          if (uVar8 < 0x2ff) {
            uVar8 = uVar14 + 5;
            local_548[uVar14 + 4] = 'M';
            if (uVar8 < 0x2ff) {
              uVar8 = uVar14 + 6;
              local_548[uVar14 + 5] = 'o';
              if (uVar8 < 0x2ff) {
                uVar8 = uVar14 + 7;
                local_548[uVar14 + 6] = 'd';
                if (uVar8 < 0x2ff) {
                  uVar8 = uVar14 + 8;
                  local_548[uVar14 + 7] = 'e';
                  if (uVar8 < 0x2ff) {
                    local_548[uVar14 + 8] = 'l';
                    uVar8 = uVar14 + 9;
                  }
                }
              }
            }
          }
        }
      }
    }
    local_548[uVar8] = '\0';
    uVar8 = 0;
    do {
      uVar14 = uVar8;
      uVar8 = uVar14 + 1;
    } while (local_548[uVar14] != '\0');
    if (uVar8 < 0x300) {
      local_548[uVar14] = '=';
      uVar14 = uVar8;
    }
    local_548[uVar14] = '\0';
    if (uVar12 == 0) {
      uVar8 = 0;
      do {
        uVar14 = uVar8;
        uVar8 = uVar14 + 1;
      } while (local_548[uVar14] != '\0');
      if (uVar14 + 1 < 0x300) {
        (local_548 + uVar14)[0] = '0';
        (local_548 + uVar14)[1] = '\0';
      }
    }
    else {
      uVar8 = 0xffffffffffffffff;
      uVar25 = uVar12;
      do {
        uVar14 = uVar8;
        *(byte *)((long)&local_1d8 + uVar14 + 1) = (char)uVar25 + (char)(uVar25 / 10) * -10 | 0x30;
        uVar8 = uVar14 + 1;
        if (8 < uVar8) break;
        bVar27 = 9 < uVar25;
        uVar25 = uVar25 / 10;
      } while (bVar27);
      if ((uVar8 & 1) == 0) {
        uVar20 = 0;
        do {
          uVar10 = uVar20;
          uVar20 = uVar10 + 1;
        } while (local_548[uVar10] != '\0');
        uVar20 = uVar8;
        if (uVar10 + 1 < 0x300) {
          local_548[uVar10] = *(char *)((long)&local_1d8 + uVar14 + 1);
          local_548[uVar10 + 1] = '\0';
        }
      }
      else {
        uVar20 = uVar14 + 2;
      }
      while (uVar8 != 0) {
        uVar8 = 0;
        do {
          uVar14 = uVar8;
          uVar8 = uVar14 + 1;
        } while (local_548[uVar14] != '\0');
        if (uVar14 + 1 < 0x300) {
          local_548[uVar14] = *(char *)((long)&local_1dc + uVar20 + 3);
          local_548[uVar14 + 1] = '\0';
        }
        lVar1 = uVar20 + 2;
        uVar20 = uVar20 - 2;
        uVar8 = 0;
        do {
          uVar14 = uVar8;
          uVar8 = uVar14 + 1;
        } while (local_548[uVar14] != '\0');
        uVar8 = uVar20;
        if (uVar14 + 1 < 0x300) {
          local_548[uVar14] = *(char *)((long)&local_1dc + lVar1);
          local_548[uVar14 + 1] = '\0';
        }
      }
    }
    uVar8 = 0;
    do {
      uVar14 = uVar8;
      uVar8 = uVar14 + 1;
    } while (local_548[uVar14] != '\0');
    if (uVar8 < 0x300) {
      local_548[uVar14] = ' ';
      uVar14 = uVar8;
    }
    local_548[uVar14] = '\0';
    uVar8 = 0;
    do {
      uVar14 = uVar8;
      uVar8 = uVar14 + 1;
    } while (local_548[uVar14] != '\0');
    if (uVar14 + 1 < 0x300) {
      cVar17 = 'c';
      pcVar13 = str_10013179;
      do {
        pcVar13 = pcVar13 + 1;
        local_548[uVar14] = cVar17;
        uVar14 = uVar14 + 1;
        cVar17 = *pcVar13;
        if (cVar17 == '\0') break;
      } while (uVar14 < 0x2ff);
    }
    local_548[uVar14] = '\0';
    uVar8 = 0;
    do {
      uVar14 = uVar8;
      uVar8 = uVar14 + 1;
    } while (local_548[uVar14] != '\0');
    if (uVar8 < 0x300) {
      local_548[uVar14] = '=';
      uVar14 = uVar8;
    }
    local_548[uVar14] = '\0';
    if (uVar7 == 0) {
      uVar8 = 0;
      do {
        uVar14 = uVar8;
        uVar8 = uVar14 + 1;
      } while (local_548[uVar14] != '\0');
      if (uVar14 + 1 < 0x300) {
        (local_548 + uVar14)[0] = '0';
        (local_548 + uVar14)[1] = '\0';
      }
    }
    else {
      uVar8 = 0xffffffffffffffff;
      do {
        uVar14 = uVar8;
        *(byte *)((long)&local_1d8 + uVar14 + 1) = (char)uVar7 + (char)(uVar7 / 10) * -10 | 0x30;
        uVar8 = uVar14 + 1;
        if (8 < uVar8) break;
        bVar27 = 9 < uVar7;
        uVar7 = uVar7 / 10;
      } while (bVar27);
      if ((uVar8 & 1) == 0) {
        uVar20 = 0;
        do {
          uVar10 = uVar20;
          uVar20 = uVar10 + 1;
        } while (local_548[uVar10] != '\0');
        uVar20 = uVar8;
        if (uVar10 + 1 < 0x300) {
          local_548[uVar10] = *(char *)((long)&local_1d8 + uVar14 + 1);
          local_548[uVar10 + 1] = '\0';
        }
      }
      else {
        uVar20 = uVar14 + 2;
      }
      while (uVar8 != 0) {
        uVar8 = 0;
        do {
          uVar14 = uVar8;
          uVar8 = uVar14 + 1;
        } while (local_548[uVar14] != '\0');
        if (uVar14 + 1 < 0x300) {
          local_548[uVar14] = *(char *)((long)&local_1dc + uVar20 + 3);
          local_548[uVar14 + 1] = '\0';
        }
        lVar1 = uVar20 + 2;
        uVar20 = uVar20 - 2;
        uVar8 = 0;
        do {
          uVar14 = uVar8;
          uVar8 = uVar14 + 1;
        } while (local_548[uVar14] != '\0');
        if (uVar14 + 1 < 0x300) {
          local_548[uVar14] = *(char *)((long)&local_1dc + lVar1);
          local_548[uVar14 + 1] = '\0';
        }
        uVar8 = uVar20;
      }
    }
    if (((((char)local_208 < '\0') && (*local_38 == 0x54584b57)) && (0xb3 < (uint)local_38[2])) &&
       (((code *)(ulong)(uint)local_38[0x2b] != (code *)0x0 && (local_38[0x2c] != 0)))) {
      iVar3 = (*(code *)(ulong)(uint)local_38[0x2b])(0x1a0,&local_4c,&local_224);
      if (iVar3 == 0) {
        uVar8 = 0;
        do {
          uVar14 = uVar8;
          uVar8 = uVar14 + 1;
        } while (local_548[uVar14] != '\0');
        if (uVar14 + 1 < 0x300) {
          cVar17 = ' ';
          pcVar13 = str_100131e6;
          do {
            pcVar13 = pcVar13 + 1;
            local_548[uVar14] = cVar17;
            uVar14 = uVar14 + 1;
            cVar17 = *pcVar13;
            if (cVar17 == '\0') break;
          } while (uVar14 < 0x2ff);
        }
        local_548[uVar14] = '\0';
        local_1d8 = local_1d8 & 0xffffff00;
        uVar8 = 0;
        do {
          uVar14 = uVar8;
          uVar8 = uVar14 + 1;
        } while (*(char *)((long)&local_1d8 + uVar14) != '\0');
        if (uVar14 + 1 < 0xa0) {
          cVar17 = 'v';
          pcVar13 = str_10013201;
          do {
            pcVar13 = pcVar13 + 1;
            *(char *)((long)&local_1d8 + uVar14) = cVar17;
            uVar14 = uVar14 + 1;
            cVar17 = *pcVar13;
            if (cVar17 == '\0') break;
          } while (uVar14 < 0x9f);
        }
        *(undefined1 *)((long)&local_1d8 + uVar14) = 0;
        uVar8 = 0;
        do {
          uVar14 = uVar8;
          uVar8 = uVar14 + 1;
        } while (*(char *)((long)&local_1d8 + uVar14) != '\0');
        if (uVar8 < 0xa0) {
          *(undefined1 *)((long)&local_1d8 + uVar14) = 0x20;
          uVar14 = uVar8;
        }
        *(undefined1 *)((long)&local_1d8 + uVar14) = 0;
        uVar8 = 0xffffffffffffffff;
        do {
          uVar14 = uVar8;
          uVar8 = uVar14 + 1;
        } while (*(char *)((long)&local_1d8 + uVar14 + 1) != '\0');
        if (uVar14 + 2 < 0xa0) {
          *(undefined1 *)((long)&local_1d8 + uVar14 + 1) = 0x66;
          bVar27 = uVar8 != 0x9e;
          uVar8 = uVar14 + 2;
          if (bVar27) {
            uVar8 = uVar14 + 3;
            *(undefined1 *)((long)&local_1d8 + uVar14 + 2) = 0x61;
            if (uVar8 < 0x9f) {
              uVar8 = uVar14 + 4;
              *(undefined1 *)((long)&local_1d8 + uVar14 + 3) = 0x6d;
              if (uVar8 < 0x9f) {
                uVar8 = uVar14 + 5;
                *(undefined1 *)((long)&uStack_1d4 + uVar14) = 0x69;
                if (uVar8 < 0x9f) {
                  uVar8 = uVar14 + 6;
                  *(undefined1 *)((long)&uStack_1d4 + uVar14 + 1) = 0x6c;
                  if (uVar8 < 0x9f) {
                    *(undefined1 *)((long)&uStack_1d4 + uVar14 + 2) = 0x79;
                    uVar8 = uVar14 + 7;
                  }
                }
              }
            }
          }
        }
        *(undefined1 *)((long)&local_1d8 + uVar8) = 0;
        uVar8 = 0;
        do {
          uVar14 = uVar8;
          uVar8 = uVar14 + 1;
        } while (*(char *)((long)&local_1d8 + uVar14) != '\0');
        if (uVar8 < 0xa0) {
          *(undefined1 *)((long)&local_1d8 + uVar14) = 0x3d;
          uVar14 = uVar8;
        }
        *(undefined1 *)((long)&local_1d8 + uVar14) = 0;
        if (uVar16 == 0) {
          uVar9 = 0;
          do {
            uVar8 = uVar9;
            uVar9 = uVar8 + 1;
          } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
          if (uVar8 + 1 < 0xa0) {
            *(undefined2 *)((long)&local_1d8 + uVar8) = 0x30;
          }
        }
        else {
          uVar8 = 0xffffffffffffffff;
          do {
            uVar14 = uVar8;
            uVar16 = (uint)uVar9;
            acStack_46[uVar14 + 3] = (char)uVar9 + (char)(uVar9 / 10) * -10 | 0x30;
            uVar8 = uVar14 + 1;
            if (8 < uVar8) break;
            uVar9 = uVar9 / 10;
          } while (9 < uVar16);
          if ((uVar8 & 1) == 0) {
            uVar9 = 0;
            do {
              uVar20 = uVar9;
              uVar9 = uVar20 + 1;
            } while (*(char *)((long)&local_1d8 + uVar20) != '\0');
            uVar9 = uVar8;
            if (uVar20 + 1 < 0xa0) {
              *(char *)((long)&local_1d8 + uVar20) = acStack_46[uVar14 + 3];
              *(undefined1 *)((long)&local_1d8 + uVar20 + 1) = 0;
            }
          }
          else {
            uVar9 = uVar14 + 2;
          }
          while (uVar8 != 0) {
            uVar8 = 0;
            do {
              uVar14 = uVar8;
              uVar8 = uVar14 + 1;
            } while (*(char *)((long)&local_1d8 + uVar14) != '\0');
            if (uVar14 + 1 < 0xa0) {
              *(char *)((long)&local_1d8 + uVar14) = acStack_46[uVar9 + 1];
              *(undefined1 *)((long)&local_1d8 + uVar14 + 1) = 0;
            }
            pcVar13 = acStack_46 + uVar9;
            uVar9 = uVar9 - 2;
            uVar8 = 0;
            do {
              uVar14 = uVar8;
              uVar8 = uVar14 + 1;
            } while (*(char *)((long)&local_1d8 + uVar14) != '\0');
            uVar8 = uVar9;
            if (uVar14 + 1 < 0xa0) {
              *(char *)((long)&local_1d8 + uVar14) = *pcVar13;
              *(undefined1 *)((long)&local_1d8 + uVar14 + 1) = 0;
            }
          }
        }
        uVar9 = 0;
        do {
          uVar8 = uVar9;
          uVar9 = uVar8 + 1;
        } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
        if (uVar9 < 0xa0) {
          *(undefined1 *)((long)&local_1d8 + uVar8) = 0x20;
          uVar8 = uVar9;
        }
        *(undefined1 *)((long)&local_1d8 + uVar8) = 0;
        uVar9 = 0xffffffffffffffff;
        do {
          uVar8 = uVar9;
          uVar9 = uVar8 + 1;
        } while (*(char *)((long)&local_1d8 + uVar8 + 1) != '\0');
        if (uVar8 + 2 < 0xa0) {
          *(undefined1 *)((long)&local_1d8 + uVar8 + 1) = 0x6d;
          bVar27 = uVar9 != 0x9e;
          uVar9 = uVar8 + 2;
          if (bVar27) {
            uVar9 = uVar8 + 3;
            *(undefined1 *)((long)&local_1d8 + uVar8 + 2) = 0x6f;
            if (uVar9 < 0x9f) {
              uVar9 = uVar8 + 4;
              *(undefined1 *)((long)&local_1d8 + uVar8 + 3) = 100;
              if (uVar9 < 0x9f) {
                uVar9 = uVar8 + 5;
                *(undefined1 *)((long)&uStack_1d4 + uVar8) = 0x65;
                if (uVar9 < 0x9f) {
                  *(undefined1 *)((long)&uStack_1d4 + uVar8 + 1) = 0x6c;
                  uVar9 = uVar8 + 6;
                }
              }
            }
          }
        }
        *(undefined1 *)((long)&local_1d8 + uVar9) = 0;
        uVar9 = 0;
        do {
          uVar8 = uVar9;
          uVar9 = uVar8 + 1;
        } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
        if (uVar9 < 0xa0) {
          *(undefined1 *)((long)&local_1d8 + uVar8) = 0x3d;
          uVar8 = uVar9;
        }
        *(undefined1 *)((long)&local_1d8 + uVar8) = 0;
        if (uVar12 == 0) {
          uVar9 = 0;
          do {
            uVar8 = uVar9;
            uVar9 = uVar8 + 1;
          } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
          if (uVar8 + 1 < 0xa0) {
            *(undefined2 *)((long)&local_1d8 + uVar8) = 0x30;
          }
        }
        else {
          uVar9 = 0xffffffffffffffff;
          do {
            uVar8 = uVar9;
            acStack_46[uVar8 + 3] = (char)uVar12 + (char)(uVar12 / 10) * -10 | 0x30;
            uVar9 = uVar8 + 1;
            if (8 < uVar9) break;
            bVar27 = 9 < uVar12;
            uVar12 = uVar12 / 10;
          } while (bVar27);
          if ((uVar9 & 1) == 0) {
            uVar14 = 0;
            do {
              uVar20 = uVar14;
              uVar14 = uVar20 + 1;
            } while (*(char *)((long)&local_1d8 + uVar20) != '\0');
            uVar14 = uVar9;
            if (uVar20 + 1 < 0xa0) {
              *(char *)((long)&local_1d8 + uVar20) = acStack_46[uVar8 + 3];
              *(undefined1 *)((long)&local_1d8 + uVar20 + 1) = 0;
            }
          }
          else {
            uVar14 = uVar8 + 2;
          }
          while (uVar9 != 0) {
            uVar9 = 0;
            do {
              uVar8 = uVar9;
              uVar9 = uVar8 + 1;
            } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
            if (uVar8 + 1 < 0xa0) {
              *(char *)((long)&local_1d8 + uVar8) = acStack_46[uVar14 + 1];
              *(undefined1 *)((long)&local_1d8 + uVar8 + 1) = 0;
            }
            pcVar13 = acStack_46 + uVar14;
            uVar14 = uVar14 - 2;
            uVar9 = 0;
            do {
              uVar8 = uVar9;
              uVar9 = uVar8 + 1;
            } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
            uVar9 = uVar14;
            if (uVar8 + 1 < 0xa0) {
              *(char *)((long)&local_1d8 + uVar8) = *pcVar13;
              *(undefined1 *)((long)&local_1d8 + uVar8 + 1) = 0;
            }
          }
        }
        if ((code *)(ulong)(uint)local_38[3] != (code *)0x0) {
          (*(code *)(ulong)(uint)local_38[3])(str_10012e0e,str_100131ce,&local_1d8);
        }
        iVar3 = 0;
      }
      else {
        iVar3 = 0;
        if ((local_4c & 0x110000) == 0) {
          iVar3 = 0;
          if (*local_38 == 0x54584b57) {
            uVar7 = local_38[2];
            iVar3 = 0;
            if (0xb3 < uVar7) {
              iVar3 = 0;
              if ((code *)(ulong)(uint)local_38[0x2c] != (code *)0x0) {
                uVar7 = local_4c | 0x10000;
                iVar5 = (*(code *)(ulong)(uint)local_38[0x2c])(0x1a0,uVar7,local_224);
                if (iVar5 != 0) {
                  local_4c = uVar7;
                  iVar3 = 1;
                }
              }
              goto LAB_10006a93;
            }
            goto LAB_100073c0;
          }
LAB_10007613:
          uVar8 = 0;
          do {
            uVar14 = uVar8;
            uVar8 = uVar14 + 1;
          } while (local_548[uVar14] != '\0');
          if (uVar14 + 1 < 0x300) {
            cVar17 = ' ';
            pcVar13 = str_1001322d;
            do {
              pcVar13 = pcVar13 + 1;
              local_548[uVar14] = cVar17;
              uVar14 = uVar14 + 1;
              cVar17 = *pcVar13;
              if (cVar17 == '\0') break;
            } while (uVar14 < 0x2ff);
          }
          local_548[uVar14] = '\0';
          local_1d8 = local_1d8 & 0xffffff00;
          uVar8 = 0;
          do {
            uVar14 = uVar8;
            uVar8 = uVar14 + 1;
          } while (*(char *)((long)&local_1d8 + uVar14) != '\0');
          if (uVar14 + 1 < 0xc0) {
            cVar17 = 'v';
            pcVar13 = str_1001324d;
            do {
              pcVar13 = pcVar13 + 1;
              *(char *)((long)&local_1d8 + uVar14) = cVar17;
              uVar14 = uVar14 + 1;
              cVar17 = *pcVar13;
              if (cVar17 == '\0') break;
            } while (uVar14 < 0xbf);
          }
          *(undefined1 *)((long)&local_1d8 + uVar14) = 0;
          uVar8 = 0;
          do {
            uVar14 = uVar8;
            uVar8 = uVar14 + 1;
          } while (*(char *)((long)&local_1d8 + uVar14) != '\0');
          if (uVar8 < 0xc0) {
            *(undefined1 *)((long)&local_1d8 + uVar14) = 0x20;
            uVar14 = uVar8;
          }
          *(undefined1 *)((long)&local_1d8 + uVar14) = 0;
          uVar8 = 0xffffffffffffffff;
          do {
            uVar14 = uVar8;
            uVar8 = uVar14 + 1;
          } while (*(char *)((long)&local_1d8 + uVar14 + 1) != '\0');
          if (uVar14 + 2 < 0xc0) {
            *(undefined1 *)((long)&local_1d8 + uVar14 + 1) = 0x66;
            bVar27 = uVar8 != 0xbe;
            uVar8 = uVar14 + 2;
            if (bVar27) {
              uVar8 = uVar14 + 3;
              *(undefined1 *)((long)&local_1d8 + uVar14 + 2) = 0x61;
              if (uVar8 < 0xbf) {
                uVar8 = uVar14 + 4;
                *(undefined1 *)((long)&local_1d8 + uVar14 + 3) = 0x6d;
                if (uVar8 < 0xbf) {
                  uVar8 = uVar14 + 5;
                  *(undefined1 *)((long)&uStack_1d4 + uVar14) = 0x69;
                  if (uVar8 < 0xbf) {
                    uVar8 = uVar14 + 6;
                    *(undefined1 *)((long)&uStack_1d4 + uVar14 + 1) = 0x6c;
                    if (uVar8 < 0xbf) {
                      *(undefined1 *)((long)&uStack_1d4 + uVar14 + 2) = 0x79;
                      uVar8 = uVar14 + 7;
                    }
                  }
                }
              }
            }
          }
          *(undefined1 *)((long)&local_1d8 + uVar8) = 0;
          uVar8 = 0;
          do {
            uVar14 = uVar8;
            uVar8 = uVar14 + 1;
          } while (*(char *)((long)&local_1d8 + uVar14) != '\0');
          if (uVar8 < 0xc0) {
            *(undefined1 *)((long)&local_1d8 + uVar14) = 0x3d;
            uVar14 = uVar8;
          }
          *(undefined1 *)((long)&local_1d8 + uVar14) = 0;
          if (uVar16 == 0) {
            uVar9 = 0;
            do {
              uVar8 = uVar9;
              uVar9 = uVar8 + 1;
            } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
            if (uVar8 + 1 < 0xc0) {
              *(undefined2 *)((long)&local_1d8 + uVar8) = 0x30;
            }
          }
          else {
            uVar8 = 0xffffffffffffffff;
            do {
              uVar14 = uVar8;
              uVar16 = (uint)uVar9;
              acStack_46[uVar14 + 3] = (char)uVar9 + (char)(uVar9 / 10) * -10 | 0x30;
              uVar8 = uVar14 + 1;
              if (8 < uVar8) break;
              uVar9 = uVar9 / 10;
            } while (9 < uVar16);
            if ((uVar8 & 1) == 0) {
              uVar9 = 0;
              do {
                uVar20 = uVar9;
                uVar9 = uVar20 + 1;
              } while (*(char *)((long)&local_1d8 + uVar20) != '\0');
              uVar9 = uVar8;
              if (uVar20 + 1 < 0xc0) {
                *(char *)((long)&local_1d8 + uVar20) = acStack_46[uVar14 + 3];
                *(undefined1 *)((long)&local_1d8 + uVar20 + 1) = 0;
              }
            }
            else {
              uVar9 = uVar14 + 2;
            }
            while (uVar8 != 0) {
              uVar8 = 0;
              do {
                uVar14 = uVar8;
                uVar8 = uVar14 + 1;
              } while (*(char *)((long)&local_1d8 + uVar14) != '\0');
              if (uVar14 + 1 < 0xc0) {
                *(char *)((long)&local_1d8 + uVar14) = acStack_46[uVar9 + 1];
                *(undefined1 *)((long)&local_1d8 + uVar14 + 1) = 0;
              }
              pcVar13 = acStack_46 + uVar9;
              uVar9 = uVar9 - 2;
              uVar8 = 0;
              do {
                uVar14 = uVar8;
                uVar8 = uVar14 + 1;
              } while (*(char *)((long)&local_1d8 + uVar14) != '\0');
              uVar8 = uVar9;
              if (uVar14 + 1 < 0xc0) {
                *(char *)((long)&local_1d8 + uVar14) = *pcVar13;
                *(undefined1 *)((long)&local_1d8 + uVar14 + 1) = 0;
              }
            }
          }
          uVar9 = 0;
          do {
            uVar8 = uVar9;
            uVar9 = uVar8 + 1;
          } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
          if (uVar9 < 0xc0) {
            *(undefined1 *)((long)&local_1d8 + uVar8) = 0x20;
            uVar8 = uVar9;
          }
          *(undefined1 *)((long)&local_1d8 + uVar8) = 0;
          uVar9 = 0xffffffffffffffff;
          do {
            uVar8 = uVar9;
            uVar9 = uVar8 + 1;
          } while (*(char *)((long)&local_1d8 + uVar8 + 1) != '\0');
          if (uVar8 + 2 < 0xc0) {
            *(undefined1 *)((long)&local_1d8 + uVar8 + 1) = 0x6d;
            bVar27 = uVar9 != 0xbe;
            uVar9 = uVar8 + 2;
            if (bVar27) {
              uVar9 = uVar8 + 3;
              *(undefined1 *)((long)&local_1d8 + uVar8 + 2) = 0x6f;
              if (uVar9 < 0xbf) {
                uVar9 = uVar8 + 4;
                *(undefined1 *)((long)&local_1d8 + uVar8 + 3) = 100;
                if (uVar9 < 0xbf) {
                  uVar9 = uVar8 + 5;
                  *(undefined1 *)((long)&uStack_1d4 + uVar8) = 0x65;
                  if (uVar9 < 0xbf) {
                    *(undefined1 *)((long)&uStack_1d4 + uVar8 + 1) = 0x6c;
                    uVar9 = uVar8 + 6;
                  }
                }
              }
            }
          }
          *(undefined1 *)((long)&local_1d8 + uVar9) = 0;
          uVar9 = 0;
          do {
            uVar8 = uVar9;
            uVar9 = uVar8 + 1;
          } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
          if (uVar9 < 0xc0) {
            *(undefined1 *)((long)&local_1d8 + uVar8) = 0x3d;
            uVar8 = uVar9;
          }
          *(undefined1 *)((long)&local_1d8 + uVar8) = 0;
          if (uVar12 == 0) {
            uVar9 = 0;
            do {
              uVar8 = uVar9;
              uVar9 = uVar8 + 1;
            } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
            if (uVar8 + 1 < 0xc0) {
              *(undefined2 *)((long)&local_1d8 + uVar8) = 0x30;
            }
          }
          else {
            uVar9 = 0xffffffffffffffff;
            do {
              uVar8 = uVar9;
              acStack_46[uVar8 + 3] = (char)uVar12 + (char)(uVar12 / 10) * -10 | 0x30;
              uVar9 = uVar8 + 1;
              if (8 < uVar9) break;
              bVar27 = 9 < uVar12;
              uVar12 = uVar12 / 10;
            } while (bVar27);
            if ((uVar9 & 1) == 0) {
              uVar14 = 0;
              do {
                uVar20 = uVar14;
                uVar14 = uVar20 + 1;
              } while (*(char *)((long)&local_1d8 + uVar20) != '\0');
              uVar14 = uVar9;
              if (uVar20 + 1 < 0xc0) {
                *(char *)((long)&local_1d8 + uVar20) = acStack_46[uVar8 + 3];
                *(undefined1 *)((long)&local_1d8 + uVar20 + 1) = 0;
              }
            }
            else {
              uVar14 = uVar8 + 2;
            }
            while (uVar9 != 0) {
              uVar9 = 0;
              do {
                uVar8 = uVar9;
                uVar9 = uVar8 + 1;
              } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
              if (uVar8 + 1 < 0xc0) {
                *(char *)((long)&local_1d8 + uVar8) = acStack_46[uVar14 + 1];
                *(undefined1 *)((long)&local_1d8 + uVar8 + 1) = 0;
              }
              pcVar13 = acStack_46 + uVar14;
              uVar14 = uVar14 - 2;
              uVar9 = 0;
              do {
                uVar8 = uVar9;
                uVar9 = uVar8 + 1;
              } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
              uVar9 = uVar14;
              if (uVar8 + 1 < 0xc0) {
                *(char *)((long)&local_1d8 + uVar8) = *pcVar13;
                *(undefined1 *)((long)&local_1d8 + uVar8 + 1) = 0;
              }
            }
          }
          uVar16 = local_4c;
          uVar9 = 0;
          do {
            uVar8 = uVar9;
            uVar9 = uVar8 + 1;
          } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
          if (uVar9 < 0xc0) {
            *(undefined1 *)((long)&local_1d8 + uVar8) = 0x20;
            uVar8 = uVar9;
          }
          *(undefined1 *)((long)&local_1d8 + uVar8) = 0;
          uVar9 = 0;
          do {
            uVar8 = uVar9;
            uVar9 = uVar8 + 1;
          } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
          if (uVar8 + 1 < 0xc0) {
            cVar17 = 'm';
            pcVar13 = str_1001327e;
            do {
              pcVar13 = pcVar13 + 1;
              *(char *)((long)&local_1d8 + uVar8) = cVar17;
              uVar8 = uVar8 + 1;
              cVar17 = *pcVar13;
              if (cVar17 == '\0') break;
            } while (uVar8 < 0xbf);
          }
          *(undefined1 *)((long)&local_1d8 + uVar8) = 0;
          uVar9 = 0;
          do {
            uVar8 = uVar9;
            uVar9 = uVar8 + 1;
          } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
          if (uVar9 < 0xc0) {
            *(undefined1 *)((long)&local_1d8 + uVar8) = 0x3d;
            uVar8 = uVar9;
          }
          *(undefined1 *)((long)&local_1d8 + uVar8) = 0;
          iVar5 = 8;
          do {
            uVar12 = uVar16 >> ((char)iVar5 * '\x04' - 4U & 0x1f) & 0xf;
            cVar17 = (char)uVar12;
            uVar9 = 0;
            do {
              uVar8 = uVar9;
              uVar9 = uVar8 + 1;
            } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
            if (uVar8 + 1 < 0xc0) {
              cVar22 = cVar17 + '7';
              if (uVar12 < 10) {
                cVar22 = cVar17 + '0';
              }
              *(char *)((long)&local_1d8 + uVar8) = cVar22;
              *(undefined1 *)((long)&local_1d8 + uVar8 + 1) = 0;
            }
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
        }
        else {
LAB_10006a93:
          if (*local_38 != 0x54584b57) goto LAB_10007613;
          uVar7 = local_38[2];
LAB_100073c0:
          if ((((uVar7 < 0xb0) || ((code *)(ulong)(uint)local_38[0x2b] == (code *)0x0)) ||
              (iVar5 = (*(code *)(ulong)(uint)local_38[0x2b])(0x199,&local_1dc,&local_228),
              iVar5 == 0)) ||
             (((*local_38 != 0x54584b57 || ((uint)local_38[2] < 0xb0)) ||
              (((code *)(ulong)(uint)local_38[0x2b] == (code *)0x0 ||
               (iVar5 = (*(code *)(ulong)(uint)local_38[0x2b])(0x198,&local_248,&local_244),
               iVar5 == 0)))))) goto LAB_10007613;
          uVar7 = local_248 >> 8 & 0xff;
          local_214 = local_1dc >> 8 & 0xff;
          local_220 = CONCAT44(PF_PART4(local_220, 4),local_244 >> 8) & 0xffffffff000000ff;
          local_240 = ((int)(local_248 << 0x11) >> 0x1f & 5U) + (local_248 >> 8 & 0x3f) * 10;
          local_23c = ((int)(local_1dc << 0x11) >> 0x1f & 5U) + (local_1dc >> 8 & 0x3f) * 10;
          local_22c = ((int)(local_244 << 0x11) >> 0x1f & 5U) + (local_244 >> 8 & 0x3f) * 10;
          if (((-1 < (short)local_244) && ((uint)local_220 != 0)) &&
             ((uVar7 != 0 && (local_240 <= local_22c)))) {
            uVar25 = local_248 & 0xff;
            if ((local_1dc & 0xff) != 0) {
              uVar25 = local_1dc & 0xff;
            }
            uVar25 = (uint)local_220 << 8 | local_1dc & 0xffff0000 | uVar25;
            if ((((uVar25 != local_1dc) && (*local_38 == 0x54584b57)) && (0xb3 < (uint)local_38[2]))
               && (((code *)(ulong)(uint)local_38[0x2c] != (code *)0x0 &&
                   (iVar5 = (*(code *)(ulong)(uint)local_38[0x2c])(0x199,uVar25,local_228),
                   iVar5 != 0)))) {
              local_1dc = uVar25;
              iVar3 = 1;
              local_214 = (uint)local_220;
              local_23c = local_22c;
            }
          }
          uVar8 = 0;
          do {
            uVar14 = uVar8;
            uVar8 = uVar14 + 1;
          } while (local_548[uVar14] != '\0');
          if (uVar14 + 1 < 0x300) {
            cVar17 = ' ';
            pcVar13 = str_1001328b;
            do {
              pcVar13 = pcVar13 + 1;
              local_548[uVar14] = cVar17;
              uVar14 = uVar14 + 1;
              cVar17 = *pcVar13;
              if (cVar17 == '\0') break;
            } while (uVar14 < 0x2ff);
          }
          local_548[uVar14] = '\0';
          uVar25 = local_4c;
          uVar8 = 0;
          do {
            uVar14 = uVar8;
            uVar8 = uVar14 + 1;
          } while (local_548[uVar14] != '\0');
          if (uVar8 < 0x300) {
            local_548[uVar14] = ' ';
            uVar14 = uVar8;
          }
          local_548[uVar14] = '\0';
          uVar8 = 0;
          do {
            uVar14 = uVar8;
            uVar8 = uVar14 + 1;
          } while (local_548[uVar14] != '\0');
          if (uVar14 + 1 < 0x300) {
            cVar17 = 'm';
            pcVar13 = str_1001327e;
            do {
              pcVar13 = pcVar13 + 1;
              local_548[uVar14] = cVar17;
              uVar14 = uVar14 + 1;
              cVar17 = *pcVar13;
              if (cVar17 == '\0') break;
            } while (uVar14 < 0x2ff);
          }
          local_548[uVar14] = '\0';
          uVar8 = 0;
          do {
            uVar14 = uVar8;
            uVar8 = uVar14 + 1;
          } while (local_548[uVar14] != '\0');
          if (uVar8 < 0x300) {
            local_548[uVar14] = '=';
            uVar14 = uVar8;
          }
          local_548[uVar14] = '\0';
          iVar5 = 8;
          do {
            uVar19 = uVar25 >> ((char)iVar5 * '\x04' - 4U & 0x1f) & 0xf;
            cVar17 = (char)uVar19;
            cVar22 = cVar17 + '7';
            if (uVar19 < 10) {
              cVar22 = cVar17 + '0';
            }
            uVar8 = 0;
            do {
              uVar14 = uVar8;
              uVar8 = uVar14 + 1;
            } while (local_548[uVar14] != '\0');
            if (uVar14 + 1 < 0x300) {
              local_548[uVar14] = cVar22;
              local_548[uVar14 + 1] = '\0';
            }
            uVar19 = local_1dc;
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
          uVar8 = 0;
          do {
            uVar14 = uVar8;
            uVar8 = uVar14 + 1;
          } while (local_548[uVar14] != '\0');
          if (uVar8 < 0x300) {
            local_548[uVar14] = ' ';
            uVar14 = uVar8;
          }
          local_548[uVar14] = '\0';
          uVar8 = 0;
          do {
            uVar14 = uVar8;
            uVar8 = uVar14 + 1;
          } while (local_548[uVar14] != '\0');
          if (uVar14 + 1 < 0x300) {
            cVar17 = 'p';
            pcVar13 = str_1001329d;
            do {
              pcVar13 = pcVar13 + 1;
              local_548[uVar14] = cVar17;
              uVar14 = uVar14 + 1;
              cVar17 = *pcVar13;
              if (cVar17 == '\0') break;
            } while (uVar14 < 0x2ff);
          }
          local_548[uVar14] = '\0';
          uVar8 = 0;
          do {
            uVar14 = uVar8;
            uVar8 = uVar14 + 1;
          } while (local_548[uVar14] != '\0');
          if (uVar8 < 0x300) {
            local_548[uVar14] = '=';
            uVar14 = uVar8;
          }
          local_548[uVar14] = '\0';
          iVar5 = 8;
          do {
            uVar25 = uVar19 >> ((char)iVar5 * '\x04' - 4U & 0x1f) & 0xf;
            cVar17 = (char)uVar25;
            cVar22 = cVar17 + '7';
            if (uVar25 < 10) {
              cVar22 = cVar17 + '0';
            }
            uVar8 = 0;
            do {
              uVar14 = uVar8;
              uVar8 = uVar14 + 1;
            } while (local_548[uVar14] != '\0');
            if (uVar14 + 1 < 0x300) {
              local_548[uVar14] = cVar22;
              local_548[uVar14 + 1] = '\0';
            }
            uVar25 = local_248;
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
          uVar8 = 0;
          do {
            uVar14 = uVar8;
            uVar8 = uVar14 + 1;
          } while (local_548[uVar14] != '\0');
          if (uVar8 < 0x300) {
            local_548[uVar14] = ' ';
            uVar14 = uVar8;
          }
          local_548[uVar14] = '\0';
          uVar8 = 0;
          do {
            uVar14 = uVar8;
            uVar8 = uVar14 + 1;
          } while (local_548[uVar14] != '\0');
          if (uVar14 + 1 < 0x300) {
            cVar17 = 'p';
            pcVar13 = str_100132a7;
            do {
              pcVar13 = pcVar13 + 1;
              local_548[uVar14] = cVar17;
              uVar14 = uVar14 + 1;
              cVar17 = *pcVar13;
              if (cVar17 == '\0') break;
            } while (uVar14 < 0x2ff);
          }
          local_548[uVar14] = '\0';
          uVar8 = 0;
          do {
            uVar14 = uVar8;
            uVar8 = uVar14 + 1;
          } while (local_548[uVar14] != '\0');
          if (uVar8 < 0x300) {
            local_548[uVar14] = '=';
            uVar14 = uVar8;
          }
          local_548[uVar14] = '\0';
          iVar5 = 8;
          do {
            uVar19 = uVar25 >> ((char)iVar5 * '\x04' - 4U & 0x1f) & 0xf;
            cVar17 = (char)uVar19;
            cVar22 = cVar17 + '7';
            if (uVar19 < 10) {
              cVar22 = cVar17 + '0';
            }
            uVar8 = 0;
            do {
              uVar14 = uVar8;
              uVar8 = uVar14 + 1;
            } while (local_548[uVar14] != '\0');
            if (uVar14 + 1 < 0x300) {
              local_548[uVar14] = cVar22;
              local_548[uVar14 + 1] = '\0';
            }
            uVar19 = local_244;
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
          uVar8 = 0;
          do {
            uVar14 = uVar8;
            uVar8 = uVar14 + 1;
          } while (local_548[uVar14] != '\0');
          if (uVar8 < 0x300) {
            local_548[uVar14] = ' ';
            uVar14 = uVar8;
          }
          local_548[uVar14] = '\0';
          uVar8 = 0;
          do {
            uVar14 = uVar8;
            uVar8 = uVar14 + 1;
          } while (local_548[uVar14] != '\0');
          if (uVar14 + 1 < 0x300) {
            cVar17 = 'p';
            pcVar13 = str_100132b4;
            do {
              pcVar13 = pcVar13 + 1;
              local_548[uVar14] = cVar17;
              uVar14 = uVar14 + 1;
              cVar17 = *pcVar13;
              if (cVar17 == '\0') break;
            } while (uVar14 < 0x2ff);
          }
          local_548[uVar14] = '\0';
          uVar8 = 0;
          do {
            uVar14 = uVar8;
            uVar8 = uVar14 + 1;
          } while (local_548[uVar14] != '\0');
          if (uVar8 < 0x300) {
            local_548[uVar14] = '=';
            uVar14 = uVar8;
          }
          local_548[uVar14] = '\0';
          iVar5 = 8;
          do {
            uVar25 = uVar19 >> ((char)iVar5 * '\x04' - 4U & 0x1f) & 0xf;
            cVar17 = (char)uVar25;
            cVar22 = cVar17 + '7';
            if (uVar25 < 10) {
              cVar22 = cVar17 + '0';
            }
            uVar8 = 0;
            do {
              uVar14 = uVar8;
              uVar8 = uVar14 + 1;
            } while (local_548[uVar14] != '\0');
            if (uVar14 + 1 < 0x300) {
              local_548[uVar14] = cVar22;
              local_548[uVar14 + 1] = '\0';
            }
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
          uVar8 = 0;
          do {
            uVar14 = uVar8;
            uVar8 = uVar14 + 1;
          } while (local_548[uVar14] != '\0');
          if (uVar8 < 0x300) {
            local_548[uVar14] = ' ';
            uVar14 = uVar8;
          }
          local_548[uVar14] = '\0';
          uVar8 = 0;
          do {
            uVar14 = uVar8;
            uVar8 = uVar14 + 1;
          } while (local_548[uVar14] != '\0');
          if (uVar14 + 1 < 0x300) {
            cVar17 = 'c';
            pcVar13 = str_100132c1;
            do {
              pcVar13 = pcVar13 + 1;
              local_548[uVar14] = cVar17;
              uVar14 = uVar14 + 1;
              cVar17 = *pcVar13;
              if (cVar17 == '\0') break;
            } while (uVar14 < 0x2ff);
          }
          local_548[uVar14] = '\0';
          uVar8 = 0;
          do {
            uVar14 = uVar8;
            uVar8 = uVar14 + 1;
          } while (local_548[uVar14] != '\0');
          if (uVar8 < 0x300) {
            local_548[uVar14] = '=';
            uVar14 = uVar8;
          }
          local_548[uVar14] = '\0';
          if (uVar7 == 0) {
            uVar8 = 0;
            do {
              uVar14 = uVar8;
              uVar8 = uVar14 + 1;
            } while (local_548[uVar14] != '\0');
            if (uVar14 + 1 < 0x300) {
              (local_548 + uVar14)[0] = '0';
              (local_548 + uVar14)[1] = '\0';
            }
          }
          else {
            uVar8 = 0xffffffffffffffff;
            uVar25 = uVar7;
            do {
              uVar14 = uVar8;
              *(byte *)((long)&local_1d8 + uVar14 + 1) =
                   (char)uVar25 + (char)(uVar25 / 10) * -10 | 0x30;
              uVar8 = uVar14 + 1;
              if (8 < uVar8) break;
              bVar27 = 9 < uVar25;
              uVar25 = uVar25 / 10;
            } while (bVar27);
            if ((uVar8 & 1) == 0) {
              uVar20 = 0;
              do {
                uVar10 = uVar20;
                uVar20 = uVar10 + 1;
              } while (local_548[uVar10] != '\0');
              uVar20 = uVar8;
              if (uVar10 + 1 < 0x300) {
                local_548[uVar10] = *(char *)((long)&local_1d8 + uVar14 + 1);
                local_548[uVar10 + 1] = '\0';
              }
            }
            else {
              uVar20 = uVar14 + 2;
            }
            while (uVar8 != 0) {
              uVar8 = 0;
              do {
                uVar14 = uVar8;
                uVar8 = uVar14 + 1;
              } while (local_548[uVar14] != '\0');
              if (uVar14 + 1 < 0x300) {
                local_548[uVar14] = *(char *)((long)&local_1dc + uVar20 + 3);
                local_548[uVar14 + 1] = '\0';
              }
              lVar1 = uVar20 + 2;
              uVar20 = uVar20 - 2;
              uVar8 = 0;
              do {
                uVar14 = uVar8;
                uVar8 = uVar14 + 1;
              } while (local_548[uVar14] != '\0');
              uVar8 = uVar20;
              if (uVar14 + 1 < 0x300) {
                local_548[uVar14] = *(char *)((long)&local_1dc + lVar1);
                local_548[uVar14 + 1] = '\0';
              }
            }
          }
          uVar8 = 0;
          do {
            uVar14 = uVar8;
            uVar8 = uVar14 + 1;
          } while (local_548[uVar14] != '\0');
          if (uVar8 < 0x300) {
            local_548[uVar14] = ' ';
            uVar14 = uVar8;
          }
          local_548[uVar14] = '\0';
          uVar8 = 0;
          do {
            uVar14 = uVar8;
            uVar8 = uVar14 + 1;
          } while (local_548[uVar14] != '\0');
          if (uVar14 + 1 < 0x300) {
            cVar17 = 't';
            pcVar13 = str_100132d2;
            do {
              pcVar13 = pcVar13 + 1;
              local_548[uVar14] = cVar17;
              uVar14 = uVar14 + 1;
              cVar17 = *pcVar13;
              if (cVar17 == '\0') break;
            } while (uVar14 < 0x2ff);
          }
          local_548[uVar14] = '\0';
          uVar8 = 0;
          do {
            uVar14 = uVar8;
            uVar8 = uVar14 + 1;
          } while (local_548[uVar14] != '\0');
          if (uVar8 < 0x300) {
            local_548[uVar14] = '=';
            uVar14 = uVar8;
          }
          local_548[uVar14] = '\0';
          if (local_214 == 0) {
            uVar8 = 0;
            do {
              uVar14 = uVar8;
              uVar8 = uVar14 + 1;
            } while (local_548[uVar14] != '\0');
            if (uVar14 + 1 < 0x300) {
              (local_548 + uVar14)[0] = '0';
              (local_548 + uVar14)[1] = '\0';
            }
          }
          else {
            uVar8 = 0xffffffffffffffff;
            uVar25 = local_214;
            do {
              uVar14 = uVar8;
              *(byte *)((long)&local_1d8 + uVar14 + 1) =
                   (char)uVar25 + (char)(uVar25 / 10) * -10 | 0x30;
              uVar8 = uVar14 + 1;
              if (8 < uVar8) break;
              bVar27 = 9 < uVar25;
              uVar25 = uVar25 / 10;
            } while (bVar27);
            if ((uVar8 & 1) == 0) {
              uVar20 = 0;
              do {
                uVar10 = uVar20;
                uVar20 = uVar10 + 1;
              } while (local_548[uVar10] != '\0');
              uVar20 = uVar8;
              if (uVar10 + 1 < 0x300) {
                local_548[uVar10] = *(char *)((long)&local_1d8 + uVar14 + 1);
                local_548[uVar10 + 1] = '\0';
              }
            }
            else {
              uVar20 = uVar14 + 2;
            }
            while (uVar8 != 0) {
              uVar8 = 0;
              do {
                uVar14 = uVar8;
                uVar8 = uVar14 + 1;
              } while (local_548[uVar14] != '\0');
              if (uVar14 + 1 < 0x300) {
                local_548[uVar14] = *(char *)((long)&local_1dc + uVar20 + 3);
                local_548[uVar14 + 1] = '\0';
              }
              lVar1 = uVar20 + 2;
              uVar20 = uVar20 - 2;
              uVar8 = 0;
              do {
                uVar14 = uVar8;
                uVar8 = uVar14 + 1;
              } while (local_548[uVar14] != '\0');
              uVar8 = uVar20;
              if (uVar14 + 1 < 0x300) {
                local_548[uVar14] = *(char *)((long)&local_1dc + lVar1);
                local_548[uVar14 + 1] = '\0';
              }
            }
          }
          uVar8 = 0;
          do {
            uVar14 = uVar8;
            uVar8 = uVar14 + 1;
          } while (local_548[uVar14] != '\0');
          if (uVar8 < 0x300) {
            local_548[uVar14] = ' ';
            uVar14 = uVar8;
          }
          local_548[uVar14] = '\0';
          uVar8 = 0;
          do {
            uVar14 = uVar8;
            uVar8 = uVar14 + 1;
          } while (local_548[uVar14] != '\0');
          if (uVar14 + 1 < 0x300) {
            cVar17 = 'm';
            pcVar13 = str_100132e2;
            do {
              pcVar13 = pcVar13 + 1;
              local_548[uVar14] = cVar17;
              uVar14 = uVar14 + 1;
              cVar17 = *pcVar13;
              if (cVar17 == '\0') break;
            } while (uVar14 < 0x2ff);
          }
          local_548[uVar14] = '\0';
          uVar8 = 0;
          do {
            uVar14 = uVar8;
            uVar8 = uVar14 + 1;
          } while (local_548[uVar14] != '\0');
          if (uVar8 < 0x300) {
            local_548[uVar14] = '=';
            uVar14 = uVar8;
          }
          local_548[uVar14] = '\0';
          if ((uint)local_220 == 0) {
            uVar8 = 0;
            do {
              uVar14 = uVar8;
              uVar8 = uVar14 + 1;
            } while (local_548[uVar14] != '\0');
            if (uVar14 + 1 < 0x300) {
              (local_548 + uVar14)[0] = '0';
              (local_548 + uVar14)[1] = '\0';
            }
          }
          else {
            uVar8 = 0xffffffffffffffff;
            uVar25 = (uint)local_220;
            do {
              uVar14 = uVar8;
              *(byte *)((long)&local_1d8 + uVar14 + 1) =
                   (char)uVar25 + (char)(uVar25 / 10) * -10 | 0x30;
              uVar8 = uVar14 + 1;
              if (8 < uVar8) break;
              bVar27 = 9 < uVar25;
              uVar25 = uVar25 / 10;
            } while (bVar27);
            if ((uVar8 & 1) == 0) {
              uVar20 = 0;
              do {
                uVar10 = uVar20;
                uVar20 = uVar10 + 1;
              } while (local_548[uVar10] != '\0');
              uVar20 = uVar8;
              if (uVar10 + 1 < 0x300) {
                local_548[uVar10] = *(char *)((long)&local_1d8 + uVar14 + 1);
                local_548[uVar10 + 1] = '\0';
              }
            }
            else {
              uVar20 = uVar14 + 2;
            }
            while (uVar8 != 0) {
              uVar8 = 0;
              do {
                uVar14 = uVar8;
                uVar8 = uVar14 + 1;
              } while (local_548[uVar14] != '\0');
              if (uVar14 + 1 < 0x300) {
                local_548[uVar14] = *(char *)((long)&local_1dc + uVar20 + 3);
                local_548[uVar14 + 1] = '\0';
              }
              lVar1 = uVar20 + 2;
              uVar20 = uVar20 - 2;
              uVar8 = 0;
              do {
                uVar14 = uVar8;
                uVar8 = uVar14 + 1;
              } while (local_548[uVar14] != '\0');
              uVar8 = uVar20;
              if (uVar14 + 1 < 0x300) {
                local_548[uVar14] = *(char *)((long)&local_1dc + lVar1);
                local_548[uVar14 + 1] = '\0';
              }
            }
          }
          recovered_10011920((long)local_548,0x300,str_100132ef,local_240);
          recovered_10011920((long)local_548,0x300,str_100132fc,local_23c);
          recovered_10011920((long)local_548,0x300,str_10013308,local_22c);
          pcVar13 = &DAT_10013022;
          if (iVar3 == 0) {
            pcVar13 = str_10013027;
          }
          acStack_46[1] = *pcVar13;
          if (*pcVar13 != '\0') {
            uVar8 = 0;
            do {
              uVar14 = uVar8;
              uVar8 = uVar14 + 1;
            } while (local_548[uVar14] != '\0');
            if (uVar8 < 0x300) {
              local_548[uVar14] = ' ';
              uVar14 = uVar8;
            }
            local_548[uVar14] = '\0';
            uVar8 = 0;
            do {
              uVar14 = uVar8;
              uVar8 = uVar14 + 1;
            } while (local_548[uVar14] != '\0');
            if (uVar14 + 1 < 0x300) {
              cVar17 = 'p';
              pcVar11 = str_10013311;
              do {
                pcVar11 = pcVar11 + 1;
                local_548[uVar14] = cVar17;
                uVar14 = uVar14 + 1;
                cVar17 = *pcVar11;
                if (cVar17 == '\0') break;
              } while (uVar14 < 0x2ff);
            }
            local_548[uVar14] = '\0';
            uVar8 = 0;
            do {
              uVar14 = uVar8;
              uVar8 = uVar14 + 1;
            } while (local_548[uVar14] != '\0');
            if (uVar8 < 0x300) {
              local_548[uVar14] = '=';
              uVar14 = uVar8;
            }
            local_548[uVar14] = '\0';
            uVar8 = 0;
            do {
              uVar14 = uVar8;
              uVar8 = uVar14 + 1;
            } while (local_548[uVar14] != '\0');
            if (uVar14 + 1 < 0x300) {
              cVar17 = acStack_46[1];
              pcVar11 = pcVar13;
              do {
                pcVar11 = pcVar11 + 1;
                local_548[uVar14] = cVar17;
                uVar14 = uVar14 + 1;
                cVar17 = *pcVar11;
                if (cVar17 == '\0') break;
              } while (uVar14 < 0x2ff);
            }
            local_548[uVar14] = '\0';
          }
          local_1d8 = local_1d8 & 0xffffff00;
          uVar8 = 0;
          do {
            uVar14 = uVar8;
            uVar8 = uVar14 + 1;
          } while (*(char *)((long)&local_1d8 + uVar14) != '\0');
          if (uVar14 + 1 < 0x140) {
            cVar17 = 'v';
            pcVar11 = str_10013324;
            do {
              pcVar11 = pcVar11 + 1;
              *(char *)((long)&local_1d8 + uVar14) = cVar17;
              uVar14 = uVar14 + 1;
              cVar17 = *pcVar11;
              if (cVar17 == '\0') break;
            } while (uVar14 < 0x13f);
          }
          *(undefined1 *)((long)&local_1d8 + uVar14) = 0;
          uVar8 = 0;
          do {
            uVar14 = uVar8;
            uVar8 = uVar14 + 1;
          } while (*(char *)((long)&local_1d8 + uVar14) != '\0');
          if (uVar8 < 0x140) {
            *(undefined1 *)((long)&local_1d8 + uVar14) = 0x20;
            uVar14 = uVar8;
          }
          *(undefined1 *)((long)&local_1d8 + uVar14) = 0;
          uVar8 = 0xffffffffffffffff;
          do {
            uVar14 = uVar8;
            uVar8 = uVar14 + 1;
          } while (*(char *)((long)&local_1d8 + uVar14 + 1) != '\0');
          if (uVar14 + 2 < 0x140) {
            *(undefined1 *)((long)&local_1d8 + uVar14 + 1) = 0x66;
            bVar27 = uVar8 != 0x13e;
            uVar8 = uVar14 + 2;
            if (bVar27) {
              uVar8 = uVar14 + 3;
              *(undefined1 *)((long)&local_1d8 + uVar14 + 2) = 0x61;
              if (uVar8 < 0x13f) {
                uVar8 = uVar14 + 4;
                *(undefined1 *)((long)&local_1d8 + uVar14 + 3) = 0x6d;
                if (uVar8 < 0x13f) {
                  uVar8 = uVar14 + 5;
                  *(undefined1 *)((long)&uStack_1d4 + uVar14) = 0x69;
                  if (uVar8 < 0x13f) {
                    uVar8 = uVar14 + 6;
                    *(undefined1 *)((long)&uStack_1d4 + uVar14 + 1) = 0x6c;
                    if (uVar8 < 0x13f) {
                      *(undefined1 *)((long)&uStack_1d4 + uVar14 + 2) = 0x79;
                      uVar8 = uVar14 + 7;
                    }
                  }
                }
              }
            }
          }
          *(undefined1 *)((long)&local_1d8 + uVar8) = 0;
          uVar8 = 0;
          do {
            uVar14 = uVar8;
            uVar8 = uVar14 + 1;
          } while (*(char *)((long)&local_1d8 + uVar14) != '\0');
          if (uVar8 < 0x140) {
            *(undefined1 *)((long)&local_1d8 + uVar14) = 0x3d;
            uVar14 = uVar8;
          }
          *(undefined1 *)((long)&local_1d8 + uVar14) = 0;
          if (uVar16 == 0) {
            uVar9 = 0;
            do {
              uVar8 = uVar9;
              uVar9 = uVar8 + 1;
            } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
            if (uVar8 + 1 < 0x140) {
              *(undefined2 *)((long)&local_1d8 + uVar8) = 0x30;
            }
          }
          else {
            uVar8 = 0xffffffffffffffff;
            do {
              uVar14 = uVar8;
              uVar16 = (uint)uVar9;
              acStack_46[uVar14 + 3] = (char)uVar9 + (char)(uVar9 / 10) * -10 | 0x30;
              uVar8 = uVar14 + 1;
              if (8 < uVar8) break;
              uVar9 = uVar9 / 10;
            } while (9 < uVar16);
            if ((uVar8 & 1) == 0) {
              uVar9 = 0;
              do {
                uVar20 = uVar9;
                uVar9 = uVar20 + 1;
              } while (*(char *)((long)&local_1d8 + uVar20) != '\0');
              uVar9 = uVar8;
              if (uVar20 + 1 < 0x140) {
                *(char *)((long)&local_1d8 + uVar20) = acStack_46[uVar14 + 3];
                *(undefined1 *)((long)&local_1d8 + uVar20 + 1) = 0;
              }
            }
            else {
              uVar9 = uVar14 + 2;
            }
            while (uVar8 != 0) {
              uVar8 = 0;
              do {
                uVar14 = uVar8;
                uVar8 = uVar14 + 1;
              } while (*(char *)((long)&local_1d8 + uVar14) != '\0');
              if (uVar14 + 1 < 0x140) {
                *(char *)((long)&local_1d8 + uVar14) = acStack_46[uVar9 + 1];
                *(undefined1 *)((long)&local_1d8 + uVar14 + 1) = 0;
              }
              pcVar11 = acStack_46 + uVar9;
              uVar9 = uVar9 - 2;
              uVar8 = 0;
              do {
                uVar14 = uVar8;
                uVar8 = uVar14 + 1;
              } while (*(char *)((long)&local_1d8 + uVar14) != '\0');
              uVar8 = uVar9;
              if (uVar14 + 1 < 0x140) {
                *(char *)((long)&local_1d8 + uVar14) = *pcVar11;
                *(undefined1 *)((long)&local_1d8 + uVar14 + 1) = 0;
              }
            }
          }
          uVar9 = 0;
          do {
            uVar8 = uVar9;
            uVar9 = uVar8 + 1;
          } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
          if (uVar9 < 0x140) {
            *(undefined1 *)((long)&local_1d8 + uVar8) = 0x20;
            uVar8 = uVar9;
          }
          *(undefined1 *)((long)&local_1d8 + uVar8) = 0;
          uVar9 = 0xffffffffffffffff;
          do {
            uVar8 = uVar9;
            uVar9 = uVar8 + 1;
          } while (*(char *)((long)&local_1d8 + uVar8 + 1) != '\0');
          if (uVar8 + 2 < 0x140) {
            *(undefined1 *)((long)&local_1d8 + uVar8 + 1) = 0x6d;
            bVar27 = uVar9 != 0x13e;
            uVar9 = uVar8 + 2;
            if (bVar27) {
              uVar9 = uVar8 + 3;
              *(undefined1 *)((long)&local_1d8 + uVar8 + 2) = 0x6f;
              if (uVar9 < 0x13f) {
                uVar9 = uVar8 + 4;
                *(undefined1 *)((long)&local_1d8 + uVar8 + 3) = 100;
                if (uVar9 < 0x13f) {
                  uVar9 = uVar8 + 5;
                  *(undefined1 *)((long)&uStack_1d4 + uVar8) = 0x65;
                  if (uVar9 < 0x13f) {
                    *(undefined1 *)((long)&uStack_1d4 + uVar8 + 1) = 0x6c;
                    uVar9 = uVar8 + 6;
                  }
                }
              }
            }
          }
          *(undefined1 *)((long)&local_1d8 + uVar9) = 0;
          uVar9 = 0;
          do {
            uVar8 = uVar9;
            uVar9 = uVar8 + 1;
          } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
          if (uVar9 < 0x140) {
            *(undefined1 *)((long)&local_1d8 + uVar8) = 0x3d;
            uVar8 = uVar9;
          }
          *(undefined1 *)((long)&local_1d8 + uVar8) = 0;
          if (uVar12 == 0) {
            uVar9 = 0;
            do {
              uVar8 = uVar9;
              uVar9 = uVar8 + 1;
            } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
            if (uVar8 + 1 < 0x140) {
              *(undefined2 *)((long)&local_1d8 + uVar8) = 0x30;
            }
          }
          else {
            uVar9 = 0xffffffffffffffff;
            do {
              uVar8 = uVar9;
              acStack_46[uVar8 + 3] = (char)uVar12 + (char)(uVar12 / 10) * -10 | 0x30;
              uVar9 = uVar8 + 1;
              if (8 < uVar9) break;
              bVar27 = 9 < uVar12;
              uVar12 = uVar12 / 10;
            } while (bVar27);
            if ((uVar9 & 1) == 0) {
              uVar14 = 0;
              do {
                uVar20 = uVar14;
                uVar14 = uVar20 + 1;
              } while (*(char *)((long)&local_1d8 + uVar20) != '\0');
              uVar14 = uVar9;
              if (uVar20 + 1 < 0x140) {
                *(char *)((long)&local_1d8 + uVar20) = acStack_46[uVar8 + 3];
                *(undefined1 *)((long)&local_1d8 + uVar20 + 1) = 0;
              }
            }
            else {
              uVar14 = uVar8 + 2;
            }
            while (uVar9 != 0) {
              uVar9 = 0;
              do {
                uVar8 = uVar9;
                uVar9 = uVar8 + 1;
              } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
              if (uVar8 + 1 < 0x140) {
                *(char *)((long)&local_1d8 + uVar8) = acStack_46[uVar14 + 1];
                *(undefined1 *)((long)&local_1d8 + uVar8 + 1) = 0;
              }
              pcVar11 = acStack_46 + uVar14;
              uVar14 = uVar14 - 2;
              uVar9 = 0;
              do {
                uVar8 = uVar9;
                uVar9 = uVar8 + 1;
              } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
              uVar9 = uVar14;
              if (uVar8 + 1 < 0x140) {
                *(char *)((long)&local_1d8 + uVar8) = *pcVar11;
                *(undefined1 *)((long)&local_1d8 + uVar8 + 1) = 0;
              }
            }
          }
          uVar9 = 0;
          do {
            uVar8 = uVar9;
            uVar9 = uVar8 + 1;
          } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
          if (uVar9 < 0x140) {
            *(undefined1 *)((long)&local_1d8 + uVar8) = 0x20;
            uVar8 = uVar9;
          }
          *(undefined1 *)((long)&local_1d8 + uVar8) = 0;
          uVar9 = 0;
          do {
            uVar8 = uVar9;
            uVar9 = uVar8 + 1;
          } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
          if (uVar8 + 1 < 0x140) {
            cVar17 = 'c';
            pcVar11 = str_100132c1;
            do {
              pcVar11 = pcVar11 + 1;
              *(char *)((long)&local_1d8 + uVar8) = cVar17;
              uVar8 = uVar8 + 1;
              cVar17 = *pcVar11;
              if (cVar17 == '\0') break;
            } while (uVar8 < 0x13f);
          }
          *(undefined1 *)((long)&local_1d8 + uVar8) = 0;
          uVar9 = 0;
          do {
            uVar8 = uVar9;
            uVar9 = uVar8 + 1;
          } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
          if (uVar9 < 0x140) {
            *(undefined1 *)((long)&local_1d8 + uVar8) = 0x3d;
            uVar8 = uVar9;
          }
          *(undefined1 *)((long)&local_1d8 + uVar8) = 0;
          if (uVar7 == 0) {
            uVar9 = 0;
            do {
              uVar8 = uVar9;
              uVar9 = uVar8 + 1;
            } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
            if (uVar8 + 1 < 0x140) {
              *(undefined2 *)((long)&local_1d8 + uVar8) = 0x30;
            }
          }
          else {
            uVar9 = 0xffffffffffffffff;
            do {
              uVar8 = uVar9;
              acStack_46[uVar8 + 3] = (char)uVar7 + (char)(uVar7 / 10) * -10 | 0x30;
              uVar9 = uVar8 + 1;
              if (8 < uVar9) break;
              bVar27 = 9 < uVar7;
              uVar7 = uVar7 / 10;
            } while (bVar27);
            if ((uVar9 & 1) == 0) {
              uVar14 = 0;
              do {
                uVar20 = uVar14;
                uVar14 = uVar20 + 1;
              } while (*(char *)((long)&local_1d8 + uVar20) != '\0');
              uVar14 = uVar9;
              if (uVar20 + 1 < 0x140) {
                *(char *)((long)&local_1d8 + uVar20) = acStack_46[uVar8 + 3];
                *(undefined1 *)((long)&local_1d8 + uVar20 + 1) = 0;
              }
            }
            else {
              uVar14 = uVar8 + 2;
            }
            while (uVar9 != 0) {
              uVar9 = 0;
              do {
                uVar8 = uVar9;
                uVar9 = uVar8 + 1;
              } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
              if (uVar8 + 1 < 0x140) {
                *(char *)((long)&local_1d8 + uVar8) = acStack_46[uVar14 + 1];
                *(undefined1 *)((long)&local_1d8 + uVar8 + 1) = 0;
              }
              pcVar11 = acStack_46 + uVar14;
              uVar14 = uVar14 - 2;
              uVar9 = 0;
              do {
                uVar8 = uVar9;
                uVar9 = uVar8 + 1;
              } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
              uVar9 = uVar14;
              if (uVar8 + 1 < 0x140) {
                *(char *)((long)&local_1d8 + uVar8) = *pcVar11;
                *(undefined1 *)((long)&local_1d8 + uVar8 + 1) = 0;
              }
            }
          }
          uVar9 = 0;
          do {
            uVar8 = uVar9;
            uVar9 = uVar8 + 1;
          } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
          if (uVar9 < 0x140) {
            *(undefined1 *)((long)&local_1d8 + uVar8) = 0x20;
            uVar8 = uVar9;
          }
          *(undefined1 *)((long)&local_1d8 + uVar8) = 0;
          uVar9 = 0;
          do {
            uVar8 = uVar9;
            uVar9 = uVar8 + 1;
          } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
          if (uVar8 + 1 < 0x140) {
            cVar17 = 't';
            pcVar11 = str_100132d2;
            do {
              pcVar11 = pcVar11 + 1;
              *(char *)((long)&local_1d8 + uVar8) = cVar17;
              uVar8 = uVar8 + 1;
              cVar17 = *pcVar11;
              if (cVar17 == '\0') break;
            } while (uVar8 < 0x13f);
          }
          *(undefined1 *)((long)&local_1d8 + uVar8) = 0;
          uVar9 = 0;
          do {
            uVar8 = uVar9;
            uVar9 = uVar8 + 1;
          } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
          if (uVar9 < 0x140) {
            *(undefined1 *)((long)&local_1d8 + uVar8) = 0x3d;
            uVar8 = uVar9;
          }
          *(undefined1 *)((long)&local_1d8 + uVar8) = 0;
          if (local_214 == 0) {
            uVar9 = 0;
            do {
              uVar8 = uVar9;
              uVar9 = uVar8 + 1;
            } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
            if (uVar8 + 1 < 0x140) {
              *(undefined2 *)((long)&local_1d8 + uVar8) = 0x30;
            }
          }
          else {
            uVar9 = 0xffffffffffffffff;
            do {
              uVar8 = uVar9;
              uVar16 = local_214;
              acStack_46[uVar8 + 3] = (char)local_214 + (char)(local_214 / 10) * -10 | 0x30;
              uVar9 = uVar8 + 1;
              if (8 < uVar9) break;
              local_214 = local_214 / 10;
            } while (9 < uVar16);
            if ((uVar9 & 1) == 0) {
              uVar14 = 0;
              do {
                uVar20 = uVar14;
                uVar14 = uVar20 + 1;
              } while (*(char *)((long)&local_1d8 + uVar20) != '\0');
              uVar14 = uVar9;
              if (uVar20 + 1 < 0x140) {
                *(char *)((long)&local_1d8 + uVar20) = acStack_46[uVar8 + 3];
                *(undefined1 *)((long)&local_1d8 + uVar20 + 1) = 0;
              }
            }
            else {
              uVar14 = uVar8 + 2;
            }
            while (uVar9 != 0) {
              uVar9 = 0;
              do {
                uVar8 = uVar9;
                uVar9 = uVar8 + 1;
              } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
              if (uVar8 + 1 < 0x140) {
                *(char *)((long)&local_1d8 + uVar8) = acStack_46[uVar14 + 1];
                *(undefined1 *)((long)&local_1d8 + uVar8 + 1) = 0;
              }
              pcVar11 = acStack_46 + uVar14;
              uVar14 = uVar14 - 2;
              uVar9 = 0;
              do {
                uVar8 = uVar9;
                uVar9 = uVar8 + 1;
              } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
              uVar9 = uVar14;
              if (uVar8 + 1 < 0x140) {
                *(char *)((long)&local_1d8 + uVar8) = *pcVar11;
                *(undefined1 *)((long)&local_1d8 + uVar8 + 1) = 0;
              }
            }
          }
          uVar9 = 0;
          do {
            uVar8 = uVar9;
            uVar9 = uVar8 + 1;
          } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
          if (uVar9 < 0x140) {
            *(undefined1 *)((long)&local_1d8 + uVar8) = 0x20;
            uVar8 = uVar9;
          }
          *(undefined1 *)((long)&local_1d8 + uVar8) = 0;
          uVar9 = 0;
          do {
            uVar8 = uVar9;
            uVar9 = uVar8 + 1;
          } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
          if (uVar8 + 1 < 0x140) {
            cVar17 = 'm';
            pcVar11 = str_100132e2;
            do {
              pcVar11 = pcVar11 + 1;
              *(char *)((long)&local_1d8 + uVar8) = cVar17;
              uVar8 = uVar8 + 1;
              cVar17 = *pcVar11;
              if (cVar17 == '\0') break;
            } while (uVar8 < 0x13f);
          }
          *(undefined1 *)((long)&local_1d8 + uVar8) = 0;
          uVar9 = 0;
          do {
            uVar8 = uVar9;
            uVar9 = uVar8 + 1;
          } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
          if (uVar9 < 0x140) {
            *(undefined1 *)((long)&local_1d8 + uVar8) = 0x3d;
            uVar8 = uVar9;
          }
          *(undefined1 *)((long)&local_1d8 + uVar8) = 0;
          if ((uint)local_220 == 0) {
            uVar9 = 0;
            do {
              uVar8 = uVar9;
              uVar9 = uVar8 + 1;
            } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
            if (uVar8 + 1 < 0x140) {
              *(undefined2 *)((long)&local_1d8 + uVar8) = 0x30;
            }
          }
          else {
            uVar9 = 0xffffffffffffffff;
            do {
              uVar8 = uVar9;
              uVar16 = (uint)local_220;
              acStack_46[uVar8 + 3] = (char)local_220 + (char)((uint)local_220 / 10) * -10 | 0x30;
              uVar9 = uVar8 + 1;
              if (8 < uVar9) break;
              local_220 = CONCAT44(PF_PART4(local_220, 4),(uint)local_220 / 10);
            } while (9 < uVar16);
            if ((uVar9 & 1) == 0) {
              uVar14 = 0;
              do {
                uVar20 = uVar14;
                uVar14 = uVar20 + 1;
              } while (*(char *)((long)&local_1d8 + uVar20) != '\0');
              uVar14 = uVar9;
              if (uVar20 + 1 < 0x140) {
                *(char *)((long)&local_1d8 + uVar20) = acStack_46[uVar8 + 3];
                *(undefined1 *)((long)&local_1d8 + uVar20 + 1) = 0;
              }
            }
            else {
              uVar14 = uVar8 + 2;
            }
            while (uVar9 != 0) {
              uVar9 = 0;
              do {
                uVar8 = uVar9;
                uVar9 = uVar8 + 1;
              } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
              if (uVar8 + 1 < 0x140) {
                *(char *)((long)&local_1d8 + uVar8) = acStack_46[uVar14 + 1];
                *(undefined1 *)((long)&local_1d8 + uVar8 + 1) = 0;
              }
              pcVar11 = acStack_46 + uVar14;
              uVar14 = uVar14 - 2;
              uVar9 = 0;
              do {
                uVar8 = uVar9;
                uVar9 = uVar8 + 1;
              } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
              uVar9 = uVar14;
              if (uVar8 + 1 < 0x140) {
                *(char *)((long)&local_1d8 + uVar8) = *pcVar11;
                *(undefined1 *)((long)&local_1d8 + uVar8 + 1) = 0;
              }
            }
          }
          recovered_10011920((long)&local_1d8,0x140,str_100132ef,local_240);
          recovered_10011920((long)&local_1d8,0x140,str_100132fc,local_23c);
          recovered_10011920((long)&local_1d8,0x140,str_10013308,local_22c);
          if (acStack_46[1] != '\0') {
            uVar9 = 0;
            do {
              uVar8 = uVar9;
              uVar9 = uVar8 + 1;
            } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
            if (uVar9 < 0x140) {
              *(undefined1 *)((long)&local_1d8 + uVar8) = 0x20;
              uVar8 = uVar9;
            }
            *(undefined1 *)((long)&local_1d8 + uVar8) = 0;
            uVar9 = 0xffffffffffffffff;
            do {
              uVar8 = uVar9;
              uVar9 = uVar8 + 1;
            } while (*(char *)((long)&local_1d8 + uVar8 + 1) != '\0');
            if (uVar8 + 2 < 0x140) {
              *(undefined1 *)((long)&local_1d8 + uVar8 + 1) = 99;
              bVar27 = uVar9 != 0x13e;
              uVar9 = uVar8 + 2;
              if (bVar27) {
                uVar9 = uVar8 + 3;
                *(undefined1 *)((long)&local_1d8 + uVar8 + 2) = 0x68;
                if (uVar9 < 0x13f) {
                  uVar9 = uVar8 + 4;
                  *(undefined1 *)((long)&local_1d8 + uVar8 + 3) = 0x61;
                  if (uVar9 < 0x13f) {
                    uVar9 = uVar8 + 5;
                    *(undefined1 *)(uVar8 + 4 + (long)&local_1d8) = 0x6e;
                    if (uVar9 < 0x13f) {
                      uVar9 = uVar8 + 6;
                      *(undefined1 *)((long)&uStack_1d4 + uVar8 + 1) = 0x67;
                      if (uVar9 < 0x13f) {
                        uVar9 = uVar8 + 7;
                        *(undefined1 *)((long)&uStack_1d4 + uVar8 + 2) = 0x65;
                        if (uVar9 < 0x13f) {
                          *(undefined1 *)((long)&uStack_1d4 + uVar8 + 3) = 100;
                          uVar9 = uVar8 + 8;
                        }
                      }
                    }
                  }
                }
              }
            }
            *(undefined1 *)((long)&local_1d8 + uVar9) = 0;
            uVar9 = 0;
            do {
              uVar8 = uVar9;
              uVar9 = uVar8 + 1;
            } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
            if (uVar9 < 0x140) {
              *(undefined1 *)((long)&local_1d8 + uVar8) = 0x3d;
              uVar8 = uVar9;
            }
            *(undefined1 *)((long)&local_1d8 + uVar8) = 0;
            uVar9 = 0;
            do {
              uVar8 = uVar9;
              uVar9 = uVar8 + 1;
            } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
            if (uVar8 + 1 < 0x140) {
              do {
                pcVar13 = pcVar13 + 1;
                *(char *)((long)&local_1d8 + uVar8) = acStack_46[1];
                uVar8 = uVar8 + 1;
                acStack_46[1] = *pcVar13;
                if (*pcVar13 == '\0') break;
              } while (uVar8 < 0x13f);
            }
            *(undefined1 *)((long)&local_1d8 + uVar8) = 0;
          }
        }
        if ((code *)(ulong)(uint)local_38[3] != (code *)0x0) {
          (*(code *)(ulong)(uint)local_38[3])(str_10012e0e,str_100131ce,&local_1d8);
        }
      }
      pbVar26 = local_238;
      api = local_38;
      goto LAB_100011f7;
    }
    uVar8 = 0;
    do {
      uVar14 = uVar8;
      uVar8 = uVar14 + 1;
    } while (local_548[uVar14] != '\0');
    if (uVar14 + 1 < 0x300) {
      cVar17 = ' ';
      pcVar13 = str_10013185;
      do {
        pcVar13 = pcVar13 + 1;
        local_548[uVar14] = cVar17;
        uVar14 = uVar14 + 1;
        cVar17 = *pcVar13;
        if (cVar17 == '\0') break;
      } while (uVar14 < 0x2ff);
    }
    local_548[uVar14] = '\0';
    pbVar26 = local_238;
    local_1d8 = local_1d8 & 0xffffff00;
    uVar8 = 0;
    do {
      uVar14 = uVar8;
      uVar8 = uVar14 + 1;
    } while (*(char *)((long)&local_1d8 + uVar14) != '\0');
    if (uVar14 + 1 < 0xc0) {
      cVar17 = 'v';
      pcVar13 = str_1001319c;
      do {
        pcVar13 = pcVar13 + 1;
        *(char *)((long)&local_1d8 + uVar14) = cVar17;
        uVar14 = uVar14 + 1;
        cVar17 = *pcVar13;
        if (cVar17 == '\0') break;
      } while (uVar14 < 0xbf);
    }
    *(undefined1 *)((long)&local_1d8 + uVar14) = 0;
    uVar8 = 0;
    do {
      uVar14 = uVar8;
      uVar8 = uVar14 + 1;
    } while (*(char *)((long)&local_1d8 + uVar14) != '\0');
    if (uVar8 < 0xc0) {
      *(undefined1 *)((long)&local_1d8 + uVar14) = 0x20;
      uVar14 = uVar8;
    }
    *(undefined1 *)((long)&local_1d8 + uVar14) = 0;
    uVar8 = 0xffffffffffffffff;
    do {
      uVar14 = uVar8;
      uVar8 = uVar14 + 1;
    } while (*(char *)((long)&local_1d8 + uVar14 + 1) != '\0');
    if (uVar14 + 2 < 0xc0) {
      *(undefined1 *)((long)&local_1d8 + uVar14 + 1) = 0x66;
      bVar27 = uVar8 != 0xbe;
      uVar8 = uVar14 + 2;
      if (bVar27) {
        uVar8 = uVar14 + 3;
        *(undefined1 *)((long)&local_1d8 + uVar14 + 2) = 0x61;
        if (uVar8 < 0xbf) {
          uVar8 = uVar14 + 4;
          *(undefined1 *)((long)&local_1d8 + uVar14 + 3) = 0x6d;
          if (uVar8 < 0xbf) {
            uVar8 = uVar14 + 5;
            *(undefined1 *)((long)&uStack_1d4 + uVar14) = 0x69;
            if (uVar8 < 0xbf) {
              uVar8 = uVar14 + 6;
              *(undefined1 *)((long)&uStack_1d4 + uVar14 + 1) = 0x6c;
              if (uVar8 < 0xbf) {
                *(undefined1 *)((long)&uStack_1d4 + uVar14 + 2) = 0x79;
                uVar8 = uVar14 + 7;
              }
            }
          }
        }
      }
    }
    *(undefined1 *)((long)&local_1d8 + uVar8) = 0;
    uVar8 = 0;
    do {
      uVar14 = uVar8;
      uVar8 = uVar14 + 1;
    } while (*(char *)((long)&local_1d8 + uVar14) != '\0');
    if (uVar8 < 0xc0) {
      *(undefined1 *)((long)&local_1d8 + uVar14) = 0x3d;
      uVar14 = uVar8;
    }
    *(undefined1 *)((long)&local_1d8 + uVar14) = 0;
    if (uVar16 == 0) {
      uVar9 = 0;
      do {
        uVar8 = uVar9;
        uVar9 = uVar8 + 1;
      } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
      if (uVar8 + 1 < 0xc0) {
        *(undefined2 *)((long)&local_1d8 + uVar8) = 0x30;
      }
    }
    else {
      uVar8 = 0xffffffffffffffff;
      do {
        uVar14 = uVar8;
        uVar16 = (uint)uVar9;
        acStack_46[uVar14 + 3] = (char)uVar9 + (char)(uVar9 / 10) * -10 | 0x30;
        uVar8 = uVar14 + 1;
        if (8 < uVar8) break;
        uVar9 = uVar9 / 10;
      } while (9 < uVar16);
      if ((uVar8 & 1) == 0) {
        uVar9 = 0;
        do {
          uVar20 = uVar9;
          uVar9 = uVar20 + 1;
        } while (*(char *)((long)&local_1d8 + uVar20) != '\0');
        uVar9 = uVar8;
        if (uVar20 + 1 < 0xc0) {
          *(char *)((long)&local_1d8 + uVar20) = acStack_46[uVar14 + 3];
          *(undefined1 *)((long)&local_1d8 + uVar20 + 1) = 0;
        }
      }
      else {
        uVar9 = uVar14 + 2;
      }
      while (uVar8 != 0) {
        uVar8 = 0;
        do {
          uVar14 = uVar8;
          uVar8 = uVar14 + 1;
        } while (*(char *)((long)&local_1d8 + uVar14) != '\0');
        if (uVar14 + 1 < 0xc0) {
          *(char *)((long)&local_1d8 + uVar14) = acStack_46[uVar9 + 1];
          *(undefined1 *)((long)&local_1d8 + uVar14 + 1) = 0;
        }
        pcVar13 = acStack_46 + uVar9;
        uVar9 = uVar9 - 2;
        uVar8 = 0;
        do {
          uVar14 = uVar8;
          uVar8 = uVar14 + 1;
        } while (*(char *)((long)&local_1d8 + uVar14) != '\0');
        uVar8 = uVar9;
        if (uVar14 + 1 < 0xc0) {
          *(char *)((long)&local_1d8 + uVar14) = *pcVar13;
          *(undefined1 *)((long)&local_1d8 + uVar14 + 1) = 0;
        }
      }
    }
    uVar9 = 0;
    do {
      uVar8 = uVar9;
      uVar9 = uVar8 + 1;
    } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
    if (uVar9 < 0xc0) {
      *(undefined1 *)((long)&local_1d8 + uVar8) = 0x20;
      uVar8 = uVar9;
    }
    *(undefined1 *)((long)&local_1d8 + uVar8) = 0;
    uVar9 = 0xffffffffffffffff;
    do {
      uVar8 = uVar9;
      uVar9 = uVar8 + 1;
    } while (*(char *)((long)&local_1d8 + uVar8 + 1) != '\0');
    if (uVar8 + 2 < 0xc0) {
      *(undefined1 *)((long)&local_1d8 + uVar8 + 1) = 0x6d;
      bVar27 = uVar9 != 0xbe;
      uVar9 = uVar8 + 2;
      if (bVar27) {
        uVar9 = uVar8 + 3;
        *(undefined1 *)((long)&local_1d8 + uVar8 + 2) = 0x6f;
        if (uVar9 < 0xbf) {
          uVar9 = uVar8 + 4;
          *(undefined1 *)((long)&local_1d8 + uVar8 + 3) = 100;
          if (uVar9 < 0xbf) {
            uVar9 = uVar8 + 5;
            *(undefined1 *)((long)&uStack_1d4 + uVar8) = 0x65;
            if (uVar9 < 0xbf) {
              *(undefined1 *)((long)&uStack_1d4 + uVar8 + 1) = 0x6c;
              uVar9 = uVar8 + 6;
            }
          }
        }
      }
    }
    *(undefined1 *)((long)&local_1d8 + uVar9) = 0;
    uVar9 = 0;
    do {
      uVar8 = uVar9;
      uVar9 = uVar8 + 1;
    } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
    if (uVar9 < 0xc0) {
      *(undefined1 *)((long)&local_1d8 + uVar8) = 0x3d;
      uVar8 = uVar9;
    }
    *(undefined1 *)((long)&local_1d8 + uVar8) = 0;
    api = local_38;
    if (uVar12 == 0) {
      uVar9 = 0;
      do {
        uVar8 = uVar9;
        uVar9 = uVar8 + 1;
      } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
      if (uVar8 + 1 < 0xc0) {
        *(undefined2 *)((long)&local_1d8 + uVar8) = 0x30;
      }
    }
    else {
      uVar9 = 0xffffffffffffffff;
      do {
        uVar8 = uVar9;
        acStack_46[uVar8 + 3] = (char)uVar12 + (char)(uVar12 / 10) * -10 | 0x30;
        api = local_38;
        uVar9 = uVar8 + 1;
        if (8 < uVar9) break;
        bVar27 = 9 < uVar12;
        uVar12 = uVar12 / 10;
      } while (bVar27);
      if ((uVar9 & 1) == 0) {
        uVar14 = 0;
        do {
          uVar20 = uVar14;
          uVar14 = uVar20 + 1;
        } while (*(char *)((long)&local_1d8 + uVar20) != '\0');
        uVar14 = uVar9;
        if (uVar20 + 1 < 0xc0) {
          *(char *)((long)&local_1d8 + uVar20) = acStack_46[uVar8 + 3];
          *(undefined1 *)((long)&local_1d8 + uVar20 + 1) = 0;
        }
      }
      else {
        uVar14 = uVar8 + 2;
      }
      while (uVar9 != 0) {
        uVar9 = 0;
        do {
          uVar8 = uVar9;
          uVar9 = uVar8 + 1;
        } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
        if (uVar8 + 1 < 0xc0) {
          *(char *)((long)&local_1d8 + uVar8) = acStack_46[uVar14 + 1];
          *(undefined1 *)((long)&local_1d8 + uVar8 + 1) = 0;
        }
        pcVar13 = acStack_46 + uVar14;
        uVar14 = uVar14 - 2;
        uVar9 = 0;
        do {
          uVar8 = uVar9;
          uVar9 = uVar8 + 1;
        } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
        uVar9 = uVar14;
        if (uVar8 + 1 < 0xc0) {
          *(char *)((long)&local_1d8 + uVar8) = *pcVar13;
          *(undefined1 *)((long)&local_1d8 + uVar8 + 1) = 0;
        }
      }
    }
    pcVar13 = &DAT_10013022;
    pcVar11 = &DAT_10013022;
    if (-1 < (char)local_208) {
      pcVar11 = str_10013027;
    }
    cVar17 = *pcVar11;
    if (cVar17 != '\0') {
      uVar9 = 0;
      do {
        uVar8 = uVar9;
        uVar9 = uVar8 + 1;
      } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
      if (uVar9 < 0xc0) {
        *(undefined1 *)((long)&local_1d8 + uVar8) = 0x20;
        uVar8 = uVar9;
      }
      *(undefined1 *)((long)&local_1d8 + uVar8) = 0;
      uVar9 = 0;
      do {
        uVar8 = uVar9;
        uVar9 = uVar8 + 1;
      } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
      if (uVar8 + 1 < 0xc0) {
        cVar22 = 'c';
        pcVar21 = str_100131c4;
        do {
          pcVar21 = pcVar21 + 1;
          *(char *)((long)&local_1d8 + uVar8) = cVar22;
          uVar8 = uVar8 + 1;
          cVar22 = *pcVar21;
          if (cVar22 == '\0') break;
        } while (uVar8 < 0xbf);
      }
      *(undefined1 *)((long)&local_1d8 + uVar8) = 0;
      uVar9 = 0;
      do {
        uVar8 = uVar9;
        uVar9 = uVar8 + 1;
      } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
      if (uVar9 < 0xc0) {
        *(undefined1 *)((long)&local_1d8 + uVar8) = 0x3d;
        uVar8 = uVar9;
      }
      *(undefined1 *)((long)&local_1d8 + uVar8) = 0;
      uVar9 = 0;
      do {
        uVar8 = uVar9;
        uVar9 = uVar8 + 1;
      } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
      if (uVar8 + 1 < 0xc0) {
        do {
          pcVar11 = pcVar11 + 1;
          *(char *)((long)&local_1d8 + uVar8) = cVar17;
          uVar8 = uVar8 + 1;
          cVar17 = *pcVar11;
          if (cVar17 == '\0') break;
        } while (uVar8 < 0xbf);
      }
      *(undefined1 *)((long)&local_1d8 + uVar8) = 0;
    }
    if (((*api != 0x54584b57) || ((uint)api[2] < 0xb4)) || ((api[0x2b] == 0 || (api[0x2c] == 0)))) {
      pcVar13 = str_10013027;
    }
    cVar17 = *pcVar13;
    if (cVar17 != '\0') {
      uVar9 = 0;
      do {
        uVar8 = uVar9;
        uVar9 = uVar8 + 1;
      } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
      if (uVar9 < 0xc0) {
        *(undefined1 *)((long)&local_1d8 + uVar8) = 0x20;
        uVar8 = uVar9;
      }
      *(undefined1 *)((long)&local_1d8 + uVar8) = 0;
      uVar9 = 0xffffffffffffffff;
      do {
        uVar8 = uVar9;
        uVar9 = uVar8 + 1;
      } while (*(char *)((long)&local_1d8 + uVar8 + 1) != '\0');
      if (uVar8 + 2 < 0xc0) {
        *(undefined1 *)((long)&local_1d8 + uVar8 + 1) = 0x6d;
        bVar27 = uVar9 != 0xbe;
        uVar9 = uVar8 + 2;
        if (bVar27) {
          uVar9 = uVar8 + 3;
          *(undefined1 *)((long)&local_1d8 + uVar8 + 2) = 0x73;
          if (uVar9 < 0xbf) {
            uVar9 = uVar8 + 4;
            *(undefined1 *)((long)&local_1d8 + uVar8 + 3) = 0x72;
            if (uVar9 < 0xbf) {
              uVar9 = uVar8 + 5;
              *(undefined1 *)((long)&uStack_1d4 + uVar8) = 0x41;
              if (uVar9 < 0xbf) {
                uVar9 = uVar8 + 6;
                *(undefined1 *)((long)&uStack_1d4 + uVar8 + 1) = 0x70;
                if (uVar9 < 0xbf) {
                  *(undefined1 *)((long)&uStack_1d4 + uVar8 + 2) = 0x69;
                  uVar9 = uVar8 + 7;
                }
              }
            }
          }
        }
      }
      *(undefined1 *)((long)&local_1d8 + uVar9) = 0;
      uVar9 = 0;
      do {
        uVar8 = uVar9;
        uVar9 = uVar8 + 1;
      } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
      if (uVar9 < 0xc0) {
        *(undefined1 *)((long)&local_1d8 + uVar8) = 0x3d;
        uVar8 = uVar9;
      }
      *(undefined1 *)((long)&local_1d8 + uVar8) = 0;
      uVar9 = 0;
      do {
        uVar8 = uVar9;
        uVar9 = uVar8 + 1;
      } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
      if (uVar8 + 1 < 0xc0) {
        do {
          pcVar13 = pcVar13 + 1;
          *(char *)((long)&local_1d8 + uVar8) = cVar17;
          uVar8 = uVar8 + 1;
          cVar17 = *pcVar13;
          if (cVar17 == '\0') break;
        } while (uVar8 < 0xbf);
      }
      *(undefined1 *)((long)&local_1d8 + uVar8) = 0;
    }
    if ((code *)(ulong)(uint)api[3] != (code *)0x0) {
      (*(code *)(ulong)(uint)api[3])(str_10012e0e,str_100131ce,&local_1d8);
    }
  }
  else {
LAB_10001181:
    uVar9 = 0;
    do {
      uVar8 = uVar9;
      uVar9 = uVar8 + 1;
    } while (local_548[uVar8] != '\0');
    if (uVar8 + 1 < 0x300) {
      cVar17 = ' ';
      pcVar13 = str_1001314e;
      do {
        pcVar13 = pcVar13 + 1;
        local_548[uVar8] = cVar17;
        uVar8 = uVar8 + 1;
        cVar17 = *pcVar13;
        if (cVar17 == '\0') break;
      } while (uVar8 < 0x2ff);
    }
    local_548[uVar8] = '\0';
    pbVar26 = local_238;
  }
  iVar3 = 0;
LAB_100011f7:
  piVar2 = local_38;
  local_558 = CONCAT44(iVar3,(undefined4)local_558);
  if (*api == 0x54584b57) {
    if (0x5f < (uint)api[2]) {
      if (api[0x17] != 0) {
        uVar16 = 0;
        do {
          local_220 = CONCAT44(PF_PART4(local_220, 4),uVar16);
          uVar16 = uVar16 & 0xff;
          iVar3 = 0;
          do {
            uVar15 = (undefined1)iVar3;
            uVar6 = recovered_10011b30(piVar2,uVar16,uVar15,0,(undefined1 *)&local_1d8);
            if ((int)uVar6 != 0) {
              recovered_1000c590(piVar2,(byte *)&local_1d8,(int *)local_598);
              if ((char)uStack_1cc < '\0') {
                uVar6 = recovered_10011b30(piVar2,uVar16,uVar15,1,(undefined1 *)&local_210);
                if ((int)uVar6 != 0) {
                  recovered_1000c590(piVar2,(byte *)&local_210,(int *)local_598);
                }
                uVar6 = recovered_10011b30(piVar2,uVar16,uVar15,2,(undefined1 *)&local_210);
                if ((int)uVar6 != 0) {
                  recovered_1000c590(piVar2,(byte *)&local_210,(int *)local_598);
                }
                uVar6 = recovered_10011b30(piVar2,uVar16,uVar15,3,(undefined1 *)&local_210);
                if ((int)uVar6 != 0) {
                  recovered_1000c590(piVar2,(byte *)&local_210,(int *)local_598);
                }
                uVar6 = recovered_10011b30(piVar2,uVar16,uVar15,4,(undefined1 *)&local_210);
                if ((int)uVar6 != 0) {
                  recovered_1000c590(piVar2,(byte *)&local_210,(int *)local_598);
                }
                uVar6 = recovered_10011b30(piVar2,uVar16,uVar15,5,(undefined1 *)&local_210);
                if ((int)uVar6 != 0) {
                  recovered_1000c590(piVar2,(byte *)&local_210,(int *)local_598);
                }
                uVar6 = recovered_10011b30(piVar2,uVar16,uVar15,6,(undefined1 *)&local_210);
                if ((int)uVar6 != 0) {
                  recovered_1000c590(piVar2,(byte *)&local_210,(int *)local_598);
                }
                uVar6 = recovered_10011b30(piVar2,uVar16,uVar15,7,(undefined1 *)&local_210);
                if ((int)uVar6 != 0) {
                  recovered_1000c590(piVar2,(byte *)&local_210,(int *)local_598);
                }
              }
            }
            iVar3 = iVar3 + 1;
          } while (iVar3 != 0x20);
          uVar16 = (uint)local_220 + 1;
        } while (uVar16 != 0x10);
        pbVar26 = local_238;
        api = local_38;
      }
    }
  }
  if (local_598[4] != 0) {
    local_1d8 = local_1d8 & 0xffffff00;
    uVar9 = 0;
    do {
      uVar8 = uVar9;
      uVar9 = uVar8 + 1;
    } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
    if (uVar8 + 1 < 0x180) {
      cVar17 = 'c';
      pcVar13 = str_100136fb;
      do {
        pcVar13 = pcVar13 + 1;
        *(char *)((long)&local_1d8 + uVar8) = cVar17;
        uVar8 = uVar8 + 1;
        cVar17 = *pcVar13;
        if (cVar17 == '\0') break;
      } while (uVar8 < 0x17f);
    }
    *(undefined1 *)((long)&local_1d8 + uVar8) = 0;
    uVar9 = 0;
    do {
      uVar8 = uVar9;
      uVar9 = uVar8 + 1;
    } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
    if (uVar9 < 0x180) {
      *(undefined1 *)((long)&local_1d8 + uVar8) = 0x20;
      uVar8 = uVar9;
    }
    *(undefined1 *)((long)&local_1d8 + uVar8) = 0;
    uVar9 = 0xffffffffffffffff;
    do {
      uVar8 = uVar9;
      uVar9 = uVar8 + 1;
    } while (*(char *)((long)&local_1d8 + uVar8 + 1) != '\0');
    if (uVar8 + 2 < 0x180) {
      *(undefined1 *)((long)&local_1d8 + uVar8 + 1) = 100;
      bVar27 = uVar9 != 0x17e;
      uVar9 = uVar8 + 2;
      if (bVar27) {
        uVar9 = uVar8 + 3;
        *(undefined1 *)((long)&local_1d8 + uVar8 + 2) = 0x65;
        if (uVar9 < 0x17f) {
          uVar9 = uVar8 + 4;
          *(undefined1 *)((long)&local_1d8 + uVar8 + 3) = 0x76;
          if (uVar9 < 0x17f) {
            uVar9 = uVar8 + 5;
            *(undefined1 *)((long)&uStack_1d4 + uVar8) = 0x69;
            if (uVar9 < 0x17f) {
              uVar9 = uVar8 + 6;
              *(undefined1 *)((long)&uStack_1d4 + uVar8 + 1) = 99;
              if (uVar9 < 0x17f) {
                uVar9 = uVar8 + 7;
                *(undefined1 *)((long)&uStack_1d4 + uVar8 + 2) = 0x65;
                if (uVar9 < 0x17f) {
                  *(undefined1 *)((long)&uStack_1d4 + uVar8 + 3) = 0x73;
                  uVar9 = uVar8 + 8;
                }
              }
            }
          }
        }
      }
    }
    *(undefined1 *)((long)&local_1d8 + uVar9) = 0;
    uVar9 = 0;
    do {
      uVar8 = uVar9;
      uVar9 = uVar8 + 1;
    } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
    if (uVar9 < 0x180) {
      *(undefined1 *)((long)&local_1d8 + uVar8) = 0x3d;
      uVar8 = uVar9;
    }
    *(undefined1 *)((long)&local_1d8 + uVar8) = 0;
    uVar9 = 0xffffffffffffffff;
    uVar16 = local_598[4];
    do {
      uVar8 = uVar9;
      *(byte *)((long)&local_210 + uVar8 + 1) = (byte)(uVar16 % 10) | 0x30;
      uVar9 = uVar8 + 1;
      if (8 < uVar9) break;
      bVar27 = 9 < uVar16;
      uVar16 = uVar16 / 10;
    } while (bVar27);
    if ((uVar9 & 1) == 0) {
      uVar14 = 0;
      do {
        uVar20 = uVar14;
        uVar14 = uVar20 + 1;
      } while (*(char *)((long)&local_1d8 + uVar20) != '\0');
      uVar14 = uVar9;
      if (uVar20 + 1 < 0x180) {
        *(undefined1 *)((long)&local_1d8 + uVar20) = *(undefined1 *)((long)&local_210 + uVar8 + 1);
        *(undefined1 *)((long)&local_1d8 + uVar20 + 1) = 0;
      }
    }
    else {
      uVar14 = uVar8 + 2;
    }
    while (uVar9 != 0) {
      uVar9 = 0;
      do {
        uVar8 = uVar9;
        uVar9 = uVar8 + 1;
      } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
      if (uVar8 + 1 < 0x180) {
        *(undefined1 *)((long)&local_1d8 + uVar8) = *(undefined1 *)((long)&local_214 + uVar14 + 3);
        *(undefined1 *)((long)&local_1d8 + uVar8 + 1) = 0;
      }
      lVar1 = uVar14 + 2;
      uVar14 = uVar14 - 2;
      uVar9 = 0;
      do {
        uVar8 = uVar9;
        uVar9 = uVar8 + 1;
      } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
      uVar9 = uVar14;
      if (uVar8 + 1 < 0x180) {
        *(undefined1 *)((long)&local_1d8 + uVar8) = *(undefined1 *)((long)&local_214 + lVar1);
        *(undefined1 *)((long)&local_1d8 + uVar8 + 1) = 0;
      }
    }
    uVar9 = 0;
    do {
      uVar8 = uVar9;
      uVar9 = uVar8 + 1;
    } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
    if (uVar9 < 0x180) {
      *(undefined1 *)((long)&local_1d8 + uVar8) = 0x20;
      uVar8 = uVar9;
    }
    *(undefined1 *)((long)&local_1d8 + uVar8) = 0;
    uVar9 = 0xffffffffffffffff;
    do {
      uVar8 = uVar9;
      uVar9 = uVar8 + 1;
    } while (*(char *)((long)&local_1d8 + uVar8 + 1) != '\0');
    if (uVar8 + 2 < 0x180) {
      *(undefined1 *)((long)&local_1d8 + uVar8 + 1) = 100;
      bVar27 = uVar9 != 0x17e;
      uVar9 = uVar8 + 2;
      if (bVar27) {
        uVar9 = uVar8 + 3;
        *(undefined1 *)((long)&local_1d8 + uVar8 + 2) = 0x69;
        if (uVar9 < 0x17f) {
          uVar9 = uVar8 + 4;
          *(undefined1 *)((long)&local_1d8 + uVar8 + 3) = 0x73;
          if (uVar9 < 0x17f) {
            uVar9 = uVar8 + 5;
            *(undefined1 *)((long)&uStack_1d4 + uVar8) = 0x70;
            if (uVar9 < 0x17f) {
              uVar9 = uVar8 + 6;
              *(undefined1 *)((long)&uStack_1d4 + uVar8 + 1) = 0x6c;
              if (uVar9 < 0x17f) {
                uVar9 = uVar8 + 7;
                *(undefined1 *)((long)&uStack_1d4 + uVar8 + 2) = 0x61;
                if (uVar9 < 0x17f) {
                  *(undefined1 *)((long)&uStack_1d4 + uVar8 + 3) = 0x79;
                  uVar9 = uVar8 + 8;
                }
              }
            }
          }
        }
      }
    }
    *(undefined1 *)((long)&local_1d8 + uVar9) = 0;
    uVar9 = 0;
    do {
      uVar8 = uVar9;
      uVar9 = uVar8 + 1;
    } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
    if (uVar9 < 0x180) {
      *(undefined1 *)((long)&local_1d8 + uVar8) = 0x3d;
      uVar8 = uVar9;
    }
    *(undefined1 *)((long)&local_1d8 + uVar8) = 0;
    if (local_598[5] == 0) {
      uVar9 = 0;
      do {
        uVar8 = uVar9;
        uVar9 = uVar8 + 1;
      } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
      if (uVar8 + 1 < 0x180) {
        *(undefined2 *)((long)&local_1d8 + uVar8) = 0x30;
      }
    }
    else {
      uVar9 = 0xffffffffffffffff;
      uVar16 = local_598[5];
      do {
        uVar8 = uVar9;
        *(byte *)((long)&local_210 + uVar8 + 1) = (byte)(uVar16 % 10) | 0x30;
        uVar9 = uVar8 + 1;
        if (8 < uVar9) break;
        bVar27 = 9 < uVar16;
        uVar16 = uVar16 / 10;
      } while (bVar27);
      if ((uVar9 & 1) == 0) {
        uVar14 = 0;
        do {
          uVar20 = uVar14;
          uVar14 = uVar20 + 1;
        } while (*(char *)((long)&local_1d8 + uVar20) != '\0');
        uVar14 = uVar9;
        if (uVar20 + 1 < 0x180) {
          *(undefined1 *)((long)&local_1d8 + uVar20) = *(undefined1 *)((long)&local_210 + uVar8 + 1)
          ;
          *(undefined1 *)((long)&local_1d8 + uVar20 + 1) = 0;
        }
      }
      else {
        uVar14 = uVar8 + 2;
      }
      while (uVar9 != 0) {
        uVar9 = 0;
        do {
          uVar8 = uVar9;
          uVar9 = uVar8 + 1;
        } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
        if (uVar8 + 1 < 0x180) {
          *(undefined1 *)((long)&local_1d8 + uVar8) = *(undefined1 *)((long)&local_214 + uVar14 + 3)
          ;
          *(undefined1 *)((long)&local_1d8 + uVar8 + 1) = 0;
        }
        lVar1 = uVar14 + 2;
        uVar14 = uVar14 - 2;
        uVar9 = 0;
        do {
          uVar8 = uVar9;
          uVar9 = uVar8 + 1;
        } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
        uVar9 = uVar14;
        if (uVar8 + 1 < 0x180) {
          *(undefined1 *)((long)&local_1d8 + uVar8) = *(undefined1 *)((long)&local_214 + lVar1);
          *(undefined1 *)((long)&local_1d8 + uVar8 + 1) = 0;
        }
      }
    }
    uVar9 = 0;
    do {
      uVar8 = uVar9;
      uVar9 = uVar8 + 1;
    } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
    if (uVar9 < 0x180) {
      *(undefined1 *)((long)&local_1d8 + uVar8) = 0x20;
      uVar8 = uVar9;
    }
    *(undefined1 *)((long)&local_1d8 + uVar8) = 0;
    uVar9 = 0xffffffffffffffff;
    do {
      uVar8 = uVar9;
      uVar9 = uVar8 + 1;
    } while (*(char *)((long)&local_1d8 + uVar8 + 1) != '\0');
    if (uVar8 + 2 < 0x180) {
      *(undefined1 *)((long)&local_1d8 + uVar8 + 1) = 0x61;
      bVar27 = uVar9 != 0x17e;
      uVar9 = uVar8 + 2;
      if (bVar27) {
        uVar9 = uVar8 + 3;
        *(undefined1 *)((long)&local_1d8 + uVar8 + 2) = 0x68;
        if (uVar9 < 0x17f) {
          uVar9 = uVar8 + 4;
          *(undefined1 *)((long)&local_1d8 + uVar8 + 3) = 99;
          if (uVar9 < 0x17f) {
            *(undefined1 *)((long)&uStack_1d4 + uVar8) = 0x69;
            uVar9 = uVar8 + 5;
          }
        }
      }
    }
    *(undefined1 *)((long)&local_1d8 + uVar9) = 0;
    uVar9 = 0;
    do {
      uVar8 = uVar9;
      uVar9 = uVar8 + 1;
    } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
    if (uVar9 < 0x180) {
      *(undefined1 *)((long)&local_1d8 + uVar8) = 0x3d;
      uVar8 = uVar9;
    }
    *(undefined1 *)((long)&local_1d8 + uVar8) = 0;
    if (local_598[6] == 0) {
      uVar9 = 0;
      do {
        uVar8 = uVar9;
        uVar9 = uVar8 + 1;
      } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
      if (uVar8 + 1 < 0x180) {
        *(undefined2 *)((long)&local_1d8 + uVar8) = 0x30;
      }
    }
    else {
      uVar9 = 0xffffffffffffffff;
      uVar16 = local_598[6];
      do {
        uVar8 = uVar9;
        *(byte *)((long)&local_210 + uVar8 + 1) = (byte)(uVar16 % 10) | 0x30;
        uVar9 = uVar8 + 1;
        if (8 < uVar9) break;
        bVar27 = 9 < uVar16;
        uVar16 = uVar16 / 10;
      } while (bVar27);
      if ((uVar9 & 1) == 0) {
        uVar14 = 0;
        do {
          uVar20 = uVar14;
          uVar14 = uVar20 + 1;
        } while (*(char *)((long)&local_1d8 + uVar20) != '\0');
        uVar14 = uVar9;
        if (uVar20 + 1 < 0x180) {
          *(undefined1 *)((long)&local_1d8 + uVar20) = *(undefined1 *)((long)&local_210 + uVar8 + 1)
          ;
          *(undefined1 *)((long)&local_1d8 + uVar20 + 1) = 0;
        }
      }
      else {
        uVar14 = uVar8 + 2;
      }
      while (uVar9 != 0) {
        uVar9 = 0;
        do {
          uVar8 = uVar9;
          uVar9 = uVar8 + 1;
        } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
        if (uVar8 + 1 < 0x180) {
          *(undefined1 *)((long)&local_1d8 + uVar8) = *(undefined1 *)((long)&local_214 + uVar14 + 3)
          ;
          *(undefined1 *)((long)&local_1d8 + uVar8 + 1) = 0;
        }
        lVar1 = uVar14 + 2;
        uVar14 = uVar14 - 2;
        uVar9 = 0;
        do {
          uVar8 = uVar9;
          uVar9 = uVar8 + 1;
        } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
        uVar9 = uVar14;
        if (uVar8 + 1 < 0x180) {
          *(undefined1 *)((long)&local_1d8 + uVar8) = *(undefined1 *)((long)&local_214 + lVar1);
          *(undefined1 *)((long)&local_1d8 + uVar8 + 1) = 0;
        }
      }
    }
    uVar9 = 0;
    do {
      uVar8 = uVar9;
      uVar9 = uVar8 + 1;
    } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
    if (uVar9 < 0x180) {
      *(undefined1 *)((long)&local_1d8 + uVar8) = 0x20;
      uVar8 = uVar9;
    }
    *(undefined1 *)((long)&local_1d8 + uVar8) = 0;
    uVar9 = 0;
    do {
      uVar8 = uVar9;
      uVar9 = uVar8 + 1;
    } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
    if (uVar9 < 0x180) {
      *(undefined1 *)((long)&local_1d8 + uVar8) = 0x68;
      if (uVar9 != 0x17f) {
        uVar9 = uVar8 + 2;
        *(undefined1 *)((long)&local_1d8 + uVar8 + 1) = 100;
        if (uVar9 < 0x17f) {
          *(undefined1 *)((long)&local_1d8 + uVar8 + 2) = 0x61;
          uVar9 = uVar8 + 3;
        }
      }
    }
    else {
      uVar9 = uVar8;
    }
    *(undefined1 *)((long)&local_1d8 + uVar9) = 0;
    uVar9 = 0;
    do {
      uVar8 = uVar9;
      uVar9 = uVar8 + 1;
    } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
    if (uVar9 < 0x180) {
      *(undefined1 *)((long)&local_1d8 + uVar8) = 0x3d;
      uVar8 = uVar9;
    }
    *(undefined1 *)((long)&local_1d8 + uVar8) = 0;
    if (local_598[7] == 0) {
      uVar9 = 0;
      do {
        uVar8 = uVar9;
        uVar9 = uVar8 + 1;
      } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
      if (uVar8 + 1 < 0x180) {
        *(undefined2 *)((long)&local_1d8 + uVar8) = 0x30;
      }
    }
    else {
      uVar9 = 0xffffffffffffffff;
      uVar16 = local_598[7];
      do {
        uVar8 = uVar9;
        *(byte *)((long)&local_210 + uVar8 + 1) = (byte)(uVar16 % 10) | 0x30;
        uVar9 = uVar8 + 1;
        if (8 < uVar9) break;
        bVar27 = 9 < uVar16;
        uVar16 = uVar16 / 10;
      } while (bVar27);
      if ((uVar9 & 1) == 0) {
        uVar14 = 0;
        do {
          uVar20 = uVar14;
          uVar14 = uVar20 + 1;
        } while (*(char *)((long)&local_1d8 + uVar20) != '\0');
        uVar14 = uVar9;
        if (uVar20 + 1 < 0x180) {
          *(undefined1 *)((long)&local_1d8 + uVar20) = *(undefined1 *)((long)&local_210 + uVar8 + 1)
          ;
          *(undefined1 *)((long)&local_1d8 + uVar20 + 1) = 0;
        }
      }
      else {
        uVar14 = uVar8 + 2;
      }
      while (uVar9 != 0) {
        uVar9 = 0;
        do {
          uVar8 = uVar9;
          uVar9 = uVar8 + 1;
        } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
        if (uVar8 + 1 < 0x180) {
          *(undefined1 *)((long)&local_1d8 + uVar8) = *(undefined1 *)((long)&local_214 + uVar14 + 3)
          ;
          *(undefined1 *)((long)&local_1d8 + uVar8 + 1) = 0;
        }
        lVar1 = uVar14 + 2;
        uVar14 = uVar14 - 2;
        uVar9 = 0;
        do {
          uVar8 = uVar9;
          uVar9 = uVar8 + 1;
        } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
        uVar9 = uVar14;
        if (uVar8 + 1 < 0x180) {
          *(undefined1 *)((long)&local_1d8 + uVar8) = *(undefined1 *)((long)&local_214 + lVar1);
          *(undefined1 *)((long)&local_1d8 + uVar8 + 1) = 0;
        }
      }
    }
    uVar9 = 0;
    do {
      uVar8 = uVar9;
      uVar9 = uVar8 + 1;
    } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
    if (uVar9 < 0x180) {
      *(undefined1 *)((long)&local_1d8 + uVar8) = 0x20;
      uVar8 = uVar9;
    }
    *(undefined1 *)((long)&local_1d8 + uVar8) = 0;
    uVar9 = 0;
    do {
      uVar8 = uVar9;
      uVar9 = uVar8 + 1;
    } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
    if (uVar9 < 0x180) {
      *(undefined1 *)((long)&local_1d8 + uVar8) = 0x75;
      if (uVar9 != 0x17f) {
        uVar9 = uVar8 + 2;
        *(undefined1 *)((long)&local_1d8 + uVar8 + 1) = 0x73;
        if (uVar9 < 0x17f) {
          *(undefined1 *)((long)&local_1d8 + uVar8 + 2) = 0x62;
          uVar9 = uVar8 + 3;
        }
      }
    }
    else {
      uVar9 = uVar8;
    }
    *(undefined1 *)((long)&local_1d8 + uVar9) = 0;
    uVar9 = 0;
    do {
      uVar8 = uVar9;
      uVar9 = uVar8 + 1;
    } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
    if (uVar9 < 0x180) {
      *(undefined1 *)((long)&local_1d8 + uVar8) = 0x3d;
      uVar8 = uVar9;
    }
    *(undefined1 *)((long)&local_1d8 + uVar8) = 0;
    if (local_598[8] == 0) {
      uVar9 = 0;
      do {
        uVar8 = uVar9;
        uVar9 = uVar8 + 1;
      } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
      if (uVar8 + 1 < 0x180) {
        *(undefined2 *)((long)&local_1d8 + uVar8) = 0x30;
      }
    }
    else {
      uVar9 = 0xffffffffffffffff;
      uVar16 = local_598[8];
      do {
        uVar8 = uVar9;
        *(byte *)((long)&local_210 + uVar8 + 1) = (byte)(uVar16 % 10) | 0x30;
        uVar9 = uVar8 + 1;
        if (8 < uVar9) break;
        bVar27 = 9 < uVar16;
        uVar16 = uVar16 / 10;
      } while (bVar27);
      if ((uVar9 & 1) == 0) {
        uVar14 = 0;
        do {
          uVar20 = uVar14;
          uVar14 = uVar20 + 1;
        } while (*(char *)((long)&local_1d8 + uVar20) != '\0');
        uVar14 = uVar9;
        if (uVar20 + 1 < 0x180) {
          *(undefined1 *)((long)&local_1d8 + uVar20) = *(undefined1 *)((long)&local_210 + uVar8 + 1)
          ;
          *(undefined1 *)((long)&local_1d8 + uVar20 + 1) = 0;
        }
      }
      else {
        uVar14 = uVar8 + 2;
      }
      while (uVar9 != 0) {
        uVar9 = 0;
        do {
          uVar8 = uVar9;
          uVar9 = uVar8 + 1;
        } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
        if (uVar8 + 1 < 0x180) {
          *(undefined1 *)((long)&local_1d8 + uVar8) = *(undefined1 *)((long)&local_214 + uVar14 + 3)
          ;
          *(undefined1 *)((long)&local_1d8 + uVar8 + 1) = 0;
        }
        lVar1 = uVar14 + 2;
        uVar14 = uVar14 - 2;
        uVar9 = 0;
        do {
          uVar8 = uVar9;
          uVar9 = uVar8 + 1;
        } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
        uVar9 = uVar14;
        if (uVar8 + 1 < 0x180) {
          *(undefined1 *)((long)&local_1d8 + uVar8) = *(undefined1 *)((long)&local_214 + lVar1);
          *(undefined1 *)((long)&local_1d8 + uVar8 + 1) = 0;
        }
      }
    }
    uVar9 = 0;
    do {
      uVar8 = uVar9;
      uVar9 = uVar8 + 1;
    } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
    if (uVar9 < 0x180) {
      *(undefined1 *)((long)&local_1d8 + uVar8) = 0x20;
      uVar8 = uVar9;
    }
    *(undefined1 *)((long)&local_1d8 + uVar8) = 0;
    uVar9 = 0xffffffffffffffff;
    do {
      uVar8 = uVar9;
      uVar9 = uVar8 + 1;
    } while (*(char *)((long)&local_1d8 + uVar8 + 1) != '\0');
    if (uVar8 + 2 < 0x180) {
      *(undefined1 *)((long)&local_1d8 + uVar8 + 1) = 0x75;
      bVar27 = uVar9 != 0x17e;
      uVar9 = uVar8 + 2;
      if (bVar27) {
        uVar9 = uVar8 + 3;
        *(undefined1 *)((long)&local_1d8 + uVar8 + 2) = 0x68;
        if (uVar9 < 0x17f) {
          uVar9 = uVar8 + 4;
          *(undefined1 *)((long)&local_1d8 + uVar8 + 3) = 99;
          if (uVar9 < 0x17f) {
            *(undefined1 *)((long)&uStack_1d4 + uVar8) = 0x69;
            uVar9 = uVar8 + 5;
          }
        }
      }
    }
    *(undefined1 *)((long)&local_1d8 + uVar9) = 0;
    uVar9 = 0;
    do {
      uVar8 = uVar9;
      uVar9 = uVar8 + 1;
    } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
    if (uVar9 < 0x180) {
      *(undefined1 *)((long)&local_1d8 + uVar8) = 0x3d;
      uVar8 = uVar9;
    }
    *(undefined1 *)((long)&local_1d8 + uVar8) = 0;
    if (local_598[9] == 0) {
      uVar9 = 0;
      do {
        uVar8 = uVar9;
        uVar9 = uVar8 + 1;
      } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
      if (uVar8 + 1 < 0x180) {
        *(undefined2 *)((long)&local_1d8 + uVar8) = 0x30;
      }
    }
    else {
      uVar9 = 0xffffffffffffffff;
      uVar16 = local_598[9];
      do {
        uVar8 = uVar9;
        *(byte *)((long)&local_210 + uVar8 + 1) = (byte)(uVar16 % 10) | 0x30;
        uVar9 = uVar8 + 1;
        if (8 < uVar9) break;
        bVar27 = 9 < uVar16;
        uVar16 = uVar16 / 10;
      } while (bVar27);
      if ((uVar9 & 1) == 0) {
        uVar14 = 0;
        do {
          uVar20 = uVar14;
          uVar14 = uVar20 + 1;
        } while (*(char *)((long)&local_1d8 + uVar20) != '\0');
        uVar14 = uVar9;
        if (uVar20 + 1 < 0x180) {
          *(undefined1 *)((long)&local_1d8 + uVar20) = *(undefined1 *)((long)&local_210 + uVar8 + 1)
          ;
          *(undefined1 *)((long)&local_1d8 + uVar20 + 1) = 0;
        }
      }
      else {
        uVar14 = uVar8 + 2;
      }
      while (uVar9 != 0) {
        uVar9 = 0;
        do {
          uVar8 = uVar9;
          uVar9 = uVar8 + 1;
        } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
        if (uVar8 + 1 < 0x180) {
          *(undefined1 *)((long)&local_1d8 + uVar8) = *(undefined1 *)((long)&local_214 + uVar14 + 3)
          ;
          *(undefined1 *)((long)&local_1d8 + uVar8 + 1) = 0;
        }
        lVar1 = uVar14 + 2;
        uVar14 = uVar14 - 2;
        uVar9 = 0;
        do {
          uVar8 = uVar9;
          uVar9 = uVar8 + 1;
        } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
        uVar9 = uVar14;
        if (uVar8 + 1 < 0x180) {
          *(undefined1 *)((long)&local_1d8 + uVar8) = *(undefined1 *)((long)&local_214 + lVar1);
          *(undefined1 *)((long)&local_1d8 + uVar8 + 1) = 0;
        }
      }
    }
    uVar9 = 0;
    do {
      uVar8 = uVar9;
      uVar9 = uVar8 + 1;
    } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
    if (uVar9 < 0x180) {
      *(undefined1 *)((long)&local_1d8 + uVar8) = 0x20;
      uVar8 = uVar9;
    }
    *(undefined1 *)((long)&local_1d8 + uVar8) = 0;
    uVar9 = 0xffffffffffffffff;
    do {
      uVar8 = uVar9;
      uVar9 = uVar8 + 1;
    } while (*(char *)((long)&local_1d8 + uVar8 + 1) != '\0');
    if (uVar8 + 2 < 0x180) {
      *(undefined1 *)((long)&local_1d8 + uVar8 + 1) = 0x6f;
      bVar27 = uVar9 != 0x17e;
      uVar9 = uVar8 + 2;
      if (bVar27) {
        uVar9 = uVar8 + 3;
        *(undefined1 *)((long)&local_1d8 + uVar8 + 2) = 0x68;
        if (uVar9 < 0x17f) {
          uVar9 = uVar8 + 4;
          *(undefined1 *)((long)&local_1d8 + uVar8 + 3) = 99;
          if (uVar9 < 0x17f) {
            *(undefined1 *)((long)&uStack_1d4 + uVar8) = 0x69;
            uVar9 = uVar8 + 5;
          }
        }
      }
    }
    *(undefined1 *)((long)&local_1d8 + uVar9) = 0;
    uVar9 = 0;
    do {
      uVar8 = uVar9;
      uVar9 = uVar8 + 1;
    } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
    if (uVar9 < 0x180) {
      *(undefined1 *)((long)&local_1d8 + uVar8) = 0x3d;
      uVar8 = uVar9;
    }
    *(undefined1 *)((long)&local_1d8 + uVar8) = 0;
    if (local_598[10] == 0) {
      uVar9 = 0;
      do {
        uVar8 = uVar9;
        uVar9 = uVar8 + 1;
      } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
      if (uVar8 + 1 < 0x180) {
        *(undefined2 *)((long)&local_1d8 + uVar8) = 0x30;
      }
    }
    else {
      uVar9 = 0xffffffffffffffff;
      uVar16 = local_598[10];
      do {
        uVar8 = uVar9;
        *(byte *)((long)&local_210 + uVar8 + 1) = (byte)(uVar16 % 10) | 0x30;
        uVar9 = uVar8 + 1;
        if (8 < uVar9) break;
        bVar27 = 9 < uVar16;
        uVar16 = uVar16 / 10;
      } while (bVar27);
      if ((uVar9 & 1) == 0) {
        uVar14 = 0;
        do {
          uVar20 = uVar14;
          uVar14 = uVar20 + 1;
        } while (*(char *)((long)&local_1d8 + uVar20) != '\0');
        uVar14 = uVar9;
        if (uVar20 + 1 < 0x180) {
          *(undefined1 *)((long)&local_1d8 + uVar20) = *(undefined1 *)((long)&local_210 + uVar8 + 1)
          ;
          *(undefined1 *)((long)&local_1d8 + uVar20 + 1) = 0;
        }
      }
      else {
        uVar14 = uVar8 + 2;
      }
      while (uVar9 != 0) {
        uVar9 = 0;
        do {
          uVar8 = uVar9;
          uVar9 = uVar8 + 1;
        } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
        if (uVar8 + 1 < 0x180) {
          *(undefined1 *)((long)&local_1d8 + uVar8) = *(undefined1 *)((long)&local_214 + uVar14 + 3)
          ;
          *(undefined1 *)((long)&local_1d8 + uVar8 + 1) = 0;
        }
        lVar1 = uVar14 + 2;
        uVar14 = uVar14 - 2;
        uVar9 = 0;
        do {
          uVar8 = uVar9;
          uVar9 = uVar8 + 1;
        } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
        uVar9 = uVar14;
        if (uVar8 + 1 < 0x180) {
          *(undefined1 *)((long)&local_1d8 + uVar8) = *(undefined1 *)((long)&local_214 + lVar1);
          *(undefined1 *)((long)&local_1d8 + uVar8 + 1) = 0;
        }
      }
    }
    uVar9 = 0;
    do {
      uVar8 = uVar9;
      uVar9 = uVar8 + 1;
    } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
    if (uVar9 < 0x180) {
      *(undefined1 *)((long)&local_1d8 + uVar8) = 0x20;
      uVar8 = uVar9;
    }
    *(undefined1 *)((long)&local_1d8 + uVar8) = 0;
    uVar9 = 0xffffffffffffffff;
    do {
      uVar8 = uVar9;
      uVar9 = uVar8 + 1;
    } while (*(char *)((long)&local_1d8 + uVar8 + 1) != '\0');
    if (uVar8 + 2 < 0x180) {
      *(undefined1 *)((long)&local_1d8 + uVar8 + 1) = 0x65;
      bVar27 = uVar9 != 0x17e;
      uVar9 = uVar8 + 2;
      if (bVar27) {
        uVar9 = uVar8 + 3;
        *(undefined1 *)((long)&local_1d8 + uVar8 + 2) = 0x68;
        if (uVar9 < 0x17f) {
          uVar9 = uVar8 + 4;
          *(undefined1 *)((long)&local_1d8 + uVar8 + 3) = 99;
          if (uVar9 < 0x17f) {
            *(undefined1 *)((long)&uStack_1d4 + uVar8) = 0x69;
            uVar9 = uVar8 + 5;
          }
        }
      }
    }
    *(undefined1 *)((long)&local_1d8 + uVar9) = 0;
    uVar9 = 0;
    do {
      uVar8 = uVar9;
      uVar9 = uVar8 + 1;
    } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
    if (uVar9 < 0x180) {
      *(undefined1 *)((long)&local_1d8 + uVar8) = 0x3d;
      uVar8 = uVar9;
    }
    *(undefined1 *)((long)&local_1d8 + uVar8) = 0;
    if (local_598[0xb] == 0) {
      uVar9 = 0;
      do {
        uVar8 = uVar9;
        uVar9 = uVar8 + 1;
      } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
      if (uVar8 + 1 < 0x180) {
        *(undefined2 *)((long)&local_1d8 + uVar8) = 0x30;
      }
    }
    else {
      uVar9 = 0xffffffffffffffff;
      uVar16 = local_598[0xb];
      do {
        uVar8 = uVar9;
        *(byte *)((long)&local_210 + uVar8 + 1) = (byte)(uVar16 % 10) | 0x30;
        uVar9 = uVar8 + 1;
        if (8 < uVar9) break;
        bVar27 = 9 < uVar16;
        uVar16 = uVar16 / 10;
      } while (bVar27);
      if ((uVar9 & 1) == 0) {
        uVar14 = 0;
        do {
          uVar20 = uVar14;
          uVar14 = uVar20 + 1;
        } while (*(char *)((long)&local_1d8 + uVar20) != '\0');
        uVar14 = uVar9;
        if (uVar20 + 1 < 0x180) {
          *(undefined1 *)((long)&local_1d8 + uVar20) = *(undefined1 *)((long)&local_210 + uVar8 + 1)
          ;
          *(undefined1 *)((long)&local_1d8 + uVar20 + 1) = 0;
        }
      }
      else {
        uVar14 = uVar8 + 2;
      }
      while (uVar9 != 0) {
        uVar9 = 0;
        do {
          uVar8 = uVar9;
          uVar9 = uVar8 + 1;
        } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
        if (uVar8 + 1 < 0x180) {
          *(undefined1 *)((long)&local_1d8 + uVar8) = *(undefined1 *)((long)&local_214 + uVar14 + 3)
          ;
          *(undefined1 *)((long)&local_1d8 + uVar8 + 1) = 0;
        }
        lVar1 = uVar14 + 2;
        uVar14 = uVar14 - 2;
        uVar9 = 0;
        do {
          uVar8 = uVar9;
          uVar9 = uVar8 + 1;
        } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
        uVar9 = uVar14;
        if (uVar8 + 1 < 0x180) {
          *(undefined1 *)((long)&local_1d8 + uVar8) = *(undefined1 *)((long)&local_214 + lVar1);
          *(undefined1 *)((long)&local_1d8 + uVar8 + 1) = 0;
        }
      }
    }
    uVar9 = 0;
    do {
      uVar8 = uVar9;
      uVar9 = uVar8 + 1;
    } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
    if (uVar9 < 0x180) {
      *(undefined1 *)((long)&local_1d8 + uVar8) = 0x20;
      uVar8 = uVar9;
    }
    *(undefined1 *)((long)&local_1d8 + uVar8) = 0;
    uVar9 = 0xffffffffffffffff;
    do {
      uVar8 = uVar9;
      uVar9 = uVar8 + 1;
    } while (*(char *)((long)&local_1d8 + uVar8 + 1) != '\0');
    if (uVar8 + 2 < 0x180) {
      *(undefined1 *)((long)&local_1d8 + uVar8 + 1) = 0x73;
      bVar27 = uVar9 != 0x17e;
      uVar9 = uVar8 + 2;
      if (bVar27) {
        uVar9 = uVar8 + 3;
        *(undefined1 *)((long)&local_1d8 + uVar8 + 2) = 0x6d;
        if (uVar9 < 0x17f) {
          uVar9 = uVar8 + 4;
          *(undefined1 *)((long)&local_1d8 + uVar8 + 3) = 0x62;
          if (uVar9 < 0x17f) {
            uVar9 = uVar8 + 5;
            *(undefined1 *)((long)&uStack_1d4 + uVar8) = 0x75;
            if (uVar9 < 0x17f) {
              *(undefined1 *)((long)&uStack_1d4 + uVar8 + 1) = 0x73;
              uVar9 = uVar8 + 6;
            }
          }
        }
      }
    }
    *(undefined1 *)((long)&local_1d8 + uVar9) = 0;
    uVar9 = 0;
    do {
      uVar8 = uVar9;
      uVar9 = uVar8 + 1;
    } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
    if (uVar9 < 0x180) {
      *(undefined1 *)((long)&local_1d8 + uVar8) = 0x3d;
      uVar8 = uVar9;
    }
    *(undefined1 *)((long)&local_1d8 + uVar8) = 0;
    if (local_598[0xc] == 0) {
      uVar9 = 0;
      do {
        uVar8 = uVar9;
        uVar9 = uVar8 + 1;
      } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
      if (uVar8 + 1 < 0x180) {
        *(undefined2 *)((long)&local_1d8 + uVar8) = 0x30;
      }
    }
    else {
      uVar9 = 0xffffffffffffffff;
      uVar16 = local_598[0xc];
      do {
        uVar8 = uVar9;
        *(byte *)((long)&local_210 + uVar8 + 1) = (byte)(uVar16 % 10) | 0x30;
        uVar9 = uVar8 + 1;
        if (8 < uVar9) break;
        bVar27 = 9 < uVar16;
        uVar16 = uVar16 / 10;
      } while (bVar27);
      if ((uVar9 & 1) == 0) {
        uVar14 = 0;
        do {
          uVar20 = uVar14;
          uVar14 = uVar20 + 1;
        } while (*(char *)((long)&local_1d8 + uVar20) != '\0');
        uVar14 = uVar9;
        if (uVar20 + 1 < 0x180) {
          *(undefined1 *)((long)&local_1d8 + uVar20) = *(undefined1 *)((long)&local_210 + uVar8 + 1)
          ;
          *(undefined1 *)((long)&local_1d8 + uVar20 + 1) = 0;
        }
      }
      else {
        uVar14 = uVar8 + 2;
      }
      while (uVar9 != 0) {
        uVar9 = 0;
        do {
          uVar8 = uVar9;
          uVar9 = uVar8 + 1;
        } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
        if (uVar8 + 1 < 0x180) {
          *(undefined1 *)((long)&local_1d8 + uVar8) = *(undefined1 *)((long)&local_214 + uVar14 + 3)
          ;
          *(undefined1 *)((long)&local_1d8 + uVar8 + 1) = 0;
        }
        lVar1 = uVar14 + 2;
        uVar14 = uVar14 - 2;
        uVar9 = 0;
        do {
          uVar8 = uVar9;
          uVar9 = uVar8 + 1;
        } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
        uVar9 = uVar14;
        if (uVar8 + 1 < 0x180) {
          *(undefined1 *)((long)&local_1d8 + uVar8) = *(undefined1 *)((long)&local_214 + lVar1);
          *(undefined1 *)((long)&local_1d8 + uVar8 + 1) = 0;
        }
      }
    }
    uVar9 = 0;
    do {
      uVar8 = uVar9;
      uVar9 = uVar8 + 1;
    } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
    if (uVar9 < 0x180) {
      *(undefined1 *)((long)&local_1d8 + uVar8) = 0x20;
      uVar8 = uVar9;
    }
    *(undefined1 *)((long)&local_1d8 + uVar8) = 0;
    uVar9 = 0xffffffffffffffff;
    do {
      uVar8 = uVar9;
      uVar9 = uVar8 + 1;
    } while (*(char *)((long)&local_1d8 + uVar8 + 1) != '\0');
    if (uVar8 + 2 < 0x180) {
      *(undefined1 *)((long)&local_1d8 + uVar8 + 1) = 0x6e;
      bVar27 = uVar9 != 0x17e;
      uVar9 = uVar8 + 2;
      if (bVar27) {
        uVar9 = uVar8 + 3;
        *(undefined1 *)((long)&local_1d8 + uVar8 + 2) = 0x65;
        if (uVar9 < 0x17f) {
          uVar9 = uVar8 + 4;
          *(undefined1 *)((long)&local_1d8 + uVar8 + 3) = 0x74;
          if (uVar9 < 0x17f) {
            uVar9 = uVar8 + 5;
            *(undefined1 *)((long)&uStack_1d4 + uVar8) = 0x77;
            if (uVar9 < 0x17f) {
              uVar9 = uVar8 + 6;
              *(undefined1 *)((long)&uStack_1d4 + uVar8 + 1) = 0x6f;
              if (uVar9 < 0x17f) {
                uVar9 = uVar8 + 7;
                *(undefined1 *)((long)&uStack_1d4 + uVar8 + 2) = 0x72;
                if (uVar9 < 0x17f) {
                  *(undefined1 *)((long)&uStack_1d4 + uVar8 + 3) = 0x6b;
                  uVar9 = uVar8 + 8;
                }
              }
            }
          }
        }
      }
    }
    *(undefined1 *)((long)&local_1d8 + uVar9) = 0;
    uVar9 = 0;
    do {
      uVar8 = uVar9;
      uVar9 = uVar8 + 1;
    } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
    if (uVar9 < 0x180) {
      *(undefined1 *)((long)&local_1d8 + uVar8) = 0x3d;
      uVar8 = uVar9;
    }
    *(undefined1 *)((long)&local_1d8 + uVar8) = 0;
    if (local_598[0xd] == 0) {
      uVar9 = 0;
      do {
        uVar8 = uVar9;
        uVar9 = uVar8 + 1;
      } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
      if (uVar8 + 1 < 0x180) {
        *(undefined2 *)((long)&local_1d8 + uVar8) = 0x30;
      }
    }
    else {
      uVar9 = 0xffffffffffffffff;
      uVar16 = local_598[0xd];
      do {
        uVar8 = uVar9;
        *(byte *)((long)&local_210 + uVar8 + 1) = (byte)(uVar16 % 10) | 0x30;
        uVar9 = uVar8 + 1;
        if (8 < uVar9) break;
        bVar27 = 9 < uVar16;
        uVar16 = uVar16 / 10;
      } while (bVar27);
      if ((uVar9 & 1) == 0) {
        uVar14 = 0;
        do {
          uVar20 = uVar14;
          uVar14 = uVar20 + 1;
        } while (*(char *)((long)&local_1d8 + uVar20) != '\0');
        uVar14 = uVar9;
        if (uVar20 + 1 < 0x180) {
          *(undefined1 *)((long)&local_1d8 + uVar20) = *(undefined1 *)((long)&local_210 + uVar8 + 1)
          ;
          *(undefined1 *)((long)&local_1d8 + uVar20 + 1) = 0;
        }
      }
      else {
        uVar14 = uVar8 + 2;
      }
      while (uVar9 != 0) {
        uVar9 = 0;
        do {
          uVar8 = uVar9;
          uVar9 = uVar8 + 1;
        } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
        if (uVar8 + 1 < 0x180) {
          *(undefined1 *)((long)&local_1d8 + uVar8) = *(undefined1 *)((long)&local_214 + uVar14 + 3)
          ;
          *(undefined1 *)((long)&local_1d8 + uVar8 + 1) = 0;
        }
        lVar1 = uVar14 + 2;
        uVar14 = uVar14 - 2;
        uVar9 = 0;
        do {
          uVar8 = uVar9;
          uVar9 = uVar8 + 1;
        } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
        uVar9 = uVar14;
        if (uVar8 + 1 < 0x180) {
          *(undefined1 *)((long)&local_1d8 + uVar8) = *(undefined1 *)((long)&local_214 + lVar1);
          *(undefined1 *)((long)&local_1d8 + uVar8 + 1) = 0;
        }
      }
    }
    uVar9 = 0;
    do {
      uVar8 = uVar9;
      uVar9 = uVar8 + 1;
    } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
    if (uVar8 + 1 < 0x180) {
      cVar17 = ' ';
      pcVar13 = str_10013729;
      do {
        pcVar13 = pcVar13 + 1;
        *(char *)((long)&local_1d8 + uVar8) = cVar17;
        uVar8 = uVar8 + 1;
        cVar17 = *pcVar13;
        if (cVar17 == '\0') break;
      } while (uVar8 < 0x17f);
    }
    *(undefined1 *)((long)&local_1d8 + uVar8) = 0;
    if ((code *)(ulong)(uint)api[3] != (code *)0x0) {
      (*(code *)(ulong)(uint)api[3])(str_10013767,str_1001378a,&local_1d8);
    }
  }
  recovered_10009f30((long)pbVar26,local_598,local_548);
  DAT_10015000 = api;
  if (((code *)(ulong)(uint)api[8] == (code *)0x0) ||
     (iVar3 = (*(code *)(ulong)(uint)api[8])(recovered_10012140,3,str_10012e2f), iVar3 == 0)) {
    uVar9 = 0;
    do {
      uVar8 = uVar9;
      uVar9 = uVar8 + 1;
    } while (local_548[uVar8] != '\0');
    uVar4 = 0;
    if (uVar8 + 1 < 0x300) {
      cVar17 = ' ';
      pcVar13 = str_100137ee;
      do {
        pcVar13 = pcVar13 + 1;
        local_548[uVar8] = cVar17;
        uVar8 = uVar8 + 1;
        cVar17 = *pcVar13;
        if (cVar17 == '\0') break;
      } while (uVar8 < 0x2ff);
    }
  }
  else {
    uVar9 = 0;
    do {
      uVar8 = uVar9;
      uVar9 = uVar8 + 1;
    } while (local_548[uVar8] != '\0');
    uVar4 = 1;
    if (uVar8 + 1 < 0x300) {
      cVar17 = ' ';
      pcVar13 = str_100137d7;
      do {
        pcVar13 = pcVar13 + 1;
        local_548[uVar8] = cVar17;
        uVar8 = uVar8 + 1;
        cVar17 = *pcVar13;
        if (cVar17 == '\0') break;
      } while (uVar8 < 0x2ff);
    }
  }
  local_548[uVar8] = '\0';
  if ((((*api == 0x54584b57) && (0xa7 < (uint)api[2])) &&
      ((code *)(ulong)(uint)api[0x29] != (code *)0x0)) &&
     (iVar3 = (*(code *)(ulong)(uint)api[0x29])(recovered_10012170,7,str_10012e2f), iVar3 != 0)) {
    uVar9 = 0;
    do {
      uVar8 = uVar9;
      uVar9 = uVar8 + 1;
    } while (local_548[uVar8] != '\0');
    uVar4 = 1;
    if (uVar8 + 1 < 0x300) {
      cVar17 = ' ';
      pcVar13 = str_1001380b;
      do {
        pcVar13 = pcVar13 + 1;
        local_548[uVar8] = cVar17;
        uVar8 = uVar8 + 1;
        cVar17 = *pcVar13;
        if (cVar17 == '\0') break;
      } while (uVar8 < 0x2ff);
    }
  }
  else {
    uVar9 = 0;
    do {
      uVar8 = uVar9;
      uVar9 = uVar8 + 1;
    } while (local_548[uVar8] != '\0');
    if (uVar8 + 1 < 0x300) {
      cVar17 = ' ';
      pcVar13 = str_10013823;
      do {
        pcVar13 = pcVar13 + 1;
        local_548[uVar8] = cVar17;
        uVar8 = uVar8 + 1;
        cVar17 = *pcVar13;
        if (cVar17 == '\0') break;
      } while (uVar8 < 0x2ff);
    }
  }
  local_548[uVar8] = '\0';
  uVar9 = 0;
  do {
    uVar8 = uVar9;
    uVar9 = uVar8 + 1;
  } while (local_548[uVar8] != '\0');
  if (uVar8 + 1 < 0x300) {
    cVar17 = ' ';
    pcVar13 = str_100137ab;
    do {
      pcVar13 = pcVar13 + 1;
      local_548[uVar8] = cVar17;
      uVar8 = uVar8 + 1;
      cVar17 = *pcVar13;
      if (cVar17 == '\0') break;
    } while (uVar8 < 0x2ff);
  }
  local_548[uVar8] = '\0';
  uStack_550 = CONCAT44(PF_PART4(uStack_550, 4),uVar4);
  if (((((*api == 0x54584b57) && (0x43 < (uint)api[2])) &&
       (((code *)(ulong)(uint)api[0x10] != (code *)0x0 &&
        ((iVar3 = (*(code *)(ulong)(uint)api[0x10])(&local_210), iVar3 != 0 && (local_200 != 0))))))
      && (local_1fc != 0)) && ((local_204 != 0 && (local_210 != 0)))) {
    recovered_100121b0((long)local_548,0x300,str_10013860,(long)&local_210);
    if ((*api == 0x54584b57) &&
       (((0xb7 < (uint)api[2] && ((code *)(ulong)(uint)api[0x2d] != (code *)0x0)) &&
        (uVar9 = (*(code *)(ulong)(uint)api[0x2d])(1), (uVar9 & 1) != 0)))) {
      uVar9 = 0;
      do {
        uVar8 = uVar9;
        uVar9 = uVar8 + 1;
      } while (local_548[uVar8] != '\0');
      if (uVar8 + 1 < 0x300) {
        cVar17 = ' ';
        pcVar13 = str_10013872;
        do {
          pcVar13 = pcVar13 + 1;
          local_548[uVar8] = cVar17;
          uVar8 = uVar8 + 1;
          cVar17 = *pcVar13;
          if (cVar17 == '\0') break;
        } while (uVar8 < 0x2ff);
      }
    }
    else {
      uVar9 = 0;
      do {
        uVar8 = uVar9;
        uVar9 = uVar8 + 1;
      } while (local_548[uVar8] != '\0');
      if (uVar8 + 1 < 0x300) {
        cVar17 = ' ';
        pcVar13 = str_10013894;
        do {
          pcVar13 = pcVar13 + 1;
          local_548[uVar8] = cVar17;
          uVar8 = uVar8 + 1;
          cVar17 = *pcVar13;
          if (cVar17 == '\0') break;
        } while (uVar8 < 0x2ff);
      }
    }
    local_548[uVar8] = '\0';
    uStack_1c0 = 0;
    local_1b8 = 0;
    uStack_1b0 = 0;
    local_1a8 = 0;
    uStack_1a0 = 0;
    local_198 = 0;
    uStack_190 = 0;
    local_188 = 0;
    uStack_180 = 0;
    local_178 = 0;
    uStack_170 = 0;
    local_168 = 0;
    uStack_160 = 0;
    local_158 = 0;
    uStack_150 = 0;
    local_1d8 = _DAT_10012d50;
    uStack_1d4 = iRam0000000010012d54;
    iStack_1d0 = iRam0000000010012d58;
    uStack_1cc = iRam0000000010012d5c;
    local_1c8 = 0;
    uVar9 = 0xffffffffffffffff;
    do {
      uVar8 = uVar9;
      uVar9 = uVar8 + 1;
    } while (*(char *)((long)&local_1c8 + uVar8 + 1) != '\0');
    if (uVar8 + 2 < 0x40) {
      cVar17 = 'a';
      pcVar13 = str_10012e48;
      uVar8 = uVar8 + 2;
      do {
        uVar9 = uVar8;
        pcVar13 = pcVar13 + 1;
        *(char *)((long)&uStack_1cc + uVar9 + 3) = cVar17;
        cVar17 = *pcVar13;
        if (cVar17 == '\0') break;
        uVar8 = uVar9 + 1;
      } while (uVar9 < 0x3f);
    }
    *(undefined1 *)((long)&local_1c8 + uVar9) = 0;
    local_188 = 0;
    uVar9 = 0xffffffffffffffff;
    do {
      uVar8 = uVar9;
      uVar9 = uVar8 + 1;
    } while (*(char *)((long)&local_188 + uVar8 + 1) != '\0');
    if (uVar8 + 2 < 0x40) {
      cVar17 = 'h';
      pcVar13 = str_100138d4;
      uVar8 = uVar8 + 2;
      do {
        uVar9 = uVar8;
        pcVar13 = pcVar13 + 1;
        *(char *)((long)&uStack_190 + uVar9 + 7) = cVar17;
        cVar17 = *pcVar13;
        if (cVar17 == '\0') break;
        uVar8 = uVar9 + 1;
      } while (uVar9 < 0x3f);
    }
    *(undefined1 *)((long)&local_188 + uVar9) = 0;
    if (((*api == 0x54584b57) && (199 < (uint)api[2])) &&
       (((code *)(ulong)(uint)api[0x31] != (code *)0x0 &&
        (iVar3 = (*(code *)(ulong)(uint)api[0x31])(&local_1d8), iVar3 != 0)))) {
      uVar9 = 0;
      do {
        uVar8 = uVar9;
        uVar9 = uVar8 + 1;
      } while (local_548[uVar8] != '\0');
      if (uVar8 + 1 < 0x300) {
        cVar17 = ' ';
        pcVar13 = str_100138e9;
        do {
          pcVar13 = pcVar13 + 1;
          local_548[uVar8] = cVar17;
          uVar8 = uVar8 + 1;
          cVar17 = *pcVar13;
          if (cVar17 == '\0') break;
        } while (uVar8 < 0x2ff);
      }
    }
    else {
      uVar9 = 0;
      do {
        uVar8 = uVar9;
        uVar9 = uVar8 + 1;
      } while (local_548[uVar8] != '\0');
      if (uVar8 + 1 < 0x300) {
        cVar17 = ' ';
        pcVar13 = str_100138ff;
        do {
          pcVar13 = pcVar13 + 1;
          local_548[uVar8] = cVar17;
          uVar8 = uVar8 + 1;
          cVar17 = *pcVar13;
          if (cVar17 == '\0') break;
        } while (uVar8 < 0x2ff);
      }
    }
    local_548[uVar8] = '\0';
    uVar9 = 0;
    do {
      uVar8 = uVar9;
      uVar9 = uVar8 + 1;
    } while (local_548[uVar8] != '\0');
    uVar4 = 1;
    if (uVar8 + 1 < 0x300) {
      cVar17 = ' ';
      pcVar13 = str_100138b0;
      do {
        pcVar13 = pcVar13 + 1;
        local_548[uVar8] = cVar17;
        uVar8 = uVar8 + 1;
        cVar17 = *pcVar13;
        if (cVar17 == '\0') break;
      } while (uVar8 < 0x2ff);
    }
  }
  else {
    uVar9 = 0;
    do {
      uVar8 = uVar9;
      uVar9 = uVar8 + 1;
    } while (local_548[uVar8] != '\0');
    uVar4 = 0;
    if (uVar8 + 1 < 0x300) {
      cVar17 = ' ';
      pcVar13 = str_10013841;
      do {
        pcVar13 = pcVar13 + 1;
        local_548[uVar8] = cVar17;
        uVar8 = uVar8 + 1;
        cVar17 = *pcVar13;
        if (cVar17 == '\0') break;
      } while (uVar8 < 0x2ff);
    }
  }
  local_548[uVar8] = '\0';
  uStack_550 = CONCAT44(uVar4,(int)uStack_550);
  if (local_598[8] != 0) {
    local_1d8 = local_1d8 & 0xffffff00;
    uVar9 = 0;
    do {
      uVar8 = uVar9;
      uVar9 = uVar8 + 1;
    } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
    if (uVar8 + 1 < 0x180) {
      cVar17 = 'b';
      pcVar13 = str_10013918;
      do {
        pcVar13 = pcVar13 + 1;
        *(char *)((long)&local_1d8 + uVar8) = cVar17;
        uVar8 = uVar8 + 1;
        cVar17 = *pcVar13;
        if (cVar17 == '\0') break;
      } while (uVar8 < 0x17f);
    }
    *(undefined1 *)((long)&local_1d8 + uVar8) = 0;
    uVar9 = 0;
    do {
      uVar8 = uVar9;
      uVar9 = uVar8 + 1;
    } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
    if (uVar9 < 0x180) {
      *(undefined1 *)((long)&local_1d8 + uVar8) = 0x20;
      uVar8 = uVar9;
    }
    *(undefined1 *)((long)&local_1d8 + uVar8) = 0;
    uVar9 = 0;
    do {
      uVar8 = uVar9;
      uVar9 = uVar8 + 1;
    } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
    if (uVar8 + 1 < 0x180) {
      cVar17 = 'c';
      pcVar13 = str_1001396c;
      do {
        pcVar13 = pcVar13 + 1;
        *(char *)((long)&local_1d8 + uVar8) = cVar17;
        uVar8 = uVar8 + 1;
        cVar17 = *pcVar13;
        if (cVar17 == '\0') break;
      } while (uVar8 < 0x17f);
    }
    *(undefined1 *)((long)&local_1d8 + uVar8) = 0;
    uVar9 = 0;
    do {
      uVar8 = uVar9;
      uVar9 = uVar8 + 1;
    } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
    if (uVar9 < 0x180) {
      *(undefined1 *)((long)&local_1d8 + uVar8) = 0x3d;
      uVar8 = uVar9;
    }
    *(undefined1 *)((long)&local_1d8 + uVar8) = 0;
    uVar9 = 0xffffffffffffffff;
    uVar16 = local_598[8];
    do {
      uVar8 = uVar9;
      *(byte *)((long)&local_210 + uVar8 + 1) = (byte)(uVar16 % 10) | 0x30;
      uVar9 = uVar8 + 1;
      if (8 < uVar9) break;
      bVar27 = 9 < uVar16;
      uVar16 = uVar16 / 10;
    } while (bVar27);
    if ((uVar9 & 1) == 0) {
      uVar14 = 0;
      do {
        uVar20 = uVar14;
        uVar14 = uVar20 + 1;
      } while (*(char *)((long)&local_1d8 + uVar20) != '\0');
      uVar14 = uVar9;
      if (uVar20 + 1 < 0x180) {
        *(undefined1 *)((long)&local_1d8 + uVar20) = *(undefined1 *)((long)&local_210 + uVar8 + 1);
        *(undefined1 *)((long)&local_1d8 + uVar20 + 1) = 0;
      }
    }
    else {
      uVar14 = uVar8 + 2;
    }
    while (uVar9 != 0) {
      uVar9 = 0;
      do {
        uVar8 = uVar9;
        uVar9 = uVar8 + 1;
      } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
      if (uVar8 + 1 < 0x180) {
        *(undefined1 *)((long)&local_1d8 + uVar8) = *(undefined1 *)((long)&local_214 + uVar14 + 3);
        *(undefined1 *)((long)&local_1d8 + uVar8 + 1) = 0;
      }
      lVar1 = uVar14 + 2;
      uVar14 = uVar14 - 2;
      uVar9 = 0;
      do {
        uVar8 = uVar9;
        uVar9 = uVar8 + 1;
      } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
      uVar9 = uVar14;
      if (uVar8 + 1 < 0x180) {
        *(undefined1 *)((long)&local_1d8 + uVar8) = *(undefined1 *)((long)&local_214 + lVar1);
        *(undefined1 *)((long)&local_1d8 + uVar8 + 1) = 0;
      }
    }
    uVar9 = 0;
    do {
      uVar8 = uVar9;
      uVar9 = uVar8 + 1;
    } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
    if (uVar9 < 0x180) {
      *(undefined1 *)((long)&local_1d8 + uVar8) = 0x20;
      uVar8 = uVar9;
    }
    *(undefined1 *)((long)&local_1d8 + uVar8) = 0;
    uVar9 = 0xffffffffffffffff;
    do {
      uVar8 = uVar9;
      uVar9 = uVar8 + 1;
    } while (*(char *)((long)&local_1d8 + uVar8 + 1) != '\0');
    if (uVar8 + 2 < 0x180) {
      *(undefined1 *)((long)&local_1d8 + uVar8 + 1) = 0x75;
      bVar27 = uVar9 != 0x17e;
      uVar9 = uVar8 + 2;
      if (bVar27) {
        uVar9 = uVar8 + 3;
        *(undefined1 *)((long)&local_1d8 + uVar8 + 2) = 0x68;
        if (uVar9 < 0x17f) {
          uVar9 = uVar8 + 4;
          *(undefined1 *)((long)&local_1d8 + uVar8 + 3) = 99;
          if (uVar9 < 0x17f) {
            *(undefined1 *)((long)&uStack_1d4 + uVar8) = 0x69;
            uVar9 = uVar8 + 5;
          }
        }
      }
    }
    *(undefined1 *)((long)&local_1d8 + uVar9) = 0;
    uVar9 = 0;
    do {
      uVar8 = uVar9;
      uVar9 = uVar8 + 1;
    } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
    if (uVar9 < 0x180) {
      *(undefined1 *)((long)&local_1d8 + uVar8) = 0x3d;
      uVar8 = uVar9;
    }
    *(undefined1 *)((long)&local_1d8 + uVar8) = 0;
    if (local_598[9] == 0) {
      uVar9 = 0;
      do {
        uVar8 = uVar9;
        uVar9 = uVar8 + 1;
      } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
      if (uVar8 + 1 < 0x180) {
        *(undefined2 *)((long)&local_1d8 + uVar8) = 0x30;
      }
    }
    else {
      uVar9 = 0xffffffffffffffff;
      uVar16 = local_598[9];
      do {
        uVar8 = uVar9;
        *(byte *)((long)&local_210 + uVar8 + 1) = (byte)(uVar16 % 10) | 0x30;
        uVar9 = uVar8 + 1;
        if (8 < uVar9) break;
        bVar27 = 9 < uVar16;
        uVar16 = uVar16 / 10;
      } while (bVar27);
      if ((uVar9 & 1) == 0) {
        uVar14 = 0;
        do {
          uVar20 = uVar14;
          uVar14 = uVar20 + 1;
        } while (*(char *)((long)&local_1d8 + uVar20) != '\0');
        uVar14 = uVar9;
        if (uVar20 + 1 < 0x180) {
          *(undefined1 *)((long)&local_1d8 + uVar20) = *(undefined1 *)((long)&local_210 + uVar8 + 1)
          ;
          *(undefined1 *)((long)&local_1d8 + uVar20 + 1) = 0;
        }
      }
      else {
        uVar14 = uVar8 + 2;
      }
      while (uVar9 != 0) {
        uVar9 = 0;
        do {
          uVar8 = uVar9;
          uVar9 = uVar8 + 1;
        } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
        if (uVar8 + 1 < 0x180) {
          *(undefined1 *)((long)&local_1d8 + uVar8) = *(undefined1 *)((long)&local_214 + uVar14 + 3)
          ;
          *(undefined1 *)((long)&local_1d8 + uVar8 + 1) = 0;
        }
        lVar1 = uVar14 + 2;
        uVar14 = uVar14 - 2;
        uVar9 = 0;
        do {
          uVar8 = uVar9;
          uVar9 = uVar8 + 1;
        } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
        uVar9 = uVar14;
        if (uVar8 + 1 < 0x180) {
          *(undefined1 *)((long)&local_1d8 + uVar8) = *(undefined1 *)((long)&local_214 + lVar1);
          *(undefined1 *)((long)&local_1d8 + uVar8 + 1) = 0;
        }
      }
    }
    uVar9 = 0;
    do {
      uVar8 = uVar9;
      uVar9 = uVar8 + 1;
    } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
    if (uVar9 < 0x180) {
      *(undefined1 *)((long)&local_1d8 + uVar8) = 0x20;
      uVar8 = uVar9;
    }
    *(undefined1 *)((long)&local_1d8 + uVar8) = 0;
    uVar9 = 0xffffffffffffffff;
    do {
      uVar8 = uVar9;
      uVar9 = uVar8 + 1;
    } while (*(char *)((long)&local_1d8 + uVar8 + 1) != '\0');
    if (uVar8 + 2 < 0x180) {
      *(undefined1 *)((long)&local_1d8 + uVar8 + 1) = 0x6f;
      bVar27 = uVar9 != 0x17e;
      uVar9 = uVar8 + 2;
      if (bVar27) {
        uVar9 = uVar8 + 3;
        *(undefined1 *)((long)&local_1d8 + uVar8 + 2) = 0x68;
        if (uVar9 < 0x17f) {
          uVar9 = uVar8 + 4;
          *(undefined1 *)((long)&local_1d8 + uVar8 + 3) = 99;
          if (uVar9 < 0x17f) {
            *(undefined1 *)((long)&uStack_1d4 + uVar8) = 0x69;
            uVar9 = uVar8 + 5;
          }
        }
      }
    }
    *(undefined1 *)((long)&local_1d8 + uVar9) = 0;
    uVar9 = 0;
    do {
      uVar8 = uVar9;
      uVar9 = uVar8 + 1;
    } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
    if (uVar9 < 0x180) {
      *(undefined1 *)((long)&local_1d8 + uVar8) = 0x3d;
      uVar8 = uVar9;
    }
    *(undefined1 *)((long)&local_1d8 + uVar8) = 0;
    if (local_598[10] == 0) {
      uVar9 = 0;
      do {
        uVar8 = uVar9;
        uVar9 = uVar8 + 1;
      } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
      if (uVar8 + 1 < 0x180) {
        *(undefined2 *)((long)&local_1d8 + uVar8) = 0x30;
      }
    }
    else {
      uVar9 = 0xffffffffffffffff;
      uVar16 = local_598[10];
      do {
        uVar8 = uVar9;
        *(byte *)((long)&local_210 + uVar8 + 1) = (byte)(uVar16 % 10) | 0x30;
        uVar9 = uVar8 + 1;
        if (8 < uVar9) break;
        bVar27 = 9 < uVar16;
        uVar16 = uVar16 / 10;
      } while (bVar27);
      if ((uVar9 & 1) == 0) {
        uVar14 = 0;
        do {
          uVar20 = uVar14;
          uVar14 = uVar20 + 1;
        } while (*(char *)((long)&local_1d8 + uVar20) != '\0');
        uVar14 = uVar9;
        if (uVar20 + 1 < 0x180) {
          *(undefined1 *)((long)&local_1d8 + uVar20) = *(undefined1 *)((long)&local_210 + uVar8 + 1)
          ;
          *(undefined1 *)((long)&local_1d8 + uVar20 + 1) = 0;
        }
      }
      else {
        uVar14 = uVar8 + 2;
      }
      while (uVar9 != 0) {
        uVar9 = 0;
        do {
          uVar8 = uVar9;
          uVar9 = uVar8 + 1;
        } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
        if (uVar8 + 1 < 0x180) {
          *(undefined1 *)((long)&local_1d8 + uVar8) = *(undefined1 *)((long)&local_214 + uVar14 + 3)
          ;
          *(undefined1 *)((long)&local_1d8 + uVar8 + 1) = 0;
        }
        lVar1 = uVar14 + 2;
        uVar14 = uVar14 - 2;
        uVar9 = 0;
        do {
          uVar8 = uVar9;
          uVar9 = uVar8 + 1;
        } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
        uVar9 = uVar14;
        if (uVar8 + 1 < 0x180) {
          *(undefined1 *)((long)&local_1d8 + uVar8) = *(undefined1 *)((long)&local_214 + lVar1);
          *(undefined1 *)((long)&local_1d8 + uVar8 + 1) = 0;
        }
      }
    }
    uVar9 = 0;
    do {
      uVar8 = uVar9;
      uVar9 = uVar8 + 1;
    } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
    if (uVar9 < 0x180) {
      *(undefined1 *)((long)&local_1d8 + uVar8) = 0x20;
      uVar8 = uVar9;
    }
    *(undefined1 *)((long)&local_1d8 + uVar8) = 0;
    uVar9 = 0xffffffffffffffff;
    do {
      uVar8 = uVar9;
      uVar9 = uVar8 + 1;
    } while (*(char *)((long)&local_1d8 + uVar8 + 1) != '\0');
    if (uVar8 + 2 < 0x180) {
      *(undefined1 *)((long)&local_1d8 + uVar8 + 1) = 0x65;
      bVar27 = uVar9 != 0x17e;
      uVar9 = uVar8 + 2;
      if (bVar27) {
        uVar9 = uVar8 + 3;
        *(undefined1 *)((long)&local_1d8 + uVar8 + 2) = 0x68;
        if (uVar9 < 0x17f) {
          uVar9 = uVar8 + 4;
          *(undefined1 *)((long)&local_1d8 + uVar8 + 3) = 99;
          if (uVar9 < 0x17f) {
            *(undefined1 *)((long)&uStack_1d4 + uVar8) = 0x69;
            uVar9 = uVar8 + 5;
          }
        }
      }
    }
    *(undefined1 *)((long)&local_1d8 + uVar9) = 0;
    uVar9 = 0;
    do {
      uVar8 = uVar9;
      uVar9 = uVar8 + 1;
    } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
    if (uVar9 < 0x180) {
      *(undefined1 *)((long)&local_1d8 + uVar8) = 0x3d;
      uVar8 = uVar9;
    }
    *(undefined1 *)((long)&local_1d8 + uVar8) = 0;
    if (local_598[0xb] == 0) {
      uVar9 = 0;
      do {
        uVar8 = uVar9;
        uVar9 = uVar8 + 1;
      } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
      if (uVar8 + 1 < 0x180) {
        *(undefined2 *)((long)&local_1d8 + uVar8) = 0x30;
      }
    }
    else {
      uVar9 = 0xffffffffffffffff;
      uVar16 = local_598[0xb];
      do {
        uVar8 = uVar9;
        *(byte *)((long)&local_210 + uVar8 + 1) = (byte)(uVar16 % 10) | 0x30;
        uVar9 = uVar8 + 1;
        if (8 < uVar9) break;
        bVar27 = 9 < uVar16;
        uVar16 = uVar16 / 10;
      } while (bVar27);
      if ((uVar9 & 1) == 0) {
        uVar14 = 0;
        do {
          uVar20 = uVar14;
          uVar14 = uVar20 + 1;
        } while (*(char *)((long)&local_1d8 + uVar20) != '\0');
        uVar14 = uVar9;
        if (uVar20 + 1 < 0x180) {
          *(undefined1 *)((long)&local_1d8 + uVar20) = *(undefined1 *)((long)&local_210 + uVar8 + 1)
          ;
          *(undefined1 *)((long)&local_1d8 + uVar20 + 1) = 0;
        }
      }
      else {
        uVar14 = uVar8 + 2;
      }
      while (uVar9 != 0) {
        uVar9 = 0;
        do {
          uVar8 = uVar9;
          uVar9 = uVar8 + 1;
        } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
        if (uVar8 + 1 < 0x180) {
          *(undefined1 *)((long)&local_1d8 + uVar8) = *(undefined1 *)((long)&local_214 + uVar14 + 3)
          ;
          *(undefined1 *)((long)&local_1d8 + uVar8 + 1) = 0;
        }
        lVar1 = uVar14 + 2;
        uVar14 = uVar14 - 2;
        uVar9 = 0;
        do {
          uVar8 = uVar9;
          uVar9 = uVar8 + 1;
        } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
        uVar9 = uVar14;
        if (uVar8 + 1 < 0x180) {
          *(undefined1 *)((long)&local_1d8 + uVar8) = *(undefined1 *)((long)&local_214 + lVar1);
          *(undefined1 *)((long)&local_1d8 + uVar8 + 1) = 0;
        }
      }
    }
    uVar9 = 0;
    do {
      uVar8 = uVar9;
      uVar9 = uVar8 + 1;
    } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
    if (uVar8 + 1 < 0x180) {
      cVar17 = ' ';
      pcVar13 = str_10013978;
      do {
        pcVar13 = pcVar13 + 1;
        *(char *)((long)&local_1d8 + uVar8) = cVar17;
        uVar8 = uVar8 + 1;
        cVar17 = *pcVar13;
        if (cVar17 == '\0') break;
      } while (uVar8 < 0x17f);
    }
    *(undefined1 *)((long)&local_1d8 + uVar8) = 0;
    if ((code *)(ulong)(uint)api[3] != (code *)0x0) {
      (*(code *)(ulong)(uint)api[3])(str_100139c5,str_100139e6,&local_1d8);
    }
  }
  local_1d8 = local_1d8 & 0xffffff00;
  uVar9 = 0;
  do {
    uVar8 = uVar9;
    uVar9 = uVar8 + 1;
  } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
  if (uVar8 + 1 < 0x180) {
    cVar17 = 'b';
    pcVar13 = str_100139f9;
    do {
      pcVar13 = pcVar13 + 1;
      *(char *)((long)&local_1d8 + uVar8) = cVar17;
      uVar8 = uVar8 + 1;
      cVar17 = *pcVar13;
      if (cVar17 == '\0') break;
    } while (uVar8 < 0x17f);
  }
  *(undefined1 *)((long)&local_1d8 + uVar8) = 0;
  uVar9 = 0;
  do {
    uVar8 = uVar9;
    uVar9 = uVar8 + 1;
  } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
  if (uVar9 < 0x180) {
    *(undefined1 *)((long)&local_1d8 + uVar8) = 0x20;
    uVar8 = uVar9;
  }
  *(undefined1 *)((long)&local_1d8 + uVar8) = 0;
  uVar9 = 0;
  do {
    uVar8 = uVar9;
    uVar9 = uVar8 + 1;
  } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
  if (uVar8 + 1 < 0x180) {
    cVar17 = 'u';
    pcVar13 = str_10013a68;
    do {
      pcVar13 = pcVar13 + 1;
      *(char *)((long)&local_1d8 + uVar8) = cVar17;
      uVar8 = uVar8 + 1;
      cVar17 = *pcVar13;
      if (cVar17 == '\0') break;
    } while (uVar8 < 0x17f);
  }
  *(undefined1 *)((long)&local_1d8 + uVar8) = 0;
  uVar9 = 0;
  do {
    uVar8 = uVar9;
    uVar9 = uVar8 + 1;
  } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
  if (uVar9 < 0x180) {
    *(undefined1 *)((long)&local_1d8 + uVar8) = 0x3d;
    uVar8 = uVar9;
  }
  *(undefined1 *)((long)&local_1d8 + uVar8) = 0;
  if (local_598[8] == 0) {
    uVar9 = 0;
    do {
      uVar8 = uVar9;
      uVar9 = uVar8 + 1;
    } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
    if (uVar8 + 1 < 0x180) {
      *(undefined2 *)((long)&local_1d8 + uVar8) = 0x30;
    }
  }
  else {
    uVar9 = 0xffffffffffffffff;
    uVar16 = local_598[8];
    do {
      uVar8 = uVar9;
      *(byte *)((long)&local_210 + uVar8 + 1) = (char)uVar16 + (char)(uVar16 / 10) * -10 | 0x30;
      uVar9 = uVar8 + 1;
      if (8 < uVar9) break;
      bVar27 = 9 < uVar16;
      uVar16 = uVar16 / 10;
    } while (bVar27);
    if ((uVar9 & 1) == 0) {
      uVar14 = 0;
      do {
        uVar20 = uVar14;
        uVar14 = uVar20 + 1;
      } while (*(char *)((long)&local_1d8 + uVar20) != '\0');
      uVar14 = uVar9;
      if (uVar20 + 1 < 0x180) {
        *(undefined1 *)((long)&local_1d8 + uVar20) = *(undefined1 *)((long)&local_210 + uVar8 + 1);
        *(undefined1 *)((long)&local_1d8 + uVar20 + 1) = 0;
      }
    }
    else {
      uVar14 = uVar8 + 2;
    }
    while (uVar9 != 0) {
      uVar9 = 0;
      do {
        uVar8 = uVar9;
        uVar9 = uVar8 + 1;
      } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
      if (uVar8 + 1 < 0x180) {
        *(undefined1 *)((long)&local_1d8 + uVar8) = *(undefined1 *)((long)&local_214 + uVar14 + 3);
        *(undefined1 *)((long)&local_1d8 + uVar8 + 1) = 0;
      }
      lVar1 = uVar14 + 2;
      uVar14 = uVar14 - 2;
      uVar9 = 0;
      do {
        uVar8 = uVar9;
        uVar9 = uVar8 + 1;
      } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
      uVar9 = uVar14;
      if (uVar8 + 1 < 0x180) {
        *(undefined1 *)((long)&local_1d8 + uVar8) = *(undefined1 *)((long)&local_214 + lVar1);
        *(undefined1 *)((long)&local_1d8 + uVar8 + 1) = 0;
      }
    }
  }
  uVar9 = 0;
  do {
    uVar8 = uVar9;
    uVar9 = uVar8 + 1;
  } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
  if (uVar9 < 0x180) {
    *(undefined1 *)((long)&local_1d8 + uVar8) = 0x20;
    uVar8 = uVar9;
  }
  *(undefined1 *)((long)&local_1d8 + uVar8) = 0;
  uVar9 = 0xffffffffffffffff;
  do {
    uVar8 = uVar9;
    uVar9 = uVar8 + 1;
  } while (*(char *)((long)&local_1d8 + uVar8 + 1) != '\0');
  if (uVar8 + 2 < 0x180) {
    *(undefined1 *)((long)&local_1d8 + uVar8 + 1) = 0x75;
    bVar27 = uVar9 != 0x17e;
    uVar9 = uVar8 + 2;
    if (bVar27) {
      uVar9 = uVar8 + 3;
      *(undefined1 *)((long)&local_1d8 + uVar8 + 2) = 0x68;
      if (uVar9 < 0x17f) {
        uVar9 = uVar8 + 4;
        *(undefined1 *)((long)&local_1d8 + uVar8 + 3) = 99;
        if (uVar9 < 0x17f) {
          *(undefined1 *)((long)&uStack_1d4 + uVar8) = 0x69;
          uVar9 = uVar8 + 5;
        }
      }
    }
  }
  *(undefined1 *)((long)&local_1d8 + uVar9) = 0;
  uVar9 = 0;
  do {
    uVar8 = uVar9;
    uVar9 = uVar8 + 1;
  } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
  if (uVar9 < 0x180) {
    *(undefined1 *)((long)&local_1d8 + uVar8) = 0x3d;
    uVar8 = uVar9;
  }
  *(undefined1 *)((long)&local_1d8 + uVar8) = 0;
  if (local_598[9] == 0) {
    uVar9 = 0;
    do {
      uVar8 = uVar9;
      uVar9 = uVar8 + 1;
    } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
    if (uVar8 + 1 < 0x180) {
      *(undefined2 *)((long)&local_1d8 + uVar8) = 0x30;
    }
  }
  else {
    uVar9 = 0xffffffffffffffff;
    uVar16 = local_598[9];
    do {
      uVar8 = uVar9;
      *(byte *)((long)&local_210 + uVar8 + 1) = (char)uVar16 + (char)(uVar16 / 10) * -10 | 0x30;
      uVar9 = uVar8 + 1;
      if (8 < uVar9) break;
      bVar27 = 9 < uVar16;
      uVar16 = uVar16 / 10;
    } while (bVar27);
    if ((uVar9 & 1) == 0) {
      uVar14 = 0;
      do {
        uVar20 = uVar14;
        uVar14 = uVar20 + 1;
      } while (*(char *)((long)&local_1d8 + uVar20) != '\0');
      uVar14 = uVar9;
      if (uVar20 + 1 < 0x180) {
        *(undefined1 *)((long)&local_1d8 + uVar20) = *(undefined1 *)((long)&local_210 + uVar8 + 1);
        *(undefined1 *)((long)&local_1d8 + uVar20 + 1) = 0;
      }
    }
    else {
      uVar14 = uVar8 + 2;
    }
    while (uVar9 != 0) {
      uVar9 = 0;
      do {
        uVar8 = uVar9;
        uVar9 = uVar8 + 1;
      } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
      if (uVar8 + 1 < 0x180) {
        *(undefined1 *)((long)&local_1d8 + uVar8) = *(undefined1 *)((long)&local_214 + uVar14 + 3);
        *(undefined1 *)((long)&local_1d8 + uVar8 + 1) = 0;
      }
      lVar1 = uVar14 + 2;
      uVar14 = uVar14 - 2;
      uVar9 = 0;
      do {
        uVar8 = uVar9;
        uVar9 = uVar8 + 1;
      } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
      uVar9 = uVar14;
      if (uVar8 + 1 < 0x180) {
        *(undefined1 *)((long)&local_1d8 + uVar8) = *(undefined1 *)((long)&local_214 + lVar1);
        *(undefined1 *)((long)&local_1d8 + uVar8 + 1) = 0;
      }
    }
  }
  uVar9 = 0;
  do {
    uVar8 = uVar9;
    uVar9 = uVar8 + 1;
  } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
  if (uVar9 < 0x180) {
    *(undefined1 *)((long)&local_1d8 + uVar8) = 0x20;
    uVar8 = uVar9;
  }
  *(undefined1 *)((long)&local_1d8 + uVar8) = 0;
  uVar9 = 0xffffffffffffffff;
  do {
    uVar8 = uVar9;
    uVar9 = uVar8 + 1;
  } while (*(char *)((long)&local_1d8 + uVar8 + 1) != '\0');
  if (uVar8 + 2 < 0x180) {
    *(undefined1 *)((long)&local_1d8 + uVar8 + 1) = 0x6f;
    bVar27 = uVar9 != 0x17e;
    uVar9 = uVar8 + 2;
    if (bVar27) {
      uVar9 = uVar8 + 3;
      *(undefined1 *)((long)&local_1d8 + uVar8 + 2) = 0x68;
      if (uVar9 < 0x17f) {
        uVar9 = uVar8 + 4;
        *(undefined1 *)((long)&local_1d8 + uVar8 + 3) = 99;
        if (uVar9 < 0x17f) {
          *(undefined1 *)((long)&uStack_1d4 + uVar8) = 0x69;
          uVar9 = uVar8 + 5;
        }
      }
    }
  }
  *(undefined1 *)((long)&local_1d8 + uVar9) = 0;
  uVar9 = 0;
  do {
    uVar8 = uVar9;
    uVar9 = uVar8 + 1;
  } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
  if (uVar9 < 0x180) {
    *(undefined1 *)((long)&local_1d8 + uVar8) = 0x3d;
    uVar8 = uVar9;
  }
  *(undefined1 *)((long)&local_1d8 + uVar8) = 0;
  if (local_598[10] == 0) {
    uVar9 = 0;
    do {
      uVar8 = uVar9;
      uVar9 = uVar8 + 1;
    } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
    if (uVar8 + 1 < 0x180) {
      *(undefined2 *)((long)&local_1d8 + uVar8) = 0x30;
    }
  }
  else {
    uVar9 = 0xffffffffffffffff;
    uVar16 = local_598[10];
    do {
      uVar8 = uVar9;
      *(byte *)((long)&local_210 + uVar8 + 1) = (char)uVar16 + (char)(uVar16 / 10) * -10 | 0x30;
      uVar9 = uVar8 + 1;
      if (8 < uVar9) break;
      bVar27 = 9 < uVar16;
      uVar16 = uVar16 / 10;
    } while (bVar27);
    if ((uVar9 & 1) == 0) {
      uVar14 = 0;
      do {
        uVar20 = uVar14;
        uVar14 = uVar20 + 1;
      } while (*(char *)((long)&local_1d8 + uVar20) != '\0');
      uVar14 = uVar9;
      if (uVar20 + 1 < 0x180) {
        *(undefined1 *)((long)&local_1d8 + uVar20) = *(undefined1 *)((long)&local_210 + uVar8 + 1);
        *(undefined1 *)((long)&local_1d8 + uVar20 + 1) = 0;
      }
    }
    else {
      uVar14 = uVar8 + 2;
    }
    while (uVar9 != 0) {
      uVar9 = 0;
      do {
        uVar8 = uVar9;
        uVar9 = uVar8 + 1;
      } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
      if (uVar8 + 1 < 0x180) {
        *(undefined1 *)((long)&local_1d8 + uVar8) = *(undefined1 *)((long)&local_214 + uVar14 + 3);
        *(undefined1 *)((long)&local_1d8 + uVar8 + 1) = 0;
      }
      lVar1 = uVar14 + 2;
      uVar14 = uVar14 - 2;
      uVar9 = 0;
      do {
        uVar8 = uVar9;
        uVar9 = uVar8 + 1;
      } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
      uVar9 = uVar14;
      if (uVar8 + 1 < 0x180) {
        *(undefined1 *)((long)&local_1d8 + uVar8) = *(undefined1 *)((long)&local_214 + lVar1);
        *(undefined1 *)((long)&local_1d8 + uVar8 + 1) = 0;
      }
    }
  }
  uVar9 = 0;
  do {
    uVar8 = uVar9;
    uVar9 = uVar8 + 1;
  } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
  if (uVar9 < 0x180) {
    *(undefined1 *)((long)&local_1d8 + uVar8) = 0x20;
    uVar8 = uVar9;
  }
  *(undefined1 *)((long)&local_1d8 + uVar8) = 0;
  uVar9 = 0xffffffffffffffff;
  do {
    uVar8 = uVar9;
    uVar9 = uVar8 + 1;
  } while (*(char *)((long)&local_1d8 + uVar8 + 1) != '\0');
  if (uVar8 + 2 < 0x180) {
    *(undefined1 *)((long)&local_1d8 + uVar8 + 1) = 0x65;
    bVar27 = uVar9 != 0x17e;
    uVar9 = uVar8 + 2;
    if (bVar27) {
      uVar9 = uVar8 + 3;
      *(undefined1 *)((long)&local_1d8 + uVar8 + 2) = 0x68;
      if (uVar9 < 0x17f) {
        uVar9 = uVar8 + 4;
        *(undefined1 *)((long)&local_1d8 + uVar8 + 3) = 99;
        if (uVar9 < 0x17f) {
          *(undefined1 *)((long)&uStack_1d4 + uVar8) = 0x69;
          uVar9 = uVar8 + 5;
        }
      }
    }
  }
  *(undefined1 *)((long)&local_1d8 + uVar9) = 0;
  uVar9 = 0;
  do {
    uVar8 = uVar9;
    uVar9 = uVar8 + 1;
  } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
  if (uVar9 < 0x180) {
    *(undefined1 *)((long)&local_1d8 + uVar8) = 0x3d;
    uVar8 = uVar9;
  }
  *(undefined1 *)((long)&local_1d8 + uVar8) = 0;
  if (local_598[0xb] == 0) {
    uVar9 = 0;
    do {
      uVar8 = uVar9;
      uVar9 = uVar8 + 1;
    } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
    if (uVar8 + 1 < 0x180) {
      *(undefined2 *)((long)&local_1d8 + uVar8) = 0x30;
    }
  }
  else {
    uVar9 = 0xffffffffffffffff;
    uVar16 = local_598[0xb];
    do {
      uVar8 = uVar9;
      *(byte *)((long)&local_210 + uVar8 + 1) = (char)uVar16 + (char)(uVar16 / 10) * -10 | 0x30;
      uVar9 = uVar8 + 1;
      if (8 < uVar9) break;
      bVar27 = 9 < uVar16;
      uVar16 = uVar16 / 10;
    } while (bVar27);
    if ((uVar9 & 1) == 0) {
      uVar14 = 0;
      do {
        uVar20 = uVar14;
        uVar14 = uVar20 + 1;
      } while (*(char *)((long)&local_1d8 + uVar20) != '\0');
      uVar14 = uVar9;
      if (uVar20 + 1 < 0x180) {
        *(undefined1 *)((long)&local_1d8 + uVar20) = *(undefined1 *)((long)&local_210 + uVar8 + 1);
        *(undefined1 *)((long)&local_1d8 + uVar20 + 1) = 0;
      }
    }
    else {
      uVar14 = uVar8 + 2;
    }
    while (uVar9 != 0) {
      uVar9 = 0;
      do {
        uVar8 = uVar9;
        uVar9 = uVar8 + 1;
      } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
      if (uVar8 + 1 < 0x180) {
        *(undefined1 *)((long)&local_1d8 + uVar8) = *(undefined1 *)((long)&local_214 + uVar14 + 3);
        *(undefined1 *)((long)&local_1d8 + uVar8 + 1) = 0;
      }
      lVar1 = uVar14 + 2;
      uVar14 = uVar14 - 2;
      uVar9 = 0;
      do {
        uVar8 = uVar9;
        uVar9 = uVar8 + 1;
      } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
      uVar9 = uVar14;
      if (uVar8 + 1 < 0x180) {
        *(undefined1 *)((long)&local_1d8 + uVar8) = *(undefined1 *)((long)&local_214 + lVar1);
        *(undefined1 *)((long)&local_1d8 + uVar8 + 1) = 0;
      }
    }
  }
  pcVar11 = &DAT_10013022;
  pcVar13 = &DAT_10013022;
  if ((int)uStack_550 == 0) {
    pcVar13 = str_10013027;
  }
  cVar17 = *pcVar13;
  if (cVar17 != '\0') {
    uVar9 = 0;
    do {
      uVar8 = uVar9;
      uVar9 = uVar8 + 1;
    } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
    if (uVar9 < 0x180) {
      *(undefined1 *)((long)&local_1d8 + uVar8) = 0x20;
      uVar8 = uVar9;
    }
    *(undefined1 *)((long)&local_1d8 + uVar8) = 0;
    uVar9 = 0;
    do {
      uVar8 = uVar9;
      uVar9 = uVar8 + 1;
    } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
    if (uVar8 + 1 < 0x180) {
      cVar22 = 'p';
      pcVar21 = str_10013a77;
      do {
        pcVar21 = pcVar21 + 1;
        *(char *)((long)&local_1d8 + uVar8) = cVar22;
        uVar8 = uVar8 + 1;
        cVar22 = *pcVar21;
        if (cVar22 == '\0') break;
      } while (uVar8 < 0x17f);
    }
    *(undefined1 *)((long)&local_1d8 + uVar8) = 0;
    uVar9 = 0;
    do {
      uVar8 = uVar9;
      uVar9 = uVar8 + 1;
    } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
    if (uVar9 < 0x180) {
      *(undefined1 *)((long)&local_1d8 + uVar8) = 0x3d;
      uVar8 = uVar9;
    }
    *(undefined1 *)((long)&local_1d8 + uVar8) = 0;
    uVar9 = 0;
    do {
      uVar8 = uVar9;
      uVar9 = uVar8 + 1;
    } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
    if (uVar8 + 1 < 0x180) {
      do {
        pcVar13 = pcVar13 + 1;
        *(char *)((long)&local_1d8 + uVar8) = cVar17;
        uVar8 = uVar8 + 1;
        cVar17 = *pcVar13;
        if (cVar17 == '\0') break;
      } while (uVar8 < 0x17f);
    }
    *(undefined1 *)((long)&local_1d8 + uVar8) = 0;
  }
  uVar9 = 0;
  do {
    uVar8 = uVar9;
    uVar9 = uVar8 + 1;
  } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
  if (uVar8 + 1 < 0x180) {
    cVar17 = ' ';
    pcVar13 = str_10013a8a;
    do {
      pcVar13 = pcVar13 + 1;
      *(char *)((long)&local_1d8 + uVar8) = cVar17;
      uVar8 = uVar8 + 1;
      cVar17 = *pcVar13;
      if (cVar17 == '\0') break;
    } while (uVar8 < 0x17f);
  }
  *(undefined1 *)((long)&local_1d8 + uVar8) = 0;
  if ((code *)(ulong)(uint)api[3] != (code *)0x0) {
    (*(code *)(ulong)(uint)api[3])(str_10013ac6,str_10013ae9,&local_1d8);
  }
  if (local_598[6] != 0) {
    local_1d8 = local_1d8 & 0xffffff00;
    uVar9 = 0;
    do {
      uVar8 = uVar9;
      uVar9 = uVar8 + 1;
    } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
    if (uVar8 + 1 < 0x100) {
      cVar17 = 'c';
      pcVar13 = str_10013b00;
      do {
        pcVar13 = pcVar13 + 1;
        *(char *)((long)&local_1d8 + uVar8) = cVar17;
        uVar8 = uVar8 + 1;
        cVar17 = *pcVar13;
        if (cVar17 == '\0') break;
      } while (uVar8 < 0xff);
    }
    *(undefined1 *)((long)&local_1d8 + uVar8) = 0;
    uVar9 = 0;
    do {
      uVar8 = uVar9;
      uVar9 = uVar8 + 1;
    } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
    if (uVar9 < 0x100) {
      *(undefined1 *)((long)&local_1d8 + uVar8) = 0x20;
      uVar8 = uVar9;
    }
    *(undefined1 *)((long)&local_1d8 + uVar8) = 0;
    uVar9 = 0xffffffffffffffff;
    do {
      uVar8 = uVar9;
      uVar9 = uVar8 + 1;
    } while (*(char *)((long)&local_1d8 + uVar8 + 1) != '\0');
    if (uVar8 + 2 < 0x100) {
      *(undefined1 *)((long)&local_1d8 + uVar8 + 1) = 0x61;
      bVar27 = uVar9 != 0xfe;
      uVar9 = uVar8 + 2;
      if (bVar27) {
        uVar9 = uVar8 + 3;
        *(undefined1 *)((long)&local_1d8 + uVar8 + 2) = 0x68;
        if (uVar9 < 0xff) {
          uVar9 = uVar8 + 4;
          *(undefined1 *)((long)&local_1d8 + uVar8 + 3) = 99;
          if (uVar9 < 0xff) {
            *(undefined1 *)((long)&uStack_1d4 + uVar8) = 0x69;
            uVar9 = uVar8 + 5;
          }
        }
      }
    }
    *(undefined1 *)((long)&local_1d8 + uVar9) = 0;
    uVar9 = 0;
    do {
      uVar8 = uVar9;
      uVar9 = uVar8 + 1;
    } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
    if (uVar9 < 0x100) {
      *(undefined1 *)((long)&local_1d8 + uVar8) = 0x3d;
      uVar8 = uVar9;
    }
    *(undefined1 *)((long)&local_1d8 + uVar8) = 0;
    uVar9 = 0xffffffffffffffff;
    uVar16 = local_598[6];
    do {
      uVar8 = uVar9;
      *(byte *)((long)&local_210 + uVar8 + 1) = (byte)(uVar16 % 10) | 0x30;
      uVar9 = uVar8 + 1;
      if (8 < uVar9) break;
      bVar27 = 9 < uVar16;
      uVar16 = uVar16 / 10;
    } while (bVar27);
    if ((uVar9 & 1) == 0) {
      uVar14 = 0;
      do {
        uVar20 = uVar14;
        uVar14 = uVar20 + 1;
      } while (*(char *)((long)&local_1d8 + uVar20) != '\0');
      uVar14 = uVar9;
      if (uVar20 + 1 < 0x100) {
        *(undefined1 *)((long)&local_1d8 + uVar20) = *(undefined1 *)((long)&local_210 + uVar8 + 1);
        *(undefined1 *)((long)&local_1d8 + uVar20 + 1) = 0;
      }
    }
    else {
      uVar14 = uVar8 + 2;
    }
    while (uVar9 != 0) {
      uVar9 = 0;
      do {
        uVar8 = uVar9;
        uVar9 = uVar8 + 1;
      } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
      if (uVar8 + 1 < 0x100) {
        *(undefined1 *)((long)&local_1d8 + uVar8) = *(undefined1 *)((long)&local_214 + uVar14 + 3);
        *(undefined1 *)((long)&local_1d8 + uVar8 + 1) = 0;
      }
      lVar1 = uVar14 + 2;
      uVar14 = uVar14 - 2;
      uVar9 = 0;
      do {
        uVar8 = uVar9;
        uVar9 = uVar8 + 1;
      } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
      uVar9 = uVar14;
      if (uVar8 + 1 < 0x100) {
        *(undefined1 *)((long)&local_1d8 + uVar8) = *(undefined1 *)((long)&local_214 + lVar1);
        *(undefined1 *)((long)&local_1d8 + uVar8 + 1) = 0;
      }
    }
    if ((code *)(ulong)(uint)api[3] != (code *)0x0) {
      (*(code *)(ulong)(uint)api[3])(str_10013b4b,str_10013b70,&local_1d8);
    }
  }
  if (local_598[3] != 0 || local_598[5] != 0) {
    local_1d8 = local_1d8 & 0xffffff00;
    uVar9 = 0;
    do {
      uVar8 = uVar9;
      uVar9 = uVar8 + 1;
    } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
    if (uVar8 + 1 < 0x100) {
      cVar17 = 'f';
      pcVar13 = str_10013b85;
      do {
        pcVar13 = pcVar13 + 1;
        *(char *)((long)&local_1d8 + uVar8) = cVar17;
        uVar8 = uVar8 + 1;
        cVar17 = *pcVar13;
        if (cVar17 == '\0') break;
      } while (uVar8 < 0xff);
    }
    *(undefined1 *)((long)&local_1d8 + uVar8) = 0;
    if (((*api == 0x54584b57) && (0x43 < (uint)api[2])) &&
       (((code *)(ulong)(uint)api[0x10] != (code *)0x0 &&
        (iVar3 = (*(code *)(ulong)(uint)api[0x10])(&local_210), iVar3 != 0)))) {
      recovered_100121b0((long)&local_1d8,0x100,str_10013ba1,(long)&local_210);
    }
    uVar9 = 0;
    if (local_598[5] == 0) {
      do {
        uVar8 = uVar9;
        uVar9 = uVar8 + 1;
      } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
      if (uVar8 + 1 < 0x100) {
        cVar17 = ' ';
        pcVar13 = str_10013bc2;
        do {
          pcVar13 = pcVar13 + 1;
          *(char *)((long)&local_1d8 + uVar8) = cVar17;
          uVar8 = uVar8 + 1;
          cVar17 = *pcVar13;
          if (cVar17 == '\0') break;
        } while (uVar8 < 0xff);
      }
    }
    else {
      do {
        uVar8 = uVar9;
        uVar9 = uVar8 + 1;
      } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
      if (uVar8 + 1 < 0x100) {
        cVar17 = ' ';
        pcVar13 = str_10013bac;
        do {
          pcVar13 = pcVar13 + 1;
          *(char *)((long)&local_1d8 + uVar8) = cVar17;
          uVar8 = uVar8 + 1;
          cVar17 = *pcVar13;
          if (cVar17 == '\0') break;
        } while (uVar8 < 0xff);
      }
    }
    *(undefined1 *)((long)&local_1d8 + uVar8) = 0;
    uVar9 = 0;
    do {
      uVar8 = uVar9;
      uVar9 = uVar8 + 1;
    } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
    if (uVar9 < 0x100) {
      *(undefined1 *)((long)&local_1d8 + uVar8) = 0x20;
      uVar8 = uVar9;
    }
    *(undefined1 *)((long)&local_1d8 + uVar8) = 0;
    uVar9 = 0;
    do {
      uVar8 = uVar9;
      uVar9 = uVar8 + 1;
    } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
    if (uVar8 + 1 < 0x100) {
      cVar17 = 'n';
      pcVar13 = str_10012f87;
      do {
        pcVar13 = pcVar13 + 1;
        *(char *)((long)&local_1d8 + uVar8) = cVar17;
        uVar8 = uVar8 + 1;
        cVar17 = *pcVar13;
        if (cVar17 == '\0') break;
      } while (uVar8 < 0xff);
    }
    *(undefined1 *)((long)&local_1d8 + uVar8) = 0;
    uVar9 = 0;
    do {
      uVar8 = uVar9;
      uVar9 = uVar8 + 1;
    } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
    if (uVar9 < 0x100) {
      *(undefined1 *)((long)&local_1d8 + uVar8) = 0x3d;
      uVar8 = uVar9;
    }
    *(undefined1 *)((long)&local_1d8 + uVar8) = 0;
    if (local_598[5] == 0) {
      uVar9 = 0;
      do {
        uVar8 = uVar9;
        uVar9 = uVar8 + 1;
      } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
      if (uVar8 + 1 < 0x100) {
        *(undefined2 *)((long)&local_1d8 + uVar8) = 0x30;
      }
    }
    else {
      uVar9 = 0xffffffffffffffff;
      uVar16 = local_598[5];
      do {
        uVar8 = uVar9;
        acStack_46[uVar8 + 3] = (char)uVar16 + (char)(uVar16 / 10) * -10 | 0x30;
        uVar9 = uVar8 + 1;
        if (8 < uVar9) break;
        bVar27 = 9 < uVar16;
        uVar16 = uVar16 / 10;
      } while (bVar27);
      if ((uVar9 & 1) == 0) {
        uVar14 = 0;
        do {
          uVar20 = uVar14;
          uVar14 = uVar20 + 1;
        } while (*(char *)((long)&local_1d8 + uVar20) != '\0');
        uVar14 = uVar9;
        if (uVar20 + 1 < 0x100) {
          *(char *)((long)&local_1d8 + uVar20) = acStack_46[uVar8 + 3];
          *(undefined1 *)((long)&local_1d8 + uVar20 + 1) = 0;
        }
      }
      else {
        uVar14 = uVar8 + 2;
      }
      while (uVar9 != 0) {
        uVar9 = 0;
        do {
          uVar8 = uVar9;
          uVar9 = uVar8 + 1;
        } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
        if (uVar8 + 1 < 0x100) {
          *(char *)((long)&local_1d8 + uVar8) = acStack_46[uVar14 + 1];
          *(undefined1 *)((long)&local_1d8 + uVar8 + 1) = 0;
        }
        pcVar13 = acStack_46 + uVar14;
        uVar14 = uVar14 - 2;
        uVar9 = 0;
        do {
          uVar8 = uVar9;
          uVar9 = uVar8 + 1;
        } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
        uVar9 = uVar14;
        if (uVar8 + 1 < 0x100) {
          *(char *)((long)&local_1d8 + uVar8) = *pcVar13;
          *(undefined1 *)((long)&local_1d8 + uVar8 + 1) = 0;
        }
      }
    }
    uVar9 = 0;
    do {
      uVar8 = uVar9;
      uVar9 = uVar8 + 1;
    } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
    if (uVar9 < 0x100) {
      *(undefined1 *)((long)&local_1d8 + uVar8) = 0x20;
      uVar8 = uVar9;
    }
    *(undefined1 *)((long)&local_1d8 + uVar8) = 0;
    uVar9 = 0;
    do {
      uVar8 = uVar9;
      uVar9 = uVar8 + 1;
    } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
    if (uVar8 + 1 < 0x100) {
      cVar17 = 'i';
      pcVar13 = str_10012f70;
      do {
        pcVar13 = pcVar13 + 1;
        *(char *)((long)&local_1d8 + uVar8) = cVar17;
        uVar8 = uVar8 + 1;
        cVar17 = *pcVar13;
        if (cVar17 == '\0') break;
      } while (uVar8 < 0xff);
    }
    *(undefined1 *)((long)&local_1d8 + uVar8) = 0;
    uVar9 = 0;
    do {
      uVar8 = uVar9;
      uVar9 = uVar8 + 1;
    } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
    if (uVar9 < 0x100) {
      *(undefined1 *)((long)&local_1d8 + uVar8) = 0x3d;
      uVar8 = uVar9;
    }
    *(undefined1 *)((long)&local_1d8 + uVar8) = 0;
    if (local_598[3] == 0) {
      uVar9 = 0;
      do {
        uVar8 = uVar9;
        uVar9 = uVar8 + 1;
      } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
      if (uVar8 + 1 < 0x100) {
        *(undefined2 *)((long)&local_1d8 + uVar8) = 0x30;
      }
    }
    else {
      uVar9 = 0xffffffffffffffff;
      uVar16 = local_598[3];
      do {
        uVar8 = uVar9;
        acStack_46[uVar8 + 3] = (char)uVar16 + (char)(uVar16 / 10) * -10 | 0x30;
        uVar9 = uVar8 + 1;
        if (8 < uVar9) break;
        bVar27 = 9 < uVar16;
        uVar16 = uVar16 / 10;
      } while (bVar27);
      if ((uVar9 & 1) == 0) {
        uVar14 = 0;
        do {
          uVar20 = uVar14;
          uVar14 = uVar20 + 1;
        } while (*(char *)((long)&local_1d8 + uVar20) != '\0');
        uVar14 = uVar9;
        if (uVar20 + 1 < 0x100) {
          *(char *)((long)&local_1d8 + uVar20) = acStack_46[uVar8 + 3];
          *(undefined1 *)((long)&local_1d8 + uVar20 + 1) = 0;
        }
      }
      else {
        uVar14 = uVar8 + 2;
      }
      while (uVar9 != 0) {
        uVar9 = 0;
        do {
          uVar8 = uVar9;
          uVar9 = uVar8 + 1;
        } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
        if (uVar8 + 1 < 0x100) {
          *(char *)((long)&local_1d8 + uVar8) = acStack_46[uVar14 + 1];
          *(undefined1 *)((long)&local_1d8 + uVar8 + 1) = 0;
        }
        pcVar13 = acStack_46 + uVar14;
        uVar14 = uVar14 - 2;
        uVar9 = 0;
        do {
          uVar8 = uVar9;
          uVar9 = uVar8 + 1;
        } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
        uVar9 = uVar14;
        if (uVar8 + 1 < 0x100) {
          *(char *)((long)&local_1d8 + uVar8) = *pcVar13;
          *(undefined1 *)((long)&local_1d8 + uVar8 + 1) = 0;
        }
      }
    }
    if (PF_PART4(uStack_550, 4) == 0) {
      pcVar11 = str_10013027;
    }
    cVar17 = *pcVar11;
    if (cVar17 != '\0') {
      uVar9 = 0;
      do {
        uVar8 = uVar9;
        uVar9 = uVar8 + 1;
      } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
      if (uVar9 < 0x100) {
        *(undefined1 *)((long)&local_1d8 + uVar8) = 0x20;
        uVar8 = uVar9;
      }
      *(undefined1 *)((long)&local_1d8 + uVar8) = 0;
      uVar9 = 0;
      do {
        uVar8 = uVar9;
        uVar9 = uVar8 + 1;
      } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
      if (uVar8 + 1 < 0x100) {
        cVar22 = 'p';
        pcVar13 = str_10013a77;
        do {
          pcVar13 = pcVar13 + 1;
          *(char *)((long)&local_1d8 + uVar8) = cVar22;
          uVar8 = uVar8 + 1;
          cVar22 = *pcVar13;
          if (cVar22 == '\0') break;
        } while (uVar8 < 0xff);
      }
      *(undefined1 *)((long)&local_1d8 + uVar8) = 0;
      uVar9 = 0;
      do {
        uVar8 = uVar9;
        uVar9 = uVar8 + 1;
      } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
      if (uVar9 < 0x100) {
        *(undefined1 *)((long)&local_1d8 + uVar8) = 0x3d;
        uVar8 = uVar9;
      }
      *(undefined1 *)((long)&local_1d8 + uVar8) = 0;
      uVar9 = 0;
      do {
        uVar8 = uVar9;
        uVar9 = uVar8 + 1;
      } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
      if (uVar8 + 1 < 0x100) {
        do {
          pcVar11 = pcVar11 + 1;
          *(char *)((long)&local_1d8 + uVar8) = cVar17;
          uVar8 = uVar8 + 1;
          cVar17 = *pcVar11;
          if (cVar17 == '\0') break;
        } while (uVar8 < 0xff);
      }
      *(undefined1 *)((long)&local_1d8 + uVar8) = 0;
    }
    if ((code *)(ulong)(uint)api[3] != (code *)0x0) {
      (*(code *)(ulong)(uint)api[3])(str_10013bd5,str_10013bfb,&local_1d8);
    }
  }
  recovered_10009f30((long)pbVar26,local_598,local_548);
  if ((code *)(ulong)(uint)api[3] != (code *)0x0) {
    (*(code *)(ulong)(uint)api[3])(str_10012d92,str_10012daf,local_548);
  }
  return 1;
}

#undef DAT_10012d50
#undef DAT_10013022
#undef DAT_100130d7
#undef DAT_10015000
#undef UNK_10012d54
#undef UNK_10012d58
#undef UNK_10012d5c
#undef _DAT_10012d50
#undef iRam0000000010012d54
#undef iRam0000000010012d58
#undef iRam0000000010012d5c
#undef str_10012d78
#undef str_10012d92
#undef str_10012daf
#undef str_10012dcb
#undef str_10012dec
#undef str_10012e0e
#undef str_10012e2f
#undef str_10012e48
#undef str_10012f70
#undef str_10012f87
#undef str_10013027
#undef str_1001302d
#undef str_10013041
#undef str_1001304d
#undef str_10013057
#undef str_10013063
#undef str_1001306f
#undef str_1001309d
#undef str_100130a7
#undef str_100130bc
#undef str_100130c9
#undef str_100130e0
#undef str_100130ea
#undef str_100130f6
#undef str_10013108
#undef str_10013117
#undef str_10013135
#undef str_10013143
#undef str_1001314e
#undef str_1001315f
#undef str_1001316f
#undef str_10013179
#undef str_10013185
#undef str_1001319c
#undef str_100131c4
#undef str_100131ce
#undef str_100131e6
#undef str_10013201
#undef str_1001322d
#undef str_1001324d
#undef str_1001327e
#undef str_1001328b
#undef str_1001329d
#undef str_100132a7
#undef str_100132b4
#undef str_100132c1
#undef str_100132d2
#undef str_100132e2
#undef str_100132ef
#undef str_100132fc
#undef str_10013308
#undef str_10013311
#undef str_10013324
#undef str_100136fb
#undef str_10013729
#undef str_10013767
#undef str_1001378a
#undef str_100137ab
#undef str_100137d7
#undef str_100137ee
#undef str_1001380b
#undef str_10013823
#undef str_10013841
#undef str_10013860
#undef str_10013872
#undef str_10013894
#undef str_100138b0
#undef str_100138d4
#undef str_100138e9
#undef str_100138ff
#undef str_10013918
#undef str_1001396c
#undef str_10013978
#undef str_100139c5
#undef str_100139e6
#undef str_100139f9
#undef str_10013a68
#undef str_10013a77
#undef str_10013a8a
#undef str_10013ac6
#undef str_10013ae9
#undef str_10013b00
#undef str_10013b4b
#undef str_10013b70
#undef str_10013b85
#undef str_10013ba1
#undef str_10013bac
#undef str_10013bc2
#undef str_10013bd5
#undef str_10013bfb
#undef local_5dc
#undef local_598
#undef local_558
#undef local_548
#undef local_248
#undef local_244
#undef local_240
#undef local_23c
#undef local_238
#undef local_22c
#undef local_228
#undef local_224
#undef local_220
#undef local_214
#undef local_210
#undef local_208
#undef local_204
#undef local_200
#undef local_1fc
#undef local_1dc
#undef local_1d8
#undef local_1c8
#undef local_1b8
#undef local_1a8
#undef local_198
#undef local_188
#undef local_178
#undef local_168
#undef local_158
#undef local_4c
#undef local_44
#undef local_38
#undef abStack_642
#undef uStack_560
#undef uStack_550
#undef uStack_1d4
#undef iStack_1d0
#undef uStack_1cc
#undef uStack_1c0
#undef uStack_1b0
#undef uStack_1a0
#undef uStack_190
#undef uStack_180
#undef uStack_170
#undef uStack_160
#undef uStack_150
#undef acStack_46

#undef DAT_10012ffb
#define DAT_10012ffb (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2b3U)))
#undef DAT_10013022
#define DAT_10013022 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2daU)))
#undef str_10012e87
#define str_10012e87 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x13fU)))
#undef str_10012f19
#define str_10012f19 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1d1U)))
#undef str_10012f29
#define str_10012f29 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1e1U)))
#undef str_10012f33
#define str_10012f33 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1ebU)))
#undef str_10012f40
#define str_10012f40 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1f8U)))
#undef str_10012f4a
#define str_10012f4a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x202U)))
#undef str_10012f55
#define str_10012f55 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x20dU)))
#undef str_10012f63
#define str_10012f63 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x21bU)))
#undef str_10012f70
#define str_10012f70 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x228U)))
#undef str_10012f7d
#define str_10012f7d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x235U)))
#undef str_10012f87
#define str_10012f87 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x23fU)))
#undef str_10012fc8
#define str_10012fc8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x280U)))
#undef str_10012fd9
#define str_10012fd9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x291U)))
#undef str_10012fe7
#define str_10012fe7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x29fU)))
#undef str_10013008
#define str_10013008 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2c0U)))
#undef str_1001301a
#define str_1001301a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2d2U)))
#undef str_10013027
#define str_10013027 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2dfU)))
#define abStack_13 (*(byte (*)[11])(frame + 29))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009f30
 */

void recovered_10009f30(long param_1,uint *param_2,undefined1 *param_3)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  char *pcVar4;
  ulong uVar5;
  ulong uVar6;
  char *pcVar7;
  char cVar8;
  char *pcVar9;
  char cVar10;
  bool bVar11;

  if (param_3 == (undefined1 *)0x0) {
    if ((param_1 != 0) && (uVar1 = *(uint *)(param_1 + 100), uVar1 != 0)) {
LAB_1000a079:
      uVar3 = (ulong)uVar1;
      uVar2 = 0;
      do {
        uVar1 = (uint)uVar3;
        abStack_13[uVar2 + 1] = (char)uVar3 + (char)(uVar3 / 10) * -10 | 0x30;
        uVar5 = uVar2 + 1;
        if (8 < uVar2) break;
        uVar3 = uVar3 / 10;
        uVar2 = uVar5;
      } while (9 < uVar1);
      do {
        if (param_3 != (undefined1 *)0x0) {
          uVar3 = 0;
          do {
            uVar2 = uVar3;
            uVar3 = uVar2 + 1;
          } while (param_3[uVar2] != '\0');
          if (uVar3 < 0x300) {
            param_3[uVar2] = abStack_13[uVar5];
            param_3[uVar3] = 0;
          }
        }
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
      goto LAB_1000a139;
    }
  }
  else {
    *param_3 = 0;
    uVar3 = 0;
    do {
      uVar2 = uVar3;
      uVar3 = uVar2 + 1;
    } while (param_3[uVar2] != '\0');
    if (uVar2 + 1 < 0x300) {
      cVar8 = 'm';
      pcVar4 = str_10012e87;
      do {
        pcVar4 = pcVar4 + 1;
        param_3[uVar2] = cVar8;
        uVar2 = uVar2 + 1;
        cVar8 = *pcVar4;
        if (cVar8 == '\0') break;
      } while (uVar2 < 0x2ff);
    }
    param_3[uVar2] = 0;
    if (param_1 != 0) {
      uVar1 = *(uint *)(param_1 + 100);
      uVar3 = 0;
      do {
        uVar2 = uVar3;
        uVar3 = uVar2 + 1;
      } while (param_3[uVar2] != '\0');
      if (uVar3 < 0x300) {
        param_3[uVar2] = 0x20;
        uVar2 = uVar3;
      }
      param_3[uVar2] = 0;
      uVar3 = 0;
      do {
        uVar2 = uVar3;
        uVar3 = uVar2 + 1;
      } while (param_3[uVar2] != '\0');
      if (uVar2 + 1 < 0x300) {
        cVar8 = 'h';
        pcVar4 = str_10012f19;
        do {
          pcVar4 = pcVar4 + 1;
          param_3[uVar2] = cVar8;
          uVar2 = uVar2 + 1;
          cVar8 = *pcVar4;
          if (cVar8 == '\0') break;
        } while (uVar2 < 0x2ff);
      }
      param_3[uVar2] = 0;
      uVar3 = 0;
      do {
        uVar2 = uVar3;
        uVar3 = uVar2 + 1;
      } while (param_3[uVar2] != '\0');
      if (uVar3 < 0x300) {
        param_3[uVar2] = 0x3d;
        uVar2 = uVar3;
      }
      param_3[uVar2] = 0;
      if (uVar1 != 0) goto LAB_1000a079;
      uVar3 = 0;
      do {
        uVar2 = uVar3;
        uVar3 = uVar2 + 1;
      } while (param_3[uVar2] != '\0');
      if (uVar2 + 1 < 0x300) {
        *(undefined2 *)(param_3 + uVar2) = 0x30;
      }
LAB_1000a139:
      if ((param_3 != (undefined1 *)0x0) && (*(char *)(param_1 + 4) != '\0')) {
        uVar3 = 0;
        do {
          uVar2 = uVar3;
          uVar3 = uVar2 + 1;
        } while (param_3[uVar2] != '\0');
        if (uVar3 < 0x300) {
          param_3[uVar2] = 0x20;
          uVar2 = uVar3;
        }
        param_3[uVar2] = 0;
        uVar3 = 0;
        do {
          uVar2 = uVar3;
          uVar3 = uVar2 + 1;
        } while (param_3[uVar2] != '\0');
        if (uVar2 + 1 < 0x300) {
          cVar8 = 'p';
          pcVar4 = str_10012f29;
          do {
            pcVar4 = pcVar4 + 1;
            param_3[uVar2] = cVar8;
            uVar2 = uVar2 + 1;
            cVar8 = *pcVar4;
            if (cVar8 == '\0') break;
          } while (uVar2 < 0x2ff);
        }
        param_3[uVar2] = 0;
        uVar3 = 0;
        do {
          uVar2 = uVar3;
          uVar3 = uVar2 + 1;
        } while (param_3[uVar2] != '\0');
        if (uVar3 < 0x300) {
          param_3[uVar2] = 0x3d;
          uVar2 = uVar3;
        }
        param_3[uVar2] = 0;
        uVar3 = 0;
        do {
          uVar2 = uVar3;
          uVar3 = uVar2 + 1;
        } while (param_3[uVar2] != '\0');
        cVar8 = *(char *)(param_1 + 4);
        if (uVar2 + 1 < 0x300 && cVar8 != '\0') {
          pcVar4 = (char *)(param_1 + 5);
          do {
            param_3[uVar2] = cVar8;
            uVar2 = uVar2 + 1;
            cVar8 = *pcVar4;
            if (cVar8 == '\0') break;
            pcVar4 = pcVar4 + 1;
          } while (uVar2 < 0x2ff);
        }
        param_3[uVar2] = 0;
      }
    }
  }
  if (param_2 == (uint *)0x0) {
    return;
  }
  if (param_2[4] == 0) {
    pcVar4 = str_10013008;
    if (param_2[2] == 0) {
      pcVar4 = str_1001301a;
    }
  }
  else {
    pcVar4 = &DAT_10012ffb;
  }
  if ((param_3 != (undefined1 *)0x0) && (cVar8 = *pcVar4, cVar8 != '\0')) {
    uVar3 = 0;
    do {
      uVar2 = uVar3;
      uVar3 = uVar2 + 1;
    } while (param_3[uVar2] != '\0');
    if (uVar3 < 0x300) {
      param_3[uVar2] = 0x20;
      uVar2 = uVar3;
    }
    param_3[uVar2] = 0;
    uVar3 = 0xffffffffffffffff;
    do {
      uVar2 = uVar3;
      uVar3 = uVar2 + 1;
    } while (param_3[uVar2 + 1] != '\0');
    if (uVar2 + 2 < 0x300) {
      param_3[uVar3] = 99;
      bVar11 = uVar3 != 0x2fe;
      uVar3 = uVar2 + 2;
      if (bVar11) {
        uVar3 = uVar2 + 3;
        param_3[uVar2 + 2] = 0x68;
        if (uVar3 < 0x2ff) {
          uVar3 = uVar2 + 4;
          param_3[uVar2 + 3] = 0x69;
          if (uVar3 < 0x2ff) {
            uVar3 = uVar2 + 5;
            param_3[uVar2 + 4] = 0x70;
            if (uVar3 < 0x2ff) {
              uVar3 = uVar2 + 6;
              param_3[uVar2 + 5] = 0x73;
              if (uVar3 < 0x2ff) {
                uVar3 = uVar2 + 7;
                param_3[uVar2 + 6] = 0x65;
                if (uVar3 < 0x2ff) {
                  param_3[uVar2 + 7] = 0x74;
                  uVar3 = uVar2 + 8;
                }
              }
            }
          }
        }
      }
    }
    param_3[uVar3] = 0;
    uVar3 = 0;
    do {
      uVar2 = uVar3;
      uVar3 = uVar2 + 1;
    } while (param_3[uVar2] != '\0');
    if (uVar3 < 0x300) {
      param_3[uVar2] = 0x3d;
      uVar2 = uVar3;
    }
    param_3[uVar2] = 0;
    uVar3 = 0;
    do {
      uVar2 = uVar3;
      uVar3 = uVar2 + 1;
    } while (param_3[uVar2] != '\0');
    if (uVar2 + 1 < 0x300) {
      do {
        pcVar4 = pcVar4 + 1;
        param_3[uVar2] = cVar8;
        uVar2 = uVar2 + 1;
        cVar8 = *pcVar4;
        if (cVar8 == '\0') break;
      } while (uVar2 < 0x2ff);
    }
    param_3[uVar2] = 0;
  }
  if (param_2[5] == 0) {
    if (param_2[3] != 0) {
      if (param_3 != (undefined1 *)0x0) {
        uVar3 = 0;
        do {
          uVar2 = uVar3;
          uVar3 = uVar2 + 1;
        } while (param_3[uVar2] != '\0');
        if (uVar3 < 0x300) {
          param_3[uVar2] = 0x20;
          uVar2 = uVar3;
        }
        param_3[uVar2] = 0;
        uVar3 = 0xffffffffffffffff;
        do {
          uVar2 = uVar3;
          uVar3 = uVar2 + 1;
        } while (param_3[uVar2 + 1] != '\0');
        if (uVar2 + 2 < 0x300) {
          param_3[uVar3] = 100;
          bVar11 = uVar3 != 0x2fe;
          uVar3 = uVar2 + 2;
          if (bVar11) {
            uVar3 = uVar2 + 3;
            param_3[uVar2 + 2] = 0x69;
            if (uVar3 < 0x2ff) {
              uVar3 = uVar2 + 4;
              param_3[uVar2 + 3] = 0x73;
              if (uVar3 < 0x2ff) {
                uVar3 = uVar2 + 5;
                param_3[uVar2 + 4] = 0x70;
                if (uVar3 < 0x2ff) {
                  uVar3 = uVar2 + 6;
                  param_3[uVar2 + 5] = 0x6c;
                  if (uVar3 < 0x2ff) {
                    uVar3 = uVar2 + 7;
                    param_3[uVar2 + 6] = 0x61;
                    if (uVar3 < 0x2ff) {
                      param_3[uVar2 + 7] = 0x79;
                      uVar3 = uVar2 + 8;
                    }
                  }
                }
              }
            }
          }
        }
        param_3[uVar3] = 0;
        uVar3 = 0;
        do {
          uVar2 = uVar3;
          uVar3 = uVar2 + 1;
        } while (param_3[uVar2] != '\0');
        if (uVar3 < 0x300) {
          param_3[uVar2] = 0x3d;
          uVar2 = uVar3;
        }
        param_3[uVar2] = 0;
        uVar3 = 0;
        do {
          uVar2 = uVar3;
          uVar3 = uVar2 + 1;
        } while (param_3[uVar2] != '\0');
        if (uVar2 + 1 < 0x300) {
          cVar8 = 'i';
          pcVar4 = str_10012f40;
          do {
            pcVar4 = pcVar4 + 1;
            param_3[uVar2] = cVar8;
            uVar2 = uVar2 + 1;
            cVar8 = *pcVar4;
            if (cVar8 == '\0') break;
          } while (uVar2 < 0x2ff);
        }
        goto LAB_1000a6ba;
      }
      goto LAB_1000a450;
    }
    uVar1 = *param_2;
    if (param_3 != (undefined1 *)0x0) goto LAB_1000a6c0;
LAB_1000a452:
    if (uVar1 == 0) {
LAB_1000a818:
      uVar1 = param_2[1];
    }
    else {
LAB_1000a789:
      uVar3 = 0;
      do {
        abStack_13[uVar3 + 1] = (char)uVar1 + (char)(uVar1 / 10) * -10 | 0x30;
        uVar2 = uVar3 + 1;
        if (8 < uVar3) break;
        bVar11 = 9 < uVar1;
        uVar3 = uVar2;
        uVar1 = uVar1 / 10;
      } while (bVar11);
LAB_1000a7d8:
      do {
        uVar3 = uVar2 - 1;
        if (param_3 == (undefined1 *)0x0) {
          uVar2 = uVar3;
          if (uVar3 == 0) goto LAB_1000a818;
          goto LAB_1000a7d8;
        }
        uVar5 = 0;
        do {
          uVar6 = uVar5;
          uVar5 = uVar6 + 1;
        } while (param_3[uVar6] != '\0');
        if (uVar5 < 0x300) {
          param_3[uVar6] = abStack_13[uVar2];
          param_3[uVar5] = 0;
        }
        uVar2 = uVar3;
      } while (uVar3 != 0);
      uVar1 = param_2[1];
      if (param_3 != (undefined1 *)0x0) goto LAB_1000a85c;
    }
    if (uVar1 == 0) {
LAB_1000a9a8:
      uVar1 = param_2[2];
    }
    else {
LAB_1000a919:
      uVar3 = 0;
      do {
        abStack_13[uVar3 + 1] = (char)uVar1 + (char)(uVar1 / 10) * -10 | 0x30;
        uVar2 = uVar3 + 1;
        if (8 < uVar3) break;
        bVar11 = 9 < uVar1;
        uVar3 = uVar2;
        uVar1 = uVar1 / 10;
      } while (bVar11);
LAB_1000a968:
      do {
        uVar3 = uVar2 - 1;
        if (param_3 == (undefined1 *)0x0) {
          uVar2 = uVar3;
          if (uVar3 == 0) goto LAB_1000a9a8;
          goto LAB_1000a968;
        }
        uVar5 = 0;
        do {
          uVar6 = uVar5;
          uVar5 = uVar6 + 1;
        } while (param_3[uVar6] != '\0');
        if (uVar5 < 0x300) {
          param_3[uVar6] = abStack_13[uVar2];
          param_3[uVar5] = 0;
        }
        uVar2 = uVar3;
      } while (uVar3 != 0);
      uVar1 = param_2[2];
      if (param_3 != (undefined1 *)0x0) goto LAB_1000a9ec;
    }
    if (uVar1 == 0) {
LAB_1000ab38:
      uVar1 = param_2[3];
    }
    else {
LAB_1000aaa9:
      uVar3 = 0;
      do {
        abStack_13[uVar3 + 1] = (char)uVar1 + (char)(uVar1 / 10) * -10 | 0x30;
        uVar2 = uVar3 + 1;
        if (8 < uVar3) break;
        bVar11 = 9 < uVar1;
        uVar3 = uVar2;
        uVar1 = uVar1 / 10;
      } while (bVar11);
LAB_1000aaf8:
      do {
        uVar3 = uVar2 - 1;
        if (param_3 == (undefined1 *)0x0) {
          uVar2 = uVar3;
          if (uVar3 == 0) goto LAB_1000ab38;
          goto LAB_1000aaf8;
        }
        uVar5 = 0;
        do {
          uVar6 = uVar5;
          uVar5 = uVar6 + 1;
        } while (param_3[uVar6] != '\0');
        if (uVar5 < 0x300) {
          param_3[uVar6] = abStack_13[uVar2];
          param_3[uVar5] = 0;
        }
        uVar2 = uVar3;
      } while (uVar3 != 0);
      uVar1 = param_2[3];
      if (param_3 != (undefined1 *)0x0) goto LAB_1000ab7c;
    }
    if (uVar1 == 0) {
LAB_1000acc8:
      uVar1 = param_2[4];
    }
    else {
LAB_1000ac39:
      uVar3 = 0;
      do {
        abStack_13[uVar3 + 1] = (char)uVar1 + (char)(uVar1 / 10) * -10 | 0x30;
        uVar2 = uVar3 + 1;
        if (8 < uVar3) break;
        bVar11 = 9 < uVar1;
        uVar3 = uVar2;
        uVar1 = uVar1 / 10;
      } while (bVar11);
LAB_1000ac88:
      do {
        uVar3 = uVar2 - 1;
        if (param_3 == (undefined1 *)0x0) {
          uVar2 = uVar3;
          if (uVar3 == 0) goto LAB_1000acc8;
          goto LAB_1000ac88;
        }
        uVar5 = 0;
        do {
          uVar6 = uVar5;
          uVar5 = uVar6 + 1;
        } while (param_3[uVar6] != '\0');
        if (uVar5 < 0x300) {
          param_3[uVar6] = abStack_13[uVar2];
          param_3[uVar5] = 0;
        }
        uVar2 = uVar3;
      } while (uVar3 != 0);
      uVar1 = param_2[4];
      if (param_3 != (undefined1 *)0x0) goto LAB_1000ad0c;
    }
    if (uVar1 == 0) {
LAB_1000ae58:
      uVar1 = param_2[5];
    }
    else {
LAB_1000adc9:
      uVar3 = 0;
      do {
        abStack_13[uVar3 + 1] = (char)uVar1 + (char)(uVar1 / 10) * -10 | 0x30;
        uVar2 = uVar3 + 1;
        if (8 < uVar3) break;
        bVar11 = 9 < uVar1;
        uVar3 = uVar2;
        uVar1 = uVar1 / 10;
      } while (bVar11);
LAB_1000ae18:
      do {
        uVar3 = uVar2 - 1;
        if (param_3 == (undefined1 *)0x0) {
          uVar2 = uVar3;
          if (uVar3 == 0) goto LAB_1000ae58;
          goto LAB_1000ae18;
        }
        uVar5 = 0;
        do {
          uVar6 = uVar5;
          uVar5 = uVar6 + 1;
        } while (param_3[uVar6] != '\0');
        if (uVar5 < 0x300) {
          param_3[uVar6] = abStack_13[uVar2];
          param_3[uVar5] = 0;
        }
        uVar2 = uVar3;
      } while (uVar3 != 0);
      uVar1 = param_2[5];
      if (param_3 != (undefined1 *)0x0) goto LAB_1000ae9c;
    }
    if (uVar1 == 0) {
LAB_1000afe8:
      uVar1 = param_2[6];
    }
    else {
LAB_1000af59:
      uVar3 = 0;
      do {
        abStack_13[uVar3 + 1] = (char)uVar1 + (char)(uVar1 / 10) * -10 | 0x30;
        uVar2 = uVar3 + 1;
        if (8 < uVar3) break;
        bVar11 = 9 < uVar1;
        uVar3 = uVar2;
        uVar1 = uVar1 / 10;
      } while (bVar11);
LAB_1000afa8:
      do {
        uVar3 = uVar2 - 1;
        if (param_3 == (undefined1 *)0x0) {
          uVar2 = uVar3;
          if (uVar3 == 0) goto LAB_1000afe8;
          goto LAB_1000afa8;
        }
        uVar5 = 0;
        do {
          uVar6 = uVar5;
          uVar5 = uVar6 + 1;
        } while (param_3[uVar6] != '\0');
        if (uVar5 < 0x300) {
          param_3[uVar6] = abStack_13[uVar2];
          param_3[uVar5] = 0;
        }
        uVar2 = uVar3;
      } while (uVar3 != 0);
      uVar1 = param_2[6];
      if (param_3 != (undefined1 *)0x0) goto LAB_1000b02c;
    }
    if (uVar1 == 0) {
LAB_1000b178:
      uVar1 = param_2[7];
    }
    else {
LAB_1000b0e9:
      uVar3 = 0;
      do {
        abStack_13[uVar3 + 1] = (char)uVar1 + (char)(uVar1 / 10) * -10 | 0x30;
        uVar2 = uVar3 + 1;
        if (8 < uVar3) break;
        bVar11 = 9 < uVar1;
        uVar3 = uVar2;
        uVar1 = uVar1 / 10;
      } while (bVar11);
LAB_1000b138:
      do {
        uVar3 = uVar2 - 1;
        if (param_3 == (undefined1 *)0x0) {
          uVar2 = uVar3;
          if (uVar3 == 0) goto LAB_1000b178;
          goto LAB_1000b138;
        }
        uVar5 = 0;
        do {
          uVar6 = uVar5;
          uVar5 = uVar6 + 1;
        } while (param_3[uVar6] != '\0');
        if (uVar5 < 0x300) {
          param_3[uVar6] = abStack_13[uVar2];
          param_3[uVar5] = 0;
        }
        uVar2 = uVar3;
      } while (uVar3 != 0);
      uVar1 = param_2[7];
      if (param_3 != (undefined1 *)0x0) goto LAB_1000b1bc;
    }
    if (uVar1 == 0) {
LAB_1000b2f8:
      uVar1 = param_2[8];
    }
    else {
LAB_1000b269:
      uVar3 = 0;
      do {
        abStack_13[uVar3 + 1] = (char)uVar1 + (char)(uVar1 / 10) * -10 | 0x30;
        uVar2 = uVar3 + 1;
        if (8 < uVar3) break;
        bVar11 = 9 < uVar1;
        uVar3 = uVar2;
        uVar1 = uVar1 / 10;
      } while (bVar11);
LAB_1000b2b8:
      do {
        uVar3 = uVar2 - 1;
        if (param_3 == (undefined1 *)0x0) {
          uVar2 = uVar3;
          if (uVar3 == 0) goto LAB_1000b2f8;
          goto LAB_1000b2b8;
        }
        uVar5 = 0;
        do {
          uVar6 = uVar5;
          uVar5 = uVar6 + 1;
        } while (param_3[uVar6] != '\0');
        if (uVar5 < 0x300) {
          param_3[uVar6] = abStack_13[uVar2];
          param_3[uVar5] = 0;
        }
        uVar2 = uVar3;
      } while (uVar3 != 0);
      uVar1 = param_2[8];
      if (param_3 != (undefined1 *)0x0) goto LAB_1000b33c;
    }
    if (uVar1 == 0) {
LAB_1000b478:
      uVar1 = param_2[9];
    }
    else {
LAB_1000b3e9:
      uVar3 = 0;
      do {
        abStack_13[uVar3 + 1] = (char)uVar1 + (char)(uVar1 / 10) * -10 | 0x30;
        uVar2 = uVar3 + 1;
        if (8 < uVar3) break;
        bVar11 = 9 < uVar1;
        uVar3 = uVar2;
        uVar1 = uVar1 / 10;
      } while (bVar11);
LAB_1000b438:
      do {
        uVar3 = uVar2 - 1;
        if (param_3 == (undefined1 *)0x0) {
          uVar2 = uVar3;
          if (uVar3 == 0) goto LAB_1000b478;
          goto LAB_1000b438;
        }
        uVar5 = 0;
        do {
          uVar6 = uVar5;
          uVar5 = uVar6 + 1;
        } while (param_3[uVar6] != '\0');
        if (uVar5 < 0x300) {
          param_3[uVar6] = abStack_13[uVar2];
          param_3[uVar5] = 0;
        }
        uVar2 = uVar3;
      } while (uVar3 != 0);
      uVar1 = param_2[9];
      if (param_3 != (undefined1 *)0x0) goto LAB_1000b4bc;
    }
    if (uVar1 == 0) {
LAB_1000b608:
      uVar1 = param_2[10];
    }
    else {
LAB_1000b579:
      uVar3 = 0;
      do {
        abStack_13[uVar3 + 1] = (char)uVar1 + (char)(uVar1 / 10) * -10 | 0x30;
        uVar2 = uVar3 + 1;
        if (8 < uVar3) break;
        bVar11 = 9 < uVar1;
        uVar3 = uVar2;
        uVar1 = uVar1 / 10;
      } while (bVar11);
LAB_1000b5c8:
      do {
        uVar3 = uVar2 - 1;
        if (param_3 == (undefined1 *)0x0) {
          uVar2 = uVar3;
          if (uVar3 == 0) goto LAB_1000b608;
          goto LAB_1000b5c8;
        }
        uVar5 = 0;
        do {
          uVar6 = uVar5;
          uVar5 = uVar6 + 1;
        } while (param_3[uVar6] != '\0');
        if (uVar5 < 0x300) {
          param_3[uVar6] = abStack_13[uVar2];
          param_3[uVar5] = 0;
        }
        uVar2 = uVar3;
      } while (uVar3 != 0);
      uVar1 = param_2[10];
      if (param_3 != (undefined1 *)0x0) goto LAB_1000b64c;
    }
    if (uVar1 == 0) {
LAB_1000b798:
      uVar1 = param_2[0xb];
    }
    else {
LAB_1000b709:
      uVar3 = 0;
      do {
        abStack_13[uVar3 + 1] = (char)uVar1 + (char)(uVar1 / 10) * -10 | 0x30;
        uVar2 = uVar3 + 1;
        if (8 < uVar3) break;
        bVar11 = 9 < uVar1;
        uVar3 = uVar2;
        uVar1 = uVar1 / 10;
      } while (bVar11);
LAB_1000b758:
      do {
        uVar3 = uVar2 - 1;
        if (param_3 == (undefined1 *)0x0) {
          uVar2 = uVar3;
          if (uVar3 == 0) goto LAB_1000b798;
          goto LAB_1000b758;
        }
        uVar5 = 0;
        do {
          uVar6 = uVar5;
          uVar5 = uVar6 + 1;
        } while (param_3[uVar6] != '\0');
        if (uVar5 < 0x300) {
          param_3[uVar6] = abStack_13[uVar2];
          param_3[uVar5] = 0;
        }
        uVar2 = uVar3;
      } while (uVar3 != 0);
      uVar1 = param_2[0xb];
      if (param_3 != (undefined1 *)0x0) goto LAB_1000b7dc;
    }
    if (uVar1 == 0) {
LAB_1000b928:
      uVar1 = param_2[0xc];
    }
    else {
LAB_1000b899:
      uVar3 = 0;
      do {
        abStack_13[uVar3 + 1] = (char)uVar1 + (char)(uVar1 / 10) * -10 | 0x30;
        uVar2 = uVar3 + 1;
        if (8 < uVar3) break;
        bVar11 = 9 < uVar1;
        uVar3 = uVar2;
        uVar1 = uVar1 / 10;
      } while (bVar11);
LAB_1000b8e8:
      do {
        uVar3 = uVar2 - 1;
        if (param_3 == (undefined1 *)0x0) {
          uVar2 = uVar3;
          if (uVar3 == 0) goto LAB_1000b928;
          goto LAB_1000b8e8;
        }
        uVar5 = 0;
        do {
          uVar6 = uVar5;
          uVar5 = uVar6 + 1;
        } while (param_3[uVar6] != '\0');
        if (uVar5 < 0x300) {
          param_3[uVar6] = abStack_13[uVar2];
          param_3[uVar5] = 0;
        }
        uVar2 = uVar3;
      } while (uVar3 != 0);
      uVar1 = param_2[0xc];
      if (param_3 != (undefined1 *)0x0) goto LAB_1000b96c;
    }
    if (uVar1 == 0) {
LAB_1000bac8:
      uVar1 = param_2[0xd];
    }
    else {
LAB_1000ba39:
      uVar3 = 0;
      do {
        abStack_13[uVar3 + 1] = (char)uVar1 + (char)(uVar1 / 10) * -10 | 0x30;
        uVar2 = uVar3 + 1;
        if (8 < uVar3) break;
        bVar11 = 9 < uVar1;
        uVar3 = uVar2;
        uVar1 = uVar1 / 10;
      } while (bVar11);
LAB_1000ba88:
      do {
        uVar3 = uVar2 - 1;
        if (param_3 == (undefined1 *)0x0) {
          uVar2 = uVar3;
          if (uVar3 == 0) goto LAB_1000bac8;
          goto LAB_1000ba88;
        }
        uVar5 = 0;
        do {
          uVar6 = uVar5;
          uVar5 = uVar6 + 1;
        } while (param_3[uVar6] != '\0');
        if (uVar5 < 0x300) {
          param_3[uVar6] = abStack_13[uVar2];
          param_3[uVar5] = 0;
        }
        uVar2 = uVar3;
      } while (uVar3 != 0);
      uVar1 = param_2[0xd];
      if (param_3 != (undefined1 *)0x0) goto LAB_1000bb0c;
    }
    if (uVar1 == 0) {
LAB_1000bc98:
      uVar1 = param_2[0xe];
    }
    else {
LAB_1000bc09:
      uVar3 = 0;
      do {
        abStack_13[uVar3 + 1] = (char)uVar1 + (char)(uVar1 / 10) * -10 | 0x30;
        uVar2 = uVar3 + 1;
        if (8 < uVar3) break;
        bVar11 = 9 < uVar1;
        uVar3 = uVar2;
        uVar1 = uVar1 / 10;
      } while (bVar11);
LAB_1000bc58:
      do {
        uVar3 = uVar2 - 1;
        if (param_3 == (undefined1 *)0x0) {
          uVar2 = uVar3;
          if (uVar3 == 0) goto LAB_1000bc98;
          goto LAB_1000bc58;
        }
        uVar5 = 0;
        do {
          uVar6 = uVar5;
          uVar5 = uVar6 + 1;
        } while (param_3[uVar6] != '\0');
        if (uVar5 < 0x300) {
          param_3[uVar6] = abStack_13[uVar2];
          param_3[uVar5] = 0;
        }
        uVar2 = uVar3;
      } while (uVar3 != 0);
      uVar1 = param_2[0xe];
      if (param_3 != (undefined1 *)0x0) goto LAB_1000bcdc;
    }
    if (uVar1 == 0) {
LAB_1000be78:
      uVar1 = param_2[0xf];
    }
    else {
LAB_1000bde9:
      uVar3 = 0;
      do {
        abStack_13[uVar3 + 1] = (char)uVar1 + (char)(uVar1 / 10) * -10 | 0x30;
        uVar2 = uVar3 + 1;
        if (8 < uVar3) break;
        bVar11 = 9 < uVar1;
        uVar3 = uVar2;
        uVar1 = uVar1 / 10;
      } while (bVar11);
LAB_1000be38:
      do {
        uVar3 = uVar2 - 1;
        if (param_3 == (undefined1 *)0x0) {
          uVar2 = uVar3;
          if (uVar3 == 0) goto LAB_1000be78;
          goto LAB_1000be38;
        }
        uVar5 = 0;
        do {
          uVar6 = uVar5;
          uVar5 = uVar6 + 1;
        } while (param_3[uVar6] != '\0');
        if (uVar5 < 0x300) {
          param_3[uVar6] = abStack_13[uVar2];
          param_3[uVar5] = 0;
        }
        uVar2 = uVar3;
      } while (uVar3 != 0);
      uVar1 = param_2[0xf];
      if (param_3 != (undefined1 *)0x0) goto LAB_1000bebc;
    }
    if (uVar1 == 0) {
LAB_1000bff8:
      uVar1 = param_2[0x10];
    }
    else {
LAB_1000bf69:
      uVar3 = 0;
      do {
        abStack_13[uVar3 + 1] = (char)uVar1 + (char)(uVar1 / 10) * -10 | 0x30;
        uVar2 = uVar3 + 1;
        if (8 < uVar3) break;
        bVar11 = 9 < uVar1;
        uVar3 = uVar2;
        uVar1 = uVar1 / 10;
      } while (bVar11);
LAB_1000bfb8:
      do {
        uVar3 = uVar2 - 1;
        if (param_3 == (undefined1 *)0x0) {
          uVar2 = uVar3;
          if (uVar3 == 0) goto LAB_1000bff8;
          goto LAB_1000bfb8;
        }
        uVar5 = 0;
        do {
          uVar6 = uVar5;
          uVar5 = uVar6 + 1;
        } while (param_3[uVar6] != '\0');
        if (uVar5 < 0x300) {
          param_3[uVar6] = abStack_13[uVar2];
          param_3[uVar5] = 0;
        }
        uVar2 = uVar3;
      } while (uVar3 != 0);
      uVar1 = param_2[0x10];
      if (param_3 != (undefined1 *)0x0) goto LAB_1000c03c;
    }
    if (uVar1 == 0) {
LAB_1000c188:
      uVar1 = param_2[0x11];
    }
    else {
LAB_1000c0f9:
      uVar3 = 0;
      do {
        abStack_13[uVar3 + 1] = (char)uVar1 + (char)(uVar1 / 10) * -10 | 0x30;
        uVar2 = uVar3 + 1;
        if (8 < uVar3) break;
        bVar11 = 9 < uVar1;
        uVar3 = uVar2;
        uVar1 = uVar1 / 10;
      } while (bVar11);
LAB_1000c148:
      do {
        uVar3 = uVar2 - 1;
        if (param_3 == (undefined1 *)0x0) {
          uVar2 = uVar3;
          if (uVar3 == 0) goto LAB_1000c188;
          goto LAB_1000c148;
        }
        uVar5 = 0;
        do {
          uVar6 = uVar5;
          uVar5 = uVar6 + 1;
        } while (param_3[uVar6] != '\0');
        if (uVar5 < 0x300) {
          param_3[uVar6] = abStack_13[uVar2];
          param_3[uVar5] = 0;
        }
        uVar2 = uVar3;
      } while (uVar3 != 0);
      uVar1 = param_2[0x11];
      if (param_3 != (undefined1 *)0x0) goto LAB_1000c1cc;
    }
    if (uVar1 == 0) {
      return;
    }
  }
  else {
    if (param_3 == (undefined1 *)0x0) {
LAB_1000a450:
      uVar1 = *param_2;
      goto LAB_1000a452;
    }
    uVar3 = 0;
    do {
      uVar2 = uVar3;
      uVar3 = uVar2 + 1;
    } while (param_3[uVar2] != '\0');
    if (uVar3 < 0x300) {
      param_3[uVar2] = 0x20;
      uVar2 = uVar3;
    }
    param_3[uVar2] = 0;
    uVar3 = 0xffffffffffffffff;
    do {
      uVar2 = uVar3;
      uVar3 = uVar2 + 1;
    } while (param_3[uVar2 + 1] != '\0');
    if (uVar2 + 2 < 0x300) {
      param_3[uVar3] = 100;
      bVar11 = uVar3 != 0x2fe;
      uVar3 = uVar2 + 2;
      if (bVar11) {
        uVar3 = uVar2 + 3;
        param_3[uVar2 + 2] = 0x69;
        if (uVar3 < 0x2ff) {
          uVar3 = uVar2 + 4;
          param_3[uVar2 + 3] = 0x73;
          if (uVar3 < 0x2ff) {
            uVar3 = uVar2 + 5;
            param_3[uVar2 + 4] = 0x70;
            if (uVar3 < 0x2ff) {
              uVar3 = uVar2 + 6;
              param_3[uVar2 + 5] = 0x6c;
              if (uVar3 < 0x2ff) {
                uVar3 = uVar2 + 7;
                param_3[uVar2 + 6] = 0x61;
                if (uVar3 < 0x2ff) {
                  param_3[uVar2 + 7] = 0x79;
                  uVar3 = uVar2 + 8;
                }
              }
            }
          }
        }
      }
    }
    param_3[uVar3] = 0;
    uVar3 = 0;
    do {
      uVar2 = uVar3;
      uVar3 = uVar2 + 1;
    } while (param_3[uVar2] != '\0');
    if (uVar3 < 0x300) {
      param_3[uVar2] = 0x3d;
      uVar2 = uVar3;
    }
    param_3[uVar2] = 0;
    uVar3 = 0;
    do {
      uVar2 = uVar3;
      uVar3 = uVar2 + 1;
    } while (param_3[uVar2] != '\0');
    if (uVar2 + 1 < 0x300) {
      cVar8 = 'g';
      pcVar4 = str_10012f33;
      do {
        pcVar4 = pcVar4 + 1;
        param_3[uVar2] = cVar8;
        uVar2 = uVar2 + 1;
        cVar8 = *pcVar4;
        if (cVar8 == '\0') break;
      } while (uVar2 < 0x2ff);
    }
LAB_1000a6ba:
    param_3[uVar2] = 0;
    uVar1 = *param_2;
LAB_1000a6c0:
    uVar3 = 0;
    do {
      uVar2 = uVar3;
      uVar3 = uVar2 + 1;
    } while (param_3[uVar2] != '\0');
    if (uVar3 < 0x300) {
      param_3[uVar2] = 0x20;
      uVar2 = uVar3;
    }
    param_3[uVar2] = 0;
    uVar3 = 0;
    do {
      uVar2 = uVar3;
      uVar3 = uVar2 + 1;
    } while (param_3[uVar2] != '\0');
    if (uVar2 + 1 < 0x300) {
      cVar8 = 'm';
      pcVar4 = str_10012f4a;
      do {
        pcVar4 = pcVar4 + 1;
        param_3[uVar2] = cVar8;
        uVar2 = uVar2 + 1;
        cVar8 = *pcVar4;
        if (cVar8 == '\0') break;
      } while (uVar2 < 0x2ff);
    }
    param_3[uVar2] = 0;
    uVar3 = 0;
    do {
      uVar2 = uVar3;
      uVar3 = uVar2 + 1;
    } while (param_3[uVar2] != '\0');
    if (uVar3 < 0x300) {
      param_3[uVar2] = 0x3d;
      uVar2 = uVar3;
    }
    param_3[uVar2] = 0;
    if (uVar1 != 0) goto LAB_1000a789;
    uVar3 = 0;
    do {
      uVar2 = uVar3;
      uVar3 = uVar2 + 1;
    } while (param_3[uVar2] != '\0');
    if (uVar2 + 1 < 0x300) {
      *(undefined2 *)(param_3 + uVar2) = 0x30;
    }
    uVar1 = param_2[1];
LAB_1000a85c:
    uVar3 = 0;
    do {
      uVar2 = uVar3;
      uVar3 = uVar2 + 1;
    } while (param_3[uVar2] != '\0');
    if (uVar3 < 0x300) {
      param_3[uVar2] = 0x20;
      uVar2 = uVar3;
    }
    param_3[uVar2] = 0;
    uVar3 = 0;
    do {
      uVar2 = uVar3;
      uVar3 = uVar2 + 1;
    } while (param_3[uVar2] != '\0');
    if (uVar2 + 1 < 0x300) {
      cVar8 = 'r';
      pcVar4 = str_10012f55;
      do {
        pcVar4 = pcVar4 + 1;
        param_3[uVar2] = cVar8;
        uVar2 = uVar2 + 1;
        cVar8 = *pcVar4;
        if (cVar8 == '\0') break;
      } while (uVar2 < 0x2ff);
    }
    param_3[uVar2] = 0;
    uVar3 = 0;
    do {
      uVar2 = uVar3;
      uVar3 = uVar2 + 1;
    } while (param_3[uVar2] != '\0');
    if (uVar3 < 0x300) {
      param_3[uVar2] = 0x3d;
      uVar2 = uVar3;
    }
    param_3[uVar2] = 0;
    if (uVar1 != 0) goto LAB_1000a919;
    uVar3 = 0;
    do {
      uVar2 = uVar3;
      uVar3 = uVar2 + 1;
    } while (param_3[uVar2] != '\0');
    if (uVar2 + 1 < 0x300) {
      *(undefined2 *)(param_3 + uVar2) = 0x30;
    }
    uVar1 = param_2[2];
LAB_1000a9ec:
    uVar3 = 0;
    do {
      uVar2 = uVar3;
      uVar3 = uVar2 + 1;
    } while (param_3[uVar2] != '\0');
    if (uVar3 < 0x300) {
      param_3[uVar2] = 0x20;
      uVar2 = uVar3;
    }
    param_3[uVar2] = 0;
    uVar3 = 0;
    do {
      uVar2 = uVar3;
      uVar3 = uVar2 + 1;
    } while (param_3[uVar2] != '\0');
    if (uVar2 + 1 < 0x300) {
      cVar8 = 'i';
      pcVar4 = str_10012f63;
      do {
        pcVar4 = pcVar4 + 1;
        param_3[uVar2] = cVar8;
        uVar2 = uVar2 + 1;
        cVar8 = *pcVar4;
        if (cVar8 == '\0') break;
      } while (uVar2 < 0x2ff);
    }
    param_3[uVar2] = 0;
    uVar3 = 0;
    do {
      uVar2 = uVar3;
      uVar3 = uVar2 + 1;
    } while (param_3[uVar2] != '\0');
    if (uVar3 < 0x300) {
      param_3[uVar2] = 0x3d;
      uVar2 = uVar3;
    }
    param_3[uVar2] = 0;
    if (uVar1 != 0) goto LAB_1000aaa9;
    uVar3 = 0;
    do {
      uVar2 = uVar3;
      uVar3 = uVar2 + 1;
    } while (param_3[uVar2] != '\0');
    if (uVar2 + 1 < 0x300) {
      *(undefined2 *)(param_3 + uVar2) = 0x30;
    }
    uVar1 = param_2[3];
LAB_1000ab7c:
    uVar3 = 0;
    do {
      uVar2 = uVar3;
      uVar3 = uVar2 + 1;
    } while (param_3[uVar2] != '\0');
    if (uVar3 < 0x300) {
      param_3[uVar2] = 0x20;
      uVar2 = uVar3;
    }
    param_3[uVar2] = 0;
    uVar3 = 0;
    do {
      uVar2 = uVar3;
      uVar3 = uVar2 + 1;
    } while (param_3[uVar2] != '\0');
    if (uVar2 + 1 < 0x300) {
      cVar8 = 'i';
      pcVar4 = str_10012f70;
      do {
        pcVar4 = pcVar4 + 1;
        param_3[uVar2] = cVar8;
        uVar2 = uVar2 + 1;
        cVar8 = *pcVar4;
        if (cVar8 == '\0') break;
      } while (uVar2 < 0x2ff);
    }
    param_3[uVar2] = 0;
    uVar3 = 0;
    do {
      uVar2 = uVar3;
      uVar3 = uVar2 + 1;
    } while (param_3[uVar2] != '\0');
    if (uVar3 < 0x300) {
      param_3[uVar2] = 0x3d;
      uVar2 = uVar3;
    }
    param_3[uVar2] = 0;
    if (uVar1 != 0) goto LAB_1000ac39;
    uVar3 = 0;
    do {
      uVar2 = uVar3;
      uVar3 = uVar2 + 1;
    } while (param_3[uVar2] != '\0');
    if (uVar2 + 1 < 0x300) {
      *(undefined2 *)(param_3 + uVar2) = 0x30;
    }
    uVar1 = param_2[4];
LAB_1000ad0c:
    uVar3 = 0;
    do {
      uVar2 = uVar3;
      uVar3 = uVar2 + 1;
    } while (param_3[uVar2] != '\0');
    if (uVar3 < 0x300) {
      param_3[uVar2] = 0x20;
      uVar2 = uVar3;
    }
    param_3[uVar2] = 0;
    uVar3 = 0;
    do {
      uVar2 = uVar3;
      uVar3 = uVar2 + 1;
    } while (param_3[uVar2] != '\0');
    if (uVar2 + 1 < 0x300) {
      cVar8 = 'n';
      pcVar4 = str_10012f7d;
      do {
        pcVar4 = pcVar4 + 1;
        param_3[uVar2] = cVar8;
        uVar2 = uVar2 + 1;
        cVar8 = *pcVar4;
        if (cVar8 == '\0') break;
      } while (uVar2 < 0x2ff);
    }
    param_3[uVar2] = 0;
    uVar3 = 0;
    do {
      uVar2 = uVar3;
      uVar3 = uVar2 + 1;
    } while (param_3[uVar2] != '\0');
    if (uVar3 < 0x300) {
      param_3[uVar2] = 0x3d;
      uVar2 = uVar3;
    }
    param_3[uVar2] = 0;
    if (uVar1 != 0) goto LAB_1000adc9;
    uVar3 = 0;
    do {
      uVar2 = uVar3;
      uVar3 = uVar2 + 1;
    } while (param_3[uVar2] != '\0');
    if (uVar2 + 1 < 0x300) {
      *(undefined2 *)(param_3 + uVar2) = 0x30;
    }
    uVar1 = param_2[5];
LAB_1000ae9c:
    uVar3 = 0;
    do {
      uVar2 = uVar3;
      uVar3 = uVar2 + 1;
    } while (param_3[uVar2] != '\0');
    if (uVar3 < 0x300) {
      param_3[uVar2] = 0x20;
      uVar2 = uVar3;
    }
    param_3[uVar2] = 0;
    uVar3 = 0;
    do {
      uVar2 = uVar3;
      uVar3 = uVar2 + 1;
    } while (param_3[uVar2] != '\0');
    if (uVar2 + 1 < 0x300) {
      cVar8 = 'n';
      pcVar4 = str_10012f87;
      do {
        pcVar4 = pcVar4 + 1;
        param_3[uVar2] = cVar8;
        uVar2 = uVar2 + 1;
        cVar8 = *pcVar4;
        if (cVar8 == '\0') break;
      } while (uVar2 < 0x2ff);
    }
    param_3[uVar2] = 0;
    uVar3 = 0;
    do {
      uVar2 = uVar3;
      uVar3 = uVar2 + 1;
    } while (param_3[uVar2] != '\0');
    if (uVar3 < 0x300) {
      param_3[uVar2] = 0x3d;
      uVar2 = uVar3;
    }
    param_3[uVar2] = 0;
    if (uVar1 != 0) goto LAB_1000af59;
    uVar3 = 0;
    do {
      uVar2 = uVar3;
      uVar3 = uVar2 + 1;
    } while (param_3[uVar2] != '\0');
    if (uVar2 + 1 < 0x300) {
      *(undefined2 *)(param_3 + uVar2) = 0x30;
    }
    uVar1 = param_2[6];
LAB_1000b02c:
    uVar3 = 0;
    do {
      uVar2 = uVar3;
      uVar3 = uVar2 + 1;
    } while (param_3[uVar2] != '\0');
    if (uVar3 < 0x300) {
      param_3[uVar2] = 0x20;
      uVar2 = uVar3;
    }
    param_3[uVar2] = 0;
    uVar3 = 0xffffffffffffffff;
    do {
      uVar2 = uVar3;
      uVar3 = uVar2 + 1;
    } while (param_3[uVar2 + 1] != '\0');
    if (uVar2 + 2 < 0x300) {
      param_3[uVar3] = 0x61;
      bVar11 = uVar3 != 0x2fe;
      uVar3 = uVar2 + 2;
      if (bVar11) {
        uVar3 = uVar2 + 3;
        param_3[uVar2 + 2] = 0x68;
        if (uVar3 < 0x2ff) {
          uVar3 = uVar2 + 4;
          param_3[uVar2 + 3] = 99;
          if (uVar3 < 0x2ff) {
            param_3[uVar2 + 4] = 0x69;
            uVar3 = uVar2 + 5;
          }
        }
      }
    }
    param_3[uVar3] = 0;
    uVar3 = 0;
    do {
      uVar2 = uVar3;
      uVar3 = uVar2 + 1;
    } while (param_3[uVar2] != '\0');
    if (uVar3 < 0x300) {
      param_3[uVar2] = 0x3d;
      uVar2 = uVar3;
    }
    param_3[uVar2] = 0;
    if (uVar1 != 0) goto LAB_1000b0e9;
    uVar3 = 0;
    do {
      uVar2 = uVar3;
      uVar3 = uVar2 + 1;
    } while (param_3[uVar2] != '\0');
    if (uVar2 + 1 < 0x300) {
      *(undefined2 *)(param_3 + uVar2) = 0x30;
    }
    uVar1 = param_2[7];
LAB_1000b1bc:
    uVar3 = 0;
    do {
      uVar2 = uVar3;
      uVar3 = uVar2 + 1;
    } while (param_3[uVar2] != '\0');
    if (uVar3 < 0x300) {
      param_3[uVar2] = 0x20;
      uVar2 = uVar3;
    }
    param_3[uVar2] = 0;
    uVar3 = 0;
    do {
      uVar2 = uVar3;
      uVar3 = uVar2 + 1;
    } while (param_3[uVar2] != '\0');
    if (uVar3 < 0x300) {
      param_3[uVar2] = 0x68;
      uVar5 = uVar3;
      if (uVar3 != 0x2ff) {
        uVar5 = uVar2 + 2;
        param_3[uVar3] = 100;
        if (uVar5 < 0x2ff) {
          param_3[uVar2 + 2] = 0x61;
          uVar5 = uVar2 + 3;
        }
      }
    }
    else {
      uVar5 = uVar2;
    }
    param_3[uVar5] = 0;
    uVar3 = 0;
    do {
      uVar2 = uVar3;
      uVar3 = uVar2 + 1;
    } while (param_3[uVar2] != '\0');
    if (uVar3 < 0x300) {
      param_3[uVar2] = 0x3d;
      uVar2 = uVar3;
    }
    param_3[uVar2] = 0;
    if (uVar1 != 0) goto LAB_1000b269;
    uVar3 = 0;
    do {
      uVar2 = uVar3;
      uVar3 = uVar2 + 1;
    } while (param_3[uVar2] != '\0');
    if (uVar2 + 1 < 0x300) {
      *(undefined2 *)(param_3 + uVar2) = 0x30;
    }
    uVar1 = param_2[8];
LAB_1000b33c:
    uVar3 = 0;
    do {
      uVar2 = uVar3;
      uVar3 = uVar2 + 1;
    } while (param_3[uVar2] != '\0');
    if (uVar3 < 0x300) {
      param_3[uVar2] = 0x20;
      uVar2 = uVar3;
    }
    param_3[uVar2] = 0;
    uVar3 = 0;
    do {
      uVar2 = uVar3;
      uVar3 = uVar2 + 1;
    } while (param_3[uVar2] != '\0');
    if (uVar3 < 0x300) {
      param_3[uVar2] = 0x75;
      uVar5 = uVar3;
      if (uVar3 != 0x2ff) {
        uVar5 = uVar2 + 2;
        param_3[uVar3] = 0x73;
        if (uVar5 < 0x2ff) {
          param_3[uVar2 + 2] = 0x62;
          uVar5 = uVar2 + 3;
        }
      }
    }
    else {
      uVar5 = uVar2;
    }
    param_3[uVar5] = 0;
    uVar3 = 0;
    do {
      uVar2 = uVar3;
      uVar3 = uVar2 + 1;
    } while (param_3[uVar2] != '\0');
    if (uVar3 < 0x300) {
      param_3[uVar2] = 0x3d;
      uVar2 = uVar3;
    }
    param_3[uVar2] = 0;
    if (uVar1 != 0) goto LAB_1000b3e9;
    uVar3 = 0;
    do {
      uVar2 = uVar3;
      uVar3 = uVar2 + 1;
    } while (param_3[uVar2] != '\0');
    if (uVar2 + 1 < 0x300) {
      *(undefined2 *)(param_3 + uVar2) = 0x30;
    }
    uVar1 = param_2[9];
LAB_1000b4bc:
    uVar3 = 0;
    do {
      uVar2 = uVar3;
      uVar3 = uVar2 + 1;
    } while (param_3[uVar2] != '\0');
    if (uVar3 < 0x300) {
      param_3[uVar2] = 0x20;
      uVar2 = uVar3;
    }
    param_3[uVar2] = 0;
    uVar3 = 0xffffffffffffffff;
    do {
      uVar2 = uVar3;
      uVar3 = uVar2 + 1;
    } while (param_3[uVar2 + 1] != '\0');
    if (uVar2 + 2 < 0x300) {
      param_3[uVar3] = 0x75;
      bVar11 = uVar3 != 0x2fe;
      uVar3 = uVar2 + 2;
      if (bVar11) {
        uVar3 = uVar2 + 3;
        param_3[uVar2 + 2] = 0x68;
        if (uVar3 < 0x2ff) {
          uVar3 = uVar2 + 4;
          param_3[uVar2 + 3] = 99;
          if (uVar3 < 0x2ff) {
            param_3[uVar2 + 4] = 0x69;
            uVar3 = uVar2 + 5;
          }
        }
      }
    }
    param_3[uVar3] = 0;
    uVar3 = 0;
    do {
      uVar2 = uVar3;
      uVar3 = uVar2 + 1;
    } while (param_3[uVar2] != '\0');
    if (uVar3 < 0x300) {
      param_3[uVar2] = 0x3d;
      uVar2 = uVar3;
    }
    param_3[uVar2] = 0;
    if (uVar1 != 0) goto LAB_1000b579;
    uVar3 = 0;
    do {
      uVar2 = uVar3;
      uVar3 = uVar2 + 1;
    } while (param_3[uVar2] != '\0');
    if (uVar2 + 1 < 0x300) {
      *(undefined2 *)(param_3 + uVar2) = 0x30;
    }
    uVar1 = param_2[10];
LAB_1000b64c:
    uVar3 = 0;
    do {
      uVar2 = uVar3;
      uVar3 = uVar2 + 1;
    } while (param_3[uVar2] != '\0');
    if (uVar3 < 0x300) {
      param_3[uVar2] = 0x20;
      uVar2 = uVar3;
    }
    param_3[uVar2] = 0;
    uVar3 = 0xffffffffffffffff;
    do {
      uVar2 = uVar3;
      uVar3 = uVar2 + 1;
    } while (param_3[uVar2 + 1] != '\0');
    if (uVar2 + 2 < 0x300) {
      param_3[uVar3] = 0x6f;
      bVar11 = uVar3 != 0x2fe;
      uVar3 = uVar2 + 2;
      if (bVar11) {
        uVar3 = uVar2 + 3;
        param_3[uVar2 + 2] = 0x68;
        if (uVar3 < 0x2ff) {
          uVar3 = uVar2 + 4;
          param_3[uVar2 + 3] = 99;
          if (uVar3 < 0x2ff) {
            param_3[uVar2 + 4] = 0x69;
            uVar3 = uVar2 + 5;
          }
        }
      }
    }
    param_3[uVar3] = 0;
    uVar3 = 0;
    do {
      uVar2 = uVar3;
      uVar3 = uVar2 + 1;
    } while (param_3[uVar2] != '\0');
    if (uVar3 < 0x300) {
      param_3[uVar2] = 0x3d;
      uVar2 = uVar3;
    }
    param_3[uVar2] = 0;
    if (uVar1 != 0) goto LAB_1000b709;
    uVar3 = 0;
    do {
      uVar2 = uVar3;
      uVar3 = uVar2 + 1;
    } while (param_3[uVar2] != '\0');
    if (uVar2 + 1 < 0x300) {
      *(undefined2 *)(param_3 + uVar2) = 0x30;
    }
    uVar1 = param_2[0xb];
LAB_1000b7dc:
    uVar3 = 0;
    do {
      uVar2 = uVar3;
      uVar3 = uVar2 + 1;
    } while (param_3[uVar2] != '\0');
    if (uVar3 < 0x300) {
      param_3[uVar2] = 0x20;
      uVar2 = uVar3;
    }
    param_3[uVar2] = 0;
    uVar3 = 0xffffffffffffffff;
    do {
      uVar2 = uVar3;
      uVar3 = uVar2 + 1;
    } while (param_3[uVar2 + 1] != '\0');
    if (uVar2 + 2 < 0x300) {
      param_3[uVar3] = 0x65;
      bVar11 = uVar3 != 0x2fe;
      uVar3 = uVar2 + 2;
      if (bVar11) {
        uVar3 = uVar2 + 3;
        param_3[uVar2 + 2] = 0x68;
        if (uVar3 < 0x2ff) {
          uVar3 = uVar2 + 4;
          param_3[uVar2 + 3] = 99;
          if (uVar3 < 0x2ff) {
            param_3[uVar2 + 4] = 0x69;
            uVar3 = uVar2 + 5;
          }
        }
      }
    }
    param_3[uVar3] = 0;
    uVar3 = 0;
    do {
      uVar2 = uVar3;
      uVar3 = uVar2 + 1;
    } while (param_3[uVar2] != '\0');
    if (uVar3 < 0x300) {
      param_3[uVar2] = 0x3d;
      uVar2 = uVar3;
    }
    param_3[uVar2] = 0;
    if (uVar1 != 0) goto LAB_1000b899;
    uVar3 = 0;
    do {
      uVar2 = uVar3;
      uVar3 = uVar2 + 1;
    } while (param_3[uVar2] != '\0');
    if (uVar2 + 1 < 0x300) {
      *(undefined2 *)(param_3 + uVar2) = 0x30;
    }
    uVar1 = param_2[0xc];
LAB_1000b96c:
    uVar3 = 0;
    do {
      uVar2 = uVar3;
      uVar3 = uVar2 + 1;
    } while (param_3[uVar2] != '\0');
    if (uVar3 < 0x300) {
      param_3[uVar2] = 0x20;
      uVar2 = uVar3;
    }
    param_3[uVar2] = 0;
    uVar3 = 0xffffffffffffffff;
    do {
      uVar2 = uVar3;
      uVar3 = uVar2 + 1;
    } while (param_3[uVar2 + 1] != '\0');
    if (uVar2 + 2 < 0x300) {
      param_3[uVar3] = 0x73;
      bVar11 = uVar3 != 0x2fe;
      uVar3 = uVar2 + 2;
      if (bVar11) {
        uVar3 = uVar2 + 3;
        param_3[uVar2 + 2] = 0x6d;
        if (uVar3 < 0x2ff) {
          uVar3 = uVar2 + 4;
          param_3[uVar2 + 3] = 0x62;
          if (uVar3 < 0x2ff) {
            uVar3 = uVar2 + 5;
            param_3[uVar2 + 4] = 0x75;
            if (uVar3 < 0x2ff) {
              param_3[uVar2 + 5] = 0x73;
              uVar3 = uVar2 + 6;
            }
          }
        }
      }
    }
    param_3[uVar3] = 0;
    uVar3 = 0;
    do {
      uVar2 = uVar3;
      uVar3 = uVar2 + 1;
    } while (param_3[uVar2] != '\0');
    if (uVar3 < 0x300) {
      param_3[uVar2] = 0x3d;
      uVar2 = uVar3;
    }
    param_3[uVar2] = 0;
    if (uVar1 != 0) goto LAB_1000ba39;
    uVar3 = 0;
    do {
      uVar2 = uVar3;
      uVar3 = uVar2 + 1;
    } while (param_3[uVar2] != '\0');
    if (uVar2 + 1 < 0x300) {
      *(undefined2 *)(param_3 + uVar2) = 0x30;
    }
    uVar1 = param_2[0xd];
LAB_1000bb0c:
    uVar3 = 0;
    do {
      uVar2 = uVar3;
      uVar3 = uVar2 + 1;
    } while (param_3[uVar2] != '\0');
    if (uVar3 < 0x300) {
      param_3[uVar2] = 0x20;
      uVar2 = uVar3;
    }
    param_3[uVar2] = 0;
    uVar3 = 0xffffffffffffffff;
    do {
      uVar2 = uVar3;
      uVar3 = uVar2 + 1;
    } while (param_3[uVar2 + 1] != '\0');
    if (uVar2 + 2 < 0x300) {
      param_3[uVar3] = 0x6e;
      bVar11 = uVar3 != 0x2fe;
      uVar3 = uVar2 + 2;
      if (bVar11) {
        uVar3 = uVar2 + 3;
        param_3[uVar2 + 2] = 0x65;
        if (uVar3 < 0x2ff) {
          uVar3 = uVar2 + 4;
          param_3[uVar2 + 3] = 0x74;
          if (uVar3 < 0x2ff) {
            uVar3 = uVar2 + 5;
            param_3[uVar2 + 4] = 0x77;
            if (uVar3 < 0x2ff) {
              uVar3 = uVar2 + 6;
              param_3[uVar2 + 5] = 0x6f;
              if (uVar3 < 0x2ff) {
                uVar3 = uVar2 + 7;
                param_3[uVar2 + 6] = 0x72;
                if (uVar3 < 0x2ff) {
                  param_3[uVar2 + 7] = 0x6b;
                  uVar3 = uVar2 + 8;
                }
              }
            }
          }
        }
      }
    }
    param_3[uVar3] = 0;
    uVar3 = 0;
    do {
      uVar2 = uVar3;
      uVar3 = uVar2 + 1;
    } while (param_3[uVar2] != '\0');
    if (uVar3 < 0x300) {
      param_3[uVar2] = 0x3d;
      uVar2 = uVar3;
    }
    param_3[uVar2] = 0;
    if (uVar1 != 0) goto LAB_1000bc09;
    uVar3 = 0;
    do {
      uVar2 = uVar3;
      uVar3 = uVar2 + 1;
    } while (param_3[uVar2] != '\0');
    if (uVar2 + 1 < 0x300) {
      *(undefined2 *)(param_3 + uVar2) = 0x30;
    }
    uVar1 = param_2[0xe];
LAB_1000bcdc:
    uVar3 = 0;
    do {
      uVar2 = uVar3;
      uVar3 = uVar2 + 1;
    } while (param_3[uVar2] != '\0');
    if (uVar3 < 0x300) {
      param_3[uVar2] = 0x20;
      uVar2 = uVar3;
    }
    param_3[uVar2] = 0;
    uVar3 = 0xffffffffffffffff;
    do {
      uVar2 = uVar3;
      uVar3 = uVar2 + 1;
    } while (param_3[uVar2 + 1] != '\0');
    if (uVar2 + 2 < 0x300) {
      param_3[uVar3] = 0x66;
      bVar11 = uVar3 != 0x2fe;
      uVar3 = uVar2 + 2;
      if (bVar11) {
        uVar3 = uVar2 + 3;
        param_3[uVar2 + 2] = 0x69;
        if (uVar3 < 0x2ff) {
          uVar3 = uVar2 + 4;
          param_3[uVar2 + 3] = 0x72;
          if (uVar3 < 0x2ff) {
            uVar3 = uVar2 + 5;
            param_3[uVar2 + 4] = 0x65;
            if (uVar3 < 0x2ff) {
              uVar3 = uVar2 + 6;
              param_3[uVar2 + 5] = 0x77;
              if (uVar3 < 0x2ff) {
                uVar3 = uVar2 + 7;
                param_3[uVar2 + 6] = 0x69;
                if (uVar3 < 0x2ff) {
                  uVar3 = uVar2 + 8;
                  param_3[uVar2 + 7] = 0x72;
                  if (uVar3 < 0x2ff) {
                    param_3[uVar2 + 8] = 0x65;
                    uVar3 = uVar2 + 9;
                  }
                }
              }
            }
          }
        }
      }
    }
    param_3[uVar3] = 0;
    uVar3 = 0;
    do {
      uVar2 = uVar3;
      uVar3 = uVar2 + 1;
    } while (param_3[uVar2] != '\0');
    if (uVar3 < 0x300) {
      param_3[uVar2] = 0x3d;
      uVar2 = uVar3;
    }
    param_3[uVar2] = 0;
    if (uVar1 != 0) goto LAB_1000bde9;
    uVar3 = 0;
    do {
      uVar2 = uVar3;
      uVar3 = uVar2 + 1;
    } while (param_3[uVar2] != '\0');
    if (uVar2 + 1 < 0x300) {
      *(undefined2 *)(param_3 + uVar2) = 0x30;
    }
    uVar1 = param_2[0xf];
LAB_1000bebc:
    uVar3 = 0;
    do {
      uVar2 = uVar3;
      uVar3 = uVar2 + 1;
    } while (param_3[uVar2] != '\0');
    if (uVar3 < 0x300) {
      param_3[uVar2] = 0x20;
      uVar2 = uVar3;
    }
    param_3[uVar2] = 0;
    uVar3 = 0;
    do {
      uVar2 = uVar3;
      uVar3 = uVar2 + 1;
    } while (param_3[uVar2] != '\0');
    if (uVar3 < 0x300) {
      param_3[uVar2] = 0x73;
      uVar5 = uVar3;
      if (uVar3 != 0x2ff) {
        uVar5 = uVar2 + 2;
        param_3[uVar3] = 0x6d;
        if (uVar5 < 0x2ff) {
          param_3[uVar2 + 2] = 99;
          uVar5 = uVar2 + 3;
        }
      }
    }
    else {
      uVar5 = uVar2;
    }
    param_3[uVar5] = 0;
    uVar3 = 0;
    do {
      uVar2 = uVar3;
      uVar3 = uVar2 + 1;
    } while (param_3[uVar2] != '\0');
    if (uVar3 < 0x300) {
      param_3[uVar2] = 0x3d;
      uVar2 = uVar3;
    }
    param_3[uVar2] = 0;
    if (uVar1 != 0) goto LAB_1000bf69;
    uVar3 = 0;
    do {
      uVar2 = uVar3;
      uVar3 = uVar2 + 1;
    } while (param_3[uVar2] != '\0');
    if (uVar2 + 1 < 0x300) {
      *(undefined2 *)(param_3 + uVar2) = 0x30;
    }
    uVar1 = param_2[0x10];
LAB_1000c03c:
    uVar3 = 0;
    do {
      uVar2 = uVar3;
      uVar3 = uVar2 + 1;
    } while (param_3[uVar2] != '\0');
    if (uVar3 < 0x300) {
      param_3[uVar2] = 0x20;
      uVar2 = uVar3;
    }
    param_3[uVar2] = 0;
    uVar3 = 0xffffffffffffffff;
    do {
      uVar2 = uVar3;
      uVar3 = uVar2 + 1;
    } while (param_3[uVar2 + 1] != '\0');
    if (uVar2 + 2 < 0x300) {
      param_3[uVar3] = 0x67;
      bVar11 = uVar3 != 0x2fe;
      uVar3 = uVar2 + 2;
      if (bVar11) {
        uVar3 = uVar2 + 3;
        param_3[uVar2 + 2] = 0x6d;
        if (uVar3 < 0x2ff) {
          uVar3 = uVar2 + 4;
          param_3[uVar2 + 3] = 0x75;
          if (uVar3 < 0x2ff) {
            param_3[uVar2 + 4] = 0x78;
            uVar3 = uVar2 + 5;
          }
        }
      }
    }
    param_3[uVar3] = 0;
    uVar3 = 0;
    do {
      uVar2 = uVar3;
      uVar3 = uVar2 + 1;
    } while (param_3[uVar2] != '\0');
    if (uVar3 < 0x300) {
      param_3[uVar2] = 0x3d;
      uVar2 = uVar3;
    }
    param_3[uVar2] = 0;
    if (uVar1 != 0) goto LAB_1000c0f9;
    uVar3 = 0;
    do {
      uVar2 = uVar3;
      uVar3 = uVar2 + 1;
    } while (param_3[uVar2] != '\0');
    if (uVar2 + 1 < 0x300) {
      *(undefined2 *)(param_3 + uVar2) = 0x30;
    }
    uVar1 = param_2[0x11];
LAB_1000c1cc:
    uVar3 = 0;
    do {
      uVar2 = uVar3;
      uVar3 = uVar2 + 1;
    } while (param_3[uVar2] != '\0');
    if (uVar3 < 0x300) {
      param_3[uVar2] = 0x20;
      uVar2 = uVar3;
    }
    param_3[uVar2] = 0;
    uVar3 = 0;
    do {
      uVar2 = uVar3;
      uVar3 = uVar2 + 1;
    } while (param_3[uVar2] != '\0');
    if (uVar2 + 1 < 0x300) {
      cVar8 = 'c';
      pcVar4 = str_10012fc8;
      do {
        pcVar4 = pcVar4 + 1;
        param_3[uVar2] = cVar8;
        uVar2 = uVar2 + 1;
        cVar8 = *pcVar4;
        if (cVar8 == '\0') break;
      } while (uVar2 < 0x2ff);
    }
    param_3[uVar2] = 0;
    uVar3 = 0;
    do {
      uVar2 = uVar3;
      uVar3 = uVar2 + 1;
    } while (param_3[uVar2] != '\0');
    if (uVar3 < 0x300) {
      param_3[uVar2] = 0x3d;
      uVar2 = uVar3;
    }
    param_3[uVar2] = 0;
    if (uVar1 == 0) {
      uVar3 = 0;
      do {
        uVar2 = uVar3;
        uVar3 = uVar2 + 1;
      } while (param_3[uVar2] != '\0');
      if (uVar2 + 1 < 0x300) {
        *(undefined2 *)(param_3 + uVar2) = 0x30;
      }
      goto LAB_1000c329;
    }
  }
  uVar3 = 0;
  do {
    abStack_13[uVar3 + 1] = (char)uVar1 + (char)(uVar1 / 10) * -10 | 0x30;
    uVar2 = uVar3 + 1;
    if (8 < uVar3) break;
    bVar11 = 9 < uVar1;
    uVar3 = uVar2;
    uVar1 = uVar1 / 10;
  } while (bVar11);
  do {
    if (param_3 != (undefined1 *)0x0) {
      uVar3 = 0;
      do {
        uVar5 = uVar3;
        uVar3 = uVar5 + 1;
      } while (param_3[uVar5] != '\0');
      if (uVar3 < 0x300) {
        param_3[uVar5] = abStack_13[uVar2];
        param_3[uVar3] = 0;
      }
    }
    uVar2 = uVar2 - 1;
  } while (uVar2 != 0);
LAB_1000c329:
  pcVar4 = &DAT_10013022;
  pcVar7 = &DAT_10013022;
  if (param_2[0x12] == 0) {
    pcVar7 = str_10013027;
  }
  if ((param_3 != (undefined1 *)0x0) && (cVar8 = *pcVar7, cVar8 != '\0')) {
    uVar3 = 0;
    do {
      uVar2 = uVar3;
      uVar3 = uVar2 + 1;
    } while (param_3[uVar2] != '\0');
    if (uVar3 < 0x300) {
      param_3[uVar2] = 0x20;
      uVar2 = uVar3;
    }
    param_3[uVar2] = 0;
    uVar3 = 0;
    do {
      uVar2 = uVar3;
      uVar3 = uVar2 + 1;
    } while (param_3[uVar2] != '\0');
    if (uVar2 + 1 < 0x300) {
      cVar10 = 'i';
      pcVar9 = str_10012fd9;
      do {
        pcVar9 = pcVar9 + 1;
        param_3[uVar2] = cVar10;
        uVar2 = uVar2 + 1;
        cVar10 = *pcVar9;
        if (cVar10 == '\0') break;
      } while (uVar2 < 0x2ff);
    }
    param_3[uVar2] = 0;
    uVar3 = 0;
    do {
      uVar2 = uVar3;
      uVar3 = uVar2 + 1;
    } while (param_3[uVar2] != '\0');
    if (uVar3 < 0x300) {
      param_3[uVar2] = 0x3d;
      uVar2 = uVar3;
    }
    param_3[uVar2] = 0;
    uVar3 = 0;
    do {
      uVar2 = uVar3;
      uVar3 = uVar2 + 1;
    } while (param_3[uVar2] != '\0');
    if (uVar2 + 1 < 0x300) {
      do {
        pcVar7 = pcVar7 + 1;
        param_3[uVar2] = cVar8;
        uVar2 = uVar2 + 1;
        cVar8 = *pcVar7;
        if (cVar8 == '\0') break;
      } while (uVar2 < 0x2ff);
    }
    param_3[uVar2] = 0;
  }
  if (param_2[0x13] == 0) {
    pcVar4 = str_10013027;
  }
  if ((param_3 != (undefined1 *)0x0) && (cVar8 = *pcVar4, cVar8 != '\0')) {
    uVar3 = 0;
    do {
      uVar2 = uVar3;
      uVar3 = uVar2 + 1;
    } while (param_3[uVar2] != '\0');
    if (uVar3 < 0x300) {
      param_3[uVar2] = 0x20;
      uVar2 = uVar3;
    }
    param_3[uVar2] = 0;
    uVar3 = 0;
    do {
      uVar2 = uVar3;
      uVar3 = uVar2 + 1;
    } while (param_3[uVar2] != '\0');
    if (uVar2 + 1 < 0x300) {
      cVar10 = 'f';
      pcVar7 = str_10012fe7;
      do {
        pcVar7 = pcVar7 + 1;
        param_3[uVar2] = cVar10;
        uVar2 = uVar2 + 1;
        cVar10 = *pcVar7;
        if (cVar10 == '\0') break;
      } while (uVar2 < 0x2ff);
    }
    param_3[uVar2] = 0;
    uVar3 = 0;
    do {
      uVar2 = uVar3;
      uVar3 = uVar2 + 1;
    } while (param_3[uVar2] != '\0');
    if (uVar3 < 0x300) {
      param_3[uVar2] = 0x3d;
      uVar2 = uVar3;
    }
    param_3[uVar2] = 0;
    uVar3 = 0;
    do {
      uVar2 = uVar3;
      uVar3 = uVar2 + 1;
    } while (param_3[uVar2] != '\0');
    if (uVar2 + 1 < 0x300) {
      do {
        pcVar4 = pcVar4 + 1;
        param_3[uVar2] = cVar8;
        uVar2 = uVar2 + 1;
        cVar8 = *pcVar4;
        if (cVar8 == '\0') break;
      } while (uVar2 < 0x2ff);
    }
    param_3[uVar2] = 0;
  }
  return;
}

#undef DAT_10012ffb
#undef DAT_10013022
#undef str_10012e87
#undef str_10012f19
#undef str_10012f29
#undef str_10012f33
#undef str_10012f40
#undef str_10012f4a
#undef str_10012f55
#undef str_10012f63
#undef str_10012f70
#undef str_10012f7d
#undef str_10012f87
#undef str_10012fc8
#undef str_10012fd9
#undef str_10012fe7
#undef str_10013008
#undef str_1001301a
#undef str_10013027
#undef abStack_13

#undef DAT_10012f9e
#define DAT_10012f9e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x256U)))
#undef DAT_10012f9f
#define DAT_10012f9f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x257U)))
#undef DAT_10012fa0
#define DAT_10012fa0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x258U)))
#undef DAT_10012fa1
#define DAT_10012fa1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x259U)))
#undef DAT_1001334a
#define DAT_1001334a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x602U)))
#undef DAT_1001338f
#define DAT_1001338f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x647U)))
#undef DAT_10013390
#define DAT_10013390 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x648U)))
#undef DAT_10013391
#define DAT_10013391 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x649U)))
#undef DAT_10013392
#define DAT_10013392 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x64aU)))
#undef DAT_10013393
#define DAT_10013393 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x64bU)))
#undef DAT_10013394
#define DAT_10013394 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x64cU)))
#undef DAT_100133e5
#define DAT_100133e5 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x69dU)))
#undef DAT_100133f0
#define DAT_100133f0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6a8U)))
#undef str_10012e6b
#define str_10012e6b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x123U)))
#undef str_10012fb1
#define str_10012fb1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x269U)))
#undef str_10012fb7
#define str_10012fb7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x26fU)))
#undef str_10012fbf
#define str_10012fbf (*(char (*)[1])(((uintptr_t)pf_module_state + 0x277U)))
#undef str_1001335d
#define str_1001335d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x615U)))
#undef str_1001337e
#define str_1001337e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x636U)))
#undef str_10013387
#define str_10013387 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x63fU)))
#undef str_10013395
#define str_10013395 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x64dU)))
#undef str_1001339c
#define str_1001339c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x654U)))
#undef str_100133a8
#define str_100133a8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x660U)))
#undef str_100133be
#define str_100133be (*(char (*)[1])(((uintptr_t)pf_module_state + 0x676U)))
#undef str_100133fc
#define str_100133fc (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6b4U)))
#undef str_10013432
#define str_10013432 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6eaU)))
#undef str_1001345a
#define str_1001345a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x712U)))
#undef str_1001346a
#define str_1001346a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x722U)))
#undef str_10013494
#define str_10013494 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x74cU)))
#undef str_100134a4
#define str_100134a4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x75cU)))
#undef str_100134b8
#define str_100134b8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x770U)))
#undef str_100134d0
#define str_100134d0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x788U)))
#undef str_100134e8
#define str_100134e8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7a0U)))
#undef str_10013501
#define str_10013501 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7b9U)))
#undef str_10013512
#define str_10013512 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7caU)))
#undef str_10013522
#define str_10013522 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7daU)))
#undef str_10013531
#define str_10013531 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7e9U)))
#undef str_10013547
#define str_10013547 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7ffU)))
#undef str_10013551
#define str_10013551 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x809U)))
#undef str_1001355d
#define str_1001355d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x815U)))
#undef str_10013572
#define str_10013572 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x82aU)))
#undef str_1001357e
#define str_1001357e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x836U)))
#undef str_10013597
#define str_10013597 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x84fU)))
#undef str_1001359f
#define str_1001359f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x857U)))
#undef str_100135a7
#define str_100135a7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x85fU)))
#undef str_100135c1
#define str_100135c1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x879U)))
#undef str_100135cb
#define str_100135cb (*(char (*)[1])(((uintptr_t)pf_module_state + 0x883U)))
#define local_338 (*(undefined2 *)(frame + 664))
#define local_336 (*(undefined1 (*)[637])(frame + 666))
#define local_b8 (*(undefined4 *)(frame + 1304))
#define local_58 (*(uint *)(frame + 1400))
#define local_54 (*(uint *)(frame + 1404))
#define local_50 (*(undefined4 *)(frame + 1408))
#define local_4c (*(undefined4 *)(frame + 1412))
#define local_40 (*(int * *)(frame + 1424))
#define local_38 (*(byte * *)(frame + 1432))
#define local_5c0 (*(int * *)(frame + 16))
#define local_5b8 (*(undefined4 *)(frame + 24))
#define cStack_339 (*(char *)(frame + 663))
#define local_5b4 (*(undefined1 (*)[635])(frame + 28))
#define cStack_b9 (*(char *)(frame + 1303))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c590
 */

void recovered_1000c590(int *param_1,byte *param_2,int *param_3)

{
  unsigned char frame[1520] __attribute__((aligned(16))) = {0};

  ushort uVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  char *pcVar8;
  code *pcVar9;
  byte bVar10;
  char *pcVar11;
  ulong uVar12;
  char *pcVar13;
  ushort uVar14;
  byte *pbVar15;
  byte bVar16;
  byte bVar17;
  int *piVar18;
  char cVar19;
  long lVar20;
  ulong uVar21;
  uint uVar22;
  char cVar23;
  char *pcVar24;
  char cVar25;
  char cVar26;
  uint uVar27;
  bool bVar28;
  bool bVar29;

  if (param_2 == (byte *)0x0) {
    return;
  }
  bVar10 = param_2[8];
  switch((uintptr_t)(bVar10 - 1)) {
  case 0:
    pcVar13 = str_10013387;
    break;
  case 1:
    pcVar13 = str_10012fb7;
    break;
  case 2:
    pcVar13 = str_1001337e;
    break;
  case 3:
    pcVar13 = &DAT_1001338f;
    break;
  default:
switchD_1000c5c9_caseD_4:
    uVar1 = *(ushort *)(param_2 + 4);
    pcVar13 = str_1001339c;
    if (uVar1 < 0x11ab) {
      if ((uVar1 != 0x106b) && (uVar1 != 0x1180)) {
        return;
      }
    }
    else if ((uVar1 != 0x11ab) && (uVar1 != 0x14e4)) {
      return;
    }
    break;
  case 5:
    pcVar13 = str_10013395;
    break;
  case 0xb:
    bVar17 = param_2[9];
    if (bVar17 == 0) {
      pcVar13 = str_10012fbf;
    }
    else if (bVar17 == 3) {
      pcVar13 = &DAT_10012f9e;
    }
    else {
      if (bVar17 != 5) goto switchD_1000c5c9_caseD_4;
      pcVar13 = str_10012fb1;
    }
  }
  if (param_3 == (int *)0x0) {
    return;
  }
  if (0x5f < (uint)param_3[1]) {
    return;
  }
  *param_3 = *param_3 + 1;
  sVar2 = *(short *)(param_2 + 4);
  if (sVar2 == -0x7f7a) {
    param_3[2] = param_3[2] + 1;
    lVar20 = 0xc;
    if (bVar10 != 3) goto LAB_1000c6b2;
    goto LAB_1000c6ec;
  }
  if (sVar2 == 0x10de) {
    param_3[4] = param_3[4] + 1;
    bVar28 = true;
    lVar20 = 0x14;
    if (bVar10 == 3) goto LAB_1000c6ec;
  }
  else {
LAB_1000c6b2:
    bVar28 = false;
  }
  switch((uintptr_t)(bVar10 - 1)) {
  case 0:
    lVar20 = 0x18;
    if (param_2[9] == 6) goto LAB_1000c6ec;
    break;
  case 1:
    lVar20 = 0x34;
    goto LAB_1000c6ec;
  case 3:
    lVar20 = 0x1c;
    if (param_2[9] == 3) goto LAB_1000c6ec;
    break;
  case 0xb:
    bVar10 = param_2[9];
    if (bVar10 == 0) {
      lVar20 = 0x38;
    }
    else if (bVar10 == 5) {
      lVar20 = 0x30;
    }
    else {
      if (bVar10 != 3) break;
      param_3[8] = param_3[8] + 1;
      bVar10 = param_2[10];
      lVar20 = 0x24;
      if (((bVar10 != 0) &&
          ((sVar2 != -0x7f7a ||
           (((uVar1 = *(ushort *)(param_2 + 6), (uVar1 & 0xfff8) != 0x27c8 && (5 < uVar1 - 0x2830))
            && (5 < uVar1 - 0x2934)))))) && (lVar20 = 0x28, bVar10 != 0x10)) {
        if (bVar28) {
          uVar1 = *(ushort *)(param_2 + 6);
          if ((((uVar1 | 2) == 0xaa7) || (lVar20 = 0x2c, bVar10 == 0x20)) ||
             ((uVar1 == 0xaa6 || (uVar1 == 0xaa9)))) goto LAB_1000c6ec;
        }
        else {
          lVar20 = 0x2c;
          if (bVar10 == 0x20) goto LAB_1000c6ec;
        }
        break;
      }
    }
LAB_1000c6ec:
    *(int *)((long)param_3 + lVar20) = *(int *)((long)param_3 + lVar20) + 1;
  }
  PF_PART1(local_338, 0) = '\0';
  uVar6 = 0xffffffffffffffff;
  do {
    uVar7 = uVar6;
    uVar6 = uVar7 + 1;
  } while (local_336[uVar7 - 1] != '\0');
  if (uVar7 + 2 < 0x280) {
    local_336[uVar7 - 1] = 0x72;
    bVar28 = uVar6 != 0x27e;
    uVar6 = uVar7 + 2;
    if (bVar28) {
      uVar6 = uVar7 + 3;
      local_336[uVar7] = 0x6f;
      if (uVar6 < 0x27f) {
        uVar6 = uVar7 + 4;
        local_336[uVar7 + 1] = 0x6c;
        if (uVar6 < 0x27f) {
          uVar6 = uVar7 + 5;
          local_336[uVar7 + 2] = 0x65;
          if (uVar6 < 0x27f) {
            local_336[uVar7 + 3] = 0x3d;
            uVar6 = uVar7 + 6;
          }
        }
      }
    }
  }
  local_5b4[uVar6 + 0x27c] = 0;
  uVar6 = 0;
  do {
    uVar7 = uVar6;
    uVar6 = uVar7 + 1;
  } while (local_5b4[uVar7 + 0x27c] != '\0');
  cVar19 = *pcVar13;
  pcVar8 = pcVar13;
  if (uVar7 + 1 < 0x280 && cVar19 != '\0') {
    do {
      local_5b4[uVar7 + 0x27c] = cVar19;
      uVar7 = uVar7 + 1;
      cVar19 = pcVar8[1];
      if (cVar19 == '\0') break;
      pcVar8 = pcVar8 + 1;
    } while (uVar7 < 0x27f);
  }
  local_5b4[uVar7 + 0x27c] = 0;
  if (sVar2 != 0x10de) {
    if (sVar2 == -0x7f7a) {
      uVar6 = 0;
      do {
        uVar7 = uVar6;
        uVar6 = uVar7 + 1;
      } while (local_5b4[uVar7 + 0x27c] != '\0');
      if (uVar7 + 1 < 0x280) {
        cVar19 = ' ';
        pcVar8 = &DAT_1001334a;
        do {
          local_5b4[uVar7 + 0x27c] = cVar19;
          uVar7 = uVar7 + 1;
          cVar19 = *pcVar8;
          if (cVar19 == '\0') break;
          pcVar8 = pcVar8 + 1;
        } while (uVar7 < 0x27f);
      }
      goto LAB_1000cc34;
    }
    goto switchD_1000c8d8_caseD_aa3;
  }
  uVar6 = 0;
  do {
    uVar7 = uVar6;
    uVar6 = uVar7 + 1;
  } while (local_5b4[uVar7 + 0x27c] != '\0');
  if (uVar7 + 1 < 0x280) {
    cVar19 = ' ';
    pcVar8 = str_100133a8;
    do {
      pcVar8 = pcVar8 + 1;
      local_5b4[uVar7 + 0x27c] = cVar19;
      uVar7 = uVar7 + 1;
      cVar19 = *pcVar8;
      if (cVar19 == '\0') break;
    } while (uVar7 < 0x27f);
  }
  local_5b4[uVar7 + 0x27c] = 0;
  switch((uintptr_t)(*(short *)(param_2 + 6))) {
  case 0xaa2:
    uVar6 = 0;
    do {
      uVar7 = uVar6;
      uVar6 = uVar7 + 1;
    } while (local_5b4[uVar7 + 0x27c] != '\0');
    if (uVar7 + 1 < 0x280) {
      cVar19 = ' ';
      pcVar8 = &DAT_100133f0;
      do {
        local_5b4[uVar7 + 0x27c] = cVar19;
        uVar7 = uVar7 + 1;
        cVar19 = *pcVar8;
        if (cVar19 == '\0') break;
        pcVar8 = pcVar8 + 1;
      } while (uVar7 < 0x27f);
    }
    break;
  case 0xaa3:
  case 0xaa4:
  case 0xaa8:
  case 0xaaa:
  case 0xaab:
  case 0xaac:
  case 0xaad:
  case 0xaae:
  case 0xaaf:
  case 0xab1:
  case 0xab2:
  case 0xab3:
  case 0xab4:
  case 0xab5:
  case 0xab6:
  case 0xab7:
  case 0xab8:
  case 0xaba:
  case 0xabb:
  case 0xabc:
  case 0xabd:
  case 0xabe:
  case 0xabf:
    goto switchD_1000c8d8_caseD_aa3;
  case 0xaa5:
  case 0xaa7:
    uVar6 = 0;
    do {
      uVar7 = uVar6;
      uVar6 = uVar7 + 1;
    } while (local_5b4[uVar7 + 0x27c] != '\0');
    if (uVar7 + 1 < 0x280) {
      cVar19 = ' ';
      pcVar8 = str_100133fc;
      do {
        pcVar8 = pcVar8 + 1;
        local_5b4[uVar7 + 0x27c] = cVar19;
        uVar7 = uVar7 + 1;
        cVar19 = *pcVar8;
        if (cVar19 == '\0') break;
      } while (uVar7 < 0x27f);
    }
    break;
  case 0xaa6:
  case 0xaa9:
    uVar6 = 0;
    do {
      uVar7 = uVar6;
      uVar6 = uVar7 + 1;
    } while (local_5b4[uVar7 + 0x27c] != '\0');
    if (uVar7 + 1 < 0x280) {
      cVar19 = ' ';
      pcVar8 = str_10013432;
      do {
        pcVar8 = pcVar8 + 1;
        local_5b4[uVar7 + 0x27c] = cVar19;
        uVar7 = uVar7 + 1;
        cVar19 = *pcVar8;
        if (cVar19 == '\0') break;
      } while (uVar7 < 0x27f);
    }
    break;
  case 0xab0:
    uVar6 = 0;
    do {
      uVar7 = uVar6;
      uVar6 = uVar7 + 1;
    } while (local_5b4[uVar7 + 0x27c] != '\0');
    if (uVar7 + 1 < 0x280) {
      cVar19 = ' ';
      pcVar8 = str_1001345a;
      do {
        pcVar8 = pcVar8 + 1;
        local_5b4[uVar7 + 0x27c] = cVar19;
        uVar7 = uVar7 + 1;
        cVar19 = *pcVar8;
        if (cVar19 == '\0') break;
      } while (uVar7 < 0x27f);
    }
    break;
  case 0xab9:
    uVar6 = 0;
    do {
      uVar7 = uVar6;
      uVar6 = uVar7 + 1;
    } while (local_5b4[uVar7 + 0x27c] != '\0');
    if (uVar7 + 1 < 0x280) {
      cVar19 = ' ';
      pcVar8 = str_100133be;
      do {
        pcVar8 = pcVar8 + 1;
        local_5b4[uVar7 + 0x27c] = cVar19;
        uVar7 = uVar7 + 1;
        cVar19 = *pcVar8;
        if (cVar19 == '\0') break;
      } while (uVar7 < 0x27f);
    }
    break;
  case 0xac0:
    uVar6 = 0;
    do {
      uVar7 = uVar6;
      uVar6 = uVar7 + 1;
    } while (local_5b4[uVar7 + 0x27c] != '\0');
    if (uVar7 + 1 < 0x280) {
      cVar19 = ' ';
      pcVar8 = &DAT_100133e5;
      do {
        local_5b4[uVar7 + 0x27c] = cVar19;
        uVar7 = uVar7 + 1;
        cVar19 = *pcVar8;
        if (cVar19 == '\0') break;
        pcVar8 = pcVar8 + 1;
      } while (uVar7 < 0x27f);
    }
    break;
  default:
    if (*(short *)(param_2 + 6) == 0x863) {
      uVar6 = 0;
      do {
        uVar7 = uVar6;
        uVar6 = uVar7 + 1;
      } while (local_5b4[uVar7 + 0x27c] != '\0');
      if (uVar7 + 1 < 0x280) {
        cVar19 = ' ';
        pcVar8 = str_1001346a;
        do {
          pcVar8 = pcVar8 + 1;
          local_5b4[uVar7 + 0x27c] = cVar19;
          uVar7 = uVar7 + 1;
          cVar19 = *pcVar8;
          if (cVar19 == '\0') break;
        } while (uVar7 < 0x27f);
      }
      break;
    }
    goto switchD_1000c8d8_caseD_aa3;
  }
LAB_1000cc34:
  local_5b4[uVar7 + 0x27c] = 0;
switchD_1000c8d8_caseD_aa3:
  local_5b8 = 0;
  local_40 = param_1;
  local_38 = param_2;
  local_5c0 = param_3;
  if (((param_1 == (int *)0x0) || (*param_1 != 0x54584b57)) ||
     (((uint)param_1[2] < 100 || (param_1[0x18] == 0)))) {
    uVar6 = 0;
    do {
      uVar7 = uVar6;
      uVar6 = uVar7 + 1;
    } while (local_5b4[uVar7 + 0x27c] != '\0');
    if (uVar7 + 1 < 0x280) {
      cVar19 = ' ';
      pcVar8 = str_100134b8;
      do {
        pcVar8 = pcVar8 + 1;
        local_5b4[uVar7 + 0x27c] = cVar19;
        uVar7 = uVar7 + 1;
        cVar19 = *pcVar8;
        if (cVar19 == '\0') break;
      } while (uVar7 < 0x27f);
    }
LAB_1000cdec:
    pbVar15 = local_38;
    piVar18 = local_40;
    local_5b4[uVar7 + 0x27c] = 0;
    local_b8 = 0;
    local_4c = 0;
    local_50 = 0;
    bVar28 = false;
  }
  else {
    if (((code *)(ulong)(uint)param_1[0x17] == (code *)0x0) ||
       (iVar4 = (*(code *)(ulong)(uint)param_1[0x17])(*param_2,param_2[1],param_2[2],4,2,&local_5b8)
       , iVar4 == 0)) {
      uVar6 = 0;
      do {
        uVar7 = uVar6;
        uVar6 = uVar7 + 1;
      } while (local_5b4[uVar7 + 0x27c] != '\0');
      if (uVar7 + 1 < 0x280) {
        cVar19 = ' ';
        pcVar8 = str_100134d0;
        do {
          pcVar8 = pcVar8 + 1;
          local_5b4[uVar7 + 0x27c] = cVar19;
          uVar7 = uVar7 + 1;
          cVar19 = *pcVar8;
          if (cVar19 == '\0') break;
        } while (uVar7 < 0x27f);
      }
      goto LAB_1000cdec;
    }
    uVar22 = 1;
    if ((*(uint *)(local_38 + 0x14) & 1) == 0) {
      uVar22 = (uint)(*(uint *)(local_38 + 0x14) != 0) * 2;
    }
    uVar27 = uVar22 | 2;
    if (*(uint *)(local_38 + 0x18) == 0) {
      uVar27 = uVar22;
    }
    if ((*(uint *)(local_38 + 0x18) & 1) != 0) {
      uVar27 = uVar22 | 1;
    }
    uVar22 = uVar27 | 2;
    if (*(uint *)(local_38 + 0x1c) == 0) {
      uVar22 = uVar27;
    }
    if ((*(uint *)(local_38 + 0x1c) & 1) != 0) {
      uVar22 = uVar27 | 1;
    }
    uVar27 = uVar22 | 2;
    if (*(uint *)(local_38 + 0x20) == 0) {
      uVar27 = uVar22;
    }
    if ((*(uint *)(local_38 + 0x20) & 1) != 0) {
      uVar27 = uVar22 | 1;
    }
    uVar22 = uVar27 | 2;
    if (*(uint *)(local_38 + 0x24) == 0) {
      uVar22 = uVar27;
    }
    if ((*(uint *)(local_38 + 0x24) & 1) != 0) {
      uVar22 = uVar27 | 1;
    }
    uVar27 = uVar22 | 2;
    if (*(uint *)(local_38 + 0x28) == 0) {
      uVar27 = uVar22;
    }
    if ((*(uint *)(local_38 + 0x28) & 1) != 0) {
      uVar27 = uVar22 | 1;
    }
    cVar19 = *pcVar13;
    if (cVar19 != '\0') {
      local_58 = uVar27;
      pcVar8 = pcVar13 + 7;
      cVar26 = cVar19;
      do {
        cVar23 = cVar26 + ' ';
        if (0x19 < (byte)(cVar26 + 0xbfU)) {
          cVar23 = cVar26;
        }
        cVar26 = pcVar8[-6];
        if (cVar23 == 's') {
          pcVar24 = str_10013387 + 1;
          if (cVar26 != '\0') {
            cVar23 = cVar26 + ' ';
            if (0x19 < (byte)(cVar26 + 0xbfU)) {
              cVar23 = cVar26;
            }
            if (cVar23 != 't') goto LAB_1000d16a;
            cVar23 = pcVar8[-5];
            pcVar24 = str_10013387 + 2;
            if (cVar23 != '\0') {
              cVar25 = cVar23 + ' ';
              if (0x19 < (byte)(cVar23 + 0xbfU)) {
                cVar25 = cVar23;
              }
              if (cVar25 != 'o') goto LAB_1000d16a;
              cVar23 = pcVar8[-4];
              pcVar24 = str_10013387 + 3;
              if (cVar23 != '\0') {
                cVar25 = cVar23 + ' ';
                if (0x19 < (byte)(cVar23 + 0xbfU)) {
                  cVar25 = cVar23;
                }
                if (cVar25 != 'r') goto LAB_1000d16a;
                cVar23 = pcVar8[-3];
                pcVar24 = str_10013387 + 4;
                if (cVar23 != '\0') {
                  cVar25 = cVar23 + ' ';
                  if (0x19 < (byte)(cVar23 + 0xbfU)) {
                    cVar25 = cVar23;
                  }
                  if (cVar25 != 'a') goto LAB_1000d16a;
                  cVar23 = pcVar8[-2];
                  pcVar24 = str_10013387 + 5;
                  if (cVar23 != '\0') {
                    cVar25 = cVar23 + ' ';
                    if (0x19 < (byte)(cVar23 + 0xbfU)) {
                      cVar25 = cVar23;
                    }
                    if (cVar25 != 'g') goto LAB_1000d16a;
                    cVar23 = pcVar8[-1];
                    pcVar24 = str_10013387 + 6;
                    if (cVar23 != '\0') {
                      cVar25 = cVar23 + ' ';
                      if (0x19 < (byte)(cVar23 + 0xbfU)) {
                        cVar25 = cVar23;
                      }
                      if (cVar25 != 'e') goto LAB_1000d16a;
                      pcVar24 = str_10013387 + 7;
                      if (*pcVar8 != '\0') goto LAB_1000f3c3;
                    }
                  }
                }
              }
            }
          }
          if (*pcVar24 == '\0') goto LAB_1000f3c3;
        }
LAB_1000d16a:
        pcVar8 = pcVar8 + 1;
      } while (cVar26 != '\0');
      pcVar8 = pcVar13 + 7;
      cVar26 = cVar19;
      do {
        cVar23 = cVar26 + ' ';
        if (0x19 < (byte)(cVar26 + 0xbfU)) {
          cVar23 = cVar26;
        }
        cVar26 = pcVar8[-6];
        if (cVar23 == 'n') {
          pcVar24 = str_10012fb7 + 1;
          if (cVar26 != '\0') {
            cVar23 = cVar26 + ' ';
            if (0x19 < (byte)(cVar26 + 0xbfU)) {
              cVar23 = cVar26;
            }
            if (cVar23 != 'e') goto LAB_1000f153;
            cVar23 = pcVar8[-5];
            pcVar24 = str_10012fb7 + 2;
            if (cVar23 != '\0') {
              cVar25 = cVar23 + ' ';
              if (0x19 < (byte)(cVar23 + 0xbfU)) {
                cVar25 = cVar23;
              }
              if (cVar25 != 't') goto LAB_1000f153;
              cVar23 = pcVar8[-4];
              pcVar24 = str_10012fb7 + 3;
              if (cVar23 != '\0') {
                cVar25 = cVar23 + ' ';
                if (0x19 < (byte)(cVar23 + 0xbfU)) {
                  cVar25 = cVar23;
                }
                if (cVar25 != 'w') goto LAB_1000f153;
                cVar23 = pcVar8[-3];
                pcVar24 = str_10012fb7 + 4;
                if (cVar23 != '\0') {
                  cVar25 = cVar23 + ' ';
                  if (0x19 < (byte)(cVar23 + 0xbfU)) {
                    cVar25 = cVar23;
                  }
                  if (cVar25 != 'o') goto LAB_1000f153;
                  cVar23 = pcVar8[-2];
                  pcVar24 = str_10012fb7 + 5;
                  if (cVar23 != '\0') {
                    cVar25 = cVar23 + ' ';
                    if (0x19 < (byte)(cVar23 + 0xbfU)) {
                      cVar25 = cVar23;
                    }
                    if (cVar25 != 'r') goto LAB_1000f153;
                    cVar23 = pcVar8[-1];
                    pcVar24 = str_10012fb7 + 6;
                    if (cVar23 != '\0') {
                      cVar25 = cVar23 + ' ';
                      if (0x19 < (byte)(cVar23 + 0xbfU)) {
                        cVar25 = cVar23;
                      }
                      if (cVar25 != 'k') goto LAB_1000f153;
                      pcVar24 = str_10012fb7 + 7;
                      if (*pcVar8 != '\0') goto LAB_1000f3c3;
                    }
                  }
                }
              }
            }
          }
          if (*pcVar24 == '\0') goto LAB_1000f3c3;
        }
LAB_1000f153:
        pcVar8 = pcVar8 + 1;
      } while (cVar26 != '\0');
      pcVar8 = pcVar13 + 3;
      cVar26 = cVar19;
      do {
        cVar23 = cVar26 + ' ';
        if (0x19 < (byte)(cVar26 + 0xbfU)) {
          cVar23 = cVar26;
        }
        cVar26 = pcVar8[-2];
        if (cVar23 == 'u') {
          pcVar24 = &DAT_10012f9f;
          if (cVar26 != '\0') {
            cVar23 = cVar26 + ' ';
            if (0x19 < (byte)(cVar26 + 0xbfU)) {
              cVar23 = cVar26;
            }
            if (cVar23 != 's') goto LAB_1000f337;
            cVar23 = pcVar8[-1];
            pcVar24 = &DAT_10012fa0;
            if (cVar23 != '\0') {
              cVar25 = cVar23 + ' ';
              if (0x19 < (byte)(cVar23 + 0xbfU)) {
                cVar25 = cVar23;
              }
              if (cVar25 != 'b') goto LAB_1000f337;
              pcVar24 = &DAT_10012fa1;
              if (*pcVar8 != '\0') goto LAB_1000f3c3;
            }
          }
          if (*pcVar24 == '\0') goto LAB_1000f3c3;
        }
LAB_1000f337:
        pcVar8 = pcVar8 + 1;
      } while (cVar26 != '\0');
      pcVar8 = pcVar13 + 8;
      cVar26 = cVar19;
      do {
        cVar23 = cVar26 + ' ';
        if (0x19 < (byte)(cVar26 + 0xbfU)) {
          cVar23 = cVar26;
        }
        cVar26 = pcVar8[-7];
        if (cVar23 == 'f') {
          pcVar24 = str_10012fbf + 1;
          if (cVar26 != '\0') {
            cVar23 = cVar26 + ' ';
            if (0x19 < (byte)(cVar26 + 0xbfU)) {
              cVar23 = cVar26;
            }
            if (cVar23 != 'i') goto LAB_1000f408;
            cVar23 = pcVar8[-6];
            pcVar24 = str_10012fbf + 2;
            if (cVar23 != '\0') {
              cVar25 = cVar23 + ' ';
              if (0x19 < (byte)(cVar23 + 0xbfU)) {
                cVar25 = cVar23;
              }
              if (cVar25 != 'r') goto LAB_1000f408;
              cVar23 = pcVar8[-5];
              pcVar24 = str_10012fbf + 3;
              if (cVar23 != '\0') {
                cVar25 = cVar23 + ' ';
                if (0x19 < (byte)(cVar23 + 0xbfU)) {
                  cVar25 = cVar23;
                }
                if (cVar25 != 'e') goto LAB_1000f408;
                cVar23 = pcVar8[-4];
                pcVar24 = str_10012fbf + 4;
                if (cVar23 != '\0') {
                  cVar25 = cVar23 + ' ';
                  if (0x19 < (byte)(cVar23 + 0xbfU)) {
                    cVar25 = cVar23;
                  }
                  if (cVar25 != 'w') goto LAB_1000f408;
                  cVar23 = pcVar8[-3];
                  pcVar24 = str_10012fbf + 5;
                  if (cVar23 != '\0') {
                    cVar25 = cVar23 + ' ';
                    if (0x19 < (byte)(cVar23 + 0xbfU)) {
                      cVar25 = cVar23;
                    }
                    if (cVar25 != 'i') goto LAB_1000f408;
                    cVar23 = pcVar8[-2];
                    pcVar24 = str_10012fbf + 6;
                    if (cVar23 != '\0') {
                      cVar25 = cVar23 + ' ';
                      if (0x19 < (byte)(cVar23 + 0xbfU)) {
                        cVar25 = cVar23;
                      }
                      if (cVar25 != 'r') goto LAB_1000f408;
                      cVar23 = pcVar8[-1];
                      pcVar24 = str_10012fbf + 7;
                      if (cVar23 != '\0') {
                        cVar25 = cVar23 + ' ';
                        if (0x19 < (byte)(cVar23 + 0xbfU)) {
                          cVar25 = cVar23;
                        }
                        if (cVar25 != 'e') goto LAB_1000f408;
                        pcVar24 = str_10012fbf + 8;
                        if (*pcVar8 != '\0') goto LAB_1000f3c3;
                      }
                    }
                  }
                }
              }
            }
          }
          if (*pcVar24 == '\0') goto LAB_1000f3c3;
        }
LAB_1000f408:
        pcVar8 = pcVar8 + 1;
      } while (cVar26 != '\0');
      pcVar8 = pcVar13 + 5;
      cVar26 = cVar19;
      do {
        cVar23 = cVar26 + ' ';
        if (0x19 < (byte)(cVar26 + 0xbfU)) {
          cVar23 = cVar26;
        }
        cVar26 = pcVar8[-4];
        if (cVar23 == 'a') {
          pcVar24 = &DAT_10013390;
          if (cVar26 != '\0') {
            cVar23 = cVar26 + ' ';
            if (0x19 < (byte)(cVar26 + 0xbfU)) {
              cVar23 = cVar26;
            }
            if (cVar23 != 'u') goto LAB_1000f5de;
            cVar23 = pcVar8[-3];
            pcVar24 = &DAT_10013391;
            if (cVar23 != '\0') {
              cVar25 = cVar23 + ' ';
              if (0x19 < (byte)(cVar23 + 0xbfU)) {
                cVar25 = cVar23;
              }
              if (cVar25 != 'd') goto LAB_1000f5de;
              cVar23 = pcVar8[-2];
              pcVar24 = &DAT_10013392;
              if (cVar23 != '\0') {
                cVar25 = cVar23 + ' ';
                if (0x19 < (byte)(cVar23 + 0xbfU)) {
                  cVar25 = cVar23;
                }
                if (cVar25 != 'i') goto LAB_1000f5de;
                cVar23 = pcVar8[-1];
                pcVar24 = &DAT_10013393;
                if (cVar23 != '\0') {
                  cVar25 = cVar23 + ' ';
                  if (0x19 < (byte)(cVar23 + 0xbfU)) {
                    cVar25 = cVar23;
                  }
                  if (cVar25 != 'o') goto LAB_1000f5de;
                  pcVar24 = &DAT_10013394;
                  if (*pcVar8 != '\0') goto LAB_1000f3c3;
                }
              }
            }
          }
          if (*pcVar24 == '\0') goto LAB_1000f3c3;
        }
LAB_1000f5de:
        pcVar8 = pcVar8 + 1;
      } while (cVar26 != '\0');
      pcVar8 = pcVar13 + 8;
      do {
        cVar26 = cVar19 + ' ';
        if (0x19 < (byte)(cVar19 + 0xbfU)) {
          cVar26 = cVar19;
        }
        cVar19 = pcVar8[-7];
        if (cVar26 == 'g') {
          pcVar24 = str_1001337e + 1;
          if (cVar19 != '\0') {
            cVar26 = cVar19 + ' ';
            if (0x19 < (byte)(cVar19 + 0xbfU)) {
              cVar26 = cVar19;
            }
            if (cVar26 != 'r') goto LAB_1000f71a;
            cVar26 = pcVar8[-6];
            pcVar24 = str_1001337e + 2;
            if (cVar26 != '\0') {
              cVar23 = cVar26 + ' ';
              if (0x19 < (byte)(cVar26 + 0xbfU)) {
                cVar23 = cVar26;
              }
              if (cVar23 != 'a') goto LAB_1000f71a;
              cVar26 = pcVar8[-5];
              pcVar24 = str_1001337e + 3;
              if (cVar26 != '\0') {
                cVar23 = cVar26 + ' ';
                if (0x19 < (byte)(cVar26 + 0xbfU)) {
                  cVar23 = cVar26;
                }
                if (cVar23 != 'p') goto LAB_1000f71a;
                cVar26 = pcVar8[-4];
                pcVar24 = str_1001337e + 4;
                if (cVar26 != '\0') {
                  cVar23 = cVar26 + ' ';
                  if (0x19 < (byte)(cVar26 + 0xbfU)) {
                    cVar23 = cVar26;
                  }
                  if (cVar23 != 'h') goto LAB_1000f71a;
                  cVar26 = pcVar8[-3];
                  pcVar24 = str_1001337e + 5;
                  if (cVar26 != '\0') {
                    cVar23 = cVar26 + ' ';
                    if (0x19 < (byte)(cVar26 + 0xbfU)) {
                      cVar23 = cVar26;
                    }
                    if (cVar23 != 'i') goto LAB_1000f71a;
                    cVar26 = pcVar8[-2];
                    pcVar24 = str_1001337e + 6;
                    if (cVar26 != '\0') {
                      cVar23 = cVar26 + ' ';
                      if (0x19 < (byte)(cVar26 + 0xbfU)) {
                        cVar23 = cVar26;
                      }
                      if (cVar23 != 'c') goto LAB_1000f71a;
                      cVar26 = pcVar8[-1];
                      pcVar24 = str_1001337e + 7;
                      if (cVar26 != '\0') {
                        cVar23 = cVar26 + ' ';
                        if (0x19 < (byte)(cVar26 + 0xbfU)) {
                          cVar23 = cVar26;
                        }
                        if (cVar23 != 's') goto LAB_1000f71a;
                        pcVar24 = str_1001337e + 8;
                        if (*pcVar8 != '\0') goto LAB_1000f3c3;
                      }
                    }
                  }
                }
              }
            }
          }
          if (*pcVar24 == '\0') goto LAB_1000f3c3;
        }
LAB_1000f71a:
        pcVar8 = pcVar8 + 1;
      } while (cVar19 != '\0');
    }
LAB_1000f8c5:
    if (local_38[8] == 6) {
      if (local_38[9] != 0) {
        uVar27 = uVar27 | 2;
      }
    }
    uVar22 = local_5b8 | uVar27;
    local_b8 = uVar22;
    if ((((*local_40 != 0x54584b57) || ((uint)local_40[2] < 100)) ||
        ((code *)(ulong)(uint)local_40[0x18] == (code *)0x0)) ||
       (iVar4 = (*(code *)(ulong)(uint)local_40[0x18])(*local_38,local_38[1],local_38[2],4,2,uVar22)
       , iVar4 == 0)) {
      uVar6 = 0;
      do {
        uVar7 = uVar6;
        uVar6 = uVar7 + 1;
      } while (local_5b4[uVar7 + 0x27c] != '\0');
      if (uVar7 + 1 < 0x280) {
        cVar19 = ' ';
        pcVar8 = str_100134e8;
        do {
          pcVar8 = pcVar8 + 1;
          local_5b4[uVar7 + 0x27c] = cVar19;
          uVar7 = uVar7 + 1;
          cVar19 = *pcVar8;
          if (cVar19 == '\0') break;
        } while (uVar7 < 0x27f);
      }
      goto LAB_1000cdec;
    }
    if ((*local_40 == 0x54584b57) && (0x5f < (uint)local_40[2])) {
      if ((code *)(ulong)(uint)local_40[0x17] != (code *)0x0) {
        (*(code *)(ulong)(uint)local_40[0x17])(*local_38,local_38[1],local_38[2],4,2,&local_b8);
        uVar22 = local_b8;
      }
    }
    recovered_10011f80((long)&local_338,str_10013501,local_5b8);
    recovered_10011f80((long)&local_338,str_10013512,uVar22);
    recovered_10011f80((long)&local_338,str_10013522,uVar27);
    bVar28 = (uVar27 & ~uVar22) == 0;
    local_b8 = 0;
    local_4c = 0;
    local_50 = 0;
    pbVar15 = local_38;
    piVar18 = local_40;
  }
  local_4c = 0;
  local_50 = 0;
  local_b8 = 0;
  local_54 = 0;
  bVar10 = pbVar15[8];
  if ((bVar10 == 1) && (pbVar15[9] == 6)) {
    uVar22 = *(uint *)(pbVar15 + 0x28);
    if ((uVar22 & 1) == 0 && uVar22 != 0) {
      local_5b8 = 0;
      if ((uVar22 & 0xfffffff0) == 0 || piVar18 == (int *)0x0) goto LAB_1000ced4;
      if (*piVar18 != 0x54584b57) goto LAB_1000ced4;
      if ((uint)piVar18[2] < 0x68) goto LAB_1000ced4;
      if ((code *)(ulong)(uint)piVar18[0x19] == (code *)0x0) goto LAB_1000ced4;
      iVar4 = (*(code *)(ulong)(uint)piVar18[0x19])(uVar22 & 0xfffffff0,0,0x1000);
      pbVar15 = local_38;
      piVar18 = local_40;
      if (iVar4 == 0) goto LAB_1000ced4;
      uVar6 = 0;
      do {
        uVar7 = uVar6;
        uVar6 = uVar7 + 1;
      } while (local_5b4[uVar7 + 0x27c] != '\0');
      if (uVar6 < 0x280) {
        local_5b4[uVar7 + 0x27c] = 0x20;
        uVar7 = uVar6;
      }
      local_5b4[uVar7 + 0x27c] = 0;
      uVar6 = 0xffffffffffffffff;
      do {
        uVar7 = uVar6;
        uVar6 = uVar7 + 1;
      } while (local_336[uVar7 - 1] != '\0');
      if (uVar7 + 2 < 0x280) {
        local_336[uVar7 - 1] = 0x61;
        bVar29 = uVar6 != 0x27e;
        uVar6 = uVar7 + 2;
        if (bVar29) {
          uVar6 = uVar7 + 3;
          local_336[uVar7] = 0x68;
          if (uVar6 < 0x27f) {
            uVar6 = uVar7 + 4;
            local_336[uVar7 + 1] = 99;
            if (uVar6 < 0x27f) {
              uVar6 = uVar7 + 5;
              local_336[uVar7 + 2] = 0x69;
              if (uVar6 < 0x27f) {
                uVar6 = uVar7 + 6;
                *(undefined1 *)((long)&local_338 + uVar7 + 5) = 0x4d;
                if (uVar6 < 0x27f) {
                  uVar6 = uVar7 + 7;
                  local_336[uVar7 + 4] = 0x6d;
                  if (uVar6 < 0x27f) {
                    uVar6 = uVar7 + 8;
                    local_336[uVar7 + 5] = 0x69;
                    if (uVar6 < 0x27f) {
                      local_336[uVar7 + 6] = 0x6f;
                      uVar6 = uVar7 + 9;
                    }
                  }
                }
              }
            }
          }
        }
      }
      local_5b4[uVar6 + 0x27c] = 0;
      uVar6 = 0;
      do {
        uVar7 = uVar6;
        uVar6 = uVar7 + 1;
      } while (local_5b4[uVar7 + 0x27c] != '\0');
      if (uVar6 < 0x280) {
        local_5b4[uVar7 + 0x27c] = 0x3d;
        uVar7 = uVar6;
      }
      local_5b4[uVar7 + 0x27c] = 0;
      iVar4 = 8;
      do {
        uVar22 = local_5b8 >> ((char)iVar4 * '\x04' - 4U & 0x1f) & 0xf;
        cVar19 = (char)uVar22;
        cVar26 = cVar19 + '7';
        if (uVar22 < 10) {
          cVar26 = cVar19 + '0';
        }
        uVar6 = 0;
        do {
          uVar7 = uVar6;
          uVar6 = uVar7 + 1;
        } while (local_5b4[uVar7 + 0x27c] != '\0');
        if (uVar7 + 1 < 0x280) {
          local_5b4[uVar7 + 0x27c] = cVar26;
          local_336[uVar7 - 1] = 0;
        }
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      if (local_5b8 != 0) {
        if (*piVar18 == 0x54584b57) {
          if (0x6b < (uint)piVar18[2]) {
            if ((code *)(ulong)(uint)piVar18[0x1a] != (code *)0x0) {
              (*(code *)(ulong)(uint)piVar18[0x1a])(local_5b8,4,&local_b8);
              pbVar15 = local_38;
              piVar18 = local_40;
              if ((((local_5b8 != 0) && (*local_40 == 0x54584b57)) && (0x6b < (uint)local_40[2])) &&
                 ((code *)(ulong)(uint)local_40[0x1a] != (code *)0x0)) {
                (*(code *)(ulong)(uint)local_40[0x1a])(local_5b8 + 4,4,&local_4c);
                pbVar15 = local_38;
                piVar18 = local_40;
                if (((local_5b8 != 0) && (*local_40 == 0x54584b57)) &&
                   ((0x6b < (uint)local_40[2] &&
                    ((code *)(ulong)(uint)local_40[0x1a] != (code *)0x0)))) {
                  (*(code *)(ulong)(uint)local_40[0x1a])(local_5b8 + 0xc,4,&local_50);
                  pbVar15 = local_38;
                  piVar18 = local_40;
                  if (((local_5b8 != 0) && (*local_40 == 0x54584b57)) &&
                     ((0x6b < (uint)local_40[2] &&
                      ((code *)(ulong)(uint)local_40[0x1a] != (code *)0x0)))) {
                    (*(code *)(ulong)(uint)local_40[0x1a])(local_5b8 + 0x10,4,&local_54);
                    pbVar15 = local_38;
                    piVar18 = local_40;
                  }
                }
              }
            }
          }
        }
      }
      if (-1 < (int)local_4c) {
        if (local_5b8 != 0) {
          if (*piVar18 == 0x54584b57) {
            iVar4 = local_5b8 + 4;
            uVar22 = piVar18[2];
            if (uVar22 < 0x70) {
joined_r0x10010ac1:
              if (uVar22 < 0x6c) goto LAB_10010b3b;
            }
            else {
              if ((code *)(ulong)(uint)piVar18[0x1b] != (code *)0x0) {
                (*(code *)(ulong)(uint)piVar18[0x1b])(iVar4,4,local_4c | 0x80000000);
                pbVar15 = local_38;
                piVar18 = local_40;
                if ((local_5b8 == 0) || (*local_40 != 0x54584b57)) goto LAB_10010b3b;
                uVar22 = local_40[2];
                iVar4 = local_5b8 + 4;
                goto joined_r0x10010ac1;
              }
              pbVar15 = local_38;
              piVar18 = local_40;
            }
            if ((code *)(ulong)(uint)piVar18[0x1a] != (code *)0x0) {
              (*(code *)(ulong)(uint)piVar18[0x1a])(iVar4,4,&local_4c);
              pbVar15 = local_38;
              piVar18 = local_40;
            }
          }
        }
      }
LAB_10010b3b:
      uVar6 = 0;
      do {
        uVar7 = uVar6;
        uVar6 = uVar7 + 1;
      } while (local_5b4[uVar7 + 0x27c] != '\0');
      if (uVar6 < 0x280) {
        local_5b4[uVar7 + 0x27c] = 0x20;
        uVar7 = uVar6;
      }
      local_5b4[uVar7 + 0x27c] = 0;
      uVar6 = 0xffffffffffffffff;
      do {
        uVar7 = uVar6;
        uVar6 = uVar7 + 1;
      } while (local_336[uVar7 - 1] != '\0');
      if (uVar7 + 2 < 0x280) {
        local_336[uVar7 - 1] = 0x61;
        bVar29 = uVar6 != 0x27e;
        uVar6 = uVar7 + 2;
        if (bVar29) {
          uVar6 = uVar7 + 3;
          local_336[uVar7] = 0x68;
          if (uVar6 < 0x27f) {
            uVar6 = uVar7 + 4;
            local_336[uVar7 + 1] = 99;
            if (uVar6 < 0x27f) {
              uVar6 = uVar7 + 5;
              *(undefined1 *)((long)&local_338 + uVar7 + 4) = 0x69;
              if (uVar6 < 0x27f) {
                uVar6 = uVar7 + 6;
                local_336[uVar7 + 3] = 0x43;
                if (uVar6 < 0x27f) {
                  uVar6 = uVar7 + 7;
                  local_336[uVar7 + 4] = 0x61;
                  if (uVar6 < 0x27f) {
                    local_336[uVar7 + 5] = 0x70;
                    uVar6 = uVar7 + 8;
                  }
                }
              }
            }
          }
        }
      }
      local_5b4[uVar6 + 0x27c] = 0;
      uVar6 = 0;
      do {
        uVar7 = uVar6;
        uVar6 = uVar7 + 1;
      } while (local_5b4[uVar7 + 0x27c] != '\0');
      if (uVar6 < 0x280) {
        local_5b4[uVar7 + 0x27c] = 0x3d;
        uVar7 = uVar6;
      }
      local_5b4[uVar7 + 0x27c] = 0;
      iVar4 = 8;
      do {
        uVar22 = local_b8 >> ((char)iVar4 * '\x04' - 4U & 0x1f) & 0xf;
        cVar19 = (char)uVar22;
        cVar26 = cVar19 + '7';
        if (uVar22 < 10) {
          cVar26 = cVar19 + '0';
        }
        uVar6 = 0;
        do {
          uVar7 = uVar6;
          uVar6 = uVar7 + 1;
        } while (local_5b4[uVar7 + 0x27c] != '\0');
        if (uVar7 + 1 < 0x280) {
          local_5b4[uVar7 + 0x27c] = cVar26;
          local_336[uVar7 - 1] = 0;
        }
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      uVar6 = 0;
      do {
        uVar7 = uVar6;
        uVar6 = uVar7 + 1;
      } while (local_5b4[uVar7 + 0x27c] != '\0');
      if (uVar6 < 0x280) {
        local_5b4[uVar7 + 0x27c] = 0x20;
        uVar7 = uVar6;
      }
      local_5b4[uVar7 + 0x27c] = 0;
      uVar6 = 0xffffffffffffffff;
      do {
        uVar7 = uVar6;
        uVar6 = uVar7 + 1;
      } while (local_336[uVar7 - 1] != '\0');
      if (uVar7 + 2 < 0x280) {
        local_336[uVar7 - 1] = 0x61;
        bVar29 = uVar6 != 0x27e;
        uVar6 = uVar7 + 2;
        if (bVar29) {
          uVar6 = uVar7 + 3;
          local_336[uVar7] = 0x68;
          if (uVar6 < 0x27f) {
            uVar6 = uVar7 + 4;
            local_336[uVar7 + 1] = 99;
            if (uVar6 < 0x27f) {
              uVar6 = uVar7 + 5;
              *(undefined1 *)((long)&local_338 + uVar7 + 4) = 0x69;
              if (uVar6 < 0x27f) {
                uVar6 = uVar7 + 6;
                local_336[uVar7 + 3] = 0x47;
                if (uVar6 < 0x27f) {
                  uVar6 = uVar7 + 7;
                  local_336[uVar7 + 4] = 0x68;
                  if (uVar6 < 0x27f) {
                    local_336[uVar7 + 5] = 99;
                    uVar6 = uVar7 + 8;
                  }
                }
              }
            }
          }
        }
      }
      local_5b4[uVar6 + 0x27c] = 0;
      uVar6 = 0;
      do {
        uVar7 = uVar6;
        uVar6 = uVar7 + 1;
      } while (local_5b4[uVar7 + 0x27c] != '\0');
      if (uVar6 < 0x280) {
        local_5b4[uVar7 + 0x27c] = 0x3d;
        uVar7 = uVar6;
      }
      local_5b4[uVar7 + 0x27c] = 0;
      iVar4 = 8;
      do {
        uVar22 = local_4c >> ((char)iVar4 * '\x04' - 4U & 0x1f) & 0xf;
        cVar19 = (char)uVar22;
        cVar26 = cVar19 + '7';
        if (uVar22 < 10) {
          cVar26 = cVar19 + '0';
        }
        uVar6 = 0;
        do {
          uVar7 = uVar6;
          uVar6 = uVar7 + 1;
        } while (local_5b4[uVar7 + 0x27c] != '\0');
        if (uVar7 + 1 < 0x280) {
          local_5b4[uVar7 + 0x27c] = cVar26;
          local_336[uVar7 - 1] = 0;
        }
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      uVar6 = 0;
      do {
        uVar7 = uVar6;
        uVar6 = uVar7 + 1;
      } while (local_5b4[uVar7 + 0x27c] != '\0');
      if (uVar6 < 0x280) {
        local_5b4[uVar7 + 0x27c] = 0x20;
        uVar7 = uVar6;
      }
      local_5b4[uVar7 + 0x27c] = 0;
      uVar6 = 0;
      do {
        uVar7 = uVar6;
        uVar6 = uVar7 + 1;
      } while (local_5b4[uVar7 + 0x27c] != '\0');
      if (uVar7 + 1 < 0x280) {
        cVar19 = 'a';
        pcVar8 = str_10013547;
        do {
          pcVar8 = pcVar8 + 1;
          local_5b4[uVar7 + 0x27c] = cVar19;
          uVar7 = uVar7 + 1;
          cVar19 = *pcVar8;
          if (cVar19 == '\0') break;
        } while (uVar7 < 0x27f);
      }
      local_5b4[uVar7 + 0x27c] = 0;
      uVar6 = 0;
      do {
        uVar7 = uVar6;
        uVar6 = uVar7 + 1;
      } while (local_5b4[uVar7 + 0x27c] != '\0');
      if (uVar6 < 0x280) {
        local_5b4[uVar7 + 0x27c] = 0x3d;
        uVar7 = uVar6;
      }
      local_5b4[uVar7 + 0x27c] = 0;
      iVar4 = 8;
      do {
        uVar22 = local_50 >> ((char)iVar4 * '\x04' - 4U & 0x1f) & 0xf;
        cVar19 = (char)uVar22;
        cVar26 = cVar19 + '7';
        if (uVar22 < 10) {
          cVar26 = cVar19 + '0';
        }
        uVar6 = 0;
        do {
          uVar7 = uVar6;
          uVar6 = uVar7 + 1;
        } while (local_5b4[uVar7 + 0x27c] != '\0');
        if (uVar7 + 1 < 0x280) {
          local_5b4[uVar7 + 0x27c] = cVar26;
          local_336[uVar7 - 1] = 0;
        }
        uVar22 = local_54;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      uVar6 = 0;
      do {
        uVar7 = uVar6;
        uVar6 = uVar7 + 1;
      } while (local_5b4[uVar7 + 0x27c] != '\0');
      if (uVar6 < 0x280) {
        local_5b4[uVar7 + 0x27c] = 0x20;
        uVar7 = uVar6;
      }
      local_5b4[uVar7 + 0x27c] = 0;
      uVar6 = 0;
      do {
        uVar7 = uVar6;
        uVar6 = uVar7 + 1;
      } while (local_5b4[uVar7 + 0x27c] != '\0');
      if (uVar7 + 1 < 0x280) {
        cVar19 = 'a';
        pcVar8 = str_10013551;
        do {
          pcVar8 = pcVar8 + 1;
          local_5b4[uVar7 + 0x27c] = cVar19;
          uVar7 = uVar7 + 1;
          cVar19 = *pcVar8;
          if (cVar19 == '\0') break;
        } while (uVar7 < 0x27f);
      }
      local_5b4[uVar7 + 0x27c] = 0;
      uVar6 = 0;
      do {
        uVar7 = uVar6;
        uVar6 = uVar7 + 1;
      } while (local_5b4[uVar7 + 0x27c] != '\0');
      if (uVar6 < 0x280) {
        local_5b4[uVar7 + 0x27c] = 0x3d;
        uVar7 = uVar6;
      }
      local_5b4[uVar7 + 0x27c] = 0;
      iVar4 = 8;
      do {
        uVar27 = uVar22 >> ((char)iVar4 * '\x04' - 4U & 0x1f) & 0xf;
        cVar19 = (char)uVar27;
        cVar26 = cVar19 + '7';
        if (uVar27 < 10) {
          cVar26 = cVar19 + '0';
        }
        uVar6 = 0;
        do {
          uVar7 = uVar6;
          uVar6 = uVar7 + 1;
        } while (local_5b4[uVar7 + 0x27c] != '\0');
        if (uVar7 + 1 < 0x280) {
          local_5b4[uVar7 + 0x27c] = cVar26;
          local_336[uVar7 - 1] = 0;
        }
        bVar10 = 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    else {
LAB_1000ced4:
      uVar6 = 0;
      do {
        uVar7 = uVar6;
        uVar6 = uVar7 + 1;
      } while (local_5b4[uVar7 + 0x27c] != '\0');
      if (uVar7 + 1 < 0x280) {
        cVar19 = ' ';
        pcVar8 = str_10013531;
        do {
          pcVar8 = pcVar8 + 1;
          local_5b4[uVar7 + 0x27c] = cVar19;
          uVar7 = uVar7 + 1;
          cVar19 = *pcVar8;
          if (cVar19 == '\0') break;
        } while (uVar7 < 0x27f);
      }
      local_5b4[uVar7 + 0x27c] = 0;
      bVar10 = 0;
    }
    bVar28 = (bool)(bVar28 | bVar10);
    local_b8 = 0;
    local_4c = 0;
    bVar10 = pbVar15[8];
  }
  else {
    local_b8 = 0;
    local_4c = 0;
  }
  local_4c = 0;
  local_b8 = 0;
  local_50 = 0;
  if ((bVar10 == 4) && (pbVar15[9] == 3)) {
    uVar22 = *(uint *)(pbVar15 + 0x14);
    if ((uVar22 & 1) == 0 && uVar22 != 0) {
      local_5b8 = 0;
      if ((uVar22 & 0xfffffff0) == 0 || piVar18 == (int *)0x0) goto LAB_1000d015;
      if (*piVar18 != 0x54584b57) goto LAB_1000d015;
      if ((uint)piVar18[2] < 0x68) goto LAB_1000d015;
      if ((code *)(ulong)(uint)piVar18[0x19] == (code *)0x0) goto LAB_1000d015;
      iVar4 = (*(code *)(ulong)(uint)piVar18[0x19])(uVar22 & 0xfffffff0,0,0x1000);
      pbVar15 = local_38;
      piVar18 = local_40;
      if (iVar4 == 0) goto LAB_1000d015;
      uVar6 = 0;
      do {
        uVar7 = uVar6;
        uVar6 = uVar7 + 1;
      } while (local_5b4[uVar7 + 0x27c] != '\0');
      if (uVar6 < 0x280) {
        local_5b4[uVar7 + 0x27c] = 0x20;
        uVar7 = uVar6;
      }
      local_5b4[uVar7 + 0x27c] = 0;
      uVar6 = 0xffffffffffffffff;
      do {
        uVar7 = uVar6;
        uVar6 = uVar7 + 1;
      } while (local_336[uVar7 - 1] != '\0');
      if (uVar7 + 2 < 0x280) {
        local_336[uVar7 - 1] = 0x68;
        bVar29 = uVar6 != 0x27e;
        uVar6 = uVar7 + 2;
        if (bVar29) {
          uVar6 = uVar7 + 3;
          local_336[uVar7] = 100;
          if (uVar6 < 0x27f) {
            uVar6 = uVar7 + 4;
            local_336[uVar7 + 1] = 0x61;
            if (uVar6 < 0x27f) {
              uVar6 = uVar7 + 5;
              *(undefined1 *)((long)&local_338 + uVar7 + 4) = 0x4d;
              if (uVar6 < 0x27f) {
                uVar6 = uVar7 + 6;
                local_336[uVar7 + 3] = 0x6d;
                if (uVar6 < 0x27f) {
                  uVar6 = uVar7 + 7;
                  local_336[uVar7 + 4] = 0x69;
                  if (uVar6 < 0x27f) {
                    local_336[uVar7 + 5] = 0x6f;
                    uVar6 = uVar7 + 8;
                  }
                }
              }
            }
          }
        }
      }
      local_5b4[uVar6 + 0x27c] = 0;
      uVar6 = 0;
      do {
        uVar7 = uVar6;
        uVar6 = uVar7 + 1;
      } while (local_5b4[uVar7 + 0x27c] != '\0');
      if (uVar6 < 0x280) {
        local_5b4[uVar7 + 0x27c] = 0x3d;
        uVar7 = uVar6;
      }
      local_5b4[uVar7 + 0x27c] = 0;
      iVar4 = 8;
      do {
        uVar22 = local_5b8 >> ((char)iVar4 * '\x04' - 4U & 0x1f) & 0xf;
        cVar19 = (char)uVar22;
        cVar26 = cVar19 + '7';
        if (uVar22 < 10) {
          cVar26 = cVar19 + '0';
        }
        uVar6 = 0;
        do {
          uVar7 = uVar6;
          uVar6 = uVar7 + 1;
        } while (local_5b4[uVar7 + 0x27c] != '\0');
        if (uVar7 + 1 < 0x280) {
          local_5b4[uVar7 + 0x27c] = cVar26;
          local_336[uVar7 - 1] = 0;
        }
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      uVar22 = 0;
      if (local_5b8 != 0) {
        if (((*piVar18 == 0x54584b57) && (0x6b < (uint)piVar18[2])) &&
           ((code *)(ulong)(uint)piVar18[0x1a] != (code *)0x0)) {
          (*(code *)(ulong)(uint)piVar18[0x1a])(local_5b8,4,&local_b8);
          pbVar15 = local_38;
          piVar18 = local_40;
          if (local_5b8 != 0) {
            if (((*local_40 == 0x54584b57) && (0x6b < (uint)local_40[2])) &&
               ((code *)(ulong)(uint)local_40[0x1a] != (code *)0x0)) {
              (*(code *)(ulong)(uint)local_40[0x1a])(local_5b8 + 8,4,&local_4c);
            }
            pbVar15 = local_38;
            piVar18 = local_40;
            uVar22 = local_5b8;
          }
        }
        else {
          uVar22 = local_5b8;
        }
      }
      if ((local_4c & 1) == 0) {
        uVar27 = 0;
        if (uVar22 == 0) goto LAB_1000ff04;
        if (*piVar18 == 0x54584b57) {
          iVar4 = uVar22 + 8;
          uVar3 = piVar18[2];
          if (uVar3 < 0x70) {
joined_r0x10010b0b:
            if (uVar3 < 0x6c) goto LAB_1000ff34;
          }
          else {
            if ((code *)(ulong)(uint)piVar18[0x1b] != (code *)0x0) {
              (*(code *)(ulong)(uint)piVar18[0x1b])(iVar4,4,local_4c | 1);
              pbVar15 = local_38;
              piVar18 = local_40;
              if (local_5b8 == 0) goto LAB_1000ff04;
              if (*local_40 != 0x54584b57) goto LAB_1000ff34;
              uVar3 = local_40[2];
              iVar4 = local_5b8 + 8;
              uVar22 = local_5b8;
              goto joined_r0x10010b0b;
            }
            pbVar15 = local_38;
            piVar18 = local_40;
          }
          uVar27 = uVar22;
          if ((code *)(ulong)(uint)piVar18[0x1a] != (code *)0x0) {
            (*(code *)(ulong)(uint)piVar18[0x1a])(iVar4,4,&local_4c);
            pbVar15 = local_38;
            piVar18 = local_40;
            uVar27 = local_5b8;
          }
          goto LAB_1000ff04;
        }
      }
      else {
        uVar27 = uVar22;
LAB_1000ff04:
        if (*piVar18 == 0x54584b57) {
          if (0x6b < (uint)piVar18[2]) {
            if ((code *)(ulong)(uint)piVar18[0x1a] != (code *)0x0) {
              (*(code *)(ulong)(uint)piVar18[0x1a])(uVar27 + 0xe,2,&local_50);
              pbVar15 = local_38;
              piVar18 = local_40;
            }
          }
        }
      }
LAB_1000ff34:
      uVar6 = 0;
      do {
        uVar7 = uVar6;
        uVar6 = uVar7 + 1;
      } while (local_5b4[uVar7 + 0x27c] != '\0');
      if (uVar6 < 0x280) {
        local_5b4[uVar7 + 0x27c] = 0x20;
        uVar7 = uVar6;
      }
      local_5b4[uVar7 + 0x27c] = 0;
      uVar6 = 0xffffffffffffffff;
      do {
        uVar7 = uVar6;
        uVar6 = uVar7 + 1;
      } while (local_336[uVar7 - 1] != '\0');
      if (uVar7 + 2 < 0x280) {
        local_336[uVar7 - 1] = 0x68;
        bVar29 = uVar6 != 0x27e;
        uVar6 = uVar7 + 2;
        if (bVar29) {
          uVar6 = uVar7 + 3;
          local_336[uVar7] = 100;
          if (uVar6 < 0x27f) {
            uVar6 = uVar7 + 4;
            local_336[uVar7 + 1] = 0x61;
            if (uVar6 < 0x27f) {
              uVar6 = uVar7 + 5;
              *(undefined1 *)((long)&local_338 + uVar7 + 4) = 0x47;
              if (uVar6 < 0x27f) {
                uVar6 = uVar7 + 6;
                local_336[uVar7 + 3] = 99;
                if (uVar6 < 0x27f) {
                  uVar6 = uVar7 + 7;
                  local_336[uVar7 + 4] = 0x61;
                  if (uVar6 < 0x27f) {
                    local_336[uVar7 + 5] = 0x70;
                    uVar6 = uVar7 + 8;
                  }
                }
              }
            }
          }
        }
      }
      local_5b4[uVar6 + 0x27c] = 0;
      uVar6 = 0;
      do {
        uVar7 = uVar6;
        uVar6 = uVar7 + 1;
      } while (local_5b4[uVar7 + 0x27c] != '\0');
      if (uVar6 < 0x280) {
        local_5b4[uVar7 + 0x27c] = 0x3d;
        uVar7 = uVar6;
      }
      local_5b4[uVar7 + 0x27c] = 0;
      iVar4 = 8;
      do {
        uVar22 = local_b8 >> ((char)iVar4 * '\x04' - 4U & 0x1f) & 0xf;
        cVar19 = (char)uVar22;
        cVar26 = cVar19 + '7';
        if (uVar22 < 10) {
          cVar26 = cVar19 + '0';
        }
        uVar6 = 0;
        do {
          uVar7 = uVar6;
          uVar6 = uVar7 + 1;
        } while (local_5b4[uVar7 + 0x27c] != '\0');
        if (uVar7 + 1 < 0x280) {
          local_5b4[uVar7 + 0x27c] = cVar26;
          local_336[uVar7 - 1] = 0;
        }
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      uVar6 = 0;
      do {
        uVar7 = uVar6;
        uVar6 = uVar7 + 1;
      } while (local_5b4[uVar7 + 0x27c] != '\0');
      if (uVar6 < 0x280) {
        local_5b4[uVar7 + 0x27c] = 0x20;
        uVar7 = uVar6;
      }
      local_5b4[uVar7 + 0x27c] = 0;
      uVar6 = 0xffffffffffffffff;
      do {
        uVar7 = uVar6;
        uVar6 = uVar7 + 1;
      } while (local_336[uVar7 - 1] != '\0');
      if (uVar7 + 2 < 0x280) {
        local_336[uVar7 - 1] = 0x68;
        bVar29 = uVar6 != 0x27e;
        uVar6 = uVar7 + 2;
        if (bVar29) {
          uVar6 = uVar7 + 3;
          local_336[uVar7] = 100;
          if (uVar6 < 0x27f) {
            uVar6 = uVar7 + 4;
            local_336[uVar7 + 1] = 0x61;
            if (uVar6 < 0x27f) {
              uVar6 = uVar7 + 5;
              *(undefined1 *)((long)&local_338 + uVar7 + 4) = 0x47;
              if (uVar6 < 0x27f) {
                uVar6 = uVar7 + 6;
                local_336[uVar7 + 3] = 99;
                if (uVar6 < 0x27f) {
                  uVar6 = uVar7 + 7;
                  local_336[uVar7 + 4] = 0x74;
                  if (uVar6 < 0x27f) {
                    local_336[uVar7 + 5] = 0x6c;
                    uVar6 = uVar7 + 8;
                  }
                }
              }
            }
          }
        }
      }
      local_5b4[uVar6 + 0x27c] = 0;
      uVar6 = 0;
      do {
        uVar7 = uVar6;
        uVar6 = uVar7 + 1;
      } while (local_5b4[uVar7 + 0x27c] != '\0');
      if (uVar6 < 0x280) {
        local_5b4[uVar7 + 0x27c] = 0x3d;
        uVar7 = uVar6;
      }
      local_5b4[uVar7 + 0x27c] = 0;
      iVar4 = 8;
      do {
        uVar22 = local_4c >> ((char)iVar4 * '\x04' - 4U & 0x1f) & 0xf;
        cVar19 = (char)uVar22;
        cVar26 = cVar19 + '7';
        if (uVar22 < 10) {
          cVar26 = cVar19 + '0';
        }
        uVar6 = 0;
        do {
          uVar7 = uVar6;
          uVar6 = uVar7 + 1;
        } while (local_5b4[uVar7 + 0x27c] != '\0');
        if (uVar7 + 1 < 0x280) {
          local_5b4[uVar7 + 0x27c] = cVar26;
          local_336[uVar7 - 1] = 0;
        }
        uVar22 = local_50;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      uVar6 = 0;
      do {
        uVar7 = uVar6;
        uVar6 = uVar7 + 1;
      } while (local_5b4[uVar7 + 0x27c] != '\0');
      if (uVar6 < 0x280) {
        local_5b4[uVar7 + 0x27c] = 0x20;
        uVar7 = uVar6;
      }
      local_5b4[uVar7 + 0x27c] = 0;
      uVar6 = 0;
      do {
        uVar7 = uVar6;
        uVar6 = uVar7 + 1;
      } while (local_5b4[uVar7 + 0x27c] != '\0');
      if (uVar7 + 1 < 0x280) {
        cVar19 = 'h';
        pcVar8 = str_10013572;
        do {
          pcVar8 = pcVar8 + 1;
          local_5b4[uVar7 + 0x27c] = cVar19;
          uVar7 = uVar7 + 1;
          cVar19 = *pcVar8;
          if (cVar19 == '\0') break;
        } while (uVar7 < 0x27f);
      }
      local_5b4[uVar7 + 0x27c] = 0;
      uVar6 = 0;
      do {
        uVar7 = uVar6;
        uVar6 = uVar7 + 1;
      } while (local_5b4[uVar7 + 0x27c] != '\0');
      if (uVar6 < 0x280) {
        local_5b4[uVar7 + 0x27c] = 0x3d;
        uVar7 = uVar6;
      }
      local_5b4[uVar7 + 0x27c] = 0;
      iVar4 = 8;
      do {
        uVar27 = uVar22 >> ((char)iVar4 * '\x04' - 4U & 0x1f) & 0xf;
        cVar19 = (char)uVar27;
        cVar26 = cVar19 + '7';
        if (uVar27 < 10) {
          cVar26 = cVar19 + '0';
        }
        uVar6 = 0;
        do {
          uVar7 = uVar6;
          uVar6 = uVar7 + 1;
        } while (local_5b4[uVar7 + 0x27c] != '\0');
        if (uVar7 + 1 < 0x280) {
          local_5b4[uVar7 + 0x27c] = cVar26;
          local_336[uVar7 - 1] = 0;
        }
        bVar10 = 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    else {
LAB_1000d015:
      uVar6 = 0;
      do {
        uVar7 = uVar6;
        uVar6 = uVar7 + 1;
      } while (local_5b4[uVar7 + 0x27c] != '\0');
      if (uVar7 + 1 < 0x280) {
        cVar19 = ' ';
        pcVar8 = str_1001355d;
        do {
          pcVar8 = pcVar8 + 1;
          local_5b4[uVar7 + 0x27c] = cVar19;
          uVar7 = uVar7 + 1;
          cVar19 = *pcVar8;
          if (cVar19 == '\0') break;
        } while (uVar7 < 0x27f);
      }
      local_5b4[uVar7 + 0x27c] = 0;
      bVar10 = 0;
    }
    bVar28 = (bool)(bVar28 | bVar10);
    local_5b8 = 0;
    local_b8 = 0;
    bVar10 = pbVar15[8];
  }
  else {
    local_5b8 = 0;
    local_b8 = 0;
  }
  local_b8 = 0;
  local_5b8 = 0;
  local_4c = 0;
  bVar29 = false;
  if (bVar10 != 0xc) goto LAB_1000d5e9;
  if (pbVar15[9] != 3) goto LAB_1000d5e9;
  if (pbVar15[10] == 0) {
    local_50 = 0;
    local_54 = 0;
    uVar22 = *(uint *)(pbVar15 + 0x24);
    uVar27 = uVar22 & 0xffffffe0;
    if (((byte)uVar22 & uVar27 != 0) != 0) {
LAB_1000d3a6:
      if ((((((piVar18 != (int *)0x0) && (*piVar18 == 0x54584b57)) && (0x57 < (uint)piVar18[2])) &&
           (((code *)(ulong)(uint)piVar18[0x15] != (code *)0x0 &&
            ((*(code *)(ulong)(uint)piVar18[0x15])(uVar27 & 0xffff,2,&local_50),
            *local_40 == 0x54584b57)))) && (0x57 < (uint)local_40[2])) &&
         ((code *)(ulong)(uint)local_40[0x15] != (code *)0x0)) {
        (*(code *)(ulong)(uint)local_40[0x15])((short)(uVar27 | 2),2,&local_54,uVar27 | 2);
      }
      uVar6 = 0;
      do {
        uVar7 = uVar6;
        uVar6 = uVar7 + 1;
      } while (local_5b4[uVar7 + 0x27c] != '\0');
      if (uVar6 < 0x280) {
        local_5b4[uVar7 + 0x27c] = 0x20;
        uVar7 = uVar6;
      }
      local_5b4[uVar7 + 0x27c] = 0;
      uVar6 = 0xffffffffffffffff;
      do {
        uVar7 = uVar6;
        uVar6 = uVar7 + 1;
      } while (local_336[uVar7 - 1] != '\0');
      if (uVar7 + 2 < 0x280) {
        local_336[uVar7 - 1] = 0x75;
        bVar29 = uVar6 != 0x27e;
        uVar6 = uVar7 + 2;
        if (bVar29) {
          uVar6 = uVar7 + 3;
          *(undefined1 *)((long)&local_338 + uVar7 + 2) = 0x73;
          if (uVar6 < 0x27f) {
            uVar6 = uVar7 + 4;
            local_336[uVar7 + 1] = 0x62;
            if (uVar6 < 0x27f) {
              uVar6 = uVar7 + 5;
              local_336[uVar7 + 2] = 0x49;
              if (uVar6 < 0x27f) {
                local_336[uVar7 + 3] = 0x6f;
                uVar6 = uVar7 + 6;
              }
            }
          }
        }
      }
      local_5b4[uVar6 + 0x27c] = 0;
      uVar6 = 0;
      do {
        uVar7 = uVar6;
        uVar6 = uVar7 + 1;
      } while (local_5b4[uVar7 + 0x27c] != '\0');
      if (uVar6 < 0x280) {
        local_5b4[uVar7 + 0x27c] = 0x3d;
        uVar7 = uVar6;
      }
      local_5b4[uVar7 + 0x27c] = 0;
      iVar4 = 8;
      do {
        uVar22 = uVar27 >> ((char)iVar4 * '\x04' - 4U & 0x1f) & 0xf;
        cVar19 = (char)uVar22;
        cVar26 = cVar19 + '7';
        if (uVar22 < 10) {
          cVar26 = cVar19 + '0';
        }
        uVar6 = 0;
        do {
          uVar7 = uVar6;
          uVar6 = uVar7 + 1;
        } while (local_5b4[uVar7 + 0x27c] != '\0');
        if (uVar7 + 1 < 0x280) {
          local_5b4[uVar7 + 0x27c] = cVar26;
          local_336[uVar7 - 1] = 0;
        }
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      recovered_10011f80((long)&local_338,str_10013597,local_50);
      recovered_10011f80((long)&local_338,str_1001359f,local_54);
      bVar29 = true;
      pbVar15 = local_38;
      piVar18 = local_40;
      goto LAB_1000d5e9;
    }
    uVar27 = *(uint *)(pbVar15 + 0x14);
    if ((((uVar27 & 1) == 0) && (uVar27 = *(uint *)(pbVar15 + 0x18), (uVar27 & 1) == 0)) &&
       (uVar27 = *(uint *)(pbVar15 + 0x1c), (uVar27 & 1) == 0)) {
      uVar3 = *(uint *)(pbVar15 + 0x20);
      uVar27 = uVar3;
      if ((uVar3 & 1) == 0) {
        uVar27 = uVar22;
      }
      if ((((uVar3 | uVar22) & 1) != 0) || (uVar27 = *(uint *)(pbVar15 + 0x28), (uVar27 & 1) != 0))
      goto LAB_1000d39c;
    }
    else {
LAB_1000d39c:
      uVar27 = uVar27 & 0xfffffffc;
      if (uVar27 != 0) goto LAB_1000d3a6;
    }
    uVar6 = 0;
    do {
      uVar7 = uVar6;
      uVar6 = uVar7 + 1;
    } while (local_5b4[uVar7 + 0x27c] != '\0');
    if (uVar7 + 1 < 0x280) {
      cVar19 = ' ';
      pcVar8 = str_1001357e;
      do {
        pcVar8 = pcVar8 + 1;
        local_5b4[uVar7 + 0x27c] = cVar19;
        uVar7 = uVar7 + 1;
        cVar19 = *pcVar8;
        if (cVar19 == '\0') break;
      } while (uVar7 < 0x27f);
    }
  }
  else {
    uVar22 = *(uint *)(pbVar15 + 0x14);
    if ((uVar22 & 1) == 0 && uVar22 != 0) {
      local_5b8 = 0;
      if ((uVar22 & 0xfffffff0) != 0 && piVar18 != (int *)0x0) {
        if (*piVar18 == 0x54584b57) {
          if (0x67 < (uint)piVar18[2]) {
            if ((code *)(ulong)(uint)piVar18[0x19] != (code *)0x0) {
              iVar4 = (*(code *)(ulong)(uint)piVar18[0x19])(uVar22 & 0xfffffff0,0,0x1000);
              pbVar15 = local_38;
              piVar18 = local_40;
              if (iVar4 != 0) {
                uVar6 = 0;
                do {
                  uVar7 = uVar6;
                  uVar6 = uVar7 + 1;
                } while (local_5b4[uVar7 + 0x27c] != '\0');
                if (uVar6 < 0x280) {
                  local_5b4[uVar7 + 0x27c] = 0x20;
                  uVar7 = uVar6;
                }
                local_5b4[uVar7 + 0x27c] = 0;
                uVar6 = 0xffffffffffffffff;
                do {
                  uVar7 = uVar6;
                  uVar6 = uVar7 + 1;
                } while (local_336[uVar7 - 1] != '\0');
                if (uVar7 + 2 < 0x280) {
                  local_336[uVar7 - 1] = 0x75;
                  bVar29 = uVar6 != 0x27e;
                  uVar6 = uVar7 + 2;
                  if (bVar29) {
                    uVar6 = uVar7 + 3;
                    local_336[uVar7] = 0x73;
                    if (uVar6 < 0x27f) {
                      uVar6 = uVar7 + 4;
                      local_336[uVar7 + 1] = 0x62;
                      if (uVar6 < 0x27f) {
                        uVar6 = uVar7 + 5;
                        *(undefined1 *)((long)&local_338 + uVar7 + 4) = 0x4d;
                        if (uVar6 < 0x27f) {
                          uVar6 = uVar7 + 6;
                          local_336[uVar7 + 3] = 0x6d;
                          if (uVar6 < 0x27f) {
                            uVar6 = uVar7 + 7;
                            local_336[uVar7 + 4] = 0x69;
                            if (uVar6 < 0x27f) {
                              local_336[uVar7 + 5] = 0x6f;
                              uVar6 = uVar7 + 8;
                            }
                          }
                        }
                      }
                    }
                  }
                }
                local_5b4[uVar6 + 0x27c] = 0;
                uVar6 = 0;
                do {
                  uVar7 = uVar6;
                  uVar6 = uVar7 + 1;
                } while (local_5b4[uVar7 + 0x27c] != '\0');
                if (uVar6 < 0x280) {
                  local_5b4[uVar7 + 0x27c] = 0x3d;
                  uVar7 = uVar6;
                }
                local_5b4[uVar7 + 0x27c] = 0;
                iVar4 = 8;
                do {
                  uVar22 = local_5b8 >> ((char)iVar4 * '\x04' - 4U & 0x1f) & 0xf;
                  cVar19 = (char)uVar22;
                  cVar26 = cVar19 + '7';
                  if (uVar22 < 10) {
                    cVar26 = cVar19 + '0';
                  }
                  uVar6 = 0;
                  do {
                    uVar7 = uVar6;
                    uVar6 = uVar7 + 1;
                  } while (local_5b4[uVar7 + 0x27c] != '\0');
                  if (uVar7 + 1 < 0x280) {
                    local_5b4[uVar7 + 0x27c] = cVar26;
                    local_336[uVar7 - 1] = 0;
                  }
                  iVar4 = iVar4 + -1;
                } while (iVar4 != 0);
                if (local_5b8 != 0) {
                  if (*piVar18 == 0x54584b57) {
                    if (0x6b < (uint)piVar18[2]) {
                      if ((code *)(ulong)(uint)piVar18[0x1a] != (code *)0x0) {
                        (*(code *)(ulong)(uint)piVar18[0x1a])(local_5b8,4,&local_b8);
                        pbVar15 = local_38;
                        piVar18 = local_40;
                        if (((local_5b8 != 0) && (*local_40 == 0x54584b57)) &&
                           ((0x6b < (uint)local_40[2] &&
                            ((code *)(ulong)(uint)local_40[0x1a] != (code *)0x0)))) {
                          (*(code *)(ulong)(uint)local_40[0x1a])(local_5b8 + 4,4,&local_4c);
                          pbVar15 = local_38;
                          piVar18 = local_40;
                        }
                      }
                    }
                  }
                }
                uVar22 = local_b8;
                uVar6 = 0;
                do {
                  uVar7 = uVar6;
                  uVar6 = uVar7 + 1;
                } while (local_5b4[uVar7 + 0x27c] != '\0');
                if (uVar6 < 0x280) {
                  local_5b4[uVar7 + 0x27c] = 0x20;
                  uVar7 = uVar6;
                }
                local_5b4[uVar7 + 0x27c] = 0;
                uVar6 = 0xffffffffffffffff;
                do {
                  uVar7 = uVar6;
                  uVar6 = uVar7 + 1;
                } while (local_336[uVar7 - 1] != '\0');
                if (uVar7 + 2 < 0x280) {
                  local_336[uVar7 - 1] = 0x75;
                  bVar29 = uVar6 != 0x27e;
                  uVar6 = uVar7 + 2;
                  if (bVar29) {
                    uVar6 = uVar7 + 3;
                    local_336[uVar7] = 0x73;
                    if (uVar6 < 0x27f) {
                      uVar6 = uVar7 + 4;
                      local_336[uVar7 + 1] = 0x62;
                      if (uVar6 < 0x27f) {
                        uVar6 = uVar7 + 5;
                        *(undefined1 *)((long)&local_338 + uVar7 + 4) = 0x52;
                        if (uVar6 < 0x27f) {
                          uVar6 = uVar7 + 6;
                          local_336[uVar7 + 3] = 0x65;
                          if (uVar6 < 0x27f) {
                            uVar6 = uVar7 + 7;
                            local_336[uVar7 + 4] = 0x67;
                            if (uVar6 < 0x27f) {
                              local_336[uVar7 + 5] = 0x30;
                              uVar6 = uVar7 + 8;
                            }
                          }
                        }
                      }
                    }
                  }
                }
                local_5b4[uVar6 + 0x27c] = 0;
                uVar6 = 0;
                do {
                  uVar7 = uVar6;
                  uVar6 = uVar7 + 1;
                } while (local_5b4[uVar7 + 0x27c] != '\0');
                if (uVar6 < 0x280) {
                  local_5b4[uVar7 + 0x27c] = 0x3d;
                  uVar7 = uVar6;
                }
                local_5b4[uVar7 + 0x27c] = 0;
                iVar4 = 8;
                do {
                  uVar27 = uVar22 >> ((char)iVar4 * '\x04' - 4U & 0x1f) & 0xf;
                  cVar19 = (char)uVar27;
                  cVar26 = cVar19 + '7';
                  if (uVar27 < 10) {
                    cVar26 = cVar19 + '0';
                  }
                  uVar6 = 0;
                  do {
                    uVar7 = uVar6;
                    uVar6 = uVar7 + 1;
                  } while (local_5b4[uVar7 + 0x27c] != '\0');
                  if (uVar7 + 1 < 0x280) {
                    local_5b4[uVar7 + 0x27c] = cVar26;
                    local_336[uVar7 - 1] = 0;
                  }
                  uVar27 = local_4c;
                  iVar4 = iVar4 + -1;
                } while (iVar4 != 0);
                uVar6 = 0;
                do {
                  uVar7 = uVar6;
                  uVar6 = uVar7 + 1;
                } while (local_5b4[uVar7 + 0x27c] != '\0');
                if (uVar6 < 0x280) {
                  local_5b4[uVar7 + 0x27c] = 0x20;
                  uVar7 = uVar6;
                }
                local_5b4[uVar7 + 0x27c] = 0;
                uVar6 = 0xffffffffffffffff;
                do {
                  uVar7 = uVar6;
                  uVar6 = uVar7 + 1;
                } while (local_336[uVar7 - 1] != '\0');
                if (uVar7 + 2 < 0x280) {
                  local_336[uVar7 - 1] = 0x75;
                  bVar29 = uVar6 != 0x27e;
                  uVar6 = uVar7 + 2;
                  if (bVar29) {
                    uVar6 = uVar7 + 3;
                    local_336[uVar7] = 0x73;
                    if (uVar6 < 0x27f) {
                      uVar6 = uVar7 + 4;
                      local_336[uVar7 + 1] = 0x62;
                      if (uVar6 < 0x27f) {
                        uVar6 = uVar7 + 5;
                        *(undefined1 *)((long)&local_338 + uVar7 + 4) = 0x52;
                        if (uVar6 < 0x27f) {
                          uVar6 = uVar7 + 6;
                          local_336[uVar7 + 3] = 0x65;
                          if (uVar6 < 0x27f) {
                            uVar6 = uVar7 + 7;
                            local_336[uVar7 + 4] = 0x67;
                            if (uVar6 < 0x27f) {
                              local_336[uVar7 + 5] = 0x34;
                              uVar6 = uVar7 + 8;
                            }
                          }
                        }
                      }
                    }
                  }
                }
                local_5b4[uVar6 + 0x27c] = 0;
                uVar6 = 0;
                do {
                  uVar7 = uVar6;
                  uVar6 = uVar7 + 1;
                } while (local_5b4[uVar7 + 0x27c] != '\0');
                if (uVar6 < 0x280) {
                  local_5b4[uVar7 + 0x27c] = 0x3d;
                  uVar7 = uVar6;
                }
                local_5b4[uVar7 + 0x27c] = 0;
                iVar4 = 8;
                do {
                  uVar22 = uVar27 >> ((char)iVar4 * '\x04' - 4U & 0x1f) & 0xf;
                  cVar19 = (char)uVar22;
                  cVar26 = cVar19 + '7';
                  if (uVar22 < 10) {
                    cVar26 = cVar19 + '0';
                  }
                  uVar6 = 0;
                  do {
                    uVar7 = uVar6;
                    uVar6 = uVar7 + 1;
                  } while (local_5b4[uVar7 + 0x27c] != '\0');
                  if (uVar7 + 1 < 0x280) {
                    local_5b4[uVar7 + 0x27c] = cVar26;
                    local_336[uVar7 - 1] = 0;
                  }
                  bVar29 = true;
                  iVar4 = iVar4 + -1;
                } while (iVar4 != 0);
                goto LAB_1000d5e9;
              }
            }
          }
        }
      }
    }
    uVar6 = 0;
    do {
      uVar7 = uVar6;
      uVar6 = uVar7 + 1;
    } while (local_5b4[uVar7 + 0x27c] != '\0');
    if (uVar7 + 1 < 0x280) {
      cVar19 = ' ';
      pcVar8 = str_100135a7;
      do {
        pcVar8 = pcVar8 + 1;
        local_5b4[uVar7 + 0x27c] = cVar19;
        uVar7 = uVar7 + 1;
        cVar19 = *pcVar8;
        if (cVar19 == '\0') break;
      } while (uVar7 < 0x27f);
    }
  }
  local_5b4[uVar7 + 0x27c] = 0;
  bVar29 = false;
LAB_1000d5e9:
  pcVar8 = str_10013494;
  if (!bVar29 && !bVar28) {
    cVar19 = *pcVar13;
    if (cVar19 == '\0') {
      pcVar8 = str_100134a4;
    }
    else {
      pcVar24 = pcVar13 + 8;
      cVar26 = cVar19;
      do {
        cVar23 = cVar26 + ' ';
        if (0x19 < (byte)(cVar26 + 0xbfU)) {
          cVar23 = cVar26;
        }
        cVar26 = pcVar24[-7];
        if (cVar23 == 'g') {
          pcVar11 = str_1001337e + 1;
          if (cVar26 != '\0') {
            cVar23 = cVar26 + ' ';
            if (0x19 < (byte)(cVar26 + 0xbfU)) {
              cVar23 = cVar26;
            }
            if (cVar23 != 'r') goto LAB_1000d649;
            cVar23 = pcVar24[-6];
            pcVar11 = str_1001337e + 2;
            if (cVar23 != '\0') {
              cVar25 = cVar23 + ' ';
              if (0x19 < (byte)(cVar23 + 0xbfU)) {
                cVar25 = cVar23;
              }
              if (cVar25 != 'a') goto LAB_1000d649;
              cVar23 = pcVar24[-5];
              pcVar11 = str_1001337e + 3;
              if (cVar23 != '\0') {
                cVar25 = cVar23 + ' ';
                if (0x19 < (byte)(cVar23 + 0xbfU)) {
                  cVar25 = cVar23;
                }
                if (cVar25 != 'p') goto LAB_1000d649;
                cVar23 = pcVar24[-4];
                pcVar11 = str_1001337e + 4;
                if (cVar23 != '\0') {
                  cVar25 = cVar23 + ' ';
                  if (0x19 < (byte)(cVar23 + 0xbfU)) {
                    cVar25 = cVar23;
                  }
                  if (cVar25 != 'h') goto LAB_1000d649;
                  cVar23 = pcVar24[-3];
                  pcVar11 = str_1001337e + 5;
                  if (cVar23 != '\0') {
                    cVar25 = cVar23 + ' ';
                    if (0x19 < (byte)(cVar23 + 0xbfU)) {
                      cVar25 = cVar23;
                    }
                    if (cVar25 != 'i') goto LAB_1000d649;
                    cVar23 = pcVar24[-2];
                    pcVar11 = str_1001337e + 6;
                    if (cVar23 != '\0') {
                      cVar25 = cVar23 + ' ';
                      if (0x19 < (byte)(cVar23 + 0xbfU)) {
                        cVar25 = cVar23;
                      }
                      if (cVar25 != 'c') goto LAB_1000d649;
                      cVar23 = pcVar24[-1];
                      pcVar11 = str_1001337e + 7;
                      if (cVar23 != '\0') {
                        cVar25 = cVar23 + ' ';
                        if (0x19 < (byte)(cVar23 + 0xbfU)) {
                          cVar25 = cVar23;
                        }
                        if (cVar25 != 's') goto LAB_1000d649;
                        pcVar11 = str_1001337e + 8;
                        if (*pcVar24 != '\0') goto LAB_1000d966;
                      }
                    }
                  }
                }
              }
            }
          }
          if (*pcVar11 == '\0') goto LAB_1000d966;
        }
LAB_1000d649:
        pcVar24 = pcVar24 + 1;
      } while (cVar26 != '\0');
      pcVar24 = pcVar13 + 7;
      cVar26 = cVar19;
      do {
        cVar23 = cVar26 + ' ';
        if (0x19 < (byte)(cVar26 + 0xbfU)) {
          cVar23 = cVar26;
        }
        cVar26 = pcVar24[-6];
        if (cVar23 == 'n') {
          pcVar11 = str_10012fb7 + 1;
          if (cVar26 != '\0') {
            cVar23 = cVar26 + ' ';
            if (0x19 < (byte)(cVar26 + 0xbfU)) {
              cVar23 = cVar26;
            }
            if (cVar23 != 'e') goto LAB_1000d809;
            cVar23 = pcVar24[-5];
            pcVar11 = str_10012fb7 + 2;
            if (cVar23 != '\0') {
              cVar25 = cVar23 + ' ';
              if (0x19 < (byte)(cVar23 + 0xbfU)) {
                cVar25 = cVar23;
              }
              if (cVar25 != 't') goto LAB_1000d809;
              cVar23 = pcVar24[-4];
              pcVar11 = str_10012fb7 + 3;
              if (cVar23 != '\0') {
                cVar25 = cVar23 + ' ';
                if (0x19 < (byte)(cVar23 + 0xbfU)) {
                  cVar25 = cVar23;
                }
                if (cVar25 != 'w') goto LAB_1000d809;
                cVar23 = pcVar24[-3];
                pcVar11 = str_10012fb7 + 4;
                if (cVar23 != '\0') {
                  cVar25 = cVar23 + ' ';
                  if (0x19 < (byte)(cVar23 + 0xbfU)) {
                    cVar25 = cVar23;
                  }
                  if (cVar25 != 'o') goto LAB_1000d809;
                  cVar23 = pcVar24[-2];
                  pcVar11 = str_10012fb7 + 5;
                  if (cVar23 != '\0') {
                    cVar25 = cVar23 + ' ';
                    if (0x19 < (byte)(cVar23 + 0xbfU)) {
                      cVar25 = cVar23;
                    }
                    if (cVar25 != 'r') goto LAB_1000d809;
                    cVar23 = pcVar24[-1];
                    pcVar11 = str_10012fb7 + 6;
                    if (cVar23 != '\0') {
                      cVar25 = cVar23 + ' ';
                      if (0x19 < (byte)(cVar23 + 0xbfU)) {
                        cVar25 = cVar23;
                      }
                      if (cVar25 != 'k') goto LAB_1000d809;
                      pcVar11 = str_10012fb7 + 7;
                      if (*pcVar24 != '\0') goto LAB_1000d966;
                    }
                  }
                }
              }
            }
          }
          if (*pcVar11 == '\0') goto LAB_1000d966;
        }
LAB_1000d809:
        pcVar24 = pcVar24 + 1;
      } while (cVar26 != '\0');
      pcVar24 = pcVar13 + 8;
      cVar26 = cVar19;
      do {
        cVar23 = cVar26 + ' ';
        if (0x19 < (byte)(cVar26 + 0xbfU)) {
          cVar23 = cVar26;
        }
        cVar26 = pcVar24[-7];
        if (cVar23 == 'f') {
          pcVar11 = str_10012fbf + 1;
          if (cVar26 != '\0') {
            cVar23 = cVar26 + ' ';
            if (0x19 < (byte)(cVar26 + 0xbfU)) {
              cVar23 = cVar26;
            }
            if (cVar23 != 'i') goto LAB_1000daf9;
            cVar23 = pcVar24[-6];
            pcVar11 = str_10012fbf + 2;
            if (cVar23 != '\0') {
              cVar25 = cVar23 + ' ';
              if (0x19 < (byte)(cVar23 + 0xbfU)) {
                cVar25 = cVar23;
              }
              if (cVar25 != 'r') goto LAB_1000daf9;
              cVar23 = pcVar24[-5];
              pcVar11 = str_10012fbf + 3;
              if (cVar23 != '\0') {
                cVar25 = cVar23 + ' ';
                if (0x19 < (byte)(cVar23 + 0xbfU)) {
                  cVar25 = cVar23;
                }
                if (cVar25 != 'e') goto LAB_1000daf9;
                cVar23 = pcVar24[-4];
                pcVar11 = str_10012fbf + 4;
                if (cVar23 != '\0') {
                  cVar25 = cVar23 + ' ';
                  if (0x19 < (byte)(cVar23 + 0xbfU)) {
                    cVar25 = cVar23;
                  }
                  if (cVar25 != 'w') goto LAB_1000daf9;
                  cVar23 = pcVar24[-3];
                  pcVar11 = str_10012fbf + 5;
                  if (cVar23 != '\0') {
                    cVar25 = cVar23 + ' ';
                    if (0x19 < (byte)(cVar23 + 0xbfU)) {
                      cVar25 = cVar23;
                    }
                    if (cVar25 != 'i') goto LAB_1000daf9;
                    cVar23 = pcVar24[-2];
                    pcVar11 = str_10012fbf + 6;
                    if (cVar23 != '\0') {
                      cVar25 = cVar23 + ' ';
                      if (0x19 < (byte)(cVar23 + 0xbfU)) {
                        cVar25 = cVar23;
                      }
                      if (cVar25 != 'r') goto LAB_1000daf9;
                      cVar23 = pcVar24[-1];
                      pcVar11 = str_10012fbf + 7;
                      if (cVar23 != '\0') {
                        cVar25 = cVar23 + ' ';
                        if (0x19 < (byte)(cVar23 + 0xbfU)) {
                          cVar25 = cVar23;
                        }
                        if (cVar25 != 'e') goto LAB_1000daf9;
                        pcVar11 = str_10012fbf + 8;
                        if (*pcVar24 != '\0') goto LAB_1000d966;
                      }
                    }
                  }
                }
              }
            }
          }
          if (*pcVar11 == '\0') goto LAB_1000d966;
        }
LAB_1000daf9:
        pcVar24 = pcVar24 + 1;
      } while (cVar26 != '\0');
      pcVar13 = pcVar13 + 8;
      do {
        cVar26 = cVar19 + ' ';
        if (0x19 < (byte)(cVar19 + 0xbfU)) {
          cVar26 = cVar19;
        }
        cVar19 = pcVar13[-7];
        if (cVar26 == 'p') {
          pcVar24 = str_10012e6b + 1;
          if (cVar19 != '\0') {
            cVar26 = cVar19 + ' ';
            if (0x19 < (byte)(cVar19 + 0xbfU)) {
              cVar26 = cVar19;
            }
            if (cVar26 != 'l') goto LAB_1000dcd4;
            cVar26 = pcVar13[-6];
            pcVar24 = str_10012e6b + 2;
            if (cVar26 != '\0') {
              cVar23 = cVar26 + ' ';
              if (0x19 < (byte)(cVar26 + 0xbfU)) {
                cVar23 = cVar26;
              }
              if (cVar23 != 'a') goto LAB_1000dcd4;
              cVar26 = pcVar13[-5];
              pcVar24 = str_10012e6b + 3;
              if (cVar26 != '\0') {
                cVar23 = cVar26 + ' ';
                if (0x19 < (byte)(cVar26 + 0xbfU)) {
                  cVar23 = cVar26;
                }
                if (cVar23 != 't') goto LAB_1000dcd4;
                cVar26 = pcVar13[-4];
                pcVar24 = str_10012e6b + 4;
                if (cVar26 != '\0') {
                  cVar23 = cVar26 + ' ';
                  if (0x19 < (byte)(cVar26 + 0xbfU)) {
                    cVar23 = cVar26;
                  }
                  if (cVar23 != 'f') goto LAB_1000dcd4;
                  cVar26 = pcVar13[-3];
                  pcVar24 = str_10012e6b + 5;
                  if (cVar26 != '\0') {
                    cVar23 = cVar26 + ' ';
                    if (0x19 < (byte)(cVar26 + 0xbfU)) {
                      cVar23 = cVar26;
                    }
                    if (cVar23 != 'o') goto LAB_1000dcd4;
                    cVar26 = pcVar13[-2];
                    pcVar24 = str_10012e6b + 6;
                    if (cVar26 != '\0') {
                      cVar23 = cVar26 + ' ';
                      if (0x19 < (byte)(cVar26 + 0xbfU)) {
                        cVar23 = cVar26;
                      }
                      if (cVar23 != 'r') goto LAB_1000dcd4;
                      cVar26 = pcVar13[-1];
                      pcVar24 = str_10012e6b + 7;
                      if (cVar26 != '\0') {
                        cVar23 = cVar26 + ' ';
                        if (0x19 < (byte)(cVar26 + 0xbfU)) {
                          cVar23 = cVar26;
                        }
                        if (cVar23 != 'm') goto LAB_1000dcd4;
                        pcVar24 = str_10012e6b + 8;
                        if (*pcVar13 != '\0') goto LAB_1000d966;
                      }
                    }
                  }
                }
              }
            }
          }
          if (*pcVar24 == '\0') goto LAB_1000d966;
        }
LAB_1000dcd4:
        pcVar13 = pcVar13 + 1;
      } while (cVar19 != '\0');
LAB_1000de5f:
      pcVar8 = str_100134a4;
    }
  }
LAB_1000de66:
  uVar6 = 0;
  do {
    uVar7 = uVar6;
    uVar6 = uVar7 + 1;
  } while (local_5b4[uVar7 + 0x27c] != '\0');
  cVar19 = *pcVar8;
  if (uVar7 + 1 < 0x280 && cVar19 != '\0') {
    do {
      pcVar8 = pcVar8 + 1;
      local_5b4[uVar7 + 0x27c] = cVar19;
      uVar7 = uVar7 + 1;
      cVar19 = *pcVar8;
      if (cVar19 == '\0') break;
    } while (uVar7 < 0x27f);
  }
  local_5b4[uVar7 + 0x27c] = 0;
  pcVar13 = recovered_10011db0((long)pbVar15);
  pbVar15 = local_38;
  piVar18 = local_40;
  local_b8 = local_b8 & 0xffffff00;
  uVar6 = 0;
  do {
    uVar7 = uVar6;
    uVar6 = uVar7 + 1;
  } while (local_336[uVar7 + 0x27e] != '\0');
  if (uVar7 + 1 < 0x60) {
    cVar19 = '/';
    pcVar8 = str_1001335d;
    do {
      pcVar8 = pcVar8 + 1;
      local_336[uVar7 + 0x27e] = cVar19;
      uVar7 = uVar7 + 1;
      cVar19 = *pcVar8;
      if (cVar19 == '\0') break;
    } while (uVar7 < 0x5f);
  }
  local_336[uVar7 + 0x27e] = 0;
  uVar6 = 0;
  do {
    uVar7 = uVar6;
    uVar6 = uVar7 + 1;
  } while (local_336[uVar7 + 0x27e] != '\0');
  if (uVar6 < 0x60) {
    local_336[uVar7 + 0x27e] = 0x2f;
    uVar7 = uVar6;
  }
  local_336[uVar7 + 0x27e] = 0;
  bVar10 = *pbVar15;
  uVar6 = 0;
  do {
    uVar7 = uVar6;
    uVar6 = uVar7 + 1;
  } while (local_336[uVar7 + 0x27e] != '\0');
  bVar17 = (bVar10 >> 4) + 0x37;
  if (bVar10 < 0xa0) {
    bVar17 = bVar10 >> 4 | 0x30;
  }
  if (uVar7 + 1 < 0x60) {
    local_336[uVar7 + 0x27e] = bVar17;
    local_336[uVar7 + 0x27f] = 0;
  }
  bVar10 = bVar10 & 0xf;
  uVar6 = 0;
  do {
    uVar7 = uVar6;
    uVar6 = uVar7 + 1;
  } while (local_336[uVar7 + 0x27e] != '\0');
  cVar19 = bVar10 + 0x37;
  if (bVar10 < 10) {
    cVar19 = bVar10 + 0x30;
  }
  if (uVar7 + 1 < 0x60) {
    local_336[uVar7 + 0x27e] = cVar19;
    local_336[uVar7 + 0x27f] = 0;
  }
  uVar6 = 0;
  do {
    uVar7 = uVar6;
    uVar6 = uVar7 + 1;
  } while (local_336[uVar7 + 0x27e] != '\0');
  if (uVar6 < 0x60) {
    local_336[uVar7 + 0x27e] = 0x3a;
    uVar7 = uVar6;
  }
  local_336[uVar7 + 0x27e] = 0;
  bVar10 = pbVar15[1];
  uVar6 = 0;
  do {
    uVar7 = uVar6;
    uVar6 = uVar7 + 1;
  } while (local_336[uVar7 + 0x27e] != '\0');
  bVar16 = (bVar10 >> 4) + 0x37;
  if (bVar10 < 0xa0) {
    bVar16 = bVar10 >> 4 | 0x30;
  }
  if (uVar7 + 1 < 0x60) {
    local_336[uVar7 + 0x27e] = bVar16;
    local_336[uVar7 + 0x27f] = 0;
  }
  bVar10 = bVar10 & 0xf;
  uVar6 = 0;
  do {
    uVar7 = uVar6;
    uVar6 = uVar7 + 1;
  } while (local_336[uVar7 + 0x27e] != '\0');
  cVar26 = bVar10 + 0x37;
  if (bVar10 < 10) {
    cVar26 = bVar10 + 0x30;
  }
  if (uVar7 + 1 < 0x60) {
    local_336[uVar7 + 0x27e] = cVar26;
    local_336[uVar7 + 0x27f] = 0;
  }
  uVar6 = 0;
  do {
    uVar7 = uVar6;
    uVar6 = uVar7 + 1;
  } while (local_336[uVar7 + 0x27e] != '\0');
  if (uVar6 < 0x60) {
    local_336[uVar7 + 0x27e] = 0x2e;
    uVar7 = uVar6;
  }
  local_336[uVar7 + 0x27e] = 0;
  bVar10 = pbVar15[2];
  if (bVar10 == 0) {
    uVar6 = 0;
    do {
      uVar7 = uVar6;
      uVar6 = uVar7 + 1;
    } while (local_336[uVar7 + 0x27e] != '\0');
    if (uVar7 + 1 < 0x60) {
      *(undefined2 *)(local_336 + uVar7 + 0x27e) = 0x30;
    }
  }
  else {
    uVar6 = 0xffffffffffffffff;
    uVar7 = (ulong)(uint)bVar10;
    do {
      uVar5 = uVar6;
      uVar22 = (uint)uVar7;
      *(byte *)((long)&local_4c + uVar5 + 1) = (char)uVar7 + (char)(uVar7 / 10) * -10 | 0x30;
      uVar6 = uVar5 + 1;
      if (8 < uVar6) break;
      uVar7 = uVar7 / 10;
    } while (9 < uVar22);
    if ((uVar6 & 1) == 0) {
      uVar7 = 0;
      do {
        uVar12 = uVar7;
        uVar7 = uVar12 + 1;
      } while (local_336[uVar12 + 0x27e] != '\0');
      uVar7 = uVar6;
      if (uVar12 + 1 < 0x60) {
        local_336[uVar12 + 0x27e] = *(undefined1 *)((long)&local_4c + uVar5 + 1);
        local_336[uVar12 + 0x27f] = 0;
      }
    }
    else {
      uVar7 = uVar5 + 2;
    }
    while (uVar6 != 0) {
      uVar6 = 0;
      do {
        uVar5 = uVar6;
        uVar6 = uVar5 + 1;
      } while (local_336[uVar5 + 0x27e] != '\0');
      if (uVar5 + 1 < 0x60) {
        local_336[uVar5 + 0x27e] = *(undefined1 *)((long)&local_50 + uVar7 + 3);
        local_336[uVar5 + 0x27f] = 0;
      }
      lVar20 = uVar7 + 2;
      uVar7 = uVar7 - 2;
      uVar6 = 0;
      do {
        uVar5 = uVar6;
        uVar6 = uVar5 + 1;
      } while (local_336[uVar5 + 0x27e] != '\0');
      uVar6 = uVar7;
      if (uVar5 + 1 < 0x60) {
        local_336[uVar5 + 0x27e] = *(undefined1 *)((long)&local_50 + lVar20);
        local_336[uVar5 + 0x27f] = 0;
      }
    }
  }
  local_5b8 = local_5b8 & 0xffffff00;
  uVar6 = 0xffffffffffffffff;
  do {
    uVar7 = uVar6;
    uVar6 = uVar7 + 1;
  } while (local_5b4[uVar7 - 3] != '\0');
  if (uVar7 + 2 < 0x280) {
    local_5b4[uVar7 - 3] = 0x70;
    bVar28 = uVar6 != 0x27e;
    uVar6 = uVar7 + 2;
    if (bVar28) {
      uVar6 = uVar7 + 3;
      local_5b4[uVar7 - 2] = 99;
      if (uVar6 < 0x27f) {
        uVar6 = uVar7 + 4;
        local_5b4[uVar7 - 1] = 0x69;
        if (uVar6 < 0x27f) {
          local_5b4[uVar7] = 0x3d;
          uVar6 = uVar7 + 5;
        }
      }
    }
  }
  local_5b4[uVar6 - 4] = 0;
  uVar6 = 0;
  do {
    uVar7 = uVar6;
    uVar6 = uVar7 + 1;
  } while (local_5b4[uVar7 - 4] != '\0');
  if (uVar7 + 1 < 0x280) {
    local_5b4[uVar7 - 4] = bVar17;
    local_5b4[uVar7 - 3] = 0;
  }
  uVar6 = 0;
  do {
    uVar7 = uVar6;
    uVar6 = uVar7 + 1;
  } while (local_5b4[uVar7 - 4] != '\0');
  if (uVar7 + 1 < 0x280) {
    local_5b4[uVar7 - 4] = cVar19;
    local_5b4[uVar7 - 3] = 0;
  }
  uVar6 = 0;
  do {
    uVar7 = uVar6;
    uVar6 = uVar7 + 1;
  } while (local_5b4[uVar7 - 4] != '\0');
  if (uVar6 < 0x280) {
    local_5b4[uVar7 - 4] = 0x3a;
    uVar7 = uVar6;
  }
  local_5b4[uVar7 - 4] = 0;
  uVar6 = 0;
  do {
    uVar7 = uVar6;
    uVar6 = uVar7 + 1;
  } while (local_5b4[uVar7 - 4] != '\0');
  if (uVar7 + 1 < 0x280) {
    local_5b4[uVar7 - 4] = bVar16;
    local_5b4[uVar7 - 3] = 0;
  }
  uVar6 = 0;
  do {
    uVar7 = uVar6;
    uVar6 = uVar7 + 1;
  } while (local_5b4[uVar7 - 4] != '\0');
  if (uVar7 + 1 < 0x280) {
    local_5b4[uVar7 - 4] = cVar26;
    local_5b4[uVar7 - 3] = 0;
  }
  uVar6 = 0;
  do {
    uVar7 = uVar6;
    uVar6 = uVar7 + 1;
  } while (local_5b4[uVar7 - 4] != '\0');
  if (uVar6 < 0x280) {
    local_5b4[uVar7 - 4] = 0x2e;
    uVar7 = uVar6;
  }
  local_5b4[uVar7 - 4] = 0;
  if (bVar10 == 0) {
    uVar6 = 0;
    do {
      uVar7 = uVar6;
      uVar6 = uVar7 + 1;
    } while (local_5b4[uVar7 - 4] != '\0');
    if (uVar7 + 1 < 0x280) {
      *(undefined2 *)(local_5b4 + (uVar7 - 4)) = 0x30;
    }
  }
  else {
    uVar6 = 0xffffffffffffffff;
    uVar22 = (uint)bVar10;
    do {
      uVar7 = uVar6;
      *(byte *)((long)&local_4c + uVar7 + 1) = (byte)(uVar22 % 10) | 0x30;
      uVar6 = uVar7 + 1;
      if (8 < uVar6) break;
      bVar28 = 9 < uVar22;
      uVar22 = uVar22 / 10;
    } while (bVar28);
    if ((uVar6 & 1) == 0) {
      uVar5 = 0;
      do {
        uVar12 = uVar5;
        uVar5 = uVar12 + 1;
      } while (local_5b4[uVar12 - 4] != '\0');
      uVar5 = uVar6;
      if (uVar12 + 1 < 0x280) {
        local_5b4[uVar12 - 4] = *(undefined1 *)((long)&local_4c + uVar7 + 1);
        local_5b4[uVar12 - 3] = 0;
      }
    }
    else {
      uVar5 = uVar7 + 2;
    }
    while (uVar6 != 0) {
      uVar6 = 0;
      do {
        uVar7 = uVar6;
        uVar6 = uVar7 + 1;
      } while (local_5b4[uVar7 - 4] != '\0');
      if (uVar7 + 1 < 0x280) {
        local_5b4[uVar7 - 4] = *(undefined1 *)((long)&local_50 + uVar5 + 3);
        local_5b4[uVar7 - 3] = 0;
      }
      lVar20 = uVar5 + 2;
      uVar5 = uVar5 - 2;
      uVar6 = 0;
      do {
        uVar7 = uVar6;
        uVar6 = uVar7 + 1;
      } while (local_5b4[uVar7 - 4] != '\0');
      uVar6 = uVar5;
      if (uVar7 + 1 < 0x280) {
        local_5b4[uVar7 - 4] = *(undefined1 *)((long)&local_50 + lVar20);
        local_5b4[uVar7 - 3] = 0;
      }
    }
  }
  uVar6 = 0xffffffffffffffff;
  do {
    uVar7 = uVar6;
    uVar6 = uVar7 + 1;
  } while (local_5b4[uVar7 - 3] != '\0');
  if (uVar7 + 2 < 0x280) {
    local_5b4[uVar7 - 3] = 0x20;
    bVar28 = uVar6 != 0x27e;
    uVar6 = uVar7 + 2;
    if (bVar28) {
      uVar6 = uVar7 + 3;
      local_5b4[uVar7 - 2] = 0x76;
      if (uVar6 < 0x27f) {
        uVar6 = uVar7 + 4;
        local_5b4[uVar7 - 1] = 0x65;
        if (uVar6 < 0x27f) {
          uVar6 = uVar7 + 5;
          local_5b4[uVar7] = 0x6e;
          if (uVar6 < 0x27f) {
            uVar6 = uVar7 + 6;
            local_5b4[uVar7 + 1] = 100;
            if (uVar6 < 0x27f) {
              uVar6 = uVar7 + 7;
              local_5b4[uVar7 + 2] = 0x6f;
              if (uVar6 < 0x27f) {
                uVar6 = uVar7 + 8;
                local_5b4[uVar7 + 3] = 0x72;
                if (uVar6 < 0x27f) {
                  local_5b4[uVar7 + 4] = 0x3d;
                  uVar6 = uVar7 + 9;
                }
              }
            }
          }
        }
      }
    }
  }
  local_5b4[uVar6 - 4] = 0;
  uVar1 = *(ushort *)(pbVar15 + 4);
  uVar6 = 0;
  do {
    uVar7 = uVar6;
    uVar6 = uVar7 + 1;
  } while (local_5b4[uVar7 - 4] != '\0');
  if (uVar7 + 1 < 0x280) {
    bVar10 = (byte)(uVar1 >> 8);
    bVar17 = (bVar10 >> 4) + 0x37;
    if (uVar1 < 0xa000) {
      bVar17 = bVar10 >> 4 | 0x30;
    }
    local_5b4[uVar7 - 4] = bVar17;
    local_5b4[uVar7 - 3] = 0;
  }
  uVar14 = uVar1 >> 8 & 0xf;
  uVar6 = 0;
  do {
    uVar7 = uVar6;
    uVar6 = uVar7 + 1;
  } while (local_5b4[uVar7 - 4] != '\0');
  if (uVar7 + 1 < 0x280) {
    cVar19 = (char)uVar14;
    cVar26 = cVar19 + '7';
    if (uVar14 < 10) {
      cVar26 = cVar19 + '0';
    }
    local_5b4[uVar7 - 4] = cVar26;
    local_5b4[uVar7 - 3] = 0;
  }
  uVar14 = uVar1 >> 4 & 0xf;
  uVar6 = 0;
  do {
    uVar7 = uVar6;
    uVar6 = uVar7 + 1;
  } while (local_5b4[uVar7 - 4] != '\0');
  if (uVar7 + 1 < 0x280) {
    cVar19 = (char)uVar14;
    cVar26 = cVar19 + '7';
    if (uVar14 < 10) {
      cVar26 = cVar19 + '0';
    }
    local_5b4[uVar7 - 4] = cVar26;
    local_5b4[uVar7 - 3] = 0;
  }
  uVar6 = 0;
  do {
    uVar7 = uVar6;
    uVar6 = uVar7 + 1;
  } while (local_5b4[uVar7 - 4] != '\0');
  if (uVar7 + 1 < 0x280) {
    cVar19 = (char)(uVar1 & 0xf);
    cVar26 = cVar19 + '7';
    if ((uVar1 & 0xf) < 10) {
      cVar26 = cVar19 + '0';
    }
    local_5b4[uVar7 - 4] = cVar26;
    local_5b4[uVar7 - 3] = 0;
  }
  uVar6 = 0xffffffffffffffff;
  do {
    uVar7 = uVar6;
    uVar6 = uVar7 + 1;
  } while (local_5b4[uVar7 - 3] != '\0');
  if (uVar7 + 2 < 0x280) {
    local_5b4[uVar7 - 3] = 0x20;
    bVar28 = uVar6 != 0x27e;
    uVar6 = uVar7 + 2;
    if (bVar28) {
      uVar6 = uVar7 + 3;
      local_5b4[uVar7 - 2] = 100;
      if (uVar6 < 0x27f) {
        uVar6 = uVar7 + 4;
        local_5b4[uVar7 - 1] = 0x65;
        if (uVar6 < 0x27f) {
          uVar6 = uVar7 + 5;
          local_5b4[uVar7] = 0x76;
          if (uVar6 < 0x27f) {
            uVar6 = uVar7 + 6;
            local_5b4[uVar7 + 1] = 0x69;
            if (uVar6 < 0x27f) {
              uVar6 = uVar7 + 7;
              local_5b4[uVar7 + 2] = 99;
              if (uVar6 < 0x27f) {
                uVar6 = uVar7 + 8;
                local_5b4[uVar7 + 3] = 0x65;
                if (uVar6 < 0x27f) {
                  local_5b4[uVar7 + 4] = 0x3d;
                  uVar6 = uVar7 + 9;
                }
              }
            }
          }
        }
      }
    }
  }
  local_5b4[uVar6 - 4] = 0;
  uVar1 = *(ushort *)(pbVar15 + 6);
  uVar6 = 0;
  do {
    uVar7 = uVar6;
    uVar6 = uVar7 + 1;
  } while (local_5b4[uVar7 - 4] != '\0');
  if (uVar7 + 1 < 0x280) {
    bVar10 = (byte)(uVar1 >> 8);
    bVar17 = (bVar10 >> 4) + 0x37;
    if (uVar1 < 0xa000) {
      bVar17 = bVar10 >> 4 | 0x30;
    }
    local_5b4[uVar7 - 4] = bVar17;
    local_5b4[uVar7 - 3] = 0;
  }
  uVar14 = uVar1 >> 8 & 0xf;
  uVar6 = 0;
  do {
    uVar7 = uVar6;
    uVar6 = uVar7 + 1;
  } while (local_5b4[uVar7 - 4] != '\0');
  if (uVar7 + 1 < 0x280) {
    cVar19 = (char)uVar14;
    cVar26 = cVar19 + '7';
    if (uVar14 < 10) {
      cVar26 = cVar19 + '0';
    }
    local_5b4[uVar7 - 4] = cVar26;
    local_5b4[uVar7 - 3] = 0;
  }
  uVar14 = uVar1 >> 4 & 0xf;
  uVar6 = 0;
  do {
    uVar7 = uVar6;
    uVar6 = uVar7 + 1;
  } while (local_5b4[uVar7 - 4] != '\0');
  if (uVar7 + 1 < 0x280) {
    cVar19 = (char)uVar14;
    cVar26 = cVar19 + '7';
    if (uVar14 < 10) {
      cVar26 = cVar19 + '0';
    }
    local_5b4[uVar7 - 4] = cVar26;
    local_5b4[uVar7 - 3] = 0;
  }
  uVar6 = 0;
  do {
    uVar7 = uVar6;
    uVar6 = uVar7 + 1;
  } while (local_5b4[uVar7 - 4] != '\0');
  if (uVar7 + 1 < 0x280) {
    cVar19 = (char)(uVar1 & 0xf);
    cVar26 = cVar19 + '7';
    if ((uVar1 & 0xf) < 10) {
      cVar26 = cVar19 + '0';
    }
    local_5b4[uVar7 - 4] = cVar26;
    local_5b4[uVar7 - 3] = 0;
  }
  uVar6 = 0xffffffffffffffff;
  do {
    uVar7 = uVar6;
    uVar6 = uVar7 + 1;
  } while (local_5b4[uVar7 - 3] != '\0');
  if (uVar7 + 2 < 0x280) {
    local_5b4[uVar7 - 3] = 0x20;
    bVar28 = uVar6 != 0x27e;
    uVar6 = uVar7 + 2;
    if (bVar28) {
      uVar6 = uVar7 + 3;
      local_5b4[uVar7 - 2] = 99;
      if (uVar6 < 0x27f) {
        uVar6 = uVar7 + 4;
        local_5b4[uVar7 - 1] = 0x6c;
        if (uVar6 < 0x27f) {
          uVar6 = uVar7 + 5;
          local_5b4[uVar7] = 0x61;
          if (uVar6 < 0x27f) {
            uVar6 = uVar7 + 6;
            local_5b4[uVar7 + 1] = 0x73;
            if (uVar6 < 0x27f) {
              uVar6 = uVar7 + 7;
              local_5b4[uVar7 + 2] = 0x73;
              if (uVar6 < 0x27f) {
                local_5b4[uVar7 + 3] = 0x3d;
                uVar6 = uVar7 + 8;
              }
            }
          }
        }
      }
    }
  }
  local_5b4[uVar6 - 4] = 0;
  bVar10 = pbVar15[8];
  uVar6 = 0;
  do {
    uVar7 = uVar6;
    uVar6 = uVar7 + 1;
  } while (local_5b4[uVar7 - 4] != '\0');
  if (uVar7 + 1 < 0x280) {
    bVar17 = (bVar10 >> 4) + 0x37;
    if (bVar10 < 0xa0) {
      bVar17 = bVar10 >> 4 | 0x30;
    }
    local_5b4[uVar7 - 4] = bVar17;
    local_5b4[uVar7 - 3] = 0;
  }
  bVar10 = bVar10 & 0xf;
  uVar6 = 0;
  do {
    uVar7 = uVar6;
    uVar6 = uVar7 + 1;
  } while (local_5b4[uVar7 - 4] != '\0');
  if (uVar7 + 1 < 0x280) {
    cVar19 = bVar10 + 0x37;
    if (bVar10 < 10) {
      cVar19 = bVar10 + 0x30;
    }
    local_5b4[uVar7 - 4] = cVar19;
    local_5b4[uVar7 - 3] = 0;
  }
  uVar6 = 0;
  do {
    uVar7 = uVar6;
    uVar6 = uVar7 + 1;
  } while (local_5b4[uVar7 - 4] != '\0');
  if (uVar6 < 0x280) {
    local_5b4[uVar7 - 4] = 0x2e;
    uVar7 = uVar6;
  }
  local_5b4[uVar7 - 4] = 0;
  bVar10 = pbVar15[9];
  uVar6 = 0;
  do {
    uVar7 = uVar6;
    uVar6 = uVar7 + 1;
  } while (local_5b4[uVar7 - 4] != '\0');
  if (uVar7 + 1 < 0x280) {
    bVar17 = (bVar10 >> 4) + 0x37;
    if (bVar10 < 0xa0) {
      bVar17 = bVar10 >> 4 | 0x30;
    }
    local_5b4[uVar7 - 4] = bVar17;
    local_5b4[uVar7 - 3] = 0;
  }
  bVar10 = bVar10 & 0xf;
  uVar6 = 0;
  do {
    uVar7 = uVar6;
    uVar6 = uVar7 + 1;
  } while (local_5b4[uVar7 - 4] != '\0');
  if (uVar7 + 1 < 0x280) {
    cVar19 = bVar10 + 0x37;
    if (bVar10 < 10) {
      cVar19 = bVar10 + 0x30;
    }
    local_5b4[uVar7 - 4] = cVar19;
    local_5b4[uVar7 - 3] = 0;
  }
  uVar6 = 0;
  do {
    uVar7 = uVar6;
    uVar6 = uVar7 + 1;
  } while (local_5b4[uVar7 - 4] != '\0');
  if (uVar6 < 0x280) {
    local_5b4[uVar7 - 4] = 0x2e;
    uVar7 = uVar6;
  }
  local_5b4[uVar7 - 4] = 0;
  bVar10 = pbVar15[10];
  uVar6 = 0;
  do {
    uVar7 = uVar6;
    uVar6 = uVar7 + 1;
  } while (local_5b4[uVar7 - 4] != '\0');
  if (uVar7 + 1 < 0x280) {
    bVar17 = (bVar10 >> 4) + 0x37;
    if (bVar10 < 0xa0) {
      bVar17 = bVar10 >> 4 | 0x30;
    }
    local_5b4[uVar7 - 4] = bVar17;
    local_5b4[uVar7 - 3] = 0;
  }
  bVar10 = bVar10 & 0xf;
  uVar6 = 0;
  do {
    uVar7 = uVar6;
    uVar6 = uVar7 + 1;
  } while (local_5b4[uVar7 - 4] != '\0');
  if (uVar7 + 1 < 0x280) {
    cVar19 = bVar10 + 0x37;
    if (bVar10 < 10) {
      cVar19 = bVar10 + 0x30;
    }
    local_5b4[uVar7 - 4] = cVar19;
    local_5b4[uVar7 - 3] = 0;
  }
  uVar6 = 0;
  do {
    uVar7 = uVar6;
    uVar6 = uVar7 + 1;
  } while (local_5b4[uVar7 - 4] != '\0');
  if (uVar7 + 1 < 0x280) {
    cVar19 = ' ';
    pcVar8 = str_100135cb;
    do {
      pcVar8 = pcVar8 + 1;
      local_5b4[uVar7 - 4] = cVar19;
      uVar7 = uVar7 + 1;
      cVar19 = *pcVar8;
      if (cVar19 == '\0') break;
    } while (uVar7 < 0x27f);
  }
  local_5b4[uVar7 - 4] = 0;
  bVar10 = pbVar15[0xb];
  uVar6 = 0;
  do {
    uVar7 = uVar6;
    uVar6 = uVar7 + 1;
  } while (local_5b4[uVar7 - 4] != '\0');
  if (uVar7 + 1 < 0x280) {
    bVar17 = (bVar10 >> 4) + 0x37;
    if (bVar10 < 0xa0) {
      bVar17 = bVar10 >> 4 | 0x30;
    }
    local_5b4[uVar7 - 4] = bVar17;
    local_5b4[uVar7 - 3] = 0;
  }
  bVar10 = bVar10 & 0xf;
  uVar6 = 0;
  do {
    uVar7 = uVar6;
    uVar6 = uVar7 + 1;
  } while (local_5b4[uVar7 - 4] != '\0');
  if (uVar7 + 1 < 0x280) {
    cVar19 = bVar10 + 0x37;
    if (bVar10 < 10) {
      cVar19 = bVar10 + 0x30;
    }
    local_5b4[uVar7 - 4] = cVar19;
    local_5b4[uVar7 - 3] = 0;
  }
  uVar6 = 0;
  do {
    uVar22 = *(uint *)(pbVar15 + uVar6 * 4 + 0x14);
    if (uVar22 != 0) {
      uVar7 = 0xffffffffffffffff;
      do {
        uVar5 = uVar7;
        uVar7 = uVar5 + 1;
      } while (local_5b4[uVar5 - 3] != '\0');
      if (uVar5 + 2 < 0x280) {
        local_5b4[uVar5 - 3] = 0x20;
        bVar28 = uVar7 != 0x27e;
        uVar7 = uVar5 + 2;
        if (bVar28) {
          uVar7 = uVar5 + 3;
          local_5b4[uVar5 - 2] = 0x62;
          if (uVar7 < 0x27f) {
            uVar7 = uVar5 + 4;
            local_5b4[uVar5 - 1] = 0x61;
            if (uVar7 < 0x27f) {
              local_5b4[uVar5] = 0x72;
              uVar7 = uVar5 + 5;
            }
          }
        }
      }
      local_5b4[uVar7 - 4] = 0;
      if (uVar6 == 0) {
        uVar7 = 0;
        do {
          uVar5 = uVar7;
          uVar7 = uVar5 + 1;
        } while (local_5b4[uVar5 - 4] != '\0');
        if (uVar5 + 1 < 0x280) {
          *(undefined2 *)(local_5b4 + (uVar5 - 4)) = 0x30;
        }
      }
      else {
        uVar5 = 0xffffffffffffffff;
        uVar7 = uVar6;
        do {
          uVar12 = uVar5;
          uVar5 = uVar7 & 0xffffffff;
          uVar27 = (uint)uVar7;
          uVar7 = uVar5 / 10;
          *(byte *)((long)&local_4c + uVar12 + 1) = (char)uVar5 + (char)uVar7 * -10 | 0x30;
          uVar5 = uVar12 + 1;
          if (8 < uVar5) break;
        } while (9 < uVar27);
        if ((uVar5 & 1) == 0) {
          uVar7 = 0;
          do {
            uVar21 = uVar7;
            uVar7 = uVar21 + 1;
          } while (local_5b4[uVar21 - 4] != '\0');
          uVar7 = uVar5;
          if (uVar21 + 1 < 0x280) {
            local_5b4[uVar21 - 4] = *(undefined1 *)((long)&local_4c + uVar12 + 1);
            local_5b4[uVar21 - 3] = 0;
          }
        }
        else {
          uVar7 = uVar12 + 2;
        }
        while (uVar5 != 0) {
          uVar5 = 0;
          do {
            uVar12 = uVar5;
            uVar5 = uVar12 + 1;
          } while (local_5b4[uVar12 - 4] != '\0');
          if (uVar12 + 1 < 0x280) {
            local_5b4[uVar12 - 4] = *(undefined1 *)((long)&local_50 + uVar7 + 3);
            local_5b4[uVar12 - 3] = 0;
          }
          lVar20 = uVar7 + 2;
          uVar7 = uVar7 - 2;
          uVar5 = 0;
          do {
            uVar12 = uVar5;
            uVar5 = uVar12 + 1;
          } while (local_5b4[uVar12 - 4] != '\0');
          uVar5 = uVar7;
          if (uVar12 + 1 < 0x280) {
            local_5b4[uVar12 - 4] = *(undefined1 *)((long)&local_50 + lVar20);
            local_5b4[uVar12 - 3] = 0;
          }
        }
      }
      uVar7 = 0;
      do {
        uVar5 = uVar7;
        uVar7 = uVar5 + 1;
      } while (local_5b4[uVar5 - 4] != '\0');
      if (uVar7 < 0x280) {
        local_5b4[uVar5 - 4] = 0x3d;
        uVar5 = uVar7;
      }
      local_5b4[uVar5 - 4] = 0;
      iVar4 = 8;
      do {
        uVar27 = uVar22 >> ((char)iVar4 * '\x04' - 4U & 0x1f) & 0xf;
        cVar19 = (char)uVar27;
        uVar7 = 0;
        do {
          uVar5 = uVar7;
          uVar7 = uVar5 + 1;
        } while (local_5b4[uVar5 - 4] != '\0');
        if (uVar5 + 1 < 0x280) {
          cVar26 = cVar19 + '7';
          if (uVar27 < 10) {
            cVar26 = cVar19 + '0';
          }
          local_5b4[uVar5 - 4] = cVar26;
          local_5b4[uVar5 - 3] = 0;
        }
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    cVar19 = (char)local_338;
    uVar6 = uVar6 + 1;
  } while (uVar6 != 6);
  if ((char)local_338 != '\0') {
    uVar6 = 0;
    do {
      uVar7 = uVar6;
      uVar6 = uVar7 + 1;
    } while (local_5b4[uVar7 - 4] != '\0');
    if (uVar6 < 0x280) {
      local_5b4[uVar7 - 4] = 0x20;
      uVar7 = uVar6;
    }
    local_5b4[uVar7 - 4] = 0;
    uVar6 = 0;
    do {
      uVar7 = uVar6;
      uVar6 = uVar7 + 1;
    } while (local_5b4[uVar7 - 4] != '\0');
    if (uVar7 + 1 < 0x280) {
      pcVar8 = (char *)((long)&local_338 + 1);
      do {
        local_5b4[uVar7 - 4] = cVar19;
        uVar7 = uVar7 + 1;
        cVar19 = *pcVar8;
        if (cVar19 == '\0') break;
        pcVar8 = pcVar8 + 1;
      } while (uVar7 < 0x27f);
    }
    local_5b4[uVar7 - 4] = 0;
  }
  if (((piVar18 != (int *)0x0) && (pcVar9 = (code *)(ulong)(uint)piVar18[3], pcVar9 != (code *)0x0))
     && (iVar4 = (*pcVar9)(&local_b8,pcVar13,&local_5b8), iVar4 != 0)) {
    local_5c0[1] = local_5c0[1] + 1;
  }
  return;
LAB_1000f3c3:
  uVar27 = uVar27 | 4;
  goto LAB_1000f8c5;
LAB_1000d966:
  uVar6 = 0;
LAB_1000d98d:
  local_4c = 0;
  uVar22 = *(uint *)(pbVar15 + uVar6 * 4 + 0x14);
  if ((uVar22 & 1) != 0 || uVar22 == 0) goto LAB_1000d980;
  local_b8 = 0;
  if (piVar18 == (int *)0x0) goto LAB_1000d980;
  if ((uVar22 & 0xfffffff0) == 0) goto LAB_1000d980;
  if (*piVar18 != 0x54584b57) goto LAB_1000d980;
  if ((uint)piVar18[2] < 0x68) goto LAB_1000d980;
  if ((code *)(ulong)(uint)piVar18[0x19] == (code *)0x0) goto LAB_1000d980;
  iVar4 = (*(code *)(ulong)(uint)piVar18[0x19])(uVar22 & 0xfffffff0,0,0x1000);
  pbVar15 = local_38;
  piVar18 = local_40;
  if (iVar4 == 0) goto LAB_1000d980;
  uVar7 = 0;
  do {
    uVar5 = uVar7;
    uVar7 = uVar5 + 1;
  } while (local_5b4[uVar5 + 0x27c] != '\0');
  if (uVar5 + 1 < 0x280) {
    cVar19 = ' ';
    pcVar13 = str_100135c1;
    do {
      pcVar13 = pcVar13 + 1;
      local_5b4[uVar5 + 0x27c] = cVar19;
      uVar5 = uVar5 + 1;
      cVar19 = *pcVar13;
      if (cVar19 == '\0') break;
    } while (uVar5 < 0x27f);
  }
  local_5b4[uVar5 + 0x27c] = 0;
  if (uVar6 == 0) {
    uVar6 = 0;
    do {
      uVar7 = uVar6;
      uVar6 = uVar7 + 1;
    } while (local_5b4[uVar7 + 0x27c] != '\0');
    if (uVar7 + 1 < 0x280) {
      *(undefined2 *)(local_5b4 + uVar7 + 0x27c) = 0x30;
    }
  }
  else {
    uVar7 = 0xffffffffffffffff;
    do {
      uVar5 = uVar7;
      uVar22 = (uint)uVar6;
      uVar12 = (uVar6 & 0xffffffff) / 10;
      local_5b4[uVar5 - 3] = (char)uVar6 + (char)uVar12 * -10 | 0x30;
      uVar7 = uVar5 + 1;
      if (8 < uVar7) break;
      uVar6 = uVar12;
    } while (9 < uVar22);
    if ((uVar7 & 1) == 0) {
      uVar6 = 0;
      do {
        uVar12 = uVar6;
        uVar6 = uVar12 + 1;
      } while (local_5b4[uVar12 + 0x27c] != '\0');
      uVar6 = uVar7;
      if (uVar12 + 1 < 0x280) {
        local_5b4[uVar12 + 0x27c] = local_5b4[uVar5 - 3];
        local_336[uVar12 - 1] = 0;
      }
    }
    else {
      uVar6 = uVar5 + 2;
    }
    while (uVar7 != 0) {
      uVar7 = 0;
      do {
        uVar5 = uVar7;
        uVar7 = uVar5 + 1;
      } while (local_5b4[uVar5 + 0x27c] != '\0');
      if (uVar5 + 1 < 0x280) {
        local_5b4[uVar5 + 0x27c] = local_5b4[uVar6 - 5];
        local_336[uVar5 - 1] = 0;
      }
      lVar20 = uVar6 - 6;
      uVar6 = uVar6 - 2;
      uVar7 = 0;
      do {
        uVar5 = uVar7;
        uVar7 = uVar5 + 1;
      } while (local_5b4[uVar5 + 0x27c] != '\0');
      uVar7 = uVar6;
      if (uVar5 + 1 < 0x280) {
        local_5b4[uVar5 + 0x27c] = local_5b4[lVar20];
        local_336[uVar5 - 1] = 0;
      }
    }
  }
  uVar22 = local_b8;
  uVar6 = 0;
  do {
    uVar7 = uVar6;
    uVar6 = uVar7 + 1;
  } while (local_5b4[uVar7 + 0x27c] != '\0');
  if (uVar6 < 0x280) {
    local_5b4[uVar7 + 0x27c] = 0x20;
    uVar7 = uVar6;
  }
  local_5b4[uVar7 + 0x27c] = 0;
  uVar6 = 0xffffffffffffffff;
  do {
    uVar7 = uVar6;
    uVar6 = uVar7 + 1;
  } while (local_336[uVar7 - 1] != '\0');
  if (uVar7 + 2 < 0x280) {
    local_336[uVar7 - 1] = 0x6d;
    bVar28 = uVar6 != 0x27e;
    uVar6 = uVar7 + 2;
    if (bVar28) {
      uVar6 = uVar7 + 3;
      local_336[uVar7] = 0x6d;
      if (uVar6 < 0x27f) {
        uVar6 = uVar7 + 4;
        local_336[uVar7 + 1] = 0x69;
        if (uVar6 < 0x27f) {
          local_336[uVar7 + 2] = 0x6f;
          uVar6 = uVar7 + 5;
        }
      }
    }
  }
  local_5b4[uVar6 + 0x27c] = 0;
  uVar6 = 0;
  do {
    uVar7 = uVar6;
    uVar6 = uVar7 + 1;
  } while (local_5b4[uVar7 + 0x27c] != '\0');
  if (uVar6 < 0x280) {
    local_5b4[uVar7 + 0x27c] = 0x3d;
    uVar7 = uVar6;
  }
  local_5b4[uVar7 + 0x27c] = 0;
  iVar4 = 8;
  do {
    uVar27 = uVar22 >> ((char)iVar4 * '\x04' - 4U & 0x1f) & 0xf;
    cVar19 = (char)uVar27;
    cVar26 = cVar19 + '7';
    if (uVar27 < 10) {
      cVar26 = cVar19 + '0';
    }
    uVar6 = 0;
    do {
      uVar7 = uVar6;
      uVar6 = uVar7 + 1;
    } while (local_5b4[uVar7 + 0x27c] != '\0');
    if (uVar7 + 1 < 0x280) {
      local_5b4[uVar7 + 0x27c] = cVar26;
      local_336[uVar7 - 1] = 0;
    }
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  if (((uVar22 != 0) && (*piVar18 == 0x54584b57)) && (0x6b < (uint)piVar18[2])) {
    if ((code *)(ulong)(uint)piVar18[0x1a] != (code *)0x0) {
      iVar4 = (*(code *)(ulong)(uint)piVar18[0x1a])(uVar22,4,&local_4c);
      uVar22 = local_4c;
      pbVar15 = local_38;
      if (iVar4 != 0) {
        uVar6 = 0;
        do {
          uVar7 = uVar6;
          uVar6 = uVar7 + 1;
        } while (local_5b4[uVar7 + 0x27c] != '\0');
        if (uVar6 < 0x280) {
          local_5b4[uVar7 + 0x27c] = 0x20;
          uVar7 = uVar6;
        }
        local_5b4[uVar7 + 0x27c] = 0;
        uVar6 = 0xffffffffffffffff;
        do {
          uVar7 = uVar6;
          uVar6 = uVar7 + 1;
        } while (local_336[uVar7 - 1] != '\0');
        if (uVar7 + 2 < 0x280) {
          local_336[uVar7 - 1] = 0x6d;
          bVar28 = uVar6 != 0x27e;
          uVar6 = uVar7 + 2;
          if (bVar28) {
            uVar6 = uVar7 + 3;
            local_336[uVar7] = 0x6d;
            if (uVar6 < 0x27f) {
              uVar6 = uVar7 + 4;
              local_336[uVar7 + 1] = 0x69;
              if (uVar6 < 0x27f) {
                uVar6 = uVar7 + 5;
                local_336[uVar7 + 2] = 0x6f;
                if (uVar6 < 0x27f) {
                  uVar6 = uVar7 + 6;
                  local_336[uVar7 + 3] = 0x52;
                  if (uVar6 < 0x27f) {
                    uVar6 = uVar7 + 7;
                    local_336[uVar7 + 4] = 0x65;
                    if (uVar6 < 0x27f) {
                      uVar6 = uVar7 + 8;
                      local_336[uVar7 + 5] = 0x67;
                      if (uVar6 < 0x27f) {
                        local_336[uVar7 + 6] = 0x30;
                        uVar6 = uVar7 + 9;
                      }
                    }
                  }
                }
              }
            }
          }
        }
        local_5b4[uVar6 + 0x27c] = 0;
        uVar6 = 0;
        do {
          uVar7 = uVar6;
          uVar6 = uVar7 + 1;
        } while (local_5b4[uVar7 + 0x27c] != '\0');
        if (uVar6 < 0x280) {
          local_5b4[uVar7 + 0x27c] = 0x3d;
          uVar7 = uVar6;
        }
        local_5b4[uVar7 + 0x27c] = 0;
        pbVar15 = local_38;
        iVar4 = 8;
        do {
          uVar27 = uVar22 >> ((char)iVar4 * '\x04' - 4U & 0x1f) & 0xf;
          cVar19 = (char)uVar27;
          cVar26 = cVar19 + '7';
          if (uVar27 < 10) {
            cVar26 = cVar19 + '0';
          }
          uVar6 = 0;
          do {
            uVar7 = uVar6;
            uVar6 = uVar7 + 1;
          } while (local_5b4[uVar7 + 0x27c] != '\0');
          if (uVar7 + 1 < 0x280) {
            local_5b4[uVar7 + 0x27c] = cVar26;
            local_336[uVar7 - 1] = 0;
          }
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
    }
  }
  goto LAB_1000de66;
LAB_1000d980:
  uVar6 = uVar6 + 1;
  if (uVar6 == 6) goto LAB_1000de5f;
  goto LAB_1000d98d;
}

#undef DAT_10012f9e
#undef DAT_10012f9f
#undef DAT_10012fa0
#undef DAT_10012fa1
#undef DAT_1001334a
#undef DAT_1001338f
#undef DAT_10013390
#undef DAT_10013391
#undef DAT_10013392
#undef DAT_10013393
#undef DAT_10013394
#undef DAT_100133e5
#undef DAT_100133f0
#undef str_10012e6b
#undef str_10012fb1
#undef str_10012fb7
#undef str_10012fbf
#undef str_1001335d
#undef str_1001337e
#undef str_10013387
#undef str_10013395
#undef str_1001339c
#undef str_100133a8
#undef str_100133be
#undef str_100133fc
#undef str_10013432
#undef str_1001345a
#undef str_1001346a
#undef str_10013494
#undef str_100134a4
#undef str_100134b8
#undef str_100134d0
#undef str_100134e8
#undef str_10013501
#undef str_10013512
#undef str_10013522
#undef str_10013531
#undef str_10013547
#undef str_10013551
#undef str_1001355d
#undef str_10013572
#undef str_1001357e
#undef str_10013597
#undef str_1001359f
#undef str_100135a7
#undef str_100135c1
#undef str_100135cb
#undef local_338
#undef local_336
#undef local_b8
#undef local_58
#undef local_54
#undef local_50
#undef local_4c
#undef local_40
#undef local_38
#undef local_5c0
#undef local_5b8
#undef cStack_339
#undef local_5b4
#undef cStack_b9

#define local_38 (*(undefined8 *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10011300
 */

undefined8 recovered_10011300(int *param_1,undefined4 param_2)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  int iVar1;
  ulong in_RAX;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;

  uVar4 = 8;
  uVar3 = 0;
  local_38 = in_RAX;
  while( true ) {
    local_38 = local_38 & 0xffffffff;
    if (param_1 == (int *)0x0) {
      return 0;
    }
    if (*param_1 != 0x54584b57) {
      return 0;
    }
    if ((uint)param_1[2] < 0x58) {
      return 0;
    }
    if ((code *)(ulong)(uint)param_1[0x15] == (code *)0x0) break;
    iVar1 = (*(code *)(ulong)(uint)param_1[0x15])(0x304,1,(long)&local_38 + 4);
    if (iVar1 == 0) {
      return 0;
    }
    if ((local_38 & 0x200000000) == 0) {
      uVar4 = 8;
      uVar3 = 0;
      while( true ) {
        local_38 = local_38 & 0xffffffff00000000;
        if ((((*param_1 != 0x54584b57) || ((uint)param_1[2] < 0x58)) ||
            ((code *)(ulong)(uint)param_1[0x15] == (code *)0x0)) ||
           (iVar1 = (*(code *)(ulong)(uint)param_1[0x15])(0x304,1,&local_38), iVar1 == 0)) {
          return 0;
        }
        if ((local_38 & 4) != 0) break;
        if (((*param_1 == 0x54584b57) && (0x33 < (uint)param_1[2])) &&
           ((code *)(ulong)(uint)param_1[0xc] != (code *)0x0)) {
          (*(code *)(ulong)(uint)param_1[0xc])(uVar4);
        }
        uVar4 = uVar4 << (uVar4 < 0x1000 && 9 < uVar3);
        uVar3 = uVar3 + 1;
        if (uVar3 == 0x18) {
          return 0;
        }
      }
      if (*param_1 != 0x54584b57) {
        return 0;
      }
      if ((uint)param_1[2] < 0x5c) {
        return 0;
      }
      if ((code *)(ulong)(uint)param_1[0x16] == (code *)0x0) {
        return 0;
      }
      uVar2 = (*(code *)(ulong)(uint)param_1[0x16])(0x300,1,param_2);
      return uVar2;
    }
    if (((*param_1 == 0x54584b57) && (0x33 < (uint)param_1[2])) &&
       ((code *)(ulong)(uint)param_1[0xc] != (code *)0x0)) {
      (*(code *)(ulong)(uint)param_1[0xc])(uVar4);
    }
    uVar4 = uVar4 << (uVar4 < 0x1000 && 9 < uVar3);
    uVar3 = uVar3 + 1;
    if (uVar3 == 0x18) {
      return 0;
    }
  }
  return 0;
}

#undef local_38

#define local_38 (*(uint *)(frame + 24))
#define local_34 (*(uint *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100114a0
 */

undefined8 recovered_100114a0(int *param_1,undefined1 param_2,long param_3)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  uint uVar4;
  bool bVar5;

  if (param_3 == 0) {
    return 0;
  }
  uVar4 = 0;
  bVar5 = true;
  do {
    local_38 = 0;
    if ((param_1 != (int *)0x0) && (*param_1 == 0x54584b57)) {
      uVar2 = param_1[2];
      if (0x57 < uVar2) {
        if ((code *)(ulong)(uint)param_1[0x15] != (code *)0x0) {
          (*(code *)(ulong)(uint)param_1[0x15])(2000,1,&local_38);
          if (*param_1 != 0x54584b57) goto LAB_100114d0;
          uVar2 = param_1[2];
          if (uVar2 < 0x58) goto LAB_10011570;
          if ((((code *)(ulong)(uint)param_1[0x15] != (code *)0x0) &&
              (iVar1 = (*(code *)(ulong)(uint)param_1[0x15])(0x7d4,1,&local_38), iVar1 != 0)) &&
             ((local_38 & 1) == 0)) {
            if (!bVar5) {
              return 0;
            }
            if (*param_1 != 0x54584b57) {
              return 0;
            }
            if ((uint)param_1[2] < 0x5c) {
              return 0;
            }
            if ((code *)(ulong)(uint)param_1[0x16] == (code *)0x0) {
              return 0;
            }
            iVar1 = (*(code *)(ulong)(uint)param_1[0x16])(2000,1,param_2);
            if (iVar1 == 0) {
              return 0;
            }
            uVar4 = 0;
            bVar5 = true;
            break;
          }
        }
        if (*param_1 != 0x54584b57) goto LAB_100114d0;
        uVar2 = param_1[2];
      }
LAB_10011570:
      if ((0x33 < uVar2) && ((code *)(ulong)(uint)param_1[0xc] != (code *)0x0)) {
        (*(code *)(ulong)(uint)param_1[0xc])(100);
      }
    }
LAB_100114d0:
    bVar5 = uVar4 < 199;
    uVar4 = uVar4 + 1;
    if (uVar4 == 200) {
      return 0;
    }
  } while( true );
LAB_1001160f:
  local_34 = 0;
  if (*param_1 == 0x54584b57) {
    uVar2 = param_1[2];
    if (uVar2 < 0x58) {
LAB_1001165d:
      if (uVar2 < 0x34) goto LAB_100115ee;
    }
    else if ((code *)(ulong)(uint)param_1[0x15] != (code *)0x0) {
      iVar1 = (*(code *)(ulong)(uint)param_1[0x15])(0x7d4,1,&local_34);
      if (iVar1 == 0) {
        iVar1 = *param_1;
      }
      else {
        iVar1 = *param_1;
        if ((local_34 & 1) != 0) {
          if (((iVar1 == 0x54584b57) && (0x57 < (uint)param_1[2])) &&
             ((code *)(ulong)(uint)param_1[0x15] != (code *)0x0)) {
            (*(code *)(ulong)(uint)param_1[0x15])(2000,1,&local_34);
          }
          if (!bVar5) {
            return 0;
          }
          if (*param_1 != 0x54584b57) {
            return 0;
          }
          if ((uint)param_1[2] < 0x58) {
            return 0;
          }
          if ((code *)(ulong)(uint)param_1[0x15] == (code *)0x0) {
            return 0;
          }
          uVar3 = (*(code *)(ulong)(uint)param_1[0x15])(0x7c2,1,param_3);
          return uVar3;
        }
      }
      if (iVar1 != 0x54584b57) goto LAB_100115ee;
      uVar2 = param_1[2];
      goto LAB_1001165d;
    }
    if ((code *)(ulong)(uint)param_1[0xc] != (code *)0x0) {
      (*(code *)(ulong)(uint)param_1[0xc])(100);
    }
  }
LAB_100115ee:
  bVar5 = uVar4 < 199;
  uVar4 = uVar4 + 1;
  if (uVar4 == 200) {
    return 0;
  }
  goto LAB_1001160f;
}

#undef local_38
#undef local_34

#define local_38 (*(uint *)(frame + 24))
#define local_34 (*(uint *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100116f0
 */

void recovered_100116f0(int *param_1,undefined1 param_2,long param_3)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;

  if (param_3 == 0) {
    return;
  }
  uVar3 = 0;
  bVar4 = true;
  do {
    local_38 = 0;
    if ((param_1 != (int *)0x0) && (*param_1 == 0x54584b57)) {
      uVar2 = param_1[2];
      if (0x57 < uVar2) {
        if ((code *)(ulong)(uint)param_1[0x15] != (code *)0x0) {
          (*(code *)(ulong)(uint)param_1[0x15])(2000,1,&local_38);
          if (*param_1 != 0x54584b57) goto LAB_10011720;
          uVar2 = param_1[2];
          if (uVar2 < 0x58) goto LAB_100117c0;
          if ((((code *)(ulong)(uint)param_1[0x15] != (code *)0x0) &&
              (iVar1 = (*(code *)(ulong)(uint)param_1[0x15])(0x7d4,1,&local_38), iVar1 != 0)) &&
             ((local_38 & 1) == 0)) {
            if (!bVar4) {
              return;
            }
            if (*param_1 != 0x54584b57) {
              return;
            }
            if ((uint)param_1[2] < 0x5c) {
              return;
            }
            if ((code *)(ulong)(uint)param_1[0x16] == (code *)0x0) {
              return;
            }
            iVar1 = (*(code *)(ulong)(uint)param_1[0x16])(2000,1,param_2);
            if (iVar1 == 0) {
              return;
            }
            uVar3 = 0;
            bVar4 = true;
            break;
          }
        }
        if (*param_1 != 0x54584b57) goto LAB_10011720;
        uVar2 = param_1[2];
      }
LAB_100117c0:
      if ((0x33 < uVar2) && ((code *)(ulong)(uint)param_1[0xc] != (code *)0x0)) {
        (*(code *)(ulong)(uint)param_1[0xc])(100);
      }
    }
LAB_10011720:
    bVar4 = uVar3 < 199;
    uVar3 = uVar3 + 1;
    if (uVar3 == 200) {
      return;
    }
  } while( true );
LAB_10011853:
  local_34 = 0;
  if (*param_1 == 0x54584b57) {
    uVar2 = param_1[2];
    if (uVar2 < 0x58) {
LAB_100118a1:
      if (uVar2 < 0x34) goto LAB_10011835;
    }
    else if ((code *)(ulong)(uint)param_1[0x15] != (code *)0x0) {
      iVar1 = (*(code *)(ulong)(uint)param_1[0x15])(0x7d4,1,&local_34);
      if (iVar1 == 0) {
        iVar1 = *param_1;
      }
      else {
        iVar1 = *param_1;
        if ((local_34 & 1) != 0) {
          if (((iVar1 == 0x54584b57) && (0x57 < (uint)param_1[2])) &&
             ((code *)(ulong)(uint)param_1[0x15] != (code *)0x0)) {
            (*(code *)(ulong)(uint)param_1[0x15])(2000,1,&local_34);
          }
          if (!bVar4) {
            return;
          }
          if (*param_1 != 0x54584b57) {
            return;
          }
          if ((uint)param_1[2] < 0x58) {
            return;
          }
          if ((code *)(ulong)(uint)param_1[0x15] == (code *)0x0) {
            return;
          }
          (*(code *)(ulong)(uint)param_1[0x15])(0x7c2,4,param_3);
          return;
        }
      }
      if (iVar1 != 0x54584b57) goto LAB_10011835;
      uVar2 = param_1[2];
      goto LAB_100118a1;
    }
    if ((code *)(ulong)(uint)param_1[0xc] != (code *)0x0) {
      (*(code *)(ulong)(uint)param_1[0xc])(100);
    }
  }
LAB_10011835:
  bVar4 = uVar3 < 199;
  uVar3 = uVar3 + 1;
  if (uVar3 == 200) {
    return;
  }
  goto LAB_10011853;
}

#undef local_38
#undef local_34

#define abStack_13 (*(byte (*)[11])(frame + 29))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10011920
 */

void recovered_10011920(long param_1,ulong param_2,char *param_3,uint param_4)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  ulong uVar2;
  ulong uVar3;
  char cVar4;
  uint uVar5;
  ulong uVar6;

  if (param_1 == 0) {
    if (param_4 < 10) {
      return;
    }
  }
  else {
    uVar6 = 0;
    do {
      uVar3 = uVar6;
      uVar6 = uVar3 + 1;
    } while (*(char *)(param_1 + uVar3) != '\0');
    if (uVar6 < param_2) {
      *(undefined1 *)(param_1 + -1 + uVar6) = 0x20;
      uVar3 = uVar6;
    }
    *(undefined1 *)(param_1 + uVar3) = 0;
    uVar6 = 0;
    do {
      uVar3 = uVar6;
      uVar6 = uVar3 + 1;
    } while (*(char *)(param_1 + uVar3) != '\0');
    if (param_3 != (char *)0x0) {
      cVar4 = *param_3;
      if (uVar3 + 1 < param_2 && cVar4 != '\0') {
        do {
          param_3 = param_3 + 1;
          *(char *)(param_1 + uVar3) = cVar4;
          cVar4 = *param_3;
          uVar6 = uVar3 + 1;
          if (cVar4 == '\0') break;
          uVar2 = uVar3 + 2;
          uVar3 = uVar6;
        } while (uVar2 < param_2);
      }
      else {
        uVar6 = uVar3;
      }
      *(undefined1 *)(param_1 + uVar6) = 0;
    }
    uVar6 = 0;
    do {
      uVar3 = uVar6;
      uVar6 = uVar3 + 1;
    } while (*(char *)(param_1 + uVar3) != '\0');
    if (uVar6 < param_2) {
      *(undefined1 *)(param_1 + -1 + uVar6) = 0x3d;
      uVar3 = uVar6;
    }
    *(undefined1 *)(param_1 + uVar3) = 0;
    if (param_4 < 10) {
      uVar6 = 0;
      do {
        pcVar1 = (char *)(param_1 + uVar6);
        uVar6 = uVar6 + 1;
      } while (*pcVar1 != '\0');
      if (uVar6 < param_2) {
        *(undefined2 *)(param_1 + -1 + uVar6) = 0x30;
      }
      goto LAB_10011a06;
    }
  }
  uVar6 = (ulong)param_4;
  uVar3 = 0;
  do {
    uVar5 = (uint)uVar6;
    uVar6 = uVar6 / 10;
    abStack_13[uVar3 + 1] = (char)uVar6 + (char)(uVar6 * 0x1999999a >> 0x20) * -10 | 0x30;
    uVar2 = uVar3 + 1;
    if (8 < uVar3) break;
    uVar3 = uVar2;
  } while (99 < uVar5);
  do {
    if (param_1 != 0) {
      uVar6 = 0;
      do {
        pcVar1 = (char *)(param_1 + uVar6);
        uVar6 = uVar6 + 1;
      } while (*pcVar1 != '\0');
      if (uVar6 < param_2) {
        *(byte *)(param_1 + -1 + uVar6) = abStack_13[uVar2];
        *(undefined1 *)(param_1 + uVar6) = 0;
      }
    }
    uVar2 = uVar2 - 1;
  } while (uVar2 != 0);
LAB_10011a06:
  if (param_4 % 10 != 0 && param_1 != 0) {
    uVar6 = 0;
    do {
      uVar3 = uVar6;
      uVar6 = uVar3 + 1;
    } while (*(char *)(param_1 + uVar3) != '\0');
    if (uVar6 < param_2) {
      *(undefined1 *)(param_1 + -1 + uVar6) = 0x2e;
      uVar3 = uVar6;
    }
    *(undefined1 *)(param_1 + uVar3) = 0;
    uVar6 = 0;
    do {
      pcVar1 = (char *)(param_1 + uVar6);
      uVar6 = uVar6 + 1;
    } while (*pcVar1 != '\0');
    if (uVar6 < param_2) {
      *(byte *)(param_1 + -1 + uVar6) = (byte)(param_4 % 10) | 0x30;
      *(undefined1 *)(param_1 + uVar6) = 0;
    }
  }
  return;
}

#undef abStack_13

#define local_50 (*(undefined4 *)(frame + 16))
#define local_4c (*(undefined4 *)(frame + 20))
#define local_48 (*(int * *)(frame + 24))
#define local_3c (*(undefined4 *)(frame + 36))
#define local_38 (*(undefined4 *)(frame + 40))
#define local_34 (*(uint *)(frame + 44))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10011b30
 */

undefined8
recovered_10011b30(int *param_1,uint param_2,undefined1 param_3,undefined1 param_4,
                  undefined1 *param_5)

{
  unsigned char frame[128] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  uint uVar4;
  long lVar5;

  local_3c = 0;
  local_50 = 0;
  local_38 = 0;
  if (param_1 == (int *)0x0 || param_5 == (undefined1 *)0x0) {
    return 0;
  }
  if (*param_1 != 0x54584b57) {
    return 0;
  }
  if ((uint)param_1[2] < 0x60) {
    return 0;
  }
  if ((code *)(ulong)(uint)param_1[0x17] == (code *)0x0) {
    return 0;
  }
  uVar4 = param_2 & 0xff;
  local_48 = param_1;
  local_34 = param_2;
  iVar1 = (*(code *)(ulong)(uint)param_1[0x17])(uVar4,param_3,param_4,0,4,&local_3c);
  if (iVar1 == 0) {
    return 0;
  }
  if ((short)local_3c == 0) {
    return 0;
  }
  if ((short)local_3c == -1) {
    return 0;
  }
  if (*local_48 != 0x54584b57) {
    return 0;
  }
  if ((uint)local_48[2] < 0x60) {
    return 0;
  }
  if ((code *)(ulong)(uint)local_48[0x17] == (code *)0x0) {
    return 0;
  }
  iVar1 = (*(code *)(ulong)(uint)local_48[0x17])(uVar4,param_3,param_4,8,4,&local_50);
  if (iVar1 == 0) {
    return 0;
  }
  if ((((*local_48 != 0x54584b57) || ((uint)local_48[2] < 0x60)) ||
      ((code *)(ulong)(uint)local_48[0x17] == (code *)0x0)) ||
     (iVar1 = (*(code *)(ulong)(uint)local_48[0x17])(uVar4,param_3,param_4,4,4,param_5 + 0x10),
     iVar1 == 0)) {
    *(undefined4 *)(param_5 + 0x10) = 0;
  }
  if (((*local_48 == 0x54584b57) && (0x5f < (uint)local_48[2])) &&
     (((code *)(ulong)(uint)local_48[0x17] != (code *)0x0 &&
      (iVar1 = (*(code *)(ulong)(uint)local_48[0x17])(uVar4,param_3,param_4,0xc,4,&local_38),
      iVar1 != 0)))) {
  }
  else {
    local_38 = 0;
    PF_PART1(local_38, 2) = 0;
  }
  *param_5 = (char)local_34;
  param_5[1] = param_3;
  param_5[2] = param_4;
  *(undefined4 *)(param_5 + 4) = local_3c;
  *(ushort *)(param_5 + 10) = (ushort)local_50 << 8 | (ushort)local_50 >> 8;
  param_5[9] = (char)((uint)local_50 >> 0x10);
  param_5[8] = (char)((uint)local_50 >> 0x18);
  param_5[0xc] = PF_PART1(local_38, 2);
  lVar5 = 0;
  piVar3 = local_48;
  do {
    local_4c = 0;
    uVar2 = 0;
    if (((*piVar3 == 0x54584b57) && (0x5f < (uint)piVar3[2])) &&
       ((code *)(ulong)(uint)piVar3[0x17] != (code *)0x0)) {
      iVar1 = (*(code *)(ulong)(uint)piVar3[0x17])
                        (uVar4,param_3,param_4,lVar5 + 0x10U & 0xffff,4,&local_4c);
      uVar2 = 0;
      if (iVar1 != 0) {
        uVar2 = local_4c;
      }
      piVar3 = local_48;
    }
    *(undefined4 *)(param_5 + lVar5 + 0x14) = uVar2;
    lVar5 = lVar5 + 4;
  } while (lVar5 != 0x18);
  return 1;
}

#undef local_50
#undef local_4c
#undef local_48
#undef local_3c
#undef local_38
#undef local_34

#undef DAT_10012d60
#define DAT_10012d60 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x18U)))
#undef DAT_10012f95
#define DAT_10012f95 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x24dU)))
#undef DAT_10012f9a
#define DAT_10012f9a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x252U)))
#undef DAT_10012fa2
#define DAT_10012fa2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x25aU)))
#undef DAT_10012fa7
#define DAT_10012fa7 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x25fU)))
#undef DAT_10012fac
#define DAT_10012fac (*(uint8_t *)(((uintptr_t)pf_module_state + 0x264U)))
#undef DAT_100136d3
#define DAT_100136d3 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x98bU)))
#undef str_100135d6
#define str_100135d6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x88eU)))
#undef str_100135e1
#define str_100135e1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x899U)))
#undef str_100135f0
#define str_100135f0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x8a8U)))
#undef str_100135fb
#define str_100135fb (*(char (*)[1])(((uintptr_t)pf_module_state + 0x8b3U)))
#undef str_10013609
#define str_10013609 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x8c1U)))
#undef str_1001361b
#define str_1001361b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x8d3U)))
#undef str_10013625
#define str_10013625 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x8ddU)))
#undef str_10013631
#define str_10013631 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x8e9U)))
#undef str_1001363b
#define str_1001363b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x8f3U)))
#undef str_1001364c
#define str_1001364c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x904U)))
#undef str_1001365a
#define str_1001365a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x912U)))
#undef str_10013663
#define str_10013663 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x91bU)))
#undef str_100136d8
#define str_100136d8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x990U)))
#undef str_100136e3
#define str_100136e3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x99bU)))
#undef str_100136ec
#define str_100136ec (*(char (*)[1])(((uintptr_t)pf_module_state + 0x9a4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10011db0
 */

char * recovered_10011db0(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  byte bVar2;
  ushort uVar3;
  char *pcVar4;
  char *pcVar5;

  pcVar4 = str_100135d6;
  if (param_1 != 0) {
    cVar1 = *(char *)(param_1 + 8);
    if (cVar1 == '\f') {
      if (*(char *)(param_1 + 9) == '\x03') {
        bVar2 = *(byte *)(param_1 + 10);
        if (bVar2 < 0x30) {
          if (bVar2 == 0) {
            return &DAT_10012fa2;
          }
          if (bVar2 == 0x10) {
            return &DAT_10012fa7;
          }
          if (bVar2 == 0x20) {
            return &DAT_10012fac;
          }
        }
        else {
          if (bVar2 == 0x30) {
            return &DAT_100136d3;
          }
          if (bVar2 == 0x80) {
            return str_100136d8;
          }
          if (bVar2 == 0xfe) {
            return str_100136e3;
          }
        }
        return str_100136ec;
      }
    }
    else if (cVar1 == '\x04') {
      if (*(char *)(param_1 + 9) == '\x03') {
        return &DAT_10012f9a;
      }
    }
    else if ((cVar1 == '\x01') && (*(char *)(param_1 + 9) == '\x06')) {
      return &DAT_10012f95;
    }
    uVar3 = *(ushort *)(param_1 + 4);
    if (uVar3 < 0x11ab) {
      if (uVar3 == 0x106b) {
        return str_10013663;
      }
      if (uVar3 == 0x10de) {
        pcVar4 = str_100135f0;
        if (cVar1 == '\x03') {
          pcVar4 = str_100135e1;
        }
        return pcVar4;
      }
      if (uVar3 == 0x1180) {
        return str_1001365a;
      }
    }
    else {
      if (uVar3 == 0x11ab) {
        return str_1001364c;
      }
      if (uVar3 == 0x14e4) {
        return str_1001363b;
      }
      if (uVar3 == 0x8086) {
        if (cVar1 == '\x03') {
          return str_100135fb;
        }
        if (cVar1 != '\x06') {
          if ((cVar1 == '\f') && (*(char *)(param_1 + 9) == '\x05')) {
            return str_10013625;
          }
          return str_10013631;
        }
        pcVar4 = str_10013631;
        if (*(char *)(param_1 + 9) == '\x01') {
          pcVar4 = str_1001361b;
        }
        pcVar5 = str_10013609;
        if (*(char *)(param_1 + 9) != '\0') {
          pcVar5 = pcVar4;
        }
        return pcVar5;
      }
    }
    if ((byte)(cVar1 - 1U) < 6) {
      pcVar4 = &DAT_10012d60 + *(int *)(&DAT_10012d60 + (ulong)(byte)(cVar1 - 1U) * 4);
    }
  }
  return pcVar4;
}

#undef DAT_10012d60
#undef DAT_10012f95
#undef DAT_10012f9a
#undef DAT_10012fa2
#undef DAT_10012fa7
#undef DAT_10012fac
#undef DAT_100136d3
#undef str_100135d6
#undef str_100135e1
#undef str_100135f0
#undef str_100135fb
#undef str_10013609
#undef str_1001361b
#undef str_10013625
#undef str_10013631
#undef str_1001363b
#undef str_1001364c
#undef str_1001365a
#undef str_10013663
#undef str_100136d8
#undef str_100136e3
#undef str_100136ec

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10011f80
 */

void recovered_10011f80(long param_1,char *param_2,uint param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  char cVar2;
  uint uVar3;
  ulong uVar4;
  char cVar5;
  ulong uVar6;

  if (param_1 != 0) {
    uVar6 = 0;
    do {
      uVar4 = uVar6;
      uVar6 = uVar4 + 1;
    } while (*(char *)(param_1 + uVar4) != '\0');
    if (uVar6 < 0x280) {
      *(undefined1 *)(param_1 + -1 + uVar6) = 0x20;
      uVar4 = uVar6;
    }
    *(undefined1 *)(param_1 + uVar4) = 0;
    uVar6 = 0;
    do {
      uVar4 = uVar6;
      uVar6 = uVar4 + 1;
    } while (*(char *)(param_1 + uVar4) != '\0');
    if (param_2 != (char *)0x0) {
      cVar5 = *param_2;
      if (uVar4 + 1 < 0x280 && cVar5 != '\0') {
        do {
          param_2 = param_2 + 1;
          *(char *)(param_1 + uVar4) = cVar5;
          uVar4 = uVar4 + 1;
          cVar5 = *param_2;
          if (cVar5 == '\0') break;
        } while (uVar4 < 0x27f);
      }
      *(undefined1 *)(param_1 + uVar4) = 0;
    }
    uVar6 = 0;
    do {
      uVar4 = uVar6;
      uVar6 = uVar4 + 1;
    } while (*(char *)(param_1 + uVar4) != '\0');
    if (uVar6 < 0x280) {
      *(undefined1 *)(param_1 + -1 + uVar6) = 0x3d;
      uVar4 = uVar6;
    }
    *(undefined1 *)(param_1 + uVar4) = 0;
    uVar3 = param_3 >> 0xc & 0xf;
    cVar5 = (char)uVar3;
    cVar2 = cVar5 + '7';
    if (uVar3 < 10) {
      cVar2 = cVar5 + '0';
    }
    uVar6 = 0;
    do {
      pcVar1 = (char *)(param_1 + uVar6);
      uVar6 = uVar6 + 1;
    } while (*pcVar1 != '\0');
    if (uVar6 < 0x280) {
      *(char *)(param_1 + -1 + uVar6) = cVar2;
      *(undefined1 *)(param_1 + uVar6) = 0;
    }
    uVar3 = param_3 >> 8 & 0xf;
    cVar5 = (char)uVar3;
    cVar2 = cVar5 + '7';
    if (uVar3 < 10) {
      cVar2 = cVar5 + '0';
    }
    uVar6 = 0;
    do {
      pcVar1 = (char *)(param_1 + uVar6);
      uVar6 = uVar6 + 1;
    } while (*pcVar1 != '\0');
    if (uVar6 < 0x280) {
      *(char *)(param_1 + -1 + uVar6) = cVar2;
      *(undefined1 *)(param_1 + uVar6) = 0;
    }
    uVar3 = param_3 >> 4 & 0xf;
    cVar5 = (char)uVar3;
    cVar2 = cVar5 + '7';
    if (uVar3 < 10) {
      cVar2 = cVar5 + '0';
    }
    uVar6 = 0;
    do {
      pcVar1 = (char *)(param_1 + uVar6);
      uVar6 = uVar6 + 1;
    } while (*pcVar1 != '\0');
    if (uVar6 < 0x280) {
      *(char *)(param_1 + -1 + uVar6) = cVar2;
      *(undefined1 *)(param_1 + uVar6) = 0;
    }
    cVar5 = (char)(param_3 & 0xf);
    cVar2 = cVar5 + '7';
    if ((param_3 & 0xf) < 10) {
      cVar2 = cVar5 + '0';
    }
    uVar6 = 0;
    do {
      pcVar1 = (char *)(param_1 + uVar6);
      uVar6 = uVar6 + 1;
    } while (*pcVar1 != '\0');
    if (uVar6 < 0x280) {
      *(char *)(param_1 + -1 + uVar6) = cVar2;
      *(undefined1 *)(param_1 + uVar6) = 0;
    }
  }
  return;
}


#undef DAT_10015000
#define DAT_10015000 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x22b8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10012140
 */

undefined8 recovered_10012140(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if (DAT_10015000 != 0) {
    if (param_1 != 0 && (code *)(ulong)*(uint *)(DAT_10015000 + 0x24) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x10012164. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*(code *)(ulong)*(uint *)(DAT_10015000 + 0x24))();
      return uVar1;
    }
  }
  return 0;
}

#undef DAT_10015000

#undef DAT_10015000
#define DAT_10015000 (*(int * *)(((uintptr_t)pf_module_state + 0x22b8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10012170
 */

undefined8 recovered_10012170(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if ((((DAT_10015000 == (int *)0x0) || (*DAT_10015000 != 0x54584b57)) ||
      ((uint)DAT_10015000[2] < 0xac)) || ((code *)(ulong)(uint)DAT_10015000[0x2a] == (code *)0x0)) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x1001219d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)(ulong)(uint)DAT_10015000[0x2a])();
  return uVar1;
}

#undef DAT_10015000

#define abStack_13 (*(byte (*)[11])(frame + 29))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100121b0
 */

void recovered_100121b0(long param_1,ulong param_2,char *param_3,long param_4)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  bool bVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  char cVar7;

  if (param_4 == 0) {
    return;
  }
  if (param_1 == 0) {
    uVar3 = *(uint *)(param_4 + 0x10);
    if (uVar3 != 0) goto LAB_10012288;
  }
  else {
    uVar5 = 0;
    do {
      uVar6 = uVar5;
      uVar5 = uVar6 + 1;
    } while (*(char *)(param_1 + uVar6) != '\0');
    if (uVar5 < param_2) {
      *(undefined1 *)(param_1 + -1 + uVar5) = 0x20;
      uVar6 = uVar5;
    }
    *(undefined1 *)(param_1 + uVar6) = 0;
    uVar5 = 0;
    do {
      uVar6 = uVar5;
      uVar5 = uVar6 + 1;
    } while (*(char *)(param_1 + uVar6) != '\0');
    if (param_3 != (char *)0x0) {
      cVar7 = *param_3;
      if (uVar6 + 1 < param_2 && cVar7 != '\0') {
        do {
          param_3 = param_3 + 1;
          *(char *)(param_1 + uVar6) = cVar7;
          cVar7 = *param_3;
          uVar5 = uVar6 + 1;
          if (cVar7 == '\0') break;
          uVar4 = uVar6 + 2;
          uVar6 = uVar5;
        } while (uVar4 < param_2);
      }
      else {
        uVar5 = uVar6;
      }
      *(undefined1 *)(param_1 + uVar5) = 0;
    }
    uVar5 = 0;
    do {
      uVar6 = uVar5;
      uVar5 = uVar6 + 1;
    } while (*(char *)(param_1 + uVar6) != '\0');
    if (uVar5 < param_2) {
      *(undefined1 *)(param_1 + -1 + uVar5) = 0x3d;
      uVar6 = uVar5;
    }
    *(undefined1 *)(param_1 + uVar6) = 0;
    uVar3 = *(uint *)(param_4 + 0x10);
    if (uVar3 == 0) {
      uVar5 = 0;
      do {
        pcVar1 = (char *)(param_1 + uVar5);
        uVar5 = uVar5 + 1;
      } while (*pcVar1 != '\0');
      if (uVar5 < param_2) {
        *(undefined2 *)(param_1 + -1 + uVar5) = 0x30;
      }
    }
    else {
LAB_10012288:
      uVar5 = 0;
      do {
        abStack_13[uVar5 + 1] = (char)uVar3 + (char)(uVar3 / 10) * -10 | 0x30;
        uVar6 = uVar5 + 1;
        if (8 < uVar5) break;
        bVar2 = 9 < uVar3;
        uVar5 = uVar6;
        uVar3 = uVar3 / 10;
      } while (bVar2);
LAB_100122d8:
      do {
        uVar5 = uVar6 - 1;
        if (param_1 == 0) {
          uVar6 = uVar5;
          if (uVar5 == 0) goto LAB_1001236d;
          goto LAB_100122d8;
        }
        uVar4 = 0;
        do {
          pcVar1 = (char *)(param_1 + uVar4);
          uVar4 = uVar4 + 1;
        } while (*pcVar1 != '\0');
        if (uVar4 < param_2) {
          *(byte *)(param_1 + -1 + uVar4) = abStack_13[uVar6];
          *(undefined1 *)(param_1 + uVar4) = 0;
        }
        uVar6 = uVar5;
      } while (uVar5 != 0);
      if (param_1 == 0) goto LAB_1001236d;
    }
    uVar5 = 0;
    do {
      uVar6 = uVar5;
      uVar5 = uVar6 + 1;
    } while (*(char *)(param_1 + uVar6) != '\0');
    if (uVar5 < param_2) {
      *(undefined1 *)(param_1 + -1 + uVar5) = 0x78;
      uVar6 = uVar5;
    }
    *(undefined1 *)(param_1 + uVar6) = 0;
  }
LAB_1001236d:
  if (*(uint *)(param_4 + 0x14) == 0) {
    if (param_1 == 0) goto LAB_1001245d;
    uVar5 = 0;
    do {
      pcVar1 = (char *)(param_1 + uVar5);
      uVar5 = uVar5 + 1;
    } while (*pcVar1 != '\0');
    if (uVar5 < param_2) {
      *(undefined2 *)(param_1 + -1 + uVar5) = 0x30;
    }
  }
  else {
    uVar5 = 0;
    uVar3 = *(uint *)(param_4 + 0x14);
    do {
      abStack_13[uVar5 + 1] = (char)uVar3 + (char)(uVar3 / 10) * -10 | 0x30;
      uVar6 = uVar5 + 1;
      if (8 < uVar5) break;
      bVar2 = 9 < uVar3;
      uVar5 = uVar6;
      uVar3 = uVar3 / 10;
    } while (bVar2);
LAB_100123c8:
    do {
      uVar5 = uVar6 - 1;
      if (param_1 == 0) {
        uVar6 = uVar5;
        if (uVar5 == 0) goto LAB_1001245d;
        goto LAB_100123c8;
      }
      uVar4 = 0;
      do {
        pcVar1 = (char *)(param_1 + uVar4);
        uVar4 = uVar4 + 1;
      } while (*pcVar1 != '\0');
      if (uVar4 < param_2) {
        *(byte *)(param_1 + -1 + uVar4) = abStack_13[uVar6];
        *(undefined1 *)(param_1 + uVar4) = 0;
      }
      uVar6 = uVar5;
    } while (uVar5 != 0);
    if (param_1 == 0) goto LAB_1001245d;
  }
  uVar5 = 0;
  do {
    uVar6 = uVar5;
    uVar5 = uVar6 + 1;
  } while (*(char *)(param_1 + uVar6) != '\0');
  if (uVar5 < param_2) {
    *(undefined1 *)(param_1 + -1 + uVar5) = 0x78;
    uVar6 = uVar5;
  }
  *(undefined1 *)(param_1 + uVar6) = 0;
LAB_1001245d:
  if (*(uint *)(param_4 + 0x18) == 0) {
    if (param_1 != 0) {
      uVar5 = 0;
      do {
        pcVar1 = (char *)(param_1 + uVar5);
        uVar5 = uVar5 + 1;
      } while (*pcVar1 != '\0');
      if (uVar5 < param_2) {
        *(undefined2 *)(param_1 + -1 + uVar5) = 0x30;
      }
    }
  }
  else {
    uVar5 = 0;
    uVar3 = *(uint *)(param_4 + 0x18);
    do {
      abStack_13[uVar5 + 1] = (char)uVar3 + (char)(uVar3 / 10) * -10 | 0x30;
      uVar6 = uVar5 + 1;
      if (8 < uVar5) break;
      bVar2 = 9 < uVar3;
      uVar5 = uVar6;
      uVar3 = uVar3 / 10;
    } while (bVar2);
    do {
      if (param_1 != 0) {
        uVar5 = 0;
        do {
          pcVar1 = (char *)(param_1 + uVar5);
          uVar5 = uVar5 + 1;
        } while (*pcVar1 != '\0');
        if (uVar5 < param_2) {
          *(byte *)(param_1 + -1 + uVar5) = abStack_13[uVar6];
          *(undefined1 *)(param_1 + uVar5) = 0;
        }
      }
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  return;
}

#undef abStack_13

#define local_68 (*(long *)(frame + 24))
#define local_60 (*(long *)(frame + 32))
#define local_48 (*(long *)(frame + 56))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10012510
 */

bool recovered_10012510(long param_1,uint param_2)

{
  unsigned char frame[160] __attribute__((aligned(16))) = {0};

  long lVar1;
  long lVar2;
  uint *puVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  long lVar13;
  undefined1 uVar14;
  ulong uVar15;
  uint uVar16;
  int iVar17;
  long lVar18;
  undefined1 uVar19;
  ulong uVar20;
  long lVar21;
  uint uVar22;
  uint uVar23;
  undefined1 uVar24;
  undefined1 uVar25;
  uint uVar26;
  long lVar27;
  long lVar28;
  uint uVar29;
  ulong uVar30;
  ulong uVar31;
  undefined1 *puVar32;
  ulong uVar33;
  long lVar34;
  uint uVar35;
  ulong uVar36;
  bool bVar37;

  bVar37 = false;
  if (param_2 != 0 && param_1 != 0) {
    uVar33 = 0;
    bVar37 = false;
    do {
      lVar1 = param_1 + uVar33 * 0x70;
      iVar17 = *(int *)(param_1 + uVar33 * 0x70);
      if (iVar17 == 3) {
        if (*(int *)(lVar1 + 0x20) != 1) break;
        uVar26 = *(uint *)(lVar1 + 0x14);
        if (uVar26 == 0) break;
        uVar12 = *(uint *)(lVar1 + 0x18);
        if ((uVar12 == 0) || ((ulong)*(uint *)(lVar1 + 0x1c) < (ulong)uVar26 * 4)) break;
        uVar23 = *(uint *)(lVar1 + 0x38);
        if ((((ulong)*(uint *)(lVar1 + 0x10) != 0) &&
            ((ulong)*(uint *)(lVar1 + 0x10) < (ulong)*(uint *)(lVar1 + 0x1c) * (ulong)uVar12)) ||
           (*(int *)(lVar1 + 8) == 0)) break;
        uVar9 = *(uint *)(lVar1 + 0x40);
        uVar22 = *(uint *)(lVar1 + 0x44);
        uVar16 = *(uint *)(lVar1 + 0x50);
        uVar10 = uVar9;
        if ((int)uVar16 < (int)uVar9) {
          uVar10 = uVar16;
        }
        uVar5 = *(uint *)(lVar1 + 0x54);
        uVar35 = uVar9;
        if (uVar16 - uVar9 != 0 && (int)uVar9 <= (int)uVar16) {
          uVar35 = uVar16;
        }
        uVar11 = uVar22;
        if ((int)uVar5 < (int)uVar22) {
          uVar11 = uVar5;
        }
        uVar29 = uVar22;
        if (uVar5 - uVar22 != 0 && (int)uVar22 <= (int)uVar5) {
          uVar29 = uVar5;
        }
        uVar6 = *(uint *)(lVar1 + 0x60);
        if ((int)uVar6 < (int)uVar10) {
          uVar10 = uVar6;
        }
        uVar7 = *(uint *)(lVar1 + 100);
        if ((int)uVar7 < (int)uVar11) {
          uVar11 = uVar7;
        }
        if ((int)uVar35 < (int)uVar6) {
          uVar35 = uVar6;
        }
        if ((int)uVar29 < (int)uVar7) {
          uVar29 = uVar7;
        }
        if ((((-1 < (int)uVar35) && (-1 < (int)uVar29)) && ((int)uVar10 < (int)uVar26)) &&
           ((int)uVar11 < (int)uVar12)) {
          if ((int)uVar10 < 1) {
            uVar10 = 0;
          }
          if ((int)uVar11 < 1) {
            uVar11 = 0;
          }
          uVar8 = uVar26 - 1;
          if ((int)uVar35 < (int)uVar26) {
            uVar8 = uVar35;
          }
          uVar26 = uVar12 - 1;
          if ((int)uVar29 < (int)uVar12) {
            uVar26 = uVar29;
          }
          lVar13 = (long)(int)(uVar5 - uVar22);
          lVar18 = (long)(int)(uVar16 - uVar9);
          if (((int)(uVar6 - uVar9) * lVar13 != (int)(uVar7 - uVar22) * lVar18) &&
             ((int)uVar11 <= (int)uVar26)) {
            lVar27 = CONCAT44(*(undefined4 *)(lVar1 + 0xc),*(int *)(lVar1 + 8));
            local_68 = (int)(uVar10 - uVar9) * lVar13 - (int)(uVar11 - uVar22) * lVar18;
            local_60 = (long)(int)(uVar10 - uVar6) * (long)(int)(uVar22 - uVar7) -
                       (long)(int)(uVar11 - uVar7) * (long)(int)(uVar9 - uVar6);
            local_48 = (long)(int)(uVar10 - uVar16) * (long)(int)(uVar7 - uVar5) -
                       (long)(int)(uVar11 - uVar5) * (long)(int)(uVar6 - uVar16);
            uVar30 = (ulong)uVar11;
            do {
              if ((int)uVar10 <= (int)uVar8) {
                lVar28 = *(uint *)(lVar1 + 0x1c) * uVar30;
                lVar2 = lVar27 + lVar28;
                uVar20 = lVar28 + lVar27;
                lVar28 = local_48;
                lVar21 = local_68;
                lVar34 = local_60;
                uVar36 = (ulong)uVar10;
                do {
                  if ((((-1 < lVar28) && (-1 < lVar34)) && (-1 < lVar21)) ||
                     (((lVar28 < 1 && (lVar34 < 1)) && (lVar21 < 1)))) {
                    if ((uVar20 & 3) == 0) {
                      *(uint *)(lVar2 + uVar36 * 4) =
                           uVar23 >> 0x18 | (uVar23 & 0xff0000) >> 8 | (uVar23 & 0xff00) << 8 |
                           uVar23 << 0x18;
                    }
                    else {
                      *(char *)(lVar2 + uVar36 * 4) = (char)(uVar23 >> 0x18);
                      *(char *)(lVar2 + 1 + uVar36 * 4) = (char)(uVar23 >> 0x10);
                      *(char *)(lVar2 + 2 + uVar36 * 4) = (char)(uVar23 >> 8);
                      *(char *)(lVar2 + 3 + uVar36 * 4) = (char)uVar23;
                    }
                  }
                  lVar28 = lVar28 + (int)(uVar7 - uVar5);
                  lVar34 = lVar34 + (int)(uVar22 - uVar7);
                  lVar21 = lVar21 + lVar13;
                  uVar36 = uVar36 + 1;
                  uVar20 = uVar20 + 4;
                } while (uVar8 + 1 != uVar36);
              }
              local_48 = local_48 - (int)(uVar6 - uVar16);
              local_60 = local_60 - (int)(uVar9 - uVar6);
              local_68 = local_68 - lVar18;
              uVar30 = uVar30 + 1;
            } while (uVar30 != uVar26 + 1);
          }
        }
      }
      else if (iVar17 == 2) {
        if (*(int *)(lVar1 + 0x20) != 1) break;
        uVar26 = *(uint *)(lVar1 + 0x14);
        if (uVar26 == 0) break;
        uVar12 = *(uint *)(lVar1 + 0x18);
        if ((uVar12 == 0) || ((ulong)*(uint *)(lVar1 + 0x1c) < (ulong)uVar26 * 4)) break;
        uVar23 = *(uint *)(lVar1 + 0x28);
        uVar9 = *(uint *)(lVar1 + 0x2c);
        uVar22 = *(uint *)(lVar1 + 0x38);
        if ((((ulong)*(uint *)(lVar1 + 0x10) != 0) &&
            ((ulong)*(uint *)(lVar1 + 0x10) < (ulong)*(uint *)(lVar1 + 0x1c) * (ulong)uVar12)) ||
           (((*(int *)(lVar1 + 0x34) < 1 || (*(int *)(lVar1 + 0x30) < 1)) ||
            (*(int *)(lVar1 + 8) == 0)))) break;
        uVar16 = *(int *)(lVar1 + 0x30) + uVar23;
        if ((((0 < (int)uVar16) && (uVar10 = *(int *)(lVar1 + 0x34) + uVar9, 0 < (int)uVar10)) &&
            ((int)uVar23 < (int)uVar26)) && ((int)uVar9 < (int)uVar12)) {
          uVar30 = (ulong)uVar23;
          if ((int)uVar23 < 1) {
            uVar30 = 0;
          }
          uVar23 = (uint)uVar30;
          if ((int)uVar9 < 1) {
            uVar9 = 0;
          }
          if ((int)uVar26 <= (int)uVar16) {
            uVar16 = uVar26;
          }
          if ((int)uVar10 < (int)uVar12) {
            uVar12 = uVar10;
          }
          if ((int)uVar9 < (int)uVar12) {
            uVar26 = uVar22 >> 0x18 | (uVar22 & 0xff0000) >> 8 | (uVar22 & 0xff00) << 8 |
                     uVar22 << 0x18;
            lVar18 = CONCAT44(*(undefined4 *)(lVar1 + 0xc),*(int *)(lVar1 + 8));
            uVar31 = (ulong)uVar9;
            uVar36 = (ulong)(~uVar23 + uVar16) + 1;
            uVar20 = uVar36 & 0xfffffffffffffff8;
            do {
              lVar13 = *(uint *)(lVar1 + 0x1c) * uVar31;
              puVar32 = (undefined1 *)(lVar18 + uVar30 * 4 + lVar13);
              if (((ulong)puVar32 & 3) == 0) {
                if ((int)uVar23 < (int)uVar16) {
                  if (~uVar23 + uVar16 < 7) {
                    uVar9 = uVar23;
                  }
                  else {
                    puVar32 = puVar32 + uVar20 * 4;
                    lVar13 = lVar13 + lVar18 + uVar30 * 4 + 0x10;
                    uVar15 = 0;
                    do {
                      puVar3 = (uint *)(lVar13 + -0x10 + uVar15 * 4);
                      *puVar3 = uVar26;
                      puVar3[1] = uVar26;
                      puVar3[2] = uVar26;
                      puVar3[3] = uVar26;
                      puVar3 = (uint *)(lVar13 + uVar15 * 4);
                      *puVar3 = uVar26;
                      puVar3[1] = uVar26;
                      puVar3[2] = uVar26;
                      puVar3[3] = uVar26;
                      uVar15 = uVar15 + 8;
                    } while (uVar20 != uVar15);
                    uVar9 = (int)uVar20 + uVar23;
                    if (uVar36 == uVar20) goto LAB_100128f0;
                  }
                  lVar13 = 0;
                  do {
                    *(uint *)(puVar32 + lVar13 * 4) = uVar26;
                    lVar13 = lVar13 + 1;
                  } while (uVar16 - uVar9 != (int)lVar13);
                }
              }
              else if ((int)uVar23 < (int)uVar16) {
                uVar14 = (undefined1)(uVar22 >> 0x18);
                uVar24 = (undefined1)(uVar22 >> 0x10);
                uVar25 = (undefined1)(uVar22 >> 8);
                uVar19 = (undefined1)uVar22;
                uVar15 = uVar30;
                if ((uVar16 - uVar23 & 1) != 0) {
                  if (lVar18 != 0) {
                    *puVar32 = uVar14;
                    puVar32[1] = uVar24;
                    puVar32[2] = uVar25;
                    puVar32[3] = uVar19;
                  }
                  puVar32 = puVar32 + 4;
                  uVar15 = (ulong)(uVar23 + 1);
                }
                if (uVar16 != uVar23 + 1) {
                  iVar17 = uVar16 - (int)uVar15;
                  do {
                    if (puVar32 != (undefined1 *)0x0) {
                      *puVar32 = uVar14;
                      puVar32[1] = uVar24;
                      puVar32[2] = uVar25;
                      puVar32[3] = uVar19;
                    }
                    puVar32[4] = uVar14;
                    puVar32[5] = uVar24;
                    puVar32[6] = uVar25;
                    puVar32[7] = uVar19;
                    puVar32 = puVar32 + 8;
                    iVar17 = iVar17 + -2;
                  } while (iVar17 != 0);
                }
              }
LAB_100128f0:
              uVar31 = uVar31 + 1;
            } while (uVar31 != uVar12);
          }
        }
      }
      else {
        if ((iVar17 != 1) || (*(int *)(lVar1 + 0x20) != 1)) break;
        uVar26 = *(uint *)(lVar1 + 0x14);
        if (uVar26 == 0) break;
        uVar12 = *(uint *)(lVar1 + 0x18);
        if ((uVar12 == 0) || ((ulong)*(uint *)(lVar1 + 0x1c) < (ulong)uVar26 * 4)) break;
        uVar23 = *(uint *)(lVar1 + 0x38);
        if ((((ulong)*(uint *)(lVar1 + 0x10) != 0) &&
            ((ulong)*(uint *)(lVar1 + 0x10) < (ulong)*(uint *)(lVar1 + 0x1c) * (ulong)uVar12)) ||
           ((((int)uVar12 < 1 || ((int)uVar26 < 1)) || (iVar17 = *(int *)(lVar1 + 8), iVar17 == 0)))
           ) break;
        uVar9 = uVar23 >> 0x18 | (uVar23 & 0xff0000) >> 8 | (uVar23 & 0xff00) << 8 | uVar23 << 0x18;
        uVar4 = *(undefined4 *)(lVar1 + 0xc);
        uVar22 = uVar26 & 0x7ffffff8;
        uVar30 = 0;
        do {
          lVar18 = *(uint *)(lVar1 + 0x1c) * uVar30;
          puVar32 = (undefined1 *)(CONCAT44(uVar4,iVar17) + lVar18);
          if (((ulong)puVar32 & 3) == 0) {
            uVar16 = 0;
            if (7 < uVar26) {
              puVar32 = puVar32 + (ulong)uVar22 * 4;
              lVar18 = lVar18 + CONCAT44(uVar4,iVar17) + 0x10;
              lVar13 = 0;
              do {
                puVar3 = (uint *)(lVar18 + -0x10 + lVar13);
                *puVar3 = uVar9;
                puVar3[1] = uVar9;
                puVar3[2] = uVar9;
                puVar3[3] = uVar9;
                puVar3 = (uint *)(lVar18 + lVar13);
                *puVar3 = uVar9;
                puVar3[1] = uVar9;
                puVar3[2] = uVar9;
                puVar3[3] = uVar9;
                lVar13 = lVar13 + 0x20;
              } while ((ulong)(uVar26 >> 3 & 0xfffffff) * 0x20 != lVar13);
              uVar16 = uVar22;
              if (uVar22 == uVar26) goto LAB_100126a0;
            }
            lVar18 = 0;
            do {
              *(uint *)(puVar32 + lVar18 * 4) = uVar9;
              lVar18 = lVar18 + 1;
            } while (uVar26 - uVar16 != (int)lVar18);
          }
          else {
            uVar24 = (undefined1)uVar23;
            uVar14 = (undefined1)(uVar23 >> 8);
            uVar25 = (undefined1)(uVar23 >> 0x10);
            uVar19 = (undefined1)(uVar23 >> 0x18);
            uVar16 = uVar26 & 0x7ffffffe;
            if (uVar26 != 1) {
              do {
                if (puVar32 != (undefined1 *)0x0) {
                  *puVar32 = uVar19;
                  puVar32[1] = uVar25;
                  puVar32[2] = uVar14;
                  puVar32[3] = uVar24;
                }
                puVar32[4] = uVar19;
                puVar32[5] = uVar25;
                puVar32[6] = uVar14;
                puVar32[7] = uVar24;
                puVar32 = puVar32 + 8;
                uVar16 = uVar16 - 2;
              } while (uVar16 != 0);
            }
            if (((uVar26 & 1) != 0) && (puVar32 != (undefined1 *)0x0)) {
              *puVar32 = uVar19;
              puVar32[1] = uVar25;
              puVar32[2] = uVar14;
              puVar32[3] = uVar24;
            }
          }
LAB_100126a0:
          uVar30 = uVar30 + 1;
        } while (uVar30 != uVar12);
      }
      uVar33 = uVar33 + 1;
      bVar37 = param_2 <= uVar33;
    } while (uVar33 != param_2);
  }
  return bVar37;
}

#undef local_68
#undef local_60
#undef local_48

void bzero(void *p,size_t n){volatile unsigned char *d=p;while(n--)*d++=0;}
void __bzero(void *p,size_t n){bzero(p,n);}
void *memset(void *p,int value,size_t n){volatile unsigned char *d=p;while(n--)*d++=value;return p;}
