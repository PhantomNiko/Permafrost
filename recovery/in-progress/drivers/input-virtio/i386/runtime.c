/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_10004000
#define DAT_10004000 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2f6U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000d68
 */

void * recovered_10000d68(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return &DAT_10004000;
}

#undef DAT_10004000

#undef DAT_10003d0a
#define DAT_10003d0a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x0U)))
#undef DAT_10004100
#define DAT_10004100 (*(int *)(((uintptr_t)pf_module_state + 0x3f6U)))
#undef DAT_10004104
#define DAT_10004104 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3faU)))
#undef DAT_10004108
#define DAT_10004108 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3feU)))
#undef DAT_1000410c
#define DAT_1000410c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x402U)))
#undef DAT_10004110
#define DAT_10004110 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x406U)))
#undef DAT_10004114
#define DAT_10004114 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x40aU)))
#undef DAT_10004118
#define DAT_10004118 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x40eU)))
#undef DAT_10004288
#define DAT_10004288 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x57eU)))
#undef str_10003d0b
#define str_10003d0b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1U)))
#undef str_10003d18
#define str_10003d18 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xeU)))
#undef str_10003d27
#define str_10003d27 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1dU)))
#define local_458 (*(int *)(pf_stack_frame + 24))
#define local_448 (*(int *)(pf_stack_frame + 40))
#define local_440 (*(undefined1 (*)[1088])(pf_stack_frame + 48))
#define local_414 (*(undefined1 (*)[1044])(pf_stack_frame + 92))
#define local_408 (*(char *)(pf_stack_frame + 104))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000d7e
 */

uint recovered_10000d7e(void *api)

{
  unsigned char pf_stack_frame[1168] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  byte bVar6;
  byte bVar7;
  int *piVar8;
  bool bVar9;
  bool bVar10;

  if ((((api != (void *)0x0) && (*(int *)api == 0x54584b57)) && (*(int *)((int)api + 4) == 1100000))
     && (0xf7 < *(uint *)((int)api + 8))) {
    DAT_10004100 = 0;
    DAT_10004104 = 0;
    DAT_10004108 = 0;
    DAT_1000410c = 0;
    DAT_10004110 = 0;
    DAT_10004114 = 0;
    DAT_10004118 = 0;
    recovered_1000108a();
    if (((*(int *)api == 0x54584b57) && (0x5f < *(uint *)((int)api + 8))) &&
       (*(int *)((int)api + 0x5c) != 0)) {
      local_448 = 0;
      for (uVar1 = 0; uVar1 != 8; uVar1 = uVar1 + 1) {
        for (uVar5 = 0; uVar5 != 0x20; uVar5 = uVar5 + 1) {
          uVar2 = recovered_10002586(api,uVar1 & 0xff,uVar5 & 0xff,0,local_414);
          if (uVar2 != 0) {
            iVar3 = recovered_100010a3();
            local_448 = iVar3 + local_448;
            if (local_408 < '\0') {
              for (iVar3 = -7; iVar3 != 0; iVar3 = iVar3 + 1) {
                uVar2 = recovered_10002586(api,uVar1 & 0xff,uVar5 & 0xff,iVar3 + 8U & 0xff,local_440
                                          );
                if (uVar2 != 0) {
                  iVar4 = recovered_100010a3();
                  local_448 = local_448 + iVar4;
                }
              }
            }
          }
        }
      }
      if (DAT_10004100 != 0 && local_448 != 0) {
        local_458 = 0;
        piVar8 = &DAT_10004288;
        iVar4 = 0;
        bVar7 = 0;
        iVar3 = DAT_10004100;
        while (bVar9 = iVar3 != 0, iVar3 = iVar3 + -1, bVar9) {
          local_458 = (local_458 + 1) - (uint)(piVar8[-2] == 0);
          bVar6 = bVar7 | 2;
          if (piVar8[-1] == 0) {
            bVar6 = bVar7;
          }
          bVar7 = *piVar8 != 0 | bVar6;
          iVar4 = iVar4 + (uint)(piVar8[-1] != 0 || *piVar8 != 0);
          piVar8 = piVar8 + 0x1c0;
        }
        recovered_1000248d(&DAT_10003d0a);
        if ((*(code **)((int)api + 0xc) != (code *)0x0) &&
           (iVar3 = (**(code **)((int)api + 0xc))(&DAT_10003d0a,str_10003d0b,local_414), iVar3 != 0)
           ) {
          bVar9 = true;
          if ((iVar4 != 0) && ((bVar7 != 0 && (*(code **)((int)api + 0x20) != (code *)0x0)))) {
            iVar3 = (**(code **)((int)api + 0x20))(recovered_100024ac,bVar7,str_10003d18);
            bVar9 = iVar3 == 0;
          }
          bVar10 = true;
          if ((((local_458 != 0) && (*(int *)api == 0x54584b57)) && (0xa7 < *(uint *)((int)api + 8))
              ) && (*(code **)((int)api + 0xa4) != (code *)0x0)) {
            iVar3 = (**(code **)((int)api + 0xa4))(recovered_1000254e,3,str_10003d27);
            bVar10 = iVar3 == 0;
          }
          if (!(bool)(bVar9 & bVar10)) {
            if (*(code **)((int)api + 0xc) == (code *)0x0) {
              return 1;
            }
            (**(code **)((int)api + 0xc))(&DAT_10003d0a,str_10003d0b,local_414);
            return 1;
          }
        }
      }
    }
    recovered_1000244c();
  }
  return 0;
}

#undef DAT_10003d0a
#undef DAT_10004100
#undef DAT_10004104
#undef DAT_10004108
#undef DAT_1000410c
#undef DAT_10004110
#undef DAT_10004114
#undef DAT_10004118
#undef DAT_10004288
#undef str_10003d0b
#undef str_10003d18
#undef str_10003d27
#undef local_458
#undef local_448
#undef local_440
#undef local_414
#undef local_408

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000108a
 */

void recovered_1000108a(void)

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


#undef DAT_10003d0a
#define DAT_10003d0a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x0U)))
#undef DAT_10003df9
#define DAT_10003df9 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xefU)))
#undef DAT_10003dfb
#define DAT_10003dfb (*(uint8_t *)(((uintptr_t)pf_module_state + 0xf1U)))
#undef DAT_10003dfd
#define DAT_10003dfd (*(uint8_t *)(((uintptr_t)pf_module_state + 0xf3U)))
#undef DAT_10003dff
#define DAT_10003dff (*(uint8_t *)(((uintptr_t)pf_module_state + 0xf5U)))
#undef DAT_10003e04
#define DAT_10003e04 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xfaU)))
#undef DAT_10003e07
#define DAT_10003e07 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xfdU)))
#undef DAT_10003e09
#define DAT_10003e09 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xffU)))
#undef DAT_10004100
#define DAT_10004100 (*(uint *)(((uintptr_t)pf_module_state + 0x3f6U)))
#undef DAT_10004200
#define DAT_10004200 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4f6U)))
#undef DAT_10004204
#define DAT_10004204 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4faU)))
#undef DAT_10004208
#define DAT_10004208 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4feU)))
#undef DAT_1000420c
#define DAT_1000420c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x502U)))
#undef DAT_10004210
#define DAT_10004210 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x506U)))
#undef DAT_10004214
#define DAT_10004214 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x50aU)))
#undef DAT_10004218
#define DAT_10004218 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x50eU)))
#undef DAT_1000421c
#define DAT_1000421c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x512U)))
#undef DAT_10004220
#define DAT_10004220 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x516U)))
#undef DAT_10004224
#define DAT_10004224 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x51aU)))
#undef DAT_10004228
#define DAT_10004228 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x51eU)))
#undef DAT_1000422c
#define DAT_1000422c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x522U)))
#undef DAT_10004230
#define DAT_10004230 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x526U)))
#undef DAT_10004238
#define DAT_10004238 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x52eU)))
#undef DAT_1000423c
#define DAT_1000423c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x532U)))
#undef DAT_10004240
#define DAT_10004240 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x536U)))
#undef DAT_10004248
#define DAT_10004248 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x53eU)))
#undef DAT_1000424c
#define DAT_1000424c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x542U)))
#undef DAT_10004254
#define DAT_10004254 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x54aU)))
#undef DAT_10004258
#define DAT_10004258 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x54eU)))
#undef DAT_1000425c
#define DAT_1000425c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x552U)))
#undef DAT_10004260
#define DAT_10004260 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x556U)))
#undef DAT_10004268
#define DAT_10004268 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x55eU)))
#undef DAT_1000426c
#define DAT_1000426c (*(uint16_t *)(((uintptr_t)pf_module_state + 0x562U)))
#undef DAT_1000426e
#define DAT_1000426e (*(uint16_t *)(((uintptr_t)pf_module_state + 0x564U)))
#undef DAT_10004272
#define DAT_10004272 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x568U)))
#undef DAT_10004273
#define DAT_10004273 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x569U)))
#undef DAT_10004274
#define DAT_10004274 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x56aU)))
#undef DAT_10004276
#define DAT_10004276 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x56cU)))
#undef DAT_10004278
#define DAT_10004278 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x56eU)))
#undef DAT_1000427c
#define DAT_1000427c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x572U)))
#undef DAT_10004280
#define DAT_10004280 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x576U)))
#undef DAT_10004284
#define DAT_10004284 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x57aU)))
#undef DAT_10004288
#define DAT_10004288 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x57eU)))
#undef DAT_1000428c
#define DAT_1000428c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x582U)))
#undef DAT_10004290
#define DAT_10004290 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x586U)))
#undef DAT_10004294
#define DAT_10004294 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x58aU)))
#undef DAT_10004298
#define DAT_10004298 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x58eU)))
#undef DAT_10004300
#define DAT_10004300 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5f6U)))
#undef DAT_10004500
#define DAT_10004500 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7f6U)))
#undef DAT_10004502
#define DAT_10004502 (*(uint16_t *)(((uintptr_t)pf_module_state + 0x7f8U)))
#undef DAT_10004504
#define DAT_10004504 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7faU)))
#undef DAT_10004505
#define DAT_10004505 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7fbU)))
#undef DAT_10004600
#define DAT_10004600 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8f6U)))
#undef DAT_10004800
#define DAT_10004800 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xaf6U)))
#undef str_10003d63
#define str_10003d63 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x59U)))
#undef str_10003d71
#define str_10003d71 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x67U)))
#undef str_10003d7a
#define str_10003d7a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x70U)))
#undef str_10003d8d
#define str_10003d8d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x83U)))
#undef str_10003d9e
#define str_10003d9e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x94U)))
#undef str_10003db1
#define str_10003db1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa7U)))
#undef str_10003dc2
#define str_10003dc2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb8U)))
#undef str_10003dd4
#define str_10003dd4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xcaU)))
#undef str_10003de6
#define str_10003de6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xdcU)))
#define local_898 (*(uint *)(pf_stack_frame + 72))
#define local_894 (*(int * *)(pf_stack_frame + 76))
#define local_890 (*(int (*)[548])(pf_stack_frame + 80))
#define local_87c (*(undefined * *)(pf_stack_frame + 100))
#define local_878 (*(undefined * *)(pf_stack_frame + 104))
#define local_874 (*(uint (*)[541])(pf_stack_frame + 108))
#define local_814 (*(uint (*)[517])(pf_stack_frame + 204))
#define local_414 (*(char (*)[1044])(pf_stack_frame + 1228))
#define local_8c4 (*(uint *)(pf_stack_frame + 28))
#define local_8c0 (*(int *)(pf_stack_frame + 32))
#define local_8bc (*(uint *)(pf_stack_frame + 36))
#define local_8b8 (*(int *)(pf_stack_frame + 40))
#define local_8b4 (*(uint *)(pf_stack_frame + 44))
#define local_8b0 (*(undefined * *)(pf_stack_frame + 48))
#define local_8ac (*(byte * *)(pf_stack_frame + 52))
#define local_8a8 (*(uint *)(pf_stack_frame + 56))
#define local_8a4 (*(char * *)(pf_stack_frame + 60))
#define local_8a0 (*(uint *)(pf_stack_frame + 64))
#define local_89c (*(uint *)(pf_stack_frame + 68))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100010a3
 */

undefined4 recovered_100010a3(void)

{
  unsigned char pf_stack_frame[2304] __attribute__((aligned(16))) = {0};

  undefined4 *device;
  byte bVar1;
  byte bVar2;
  byte bVar3;
  ushort uVar4;
  uint uVar5;
  int *piVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  char *pcVar11;
  undefined3 extraout_var = 0;
  int iVar12;
  undefined3 extraout_var_00 = 0;
  undefined3 extraout_var_01 = 0;
  undefined3 extraout_var_02 = 0;
  int *in_ECX;
  uint uVar13;
  byte *in_EDX;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  byte *pbVar17;

  uVar5 = DAT_10004100;
  if (in_EDX == (byte *)0x0) {
    return 0;
  }
  if (*(short *)(in_EDX + 4) != 0x1af4) {
    return 0;
  }
  if (*(short *)(in_EDX + 6) == 0x1012) {
    if (3 < DAT_10004100) {
      return 0;
    }
  }
  else if (3 < DAT_10004100 || *(short *)(in_EDX + 6) != 0x1052) {
    return 0;
  }
  iVar8 = DAT_10004100 * 0x700;
  device = &DAT_10004200 + DAT_10004100 * 0x1c0;
  recovered_1000108a();
  local_8a4 = &DAT_10003d0a;
  recovered_1000248d(&DAT_10003d0a);
  local_898 = 0;
  local_890[3] = 0;
  local_89c = 0;
  local_890[2] = 0;
  local_8a0 = 0;
  local_890[1] = 0;
  local_890[0] = 0;
  *device = in_ECX;
  bVar1 = *in_EDX;
  (&DAT_10004272)[iVar8] = bVar1;
  bVar2 = in_EDX[1];
  (&DAT_10004273)[iVar8] = bVar2;
  bVar3 = in_EDX[2];
  (&DAT_10004274)[iVar8] = bVar3;
  *(undefined2 *)(&DAT_10004276 + iVar8) = *(undefined2 *)(in_EDX + 0x10);
  *(undefined4 *)(&DAT_10004278 + iVar8) = 1;
  local_814[0] = 0;
  pcVar11 = str_10003dc2;
  if ((((in_ECX != (int *)0x0) && (*in_ECX == 0x54584b57)) && (99 < (uint)in_ECX[2])) &&
     (in_ECX[0x18] != 0)) {
    local_8ac = in_EDX;
    uVar9 = recovered_10002703(in_ECX,(uint)bVar1,(uint)bVar2,(uint)bVar3,4,2,local_814);
    pbVar17 = local_8ac;
    if (uVar9 == 0) {
      pcVar11 = str_10003dd4;
    }
    else {
      puVar15 = (undefined *)0x0;
      for (iVar10 = -0x18; iVar10 != 0; iVar10 = iVar10 + 4) {
        puVar14 = (undefined *)((uint)puVar15 | 1);
        puVar16 = (undefined *)((uint)puVar15 | 2);
        if (*(uint *)(local_8ac + iVar10 + 0x2c) == 0) {
          puVar16 = puVar15;
        }
        puVar15 = puVar16;
        if ((*(uint *)(local_8ac + iVar10 + 0x2c) & 1) != 0) {
          puVar15 = puVar14;
        }
      }
      iVar10 = recovered_10002c64();
      local_8b0 = (undefined *)((uint)puVar15 | 4);
      if (iVar10 == 0) {
        local_8b0 = puVar15;
      }
      if ((pbVar17[8] == 6) && (pbVar17[9] != 0)) {
        local_8b0 = (undefined *)((uint)local_8b0 | 2);
      }
      local_874[0] = local_814[0] | (uint)local_8b0;
      iVar10 = recovered_10002c17(pbVar17[1],pbVar17[2],local_874[0]);
      if (iVar10 != 0) {
        recovered_10002703(in_ECX,(uint)*pbVar17,(uint)pbVar17[1],(uint)pbVar17[2],4,2,local_874);
        if (((uint)local_8b0 & ~local_874[0]) == 0) {
          local_894 = (int *)(&DAT_10004204 + iVar8);
          local_814[0] = 0;
          recovered_1000108a();
          uVar9 = recovered_10002703(in_ECX,(uint)*pbVar17,(uint)pbVar17[1],(uint)pbVar17[2],0x34,1,
                                     local_814);
          if (uVar9 != 0) {
            puVar15 = (undefined *)0x0;
            while ((puVar15 < (undefined *)0x20 && (local_814[0] - 0x40 < 0xb0))) {
              local_874[0] = 0;
              local_8a8 = 0;
              local_8b8 = 0;
              local_8c4 = 0;
              local_8bc = 0;
              local_8b4 = 0;
              local_8b0 = puVar15;
              uVar9 = recovered_10002703(in_ECX,(uint)*pbVar17,(uint)pbVar17[1],(uint)pbVar17[2],
                                         local_814[0] & 0xffff,1,local_874);
              if ((uVar9 == 0) ||
                 (uVar9 = recovered_10002703(in_ECX,(uint)*pbVar17,(uint)pbVar17[1],(uint)pbVar17[2]
                                             ,local_814[0] + 1 & 0xffff,1,&local_8a8), uVar9 == 0))
              break;
              if ((((local_874[0] == 9) &&
                   (uVar9 = recovered_10002703(in_ECX,(uint)*pbVar17,(uint)pbVar17[1],
                                               (uint)pbVar17[2],local_814[0] + 3 & 0xffff,1,
                                               &local_8b8), uVar9 != 0)) &&
                  (uVar9 = recovered_10002703(in_ECX,(uint)*pbVar17,(uint)pbVar17[1],
                                              (uint)pbVar17[2],local_814[0] + 4 & 0xffff,1,
                                              &local_8c4), uVar9 != 0)) &&
                 ((uVar9 = recovered_10002703(in_ECX,(uint)*pbVar17,(uint)pbVar17[1],
                                              (uint)pbVar17[2],local_814[0] + 8 & 0xffff,4,
                                              &local_8bc), uVar9 != 0 &&
                  (uVar9 = recovered_10002703(in_ECX,(uint)*pbVar17,(uint)pbVar17[1],
                                              (uint)pbVar17[2],local_814[0] + 0xc & 0xffff,4,
                                              &local_8b4), uVar9 != 0)))) {
                local_8c0 = 0;
                *(int *)(&DAT_10004230 + iVar8) = *(int *)(&DAT_10004230 + iVar8) + 1;
                if ((local_8b4 < 0x38 || local_8b8 != 1) ||
                   (iVar10 = recovered_10002c85(local_8c4,local_8bc,local_8b4,&local_8c0),
                   iVar10 == 0)) {
                  if ((local_8b4 < 2 || local_8b8 != 2) ||
                     (iVar10 = recovered_10002c85(local_8c4,local_8bc,local_8b4,&local_8c0),
                     iVar10 == 0)) {
                    if ((local_8b8 == 3) &&
                       (iVar10 = recovered_10002c85(local_8c4,local_8bc,local_8b4,&local_8c0),
                       iVar10 != 0)) {
                      *(int *)(&DAT_1000420c + iVar8) = local_8c0;
                      *(uint *)(&DAT_10004220 + iVar8) = local_8c4;
                    }
                    else if ((local_8b8 == 4) &&
                            (iVar10 = recovered_10002c85(local_8c4,local_8bc,local_8b4,&local_8c0),
                            iVar10 != 0)) {
                      *(int *)(&DAT_10004210 + iVar8) = local_8c0;
                      *(uint *)(&DAT_10004214 + iVar8) = local_8b4;
                      *(uint *)(&DAT_10004224 + iVar8) = local_8c4;
                    }
                  }
                  else {
                    local_890[4] = 0;
                    *(int *)(&DAT_10004208 + iVar8) = local_8c0;
                    *(uint *)(&DAT_1000421c + iVar8) = local_8c4;
                    uVar9 = recovered_10002703(in_ECX,(uint)*pbVar17,(uint)pbVar17[1],
                                               (uint)pbVar17[2],local_814[0] + 0x10 & 0xffff,4,
                                               local_890 + 4);
                    if (local_890[4] == 0 || uVar9 == 0) {
                      *(undefined4 *)(&DAT_10004208 + iVar8) = 0;
                    }
                    else {
                      *(int *)(&DAT_10004228 + iVar8) = local_890[4];
                      *(uint *)(&DAT_1000422c + iVar8) = local_8b4;
                    }
                    pbVar17 = local_8ac;
                  }
                }
                else {
                  *(int *)(&DAT_10004204 + iVar8) = local_8c0;
                  *(uint *)(&DAT_10004218 + iVar8) = local_8c4;
                }
              }
              if ((local_8a8 == 0) || (local_8a8 == local_814[0])) break;
              puVar15 = local_8b0 + 1;
              local_814[0] = local_8a8;
            }
            if (*local_894 != 0) {
              local_814[0] = 0;
              local_874[0] = 0;
              recovered_10002e4b(0x14,iVar8 + ((uintptr_t)pf_module_state+0x53aU));
              *(undefined4 *)(&DAT_1000424c + iVar8) = 1;
              bVar7 = recovered_10002e81();
              if (CONCAT31(extraout_var,bVar7) != 0) {
                *(undefined4 *)(&DAT_1000424c + iVar8) = 2;
                iVar10 = recovered_10002f2d();
                if (((iVar10 != 0) &&
                    (iVar10 = recovered_10002e4b(0x14,(int)local_874), iVar10 != 0)) &&
                   ((local_874[0] & 0xc1) == 1)) {
                  *(undefined4 *)(&DAT_1000424c + iVar8) = 3;
                  iVar10 = recovered_10002f2d();
                  if (((iVar10 != 0) &&
                      (iVar10 = recovered_10002e4b(0x14,(int)local_874), iVar10 != 0)) &&
                     ((local_874[0] & 0xc3) == 3)) {
                    *(undefined4 *)(&DAT_1000424c + iVar8) = 4;
                    iVar10 = recovered_10002f54();
                    if (((iVar10 != 0) &&
                        (iVar10 = recovered_10002f7b((undefined4 *)(iVar8 + ((uintptr_t)pf_module_state+0x52aU))),
                        iVar10 != 0)) && (iVar10 = recovered_10002f54(), iVar10 != 0)) {
                      iVar10 = recovered_10002f7b((undefined4 *)(&DAT_10004238 + iVar8));
                      if ((iVar10 != 0) &&
                         (uVar9 = *(uint *)(&DAT_10004238 + iVar8), (uVar9 & 1) != 0)) {
                        *(undefined4 *)(&DAT_1000423c + iVar8) = 0;
                        *(uint *)(&DAT_10004240 + iVar8) = uVar9 & 3;
                        *(undefined4 *)(&DAT_1000424c + iVar8) = 5;
                        iVar10 = recovered_10002f54();
                        if ((iVar10 != 0) &&
                           (((iVar10 = recovered_10002f54(), iVar10 != 0 &&
                             (iVar10 = recovered_10002f54(), iVar10 != 0)) &&
                            (iVar10 = recovered_10002f54(), iVar10 != 0)))) {
                          recovered_10002fc9();
                          local_874[0] = 0xb;
                          *(undefined4 *)(&DAT_1000424c + iVar8) = 6;
                          iVar10 = recovered_10002f2d();
                          if (iVar10 != 0) {
                            iVar10 = recovered_10002e4b(0x14,(int)(&DAT_10004248 + iVar8));
                            if ((iVar10 != 0) && ((*(uint *)(&DAT_10004248 + iVar8) & 200) == 8)) {
                              *(undefined4 *)(&DAT_1000424c + iVar8) = 7;
                              iVar10 = recovered_10002af6(0x12,(undefined4 *)(iVar8 + ((uintptr_t)pf_module_state+0x546U)));
                              if (((iVar10 != 0) &&
                                  ((iVar10 = recovered_10002e4b(0x15,iVar8 + ((uintptr_t)pf_module_state+0x55aU)),
                                   iVar10 != 0 && (iVar10 = recovered_10002a7e(), iVar10 != 0)))) &&
                                 (iVar10 = recovered_10002af6(0x18,(undefined4 *)
                                                                   (&DAT_10004254 + iVar8)),
                                 iVar10 != 0)) {
                                iVar10 = recovered_10002af6(0x1c,(undefined4 *)
                                                                 (&DAT_10004258 + iVar8));
                                if (iVar10 != 0) {
                                  iVar10 = recovered_10002af6(0x1e,local_814);
                                  if (iVar10 != 0) {
                                    *(uint *)(&DAT_1000425c + iVar8) = local_814[0];
                                    uVar9 = *(uint *)(&DAT_10004208 + iVar8);
                                    if ((((uVar9 != 0) &&
                                         (uVar13 = *(uint *)(&DAT_10004228 + iVar8), uVar13 != 0))
                                        && (1 < *(uint *)(&DAT_1000422c + iVar8))) &&
                                       ((int)((ulonglong)uVar13 * (ulonglong)local_814[0] >> 0x20)
                                        == 0)) {
                                      uVar13 = uVar13 * local_814[0];
                                      if (!CARRY4(uVar9,uVar13) &&
                                          uVar13 <= *(uint *)(&DAT_1000422c + iVar8) - 2) {
                                        (&DAT_10004260)[uVar5 * 0x1c0] = uVar9 + uVar13;
                                      }
                                    }
                                  }
                                  *(undefined4 *)(&DAT_1000424c + iVar8) = 8;
                                  (&DAT_1000427c)[uVar5 * 0x1c0] =
                                       (uint)(((&DAT_10004240)[iVar8] & 2) == 0) << 0x1e |
                                       (uint)local_8ac[2] << 8 | (uint)*local_8ac << 0x10 |
                                       (uint)local_8ac[1] << 0xb | 0x80000000;
                                  uVar9 = *(uint *)(&DAT_10004254 + iVar8) - 1;
                                  if (((uVar9 < (*(uint *)(&DAT_10004254 + iVar8) ^ uVar9)) &&
                                      (*(int *)(&DAT_10004258 + iVar8) == 0)) &&
                                     ((&DAT_10004260)[uVar5 * 0x1c0] != 0)) {
                                    local_874[0] = 0;
                                    local_8a8 = 0;
                                    local_8b8 = 0;
                                    local_8c4 = 0;
                                    local_8bc = 0;
                                    iVar10 = recovered_100030a1(1,(undefined1 *)local_814,local_874)
                                    ;
                                    if (iVar10 != 0) {
                                      for (uVar9 = 1;
                                          (uVar9 != 0x100 &&
                                          ((local_874[0] <= uVar9 >> 3 ||
                                           ((*(byte *)((int)local_814 + (uVar9 >> 3)) >> (uVar9 & 7)
                                            & 1) == 0)))); uVar9 = uVar9 + 1) {
                                      }
                                      (&DAT_10004280)[uVar5 * 0x1c0] = (uint)(uVar9 < 0x100);
                                    }
                                    iVar10 = recovered_100030a1(2,(undefined1 *)local_814,local_874)
                                    ;
                                    if (iVar10 == 0) {
                                      uVar9 = 0;
                                    }
                                    else {
                                      uVar9 = (uint)((~(byte)local_814[0] & 3) == 0 &&
                                                    local_874[0] != 0);
                                    }
                                    (&DAT_10004284)[uVar5 * 0x1c0] = uVar9;
                                    iVar10 = recovered_100030a1(3,(undefined1 *)local_814,local_874)
                                    ;
                                    if ((((iVar10 != 0) && (local_874[0] != 0)) &&
                                        ((~(byte)local_814[0] & 3) == 0)) &&
                                       (iVar10 = recovered_100030a1(0,(undefined1 *)local_814,
                                                                    local_874), iVar10 != 0)) {
                                      uVar9 = recovered_10003276(local_814,local_874[0],
                                                                 (int *)&local_8a8,&local_8c4);
                                      if (((uVar9 != 0) &&
                                          (iVar10 = recovered_100030a1(1,(undefined1 *)local_814,
                                                                       local_874), iVar10 != 0)) &&
                                         (uVar9 = recovered_10003276(local_814,local_874[0],
                                                                     &local_8b8,&local_8bc),
                                         uVar9 != 0)) {
                                        (&DAT_10004288)[uVar5 * 0x1c0] = 1;
                                        (&DAT_1000428c)[uVar5 * 0x1c0] = local_8a8;
                                        (&DAT_10004290)[uVar5 * 0x1c0] = local_8b8;
                                        (&DAT_10004294)[uVar5 * 0x1c0] = local_8c4;
                                        (&DAT_10004298)[uVar5 * 0x1c0] = local_8bc;
                                      }
                                    }
                                    recovered_10002f2d();
                                    recovered_10002f2d();
                                    if ((((&DAT_10004280)[uVar5 * 0x1c0] != 0) ||
                                        ((&DAT_10004284)[uVar5 * 0x1c0] != 0)) ||
                                       ((&DAT_10004288)[uVar5 * 0x1c0] != 0)) {
                                      uVar9 = 0x20;
                                      if (*(uint *)(&DAT_10004254 + iVar8) < 0x20) {
                                        uVar9 = *(uint *)(&DAT_10004254 + iVar8);
                                      }
                                      (&DAT_1000426c)[uVar5 * 0x380] = (short)uVar9;
                                      recovered_1000108a();
                                      recovered_1000108a();
                                      local_8b0 = &DAT_10004600 + iVar8;
                                      recovered_1000108a();
                                      local_878 = &DAT_10004800 + iVar8;
                                      recovered_1000108a();
                                      local_87c = &DAT_10004300 + iVar8;
                                      iVar10 = recovered_10002a00((int)(&DAT_10004300 + iVar8),0x200
                                                                  ,(int)&local_898);
                                      if ((((iVar10 != 0) &&
                                           (iVar10 = recovered_10002a00((int)(&DAT_10004500 + iVar8)
                                                                        ,0x46,(int)&local_89c),
                                           iVar10 != 0)) &&
                                          (iVar10 = recovered_10002a00((int)local_8b0,0x106,
                                                                       (int)&local_8a0), iVar10 != 0
                                          )) && ((((local_898 & 0xf) == 0 && ((local_89c & 1) == 0))
                                                 && ((local_8a0 & 3) == 0)))) {
                                        iVar10 = 0x600;
                                        for (uVar9 = 0; uVar4 = (&DAT_1000426c)[uVar5 * 0x380],
                                            uVar9 < uVar4; uVar9 = uVar9 + 1) {
                                          local_814[0] = 0;
                                          local_874[0] = 0;
                                          iVar12 = recovered_10002a00((int)device + iVar10,8,
                                                                      (int)local_814);
                                          if (iVar12 == 0) goto LAB_100016d3;
                                          *(char *)(iVar8 + 0x10003700 + iVar10 * 2) =
                                               (char)local_814[0];
                                          *(char *)(iVar8 + 0x10003701 + iVar10 * 2) =
                                               (char)(local_814[0] >> 8);
                                          *(char *)(iVar8 + 0x10003702 + iVar10 * 2) =
                                               (char)(local_814[0] >> 0x10);
                                          *(char *)(iVar8 + 0x10003703 + iVar10 * 2) =
                                               (char)(local_814[0] >> 0x18);
                                          *(char *)(iVar8 + 0x10003704 + iVar10 * 2) =
                                               (char)local_874[0];
                                          *(char *)(iVar8 + 0x10003705 + iVar10 * 2) =
                                               (char)(local_874[0] >> 8);
                                          *(char *)(iVar8 + 0x10003706 + iVar10 * 2) =
                                               (char)(local_874[0] >> 0x10);
                                          *(char *)(iVar8 + 0x10003707 + iVar10 * 2) =
                                               (char)(local_874[0] >> 0x18);
                                          *(undefined4 *)(iVar8 + 0x10003708 + iVar10 * 2) = 8;
                                          *(undefined2 *)(iVar8 + 0x1000370c + iVar10 * 2) = 2;
                                          (&DAT_10004504)[uVar9 * 2 + iVar8] = (char)uVar9;
                                          (&DAT_10004505)[uVar9 * 2 + iVar8] = (char)(uVar9 >> 8);
                                          iVar10 = iVar10 + 8;
                                        }
                                        (&DAT_1000426e)[uVar5 * 0x380] = uVar4;
                                        *(char *)(&DAT_10004502 + uVar5 * 0x380) = (char)uVar4;
                                        *(char *)((int)&DAT_10004502 + iVar8 + 1) =
                                             (char)(uVar4 >> 8);
                                        recovered_10002a4c(in_ECX,(&DAT_1000427c)[uVar5 * 0x1c0],
                                                           local_87c,0x200);
                                        recovered_10002a4c(in_ECX,(&DAT_1000427c)[uVar5 * 0x1c0],
                                                           &DAT_10004500 + iVar8,0x46);
                                        recovered_10002a4c(in_ECX,(&DAT_1000427c)[uVar5 * 0x1c0],
                                                           local_8b0,0x106);
                                        recovered_10002a4c(in_ECX,(&DAT_1000427c)[uVar5 * 0x1c0],
                                                           local_878,0x100);
                                        iVar8 = recovered_10002a7e();
                                        piVar6 = local_894;
                                        if (((iVar8 != 0) &&
                                            (iVar8 = recovered_10002a7e(), iVar8 != 0)) &&
                                           (((bVar7 = recovered_10002aa5(),
                                             CONCAT31(extraout_var_00,bVar7) != 0 &&
                                             (((((bVar7 = recovered_10002aa5(),
                                                 CONCAT31(extraout_var_01,bVar7) != 0 &&
                                                 (bVar7 = recovered_10002aa5(),
                                                 CONCAT31(extraout_var_02,bVar7) != 0)) &&
                                                (iVar8 = recovered_10002a7e(), iVar8 != 0)) &&
                                               ((iVar8 = recovered_10002af6(0x1c,local_890),
                                                iVar8 != 0 && (local_890[0] != 0)))) &&
                                              (local_814[0] = 0, *piVar6 != 0)))) &&
                                            (((iVar8 = recovered_10002e4b(0x14,(int)local_814),
                                              iVar8 != 0 && ((local_814[0] & 200) == 8)) &&
                                             ((iVar8 = recovered_10002f2d(), iVar8 != 0 &&
                                              (((iVar8 = recovered_10002e4b(0x14,(int)local_814),
                                                iVar8 != 0 && ((local_814[0] & 0xc4) == 4)) &&
                                               (iVar8 = recovered_10002a7e(), iVar8 != 0)))))))))) {
                                          (&DAT_10004268)[uVar5 * 0x1c0] = 1;
                                          recovered_1000248d(local_8a4);
                                          if ((&DAT_10004280)[uVar5 * 0x1c0] != 0) {
                                            recovered_10002b44(str_10003d71);
                                          }
                                          if ((&DAT_10004284)[uVar5 * 0x1c0] != 0) {
                                            pcVar11 = str_10003d7a;
                                            if (local_414[0] == '\0') {
                                              pcVar11 = str_10003d8d;
                                            }
                                            recovered_10002b44(pcVar11);
                                          }
                                          if ((&DAT_10004288)[uVar5 * 0x1c0] != 0) {
                                            pcVar11 = str_10003d9e;
                                            if (local_414[0] == '\0') {
                                              pcVar11 = str_10003db1;
                                            }
                                            recovered_10002b44(pcVar11);
                                          }
                                          DAT_10004100 = DAT_10004100 + 1;
                                          local_8a4 = recovered_10002767();
                                          recovered_1000248d(str_10003d63);
                                          recovered_10002b44(&DAT_10003df9);
                                          recovered_1000331a((uint)*local_8ac,2);
                                          recovered_10002b44(&DAT_10003dfb);
                                          recovered_1000331a((uint)local_8ac[1],2);
                                          recovered_10002b44(&DAT_10003dfd);
                                          recovered_1000336c((uint)local_8ac[2]);
                                          recovered_1000248d(&DAT_10003dff);
                                          recovered_1000331a((uint)*local_8ac,2);
                                          recovered_10002b44(&DAT_10003dfb);
                                          recovered_1000331a((uint)local_8ac[1],2);
                                          recovered_10002b44(&DAT_10003dfd);
                                          recovered_1000336c((uint)local_8ac[2]);
                                          recovered_10002b44(&DAT_10003e04);
                                          recovered_1000331a((uint)*(ushort *)(local_8ac + 4),4);
                                          recovered_10002b44(&DAT_10003dfb);
                                          recovered_1000331a((uint)*(ushort *)(local_8ac + 6),4);
                                          recovered_10002b44(&DAT_10003e07);
                                          if (local_414[0] != '\0') {
                                            recovered_10002b44(&DAT_10003e09);
                                            recovered_10002b44(local_414);
                                          }
                                          if ((code *)in_ECX[3] != (code *)0x0) {
                                            (*(code *)in_ECX[3])(local_874,local_8a4,local_814);
                                          }
                                          return 1;
                                        }
                                      }
                                    }
                                  }
                                  goto LAB_100016d3;
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
              iVar8 = recovered_10002e4b(0x14,(int)local_874);
              if (local_874[0] != 0 && iVar8 != 0) {
                recovered_10002f2d();
              }
            }
          }
        }
        goto LAB_100016d3;
      }
      pcVar11 = str_10003de6;
    }
  }
  recovered_10002b44(pcVar11);
LAB_100016d3:
  recovered_10002b8a(device);
  return 0;
}

#undef DAT_10003d0a
#undef DAT_10003df9
#undef DAT_10003dfb
#undef DAT_10003dfd
#undef DAT_10003dff
#undef DAT_10003e04
#undef DAT_10003e07
#undef DAT_10003e09
#undef DAT_10004100
#undef DAT_10004200
#undef DAT_10004204
#undef DAT_10004208
#undef DAT_1000420c
#undef DAT_10004210
#undef DAT_10004214
#undef DAT_10004218
#undef DAT_1000421c
#undef DAT_10004220
#undef DAT_10004224
#undef DAT_10004228
#undef DAT_1000422c
#undef DAT_10004230
#undef DAT_10004238
#undef DAT_1000423c
#undef DAT_10004240
#undef DAT_10004248
#undef DAT_1000424c
#undef DAT_10004254
#undef DAT_10004258
#undef DAT_1000425c
#undef DAT_10004260
#undef DAT_10004268
#undef DAT_1000426c
#undef DAT_1000426e
#undef DAT_10004272
#undef DAT_10004273
#undef DAT_10004274
#undef DAT_10004276
#undef DAT_10004278
#undef DAT_1000427c
#undef DAT_10004280
#undef DAT_10004284
#undef DAT_10004288
#undef DAT_1000428c
#undef DAT_10004290
#undef DAT_10004294
#undef DAT_10004298
#undef DAT_10004300
#undef DAT_10004500
#undef DAT_10004502
#undef DAT_10004504
#undef DAT_10004505
#undef DAT_10004600
#undef DAT_10004800
#undef str_10003d63
#undef str_10003d71
#undef str_10003d7a
#undef str_10003d8d
#undef str_10003d9e
#undef str_10003db1
#undef str_10003dc2
#undef str_10003dd4
#undef str_10003de6
#undef local_898
#undef local_894
#undef local_890
#undef local_87c
#undef local_878
#undef local_874
#undef local_814
#undef local_414
#undef local_8c4
#undef local_8c0
#undef local_8bc
#undef local_8b8
#undef local_8b4
#undef local_8b0
#undef local_8ac
#undef local_8a8
#undef local_8a4
#undef local_8a0
#undef local_89c

#undef DAT_10004100
#define DAT_10004100 (*(uint *)(((uintptr_t)pf_module_state + 0x3f6U)))
#undef DAT_10004200
#define DAT_10004200 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4f6U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000244c
 */

void recovered_1000244c(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  undefined4 *device;

  device = &DAT_10004200;
  for (uVar1 = 0; uVar1 < DAT_10004100; uVar1 = uVar1 + 1) {
    recovered_10002b8a(device);
    device = device + 0x1c0;
  }
  DAT_10004100 = 0;
  return;
}

#undef DAT_10004100
#undef DAT_10004200

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000248d
 */

void recovered_1000248d(char *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined1 *in_ECX;

  if (in_ECX != (undefined1 *)0x0) {
    *in_ECX = 0;
    recovered_10002b44(param_1);
  }
  return;
}


#undef DAT_10004114
#define DAT_10004114 (*(char *)(((uintptr_t)pf_module_state + 0x40aU)))
#undef DAT_10004118
#define DAT_10004118 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x40eU)))
#undef DAT_1000411c
#define DAT_1000411c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x412U)))
#undef DAT_10004120
#define DAT_10004120 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x416U)))
#undef DAT_10004124
#define DAT_10004124 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x41aU)))
#undef DAT_10004128
#define DAT_10004128 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x41eU)))
#undef DAT_1000412c
#define DAT_1000412c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x422U)))
#undef DAT_10004130
#define DAT_10004130 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x426U)))
#undef DAT_10004134
#define DAT_10004134 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x42aU)))
#undef DAT_10004138
#define DAT_10004138 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x42eU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100024ac
 */

bool recovered_100024ac(undefined4 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;

  if (param_1 == (undefined4 *)0x0) {
    bVar1 = false;
  }
  else {
    recovered_1000346a();
    recovered_10003495();
    bVar1 = DAT_10004114 == '\x01';
    if (bVar1) {
      *param_1 = DAT_1000411c;
      param_1[1] = DAT_10004120;
      param_1[2] = DAT_10004124;
      param_1[3] = DAT_10004128;
      param_1[4] = DAT_1000412c;
      param_1[5] = DAT_10004130;
      param_1[6] = DAT_10004134;
      param_1[7] = DAT_10004138;
      DAT_1000412c = 0;
      DAT_10004130 = 0;
      DAT_10004114 = '\0';
    }
    DAT_10004118 = 0;
  }
  return bVar1;
}

#undef DAT_10004114
#undef DAT_10004118
#undef DAT_1000411c
#undef DAT_10004120
#undef DAT_10004124
#undef DAT_10004128
#undef DAT_1000412c
#undef DAT_10004130
#undef DAT_10004134
#undef DAT_10004138

#undef DAT_10004118
#define DAT_10004118 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x40eU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000254e
 */

uint recovered_1000254e(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  recovered_1000346a();
  uVar1 = recovered_10003c1d();
  if (uVar1 == 0) {
    recovered_10003495();
    uVar1 = recovered_10003c1d();
  }
  DAT_10004118 = 0;
  return uVar1;
}

#undef DAT_10004118

#define local_34 (*(undefined4 *)(pf_stack_frame + 28))
#define local_30 (*(uint *)(pf_stack_frame + 32))
#define local_2c (*(uint *)(pf_stack_frame + 36))
#define local_28 (*(undefined4 *)(pf_stack_frame + 40))
#define local_24 (*(undefined4 *)(pf_stack_frame + 44))
#define local_20 (*(undefined4 * *)(pf_stack_frame + 48))
#define local_1c (*(uint *)(pf_stack_frame + 52))
#define local_18 (*(int * *)(pf_stack_frame + 56))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002586
 */

uint recovered_10002586(int *api,uint bus,uint slot,uint function,void *out)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  uint bus_00;
  uint slot_00;
  int iVar4;
  uint function_00;

  local_30 = 0;
  local_24 = 0;
  local_34 = 0;
  uVar1 = 0;
  if (out != (void *)0x0) {
    function_00 = function & 0xff;
    slot_00 = slot & 0xff;
    bus_00 = bus & 0xff;
    local_2c = bus;
    uVar1 = recovered_10002703(api,bus_00,slot_00,function_00,0,4,&local_30);
    if (((uVar1 == 0) || ((local_30 & 0xffff) == 0)) || ((local_30 & 0xffff) == 0xffff)) {
      uVar1 = 0;
    }
    else {
      uVar2 = recovered_10002703(api,bus_00,slot_00,function_00,8,4,&local_24);
      uVar1 = 0;
      if (uVar2 != 0) {
        local_20 = (undefined4 *)((int)out + 0x10);
        uVar1 = recovered_10002703(api,bus_00,slot_00,function_00,4,4,local_20);
        if (uVar1 == 0) {
          *local_20 = 0;
        }
        uVar1 = recovered_10002703(api,bus_00,slot_00,function_00,0xc,4,&local_34);
        if (uVar1 == 0) {
          local_34 = 0;
          PF_PART1(local_34, 2) = 0;
        }
        else {
        }
        *(char *)out = (char)local_2c;
        *(undefined1 *)((int)out + 1) = (undefined1)slot;
        *(undefined1 *)((int)out + 2) = (undefined1)function;
        *(uint *)((int)out + 4) = local_30;
        *(ushort *)((int)out + 10) = (ushort)local_24 << 8 | (ushort)local_24 >> 8;
        *(char *)((int)out + 9) = (char)((uint)local_24 >> 0x10);
        *(char *)((int)out + 8) = (char)((uint)local_24 >> 0x18);
        *(undefined1 *)((int)out + 0xc) = PF_PART1(local_34, 2);
        local_1c = slot_00;
        local_18 = api;
        for (iVar4 = -0x18; iVar4 != 0; iVar4 = iVar4 + 4) {
          local_28 = 0;
          uVar1 = recovered_10002703(local_18,bus_00,local_1c,function_00,iVar4 + 0x28U & 0xffff,4,
                                     &local_28);
          uVar3 = 0;
          if (uVar1 != 0) {
            uVar3 = local_28;
          }
          *(undefined4 *)((int)out + iVar4 + 0x2c) = uVar3;
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
#undef local_18

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002703
 */

uint recovered_10002703(int *api,uint bus,uint slot,uint function,uint offset,uint width,void *out)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  if ((((api == (int *)0x0) || (*api != 0x54584b57)) || ((uint)api[2] < 0x60)) ||
     (out == (void *)0x0 || (code *)api[0x17] == (code *)0x0)) {
    return 0;
  }
  uVar1 = (*(code *)api[0x17])
                    (bus & 0xff,slot & 0xff,(undefined1)function,offset & 0xffff,width,out);
  return uVar1;
}


#undef str_10003e0c
#define str_10003e0c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x102U)))
#undef str_10003e17
#define str_10003e17 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x10dU)))
#undef str_10003e26
#define str_10003e26 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x11cU)))
#undef str_10003e37
#define str_10003e37 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x12dU)))
#undef str_10003e4a
#define str_10003e4a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x140U)))
#undef str_10003e5d
#define str_10003e5d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x153U)))
#undef str_10003e6d
#define str_10003e6d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x163U)))
#undef str_10003e7c
#define str_10003e7c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x172U)))
#undef str_10003e8b
#define str_10003e8b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x181U)))
#undef str_10003e9c
#define str_10003e9c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x192U)))
#undef str_10003ea7
#define str_10003ea7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x19dU)))
#undef str_10003eb3
#define str_10003eb3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1a9U)))
#undef str_10003ebd
#define str_10003ebd (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1b3U)))
#undef str_10003ec6
#define str_10003ec6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1bcU)))
#undef str_10003ed1
#define str_10003ed1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1c7U)))
#undef str_10003eda
#define str_10003eda (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1d0U)))
#undef str_10003ee2
#define str_10003ee2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1d8U)))
#undef str_10003eeb
#define str_10003eeb (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1e1U)))
#undef str_10003ef2
#define str_10003ef2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1e8U)))
#undef str_10003f05
#define str_10003f05 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1fbU)))
#undef str_10003f18
#define str_10003f18 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x20eU)))
#undef str_10003f2b
#define str_10003f2b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x221U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002767
 */

char * recovered_10002767(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  short sVar1;
  char *pcVar2;
  int in_ECX;

  if (in_ECX == 0) goto switchD_1000290c_caseD_5;
  sVar1 = *(short *)(in_ECX + 4);
  if (sVar1 == 0x1013) {
    if ((*(ushort *)(in_ECX + 6) & 0xfffe) == 0xb8) {
      return str_10003ec6;
    }
LAB_100028f3:
    pcVar2 = str_10003ef2;
    switch((uintptr_t)(*(undefined1 *)(in_ECX + 8))) {
    case 1:
      pcVar2 = str_10003f18;
      break;
    case 2:
      pcVar2 = str_10003f05;
      break;
    case 3:
      break;
    case 4:
      pcVar2 = str_10003f2b;
      break;
    case 0xc:
      if (*(char *)(in_ECX + 9) == '\x03') {
LAB_1000292c:
        pcVar2 = recovered_10003401();
        return pcVar2;
      }
    default:
switchD_1000290c_caseD_5:
      pcVar2 = str_10003e0c;
    }
  }
  else {
    if (sVar1 == 0x1033) {
      if (*(short *)(in_ECX + 6) == 0x194) {
        return str_10003ebd;
      }
      goto LAB_100028f3;
    }
    if (sVar1 == 0x106b) {
      if (*(short *)(in_ECX + 6) == 0x21) {
LAB_10002891:
        return str_10003eeb;
      }
      goto LAB_100028f3;
    }
    if (sVar1 == 0x108e) {
      if (*(short *)(in_ECX + 6) == 0x2bad) goto LAB_10002891;
      goto LAB_100028f3;
    }
    if (sVar1 == 0x10ec) {
      if (*(short *)(in_ECX + 6) == -0x7fd7) {
        return str_10003ee2;
      }
      goto LAB_100028f3;
    }
    if (sVar1 == 0x1234) {
      if (*(short *)(in_ECX + 6) == 0x1111) {
        return str_10003ed1;
      }
      goto LAB_100028f3;
    }
    if (sVar1 == -0x7f7a) {
      if (*(short *)(in_ECX + 6) == 0x100e) {
        return str_10003ea7;
      }
      if (*(char *)(in_ECX + 8) == '\f') {
        if (*(char *)(in_ECX + 9) == '\x03') goto LAB_1000292c;
      }
      else if ((*(char *)(in_ECX + 8) == '\x04') && (*(char *)(in_ECX + 9) == '\x03')) {
        return str_10003eb3;
      }
      goto LAB_100028f3;
    }
    if (sVar1 == 0x1b36) {
      if (*(short *)(in_ECX + 6) == 0x100) {
        return str_10003eda;
      }
      goto LAB_100028f3;
    }
    if (sVar1 != 0x1af4) goto LAB_100028f3;
    pcVar2 = str_10003e17;
    switch((uintptr_t)(*(undefined2 *)(in_ECX + 6))) {
    case 0x1041:
      break;
    case 0x1042:
switchD_10002800_caseD_1042:
      pcVar2 = str_10003e26;
      break;
    case 0x1043:
switchD_10002800_caseD_1043:
      pcVar2 = str_10003e4a;
      break;
    case 0x1044:
switchD_10002800_caseD_1044:
      pcVar2 = str_10003e6d;
      break;
    case 0x1045:
switchD_10002800_caseD_1045:
      pcVar2 = str_10003e37;
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
switchD_10002800_caseD_1046:
      pcVar2 = str_10003e9c;
      break;
    case 0x1048:
switchD_10002800_caseD_1048:
      pcVar2 = str_10003e5d;
      break;
    case 0x1050:
      pcVar2 = str_10003e7c;
      break;
    case 0x1052:
      pcVar2 = str_10003e8b;
      break;
    default:
      switch((uintptr_t)(*(undefined2 *)(in_ECX + 6))) {
      case 0x1000:
        break;
      case 0x1001:
        goto switchD_10002800_caseD_1042;
      case 0x1002:
        goto switchD_10002800_caseD_1045;
      case 0x1003:
        goto switchD_10002800_caseD_1043;
      case 0x1004:
        goto switchD_10002800_caseD_1048;
      case 0x1005:
        goto switchD_10002800_caseD_1044;
      default:
        goto switchD_10002800_caseD_1046;
      }
    }
  }
  return pcVar2;
}

#undef str_10003e0c
#undef str_10003e17
#undef str_10003e26
#undef str_10003e37
#undef str_10003e4a
#undef str_10003e5d
#undef str_10003e6d
#undef str_10003e7c
#undef str_10003e8b
#undef str_10003e9c
#undef str_10003ea7
#undef str_10003eb3
#undef str_10003ebd
#undef str_10003ec6
#undef str_10003ed1
#undef str_10003eda
#undef str_10003ee2
#undef str_10003eeb
#undef str_10003ef2
#undef str_10003f05
#undef str_10003f18
#undef str_10003f2b

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002a00
 */

undefined4 recovered_10002a00(int param_1,undefined4 param_2,int param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  int *in_ECX;

  if ((((in_ECX == (int *)0x0) || (*in_ECX != 0x54584b57)) || ((uint)in_ECX[2] < 0x74)) ||
     (((param_3 == 0 || (param_1 == 0)) || ((code *)in_ECX[0x1c] == (code *)0x0)))) {
    uVar1 = 0;
  }
  else {
    uVar1 = (*(code *)in_ECX[0x1c])();
  }
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002a4c
 */

void recovered_10002a4c(int *api,uint device,void *data,uint length)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if ((((api != (int *)0x0) && (*api == 0x54584b57)) && (0x77 < (uint)api[2])) &&
     ((code *)api[0x1d] != (code *)0x0)) {
    (*(code *)api[0x1d])(device,data,length);
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002a7e
 */

undefined4 recovered_10002a7e(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  int in_EDX;

  if (in_EDX == 0) {
    return 0;
  }
  uVar1 = recovered_10003057();
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002aa5
 */

bool recovered_10002aa5(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  bool bVar2;

  iVar1 = recovered_10002f54();
  if (iVar1 == 0) {
    bVar2 = false;
  }
  else {
    iVar1 = recovered_10002f54();
    bVar2 = iVar1 != 0;
  }
  return bVar2;
}


#define local_14 (*(undefined4 (*)[5])(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002af6
 */

undefined4 recovered_10002af6(undefined4 param_1,undefined4 *param_2)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  int iVar1;
  int in_EDX;
  undefined4 uVar2;

  local_14[0] = 0;
  uVar2 = 0;
  if (in_EDX != 0 && param_2 != (undefined4 *)0x0) {
    iVar1 = recovered_10002ff1(2,(int)local_14);
    if (iVar1 != 0) {
      *param_2 = local_14[0];
      uVar2 = 1;
    }
  }
  return uVar2;
}

#undef local_14

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002b44
 */

void recovered_10002b44(char *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int in_ECX;
  uint in_EDX;

  uVar1 = recovered_10002c64();
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
 * Address: 0x10002b8a
 */

void recovered_10002b8a(void *device)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  undefined3 extraout_var = 0;
  ushort uVar2;

  if (device == (void *)0x0) {
    return;
  }
  if (*(int *)device != 0) {
    if (*(int *)((int)device + 4) == 0) {
      bVar1 = false;
    }
    else {
      bVar1 = recovered_10002e81();
      bVar1 = CONCAT31(extraout_var,bVar1) == 0;
      if (*(int *)device == 0) goto LAB_10002bf2;
    }
    if (*(int *)((int)device + 0x78) != 0) {
      uVar2 = *(ushort *)((int)device + 0x76) & 0xfffb;
      if (!bVar1) {
        uVar2 = *(ushort *)((int)device + 0x76);
      }
      recovered_10002c17(*(undefined1 *)((int)device + 0x73),*(undefined1 *)((int)device + 0x74),
                         (uint)uVar2);
    }
  }
LAB_10002bf2:
  *(undefined4 *)((int)device + 0x78) = 0;
  *(undefined4 *)((int)device + 0x68) = 0;
  *(undefined4 *)((int)device + 0x80) = 0;
  *(undefined4 *)((int)device + 0x84) = 0;
  *(undefined4 *)((int)device + 0x88) = 0;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002c17
 */

undefined4 recovered_10002c17(undefined1 param_1,undefined1 param_2,undefined4 param_3)

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
 * Address: 0x10002c64
 */

int recovered_10002c64(void)

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


#define local_28 (*(uint *)(pf_stack_frame + 24))
#define local_24 (*(int *)(pf_stack_frame + 28))
#define local_20 (*(int *)(pf_stack_frame + 32))
#define local_1c (*(uint *)(pf_stack_frame + 36))
#define local_18 (*(uint *)(pf_stack_frame + 40))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002c85
 */

undefined4 recovered_10002c85(uint param_1,uint param_2,uint param_3,int *param_4)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int *in_ECX;
  int iVar2;
  byte *in_EDX;
  int iVar3;

  iVar3 = param_3 + param_2;
  if (CARRY4(param_3,param_2)) {
    return 0;
  }
  if (param_3 == 0) {
    return 0;
  }
  if (5 < param_1) {
    return 0;
  }
  if (param_4 == (int *)0x0) {
    return 0;
  }
  local_24 = 0;
  if (((param_1 == 0) || ((*(uint *)(in_EDX + param_1 * 4 + 0x10) & 7) != 4)) &&
     (local_28 = *(uint *)(in_EDX + param_1 * 4 + 0x14), (local_28 & 1) == 0 && local_28 != 0)) {
    local_18 = (uint)in_EDX[2];
    local_1c = param_1 * 4 + 0x10 & 0xffff;
    recovered_10002703(in_ECX,(uint)*in_EDX,(uint)in_EDX[1],local_18,local_1c,4,&local_28);
    iVar2 = 0;
    if ((local_28 & 7) == 4) {
      if (4 < param_1) {
        return 0;
      }
      local_24 = *(int *)(in_EDX + param_1 * 4 + 0x18);
      recovered_10002703(in_ECX,(uint)*in_EDX,(uint)in_EDX[1],(uint)in_EDX[2],
                         param_1 * 4 + 0x14 & 0xffff,4,&local_24);
      iVar2 = local_24;
    }
    uVar1 = 0xfffffffc;
    if ((local_28 & 1) == 0) {
      uVar1 = 0xfffffff0;
    }
    uVar1 = uVar1 & local_28;
    if ((iVar3 != 0) && (uVar1 != 0 || iVar2 != 0)) {
      *param_4 = 0;
      local_20 = 0;
      if ((in_ECX != (int *)0x0) && (*in_ECX == 0x54584b57)) {
        if (((uint)in_ECX[2] < 0xbc) || ((code *)in_ECX[0x2e] == (code *)0x0)) {
          if ((0x67 < (uint)in_ECX[2] && iVar2 == 0) &&
             (((code *)in_ECX[0x19] != (code *)0x0 &&
              (iVar3 = (*(code *)in_ECX[0x19])(uVar1,0,iVar3,&local_20), iVar3 != 0))))
          goto LAB_10002e3e;
        }
        else {
          iVar3 = (*(code *)in_ECX[0x2e])(uVar1,iVar2,iVar3,param_4);
          if (iVar3 != 0) {
            local_20 = *param_4;
LAB_10002e3e:
            *param_4 = local_20 + param_2;
            return 1;
          }
        }
      }
    }
  }
  return 0;
}

#undef local_28
#undef local_24
#undef local_20
#undef local_1c
#undef local_18

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002e4b
 */

undefined4 recovered_10002e4b(undefined4 param_1,int param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  int in_EDX;

  if (in_EDX == 0 || param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = recovered_10002ff1(1,param_2);
  }
  return uVar1;
}


#define local_18 (*(int (*)[6])(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002e81
 */

bool recovered_10002e81(void)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  int iVar1;
  int *in_ECX;
  int in_EDX;
  uint uVar2;
  bool bVar3;

  local_18[0] = 0xff;
  bVar3 = false;
  if (in_EDX != 0 && in_ECX != (int *)0x0) {
    iVar1 = recovered_10002f2d();
    if (iVar1 != 0) {
      recovered_10002fc9();
      for (uVar2 = 0; uVar2 != 1000; uVar2 = uVar2 + 1) {
        iVar1 = recovered_10002e4b(0x14,(int)local_18);
        if ((iVar1 != 0) && (local_18[0] == 0)) break;
        if (((*in_ECX == 0x54584b57) && (0x33 < (uint)in_ECX[2])) &&
           ((code *)in_ECX[0xc] != (code *)0x0)) {
          (*(code *)in_ECX[0xc])(10);
        }
      }
      bVar3 = uVar2 < 1000;
    }
  }
  return bVar3;
}

#undef local_18

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002f2d
 */

undefined4 recovered_10002f2d(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  int in_EDX;

  if (in_EDX == 0) {
    return 0;
  }
  uVar1 = recovered_10003057();
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002f54
 */

undefined4 recovered_10002f54(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  int in_EDX;

  if (in_EDX == 0) {
    return 0;
  }
  uVar1 = recovered_10003057();
  return uVar1;
}


#define local_14 (*(undefined4 (*)[5])(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002f7b
 */

undefined4 recovered_10002f7b(undefined4 *param_1)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  int iVar1;
  int in_EDX;
  undefined4 uVar2;

  local_14[0] = 0;
  uVar2 = 0;
  if (in_EDX != 0 && param_1 != (undefined4 *)0x0) {
    iVar1 = recovered_10002ff1(4,(int)local_14);
    if (iVar1 != 0) {
      *param_1 = local_14[0];
      uVar2 = 1;
    }
  }
  return uVar2;
}

#undef local_14

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002fc9
 */

void recovered_10002fc9(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int *in_ECX;

  if ((((in_ECX != (int *)0x0) && (*in_ECX == 0x54584b57)) && (0x7b < (uint)in_ECX[2])) &&
     ((code *)in_ECX[0x1e] != (code *)0x0)) {
    (*(code *)in_ECX[0x1e])();
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002ff1
 */

undefined4 recovered_10002ff1(undefined4 param_1,int param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  int *in_ECX;
  code *pcVar2;

  if ((in_ECX != (int *)0x0) && (*in_ECX == 0x54584b57)) {
    if ((uint)in_ECX[2] < 0xc0) {
      if ((uint)in_ECX[2] < 0x6c) {
        return 0;
      }
    }
    else {
      pcVar2 = (code *)in_ECX[0x2f];
      if (param_2 != 0 && pcVar2 != (code *)0x0) goto LAB_1000303f;
    }
    pcVar2 = (code *)in_ECX[0x1a];
    if (param_2 != 0 && pcVar2 != (code *)0x0) {
LAB_1000303f:
      uVar1 = (*pcVar2)();
      return uVar1;
    }
  }
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003057
 */

undefined4 recovered_10003057(void)

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
      if (pcVar1 != (code *)0x0) goto LAB_10003085;
    }
    pcVar1 = (code *)in_ECX[0x1b];
    if (pcVar1 != (code *)0x0) {
LAB_10003085:
      uVar2 = (*pcVar1)();
      return uVar2;
    }
  }
  return 0;
}


#define local_38 (*(undefined4 *)(pf_stack_frame + 24))
#define local_34 (*(uint *)(pf_stack_frame + 28))
#define local_30 (*(int *)(pf_stack_frame + 32))
#define local_2c (*(int *)(pf_stack_frame + 36))
#define local_28 (*(uint *)(pf_stack_frame + 40))
#define local_24 (*(int *)(pf_stack_frame + 44))
#define local_20 (*(uint *)(pf_stack_frame + 48))
#define local_18 (*(uint *)(pf_stack_frame + 56))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100030a1
 */

undefined4 recovered_100030a1(undefined4 param_1,undefined1 *param_2,uint *param_3)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int *in_ECX;
  uint uVar4;
  undefined1 *puVar5;

  if (param_3 != (uint *)0x0) {
    *param_3 = 0;
  }
  uVar1 = 0;
  if ((((param_2 != (undefined1 *)0x0) && (*in_ECX != 0)) && (in_ECX[4] != 0)) &&
     (8 < (uint)in_ECX[5])) {
    local_20 = in_ECX[5] - 8;
    local_24 = 0;
    do {
      if (local_24 == 4) {
        return 0;
      }
      local_2c = 0;
      local_30 = 0;
      local_34 = 0;
      recovered_1000108a();
      iVar2 = recovered_10002e4b(0x15,(int)&local_2c);
      if (((iVar2 == 0) || (iVar2 = recovered_10002f2d(), iVar2 == 0)) ||
         (iVar2 = recovered_10002f2d(), iVar2 == 0)) {
        return 0;
      }
      recovered_10002fc9();
      iVar2 = recovered_10002e4b(2,(int)&local_34);
      if (iVar2 == 0) {
        return 0;
      }
      local_28 = local_34;
      if (local_20 < local_34) {
        local_28 = local_20;
      }
      if (0x7f < local_28) {
        local_28 = 0x80;
      }
      iVar2 = 0;
      uVar4 = local_28;
      puVar5 = param_2;
      while (uVar4 != 0) {
        local_38 = 0;
        local_18 = uVar4 - 1;
        iVar3 = recovered_10002e4b(iVar2 + 8,(int)&local_38);
        if (iVar3 == 0) {
          return 0;
        }
        *puVar5 = (undefined1)local_38;
        iVar2 = iVar2 + 1;
        puVar5 = puVar5 + 1;
        uVar4 = local_18;
      }
      recovered_10002fc9();
      iVar2 = recovered_10002e4b(0x15,(int)&local_30);
      if (iVar2 == 0) {
        return 0;
      }
      if (local_2c == local_30 && param_3 != (uint *)0x0) {
        *param_3 = local_28;
        return 1;
      }
      local_24 = local_24 + 1;
    } while (local_2c != local_30);
    uVar1 = 1;
  }
  return uVar1;
}

#undef local_38
#undef local_34
#undef local_30
#undef local_2c
#undef local_28
#undef local_24
#undef local_20
#undef local_18

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003276
 */

uint recovered_10003276(void *data,uint size,int *minimum,uint *range)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;

  uVar4 = 0;
  if (range != (uint *)0x0 && ((7 < size && data != (void *)0x0) && minimum != (int *)0x0)) {
    uVar2 = recovered_100032e8(data);
    uVar3 = recovered_100032e8((void *)((int)data + 4));
    uVar1 = ((int)uVar3 >> 0x1f) - ((int)uVar2 >> 0x1f);
    if (uVar1 == uVar3 < uVar2 && (uint)(uVar3 - uVar2 == 0) <= uVar1 - (uVar3 < uVar2)) {
      *minimum = uVar2;
      *range = uVar3 - uVar2;
      uVar4 = 1;
    }
  }
  return uVar4;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100032e8
 */

uint recovered_100032e8(void *bytes)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (bytes == (void *)0x0) {
    return 0;
  }
  return *(uint *)bytes;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000331a
 */

void recovered_1000331a(uint param_1,int param_2)

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
    recovered_100033d3(cVar3);
  }
  return;
}


#define abStack_1f (*(byte (*)[31])(pf_stack_frame + 17))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000336c
 */

void recovered_1000336c(uint param_1)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  uint uVar1;

  if (param_1 == 0) {
    recovered_100033d3(0x30);
  }
  else {
    for (uVar1 = 0; (param_1 != 0 && (uVar1 < 10)); uVar1 = uVar1 + 1) {
      abStack_1f[uVar1 + 1] = (byte)(param_1 % 10) | 0x30;
      param_1 = param_1 / 10;
    }
    while (uVar1 != 0) {
      recovered_100033d3(abStack_1f[uVar1]);
      uVar1 = uVar1 - 1;
    }
  }
  return;
}

#undef abStack_1f

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100033d3
 */

void recovered_100033d3(undefined1 param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int in_ECX;
  uint in_EDX;

  iVar1 = recovered_10002c64();
  if ((in_ECX != 0) && (iVar1 + 1U < in_EDX)) {
    *(undefined1 *)(in_ECX + iVar1) = param_1;
    *(undefined1 *)(in_ECX + 1 + iVar1) = 0;
  }
  return;
}


#undef DAT_10003f41
#define DAT_10003f41 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x237U)))
#undef DAT_10003f46
#define DAT_10003f46 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x23cU)))
#undef DAT_10003f4b
#define DAT_10003f4b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x241U)))
#undef DAT_10003f50
#define DAT_10003f50 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x246U)))
#undef str_10003f55
#define str_10003f55 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x24bU)))
#undef str_10003f60
#define str_10003f60 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x256U)))
#undef str_10003f69
#define str_10003f69 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x25fU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003401
 */

char * recovered_10003401(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  int in_ECX;

  if (in_ECX == 0) {
    pcVar1 = &DAT_10003f41;
  }
  else if (in_ECX == 0xfe) {
    pcVar1 = str_10003f60;
  }
  else if (in_ECX == 0x20) {
    pcVar1 = &DAT_10003f4b;
  }
  else if (in_ECX == 0x30) {
    pcVar1 = &DAT_10003f50;
  }
  else if (in_ECX == 0x80) {
    pcVar1 = str_10003f55;
  }
  else if (in_ECX == 0x10) {
    pcVar1 = &DAT_10003f46;
  }
  else {
    pcVar1 = str_10003f69;
  }
  return pcVar1;
}

#undef DAT_10003f41
#undef DAT_10003f46
#undef DAT_10003f4b
#undef DAT_10003f50
#undef str_10003f55
#undef str_10003f60
#undef str_10003f69

#undef DAT_10004118
#define DAT_10004118 (*(int *)(((uintptr_t)pf_module_state + 0x40eU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000346a
 */

/* WARNING: Removing unreachable block (ram,0x1000348f) */

void recovered_1000346a(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = DAT_10004118;
  { __typeof__(DAT_10004118) pf_atomic_old = __atomic_exchange_n(&(DAT_10004118),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 == 0) {
    return;
  }
  do {
  } while( true );
}

#undef DAT_10004118

#undef DAT_10004100
#define DAT_10004100 (*(uint *)(((uintptr_t)pf_module_state + 0x3f6U)))
#undef DAT_10004104
#define DAT_10004104 (*(uint *)(((uintptr_t)pf_module_state + 0x3faU)))
#undef DAT_10004108
#define DAT_10004108 (*(uint *)(((uintptr_t)pf_module_state + 0x3feU)))
#undef DAT_1000410c
#define DAT_1000410c (*(uint *)(((uintptr_t)pf_module_state + 0x402U)))
#undef DAT_10004110
#define DAT_10004110 (*(uint *)(((uintptr_t)pf_module_state + 0x406U)))
#undef DAT_10004114
#define DAT_10004114 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x40aU)))
#undef DAT_1000411c
#define DAT_1000411c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x412U)))
#undef DAT_10004120
#define DAT_10004120 (*(uint *)(((uintptr_t)pf_module_state + 0x416U)))
#undef DAT_10004124
#define DAT_10004124 (*(uint *)(((uintptr_t)pf_module_state + 0x41aU)))
#undef DAT_10004128
#define DAT_10004128 (*(uint *)(((uintptr_t)pf_module_state + 0x41eU)))
#undef DAT_1000412c
#define DAT_1000412c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x422U)))
#undef DAT_10004130
#define DAT_10004130 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x426U)))
#undef DAT_10004134
#define DAT_10004134 (*(uint *)(((uintptr_t)pf_module_state + 0x42aU)))
#undef DAT_10004138
#define DAT_10004138 (*(uint *)(((uintptr_t)pf_module_state + 0x42eU)))
#undef DAT_10004200
#define DAT_10004200 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4f6U)))
#undef DAT_10004268
#define DAT_10004268 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x55eU)))
#undef DAT_1000426c
#define DAT_1000426c (*(uint16_t *)(((uintptr_t)pf_module_state + 0x562U)))
#undef DAT_1000426e
#define DAT_1000426e (*(uint16_t *)(((uintptr_t)pf_module_state + 0x564U)))
#undef DAT_10004270
#define DAT_10004270 (*(uint16_t *)(((uintptr_t)pf_module_state + 0x566U)))
#undef DAT_1000427c
#define DAT_1000427c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x572U)))
#undef DAT_10004280
#define DAT_10004280 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x576U)))
#undef DAT_10004284
#define DAT_10004284 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x57aU)))
#undef DAT_10004288
#define DAT_10004288 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x57eU)))
#undef DAT_1000428c
#define DAT_1000428c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x582U)))
#undef DAT_10004290
#define DAT_10004290 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x586U)))
#undef DAT_10004294
#define DAT_10004294 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x58aU)))
#undef DAT_10004298
#define DAT_10004298 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x58eU)))
#undef DAT_10004500
#define DAT_10004500 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7f6U)))
#undef DAT_10004502
#define DAT_10004502 (*(uint16_t *)(((uintptr_t)pf_module_state + 0x7f8U)))
#undef DAT_10004504
#define DAT_10004504 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7faU)))
#undef DAT_10004600
#define DAT_10004600 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8f6U)))
#undef DAT_10004602
#define DAT_10004602 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8f8U)))
#undef DAT_10004800
#define DAT_10004800 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xaf6U)))
#undef DAT_10004801
#define DAT_10004801 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xaf7U)))
#undef DAT_10004802
#define DAT_10004802 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xaf8U)))
#undef DAT_10004803
#define DAT_10004803 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xaf9U)))
#undef DAT_10005e00
#define DAT_10005e00 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x20f6U)))
#undef UINT_10003b6c
#define UINT_10003b6c (*(uint *)(0x10003b6cU))
#undef str_10003f69
#define str_10003f69 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x25fU)))
#undef str_10003f78
#define str_10003f78 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x26eU)))
#undef str_10003f83
#define str_10003f83 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x279U)))
#define uStackY_54 (*(uint *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003495
 */

void recovered_10003495(void)

{
  unsigned char pf_stack_frame[144] __attribute__((aligned(16))) = {0};

  undefined4 *device;
  char cVar1;
  byte bVar2;
  ushort uVar3;
  short sVar4;
  short sVar5;
  byte bVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int *piVar13;
  uint uVar14;
  char *pcVar15;
  uint uVar16;
  ushort uVar17;

  uVar7 = 0;
  do {
    if (DAT_10004100 <= uVar7) {
      return;
    }
    iVar8 = uVar7 * 0x700;
    if ((&DAT_10004268)[uVar7 * 0x1c0] != 0) {
      device = &DAT_10004200 + uVar7 * 0x1c0;
      recovered_10002a4c((int *)*device,(&DAT_1000427c)[uVar7 * 0x1c0],&DAT_10004600 + iVar8,0x106);
      sVar4 = *(short *)(&DAT_10004602 + iVar8);
      uVar10 = *(uint *)(&DAT_10004270 + uVar7 * 0x380);
      uVar17 = (&DAT_1000426c)[uVar7 * 0x380];
      if (uVar17 < (ushort)(sVar4 - (short)uVar10)) {
LAB_1000351c:
        recovered_10002b8a(device);
      }
      else {
        iVar12 = 0;
        while ((short)uVar10 != sVar4) {
          uVar10 = (uVar10 & 0xffff) % (uint)uVar17;
          uVar9 = recovered_100032e8((void *)(iVar8 + ((uintptr_t)pf_module_state+0x8faU) + uVar10 * 8));
          uVar10 = recovered_100032e8((void *)(iVar8 + ((uintptr_t)pf_module_state+0x8feU) + uVar10 * 8));
          if (((ushort)(&DAT_1000426c)[uVar7 * 0x380] <= uVar9) || (uVar10 != 8)) goto LAB_1000351c;
          recovered_10002a4c((int *)*device,(&DAT_1000427c)[uVar7 * 0x1c0],
                             &DAT_10004800 + uVar9 * 8 + iVar8,8);
          sVar5 = CONCAT11((&DAT_10004801)[uVar9 * 8 + iVar8],(&DAT_10004800)[uVar9 * 8 + iVar8]);
          cVar1 = (&DAT_10004803)[uVar9 * 8 + iVar8];
          uVar17 = CONCAT11(cVar1,(&DAT_10004802)[uVar9 * 8 + iVar8]);
          uVar14 = (uint)uVar17;
          uVar10 = recovered_100032e8((void *)(iVar8 + ((uintptr_t)pf_module_state+0xafaU) + uVar9 * 8));
          if (sVar5 == 3) {
            if ((&DAT_10004288)[uVar7 * 0x1c0] != 0) {
              DAT_1000411c = 1;
              DAT_10004134 = (&DAT_10004294)[uVar7 * 0x1c0];
              DAT_10004138 = (&DAT_10004298)[uVar7 * 0x1c0];
              if (uVar17 == 1) {
                DAT_10004128 = recovered_10003bd4(uVar10,(&DAT_10004290)[uVar7 * 0x1c0],DAT_10004138
                                                 );
              }
              else if (uVar17 == 0) {
                DAT_10004124 = recovered_10003bd4(uVar10,(&DAT_1000428c)[uVar7 * 0x1c0],DAT_10004134
                                                 );
              }
              DAT_10004114 = 1;
            }
            goto LAB_100037f3;
          }
          if (sVar5 == 2) {
            if ((&DAT_10004284)[uVar7 * 0x1c0] != 0) {
              DAT_1000411c = 2;
              if (uVar17 == 0) {
                piVar13 = &DAT_1000412c;
              }
              else {
                if (uVar14 != 1) goto LAB_100037ec;
                piVar13 = &DAT_10004130;
              }
              *piVar13 = *piVar13 + uVar10;
LAB_100037ec:
              DAT_10004114 = 1;
            }
            goto LAB_100037f3;
          }
          if (sVar5 != 1) {
            if ((sVar5 == 0 && uVar17 == 0) &&
               (((&DAT_10004284)[uVar7 * 0x1c0] != 0 || ((&DAT_10004288)[uVar7 * 0x1c0] != 0)))) {
              DAT_10004114 = 1;
            }
            goto LAB_100037f3;
          }
          if ((((&DAT_10004284)[uVar7 * 0x1c0] != 0) || ((&DAT_10004288)[uVar7 * 0x1c0] != 0)) &&
             ((ushort)(uVar17 - 0x110) < 3)) {
            if (uVar10 == 0) {
              DAT_10004120 = ~((const uint[]){1U,2U,4U})[(uint)uVar17-0x110U] & DAT_10004120;
            }
            else {
              DAT_10004120 = ((const uint[]){1U,2U,4U})[(uint)uVar17-0x110U] | DAT_10004120;
            }
            goto LAB_100037ec;
          }
          if ((&DAT_10004280)[uVar7 * 0x1c0] == 0) goto LAB_100037f3;
          if (((uVar14 - 0x1d < 0x1c) && ((0xa002001U >> (uVar14 - 0x1d & 0x1f) & 1) != 0)) ||
             ((uVar14 - 0x61 < 0x1e && ((0x30000009U >> (uVar14 - 0x61 & 0x1f) & 1) != 0)))) {
            if (uVar17 == 0x1d) {
              uStackY_54 = 4;
            }
            else {
              uStackY_54 = 1;
              if (uVar14 != 0x2a) {
                if (uVar14 == 0x7e) {
                  uStackY_54 = 0x80;
                }
                else if (uVar14 == 0x38) {
                  uStackY_54 = 0x10;
                }
                else if (uVar14 == 0x61) {
                  uStackY_54 = 8;
                }
                else if (uVar14 == 100) {
                  uStackY_54 = 0x20;
                }
                else if (uVar14 == 0x7d) {
                  uStackY_54 = 0x40;
                }
                else {
                  if (uVar14 != 0x36) goto LAB_100037f3;
                  uStackY_54 = 2;
                }
              }
            }
            if (uVar10 == 0) {
              DAT_10004110 = ~uStackY_54 & DAT_10004110;
            }
            else {
              DAT_10004110 = uStackY_54 | DAT_10004110;
            }
            uVar14 = (uint)((DAT_10004110 & 3) != 0) * 0x10000;
            uVar10 = uVar14 + 0x20000;
            if ((DAT_10004110 & 0xc) == 0) {
              uVar10 = uVar14;
            }
            DAT_1000410c = uVar10 + 0x40000;
            if ((DAT_10004110 & 0xf0) == 0) {
              DAT_1000410c = uVar10;
            }
            uVar10 = DAT_1000410c | 0x80000000;
            goto LAB_100038da;
          }
          if (uVar10 == 0) goto LAB_100037f3;
          uVar10 = DAT_1000410c >> 0x10 & 1;
          if (uVar14 - 2 < 10) {
            pcVar15 = str_10003f83;
            if (uVar10 == 0) {
              pcVar15 = str_10003f78;
            }
            uVar11 = (uint)(byte)pcVar15[uVar14 - 2];
switchD_100039f3_caseD_2a:
            uStackY_54 = 0x1c;
            switch((uintptr_t)(uVar14)) {
            case 0x60:
              break;
            default:
              uStackY_54 = 0;
              uVar16 = uVar11;
              if (cVar1 == '\0') goto LAB_10003a94;
              goto LAB_10003a96;
            case 0x66:
              uStackY_54 = 0x47;
              break;
            case 0x67:
              uStackY_54 = 0x48;
              break;
            case 0x68:
              uStackY_54 = 0x49;
              break;
            case 0x69:
              uStackY_54 = 0x4b;
              break;
            case 0x6a:
              uStackY_54 = 0x4d;
              break;
            case 0x6b:
              uStackY_54 = 0x4f;
              break;
            case 0x6c:
              uStackY_54 = 0x50;
              break;
            case 0x6d:
              uStackY_54 = 0x51;
              break;
            case 0x6e:
              uStackY_54 = 0x52;
              break;
            case 0x6f:
              uStackY_54 = 0x53;
            }
            goto switchD_1000394b_caseD_60;
          }
          if (uVar14 - 0x10 < 10) {
            uVar11 = (uint)(byte)(str_10003f78[uVar14 + 6] - 0x20);
            if (uVar10 == 0) {
              uVar11 = (uint)(byte)str_10003f78[uVar14 + 6];
            }
            goto switchD_100039f3_caseD_2a;
          }
          if (uVar14 - 0x1e < 9) {
            bVar2 = str_10003f78[uVar14 + 3];
LAB_1000397f:
            bVar6 = bVar2 - 0x20;
            if (uVar10 == 0) {
              bVar6 = bVar2;
            }
            uVar11 = (uint)bVar6;
            goto switchD_100039f3_caseD_2a;
          }
          if (uVar14 - 0x2c < 7) {
            bVar2 = str_10003f69[uVar14 + 0xe];
            goto LAB_1000397f;
          }
          uVar11 = 0;
          switch((uintptr_t)(uVar14)) {
          case 0x27:
            uVar16 = uVar10 ^ 0x3b;
            break;
          case 0x28:
            uVar16 = (uint)(uVar10 == 0) * 5 + 0x22;
            break;
          case 0x29:
            uVar16 = 0x7e;
            uStackY_54 = 0x60;
            goto LAB_10003a90;
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
            goto switchD_100039f3_caseD_2a;
          case 0x2b:
            uVar16 = uVar10 << 5 | 0x5c;
            break;
          case 0x33:
            uVar16 = uVar10 << 4 | 0x2c;
            break;
          case 0x34:
            uVar16 = uVar10 << 4 | 0x2e;
            break;
          case 0x35:
            uVar16 = uVar10 << 4 | 0x2f;
            break;
          case 0x39:
            uStackY_54 = 0x20;
            goto LAB_10003a86;
          default:
            switch((uintptr_t)(uVar14)) {
            case 0xc:
              uVar16 = 0x5f;
              uStackY_54 = 0x2d;
              goto LAB_10003a90;
            case 0xd:
              uVar16 = 0x2b;
              uStackY_54 = 0x3d;
LAB_10003a90:
              if (uVar10 == 0) {
                uVar16 = uStackY_54;
              }
              break;
            case 0xe:
              uStackY_54 = 8;
              goto LAB_10003a86;
            case 0xf:
              uStackY_54 = 9;
              goto LAB_10003a86;
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
              goto switchD_100039f3_caseD_2a;
            case 0x1a:
              uVar16 = uVar10 << 5 | 0x5b;
              break;
            case 0x1b:
              uVar16 = uVar10 << 5 | 0x5d;
              break;
            case 0x1c:
              uStackY_54 = 0xd;
LAB_10003a86:
              uVar16 = uStackY_54;
              break;
            default:
              uVar16 = 0x1b;
              if (uVar14 != 1) goto switchD_100039f3_caseD_2a;
            }
          }
LAB_10003a94:
          uStackY_54 = uVar14;
LAB_10003a96:
          uVar11 = uVar16;
          if (uStackY_54 != 0 || uVar16 != 0) {
switchD_1000394b_caseD_60:
            uVar10 = uStackY_54 << 8 | uVar11 | DAT_1000410c;
LAB_100038da:
            uVar14 = DAT_10004108 + 1 & 0x3f;
            if (uVar14 != DAT_10004104) {
              *(uint *)(&DAT_10005e00 + DAT_10004108 * 4) = uVar10;
              DAT_10004108 = uVar14;
            }
          }
LAB_100037f3:
          uVar3 = (&DAT_1000426e)[uVar7 * 0x380];
          uVar17 = (&DAT_1000426c)[uVar7 * 0x380];
          *(short *)(&DAT_10004504 + ((uint)uVar3 % (uint)uVar17) * 2 + iVar8) = (short)uVar9;
          (&DAT_1000426e)[uVar7 * 0x380] = uVar3 + 1;
          uVar10 = *(int *)(&DAT_10004270 + uVar7 * 0x380) + 1;
          (&DAT_10004270)[uVar7 * 0x380] = (short)uVar10;
          iVar12 = iVar12 + -1;
        }
        if (iVar12 != 0) {
          (&DAT_10004502)[uVar7 * 0x380] = (&DAT_1000426e)[uVar7 * 0x380];
          recovered_10002a4c((int *)*device,(&DAT_1000427c)[uVar7 * 0x1c0],&DAT_10004500 + iVar8,
                             0x46);
          recovered_10002fc9();
          iVar8 = recovered_10002a7e();
          if (iVar8 == 0) goto LAB_1000351c;
        }
      }
    }
    uVar7 = uVar7 + 1;
  } while( true );
}

#undef DAT_10004100
#undef DAT_10004104
#undef DAT_10004108
#undef DAT_1000410c
#undef DAT_10004110
#undef DAT_10004114
#undef DAT_1000411c
#undef DAT_10004120
#undef DAT_10004124
#undef DAT_10004128
#undef DAT_1000412c
#undef DAT_10004130
#undef DAT_10004134
#undef DAT_10004138
#undef DAT_10004200
#undef DAT_10004268
#undef DAT_1000426c
#undef DAT_1000426e
#undef DAT_10004270
#undef DAT_1000427c
#undef DAT_10004280
#undef DAT_10004284
#undef DAT_10004288
#undef DAT_1000428c
#undef DAT_10004290
#undef DAT_10004294
#undef DAT_10004298
#undef DAT_10004500
#undef DAT_10004502
#undef DAT_10004504
#undef DAT_10004600
#undef DAT_10004602
#undef DAT_10004800
#undef DAT_10004801
#undef DAT_10004802
#undef DAT_10004803
#undef DAT_10005e00
#undef UINT_10003b6c
#undef str_10003f69
#undef str_10003f78
#undef str_10003f83
#undef uStackY_54

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003bd4
 */

uint recovered_10003bd4(int value,int minimum,uint range)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;

  uVar2 = value - minimum;
  iVar1 = ((value >> 0x1f) - (minimum >> 0x1f)) - (uint)((uint)value < (uint)minimum);
  if (iVar1 < 0) {
    uVar2 = 0;
  }
  else {
    if (iVar1 != 0 || (uint)-iVar1 < (uint)(range < uVar2)) {
      if (range < 0x7fffffff) {
        return range;
      }
      return 0x7fffffff;
    }
    if (0x7ffffffe < uVar2) {
      uVar2 = 0x7fffffff;
    }
    if (iVar1 != 0) {
      uVar2 = 0x7fffffff;
    }
  }
  return uVar2;
}


#undef DAT_10004104
#define DAT_10004104 (*(uint *)(((uintptr_t)pf_module_state + 0x3faU)))
#undef DAT_10004108
#define DAT_10004108 (*(uint *)(((uintptr_t)pf_module_state + 0x3feU)))
#undef DAT_10005e00
#define DAT_10005e00 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x20f6U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003c1d
 */

undefined4 recovered_10003c1d(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;

  uVar1 = 0;
  if (DAT_10004104 != DAT_10004108) {
    uVar1 = *(undefined4 *)(&DAT_10005e00 + DAT_10004104 * 4);
    DAT_10004104 = DAT_10004104 + 1 & 0x3f;
  }
  return uVar1;
}

#undef DAT_10004104
#undef DAT_10004108
#undef DAT_10005e00

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003c4e
 */

undefined8 recovered_10003c4e(uint param_1,uint param_2,uint param_3)

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
    if (0x3f < param_3) goto LAB_10003c89;
    bVar2 = (byte)param_3;
    if (0x1f < param_3) {
      uVar3 = param_1 << (bVar2 & 0x1f);
      uVar1 = 0;
      goto LAB_10003c89;
    }
    uVar3 = param_1 >> 0x20 - (bVar2 & 0x1f);
    param_1 = param_1 << (bVar2 & 0x1f);
    uVar3 = param_2 << (bVar2 & 0x1f) | uVar3;
  }
  uVar1 = param_1;
LAB_10003c89:
  return CONCAT44(uVar3,uVar1);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003c90
 */

undefined8 recovered_10003c90(uint param_1,uint param_2,uint param_3)

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
 * Address: 0x10003cd4
 */

undefined8 recovered_10003cd4(uint param_1,uint param_2,uint param_3)

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
