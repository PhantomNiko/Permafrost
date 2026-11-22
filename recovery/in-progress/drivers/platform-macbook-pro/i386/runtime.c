/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef LAB_10010000
#define LAB_10010000 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x10e2U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100012a0
 */

void * recovered_100012a0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return &LAB_10010000;
}

#undef LAB_10010000

#undef DAT_1000f130
#define DAT_1000f130 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x212U)))
#undef DAT_1000f265
#define DAT_1000f265 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x347U)))
#undef DAT_1000f26a
#define DAT_1000f26a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x34cU)))
#undef DAT_1000f26e
#define DAT_1000f26e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x350U)))
#undef DAT_1000f272
#define DAT_1000f272 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x354U)))
#undef DAT_1000f277
#define DAT_1000f277 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x359U)))
#undef DAT_1000f27c
#define DAT_1000f27c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x35eU)))
#undef DAT_1000f2de
#define DAT_1000f2de (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3c0U)))
#undef DAT_1000f320
#define DAT_1000f320 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x402U)))
#undef DAT_1000f399
#define DAT_1000f399 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x47bU)))
#undef DAT_1000f3a0
#define DAT_1000f3a0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x482U)))
#undef DAT_1000f4ae
#define DAT_1000f4ae (*(uint8_t *)(((uintptr_t)pf_module_state + 0x590U)))
#undef DAT_10011000
#define DAT_10011000 (*(int * *)(((uintptr_t)pf_module_state + 0x20e2U)))
#undef str_1000effc
#define str_1000effc (*(char (*)[1])(((uintptr_t)pf_module_state + 0xdeU)))
#undef str_1000f01a
#define str_1000f01a (*(char (*)[1])(((uintptr_t)pf_module_state + 0xfcU)))
#undef str_1000f03b
#define str_1000f03b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x11dU)))
#undef str_1000f05b
#define str_1000f05b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x13dU)))
#undef str_1000f080
#define str_1000f080 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x162U)))
#undef str_1000f0a6
#define str_1000f0a6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x188U)))
#undef str_1000f0cb
#define str_1000f0cb (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1adU)))
#undef str_1000f0e8
#define str_1000f0e8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1caU)))
#undef str_1000f138
#define str_1000f138 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x21aU)))
#undef str_1000f241
#define str_1000f241 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x323U)))
#undef str_1000f280
#define str_1000f280 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x362U)))
#undef str_1000f286
#define str_1000f286 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x368U)))
#undef str_1000f2e3
#define str_1000f2e3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3c5U)))
#undef str_1000f2e9
#define str_1000f2e9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3cbU)))
#undef str_1000f2fd
#define str_1000f2fd (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3dfU)))
#undef str_1000f309
#define str_1000f309 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3ebU)))
#undef str_1000f313
#define str_1000f313 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3f5U)))
#undef str_1000f325
#define str_1000f325 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x407U)))
#undef str_1000f331
#define str_1000f331 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x413U)))
#undef str_1000f35f
#define str_1000f35f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x441U)))
#undef str_1000f369
#define str_1000f369 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x44bU)))
#undef str_1000f37e
#define str_1000f37e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x460U)))
#undef str_1000f38b
#define str_1000f38b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x46dU)))
#undef str_1000f3a9
#define str_1000f3a9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x48bU)))
#undef str_1000f3b3
#define str_1000f3b3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x495U)))
#undef str_1000f3bf
#define str_1000f3bf (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4a1U)))
#undef str_1000f3d1
#define str_1000f3d1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4b3U)))
#undef str_1000f3e0
#define str_1000f3e0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4c2U)))
#undef str_1000f3fe
#define str_1000f3fe (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4e0U)))
#undef str_1000f40c
#define str_1000f40c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4eeU)))
#undef str_1000f417
#define str_1000f417 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4f9U)))
#undef str_1000f428
#define str_1000f428 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x50aU)))
#undef str_1000f438
#define str_1000f438 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x51aU)))
#undef str_1000f442
#define str_1000f442 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x524U)))
#undef str_1000f44b
#define str_1000f44b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x52dU)))
#undef str_1000f457
#define str_1000f457 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x539U)))
#undef str_1000f46e
#define str_1000f46e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x550U)))
#undef str_1000f496
#define str_1000f496 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x578U)))
#undef str_1000f49d
#define str_1000f49d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x57fU)))
#undef str_1000f4a3
#define str_1000f4a3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x585U)))
#undef str_1000f4b4
#define str_1000f4b4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x596U)))
#undef str_1000f4cc
#define str_1000f4cc (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5aeU)))
#undef str_1000f4e7
#define str_1000f4e7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5c9U)))
#undef str_1000f513
#define str_1000f513 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5f5U)))
#undef str_1000f533
#define str_1000f533 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x615U)))
#undef str_1000f564
#define str_1000f564 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x646U)))
#undef str_1000f571
#define str_1000f571 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x653U)))
#undef str_1000f583
#define str_1000f583 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x665U)))
#undef str_1000f58d
#define str_1000f58d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x66fU)))
#undef str_1000f59a
#define str_1000f59a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x67cU)))
#undef str_1000f5a7
#define str_1000f5a7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x689U)))
#undef str_1000f5b8
#define str_1000f5b8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x69aU)))
#undef str_1000f5c8
#define str_1000f5c8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6aaU)))
#undef str_1000f5d5
#define str_1000f5d5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6b7U)))
#undef str_1000f5e2
#define str_1000f5e2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6c4U)))
#undef str_1000f5ee
#define str_1000f5ee (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6d0U)))
#undef str_1000f5f7
#define str_1000f5f7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6d9U)))
#undef str_1000f60a
#define str_1000f60a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6ecU)))
#undef str_1000f62f
#define str_1000f62f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x711U)))
#undef str_1000fa75
#define str_1000fa75 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb57U)))
#undef str_1000faa3
#define str_1000faa3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb85U)))
#undef str_1000faab
#define str_1000faab (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb8dU)))
#undef str_1000fab3
#define str_1000fab3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb95U)))
#undef str_1000fac2
#define str_1000fac2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xba4U)))
#undef str_1000fb00
#define str_1000fb00 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xbe2U)))
#undef str_1000fb27
#define str_1000fb27 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc09U)))
#undef str_1000fb48
#define str_1000fb48 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc2aU)))
#undef str_1000fb73
#define str_1000fb73 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc55U)))
#undef str_1000fb8a
#define str_1000fb8a (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc6cU)))
#undef str_1000fba7
#define str_1000fba7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc89U)))
#undef str_1000fbbf
#define str_1000fbbf (*(char (*)[1])(((uintptr_t)pf_module_state + 0xca1U)))
#undef str_1000fbdd
#define str_1000fbdd (*(char (*)[1])(((uintptr_t)pf_module_state + 0xcbfU)))
#undef str_1000fbfc
#define str_1000fbfc (*(char (*)[1])(((uintptr_t)pf_module_state + 0xcdeU)))
#undef str_1000fc0e
#define str_1000fc0e (*(char (*)[1])(((uintptr_t)pf_module_state + 0xcf0U)))
#undef str_1000fc30
#define str_1000fc30 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xd12U)))
#undef str_1000fc4c
#define str_1000fc4c (*(char (*)[1])(((uintptr_t)pf_module_state + 0xd2eU)))
#undef str_1000fc70
#define str_1000fc70 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xd52U)))
#undef str_1000fc85
#define str_1000fc85 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xd67U)))
#undef str_1000fc9b
#define str_1000fc9b (*(char (*)[1])(((uintptr_t)pf_module_state + 0xd7dU)))
#undef str_1000fcb4
#define str_1000fcb4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xd96U)))
#undef str_1000fd08
#define str_1000fd08 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xdeaU)))
#undef str_1000fd14
#define str_1000fd14 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xdf6U)))
#undef str_1000fd61
#define str_1000fd61 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xe43U)))
#undef str_1000fd86
#define str_1000fd86 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xe68U)))
#undef str_1000fd9d
#define str_1000fd9d (*(char (*)[1])(((uintptr_t)pf_module_state + 0xe7fU)))
#undef str_1000fe0c
#define str_1000fe0c (*(char (*)[1])(((uintptr_t)pf_module_state + 0xeeeU)))
#undef str_1000fe1b
#define str_1000fe1b (*(char (*)[1])(((uintptr_t)pf_module_state + 0xefdU)))
#undef str_1000fe2e
#define str_1000fe2e (*(char (*)[1])(((uintptr_t)pf_module_state + 0xf10U)))
#undef str_1000fe6a
#define str_1000fe6a (*(char (*)[1])(((uintptr_t)pf_module_state + 0xf4cU)))
#undef str_1000fe91
#define str_1000fe91 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xf73U)))
#undef str_1000feac
#define str_1000feac (*(char (*)[1])(((uintptr_t)pf_module_state + 0xf8eU)))
#undef str_1000fef7
#define str_1000fef7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xfd9U)))
#undef str_1000ff20
#define str_1000ff20 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1002U)))
#undef str_1000ff39
#define str_1000ff39 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x101bU)))
#undef str_1000ff55
#define str_1000ff55 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1037U)))
#undef str_1000ff60
#define str_1000ff60 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1042U)))
#undef str_1000ff8a
#define str_1000ff8a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x106cU)))
#define local_610 (*(undefined1 (*)[100])(frame + 16))
#define local_5ac (*(uint *)(frame + 116))
#define auStack_12c (*(undefined1 (*)[240])(frame + 1268))
#define local_568 (*(undefined2 *)(frame + 184))
#define local_268 (*(uint *)(frame + 952))
#define local_264 (*(undefined4 *)(frame + 956))
#define local_260 (*(undefined4 *)(frame + 960))
#define local_25c (*(uint *)(frame + 964))
#define local_258 (*(uint *)(frame + 968))
#define local_254 (*(uint *)(frame + 972))
#define local_250 (*(uint *)(frame + 976))
#define local_24c (*(uint *)(frame + 980))
#define local_248 (*(uint *)(frame + 984))
#define local_244 (*(uint *)(frame + 988))
#define local_240 (*(uint *)(frame + 992))
#define local_23c (*(uint *)(frame + 996))
#define local_238 (*(uint *)(frame + 1000))
#define local_234 (*(uint *)(frame + 1004))
#define local_230 (*(undefined4 *)(frame + 1008))
#define local_22c (*(undefined4 *)(frame + 1012))
#define local_228 (*(undefined4 *)(frame + 1016))
#define local_224 (*(undefined4 *)(frame + 1020))
#define local_220 (*(int *)(frame + 1024))
#define local_21c (*(int *)(frame + 1028))
#define local_218 (*(int *)(frame + 1032))
#define local_214 (*(undefined1 * *)(frame + 1036))
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
#define cStack_569 (*(char *)(frame + 183))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100012b0
 */

int recovered_100012b0(int *api)

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
  PF_PART1(local_568, 0) = 0;
  uVar11 = 0;
  do {
    uVar2 = uVar11;
    uVar11 = uVar2 + 1;
  } while (*(char *)((int)&local_568 + uVar2) != '\0');
  if (uVar2 + 1 < 0x70) {
    cVar6 = 'a';
    pcVar5 = str_1000effc;
    do {
      pcVar5 = pcVar5 + 1;
      *(char *)((int)&local_568 + uVar2) = cVar6;
      uVar2 = uVar2 + 1;
      cVar6 = *pcVar5;
      if (cVar6 == '\0') break;
    } while (uVar2 < 0x6f);
  }
  *(undefined1 *)((int)&local_568 + uVar2) = 0;
  uVar11 = 0;
  do {
    uVar2 = uVar11;
    uVar11 = uVar2 + 1;
  } while (*(char *)((int)&local_568 + uVar2) != '\0');
  if (uVar2 + 1 < 0x70) {
    cVar6 = ':';
    pcVar5 = &DAT_1000f130;
    do {
      *(char *)((int)&local_568 + uVar2) = cVar6;
      uVar2 = uVar2 + 1;
      cVar6 = *pcVar5;
      if (cVar6 == '\0') break;
      pcVar5 = pcVar5 + 1;
    } while (uVar2 < 0x6f);
  }
  *(undefined1 *)((int)&local_568 + uVar2) = 0;
  uVar11 = api[1];
  if (uVar11 < 1000000) {
    if (uVar11 == 0) {
      uVar11 = 0;
      do {
        uVar2 = uVar11;
        uVar11 = uVar2 + 1;
      } while (*(char *)((int)&local_568 + uVar2) != '\0');
      if (uVar2 + 1 < 0x70) {
        *(undefined2 *)((int)&local_568 + uVar2) = 0x30;
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
        } while (*(char *)((int)&local_568 + uVar2) != '\0');
        if (uVar2 + 1 < 0x70) {
          *(char *)((int)&local_568 + uVar2) = local_1ac[iVar3];
          *(undefined1 *)((int)&local_568 + uVar2 + 1) = 0;
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
      } while (*(char *)((int)&local_568 + uVar2) != '\0');
      if (uVar2 + 1 < 0x70) {
        *(char *)((int)&local_568 + uVar2) = local_1ac[iVar3];
        *(undefined1 *)((int)&local_568 + uVar2 + 1) = 0;
      }
    } while (uVar9 != 0);
    uVar10 = 0;
    do {
      uVar2 = uVar10;
      uVar10 = uVar2 + 1;
    } while (*(char *)((int)&local_568 + uVar2) != '\0');
    if (uVar10 < 0x70) {
      *(undefined1 *)((int)&local_568 + uVar2) = 0x2e;
      uVar2 = uVar10;
    }
    *(undefined1 *)((int)&local_568 + uVar2) = 0;
    uVar10 = local_14;
    uVar2 = local_18;
    uVar11 = (uVar11 / 1000) % 1000;
    if (uVar11 == 0) {
      uVar11 = 0;
      do {
        uVar9 = uVar11;
        uVar11 = uVar9 + 1;
      } while (*(char *)((int)&local_568 + uVar9) != '\0');
      if (uVar9 + 1 < 0x70) {
        *(undefined2 *)((int)&local_568 + uVar9) = 0x30;
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
        } while (*(char *)((int)&local_568 + uVar9) != '\0');
        if (uVar9 + 1 < 0x70) {
          *(char *)((int)&local_568 + uVar9) = local_1ac[iVar3];
          *(undefined1 *)((int)&local_568 + uVar9 + 1) = 0;
        }
      } while (uVar13 != 0);
    }
    if (uVar2 != 0) {
      uVar10 = 0;
      do {
        uVar11 = uVar10;
        uVar10 = uVar11 + 1;
      } while (*(char *)((int)&local_568 + uVar11) != '\0');
      if (uVar10 < 0x70) {
        *(undefined1 *)((int)&local_568 + uVar11) = 0x2e;
        uVar11 = uVar10;
      }
      *(undefined1 *)((int)&local_568 + uVar11) = 0;
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
        } while (*(char *)((int)&local_568 + uVar2) != '\0');
        if (uVar2 + 1 < 0x70) {
          *(char *)((int)&local_568 + uVar2) = local_1ac[iVar3];
          *(undefined1 *)((int)&local_568 + uVar2 + 1) = 0;
        }
      } while (uVar9 != 0);
    }
  }
  uVar11 = 0;
  do {
    uVar2 = uVar11;
    uVar11 = uVar2 + 1;
  } while (*(char *)((int)&local_568 + uVar2) != '\0');
  if (uVar2 + 1 < 0x70) {
    cVar6 = ' ';
    pcVar5 = str_1000f138;
    do {
      pcVar5 = pcVar5 + 1;
      *(char *)((int)&local_568 + uVar2) = cVar6;
      uVar2 = uVar2 + 1;
      cVar6 = *pcVar5;
      if (cVar6 == '\0') break;
    } while (uVar2 < 0x6f);
  }
  *(undefined1 *)((int)&local_568 + uVar2) = 0;
  if ((uVar10 < 0x2c) || ((code *)api[10] == (code *)0x0)) {
LAB_10001732:
    bVar14 = true;
    if ((0x3f < (uint)api[2]) && ((code *)api[0xf] != (code *)0x0)) {
      iVar3 = (*(code *)api[0xf])(local_610);
      bVar14 = iVar3 == 0;
    }
  }
  else {
    (*(code *)api[10])(&local_568);
    bVar14 = true;
    if (*api == 0x54584b57) goto LAB_10001732;
  }
  local_268 = 0;
  local_264 = 0;
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
  local_214 = (undefined1 *)0x0;
  if (!bVar14) {
    local_214 = local_610;
  }
  recovered_10007fd0((int)local_214,(uint *)0x0,(undefined1 *)&local_568);
  if ((code *)api[3] == (code *)0x0) {
    return 0;
  }
  iVar3 = (*(code *)api[3])(str_1000f01a,str_1000f03b,&local_568);
  if (iVar3 == 0) {
    return 0;
  }
  if ((code *)api[4] != (code *)0x0) {
    if (local_5ac < 3) {
      local_5ac = 2;
    }
    else if (0x3f < local_5ac) {
      local_5ac = 0x40;
    }
    uVar10 = 2;
    if (!bVar14) {
      uVar10 = local_5ac;
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
      if ((local_1bc & 4) == 0) goto LAB_10004a81;
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
          goto LAB_10004a08;
        }
        break;
      }
      if (((*api == 0x54584b57) && (0x33 < (uint)api[2])) && ((code *)api[0xc] != (code *)0x0)) {
        (*(code *)api[0xc])(uVar11);
      }
      uVar11 = uVar11 << (uVar11 < 0x1000 && 9 < uVar10);
      uVar10 = uVar10 + 1;
    } while (uVar10 != 0x18);
    goto LAB_100068a2;
  }
  uVar10 = 0;
  do {
    uVar11 = uVar10;
    uVar10 = uVar11 + 1;
  } while (*(char *)((int)&local_568 + uVar11) != '\0');
  if (uVar11 + 1 < 0x300) {
    cVar6 = ' ';
    pcVar5 = str_1000f2e9;
    do {
      pcVar5 = pcVar5 + 1;
      *(char *)((int)&local_568 + uVar11) = cVar6;
      uVar11 = uVar11 + 1;
      cVar6 = *pcVar5;
      if (cVar6 == '\0') break;
    } while (uVar11 < 0x2ff);
  }
  *(undefined1 *)((int)&local_568 + uVar11) = 0;
  goto LAB_1000196f;
  while( true ) {
    if ((local_1bc & 4) == 0) goto LAB_10004a81;
    if (((*api == 0x54584b57) && (0x33 < (uint)api[2])) && ((code *)api[0xc] != (code *)0x0)) {
      (*(code *)api[0xc])(uVar11);
    }
    uVar11 = uVar11 << (uVar11 < 0x1000 && 9 < uVar10);
    uVar10 = uVar10 + 1;
    if (uVar10 == 0x18) break;
LAB_10004a08:
    local_1bc = 0;
    if (((*api != 0x54584b57) || ((uint)api[2] < 0x58)) ||
       (((code *)api[0x15] == (code *)0x0 ||
        (iVar3 = (*(code *)api[0x15])(0x304,1,&local_1bc), iVar3 == 0)))) break;
  }
  goto LAB_100068a2;
  while( true ) {
    *(undefined1 *)((int)local_2c + local_18) = (undefined1)local_200[0];
    uVar10 = local_18 + 1;
    local_14 = CONCAT31((int3)(local_18 >> 8),2 < local_18);
    local_18 = uVar10;
    if (uVar10 == 4) break;
LAB_100056a2:
    local_200[0] = 0;
    uVar11 = 8;
    uVar10 = 0;
    while( true ) {
      local_1bc = 0;
      if (((*api != 0x54584b57) || ((uint)api[2] < 0x58)) ||
         (((code *)api[0x15] == (code *)0x0 ||
          (iVar3 = (*(code *)api[0x15])(0x304,1,&local_1bc), iVar3 == 0)))) goto LAB_1000680d;
      if ((local_1bc & 1) != 0) break;
      if (((*api == 0x54584b57) && (0x33 < (uint)api[2])) && ((code *)api[0xc] != (code *)0x0)) {
        (*(code *)api[0xc])(uVar11);
      }
      uVar11 = uVar11 << (uVar11 < 0x1000 && 9 < uVar10);
      uVar10 = uVar10 + 1;
      if (uVar10 == 0x18) goto LAB_1000680d;
    }
    if (((*api != 0x54584b57) || ((uint)api[2] < 0x58)) ||
       (((code *)api[0x15] == (code *)0x0 ||
        (iVar3 = (*(code *)api[0x15])(0x300,1,local_200), iVar3 == 0)))) {
LAB_1000680d:
      if ((local_14 & 1) == 0) goto LAB_100068a2;
      break;
    }
  }
  uVar10 = 0;
  do {
    uVar11 = uVar10;
    uVar10 = uVar11 + 1;
  } while (*(char *)((int)&local_568 + uVar11) != '\0');
  if (uVar11 + 1 < 0x300) {
    cVar6 = ' ';
    pcVar5 = str_1000f313;
    do {
      pcVar5 = pcVar5 + 1;
      *(char *)((int)&local_568 + uVar11) = cVar6;
      uVar11 = uVar11 + 1;
      cVar6 = *pcVar5;
      if (cVar6 == '\0') break;
    } while (uVar11 < 0x2ff);
  }
  local_14 = (local_2c[0] >> 8 & 0xff) << 0x10 | local_2c[0] << 0x18 |
             (local_2c[0] >> 0x10 & 0xff) << 8 | local_2c[0] >> 0x18;
  *(undefined1 *)((int)&local_568 + uVar11) = 0;
  uVar10 = 0;
  do {
    uVar11 = uVar10;
    uVar10 = uVar11 + 1;
  } while (*(char *)((int)&local_568 + uVar11) != '\0');
  if (uVar10 < 0x300) {
    *(undefined1 *)((int)&local_568 + uVar11) = 0x20;
    uVar11 = uVar10;
  }
  *(undefined1 *)((int)&local_568 + uVar11) = 0;
  uVar10 = 0;
  do {
    uVar11 = uVar10;
    uVar10 = uVar11 + 1;
  } while (*(char *)((int)&local_568 + uVar11) != '\0');
  if (uVar11 + 1 < 0x300) {
    cVar6 = 's';
    pcVar5 = &DAT_1000f320;
    do {
      *(char *)((int)&local_568 + uVar11) = cVar6;
      uVar11 = uVar11 + 1;
      cVar6 = *pcVar5;
      if (cVar6 == '\0') break;
      pcVar5 = pcVar5 + 1;
    } while (uVar11 < 0x2ff);
  }
  *(undefined1 *)((int)&local_568 + uVar11) = 0;
  uVar10 = 0;
  do {
    uVar11 = uVar10;
    uVar10 = uVar11 + 1;
  } while (*(char *)((int)&local_568 + uVar11) != '\0');
  if (uVar10 < 0x300) {
    *(undefined1 *)((int)&local_568 + uVar11) = 0x3d;
    uVar11 = uVar10;
  }
  *(undefined1 *)((int)&local_568 + uVar11) = 0;
  uVar10 = 0;
  do {
    uVar11 = uVar10;
    uVar10 = uVar11 + 1;
  } while (*(char *)((int)&local_568 + uVar11) != '\0');
  if (uVar11 + 1 < 0x300) {
    *(undefined2 *)((int)&local_568 + uVar11) = 0x30;
  }
  uVar10 = 0;
  do {
    uVar11 = uVar10;
    uVar10 = uVar11 + 1;
  } while (*(char *)((int)&local_568 + uVar11) != '\0');
  if (uVar11 + 1 < 0x300) {
    *(undefined2 *)((int)&local_568 + uVar11) = 0x30;
  }
  uVar10 = 0;
  do {
    uVar11 = uVar10;
    uVar10 = uVar11 + 1;
  } while (*(char *)((int)&local_568 + uVar11) != '\0');
  if (uVar11 + 1 < 0x300) {
    *(undefined2 *)((int)&local_568 + uVar11) = 0x30;
  }
  uVar10 = 0;
  do {
    uVar11 = uVar10;
    uVar10 = uVar11 + 1;
  } while (*(char *)((int)&local_568 + uVar11) != '\0');
  if (uVar11 + 1 < 0x300) {
    *(undefined2 *)((int)&local_568 + uVar11) = 0x30;
  }
  uVar10 = 0;
  do {
    uVar11 = uVar10;
    uVar10 = uVar11 + 1;
  } while (*(char *)((int)&local_568 + uVar11) != '\0');
  if (uVar11 + 1 < 0x300) {
    *(undefined2 *)((int)&local_568 + uVar11) = 0x30;
  }
  uVar10 = 0;
  do {
    uVar11 = uVar10;
    uVar10 = uVar11 + 1;
  } while (*(char *)((int)&local_568 + uVar11) != '\0');
  if (uVar11 + 1 < 0x300) {
    *(undefined2 *)((int)&local_568 + uVar11) = 0x33;
  }
  uVar10 = 0;
  do {
    uVar11 = uVar10;
    uVar10 = uVar11 + 1;
  } while (*(char *)((int)&local_568 + uVar11) != '\0');
  if (uVar11 + 1 < 0x300) {
    *(undefined2 *)((int)&local_568 + uVar11) = 0x30;
  }
  uVar10 = 0;
  do {
    uVar11 = uVar10;
    uVar10 = uVar11 + 1;
  } while (*(char *)((int)&local_568 + uVar11) != '\0');
  if (uVar11 + 1 < 0x300) {
    *(undefined2 *)((int)&local_568 + uVar11) = 0x30;
  }
  bVar7 = (byte)local_30;
  uVar10 = 0;
  do {
    uVar11 = uVar10;
    uVar10 = uVar11 + 1;
  } while (*(char *)((int)&local_568 + uVar11) != '\0');
  if (uVar10 < 0x300) {
    *(undefined1 *)((int)&local_568 + uVar11) = 0x20;
    uVar11 = uVar10;
  }
  *(undefined1 *)((int)&local_568 + uVar11) = 0;
  uVar10 = 0;
  do {
    uVar11 = uVar10;
    uVar10 = uVar11 + 1;
  } while (*(char *)((int)&local_568 + uVar11) != '\0');
  if (uVar11 + 1 < 0x300) {
    cVar6 = 's';
    pcVar5 = str_1000f309;
    do {
      pcVar5 = pcVar5 + 1;
      *(char *)((int)&local_568 + uVar11) = cVar6;
      uVar11 = uVar11 + 1;
      cVar6 = *pcVar5;
      if (cVar6 == '\0') break;
    } while (uVar11 < 0x2ff);
  }
  *(undefined1 *)((int)&local_568 + uVar11) = 0;
  uVar10 = 0;
  do {
    uVar11 = uVar10;
    uVar10 = uVar11 + 1;
  } while (*(char *)((int)&local_568 + uVar11) != '\0');
  if (uVar10 < 0x300) {
    *(undefined1 *)((int)&local_568 + uVar11) = 0x3d;
    uVar11 = uVar10;
  }
  *(undefined1 *)((int)&local_568 + uVar11) = 0;
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
    } while (*(char *)((int)&local_568 + uVar11) != '\0');
    if (uVar11 + 1 < 0x300) {
      *(byte *)((int)&local_568 + uVar11) = bVar8;
      *(undefined1 *)((int)&local_568 + uVar11 + 1) = 0;
    }
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  uVar10 = 0;
  do {
    uVar11 = uVar10;
    uVar10 = uVar11 + 1;
  } while (*(char *)((int)&local_568 + uVar11) != '\0');
  if (uVar10 < 0x300) {
    *(undefined1 *)((int)&local_568 + uVar11) = 0x20;
    uVar11 = uVar10;
  }
  *(undefined1 *)((int)&local_568 + uVar11) = 0;
  uVar10 = 0;
  do {
    uVar11 = uVar10;
    uVar10 = uVar11 + 1;
  } while (*(char *)((int)&local_568 + uVar11) != '\0');
  if (uVar11 + 1 < 0x300) {
    cVar6 = 's';
    pcVar5 = str_1000f325;
    do {
      pcVar5 = pcVar5 + 1;
      *(char *)((int)&local_568 + uVar11) = cVar6;
      uVar11 = uVar11 + 1;
      cVar6 = *pcVar5;
      if (cVar6 == '\0') break;
    } while (uVar11 < 0x2ff);
  }
  *(undefined1 *)((int)&local_568 + uVar11) = 0;
  uVar10 = 0;
  do {
    uVar11 = uVar10;
    uVar10 = uVar11 + 1;
  } while (*(char *)((int)&local_568 + uVar11) != '\0');
  if (uVar10 < 0x300) {
    *(undefined1 *)((int)&local_568 + uVar11) = 0x3d;
    uVar11 = uVar10;
  }
  *(undefined1 *)((int)&local_568 + uVar11) = 0;
  if (local_14 == 0) {
    uVar10 = 0;
    do {
      uVar11 = uVar10;
      uVar10 = uVar11 + 1;
    } while (*(char *)((int)&local_568 + uVar11) != '\0');
    if (uVar11 + 1 < 0x300) {
      *(undefined2 *)((int)&local_568 + uVar11) = 0x30;
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
      } while (*(char *)((int)&local_568 + uVar11) != '\0');
      if (uVar11 + 1 < 0x300) {
        *(char *)((int)&local_568 + uVar11) = local_1ac[iVar3];
        *(undefined1 *)((int)&local_568 + uVar11 + 1) = 0;
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
    pcVar5 = str_1000f331;
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
    (*(code *)api[3])(str_1000f05b,str_1000f35f,&local_1bc);
  }
  local_228 = 1;
  local_2c[0] = 0;
  local_30 = 0;
  local_1c4 = 0;
  local_38 = 0;
  goto LAB_10001998;
LAB_10004a81:
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
             (iVar3 = recovered_1000d790(api,0x23), iVar3 != 0)))))) &&
          (iVar3 = recovered_1000d790(api,0x4b), iVar3 != 0)) &&
         (((iVar3 = recovered_1000d790(api,0x45), iVar3 != 0 &&
           (iVar3 = recovered_1000d790(api,0x59), iVar3 != 0)) &&
          (iVar3 = recovered_1000d790(api,4), iVar3 != 0)))) {
        local_14 = 0;
        local_18 = 0;
        goto LAB_100056a2;
      }
      break;
    }
    if (((*api == 0x54584b57) && (0x33 < (uint)api[2])) && ((code *)api[0xc] != (code *)0x0)) {
      (*(code *)api[0xc])(uVar11);
    }
    uVar11 = uVar11 << (uVar11 < 0x1000 && 9 < uVar10);
    uVar10 = uVar10 + 1;
  } while (uVar10 != 0x18);
LAB_100068a2:
  uVar10 = 0;
  do {
    uVar11 = uVar10;
    uVar10 = uVar11 + 1;
  } while (*(char *)((int)&local_568 + uVar11) != '\0');
  if (uVar11 + 1 < 0x300) {
    cVar6 = ' ';
    pcVar5 = str_1000f2fd;
    do {
      pcVar5 = pcVar5 + 1;
      *(char *)((int)&local_568 + uVar11) = cVar6;
      uVar11 = uVar11 + 1;
      cVar6 = *pcVar5;
      if (cVar6 == '\0') break;
    } while (uVar11 < 0x2ff);
  }
  *(undefined1 *)((int)&local_568 + uVar11) = 0;
  uVar10 = 0;
  do {
    uVar11 = uVar10;
    uVar10 = uVar11 + 1;
  } while (*(char *)((int)&local_568 + uVar11) != '\0');
  if (uVar10 < 0x300) {
    *(undefined1 *)((int)&local_568 + uVar11) = 0x20;
    uVar11 = uVar10;
  }
  *(undefined1 *)((int)&local_568 + uVar11) = 0;
  uVar10 = 0;
  do {
    uVar11 = uVar10;
    uVar10 = uVar11 + 1;
  } while (*(char *)((int)&local_568 + uVar11) != '\0');
  if (uVar11 + 1 < 0x300) {
    cVar6 = 's';
    pcVar5 = str_1000f309;
    do {
      pcVar5 = pcVar5 + 1;
      *(char *)((int)&local_568 + uVar11) = cVar6;
      uVar11 = uVar11 + 1;
      cVar6 = *pcVar5;
      if (cVar6 == '\0') break;
    } while (uVar11 < 0x2ff);
  }
  *(undefined1 *)((int)&local_568 + uVar11) = 0;
  uVar10 = 0;
  do {
    uVar11 = uVar10;
    uVar10 = uVar11 + 1;
  } while (*(char *)((int)&local_568 + uVar11) != '\0');
  if (uVar10 < 0x300) {
    *(undefined1 *)((int)&local_568 + uVar11) = 0x3d;
    uVar11 = uVar10;
  }
  *(undefined1 *)((int)&local_568 + uVar11) = 0;
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
    } while (*(char *)((int)&local_568 + uVar11) != '\0');
    if (uVar11 + 1 < 0x300) {
      *(byte *)((int)&local_568 + uVar11) = bVar7;
      *(undefined1 *)((int)&local_568 + uVar11 + 1) = 0;
    }
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
LAB_1000196f:
  local_228 = 0;
  local_2c[0] = 0;
  local_30 = 0;
  local_1c4 = 0;
  local_38 = 0;
LAB_10001998:
  local_2c[0] = 0;
  local_30 = 0;
  local_38 = 0;
  local_1c4 = 0;
  local_1c8 = 0;
  if (((*api == 0x54584b57) && (0x57 < (uint)api[2])) && ((api[0x15] != 0 && (api[0x16] != 0)))) {
    iVar3 = recovered_1000d900(api,4,(int)local_2c);
    if (((iVar3 == 0) || (iVar3 = recovered_1000d900(api,5,(int)&local_30), iVar3 == 0)) ||
       ((iVar3 = recovered_1000d900(api,6,(int)&local_1c4), iVar3 == 0 ||
        ((local_2c[0] == 0 || (local_2c[0] == 0xff)))))) {
      uVar10 = 0;
      do {
        uVar11 = uVar10;
        uVar10 = uVar11 + 1;
      } while (*(char *)((int)&local_568 + uVar11) != '\0');
      if (uVar11 + 1 < 0x300) {
        cVar6 = ' ';
        pcVar5 = str_1000f37e;
        do {
          pcVar5 = pcVar5 + 1;
          *(char *)((int)&local_568 + uVar11) = cVar6;
          uVar11 = uVar11 + 1;
          cVar6 = *pcVar5;
          if (cVar6 == '\0') break;
        } while (uVar11 < 0x2ff);
      }
      goto LAB_10001b17;
    }
    recovered_1000db30(api,0x70,(int)&local_38);
    recovered_1000db30(api,0x74,(int)&local_1c8);
    uVar10 = 0;
    do {
      uVar11 = uVar10;
      uVar10 = uVar11 + 1;
    } while (*(char *)((int)&local_568 + uVar11) != '\0');
    if (uVar11 + 1 < 0x300) {
      cVar6 = ' ';
      pcVar5 = str_1000f38b;
      do {
        pcVar5 = pcVar5 + 1;
        *(char *)((int)&local_568 + uVar11) = cVar6;
        uVar11 = uVar11 + 1;
        cVar6 = *pcVar5;
        if (cVar6 == '\0') break;
      } while (uVar11 < 0x2ff);
    }
    *(undefined1 *)((int)&local_568 + uVar11) = 0;
    uVar10 = 0;
    do {
      uVar11 = uVar10;
      uVar10 = uVar11 + 1;
    } while (*(char *)((int)&local_568 + uVar11) != '\0');
    if (uVar10 < 0x300) {
      *(undefined1 *)((int)&local_568 + uVar11) = 0x20;
      uVar11 = uVar10;
    }
    *(undefined1 *)((int)&local_568 + uVar11) = 0;
    uVar10 = 0;
    do {
      uVar11 = uVar10;
      uVar10 = uVar11 + 1;
    } while (*(char *)((int)&local_568 + uVar11) != '\0');
    if (uVar11 + 1 < 0x300) {
      cVar6 = 'g';
      pcVar5 = &DAT_1000f399;
      do {
        *(char *)((int)&local_568 + uVar11) = cVar6;
        uVar11 = uVar11 + 1;
        cVar6 = *pcVar5;
        if (cVar6 == '\0') break;
        pcVar5 = pcVar5 + 1;
      } while (uVar11 < 0x2ff);
    }
    *(undefined1 *)((int)&local_568 + uVar11) = 0;
    uVar10 = 0;
    do {
      uVar11 = uVar10;
      uVar10 = uVar11 + 1;
    } while (*(char *)((int)&local_568 + uVar11) != '\0');
    if (uVar10 < 0x300) {
      *(undefined1 *)((int)&local_568 + uVar11) = 0x3d;
      uVar11 = uVar10;
    }
    *(undefined1 *)((int)&local_568 + uVar11) = 0;
    uVar10 = 0;
    do {
      uVar11 = uVar10;
      uVar10 = uVar11 + 1;
    } while (*(char *)((int)&local_568 + uVar11) != '\0');
    if (uVar11 + 1 < 0x300) {
      *(undefined2 *)((int)&local_568 + uVar11) = 0x30;
    }
    uVar10 = 0;
    do {
      uVar11 = uVar10;
      uVar10 = uVar11 + 1;
    } while (*(char *)((int)&local_568 + uVar11) != '\0');
    if (uVar11 + 1 < 0x300) {
      *(undefined2 *)((int)&local_568 + uVar11) = 0x30;
    }
    uVar10 = 0;
    do {
      uVar11 = uVar10;
      uVar10 = uVar11 + 1;
    } while (*(char *)((int)&local_568 + uVar11) != '\0');
    if (uVar11 + 1 < 0x300) {
      *(undefined2 *)((int)&local_568 + uVar11) = 0x30;
    }
    uVar10 = 0;
    do {
      uVar11 = uVar10;
      uVar10 = uVar11 + 1;
    } while (*(char *)((int)&local_568 + uVar11) != '\0');
    if (uVar11 + 1 < 0x300) {
      *(undefined2 *)((int)&local_568 + uVar11) = 0x30;
    }
    uVar10 = 0;
    do {
      uVar11 = uVar10;
      uVar10 = uVar11 + 1;
    } while (*(char *)((int)&local_568 + uVar11) != '\0');
    if (uVar11 + 1 < 0x300) {
      *(undefined2 *)((int)&local_568 + uVar11) = 0x30;
    }
    uVar10 = 0;
    do {
      uVar11 = uVar10;
      uVar10 = uVar11 + 1;
    } while (*(char *)((int)&local_568 + uVar11) != '\0');
    if (uVar11 + 1 < 0x300) {
      *(undefined2 *)((int)&local_568 + uVar11) = 0x37;
    }
    uVar10 = 0;
    do {
      uVar11 = uVar10;
      uVar10 = uVar11 + 1;
    } while (*(char *)((int)&local_568 + uVar11) != '\0');
    if (uVar11 + 1 < 0x300) {
      *(undefined2 *)((int)&local_568 + uVar11) = 0x30;
    }
    uVar10 = 0;
    do {
      uVar11 = uVar10;
      uVar10 = uVar11 + 1;
    } while (*(char *)((int)&local_568 + uVar11) != '\0');
    if (uVar11 + 1 < 0x300) {
      *(undefined2 *)((int)&local_568 + uVar11) = 0x30;
    }
    uVar11 = local_2c[0] & 0xff;
    uVar10 = 0;
    do {
      uVar2 = uVar10;
      uVar10 = uVar2 + 1;
    } while (*(char *)((int)&local_568 + uVar2) != '\0');
    if (uVar10 < 0x300) {
      *(undefined1 *)((int)&local_568 + uVar2) = 0x20;
      uVar2 = uVar10;
    }
    *(undefined1 *)((int)&local_568 + uVar2) = 0;
    uVar10 = 0;
    do {
      uVar2 = uVar10;
      uVar10 = uVar2 + 1;
    } while (*(char *)((int)&local_568 + uVar2) != '\0');
    if (uVar2 + 1 < 0x300) {
      cVar6 = 'g';
      pcVar5 = &DAT_1000f3a0;
      do {
        *(char *)((int)&local_568 + uVar2) = cVar6;
        uVar2 = uVar2 + 1;
        cVar6 = *pcVar5;
        if (cVar6 == '\0') break;
        pcVar5 = pcVar5 + 1;
      } while (uVar2 < 0x2ff);
    }
    *(undefined1 *)((int)&local_568 + uVar2) = 0;
    uVar10 = 0;
    do {
      uVar2 = uVar10;
      uVar10 = uVar2 + 1;
    } while (*(char *)((int)&local_568 + uVar2) != '\0');
    if (uVar10 < 0x300) {
      *(undefined1 *)((int)&local_568 + uVar2) = 0x3d;
      uVar2 = uVar10;
    }
    *(undefined1 *)((int)&local_568 + uVar2) = 0;
    if (uVar11 == 0) {
      uVar10 = 0;
      do {
        uVar11 = uVar10;
        uVar10 = uVar11 + 1;
      } while (*(char *)((int)&local_568 + uVar11) != '\0');
      if (uVar11 + 1 < 0x300) {
        *(undefined2 *)((int)&local_568 + uVar11) = 0x30;
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
        } while (*(char *)((int)&local_568 + uVar11) != '\0');
        if (uVar11 + 1 < 0x300) {
          *(char *)((int)&local_568 + uVar11) = local_1ac[iVar3];
          *(undefined1 *)((int)&local_568 + uVar11 + 1) = 0;
        }
      } while (uVar2 != 0);
      uVar10 = local_18;
    }
    local_20 = local_30 & 0xff;
    uVar11 = 0;
    do {
      uVar2 = uVar11;
      uVar11 = uVar2 + 1;
    } while (*(char *)((int)&local_568 + uVar2) != '\0');
    if (uVar11 < 0x300) {
      *(undefined1 *)((int)&local_568 + uVar2) = 0x20;
      uVar2 = uVar11;
    }
    *(undefined1 *)((int)&local_568 + uVar2) = 0;
    uVar11 = 0;
    do {
      uVar2 = uVar11;
      uVar11 = uVar2 + 1;
    } while (*(char *)((int)&local_568 + uVar2) != '\0');
    if (uVar2 + 1 < 0x300) {
      cVar6 = 'g';
      pcVar5 = str_1000f3a9;
      do {
        pcVar5 = pcVar5 + 1;
        *(char *)((int)&local_568 + uVar2) = cVar6;
        uVar2 = uVar2 + 1;
        cVar6 = *pcVar5;
        if (cVar6 == '\0') break;
      } while (uVar2 < 0x2ff);
    }
    *(undefined1 *)((int)&local_568 + uVar2) = 0;
    uVar11 = 0;
    do {
      uVar2 = uVar11;
      uVar11 = uVar2 + 1;
    } while (*(char *)((int)&local_568 + uVar2) != '\0');
    if (uVar11 < 0x300) {
      *(undefined1 *)((int)&local_568 + uVar2) = 0x3d;
      uVar2 = uVar11;
    }
    *(undefined1 *)((int)&local_568 + uVar2) = 0;
    local_18 = uVar10;
    if (local_20 == 0) {
      uVar11 = 0;
      do {
        uVar2 = uVar11;
        uVar11 = uVar2 + 1;
      } while (*(char *)((int)&local_568 + uVar2) != '\0');
      if (uVar2 + 1 < 0x300) {
        *(undefined2 *)((int)&local_568 + uVar2) = 0x30;
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
        } while (*(char *)((int)&local_568 + uVar2) != '\0');
        if (uVar2 + 1 < 0x300) {
          *(char *)((int)&local_568 + uVar2) = local_1ac[iVar3];
          *(undefined1 *)((int)&local_568 + uVar2 + 1) = 0;
        }
      } while (uVar9 != 0);
    }
    local_34 = local_1c4 & 0xff;
    uVar11 = 0;
    do {
      uVar2 = uVar11;
      uVar11 = uVar2 + 1;
    } while (*(char *)((int)&local_568 + uVar2) != '\0');
    if (uVar11 < 0x300) {
      *(undefined1 *)((int)&local_568 + uVar2) = 0x20;
      uVar2 = uVar11;
    }
    *(undefined1 *)((int)&local_568 + uVar2) = 0;
    uVar11 = 0;
    do {
      uVar2 = uVar11;
      uVar11 = uVar2 + 1;
    } while (*(char *)((int)&local_568 + uVar2) != '\0');
    if (uVar2 + 1 < 0x300) {
      cVar6 = 'g';
      pcVar5 = str_1000f3b3;
      do {
        pcVar5 = pcVar5 + 1;
        *(char *)((int)&local_568 + uVar2) = cVar6;
        uVar2 = uVar2 + 1;
        cVar6 = *pcVar5;
        if (cVar6 == '\0') break;
      } while (uVar2 < 0x2ff);
    }
    *(undefined1 *)((int)&local_568 + uVar2) = 0;
    uVar11 = 0;
    do {
      uVar2 = uVar11;
      uVar11 = uVar2 + 1;
    } while (*(char *)((int)&local_568 + uVar2) != '\0');
    if (uVar11 < 0x300) {
      *(undefined1 *)((int)&local_568 + uVar2) = 0x3d;
      uVar2 = uVar11;
    }
    *(undefined1 *)((int)&local_568 + uVar2) = 0;
    if (local_34 == 0) {
      uVar11 = 0;
      do {
        uVar2 = uVar11;
        uVar11 = uVar2 + 1;
      } while (*(char *)((int)&local_568 + uVar2) != '\0');
      if (uVar2 + 1 < 0x300) {
        *(undefined2 *)((int)&local_568 + uVar2) = 0x30;
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
        } while (*(char *)((int)&local_568 + uVar2) != '\0');
        if (uVar2 + 1 < 0x300) {
          *(char *)((int)&local_568 + uVar2) = local_1ac[iVar3];
          *(undefined1 *)((int)&local_568 + uVar2 + 1) = 0;
        }
      } while (uVar9 != 0);
    }
    local_14 = local_38;
    uVar11 = 0;
    do {
      uVar2 = uVar11;
      uVar11 = uVar2 + 1;
    } while (*(char *)((int)&local_568 + uVar2) != '\0');
    if (uVar11 < 0x300) {
      *(undefined1 *)((int)&local_568 + uVar2) = 0x20;
      uVar2 = uVar11;
    }
    *(undefined1 *)((int)&local_568 + uVar2) = 0;
    uVar11 = 0;
    do {
      uVar2 = uVar11;
      uVar11 = uVar2 + 1;
    } while (*(char *)((int)&local_568 + uVar2) != '\0');
    if (uVar2 + 1 < 0x300) {
      cVar6 = 'g';
      pcVar5 = str_1000f3bf;
      do {
        pcVar5 = pcVar5 + 1;
        *(char *)((int)&local_568 + uVar2) = cVar6;
        uVar2 = uVar2 + 1;
        cVar6 = *pcVar5;
        if (cVar6 == '\0') break;
      } while (uVar2 < 0x2ff);
    }
    *(undefined1 *)((int)&local_568 + uVar2) = 0;
    uVar11 = 0;
    do {
      uVar2 = uVar11;
      uVar11 = uVar2 + 1;
    } while (*(char *)((int)&local_568 + uVar2) != '\0');
    if (uVar11 < 0x300) {
      *(undefined1 *)((int)&local_568 + uVar2) = 0x3d;
      uVar2 = uVar11;
    }
    *(undefined1 *)((int)&local_568 + uVar2) = 0;
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
      } while (*(char *)((int)&local_568 + uVar2) != '\0');
      if (uVar2 + 1 < 0x300) {
        *(byte *)((int)&local_568 + uVar2) = bVar7;
        *(undefined1 *)((int)&local_568 + uVar2 + 1) = 0;
      }
      uVar11 = local_1c8;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    uVar2 = 0;
    do {
      uVar9 = uVar2;
      uVar2 = uVar9 + 1;
    } while (*(char *)((int)&local_568 + uVar9) != '\0');
    if (uVar2 < 0x300) {
      *(undefined1 *)((int)&local_568 + uVar9) = 0x20;
      uVar9 = uVar2;
    }
    *(undefined1 *)((int)&local_568 + uVar9) = 0;
    uVar2 = 0;
    do {
      uVar9 = uVar2;
      uVar2 = uVar9 + 1;
    } while (*(char *)((int)&local_568 + uVar9) != '\0');
    if (uVar9 + 1 < 0x300) {
      cVar6 = 'g';
      pcVar5 = str_1000f3d1;
      do {
        pcVar5 = pcVar5 + 1;
        *(char *)((int)&local_568 + uVar9) = cVar6;
        uVar9 = uVar9 + 1;
        cVar6 = *pcVar5;
        if (cVar6 == '\0') break;
      } while (uVar9 < 0x2ff);
    }
    *(undefined1 *)((int)&local_568 + uVar9) = 0;
    uVar2 = 0;
    do {
      uVar9 = uVar2;
      uVar2 = uVar9 + 1;
    } while (*(char *)((int)&local_568 + uVar9) != '\0');
    if (uVar2 < 0x300) {
      *(undefined1 *)((int)&local_568 + uVar9) = 0x3d;
      uVar9 = uVar2;
    }
    *(undefined1 *)((int)&local_568 + uVar9) = 0;
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
      } while (*(char *)((int)&local_568 + uVar9) != '\0');
      if (uVar9 + 1 < 0x300) {
        *(byte *)((int)&local_568 + uVar9) = bVar7;
        *(undefined1 *)((int)&local_568 + uVar9 + 1) = 0;
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
      pcVar5 = str_1000f3e0;
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
      pcVar5 = str_1000f3fe;
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
      (*(code *)api[3])(str_1000f080,str_1000f40c,&local_1bc);
    }
    local_224 = 1;
  }
  else {
    uVar10 = 0;
    do {
      uVar11 = uVar10;
      uVar10 = uVar11 + 1;
    } while (*(char *)((int)&local_568 + uVar11) != '\0');
    if (uVar11 + 1 < 0x300) {
      cVar6 = ' ';
      pcVar5 = str_1000f369;
      do {
        pcVar5 = pcVar5 + 1;
        *(char *)((int)&local_568 + uVar11) = cVar6;
        uVar11 = uVar11 + 1;
        cVar6 = *pcVar5;
        if (cVar6 == '\0') break;
      } while (uVar11 < 0x2ff);
    }
LAB_10001b17:
    *(undefined1 *)((int)&local_568 + uVar11) = 0;
    local_224 = 0;
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
    } while (*(char *)((int)&local_568 + uVar9) != '\0');
    if (uVar9 + 1 < 0x300) {
      cVar6 = ' ';
      pcVar5 = str_1000f428;
      do {
        pcVar5 = pcVar5 + 1;
        *(char *)((int)&local_568 + uVar9) = cVar6;
        uVar9 = uVar9 + 1;
        cVar6 = *pcVar5;
        if (cVar6 == '\0') break;
      } while (uVar9 < 0x2ff);
    }
    uVar13 = local_200[0] & 0xf;
    *(undefined1 *)((int)&local_568 + uVar9) = 0;
    uVar10 = 0;
    do {
      uVar9 = uVar10;
      uVar10 = uVar9 + 1;
    } while (*(char *)((int)&local_568 + uVar9) != '\0');
    if (uVar10 < 0x300) {
      *(undefined1 *)((int)&local_568 + uVar9) = 0x20;
      uVar9 = uVar10;
    }
    *(undefined1 *)((int)&local_568 + uVar9) = 0;
    uVar10 = 0;
    do {
      uVar9 = uVar10;
      uVar10 = uVar9 + 1;
    } while (*(char *)((int)&local_568 + uVar9) != '\0');
    local_18 = uVar11 | uVar2 & 0xf;
    if (uVar9 + 1 < 0x300) {
      cVar6 = 'c';
      pcVar5 = str_1000f438;
      do {
        pcVar5 = pcVar5 + 1;
        *(char *)((int)&local_568 + uVar9) = cVar6;
        uVar9 = uVar9 + 1;
        cVar6 = *pcVar5;
        if (cVar6 == '\0') break;
      } while (uVar9 < 0x2ff);
    }
    *(undefined1 *)((int)&local_568 + uVar9) = 0;
    uVar10 = 0;
    do {
      uVar11 = uVar10;
      uVar10 = uVar11 + 1;
    } while (*(char *)((int)&local_568 + uVar11) != '\0');
    if (uVar10 < 0x300) {
      *(undefined1 *)((int)&local_568 + uVar11) = 0x3d;
      uVar11 = uVar10;
    }
    *(undefined1 *)((int)&local_568 + uVar11) = 0;
    if (local_14 == 0) {
      uVar10 = 0;
      do {
        uVar11 = uVar10;
        uVar10 = uVar11 + 1;
      } while (*(char *)((int)&local_568 + uVar11) != '\0');
      if (uVar11 + 1 < 0x300) {
        *(undefined2 *)((int)&local_568 + uVar11) = 0x30;
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
        } while (*(char *)((int)&local_568 + uVar11) != '\0');
        if (uVar11 + 1 < 0x300) {
          *(char *)((int)&local_568 + uVar11) = local_1ac[iVar3];
          *(undefined1 *)((int)&local_568 + uVar11 + 1) = 0;
        }
      } while (uVar2 != 0);
    }
    uVar10 = 0;
    do {
      uVar11 = uVar10;
      uVar10 = uVar11 + 1;
    } while (*(char *)((int)&local_568 + uVar11) != '\0');
    if (uVar10 < 0x300) {
      *(undefined1 *)((int)&local_568 + uVar11) = 0x20;
      uVar11 = uVar10;
    }
    *(undefined1 *)((int)&local_568 + uVar11) = 0;
    uVar10 = 0;
    do {
      uVar11 = uVar10;
      uVar10 = uVar11 + 1;
    } while (*(char *)((int)&local_568 + uVar11) != '\0');
    if (uVar11 + 1 < 0x300) {
      cVar6 = 'c';
      pcVar5 = str_1000f442;
      do {
        pcVar5 = pcVar5 + 1;
        *(char *)((int)&local_568 + uVar11) = cVar6;
        uVar11 = uVar11 + 1;
        cVar6 = *pcVar5;
        if (cVar6 == '\0') break;
      } while (uVar11 < 0x2ff);
    }
    *(undefined1 *)((int)&local_568 + uVar11) = 0;
    uVar11 = local_18;
    uVar10 = 0;
    do {
      uVar2 = uVar10;
      uVar10 = uVar2 + 1;
    } while (*(char *)((int)&local_568 + uVar2) != '\0');
    if (uVar10 < 0x300) {
      *(undefined1 *)((int)&local_568 + uVar2) = 0x3d;
      uVar2 = uVar10;
    }
    *(undefined1 *)((int)&local_568 + uVar2) = 0;
    if (uVar11 == 0) {
      uVar10 = 0;
      do {
        uVar11 = uVar10;
        uVar10 = uVar11 + 1;
      } while (*(char *)((int)&local_568 + uVar11) != '\0');
      if (uVar11 + 1 < 0x300) {
        *(undefined2 *)((int)&local_568 + uVar11) = 0x30;
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
        } while (*(char *)((int)&local_568 + uVar11) != '\0');
        if (uVar11 + 1 < 0x300) {
          *(char *)((int)&local_568 + uVar11) = local_1ac[iVar3];
          *(undefined1 *)((int)&local_568 + uVar11 + 1) = 0;
        }
      } while (uVar2 != 0);
    }
    uVar10 = 0;
    do {
      uVar11 = uVar10;
      uVar10 = uVar11 + 1;
    } while (*(char *)((int)&local_568 + uVar11) != '\0');
    if (uVar10 < 0x300) {
      *(undefined1 *)((int)&local_568 + uVar11) = 0x20;
      uVar11 = uVar10;
    }
    *(undefined1 *)((int)&local_568 + uVar11) = 0;
    uVar10 = 0;
    do {
      uVar11 = uVar10;
      uVar10 = uVar11 + 1;
    } while (*(char *)((int)&local_568 + uVar11) != '\0');
    if (uVar11 + 1 < 0x300) {
      cVar6 = 'c';
      pcVar5 = str_1000f44b;
      do {
        pcVar5 = pcVar5 + 1;
        *(char *)((int)&local_568 + uVar11) = cVar6;
        uVar11 = uVar11 + 1;
        cVar6 = *pcVar5;
        if (cVar6 == '\0') break;
      } while (uVar11 < 0x2ff);
    }
    *(undefined1 *)((int)&local_568 + uVar11) = 0;
    uVar10 = 0;
    do {
      uVar11 = uVar10;
      uVar10 = uVar11 + 1;
    } while (*(char *)((int)&local_568 + uVar11) != '\0');
    if (uVar10 < 0x300) {
      *(undefined1 *)((int)&local_568 + uVar11) = 0x3d;
      uVar11 = uVar10;
    }
    *(undefined1 *)((int)&local_568 + uVar11) = 0;
    if (uVar13 == 0) {
      uVar10 = 0;
      do {
        uVar11 = uVar10;
        uVar10 = uVar11 + 1;
      } while (*(char *)((int)&local_568 + uVar11) != '\0');
      if (uVar11 + 1 < 0x300) {
        *(undefined2 *)((int)&local_568 + uVar11) = 0x30;
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
        } while (*(char *)((int)&local_568 + uVar2) != '\0');
        if (uVar2 + 1 < 0x300) {
          *(char *)((int)&local_568 + uVar2) = local_1ac[iVar3];
          *(undefined1 *)((int)&local_568 + uVar2 + 1) = 0;
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
      } while (*(char *)((int)&local_568 + uVar2) != '\0');
      local_20 = local_1f8;
      if (uVar2 + 1 < 0x300) {
        cVar6 = ' ';
        pcVar5 = str_1000f457;
        do {
          pcVar5 = pcVar5 + 1;
          *(char *)((int)&local_568 + uVar2) = cVar6;
          uVar2 = uVar2 + 1;
          cVar6 = *pcVar5;
          if (cVar6 == '\0') break;
        } while (uVar2 < 0x2ff);
      }
      *(undefined1 *)((int)&local_568 + uVar2) = 0;
      local_1bc = local_1bc & 0xffffff00;
      uVar11 = 0;
      do {
        uVar2 = uVar11;
        uVar11 = uVar2 + 1;
      } while (local_1ac[uVar2 - 0x10] != '\0');
      if (uVar2 + 1 < 0xc0) {
        cVar6 = 'v';
        pcVar5 = str_1000f46e;
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
        pcVar5 = str_1000f496;
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
        pcVar5 = str_1000f49d;
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
      pcVar5 = str_1000f2e3;
      if ((char)local_20 < '\0') {
        pcVar5 = &DAT_1000f2de;
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
          pcVar12 = str_1000f4a3;
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
         ((api[0x2b] == 0 || (pcVar5 = &DAT_1000f2de, api[0x2c] == 0)))) {
        pcVar5 = str_1000f2e3;
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
          pcVar12 = &DAT_1000f4ae;
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
        (*(code *)api[3])(str_1000f0a6,str_1000f4b4,&local_1bc);
      }
      goto LAB_10001cff;
    }
    iVar3 = (*(code *)api[0x2b])(0x1a0,&local_30,&local_1c4);
    if (iVar3 == 0) {
      uVar10 = 0;
      do {
        uVar11 = uVar10;
        uVar10 = uVar11 + 1;
      } while (*(char *)((int)&local_568 + uVar11) != '\0');
      if (uVar11 + 1 < 0x300) {
        cVar6 = ' ';
        pcVar5 = str_1000f4cc;
        do {
          pcVar5 = pcVar5 + 1;
          *(char *)((int)&local_568 + uVar11) = cVar6;
          uVar11 = uVar11 + 1;
          cVar6 = *pcVar5;
          if (cVar6 == '\0') break;
        } while (uVar11 < 0x2ff);
      }
      *(undefined1 *)((int)&local_568 + uVar11) = 0;
      local_1bc = local_1bc & 0xffffff00;
      uVar10 = 0;
      do {
        uVar11 = uVar10;
        uVar10 = uVar11 + 1;
      } while (local_1ac[uVar11 - 0x10] != '\0');
      if (uVar11 + 1 < 0xa0) {
        cVar6 = 'v';
        pcVar5 = str_1000f4e7;
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
        pcVar5 = str_1000f496;
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
        pcVar5 = str_1000f49d;
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
        (*(code *)api[3])(str_1000f0a6,str_1000f4b4,&local_1bc);
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
            goto LAB_10005b63;
          }
          goto LAB_1000614e;
        }
LAB_10006356:
        uVar10 = 0;
        do {
          uVar11 = uVar10;
          uVar10 = uVar11 + 1;
        } while (*(char *)((int)&local_568 + uVar11) != '\0');
        if (uVar11 + 1 < 0x300) {
          cVar6 = ' ';
          pcVar5 = str_1000f513;
          do {
            pcVar5 = pcVar5 + 1;
            *(char *)((int)&local_568 + uVar11) = cVar6;
            uVar11 = uVar11 + 1;
            cVar6 = *pcVar5;
            if (cVar6 == '\0') break;
          } while (uVar11 < 0x2ff);
        }
        *(undefined1 *)((int)&local_568 + uVar11) = 0;
        local_1bc = local_1bc & 0xffffff00;
        uVar10 = 0;
        do {
          uVar11 = uVar10;
          uVar10 = uVar11 + 1;
        } while (local_1ac[uVar11 - 0x10] != '\0');
        if (uVar11 + 1 < 0xc0) {
          cVar6 = 'v';
          pcVar5 = str_1000f533;
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
          pcVar5 = str_1000f496;
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
          pcVar5 = str_1000f49d;
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
          pcVar5 = str_1000f564;
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
LAB_10005b63:
        if (*api != 0x54584b57) goto LAB_10006356;
        uVar10 = api[2];
LAB_1000614e:
        if ((((uVar10 < 0xb0) || ((code *)api[0x2b] == (code *)0x0)) ||
            (iVar4 = (*(code *)api[0x2b])(0x199,&local_38,&local_1c8), iVar4 == 0)) ||
           (((*api != 0x54584b57 || ((uint)api[2] < 0xb0)) ||
            (((code *)api[0x2b] == (code *)0x0 ||
             (iVar4 = (*(code *)api[0x2b])(0x198,&local_210,&local_20c), iVar4 == 0))))))
        goto LAB_10006356;
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
        } while (*(char *)((int)&local_568 + uVar11) != '\0');
        if (uVar11 + 1 < 0x300) {
          cVar6 = ' ';
          pcVar5 = str_1000f571;
          do {
            pcVar5 = pcVar5 + 1;
            *(char *)((int)&local_568 + uVar11) = cVar6;
            uVar11 = uVar11 + 1;
            cVar6 = *pcVar5;
            if (cVar6 == '\0') break;
          } while (uVar11 < 0x2ff);
        }
        *(undefined1 *)((int)&local_568 + uVar11) = 0;
        uVar11 = local_30;
        uVar10 = 0;
        do {
          uVar2 = uVar10;
          uVar10 = uVar2 + 1;
        } while (*(char *)((int)&local_568 + uVar2) != '\0');
        if (uVar10 < 0x300) {
          *(undefined1 *)((int)&local_568 + uVar2) = 0x20;
          uVar2 = uVar10;
        }
        *(undefined1 *)((int)&local_568 + uVar2) = 0;
        uVar10 = 0;
        do {
          uVar2 = uVar10;
          uVar10 = uVar2 + 1;
        } while (*(char *)((int)&local_568 + uVar2) != '\0');
        if (uVar2 + 1 < 0x300) {
          cVar6 = 'm';
          pcVar5 = str_1000f564;
          do {
            pcVar5 = pcVar5 + 1;
            *(char *)((int)&local_568 + uVar2) = cVar6;
            uVar2 = uVar2 + 1;
            cVar6 = *pcVar5;
            if (cVar6 == '\0') break;
          } while (uVar2 < 0x2ff);
        }
        *(undefined1 *)((int)&local_568 + uVar2) = 0;
        uVar10 = 0;
        do {
          uVar2 = uVar10;
          uVar10 = uVar2 + 1;
        } while (*(char *)((int)&local_568 + uVar2) != '\0');
        if (uVar10 < 0x300) {
          *(undefined1 *)((int)&local_568 + uVar2) = 0x3d;
          uVar2 = uVar10;
        }
        *(undefined1 *)((int)&local_568 + uVar2) = 0;
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
          } while (*(char *)((int)&local_568 + uVar2) != '\0');
          if (uVar2 + 1 < 0x300) {
            *(byte *)((int)&local_568 + uVar2) = bVar7;
            *(undefined1 *)((int)&local_568 + uVar2 + 1) = 0;
          }
          uVar10 = local_38;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
        uVar11 = 0;
        do {
          uVar2 = uVar11;
          uVar11 = uVar2 + 1;
        } while (*(char *)((int)&local_568 + uVar2) != '\0');
        if (uVar11 < 0x300) {
          *(undefined1 *)((int)&local_568 + uVar2) = 0x20;
          uVar2 = uVar11;
        }
        *(undefined1 *)((int)&local_568 + uVar2) = 0;
        uVar11 = 0;
        do {
          uVar2 = uVar11;
          uVar11 = uVar2 + 1;
        } while (*(char *)((int)&local_568 + uVar2) != '\0');
        if (uVar2 + 1 < 0x300) {
          cVar6 = 'p';
          pcVar5 = str_1000f583;
          do {
            pcVar5 = pcVar5 + 1;
            *(char *)((int)&local_568 + uVar2) = cVar6;
            uVar2 = uVar2 + 1;
            cVar6 = *pcVar5;
            if (cVar6 == '\0') break;
          } while (uVar2 < 0x2ff);
        }
        *(undefined1 *)((int)&local_568 + uVar2) = 0;
        uVar11 = 0;
        do {
          uVar2 = uVar11;
          uVar11 = uVar2 + 1;
        } while (*(char *)((int)&local_568 + uVar2) != '\0');
        if (uVar11 < 0x300) {
          *(undefined1 *)((int)&local_568 + uVar2) = 0x3d;
          uVar2 = uVar11;
        }
        *(undefined1 *)((int)&local_568 + uVar2) = 0;
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
          } while (*(char *)((int)&local_568 + uVar2) != '\0');
          if (uVar2 + 1 < 0x300) {
            *(byte *)((int)&local_568 + uVar2) = bVar7;
            *(undefined1 *)((int)&local_568 + uVar2 + 1) = 0;
          }
          uVar11 = local_210;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
        uVar10 = 0;
        do {
          uVar2 = uVar10;
          uVar10 = uVar2 + 1;
        } while (*(char *)((int)&local_568 + uVar2) != '\0');
        if (uVar10 < 0x300) {
          *(undefined1 *)((int)&local_568 + uVar2) = 0x20;
          uVar2 = uVar10;
        }
        *(undefined1 *)((int)&local_568 + uVar2) = 0;
        uVar10 = 0;
        do {
          uVar2 = uVar10;
          uVar10 = uVar2 + 1;
        } while (*(char *)((int)&local_568 + uVar2) != '\0');
        if (uVar2 + 1 < 0x300) {
          cVar6 = 'p';
          pcVar5 = str_1000f58d;
          do {
            pcVar5 = pcVar5 + 1;
            *(char *)((int)&local_568 + uVar2) = cVar6;
            uVar2 = uVar2 + 1;
            cVar6 = *pcVar5;
            if (cVar6 == '\0') break;
          } while (uVar2 < 0x2ff);
        }
        *(undefined1 *)((int)&local_568 + uVar2) = 0;
        uVar10 = 0;
        do {
          uVar2 = uVar10;
          uVar10 = uVar2 + 1;
        } while (*(char *)((int)&local_568 + uVar2) != '\0');
        if (uVar10 < 0x300) {
          *(undefined1 *)((int)&local_568 + uVar2) = 0x3d;
          uVar2 = uVar10;
        }
        *(undefined1 *)((int)&local_568 + uVar2) = 0;
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
          } while (*(char *)((int)&local_568 + uVar2) != '\0');
          if (uVar2 + 1 < 0x300) {
            *(byte *)((int)&local_568 + uVar2) = bVar7;
            *(undefined1 *)((int)&local_568 + uVar2 + 1) = 0;
          }
          uVar10 = local_20c;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
        uVar11 = 0;
        do {
          uVar2 = uVar11;
          uVar11 = uVar2 + 1;
        } while (*(char *)((int)&local_568 + uVar2) != '\0');
        if (uVar11 < 0x300) {
          *(undefined1 *)((int)&local_568 + uVar2) = 0x20;
          uVar2 = uVar11;
        }
        *(undefined1 *)((int)&local_568 + uVar2) = 0;
        uVar11 = 0;
        do {
          uVar2 = uVar11;
          uVar11 = uVar2 + 1;
        } while (*(char *)((int)&local_568 + uVar2) != '\0');
        if (uVar2 + 1 < 0x300) {
          cVar6 = 'p';
          pcVar5 = str_1000f59a;
          do {
            pcVar5 = pcVar5 + 1;
            *(char *)((int)&local_568 + uVar2) = cVar6;
            uVar2 = uVar2 + 1;
            cVar6 = *pcVar5;
            if (cVar6 == '\0') break;
          } while (uVar2 < 0x2ff);
        }
        *(undefined1 *)((int)&local_568 + uVar2) = 0;
        uVar11 = 0;
        do {
          uVar2 = uVar11;
          uVar11 = uVar2 + 1;
        } while (*(char *)((int)&local_568 + uVar2) != '\0');
        if (uVar11 < 0x300) {
          *(undefined1 *)((int)&local_568 + uVar2) = 0x3d;
          uVar2 = uVar11;
        }
        *(undefined1 *)((int)&local_568 + uVar2) = 0;
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
          } while (*(char *)((int)&local_568 + uVar2) != '\0');
          if (uVar2 + 1 < 0x300) {
            *(byte *)((int)&local_568 + uVar2) = bVar7;
            *(undefined1 *)((int)&local_568 + uVar2 + 1) = 0;
          }
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
        uVar10 = 0;
        do {
          uVar11 = uVar10;
          uVar10 = uVar11 + 1;
        } while (*(char *)((int)&local_568 + uVar11) != '\0');
        if (uVar10 < 0x300) {
          *(undefined1 *)((int)&local_568 + uVar11) = 0x20;
          uVar11 = uVar10;
        }
        *(undefined1 *)((int)&local_568 + uVar11) = 0;
        uVar10 = 0;
        do {
          uVar11 = uVar10;
          uVar10 = uVar11 + 1;
        } while (*(char *)((int)&local_568 + uVar11) != '\0');
        if (uVar11 + 1 < 0x300) {
          cVar6 = 'c';
          pcVar5 = str_1000f5a7;
          do {
            pcVar5 = pcVar5 + 1;
            *(char *)((int)&local_568 + uVar11) = cVar6;
            uVar11 = uVar11 + 1;
            cVar6 = *pcVar5;
            if (cVar6 == '\0') break;
          } while (uVar11 < 0x2ff);
        }
        *(undefined1 *)((int)&local_568 + uVar11) = 0;
        uVar10 = 0;
        do {
          uVar11 = uVar10;
          uVar10 = uVar11 + 1;
        } while (*(char *)((int)&local_568 + uVar11) != '\0');
        if (uVar10 < 0x300) {
          *(undefined1 *)((int)&local_568 + uVar11) = 0x3d;
          uVar11 = uVar10;
        }
        bVar14 = local_34 == 0;
        *(undefined1 *)((int)&local_568 + uVar11) = 0;
        if (bVar14) {
          uVar10 = 0;
          do {
            uVar11 = uVar10;
            uVar10 = uVar11 + 1;
          } while (*(char *)((int)&local_568 + uVar11) != '\0');
          if (uVar11 + 1 < 0x300) {
            *(undefined2 *)((int)&local_568 + uVar11) = 0x30;
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
            } while (*(char *)((int)&local_568 + uVar11) != '\0');
            if (uVar11 + 1 < 0x300) {
              *(char *)((int)&local_568 + uVar11) = local_1ac[iVar4];
              *(undefined1 *)((int)&local_568 + uVar11 + 1) = 0;
            }
          } while (uVar2 != 0);
        }
        uVar10 = 0;
        do {
          uVar11 = uVar10;
          uVar10 = uVar11 + 1;
        } while (*(char *)((int)&local_568 + uVar11) != '\0');
        if (uVar10 < 0x300) {
          *(undefined1 *)((int)&local_568 + uVar11) = 0x20;
          uVar11 = uVar10;
        }
        *(undefined1 *)((int)&local_568 + uVar11) = 0;
        uVar10 = 0;
        do {
          uVar11 = uVar10;
          uVar10 = uVar11 + 1;
        } while (*(char *)((int)&local_568 + uVar11) != '\0');
        if (uVar11 + 1 < 0x300) {
          cVar6 = 't';
          pcVar5 = str_1000f5b8;
          do {
            pcVar5 = pcVar5 + 1;
            *(char *)((int)&local_568 + uVar11) = cVar6;
            uVar11 = uVar11 + 1;
            cVar6 = *pcVar5;
            if (cVar6 == '\0') break;
          } while (uVar11 < 0x2ff);
        }
        *(undefined1 *)((int)&local_568 + uVar11) = 0;
        uVar10 = 0;
        do {
          uVar11 = uVar10;
          uVar10 = uVar11 + 1;
        } while (*(char *)((int)&local_568 + uVar11) != '\0');
        if (uVar10 < 0x300) {
          *(undefined1 *)((int)&local_568 + uVar11) = 0x3d;
          uVar11 = uVar10;
        }
        *(undefined1 *)((int)&local_568 + uVar11) = 0;
        if (local_3c == 0) {
          uVar10 = 0;
          do {
            uVar11 = uVar10;
            uVar10 = uVar11 + 1;
          } while (*(char *)((int)&local_568 + uVar11) != '\0');
          if (uVar11 + 1 < 0x300) {
            *(undefined2 *)((int)&local_568 + uVar11) = 0x30;
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
            } while (*(char *)((int)&local_568 + uVar11) != '\0');
            if (uVar11 + 1 < 0x300) {
              *(char *)((int)&local_568 + uVar11) = local_1ac[iVar4];
              *(undefined1 *)((int)&local_568 + uVar11 + 1) = 0;
            }
          } while (uVar2 != 0);
        }
        uVar10 = 0;
        do {
          uVar11 = uVar10;
          uVar10 = uVar11 + 1;
        } while (*(char *)((int)&local_568 + uVar11) != '\0');
        if (uVar10 < 0x300) {
          *(undefined1 *)((int)&local_568 + uVar11) = 0x20;
          uVar11 = uVar10;
        }
        *(undefined1 *)((int)&local_568 + uVar11) = 0;
        uVar10 = 0;
        do {
          uVar11 = uVar10;
          uVar10 = uVar11 + 1;
        } while (*(char *)((int)&local_568 + uVar11) != '\0');
        if (uVar11 + 1 < 0x300) {
          cVar6 = 'm';
          pcVar5 = str_1000f5c8;
          do {
            pcVar5 = pcVar5 + 1;
            *(char *)((int)&local_568 + uVar11) = cVar6;
            uVar11 = uVar11 + 1;
            cVar6 = *pcVar5;
            if (cVar6 == '\0') break;
          } while (uVar11 < 0x2ff);
        }
        *(undefined1 *)((int)&local_568 + uVar11) = 0;
        uVar10 = 0;
        do {
          uVar11 = uVar10;
          uVar10 = uVar11 + 1;
        } while (*(char *)((int)&local_568 + uVar11) != '\0');
        if (uVar10 < 0x300) {
          *(undefined1 *)((int)&local_568 + uVar11) = 0x3d;
          uVar11 = uVar10;
        }
        bVar14 = local_20 == 0;
        *(undefined1 *)((int)&local_568 + uVar11) = 0;
        if (bVar14) {
          uVar10 = 0;
          do {
            uVar11 = uVar10;
            uVar10 = uVar11 + 1;
          } while (*(char *)((int)&local_568 + uVar11) != '\0');
          if (uVar11 + 1 < 0x300) {
            *(undefined2 *)((int)&local_568 + uVar11) = 0x30;
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
            } while (*(char *)((int)&local_568 + uVar11) != '\0');
            if (uVar11 + 1 < 0x300) {
              *(char *)((int)&local_568 + uVar11) = local_1ac[iVar4];
              *(undefined1 *)((int)&local_568 + uVar11 + 1) = 0;
            }
          } while (uVar2 != 0);
        }
        recovered_1000dd50((int)&local_568,0x300,str_1000f5d5,local_208);
        recovered_1000dd50((int)&local_568,0x300,str_1000f5e2,local_204);
        recovered_1000dd50((int)&local_568,0x300,str_1000f5ee,local_1cc);
        local_1c0 = str_1000f2e3;
        if (iVar3 != 0) {
          local_1c0 = &DAT_1000f2de;
        }
        local_19 = *local_1c0;
        if (*local_1c0 != '\0') {
          uVar10 = 0;
          do {
            uVar11 = uVar10;
            uVar10 = uVar11 + 1;
          } while (*(char *)((int)&local_568 + uVar11) != '\0');
          if (uVar10 < 0x300) {
            *(undefined1 *)((int)&local_568 + uVar11) = 0x20;
            uVar11 = uVar10;
          }
          *(undefined1 *)((int)&local_568 + uVar11) = 0;
          uVar10 = 0;
          do {
            uVar11 = uVar10;
            uVar10 = uVar11 + 1;
          } while (*(char *)((int)&local_568 + uVar11) != '\0');
          if (uVar11 + 1 < 0x300) {
            cVar6 = 'p';
            pcVar5 = str_1000f5f7;
            do {
              pcVar5 = pcVar5 + 1;
              *(char *)((int)&local_568 + uVar11) = cVar6;
              uVar11 = uVar11 + 1;
              cVar6 = *pcVar5;
              if (cVar6 == '\0') break;
            } while (uVar11 < 0x2ff);
          }
          *(undefined1 *)((int)&local_568 + uVar11) = 0;
          uVar10 = 0;
          do {
            uVar11 = uVar10;
            uVar10 = uVar11 + 1;
          } while (*(char *)((int)&local_568 + uVar11) != '\0');
          if (uVar10 < 0x300) {
            *(undefined1 *)((int)&local_568 + uVar11) = 0x3d;
            uVar11 = uVar10;
          }
          *(undefined1 *)((int)&local_568 + uVar11) = 0;
          uVar10 = 0;
          do {
            uVar11 = uVar10;
            uVar10 = uVar11 + 1;
          } while (*(char *)((int)&local_568 + uVar11) != '\0');
          if (uVar11 + 1 < 0x300) {
            cVar6 = local_19;
            pcVar5 = local_1c0;
            do {
              pcVar5 = pcVar5 + 1;
              *(char *)((int)&local_568 + uVar11) = cVar6;
              uVar11 = uVar11 + 1;
              cVar6 = *pcVar5;
              if (cVar6 == '\0') break;
            } while (uVar11 < 0x2ff);
          }
          *(undefined1 *)((int)&local_568 + uVar11) = 0;
        }
        local_1bc = local_1bc & 0xffffff00;
        uVar10 = 0;
        do {
          uVar11 = uVar10;
          uVar10 = uVar11 + 1;
        } while (local_1ac[uVar11 - 0x10] != '\0');
        if (uVar11 + 1 < 0x140) {
          cVar6 = 'v';
          pcVar5 = str_1000f60a;
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
          pcVar5 = str_1000f496;
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
          pcVar5 = str_1000f49d;
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
          pcVar5 = str_1000f5a7;
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
          pcVar5 = str_1000f5b8;
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
        recovered_1000dd50((int)&local_1bc,0x140,str_1000f5d5,local_208);
        recovered_1000dd50((int)&local_1bc,0x140,str_1000f5e2,local_204);
        recovered_1000dd50((int)&local_1bc,0x140,str_1000f5ee,local_1cc);
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
            pcVar5 = str_1000f62f;
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
        (*pcVar1)(str_1000f0a6,str_1000f4b4,&local_1bc);
      }
    }
  }
  else {
    uVar10 = 0;
    do {
      uVar11 = uVar10;
      uVar10 = uVar11 + 1;
    } while (*(char *)((int)&local_568 + uVar11) != '\0');
    if (uVar11 + 1 < 0x300) {
      cVar6 = ' ';
      pcVar5 = str_1000f417;
      do {
        pcVar5 = pcVar5 + 1;
        *(char *)((int)&local_568 + uVar11) = cVar6;
        uVar11 = uVar11 + 1;
        cVar6 = *pcVar5;
        if (cVar6 == '\0') break;
      } while (uVar11 < 0x2ff);
    }
    *(undefined1 *)((int)&local_568 + uVar11) = 0;
LAB_10001cff:
    iVar3 = 0;
  }
  local_220 = iVar3;
  if (((*api == 0x54584b57) && (0x5f < (uint)api[2])) && (api[0x17] != 0)) {
    uVar10 = 0;
    do {
      local_14 = uVar10 & 0xff;
      iVar3 = 0;
      local_18 = uVar10;
      do {
        bVar7 = (byte)iVar3;
        iVar4 = recovered_1000df40(api,(char)local_14,bVar7,0,(undefined1 *)&local_1bc);
        if (iVar4 != 0) {
          recovered_10009d10(api,(byte *)&local_1bc,(int *)&local_268);
          if ((char)local_1b0 < '\0') {
            in_DL = (undefined1)local_14;
            iVar4 = recovered_1000df40(api,in_DL,bVar7,1,(undefined1 *)local_200);
            if (iVar4 != 0) {
              recovered_10009d10(api,(byte *)local_200,(int *)&local_268);
            }
            iVar4 = recovered_1000df40(api,in_DL,bVar7,2,(undefined1 *)local_200);
            if (iVar4 != 0) {
              recovered_10009d10(api,(byte *)local_200,(int *)&local_268);
            }
            iVar4 = recovered_1000df40(api,in_DL,bVar7,3,(undefined1 *)local_200);
            if (iVar4 != 0) {
              recovered_10009d10(api,(byte *)local_200,(int *)&local_268);
            }
            iVar4 = recovered_1000df40(api,in_DL,bVar7,4,(undefined1 *)local_200);
            if (iVar4 != 0) {
              recovered_10009d10(api,(byte *)local_200,(int *)&local_268);
            }
            iVar4 = recovered_1000df40(api,in_DL,bVar7,5,(undefined1 *)local_200);
            if (iVar4 != 0) {
              recovered_10009d10(api,(byte *)local_200,(int *)&local_268);
            }
            iVar4 = recovered_1000df40(api,in_DL,bVar7,6,(undefined1 *)local_200);
            if (iVar4 != 0) {
              recovered_10009d10(api,(byte *)local_200,(int *)&local_268);
            }
            iVar4 = recovered_1000df40(api,in_DL,bVar7,7,(undefined1 *)local_200);
            if (iVar4 != 0) {
              recovered_10009d10(api,(byte *)local_200,(int *)&local_268);
            }
          }
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 != 0x20);
      uVar10 = local_18 + 1;
    } while (uVar10 != 0x10);
  }
  if (local_25c != 0) {
    local_1bc = local_1bc & 0xffffff00;
    uVar10 = 0;
    do {
      uVar11 = uVar10;
      uVar10 = uVar11 + 1;
    } while (local_1ac[uVar11 - 0x10] != '\0');
    if (uVar11 + 1 < 0x180) {
      cVar6 = 'c';
      pcVar5 = str_1000fa75;
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
      pcVar5 = str_1000faa3;
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
    uVar10 = local_25c;
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
      pcVar5 = str_1000faab;
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
    if (local_258 == 0) {
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
      uVar10 = local_258;
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
      cVar6 = 'd';
      pcVar5 = str_1000fab3;
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
    if (local_254 == 0) {
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
      uVar10 = local_254;
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
      pcVar5 = &DAT_1000f265;
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
    if (local_250 == 0) {
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
      cVar6 = 'u';
      pcVar5 = &DAT_1000f26e;
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
      cVar6 = 'u';
      pcVar5 = &DAT_1000f272;
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
      cVar6 = 'o';
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
      cVar6 = 'e';
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
      cVar6 = 's';
      pcVar5 = str_1000f280;
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
      cVar6 = 'n';
      pcVar5 = str_1000f286;
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
      pcVar5 = str_1000fac2;
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
      (*(code *)api[3])(str_1000fb00,str_1000fb27,&local_1bc);
    }
  }
  recovered_10007fd0((int)local_214,&local_268,(undefined1 *)&local_568);
  DAT_10011000 = api;
  if (((code *)api[8] == (code *)0x0) ||
     (iVar3 = (*(code *)api[8])(recovered_1000e460,3,str_1000f0cb), iVar3 == 0)) {
    uVar10 = 0;
    do {
      uVar11 = uVar10;
      uVar10 = uVar11 + 1;
    } while (*(char *)((int)&local_568 + uVar11) != '\0');
    iVar3 = 0;
    if (uVar11 + 1 < 0x300) {
      cVar6 = ' ';
      pcVar5 = str_1000fb8a;
      do {
        pcVar5 = pcVar5 + 1;
        *(char *)((int)&local_568 + uVar11) = cVar6;
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
    } while (*(char *)((int)&local_568 + uVar11) != '\0');
    iVar3 = 1;
    if (uVar11 + 1 < 0x300) {
      cVar6 = ' ';
      pcVar5 = str_1000fb73;
      do {
        pcVar5 = pcVar5 + 1;
        *(char *)((int)&local_568 + uVar11) = cVar6;
        uVar11 = uVar11 + 1;
        cVar6 = *pcVar5;
        if (cVar6 == '\0') break;
      } while (uVar11 < 0x2ff);
    }
  }
  *(undefined1 *)((int)&local_568 + uVar11) = 0;
  if ((((*api == 0x54584b57) && (0xa7 < (uint)api[2])) && ((code *)api[0x29] != (code *)0x0)) &&
     (iVar4 = (*(code *)api[0x29])(recovered_1000e490,7,str_1000f0cb), iVar4 != 0)) {
    uVar10 = 0;
    do {
      uVar11 = uVar10;
      uVar10 = uVar11 + 1;
    } while (*(char *)((int)&local_568 + uVar11) != '\0');
    iVar3 = 1;
    if (uVar11 + 1 < 0x300) {
      cVar6 = ' ';
      pcVar5 = str_1000fba7;
      do {
        pcVar5 = pcVar5 + 1;
        *(char *)((int)&local_568 + uVar11) = cVar6;
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
    } while (*(char *)((int)&local_568 + uVar11) != '\0');
    if (uVar11 + 1 < 0x300) {
      cVar6 = ' ';
      pcVar5 = str_1000fbbf;
      do {
        pcVar5 = pcVar5 + 1;
        *(char *)((int)&local_568 + uVar11) = cVar6;
        uVar11 = uVar11 + 1;
        cVar6 = *pcVar5;
        if (cVar6 == '\0') break;
      } while (uVar11 < 0x2ff);
    }
  }
  *(undefined1 *)((int)&local_568 + uVar11) = 0;
  uVar10 = 0;
  do {
    uVar11 = uVar10;
    uVar10 = uVar11 + 1;
  } while (*(char *)((int)&local_568 + uVar11) != '\0');
  if (uVar11 + 1 < 0x300) {
    cVar6 = ' ';
    pcVar5 = str_1000fb48;
    do {
      pcVar5 = pcVar5 + 1;
      *(char *)((int)&local_568 + uVar11) = cVar6;
      uVar11 = uVar11 + 1;
      cVar6 = *pcVar5;
      if (cVar6 == '\0') break;
    } while (uVar11 < 0x2ff);
  }
  *(undefined1 *)((int)&local_568 + uVar11) = 0;
  local_21c = iVar3;
  if (((*api == 0x54584b57) && (0x43 < (uint)api[2])) && ((code *)api[0x10] != (code *)0x0)) {
    iVar3 = (*(code *)api[0x10])(local_200);
    if (((iVar3 != 0) && (local_1f0 != 0)) &&
       ((local_1ec != 0 && ((local_1f4 != 0 && (local_200[0] != 0)))))) {
      recovered_1000e4c0((int)&local_568,0x300,str_1000fbfc,(int)local_200);
      if ((*api == 0x54584b57) &&
         (((0xb7 < (uint)api[2] && ((code *)api[0x2d] != (code *)0x0)) &&
          (uVar10 = (*(code *)api[0x2d])(1), (uVar10 & 1) != 0)))) {
        uVar10 = 0;
        do {
          uVar11 = uVar10;
          uVar10 = uVar11 + 1;
        } while (*(char *)((int)&local_568 + uVar11) != '\0');
        if (uVar11 + 1 < 0x300) {
          cVar6 = ' ';
          pcVar5 = str_1000fc0e;
          do {
            pcVar5 = pcVar5 + 1;
            *(char *)((int)&local_568 + uVar11) = cVar6;
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
        } while (*(char *)((int)&local_568 + uVar11) != '\0');
        if (uVar11 + 1 < 0x300) {
          cVar6 = ' ';
          pcVar5 = str_1000fc30;
          do {
            pcVar5 = pcVar5 + 1;
            *(char *)((int)&local_568 + uVar11) = cVar6;
            uVar11 = uVar11 + 1;
            cVar6 = *pcVar5;
            if (cVar6 == '\0') break;
          } while (uVar11 < 0x2ff);
        }
      }
      *(undefined1 *)((int)&local_568 + uVar11) = 0;
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
        pcVar5 = str_1000f0e8;
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
        pcVar5 = str_1000fc70;
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
          (iVar3 = (*(code *)api[0x31])(&local_1bc,recovered_1000e7f0), iVar3 != 0)))) {
        uVar10 = 0;
        do {
          uVar11 = uVar10;
          uVar10 = uVar11 + 1;
        } while (*(char *)((int)&local_568 + uVar11) != '\0');
        if (uVar11 + 1 < 0x300) {
          cVar6 = ' ';
          pcVar5 = str_1000fc85;
          do {
            pcVar5 = pcVar5 + 1;
            *(char *)((int)&local_568 + uVar11) = cVar6;
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
        } while (*(char *)((int)&local_568 + uVar11) != '\0');
        if (uVar11 + 1 < 0x300) {
          cVar6 = ' ';
          pcVar5 = str_1000fc9b;
          do {
            pcVar5 = pcVar5 + 1;
            *(char *)((int)&local_568 + uVar11) = cVar6;
            uVar11 = uVar11 + 1;
            cVar6 = *pcVar5;
            if (cVar6 == '\0') break;
          } while (uVar11 < 0x2ff);
        }
      }
      *(undefined1 *)((int)&local_568 + uVar11) = 0;
      uVar10 = 0;
      do {
        uVar11 = uVar10;
        uVar10 = uVar11 + 1;
      } while (*(char *)((int)&local_568 + uVar11) != '\0');
      local_218 = 1;
      if (uVar11 + 1 < 0x300) {
        cVar6 = ' ';
        pcVar5 = str_1000fc4c;
        do {
          pcVar5 = pcVar5 + 1;
          *(char *)((int)&local_568 + uVar11) = cVar6;
          uVar11 = uVar11 + 1;
          cVar6 = *pcVar5;
          if (cVar6 == '\0') break;
        } while (uVar11 < 0x2ff);
      }
      goto LAB_10003417;
    }
  }
  uVar10 = 0;
  do {
    uVar11 = uVar10;
    uVar10 = uVar11 + 1;
  } while (*(char *)((int)&local_568 + uVar11) != '\0');
  local_218 = 0;
  if (uVar11 + 1 < 0x300) {
    cVar6 = ' ';
    pcVar5 = str_1000fbdd;
    do {
      pcVar5 = pcVar5 + 1;
      *(char *)((int)&local_568 + uVar11) = cVar6;
      uVar11 = uVar11 + 1;
      cVar6 = *pcVar5;
      if (cVar6 == '\0') break;
    } while (uVar11 < 0x2ff);
  }
LAB_10003417:
  *(undefined1 *)((int)&local_568 + uVar11) = 0;
  if (local_248 != 0) {
    local_1bc = local_1bc & 0xffffff00;
    uVar10 = 0;
    do {
      uVar11 = uVar10;
      uVar10 = uVar11 + 1;
    } while (local_1ac[uVar11 - 0x10] != '\0');
    if (uVar11 + 1 < 0x180) {
      cVar6 = 'b';
      pcVar5 = str_1000fcb4;
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
      pcVar5 = str_1000fd08;
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
      pcVar5 = &DAT_1000f272;
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
      cVar6 = 'o';
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
      cVar6 = 'e';
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
    if (uVar11 + 1 < 0x180) {
      cVar6 = ' ';
      pcVar5 = str_1000fd14;
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
      (*(code *)api[3])(str_1000fd61,str_1000fd86,&local_1bc);
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
    pcVar5 = str_1000fd9d;
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
    pcVar5 = str_1000fe0c;
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
    cVar6 = 'u';
    pcVar5 = &DAT_1000f272;
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
    cVar6 = 'o';
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
    cVar6 = 'e';
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
  pcVar5 = str_1000f2e3;
  if (local_21c != 0) {
    pcVar5 = &DAT_1000f2de;
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
      pcVar12 = str_1000fe1b;
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
    pcVar5 = str_1000fe2e;
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
    (*(code *)api[3])(str_1000fe6a,str_1000fe91,&local_1bc);
  }
  if (local_250 != 0) {
    local_1bc = local_1bc & 0xffffff00;
    uVar10 = 0;
    do {
      uVar11 = uVar10;
      uVar10 = uVar11 + 1;
    } while (local_1ac[uVar11 - 0x10] != '\0');
    if (uVar11 + 1 < 0x100) {
      cVar6 = 'c';
      pcVar5 = str_1000feac;
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
      pcVar5 = &DAT_1000f265;
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
      if (uVar11 + 1 < 0x100) {
        local_1ac[uVar11 - 0x10] = *(char *)((int)local_200 + iVar3);
        local_1ac[uVar11 - 0xf] = '\0';
      }
    } while (uVar2 != 0);
    if ((code *)api[3] != (code *)0x0) {
      (*(code *)api[3])(str_1000fef7,str_1000ff20,&local_1bc);
    }
  }
  if (local_258 != 0) {
    local_1bc = local_1bc & 0xffffff00;
    uVar10 = 0;
    do {
      uVar11 = uVar10;
      uVar10 = uVar11 + 1;
    } while (local_1ac[uVar11 - 0x10] != '\0');
    if (uVar11 + 1 < 0x100) {
      cVar6 = 'f';
      pcVar5 = str_1000ff39;
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
        recovered_1000e4c0((int)&local_1bc,0x100,str_1000ff55,(int)local_200);
      }
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
      cVar6 = 'n';
      pcVar5 = str_1000f241;
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
    if (local_258 == 0) {
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
      uVar10 = local_258;
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
      cVar6 = 'd';
      pcVar5 = str_1000fab3;
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
    pcVar5 = str_1000f2e3;
    if (local_218 != 0) {
      pcVar5 = &DAT_1000f2de;
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
        pcVar12 = str_1000fe1b;
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
      (*(code *)api[3])(str_1000ff60,str_1000ff8a,&local_1bc);
    }
  }
  recovered_10007fd0((int)local_214,&local_268,(undefined1 *)&local_568);
  if ((code *)api[3] != (code *)0x0) {
    (*(code *)api[3])(str_1000f01a,str_1000f03b,&local_568);
  }
  return 1;
}

#undef DAT_1000f130
#undef DAT_1000f265
#undef DAT_1000f26a
#undef DAT_1000f26e
#undef DAT_1000f272
#undef DAT_1000f277
#undef DAT_1000f27c
#undef DAT_1000f2de
#undef DAT_1000f320
#undef DAT_1000f399
#undef DAT_1000f3a0
#undef DAT_1000f4ae
#undef DAT_10011000
#undef str_1000effc
#undef str_1000f01a
#undef str_1000f03b
#undef str_1000f05b
#undef str_1000f080
#undef str_1000f0a6
#undef str_1000f0cb
#undef str_1000f0e8
#undef str_1000f138
#undef str_1000f241
#undef str_1000f280
#undef str_1000f286
#undef str_1000f2e3
#undef str_1000f2e9
#undef str_1000f2fd
#undef str_1000f309
#undef str_1000f313
#undef str_1000f325
#undef str_1000f331
#undef str_1000f35f
#undef str_1000f369
#undef str_1000f37e
#undef str_1000f38b
#undef str_1000f3a9
#undef str_1000f3b3
#undef str_1000f3bf
#undef str_1000f3d1
#undef str_1000f3e0
#undef str_1000f3fe
#undef str_1000f40c
#undef str_1000f417
#undef str_1000f428
#undef str_1000f438
#undef str_1000f442
#undef str_1000f44b
#undef str_1000f457
#undef str_1000f46e
#undef str_1000f496
#undef str_1000f49d
#undef str_1000f4a3
#undef str_1000f4b4
#undef str_1000f4cc
#undef str_1000f4e7
#undef str_1000f513
#undef str_1000f533
#undef str_1000f564
#undef str_1000f571
#undef str_1000f583
#undef str_1000f58d
#undef str_1000f59a
#undef str_1000f5a7
#undef str_1000f5b8
#undef str_1000f5c8
#undef str_1000f5d5
#undef str_1000f5e2
#undef str_1000f5ee
#undef str_1000f5f7
#undef str_1000f60a
#undef str_1000f62f
#undef str_1000fa75
#undef str_1000faa3
#undef str_1000faab
#undef str_1000fab3
#undef str_1000fac2
#undef str_1000fb00
#undef str_1000fb27
#undef str_1000fb48
#undef str_1000fb73
#undef str_1000fb8a
#undef str_1000fba7
#undef str_1000fbbf
#undef str_1000fbdd
#undef str_1000fbfc
#undef str_1000fc0e
#undef str_1000fc30
#undef str_1000fc4c
#undef str_1000fc70
#undef str_1000fc85
#undef str_1000fc9b
#undef str_1000fcb4
#undef str_1000fd08
#undef str_1000fd14
#undef str_1000fd61
#undef str_1000fd86
#undef str_1000fd9d
#undef str_1000fe0c
#undef str_1000fe1b
#undef str_1000fe2e
#undef str_1000fe6a
#undef str_1000fe91
#undef str_1000feac
#undef str_1000fef7
#undef str_1000ff20
#undef str_1000ff39
#undef str_1000ff55
#undef str_1000ff60
#undef str_1000ff8a
#undef local_610
#undef local_5ac
#undef auStack_12c
#undef local_568
#undef local_268
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
#undef cStack_569

#undef DAT_1000f265
#define DAT_1000f265 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x347U)))
#undef DAT_1000f26a
#define DAT_1000f26a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x34cU)))
#undef DAT_1000f26e
#define DAT_1000f26e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x350U)))
#undef DAT_1000f272
#define DAT_1000f272 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x354U)))
#undef DAT_1000f277
#define DAT_1000f277 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x359U)))
#undef DAT_1000f27c
#define DAT_1000f27c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x35eU)))
#undef DAT_1000f2a3
#define DAT_1000f2a3 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x385U)))
#undef DAT_1000f2a7
#define DAT_1000f2a7 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x389U)))
#undef DAT_1000f2de
#define DAT_1000f2de (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3c0U)))
#undef str_1000f13f
#define str_1000f13f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x221U)))
#undef str_1000f1f3
#define str_1000f1f3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2d5U)))
#undef str_1000f203
#define str_1000f203 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2e5U)))
#undef str_1000f20d
#define str_1000f20d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2efU)))
#undef str_1000f218
#define str_1000f218 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2faU)))
#undef str_1000f226
#define str_1000f226 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x308U)))
#undef str_1000f233
#define str_1000f233 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x315U)))
#undef str_1000f241
#define str_1000f241 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x323U)))
#undef str_1000f24f
#define str_1000f24f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x331U)))
#undef str_1000f280
#define str_1000f280 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x362U)))
#undef str_1000f286
#define str_1000f286 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x368U)))
#undef str_1000f28e
#define str_1000f28e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x370U)))
#undef str_1000f297
#define str_1000f297 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x379U)))
#undef str_1000f2ab
#define str_1000f2ab (*(char (*)[1])(((uintptr_t)pf_module_state + 0x38dU)))
#undef str_1000f2bc
#define str_1000f2bc (*(char (*)[1])(((uintptr_t)pf_module_state + 0x39eU)))
#undef str_1000f2ca
#define str_1000f2ca (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3acU)))
#undef str_1000f2e3
#define str_1000f2e3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3c5U)))
#define local_14 (*(uint * *)(frame + 28))
#define abStack_1f (*(byte (*)[11])(frame + 17))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007fd0
 */

void recovered_10007fd0(int in_ECX,uint *in_EDX,undefined1 *param_3)

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
LAB_100080e0:
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
      goto LAB_1000817a;
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
      pcVar6 = str_1000f13f;
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
        pcVar6 = str_1000f1f3;
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
      if (uVar7 != 0) goto LAB_100080e0;
      uVar7 = 0;
      do {
        uVar3 = uVar7;
        uVar7 = uVar3 + 1;
      } while (param_3[uVar3] != '\0');
      if (uVar3 + 1 < 0x300) {
        *(undefined2 *)(param_3 + uVar3) = 0x30;
      }
LAB_1000817a:
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
          pcVar6 = str_1000f203;
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
  uVar7 = *local_14;
  if (param_3 == (undefined1 *)0x0) {
    if (uVar7 != 0) goto LAB_10008314;
LAB_10008399:
    uVar7 = local_14[1];
LAB_100083a8:
    if (uVar7 != 0) goto LAB_10008464;
LAB_100084e9:
    uVar7 = local_14[2];
LAB_100084f8:
    if (uVar7 != 0) goto LAB_100085b4;
LAB_10008639:
    uVar7 = local_14[3];
LAB_10008648:
    if (uVar7 != 0) goto LAB_10008704;
LAB_10008789:
    uVar7 = local_14[4];
LAB_10008798:
    if (uVar7 != 0) goto LAB_10008854;
LAB_100088d9:
    uVar7 = local_14[5];
LAB_100088e8:
    if (uVar7 != 0) goto LAB_100089a4;
LAB_10008a29:
    uVar7 = local_14[6];
LAB_10008a38:
    if (uVar7 != 0) goto LAB_10008af4;
LAB_10008b79:
    uVar7 = local_14[7];
LAB_10008b88:
    if (uVar7 != 0) goto LAB_10008c44;
LAB_10008cc9:
    uVar7 = local_14[8];
LAB_10008cd8:
    if (uVar7 != 0) goto LAB_10008d94;
LAB_10008e19:
    uVar7 = local_14[9];
LAB_10008e28:
    if (uVar7 != 0) goto LAB_10008ee4;
LAB_10008f69:
    uVar7 = local_14[10];
LAB_10008f78:
    if (uVar7 != 0) goto LAB_10009034;
LAB_100090b9:
    uVar7 = local_14[0xb];
LAB_100090c8:
    if (uVar7 != 0) goto LAB_10009184;
LAB_10009209:
    uVar7 = local_14[0xc];
LAB_10009218:
    if (uVar7 != 0) goto LAB_100092d4;
LAB_10009359:
    uVar7 = local_14[0xd];
LAB_10009368:
    if (uVar7 != 0) goto LAB_10009424;
LAB_100094a9:
    uVar7 = local_14[0xe];
LAB_100094b8:
    if (uVar7 != 0) goto LAB_10009574;
LAB_100095f9:
    uVar7 = local_14[0xf];
LAB_10009608:
    if (uVar7 != 0) goto LAB_100096c4;
LAB_10009749:
    uVar7 = local_14[0x10];
LAB_10009758:
    if (uVar7 != 0) goto LAB_10009814;
LAB_10009899:
    uVar7 = local_14[0x11];
LAB_100098a8:
    if (uVar7 != 0) goto LAB_10009964;
LAB_100099e9:
    uVar7 = local_14[0x12];
LAB_100099f8:
    if (uVar7 == 0) {
      return;
    }
  }
  else {
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
      pcVar6 = str_1000f20d;
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
      uVar7 = local_14[1];
    }
    else {
LAB_10008314:
      uVar3 = 0;
      do {
        abStack_1f[uVar3 + 1] = (char)uVar7 + (char)(uVar7 / 10) * -10 | 0x30;
        uVar4 = uVar3 + 1;
        if (8 < uVar3) break;
        bVar2 = 9 < uVar7;
        uVar3 = uVar4;
        uVar7 = uVar7 / 10;
      } while (bVar2);
LAB_10008356:
      do {
        uVar7 = uVar4 - 1;
        if (param_3 == (undefined1 *)0x0) {
          uVar4 = uVar7;
          if (uVar7 == 0) goto LAB_10008399;
          goto LAB_10008356;
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
      if (param_3 == (undefined1 *)0x0) goto LAB_100083a8;
    }
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
      pcVar6 = str_1000f218;
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
      uVar7 = local_14[2];
    }
    else {
LAB_10008464:
      uVar3 = 0;
      do {
        abStack_1f[uVar3 + 1] = (char)uVar7 + (char)(uVar7 / 10) * -10 | 0x30;
        uVar4 = uVar3 + 1;
        if (8 < uVar3) break;
        bVar2 = 9 < uVar7;
        uVar3 = uVar4;
        uVar7 = uVar7 / 10;
      } while (bVar2);
LAB_100084a6:
      do {
        uVar7 = uVar4 - 1;
        if (param_3 == (undefined1 *)0x0) {
          uVar4 = uVar7;
          if (uVar7 == 0) goto LAB_100084e9;
          goto LAB_100084a6;
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
      if (param_3 == (undefined1 *)0x0) goto LAB_100084f8;
    }
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
      pcVar6 = str_1000f226;
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
      uVar7 = local_14[3];
    }
    else {
LAB_100085b4:
      uVar3 = 0;
      do {
        abStack_1f[uVar3 + 1] = (char)uVar7 + (char)(uVar7 / 10) * -10 | 0x30;
        uVar4 = uVar3 + 1;
        if (8 < uVar3) break;
        bVar2 = 9 < uVar7;
        uVar3 = uVar4;
        uVar7 = uVar7 / 10;
      } while (bVar2);
LAB_100085f6:
      do {
        uVar7 = uVar4 - 1;
        if (param_3 == (undefined1 *)0x0) {
          uVar4 = uVar7;
          if (uVar7 == 0) goto LAB_10008639;
          goto LAB_100085f6;
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
      if (param_3 == (undefined1 *)0x0) goto LAB_10008648;
    }
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
      pcVar6 = str_1000f233;
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
      uVar7 = local_14[4];
    }
    else {
LAB_10008704:
      uVar3 = 0;
      do {
        abStack_1f[uVar3 + 1] = (char)uVar7 + (char)(uVar7 / 10) * -10 | 0x30;
        uVar4 = uVar3 + 1;
        if (8 < uVar3) break;
        bVar2 = 9 < uVar7;
        uVar3 = uVar4;
        uVar7 = uVar7 / 10;
      } while (bVar2);
LAB_10008746:
      do {
        uVar7 = uVar4 - 1;
        if (param_3 == (undefined1 *)0x0) {
          uVar4 = uVar7;
          if (uVar7 == 0) goto LAB_10008789;
          goto LAB_10008746;
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
      if (param_3 == (undefined1 *)0x0) goto LAB_10008798;
    }
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
      pcVar6 = str_1000f241;
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
      uVar7 = local_14[5];
    }
    else {
LAB_10008854:
      uVar3 = 0;
      do {
        abStack_1f[uVar3 + 1] = (char)uVar7 + (char)(uVar7 / 10) * -10 | 0x30;
        uVar4 = uVar3 + 1;
        if (8 < uVar3) break;
        bVar2 = 9 < uVar7;
        uVar3 = uVar4;
        uVar7 = uVar7 / 10;
      } while (bVar2);
LAB_10008896:
      do {
        uVar7 = uVar4 - 1;
        if (param_3 == (undefined1 *)0x0) {
          uVar4 = uVar7;
          if (uVar7 == 0) goto LAB_100088d9;
          goto LAB_10008896;
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
      if (param_3 == (undefined1 *)0x0) goto LAB_100088e8;
    }
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
      pcVar6 = str_1000f24f;
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
      uVar7 = local_14[6];
    }
    else {
LAB_100089a4:
      uVar3 = 0;
      do {
        abStack_1f[uVar3 + 1] = (char)uVar7 + (char)(uVar7 / 10) * -10 | 0x30;
        uVar4 = uVar3 + 1;
        if (8 < uVar3) break;
        bVar2 = 9 < uVar7;
        uVar3 = uVar4;
        uVar7 = uVar7 / 10;
      } while (bVar2);
LAB_100089e6:
      do {
        uVar7 = uVar4 - 1;
        if (param_3 == (undefined1 *)0x0) {
          uVar4 = uVar7;
          if (uVar7 == 0) goto LAB_10008a29;
          goto LAB_100089e6;
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
      if (param_3 == (undefined1 *)0x0) goto LAB_10008a38;
    }
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
      pcVar6 = &DAT_1000f265;
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
    if (uVar7 == 0) {
      uVar7 = 0;
      do {
        uVar3 = uVar7;
        uVar7 = uVar3 + 1;
      } while (param_3[uVar3] != '\0');
      if (uVar3 + 1 < 0x300) {
        *(undefined2 *)(param_3 + uVar3) = 0x30;
      }
      uVar7 = local_14[7];
    }
    else {
LAB_10008af4:
      uVar3 = 0;
      do {
        abStack_1f[uVar3 + 1] = (char)uVar7 + (char)(uVar7 / 10) * -10 | 0x30;
        uVar4 = uVar3 + 1;
        if (8 < uVar3) break;
        bVar2 = 9 < uVar7;
        uVar3 = uVar4;
        uVar7 = uVar7 / 10;
      } while (bVar2);
LAB_10008b36:
      do {
        uVar7 = uVar4 - 1;
        if (param_3 == (undefined1 *)0x0) {
          uVar4 = uVar7;
          if (uVar7 == 0) goto LAB_10008b79;
          goto LAB_10008b36;
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
      if (param_3 == (undefined1 *)0x0) goto LAB_10008b88;
    }
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
    if (uVar7 == 0) {
      uVar7 = 0;
      do {
        uVar3 = uVar7;
        uVar7 = uVar3 + 1;
      } while (param_3[uVar3] != '\0');
      if (uVar3 + 1 < 0x300) {
        *(undefined2 *)(param_3 + uVar3) = 0x30;
      }
      uVar7 = local_14[8];
    }
    else {
LAB_10008c44:
      uVar3 = 0;
      do {
        abStack_1f[uVar3 + 1] = (char)uVar7 + (char)(uVar7 / 10) * -10 | 0x30;
        uVar4 = uVar3 + 1;
        if (8 < uVar3) break;
        bVar2 = 9 < uVar7;
        uVar3 = uVar4;
        uVar7 = uVar7 / 10;
      } while (bVar2);
LAB_10008c86:
      do {
        uVar7 = uVar4 - 1;
        if (param_3 == (undefined1 *)0x0) {
          uVar4 = uVar7;
          if (uVar7 == 0) goto LAB_10008cc9;
          goto LAB_10008c86;
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
      if (param_3 == (undefined1 *)0x0) goto LAB_10008cd8;
    }
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
      pcVar6 = &DAT_1000f26e;
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
    if (uVar7 == 0) {
      uVar7 = 0;
      do {
        uVar3 = uVar7;
        uVar7 = uVar3 + 1;
      } while (param_3[uVar3] != '\0');
      if (uVar3 + 1 < 0x300) {
        *(undefined2 *)(param_3 + uVar3) = 0x30;
      }
      uVar7 = local_14[9];
    }
    else {
LAB_10008d94:
      uVar3 = 0;
      do {
        abStack_1f[uVar3 + 1] = (char)uVar7 + (char)(uVar7 / 10) * -10 | 0x30;
        uVar4 = uVar3 + 1;
        if (8 < uVar3) break;
        bVar2 = 9 < uVar7;
        uVar3 = uVar4;
        uVar7 = uVar7 / 10;
      } while (bVar2);
LAB_10008dd6:
      do {
        uVar7 = uVar4 - 1;
        if (param_3 == (undefined1 *)0x0) {
          uVar4 = uVar7;
          if (uVar7 == 0) goto LAB_10008e19;
          goto LAB_10008dd6;
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
      if (param_3 == (undefined1 *)0x0) goto LAB_10008e28;
    }
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
      pcVar6 = &DAT_1000f272;
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
    if (uVar7 == 0) {
      uVar7 = 0;
      do {
        uVar3 = uVar7;
        uVar7 = uVar3 + 1;
      } while (param_3[uVar3] != '\0');
      if (uVar3 + 1 < 0x300) {
        *(undefined2 *)(param_3 + uVar3) = 0x30;
      }
      uVar7 = local_14[10];
    }
    else {
LAB_10008ee4:
      uVar3 = 0;
      do {
        abStack_1f[uVar3 + 1] = (char)uVar7 + (char)(uVar7 / 10) * -10 | 0x30;
        uVar4 = uVar3 + 1;
        if (8 < uVar3) break;
        bVar2 = 9 < uVar7;
        uVar3 = uVar4;
        uVar7 = uVar7 / 10;
      } while (bVar2);
LAB_10008f26:
      do {
        uVar7 = uVar4 - 1;
        if (param_3 == (undefined1 *)0x0) {
          uVar4 = uVar7;
          if (uVar7 == 0) goto LAB_10008f69;
          goto LAB_10008f26;
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
      if (param_3 == (undefined1 *)0x0) goto LAB_10008f78;
    }
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
    if (uVar7 == 0) {
      uVar7 = 0;
      do {
        uVar3 = uVar7;
        uVar7 = uVar3 + 1;
      } while (param_3[uVar3] != '\0');
      if (uVar3 + 1 < 0x300) {
        *(undefined2 *)(param_3 + uVar3) = 0x30;
      }
      uVar7 = local_14[0xb];
    }
    else {
LAB_10009034:
      uVar3 = 0;
      do {
        abStack_1f[uVar3 + 1] = (char)uVar7 + (char)(uVar7 / 10) * -10 | 0x30;
        uVar4 = uVar3 + 1;
        if (8 < uVar3) break;
        bVar2 = 9 < uVar7;
        uVar3 = uVar4;
        uVar7 = uVar7 / 10;
      } while (bVar2);
LAB_10009076:
      do {
        uVar7 = uVar4 - 1;
        if (param_3 == (undefined1 *)0x0) {
          uVar4 = uVar7;
          if (uVar7 == 0) goto LAB_100090b9;
          goto LAB_10009076;
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
      if (param_3 == (undefined1 *)0x0) goto LAB_100090c8;
    }
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
    if (uVar7 == 0) {
      uVar7 = 0;
      do {
        uVar3 = uVar7;
        uVar7 = uVar3 + 1;
      } while (param_3[uVar3] != '\0');
      if (uVar3 + 1 < 0x300) {
        *(undefined2 *)(param_3 + uVar3) = 0x30;
      }
      uVar7 = local_14[0xc];
    }
    else {
LAB_10009184:
      uVar3 = 0;
      do {
        abStack_1f[uVar3 + 1] = (char)uVar7 + (char)(uVar7 / 10) * -10 | 0x30;
        uVar4 = uVar3 + 1;
        if (8 < uVar3) break;
        bVar2 = 9 < uVar7;
        uVar3 = uVar4;
        uVar7 = uVar7 / 10;
      } while (bVar2);
LAB_100091c6:
      do {
        uVar7 = uVar4 - 1;
        if (param_3 == (undefined1 *)0x0) {
          uVar4 = uVar7;
          if (uVar7 == 0) goto LAB_10009209;
          goto LAB_100091c6;
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
      if (param_3 == (undefined1 *)0x0) goto LAB_10009218;
    }
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
      pcVar6 = str_1000f280;
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
      uVar7 = local_14[0xd];
    }
    else {
LAB_100092d4:
      uVar3 = 0;
      do {
        abStack_1f[uVar3 + 1] = (char)uVar7 + (char)(uVar7 / 10) * -10 | 0x30;
        uVar4 = uVar3 + 1;
        if (8 < uVar3) break;
        bVar2 = 9 < uVar7;
        uVar3 = uVar4;
        uVar7 = uVar7 / 10;
      } while (bVar2);
LAB_10009316:
      do {
        uVar7 = uVar4 - 1;
        if (param_3 == (undefined1 *)0x0) {
          uVar4 = uVar7;
          if (uVar7 == 0) goto LAB_10009359;
          goto LAB_10009316;
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
      if (param_3 == (undefined1 *)0x0) goto LAB_10009368;
    }
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
      pcVar6 = str_1000f286;
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
      uVar7 = local_14[0xe];
    }
    else {
LAB_10009424:
      uVar3 = 0;
      do {
        abStack_1f[uVar3 + 1] = (char)uVar7 + (char)(uVar7 / 10) * -10 | 0x30;
        uVar4 = uVar3 + 1;
        if (8 < uVar3) break;
        bVar2 = 9 < uVar7;
        uVar3 = uVar4;
        uVar7 = uVar7 / 10;
      } while (bVar2);
LAB_10009466:
      do {
        uVar7 = uVar4 - 1;
        if (param_3 == (undefined1 *)0x0) {
          uVar4 = uVar7;
          if (uVar7 == 0) goto LAB_100094a9;
          goto LAB_10009466;
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
      if (param_3 == (undefined1 *)0x0) goto LAB_100094b8;
    }
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
      pcVar6 = str_1000f28e;
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
      uVar7 = local_14[0xf];
    }
    else {
LAB_10009574:
      uVar3 = 0;
      do {
        abStack_1f[uVar3 + 1] = (char)uVar7 + (char)(uVar7 / 10) * -10 | 0x30;
        uVar4 = uVar3 + 1;
        if (8 < uVar3) break;
        bVar2 = 9 < uVar7;
        uVar3 = uVar4;
        uVar7 = uVar7 / 10;
      } while (bVar2);
LAB_100095b6:
      do {
        uVar7 = uVar4 - 1;
        if (param_3 == (undefined1 *)0x0) {
          uVar4 = uVar7;
          if (uVar7 == 0) goto LAB_100095f9;
          goto LAB_100095b6;
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
      if (param_3 == (undefined1 *)0x0) goto LAB_10009608;
    }
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
      pcVar6 = str_1000f297;
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
      uVar7 = local_14[0x10];
    }
    else {
LAB_100096c4:
      uVar3 = 0;
      do {
        abStack_1f[uVar3 + 1] = (char)uVar7 + (char)(uVar7 / 10) * -10 | 0x30;
        uVar4 = uVar3 + 1;
        if (8 < uVar3) break;
        bVar2 = 9 < uVar7;
        uVar3 = uVar4;
        uVar7 = uVar7 / 10;
      } while (bVar2);
LAB_10009706:
      do {
        uVar7 = uVar4 - 1;
        if (param_3 == (undefined1 *)0x0) {
          uVar4 = uVar7;
          if (uVar7 == 0) goto LAB_10009749;
          goto LAB_10009706;
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
      if (param_3 == (undefined1 *)0x0) goto LAB_10009758;
    }
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
      pcVar6 = &DAT_1000f2a3;
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
    if (uVar7 == 0) {
      uVar7 = 0;
      do {
        uVar3 = uVar7;
        uVar7 = uVar3 + 1;
      } while (param_3[uVar3] != '\0');
      if (uVar3 + 1 < 0x300) {
        *(undefined2 *)(param_3 + uVar3) = 0x30;
      }
      uVar7 = local_14[0x11];
    }
    else {
LAB_10009814:
      uVar3 = 0;
      do {
        abStack_1f[uVar3 + 1] = (char)uVar7 + (char)(uVar7 / 10) * -10 | 0x30;
        uVar4 = uVar3 + 1;
        if (8 < uVar3) break;
        bVar2 = 9 < uVar7;
        uVar3 = uVar4;
        uVar7 = uVar7 / 10;
      } while (bVar2);
LAB_10009856:
      do {
        uVar7 = uVar4 - 1;
        if (param_3 == (undefined1 *)0x0) {
          uVar4 = uVar7;
          if (uVar7 == 0) goto LAB_10009899;
          goto LAB_10009856;
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
      if (param_3 == (undefined1 *)0x0) goto LAB_100098a8;
    }
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
      pcVar6 = &DAT_1000f2a7;
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
    if (uVar7 == 0) {
      uVar7 = 0;
      do {
        uVar3 = uVar7;
        uVar7 = uVar3 + 1;
      } while (param_3[uVar3] != '\0');
      if (uVar3 + 1 < 0x300) {
        *(undefined2 *)(param_3 + uVar3) = 0x30;
      }
      uVar7 = local_14[0x12];
    }
    else {
LAB_10009964:
      uVar3 = 0;
      do {
        abStack_1f[uVar3 + 1] = (char)uVar7 + (char)(uVar7 / 10) * -10 | 0x30;
        uVar4 = uVar3 + 1;
        if (8 < uVar3) break;
        bVar2 = 9 < uVar7;
        uVar3 = uVar4;
        uVar7 = uVar7 / 10;
      } while (bVar2);
LAB_100099a6:
      do {
        uVar7 = uVar4 - 1;
        if (param_3 == (undefined1 *)0x0) {
          uVar4 = uVar7;
          if (uVar7 == 0) goto LAB_100099e9;
          goto LAB_100099a6;
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
      uVar7 = local_14[0x12];
      if (param_3 == (undefined1 *)0x0) goto LAB_100099f8;
    }
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
      pcVar6 = str_1000f2ab;
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
      goto LAB_10009b37;
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
LAB_10009b37:
  pcVar6 = str_1000f2e3;
  if (local_14[0x13] != 0) {
    pcVar6 = &DAT_1000f2de;
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
        pcVar9 = str_1000f2bc;
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
  pcVar6 = str_1000f2e3;
  if (local_14[0x14] != 0) {
    pcVar6 = &DAT_1000f2de;
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
        pcVar9 = str_1000f2ca;
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

#undef DAT_1000f265
#undef DAT_1000f26a
#undef DAT_1000f26e
#undef DAT_1000f272
#undef DAT_1000f277
#undef DAT_1000f27c
#undef DAT_1000f2a3
#undef DAT_1000f2a7
#undef DAT_1000f2de
#undef str_1000f13f
#undef str_1000f1f3
#undef str_1000f203
#undef str_1000f20d
#undef str_1000f218
#undef str_1000f226
#undef str_1000f233
#undef str_1000f241
#undef str_1000f24f
#undef str_1000f280
#undef str_1000f286
#undef str_1000f28e
#undef str_1000f297
#undef str_1000f2ab
#undef str_1000f2bc
#undef str_1000f2ca
#undef str_1000f2e3
#undef local_14
#undef abStack_1f

#undef DAT_1000f26d
#define DAT_1000f26d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x34fU)))
#undef DAT_1000f26e
#define DAT_1000f26e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x350U)))
#undef DAT_1000f26f
#define DAT_1000f26f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x351U)))
#undef DAT_1000f270
#define DAT_1000f270 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x352U)))
#undef DAT_1000f638
#define DAT_1000f638 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x71aU)))
#undef DAT_1000f63e
#define DAT_1000f63e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x720U)))
#undef DAT_1000f695
#define DAT_1000f695 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x777U)))
#undef DAT_1000f696
#define DAT_1000f696 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x778U)))
#undef DAT_1000f697
#define DAT_1000f697 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x779U)))
#undef DAT_1000f698
#define DAT_1000f698 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x77aU)))
#undef DAT_1000f699
#define DAT_1000f699 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x77bU)))
#undef DAT_1000f69a
#define DAT_1000f69a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x77cU)))
#undef DAT_1000f6f7
#define DAT_1000f6f7 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7d9U)))
#undef DAT_1000f702
#define DAT_1000f702 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7e4U)))
#undef DAT_1000f84a
#define DAT_1000f84a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x92cU)))
#undef DAT_1000f852
#define DAT_1000f852 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x934U)))
#undef DAT_1000f885
#define DAT_1000f885 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x967U)))
#undef DAT_1000f88d
#define DAT_1000f88d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x96fU)))
#undef DAT_1000f895
#define DAT_1000f895 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x977U)))
#undef DAT_1000f8c2
#define DAT_1000f8c2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x9a4U)))
#undef DAT_1000f8f2
#define DAT_1000f8f2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x9d4U)))
#undef DAT_1000f8fa
#define DAT_1000f8fa (*(uint8_t *)(((uintptr_t)pf_module_state + 0x9dcU)))
#undef DAT_1000f902
#define DAT_1000f902 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x9e4U)))
#undef DAT_1000f914
#define DAT_1000f914 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x9f6U)))
#undef DAT_1000f922
#define DAT_1000f922 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa04U)))
#undef DAT_1000f94c
#define DAT_1000f94c (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa2eU)))
#undef str_1000f10f
#define str_1000f10f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1f1U)))
#undef str_1000f280
#define str_1000f280 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x362U)))
#undef str_1000f286
#define str_1000f286 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x368U)))
#undef str_1000f28e
#define str_1000f28e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x370U)))
#undef str_1000f651
#define str_1000f651 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x733U)))
#undef str_1000f65f
#define str_1000f65f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x741U)))
#undef str_1000f684
#define str_1000f684 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x766U)))
#undef str_1000f68d
#define str_1000f68d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x76fU)))
#undef str_1000f69b
#define str_1000f69b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x77dU)))
#undef str_1000f6a2
#define str_1000f6a2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x784U)))
#undef str_1000f6ae
#define str_1000f6ae (*(char (*)[1])(((uintptr_t)pf_module_state + 0x790U)))
#undef str_1000f6ba
#define str_1000f6ba (*(char (*)[1])(((uintptr_t)pf_module_state + 0x79cU)))
#undef str_1000f6d0
#define str_1000f6d0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7b2U)))
#undef str_1000f70e
#define str_1000f70e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7f0U)))
#undef str_1000f744
#define str_1000f744 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x826U)))
#undef str_1000f76c
#define str_1000f76c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x84eU)))
#undef str_1000f77c
#define str_1000f77c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x85eU)))
#undef str_1000f78d
#define str_1000f78d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x86fU)))
#undef str_1000f79d
#define str_1000f79d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x87fU)))
#undef str_1000f7b1
#define str_1000f7b1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x893U)))
#undef str_1000f7c9
#define str_1000f7c9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x8abU)))
#undef str_1000f7e1
#define str_1000f7e1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x8c3U)))
#undef str_1000f7fa
#define str_1000f7fa (*(char (*)[1])(((uintptr_t)pf_module_state + 0x8dcU)))
#undef str_1000f80b
#define str_1000f80b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x8edU)))
#undef str_1000f81b
#define str_1000f81b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x8fdU)))
#undef str_1000f82a
#define str_1000f82a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x90cU)))
#undef str_1000f840
#define str_1000f840 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x922U)))
#undef str_1000f859
#define str_1000f859 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x93bU)))
#undef str_1000f863
#define str_1000f863 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x945U)))
#undef str_1000f86f
#define str_1000f86f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x951U)))
#undef str_1000f89c
#define str_1000f89c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x97eU)))
#undef str_1000f8a8
#define str_1000f8a8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x98aU)))
#undef str_1000f8c7
#define str_1000f8c7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x9a9U)))
#undef str_1000f8cf
#define str_1000f8cf (*(char (*)[1])(((uintptr_t)pf_module_state + 0x9b1U)))
#undef str_1000f8d7
#define str_1000f8d7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x9b9U)))
#undef str_1000f909
#define str_1000f909 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x9ebU)))
#undef str_1000f918
#define str_1000f918 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x9faU)))
#undef str_1000f926
#define str_1000f926 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa08U)))
#undef str_1000f92f
#define str_1000f92f (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa11U)))
#undef str_1000f938
#define str_1000f938 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa1aU)))
#undef str_1000f940
#define str_1000f940 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa22U)))
#define cStack_599 (*(char *)(frame + 23))
#define cStack_319 (*(char *)(frame + 663))
#define cStack_99 (*(char *)(frame + 1303))
#define local_598 (*(undefined4 *)(frame + 24))
#define local_318 (*(undefined2 *)(frame + 664))
#define local_98 (*(undefined4 *)(frame + 1304))
#define local_38 (*(uint *)(frame + 1400))
#define local_34 (*(char * *)(frame + 1404))
#define local_2f (*(byte *)(frame + 1409))
#define local_2e (*(undefined2 *)(frame + 1410))
#define local_2c (*(uint (*)[3])(frame + 1412))
#define local_20 (*(uint *)(frame + 1424))
#define local_1c (*(byte * *)(frame + 1428))
#define local_18 (*(byte * *)(frame + 1432))
#define local_14 (*(int * *)(frame + 1436))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009d10
 */

void recovered_10009d10(int *in_ECX,byte *in_EDX,int *param_3)

{
  unsigned char frame[1488] __attribute__((aligned(16))) = {0};

  short sVar1;
  bool bVar2;
  byte *pbVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  byte bVar7;
  ushort uVar8;
  byte *pbVar9;
  uint uVar10;
  char cVar11;
  byte bVar14;
  char *pcVar12;
  uint uVar13;
  byte bVar15;
  byte bVar16;
  ushort uVar17;
  byte *pbVar18;
  uint uVar19;
  byte *pbVar20;
  byte *pbVar21;
  int iVar22;
  char *pcVar23;
  bool bVar24;

  local_18 = in_EDX;
  if (in_EDX == (byte *)0x0) {
    return;
  }
  local_34 = (char *)(uint)in_EDX[8];
  switch((uintptr_t)((int)local_34 - 1U)) {
  case 0:
    local_1c = (byte *)str_1000f68d;
    break;
  case 1:
    local_1c = (byte *)str_1000f286;
    break;
  case 2:
    local_1c = (byte *)str_1000f684;
    break;
  case 3:
    local_1c = &DAT_1000f695;
    break;
  default:
switchD_10009d36_caseD_4:
    uVar17 = *(ushort *)(in_EDX + 4);
    if (uVar17 < 0x11ab) {
      if (uVar17 != 0x106b) {
        local_1c = (byte *)str_1000f6a2;
        if (uVar17 != 0x1180) {
          return;
        }
        break;
      }
    }
    else if ((uVar17 != 0x14e4) && (uVar17 != 0x11ab)) {
      return;
    }
    local_1c = (byte *)str_1000f6ae;
    break;
  case 5:
    local_1c = (byte *)str_1000f69b;
    break;
  case 0xb:
    bVar16 = in_EDX[9];
    if (bVar16 == 0) {
      local_1c = (byte *)str_1000f28e;
    }
    else if (bVar16 == 3) {
      local_1c = &DAT_1000f26d;
    }
    else {
      if (bVar16 != 5) goto switchD_10009d36_caseD_4;
      local_1c = (byte *)str_1000f280;
    }
  }
  if (param_3 == (int *)0x0) {
    return;
  }
  if (0x6f < (uint)param_3[1]) {
    return;
  }
  local_14 = in_ECX;
  *param_3 = *param_3 + 1;
  sVar1 = *(short *)(in_EDX + 4);
  iVar22 = 8;
  if (sVar1 == -0x7f7a) goto LAB_10009e64;
  if (sVar1 == 0x10de) {
    param_3[3] = param_3[3] + 1;
    bVar24 = true;
    if (local_34 != (char *)0x3) goto LAB_10009e6c;
    param_3[4] = param_3[4] + 1;
    uVar17 = *(ushort *)(in_EDX + 6);
    iVar22 = 0x14;
    if (uVar17 < 0x647) {
      if (((uVar17 == 0x407) || (uVar17 == 0x409)) || (uVar17 == 0x613)) goto LAB_10009e64;
    }
    else if (((uVar17 == 0x647) || (uVar17 == 0x867)) || (uVar17 == 0x863)) {
LAB_10009e64:
      *(int *)((int)param_3 + iVar22) = *(int *)((int)param_3 + iVar22) + 1;
      bVar24 = sVar1 != -0x7f7a;
      goto LAB_10009e6c;
    }
    goto LAB_10009eb1;
  }
  bVar24 = false;
LAB_10009e6c:
  switch((uintptr_t)((int)local_34 - 1U)) {
  case 0:
    iVar22 = 0x18;
    if (in_EDX[9] == 6) goto LAB_10009e9d;
    break;
  case 1:
    iVar22 = 0x34;
    goto LAB_10009e9d;
  case 3:
    iVar22 = 0x1c;
    if (in_EDX[9] == 3) goto LAB_10009e9d;
    break;
  case 0xb:
    bVar16 = in_EDX[9];
    if (bVar16 == 0) {
      iVar22 = 0x38;
    }
    else if (bVar16 == 5) {
      iVar22 = 0x30;
    }
    else {
      if (bVar16 != 3) break;
      param_3[8] = param_3[8] + 1;
      bVar16 = in_EDX[10];
      iVar22 = 0x24;
      if ((bVar16 != 0) &&
         (((sVar1 != -0x7f7a ||
           (((uVar6 = (uint)*(ushort *)(in_EDX + 6), (uVar6 & 0xfff8) != 0x27c8 &&
             (5 < uVar6 - 0x2830)) && (5 < uVar6 - 0x2934)))) && (iVar22 = 0x28, bVar16 != 0x10))))
      {
        if (bVar24) {
          uVar17 = *(ushort *)(in_EDX + 6);
          if (((((uVar17 | 2) == 0xaa7) || (iVar22 = 0x2c, bVar16 == 0x20)) || (uVar17 == 0xaa6)) ||
             (uVar17 == 0xaa9)) goto LAB_10009e9d;
        }
        else {
          iVar22 = 0x2c;
          if (bVar16 == 0x20) goto LAB_10009e9d;
        }
        break;
      }
    }
LAB_10009e9d:
    *(int *)((int)param_3 + iVar22) = *(int *)((int)param_3 + iVar22) + 1;
  }
  if (sVar1 == 0x1180) {
    param_3[0xf] = param_3[0xf] + 1;
  }
LAB_10009eb1:
  PF_PART1(local_318, 0) = '\0';
  uVar6 = 0;
  do {
    uVar5 = uVar6;
    uVar6 = uVar5 + 1;
  } while (*(char *)((int)&local_318 + uVar5) != '\0');
  if (uVar5 + 1 < 0x280) {
    cVar11 = 'r';
    pcVar12 = &DAT_1000f638;
    do {
      *(char *)((int)&local_318 + uVar5) = cVar11;
      uVar5 = uVar5 + 1;
      cVar11 = *pcVar12;
      if (cVar11 == '\0') break;
      pcVar12 = pcVar12 + 1;
    } while (uVar5 < 0x27f);
  }
  *(undefined1 *)((int)&local_318 + uVar5) = 0;
  pbVar9 = local_1c;
  uVar6 = 0;
  do {
    uVar5 = uVar6;
    uVar6 = uVar5 + 1;
  } while (*(char *)((int)&local_318 + uVar5) != '\0');
  bVar16 = *local_1c;
  pbVar20 = local_1c;
  if (uVar5 + 1 < 0x280 && bVar16 != 0) {
    do {
      *(byte *)((int)&local_318 + uVar5) = bVar16;
      uVar5 = uVar5 + 1;
      bVar16 = pbVar20[1];
      if (bVar16 == 0) break;
      pbVar20 = pbVar20 + 1;
    } while (uVar5 < 0x27f);
  }
  *(undefined1 *)((int)&local_318 + uVar5) = 0;
  pcVar12 = local_34;
  if (sVar1 == 0x10de) {
    uVar6 = 0;
    do {
      uVar5 = uVar6;
      uVar6 = uVar5 + 1;
    } while (*(char *)((int)&local_318 + uVar5) != '\0');
    if (uVar5 + 1 < 0x280) {
      cVar11 = ' ';
      pcVar23 = str_1000f6ba;
      do {
        pcVar23 = pcVar23 + 1;
        *(char *)((int)&local_318 + uVar5) = cVar11;
        uVar5 = uVar5 + 1;
        cVar11 = *pcVar23;
        if (cVar11 == '\0') break;
      } while (uVar5 < 0x27f);
    }
    *(undefined1 *)((int)&local_318 + uVar5) = 0;
    uVar17 = *(ushort *)(local_18 + 6);
    switch((uintptr_t)(uVar17)) {
    case 0xaa2:
      uVar6 = 0;
      do {
        uVar5 = uVar6;
        uVar6 = uVar5 + 1;
      } while (*(char *)((int)&local_318 + uVar5) != '\0');
      if (uVar5 + 1 < 0x280) {
        cVar11 = ' ';
        pcVar23 = &DAT_1000f702;
        do {
          *(char *)((int)&local_318 + uVar5) = cVar11;
          uVar5 = uVar5 + 1;
          cVar11 = *pcVar23;
          if (cVar11 == '\0') break;
          pcVar23 = pcVar23 + 1;
        } while (uVar5 < 0x27f);
      }
      break;
    default:
      goto switchD_1000a0b5_caseD_aa3;
    case 0xaa5:
    case 0xaa7:
      uVar6 = 0;
      do {
        uVar5 = uVar6;
        uVar6 = uVar5 + 1;
      } while (*(char *)((int)&local_318 + uVar5) != '\0');
      if (uVar5 + 1 < 0x280) {
        cVar11 = ' ';
        pcVar23 = str_1000f70e;
        do {
          pcVar23 = pcVar23 + 1;
          *(char *)((int)&local_318 + uVar5) = cVar11;
          uVar5 = uVar5 + 1;
          cVar11 = *pcVar23;
          if (cVar11 == '\0') break;
        } while (uVar5 < 0x27f);
      }
      break;
    case 0xaa6:
    case 0xaa9:
      uVar6 = 0;
      do {
        uVar5 = uVar6;
        uVar6 = uVar5 + 1;
      } while (*(char *)((int)&local_318 + uVar5) != '\0');
      if (uVar5 + 1 < 0x280) {
        cVar11 = ' ';
        pcVar23 = str_1000f744;
        do {
          pcVar23 = pcVar23 + 1;
          *(char *)((int)&local_318 + uVar5) = cVar11;
          uVar5 = uVar5 + 1;
          cVar11 = *pcVar23;
          if (cVar11 == '\0') break;
        } while (uVar5 < 0x27f);
      }
      break;
    case 0xab0:
      uVar6 = 0;
      do {
        uVar5 = uVar6;
        uVar6 = uVar5 + 1;
      } while (*(char *)((int)&local_318 + uVar5) != '\0');
      if (uVar5 + 1 < 0x280) {
        cVar11 = ' ';
        pcVar23 = str_1000f76c;
        do {
          pcVar23 = pcVar23 + 1;
          *(char *)((int)&local_318 + uVar5) = cVar11;
          uVar5 = uVar5 + 1;
          cVar11 = *pcVar23;
          if (cVar11 == '\0') break;
        } while (uVar5 < 0x27f);
      }
      break;
    case 0xab9:
      uVar6 = 0;
      do {
        uVar5 = uVar6;
        uVar6 = uVar5 + 1;
      } while (*(char *)((int)&local_318 + uVar5) != '\0');
      if (uVar5 + 1 < 0x280) {
        cVar11 = ' ';
        pcVar23 = str_1000f6d0;
        do {
          pcVar23 = pcVar23 + 1;
          *(char *)((int)&local_318 + uVar5) = cVar11;
          uVar5 = uVar5 + 1;
          cVar11 = *pcVar23;
          if (cVar11 == '\0') break;
        } while (uVar5 < 0x27f);
      }
      break;
    case 0xac0:
      uVar6 = 0;
      do {
        uVar5 = uVar6;
        uVar6 = uVar5 + 1;
      } while (*(char *)((int)&local_318 + uVar5) != '\0');
      if (uVar5 + 1 < 0x280) {
        cVar11 = ' ';
        pcVar23 = &DAT_1000f6f7;
        do {
          *(char *)((int)&local_318 + uVar5) = cVar11;
          uVar5 = uVar5 + 1;
          cVar11 = *pcVar23;
          if (cVar11 == '\0') break;
          pcVar23 = pcVar23 + 1;
        } while (uVar5 < 0x27f);
      }
    }
    *(undefined1 *)((int)&local_318 + uVar5) = 0;
    pbVar9 = local_1c;
switchD_1000a0b5_caseD_aa3:
    pbVar20 = local_18;
    if (pcVar12 == (char *)0x3) {
      if (uVar17 < 0x647) {
        if (((uVar17 == 0x407) || (uVar17 == 0x409)) || (uVar17 == 0x613)) goto LAB_1000a34d;
      }
      else if (((uVar17 == 0x647) || (uVar17 == 0x867)) || (uVar17 == 0x863)) {
LAB_1000a34d:
        uVar6 = 0;
        do {
          uVar5 = uVar6;
          uVar6 = uVar5 + 1;
        } while (*(char *)((int)&local_318 + uVar5) != '\0');
        if (uVar5 + 1 < 0x280) {
          cVar11 = ' ';
          pcVar12 = str_1000f77c;
          do {
            pcVar12 = pcVar12 + 1;
            *(char *)((int)&local_318 + uVar5) = cVar11;
            uVar5 = uVar5 + 1;
            cVar11 = *pcVar12;
            if (cVar11 == '\0') break;
          } while (uVar5 < 0x27f);
        }
        goto LAB_1000a387;
      }
    }
  }
  else if (sVar1 == -0x7f7a) {
    uVar6 = 0;
    do {
      uVar5 = uVar6;
      uVar6 = uVar5 + 1;
    } while (*(char *)((int)&local_318 + uVar5) != '\0');
    if (uVar5 + 1 < 0x280) {
      cVar11 = ' ';
      pcVar12 = &DAT_1000f63e;
      do {
        *(char *)((int)&local_318 + uVar5) = cVar11;
        uVar5 = uVar5 + 1;
        cVar11 = *pcVar12;
        if (cVar11 == '\0') break;
        pcVar12 = pcVar12 + 1;
      } while (uVar5 < 0x27f);
    }
LAB_1000a387:
    pbVar20 = local_18;
    *(undefined1 *)((int)&local_318 + uVar5) = 0;
  }
  else {
    pbVar20 = local_18;
    if (sVar1 == 0x1180) {
      uVar6 = 0;
      do {
        uVar5 = uVar6;
        uVar6 = uVar5 + 1;
      } while (*(char *)((int)&local_318 + uVar5) != '\0');
      if (uVar5 + 1 < 0x280) {
        cVar11 = ' ';
        pcVar12 = str_1000f651;
        do {
          pcVar12 = pcVar12 + 1;
          *(char *)((int)&local_318 + uVar5) = cVar11;
          uVar5 = uVar5 + 1;
          cVar11 = *pcVar12;
          if (cVar11 == '\0') break;
        } while (uVar5 < 0x27f);
      }
      goto LAB_1000a387;
    }
  }
  pbVar21 = local_18;
  local_598 = 0;
  pbVar18 = pbVar9;
  if ((((local_14 == (int *)0x0) || (*local_14 != 0x54584b57)) || ((uint)local_14[2] < 100)) ||
     (local_14[0x18] == 0)) {
    uVar6 = 0;
    do {
      uVar5 = uVar6;
      uVar6 = uVar5 + 1;
    } while (*(char *)((int)&local_318 + uVar5) != '\0');
    if (uVar5 + 1 < 0x280) {
      cVar11 = ' ';
      pcVar12 = str_1000f7b1;
      do {
        pcVar12 = pcVar12 + 1;
        *(char *)((int)&local_318 + uVar5) = cVar11;
        uVar5 = uVar5 + 1;
        cVar11 = *pcVar12;
        if (cVar11 == '\0') break;
      } while (uVar5 < 0x27f);
    }
LAB_1000a447:
    *(undefined1 *)((int)&local_318 + uVar5) = 0;
    local_98 = 0;
    local_2c[0] = 0;
    local_20 = 0;
    bVar24 = false;
  }
  else {
    if ((code *)local_14[0x17] == (code *)0x0) {
LAB_1000a89e:
      uVar6 = 0;
      do {
        uVar5 = uVar6;
        uVar6 = uVar5 + 1;
      } while (*(char *)((int)&local_318 + uVar5) != '\0');
      pbVar18 = pbVar9;
      if (uVar5 + 1 < 0x280) {
        cVar11 = ' ';
        pcVar12 = str_1000f7c9;
        do {
          pcVar12 = pcVar12 + 1;
          *(char *)((int)&local_318 + uVar5) = cVar11;
          uVar5 = uVar5 + 1;
          cVar11 = *pcVar12;
          if (cVar11 == '\0') break;
        } while (uVar5 < 0x27f);
      }
      goto LAB_1000a447;
    }
    iVar22 = (*(code *)local_14[0x17])(*local_18,pbVar20[1],pbVar20[2],4,2,&local_598);
    pbVar3 = local_18;
    pbVar18 = local_1c;
    pbVar20 = pbVar21;
    if (iVar22 == 0) goto LAB_1000a89e;
    if ((*(uint *)(pbVar21 + 0x14) & 1) == 0) {
      uVar6 = (uint)(*(uint *)(pbVar21 + 0x14) != 0) * 2;
    }
    else {
      uVar6 = 1;
    }
    uVar5 = uVar6;
    if (*(uint *)(pbVar21 + 0x18) != 0) {
      uVar5 = uVar6 | 2;
    }
    if ((*(uint *)(pbVar21 + 0x18) & 1) != 0) {
      uVar5 = uVar6 | 1;
    }
    uVar6 = uVar5;
    if (*(uint *)(pbVar21 + 0x1c) != 0) {
      uVar6 = uVar5 | 2;
    }
    if ((*(uint *)(pbVar21 + 0x1c) & 1) != 0) {
      uVar6 = uVar5 | 1;
    }
    uVar5 = uVar6;
    if (*(uint *)(pbVar21 + 0x20) != 0) {
      uVar5 = uVar6 | 2;
    }
    if ((*(uint *)(pbVar21 + 0x20) & 1) != 0) {
      uVar5 = uVar6 | 1;
    }
    uVar6 = uVar5;
    if (*(uint *)(pbVar21 + 0x24) != 0) {
      uVar6 = uVar5 | 2;
    }
    if ((*(uint *)(pbVar21 + 0x24) & 1) != 0) {
      uVar6 = uVar5 | 1;
    }
    uVar5 = uVar6;
    if (*(uint *)(pbVar21 + 0x28) != 0) {
      uVar5 = uVar6 | 2;
    }
    if ((*(uint *)(pbVar21 + 0x28) & 1) != 0) {
      uVar5 = uVar6 | 1;
    }
    uVar6 = (uint)*local_1c;
    if (*local_1c != 0) {
      pbVar9 = local_1c + 7;
      uVar13 = uVar6;
      do {
        uVar4 = (undefined1)uVar6;
        cVar11 = (char)uVar13;
        uVar6 = (uint)CONCAT11(cVar11 + 0xbfU,uVar4);
        if ((byte)(cVar11 + 0xbfU) < 0x1a) {
          cVar11 = cVar11 + ' ';
        }
        bVar16 = pbVar9[-6];
        uVar13 = (uint)bVar16;
        pbVar21 = local_18;
        if (cVar11 == 's') {
          if (bVar16 == 0) {
            pcVar12 = str_1000f68d + 1;
          }
          else {
            bVar15 = bVar16;
            if ((byte)(bVar16 + 0xbf) < 0x1a) {
              bVar15 = bVar16 + 0x20;
            }
            uVar6 = (uint)CONCAT11(bVar15,uVar4);
            if (bVar15 != 0x74) goto LAB_1000be54;
            bVar15 = pbVar9[-5];
            uVar6 = (uint)CONCAT11(bVar15,uVar4);
            if (bVar15 == 0) {
              pcVar12 = str_1000f68d + 2;
            }
            else {
              uVar13 = (uint)CONCAT11(bVar15 + 0xbf,bVar16);
              if ((byte)(bVar15 + 0xbf) < 0x1a) {
                uVar6 = (uint)CONCAT11(bVar15 + 0x20,uVar4);
              }
              if ((char)(uVar6 >> 8) != 'o') goto LAB_1000be54;
              bVar15 = pbVar9[-4];
              uVar4 = (undefined1)uVar6;
              uVar6 = (uint)CONCAT11(bVar15,uVar4);
              if (bVar15 == 0) {
                pcVar12 = str_1000f68d + 3;
              }
              else {
                uVar13 = (uint)CONCAT11(bVar15 + 0xbf,bVar16);
                if ((byte)(bVar15 + 0xbf) < 0x1a) {
                  uVar6 = (uint)CONCAT11(bVar15 + 0x20,uVar4);
                }
                if ((char)(uVar6 >> 8) != 'r') goto LAB_1000be54;
                bVar15 = pbVar9[-3];
                uVar4 = (undefined1)uVar6;
                uVar6 = (uint)CONCAT11(bVar15,uVar4);
                if (bVar15 == 0) {
                  pcVar12 = str_1000f68d + 4;
                }
                else {
                  uVar13 = (uint)CONCAT11(bVar15 + 0xbf,bVar16);
                  if ((byte)(bVar15 + 0xbf) < 0x1a) {
                    uVar6 = (uint)CONCAT11(bVar15 + 0x20,uVar4);
                  }
                  if ((char)(uVar6 >> 8) != 'a') goto LAB_1000be54;
                  bVar15 = pbVar9[-2];
                  uVar4 = (undefined1)uVar6;
                  uVar6 = (uint)CONCAT11(bVar15,uVar4);
                  if (bVar15 == 0) {
                    pcVar12 = str_1000f68d + 5;
                  }
                  else {
                    uVar13 = (uint)CONCAT11(bVar15 + 0xbf,bVar16);
                    if ((byte)(bVar15 + 0xbf) < 0x1a) {
                      uVar6 = (uint)CONCAT11(bVar15 + 0x20,uVar4);
                    }
                    if ((char)(uVar6 >> 8) != 'g') goto LAB_1000be54;
                    bVar15 = pbVar9[-1];
                    uVar4 = (undefined1)uVar6;
                    uVar6 = (uint)CONCAT11(bVar15,uVar4);
                    if (bVar15 == 0) {
                      pcVar12 = str_1000f68d + 6;
                    }
                    else {
                      uVar13 = (uint)CONCAT11(bVar15 + 0xbf,bVar16);
                      if ((byte)(bVar15 + 0xbf) < 0x1a) {
                        uVar6 = (uint)CONCAT11(bVar15 + 0x20,uVar4);
                      }
                      if ((char)(uVar6 >> 8) != 'e') goto LAB_1000be54;
                      pcVar12 = str_1000f68d + 7;
                      if (*pbVar9 != 0) goto LAB_1000c3c3;
                    }
                  }
                }
              }
            }
          }
          if (*pcVar12 == '\0') goto LAB_1000c3c3;
        }
LAB_1000be54:
        pbVar9 = pbVar9 + 1;
      } while ((char)uVar13 != '\0');
      pbVar9 = local_1c + 7;
      uVar13 = uVar6;
      do {
        uVar4 = (undefined1)uVar6;
        cVar11 = (char)uVar13;
        uVar6 = (uint)CONCAT11(cVar11 + 0xbfU,uVar4);
        if ((byte)(cVar11 + 0xbfU) < 0x1a) {
          cVar11 = cVar11 + ' ';
        }
        bVar16 = pbVar9[-6];
        uVar13 = (uint)bVar16;
        if (cVar11 == 'n') {
          if (bVar16 == 0) {
            pcVar12 = str_1000f286 + 1;
          }
          else {
            bVar15 = bVar16;
            if ((byte)(bVar16 + 0xbf) < 0x1a) {
              bVar15 = bVar16 + 0x20;
            }
            uVar6 = (uint)CONCAT11(bVar15,uVar4);
            if (bVar15 != 0x65) goto LAB_1000bf7d;
            bVar15 = pbVar9[-5];
            uVar6 = (uint)CONCAT11(bVar15,uVar4);
            if (bVar15 == 0) {
              pcVar12 = str_1000f286 + 2;
            }
            else {
              uVar13 = (uint)CONCAT11(bVar15 + 0xbf,bVar16);
              if ((byte)(bVar15 + 0xbf) < 0x1a) {
                uVar6 = (uint)CONCAT11(bVar15 + 0x20,uVar4);
              }
              if ((char)(uVar6 >> 8) != 't') goto LAB_1000bf7d;
              bVar15 = pbVar9[-4];
              uVar4 = (undefined1)uVar6;
              uVar6 = (uint)CONCAT11(bVar15,uVar4);
              if (bVar15 == 0) {
                pcVar12 = str_1000f286 + 3;
              }
              else {
                uVar13 = (uint)CONCAT11(bVar15 + 0xbf,bVar16);
                if ((byte)(bVar15 + 0xbf) < 0x1a) {
                  uVar6 = (uint)CONCAT11(bVar15 + 0x20,uVar4);
                }
                if ((char)(uVar6 >> 8) != 'w') goto LAB_1000bf7d;
                bVar15 = pbVar9[-3];
                uVar4 = (undefined1)uVar6;
                uVar6 = (uint)CONCAT11(bVar15,uVar4);
                if (bVar15 == 0) {
                  pcVar12 = str_1000f286 + 4;
                }
                else {
                  uVar13 = (uint)CONCAT11(bVar15 + 0xbf,bVar16);
                  if ((byte)(bVar15 + 0xbf) < 0x1a) {
                    uVar6 = (uint)CONCAT11(bVar15 + 0x20,uVar4);
                  }
                  if ((char)(uVar6 >> 8) != 'o') goto LAB_1000bf7d;
                  bVar15 = pbVar9[-2];
                  uVar4 = (undefined1)uVar6;
                  uVar6 = (uint)CONCAT11(bVar15,uVar4);
                  if (bVar15 == 0) {
                    pcVar12 = str_1000f286 + 5;
                  }
                  else {
                    uVar13 = (uint)CONCAT11(bVar15 + 0xbf,bVar16);
                    if ((byte)(bVar15 + 0xbf) < 0x1a) {
                      uVar6 = (uint)CONCAT11(bVar15 + 0x20,uVar4);
                    }
                    if ((char)(uVar6 >> 8) != 'r') goto LAB_1000bf7d;
                    bVar15 = pbVar9[-1];
                    uVar4 = (undefined1)uVar6;
                    uVar6 = (uint)CONCAT11(bVar15,uVar4);
                    if (bVar15 == 0) {
                      pcVar12 = str_1000f286 + 6;
                    }
                    else {
                      uVar13 = (uint)CONCAT11(bVar15 + 0xbf,bVar16);
                      if ((byte)(bVar15 + 0xbf) < 0x1a) {
                        uVar6 = (uint)CONCAT11(bVar15 + 0x20,uVar4);
                      }
                      if ((char)(uVar6 >> 8) != 'k') goto LAB_1000bf7d;
                      pcVar12 = str_1000f286 + 7;
                      if (*pbVar9 != 0) goto LAB_1000c3c3;
                    }
                  }
                }
              }
            }
          }
          if (*pcVar12 == '\0') goto LAB_1000c3c3;
        }
LAB_1000bf7d:
        pbVar9 = pbVar9 + 1;
      } while ((char)uVar13 != '\0');
      pbVar9 = local_1c + 3;
      uVar13 = uVar6;
      do {
        uVar4 = (undefined1)uVar6;
        cVar11 = (char)uVar13;
        uVar6 = (uint)CONCAT11(cVar11 + 0xbfU,uVar4);
        if ((byte)(cVar11 + 0xbfU) < 0x1a) {
          cVar11 = cVar11 + ' ';
        }
        bVar16 = pbVar9[-2];
        uVar13 = (uint)bVar16;
        if (cVar11 == 'u') {
          if (bVar16 == 0) {
            pcVar12 = &DAT_1000f26e;
          }
          else {
            bVar15 = bVar16;
            if ((byte)(bVar16 + 0xbf) < 0x1a) {
              bVar15 = bVar16 + 0x20;
            }
            uVar6 = (uint)CONCAT11(bVar15,uVar4);
            if (bVar15 != 0x73) goto LAB_1000c12f;
            bVar15 = pbVar9[-1];
            uVar6 = (uint)CONCAT11(bVar15,uVar4);
            if (bVar15 == 0) {
              pcVar12 = &DAT_1000f26f;
            }
            else {
              uVar13 = (uint)CONCAT11(bVar15 + 0xbf,bVar16);
              if ((byte)(bVar15 + 0xbf) < 0x1a) {
                uVar6 = (uint)CONCAT11(bVar15 + 0x20,uVar4);
              }
              if ((char)(uVar6 >> 8) != 'b') goto LAB_1000c12f;
              pcVar12 = &DAT_1000f270;
              if (*pbVar9 != 0) goto LAB_1000c3c3;
            }
          }
          if (*pcVar12 == '\0') goto LAB_1000c3c3;
        }
LAB_1000c12f:
        pbVar9 = pbVar9 + 1;
      } while ((char)uVar13 != '\0');
      pbVar9 = local_1c + 8;
      uVar13 = uVar6;
      do {
        uVar4 = (undefined1)uVar6;
        cVar11 = (char)uVar13;
        uVar6 = (uint)CONCAT11(cVar11 + 0xbfU,uVar4);
        if ((byte)(cVar11 + 0xbfU) < 0x1a) {
          cVar11 = cVar11 + ' ';
        }
        bVar16 = pbVar9[-7];
        uVar13 = (uint)bVar16;
        if (cVar11 == 'f') {
          if (bVar16 == 0) {
            pcVar12 = str_1000f28e + 1;
          }
          else {
            bVar15 = bVar16;
            if ((byte)(bVar16 + 0xbf) < 0x1a) {
              bVar15 = bVar16 + 0x20;
            }
            uVar6 = (uint)CONCAT11(bVar15,uVar4);
            if (bVar15 != 0x69) goto LAB_1000c1aa;
            bVar15 = pbVar9[-6];
            uVar6 = (uint)CONCAT11(bVar15,uVar4);
            if (bVar15 == 0) {
              pcVar12 = str_1000f28e + 2;
            }
            else {
              uVar13 = (uint)CONCAT11(bVar15 + 0xbf,bVar16);
              if ((byte)(bVar15 + 0xbf) < 0x1a) {
                uVar6 = (uint)CONCAT11(bVar15 + 0x20,uVar4);
              }
              if ((char)(uVar6 >> 8) != 'r') goto LAB_1000c1aa;
              bVar15 = pbVar9[-5];
              uVar4 = (undefined1)uVar6;
              uVar6 = (uint)CONCAT11(bVar15,uVar4);
              if (bVar15 == 0) {
                pcVar12 = str_1000f28e + 3;
              }
              else {
                uVar13 = (uint)CONCAT11(bVar15 + 0xbf,bVar16);
                if ((byte)(bVar15 + 0xbf) < 0x1a) {
                  uVar6 = (uint)CONCAT11(bVar15 + 0x20,uVar4);
                }
                if ((char)(uVar6 >> 8) != 'e') goto LAB_1000c1aa;
                bVar15 = pbVar9[-4];
                uVar4 = (undefined1)uVar6;
                uVar6 = (uint)CONCAT11(bVar15,uVar4);
                if (bVar15 == 0) {
                  pcVar12 = str_1000f28e + 4;
                }
                else {
                  uVar13 = (uint)CONCAT11(bVar15 + 0xbf,bVar16);
                  if ((byte)(bVar15 + 0xbf) < 0x1a) {
                    uVar6 = (uint)CONCAT11(bVar15 + 0x20,uVar4);
                  }
                  if ((char)(uVar6 >> 8) != 'w') goto LAB_1000c1aa;
                  bVar15 = pbVar9[-3];
                  uVar4 = (undefined1)uVar6;
                  uVar6 = (uint)CONCAT11(bVar15,uVar4);
                  if (bVar15 == 0) {
                    pcVar12 = str_1000f28e + 5;
                  }
                  else {
                    uVar13 = (uint)CONCAT11(bVar15 + 0xbf,bVar16);
                    if ((byte)(bVar15 + 0xbf) < 0x1a) {
                      uVar6 = (uint)CONCAT11(bVar15 + 0x20,uVar4);
                    }
                    if ((char)(uVar6 >> 8) != 'i') goto LAB_1000c1aa;
                    bVar15 = pbVar9[-2];
                    uVar4 = (undefined1)uVar6;
                    uVar6 = (uint)CONCAT11(bVar15,uVar4);
                    if (bVar15 == 0) {
                      pcVar12 = str_1000f28e + 6;
                    }
                    else {
                      uVar13 = (uint)CONCAT11(bVar15 + 0xbf,bVar16);
                      if ((byte)(bVar15 + 0xbf) < 0x1a) {
                        uVar6 = (uint)CONCAT11(bVar15 + 0x20,uVar4);
                      }
                      if ((char)(uVar6 >> 8) != 'r') goto LAB_1000c1aa;
                      bVar15 = pbVar9[-1];
                      uVar4 = (undefined1)uVar6;
                      uVar6 = (uint)CONCAT11(bVar15,uVar4);
                      if (bVar15 == 0) {
                        pcVar12 = str_1000f28e + 7;
                      }
                      else {
                        uVar13 = (uint)CONCAT11(bVar15 + 0xbf,bVar16);
                        if ((byte)(bVar15 + 0xbf) < 0x1a) {
                          uVar6 = (uint)CONCAT11(bVar15 + 0x20,uVar4);
                        }
                        if ((char)(uVar6 >> 8) != 'e') goto LAB_1000c1aa;
                        pcVar12 = str_1000f28e + 8;
                        if (*pbVar9 != 0) goto LAB_1000c3c3;
                      }
                    }
                  }
                }
              }
            }
          }
          if (*pcVar12 == '\0') goto LAB_1000c3c3;
        }
LAB_1000c1aa:
        pbVar9 = pbVar9 + 1;
      } while ((char)uVar13 != '\0');
      pbVar9 = local_1c + 5;
      uVar13 = uVar6;
      do {
        uVar4 = (undefined1)uVar6;
        cVar11 = (char)uVar13;
        uVar6 = (uint)CONCAT11(cVar11 + 0xbfU,uVar4);
        if ((byte)(cVar11 + 0xbfU) < 0x1a) {
          cVar11 = cVar11 + ' ';
        }
        bVar16 = pbVar9[-4];
        uVar13 = (uint)bVar16;
        if (cVar11 == 'a') {
          if (bVar16 == 0) {
            pcVar12 = &DAT_1000f696;
          }
          else {
            bVar15 = bVar16;
            if ((byte)(bVar16 + 0xbf) < 0x1a) {
              bVar15 = bVar16 + 0x20;
            }
            uVar6 = (uint)CONCAT11(bVar15,uVar4);
            if (bVar15 != 0x75) goto LAB_1000c30b;
            bVar15 = pbVar9[-3];
            uVar6 = (uint)CONCAT11(bVar15,uVar4);
            if (bVar15 == 0) {
              pcVar12 = &DAT_1000f697;
            }
            else {
              uVar13 = (uint)CONCAT11(bVar15 + 0xbf,bVar16);
              if ((byte)(bVar15 + 0xbf) < 0x1a) {
                uVar6 = (uint)CONCAT11(bVar15 + 0x20,uVar4);
              }
              if ((char)(uVar6 >> 8) != 'd') goto LAB_1000c30b;
              bVar15 = pbVar9[-2];
              uVar4 = (undefined1)uVar6;
              uVar6 = (uint)CONCAT11(bVar15,uVar4);
              if (bVar15 == 0) {
                pcVar12 = &DAT_1000f698;
              }
              else {
                uVar13 = (uint)CONCAT11(bVar15 + 0xbf,bVar16);
                if ((byte)(bVar15 + 0xbf) < 0x1a) {
                  uVar6 = (uint)CONCAT11(bVar15 + 0x20,uVar4);
                }
                if ((char)(uVar6 >> 8) != 'i') goto LAB_1000c30b;
                bVar15 = pbVar9[-1];
                uVar4 = (undefined1)uVar6;
                uVar6 = (uint)CONCAT11(bVar15,uVar4);
                if (bVar15 == 0) {
                  pcVar12 = &DAT_1000f699;
                }
                else {
                  uVar13 = (uint)CONCAT11(bVar15 + 0xbf,bVar16);
                  if ((byte)(bVar15 + 0xbf) < 0x1a) {
                    uVar6 = (uint)CONCAT11(bVar15 + 0x20,uVar4);
                  }
                  if ((char)(uVar6 >> 8) != 'o') goto LAB_1000c30b;
                  pcVar12 = &DAT_1000f69a;
                  if (*pbVar9 != 0) goto LAB_1000c3c3;
                }
              }
            }
          }
          if (*pcVar12 == '\0') goto LAB_1000c3c3;
        }
LAB_1000c30b:
        pbVar9 = pbVar9 + 1;
      } while ((char)uVar13 != '\0');
      pbVar9 = local_1c + 8;
      do {
        cVar11 = (char)uVar6;
        if ((byte)(cVar11 + 0xbfU) < 0x1a) {
          cVar11 = cVar11 + ' ';
        }
        bVar16 = pbVar9[-7];
        uVar6 = (uint)bVar16;
        if (cVar11 == 'g') {
          if (bVar16 == 0) {
            pcVar12 = str_1000f684 + 1;
LAB_1000c3dd:
            if (*pcVar12 == '\0') {
LAB_1000d0b6:
              uVar5 = uVar5 | 4;
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
              bVar15 = pbVar9[-6];
              if (bVar15 == 0) {
                pcVar12 = str_1000f684 + 2;
                goto LAB_1000c3dd;
              }
              uVar6 = (uint)CONCAT11(bVar15 + 0xbf,bVar16);
              if ((byte)(bVar15 + 0xbf) < 0x1a) {
                bVar15 = bVar15 + 0x20;
              }
              if (bVar15 != 0x61) goto LAB_1000c3e6;
              bVar15 = pbVar9[-5];
              if (bVar15 == 0) {
                pcVar12 = str_1000f684 + 3;
                goto LAB_1000c3dd;
              }
              uVar6 = (uint)CONCAT11(bVar15 + 0xbf,bVar16);
              if ((byte)(bVar15 + 0xbf) < 0x1a) {
                bVar15 = bVar15 + 0x20;
              }
              if (bVar15 != 0x70) goto LAB_1000c3e6;
              bVar15 = pbVar9[-4];
              if (bVar15 == 0) {
                pcVar12 = str_1000f684 + 4;
                goto LAB_1000c3dd;
              }
              uVar6 = (uint)CONCAT11(bVar15 + 0xbf,bVar16);
              if ((byte)(bVar15 + 0xbf) < 0x1a) {
                bVar15 = bVar15 + 0x20;
              }
              if (bVar15 != 0x68) goto LAB_1000c3e6;
              bVar15 = pbVar9[-3];
              if (bVar15 == 0) {
                pcVar12 = str_1000f684 + 5;
                goto LAB_1000c3dd;
              }
              uVar6 = (uint)CONCAT11(bVar15 + 0xbf,bVar16);
              if ((byte)(bVar15 + 0xbf) < 0x1a) {
                bVar15 = bVar15 + 0x20;
              }
              if (bVar15 != 0x69) goto LAB_1000c3e6;
              bVar15 = pbVar9[-2];
              if (bVar15 == 0) {
                pcVar12 = str_1000f684 + 6;
                goto LAB_1000c3dd;
              }
              uVar6 = (uint)CONCAT11(bVar15 + 0xbf,bVar16);
              if ((byte)(bVar15 + 0xbf) < 0x1a) {
                bVar15 = bVar15 + 0x20;
              }
              if (bVar15 != 99) goto LAB_1000c3e6;
              bVar15 = pbVar9[-1];
              if (bVar15 == 0) {
                pcVar12 = str_1000f684 + 7;
                goto LAB_1000c3dd;
              }
              uVar6 = (uint)CONCAT11(bVar15 + 0xbf,bVar16);
              if ((byte)(bVar15 + 0xbf) < 0x1a) {
                bVar15 = bVar15 + 0x20;
              }
              if (bVar15 != 0x73) goto LAB_1000c3e6;
              pcVar12 = str_1000f684 + 8;
              if (*pbVar9 == 0) goto LAB_1000c3dd;
              goto LAB_1000d0b6;
            }
          }
        }
LAB_1000c3e6:
        pbVar9 = pbVar9 + 1;
      } while ((char)uVar6 != '\0');
    }
LAB_1000d0bb:
    if ((pbVar21[8] == 6) && (pbVar21[9] != 0)) {
      uVar5 = uVar5 | 2;
    }
    uVar6 = local_598 | uVar5;
    local_98 = uVar6;
    pbVar20 = pbVar21;
    if (((*local_14 != 0x54584b57) || ((uint)local_14[2] < 100)) ||
       ((code *)local_14[0x18] == (code *)0x0)) {
LAB_1000d1e3:
      uVar6 = 0;
      do {
        uVar5 = uVar6;
        uVar6 = uVar5 + 1;
      } while (*(char *)((int)&local_318 + uVar5) != '\0');
      if (uVar5 + 1 < 0x280) {
        cVar11 = ' ';
        pcVar12 = str_1000f7e1;
        do {
          pcVar12 = pcVar12 + 1;
          *(char *)((int)&local_318 + uVar5) = cVar11;
          uVar5 = uVar5 + 1;
          cVar11 = *pcVar12;
          if (cVar11 == '\0') break;
        } while (uVar5 < 0x27f);
      }
      goto LAB_1000a447;
    }
    local_34 = (char *)uVar5;
    iVar22 = (*(code *)local_14[0x18])(*pbVar21,pbVar21[1],pbVar21[2],4,2,uVar6);
    pbVar20 = pbVar3;
    if (iVar22 == 0) goto LAB_1000d1e3;
    if ((*local_14 == 0x54584b57) && (0x5f < (uint)local_14[2])) {
      if ((code *)local_14[0x17] != (code *)0x0) {
        (*(code *)local_14[0x17])(*local_18,local_18[1],local_18[2],4,2,&local_98);
        uVar6 = local_98;
      }
    }
    recovered_1000e2e0((int)&local_318,str_1000f7fa,local_598);
    recovered_1000e2e0((int)&local_318,str_1000f80b,uVar6);
    pcVar12 = local_34;
    recovered_1000e2e0((int)&local_318,str_1000f81b,(uint)local_34);
    bVar24 = ((uint)pcVar12 & ~uVar6) == 0;
    local_98 = 0;
    local_2c[0] = 0;
    local_20 = 0;
    pbVar20 = local_18;
  }
  local_20 = 0;
  local_2c[0] = 0;
  local_98 = 0;
  local_38 = 0;
  bVar16 = pbVar20[8];
  if ((bVar16 == 1) && (pbVar20[9] == 6)) {
    uVar6 = *(uint *)(pbVar20 + 0x28);
    if ((uVar6 & 1) == 0 && uVar6 != 0) {
      local_598 = 0;
      if (((((uVar6 & 0xfffffff0) == 0 || local_14 == (int *)0x0) || (*local_14 != 0x54584b57)) ||
          ((uint)local_14[2] < 0x68)) ||
         (((code *)local_14[0x19] == (code *)0x0 ||
          (iVar22 = (*(code *)local_14[0x19])(uVar6 & 0xfffffff0,0,0x1000,&local_598), iVar22 == 0))
         )) goto LAB_1000a52d;
      uVar6 = 0;
      do {
        uVar5 = uVar6;
        uVar6 = uVar5 + 1;
      } while (*(char *)((int)&local_318 + uVar5) != '\0');
      if (uVar6 < 0x280) {
        *(undefined1 *)((int)&local_318 + uVar5) = 0x20;
        uVar5 = uVar6;
      }
      *(undefined1 *)((int)&local_318 + uVar5) = 0;
      uVar6 = 0;
      do {
        uVar5 = uVar6;
        uVar6 = uVar5 + 1;
      } while (*(char *)((int)&local_318 + uVar5) != '\0');
      if (uVar5 + 1 < 0x280) {
        cVar11 = 'a';
        pcVar12 = str_1000f840;
        do {
          pcVar12 = pcVar12 + 1;
          *(char *)((int)&local_318 + uVar5) = cVar11;
          uVar5 = uVar5 + 1;
          cVar11 = *pcVar12;
          if (cVar11 == '\0') break;
        } while (uVar5 < 0x27f);
      }
      *(undefined1 *)((int)&local_318 + uVar5) = 0;
      uVar6 = 0;
      do {
        uVar5 = uVar6;
        uVar6 = uVar5 + 1;
      } while (*(char *)((int)&local_318 + uVar5) != '\0');
      if (uVar6 < 0x280) {
        *(undefined1 *)((int)&local_318 + uVar5) = 0x3d;
        uVar5 = uVar6;
      }
      *(undefined1 *)((int)&local_318 + uVar5) = 0;
      iVar22 = 8;
      do {
        uVar6 = local_598 >> ((char)iVar22 * '\x04' - 4U & 0x1f) & 0xf;
        bVar16 = (byte)uVar6;
        if (uVar6 < 10) {
          bVar16 = bVar16 | 0x30;
        }
        else {
          bVar16 = bVar16 + 0x37;
        }
        uVar6 = 0;
        do {
          uVar5 = uVar6;
          uVar6 = uVar5 + 1;
        } while (*(char *)((int)&local_318 + uVar5) != '\0');
        if (uVar5 + 1 < 0x280) {
          *(byte *)((int)&local_318 + uVar5) = bVar16;
          *(undefined1 *)((int)&local_318 + uVar5 + 1) = 0;
        }
        iVar22 = iVar22 + -1;
      } while (iVar22 != 0);
      if ((((((local_598 != 0) && (*local_14 == 0x54584b57)) &&
            ((0x6b < (uint)local_14[2] &&
             ((((code *)local_14[0x1a] != (code *)0x0 &&
               ((*(code *)local_14[0x1a])(local_598,4,&local_98), local_598 != 0)) &&
              (*local_14 == 0x54584b57)))))) &&
           ((0x6b < (uint)local_14[2] && ((code *)local_14[0x1a] != (code *)0x0)))) &&
          ((*(code *)local_14[0x1a])(local_598 + 4,4,local_2c), local_598 != 0)) &&
         (((*local_14 == 0x54584b57 && (0x6b < (uint)local_14[2])) &&
          (((code *)local_14[0x1a] != (code *)0x0 &&
           (((((*(code *)local_14[0x1a])(local_598 + 0xc,4,&local_20), local_598 != 0 &&
              (*local_14 == 0x54584b57)) && (0x6b < (uint)local_14[2])) &&
            ((code *)local_14[0x1a] != (code *)0x0)))))))) {
        (*(code *)local_14[0x1a])(local_598 + 0x10,4,&local_38);
      }
      if (((-1 < (int)local_2c[0]) && (local_598 != 0)) && (*local_14 == 0x54584b57)) {
        iVar22 = local_598 + 4;
        uVar6 = local_14[2];
        if (uVar6 < 0x70) {
joined_r0x1000d270:
          if (uVar6 < 0x6c) goto LAB_1000d28b;
        }
        else if ((code *)local_14[0x1b] != (code *)0x0) {
          (*(code *)local_14[0x1b])(iVar22,4,local_2c[0] | 0x80000000);
          if ((local_598 == 0) || (*local_14 != 0x54584b57)) goto LAB_1000d28b;
          uVar6 = local_14[2];
          iVar22 = local_598 + 4;
          goto joined_r0x1000d270;
        }
        if ((code *)local_14[0x1a] != (code *)0x0) {
          (*(code *)local_14[0x1a])(iVar22,4,local_2c);
        }
      }
LAB_1000d28b:
      uVar6 = 0;
      do {
        uVar5 = uVar6;
        uVar6 = uVar5 + 1;
      } while (*(char *)((int)&local_318 + uVar5) != '\0');
      if (uVar6 < 0x280) {
        *(undefined1 *)((int)&local_318 + uVar5) = 0x20;
        uVar5 = uVar6;
      }
      *(undefined1 *)((int)&local_318 + uVar5) = 0;
      uVar6 = 0;
      do {
        uVar5 = uVar6;
        uVar6 = uVar5 + 1;
      } while (*(char *)((int)&local_318 + uVar5) != '\0');
      if (uVar5 + 1 < 0x280) {
        cVar11 = 'a';
        pcVar12 = &DAT_1000f84a;
        do {
          *(char *)((int)&local_318 + uVar5) = cVar11;
          uVar5 = uVar5 + 1;
          cVar11 = *pcVar12;
          if (cVar11 == '\0') break;
          pcVar12 = pcVar12 + 1;
        } while (uVar5 < 0x27f);
      }
      *(undefined1 *)((int)&local_318 + uVar5) = 0;
      uVar6 = 0;
      do {
        uVar5 = uVar6;
        uVar6 = uVar5 + 1;
      } while (*(char *)((int)&local_318 + uVar5) != '\0');
      if (uVar6 < 0x280) {
        *(undefined1 *)((int)&local_318 + uVar5) = 0x3d;
        uVar5 = uVar6;
      }
      *(undefined1 *)((int)&local_318 + uVar5) = 0;
      iVar22 = 8;
      do {
        uVar6 = local_98 >> ((char)iVar22 * '\x04' - 4U & 0x1f) & 0xf;
        bVar16 = (byte)uVar6;
        if (uVar6 < 10) {
          bVar16 = bVar16 | 0x30;
        }
        else {
          bVar16 = bVar16 + 0x37;
        }
        uVar6 = 0;
        do {
          uVar5 = uVar6;
          uVar6 = uVar5 + 1;
        } while (*(char *)((int)&local_318 + uVar5) != '\0');
        if (uVar5 + 1 < 0x280) {
          *(byte *)((int)&local_318 + uVar5) = bVar16;
          *(undefined1 *)((int)&local_318 + uVar5 + 1) = 0;
        }
        iVar22 = iVar22 + -1;
      } while (iVar22 != 0);
      uVar6 = 0;
      do {
        uVar5 = uVar6;
        uVar6 = uVar5 + 1;
      } while (*(char *)((int)&local_318 + uVar5) != '\0');
      if (uVar6 < 0x280) {
        *(undefined1 *)((int)&local_318 + uVar5) = 0x20;
        uVar5 = uVar6;
      }
      *(undefined1 *)((int)&local_318 + uVar5) = 0;
      uVar6 = 0;
      do {
        uVar5 = uVar6;
        uVar6 = uVar5 + 1;
      } while (*(char *)((int)&local_318 + uVar5) != '\0');
      if (uVar5 + 1 < 0x280) {
        cVar11 = 'a';
        pcVar12 = &DAT_1000f852;
        do {
          *(char *)((int)&local_318 + uVar5) = cVar11;
          uVar5 = uVar5 + 1;
          cVar11 = *pcVar12;
          if (cVar11 == '\0') break;
          pcVar12 = pcVar12 + 1;
        } while (uVar5 < 0x27f);
      }
      *(undefined1 *)((int)&local_318 + uVar5) = 0;
      uVar6 = 0;
      do {
        uVar5 = uVar6;
        uVar6 = uVar5 + 1;
      } while (*(char *)((int)&local_318 + uVar5) != '\0');
      if (uVar6 < 0x280) {
        *(undefined1 *)((int)&local_318 + uVar5) = 0x3d;
        uVar5 = uVar6;
      }
      *(undefined1 *)((int)&local_318 + uVar5) = 0;
      iVar22 = 8;
      do {
        uVar6 = local_2c[0] >> ((char)iVar22 * '\x04' - 4U & 0x1f) & 0xf;
        bVar16 = (byte)uVar6;
        if (uVar6 < 10) {
          bVar16 = bVar16 | 0x30;
        }
        else {
          bVar16 = bVar16 + 0x37;
        }
        uVar6 = 0;
        do {
          uVar5 = uVar6;
          uVar6 = uVar5 + 1;
        } while (*(char *)((int)&local_318 + uVar5) != '\0');
        if (uVar5 + 1 < 0x280) {
          *(byte *)((int)&local_318 + uVar5) = bVar16;
          *(undefined1 *)((int)&local_318 + uVar5 + 1) = 0;
        }
        iVar22 = iVar22 + -1;
      } while (iVar22 != 0);
      uVar6 = 0;
      do {
        uVar5 = uVar6;
        uVar6 = uVar5 + 1;
      } while (*(char *)((int)&local_318 + uVar5) != '\0');
      if (uVar6 < 0x280) {
        *(undefined1 *)((int)&local_318 + uVar5) = 0x20;
        uVar5 = uVar6;
      }
      *(undefined1 *)((int)&local_318 + uVar5) = 0;
      uVar6 = 0;
      do {
        uVar5 = uVar6;
        uVar6 = uVar5 + 1;
      } while (*(char *)((int)&local_318 + uVar5) != '\0');
      if (uVar5 + 1 < 0x280) {
        cVar11 = 'a';
        pcVar12 = str_1000f859;
        do {
          pcVar12 = pcVar12 + 1;
          *(char *)((int)&local_318 + uVar5) = cVar11;
          uVar5 = uVar5 + 1;
          cVar11 = *pcVar12;
          if (cVar11 == '\0') break;
        } while (uVar5 < 0x27f);
      }
      *(undefined1 *)((int)&local_318 + uVar5) = 0;
      uVar6 = 0;
      do {
        uVar5 = uVar6;
        uVar6 = uVar5 + 1;
      } while (*(char *)((int)&local_318 + uVar5) != '\0');
      if (uVar6 < 0x280) {
        *(undefined1 *)((int)&local_318 + uVar5) = 0x3d;
        uVar5 = uVar6;
      }
      *(undefined1 *)((int)&local_318 + uVar5) = 0;
      iVar22 = 8;
      do {
        uVar6 = local_20 >> ((char)iVar22 * '\x04' - 4U & 0x1f) & 0xf;
        bVar16 = (byte)uVar6;
        if (uVar6 < 10) {
          bVar16 = bVar16 | 0x30;
        }
        else {
          bVar16 = bVar16 + 0x37;
        }
        uVar6 = 0;
        do {
          uVar5 = uVar6;
          uVar6 = uVar5 + 1;
        } while (*(char *)((int)&local_318 + uVar5) != '\0');
        if (uVar5 + 1 < 0x280) {
          *(byte *)((int)&local_318 + uVar5) = bVar16;
          *(undefined1 *)((int)&local_318 + uVar5 + 1) = 0;
        }
        uVar6 = local_38;
        iVar22 = iVar22 + -1;
      } while (iVar22 != 0);
      uVar5 = 0;
      do {
        uVar13 = uVar5;
        uVar5 = uVar13 + 1;
      } while (*(char *)((int)&local_318 + uVar13) != '\0');
      if (uVar5 < 0x280) {
        *(undefined1 *)((int)&local_318 + uVar13) = 0x20;
        uVar13 = uVar5;
      }
      *(undefined1 *)((int)&local_318 + uVar13) = 0;
      uVar5 = 0;
      do {
        uVar13 = uVar5;
        uVar5 = uVar13 + 1;
      } while (*(char *)((int)&local_318 + uVar13) != '\0');
      if (uVar13 + 1 < 0x280) {
        cVar11 = 'a';
        pcVar12 = str_1000f863;
        do {
          pcVar12 = pcVar12 + 1;
          *(char *)((int)&local_318 + uVar13) = cVar11;
          uVar13 = uVar13 + 1;
          cVar11 = *pcVar12;
          if (cVar11 == '\0') break;
        } while (uVar13 < 0x27f);
      }
      *(undefined1 *)((int)&local_318 + uVar13) = 0;
      uVar5 = 0;
      do {
        uVar13 = uVar5;
        uVar5 = uVar13 + 1;
      } while (*(char *)((int)&local_318 + uVar13) != '\0');
      if (uVar5 < 0x280) {
        *(undefined1 *)((int)&local_318 + uVar13) = 0x3d;
        uVar13 = uVar5;
      }
      *(undefined1 *)((int)&local_318 + uVar13) = 0;
      iVar22 = 8;
      do {
        uVar5 = uVar6 >> ((char)iVar22 * '\x04' - 4U & 0x1f) & 0xf;
        bVar16 = (byte)uVar5;
        if (uVar5 < 10) {
          bVar16 = bVar16 | 0x30;
        }
        else {
          bVar16 = bVar16 + 0x37;
        }
        uVar5 = 0;
        do {
          uVar13 = uVar5;
          uVar5 = uVar13 + 1;
        } while (*(char *)((int)&local_318 + uVar13) != '\0');
        if (uVar13 + 1 < 0x280) {
          *(byte *)((int)&local_318 + uVar13) = bVar16;
          *(undefined1 *)((int)&local_318 + uVar13 + 1) = 0;
        }
        iVar22 = iVar22 + -1;
        bVar16 = 1;
        pbVar18 = local_1c;
      } while (iVar22 != 0);
    }
    else {
LAB_1000a52d:
      uVar6 = 0;
      do {
        uVar5 = uVar6;
        uVar6 = uVar5 + 1;
      } while (*(char *)((int)&local_318 + uVar5) != '\0');
      if (uVar5 + 1 < 0x280) {
        cVar11 = ' ';
        pcVar12 = str_1000f82a;
        do {
          pcVar12 = pcVar12 + 1;
          *(char *)((int)&local_318 + uVar5) = cVar11;
          uVar5 = uVar5 + 1;
          cVar11 = *pcVar12;
          if (cVar11 == '\0') break;
        } while (uVar5 < 0x27f);
      }
      *(undefined1 *)((int)&local_318 + uVar5) = 0;
      bVar16 = 0;
    }
    bVar24 = (bool)(bVar24 | bVar16);
    local_98 = 0;
    local_2c[0] = 0;
    bVar16 = pbVar20[8];
  }
  else {
    local_98 = 0;
    local_2c[0] = 0;
  }
  local_2c[0] = 0;
  local_98 = 0;
  local_20 = 0;
  if ((bVar16 == 4) && (pbVar20[9] == 3)) {
    uVar6 = *(uint *)(pbVar20 + 0x14);
    if ((uVar6 & 1) == 0 && uVar6 != 0) {
      local_598 = 0;
      if (((((uVar6 & 0xfffffff0) == 0 || local_14 == (int *)0x0) || (*local_14 != 0x54584b57)) ||
          ((uint)local_14[2] < 0x68)) ||
         (((code *)local_14[0x19] == (code *)0x0 ||
          (iVar22 = (*(code *)local_14[0x19])(uVar6 & 0xfffffff0,0,0x1000,&local_598), iVar22 == 0))
         )) goto LAB_1000a64b;
      uVar6 = 0;
      do {
        uVar5 = uVar6;
        uVar6 = uVar5 + 1;
      } while (*(char *)((int)&local_318 + uVar5) != '\0');
      if (uVar6 < 0x280) {
        *(undefined1 *)((int)&local_318 + uVar5) = 0x20;
        uVar5 = uVar6;
      }
      *(undefined1 *)((int)&local_318 + uVar5) = 0;
      uVar6 = 0;
      do {
        uVar5 = uVar6;
        uVar6 = uVar5 + 1;
      } while (*(char *)((int)&local_318 + uVar5) != '\0');
      if (uVar5 + 1 < 0x280) {
        cVar11 = 'h';
        pcVar12 = &DAT_1000f885;
        do {
          *(char *)((int)&local_318 + uVar5) = cVar11;
          uVar5 = uVar5 + 1;
          cVar11 = *pcVar12;
          if (cVar11 == '\0') break;
          pcVar12 = pcVar12 + 1;
        } while (uVar5 < 0x27f);
      }
      *(undefined1 *)((int)&local_318 + uVar5) = 0;
      uVar6 = 0;
      do {
        uVar5 = uVar6;
        uVar6 = uVar5 + 1;
      } while (*(char *)((int)&local_318 + uVar5) != '\0');
      if (uVar6 < 0x280) {
        *(undefined1 *)((int)&local_318 + uVar5) = 0x3d;
        uVar5 = uVar6;
      }
      *(undefined1 *)((int)&local_318 + uVar5) = 0;
      iVar22 = 8;
      do {
        uVar6 = local_598 >> ((char)iVar22 * '\x04' - 4U & 0x1f) & 0xf;
        bVar16 = (byte)uVar6;
        if (uVar6 < 10) {
          bVar16 = bVar16 | 0x30;
        }
        else {
          bVar16 = bVar16 + 0x37;
        }
        uVar6 = 0;
        do {
          uVar5 = uVar6;
          uVar6 = uVar5 + 1;
        } while (*(char *)((int)&local_318 + uVar5) != '\0');
        if (uVar5 + 1 < 0x280) {
          *(byte *)((int)&local_318 + uVar5) = bVar16;
          *(undefined1 *)((int)&local_318 + uVar5 + 1) = 0;
        }
        iVar22 = iVar22 + -1;
      } while (iVar22 != 0);
      uVar6 = 0;
      if (local_598 != 0) {
        if (((*local_14 == 0x54584b57) && (0x6b < (uint)local_14[2])) &&
           ((code *)local_14[0x1a] != (code *)0x0)) {
          (*(code *)local_14[0x1a])(local_598,4,&local_98);
          if (local_598 != 0) {
            if (((*local_14 != 0x54584b57) || ((uint)local_14[2] < 0x6c)) ||
               ((code *)local_14[0x1a] == (code *)0x0)) goto LAB_1000c8b8;
            (*(code *)local_14[0x1a])(local_598 + 8,4,local_2c);
            uVar6 = local_598;
          }
        }
        else {
LAB_1000c8b8:
          uVar6 = local_598;
        }
      }
      if ((local_2c[0] & 1) == 0) {
        uVar5 = 0;
        if (uVar6 == 0) goto LAB_1000c8f1;
        if (*local_14 == 0x54584b57) {
          iVar22 = uVar6 + 8;
          uVar13 = local_14[2];
          if (uVar13 < 0x70) {
joined_r0x1000d698:
            if (uVar13 < 0x6c) goto LAB_1000c921;
          }
          else if ((code *)local_14[0x1b] != (code *)0x0) {
            (*(code *)local_14[0x1b])(iVar22,4,local_2c[0] | 1);
            if (local_598 == 0) goto LAB_1000c8f1;
            if (*local_14 != 0x54584b57) goto LAB_1000c921;
            uVar13 = local_14[2];
            iVar22 = local_598 + 8;
            uVar6 = local_598;
            goto joined_r0x1000d698;
          }
          uVar5 = uVar6;
          if ((code *)local_14[0x1a] != (code *)0x0) {
            (*(code *)local_14[0x1a])(iVar22,4,local_2c);
            uVar5 = local_598;
          }
          goto LAB_1000c8f1;
        }
      }
      else {
        uVar5 = uVar6;
LAB_1000c8f1:
        if (((*local_14 == 0x54584b57) && (0x6b < (uint)local_14[2])) &&
           ((code *)local_14[0x1a] != (code *)0x0)) {
          (*(code *)local_14[0x1a])(uVar5 + 0xe,2,&local_20);
        }
      }
LAB_1000c921:
      pbVar20 = local_18;
      uVar6 = 0;
      do {
        uVar5 = uVar6;
        uVar6 = uVar5 + 1;
      } while (*(char *)((int)&local_318 + uVar5) != '\0');
      if (uVar6 < 0x280) {
        *(undefined1 *)((int)&local_318 + uVar5) = 0x20;
        uVar5 = uVar6;
      }
      *(undefined1 *)((int)&local_318 + uVar5) = 0;
      uVar6 = 0;
      do {
        uVar5 = uVar6;
        uVar6 = uVar5 + 1;
      } while (*(char *)((int)&local_318 + uVar5) != '\0');
      if (uVar5 + 1 < 0x280) {
        cVar11 = 'h';
        pcVar12 = &DAT_1000f88d;
        do {
          *(char *)((int)&local_318 + uVar5) = cVar11;
          uVar5 = uVar5 + 1;
          cVar11 = *pcVar12;
          if (cVar11 == '\0') break;
          pcVar12 = pcVar12 + 1;
        } while (uVar5 < 0x27f);
      }
      *(undefined1 *)((int)&local_318 + uVar5) = 0;
      uVar6 = 0;
      do {
        uVar5 = uVar6;
        uVar6 = uVar5 + 1;
      } while (*(char *)((int)&local_318 + uVar5) != '\0');
      if (uVar6 < 0x280) {
        *(undefined1 *)((int)&local_318 + uVar5) = 0x3d;
        uVar5 = uVar6;
      }
      *(undefined1 *)((int)&local_318 + uVar5) = 0;
      iVar22 = 8;
      do {
        uVar6 = local_98 >> ((char)iVar22 * '\x04' - 4U & 0x1f) & 0xf;
        bVar16 = (byte)uVar6;
        if (uVar6 < 10) {
          bVar16 = bVar16 | 0x30;
        }
        else {
          bVar16 = bVar16 + 0x37;
        }
        uVar6 = 0;
        do {
          uVar5 = uVar6;
          uVar6 = uVar5 + 1;
        } while (*(char *)((int)&local_318 + uVar5) != '\0');
        if (uVar5 + 1 < 0x280) {
          *(byte *)((int)&local_318 + uVar5) = bVar16;
          *(undefined1 *)((int)&local_318 + uVar5 + 1) = 0;
        }
        iVar22 = iVar22 + -1;
      } while (iVar22 != 0);
      uVar6 = 0;
      do {
        uVar5 = uVar6;
        uVar6 = uVar5 + 1;
      } while (*(char *)((int)&local_318 + uVar5) != '\0');
      if (uVar6 < 0x280) {
        *(undefined1 *)((int)&local_318 + uVar5) = 0x20;
        uVar5 = uVar6;
      }
      *(undefined1 *)((int)&local_318 + uVar5) = 0;
      uVar6 = 0;
      do {
        uVar5 = uVar6;
        uVar6 = uVar5 + 1;
      } while (*(char *)((int)&local_318 + uVar5) != '\0');
      if (uVar5 + 1 < 0x280) {
        cVar11 = 'h';
        pcVar12 = &DAT_1000f895;
        do {
          *(char *)((int)&local_318 + uVar5) = cVar11;
          uVar5 = uVar5 + 1;
          cVar11 = *pcVar12;
          if (cVar11 == '\0') break;
          pcVar12 = pcVar12 + 1;
        } while (uVar5 < 0x27f);
      }
      *(undefined1 *)((int)&local_318 + uVar5) = 0;
      uVar6 = 0;
      do {
        uVar5 = uVar6;
        uVar6 = uVar5 + 1;
      } while (*(char *)((int)&local_318 + uVar5) != '\0');
      if (uVar6 < 0x280) {
        *(undefined1 *)((int)&local_318 + uVar5) = 0x3d;
        uVar5 = uVar6;
      }
      *(undefined1 *)((int)&local_318 + uVar5) = 0;
      iVar22 = 8;
      do {
        uVar6 = local_2c[0] >> ((char)iVar22 * '\x04' - 4U & 0x1f) & 0xf;
        bVar16 = (byte)uVar6;
        if (uVar6 < 10) {
          bVar16 = bVar16 | 0x30;
        }
        else {
          bVar16 = bVar16 + 0x37;
        }
        uVar6 = 0;
        do {
          uVar5 = uVar6;
          uVar6 = uVar5 + 1;
        } while (*(char *)((int)&local_318 + uVar5) != '\0');
        if (uVar5 + 1 < 0x280) {
          *(byte *)((int)&local_318 + uVar5) = bVar16;
          *(undefined1 *)((int)&local_318 + uVar5 + 1) = 0;
        }
        uVar6 = local_20;
        iVar22 = iVar22 + -1;
      } while (iVar22 != 0);
      uVar5 = 0;
      do {
        uVar13 = uVar5;
        uVar5 = uVar13 + 1;
      } while (*(char *)((int)&local_318 + uVar13) != '\0');
      if (uVar5 < 0x280) {
        *(undefined1 *)((int)&local_318 + uVar13) = 0x20;
        uVar13 = uVar5;
      }
      *(undefined1 *)((int)&local_318 + uVar13) = 0;
      uVar5 = 0;
      do {
        uVar13 = uVar5;
        uVar5 = uVar13 + 1;
      } while (*(char *)((int)&local_318 + uVar13) != '\0');
      if (uVar13 + 1 < 0x280) {
        cVar11 = 'h';
        pcVar12 = str_1000f89c;
        do {
          pcVar12 = pcVar12 + 1;
          *(char *)((int)&local_318 + uVar13) = cVar11;
          uVar13 = uVar13 + 1;
          cVar11 = *pcVar12;
          if (cVar11 == '\0') break;
        } while (uVar13 < 0x27f);
      }
      *(undefined1 *)((int)&local_318 + uVar13) = 0;
      uVar5 = 0;
      do {
        uVar13 = uVar5;
        uVar5 = uVar13 + 1;
      } while (*(char *)((int)&local_318 + uVar13) != '\0');
      if (uVar5 < 0x280) {
        *(undefined1 *)((int)&local_318 + uVar13) = 0x3d;
        uVar13 = uVar5;
      }
      *(undefined1 *)((int)&local_318 + uVar13) = 0;
      iVar22 = 8;
      do {
        uVar5 = uVar6 >> ((char)iVar22 * '\x04' - 4U & 0x1f) & 0xf;
        bVar16 = (byte)uVar5;
        if (uVar5 < 10) {
          bVar16 = bVar16 | 0x30;
        }
        else {
          bVar16 = bVar16 + 0x37;
        }
        uVar5 = 0;
        do {
          uVar13 = uVar5;
          uVar5 = uVar13 + 1;
        } while (*(char *)((int)&local_318 + uVar13) != '\0');
        if (uVar13 + 1 < 0x280) {
          *(byte *)((int)&local_318 + uVar13) = bVar16;
          *(undefined1 *)((int)&local_318 + uVar13 + 1) = 0;
        }
        iVar22 = iVar22 + -1;
        bVar16 = 1;
        pbVar18 = local_1c;
      } while (iVar22 != 0);
    }
    else {
LAB_1000a64b:
      uVar6 = 0;
      do {
        uVar5 = uVar6;
        uVar6 = uVar5 + 1;
      } while (*(char *)((int)&local_318 + uVar5) != '\0');
      if (uVar5 + 1 < 0x280) {
        cVar11 = ' ';
        pcVar12 = str_1000f86f;
        do {
          pcVar12 = pcVar12 + 1;
          *(char *)((int)&local_318 + uVar5) = cVar11;
          uVar5 = uVar5 + 1;
          cVar11 = *pcVar12;
          if (cVar11 == '\0') break;
        } while (uVar5 < 0x27f);
      }
      *(undefined1 *)((int)&local_318 + uVar5) = 0;
      bVar16 = 0;
    }
    bVar24 = (bool)(bVar24 | bVar16);
    local_598 = 0;
    local_98 = 0;
    bVar16 = pbVar20[8];
  }
  else {
    local_598 = 0;
    local_98 = 0;
  }
  local_98 = 0;
  local_598 = 0;
  local_2c[0] = 0;
  bVar2 = false;
  if ((bVar16 == 0xc) && (pbVar20[9] == 3)) {
    if (pbVar20[10] == 0) {
      local_20 = 0;
      local_38 = 0;
      uVar6 = *(uint *)(pbVar20 + 0x24);
      uVar5 = uVar6 & 0xffffffe0;
      if (((byte)uVar6 & uVar5 != 0) != 0) {
LAB_1000a815:
        if (((local_14 != (int *)0x0) && (*local_14 == 0x54584b57)) &&
           ((0x57 < (uint)local_14[2] &&
            (((((code *)local_14[0x15] != (code *)0x0 &&
               ((*(code *)local_14[0x15])(uVar5 & 0xffff,2,&local_20), *local_14 == 0x54584b57)) &&
              (0x57 < (uint)local_14[2])) && ((code *)local_14[0x15] != (code *)0x0)))))) {
          (*(code *)local_14[0x15])(uVar5 & 0xffff | 2,2,&local_38);
        }
        uVar6 = 0;
        do {
          uVar13 = uVar6;
          uVar6 = uVar13 + 1;
        } while (*(char *)((int)&local_318 + uVar13) != '\0');
        if (uVar6 < 0x280) {
          *(undefined1 *)((int)&local_318 + uVar13) = 0x20;
          uVar13 = uVar6;
        }
        *(undefined1 *)((int)&local_318 + uVar13) = 0;
        uVar6 = 0;
        do {
          uVar13 = uVar6;
          uVar6 = uVar13 + 1;
        } while (*(char *)((int)&local_318 + uVar13) != '\0');
        if (uVar13 + 1 < 0x280) {
          cVar11 = 'u';
          pcVar12 = &DAT_1000f8c2;
          do {
            *(char *)((int)&local_318 + uVar13) = cVar11;
            uVar13 = uVar13 + 1;
            cVar11 = *pcVar12;
            if (cVar11 == '\0') break;
            pcVar12 = pcVar12 + 1;
          } while (uVar13 < 0x27f);
        }
        *(undefined1 *)((int)&local_318 + uVar13) = 0;
        uVar6 = 0;
        do {
          uVar13 = uVar6;
          uVar6 = uVar13 + 1;
        } while (*(char *)((int)&local_318 + uVar13) != '\0');
        if (uVar6 < 0x280) {
          *(undefined1 *)((int)&local_318 + uVar13) = 0x3d;
          uVar13 = uVar6;
        }
        *(undefined1 *)((int)&local_318 + uVar13) = 0;
        iVar22 = 8;
        do {
          uVar6 = uVar5 >> ((char)iVar22 * '\x04' - 4U & 0x1f) & 0xf;
          bVar16 = (byte)uVar6;
          if (uVar6 < 10) {
            bVar16 = bVar16 | 0x30;
          }
          else {
            bVar16 = bVar16 + 0x37;
          }
          uVar6 = 0;
          do {
            uVar13 = uVar6;
            uVar6 = uVar13 + 1;
          } while (*(char *)((int)&local_318 + uVar13) != '\0');
          if (uVar13 + 1 < 0x280) {
            *(byte *)((int)&local_318 + uVar13) = bVar16;
            *(undefined1 *)((int)&local_318 + uVar13 + 1) = 0;
          }
          iVar22 = iVar22 + -1;
        } while (iVar22 != 0);
        recovered_1000e2e0((int)&local_318,str_1000f8c7,local_20);
        recovered_1000e2e0((int)&local_318,str_1000f8cf,local_38);
        bVar2 = true;
        pbVar18 = local_1c;
        goto LAB_1000a9fb;
      }
      uVar5 = *(uint *)(pbVar20 + 0x14);
      if ((((uVar5 & 1) == 0) && (uVar5 = *(uint *)(pbVar20 + 0x18), (uVar5 & 1) == 0)) &&
         (uVar5 = *(uint *)(pbVar20 + 0x1c), (uVar5 & 1) == 0)) {
        uVar13 = *(uint *)(pbVar20 + 0x20);
        uVar5 = uVar6;
        if ((uVar13 & 1) != 0) {
          uVar5 = uVar13;
        }
        if ((((uVar13 | uVar6) & 1) != 0) || (uVar5 = *(uint *)(pbVar20 + 0x28), (uVar5 & 1) != 0))
        goto LAB_1000a80c;
      }
      else {
LAB_1000a80c:
        uVar5 = uVar5 & 0xfffffffc;
        if (uVar5 != 0) goto LAB_1000a815;
      }
      uVar6 = 0;
      do {
        uVar5 = uVar6;
        uVar6 = uVar5 + 1;
      } while (*(char *)((int)&local_318 + uVar5) != '\0');
      pbVar18 = local_1c;
      if (uVar5 + 1 < 0x280) {
        cVar11 = ' ';
        pcVar12 = str_1000f8a8;
        do {
          pcVar12 = pcVar12 + 1;
          *(char *)((int)&local_318 + uVar5) = cVar11;
          uVar5 = uVar5 + 1;
          cVar11 = *pcVar12;
          if (cVar11 == '\0') break;
        } while (uVar5 < 0x27f);
      }
    }
    else {
      uVar6 = *(uint *)(pbVar20 + 0x14);
      if ((uVar6 & 1) == 0 && uVar6 != 0) {
        local_598 = 0;
        if ((((uVar6 & 0xfffffff0) != 0 && local_14 != (int *)0x0) && (*local_14 == 0x54584b57)) &&
           ((0x67 < (uint)local_14[2] &&
            (((code *)local_14[0x19] != (code *)0x0 &&
             (iVar22 = (*(code *)local_14[0x19])(uVar6 & 0xfffffff0,0,0x1000,&local_598),
             iVar22 != 0)))))) {
          uVar6 = 0;
          do {
            uVar5 = uVar6;
            uVar6 = uVar5 + 1;
          } while (*(char *)((int)&local_318 + uVar5) != '\0');
          if (uVar6 < 0x280) {
            *(undefined1 *)((int)&local_318 + uVar5) = 0x20;
            uVar5 = uVar6;
          }
          *(undefined1 *)((int)&local_318 + uVar5) = 0;
          uVar6 = 0;
          do {
            uVar5 = uVar6;
            uVar6 = uVar5 + 1;
          } while (*(char *)((int)&local_318 + uVar5) != '\0');
          if (uVar5 + 1 < 0x280) {
            cVar11 = 'u';
            pcVar12 = &DAT_1000f8f2;
            do {
              *(char *)((int)&local_318 + uVar5) = cVar11;
              uVar5 = uVar5 + 1;
              cVar11 = *pcVar12;
              if (cVar11 == '\0') break;
              pcVar12 = pcVar12 + 1;
            } while (uVar5 < 0x27f);
          }
          *(undefined1 *)((int)&local_318 + uVar5) = 0;
          uVar6 = 0;
          do {
            uVar5 = uVar6;
            uVar6 = uVar5 + 1;
          } while (*(char *)((int)&local_318 + uVar5) != '\0');
          if (uVar6 < 0x280) {
            *(undefined1 *)((int)&local_318 + uVar5) = 0x3d;
            uVar5 = uVar6;
          }
          *(undefined1 *)((int)&local_318 + uVar5) = 0;
          iVar22 = 8;
          do {
            uVar6 = local_598 >> ((char)iVar22 * '\x04' - 4U & 0x1f) & 0xf;
            bVar16 = (byte)uVar6;
            if (uVar6 < 10) {
              bVar16 = bVar16 | 0x30;
            }
            else {
              bVar16 = bVar16 + 0x37;
            }
            uVar6 = 0;
            do {
              uVar5 = uVar6;
              uVar6 = uVar5 + 1;
            } while (*(char *)((int)&local_318 + uVar5) != '\0');
            if (uVar5 + 1 < 0x280) {
              *(byte *)((int)&local_318 + uVar5) = bVar16;
              *(undefined1 *)((int)&local_318 + uVar5 + 1) = 0;
            }
            iVar22 = iVar22 + -1;
          } while (iVar22 != 0);
          if ((((local_598 != 0) && (*local_14 == 0x54584b57)) && (0x6b < (uint)local_14[2])) &&
             ((((code *)local_14[0x1a] != (code *)0x0 &&
               ((*(code *)local_14[0x1a])(local_598,4,&local_98), local_598 != 0)) &&
              ((*local_14 == 0x54584b57 &&
               ((0x6b < (uint)local_14[2] && ((code *)local_14[0x1a] != (code *)0x0)))))))) {
            (*(code *)local_14[0x1a])(local_598 + 4,4,local_2c);
          }
          uVar5 = local_98;
          uVar6 = 0;
          do {
            uVar13 = uVar6;
            uVar6 = uVar13 + 1;
          } while (*(char *)((int)&local_318 + uVar13) != '\0');
          if (uVar6 < 0x280) {
            *(undefined1 *)((int)&local_318 + uVar13) = 0x20;
            uVar13 = uVar6;
          }
          *(undefined1 *)((int)&local_318 + uVar13) = 0;
          uVar6 = 0;
          do {
            uVar13 = uVar6;
            uVar6 = uVar13 + 1;
          } while (*(char *)((int)&local_318 + uVar13) != '\0');
          if (uVar13 + 1 < 0x280) {
            cVar11 = 'u';
            pcVar12 = &DAT_1000f8fa;
            do {
              *(char *)((int)&local_318 + uVar13) = cVar11;
              uVar13 = uVar13 + 1;
              cVar11 = *pcVar12;
              if (cVar11 == '\0') break;
              pcVar12 = pcVar12 + 1;
            } while (uVar13 < 0x27f);
          }
          *(undefined1 *)((int)&local_318 + uVar13) = 0;
          uVar6 = 0;
          do {
            uVar13 = uVar6;
            uVar6 = uVar13 + 1;
          } while (*(char *)((int)&local_318 + uVar13) != '\0');
          if (uVar6 < 0x280) {
            *(undefined1 *)((int)&local_318 + uVar13) = 0x3d;
            uVar13 = uVar6;
          }
          *(undefined1 *)((int)&local_318 + uVar13) = 0;
          iVar22 = 8;
          do {
            uVar6 = uVar5 >> ((char)iVar22 * '\x04' - 4U & 0x1f) & 0xf;
            bVar16 = (byte)uVar6;
            if (uVar6 < 10) {
              bVar16 = bVar16 | 0x30;
            }
            else {
              bVar16 = bVar16 + 0x37;
            }
            uVar6 = 0;
            do {
              uVar13 = uVar6;
              uVar6 = uVar13 + 1;
            } while (*(char *)((int)&local_318 + uVar13) != '\0');
            if (uVar13 + 1 < 0x280) {
              *(byte *)((int)&local_318 + uVar13) = bVar16;
              *(undefined1 *)((int)&local_318 + uVar13 + 1) = 0;
            }
            uVar6 = local_2c[0];
            iVar22 = iVar22 + -1;
          } while (iVar22 != 0);
          uVar5 = 0;
          do {
            uVar13 = uVar5;
            uVar5 = uVar13 + 1;
          } while (*(char *)((int)&local_318 + uVar13) != '\0');
          if (uVar5 < 0x280) {
            *(undefined1 *)((int)&local_318 + uVar13) = 0x20;
            uVar13 = uVar5;
          }
          *(undefined1 *)((int)&local_318 + uVar13) = 0;
          uVar5 = 0;
          do {
            uVar13 = uVar5;
            uVar5 = uVar13 + 1;
          } while (*(char *)((int)&local_318 + uVar13) != '\0');
          if (uVar13 + 1 < 0x280) {
            cVar11 = 'u';
            pcVar12 = &DAT_1000f902;
            do {
              *(char *)((int)&local_318 + uVar13) = cVar11;
              uVar13 = uVar13 + 1;
              cVar11 = *pcVar12;
              if (cVar11 == '\0') break;
              pcVar12 = pcVar12 + 1;
            } while (uVar13 < 0x27f);
          }
          *(undefined1 *)((int)&local_318 + uVar13) = 0;
          uVar5 = 0;
          do {
            uVar13 = uVar5;
            uVar5 = uVar13 + 1;
          } while (*(char *)((int)&local_318 + uVar13) != '\0');
          if (uVar5 < 0x280) {
            *(undefined1 *)((int)&local_318 + uVar13) = 0x3d;
            uVar13 = uVar5;
          }
          *(undefined1 *)((int)&local_318 + uVar13) = 0;
          iVar22 = 8;
          do {
            uVar5 = uVar6 >> ((char)iVar22 * '\x04' - 4U & 0x1f) & 0xf;
            bVar16 = (byte)uVar5;
            if (uVar5 < 10) {
              bVar16 = bVar16 | 0x30;
            }
            else {
              bVar16 = bVar16 + 0x37;
            }
            uVar5 = 0;
            do {
              uVar13 = uVar5;
              uVar5 = uVar13 + 1;
            } while (*(char *)((int)&local_318 + uVar13) != '\0');
            if (uVar13 + 1 < 0x280) {
              *(byte *)((int)&local_318 + uVar13) = bVar16;
              *(undefined1 *)((int)&local_318 + uVar13 + 1) = 0;
            }
            iVar22 = iVar22 + -1;
            bVar2 = true;
            pbVar18 = local_1c;
          } while (iVar22 != 0);
          goto LAB_1000a9fb;
        }
      }
      uVar6 = 0;
      do {
        uVar5 = uVar6;
        uVar6 = uVar5 + 1;
      } while (*(char *)((int)&local_318 + uVar5) != '\0');
      if (uVar5 + 1 < 0x280) {
        cVar11 = ' ';
        pcVar12 = str_1000f8d7;
        do {
          pcVar12 = pcVar12 + 1;
          *(char *)((int)&local_318 + uVar5) = cVar11;
          uVar5 = uVar5 + 1;
          cVar11 = *pcVar12;
          if (cVar11 == '\0') break;
        } while (uVar5 < 0x27f);
      }
    }
    *(undefined1 *)((int)&local_318 + uVar5) = 0;
    bVar2 = false;
  }
LAB_1000a9fb:
  pcVar12 = str_1000f78d;
  if (!bVar2 && !bVar24) {
    uVar6 = (uint)*pbVar18;
    if (*pbVar18 != 0) {
      pbVar9 = pbVar18 + 8;
      uVar5 = uVar6;
      do {
        uVar4 = (undefined1)uVar6;
        cVar11 = (char)uVar5;
        uVar6 = (uint)CONCAT11(cVar11 + 0xbfU,uVar4);
        if ((byte)(cVar11 + 0xbfU) < 0x1a) {
          cVar11 = cVar11 + ' ';
        }
        bVar16 = pbVar9[-7];
        uVar5 = (uint)bVar16;
        if (cVar11 == 'g') {
          if (bVar16 == 0) {
            pcVar23 = str_1000f684 + 1;
          }
          else {
            bVar15 = bVar16;
            if ((byte)(bVar16 + 0xbf) < 0x1a) {
              bVar15 = bVar16 + 0x20;
            }
            uVar6 = (uint)CONCAT11(bVar15,uVar4);
            if (bVar15 != 0x72) goto LAB_1000aa28;
            bVar15 = pbVar9[-6];
            uVar6 = (uint)CONCAT11(bVar15,uVar4);
            if (bVar15 == 0) {
              pcVar23 = str_1000f684 + 2;
            }
            else {
              uVar5 = (uint)CONCAT11(bVar15 + 0xbf,bVar16);
              if ((byte)(bVar15 + 0xbf) < 0x1a) {
                uVar6 = (uint)CONCAT11(bVar15 + 0x20,uVar4);
              }
              if ((char)(uVar6 >> 8) != 'a') goto LAB_1000aa28;
              bVar15 = pbVar9[-5];
              uVar4 = (undefined1)uVar6;
              uVar6 = (uint)CONCAT11(bVar15,uVar4);
              if (bVar15 == 0) {
                pcVar23 = str_1000f684 + 3;
              }
              else {
                uVar5 = (uint)CONCAT11(bVar15 + 0xbf,bVar16);
                if ((byte)(bVar15 + 0xbf) < 0x1a) {
                  uVar6 = (uint)CONCAT11(bVar15 + 0x20,uVar4);
                }
                if ((char)(uVar6 >> 8) != 'p') goto LAB_1000aa28;
                bVar15 = pbVar9[-4];
                uVar4 = (undefined1)uVar6;
                uVar6 = (uint)CONCAT11(bVar15,uVar4);
                if (bVar15 == 0) {
                  pcVar23 = str_1000f684 + 4;
                }
                else {
                  uVar5 = (uint)CONCAT11(bVar15 + 0xbf,bVar16);
                  if ((byte)(bVar15 + 0xbf) < 0x1a) {
                    uVar6 = (uint)CONCAT11(bVar15 + 0x20,uVar4);
                  }
                  if ((char)(uVar6 >> 8) != 'h') goto LAB_1000aa28;
                  bVar15 = pbVar9[-3];
                  uVar4 = (undefined1)uVar6;
                  uVar6 = (uint)CONCAT11(bVar15,uVar4);
                  if (bVar15 == 0) {
                    pcVar23 = str_1000f684 + 5;
                  }
                  else {
                    uVar5 = (uint)CONCAT11(bVar15 + 0xbf,bVar16);
                    if ((byte)(bVar15 + 0xbf) < 0x1a) {
                      uVar6 = (uint)CONCAT11(bVar15 + 0x20,uVar4);
                    }
                    if ((char)(uVar6 >> 8) != 'i') goto LAB_1000aa28;
                    bVar15 = pbVar9[-2];
                    uVar4 = (undefined1)uVar6;
                    uVar6 = (uint)CONCAT11(bVar15,uVar4);
                    if (bVar15 == 0) {
                      pcVar23 = str_1000f684 + 6;
                    }
                    else {
                      uVar5 = (uint)CONCAT11(bVar15 + 0xbf,bVar16);
                      if ((byte)(bVar15 + 0xbf) < 0x1a) {
                        uVar6 = (uint)CONCAT11(bVar15 + 0x20,uVar4);
                      }
                      if ((char)(uVar6 >> 8) != 'c') goto LAB_1000aa28;
                      bVar15 = pbVar9[-1];
                      uVar4 = (undefined1)uVar6;
                      uVar6 = (uint)CONCAT11(bVar15,uVar4);
                      if (bVar15 == 0) {
                        pcVar23 = str_1000f684 + 7;
                      }
                      else {
                        uVar5 = (uint)CONCAT11(bVar15 + 0xbf,bVar16);
                        if ((byte)(bVar15 + 0xbf) < 0x1a) {
                          uVar6 = (uint)CONCAT11(bVar15 + 0x20,uVar4);
                        }
                        if ((char)(uVar6 >> 8) != 's') goto LAB_1000aa28;
                        pcVar23 = str_1000f684 + 8;
                        if (*pbVar9 != 0) goto LAB_1000af4b;
                      }
                    }
                  }
                }
              }
            }
          }
          if (*pcVar23 == '\0') goto LAB_1000af4b;
        }
LAB_1000aa28:
        pbVar9 = pbVar9 + 1;
      } while ((char)uVar5 != '\0');
      pbVar9 = pbVar18 + 7;
      uVar5 = uVar6;
      do {
        uVar4 = (undefined1)uVar6;
        cVar11 = (char)uVar5;
        uVar6 = (uint)CONCAT11(cVar11 + 0xbfU,uVar4);
        if ((byte)(cVar11 + 0xbfU) < 0x1a) {
          cVar11 = cVar11 + ' ';
        }
        bVar16 = pbVar9[-6];
        uVar5 = (uint)bVar16;
        if (cVar11 == 'n') {
          if (bVar16 == 0) {
            pcVar23 = str_1000f286 + 1;
          }
          else {
            bVar15 = bVar16;
            if ((byte)(bVar16 + 0xbf) < 0x1a) {
              bVar15 = bVar16 + 0x20;
            }
            uVar6 = (uint)CONCAT11(bVar15,uVar4);
            if (bVar15 != 0x65) goto LAB_1000ab82;
            bVar15 = pbVar9[-5];
            uVar6 = (uint)CONCAT11(bVar15,uVar4);
            if (bVar15 == 0) {
              pcVar23 = str_1000f286 + 2;
            }
            else {
              uVar5 = (uint)CONCAT11(bVar15 + 0xbf,bVar16);
              if ((byte)(bVar15 + 0xbf) < 0x1a) {
                uVar6 = (uint)CONCAT11(bVar15 + 0x20,uVar4);
              }
              if ((char)(uVar6 >> 8) != 't') goto LAB_1000ab82;
              bVar15 = pbVar9[-4];
              uVar4 = (undefined1)uVar6;
              uVar6 = (uint)CONCAT11(bVar15,uVar4);
              if (bVar15 == 0) {
                pcVar23 = str_1000f286 + 3;
              }
              else {
                uVar5 = (uint)CONCAT11(bVar15 + 0xbf,bVar16);
                if ((byte)(bVar15 + 0xbf) < 0x1a) {
                  uVar6 = (uint)CONCAT11(bVar15 + 0x20,uVar4);
                }
                if ((char)(uVar6 >> 8) != 'w') goto LAB_1000ab82;
                bVar15 = pbVar9[-3];
                uVar4 = (undefined1)uVar6;
                uVar6 = (uint)CONCAT11(bVar15,uVar4);
                if (bVar15 == 0) {
                  pcVar23 = str_1000f286 + 4;
                }
                else {
                  uVar5 = (uint)CONCAT11(bVar15 + 0xbf,bVar16);
                  if ((byte)(bVar15 + 0xbf) < 0x1a) {
                    uVar6 = (uint)CONCAT11(bVar15 + 0x20,uVar4);
                  }
                  if ((char)(uVar6 >> 8) != 'o') goto LAB_1000ab82;
                  bVar15 = pbVar9[-2];
                  uVar4 = (undefined1)uVar6;
                  uVar6 = (uint)CONCAT11(bVar15,uVar4);
                  if (bVar15 == 0) {
                    pcVar23 = str_1000f286 + 5;
                  }
                  else {
                    uVar5 = (uint)CONCAT11(bVar15 + 0xbf,bVar16);
                    if ((byte)(bVar15 + 0xbf) < 0x1a) {
                      uVar6 = (uint)CONCAT11(bVar15 + 0x20,uVar4);
                    }
                    if ((char)(uVar6 >> 8) != 'r') goto LAB_1000ab82;
                    bVar15 = pbVar9[-1];
                    uVar4 = (undefined1)uVar6;
                    uVar6 = (uint)CONCAT11(bVar15,uVar4);
                    if (bVar15 == 0) {
                      pcVar23 = str_1000f286 + 6;
                    }
                    else {
                      uVar5 = (uint)CONCAT11(bVar15 + 0xbf,bVar16);
                      if ((byte)(bVar15 + 0xbf) < 0x1a) {
                        uVar6 = (uint)CONCAT11(bVar15 + 0x20,uVar4);
                      }
                      if ((char)(uVar6 >> 8) != 'k') goto LAB_1000ab82;
                      pcVar23 = str_1000f286 + 7;
                      if (*pbVar9 != 0) goto LAB_1000af4b;
                    }
                  }
                }
              }
            }
          }
          if (*pcVar23 == '\0') goto LAB_1000af4b;
        }
LAB_1000ab82:
        pbVar9 = pbVar9 + 1;
      } while ((char)uVar5 != '\0');
      pbVar9 = pbVar18 + 8;
      uVar5 = uVar6;
      do {
        uVar4 = (undefined1)uVar6;
        cVar11 = (char)uVar5;
        uVar6 = (uint)CONCAT11(cVar11 + 0xbfU,uVar4);
        if ((byte)(cVar11 + 0xbfU) < 0x1a) {
          cVar11 = cVar11 + ' ';
        }
        bVar16 = pbVar9[-7];
        uVar5 = (uint)bVar16;
        if (cVar11 == 'f') {
          if (bVar16 == 0) {
            pcVar23 = str_1000f28e + 1;
          }
          else {
            bVar15 = bVar16;
            if ((byte)(bVar16 + 0xbf) < 0x1a) {
              bVar15 = bVar16 + 0x20;
            }
            uVar6 = (uint)CONCAT11(bVar15,uVar4);
            if (bVar15 != 0x69) goto LAB_1000acad;
            bVar15 = pbVar9[-6];
            uVar6 = (uint)CONCAT11(bVar15,uVar4);
            if (bVar15 == 0) {
              pcVar23 = str_1000f28e + 2;
            }
            else {
              uVar5 = (uint)CONCAT11(bVar15 + 0xbf,bVar16);
              if ((byte)(bVar15 + 0xbf) < 0x1a) {
                uVar6 = (uint)CONCAT11(bVar15 + 0x20,uVar4);
              }
              if ((char)(uVar6 >> 8) != 'r') goto LAB_1000acad;
              bVar15 = pbVar9[-5];
              uVar4 = (undefined1)uVar6;
              uVar6 = (uint)CONCAT11(bVar15,uVar4);
              if (bVar15 == 0) {
                pcVar23 = str_1000f28e + 3;
              }
              else {
                uVar5 = (uint)CONCAT11(bVar15 + 0xbf,bVar16);
                if ((byte)(bVar15 + 0xbf) < 0x1a) {
                  uVar6 = (uint)CONCAT11(bVar15 + 0x20,uVar4);
                }
                if ((char)(uVar6 >> 8) != 'e') goto LAB_1000acad;
                bVar15 = pbVar9[-4];
                uVar4 = (undefined1)uVar6;
                uVar6 = (uint)CONCAT11(bVar15,uVar4);
                if (bVar15 == 0) {
                  pcVar23 = str_1000f28e + 4;
                }
                else {
                  uVar5 = (uint)CONCAT11(bVar15 + 0xbf,bVar16);
                  if ((byte)(bVar15 + 0xbf) < 0x1a) {
                    uVar6 = (uint)CONCAT11(bVar15 + 0x20,uVar4);
                  }
                  if ((char)(uVar6 >> 8) != 'w') goto LAB_1000acad;
                  bVar15 = pbVar9[-3];
                  uVar4 = (undefined1)uVar6;
                  uVar6 = (uint)CONCAT11(bVar15,uVar4);
                  if (bVar15 == 0) {
                    pcVar23 = str_1000f28e + 5;
                  }
                  else {
                    uVar5 = (uint)CONCAT11(bVar15 + 0xbf,bVar16);
                    if ((byte)(bVar15 + 0xbf) < 0x1a) {
                      uVar6 = (uint)CONCAT11(bVar15 + 0x20,uVar4);
                    }
                    if ((char)(uVar6 >> 8) != 'i') goto LAB_1000acad;
                    bVar15 = pbVar9[-2];
                    uVar4 = (undefined1)uVar6;
                    uVar6 = (uint)CONCAT11(bVar15,uVar4);
                    if (bVar15 == 0) {
                      pcVar23 = str_1000f28e + 6;
                    }
                    else {
                      uVar5 = (uint)CONCAT11(bVar15 + 0xbf,bVar16);
                      if ((byte)(bVar15 + 0xbf) < 0x1a) {
                        uVar6 = (uint)CONCAT11(bVar15 + 0x20,uVar4);
                      }
                      if ((char)(uVar6 >> 8) != 'r') goto LAB_1000acad;
                      bVar15 = pbVar9[-1];
                      uVar4 = (undefined1)uVar6;
                      uVar6 = (uint)CONCAT11(bVar15,uVar4);
                      if (bVar15 == 0) {
                        pcVar23 = str_1000f28e + 7;
                      }
                      else {
                        uVar5 = (uint)CONCAT11(bVar15 + 0xbf,bVar16);
                        if ((byte)(bVar15 + 0xbf) < 0x1a) {
                          uVar6 = (uint)CONCAT11(bVar15 + 0x20,uVar4);
                        }
                        if ((char)(uVar6 >> 8) != 'e') goto LAB_1000acad;
                        pcVar23 = str_1000f28e + 8;
                        if (*pbVar9 != 0) goto LAB_1000af4b;
                      }
                    }
                  }
                }
              }
            }
          }
          if (*pcVar23 == '\0') goto LAB_1000af4b;
        }
LAB_1000acad:
        pbVar9 = pbVar9 + 1;
      } while ((char)uVar5 != '\0');
      pbVar18 = pbVar18 + 8;
      do {
        cVar11 = (char)uVar6;
        if ((byte)(cVar11 + 0xbfU) < 0x1a) {
          cVar11 = cVar11 + ' ';
        }
        bVar16 = pbVar18[-7];
        uVar6 = (uint)bVar16;
        if (cVar11 != 'p') goto LAB_1000ae05;
        if (bVar16 == 0) {
          pcVar23 = str_1000f10f + 1;
          goto LAB_1000adfc;
        }
        if ((byte)(bVar16 + 0xbf) < 0x1a) {
          if (bVar16 == 0x4c) goto LAB_1000ae43;
        }
        else if (bVar16 == 0x6c) {
LAB_1000ae43:
          bVar15 = pbVar18[-6];
          if (bVar15 == 0) {
            pcVar23 = str_1000f10f + 2;
          }
          else {
            if ((byte)(bVar15 + 0xbf) < 0x1a) {
              bVar15 = bVar15 + 0x20;
            }
            if (bVar15 != 0x61) goto LAB_1000ae05;
            bVar15 = pbVar18[-5];
            if (bVar15 == 0) {
              pcVar23 = str_1000f10f + 3;
            }
            else {
              if ((byte)(bVar15 + 0xbf) < 0x1a) {
                bVar15 = bVar15 + 0x20;
              }
              if (bVar15 != 0x74) goto LAB_1000ae05;
              bVar15 = pbVar18[-4];
              if (bVar15 == 0) {
                pcVar23 = str_1000f10f + 4;
              }
              else {
                if ((byte)(bVar15 + 0xbf) < 0x1a) {
                  bVar15 = bVar15 + 0x20;
                }
                if (bVar15 != 0x66) goto LAB_1000ae05;
                bVar15 = pbVar18[-3];
                if (bVar15 == 0) {
                  pcVar23 = str_1000f10f + 5;
                }
                else {
                  if ((byte)(bVar15 + 0xbf) < 0x1a) {
                    bVar15 = bVar15 + 0x20;
                  }
                  if (bVar15 != 0x6f) goto LAB_1000ae05;
                  bVar15 = pbVar18[-2];
                  if (bVar15 == 0) {
                    pcVar23 = str_1000f10f + 6;
                  }
                  else {
                    if ((byte)(bVar15 + 0xbf) < 0x1a) {
                      bVar15 = bVar15 + 0x20;
                    }
                    if (bVar15 != 0x72) goto LAB_1000ae05;
                    bVar15 = pbVar18[-1];
                    if (bVar15 == 0) {
                      pcVar23 = str_1000f10f + 7;
                    }
                    else {
                      if ((byte)(bVar15 + 0xbf) < 0x1a) {
                        bVar15 = bVar15 + 0x20;
                      }
                      if (bVar15 != 0x6d) goto LAB_1000ae05;
                      pcVar23 = str_1000f10f + 8;
                      if (*pbVar18 != 0) goto LAB_1000af4b;
                    }
                  }
                }
              }
            }
          }
LAB_1000adfc:
          if (*pcVar23 == '\0') goto LAB_1000af4b;
        }
LAB_1000ae05:
        pbVar18 = pbVar18 + 1;
      } while (bVar16 != 0);
    }
LAB_1000b04c:
    pcVar12 = str_1000f79d;
  }
LAB_1000b051:
  uVar6 = 0;
  do {
    uVar5 = uVar6;
    uVar6 = uVar5 + 1;
  } while (*(char *)((int)&local_318 + uVar5) != '\0');
  cVar11 = *pcVar12;
  if (uVar5 + 1 < 0x280 && cVar11 != '\0') {
    do {
      pcVar12 = pcVar12 + 1;
      *(char *)((int)&local_318 + uVar5) = cVar11;
      uVar5 = uVar5 + 1;
      cVar11 = *pcVar12;
      if (cVar11 == '\0') break;
    } while (uVar5 < 0x27f);
  }
  *(undefined1 *)((int)&local_318 + uVar5) = 0;
  pbVar9 = local_18;
  local_34 = recovered_1000e150((int)local_18);
  local_98 = local_98 & 0xffffff00;
  uVar6 = 0;
  do {
    uVar5 = uVar6;
    uVar6 = uVar5 + 1;
  } while (*(char *)((int)local_2c + (uVar5 - 0x6c)) != '\0');
  if (uVar5 + 1 < 0x60) {
    cVar11 = '/';
    pcVar12 = str_1000f65f;
    do {
      pcVar12 = pcVar12 + 1;
      *(char *)((int)local_2c + (uVar5 - 0x6c)) = cVar11;
      uVar5 = uVar5 + 1;
      cVar11 = *pcVar12;
      if (cVar11 == '\0') break;
    } while (uVar5 < 0x5f);
  }
  *(undefined1 *)((int)local_2c + (uVar5 - 0x6c)) = 0;
  uVar6 = 0;
  do {
    uVar5 = uVar6;
    uVar6 = uVar5 + 1;
  } while (*(char *)((int)local_2c + (uVar5 - 0x6c)) != '\0');
  if (uVar6 < 0x60) {
    *(undefined1 *)((int)local_2c + (uVar5 - 0x6c)) = 0x2f;
    uVar5 = uVar6;
  }
  *(undefined1 *)((int)local_2c + (uVar5 - 0x6c)) = 0;
  bVar16 = *pbVar9;
  uVar6 = 0;
  do {
    uVar5 = uVar6;
    uVar6 = uVar5 + 1;
  } while (*(char *)((int)local_2c + (uVar5 - 0x6c)) != '\0');
  if (bVar16 < 0xa0) {
    bVar15 = bVar16 >> 4 | 0x30;
  }
  else {
    bVar15 = (bVar16 >> 4) + 0x37;
  }
  if (uVar5 + 1 < 0x60) {
    *(byte *)((int)local_2c + (uVar5 - 0x6c)) = bVar15;
    *(undefined1 *)((int)local_2c + (uVar5 - 0x6b)) = 0;
  }
  uVar6 = 0;
  do {
    uVar5 = uVar6;
    uVar6 = uVar5 + 1;
  } while (*(char *)((int)local_2c + (uVar5 - 0x6c)) != '\0');
  bVar14 = (byte)(bVar16 & 0xffff0f);
  if (bVar14 < 10) {
    uVar6 = (bVar16 & 0xffff0f) << 8 | 0x3000;
  }
  else {
    uVar6 = (uint)(byte)(bVar14 + 0x37) << 8;
  }
  bVar16 = (byte)(uVar6 >> 8);
  if (uVar5 + 1 < 0x60) {
    *(byte *)((int)local_2c + (uVar5 - 0x6c)) = bVar16;
    *(undefined1 *)((int)local_2c + (uVar5 - 0x6b)) = 0;
  }
  uVar5 = 0;
  do {
    uVar13 = uVar5;
    uVar5 = uVar13 + 1;
  } while (*(char *)((int)local_2c + (uVar13 - 0x6c)) != '\0');
  if (uVar5 < 0x60) {
    *(undefined1 *)((int)local_2c + (uVar13 - 0x6c)) = 0x3a;
    uVar13 = uVar5;
  }
  *(undefined1 *)((int)local_2c + (uVar13 - 0x6c)) = 0;
  bVar14 = pbVar9[1];
  uVar5 = 0;
  do {
    uVar13 = uVar5;
    uVar5 = uVar13 + 1;
  } while (*(char *)((int)local_2c + (uVar13 - 0x6c)) != '\0');
  if (bVar14 < 0xa0) {
    bVar7 = bVar14 >> 4 | 0x30;
  }
  else {
    bVar7 = (bVar14 >> 4) + 0x37;
  }
  if (uVar13 + 1 < 0x60) {
    *(byte *)((int)local_2c + (uVar13 - 0x6c)) = bVar7;
    *(undefined1 *)((int)local_2c + (uVar13 - 0x6b)) = 0;
  }
  uVar13 = CONCAT11(bVar14,bVar15) & 0xffff0fff;
  uVar5 = 0;
  do {
    uVar19 = uVar5;
    uVar5 = uVar19 + 1;
  } while (*(char *)((int)local_2c + (uVar19 - 0x6c)) != '\0');
  bVar15 = (byte)(uVar13 >> 8);
  if (bVar15 < 10) {
    uVar17 = (ushort)uVar13 | 0x3000;
  }
  else {
    uVar17 = CONCAT11(bVar15 + 0x37,(char)uVar13);
  }
  uVar4 = (undefined1)(uVar17 >> 8);
  if (uVar19 + 1 < 0x60) {
    *(undefined1 *)((int)local_2c + (uVar19 - 0x6c)) = uVar4;
    *(undefined1 *)((int)local_2c + (uVar19 - 0x6b)) = 0;
  }
  uVar5 = 0;
  do {
    uVar13 = uVar5;
    uVar5 = uVar13 + 1;
  } while (*(char *)((int)local_2c + (uVar13 - 0x6c)) != '\0');
  if (uVar5 < 0x60) {
    *(undefined1 *)((int)local_2c + (uVar13 - 0x6c)) = 0x2e;
    uVar13 = uVar5;
  }
  *(undefined1 *)((int)local_2c + (uVar13 - 0x6c)) = 0;
  uVar5 = (uint)pbVar9[2];
  local_1c = (byte *)CONCAT31(PF_PART3(local_1c, 1),bVar7);
  if (uVar5 == 0) {
    uVar13 = 0;
    do {
      uVar19 = uVar13;
      uVar13 = uVar19 + 1;
    } while (*(char *)((int)local_2c + (uVar19 - 0x6c)) != '\0');
    if (uVar19 + 1 < 0x60) {
      *(undefined2 *)((int)local_2c + (uVar19 - 0x6c)) = 0x30;
    }
  }
  else {
    local_2f = bVar16;
    uVar6 = uVar5;
    uVar13 = 0;
    do {
      *(byte *)((int)local_2c + uVar13) = (byte)(uVar6 % 10) | 0x30;
      uVar19 = uVar13 + 1;
      if (8 < uVar13) break;
      bVar24 = 9 < uVar6;
      uVar6 = uVar6 / 10;
      uVar13 = uVar19;
    } while (bVar24);
    uVar6 = (uint)bVar16 << 8;
    local_2e = uVar17;
    do {
      iVar22 = uVar19 - 1;
      uVar19 = uVar19 - 1;
      uVar13 = 0;
      do {
        uVar10 = uVar13;
        uVar13 = uVar10 + 1;
      } while (*(char *)((int)local_2c + (uVar10 - 0x6c)) != '\0');
      if (uVar10 + 1 < 0x60) {
        *(undefined1 *)((int)local_2c + (uVar10 - 0x6c)) = *(undefined1 *)((int)local_2c + iVar22);
        *(undefined1 *)((int)local_2c + (uVar10 - 0x6b)) = 0;
      }
    } while (uVar19 != 0);
  }
  local_598 = local_598 & 0xffffff00;
  uVar13 = 0;
  do {
    uVar19 = uVar13;
    uVar13 = uVar19 + 1;
  } while (*(char *)((int)&local_598 + uVar19) != '\0');
  if (uVar19 + 1 < 0x280) {
    uVar6 = CONCAT31((int3)(uVar6 >> 8),0x70);
    pcVar12 = &DAT_1000f922;
    do {
      *(char *)((int)&local_598 + uVar19) = (char)uVar6;
      uVar19 = uVar19 + 1;
      uVar6 = CONCAT31((int3)(uVar6 >> 8),*pcVar12);
      if (*pcVar12 == '\0') break;
      pcVar12 = pcVar12 + 1;
    } while (uVar19 < 0x27f);
  }
  *(undefined1 *)((int)&local_598 + uVar19) = 0;
  uVar13 = 0;
  do {
    uVar19 = uVar13;
    uVar13 = uVar19 + 1;
  } while (*(char *)((int)&local_598 + uVar19) != '\0');
  if (uVar19 + 1 < 0x280) {
    *(char *)((int)&local_598 + uVar19) = (char)uVar17;
    *(undefined1 *)((int)&local_598 + uVar19 + 1) = 0;
  }
  uVar13 = 0;
  do {
    uVar19 = uVar13;
    uVar13 = uVar19 + 1;
  } while (*(char *)((int)&local_598 + uVar19) != '\0');
  if (uVar19 + 1 < 0x280) {
    *(char *)((int)&local_598 + uVar19) = (char)(uVar6 >> 8);
    *(undefined1 *)((int)&local_598 + uVar19 + 1) = 0;
  }
  uVar6 = 0;
  do {
    uVar13 = uVar6;
    uVar6 = uVar13 + 1;
  } while (*(char *)((int)&local_598 + uVar13) != '\0');
  if (uVar6 < 0x280) {
    *(undefined1 *)((int)&local_598 + uVar13) = 0x3a;
    uVar13 = uVar6;
  }
  *(undefined1 *)((int)&local_598 + uVar13) = 0;
  uVar6 = 0;
  do {
    uVar13 = uVar6;
    uVar6 = uVar13 + 1;
  } while (*(char *)((int)&local_598 + uVar13) != '\0');
  if (uVar13 + 1 < 0x280) {
    *(undefined1 *)((int)&local_598 + uVar13) = PF_PART1(local_1c, 0);
    *(undefined1 *)((int)&local_598 + uVar13 + 1) = 0;
  }
  uVar6 = 0;
  do {
    uVar13 = uVar6;
    uVar6 = uVar13 + 1;
  } while (*(char *)((int)&local_598 + uVar13) != '\0');
  if (uVar13 + 1 < 0x280) {
    *(undefined1 *)((int)&local_598 + uVar13) = uVar4;
    *(undefined1 *)((int)&local_598 + uVar13 + 1) = 0;
  }
  uVar6 = 0;
  do {
    uVar13 = uVar6;
    uVar6 = uVar13 + 1;
  } while (*(char *)((int)&local_598 + uVar13) != '\0');
  if (uVar6 < 0x280) {
    *(undefined1 *)((int)&local_598 + uVar13) = 0x2e;
    uVar13 = uVar6;
  }
  *(undefined1 *)((int)&local_598 + uVar13) = 0;
  pbVar9 = local_18;
  if (uVar5 == 0) {
    uVar6 = 0;
    do {
      uVar5 = uVar6;
      uVar6 = uVar5 + 1;
    } while (*(char *)((int)&local_598 + uVar5) != '\0');
    if (uVar5 + 1 < 0x280) {
      *(undefined2 *)((int)&local_598 + uVar5) = 0x30;
    }
  }
  else {
    uVar6 = 0;
    do {
      *(byte *)((int)local_2c + uVar6) = (byte)(uVar5 % 10) | 0x30;
      pbVar9 = local_18;
      uVar13 = uVar6 + 1;
      if (8 < uVar6) break;
      bVar24 = 9 < uVar5;
      uVar6 = uVar13;
      uVar5 = uVar5 / 10;
    } while (bVar24);
    do {
      iVar22 = uVar13 - 1;
      uVar13 = uVar13 - 1;
      uVar6 = 0;
      do {
        uVar5 = uVar6;
        uVar6 = uVar5 + 1;
      } while (*(char *)((int)&local_598 + uVar5) != '\0');
      if (uVar5 + 1 < 0x280) {
        *(undefined1 *)((int)&local_598 + uVar5) = *(undefined1 *)((int)local_2c + iVar22);
        *(undefined1 *)((int)&local_598 + uVar5 + 1) = 0;
      }
    } while (uVar13 != 0);
  }
  uVar6 = 0;
  do {
    uVar5 = uVar6;
    uVar6 = uVar5 + 1;
  } while (*(char *)((int)&local_598 + uVar5) != '\0');
  if (uVar5 + 1 < 0x280) {
    cVar11 = ' ';
    pcVar12 = str_1000f926;
    do {
      pcVar12 = pcVar12 + 1;
      *(char *)((int)&local_598 + uVar5) = cVar11;
      uVar5 = uVar5 + 1;
      cVar11 = *pcVar12;
      if (cVar11 == '\0') break;
    } while (uVar5 < 0x27f);
  }
  *(undefined1 *)((int)&local_598 + uVar5) = 0;
  uVar17 = *(ushort *)(pbVar9 + 4);
  uVar6 = 0;
  do {
    uVar5 = uVar6;
    uVar6 = uVar5 + 1;
  } while (*(char *)((int)&local_598 + uVar5) != '\0');
  if (uVar5 + 1 < 0x280) {
    bVar16 = (byte)(uVar17 >> 8);
    if (uVar17 < 0xa000) {
      bVar16 = bVar16 >> 4 | 0x30;
    }
    else {
      bVar16 = (bVar16 >> 4) + 0x37;
    }
    *(byte *)((int)&local_598 + uVar5) = bVar16;
    *(undefined1 *)((int)&local_598 + uVar5 + 1) = 0;
  }
  uVar8 = uVar17 >> 8 & 0xf;
  uVar6 = 0;
  do {
    uVar5 = uVar6;
    uVar6 = uVar5 + 1;
  } while (*(char *)((int)&local_598 + uVar5) != '\0');
  if (uVar5 + 1 < 0x280) {
    bVar16 = (byte)uVar8;
    if (uVar8 < 10) {
      bVar16 = bVar16 | 0x30;
    }
    else {
      bVar16 = bVar16 + 0x37;
    }
    *(byte *)((int)&local_598 + uVar5) = bVar16;
    *(undefined1 *)((int)&local_598 + uVar5 + 1) = 0;
  }
  uVar8 = uVar17 >> 4 & 0xf;
  uVar6 = 0;
  do {
    uVar5 = uVar6;
    uVar6 = uVar5 + 1;
  } while (*(char *)((int)&local_598 + uVar5) != '\0');
  if (uVar5 + 1 < 0x280) {
    bVar16 = (byte)uVar8;
    if (uVar8 < 10) {
      bVar16 = bVar16 | 0x30;
    }
    else {
      bVar16 = bVar16 + 0x37;
    }
    *(byte *)((int)&local_598 + uVar5) = bVar16;
    *(undefined1 *)((int)&local_598 + uVar5 + 1) = 0;
  }
  uVar6 = 0;
  do {
    uVar5 = uVar6;
    uVar6 = uVar5 + 1;
  } while (*(char *)((int)&local_598 + uVar5) != '\0');
  if (uVar5 + 1 < 0x280) {
    bVar16 = (byte)(uVar17 & 0xf);
    if ((uVar17 & 0xf) < 10) {
      bVar16 = bVar16 | 0x30;
    }
    else {
      bVar16 = bVar16 + 0x37;
    }
    *(byte *)((int)&local_598 + uVar5) = bVar16;
    *(undefined1 *)((int)&local_598 + uVar5 + 1) = 0;
  }
  uVar6 = 0;
  do {
    uVar5 = uVar6;
    uVar6 = uVar5 + 1;
  } while (*(char *)((int)&local_598 + uVar5) != '\0');
  if (uVar5 + 1 < 0x280) {
    cVar11 = ' ';
    pcVar12 = str_1000f92f;
    do {
      pcVar12 = pcVar12 + 1;
      *(char *)((int)&local_598 + uVar5) = cVar11;
      uVar5 = uVar5 + 1;
      cVar11 = *pcVar12;
      if (cVar11 == '\0') break;
    } while (uVar5 < 0x27f);
  }
  *(undefined1 *)((int)&local_598 + uVar5) = 0;
  uVar17 = *(ushort *)(pbVar9 + 6);
  uVar6 = 0;
  do {
    uVar5 = uVar6;
    uVar6 = uVar5 + 1;
  } while (*(char *)((int)&local_598 + uVar5) != '\0');
  if (uVar5 + 1 < 0x280) {
    bVar16 = (byte)(uVar17 >> 8);
    if (uVar17 < 0xa000) {
      bVar16 = bVar16 >> 4 | 0x30;
    }
    else {
      bVar16 = (bVar16 >> 4) + 0x37;
    }
    *(byte *)((int)&local_598 + uVar5) = bVar16;
    *(undefined1 *)((int)&local_598 + uVar5 + 1) = 0;
  }
  uVar8 = uVar17 >> 8 & 0xf;
  uVar6 = 0;
  do {
    uVar5 = uVar6;
    uVar6 = uVar5 + 1;
  } while (*(char *)((int)&local_598 + uVar5) != '\0');
  if (uVar5 + 1 < 0x280) {
    bVar16 = (byte)uVar8;
    if (uVar8 < 10) {
      bVar16 = bVar16 | 0x30;
    }
    else {
      bVar16 = bVar16 + 0x37;
    }
    *(byte *)((int)&local_598 + uVar5) = bVar16;
    *(undefined1 *)((int)&local_598 + uVar5 + 1) = 0;
  }
  uVar8 = uVar17 >> 4 & 0xf;
  uVar6 = 0;
  do {
    uVar5 = uVar6;
    uVar6 = uVar5 + 1;
  } while (*(char *)((int)&local_598 + uVar5) != '\0');
  if (uVar5 + 1 < 0x280) {
    bVar16 = (byte)uVar8;
    if (uVar8 < 10) {
      bVar16 = bVar16 | 0x30;
    }
    else {
      bVar16 = bVar16 + 0x37;
    }
    *(byte *)((int)&local_598 + uVar5) = bVar16;
    *(undefined1 *)((int)&local_598 + uVar5 + 1) = 0;
  }
  uVar6 = 0;
  do {
    uVar5 = uVar6;
    uVar6 = uVar5 + 1;
  } while (*(char *)((int)&local_598 + uVar5) != '\0');
  if (uVar5 + 1 < 0x280) {
    bVar16 = (byte)(uVar17 & 0xf);
    if ((uVar17 & 0xf) < 10) {
      bVar16 = bVar16 | 0x30;
    }
    else {
      bVar16 = bVar16 + 0x37;
    }
    *(byte *)((int)&local_598 + uVar5) = bVar16;
    *(undefined1 *)((int)&local_598 + uVar5 + 1) = 0;
  }
  uVar6 = 0;
  do {
    uVar5 = uVar6;
    uVar6 = uVar5 + 1;
  } while (*(char *)((int)&local_598 + uVar5) != '\0');
  if (uVar5 + 1 < 0x280) {
    cVar11 = ' ';
    pcVar12 = str_1000f938;
    do {
      pcVar12 = pcVar12 + 1;
      *(char *)((int)&local_598 + uVar5) = cVar11;
      uVar5 = uVar5 + 1;
      cVar11 = *pcVar12;
      if (cVar11 == '\0') break;
    } while (uVar5 < 0x27f);
  }
  *(undefined1 *)((int)&local_598 + uVar5) = 0;
  bVar16 = pbVar9[8];
  uVar6 = 0;
  do {
    uVar5 = uVar6;
    uVar6 = uVar5 + 1;
  } while (*(char *)((int)&local_598 + uVar5) != '\0');
  if (uVar5 + 1 < 0x280) {
    if (bVar16 < 0xa0) {
      bVar15 = bVar16 >> 4 | 0x30;
    }
    else {
      bVar15 = (bVar16 >> 4) + 0x37;
    }
    *(byte *)((int)&local_598 + uVar5) = bVar15;
    *(undefined1 *)((int)&local_598 + uVar5 + 1) = 0;
  }
  bVar16 = bVar16 & 0xf;
  uVar6 = 0;
  do {
    uVar5 = uVar6;
    uVar6 = uVar5 + 1;
  } while (*(char *)((int)&local_598 + uVar5) != '\0');
  if (uVar5 + 1 < 0x280) {
    if (bVar16 < 10) {
      bVar16 = bVar16 | 0x30;
    }
    else {
      bVar16 = bVar16 + 0x37;
    }
    *(byte *)((int)&local_598 + uVar5) = bVar16;
    *(undefined1 *)((int)&local_598 + uVar5 + 1) = 0;
  }
  uVar6 = 0;
  do {
    uVar5 = uVar6;
    uVar6 = uVar5 + 1;
  } while (*(char *)((int)&local_598 + uVar5) != '\0');
  if (uVar6 < 0x280) {
    *(undefined1 *)((int)&local_598 + uVar5) = 0x2e;
    uVar5 = uVar6;
  }
  *(undefined1 *)((int)&local_598 + uVar5) = 0;
  bVar16 = pbVar9[9];
  uVar6 = 0;
  do {
    uVar5 = uVar6;
    uVar6 = uVar5 + 1;
  } while (*(char *)((int)&local_598 + uVar5) != '\0');
  if (uVar5 + 1 < 0x280) {
    if (bVar16 < 0xa0) {
      bVar15 = bVar16 >> 4 | 0x30;
    }
    else {
      bVar15 = (bVar16 >> 4) + 0x37;
    }
    *(byte *)((int)&local_598 + uVar5) = bVar15;
    *(undefined1 *)((int)&local_598 + uVar5 + 1) = 0;
  }
  bVar16 = bVar16 & 0xf;
  uVar6 = 0;
  do {
    uVar5 = uVar6;
    uVar6 = uVar5 + 1;
  } while (*(char *)((int)&local_598 + uVar5) != '\0');
  if (uVar5 + 1 < 0x280) {
    if (bVar16 < 10) {
      bVar16 = bVar16 | 0x30;
    }
    else {
      bVar16 = bVar16 + 0x37;
    }
    *(byte *)((int)&local_598 + uVar5) = bVar16;
    *(undefined1 *)((int)&local_598 + uVar5 + 1) = 0;
  }
  uVar6 = 0;
  do {
    uVar5 = uVar6;
    uVar6 = uVar5 + 1;
  } while (*(char *)((int)&local_598 + uVar5) != '\0');
  if (uVar6 < 0x280) {
    *(undefined1 *)((int)&local_598 + uVar5) = 0x2e;
    uVar5 = uVar6;
  }
  *(undefined1 *)((int)&local_598 + uVar5) = 0;
  bVar16 = pbVar9[10];
  uVar6 = 0;
  do {
    uVar5 = uVar6;
    uVar6 = uVar5 + 1;
  } while (*(char *)((int)&local_598 + uVar5) != '\0');
  if (uVar5 + 1 < 0x280) {
    if (bVar16 < 0xa0) {
      bVar15 = bVar16 >> 4 | 0x30;
    }
    else {
      bVar15 = (bVar16 >> 4) + 0x37;
    }
    *(byte *)((int)&local_598 + uVar5) = bVar15;
    *(undefined1 *)((int)&local_598 + uVar5 + 1) = 0;
  }
  bVar16 = bVar16 & 0xf;
  uVar6 = 0;
  do {
    uVar5 = uVar6;
    uVar6 = uVar5 + 1;
  } while (*(char *)((int)&local_598 + uVar5) != '\0');
  if (uVar5 + 1 < 0x280) {
    if (bVar16 < 10) {
      bVar16 = bVar16 | 0x30;
    }
    else {
      bVar16 = bVar16 + 0x37;
    }
    *(byte *)((int)&local_598 + uVar5) = bVar16;
    *(undefined1 *)((int)&local_598 + uVar5 + 1) = 0;
  }
  uVar6 = 0;
  do {
    uVar5 = uVar6;
    uVar6 = uVar5 + 1;
  } while (*(char *)((int)&local_598 + uVar5) != '\0');
  if (uVar5 + 1 < 0x280) {
    cVar11 = ' ';
    pcVar12 = str_1000f940;
    do {
      pcVar12 = pcVar12 + 1;
      *(char *)((int)&local_598 + uVar5) = cVar11;
      uVar5 = uVar5 + 1;
      cVar11 = *pcVar12;
      if (cVar11 == '\0') break;
    } while (uVar5 < 0x27f);
  }
  *(undefined1 *)((int)&local_598 + uVar5) = 0;
  bVar16 = pbVar9[0xb];
  uVar6 = 0;
  do {
    uVar5 = uVar6;
    uVar6 = uVar5 + 1;
  } while (*(char *)((int)&local_598 + uVar5) != '\0');
  if (uVar5 + 1 < 0x280) {
    if (bVar16 < 0xa0) {
      bVar15 = bVar16 >> 4 | 0x30;
    }
    else {
      bVar15 = (bVar16 >> 4) + 0x37;
    }
    *(byte *)((int)&local_598 + uVar5) = bVar15;
    *(undefined1 *)((int)&local_598 + uVar5 + 1) = 0;
  }
  bVar16 = bVar16 & 0xf;
  uVar6 = 0;
  do {
    uVar5 = uVar6;
    uVar6 = uVar5 + 1;
  } while (*(char *)((int)&local_598 + uVar5) != '\0');
  if (uVar5 + 1 < 0x280) {
    if (bVar16 < 10) {
      bVar16 = bVar16 | 0x30;
    }
    else {
      bVar16 = bVar16 + 0x37;
    }
    *(byte *)((int)&local_598 + uVar5) = bVar16;
    *(undefined1 *)((int)&local_598 + uVar5 + 1) = 0;
  }
  uVar6 = 0;
  do {
    local_1c = (byte *)uVar6;
    uVar6 = *(uint *)(pbVar9 + uVar6 * 4 + 0x14);
    if (uVar6 != 0) {
      uVar5 = 0;
      do {
        uVar13 = uVar5;
        uVar5 = uVar13 + 1;
      } while (*(char *)((int)&local_598 + uVar13) != '\0');
      if (uVar13 + 1 < 0x280) {
        cVar11 = ' ';
        pcVar12 = &DAT_1000f94c;
        do {
          *(char *)((int)&local_598 + uVar13) = cVar11;
          uVar13 = uVar13 + 1;
          cVar11 = *pcVar12;
          if (cVar11 == '\0') break;
          pcVar12 = pcVar12 + 1;
        } while (uVar13 < 0x27f);
      }
      *(undefined1 *)((int)&local_598 + uVar13) = 0;
      if (local_1c == (byte *)0x0) {
        uVar5 = 0;
        do {
          uVar13 = uVar5;
          uVar5 = uVar13 + 1;
        } while (*(char *)((int)&local_598 + uVar13) != '\0');
        if (uVar13 + 1 < 0x280) {
          *(undefined2 *)((int)&local_598 + uVar13) = 0x30;
        }
      }
      else {
        uVar5 = 0;
        pbVar20 = local_1c;
        do {
          *(byte *)((int)local_2c + uVar5) = (byte)((uint)pbVar20 % 10) | 0x30;
          pbVar9 = local_18;
          uVar13 = uVar5 + 1;
          if (8 < uVar5) break;
          bVar24 = 9 < pbVar20;
          uVar5 = uVar13;
          pbVar20 = (byte *)((uint)pbVar20 / 10);
        } while (bVar24);
        do {
          iVar22 = uVar13 - 1;
          uVar13 = uVar13 - 1;
          uVar5 = 0;
          do {
            uVar19 = uVar5;
            uVar5 = uVar19 + 1;
          } while (*(char *)((int)&local_598 + uVar19) != '\0');
          if (uVar19 + 1 < 0x280) {
            *(undefined1 *)((int)&local_598 + uVar19) = *(undefined1 *)((int)local_2c + iVar22);
            *(undefined1 *)((int)&local_598 + uVar19 + 1) = 0;
          }
        } while (uVar13 != 0);
      }
      uVar5 = 0;
      do {
        uVar13 = uVar5;
        uVar5 = uVar13 + 1;
      } while (*(char *)((int)&local_598 + uVar13) != '\0');
      if (uVar5 < 0x280) {
        *(undefined1 *)((int)&local_598 + uVar13) = 0x3d;
        uVar13 = uVar5;
      }
      *(undefined1 *)((int)&local_598 + uVar13) = 0;
      iVar22 = 8;
      do {
        uVar13 = uVar6 >> ((char)iVar22 * '\x04' - 4U & 0x1f) & 0xf;
        bVar15 = (byte)uVar13;
        bVar16 = bVar15 + 0x37;
        uVar5 = 0;
        do {
          uVar19 = uVar5;
          uVar5 = uVar19 + 1;
        } while (*(char *)((int)&local_598 + uVar19) != '\0');
        if (uVar19 + 1 < 0x280) {
          if (uVar13 < 10) {
            bVar16 = bVar15 | 0x30;
          }
          *(byte *)((int)&local_598 + uVar19) = bVar16;
          *(undefined1 *)((int)&local_598 + uVar19 + 1) = 0;
        }
        iVar22 = iVar22 + -1;
      } while (iVar22 != 0);
    }
    cVar11 = (char)local_318;
    uVar6 = (int)local_1c + 1;
  } while (uVar6 != 6);
  if ((char)local_318 != '\0') {
    uVar6 = 0;
    do {
      uVar5 = uVar6;
      uVar6 = uVar5 + 1;
    } while (*(char *)((int)&local_598 + uVar5) != '\0');
    if (uVar6 < 0x280) {
      *(undefined1 *)((int)&local_598 + uVar5) = 0x20;
      uVar5 = uVar6;
    }
    *(undefined1 *)((int)&local_598 + uVar5) = 0;
    uVar6 = 0;
    do {
      uVar5 = uVar6;
      uVar6 = uVar5 + 1;
    } while (*(char *)((int)&local_598 + uVar5) != '\0');
    if (uVar5 + 1 < 0x280) {
      pcVar12 = (char *)((int)&local_318 + 1);
      do {
        *(char *)((int)&local_598 + uVar5) = cVar11;
        uVar5 = uVar5 + 1;
        cVar11 = *pcVar12;
        if (cVar11 == '\0') break;
        pcVar12 = pcVar12 + 1;
      } while (uVar5 < 0x27f);
    }
    *(undefined1 *)((int)&local_598 + uVar5) = 0;
  }
  if (((local_14 != (int *)0x0) && ((code *)local_14[3] != (code *)0x0)) &&
     (iVar22 = (*(code *)local_14[3])(&local_98,local_34,&local_598), iVar22 != 0)) {
    param_3[1] = param_3[1] + 1;
  }
  return;
LAB_1000c3c3:
  uVar5 = uVar5 | 4;
  goto LAB_1000d0bb;
LAB_1000af4b:
  uVar6 = 0;
LAB_1000af6a:
  local_2c[0] = 0;
  uVar5 = *(uint *)(local_18 + uVar6 * 4 + 0x14);
  if ((((((uVar5 & 1) != 0 || uVar5 == 0) || (local_98 = 0, local_14 == (int *)0x0)) ||
       ((uVar5 & 0xfffffff0) == 0)) || ((*local_14 != 0x54584b57 || ((uint)local_14[2] < 0x68)))) ||
     (((code *)local_14[0x19] == (code *)0x0 ||
      (iVar22 = (*(code *)local_14[0x19])(uVar5 & 0xfffffff0,0,0x1000,&local_98), iVar22 == 0))))
  goto LAB_1000af60;
  uVar5 = 0;
  do {
    uVar13 = uVar5;
    uVar5 = uVar13 + 1;
  } while (*(char *)((int)&local_318 + uVar13) != '\0');
  if (uVar13 + 1 < 0x280) {
    cVar11 = ' ';
    pcVar23 = str_1000f909;
    do {
      pcVar23 = pcVar23 + 1;
      *(char *)((int)&local_318 + uVar13) = cVar11;
      uVar13 = uVar13 + 1;
      cVar11 = *pcVar23;
      if (cVar11 == '\0') break;
    } while (uVar13 < 0x27f);
  }
  *(undefined1 *)((int)&local_318 + uVar13) = 0;
  if (uVar6 == 0) {
    uVar6 = 0;
    do {
      uVar5 = uVar6;
      uVar6 = uVar5 + 1;
    } while (*(char *)((int)&local_318 + uVar5) != '\0');
    if (uVar5 + 1 < 0x280) {
      *(undefined2 *)((int)&local_318 + uVar5) = 0x30;
    }
  }
  else {
    uVar5 = 0;
    do {
      *(byte *)((int)&local_598 + uVar5) = (char)uVar6 + (char)(uVar6 / 10) * -10 | 0x30;
      uVar13 = uVar5 + 1;
      if (8 < uVar5) break;
      bVar24 = 9 < uVar6;
      uVar5 = uVar13;
      uVar6 = uVar6 / 10;
    } while (bVar24);
    do {
      pcVar23 = &cStack_599 + uVar13;
      uVar13 = uVar13 - 1;
      uVar6 = 0;
      do {
        uVar5 = uVar6;
        uVar6 = uVar5 + 1;
      } while (*(char *)((int)&local_318 + uVar5) != '\0');
      if (uVar5 + 1 < 0x280) {
        *(char *)((int)&local_318 + uVar5) = *pcVar23;
        *(undefined1 *)((int)&local_318 + uVar5 + 1) = 0;
      }
    } while (uVar13 != 0);
  }
  uVar5 = local_98;
  uVar6 = 0;
  do {
    uVar13 = uVar6;
    uVar6 = uVar13 + 1;
  } while (*(char *)((int)&local_318 + uVar13) != '\0');
  if (uVar6 < 0x280) {
    *(undefined1 *)((int)&local_318 + uVar13) = 0x20;
    uVar13 = uVar6;
  }
  *(undefined1 *)((int)&local_318 + uVar13) = 0;
  uVar6 = 0;
  do {
    uVar13 = uVar6;
    uVar6 = uVar13 + 1;
  } while (*(char *)((int)&local_318 + uVar13) != '\0');
  if (uVar13 + 1 < 0x280) {
    cVar11 = 'm';
    pcVar23 = &DAT_1000f914;
    do {
      *(char *)((int)&local_318 + uVar13) = cVar11;
      uVar13 = uVar13 + 1;
      cVar11 = *pcVar23;
      if (cVar11 == '\0') break;
      pcVar23 = pcVar23 + 1;
    } while (uVar13 < 0x27f);
  }
  *(undefined1 *)((int)&local_318 + uVar13) = 0;
  uVar6 = 0;
  do {
    uVar13 = uVar6;
    uVar6 = uVar13 + 1;
  } while (*(char *)((int)&local_318 + uVar13) != '\0');
  if (uVar6 < 0x280) {
    *(undefined1 *)((int)&local_318 + uVar13) = 0x3d;
    uVar13 = uVar6;
  }
  *(undefined1 *)((int)&local_318 + uVar13) = 0;
  iVar22 = 8;
  do {
    uVar6 = uVar5 >> ((char)iVar22 * '\x04' - 4U & 0x1f) & 0xf;
    bVar16 = (byte)uVar6;
    if (uVar6 < 10) {
      bVar16 = bVar16 | 0x30;
    }
    else {
      bVar16 = bVar16 + 0x37;
    }
    uVar6 = 0;
    do {
      uVar13 = uVar6;
      uVar6 = uVar13 + 1;
    } while (*(char *)((int)&local_318 + uVar13) != '\0');
    if (uVar13 + 1 < 0x280) {
      *(byte *)((int)&local_318 + uVar13) = bVar16;
      *(undefined1 *)((int)&local_318 + uVar13 + 1) = 0;
    }
    iVar22 = iVar22 + -1;
  } while (iVar22 != 0);
  if (((uVar5 != 0) && (*local_14 == 0x54584b57)) &&
     ((0x6b < (uint)local_14[2] && ((code *)local_14[0x1a] != (code *)0x0)))) {
    iVar22 = (*(code *)local_14[0x1a])(uVar5,4,local_2c);
    uVar6 = local_2c[0];
    if (iVar22 == 0) goto LAB_1000b051;
    uVar5 = 0;
    do {
      uVar13 = uVar5;
      uVar5 = uVar13 + 1;
    } while (*(char *)((int)&local_318 + uVar13) != '\0');
    if (uVar5 < 0x280) {
      *(undefined1 *)((int)&local_318 + uVar13) = 0x20;
      uVar13 = uVar5;
    }
    *(undefined1 *)((int)&local_318 + uVar13) = 0;
    uVar5 = 0;
    do {
      uVar13 = uVar5;
      uVar5 = uVar13 + 1;
    } while (*(char *)((int)&local_318 + uVar13) != '\0');
    if (uVar13 + 1 < 0x280) {
      cVar11 = 'm';
      pcVar23 = str_1000f918;
      do {
        pcVar23 = pcVar23 + 1;
        *(char *)((int)&local_318 + uVar13) = cVar11;
        uVar13 = uVar13 + 1;
        cVar11 = *pcVar23;
        if (cVar11 == '\0') break;
      } while (uVar13 < 0x27f);
    }
    *(undefined1 *)((int)&local_318 + uVar13) = 0;
    uVar5 = 0;
    do {
      uVar13 = uVar5;
      uVar5 = uVar13 + 1;
    } while (*(char *)((int)&local_318 + uVar13) != '\0');
    if (uVar5 < 0x280) {
      *(undefined1 *)((int)&local_318 + uVar13) = 0x3d;
      uVar13 = uVar5;
    }
    *(undefined1 *)((int)&local_318 + uVar13) = 0;
    iVar22 = 8;
    do {
      uVar5 = uVar6 >> ((char)iVar22 * '\x04' - 4U & 0x1f) & 0xf;
      bVar16 = (byte)uVar5;
      if (uVar5 < 10) {
        bVar16 = bVar16 | 0x30;
      }
      else {
        bVar16 = bVar16 + 0x37;
      }
      uVar5 = 0;
      do {
        uVar13 = uVar5;
        uVar5 = uVar13 + 1;
      } while (*(char *)((int)&local_318 + uVar13) != '\0');
      if (uVar13 + 1 < 0x280) {
        *(byte *)((int)&local_318 + uVar13) = bVar16;
        *(undefined1 *)((int)&local_318 + uVar13 + 1) = 0;
      }
      iVar22 = iVar22 + -1;
    } while (iVar22 != 0);
  }
  goto LAB_1000b051;
LAB_1000af60:
  uVar6 = uVar6 + 1;
  if (uVar6 == 6) goto LAB_1000b04c;
  goto LAB_1000af6a;
}

#undef DAT_1000f26d
#undef DAT_1000f26e
#undef DAT_1000f26f
#undef DAT_1000f270
#undef DAT_1000f638
#undef DAT_1000f63e
#undef DAT_1000f695
#undef DAT_1000f696
#undef DAT_1000f697
#undef DAT_1000f698
#undef DAT_1000f699
#undef DAT_1000f69a
#undef DAT_1000f6f7
#undef DAT_1000f702
#undef DAT_1000f84a
#undef DAT_1000f852
#undef DAT_1000f885
#undef DAT_1000f88d
#undef DAT_1000f895
#undef DAT_1000f8c2
#undef DAT_1000f8f2
#undef DAT_1000f8fa
#undef DAT_1000f902
#undef DAT_1000f914
#undef DAT_1000f922
#undef DAT_1000f94c
#undef str_1000f10f
#undef str_1000f280
#undef str_1000f286
#undef str_1000f28e
#undef str_1000f651
#undef str_1000f65f
#undef str_1000f684
#undef str_1000f68d
#undef str_1000f69b
#undef str_1000f6a2
#undef str_1000f6ae
#undef str_1000f6ba
#undef str_1000f6d0
#undef str_1000f70e
#undef str_1000f744
#undef str_1000f76c
#undef str_1000f77c
#undef str_1000f78d
#undef str_1000f79d
#undef str_1000f7b1
#undef str_1000f7c9
#undef str_1000f7e1
#undef str_1000f7fa
#undef str_1000f80b
#undef str_1000f81b
#undef str_1000f82a
#undef str_1000f840
#undef str_1000f859
#undef str_1000f863
#undef str_1000f86f
#undef str_1000f89c
#undef str_1000f8a8
#undef str_1000f8c7
#undef str_1000f8cf
#undef str_1000f8d7
#undef str_1000f909
#undef str_1000f918
#undef str_1000f926
#undef str_1000f92f
#undef str_1000f938
#undef str_1000f940
#undef cStack_599
#undef cStack_319
#undef cStack_99
#undef local_598
#undef local_318
#undef local_98
#undef local_38
#undef local_34
#undef local_2f
#undef local_2e
#undef local_2c
#undef local_20
#undef local_1c
#undef local_18
#undef local_14

#define local_18 (*(uint *)(frame + 24))
#define local_14 (*(uint *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d790
 */

undefined4 recovered_1000d790(int *in_ECX,undefined4 in_EDX)

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
 * Address: 0x1000d900
 */

undefined4 recovered_1000d900(int *in_ECX,undefined1 in_DL,int param_3)

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
            if (*in_ECX != 0x54584b57) goto LAB_1000d930;
            uVar2 = in_ECX[2];
            if (uVar2 < 0x58) goto LAB_1000d9d0;
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
              goto LAB_1000da5f;
            }
          }
          if (*in_ECX != 0x54584b57) goto LAB_1000d930;
          uVar2 = in_ECX[2];
        }
LAB_1000d9d0:
        if ((0x33 < uVar2) && ((code *)in_ECX[0xc] != (code *)0x0)) {
          (*(code *)in_ECX[0xc])(100);
        }
      }
LAB_1000d930:
      bVar5 = uVar4 < 199;
      uVar4 = uVar4 + 1;
    } while (uVar4 != 200);
  }
  return 0;
LAB_1000da5f:
  local_18 = 0;
  if (*in_ECX == 0x54584b57) {
    uVar2 = in_ECX[2];
    if (uVar2 < 0x58) {
LAB_1000daaa:
      if (uVar2 < 0x34) goto LAB_1000da45;
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
      if (iVar1 != 0x54584b57) goto LAB_1000da45;
      uVar2 = in_ECX[2];
      goto LAB_1000daaa;
    }
    if ((code *)in_ECX[0xc] != (code *)0x0) {
      (*(code *)in_ECX[0xc])(100);
    }
  }
LAB_1000da45:
  bVar5 = uVar4 < 199;
  uVar4 = uVar4 + 1;
  if (uVar4 == 200) {
    return 0;
  }
  goto LAB_1000da5f;
}

#undef local_1c
#undef local_18
#undef local_11

#define local_1c (*(uint *)(frame + 20))
#define local_18 (*(uint *)(frame + 24))
#define local_11 (*(byte *)(frame + 31))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000db30
 */

void recovered_1000db30(int *in_ECX,undefined1 in_DL,int param_3)

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
          if (*in_ECX != 0x54584b57) goto LAB_1000db60;
          uVar2 = in_ECX[2];
          if (uVar2 < 0x58) goto LAB_1000dc00;
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
        if (*in_ECX != 0x54584b57) goto LAB_1000db60;
        uVar2 = in_ECX[2];
      }
LAB_1000dc00:
      if ((0x33 < uVar2) && ((code *)in_ECX[0xc] != (code *)0x0)) {
        (*(code *)in_ECX[0xc])(100);
      }
    }
LAB_1000db60:
    bVar4 = uVar3 < 199;
    uVar3 = uVar3 + 1;
    if (uVar3 == 200) {
      return;
    }
  } while( true );
LAB_1000dc8a:
  local_1c = 0;
  if (*in_ECX == 0x54584b57) {
    uVar2 = in_ECX[2];
    if (uVar2 < 0x58) {
LAB_1000dcd5:
      if (uVar2 < 0x34) goto LAB_1000dc72;
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
      if (iVar1 != 0x54584b57) goto LAB_1000dc72;
      uVar2 = in_ECX[2];
      goto LAB_1000dcd5;
    }
    if ((code *)in_ECX[0xc] != (code *)0x0) {
      (*(code *)in_ECX[0xc])(100);
    }
  }
LAB_1000dc72:
  bVar4 = uVar3 < 199;
  uVar3 = uVar3 + 1;
  if (uVar3 == 200) {
    return;
  }
  goto LAB_1000dc8a;
}

#undef local_1c
#undef local_18
#undef local_11

#define abStack_1f (*(byte (*)[11])(frame + 17))
#define local_14 (*(uint *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000dd50
 */

void recovered_1000dd50(int in_ECX,uint in_EDX,char *param_3,uint param_4)

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
      goto LAB_1000de44;
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
LAB_1000de44:
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

#define local_2c (*(undefined4 *)(frame + 20))
#define local_28 (*(uint *)(frame + 24))
#define local_24 (*(uint *)(frame + 28))
#define local_20 (*(uint *)(frame + 32))
#define local_1c (*(uint *)(frame + 36))
#define local_18 (*(uint *)(frame + 40))
#define local_14 (*(int * *)(frame + 44))
#define local_30 (*(undefined4 *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000df40
 */

undefined4
recovered_1000df40(int *in_ECX,undefined1 in_DL,byte param_3,byte param_4,undefined1 *param_5)

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

#undef local_2c
#undef local_28
#undef local_24
#undef local_20
#undef local_1c
#undef local_18
#undef local_14
#undef local_30

#undef DAT_1000f264
#define DAT_1000f264 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x346U)))
#undef DAT_1000f269
#define DAT_1000f269 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x34bU)))
#undef DAT_1000f271
#define DAT_1000f271 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x353U)))
#undef DAT_1000f276
#define DAT_1000f276 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x358U)))
#undef DAT_1000f27b
#define DAT_1000f27b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x35dU)))
#undef DAT_1000fa4d
#define DAT_1000fa4d (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb2fU)))
#undef PTR_str_1000fa12_10010014
#define PTR_str_1000fa12_10010014 (*(char * *)(((uintptr_t)pf_module_state + 0x10f6U)))
#undef str_1000f950
#define str_1000f950 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa32U)))
#undef str_1000f95b
#define str_1000f95b (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa3dU)))
#undef str_1000f96a
#define str_1000f96a (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa4cU)))
#undef str_1000f975
#define str_1000f975 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa57U)))
#undef str_1000f983
#define str_1000f983 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa65U)))
#undef str_1000f995
#define str_1000f995 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa77U)))
#undef str_1000f99f
#define str_1000f99f (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa81U)))
#undef str_1000f9ab
#define str_1000f9ab (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa8dU)))
#undef str_1000f9b5
#define str_1000f9b5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa97U)))
#undef str_1000f9c6
#define str_1000f9c6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xaa8U)))
#undef str_1000f9d4
#define str_1000f9d4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xab6U)))
#undef str_1000f9dd
#define str_1000f9dd (*(char (*)[1])(((uintptr_t)pf_module_state + 0xabfU)))
#undef str_1000fa52
#define str_1000fa52 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb34U)))
#undef str_1000fa5d
#define str_1000fa5d (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb3fU)))
#undef str_1000fa66
#define str_1000fa66 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb48U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000e150
 */

char * recovered_1000e150(int in_ECX)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  byte bVar2;
  ushort uVar3;
  char *pcVar4;

  if (in_ECX == 0) {
    return str_1000f950;
  }
  cVar1 = *(char *)(in_ECX + 8);
  if (cVar1 == '\f') {
    if (*(char *)(in_ECX + 9) == '\x03') {
      bVar2 = *(byte *)(in_ECX + 10);
      if (bVar2 < 0x30) {
        if (bVar2 == 0) {
          return &DAT_1000f271;
        }
        if (bVar2 == 0x10) {
          return &DAT_1000f276;
        }
        if (bVar2 == 0x20) {
          return &DAT_1000f27b;
        }
      }
      else {
        if (bVar2 == 0x30) {
          return &DAT_1000fa4d;
        }
        if (bVar2 == 0x80) {
          return str_1000fa52;
        }
        if (bVar2 == 0xfe) {
          return str_1000fa5d;
        }
      }
      return str_1000fa66;
    }
  }
  else if (cVar1 == '\x04') {
    if (*(char *)(in_ECX + 9) == '\x03') {
      return &DAT_1000f269;
    }
  }
  else if ((cVar1 == '\x01') && (*(char *)(in_ECX + 9) == '\x06')) {
    return &DAT_1000f264;
  }
  uVar3 = *(ushort *)(in_ECX + 4);
  if (uVar3 < 0x11ab) {
    if (uVar3 == 0x106b) {
      return str_1000f9dd;
    }
    if (uVar3 == 0x10de) {
      if (cVar1 == '\x03') {
        return str_1000f95b;
      }
      return str_1000f96a;
    }
    if (uVar3 == 0x1180) {
      return str_1000f9d4;
    }
  }
  else {
    if (uVar3 == 0x11ab) {
      return str_1000f9c6;
    }
    if (uVar3 == 0x14e4) {
      return str_1000f9b5;
    }
    if (uVar3 == 0x8086) {
      if (cVar1 == '\x03') {
        return str_1000f975;
      }
      if (cVar1 != '\x06') {
        if ((cVar1 == '\f') && (*(char *)(in_ECX + 9) == '\x05')) {
          return str_1000f99f;
        }
        return str_1000f9ab;
      }
      pcVar4 = str_1000f995;
      if (*(char *)(in_ECX + 9) != '\x01') {
        pcVar4 = str_1000f9ab;
      }
      if (*(char *)(in_ECX + 9) == '\0') {
        return str_1000f983;
      }
      return pcVar4;
    }
  }
  if ((byte)(cVar1 - 1U) < 6) {
    return (&PTR_str_1000fa12_10010014)[(byte)(cVar1 - 1U)];
  }
  return str_1000f950;
}

#undef DAT_1000f264
#undef DAT_1000f269
#undef DAT_1000f271
#undef DAT_1000f276
#undef DAT_1000f27b
#undef DAT_1000fa4d
#undef PTR_str_1000fa12_10010014
#undef str_1000f950
#undef str_1000f95b
#undef str_1000f96a
#undef str_1000f975
#undef str_1000f983
#undef str_1000f995
#undef str_1000f99f
#undef str_1000f9ab
#undef str_1000f9b5
#undef str_1000f9c6
#undef str_1000f9d4
#undef str_1000f9dd
#undef str_1000fa52
#undef str_1000fa5d
#undef str_1000fa66

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000e2e0
 */

void recovered_1000e2e0(int in_ECX,char *in_EDX,uint param_3)

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
#define DAT_10011000 (*(int *)(((uintptr_t)pf_module_state + 0x20e2U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000e460
 */

undefined4 recovered_1000e460(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;

  if (DAT_10011000 != 0) {
    if (param_1 != 0 && *(code **)(DAT_10011000 + 0x24) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x1000e480. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (**(code **)(DAT_10011000 + 0x24))();
      return uVar1;
    }
  }
  return 0;
}

#undef DAT_10011000

#undef DAT_10011000
#define DAT_10011000 (*(int * *)(((uintptr_t)pf_module_state + 0x20e2U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000e490
 */

undefined4 recovered_1000e490(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;

  if ((((DAT_10011000 == (int *)0x0) || (*DAT_10011000 != 0x54584b57)) ||
      ((uint)DAT_10011000[2] < 0xac)) || ((code *)DAT_10011000[0x2a] == (code *)0x0)) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x1000e4b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)DAT_10011000[0x2a])();
  return uVar1;
}

#undef DAT_10011000

#define local_18 (*(uint *)(frame + 40))
#define local_11 (*(bool *)(frame + 47))
#define abStack_23 (*(byte (*)[11])(frame + 29))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000e4c0
 */

void recovered_1000e4c0(int in_ECX,uint in_EDX,char *param_3,int param_4)

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
    if (uVar4 != 0) goto LAB_1000e5a4;
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
LAB_1000e5a4:
      uVar6 = 0;
      do {
        abStack_23[uVar6 + 1] = (char)uVar4 + (char)(uVar4 / 10) * -10 | 0x30;
        uVar3 = uVar6 + 1;
        if (8 < uVar6) break;
        bVar2 = 9 < uVar4;
        uVar6 = uVar3;
        uVar4 = uVar4 / 10;
      } while (bVar2);
LAB_1000e5e6:
      do {
        uVar4 = uVar3 - 1;
        if (in_ECX == 0) {
          uVar3 = uVar4;
          if (uVar4 == 0) goto LAB_1000e679;
          goto LAB_1000e5e6;
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
      if (in_ECX == 0) goto LAB_1000e679;
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
LAB_1000e679:
  if (*(uint *)(param_4 + 0x14) == 0) {
    if (in_ECX == 0) goto LAB_1000e759;
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
LAB_1000e6c6:
    do {
      uVar4 = uVar3 - 1;
      if (in_ECX == 0) {
        uVar3 = uVar4;
        if (uVar4 == 0) goto LAB_1000e759;
        goto LAB_1000e6c6;
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
    if (in_ECX == 0) goto LAB_1000e759;
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
LAB_1000e759:
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
 * Address: 0x1000e7f0
 */

undefined8 recovered_1000e7f0(int param_1,uint param_2)

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
