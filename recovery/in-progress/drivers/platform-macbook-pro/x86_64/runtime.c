/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_10014000
#define DAT_10014000 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1318U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000480
 */

void * recovered_10000480(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return &DAT_10014000;
}

#undef DAT_10014000

#undef DAT_10012cf0
#define DAT_10012cf0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8U)))
#undef DAT_10012fe1
#define DAT_10012fe1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2f9U)))
#undef DAT_10013096
#define DAT_10013096 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3aeU)))
#undef DAT_10015000
#define DAT_10015000 (*(int * *)(((uintptr_t)pf_module_state + 0x2318U)))
#undef UNK_10012cf4
#define UNK_10012cf4 (*(int *)(((uintptr_t)pf_module_state + 0xcU)))
#undef UNK_10012cf8
#define UNK_10012cf8 (*(int *)(((uintptr_t)pf_module_state + 0x10U)))
#undef UNK_10012cfc
#define UNK_10012cfc (*(int *)(((uintptr_t)pf_module_state + 0x14U)))
#undef _DAT_10012cf0
#define _DAT_10012cf0 (*(uint *)(((uintptr_t)pf_module_state + 0x8U)))
#undef iRam0000000010012cf4
#define iRam0000000010012cf4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0xcU)))
#undef iRam0000000010012cf8
#define iRam0000000010012cf8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x10U)))
#undef iRam0000000010012cfc
#define iRam0000000010012cfc (*(uint32_t *)(((uintptr_t)pf_module_state + 0x14U)))
#undef str_10012d18
#define str_10012d18 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x30U)))
#undef str_10012d36
#define str_10012d36 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4eU)))
#undef str_10012d57
#define str_10012d57 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6fU)))
#undef str_10012d77
#define str_10012d77 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x8fU)))
#undef str_10012d9c
#define str_10012d9c (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb4U)))
#undef str_10012dc2
#define str_10012dc2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xdaU)))
#undef str_10012de7
#define str_10012de7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xffU)))
#undef str_10012e04
#define str_10012e04 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x11cU)))
#undef str_10012f4d
#define str_10012f4d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x265U)))
#undef str_10012fe6
#define str_10012fe6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2feU)))
#undef str_10012fec
#define str_10012fec (*(char (*)[1])(((uintptr_t)pf_module_state + 0x304U)))
#undef str_10013000
#define str_10013000 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x318U)))
#undef str_1001300c
#define str_1001300c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x324U)))
#undef str_10013016
#define str_10013016 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x32eU)))
#undef str_10013022
#define str_10013022 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x33aU)))
#undef str_1001302e
#define str_1001302e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x346U)))
#undef str_1001305c
#define str_1001305c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x374U)))
#undef str_10013066
#define str_10013066 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x37eU)))
#undef str_1001307b
#define str_1001307b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x393U)))
#undef str_10013088
#define str_10013088 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3a0U)))
#undef str_1001309f
#define str_1001309f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3b7U)))
#undef str_100130a9
#define str_100130a9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3c1U)))
#undef str_100130b5
#define str_100130b5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3cdU)))
#undef str_100130c7
#define str_100130c7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3dfU)))
#undef str_100130d6
#define str_100130d6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3eeU)))
#undef str_100130f4
#define str_100130f4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x40cU)))
#undef str_10013102
#define str_10013102 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x41aU)))
#undef str_1001310d
#define str_1001310d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x425U)))
#undef str_1001311e
#define str_1001311e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x436U)))
#undef str_1001312e
#define str_1001312e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x446U)))
#undef str_10013138
#define str_10013138 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x450U)))
#undef str_10013144
#define str_10013144 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x45cU)))
#undef str_1001315b
#define str_1001315b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x473U)))
#undef str_10013183
#define str_10013183 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x49bU)))
#undef str_1001318d
#define str_1001318d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4a5U)))
#undef str_100131a5
#define str_100131a5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4bdU)))
#undef str_100131c0
#define str_100131c0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4d8U)))
#undef str_100131ec
#define str_100131ec (*(char (*)[1])(((uintptr_t)pf_module_state + 0x504U)))
#undef str_1001320c
#define str_1001320c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x524U)))
#undef str_1001323d
#define str_1001323d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x555U)))
#undef str_1001324a
#define str_1001324a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x562U)))
#undef str_1001325c
#define str_1001325c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x574U)))
#undef str_10013266
#define str_10013266 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x57eU)))
#undef str_10013273
#define str_10013273 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x58bU)))
#undef str_10013280
#define str_10013280 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x598U)))
#undef str_10013291
#define str_10013291 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5a9U)))
#undef str_100132a1
#define str_100132a1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5b9U)))
#undef str_100132ae
#define str_100132ae (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5c6U)))
#undef str_100132bb
#define str_100132bb (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5d3U)))
#undef str_100132c7
#define str_100132c7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5dfU)))
#undef str_100132d0
#define str_100132d0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5e8U)))
#undef str_100132e3
#define str_100132e3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5fbU)))
#undef str_100136bf
#define str_100136bf (*(char (*)[1])(((uintptr_t)pf_module_state + 0x9d7U)))
#undef str_100136ed
#define str_100136ed (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa05U)))
#undef str_100136fc
#define str_100136fc (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa14U)))
#undef str_1001373a
#define str_1001373a (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa52U)))
#undef str_10013761
#define str_10013761 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa79U)))
#undef str_10013782
#define str_10013782 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa9aU)))
#undef str_100137ae
#define str_100137ae (*(char (*)[1])(((uintptr_t)pf_module_state + 0xac6U)))
#undef str_100137c5
#define str_100137c5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xaddU)))
#undef str_100137e2
#define str_100137e2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xafaU)))
#undef str_100137fa
#define str_100137fa (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb12U)))
#undef str_10013818
#define str_10013818 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb30U)))
#undef str_10013837
#define str_10013837 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb4fU)))
#undef str_10013849
#define str_10013849 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb61U)))
#undef str_1001386b
#define str_1001386b (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb83U)))
#undef str_10013887
#define str_10013887 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb9fU)))
#undef str_100138ab
#define str_100138ab (*(char (*)[1])(((uintptr_t)pf_module_state + 0xbc3U)))
#undef str_100138c0
#define str_100138c0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xbd8U)))
#undef str_100138d6
#define str_100138d6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xbeeU)))
#undef str_100138ef
#define str_100138ef (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc07U)))
#undef str_10013943
#define str_10013943 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc5bU)))
#undef str_1001394f
#define str_1001394f (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc67U)))
#undef str_1001399c
#define str_1001399c (*(char (*)[1])(((uintptr_t)pf_module_state + 0xcb4U)))
#undef str_100139c1
#define str_100139c1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xcd9U)))
#undef str_100139d8
#define str_100139d8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xcf0U)))
#undef str_10013a47
#define str_10013a47 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xd5fU)))
#undef str_10013a56
#define str_10013a56 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xd6eU)))
#undef str_10013a69
#define str_10013a69 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xd81U)))
#undef str_10013aa5
#define str_10013aa5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xdbdU)))
#undef str_10013acc
#define str_10013acc (*(char (*)[1])(((uintptr_t)pf_module_state + 0xde4U)))
#undef str_10013ae7
#define str_10013ae7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xdffU)))
#undef str_10013b32
#define str_10013b32 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xe4aU)))
#undef str_10013b5b
#define str_10013b5b (*(char (*)[1])(((uintptr_t)pf_module_state + 0xe73U)))
#undef str_10013b74
#define str_10013b74 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xe8cU)))
#undef str_10013b90
#define str_10013b90 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xea8U)))
#undef str_10013b9b
#define str_10013b9b (*(char (*)[1])(((uintptr_t)pf_module_state + 0xeb3U)))
#undef str_10013bc5
#define str_10013bc5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xeddU)))
#define uStack_1d4 (*(undefined4 *)(frame + 1180))
#define iStack_1d0 (*(int *)(frame + 1184))
#define uStack_1cc (*(undefined4 *)(frame + 1188))
#define uStack_1c0 (*(undefined8 *)(frame + 1200))
#define uStack_1b0 (*(undefined8 *)(frame + 1216))
#define uStack_1a0 (*(undefined8 *)(frame + 1232))
#define local_658 (*(byte (*)[100])(frame + 24))
#define uStack_190 (*(undefined8 *)(frame + 1248))
#define local_5f4 (*(uint *)(frame + 124))
#define local_5b0 (*(byte * *)(frame + 192))
#define uStack_180 (*(undefined8 *)(frame + 1264))
#define local_5a8 (*(uint (*)[16])(frame + 200))
#define uStack_170 (*(undefined8 *)(frame + 1280))
#define uStack_160 (*(undefined8 *)(frame + 1296))
#define local_568 (*(undefined8 *)(frame + 264))
#define local_558 (*(int *)(frame + 280))
#define uStack_150 (*(undefined8 *)(frame + 1312))
#define local_548 (*(undefined2 *)(frame + 296))
#define acStack_46 (*(char (*)[2])(frame + 1578))
#define local_546 (*(undefined1 (*)[778])(frame + 298))
#define local_23c (*(uint *)(frame + 1076))
#define local_238 (*(uint *)(frame + 1080))
#define local_234 (*(uint *)(frame + 1084))
#define local_230 (*(uint *)(frame + 1088))
#define local_22c (*(uint *)(frame + 1092))
#define local_228 (*(uint *)(frame + 1096))
#define local_224 (*(uint *)(frame + 1100))
#define local_220 (*(undefined8 *)(frame + 1104))
#define local_214 (*(undefined4 *)(frame + 1116))
#define local_210 (*(undefined4 *)(frame + 1120))
#define local_208 (*(undefined4 *)(frame + 1128))
#define local_204 (*(int *)(frame + 1132))
#define local_200 (*(int *)(frame + 1136))
#define local_1fc (*(int *)(frame + 1140))
#define local_1dc (*(undefined4 *)(frame + 1172))
#define local_1d8 (*(undefined4 *)(frame + 1176))
#define local_1c8 (*(undefined8 *)(frame + 1192))
#define local_1b8 (*(undefined8 *)(frame + 1208))
#define local_1a8 (*(undefined8 *)(frame + 1224))
#define local_198 (*(undefined8 *)(frame + 1240))
#define local_188 (*(undefined8 *)(frame + 1256))
#define local_178 (*(undefined8 *)(frame + 1272))
#define local_168 (*(undefined8 *)(frame + 1288))
#define local_158 (*(undefined8 *)(frame + 1304))
#define local_4c (*(uint *)(frame + 1572))
#define local_44 (*(undefined4 *)(frame + 1580))
#define local_38 (*(int * *)(frame + 1592))
#define uStack_660 (*(undefined8 *)(frame + 16))
#define uStack_560 (*(undefined8 *)(frame + 272))
#define cStack_549 (*(char *)(frame + 295))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000490
 */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int recovered_10000490(int *api)

{
  unsigned char frame[1680] __attribute__((aligned(16))) = {0};

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
    pcVar13 = str_10012d18;
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
        local_658[uVar14 + 1] = (char)uVar9 + (char)(uVar9 / 10) * -10 | 0x30;
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
          *(byte *)((long)&local_1d8 + uVar20) = local_658[uVar14 + 1];
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
          *(byte *)((long)&local_1d8 + uVar14) = local_658[uVar9 - 1];
          *(undefined1 *)((long)&local_1d8 + uVar14 + 1) = 0;
        }
        lVar1 = uVar9 - 2;
        uVar9 = uVar9 - 2;
        uVar8 = 0;
        do {
          uVar14 = uVar8;
          uVar8 = uVar14 + 1;
        } while (*(char *)((long)&local_1d8 + uVar14) != '\0');
        uVar8 = uVar9;
        if (uVar14 + 1 < 0x70) {
          *(byte *)((long)&local_1d8 + uVar14) = local_658[lVar1];
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
      local_658[uVar14 + 1] = (char)uVar12 + (char)(uVar12 / 10) * -10 | 0x30;
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
        *(byte *)((long)&local_1d8 + uVar10) = local_658[uVar14 + 1];
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
        *(byte *)((long)&local_1d8 + uVar14) = local_658[uVar20 - 1];
        *(undefined1 *)((long)&local_1d8 + uVar14 + 1) = 0;
      }
      lVar1 = uVar20 - 2;
      uVar20 = uVar20 - 2;
      uVar8 = 0;
      do {
        uVar14 = uVar8;
        uVar8 = uVar14 + 1;
      } while (*(char *)((long)&local_1d8 + uVar14) != '\0');
      uVar8 = uVar20;
      if (uVar14 + 1 < 0x70) {
        *(byte *)((long)&local_1d8 + uVar14) = local_658[lVar1];
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
        local_658[uVar8 + 1] = (char)uVar12 + (char)(uVar12 / 10) * -10 | 0x30;
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
          *(byte *)((long)&local_1d8 + uVar20) = local_658[uVar8 + 1];
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
          *(byte *)((long)&local_1d8 + uVar8) = local_658[uVar14 - 1];
          *(undefined1 *)((long)&local_1d8 + uVar8 + 1) = 0;
        }
        lVar1 = uVar14 - 2;
        uVar14 = uVar14 - 2;
        uVar9 = 0;
        do {
          uVar8 = uVar9;
          uVar9 = uVar8 + 1;
        } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
        uVar9 = uVar14;
        if (uVar8 + 1 < 0x70) {
          *(byte *)((long)&local_1d8 + uVar8) = local_658[lVar1];
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
        local_658[uVar8 + 1] = (char)uVar7 + (char)(uVar7 / 10) * -10 | 0x30;
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
          *(byte *)((long)&local_1d8 + uVar20) = local_658[uVar8 + 1];
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
          *(byte *)((long)&local_1d8 + uVar8) = local_658[uVar14 - 1];
          *(undefined1 *)((long)&local_1d8 + uVar8 + 1) = 0;
        }
        lVar1 = uVar14 - 2;
        uVar14 = uVar14 - 2;
        uVar9 = 0;
        do {
          uVar8 = uVar9;
          uVar9 = uVar8 + 1;
        } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
        uVar9 = uVar14;
        if (uVar8 + 1 < 0x70) {
          *(byte *)((long)&local_1d8 + uVar8) = local_658[lVar1];
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
LAB_10000c76:
    bVar27 = true;
    if ((0x3f < (uint)api[2]) && ((code *)(ulong)(uint)api[0xf] != (code *)0x0)) {
      uStack_660 = 0x10000c93;
      iVar3 = (*(code *)(ulong)(uint)api[0xf])(local_658);
      bVar27 = iVar3 == 0;
    }
  }
  else {
    uStack_660 = 0x10000c6a;
    (*(code *)(ulong)(uint)api[10])(&local_1d8);
    bVar27 = true;
    if (*api == 0x54584b57) goto LAB_10000c76;
  }
  local_5a8[0] = 0;
  local_5a8[1] = 0;
  local_5a8[2] = 0;
  local_5a8[3] = 0;
  local_5a8[4] = 0;
  local_5a8[5] = 0;
  local_5a8[6] = 0;
  local_5a8[7] = 0;
  local_5a8[8] = 0;
  local_5a8[9] = 0;
  local_5a8[10] = 0;
  local_5a8[0xb] = 0;
  local_5a8[0xc] = 0;
  local_5a8[0xd] = 0;
  local_5a8[0xe] = 0;
  local_5a8[0xf] = 0;
  local_568 = 0;
  uStack_560 = 0;
  local_558 = 0;
  pbVar26 = local_658;
  if (bVar27) {
    pbVar26 = (byte *)0x0;
  }
  uStack_660 = 0x10000ce9;
  recovered_1000a070((long)pbVar26,(uint *)0x0,(undefined1 *)&local_548);
  if ((code *)(ulong)(uint)api[3] == (code *)0x0) {
    return 0;
  }
  uStack_660 = 0x10000d18;
  local_5b0 = pbVar26;
  iVar3 = (*(code *)(ulong)(uint)api[3])(str_10012d36,str_10012d57,&local_548);
  if (iVar3 == 0) {
    return 0;
  }
  if ((code *)(ulong)(uint)api[4] != (code *)0x0) {
    if (local_5f4 < 3) {
      local_5f4 = 2;
    }
    uVar16 = 0x40;
    if (local_5f4 < 0x40) {
      uVar16 = local_5f4;
    }
    if (bVar27) {
      uVar16 = 2;
    }
    uStack_660 = 0x10000d52;
    (*(code *)(ulong)(uint)api[4])(uVar16,uVar16 << 7);
  }
  if ((code *)(ulong)(uint)api[6] != (code *)0x0) {
    uStack_660 = 0x10000d7f;
    (*(code *)(ulong)(uint)api[6])(0x100,0x200,0x200);
  }
  local_4c = 0;
  local_38 = api;
  if (((*api == 0x54584b57) && (0x57 < (uint)api[2])) &&
     ((code *)(ulong)(uint)api[0x15] != (code *)0x0)) {
    uStack_660 = 0x10000db6;
    (*(code *)(ulong)(uint)api[0x15])(0x304,1,&local_4c);
    uVar12 = 8;
    uVar16 = 0;
    do {
      local_1d8 = 0;
      if (((*local_38 != 0x54584b57) || ((uint)local_38[2] < 0x58)) ||
         ((code *)(ulong)(uint)local_38[0x15] == (code *)0x0)) break;
      uStack_660 = 0x10001435;
      iVar3 = (*(code *)(ulong)(uint)local_38[0x15])(0x304,1,&local_1d8);
      if (iVar3 == 0) break;
      if ((local_1d8 & 4) == 0) goto LAB_10005346;
      if (((*local_38 == 0x54584b57) && (0x33 < (uint)local_38[2])) &&
         ((code *)(ulong)(uint)local_38[0xc] != (code *)0x0)) {
        uStack_660 = 0x1000147d;
        (*(code *)(ulong)(uint)local_38[0xc])(uVar12);
      }
      uVar12 = uVar12 << (uVar12 < 0x1000 && 9 < uVar16);
      uVar16 = uVar16 + 1;
    } while (uVar16 != 0x18);
    uVar12 = 8;
    uVar16 = 0;
    do {
      local_1d8 = 0;
      if (((*local_38 != 0x54584b57) || ((uint)local_38[2] < 0x58)) ||
         ((code *)(ulong)(uint)local_38[0x15] == (code *)0x0)) break;
      uStack_660 = 0x10005101;
      iVar3 = (*(code *)(ulong)(uint)local_38[0x15])(0x304,1,&local_1d8);
      if (iVar3 == 0) break;
      if ((local_1d8 & 2) == 0) {
        if (((*local_38 == 0x54584b57) && (0x5b < (uint)local_38[2])) &&
           ((code *)(ulong)(uint)local_38[0x16] != (code *)0x0)) {
          uStack_660 = 0x1000527d;
          iVar3 = (*(code *)(ulong)(uint)local_38[0x16])(0x304,1,0x10);
          if (iVar3 != 0) {
            uVar12 = 8;
            uVar16 = 0;
            goto LAB_100052b6;
          }
        }
        break;
      }
      if (((*local_38 == 0x54584b57) && (0x33 < (uint)local_38[2])) &&
         ((code *)(ulong)(uint)local_38[0xc] != (code *)0x0)) {
        uStack_660 = 0x10005149;
        (*(code *)(ulong)(uint)local_38[0xc])(uVar12);
      }
      uVar12 = uVar12 << (uVar12 < 0x1000 && 9 < uVar16);
      uVar16 = uVar16 + 1;
    } while (uVar16 != 0x18);
    goto LAB_10007f13;
  }
  uVar9 = 0;
  do {
    uVar8 = uVar9;
    uVar9 = uVar8 + 1;
  } while (local_546[uVar8 - 2] != '\0');
  if (uVar8 + 1 < 0x300) {
    cVar17 = ' ';
    pcVar13 = str_10012fec;
    do {
      pcVar13 = pcVar13 + 1;
      local_546[uVar8 - 2] = cVar17;
      uVar8 = uVar8 + 1;
      cVar17 = *pcVar13;
      if (cVar17 == '\0') break;
    } while (uVar8 < 0x2ff);
  }
  local_546[uVar8 - 2] = 0;
  goto LAB_10000e24;
  while( true ) {
    uStack_660 = 0x100052fd;
    iVar3 = (*(code *)(ulong)(uint)local_38[0x15])(0x304,1,&local_1d8);
    if (iVar3 == 0) break;
    if ((local_1d8 & 4) == 0) goto LAB_10005346;
    if (((*local_38 == 0x54584b57) && (0x33 < (uint)local_38[2])) &&
       ((code *)(ulong)(uint)local_38[0xc] != (code *)0x0)) {
      uStack_660 = 0x10005341;
      (*(code *)(ulong)(uint)local_38[0xc])(uVar12);
    }
    uVar12 = uVar12 << (uVar12 < 0x1000 && 9 < uVar16);
    uVar16 = uVar16 + 1;
    if (uVar16 == 0x18) break;
LAB_100052b6:
    local_1d8 = 0;
    if (((*local_38 != 0x54584b57) || ((uint)local_38[2] < 0x58)) ||
       ((code *)(ulong)(uint)local_38[0x15] == (code *)0x0)) break;
  }
  goto LAB_10007f13;
  while( true ) {
    uStack_660 = 0x100065cd;
    iVar3 = (*(code *)(ulong)(uint)local_38[0x15])(0x300,1,&local_210);
    if (iVar3 == 0) goto LAB_10007e72;
    acStack_46[local_220 + 2] = (byte)local_210;
    bVar27 = 2 < local_220;
    local_220 = local_220 + 1;
    if (local_220 == 4) break;
LAB_100064c4:
    local_210 = 0;
    iVar3 = 0;
    while( true ) {
      local_1d8 = 0;
      if (((*local_38 != 0x54584b57) || ((uint)local_38[2] < 0x58)) ||
         ((code *)(ulong)(uint)local_38[0x15] == (code *)0x0)) goto LAB_10007e72;
      uStack_660 = 0x10006543;
      iVar5 = (*(code *)(ulong)(uint)local_38[0x15])(0x304,1,&local_1d8);
      if (iVar5 == 0) goto LAB_10007e72;
      if ((local_1d8 & 1) != 0) break;
      if (((*local_38 == 0x54584b57) && (0x33 < (uint)local_38[2])) &&
         ((code *)(ulong)(uint)local_38[0xc] != (code *)0x0)) {
        uStack_660 = 0x10006587;
        (*(code *)(ulong)(uint)local_38[0xc])();
      }
      iVar3 = iVar3 + 1;
      if (iVar3 == 0x18) goto LAB_10007e72;
    }
    if (((*local_38 != 0x54584b57) || ((uint)local_38[2] < 0x58)) ||
       ((code *)(ulong)(uint)local_38[0x15] == (code *)0x0)) {
LAB_10007e72:
      if (!bVar27) goto LAB_10007f13;
      break;
    }
  }
  uVar9 = 0;
  do {
    uVar8 = uVar9;
    uVar9 = uVar8 + 1;
  } while (local_546[uVar8 - 2] != '\0');
  if (uVar8 + 1 < 0x300) {
    cVar17 = ' ';
    pcVar13 = str_10013016;
    do {
      pcVar13 = pcVar13 + 1;
      local_546[uVar8 - 2] = cVar17;
      uVar8 = uVar8 + 1;
      cVar17 = *pcVar13;
      if (cVar17 == '\0') break;
    } while (uVar8 < 0x2ff);
  }
  uVar16 = (local_44 >> 8 & 0xff) << 0x10 | local_44 << 0x18 | (local_44 >> 0x10 & 0xff) << 8 |
           local_44 >> 0x18;
  local_546[uVar8 - 2] = 0;
  uVar9 = 0;
  do {
    uVar8 = uVar9;
    uVar9 = uVar8 + 1;
  } while (local_546[uVar8 - 2] != '\0');
  if (uVar9 < 0x300) {
    local_546[uVar8 - 2] = 0x20;
    uVar8 = uVar9;
  }
  local_546[uVar8 - 2] = 0;
  uVar9 = 0xffffffffffffffff;
  do {
    uVar8 = uVar9;
    uVar9 = uVar8 + 1;
  } while (local_546[uVar8 - 1] != '\0');
  if (uVar8 + 2 < 0x300) {
    local_546[uVar8 - 1] = 0x73;
    bVar27 = uVar9 != 0x2fe;
    uVar9 = uVar8 + 2;
    if (bVar27) {
      uVar9 = uVar8 + 3;
      *(undefined1 *)((long)&local_548 + uVar8 + 2) = 0x6d;
      if (uVar9 < 0x2ff) {
        uVar9 = uVar8 + 4;
        local_546[uVar8 + 1] = 99;
        if (uVar9 < 0x2ff) {
          uVar9 = uVar8 + 5;
          local_546[uVar8 + 2] = 0x49;
          if (uVar9 < 0x2ff) {
            local_546[uVar8 + 3] = 0x6f;
            uVar9 = uVar8 + 6;
          }
        }
      }
    }
  }
  local_546[uVar9 - 2] = 0;
  uVar9 = 0;
  do {
    uVar8 = uVar9;
    uVar9 = uVar8 + 1;
  } while (local_546[uVar8 - 2] != '\0');
  if (uVar9 < 0x300) {
    local_546[uVar8 - 2] = 0x3d;
    uVar8 = uVar9;
  }
  local_546[uVar8 - 2] = 0;
  uVar9 = 0;
  do {
    uVar8 = uVar9;
    uVar9 = uVar8 + 1;
  } while (local_546[uVar8 - 2] != '\0');
  if (uVar8 + 1 < 0x300) {
    *(undefined2 *)(local_546 + (uVar8 - 2)) = 0x30;
  }
  uVar9 = 0;
  do {
    uVar8 = uVar9;
    uVar9 = uVar8 + 1;
  } while (local_546[uVar8 - 2] != '\0');
  if (uVar8 + 1 < 0x300) {
    *(undefined2 *)(local_546 + (uVar8 - 2)) = 0x30;
  }
  uVar9 = 0;
  do {
    uVar8 = uVar9;
    uVar9 = uVar8 + 1;
  } while (local_546[uVar8 - 2] != '\0');
  if (uVar8 + 1 < 0x300) {
    *(undefined2 *)(local_546 + (uVar8 - 2)) = 0x30;
  }
  uVar9 = 0;
  do {
    uVar8 = uVar9;
    uVar9 = uVar8 + 1;
  } while (local_546[uVar8 - 2] != '\0');
  if (uVar8 + 1 < 0x300) {
    *(undefined2 *)(local_546 + (uVar8 - 2)) = 0x30;
  }
  uVar9 = 0;
  do {
    uVar8 = uVar9;
    uVar9 = uVar8 + 1;
  } while (local_546[uVar8 - 2] != '\0');
  if (uVar8 + 1 < 0x300) {
    *(undefined2 *)(local_546 + (uVar8 - 2)) = 0x30;
  }
  uVar9 = 0;
  do {
    uVar8 = uVar9;
    uVar9 = uVar8 + 1;
  } while (local_546[uVar8 - 2] != '\0');
  if (uVar8 + 1 < 0x300) {
    *(undefined2 *)(local_546 + (uVar8 - 2)) = 0x33;
  }
  uVar9 = 0;
  do {
    uVar8 = uVar9;
    uVar9 = uVar8 + 1;
  } while (local_546[uVar8 - 2] != '\0');
  if (uVar8 + 1 < 0x300) {
    *(undefined2 *)(local_546 + (uVar8 - 2)) = 0x30;
  }
  uVar9 = 0;
  do {
    uVar8 = uVar9;
    uVar9 = uVar8 + 1;
  } while (local_546[uVar8 - 2] != '\0');
  if (uVar8 + 1 < 0x300) {
    *(undefined2 *)(local_546 + (uVar8 - 2)) = 0x30;
  }
  bVar18 = (byte)local_4c;
  uVar9 = 0;
  do {
    uVar8 = uVar9;
    uVar9 = uVar8 + 1;
  } while (local_546[uVar8 - 2] != '\0');
  if (uVar9 < 0x300) {
    local_546[uVar8 - 2] = 0x20;
    uVar8 = uVar9;
  }
  local_546[uVar8 - 2] = 0;
  uVar9 = 0;
  do {
    uVar8 = uVar9;
    uVar9 = uVar8 + 1;
  } while (local_546[uVar8 - 2] != '\0');
  if (uVar8 + 1 < 0x300) {
    cVar17 = 's';
    pcVar13 = str_1001300c;
    do {
      pcVar13 = pcVar13 + 1;
      local_546[uVar8 - 2] = cVar17;
      uVar8 = uVar8 + 1;
      cVar17 = *pcVar13;
      if (cVar17 == '\0') break;
    } while (uVar8 < 0x2ff);
  }
  local_546[uVar8 - 2] = 0;
  uVar9 = 0;
  do {
    uVar8 = uVar9;
    uVar9 = uVar8 + 1;
  } while (local_546[uVar8 - 2] != '\0');
  if (uVar9 < 0x300) {
    local_546[uVar8 - 2] = 0x3d;
    uVar8 = uVar9;
  }
  local_546[uVar8 - 2] = 0;
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
    } while (local_546[uVar8 - 2] != '\0');
    if (uVar8 + 1 < 0x300) {
      local_546[uVar8 - 2] = cVar17;
      local_546[uVar8 - 1] = 0;
    }
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  uVar9 = 0;
  do {
    uVar8 = uVar9;
    uVar9 = uVar8 + 1;
  } while (local_546[uVar8 - 2] != '\0');
  if (uVar9 < 0x300) {
    local_546[uVar8 - 2] = 0x20;
    uVar8 = uVar9;
  }
  local_546[uVar8 - 2] = 0;
  uVar9 = 0;
  do {
    uVar8 = uVar9;
    uVar9 = uVar8 + 1;
  } while (local_546[uVar8 - 2] != '\0');
  if (uVar8 + 1 < 0x300) {
    cVar17 = 's';
    pcVar13 = str_10013022;
    do {
      pcVar13 = pcVar13 + 1;
      local_546[uVar8 - 2] = cVar17;
      uVar8 = uVar8 + 1;
      cVar17 = *pcVar13;
      if (cVar17 == '\0') break;
    } while (uVar8 < 0x2ff);
  }
  local_546[uVar8 - 2] = 0;
  uVar9 = 0;
  do {
    uVar8 = uVar9;
    uVar9 = uVar8 + 1;
  } while (local_546[uVar8 - 2] != '\0');
  if (uVar9 < 0x300) {
    local_546[uVar8 - 2] = 0x3d;
    uVar8 = uVar9;
  }
  local_546[uVar8 - 2] = 0;
  if (uVar16 == 0) {
    uVar9 = 0;
    do {
      uVar8 = uVar9;
      uVar9 = uVar8 + 1;
    } while (local_546[uVar8 - 2] != '\0');
    if (uVar8 + 1 < 0x300) {
      *(undefined2 *)(local_546 + (uVar8 - 2)) = 0x30;
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
      } while (local_546[uVar20 - 2] != '\0');
      uVar14 = uVar9;
      if (uVar20 + 1 < 0x300) {
        local_546[uVar20 - 2] = *(undefined1 *)((long)&local_1d8 + uVar8 + 1);
        local_546[uVar20 - 1] = 0;
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
      } while (local_546[uVar8 - 2] != '\0');
      if (uVar8 + 1 < 0x300) {
        local_546[uVar8 - 2] = *(undefined1 *)((long)&local_1dc + uVar14 + 3);
        local_546[uVar8 - 1] = 0;
      }
      lVar1 = uVar14 + 2;
      uVar14 = uVar14 - 2;
      uVar9 = 0;
      do {
        uVar8 = uVar9;
        uVar9 = uVar8 + 1;
      } while (local_546[uVar8 - 2] != '\0');
      uVar9 = uVar14;
      if (uVar8 + 1 < 0x300) {
        local_546[uVar8 - 2] = *(undefined1 *)((long)&local_1dc + lVar1);
        local_546[uVar8 - 1] = 0;
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
    pcVar13 = str_1001302e;
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
    uStack_660 = 0x10008981;
    (*(code *)(ulong)(uint)local_38[3])(str_10012d77,str_1001305c,&local_1d8);
  }
  local_568 = CONCAT44(PF_PART4(local_568, 4),1);
  local_44 = 0;
  local_4c = 0;
  local_224 = 0;
  local_1dc = 0;
  api = local_38;
  goto LAB_10000e50;
LAB_10005346:
  uVar12 = 8;
  uVar16 = 0;
  do {
    local_1d8 = 0;
    if (((*local_38 != 0x54584b57) || ((uint)local_38[2] < 0x58)) ||
       ((code *)(ulong)(uint)local_38[0x15] == (code *)0x0)) break;
    uStack_660 = 0x100053be;
    iVar3 = (*(code *)(ulong)(uint)local_38[0x15])(0x304,1,&local_1d8);
    if (iVar3 == 0) break;
    if ((local_1d8 & 2) == 0) {
      if (((*local_38 == 0x54584b57) && (0x5b < (uint)local_38[2])) &&
         ((code *)(ulong)(uint)local_38[0x16] != (code *)0x0)) {
        uStack_660 = 0x10006440;
        iVar3 = (*(code *)(ulong)(uint)local_38[0x16])(0x304,1,0x10);
        if (iVar3 != 0) {
          uStack_660 = 0x10006456;
          uVar6 = recovered_100112a0(local_38,0x23);
          if ((int)uVar6 != 0) {
            uStack_660 = 0x1000646c;
            uVar6 = recovered_100112a0(local_38,0x4b);
            if ((int)uVar6 != 0) {
              uStack_660 = 0x10006482;
              uVar6 = recovered_100112a0(local_38,0x45);
              if ((int)uVar6 != 0) {
                uStack_660 = 0x10006498;
                uVar6 = recovered_100112a0(local_38,0x59);
                if ((int)uVar6 != 0) {
                  uStack_660 = 0x100064ae;
                  uVar6 = recovered_100112a0(local_38,4);
                  if ((int)uVar6 != 0) {
                    local_220 = 0;
                    bVar27 = false;
                    goto LAB_100064c4;
                  }
                }
              }
            }
          }
        }
      }
      break;
    }
    if (((*local_38 == 0x54584b57) && (0x33 < (uint)local_38[2])) &&
       ((code *)(ulong)(uint)local_38[0xc] != (code *)0x0)) {
      uStack_660 = 0x10005406;
      (*(code *)(ulong)(uint)local_38[0xc])(uVar12);
    }
    uVar12 = uVar12 << (uVar12 < 0x1000 && 9 < uVar16);
    uVar16 = uVar16 + 1;
  } while (uVar16 != 0x18);
LAB_10007f13:
  api = local_38;
  uVar9 = 0;
  do {
    uVar8 = uVar9;
    uVar9 = uVar8 + 1;
  } while (local_546[uVar8 - 2] != '\0');
  if (uVar8 + 1 < 0x300) {
    cVar17 = ' ';
    pcVar13 = str_10013000;
    do {
      pcVar13 = pcVar13 + 1;
      local_546[uVar8 - 2] = cVar17;
      uVar8 = uVar8 + 1;
      cVar17 = *pcVar13;
      if (cVar17 == '\0') break;
    } while (uVar8 < 0x2ff);
  }
  local_546[uVar8 - 2] = 0;
  uVar9 = 0;
  do {
    uVar8 = uVar9;
    uVar9 = uVar8 + 1;
  } while (local_546[uVar8 - 2] != '\0');
  if (uVar9 < 0x300) {
    local_546[uVar8 - 2] = 0x20;
    uVar8 = uVar9;
  }
  local_546[uVar8 - 2] = 0;
  uVar9 = 0;
  do {
    uVar8 = uVar9;
    uVar9 = uVar8 + 1;
  } while (local_546[uVar8 - 2] != '\0');
  if (uVar8 + 1 < 0x300) {
    cVar17 = 's';
    pcVar13 = str_1001300c;
    do {
      pcVar13 = pcVar13 + 1;
      local_546[uVar8 - 2] = cVar17;
      uVar8 = uVar8 + 1;
      cVar17 = *pcVar13;
      if (cVar17 == '\0') break;
    } while (uVar8 < 0x2ff);
  }
  local_546[uVar8 - 2] = 0;
  uVar9 = 0;
  do {
    uVar8 = uVar9;
    uVar9 = uVar8 + 1;
  } while (local_546[uVar8 - 2] != '\0');
  if (uVar9 < 0x300) {
    local_546[uVar8 - 2] = 0x3d;
    uVar8 = uVar9;
  }
  local_546[uVar8 - 2] = 0;
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
    } while (local_546[uVar8 - 2] != '\0');
    if (uVar8 + 1 < 0x300) {
      local_546[uVar8 - 2] = cVar17;
      local_546[uVar8 - 1] = 0;
    }
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
LAB_10000e24:
  local_568 = local_568 & 0xffffffff00000000;
  local_44 = 0;
  local_4c = 0;
  local_224 = 0;
  local_1dc = 0;
LAB_10000e50:
  local_44 = 0;
  local_4c = 0;
  local_1dc = 0;
  local_224 = 0;
  local_228 = 0;
  if (((*api == 0x54584b57) && (0x57 < (uint)api[2])) && ((api[0x15] != 0 && (api[0x16] != 0)))) {
    uStack_660 = 0x10000e9d;
    uVar6 = recovered_10011440(api,4,(long)&local_44);
    if ((int)uVar6 == 0) {
LAB_1000514e:
      uVar9 = 0;
      do {
        uVar8 = uVar9;
        uVar9 = uVar8 + 1;
      } while (local_546[uVar8 - 2] != '\0');
      if (uVar8 + 1 < 0x300) {
        cVar17 = ' ';
        pcVar13 = str_1001307b;
        do {
          pcVar13 = pcVar13 + 1;
          local_546[uVar8 - 2] = cVar17;
          uVar8 = uVar8 + 1;
          cVar17 = *pcVar13;
          if (cVar17 == '\0') break;
        } while (uVar8 < 0x2ff);
      }
      goto LAB_10000fdc;
    }
    uStack_660 = 0x10000eb6;
    uVar6 = recovered_10011440(api,5,(long)&local_4c);
    if ((int)uVar6 == 0) goto LAB_1000514e;
    uStack_660 = 0x10000ed2;
    uVar6 = recovered_10011440(api,6,(long)&local_224);
    if ((((int)uVar6 == 0) || (local_44 == 0)) || (local_44 == 0xff)) goto LAB_1000514e;
    uStack_660 = 0x10000f04;
    recovered_10011690(api,0x70,(long)&local_1dc);
    uStack_660 = 0x10000f18;
    recovered_10011690(api,0x74,(long)&local_228);
    uVar9 = 0;
    do {
      uVar8 = uVar9;
      uVar9 = uVar8 + 1;
    } while (local_546[uVar8 - 2] != '\0');
    if (uVar8 + 1 < 0x300) {
      cVar17 = ' ';
      pcVar13 = str_10013088;
      do {
        pcVar13 = pcVar13 + 1;
        local_546[uVar8 - 2] = cVar17;
        uVar8 = uVar8 + 1;
        cVar17 = *pcVar13;
        if (cVar17 == '\0') break;
      } while (uVar8 < 0x2ff);
    }
    local_546[uVar8 - 2] = 0;
    uVar9 = 0;
    do {
      uVar8 = uVar9;
      uVar9 = uVar8 + 1;
    } while (local_546[uVar8 - 2] != '\0');
    if (uVar9 < 0x300) {
      local_546[uVar8 - 2] = 0x20;
      uVar8 = uVar9;
    }
    local_546[uVar8 - 2] = 0;
    uVar9 = 0xffffffffffffffff;
    do {
      uVar8 = uVar9;
      uVar9 = uVar8 + 1;
    } while (local_546[uVar8 - 1] != '\0');
    if (uVar8 + 2 < 0x300) {
      local_546[uVar8 - 1] = 0x67;
      bVar27 = uVar9 != 0x2fe;
      uVar9 = uVar8 + 2;
      if (bVar27) {
        uVar9 = uVar8 + 3;
        local_546[uVar8] = 0x6d;
        if (uVar9 < 0x2ff) {
          uVar9 = uVar8 + 4;
          *(undefined1 *)((long)&local_548 + uVar8 + 3) = 0x75;
          if (uVar9 < 0x2ff) {
            uVar9 = uVar8 + 5;
            local_546[uVar8 + 2] = 0x78;
            if (uVar9 < 0x2ff) {
              uVar9 = uVar8 + 6;
              local_546[uVar8 + 3] = 0x49;
              if (uVar9 < 0x2ff) {
                local_546[uVar8 + 4] = 0x6f;
                uVar9 = uVar8 + 7;
              }
            }
          }
        }
      }
    }
    local_546[uVar9 - 2] = 0;
    uVar9 = 0;
    do {
      uVar8 = uVar9;
      uVar9 = uVar8 + 1;
    } while (local_546[uVar8 - 2] != '\0');
    if (uVar9 < 0x300) {
      local_546[uVar8 - 2] = 0x3d;
      uVar8 = uVar9;
    }
    local_546[uVar8 - 2] = 0;
    uVar9 = 0;
    do {
      uVar8 = uVar9;
      uVar9 = uVar8 + 1;
    } while (local_546[uVar8 - 2] != '\0');
    if (uVar8 + 1 < 0x300) {
      *(undefined2 *)(local_546 + (uVar8 - 2)) = 0x30;
    }
    uVar9 = 0;
    do {
      uVar8 = uVar9;
      uVar9 = uVar8 + 1;
    } while (local_546[uVar8 - 2] != '\0');
    if (uVar8 + 1 < 0x300) {
      *(undefined2 *)(local_546 + (uVar8 - 2)) = 0x30;
    }
    uVar9 = 0;
    do {
      uVar8 = uVar9;
      uVar9 = uVar8 + 1;
    } while (local_546[uVar8 - 2] != '\0');
    if (uVar8 + 1 < 0x300) {
      *(undefined2 *)(local_546 + (uVar8 - 2)) = 0x30;
    }
    uVar9 = 0;
    do {
      uVar8 = uVar9;
      uVar9 = uVar8 + 1;
    } while (local_546[uVar8 - 2] != '\0');
    if (uVar8 + 1 < 0x300) {
      *(undefined2 *)(local_546 + (uVar8 - 2)) = 0x30;
    }
    uVar9 = 0;
    do {
      uVar8 = uVar9;
      uVar9 = uVar8 + 1;
    } while (local_546[uVar8 - 2] != '\0');
    if (uVar8 + 1 < 0x300) {
      *(undefined2 *)(local_546 + (uVar8 - 2)) = 0x30;
    }
    uVar9 = 0;
    do {
      uVar8 = uVar9;
      uVar9 = uVar8 + 1;
    } while (local_546[uVar8 - 2] != '\0');
    if (uVar8 + 1 < 0x300) {
      *(undefined2 *)(local_546 + (uVar8 - 2)) = 0x37;
    }
    uVar9 = 0;
    do {
      uVar8 = uVar9;
      uVar9 = uVar8 + 1;
    } while (local_546[uVar8 - 2] != '\0');
    if (uVar8 + 1 < 0x300) {
      *(undefined2 *)(local_546 + (uVar8 - 2)) = 0x30;
    }
    uVar9 = 0;
    do {
      uVar8 = uVar9;
      uVar9 = uVar8 + 1;
    } while (local_546[uVar8 - 2] != '\0');
    if (uVar8 + 1 < 0x300) {
      *(undefined2 *)(local_546 + (uVar8 - 2)) = 0x30;
    }
    bVar18 = (byte)local_44;
    uVar8 = (ulong)(byte)local_44;
    uVar9 = 0;
    do {
      uVar14 = uVar9;
      uVar9 = uVar14 + 1;
    } while (local_546[uVar14 - 2] != '\0');
    if (uVar9 < 0x300) {
      local_546[uVar14 - 2] = 0x20;
      uVar14 = uVar9;
    }
    local_546[uVar14 - 2] = 0;
    uVar9 = 0;
    do {
      uVar14 = uVar9;
      uVar9 = uVar14 + 1;
    } while (local_546[uVar14 - 2] != '\0');
    if (uVar14 + 1 < 0x300) {
      cVar17 = 'g';
      pcVar13 = &DAT_10013096;
      do {
        local_546[uVar14 - 2] = cVar17;
        uVar14 = uVar14 + 1;
        cVar17 = *pcVar13;
        if (cVar17 == '\0') break;
        pcVar13 = pcVar13 + 1;
      } while (uVar14 < 0x2ff);
    }
    local_546[uVar14 - 2] = 0;
    uVar9 = 0;
    do {
      uVar14 = uVar9;
      uVar9 = uVar14 + 1;
    } while (local_546[uVar14 - 2] != '\0');
    if (uVar9 < 0x300) {
      local_546[uVar14 - 2] = 0x3d;
      uVar14 = uVar9;
    }
    local_546[uVar14 - 2] = 0;
    if (bVar18 == 0) {
      uVar9 = 0;
      do {
        uVar8 = uVar9;
        uVar9 = uVar8 + 1;
      } while (local_546[uVar8 - 2] != '\0');
      if (uVar8 + 1 < 0x300) {
        *(undefined2 *)(local_546 + (uVar8 - 2)) = 0x30;
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
        } while (local_546[uVar10 - 2] != '\0');
        uVar14 = uVar9;
        if (uVar10 + 1 < 0x300) {
          local_546[uVar10 - 2] = *(undefined1 *)((long)&local_1d8 + uVar20 + 1);
          local_546[uVar10 - 1] = 0;
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
        } while (local_546[uVar20 - 2] != '\0');
        if (uVar20 + 1 < 0x300) {
          local_546[uVar20 - 2] = *(undefined1 *)((long)&local_1dc + uVar14 + 3);
          local_546[uVar20 - 1] = 0;
        }
        lVar1 = uVar14 + 2;
        uVar14 = uVar14 - 2;
        uVar9 = 0;
        do {
          uVar20 = uVar9;
          uVar9 = uVar20 + 1;
        } while (local_546[uVar20 - 2] != '\0');
        uVar9 = uVar14;
        if (uVar20 + 1 < 0x300) {
          local_546[uVar20 - 2] = *(undefined1 *)((long)&local_1dc + lVar1);
          local_546[uVar20 - 1] = 0;
        }
      }
    }
    bVar18 = (byte)local_4c;
    uVar14 = (ulong)(byte)local_4c;
    uVar9 = 0;
    do {
      uVar20 = uVar9;
      uVar9 = uVar20 + 1;
    } while (local_546[uVar20 - 2] != '\0');
    if (uVar9 < 0x300) {
      local_546[uVar20 - 2] = 0x20;
      uVar20 = uVar9;
    }
    local_546[uVar20 - 2] = 0;
    uVar9 = 0;
    do {
      uVar20 = uVar9;
      uVar9 = uVar20 + 1;
    } while (local_546[uVar20 - 2] != '\0');
    if (uVar20 + 1 < 0x300) {
      cVar17 = 'g';
      pcVar13 = str_1001309f;
      do {
        pcVar13 = pcVar13 + 1;
        local_546[uVar20 - 2] = cVar17;
        uVar20 = uVar20 + 1;
        cVar17 = *pcVar13;
        if (cVar17 == '\0') break;
      } while (uVar20 < 0x2ff);
    }
    local_546[uVar20 - 2] = 0;
    uVar9 = 0;
    do {
      uVar20 = uVar9;
      uVar9 = uVar20 + 1;
    } while (local_546[uVar20 - 2] != '\0');
    if (uVar9 < 0x300) {
      local_546[uVar20 - 2] = 0x3d;
      uVar20 = uVar9;
    }
    local_546[uVar20 - 2] = 0;
    if (bVar18 == 0) {
      uVar9 = 0;
      do {
        uVar14 = uVar9;
        uVar9 = uVar14 + 1;
      } while (local_546[uVar14 - 2] != '\0');
      if (uVar14 + 1 < 0x300) {
        *(undefined2 *)(local_546 + (uVar14 - 2)) = 0x30;
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
        } while (local_546[uVar24 - 2] != '\0');
        uVar20 = uVar9;
        if (uVar24 + 1 < 0x300) {
          local_546[uVar24 - 2] = *(undefined1 *)((long)&local_1d8 + uVar10 + 1);
          local_546[uVar24 - 1] = 0;
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
        } while (local_546[uVar10 - 2] != '\0');
        if (uVar10 + 1 < 0x300) {
          local_546[uVar10 - 2] = *(undefined1 *)((long)&local_1dc + uVar20 + 3);
          local_546[uVar10 - 1] = 0;
        }
        lVar1 = uVar20 + 2;
        uVar20 = uVar20 - 2;
        uVar9 = 0;
        do {
          uVar10 = uVar9;
          uVar9 = uVar10 + 1;
        } while (local_546[uVar10 - 2] != '\0');
        uVar9 = uVar20;
        if (uVar10 + 1 < 0x300) {
          local_546[uVar10 - 2] = *(undefined1 *)((long)&local_1dc + lVar1);
          local_546[uVar10 - 1] = 0;
        }
      }
    }
    cVar17 = (char)local_224;
    uVar16 = local_224 & 0xff;
    uVar9 = 0;
    do {
      uVar20 = uVar9;
      uVar9 = uVar20 + 1;
    } while (local_546[uVar20 - 2] != '\0');
    if (uVar9 < 0x300) {
      local_546[uVar20 - 2] = 0x20;
      uVar20 = uVar9;
    }
    local_546[uVar20 - 2] = 0;
    uVar9 = 0;
    do {
      uVar20 = uVar9;
      uVar9 = uVar20 + 1;
    } while (local_546[uVar20 - 2] != '\0');
    if (uVar20 + 1 < 0x300) {
      cVar22 = 'g';
      pcVar13 = str_100130a9;
      do {
        pcVar13 = pcVar13 + 1;
        local_546[uVar20 - 2] = cVar22;
        uVar20 = uVar20 + 1;
        cVar22 = *pcVar13;
        if (cVar22 == '\0') break;
      } while (uVar20 < 0x2ff);
    }
    local_546[uVar20 - 2] = 0;
    uVar9 = 0;
    do {
      uVar20 = uVar9;
      uVar9 = uVar20 + 1;
    } while (local_546[uVar20 - 2] != '\0');
    if (uVar9 < 0x300) {
      local_546[uVar20 - 2] = 0x3d;
      uVar20 = uVar9;
    }
    local_546[uVar20 - 2] = 0;
    if (cVar17 == '\0') {
      uVar9 = 0;
      do {
        uVar20 = uVar9;
        uVar9 = uVar20 + 1;
      } while (local_546[uVar20 - 2] != '\0');
      if (uVar20 + 1 < 0x300) {
        *(undefined2 *)(local_546 + (uVar20 - 2)) = 0x30;
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
        } while (local_546[uVar24 - 2] != '\0');
        uVar10 = uVar9;
        if (uVar24 + 1 < 0x300) {
          local_546[uVar24 - 2] = *(undefined1 *)((long)&local_1d8 + uVar20 + 1);
          local_546[uVar24 - 1] = 0;
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
        } while (local_546[uVar20 - 2] != '\0');
        if (uVar20 + 1 < 0x300) {
          local_546[uVar20 - 2] = *(undefined1 *)((long)&local_1dc + uVar10 + 3);
          local_546[uVar20 - 1] = 0;
        }
        lVar1 = uVar10 + 2;
        uVar10 = uVar10 - 2;
        uVar9 = 0;
        do {
          uVar20 = uVar9;
          uVar9 = uVar20 + 1;
        } while (local_546[uVar20 - 2] != '\0');
        uVar9 = uVar10;
        if (uVar20 + 1 < 0x300) {
          local_546[uVar20 - 2] = *(undefined1 *)((long)&local_1dc + lVar1);
          local_546[uVar20 - 1] = 0;
        }
      }
    }
    uVar12 = local_1dc;
    uVar9 = 0;
    do {
      uVar20 = uVar9;
      uVar9 = uVar20 + 1;
    } while (local_546[uVar20 - 2] != '\0');
    if (uVar9 < 0x300) {
      local_546[uVar20 - 2] = 0x20;
      uVar20 = uVar9;
    }
    local_546[uVar20 - 2] = 0;
    uVar9 = 0;
    do {
      uVar20 = uVar9;
      uVar9 = uVar20 + 1;
    } while (local_546[uVar20 - 2] != '\0');
    if (uVar20 + 1 < 0x300) {
      cVar17 = 'g';
      pcVar13 = str_100130b5;
      do {
        pcVar13 = pcVar13 + 1;
        local_546[uVar20 - 2] = cVar17;
        uVar20 = uVar20 + 1;
        cVar17 = *pcVar13;
        if (cVar17 == '\0') break;
      } while (uVar20 < 0x2ff);
    }
    local_546[uVar20 - 2] = 0;
    uVar9 = 0;
    do {
      uVar20 = uVar9;
      uVar9 = uVar20 + 1;
    } while (local_546[uVar20 - 2] != '\0');
    if (uVar9 < 0x300) {
      local_546[uVar20 - 2] = 0x3d;
      uVar20 = uVar9;
    }
    local_546[uVar20 - 2] = 0;
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
      } while (local_546[uVar20 - 2] != '\0');
      if (uVar20 + 1 < 0x300) {
        local_546[uVar20 - 2] = cVar22;
        local_546[uVar20 - 1] = 0;
      }
      uVar7 = local_228;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    uVar9 = 0;
    do {
      uVar20 = uVar9;
      uVar9 = uVar20 + 1;
    } while (local_546[uVar20 - 2] != '\0');
    if (uVar9 < 0x300) {
      local_546[uVar20 - 2] = 0x20;
      uVar20 = uVar9;
    }
    local_546[uVar20 - 2] = 0;
    uVar9 = 0;
    do {
      uVar20 = uVar9;
      uVar9 = uVar20 + 1;
    } while (local_546[uVar20 - 2] != '\0');
    if (uVar20 + 1 < 0x300) {
      cVar17 = 'g';
      pcVar13 = str_100130c7;
      do {
        pcVar13 = pcVar13 + 1;
        local_546[uVar20 - 2] = cVar17;
        uVar20 = uVar20 + 1;
        cVar17 = *pcVar13;
        if (cVar17 == '\0') break;
      } while (uVar20 < 0x2ff);
    }
    local_546[uVar20 - 2] = 0;
    uVar9 = 0;
    do {
      uVar20 = uVar9;
      uVar9 = uVar20 + 1;
    } while (local_546[uVar20 - 2] != '\0');
    if (uVar9 < 0x300) {
      local_546[uVar20 - 2] = 0x3d;
      uVar20 = uVar9;
    }
    local_546[uVar20 - 2] = 0;
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
      } while (local_546[uVar20 - 2] != '\0');
      if (uVar20 + 1 < 0x300) {
        local_546[uVar20 - 2] = cVar22;
        local_546[uVar20 - 1] = 0;
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
      pcVar13 = str_100130d6;
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
      pcVar13 = str_100130f4;
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
      uStack_660 = 0x100063f7;
      (*(code *)(ulong)(uint)api[3])(str_10012d9c,str_10013102,&local_1d8);
    }
    uVar4 = 1;
  }
  else {
    uVar9 = 0;
    do {
      uVar8 = uVar9;
      uVar9 = uVar8 + 1;
    } while (local_546[uVar8 - 2] != '\0');
    if (uVar8 + 1 < 0x300) {
      cVar17 = ' ';
      pcVar13 = str_10013066;
      do {
        pcVar13 = pcVar13 + 1;
        local_546[uVar8 - 2] = cVar17;
        uVar8 = uVar8 + 1;
        cVar17 = *pcVar13;
        if (cVar17 == '\0') break;
      } while (uVar8 < 0x2ff);
    }
LAB_10000fdc:
    local_546[uVar8 - 2] = 0;
    uVar4 = 0;
  }
  local_568 = CONCAT44(uVar4,(undefined4)local_568);
  local_4c = 0;
  local_224 = 0;
  local_1dc = 0;
  local_228 = 0;
  local_23c = 0;
  local_238 = 0;
  if (((*api == 0x54584b57) && (0x7f < (uint)api[2])) &&
     ((code *)(ulong)(uint)api[0x1f] != (code *)0x0)) {
    uStack_660 = 0x1000105d;
    iVar3 = (*(code *)(ulong)(uint)api[0x1f])(0,0,&local_1d8);
    if (((iVar3 == 0) || (uStack_1d4 != 0x756e6547)) ||
       ((uStack_1cc != 0x49656e69 ||
        ((((iStack_1d0 != 0x6c65746e || (*api != 0x54584b57)) || ((uint)api[2] < 0x80)) ||
         ((code *)(ulong)(uint)api[0x1f] == (code *)0x0)))))) goto LAB_100011a1;
    uStack_660 = 0x100010d2;
    iVar3 = (*(code *)(ulong)(uint)api[0x1f])(1,0,&local_210);
    if (iVar3 == 0) goto LAB_100011a1;
    uVar12 = local_210 >> 8 & 0xf;
    uVar16 = (local_210 >> 0x14 & 0xff) + 0xf;
    if (uVar12 != 0xf) {
      uVar16 = uVar12;
    }
    uVar7 = local_210 >> 0xc & 0xf0;
    uVar12 = 0;
    if (uVar16 == 0xf) {
      uVar12 = uVar7;
    }
    uVar9 = 0;
    if (uVar16 == 6) {
      uVar12 = uVar7;
    }
    do {
      uVar8 = uVar9;
      uVar9 = uVar8 + 1;
    } while (local_546[uVar8 - 2] != '\0');
    if (uVar8 + 1 < 0x300) {
      cVar17 = ' ';
      pcVar13 = str_1001311e;
      do {
        pcVar13 = pcVar13 + 1;
        local_546[uVar8 - 2] = cVar17;
        uVar8 = uVar8 + 1;
        cVar17 = *pcVar13;
        if (cVar17 == '\0') break;
      } while (uVar8 < 0x2ff);
    }
    uVar7 = local_210 & 0xf;
    uVar12 = uVar12 | local_210 >> 4 & 0xf;
    local_546[uVar8 - 2] = 0;
    uVar9 = 0;
    do {
      uVar8 = uVar9;
      uVar9 = uVar8 + 1;
    } while (local_546[uVar8 - 2] != '\0');
    if (uVar9 < 0x300) {
      local_546[uVar8 - 2] = 0x20;
      uVar8 = uVar9;
    }
    local_546[uVar8 - 2] = 0;
    uVar9 = 0;
    do {
      uVar8 = uVar9;
      uVar9 = uVar8 + 1;
    } while (local_546[uVar8 - 2] != '\0');
    if (uVar8 + 1 < 0x300) {
      cVar17 = 'c';
      pcVar13 = str_1001312e;
      do {
        pcVar13 = pcVar13 + 1;
        local_546[uVar8 - 2] = cVar17;
        uVar8 = uVar8 + 1;
        cVar17 = *pcVar13;
        if (cVar17 == '\0') break;
      } while (uVar8 < 0x2ff);
    }
    local_546[uVar8 - 2] = 0;
    uVar9 = 0;
    do {
      uVar8 = uVar9;
      uVar9 = uVar8 + 1;
    } while (local_546[uVar8 - 2] != '\0');
    if (uVar9 < 0x300) {
      local_546[uVar8 - 2] = 0x3d;
      uVar8 = uVar9;
    }
    local_546[uVar8 - 2] = 0;
    if (uVar16 == 0) {
      uVar9 = 0;
      do {
        uVar8 = uVar9;
        uVar9 = uVar8 + 1;
      } while (local_546[uVar8 - 2] != '\0');
      if (uVar8 + 1 < 0x300) {
        *(undefined2 *)(local_546 + (uVar8 - 2)) = 0x30;
      }
    }
    else {
      uVar9 = 0xffffffffffffffff;
      uVar8 = (ulong)uVar16;
      do {
        uVar14 = uVar9;
        uVar25 = (uint)uVar8;
        *(byte *)((long)&local_1d8 + uVar14 + 1) = (char)uVar8 + (char)(uVar8 / 10) * -10 | 0x30;
        uVar9 = uVar14 + 1;
        if (8 < uVar9) break;
        uVar8 = uVar8 / 10;
      } while (9 < uVar25);
      if ((uVar9 & 1) == 0) {
        uVar8 = 0;
        do {
          uVar20 = uVar8;
          uVar8 = uVar20 + 1;
        } while (local_546[uVar20 - 2] != '\0');
        uVar8 = uVar9;
        if (uVar20 + 1 < 0x300) {
          local_546[uVar20 - 2] = *(undefined1 *)((long)&local_1d8 + uVar14 + 1);
          local_546[uVar20 - 1] = 0;
        }
      }
      else {
        uVar8 = uVar14 + 2;
      }
      while (uVar9 != 0) {
        uVar9 = 0;
        do {
          uVar14 = uVar9;
          uVar9 = uVar14 + 1;
        } while (local_546[uVar14 - 2] != '\0');
        if (uVar14 + 1 < 0x300) {
          local_546[uVar14 - 2] = *(undefined1 *)((long)&local_1dc + uVar8 + 3);
          local_546[uVar14 - 1] = 0;
        }
        lVar1 = uVar8 + 2;
        uVar9 = uVar8 - 2;
        uVar8 = 0;
        do {
          uVar14 = uVar8;
          uVar8 = uVar14 + 1;
        } while (local_546[uVar14 - 2] != '\0');
        uVar8 = uVar9;
        if (uVar14 + 1 < 0x300) {
          local_546[uVar14 - 2] = *(undefined1 *)((long)&local_1dc + lVar1);
          local_546[uVar14 - 1] = 0;
        }
      }
    }
    uVar9 = 0;
    do {
      uVar8 = uVar9;
      uVar9 = uVar8 + 1;
    } while (local_546[uVar8 - 2] != '\0');
    if (uVar9 < 0x300) {
      local_546[uVar8 - 2] = 0x20;
      uVar8 = uVar9;
    }
    local_546[uVar8 - 2] = 0;
    uVar9 = 0xffffffffffffffff;
    do {
      uVar8 = uVar9;
      uVar9 = uVar8 + 1;
    } while (local_546[uVar8 - 1] != '\0');
    if (uVar8 + 2 < 0x300) {
      local_546[uVar8 - 1] = 99;
      bVar27 = uVar9 != 0x2fe;
      uVar9 = uVar8 + 2;
      if (bVar27) {
        uVar9 = uVar8 + 3;
        local_546[uVar8] = 0x70;
        if (uVar9 < 0x2ff) {
          uVar9 = uVar8 + 4;
          local_546[uVar8 + 1] = 0x75;
          if (uVar9 < 0x2ff) {
            uVar9 = uVar8 + 5;
            local_546[uVar8 + 2] = 0x4d;
            if (uVar9 < 0x2ff) {
              uVar9 = uVar8 + 6;
              *(undefined1 *)((long)&local_548 + uVar8 + 5) = 0x6f;
              if (uVar9 < 0x2ff) {
                uVar9 = uVar8 + 7;
                local_546[uVar8 + 4] = 100;
                if (uVar9 < 0x2ff) {
                  uVar9 = uVar8 + 8;
                  local_546[uVar8 + 5] = 0x65;
                  if (uVar9 < 0x2ff) {
                    local_546[uVar8 + 6] = 0x6c;
                    uVar9 = uVar8 + 9;
                  }
                }
              }
            }
          }
        }
      }
    }
    local_546[uVar9 - 2] = 0;
    uVar9 = 0;
    do {
      uVar8 = uVar9;
      uVar9 = uVar8 + 1;
    } while (local_546[uVar8 - 2] != '\0');
    if (uVar9 < 0x300) {
      local_546[uVar8 - 2] = 0x3d;
      uVar8 = uVar9;
    }
    local_546[uVar8 - 2] = 0;
    if (uVar12 == 0) {
      uVar9 = 0;
      do {
        uVar8 = uVar9;
        uVar9 = uVar8 + 1;
      } while (local_546[uVar8 - 2] != '\0');
      if (uVar8 + 1 < 0x300) {
        *(undefined2 *)(local_546 + (uVar8 - 2)) = 0x30;
      }
    }
    else {
      uVar9 = 0xffffffffffffffff;
      uVar25 = uVar12;
      do {
        uVar8 = uVar9;
        *(byte *)((long)&local_1d8 + uVar8 + 1) = (char)uVar25 + (char)(uVar25 / 10) * -10 | 0x30;
        uVar9 = uVar8 + 1;
        if (8 < uVar9) break;
        bVar27 = 9 < uVar25;
        uVar25 = uVar25 / 10;
      } while (bVar27);
      if ((uVar9 & 1) == 0) {
        uVar14 = 0;
        do {
          uVar20 = uVar14;
          uVar14 = uVar20 + 1;
        } while (local_546[uVar20 - 2] != '\0');
        uVar14 = uVar9;
        if (uVar20 + 1 < 0x300) {
          local_546[uVar20 - 2] = *(undefined1 *)((long)&local_1d8 + uVar8 + 1);
          local_546[uVar20 - 1] = 0;
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
        } while (local_546[uVar8 - 2] != '\0');
        if (uVar8 + 1 < 0x300) {
          local_546[uVar8 - 2] = *(undefined1 *)((long)&local_1dc + uVar14 + 3);
          local_546[uVar8 - 1] = 0;
        }
        lVar1 = uVar14 + 2;
        uVar14 = uVar14 - 2;
        uVar9 = 0;
        do {
          uVar8 = uVar9;
          uVar9 = uVar8 + 1;
        } while (local_546[uVar8 - 2] != '\0');
        uVar9 = uVar14;
        if (uVar8 + 1 < 0x300) {
          local_546[uVar8 - 2] = *(undefined1 *)((long)&local_1dc + lVar1);
          local_546[uVar8 - 1] = 0;
        }
      }
    }
    uVar9 = 0;
    do {
      uVar8 = uVar9;
      uVar9 = uVar8 + 1;
    } while (local_546[uVar8 - 2] != '\0');
    if (uVar9 < 0x300) {
      local_546[uVar8 - 2] = 0x20;
      uVar8 = uVar9;
    }
    local_546[uVar8 - 2] = 0;
    uVar9 = 0;
    do {
      uVar8 = uVar9;
      uVar9 = uVar8 + 1;
    } while (local_546[uVar8 - 2] != '\0');
    if (uVar8 + 1 < 0x300) {
      cVar17 = 'c';
      pcVar13 = str_10013138;
      do {
        pcVar13 = pcVar13 + 1;
        local_546[uVar8 - 2] = cVar17;
        uVar8 = uVar8 + 1;
        cVar17 = *pcVar13;
        if (cVar17 == '\0') break;
      } while (uVar8 < 0x2ff);
    }
    local_546[uVar8 - 2] = 0;
    uVar9 = 0;
    do {
      uVar8 = uVar9;
      uVar9 = uVar8 + 1;
    } while (local_546[uVar8 - 2] != '\0');
    if (uVar9 < 0x300) {
      local_546[uVar8 - 2] = 0x3d;
      uVar8 = uVar9;
    }
    local_546[uVar8 - 2] = 0;
    if (uVar7 == 0) {
      uVar9 = 0;
      do {
        uVar8 = uVar9;
        uVar9 = uVar8 + 1;
      } while (local_546[uVar8 - 2] != '\0');
      if (uVar8 + 1 < 0x300) {
        *(undefined2 *)(local_546 + (uVar8 - 2)) = 0x30;
      }
    }
    else {
      uVar9 = 0xffffffffffffffff;
      do {
        uVar8 = uVar9;
        *(byte *)((long)&local_1d8 + uVar8 + 1) = (char)uVar7 + (char)(uVar7 / 10) * -10 | 0x30;
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
        } while (local_546[uVar20 - 2] != '\0');
        uVar14 = uVar9;
        if (uVar20 + 1 < 0x300) {
          local_546[uVar20 - 2] = *(undefined1 *)((long)&local_1d8 + uVar8 + 1);
          local_546[uVar20 - 1] = 0;
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
        } while (local_546[uVar8 - 2] != '\0');
        if (uVar8 + 1 < 0x300) {
          local_546[uVar8 - 2] = *(undefined1 *)((long)&local_1dc + uVar14 + 3);
          local_546[uVar8 - 1] = 0;
        }
        lVar1 = uVar14 + 2;
        uVar14 = uVar14 - 2;
        uVar9 = 0;
        do {
          uVar8 = uVar9;
          uVar9 = uVar8 + 1;
        } while (local_546[uVar8 - 2] != '\0');
        if (uVar8 + 1 < 0x300) {
          local_546[uVar8 - 2] = *(undefined1 *)((long)&local_1dc + lVar1);
          local_546[uVar8 - 1] = 0;
        }
        uVar9 = uVar14;
      }
    }
    if (((-1 < (char)local_208) || (*local_38 != 0x54584b57)) ||
       (((uint)local_38[2] < 0xb4 ||
        (((code *)(ulong)(uint)local_38[0x2b] == (code *)0x0 || (local_38[0x2c] == 0)))))) {
      uVar9 = 0;
      do {
        uVar8 = uVar9;
        uVar9 = uVar8 + 1;
      } while (local_546[uVar8 - 2] != '\0');
      if (uVar8 + 1 < 0x300) {
        cVar17 = ' ';
        pcVar13 = str_10013144;
        do {
          pcVar13 = pcVar13 + 1;
          local_546[uVar8 - 2] = cVar17;
          uVar8 = uVar8 + 1;
          cVar17 = *pcVar13;
          if (cVar17 == '\0') break;
        } while (uVar8 < 0x2ff);
      }
      local_546[uVar8 - 2] = 0;
      local_1d8 = local_1d8 & 0xffffff00;
      uVar9 = 0;
      do {
        uVar8 = uVar9;
        uVar9 = uVar8 + 1;
      } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
      if (uVar8 + 1 < 0xc0) {
        cVar17 = 'v';
        pcVar13 = str_1001315b;
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
        *(undefined1 *)((long)&local_1d8 + uVar8 + 1) = 0x66;
        bVar27 = uVar9 != 0xbe;
        uVar9 = uVar8 + 2;
        if (bVar27) {
          uVar9 = uVar8 + 3;
          *(undefined1 *)((long)&local_1d8 + uVar8 + 2) = 0x61;
          if (uVar9 < 0xbf) {
            uVar9 = uVar8 + 4;
            *(undefined1 *)((long)&local_1d8 + uVar8 + 3) = 0x6d;
            if (uVar9 < 0xbf) {
              uVar9 = uVar8 + 5;
              *(undefined1 *)((long)&uStack_1d4 + uVar8) = 0x69;
              if (uVar9 < 0xbf) {
                uVar9 = uVar8 + 6;
                *(undefined1 *)((long)&uStack_1d4 + uVar8 + 1) = 0x6c;
                if (uVar9 < 0xbf) {
                  *(undefined1 *)((long)&uStack_1d4 + uVar8 + 2) = 0x79;
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
      pcVar13 = &DAT_10012fe1;
      pcVar11 = &DAT_10012fe1;
      if (-1 < (char)local_208) {
        pcVar11 = str_10012fe6;
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
          pcVar21 = str_10013183;
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
      if ((((*api != 0x54584b57) || ((uint)api[2] < 0xb4)) || (api[0x2b] == 0)) || (api[0x2c] == 0))
      {
        pcVar13 = str_10012fe6;
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
        uStack_660 = 0x10007416;
        (*(code *)(ulong)(uint)api[3])(str_10012dc2,str_1001318d,&local_1d8);
      }
      goto LAB_10001204;
    }
    uStack_660 = 0x10006bd7;
    iVar3 = (*(code *)(ulong)(uint)local_38[0x2b])(0x1a0,&local_4c,&local_224);
    if (iVar3 == 0) {
      uVar9 = 0;
      do {
        uVar8 = uVar9;
        uVar9 = uVar8 + 1;
      } while (local_546[uVar8 - 2] != '\0');
      if (uVar8 + 1 < 0x300) {
        cVar17 = ' ';
        pcVar13 = str_100131a5;
        do {
          pcVar13 = pcVar13 + 1;
          local_546[uVar8 - 2] = cVar17;
          uVar8 = uVar8 + 1;
          cVar17 = *pcVar13;
          if (cVar17 == '\0') break;
        } while (uVar8 < 0x2ff);
      }
      local_546[uVar8 - 2] = 0;
      local_1d8 = local_1d8 & 0xffffff00;
      uVar9 = 0;
      do {
        uVar8 = uVar9;
        uVar9 = uVar8 + 1;
      } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
      if (uVar8 + 1 < 0xa0) {
        cVar17 = 'v';
        pcVar13 = str_100131c0;
        do {
          pcVar13 = pcVar13 + 1;
          *(char *)((long)&local_1d8 + uVar8) = cVar17;
          uVar8 = uVar8 + 1;
          cVar17 = *pcVar13;
          if (cVar17 == '\0') break;
        } while (uVar8 < 0x9f);
      }
      *(undefined1 *)((long)&local_1d8 + uVar8) = 0;
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
        *(undefined1 *)((long)&local_1d8 + uVar8 + 1) = 0x66;
        bVar27 = uVar9 != 0x9e;
        uVar9 = uVar8 + 2;
        if (bVar27) {
          uVar9 = uVar8 + 3;
          *(undefined1 *)((long)&local_1d8 + uVar8 + 2) = 0x61;
          if (uVar9 < 0x9f) {
            uVar9 = uVar8 + 4;
            *(undefined1 *)((long)&local_1d8 + uVar8 + 3) = 0x6d;
            if (uVar9 < 0x9f) {
              uVar9 = uVar8 + 5;
              *(undefined1 *)((long)&uStack_1d4 + uVar8) = 0x69;
              if (uVar9 < 0x9f) {
                uVar9 = uVar8 + 6;
                *(undefined1 *)((long)&uStack_1d4 + uVar8 + 1) = 0x6c;
                if (uVar9 < 0x9f) {
                  *(undefined1 *)((long)&uStack_1d4 + uVar8 + 2) = 0x79;
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
      if (uVar9 < 0xa0) {
        *(undefined1 *)((long)&local_1d8 + uVar8) = 0x3d;
        uVar8 = uVar9;
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
        uStack_660 = 0x10008351;
        (*(code *)(ulong)(uint)local_38[3])(str_10012dc2,str_1001318d,&local_1d8);
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
              uStack_660 = 0x10008386;
              iVar5 = (*(code *)(ulong)(uint)local_38[0x2c])(0x1a0,uVar7,local_224);
              if (iVar5 != 0) {
                local_4c = uVar7;
                iVar3 = 1;
              }
            }
            goto LAB_10006bf3;
          }
          goto LAB_10007507;
        }
LAB_1000775a:
        uVar9 = 0;
        do {
          uVar8 = uVar9;
          uVar9 = uVar8 + 1;
        } while (local_546[uVar8 - 2] != '\0');
        if (uVar8 + 1 < 0x300) {
          cVar17 = ' ';
          pcVar13 = str_100131ec;
          do {
            pcVar13 = pcVar13 + 1;
            local_546[uVar8 - 2] = cVar17;
            uVar8 = uVar8 + 1;
            cVar17 = *pcVar13;
            if (cVar17 == '\0') break;
          } while (uVar8 < 0x2ff);
        }
        local_546[uVar8 - 2] = 0;
        local_1d8 = local_1d8 & 0xffffff00;
        uVar9 = 0;
        do {
          uVar8 = uVar9;
          uVar9 = uVar8 + 1;
        } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
        if (uVar8 + 1 < 0xc0) {
          cVar17 = 'v';
          pcVar13 = str_1001320c;
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
          *(undefined1 *)((long)&local_1d8 + uVar8 + 1) = 0x66;
          bVar27 = uVar9 != 0xbe;
          uVar9 = uVar8 + 2;
          if (bVar27) {
            uVar9 = uVar8 + 3;
            *(undefined1 *)((long)&local_1d8 + uVar8 + 2) = 0x61;
            if (uVar9 < 0xbf) {
              uVar9 = uVar8 + 4;
              *(undefined1 *)((long)&local_1d8 + uVar8 + 3) = 0x6d;
              if (uVar9 < 0xbf) {
                uVar9 = uVar8 + 5;
                *(undefined1 *)((long)&uStack_1d4 + uVar8) = 0x69;
                if (uVar9 < 0xbf) {
                  uVar9 = uVar8 + 6;
                  *(undefined1 *)((long)&uStack_1d4 + uVar8 + 1) = 0x6c;
                  if (uVar9 < 0xbf) {
                    *(undefined1 *)((long)&uStack_1d4 + uVar8 + 2) = 0x79;
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
          pcVar13 = str_1001323d;
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
LAB_10006bf3:
        if (*local_38 != 0x54584b57) goto LAB_1000775a;
        uVar7 = local_38[2];
LAB_10007507:
        if ((uVar7 < 0xb0) || ((code *)(ulong)(uint)local_38[0x2b] == (code *)0x0))
        goto LAB_1000775a;
        uStack_660 = 0x1000753a;
        iVar5 = (*(code *)(ulong)(uint)local_38[0x2b])(0x199,&local_1dc,&local_228);
        if (((iVar5 == 0) || ((*local_38 != 0x54584b57 || ((uint)local_38[2] < 0xb0)))) ||
           ((code *)(ulong)(uint)local_38[0x2b] == (code *)0x0)) goto LAB_1000775a;
        uStack_660 = 0x1000758b;
        iVar5 = (*(code *)(ulong)(uint)local_38[0x2b])(0x198,&local_23c,&local_238);
        if (iVar5 == 0) goto LAB_1000775a;
        uVar7 = local_23c >> 8 & 0xff;
        local_214 = local_1dc >> 8 & 0xff;
        local_220 = CONCAT44(PF_PART4(local_220, 4),local_238 >> 8) & 0xffffffff000000ff;
        local_234 = ((int)(local_23c << 0x11) >> 0x1f & 5U) + (local_23c >> 8 & 0x3f) * 10;
        local_230 = ((int)(local_1dc << 0x11) >> 0x1f & 5U) + (local_1dc >> 8 & 0x3f) * 10;
        local_22c = ((int)(local_238 << 0x11) >> 0x1f & 5U) + (local_238 >> 8 & 0x3f) * 10;
        if ((((-1 < (short)local_238) && ((uint)local_220 != 0)) && (uVar7 != 0)) &&
           (local_234 <= local_22c)) {
          uVar25 = local_23c & 0xff;
          if ((local_1dc & 0xff) != 0) {
            uVar25 = local_1dc & 0xff;
          }
          uVar25 = (uint)local_220 << 8 | local_1dc & 0xffff0000 | uVar25;
          if (((uVar25 != local_1dc) && (*local_38 == 0x54584b57)) &&
             ((0xb3 < (uint)local_38[2] && ((code *)(ulong)(uint)local_38[0x2c] != (code *)0x0)))) {
            uStack_660 = 0x100076ba;
            iVar5 = (*(code *)(ulong)(uint)local_38[0x2c])(0x199,uVar25,local_228);
            if (iVar5 != 0) {
              local_1dc = uVar25;
              iVar3 = 1;
              local_214 = (uint)local_220;
              local_230 = local_22c;
            }
          }
        }
        uVar9 = 0;
        do {
          uVar8 = uVar9;
          uVar9 = uVar8 + 1;
        } while (local_546[uVar8 - 2] != '\0');
        if (uVar8 + 1 < 0x300) {
          cVar17 = ' ';
          pcVar13 = str_1001324a;
          do {
            pcVar13 = pcVar13 + 1;
            local_546[uVar8 - 2] = cVar17;
            uVar8 = uVar8 + 1;
            cVar17 = *pcVar13;
            if (cVar17 == '\0') break;
          } while (uVar8 < 0x2ff);
        }
        local_546[uVar8 - 2] = 0;
        uVar25 = local_4c;
        uVar9 = 0;
        do {
          uVar8 = uVar9;
          uVar9 = uVar8 + 1;
        } while (local_546[uVar8 - 2] != '\0');
        if (uVar9 < 0x300) {
          local_546[uVar8 - 2] = 0x20;
          uVar8 = uVar9;
        }
        local_546[uVar8 - 2] = 0;
        uVar9 = 0;
        do {
          uVar8 = uVar9;
          uVar9 = uVar8 + 1;
        } while (local_546[uVar8 - 2] != '\0');
        if (uVar8 + 1 < 0x300) {
          cVar17 = 'm';
          pcVar13 = str_1001323d;
          do {
            pcVar13 = pcVar13 + 1;
            local_546[uVar8 - 2] = cVar17;
            uVar8 = uVar8 + 1;
            cVar17 = *pcVar13;
            if (cVar17 == '\0') break;
          } while (uVar8 < 0x2ff);
        }
        local_546[uVar8 - 2] = 0;
        uVar9 = 0;
        do {
          uVar8 = uVar9;
          uVar9 = uVar8 + 1;
        } while (local_546[uVar8 - 2] != '\0');
        if (uVar9 < 0x300) {
          local_546[uVar8 - 2] = 0x3d;
          uVar8 = uVar9;
        }
        local_546[uVar8 - 2] = 0;
        iVar5 = 8;
        do {
          uVar19 = uVar25 >> ((char)iVar5 * '\x04' - 4U & 0x1f) & 0xf;
          cVar17 = (char)uVar19;
          cVar22 = cVar17 + '7';
          if (uVar19 < 10) {
            cVar22 = cVar17 + '0';
          }
          uVar9 = 0;
          do {
            uVar8 = uVar9;
            uVar9 = uVar8 + 1;
          } while (local_546[uVar8 - 2] != '\0');
          if (uVar8 + 1 < 0x300) {
            local_546[uVar8 - 2] = cVar22;
            local_546[uVar8 - 1] = 0;
          }
          uVar19 = local_1dc;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
        uVar9 = 0;
        do {
          uVar8 = uVar9;
          uVar9 = uVar8 + 1;
        } while (local_546[uVar8 - 2] != '\0');
        if (uVar9 < 0x300) {
          local_546[uVar8 - 2] = 0x20;
          uVar8 = uVar9;
        }
        local_546[uVar8 - 2] = 0;
        uVar9 = 0;
        do {
          uVar8 = uVar9;
          uVar9 = uVar8 + 1;
        } while (local_546[uVar8 - 2] != '\0');
        if (uVar8 + 1 < 0x300) {
          cVar17 = 'p';
          pcVar13 = str_1001325c;
          do {
            pcVar13 = pcVar13 + 1;
            local_546[uVar8 - 2] = cVar17;
            uVar8 = uVar8 + 1;
            cVar17 = *pcVar13;
            if (cVar17 == '\0') break;
          } while (uVar8 < 0x2ff);
        }
        local_546[uVar8 - 2] = 0;
        uVar9 = 0;
        do {
          uVar8 = uVar9;
          uVar9 = uVar8 + 1;
        } while (local_546[uVar8 - 2] != '\0');
        if (uVar9 < 0x300) {
          local_546[uVar8 - 2] = 0x3d;
          uVar8 = uVar9;
        }
        local_546[uVar8 - 2] = 0;
        iVar5 = 8;
        do {
          uVar25 = uVar19 >> ((char)iVar5 * '\x04' - 4U & 0x1f) & 0xf;
          cVar17 = (char)uVar25;
          cVar22 = cVar17 + '7';
          if (uVar25 < 10) {
            cVar22 = cVar17 + '0';
          }
          uVar9 = 0;
          do {
            uVar8 = uVar9;
            uVar9 = uVar8 + 1;
          } while (local_546[uVar8 - 2] != '\0');
          if (uVar8 + 1 < 0x300) {
            local_546[uVar8 - 2] = cVar22;
            local_546[uVar8 - 1] = 0;
          }
          uVar25 = local_23c;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
        uVar9 = 0;
        do {
          uVar8 = uVar9;
          uVar9 = uVar8 + 1;
        } while (local_546[uVar8 - 2] != '\0');
        if (uVar9 < 0x300) {
          local_546[uVar8 - 2] = 0x20;
          uVar8 = uVar9;
        }
        local_546[uVar8 - 2] = 0;
        uVar9 = 0;
        do {
          uVar8 = uVar9;
          uVar9 = uVar8 + 1;
        } while (local_546[uVar8 - 2] != '\0');
        if (uVar8 + 1 < 0x300) {
          cVar17 = 'p';
          pcVar13 = str_10013266;
          do {
            pcVar13 = pcVar13 + 1;
            local_546[uVar8 - 2] = cVar17;
            uVar8 = uVar8 + 1;
            cVar17 = *pcVar13;
            if (cVar17 == '\0') break;
          } while (uVar8 < 0x2ff);
        }
        local_546[uVar8 - 2] = 0;
        uVar9 = 0;
        do {
          uVar8 = uVar9;
          uVar9 = uVar8 + 1;
        } while (local_546[uVar8 - 2] != '\0');
        if (uVar9 < 0x300) {
          local_546[uVar8 - 2] = 0x3d;
          uVar8 = uVar9;
        }
        local_546[uVar8 - 2] = 0;
        iVar5 = 8;
        do {
          uVar19 = uVar25 >> ((char)iVar5 * '\x04' - 4U & 0x1f) & 0xf;
          cVar17 = (char)uVar19;
          cVar22 = cVar17 + '7';
          if (uVar19 < 10) {
            cVar22 = cVar17 + '0';
          }
          uVar9 = 0;
          do {
            uVar8 = uVar9;
            uVar9 = uVar8 + 1;
          } while (local_546[uVar8 - 2] != '\0');
          if (uVar8 + 1 < 0x300) {
            local_546[uVar8 - 2] = cVar22;
            local_546[uVar8 - 1] = 0;
          }
          uVar19 = local_238;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
        uVar9 = 0;
        do {
          uVar8 = uVar9;
          uVar9 = uVar8 + 1;
        } while (local_546[uVar8 - 2] != '\0');
        if (uVar9 < 0x300) {
          local_546[uVar8 - 2] = 0x20;
          uVar8 = uVar9;
        }
        local_546[uVar8 - 2] = 0;
        uVar9 = 0;
        do {
          uVar8 = uVar9;
          uVar9 = uVar8 + 1;
        } while (local_546[uVar8 - 2] != '\0');
        if (uVar8 + 1 < 0x300) {
          cVar17 = 'p';
          pcVar13 = str_10013273;
          do {
            pcVar13 = pcVar13 + 1;
            local_546[uVar8 - 2] = cVar17;
            uVar8 = uVar8 + 1;
            cVar17 = *pcVar13;
            if (cVar17 == '\0') break;
          } while (uVar8 < 0x2ff);
        }
        local_546[uVar8 - 2] = 0;
        uVar9 = 0;
        do {
          uVar8 = uVar9;
          uVar9 = uVar8 + 1;
        } while (local_546[uVar8 - 2] != '\0');
        if (uVar9 < 0x300) {
          local_546[uVar8 - 2] = 0x3d;
          uVar8 = uVar9;
        }
        local_546[uVar8 - 2] = 0;
        iVar5 = 8;
        do {
          uVar25 = uVar19 >> ((char)iVar5 * '\x04' - 4U & 0x1f) & 0xf;
          cVar17 = (char)uVar25;
          cVar22 = cVar17 + '7';
          if (uVar25 < 10) {
            cVar22 = cVar17 + '0';
          }
          uVar9 = 0;
          do {
            uVar8 = uVar9;
            uVar9 = uVar8 + 1;
          } while (local_546[uVar8 - 2] != '\0');
          if (uVar8 + 1 < 0x300) {
            local_546[uVar8 - 2] = cVar22;
            local_546[uVar8 - 1] = 0;
          }
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
        uVar9 = 0;
        do {
          uVar8 = uVar9;
          uVar9 = uVar8 + 1;
        } while (local_546[uVar8 - 2] != '\0');
        if (uVar9 < 0x300) {
          local_546[uVar8 - 2] = 0x20;
          uVar8 = uVar9;
        }
        local_546[uVar8 - 2] = 0;
        uVar9 = 0;
        do {
          uVar8 = uVar9;
          uVar9 = uVar8 + 1;
        } while (local_546[uVar8 - 2] != '\0');
        if (uVar8 + 1 < 0x300) {
          cVar17 = 'c';
          pcVar13 = str_10013280;
          do {
            pcVar13 = pcVar13 + 1;
            local_546[uVar8 - 2] = cVar17;
            uVar8 = uVar8 + 1;
            cVar17 = *pcVar13;
            if (cVar17 == '\0') break;
          } while (uVar8 < 0x2ff);
        }
        local_546[uVar8 - 2] = 0;
        uVar9 = 0;
        do {
          uVar8 = uVar9;
          uVar9 = uVar8 + 1;
        } while (local_546[uVar8 - 2] != '\0');
        if (uVar9 < 0x300) {
          local_546[uVar8 - 2] = 0x3d;
          uVar8 = uVar9;
        }
        local_546[uVar8 - 2] = 0;
        if (uVar7 == 0) {
          uVar9 = 0;
          do {
            uVar8 = uVar9;
            uVar9 = uVar8 + 1;
          } while (local_546[uVar8 - 2] != '\0');
          if (uVar8 + 1 < 0x300) {
            *(undefined2 *)(local_546 + (uVar8 - 2)) = 0x30;
          }
        }
        else {
          uVar9 = 0xffffffffffffffff;
          uVar25 = uVar7;
          do {
            uVar8 = uVar9;
            *(byte *)((long)&local_1d8 + uVar8 + 1) =
                 (char)uVar25 + (char)(uVar25 / 10) * -10 | 0x30;
            uVar9 = uVar8 + 1;
            if (8 < uVar9) break;
            bVar27 = 9 < uVar25;
            uVar25 = uVar25 / 10;
          } while (bVar27);
          if ((uVar9 & 1) == 0) {
            uVar14 = 0;
            do {
              uVar20 = uVar14;
              uVar14 = uVar20 + 1;
            } while (local_546[uVar20 - 2] != '\0');
            uVar14 = uVar9;
            if (uVar20 + 1 < 0x300) {
              local_546[uVar20 - 2] = *(undefined1 *)((long)&local_1d8 + uVar8 + 1);
              local_546[uVar20 - 1] = 0;
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
            } while (local_546[uVar8 - 2] != '\0');
            if (uVar8 + 1 < 0x300) {
              local_546[uVar8 - 2] = *(undefined1 *)((long)&local_1dc + uVar14 + 3);
              local_546[uVar8 - 1] = 0;
            }
            lVar1 = uVar14 + 2;
            uVar14 = uVar14 - 2;
            uVar9 = 0;
            do {
              uVar8 = uVar9;
              uVar9 = uVar8 + 1;
            } while (local_546[uVar8 - 2] != '\0');
            uVar9 = uVar14;
            if (uVar8 + 1 < 0x300) {
              local_546[uVar8 - 2] = *(undefined1 *)((long)&local_1dc + lVar1);
              local_546[uVar8 - 1] = 0;
            }
          }
        }
        uVar9 = 0;
        do {
          uVar8 = uVar9;
          uVar9 = uVar8 + 1;
        } while (local_546[uVar8 - 2] != '\0');
        if (uVar9 < 0x300) {
          local_546[uVar8 - 2] = 0x20;
          uVar8 = uVar9;
        }
        local_546[uVar8 - 2] = 0;
        uVar9 = 0;
        do {
          uVar8 = uVar9;
          uVar9 = uVar8 + 1;
        } while (local_546[uVar8 - 2] != '\0');
        if (uVar8 + 1 < 0x300) {
          cVar17 = 't';
          pcVar13 = str_10013291;
          do {
            pcVar13 = pcVar13 + 1;
            local_546[uVar8 - 2] = cVar17;
            uVar8 = uVar8 + 1;
            cVar17 = *pcVar13;
            if (cVar17 == '\0') break;
          } while (uVar8 < 0x2ff);
        }
        local_546[uVar8 - 2] = 0;
        uVar9 = 0;
        do {
          uVar8 = uVar9;
          uVar9 = uVar8 + 1;
        } while (local_546[uVar8 - 2] != '\0');
        if (uVar9 < 0x300) {
          local_546[uVar8 - 2] = 0x3d;
          uVar8 = uVar9;
        }
        local_546[uVar8 - 2] = 0;
        if (local_214 == 0) {
          uVar9 = 0;
          do {
            uVar8 = uVar9;
            uVar9 = uVar8 + 1;
          } while (local_546[uVar8 - 2] != '\0');
          if (uVar8 + 1 < 0x300) {
            *(undefined2 *)(local_546 + (uVar8 - 2)) = 0x30;
          }
        }
        else {
          uVar9 = 0xffffffffffffffff;
          uVar25 = local_214;
          do {
            uVar8 = uVar9;
            *(byte *)((long)&local_1d8 + uVar8 + 1) =
                 (char)uVar25 + (char)(uVar25 / 10) * -10 | 0x30;
            uVar9 = uVar8 + 1;
            if (8 < uVar9) break;
            bVar27 = 9 < uVar25;
            uVar25 = uVar25 / 10;
          } while (bVar27);
          if ((uVar9 & 1) == 0) {
            uVar14 = 0;
            do {
              uVar20 = uVar14;
              uVar14 = uVar20 + 1;
            } while (local_546[uVar20 - 2] != '\0');
            uVar14 = uVar9;
            if (uVar20 + 1 < 0x300) {
              local_546[uVar20 - 2] = *(undefined1 *)((long)&local_1d8 + uVar8 + 1);
              local_546[uVar20 - 1] = 0;
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
            } while (local_546[uVar8 - 2] != '\0');
            if (uVar8 + 1 < 0x300) {
              local_546[uVar8 - 2] = *(undefined1 *)((long)&local_1dc + uVar14 + 3);
              local_546[uVar8 - 1] = 0;
            }
            lVar1 = uVar14 + 2;
            uVar14 = uVar14 - 2;
            uVar9 = 0;
            do {
              uVar8 = uVar9;
              uVar9 = uVar8 + 1;
            } while (local_546[uVar8 - 2] != '\0');
            uVar9 = uVar14;
            if (uVar8 + 1 < 0x300) {
              local_546[uVar8 - 2] = *(undefined1 *)((long)&local_1dc + lVar1);
              local_546[uVar8 - 1] = 0;
            }
          }
        }
        uVar9 = 0;
        do {
          uVar8 = uVar9;
          uVar9 = uVar8 + 1;
        } while (local_546[uVar8 - 2] != '\0');
        if (uVar9 < 0x300) {
          local_546[uVar8 - 2] = 0x20;
          uVar8 = uVar9;
        }
        local_546[uVar8 - 2] = 0;
        uVar9 = 0;
        do {
          uVar8 = uVar9;
          uVar9 = uVar8 + 1;
        } while (local_546[uVar8 - 2] != '\0');
        if (uVar8 + 1 < 0x300) {
          cVar17 = 'm';
          pcVar13 = str_100132a1;
          do {
            pcVar13 = pcVar13 + 1;
            local_546[uVar8 - 2] = cVar17;
            uVar8 = uVar8 + 1;
            cVar17 = *pcVar13;
            if (cVar17 == '\0') break;
          } while (uVar8 < 0x2ff);
        }
        local_546[uVar8 - 2] = 0;
        uVar9 = 0;
        do {
          uVar8 = uVar9;
          uVar9 = uVar8 + 1;
        } while (local_546[uVar8 - 2] != '\0');
        if (uVar9 < 0x300) {
          local_546[uVar8 - 2] = 0x3d;
          uVar8 = uVar9;
        }
        local_546[uVar8 - 2] = 0;
        if ((uint)local_220 == 0) {
          uVar9 = 0;
          do {
            uVar8 = uVar9;
            uVar9 = uVar8 + 1;
          } while (local_546[uVar8 - 2] != '\0');
          if (uVar8 + 1 < 0x300) {
            *(undefined2 *)(local_546 + (uVar8 - 2)) = 0x30;
          }
        }
        else {
          uVar9 = 0xffffffffffffffff;
          uVar25 = (uint)local_220;
          do {
            uVar8 = uVar9;
            *(byte *)((long)&local_1d8 + uVar8 + 1) =
                 (char)uVar25 + (char)(uVar25 / 10) * -10 | 0x30;
            uVar9 = uVar8 + 1;
            if (8 < uVar9) break;
            bVar27 = 9 < uVar25;
            uVar25 = uVar25 / 10;
          } while (bVar27);
          if ((uVar9 & 1) == 0) {
            uVar14 = 0;
            do {
              uVar20 = uVar14;
              uVar14 = uVar20 + 1;
            } while (local_546[uVar20 - 2] != '\0');
            uVar14 = uVar9;
            if (uVar20 + 1 < 0x300) {
              local_546[uVar20 - 2] = *(undefined1 *)((long)&local_1d8 + uVar8 + 1);
              local_546[uVar20 - 1] = 0;
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
            } while (local_546[uVar8 - 2] != '\0');
            if (uVar8 + 1 < 0x300) {
              local_546[uVar8 - 2] = *(undefined1 *)((long)&local_1dc + uVar14 + 3);
              local_546[uVar8 - 1] = 0;
            }
            lVar1 = uVar14 + 2;
            uVar14 = uVar14 - 2;
            uVar9 = 0;
            do {
              uVar8 = uVar9;
              uVar9 = uVar8 + 1;
            } while (local_546[uVar8 - 2] != '\0');
            uVar9 = uVar14;
            if (uVar8 + 1 < 0x300) {
              local_546[uVar8 - 2] = *(undefined1 *)((long)&local_1dc + lVar1);
              local_546[uVar8 - 1] = 0;
            }
          }
        }
        uStack_660 = 0x1000931e;
        recovered_100118c0((long)&local_548,0x300,str_100132ae,local_234);
        uStack_660 = 0x10009338;
        recovered_100118c0((long)&local_548,0x300,str_100132bb,local_230);
        uStack_660 = 0x10009356;
        recovered_100118c0((long)&local_548,0x300,str_100132c7,local_22c);
        pcVar13 = &DAT_10012fe1;
        if (iVar3 == 0) {
          pcVar13 = str_10012fe6;
        }
        acStack_46[1] = *pcVar13;
        if (*pcVar13 != '\0') {
          uVar9 = 0;
          do {
            uVar8 = uVar9;
            uVar9 = uVar8 + 1;
          } while (local_546[uVar8 - 2] != '\0');
          if (uVar9 < 0x300) {
            local_546[uVar8 - 2] = 0x20;
            uVar8 = uVar9;
          }
          local_546[uVar8 - 2] = 0;
          uVar9 = 0;
          do {
            uVar8 = uVar9;
            uVar9 = uVar8 + 1;
          } while (local_546[uVar8 - 2] != '\0');
          if (uVar8 + 1 < 0x300) {
            cVar17 = 'p';
            pcVar11 = str_100132d0;
            do {
              pcVar11 = pcVar11 + 1;
              local_546[uVar8 - 2] = cVar17;
              uVar8 = uVar8 + 1;
              cVar17 = *pcVar11;
              if (cVar17 == '\0') break;
            } while (uVar8 < 0x2ff);
          }
          local_546[uVar8 - 2] = 0;
          uVar9 = 0;
          do {
            uVar8 = uVar9;
            uVar9 = uVar8 + 1;
          } while (local_546[uVar8 - 2] != '\0');
          if (uVar9 < 0x300) {
            local_546[uVar8 - 2] = 0x3d;
            uVar8 = uVar9;
          }
          local_546[uVar8 - 2] = 0;
          uVar9 = 0;
          do {
            uVar8 = uVar9;
            uVar9 = uVar8 + 1;
          } while (local_546[uVar8 - 2] != '\0');
          if (uVar8 + 1 < 0x300) {
            cVar17 = acStack_46[1];
            pcVar11 = pcVar13;
            do {
              pcVar11 = pcVar11 + 1;
              local_546[uVar8 - 2] = cVar17;
              uVar8 = uVar8 + 1;
              cVar17 = *pcVar11;
              if (cVar17 == '\0') break;
            } while (uVar8 < 0x2ff);
          }
          local_546[uVar8 - 2] = 0;
        }
        local_1d8 = local_1d8 & 0xffffff00;
        uVar9 = 0;
        do {
          uVar8 = uVar9;
          uVar9 = uVar8 + 1;
        } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
        if (uVar8 + 1 < 0x140) {
          cVar17 = 'v';
          pcVar11 = str_100132e3;
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
          *(undefined1 *)((long)&local_1d8 + uVar8 + 1) = 0x66;
          bVar27 = uVar9 != 0x13e;
          uVar9 = uVar8 + 2;
          if (bVar27) {
            uVar9 = uVar8 + 3;
            *(undefined1 *)((long)&local_1d8 + uVar8 + 2) = 0x61;
            if (uVar9 < 0x13f) {
              uVar9 = uVar8 + 4;
              *(undefined1 *)((long)&local_1d8 + uVar8 + 3) = 0x6d;
              if (uVar9 < 0x13f) {
                uVar9 = uVar8 + 5;
                *(undefined1 *)((long)&uStack_1d4 + uVar8) = 0x69;
                if (uVar9 < 0x13f) {
                  uVar9 = uVar8 + 6;
                  *(undefined1 *)((long)&uStack_1d4 + uVar8 + 1) = 0x6c;
                  if (uVar9 < 0x13f) {
                    *(undefined1 *)((long)&uStack_1d4 + uVar8 + 2) = 0x79;
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
        if (uVar9 < 0x140) {
          *(undefined1 *)((long)&local_1d8 + uVar8) = 0x3d;
          uVar8 = uVar9;
        }
        *(undefined1 *)((long)&local_1d8 + uVar8) = 0;
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
          uVar9 = 0xffffffffffffffff;
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
          pcVar11 = str_10013280;
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
          pcVar11 = str_10013291;
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
          pcVar11 = str_100132a1;
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
        uStack_660 = 0x10009ea4;
        recovered_100118c0((long)&local_1d8,0x140,str_100132ae,local_234);
        uStack_660 = 0x10009ebe;
        recovered_100118c0((long)&local_1d8,0x140,str_100132bb,local_230);
        uStack_660 = 0x10009ed8;
        recovered_100118c0((long)&local_1d8,0x140,str_100132c7,local_22c);
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
        uStack_660 = 0x1000a05f;
        (*(code *)(ulong)(uint)local_38[3])(str_10012dc2,str_1001318d,&local_1d8);
      }
    }
    api = local_38;
  }
  else {
LAB_100011a1:
    uVar9 = 0;
    do {
      uVar8 = uVar9;
      uVar9 = uVar8 + 1;
    } while (local_546[uVar8 - 2] != '\0');
    if (uVar8 + 1 < 0x300) {
      cVar17 = ' ';
      pcVar13 = str_1001310d;
      do {
        pcVar13 = pcVar13 + 1;
        local_546[uVar8 - 2] = cVar17;
        uVar8 = uVar8 + 1;
        cVar17 = *pcVar13;
        if (cVar17 == '\0') break;
      } while (uVar8 < 0x2ff);
    }
    local_546[uVar8 - 2] = 0;
LAB_10001204:
    iVar3 = 0;
  }
  piVar2 = local_38;
  uStack_560 = CONCAT44(PF_PART4(uStack_560, 4),iVar3);
  if (((*api == 0x54584b57) && (0x5f < (uint)api[2])) && (api[0x17] != 0)) {
    uVar16 = 0;
    do {
      local_220 = CONCAT44(PF_PART4(local_220, 4),uVar16);
      uVar16 = uVar16 & 0xff;
      iVar3 = 0;
      do {
        uVar15 = (undefined1)iVar3;
        uStack_660 = 0x1000128e;
        uVar6 = recovered_10011ad0(piVar2,uVar16,uVar15,0,(undefined1 *)&local_1d8);
        if ((int)uVar6 != 0) {
          uStack_660 = 0x100012a4;
          recovered_1000c400(piVar2,(byte *)&local_1d8,(int *)local_5a8);
          if ((char)uStack_1cc < '\0') {
            uStack_660 = 0x100012c3;
            uVar6 = recovered_10011ad0(piVar2,uVar16,uVar15,1,(undefined1 *)&local_210);
            if ((int)uVar6 != 0) {
              uStack_660 = 0x100012d5;
              recovered_1000c400(piVar2,(byte *)&local_210,(int *)local_5a8);
            }
            uStack_660 = 0x100012eb;
            uVar6 = recovered_10011ad0(piVar2,uVar16,uVar15,2,(undefined1 *)&local_210);
            if ((int)uVar6 != 0) {
              uStack_660 = 0x100012fd;
              recovered_1000c400(piVar2,(byte *)&local_210,(int *)local_5a8);
            }
            uStack_660 = 0x10001313;
            uVar6 = recovered_10011ad0(piVar2,uVar16,uVar15,3,(undefined1 *)&local_210);
            if ((int)uVar6 != 0) {
              uStack_660 = 0x10001325;
              recovered_1000c400(piVar2,(byte *)&local_210,(int *)local_5a8);
            }
            uStack_660 = 0x1000133b;
            uVar6 = recovered_10011ad0(piVar2,uVar16,uVar15,4,(undefined1 *)&local_210);
            if ((int)uVar6 != 0) {
              uStack_660 = 0x1000134d;
              recovered_1000c400(piVar2,(byte *)&local_210,(int *)local_5a8);
            }
            uStack_660 = 0x10001363;
            uVar6 = recovered_10011ad0(piVar2,uVar16,uVar15,5,(undefined1 *)&local_210);
            if ((int)uVar6 != 0) {
              uStack_660 = 0x10001375;
              recovered_1000c400(piVar2,(byte *)&local_210,(int *)local_5a8);
            }
            uStack_660 = 0x1000138b;
            uVar6 = recovered_10011ad0(piVar2,uVar16,uVar15,6,(undefined1 *)&local_210);
            if ((int)uVar6 != 0) {
              uStack_660 = 0x1000139d;
              recovered_1000c400(piVar2,(byte *)&local_210,(int *)local_5a8);
            }
            uStack_660 = 0x100013b3;
            uVar6 = recovered_10011ad0(piVar2,uVar16,uVar15,7,(undefined1 *)&local_210);
            if ((int)uVar6 != 0) {
              uStack_660 = 0x100013c9;
              recovered_1000c400(piVar2,(byte *)&local_210,(int *)local_5a8);
            }
          }
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 != 0x20);
      uVar16 = (uint)local_220 + 1;
    } while (uVar16 != 0x10);
    api = local_38;
  }
  pbVar26 = local_5b0;
  if (local_5a8[3] != 0) {
    local_1d8 = local_1d8 & 0xffffff00;
    uVar9 = 0;
    do {
      uVar8 = uVar9;
      uVar9 = uVar8 + 1;
    } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
    if (uVar8 + 1 < 0x180) {
      cVar17 = 'c';
      pcVar13 = str_100136bf;
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
            *(undefined1 *)(uVar8 + 4 + (long)&local_1d8) = 0x69;
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
    uVar16 = local_5a8[3];
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
            *(undefined1 *)(uVar8 + 4 + (long)&local_1d8) = 0x70;
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
    if (local_5a8[4] == 0) {
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
      uVar16 = local_5a8[4];
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
    if (uVar8 + 1 < 0x180) {
      cVar17 = 'd';
      pcVar13 = str_100136ed;
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
    if (local_5a8[5] == 0) {
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
      uVar16 = local_5a8[5];
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
      *(undefined1 *)(uVar9 + (long)&local_1d8) = 0x61;
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
    if (local_5a8[6] == 0) {
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
      uVar16 = local_5a8[6];
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
    if (local_5a8[7] == 0) {
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
      uVar16 = local_5a8[7];
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
    if (local_5a8[8] == 0) {
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
      uVar16 = local_5a8[8];
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
      *(undefined1 *)(uVar9 + (long)&local_1d8) = 0x75;
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
    if (local_5a8[9] == 0) {
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
      uVar16 = local_5a8[9];
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
      *(undefined1 *)(uVar9 + (long)&local_1d8) = 0x6f;
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
    if (local_5a8[10] == 0) {
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
      uVar16 = local_5a8[10];
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
      *(undefined1 *)(uVar9 + (long)&local_1d8) = 0x65;
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
    if (local_5a8[0xb] == 0) {
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
      uVar16 = local_5a8[0xb];
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
        *(undefined1 *)(uVar8 + 2 + (long)&local_1d8) = 0x6d;
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
    if (local_5a8[0xc] == 0) {
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
      uVar16 = local_5a8[0xc];
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
            *(undefined1 *)(uVar8 + 4 + (long)&local_1d8) = 0x77;
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
    if (local_5a8[0xd] == 0) {
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
      uVar16 = local_5a8[0xd];
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
      pcVar13 = str_100136fc;
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
      uStack_660 = 0x10002e05;
      (*(code *)(ulong)(uint)api[3])(str_1001373a,str_10013761,&local_1d8);
    }
  }
  uStack_660 = 0x10002e1b;
  recovered_1000a070((long)pbVar26,local_5a8,(undefined1 *)&local_548);
  DAT_10015000 = api;
  if ((code *)(ulong)(uint)api[8] == (code *)0x0) {
LAB_10002e9e:
    uVar9 = 0;
    do {
      uVar8 = uVar9;
      uVar9 = uVar8 + 1;
    } while (local_546[uVar8 - 2] != '\0');
    uVar4 = 0;
    if (uVar8 + 1 < 0x300) {
      cVar17 = ' ';
      pcVar13 = str_100137c5;
      do {
        pcVar13 = pcVar13 + 1;
        local_546[uVar8 - 2] = cVar17;
        uVar8 = uVar8 + 1;
        cVar17 = *pcVar13;
        if (cVar17 == '\0') break;
      } while (uVar8 < 0x2ff);
    }
  }
  else {
    uStack_660 = 0x10002e41;
    iVar3 = (*(code *)(ulong)(uint)api[8])(recovered_100120e0,3,str_10012de7);
    if (iVar3 == 0) goto LAB_10002e9e;
    uVar9 = 0;
    do {
      uVar8 = uVar9;
      uVar9 = uVar8 + 1;
    } while (local_546[uVar8 - 2] != '\0');
    uVar4 = 1;
    if (uVar8 + 1 < 0x300) {
      cVar17 = ' ';
      pcVar13 = str_100137ae;
      do {
        pcVar13 = pcVar13 + 1;
        local_546[uVar8 - 2] = cVar17;
        uVar8 = uVar8 + 1;
        cVar17 = *pcVar13;
        if (cVar17 == '\0') break;
      } while (uVar8 < 0x2ff);
    }
  }
  local_546[uVar8 - 2] = 0;
  if (((*api == 0x54584b57) && (0xa7 < (uint)api[2])) &&
     ((code *)(ulong)(uint)api[0x29] != (code *)0x0)) {
    uStack_660 = 0x10002f2b;
    iVar3 = (*(code *)(ulong)(uint)api[0x29])(recovered_10012110,7,str_10012de7);
    if (iVar3 == 0) goto LAB_10002f79;
    uVar9 = 0;
    do {
      uVar8 = uVar9;
      uVar9 = uVar8 + 1;
    } while (local_546[uVar8 - 2] != '\0');
    uVar4 = 1;
    if (uVar8 + 1 < 0x300) {
      cVar17 = ' ';
      pcVar13 = str_100137e2;
      do {
        pcVar13 = pcVar13 + 1;
        local_546[uVar8 - 2] = cVar17;
        uVar8 = uVar8 + 1;
        cVar17 = *pcVar13;
        if (cVar17 == '\0') break;
      } while (uVar8 < 0x2ff);
    }
  }
  else {
LAB_10002f79:
    uVar9 = 0;
    do {
      uVar8 = uVar9;
      uVar9 = uVar8 + 1;
    } while (local_546[uVar8 - 2] != '\0');
    if (uVar8 + 1 < 0x300) {
      cVar17 = ' ';
      pcVar13 = str_100137fa;
      do {
        pcVar13 = pcVar13 + 1;
        local_546[uVar8 - 2] = cVar17;
        uVar8 = uVar8 + 1;
        cVar17 = *pcVar13;
        if (cVar17 == '\0') break;
      } while (uVar8 < 0x2ff);
    }
  }
  local_546[uVar8 - 2] = 0;
  uVar9 = 0;
  do {
    uVar8 = uVar9;
    uVar9 = uVar8 + 1;
  } while (local_546[uVar8 - 2] != '\0');
  if (uVar8 + 1 < 0x300) {
    cVar17 = ' ';
    pcVar13 = str_10013782;
    do {
      pcVar13 = pcVar13 + 1;
      local_546[uVar8 - 2] = cVar17;
      uVar8 = uVar8 + 1;
      cVar17 = *pcVar13;
      if (cVar17 == '\0') break;
    } while (uVar8 < 0x2ff);
  }
  local_546[uVar8 - 2] = 0;
  uStack_560 = CONCAT44(uVar4,(undefined4)uStack_560);
  if (((*api == 0x54584b57) && (0x43 < (uint)api[2])) &&
     ((code *)(ulong)(uint)api[0x10] != (code *)0x0)) {
    uStack_660 = 0x1000306c;
    iVar3 = (*(code *)(ulong)(uint)api[0x10])(&local_210);
    if (((iVar3 != 0) && (local_200 != 0)) &&
       ((local_1fc != 0 && ((local_204 != 0 && (local_210 != 0)))))) {
      uStack_660 = 0x100030c7;
      recovered_10012150((long)&local_548,0x300,str_10013837,(long)&local_210);
      if ((*api == 0x54584b57) &&
         ((0xb7 < (uint)api[2] && ((code *)(ulong)(uint)api[0x2d] != (code *)0x0)))) {
        uStack_660 = 0x100030f0;
        uVar9 = (*(code *)(ulong)(uint)api[0x2d])(1);
        if ((uVar9 & 1) == 0) goto LAB_100030f8;
        uVar9 = 0;
        do {
          uVar8 = uVar9;
          uVar9 = uVar8 + 1;
        } while (local_546[uVar8 - 2] != '\0');
        if (uVar8 + 1 < 0x300) {
          cVar17 = ' ';
          pcVar13 = str_10013849;
          do {
            pcVar13 = pcVar13 + 1;
            local_546[uVar8 - 2] = cVar17;
            uVar8 = uVar8 + 1;
            cVar17 = *pcVar13;
            if (cVar17 == '\0') break;
          } while (uVar8 < 0x2ff);
        }
      }
      else {
LAB_100030f8:
        uVar9 = 0;
        do {
          uVar8 = uVar9;
          uVar9 = uVar8 + 1;
        } while (local_546[uVar8 - 2] != '\0');
        if (uVar8 + 1 < 0x300) {
          cVar17 = ' ';
          pcVar13 = str_1001386b;
          do {
            pcVar13 = pcVar13 + 1;
            local_546[uVar8 - 2] = cVar17;
            uVar8 = uVar8 + 1;
            cVar17 = *pcVar13;
            if (cVar17 == '\0') break;
          } while (uVar8 < 0x2ff);
        }
      }
      local_546[uVar8 - 2] = 0;
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
      local_1d8 = _DAT_10012cf0;
      uStack_1d4 = iRam0000000010012cf4;
      iStack_1d0 = iRam0000000010012cf8;
      uStack_1cc = iRam0000000010012cfc;
      local_1c8 = 0;
      uVar9 = 0xffffffffffffffff;
      do {
        uVar8 = uVar9;
        uVar9 = uVar8 + 1;
      } while (*(char *)((long)&local_1c8 + uVar8 + 1) != '\0');
      if (uVar8 + 2 < 0x40) {
        cVar17 = 'a';
        pcVar13 = str_10012e04;
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
        pcVar13 = str_100138ab;
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
         ((code *)(ulong)(uint)api[0x31] != (code *)0x0)) {
        uStack_660 = 0x1000327f;
        iVar3 = (*(code *)(ulong)(uint)api[0x31])(&local_1d8);
        if (iVar3 == 0) goto LAB_1000519d;
        uVar9 = 0;
        do {
          uVar8 = uVar9;
          uVar9 = uVar8 + 1;
        } while (local_546[uVar8 - 2] != '\0');
        if (uVar8 + 1 < 0x300) {
          cVar17 = ' ';
          pcVar13 = str_100138c0;
          do {
            pcVar13 = pcVar13 + 1;
            local_546[uVar8 - 2] = cVar17;
            uVar8 = uVar8 + 1;
            cVar17 = *pcVar13;
            if (cVar17 == '\0') break;
          } while (uVar8 < 0x2ff);
        }
      }
      else {
LAB_1000519d:
        uVar9 = 0;
        do {
          uVar8 = uVar9;
          uVar9 = uVar8 + 1;
        } while (local_546[uVar8 - 2] != '\0');
        if (uVar8 + 1 < 0x300) {
          cVar17 = ' ';
          pcVar13 = str_100138d6;
          do {
            pcVar13 = pcVar13 + 1;
            local_546[uVar8 - 2] = cVar17;
            uVar8 = uVar8 + 1;
            cVar17 = *pcVar13;
            if (cVar17 == '\0') break;
          } while (uVar8 < 0x2ff);
        }
      }
      local_546[uVar8 - 2] = 0;
      uVar9 = 0;
      do {
        uVar8 = uVar9;
        uVar9 = uVar8 + 1;
      } while (local_546[uVar8 - 2] != '\0');
      local_558 = 1;
      if (uVar8 + 1 < 0x300) {
        cVar17 = ' ';
        pcVar13 = str_10013887;
        do {
          pcVar13 = pcVar13 + 1;
          local_546[uVar8 - 2] = cVar17;
          uVar8 = uVar8 + 1;
          cVar17 = *pcVar13;
          if (cVar17 == '\0') break;
        } while (uVar8 < 0x2ff);
      }
      goto LAB_1000332e;
    }
  }
  uVar9 = 0;
  do {
    uVar8 = uVar9;
    uVar9 = uVar8 + 1;
  } while (local_546[uVar8 - 2] != '\0');
  local_558 = 0;
  if (uVar8 + 1 < 0x300) {
    cVar17 = ' ';
    pcVar13 = str_10013818;
    do {
      pcVar13 = pcVar13 + 1;
      local_546[uVar8 - 2] = cVar17;
      uVar8 = uVar8 + 1;
      cVar17 = *pcVar13;
      if (cVar17 == '\0') break;
    } while (uVar8 < 0x2ff);
  }
LAB_1000332e:
  local_546[uVar8 - 2] = 0;
  if (local_5a8[8] != 0) {
    local_1d8 = local_1d8 & 0xffffff00;
    uVar9 = 0;
    do {
      uVar8 = uVar9;
      uVar9 = uVar8 + 1;
    } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
    if (uVar8 + 1 < 0x180) {
      cVar17 = 'b';
      pcVar13 = str_100138ef;
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
      pcVar13 = str_10013943;
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
    uVar16 = local_5a8[8];
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
      *(undefined1 *)(uVar9 + (long)&local_1d8) = 0x75;
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
    if (local_5a8[9] == 0) {
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
      uVar16 = local_5a8[9];
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
      *(undefined1 *)(uVar9 + (long)&local_1d8) = 0x6f;
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
    if (local_5a8[10] == 0) {
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
      uVar16 = local_5a8[10];
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
      *(undefined1 *)(uVar9 + (long)&local_1d8) = 0x65;
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
    if (local_5a8[0xb] == 0) {
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
      uVar16 = local_5a8[0xb];
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
      pcVar13 = str_1001394f;
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
      uStack_660 = 0x10003cb5;
      (*(code *)(ulong)(uint)api[3])(str_1001399c,str_100139c1,&local_1d8);
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
    pcVar13 = str_100139d8;
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
    pcVar13 = str_10013a47;
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
  if (local_5a8[8] == 0) {
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
    uVar16 = local_5a8[8];
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
    *(undefined1 *)(uVar9 + (long)&local_1d8) = 0x75;
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
  if (local_5a8[9] == 0) {
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
    uVar16 = local_5a8[9];
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
    *(undefined1 *)(uVar9 + (long)&local_1d8) = 0x6f;
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
  if (local_5a8[10] == 0) {
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
    uVar16 = local_5a8[10];
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
    *(undefined1 *)(uVar9 + (long)&local_1d8) = 0x65;
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
  if (local_5a8[0xb] == 0) {
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
    uVar16 = local_5a8[0xb];
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
  pcVar11 = &DAT_10012fe1;
  pcVar13 = &DAT_10012fe1;
  if (PF_PART4(uStack_560, 4) == 0) {
    pcVar13 = str_10012fe6;
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
      pcVar21 = str_10013a56;
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
    pcVar13 = str_10013a69;
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
    uStack_660 = 0x10004775;
    (*(code *)(ulong)(uint)api[3])(str_10013aa5,str_10013acc,&local_1d8);
  }
  if (local_5a8[6] != 0) {
    local_1d8 = local_1d8 & 0xffffff00;
    uVar9 = 0;
    do {
      uVar8 = uVar9;
      uVar9 = uVar8 + 1;
    } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
    if (uVar8 + 1 < 0x100) {
      cVar17 = 'c';
      pcVar13 = str_10013ae7;
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
    uVar16 = local_5a8[6];
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
      uStack_660 = 0x10004a25;
      (*(code *)(ulong)(uint)api[3])(str_10013b32,str_10013b5b,&local_1d8);
    }
  }
  if (local_5a8[4] != 0) {
    local_1d8 = local_1d8 & 0xffffff00;
    uVar9 = 0;
    do {
      uVar8 = uVar9;
      uVar9 = uVar8 + 1;
    } while (*(char *)((long)&local_1d8 + uVar8) != '\0');
    if (uVar8 + 1 < 0x100) {
      cVar17 = 'f';
      pcVar13 = str_10013b74;
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
       ((code *)(ulong)(uint)api[0x10] != (code *)0x0)) {
      uStack_660 = 0x10004ab9;
      iVar3 = (*(code *)(ulong)(uint)api[0x10])(&local_210);
      if (iVar3 != 0) {
        uStack_660 = 0x10004adc;
        recovered_10012150((long)&local_1d8,0x100,str_10013b90,(long)&local_210);
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
      cVar17 = 'n';
      pcVar13 = str_10012f4d;
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
    if (local_5a8[4] == 0) {
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
      uVar16 = local_5a8[4];
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
      cVar17 = 'd';
      pcVar13 = str_100136ed;
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
    if (local_5a8[5] == 0) {
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
      uVar16 = local_5a8[5];
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
    if (local_558 == 0) {
      pcVar11 = str_10012fe6;
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
        pcVar13 = str_10013a56;
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
      uStack_660 = 0x10005037;
      (*(code *)(ulong)(uint)api[3])(str_10013b9b,str_10013bc5,&local_1d8);
    }
  }
  uStack_660 = 0x1000504d;
  recovered_1000a070((long)pbVar26,local_5a8,(undefined1 *)&local_548);
  if ((code *)(ulong)(uint)api[3] != (code *)0x0) {
    uStack_660 = 0x10005074;
    (*(code *)(ulong)(uint)api[3])(str_10012d36,str_10012d57,&local_548);
  }
  return 1;
}

#undef DAT_10012cf0
#undef DAT_10012fe1
#undef DAT_10013096
#undef DAT_10015000
#undef UNK_10012cf4
#undef UNK_10012cf8
#undef UNK_10012cfc
#undef _DAT_10012cf0
#undef iRam0000000010012cf4
#undef iRam0000000010012cf8
#undef iRam0000000010012cfc
#undef str_10012d18
#undef str_10012d36
#undef str_10012d57
#undef str_10012d77
#undef str_10012d9c
#undef str_10012dc2
#undef str_10012de7
#undef str_10012e04
#undef str_10012f4d
#undef str_10012fe6
#undef str_10012fec
#undef str_10013000
#undef str_1001300c
#undef str_10013016
#undef str_10013022
#undef str_1001302e
#undef str_1001305c
#undef str_10013066
#undef str_1001307b
#undef str_10013088
#undef str_1001309f
#undef str_100130a9
#undef str_100130b5
#undef str_100130c7
#undef str_100130d6
#undef str_100130f4
#undef str_10013102
#undef str_1001310d
#undef str_1001311e
#undef str_1001312e
#undef str_10013138
#undef str_10013144
#undef str_1001315b
#undef str_10013183
#undef str_1001318d
#undef str_100131a5
#undef str_100131c0
#undef str_100131ec
#undef str_1001320c
#undef str_1001323d
#undef str_1001324a
#undef str_1001325c
#undef str_10013266
#undef str_10013273
#undef str_10013280
#undef str_10013291
#undef str_100132a1
#undef str_100132ae
#undef str_100132bb
#undef str_100132c7
#undef str_100132d0
#undef str_100132e3
#undef str_100136bf
#undef str_100136ed
#undef str_100136fc
#undef str_1001373a
#undef str_10013761
#undef str_10013782
#undef str_100137ae
#undef str_100137c5
#undef str_100137e2
#undef str_100137fa
#undef str_10013818
#undef str_10013837
#undef str_10013849
#undef str_1001386b
#undef str_10013887
#undef str_100138ab
#undef str_100138c0
#undef str_100138d6
#undef str_100138ef
#undef str_10013943
#undef str_1001394f
#undef str_1001399c
#undef str_100139c1
#undef str_100139d8
#undef str_10013a47
#undef str_10013a56
#undef str_10013a69
#undef str_10013aa5
#undef str_10013acc
#undef str_10013ae7
#undef str_10013b32
#undef str_10013b5b
#undef str_10013b74
#undef str_10013b90
#undef str_10013b9b
#undef str_10013bc5
#undef uStack_1d4
#undef iStack_1d0
#undef uStack_1cc
#undef uStack_1c0
#undef uStack_1b0
#undef uStack_1a0
#undef local_658
#undef uStack_190
#undef local_5f4
#undef local_5b0
#undef uStack_180
#undef local_5a8
#undef uStack_170
#undef uStack_160
#undef local_568
#undef local_558
#undef uStack_150
#undef local_548
#undef acStack_46
#undef local_546
#undef local_23c
#undef local_238
#undef local_234
#undef local_230
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
#undef uStack_660
#undef uStack_560
#undef cStack_549

#undef DAT_10012fe1
#define DAT_10012fe1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2f9U)))
#undef str_10012e4b
#define str_10012e4b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x163U)))
#undef str_10012eff
#define str_10012eff (*(char (*)[1])(((uintptr_t)pf_module_state + 0x217U)))
#undef str_10012f0f
#define str_10012f0f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x227U)))
#undef str_10012f19
#define str_10012f19 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x231U)))
#undef str_10012f24
#define str_10012f24 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x23cU)))
#undef str_10012f32
#define str_10012f32 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x24aU)))
#undef str_10012f3f
#define str_10012f3f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x257U)))
#undef str_10012f4d
#define str_10012f4d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x265U)))
#undef str_10012f5b
#define str_10012f5b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x273U)))
#undef str_10012fa3
#define str_10012fa3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2bbU)))
#undef str_10012fae
#define str_10012fae (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2c6U)))
#undef str_10012fbf
#define str_10012fbf (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2d7U)))
#undef str_10012fcd
#define str_10012fcd (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2e5U)))
#undef str_10012fe6
#define str_10012fe6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2feU)))
#define abStack_13 (*(byte (*)[11])(frame + 29))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a070
 */

void recovered_1000a070(long param_1,uint *param_2,undefined1 *param_3)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  uint uVar1;
  ulong uVar2;
  char *pcVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  char *pcVar7;
  char cVar8;
  char *pcVar9;
  char cVar10;
  bool bVar11;

  if (param_3 == (undefined1 *)0x0) {
    if ((param_1 != 0) && (uVar1 = *(uint *)(param_1 + 100), uVar1 != 0)) {
LAB_1000a1b9:
      uVar5 = (ulong)uVar1;
      uVar2 = 0;
      do {
        uVar1 = (uint)uVar5;
        abStack_13[uVar2 + 1] = (char)uVar5 + (char)(uVar5 / 10) * -10 | 0x30;
        uVar4 = uVar2 + 1;
        if (8 < uVar2) break;
        uVar5 = uVar5 / 10;
        uVar2 = uVar4;
      } while (9 < uVar1);
      do {
        if (param_3 != (undefined1 *)0x0) {
          uVar5 = 0;
          do {
            uVar2 = uVar5;
            uVar5 = uVar2 + 1;
          } while (param_3[uVar2] != '\0');
          if (uVar5 < 0x300) {
            param_3[uVar2] = abStack_13[uVar4];
            param_3[uVar5] = 0;
          }
        }
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
      goto LAB_1000a279;
    }
  }
  else {
    *param_3 = 0;
    uVar5 = 0;
    do {
      uVar2 = uVar5;
      uVar5 = uVar2 + 1;
    } while (param_3[uVar2] != '\0');
    if (uVar2 + 1 < 0x300) {
      cVar8 = 'm';
      pcVar3 = str_10012e4b;
      do {
        pcVar3 = pcVar3 + 1;
        param_3[uVar2] = cVar8;
        uVar2 = uVar2 + 1;
        cVar8 = *pcVar3;
        if (cVar8 == '\0') break;
      } while (uVar2 < 0x2ff);
    }
    param_3[uVar2] = 0;
    if (param_1 != 0) {
      uVar1 = *(uint *)(param_1 + 100);
      uVar5 = 0;
      do {
        uVar2 = uVar5;
        uVar5 = uVar2 + 1;
      } while (param_3[uVar2] != '\0');
      if (uVar5 < 0x300) {
        param_3[uVar2] = 0x20;
        uVar2 = uVar5;
      }
      param_3[uVar2] = 0;
      uVar5 = 0;
      do {
        uVar2 = uVar5;
        uVar5 = uVar2 + 1;
      } while (param_3[uVar2] != '\0');
      if (uVar2 + 1 < 0x300) {
        cVar8 = 'h';
        pcVar3 = str_10012eff;
        do {
          pcVar3 = pcVar3 + 1;
          param_3[uVar2] = cVar8;
          uVar2 = uVar2 + 1;
          cVar8 = *pcVar3;
          if (cVar8 == '\0') break;
        } while (uVar2 < 0x2ff);
      }
      param_3[uVar2] = 0;
      uVar5 = 0;
      do {
        uVar2 = uVar5;
        uVar5 = uVar2 + 1;
      } while (param_3[uVar2] != '\0');
      if (uVar5 < 0x300) {
        param_3[uVar2] = 0x3d;
        uVar2 = uVar5;
      }
      param_3[uVar2] = 0;
      if (uVar1 != 0) goto LAB_1000a1b9;
      uVar5 = 0;
      do {
        uVar2 = uVar5;
        uVar5 = uVar2 + 1;
      } while (param_3[uVar2] != '\0');
      if (uVar2 + 1 < 0x300) {
        *(undefined2 *)(param_3 + uVar2) = 0x30;
      }
LAB_1000a279:
      if ((param_3 != (undefined1 *)0x0) && (*(char *)(param_1 + 4) != '\0')) {
        uVar5 = 0;
        do {
          uVar2 = uVar5;
          uVar5 = uVar2 + 1;
        } while (param_3[uVar2] != '\0');
        if (uVar5 < 0x300) {
          param_3[uVar2] = 0x20;
          uVar2 = uVar5;
        }
        param_3[uVar2] = 0;
        uVar5 = 0;
        do {
          uVar2 = uVar5;
          uVar5 = uVar2 + 1;
        } while (param_3[uVar2] != '\0');
        if (uVar2 + 1 < 0x300) {
          cVar8 = 'p';
          pcVar3 = str_10012f0f;
          do {
            pcVar3 = pcVar3 + 1;
            param_3[uVar2] = cVar8;
            uVar2 = uVar2 + 1;
            cVar8 = *pcVar3;
            if (cVar8 == '\0') break;
          } while (uVar2 < 0x2ff);
        }
        param_3[uVar2] = 0;
        uVar5 = 0;
        do {
          uVar2 = uVar5;
          uVar5 = uVar2 + 1;
        } while (param_3[uVar2] != '\0');
        if (uVar5 < 0x300) {
          param_3[uVar2] = 0x3d;
          uVar2 = uVar5;
        }
        param_3[uVar2] = 0;
        uVar5 = 0;
        do {
          uVar2 = uVar5;
          uVar5 = uVar2 + 1;
        } while (param_3[uVar2] != '\0');
        cVar8 = *(char *)(param_1 + 4);
        if (uVar2 + 1 < 0x300 && cVar8 != '\0') {
          pcVar3 = (char *)(param_1 + 5);
          do {
            param_3[uVar2] = cVar8;
            uVar2 = uVar2 + 1;
            cVar8 = *pcVar3;
            if (cVar8 == '\0') break;
            pcVar3 = pcVar3 + 1;
          } while (uVar2 < 0x2ff);
        }
        param_3[uVar2] = 0;
      }
    }
  }
  if (param_2 == (uint *)0x0) {
    return;
  }
  uVar1 = *param_2;
  if (param_3 == (undefined1 *)0x0) {
    if (uVar1 != 0) goto LAB_1000a469;
LAB_1000a4f8:
    uVar1 = param_2[1];
LAB_1000a505:
    if (uVar1 != 0) goto LAB_1000a5f9;
LAB_1000a688:
    uVar1 = param_2[2];
LAB_1000a695:
    if (uVar1 != 0) goto LAB_1000a789;
LAB_1000a818:
    uVar1 = param_2[3];
LAB_1000a825:
    if (uVar1 != 0) goto LAB_1000a919;
LAB_1000a9a8:
    uVar1 = param_2[4];
LAB_1000a9b5:
    if (uVar1 != 0) goto LAB_1000aaa9;
LAB_1000ab38:
    uVar1 = param_2[5];
LAB_1000ab45:
    if (uVar1 != 0) goto LAB_1000ac39;
LAB_1000acc8:
    uVar1 = param_2[6];
LAB_1000acd5:
    if (uVar1 != 0) goto LAB_1000adc9;
LAB_1000ae58:
    uVar1 = param_2[7];
LAB_1000ae65:
    if (uVar1 != 0) goto LAB_1000af49;
LAB_1000afd8:
    uVar1 = param_2[8];
LAB_1000afe5:
    if (uVar1 != 0) goto LAB_1000b0c9;
LAB_1000b158:
    uVar1 = param_2[9];
LAB_1000b165:
    if (uVar1 != 0) goto LAB_1000b259;
LAB_1000b2e8:
    uVar1 = param_2[10];
LAB_1000b2f5:
    if (uVar1 != 0) goto LAB_1000b3e9;
LAB_1000b478:
    uVar1 = param_2[0xb];
LAB_1000b485:
    if (uVar1 != 0) goto LAB_1000b579;
LAB_1000b608:
    uVar1 = param_2[0xc];
LAB_1000b615:
    if (uVar1 != 0) goto LAB_1000b719;
LAB_1000b7a8:
    uVar1 = param_2[0xd];
LAB_1000b7b5:
    if (uVar1 != 0) goto LAB_1000b8e9;
LAB_1000b978:
    uVar1 = param_2[0xe];
LAB_1000b985:
    if (uVar1 != 0) goto LAB_1000bac9;
LAB_1000bb58:
    uVar1 = param_2[0xf];
LAB_1000bb65:
    if (uVar1 != 0) goto LAB_1000bc59;
LAB_1000bce8:
    uVar1 = param_2[0x10];
LAB_1000bcf5:
    if (uVar1 != 0) goto LAB_1000bdd9;
LAB_1000be68:
    uVar1 = param_2[0x11];
LAB_1000be75:
    if (uVar1 != 0) goto LAB_1000bf69;
LAB_1000bff8:
    uVar1 = param_2[0x12];
LAB_1000c005:
    if (uVar1 == 0) {
      return;
    }
  }
  else {
    uVar5 = 0;
    do {
      uVar2 = uVar5;
      uVar5 = uVar2 + 1;
    } while (param_3[uVar2] != '\0');
    if (uVar5 < 0x300) {
      param_3[uVar2] = 0x20;
      uVar2 = uVar5;
    }
    param_3[uVar2] = 0;
    uVar5 = 0;
    do {
      uVar2 = uVar5;
      uVar5 = uVar2 + 1;
    } while (param_3[uVar2] != '\0');
    if (uVar2 + 1 < 0x300) {
      cVar8 = 'm';
      pcVar3 = str_10012f19;
      do {
        pcVar3 = pcVar3 + 1;
        param_3[uVar2] = cVar8;
        uVar2 = uVar2 + 1;
        cVar8 = *pcVar3;
        if (cVar8 == '\0') break;
      } while (uVar2 < 0x2ff);
    }
    param_3[uVar2] = 0;
    uVar5 = 0;
    do {
      uVar2 = uVar5;
      uVar5 = uVar2 + 1;
    } while (param_3[uVar2] != '\0');
    if (uVar5 < 0x300) {
      param_3[uVar2] = 0x3d;
      uVar2 = uVar5;
    }
    param_3[uVar2] = 0;
    if (uVar1 == 0) {
      uVar5 = 0;
      do {
        uVar2 = uVar5;
        uVar5 = uVar2 + 1;
      } while (param_3[uVar2] != '\0');
      if (uVar2 + 1 < 0x300) {
        *(undefined2 *)(param_3 + uVar2) = 0x30;
      }
      uVar1 = param_2[1];
    }
    else {
LAB_1000a469:
      uVar5 = 0;
      do {
        abStack_13[uVar5 + 1] = (char)uVar1 + (char)(uVar1 / 10) * -10 | 0x30;
        uVar2 = uVar5 + 1;
        if (8 < uVar5) break;
        bVar11 = 9 < uVar1;
        uVar5 = uVar2;
        uVar1 = uVar1 / 10;
      } while (bVar11);
LAB_1000a4b8:
      do {
        uVar5 = uVar2 - 1;
        if (param_3 == (undefined1 *)0x0) {
          uVar2 = uVar5;
          if (uVar5 == 0) goto LAB_1000a4f8;
          goto LAB_1000a4b8;
        }
        uVar4 = 0;
        do {
          uVar6 = uVar4;
          uVar4 = uVar6 + 1;
        } while (param_3[uVar6] != '\0');
        if (uVar4 < 0x300) {
          param_3[uVar6] = abStack_13[uVar2];
          param_3[uVar4] = 0;
        }
        uVar2 = uVar5;
      } while (uVar5 != 0);
      uVar1 = param_2[1];
      if (param_3 == (undefined1 *)0x0) goto LAB_1000a505;
    }
    uVar5 = 0;
    do {
      uVar2 = uVar5;
      uVar5 = uVar2 + 1;
    } while (param_3[uVar2] != '\0');
    if (uVar5 < 0x300) {
      param_3[uVar2] = 0x20;
      uVar2 = uVar5;
    }
    param_3[uVar2] = 0;
    uVar5 = 0;
    do {
      uVar2 = uVar5;
      uVar5 = uVar2 + 1;
    } while (param_3[uVar2] != '\0');
    if (uVar2 + 1 < 0x300) {
      cVar8 = 'r';
      pcVar3 = str_10012f24;
      do {
        pcVar3 = pcVar3 + 1;
        param_3[uVar2] = cVar8;
        uVar2 = uVar2 + 1;
        cVar8 = *pcVar3;
        if (cVar8 == '\0') break;
      } while (uVar2 < 0x2ff);
    }
    param_3[uVar2] = 0;
    uVar5 = 0;
    do {
      uVar2 = uVar5;
      uVar5 = uVar2 + 1;
    } while (param_3[uVar2] != '\0');
    if (uVar5 < 0x300) {
      param_3[uVar2] = 0x3d;
      uVar2 = uVar5;
    }
    param_3[uVar2] = 0;
    if (uVar1 == 0) {
      uVar5 = 0;
      do {
        uVar2 = uVar5;
        uVar5 = uVar2 + 1;
      } while (param_3[uVar2] != '\0');
      if (uVar2 + 1 < 0x300) {
        *(undefined2 *)(param_3 + uVar2) = 0x30;
      }
      uVar1 = param_2[2];
    }
    else {
LAB_1000a5f9:
      uVar5 = 0;
      do {
        abStack_13[uVar5 + 1] = (char)uVar1 + (char)(uVar1 / 10) * -10 | 0x30;
        uVar2 = uVar5 + 1;
        if (8 < uVar5) break;
        bVar11 = 9 < uVar1;
        uVar5 = uVar2;
        uVar1 = uVar1 / 10;
      } while (bVar11);
LAB_1000a648:
      do {
        uVar5 = uVar2 - 1;
        if (param_3 == (undefined1 *)0x0) {
          uVar2 = uVar5;
          if (uVar5 == 0) goto LAB_1000a688;
          goto LAB_1000a648;
        }
        uVar4 = 0;
        do {
          uVar6 = uVar4;
          uVar4 = uVar6 + 1;
        } while (param_3[uVar6] != '\0');
        if (uVar4 < 0x300) {
          param_3[uVar6] = abStack_13[uVar2];
          param_3[uVar4] = 0;
        }
        uVar2 = uVar5;
      } while (uVar5 != 0);
      uVar1 = param_2[2];
      if (param_3 == (undefined1 *)0x0) goto LAB_1000a695;
    }
    uVar5 = 0;
    do {
      uVar2 = uVar5;
      uVar5 = uVar2 + 1;
    } while (param_3[uVar2] != '\0');
    if (uVar5 < 0x300) {
      param_3[uVar2] = 0x20;
      uVar2 = uVar5;
    }
    param_3[uVar2] = 0;
    uVar5 = 0;
    do {
      uVar2 = uVar5;
      uVar5 = uVar2 + 1;
    } while (param_3[uVar2] != '\0');
    if (uVar2 + 1 < 0x300) {
      cVar8 = 'i';
      pcVar3 = str_10012f32;
      do {
        pcVar3 = pcVar3 + 1;
        param_3[uVar2] = cVar8;
        uVar2 = uVar2 + 1;
        cVar8 = *pcVar3;
        if (cVar8 == '\0') break;
      } while (uVar2 < 0x2ff);
    }
    param_3[uVar2] = 0;
    uVar5 = 0;
    do {
      uVar2 = uVar5;
      uVar5 = uVar2 + 1;
    } while (param_3[uVar2] != '\0');
    if (uVar5 < 0x300) {
      param_3[uVar2] = 0x3d;
      uVar2 = uVar5;
    }
    param_3[uVar2] = 0;
    if (uVar1 == 0) {
      uVar5 = 0;
      do {
        uVar2 = uVar5;
        uVar5 = uVar2 + 1;
      } while (param_3[uVar2] != '\0');
      if (uVar2 + 1 < 0x300) {
        *(undefined2 *)(param_3 + uVar2) = 0x30;
      }
      uVar1 = param_2[3];
    }
    else {
LAB_1000a789:
      uVar5 = 0;
      do {
        abStack_13[uVar5 + 1] = (char)uVar1 + (char)(uVar1 / 10) * -10 | 0x30;
        uVar2 = uVar5 + 1;
        if (8 < uVar5) break;
        bVar11 = 9 < uVar1;
        uVar5 = uVar2;
        uVar1 = uVar1 / 10;
      } while (bVar11);
LAB_1000a7d8:
      do {
        uVar5 = uVar2 - 1;
        if (param_3 == (undefined1 *)0x0) {
          uVar2 = uVar5;
          if (uVar5 == 0) goto LAB_1000a818;
          goto LAB_1000a7d8;
        }
        uVar4 = 0;
        do {
          uVar6 = uVar4;
          uVar4 = uVar6 + 1;
        } while (param_3[uVar6] != '\0');
        if (uVar4 < 0x300) {
          param_3[uVar6] = abStack_13[uVar2];
          param_3[uVar4] = 0;
        }
        uVar2 = uVar5;
      } while (uVar5 != 0);
      uVar1 = param_2[3];
      if (param_3 == (undefined1 *)0x0) goto LAB_1000a825;
    }
    uVar5 = 0;
    do {
      uVar2 = uVar5;
      uVar5 = uVar2 + 1;
    } while (param_3[uVar2] != '\0');
    if (uVar5 < 0x300) {
      param_3[uVar2] = 0x20;
      uVar2 = uVar5;
    }
    param_3[uVar2] = 0;
    uVar5 = 0;
    do {
      uVar2 = uVar5;
      uVar5 = uVar2 + 1;
    } while (param_3[uVar2] != '\0');
    if (uVar2 + 1 < 0x300) {
      cVar8 = 'n';
      pcVar3 = str_10012f3f;
      do {
        pcVar3 = pcVar3 + 1;
        param_3[uVar2] = cVar8;
        uVar2 = uVar2 + 1;
        cVar8 = *pcVar3;
        if (cVar8 == '\0') break;
      } while (uVar2 < 0x2ff);
    }
    param_3[uVar2] = 0;
    uVar5 = 0;
    do {
      uVar2 = uVar5;
      uVar5 = uVar2 + 1;
    } while (param_3[uVar2] != '\0');
    if (uVar5 < 0x300) {
      param_3[uVar2] = 0x3d;
      uVar2 = uVar5;
    }
    param_3[uVar2] = 0;
    if (uVar1 == 0) {
      uVar5 = 0;
      do {
        uVar2 = uVar5;
        uVar5 = uVar2 + 1;
      } while (param_3[uVar2] != '\0');
      if (uVar2 + 1 < 0x300) {
        *(undefined2 *)(param_3 + uVar2) = 0x30;
      }
      uVar1 = param_2[4];
    }
    else {
LAB_1000a919:
      uVar5 = 0;
      do {
        abStack_13[uVar5 + 1] = (char)uVar1 + (char)(uVar1 / 10) * -10 | 0x30;
        uVar2 = uVar5 + 1;
        if (8 < uVar5) break;
        bVar11 = 9 < uVar1;
        uVar5 = uVar2;
        uVar1 = uVar1 / 10;
      } while (bVar11);
LAB_1000a968:
      do {
        uVar5 = uVar2 - 1;
        if (param_3 == (undefined1 *)0x0) {
          uVar2 = uVar5;
          if (uVar5 == 0) goto LAB_1000a9a8;
          goto LAB_1000a968;
        }
        uVar4 = 0;
        do {
          uVar6 = uVar4;
          uVar4 = uVar6 + 1;
        } while (param_3[uVar6] != '\0');
        if (uVar4 < 0x300) {
          param_3[uVar6] = abStack_13[uVar2];
          param_3[uVar4] = 0;
        }
        uVar2 = uVar5;
      } while (uVar5 != 0);
      uVar1 = param_2[4];
      if (param_3 == (undefined1 *)0x0) goto LAB_1000a9b5;
    }
    uVar5 = 0;
    do {
      uVar2 = uVar5;
      uVar5 = uVar2 + 1;
    } while (param_3[uVar2] != '\0');
    if (uVar5 < 0x300) {
      param_3[uVar2] = 0x20;
      uVar2 = uVar5;
    }
    param_3[uVar2] = 0;
    uVar5 = 0;
    do {
      uVar2 = uVar5;
      uVar5 = uVar2 + 1;
    } while (param_3[uVar2] != '\0');
    if (uVar2 + 1 < 0x300) {
      cVar8 = 'n';
      pcVar3 = str_10012f4d;
      do {
        pcVar3 = pcVar3 + 1;
        param_3[uVar2] = cVar8;
        uVar2 = uVar2 + 1;
        cVar8 = *pcVar3;
        if (cVar8 == '\0') break;
      } while (uVar2 < 0x2ff);
    }
    param_3[uVar2] = 0;
    uVar5 = 0;
    do {
      uVar2 = uVar5;
      uVar5 = uVar2 + 1;
    } while (param_3[uVar2] != '\0');
    if (uVar5 < 0x300) {
      param_3[uVar2] = 0x3d;
      uVar2 = uVar5;
    }
    param_3[uVar2] = 0;
    if (uVar1 == 0) {
      uVar5 = 0;
      do {
        uVar2 = uVar5;
        uVar5 = uVar2 + 1;
      } while (param_3[uVar2] != '\0');
      if (uVar2 + 1 < 0x300) {
        *(undefined2 *)(param_3 + uVar2) = 0x30;
      }
      uVar1 = param_2[5];
    }
    else {
LAB_1000aaa9:
      uVar5 = 0;
      do {
        abStack_13[uVar5 + 1] = (char)uVar1 + (char)(uVar1 / 10) * -10 | 0x30;
        uVar2 = uVar5 + 1;
        if (8 < uVar5) break;
        bVar11 = 9 < uVar1;
        uVar5 = uVar2;
        uVar1 = uVar1 / 10;
      } while (bVar11);
LAB_1000aaf8:
      do {
        uVar5 = uVar2 - 1;
        if (param_3 == (undefined1 *)0x0) {
          uVar2 = uVar5;
          if (uVar5 == 0) goto LAB_1000ab38;
          goto LAB_1000aaf8;
        }
        uVar4 = 0;
        do {
          uVar6 = uVar4;
          uVar4 = uVar6 + 1;
        } while (param_3[uVar6] != '\0');
        if (uVar4 < 0x300) {
          param_3[uVar6] = abStack_13[uVar2];
          param_3[uVar4] = 0;
        }
        uVar2 = uVar5;
      } while (uVar5 != 0);
      uVar1 = param_2[5];
      if (param_3 == (undefined1 *)0x0) goto LAB_1000ab45;
    }
    uVar5 = 0;
    do {
      uVar2 = uVar5;
      uVar5 = uVar2 + 1;
    } while (param_3[uVar2] != '\0');
    if (uVar5 < 0x300) {
      param_3[uVar2] = 0x20;
      uVar2 = uVar5;
    }
    param_3[uVar2] = 0;
    uVar5 = 0;
    do {
      uVar2 = uVar5;
      uVar5 = uVar2 + 1;
    } while (param_3[uVar2] != '\0');
    if (uVar2 + 1 < 0x300) {
      cVar8 = 'n';
      pcVar3 = str_10012f5b;
      do {
        pcVar3 = pcVar3 + 1;
        param_3[uVar2] = cVar8;
        uVar2 = uVar2 + 1;
        cVar8 = *pcVar3;
        if (cVar8 == '\0') break;
      } while (uVar2 < 0x2ff);
    }
    param_3[uVar2] = 0;
    uVar5 = 0;
    do {
      uVar2 = uVar5;
      uVar5 = uVar2 + 1;
    } while (param_3[uVar2] != '\0');
    if (uVar5 < 0x300) {
      param_3[uVar2] = 0x3d;
      uVar2 = uVar5;
    }
    param_3[uVar2] = 0;
    if (uVar1 == 0) {
      uVar5 = 0;
      do {
        uVar2 = uVar5;
        uVar5 = uVar2 + 1;
      } while (param_3[uVar2] != '\0');
      if (uVar2 + 1 < 0x300) {
        *(undefined2 *)(param_3 + uVar2) = 0x30;
      }
      uVar1 = param_2[6];
    }
    else {
LAB_1000ac39:
      uVar5 = 0;
      do {
        abStack_13[uVar5 + 1] = (char)uVar1 + (char)(uVar1 / 10) * -10 | 0x30;
        uVar2 = uVar5 + 1;
        if (8 < uVar5) break;
        bVar11 = 9 < uVar1;
        uVar5 = uVar2;
        uVar1 = uVar1 / 10;
      } while (bVar11);
LAB_1000ac88:
      do {
        uVar5 = uVar2 - 1;
        if (param_3 == (undefined1 *)0x0) {
          uVar2 = uVar5;
          if (uVar5 == 0) goto LAB_1000acc8;
          goto LAB_1000ac88;
        }
        uVar4 = 0;
        do {
          uVar6 = uVar4;
          uVar4 = uVar6 + 1;
        } while (param_3[uVar6] != '\0');
        if (uVar4 < 0x300) {
          param_3[uVar6] = abStack_13[uVar2];
          param_3[uVar4] = 0;
        }
        uVar2 = uVar5;
      } while (uVar5 != 0);
      uVar1 = param_2[6];
      if (param_3 == (undefined1 *)0x0) goto LAB_1000acd5;
    }
    uVar5 = 0;
    do {
      uVar2 = uVar5;
      uVar5 = uVar2 + 1;
    } while (param_3[uVar2] != '\0');
    if (uVar5 < 0x300) {
      param_3[uVar2] = 0x20;
      uVar2 = uVar5;
    }
    param_3[uVar2] = 0;
    uVar5 = 0xffffffffffffffff;
    do {
      uVar2 = uVar5;
      uVar5 = uVar2 + 1;
    } while (param_3[uVar2 + 1] != '\0');
    if (uVar2 + 2 < 0x300) {
      param_3[uVar5] = 0x61;
      bVar11 = uVar5 != 0x2fe;
      uVar5 = uVar2 + 2;
      if (bVar11) {
        uVar5 = uVar2 + 3;
        param_3[uVar2 + 2] = 0x68;
        if (uVar5 < 0x2ff) {
          uVar5 = uVar2 + 4;
          param_3[uVar2 + 3] = 99;
          if (uVar5 < 0x2ff) {
            param_3[uVar2 + 4] = 0x69;
            uVar5 = uVar2 + 5;
          }
        }
      }
    }
    param_3[uVar5] = 0;
    uVar5 = 0;
    do {
      uVar2 = uVar5;
      uVar5 = uVar2 + 1;
    } while (param_3[uVar2] != '\0');
    if (uVar5 < 0x300) {
      param_3[uVar2] = 0x3d;
      uVar2 = uVar5;
    }
    param_3[uVar2] = 0;
    if (uVar1 == 0) {
      uVar5 = 0;
      do {
        uVar2 = uVar5;
        uVar5 = uVar2 + 1;
      } while (param_3[uVar2] != '\0');
      if (uVar2 + 1 < 0x300) {
        *(undefined2 *)(param_3 + uVar2) = 0x30;
      }
      uVar1 = param_2[7];
    }
    else {
LAB_1000adc9:
      uVar5 = 0;
      do {
        abStack_13[uVar5 + 1] = (char)uVar1 + (char)(uVar1 / 10) * -10 | 0x30;
        uVar2 = uVar5 + 1;
        if (8 < uVar5) break;
        bVar11 = 9 < uVar1;
        uVar5 = uVar2;
        uVar1 = uVar1 / 10;
      } while (bVar11);
LAB_1000ae18:
      do {
        uVar5 = uVar2 - 1;
        if (param_3 == (undefined1 *)0x0) {
          uVar2 = uVar5;
          if (uVar5 == 0) goto LAB_1000ae58;
          goto LAB_1000ae18;
        }
        uVar4 = 0;
        do {
          uVar6 = uVar4;
          uVar4 = uVar6 + 1;
        } while (param_3[uVar6] != '\0');
        if (uVar4 < 0x300) {
          param_3[uVar6] = abStack_13[uVar2];
          param_3[uVar4] = 0;
        }
        uVar2 = uVar5;
      } while (uVar5 != 0);
      uVar1 = param_2[7];
      if (param_3 == (undefined1 *)0x0) goto LAB_1000ae65;
    }
    uVar5 = 0;
    do {
      uVar2 = uVar5;
      uVar5 = uVar2 + 1;
    } while (param_3[uVar2] != '\0');
    if (uVar5 < 0x300) {
      param_3[uVar2] = 0x20;
      uVar2 = uVar5;
    }
    param_3[uVar2] = 0;
    uVar5 = 0;
    do {
      uVar2 = uVar5;
      uVar5 = uVar2 + 1;
    } while (param_3[uVar2] != '\0');
    if (uVar5 < 0x300) {
      param_3[uVar2] = 0x68;
      uVar4 = uVar5;
      if (uVar5 != 0x2ff) {
        uVar4 = uVar2 + 2;
        param_3[uVar5] = 100;
        if (uVar4 < 0x2ff) {
          param_3[uVar2 + 2] = 0x61;
          uVar4 = uVar2 + 3;
        }
      }
    }
    else {
      uVar4 = uVar2;
    }
    param_3[uVar4] = 0;
    uVar5 = 0;
    do {
      uVar2 = uVar5;
      uVar5 = uVar2 + 1;
    } while (param_3[uVar2] != '\0');
    if (uVar5 < 0x300) {
      param_3[uVar2] = 0x3d;
      uVar2 = uVar5;
    }
    param_3[uVar2] = 0;
    if (uVar1 == 0) {
      uVar5 = 0;
      do {
        uVar2 = uVar5;
        uVar5 = uVar2 + 1;
      } while (param_3[uVar2] != '\0');
      if (uVar2 + 1 < 0x300) {
        *(undefined2 *)(param_3 + uVar2) = 0x30;
      }
      uVar1 = param_2[8];
    }
    else {
LAB_1000af49:
      uVar5 = 0;
      do {
        abStack_13[uVar5 + 1] = (char)uVar1 + (char)(uVar1 / 10) * -10 | 0x30;
        uVar2 = uVar5 + 1;
        if (8 < uVar5) break;
        bVar11 = 9 < uVar1;
        uVar5 = uVar2;
        uVar1 = uVar1 / 10;
      } while (bVar11);
LAB_1000af98:
      do {
        uVar5 = uVar2 - 1;
        if (param_3 == (undefined1 *)0x0) {
          uVar2 = uVar5;
          if (uVar5 == 0) goto LAB_1000afd8;
          goto LAB_1000af98;
        }
        uVar4 = 0;
        do {
          uVar6 = uVar4;
          uVar4 = uVar6 + 1;
        } while (param_3[uVar6] != '\0');
        if (uVar4 < 0x300) {
          param_3[uVar6] = abStack_13[uVar2];
          param_3[uVar4] = 0;
        }
        uVar2 = uVar5;
      } while (uVar5 != 0);
      uVar1 = param_2[8];
      if (param_3 == (undefined1 *)0x0) goto LAB_1000afe5;
    }
    uVar5 = 0;
    do {
      uVar2 = uVar5;
      uVar5 = uVar2 + 1;
    } while (param_3[uVar2] != '\0');
    if (uVar5 < 0x300) {
      param_3[uVar2] = 0x20;
      uVar2 = uVar5;
    }
    param_3[uVar2] = 0;
    uVar5 = 0;
    do {
      uVar2 = uVar5;
      uVar5 = uVar2 + 1;
    } while (param_3[uVar2] != '\0');
    if (uVar5 < 0x300) {
      param_3[uVar2] = 0x75;
      uVar4 = uVar5;
      if (uVar5 != 0x2ff) {
        uVar4 = uVar2 + 2;
        param_3[uVar5] = 0x73;
        if (uVar4 < 0x2ff) {
          param_3[uVar2 + 2] = 0x62;
          uVar4 = uVar2 + 3;
        }
      }
    }
    else {
      uVar4 = uVar2;
    }
    param_3[uVar4] = 0;
    uVar5 = 0;
    do {
      uVar2 = uVar5;
      uVar5 = uVar2 + 1;
    } while (param_3[uVar2] != '\0');
    if (uVar5 < 0x300) {
      param_3[uVar2] = 0x3d;
      uVar2 = uVar5;
    }
    param_3[uVar2] = 0;
    if (uVar1 == 0) {
      uVar5 = 0;
      do {
        uVar2 = uVar5;
        uVar5 = uVar2 + 1;
      } while (param_3[uVar2] != '\0');
      if (uVar2 + 1 < 0x300) {
        *(undefined2 *)(param_3 + uVar2) = 0x30;
      }
      uVar1 = param_2[9];
    }
    else {
LAB_1000b0c9:
      uVar5 = 0;
      do {
        abStack_13[uVar5 + 1] = (char)uVar1 + (char)(uVar1 / 10) * -10 | 0x30;
        uVar2 = uVar5 + 1;
        if (8 < uVar5) break;
        bVar11 = 9 < uVar1;
        uVar5 = uVar2;
        uVar1 = uVar1 / 10;
      } while (bVar11);
LAB_1000b118:
      do {
        uVar5 = uVar2 - 1;
        if (param_3 == (undefined1 *)0x0) {
          uVar2 = uVar5;
          if (uVar5 == 0) goto LAB_1000b158;
          goto LAB_1000b118;
        }
        uVar4 = 0;
        do {
          uVar6 = uVar4;
          uVar4 = uVar6 + 1;
        } while (param_3[uVar6] != '\0');
        if (uVar4 < 0x300) {
          param_3[uVar6] = abStack_13[uVar2];
          param_3[uVar4] = 0;
        }
        uVar2 = uVar5;
      } while (uVar5 != 0);
      uVar1 = param_2[9];
      if (param_3 == (undefined1 *)0x0) goto LAB_1000b165;
    }
    uVar5 = 0;
    do {
      uVar2 = uVar5;
      uVar5 = uVar2 + 1;
    } while (param_3[uVar2] != '\0');
    if (uVar5 < 0x300) {
      param_3[uVar2] = 0x20;
      uVar2 = uVar5;
    }
    param_3[uVar2] = 0;
    uVar5 = 0xffffffffffffffff;
    do {
      uVar2 = uVar5;
      uVar5 = uVar2 + 1;
    } while (param_3[uVar2 + 1] != '\0');
    if (uVar2 + 2 < 0x300) {
      param_3[uVar5] = 0x75;
      bVar11 = uVar5 != 0x2fe;
      uVar5 = uVar2 + 2;
      if (bVar11) {
        uVar5 = uVar2 + 3;
        param_3[uVar2 + 2] = 0x68;
        if (uVar5 < 0x2ff) {
          uVar5 = uVar2 + 4;
          param_3[uVar2 + 3] = 99;
          if (uVar5 < 0x2ff) {
            param_3[uVar2 + 4] = 0x69;
            uVar5 = uVar2 + 5;
          }
        }
      }
    }
    param_3[uVar5] = 0;
    uVar5 = 0;
    do {
      uVar2 = uVar5;
      uVar5 = uVar2 + 1;
    } while (param_3[uVar2] != '\0');
    if (uVar5 < 0x300) {
      param_3[uVar2] = 0x3d;
      uVar2 = uVar5;
    }
    param_3[uVar2] = 0;
    if (uVar1 == 0) {
      uVar5 = 0;
      do {
        uVar2 = uVar5;
        uVar5 = uVar2 + 1;
      } while (param_3[uVar2] != '\0');
      if (uVar2 + 1 < 0x300) {
        *(undefined2 *)(param_3 + uVar2) = 0x30;
      }
      uVar1 = param_2[10];
    }
    else {
LAB_1000b259:
      uVar5 = 0;
      do {
        abStack_13[uVar5 + 1] = (char)uVar1 + (char)(uVar1 / 10) * -10 | 0x30;
        uVar2 = uVar5 + 1;
        if (8 < uVar5) break;
        bVar11 = 9 < uVar1;
        uVar5 = uVar2;
        uVar1 = uVar1 / 10;
      } while (bVar11);
LAB_1000b2a8:
      do {
        uVar5 = uVar2 - 1;
        if (param_3 == (undefined1 *)0x0) {
          uVar2 = uVar5;
          if (uVar5 == 0) goto LAB_1000b2e8;
          goto LAB_1000b2a8;
        }
        uVar4 = 0;
        do {
          uVar6 = uVar4;
          uVar4 = uVar6 + 1;
        } while (param_3[uVar6] != '\0');
        if (uVar4 < 0x300) {
          param_3[uVar6] = abStack_13[uVar2];
          param_3[uVar4] = 0;
        }
        uVar2 = uVar5;
      } while (uVar5 != 0);
      uVar1 = param_2[10];
      if (param_3 == (undefined1 *)0x0) goto LAB_1000b2f5;
    }
    uVar5 = 0;
    do {
      uVar2 = uVar5;
      uVar5 = uVar2 + 1;
    } while (param_3[uVar2] != '\0');
    if (uVar5 < 0x300) {
      param_3[uVar2] = 0x20;
      uVar2 = uVar5;
    }
    param_3[uVar2] = 0;
    uVar5 = 0xffffffffffffffff;
    do {
      uVar2 = uVar5;
      uVar5 = uVar2 + 1;
    } while (param_3[uVar2 + 1] != '\0');
    if (uVar2 + 2 < 0x300) {
      param_3[uVar5] = 0x6f;
      bVar11 = uVar5 != 0x2fe;
      uVar5 = uVar2 + 2;
      if (bVar11) {
        uVar5 = uVar2 + 3;
        param_3[uVar2 + 2] = 0x68;
        if (uVar5 < 0x2ff) {
          uVar5 = uVar2 + 4;
          param_3[uVar2 + 3] = 99;
          if (uVar5 < 0x2ff) {
            param_3[uVar2 + 4] = 0x69;
            uVar5 = uVar2 + 5;
          }
        }
      }
    }
    param_3[uVar5] = 0;
    uVar5 = 0;
    do {
      uVar2 = uVar5;
      uVar5 = uVar2 + 1;
    } while (param_3[uVar2] != '\0');
    if (uVar5 < 0x300) {
      param_3[uVar2] = 0x3d;
      uVar2 = uVar5;
    }
    param_3[uVar2] = 0;
    if (uVar1 == 0) {
      uVar5 = 0;
      do {
        uVar2 = uVar5;
        uVar5 = uVar2 + 1;
      } while (param_3[uVar2] != '\0');
      if (uVar2 + 1 < 0x300) {
        *(undefined2 *)(param_3 + uVar2) = 0x30;
      }
      uVar1 = param_2[0xb];
    }
    else {
LAB_1000b3e9:
      uVar5 = 0;
      do {
        abStack_13[uVar5 + 1] = (char)uVar1 + (char)(uVar1 / 10) * -10 | 0x30;
        uVar2 = uVar5 + 1;
        if (8 < uVar5) break;
        bVar11 = 9 < uVar1;
        uVar5 = uVar2;
        uVar1 = uVar1 / 10;
      } while (bVar11);
LAB_1000b438:
      do {
        uVar5 = uVar2 - 1;
        if (param_3 == (undefined1 *)0x0) {
          uVar2 = uVar5;
          if (uVar5 == 0) goto LAB_1000b478;
          goto LAB_1000b438;
        }
        uVar4 = 0;
        do {
          uVar6 = uVar4;
          uVar4 = uVar6 + 1;
        } while (param_3[uVar6] != '\0');
        if (uVar4 < 0x300) {
          param_3[uVar6] = abStack_13[uVar2];
          param_3[uVar4] = 0;
        }
        uVar2 = uVar5;
      } while (uVar5 != 0);
      uVar1 = param_2[0xb];
      if (param_3 == (undefined1 *)0x0) goto LAB_1000b485;
    }
    uVar5 = 0;
    do {
      uVar2 = uVar5;
      uVar5 = uVar2 + 1;
    } while (param_3[uVar2] != '\0');
    if (uVar5 < 0x300) {
      param_3[uVar2] = 0x20;
      uVar2 = uVar5;
    }
    param_3[uVar2] = 0;
    uVar5 = 0xffffffffffffffff;
    do {
      uVar2 = uVar5;
      uVar5 = uVar2 + 1;
    } while (param_3[uVar2 + 1] != '\0');
    if (uVar2 + 2 < 0x300) {
      param_3[uVar5] = 0x65;
      bVar11 = uVar5 != 0x2fe;
      uVar5 = uVar2 + 2;
      if (bVar11) {
        uVar5 = uVar2 + 3;
        param_3[uVar2 + 2] = 0x68;
        if (uVar5 < 0x2ff) {
          uVar5 = uVar2 + 4;
          param_3[uVar2 + 3] = 99;
          if (uVar5 < 0x2ff) {
            param_3[uVar2 + 4] = 0x69;
            uVar5 = uVar2 + 5;
          }
        }
      }
    }
    param_3[uVar5] = 0;
    uVar5 = 0;
    do {
      uVar2 = uVar5;
      uVar5 = uVar2 + 1;
    } while (param_3[uVar2] != '\0');
    if (uVar5 < 0x300) {
      param_3[uVar2] = 0x3d;
      uVar2 = uVar5;
    }
    param_3[uVar2] = 0;
    if (uVar1 == 0) {
      uVar5 = 0;
      do {
        uVar2 = uVar5;
        uVar5 = uVar2 + 1;
      } while (param_3[uVar2] != '\0');
      if (uVar2 + 1 < 0x300) {
        *(undefined2 *)(param_3 + uVar2) = 0x30;
      }
      uVar1 = param_2[0xc];
    }
    else {
LAB_1000b579:
      uVar5 = 0;
      do {
        abStack_13[uVar5 + 1] = (char)uVar1 + (char)(uVar1 / 10) * -10 | 0x30;
        uVar2 = uVar5 + 1;
        if (8 < uVar5) break;
        bVar11 = 9 < uVar1;
        uVar5 = uVar2;
        uVar1 = uVar1 / 10;
      } while (bVar11);
LAB_1000b5c8:
      do {
        uVar5 = uVar2 - 1;
        if (param_3 == (undefined1 *)0x0) {
          uVar2 = uVar5;
          if (uVar5 == 0) goto LAB_1000b608;
          goto LAB_1000b5c8;
        }
        uVar4 = 0;
        do {
          uVar6 = uVar4;
          uVar4 = uVar6 + 1;
        } while (param_3[uVar6] != '\0');
        if (uVar4 < 0x300) {
          param_3[uVar6] = abStack_13[uVar2];
          param_3[uVar4] = 0;
        }
        uVar2 = uVar5;
      } while (uVar5 != 0);
      uVar1 = param_2[0xc];
      if (param_3 == (undefined1 *)0x0) goto LAB_1000b615;
    }
    uVar5 = 0;
    do {
      uVar2 = uVar5;
      uVar5 = uVar2 + 1;
    } while (param_3[uVar2] != '\0');
    if (uVar5 < 0x300) {
      param_3[uVar2] = 0x20;
      uVar2 = uVar5;
    }
    param_3[uVar2] = 0;
    uVar5 = 0xffffffffffffffff;
    do {
      uVar2 = uVar5;
      uVar5 = uVar2 + 1;
    } while (param_3[uVar2 + 1] != '\0');
    if (uVar2 + 2 < 0x300) {
      param_3[uVar5] = 0x73;
      bVar11 = uVar5 != 0x2fe;
      uVar5 = uVar2 + 2;
      if (bVar11) {
        uVar5 = uVar2 + 3;
        param_3[uVar2 + 2] = 0x6d;
        if (uVar5 < 0x2ff) {
          uVar5 = uVar2 + 4;
          param_3[uVar2 + 3] = 0x62;
          if (uVar5 < 0x2ff) {
            uVar5 = uVar2 + 5;
            param_3[uVar2 + 4] = 0x75;
            if (uVar5 < 0x2ff) {
              param_3[uVar2 + 5] = 0x73;
              uVar5 = uVar2 + 6;
            }
          }
        }
      }
    }
    param_3[uVar5] = 0;
    uVar5 = 0;
    do {
      uVar2 = uVar5;
      uVar5 = uVar2 + 1;
    } while (param_3[uVar2] != '\0');
    if (uVar5 < 0x300) {
      param_3[uVar2] = 0x3d;
      uVar2 = uVar5;
    }
    param_3[uVar2] = 0;
    if (uVar1 == 0) {
      uVar5 = 0;
      do {
        uVar2 = uVar5;
        uVar5 = uVar2 + 1;
      } while (param_3[uVar2] != '\0');
      if (uVar2 + 1 < 0x300) {
        *(undefined2 *)(param_3 + uVar2) = 0x30;
      }
      uVar1 = param_2[0xd];
    }
    else {
LAB_1000b719:
      uVar5 = 0;
      do {
        abStack_13[uVar5 + 1] = (char)uVar1 + (char)(uVar1 / 10) * -10 | 0x30;
        uVar2 = uVar5 + 1;
        if (8 < uVar5) break;
        bVar11 = 9 < uVar1;
        uVar5 = uVar2;
        uVar1 = uVar1 / 10;
      } while (bVar11);
LAB_1000b768:
      do {
        uVar5 = uVar2 - 1;
        if (param_3 == (undefined1 *)0x0) {
          uVar2 = uVar5;
          if (uVar5 == 0) goto LAB_1000b7a8;
          goto LAB_1000b768;
        }
        uVar4 = 0;
        do {
          uVar6 = uVar4;
          uVar4 = uVar6 + 1;
        } while (param_3[uVar6] != '\0');
        if (uVar4 < 0x300) {
          param_3[uVar6] = abStack_13[uVar2];
          param_3[uVar4] = 0;
        }
        uVar2 = uVar5;
      } while (uVar5 != 0);
      uVar1 = param_2[0xd];
      if (param_3 == (undefined1 *)0x0) goto LAB_1000b7b5;
    }
    uVar5 = 0;
    do {
      uVar2 = uVar5;
      uVar5 = uVar2 + 1;
    } while (param_3[uVar2] != '\0');
    if (uVar5 < 0x300) {
      param_3[uVar2] = 0x20;
      uVar2 = uVar5;
    }
    param_3[uVar2] = 0;
    uVar5 = 0xffffffffffffffff;
    do {
      uVar2 = uVar5;
      uVar5 = uVar2 + 1;
    } while (param_3[uVar2 + 1] != '\0');
    if (uVar2 + 2 < 0x300) {
      param_3[uVar5] = 0x6e;
      bVar11 = uVar5 != 0x2fe;
      uVar5 = uVar2 + 2;
      if (bVar11) {
        uVar5 = uVar2 + 3;
        param_3[uVar2 + 2] = 0x65;
        if (uVar5 < 0x2ff) {
          uVar5 = uVar2 + 4;
          param_3[uVar2 + 3] = 0x74;
          if (uVar5 < 0x2ff) {
            uVar5 = uVar2 + 5;
            param_3[uVar2 + 4] = 0x77;
            if (uVar5 < 0x2ff) {
              uVar5 = uVar2 + 6;
              param_3[uVar2 + 5] = 0x6f;
              if (uVar5 < 0x2ff) {
                uVar5 = uVar2 + 7;
                param_3[uVar2 + 6] = 0x72;
                if (uVar5 < 0x2ff) {
                  param_3[uVar2 + 7] = 0x6b;
                  uVar5 = uVar2 + 8;
                }
              }
            }
          }
        }
      }
    }
    param_3[uVar5] = 0;
    uVar5 = 0;
    do {
      uVar2 = uVar5;
      uVar5 = uVar2 + 1;
    } while (param_3[uVar2] != '\0');
    if (uVar5 < 0x300) {
      param_3[uVar2] = 0x3d;
      uVar2 = uVar5;
    }
    param_3[uVar2] = 0;
    if (uVar1 == 0) {
      uVar5 = 0;
      do {
        uVar2 = uVar5;
        uVar5 = uVar2 + 1;
      } while (param_3[uVar2] != '\0');
      if (uVar2 + 1 < 0x300) {
        *(undefined2 *)(param_3 + uVar2) = 0x30;
      }
      uVar1 = param_2[0xe];
    }
    else {
LAB_1000b8e9:
      uVar5 = 0;
      do {
        abStack_13[uVar5 + 1] = (char)uVar1 + (char)(uVar1 / 10) * -10 | 0x30;
        uVar2 = uVar5 + 1;
        if (8 < uVar5) break;
        bVar11 = 9 < uVar1;
        uVar5 = uVar2;
        uVar1 = uVar1 / 10;
      } while (bVar11);
LAB_1000b938:
      do {
        uVar5 = uVar2 - 1;
        if (param_3 == (undefined1 *)0x0) {
          uVar2 = uVar5;
          if (uVar5 == 0) goto LAB_1000b978;
          goto LAB_1000b938;
        }
        uVar4 = 0;
        do {
          uVar6 = uVar4;
          uVar4 = uVar6 + 1;
        } while (param_3[uVar6] != '\0');
        if (uVar4 < 0x300) {
          param_3[uVar6] = abStack_13[uVar2];
          param_3[uVar4] = 0;
        }
        uVar2 = uVar5;
      } while (uVar5 != 0);
      uVar1 = param_2[0xe];
      if (param_3 == (undefined1 *)0x0) goto LAB_1000b985;
    }
    uVar5 = 0;
    do {
      uVar2 = uVar5;
      uVar5 = uVar2 + 1;
    } while (param_3[uVar2] != '\0');
    if (uVar5 < 0x300) {
      param_3[uVar2] = 0x20;
      uVar2 = uVar5;
    }
    param_3[uVar2] = 0;
    uVar5 = 0xffffffffffffffff;
    do {
      uVar2 = uVar5;
      uVar5 = uVar2 + 1;
    } while (param_3[uVar2 + 1] != '\0');
    if (uVar2 + 2 < 0x300) {
      param_3[uVar5] = 0x66;
      bVar11 = uVar5 != 0x2fe;
      uVar5 = uVar2 + 2;
      if (bVar11) {
        uVar5 = uVar2 + 3;
        param_3[uVar2 + 2] = 0x69;
        if (uVar5 < 0x2ff) {
          uVar5 = uVar2 + 4;
          param_3[uVar2 + 3] = 0x72;
          if (uVar5 < 0x2ff) {
            uVar5 = uVar2 + 5;
            param_3[uVar2 + 4] = 0x65;
            if (uVar5 < 0x2ff) {
              uVar5 = uVar2 + 6;
              param_3[uVar2 + 5] = 0x77;
              if (uVar5 < 0x2ff) {
                uVar5 = uVar2 + 7;
                param_3[uVar2 + 6] = 0x69;
                if (uVar5 < 0x2ff) {
                  uVar5 = uVar2 + 8;
                  param_3[uVar2 + 7] = 0x72;
                  if (uVar5 < 0x2ff) {
                    param_3[uVar2 + 8] = 0x65;
                    uVar5 = uVar2 + 9;
                  }
                }
              }
            }
          }
        }
      }
    }
    param_3[uVar5] = 0;
    uVar5 = 0;
    do {
      uVar2 = uVar5;
      uVar5 = uVar2 + 1;
    } while (param_3[uVar2] != '\0');
    if (uVar5 < 0x300) {
      param_3[uVar2] = 0x3d;
      uVar2 = uVar5;
    }
    param_3[uVar2] = 0;
    if (uVar1 == 0) {
      uVar5 = 0;
      do {
        uVar2 = uVar5;
        uVar5 = uVar2 + 1;
      } while (param_3[uVar2] != '\0');
      if (uVar2 + 1 < 0x300) {
        *(undefined2 *)(param_3 + uVar2) = 0x30;
      }
      uVar1 = param_2[0xf];
    }
    else {
LAB_1000bac9:
      uVar5 = 0;
      do {
        abStack_13[uVar5 + 1] = (char)uVar1 + (char)(uVar1 / 10) * -10 | 0x30;
        uVar2 = uVar5 + 1;
        if (8 < uVar5) break;
        bVar11 = 9 < uVar1;
        uVar5 = uVar2;
        uVar1 = uVar1 / 10;
      } while (bVar11);
LAB_1000bb18:
      do {
        uVar5 = uVar2 - 1;
        if (param_3 == (undefined1 *)0x0) {
          uVar2 = uVar5;
          if (uVar5 == 0) goto LAB_1000bb58;
          goto LAB_1000bb18;
        }
        uVar4 = 0;
        do {
          uVar6 = uVar4;
          uVar4 = uVar6 + 1;
        } while (param_3[uVar6] != '\0');
        if (uVar4 < 0x300) {
          param_3[uVar6] = abStack_13[uVar2];
          param_3[uVar4] = 0;
        }
        uVar2 = uVar5;
      } while (uVar5 != 0);
      uVar1 = param_2[0xf];
      if (param_3 == (undefined1 *)0x0) goto LAB_1000bb65;
    }
    uVar5 = 0;
    do {
      uVar2 = uVar5;
      uVar5 = uVar2 + 1;
    } while (param_3[uVar2] != '\0');
    if (uVar5 < 0x300) {
      param_3[uVar2] = 0x20;
      uVar2 = uVar5;
    }
    param_3[uVar2] = 0;
    uVar5 = 0;
    do {
      uVar2 = uVar5;
      uVar5 = uVar2 + 1;
    } while (param_3[uVar2] != '\0');
    if (uVar2 + 1 < 0x300) {
      cVar8 = 'c';
      pcVar3 = str_10012fa3;
      do {
        pcVar3 = pcVar3 + 1;
        param_3[uVar2] = cVar8;
        uVar2 = uVar2 + 1;
        cVar8 = *pcVar3;
        if (cVar8 == '\0') break;
      } while (uVar2 < 0x2ff);
    }
    param_3[uVar2] = 0;
    uVar5 = 0;
    do {
      uVar2 = uVar5;
      uVar5 = uVar2 + 1;
    } while (param_3[uVar2] != '\0');
    if (uVar5 < 0x300) {
      param_3[uVar2] = 0x3d;
      uVar2 = uVar5;
    }
    param_3[uVar2] = 0;
    if (uVar1 == 0) {
      uVar5 = 0;
      do {
        uVar2 = uVar5;
        uVar5 = uVar2 + 1;
      } while (param_3[uVar2] != '\0');
      if (uVar2 + 1 < 0x300) {
        *(undefined2 *)(param_3 + uVar2) = 0x30;
      }
      uVar1 = param_2[0x10];
    }
    else {
LAB_1000bc59:
      uVar5 = 0;
      do {
        abStack_13[uVar5 + 1] = (char)uVar1 + (char)(uVar1 / 10) * -10 | 0x30;
        uVar2 = uVar5 + 1;
        if (8 < uVar5) break;
        bVar11 = 9 < uVar1;
        uVar5 = uVar2;
        uVar1 = uVar1 / 10;
      } while (bVar11);
LAB_1000bca8:
      do {
        uVar5 = uVar2 - 1;
        if (param_3 == (undefined1 *)0x0) {
          uVar2 = uVar5;
          if (uVar5 == 0) goto LAB_1000bce8;
          goto LAB_1000bca8;
        }
        uVar4 = 0;
        do {
          uVar6 = uVar4;
          uVar4 = uVar6 + 1;
        } while (param_3[uVar6] != '\0');
        if (uVar4 < 0x300) {
          param_3[uVar6] = abStack_13[uVar2];
          param_3[uVar4] = 0;
        }
        uVar2 = uVar5;
      } while (uVar5 != 0);
      uVar1 = param_2[0x10];
      if (param_3 == (undefined1 *)0x0) goto LAB_1000bcf5;
    }
    uVar5 = 0;
    do {
      uVar2 = uVar5;
      uVar5 = uVar2 + 1;
    } while (param_3[uVar2] != '\0');
    if (uVar5 < 0x300) {
      param_3[uVar2] = 0x20;
      uVar2 = uVar5;
    }
    param_3[uVar2] = 0;
    uVar5 = 0;
    do {
      uVar2 = uVar5;
      uVar5 = uVar2 + 1;
    } while (param_3[uVar2] != '\0');
    if (uVar5 < 0x300) {
      param_3[uVar2] = 0x73;
      uVar4 = uVar5;
      if (uVar5 != 0x2ff) {
        uVar4 = uVar2 + 2;
        param_3[uVar5] = 0x6d;
        if (uVar4 < 0x2ff) {
          param_3[uVar2 + 2] = 99;
          uVar4 = uVar2 + 3;
        }
      }
    }
    else {
      uVar4 = uVar2;
    }
    param_3[uVar4] = 0;
    uVar5 = 0;
    do {
      uVar2 = uVar5;
      uVar5 = uVar2 + 1;
    } while (param_3[uVar2] != '\0');
    if (uVar5 < 0x300) {
      param_3[uVar2] = 0x3d;
      uVar2 = uVar5;
    }
    param_3[uVar2] = 0;
    if (uVar1 == 0) {
      uVar5 = 0;
      do {
        uVar2 = uVar5;
        uVar5 = uVar2 + 1;
      } while (param_3[uVar2] != '\0');
      if (uVar2 + 1 < 0x300) {
        *(undefined2 *)(param_3 + uVar2) = 0x30;
      }
      uVar1 = param_2[0x11];
    }
    else {
LAB_1000bdd9:
      uVar5 = 0;
      do {
        abStack_13[uVar5 + 1] = (char)uVar1 + (char)(uVar1 / 10) * -10 | 0x30;
        uVar2 = uVar5 + 1;
        if (8 < uVar5) break;
        bVar11 = 9 < uVar1;
        uVar5 = uVar2;
        uVar1 = uVar1 / 10;
      } while (bVar11);
LAB_1000be28:
      do {
        uVar5 = uVar2 - 1;
        if (param_3 == (undefined1 *)0x0) {
          uVar2 = uVar5;
          if (uVar5 == 0) goto LAB_1000be68;
          goto LAB_1000be28;
        }
        uVar4 = 0;
        do {
          uVar6 = uVar4;
          uVar4 = uVar6 + 1;
        } while (param_3[uVar6] != '\0');
        if (uVar4 < 0x300) {
          param_3[uVar6] = abStack_13[uVar2];
          param_3[uVar4] = 0;
        }
        uVar2 = uVar5;
      } while (uVar5 != 0);
      uVar1 = param_2[0x11];
      if (param_3 == (undefined1 *)0x0) goto LAB_1000be75;
    }
    uVar5 = 0;
    do {
      uVar2 = uVar5;
      uVar5 = uVar2 + 1;
    } while (param_3[uVar2] != '\0');
    if (uVar5 < 0x300) {
      param_3[uVar2] = 0x20;
      uVar2 = uVar5;
    }
    param_3[uVar2] = 0;
    uVar5 = 0xffffffffffffffff;
    do {
      uVar2 = uVar5;
      uVar5 = uVar2 + 1;
    } while (param_3[uVar2 + 1] != '\0');
    if (uVar2 + 2 < 0x300) {
      param_3[uVar5] = 0x67;
      bVar11 = uVar5 != 0x2fe;
      uVar5 = uVar2 + 2;
      if (bVar11) {
        uVar5 = uVar2 + 3;
        param_3[uVar2 + 2] = 0x6d;
        if (uVar5 < 0x2ff) {
          uVar5 = uVar2 + 4;
          param_3[uVar2 + 3] = 0x75;
          if (uVar5 < 0x2ff) {
            param_3[uVar2 + 4] = 0x78;
            uVar5 = uVar2 + 5;
          }
        }
      }
    }
    param_3[uVar5] = 0;
    uVar5 = 0;
    do {
      uVar2 = uVar5;
      uVar5 = uVar2 + 1;
    } while (param_3[uVar2] != '\0');
    if (uVar5 < 0x300) {
      param_3[uVar2] = 0x3d;
      uVar2 = uVar5;
    }
    param_3[uVar2] = 0;
    if (uVar1 == 0) {
      uVar5 = 0;
      do {
        uVar2 = uVar5;
        uVar5 = uVar2 + 1;
      } while (param_3[uVar2] != '\0');
      if (uVar2 + 1 < 0x300) {
        *(undefined2 *)(param_3 + uVar2) = 0x30;
      }
      uVar1 = param_2[0x12];
    }
    else {
LAB_1000bf69:
      uVar5 = 0;
      do {
        abStack_13[uVar5 + 1] = (char)uVar1 + (char)(uVar1 / 10) * -10 | 0x30;
        uVar2 = uVar5 + 1;
        if (8 < uVar5) break;
        bVar11 = 9 < uVar1;
        uVar5 = uVar2;
        uVar1 = uVar1 / 10;
      } while (bVar11);
LAB_1000bfb8:
      do {
        uVar5 = uVar2 - 1;
        if (param_3 == (undefined1 *)0x0) {
          uVar2 = uVar5;
          if (uVar5 == 0) goto LAB_1000bff8;
          goto LAB_1000bfb8;
        }
        uVar4 = 0;
        do {
          uVar6 = uVar4;
          uVar4 = uVar6 + 1;
        } while (param_3[uVar6] != '\0');
        if (uVar4 < 0x300) {
          param_3[uVar6] = abStack_13[uVar2];
          param_3[uVar4] = 0;
        }
        uVar2 = uVar5;
      } while (uVar5 != 0);
      uVar1 = param_2[0x12];
      if (param_3 == (undefined1 *)0x0) goto LAB_1000c005;
    }
    uVar5 = 0;
    do {
      uVar2 = uVar5;
      uVar5 = uVar2 + 1;
    } while (param_3[uVar2] != '\0');
    if (uVar5 < 0x300) {
      param_3[uVar2] = 0x20;
      uVar2 = uVar5;
    }
    param_3[uVar2] = 0;
    uVar5 = 0;
    do {
      uVar2 = uVar5;
      uVar5 = uVar2 + 1;
    } while (param_3[uVar2] != '\0');
    if (uVar2 + 1 < 0x300) {
      cVar8 = 'c';
      pcVar3 = str_10012fae;
      do {
        pcVar3 = pcVar3 + 1;
        param_3[uVar2] = cVar8;
        uVar2 = uVar2 + 1;
        cVar8 = *pcVar3;
        if (cVar8 == '\0') break;
      } while (uVar2 < 0x2ff);
    }
    param_3[uVar2] = 0;
    uVar5 = 0;
    do {
      uVar2 = uVar5;
      uVar5 = uVar2 + 1;
    } while (param_3[uVar2] != '\0');
    if (uVar5 < 0x300) {
      param_3[uVar2] = 0x3d;
      uVar2 = uVar5;
    }
    param_3[uVar2] = 0;
    if (uVar1 == 0) {
      uVar5 = 0;
      do {
        uVar2 = uVar5;
        uVar5 = uVar2 + 1;
      } while (param_3[uVar2] != '\0');
      if (uVar2 + 1 < 0x300) {
        *(undefined2 *)(param_3 + uVar2) = 0x30;
      }
      goto LAB_1000c199;
    }
  }
  uVar5 = 0;
  do {
    abStack_13[uVar5 + 1] = (char)uVar1 + (char)(uVar1 / 10) * -10 | 0x30;
    uVar2 = uVar5 + 1;
    if (8 < uVar5) break;
    bVar11 = 9 < uVar1;
    uVar5 = uVar2;
    uVar1 = uVar1 / 10;
  } while (bVar11);
  do {
    if (param_3 != (undefined1 *)0x0) {
      uVar5 = 0;
      do {
        uVar4 = uVar5;
        uVar5 = uVar4 + 1;
      } while (param_3[uVar4] != '\0');
      if (uVar5 < 0x300) {
        param_3[uVar4] = abStack_13[uVar2];
        param_3[uVar5] = 0;
      }
    }
    uVar2 = uVar2 - 1;
  } while (uVar2 != 0);
LAB_1000c199:
  pcVar3 = &DAT_10012fe1;
  pcVar7 = &DAT_10012fe1;
  if (param_2[0x13] == 0) {
    pcVar7 = str_10012fe6;
  }
  if ((param_3 != (undefined1 *)0x0) && (cVar8 = *pcVar7, cVar8 != '\0')) {
    uVar5 = 0;
    do {
      uVar2 = uVar5;
      uVar5 = uVar2 + 1;
    } while (param_3[uVar2] != '\0');
    if (uVar5 < 0x300) {
      param_3[uVar2] = 0x20;
      uVar2 = uVar5;
    }
    param_3[uVar2] = 0;
    uVar5 = 0;
    do {
      uVar2 = uVar5;
      uVar5 = uVar2 + 1;
    } while (param_3[uVar2] != '\0');
    if (uVar2 + 1 < 0x300) {
      cVar10 = 'i';
      pcVar9 = str_10012fbf;
      do {
        pcVar9 = pcVar9 + 1;
        param_3[uVar2] = cVar10;
        uVar2 = uVar2 + 1;
        cVar10 = *pcVar9;
        if (cVar10 == '\0') break;
      } while (uVar2 < 0x2ff);
    }
    param_3[uVar2] = 0;
    uVar5 = 0;
    do {
      uVar2 = uVar5;
      uVar5 = uVar2 + 1;
    } while (param_3[uVar2] != '\0');
    if (uVar5 < 0x300) {
      param_3[uVar2] = 0x3d;
      uVar2 = uVar5;
    }
    param_3[uVar2] = 0;
    uVar5 = 0;
    do {
      uVar2 = uVar5;
      uVar5 = uVar2 + 1;
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
  if (param_2[0x14] == 0) {
    pcVar3 = str_10012fe6;
  }
  if ((param_3 != (undefined1 *)0x0) && (cVar8 = *pcVar3, cVar8 != '\0')) {
    uVar5 = 0;
    do {
      uVar2 = uVar5;
      uVar5 = uVar2 + 1;
    } while (param_3[uVar2] != '\0');
    if (uVar5 < 0x300) {
      param_3[uVar2] = 0x20;
      uVar2 = uVar5;
    }
    param_3[uVar2] = 0;
    uVar5 = 0;
    do {
      uVar2 = uVar5;
      uVar5 = uVar2 + 1;
    } while (param_3[uVar2] != '\0');
    if (uVar2 + 1 < 0x300) {
      cVar10 = 'f';
      pcVar7 = str_10012fcd;
      do {
        pcVar7 = pcVar7 + 1;
        param_3[uVar2] = cVar10;
        uVar2 = uVar2 + 1;
        cVar10 = *pcVar7;
        if (cVar10 == '\0') break;
      } while (uVar2 < 0x2ff);
    }
    param_3[uVar2] = 0;
    uVar5 = 0;
    do {
      uVar2 = uVar5;
      uVar5 = uVar2 + 1;
    } while (param_3[uVar2] != '\0');
    if (uVar5 < 0x300) {
      param_3[uVar2] = 0x3d;
      uVar2 = uVar5;
    }
    param_3[uVar2] = 0;
    uVar5 = 0;
    do {
      uVar2 = uVar5;
      uVar5 = uVar2 + 1;
    } while (param_3[uVar2] != '\0');
    if (uVar2 + 1 < 0x300) {
      do {
        pcVar3 = pcVar3 + 1;
        param_3[uVar2] = cVar8;
        uVar2 = uVar2 + 1;
        cVar8 = *pcVar3;
        if (cVar8 == '\0') break;
      } while (uVar2 < 0x2ff);
    }
    param_3[uVar2] = 0;
  }
  return;
}

#undef DAT_10012fe1
#undef str_10012e4b
#undef str_10012eff
#undef str_10012f0f
#undef str_10012f19
#undef str_10012f24
#undef str_10012f32
#undef str_10012f3f
#undef str_10012f4d
#undef str_10012f5b
#undef str_10012fa3
#undef str_10012fae
#undef str_10012fbf
#undef str_10012fcd
#undef str_10012fe6
#undef abStack_13

#undef DAT_10012f79
#define DAT_10012f79 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x291U)))
#undef DAT_10012f7a
#define DAT_10012f7a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x292U)))
#undef DAT_10012f7b
#define DAT_10012f7b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x293U)))
#undef DAT_10012f7c
#define DAT_10012f7c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x294U)))
#undef DAT_10013309
#define DAT_10013309 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x621U)))
#undef DAT_10013360
#define DAT_10013360 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x678U)))
#undef DAT_10013361
#define DAT_10013361 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x679U)))
#undef DAT_10013362
#define DAT_10013362 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x67aU)))
#undef DAT_10013363
#define DAT_10013363 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x67bU)))
#undef DAT_10013364
#define DAT_10013364 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x67cU)))
#undef DAT_10013365
#define DAT_10013365 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x67dU)))
#undef DAT_100133c2
#define DAT_100133c2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6daU)))
#undef DAT_100133cd
#define DAT_100133cd (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6e5U)))
#undef str_10012e2b
#define str_10012e2b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x143U)))
#undef str_10012f8c
#define str_10012f8c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2a4U)))
#undef str_10012f92
#define str_10012f92 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2aaU)))
#undef str_10012f9a
#define str_10012f9a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2b2U)))
#undef str_1001331c
#define str_1001331c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x634U)))
#undef str_1001332a
#define str_1001332a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x642U)))
#undef str_1001334f
#define str_1001334f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x667U)))
#undef str_10013358
#define str_10013358 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x670U)))
#undef str_10013366
#define str_10013366 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x67eU)))
#undef str_1001336d
#define str_1001336d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x685U)))
#undef str_10013379
#define str_10013379 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x691U)))
#undef str_10013385
#define str_10013385 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x69dU)))
#undef str_1001339b
#define str_1001339b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6b3U)))
#undef str_100133d9
#define str_100133d9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6f1U)))
#undef str_1001340f
#define str_1001340f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x727U)))
#undef str_10013437
#define str_10013437 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x74fU)))
#undef str_10013447
#define str_10013447 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x75fU)))
#undef str_10013458
#define str_10013458 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x770U)))
#undef str_10013468
#define str_10013468 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x780U)))
#undef str_1001347c
#define str_1001347c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x794U)))
#undef str_10013494
#define str_10013494 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7acU)))
#undef str_100134ac
#define str_100134ac (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7c4U)))
#undef str_100134c5
#define str_100134c5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7ddU)))
#undef str_100134d6
#define str_100134d6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7eeU)))
#undef str_100134e6
#define str_100134e6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7feU)))
#undef str_100134f5
#define str_100134f5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x80dU)))
#undef str_1001350b
#define str_1001350b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x823U)))
#undef str_10013515
#define str_10013515 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x82dU)))
#undef str_10013521
#define str_10013521 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x839U)))
#undef str_10013536
#define str_10013536 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x84eU)))
#undef str_10013542
#define str_10013542 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x85aU)))
#undef str_1001355b
#define str_1001355b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x873U)))
#undef str_10013563
#define str_10013563 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x87bU)))
#undef str_1001356b
#define str_1001356b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x883U)))
#undef str_10013585
#define str_10013585 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x89dU)))
#undef str_1001358f
#define str_1001358f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x8a7U)))
#define local_338 (*(undefined2 *)(frame + 664))
#define local_336 (*(undefined1 (*)[637])(frame + 666))
#define local_b8 (*(undefined4 *)(frame + 1304))
#define local_58 (*(uint *)(frame + 1400))
#define local_54 (*(uint *)(frame + 1404))
#define local_50 (*(undefined4 *)(frame + 1408))
#define local_4c (*(undefined4 *)(frame + 1412))
#define local_40 (*(int * *)(frame + 1424))
#define local_38 (*(byte * *)(frame + 1432))
#define cStack_339 (*(char *)(frame + 663))
#define cStack_b9 (*(char *)(frame + 1303))
#define local_5c0 (*(int * *)(frame + 16))
#define local_5b8 (*(undefined4 *)(frame + 24))
#define local_5b4 (*(undefined1 (*)[635])(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c400
 */

void recovered_1000c400(int *param_1,byte *param_2,int *param_3)

{
  unsigned char frame[1520] __attribute__((aligned(16))) = {0};

  ushort uVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  char *pcVar6;
  code *pcVar7;
  byte bVar8;
  char *pcVar9;
  ulong uVar10;
  char *pcVar11;
  ushort uVar12;
  byte *pbVar13;
  byte bVar14;
  byte bVar15;
  int *piVar16;
  ulong uVar17;
  ulong uVar18;
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
  bVar8 = param_2[8];
  switch((uintptr_t)(bVar8 - 1)) {
  case 0:
    pcVar11 = str_10013358;
    break;
  case 1:
    pcVar11 = str_10012f92;
    break;
  case 2:
    pcVar11 = str_1001334f;
    break;
  case 3:
    pcVar11 = &DAT_10013360;
    break;
  default:
switchD_1000c439_caseD_4:
    uVar1 = *(ushort *)(param_2 + 4);
    if (uVar1 < 0x11ab) {
      if (uVar1 != 0x106b) {
        if (uVar1 != 0x1180) {
          return;
        }
        pcVar11 = str_1001336d;
        break;
      }
    }
    else if ((uVar1 != 0x14e4) && (uVar1 != 0x11ab)) {
      return;
    }
    pcVar11 = str_10013379;
    break;
  case 5:
    pcVar11 = str_10013366;
    break;
  case 0xb:
    bVar15 = param_2[9];
    if (bVar15 == 0) {
      pcVar11 = str_10012f9a;
    }
    else if (bVar15 == 3) {
      pcVar11 = &DAT_10012f79;
    }
    else {
      if (bVar15 != 5) goto switchD_1000c439_caseD_4;
      pcVar11 = str_10012f8c;
    }
  }
  if (param_3 == (int *)0x0) {
    return;
  }
  if (0x6f < (uint)param_3[1]) {
    return;
  }
  *param_3 = *param_3 + 1;
  sVar2 = *(short *)(param_2 + 4);
  lVar20 = 8;
  if (sVar2 == -0x7f7a) goto LAB_1000c579;
  if (sVar2 == 0x10de) {
    param_3[3] = param_3[3] + 1;
    bVar28 = true;
    if (bVar8 != 3) goto LAB_1000c580;
    param_3[4] = param_3[4] + 1;
    uVar1 = *(ushort *)(param_2 + 6);
    lVar20 = 0x14;
    if (uVar1 < 0x647) {
      if (((uVar1 == 0x407) || (uVar1 == 0x409)) || (uVar1 == 0x613)) goto LAB_1000c579;
    }
    else if (((uVar1 == 0x647) || (uVar1 == 0x867)) || (uVar1 == 0x863)) {
LAB_1000c579:
      *(int *)((long)param_3 + lVar20) = *(int *)((long)param_3 + lVar20) + 1;
      bVar28 = sVar2 != -0x7f7a;
      goto LAB_1000c580;
    }
    goto LAB_1000c5c8;
  }
  bVar28 = false;
LAB_1000c580:
  switch((uintptr_t)(bVar8 - 1)) {
  case 0:
    lVar20 = 0x18;
    if (param_2[9] == 6) goto LAB_1000c5b9;
    break;
  case 1:
    lVar20 = 0x34;
    goto LAB_1000c5b9;
  case 3:
    lVar20 = 0x1c;
    if (param_2[9] == 3) goto LAB_1000c5b9;
    break;
  case 0xb:
    bVar15 = param_2[9];
    if (bVar15 == 0) {
      lVar20 = 0x38;
    }
    else if (bVar15 == 5) {
      lVar20 = 0x30;
    }
    else {
      if (bVar15 != 3) break;
      param_3[8] = param_3[8] + 1;
      bVar15 = param_2[10];
      lVar20 = 0x24;
      if ((bVar15 != 0) &&
         (((sVar2 != -0x7f7a ||
           (((uVar1 = *(ushort *)(param_2 + 6), (uVar1 & 0xfff8) != 0x27c8 && (5 < uVar1 - 0x2830))
            && (5 < uVar1 - 0x2934)))) && (lVar20 = 0x28, bVar15 != 0x10)))) {
        if (bVar28) {
          uVar1 = *(ushort *)(param_2 + 6);
          if (((((uVar1 | 2) == 0xaa7) || (lVar20 = 0x2c, bVar15 == 0x20)) || (uVar1 == 0xaa6)) ||
             (uVar1 == 0xaa9)) goto LAB_1000c5b9;
        }
        else {
          lVar20 = 0x2c;
          if (bVar15 == 0x20) goto LAB_1000c5b9;
        }
        break;
      }
    }
LAB_1000c5b9:
    *(int *)((long)param_3 + lVar20) = *(int *)((long)param_3 + lVar20) + 1;
  }
  if (sVar2 == 0x1180) {
    param_3[0xf] = param_3[0xf] + 1;
  }
LAB_1000c5c8:
  PF_PART1(local_338, 0) = '\0';
  uVar17 = 0xffffffffffffffff;
  do {
    uVar18 = uVar17;
    uVar17 = uVar18 + 1;
  } while (local_336[uVar18 - 1] != '\0');
  if (uVar18 + 2 < 0x280) {
    local_336[uVar18 - 1] = 0x72;
    bVar28 = uVar17 != 0x27e;
    uVar17 = uVar18 + 2;
    if (bVar28) {
      uVar17 = uVar18 + 3;
      local_336[uVar18] = 0x6f;
      if (uVar17 < 0x27f) {
        uVar17 = uVar18 + 4;
        local_336[uVar18 + 1] = 0x6c;
        if (uVar17 < 0x27f) {
          uVar17 = uVar18 + 5;
          local_336[uVar18 + 2] = 0x65;
          if (uVar17 < 0x27f) {
            local_336[uVar18 + 3] = 0x3d;
            uVar17 = uVar18 + 6;
          }
        }
      }
    }
  }
  local_5b4[uVar17 + 0x27c] = 0;
  uVar17 = 0;
  do {
    uVar18 = uVar17;
    uVar17 = uVar18 + 1;
  } while (local_5b4[uVar18 + 0x27c] != '\0');
  cVar19 = *pcVar11;
  pcVar6 = pcVar11;
  if (uVar18 + 1 < 0x280 && cVar19 != '\0') {
    do {
      local_5b4[uVar18 + 0x27c] = cVar19;
      uVar18 = uVar18 + 1;
      cVar19 = pcVar6[1];
      if (cVar19 == '\0') break;
      pcVar6 = pcVar6 + 1;
    } while (uVar18 < 0x27f);
  }
  local_5b4[uVar18 + 0x27c] = 0;
  if (sVar2 == 0x10de) {
    uVar17 = 0;
    do {
      uVar18 = uVar17;
      uVar17 = uVar18 + 1;
    } while (local_5b4[uVar18 + 0x27c] != '\0');
    if (uVar18 + 1 < 0x280) {
      cVar19 = ' ';
      pcVar6 = str_10013385;
      do {
        pcVar6 = pcVar6 + 1;
        local_5b4[uVar18 + 0x27c] = cVar19;
        uVar18 = uVar18 + 1;
        cVar19 = *pcVar6;
        if (cVar19 == '\0') break;
      } while (uVar18 < 0x27f);
    }
    local_5b4[uVar18 + 0x27c] = 0;
    uVar1 = *(ushort *)(param_2 + 6);
    switch((uintptr_t)(uVar1)) {
    case 0xaa2:
      uVar17 = 0;
      do {
        uVar18 = uVar17;
        uVar17 = uVar18 + 1;
      } while (local_5b4[uVar18 + 0x27c] != '\0');
      if (uVar18 + 1 < 0x280) {
        cVar19 = ' ';
        pcVar6 = &DAT_100133cd;
        do {
          local_5b4[uVar18 + 0x27c] = cVar19;
          uVar18 = uVar18 + 1;
          cVar19 = *pcVar6;
          if (cVar19 == '\0') break;
          pcVar6 = pcVar6 + 1;
        } while (uVar18 < 0x27f);
      }
      break;
    default:
      goto switchD_1000c83b_caseD_aa3;
    case 0xaa5:
    case 0xaa7:
      uVar17 = 0;
      do {
        uVar18 = uVar17;
        uVar17 = uVar18 + 1;
      } while (local_5b4[uVar18 + 0x27c] != '\0');
      if (uVar18 + 1 < 0x280) {
        cVar19 = ' ';
        pcVar6 = str_100133d9;
        do {
          pcVar6 = pcVar6 + 1;
          local_5b4[uVar18 + 0x27c] = cVar19;
          uVar18 = uVar18 + 1;
          cVar19 = *pcVar6;
          if (cVar19 == '\0') break;
        } while (uVar18 < 0x27f);
      }
      break;
    case 0xaa6:
    case 0xaa9:
      uVar17 = 0;
      do {
        uVar18 = uVar17;
        uVar17 = uVar18 + 1;
      } while (local_5b4[uVar18 + 0x27c] != '\0');
      if (uVar18 + 1 < 0x280) {
        cVar19 = ' ';
        pcVar6 = str_1001340f;
        do {
          pcVar6 = pcVar6 + 1;
          local_5b4[uVar18 + 0x27c] = cVar19;
          uVar18 = uVar18 + 1;
          cVar19 = *pcVar6;
          if (cVar19 == '\0') break;
        } while (uVar18 < 0x27f);
      }
      break;
    case 0xab0:
      uVar17 = 0;
      do {
        uVar18 = uVar17;
        uVar17 = uVar18 + 1;
      } while (local_5b4[uVar18 + 0x27c] != '\0');
      if (uVar18 + 1 < 0x280) {
        cVar19 = ' ';
        pcVar6 = str_10013437;
        do {
          pcVar6 = pcVar6 + 1;
          local_5b4[uVar18 + 0x27c] = cVar19;
          uVar18 = uVar18 + 1;
          cVar19 = *pcVar6;
          if (cVar19 == '\0') break;
        } while (uVar18 < 0x27f);
      }
      break;
    case 0xab9:
      uVar17 = 0;
      do {
        uVar18 = uVar17;
        uVar17 = uVar18 + 1;
      } while (local_5b4[uVar18 + 0x27c] != '\0');
      if (uVar18 + 1 < 0x280) {
        cVar19 = ' ';
        pcVar6 = str_1001339b;
        do {
          pcVar6 = pcVar6 + 1;
          local_5b4[uVar18 + 0x27c] = cVar19;
          uVar18 = uVar18 + 1;
          cVar19 = *pcVar6;
          if (cVar19 == '\0') break;
        } while (uVar18 < 0x27f);
      }
      break;
    case 0xac0:
      uVar17 = 0;
      do {
        uVar18 = uVar17;
        uVar17 = uVar18 + 1;
      } while (local_5b4[uVar18 + 0x27c] != '\0');
      if (uVar18 + 1 < 0x280) {
        cVar19 = ' ';
        pcVar6 = &DAT_100133c2;
        do {
          local_5b4[uVar18 + 0x27c] = cVar19;
          uVar18 = uVar18 + 1;
          cVar19 = *pcVar6;
          if (cVar19 == '\0') break;
          pcVar6 = pcVar6 + 1;
        } while (uVar18 < 0x27f);
      }
    }
    local_5b4[uVar18 + 0x27c] = 0;
switchD_1000c83b_caseD_aa3:
    if (bVar8 == 3) {
      if (uVar1 < 0x647) {
        if (((uVar1 == 0x407) || (uVar1 == 0x409)) || (uVar1 == 0x613)) goto LAB_1000cb45;
      }
      else if (((uVar1 == 0x647) || (uVar1 == 0x867)) || (uVar1 == 0x863)) {
LAB_1000cb45:
        uVar17 = 0;
        do {
          uVar18 = uVar17;
          uVar17 = uVar18 + 1;
        } while (local_5b4[uVar18 + 0x27c] != '\0');
        if (uVar18 + 1 < 0x280) {
          cVar19 = ' ';
          pcVar6 = str_10013447;
          do {
            pcVar6 = pcVar6 + 1;
            local_5b4[uVar18 + 0x27c] = cVar19;
            uVar18 = uVar18 + 1;
            cVar19 = *pcVar6;
            if (cVar19 == '\0') break;
          } while (uVar18 < 0x27f);
        }
        goto LAB_1000cb9f;
      }
    }
  }
  else if (sVar2 == -0x7f7a) {
    uVar17 = 0;
    do {
      uVar18 = uVar17;
      uVar17 = uVar18 + 1;
    } while (local_5b4[uVar18 + 0x27c] != '\0');
    if (uVar18 + 1 < 0x280) {
      cVar19 = ' ';
      pcVar6 = &DAT_10013309;
      do {
        local_5b4[uVar18 + 0x27c] = cVar19;
        uVar18 = uVar18 + 1;
        cVar19 = *pcVar6;
        if (cVar19 == '\0') break;
        pcVar6 = pcVar6 + 1;
      } while (uVar18 < 0x27f);
    }
LAB_1000cb9f:
    local_5b4[uVar18 + 0x27c] = 0;
  }
  else if (sVar2 == 0x1180) {
    uVar17 = 0;
    do {
      uVar18 = uVar17;
      uVar17 = uVar18 + 1;
    } while (local_5b4[uVar18 + 0x27c] != '\0');
    if (uVar18 + 1 < 0x280) {
      cVar19 = ' ';
      pcVar6 = str_1001331c;
      do {
        pcVar6 = pcVar6 + 1;
        local_5b4[uVar18 + 0x27c] = cVar19;
        uVar18 = uVar18 + 1;
        cVar19 = *pcVar6;
        if (cVar19 == '\0') break;
      } while (uVar18 < 0x27f);
    }
    goto LAB_1000cb9f;
  }
  local_5b8 = 0;
  local_40 = param_1;
  local_38 = param_2;
  local_5c0 = param_3;
  if ((((param_1 == (int *)0x0) || (*param_1 != 0x54584b57)) || ((uint)param_1[2] < 100)) ||
     (param_1[0x18] == 0)) {
    uVar17 = 0;
    do {
      uVar18 = uVar17;
      uVar17 = uVar18 + 1;
    } while (local_5b4[uVar18 + 0x27c] != '\0');
    if (uVar18 + 1 < 0x280) {
      cVar19 = ' ';
      pcVar6 = str_1001347c;
      do {
        pcVar6 = pcVar6 + 1;
        local_5b4[uVar18 + 0x27c] = cVar19;
        uVar18 = uVar18 + 1;
        cVar19 = *pcVar6;
        if (cVar19 == '\0') break;
      } while (uVar18 < 0x27f);
    }
LAB_1000cd5c:
    pbVar13 = local_38;
    piVar16 = local_40;
    local_5b4[uVar18 + 0x27c] = 0;
    local_b8 = 0;
    local_4c = 0;
    local_50 = 0;
    bVar28 = false;
  }
  else {
    if (((code *)(ulong)(uint)param_1[0x17] == (code *)0x0) ||
       (iVar4 = (*(code *)(ulong)(uint)param_1[0x17])(*param_2,param_2[1],param_2[2],4,2,&local_5b8)
       , iVar4 == 0)) {
      uVar17 = 0;
      do {
        uVar18 = uVar17;
        uVar17 = uVar18 + 1;
      } while (local_5b4[uVar18 + 0x27c] != '\0');
      if (uVar18 + 1 < 0x280) {
        cVar19 = ' ';
        pcVar6 = str_10013494;
        do {
          pcVar6 = pcVar6 + 1;
          local_5b4[uVar18 + 0x27c] = cVar19;
          uVar18 = uVar18 + 1;
          cVar19 = *pcVar6;
          if (cVar19 == '\0') break;
        } while (uVar18 < 0x27f);
      }
      goto LAB_1000cd5c;
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
    cVar19 = *pcVar11;
    if (cVar19 != '\0') {
      local_58 = uVar27;
      pcVar6 = pcVar11 + 7;
      cVar26 = cVar19;
      do {
        cVar23 = cVar26 + ' ';
        if (0x19 < (byte)(cVar26 + 0xbfU)) {
          cVar23 = cVar26;
        }
        cVar26 = pcVar6[-6];
        if (cVar23 == 's') {
          pcVar24 = str_10013358 + 1;
          if (cVar26 != '\0') {
            cVar23 = cVar26 + ' ';
            if (0x19 < (byte)(cVar26 + 0xbfU)) {
              cVar23 = cVar26;
            }
            if (cVar23 != 't') goto LAB_1000d0da;
            cVar23 = pcVar6[-5];
            pcVar24 = str_10013358 + 2;
            if (cVar23 != '\0') {
              cVar25 = cVar23 + ' ';
              if (0x19 < (byte)(cVar23 + 0xbfU)) {
                cVar25 = cVar23;
              }
              if (cVar25 != 'o') goto LAB_1000d0da;
              cVar23 = pcVar6[-4];
              pcVar24 = str_10013358 + 3;
              if (cVar23 != '\0') {
                cVar25 = cVar23 + ' ';
                if (0x19 < (byte)(cVar23 + 0xbfU)) {
                  cVar25 = cVar23;
                }
                if (cVar25 != 'r') goto LAB_1000d0da;
                cVar23 = pcVar6[-3];
                pcVar24 = str_10013358 + 4;
                if (cVar23 != '\0') {
                  cVar25 = cVar23 + ' ';
                  if (0x19 < (byte)(cVar23 + 0xbfU)) {
                    cVar25 = cVar23;
                  }
                  if (cVar25 != 'a') goto LAB_1000d0da;
                  cVar23 = pcVar6[-2];
                  pcVar24 = str_10013358 + 5;
                  if (cVar23 != '\0') {
                    cVar25 = cVar23 + ' ';
                    if (0x19 < (byte)(cVar23 + 0xbfU)) {
                      cVar25 = cVar23;
                    }
                    if (cVar25 != 'g') goto LAB_1000d0da;
                    cVar23 = pcVar6[-1];
                    pcVar24 = str_10013358 + 6;
                    if (cVar23 != '\0') {
                      cVar25 = cVar23 + ' ';
                      if (0x19 < (byte)(cVar23 + 0xbfU)) {
                        cVar25 = cVar23;
                      }
                      if (cVar25 != 'e') goto LAB_1000d0da;
                      pcVar24 = str_10013358 + 7;
                      if (*pcVar6 != '\0') goto LAB_1000f364;
                    }
                  }
                }
              }
            }
          }
          if (*pcVar24 == '\0') goto LAB_1000f364;
        }
LAB_1000d0da:
        pcVar6 = pcVar6 + 1;
      } while (cVar26 != '\0');
      pcVar6 = pcVar11 + 7;
      cVar26 = cVar19;
      do {
        cVar23 = cVar26 + ' ';
        if (0x19 < (byte)(cVar26 + 0xbfU)) {
          cVar23 = cVar26;
        }
        cVar26 = pcVar6[-6];
        if (cVar23 == 'n') {
          pcVar24 = str_10012f92 + 1;
          if (cVar26 != '\0') {
            cVar23 = cVar26 + ' ';
            if (0x19 < (byte)(cVar26 + 0xbfU)) {
              cVar23 = cVar26;
            }
            if (cVar23 != 'e') goto LAB_1000f0ad;
            cVar23 = pcVar6[-5];
            pcVar24 = str_10012f92 + 2;
            if (cVar23 != '\0') {
              cVar25 = cVar23 + ' ';
              if (0x19 < (byte)(cVar23 + 0xbfU)) {
                cVar25 = cVar23;
              }
              if (cVar25 != 't') goto LAB_1000f0ad;
              cVar23 = pcVar6[-4];
              pcVar24 = str_10012f92 + 3;
              if (cVar23 != '\0') {
                cVar25 = cVar23 + ' ';
                if (0x19 < (byte)(cVar23 + 0xbfU)) {
                  cVar25 = cVar23;
                }
                if (cVar25 != 'w') goto LAB_1000f0ad;
                cVar23 = pcVar6[-3];
                pcVar24 = str_10012f92 + 4;
                if (cVar23 != '\0') {
                  cVar25 = cVar23 + ' ';
                  if (0x19 < (byte)(cVar23 + 0xbfU)) {
                    cVar25 = cVar23;
                  }
                  if (cVar25 != 'o') goto LAB_1000f0ad;
                  cVar23 = pcVar6[-2];
                  pcVar24 = str_10012f92 + 5;
                  if (cVar23 != '\0') {
                    cVar25 = cVar23 + ' ';
                    if (0x19 < (byte)(cVar23 + 0xbfU)) {
                      cVar25 = cVar23;
                    }
                    if (cVar25 != 'r') goto LAB_1000f0ad;
                    cVar23 = pcVar6[-1];
                    pcVar24 = str_10012f92 + 6;
                    if (cVar23 != '\0') {
                      cVar25 = cVar23 + ' ';
                      if (0x19 < (byte)(cVar23 + 0xbfU)) {
                        cVar25 = cVar23;
                      }
                      if (cVar25 != 'k') goto LAB_1000f0ad;
                      pcVar24 = str_10012f92 + 7;
                      if (*pcVar6 != '\0') goto LAB_1000f364;
                    }
                  }
                }
              }
            }
          }
          if (*pcVar24 == '\0') goto LAB_1000f364;
        }
LAB_1000f0ad:
        pcVar6 = pcVar6 + 1;
      } while (cVar26 != '\0');
      pcVar6 = pcVar11 + 3;
      cVar26 = cVar19;
      do {
        cVar23 = cVar26 + ' ';
        if (0x19 < (byte)(cVar26 + 0xbfU)) {
          cVar23 = cVar26;
        }
        cVar26 = pcVar6[-2];
        if (cVar23 == 'u') {
          pcVar24 = &DAT_10012f7a;
          if (cVar26 != '\0') {
            cVar23 = cVar26 + ' ';
            if (0x19 < (byte)(cVar26 + 0xbfU)) {
              cVar23 = cVar26;
            }
            if (cVar23 != 's') goto LAB_1000f2d8;
            cVar23 = pcVar6[-1];
            pcVar24 = &DAT_10012f7b;
            if (cVar23 != '\0') {
              cVar25 = cVar23 + ' ';
              if (0x19 < (byte)(cVar23 + 0xbfU)) {
                cVar25 = cVar23;
              }
              if (cVar25 != 'b') goto LAB_1000f2d8;
              pcVar24 = &DAT_10012f7c;
              if (*pcVar6 != '\0') goto LAB_1000f364;
            }
          }
          if (*pcVar24 == '\0') goto LAB_1000f364;
        }
LAB_1000f2d8:
        pcVar6 = pcVar6 + 1;
      } while (cVar26 != '\0');
      pcVar6 = pcVar11 + 8;
      cVar26 = cVar19;
      do {
        cVar23 = cVar26 + ' ';
        if (0x19 < (byte)(cVar26 + 0xbfU)) {
          cVar23 = cVar26;
        }
        cVar26 = pcVar6[-7];
        if (cVar23 == 'f') {
          pcVar24 = str_10012f9a + 1;
          if (cVar26 != '\0') {
            cVar23 = cVar26 + ' ';
            if (0x19 < (byte)(cVar26 + 0xbfU)) {
              cVar23 = cVar26;
            }
            if (cVar23 != 'i') goto LAB_1000f3a9;
            cVar23 = pcVar6[-6];
            pcVar24 = str_10012f9a + 2;
            if (cVar23 != '\0') {
              cVar25 = cVar23 + ' ';
              if (0x19 < (byte)(cVar23 + 0xbfU)) {
                cVar25 = cVar23;
              }
              if (cVar25 != 'r') goto LAB_1000f3a9;
              cVar23 = pcVar6[-5];
              pcVar24 = str_10012f9a + 3;
              if (cVar23 != '\0') {
                cVar25 = cVar23 + ' ';
                if (0x19 < (byte)(cVar23 + 0xbfU)) {
                  cVar25 = cVar23;
                }
                if (cVar25 != 'e') goto LAB_1000f3a9;
                cVar23 = pcVar6[-4];
                pcVar24 = str_10012f9a + 4;
                if (cVar23 != '\0') {
                  cVar25 = cVar23 + ' ';
                  if (0x19 < (byte)(cVar23 + 0xbfU)) {
                    cVar25 = cVar23;
                  }
                  if (cVar25 != 'w') goto LAB_1000f3a9;
                  cVar23 = pcVar6[-3];
                  pcVar24 = str_10012f9a + 5;
                  if (cVar23 != '\0') {
                    cVar25 = cVar23 + ' ';
                    if (0x19 < (byte)(cVar23 + 0xbfU)) {
                      cVar25 = cVar23;
                    }
                    if (cVar25 != 'i') goto LAB_1000f3a9;
                    cVar23 = pcVar6[-2];
                    pcVar24 = str_10012f9a + 6;
                    if (cVar23 != '\0') {
                      cVar25 = cVar23 + ' ';
                      if (0x19 < (byte)(cVar23 + 0xbfU)) {
                        cVar25 = cVar23;
                      }
                      if (cVar25 != 'r') goto LAB_1000f3a9;
                      cVar23 = pcVar6[-1];
                      pcVar24 = str_10012f9a + 7;
                      if (cVar23 != '\0') {
                        cVar25 = cVar23 + ' ';
                        if (0x19 < (byte)(cVar23 + 0xbfU)) {
                          cVar25 = cVar23;
                        }
                        if (cVar25 != 'e') goto LAB_1000f3a9;
                        pcVar24 = str_10012f9a + 8;
                        if (*pcVar6 != '\0') goto LAB_1000f364;
                      }
                    }
                  }
                }
              }
            }
          }
          if (*pcVar24 == '\0') goto LAB_1000f364;
        }
LAB_1000f3a9:
        pcVar6 = pcVar6 + 1;
      } while (cVar26 != '\0');
      pcVar6 = pcVar11 + 5;
      cVar26 = cVar19;
      do {
        cVar23 = cVar26 + ' ';
        if (0x19 < (byte)(cVar26 + 0xbfU)) {
          cVar23 = cVar26;
        }
        cVar26 = pcVar6[-4];
        if (cVar23 == 'a') {
          pcVar24 = &DAT_10013361;
          if (cVar26 != '\0') {
            cVar23 = cVar26 + ' ';
            if (0x19 < (byte)(cVar26 + 0xbfU)) {
              cVar23 = cVar26;
            }
            if (cVar23 != 'u') goto LAB_1000f57f;
            cVar23 = pcVar6[-3];
            pcVar24 = &DAT_10013362;
            if (cVar23 != '\0') {
              cVar25 = cVar23 + ' ';
              if (0x19 < (byte)(cVar23 + 0xbfU)) {
                cVar25 = cVar23;
              }
              if (cVar25 != 'd') goto LAB_1000f57f;
              cVar23 = pcVar6[-2];
              pcVar24 = &DAT_10013363;
              if (cVar23 != '\0') {
                cVar25 = cVar23 + ' ';
                if (0x19 < (byte)(cVar23 + 0xbfU)) {
                  cVar25 = cVar23;
                }
                if (cVar25 != 'i') goto LAB_1000f57f;
                cVar23 = pcVar6[-1];
                pcVar24 = &DAT_10013364;
                if (cVar23 != '\0') {
                  cVar25 = cVar23 + ' ';
                  if (0x19 < (byte)(cVar23 + 0xbfU)) {
                    cVar25 = cVar23;
                  }
                  if (cVar25 != 'o') goto LAB_1000f57f;
                  pcVar24 = &DAT_10013365;
                  if (*pcVar6 != '\0') goto LAB_1000f364;
                }
              }
            }
          }
          if (*pcVar24 == '\0') goto LAB_1000f364;
        }
LAB_1000f57f:
        pcVar6 = pcVar6 + 1;
      } while (cVar26 != '\0');
      pcVar6 = pcVar11 + 8;
      do {
        cVar26 = cVar19 + ' ';
        if (0x19 < (byte)(cVar19 + 0xbfU)) {
          cVar26 = cVar19;
        }
        cVar19 = pcVar6[-7];
        if (cVar26 == 'g') {
          pcVar24 = str_1001334f + 1;
          if (cVar19 != '\0') {
            cVar26 = cVar19 + ' ';
            if (0x19 < (byte)(cVar19 + 0xbfU)) {
              cVar26 = cVar19;
            }
            if (cVar26 != 'r') goto LAB_1000f6bb;
            cVar26 = pcVar6[-6];
            pcVar24 = str_1001334f + 2;
            if (cVar26 != '\0') {
              cVar23 = cVar26 + ' ';
              if (0x19 < (byte)(cVar26 + 0xbfU)) {
                cVar23 = cVar26;
              }
              if (cVar23 != 'a') goto LAB_1000f6bb;
              cVar26 = pcVar6[-5];
              pcVar24 = str_1001334f + 3;
              if (cVar26 != '\0') {
                cVar23 = cVar26 + ' ';
                if (0x19 < (byte)(cVar26 + 0xbfU)) {
                  cVar23 = cVar26;
                }
                if (cVar23 != 'p') goto LAB_1000f6bb;
                cVar26 = pcVar6[-4];
                pcVar24 = str_1001334f + 4;
                if (cVar26 != '\0') {
                  cVar23 = cVar26 + ' ';
                  if (0x19 < (byte)(cVar26 + 0xbfU)) {
                    cVar23 = cVar26;
                  }
                  if (cVar23 != 'h') goto LAB_1000f6bb;
                  cVar26 = pcVar6[-3];
                  pcVar24 = str_1001334f + 5;
                  if (cVar26 != '\0') {
                    cVar23 = cVar26 + ' ';
                    if (0x19 < (byte)(cVar26 + 0xbfU)) {
                      cVar23 = cVar26;
                    }
                    if (cVar23 != 'i') goto LAB_1000f6bb;
                    cVar26 = pcVar6[-2];
                    pcVar24 = str_1001334f + 6;
                    if (cVar26 != '\0') {
                      cVar23 = cVar26 + ' ';
                      if (0x19 < (byte)(cVar26 + 0xbfU)) {
                        cVar23 = cVar26;
                      }
                      if (cVar23 != 'c') goto LAB_1000f6bb;
                      cVar26 = pcVar6[-1];
                      pcVar24 = str_1001334f + 7;
                      if (cVar26 != '\0') {
                        cVar23 = cVar26 + ' ';
                        if (0x19 < (byte)(cVar26 + 0xbfU)) {
                          cVar23 = cVar26;
                        }
                        if (cVar23 != 's') goto LAB_1000f6bb;
                        pcVar24 = str_1001334f + 8;
                        if (*pcVar6 != '\0') goto LAB_1000f364;
                      }
                    }
                  }
                }
              }
            }
          }
          if (*pcVar24 == '\0') goto LAB_1000f364;
        }
LAB_1000f6bb:
        pcVar6 = pcVar6 + 1;
      } while (cVar19 != '\0');
    }
LAB_1000f866:
    if (local_38[8] == 6) {
      if (local_38[9] != 0) {
        uVar27 = uVar27 | 2;
      }
    }
    uVar22 = local_5b8 | uVar27;
    local_b8 = uVar22;
    if (((*local_40 != 0x54584b57) || ((uint)local_40[2] < 100)) ||
       (((code *)(ulong)(uint)local_40[0x18] == (code *)0x0 ||
        (iVar4 = (*(code *)(ulong)(uint)local_40[0x18])
                           (*local_38,local_38[1],local_38[2],4,2,uVar22), iVar4 == 0)))) {
      uVar17 = 0;
      do {
        uVar18 = uVar17;
        uVar17 = uVar18 + 1;
      } while (local_5b4[uVar18 + 0x27c] != '\0');
      if (uVar18 + 1 < 0x280) {
        cVar19 = ' ';
        pcVar6 = str_100134ac;
        do {
          pcVar6 = pcVar6 + 1;
          local_5b4[uVar18 + 0x27c] = cVar19;
          uVar18 = uVar18 + 1;
          cVar19 = *pcVar6;
          if (cVar19 == '\0') break;
        } while (uVar18 < 0x27f);
      }
      goto LAB_1000cd5c;
    }
    if ((*local_40 == 0x54584b57) && (0x5f < (uint)local_40[2])) {
      if ((code *)(ulong)(uint)local_40[0x17] != (code *)0x0) {
        (*(code *)(ulong)(uint)local_40[0x17])(*local_38,local_38[1],local_38[2],4,2,&local_b8);
        uVar22 = local_b8;
      }
    }
    recovered_10011f20((long)&local_338,str_100134c5,local_5b8);
    recovered_10011f20((long)&local_338,str_100134d6,uVar22);
    recovered_10011f20((long)&local_338,str_100134e6,uVar27);
    bVar28 = (uVar27 & ~uVar22) == 0;
    local_b8 = 0;
    local_4c = 0;
    local_50 = 0;
    pbVar13 = local_38;
    piVar16 = local_40;
  }
  local_4c = 0;
  local_50 = 0;
  local_b8 = 0;
  local_54 = 0;
  bVar8 = pbVar13[8];
  if ((bVar8 == 1) && (pbVar13[9] == 6)) {
    uVar22 = *(uint *)(pbVar13 + 0x28);
    if ((uVar22 & 1) == 0 && uVar22 != 0) {
      local_5b8 = 0;
      if ((uVar22 & 0xfffffff0) == 0 || piVar16 == (int *)0x0) goto LAB_1000ce44;
      if (*piVar16 != 0x54584b57) goto LAB_1000ce44;
      if ((uint)piVar16[2] < 0x68) goto LAB_1000ce44;
      if ((code *)(ulong)(uint)piVar16[0x19] == (code *)0x0) goto LAB_1000ce44;
      iVar4 = (*(code *)(ulong)(uint)piVar16[0x19])(uVar22 & 0xfffffff0,0,0x1000);
      pbVar13 = local_38;
      piVar16 = local_40;
      if (iVar4 == 0) goto LAB_1000ce44;
      uVar17 = 0;
      do {
        uVar18 = uVar17;
        uVar17 = uVar18 + 1;
      } while (local_5b4[uVar18 + 0x27c] != '\0');
      if (uVar17 < 0x280) {
        local_5b4[uVar18 + 0x27c] = 0x20;
        uVar18 = uVar17;
      }
      local_5b4[uVar18 + 0x27c] = 0;
      uVar17 = 0xffffffffffffffff;
      do {
        uVar18 = uVar17;
        uVar17 = uVar18 + 1;
      } while (local_336[uVar18 - 1] != '\0');
      if (uVar18 + 2 < 0x280) {
        local_336[uVar18 - 1] = 0x61;
        bVar29 = uVar17 != 0x27e;
        uVar17 = uVar18 + 2;
        if (bVar29) {
          uVar17 = uVar18 + 3;
          local_336[uVar18] = 0x68;
          if (uVar17 < 0x27f) {
            uVar17 = uVar18 + 4;
            local_336[uVar18 + 1] = 99;
            if (uVar17 < 0x27f) {
              uVar17 = uVar18 + 5;
              local_336[uVar18 + 2] = 0x69;
              if (uVar17 < 0x27f) {
                uVar17 = uVar18 + 6;
                *(undefined1 *)((long)&local_338 + uVar18 + 5) = 0x4d;
                if (uVar17 < 0x27f) {
                  uVar17 = uVar18 + 7;
                  local_336[uVar18 + 4] = 0x6d;
                  if (uVar17 < 0x27f) {
                    uVar17 = uVar18 + 8;
                    local_336[uVar18 + 5] = 0x69;
                    if (uVar17 < 0x27f) {
                      local_336[uVar18 + 6] = 0x6f;
                      uVar17 = uVar18 + 9;
                    }
                  }
                }
              }
            }
          }
        }
      }
      local_5b4[uVar17 + 0x27c] = 0;
      uVar17 = 0;
      do {
        uVar18 = uVar17;
        uVar17 = uVar18 + 1;
      } while (local_5b4[uVar18 + 0x27c] != '\0');
      if (uVar17 < 0x280) {
        local_5b4[uVar18 + 0x27c] = 0x3d;
        uVar18 = uVar17;
      }
      local_5b4[uVar18 + 0x27c] = 0;
      iVar4 = 8;
      do {
        uVar22 = local_5b8 >> ((char)iVar4 * '\x04' - 4U & 0x1f) & 0xf;
        cVar19 = (char)uVar22;
        cVar26 = cVar19 + '7';
        if (uVar22 < 10) {
          cVar26 = cVar19 + '0';
        }
        uVar17 = 0;
        do {
          uVar18 = uVar17;
          uVar17 = uVar18 + 1;
        } while (local_5b4[uVar18 + 0x27c] != '\0');
        if (uVar18 + 1 < 0x280) {
          local_5b4[uVar18 + 0x27c] = cVar26;
          local_336[uVar18 - 1] = 0;
        }
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      if (local_5b8 != 0) {
        if (*piVar16 == 0x54584b57) {
          if (0x6b < (uint)piVar16[2]) {
            if ((code *)(ulong)(uint)piVar16[0x1a] != (code *)0x0) {
              (*(code *)(ulong)(uint)piVar16[0x1a])(local_5b8,4,&local_b8);
              pbVar13 = local_38;
              piVar16 = local_40;
              if ((((local_5b8 != 0) && (*local_40 == 0x54584b57)) && (0x6b < (uint)local_40[2])) &&
                 ((code *)(ulong)(uint)local_40[0x1a] != (code *)0x0)) {
                (*(code *)(ulong)(uint)local_40[0x1a])(local_5b8 + 4,4,&local_4c);
                pbVar13 = local_38;
                piVar16 = local_40;
                if (((local_5b8 != 0) && (*local_40 == 0x54584b57)) &&
                   ((0x6b < (uint)local_40[2] &&
                    ((code *)(ulong)(uint)local_40[0x1a] != (code *)0x0)))) {
                  (*(code *)(ulong)(uint)local_40[0x1a])(local_5b8 + 0xc,4,&local_50);
                  pbVar13 = local_38;
                  piVar16 = local_40;
                  if (((local_5b8 != 0) && (*local_40 == 0x54584b57)) &&
                     ((0x6b < (uint)local_40[2] &&
                      ((code *)(ulong)(uint)local_40[0x1a] != (code *)0x0)))) {
                    (*(code *)(ulong)(uint)local_40[0x1a])(local_5b8 + 0x10,4,&local_54);
                    pbVar13 = local_38;
                    piVar16 = local_40;
                  }
                }
              }
            }
          }
        }
      }
      if (-1 < (int)local_4c) {
        if (local_5b8 != 0) {
          if (*piVar16 == 0x54584b57) {
            iVar4 = local_5b8 + 4;
            uVar22 = piVar16[2];
            if (uVar22 < 0x70) {
joined_r0x10010a61:
              if (uVar22 < 0x6c) goto LAB_10010adb;
            }
            else {
              if ((code *)(ulong)(uint)piVar16[0x1b] != (code *)0x0) {
                (*(code *)(ulong)(uint)piVar16[0x1b])(iVar4,4,local_4c | 0x80000000);
                pbVar13 = local_38;
                piVar16 = local_40;
                if ((local_5b8 == 0) || (*local_40 != 0x54584b57)) goto LAB_10010adb;
                uVar22 = local_40[2];
                iVar4 = local_5b8 + 4;
                goto joined_r0x10010a61;
              }
              pbVar13 = local_38;
              piVar16 = local_40;
            }
            if ((code *)(ulong)(uint)piVar16[0x1a] != (code *)0x0) {
              (*(code *)(ulong)(uint)piVar16[0x1a])(iVar4,4,&local_4c);
              pbVar13 = local_38;
              piVar16 = local_40;
            }
          }
        }
      }
LAB_10010adb:
      uVar17 = 0;
      do {
        uVar18 = uVar17;
        uVar17 = uVar18 + 1;
      } while (local_5b4[uVar18 + 0x27c] != '\0');
      if (uVar17 < 0x280) {
        local_5b4[uVar18 + 0x27c] = 0x20;
        uVar18 = uVar17;
      }
      local_5b4[uVar18 + 0x27c] = 0;
      uVar17 = 0xffffffffffffffff;
      do {
        uVar18 = uVar17;
        uVar17 = uVar18 + 1;
      } while (local_336[uVar18 - 1] != '\0');
      if (uVar18 + 2 < 0x280) {
        local_336[uVar18 - 1] = 0x61;
        bVar29 = uVar17 != 0x27e;
        uVar17 = uVar18 + 2;
        if (bVar29) {
          uVar17 = uVar18 + 3;
          local_336[uVar18] = 0x68;
          if (uVar17 < 0x27f) {
            uVar17 = uVar18 + 4;
            local_336[uVar18 + 1] = 99;
            if (uVar17 < 0x27f) {
              uVar17 = uVar18 + 5;
              *(undefined1 *)((long)&local_338 + uVar18 + 4) = 0x69;
              if (uVar17 < 0x27f) {
                uVar17 = uVar18 + 6;
                local_336[uVar18 + 3] = 0x43;
                if (uVar17 < 0x27f) {
                  uVar17 = uVar18 + 7;
                  local_336[uVar18 + 4] = 0x61;
                  if (uVar17 < 0x27f) {
                    local_336[uVar18 + 5] = 0x70;
                    uVar17 = uVar18 + 8;
                  }
                }
              }
            }
          }
        }
      }
      local_5b4[uVar17 + 0x27c] = 0;
      uVar17 = 0;
      do {
        uVar18 = uVar17;
        uVar17 = uVar18 + 1;
      } while (local_5b4[uVar18 + 0x27c] != '\0');
      if (uVar17 < 0x280) {
        local_5b4[uVar18 + 0x27c] = 0x3d;
        uVar18 = uVar17;
      }
      local_5b4[uVar18 + 0x27c] = 0;
      iVar4 = 8;
      do {
        uVar22 = local_b8 >> ((char)iVar4 * '\x04' - 4U & 0x1f) & 0xf;
        cVar19 = (char)uVar22;
        cVar26 = cVar19 + '7';
        if (uVar22 < 10) {
          cVar26 = cVar19 + '0';
        }
        uVar17 = 0;
        do {
          uVar18 = uVar17;
          uVar17 = uVar18 + 1;
        } while (local_5b4[uVar18 + 0x27c] != '\0');
        if (uVar18 + 1 < 0x280) {
          local_5b4[uVar18 + 0x27c] = cVar26;
          local_336[uVar18 - 1] = 0;
        }
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      uVar17 = 0;
      do {
        uVar18 = uVar17;
        uVar17 = uVar18 + 1;
      } while (local_5b4[uVar18 + 0x27c] != '\0');
      if (uVar17 < 0x280) {
        local_5b4[uVar18 + 0x27c] = 0x20;
        uVar18 = uVar17;
      }
      local_5b4[uVar18 + 0x27c] = 0;
      uVar17 = 0xffffffffffffffff;
      do {
        uVar18 = uVar17;
        uVar17 = uVar18 + 1;
      } while (local_336[uVar18 - 1] != '\0');
      if (uVar18 + 2 < 0x280) {
        local_336[uVar18 - 1] = 0x61;
        bVar29 = uVar17 != 0x27e;
        uVar17 = uVar18 + 2;
        if (bVar29) {
          uVar17 = uVar18 + 3;
          local_336[uVar18] = 0x68;
          if (uVar17 < 0x27f) {
            uVar17 = uVar18 + 4;
            local_336[uVar18 + 1] = 99;
            if (uVar17 < 0x27f) {
              uVar17 = uVar18 + 5;
              *(undefined1 *)((long)&local_338 + uVar18 + 4) = 0x69;
              if (uVar17 < 0x27f) {
                uVar17 = uVar18 + 6;
                local_336[uVar18 + 3] = 0x47;
                if (uVar17 < 0x27f) {
                  uVar17 = uVar18 + 7;
                  local_336[uVar18 + 4] = 0x68;
                  if (uVar17 < 0x27f) {
                    local_336[uVar18 + 5] = 99;
                    uVar17 = uVar18 + 8;
                  }
                }
              }
            }
          }
        }
      }
      local_5b4[uVar17 + 0x27c] = 0;
      uVar17 = 0;
      do {
        uVar18 = uVar17;
        uVar17 = uVar18 + 1;
      } while (local_5b4[uVar18 + 0x27c] != '\0');
      if (uVar17 < 0x280) {
        local_5b4[uVar18 + 0x27c] = 0x3d;
        uVar18 = uVar17;
      }
      local_5b4[uVar18 + 0x27c] = 0;
      iVar4 = 8;
      do {
        uVar22 = local_4c >> ((char)iVar4 * '\x04' - 4U & 0x1f) & 0xf;
        cVar19 = (char)uVar22;
        cVar26 = cVar19 + '7';
        if (uVar22 < 10) {
          cVar26 = cVar19 + '0';
        }
        uVar17 = 0;
        do {
          uVar18 = uVar17;
          uVar17 = uVar18 + 1;
        } while (local_5b4[uVar18 + 0x27c] != '\0');
        if (uVar18 + 1 < 0x280) {
          local_5b4[uVar18 + 0x27c] = cVar26;
          local_336[uVar18 - 1] = 0;
        }
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      uVar17 = 0;
      do {
        uVar18 = uVar17;
        uVar17 = uVar18 + 1;
      } while (local_5b4[uVar18 + 0x27c] != '\0');
      if (uVar17 < 0x280) {
        local_5b4[uVar18 + 0x27c] = 0x20;
        uVar18 = uVar17;
      }
      local_5b4[uVar18 + 0x27c] = 0;
      uVar17 = 0;
      do {
        uVar18 = uVar17;
        uVar17 = uVar18 + 1;
      } while (local_5b4[uVar18 + 0x27c] != '\0');
      if (uVar18 + 1 < 0x280) {
        cVar19 = 'a';
        pcVar6 = str_1001350b;
        do {
          pcVar6 = pcVar6 + 1;
          local_5b4[uVar18 + 0x27c] = cVar19;
          uVar18 = uVar18 + 1;
          cVar19 = *pcVar6;
          if (cVar19 == '\0') break;
        } while (uVar18 < 0x27f);
      }
      local_5b4[uVar18 + 0x27c] = 0;
      uVar17 = 0;
      do {
        uVar18 = uVar17;
        uVar17 = uVar18 + 1;
      } while (local_5b4[uVar18 + 0x27c] != '\0');
      if (uVar17 < 0x280) {
        local_5b4[uVar18 + 0x27c] = 0x3d;
        uVar18 = uVar17;
      }
      local_5b4[uVar18 + 0x27c] = 0;
      iVar4 = 8;
      do {
        uVar22 = local_50 >> ((char)iVar4 * '\x04' - 4U & 0x1f) & 0xf;
        cVar19 = (char)uVar22;
        cVar26 = cVar19 + '7';
        if (uVar22 < 10) {
          cVar26 = cVar19 + '0';
        }
        uVar17 = 0;
        do {
          uVar18 = uVar17;
          uVar17 = uVar18 + 1;
        } while (local_5b4[uVar18 + 0x27c] != '\0');
        if (uVar18 + 1 < 0x280) {
          local_5b4[uVar18 + 0x27c] = cVar26;
          local_336[uVar18 - 1] = 0;
        }
        uVar22 = local_54;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      uVar17 = 0;
      do {
        uVar18 = uVar17;
        uVar17 = uVar18 + 1;
      } while (local_5b4[uVar18 + 0x27c] != '\0');
      if (uVar17 < 0x280) {
        local_5b4[uVar18 + 0x27c] = 0x20;
        uVar18 = uVar17;
      }
      local_5b4[uVar18 + 0x27c] = 0;
      uVar17 = 0;
      do {
        uVar18 = uVar17;
        uVar17 = uVar18 + 1;
      } while (local_5b4[uVar18 + 0x27c] != '\0');
      if (uVar18 + 1 < 0x280) {
        cVar19 = 'a';
        pcVar6 = str_10013515;
        do {
          pcVar6 = pcVar6 + 1;
          local_5b4[uVar18 + 0x27c] = cVar19;
          uVar18 = uVar18 + 1;
          cVar19 = *pcVar6;
          if (cVar19 == '\0') break;
        } while (uVar18 < 0x27f);
      }
      local_5b4[uVar18 + 0x27c] = 0;
      uVar17 = 0;
      do {
        uVar18 = uVar17;
        uVar17 = uVar18 + 1;
      } while (local_5b4[uVar18 + 0x27c] != '\0');
      if (uVar17 < 0x280) {
        local_5b4[uVar18 + 0x27c] = 0x3d;
        uVar18 = uVar17;
      }
      local_5b4[uVar18 + 0x27c] = 0;
      iVar4 = 8;
      do {
        uVar27 = uVar22 >> ((char)iVar4 * '\x04' - 4U & 0x1f) & 0xf;
        cVar19 = (char)uVar27;
        cVar26 = cVar19 + '7';
        if (uVar27 < 10) {
          cVar26 = cVar19 + '0';
        }
        uVar17 = 0;
        do {
          uVar18 = uVar17;
          uVar17 = uVar18 + 1;
        } while (local_5b4[uVar18 + 0x27c] != '\0');
        if (uVar18 + 1 < 0x280) {
          local_5b4[uVar18 + 0x27c] = cVar26;
          local_336[uVar18 - 1] = 0;
        }
        bVar8 = 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    else {
LAB_1000ce44:
      uVar17 = 0;
      do {
        uVar18 = uVar17;
        uVar17 = uVar18 + 1;
      } while (local_5b4[uVar18 + 0x27c] != '\0');
      if (uVar18 + 1 < 0x280) {
        cVar19 = ' ';
        pcVar6 = str_100134f5;
        do {
          pcVar6 = pcVar6 + 1;
          local_5b4[uVar18 + 0x27c] = cVar19;
          uVar18 = uVar18 + 1;
          cVar19 = *pcVar6;
          if (cVar19 == '\0') break;
        } while (uVar18 < 0x27f);
      }
      local_5b4[uVar18 + 0x27c] = 0;
      bVar8 = 0;
    }
    bVar28 = (bool)(bVar28 | bVar8);
    local_b8 = 0;
    local_4c = 0;
    bVar8 = pbVar13[8];
  }
  else {
    local_b8 = 0;
    local_4c = 0;
  }
  local_4c = 0;
  local_b8 = 0;
  local_50 = 0;
  if ((bVar8 == 4) && (pbVar13[9] == 3)) {
    uVar22 = *(uint *)(pbVar13 + 0x14);
    if ((uVar22 & 1) == 0 && uVar22 != 0) {
      local_5b8 = 0;
      if ((uVar22 & 0xfffffff0) == 0 || piVar16 == (int *)0x0) goto LAB_1000cf85;
      if (*piVar16 != 0x54584b57) goto LAB_1000cf85;
      if ((uint)piVar16[2] < 0x68) goto LAB_1000cf85;
      if ((code *)(ulong)(uint)piVar16[0x19] == (code *)0x0) goto LAB_1000cf85;
      iVar4 = (*(code *)(ulong)(uint)piVar16[0x19])(uVar22 & 0xfffffff0,0,0x1000);
      pbVar13 = local_38;
      piVar16 = local_40;
      if (iVar4 == 0) goto LAB_1000cf85;
      uVar17 = 0;
      do {
        uVar18 = uVar17;
        uVar17 = uVar18 + 1;
      } while (local_5b4[uVar18 + 0x27c] != '\0');
      if (uVar17 < 0x280) {
        local_5b4[uVar18 + 0x27c] = 0x20;
        uVar18 = uVar17;
      }
      local_5b4[uVar18 + 0x27c] = 0;
      uVar17 = 0xffffffffffffffff;
      do {
        uVar18 = uVar17;
        uVar17 = uVar18 + 1;
      } while (local_336[uVar18 - 1] != '\0');
      if (uVar18 + 2 < 0x280) {
        local_336[uVar18 - 1] = 0x68;
        bVar29 = uVar17 != 0x27e;
        uVar17 = uVar18 + 2;
        if (bVar29) {
          uVar17 = uVar18 + 3;
          local_336[uVar18] = 100;
          if (uVar17 < 0x27f) {
            uVar17 = uVar18 + 4;
            local_336[uVar18 + 1] = 0x61;
            if (uVar17 < 0x27f) {
              uVar17 = uVar18 + 5;
              *(undefined1 *)((long)&local_338 + uVar18 + 4) = 0x4d;
              if (uVar17 < 0x27f) {
                uVar17 = uVar18 + 6;
                local_336[uVar18 + 3] = 0x6d;
                if (uVar17 < 0x27f) {
                  uVar17 = uVar18 + 7;
                  local_336[uVar18 + 4] = 0x69;
                  if (uVar17 < 0x27f) {
                    local_336[uVar18 + 5] = 0x6f;
                    uVar17 = uVar18 + 8;
                  }
                }
              }
            }
          }
        }
      }
      local_5b4[uVar17 + 0x27c] = 0;
      uVar17 = 0;
      do {
        uVar18 = uVar17;
        uVar17 = uVar18 + 1;
      } while (local_5b4[uVar18 + 0x27c] != '\0');
      if (uVar17 < 0x280) {
        local_5b4[uVar18 + 0x27c] = 0x3d;
        uVar18 = uVar17;
      }
      local_5b4[uVar18 + 0x27c] = 0;
      iVar4 = 8;
      do {
        uVar22 = local_5b8 >> ((char)iVar4 * '\x04' - 4U & 0x1f) & 0xf;
        cVar19 = (char)uVar22;
        cVar26 = cVar19 + '7';
        if (uVar22 < 10) {
          cVar26 = cVar19 + '0';
        }
        uVar17 = 0;
        do {
          uVar18 = uVar17;
          uVar17 = uVar18 + 1;
        } while (local_5b4[uVar18 + 0x27c] != '\0');
        if (uVar18 + 1 < 0x280) {
          local_5b4[uVar18 + 0x27c] = cVar26;
          local_336[uVar18 - 1] = 0;
        }
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      uVar22 = 0;
      if (local_5b8 != 0) {
        if (((*piVar16 == 0x54584b57) && (0x6b < (uint)piVar16[2])) &&
           ((code *)(ulong)(uint)piVar16[0x1a] != (code *)0x0)) {
          (*(code *)(ulong)(uint)piVar16[0x1a])(local_5b8,4,&local_b8);
          pbVar13 = local_38;
          piVar16 = local_40;
          if (local_5b8 != 0) {
            if (((*local_40 == 0x54584b57) && (0x6b < (uint)local_40[2])) &&
               ((code *)(ulong)(uint)local_40[0x1a] != (code *)0x0)) {
              (*(code *)(ulong)(uint)local_40[0x1a])(local_5b8 + 8,4,&local_4c);
            }
            pbVar13 = local_38;
            piVar16 = local_40;
            uVar22 = local_5b8;
          }
        }
        else {
          uVar22 = local_5b8;
        }
      }
      if ((local_4c & 1) == 0) {
        uVar27 = 0;
        if (uVar22 == 0) goto LAB_1000feb4;
        if (*piVar16 == 0x54584b57) {
          iVar4 = uVar22 + 8;
          uVar3 = piVar16[2];
          if (uVar3 < 0x70) {
joined_r0x10010aab:
            if (uVar3 < 0x6c) goto LAB_1000fee4;
          }
          else {
            if ((code *)(ulong)(uint)piVar16[0x1b] != (code *)0x0) {
              (*(code *)(ulong)(uint)piVar16[0x1b])(iVar4,4,local_4c | 1);
              pbVar13 = local_38;
              piVar16 = local_40;
              if (local_5b8 == 0) goto LAB_1000feb4;
              if (*local_40 != 0x54584b57) goto LAB_1000fee4;
              uVar3 = local_40[2];
              iVar4 = local_5b8 + 8;
              uVar22 = local_5b8;
              goto joined_r0x10010aab;
            }
            pbVar13 = local_38;
            piVar16 = local_40;
          }
          uVar27 = uVar22;
          if ((code *)(ulong)(uint)piVar16[0x1a] != (code *)0x0) {
            (*(code *)(ulong)(uint)piVar16[0x1a])(iVar4,4,&local_4c);
            pbVar13 = local_38;
            piVar16 = local_40;
            uVar27 = local_5b8;
          }
          goto LAB_1000feb4;
        }
      }
      else {
        uVar27 = uVar22;
LAB_1000feb4:
        if (*piVar16 == 0x54584b57) {
          if (0x6b < (uint)piVar16[2]) {
            if ((code *)(ulong)(uint)piVar16[0x1a] != (code *)0x0) {
              (*(code *)(ulong)(uint)piVar16[0x1a])(uVar27 + 0xe,2,&local_50);
              pbVar13 = local_38;
              piVar16 = local_40;
            }
          }
        }
      }
LAB_1000fee4:
      uVar17 = 0;
      do {
        uVar18 = uVar17;
        uVar17 = uVar18 + 1;
      } while (local_5b4[uVar18 + 0x27c] != '\0');
      if (uVar17 < 0x280) {
        local_5b4[uVar18 + 0x27c] = 0x20;
        uVar18 = uVar17;
      }
      local_5b4[uVar18 + 0x27c] = 0;
      uVar17 = 0xffffffffffffffff;
      do {
        uVar18 = uVar17;
        uVar17 = uVar18 + 1;
      } while (local_336[uVar18 - 1] != '\0');
      if (uVar18 + 2 < 0x280) {
        local_336[uVar18 - 1] = 0x68;
        bVar29 = uVar17 != 0x27e;
        uVar17 = uVar18 + 2;
        if (bVar29) {
          uVar17 = uVar18 + 3;
          local_336[uVar18] = 100;
          if (uVar17 < 0x27f) {
            uVar17 = uVar18 + 4;
            local_336[uVar18 + 1] = 0x61;
            if (uVar17 < 0x27f) {
              uVar17 = uVar18 + 5;
              *(undefined1 *)((long)&local_338 + uVar18 + 4) = 0x47;
              if (uVar17 < 0x27f) {
                uVar17 = uVar18 + 6;
                local_336[uVar18 + 3] = 99;
                if (uVar17 < 0x27f) {
                  uVar17 = uVar18 + 7;
                  local_336[uVar18 + 4] = 0x61;
                  if (uVar17 < 0x27f) {
                    local_336[uVar18 + 5] = 0x70;
                    uVar17 = uVar18 + 8;
                  }
                }
              }
            }
          }
        }
      }
      local_5b4[uVar17 + 0x27c] = 0;
      uVar17 = 0;
      do {
        uVar18 = uVar17;
        uVar17 = uVar18 + 1;
      } while (local_5b4[uVar18 + 0x27c] != '\0');
      if (uVar17 < 0x280) {
        local_5b4[uVar18 + 0x27c] = 0x3d;
        uVar18 = uVar17;
      }
      local_5b4[uVar18 + 0x27c] = 0;
      iVar4 = 8;
      do {
        uVar22 = local_b8 >> ((char)iVar4 * '\x04' - 4U & 0x1f) & 0xf;
        cVar19 = (char)uVar22;
        cVar26 = cVar19 + '7';
        if (uVar22 < 10) {
          cVar26 = cVar19 + '0';
        }
        uVar17 = 0;
        do {
          uVar18 = uVar17;
          uVar17 = uVar18 + 1;
        } while (local_5b4[uVar18 + 0x27c] != '\0');
        if (uVar18 + 1 < 0x280) {
          local_5b4[uVar18 + 0x27c] = cVar26;
          local_336[uVar18 - 1] = 0;
        }
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      uVar17 = 0;
      do {
        uVar18 = uVar17;
        uVar17 = uVar18 + 1;
      } while (local_5b4[uVar18 + 0x27c] != '\0');
      if (uVar17 < 0x280) {
        local_5b4[uVar18 + 0x27c] = 0x20;
        uVar18 = uVar17;
      }
      local_5b4[uVar18 + 0x27c] = 0;
      uVar17 = 0xffffffffffffffff;
      do {
        uVar18 = uVar17;
        uVar17 = uVar18 + 1;
      } while (local_336[uVar18 - 1] != '\0');
      if (uVar18 + 2 < 0x280) {
        local_336[uVar18 - 1] = 0x68;
        bVar29 = uVar17 != 0x27e;
        uVar17 = uVar18 + 2;
        if (bVar29) {
          uVar17 = uVar18 + 3;
          local_336[uVar18] = 100;
          if (uVar17 < 0x27f) {
            uVar17 = uVar18 + 4;
            local_336[uVar18 + 1] = 0x61;
            if (uVar17 < 0x27f) {
              uVar17 = uVar18 + 5;
              *(undefined1 *)((long)&local_338 + uVar18 + 4) = 0x47;
              if (uVar17 < 0x27f) {
                uVar17 = uVar18 + 6;
                local_336[uVar18 + 3] = 99;
                if (uVar17 < 0x27f) {
                  uVar17 = uVar18 + 7;
                  local_336[uVar18 + 4] = 0x74;
                  if (uVar17 < 0x27f) {
                    local_336[uVar18 + 5] = 0x6c;
                    uVar17 = uVar18 + 8;
                  }
                }
              }
            }
          }
        }
      }
      local_5b4[uVar17 + 0x27c] = 0;
      uVar17 = 0;
      do {
        uVar18 = uVar17;
        uVar17 = uVar18 + 1;
      } while (local_5b4[uVar18 + 0x27c] != '\0');
      if (uVar17 < 0x280) {
        local_5b4[uVar18 + 0x27c] = 0x3d;
        uVar18 = uVar17;
      }
      local_5b4[uVar18 + 0x27c] = 0;
      iVar4 = 8;
      do {
        uVar22 = local_4c >> ((char)iVar4 * '\x04' - 4U & 0x1f) & 0xf;
        cVar19 = (char)uVar22;
        cVar26 = cVar19 + '7';
        if (uVar22 < 10) {
          cVar26 = cVar19 + '0';
        }
        uVar17 = 0;
        do {
          uVar18 = uVar17;
          uVar17 = uVar18 + 1;
        } while (local_5b4[uVar18 + 0x27c] != '\0');
        if (uVar18 + 1 < 0x280) {
          local_5b4[uVar18 + 0x27c] = cVar26;
          local_336[uVar18 - 1] = 0;
        }
        uVar22 = local_50;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      uVar17 = 0;
      do {
        uVar18 = uVar17;
        uVar17 = uVar18 + 1;
      } while (local_5b4[uVar18 + 0x27c] != '\0');
      if (uVar17 < 0x280) {
        local_5b4[uVar18 + 0x27c] = 0x20;
        uVar18 = uVar17;
      }
      local_5b4[uVar18 + 0x27c] = 0;
      uVar17 = 0;
      do {
        uVar18 = uVar17;
        uVar17 = uVar18 + 1;
      } while (local_5b4[uVar18 + 0x27c] != '\0');
      if (uVar18 + 1 < 0x280) {
        cVar19 = 'h';
        pcVar6 = str_10013536;
        do {
          pcVar6 = pcVar6 + 1;
          local_5b4[uVar18 + 0x27c] = cVar19;
          uVar18 = uVar18 + 1;
          cVar19 = *pcVar6;
          if (cVar19 == '\0') break;
        } while (uVar18 < 0x27f);
      }
      local_5b4[uVar18 + 0x27c] = 0;
      uVar17 = 0;
      do {
        uVar18 = uVar17;
        uVar17 = uVar18 + 1;
      } while (local_5b4[uVar18 + 0x27c] != '\0');
      if (uVar17 < 0x280) {
        local_5b4[uVar18 + 0x27c] = 0x3d;
        uVar18 = uVar17;
      }
      local_5b4[uVar18 + 0x27c] = 0;
      iVar4 = 8;
      do {
        uVar27 = uVar22 >> ((char)iVar4 * '\x04' - 4U & 0x1f) & 0xf;
        cVar19 = (char)uVar27;
        cVar26 = cVar19 + '7';
        if (uVar27 < 10) {
          cVar26 = cVar19 + '0';
        }
        uVar17 = 0;
        do {
          uVar18 = uVar17;
          uVar17 = uVar18 + 1;
        } while (local_5b4[uVar18 + 0x27c] != '\0');
        if (uVar18 + 1 < 0x280) {
          local_5b4[uVar18 + 0x27c] = cVar26;
          local_336[uVar18 - 1] = 0;
        }
        bVar8 = 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    else {
LAB_1000cf85:
      uVar17 = 0;
      do {
        uVar18 = uVar17;
        uVar17 = uVar18 + 1;
      } while (local_5b4[uVar18 + 0x27c] != '\0');
      if (uVar18 + 1 < 0x280) {
        cVar19 = ' ';
        pcVar6 = str_10013521;
        do {
          pcVar6 = pcVar6 + 1;
          local_5b4[uVar18 + 0x27c] = cVar19;
          uVar18 = uVar18 + 1;
          cVar19 = *pcVar6;
          if (cVar19 == '\0') break;
        } while (uVar18 < 0x27f);
      }
      local_5b4[uVar18 + 0x27c] = 0;
      bVar8 = 0;
    }
    bVar28 = (bool)(bVar28 | bVar8);
    local_5b8 = 0;
    local_b8 = 0;
    bVar8 = pbVar13[8];
  }
  else {
    local_5b8 = 0;
    local_b8 = 0;
  }
  local_b8 = 0;
  local_5b8 = 0;
  local_4c = 0;
  bVar29 = false;
  if (bVar8 != 0xc) goto LAB_1000d559;
  if (pbVar13[9] != 3) goto LAB_1000d559;
  if (pbVar13[10] == 0) {
    local_50 = 0;
    local_54 = 0;
    uVar22 = *(uint *)(pbVar13 + 0x24);
    uVar27 = uVar22 & 0xffffffe0;
    if (((byte)uVar22 & uVar27 != 0) != 0) {
LAB_1000d316:
      if ((((((piVar16 != (int *)0x0) && (*piVar16 == 0x54584b57)) && (0x57 < (uint)piVar16[2])) &&
           (((code *)(ulong)(uint)piVar16[0x15] != (code *)0x0 &&
            ((*(code *)(ulong)(uint)piVar16[0x15])(uVar27 & 0xffff,2,&local_50),
            *local_40 == 0x54584b57)))) && (0x57 < (uint)local_40[2])) &&
         ((code *)(ulong)(uint)local_40[0x15] != (code *)0x0)) {
        (*(code *)(ulong)(uint)local_40[0x15])((short)(uVar27 | 2),2,&local_54,uVar27 | 2);
      }
      uVar17 = 0;
      do {
        uVar18 = uVar17;
        uVar17 = uVar18 + 1;
      } while (local_5b4[uVar18 + 0x27c] != '\0');
      if (uVar17 < 0x280) {
        local_5b4[uVar18 + 0x27c] = 0x20;
        uVar18 = uVar17;
      }
      local_5b4[uVar18 + 0x27c] = 0;
      uVar17 = 0xffffffffffffffff;
      do {
        uVar18 = uVar17;
        uVar17 = uVar18 + 1;
      } while (local_336[uVar18 - 1] != '\0');
      if (uVar18 + 2 < 0x280) {
        local_336[uVar18 - 1] = 0x75;
        bVar29 = uVar17 != 0x27e;
        uVar17 = uVar18 + 2;
        if (bVar29) {
          uVar17 = uVar18 + 3;
          *(undefined1 *)((long)&local_338 + uVar18 + 2) = 0x73;
          if (uVar17 < 0x27f) {
            uVar17 = uVar18 + 4;
            local_336[uVar18 + 1] = 0x62;
            if (uVar17 < 0x27f) {
              uVar17 = uVar18 + 5;
              local_336[uVar18 + 2] = 0x49;
              if (uVar17 < 0x27f) {
                local_336[uVar18 + 3] = 0x6f;
                uVar17 = uVar18 + 6;
              }
            }
          }
        }
      }
      local_5b4[uVar17 + 0x27c] = 0;
      uVar17 = 0;
      do {
        uVar18 = uVar17;
        uVar17 = uVar18 + 1;
      } while (local_5b4[uVar18 + 0x27c] != '\0');
      if (uVar17 < 0x280) {
        local_5b4[uVar18 + 0x27c] = 0x3d;
        uVar18 = uVar17;
      }
      local_5b4[uVar18 + 0x27c] = 0;
      iVar4 = 8;
      do {
        uVar22 = uVar27 >> ((char)iVar4 * '\x04' - 4U & 0x1f) & 0xf;
        cVar19 = (char)uVar22;
        cVar26 = cVar19 + '7';
        if (uVar22 < 10) {
          cVar26 = cVar19 + '0';
        }
        uVar17 = 0;
        do {
          uVar18 = uVar17;
          uVar17 = uVar18 + 1;
        } while (local_5b4[uVar18 + 0x27c] != '\0');
        if (uVar18 + 1 < 0x280) {
          local_5b4[uVar18 + 0x27c] = cVar26;
          local_336[uVar18 - 1] = 0;
        }
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      recovered_10011f20((long)&local_338,str_1001355b,local_50);
      recovered_10011f20((long)&local_338,str_10013563,local_54);
      bVar29 = true;
      pbVar13 = local_38;
      piVar16 = local_40;
      goto LAB_1000d559;
    }
    uVar27 = *(uint *)(pbVar13 + 0x14);
    if ((((uVar27 & 1) == 0) && (uVar27 = *(uint *)(pbVar13 + 0x18), (uVar27 & 1) == 0)) &&
       (uVar27 = *(uint *)(pbVar13 + 0x1c), (uVar27 & 1) == 0)) {
      uVar3 = *(uint *)(pbVar13 + 0x20);
      uVar27 = uVar3;
      if ((uVar3 & 1) == 0) {
        uVar27 = uVar22;
      }
      if ((((uVar3 | uVar22) & 1) != 0) || (uVar27 = *(uint *)(pbVar13 + 0x28), (uVar27 & 1) != 0))
      goto LAB_1000d30c;
    }
    else {
LAB_1000d30c:
      uVar27 = uVar27 & 0xfffffffc;
      if (uVar27 != 0) goto LAB_1000d316;
    }
    uVar17 = 0;
    do {
      uVar18 = uVar17;
      uVar17 = uVar18 + 1;
    } while (local_5b4[uVar18 + 0x27c] != '\0');
    if (uVar18 + 1 < 0x280) {
      cVar19 = ' ';
      pcVar6 = str_10013542;
      do {
        pcVar6 = pcVar6 + 1;
        local_5b4[uVar18 + 0x27c] = cVar19;
        uVar18 = uVar18 + 1;
        cVar19 = *pcVar6;
        if (cVar19 == '\0') break;
      } while (uVar18 < 0x27f);
    }
  }
  else {
    uVar22 = *(uint *)(pbVar13 + 0x14);
    if ((uVar22 & 1) == 0 && uVar22 != 0) {
      local_5b8 = 0;
      if ((uVar22 & 0xfffffff0) != 0 && piVar16 != (int *)0x0) {
        if (*piVar16 == 0x54584b57) {
          if (0x67 < (uint)piVar16[2]) {
            if ((code *)(ulong)(uint)piVar16[0x19] != (code *)0x0) {
              iVar4 = (*(code *)(ulong)(uint)piVar16[0x19])(uVar22 & 0xfffffff0,0,0x1000);
              pbVar13 = local_38;
              piVar16 = local_40;
              if (iVar4 != 0) {
                uVar17 = 0;
                do {
                  uVar18 = uVar17;
                  uVar17 = uVar18 + 1;
                } while (local_5b4[uVar18 + 0x27c] != '\0');
                if (uVar17 < 0x280) {
                  local_5b4[uVar18 + 0x27c] = 0x20;
                  uVar18 = uVar17;
                }
                local_5b4[uVar18 + 0x27c] = 0;
                uVar17 = 0xffffffffffffffff;
                do {
                  uVar18 = uVar17;
                  uVar17 = uVar18 + 1;
                } while (local_336[uVar18 - 1] != '\0');
                if (uVar18 + 2 < 0x280) {
                  local_336[uVar18 - 1] = 0x75;
                  bVar29 = uVar17 != 0x27e;
                  uVar17 = uVar18 + 2;
                  if (bVar29) {
                    uVar17 = uVar18 + 3;
                    local_336[uVar18] = 0x73;
                    if (uVar17 < 0x27f) {
                      uVar17 = uVar18 + 4;
                      local_336[uVar18 + 1] = 0x62;
                      if (uVar17 < 0x27f) {
                        uVar17 = uVar18 + 5;
                        *(undefined1 *)((long)&local_338 + uVar18 + 4) = 0x4d;
                        if (uVar17 < 0x27f) {
                          uVar17 = uVar18 + 6;
                          local_336[uVar18 + 3] = 0x6d;
                          if (uVar17 < 0x27f) {
                            uVar17 = uVar18 + 7;
                            local_336[uVar18 + 4] = 0x69;
                            if (uVar17 < 0x27f) {
                              local_336[uVar18 + 5] = 0x6f;
                              uVar17 = uVar18 + 8;
                            }
                          }
                        }
                      }
                    }
                  }
                }
                local_5b4[uVar17 + 0x27c] = 0;
                uVar17 = 0;
                do {
                  uVar18 = uVar17;
                  uVar17 = uVar18 + 1;
                } while (local_5b4[uVar18 + 0x27c] != '\0');
                if (uVar17 < 0x280) {
                  local_5b4[uVar18 + 0x27c] = 0x3d;
                  uVar18 = uVar17;
                }
                local_5b4[uVar18 + 0x27c] = 0;
                iVar4 = 8;
                do {
                  uVar22 = local_5b8 >> ((char)iVar4 * '\x04' - 4U & 0x1f) & 0xf;
                  cVar19 = (char)uVar22;
                  cVar26 = cVar19 + '7';
                  if (uVar22 < 10) {
                    cVar26 = cVar19 + '0';
                  }
                  uVar17 = 0;
                  do {
                    uVar18 = uVar17;
                    uVar17 = uVar18 + 1;
                  } while (local_5b4[uVar18 + 0x27c] != '\0');
                  if (uVar18 + 1 < 0x280) {
                    local_5b4[uVar18 + 0x27c] = cVar26;
                    local_336[uVar18 - 1] = 0;
                  }
                  iVar4 = iVar4 + -1;
                } while (iVar4 != 0);
                if (local_5b8 != 0) {
                  if (*piVar16 == 0x54584b57) {
                    if (0x6b < (uint)piVar16[2]) {
                      if ((code *)(ulong)(uint)piVar16[0x1a] != (code *)0x0) {
                        (*(code *)(ulong)(uint)piVar16[0x1a])(local_5b8,4,&local_b8);
                        pbVar13 = local_38;
                        piVar16 = local_40;
                        if (((local_5b8 != 0) && (*local_40 == 0x54584b57)) &&
                           ((0x6b < (uint)local_40[2] &&
                            ((code *)(ulong)(uint)local_40[0x1a] != (code *)0x0)))) {
                          (*(code *)(ulong)(uint)local_40[0x1a])(local_5b8 + 4,4,&local_4c);
                          pbVar13 = local_38;
                          piVar16 = local_40;
                        }
                      }
                    }
                  }
                }
                uVar22 = local_b8;
                uVar17 = 0;
                do {
                  uVar18 = uVar17;
                  uVar17 = uVar18 + 1;
                } while (local_5b4[uVar18 + 0x27c] != '\0');
                if (uVar17 < 0x280) {
                  local_5b4[uVar18 + 0x27c] = 0x20;
                  uVar18 = uVar17;
                }
                local_5b4[uVar18 + 0x27c] = 0;
                uVar17 = 0xffffffffffffffff;
                do {
                  uVar18 = uVar17;
                  uVar17 = uVar18 + 1;
                } while (local_336[uVar18 - 1] != '\0');
                if (uVar18 + 2 < 0x280) {
                  local_336[uVar18 - 1] = 0x75;
                  bVar29 = uVar17 != 0x27e;
                  uVar17 = uVar18 + 2;
                  if (bVar29) {
                    uVar17 = uVar18 + 3;
                    local_336[uVar18] = 0x73;
                    if (uVar17 < 0x27f) {
                      uVar17 = uVar18 + 4;
                      local_336[uVar18 + 1] = 0x62;
                      if (uVar17 < 0x27f) {
                        uVar17 = uVar18 + 5;
                        *(undefined1 *)((long)&local_338 + uVar18 + 4) = 0x52;
                        if (uVar17 < 0x27f) {
                          uVar17 = uVar18 + 6;
                          local_336[uVar18 + 3] = 0x65;
                          if (uVar17 < 0x27f) {
                            uVar17 = uVar18 + 7;
                            local_336[uVar18 + 4] = 0x67;
                            if (uVar17 < 0x27f) {
                              local_336[uVar18 + 5] = 0x30;
                              uVar17 = uVar18 + 8;
                            }
                          }
                        }
                      }
                    }
                  }
                }
                local_5b4[uVar17 + 0x27c] = 0;
                uVar17 = 0;
                do {
                  uVar18 = uVar17;
                  uVar17 = uVar18 + 1;
                } while (local_5b4[uVar18 + 0x27c] != '\0');
                if (uVar17 < 0x280) {
                  local_5b4[uVar18 + 0x27c] = 0x3d;
                  uVar18 = uVar17;
                }
                local_5b4[uVar18 + 0x27c] = 0;
                iVar4 = 8;
                do {
                  uVar27 = uVar22 >> ((char)iVar4 * '\x04' - 4U & 0x1f) & 0xf;
                  cVar19 = (char)uVar27;
                  cVar26 = cVar19 + '7';
                  if (uVar27 < 10) {
                    cVar26 = cVar19 + '0';
                  }
                  uVar17 = 0;
                  do {
                    uVar18 = uVar17;
                    uVar17 = uVar18 + 1;
                  } while (local_5b4[uVar18 + 0x27c] != '\0');
                  if (uVar18 + 1 < 0x280) {
                    local_5b4[uVar18 + 0x27c] = cVar26;
                    local_336[uVar18 - 1] = 0;
                  }
                  uVar27 = local_4c;
                  iVar4 = iVar4 + -1;
                } while (iVar4 != 0);
                uVar17 = 0;
                do {
                  uVar18 = uVar17;
                  uVar17 = uVar18 + 1;
                } while (local_5b4[uVar18 + 0x27c] != '\0');
                if (uVar17 < 0x280) {
                  local_5b4[uVar18 + 0x27c] = 0x20;
                  uVar18 = uVar17;
                }
                local_5b4[uVar18 + 0x27c] = 0;
                uVar17 = 0xffffffffffffffff;
                do {
                  uVar18 = uVar17;
                  uVar17 = uVar18 + 1;
                } while (local_336[uVar18 - 1] != '\0');
                if (uVar18 + 2 < 0x280) {
                  local_336[uVar18 - 1] = 0x75;
                  bVar29 = uVar17 != 0x27e;
                  uVar17 = uVar18 + 2;
                  if (bVar29) {
                    uVar17 = uVar18 + 3;
                    local_336[uVar18] = 0x73;
                    if (uVar17 < 0x27f) {
                      uVar17 = uVar18 + 4;
                      local_336[uVar18 + 1] = 0x62;
                      if (uVar17 < 0x27f) {
                        uVar17 = uVar18 + 5;
                        *(undefined1 *)((long)&local_338 + uVar18 + 4) = 0x52;
                        if (uVar17 < 0x27f) {
                          uVar17 = uVar18 + 6;
                          local_336[uVar18 + 3] = 0x65;
                          if (uVar17 < 0x27f) {
                            uVar17 = uVar18 + 7;
                            local_336[uVar18 + 4] = 0x67;
                            if (uVar17 < 0x27f) {
                              local_336[uVar18 + 5] = 0x34;
                              uVar17 = uVar18 + 8;
                            }
                          }
                        }
                      }
                    }
                  }
                }
                local_5b4[uVar17 + 0x27c] = 0;
                uVar17 = 0;
                do {
                  uVar18 = uVar17;
                  uVar17 = uVar18 + 1;
                } while (local_5b4[uVar18 + 0x27c] != '\0');
                if (uVar17 < 0x280) {
                  local_5b4[uVar18 + 0x27c] = 0x3d;
                  uVar18 = uVar17;
                }
                local_5b4[uVar18 + 0x27c] = 0;
                iVar4 = 8;
                do {
                  uVar22 = uVar27 >> ((char)iVar4 * '\x04' - 4U & 0x1f) & 0xf;
                  cVar19 = (char)uVar22;
                  cVar26 = cVar19 + '7';
                  if (uVar22 < 10) {
                    cVar26 = cVar19 + '0';
                  }
                  uVar17 = 0;
                  do {
                    uVar18 = uVar17;
                    uVar17 = uVar18 + 1;
                  } while (local_5b4[uVar18 + 0x27c] != '\0');
                  if (uVar18 + 1 < 0x280) {
                    local_5b4[uVar18 + 0x27c] = cVar26;
                    local_336[uVar18 - 1] = 0;
                  }
                  bVar29 = true;
                  iVar4 = iVar4 + -1;
                } while (iVar4 != 0);
                goto LAB_1000d559;
              }
            }
          }
        }
      }
    }
    uVar17 = 0;
    do {
      uVar18 = uVar17;
      uVar17 = uVar18 + 1;
    } while (local_5b4[uVar18 + 0x27c] != '\0');
    if (uVar18 + 1 < 0x280) {
      cVar19 = ' ';
      pcVar6 = str_1001356b;
      do {
        pcVar6 = pcVar6 + 1;
        local_5b4[uVar18 + 0x27c] = cVar19;
        uVar18 = uVar18 + 1;
        cVar19 = *pcVar6;
        if (cVar19 == '\0') break;
      } while (uVar18 < 0x27f);
    }
  }
  local_5b4[uVar18 + 0x27c] = 0;
  bVar29 = false;
LAB_1000d559:
  pcVar6 = str_10013458;
  if (!bVar29 && !bVar28) {
    cVar19 = *pcVar11;
    if (cVar19 == '\0') {
      pcVar6 = str_10013468;
    }
    else {
      pcVar24 = pcVar11 + 8;
      cVar26 = cVar19;
      do {
        cVar23 = cVar26 + ' ';
        if (0x19 < (byte)(cVar26 + 0xbfU)) {
          cVar23 = cVar26;
        }
        cVar26 = pcVar24[-7];
        if (cVar23 == 'g') {
          pcVar9 = str_1001334f + 1;
          if (cVar26 != '\0') {
            cVar23 = cVar26 + ' ';
            if (0x19 < (byte)(cVar26 + 0xbfU)) {
              cVar23 = cVar26;
            }
            if (cVar23 != 'r') goto LAB_1000d5b9;
            cVar23 = pcVar24[-6];
            pcVar9 = str_1001334f + 2;
            if (cVar23 != '\0') {
              cVar25 = cVar23 + ' ';
              if (0x19 < (byte)(cVar23 + 0xbfU)) {
                cVar25 = cVar23;
              }
              if (cVar25 != 'a') goto LAB_1000d5b9;
              cVar23 = pcVar24[-5];
              pcVar9 = str_1001334f + 3;
              if (cVar23 != '\0') {
                cVar25 = cVar23 + ' ';
                if (0x19 < (byte)(cVar23 + 0xbfU)) {
                  cVar25 = cVar23;
                }
                if (cVar25 != 'p') goto LAB_1000d5b9;
                cVar23 = pcVar24[-4];
                pcVar9 = str_1001334f + 4;
                if (cVar23 != '\0') {
                  cVar25 = cVar23 + ' ';
                  if (0x19 < (byte)(cVar23 + 0xbfU)) {
                    cVar25 = cVar23;
                  }
                  if (cVar25 != 'h') goto LAB_1000d5b9;
                  cVar23 = pcVar24[-3];
                  pcVar9 = str_1001334f + 5;
                  if (cVar23 != '\0') {
                    cVar25 = cVar23 + ' ';
                    if (0x19 < (byte)(cVar23 + 0xbfU)) {
                      cVar25 = cVar23;
                    }
                    if (cVar25 != 'i') goto LAB_1000d5b9;
                    cVar23 = pcVar24[-2];
                    pcVar9 = str_1001334f + 6;
                    if (cVar23 != '\0') {
                      cVar25 = cVar23 + ' ';
                      if (0x19 < (byte)(cVar23 + 0xbfU)) {
                        cVar25 = cVar23;
                      }
                      if (cVar25 != 'c') goto LAB_1000d5b9;
                      cVar23 = pcVar24[-1];
                      pcVar9 = str_1001334f + 7;
                      if (cVar23 != '\0') {
                        cVar25 = cVar23 + ' ';
                        if (0x19 < (byte)(cVar23 + 0xbfU)) {
                          cVar25 = cVar23;
                        }
                        if (cVar25 != 's') goto LAB_1000d5b9;
                        pcVar9 = str_1001334f + 8;
                        if (*pcVar24 != '\0') goto LAB_1000d8d6;
                      }
                    }
                  }
                }
              }
            }
          }
          if (*pcVar9 == '\0') goto LAB_1000d8d6;
        }
LAB_1000d5b9:
        pcVar24 = pcVar24 + 1;
      } while (cVar26 != '\0');
      pcVar24 = pcVar11 + 7;
      cVar26 = cVar19;
      do {
        cVar23 = cVar26 + ' ';
        if (0x19 < (byte)(cVar26 + 0xbfU)) {
          cVar23 = cVar26;
        }
        cVar26 = pcVar24[-6];
        if (cVar23 == 'n') {
          pcVar9 = str_10012f92 + 1;
          if (cVar26 != '\0') {
            cVar23 = cVar26 + ' ';
            if (0x19 < (byte)(cVar26 + 0xbfU)) {
              cVar23 = cVar26;
            }
            if (cVar23 != 'e') goto LAB_1000d779;
            cVar23 = pcVar24[-5];
            pcVar9 = str_10012f92 + 2;
            if (cVar23 != '\0') {
              cVar25 = cVar23 + ' ';
              if (0x19 < (byte)(cVar23 + 0xbfU)) {
                cVar25 = cVar23;
              }
              if (cVar25 != 't') goto LAB_1000d779;
              cVar23 = pcVar24[-4];
              pcVar9 = str_10012f92 + 3;
              if (cVar23 != '\0') {
                cVar25 = cVar23 + ' ';
                if (0x19 < (byte)(cVar23 + 0xbfU)) {
                  cVar25 = cVar23;
                }
                if (cVar25 != 'w') goto LAB_1000d779;
                cVar23 = pcVar24[-3];
                pcVar9 = str_10012f92 + 4;
                if (cVar23 != '\0') {
                  cVar25 = cVar23 + ' ';
                  if (0x19 < (byte)(cVar23 + 0xbfU)) {
                    cVar25 = cVar23;
                  }
                  if (cVar25 != 'o') goto LAB_1000d779;
                  cVar23 = pcVar24[-2];
                  pcVar9 = str_10012f92 + 5;
                  if (cVar23 != '\0') {
                    cVar25 = cVar23 + ' ';
                    if (0x19 < (byte)(cVar23 + 0xbfU)) {
                      cVar25 = cVar23;
                    }
                    if (cVar25 != 'r') goto LAB_1000d779;
                    cVar23 = pcVar24[-1];
                    pcVar9 = str_10012f92 + 6;
                    if (cVar23 != '\0') {
                      cVar25 = cVar23 + ' ';
                      if (0x19 < (byte)(cVar23 + 0xbfU)) {
                        cVar25 = cVar23;
                      }
                      if (cVar25 != 'k') goto LAB_1000d779;
                      pcVar9 = str_10012f92 + 7;
                      if (*pcVar24 != '\0') goto LAB_1000d8d6;
                    }
                  }
                }
              }
            }
          }
          if (*pcVar9 == '\0') goto LAB_1000d8d6;
        }
LAB_1000d779:
        pcVar24 = pcVar24 + 1;
      } while (cVar26 != '\0');
      pcVar24 = pcVar11 + 8;
      cVar26 = cVar19;
      do {
        cVar23 = cVar26 + ' ';
        if (0x19 < (byte)(cVar26 + 0xbfU)) {
          cVar23 = cVar26;
        }
        cVar26 = pcVar24[-7];
        if (cVar23 == 'f') {
          pcVar9 = str_10012f9a + 1;
          if (cVar26 != '\0') {
            cVar23 = cVar26 + ' ';
            if (0x19 < (byte)(cVar26 + 0xbfU)) {
              cVar23 = cVar26;
            }
            if (cVar23 != 'i') goto LAB_1000da69;
            cVar23 = pcVar24[-6];
            pcVar9 = str_10012f9a + 2;
            if (cVar23 != '\0') {
              cVar25 = cVar23 + ' ';
              if (0x19 < (byte)(cVar23 + 0xbfU)) {
                cVar25 = cVar23;
              }
              if (cVar25 != 'r') goto LAB_1000da69;
              cVar23 = pcVar24[-5];
              pcVar9 = str_10012f9a + 3;
              if (cVar23 != '\0') {
                cVar25 = cVar23 + ' ';
                if (0x19 < (byte)(cVar23 + 0xbfU)) {
                  cVar25 = cVar23;
                }
                if (cVar25 != 'e') goto LAB_1000da69;
                cVar23 = pcVar24[-4];
                pcVar9 = str_10012f9a + 4;
                if (cVar23 != '\0') {
                  cVar25 = cVar23 + ' ';
                  if (0x19 < (byte)(cVar23 + 0xbfU)) {
                    cVar25 = cVar23;
                  }
                  if (cVar25 != 'w') goto LAB_1000da69;
                  cVar23 = pcVar24[-3];
                  pcVar9 = str_10012f9a + 5;
                  if (cVar23 != '\0') {
                    cVar25 = cVar23 + ' ';
                    if (0x19 < (byte)(cVar23 + 0xbfU)) {
                      cVar25 = cVar23;
                    }
                    if (cVar25 != 'i') goto LAB_1000da69;
                    cVar23 = pcVar24[-2];
                    pcVar9 = str_10012f9a + 6;
                    if (cVar23 != '\0') {
                      cVar25 = cVar23 + ' ';
                      if (0x19 < (byte)(cVar23 + 0xbfU)) {
                        cVar25 = cVar23;
                      }
                      if (cVar25 != 'r') goto LAB_1000da69;
                      cVar23 = pcVar24[-1];
                      pcVar9 = str_10012f9a + 7;
                      if (cVar23 != '\0') {
                        cVar25 = cVar23 + ' ';
                        if (0x19 < (byte)(cVar23 + 0xbfU)) {
                          cVar25 = cVar23;
                        }
                        if (cVar25 != 'e') goto LAB_1000da69;
                        pcVar9 = str_10012f9a + 8;
                        if (*pcVar24 != '\0') goto LAB_1000d8d6;
                      }
                    }
                  }
                }
              }
            }
          }
          if (*pcVar9 == '\0') goto LAB_1000d8d6;
        }
LAB_1000da69:
        pcVar24 = pcVar24 + 1;
      } while (cVar26 != '\0');
      pcVar11 = pcVar11 + 8;
      do {
        cVar26 = cVar19 + ' ';
        if (0x19 < (byte)(cVar19 + 0xbfU)) {
          cVar26 = cVar19;
        }
        cVar19 = pcVar11[-7];
        if (cVar26 == 'p') {
          pcVar24 = str_10012e2b + 1;
          if (cVar19 != '\0') {
            cVar26 = cVar19 + ' ';
            if (0x19 < (byte)(cVar19 + 0xbfU)) {
              cVar26 = cVar19;
            }
            if (cVar26 != 'l') goto LAB_1000dc44;
            cVar26 = pcVar11[-6];
            pcVar24 = str_10012e2b + 2;
            if (cVar26 != '\0') {
              cVar23 = cVar26 + ' ';
              if (0x19 < (byte)(cVar26 + 0xbfU)) {
                cVar23 = cVar26;
              }
              if (cVar23 != 'a') goto LAB_1000dc44;
              cVar26 = pcVar11[-5];
              pcVar24 = str_10012e2b + 3;
              if (cVar26 != '\0') {
                cVar23 = cVar26 + ' ';
                if (0x19 < (byte)(cVar26 + 0xbfU)) {
                  cVar23 = cVar26;
                }
                if (cVar23 != 't') goto LAB_1000dc44;
                cVar26 = pcVar11[-4];
                pcVar24 = str_10012e2b + 4;
                if (cVar26 != '\0') {
                  cVar23 = cVar26 + ' ';
                  if (0x19 < (byte)(cVar26 + 0xbfU)) {
                    cVar23 = cVar26;
                  }
                  if (cVar23 != 'f') goto LAB_1000dc44;
                  cVar26 = pcVar11[-3];
                  pcVar24 = str_10012e2b + 5;
                  if (cVar26 != '\0') {
                    cVar23 = cVar26 + ' ';
                    if (0x19 < (byte)(cVar26 + 0xbfU)) {
                      cVar23 = cVar26;
                    }
                    if (cVar23 != 'o') goto LAB_1000dc44;
                    cVar26 = pcVar11[-2];
                    pcVar24 = str_10012e2b + 6;
                    if (cVar26 != '\0') {
                      cVar23 = cVar26 + ' ';
                      if (0x19 < (byte)(cVar26 + 0xbfU)) {
                        cVar23 = cVar26;
                      }
                      if (cVar23 != 'r') goto LAB_1000dc44;
                      cVar26 = pcVar11[-1];
                      pcVar24 = str_10012e2b + 7;
                      if (cVar26 != '\0') {
                        cVar23 = cVar26 + ' ';
                        if (0x19 < (byte)(cVar26 + 0xbfU)) {
                          cVar23 = cVar26;
                        }
                        if (cVar23 != 'm') goto LAB_1000dc44;
                        pcVar24 = str_10012e2b + 8;
                        if (*pcVar11 != '\0') goto LAB_1000d8d6;
                      }
                    }
                  }
                }
              }
            }
          }
          if (*pcVar24 == '\0') goto LAB_1000d8d6;
        }
LAB_1000dc44:
        pcVar11 = pcVar11 + 1;
      } while (cVar19 != '\0');
LAB_1000ddcf:
      pcVar6 = str_10013468;
    }
  }
LAB_1000ddd6:
  uVar17 = 0;
  do {
    uVar18 = uVar17;
    uVar17 = uVar18 + 1;
  } while (local_5b4[uVar18 + 0x27c] != '\0');
  cVar19 = *pcVar6;
  if (uVar18 + 1 < 0x280 && cVar19 != '\0') {
    do {
      pcVar6 = pcVar6 + 1;
      local_5b4[uVar18 + 0x27c] = cVar19;
      uVar18 = uVar18 + 1;
      cVar19 = *pcVar6;
      if (cVar19 == '\0') break;
    } while (uVar18 < 0x27f);
  }
  local_5b4[uVar18 + 0x27c] = 0;
  pcVar11 = recovered_10011d50((long)pbVar13);
  pbVar13 = local_38;
  piVar16 = local_40;
  local_b8 = local_b8 & 0xffffff00;
  uVar17 = 0;
  do {
    uVar18 = uVar17;
    uVar17 = uVar18 + 1;
  } while (local_336[uVar18 + 0x27e] != '\0');
  if (uVar18 + 1 < 0x60) {
    cVar19 = '/';
    pcVar6 = str_1001332a;
    do {
      pcVar6 = pcVar6 + 1;
      local_336[uVar18 + 0x27e] = cVar19;
      uVar18 = uVar18 + 1;
      cVar19 = *pcVar6;
      if (cVar19 == '\0') break;
    } while (uVar18 < 0x5f);
  }
  local_336[uVar18 + 0x27e] = 0;
  uVar17 = 0;
  do {
    uVar18 = uVar17;
    uVar17 = uVar18 + 1;
  } while (local_336[uVar18 + 0x27e] != '\0');
  if (uVar17 < 0x60) {
    local_336[uVar18 + 0x27e] = 0x2f;
    uVar18 = uVar17;
  }
  local_336[uVar18 + 0x27e] = 0;
  bVar8 = *pbVar13;
  uVar17 = 0;
  do {
    uVar18 = uVar17;
    uVar17 = uVar18 + 1;
  } while (local_336[uVar18 + 0x27e] != '\0');
  bVar15 = (bVar8 >> 4) + 0x37;
  if (bVar8 < 0xa0) {
    bVar15 = bVar8 >> 4 | 0x30;
  }
  if (uVar18 + 1 < 0x60) {
    local_336[uVar18 + 0x27e] = bVar15;
    local_336[uVar18 + 0x27f] = 0;
  }
  bVar8 = bVar8 & 0xf;
  uVar17 = 0;
  do {
    uVar18 = uVar17;
    uVar17 = uVar18 + 1;
  } while (local_336[uVar18 + 0x27e] != '\0');
  cVar19 = bVar8 + 0x37;
  if (bVar8 < 10) {
    cVar19 = bVar8 + 0x30;
  }
  if (uVar18 + 1 < 0x60) {
    local_336[uVar18 + 0x27e] = cVar19;
    local_336[uVar18 + 0x27f] = 0;
  }
  uVar17 = 0;
  do {
    uVar18 = uVar17;
    uVar17 = uVar18 + 1;
  } while (local_336[uVar18 + 0x27e] != '\0');
  if (uVar17 < 0x60) {
    local_336[uVar18 + 0x27e] = 0x3a;
    uVar18 = uVar17;
  }
  local_336[uVar18 + 0x27e] = 0;
  bVar8 = pbVar13[1];
  uVar17 = 0;
  do {
    uVar18 = uVar17;
    uVar17 = uVar18 + 1;
  } while (local_336[uVar18 + 0x27e] != '\0');
  bVar14 = (bVar8 >> 4) + 0x37;
  if (bVar8 < 0xa0) {
    bVar14 = bVar8 >> 4 | 0x30;
  }
  if (uVar18 + 1 < 0x60) {
    local_336[uVar18 + 0x27e] = bVar14;
    local_336[uVar18 + 0x27f] = 0;
  }
  bVar8 = bVar8 & 0xf;
  uVar17 = 0;
  do {
    uVar18 = uVar17;
    uVar17 = uVar18 + 1;
  } while (local_336[uVar18 + 0x27e] != '\0');
  cVar26 = bVar8 + 0x37;
  if (bVar8 < 10) {
    cVar26 = bVar8 + 0x30;
  }
  if (uVar18 + 1 < 0x60) {
    local_336[uVar18 + 0x27e] = cVar26;
    local_336[uVar18 + 0x27f] = 0;
  }
  uVar17 = 0;
  do {
    uVar18 = uVar17;
    uVar17 = uVar18 + 1;
  } while (local_336[uVar18 + 0x27e] != '\0');
  if (uVar17 < 0x60) {
    local_336[uVar18 + 0x27e] = 0x2e;
    uVar18 = uVar17;
  }
  local_336[uVar18 + 0x27e] = 0;
  bVar8 = pbVar13[2];
  if (bVar8 == 0) {
    uVar17 = 0;
    do {
      uVar18 = uVar17;
      uVar17 = uVar18 + 1;
    } while (local_336[uVar18 + 0x27e] != '\0');
    if (uVar18 + 1 < 0x60) {
      *(undefined2 *)(local_336 + uVar18 + 0x27e) = 0x30;
    }
  }
  else {
    uVar17 = 0xffffffffffffffff;
    uVar18 = (ulong)(uint)bVar8;
    do {
      uVar5 = uVar17;
      uVar22 = (uint)uVar18;
      *(byte *)((long)&local_4c + uVar5 + 1) = (char)uVar18 + (char)(uVar18 / 10) * -10 | 0x30;
      uVar17 = uVar5 + 1;
      if (8 < uVar17) break;
      uVar18 = uVar18 / 10;
    } while (9 < uVar22);
    if ((uVar17 & 1) == 0) {
      uVar18 = 0;
      do {
        uVar10 = uVar18;
        uVar18 = uVar10 + 1;
      } while (local_336[uVar10 + 0x27e] != '\0');
      uVar18 = uVar17;
      if (uVar10 + 1 < 0x60) {
        local_336[uVar10 + 0x27e] = *(undefined1 *)((long)&local_4c + uVar5 + 1);
        local_336[uVar10 + 0x27f] = 0;
      }
    }
    else {
      uVar18 = uVar5 + 2;
    }
    while (uVar17 != 0) {
      uVar17 = 0;
      do {
        uVar5 = uVar17;
        uVar17 = uVar5 + 1;
      } while (local_336[uVar5 + 0x27e] != '\0');
      if (uVar5 + 1 < 0x60) {
        local_336[uVar5 + 0x27e] = *(undefined1 *)((long)&local_50 + uVar18 + 3);
        local_336[uVar5 + 0x27f] = 0;
      }
      lVar20 = uVar18 + 2;
      uVar18 = uVar18 - 2;
      uVar17 = 0;
      do {
        uVar5 = uVar17;
        uVar17 = uVar5 + 1;
      } while (local_336[uVar5 + 0x27e] != '\0');
      uVar17 = uVar18;
      if (uVar5 + 1 < 0x60) {
        local_336[uVar5 + 0x27e] = *(undefined1 *)((long)&local_50 + lVar20);
        local_336[uVar5 + 0x27f] = 0;
      }
    }
  }
  local_5b8 = local_5b8 & 0xffffff00;
  uVar17 = 0xffffffffffffffff;
  do {
    uVar18 = uVar17;
    uVar17 = uVar18 + 1;
  } while (local_5b4[uVar18 - 3] != '\0');
  if (uVar18 + 2 < 0x280) {
    local_5b4[uVar18 - 3] = 0x70;
    bVar28 = uVar17 != 0x27e;
    uVar17 = uVar18 + 2;
    if (bVar28) {
      uVar17 = uVar18 + 3;
      local_5b4[uVar18 - 2] = 99;
      if (uVar17 < 0x27f) {
        uVar17 = uVar18 + 4;
        local_5b4[uVar18 - 1] = 0x69;
        if (uVar17 < 0x27f) {
          local_5b4[uVar18] = 0x3d;
          uVar17 = uVar18 + 5;
        }
      }
    }
  }
  local_5b4[uVar17 - 4] = 0;
  uVar17 = 0;
  do {
    uVar18 = uVar17;
    uVar17 = uVar18 + 1;
  } while (local_5b4[uVar18 - 4] != '\0');
  if (uVar18 + 1 < 0x280) {
    local_5b4[uVar18 - 4] = bVar15;
    local_5b4[uVar18 - 3] = 0;
  }
  uVar17 = 0;
  do {
    uVar18 = uVar17;
    uVar17 = uVar18 + 1;
  } while (local_5b4[uVar18 - 4] != '\0');
  if (uVar18 + 1 < 0x280) {
    local_5b4[uVar18 - 4] = cVar19;
    local_5b4[uVar18 - 3] = 0;
  }
  uVar17 = 0;
  do {
    uVar18 = uVar17;
    uVar17 = uVar18 + 1;
  } while (local_5b4[uVar18 - 4] != '\0');
  if (uVar17 < 0x280) {
    local_5b4[uVar18 - 4] = 0x3a;
    uVar18 = uVar17;
  }
  local_5b4[uVar18 - 4] = 0;
  uVar17 = 0;
  do {
    uVar18 = uVar17;
    uVar17 = uVar18 + 1;
  } while (local_5b4[uVar18 - 4] != '\0');
  if (uVar18 + 1 < 0x280) {
    local_5b4[uVar18 - 4] = bVar14;
    local_5b4[uVar18 - 3] = 0;
  }
  uVar17 = 0;
  do {
    uVar18 = uVar17;
    uVar17 = uVar18 + 1;
  } while (local_5b4[uVar18 - 4] != '\0');
  if (uVar18 + 1 < 0x280) {
    local_5b4[uVar18 - 4] = cVar26;
    local_5b4[uVar18 - 3] = 0;
  }
  uVar17 = 0;
  do {
    uVar18 = uVar17;
    uVar17 = uVar18 + 1;
  } while (local_5b4[uVar18 - 4] != '\0');
  if (uVar17 < 0x280) {
    local_5b4[uVar18 - 4] = 0x2e;
    uVar18 = uVar17;
  }
  local_5b4[uVar18 - 4] = 0;
  if (bVar8 == 0) {
    uVar17 = 0;
    do {
      uVar18 = uVar17;
      uVar17 = uVar18 + 1;
    } while (local_5b4[uVar18 - 4] != '\0');
    if (uVar18 + 1 < 0x280) {
      *(undefined2 *)(local_5b4 + (uVar18 - 4)) = 0x30;
    }
  }
  else {
    uVar17 = 0xffffffffffffffff;
    uVar22 = (uint)bVar8;
    do {
      uVar18 = uVar17;
      *(byte *)((long)&local_4c + uVar18 + 1) = (byte)(uVar22 % 10) | 0x30;
      uVar17 = uVar18 + 1;
      if (8 < uVar17) break;
      bVar28 = 9 < uVar22;
      uVar22 = uVar22 / 10;
    } while (bVar28);
    if ((uVar17 & 1) == 0) {
      uVar5 = 0;
      do {
        uVar10 = uVar5;
        uVar5 = uVar10 + 1;
      } while (local_5b4[uVar10 - 4] != '\0');
      uVar5 = uVar17;
      if (uVar10 + 1 < 0x280) {
        local_5b4[uVar10 - 4] = *(undefined1 *)((long)&local_4c + uVar18 + 1);
        local_5b4[uVar10 - 3] = 0;
      }
    }
    else {
      uVar5 = uVar18 + 2;
    }
    while (uVar17 != 0) {
      uVar17 = 0;
      do {
        uVar18 = uVar17;
        uVar17 = uVar18 + 1;
      } while (local_5b4[uVar18 - 4] != '\0');
      if (uVar18 + 1 < 0x280) {
        local_5b4[uVar18 - 4] = *(undefined1 *)((long)&local_50 + uVar5 + 3);
        local_5b4[uVar18 - 3] = 0;
      }
      lVar20 = uVar5 + 2;
      uVar5 = uVar5 - 2;
      uVar17 = 0;
      do {
        uVar18 = uVar17;
        uVar17 = uVar18 + 1;
      } while (local_5b4[uVar18 - 4] != '\0');
      uVar17 = uVar5;
      if (uVar18 + 1 < 0x280) {
        local_5b4[uVar18 - 4] = *(undefined1 *)((long)&local_50 + lVar20);
        local_5b4[uVar18 - 3] = 0;
      }
    }
  }
  uVar17 = 0xffffffffffffffff;
  do {
    uVar18 = uVar17;
    uVar17 = uVar18 + 1;
  } while (local_5b4[uVar18 - 3] != '\0');
  if (uVar18 + 2 < 0x280) {
    local_5b4[uVar18 - 3] = 0x20;
    bVar28 = uVar17 != 0x27e;
    uVar17 = uVar18 + 2;
    if (bVar28) {
      uVar17 = uVar18 + 3;
      local_5b4[uVar18 - 2] = 0x76;
      if (uVar17 < 0x27f) {
        uVar17 = uVar18 + 4;
        local_5b4[uVar18 - 1] = 0x65;
        if (uVar17 < 0x27f) {
          uVar17 = uVar18 + 5;
          local_5b4[uVar18] = 0x6e;
          if (uVar17 < 0x27f) {
            uVar17 = uVar18 + 6;
            local_5b4[uVar18 + 1] = 100;
            if (uVar17 < 0x27f) {
              uVar17 = uVar18 + 7;
              local_5b4[uVar18 + 2] = 0x6f;
              if (uVar17 < 0x27f) {
                uVar17 = uVar18 + 8;
                local_5b4[uVar18 + 3] = 0x72;
                if (uVar17 < 0x27f) {
                  local_5b4[uVar18 + 4] = 0x3d;
                  uVar17 = uVar18 + 9;
                }
              }
            }
          }
        }
      }
    }
  }
  local_5b4[uVar17 - 4] = 0;
  uVar1 = *(ushort *)(pbVar13 + 4);
  uVar17 = 0;
  do {
    uVar18 = uVar17;
    uVar17 = uVar18 + 1;
  } while (local_5b4[uVar18 - 4] != '\0');
  if (uVar18 + 1 < 0x280) {
    bVar8 = (byte)(uVar1 >> 8);
    bVar15 = (bVar8 >> 4) + 0x37;
    if (uVar1 < 0xa000) {
      bVar15 = bVar8 >> 4 | 0x30;
    }
    local_5b4[uVar18 - 4] = bVar15;
    local_5b4[uVar18 - 3] = 0;
  }
  uVar12 = uVar1 >> 8 & 0xf;
  uVar17 = 0;
  do {
    uVar18 = uVar17;
    uVar17 = uVar18 + 1;
  } while (local_5b4[uVar18 - 4] != '\0');
  if (uVar18 + 1 < 0x280) {
    cVar19 = (char)uVar12;
    cVar26 = cVar19 + '7';
    if (uVar12 < 10) {
      cVar26 = cVar19 + '0';
    }
    local_5b4[uVar18 - 4] = cVar26;
    local_5b4[uVar18 - 3] = 0;
  }
  uVar12 = uVar1 >> 4 & 0xf;
  uVar17 = 0;
  do {
    uVar18 = uVar17;
    uVar17 = uVar18 + 1;
  } while (local_5b4[uVar18 - 4] != '\0');
  if (uVar18 + 1 < 0x280) {
    cVar19 = (char)uVar12;
    cVar26 = cVar19 + '7';
    if (uVar12 < 10) {
      cVar26 = cVar19 + '0';
    }
    local_5b4[uVar18 - 4] = cVar26;
    local_5b4[uVar18 - 3] = 0;
  }
  uVar17 = 0;
  do {
    uVar18 = uVar17;
    uVar17 = uVar18 + 1;
  } while (local_5b4[uVar18 - 4] != '\0');
  if (uVar18 + 1 < 0x280) {
    cVar19 = (char)(uVar1 & 0xf);
    cVar26 = cVar19 + '7';
    if ((uVar1 & 0xf) < 10) {
      cVar26 = cVar19 + '0';
    }
    local_5b4[uVar18 - 4] = cVar26;
    local_5b4[uVar18 - 3] = 0;
  }
  uVar17 = 0xffffffffffffffff;
  do {
    uVar18 = uVar17;
    uVar17 = uVar18 + 1;
  } while (local_5b4[uVar18 - 3] != '\0');
  if (uVar18 + 2 < 0x280) {
    local_5b4[uVar18 - 3] = 0x20;
    bVar28 = uVar17 != 0x27e;
    uVar17 = uVar18 + 2;
    if (bVar28) {
      uVar17 = uVar18 + 3;
      local_5b4[uVar18 - 2] = 100;
      if (uVar17 < 0x27f) {
        uVar17 = uVar18 + 4;
        local_5b4[uVar18 - 1] = 0x65;
        if (uVar17 < 0x27f) {
          uVar17 = uVar18 + 5;
          local_5b4[uVar18] = 0x76;
          if (uVar17 < 0x27f) {
            uVar17 = uVar18 + 6;
            local_5b4[uVar18 + 1] = 0x69;
            if (uVar17 < 0x27f) {
              uVar17 = uVar18 + 7;
              local_5b4[uVar18 + 2] = 99;
              if (uVar17 < 0x27f) {
                uVar17 = uVar18 + 8;
                local_5b4[uVar18 + 3] = 0x65;
                if (uVar17 < 0x27f) {
                  local_5b4[uVar18 + 4] = 0x3d;
                  uVar17 = uVar18 + 9;
                }
              }
            }
          }
        }
      }
    }
  }
  local_5b4[uVar17 - 4] = 0;
  uVar1 = *(ushort *)(pbVar13 + 6);
  uVar17 = 0;
  do {
    uVar18 = uVar17;
    uVar17 = uVar18 + 1;
  } while (local_5b4[uVar18 - 4] != '\0');
  if (uVar18 + 1 < 0x280) {
    bVar8 = (byte)(uVar1 >> 8);
    bVar15 = (bVar8 >> 4) + 0x37;
    if (uVar1 < 0xa000) {
      bVar15 = bVar8 >> 4 | 0x30;
    }
    local_5b4[uVar18 - 4] = bVar15;
    local_5b4[uVar18 - 3] = 0;
  }
  uVar12 = uVar1 >> 8 & 0xf;
  uVar17 = 0;
  do {
    uVar18 = uVar17;
    uVar17 = uVar18 + 1;
  } while (local_5b4[uVar18 - 4] != '\0');
  if (uVar18 + 1 < 0x280) {
    cVar19 = (char)uVar12;
    cVar26 = cVar19 + '7';
    if (uVar12 < 10) {
      cVar26 = cVar19 + '0';
    }
    local_5b4[uVar18 - 4] = cVar26;
    local_5b4[uVar18 - 3] = 0;
  }
  uVar12 = uVar1 >> 4 & 0xf;
  uVar17 = 0;
  do {
    uVar18 = uVar17;
    uVar17 = uVar18 + 1;
  } while (local_5b4[uVar18 - 4] != '\0');
  if (uVar18 + 1 < 0x280) {
    cVar19 = (char)uVar12;
    cVar26 = cVar19 + '7';
    if (uVar12 < 10) {
      cVar26 = cVar19 + '0';
    }
    local_5b4[uVar18 - 4] = cVar26;
    local_5b4[uVar18 - 3] = 0;
  }
  uVar17 = 0;
  do {
    uVar18 = uVar17;
    uVar17 = uVar18 + 1;
  } while (local_5b4[uVar18 - 4] != '\0');
  if (uVar18 + 1 < 0x280) {
    cVar19 = (char)(uVar1 & 0xf);
    cVar26 = cVar19 + '7';
    if ((uVar1 & 0xf) < 10) {
      cVar26 = cVar19 + '0';
    }
    local_5b4[uVar18 - 4] = cVar26;
    local_5b4[uVar18 - 3] = 0;
  }
  uVar17 = 0xffffffffffffffff;
  do {
    uVar18 = uVar17;
    uVar17 = uVar18 + 1;
  } while (local_5b4[uVar18 - 3] != '\0');
  if (uVar18 + 2 < 0x280) {
    local_5b4[uVar18 - 3] = 0x20;
    bVar28 = uVar17 != 0x27e;
    uVar17 = uVar18 + 2;
    if (bVar28) {
      uVar17 = uVar18 + 3;
      local_5b4[uVar18 - 2] = 99;
      if (uVar17 < 0x27f) {
        uVar17 = uVar18 + 4;
        local_5b4[uVar18 - 1] = 0x6c;
        if (uVar17 < 0x27f) {
          uVar17 = uVar18 + 5;
          local_5b4[uVar18] = 0x61;
          if (uVar17 < 0x27f) {
            uVar17 = uVar18 + 6;
            local_5b4[uVar18 + 1] = 0x73;
            if (uVar17 < 0x27f) {
              uVar17 = uVar18 + 7;
              local_5b4[uVar18 + 2] = 0x73;
              if (uVar17 < 0x27f) {
                local_5b4[uVar18 + 3] = 0x3d;
                uVar17 = uVar18 + 8;
              }
            }
          }
        }
      }
    }
  }
  local_5b4[uVar17 - 4] = 0;
  bVar8 = pbVar13[8];
  uVar17 = 0;
  do {
    uVar18 = uVar17;
    uVar17 = uVar18 + 1;
  } while (local_5b4[uVar18 - 4] != '\0');
  if (uVar18 + 1 < 0x280) {
    bVar15 = (bVar8 >> 4) + 0x37;
    if (bVar8 < 0xa0) {
      bVar15 = bVar8 >> 4 | 0x30;
    }
    local_5b4[uVar18 - 4] = bVar15;
    local_5b4[uVar18 - 3] = 0;
  }
  bVar8 = bVar8 & 0xf;
  uVar17 = 0;
  do {
    uVar18 = uVar17;
    uVar17 = uVar18 + 1;
  } while (local_5b4[uVar18 - 4] != '\0');
  if (uVar18 + 1 < 0x280) {
    cVar19 = bVar8 + 0x37;
    if (bVar8 < 10) {
      cVar19 = bVar8 + 0x30;
    }
    local_5b4[uVar18 - 4] = cVar19;
    local_5b4[uVar18 - 3] = 0;
  }
  uVar17 = 0;
  do {
    uVar18 = uVar17;
    uVar17 = uVar18 + 1;
  } while (local_5b4[uVar18 - 4] != '\0');
  if (uVar17 < 0x280) {
    local_5b4[uVar18 - 4] = 0x2e;
    uVar18 = uVar17;
  }
  local_5b4[uVar18 - 4] = 0;
  bVar8 = pbVar13[9];
  uVar17 = 0;
  do {
    uVar18 = uVar17;
    uVar17 = uVar18 + 1;
  } while (local_5b4[uVar18 - 4] != '\0');
  if (uVar18 + 1 < 0x280) {
    bVar15 = (bVar8 >> 4) + 0x37;
    if (bVar8 < 0xa0) {
      bVar15 = bVar8 >> 4 | 0x30;
    }
    local_5b4[uVar18 - 4] = bVar15;
    local_5b4[uVar18 - 3] = 0;
  }
  bVar8 = bVar8 & 0xf;
  uVar17 = 0;
  do {
    uVar18 = uVar17;
    uVar17 = uVar18 + 1;
  } while (local_5b4[uVar18 - 4] != '\0');
  if (uVar18 + 1 < 0x280) {
    cVar19 = bVar8 + 0x37;
    if (bVar8 < 10) {
      cVar19 = bVar8 + 0x30;
    }
    local_5b4[uVar18 - 4] = cVar19;
    local_5b4[uVar18 - 3] = 0;
  }
  uVar17 = 0;
  do {
    uVar18 = uVar17;
    uVar17 = uVar18 + 1;
  } while (local_5b4[uVar18 - 4] != '\0');
  if (uVar17 < 0x280) {
    local_5b4[uVar18 - 4] = 0x2e;
    uVar18 = uVar17;
  }
  local_5b4[uVar18 - 4] = 0;
  bVar8 = pbVar13[10];
  uVar17 = 0;
  do {
    uVar18 = uVar17;
    uVar17 = uVar18 + 1;
  } while (local_5b4[uVar18 - 4] != '\0');
  if (uVar18 + 1 < 0x280) {
    bVar15 = (bVar8 >> 4) + 0x37;
    if (bVar8 < 0xa0) {
      bVar15 = bVar8 >> 4 | 0x30;
    }
    local_5b4[uVar18 - 4] = bVar15;
    local_5b4[uVar18 - 3] = 0;
  }
  bVar8 = bVar8 & 0xf;
  uVar17 = 0;
  do {
    uVar18 = uVar17;
    uVar17 = uVar18 + 1;
  } while (local_5b4[uVar18 - 4] != '\0');
  if (uVar18 + 1 < 0x280) {
    cVar19 = bVar8 + 0x37;
    if (bVar8 < 10) {
      cVar19 = bVar8 + 0x30;
    }
    local_5b4[uVar18 - 4] = cVar19;
    local_5b4[uVar18 - 3] = 0;
  }
  uVar17 = 0;
  do {
    uVar18 = uVar17;
    uVar17 = uVar18 + 1;
  } while (local_5b4[uVar18 - 4] != '\0');
  if (uVar18 + 1 < 0x280) {
    cVar19 = ' ';
    pcVar6 = str_1001358f;
    do {
      pcVar6 = pcVar6 + 1;
      local_5b4[uVar18 - 4] = cVar19;
      uVar18 = uVar18 + 1;
      cVar19 = *pcVar6;
      if (cVar19 == '\0') break;
    } while (uVar18 < 0x27f);
  }
  local_5b4[uVar18 - 4] = 0;
  bVar8 = pbVar13[0xb];
  uVar17 = 0;
  do {
    uVar18 = uVar17;
    uVar17 = uVar18 + 1;
  } while (local_5b4[uVar18 - 4] != '\0');
  if (uVar18 + 1 < 0x280) {
    bVar15 = (bVar8 >> 4) + 0x37;
    if (bVar8 < 0xa0) {
      bVar15 = bVar8 >> 4 | 0x30;
    }
    local_5b4[uVar18 - 4] = bVar15;
    local_5b4[uVar18 - 3] = 0;
  }
  bVar8 = bVar8 & 0xf;
  uVar17 = 0;
  do {
    uVar18 = uVar17;
    uVar17 = uVar18 + 1;
  } while (local_5b4[uVar18 - 4] != '\0');
  if (uVar18 + 1 < 0x280) {
    cVar19 = bVar8 + 0x37;
    if (bVar8 < 10) {
      cVar19 = bVar8 + 0x30;
    }
    local_5b4[uVar18 - 4] = cVar19;
    local_5b4[uVar18 - 3] = 0;
  }
  uVar17 = 0;
  do {
    uVar22 = *(uint *)(pbVar13 + uVar17 * 4 + 0x14);
    if (uVar22 != 0) {
      uVar18 = 0xffffffffffffffff;
      do {
        uVar5 = uVar18;
        uVar18 = uVar5 + 1;
      } while (local_5b4[uVar5 - 3] != '\0');
      if (uVar5 + 2 < 0x280) {
        local_5b4[uVar5 - 3] = 0x20;
        bVar28 = uVar18 != 0x27e;
        uVar18 = uVar5 + 2;
        if (bVar28) {
          uVar18 = uVar5 + 3;
          local_5b4[uVar5 - 2] = 0x62;
          if (uVar18 < 0x27f) {
            uVar18 = uVar5 + 4;
            local_5b4[uVar5 - 1] = 0x61;
            if (uVar18 < 0x27f) {
              local_5b4[uVar5] = 0x72;
              uVar18 = uVar5 + 5;
            }
          }
        }
      }
      local_5b4[uVar18 - 4] = 0;
      if (uVar17 == 0) {
        uVar18 = 0;
        do {
          uVar5 = uVar18;
          uVar18 = uVar5 + 1;
        } while (local_5b4[uVar5 - 4] != '\0');
        if (uVar5 + 1 < 0x280) {
          *(undefined2 *)(local_5b4 + (uVar5 - 4)) = 0x30;
        }
      }
      else {
        uVar5 = 0xffffffffffffffff;
        uVar18 = uVar17;
        do {
          uVar10 = uVar5;
          uVar5 = uVar18 & 0xffffffff;
          uVar27 = (uint)uVar18;
          uVar18 = uVar5 / 10;
          *(byte *)((long)&local_4c + uVar10 + 1) = (char)uVar5 + (char)uVar18 * -10 | 0x30;
          uVar5 = uVar10 + 1;
          if (8 < uVar5) break;
        } while (9 < uVar27);
        if ((uVar5 & 1) == 0) {
          uVar18 = 0;
          do {
            uVar21 = uVar18;
            uVar18 = uVar21 + 1;
          } while (local_5b4[uVar21 - 4] != '\0');
          uVar18 = uVar5;
          if (uVar21 + 1 < 0x280) {
            local_5b4[uVar21 - 4] = *(undefined1 *)((long)&local_4c + uVar10 + 1);
            local_5b4[uVar21 - 3] = 0;
          }
        }
        else {
          uVar18 = uVar10 + 2;
        }
        while (uVar5 != 0) {
          uVar5 = 0;
          do {
            uVar10 = uVar5;
            uVar5 = uVar10 + 1;
          } while (local_5b4[uVar10 - 4] != '\0');
          if (uVar10 + 1 < 0x280) {
            local_5b4[uVar10 - 4] = *(undefined1 *)((long)&local_50 + uVar18 + 3);
            local_5b4[uVar10 - 3] = 0;
          }
          lVar20 = uVar18 + 2;
          uVar18 = uVar18 - 2;
          uVar5 = 0;
          do {
            uVar10 = uVar5;
            uVar5 = uVar10 + 1;
          } while (local_5b4[uVar10 - 4] != '\0');
          uVar5 = uVar18;
          if (uVar10 + 1 < 0x280) {
            local_5b4[uVar10 - 4] = *(undefined1 *)((long)&local_50 + lVar20);
            local_5b4[uVar10 - 3] = 0;
          }
        }
      }
      uVar18 = 0;
      do {
        uVar5 = uVar18;
        uVar18 = uVar5 + 1;
      } while (local_5b4[uVar5 - 4] != '\0');
      if (uVar18 < 0x280) {
        local_5b4[uVar5 - 4] = 0x3d;
        uVar5 = uVar18;
      }
      local_5b4[uVar5 - 4] = 0;
      iVar4 = 8;
      do {
        uVar27 = uVar22 >> ((char)iVar4 * '\x04' - 4U & 0x1f) & 0xf;
        cVar19 = (char)uVar27;
        uVar18 = 0;
        do {
          uVar5 = uVar18;
          uVar18 = uVar5 + 1;
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
    uVar17 = uVar17 + 1;
  } while (uVar17 != 6);
  if ((char)local_338 != '\0') {
    uVar17 = 0;
    do {
      uVar18 = uVar17;
      uVar17 = uVar18 + 1;
    } while (local_5b4[uVar18 - 4] != '\0');
    if (uVar17 < 0x280) {
      local_5b4[uVar18 - 4] = 0x20;
      uVar18 = uVar17;
    }
    local_5b4[uVar18 - 4] = 0;
    uVar17 = 0;
    do {
      uVar18 = uVar17;
      uVar17 = uVar18 + 1;
    } while (local_5b4[uVar18 - 4] != '\0');
    if (uVar18 + 1 < 0x280) {
      pcVar6 = (char *)((long)&local_338 + 1);
      do {
        local_5b4[uVar18 - 4] = cVar19;
        uVar18 = uVar18 + 1;
        cVar19 = *pcVar6;
        if (cVar19 == '\0') break;
        pcVar6 = pcVar6 + 1;
      } while (uVar18 < 0x27f);
    }
    local_5b4[uVar18 - 4] = 0;
  }
  if (((piVar16 != (int *)0x0) && (pcVar7 = (code *)(ulong)(uint)piVar16[3], pcVar7 != (code *)0x0))
     && (iVar4 = (*pcVar7)(&local_b8,pcVar11,&local_5b8), iVar4 != 0)) {
    local_5c0[1] = local_5c0[1] + 1;
  }
  return;
LAB_1000f364:
  uVar27 = uVar27 | 4;
  goto LAB_1000f866;
LAB_1000d8d6:
  uVar17 = 0;
LAB_1000d8fd:
  local_4c = 0;
  uVar22 = *(uint *)(pbVar13 + uVar17 * 4 + 0x14);
  if ((uVar22 & 1) != 0 || uVar22 == 0) goto LAB_1000d8f0;
  local_b8 = 0;
  if (piVar16 == (int *)0x0) goto LAB_1000d8f0;
  if ((uVar22 & 0xfffffff0) == 0) goto LAB_1000d8f0;
  if (*piVar16 != 0x54584b57) goto LAB_1000d8f0;
  if ((uint)piVar16[2] < 0x68) goto LAB_1000d8f0;
  if ((code *)(ulong)(uint)piVar16[0x19] == (code *)0x0) goto LAB_1000d8f0;
  iVar4 = (*(code *)(ulong)(uint)piVar16[0x19])(uVar22 & 0xfffffff0,0,0x1000);
  pbVar13 = local_38;
  piVar16 = local_40;
  if (iVar4 == 0) goto LAB_1000d8f0;
  uVar18 = 0;
  do {
    uVar5 = uVar18;
    uVar18 = uVar5 + 1;
  } while (local_5b4[uVar5 + 0x27c] != '\0');
  if (uVar5 + 1 < 0x280) {
    cVar19 = ' ';
    pcVar11 = str_10013585;
    do {
      pcVar11 = pcVar11 + 1;
      local_5b4[uVar5 + 0x27c] = cVar19;
      uVar5 = uVar5 + 1;
      cVar19 = *pcVar11;
      if (cVar19 == '\0') break;
    } while (uVar5 < 0x27f);
  }
  local_5b4[uVar5 + 0x27c] = 0;
  if (uVar17 == 0) {
    uVar17 = 0;
    do {
      uVar18 = uVar17;
      uVar17 = uVar18 + 1;
    } while (local_5b4[uVar18 + 0x27c] != '\0');
    if (uVar18 + 1 < 0x280) {
      *(undefined2 *)(local_5b4 + uVar18 + 0x27c) = 0x30;
    }
  }
  else {
    uVar18 = 0xffffffffffffffff;
    do {
      uVar5 = uVar18;
      uVar22 = (uint)uVar17;
      uVar10 = (uVar17 & 0xffffffff) / 10;
      local_5b4[uVar5 - 3] = (char)uVar17 + (char)uVar10 * -10 | 0x30;
      uVar18 = uVar5 + 1;
      if (8 < uVar18) break;
      uVar17 = uVar10;
    } while (9 < uVar22);
    if ((uVar18 & 1) == 0) {
      uVar17 = 0;
      do {
        uVar10 = uVar17;
        uVar17 = uVar10 + 1;
      } while (local_5b4[uVar10 + 0x27c] != '\0');
      uVar17 = uVar18;
      if (uVar10 + 1 < 0x280) {
        local_5b4[uVar10 + 0x27c] = local_5b4[uVar5 - 3];
        local_336[uVar10 - 1] = 0;
      }
    }
    else {
      uVar17 = uVar5 + 2;
    }
    while (uVar18 != 0) {
      uVar18 = 0;
      do {
        uVar5 = uVar18;
        uVar18 = uVar5 + 1;
      } while (local_5b4[uVar5 + 0x27c] != '\0');
      if (uVar5 + 1 < 0x280) {
        local_5b4[uVar5 + 0x27c] = local_5b4[uVar17 - 5];
        local_336[uVar5 - 1] = 0;
      }
      lVar20 = uVar17 - 6;
      uVar17 = uVar17 - 2;
      uVar18 = 0;
      do {
        uVar5 = uVar18;
        uVar18 = uVar5 + 1;
      } while (local_5b4[uVar5 + 0x27c] != '\0');
      uVar18 = uVar17;
      if (uVar5 + 1 < 0x280) {
        local_5b4[uVar5 + 0x27c] = local_5b4[lVar20];
        local_336[uVar5 - 1] = 0;
      }
    }
  }
  uVar22 = local_b8;
  uVar17 = 0;
  do {
    uVar18 = uVar17;
    uVar17 = uVar18 + 1;
  } while (local_5b4[uVar18 + 0x27c] != '\0');
  if (uVar17 < 0x280) {
    local_5b4[uVar18 + 0x27c] = 0x20;
    uVar18 = uVar17;
  }
  local_5b4[uVar18 + 0x27c] = 0;
  uVar17 = 0xffffffffffffffff;
  do {
    uVar18 = uVar17;
    uVar17 = uVar18 + 1;
  } while (local_336[uVar18 - 1] != '\0');
  if (uVar18 + 2 < 0x280) {
    local_336[uVar18 - 1] = 0x6d;
    bVar28 = uVar17 != 0x27e;
    uVar17 = uVar18 + 2;
    if (bVar28) {
      uVar17 = uVar18 + 3;
      local_336[uVar18] = 0x6d;
      if (uVar17 < 0x27f) {
        uVar17 = uVar18 + 4;
        local_336[uVar18 + 1] = 0x69;
        if (uVar17 < 0x27f) {
          local_336[uVar18 + 2] = 0x6f;
          uVar17 = uVar18 + 5;
        }
      }
    }
  }
  local_5b4[uVar17 + 0x27c] = 0;
  uVar17 = 0;
  do {
    uVar18 = uVar17;
    uVar17 = uVar18 + 1;
  } while (local_5b4[uVar18 + 0x27c] != '\0');
  if (uVar17 < 0x280) {
    local_5b4[uVar18 + 0x27c] = 0x3d;
    uVar18 = uVar17;
  }
  local_5b4[uVar18 + 0x27c] = 0;
  iVar4 = 8;
  do {
    uVar27 = uVar22 >> ((char)iVar4 * '\x04' - 4U & 0x1f) & 0xf;
    cVar19 = (char)uVar27;
    cVar26 = cVar19 + '7';
    if (uVar27 < 10) {
      cVar26 = cVar19 + '0';
    }
    uVar17 = 0;
    do {
      uVar18 = uVar17;
      uVar17 = uVar18 + 1;
    } while (local_5b4[uVar18 + 0x27c] != '\0');
    if (uVar18 + 1 < 0x280) {
      local_5b4[uVar18 + 0x27c] = cVar26;
      local_336[uVar18 - 1] = 0;
    }
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  if (((uVar22 != 0) && (*piVar16 == 0x54584b57)) && (0x6b < (uint)piVar16[2])) {
    if ((code *)(ulong)(uint)piVar16[0x1a] != (code *)0x0) {
      iVar4 = (*(code *)(ulong)(uint)piVar16[0x1a])(uVar22,4,&local_4c);
      uVar22 = local_4c;
      pbVar13 = local_38;
      if (iVar4 != 0) {
        uVar17 = 0;
        do {
          uVar18 = uVar17;
          uVar17 = uVar18 + 1;
        } while (local_5b4[uVar18 + 0x27c] != '\0');
        if (uVar17 < 0x280) {
          local_5b4[uVar18 + 0x27c] = 0x20;
          uVar18 = uVar17;
        }
        local_5b4[uVar18 + 0x27c] = 0;
        uVar17 = 0xffffffffffffffff;
        do {
          uVar18 = uVar17;
          uVar17 = uVar18 + 1;
        } while (local_336[uVar18 - 1] != '\0');
        if (uVar18 + 2 < 0x280) {
          local_336[uVar18 - 1] = 0x6d;
          bVar28 = uVar17 != 0x27e;
          uVar17 = uVar18 + 2;
          if (bVar28) {
            uVar17 = uVar18 + 3;
            local_336[uVar18] = 0x6d;
            if (uVar17 < 0x27f) {
              uVar17 = uVar18 + 4;
              local_336[uVar18 + 1] = 0x69;
              if (uVar17 < 0x27f) {
                uVar17 = uVar18 + 5;
                local_336[uVar18 + 2] = 0x6f;
                if (uVar17 < 0x27f) {
                  uVar17 = uVar18 + 6;
                  local_336[uVar18 + 3] = 0x52;
                  if (uVar17 < 0x27f) {
                    uVar17 = uVar18 + 7;
                    local_336[uVar18 + 4] = 0x65;
                    if (uVar17 < 0x27f) {
                      uVar17 = uVar18 + 8;
                      local_336[uVar18 + 5] = 0x67;
                      if (uVar17 < 0x27f) {
                        local_336[uVar18 + 6] = 0x30;
                        uVar17 = uVar18 + 9;
                      }
                    }
                  }
                }
              }
            }
          }
        }
        local_5b4[uVar17 + 0x27c] = 0;
        uVar17 = 0;
        do {
          uVar18 = uVar17;
          uVar17 = uVar18 + 1;
        } while (local_5b4[uVar18 + 0x27c] != '\0');
        if (uVar17 < 0x280) {
          local_5b4[uVar18 + 0x27c] = 0x3d;
          uVar18 = uVar17;
        }
        local_5b4[uVar18 + 0x27c] = 0;
        pbVar13 = local_38;
        iVar4 = 8;
        do {
          uVar27 = uVar22 >> ((char)iVar4 * '\x04' - 4U & 0x1f) & 0xf;
          cVar19 = (char)uVar27;
          cVar26 = cVar19 + '7';
          if (uVar27 < 10) {
            cVar26 = cVar19 + '0';
          }
          uVar17 = 0;
          do {
            uVar18 = uVar17;
            uVar17 = uVar18 + 1;
          } while (local_5b4[uVar18 + 0x27c] != '\0');
          if (uVar18 + 1 < 0x280) {
            local_5b4[uVar18 + 0x27c] = cVar26;
            local_336[uVar18 - 1] = 0;
          }
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
    }
  }
  goto LAB_1000ddd6;
LAB_1000d8f0:
  uVar17 = uVar17 + 1;
  if (uVar17 == 6) goto LAB_1000ddcf;
  goto LAB_1000d8fd;
}

#undef DAT_10012f79
#undef DAT_10012f7a
#undef DAT_10012f7b
#undef DAT_10012f7c
#undef DAT_10013309
#undef DAT_10013360
#undef DAT_10013361
#undef DAT_10013362
#undef DAT_10013363
#undef DAT_10013364
#undef DAT_10013365
#undef DAT_100133c2
#undef DAT_100133cd
#undef str_10012e2b
#undef str_10012f8c
#undef str_10012f92
#undef str_10012f9a
#undef str_1001331c
#undef str_1001332a
#undef str_1001334f
#undef str_10013358
#undef str_10013366
#undef str_1001336d
#undef str_10013379
#undef str_10013385
#undef str_1001339b
#undef str_100133d9
#undef str_1001340f
#undef str_10013437
#undef str_10013447
#undef str_10013458
#undef str_10013468
#undef str_1001347c
#undef str_10013494
#undef str_100134ac
#undef str_100134c5
#undef str_100134d6
#undef str_100134e6
#undef str_100134f5
#undef str_1001350b
#undef str_10013515
#undef str_10013521
#undef str_10013536
#undef str_10013542
#undef str_1001355b
#undef str_10013563
#undef str_1001356b
#undef str_10013585
#undef str_1001358f
#undef local_338
#undef local_336
#undef local_b8
#undef local_58
#undef local_54
#undef local_50
#undef local_4c
#undef local_40
#undef local_38
#undef cStack_339
#undef cStack_b9
#undef local_5c0
#undef local_5b8
#undef local_5b4

#define local_38 (*(undefined8 *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100112a0
 */

undefined8 recovered_100112a0(int *param_1,undefined4 param_2)

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
 * Address: 0x10011440
 */

undefined8 recovered_10011440(int *param_1,undefined1 param_2,long param_3)

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
          if (*param_1 != 0x54584b57) goto LAB_10011470;
          uVar2 = param_1[2];
          if (uVar2 < 0x58) goto LAB_10011510;
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
        if (*param_1 != 0x54584b57) goto LAB_10011470;
        uVar2 = param_1[2];
      }
LAB_10011510:
      if ((0x33 < uVar2) && ((code *)(ulong)(uint)param_1[0xc] != (code *)0x0)) {
        (*(code *)(ulong)(uint)param_1[0xc])(100);
      }
    }
LAB_10011470:
    bVar5 = uVar4 < 199;
    uVar4 = uVar4 + 1;
    if (uVar4 == 200) {
      return 0;
    }
  } while( true );
LAB_100115af:
  local_34 = 0;
  if (*param_1 == 0x54584b57) {
    uVar2 = param_1[2];
    if (uVar2 < 0x58) {
LAB_100115fd:
      if (uVar2 < 0x34) goto LAB_1001158e;
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
      if (iVar1 != 0x54584b57) goto LAB_1001158e;
      uVar2 = param_1[2];
      goto LAB_100115fd;
    }
    if ((code *)(ulong)(uint)param_1[0xc] != (code *)0x0) {
      (*(code *)(ulong)(uint)param_1[0xc])(100);
    }
  }
LAB_1001158e:
  bVar5 = uVar4 < 199;
  uVar4 = uVar4 + 1;
  if (uVar4 == 200) {
    return 0;
  }
  goto LAB_100115af;
}

#undef local_38
#undef local_34

#define local_38 (*(uint *)(frame + 24))
#define local_34 (*(uint *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10011690
 */

void recovered_10011690(int *param_1,undefined1 param_2,long param_3)

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
          if (*param_1 != 0x54584b57) goto LAB_100116c0;
          uVar2 = param_1[2];
          if (uVar2 < 0x58) goto LAB_10011760;
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
        if (*param_1 != 0x54584b57) goto LAB_100116c0;
        uVar2 = param_1[2];
      }
LAB_10011760:
      if ((0x33 < uVar2) && ((code *)(ulong)(uint)param_1[0xc] != (code *)0x0)) {
        (*(code *)(ulong)(uint)param_1[0xc])(100);
      }
    }
LAB_100116c0:
    bVar4 = uVar3 < 199;
    uVar3 = uVar3 + 1;
    if (uVar3 == 200) {
      return;
    }
  } while( true );
LAB_100117f3:
  local_34 = 0;
  if (*param_1 == 0x54584b57) {
    uVar2 = param_1[2];
    if (uVar2 < 0x58) {
LAB_10011841:
      if (uVar2 < 0x34) goto LAB_100117d5;
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
      if (iVar1 != 0x54584b57) goto LAB_100117d5;
      uVar2 = param_1[2];
      goto LAB_10011841;
    }
    if ((code *)(ulong)(uint)param_1[0xc] != (code *)0x0) {
      (*(code *)(ulong)(uint)param_1[0xc])(100);
    }
  }
LAB_100117d5:
  bVar4 = uVar3 < 199;
  uVar3 = uVar3 + 1;
  if (uVar3 == 200) {
    return;
  }
  goto LAB_100117f3;
}

#undef local_38
#undef local_34

#define abStack_13 (*(byte (*)[11])(frame + 29))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100118c0
 */

void recovered_100118c0(long param_1,ulong param_2,char *param_3,uint param_4)

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
      goto LAB_100119a6;
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
LAB_100119a6:
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
 * Address: 0x10011ad0
 */

undefined8
recovered_10011ad0(int *param_1,uint param_2,undefined1 param_3,undefined1 param_4,
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

#undef DAT_10012d00
#define DAT_10012d00 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x18U)))
#undef DAT_10012f70
#define DAT_10012f70 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x288U)))
#undef DAT_10012f75
#define DAT_10012f75 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x28dU)))
#undef DAT_10012f7d
#define DAT_10012f7d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x295U)))
#undef DAT_10012f82
#define DAT_10012f82 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x29aU)))
#undef DAT_10012f87
#define DAT_10012f87 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x29fU)))
#undef DAT_10013697
#define DAT_10013697 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x9afU)))
#undef str_1001359a
#define str_1001359a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x8b2U)))
#undef str_100135a5
#define str_100135a5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x8bdU)))
#undef str_100135b4
#define str_100135b4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x8ccU)))
#undef str_100135bf
#define str_100135bf (*(char (*)[1])(((uintptr_t)pf_module_state + 0x8d7U)))
#undef str_100135cd
#define str_100135cd (*(char (*)[1])(((uintptr_t)pf_module_state + 0x8e5U)))
#undef str_100135df
#define str_100135df (*(char (*)[1])(((uintptr_t)pf_module_state + 0x8f7U)))
#undef str_100135e9
#define str_100135e9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x901U)))
#undef str_100135f5
#define str_100135f5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x90dU)))
#undef str_100135ff
#define str_100135ff (*(char (*)[1])(((uintptr_t)pf_module_state + 0x917U)))
#undef str_10013610
#define str_10013610 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x928U)))
#undef str_1001361e
#define str_1001361e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x936U)))
#undef str_10013627
#define str_10013627 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x93fU)))
#undef str_1001369c
#define str_1001369c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x9b4U)))
#undef str_100136a7
#define str_100136a7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x9bfU)))
#undef str_100136b0
#define str_100136b0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x9c8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10011d50
 */

char * recovered_10011d50(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  byte bVar2;
  ushort uVar3;
  char *pcVar4;
  char *pcVar5;

  pcVar4 = str_1001359a;
  if (param_1 != 0) {
    cVar1 = *(char *)(param_1 + 8);
    if (cVar1 == '\f') {
      if (*(char *)(param_1 + 9) == '\x03') {
        bVar2 = *(byte *)(param_1 + 10);
        if (bVar2 < 0x30) {
          if (bVar2 == 0) {
            return &DAT_10012f7d;
          }
          if (bVar2 == 0x10) {
            return &DAT_10012f82;
          }
          if (bVar2 == 0x20) {
            return &DAT_10012f87;
          }
        }
        else {
          if (bVar2 == 0x30) {
            return &DAT_10013697;
          }
          if (bVar2 == 0x80) {
            return str_1001369c;
          }
          if (bVar2 == 0xfe) {
            return str_100136a7;
          }
        }
        return str_100136b0;
      }
    }
    else if (cVar1 == '\x04') {
      if (*(char *)(param_1 + 9) == '\x03') {
        return &DAT_10012f75;
      }
    }
    else if ((cVar1 == '\x01') && (*(char *)(param_1 + 9) == '\x06')) {
      return &DAT_10012f70;
    }
    uVar3 = *(ushort *)(param_1 + 4);
    if (uVar3 < 0x11ab) {
      if (uVar3 == 0x106b) {
        return str_10013627;
      }
      if (uVar3 == 0x10de) {
        pcVar4 = str_100135b4;
        if (cVar1 == '\x03') {
          pcVar4 = str_100135a5;
        }
        return pcVar4;
      }
      if (uVar3 == 0x1180) {
        return str_1001361e;
      }
    }
    else {
      if (uVar3 == 0x11ab) {
        return str_10013610;
      }
      if (uVar3 == 0x14e4) {
        return str_100135ff;
      }
      if (uVar3 == 0x8086) {
        if (cVar1 == '\x03') {
          return str_100135bf;
        }
        if (cVar1 != '\x06') {
          if ((cVar1 == '\f') && (*(char *)(param_1 + 9) == '\x05')) {
            return str_100135e9;
          }
          return str_100135f5;
        }
        pcVar4 = str_100135f5;
        if (*(char *)(param_1 + 9) == '\x01') {
          pcVar4 = str_100135df;
        }
        pcVar5 = str_100135cd;
        if (*(char *)(param_1 + 9) != '\0') {
          pcVar5 = pcVar4;
        }
        return pcVar5;
      }
    }
    if ((byte)(cVar1 - 1U) < 6) {
      pcVar4 = &DAT_10012d00 + *(int *)(&DAT_10012d00 + (ulong)(byte)(cVar1 - 1U) * 4);
    }
  }
  return pcVar4;
}

#undef DAT_10012d00
#undef DAT_10012f70
#undef DAT_10012f75
#undef DAT_10012f7d
#undef DAT_10012f82
#undef DAT_10012f87
#undef DAT_10013697
#undef str_1001359a
#undef str_100135a5
#undef str_100135b4
#undef str_100135bf
#undef str_100135cd
#undef str_100135df
#undef str_100135e9
#undef str_100135f5
#undef str_100135ff
#undef str_10013610
#undef str_1001361e
#undef str_10013627
#undef str_1001369c
#undef str_100136a7
#undef str_100136b0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10011f20
 */

void recovered_10011f20(long param_1,char *param_2,uint param_3)

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
#define DAT_10015000 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2318U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100120e0
 */

undefined8 recovered_100120e0(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if (DAT_10015000 != 0) {
    if (param_1 != 0 && (code *)(ulong)*(uint *)(DAT_10015000 + 0x24) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x10012104. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*(code *)(ulong)*(uint *)(DAT_10015000 + 0x24))();
      return uVar1;
    }
  }
  return 0;
}

#undef DAT_10015000

#undef DAT_10015000
#define DAT_10015000 (*(int * *)(((uintptr_t)pf_module_state + 0x2318U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10012110
 */

undefined8 recovered_10012110(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if ((((DAT_10015000 == (int *)0x0) || (*DAT_10015000 != 0x54584b57)) ||
      ((uint)DAT_10015000[2] < 0xac)) || ((code *)(ulong)(uint)DAT_10015000[0x2a] == (code *)0x0)) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x1001213d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)(ulong)(uint)DAT_10015000[0x2a])();
  return uVar1;
}

#undef DAT_10015000

#define abStack_13 (*(byte (*)[11])(frame + 29))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10012150
 */

void recovered_10012150(long param_1,ulong param_2,char *param_3,long param_4)

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
    if (uVar3 != 0) goto LAB_10012228;
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
LAB_10012228:
      uVar5 = 0;
      do {
        abStack_13[uVar5 + 1] = (char)uVar3 + (char)(uVar3 / 10) * -10 | 0x30;
        uVar6 = uVar5 + 1;
        if (8 < uVar5) break;
        bVar2 = 9 < uVar3;
        uVar5 = uVar6;
        uVar3 = uVar3 / 10;
      } while (bVar2);
LAB_10012278:
      do {
        uVar5 = uVar6 - 1;
        if (param_1 == 0) {
          uVar6 = uVar5;
          if (uVar5 == 0) goto LAB_1001230d;
          goto LAB_10012278;
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
      if (param_1 == 0) goto LAB_1001230d;
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
LAB_1001230d:
  if (*(uint *)(param_4 + 0x14) == 0) {
    if (param_1 == 0) goto LAB_100123fd;
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
LAB_10012368:
    do {
      uVar5 = uVar6 - 1;
      if (param_1 == 0) {
        uVar6 = uVar5;
        if (uVar5 == 0) goto LAB_100123fd;
        goto LAB_10012368;
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
    if (param_1 == 0) goto LAB_100123fd;
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
LAB_100123fd:
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
 * Address: 0x100124b0
 */

bool recovered_100124b0(long param_1,uint param_2)

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
                    if (uVar36 == uVar20) goto LAB_10012890;
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
LAB_10012890:
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
              if (uVar22 == uVar26) goto LAB_10012640;
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
LAB_10012640:
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
