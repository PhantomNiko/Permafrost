/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef LAB_10010000
#define LAB_10010000 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x10b2U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001340
 */

void * recovered_10001340(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return &LAB_10010000;
}

#undef LAB_10010000

#undef DAT_1000f13c
#define DAT_1000f13c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1eeU)))
#undef DAT_1000f26a
#define DAT_1000f26a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x31cU)))
#undef DAT_1000f26f
#define DAT_1000f26f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x321U)))
#undef DAT_1000f273
#define DAT_1000f273 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x325U)))
#undef DAT_1000f277
#define DAT_1000f277 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x329U)))
#undef DAT_1000f27c
#define DAT_1000f27c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x32eU)))
#undef DAT_1000f281
#define DAT_1000f281 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x333U)))
#undef DAT_1000f2ff
#define DAT_1000f2ff (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3b1U)))
#undef DAT_1000f341
#define DAT_1000f341 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3f3U)))
#undef DAT_1000f3ba
#define DAT_1000f3ba (*(uint8_t *)(((uintptr_t)pf_module_state + 0x46cU)))
#undef DAT_1000f3c1
#define DAT_1000f3c1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x473U)))
#undef DAT_1000f4cf
#define DAT_1000f4cf (*(uint8_t *)(((uintptr_t)pf_module_state + 0x581U)))
#undef DAT_10011000
#define DAT_10011000 (*(int * *)(((uintptr_t)pf_module_state + 0x20b2U)))
#undef str_1000f02c
#define str_1000f02c (*(char (*)[1])(((uintptr_t)pf_module_state + 0xdeU)))
#undef str_1000f046
#define str_1000f046 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xf8U)))
#undef str_1000f063
#define str_1000f063 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x115U)))
#undef str_1000f07f
#define str_1000f07f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x131U)))
#undef str_1000f0a0
#define str_1000f0a0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x152U)))
#undef str_1000f0c2
#define str_1000f0c2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x174U)))
#undef str_1000f0e3
#define str_1000f0e3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x195U)))
#undef str_1000f0fc
#define str_1000f0fc (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1aeU)))
#undef str_1000f144
#define str_1000f144 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1f6U)))
#undef str_1000f1ff
#define str_1000f1ff (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2b1U)))
#undef str_1000f244
#define str_1000f244 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2f6U)))
#undef str_1000f25b
#define str_1000f25b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x30dU)))
#undef str_1000f285
#define str_1000f285 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x337U)))
#undef str_1000f28b
#define str_1000f28b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x33dU)))
#undef str_1000f304
#define str_1000f304 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3b6U)))
#undef str_1000f30a
#define str_1000f30a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3bcU)))
#undef str_1000f31e
#define str_1000f31e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3d0U)))
#undef str_1000f32a
#define str_1000f32a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3dcU)))
#undef str_1000f334
#define str_1000f334 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3e6U)))
#undef str_1000f346
#define str_1000f346 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3f8U)))
#undef str_1000f352
#define str_1000f352 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x404U)))
#undef str_1000f380
#define str_1000f380 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x432U)))
#undef str_1000f38a
#define str_1000f38a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x43cU)))
#undef str_1000f39f
#define str_1000f39f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x451U)))
#undef str_1000f3ac
#define str_1000f3ac (*(char (*)[1])(((uintptr_t)pf_module_state + 0x45eU)))
#undef str_1000f3ca
#define str_1000f3ca (*(char (*)[1])(((uintptr_t)pf_module_state + 0x47cU)))
#undef str_1000f3d4
#define str_1000f3d4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x486U)))
#undef str_1000f3e0
#define str_1000f3e0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x492U)))
#undef str_1000f3f2
#define str_1000f3f2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4a4U)))
#undef str_1000f401
#define str_1000f401 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4b3U)))
#undef str_1000f41f
#define str_1000f41f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4d1U)))
#undef str_1000f42d
#define str_1000f42d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4dfU)))
#undef str_1000f438
#define str_1000f438 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4eaU)))
#undef str_1000f449
#define str_1000f449 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4fbU)))
#undef str_1000f459
#define str_1000f459 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x50bU)))
#undef str_1000f463
#define str_1000f463 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x515U)))
#undef str_1000f46c
#define str_1000f46c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x51eU)))
#undef str_1000f478
#define str_1000f478 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x52aU)))
#undef str_1000f48f
#define str_1000f48f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x541U)))
#undef str_1000f4b7
#define str_1000f4b7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x569U)))
#undef str_1000f4be
#define str_1000f4be (*(char (*)[1])(((uintptr_t)pf_module_state + 0x570U)))
#undef str_1000f4c4
#define str_1000f4c4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x576U)))
#undef str_1000f4d5
#define str_1000f4d5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x587U)))
#undef str_1000f4ed
#define str_1000f4ed (*(char (*)[1])(((uintptr_t)pf_module_state + 0x59fU)))
#undef str_1000f508
#define str_1000f508 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5baU)))
#undef str_1000f534
#define str_1000f534 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5e6U)))
#undef str_1000f554
#define str_1000f554 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x606U)))
#undef str_1000f585
#define str_1000f585 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x637U)))
#undef str_1000f592
#define str_1000f592 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x644U)))
#undef str_1000f5a4
#define str_1000f5a4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x656U)))
#undef str_1000f5ae
#define str_1000f5ae (*(char (*)[1])(((uintptr_t)pf_module_state + 0x660U)))
#undef str_1000f5bb
#define str_1000f5bb (*(char (*)[1])(((uintptr_t)pf_module_state + 0x66dU)))
#undef str_1000f5c8
#define str_1000f5c8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x67aU)))
#undef str_1000f5d9
#define str_1000f5d9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x68bU)))
#undef str_1000f5e9
#define str_1000f5e9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x69bU)))
#undef str_1000f5f6
#define str_1000f5f6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6a8U)))
#undef str_1000f603
#define str_1000f603 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6b5U)))
#undef str_1000f60f
#define str_1000f60f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6c1U)))
#undef str_1000f618
#define str_1000f618 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6caU)))
#undef str_1000f62b
#define str_1000f62b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6ddU)))
#undef str_1000f650
#define str_1000f650 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x702U)))
#undef str_1000fa91
#define str_1000fa91 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb43U)))
#undef str_1000fabf
#define str_1000fabf (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb71U)))
#undef str_1000fac7
#define str_1000fac7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb79U)))
#undef str_1000fb05
#define str_1000fb05 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xbb7U)))
#undef str_1000fb28
#define str_1000fb28 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xbdaU)))
#undef str_1000fb49
#define str_1000fb49 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xbfbU)))
#undef str_1000fb74
#define str_1000fb74 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc26U)))
#undef str_1000fb8b
#define str_1000fb8b (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc3dU)))
#undef str_1000fba8
#define str_1000fba8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc5aU)))
#undef str_1000fbc0
#define str_1000fbc0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc72U)))
#undef str_1000fbde
#define str_1000fbde (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc90U)))
#undef str_1000fbfd
#define str_1000fbfd (*(char (*)[1])(((uintptr_t)pf_module_state + 0xcafU)))
#undef str_1000fc0f
#define str_1000fc0f (*(char (*)[1])(((uintptr_t)pf_module_state + 0xcc1U)))
#undef str_1000fc31
#define str_1000fc31 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xce3U)))
#undef str_1000fc4d
#define str_1000fc4d (*(char (*)[1])(((uintptr_t)pf_module_state + 0xcffU)))
#undef str_1000fc71
#define str_1000fc71 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xd23U)))
#undef str_1000fc86
#define str_1000fc86 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xd38U)))
#undef str_1000fc9c
#define str_1000fc9c (*(char (*)[1])(((uintptr_t)pf_module_state + 0xd4eU)))
#undef str_1000fcb5
#define str_1000fcb5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xd67U)))
#undef str_1000fd09
#define str_1000fd09 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xdbbU)))
#undef str_1000fd15
#define str_1000fd15 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xdc7U)))
#undef str_1000fd62
#define str_1000fd62 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xe14U)))
#undef str_1000fd83
#define str_1000fd83 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xe35U)))
#undef str_1000fd96
#define str_1000fd96 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xe48U)))
#undef str_1000fe05
#define str_1000fe05 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xeb7U)))
#undef str_1000fe14
#define str_1000fe14 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xec6U)))
#undef str_1000fe27
#define str_1000fe27 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xed9U)))
#undef str_1000fe63
#define str_1000fe63 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xf15U)))
#undef str_1000fe86
#define str_1000fe86 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xf38U)))
#undef str_1000fe9d
#define str_1000fe9d (*(char (*)[1])(((uintptr_t)pf_module_state + 0xf4fU)))
#undef str_1000fee8
#define str_1000fee8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xf9aU)))
#undef str_1000ff0d
#define str_1000ff0d (*(char (*)[1])(((uintptr_t)pf_module_state + 0xfbfU)))
#undef str_1000ff22
#define str_1000ff22 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xfd4U)))
#undef str_1000ff3e
#define str_1000ff3e (*(char (*)[1])(((uintptr_t)pf_module_state + 0xff0U)))
#undef str_1000ff49
#define str_1000ff49 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xffbU)))
#undef str_1000ff5f
#define str_1000ff5f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1011U)))
#undef str_1000ff72
#define str_1000ff72 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1024U)))
#undef str_1000ff98
#define str_1000ff98 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x104aU)))
#define auStack_12c (*(undefined1 (*)[240])(frame + 1268))
#define local_60c (*(undefined1 (*)[100])(frame + 20))
#define local_5a8 (*(uint *)(frame + 120))
#define local_564 (*(undefined2 *)(frame + 188))
#define local_264 (*(undefined1 * *)(frame + 956))
#define local_260 (*(uint *)(frame + 960))
#define local_25c (*(undefined4 *)(frame + 964))
#define local_258 (*(undefined4 *)(frame + 968))
#define local_254 (*(uint *)(frame + 972))
#define local_250 (*(uint *)(frame + 976))
#define local_24c (*(uint *)(frame + 980))
#define local_248 (*(uint *)(frame + 984))
#define local_244 (*(uint *)(frame + 988))
#define local_240 (*(uint *)(frame + 992))
#define local_23c (*(uint *)(frame + 996))
#define local_238 (*(uint *)(frame + 1000))
#define local_234 (*(uint *)(frame + 1004))
#define local_230 (*(uint *)(frame + 1008))
#define local_22c (*(uint *)(frame + 1012))
#define local_228 (*(undefined4 *)(frame + 1016))
#define local_224 (*(undefined4 *)(frame + 1020))
#define local_220 (*(undefined4 *)(frame + 1024))
#define local_21c (*(int *)(frame + 1028))
#define local_218 (*(int *)(frame + 1032))
#define local_214 (*(int *)(frame + 1036))
#define local_210 (*(uint *)(frame + 1040))
#define local_20c (*(uint *)(frame + 1044))
#define local_208 (*(uint *)(frame + 1048))
#define local_204 (*(undefined4 *)(frame + 1052))
#define local_200 (*(uint (*)[2])(frame + 1056))
#define local_1f8 (*(uint *)(frame + 1064))
#define local_1f4 (*(int *)(frame + 1068))
#define local_1f0 (*(int *)(frame + 1072))
#define local_1ec (*(int *)(frame + 1076))
#define local_1cc (*(uint *)(frame + 1108))
#define local_1c8 (*(uint *)(frame + 1112))
#define local_1c4 (*(uint *)(frame + 1116))
#define local_1c0 (*(uint * *)(frame + 1120))
#define local_1bc (*(undefined4 *)(frame + 1124))
#define local_1b8 (*(int *)(frame + 1128))
#define local_1b4 (*(int *)(frame + 1132))
#define local_1b0 (*(int *)(frame + 1136))
#define local_1ac (*(char (*)[64])(frame + 1140))
#define local_16c (*(char (*)[64])(frame + 1204))
#define local_3c (*(uint *)(frame + 1508))
#define local_38 (*(uint *)(frame + 1512))
#define local_34 (*(uint *)(frame + 1516))
#define local_30 (*(undefined4 *)(frame + 1520))
#define local_2c (*(uint (*)[3])(frame + 1524))
#define local_20 (*(uint *)(frame + 1536))
#define local_19 (*(char *)(frame + 1543))
#define local_18 (*(uint *)(frame + 1544))
#define local_14 (*(uint *)(frame + 1548))
#define cStack_565 (*(char *)(frame + 187))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001350
 */

int recovered_10001350(int *api)

{
  unsigned char frame[1600] __attribute__((aligned(16))) = {0};

  code *pcVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  char cVar6;
  undefined1 in_DL;
  byte bVar7;
  byte bVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  char *pcVar12;
  uint uVar13;
  bool bVar14;

  if (api == (int *)0x0) {
    return 0;
  }
  if (*api != 0x54584b57) {
    return 0;
  }
  uVar10 = api[2];
  if (uVar10 < 0x10) {
    return 0;
  }
  PF_PART1(local_564, 0) = 0;
  uVar11 = 0;
  do {
    uVar2 = uVar11;
    uVar11 = uVar2 + 1;
  } while (*(char *)((int)&local_564 + uVar2) != '\0');
  if (uVar2 + 1 < 0x70) {
    cVar6 = 'a';
    pcVar5 = str_1000f02c;
    do {
      pcVar5 = pcVar5 + 1;
      *(char *)((int)&local_564 + uVar2) = cVar6;
      uVar2 = uVar2 + 1;
      cVar6 = *pcVar5;
      if (cVar6 == '\0') break;
    } while (uVar2 < 0x6f);
  }
  *(undefined1 *)((int)&local_564 + uVar2) = 0;
  uVar11 = 0;
  do {
    uVar2 = uVar11;
    uVar11 = uVar2 + 1;
  } while (*(char *)((int)&local_564 + uVar2) != '\0');
  if (uVar2 + 1 < 0x70) {
    cVar6 = ':';
    pcVar5 = &DAT_1000f13c;
    do {
      *(char *)((int)&local_564 + uVar2) = cVar6;
      uVar2 = uVar2 + 1;
      cVar6 = *pcVar5;
      if (cVar6 == '\0') break;
      pcVar5 = pcVar5 + 1;
    } while (uVar2 < 0x6f);
  }
  *(undefined1 *)((int)&local_564 + uVar2) = 0;
  uVar11 = api[1];
  if (uVar11 < 1000000) {
    if (uVar11 == 0) {
      uVar11 = 0;
      do {
        uVar2 = uVar11;
        uVar11 = uVar2 + 1;
      } while (*(char *)((int)&local_564 + uVar2) != '\0');
      if (uVar2 + 1 < 0x70) {
        *(undefined2 *)((int)&local_564 + uVar2) = 0x30;
      }
    }
    else {
      local_14 = uVar10;
      uVar2 = 0;
      do {
        local_1ac[uVar2 - 0x10] = (char)uVar11 + (char)(uVar11 / 10) * -10 | 0x30;
        uVar10 = local_14;
        uVar9 = uVar2 + 1;
        if (8 < uVar2) break;
        bVar14 = 9 < uVar11;
        uVar2 = uVar9;
        uVar11 = uVar11 / 10;
      } while (bVar14);
      do {
        iVar3 = uVar9 - 0x11;
        uVar9 = uVar9 - 1;
        uVar11 = 0;
        do {
          uVar2 = uVar11;
          uVar11 = uVar2 + 1;
        } while (*(char *)((int)&local_564 + uVar2) != '\0');
        if (uVar2 + 1 < 0x70) {
          *(char *)((int)&local_564 + uVar2) = local_1ac[iVar3];
          *(undefined1 *)((int)&local_564 + uVar2 + 1) = 0;
        }
      } while (uVar9 != 0);
    }
  }
  else {
    local_14 = uVar10;
    local_18 = uVar11 % 1000;
    uVar10 = 0;
    uVar2 = uVar11 / 1000000;
    do {
      local_1ac[uVar10 - 0x10] = (char)uVar2 + (char)(uVar2 / 10) * -10 | 0x30;
      uVar9 = uVar10 + 1;
      if (8 < uVar10) break;
      bVar14 = 9 < uVar2;
      uVar10 = uVar9;
      uVar2 = uVar2 / 10;
    } while (bVar14);
    do {
      iVar3 = uVar9 - 0x11;
      uVar9 = uVar9 - 1;
      uVar10 = 0;
      do {
        uVar2 = uVar10;
        uVar10 = uVar2 + 1;
      } while (*(char *)((int)&local_564 + uVar2) != '\0');
      if (uVar2 + 1 < 0x70) {
        *(char *)((int)&local_564 + uVar2) = local_1ac[iVar3];
        *(undefined1 *)((int)&local_564 + uVar2 + 1) = 0;
      }
    } while (uVar9 != 0);
    uVar10 = 0;
    do {
      uVar2 = uVar10;
      uVar10 = uVar2 + 1;
    } while (*(char *)((int)&local_564 + uVar2) != '\0');
    if (uVar10 < 0x70) {
      *(undefined1 *)((int)&local_564 + uVar2) = 0x2e;
      uVar2 = uVar10;
    }
    *(undefined1 *)((int)&local_564 + uVar2) = 0;
    uVar10 = local_14;
    uVar2 = local_18;
    uVar11 = (uVar11 / 1000) % 1000;
    if (uVar11 == 0) {
      uVar11 = 0;
      do {
        uVar9 = uVar11;
        uVar11 = uVar9 + 1;
      } while (*(char *)((int)&local_564 + uVar9) != '\0');
      if (uVar9 + 1 < 0x70) {
        *(undefined2 *)((int)&local_564 + uVar9) = 0x30;
      }
    }
    else {
      uVar9 = 0;
      do {
        local_1ac[uVar9 - 0x10] = (char)uVar11 + (char)(uVar11 / 10) * -10 | 0x30;
        uVar10 = local_14;
        uVar2 = local_18;
        uVar13 = uVar9 + 1;
        if (8 < uVar9) break;
        bVar14 = 9 < uVar11;
        uVar11 = uVar11 / 10;
        uVar9 = uVar13;
      } while (bVar14);
      do {
        iVar3 = uVar13 - 0x11;
        uVar13 = uVar13 - 1;
        uVar11 = 0;
        do {
          uVar9 = uVar11;
          uVar11 = uVar9 + 1;
        } while (*(char *)((int)&local_564 + uVar9) != '\0');
        if (uVar9 + 1 < 0x70) {
          *(char *)((int)&local_564 + uVar9) = local_1ac[iVar3];
          *(undefined1 *)((int)&local_564 + uVar9 + 1) = 0;
        }
      } while (uVar13 != 0);
    }
    if (uVar2 != 0) {
      uVar10 = 0;
      do {
        uVar11 = uVar10;
        uVar10 = uVar11 + 1;
      } while (*(char *)((int)&local_564 + uVar11) != '\0');
      if (uVar10 < 0x70) {
        *(undefined1 *)((int)&local_564 + uVar11) = 0x2e;
        uVar11 = uVar10;
      }
      *(undefined1 *)((int)&local_564 + uVar11) = 0;
      uVar11 = 0;
      do {
        local_1ac[uVar11 - 0x10] = (byte)(uVar2 % 10) | 0x30;
        uVar10 = local_14;
        uVar9 = uVar11 + 1;
        if (8 < uVar11) break;
        bVar14 = 9 < uVar2;
        uVar2 = uVar2 / 10;
        uVar11 = uVar9;
      } while (bVar14);
      do {
        iVar3 = uVar9 - 0x11;
        uVar9 = uVar9 - 1;
        uVar11 = 0;
        do {
          uVar2 = uVar11;
          uVar11 = uVar2 + 1;
        } while (*(char *)((int)&local_564 + uVar2) != '\0');
        if (uVar2 + 1 < 0x70) {
          *(char *)((int)&local_564 + uVar2) = local_1ac[iVar3];
          *(undefined1 *)((int)&local_564 + uVar2 + 1) = 0;
        }
      } while (uVar9 != 0);
    }
  }
  uVar11 = 0;
  do {
    uVar2 = uVar11;
    uVar11 = uVar2 + 1;
  } while (*(char *)((int)&local_564 + uVar2) != '\0');
  if (uVar2 + 1 < 0x70) {
    cVar6 = ' ';
    pcVar5 = str_1000f144;
    do {
      pcVar5 = pcVar5 + 1;
      *(char *)((int)&local_564 + uVar2) = cVar6;
      uVar2 = uVar2 + 1;
      cVar6 = *pcVar5;
      if (cVar6 == '\0') break;
    } while (uVar2 < 0x6f);
  }
  *(undefined1 *)((int)&local_564 + uVar2) = 0;
  if ((uVar10 < 0x2c) || ((code *)api[10] == (code *)0x0)) {
LAB_100017d2:
    bVar14 = true;
    if ((0x3f < (uint)api[2]) && ((code *)api[0xf] != (code *)0x0)) {
      iVar3 = (*(code *)api[0xf])(local_60c);
      bVar14 = iVar3 == 0;
    }
  }
  else {
    (*(code *)api[10])(&local_564);
    bVar14 = true;
    if (*api == 0x54584b57) goto LAB_100017d2;
  }
  local_260 = 0;
  local_25c = 0;
  local_258 = 0;
  local_254 = 0;
  local_250 = 0;
  local_24c = 0;
  local_248 = 0;
  local_244 = 0;
  local_240 = 0;
  local_23c = 0;
  local_238 = 0;
  local_234 = 0;
  local_230 = 0;
  local_22c = 0;
  local_228 = 0;
  local_224 = 0;
  local_220 = 0;
  local_21c = 0;
  local_218 = 0;
  local_214 = 0;
  local_264 = (undefined1 *)0x0;
  if (!bVar14) {
    local_264 = local_60c;
  }
  recovered_10007f70((int)local_264,(uint *)0x0,(undefined1 *)&local_564);
  if ((code *)api[3] == (code *)0x0) {
    return 0;
  }
  iVar3 = (*(code *)api[3])(str_1000f046,str_1000f063,&local_564);
  if (iVar3 == 0) {
    return 0;
  }
  if ((code *)api[4] != (code *)0x0) {
    if (local_5a8 < 3) {
      local_5a8 = 2;
    }
    else if (0x3f < local_5a8) {
      local_5a8 = 0x40;
    }
    uVar10 = 2;
    if (!bVar14) {
      uVar10 = local_5a8;
    }
    (*(code *)api[4])(uVar10,uVar10 << 7);
  }
  if ((code *)api[6] != (code *)0x0) {
    (*(code *)api[6])(0x100,0x200,0x200,0x20,3);
  }
  local_30 = 0;
  if (((*api == 0x54584b57) && (0x57 < (uint)api[2])) && ((code *)api[0x15] != (code *)0x0)) {
    (*(code *)api[0x15])(0x304,1,&local_30);
    uVar11 = 8;
    uVar10 = 0;
    do {
      local_1bc = 0;
      if (((*api != 0x54584b57) || ((uint)api[2] < 0x58)) ||
         (((code *)api[0x15] == (code *)0x0 ||
          (iVar3 = (*(code *)api[0x15])(0x304,1,&local_1bc), iVar3 == 0)))) break;
      if ((local_1bc & 4) == 0) goto LAB_10004a21;
      if (((*api == 0x54584b57) && (0x33 < (uint)api[2])) && ((code *)api[0xc] != (code *)0x0)) {
        (*(code *)api[0xc])(uVar11);
      }
      uVar11 = uVar11 << (uVar11 < 0x1000 && 9 < uVar10);
      uVar10 = uVar10 + 1;
    } while (uVar10 != 0x18);
    uVar11 = 8;
    uVar10 = 0;
    do {
      local_1bc = 0;
      if ((((*api != 0x54584b57) || ((uint)api[2] < 0x58)) || ((code *)api[0x15] == (code *)0x0)) ||
         (iVar3 = (*(code *)api[0x15])(0x304,1,&local_1bc), iVar3 == 0)) break;
      if ((local_1bc & 2) == 0) {
        if (((*api == 0x54584b57) && (0x5b < (uint)api[2])) &&
           (((code *)api[0x16] != (code *)0x0 &&
            (iVar3 = (*(code *)api[0x16])(0x304,1,0x10), iVar3 != 0)))) {
          uVar11 = 8;
          uVar10 = 0;
          goto LAB_100049a8;
        }
        break;
      }
      if (((*api == 0x54584b57) && (0x33 < (uint)api[2])) && ((code *)api[0xc] != (code *)0x0)) {
        (*(code *)api[0xc])(uVar11);
      }
      uVar11 = uVar11 << (uVar11 < 0x1000 && 9 < uVar10);
      uVar10 = uVar10 + 1;
    } while (uVar10 != 0x18);
    goto LAB_10006842;
  }
  uVar10 = 0;
  do {
    uVar11 = uVar10;
    uVar10 = uVar11 + 1;
  } while (*(char *)((int)&local_564 + uVar11) != '\0');
  if (uVar11 + 1 < 0x300) {
    cVar6 = ' ';
    pcVar5 = str_1000f30a;
    do {
      pcVar5 = pcVar5 + 1;
      *(char *)((int)&local_564 + uVar11) = cVar6;
      uVar11 = uVar11 + 1;
      cVar6 = *pcVar5;
      if (cVar6 == '\0') break;
    } while (uVar11 < 0x2ff);
  }
  *(undefined1 *)((int)&local_564 + uVar11) = 0;
  goto LAB_100019ff;
  while( true ) {
    if ((local_1bc & 4) == 0) goto LAB_10004a21;
    if (((*api == 0x54584b57) && (0x33 < (uint)api[2])) && ((code *)api[0xc] != (code *)0x0)) {
      (*(code *)api[0xc])(uVar11);
    }
    uVar11 = uVar11 << (uVar11 < 0x1000 && 9 < uVar10);
    uVar10 = uVar10 + 1;
    if (uVar10 == 0x18) break;
LAB_100049a8:
    local_1bc = 0;
    if (((*api != 0x54584b57) || ((uint)api[2] < 0x58)) ||
       (((code *)api[0x15] == (code *)0x0 ||
        (iVar3 = (*(code *)api[0x15])(0x304,1,&local_1bc), iVar3 == 0)))) break;
  }
  goto LAB_10006842;
  while( true ) {
    *(undefined1 *)((int)local_2c + local_18) = (undefined1)local_200[0];
    uVar10 = local_18 + 1;
    local_14 = CONCAT31((int3)(local_18 >> 8),2 < local_18);
    local_18 = uVar10;
    if (uVar10 == 4) break;
LAB_10005642:
    local_200[0] = 0;
    uVar11 = 8;
    uVar10 = 0;
    while( true ) {
      local_1bc = 0;
      if (((*api != 0x54584b57) || ((uint)api[2] < 0x58)) ||
         (((code *)api[0x15] == (code *)0x0 ||
          (iVar3 = (*(code *)api[0x15])(0x304,1,&local_1bc), iVar3 == 0)))) goto LAB_100067ad;
      if ((local_1bc & 1) != 0) break;
      if (((*api == 0x54584b57) && (0x33 < (uint)api[2])) && ((code *)api[0xc] != (code *)0x0)) {
        (*(code *)api[0xc])(uVar11);
      }
      uVar11 = uVar11 << (uVar11 < 0x1000 && 9 < uVar10);
      uVar10 = uVar10 + 1;
      if (uVar10 == 0x18) goto LAB_100067ad;
    }
    if (((*api != 0x54584b57) || ((uint)api[2] < 0x58)) ||
       (((code *)api[0x15] == (code *)0x0 ||
        (iVar3 = (*(code *)api[0x15])(0x300,1,local_200), iVar3 == 0)))) {
LAB_100067ad:
      if ((local_14 & 1) == 0) goto LAB_10006842;
      break;
    }
  }
  uVar10 = 0;
  do {
    uVar11 = uVar10;
    uVar10 = uVar11 + 1;
  } while (*(char *)((int)&local_564 + uVar11) != '\0');
  if (uVar11 + 1 < 0x300) {
    cVar6 = ' ';
    pcVar5 = str_1000f334;
    do {
      pcVar5 = pcVar5 + 1;
      *(char *)((int)&local_564 + uVar11) = cVar6;
      uVar11 = uVar11 + 1;
      cVar6 = *pcVar5;
      if (cVar6 == '\0') break;
    } while (uVar11 < 0x2ff);
  }
  local_14 = (local_2c[0] >> 8 & 0xff) << 0x10 | local_2c[0] << 0x18 |
             (local_2c[0] >> 0x10 & 0xff) << 8 | local_2c[0] >> 0x18;
  *(undefined1 *)((int)&local_564 + uVar11) = 0;
  uVar10 = 0;
  do {
    uVar11 = uVar10;
    uVar10 = uVar11 + 1;
  } while (*(char *)((int)&local_564 + uVar11) != '\0');
  if (uVar10 < 0x300) {
    *(undefined1 *)((int)&local_564 + uVar11) = 0x20;
    uVar11 = uVar10;
  }
  *(undefined1 *)((int)&local_564 + uVar11) = 0;
  uVar10 = 0;
  do {
    uVar11 = uVar10;
    uVar10 = uVar11 + 1;
  } while (*(char *)((int)&local_564 + uVar11) != '\0');
  if (uVar11 + 1 < 0x300) {
    cVar6 = 's';
    pcVar5 = &DAT_1000f341;
    do {
      *(char *)((int)&local_564 + uVar11) = cVar6;
      uVar11 = uVar11 + 1;
      cVar6 = *pcVar5;
      if (cVar6 == '\0') break;
      pcVar5 = pcVar5 + 1;
    } while (uVar11 < 0x2ff);
  }
  *(undefined1 *)((int)&local_564 + uVar11) = 0;
  uVar10 = 0;
  do {
    uVar11 = uVar10;
    uVar10 = uVar11 + 1;
  } while (*(char *)((int)&local_564 + uVar11) != '\0');
  if (uVar10 < 0x300) {
    *(undefined1 *)((int)&local_564 + uVar11) = 0x3d;
    uVar11 = uVar10;
  }
  *(undefined1 *)((int)&local_564 + uVar11) = 0;
  uVar10 = 0;
  do {
    uVar11 = uVar10;
    uVar10 = uVar11 + 1;
  } while (*(char *)((int)&local_564 + uVar11) != '\0');
  if (uVar11 + 1 < 0x300) {
    *(undefined2 *)((int)&local_564 + uVar11) = 0x30;
  }
  uVar10 = 0;
  do {
    uVar11 = uVar10;
    uVar10 = uVar11 + 1;
  } while (*(char *)((int)&local_564 + uVar11) != '\0');
  if (uVar11 + 1 < 0x300) {
    *(undefined2 *)((int)&local_564 + uVar11) = 0x30;
  }
  uVar10 = 0;
  do {
    uVar11 = uVar10;
    uVar10 = uVar11 + 1;
  } while (*(char *)((int)&local_564 + uVar11) != '\0');
  if (uVar11 + 1 < 0x300) {
    *(undefined2 *)((int)&local_564 + uVar11) = 0x30;
  }
  uVar10 = 0;
  do {
    uVar11 = uVar10;
    uVar10 = uVar11 + 1;
  } while (*(char *)((int)&local_564 + uVar11) != '\0');
  if (uVar11 + 1 < 0x300) {
    *(undefined2 *)((int)&local_564 + uVar11) = 0x30;
  }
  uVar10 = 0;
  do {
    uVar11 = uVar10;
    uVar10 = uVar11 + 1;
  } while (*(char *)((int)&local_564 + uVar11) != '\0');
  if (uVar11 + 1 < 0x300) {
    *(undefined2 *)((int)&local_564 + uVar11) = 0x30;
  }
  uVar10 = 0;
  do {
    uVar11 = uVar10;
    uVar10 = uVar11 + 1;
  } while (*(char *)((int)&local_564 + uVar11) != '\0');
  if (uVar11 + 1 < 0x300) {
    *(undefined2 *)((int)&local_564 + uVar11) = 0x33;
  }
  uVar10 = 0;
  do {
    uVar11 = uVar10;
    uVar10 = uVar11 + 1;
  } while (*(char *)((int)&local_564 + uVar11) != '\0');
  if (uVar11 + 1 < 0x300) {
    *(undefined2 *)((int)&local_564 + uVar11) = 0x30;
  }
  uVar10 = 0;
  do {
    uVar11 = uVar10;
    uVar10 = uVar11 + 1;
  } while (*(char *)((int)&local_564 + uVar11) != '\0');
  if (uVar11 + 1 < 0x300) {
    *(undefined2 *)((int)&local_564 + uVar11) = 0x30;
  }
  bVar7 = (byte)local_30;
  uVar10 = 0;
  do {
    uVar11 = uVar10;
    uVar10 = uVar11 + 1;
  } while (*(char *)((int)&local_564 + uVar11) != '\0');
  if (uVar10 < 0x300) {
    *(undefined1 *)((int)&local_564 + uVar11) = 0x20;
    uVar11 = uVar10;
  }
  *(undefined1 *)((int)&local_564 + uVar11) = 0;
  uVar10 = 0;
  do {
    uVar11 = uVar10;
    uVar10 = uVar11 + 1;
  } while (*(char *)((int)&local_564 + uVar11) != '\0');
  if (uVar11 + 1 < 0x300) {
    cVar6 = 's';
    pcVar5 = str_1000f32a;
    do {
      pcVar5 = pcVar5 + 1;
      *(char *)((int)&local_564 + uVar11) = cVar6;
      uVar11 = uVar11 + 1;
      cVar6 = *pcVar5;
      if (cVar6 == '\0') break;
    } while (uVar11 < 0x2ff);
  }
  *(undefined1 *)((int)&local_564 + uVar11) = 0;
  uVar10 = 0;
  do {
    uVar11 = uVar10;
    uVar10 = uVar11 + 1;
  } while (*(char *)((int)&local_564 + uVar11) != '\0');
  if (uVar10 < 0x300) {
    *(undefined1 *)((int)&local_564 + uVar11) = 0x3d;
    uVar11 = uVar10;
  }
  *(undefined1 *)((int)&local_564 + uVar11) = 0;
  iVar3 = 8;
  do {
    bVar8 = bVar7 >> ((char)iVar3 * '\x04' - 4U & 0x1f) & 0xf;
    if (bVar8 < 10) {
      bVar8 = bVar8 | 0x30;
    }
    else {
      bVar8 = bVar8 + 0x37;
    }
    uVar10 = 0;
    do {
      uVar11 = uVar10;
      uVar10 = uVar11 + 1;
    } while (*(char *)((int)&local_564 + uVar11) != '\0');
    if (uVar11 + 1 < 0x300) {
      *(byte *)((int)&local_564 + uVar11) = bVar8;
      *(undefined1 *)((int)&local_564 + uVar11 + 1) = 0;
    }
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  uVar10 = 0;
  do {
    uVar11 = uVar10;
    uVar10 = uVar11 + 1;
  } while (*(char *)((int)&local_564 + uVar11) != '\0');
  if (uVar10 < 0x300) {
    *(undefined1 *)((int)&local_564 + uVar11) = 0x20;
    uVar11 = uVar10;
  }
  *(undefined1 *)((int)&local_564 + uVar11) = 0;
  uVar10 = 0;
  do {
    uVar11 = uVar10;
    uVar10 = uVar11 + 1;
  } while (*(char *)((int)&local_564 + uVar11) != '\0');
  if (uVar11 + 1 < 0x300) {
    cVar6 = 's';
    pcVar5 = str_1000f346;
    do {
      pcVar5 = pcVar5 + 1;
      *(char *)((int)&local_564 + uVar11) = cVar6;
      uVar11 = uVar11 + 1;
      cVar6 = *pcVar5;
      if (cVar6 == '\0') break;
    } while (uVar11 < 0x2ff);
  }
  *(undefined1 *)((int)&local_564 + uVar11) = 0;
  uVar10 = 0;
  do {
    uVar11 = uVar10;
    uVar10 = uVar11 + 1;
  } while (*(char *)((int)&local_564 + uVar11) != '\0');
  if (uVar10 < 0x300) {
    *(undefined1 *)((int)&local_564 + uVar11) = 0x3d;
    uVar11 = uVar10;
  }
  *(undefined1 *)((int)&local_564 + uVar11) = 0;
  if (local_14 == 0) {
    uVar10 = 0;
    do {
      uVar11 = uVar10;
      uVar10 = uVar11 + 1;
    } while (*(char *)((int)&local_564 + uVar11) != '\0');
    if (uVar11 + 1 < 0x300) {
      *(undefined2 *)((int)&local_564 + uVar11) = 0x30;
    }
  }
  else {
    uVar10 = 0;
    uVar11 = local_14;
    do {
      local_1ac[uVar10 - 0x10] = (byte)(uVar11 % 10) | 0x30;
      uVar2 = uVar10 + 1;
      if (8 < uVar10) break;
      bVar14 = 9 < uVar11;
      uVar10 = uVar2;
      uVar11 = uVar11 / 10;
    } while (bVar14);
    do {
      iVar3 = uVar2 - 0x11;
      uVar2 = uVar2 - 1;
      uVar10 = 0;
      do {
        uVar11 = uVar10;
        uVar10 = uVar11 + 1;
      } while (*(char *)((int)&local_564 + uVar11) != '\0');
      if (uVar11 + 1 < 0x300) {
        *(char *)((int)&local_564 + uVar11) = local_1ac[iVar3];
        *(undefined1 *)((int)&local_564 + uVar11 + 1) = 0;
      }
    } while (uVar2 != 0);
  }
  local_1bc = local_1bc & 0xffffff00;
  uVar10 = 0;
  do {
    uVar11 = uVar10;
    uVar10 = uVar11 + 1;
  } while (local_1ac[uVar11 - 0x10] != '\0');
  if (uVar11 + 1 < 0xa0) {
    cVar6 = 'i';
    pcVar5 = str_1000f352;
    do {
      pcVar5 = pcVar5 + 1;
      local_1ac[uVar11 - 0x10] = cVar6;
      uVar11 = uVar11 + 1;
      cVar6 = *pcVar5;
      if (cVar6 == '\0') break;
    } while (uVar11 < 0x9f);
  }
  bVar14 = local_14 == 0;
  local_1ac[uVar11 - 0x10] = '\0';
  if (bVar14) {
    uVar10 = 0;
    do {
      uVar11 = uVar10;
      uVar10 = uVar11 + 1;
    } while (local_1ac[uVar11 - 0x10] != '\0');
    if (uVar11 + 1 < 0xa0) {
      (local_1ac + (uVar11 - 0x10))[0] = '0';
      (local_1ac + (uVar11 - 0x10))[1] = '\0';
    }
  }
  else {
    uVar10 = 0;
    do {
      uVar9 = local_14 / 10;
      *(byte *)((int)local_200 + uVar10) = (byte)(local_14 % 10) | 0x30;
      uVar2 = local_14;
      uVar11 = uVar10 + 1;
      if (8 < uVar10) break;
      local_14 = uVar9;
      uVar10 = uVar11;
    } while (9 < uVar2);
    do {
      iVar3 = uVar11 - 1;
      uVar11 = uVar11 - 1;
      uVar10 = 0;
      do {
        uVar2 = uVar10;
        uVar10 = uVar2 + 1;
      } while (local_1ac[uVar2 - 0x10] != '\0');
      if (uVar2 + 1 < 0xa0) {
        local_1ac[uVar2 - 0x10] = *(char *)((int)local_200 + iVar3);
        local_1ac[uVar2 - 0xf] = '\0';
      }
    } while (uVar11 != 0);
  }
  if ((code *)api[3] != (code *)0x0) {
    (*(code *)api[3])(str_1000f07f,str_1000f380,&local_1bc);
  }
  local_224 = 1;
  local_2c[0] = 0;
  local_30 = 0;
  local_1c4 = 0;
  local_38 = 0;
  goto LAB_10001a28;
LAB_10004a21:
  uVar11 = 8;
  uVar10 = 0;
  do {
    local_1bc = 0;
    if ((((*api != 0x54584b57) || ((uint)api[2] < 0x58)) || ((code *)api[0x15] == (code *)0x0)) ||
       (iVar3 = (*(code *)api[0x15])(0x304,1,&local_1bc), iVar3 == 0)) break;
    if ((local_1bc & 2) == 0) {
      if (((((*api == 0x54584b57) && (0x5b < (uint)api[2])) &&
           (((code *)api[0x16] != (code *)0x0 &&
            ((iVar3 = (*(code *)api[0x16])(0x304,1,0x10), iVar3 != 0 &&
             (iVar3 = recovered_1000d7c0(api,0x23), iVar3 != 0)))))) &&
          (iVar3 = recovered_1000d7c0(api,0x4b), iVar3 != 0)) &&
         (((iVar3 = recovered_1000d7c0(api,0x45), iVar3 != 0 &&
           (iVar3 = recovered_1000d7c0(api,0x59), iVar3 != 0)) &&
          (iVar3 = recovered_1000d7c0(api,4), iVar3 != 0)))) {
        local_14 = 0;
        local_18 = 0;
        goto LAB_10005642;
      }
      break;
    }
    if (((*api == 0x54584b57) && (0x33 < (uint)api[2])) && ((code *)api[0xc] != (code *)0x0)) {
      (*(code *)api[0xc])(uVar11);
    }
    uVar11 = uVar11 << (uVar11 < 0x1000 && 9 < uVar10);
    uVar10 = uVar10 + 1;
  } while (uVar10 != 0x18);
LAB_10006842:
  uVar10 = 0;
  do {
    uVar11 = uVar10;
    uVar10 = uVar11 + 1;
  } while (*(char *)((int)&local_564 + uVar11) != '\0');
  if (uVar11 + 1 < 0x300) {
    cVar6 = ' ';
    pcVar5 = str_1000f31e;
    do {
      pcVar5 = pcVar5 + 1;
      *(char *)((int)&local_564 + uVar11) = cVar6;
      uVar11 = uVar11 + 1;
      cVar6 = *pcVar5;
      if (cVar6 == '\0') break;
    } while (uVar11 < 0x2ff);
  }
  *(undefined1 *)((int)&local_564 + uVar11) = 0;
  uVar10 = 0;
  do {
    uVar11 = uVar10;
    uVar10 = uVar11 + 1;
  } while (*(char *)((int)&local_564 + uVar11) != '\0');
  if (uVar10 < 0x300) {
    *(undefined1 *)((int)&local_564 + uVar11) = 0x20;
    uVar11 = uVar10;
  }
  *(undefined1 *)((int)&local_564 + uVar11) = 0;
  uVar10 = 0;
  do {
    uVar11 = uVar10;
    uVar10 = uVar11 + 1;
  } while (*(char *)((int)&local_564 + uVar11) != '\0');
  if (uVar11 + 1 < 0x300) {
    cVar6 = 's';
    pcVar5 = str_1000f32a;
    do {
      pcVar5 = pcVar5 + 1;
      *(char *)((int)&local_564 + uVar11) = cVar6;
      uVar11 = uVar11 + 1;
      cVar6 = *pcVar5;
      if (cVar6 == '\0') break;
    } while (uVar11 < 0x2ff);
  }
  *(undefined1 *)((int)&local_564 + uVar11) = 0;
  uVar10 = 0;
  do {
    uVar11 = uVar10;
    uVar10 = uVar11 + 1;
  } while (*(char *)((int)&local_564 + uVar11) != '\0');
  if (uVar10 < 0x300) {
    *(undefined1 *)((int)&local_564 + uVar11) = 0x3d;
    uVar11 = uVar10;
  }
  *(undefined1 *)((int)&local_564 + uVar11) = 0;
  iVar3 = 8;
  do {
    bVar7 = (byte)local_30 >> ((char)iVar3 * '\x04' - 4U & 0x1f) & 0xf;
    if (bVar7 < 10) {
      bVar7 = bVar7 | 0x30;
    }
    else {
      bVar7 = bVar7 + 0x37;
    }
    uVar10 = 0;
    do {
      uVar11 = uVar10;
      uVar10 = uVar11 + 1;
    } while (*(char *)((int)&local_564 + uVar11) != '\0');
    if (uVar11 + 1 < 0x300) {
      *(byte *)((int)&local_564 + uVar11) = bVar7;
      *(undefined1 *)((int)&local_564 + uVar11 + 1) = 0;
    }
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
LAB_100019ff:
  local_224 = 0;
  local_2c[0] = 0;
  local_30 = 0;
  local_1c4 = 0;
  local_38 = 0;
LAB_10001a28:
  local_2c[0] = 0;
  local_30 = 0;
  local_38 = 0;
  local_1c4 = 0;
  local_1c8 = 0;
  if (((*api == 0x54584b57) && (0x57 < (uint)api[2])) && ((api[0x15] != 0 && (api[0x16] != 0)))) {
    iVar3 = recovered_1000d930(api,4,(int)local_2c);
    if (((iVar3 == 0) || (iVar3 = recovered_1000d930(api,5,(int)&local_30), iVar3 == 0)) ||
       ((iVar3 = recovered_1000d930(api,6,(int)&local_1c4), iVar3 == 0 ||
        ((local_2c[0] == 0 || (local_2c[0] == 0xff)))))) {
      uVar10 = 0;
      do {
        uVar11 = uVar10;
        uVar10 = uVar11 + 1;
      } while (*(char *)((int)&local_564 + uVar11) != '\0');
      if (uVar11 + 1 < 0x300) {
        cVar6 = ' ';
        pcVar5 = str_1000f39f;
        do {
          pcVar5 = pcVar5 + 1;
          *(char *)((int)&local_564 + uVar11) = cVar6;
          uVar11 = uVar11 + 1;
          cVar6 = *pcVar5;
          if (cVar6 == '\0') break;
        } while (uVar11 < 0x2ff);
      }
      goto LAB_10001ba7;
    }
    recovered_1000db60(api,0x70,(int)&local_38);
    recovered_1000db60(api,0x74,(int)&local_1c8);
    uVar10 = 0;
    do {
      uVar11 = uVar10;
      uVar10 = uVar11 + 1;
    } while (*(char *)((int)&local_564 + uVar11) != '\0');
    if (uVar11 + 1 < 0x300) {
      cVar6 = ' ';
      pcVar5 = str_1000f3ac;
      do {
        pcVar5 = pcVar5 + 1;
        *(char *)((int)&local_564 + uVar11) = cVar6;
        uVar11 = uVar11 + 1;
        cVar6 = *pcVar5;
        if (cVar6 == '\0') break;
      } while (uVar11 < 0x2ff);
    }
    *(undefined1 *)((int)&local_564 + uVar11) = 0;
    uVar10 = 0;
    do {
      uVar11 = uVar10;
      uVar10 = uVar11 + 1;
    } while (*(char *)((int)&local_564 + uVar11) != '\0');
    if (uVar10 < 0x300) {
      *(undefined1 *)((int)&local_564 + uVar11) = 0x20;
      uVar11 = uVar10;
    }
    *(undefined1 *)((int)&local_564 + uVar11) = 0;
    uVar10 = 0;
    do {
      uVar11 = uVar10;
      uVar10 = uVar11 + 1;
    } while (*(char *)((int)&local_564 + uVar11) != '\0');
    if (uVar11 + 1 < 0x300) {
      cVar6 = 'g';
      pcVar5 = &DAT_1000f3ba;
      do {
        *(char *)((int)&local_564 + uVar11) = cVar6;
        uVar11 = uVar11 + 1;
        cVar6 = *pcVar5;
        if (cVar6 == '\0') break;
        pcVar5 = pcVar5 + 1;
      } while (uVar11 < 0x2ff);
    }
    *(undefined1 *)((int)&local_564 + uVar11) = 0;
    uVar10 = 0;
    do {
      uVar11 = uVar10;
      uVar10 = uVar11 + 1;
    } while (*(char *)((int)&local_564 + uVar11) != '\0');
    if (uVar10 < 0x300) {
      *(undefined1 *)((int)&local_564 + uVar11) = 0x3d;
      uVar11 = uVar10;
    }
    *(undefined1 *)((int)&local_564 + uVar11) = 0;
    uVar10 = 0;
    do {
      uVar11 = uVar10;
      uVar10 = uVar11 + 1;
    } while (*(char *)((int)&local_564 + uVar11) != '\0');
    if (uVar11 + 1 < 0x300) {
      *(undefined2 *)((int)&local_564 + uVar11) = 0x30;
    }
    uVar10 = 0;
    do {
      uVar11 = uVar10;
      uVar10 = uVar11 + 1;
    } while (*(char *)((int)&local_564 + uVar11) != '\0');
    if (uVar11 + 1 < 0x300) {
      *(undefined2 *)((int)&local_564 + uVar11) = 0x30;
    }
    uVar10 = 0;
    do {
      uVar11 = uVar10;
      uVar10 = uVar11 + 1;
    } while (*(char *)((int)&local_564 + uVar11) != '\0');
    if (uVar11 + 1 < 0x300) {
      *(undefined2 *)((int)&local_564 + uVar11) = 0x30;
    }
    uVar10 = 0;
    do {
      uVar11 = uVar10;
      uVar10 = uVar11 + 1;
    } while (*(char *)((int)&local_564 + uVar11) != '\0');
    if (uVar11 + 1 < 0x300) {
      *(undefined2 *)((int)&local_564 + uVar11) = 0x30;
    }
    uVar10 = 0;
    do {
      uVar11 = uVar10;
      uVar10 = uVar11 + 1;
    } while (*(char *)((int)&local_564 + uVar11) != '\0');
    if (uVar11 + 1 < 0x300) {
      *(undefined2 *)((int)&local_564 + uVar11) = 0x30;
    }
    uVar10 = 0;
    do {
      uVar11 = uVar10;
      uVar10 = uVar11 + 1;
    } while (*(char *)((int)&local_564 + uVar11) != '\0');
    if (uVar11 + 1 < 0x300) {
      *(undefined2 *)((int)&local_564 + uVar11) = 0x37;
    }
    uVar10 = 0;
    do {
      uVar11 = uVar10;
      uVar10 = uVar11 + 1;
    } while (*(char *)((int)&local_564 + uVar11) != '\0');
    if (uVar11 + 1 < 0x300) {
      *(undefined2 *)((int)&local_564 + uVar11) = 0x30;
    }
    uVar10 = 0;
    do {
      uVar11 = uVar10;
      uVar10 = uVar11 + 1;
    } while (*(char *)((int)&local_564 + uVar11) != '\0');
    if (uVar11 + 1 < 0x300) {
      *(undefined2 *)((int)&local_564 + uVar11) = 0x30;
    }
    uVar11 = local_2c[0] & 0xff;
    uVar10 = 0;
    do {
      uVar2 = uVar10;
      uVar10 = uVar2 + 1;
    } while (*(char *)((int)&local_564 + uVar2) != '\0');
    if (uVar10 < 0x300) {
      *(undefined1 *)((int)&local_564 + uVar2) = 0x20;
      uVar2 = uVar10;
    }
    *(undefined1 *)((int)&local_564 + uVar2) = 0;
    uVar10 = 0;
    do {
      uVar2 = uVar10;
      uVar10 = uVar2 + 1;
    } while (*(char *)((int)&local_564 + uVar2) != '\0');
    if (uVar2 + 1 < 0x300) {
      cVar6 = 'g';
      pcVar5 = &DAT_1000f3c1;
      do {
        *(char *)((int)&local_564 + uVar2) = cVar6;
        uVar2 = uVar2 + 1;
        cVar6 = *pcVar5;
        if (cVar6 == '\0') break;
        pcVar5 = pcVar5 + 1;
      } while (uVar2 < 0x2ff);
    }
    *(undefined1 *)((int)&local_564 + uVar2) = 0;
    uVar10 = 0;
    do {
      uVar2 = uVar10;
      uVar10 = uVar2 + 1;
    } while (*(char *)((int)&local_564 + uVar2) != '\0');
    if (uVar10 < 0x300) {
      *(undefined1 *)((int)&local_564 + uVar2) = 0x3d;
      uVar2 = uVar10;
    }
    *(undefined1 *)((int)&local_564 + uVar2) = 0;
    if (uVar11 == 0) {
      uVar10 = 0;
      do {
        uVar11 = uVar10;
        uVar10 = uVar11 + 1;
      } while (*(char *)((int)&local_564 + uVar11) != '\0');
      if (uVar11 + 1 < 0x300) {
        *(undefined2 *)((int)&local_564 + uVar11) = 0x30;
      }
      uVar10 = 0;
    }
    else {
      local_18 = uVar11;
      uVar10 = 0;
      do {
        local_1ac[uVar10 - 0x10] = (char)uVar11 + (char)(uVar11 / 10) * -10 | 0x30;
        uVar2 = uVar10 + 1;
        if (8 < uVar10) break;
        bVar14 = 9 < uVar11;
        uVar11 = uVar11 / 10;
        uVar10 = uVar2;
      } while (bVar14);
      do {
        iVar3 = uVar2 - 0x11;
        uVar2 = uVar2 - 1;
        uVar10 = 0;
        do {
          uVar11 = uVar10;
          uVar10 = uVar11 + 1;
        } while (*(char *)((int)&local_564 + uVar11) != '\0');
        if (uVar11 + 1 < 0x300) {
          *(char *)((int)&local_564 + uVar11) = local_1ac[iVar3];
          *(undefined1 *)((int)&local_564 + uVar11 + 1) = 0;
        }
      } while (uVar2 != 0);
      uVar10 = local_18;
    }
    local_20 = local_30 & 0xff;
    uVar11 = 0;
    do {
      uVar2 = uVar11;
      uVar11 = uVar2 + 1;
    } while (*(char *)((int)&local_564 + uVar2) != '\0');
    if (uVar11 < 0x300) {
      *(undefined1 *)((int)&local_564 + uVar2) = 0x20;
      uVar2 = uVar11;
    }
    *(undefined1 *)((int)&local_564 + uVar2) = 0;
    uVar11 = 0;
    do {
      uVar2 = uVar11;
      uVar11 = uVar2 + 1;
    } while (*(char *)((int)&local_564 + uVar2) != '\0');
    if (uVar2 + 1 < 0x300) {
      cVar6 = 'g';
      pcVar5 = str_1000f3ca;
      do {
        pcVar5 = pcVar5 + 1;
        *(char *)((int)&local_564 + uVar2) = cVar6;
        uVar2 = uVar2 + 1;
        cVar6 = *pcVar5;
        if (cVar6 == '\0') break;
      } while (uVar2 < 0x2ff);
    }
    *(undefined1 *)((int)&local_564 + uVar2) = 0;
    uVar11 = 0;
    do {
      uVar2 = uVar11;
      uVar11 = uVar2 + 1;
    } while (*(char *)((int)&local_564 + uVar2) != '\0');
    if (uVar11 < 0x300) {
      *(undefined1 *)((int)&local_564 + uVar2) = 0x3d;
      uVar2 = uVar11;
    }
    *(undefined1 *)((int)&local_564 + uVar2) = 0;
    local_18 = uVar10;
    if (local_20 == 0) {
      uVar11 = 0;
      do {
        uVar2 = uVar11;
        uVar11 = uVar2 + 1;
      } while (*(char *)((int)&local_564 + uVar2) != '\0');
      if (uVar2 + 1 < 0x300) {
        *(undefined2 *)((int)&local_564 + uVar2) = 0x30;
      }
      local_20 = 0;
    }
    else {
      uVar11 = 0;
      uVar2 = local_20;
      do {
        local_1ac[uVar11 - 0x10] = (byte)(uVar2 % 10) | 0x30;
        uVar10 = local_18;
        uVar9 = uVar11 + 1;
        if (8 < uVar11) break;
        bVar14 = 9 < uVar2;
        uVar11 = uVar9;
        uVar2 = uVar2 / 10;
      } while (bVar14);
      do {
        iVar3 = uVar9 - 0x11;
        uVar9 = uVar9 - 1;
        uVar11 = 0;
        do {
          uVar2 = uVar11;
          uVar11 = uVar2 + 1;
        } while (*(char *)((int)&local_564 + uVar2) != '\0');
        if (uVar2 + 1 < 0x300) {
          *(char *)((int)&local_564 + uVar2) = local_1ac[iVar3];
          *(undefined1 *)((int)&local_564 + uVar2 + 1) = 0;
        }
      } while (uVar9 != 0);
    }
    local_34 = local_1c4 & 0xff;
    uVar11 = 0;
    do {
      uVar2 = uVar11;
      uVar11 = uVar2 + 1;
    } while (*(char *)((int)&local_564 + uVar2) != '\0');
    if (uVar11 < 0x300) {
      *(undefined1 *)((int)&local_564 + uVar2) = 0x20;
      uVar2 = uVar11;
    }
    *(undefined1 *)((int)&local_564 + uVar2) = 0;
    uVar11 = 0;
    do {
      uVar2 = uVar11;
      uVar11 = uVar2 + 1;
    } while (*(char *)((int)&local_564 + uVar2) != '\0');
    if (uVar2 + 1 < 0x300) {
      cVar6 = 'g';
      pcVar5 = str_1000f3d4;
      do {
        pcVar5 = pcVar5 + 1;
        *(char *)((int)&local_564 + uVar2) = cVar6;
        uVar2 = uVar2 + 1;
        cVar6 = *pcVar5;
        if (cVar6 == '\0') break;
      } while (uVar2 < 0x2ff);
    }
    *(undefined1 *)((int)&local_564 + uVar2) = 0;
    uVar11 = 0;
    do {
      uVar2 = uVar11;
      uVar11 = uVar2 + 1;
    } while (*(char *)((int)&local_564 + uVar2) != '\0');
    if (uVar11 < 0x300) {
      *(undefined1 *)((int)&local_564 + uVar2) = 0x3d;
      uVar2 = uVar11;
    }
    *(undefined1 *)((int)&local_564 + uVar2) = 0;
    if (local_34 == 0) {
      uVar11 = 0;
      do {
        uVar2 = uVar11;
        uVar11 = uVar2 + 1;
      } while (*(char *)((int)&local_564 + uVar2) != '\0');
      if (uVar2 + 1 < 0x300) {
        *(undefined2 *)((int)&local_564 + uVar2) = 0x30;
      }
      local_34 = 0;
    }
    else {
      uVar11 = local_34;
      uVar2 = 0;
      do {
        local_1ac[uVar2 - 0x10] = (byte)(uVar11 % 10) | 0x30;
        uVar10 = local_18;
        uVar9 = uVar2 + 1;
        if (8 < uVar2) break;
        bVar14 = 9 < uVar11;
        uVar11 = uVar11 / 10;
        uVar2 = uVar9;
      } while (bVar14);
      do {
        iVar3 = uVar9 - 0x11;
        uVar9 = uVar9 - 1;
        uVar11 = 0;
        do {
          uVar2 = uVar11;
          uVar11 = uVar2 + 1;
        } while (*(char *)((int)&local_564 + uVar2) != '\0');
        if (uVar2 + 1 < 0x300) {
          *(char *)((int)&local_564 + uVar2) = local_1ac[iVar3];
          *(undefined1 *)((int)&local_564 + uVar2 + 1) = 0;
        }
      } while (uVar9 != 0);
    }
    local_14 = local_38;
    uVar11 = 0;
    do {
      uVar2 = uVar11;
      uVar11 = uVar2 + 1;
    } while (*(char *)((int)&local_564 + uVar2) != '\0');
    if (uVar11 < 0x300) {
      *(undefined1 *)((int)&local_564 + uVar2) = 0x20;
      uVar2 = uVar11;
    }
    *(undefined1 *)((int)&local_564 + uVar2) = 0;
    uVar11 = 0;
    do {
      uVar2 = uVar11;
      uVar11 = uVar2 + 1;
    } while (*(char *)((int)&local_564 + uVar2) != '\0');
    if (uVar2 + 1 < 0x300) {
      cVar6 = 'g';
      pcVar5 = str_1000f3e0;
      do {
        pcVar5 = pcVar5 + 1;
        *(char *)((int)&local_564 + uVar2) = cVar6;
        uVar2 = uVar2 + 1;
        cVar6 = *pcVar5;
        if (cVar6 == '\0') break;
      } while (uVar2 < 0x2ff);
    }
    *(undefined1 *)((int)&local_564 + uVar2) = 0;
    uVar11 = 0;
    do {
      uVar2 = uVar11;
      uVar11 = uVar2 + 1;
    } while (*(char *)((int)&local_564 + uVar2) != '\0');
    if (uVar11 < 0x300) {
      *(undefined1 *)((int)&local_564 + uVar2) = 0x3d;
      uVar2 = uVar11;
    }
    *(undefined1 *)((int)&local_564 + uVar2) = 0;
    iVar3 = 8;
    do {
      uVar11 = local_14 >> ((char)iVar3 * '\x04' - 4U & 0x1f) & 0xf;
      bVar7 = (byte)uVar11;
      if (uVar11 < 10) {
        bVar7 = bVar7 | 0x30;
      }
      else {
        bVar7 = bVar7 + 0x37;
      }
      uVar11 = 0;
      do {
        uVar2 = uVar11;
        uVar11 = uVar2 + 1;
      } while (*(char *)((int)&local_564 + uVar2) != '\0');
      if (uVar2 + 1 < 0x300) {
        *(byte *)((int)&local_564 + uVar2) = bVar7;
        *(undefined1 *)((int)&local_564 + uVar2 + 1) = 0;
      }
      uVar11 = local_1c8;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    uVar2 = 0;
    do {
      uVar9 = uVar2;
      uVar2 = uVar9 + 1;
    } while (*(char *)((int)&local_564 + uVar9) != '\0');
    if (uVar2 < 0x300) {
      *(undefined1 *)((int)&local_564 + uVar9) = 0x20;
      uVar9 = uVar2;
    }
    *(undefined1 *)((int)&local_564 + uVar9) = 0;
    uVar2 = 0;
    do {
      uVar9 = uVar2;
      uVar2 = uVar9 + 1;
    } while (*(char *)((int)&local_564 + uVar9) != '\0');
    if (uVar9 + 1 < 0x300) {
      cVar6 = 'g';
      pcVar5 = str_1000f3f2;
      do {
        pcVar5 = pcVar5 + 1;
        *(char *)((int)&local_564 + uVar9) = cVar6;
        uVar9 = uVar9 + 1;
        cVar6 = *pcVar5;
        if (cVar6 == '\0') break;
      } while (uVar9 < 0x2ff);
    }
    *(undefined1 *)((int)&local_564 + uVar9) = 0;
    uVar2 = 0;
    do {
      uVar9 = uVar2;
      uVar2 = uVar9 + 1;
    } while (*(char *)((int)&local_564 + uVar9) != '\0');
    if (uVar2 < 0x300) {
      *(undefined1 *)((int)&local_564 + uVar9) = 0x3d;
      uVar9 = uVar2;
    }
    *(undefined1 *)((int)&local_564 + uVar9) = 0;
    iVar3 = 8;
    do {
      uVar2 = uVar11 >> ((char)iVar3 * '\x04' - 4U & 0x1f) & 0xf;
      bVar7 = (byte)uVar2;
      if (uVar2 < 10) {
        bVar7 = bVar7 | 0x30;
      }
      else {
        bVar7 = bVar7 + 0x37;
      }
      uVar2 = 0;
      do {
        uVar9 = uVar2;
        uVar2 = uVar9 + 1;
      } while (*(char *)((int)&local_564 + uVar9) != '\0');
      if (uVar9 + 1 < 0x300) {
        *(byte *)((int)&local_564 + uVar9) = bVar7;
        *(undefined1 *)((int)&local_564 + uVar9 + 1) = 0;
      }
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    local_1bc = local_1bc & 0xffffff00;
    uVar11 = 0;
    do {
      uVar2 = uVar11;
      uVar11 = uVar2 + 1;
    } while (local_1ac[uVar2 - 0x10] != '\0');
    if (uVar2 + 1 < 0xc0) {
      cVar6 = 'i';
      pcVar5 = str_1000f401;
      do {
        pcVar5 = pcVar5 + 1;
        local_1ac[uVar2 - 0x10] = cVar6;
        uVar2 = uVar2 + 1;
        cVar6 = *pcVar5;
        if (cVar6 == '\0') break;
      } while (uVar2 < 0xbf);
    }
    local_1ac[uVar2 - 0x10] = '\0';
    uVar11 = local_20;
    if (uVar10 == 0) {
      uVar10 = 0;
      do {
        uVar2 = uVar10;
        uVar10 = uVar2 + 1;
      } while (local_1ac[uVar2 - 0x10] != '\0');
      if (uVar2 + 1 < 0xc0) {
        (local_1ac + (uVar2 - 0x10))[0] = '0';
        (local_1ac + (uVar2 - 0x10))[1] = '\0';
      }
    }
    else {
      uVar2 = 0;
      do {
        *(byte *)((int)local_200 + uVar2) = (char)uVar10 + (char)(uVar10 / 10) * -10 | 0x30;
        uVar11 = local_20;
        uVar9 = uVar2 + 1;
        if (8 < uVar2) break;
        bVar14 = 9 < uVar10;
        uVar2 = uVar9;
        uVar10 = uVar10 / 10;
      } while (bVar14);
      do {
        iVar3 = uVar9 - 1;
        uVar9 = uVar9 - 1;
        uVar10 = 0;
        do {
          uVar2 = uVar10;
          uVar10 = uVar2 + 1;
        } while (local_1ac[uVar2 - 0x10] != '\0');
        if (uVar2 + 1 < 0xc0) {
          local_1ac[uVar2 - 0x10] = *(char *)((int)local_200 + iVar3);
          local_1ac[uVar2 - 0xf] = '\0';
        }
      } while (uVar9 != 0);
    }
    uVar10 = 0;
    do {
      uVar2 = uVar10;
      uVar10 = uVar2 + 1;
    } while (local_1ac[uVar2 - 0x10] != '\0');
    if (uVar10 < 0xc0) {
      local_1ac[uVar2 - 0x10] = '.';
      uVar2 = uVar10;
    }
    local_1ac[uVar2 - 0x10] = '\0';
    uVar10 = local_34;
    if (uVar11 == 0) {
      uVar11 = 0;
      do {
        uVar2 = uVar11;
        uVar11 = uVar2 + 1;
      } while (local_1ac[uVar2 - 0x10] != '\0');
      if (uVar2 + 1 < 0xc0) {
        (local_1ac + (uVar2 - 0x10))[0] = '0';
        (local_1ac + (uVar2 - 0x10))[1] = '\0';
      }
    }
    else {
      uVar2 = 0;
      do {
        *(byte *)((int)local_200 + uVar2) = (char)uVar11 + (char)(uVar11 / 10) * -10 | 0x30;
        uVar10 = local_34;
        uVar9 = uVar2 + 1;
        if (8 < uVar2) break;
        bVar14 = 9 < uVar11;
        uVar2 = uVar9;
        uVar11 = uVar11 / 10;
      } while (bVar14);
      do {
        iVar3 = uVar9 - 1;
        uVar9 = uVar9 - 1;
        uVar11 = 0;
        do {
          uVar2 = uVar11;
          uVar11 = uVar2 + 1;
        } while (local_1ac[uVar2 - 0x10] != '\0');
        if (uVar2 + 1 < 0xc0) {
          local_1ac[uVar2 - 0x10] = *(char *)((int)local_200 + iVar3);
          local_1ac[uVar2 - 0xf] = '\0';
        }
      } while (uVar9 != 0);
    }
    uVar11 = 0;
    do {
      uVar2 = uVar11;
      uVar11 = uVar2 + 1;
    } while (local_1ac[uVar2 - 0x10] != '\0');
    if (uVar11 < 0xc0) {
      local_1ac[uVar2 - 0x10] = '.';
      uVar2 = uVar11;
    }
    local_1ac[uVar2 - 0x10] = '\0';
    if (uVar10 == 0) {
      uVar10 = 0;
      do {
        uVar11 = uVar10;
        uVar10 = uVar11 + 1;
      } while (local_1ac[uVar11 - 0x10] != '\0');
      if (uVar11 + 1 < 0xc0) {
        (local_1ac + (uVar11 - 0x10))[0] = '0';
        (local_1ac + (uVar11 - 0x10))[1] = '\0';
      }
    }
    else {
      uVar11 = 0;
      do {
        *(byte *)((int)local_200 + uVar11) = (char)uVar10 + (char)(uVar10 / 10) * -10 | 0x30;
        uVar2 = uVar11 + 1;
        if (8 < uVar11) break;
        bVar14 = 9 < uVar10;
        uVar11 = uVar2;
        uVar10 = uVar10 / 10;
      } while (bVar14);
      do {
        iVar3 = uVar2 - 1;
        uVar2 = uVar2 - 1;
        uVar10 = 0;
        do {
          uVar11 = uVar10;
          uVar10 = uVar11 + 1;
        } while (local_1ac[uVar11 - 0x10] != '\0');
        if (uVar11 + 1 < 0xc0) {
          local_1ac[uVar11 - 0x10] = *(char *)((int)local_200 + iVar3);
          local_1ac[uVar11 - 0xf] = '\0';
        }
      } while (uVar2 != 0);
    }
    uVar10 = 0;
    do {
      uVar11 = uVar10;
      uVar10 = uVar11 + 1;
    } while (local_1ac[uVar11 - 0x10] != '\0');
    if (uVar10 < 0xc0) {
      local_1ac[uVar11 - 0x10] = ' ';
      uVar11 = uVar10;
    }
    local_1ac[uVar11 - 0x10] = '\0';
    uVar10 = 0;
    do {
      uVar11 = uVar10;
      uVar10 = uVar11 + 1;
    } while (local_1ac[uVar11 - 0x10] != '\0');
    if (uVar11 + 1 < 0xc0) {
      cVar6 = 'm';
      pcVar5 = str_1000f41f;
      do {
        pcVar5 = pcVar5 + 1;
        local_1ac[uVar11 - 0x10] = cVar6;
        uVar11 = uVar11 + 1;
        cVar6 = *pcVar5;
        if (cVar6 == '\0') break;
      } while (uVar11 < 0xbf);
    }
    local_1ac[uVar11 - 0x10] = '\0';
    uVar10 = 0;
    do {
      uVar11 = uVar10;
      uVar10 = uVar11 + 1;
    } while (local_1ac[uVar11 - 0x10] != '\0');
    if (uVar10 < 0xc0) {
      local_1ac[uVar11 - 0x10] = '=';
      uVar11 = uVar10;
    }
    local_1ac[uVar11 - 0x10] = '\0';
    iVar3 = 8;
    do {
      uVar11 = local_14 >> ((char)iVar3 * '\x04' - 4U & 0x1f) & 0xf;
      bVar8 = (byte)uVar11;
      bVar7 = bVar8 + 0x37;
      uVar10 = 0;
      do {
        uVar2 = uVar10;
        uVar10 = uVar2 + 1;
      } while (local_1ac[uVar2 - 0x10] != '\0');
      if (uVar2 + 1 < 0xc0) {
        if (uVar11 < 10) {
          bVar7 = bVar8 | 0x30;
        }
        local_1ac[uVar2 - 0x10] = bVar7;
        local_1ac[uVar2 - 0xf] = '\0';
      }
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    if ((code *)api[3] != (code *)0x0) {
      (*(code *)api[3])(str_1000f0a0,str_1000f42d,&local_1bc);
    }
    local_220 = 1;
  }
  else {
    uVar10 = 0;
    do {
      uVar11 = uVar10;
      uVar10 = uVar11 + 1;
    } while (*(char *)((int)&local_564 + uVar11) != '\0');
    if (uVar11 + 1 < 0x300) {
      cVar6 = ' ';
      pcVar5 = str_1000f38a;
      do {
        pcVar5 = pcVar5 + 1;
        *(char *)((int)&local_564 + uVar11) = cVar6;
        uVar11 = uVar11 + 1;
        cVar6 = *pcVar5;
        if (cVar6 == '\0') break;
      } while (uVar11 < 0x2ff);
    }
LAB_10001ba7:
    *(undefined1 *)((int)&local_564 + uVar11) = 0;
    local_220 = 0;
  }
  local_30 = 0;
  local_1c4 = 0;
  local_38 = 0;
  local_1c8 = 0;
  local_210 = 0;
  local_20c = 0;
  if ((((((*api == 0x54584b57) && (0x7f < (uint)api[2])) && ((code *)api[0x1f] != (code *)0x0)) &&
       ((iVar3 = (*(code *)api[0x1f])(0,0,&local_1bc), iVar3 != 0 && (local_1b8 == 0x756e6547)))) &&
      (local_1b0 == 0x49656e69)) &&
     (((local_1b4 == 0x6c65746e && (*api == 0x54584b57)) &&
      ((0x7f < (uint)api[2] &&
       (((code *)api[0x1f] != (code *)0x0 &&
        (iVar3 = (*(code *)api[0x1f])(1,0,local_200), iVar3 != 0)))))))) {
    local_14 = local_200[0] >> 8 & 0xf;
    if (local_14 == 0xf) {
      local_14 = (local_200[0] >> 0x14 & 0xff) + 0xf;
    }
    uVar11 = local_200[0] >> 0xc & 0xf0;
    uVar10 = uVar11;
    if (local_14 != 0xf) {
      uVar10 = 0;
    }
    uVar2 = local_200[0] >> 4;
    if (local_14 != 6) {
      uVar11 = uVar10;
    }
    uVar10 = 0;
    do {
      uVar9 = uVar10;
      uVar10 = uVar9 + 1;
    } while (*(char *)((int)&local_564 + uVar9) != '\0');
    if (uVar9 + 1 < 0x300) {
      cVar6 = ' ';
      pcVar5 = str_1000f449;
      do {
        pcVar5 = pcVar5 + 1;
        *(char *)((int)&local_564 + uVar9) = cVar6;
        uVar9 = uVar9 + 1;
        cVar6 = *pcVar5;
        if (cVar6 == '\0') break;
      } while (uVar9 < 0x2ff);
    }
    uVar13 = local_200[0] & 0xf;
    *(undefined1 *)((int)&local_564 + uVar9) = 0;
    uVar10 = 0;
    do {
      uVar9 = uVar10;
      uVar10 = uVar9 + 1;
    } while (*(char *)((int)&local_564 + uVar9) != '\0');
    if (uVar10 < 0x300) {
      *(undefined1 *)((int)&local_564 + uVar9) = 0x20;
      uVar9 = uVar10;
    }
    *(undefined1 *)((int)&local_564 + uVar9) = 0;
    uVar10 = 0;
    do {
      uVar9 = uVar10;
      uVar10 = uVar9 + 1;
    } while (*(char *)((int)&local_564 + uVar9) != '\0');
    local_18 = uVar11 | uVar2 & 0xf;
    if (uVar9 + 1 < 0x300) {
      cVar6 = 'c';
      pcVar5 = str_1000f459;
      do {
        pcVar5 = pcVar5 + 1;
        *(char *)((int)&local_564 + uVar9) = cVar6;
        uVar9 = uVar9 + 1;
        cVar6 = *pcVar5;
        if (cVar6 == '\0') break;
      } while (uVar9 < 0x2ff);
    }
    *(undefined1 *)((int)&local_564 + uVar9) = 0;
    uVar10 = 0;
    do {
      uVar11 = uVar10;
      uVar10 = uVar11 + 1;
    } while (*(char *)((int)&local_564 + uVar11) != '\0');
    if (uVar10 < 0x300) {
      *(undefined1 *)((int)&local_564 + uVar11) = 0x3d;
      uVar11 = uVar10;
    }
    *(undefined1 *)((int)&local_564 + uVar11) = 0;
    if (local_14 == 0) {
      uVar10 = 0;
      do {
        uVar11 = uVar10;
        uVar10 = uVar11 + 1;
      } while (*(char *)((int)&local_564 + uVar11) != '\0');
      if (uVar11 + 1 < 0x300) {
        *(undefined2 *)((int)&local_564 + uVar11) = 0x30;
      }
    }
    else {
      uVar10 = local_14;
      uVar11 = 0;
      do {
        local_1ac[uVar11 - 0x10] = (char)uVar10 + (char)(uVar10 / 10) * -10 | 0x30;
        uVar2 = uVar11 + 1;
        if (8 < uVar11) break;
        bVar14 = 9 < uVar10;
        uVar10 = uVar10 / 10;
        uVar11 = uVar2;
      } while (bVar14);
      do {
        iVar3 = uVar2 - 0x11;
        uVar2 = uVar2 - 1;
        uVar10 = 0;
        do {
          uVar11 = uVar10;
          uVar10 = uVar11 + 1;
        } while (*(char *)((int)&local_564 + uVar11) != '\0');
        if (uVar11 + 1 < 0x300) {
          *(char *)((int)&local_564 + uVar11) = local_1ac[iVar3];
          *(undefined1 *)((int)&local_564 + uVar11 + 1) = 0;
        }
      } while (uVar2 != 0);
    }
    uVar10 = 0;
    do {
      uVar11 = uVar10;
      uVar10 = uVar11 + 1;
    } while (*(char *)((int)&local_564 + uVar11) != '\0');
    if (uVar10 < 0x300) {
      *(undefined1 *)((int)&local_564 + uVar11) = 0x20;
      uVar11 = uVar10;
    }
    *(undefined1 *)((int)&local_564 + uVar11) = 0;
    uVar10 = 0;
    do {
      uVar11 = uVar10;
      uVar10 = uVar11 + 1;
    } while (*(char *)((int)&local_564 + uVar11) != '\0');
    if (uVar11 + 1 < 0x300) {
      cVar6 = 'c';
      pcVar5 = str_1000f463;
      do {
        pcVar5 = pcVar5 + 1;
        *(char *)((int)&local_564 + uVar11) = cVar6;
        uVar11 = uVar11 + 1;
        cVar6 = *pcVar5;
        if (cVar6 == '\0') break;
      } while (uVar11 < 0x2ff);
    }
    *(undefined1 *)((int)&local_564 + uVar11) = 0;
    uVar11 = local_18;
    uVar10 = 0;
    do {
      uVar2 = uVar10;
      uVar10 = uVar2 + 1;
    } while (*(char *)((int)&local_564 + uVar2) != '\0');
    if (uVar10 < 0x300) {
      *(undefined1 *)((int)&local_564 + uVar2) = 0x3d;
      uVar2 = uVar10;
    }
    *(undefined1 *)((int)&local_564 + uVar2) = 0;
    if (uVar11 == 0) {
      uVar10 = 0;
      do {
        uVar11 = uVar10;
        uVar10 = uVar11 + 1;
      } while (*(char *)((int)&local_564 + uVar11) != '\0');
      if (uVar11 + 1 < 0x300) {
        *(undefined2 *)((int)&local_564 + uVar11) = 0x30;
      }
    }
    else {
      uVar10 = 0;
      do {
        local_1ac[uVar10 - 0x10] = (char)uVar11 + (char)(uVar11 / 10) * -10 | 0x30;
        uVar2 = uVar10 + 1;
        if (8 < uVar10) break;
        bVar14 = 9 < uVar11;
        uVar11 = uVar11 / 10;
        uVar10 = uVar2;
      } while (bVar14);
      do {
        iVar3 = uVar2 - 0x11;
        uVar2 = uVar2 - 1;
        uVar10 = 0;
        do {
          uVar11 = uVar10;
          uVar10 = uVar11 + 1;
        } while (*(char *)((int)&local_564 + uVar11) != '\0');
        if (uVar11 + 1 < 0x300) {
          *(char *)((int)&local_564 + uVar11) = local_1ac[iVar3];
          *(undefined1 *)((int)&local_564 + uVar11 + 1) = 0;
        }
      } while (uVar2 != 0);
    }
    uVar10 = 0;
    do {
      uVar11 = uVar10;
      uVar10 = uVar11 + 1;
    } while (*(char *)((int)&local_564 + uVar11) != '\0');
    if (uVar10 < 0x300) {
      *(undefined1 *)((int)&local_564 + uVar11) = 0x20;
      uVar11 = uVar10;
    }
    *(undefined1 *)((int)&local_564 + uVar11) = 0;
    uVar10 = 0;
    do {
      uVar11 = uVar10;
      uVar10 = uVar11 + 1;
    } while (*(char *)((int)&local_564 + uVar11) != '\0');
    if (uVar11 + 1 < 0x300) {
      cVar6 = 'c';
      pcVar5 = str_1000f46c;
      do {
        pcVar5 = pcVar5 + 1;
        *(char *)((int)&local_564 + uVar11) = cVar6;
        uVar11 = uVar11 + 1;
        cVar6 = *pcVar5;
        if (cVar6 == '\0') break;
      } while (uVar11 < 0x2ff);
    }
    *(undefined1 *)((int)&local_564 + uVar11) = 0;
    uVar10 = 0;
    do {
      uVar11 = uVar10;
      uVar10 = uVar11 + 1;
    } while (*(char *)((int)&local_564 + uVar11) != '\0');
    if (uVar10 < 0x300) {
      *(undefined1 *)((int)&local_564 + uVar11) = 0x3d;
      uVar11 = uVar10;
    }
    *(undefined1 *)((int)&local_564 + uVar11) = 0;
    if (uVar13 == 0) {
      uVar10 = 0;
      do {
        uVar11 = uVar10;
        uVar10 = uVar11 + 1;
      } while (*(char *)((int)&local_564 + uVar11) != '\0');
      if (uVar11 + 1 < 0x300) {
        *(undefined2 *)((int)&local_564 + uVar11) = 0x30;
      }
    }
    else {
      uVar10 = 0;
      do {
        local_1ac[uVar10 - 0x10] = (char)uVar13 + (char)(uVar13 / 10) * -10 | 0x30;
        uVar11 = uVar10 + 1;
        if (8 < uVar10) break;
        bVar14 = 9 < uVar13;
        uVar13 = uVar13 / 10;
        uVar10 = uVar11;
      } while (bVar14);
      do {
        iVar3 = uVar11 - 0x11;
        uVar11 = uVar11 - 1;
        uVar10 = 0;
        do {
          uVar2 = uVar10;
          uVar10 = uVar2 + 1;
        } while (*(char *)((int)&local_564 + uVar2) != '\0');
        if (uVar2 + 1 < 0x300) {
          *(char *)((int)&local_564 + uVar2) = local_1ac[iVar3];
          *(undefined1 *)((int)&local_564 + uVar2 + 1) = 0;
        }
      } while (uVar11 != 0);
    }
    uVar10 = local_14;
    if ((((-1 < (char)local_1f8) || (*api != 0x54584b57)) || ((uint)api[2] < 0xb4)) ||
       (((code *)api[0x2b] == (code *)0x0 || (api[0x2c] == 0)))) {
      uVar11 = 0;
      do {
        uVar2 = uVar11;
        uVar11 = uVar2 + 1;
      } while (*(char *)((int)&local_564 + uVar2) != '\0');
      local_20 = local_1f8;
      if (uVar2 + 1 < 0x300) {
        cVar6 = ' ';
        pcVar5 = str_1000f478;
        do {
          pcVar5 = pcVar5 + 1;
          *(char *)((int)&local_564 + uVar2) = cVar6;
          uVar2 = uVar2 + 1;
          cVar6 = *pcVar5;
          if (cVar6 == '\0') break;
        } while (uVar2 < 0x2ff);
      }
      *(undefined1 *)((int)&local_564 + uVar2) = 0;
      local_1bc = local_1bc & 0xffffff00;
      uVar11 = 0;
      do {
        uVar2 = uVar11;
        uVar11 = uVar2 + 1;
      } while (local_1ac[uVar2 - 0x10] != '\0');
      if (uVar2 + 1 < 0xc0) {
        cVar6 = 'v';
        pcVar5 = str_1000f48f;
        do {
          pcVar5 = pcVar5 + 1;
          local_1ac[uVar2 - 0x10] = cVar6;
          uVar2 = uVar2 + 1;
          cVar6 = *pcVar5;
          if (cVar6 == '\0') break;
        } while (uVar2 < 0xbf);
      }
      local_1ac[uVar2 - 0x10] = '\0';
      uVar11 = 0;
      do {
        uVar2 = uVar11;
        uVar11 = uVar2 + 1;
      } while (local_1ac[uVar2 - 0x10] != '\0');
      if (uVar11 < 0xc0) {
        local_1ac[uVar2 - 0x10] = ' ';
        uVar2 = uVar11;
      }
      local_1ac[uVar2 - 0x10] = '\0';
      uVar11 = 0;
      do {
        uVar2 = uVar11;
        uVar11 = uVar2 + 1;
      } while (local_1ac[uVar2 - 0x10] != '\0');
      if (uVar2 + 1 < 0xc0) {
        cVar6 = 'f';
        pcVar5 = str_1000f4b7;
        do {
          pcVar5 = pcVar5 + 1;
          local_1ac[uVar2 - 0x10] = cVar6;
          uVar2 = uVar2 + 1;
          cVar6 = *pcVar5;
          if (cVar6 == '\0') break;
        } while (uVar2 < 0xbf);
      }
      local_1ac[uVar2 - 0x10] = '\0';
      uVar11 = 0;
      do {
        uVar2 = uVar11;
        uVar11 = uVar2 + 1;
      } while (local_1ac[uVar2 - 0x10] != '\0');
      if (uVar11 < 0xc0) {
        local_1ac[uVar2 - 0x10] = '=';
        uVar2 = uVar11;
      }
      local_1ac[uVar2 - 0x10] = '\0';
      if (uVar10 == 0) {
        uVar10 = 0;
        do {
          uVar11 = uVar10;
          uVar10 = uVar11 + 1;
        } while (local_1ac[uVar11 - 0x10] != '\0');
        if (uVar11 + 1 < 0xc0) {
          (local_1ac + (uVar11 - 0x10))[0] = '0';
          (local_1ac + (uVar11 - 0x10))[1] = '\0';
        }
      }
      else {
        uVar11 = 0;
        do {
          *(byte *)((int)local_2c + uVar11) = (char)uVar10 + (char)(uVar10 / 10) * -10 | 0x30;
          uVar2 = uVar11 + 1;
          if (8 < uVar11) break;
          bVar14 = 9 < uVar10;
          uVar10 = uVar10 / 10;
          uVar11 = uVar2;
        } while (bVar14);
        do {
          iVar3 = uVar2 - 1;
          uVar2 = uVar2 - 1;
          uVar10 = 0;
          do {
            uVar11 = uVar10;
            uVar10 = uVar11 + 1;
          } while (local_1ac[uVar11 - 0x10] != '\0');
          if (uVar11 + 1 < 0xc0) {
            local_1ac[uVar11 - 0x10] = *(char *)((int)local_2c + iVar3);
            local_1ac[uVar11 - 0xf] = '\0';
          }
        } while (uVar2 != 0);
      }
      uVar10 = 0;
      do {
        uVar11 = uVar10;
        uVar10 = uVar11 + 1;
      } while (local_1ac[uVar11 - 0x10] != '\0');
      if (uVar10 < 0xc0) {
        local_1ac[uVar11 - 0x10] = ' ';
        uVar11 = uVar10;
      }
      local_1ac[uVar11 - 0x10] = '\0';
      uVar10 = 0;
      do {
        uVar11 = uVar10;
        uVar10 = uVar11 + 1;
      } while (local_1ac[uVar11 - 0x10] != '\0');
      if (uVar11 + 1 < 0xc0) {
        cVar6 = 'm';
        pcVar5 = str_1000f4be;
        do {
          pcVar5 = pcVar5 + 1;
          local_1ac[uVar11 - 0x10] = cVar6;
          uVar11 = uVar11 + 1;
          cVar6 = *pcVar5;
          if (cVar6 == '\0') break;
        } while (uVar11 < 0xbf);
      }
      local_1ac[uVar11 - 0x10] = '\0';
      uVar11 = local_18;
      uVar10 = 0;
      do {
        uVar2 = uVar10;
        uVar10 = uVar2 + 1;
      } while (local_1ac[uVar2 - 0x10] != '\0');
      if (uVar10 < 0xc0) {
        local_1ac[uVar2 - 0x10] = '=';
        uVar2 = uVar10;
      }
      local_1ac[uVar2 - 0x10] = '\0';
      if (uVar11 == 0) {
        uVar10 = 0;
        do {
          uVar11 = uVar10;
          uVar10 = uVar11 + 1;
        } while (local_1ac[uVar11 - 0x10] != '\0');
        if (uVar11 + 1 < 0xc0) {
          (local_1ac + (uVar11 - 0x10))[0] = '0';
          (local_1ac + (uVar11 - 0x10))[1] = '\0';
        }
      }
      else {
        uVar10 = 0;
        do {
          *(byte *)((int)local_2c + uVar10) = (char)uVar11 + (char)(uVar11 / 10) * -10 | 0x30;
          uVar2 = uVar10 + 1;
          if (8 < uVar10) break;
          bVar14 = 9 < uVar11;
          uVar11 = uVar11 / 10;
          uVar10 = uVar2;
        } while (bVar14);
        do {
          iVar3 = uVar2 - 1;
          uVar2 = uVar2 - 1;
          uVar10 = 0;
          do {
            uVar11 = uVar10;
            uVar10 = uVar11 + 1;
          } while (local_1ac[uVar11 - 0x10] != '\0');
          if (uVar11 + 1 < 0xc0) {
            local_1ac[uVar11 - 0x10] = *(char *)((int)local_2c + iVar3);
            local_1ac[uVar11 - 0xf] = '\0';
          }
        } while (uVar2 != 0);
      }
      pcVar5 = str_1000f304;
      if ((char)local_20 < '\0') {
        pcVar5 = &DAT_1000f2ff;
      }
      bVar7 = *pcVar5;
      uVar10 = (uint)bVar7;
      if (bVar7 != 0) {
        uVar11 = 0;
        do {
          uVar2 = uVar11;
          uVar11 = uVar2 + 1;
        } while (local_1ac[uVar2 - 0x10] != '\0');
        if (uVar11 < 0xc0) {
          local_1ac[uVar2 - 0x10] = ' ';
          uVar2 = uVar11;
        }
        local_1ac[uVar2 - 0x10] = '\0';
        uVar11 = 0;
        do {
          uVar2 = uVar11;
          uVar11 = uVar2 + 1;
        } while (local_1ac[uVar2 - 0x10] != '\0');
        if (uVar2 + 1 < 0xc0) {
          uVar10 = (uint)CONCAT11(99,bVar7);
          pcVar12 = str_1000f4c4;
          do {
            pcVar12 = pcVar12 + 1;
            local_1ac[uVar2 - 0x10] = (char)(uVar10 >> 8);
            uVar2 = uVar2 + 1;
            uVar10 = (uint)CONCAT11(*pcVar12,(char)uVar10);
            if (*pcVar12 == '\0') break;
          } while (uVar2 < 0xbf);
        }
        local_1ac[uVar2 - 0x10] = '\0';
        uVar11 = 0;
        do {
          uVar2 = uVar11;
          uVar11 = uVar2 + 1;
        } while (local_1ac[uVar2 - 0x10] != '\0');
        if (uVar11 < 0xc0) {
          local_1ac[uVar2 - 0x10] = '=';
          uVar2 = uVar11;
        }
        local_1ac[uVar2 - 0x10] = '\0';
        uVar11 = 0;
        do {
          uVar2 = uVar11;
          uVar11 = uVar2 + 1;
        } while (local_1ac[uVar2 - 0x10] != '\0');
        if (uVar2 + 1 < 0xc0) {
          do {
            pcVar5 = pcVar5 + 1;
            local_1ac[uVar2 - 0x10] = (char)uVar10;
            uVar2 = uVar2 + 1;
            uVar10 = (uint)(byte)*pcVar5;
            if (*pcVar5 == 0) break;
          } while (uVar2 < 0xbf);
        }
        local_1ac[uVar2 - 0x10] = '\0';
      }
      if (((*api != 0x54584b57) || ((uint)api[2] < 0xb4)) ||
         ((api[0x2b] == 0 || (pcVar5 = &DAT_1000f2ff, api[0x2c] == 0)))) {
        pcVar5 = str_1000f304;
      }
      bVar7 = *pcVar5;
      uVar10 = (uint)bVar7;
      if (bVar7 != 0) {
        uVar11 = 0;
        do {
          uVar2 = uVar11;
          uVar11 = uVar2 + 1;
        } while (local_1ac[uVar2 - 0x10] != '\0');
        if (uVar11 < 0xc0) {
          local_1ac[uVar2 - 0x10] = ' ';
          uVar2 = uVar11;
        }
        local_1ac[uVar2 - 0x10] = '\0';
        uVar11 = 0;
        do {
          uVar2 = uVar11;
          uVar11 = uVar2 + 1;
        } while (local_1ac[uVar2 - 0x10] != '\0');
        if (uVar2 + 1 < 0xc0) {
          uVar10 = (uint)CONCAT11(0x6d,bVar7);
          pcVar12 = &DAT_1000f4cf;
          do {
            local_1ac[uVar2 - 0x10] = (char)(uVar10 >> 8);
            uVar2 = uVar2 + 1;
            uVar10 = (uint)CONCAT11(*pcVar12,(char)uVar10);
            if (*pcVar12 == '\0') break;
            pcVar12 = pcVar12 + 1;
          } while (uVar2 < 0xbf);
        }
        local_1ac[uVar2 - 0x10] = '\0';
        uVar11 = 0;
        do {
          uVar2 = uVar11;
          uVar11 = uVar2 + 1;
        } while (local_1ac[uVar2 - 0x10] != '\0');
        if (uVar11 < 0xc0) {
          local_1ac[uVar2 - 0x10] = '=';
          uVar2 = uVar11;
        }
        local_1ac[uVar2 - 0x10] = '\0';
        uVar11 = 0;
        do {
          uVar2 = uVar11;
          uVar11 = uVar2 + 1;
        } while (local_1ac[uVar2 - 0x10] != '\0');
        if (uVar2 + 1 < 0xc0) {
          do {
            pcVar5 = pcVar5 + 1;
            local_1ac[uVar2 - 0x10] = (char)uVar10;
            uVar2 = uVar2 + 1;
            uVar10 = (uint)(byte)*pcVar5;
            if (*pcVar5 == 0) break;
          } while (uVar2 < 0xbf);
        }
        local_1ac[uVar2 - 0x10] = '\0';
      }
      if ((code *)api[3] != (code *)0x0) {
        (*(code *)api[3])(str_1000f0c2,str_1000f4d5,&local_1bc);
      }
      goto LAB_10001d8f;
    }
    iVar3 = (*(code *)api[0x2b])(0x1a0,&local_30,&local_1c4);
    if (iVar3 == 0) {
      uVar10 = 0;
      do {
        uVar11 = uVar10;
        uVar10 = uVar11 + 1;
      } while (*(char *)((int)&local_564 + uVar11) != '\0');
      if (uVar11 + 1 < 0x300) {
        cVar6 = ' ';
        pcVar5 = str_1000f4ed;
        do {
          pcVar5 = pcVar5 + 1;
          *(char *)((int)&local_564 + uVar11) = cVar6;
          uVar11 = uVar11 + 1;
          cVar6 = *pcVar5;
          if (cVar6 == '\0') break;
        } while (uVar11 < 0x2ff);
      }
      *(undefined1 *)((int)&local_564 + uVar11) = 0;
      local_1bc = local_1bc & 0xffffff00;
      uVar10 = 0;
      do {
        uVar11 = uVar10;
        uVar10 = uVar11 + 1;
      } while (local_1ac[uVar11 - 0x10] != '\0');
      if (uVar11 + 1 < 0xa0) {
        cVar6 = 'v';
        pcVar5 = str_1000f508;
        do {
          pcVar5 = pcVar5 + 1;
          local_1ac[uVar11 - 0x10] = cVar6;
          uVar11 = uVar11 + 1;
          cVar6 = *pcVar5;
          if (cVar6 == '\0') break;
        } while (uVar11 < 0x9f);
      }
      local_1ac[uVar11 - 0x10] = '\0';
      uVar10 = 0;
      do {
        uVar11 = uVar10;
        uVar10 = uVar11 + 1;
      } while (local_1ac[uVar11 - 0x10] != '\0');
      if (uVar10 < 0xa0) {
        local_1ac[uVar11 - 0x10] = ' ';
        uVar11 = uVar10;
      }
      local_1ac[uVar11 - 0x10] = '\0';
      uVar10 = 0;
      do {
        uVar11 = uVar10;
        uVar10 = uVar11 + 1;
      } while (local_1ac[uVar11 - 0x10] != '\0');
      if (uVar11 + 1 < 0xa0) {
        cVar6 = 'f';
        pcVar5 = str_1000f4b7;
        do {
          pcVar5 = pcVar5 + 1;
          local_1ac[uVar11 - 0x10] = cVar6;
          uVar11 = uVar11 + 1;
          cVar6 = *pcVar5;
          if (cVar6 == '\0') break;
        } while (uVar11 < 0x9f);
      }
      local_1ac[uVar11 - 0x10] = '\0';
      uVar10 = 0;
      do {
        uVar11 = uVar10;
        uVar10 = uVar11 + 1;
      } while (local_1ac[uVar11 - 0x10] != '\0');
      if (uVar10 < 0xa0) {
        local_1ac[uVar11 - 0x10] = '=';
        uVar11 = uVar10;
      }
      bVar14 = local_14 == 0;
      local_1ac[uVar11 - 0x10] = '\0';
      if (bVar14) {
        uVar10 = 0;
        do {
          uVar11 = uVar10;
          uVar10 = uVar11 + 1;
        } while (local_1ac[uVar11 - 0x10] != '\0');
        if (uVar11 + 1 < 0xa0) {
          (local_1ac + (uVar11 - 0x10))[0] = '0';
          (local_1ac + (uVar11 - 0x10))[1] = '\0';
        }
      }
      else {
        uVar10 = 0;
        uVar11 = local_14;
        do {
          *(byte *)((int)local_2c + uVar10) = (byte)(uVar11 % 10) | 0x30;
          uVar2 = uVar10 + 1;
          if (8 < uVar10) break;
          bVar14 = 9 < uVar11;
          uVar10 = uVar2;
          uVar11 = uVar11 / 10;
        } while (bVar14);
        do {
          iVar3 = uVar2 - 1;
          uVar2 = uVar2 - 1;
          uVar10 = 0;
          do {
            uVar11 = uVar10;
            uVar10 = uVar11 + 1;
          } while (local_1ac[uVar11 - 0x10] != '\0');
          if (uVar11 + 1 < 0xa0) {
            local_1ac[uVar11 - 0x10] = *(char *)((int)local_2c + iVar3);
            local_1ac[uVar11 - 0xf] = '\0';
          }
        } while (uVar2 != 0);
      }
      uVar10 = 0;
      do {
        uVar11 = uVar10;
        uVar10 = uVar11 + 1;
      } while (local_1ac[uVar11 - 0x10] != '\0');
      if (uVar10 < 0xa0) {
        local_1ac[uVar11 - 0x10] = ' ';
        uVar11 = uVar10;
      }
      local_1ac[uVar11 - 0x10] = '\0';
      uVar10 = 0;
      do {
        uVar11 = uVar10;
        uVar10 = uVar11 + 1;
      } while (local_1ac[uVar11 - 0x10] != '\0');
      if (uVar11 + 1 < 0xa0) {
        cVar6 = 'm';
        pcVar5 = str_1000f4be;
        do {
          pcVar5 = pcVar5 + 1;
          local_1ac[uVar11 - 0x10] = cVar6;
          uVar11 = uVar11 + 1;
          cVar6 = *pcVar5;
          if (cVar6 == '\0') break;
        } while (uVar11 < 0x9f);
      }
      local_1ac[uVar11 - 0x10] = '\0';
      uVar10 = 0;
      do {
        uVar11 = uVar10;
        uVar10 = uVar11 + 1;
      } while (local_1ac[uVar11 - 0x10] != '\0');
      if (uVar10 < 0xa0) {
        local_1ac[uVar11 - 0x10] = '=';
        uVar11 = uVar10;
      }
      bVar14 = local_18 == 0;
      local_1ac[uVar11 - 0x10] = '\0';
      if (bVar14) {
        uVar10 = 0;
        do {
          uVar11 = uVar10;
          uVar10 = uVar11 + 1;
        } while (local_1ac[uVar11 - 0x10] != '\0');
        if (uVar11 + 1 < 0xa0) {
          (local_1ac + (uVar11 - 0x10))[0] = '0';
          (local_1ac + (uVar11 - 0x10))[1] = '\0';
        }
      }
      else {
        uVar10 = 0;
        uVar11 = local_18;
        do {
          *(byte *)((int)local_2c + uVar10) = (byte)(uVar11 % 10) | 0x30;
          uVar2 = uVar10 + 1;
          if (8 < uVar10) break;
          bVar14 = 9 < uVar11;
          uVar10 = uVar2;
          uVar11 = uVar11 / 10;
        } while (bVar14);
        do {
          iVar3 = uVar2 - 1;
          uVar2 = uVar2 - 1;
          uVar10 = 0;
          do {
            uVar11 = uVar10;
            uVar10 = uVar11 + 1;
          } while (local_1ac[uVar11 - 0x10] != '\0');
          if (uVar11 + 1 < 0xa0) {
            local_1ac[uVar11 - 0x10] = *(char *)((int)local_2c + iVar3);
            local_1ac[uVar11 - 0xf] = '\0';
          }
        } while (uVar2 != 0);
      }
      if ((code *)api[3] != (code *)0x0) {
        (*(code *)api[3])(str_1000f0c2,str_1000f4d5,&local_1bc);
      }
      iVar3 = 0;
    }
    else {
      iVar3 = 0;
      if ((local_30 & 0x110000) == 0) {
        iVar3 = 0;
        if (*api == 0x54584b57) {
          uVar10 = api[2];
          iVar3 = 0;
          if (0xb3 < uVar10) {
            iVar3 = 0;
            if ((code *)api[0x2c] != (code *)0x0) {
              uVar10 = local_30 | 0x10000;
              iVar4 = (*(code *)api[0x2c])(0x1a0,uVar10,local_1c4);
              if (iVar4 != 0) {
                local_30 = uVar10;
                iVar3 = 1;
              }
            }
            goto LAB_10005b03;
          }
          goto LAB_100060ee;
        }
LAB_100062f6:
        uVar10 = 0;
        do {
          uVar11 = uVar10;
          uVar10 = uVar11 + 1;
        } while (*(char *)((int)&local_564 + uVar11) != '\0');
        if (uVar11 + 1 < 0x300) {
          cVar6 = ' ';
          pcVar5 = str_1000f534;
          do {
            pcVar5 = pcVar5 + 1;
            *(char *)((int)&local_564 + uVar11) = cVar6;
            uVar11 = uVar11 + 1;
            cVar6 = *pcVar5;
            if (cVar6 == '\0') break;
          } while (uVar11 < 0x2ff);
        }
        *(undefined1 *)((int)&local_564 + uVar11) = 0;
        local_1bc = local_1bc & 0xffffff00;
        uVar10 = 0;
        do {
          uVar11 = uVar10;
          uVar10 = uVar11 + 1;
        } while (local_1ac[uVar11 - 0x10] != '\0');
        if (uVar11 + 1 < 0xc0) {
          cVar6 = 'v';
          pcVar5 = str_1000f554;
          do {
            pcVar5 = pcVar5 + 1;
            local_1ac[uVar11 - 0x10] = cVar6;
            uVar11 = uVar11 + 1;
            cVar6 = *pcVar5;
            if (cVar6 == '\0') break;
          } while (uVar11 < 0xbf);
        }
        local_1ac[uVar11 - 0x10] = '\0';
        uVar10 = 0;
        do {
          uVar11 = uVar10;
          uVar10 = uVar11 + 1;
        } while (local_1ac[uVar11 - 0x10] != '\0');
        if (uVar10 < 0xc0) {
          local_1ac[uVar11 - 0x10] = ' ';
          uVar11 = uVar10;
        }
        local_1ac[uVar11 - 0x10] = '\0';
        uVar10 = 0;
        do {
          uVar11 = uVar10;
          uVar10 = uVar11 + 1;
        } while (local_1ac[uVar11 - 0x10] != '\0');
        if (uVar11 + 1 < 0xc0) {
          cVar6 = 'f';
          pcVar5 = str_1000f4b7;
          do {
            pcVar5 = pcVar5 + 1;
            local_1ac[uVar11 - 0x10] = cVar6;
            uVar11 = uVar11 + 1;
            cVar6 = *pcVar5;
            if (cVar6 == '\0') break;
          } while (uVar11 < 0xbf);
        }
        local_1ac[uVar11 - 0x10] = '\0';
        uVar10 = 0;
        do {
          uVar11 = uVar10;
          uVar10 = uVar11 + 1;
        } while (local_1ac[uVar11 - 0x10] != '\0');
        if (uVar10 < 0xc0) {
          local_1ac[uVar11 - 0x10] = '=';
          uVar11 = uVar10;
        }
        bVar14 = local_14 == 0;
        local_1ac[uVar11 - 0x10] = '\0';
        if (bVar14) {
          uVar10 = 0;
          do {
            uVar11 = uVar10;
            uVar10 = uVar11 + 1;
          } while (local_1ac[uVar11 - 0x10] != '\0');
          if (uVar11 + 1 < 0xc0) {
            (local_1ac + (uVar11 - 0x10))[0] = '0';
            (local_1ac + (uVar11 - 0x10))[1] = '\0';
          }
        }
        else {
          uVar10 = 0;
          uVar11 = local_14;
          do {
            *(byte *)((int)local_2c + uVar10) = (char)uVar11 + (char)(uVar11 / 10) * -10 | 0x30;
            uVar2 = uVar10 + 1;
            if (8 < uVar10) break;
            bVar14 = 9 < uVar11;
            uVar10 = uVar2;
            uVar11 = uVar11 / 10;
          } while (bVar14);
          do {
            iVar4 = uVar2 - 1;
            uVar2 = uVar2 - 1;
            uVar10 = 0;
            do {
              uVar11 = uVar10;
              uVar10 = uVar11 + 1;
            } while (local_1ac[uVar11 - 0x10] != '\0');
            if (uVar11 + 1 < 0xc0) {
              local_1ac[uVar11 - 0x10] = *(char *)((int)local_2c + iVar4);
              local_1ac[uVar11 - 0xf] = '\0';
            }
          } while (uVar2 != 0);
        }
        uVar10 = 0;
        do {
          uVar11 = uVar10;
          uVar10 = uVar11 + 1;
        } while (local_1ac[uVar11 - 0x10] != '\0');
        if (uVar10 < 0xc0) {
          local_1ac[uVar11 - 0x10] = ' ';
          uVar11 = uVar10;
        }
        local_1ac[uVar11 - 0x10] = '\0';
        uVar10 = 0;
        do {
          uVar11 = uVar10;
          uVar10 = uVar11 + 1;
        } while (local_1ac[uVar11 - 0x10] != '\0');
        if (uVar11 + 1 < 0xc0) {
          cVar6 = 'm';
          pcVar5 = str_1000f4be;
          do {
            pcVar5 = pcVar5 + 1;
            local_1ac[uVar11 - 0x10] = cVar6;
            uVar11 = uVar11 + 1;
            cVar6 = *pcVar5;
            if (cVar6 == '\0') break;
          } while (uVar11 < 0xbf);
        }
        local_1ac[uVar11 - 0x10] = '\0';
        uVar10 = 0;
        do {
          uVar11 = uVar10;
          uVar10 = uVar11 + 1;
        } while (local_1ac[uVar11 - 0x10] != '\0');
        if (uVar10 < 0xc0) {
          local_1ac[uVar11 - 0x10] = '=';
          uVar11 = uVar10;
        }
        bVar14 = local_18 == 0;
        local_1ac[uVar11 - 0x10] = '\0';
        if (bVar14) {
          uVar10 = 0;
          do {
            uVar11 = uVar10;
            uVar10 = uVar11 + 1;
          } while (local_1ac[uVar11 - 0x10] != '\0');
          if (uVar11 + 1 < 0xc0) {
            (local_1ac + (uVar11 - 0x10))[0] = '0';
            (local_1ac + (uVar11 - 0x10))[1] = '\0';
          }
        }
        else {
          uVar10 = 0;
          uVar11 = local_18;
          do {
            *(byte *)((int)local_2c + uVar10) = (char)uVar11 + (char)(uVar11 / 10) * -10 | 0x30;
            uVar2 = uVar10 + 1;
            if (8 < uVar10) break;
            bVar14 = 9 < uVar11;
            uVar10 = uVar2;
            uVar11 = uVar11 / 10;
          } while (bVar14);
          do {
            iVar4 = uVar2 - 1;
            uVar2 = uVar2 - 1;
            uVar10 = 0;
            do {
              uVar11 = uVar10;
              uVar10 = uVar11 + 1;
            } while (local_1ac[uVar11 - 0x10] != '\0');
            if (uVar11 + 1 < 0xc0) {
              local_1ac[uVar11 - 0x10] = *(char *)((int)local_2c + iVar4);
              local_1ac[uVar11 - 0xf] = '\0';
            }
          } while (uVar2 != 0);
        }
        uVar11 = local_30;
        uVar10 = 0;
        do {
          uVar2 = uVar10;
          uVar10 = uVar2 + 1;
        } while (local_1ac[uVar2 - 0x10] != '\0');
        if (uVar10 < 0xc0) {
          local_1ac[uVar2 - 0x10] = ' ';
          uVar2 = uVar10;
        }
        local_1ac[uVar2 - 0x10] = '\0';
        uVar10 = 0;
        do {
          uVar2 = uVar10;
          uVar10 = uVar2 + 1;
        } while (local_1ac[uVar2 - 0x10] != '\0');
        if (uVar2 + 1 < 0xc0) {
          cVar6 = 'm';
          pcVar5 = str_1000f585;
          do {
            pcVar5 = pcVar5 + 1;
            local_1ac[uVar2 - 0x10] = cVar6;
            uVar2 = uVar2 + 1;
            cVar6 = *pcVar5;
            if (cVar6 == '\0') break;
          } while (uVar2 < 0xbf);
        }
        local_1ac[uVar2 - 0x10] = '\0';
        uVar10 = 0;
        do {
          uVar2 = uVar10;
          uVar10 = uVar2 + 1;
        } while (local_1ac[uVar2 - 0x10] != '\0');
        if (uVar10 < 0xc0) {
          local_1ac[uVar2 - 0x10] = '=';
          uVar2 = uVar10;
        }
        local_1ac[uVar2 - 0x10] = '\0';
        iVar4 = 8;
        do {
          uVar2 = uVar11 >> ((char)iVar4 * '\x04' - 4U & 0x1f) & 0xf;
          bVar8 = (byte)uVar2;
          bVar7 = bVar8 + 0x37;
          uVar10 = 0;
          do {
            uVar9 = uVar10;
            uVar10 = uVar9 + 1;
          } while (local_1ac[uVar9 - 0x10] != '\0');
          if (uVar9 + 1 < 0xc0) {
            if (uVar2 < 10) {
              bVar7 = bVar8 | 0x30;
            }
            local_1ac[uVar9 - 0x10] = bVar7;
            local_1ac[uVar9 - 0xf] = '\0';
          }
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
        pcVar1 = (code *)api[3];
      }
      else {
LAB_10005b03:
        if (*api != 0x54584b57) goto LAB_100062f6;
        uVar10 = api[2];
LAB_100060ee:
        if ((((uVar10 < 0xb0) || ((code *)api[0x2b] == (code *)0x0)) ||
            (iVar4 = (*(code *)api[0x2b])(0x199,&local_38,&local_1c8), iVar4 == 0)) ||
           (((*api != 0x54584b57 || ((uint)api[2] < 0xb0)) ||
            (((code *)api[0x2b] == (code *)0x0 ||
             (iVar4 = (*(code *)api[0x2b])(0x198,&local_210,&local_20c), iVar4 == 0))))))
        goto LAB_100062f6;
        local_34 = local_210 >> 8 & 0xff;
        local_208 = ((int)(local_210 << 0x11) >> 0x1f & 5U) + (local_210 >> 8 & 0x3f) * 10;
        local_3c = local_38 >> 8 & 0xff;
        local_204 = ((int)(local_38 << 0x11) >> 0x1f & 5U) + (local_38 >> 8 & 0x3f) * 10;
        local_20 = local_20c >> 8 & 0xff;
        local_1cc = ((int)(local_20c << 0x11) >> 0x1f & 5U) + (local_20c >> 8 & 0x3f) * 10;
        if (((-1 < (short)local_20c) && (local_20 != 0)) &&
           ((local_34 != 0 && (local_208 <= local_1cc)))) {
          uVar10 = local_38 & 0xff;
          if (uVar10 == 0) {
            uVar10 = local_210 & 0xff;
          }
          uVar10 = local_20 << 8 | local_38 & 0xffff0000 | uVar10;
          if ((((uVar10 != local_38) && (*api == 0x54584b57)) && (0xb3 < (uint)api[2])) &&
             (((code *)api[0x2c] != (code *)0x0 &&
              (iVar4 = (*(code *)api[0x2c])(0x199,uVar10,local_1c8), iVar4 != 0)))) {
            local_38 = uVar10;
            iVar3 = 1;
            local_3c = local_20;
            local_204 = local_1cc;
          }
        }
        uVar10 = 0;
        do {
          uVar11 = uVar10;
          uVar10 = uVar11 + 1;
        } while (*(char *)((int)&local_564 + uVar11) != '\0');
        if (uVar11 + 1 < 0x300) {
          cVar6 = ' ';
          pcVar5 = str_1000f592;
          do {
            pcVar5 = pcVar5 + 1;
            *(char *)((int)&local_564 + uVar11) = cVar6;
            uVar11 = uVar11 + 1;
            cVar6 = *pcVar5;
            if (cVar6 == '\0') break;
          } while (uVar11 < 0x2ff);
        }
        *(undefined1 *)((int)&local_564 + uVar11) = 0;
        uVar11 = local_30;
        uVar10 = 0;
        do {
          uVar2 = uVar10;
          uVar10 = uVar2 + 1;
        } while (*(char *)((int)&local_564 + uVar2) != '\0');
        if (uVar10 < 0x300) {
          *(undefined1 *)((int)&local_564 + uVar2) = 0x20;
          uVar2 = uVar10;
        }
        *(undefined1 *)((int)&local_564 + uVar2) = 0;
        uVar10 = 0;
        do {
          uVar2 = uVar10;
          uVar10 = uVar2 + 1;
        } while (*(char *)((int)&local_564 + uVar2) != '\0');
        if (uVar2 + 1 < 0x300) {
          cVar6 = 'm';
          pcVar5 = str_1000f585;
          do {
            pcVar5 = pcVar5 + 1;
            *(char *)((int)&local_564 + uVar2) = cVar6;
            uVar2 = uVar2 + 1;
            cVar6 = *pcVar5;
            if (cVar6 == '\0') break;
          } while (uVar2 < 0x2ff);
        }
        *(undefined1 *)((int)&local_564 + uVar2) = 0;
        uVar10 = 0;
        do {
          uVar2 = uVar10;
          uVar10 = uVar2 + 1;
        } while (*(char *)((int)&local_564 + uVar2) != '\0');
        if (uVar10 < 0x300) {
          *(undefined1 *)((int)&local_564 + uVar2) = 0x3d;
          uVar2 = uVar10;
        }
        *(undefined1 *)((int)&local_564 + uVar2) = 0;
        iVar4 = 8;
        do {
          uVar10 = uVar11 >> ((char)iVar4 * '\x04' - 4U & 0x1f) & 0xf;
          bVar7 = (byte)uVar10;
          if (uVar10 < 10) {
            bVar7 = bVar7 | 0x30;
          }
          else {
            bVar7 = bVar7 + 0x37;
          }
          uVar10 = 0;
          do {
            uVar2 = uVar10;
            uVar10 = uVar2 + 1;
          } while (*(char *)((int)&local_564 + uVar2) != '\0');
          if (uVar2 + 1 < 0x300) {
            *(byte *)((int)&local_564 + uVar2) = bVar7;
            *(undefined1 *)((int)&local_564 + uVar2 + 1) = 0;
          }
          uVar10 = local_38;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
        uVar11 = 0;
        do {
          uVar2 = uVar11;
          uVar11 = uVar2 + 1;
        } while (*(char *)((int)&local_564 + uVar2) != '\0');
        if (uVar11 < 0x300) {
          *(undefined1 *)((int)&local_564 + uVar2) = 0x20;
          uVar2 = uVar11;
        }
        *(undefined1 *)((int)&local_564 + uVar2) = 0;
        uVar11 = 0;
        do {
          uVar2 = uVar11;
          uVar11 = uVar2 + 1;
        } while (*(char *)((int)&local_564 + uVar2) != '\0');
        if (uVar2 + 1 < 0x300) {
          cVar6 = 'p';
          pcVar5 = str_1000f5a4;
          do {
            pcVar5 = pcVar5 + 1;
            *(char *)((int)&local_564 + uVar2) = cVar6;
            uVar2 = uVar2 + 1;
            cVar6 = *pcVar5;
            if (cVar6 == '\0') break;
          } while (uVar2 < 0x2ff);
        }
        *(undefined1 *)((int)&local_564 + uVar2) = 0;
        uVar11 = 0;
        do {
          uVar2 = uVar11;
          uVar11 = uVar2 + 1;
        } while (*(char *)((int)&local_564 + uVar2) != '\0');
        if (uVar11 < 0x300) {
          *(undefined1 *)((int)&local_564 + uVar2) = 0x3d;
          uVar2 = uVar11;
        }
        *(undefined1 *)((int)&local_564 + uVar2) = 0;
        iVar4 = 8;
        do {
          uVar11 = uVar10 >> ((char)iVar4 * '\x04' - 4U & 0x1f) & 0xf;
          bVar7 = (byte)uVar11;
          if (uVar11 < 10) {
            bVar7 = bVar7 | 0x30;
          }
          else {
            bVar7 = bVar7 + 0x37;
          }
          uVar11 = 0;
          do {
            uVar2 = uVar11;
            uVar11 = uVar2 + 1;
          } while (*(char *)((int)&local_564 + uVar2) != '\0');
          if (uVar2 + 1 < 0x300) {
            *(byte *)((int)&local_564 + uVar2) = bVar7;
            *(undefined1 *)((int)&local_564 + uVar2 + 1) = 0;
          }
          uVar11 = local_210;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
        uVar10 = 0;
        do {
          uVar2 = uVar10;
          uVar10 = uVar2 + 1;
        } while (*(char *)((int)&local_564 + uVar2) != '\0');
        if (uVar10 < 0x300) {
          *(undefined1 *)((int)&local_564 + uVar2) = 0x20;
          uVar2 = uVar10;
        }
        *(undefined1 *)((int)&local_564 + uVar2) = 0;
        uVar10 = 0;
        do {
          uVar2 = uVar10;
          uVar10 = uVar2 + 1;
        } while (*(char *)((int)&local_564 + uVar2) != '\0');
        if (uVar2 + 1 < 0x300) {
          cVar6 = 'p';
          pcVar5 = str_1000f5ae;
          do {
            pcVar5 = pcVar5 + 1;
            *(char *)((int)&local_564 + uVar2) = cVar6;
            uVar2 = uVar2 + 1;
            cVar6 = *pcVar5;
            if (cVar6 == '\0') break;
          } while (uVar2 < 0x2ff);
        }
        *(undefined1 *)((int)&local_564 + uVar2) = 0;
        uVar10 = 0;
        do {
          uVar2 = uVar10;
          uVar10 = uVar2 + 1;
        } while (*(char *)((int)&local_564 + uVar2) != '\0');
        if (uVar10 < 0x300) {
          *(undefined1 *)((int)&local_564 + uVar2) = 0x3d;
          uVar2 = uVar10;
        }
        *(undefined1 *)((int)&local_564 + uVar2) = 0;
        iVar4 = 8;
        do {
          uVar10 = uVar11 >> ((char)iVar4 * '\x04' - 4U & 0x1f) & 0xf;
          bVar7 = (byte)uVar10;
          if (uVar10 < 10) {
            bVar7 = bVar7 | 0x30;
          }
          else {
            bVar7 = bVar7 + 0x37;
          }
          uVar10 = 0;
          do {
            uVar2 = uVar10;
            uVar10 = uVar2 + 1;
          } while (*(char *)((int)&local_564 + uVar2) != '\0');
          if (uVar2 + 1 < 0x300) {
            *(byte *)((int)&local_564 + uVar2) = bVar7;
            *(undefined1 *)((int)&local_564 + uVar2 + 1) = 0;
          }
          uVar10 = local_20c;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
        uVar11 = 0;
        do {
          uVar2 = uVar11;
          uVar11 = uVar2 + 1;
        } while (*(char *)((int)&local_564 + uVar2) != '\0');
        if (uVar11 < 0x300) {
          *(undefined1 *)((int)&local_564 + uVar2) = 0x20;
          uVar2 = uVar11;
        }
        *(undefined1 *)((int)&local_564 + uVar2) = 0;
        uVar11 = 0;
        do {
          uVar2 = uVar11;
          uVar11 = uVar2 + 1;
        } while (*(char *)((int)&local_564 + uVar2) != '\0');
        if (uVar2 + 1 < 0x300) {
          cVar6 = 'p';
          pcVar5 = str_1000f5bb;
          do {
            pcVar5 = pcVar5 + 1;
            *(char *)((int)&local_564 + uVar2) = cVar6;
            uVar2 = uVar2 + 1;
            cVar6 = *pcVar5;
            if (cVar6 == '\0') break;
          } while (uVar2 < 0x2ff);
        }
        *(undefined1 *)((int)&local_564 + uVar2) = 0;
        uVar11 = 0;
        do {
          uVar2 = uVar11;
          uVar11 = uVar2 + 1;
        } while (*(char *)((int)&local_564 + uVar2) != '\0');
        if (uVar11 < 0x300) {
          *(undefined1 *)((int)&local_564 + uVar2) = 0x3d;
          uVar2 = uVar11;
        }
        *(undefined1 *)((int)&local_564 + uVar2) = 0;
        iVar4 = 8;
        do {
          uVar11 = uVar10 >> ((char)iVar4 * '\x04' - 4U & 0x1f) & 0xf;
          bVar7 = (byte)uVar11;
          if (uVar11 < 10) {
            bVar7 = bVar7 | 0x30;
          }
          else {
            bVar7 = bVar7 + 0x37;
          }
          uVar11 = 0;
          do {
            uVar2 = uVar11;
            uVar11 = uVar2 + 1;
          } while (*(char *)((int)&local_564 + uVar2) != '\0');
          if (uVar2 + 1 < 0x300) {
            *(byte *)((int)&local_564 + uVar2) = bVar7;
            *(undefined1 *)((int)&local_564 + uVar2 + 1) = 0;
          }
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
        uVar10 = 0;
        do {
          uVar11 = uVar10;
          uVar10 = uVar11 + 1;
        } while (*(char *)((int)&local_564 + uVar11) != '\0');
        if (uVar10 < 0x300) {
          *(undefined1 *)((int)&local_564 + uVar11) = 0x20;
          uVar11 = uVar10;
        }
        *(undefined1 *)((int)&local_564 + uVar11) = 0;
        uVar10 = 0;
        do {
          uVar11 = uVar10;
          uVar10 = uVar11 + 1;
        } while (*(char *)((int)&local_564 + uVar11) != '\0');
        if (uVar11 + 1 < 0x300) {
          cVar6 = 'c';
          pcVar5 = str_1000f5c8;
          do {
            pcVar5 = pcVar5 + 1;
            *(char *)((int)&local_564 + uVar11) = cVar6;
            uVar11 = uVar11 + 1;
            cVar6 = *pcVar5;
            if (cVar6 == '\0') break;
          } while (uVar11 < 0x2ff);
        }
        *(undefined1 *)((int)&local_564 + uVar11) = 0;
        uVar10 = 0;
        do {
          uVar11 = uVar10;
          uVar10 = uVar11 + 1;
        } while (*(char *)((int)&local_564 + uVar11) != '\0');
        if (uVar10 < 0x300) {
          *(undefined1 *)((int)&local_564 + uVar11) = 0x3d;
          uVar11 = uVar10;
        }
        bVar14 = local_34 == 0;
        *(undefined1 *)((int)&local_564 + uVar11) = 0;
        if (bVar14) {
          uVar10 = 0;
          do {
            uVar11 = uVar10;
            uVar10 = uVar11 + 1;
          } while (*(char *)((int)&local_564 + uVar11) != '\0');
          if (uVar11 + 1 < 0x300) {
            *(undefined2 *)((int)&local_564 + uVar11) = 0x30;
          }
        }
        else {
          uVar10 = local_34;
          uVar11 = 0;
          do {
            local_1ac[uVar11 - 0x10] = (byte)(uVar10 % 10) | 0x30;
            uVar2 = uVar11 + 1;
            if (8 < uVar11) break;
            bVar14 = 9 < uVar10;
            uVar10 = uVar10 / 10;
            uVar11 = uVar2;
          } while (bVar14);
          do {
            iVar4 = uVar2 - 0x11;
            uVar2 = uVar2 - 1;
            uVar10 = 0;
            do {
              uVar11 = uVar10;
              uVar10 = uVar11 + 1;
            } while (*(char *)((int)&local_564 + uVar11) != '\0');
            if (uVar11 + 1 < 0x300) {
              *(char *)((int)&local_564 + uVar11) = local_1ac[iVar4];
              *(undefined1 *)((int)&local_564 + uVar11 + 1) = 0;
            }
          } while (uVar2 != 0);
        }
        uVar10 = 0;
        do {
          uVar11 = uVar10;
          uVar10 = uVar11 + 1;
        } while (*(char *)((int)&local_564 + uVar11) != '\0');
        if (uVar10 < 0x300) {
          *(undefined1 *)((int)&local_564 + uVar11) = 0x20;
          uVar11 = uVar10;
        }
        *(undefined1 *)((int)&local_564 + uVar11) = 0;
        uVar10 = 0;
        do {
          uVar11 = uVar10;
          uVar10 = uVar11 + 1;
        } while (*(char *)((int)&local_564 + uVar11) != '\0');
        if (uVar11 + 1 < 0x300) {
          cVar6 = 't';
          pcVar5 = str_1000f5d9;
          do {
            pcVar5 = pcVar5 + 1;
            *(char *)((int)&local_564 + uVar11) = cVar6;
            uVar11 = uVar11 + 1;
            cVar6 = *pcVar5;
            if (cVar6 == '\0') break;
          } while (uVar11 < 0x2ff);
        }
        *(undefined1 *)((int)&local_564 + uVar11) = 0;
        uVar10 = 0;
        do {
          uVar11 = uVar10;
          uVar10 = uVar11 + 1;
        } while (*(char *)((int)&local_564 + uVar11) != '\0');
        if (uVar10 < 0x300) {
          *(undefined1 *)((int)&local_564 + uVar11) = 0x3d;
          uVar11 = uVar10;
        }
        *(undefined1 *)((int)&local_564 + uVar11) = 0;
        if (local_3c == 0) {
          uVar10 = 0;
          do {
            uVar11 = uVar10;
            uVar10 = uVar11 + 1;
          } while (*(char *)((int)&local_564 + uVar11) != '\0');
          if (uVar11 + 1 < 0x300) {
            *(undefined2 *)((int)&local_564 + uVar11) = 0x30;
          }
        }
        else {
          uVar10 = local_3c;
          uVar11 = 0;
          do {
            local_1ac[uVar11 - 0x10] = (byte)(uVar10 % 10) | 0x30;
            uVar2 = uVar11 + 1;
            if (8 < uVar11) break;
            bVar14 = 9 < uVar10;
            uVar10 = uVar10 / 10;
            uVar11 = uVar2;
          } while (bVar14);
          do {
            iVar4 = uVar2 - 0x11;
            uVar2 = uVar2 - 1;
            uVar10 = 0;
            do {
              uVar11 = uVar10;
              uVar10 = uVar11 + 1;
            } while (*(char *)((int)&local_564 + uVar11) != '\0');
            if (uVar11 + 1 < 0x300) {
              *(char *)((int)&local_564 + uVar11) = local_1ac[iVar4];
              *(undefined1 *)((int)&local_564 + uVar11 + 1) = 0;
            }
          } while (uVar2 != 0);
        }
        uVar10 = 0;
        do {
          uVar11 = uVar10;
          uVar10 = uVar11 + 1;
        } while (*(char *)((int)&local_564 + uVar11) != '\0');
        if (uVar10 < 0x300) {
          *(undefined1 *)((int)&local_564 + uVar11) = 0x20;
          uVar11 = uVar10;
        }
        *(undefined1 *)((int)&local_564 + uVar11) = 0;
        uVar10 = 0;
        do {
          uVar11 = uVar10;
          uVar10 = uVar11 + 1;
        } while (*(char *)((int)&local_564 + uVar11) != '\0');
        if (uVar11 + 1 < 0x300) {
          cVar6 = 'm';
          pcVar5 = str_1000f5e9;
          do {
            pcVar5 = pcVar5 + 1;
            *(char *)((int)&local_564 + uVar11) = cVar6;
            uVar11 = uVar11 + 1;
            cVar6 = *pcVar5;
            if (cVar6 == '\0') break;
          } while (uVar11 < 0x2ff);
        }
        *(undefined1 *)((int)&local_564 + uVar11) = 0;
        uVar10 = 0;
        do {
          uVar11 = uVar10;
          uVar10 = uVar11 + 1;
        } while (*(char *)((int)&local_564 + uVar11) != '\0');
        if (uVar10 < 0x300) {
          *(undefined1 *)((int)&local_564 + uVar11) = 0x3d;
          uVar11 = uVar10;
        }
        bVar14 = local_20 == 0;
        *(undefined1 *)((int)&local_564 + uVar11) = 0;
        if (bVar14) {
          uVar10 = 0;
          do {
            uVar11 = uVar10;
            uVar10 = uVar11 + 1;
          } while (*(char *)((int)&local_564 + uVar11) != '\0');
          if (uVar11 + 1 < 0x300) {
            *(undefined2 *)((int)&local_564 + uVar11) = 0x30;
          }
        }
        else {
          uVar10 = local_20;
          uVar11 = 0;
          do {
            local_1ac[uVar11 - 0x10] = (byte)(uVar10 % 10) | 0x30;
            uVar2 = uVar11 + 1;
            if (8 < uVar11) break;
            bVar14 = 9 < uVar10;
            uVar10 = uVar10 / 10;
            uVar11 = uVar2;
          } while (bVar14);
          do {
            iVar4 = uVar2 - 0x11;
            uVar2 = uVar2 - 1;
            uVar10 = 0;
            do {
              uVar11 = uVar10;
              uVar10 = uVar11 + 1;
            } while (*(char *)((int)&local_564 + uVar11) != '\0');
            if (uVar11 + 1 < 0x300) {
              *(char *)((int)&local_564 + uVar11) = local_1ac[iVar4];
              *(undefined1 *)((int)&local_564 + uVar11 + 1) = 0;
            }
          } while (uVar2 != 0);
        }
        recovered_1000dd80((int)&local_564,0x300,str_1000f5f6,local_208);
        recovered_1000dd80((int)&local_564,0x300,str_1000f603,local_204);
        recovered_1000dd80((int)&local_564,0x300,str_1000f60f,local_1cc);
        local_1c0 = str_1000f304;
        if (iVar3 != 0) {
          local_1c0 = &DAT_1000f2ff;
        }
        local_19 = *local_1c0;
        if (*local_1c0 != '\0') {
          uVar10 = 0;
          do {
            uVar11 = uVar10;
            uVar10 = uVar11 + 1;
          } while (*(char *)((int)&local_564 + uVar11) != '\0');
          if (uVar10 < 0x300) {
            *(undefined1 *)((int)&local_564 + uVar11) = 0x20;
            uVar11 = uVar10;
          }
          *(undefined1 *)((int)&local_564 + uVar11) = 0;
          uVar10 = 0;
          do {
            uVar11 = uVar10;
            uVar10 = uVar11 + 1;
          } while (*(char *)((int)&local_564 + uVar11) != '\0');
          if (uVar11 + 1 < 0x300) {
            cVar6 = 'p';
            pcVar5 = str_1000f618;
            do {
              pcVar5 = pcVar5 + 1;
              *(char *)((int)&local_564 + uVar11) = cVar6;
              uVar11 = uVar11 + 1;
              cVar6 = *pcVar5;
              if (cVar6 == '\0') break;
            } while (uVar11 < 0x2ff);
          }
          *(undefined1 *)((int)&local_564 + uVar11) = 0;
          uVar10 = 0;
          do {
            uVar11 = uVar10;
            uVar10 = uVar11 + 1;
          } while (*(char *)((int)&local_564 + uVar11) != '\0');
          if (uVar10 < 0x300) {
            *(undefined1 *)((int)&local_564 + uVar11) = 0x3d;
            uVar11 = uVar10;
          }
          *(undefined1 *)((int)&local_564 + uVar11) = 0;
          uVar10 = 0;
          do {
            uVar11 = uVar10;
            uVar10 = uVar11 + 1;
          } while (*(char *)((int)&local_564 + uVar11) != '\0');
          if (uVar11 + 1 < 0x300) {
            cVar6 = local_19;
            pcVar5 = local_1c0;
            do {
              pcVar5 = pcVar5 + 1;
              *(char *)((int)&local_564 + uVar11) = cVar6;
              uVar11 = uVar11 + 1;
              cVar6 = *pcVar5;
              if (cVar6 == '\0') break;
            } while (uVar11 < 0x2ff);
          }
          *(undefined1 *)((int)&local_564 + uVar11) = 0;
        }
        local_1bc = local_1bc & 0xffffff00;
        uVar10 = 0;
        do {
          uVar11 = uVar10;
          uVar10 = uVar11 + 1;
        } while (local_1ac[uVar11 - 0x10] != '\0');
        if (uVar11 + 1 < 0x140) {
          cVar6 = 'v';
          pcVar5 = str_1000f62b;
          do {
            pcVar5 = pcVar5 + 1;
            local_1ac[uVar11 - 0x10] = cVar6;
            uVar11 = uVar11 + 1;
            cVar6 = *pcVar5;
            if (cVar6 == '\0') break;
          } while (uVar11 < 0x13f);
        }
        local_1ac[uVar11 - 0x10] = '\0';
        uVar10 = 0;
        do {
          uVar11 = uVar10;
          uVar10 = uVar11 + 1;
        } while (local_1ac[uVar11 - 0x10] != '\0');
        if (uVar10 < 0x140) {
          local_1ac[uVar11 - 0x10] = ' ';
          uVar11 = uVar10;
        }
        local_1ac[uVar11 - 0x10] = '\0';
        uVar10 = 0;
        do {
          uVar11 = uVar10;
          uVar10 = uVar11 + 1;
        } while (local_1ac[uVar11 - 0x10] != '\0');
        if (uVar11 + 1 < 0x140) {
          cVar6 = 'f';
          pcVar5 = str_1000f4b7;
          do {
            pcVar5 = pcVar5 + 1;
            local_1ac[uVar11 - 0x10] = cVar6;
            uVar11 = uVar11 + 1;
            cVar6 = *pcVar5;
            if (cVar6 == '\0') break;
          } while (uVar11 < 0x13f);
        }
        local_1ac[uVar11 - 0x10] = '\0';
        uVar10 = 0;
        do {
          uVar11 = uVar10;
          uVar10 = uVar11 + 1;
        } while (local_1ac[uVar11 - 0x10] != '\0');
        if (uVar10 < 0x140) {
          local_1ac[uVar11 - 0x10] = '=';
          uVar11 = uVar10;
        }
        bVar14 = local_14 == 0;
        local_1ac[uVar11 - 0x10] = '\0';
        if (bVar14) {
          uVar10 = 0;
          do {
            uVar11 = uVar10;
            uVar10 = uVar11 + 1;
          } while (local_1ac[uVar11 - 0x10] != '\0');
          if (uVar11 + 1 < 0x140) {
            (local_1ac + (uVar11 - 0x10))[0] = '0';
            (local_1ac + (uVar11 - 0x10))[1] = '\0';
          }
        }
        else {
          uVar10 = 0;
          do {
            uVar9 = local_14 / 10;
            *(byte *)((int)local_2c + uVar10) = (char)local_14 + (char)uVar9 * -10 | 0x30;
            uVar2 = local_14;
            uVar11 = uVar10 + 1;
            if (8 < uVar10) break;
            local_14 = uVar9;
            uVar10 = uVar11;
          } while (9 < uVar2);
          do {
            iVar4 = uVar11 - 1;
            uVar11 = uVar11 - 1;
            uVar10 = 0;
            do {
              uVar2 = uVar10;
              uVar10 = uVar2 + 1;
            } while (local_1ac[uVar2 - 0x10] != '\0');
            if (uVar2 + 1 < 0x140) {
              local_1ac[uVar2 - 0x10] = *(char *)((int)local_2c + iVar4);
              local_1ac[uVar2 - 0xf] = '\0';
            }
          } while (uVar11 != 0);
        }
        uVar10 = 0;
        do {
          uVar11 = uVar10;
          uVar10 = uVar11 + 1;
        } while (local_1ac[uVar11 - 0x10] != '\0');
        if (uVar10 < 0x140) {
          local_1ac[uVar11 - 0x10] = ' ';
          uVar11 = uVar10;
        }
        local_1ac[uVar11 - 0x10] = '\0';
        uVar10 = 0;
        do {
          uVar11 = uVar10;
          uVar10 = uVar11 + 1;
        } while (local_1ac[uVar11 - 0x10] != '\0');
        if (uVar11 + 1 < 0x140) {
          cVar6 = 'm';
          pcVar5 = str_1000f4be;
          do {
            pcVar5 = pcVar5 + 1;
            local_1ac[uVar11 - 0x10] = cVar6;
            uVar11 = uVar11 + 1;
            cVar6 = *pcVar5;
            if (cVar6 == '\0') break;
          } while (uVar11 < 0x13f);
        }
        local_1ac[uVar11 - 0x10] = '\0';
        uVar10 = 0;
        do {
          uVar11 = uVar10;
          uVar10 = uVar11 + 1;
        } while (local_1ac[uVar11 - 0x10] != '\0');
        if (uVar10 < 0x140) {
          local_1ac[uVar11 - 0x10] = '=';
          uVar11 = uVar10;
        }
        bVar14 = local_18 == 0;
        local_1ac[uVar11 - 0x10] = '\0';
        if (bVar14) {
          uVar10 = 0;
          do {
            uVar11 = uVar10;
            uVar10 = uVar11 + 1;
          } while (local_1ac[uVar11 - 0x10] != '\0');
          if (uVar11 + 1 < 0x140) {
            (local_1ac + (uVar11 - 0x10))[0] = '0';
            (local_1ac + (uVar11 - 0x10))[1] = '\0';
          }
        }
        else {
          uVar10 = 0;
          do {
            uVar9 = local_18 / 10;
            *(byte *)((int)local_2c + uVar10) = (char)local_18 + (char)uVar9 * -10 | 0x30;
            uVar2 = local_18;
            uVar11 = uVar10 + 1;
            if (8 < uVar10) break;
            local_18 = uVar9;
            uVar10 = uVar11;
          } while (9 < uVar2);
          do {
            iVar4 = uVar11 - 1;
            uVar11 = uVar11 - 1;
            uVar10 = 0;
            do {
              uVar2 = uVar10;
              uVar10 = uVar2 + 1;
            } while (local_1ac[uVar2 - 0x10] != '\0');
            if (uVar2 + 1 < 0x140) {
              local_1ac[uVar2 - 0x10] = *(char *)((int)local_2c + iVar4);
              local_1ac[uVar2 - 0xf] = '\0';
            }
          } while (uVar11 != 0);
        }
        uVar10 = 0;
        do {
          uVar11 = uVar10;
          uVar10 = uVar11 + 1;
        } while (local_1ac[uVar11 - 0x10] != '\0');
        if (uVar10 < 0x140) {
          local_1ac[uVar11 - 0x10] = ' ';
          uVar11 = uVar10;
        }
        local_1ac[uVar11 - 0x10] = '\0';
        uVar10 = 0;
        do {
          uVar11 = uVar10;
          uVar10 = uVar11 + 1;
        } while (local_1ac[uVar11 - 0x10] != '\0');
        if (uVar11 + 1 < 0x140) {
          cVar6 = 'c';
          pcVar5 = str_1000f5c8;
          do {
            pcVar5 = pcVar5 + 1;
            local_1ac[uVar11 - 0x10] = cVar6;
            uVar11 = uVar11 + 1;
            cVar6 = *pcVar5;
            if (cVar6 == '\0') break;
          } while (uVar11 < 0x13f);
        }
        local_1ac[uVar11 - 0x10] = '\0';
        uVar10 = 0;
        do {
          uVar11 = uVar10;
          uVar10 = uVar11 + 1;
        } while (local_1ac[uVar11 - 0x10] != '\0');
        if (uVar10 < 0x140) {
          local_1ac[uVar11 - 0x10] = '=';
          uVar11 = uVar10;
        }
        bVar14 = local_34 == 0;
        local_1ac[uVar11 - 0x10] = '\0';
        if (bVar14) {
          uVar10 = 0;
          do {
            uVar11 = uVar10;
            uVar10 = uVar11 + 1;
          } while (local_1ac[uVar11 - 0x10] != '\0');
          if (uVar11 + 1 < 0x140) {
            (local_1ac + (uVar11 - 0x10))[0] = '0';
            (local_1ac + (uVar11 - 0x10))[1] = '\0';
          }
        }
        else {
          uVar10 = 0;
          do {
            uVar2 = local_34;
            *(byte *)((int)local_2c + uVar10) = (char)local_34 + (char)(local_34 / 10) * -10 | 0x30;
            uVar11 = uVar10 + 1;
            if (8 < uVar10) break;
            local_34 = local_34 / 10;
            uVar10 = uVar11;
          } while (9 < uVar2);
          do {
            iVar4 = uVar11 - 1;
            uVar11 = uVar11 - 1;
            uVar10 = 0;
            do {
              uVar2 = uVar10;
              uVar10 = uVar2 + 1;
            } while (local_1ac[uVar2 - 0x10] != '\0');
            if (uVar2 + 1 < 0x140) {
              local_1ac[uVar2 - 0x10] = *(char *)((int)local_2c + iVar4);
              local_1ac[uVar2 - 0xf] = '\0';
            }
          } while (uVar11 != 0);
        }
        uVar10 = 0;
        do {
          uVar11 = uVar10;
          uVar10 = uVar11 + 1;
        } while (local_1ac[uVar11 - 0x10] != '\0');
        if (uVar10 < 0x140) {
          local_1ac[uVar11 - 0x10] = ' ';
          uVar11 = uVar10;
        }
        local_1ac[uVar11 - 0x10] = '\0';
        uVar10 = 0;
        do {
          uVar11 = uVar10;
          uVar10 = uVar11 + 1;
        } while (local_1ac[uVar11 - 0x10] != '\0');
        if (uVar11 + 1 < 0x140) {
          cVar6 = 't';
          pcVar5 = str_1000f5d9;
          do {
            pcVar5 = pcVar5 + 1;
            local_1ac[uVar11 - 0x10] = cVar6;
            uVar11 = uVar11 + 1;
            cVar6 = *pcVar5;
            if (cVar6 == '\0') break;
          } while (uVar11 < 0x13f);
        }
        local_1ac[uVar11 - 0x10] = '\0';
        uVar10 = 0;
        do {
          uVar11 = uVar10;
          uVar10 = uVar11 + 1;
        } while (local_1ac[uVar11 - 0x10] != '\0');
        if (uVar10 < 0x140) {
          local_1ac[uVar11 - 0x10] = '=';
          uVar11 = uVar10;
        }
        bVar14 = local_3c == 0;
        local_1ac[uVar11 - 0x10] = '\0';
        if (bVar14) {
          uVar10 = 0;
          do {
            uVar11 = uVar10;
            uVar10 = uVar11 + 1;
          } while (local_1ac[uVar11 - 0x10] != '\0');
          if (uVar11 + 1 < 0x140) {
            (local_1ac + (uVar11 - 0x10))[0] = '0';
            (local_1ac + (uVar11 - 0x10))[1] = '\0';
          }
        }
        else {
          uVar10 = 0;
          do {
            uVar2 = local_3c;
            *(byte *)((int)local_2c + uVar10) = (char)local_3c + (char)(local_3c / 10) * -10 | 0x30;
            uVar11 = uVar10 + 1;
            if (8 < uVar10) break;
            local_3c = local_3c / 10;
            uVar10 = uVar11;
          } while (9 < uVar2);
          do {
            iVar4 = uVar11 - 1;
            uVar11 = uVar11 - 1;
            uVar10 = 0;
            do {
              uVar2 = uVar10;
              uVar10 = uVar2 + 1;
            } while (local_1ac[uVar2 - 0x10] != '\0');
            if (uVar2 + 1 < 0x140) {
              local_1ac[uVar2 - 0x10] = *(char *)((int)local_2c + iVar4);
              local_1ac[uVar2 - 0xf] = '\0';
            }
          } while (uVar11 != 0);
        }
        uVar10 = 0;
        do {
          uVar11 = uVar10;
          uVar10 = uVar11 + 1;
        } while (local_1ac[uVar11 - 0x10] != '\0');
        if (uVar10 < 0x140) {
          local_1ac[uVar11 - 0x10] = ' ';
          uVar11 = uVar10;
        }
        local_1ac[uVar11 - 0x10] = '\0';
        uVar10 = 0;
        do {
          uVar11 = uVar10;
          uVar10 = uVar11 + 1;
        } while (local_1ac[uVar11 - 0x10] != '\0');
        if (uVar11 + 1 < 0x140) {
          cVar6 = 'm';
          pcVar5 = str_1000f5e9;
          do {
            pcVar5 = pcVar5 + 1;
            local_1ac[uVar11 - 0x10] = cVar6;
            uVar11 = uVar11 + 1;
            cVar6 = *pcVar5;
            if (cVar6 == '\0') break;
          } while (uVar11 < 0x13f);
        }
        local_1ac[uVar11 - 0x10] = '\0';
        uVar10 = 0;
        do {
          uVar11 = uVar10;
          uVar10 = uVar11 + 1;
        } while (local_1ac[uVar11 - 0x10] != '\0');
        if (uVar10 < 0x140) {
          local_1ac[uVar11 - 0x10] = '=';
          uVar11 = uVar10;
        }
        bVar14 = local_20 == 0;
        local_1ac[uVar11 - 0x10] = '\0';
        if (bVar14) {
          uVar10 = 0;
          do {
            uVar11 = uVar10;
            uVar10 = uVar11 + 1;
          } while (local_1ac[uVar11 - 0x10] != '\0');
          if (uVar11 + 1 < 0x140) {
            (local_1ac + (uVar11 - 0x10))[0] = '0';
            (local_1ac + (uVar11 - 0x10))[1] = '\0';
          }
        }
        else {
          uVar10 = 0;
          do {
            uVar9 = local_20 / 10;
            *(byte *)((int)local_2c + uVar10) = (char)local_20 + (char)uVar9 * -10 | 0x30;
            uVar2 = local_20;
            uVar11 = uVar10 + 1;
            if (8 < uVar10) break;
            local_20 = uVar9;
            uVar10 = uVar11;
          } while (9 < uVar2);
          do {
            iVar4 = uVar11 - 1;
            uVar11 = uVar11 - 1;
            uVar10 = 0;
            do {
              uVar2 = uVar10;
              uVar10 = uVar2 + 1;
            } while (local_1ac[uVar2 - 0x10] != '\0');
            if (uVar2 + 1 < 0x140) {
              local_1ac[uVar2 - 0x10] = *(char *)((int)local_2c + iVar4);
              local_1ac[uVar2 - 0xf] = '\0';
            }
          } while (uVar11 != 0);
        }
        recovered_1000dd80((int)&local_1bc,0x140,str_1000f5f6,local_208);
        recovered_1000dd80((int)&local_1bc,0x140,str_1000f603,local_204);
        recovered_1000dd80((int)&local_1bc,0x140,str_1000f60f,local_1cc);
        if (local_19 != '\0') {
          uVar10 = 0;
          do {
            uVar11 = uVar10;
            uVar10 = uVar11 + 1;
          } while (local_1ac[uVar11 - 0x10] != '\0');
          if (uVar10 < 0x140) {
            local_1ac[uVar11 - 0x10] = ' ';
            uVar11 = uVar10;
          }
          local_1ac[uVar11 - 0x10] = '\0';
          uVar10 = 0;
          do {
            uVar11 = uVar10;
            uVar10 = uVar11 + 1;
          } while (local_1ac[uVar11 - 0x10] != '\0');
          if (uVar11 + 1 < 0x140) {
            cVar6 = 'c';
            pcVar5 = str_1000f650;
            do {
              pcVar5 = pcVar5 + 1;
              local_1ac[uVar11 - 0x10] = cVar6;
              uVar11 = uVar11 + 1;
              cVar6 = *pcVar5;
              if (cVar6 == '\0') break;
            } while (uVar11 < 0x13f);
          }
          local_1ac[uVar11 - 0x10] = '\0';
          uVar10 = 0;
          do {
            uVar11 = uVar10;
            uVar10 = uVar11 + 1;
          } while (local_1ac[uVar11 - 0x10] != '\0');
          if (uVar10 < 0x140) {
            local_1ac[uVar11 - 0x10] = '=';
            uVar11 = uVar10;
          }
          local_1ac[uVar11 - 0x10] = '\0';
          uVar10 = 0;
          do {
            uVar11 = uVar10;
            uVar10 = uVar11 + 1;
          } while (local_1ac[uVar11 - 0x10] != '\0');
          if (uVar11 + 1 < 0x140) {
            local_1c0 = local_1c0 + 1;
            do {
              local_1ac[uVar11 - 0x10] = local_19;
              uVar11 = uVar11 + 1;
              local_19 = *local_1c0;
              if (*local_1c0 == '\0') break;
              local_1c0 = local_1c0 + 1;
            } while (uVar11 < 0x13f);
          }
          local_1ac[uVar11 - 0x10] = '\0';
        }
        pcVar1 = (code *)api[3];
      }
      if (pcVar1 != (code *)0x0) {
        (*pcVar1)(str_1000f0c2,str_1000f4d5,&local_1bc);
      }
    }
  }
  else {
    uVar10 = 0;
    do {
      uVar11 = uVar10;
      uVar10 = uVar11 + 1;
    } while (*(char *)((int)&local_564 + uVar11) != '\0');
    if (uVar11 + 1 < 0x300) {
      cVar6 = ' ';
      pcVar5 = str_1000f438;
      do {
        pcVar5 = pcVar5 + 1;
        *(char *)((int)&local_564 + uVar11) = cVar6;
        uVar11 = uVar11 + 1;
        cVar6 = *pcVar5;
        if (cVar6 == '\0') break;
      } while (uVar11 < 0x2ff);
    }
    *(undefined1 *)((int)&local_564 + uVar11) = 0;
LAB_10001d8f:
    iVar3 = 0;
  }
  local_21c = iVar3;
  if (((*api == 0x54584b57) && (0x5f < (uint)api[2])) && (api[0x17] != 0)) {
    uVar10 = 0;
    do {
      local_14 = uVar10 & 0xff;
      iVar3 = 0;
      local_18 = uVar10;
      do {
        bVar7 = (byte)iVar3;
        iVar4 = recovered_1000df70(api,(char)local_14,bVar7,0,(undefined1 *)&local_1bc);
        if (iVar4 != 0) {
          recovered_10009e10(api,(byte *)&local_1bc,(int *)&local_260);
          if ((char)local_1b0 < '\0') {
            in_DL = (undefined1)local_14;
            iVar4 = recovered_1000df70(api,in_DL,bVar7,1,(undefined1 *)local_200);
            if (iVar4 != 0) {
              recovered_10009e10(api,(byte *)local_200,(int *)&local_260);
            }
            iVar4 = recovered_1000df70(api,in_DL,bVar7,2,(undefined1 *)local_200);
            if (iVar4 != 0) {
              recovered_10009e10(api,(byte *)local_200,(int *)&local_260);
            }
            iVar4 = recovered_1000df70(api,in_DL,bVar7,3,(undefined1 *)local_200);
            if (iVar4 != 0) {
              recovered_10009e10(api,(byte *)local_200,(int *)&local_260);
            }
            iVar4 = recovered_1000df70(api,in_DL,bVar7,4,(undefined1 *)local_200);
            if (iVar4 != 0) {
              recovered_10009e10(api,(byte *)local_200,(int *)&local_260);
            }
            iVar4 = recovered_1000df70(api,in_DL,bVar7,5,(undefined1 *)local_200);
            if (iVar4 != 0) {
              recovered_10009e10(api,(byte *)local_200,(int *)&local_260);
            }
            iVar4 = recovered_1000df70(api,in_DL,bVar7,6,(undefined1 *)local_200);
            if (iVar4 != 0) {
              recovered_10009e10(api,(byte *)local_200,(int *)&local_260);
            }
            iVar4 = recovered_1000df70(api,in_DL,bVar7,7,(undefined1 *)local_200);
            if (iVar4 != 0) {
              recovered_10009e10(api,(byte *)local_200,(int *)&local_260);
            }
          }
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 != 0x20);
      uVar10 = local_18 + 1;
    } while (uVar10 != 0x10);
  }
  if (local_250 != 0) {
    local_1bc = local_1bc & 0xffffff00;
    uVar10 = 0;
    do {
      uVar11 = uVar10;
      uVar10 = uVar11 + 1;
    } while (local_1ac[uVar11 - 0x10] != '\0');
    if (uVar11 + 1 < 0x180) {
      cVar6 = 'c';
      pcVar5 = str_1000fa91;
      do {
        pcVar5 = pcVar5 + 1;
        local_1ac[uVar11 - 0x10] = cVar6;
        uVar11 = uVar11 + 1;
        cVar6 = *pcVar5;
        if (cVar6 == '\0') break;
      } while (uVar11 < 0x17f);
    }
    local_1ac[uVar11 - 0x10] = '\0';
    uVar10 = 0;
    do {
      uVar11 = uVar10;
      uVar10 = uVar11 + 1;
    } while (local_1ac[uVar11 - 0x10] != '\0');
    if (uVar10 < 0x180) {
      local_1ac[uVar11 - 0x10] = ' ';
      uVar11 = uVar10;
    }
    local_1ac[uVar11 - 0x10] = '\0';
    uVar10 = 0;
    do {
      uVar11 = uVar10;
      uVar10 = uVar11 + 1;
    } while (local_1ac[uVar11 - 0x10] != '\0');
    if (uVar11 + 1 < 0x180) {
      cVar6 = 'd';
      pcVar5 = str_1000fabf;
      do {
        pcVar5 = pcVar5 + 1;
        local_1ac[uVar11 - 0x10] = cVar6;
        uVar11 = uVar11 + 1;
        cVar6 = *pcVar5;
        if (cVar6 == '\0') break;
      } while (uVar11 < 0x17f);
    }
    local_1ac[uVar11 - 0x10] = '\0';
    uVar10 = 0;
    do {
      uVar11 = uVar10;
      uVar10 = uVar11 + 1;
    } while (local_1ac[uVar11 - 0x10] != '\0');
    if (uVar10 < 0x180) {
      local_1ac[uVar11 - 0x10] = '=';
      uVar11 = uVar10;
    }
    local_1ac[uVar11 - 0x10] = '\0';
    uVar10 = local_250;
    uVar11 = 0;
    do {
      *(byte *)((int)local_200 + uVar11) = (char)uVar10 + (char)(uVar10 / 10) * -10 | 0x30;
      uVar2 = uVar11 + 1;
      if (8 < uVar11) break;
      bVar14 = 9 < uVar10;
      uVar10 = uVar10 / 10;
      uVar11 = uVar2;
    } while (bVar14);
    do {
      iVar3 = uVar2 - 1;
      uVar2 = uVar2 - 1;
      uVar10 = 0;
      do {
        uVar11 = uVar10;
        uVar10 = uVar11 + 1;
      } while (local_1ac[uVar11 - 0x10] != '\0');
      if (uVar11 + 1 < 0x180) {
        local_1ac[uVar11 - 0x10] = *(char *)((int)local_200 + iVar3);
        local_1ac[uVar11 - 0xf] = '\0';
      }
    } while (uVar2 != 0);
    uVar10 = 0;
    do {
      uVar11 = uVar10;
      uVar10 = uVar11 + 1;
    } while (local_1ac[uVar11 - 0x10] != '\0');
    if (uVar10 < 0x180) {
      local_1ac[uVar11 - 0x10] = ' ';
      uVar11 = uVar10;
    }
    local_1ac[uVar11 - 0x10] = '\0';
    uVar10 = 0;
    do {
      uVar11 = uVar10;
      uVar10 = uVar11 + 1;
    } while (local_1ac[uVar11 - 0x10] != '\0');
    if (uVar11 + 1 < 0x180) {
      cVar6 = 'd';
      pcVar5 = str_1000f1ff;
      do {
        pcVar5 = pcVar5 + 1;
        local_1ac[uVar11 - 0x10] = cVar6;
        uVar11 = uVar11 + 1;
        cVar6 = *pcVar5;
        if (cVar6 == '\0') break;
      } while (uVar11 < 0x17f);
    }
    local_1ac[uVar11 - 0x10] = '\0';
    uVar10 = 0;
    do {
      uVar11 = uVar10;
      uVar10 = uVar11 + 1;
    } while (local_1ac[uVar11 - 0x10] != '\0');
    if (uVar10 < 0x180) {
      local_1ac[uVar11 - 0x10] = '=';
      uVar11 = uVar10;
    }
    local_1ac[uVar11 - 0x10] = '\0';
    if (local_24c == 0) {
      uVar10 = 0;
      do {
        uVar11 = uVar10;
        uVar10 = uVar11 + 1;
      } while (local_1ac[uVar11 - 0x10] != '\0');
      if (uVar11 + 1 < 0x180) {
        (local_1ac + (uVar11 - 0x10))[0] = '0';
        (local_1ac + (uVar11 - 0x10))[1] = '\0';
      }
    }
    else {
      uVar10 = local_24c;
      uVar11 = 0;
      do {
        *(byte *)((int)local_200 + uVar11) = (char)uVar10 + (char)(uVar10 / 10) * -10 | 0x30;
        uVar2 = uVar11 + 1;
        if (8 < uVar11) break;
        bVar14 = 9 < uVar10;
        uVar10 = uVar10 / 10;
        uVar11 = uVar2;
      } while (bVar14);
      do {
        iVar3 = uVar2 - 1;
        uVar2 = uVar2 - 1;
        uVar10 = 0;
        do {
          uVar11 = uVar10;
          uVar10 = uVar11 + 1;
        } while (local_1ac[uVar11 - 0x10] != '\0');
        if (uVar11 + 1 < 0x180) {
          local_1ac[uVar11 - 0x10] = *(char *)((int)local_200 + iVar3);
          local_1ac[uVar11 - 0xf] = '\0';
        }
      } while (uVar2 != 0);
    }
    uVar10 = 0;
    do {
      uVar11 = uVar10;
      uVar10 = uVar11 + 1;
    } while (local_1ac[uVar11 - 0x10] != '\0');
    if (uVar10 < 0x180) {
      local_1ac[uVar11 - 0x10] = ' ';
      uVar11 = uVar10;
    }
    local_1ac[uVar11 - 0x10] = '\0';
    uVar10 = 0;
    do {
      uVar11 = uVar10;
      uVar10 = uVar11 + 1;
    } while (local_1ac[uVar11 - 0x10] != '\0');
    if (uVar11 + 1 < 0x180) {
      cVar6 = 'a';
      pcVar5 = &DAT_1000f26a;
      do {
        local_1ac[uVar11 - 0x10] = cVar6;
        uVar11 = uVar11 + 1;
        cVar6 = *pcVar5;
        if (cVar6 == '\0') break;
        pcVar5 = pcVar5 + 1;
      } while (uVar11 < 0x17f);
    }
    local_1ac[uVar11 - 0x10] = '\0';
    uVar10 = 0;
    do {
      uVar11 = uVar10;
      uVar10 = uVar11 + 1;
    } while (local_1ac[uVar11 - 0x10] != '\0');
    if (uVar10 < 0x180) {
      local_1ac[uVar11 - 0x10] = '=';
      uVar11 = uVar10;
    }
    local_1ac[uVar11 - 0x10] = '\0';
    if (local_248 == 0) {
      uVar10 = 0;
      do {
        uVar11 = uVar10;
        uVar10 = uVar11 + 1;
      } while (local_1ac[uVar11 - 0x10] != '\0');
      if (uVar11 + 1 < 0x180) {
        (local_1ac + (uVar11 - 0x10))[0] = '0';
        (local_1ac + (uVar11 - 0x10))[1] = '\0';
      }
    }
    else {
      uVar10 = local_248;
      uVar11 = 0;
      do {
        *(byte *)((int)local_200 + uVar11) = (char)uVar10 + (char)(uVar10 / 10) * -10 | 0x30;
        uVar2 = uVar11 + 1;
        if (8 < uVar11) break;
        bVar14 = 9 < uVar10;
        uVar10 = uVar10 / 10;
        uVar11 = uVar2;
      } while (bVar14);
      do {
        iVar3 = uVar2 - 1;
        uVar2 = uVar2 - 1;
        uVar10 = 0;
        do {
          uVar11 = uVar10;
          uVar10 = uVar11 + 1;
        } while (local_1ac[uVar11 - 0x10] != '\0');
        if (uVar11 + 1 < 0x180) {
          local_1ac[uVar11 - 0x10] = *(char *)((int)local_200 + iVar3);
          local_1ac[uVar11 - 0xf] = '\0';
        }
      } while (uVar2 != 0);
    }
    uVar10 = 0;
    do {
      uVar11 = uVar10;
      uVar10 = uVar11 + 1;
    } while (local_1ac[uVar11 - 0x10] != '\0');
    if (uVar10 < 0x180) {
      local_1ac[uVar11 - 0x10] = ' ';
      uVar11 = uVar10;
    }
    local_1ac[uVar11 - 0x10] = '\0';
    uVar10 = 0;
    do {
      uVar11 = uVar10;
      uVar10 = uVar11 + 1;
    } while (local_1ac[uVar11 - 0x10] != '\0');
    if (uVar11 + 1 < 0x180) {
      cVar6 = 'h';
      pcVar5 = &DAT_1000f26f;
      do {
        local_1ac[uVar11 - 0x10] = cVar6;
        uVar11 = uVar11 + 1;
        cVar6 = *pcVar5;
        if (cVar6 == '\0') break;
        pcVar5 = pcVar5 + 1;
      } while (uVar11 < 0x17f);
    }
    local_1ac[uVar11 - 0x10] = '\0';
    uVar10 = 0;
    do {
      uVar11 = uVar10;
      uVar10 = uVar11 + 1;
    } while (local_1ac[uVar11 - 0x10] != '\0');
    if (uVar10 < 0x180) {
      local_1ac[uVar11 - 0x10] = '=';
      uVar11 = uVar10;
    }
    local_1ac[uVar11 - 0x10] = '\0';
    if (local_244 == 0) {
      uVar10 = 0;
      do {
        uVar11 = uVar10;
        uVar10 = uVar11 + 1;
      } while (local_1ac[uVar11 - 0x10] != '\0');
      if (uVar11 + 1 < 0x180) {
        (local_1ac + (uVar11 - 0x10))[0] = '0';
        (local_1ac + (uVar11 - 0x10))[1] = '\0';
      }
    }
    else {
      uVar10 = local_244;
      uVar11 = 0;
      do {
        *(byte *)((int)local_200 + uVar11) = (char)uVar10 + (char)(uVar10 / 10) * -10 | 0x30;
        uVar2 = uVar11 + 1;
        if (8 < uVar11) break;
        bVar14 = 9 < uVar10;
        uVar10 = uVar10 / 10;
        uVar11 = uVar2;
      } while (bVar14);
      do {
        iVar3 = uVar2 - 1;
        uVar2 = uVar2 - 1;
        uVar10 = 0;
        do {
          uVar11 = uVar10;
          uVar10 = uVar11 + 1;
        } while (local_1ac[uVar11 - 0x10] != '\0');
        if (uVar11 + 1 < 0x180) {
          local_1ac[uVar11 - 0x10] = *(char *)((int)local_200 + iVar3);
          local_1ac[uVar11 - 0xf] = '\0';
        }
      } while (uVar2 != 0);
    }
    uVar10 = 0;
    do {
      uVar11 = uVar10;
      uVar10 = uVar11 + 1;
    } while (local_1ac[uVar11 - 0x10] != '\0');
    if (uVar10 < 0x180) {
      local_1ac[uVar11 - 0x10] = ' ';
      uVar11 = uVar10;
    }
    local_1ac[uVar11 - 0x10] = '\0';
    uVar10 = 0;
    do {
      uVar11 = uVar10;
      uVar10 = uVar11 + 1;
    } while (local_1ac[uVar11 - 0x10] != '\0');
    if (uVar11 + 1 < 0x180) {
      cVar6 = 'u';
      pcVar5 = &DAT_1000f273;
      do {
        local_1ac[uVar11 - 0x10] = cVar6;
        uVar11 = uVar11 + 1;
        cVar6 = *pcVar5;
        if (cVar6 == '\0') break;
        pcVar5 = pcVar5 + 1;
      } while (uVar11 < 0x17f);
    }
    local_1ac[uVar11 - 0x10] = '\0';
    uVar10 = 0;
    do {
      uVar11 = uVar10;
      uVar10 = uVar11 + 1;
    } while (local_1ac[uVar11 - 0x10] != '\0');
    if (uVar10 < 0x180) {
      local_1ac[uVar11 - 0x10] = '=';
      uVar11 = uVar10;
    }
    local_1ac[uVar11 - 0x10] = '\0';
    if (local_240 == 0) {
      uVar10 = 0;
      do {
        uVar11 = uVar10;
        uVar10 = uVar11 + 1;
      } while (local_1ac[uVar11 - 0x10] != '\0');
      if (uVar11 + 1 < 0x180) {
        (local_1ac + (uVar11 - 0x10))[0] = '0';
        (local_1ac + (uVar11 - 0x10))[1] = '\0';
      }
    }
    else {
      uVar10 = local_240;
      uVar11 = 0;
      do {
        *(byte *)((int)local_200 + uVar11) = (char)uVar10 + (char)(uVar10 / 10) * -10 | 0x30;
        uVar2 = uVar11 + 1;
        if (8 < uVar11) break;
        bVar14 = 9 < uVar10;
        uVar10 = uVar10 / 10;
        uVar11 = uVar2;
      } while (bVar14);
      do {
        iVar3 = uVar2 - 1;
        uVar2 = uVar2 - 1;
        uVar10 = 0;
        do {
          uVar11 = uVar10;
          uVar10 = uVar11 + 1;
        } while (local_1ac[uVar11 - 0x10] != '\0');
        if (uVar11 + 1 < 0x180) {
          local_1ac[uVar11 - 0x10] = *(char *)((int)local_200 + iVar3);
          local_1ac[uVar11 - 0xf] = '\0';
        }
      } while (uVar2 != 0);
    }
    uVar10 = 0;
    do {
      uVar11 = uVar10;
      uVar10 = uVar11 + 1;
    } while (local_1ac[uVar11 - 0x10] != '\0');
    if (uVar10 < 0x180) {
      local_1ac[uVar11 - 0x10] = ' ';
      uVar11 = uVar10;
    }
    local_1ac[uVar11 - 0x10] = '\0';
    uVar10 = 0;
    do {
      uVar11 = uVar10;
      uVar10 = uVar11 + 1;
    } while (local_1ac[uVar11 - 0x10] != '\0');
    if (uVar11 + 1 < 0x180) {
      cVar6 = 'u';
      pcVar5 = &DAT_1000f277;
      do {
        local_1ac[uVar11 - 0x10] = cVar6;
        uVar11 = uVar11 + 1;
        cVar6 = *pcVar5;
        if (cVar6 == '\0') break;
        pcVar5 = pcVar5 + 1;
      } while (uVar11 < 0x17f);
    }
    local_1ac[uVar11 - 0x10] = '\0';
    uVar10 = 0;
    do {
      uVar11 = uVar10;
      uVar10 = uVar11 + 1;
    } while (local_1ac[uVar11 - 0x10] != '\0');
    if (uVar10 < 0x180) {
      local_1ac[uVar11 - 0x10] = '=';
      uVar11 = uVar10;
    }
    local_1ac[uVar11 - 0x10] = '\0';
    if (local_23c == 0) {
      uVar10 = 0;
      do {
        uVar11 = uVar10;
        uVar10 = uVar11 + 1;
      } while (local_1ac[uVar11 - 0x10] != '\0');
      if (uVar11 + 1 < 0x180) {
        (local_1ac + (uVar11 - 0x10))[0] = '0';
        (local_1ac + (uVar11 - 0x10))[1] = '\0';
      }
    }
    else {
      uVar10 = local_23c;
      uVar11 = 0;
      do {
        *(byte *)((int)local_200 + uVar11) = (char)uVar10 + (char)(uVar10 / 10) * -10 | 0x30;
        uVar2 = uVar11 + 1;
        if (8 < uVar11) break;
        bVar14 = 9 < uVar10;
        uVar10 = uVar10 / 10;
        uVar11 = uVar2;
      } while (bVar14);
      do {
        iVar3 = uVar2 - 1;
        uVar2 = uVar2 - 1;
        uVar10 = 0;
        do {
          uVar11 = uVar10;
          uVar10 = uVar11 + 1;
        } while (local_1ac[uVar11 - 0x10] != '\0');
        if (uVar11 + 1 < 0x180) {
          local_1ac[uVar11 - 0x10] = *(char *)((int)local_200 + iVar3);
          local_1ac[uVar11 - 0xf] = '\0';
        }
      } while (uVar2 != 0);
    }
    uVar10 = 0;
    do {
      uVar11 = uVar10;
      uVar10 = uVar11 + 1;
    } while (local_1ac[uVar11 - 0x10] != '\0');
    if (uVar10 < 0x180) {
      local_1ac[uVar11 - 0x10] = ' ';
      uVar11 = uVar10;
    }
    local_1ac[uVar11 - 0x10] = '\0';
    uVar10 = 0;
    do {
      uVar11 = uVar10;
      uVar10 = uVar11 + 1;
    } while (local_1ac[uVar11 - 0x10] != '\0');
    if (uVar11 + 1 < 0x180) {
      cVar6 = 'o';
      pcVar5 = &DAT_1000f27c;
      do {
        local_1ac[uVar11 - 0x10] = cVar6;
        uVar11 = uVar11 + 1;
        cVar6 = *pcVar5;
        if (cVar6 == '\0') break;
        pcVar5 = pcVar5 + 1;
      } while (uVar11 < 0x17f);
    }
    local_1ac[uVar11 - 0x10] = '\0';
    uVar10 = 0;
    do {
      uVar11 = uVar10;
      uVar10 = uVar11 + 1;
    } while (local_1ac[uVar11 - 0x10] != '\0');
    if (uVar10 < 0x180) {
      local_1ac[uVar11 - 0x10] = '=';
      uVar11 = uVar10;
    }
    local_1ac[uVar11 - 0x10] = '\0';
    if (local_238 == 0) {
      uVar10 = 0;
      do {
        uVar11 = uVar10;
        uVar10 = uVar11 + 1;
      } while (local_1ac[uVar11 - 0x10] != '\0');
      if (uVar11 + 1 < 0x180) {
        (local_1ac + (uVar11 - 0x10))[0] = '0';
        (local_1ac + (uVar11 - 0x10))[1] = '\0';
      }
    }
    else {
      uVar10 = local_238;
      uVar11 = 0;
      do {
        *(byte *)((int)local_200 + uVar11) = (char)uVar10 + (char)(uVar10 / 10) * -10 | 0x30;
        uVar2 = uVar11 + 1;
        if (8 < uVar11) break;
        bVar14 = 9 < uVar10;
        uVar10 = uVar10 / 10;
        uVar11 = uVar2;
      } while (bVar14);
      do {
        iVar3 = uVar2 - 1;
        uVar2 = uVar2 - 1;
        uVar10 = 0;
        do {
          uVar11 = uVar10;
          uVar10 = uVar11 + 1;
        } while (local_1ac[uVar11 - 0x10] != '\0');
        if (uVar11 + 1 < 0x180) {
          local_1ac[uVar11 - 0x10] = *(char *)((int)local_200 + iVar3);
          local_1ac[uVar11 - 0xf] = '\0';
        }
      } while (uVar2 != 0);
    }
    uVar10 = 0;
    do {
      uVar11 = uVar10;
      uVar10 = uVar11 + 1;
    } while (local_1ac[uVar11 - 0x10] != '\0');
    if (uVar10 < 0x180) {
      local_1ac[uVar11 - 0x10] = ' ';
      uVar11 = uVar10;
    }
    local_1ac[uVar11 - 0x10] = '\0';
    uVar10 = 0;
    do {
      uVar11 = uVar10;
      uVar10 = uVar11 + 1;
    } while (local_1ac[uVar11 - 0x10] != '\0');
    if (uVar11 + 1 < 0x180) {
      cVar6 = 'e';
      pcVar5 = &DAT_1000f281;
      do {
        local_1ac[uVar11 - 0x10] = cVar6;
        uVar11 = uVar11 + 1;
        cVar6 = *pcVar5;
        if (cVar6 == '\0') break;
        pcVar5 = pcVar5 + 1;
      } while (uVar11 < 0x17f);
    }
    local_1ac[uVar11 - 0x10] = '\0';
    uVar10 = 0;
    do {
      uVar11 = uVar10;
      uVar10 = uVar11 + 1;
    } while (local_1ac[uVar11 - 0x10] != '\0');
    if (uVar10 < 0x180) {
      local_1ac[uVar11 - 0x10] = '=';
      uVar11 = uVar10;
    }
    local_1ac[uVar11 - 0x10] = '\0';
    if (local_234 == 0) {
      uVar10 = 0;
      do {
        uVar11 = uVar10;
        uVar10 = uVar11 + 1;
      } while (local_1ac[uVar11 - 0x10] != '\0');
      if (uVar11 + 1 < 0x180) {
        (local_1ac + (uVar11 - 0x10))[0] = '0';
        (local_1ac + (uVar11 - 0x10))[1] = '\0';
      }
    }
    else {
      uVar10 = local_234;
      uVar11 = 0;
      do {
        *(byte *)((int)local_200 + uVar11) = (char)uVar10 + (char)(uVar10 / 10) * -10 | 0x30;
        uVar2 = uVar11 + 1;
        if (8 < uVar11) break;
        bVar14 = 9 < uVar10;
        uVar10 = uVar10 / 10;
        uVar11 = uVar2;
      } while (bVar14);
      do {
        iVar3 = uVar2 - 1;
        uVar2 = uVar2 - 1;
        uVar10 = 0;
        do {
          uVar11 = uVar10;
          uVar10 = uVar11 + 1;
        } while (local_1ac[uVar11 - 0x10] != '\0');
        if (uVar11 + 1 < 0x180) {
          local_1ac[uVar11 - 0x10] = *(char *)((int)local_200 + iVar3);
          local_1ac[uVar11 - 0xf] = '\0';
        }
      } while (uVar2 != 0);
    }
    uVar10 = 0;
    do {
      uVar11 = uVar10;
      uVar10 = uVar11 + 1;
    } while (local_1ac[uVar11 - 0x10] != '\0');
    if (uVar10 < 0x180) {
      local_1ac[uVar11 - 0x10] = ' ';
      uVar11 = uVar10;
    }
    local_1ac[uVar11 - 0x10] = '\0';
    uVar10 = 0;
    do {
      uVar11 = uVar10;
      uVar10 = uVar11 + 1;
    } while (local_1ac[uVar11 - 0x10] != '\0');
    if (uVar11 + 1 < 0x180) {
      cVar6 = 's';
      pcVar5 = str_1000f285;
      do {
        pcVar5 = pcVar5 + 1;
        local_1ac[uVar11 - 0x10] = cVar6;
        uVar11 = uVar11 + 1;
        cVar6 = *pcVar5;
        if (cVar6 == '\0') break;
      } while (uVar11 < 0x17f);
    }
    local_1ac[uVar11 - 0x10] = '\0';
    uVar10 = 0;
    do {
      uVar11 = uVar10;
      uVar10 = uVar11 + 1;
    } while (local_1ac[uVar11 - 0x10] != '\0');
    if (uVar10 < 0x180) {
      local_1ac[uVar11 - 0x10] = '=';
      uVar11 = uVar10;
    }
    local_1ac[uVar11 - 0x10] = '\0';
    if (local_230 == 0) {
      uVar10 = 0;
      do {
        uVar11 = uVar10;
        uVar10 = uVar11 + 1;
      } while (local_1ac[uVar11 - 0x10] != '\0');
      if (uVar11 + 1 < 0x180) {
        (local_1ac + (uVar11 - 0x10))[0] = '0';
        (local_1ac + (uVar11 - 0x10))[1] = '\0';
      }
    }
    else {
      uVar10 = local_230;
      uVar11 = 0;
      do {
        *(byte *)((int)local_200 + uVar11) = (char)uVar10 + (char)(uVar10 / 10) * -10 | 0x30;
        uVar2 = uVar11 + 1;
        if (8 < uVar11) break;
        bVar14 = 9 < uVar10;
        uVar10 = uVar10 / 10;
        uVar11 = uVar2;
      } while (bVar14);
      do {
        iVar3 = uVar2 - 1;
        uVar2 = uVar2 - 1;
        uVar10 = 0;
        do {
          uVar11 = uVar10;
          uVar10 = uVar11 + 1;
        } while (local_1ac[uVar11 - 0x10] != '\0');
        if (uVar11 + 1 < 0x180) {
          local_1ac[uVar11 - 0x10] = *(char *)((int)local_200 + iVar3);
          local_1ac[uVar11 - 0xf] = '\0';
        }
      } while (uVar2 != 0);
    }
    uVar10 = 0;
    do {
      uVar11 = uVar10;
      uVar10 = uVar11 + 1;
    } while (local_1ac[uVar11 - 0x10] != '\0');
    if (uVar10 < 0x180) {
      local_1ac[uVar11 - 0x10] = ' ';
      uVar11 = uVar10;
    }
    local_1ac[uVar11 - 0x10] = '\0';
    uVar10 = 0;
    do {
      uVar11 = uVar10;
      uVar10 = uVar11 + 1;
    } while (local_1ac[uVar11 - 0x10] != '\0');
    if (uVar11 + 1 < 0x180) {
      cVar6 = 'n';
      pcVar5 = str_1000f28b;
      do {
        pcVar5 = pcVar5 + 1;
        local_1ac[uVar11 - 0x10] = cVar6;
        uVar11 = uVar11 + 1;
        cVar6 = *pcVar5;
        if (cVar6 == '\0') break;
      } while (uVar11 < 0x17f);
    }
    local_1ac[uVar11 - 0x10] = '\0';
    uVar10 = 0;
    do {
      uVar11 = uVar10;
      uVar10 = uVar11 + 1;
    } while (local_1ac[uVar11 - 0x10] != '\0');
    if (uVar10 < 0x180) {
      local_1ac[uVar11 - 0x10] = '=';
      uVar11 = uVar10;
    }
    local_1ac[uVar11 - 0x10] = '\0';
    if (local_22c == 0) {
      uVar10 = 0;
      do {
        uVar11 = uVar10;
        uVar10 = uVar11 + 1;
      } while (local_1ac[uVar11 - 0x10] != '\0');
      if (uVar11 + 1 < 0x180) {
        (local_1ac + (uVar11 - 0x10))[0] = '0';
        (local_1ac + (uVar11 - 0x10))[1] = '\0';
      }
    }
    else {
      uVar10 = local_22c;
      uVar11 = 0;
      do {
        *(byte *)((int)local_200 + uVar11) = (char)uVar10 + (char)(uVar10 / 10) * -10 | 0x30;
        uVar2 = uVar11 + 1;
        if (8 < uVar11) break;
        bVar14 = 9 < uVar10;
        uVar10 = uVar10 / 10;
        uVar11 = uVar2;
      } while (bVar14);
      do {
        iVar3 = uVar2 - 1;
        uVar2 = uVar2 - 1;
        uVar10 = 0;
        do {
          uVar11 = uVar10;
          uVar10 = uVar11 + 1;
        } while (local_1ac[uVar11 - 0x10] != '\0');
        if (uVar11 + 1 < 0x180) {
          local_1ac[uVar11 - 0x10] = *(char *)((int)local_200 + iVar3);
          local_1ac[uVar11 - 0xf] = '\0';
        }
      } while (uVar2 != 0);
    }
    uVar10 = 0;
    do {
      uVar11 = uVar10;
      uVar10 = uVar11 + 1;
    } while (local_1ac[uVar11 - 0x10] != '\0');
    if (uVar11 + 1 < 0x180) {
      cVar6 = ' ';
      pcVar5 = str_1000fac7;
      do {
        pcVar5 = pcVar5 + 1;
        local_1ac[uVar11 - 0x10] = cVar6;
        uVar11 = uVar11 + 1;
        cVar6 = *pcVar5;
        if (cVar6 == '\0') break;
      } while (uVar11 < 0x17f);
    }
    local_1ac[uVar11 - 0x10] = '\0';
    if ((code *)api[3] != (code *)0x0) {
      (*(code *)api[3])(str_1000fb05,str_1000fb28,&local_1bc);
    }
  }
  recovered_10007f70((int)local_264,&local_260,(undefined1 *)&local_564);
  DAT_10011000 = api;
  if (((code *)api[8] == (code *)0x0) ||
     (iVar3 = (*(code *)api[8])(recovered_1000e490,3,str_1000f0e3), iVar3 == 0)) {
    uVar10 = 0;
    do {
      uVar11 = uVar10;
      uVar10 = uVar11 + 1;
    } while (*(char *)((int)&local_564 + uVar11) != '\0');
    iVar3 = 0;
    if (uVar11 + 1 < 0x300) {
      cVar6 = ' ';
      pcVar5 = str_1000fb8b;
      do {
        pcVar5 = pcVar5 + 1;
        *(char *)((int)&local_564 + uVar11) = cVar6;
        uVar11 = uVar11 + 1;
        cVar6 = *pcVar5;
        if (cVar6 == '\0') break;
      } while (uVar11 < 0x2ff);
    }
  }
  else {
    uVar10 = 0;
    do {
      uVar11 = uVar10;
      uVar10 = uVar11 + 1;
    } while (*(char *)((int)&local_564 + uVar11) != '\0');
    iVar3 = 1;
    if (uVar11 + 1 < 0x300) {
      cVar6 = ' ';
      pcVar5 = str_1000fb74;
      do {
        pcVar5 = pcVar5 + 1;
        *(char *)((int)&local_564 + uVar11) = cVar6;
        uVar11 = uVar11 + 1;
        cVar6 = *pcVar5;
        if (cVar6 == '\0') break;
      } while (uVar11 < 0x2ff);
    }
  }
  *(undefined1 *)((int)&local_564 + uVar11) = 0;
  if ((((*api == 0x54584b57) && (0xa7 < (uint)api[2])) && ((code *)api[0x29] != (code *)0x0)) &&
     (iVar4 = (*(code *)api[0x29])(recovered_1000e4c0,7,str_1000f0e3), iVar4 != 0)) {
    uVar10 = 0;
    do {
      uVar11 = uVar10;
      uVar10 = uVar11 + 1;
    } while (*(char *)((int)&local_564 + uVar11) != '\0');
    iVar3 = 1;
    if (uVar11 + 1 < 0x300) {
      cVar6 = ' ';
      pcVar5 = str_1000fba8;
      do {
        pcVar5 = pcVar5 + 1;
        *(char *)((int)&local_564 + uVar11) = cVar6;
        uVar11 = uVar11 + 1;
        cVar6 = *pcVar5;
        if (cVar6 == '\0') break;
      } while (uVar11 < 0x2ff);
    }
  }
  else {
    uVar10 = 0;
    do {
      uVar11 = uVar10;
      uVar10 = uVar11 + 1;
    } while (*(char *)((int)&local_564 + uVar11) != '\0');
    if (uVar11 + 1 < 0x300) {
      cVar6 = ' ';
      pcVar5 = str_1000fbc0;
      do {
        pcVar5 = pcVar5 + 1;
        *(char *)((int)&local_564 + uVar11) = cVar6;
        uVar11 = uVar11 + 1;
        cVar6 = *pcVar5;
        if (cVar6 == '\0') break;
      } while (uVar11 < 0x2ff);
    }
  }
  *(undefined1 *)((int)&local_564 + uVar11) = 0;
  uVar10 = 0;
  do {
    uVar11 = uVar10;
    uVar10 = uVar11 + 1;
  } while (*(char *)((int)&local_564 + uVar11) != '\0');
  if (uVar11 + 1 < 0x300) {
    cVar6 = ' ';
    pcVar5 = str_1000fb49;
    do {
      pcVar5 = pcVar5 + 1;
      *(char *)((int)&local_564 + uVar11) = cVar6;
      uVar11 = uVar11 + 1;
      cVar6 = *pcVar5;
      if (cVar6 == '\0') break;
    } while (uVar11 < 0x2ff);
  }
  *(undefined1 *)((int)&local_564 + uVar11) = 0;
  local_218 = iVar3;
  if (((*api == 0x54584b57) && (0x43 < (uint)api[2])) && ((code *)api[0x10] != (code *)0x0)) {
    iVar3 = (*(code *)api[0x10])(local_200);
    if (((iVar3 != 0) && (local_1f0 != 0)) &&
       ((local_1ec != 0 && ((local_1f4 != 0 && (local_200[0] != 0)))))) {
      recovered_1000e4f0((int)&local_564,0x300,str_1000fbfd,(int)local_200);
      if ((*api == 0x54584b57) &&
         (((0xb7 < (uint)api[2] && ((code *)api[0x2d] != (code *)0x0)) &&
          (uVar10 = (*(code *)api[0x2d])(1), (uVar10 & 1) != 0)))) {
        uVar10 = 0;
        do {
          uVar11 = uVar10;
          uVar10 = uVar11 + 1;
        } while (*(char *)((int)&local_564 + uVar11) != '\0');
        if (uVar11 + 1 < 0x300) {
          cVar6 = ' ';
          pcVar5 = str_1000fc0f;
          do {
            pcVar5 = pcVar5 + 1;
            *(char *)((int)&local_564 + uVar11) = cVar6;
            uVar11 = uVar11 + 1;
            cVar6 = *pcVar5;
            if (cVar6 == '\0') break;
          } while (uVar11 < 0x2ff);
        }
      }
      else {
        uVar10 = 0;
        do {
          uVar11 = uVar10;
          uVar10 = uVar11 + 1;
        } while (*(char *)((int)&local_564 + uVar11) != '\0');
        if (uVar11 + 1 < 0x300) {
          cVar6 = ' ';
          pcVar5 = str_1000fc31;
          do {
            pcVar5 = pcVar5 + 1;
            *(char *)((int)&local_564 + uVar11) = cVar6;
            uVar11 = uVar11 + 1;
            cVar6 = *pcVar5;
            if (cVar6 == '\0') break;
          } while (uVar11 < 0x2ff);
        }
      }
      *(undefined1 *)((int)&local_564 + uVar11) = 0;
      iVar3 = -0x90;
      do {
        auStack_12c[iVar3] = 0;
        iVar3 = iVar3 + 1;
      } while (iVar3 != 0);
      local_1bc = 0x90;
      local_1b8 = 0xc;
      local_1b4 = 7;
      local_1b0 = 0x100;
      local_1ac[0] = '\0';
      uVar10 = 0xffffffff;
      do {
        uVar11 = uVar10;
        uVar10 = uVar11 + 1;
      } while (local_1ac[uVar11 + 1] != '\0');
      if (uVar11 + 2 < 0x40) {
        cVar6 = 'a';
        pcVar5 = str_1000f0fc;
        do {
          pcVar5 = pcVar5 + 1;
          local_1ac[uVar10] = cVar6;
          uVar10 = uVar10 + 1;
          cVar6 = *pcVar5;
          if (cVar6 == '\0') break;
        } while (uVar10 < 0x3f);
      }
      local_1ac[uVar10] = '\0';
      local_16c[0] = '\0';
      uVar10 = 0xffffffff;
      do {
        uVar11 = uVar10;
        uVar10 = uVar11 + 1;
      } while (local_16c[uVar11 + 1] != '\0');
      if (uVar11 + 2 < 0x40) {
        cVar6 = 'h';
        pcVar5 = str_1000fc71;
        do {
          pcVar5 = pcVar5 + 1;
          local_16c[uVar10] = cVar6;
          uVar10 = uVar10 + 1;
          cVar6 = *pcVar5;
          if (cVar6 == '\0') break;
        } while (uVar10 < 0x3f);
      }
      local_16c[uVar10] = '\0';
      if (((*api == 0x54584b57) && (199 < (uint)api[2])) &&
         (((code *)api[0x31] != (code *)0x0 &&
          (iVar3 = (*(code *)api[0x31])(&local_1bc,recovered_1000e820), iVar3 != 0)))) {
        uVar10 = 0;
        do {
          uVar11 = uVar10;
          uVar10 = uVar11 + 1;
        } while (*(char *)((int)&local_564 + uVar11) != '\0');
        if (uVar11 + 1 < 0x300) {
          cVar6 = ' ';
          pcVar5 = str_1000fc86;
          do {
            pcVar5 = pcVar5 + 1;
            *(char *)((int)&local_564 + uVar11) = cVar6;
            uVar11 = uVar11 + 1;
            cVar6 = *pcVar5;
            if (cVar6 == '\0') break;
          } while (uVar11 < 0x2ff);
        }
      }
      else {
        uVar10 = 0;
        do {
          uVar11 = uVar10;
          uVar10 = uVar11 + 1;
        } while (*(char *)((int)&local_564 + uVar11) != '\0');
        if (uVar11 + 1 < 0x300) {
          cVar6 = ' ';
          pcVar5 = str_1000fc9c;
          do {
            pcVar5 = pcVar5 + 1;
            *(char *)((int)&local_564 + uVar11) = cVar6;
            uVar11 = uVar11 + 1;
            cVar6 = *pcVar5;
            if (cVar6 == '\0') break;
          } while (uVar11 < 0x2ff);
        }
      }
      *(undefined1 *)((int)&local_564 + uVar11) = 0;
      uVar10 = 0;
      do {
        uVar11 = uVar10;
        uVar10 = uVar11 + 1;
      } while (*(char *)((int)&local_564 + uVar11) != '\0');
      local_214 = 1;
      if (uVar11 + 1 < 0x300) {
        cVar6 = ' ';
        pcVar5 = str_1000fc4d;
        do {
          pcVar5 = pcVar5 + 1;
          *(char *)((int)&local_564 + uVar11) = cVar6;
          uVar11 = uVar11 + 1;
          cVar6 = *pcVar5;
          if (cVar6 == '\0') break;
        } while (uVar11 < 0x2ff);
      }
      goto LAB_10003347;
    }
  }
  uVar10 = 0;
  do {
    uVar11 = uVar10;
    uVar10 = uVar11 + 1;
  } while (*(char *)((int)&local_564 + uVar11) != '\0');
  local_214 = 0;
  if (uVar11 + 1 < 0x300) {
    cVar6 = ' ';
    pcVar5 = str_1000fbde;
    do {
      pcVar5 = pcVar5 + 1;
      *(char *)((int)&local_564 + uVar11) = cVar6;
      uVar11 = uVar11 + 1;
      cVar6 = *pcVar5;
      if (cVar6 == '\0') break;
    } while (uVar11 < 0x2ff);
  }
LAB_10003347:
  *(undefined1 *)((int)&local_564 + uVar11) = 0;
  if (local_240 != 0) {
    local_1bc = local_1bc & 0xffffff00;
    uVar10 = 0;
    do {
      uVar11 = uVar10;
      uVar10 = uVar11 + 1;
    } while (local_1ac[uVar11 - 0x10] != '\0');
    if (uVar11 + 1 < 0x180) {
      cVar6 = 'b';
      pcVar5 = str_1000fcb5;
      do {
        pcVar5 = pcVar5 + 1;
        local_1ac[uVar11 - 0x10] = cVar6;
        uVar11 = uVar11 + 1;
        cVar6 = *pcVar5;
        if (cVar6 == '\0') break;
      } while (uVar11 < 0x17f);
    }
    local_1ac[uVar11 - 0x10] = '\0';
    uVar10 = 0;
    do {
      uVar11 = uVar10;
      uVar10 = uVar11 + 1;
    } while (local_1ac[uVar11 - 0x10] != '\0');
    if (uVar10 < 0x180) {
      local_1ac[uVar11 - 0x10] = ' ';
      uVar11 = uVar10;
    }
    local_1ac[uVar11 - 0x10] = '\0';
    uVar10 = 0;
    do {
      uVar11 = uVar10;
      uVar10 = uVar11 + 1;
    } while (local_1ac[uVar11 - 0x10] != '\0');
    if (uVar11 + 1 < 0x180) {
      cVar6 = 'c';
      pcVar5 = str_1000fd09;
      do {
        pcVar5 = pcVar5 + 1;
        local_1ac[uVar11 - 0x10] = cVar6;
        uVar11 = uVar11 + 1;
        cVar6 = *pcVar5;
        if (cVar6 == '\0') break;
      } while (uVar11 < 0x17f);
    }
    local_1ac[uVar11 - 0x10] = '\0';
    uVar10 = 0;
    do {
      uVar11 = uVar10;
      uVar10 = uVar11 + 1;
    } while (local_1ac[uVar11 - 0x10] != '\0');
    if (uVar10 < 0x180) {
      local_1ac[uVar11 - 0x10] = '=';
      uVar11 = uVar10;
    }
    local_1ac[uVar11 - 0x10] = '\0';
    uVar10 = local_240;
    uVar11 = 0;
    do {
      *(byte *)((int)local_200 + uVar11) = (char)uVar10 + (char)(uVar10 / 10) * -10 | 0x30;
      uVar2 = uVar11 + 1;
      if (8 < uVar11) break;
      bVar14 = 9 < uVar10;
      uVar10 = uVar10 / 10;
      uVar11 = uVar2;
    } while (bVar14);
    do {
      iVar3 = uVar2 - 1;
      uVar2 = uVar2 - 1;
      uVar10 = 0;
      do {
        uVar11 = uVar10;
        uVar10 = uVar11 + 1;
      } while (local_1ac[uVar11 - 0x10] != '\0');
      if (uVar11 + 1 < 0x180) {
        local_1ac[uVar11 - 0x10] = *(char *)((int)local_200 + iVar3);
        local_1ac[uVar11 - 0xf] = '\0';
      }
    } while (uVar2 != 0);
    uVar10 = 0;
    do {
      uVar11 = uVar10;
      uVar10 = uVar11 + 1;
    } while (local_1ac[uVar11 - 0x10] != '\0');
    if (uVar10 < 0x180) {
      local_1ac[uVar11 - 0x10] = ' ';
      uVar11 = uVar10;
    }
    local_1ac[uVar11 - 0x10] = '\0';
    uVar10 = 0;
    do {
      uVar11 = uVar10;
      uVar10 = uVar11 + 1;
    } while (local_1ac[uVar11 - 0x10] != '\0');
    if (uVar11 + 1 < 0x180) {
      cVar6 = 'u';
      pcVar5 = &DAT_1000f277;
      do {
        local_1ac[uVar11 - 0x10] = cVar6;
        uVar11 = uVar11 + 1;
        cVar6 = *pcVar5;
        if (cVar6 == '\0') break;
        pcVar5 = pcVar5 + 1;
      } while (uVar11 < 0x17f);
    }
    local_1ac[uVar11 - 0x10] = '\0';
    uVar10 = 0;
    do {
      uVar11 = uVar10;
      uVar10 = uVar11 + 1;
    } while (local_1ac[uVar11 - 0x10] != '\0');
    if (uVar10 < 0x180) {
      local_1ac[uVar11 - 0x10] = '=';
      uVar11 = uVar10;
    }
    local_1ac[uVar11 - 0x10] = '\0';
    if (local_23c == 0) {
      uVar10 = 0;
      do {
        uVar11 = uVar10;
        uVar10 = uVar11 + 1;
      } while (local_1ac[uVar11 - 0x10] != '\0');
      if (uVar11 + 1 < 0x180) {
        (local_1ac + (uVar11 - 0x10))[0] = '0';
        (local_1ac + (uVar11 - 0x10))[1] = '\0';
      }
    }
    else {
      uVar10 = local_23c;
      uVar11 = 0;
      do {
        *(byte *)((int)local_200 + uVar11) = (char)uVar10 + (char)(uVar10 / 10) * -10 | 0x30;
        uVar2 = uVar11 + 1;
        if (8 < uVar11) break;
        bVar14 = 9 < uVar10;
        uVar10 = uVar10 / 10;
        uVar11 = uVar2;
      } while (bVar14);
      do {
        iVar3 = uVar2 - 1;
        uVar2 = uVar2 - 1;
        uVar10 = 0;
        do {
          uVar11 = uVar10;
          uVar10 = uVar11 + 1;
        } while (local_1ac[uVar11 - 0x10] != '\0');
        if (uVar11 + 1 < 0x180) {
          local_1ac[uVar11 - 0x10] = *(char *)((int)local_200 + iVar3);
          local_1ac[uVar11 - 0xf] = '\0';
        }
      } while (uVar2 != 0);
    }
    uVar10 = 0;
    do {
      uVar11 = uVar10;
      uVar10 = uVar11 + 1;
    } while (local_1ac[uVar11 - 0x10] != '\0');
    if (uVar10 < 0x180) {
      local_1ac[uVar11 - 0x10] = ' ';
      uVar11 = uVar10;
    }
    local_1ac[uVar11 - 0x10] = '\0';
    uVar10 = 0;
    do {
      uVar11 = uVar10;
      uVar10 = uVar11 + 1;
    } while (local_1ac[uVar11 - 0x10] != '\0');
    if (uVar11 + 1 < 0x180) {
      cVar6 = 'o';
      pcVar5 = &DAT_1000f27c;
      do {
        local_1ac[uVar11 - 0x10] = cVar6;
        uVar11 = uVar11 + 1;
        cVar6 = *pcVar5;
        if (cVar6 == '\0') break;
        pcVar5 = pcVar5 + 1;
      } while (uVar11 < 0x17f);
    }
    local_1ac[uVar11 - 0x10] = '\0';
    uVar10 = 0;
    do {
      uVar11 = uVar10;
      uVar10 = uVar11 + 1;
    } while (local_1ac[uVar11 - 0x10] != '\0');
    if (uVar10 < 0x180) {
      local_1ac[uVar11 - 0x10] = '=';
      uVar11 = uVar10;
    }
    local_1ac[uVar11 - 0x10] = '\0';
    if (local_238 == 0) {
      uVar10 = 0;
      do {
        uVar11 = uVar10;
        uVar10 = uVar11 + 1;
      } while (local_1ac[uVar11 - 0x10] != '\0');
      if (uVar11 + 1 < 0x180) {
        (local_1ac + (uVar11 - 0x10))[0] = '0';
        (local_1ac + (uVar11 - 0x10))[1] = '\0';
      }
    }
    else {
      uVar10 = local_238;
      uVar11 = 0;
      do {
        *(byte *)((int)local_200 + uVar11) = (char)uVar10 + (char)(uVar10 / 10) * -10 | 0x30;
        uVar2 = uVar11 + 1;
        if (8 < uVar11) break;
        bVar14 = 9 < uVar10;
        uVar10 = uVar10 / 10;
        uVar11 = uVar2;
      } while (bVar14);
      do {
        iVar3 = uVar2 - 1;
        uVar2 = uVar2 - 1;
        uVar10 = 0;
        do {
          uVar11 = uVar10;
          uVar10 = uVar11 + 1;
        } while (local_1ac[uVar11 - 0x10] != '\0');
        if (uVar11 + 1 < 0x180) {
          local_1ac[uVar11 - 0x10] = *(char *)((int)local_200 + iVar3);
          local_1ac[uVar11 - 0xf] = '\0';
        }
      } while (uVar2 != 0);
    }
    uVar10 = 0;
    do {
      uVar11 = uVar10;
      uVar10 = uVar11 + 1;
    } while (local_1ac[uVar11 - 0x10] != '\0');
    if (uVar10 < 0x180) {
      local_1ac[uVar11 - 0x10] = ' ';
      uVar11 = uVar10;
    }
    local_1ac[uVar11 - 0x10] = '\0';
    uVar10 = 0;
    do {
      uVar11 = uVar10;
      uVar10 = uVar11 + 1;
    } while (local_1ac[uVar11 - 0x10] != '\0');
    if (uVar11 + 1 < 0x180) {
      cVar6 = 'e';
      pcVar5 = &DAT_1000f281;
      do {
        local_1ac[uVar11 - 0x10] = cVar6;
        uVar11 = uVar11 + 1;
        cVar6 = *pcVar5;
        if (cVar6 == '\0') break;
        pcVar5 = pcVar5 + 1;
      } while (uVar11 < 0x17f);
    }
    local_1ac[uVar11 - 0x10] = '\0';
    uVar10 = 0;
    do {
      uVar11 = uVar10;
      uVar10 = uVar11 + 1;
    } while (local_1ac[uVar11 - 0x10] != '\0');
    if (uVar10 < 0x180) {
      local_1ac[uVar11 - 0x10] = '=';
      uVar11 = uVar10;
    }
    local_1ac[uVar11 - 0x10] = '\0';
    if (local_234 == 0) {
      uVar10 = 0;
      do {
        uVar11 = uVar10;
        uVar10 = uVar11 + 1;
      } while (local_1ac[uVar11 - 0x10] != '\0');
      if (uVar11 + 1 < 0x180) {
        (local_1ac + (uVar11 - 0x10))[0] = '0';
        (local_1ac + (uVar11 - 0x10))[1] = '\0';
      }
    }
    else {
      uVar10 = local_234;
      uVar11 = 0;
      do {
        *(byte *)((int)local_200 + uVar11) = (char)uVar10 + (char)(uVar10 / 10) * -10 | 0x30;
        uVar2 = uVar11 + 1;
        if (8 < uVar11) break;
        bVar14 = 9 < uVar10;
        uVar10 = uVar10 / 10;
        uVar11 = uVar2;
      } while (bVar14);
      do {
        iVar3 = uVar2 - 1;
        uVar2 = uVar2 - 1;
        uVar10 = 0;
        do {
          uVar11 = uVar10;
          uVar10 = uVar11 + 1;
        } while (local_1ac[uVar11 - 0x10] != '\0');
        if (uVar11 + 1 < 0x180) {
          local_1ac[uVar11 - 0x10] = *(char *)((int)local_200 + iVar3);
          local_1ac[uVar11 - 0xf] = '\0';
        }
      } while (uVar2 != 0);
    }
    uVar10 = 0;
    do {
      uVar11 = uVar10;
      uVar10 = uVar11 + 1;
    } while (local_1ac[uVar11 - 0x10] != '\0');
    if (uVar11 + 1 < 0x180) {
      cVar6 = ' ';
      pcVar5 = str_1000fd15;
      do {
        pcVar5 = pcVar5 + 1;
        local_1ac[uVar11 - 0x10] = cVar6;
        uVar11 = uVar11 + 1;
        cVar6 = *pcVar5;
        if (cVar6 == '\0') break;
      } while (uVar11 < 0x17f);
    }
    local_1ac[uVar11 - 0x10] = '\0';
    if ((code *)api[3] != (code *)0x0) {
      (*(code *)api[3])(str_1000fd62,str_1000fd83,&local_1bc);
    }
  }
  local_1bc = local_1bc & 0xffffff00;
  uVar10 = 0;
  do {
    uVar11 = uVar10;
    uVar10 = uVar11 + 1;
  } while (local_1ac[uVar11 - 0x10] != '\0');
  if (uVar11 + 1 < 0x180) {
    cVar6 = 'b';
    pcVar5 = str_1000fd96;
    do {
      pcVar5 = pcVar5 + 1;
      local_1ac[uVar11 - 0x10] = cVar6;
      uVar11 = uVar11 + 1;
      cVar6 = *pcVar5;
      if (cVar6 == '\0') break;
    } while (uVar11 < 0x17f);
  }
  local_1ac[uVar11 - 0x10] = '\0';
  uVar10 = 0;
  do {
    uVar11 = uVar10;
    uVar10 = uVar11 + 1;
  } while (local_1ac[uVar11 - 0x10] != '\0');
  if (uVar10 < 0x180) {
    local_1ac[uVar11 - 0x10] = ' ';
    uVar11 = uVar10;
  }
  local_1ac[uVar11 - 0x10] = '\0';
  uVar10 = 0;
  do {
    uVar11 = uVar10;
    uVar10 = uVar11 + 1;
  } while (local_1ac[uVar11 - 0x10] != '\0');
  if (uVar11 + 1 < 0x180) {
    cVar6 = 'u';
    pcVar5 = str_1000fe05;
    do {
      pcVar5 = pcVar5 + 1;
      local_1ac[uVar11 - 0x10] = cVar6;
      uVar11 = uVar11 + 1;
      cVar6 = *pcVar5;
      if (cVar6 == '\0') break;
    } while (uVar11 < 0x17f);
  }
  local_1ac[uVar11 - 0x10] = '\0';
  uVar10 = 0;
  do {
    uVar11 = uVar10;
    uVar10 = uVar11 + 1;
  } while (local_1ac[uVar11 - 0x10] != '\0');
  if (uVar10 < 0x180) {
    local_1ac[uVar11 - 0x10] = '=';
    uVar11 = uVar10;
  }
  local_1ac[uVar11 - 0x10] = '\0';
  if (local_240 == 0) {
    uVar10 = 0;
    do {
      uVar11 = uVar10;
      uVar10 = uVar11 + 1;
    } while (local_1ac[uVar11 - 0x10] != '\0');
    if (uVar11 + 1 < 0x180) {
      (local_1ac + (uVar11 - 0x10))[0] = '0';
      (local_1ac + (uVar11 - 0x10))[1] = '\0';
    }
  }
  else {
    uVar10 = local_240;
    uVar11 = 0;
    do {
      *(byte *)((int)local_200 + uVar11) = (char)uVar10 + (char)(uVar10 / 10) * -10 | 0x30;
      uVar2 = uVar11 + 1;
      if (8 < uVar11) break;
      bVar14 = 9 < uVar10;
      uVar10 = uVar10 / 10;
      uVar11 = uVar2;
    } while (bVar14);
    do {
      iVar3 = uVar2 - 1;
      uVar2 = uVar2 - 1;
      uVar10 = 0;
      do {
        uVar11 = uVar10;
        uVar10 = uVar11 + 1;
      } while (local_1ac[uVar11 - 0x10] != '\0');
      if (uVar11 + 1 < 0x180) {
        local_1ac[uVar11 - 0x10] = *(char *)((int)local_200 + iVar3);
        local_1ac[uVar11 - 0xf] = '\0';
      }
    } while (uVar2 != 0);
  }
  uVar10 = 0;
  do {
    uVar11 = uVar10;
    uVar10 = uVar11 + 1;
  } while (local_1ac[uVar11 - 0x10] != '\0');
  if (uVar10 < 0x180) {
    local_1ac[uVar11 - 0x10] = ' ';
    uVar11 = uVar10;
  }
  local_1ac[uVar11 - 0x10] = '\0';
  uVar10 = 0;
  do {
    uVar11 = uVar10;
    uVar10 = uVar11 + 1;
  } while (local_1ac[uVar11 - 0x10] != '\0');
  if (uVar11 + 1 < 0x180) {
    cVar6 = 'u';
    pcVar5 = &DAT_1000f277;
    do {
      local_1ac[uVar11 - 0x10] = cVar6;
      uVar11 = uVar11 + 1;
      cVar6 = *pcVar5;
      if (cVar6 == '\0') break;
      pcVar5 = pcVar5 + 1;
    } while (uVar11 < 0x17f);
  }
  local_1ac[uVar11 - 0x10] = '\0';
  uVar10 = 0;
  do {
    uVar11 = uVar10;
    uVar10 = uVar11 + 1;
  } while (local_1ac[uVar11 - 0x10] != '\0');
  if (uVar10 < 0x180) {
    local_1ac[uVar11 - 0x10] = '=';
    uVar11 = uVar10;
  }
  local_1ac[uVar11 - 0x10] = '\0';
  if (local_23c == 0) {
    uVar10 = 0;
    do {
      uVar11 = uVar10;
      uVar10 = uVar11 + 1;
    } while (local_1ac[uVar11 - 0x10] != '\0');
    if (uVar11 + 1 < 0x180) {
      (local_1ac + (uVar11 - 0x10))[0] = '0';
      (local_1ac + (uVar11 - 0x10))[1] = '\0';
    }
  }
  else {
    uVar10 = local_23c;
    uVar11 = 0;
    do {
      *(byte *)((int)local_200 + uVar11) = (char)uVar10 + (char)(uVar10 / 10) * -10 | 0x30;
      uVar2 = uVar11 + 1;
      if (8 < uVar11) break;
      bVar14 = 9 < uVar10;
      uVar10 = uVar10 / 10;
      uVar11 = uVar2;
    } while (bVar14);
    do {
      iVar3 = uVar2 - 1;
      uVar2 = uVar2 - 1;
      uVar10 = 0;
      do {
        uVar11 = uVar10;
        uVar10 = uVar11 + 1;
      } while (local_1ac[uVar11 - 0x10] != '\0');
      if (uVar11 + 1 < 0x180) {
        local_1ac[uVar11 - 0x10] = *(char *)((int)local_200 + iVar3);
        local_1ac[uVar11 - 0xf] = '\0';
      }
    } while (uVar2 != 0);
  }
  uVar10 = 0;
  do {
    uVar11 = uVar10;
    uVar10 = uVar11 + 1;
  } while (local_1ac[uVar11 - 0x10] != '\0');
  if (uVar10 < 0x180) {
    local_1ac[uVar11 - 0x10] = ' ';
    uVar11 = uVar10;
  }
  local_1ac[uVar11 - 0x10] = '\0';
  uVar10 = 0;
  do {
    uVar11 = uVar10;
    uVar10 = uVar11 + 1;
  } while (local_1ac[uVar11 - 0x10] != '\0');
  if (uVar11 + 1 < 0x180) {
    cVar6 = 'o';
    pcVar5 = &DAT_1000f27c;
    do {
      local_1ac[uVar11 - 0x10] = cVar6;
      uVar11 = uVar11 + 1;
      cVar6 = *pcVar5;
      if (cVar6 == '\0') break;
      pcVar5 = pcVar5 + 1;
    } while (uVar11 < 0x17f);
  }
  local_1ac[uVar11 - 0x10] = '\0';
  uVar10 = 0;
  do {
    uVar11 = uVar10;
    uVar10 = uVar11 + 1;
  } while (local_1ac[uVar11 - 0x10] != '\0');
  if (uVar10 < 0x180) {
    local_1ac[uVar11 - 0x10] = '=';
    uVar11 = uVar10;
  }
  local_1ac[uVar11 - 0x10] = '\0';
  if (local_238 == 0) {
    uVar10 = 0;
    do {
      uVar11 = uVar10;
      uVar10 = uVar11 + 1;
    } while (local_1ac[uVar11 - 0x10] != '\0');
    if (uVar11 + 1 < 0x180) {
      (local_1ac + (uVar11 - 0x10))[0] = '0';
      (local_1ac + (uVar11 - 0x10))[1] = '\0';
    }
  }
  else {
    uVar10 = local_238;
    uVar11 = 0;
    do {
      *(byte *)((int)local_200 + uVar11) = (char)uVar10 + (char)(uVar10 / 10) * -10 | 0x30;
      uVar2 = uVar11 + 1;
      if (8 < uVar11) break;
      bVar14 = 9 < uVar10;
      uVar10 = uVar10 / 10;
      uVar11 = uVar2;
    } while (bVar14);
    do {
      iVar3 = uVar2 - 1;
      uVar2 = uVar2 - 1;
      uVar10 = 0;
      do {
        uVar11 = uVar10;
        uVar10 = uVar11 + 1;
      } while (local_1ac[uVar11 - 0x10] != '\0');
      if (uVar11 + 1 < 0x180) {
        local_1ac[uVar11 - 0x10] = *(char *)((int)local_200 + iVar3);
        local_1ac[uVar11 - 0xf] = '\0';
      }
    } while (uVar2 != 0);
  }
  uVar10 = 0;
  do {
    uVar11 = uVar10;
    uVar10 = uVar11 + 1;
  } while (local_1ac[uVar11 - 0x10] != '\0');
  if (uVar10 < 0x180) {
    local_1ac[uVar11 - 0x10] = ' ';
    uVar11 = uVar10;
  }
  local_1ac[uVar11 - 0x10] = '\0';
  uVar10 = 0;
  do {
    uVar11 = uVar10;
    uVar10 = uVar11 + 1;
  } while (local_1ac[uVar11 - 0x10] != '\0');
  if (uVar11 + 1 < 0x180) {
    cVar6 = 'e';
    pcVar5 = &DAT_1000f281;
    do {
      local_1ac[uVar11 - 0x10] = cVar6;
      uVar11 = uVar11 + 1;
      cVar6 = *pcVar5;
      if (cVar6 == '\0') break;
      pcVar5 = pcVar5 + 1;
    } while (uVar11 < 0x17f);
  }
  local_1ac[uVar11 - 0x10] = '\0';
  uVar10 = 0;
  do {
    uVar11 = uVar10;
    uVar10 = uVar11 + 1;
  } while (local_1ac[uVar11 - 0x10] != '\0');
  if (uVar10 < 0x180) {
    local_1ac[uVar11 - 0x10] = '=';
    uVar11 = uVar10;
  }
  local_1ac[uVar11 - 0x10] = '\0';
  if (local_234 == 0) {
    uVar10 = 0;
    do {
      uVar11 = uVar10;
      uVar10 = uVar11 + 1;
    } while (local_1ac[uVar11 - 0x10] != '\0');
    if (uVar11 + 1 < 0x180) {
      (local_1ac + (uVar11 - 0x10))[0] = '0';
      (local_1ac + (uVar11 - 0x10))[1] = '\0';
    }
  }
  else {
    uVar10 = local_234;
    uVar11 = 0;
    do {
      *(byte *)((int)local_200 + uVar11) = (char)uVar10 + (char)(uVar10 / 10) * -10 | 0x30;
      uVar2 = uVar11 + 1;
      if (8 < uVar11) break;
      bVar14 = 9 < uVar10;
      uVar10 = uVar10 / 10;
      uVar11 = uVar2;
    } while (bVar14);
    do {
      iVar3 = uVar2 - 1;
      uVar2 = uVar2 - 1;
      uVar10 = 0;
      do {
        uVar11 = uVar10;
        uVar10 = uVar11 + 1;
      } while (local_1ac[uVar11 - 0x10] != '\0');
      if (uVar11 + 1 < 0x180) {
        local_1ac[uVar11 - 0x10] = *(char *)((int)local_200 + iVar3);
        local_1ac[uVar11 - 0xf] = '\0';
      }
    } while (uVar2 != 0);
  }
  pcVar5 = str_1000f304;
  if (local_218 != 0) {
    pcVar5 = &DAT_1000f2ff;
  }
  bVar7 = *pcVar5;
  uVar10 = (uint)bVar7;
  if (bVar7 != 0) {
    uVar11 = 0;
    do {
      uVar2 = uVar11;
      uVar11 = uVar2 + 1;
    } while (local_1ac[uVar2 - 0x10] != '\0');
    if (uVar11 < 0x180) {
      local_1ac[uVar2 - 0x10] = ' ';
      uVar2 = uVar11;
    }
    local_1ac[uVar2 - 0x10] = '\0';
    uVar11 = 0;
    do {
      uVar2 = uVar11;
      uVar11 = uVar2 + 1;
    } while (local_1ac[uVar2 - 0x10] != '\0');
    if (uVar2 + 1 < 0x180) {
      uVar10 = (uint)CONCAT11(0x70,bVar7);
      pcVar12 = str_1000fe14;
      do {
        pcVar12 = pcVar12 + 1;
        local_1ac[uVar2 - 0x10] = (char)(uVar10 >> 8);
        uVar2 = uVar2 + 1;
        uVar10 = (uint)CONCAT11(*pcVar12,(char)uVar10);
        if (*pcVar12 == '\0') break;
      } while (uVar2 < 0x17f);
    }
    local_1ac[uVar2 - 0x10] = '\0';
    uVar11 = 0;
    do {
      uVar2 = uVar11;
      uVar11 = uVar2 + 1;
    } while (local_1ac[uVar2 - 0x10] != '\0');
    if (uVar11 < 0x180) {
      local_1ac[uVar2 - 0x10] = '=';
      uVar2 = uVar11;
    }
    local_1ac[uVar2 - 0x10] = '\0';
    uVar11 = 0;
    do {
      uVar2 = uVar11;
      uVar11 = uVar2 + 1;
    } while (local_1ac[uVar2 - 0x10] != '\0');
    if (uVar2 + 1 < 0x180) {
      do {
        pcVar5 = pcVar5 + 1;
        local_1ac[uVar2 - 0x10] = (char)uVar10;
        uVar2 = uVar2 + 1;
        uVar10 = (uint)(byte)*pcVar5;
        if (*pcVar5 == 0) break;
      } while (uVar2 < 0x17f);
    }
    local_1ac[uVar2 - 0x10] = '\0';
  }
  uVar10 = 0;
  do {
    uVar11 = uVar10;
    uVar10 = uVar11 + 1;
  } while (local_1ac[uVar11 - 0x10] != '\0');
  if (uVar11 + 1 < 0x180) {
    cVar6 = ' ';
    pcVar5 = str_1000fe27;
    do {
      pcVar5 = pcVar5 + 1;
      local_1ac[uVar11 - 0x10] = cVar6;
      uVar11 = uVar11 + 1;
      cVar6 = *pcVar5;
      if (cVar6 == '\0') break;
    } while (uVar11 < 0x17f);
  }
  local_1ac[uVar11 - 0x10] = '\0';
  if ((code *)api[3] != (code *)0x0) {
    (*(code *)api[3])(str_1000fe63,str_1000fe86,&local_1bc);
  }
  if (local_248 != 0) {
    local_1bc = local_1bc & 0xffffff00;
    uVar10 = 0;
    do {
      uVar11 = uVar10;
      uVar10 = uVar11 + 1;
    } while (local_1ac[uVar11 - 0x10] != '\0');
    if (uVar11 + 1 < 0x100) {
      cVar6 = 'c';
      pcVar5 = str_1000fe9d;
      do {
        pcVar5 = pcVar5 + 1;
        local_1ac[uVar11 - 0x10] = cVar6;
        uVar11 = uVar11 + 1;
        cVar6 = *pcVar5;
        if (cVar6 == '\0') break;
      } while (uVar11 < 0xff);
    }
    local_1ac[uVar11 - 0x10] = '\0';
    uVar10 = 0;
    do {
      uVar11 = uVar10;
      uVar10 = uVar11 + 1;
    } while (local_1ac[uVar11 - 0x10] != '\0');
    if (uVar10 < 0x100) {
      local_1ac[uVar11 - 0x10] = ' ';
      uVar11 = uVar10;
    }
    local_1ac[uVar11 - 0x10] = '\0';
    uVar10 = 0;
    do {
      uVar11 = uVar10;
      uVar10 = uVar11 + 1;
    } while (local_1ac[uVar11 - 0x10] != '\0');
    if (uVar11 + 1 < 0x100) {
      cVar6 = 'a';
      pcVar5 = &DAT_1000f26a;
      do {
        local_1ac[uVar11 - 0x10] = cVar6;
        uVar11 = uVar11 + 1;
        cVar6 = *pcVar5;
        if (cVar6 == '\0') break;
        pcVar5 = pcVar5 + 1;
      } while (uVar11 < 0xff);
    }
    local_1ac[uVar11 - 0x10] = '\0';
    uVar10 = 0;
    do {
      uVar11 = uVar10;
      uVar10 = uVar11 + 1;
    } while (local_1ac[uVar11 - 0x10] != '\0');
    if (uVar10 < 0x100) {
      local_1ac[uVar11 - 0x10] = '=';
      uVar11 = uVar10;
    }
    local_1ac[uVar11 - 0x10] = '\0';
    uVar10 = local_248;
    uVar11 = 0;
    do {
      *(byte *)((int)local_200 + uVar11) = (char)uVar10 + (char)(uVar10 / 10) * -10 | 0x30;
      uVar2 = uVar11 + 1;
      if (8 < uVar11) break;
      bVar14 = 9 < uVar10;
      uVar10 = uVar10 / 10;
      uVar11 = uVar2;
    } while (bVar14);
    do {
      iVar3 = uVar2 - 1;
      uVar2 = uVar2 - 1;
      uVar10 = 0;
      do {
        uVar11 = uVar10;
        uVar10 = uVar11 + 1;
      } while (local_1ac[uVar11 - 0x10] != '\0');
      if (uVar11 + 1 < 0x100) {
        local_1ac[uVar11 - 0x10] = *(char *)((int)local_200 + iVar3);
        local_1ac[uVar11 - 0xf] = '\0';
      }
    } while (uVar2 != 0);
    if ((code *)api[3] != (code *)0x0) {
      (*(code *)api[3])(str_1000fee8,str_1000ff0d,&local_1bc);
    }
  }
  if (local_254 != 0 || local_24c != 0) {
    local_1bc = local_1bc & 0xffffff00;
    uVar10 = 0;
    do {
      uVar11 = uVar10;
      uVar10 = uVar11 + 1;
    } while (local_1ac[uVar11 - 0x10] != '\0');
    if (uVar11 + 1 < 0x100) {
      cVar6 = 'f';
      pcVar5 = str_1000ff22;
      do {
        pcVar5 = pcVar5 + 1;
        local_1ac[uVar11 - 0x10] = cVar6;
        uVar11 = uVar11 + 1;
        cVar6 = *pcVar5;
        if (cVar6 == '\0') break;
      } while (uVar11 < 0xff);
    }
    local_1ac[uVar11 - 0x10] = '\0';
    if (((*api == 0x54584b57) && (0x43 < (uint)api[2])) && ((code *)api[0x10] != (code *)0x0)) {
      iVar3 = (*(code *)api[0x10])(local_200);
      if (iVar3 != 0) {
        recovered_1000e4f0((int)&local_1bc,0x100,str_1000ff3e,(int)local_200);
      }
    }
    uVar10 = 0;
    if (local_24c == 0) {
      do {
        uVar11 = uVar10;
        uVar10 = uVar11 + 1;
      } while (local_1ac[uVar11 - 0x10] != '\0');
      if (uVar11 + 1 < 0x100) {
        cVar6 = ' ';
        pcVar5 = str_1000ff5f;
        do {
          pcVar5 = pcVar5 + 1;
          local_1ac[uVar11 - 0x10] = cVar6;
          uVar11 = uVar11 + 1;
          cVar6 = *pcVar5;
          if (cVar6 == '\0') break;
        } while (uVar11 < 0xff);
      }
    }
    else {
      do {
        uVar11 = uVar10;
        uVar10 = uVar11 + 1;
      } while (local_1ac[uVar11 - 0x10] != '\0');
      if (uVar11 + 1 < 0x100) {
        cVar6 = ' ';
        pcVar5 = str_1000ff49;
        do {
          pcVar5 = pcVar5 + 1;
          local_1ac[uVar11 - 0x10] = cVar6;
          uVar11 = uVar11 + 1;
          cVar6 = *pcVar5;
          if (cVar6 == '\0') break;
        } while (uVar11 < 0xff);
      }
    }
    local_1ac[uVar11 - 0x10] = '\0';
    uVar10 = 0;
    do {
      uVar11 = uVar10;
      uVar10 = uVar11 + 1;
    } while (local_1ac[uVar11 - 0x10] != '\0');
    if (uVar10 < 0x100) {
      local_1ac[uVar11 - 0x10] = ' ';
      uVar11 = uVar10;
    }
    local_1ac[uVar11 - 0x10] = '\0';
    uVar10 = 0;
    do {
      uVar11 = uVar10;
      uVar10 = uVar11 + 1;
    } while (local_1ac[uVar11 - 0x10] != '\0');
    if (uVar11 + 1 < 0x100) {
      cVar6 = 'n';
      pcVar5 = str_1000f25b;
      do {
        pcVar5 = pcVar5 + 1;
        local_1ac[uVar11 - 0x10] = cVar6;
        uVar11 = uVar11 + 1;
        cVar6 = *pcVar5;
        if (cVar6 == '\0') break;
      } while (uVar11 < 0xff);
    }
    local_1ac[uVar11 - 0x10] = '\0';
    uVar10 = 0;
    do {
      uVar11 = uVar10;
      uVar10 = uVar11 + 1;
    } while (local_1ac[uVar11 - 0x10] != '\0');
    if (uVar10 < 0x100) {
      local_1ac[uVar11 - 0x10] = '=';
      uVar11 = uVar10;
    }
    local_1ac[uVar11 - 0x10] = '\0';
    if (local_24c == 0) {
      uVar10 = 0;
      do {
        uVar11 = uVar10;
        uVar10 = uVar11 + 1;
      } while (local_1ac[uVar11 - 0x10] != '\0');
      if (uVar11 + 1 < 0x100) {
        (local_1ac + (uVar11 - 0x10))[0] = '0';
        (local_1ac + (uVar11 - 0x10))[1] = '\0';
      }
    }
    else {
      uVar10 = local_24c;
      uVar11 = 0;
      do {
        *(byte *)((int)local_2c + uVar11) = (char)uVar10 + (char)(uVar10 / 10) * -10 | 0x30;
        uVar2 = uVar11 + 1;
        if (8 < uVar11) break;
        bVar14 = 9 < uVar10;
        uVar10 = uVar10 / 10;
        uVar11 = uVar2;
      } while (bVar14);
      do {
        iVar3 = uVar2 - 1;
        uVar2 = uVar2 - 1;
        uVar10 = 0;
        do {
          uVar11 = uVar10;
          uVar10 = uVar11 + 1;
        } while (local_1ac[uVar11 - 0x10] != '\0');
        if (uVar11 + 1 < 0x100) {
          local_1ac[uVar11 - 0x10] = *(char *)((int)local_2c + iVar3);
          local_1ac[uVar11 - 0xf] = '\0';
        }
      } while (uVar2 != 0);
    }
    uVar10 = 0;
    do {
      uVar11 = uVar10;
      uVar10 = uVar11 + 1;
    } while (local_1ac[uVar11 - 0x10] != '\0');
    if (uVar10 < 0x100) {
      local_1ac[uVar11 - 0x10] = ' ';
      uVar11 = uVar10;
    }
    local_1ac[uVar11 - 0x10] = '\0';
    uVar10 = 0;
    do {
      uVar11 = uVar10;
      uVar10 = uVar11 + 1;
    } while (local_1ac[uVar11 - 0x10] != '\0');
    if (uVar11 + 1 < 0x100) {
      cVar6 = 'i';
      pcVar5 = str_1000f244;
      do {
        pcVar5 = pcVar5 + 1;
        local_1ac[uVar11 - 0x10] = cVar6;
        uVar11 = uVar11 + 1;
        cVar6 = *pcVar5;
        if (cVar6 == '\0') break;
      } while (uVar11 < 0xff);
    }
    local_1ac[uVar11 - 0x10] = '\0';
    uVar10 = 0;
    do {
      uVar11 = uVar10;
      uVar10 = uVar11 + 1;
    } while (local_1ac[uVar11 - 0x10] != '\0');
    if (uVar10 < 0x100) {
      local_1ac[uVar11 - 0x10] = '=';
      uVar11 = uVar10;
    }
    local_1ac[uVar11 - 0x10] = '\0';
    if (local_254 == 0) {
      uVar10 = 0;
      do {
        uVar11 = uVar10;
        uVar10 = uVar11 + 1;
      } while (local_1ac[uVar11 - 0x10] != '\0');
      if (uVar11 + 1 < 0x100) {
        (local_1ac + (uVar11 - 0x10))[0] = '0';
        (local_1ac + (uVar11 - 0x10))[1] = '\0';
      }
    }
    else {
      uVar10 = local_254;
      uVar11 = 0;
      do {
        *(byte *)((int)local_2c + uVar11) = (char)uVar10 + (char)(uVar10 / 10) * -10 | 0x30;
        uVar2 = uVar11 + 1;
        if (8 < uVar11) break;
        bVar14 = 9 < uVar10;
        uVar10 = uVar10 / 10;
        uVar11 = uVar2;
      } while (bVar14);
      do {
        iVar3 = uVar2 - 1;
        uVar2 = uVar2 - 1;
        uVar10 = 0;
        do {
          uVar11 = uVar10;
          uVar10 = uVar11 + 1;
        } while (local_1ac[uVar11 - 0x10] != '\0');
        if (uVar11 + 1 < 0x100) {
          local_1ac[uVar11 - 0x10] = *(char *)((int)local_2c + iVar3);
          local_1ac[uVar11 - 0xf] = '\0';
        }
      } while (uVar2 != 0);
    }
    pcVar5 = str_1000f304;
    if (local_214 != 0) {
      pcVar5 = &DAT_1000f2ff;
    }
    bVar7 = *pcVar5;
    uVar10 = (uint)bVar7;
    if (bVar7 != 0) {
      uVar11 = 0;
      do {
        uVar2 = uVar11;
        uVar11 = uVar2 + 1;
      } while (local_1ac[uVar2 - 0x10] != '\0');
      if (uVar11 < 0x100) {
        local_1ac[uVar2 - 0x10] = ' ';
        uVar2 = uVar11;
      }
      local_1ac[uVar2 - 0x10] = '\0';
      uVar11 = 0;
      do {
        uVar2 = uVar11;
        uVar11 = uVar2 + 1;
      } while (local_1ac[uVar2 - 0x10] != '\0');
      if (uVar2 + 1 < 0x100) {
        uVar10 = (uint)CONCAT11(0x70,bVar7);
        pcVar12 = str_1000fe14;
        do {
          pcVar12 = pcVar12 + 1;
          local_1ac[uVar2 - 0x10] = (char)(uVar10 >> 8);
          uVar2 = uVar2 + 1;
          uVar10 = (uint)CONCAT11(*pcVar12,(char)uVar10);
          if (*pcVar12 == '\0') break;
        } while (uVar2 < 0xff);
      }
      local_1ac[uVar2 - 0x10] = '\0';
      uVar11 = 0;
      do {
        uVar2 = uVar11;
        uVar11 = uVar2 + 1;
      } while (local_1ac[uVar2 - 0x10] != '\0');
      if (uVar11 < 0x100) {
        local_1ac[uVar2 - 0x10] = '=';
        uVar2 = uVar11;
      }
      local_1ac[uVar2 - 0x10] = '\0';
      uVar11 = 0;
      do {
        uVar2 = uVar11;
        uVar11 = uVar2 + 1;
      } while (local_1ac[uVar2 - 0x10] != '\0');
      if (uVar2 + 1 < 0x100) {
        do {
          pcVar5 = pcVar5 + 1;
          local_1ac[uVar2 - 0x10] = (char)uVar10;
          uVar2 = uVar2 + 1;
          uVar10 = (uint)(byte)*pcVar5;
          if (*pcVar5 == 0) break;
        } while (uVar2 < 0xff);
      }
      local_1ac[uVar2 - 0x10] = '\0';
    }
    if ((code *)api[3] != (code *)0x0) {
      (*(code *)api[3])(str_1000ff72,str_1000ff98,&local_1bc);
    }
  }
  recovered_10007f70((int)local_264,&local_260,(undefined1 *)&local_564);
  if ((code *)api[3] != (code *)0x0) {
    (*(code *)api[3])(str_1000f046,str_1000f063,&local_564);
  }
  return 1;
}

#undef DAT_1000f13c
#undef DAT_1000f26a
#undef DAT_1000f26f
#undef DAT_1000f273
#undef DAT_1000f277
#undef DAT_1000f27c
#undef DAT_1000f281
#undef DAT_1000f2ff
#undef DAT_1000f341
#undef DAT_1000f3ba
#undef DAT_1000f3c1
#undef DAT_1000f4cf
#undef DAT_10011000
#undef str_1000f02c
#undef str_1000f046
#undef str_1000f063
#undef str_1000f07f
#undef str_1000f0a0
#undef str_1000f0c2
#undef str_1000f0e3
#undef str_1000f0fc
#undef str_1000f144
#undef str_1000f1ff
#undef str_1000f244
#undef str_1000f25b
#undef str_1000f285
#undef str_1000f28b
#undef str_1000f304
#undef str_1000f30a
#undef str_1000f31e
#undef str_1000f32a
#undef str_1000f334
#undef str_1000f346
#undef str_1000f352
#undef str_1000f380
#undef str_1000f38a
#undef str_1000f39f
#undef str_1000f3ac
#undef str_1000f3ca
#undef str_1000f3d4
#undef str_1000f3e0
#undef str_1000f3f2
#undef str_1000f401
#undef str_1000f41f
#undef str_1000f42d
#undef str_1000f438
#undef str_1000f449
#undef str_1000f459
#undef str_1000f463
#undef str_1000f46c
#undef str_1000f478
#undef str_1000f48f
#undef str_1000f4b7
#undef str_1000f4be
#undef str_1000f4c4
#undef str_1000f4d5
#undef str_1000f4ed
#undef str_1000f508
#undef str_1000f534
#undef str_1000f554
#undef str_1000f585
#undef str_1000f592
#undef str_1000f5a4
#undef str_1000f5ae
#undef str_1000f5bb
#undef str_1000f5c8
#undef str_1000f5d9
#undef str_1000f5e9
#undef str_1000f5f6
#undef str_1000f603
#undef str_1000f60f
#undef str_1000f618
#undef str_1000f62b
#undef str_1000f650
#undef str_1000fa91
#undef str_1000fabf
#undef str_1000fac7
#undef str_1000fb05
#undef str_1000fb28
#undef str_1000fb49
#undef str_1000fb74
#undef str_1000fb8b
#undef str_1000fba8
#undef str_1000fbc0
#undef str_1000fbde
#undef str_1000fbfd
#undef str_1000fc0f
#undef str_1000fc31
#undef str_1000fc4d
#undef str_1000fc71
#undef str_1000fc86
#undef str_1000fc9c
#undef str_1000fcb5
#undef str_1000fd09
#undef str_1000fd15
#undef str_1000fd62
#undef str_1000fd83
#undef str_1000fd96
#undef str_1000fe05
#undef str_1000fe14
#undef str_1000fe27
#undef str_1000fe63
#undef str_1000fe86
#undef str_1000fe9d
#undef str_1000fee8
#undef str_1000ff0d
#undef str_1000ff22
#undef str_1000ff3e
#undef str_1000ff49
#undef str_1000ff5f
#undef str_1000ff72
#undef str_1000ff98
#undef auStack_12c
#undef local_60c
#undef local_5a8
#undef local_564
#undef local_264
#undef local_260
#undef local_25c
#undef local_258
#undef local_254
#undef local_250
#undef local_24c
#undef local_248
#undef local_244
#undef local_240
#undef local_23c
#undef local_238
#undef local_234
#undef local_230
#undef local_22c
#undef local_228
#undef local_224
#undef local_220
#undef local_21c
#undef local_218
#undef local_214
#undef local_210
#undef local_20c
#undef local_208
#undef local_204
#undef local_200
#undef local_1f8
#undef local_1f4
#undef local_1f0
#undef local_1ec
#undef local_1cc
#undef local_1c8
#undef local_1c4
#undef local_1c0
#undef local_1bc
#undef local_1b8
#undef local_1b4
#undef local_1b0
#undef local_1ac
#undef local_16c
#undef local_3c
#undef local_38
#undef local_34
#undef local_30
#undef local_2c
#undef local_20
#undef local_19
#undef local_18
#undef local_14
#undef cStack_565

#undef DAT_1000f26a
#define DAT_1000f26a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x31cU)))
#undef DAT_1000f26f
#define DAT_1000f26f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x321U)))
#undef DAT_1000f273
#define DAT_1000f273 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x325U)))
#undef DAT_1000f277
#define DAT_1000f277 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x329U)))
#undef DAT_1000f27c
#define DAT_1000f27c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x32eU)))
#undef DAT_1000f281
#define DAT_1000f281 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x333U)))
#undef DAT_1000f29d
#define DAT_1000f29d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x34fU)))
#undef DAT_1000f2a1
#define DAT_1000f2a1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x353U)))
#undef DAT_1000f2e5
#define DAT_1000f2e5 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x397U)))
#undef DAT_1000f2ff
#define DAT_1000f2ff (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3b1U)))
#undef str_1000f14b
#define str_1000f14b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1fdU)))
#undef str_1000f1dd
#define str_1000f1dd (*(char (*)[1])(((uintptr_t)pf_module_state + 0x28fU)))
#undef str_1000f1ed
#define str_1000f1ed (*(char (*)[1])(((uintptr_t)pf_module_state + 0x29fU)))
#undef str_1000f1f7
#define str_1000f1f7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2a9U)))
#undef str_1000f1ff
#define str_1000f1ff (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2b1U)))
#undef str_1000f207
#define str_1000f207 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2b9U)))
#undef str_1000f214
#define str_1000f214 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2c6U)))
#undef str_1000f21e
#define str_1000f21e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2d0U)))
#undef str_1000f229
#define str_1000f229 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2dbU)))
#undef str_1000f237
#define str_1000f237 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2e9U)))
#undef str_1000f244
#define str_1000f244 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2f6U)))
#undef str_1000f251
#define str_1000f251 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x303U)))
#undef str_1000f25b
#define str_1000f25b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x30dU)))
#undef str_1000f285
#define str_1000f285 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x337U)))
#undef str_1000f28b
#define str_1000f28b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x33dU)))
#undef str_1000f293
#define str_1000f293 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x345U)))
#undef str_1000f2a5
#define str_1000f2a5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x357U)))
#undef str_1000f2b6
#define str_1000f2b6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x368U)))
#undef str_1000f2c4
#define str_1000f2c4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x376U)))
#undef str_1000f2d8
#define str_1000f2d8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x38aU)))
#undef str_1000f2f7
#define str_1000f2f7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3a9U)))
#undef str_1000f304
#define str_1000f304 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3b6U)))
#define local_14 (*(uint * *)(frame + 28))
#define abStack_1f (*(byte (*)[11])(frame + 17))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007f70
 */

void recovered_10007f70(int in_ECX,uint *in_EDX,undefined1 *param_3)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  byte bVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  char *pcVar6;
  uint uVar7;
  uint uVar8;
  char *pcVar9;

  local_14 = in_EDX;
  if (param_3 == (undefined1 *)0x0) {
    if ((in_ECX != 0) && (uVar7 = *(uint *)(in_ECX + 100), uVar7 != 0)) {
LAB_10008080:
      uVar3 = 0;
      do {
        abStack_1f[uVar3 + 1] = (byte)(uVar7 % 10) | 0x30;
        uVar4 = uVar3 + 1;
        if (8 < uVar3) break;
        bVar2 = 9 < uVar7;
        uVar3 = uVar4;
        uVar7 = uVar7 / 10;
      } while (bVar2);
      do {
        if (param_3 != (undefined1 *)0x0) {
          uVar7 = 0;
          do {
            uVar3 = uVar7;
            uVar7 = uVar3 + 1;
          } while (param_3[uVar3] != '\0');
          if (uVar7 < 0x300) {
            param_3[uVar3] = abStack_1f[uVar4];
            param_3[uVar7] = 0;
          }
        }
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
      goto LAB_1000811a;
    }
  }
  else {
    *param_3 = 0;
    uVar7 = 0;
    do {
      uVar3 = uVar7;
      uVar7 = uVar3 + 1;
    } while (param_3[uVar3] != '\0');
    if (uVar3 + 1 < 0x300) {
      cVar5 = 'm';
      pcVar6 = str_1000f14b;
      do {
        pcVar6 = pcVar6 + 1;
        param_3[uVar3] = cVar5;
        uVar3 = uVar3 + 1;
        cVar5 = *pcVar6;
        if (cVar5 == '\0') break;
      } while (uVar3 < 0x2ff);
    }
    param_3[uVar3] = 0;
    if (in_ECX != 0) {
      uVar7 = *(uint *)(in_ECX + 100);
      uVar3 = 0;
      do {
        uVar4 = uVar3;
        uVar3 = uVar4 + 1;
      } while (param_3[uVar4] != '\0');
      if (uVar3 < 0x300) {
        param_3[uVar4] = 0x20;
        uVar4 = uVar3;
      }
      param_3[uVar4] = 0;
      uVar3 = 0;
      do {
        uVar4 = uVar3;
        uVar3 = uVar4 + 1;
      } while (param_3[uVar4] != '\0');
      if (uVar4 + 1 < 0x300) {
        cVar5 = 'h';
        pcVar6 = str_1000f1dd;
        do {
          pcVar6 = pcVar6 + 1;
          param_3[uVar4] = cVar5;
          uVar4 = uVar4 + 1;
          cVar5 = *pcVar6;
          if (cVar5 == '\0') break;
        } while (uVar4 < 0x2ff);
      }
      param_3[uVar4] = 0;
      uVar3 = 0;
      do {
        uVar4 = uVar3;
        uVar3 = uVar4 + 1;
      } while (param_3[uVar4] != '\0');
      if (uVar3 < 0x300) {
        param_3[uVar4] = 0x3d;
        uVar4 = uVar3;
      }
      param_3[uVar4] = 0;
      if (uVar7 != 0) goto LAB_10008080;
      uVar7 = 0;
      do {
        uVar3 = uVar7;
        uVar7 = uVar3 + 1;
      } while (param_3[uVar3] != '\0');
      if (uVar3 + 1 < 0x300) {
        *(undefined2 *)(param_3 + uVar3) = 0x30;
      }
LAB_1000811a:
      if ((param_3 != (undefined1 *)0x0) && (*(char *)(in_ECX + 4) != '\0')) {
        uVar7 = 0;
        do {
          uVar3 = uVar7;
          uVar7 = uVar3 + 1;
        } while (param_3[uVar3] != '\0');
        if (uVar7 < 0x300) {
          param_3[uVar3] = 0x20;
          uVar3 = uVar7;
        }
        param_3[uVar3] = 0;
        uVar7 = 0;
        do {
          uVar3 = uVar7;
          uVar7 = uVar3 + 1;
        } while (param_3[uVar3] != '\0');
        if (uVar3 + 1 < 0x300) {
          cVar5 = 'p';
          pcVar6 = str_1000f1ed;
          do {
            pcVar6 = pcVar6 + 1;
            param_3[uVar3] = cVar5;
            uVar3 = uVar3 + 1;
            cVar5 = *pcVar6;
            if (cVar5 == '\0') break;
          } while (uVar3 < 0x2ff);
        }
        param_3[uVar3] = 0;
        uVar7 = 0;
        do {
          uVar3 = uVar7;
          uVar7 = uVar3 + 1;
        } while (param_3[uVar3] != '\0');
        if (uVar7 < 0x300) {
          param_3[uVar3] = 0x3d;
          uVar3 = uVar7;
        }
        param_3[uVar3] = 0;
        uVar7 = 0;
        do {
          uVar3 = uVar7;
          uVar7 = uVar3 + 1;
        } while (param_3[uVar3] != '\0');
        cVar5 = *(char *)(in_ECX + 4);
        if (uVar3 + 1 < 0x300 && cVar5 != '\0') {
          pcVar6 = (char *)(in_ECX + 5);
          do {
            param_3[uVar3] = cVar5;
            uVar3 = uVar3 + 1;
            cVar5 = *pcVar6;
            if (cVar5 == '\0') break;
            pcVar6 = pcVar6 + 1;
          } while (uVar3 < 0x2ff);
        }
        param_3[uVar3] = 0;
      }
    }
  }
  if (local_14 == (uint *)0x0) {
    return;
  }
  pcVar6 = str_1000f2d8;
  if ((local_14[4] == 0) && (pcVar6 = str_1000f2f7, local_14[2] != 0)) {
    pcVar6 = &DAT_1000f2e5;
  }
  if (param_3 != (undefined1 *)0x0) {
    bVar1 = *pcVar6;
    uVar7 = (uint)bVar1;
    if (bVar1 != 0) {
      uVar3 = 0;
      do {
        uVar4 = uVar3;
        uVar3 = uVar4 + 1;
      } while (param_3[uVar4] != '\0');
      if (uVar3 < 0x300) {
        param_3[uVar4] = 0x20;
        uVar4 = uVar3;
      }
      param_3[uVar4] = 0;
      uVar3 = 0;
      do {
        uVar4 = uVar3;
        uVar3 = uVar4 + 1;
      } while (param_3[uVar4] != '\0');
      if (uVar4 + 1 < 0x300) {
        uVar7 = (uint)CONCAT11(99,bVar1);
        pcVar9 = str_1000f1f7;
        do {
          pcVar9 = pcVar9 + 1;
          param_3[uVar4] = (char)(uVar7 >> 8);
          uVar4 = uVar4 + 1;
          uVar7 = (uint)CONCAT11(*pcVar9,(char)uVar7);
          if (*pcVar9 == '\0') break;
        } while (uVar4 < 0x2ff);
      }
      param_3[uVar4] = 0;
      uVar3 = 0;
      do {
        uVar4 = uVar3;
        uVar3 = uVar4 + 1;
      } while (param_3[uVar4] != '\0');
      if (uVar3 < 0x300) {
        param_3[uVar4] = 0x3d;
        uVar4 = uVar3;
      }
      param_3[uVar4] = 0;
      uVar3 = 0;
      do {
        uVar4 = uVar3;
        uVar3 = uVar4 + 1;
      } while (param_3[uVar4] != '\0');
      if (uVar4 + 1 < 0x300) {
        do {
          pcVar6 = pcVar6 + 1;
          param_3[uVar4] = (char)uVar7;
          uVar4 = uVar4 + 1;
          uVar7 = (uint)(byte)*pcVar6;
          if (*pcVar6 == 0) break;
        } while (uVar4 < 0x2ff);
      }
      param_3[uVar4] = 0;
    }
  }
  if (local_14[5] == 0) {
    if (local_14[3] != 0) {
      if (param_3 != (undefined1 *)0x0) {
        uVar7 = 0;
        do {
          uVar3 = uVar7;
          uVar7 = uVar3 + 1;
        } while (param_3[uVar3] != '\0');
        if (uVar7 < 0x300) {
          param_3[uVar3] = 0x20;
          uVar3 = uVar7;
        }
        param_3[uVar3] = 0;
        uVar7 = 0;
        do {
          uVar3 = uVar7;
          uVar7 = uVar3 + 1;
        } while (param_3[uVar3] != '\0');
        if (uVar3 + 1 < 0x300) {
          cVar5 = 'd';
          pcVar6 = str_1000f1ff;
          do {
            pcVar6 = pcVar6 + 1;
            param_3[uVar3] = cVar5;
            uVar3 = uVar3 + 1;
            cVar5 = *pcVar6;
            if (cVar5 == '\0') break;
          } while (uVar3 < 0x2ff);
        }
        param_3[uVar3] = 0;
        uVar7 = 0;
        do {
          uVar3 = uVar7;
          uVar7 = uVar3 + 1;
        } while (param_3[uVar3] != '\0');
        if (uVar7 < 0x300) {
          param_3[uVar3] = 0x3d;
          uVar3 = uVar7;
        }
        param_3[uVar3] = 0;
        uVar7 = 0;
        do {
          uVar3 = uVar7;
          uVar7 = uVar3 + 1;
        } while (param_3[uVar3] != '\0');
        if (uVar3 + 1 < 0x300) {
          cVar5 = 'i';
          pcVar6 = str_1000f214;
          do {
            pcVar6 = pcVar6 + 1;
            param_3[uVar3] = cVar5;
            uVar3 = uVar3 + 1;
            cVar5 = *pcVar6;
            if (cVar5 == '\0') break;
          } while (uVar3 < 0x2ff);
        }
        goto LAB_100084d3;
      }
      goto LAB_1000835e;
    }
    uVar7 = *local_14;
    if (param_3 != (undefined1 *)0x0) goto LAB_100084d9;
LAB_10008360:
    if (uVar7 == 0) {
LAB_100085e9:
      uVar7 = local_14[1];
    }
    else {
LAB_10008564:
      uVar3 = 0;
      do {
        abStack_1f[uVar3 + 1] = (char)uVar7 + (char)(uVar7 / 10) * -10 | 0x30;
        uVar4 = uVar3 + 1;
        if (8 < uVar3) break;
        bVar2 = 9 < uVar7;
        uVar3 = uVar4;
        uVar7 = uVar7 / 10;
      } while (bVar2);
LAB_100085a6:
      do {
        uVar7 = uVar4 - 1;
        if (param_3 == (undefined1 *)0x0) {
          uVar4 = uVar7;
          if (uVar7 == 0) goto LAB_100085e9;
          goto LAB_100085a6;
        }
        uVar3 = 0;
        do {
          uVar8 = uVar3;
          uVar3 = uVar8 + 1;
        } while (param_3[uVar8] != '\0');
        if (uVar3 < 0x300) {
          param_3[uVar8] = abStack_1f[uVar4];
          param_3[uVar3] = 0;
        }
        uVar4 = uVar7;
      } while (uVar7 != 0);
      uVar7 = local_14[1];
      if (param_3 != (undefined1 *)0x0) goto LAB_1000862a;
    }
    if (uVar7 == 0) {
LAB_10008739:
      uVar7 = local_14[2];
    }
    else {
LAB_100086b4:
      uVar3 = 0;
      do {
        abStack_1f[uVar3 + 1] = (char)uVar7 + (char)(uVar7 / 10) * -10 | 0x30;
        uVar4 = uVar3 + 1;
        if (8 < uVar3) break;
        bVar2 = 9 < uVar7;
        uVar3 = uVar4;
        uVar7 = uVar7 / 10;
      } while (bVar2);
LAB_100086f6:
      do {
        uVar7 = uVar4 - 1;
        if (param_3 == (undefined1 *)0x0) {
          uVar4 = uVar7;
          if (uVar7 == 0) goto LAB_10008739;
          goto LAB_100086f6;
        }
        uVar3 = 0;
        do {
          uVar8 = uVar3;
          uVar3 = uVar8 + 1;
        } while (param_3[uVar8] != '\0');
        if (uVar3 < 0x300) {
          param_3[uVar8] = abStack_1f[uVar4];
          param_3[uVar3] = 0;
        }
        uVar4 = uVar7;
      } while (uVar7 != 0);
      uVar7 = local_14[2];
      if (param_3 != (undefined1 *)0x0) goto LAB_1000877a;
    }
    if (uVar7 == 0) {
LAB_10008889:
      uVar7 = local_14[3];
    }
    else {
LAB_10008804:
      uVar3 = 0;
      do {
        abStack_1f[uVar3 + 1] = (char)uVar7 + (char)(uVar7 / 10) * -10 | 0x30;
        uVar4 = uVar3 + 1;
        if (8 < uVar3) break;
        bVar2 = 9 < uVar7;
        uVar3 = uVar4;
        uVar7 = uVar7 / 10;
      } while (bVar2);
LAB_10008846:
      do {
        uVar7 = uVar4 - 1;
        if (param_3 == (undefined1 *)0x0) {
          uVar4 = uVar7;
          if (uVar7 == 0) goto LAB_10008889;
          goto LAB_10008846;
        }
        uVar3 = 0;
        do {
          uVar8 = uVar3;
          uVar3 = uVar8 + 1;
        } while (param_3[uVar8] != '\0');
        if (uVar3 < 0x300) {
          param_3[uVar8] = abStack_1f[uVar4];
          param_3[uVar3] = 0;
        }
        uVar4 = uVar7;
      } while (uVar7 != 0);
      uVar7 = local_14[3];
      if (param_3 != (undefined1 *)0x0) goto LAB_100088ca;
    }
    if (uVar7 == 0) {
LAB_100089d9:
      uVar7 = local_14[4];
    }
    else {
LAB_10008954:
      uVar3 = 0;
      do {
        abStack_1f[uVar3 + 1] = (char)uVar7 + (char)(uVar7 / 10) * -10 | 0x30;
        uVar4 = uVar3 + 1;
        if (8 < uVar3) break;
        bVar2 = 9 < uVar7;
        uVar3 = uVar4;
        uVar7 = uVar7 / 10;
      } while (bVar2);
LAB_10008996:
      do {
        uVar7 = uVar4 - 1;
        if (param_3 == (undefined1 *)0x0) {
          uVar4 = uVar7;
          if (uVar7 == 0) goto LAB_100089d9;
          goto LAB_10008996;
        }
        uVar3 = 0;
        do {
          uVar8 = uVar3;
          uVar3 = uVar8 + 1;
        } while (param_3[uVar8] != '\0');
        if (uVar3 < 0x300) {
          param_3[uVar8] = abStack_1f[uVar4];
          param_3[uVar3] = 0;
        }
        uVar4 = uVar7;
      } while (uVar7 != 0);
      uVar7 = local_14[4];
      if (param_3 != (undefined1 *)0x0) goto LAB_10008a1a;
    }
    if (uVar7 == 0) {
LAB_10008b29:
      uVar7 = local_14[5];
    }
    else {
LAB_10008aa4:
      uVar3 = 0;
      do {
        abStack_1f[uVar3 + 1] = (char)uVar7 + (char)(uVar7 / 10) * -10 | 0x30;
        uVar4 = uVar3 + 1;
        if (8 < uVar3) break;
        bVar2 = 9 < uVar7;
        uVar3 = uVar4;
        uVar7 = uVar7 / 10;
      } while (bVar2);
LAB_10008ae6:
      do {
        uVar7 = uVar4 - 1;
        if (param_3 == (undefined1 *)0x0) {
          uVar4 = uVar7;
          if (uVar7 == 0) goto LAB_10008b29;
          goto LAB_10008ae6;
        }
        uVar3 = 0;
        do {
          uVar8 = uVar3;
          uVar3 = uVar8 + 1;
        } while (param_3[uVar8] != '\0');
        if (uVar3 < 0x300) {
          param_3[uVar8] = abStack_1f[uVar4];
          param_3[uVar3] = 0;
        }
        uVar4 = uVar7;
      } while (uVar7 != 0);
      uVar7 = local_14[5];
      if (param_3 != (undefined1 *)0x0) goto LAB_10008b6a;
    }
    if (uVar7 == 0) {
LAB_10008c79:
      uVar7 = local_14[6];
    }
    else {
LAB_10008bf4:
      uVar3 = 0;
      do {
        abStack_1f[uVar3 + 1] = (char)uVar7 + (char)(uVar7 / 10) * -10 | 0x30;
        uVar4 = uVar3 + 1;
        if (8 < uVar3) break;
        bVar2 = 9 < uVar7;
        uVar3 = uVar4;
        uVar7 = uVar7 / 10;
      } while (bVar2);
LAB_10008c36:
      do {
        uVar7 = uVar4 - 1;
        if (param_3 == (undefined1 *)0x0) {
          uVar4 = uVar7;
          if (uVar7 == 0) goto LAB_10008c79;
          goto LAB_10008c36;
        }
        uVar3 = 0;
        do {
          uVar8 = uVar3;
          uVar3 = uVar8 + 1;
        } while (param_3[uVar8] != '\0');
        if (uVar3 < 0x300) {
          param_3[uVar8] = abStack_1f[uVar4];
          param_3[uVar3] = 0;
        }
        uVar4 = uVar7;
      } while (uVar7 != 0);
      uVar7 = local_14[6];
      if (param_3 != (undefined1 *)0x0) goto LAB_10008cba;
    }
    if (uVar7 == 0) {
LAB_10008dc9:
      uVar7 = local_14[7];
    }
    else {
LAB_10008d44:
      uVar3 = 0;
      do {
        abStack_1f[uVar3 + 1] = (char)uVar7 + (char)(uVar7 / 10) * -10 | 0x30;
        uVar4 = uVar3 + 1;
        if (8 < uVar3) break;
        bVar2 = 9 < uVar7;
        uVar3 = uVar4;
        uVar7 = uVar7 / 10;
      } while (bVar2);
LAB_10008d86:
      do {
        uVar7 = uVar4 - 1;
        if (param_3 == (undefined1 *)0x0) {
          uVar4 = uVar7;
          if (uVar7 == 0) goto LAB_10008dc9;
          goto LAB_10008d86;
        }
        uVar3 = 0;
        do {
          uVar8 = uVar3;
          uVar3 = uVar8 + 1;
        } while (param_3[uVar8] != '\0');
        if (uVar3 < 0x300) {
          param_3[uVar8] = abStack_1f[uVar4];
          param_3[uVar3] = 0;
        }
        uVar4 = uVar7;
      } while (uVar7 != 0);
      uVar7 = local_14[7];
      if (param_3 != (undefined1 *)0x0) goto LAB_10008e0a;
    }
    if (uVar7 == 0) {
LAB_10008f19:
      uVar7 = local_14[8];
    }
    else {
LAB_10008e94:
      uVar3 = 0;
      do {
        abStack_1f[uVar3 + 1] = (char)uVar7 + (char)(uVar7 / 10) * -10 | 0x30;
        uVar4 = uVar3 + 1;
        if (8 < uVar3) break;
        bVar2 = 9 < uVar7;
        uVar3 = uVar4;
        uVar7 = uVar7 / 10;
      } while (bVar2);
LAB_10008ed6:
      do {
        uVar7 = uVar4 - 1;
        if (param_3 == (undefined1 *)0x0) {
          uVar4 = uVar7;
          if (uVar7 == 0) goto LAB_10008f19;
          goto LAB_10008ed6;
        }
        uVar3 = 0;
        do {
          uVar8 = uVar3;
          uVar3 = uVar8 + 1;
        } while (param_3[uVar8] != '\0');
        if (uVar3 < 0x300) {
          param_3[uVar8] = abStack_1f[uVar4];
          param_3[uVar3] = 0;
        }
        uVar4 = uVar7;
      } while (uVar7 != 0);
      uVar7 = local_14[8];
      if (param_3 != (undefined1 *)0x0) goto LAB_10008f5a;
    }
    if (uVar7 == 0) {
LAB_10009069:
      uVar7 = local_14[9];
    }
    else {
LAB_10008fe4:
      uVar3 = 0;
      do {
        abStack_1f[uVar3 + 1] = (char)uVar7 + (char)(uVar7 / 10) * -10 | 0x30;
        uVar4 = uVar3 + 1;
        if (8 < uVar3) break;
        bVar2 = 9 < uVar7;
        uVar3 = uVar4;
        uVar7 = uVar7 / 10;
      } while (bVar2);
LAB_10009026:
      do {
        uVar7 = uVar4 - 1;
        if (param_3 == (undefined1 *)0x0) {
          uVar4 = uVar7;
          if (uVar7 == 0) goto LAB_10009069;
          goto LAB_10009026;
        }
        uVar3 = 0;
        do {
          uVar8 = uVar3;
          uVar3 = uVar8 + 1;
        } while (param_3[uVar8] != '\0');
        if (uVar3 < 0x300) {
          param_3[uVar8] = abStack_1f[uVar4];
          param_3[uVar3] = 0;
        }
        uVar4 = uVar7;
      } while (uVar7 != 0);
      uVar7 = local_14[9];
      if (param_3 != (undefined1 *)0x0) goto LAB_100090aa;
    }
    if (uVar7 == 0) {
LAB_100091b9:
      uVar7 = local_14[10];
    }
    else {
LAB_10009134:
      uVar3 = 0;
      do {
        abStack_1f[uVar3 + 1] = (char)uVar7 + (char)(uVar7 / 10) * -10 | 0x30;
        uVar4 = uVar3 + 1;
        if (8 < uVar3) break;
        bVar2 = 9 < uVar7;
        uVar3 = uVar4;
        uVar7 = uVar7 / 10;
      } while (bVar2);
LAB_10009176:
      do {
        uVar7 = uVar4 - 1;
        if (param_3 == (undefined1 *)0x0) {
          uVar4 = uVar7;
          if (uVar7 == 0) goto LAB_100091b9;
          goto LAB_10009176;
        }
        uVar3 = 0;
        do {
          uVar8 = uVar3;
          uVar3 = uVar8 + 1;
        } while (param_3[uVar8] != '\0');
        if (uVar3 < 0x300) {
          param_3[uVar8] = abStack_1f[uVar4];
          param_3[uVar3] = 0;
        }
        uVar4 = uVar7;
      } while (uVar7 != 0);
      uVar7 = local_14[10];
      if (param_3 != (undefined1 *)0x0) goto LAB_100091fa;
    }
    if (uVar7 == 0) {
LAB_10009309:
      uVar7 = local_14[0xb];
    }
    else {
LAB_10009284:
      uVar3 = 0;
      do {
        abStack_1f[uVar3 + 1] = (char)uVar7 + (char)(uVar7 / 10) * -10 | 0x30;
        uVar4 = uVar3 + 1;
        if (8 < uVar3) break;
        bVar2 = 9 < uVar7;
        uVar3 = uVar4;
        uVar7 = uVar7 / 10;
      } while (bVar2);
LAB_100092c6:
      do {
        uVar7 = uVar4 - 1;
        if (param_3 == (undefined1 *)0x0) {
          uVar4 = uVar7;
          if (uVar7 == 0) goto LAB_10009309;
          goto LAB_100092c6;
        }
        uVar3 = 0;
        do {
          uVar8 = uVar3;
          uVar3 = uVar8 + 1;
        } while (param_3[uVar8] != '\0');
        if (uVar3 < 0x300) {
          param_3[uVar8] = abStack_1f[uVar4];
          param_3[uVar3] = 0;
        }
        uVar4 = uVar7;
      } while (uVar7 != 0);
      uVar7 = local_14[0xb];
      if (param_3 != (undefined1 *)0x0) goto LAB_1000934a;
    }
    if (uVar7 == 0) {
LAB_10009459:
      uVar7 = local_14[0xc];
    }
    else {
LAB_100093d4:
      uVar3 = 0;
      do {
        abStack_1f[uVar3 + 1] = (char)uVar7 + (char)(uVar7 / 10) * -10 | 0x30;
        uVar4 = uVar3 + 1;
        if (8 < uVar3) break;
        bVar2 = 9 < uVar7;
        uVar3 = uVar4;
        uVar7 = uVar7 / 10;
      } while (bVar2);
LAB_10009416:
      do {
        uVar7 = uVar4 - 1;
        if (param_3 == (undefined1 *)0x0) {
          uVar4 = uVar7;
          if (uVar7 == 0) goto LAB_10009459;
          goto LAB_10009416;
        }
        uVar3 = 0;
        do {
          uVar8 = uVar3;
          uVar3 = uVar8 + 1;
        } while (param_3[uVar8] != '\0');
        if (uVar3 < 0x300) {
          param_3[uVar8] = abStack_1f[uVar4];
          param_3[uVar3] = 0;
        }
        uVar4 = uVar7;
      } while (uVar7 != 0);
      uVar7 = local_14[0xc];
      if (param_3 != (undefined1 *)0x0) goto LAB_1000949a;
    }
    if (uVar7 == 0) {
LAB_100095a9:
      uVar7 = local_14[0xd];
    }
    else {
LAB_10009524:
      uVar3 = 0;
      do {
        abStack_1f[uVar3 + 1] = (char)uVar7 + (char)(uVar7 / 10) * -10 | 0x30;
        uVar4 = uVar3 + 1;
        if (8 < uVar3) break;
        bVar2 = 9 < uVar7;
        uVar3 = uVar4;
        uVar7 = uVar7 / 10;
      } while (bVar2);
LAB_10009566:
      do {
        uVar7 = uVar4 - 1;
        if (param_3 == (undefined1 *)0x0) {
          uVar4 = uVar7;
          if (uVar7 == 0) goto LAB_100095a9;
          goto LAB_10009566;
        }
        uVar3 = 0;
        do {
          uVar8 = uVar3;
          uVar3 = uVar8 + 1;
        } while (param_3[uVar8] != '\0');
        if (uVar3 < 0x300) {
          param_3[uVar8] = abStack_1f[uVar4];
          param_3[uVar3] = 0;
        }
        uVar4 = uVar7;
      } while (uVar7 != 0);
      uVar7 = local_14[0xd];
      if (param_3 != (undefined1 *)0x0) goto LAB_100095ea;
    }
    if (uVar7 == 0) {
LAB_100096f9:
      uVar7 = local_14[0xe];
    }
    else {
LAB_10009674:
      uVar3 = 0;
      do {
        abStack_1f[uVar3 + 1] = (char)uVar7 + (char)(uVar7 / 10) * -10 | 0x30;
        uVar4 = uVar3 + 1;
        if (8 < uVar3) break;
        bVar2 = 9 < uVar7;
        uVar3 = uVar4;
        uVar7 = uVar7 / 10;
      } while (bVar2);
LAB_100096b6:
      do {
        uVar7 = uVar4 - 1;
        if (param_3 == (undefined1 *)0x0) {
          uVar4 = uVar7;
          if (uVar7 == 0) goto LAB_100096f9;
          goto LAB_100096b6;
        }
        uVar3 = 0;
        do {
          uVar8 = uVar3;
          uVar3 = uVar8 + 1;
        } while (param_3[uVar8] != '\0');
        if (uVar3 < 0x300) {
          param_3[uVar8] = abStack_1f[uVar4];
          param_3[uVar3] = 0;
        }
        uVar4 = uVar7;
      } while (uVar7 != 0);
      uVar7 = local_14[0xe];
      if (param_3 != (undefined1 *)0x0) goto LAB_1000973a;
    }
    if (uVar7 == 0) {
LAB_10009849:
      uVar7 = local_14[0xf];
    }
    else {
LAB_100097c4:
      uVar3 = 0;
      do {
        abStack_1f[uVar3 + 1] = (char)uVar7 + (char)(uVar7 / 10) * -10 | 0x30;
        uVar4 = uVar3 + 1;
        if (8 < uVar3) break;
        bVar2 = 9 < uVar7;
        uVar3 = uVar4;
        uVar7 = uVar7 / 10;
      } while (bVar2);
LAB_10009806:
      do {
        uVar7 = uVar4 - 1;
        if (param_3 == (undefined1 *)0x0) {
          uVar4 = uVar7;
          if (uVar7 == 0) goto LAB_10009849;
          goto LAB_10009806;
        }
        uVar3 = 0;
        do {
          uVar8 = uVar3;
          uVar3 = uVar8 + 1;
        } while (param_3[uVar8] != '\0');
        if (uVar3 < 0x300) {
          param_3[uVar8] = abStack_1f[uVar4];
          param_3[uVar3] = 0;
        }
        uVar4 = uVar7;
      } while (uVar7 != 0);
      uVar7 = local_14[0xf];
      if (param_3 != (undefined1 *)0x0) goto LAB_1000988a;
    }
    if (uVar7 == 0) {
LAB_10009999:
      uVar7 = local_14[0x10];
    }
    else {
LAB_10009914:
      uVar3 = 0;
      do {
        abStack_1f[uVar3 + 1] = (char)uVar7 + (char)(uVar7 / 10) * -10 | 0x30;
        uVar4 = uVar3 + 1;
        if (8 < uVar3) break;
        bVar2 = 9 < uVar7;
        uVar3 = uVar4;
        uVar7 = uVar7 / 10;
      } while (bVar2);
LAB_10009956:
      do {
        uVar7 = uVar4 - 1;
        if (param_3 == (undefined1 *)0x0) {
          uVar4 = uVar7;
          if (uVar7 == 0) goto LAB_10009999;
          goto LAB_10009956;
        }
        uVar3 = 0;
        do {
          uVar8 = uVar3;
          uVar3 = uVar8 + 1;
        } while (param_3[uVar8] != '\0');
        if (uVar3 < 0x300) {
          param_3[uVar8] = abStack_1f[uVar4];
          param_3[uVar3] = 0;
        }
        uVar4 = uVar7;
      } while (uVar7 != 0);
      uVar7 = local_14[0x10];
      if (param_3 != (undefined1 *)0x0) goto LAB_100099da;
    }
    if (uVar7 == 0) {
LAB_10009ae9:
      uVar7 = local_14[0x11];
    }
    else {
LAB_10009a64:
      uVar3 = 0;
      do {
        abStack_1f[uVar3 + 1] = (char)uVar7 + (char)(uVar7 / 10) * -10 | 0x30;
        uVar4 = uVar3 + 1;
        if (8 < uVar3) break;
        bVar2 = 9 < uVar7;
        uVar3 = uVar4;
        uVar7 = uVar7 / 10;
      } while (bVar2);
LAB_10009aa6:
      do {
        uVar7 = uVar4 - 1;
        if (param_3 == (undefined1 *)0x0) {
          uVar4 = uVar7;
          if (uVar7 == 0) goto LAB_10009ae9;
          goto LAB_10009aa6;
        }
        uVar3 = 0;
        do {
          uVar8 = uVar3;
          uVar3 = uVar8 + 1;
        } while (param_3[uVar8] != '\0');
        if (uVar3 < 0x300) {
          param_3[uVar8] = abStack_1f[uVar4];
          param_3[uVar3] = 0;
        }
        uVar4 = uVar7;
      } while (uVar7 != 0);
      uVar7 = local_14[0x11];
      if (param_3 != (undefined1 *)0x0) goto LAB_10009b2a;
    }
    if (uVar7 == 0) {
      return;
    }
  }
  else {
    if (param_3 == (undefined1 *)0x0) {
LAB_1000835e:
      uVar7 = *local_14;
      goto LAB_10008360;
    }
    uVar7 = 0;
    do {
      uVar3 = uVar7;
      uVar7 = uVar3 + 1;
    } while (param_3[uVar3] != '\0');
    if (uVar7 < 0x300) {
      param_3[uVar3] = 0x20;
      uVar3 = uVar7;
    }
    param_3[uVar3] = 0;
    uVar7 = 0;
    do {
      uVar3 = uVar7;
      uVar7 = uVar3 + 1;
    } while (param_3[uVar3] != '\0');
    if (uVar3 + 1 < 0x300) {
      cVar5 = 'd';
      pcVar6 = str_1000f1ff;
      do {
        pcVar6 = pcVar6 + 1;
        param_3[uVar3] = cVar5;
        uVar3 = uVar3 + 1;
        cVar5 = *pcVar6;
        if (cVar5 == '\0') break;
      } while (uVar3 < 0x2ff);
    }
    param_3[uVar3] = 0;
    uVar7 = 0;
    do {
      uVar3 = uVar7;
      uVar7 = uVar3 + 1;
    } while (param_3[uVar3] != '\0');
    if (uVar7 < 0x300) {
      param_3[uVar3] = 0x3d;
      uVar3 = uVar7;
    }
    param_3[uVar3] = 0;
    uVar7 = 0;
    do {
      uVar3 = uVar7;
      uVar7 = uVar3 + 1;
    } while (param_3[uVar3] != '\0');
    if (uVar3 + 1 < 0x300) {
      cVar5 = 'g';
      pcVar6 = str_1000f207;
      do {
        pcVar6 = pcVar6 + 1;
        param_3[uVar3] = cVar5;
        uVar3 = uVar3 + 1;
        cVar5 = *pcVar6;
        if (cVar5 == '\0') break;
      } while (uVar3 < 0x2ff);
    }
LAB_100084d3:
    param_3[uVar3] = 0;
    uVar7 = *local_14;
LAB_100084d9:
    uVar3 = 0;
    do {
      uVar4 = uVar3;
      uVar3 = uVar4 + 1;
    } while (param_3[uVar4] != '\0');
    if (uVar3 < 0x300) {
      param_3[uVar4] = 0x20;
      uVar4 = uVar3;
    }
    param_3[uVar4] = 0;
    uVar3 = 0;
    do {
      uVar4 = uVar3;
      uVar3 = uVar4 + 1;
    } while (param_3[uVar4] != '\0');
    if (uVar4 + 1 < 0x300) {
      cVar5 = 'm';
      pcVar6 = str_1000f21e;
      do {
        pcVar6 = pcVar6 + 1;
        param_3[uVar4] = cVar5;
        uVar4 = uVar4 + 1;
        cVar5 = *pcVar6;
        if (cVar5 == '\0') break;
      } while (uVar4 < 0x2ff);
    }
    param_3[uVar4] = 0;
    uVar3 = 0;
    do {
      uVar4 = uVar3;
      uVar3 = uVar4 + 1;
    } while (param_3[uVar4] != '\0');
    if (uVar3 < 0x300) {
      param_3[uVar4] = 0x3d;
      uVar4 = uVar3;
    }
    param_3[uVar4] = 0;
    if (uVar7 != 0) goto LAB_10008564;
    uVar7 = 0;
    do {
      uVar3 = uVar7;
      uVar7 = uVar3 + 1;
    } while (param_3[uVar3] != '\0');
    if (uVar3 + 1 < 0x300) {
      *(undefined2 *)(param_3 + uVar3) = 0x30;
    }
    uVar7 = local_14[1];
LAB_1000862a:
    uVar3 = 0;
    do {
      uVar4 = uVar3;
      uVar3 = uVar4 + 1;
    } while (param_3[uVar4] != '\0');
    if (uVar3 < 0x300) {
      param_3[uVar4] = 0x20;
      uVar4 = uVar3;
    }
    param_3[uVar4] = 0;
    uVar3 = 0;
    do {
      uVar4 = uVar3;
      uVar3 = uVar4 + 1;
    } while (param_3[uVar4] != '\0');
    if (uVar4 + 1 < 0x300) {
      cVar5 = 'r';
      pcVar6 = str_1000f229;
      do {
        pcVar6 = pcVar6 + 1;
        param_3[uVar4] = cVar5;
        uVar4 = uVar4 + 1;
        cVar5 = *pcVar6;
        if (cVar5 == '\0') break;
      } while (uVar4 < 0x2ff);
    }
    param_3[uVar4] = 0;
    uVar3 = 0;
    do {
      uVar4 = uVar3;
      uVar3 = uVar4 + 1;
    } while (param_3[uVar4] != '\0');
    if (uVar3 < 0x300) {
      param_3[uVar4] = 0x3d;
      uVar4 = uVar3;
    }
    param_3[uVar4] = 0;
    if (uVar7 != 0) goto LAB_100086b4;
    uVar7 = 0;
    do {
      uVar3 = uVar7;
      uVar7 = uVar3 + 1;
    } while (param_3[uVar3] != '\0');
    if (uVar3 + 1 < 0x300) {
      *(undefined2 *)(param_3 + uVar3) = 0x30;
    }
    uVar7 = local_14[2];
LAB_1000877a:
    uVar3 = 0;
    do {
      uVar4 = uVar3;
      uVar3 = uVar4 + 1;
    } while (param_3[uVar4] != '\0');
    if (uVar3 < 0x300) {
      param_3[uVar4] = 0x20;
      uVar4 = uVar3;
    }
    param_3[uVar4] = 0;
    uVar3 = 0;
    do {
      uVar4 = uVar3;
      uVar3 = uVar4 + 1;
    } while (param_3[uVar4] != '\0');
    if (uVar4 + 1 < 0x300) {
      cVar5 = 'i';
      pcVar6 = str_1000f237;
      do {
        pcVar6 = pcVar6 + 1;
        param_3[uVar4] = cVar5;
        uVar4 = uVar4 + 1;
        cVar5 = *pcVar6;
        if (cVar5 == '\0') break;
      } while (uVar4 < 0x2ff);
    }
    param_3[uVar4] = 0;
    uVar3 = 0;
    do {
      uVar4 = uVar3;
      uVar3 = uVar4 + 1;
    } while (param_3[uVar4] != '\0');
    if (uVar3 < 0x300) {
      param_3[uVar4] = 0x3d;
      uVar4 = uVar3;
    }
    param_3[uVar4] = 0;
    if (uVar7 != 0) goto LAB_10008804;
    uVar7 = 0;
    do {
      uVar3 = uVar7;
      uVar7 = uVar3 + 1;
    } while (param_3[uVar3] != '\0');
    if (uVar3 + 1 < 0x300) {
      *(undefined2 *)(param_3 + uVar3) = 0x30;
    }
    uVar7 = local_14[3];
LAB_100088ca:
    uVar3 = 0;
    do {
      uVar4 = uVar3;
      uVar3 = uVar4 + 1;
    } while (param_3[uVar4] != '\0');
    if (uVar3 < 0x300) {
      param_3[uVar4] = 0x20;
      uVar4 = uVar3;
    }
    param_3[uVar4] = 0;
    uVar3 = 0;
    do {
      uVar4 = uVar3;
      uVar3 = uVar4 + 1;
    } while (param_3[uVar4] != '\0');
    if (uVar4 + 1 < 0x300) {
      cVar5 = 'i';
      pcVar6 = str_1000f244;
      do {
        pcVar6 = pcVar6 + 1;
        param_3[uVar4] = cVar5;
        uVar4 = uVar4 + 1;
        cVar5 = *pcVar6;
        if (cVar5 == '\0') break;
      } while (uVar4 < 0x2ff);
    }
    param_3[uVar4] = 0;
    uVar3 = 0;
    do {
      uVar4 = uVar3;
      uVar3 = uVar4 + 1;
    } while (param_3[uVar4] != '\0');
    if (uVar3 < 0x300) {
      param_3[uVar4] = 0x3d;
      uVar4 = uVar3;
    }
    param_3[uVar4] = 0;
    if (uVar7 != 0) goto LAB_10008954;
    uVar7 = 0;
    do {
      uVar3 = uVar7;
      uVar7 = uVar3 + 1;
    } while (param_3[uVar3] != '\0');
    if (uVar3 + 1 < 0x300) {
      *(undefined2 *)(param_3 + uVar3) = 0x30;
    }
    uVar7 = local_14[4];
LAB_10008a1a:
    uVar3 = 0;
    do {
      uVar4 = uVar3;
      uVar3 = uVar4 + 1;
    } while (param_3[uVar4] != '\0');
    if (uVar3 < 0x300) {
      param_3[uVar4] = 0x20;
      uVar4 = uVar3;
    }
    param_3[uVar4] = 0;
    uVar3 = 0;
    do {
      uVar4 = uVar3;
      uVar3 = uVar4 + 1;
    } while (param_3[uVar4] != '\0');
    if (uVar4 + 1 < 0x300) {
      cVar5 = 'n';
      pcVar6 = str_1000f251;
      do {
        pcVar6 = pcVar6 + 1;
        param_3[uVar4] = cVar5;
        uVar4 = uVar4 + 1;
        cVar5 = *pcVar6;
        if (cVar5 == '\0') break;
      } while (uVar4 < 0x2ff);
    }
    param_3[uVar4] = 0;
    uVar3 = 0;
    do {
      uVar4 = uVar3;
      uVar3 = uVar4 + 1;
    } while (param_3[uVar4] != '\0');
    if (uVar3 < 0x300) {
      param_3[uVar4] = 0x3d;
      uVar4 = uVar3;
    }
    param_3[uVar4] = 0;
    if (uVar7 != 0) goto LAB_10008aa4;
    uVar7 = 0;
    do {
      uVar3 = uVar7;
      uVar7 = uVar3 + 1;
    } while (param_3[uVar3] != '\0');
    if (uVar3 + 1 < 0x300) {
      *(undefined2 *)(param_3 + uVar3) = 0x30;
    }
    uVar7 = local_14[5];
LAB_10008b6a:
    uVar3 = 0;
    do {
      uVar4 = uVar3;
      uVar3 = uVar4 + 1;
    } while (param_3[uVar4] != '\0');
    if (uVar3 < 0x300) {
      param_3[uVar4] = 0x20;
      uVar4 = uVar3;
    }
    param_3[uVar4] = 0;
    uVar3 = 0;
    do {
      uVar4 = uVar3;
      uVar3 = uVar4 + 1;
    } while (param_3[uVar4] != '\0');
    if (uVar4 + 1 < 0x300) {
      cVar5 = 'n';
      pcVar6 = str_1000f25b;
      do {
        pcVar6 = pcVar6 + 1;
        param_3[uVar4] = cVar5;
        uVar4 = uVar4 + 1;
        cVar5 = *pcVar6;
        if (cVar5 == '\0') break;
      } while (uVar4 < 0x2ff);
    }
    param_3[uVar4] = 0;
    uVar3 = 0;
    do {
      uVar4 = uVar3;
      uVar3 = uVar4 + 1;
    } while (param_3[uVar4] != '\0');
    if (uVar3 < 0x300) {
      param_3[uVar4] = 0x3d;
      uVar4 = uVar3;
    }
    param_3[uVar4] = 0;
    if (uVar7 != 0) goto LAB_10008bf4;
    uVar7 = 0;
    do {
      uVar3 = uVar7;
      uVar7 = uVar3 + 1;
    } while (param_3[uVar3] != '\0');
    if (uVar3 + 1 < 0x300) {
      *(undefined2 *)(param_3 + uVar3) = 0x30;
    }
    uVar7 = local_14[6];
LAB_10008cba:
    uVar3 = 0;
    do {
      uVar4 = uVar3;
      uVar3 = uVar4 + 1;
    } while (param_3[uVar4] != '\0');
    if (uVar3 < 0x300) {
      param_3[uVar4] = 0x20;
      uVar4 = uVar3;
    }
    param_3[uVar4] = 0;
    uVar3 = 0;
    do {
      uVar4 = uVar3;
      uVar3 = uVar4 + 1;
    } while (param_3[uVar4] != '\0');
    if (uVar4 + 1 < 0x300) {
      cVar5 = 'a';
      pcVar6 = &DAT_1000f26a;
      do {
        param_3[uVar4] = cVar5;
        uVar4 = uVar4 + 1;
        cVar5 = *pcVar6;
        if (cVar5 == '\0') break;
        pcVar6 = pcVar6 + 1;
      } while (uVar4 < 0x2ff);
    }
    param_3[uVar4] = 0;
    uVar3 = 0;
    do {
      uVar4 = uVar3;
      uVar3 = uVar4 + 1;
    } while (param_3[uVar4] != '\0');
    if (uVar3 < 0x300) {
      param_3[uVar4] = 0x3d;
      uVar4 = uVar3;
    }
    param_3[uVar4] = 0;
    if (uVar7 != 0) goto LAB_10008d44;
    uVar7 = 0;
    do {
      uVar3 = uVar7;
      uVar7 = uVar3 + 1;
    } while (param_3[uVar3] != '\0');
    if (uVar3 + 1 < 0x300) {
      *(undefined2 *)(param_3 + uVar3) = 0x30;
    }
    uVar7 = local_14[7];
LAB_10008e0a:
    uVar3 = 0;
    do {
      uVar4 = uVar3;
      uVar3 = uVar4 + 1;
    } while (param_3[uVar4] != '\0');
    if (uVar3 < 0x300) {
      param_3[uVar4] = 0x20;
      uVar4 = uVar3;
    }
    param_3[uVar4] = 0;
    uVar3 = 0;
    do {
      uVar4 = uVar3;
      uVar3 = uVar4 + 1;
    } while (param_3[uVar4] != '\0');
    if (uVar4 + 1 < 0x300) {
      cVar5 = 'h';
      pcVar6 = &DAT_1000f26f;
      do {
        param_3[uVar4] = cVar5;
        uVar4 = uVar4 + 1;
        cVar5 = *pcVar6;
        if (cVar5 == '\0') break;
        pcVar6 = pcVar6 + 1;
      } while (uVar4 < 0x2ff);
    }
    param_3[uVar4] = 0;
    uVar3 = 0;
    do {
      uVar4 = uVar3;
      uVar3 = uVar4 + 1;
    } while (param_3[uVar4] != '\0');
    if (uVar3 < 0x300) {
      param_3[uVar4] = 0x3d;
      uVar4 = uVar3;
    }
    param_3[uVar4] = 0;
    if (uVar7 != 0) goto LAB_10008e94;
    uVar7 = 0;
    do {
      uVar3 = uVar7;
      uVar7 = uVar3 + 1;
    } while (param_3[uVar3] != '\0');
    if (uVar3 + 1 < 0x300) {
      *(undefined2 *)(param_3 + uVar3) = 0x30;
    }
    uVar7 = local_14[8];
LAB_10008f5a:
    uVar3 = 0;
    do {
      uVar4 = uVar3;
      uVar3 = uVar4 + 1;
    } while (param_3[uVar4] != '\0');
    if (uVar3 < 0x300) {
      param_3[uVar4] = 0x20;
      uVar4 = uVar3;
    }
    param_3[uVar4] = 0;
    uVar3 = 0;
    do {
      uVar4 = uVar3;
      uVar3 = uVar4 + 1;
    } while (param_3[uVar4] != '\0');
    if (uVar4 + 1 < 0x300) {
      cVar5 = 'u';
      pcVar6 = &DAT_1000f273;
      do {
        param_3[uVar4] = cVar5;
        uVar4 = uVar4 + 1;
        cVar5 = *pcVar6;
        if (cVar5 == '\0') break;
        pcVar6 = pcVar6 + 1;
      } while (uVar4 < 0x2ff);
    }
    param_3[uVar4] = 0;
    uVar3 = 0;
    do {
      uVar4 = uVar3;
      uVar3 = uVar4 + 1;
    } while (param_3[uVar4] != '\0');
    if (uVar3 < 0x300) {
      param_3[uVar4] = 0x3d;
      uVar4 = uVar3;
    }
    param_3[uVar4] = 0;
    if (uVar7 != 0) goto LAB_10008fe4;
    uVar7 = 0;
    do {
      uVar3 = uVar7;
      uVar7 = uVar3 + 1;
    } while (param_3[uVar3] != '\0');
    if (uVar3 + 1 < 0x300) {
      *(undefined2 *)(param_3 + uVar3) = 0x30;
    }
    uVar7 = local_14[9];
LAB_100090aa:
    uVar3 = 0;
    do {
      uVar4 = uVar3;
      uVar3 = uVar4 + 1;
    } while (param_3[uVar4] != '\0');
    if (uVar3 < 0x300) {
      param_3[uVar4] = 0x20;
      uVar4 = uVar3;
    }
    param_3[uVar4] = 0;
    uVar3 = 0;
    do {
      uVar4 = uVar3;
      uVar3 = uVar4 + 1;
    } while (param_3[uVar4] != '\0');
    if (uVar4 + 1 < 0x300) {
      cVar5 = 'u';
      pcVar6 = &DAT_1000f277;
      do {
        param_3[uVar4] = cVar5;
        uVar4 = uVar4 + 1;
        cVar5 = *pcVar6;
        if (cVar5 == '\0') break;
        pcVar6 = pcVar6 + 1;
      } while (uVar4 < 0x2ff);
    }
    param_3[uVar4] = 0;
    uVar3 = 0;
    do {
      uVar4 = uVar3;
      uVar3 = uVar4 + 1;
    } while (param_3[uVar4] != '\0');
    if (uVar3 < 0x300) {
      param_3[uVar4] = 0x3d;
      uVar4 = uVar3;
    }
    param_3[uVar4] = 0;
    if (uVar7 != 0) goto LAB_10009134;
    uVar7 = 0;
    do {
      uVar3 = uVar7;
      uVar7 = uVar3 + 1;
    } while (param_3[uVar3] != '\0');
    if (uVar3 + 1 < 0x300) {
      *(undefined2 *)(param_3 + uVar3) = 0x30;
    }
    uVar7 = local_14[10];
LAB_100091fa:
    uVar3 = 0;
    do {
      uVar4 = uVar3;
      uVar3 = uVar4 + 1;
    } while (param_3[uVar4] != '\0');
    if (uVar3 < 0x300) {
      param_3[uVar4] = 0x20;
      uVar4 = uVar3;
    }
    param_3[uVar4] = 0;
    uVar3 = 0;
    do {
      uVar4 = uVar3;
      uVar3 = uVar4 + 1;
    } while (param_3[uVar4] != '\0');
    if (uVar4 + 1 < 0x300) {
      cVar5 = 'o';
      pcVar6 = &DAT_1000f27c;
      do {
        param_3[uVar4] = cVar5;
        uVar4 = uVar4 + 1;
        cVar5 = *pcVar6;
        if (cVar5 == '\0') break;
        pcVar6 = pcVar6 + 1;
      } while (uVar4 < 0x2ff);
    }
    param_3[uVar4] = 0;
    uVar3 = 0;
    do {
      uVar4 = uVar3;
      uVar3 = uVar4 + 1;
    } while (param_3[uVar4] != '\0');
    if (uVar3 < 0x300) {
      param_3[uVar4] = 0x3d;
      uVar4 = uVar3;
    }
    param_3[uVar4] = 0;
    if (uVar7 != 0) goto LAB_10009284;
    uVar7 = 0;
    do {
      uVar3 = uVar7;
      uVar7 = uVar3 + 1;
    } while (param_3[uVar3] != '\0');
    if (uVar3 + 1 < 0x300) {
      *(undefined2 *)(param_3 + uVar3) = 0x30;
    }
    uVar7 = local_14[0xb];
LAB_1000934a:
    uVar3 = 0;
    do {
      uVar4 = uVar3;
      uVar3 = uVar4 + 1;
    } while (param_3[uVar4] != '\0');
    if (uVar3 < 0x300) {
      param_3[uVar4] = 0x20;
      uVar4 = uVar3;
    }
    param_3[uVar4] = 0;
    uVar3 = 0;
    do {
      uVar4 = uVar3;
      uVar3 = uVar4 + 1;
    } while (param_3[uVar4] != '\0');
    if (uVar4 + 1 < 0x300) {
      cVar5 = 'e';
      pcVar6 = &DAT_1000f281;
      do {
        param_3[uVar4] = cVar5;
        uVar4 = uVar4 + 1;
        cVar5 = *pcVar6;
        if (cVar5 == '\0') break;
        pcVar6 = pcVar6 + 1;
      } while (uVar4 < 0x2ff);
    }
    param_3[uVar4] = 0;
    uVar3 = 0;
    do {
      uVar4 = uVar3;
      uVar3 = uVar4 + 1;
    } while (param_3[uVar4] != '\0');
    if (uVar3 < 0x300) {
      param_3[uVar4] = 0x3d;
      uVar4 = uVar3;
    }
    param_3[uVar4] = 0;
    if (uVar7 != 0) goto LAB_100093d4;
    uVar7 = 0;
    do {
      uVar3 = uVar7;
      uVar7 = uVar3 + 1;
    } while (param_3[uVar3] != '\0');
    if (uVar3 + 1 < 0x300) {
      *(undefined2 *)(param_3 + uVar3) = 0x30;
    }
    uVar7 = local_14[0xc];
LAB_1000949a:
    uVar3 = 0;
    do {
      uVar4 = uVar3;
      uVar3 = uVar4 + 1;
    } while (param_3[uVar4] != '\0');
    if (uVar3 < 0x300) {
      param_3[uVar4] = 0x20;
      uVar4 = uVar3;
    }
    param_3[uVar4] = 0;
    uVar3 = 0;
    do {
      uVar4 = uVar3;
      uVar3 = uVar4 + 1;
    } while (param_3[uVar4] != '\0');
    if (uVar4 + 1 < 0x300) {
      cVar5 = 's';
      pcVar6 = str_1000f285;
      do {
        pcVar6 = pcVar6 + 1;
        param_3[uVar4] = cVar5;
        uVar4 = uVar4 + 1;
        cVar5 = *pcVar6;
        if (cVar5 == '\0') break;
      } while (uVar4 < 0x2ff);
    }
    param_3[uVar4] = 0;
    uVar3 = 0;
    do {
      uVar4 = uVar3;
      uVar3 = uVar4 + 1;
    } while (param_3[uVar4] != '\0');
    if (uVar3 < 0x300) {
      param_3[uVar4] = 0x3d;
      uVar4 = uVar3;
    }
    param_3[uVar4] = 0;
    if (uVar7 != 0) goto LAB_10009524;
    uVar7 = 0;
    do {
      uVar3 = uVar7;
      uVar7 = uVar3 + 1;
    } while (param_3[uVar3] != '\0');
    if (uVar3 + 1 < 0x300) {
      *(undefined2 *)(param_3 + uVar3) = 0x30;
    }
    uVar7 = local_14[0xd];
LAB_100095ea:
    uVar3 = 0;
    do {
      uVar4 = uVar3;
      uVar3 = uVar4 + 1;
    } while (param_3[uVar4] != '\0');
    if (uVar3 < 0x300) {
      param_3[uVar4] = 0x20;
      uVar4 = uVar3;
    }
    param_3[uVar4] = 0;
    uVar3 = 0;
    do {
      uVar4 = uVar3;
      uVar3 = uVar4 + 1;
    } while (param_3[uVar4] != '\0');
    if (uVar4 + 1 < 0x300) {
      cVar5 = 'n';
      pcVar6 = str_1000f28b;
      do {
        pcVar6 = pcVar6 + 1;
        param_3[uVar4] = cVar5;
        uVar4 = uVar4 + 1;
        cVar5 = *pcVar6;
        if (cVar5 == '\0') break;
      } while (uVar4 < 0x2ff);
    }
    param_3[uVar4] = 0;
    uVar3 = 0;
    do {
      uVar4 = uVar3;
      uVar3 = uVar4 + 1;
    } while (param_3[uVar4] != '\0');
    if (uVar3 < 0x300) {
      param_3[uVar4] = 0x3d;
      uVar4 = uVar3;
    }
    param_3[uVar4] = 0;
    if (uVar7 != 0) goto LAB_10009674;
    uVar7 = 0;
    do {
      uVar3 = uVar7;
      uVar7 = uVar3 + 1;
    } while (param_3[uVar3] != '\0');
    if (uVar3 + 1 < 0x300) {
      *(undefined2 *)(param_3 + uVar3) = 0x30;
    }
    uVar7 = local_14[0xe];
LAB_1000973a:
    uVar3 = 0;
    do {
      uVar4 = uVar3;
      uVar3 = uVar4 + 1;
    } while (param_3[uVar4] != '\0');
    if (uVar3 < 0x300) {
      param_3[uVar4] = 0x20;
      uVar4 = uVar3;
    }
    param_3[uVar4] = 0;
    uVar3 = 0;
    do {
      uVar4 = uVar3;
      uVar3 = uVar4 + 1;
    } while (param_3[uVar4] != '\0');
    if (uVar4 + 1 < 0x300) {
      cVar5 = 'f';
      pcVar6 = str_1000f293;
      do {
        pcVar6 = pcVar6 + 1;
        param_3[uVar4] = cVar5;
        uVar4 = uVar4 + 1;
        cVar5 = *pcVar6;
        if (cVar5 == '\0') break;
      } while (uVar4 < 0x2ff);
    }
    param_3[uVar4] = 0;
    uVar3 = 0;
    do {
      uVar4 = uVar3;
      uVar3 = uVar4 + 1;
    } while (param_3[uVar4] != '\0');
    if (uVar3 < 0x300) {
      param_3[uVar4] = 0x3d;
      uVar4 = uVar3;
    }
    param_3[uVar4] = 0;
    if (uVar7 != 0) goto LAB_100097c4;
    uVar7 = 0;
    do {
      uVar3 = uVar7;
      uVar7 = uVar3 + 1;
    } while (param_3[uVar3] != '\0');
    if (uVar3 + 1 < 0x300) {
      *(undefined2 *)(param_3 + uVar3) = 0x30;
    }
    uVar7 = local_14[0xf];
LAB_1000988a:
    uVar3 = 0;
    do {
      uVar4 = uVar3;
      uVar3 = uVar4 + 1;
    } while (param_3[uVar4] != '\0');
    if (uVar3 < 0x300) {
      param_3[uVar4] = 0x20;
      uVar4 = uVar3;
    }
    param_3[uVar4] = 0;
    uVar3 = 0;
    do {
      uVar4 = uVar3;
      uVar3 = uVar4 + 1;
    } while (param_3[uVar4] != '\0');
    if (uVar4 + 1 < 0x300) {
      cVar5 = 's';
      pcVar6 = &DAT_1000f29d;
      do {
        param_3[uVar4] = cVar5;
        uVar4 = uVar4 + 1;
        cVar5 = *pcVar6;
        if (cVar5 == '\0') break;
        pcVar6 = pcVar6 + 1;
      } while (uVar4 < 0x2ff);
    }
    param_3[uVar4] = 0;
    uVar3 = 0;
    do {
      uVar4 = uVar3;
      uVar3 = uVar4 + 1;
    } while (param_3[uVar4] != '\0');
    if (uVar3 < 0x300) {
      param_3[uVar4] = 0x3d;
      uVar4 = uVar3;
    }
    param_3[uVar4] = 0;
    if (uVar7 != 0) goto LAB_10009914;
    uVar7 = 0;
    do {
      uVar3 = uVar7;
      uVar7 = uVar3 + 1;
    } while (param_3[uVar3] != '\0');
    if (uVar3 + 1 < 0x300) {
      *(undefined2 *)(param_3 + uVar3) = 0x30;
    }
    uVar7 = local_14[0x10];
LAB_100099da:
    uVar3 = 0;
    do {
      uVar4 = uVar3;
      uVar3 = uVar4 + 1;
    } while (param_3[uVar4] != '\0');
    if (uVar3 < 0x300) {
      param_3[uVar4] = 0x20;
      uVar4 = uVar3;
    }
    param_3[uVar4] = 0;
    uVar3 = 0;
    do {
      uVar4 = uVar3;
      uVar3 = uVar4 + 1;
    } while (param_3[uVar4] != '\0');
    if (uVar4 + 1 < 0x300) {
      cVar5 = 'g';
      pcVar6 = &DAT_1000f2a1;
      do {
        param_3[uVar4] = cVar5;
        uVar4 = uVar4 + 1;
        cVar5 = *pcVar6;
        if (cVar5 == '\0') break;
        pcVar6 = pcVar6 + 1;
      } while (uVar4 < 0x2ff);
    }
    param_3[uVar4] = 0;
    uVar3 = 0;
    do {
      uVar4 = uVar3;
      uVar3 = uVar4 + 1;
    } while (param_3[uVar4] != '\0');
    if (uVar3 < 0x300) {
      param_3[uVar4] = 0x3d;
      uVar4 = uVar3;
    }
    param_3[uVar4] = 0;
    if (uVar7 != 0) goto LAB_10009a64;
    uVar7 = 0;
    do {
      uVar3 = uVar7;
      uVar7 = uVar3 + 1;
    } while (param_3[uVar3] != '\0');
    if (uVar3 + 1 < 0x300) {
      *(undefined2 *)(param_3 + uVar3) = 0x30;
    }
    uVar7 = local_14[0x11];
LAB_10009b2a:
    uVar3 = 0;
    do {
      uVar4 = uVar3;
      uVar3 = uVar4 + 1;
    } while (param_3[uVar4] != '\0');
    if (uVar3 < 0x300) {
      param_3[uVar4] = 0x20;
      uVar4 = uVar3;
    }
    param_3[uVar4] = 0;
    uVar3 = 0;
    do {
      uVar4 = uVar3;
      uVar3 = uVar4 + 1;
    } while (param_3[uVar4] != '\0');
    if (uVar4 + 1 < 0x300) {
      cVar5 = 'c';
      pcVar6 = str_1000f2a5;
      do {
        pcVar6 = pcVar6 + 1;
        param_3[uVar4] = cVar5;
        uVar4 = uVar4 + 1;
        cVar5 = *pcVar6;
        if (cVar5 == '\0') break;
      } while (uVar4 < 0x2ff);
    }
    param_3[uVar4] = 0;
    uVar3 = 0;
    do {
      uVar4 = uVar3;
      uVar3 = uVar4 + 1;
    } while (param_3[uVar4] != '\0');
    if (uVar3 < 0x300) {
      param_3[uVar4] = 0x3d;
      uVar4 = uVar3;
    }
    param_3[uVar4] = 0;
    if (uVar7 == 0) {
      uVar7 = 0;
      do {
        uVar3 = uVar7;
        uVar7 = uVar3 + 1;
      } while (param_3[uVar3] != '\0');
      if (uVar3 + 1 < 0x300) {
        *(undefined2 *)(param_3 + uVar3) = 0x30;
      }
      goto LAB_10009c37;
    }
  }
  uVar3 = 0;
  do {
    abStack_1f[uVar3 + 1] = (byte)(uVar7 % 10) | 0x30;
    uVar4 = uVar3 + 1;
    if (8 < uVar3) break;
    bVar2 = 9 < uVar7;
    uVar3 = uVar4;
    uVar7 = uVar7 / 10;
  } while (bVar2);
  do {
    if (param_3 != (undefined1 *)0x0) {
      uVar7 = 0;
      do {
        uVar3 = uVar7;
        uVar7 = uVar3 + 1;
      } while (param_3[uVar3] != '\0');
      if (uVar7 < 0x300) {
        param_3[uVar3] = abStack_1f[uVar4];
        param_3[uVar7] = 0;
      }
    }
    uVar4 = uVar4 - 1;
  } while (uVar4 != 0);
LAB_10009c37:
  pcVar6 = str_1000f304;
  if (local_14[0x12] != 0) {
    pcVar6 = &DAT_1000f2ff;
  }
  if (param_3 != (undefined1 *)0x0) {
    bVar1 = *pcVar6;
    uVar7 = (uint)bVar1;
    if (bVar1 != 0) {
      uVar3 = 0;
      do {
        uVar4 = uVar3;
        uVar3 = uVar4 + 1;
      } while (param_3[uVar4] != '\0');
      if (uVar3 < 0x300) {
        param_3[uVar4] = 0x20;
        uVar4 = uVar3;
      }
      param_3[uVar4] = 0;
      uVar3 = 0;
      do {
        uVar4 = uVar3;
        uVar3 = uVar4 + 1;
      } while (param_3[uVar4] != '\0');
      if (uVar4 + 1 < 0x300) {
        uVar7 = (uint)CONCAT11(0x69,bVar1);
        pcVar9 = str_1000f2b6;
        do {
          pcVar9 = pcVar9 + 1;
          param_3[uVar4] = (char)(uVar7 >> 8);
          uVar4 = uVar4 + 1;
          uVar7 = (uint)CONCAT11(*pcVar9,(char)uVar7);
          if (*pcVar9 == '\0') break;
        } while (uVar4 < 0x2ff);
      }
      param_3[uVar4] = 0;
      uVar3 = 0;
      do {
        uVar4 = uVar3;
        uVar3 = uVar4 + 1;
      } while (param_3[uVar4] != '\0');
      if (uVar3 < 0x300) {
        param_3[uVar4] = 0x3d;
        uVar4 = uVar3;
      }
      param_3[uVar4] = 0;
      uVar3 = 0;
      do {
        uVar4 = uVar3;
        uVar3 = uVar4 + 1;
      } while (param_3[uVar4] != '\0');
      if (uVar4 + 1 < 0x300) {
        do {
          pcVar6 = pcVar6 + 1;
          param_3[uVar4] = (char)uVar7;
          uVar4 = uVar4 + 1;
          uVar7 = (uint)(byte)*pcVar6;
          if (*pcVar6 == 0) break;
        } while (uVar4 < 0x2ff);
      }
      param_3[uVar4] = 0;
    }
  }
  pcVar6 = str_1000f304;
  if (local_14[0x13] != 0) {
    pcVar6 = &DAT_1000f2ff;
  }
  if (param_3 != (undefined1 *)0x0) {
    bVar1 = *pcVar6;
    uVar7 = (uint)bVar1;
    if (bVar1 != 0) {
      uVar3 = 0;
      do {
        uVar4 = uVar3;
        uVar3 = uVar4 + 1;
      } while (param_3[uVar4] != '\0');
      if (uVar3 < 0x300) {
        param_3[uVar4] = 0x20;
        uVar4 = uVar3;
      }
      param_3[uVar4] = 0;
      uVar3 = 0;
      do {
        uVar4 = uVar3;
        uVar3 = uVar4 + 1;
      } while (param_3[uVar4] != '\0');
      if (uVar4 + 1 < 0x300) {
        uVar7 = (uint)CONCAT11(0x66,bVar1);
        pcVar9 = str_1000f2c4;
        do {
          pcVar9 = pcVar9 + 1;
          param_3[uVar4] = (char)(uVar7 >> 8);
          uVar4 = uVar4 + 1;
          uVar7 = (uint)CONCAT11(*pcVar9,(char)uVar7);
          if (*pcVar9 == '\0') break;
        } while (uVar4 < 0x2ff);
      }
      param_3[uVar4] = 0;
      uVar3 = 0;
      do {
        uVar4 = uVar3;
        uVar3 = uVar4 + 1;
      } while (param_3[uVar4] != '\0');
      if (uVar3 < 0x300) {
        param_3[uVar4] = 0x3d;
        uVar4 = uVar3;
      }
      param_3[uVar4] = 0;
      uVar3 = 0;
      do {
        uVar4 = uVar3;
        uVar3 = uVar4 + 1;
      } while (param_3[uVar4] != '\0');
      if (uVar4 + 1 < 0x300) {
        do {
          pcVar6 = pcVar6 + 1;
          param_3[uVar4] = (char)uVar7;
          uVar4 = uVar4 + 1;
          uVar7 = (uint)(byte)*pcVar6;
          if (*pcVar6 == 0) break;
        } while (uVar4 < 0x2ff);
      }
      param_3[uVar4] = 0;
    }
  }
  return;
}

#undef DAT_1000f26a
#undef DAT_1000f26f
#undef DAT_1000f273
#undef DAT_1000f277
#undef DAT_1000f27c
#undef DAT_1000f281
#undef DAT_1000f29d
#undef DAT_1000f2a1
#undef DAT_1000f2e5
#undef DAT_1000f2ff
#undef str_1000f14b
#undef str_1000f1dd
#undef str_1000f1ed
#undef str_1000f1f7
#undef str_1000f1ff
#undef str_1000f207
#undef str_1000f214
#undef str_1000f21e
#undef str_1000f229
#undef str_1000f237
#undef str_1000f244
#undef str_1000f251
#undef str_1000f25b
#undef str_1000f285
#undef str_1000f28b
#undef str_1000f293
#undef str_1000f2a5
#undef str_1000f2b6
#undef str_1000f2c4
#undef str_1000f2d8
#undef str_1000f2f7
#undef str_1000f304
#undef local_14
#undef abStack_1f

#undef DAT_1000f272
#define DAT_1000f272 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x324U)))
#undef DAT_1000f273
#define DAT_1000f273 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x325U)))
#undef DAT_1000f274
#define DAT_1000f274 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x326U)))
#undef DAT_1000f275
#define DAT_1000f275 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x327U)))
#undef DAT_1000f659
#define DAT_1000f659 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x70bU)))
#undef DAT_1000f65f
#define DAT_1000f65f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x711U)))
#undef DAT_1000f6a4
#define DAT_1000f6a4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x756U)))
#undef DAT_1000f6a5
#define DAT_1000f6a5 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x757U)))
#undef DAT_1000f6a6
#define DAT_1000f6a6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x758U)))
#undef DAT_1000f6a7
#define DAT_1000f6a7 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x759U)))
#undef DAT_1000f6a8
#define DAT_1000f6a8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x75aU)))
#undef DAT_1000f6a9
#define DAT_1000f6a9 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x75bU)))
#undef DAT_1000f6fa
#define DAT_1000f6fa (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7acU)))
#undef DAT_1000f705
#define DAT_1000f705 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7b7U)))
#undef DAT_1000f866
#define DAT_1000f866 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x918U)))
#undef DAT_1000f86e
#define DAT_1000f86e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x920U)))
#undef DAT_1000f8a1
#define DAT_1000f8a1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x953U)))
#undef DAT_1000f8a9
#define DAT_1000f8a9 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x95bU)))
#undef DAT_1000f8b1
#define DAT_1000f8b1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x963U)))
#undef DAT_1000f8de
#define DAT_1000f8de (*(uint8_t *)(((uintptr_t)pf_module_state + 0x990U)))
#undef DAT_1000f90e
#define DAT_1000f90e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x9c0U)))
#undef DAT_1000f916
#define DAT_1000f916 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x9c8U)))
#undef DAT_1000f91e
#define DAT_1000f91e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x9d0U)))
#undef DAT_1000f930
#define DAT_1000f930 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x9e2U)))
#undef DAT_1000f93e
#define DAT_1000f93e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x9f0U)))
#undef DAT_1000f968
#define DAT_1000f968 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa1aU)))
#undef str_1000f11f
#define str_1000f11f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1d1U)))
#undef str_1000f285
#define str_1000f285 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x337U)))
#undef str_1000f28b
#define str_1000f28b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x33dU)))
#undef str_1000f293
#define str_1000f293 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x345U)))
#undef str_1000f672
#define str_1000f672 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x724U)))
#undef str_1000f693
#define str_1000f693 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x745U)))
#undef str_1000f69c
#define str_1000f69c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x74eU)))
#undef str_1000f6aa
#define str_1000f6aa (*(char (*)[1])(((uintptr_t)pf_module_state + 0x75cU)))
#undef str_1000f6b1
#define str_1000f6b1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x763U)))
#undef str_1000f6bd
#define str_1000f6bd (*(char (*)[1])(((uintptr_t)pf_module_state + 0x76fU)))
#undef str_1000f6d3
#define str_1000f6d3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x785U)))
#undef str_1000f711
#define str_1000f711 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7c3U)))
#undef str_1000f747
#define str_1000f747 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7f9U)))
#undef str_1000f76f
#define str_1000f76f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x821U)))
#undef str_1000f77f
#define str_1000f77f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x831U)))
#undef str_1000f7a9
#define str_1000f7a9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x85bU)))
#undef str_1000f7b9
#define str_1000f7b9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x86bU)))
#undef str_1000f7cd
#define str_1000f7cd (*(char (*)[1])(((uintptr_t)pf_module_state + 0x87fU)))
#undef str_1000f7e5
#define str_1000f7e5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x897U)))
#undef str_1000f7fd
#define str_1000f7fd (*(char (*)[1])(((uintptr_t)pf_module_state + 0x8afU)))
#undef str_1000f816
#define str_1000f816 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x8c8U)))
#undef str_1000f827
#define str_1000f827 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x8d9U)))
#undef str_1000f837
#define str_1000f837 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x8e9U)))
#undef str_1000f846
#define str_1000f846 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x8f8U)))
#undef str_1000f85c
#define str_1000f85c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x90eU)))
#undef str_1000f875
#define str_1000f875 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x927U)))
#undef str_1000f87f
#define str_1000f87f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x931U)))
#undef str_1000f88b
#define str_1000f88b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x93dU)))
#undef str_1000f8b8
#define str_1000f8b8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x96aU)))
#undef str_1000f8c4
#define str_1000f8c4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x976U)))
#undef str_1000f8e3
#define str_1000f8e3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x995U)))
#undef str_1000f8eb
#define str_1000f8eb (*(char (*)[1])(((uintptr_t)pf_module_state + 0x99dU)))
#undef str_1000f8f3
#define str_1000f8f3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x9a5U)))
#undef str_1000f925
#define str_1000f925 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x9d7U)))
#undef str_1000f934
#define str_1000f934 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x9e6U)))
#undef str_1000f942
#define str_1000f942 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x9f4U)))
#undef str_1000f94b
#define str_1000f94b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x9fdU)))
#undef str_1000f954
#define str_1000f954 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa06U)))
#undef str_1000f95c
#define str_1000f95c (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa0eU)))
#define local_598 (*(undefined4 *)(frame + 24))
#define local_318 (*(undefined2 *)(frame + 664))
#define cStack_599 (*(char *)(frame + 23))
#define local_98 (*(undefined4 *)(frame + 1304))
#define local_38 (*(char * *)(frame + 1400))
#define cStack_319 (*(char *)(frame + 663))
#define local_34 (*(uint *)(frame + 1404))
#define local_2f (*(byte *)(frame + 1409))
#define cStack_99 (*(char *)(frame + 1303))
#define local_2e (*(undefined2 *)(frame + 1410))
#define local_2c (*(uint (*)[3])(frame + 1412))
#define local_20 (*(uint *)(frame + 1424))
#define local_1c (*(byte * *)(frame + 1428))
#define local_18 (*(byte * *)(frame + 1432))
#define local_14 (*(int * *)(frame + 1436))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009e10
 */

void recovered_10009e10(int *in_ECX,byte *in_EDX,int *param_3)

{
  unsigned char frame[1488] __attribute__((aligned(16))) = {0};

  short sVar1;
  bool bVar2;
  byte *pbVar3;
  int *piVar4;
  undefined1 uVar5;
  byte bVar6;
  ushort uVar7;
  uint uVar8;
  byte *pbVar9;
  uint uVar10;
  char cVar11;
  byte bVar14;
  char *pcVar12;
  uint uVar13;
  byte bVar15;
  byte bVar16;
  ushort uVar17;
  uint uVar18;
  byte *pbVar19;
  int iVar20;
  uint uVar21;
  byte *pbVar22;
  char *pcVar23;
  bool bVar24;

  if (in_EDX == (byte *)0x0) {
    return;
  }
  uVar18 = (uint)in_EDX[8];
  switch((uintptr_t)(uVar18 - 1)) {
  case 0:
    local_18 = (byte *)str_1000f69c;
    break;
  case 1:
    local_18 = (byte *)str_1000f28b;
    break;
  case 2:
    local_18 = (byte *)str_1000f693;
    break;
  case 3:
    local_18 = &DAT_1000f6a4;
    break;
  default:
switchD_10009e30_caseD_4:
    uVar17 = *(ushort *)(in_EDX + 4);
    local_18 = (byte *)str_1000f6b1;
    if (uVar17 < 0x11ab) {
      if ((uVar17 != 0x106b) && (uVar17 != 0x1180)) {
        return;
      }
    }
    else if ((uVar17 != 0x11ab) && (uVar17 != 0x14e4)) {
      return;
    }
    break;
  case 5:
    local_18 = (byte *)str_1000f6aa;
    break;
  case 0xb:
    bVar16 = in_EDX[9];
    if (bVar16 == 0) {
      local_18 = (byte *)str_1000f293;
    }
    else if (bVar16 == 3) {
      local_18 = &DAT_1000f272;
    }
    else {
      if (bVar16 != 5) goto switchD_10009e30_caseD_4;
      local_18 = (byte *)str_1000f285;
    }
  }
  if (param_3 == (int *)0x0) {
    return;
  }
  if (0x5f < (uint)param_3[1]) {
    return;
  }
  local_14 = in_ECX;
  *param_3 = *param_3 + 1;
  sVar1 = *(short *)(in_EDX + 4);
  local_1c = in_EDX;
  if (sVar1 == -0x7f7a) {
    param_3[2] = param_3[2] + 1;
    iVar20 = 0xc;
    if (uVar18 != 3) goto LAB_10009f1e;
    goto LAB_10009f51;
  }
  if (sVar1 == 0x10de) {
    param_3[4] = param_3[4] + 1;
    bVar24 = true;
    iVar20 = 0x14;
    if (uVar18 == 3) goto LAB_10009f51;
  }
  else {
LAB_10009f1e:
    bVar24 = false;
  }
  switch((uintptr_t)(uVar18 - 1)) {
  case 0:
    iVar20 = 0x18;
    if (in_EDX[9] == 6) goto LAB_10009f51;
    break;
  case 1:
    iVar20 = 0x34;
    goto LAB_10009f51;
  case 3:
    iVar20 = 0x1c;
    if (in_EDX[9] == 3) goto LAB_10009f51;
    break;
  case 0xb:
    bVar16 = in_EDX[9];
    if (bVar16 == 0) {
      iVar20 = 0x38;
    }
    else if (bVar16 == 5) {
      iVar20 = 0x30;
    }
    else {
      if (bVar16 != 3) break;
      param_3[8] = param_3[8] + 1;
      bVar16 = in_EDX[10];
      iVar20 = 0x24;
      if ((bVar16 != 0) &&
         (((sVar1 != -0x7f7a ||
           (((uVar18 = (uint)*(ushort *)(in_EDX + 6), (uVar18 & 0xfff8) != 0x27c8 &&
             (5 < uVar18 - 0x2830)) && (5 < uVar18 - 0x2934)))) && (iVar20 = 0x28, bVar16 != 0x10)))
         ) {
        if (bVar24) {
          uVar17 = *(ushort *)(in_EDX + 6);
          if ((((uVar17 | 2) == 0xaa7) || (iVar20 = 0x2c, bVar16 == 0x20)) ||
             ((uVar17 == 0xaa6 || (uVar17 == 0xaa9)))) goto LAB_10009f51;
        }
        else {
          iVar20 = 0x2c;
          if (bVar16 == 0x20) goto LAB_10009f51;
        }
        break;
      }
    }
LAB_10009f51:
    *(int *)((int)param_3 + iVar20) = *(int *)((int)param_3 + iVar20) + 1;
  }
  PF_PART1(local_318, 0) = '\0';
  uVar18 = 0;
  do {
    uVar8 = uVar18;
    uVar18 = uVar8 + 1;
  } while (*(char *)((int)&local_318 + uVar8) != '\0');
  if (uVar8 + 1 < 0x280) {
    cVar11 = 'r';
    pcVar12 = &DAT_1000f659;
    do {
      *(char *)((int)&local_318 + uVar8) = cVar11;
      uVar8 = uVar8 + 1;
      cVar11 = *pcVar12;
      if (cVar11 == '\0') break;
      pcVar12 = pcVar12 + 1;
    } while (uVar8 < 0x27f);
  }
  *(undefined1 *)((int)&local_318 + uVar8) = 0;
  pbVar19 = local_18;
  uVar18 = 0;
  do {
    uVar8 = uVar18;
    uVar18 = uVar8 + 1;
  } while (*(char *)((int)&local_318 + uVar8) != '\0');
  bVar16 = *local_18;
  pbVar9 = local_18;
  if (uVar8 + 1 < 0x280 && bVar16 != 0) {
    do {
      *(byte *)((int)&local_318 + uVar8) = bVar16;
      uVar8 = uVar8 + 1;
      bVar16 = pbVar9[1];
      if (bVar16 == 0) break;
      pbVar9 = pbVar9 + 1;
    } while (uVar8 < 0x27f);
  }
  *(undefined1 *)((int)&local_318 + uVar8) = 0;
  pbVar9 = local_1c;
  if (sVar1 != 0x10de) {
    if (sVar1 == -0x7f7a) {
      uVar18 = 0;
      do {
        uVar8 = uVar18;
        uVar18 = uVar8 + 1;
      } while (*(char *)((int)&local_318 + uVar8) != '\0');
      if (uVar8 + 1 < 0x280) {
        cVar11 = ' ';
        pcVar12 = &DAT_1000f65f;
        do {
          *(char *)((int)&local_318 + uVar8) = cVar11;
          uVar8 = uVar8 + 1;
          cVar11 = *pcVar12;
          if (cVar11 == '\0') break;
          pcVar12 = pcVar12 + 1;
        } while (uVar8 < 0x27f);
      }
      goto LAB_1000a3d6;
    }
    goto switchD_1000a0d2_caseD_aa3;
  }
  uVar18 = 0;
  do {
    uVar8 = uVar18;
    uVar18 = uVar8 + 1;
  } while (*(char *)((int)&local_318 + uVar8) != '\0');
  if (uVar8 + 1 < 0x280) {
    cVar11 = ' ';
    pcVar12 = str_1000f6bd;
    do {
      pcVar12 = pcVar12 + 1;
      *(char *)((int)&local_318 + uVar8) = cVar11;
      uVar8 = uVar8 + 1;
      cVar11 = *pcVar12;
      if (cVar11 == '\0') break;
    } while (uVar8 < 0x27f);
  }
  *(undefined1 *)((int)&local_318 + uVar8) = 0;
  switch((uintptr_t)(*(short *)(pbVar9 + 6))) {
  case 0xaa2:
    uVar18 = 0;
    do {
      uVar8 = uVar18;
      uVar18 = uVar8 + 1;
    } while (*(char *)((int)&local_318 + uVar8) != '\0');
    if (uVar8 + 1 < 0x280) {
      cVar11 = ' ';
      pcVar12 = &DAT_1000f705;
      do {
        *(char *)((int)&local_318 + uVar8) = cVar11;
        uVar8 = uVar8 + 1;
        cVar11 = *pcVar12;
        if (cVar11 == '\0') break;
        pcVar12 = pcVar12 + 1;
      } while (uVar8 < 0x27f);
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
    goto switchD_1000a0d2_caseD_aa3;
  case 0xaa5:
  case 0xaa7:
    uVar18 = 0;
    do {
      uVar8 = uVar18;
      uVar18 = uVar8 + 1;
    } while (*(char *)((int)&local_318 + uVar8) != '\0');
    if (uVar8 + 1 < 0x280) {
      cVar11 = ' ';
      pcVar12 = str_1000f711;
      do {
        pcVar12 = pcVar12 + 1;
        *(char *)((int)&local_318 + uVar8) = cVar11;
        uVar8 = uVar8 + 1;
        cVar11 = *pcVar12;
        if (cVar11 == '\0') break;
      } while (uVar8 < 0x27f);
    }
    break;
  case 0xaa6:
  case 0xaa9:
    uVar18 = 0;
    do {
      uVar8 = uVar18;
      uVar18 = uVar8 + 1;
    } while (*(char *)((int)&local_318 + uVar8) != '\0');
    if (uVar8 + 1 < 0x280) {
      cVar11 = ' ';
      pcVar12 = str_1000f747;
      do {
        pcVar12 = pcVar12 + 1;
        *(char *)((int)&local_318 + uVar8) = cVar11;
        uVar8 = uVar8 + 1;
        cVar11 = *pcVar12;
        if (cVar11 == '\0') break;
      } while (uVar8 < 0x27f);
    }
    break;
  case 0xab0:
    uVar18 = 0;
    do {
      uVar8 = uVar18;
      uVar18 = uVar8 + 1;
    } while (*(char *)((int)&local_318 + uVar8) != '\0');
    if (uVar8 + 1 < 0x280) {
      cVar11 = ' ';
      pcVar12 = str_1000f76f;
      do {
        pcVar12 = pcVar12 + 1;
        *(char *)((int)&local_318 + uVar8) = cVar11;
        uVar8 = uVar8 + 1;
        cVar11 = *pcVar12;
        if (cVar11 == '\0') break;
      } while (uVar8 < 0x27f);
    }
    break;
  case 0xab9:
    uVar18 = 0;
    do {
      uVar8 = uVar18;
      uVar18 = uVar8 + 1;
    } while (*(char *)((int)&local_318 + uVar8) != '\0');
    if (uVar8 + 1 < 0x280) {
      cVar11 = ' ';
      pcVar12 = str_1000f6d3;
      do {
        pcVar12 = pcVar12 + 1;
        *(char *)((int)&local_318 + uVar8) = cVar11;
        uVar8 = uVar8 + 1;
        cVar11 = *pcVar12;
        if (cVar11 == '\0') break;
      } while (uVar8 < 0x27f);
    }
    break;
  case 0xac0:
    uVar18 = 0;
    do {
      uVar8 = uVar18;
      uVar18 = uVar8 + 1;
    } while (*(char *)((int)&local_318 + uVar8) != '\0');
    if (uVar8 + 1 < 0x280) {
      cVar11 = ' ';
      pcVar12 = &DAT_1000f6fa;
      do {
        *(char *)((int)&local_318 + uVar8) = cVar11;
        uVar8 = uVar8 + 1;
        cVar11 = *pcVar12;
        if (cVar11 == '\0') break;
        pcVar12 = pcVar12 + 1;
      } while (uVar8 < 0x27f);
    }
    break;
  default:
    if (*(short *)(pbVar9 + 6) == 0x863) {
      uVar18 = 0;
      do {
        uVar8 = uVar18;
        uVar18 = uVar8 + 1;
      } while (*(char *)((int)&local_318 + uVar8) != '\0');
      if (uVar8 + 1 < 0x280) {
        cVar11 = ' ';
        pcVar12 = str_1000f77f;
        do {
          pcVar12 = pcVar12 + 1;
          *(char *)((int)&local_318 + uVar8) = cVar11;
          uVar8 = uVar8 + 1;
          cVar11 = *pcVar12;
          if (cVar11 == '\0') break;
        } while (uVar8 < 0x27f);
      }
      break;
    }
    goto switchD_1000a0d2_caseD_aa3;
  }
LAB_1000a3d6:
  *(undefined1 *)((int)&local_318 + uVar8) = 0;
switchD_1000a0d2_caseD_aa3:
  pbVar22 = local_1c;
  local_598 = 0;
  if (((local_14 == (int *)0x0) || (*local_14 != 0x54584b57)) ||
     (((uint)local_14[2] < 100 || (local_14[0x18] == 0)))) {
    uVar18 = 0;
    do {
      uVar8 = uVar18;
      uVar18 = uVar8 + 1;
    } while (*(char *)((int)&local_318 + uVar8) != '\0');
    if (uVar8 + 1 < 0x280) {
      cVar11 = ' ';
      pcVar12 = str_1000f7cd;
      do {
        pcVar12 = pcVar12 + 1;
        *(char *)((int)&local_318 + uVar8) = cVar11;
        uVar8 = uVar8 + 1;
        cVar11 = *pcVar12;
        if (cVar11 == '\0') break;
      } while (uVar8 < 0x27f);
    }
LAB_1000a497:
    *(undefined1 *)((int)&local_318 + uVar8) = 0;
    local_98 = 0;
    local_2c[0] = 0;
    local_20 = 0;
    bVar24 = false;
  }
  else {
    if ((code *)local_14[0x17] == (code *)0x0) {
LAB_1000a8ee:
      uVar18 = 0;
      do {
        uVar8 = uVar18;
        uVar18 = uVar8 + 1;
      } while (*(char *)((int)&local_318 + uVar8) != '\0');
      if (uVar8 + 1 < 0x280) {
        cVar11 = ' ';
        pcVar12 = str_1000f7e5;
        do {
          pcVar12 = pcVar12 + 1;
          *(char *)((int)&local_318 + uVar8) = cVar11;
          uVar8 = uVar8 + 1;
          cVar11 = *pcVar12;
          if (cVar11 == '\0') break;
        } while (uVar8 < 0x27f);
      }
      goto LAB_1000a497;
    }
    iVar20 = (*(code *)local_14[0x17])(*local_1c,pbVar9[1],pbVar9[2],4,2,&local_598);
    piVar4 = local_14;
    pbVar3 = local_1c;
    pbVar9 = pbVar22;
    if (iVar20 == 0) goto LAB_1000a8ee;
    if ((*(uint *)(pbVar22 + 0x14) & 1) == 0) {
      uVar18 = (uint)(*(uint *)(pbVar22 + 0x14) != 0) * 2;
    }
    else {
      uVar18 = 1;
    }
    uVar8 = uVar18;
    if (*(uint *)(pbVar22 + 0x18) != 0) {
      uVar8 = uVar18 | 2;
    }
    if ((*(uint *)(pbVar22 + 0x18) & 1) != 0) {
      uVar8 = uVar18 | 1;
    }
    uVar18 = uVar8;
    if (*(uint *)(pbVar22 + 0x1c) != 0) {
      uVar18 = uVar8 | 2;
    }
    if ((*(uint *)(pbVar22 + 0x1c) & 1) != 0) {
      uVar18 = uVar8 | 1;
    }
    uVar8 = uVar18;
    if (*(uint *)(pbVar22 + 0x20) != 0) {
      uVar8 = uVar18 | 2;
    }
    if ((*(uint *)(pbVar22 + 0x20) & 1) != 0) {
      uVar8 = uVar18 | 1;
    }
    uVar18 = uVar8;
    if (*(uint *)(pbVar22 + 0x24) != 0) {
      uVar18 = uVar8 | 2;
    }
    if ((*(uint *)(pbVar22 + 0x24) & 1) != 0) {
      uVar18 = uVar8 | 1;
    }
    uVar8 = uVar18;
    if (*(uint *)(pbVar22 + 0x28) != 0) {
      uVar8 = uVar18 | 2;
    }
    if ((*(uint *)(pbVar22 + 0x28) & 1) != 0) {
      uVar8 = uVar18 | 1;
    }
    uVar18 = (uint)*local_18;
    if (*local_18 != 0) {
      pbVar19 = local_18 + 7;
      uVar13 = uVar18;
      do {
        uVar5 = (undefined1)uVar18;
        cVar11 = (char)uVar13;
        uVar18 = (uint)CONCAT11(cVar11 + 0xbfU,uVar5);
        if ((byte)(cVar11 + 0xbfU) < 0x1a) {
          cVar11 = cVar11 + ' ';
        }
        bVar16 = pbVar19[-6];
        uVar13 = (uint)bVar16;
        pbVar22 = local_1c;
        if (cVar11 == 's') {
          if (bVar16 == 0) {
            pcVar12 = str_1000f69c + 1;
          }
          else {
            bVar15 = bVar16;
            if ((byte)(bVar16 + 0xbf) < 0x1a) {
              bVar15 = bVar16 + 0x20;
            }
            uVar18 = (uint)CONCAT11(bVar15,uVar5);
            if (bVar15 != 0x74) goto LAB_1000beb8;
            bVar15 = pbVar19[-5];
            uVar18 = (uint)CONCAT11(bVar15,uVar5);
            if (bVar15 == 0) {
              pcVar12 = str_1000f69c + 2;
            }
            else {
              uVar13 = (uint)CONCAT11(bVar15 + 0xbf,bVar16);
              if ((byte)(bVar15 + 0xbf) < 0x1a) {
                uVar18 = (uint)CONCAT11(bVar15 + 0x20,uVar5);
              }
              if ((char)(uVar18 >> 8) != 'o') goto LAB_1000beb8;
              bVar15 = pbVar19[-4];
              uVar5 = (undefined1)uVar18;
              uVar18 = (uint)CONCAT11(bVar15,uVar5);
              if (bVar15 == 0) {
                pcVar12 = str_1000f69c + 3;
              }
              else {
                uVar13 = (uint)CONCAT11(bVar15 + 0xbf,bVar16);
                if ((byte)(bVar15 + 0xbf) < 0x1a) {
                  uVar18 = (uint)CONCAT11(bVar15 + 0x20,uVar5);
                }
                if ((char)(uVar18 >> 8) != 'r') goto LAB_1000beb8;
                bVar15 = pbVar19[-3];
                uVar5 = (undefined1)uVar18;
                uVar18 = (uint)CONCAT11(bVar15,uVar5);
                if (bVar15 == 0) {
                  pcVar12 = str_1000f69c + 4;
                }
                else {
                  uVar13 = (uint)CONCAT11(bVar15 + 0xbf,bVar16);
                  if ((byte)(bVar15 + 0xbf) < 0x1a) {
                    uVar18 = (uint)CONCAT11(bVar15 + 0x20,uVar5);
                  }
                  if ((char)(uVar18 >> 8) != 'a') goto LAB_1000beb8;
                  bVar15 = pbVar19[-2];
                  uVar5 = (undefined1)uVar18;
                  uVar18 = (uint)CONCAT11(bVar15,uVar5);
                  if (bVar15 == 0) {
                    pcVar12 = str_1000f69c + 5;
                  }
                  else {
                    uVar13 = (uint)CONCAT11(bVar15 + 0xbf,bVar16);
                    if ((byte)(bVar15 + 0xbf) < 0x1a) {
                      uVar18 = (uint)CONCAT11(bVar15 + 0x20,uVar5);
                    }
                    if ((char)(uVar18 >> 8) != 'g') goto LAB_1000beb8;
                    bVar15 = pbVar19[-1];
                    uVar5 = (undefined1)uVar18;
                    uVar18 = (uint)CONCAT11(bVar15,uVar5);
                    if (bVar15 == 0) {
                      pcVar12 = str_1000f69c + 6;
                    }
                    else {
                      uVar13 = (uint)CONCAT11(bVar15 + 0xbf,bVar16);
                      if ((byte)(bVar15 + 0xbf) < 0x1a) {
                        uVar18 = (uint)CONCAT11(bVar15 + 0x20,uVar5);
                      }
                      if ((char)(uVar18 >> 8) != 'e') goto LAB_1000beb8;
                      pcVar12 = str_1000f69c + 7;
                      if (*pbVar19 != 0) goto LAB_1000c3e6;
                    }
                  }
                }
              }
            }
          }
          if (*pcVar12 == '\0') goto LAB_1000c3e6;
        }
LAB_1000beb8:
        pbVar19 = pbVar19 + 1;
      } while ((char)uVar13 != '\0');
      pbVar19 = local_18 + 7;
      uVar13 = uVar18;
      do {
        uVar5 = (undefined1)uVar18;
        cVar11 = (char)uVar13;
        uVar18 = (uint)CONCAT11(cVar11 + 0xbfU,uVar5);
        if ((byte)(cVar11 + 0xbfU) < 0x1a) {
          cVar11 = cVar11 + ' ';
        }
        bVar16 = pbVar19[-6];
        uVar13 = (uint)bVar16;
        if (cVar11 == 'n') {
          if (bVar16 == 0) {
            pcVar12 = str_1000f28b + 1;
          }
          else {
            bVar15 = bVar16;
            if ((byte)(bVar16 + 0xbf) < 0x1a) {
              bVar15 = bVar16 + 0x20;
            }
            uVar18 = (uint)CONCAT11(bVar15,uVar5);
            if (bVar15 != 0x65) goto LAB_1000bfe1;
            bVar15 = pbVar19[-5];
            uVar18 = (uint)CONCAT11(bVar15,uVar5);
            if (bVar15 == 0) {
              pcVar12 = str_1000f28b + 2;
            }
            else {
              uVar13 = (uint)CONCAT11(bVar15 + 0xbf,bVar16);
              if ((byte)(bVar15 + 0xbf) < 0x1a) {
                uVar18 = (uint)CONCAT11(bVar15 + 0x20,uVar5);
              }
              if ((char)(uVar18 >> 8) != 't') goto LAB_1000bfe1;
              bVar15 = pbVar19[-4];
              uVar5 = (undefined1)uVar18;
              uVar18 = (uint)CONCAT11(bVar15,uVar5);
              if (bVar15 == 0) {
                pcVar12 = str_1000f28b + 3;
              }
              else {
                uVar13 = (uint)CONCAT11(bVar15 + 0xbf,bVar16);
                if ((byte)(bVar15 + 0xbf) < 0x1a) {
                  uVar18 = (uint)CONCAT11(bVar15 + 0x20,uVar5);
                }
                if ((char)(uVar18 >> 8) != 'w') goto LAB_1000bfe1;
                bVar15 = pbVar19[-3];
                uVar5 = (undefined1)uVar18;
                uVar18 = (uint)CONCAT11(bVar15,uVar5);
                if (bVar15 == 0) {
                  pcVar12 = str_1000f28b + 4;
                }
                else {
                  uVar13 = (uint)CONCAT11(bVar15 + 0xbf,bVar16);
                  if ((byte)(bVar15 + 0xbf) < 0x1a) {
                    uVar18 = (uint)CONCAT11(bVar15 + 0x20,uVar5);
                  }
                  if ((char)(uVar18 >> 8) != 'o') goto LAB_1000bfe1;
                  bVar15 = pbVar19[-2];
                  uVar5 = (undefined1)uVar18;
                  uVar18 = (uint)CONCAT11(bVar15,uVar5);
                  if (bVar15 == 0) {
                    pcVar12 = str_1000f28b + 5;
                  }
                  else {
                    uVar13 = (uint)CONCAT11(bVar15 + 0xbf,bVar16);
                    if ((byte)(bVar15 + 0xbf) < 0x1a) {
                      uVar18 = (uint)CONCAT11(bVar15 + 0x20,uVar5);
                    }
                    if ((char)(uVar18 >> 8) != 'r') goto LAB_1000bfe1;
                    bVar15 = pbVar19[-1];
                    uVar5 = (undefined1)uVar18;
                    uVar18 = (uint)CONCAT11(bVar15,uVar5);
                    if (bVar15 == 0) {
                      pcVar12 = str_1000f28b + 6;
                    }
                    else {
                      uVar13 = (uint)CONCAT11(bVar15 + 0xbf,bVar16);
                      if ((byte)(bVar15 + 0xbf) < 0x1a) {
                        uVar18 = (uint)CONCAT11(bVar15 + 0x20,uVar5);
                      }
                      if ((char)(uVar18 >> 8) != 'k') goto LAB_1000bfe1;
                      pcVar12 = str_1000f28b + 7;
                      if (*pbVar19 != 0) goto LAB_1000c3e6;
                    }
                  }
                }
              }
            }
          }
          if (*pcVar12 == '\0') goto LAB_1000c3e6;
        }
LAB_1000bfe1:
        pbVar19 = pbVar19 + 1;
      } while ((char)uVar13 != '\0');
      pbVar19 = local_18 + 3;
      uVar13 = uVar18;
      do {
        uVar5 = (undefined1)uVar18;
        cVar11 = (char)uVar13;
        uVar18 = (uint)CONCAT11(cVar11 + 0xbfU,uVar5);
        if ((byte)(cVar11 + 0xbfU) < 0x1a) {
          cVar11 = cVar11 + ' ';
        }
        bVar16 = pbVar19[-2];
        uVar13 = (uint)bVar16;
        if (cVar11 == 'u') {
          if (bVar16 == 0) {
            pcVar12 = &DAT_1000f273;
          }
          else {
            bVar15 = bVar16;
            if ((byte)(bVar16 + 0xbf) < 0x1a) {
              bVar15 = bVar16 + 0x20;
            }
            uVar18 = (uint)CONCAT11(bVar15,uVar5);
            if (bVar15 != 0x73) goto LAB_1000c152;
            bVar15 = pbVar19[-1];
            uVar18 = (uint)CONCAT11(bVar15,uVar5);
            if (bVar15 == 0) {
              pcVar12 = &DAT_1000f274;
            }
            else {
              uVar13 = (uint)CONCAT11(bVar15 + 0xbf,bVar16);
              if ((byte)(bVar15 + 0xbf) < 0x1a) {
                uVar18 = (uint)CONCAT11(bVar15 + 0x20,uVar5);
              }
              if ((char)(uVar18 >> 8) != 'b') goto LAB_1000c152;
              pcVar12 = &DAT_1000f275;
              if (*pbVar19 != 0) goto LAB_1000c3e6;
            }
          }
          if (*pcVar12 == '\0') goto LAB_1000c3e6;
        }
LAB_1000c152:
        pbVar19 = pbVar19 + 1;
      } while ((char)uVar13 != '\0');
      pbVar19 = local_18 + 8;
      uVar13 = uVar18;
      do {
        uVar5 = (undefined1)uVar18;
        cVar11 = (char)uVar13;
        uVar18 = (uint)CONCAT11(cVar11 + 0xbfU,uVar5);
        if ((byte)(cVar11 + 0xbfU) < 0x1a) {
          cVar11 = cVar11 + ' ';
        }
        bVar16 = pbVar19[-7];
        uVar13 = (uint)bVar16;
        if (cVar11 == 'f') {
          if (bVar16 == 0) {
            pcVar12 = str_1000f293 + 1;
          }
          else {
            bVar15 = bVar16;
            if ((byte)(bVar16 + 0xbf) < 0x1a) {
              bVar15 = bVar16 + 0x20;
            }
            uVar18 = (uint)CONCAT11(bVar15,uVar5);
            if (bVar15 != 0x69) goto LAB_1000c1cd;
            bVar15 = pbVar19[-6];
            uVar18 = (uint)CONCAT11(bVar15,uVar5);
            if (bVar15 == 0) {
              pcVar12 = str_1000f293 + 2;
            }
            else {
              uVar13 = (uint)CONCAT11(bVar15 + 0xbf,bVar16);
              if ((byte)(bVar15 + 0xbf) < 0x1a) {
                uVar18 = (uint)CONCAT11(bVar15 + 0x20,uVar5);
              }
              if ((char)(uVar18 >> 8) != 'r') goto LAB_1000c1cd;
              bVar15 = pbVar19[-5];
              uVar5 = (undefined1)uVar18;
              uVar18 = (uint)CONCAT11(bVar15,uVar5);
              if (bVar15 == 0) {
                pcVar12 = str_1000f293 + 3;
              }
              else {
                uVar13 = (uint)CONCAT11(bVar15 + 0xbf,bVar16);
                if ((byte)(bVar15 + 0xbf) < 0x1a) {
                  uVar18 = (uint)CONCAT11(bVar15 + 0x20,uVar5);
                }
                if ((char)(uVar18 >> 8) != 'e') goto LAB_1000c1cd;
                bVar15 = pbVar19[-4];
                uVar5 = (undefined1)uVar18;
                uVar18 = (uint)CONCAT11(bVar15,uVar5);
                if (bVar15 == 0) {
                  pcVar12 = str_1000f293 + 4;
                }
                else {
                  uVar13 = (uint)CONCAT11(bVar15 + 0xbf,bVar16);
                  if ((byte)(bVar15 + 0xbf) < 0x1a) {
                    uVar18 = (uint)CONCAT11(bVar15 + 0x20,uVar5);
                  }
                  if ((char)(uVar18 >> 8) != 'w') goto LAB_1000c1cd;
                  bVar15 = pbVar19[-3];
                  uVar5 = (undefined1)uVar18;
                  uVar18 = (uint)CONCAT11(bVar15,uVar5);
                  if (bVar15 == 0) {
                    pcVar12 = str_1000f293 + 5;
                  }
                  else {
                    uVar13 = (uint)CONCAT11(bVar15 + 0xbf,bVar16);
                    if ((byte)(bVar15 + 0xbf) < 0x1a) {
                      uVar18 = (uint)CONCAT11(bVar15 + 0x20,uVar5);
                    }
                    if ((char)(uVar18 >> 8) != 'i') goto LAB_1000c1cd;
                    bVar15 = pbVar19[-2];
                    uVar5 = (undefined1)uVar18;
                    uVar18 = (uint)CONCAT11(bVar15,uVar5);
                    if (bVar15 == 0) {
                      pcVar12 = str_1000f293 + 6;
                    }
                    else {
                      uVar13 = (uint)CONCAT11(bVar15 + 0xbf,bVar16);
                      if ((byte)(bVar15 + 0xbf) < 0x1a) {
                        uVar18 = (uint)CONCAT11(bVar15 + 0x20,uVar5);
                      }
                      if ((char)(uVar18 >> 8) != 'r') goto LAB_1000c1cd;
                      bVar15 = pbVar19[-1];
                      uVar5 = (undefined1)uVar18;
                      uVar18 = (uint)CONCAT11(bVar15,uVar5);
                      if (bVar15 == 0) {
                        pcVar12 = str_1000f293 + 7;
                      }
                      else {
                        uVar13 = (uint)CONCAT11(bVar15 + 0xbf,bVar16);
                        if ((byte)(bVar15 + 0xbf) < 0x1a) {
                          uVar18 = (uint)CONCAT11(bVar15 + 0x20,uVar5);
                        }
                        if ((char)(uVar18 >> 8) != 'e') goto LAB_1000c1cd;
                        pcVar12 = str_1000f293 + 8;
                        if (*pbVar19 != 0) goto LAB_1000c3e6;
                      }
                    }
                  }
                }
              }
            }
          }
          if (*pcVar12 == '\0') goto LAB_1000c3e6;
        }
LAB_1000c1cd:
        pbVar19 = pbVar19 + 1;
      } while ((char)uVar13 != '\0');
      pbVar19 = local_18 + 5;
      uVar13 = uVar18;
      do {
        uVar5 = (undefined1)uVar18;
        cVar11 = (char)uVar13;
        uVar18 = (uint)CONCAT11(cVar11 + 0xbfU,uVar5);
        if ((byte)(cVar11 + 0xbfU) < 0x1a) {
          cVar11 = cVar11 + ' ';
        }
        bVar16 = pbVar19[-4];
        uVar13 = (uint)bVar16;
        if (cVar11 == 'a') {
          if (bVar16 == 0) {
            pcVar12 = &DAT_1000f6a5;
          }
          else {
            bVar15 = bVar16;
            if ((byte)(bVar16 + 0xbf) < 0x1a) {
              bVar15 = bVar16 + 0x20;
            }
            uVar18 = (uint)CONCAT11(bVar15,uVar5);
            if (bVar15 != 0x75) goto LAB_1000c32e;
            bVar15 = pbVar19[-3];
            uVar18 = (uint)CONCAT11(bVar15,uVar5);
            if (bVar15 == 0) {
              pcVar12 = &DAT_1000f6a6;
            }
            else {
              uVar13 = (uint)CONCAT11(bVar15 + 0xbf,bVar16);
              if ((byte)(bVar15 + 0xbf) < 0x1a) {
                uVar18 = (uint)CONCAT11(bVar15 + 0x20,uVar5);
              }
              if ((char)(uVar18 >> 8) != 'd') goto LAB_1000c32e;
              bVar15 = pbVar19[-2];
              uVar5 = (undefined1)uVar18;
              uVar18 = (uint)CONCAT11(bVar15,uVar5);
              if (bVar15 == 0) {
                pcVar12 = &DAT_1000f6a7;
              }
              else {
                uVar13 = (uint)CONCAT11(bVar15 + 0xbf,bVar16);
                if ((byte)(bVar15 + 0xbf) < 0x1a) {
                  uVar18 = (uint)CONCAT11(bVar15 + 0x20,uVar5);
                }
                if ((char)(uVar18 >> 8) != 'i') goto LAB_1000c32e;
                bVar15 = pbVar19[-1];
                uVar5 = (undefined1)uVar18;
                uVar18 = (uint)CONCAT11(bVar15,uVar5);
                if (bVar15 == 0) {
                  pcVar12 = &DAT_1000f6a8;
                }
                else {
                  uVar13 = (uint)CONCAT11(bVar15 + 0xbf,bVar16);
                  if ((byte)(bVar15 + 0xbf) < 0x1a) {
                    uVar18 = (uint)CONCAT11(bVar15 + 0x20,uVar5);
                  }
                  if ((char)(uVar18 >> 8) != 'o') goto LAB_1000c32e;
                  pcVar12 = &DAT_1000f6a9;
                  if (*pbVar19 != 0) goto LAB_1000c3e6;
                }
              }
            }
          }
          if (*pcVar12 == '\0') goto LAB_1000c3e6;
        }
LAB_1000c32e:
        pbVar19 = pbVar19 + 1;
      } while ((char)uVar13 != '\0');
      pbVar19 = local_18 + 8;
      do {
        cVar11 = (char)uVar18;
        if ((byte)(cVar11 + 0xbfU) < 0x1a) {
          cVar11 = cVar11 + ' ';
        }
        bVar16 = pbVar19[-7];
        uVar18 = (uint)bVar16;
        if (cVar11 == 'g') {
          if (bVar16 == 0) {
            pcVar12 = str_1000f693 + 1;
LAB_1000c400:
            if (*pcVar12 == '\0') {
LAB_1000d0d6:
              uVar8 = uVar8 | 4;
              break;
            }
          }
          else {
            if ((byte)(bVar16 + 0xbf) < 0x1a) {
              bVar15 = bVar16 + 0x20;
            }
            else {
              bVar15 = bVar16;
            }
            if (bVar15 == 0x72) {
              bVar15 = pbVar19[-6];
              if (bVar15 == 0) {
                pcVar12 = str_1000f693 + 2;
                goto LAB_1000c400;
              }
              uVar18 = (uint)CONCAT11(bVar15 + 0xbf,bVar16);
              if ((byte)(bVar15 + 0xbf) < 0x1a) {
                bVar15 = bVar15 + 0x20;
              }
              if (bVar15 != 0x61) goto LAB_1000c409;
              bVar15 = pbVar19[-5];
              if (bVar15 == 0) {
                pcVar12 = str_1000f693 + 3;
                goto LAB_1000c400;
              }
              uVar18 = (uint)CONCAT11(bVar15 + 0xbf,bVar16);
              if ((byte)(bVar15 + 0xbf) < 0x1a) {
                bVar15 = bVar15 + 0x20;
              }
              if (bVar15 != 0x70) goto LAB_1000c409;
              bVar15 = pbVar19[-4];
              if (bVar15 == 0) {
                pcVar12 = str_1000f693 + 4;
                goto LAB_1000c400;
              }
              uVar18 = (uint)CONCAT11(bVar15 + 0xbf,bVar16);
              if ((byte)(bVar15 + 0xbf) < 0x1a) {
                bVar15 = bVar15 + 0x20;
              }
              if (bVar15 != 0x68) goto LAB_1000c409;
              bVar15 = pbVar19[-3];
              if (bVar15 == 0) {
                pcVar12 = str_1000f693 + 5;
                goto LAB_1000c400;
              }
              uVar18 = (uint)CONCAT11(bVar15 + 0xbf,bVar16);
              if ((byte)(bVar15 + 0xbf) < 0x1a) {
                bVar15 = bVar15 + 0x20;
              }
              if (bVar15 != 0x69) goto LAB_1000c409;
              bVar15 = pbVar19[-2];
              if (bVar15 == 0) {
                pcVar12 = str_1000f693 + 6;
                goto LAB_1000c400;
              }
              uVar18 = (uint)CONCAT11(bVar15 + 0xbf,bVar16);
              if ((byte)(bVar15 + 0xbf) < 0x1a) {
                bVar15 = bVar15 + 0x20;
              }
              if (bVar15 != 99) goto LAB_1000c409;
              bVar15 = pbVar19[-1];
              if (bVar15 == 0) {
                pcVar12 = str_1000f693 + 7;
                goto LAB_1000c400;
              }
              uVar18 = (uint)CONCAT11(bVar15 + 0xbf,bVar16);
              if ((byte)(bVar15 + 0xbf) < 0x1a) {
                bVar15 = bVar15 + 0x20;
              }
              if (bVar15 != 0x73) goto LAB_1000c409;
              pcVar12 = str_1000f693 + 8;
              if (*pbVar19 == 0) goto LAB_1000c400;
              goto LAB_1000d0d6;
            }
          }
        }
LAB_1000c409:
        pbVar19 = pbVar19 + 1;
      } while ((char)uVar18 != '\0');
    }
LAB_1000d0db:
    if ((pbVar22[8] == 6) && (pbVar22[9] != 0)) {
      uVar8 = uVar8 | 2;
    }
    uVar18 = local_598 | uVar8;
    local_98 = uVar18;
    pbVar9 = pbVar22;
    if (((*local_14 != 0x54584b57) || ((uint)local_14[2] < 100)) ||
       ((code *)local_14[0x18] == (code *)0x0)) {
LAB_1000d203:
      uVar18 = 0;
      do {
        uVar8 = uVar18;
        uVar18 = uVar8 + 1;
      } while (*(char *)((int)&local_318 + uVar8) != '\0');
      pbVar19 = local_18;
      if (uVar8 + 1 < 0x280) {
        cVar11 = ' ';
        pcVar12 = str_1000f7fd;
        do {
          pcVar12 = pcVar12 + 1;
          *(char *)((int)&local_318 + uVar8) = cVar11;
          uVar8 = uVar8 + 1;
          cVar11 = *pcVar12;
          if (cVar11 == '\0') break;
        } while (uVar8 < 0x27f);
      }
      goto LAB_1000a497;
    }
    local_38 = (char *)uVar8;
    iVar20 = (*(code *)local_14[0x18])(*pbVar22,pbVar22[1],pbVar22[2],4,2,uVar18);
    pbVar9 = pbVar3;
    if (iVar20 == 0) goto LAB_1000d203;
    if ((*piVar4 == 0x54584b57) && (0x5f < (uint)piVar4[2])) {
      if ((code *)piVar4[0x17] != (code *)0x0) {
        (*(code *)piVar4[0x17])(*local_1c,local_1c[1],local_1c[2],4,2,&local_98);
        uVar18 = local_98;
      }
    }
    recovered_1000e310((int)&local_318,str_1000f816,local_598);
    recovered_1000e310((int)&local_318,str_1000f827,uVar18);
    pcVar12 = local_38;
    recovered_1000e310((int)&local_318,str_1000f837,(uint)local_38);
    bVar24 = ((uint)pcVar12 & ~uVar18) == 0;
    local_98 = 0;
    local_2c[0] = 0;
    local_20 = 0;
    pbVar19 = local_18;
    pbVar9 = local_1c;
  }
  local_20 = 0;
  local_2c[0] = 0;
  local_98 = 0;
  local_34 = 0;
  bVar16 = pbVar9[8];
  if ((bVar16 == 1) && (pbVar9[9] == 6)) {
    uVar18 = *(uint *)(pbVar9 + 0x28);
    if ((uVar18 & 1) == 0 && uVar18 != 0) {
      local_598 = 0;
      if (((((uVar18 & 0xfffffff0) == 0 || local_14 == (int *)0x0) || (*local_14 != 0x54584b57)) ||
          ((uint)local_14[2] < 0x68)) ||
         (((code *)local_14[0x19] == (code *)0x0 ||
          (iVar20 = (*(code *)local_14[0x19])(uVar18 & 0xfffffff0,0,0x1000,&local_598), iVar20 == 0)
          ))) goto LAB_1000a57d;
      uVar18 = 0;
      do {
        uVar8 = uVar18;
        uVar18 = uVar8 + 1;
      } while (*(char *)((int)&local_318 + uVar8) != '\0');
      if (uVar18 < 0x280) {
        *(undefined1 *)((int)&local_318 + uVar8) = 0x20;
        uVar8 = uVar18;
      }
      *(undefined1 *)((int)&local_318 + uVar8) = 0;
      uVar18 = 0;
      do {
        uVar8 = uVar18;
        uVar18 = uVar8 + 1;
      } while (*(char *)((int)&local_318 + uVar8) != '\0');
      if (uVar8 + 1 < 0x280) {
        cVar11 = 'a';
        pcVar12 = str_1000f85c;
        do {
          pcVar12 = pcVar12 + 1;
          *(char *)((int)&local_318 + uVar8) = cVar11;
          uVar8 = uVar8 + 1;
          cVar11 = *pcVar12;
          if (cVar11 == '\0') break;
        } while (uVar8 < 0x27f);
      }
      *(undefined1 *)((int)&local_318 + uVar8) = 0;
      uVar18 = 0;
      do {
        uVar8 = uVar18;
        uVar18 = uVar8 + 1;
      } while (*(char *)((int)&local_318 + uVar8) != '\0');
      if (uVar18 < 0x280) {
        *(undefined1 *)((int)&local_318 + uVar8) = 0x3d;
        uVar8 = uVar18;
      }
      *(undefined1 *)((int)&local_318 + uVar8) = 0;
      iVar20 = 8;
      do {
        uVar18 = local_598 >> ((char)iVar20 * '\x04' - 4U & 0x1f) & 0xf;
        bVar16 = (byte)uVar18;
        if (uVar18 < 10) {
          bVar16 = bVar16 | 0x30;
        }
        else {
          bVar16 = bVar16 + 0x37;
        }
        uVar18 = 0;
        do {
          uVar8 = uVar18;
          uVar18 = uVar8 + 1;
        } while (*(char *)((int)&local_318 + uVar8) != '\0');
        if (uVar8 + 1 < 0x280) {
          *(byte *)((int)&local_318 + uVar8) = bVar16;
          *(undefined1 *)((int)&local_318 + uVar8 + 1) = 0;
        }
        iVar20 = iVar20 + -1;
      } while (iVar20 != 0);
      if ((((((local_598 != 0) && (*local_14 == 0x54584b57)) &&
            ((0x6b < (uint)local_14[2] &&
             ((((code *)local_14[0x1a] != (code *)0x0 &&
               ((*(code *)local_14[0x1a])(local_598,4,&local_98), local_598 != 0)) &&
              (*local_14 == 0x54584b57)))))) &&
           ((0x6b < (uint)local_14[2] && ((code *)local_14[0x1a] != (code *)0x0)))) &&
          ((*(code *)local_14[0x1a])(local_598 + 4,4,local_2c), local_598 != 0)) &&
         ((((*local_14 == 0x54584b57 && (0x6b < (uint)local_14[2])) &&
           (((code *)local_14[0x1a] != (code *)0x0 &&
            ((((*(code *)local_14[0x1a])(local_598 + 0xc,4,&local_20), local_598 != 0 &&
              (*local_14 == 0x54584b57)) && (0x6b < (uint)local_14[2])))))) &&
          ((code *)local_14[0x1a] != (code *)0x0)))) {
        (*(code *)local_14[0x1a])(local_598 + 0x10,4,&local_34);
      }
      if (((-1 < (int)local_2c[0]) && (local_598 != 0)) && (*local_14 == 0x54584b57)) {
        iVar20 = local_598 + 4;
        uVar18 = local_14[2];
        if (uVar18 < 0x70) {
joined_r0x1000d293:
          if (uVar18 < 0x6c) goto LAB_1000d2ae;
        }
        else if ((code *)local_14[0x1b] != (code *)0x0) {
          (*(code *)local_14[0x1b])(iVar20,4,local_2c[0] | 0x80000000);
          if ((local_598 == 0) || (*local_14 != 0x54584b57)) goto LAB_1000d2ae;
          uVar18 = local_14[2];
          iVar20 = local_598 + 4;
          goto joined_r0x1000d293;
        }
        if ((code *)local_14[0x1a] != (code *)0x0) {
          (*(code *)local_14[0x1a])(iVar20,4,local_2c);
        }
      }
LAB_1000d2ae:
      uVar18 = 0;
      do {
        uVar8 = uVar18;
        uVar18 = uVar8 + 1;
      } while (*(char *)((int)&local_318 + uVar8) != '\0');
      if (uVar18 < 0x280) {
        *(undefined1 *)((int)&local_318 + uVar8) = 0x20;
        uVar8 = uVar18;
      }
      *(undefined1 *)((int)&local_318 + uVar8) = 0;
      uVar18 = 0;
      do {
        uVar8 = uVar18;
        uVar18 = uVar8 + 1;
      } while (*(char *)((int)&local_318 + uVar8) != '\0');
      if (uVar8 + 1 < 0x280) {
        cVar11 = 'a';
        pcVar12 = &DAT_1000f866;
        do {
          *(char *)((int)&local_318 + uVar8) = cVar11;
          uVar8 = uVar8 + 1;
          cVar11 = *pcVar12;
          if (cVar11 == '\0') break;
          pcVar12 = pcVar12 + 1;
        } while (uVar8 < 0x27f);
      }
      *(undefined1 *)((int)&local_318 + uVar8) = 0;
      uVar18 = 0;
      do {
        uVar8 = uVar18;
        uVar18 = uVar8 + 1;
      } while (*(char *)((int)&local_318 + uVar8) != '\0');
      if (uVar18 < 0x280) {
        *(undefined1 *)((int)&local_318 + uVar8) = 0x3d;
        uVar8 = uVar18;
      }
      *(undefined1 *)((int)&local_318 + uVar8) = 0;
      iVar20 = 8;
      do {
        uVar18 = local_98 >> ((char)iVar20 * '\x04' - 4U & 0x1f) & 0xf;
        bVar16 = (byte)uVar18;
        if (uVar18 < 10) {
          bVar16 = bVar16 | 0x30;
        }
        else {
          bVar16 = bVar16 + 0x37;
        }
        uVar18 = 0;
        do {
          uVar8 = uVar18;
          uVar18 = uVar8 + 1;
        } while (*(char *)((int)&local_318 + uVar8) != '\0');
        if (uVar8 + 1 < 0x280) {
          *(byte *)((int)&local_318 + uVar8) = bVar16;
          *(undefined1 *)((int)&local_318 + uVar8 + 1) = 0;
        }
        iVar20 = iVar20 + -1;
      } while (iVar20 != 0);
      uVar18 = 0;
      do {
        uVar8 = uVar18;
        uVar18 = uVar8 + 1;
      } while (*(char *)((int)&local_318 + uVar8) != '\0');
      if (uVar18 < 0x280) {
        *(undefined1 *)((int)&local_318 + uVar8) = 0x20;
        uVar8 = uVar18;
      }
      *(undefined1 *)((int)&local_318 + uVar8) = 0;
      uVar18 = 0;
      do {
        uVar8 = uVar18;
        uVar18 = uVar8 + 1;
      } while (*(char *)((int)&local_318 + uVar8) != '\0');
      if (uVar8 + 1 < 0x280) {
        cVar11 = 'a';
        pcVar12 = &DAT_1000f86e;
        do {
          *(char *)((int)&local_318 + uVar8) = cVar11;
          uVar8 = uVar8 + 1;
          cVar11 = *pcVar12;
          if (cVar11 == '\0') break;
          pcVar12 = pcVar12 + 1;
        } while (uVar8 < 0x27f);
      }
      *(undefined1 *)((int)&local_318 + uVar8) = 0;
      uVar18 = 0;
      do {
        uVar8 = uVar18;
        uVar18 = uVar8 + 1;
      } while (*(char *)((int)&local_318 + uVar8) != '\0');
      if (uVar18 < 0x280) {
        *(undefined1 *)((int)&local_318 + uVar8) = 0x3d;
        uVar8 = uVar18;
      }
      *(undefined1 *)((int)&local_318 + uVar8) = 0;
      iVar20 = 8;
      do {
        uVar18 = local_2c[0] >> ((char)iVar20 * '\x04' - 4U & 0x1f) & 0xf;
        bVar16 = (byte)uVar18;
        if (uVar18 < 10) {
          bVar16 = bVar16 | 0x30;
        }
        else {
          bVar16 = bVar16 + 0x37;
        }
        uVar18 = 0;
        do {
          uVar8 = uVar18;
          uVar18 = uVar8 + 1;
        } while (*(char *)((int)&local_318 + uVar8) != '\0');
        if (uVar8 + 1 < 0x280) {
          *(byte *)((int)&local_318 + uVar8) = bVar16;
          *(undefined1 *)((int)&local_318 + uVar8 + 1) = 0;
        }
        iVar20 = iVar20 + -1;
      } while (iVar20 != 0);
      uVar18 = 0;
      do {
        uVar8 = uVar18;
        uVar18 = uVar8 + 1;
      } while (*(char *)((int)&local_318 + uVar8) != '\0');
      if (uVar18 < 0x280) {
        *(undefined1 *)((int)&local_318 + uVar8) = 0x20;
        uVar8 = uVar18;
      }
      *(undefined1 *)((int)&local_318 + uVar8) = 0;
      uVar18 = 0;
      do {
        uVar8 = uVar18;
        uVar18 = uVar8 + 1;
      } while (*(char *)((int)&local_318 + uVar8) != '\0');
      if (uVar8 + 1 < 0x280) {
        cVar11 = 'a';
        pcVar12 = str_1000f875;
        do {
          pcVar12 = pcVar12 + 1;
          *(char *)((int)&local_318 + uVar8) = cVar11;
          uVar8 = uVar8 + 1;
          cVar11 = *pcVar12;
          if (cVar11 == '\0') break;
        } while (uVar8 < 0x27f);
      }
      *(undefined1 *)((int)&local_318 + uVar8) = 0;
      uVar18 = 0;
      do {
        uVar8 = uVar18;
        uVar18 = uVar8 + 1;
      } while (*(char *)((int)&local_318 + uVar8) != '\0');
      if (uVar18 < 0x280) {
        *(undefined1 *)((int)&local_318 + uVar8) = 0x3d;
        uVar8 = uVar18;
      }
      *(undefined1 *)((int)&local_318 + uVar8) = 0;
      iVar20 = 8;
      do {
        uVar18 = local_20 >> ((char)iVar20 * '\x04' - 4U & 0x1f) & 0xf;
        bVar16 = (byte)uVar18;
        if (uVar18 < 10) {
          bVar16 = bVar16 | 0x30;
        }
        else {
          bVar16 = bVar16 + 0x37;
        }
        uVar18 = 0;
        do {
          uVar8 = uVar18;
          uVar18 = uVar8 + 1;
        } while (*(char *)((int)&local_318 + uVar8) != '\0');
        if (uVar8 + 1 < 0x280) {
          *(byte *)((int)&local_318 + uVar8) = bVar16;
          *(undefined1 *)((int)&local_318 + uVar8 + 1) = 0;
        }
        uVar18 = local_34;
        iVar20 = iVar20 + -1;
      } while (iVar20 != 0);
      uVar8 = 0;
      do {
        uVar13 = uVar8;
        uVar8 = uVar13 + 1;
      } while (*(char *)((int)&local_318 + uVar13) != '\0');
      if (uVar8 < 0x280) {
        *(undefined1 *)((int)&local_318 + uVar13) = 0x20;
        uVar13 = uVar8;
      }
      *(undefined1 *)((int)&local_318 + uVar13) = 0;
      uVar8 = 0;
      do {
        uVar13 = uVar8;
        uVar8 = uVar13 + 1;
      } while (*(char *)((int)&local_318 + uVar13) != '\0');
      if (uVar13 + 1 < 0x280) {
        cVar11 = 'a';
        pcVar12 = str_1000f87f;
        do {
          pcVar12 = pcVar12 + 1;
          *(char *)((int)&local_318 + uVar13) = cVar11;
          uVar13 = uVar13 + 1;
          cVar11 = *pcVar12;
          if (cVar11 == '\0') break;
        } while (uVar13 < 0x27f);
      }
      *(undefined1 *)((int)&local_318 + uVar13) = 0;
      uVar8 = 0;
      do {
        uVar13 = uVar8;
        uVar8 = uVar13 + 1;
      } while (*(char *)((int)&local_318 + uVar13) != '\0');
      if (uVar8 < 0x280) {
        *(undefined1 *)((int)&local_318 + uVar13) = 0x3d;
        uVar13 = uVar8;
      }
      *(undefined1 *)((int)&local_318 + uVar13) = 0;
      iVar20 = 8;
      do {
        uVar8 = uVar18 >> ((char)iVar20 * '\x04' - 4U & 0x1f) & 0xf;
        bVar16 = (byte)uVar8;
        if (uVar8 < 10) {
          bVar16 = bVar16 | 0x30;
        }
        else {
          bVar16 = bVar16 + 0x37;
        }
        uVar8 = 0;
        do {
          uVar13 = uVar8;
          uVar8 = uVar13 + 1;
        } while (*(char *)((int)&local_318 + uVar13) != '\0');
        if (uVar13 + 1 < 0x280) {
          *(byte *)((int)&local_318 + uVar13) = bVar16;
          *(undefined1 *)((int)&local_318 + uVar13 + 1) = 0;
        }
        iVar20 = iVar20 + -1;
        bVar16 = 1;
        pbVar19 = local_18;
      } while (iVar20 != 0);
    }
    else {
LAB_1000a57d:
      uVar18 = 0;
      do {
        uVar8 = uVar18;
        uVar18 = uVar8 + 1;
      } while (*(char *)((int)&local_318 + uVar8) != '\0');
      if (uVar8 + 1 < 0x280) {
        cVar11 = ' ';
        pcVar12 = str_1000f846;
        do {
          pcVar12 = pcVar12 + 1;
          *(char *)((int)&local_318 + uVar8) = cVar11;
          uVar8 = uVar8 + 1;
          cVar11 = *pcVar12;
          if (cVar11 == '\0') break;
        } while (uVar8 < 0x27f);
      }
      *(undefined1 *)((int)&local_318 + uVar8) = 0;
      bVar16 = 0;
    }
    bVar24 = (bool)(bVar24 | bVar16);
    local_98 = 0;
    local_2c[0] = 0;
    bVar16 = pbVar9[8];
  }
  else {
    local_98 = 0;
    local_2c[0] = 0;
  }
  local_2c[0] = 0;
  local_98 = 0;
  local_20 = 0;
  if ((bVar16 == 4) && (pbVar9[9] == 3)) {
    uVar18 = *(uint *)(pbVar9 + 0x14);
    if ((uVar18 & 1) == 0 && uVar18 != 0) {
      local_598 = 0;
      if (((((uVar18 & 0xfffffff0) == 0 || local_14 == (int *)0x0) || (*local_14 != 0x54584b57)) ||
          ((uint)local_14[2] < 0x68)) ||
         (((code *)local_14[0x19] == (code *)0x0 ||
          (iVar20 = (*(code *)local_14[0x19])(uVar18 & 0xfffffff0,0,0x1000,&local_598), iVar20 == 0)
          ))) goto LAB_1000a69b;
      uVar18 = 0;
      do {
        uVar8 = uVar18;
        uVar18 = uVar8 + 1;
      } while (*(char *)((int)&local_318 + uVar8) != '\0');
      if (uVar18 < 0x280) {
        *(undefined1 *)((int)&local_318 + uVar8) = 0x20;
        uVar8 = uVar18;
      }
      *(undefined1 *)((int)&local_318 + uVar8) = 0;
      uVar18 = 0;
      do {
        uVar8 = uVar18;
        uVar18 = uVar8 + 1;
      } while (*(char *)((int)&local_318 + uVar8) != '\0');
      if (uVar8 + 1 < 0x280) {
        cVar11 = 'h';
        pcVar12 = &DAT_1000f8a1;
        do {
          *(char *)((int)&local_318 + uVar8) = cVar11;
          uVar8 = uVar8 + 1;
          cVar11 = *pcVar12;
          if (cVar11 == '\0') break;
          pcVar12 = pcVar12 + 1;
        } while (uVar8 < 0x27f);
      }
      *(undefined1 *)((int)&local_318 + uVar8) = 0;
      uVar18 = 0;
      do {
        uVar8 = uVar18;
        uVar18 = uVar8 + 1;
      } while (*(char *)((int)&local_318 + uVar8) != '\0');
      if (uVar18 < 0x280) {
        *(undefined1 *)((int)&local_318 + uVar8) = 0x3d;
        uVar8 = uVar18;
      }
      *(undefined1 *)((int)&local_318 + uVar8) = 0;
      iVar20 = 8;
      do {
        uVar18 = local_598 >> ((char)iVar20 * '\x04' - 4U & 0x1f) & 0xf;
        bVar16 = (byte)uVar18;
        if (uVar18 < 10) {
          bVar16 = bVar16 | 0x30;
        }
        else {
          bVar16 = bVar16 + 0x37;
        }
        uVar18 = 0;
        do {
          uVar8 = uVar18;
          uVar18 = uVar8 + 1;
        } while (*(char *)((int)&local_318 + uVar8) != '\0');
        if (uVar8 + 1 < 0x280) {
          *(byte *)((int)&local_318 + uVar8) = bVar16;
          *(undefined1 *)((int)&local_318 + uVar8 + 1) = 0;
        }
        iVar20 = iVar20 + -1;
      } while (iVar20 != 0);
      uVar18 = 0;
      if (local_598 != 0) {
        if (((*local_14 == 0x54584b57) && (0x6b < (uint)local_14[2])) &&
           ((code *)local_14[0x1a] != (code *)0x0)) {
          (*(code *)local_14[0x1a])(local_598,4,&local_98);
          if (local_598 != 0) {
            if (((*local_14 != 0x54584b57) || ((uint)local_14[2] < 0x6c)) ||
               ((code *)local_14[0x1a] == (code *)0x0)) goto LAB_1000c8c8;
            (*(code *)local_14[0x1a])(local_598 + 8,4,local_2c);
            uVar18 = local_598;
          }
        }
        else {
LAB_1000c8c8:
          uVar18 = local_598;
        }
      }
      if ((local_2c[0] & 1) == 0) {
        uVar8 = 0;
        if (uVar18 == 0) goto LAB_1000c901;
        if (*local_14 == 0x54584b57) {
          iVar20 = uVar18 + 8;
          uVar13 = local_14[2];
          if (uVar13 < 0x70) {
joined_r0x1000d6c8:
            if (uVar13 < 0x6c) goto LAB_1000c931;
          }
          else if ((code *)local_14[0x1b] != (code *)0x0) {
            (*(code *)local_14[0x1b])(iVar20,4,local_2c[0] | 1);
            if (local_598 == 0) goto LAB_1000c901;
            if (*local_14 != 0x54584b57) goto LAB_1000c931;
            uVar13 = local_14[2];
            iVar20 = local_598 + 8;
            uVar18 = local_598;
            goto joined_r0x1000d6c8;
          }
          uVar8 = uVar18;
          if ((code *)local_14[0x1a] != (code *)0x0) {
            (*(code *)local_14[0x1a])(iVar20,4,local_2c);
            uVar8 = local_598;
          }
          goto LAB_1000c901;
        }
      }
      else {
        uVar8 = uVar18;
LAB_1000c901:
        if (((*local_14 == 0x54584b57) && (0x6b < (uint)local_14[2])) &&
           ((code *)local_14[0x1a] != (code *)0x0)) {
          (*(code *)local_14[0x1a])(uVar8 + 0xe,2,&local_20);
        }
      }
LAB_1000c931:
      pbVar9 = local_1c;
      uVar18 = 0;
      do {
        uVar8 = uVar18;
        uVar18 = uVar8 + 1;
      } while (*(char *)((int)&local_318 + uVar8) != '\0');
      if (uVar18 < 0x280) {
        *(undefined1 *)((int)&local_318 + uVar8) = 0x20;
        uVar8 = uVar18;
      }
      *(undefined1 *)((int)&local_318 + uVar8) = 0;
      uVar18 = 0;
      do {
        uVar8 = uVar18;
        uVar18 = uVar8 + 1;
      } while (*(char *)((int)&local_318 + uVar8) != '\0');
      if (uVar8 + 1 < 0x280) {
        cVar11 = 'h';
        pcVar12 = &DAT_1000f8a9;
        do {
          *(char *)((int)&local_318 + uVar8) = cVar11;
          uVar8 = uVar8 + 1;
          cVar11 = *pcVar12;
          if (cVar11 == '\0') break;
          pcVar12 = pcVar12 + 1;
        } while (uVar8 < 0x27f);
      }
      *(undefined1 *)((int)&local_318 + uVar8) = 0;
      uVar18 = 0;
      do {
        uVar8 = uVar18;
        uVar18 = uVar8 + 1;
      } while (*(char *)((int)&local_318 + uVar8) != '\0');
      if (uVar18 < 0x280) {
        *(undefined1 *)((int)&local_318 + uVar8) = 0x3d;
        uVar8 = uVar18;
      }
      *(undefined1 *)((int)&local_318 + uVar8) = 0;
      iVar20 = 8;
      do {
        uVar18 = local_98 >> ((char)iVar20 * '\x04' - 4U & 0x1f) & 0xf;
        bVar16 = (byte)uVar18;
        if (uVar18 < 10) {
          bVar16 = bVar16 | 0x30;
        }
        else {
          bVar16 = bVar16 + 0x37;
        }
        uVar18 = 0;
        do {
          uVar8 = uVar18;
          uVar18 = uVar8 + 1;
        } while (*(char *)((int)&local_318 + uVar8) != '\0');
        if (uVar8 + 1 < 0x280) {
          *(byte *)((int)&local_318 + uVar8) = bVar16;
          *(undefined1 *)((int)&local_318 + uVar8 + 1) = 0;
        }
        iVar20 = iVar20 + -1;
      } while (iVar20 != 0);
      uVar18 = 0;
      do {
        uVar8 = uVar18;
        uVar18 = uVar8 + 1;
      } while (*(char *)((int)&local_318 + uVar8) != '\0');
      if (uVar18 < 0x280) {
        *(undefined1 *)((int)&local_318 + uVar8) = 0x20;
        uVar8 = uVar18;
      }
      *(undefined1 *)((int)&local_318 + uVar8) = 0;
      uVar18 = 0;
      do {
        uVar8 = uVar18;
        uVar18 = uVar8 + 1;
      } while (*(char *)((int)&local_318 + uVar8) != '\0');
      if (uVar8 + 1 < 0x280) {
        cVar11 = 'h';
        pcVar12 = &DAT_1000f8b1;
        do {
          *(char *)((int)&local_318 + uVar8) = cVar11;
          uVar8 = uVar8 + 1;
          cVar11 = *pcVar12;
          if (cVar11 == '\0') break;
          pcVar12 = pcVar12 + 1;
        } while (uVar8 < 0x27f);
      }
      *(undefined1 *)((int)&local_318 + uVar8) = 0;
      uVar18 = 0;
      do {
        uVar8 = uVar18;
        uVar18 = uVar8 + 1;
      } while (*(char *)((int)&local_318 + uVar8) != '\0');
      if (uVar18 < 0x280) {
        *(undefined1 *)((int)&local_318 + uVar8) = 0x3d;
        uVar8 = uVar18;
      }
      *(undefined1 *)((int)&local_318 + uVar8) = 0;
      iVar20 = 8;
      do {
        uVar18 = local_2c[0] >> ((char)iVar20 * '\x04' - 4U & 0x1f) & 0xf;
        bVar16 = (byte)uVar18;
        if (uVar18 < 10) {
          bVar16 = bVar16 | 0x30;
        }
        else {
          bVar16 = bVar16 + 0x37;
        }
        uVar18 = 0;
        do {
          uVar8 = uVar18;
          uVar18 = uVar8 + 1;
        } while (*(char *)((int)&local_318 + uVar8) != '\0');
        if (uVar8 + 1 < 0x280) {
          *(byte *)((int)&local_318 + uVar8) = bVar16;
          *(undefined1 *)((int)&local_318 + uVar8 + 1) = 0;
        }
        uVar18 = local_20;
        iVar20 = iVar20 + -1;
      } while (iVar20 != 0);
      uVar8 = 0;
      do {
        uVar13 = uVar8;
        uVar8 = uVar13 + 1;
      } while (*(char *)((int)&local_318 + uVar13) != '\0');
      if (uVar8 < 0x280) {
        *(undefined1 *)((int)&local_318 + uVar13) = 0x20;
        uVar13 = uVar8;
      }
      *(undefined1 *)((int)&local_318 + uVar13) = 0;
      uVar8 = 0;
      do {
        uVar13 = uVar8;
        uVar8 = uVar13 + 1;
      } while (*(char *)((int)&local_318 + uVar13) != '\0');
      if (uVar13 + 1 < 0x280) {
        cVar11 = 'h';
        pcVar12 = str_1000f8b8;
        do {
          pcVar12 = pcVar12 + 1;
          *(char *)((int)&local_318 + uVar13) = cVar11;
          uVar13 = uVar13 + 1;
          cVar11 = *pcVar12;
          if (cVar11 == '\0') break;
        } while (uVar13 < 0x27f);
      }
      *(undefined1 *)((int)&local_318 + uVar13) = 0;
      uVar8 = 0;
      do {
        uVar13 = uVar8;
        uVar8 = uVar13 + 1;
      } while (*(char *)((int)&local_318 + uVar13) != '\0');
      if (uVar8 < 0x280) {
        *(undefined1 *)((int)&local_318 + uVar13) = 0x3d;
        uVar13 = uVar8;
      }
      *(undefined1 *)((int)&local_318 + uVar13) = 0;
      iVar20 = 8;
      do {
        uVar8 = uVar18 >> ((char)iVar20 * '\x04' - 4U & 0x1f) & 0xf;
        bVar16 = (byte)uVar8;
        if (uVar8 < 10) {
          bVar16 = bVar16 | 0x30;
        }
        else {
          bVar16 = bVar16 + 0x37;
        }
        uVar8 = 0;
        do {
          uVar13 = uVar8;
          uVar8 = uVar13 + 1;
        } while (*(char *)((int)&local_318 + uVar13) != '\0');
        if (uVar13 + 1 < 0x280) {
          *(byte *)((int)&local_318 + uVar13) = bVar16;
          *(undefined1 *)((int)&local_318 + uVar13 + 1) = 0;
        }
        iVar20 = iVar20 + -1;
        bVar16 = 1;
        pbVar19 = local_18;
      } while (iVar20 != 0);
    }
    else {
LAB_1000a69b:
      uVar18 = 0;
      do {
        uVar8 = uVar18;
        uVar18 = uVar8 + 1;
      } while (*(char *)((int)&local_318 + uVar8) != '\0');
      if (uVar8 + 1 < 0x280) {
        cVar11 = ' ';
        pcVar12 = str_1000f88b;
        do {
          pcVar12 = pcVar12 + 1;
          *(char *)((int)&local_318 + uVar8) = cVar11;
          uVar8 = uVar8 + 1;
          cVar11 = *pcVar12;
          if (cVar11 == '\0') break;
        } while (uVar8 < 0x27f);
      }
      *(undefined1 *)((int)&local_318 + uVar8) = 0;
      bVar16 = 0;
    }
    bVar24 = (bool)(bVar24 | bVar16);
    local_598 = 0;
    local_98 = 0;
    bVar16 = pbVar9[8];
  }
  else {
    local_598 = 0;
    local_98 = 0;
  }
  piVar4 = local_14;
  local_98 = 0;
  local_598 = 0;
  local_2c[0] = 0;
  bVar2 = false;
  if ((bVar16 == 0xc) && (pbVar9[9] == 3)) {
    if (pbVar9[10] == 0) {
      local_20 = 0;
      local_34 = 0;
      uVar18 = *(uint *)(pbVar9 + 0x24);
      uVar8 = uVar18 & 0xffffffe0;
      if (((byte)uVar18 & uVar8 != 0) != 0) {
LAB_1000a865:
        if (((local_14 != (int *)0x0) && (*local_14 == 0x54584b57)) &&
           ((0x57 < (uint)local_14[2] &&
            (((((code *)local_14[0x15] != (code *)0x0 &&
               ((*(code *)local_14[0x15])(uVar8 & 0xffff,2,&local_20), *piVar4 == 0x54584b57)) &&
              (0x57 < (uint)piVar4[2])) && ((code *)piVar4[0x15] != (code *)0x0)))))) {
          (*(code *)piVar4[0x15])(uVar8 & 0xffff | 2,2,&local_34);
        }
        uVar18 = 0;
        do {
          uVar13 = uVar18;
          uVar18 = uVar13 + 1;
        } while (*(char *)((int)&local_318 + uVar13) != '\0');
        if (uVar18 < 0x280) {
          *(undefined1 *)((int)&local_318 + uVar13) = 0x20;
          uVar13 = uVar18;
        }
        *(undefined1 *)((int)&local_318 + uVar13) = 0;
        uVar18 = 0;
        do {
          uVar13 = uVar18;
          uVar18 = uVar13 + 1;
        } while (*(char *)((int)&local_318 + uVar13) != '\0');
        if (uVar13 + 1 < 0x280) {
          cVar11 = 'u';
          pcVar12 = &DAT_1000f8de;
          do {
            *(char *)((int)&local_318 + uVar13) = cVar11;
            uVar13 = uVar13 + 1;
            cVar11 = *pcVar12;
            if (cVar11 == '\0') break;
            pcVar12 = pcVar12 + 1;
          } while (uVar13 < 0x27f);
        }
        *(undefined1 *)((int)&local_318 + uVar13) = 0;
        uVar18 = 0;
        do {
          uVar13 = uVar18;
          uVar18 = uVar13 + 1;
        } while (*(char *)((int)&local_318 + uVar13) != '\0');
        if (uVar18 < 0x280) {
          *(undefined1 *)((int)&local_318 + uVar13) = 0x3d;
          uVar13 = uVar18;
        }
        *(undefined1 *)((int)&local_318 + uVar13) = 0;
        iVar20 = 8;
        do {
          uVar18 = uVar8 >> ((char)iVar20 * '\x04' - 4U & 0x1f) & 0xf;
          bVar16 = (byte)uVar18;
          if (uVar18 < 10) {
            bVar16 = bVar16 | 0x30;
          }
          else {
            bVar16 = bVar16 + 0x37;
          }
          uVar18 = 0;
          do {
            uVar13 = uVar18;
            uVar18 = uVar13 + 1;
          } while (*(char *)((int)&local_318 + uVar13) != '\0');
          if (uVar13 + 1 < 0x280) {
            *(byte *)((int)&local_318 + uVar13) = bVar16;
            *(undefined1 *)((int)&local_318 + uVar13 + 1) = 0;
          }
          iVar20 = iVar20 + -1;
        } while (iVar20 != 0);
        recovered_1000e310((int)&local_318,str_1000f8e3,local_20);
        recovered_1000e310((int)&local_318,str_1000f8eb,local_34);
        bVar2 = true;
        pbVar19 = local_18;
        goto LAB_1000aa4b;
      }
      uVar8 = *(uint *)(pbVar9 + 0x14);
      if ((((uVar8 & 1) == 0) && (uVar8 = *(uint *)(pbVar9 + 0x18), (uVar8 & 1) == 0)) &&
         (uVar8 = *(uint *)(pbVar9 + 0x1c), (uVar8 & 1) == 0)) {
        uVar13 = *(uint *)(pbVar9 + 0x20);
        uVar8 = uVar18;
        if ((uVar13 & 1) != 0) {
          uVar8 = uVar13;
        }
        if ((((uVar13 | uVar18) & 1) != 0) || (uVar8 = *(uint *)(pbVar9 + 0x28), (uVar8 & 1) != 0))
        goto LAB_1000a85c;
      }
      else {
LAB_1000a85c:
        uVar8 = uVar8 & 0xfffffffc;
        if (uVar8 != 0) goto LAB_1000a865;
      }
      uVar18 = 0;
      do {
        uVar8 = uVar18;
        uVar18 = uVar8 + 1;
      } while (*(char *)((int)&local_318 + uVar8) != '\0');
      pbVar19 = local_18;
      if (uVar8 + 1 < 0x280) {
        cVar11 = ' ';
        pcVar12 = str_1000f8c4;
        do {
          pcVar12 = pcVar12 + 1;
          *(char *)((int)&local_318 + uVar8) = cVar11;
          uVar8 = uVar8 + 1;
          cVar11 = *pcVar12;
          if (cVar11 == '\0') break;
        } while (uVar8 < 0x27f);
      }
    }
    else {
      uVar18 = *(uint *)(pbVar9 + 0x14);
      if ((uVar18 & 1) == 0 && uVar18 != 0) {
        local_598 = 0;
        if ((((uVar18 & 0xfffffff0) != 0 && local_14 != (int *)0x0) && (*local_14 == 0x54584b57)) &&
           ((0x67 < (uint)local_14[2] &&
            (((code *)local_14[0x19] != (code *)0x0 &&
             (iVar20 = (*(code *)local_14[0x19])(uVar18 & 0xfffffff0,0,0x1000,&local_598),
             iVar20 != 0)))))) {
          uVar18 = 0;
          do {
            uVar8 = uVar18;
            uVar18 = uVar8 + 1;
          } while (*(char *)((int)&local_318 + uVar8) != '\0');
          if (uVar18 < 0x280) {
            *(undefined1 *)((int)&local_318 + uVar8) = 0x20;
            uVar8 = uVar18;
          }
          *(undefined1 *)((int)&local_318 + uVar8) = 0;
          uVar18 = 0;
          do {
            uVar8 = uVar18;
            uVar18 = uVar8 + 1;
          } while (*(char *)((int)&local_318 + uVar8) != '\0');
          if (uVar8 + 1 < 0x280) {
            cVar11 = 'u';
            pcVar12 = &DAT_1000f90e;
            do {
              *(char *)((int)&local_318 + uVar8) = cVar11;
              uVar8 = uVar8 + 1;
              cVar11 = *pcVar12;
              if (cVar11 == '\0') break;
              pcVar12 = pcVar12 + 1;
            } while (uVar8 < 0x27f);
          }
          *(undefined1 *)((int)&local_318 + uVar8) = 0;
          uVar18 = 0;
          do {
            uVar8 = uVar18;
            uVar18 = uVar8 + 1;
          } while (*(char *)((int)&local_318 + uVar8) != '\0');
          if (uVar18 < 0x280) {
            *(undefined1 *)((int)&local_318 + uVar8) = 0x3d;
            uVar8 = uVar18;
          }
          *(undefined1 *)((int)&local_318 + uVar8) = 0;
          iVar20 = 8;
          do {
            uVar18 = local_598 >> ((char)iVar20 * '\x04' - 4U & 0x1f) & 0xf;
            bVar16 = (byte)uVar18;
            if (uVar18 < 10) {
              bVar16 = bVar16 | 0x30;
            }
            else {
              bVar16 = bVar16 + 0x37;
            }
            uVar18 = 0;
            do {
              uVar8 = uVar18;
              uVar18 = uVar8 + 1;
            } while (*(char *)((int)&local_318 + uVar8) != '\0');
            if (uVar8 + 1 < 0x280) {
              *(byte *)((int)&local_318 + uVar8) = bVar16;
              *(undefined1 *)((int)&local_318 + uVar8 + 1) = 0;
            }
            iVar20 = iVar20 + -1;
          } while (iVar20 != 0);
          if ((((local_598 != 0) && (*local_14 == 0x54584b57)) && (0x6b < (uint)local_14[2])) &&
             ((((code *)local_14[0x1a] != (code *)0x0 &&
               ((*(code *)local_14[0x1a])(local_598,4,&local_98), local_598 != 0)) &&
              ((*local_14 == 0x54584b57 &&
               ((0x6b < (uint)local_14[2] && ((code *)local_14[0x1a] != (code *)0x0)))))))) {
            (*(code *)local_14[0x1a])(local_598 + 4,4,local_2c);
          }
          uVar8 = local_98;
          uVar18 = 0;
          do {
            uVar13 = uVar18;
            uVar18 = uVar13 + 1;
          } while (*(char *)((int)&local_318 + uVar13) != '\0');
          if (uVar18 < 0x280) {
            *(undefined1 *)((int)&local_318 + uVar13) = 0x20;
            uVar13 = uVar18;
          }
          *(undefined1 *)((int)&local_318 + uVar13) = 0;
          uVar18 = 0;
          do {
            uVar13 = uVar18;
            uVar18 = uVar13 + 1;
          } while (*(char *)((int)&local_318 + uVar13) != '\0');
          if (uVar13 + 1 < 0x280) {
            cVar11 = 'u';
            pcVar12 = &DAT_1000f916;
            do {
              *(char *)((int)&local_318 + uVar13) = cVar11;
              uVar13 = uVar13 + 1;
              cVar11 = *pcVar12;
              if (cVar11 == '\0') break;
              pcVar12 = pcVar12 + 1;
            } while (uVar13 < 0x27f);
          }
          *(undefined1 *)((int)&local_318 + uVar13) = 0;
          uVar18 = 0;
          do {
            uVar13 = uVar18;
            uVar18 = uVar13 + 1;
          } while (*(char *)((int)&local_318 + uVar13) != '\0');
          if (uVar18 < 0x280) {
            *(undefined1 *)((int)&local_318 + uVar13) = 0x3d;
            uVar13 = uVar18;
          }
          *(undefined1 *)((int)&local_318 + uVar13) = 0;
          iVar20 = 8;
          do {
            uVar18 = uVar8 >> ((char)iVar20 * '\x04' - 4U & 0x1f) & 0xf;
            bVar16 = (byte)uVar18;
            if (uVar18 < 10) {
              bVar16 = bVar16 | 0x30;
            }
            else {
              bVar16 = bVar16 + 0x37;
            }
            uVar18 = 0;
            do {
              uVar13 = uVar18;
              uVar18 = uVar13 + 1;
            } while (*(char *)((int)&local_318 + uVar13) != '\0');
            if (uVar13 + 1 < 0x280) {
              *(byte *)((int)&local_318 + uVar13) = bVar16;
              *(undefined1 *)((int)&local_318 + uVar13 + 1) = 0;
            }
            uVar18 = local_2c[0];
            iVar20 = iVar20 + -1;
          } while (iVar20 != 0);
          uVar8 = 0;
          do {
            uVar13 = uVar8;
            uVar8 = uVar13 + 1;
          } while (*(char *)((int)&local_318 + uVar13) != '\0');
          if (uVar8 < 0x280) {
            *(undefined1 *)((int)&local_318 + uVar13) = 0x20;
            uVar13 = uVar8;
          }
          *(undefined1 *)((int)&local_318 + uVar13) = 0;
          uVar8 = 0;
          do {
            uVar13 = uVar8;
            uVar8 = uVar13 + 1;
          } while (*(char *)((int)&local_318 + uVar13) != '\0');
          if (uVar13 + 1 < 0x280) {
            cVar11 = 'u';
            pcVar12 = &DAT_1000f91e;
            do {
              *(char *)((int)&local_318 + uVar13) = cVar11;
              uVar13 = uVar13 + 1;
              cVar11 = *pcVar12;
              if (cVar11 == '\0') break;
              pcVar12 = pcVar12 + 1;
            } while (uVar13 < 0x27f);
          }
          *(undefined1 *)((int)&local_318 + uVar13) = 0;
          uVar8 = 0;
          do {
            uVar13 = uVar8;
            uVar8 = uVar13 + 1;
          } while (*(char *)((int)&local_318 + uVar13) != '\0');
          if (uVar8 < 0x280) {
            *(undefined1 *)((int)&local_318 + uVar13) = 0x3d;
            uVar13 = uVar8;
          }
          *(undefined1 *)((int)&local_318 + uVar13) = 0;
          iVar20 = 8;
          do {
            uVar8 = uVar18 >> ((char)iVar20 * '\x04' - 4U & 0x1f) & 0xf;
            bVar16 = (byte)uVar8;
            if (uVar8 < 10) {
              bVar16 = bVar16 | 0x30;
            }
            else {
              bVar16 = bVar16 + 0x37;
            }
            uVar8 = 0;
            do {
              uVar13 = uVar8;
              uVar8 = uVar13 + 1;
            } while (*(char *)((int)&local_318 + uVar13) != '\0');
            if (uVar13 + 1 < 0x280) {
              *(byte *)((int)&local_318 + uVar13) = bVar16;
              *(undefined1 *)((int)&local_318 + uVar13 + 1) = 0;
            }
            iVar20 = iVar20 + -1;
            bVar2 = true;
            pbVar19 = local_18;
          } while (iVar20 != 0);
          goto LAB_1000aa4b;
        }
      }
      uVar18 = 0;
      do {
        uVar8 = uVar18;
        uVar18 = uVar8 + 1;
      } while (*(char *)((int)&local_318 + uVar8) != '\0');
      if (uVar8 + 1 < 0x280) {
        cVar11 = ' ';
        pcVar12 = str_1000f8f3;
        do {
          pcVar12 = pcVar12 + 1;
          *(char *)((int)&local_318 + uVar8) = cVar11;
          uVar8 = uVar8 + 1;
          cVar11 = *pcVar12;
          if (cVar11 == '\0') break;
        } while (uVar8 < 0x27f);
      }
    }
    *(undefined1 *)((int)&local_318 + uVar8) = 0;
    bVar2 = false;
  }
LAB_1000aa4b:
  pcVar12 = str_1000f7a9;
  if (!bVar2 && !bVar24) {
    uVar18 = (uint)*pbVar19;
    if (*pbVar19 != 0) {
      pbVar9 = pbVar19 + 8;
      uVar8 = uVar18;
      do {
        uVar5 = (undefined1)uVar18;
        cVar11 = (char)uVar8;
        uVar18 = (uint)CONCAT11(cVar11 + 0xbfU,uVar5);
        if ((byte)(cVar11 + 0xbfU) < 0x1a) {
          cVar11 = cVar11 + ' ';
        }
        bVar16 = pbVar9[-7];
        uVar8 = (uint)bVar16;
        if (cVar11 == 'g') {
          if (bVar16 == 0) {
            pcVar23 = str_1000f693 + 1;
          }
          else {
            bVar15 = bVar16;
            if ((byte)(bVar16 + 0xbf) < 0x1a) {
              bVar15 = bVar16 + 0x20;
            }
            uVar18 = (uint)CONCAT11(bVar15,uVar5);
            if (bVar15 != 0x72) goto LAB_1000aa78;
            bVar15 = pbVar9[-6];
            uVar18 = (uint)CONCAT11(bVar15,uVar5);
            if (bVar15 == 0) {
              pcVar23 = str_1000f693 + 2;
            }
            else {
              uVar8 = (uint)CONCAT11(bVar15 + 0xbf,bVar16);
              if ((byte)(bVar15 + 0xbf) < 0x1a) {
                uVar18 = (uint)CONCAT11(bVar15 + 0x20,uVar5);
              }
              if ((char)(uVar18 >> 8) != 'a') goto LAB_1000aa78;
              bVar15 = pbVar9[-5];
              uVar5 = (undefined1)uVar18;
              uVar18 = (uint)CONCAT11(bVar15,uVar5);
              if (bVar15 == 0) {
                pcVar23 = str_1000f693 + 3;
              }
              else {
                uVar8 = (uint)CONCAT11(bVar15 + 0xbf,bVar16);
                if ((byte)(bVar15 + 0xbf) < 0x1a) {
                  uVar18 = (uint)CONCAT11(bVar15 + 0x20,uVar5);
                }
                if ((char)(uVar18 >> 8) != 'p') goto LAB_1000aa78;
                bVar15 = pbVar9[-4];
                uVar5 = (undefined1)uVar18;
                uVar18 = (uint)CONCAT11(bVar15,uVar5);
                if (bVar15 == 0) {
                  pcVar23 = str_1000f693 + 4;
                }
                else {
                  uVar8 = (uint)CONCAT11(bVar15 + 0xbf,bVar16);
                  if ((byte)(bVar15 + 0xbf) < 0x1a) {
                    uVar18 = (uint)CONCAT11(bVar15 + 0x20,uVar5);
                  }
                  if ((char)(uVar18 >> 8) != 'h') goto LAB_1000aa78;
                  bVar15 = pbVar9[-3];
                  uVar5 = (undefined1)uVar18;
                  uVar18 = (uint)CONCAT11(bVar15,uVar5);
                  if (bVar15 == 0) {
                    pcVar23 = str_1000f693 + 5;
                  }
                  else {
                    uVar8 = (uint)CONCAT11(bVar15 + 0xbf,bVar16);
                    if ((byte)(bVar15 + 0xbf) < 0x1a) {
                      uVar18 = (uint)CONCAT11(bVar15 + 0x20,uVar5);
                    }
                    if ((char)(uVar18 >> 8) != 'i') goto LAB_1000aa78;
                    bVar15 = pbVar9[-2];
                    uVar5 = (undefined1)uVar18;
                    uVar18 = (uint)CONCAT11(bVar15,uVar5);
                    if (bVar15 == 0) {
                      pcVar23 = str_1000f693 + 6;
                    }
                    else {
                      uVar8 = (uint)CONCAT11(bVar15 + 0xbf,bVar16);
                      if ((byte)(bVar15 + 0xbf) < 0x1a) {
                        uVar18 = (uint)CONCAT11(bVar15 + 0x20,uVar5);
                      }
                      if ((char)(uVar18 >> 8) != 'c') goto LAB_1000aa78;
                      bVar15 = pbVar9[-1];
                      uVar5 = (undefined1)uVar18;
                      uVar18 = (uint)CONCAT11(bVar15,uVar5);
                      if (bVar15 == 0) {
                        pcVar23 = str_1000f693 + 7;
                      }
                      else {
                        uVar8 = (uint)CONCAT11(bVar15 + 0xbf,bVar16);
                        if ((byte)(bVar15 + 0xbf) < 0x1a) {
                          uVar18 = (uint)CONCAT11(bVar15 + 0x20,uVar5);
                        }
                        if ((char)(uVar18 >> 8) != 's') goto LAB_1000aa78;
                        pcVar23 = str_1000f693 + 8;
                        if (*pbVar9 != 0) goto LAB_1000af9b;
                      }
                    }
                  }
                }
              }
            }
          }
          if (*pcVar23 == '\0') goto LAB_1000af9b;
        }
LAB_1000aa78:
        pbVar9 = pbVar9 + 1;
      } while ((char)uVar8 != '\0');
      pbVar9 = pbVar19 + 7;
      uVar8 = uVar18;
      do {
        uVar5 = (undefined1)uVar18;
        cVar11 = (char)uVar8;
        uVar18 = (uint)CONCAT11(cVar11 + 0xbfU,uVar5);
        if ((byte)(cVar11 + 0xbfU) < 0x1a) {
          cVar11 = cVar11 + ' ';
        }
        bVar16 = pbVar9[-6];
        uVar8 = (uint)bVar16;
        if (cVar11 == 'n') {
          if (bVar16 == 0) {
            pcVar23 = str_1000f28b + 1;
          }
          else {
            bVar15 = bVar16;
            if ((byte)(bVar16 + 0xbf) < 0x1a) {
              bVar15 = bVar16 + 0x20;
            }
            uVar18 = (uint)CONCAT11(bVar15,uVar5);
            if (bVar15 != 0x65) goto LAB_1000abd2;
            bVar15 = pbVar9[-5];
            uVar18 = (uint)CONCAT11(bVar15,uVar5);
            if (bVar15 == 0) {
              pcVar23 = str_1000f28b + 2;
            }
            else {
              uVar8 = (uint)CONCAT11(bVar15 + 0xbf,bVar16);
              if ((byte)(bVar15 + 0xbf) < 0x1a) {
                uVar18 = (uint)CONCAT11(bVar15 + 0x20,uVar5);
              }
              if ((char)(uVar18 >> 8) != 't') goto LAB_1000abd2;
              bVar15 = pbVar9[-4];
              uVar5 = (undefined1)uVar18;
              uVar18 = (uint)CONCAT11(bVar15,uVar5);
              if (bVar15 == 0) {
                pcVar23 = str_1000f28b + 3;
              }
              else {
                uVar8 = (uint)CONCAT11(bVar15 + 0xbf,bVar16);
                if ((byte)(bVar15 + 0xbf) < 0x1a) {
                  uVar18 = (uint)CONCAT11(bVar15 + 0x20,uVar5);
                }
                if ((char)(uVar18 >> 8) != 'w') goto LAB_1000abd2;
                bVar15 = pbVar9[-3];
                uVar5 = (undefined1)uVar18;
                uVar18 = (uint)CONCAT11(bVar15,uVar5);
                if (bVar15 == 0) {
                  pcVar23 = str_1000f28b + 4;
                }
                else {
                  uVar8 = (uint)CONCAT11(bVar15 + 0xbf,bVar16);
                  if ((byte)(bVar15 + 0xbf) < 0x1a) {
                    uVar18 = (uint)CONCAT11(bVar15 + 0x20,uVar5);
                  }
                  if ((char)(uVar18 >> 8) != 'o') goto LAB_1000abd2;
                  bVar15 = pbVar9[-2];
                  uVar5 = (undefined1)uVar18;
                  uVar18 = (uint)CONCAT11(bVar15,uVar5);
                  if (bVar15 == 0) {
                    pcVar23 = str_1000f28b + 5;
                  }
                  else {
                    uVar8 = (uint)CONCAT11(bVar15 + 0xbf,bVar16);
                    if ((byte)(bVar15 + 0xbf) < 0x1a) {
                      uVar18 = (uint)CONCAT11(bVar15 + 0x20,uVar5);
                    }
                    if ((char)(uVar18 >> 8) != 'r') goto LAB_1000abd2;
                    bVar15 = pbVar9[-1];
                    uVar5 = (undefined1)uVar18;
                    uVar18 = (uint)CONCAT11(bVar15,uVar5);
                    if (bVar15 == 0) {
                      pcVar23 = str_1000f28b + 6;
                    }
                    else {
                      uVar8 = (uint)CONCAT11(bVar15 + 0xbf,bVar16);
                      if ((byte)(bVar15 + 0xbf) < 0x1a) {
                        uVar18 = (uint)CONCAT11(bVar15 + 0x20,uVar5);
                      }
                      if ((char)(uVar18 >> 8) != 'k') goto LAB_1000abd2;
                      pcVar23 = str_1000f28b + 7;
                      if (*pbVar9 != 0) goto LAB_1000af9b;
                    }
                  }
                }
              }
            }
          }
          if (*pcVar23 == '\0') goto LAB_1000af9b;
        }
LAB_1000abd2:
        pbVar9 = pbVar9 + 1;
      } while ((char)uVar8 != '\0');
      pbVar9 = pbVar19 + 8;
      uVar8 = uVar18;
      do {
        uVar5 = (undefined1)uVar18;
        cVar11 = (char)uVar8;
        uVar18 = (uint)CONCAT11(cVar11 + 0xbfU,uVar5);
        if ((byte)(cVar11 + 0xbfU) < 0x1a) {
          cVar11 = cVar11 + ' ';
        }
        bVar16 = pbVar9[-7];
        uVar8 = (uint)bVar16;
        if (cVar11 == 'f') {
          if (bVar16 == 0) {
            pcVar23 = str_1000f293 + 1;
          }
          else {
            bVar15 = bVar16;
            if ((byte)(bVar16 + 0xbf) < 0x1a) {
              bVar15 = bVar16 + 0x20;
            }
            uVar18 = (uint)CONCAT11(bVar15,uVar5);
            if (bVar15 != 0x69) goto LAB_1000acfd;
            bVar15 = pbVar9[-6];
            uVar18 = (uint)CONCAT11(bVar15,uVar5);
            if (bVar15 == 0) {
              pcVar23 = str_1000f293 + 2;
            }
            else {
              uVar8 = (uint)CONCAT11(bVar15 + 0xbf,bVar16);
              if ((byte)(bVar15 + 0xbf) < 0x1a) {
                uVar18 = (uint)CONCAT11(bVar15 + 0x20,uVar5);
              }
              if ((char)(uVar18 >> 8) != 'r') goto LAB_1000acfd;
              bVar15 = pbVar9[-5];
              uVar5 = (undefined1)uVar18;
              uVar18 = (uint)CONCAT11(bVar15,uVar5);
              if (bVar15 == 0) {
                pcVar23 = str_1000f293 + 3;
              }
              else {
                uVar8 = (uint)CONCAT11(bVar15 + 0xbf,bVar16);
                if ((byte)(bVar15 + 0xbf) < 0x1a) {
                  uVar18 = (uint)CONCAT11(bVar15 + 0x20,uVar5);
                }
                if ((char)(uVar18 >> 8) != 'e') goto LAB_1000acfd;
                bVar15 = pbVar9[-4];
                uVar5 = (undefined1)uVar18;
                uVar18 = (uint)CONCAT11(bVar15,uVar5);
                if (bVar15 == 0) {
                  pcVar23 = str_1000f293 + 4;
                }
                else {
                  uVar8 = (uint)CONCAT11(bVar15 + 0xbf,bVar16);
                  if ((byte)(bVar15 + 0xbf) < 0x1a) {
                    uVar18 = (uint)CONCAT11(bVar15 + 0x20,uVar5);
                  }
                  if ((char)(uVar18 >> 8) != 'w') goto LAB_1000acfd;
                  bVar15 = pbVar9[-3];
                  uVar5 = (undefined1)uVar18;
                  uVar18 = (uint)CONCAT11(bVar15,uVar5);
                  if (bVar15 == 0) {
                    pcVar23 = str_1000f293 + 5;
                  }
                  else {
                    uVar8 = (uint)CONCAT11(bVar15 + 0xbf,bVar16);
                    if ((byte)(bVar15 + 0xbf) < 0x1a) {
                      uVar18 = (uint)CONCAT11(bVar15 + 0x20,uVar5);
                    }
                    if ((char)(uVar18 >> 8) != 'i') goto LAB_1000acfd;
                    bVar15 = pbVar9[-2];
                    uVar5 = (undefined1)uVar18;
                    uVar18 = (uint)CONCAT11(bVar15,uVar5);
                    if (bVar15 == 0) {
                      pcVar23 = str_1000f293 + 6;
                    }
                    else {
                      uVar8 = (uint)CONCAT11(bVar15 + 0xbf,bVar16);
                      if ((byte)(bVar15 + 0xbf) < 0x1a) {
                        uVar18 = (uint)CONCAT11(bVar15 + 0x20,uVar5);
                      }
                      if ((char)(uVar18 >> 8) != 'r') goto LAB_1000acfd;
                      bVar15 = pbVar9[-1];
                      uVar5 = (undefined1)uVar18;
                      uVar18 = (uint)CONCAT11(bVar15,uVar5);
                      if (bVar15 == 0) {
                        pcVar23 = str_1000f293 + 7;
                      }
                      else {
                        uVar8 = (uint)CONCAT11(bVar15 + 0xbf,bVar16);
                        if ((byte)(bVar15 + 0xbf) < 0x1a) {
                          uVar18 = (uint)CONCAT11(bVar15 + 0x20,uVar5);
                        }
                        if ((char)(uVar18 >> 8) != 'e') goto LAB_1000acfd;
                        pcVar23 = str_1000f293 + 8;
                        if (*pbVar9 != 0) goto LAB_1000af9b;
                      }
                    }
                  }
                }
              }
            }
          }
          if (*pcVar23 == '\0') goto LAB_1000af9b;
        }
LAB_1000acfd:
        pbVar9 = pbVar9 + 1;
      } while ((char)uVar8 != '\0');
      pbVar19 = pbVar19 + 8;
      do {
        cVar11 = (char)uVar18;
        if ((byte)(cVar11 + 0xbfU) < 0x1a) {
          cVar11 = cVar11 + ' ';
        }
        bVar16 = pbVar19[-7];
        uVar18 = (uint)bVar16;
        if (cVar11 != 'p') goto LAB_1000ae55;
        if (bVar16 == 0) {
          pcVar23 = str_1000f11f + 1;
          goto LAB_1000ae4c;
        }
        if ((byte)(bVar16 + 0xbf) < 0x1a) {
          if (bVar16 == 0x4c) goto LAB_1000ae93;
        }
        else if (bVar16 == 0x6c) {
LAB_1000ae93:
          bVar15 = pbVar19[-6];
          if (bVar15 == 0) {
            pcVar23 = str_1000f11f + 2;
          }
          else {
            if ((byte)(bVar15 + 0xbf) < 0x1a) {
              bVar15 = bVar15 + 0x20;
            }
            if (bVar15 != 0x61) goto LAB_1000ae55;
            bVar15 = pbVar19[-5];
            if (bVar15 == 0) {
              pcVar23 = str_1000f11f + 3;
            }
            else {
              if ((byte)(bVar15 + 0xbf) < 0x1a) {
                bVar15 = bVar15 + 0x20;
              }
              if (bVar15 != 0x74) goto LAB_1000ae55;
              bVar15 = pbVar19[-4];
              if (bVar15 == 0) {
                pcVar23 = str_1000f11f + 4;
              }
              else {
                if ((byte)(bVar15 + 0xbf) < 0x1a) {
                  bVar15 = bVar15 + 0x20;
                }
                if (bVar15 != 0x66) goto LAB_1000ae55;
                bVar15 = pbVar19[-3];
                if (bVar15 == 0) {
                  pcVar23 = str_1000f11f + 5;
                }
                else {
                  if ((byte)(bVar15 + 0xbf) < 0x1a) {
                    bVar15 = bVar15 + 0x20;
                  }
                  if (bVar15 != 0x6f) goto LAB_1000ae55;
                  bVar15 = pbVar19[-2];
                  if (bVar15 == 0) {
                    pcVar23 = str_1000f11f + 6;
                  }
                  else {
                    if ((byte)(bVar15 + 0xbf) < 0x1a) {
                      bVar15 = bVar15 + 0x20;
                    }
                    if (bVar15 != 0x72) goto LAB_1000ae55;
                    bVar15 = pbVar19[-1];
                    if (bVar15 == 0) {
                      pcVar23 = str_1000f11f + 7;
                    }
                    else {
                      if ((byte)(bVar15 + 0xbf) < 0x1a) {
                        bVar15 = bVar15 + 0x20;
                      }
                      if (bVar15 != 0x6d) goto LAB_1000ae55;
                      pcVar23 = str_1000f11f + 8;
                      if (*pbVar19 != 0) goto LAB_1000af9b;
                    }
                  }
                }
              }
            }
          }
LAB_1000ae4c:
          if (*pcVar23 == '\0') goto LAB_1000af9b;
        }
LAB_1000ae55:
        pbVar19 = pbVar19 + 1;
      } while (bVar16 != 0);
    }
LAB_1000b09c:
    pcVar12 = str_1000f7b9;
  }
LAB_1000b0a1:
  uVar18 = 0;
  do {
    uVar8 = uVar18;
    uVar18 = uVar8 + 1;
  } while (*(char *)((int)&local_318 + uVar8) != '\0');
  cVar11 = *pcVar12;
  if (uVar8 + 1 < 0x280 && cVar11 != '\0') {
    do {
      pcVar12 = pcVar12 + 1;
      *(char *)((int)&local_318 + uVar8) = cVar11;
      uVar8 = uVar8 + 1;
      cVar11 = *pcVar12;
      if (cVar11 == '\0') break;
    } while (uVar8 < 0x27f);
  }
  *(undefined1 *)((int)&local_318 + uVar8) = 0;
  pbVar19 = local_1c;
  local_38 = recovered_1000e180((int)local_1c);
  local_98 = local_98 & 0xffffff00;
  uVar18 = 0;
  do {
    uVar8 = uVar18;
    uVar18 = uVar8 + 1;
  } while (*(char *)((int)local_2c + (uVar8 - 0x6c)) != '\0');
  if (uVar8 + 1 < 0x60) {
    cVar11 = '/';
    pcVar12 = str_1000f672;
    do {
      pcVar12 = pcVar12 + 1;
      *(char *)((int)local_2c + (uVar8 - 0x6c)) = cVar11;
      uVar8 = uVar8 + 1;
      cVar11 = *pcVar12;
      if (cVar11 == '\0') break;
    } while (uVar8 < 0x5f);
  }
  *(undefined1 *)((int)local_2c + (uVar8 - 0x6c)) = 0;
  uVar18 = 0;
  do {
    uVar8 = uVar18;
    uVar18 = uVar8 + 1;
  } while (*(char *)((int)local_2c + (uVar8 - 0x6c)) != '\0');
  if (uVar18 < 0x60) {
    *(undefined1 *)((int)local_2c + (uVar8 - 0x6c)) = 0x2f;
    uVar8 = uVar18;
  }
  *(undefined1 *)((int)local_2c + (uVar8 - 0x6c)) = 0;
  bVar16 = *pbVar19;
  uVar18 = 0;
  do {
    uVar8 = uVar18;
    uVar18 = uVar8 + 1;
  } while (*(char *)((int)local_2c + (uVar8 - 0x6c)) != '\0');
  if (bVar16 < 0xa0) {
    bVar15 = bVar16 >> 4 | 0x30;
  }
  else {
    bVar15 = (bVar16 >> 4) + 0x37;
  }
  if (uVar8 + 1 < 0x60) {
    *(byte *)((int)local_2c + (uVar8 - 0x6c)) = bVar15;
    *(undefined1 *)((int)local_2c + (uVar8 - 0x6b)) = 0;
  }
  uVar18 = 0;
  do {
    uVar8 = uVar18;
    uVar18 = uVar8 + 1;
  } while (*(char *)((int)local_2c + (uVar8 - 0x6c)) != '\0');
  bVar14 = (byte)(bVar16 & 0xffff0f);
  if (bVar14 < 10) {
    uVar18 = (bVar16 & 0xffff0f) << 8 | 0x3000;
  }
  else {
    uVar18 = (uint)(byte)(bVar14 + 0x37) << 8;
  }
  bVar16 = (byte)(uVar18 >> 8);
  if (uVar8 + 1 < 0x60) {
    *(byte *)((int)local_2c + (uVar8 - 0x6c)) = bVar16;
    *(undefined1 *)((int)local_2c + (uVar8 - 0x6b)) = 0;
  }
  uVar8 = 0;
  do {
    uVar13 = uVar8;
    uVar8 = uVar13 + 1;
  } while (*(char *)((int)local_2c + (uVar13 - 0x6c)) != '\0');
  if (uVar8 < 0x60) {
    *(undefined1 *)((int)local_2c + (uVar13 - 0x6c)) = 0x3a;
    uVar13 = uVar8;
  }
  *(undefined1 *)((int)local_2c + (uVar13 - 0x6c)) = 0;
  bVar14 = pbVar19[1];
  uVar8 = 0;
  do {
    uVar13 = uVar8;
    uVar8 = uVar13 + 1;
  } while (*(char *)((int)local_2c + (uVar13 - 0x6c)) != '\0');
  if (bVar14 < 0xa0) {
    bVar6 = bVar14 >> 4 | 0x30;
  }
  else {
    bVar6 = (bVar14 >> 4) + 0x37;
  }
  if (uVar13 + 1 < 0x60) {
    *(byte *)((int)local_2c + (uVar13 - 0x6c)) = bVar6;
    *(undefined1 *)((int)local_2c + (uVar13 - 0x6b)) = 0;
  }
  uVar13 = CONCAT11(bVar14,bVar15) & 0xffff0fff;
  uVar8 = 0;
  do {
    uVar21 = uVar8;
    uVar8 = uVar21 + 1;
  } while (*(char *)((int)local_2c + (uVar21 - 0x6c)) != '\0');
  bVar15 = (byte)(uVar13 >> 8);
  if (bVar15 < 10) {
    uVar17 = (ushort)uVar13 | 0x3000;
  }
  else {
    uVar17 = CONCAT11(bVar15 + 0x37,(char)uVar13);
  }
  uVar5 = (undefined1)(uVar17 >> 8);
  if (uVar21 + 1 < 0x60) {
    *(undefined1 *)((int)local_2c + (uVar21 - 0x6c)) = uVar5;
    *(undefined1 *)((int)local_2c + (uVar21 - 0x6b)) = 0;
  }
  uVar8 = 0;
  do {
    uVar13 = uVar8;
    uVar8 = uVar13 + 1;
  } while (*(char *)((int)local_2c + (uVar13 - 0x6c)) != '\0');
  if (uVar8 < 0x60) {
    *(undefined1 *)((int)local_2c + (uVar13 - 0x6c)) = 0x2e;
    uVar13 = uVar8;
  }
  *(undefined1 *)((int)local_2c + (uVar13 - 0x6c)) = 0;
  uVar8 = (uint)pbVar19[2];
  local_18 = (byte *)CONCAT31(PF_PART3(local_18, 1),bVar6);
  if (uVar8 == 0) {
    uVar13 = 0;
    do {
      uVar21 = uVar13;
      uVar13 = uVar21 + 1;
    } while (*(char *)((int)local_2c + (uVar21 - 0x6c)) != '\0');
    if (uVar21 + 1 < 0x60) {
      *(undefined2 *)((int)local_2c + (uVar21 - 0x6c)) = 0x30;
    }
  }
  else {
    local_2f = bVar16;
    uVar18 = uVar8;
    uVar13 = 0;
    do {
      *(byte *)((int)local_2c + uVar13) = (byte)(uVar18 % 10) | 0x30;
      uVar21 = uVar13 + 1;
      if (8 < uVar13) break;
      bVar24 = 9 < uVar18;
      uVar18 = uVar18 / 10;
      uVar13 = uVar21;
    } while (bVar24);
    uVar18 = (uint)bVar16 << 8;
    local_2e = uVar17;
    do {
      iVar20 = uVar21 - 1;
      uVar21 = uVar21 - 1;
      uVar13 = 0;
      do {
        uVar10 = uVar13;
        uVar13 = uVar10 + 1;
      } while (*(char *)((int)local_2c + (uVar10 - 0x6c)) != '\0');
      if (uVar10 + 1 < 0x60) {
        *(undefined1 *)((int)local_2c + (uVar10 - 0x6c)) = *(undefined1 *)((int)local_2c + iVar20);
        *(undefined1 *)((int)local_2c + (uVar10 - 0x6b)) = 0;
      }
    } while (uVar21 != 0);
  }
  local_598 = local_598 & 0xffffff00;
  uVar13 = 0;
  do {
    uVar21 = uVar13;
    uVar13 = uVar21 + 1;
  } while (*(char *)((int)&local_598 + uVar21) != '\0');
  if (uVar21 + 1 < 0x280) {
    uVar18 = CONCAT31((int3)(uVar18 >> 8),0x70);
    pcVar12 = &DAT_1000f93e;
    do {
      *(char *)((int)&local_598 + uVar21) = (char)uVar18;
      uVar21 = uVar21 + 1;
      uVar18 = CONCAT31((int3)(uVar18 >> 8),*pcVar12);
      if (*pcVar12 == '\0') break;
      pcVar12 = pcVar12 + 1;
    } while (uVar21 < 0x27f);
  }
  *(undefined1 *)((int)&local_598 + uVar21) = 0;
  uVar13 = 0;
  do {
    uVar21 = uVar13;
    uVar13 = uVar21 + 1;
  } while (*(char *)((int)&local_598 + uVar21) != '\0');
  if (uVar21 + 1 < 0x280) {
    *(char *)((int)&local_598 + uVar21) = (char)uVar17;
    *(undefined1 *)((int)&local_598 + uVar21 + 1) = 0;
  }
  uVar13 = 0;
  do {
    uVar21 = uVar13;
    uVar13 = uVar21 + 1;
  } while (*(char *)((int)&local_598 + uVar21) != '\0');
  if (uVar21 + 1 < 0x280) {
    *(char *)((int)&local_598 + uVar21) = (char)(uVar18 >> 8);
    *(undefined1 *)((int)&local_598 + uVar21 + 1) = 0;
  }
  uVar18 = 0;
  do {
    uVar13 = uVar18;
    uVar18 = uVar13 + 1;
  } while (*(char *)((int)&local_598 + uVar13) != '\0');
  if (uVar18 < 0x280) {
    *(undefined1 *)((int)&local_598 + uVar13) = 0x3a;
    uVar13 = uVar18;
  }
  *(undefined1 *)((int)&local_598 + uVar13) = 0;
  uVar18 = 0;
  do {
    uVar13 = uVar18;
    uVar18 = uVar13 + 1;
  } while (*(char *)((int)&local_598 + uVar13) != '\0');
  if (uVar13 + 1 < 0x280) {
    *(undefined1 *)((int)&local_598 + uVar13) = PF_PART1(local_18, 0);
    *(undefined1 *)((int)&local_598 + uVar13 + 1) = 0;
  }
  uVar18 = 0;
  do {
    uVar13 = uVar18;
    uVar18 = uVar13 + 1;
  } while (*(char *)((int)&local_598 + uVar13) != '\0');
  if (uVar13 + 1 < 0x280) {
    *(undefined1 *)((int)&local_598 + uVar13) = uVar5;
    *(undefined1 *)((int)&local_598 + uVar13 + 1) = 0;
  }
  uVar18 = 0;
  do {
    uVar13 = uVar18;
    uVar18 = uVar13 + 1;
  } while (*(char *)((int)&local_598 + uVar13) != '\0');
  if (uVar18 < 0x280) {
    *(undefined1 *)((int)&local_598 + uVar13) = 0x2e;
    uVar13 = uVar18;
  }
  *(undefined1 *)((int)&local_598 + uVar13) = 0;
  pbVar19 = local_1c;
  if (uVar8 == 0) {
    uVar18 = 0;
    do {
      uVar8 = uVar18;
      uVar18 = uVar8 + 1;
    } while (*(char *)((int)&local_598 + uVar8) != '\0');
    if (uVar8 + 1 < 0x280) {
      *(undefined2 *)((int)&local_598 + uVar8) = 0x30;
    }
  }
  else {
    uVar18 = 0;
    do {
      *(byte *)((int)local_2c + uVar18) = (byte)(uVar8 % 10) | 0x30;
      pbVar19 = local_1c;
      uVar13 = uVar18 + 1;
      if (8 < uVar18) break;
      bVar24 = 9 < uVar8;
      uVar18 = uVar13;
      uVar8 = uVar8 / 10;
    } while (bVar24);
    do {
      iVar20 = uVar13 - 1;
      uVar13 = uVar13 - 1;
      uVar18 = 0;
      do {
        uVar8 = uVar18;
        uVar18 = uVar8 + 1;
      } while (*(char *)((int)&local_598 + uVar8) != '\0');
      if (uVar8 + 1 < 0x280) {
        *(undefined1 *)((int)&local_598 + uVar8) = *(undefined1 *)((int)local_2c + iVar20);
        *(undefined1 *)((int)&local_598 + uVar8 + 1) = 0;
      }
    } while (uVar13 != 0);
  }
  uVar18 = 0;
  do {
    uVar8 = uVar18;
    uVar18 = uVar8 + 1;
  } while (*(char *)((int)&local_598 + uVar8) != '\0');
  if (uVar8 + 1 < 0x280) {
    cVar11 = ' ';
    pcVar12 = str_1000f942;
    do {
      pcVar12 = pcVar12 + 1;
      *(char *)((int)&local_598 + uVar8) = cVar11;
      uVar8 = uVar8 + 1;
      cVar11 = *pcVar12;
      if (cVar11 == '\0') break;
    } while (uVar8 < 0x27f);
  }
  *(undefined1 *)((int)&local_598 + uVar8) = 0;
  uVar17 = *(ushort *)(pbVar19 + 4);
  uVar18 = 0;
  do {
    uVar8 = uVar18;
    uVar18 = uVar8 + 1;
  } while (*(char *)((int)&local_598 + uVar8) != '\0');
  if (uVar8 + 1 < 0x280) {
    bVar16 = (byte)(uVar17 >> 8);
    if (uVar17 < 0xa000) {
      bVar16 = bVar16 >> 4 | 0x30;
    }
    else {
      bVar16 = (bVar16 >> 4) + 0x37;
    }
    *(byte *)((int)&local_598 + uVar8) = bVar16;
    *(undefined1 *)((int)&local_598 + uVar8 + 1) = 0;
  }
  uVar7 = uVar17 >> 8 & 0xf;
  uVar18 = 0;
  do {
    uVar8 = uVar18;
    uVar18 = uVar8 + 1;
  } while (*(char *)((int)&local_598 + uVar8) != '\0');
  if (uVar8 + 1 < 0x280) {
    bVar16 = (byte)uVar7;
    if (uVar7 < 10) {
      bVar16 = bVar16 | 0x30;
    }
    else {
      bVar16 = bVar16 + 0x37;
    }
    *(byte *)((int)&local_598 + uVar8) = bVar16;
    *(undefined1 *)((int)&local_598 + uVar8 + 1) = 0;
  }
  uVar7 = uVar17 >> 4 & 0xf;
  uVar18 = 0;
  do {
    uVar8 = uVar18;
    uVar18 = uVar8 + 1;
  } while (*(char *)((int)&local_598 + uVar8) != '\0');
  if (uVar8 + 1 < 0x280) {
    bVar16 = (byte)uVar7;
    if (uVar7 < 10) {
      bVar16 = bVar16 | 0x30;
    }
    else {
      bVar16 = bVar16 + 0x37;
    }
    *(byte *)((int)&local_598 + uVar8) = bVar16;
    *(undefined1 *)((int)&local_598 + uVar8 + 1) = 0;
  }
  uVar18 = 0;
  do {
    uVar8 = uVar18;
    uVar18 = uVar8 + 1;
  } while (*(char *)((int)&local_598 + uVar8) != '\0');
  if (uVar8 + 1 < 0x280) {
    bVar16 = (byte)(uVar17 & 0xf);
    if ((uVar17 & 0xf) < 10) {
      bVar16 = bVar16 | 0x30;
    }
    else {
      bVar16 = bVar16 + 0x37;
    }
    *(byte *)((int)&local_598 + uVar8) = bVar16;
    *(undefined1 *)((int)&local_598 + uVar8 + 1) = 0;
  }
  uVar18 = 0;
  do {
    uVar8 = uVar18;
    uVar18 = uVar8 + 1;
  } while (*(char *)((int)&local_598 + uVar8) != '\0');
  if (uVar8 + 1 < 0x280) {
    cVar11 = ' ';
    pcVar12 = str_1000f94b;
    do {
      pcVar12 = pcVar12 + 1;
      *(char *)((int)&local_598 + uVar8) = cVar11;
      uVar8 = uVar8 + 1;
      cVar11 = *pcVar12;
      if (cVar11 == '\0') break;
    } while (uVar8 < 0x27f);
  }
  *(undefined1 *)((int)&local_598 + uVar8) = 0;
  uVar17 = *(ushort *)(pbVar19 + 6);
  uVar18 = 0;
  do {
    uVar8 = uVar18;
    uVar18 = uVar8 + 1;
  } while (*(char *)((int)&local_598 + uVar8) != '\0');
  if (uVar8 + 1 < 0x280) {
    bVar16 = (byte)(uVar17 >> 8);
    if (uVar17 < 0xa000) {
      bVar16 = bVar16 >> 4 | 0x30;
    }
    else {
      bVar16 = (bVar16 >> 4) + 0x37;
    }
    *(byte *)((int)&local_598 + uVar8) = bVar16;
    *(undefined1 *)((int)&local_598 + uVar8 + 1) = 0;
  }
  uVar7 = uVar17 >> 8 & 0xf;
  uVar18 = 0;
  do {
    uVar8 = uVar18;
    uVar18 = uVar8 + 1;
  } while (*(char *)((int)&local_598 + uVar8) != '\0');
  if (uVar8 + 1 < 0x280) {
    bVar16 = (byte)uVar7;
    if (uVar7 < 10) {
      bVar16 = bVar16 | 0x30;
    }
    else {
      bVar16 = bVar16 + 0x37;
    }
    *(byte *)((int)&local_598 + uVar8) = bVar16;
    *(undefined1 *)((int)&local_598 + uVar8 + 1) = 0;
  }
  uVar7 = uVar17 >> 4 & 0xf;
  uVar18 = 0;
  do {
    uVar8 = uVar18;
    uVar18 = uVar8 + 1;
  } while (*(char *)((int)&local_598 + uVar8) != '\0');
  if (uVar8 + 1 < 0x280) {
    bVar16 = (byte)uVar7;
    if (uVar7 < 10) {
      bVar16 = bVar16 | 0x30;
    }
    else {
      bVar16 = bVar16 + 0x37;
    }
    *(byte *)((int)&local_598 + uVar8) = bVar16;
    *(undefined1 *)((int)&local_598 + uVar8 + 1) = 0;
  }
  uVar18 = 0;
  do {
    uVar8 = uVar18;
    uVar18 = uVar8 + 1;
  } while (*(char *)((int)&local_598 + uVar8) != '\0');
  if (uVar8 + 1 < 0x280) {
    bVar16 = (byte)(uVar17 & 0xf);
    if ((uVar17 & 0xf) < 10) {
      bVar16 = bVar16 | 0x30;
    }
    else {
      bVar16 = bVar16 + 0x37;
    }
    *(byte *)((int)&local_598 + uVar8) = bVar16;
    *(undefined1 *)((int)&local_598 + uVar8 + 1) = 0;
  }
  uVar18 = 0;
  do {
    uVar8 = uVar18;
    uVar18 = uVar8 + 1;
  } while (*(char *)((int)&local_598 + uVar8) != '\0');
  if (uVar8 + 1 < 0x280) {
    cVar11 = ' ';
    pcVar12 = str_1000f954;
    do {
      pcVar12 = pcVar12 + 1;
      *(char *)((int)&local_598 + uVar8) = cVar11;
      uVar8 = uVar8 + 1;
      cVar11 = *pcVar12;
      if (cVar11 == '\0') break;
    } while (uVar8 < 0x27f);
  }
  *(undefined1 *)((int)&local_598 + uVar8) = 0;
  bVar16 = pbVar19[8];
  uVar18 = 0;
  do {
    uVar8 = uVar18;
    uVar18 = uVar8 + 1;
  } while (*(char *)((int)&local_598 + uVar8) != '\0');
  if (uVar8 + 1 < 0x280) {
    if (bVar16 < 0xa0) {
      bVar15 = bVar16 >> 4 | 0x30;
    }
    else {
      bVar15 = (bVar16 >> 4) + 0x37;
    }
    *(byte *)((int)&local_598 + uVar8) = bVar15;
    *(undefined1 *)((int)&local_598 + uVar8 + 1) = 0;
  }
  bVar16 = bVar16 & 0xf;
  uVar18 = 0;
  do {
    uVar8 = uVar18;
    uVar18 = uVar8 + 1;
  } while (*(char *)((int)&local_598 + uVar8) != '\0');
  if (uVar8 + 1 < 0x280) {
    if (bVar16 < 10) {
      bVar16 = bVar16 | 0x30;
    }
    else {
      bVar16 = bVar16 + 0x37;
    }
    *(byte *)((int)&local_598 + uVar8) = bVar16;
    *(undefined1 *)((int)&local_598 + uVar8 + 1) = 0;
  }
  uVar18 = 0;
  do {
    uVar8 = uVar18;
    uVar18 = uVar8 + 1;
  } while (*(char *)((int)&local_598 + uVar8) != '\0');
  if (uVar18 < 0x280) {
    *(undefined1 *)((int)&local_598 + uVar8) = 0x2e;
    uVar8 = uVar18;
  }
  *(undefined1 *)((int)&local_598 + uVar8) = 0;
  bVar16 = pbVar19[9];
  uVar18 = 0;
  do {
    uVar8 = uVar18;
    uVar18 = uVar8 + 1;
  } while (*(char *)((int)&local_598 + uVar8) != '\0');
  if (uVar8 + 1 < 0x280) {
    if (bVar16 < 0xa0) {
      bVar15 = bVar16 >> 4 | 0x30;
    }
    else {
      bVar15 = (bVar16 >> 4) + 0x37;
    }
    *(byte *)((int)&local_598 + uVar8) = bVar15;
    *(undefined1 *)((int)&local_598 + uVar8 + 1) = 0;
  }
  bVar16 = bVar16 & 0xf;
  uVar18 = 0;
  do {
    uVar8 = uVar18;
    uVar18 = uVar8 + 1;
  } while (*(char *)((int)&local_598 + uVar8) != '\0');
  if (uVar8 + 1 < 0x280) {
    if (bVar16 < 10) {
      bVar16 = bVar16 | 0x30;
    }
    else {
      bVar16 = bVar16 + 0x37;
    }
    *(byte *)((int)&local_598 + uVar8) = bVar16;
    *(undefined1 *)((int)&local_598 + uVar8 + 1) = 0;
  }
  uVar18 = 0;
  do {
    uVar8 = uVar18;
    uVar18 = uVar8 + 1;
  } while (*(char *)((int)&local_598 + uVar8) != '\0');
  if (uVar18 < 0x280) {
    *(undefined1 *)((int)&local_598 + uVar8) = 0x2e;
    uVar8 = uVar18;
  }
  *(undefined1 *)((int)&local_598 + uVar8) = 0;
  bVar16 = pbVar19[10];
  uVar18 = 0;
  do {
    uVar8 = uVar18;
    uVar18 = uVar8 + 1;
  } while (*(char *)((int)&local_598 + uVar8) != '\0');
  if (uVar8 + 1 < 0x280) {
    if (bVar16 < 0xa0) {
      bVar15 = bVar16 >> 4 | 0x30;
    }
    else {
      bVar15 = (bVar16 >> 4) + 0x37;
    }
    *(byte *)((int)&local_598 + uVar8) = bVar15;
    *(undefined1 *)((int)&local_598 + uVar8 + 1) = 0;
  }
  bVar16 = bVar16 & 0xf;
  uVar18 = 0;
  do {
    uVar8 = uVar18;
    uVar18 = uVar8 + 1;
  } while (*(char *)((int)&local_598 + uVar8) != '\0');
  if (uVar8 + 1 < 0x280) {
    if (bVar16 < 10) {
      bVar16 = bVar16 | 0x30;
    }
    else {
      bVar16 = bVar16 + 0x37;
    }
    *(byte *)((int)&local_598 + uVar8) = bVar16;
    *(undefined1 *)((int)&local_598 + uVar8 + 1) = 0;
  }
  uVar18 = 0;
  do {
    uVar8 = uVar18;
    uVar18 = uVar8 + 1;
  } while (*(char *)((int)&local_598 + uVar8) != '\0');
  if (uVar8 + 1 < 0x280) {
    cVar11 = ' ';
    pcVar12 = str_1000f95c;
    do {
      pcVar12 = pcVar12 + 1;
      *(char *)((int)&local_598 + uVar8) = cVar11;
      uVar8 = uVar8 + 1;
      cVar11 = *pcVar12;
      if (cVar11 == '\0') break;
    } while (uVar8 < 0x27f);
  }
  *(undefined1 *)((int)&local_598 + uVar8) = 0;
  bVar16 = pbVar19[0xb];
  uVar18 = 0;
  do {
    uVar8 = uVar18;
    uVar18 = uVar8 + 1;
  } while (*(char *)((int)&local_598 + uVar8) != '\0');
  if (uVar8 + 1 < 0x280) {
    if (bVar16 < 0xa0) {
      bVar15 = bVar16 >> 4 | 0x30;
    }
    else {
      bVar15 = (bVar16 >> 4) + 0x37;
    }
    *(byte *)((int)&local_598 + uVar8) = bVar15;
    *(undefined1 *)((int)&local_598 + uVar8 + 1) = 0;
  }
  bVar16 = bVar16 & 0xf;
  uVar18 = 0;
  do {
    uVar8 = uVar18;
    uVar18 = uVar8 + 1;
  } while (*(char *)((int)&local_598 + uVar8) != '\0');
  if (uVar8 + 1 < 0x280) {
    if (bVar16 < 10) {
      bVar16 = bVar16 | 0x30;
    }
    else {
      bVar16 = bVar16 + 0x37;
    }
    *(byte *)((int)&local_598 + uVar8) = bVar16;
    *(undefined1 *)((int)&local_598 + uVar8 + 1) = 0;
  }
  uVar18 = 0;
  do {
    local_18 = (byte *)uVar18;
    uVar18 = *(uint *)(pbVar19 + uVar18 * 4 + 0x14);
    if (uVar18 != 0) {
      uVar8 = 0;
      do {
        uVar13 = uVar8;
        uVar8 = uVar13 + 1;
      } while (*(char *)((int)&local_598 + uVar13) != '\0');
      if (uVar13 + 1 < 0x280) {
        cVar11 = ' ';
        pcVar12 = &DAT_1000f968;
        do {
          *(char *)((int)&local_598 + uVar13) = cVar11;
          uVar13 = uVar13 + 1;
          cVar11 = *pcVar12;
          if (cVar11 == '\0') break;
          pcVar12 = pcVar12 + 1;
        } while (uVar13 < 0x27f);
      }
      *(undefined1 *)((int)&local_598 + uVar13) = 0;
      if (local_18 == (byte *)0x0) {
        uVar8 = 0;
        do {
          uVar13 = uVar8;
          uVar8 = uVar13 + 1;
        } while (*(char *)((int)&local_598 + uVar13) != '\0');
        if (uVar13 + 1 < 0x280) {
          *(undefined2 *)((int)&local_598 + uVar13) = 0x30;
        }
      }
      else {
        uVar8 = 0;
        pbVar9 = local_18;
        do {
          *(byte *)((int)local_2c + uVar8) = (byte)((uint)pbVar9 % 10) | 0x30;
          pbVar19 = local_1c;
          uVar13 = uVar8 + 1;
          if (8 < uVar8) break;
          bVar24 = 9 < pbVar9;
          uVar8 = uVar13;
          pbVar9 = (byte *)((uint)pbVar9 / 10);
        } while (bVar24);
        do {
          iVar20 = uVar13 - 1;
          uVar13 = uVar13 - 1;
          uVar8 = 0;
          do {
            uVar21 = uVar8;
            uVar8 = uVar21 + 1;
          } while (*(char *)((int)&local_598 + uVar21) != '\0');
          if (uVar21 + 1 < 0x280) {
            *(undefined1 *)((int)&local_598 + uVar21) = *(undefined1 *)((int)local_2c + iVar20);
            *(undefined1 *)((int)&local_598 + uVar21 + 1) = 0;
          }
        } while (uVar13 != 0);
      }
      uVar8 = 0;
      do {
        uVar13 = uVar8;
        uVar8 = uVar13 + 1;
      } while (*(char *)((int)&local_598 + uVar13) != '\0');
      if (uVar8 < 0x280) {
        *(undefined1 *)((int)&local_598 + uVar13) = 0x3d;
        uVar13 = uVar8;
      }
      *(undefined1 *)((int)&local_598 + uVar13) = 0;
      iVar20 = 8;
      do {
        uVar13 = uVar18 >> ((char)iVar20 * '\x04' - 4U & 0x1f) & 0xf;
        bVar15 = (byte)uVar13;
        bVar16 = bVar15 + 0x37;
        uVar8 = 0;
        do {
          uVar21 = uVar8;
          uVar8 = uVar21 + 1;
        } while (*(char *)((int)&local_598 + uVar21) != '\0');
        if (uVar21 + 1 < 0x280) {
          if (uVar13 < 10) {
            bVar16 = bVar15 | 0x30;
          }
          *(byte *)((int)&local_598 + uVar21) = bVar16;
          *(undefined1 *)((int)&local_598 + uVar21 + 1) = 0;
        }
        iVar20 = iVar20 + -1;
      } while (iVar20 != 0);
    }
    cVar11 = (char)local_318;
    uVar18 = (int)local_18 + 1;
  } while (uVar18 != 6);
  if ((char)local_318 != '\0') {
    uVar18 = 0;
    do {
      uVar8 = uVar18;
      uVar18 = uVar8 + 1;
    } while (*(char *)((int)&local_598 + uVar8) != '\0');
    if (uVar18 < 0x280) {
      *(undefined1 *)((int)&local_598 + uVar8) = 0x20;
      uVar8 = uVar18;
    }
    *(undefined1 *)((int)&local_598 + uVar8) = 0;
    uVar18 = 0;
    do {
      uVar8 = uVar18;
      uVar18 = uVar8 + 1;
    } while (*(char *)((int)&local_598 + uVar8) != '\0');
    if (uVar8 + 1 < 0x280) {
      pcVar12 = (char *)((int)&local_318 + 1);
      do {
        *(char *)((int)&local_598 + uVar8) = cVar11;
        uVar8 = uVar8 + 1;
        cVar11 = *pcVar12;
        if (cVar11 == '\0') break;
        pcVar12 = pcVar12 + 1;
      } while (uVar8 < 0x27f);
    }
    *(undefined1 *)((int)&local_598 + uVar8) = 0;
  }
  if (((local_14 != (int *)0x0) && ((code *)local_14[3] != (code *)0x0)) &&
     (iVar20 = (*(code *)local_14[3])(&local_98,local_38,&local_598), iVar20 != 0)) {
    param_3[1] = param_3[1] + 1;
  }
  return;
LAB_1000c3e6:
  uVar8 = uVar8 | 4;
  goto LAB_1000d0db;
LAB_1000af9b:
  uVar18 = 0;
LAB_1000afba:
  local_2c[0] = 0;
  uVar8 = *(uint *)(local_1c + uVar18 * 4 + 0x14);
  if ((((((uVar8 & 1) != 0 || uVar8 == 0) || (local_98 = 0, local_14 == (int *)0x0)) ||
       ((uVar8 & 0xfffffff0) == 0)) || ((*local_14 != 0x54584b57 || ((uint)local_14[2] < 0x68)))) ||
     (((code *)local_14[0x19] == (code *)0x0 ||
      (iVar20 = (*(code *)local_14[0x19])(uVar8 & 0xfffffff0,0,0x1000,&local_98), iVar20 == 0))))
  goto LAB_1000afb0;
  uVar8 = 0;
  do {
    uVar13 = uVar8;
    uVar8 = uVar13 + 1;
  } while (*(char *)((int)&local_318 + uVar13) != '\0');
  if (uVar13 + 1 < 0x280) {
    cVar11 = ' ';
    pcVar23 = str_1000f925;
    do {
      pcVar23 = pcVar23 + 1;
      *(char *)((int)&local_318 + uVar13) = cVar11;
      uVar13 = uVar13 + 1;
      cVar11 = *pcVar23;
      if (cVar11 == '\0') break;
    } while (uVar13 < 0x27f);
  }
  *(undefined1 *)((int)&local_318 + uVar13) = 0;
  if (uVar18 == 0) {
    uVar18 = 0;
    do {
      uVar8 = uVar18;
      uVar18 = uVar8 + 1;
    } while (*(char *)((int)&local_318 + uVar8) != '\0');
    if (uVar8 + 1 < 0x280) {
      *(undefined2 *)((int)&local_318 + uVar8) = 0x30;
    }
  }
  else {
    uVar8 = 0;
    do {
      *(byte *)((int)&local_598 + uVar8) = (char)uVar18 + (char)(uVar18 / 10) * -10 | 0x30;
      uVar13 = uVar8 + 1;
      if (8 < uVar8) break;
      bVar24 = 9 < uVar18;
      uVar8 = uVar13;
      uVar18 = uVar18 / 10;
    } while (bVar24);
    do {
      pcVar23 = &cStack_599 + uVar13;
      uVar13 = uVar13 - 1;
      uVar18 = 0;
      do {
        uVar8 = uVar18;
        uVar18 = uVar8 + 1;
      } while (*(char *)((int)&local_318 + uVar8) != '\0');
      if (uVar8 + 1 < 0x280) {
        *(char *)((int)&local_318 + uVar8) = *pcVar23;
        *(undefined1 *)((int)&local_318 + uVar8 + 1) = 0;
      }
    } while (uVar13 != 0);
  }
  uVar8 = local_98;
  uVar18 = 0;
  do {
    uVar13 = uVar18;
    uVar18 = uVar13 + 1;
  } while (*(char *)((int)&local_318 + uVar13) != '\0');
  if (uVar18 < 0x280) {
    *(undefined1 *)((int)&local_318 + uVar13) = 0x20;
    uVar13 = uVar18;
  }
  *(undefined1 *)((int)&local_318 + uVar13) = 0;
  uVar18 = 0;
  do {
    uVar13 = uVar18;
    uVar18 = uVar13 + 1;
  } while (*(char *)((int)&local_318 + uVar13) != '\0');
  if (uVar13 + 1 < 0x280) {
    cVar11 = 'm';
    pcVar23 = &DAT_1000f930;
    do {
      *(char *)((int)&local_318 + uVar13) = cVar11;
      uVar13 = uVar13 + 1;
      cVar11 = *pcVar23;
      if (cVar11 == '\0') break;
      pcVar23 = pcVar23 + 1;
    } while (uVar13 < 0x27f);
  }
  *(undefined1 *)((int)&local_318 + uVar13) = 0;
  uVar18 = 0;
  do {
    uVar13 = uVar18;
    uVar18 = uVar13 + 1;
  } while (*(char *)((int)&local_318 + uVar13) != '\0');
  if (uVar18 < 0x280) {
    *(undefined1 *)((int)&local_318 + uVar13) = 0x3d;
    uVar13 = uVar18;
  }
  *(undefined1 *)((int)&local_318 + uVar13) = 0;
  iVar20 = 8;
  do {
    uVar18 = uVar8 >> ((char)iVar20 * '\x04' - 4U & 0x1f) & 0xf;
    bVar16 = (byte)uVar18;
    if (uVar18 < 10) {
      bVar16 = bVar16 | 0x30;
    }
    else {
      bVar16 = bVar16 + 0x37;
    }
    uVar18 = 0;
    do {
      uVar13 = uVar18;
      uVar18 = uVar13 + 1;
    } while (*(char *)((int)&local_318 + uVar13) != '\0');
    if (uVar13 + 1 < 0x280) {
      *(byte *)((int)&local_318 + uVar13) = bVar16;
      *(undefined1 *)((int)&local_318 + uVar13 + 1) = 0;
    }
    iVar20 = iVar20 + -1;
  } while (iVar20 != 0);
  if (((uVar8 != 0) && (*local_14 == 0x54584b57)) &&
     ((0x6b < (uint)local_14[2] && ((code *)local_14[0x1a] != (code *)0x0)))) {
    iVar20 = (*(code *)local_14[0x1a])(uVar8,4,local_2c);
    uVar18 = local_2c[0];
    if (iVar20 == 0) goto LAB_1000b0a1;
    uVar8 = 0;
    do {
      uVar13 = uVar8;
      uVar8 = uVar13 + 1;
    } while (*(char *)((int)&local_318 + uVar13) != '\0');
    if (uVar8 < 0x280) {
      *(undefined1 *)((int)&local_318 + uVar13) = 0x20;
      uVar13 = uVar8;
    }
    *(undefined1 *)((int)&local_318 + uVar13) = 0;
    uVar8 = 0;
    do {
      uVar13 = uVar8;
      uVar8 = uVar13 + 1;
    } while (*(char *)((int)&local_318 + uVar13) != '\0');
    if (uVar13 + 1 < 0x280) {
      cVar11 = 'm';
      pcVar23 = str_1000f934;
      do {
        pcVar23 = pcVar23 + 1;
        *(char *)((int)&local_318 + uVar13) = cVar11;
        uVar13 = uVar13 + 1;
        cVar11 = *pcVar23;
        if (cVar11 == '\0') break;
      } while (uVar13 < 0x27f);
    }
    *(undefined1 *)((int)&local_318 + uVar13) = 0;
    uVar8 = 0;
    do {
      uVar13 = uVar8;
      uVar8 = uVar13 + 1;
    } while (*(char *)((int)&local_318 + uVar13) != '\0');
    if (uVar8 < 0x280) {
      *(undefined1 *)((int)&local_318 + uVar13) = 0x3d;
      uVar13 = uVar8;
    }
    *(undefined1 *)((int)&local_318 + uVar13) = 0;
    iVar20 = 8;
    do {
      uVar8 = uVar18 >> ((char)iVar20 * '\x04' - 4U & 0x1f) & 0xf;
      bVar16 = (byte)uVar8;
      if (uVar8 < 10) {
        bVar16 = bVar16 | 0x30;
      }
      else {
        bVar16 = bVar16 + 0x37;
      }
      uVar8 = 0;
      do {
        uVar13 = uVar8;
        uVar8 = uVar13 + 1;
      } while (*(char *)((int)&local_318 + uVar13) != '\0');
      if (uVar13 + 1 < 0x280) {
        *(byte *)((int)&local_318 + uVar13) = bVar16;
        *(undefined1 *)((int)&local_318 + uVar13 + 1) = 0;
      }
      iVar20 = iVar20 + -1;
    } while (iVar20 != 0);
  }
  goto LAB_1000b0a1;
LAB_1000afb0:
  uVar18 = uVar18 + 1;
  if (uVar18 == 6) goto LAB_1000b09c;
  goto LAB_1000afba;
}

#undef DAT_1000f272
#undef DAT_1000f273
#undef DAT_1000f274
#undef DAT_1000f275
#undef DAT_1000f659
#undef DAT_1000f65f
#undef DAT_1000f6a4
#undef DAT_1000f6a5
#undef DAT_1000f6a6
#undef DAT_1000f6a7
#undef DAT_1000f6a8
#undef DAT_1000f6a9
#undef DAT_1000f6fa
#undef DAT_1000f705
#undef DAT_1000f866
#undef DAT_1000f86e
#undef DAT_1000f8a1
#undef DAT_1000f8a9
#undef DAT_1000f8b1
#undef DAT_1000f8de
#undef DAT_1000f90e
#undef DAT_1000f916
#undef DAT_1000f91e
#undef DAT_1000f930
#undef DAT_1000f93e
#undef DAT_1000f968
#undef str_1000f11f
#undef str_1000f285
#undef str_1000f28b
#undef str_1000f293
#undef str_1000f672
#undef str_1000f693
#undef str_1000f69c
#undef str_1000f6aa
#undef str_1000f6b1
#undef str_1000f6bd
#undef str_1000f6d3
#undef str_1000f711
#undef str_1000f747
#undef str_1000f76f
#undef str_1000f77f
#undef str_1000f7a9
#undef str_1000f7b9
#undef str_1000f7cd
#undef str_1000f7e5
#undef str_1000f7fd
#undef str_1000f816
#undef str_1000f827
#undef str_1000f837
#undef str_1000f846
#undef str_1000f85c
#undef str_1000f875
#undef str_1000f87f
#undef str_1000f88b
#undef str_1000f8b8
#undef str_1000f8c4
#undef str_1000f8e3
#undef str_1000f8eb
#undef str_1000f8f3
#undef str_1000f925
#undef str_1000f934
#undef str_1000f942
#undef str_1000f94b
#undef str_1000f954
#undef str_1000f95c
#undef local_598
#undef local_318
#undef cStack_599
#undef local_98
#undef local_38
#undef cStack_319
#undef local_34
#undef local_2f
#undef cStack_99
#undef local_2e
#undef local_2c
#undef local_20
#undef local_1c
#undef local_18
#undef local_14

#define local_18 (*(uint *)(frame + 24))
#define local_14 (*(uint *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d7c0
 */

undefined4 recovered_1000d7c0(int *in_ECX,undefined4 in_EDX)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;

  uVar3 = 8;
  uVar4 = 0;
  while( true ) {
    local_14 = 0;
    if (in_ECX == (int *)0x0) {
      return 0;
    }
    if (*in_ECX != 0x54584b57) {
      return 0;
    }
    if ((uint)in_ECX[2] < 0x58) {
      return 0;
    }
    if ((code *)in_ECX[0x15] == (code *)0x0) break;
    iVar1 = (*(code *)in_ECX[0x15])(0x304,1,&local_14);
    if (iVar1 == 0) {
      return 0;
    }
    if ((local_14 & 2) == 0) {
      uVar4 = 8;
      uVar3 = 0;
      while( true ) {
        local_18 = 0;
        if ((((*in_ECX != 0x54584b57) || ((uint)in_ECX[2] < 0x58)) ||
            ((code *)in_ECX[0x15] == (code *)0x0)) ||
           (iVar1 = (*(code *)in_ECX[0x15])(0x304,1,&local_18), iVar1 == 0)) {
          return 0;
        }
        if ((local_18 & 4) != 0) break;
        if (((*in_ECX == 0x54584b57) && (0x33 < (uint)in_ECX[2])) &&
           ((code *)in_ECX[0xc] != (code *)0x0)) {
          (*(code *)in_ECX[0xc])(uVar4);
        }
        uVar4 = uVar4 << (uVar4 < 0x1000 && 9 < uVar3);
        uVar3 = uVar3 + 1;
        if (uVar3 == 0x18) {
          return 0;
        }
      }
      if (*in_ECX != 0x54584b57) {
        return 0;
      }
      if ((uint)in_ECX[2] < 0x5c) {
        return 0;
      }
      if ((code *)in_ECX[0x16] == (code *)0x0) {
        return 0;
      }
      uVar2 = (*(code *)in_ECX[0x16])(0x300,1,in_EDX);
      return uVar2;
    }
    if (((*in_ECX == 0x54584b57) && (0x33 < (uint)in_ECX[2])) &&
       ((code *)in_ECX[0xc] != (code *)0x0)) {
      (*(code *)in_ECX[0xc])(uVar3);
    }
    uVar3 = uVar3 << (uVar3 < 0x1000 && 9 < uVar4);
    uVar4 = uVar4 + 1;
    if (uVar4 == 0x18) {
      return 0;
    }
  }
  return 0;
}

#undef local_18
#undef local_14

#define local_1c (*(uint *)(frame + 20))
#define local_18 (*(uint *)(frame + 24))
#define local_11 (*(byte *)(frame + 31))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d930
 */

undefined4 recovered_1000d930(int *in_ECX,undefined1 in_DL,int param_3)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  bool bVar5;

  if (param_3 != 0) {
    uVar4 = 0;
    bVar5 = true;
    do {
      local_1c = 0;
      if ((in_ECX != (int *)0x0) && (*in_ECX == 0x54584b57)) {
        uVar2 = in_ECX[2];
        if (0x57 < uVar2) {
          if ((code *)in_ECX[0x15] != (code *)0x0) {
            local_11 = bVar5;
            (*(code *)in_ECX[0x15])(2000,1,&local_1c);
            if (*in_ECX != 0x54584b57) goto LAB_1000d960;
            uVar2 = in_ECX[2];
            if (uVar2 < 0x58) goto LAB_1000da00;
            if ((((code *)in_ECX[0x15] != (code *)0x0) &&
                (iVar1 = (*(code *)in_ECX[0x15])(0x7d4,1,&local_1c), iVar1 != 0)) &&
               ((local_1c & 1) == 0)) {
              if ((local_11 & 1) == 0) {
                return 0;
              }
              if (*in_ECX != 0x54584b57) {
                return 0;
              }
              if ((uint)in_ECX[2] < 0x5c) {
                return 0;
              }
              if ((code *)in_ECX[0x16] == (code *)0x0) {
                return 0;
              }
              iVar1 = (*(code *)in_ECX[0x16])(2000,1,in_DL);
              if (iVar1 == 0) {
                return 0;
              }
              uVar4 = 0;
              bVar5 = true;
              goto LAB_1000da8f;
            }
          }
          if (*in_ECX != 0x54584b57) goto LAB_1000d960;
          uVar2 = in_ECX[2];
        }
LAB_1000da00:
        if ((0x33 < uVar2) && ((code *)in_ECX[0xc] != (code *)0x0)) {
          (*(code *)in_ECX[0xc])(100);
        }
      }
LAB_1000d960:
      bVar5 = uVar4 < 199;
      uVar4 = uVar4 + 1;
    } while (uVar4 != 200);
  }
  return 0;
LAB_1000da8f:
  local_18 = 0;
  if (*in_ECX == 0x54584b57) {
    uVar2 = in_ECX[2];
    if (uVar2 < 0x58) {
LAB_1000dada:
      if (uVar2 < 0x34) goto LAB_1000da75;
    }
    else if ((code *)in_ECX[0x15] != (code *)0x0) {
      iVar1 = (*(code *)in_ECX[0x15])(0x7d4,1,&local_18);
      if (iVar1 == 0) {
        iVar1 = *in_ECX;
      }
      else {
        iVar1 = *in_ECX;
        if ((local_18 & 1) != 0) {
          if (((iVar1 == 0x54584b57) && (0x57 < (uint)in_ECX[2])) &&
             ((code *)in_ECX[0x15] != (code *)0x0)) {
            (*(code *)in_ECX[0x15])(2000,1,&local_18);
          }
          if (!bVar5) {
            return 0;
          }
          if (*in_ECX != 0x54584b57) {
            return 0;
          }
          if ((uint)in_ECX[2] < 0x58) {
            return 0;
          }
          if ((code *)in_ECX[0x15] == (code *)0x0) {
            return 0;
          }
          uVar3 = (*(code *)in_ECX[0x15])(0x7c2,1,param_3);
          return uVar3;
        }
      }
      if (iVar1 != 0x54584b57) goto LAB_1000da75;
      uVar2 = in_ECX[2];
      goto LAB_1000dada;
    }
    if ((code *)in_ECX[0xc] != (code *)0x0) {
      (*(code *)in_ECX[0xc])(100);
    }
  }
LAB_1000da75:
  bVar5 = uVar4 < 199;
  uVar4 = uVar4 + 1;
  if (uVar4 == 200) {
    return 0;
  }
  goto LAB_1000da8f;
}

#undef local_1c
#undef local_18
#undef local_11

#define local_1c (*(uint *)(frame + 20))
#define local_18 (*(uint *)(frame + 24))
#define local_11 (*(byte *)(frame + 31))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000db60
 */

void recovered_1000db60(int *in_ECX,undefined1 in_DL,int param_3)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

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
    local_18 = 0;
    if ((in_ECX != (int *)0x0) && (*in_ECX == 0x54584b57)) {
      uVar2 = in_ECX[2];
      if (0x57 < uVar2) {
        if ((code *)in_ECX[0x15] != (code *)0x0) {
          local_11 = bVar4;
          (*(code *)in_ECX[0x15])(2000,1,&local_18);
          if (*in_ECX != 0x54584b57) goto LAB_1000db90;
          uVar2 = in_ECX[2];
          if (uVar2 < 0x58) goto LAB_1000dc30;
          if ((((code *)in_ECX[0x15] != (code *)0x0) &&
              (iVar1 = (*(code *)in_ECX[0x15])(0x7d4,1,&local_18), iVar1 != 0)) &&
             ((local_18 & 1) == 0)) {
            if ((local_11 & 1) == 0) {
              return;
            }
            if (*in_ECX != 0x54584b57) {
              return;
            }
            if ((uint)in_ECX[2] < 0x5c) {
              return;
            }
            if ((code *)in_ECX[0x16] == (code *)0x0) {
              return;
            }
            iVar1 = (*(code *)in_ECX[0x16])(2000,1,in_DL);
            if (iVar1 == 0) {
              return;
            }
            uVar3 = 0;
            bVar4 = true;
            break;
          }
        }
        if (*in_ECX != 0x54584b57) goto LAB_1000db90;
        uVar2 = in_ECX[2];
      }
LAB_1000dc30:
      if ((0x33 < uVar2) && ((code *)in_ECX[0xc] != (code *)0x0)) {
        (*(code *)in_ECX[0xc])(100);
      }
    }
LAB_1000db90:
    bVar4 = uVar3 < 199;
    uVar3 = uVar3 + 1;
    if (uVar3 == 200) {
      return;
    }
  } while( true );
LAB_1000dcba:
  local_1c = 0;
  if (*in_ECX == 0x54584b57) {
    uVar2 = in_ECX[2];
    if (uVar2 < 0x58) {
LAB_1000dd05:
      if (uVar2 < 0x34) goto LAB_1000dca2;
    }
    else if ((code *)in_ECX[0x15] != (code *)0x0) {
      local_11 = bVar4;
      iVar1 = (*(code *)in_ECX[0x15])(0x7d4,1,&local_1c);
      if (iVar1 == 0) {
        iVar1 = *in_ECX;
      }
      else {
        iVar1 = *in_ECX;
        if ((local_1c & 1) != 0) {
          if (((iVar1 == 0x54584b57) && (0x57 < (uint)in_ECX[2])) &&
             ((code *)in_ECX[0x15] != (code *)0x0)) {
            (*(code *)in_ECX[0x15])(2000,1,&local_1c);
          }
          if ((local_11 & 1) == 0) {
            return;
          }
          if (*in_ECX != 0x54584b57) {
            return;
          }
          if ((uint)in_ECX[2] < 0x58) {
            return;
          }
          if ((code *)in_ECX[0x15] == (code *)0x0) {
            return;
          }
          (*(code *)in_ECX[0x15])(0x7c2,4,param_3);
          return;
        }
      }
      if (iVar1 != 0x54584b57) goto LAB_1000dca2;
      uVar2 = in_ECX[2];
      goto LAB_1000dd05;
    }
    if ((code *)in_ECX[0xc] != (code *)0x0) {
      (*(code *)in_ECX[0xc])(100);
    }
  }
LAB_1000dca2:
  bVar4 = uVar3 < 199;
  uVar3 = uVar3 + 1;
  if (uVar3 == 200) {
    return;
  }
  goto LAB_1000dcba;
}

#undef local_1c
#undef local_18
#undef local_11

#define abStack_1f (*(byte (*)[11])(frame + 17))
#define local_14 (*(uint *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000dd80
 */

void recovered_1000dd80(int in_ECX,uint in_EDX,char *param_3,uint param_4)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  char cVar7;

  if (in_ECX == 0) {
    if (param_4 < 10) {
      return;
    }
  }
  else {
    uVar4 = 0;
    do {
      uVar3 = uVar4;
      uVar4 = uVar3 + 1;
    } while (*(char *)(in_ECX + uVar3) != '\0');
    if (uVar4 < in_EDX) {
      *(undefined1 *)(in_ECX + -1 + uVar4) = 0x20;
      uVar3 = uVar4;
    }
    *(undefined1 *)(in_ECX + uVar3) = 0;
    uVar4 = 0;
    do {
      uVar3 = uVar4;
      uVar4 = uVar3 + 1;
    } while (*(char *)(in_ECX + uVar3) != '\0');
    if (param_3 != (char *)0x0) {
      cVar7 = *param_3;
      if (uVar3 + 1 < in_EDX && cVar7 != '\0') {
        do {
          param_3 = param_3 + 1;
          *(char *)(in_ECX + uVar3) = cVar7;
          cVar7 = *param_3;
          uVar4 = uVar3 + 1;
          if (cVar7 == '\0') break;
          uVar5 = uVar3 + 2;
          uVar3 = uVar4;
        } while (uVar5 < in_EDX);
      }
      else {
        uVar4 = uVar3;
      }
      *(undefined1 *)(in_ECX + uVar4) = 0;
    }
    uVar4 = 0;
    do {
      uVar3 = uVar4;
      uVar4 = uVar3 + 1;
    } while (*(char *)(in_ECX + uVar3) != '\0');
    if (uVar4 < in_EDX) {
      *(undefined1 *)(in_ECX + -1 + uVar4) = 0x3d;
      uVar3 = uVar4;
    }
    *(undefined1 *)(in_ECX + uVar3) = 0;
    if (param_4 < 10) {
      uVar4 = 0;
      do {
        pcVar1 = (char *)(in_ECX + uVar4);
        uVar4 = uVar4 + 1;
      } while (*pcVar1 != '\0');
      if (uVar4 < in_EDX) {
        *(undefined2 *)(in_ECX + -1 + uVar4) = 0x30;
      }
      goto LAB_1000de74;
    }
  }
  local_14 = in_EDX;
  uVar4 = param_4;
  uVar3 = 0;
  do {
    abStack_1f[uVar3 + 1] = (byte)((uVar4 / 10) % 10) | 0x30;
    uVar5 = uVar3 + 1;
    if (8 < uVar3) break;
    bVar2 = 99 < uVar4;
    uVar4 = uVar4 / 10;
    uVar3 = uVar5;
  } while (bVar2);
  do {
    if (in_ECX != 0) {
      uVar4 = 0;
      do {
        pcVar1 = (char *)(in_ECX + uVar4);
        uVar4 = uVar4 + 1;
      } while (*pcVar1 != '\0');
      if (uVar4 < local_14) {
        *(byte *)(in_ECX + -1 + uVar4) = abStack_1f[uVar5];
        *(undefined1 *)(in_ECX + uVar4) = 0;
      }
    }
    uVar5 = uVar5 - 1;
    in_EDX = local_14;
  } while (uVar5 != 0);
LAB_1000de74:
  iVar6 = param_4 + (param_4 / 5 & 0xfffffffe) * -5;
  if (iVar6 != 0 && in_ECX != 0) {
    uVar4 = 0;
    do {
      uVar3 = uVar4;
      uVar4 = uVar3 + 1;
    } while (*(char *)(in_ECX + uVar3) != '\0');
    if (uVar4 < in_EDX) {
      *(undefined1 *)(in_ECX + -1 + uVar4) = 0x2e;
      uVar3 = uVar4;
    }
    *(undefined1 *)(in_ECX + uVar3) = 0;
    uVar4 = 0;
    do {
      pcVar1 = (char *)(in_ECX + uVar4);
      uVar4 = uVar4 + 1;
    } while (*pcVar1 != '\0');
    if (uVar4 < in_EDX) {
      *(byte *)(in_ECX + -1 + uVar4) = (byte)iVar6 | 0x30;
      *(undefined1 *)(in_ECX + uVar4) = 0;
    }
  }
  return;
}

#undef abStack_1f
#undef local_14

#define local_30 (*(undefined4 *)(frame + 16))
#define local_2c (*(undefined4 *)(frame + 20))
#define local_28 (*(uint *)(frame + 24))
#define local_24 (*(uint *)(frame + 28))
#define local_20 (*(uint *)(frame + 32))
#define local_1c (*(uint *)(frame + 36))
#define local_18 (*(uint *)(frame + 40))
#define local_14 (*(int * *)(frame + 44))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000df70
 */

undefined4
recovered_1000df70(int *in_ECX,undefined1 in_DL,byte param_3,byte param_4,undefined1 *param_5)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;

  local_24 = 0;
  local_30 = 0;
  local_20 = 0;
  if (in_ECX == (int *)0x0 || param_5 == (undefined1 *)0x0) {
    return 0;
  }
  if (*in_ECX != 0x54584b57) {
    return 0;
  }
  if ((uint)in_ECX[2] < 0x60) {
    return 0;
  }
  if ((code *)in_ECX[0x17] == (code *)0x0) {
    return 0;
  }
  local_1c = (uint)param_4;
  local_18 = (uint)param_3;
  local_14 = in_ECX;
  iVar1 = (*(code *)in_ECX[0x17])(in_DL,local_18,local_1c,0,4,&local_24);
  if (iVar1 == 0) {
    return 0;
  }
  if ((local_24 & 0xffff) == 0) {
    return 0;
  }
  if ((local_24 & 0xffff) == 0xffff) {
    return 0;
  }
  if (*local_14 != 0x54584b57) {
    return 0;
  }
  if ((uint)local_14[2] < 0x60) {
    return 0;
  }
  if ((code *)local_14[0x17] == (code *)0x0) {
    return 0;
  }
  iVar1 = (*(code *)local_14[0x17])(in_DL,local_18,local_1c,8,4,&local_30);
  if (iVar1 == 0) {
    return 0;
  }
  if ((((*local_14 != 0x54584b57) || ((uint)local_14[2] < 0x60)) ||
      ((code *)local_14[0x17] == (code *)0x0)) ||
     (iVar1 = (*(code *)local_14[0x17])(in_DL,local_18,local_1c,4,4,param_5 + 0x10), iVar1 == 0)) {
    *(undefined4 *)(param_5 + 0x10) = 0;
  }
  if (((*local_14 == 0x54584b57) && (0x5f < (uint)local_14[2])) &&
     (((code *)local_14[0x17] != (code *)0x0 &&
      (iVar1 = (*(code *)local_14[0x17])(in_DL,local_18,local_1c,0xc,4,&local_20), iVar1 != 0)))) {
    local_28 = local_20 >> 0x10 & 0xff;
  }
  else {
    local_20 = 0;
    local_28 = 0;
  }
  *param_5 = in_DL;
  param_5[1] = param_3;
  param_5[2] = param_4;
  *(uint *)(param_5 + 4) = local_24;
  *(ushort *)(param_5 + 10) = (ushort)local_30 << 8 | (ushort)local_30 >> 8;
  param_5[9] = (char)((uint)local_30 >> 0x10);
  param_5[8] = (char)((uint)local_30 >> 0x18);
  param_5[0xc] = (char)local_28;
  iVar1 = -0x18;
  piVar4 = local_14;
  do {
    local_2c = 0;
    uVar2 = 0;
    if (((*piVar4 == 0x54584b57) && (0x5f < (uint)piVar4[2])) &&
       ((code *)piVar4[0x17] != (code *)0x0)) {
      iVar3 = (*(code *)piVar4[0x17])(in_DL,local_18,local_1c,iVar1 + 0x28U & 0xffff,4,&local_2c);
      uVar2 = 0;
      if (iVar3 != 0) {
        uVar2 = local_2c;
      }
      piVar4 = local_14;
    }
    *(undefined4 *)(param_5 + iVar1 + 0x2c) = uVar2;
    iVar1 = iVar1 + 4;
  } while (iVar1 != 0);
  return 1;
}

#undef local_30
#undef local_2c
#undef local_28
#undef local_24
#undef local_20
#undef local_1c
#undef local_18
#undef local_14

#undef DAT_1000f269
#define DAT_1000f269 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x31bU)))
#undef DAT_1000f26e
#define DAT_1000f26e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x320U)))
#undef DAT_1000f276
#define DAT_1000f276 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x328U)))
#undef DAT_1000f27b
#define DAT_1000f27b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x32dU)))
#undef DAT_1000f280
#define DAT_1000f280 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x332U)))
#undef DAT_1000fa69
#define DAT_1000fa69 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb1bU)))
#undef PTR_str_1000fa2e_10010014
#define PTR_str_1000fa2e_10010014 (*(char * *)(((uintptr_t)pf_module_state + 0x10c6U)))
#undef str_1000f96c
#define str_1000f96c (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa1eU)))
#undef str_1000f977
#define str_1000f977 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa29U)))
#undef str_1000f986
#define str_1000f986 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa38U)))
#undef str_1000f991
#define str_1000f991 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa43U)))
#undef str_1000f99f
#define str_1000f99f (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa51U)))
#undef str_1000f9b1
#define str_1000f9b1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa63U)))
#undef str_1000f9bb
#define str_1000f9bb (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa6dU)))
#undef str_1000f9c7
#define str_1000f9c7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa79U)))
#undef str_1000f9d1
#define str_1000f9d1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa83U)))
#undef str_1000f9e2
#define str_1000f9e2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa94U)))
#undef str_1000f9f0
#define str_1000f9f0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xaa2U)))
#undef str_1000f9f9
#define str_1000f9f9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xaabU)))
#undef str_1000fa6e
#define str_1000fa6e (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb20U)))
#undef str_1000fa79
#define str_1000fa79 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb2bU)))
#undef str_1000fa82
#define str_1000fa82 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb34U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000e180
 */

char * recovered_1000e180(int in_ECX)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  byte bVar2;
  ushort uVar3;
  char *pcVar4;

  if (in_ECX == 0) {
    return str_1000f96c;
  }
  cVar1 = *(char *)(in_ECX + 8);
  if (cVar1 == '\f') {
    if (*(char *)(in_ECX + 9) == '\x03') {
      bVar2 = *(byte *)(in_ECX + 10);
      if (bVar2 < 0x30) {
        if (bVar2 == 0) {
          return &DAT_1000f276;
        }
        if (bVar2 == 0x10) {
          return &DAT_1000f27b;
        }
        if (bVar2 == 0x20) {
          return &DAT_1000f280;
        }
      }
      else {
        if (bVar2 == 0x30) {
          return &DAT_1000fa69;
        }
        if (bVar2 == 0x80) {
          return str_1000fa6e;
        }
        if (bVar2 == 0xfe) {
          return str_1000fa79;
        }
      }
      return str_1000fa82;
    }
  }
  else if (cVar1 == '\x04') {
    if (*(char *)(in_ECX + 9) == '\x03') {
      return &DAT_1000f26e;
    }
  }
  else if ((cVar1 == '\x01') && (*(char *)(in_ECX + 9) == '\x06')) {
    return &DAT_1000f269;
  }
  uVar3 = *(ushort *)(in_ECX + 4);
  if (uVar3 < 0x11ab) {
    if (uVar3 == 0x106b) {
      return str_1000f9f9;
    }
    if (uVar3 == 0x10de) {
      if (cVar1 == '\x03') {
        return str_1000f977;
      }
      return str_1000f986;
    }
    if (uVar3 == 0x1180) {
      return str_1000f9f0;
    }
  }
  else {
    if (uVar3 == 0x11ab) {
      return str_1000f9e2;
    }
    if (uVar3 == 0x14e4) {
      return str_1000f9d1;
    }
    if (uVar3 == 0x8086) {
      if (cVar1 == '\x03') {
        return str_1000f991;
      }
      if (cVar1 != '\x06') {
        if ((cVar1 == '\f') && (*(char *)(in_ECX + 9) == '\x05')) {
          return str_1000f9bb;
        }
        return str_1000f9c7;
      }
      pcVar4 = str_1000f9b1;
      if (*(char *)(in_ECX + 9) != '\x01') {
        pcVar4 = str_1000f9c7;
      }
      if (*(char *)(in_ECX + 9) == '\0') {
        return str_1000f99f;
      }
      return pcVar4;
    }
  }
  if ((byte)(cVar1 - 1U) < 6) {
    return (&PTR_str_1000fa2e_10010014)[(byte)(cVar1 - 1U)];
  }
  return str_1000f96c;
}

#undef DAT_1000f269
#undef DAT_1000f26e
#undef DAT_1000f276
#undef DAT_1000f27b
#undef DAT_1000f280
#undef DAT_1000fa69
#undef PTR_str_1000fa2e_10010014
#undef str_1000f96c
#undef str_1000f977
#undef str_1000f986
#undef str_1000f991
#undef str_1000f99f
#undef str_1000f9b1
#undef str_1000f9bb
#undef str_1000f9c7
#undef str_1000f9d1
#undef str_1000f9e2
#undef str_1000f9f0
#undef str_1000f9f9
#undef str_1000fa6e
#undef str_1000fa79
#undef str_1000fa82

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000e310
 */

void recovered_1000e310(int in_ECX,char *in_EDX,uint param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  byte bVar2;
  uint uVar3;
  char cVar4;
  uint uVar5;

  if (in_ECX != 0) {
    uVar3 = 0;
    do {
      uVar5 = uVar3;
      uVar3 = uVar5 + 1;
    } while (*(char *)(in_ECX + uVar5) != '\0');
    if (uVar3 < 0x280) {
      *(undefined1 *)(in_ECX + -1 + uVar3) = 0x20;
      uVar5 = uVar3;
    }
    *(undefined1 *)(in_ECX + uVar5) = 0;
    uVar3 = 0;
    do {
      uVar5 = uVar3;
      uVar3 = uVar5 + 1;
    } while (*(char *)(in_ECX + uVar5) != '\0');
    if (in_EDX != (char *)0x0) {
      cVar4 = *in_EDX;
      if (uVar5 + 1 < 0x280 && cVar4 != '\0') {
        do {
          in_EDX = in_EDX + 1;
          *(char *)(in_ECX + uVar5) = cVar4;
          uVar5 = uVar5 + 1;
          cVar4 = *in_EDX;
          if (cVar4 == '\0') break;
        } while (uVar5 < 0x27f);
      }
      *(undefined1 *)(in_ECX + uVar5) = 0;
    }
    uVar3 = 0;
    do {
      uVar5 = uVar3;
      uVar3 = uVar5 + 1;
    } while (*(char *)(in_ECX + uVar5) != '\0');
    if (uVar3 < 0x280) {
      *(undefined1 *)(in_ECX + -1 + uVar3) = 0x3d;
      uVar5 = uVar3;
    }
    *(undefined1 *)(in_ECX + uVar5) = 0;
    uVar3 = param_3 >> 0xc & 0xf;
    bVar2 = (byte)uVar3;
    if (uVar3 < 10) {
      bVar2 = bVar2 | 0x30;
    }
    else {
      bVar2 = bVar2 + 0x37;
    }
    uVar3 = 0;
    do {
      pcVar1 = (char *)(in_ECX + uVar3);
      uVar3 = uVar3 + 1;
    } while (*pcVar1 != '\0');
    if (uVar3 < 0x280) {
      *(byte *)(in_ECX + -1 + uVar3) = bVar2;
      *(undefined1 *)(in_ECX + uVar3) = 0;
    }
    uVar3 = param_3 >> 8 & 0xf;
    bVar2 = (byte)uVar3;
    if (uVar3 < 10) {
      bVar2 = bVar2 | 0x30;
    }
    else {
      bVar2 = bVar2 + 0x37;
    }
    uVar3 = 0;
    do {
      pcVar1 = (char *)(in_ECX + uVar3);
      uVar3 = uVar3 + 1;
    } while (*pcVar1 != '\0');
    if (uVar3 < 0x280) {
      *(byte *)(in_ECX + -1 + uVar3) = bVar2;
      *(undefined1 *)(in_ECX + uVar3) = 0;
    }
    uVar3 = param_3 >> 4 & 0xf;
    bVar2 = (byte)uVar3;
    if (uVar3 < 10) {
      bVar2 = bVar2 | 0x30;
    }
    else {
      bVar2 = bVar2 + 0x37;
    }
    uVar3 = 0;
    do {
      pcVar1 = (char *)(in_ECX + uVar3);
      uVar3 = uVar3 + 1;
    } while (*pcVar1 != '\0');
    if (uVar3 < 0x280) {
      *(byte *)(in_ECX + -1 + uVar3) = bVar2;
      *(undefined1 *)(in_ECX + uVar3) = 0;
    }
    bVar2 = (byte)(param_3 & 0xf);
    if ((param_3 & 0xf) < 10) {
      bVar2 = bVar2 | 0x30;
    }
    else {
      bVar2 = bVar2 + 0x37;
    }
    uVar3 = 0;
    do {
      pcVar1 = (char *)(in_ECX + uVar3);
      uVar3 = uVar3 + 1;
    } while (*pcVar1 != '\0');
    if (uVar3 < 0x280) {
      *(byte *)(in_ECX + -1 + uVar3) = bVar2;
      *(undefined1 *)(in_ECX + uVar3) = 0;
    }
  }
  return;
}


#undef DAT_10011000
#define DAT_10011000 (*(int *)(((uintptr_t)pf_module_state + 0x20b2U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000e490
 */

undefined4 recovered_1000e490(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;

  if (DAT_10011000 != 0) {
    if (param_1 != 0 && *(code **)(DAT_10011000 + 0x24) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x1000e4b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (**(code **)(DAT_10011000 + 0x24))(param_1);
      return uVar1;
    }
  }
  return 0;
}

#undef DAT_10011000

#undef DAT_10011000
#define DAT_10011000 (*(int * *)(((uintptr_t)pf_module_state + 0x20b2U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000e4c0
 */

undefined4 recovered_1000e4c0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;

  if ((((DAT_10011000 == (int *)0x0) || (*DAT_10011000 != 0x54584b57)) ||
      ((uint)DAT_10011000[2] < 0xac)) || ((code *)DAT_10011000[0x2a] == (code *)0x0)) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x1000e4e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)DAT_10011000[0x2a])();
  return uVar1;
}

#undef DAT_10011000

#define local_18 (*(uint *)(frame + 40))
#define local_11 (*(bool *)(frame + 47))
#define abStack_23 (*(byte (*)[11])(frame + 29))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000e4f0
 */

void recovered_1000e4f0(int in_ECX,uint in_EDX,char *param_3,int param_4)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  uint uVar6;

  if (param_4 == 0) {
    return;
  }
  local_18 = in_EDX;
  if (in_ECX == 0) {
    uVar4 = *(uint *)(param_4 + 0x10);
    if (uVar4 != 0) goto LAB_1000e5d4;
  }
  else {
    uVar4 = 0;
    do {
      uVar6 = uVar4;
      uVar4 = uVar6 + 1;
    } while (*(char *)(in_ECX + uVar6) != '\0');
    if (uVar4 < in_EDX) {
      *(undefined1 *)(in_ECX + -1 + uVar4) = 0x20;
      uVar6 = uVar4;
    }
    *(undefined1 *)(in_ECX + uVar6) = 0;
    uVar4 = 0;
    do {
      uVar6 = uVar4;
      uVar4 = uVar6 + 1;
    } while (*(char *)(in_ECX + uVar6) != '\0');
    if (param_3 != (char *)0x0) {
      cVar5 = *param_3;
      local_11 = cVar5 == '\0';
      if (in_EDX <= uVar6 + 1 || cVar5 == '\0') {
        uVar4 = uVar6;
      }
      else {
        do {
          param_3 = param_3 + 1;
          *(char *)(in_ECX + uVar6) = cVar5;
          cVar5 = *param_3;
          uVar4 = uVar6 + 1;
          if (cVar5 == '\0') break;
          uVar3 = uVar6 + 2;
          uVar6 = uVar4;
        } while (uVar3 < in_EDX);
      }
      *(undefined1 *)(in_ECX + uVar4) = 0;
    }
    uVar4 = 0;
    do {
      uVar6 = uVar4;
      uVar4 = uVar6 + 1;
    } while (*(char *)(in_ECX + uVar6) != '\0');
    if (uVar4 < in_EDX) {
      *(undefined1 *)(in_ECX + -1 + uVar4) = 0x3d;
      uVar6 = uVar4;
    }
    *(undefined1 *)(in_ECX + uVar6) = 0;
    uVar4 = *(uint *)(param_4 + 0x10);
    if (uVar4 == 0) {
      uVar4 = 0;
      do {
        pcVar1 = (char *)(in_ECX + uVar4);
        uVar4 = uVar4 + 1;
      } while (*pcVar1 != '\0');
      if (uVar4 < in_EDX) {
        *(undefined2 *)(in_ECX + -1 + uVar4) = 0x30;
      }
    }
    else {
LAB_1000e5d4:
      uVar6 = 0;
      do {
        abStack_23[uVar6 + 1] = (char)uVar4 + (char)(uVar4 / 10) * -10 | 0x30;
        uVar3 = uVar6 + 1;
        if (8 < uVar6) break;
        bVar2 = 9 < uVar4;
        uVar6 = uVar3;
        uVar4 = uVar4 / 10;
      } while (bVar2);
LAB_1000e616:
      do {
        uVar4 = uVar3 - 1;
        if (in_ECX == 0) {
          uVar3 = uVar4;
          if (uVar4 == 0) goto LAB_1000e6a9;
          goto LAB_1000e616;
        }
        uVar6 = 0;
        do {
          pcVar1 = (char *)(in_ECX + uVar6);
          uVar6 = uVar6 + 1;
        } while (*pcVar1 != '\0');
        if (uVar6 < local_18) {
          *(byte *)(in_ECX + -1 + uVar6) = abStack_23[uVar3];
          *(undefined1 *)(in_ECX + uVar6) = 0;
        }
        uVar3 = uVar4;
      } while (uVar4 != 0);
      if (in_ECX == 0) goto LAB_1000e6a9;
    }
    uVar4 = 0;
    do {
      uVar6 = uVar4;
      uVar4 = uVar6 + 1;
    } while (*(char *)(in_ECX + uVar6) != '\0');
    if (uVar4 < local_18) {
      *(undefined1 *)(in_ECX + -1 + uVar4) = 0x78;
      uVar6 = uVar4;
    }
    *(undefined1 *)(in_ECX + uVar6) = 0;
  }
LAB_1000e6a9:
  if (*(uint *)(param_4 + 0x14) == 0) {
    if (in_ECX == 0) goto LAB_1000e789;
    uVar4 = 0;
    do {
      pcVar1 = (char *)(in_ECX + uVar4);
      uVar4 = uVar4 + 1;
    } while (*pcVar1 != '\0');
    if (uVar4 < local_18) {
      *(undefined2 *)(in_ECX + -1 + uVar4) = 0x30;
    }
  }
  else {
    uVar4 = 0;
    uVar6 = *(uint *)(param_4 + 0x14);
    do {
      abStack_23[uVar4 + 1] = (char)uVar6 + (char)(uVar6 / 10) * -10 | 0x30;
      uVar3 = uVar4 + 1;
      if (8 < uVar4) break;
      bVar2 = 9 < uVar6;
      uVar4 = uVar3;
      uVar6 = uVar6 / 10;
    } while (bVar2);
LAB_1000e6f6:
    do {
      uVar4 = uVar3 - 1;
      if (in_ECX == 0) {
        uVar3 = uVar4;
        if (uVar4 == 0) goto LAB_1000e789;
        goto LAB_1000e6f6;
      }
      uVar6 = 0;
      do {
        pcVar1 = (char *)(in_ECX + uVar6);
        uVar6 = uVar6 + 1;
      } while (*pcVar1 != '\0');
      if (uVar6 < local_18) {
        *(byte *)(in_ECX + -1 + uVar6) = abStack_23[uVar3];
        *(undefined1 *)(in_ECX + uVar6) = 0;
      }
      uVar3 = uVar4;
    } while (uVar4 != 0);
    if (in_ECX == 0) goto LAB_1000e789;
  }
  uVar4 = 0;
  do {
    uVar6 = uVar4;
    uVar4 = uVar6 + 1;
  } while (*(char *)(in_ECX + uVar6) != '\0');
  if (uVar4 < local_18) {
    *(undefined1 *)(in_ECX + -1 + uVar4) = 0x78;
    uVar6 = uVar4;
  }
  *(undefined1 *)(in_ECX + uVar6) = 0;
LAB_1000e789:
  if (*(uint *)(param_4 + 0x18) == 0) {
    if (in_ECX != 0) {
      uVar4 = 0;
      do {
        pcVar1 = (char *)(in_ECX + uVar4);
        uVar4 = uVar4 + 1;
      } while (*pcVar1 != '\0');
      if (uVar4 < local_18) {
        *(undefined2 *)(in_ECX + -1 + uVar4) = 0x30;
      }
    }
  }
  else {
    uVar4 = 0;
    uVar6 = *(uint *)(param_4 + 0x18);
    do {
      abStack_23[uVar4 + 1] = (char)uVar6 + (char)(uVar6 / 10) * -10 | 0x30;
      uVar3 = uVar4 + 1;
      if (8 < uVar4) break;
      bVar2 = 9 < uVar6;
      uVar4 = uVar3;
      uVar6 = uVar6 / 10;
    } while (bVar2);
    do {
      if (in_ECX != 0) {
        uVar4 = 0;
        do {
          pcVar1 = (char *)(in_ECX + uVar4);
          uVar4 = uVar4 + 1;
        } while (*pcVar1 != '\0');
        if (uVar4 < local_18) {
          *(byte *)(in_ECX + -1 + uVar4) = abStack_23[uVar3];
          *(undefined1 *)(in_ECX + uVar4) = 0;
        }
      }
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return;
}

#undef local_18
#undef local_11
#undef abStack_23

#define local_80 (*(uint *)(frame + 16))
#define local_7c (*(uint *)(frame + 20))
#define local_70 (*(undefined8 *)(frame + 32))
#define local_68 (*(int *)(frame + 40))
#define local_64 (*(uint *)(frame + 44))
#define local_60 (*(int *)(frame + 48))
#define local_5c (*(uint *)(frame + 52))
#define local_50 (*(uint *)(frame + 64))
#define local_44 (*(uint * *)(frame + 76))
#define local_40 (*(int *)(frame + 80))
#define local_34 (*(uint *)(frame + 92))
#define local_2c (*(int *)(frame + 100))
#define local_28 (*(uint * *)(frame + 104))
#define local_1c (*(uint * *)(frame + 116))
#define local_18 (*(int *)(frame + 120))
#define local_14 (*(int *)(frame + 124))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000e820
 */

undefined8 recovered_1000e820(int param_1,uint param_2)

{
  unsigned char frame[176] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  uint *puVar8;
  uint *puVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  undefined4 in_EDX;
  uint *puVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  uint *puVar20;
  bool bVar21;

  uVar7 = 0;
  puVar13 = (uint *)CONCAT31((int3)((uint)in_EDX >> 8),param_2 == 0 || param_1 == 0);
  if (param_2 != 0 && param_1 != 0) {
    bVar21 = false;
    local_50 = 0;
    do {
      iVar1 = param_1 + local_50 * 0x70;
      iVar14 = *(int *)(param_1 + local_50 * 0x70);
      if (iVar14 == 3) {
        if (((*(int *)(iVar1 + 0x20) != 1) || (uVar7 = *(uint *)(iVar1 + 0x14), uVar7 == 0)) ||
           (uVar19 = *(uint *)(iVar1 + 0x18), uVar19 == 0)) break;
        uVar4 = (uint)(*(uint *)(iVar1 + 0x1c) < uVar7 * 4);
        uVar16 = -(uVar7 >> 0x1e);
        puVar13 = (uint *)(uVar16 - uVar4);
        if (uVar7 >> 0x1e != 0 || uVar16 < uVar4) break;
        uVar4 = *(uint *)(iVar1 + 0x38);
        lVar6 = (ulonglong)uVar19 * (ulonglong)*(uint *)(iVar1 + 0x1c);
        puVar13 = (uint *)((ulonglong)lVar6 >> 0x20);
        if (((*(uint *)(iVar1 + 0x10) != 0) &&
            (puVar13 != (uint *)0x0 ||
             (uint)-(int)puVar13 < (uint)(*(uint *)(iVar1 + 0x10) < (uint)lVar6))) ||
           ((*(int *)(iVar1 + 8) == 0 || (*(int *)(iVar1 + 0xc) != 0)))) break;
        iVar14 = *(int *)(iVar1 + 0x40);
        iVar18 = *(int *)(iVar1 + 0x50);
        uVar16 = iVar18 - iVar14;
        iVar10 = iVar18;
        if (iVar14 <= iVar18) {
          iVar10 = iVar14;
        }
        iVar11 = iVar18;
        if (uVar16 == 0 || iVar18 < iVar14) {
          iVar11 = iVar14;
        }
        puVar9 = *(uint **)(iVar1 + 0x44);
        puVar2 = *(uint **)(iVar1 + 0x54);
        uVar17 = (int)puVar2 - (int)puVar9;
        puVar20 = puVar2;
        if ((int)puVar9 <= (int)puVar2) {
          puVar20 = puVar9;
        }
        puVar13 = puVar2;
        if (uVar17 == 0 || (int)puVar2 < (int)puVar9) {
          puVar13 = puVar9;
        }
        iVar3 = *(int *)(iVar1 + 0x60);
        local_2c = iVar3;
        if (iVar10 <= iVar3) {
          local_2c = iVar10;
        }
        puVar8 = *(uint **)(iVar1 + 100);
        local_28 = puVar8;
        if ((int)puVar20 <= (int)puVar8) {
          local_28 = puVar20;
        }
        local_40 = iVar3;
        if (iVar3 <= iVar11) {
          local_40 = iVar11;
        }
        local_44 = puVar8;
        if ((int)puVar8 <= (int)puVar13) {
          local_44 = puVar13;
        }
        if (((-1 < local_40) && (-1 < (int)local_44)) &&
           ((local_2c < (int)uVar7 && ((int)local_28 < (int)uVar19)))) {
          if (local_2c < 1) {
            local_2c = 0;
          }
          if ((int)local_28 < 1) {
            local_28 = (uint *)0x0;
          }
          if ((int)uVar7 <= local_40) {
            local_40 = uVar7 - 1;
          }
          if ((int)uVar19 <= (int)local_44) {
            local_44 = (uint *)(uVar19 - 1);
          }
          lVar6 = (longlong)(iVar3 - iVar14) * (longlong)(int)uVar17;
          lVar5 = (longlong)((int)puVar8 - (int)puVar9) * (longlong)(int)uVar16;
          puVar13 = (uint *)((uint)((ulonglong)lVar5 >> 0x20) ^ (uint)((ulonglong)lVar6 >> 0x20));
          if (((int)lVar5 != (int)lVar6 || puVar13 != (uint *)0x0) &&
             ((int)local_28 <= (int)local_44)) {
            uVar7 = (int)puVar8 - (int)puVar2;
            iVar10 = iVar3 - iVar18;
            uVar19 = (int)puVar9 - (int)puVar8;
            local_70 = (longlong)(local_2c - iVar14) * (longlong)(int)uVar17 -
                       (longlong)((int)local_28 - (int)puVar9) * (longlong)(int)uVar16;
            lVar6 = (longlong)(local_2c - iVar3) * (longlong)(int)uVar19 -
                    (longlong)((int)local_28 - (int)puVar8) * (longlong)(iVar14 - iVar3);
            lVar5 = (longlong)(local_2c - iVar18) * (longlong)(int)uVar7 -
                    (longlong)((int)local_28 - (int)puVar2) * (longlong)iVar10;
            iVar18 = *(int *)(iVar1 + 8) + local_2c * 4;
            do {
              local_60 = (int)((ulonglong)lVar5 >> 0x20);
              local_5c = (uint)lVar5;
              local_68 = (int)((ulonglong)lVar6 >> 0x20);
              local_64 = (uint)lVar6;
              if (local_2c <= local_40) {
                iVar11 = *(int *)(iVar1 + 0x1c) * (int)local_28;
                puVar13 = (uint *)(iVar18 + iVar11);
                uVar12 = iVar11 + iVar18;
                local_7c = (uint)local_70;
                local_80 = local_64;
                local_18 = local_68;
                local_34 = local_5c;
                iVar11 = (local_40 - local_2c) + 1;
                iVar15 = PF_PART4(local_70, 4);
                do {
                  if ((((-1 < local_60) && (-1 < local_18)) && (-1 < iVar15)) ||
                     ((((SBORROW4(0,local_60) != SBORROW4(-local_60,(uint)(local_34 != 0))) ==
                        (int)(-local_60 - (uint)(local_34 != 0)) < 0 &&
                       ((SBORROW4(0,local_18) != SBORROW4(-local_18,(uint)(local_80 != 0))) ==
                        (int)(-local_18 - (uint)(local_80 != 0)) < 0)) &&
                      ((SBORROW4(0,iVar15) != SBORROW4(-iVar15,(uint)(local_7c != 0))) ==
                       (int)(-iVar15 - (uint)(local_7c != 0)) < 0)))) {
                    if ((uVar12 & 3) == 0) {
                      *puVar13 = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 |
                                 uVar4 << 0x18;
                    }
                    else {
                      *(char *)puVar13 = (char)(uVar4 >> 0x18);
                      *(char *)((int)puVar13 + 1) = (char)(uVar4 >> 0x10);
                      *(char *)((int)puVar13 + 2) = (char)(uVar4 >> 8);
                      *(char *)((int)puVar13 + 3) = (char)uVar4;
                    }
                  }
                  bVar21 = CARRY4(local_34,uVar7);
                  local_34 = local_34 + uVar7;
                  local_60 = local_60 + ((int)uVar7 >> 0x1f) + (uint)bVar21;
                  bVar21 = CARRY4(local_80,uVar19);
                  local_80 = local_80 + uVar19;
                  local_18 = local_18 + ((int)uVar19 >> 0x1f) + (uint)bVar21;
                  bVar21 = CARRY4(local_7c,uVar17);
                  local_7c = local_7c + uVar17;
                  iVar15 = iVar15 + ((int)uVar17 >> 0x1f) + (uint)bVar21;
                  puVar13 = puVar13 + 1;
                  uVar12 = uVar12 + 4;
                  iVar11 = iVar11 + -1;
                } while (iVar11 != 0);
              }
              puVar13 = (uint *)(iVar10 >> 0x1f);
              lVar5 = lVar5 - iVar10;
              lVar6 = lVar6 - (iVar14 - iVar3);
              local_70 = CONCAT44((PF_PART4(local_70, 4) - ((int)uVar16 >> 0x1f)) -
                                  (uint)((uint)local_70 < uVar16),(uint)local_70 - uVar16);
              bVar21 = local_28 != local_44;
              local_28 = (uint *)((int)local_28 + 1);
            } while (bVar21);
          }
        }
      }
      else if (iVar14 == 2) {
        if (((*(int *)(iVar1 + 0x20) != 1) ||
            (puVar9 = *(uint **)(iVar1 + 0x14), puVar9 == (uint *)0x0)) ||
           (puVar2 = *(uint **)(iVar1 + 0x18), puVar2 == (uint *)0x0)) break;
        uVar7 = (uint)(*(uint *)(iVar1 + 0x1c) < (uint)((int)puVar9 * 4));
        uVar19 = -((uint)puVar9 >> 0x1e);
        puVar13 = (uint *)(uVar19 - uVar7);
        if ((uint)puVar9 >> 0x1e != 0 || uVar19 < uVar7) break;
        local_14 = *(int *)(iVar1 + 0x28);
        puVar20 = *(uint **)(iVar1 + 0x2c);
        lVar6 = ZEXT48(puVar2) * (ulonglong)*(uint *)(iVar1 + 0x1c);
        iVar14 = (int)((ulonglong)lVar6 >> 0x20);
        puVar13 = *(uint **)(iVar1 + 0x30);
        uVar7 = *(uint *)(iVar1 + 0x38);
        if (((((*(uint *)(iVar1 + 0x10) != 0) &&
              (iVar14 != 0 || (uint)-iVar14 < (uint)(*(uint *)(iVar1 + 0x10) < (uint)lVar6))) ||
             (iVar14 = *(int *)(iVar1 + 8), iVar14 == 0)) ||
            ((*(int *)(iVar1 + 0x34) < 1 || ((int)puVar13 < 1)))) || (*(int *)(iVar1 + 0xc) != 0))
        break;
        local_1c = (uint *)((int)puVar13 + local_14);
        puVar13 = puVar9;
        if (((0 < (int)local_1c) &&
            (puVar8 = (uint *)(*(int *)(iVar1 + 0x34) + (int)puVar20), 0 < (int)puVar8)) &&
           ((local_14 < (int)puVar9 && ((int)puVar20 < (int)puVar2)))) {
          if (local_14 < 1) {
            local_14 = 0;
          }
          if ((int)puVar20 < 1) {
            puVar20 = (uint *)0x0;
          }
          if ((int)puVar9 <= (int)local_1c) {
            local_1c = puVar9;
          }
          if ((int)puVar2 <= (int)puVar8) {
            puVar8 = puVar2;
          }
          puVar13 = puVar2;
          if ((int)puVar20 < (int)puVar8) {
            puVar13 = (uint *)(uVar7 >> 0x10);
            do {
              puVar9 = (uint *)(*(int *)(iVar1 + 0x1c) * (int)puVar20 + iVar14 + local_14 * 4);
              if (((uint)puVar9 & 3) == 0) {
                if (local_14 < (int)local_1c) {
                  iVar18 = (int)local_1c - local_14;
                  do {
                    *puVar9 = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 |
                              uVar7 << 0x18;
                    puVar9 = puVar9 + 1;
                    iVar18 = iVar18 + -1;
                  } while (iVar18 != 0);
                }
              }
              else {
                iVar18 = (int)local_1c - local_14;
                if (local_14 < (int)local_1c) {
                  do {
                    if (puVar9 != (uint *)0x0) {
                      *(char *)puVar9 = (char)(uVar7 >> 0x18);
                      *(char *)((int)puVar9 + 1) = (char)(uVar7 >> 0x10);
                      *(char *)((int)puVar9 + 2) = (char)(uVar7 >> 8);
                      *(char *)((int)puVar9 + 3) = (char)uVar7;
                    }
                    puVar9 = puVar9 + 1;
                    iVar18 = iVar18 + -1;
                  } while (iVar18 != 0);
                }
              }
              puVar20 = (uint *)((int)puVar20 + 1);
            } while (puVar20 != puVar8);
          }
        }
      }
      else {
        if ((((iVar14 != 1) || (*(int *)(iVar1 + 0x20) != 1)) ||
            (uVar7 = *(uint *)(iVar1 + 0x14), uVar7 == 0)) ||
           (uVar19 = *(uint *)(iVar1 + 0x18), uVar19 == 0)) break;
        uVar4 = (uint)(*(uint *)(iVar1 + 0x1c) < uVar7 * 4);
        uVar16 = -(uVar7 >> 0x1e);
        puVar13 = (uint *)(uVar16 - uVar4);
        if (uVar7 >> 0x1e != 0 || uVar16 < uVar4) break;
        uVar4 = *(uint *)(iVar1 + 0x38);
        lVar6 = (ulonglong)*(uint *)(iVar1 + 0x1c) * (ulonglong)uVar19;
        puVar13 = (uint *)((ulonglong)lVar6 >> 0x20);
        if ((((*(uint *)(iVar1 + 0x10) != 0) &&
             (puVar13 != (uint *)0x0 ||
              (uint)-(int)puVar13 < (uint)(*(uint *)(iVar1 + 0x10) < (uint)lVar6))) ||
            ((iVar14 = *(int *)(iVar1 + 8), iVar14 == 0 || (((int)uVar19 < 1 || ((int)uVar7 < 1)))))
            ) || (*(int *)(iVar1 + 0xc) != 0)) break;
        uVar16 = 0;
        do {
          puVar13 = (uint *)(*(int *)(iVar1 + 0x1c) * uVar16 + iVar14);
          if (((uint)puVar13 & 3) == 0) {
            uVar17 = uVar7;
            do {
              *puVar13 = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 |
                         uVar4 << 0x18;
              puVar13 = puVar13 + 1;
              uVar17 = uVar17 - 1;
            } while (uVar17 != 0);
          }
          else {
            uVar17 = uVar7;
            do {
              if (puVar13 != (uint *)0x0) {
                *(char *)puVar13 = (char)(uVar4 >> 0x18);
                *(char *)((int)puVar13 + 1) = (char)(uVar4 >> 0x10);
                *(char *)((int)puVar13 + 2) = (char)(uVar4 >> 8);
                *(char *)((int)puVar13 + 3) = (char)uVar4;
              }
              puVar13 = puVar13 + 1;
              uVar17 = uVar17 - 1;
            } while (uVar17 != 0);
          }
          uVar16 = uVar16 + 1;
        } while (uVar16 != uVar19);
      }
      local_50 = local_50 + 1;
      bVar21 = param_2 <= local_50;
    } while (local_50 != param_2);
    uVar7 = (uint)bVar21;
  }
  return CONCAT44(puVar13,uVar7);
}

#undef local_80
#undef local_7c
#undef local_70
#undef local_68
#undef local_64
#undef local_60
#undef local_5c
#undef local_50
#undef local_44
#undef local_40
#undef local_34
#undef local_2c
#undef local_28
#undef local_1c
#undef local_18
#undef local_14

void bzero(void *p,size_t n){volatile unsigned char *d=p;while(n--)*d++=0;}
void __bzero(void *p,size_t n){bzero(p,n);}
void *memset(void *p,int value,size_t n){volatile unsigned char *d=p;while(n--)*d++=value;return p;}
