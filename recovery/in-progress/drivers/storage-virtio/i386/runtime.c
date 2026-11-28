/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_10004000
#define DAT_10004000 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x177U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100003aa
 */

void * recovered_100003aa(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return &DAT_10004000;
}

#undef DAT_10004000

#undef DAT_10003e89
#define DAT_10003e89 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x0U)))
#undef DAT_10005000
#define DAT_10005000 (*(int *)(((uintptr_t)pf_module_state + 0x1177U)))
#undef DAT_10006078
#define DAT_10006078 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x21efU)))
#undef str_10003e8a
#define str_10003e8a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1U)))
#define local_414 (*(undefined1 (*)[1044])(pf_stack_frame + 92))
#define local_408 (*(char *)(pf_stack_frame + 104))
#define local_454 (*(int *)(pf_stack_frame + 28))
#define local_444 (*(undefined4 *)(pf_stack_frame + 44))
#define local_440 (*(int *)(pf_stack_frame + 48))
#define local_43c (*(code * *)(pf_stack_frame + 52))
#define local_438 (*(code * *)(pf_stack_frame + 56))
#define local_434 (*(code * *)(pf_stack_frame + 60))
#define local_430 (*(code * *)(pf_stack_frame + 64))
#define local_42c (*(code * *)(pf_stack_frame + 68))
#define local_428 (*(undefined4 *)(pf_stack_frame + 72))
#define local_424 (*(undefined4 *)(pf_stack_frame + 76))
#define local_420 (*(undefined4 *)(pf_stack_frame + 80))
#define local_41c (*(undefined4 *)(pf_stack_frame + 84))
#define local_418 (*(undefined4 *)(pf_stack_frame + 88))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100003c0
 */

uint recovered_100003c0(void *api)

{
  unsigned char pf_stack_frame[1168] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;

  if ((((api != (void *)0x0) && (*(int *)api == 0x54584b57)) && (*(int *)((int)api + 4) == 1100000))
     && (0xf7 < *(uint *)((int)api + 8))) {
    DAT_10005000 = 0;
    if (*(int *)((int)api + 0x5c) != 0) {
      local_454 = 0;
      for (uVar1 = 0; uVar1 != 8; uVar1 = uVar1 + 1) {
        for (uVar5 = 0; uVar5 != 0x20; uVar5 = uVar5 + 1) {
          uVar2 = recovered_100020bf(api,uVar1 & 0xff,uVar5 & 0xff,0,local_414);
          if (uVar2 != 0) {
            iVar3 = recovered_1000060b();
            local_454 = iVar3 + local_454;
            if (local_408 < '\0') {
              for (iVar3 = -7; iVar3 != 0; iVar3 = iVar3 + 1) {
                uVar2 = recovered_100020bf(api,uVar1 & 0xff,uVar5 & 0xff,iVar3 + 8U & 0xff,
                                           &local_444);
                if (uVar2 != 0) {
                  iVar4 = recovered_1000060b();
                  local_454 = local_454 + iVar4;
                }
              }
            }
          }
        }
      }
      if ((local_454 != 0) && (DAT_10005000 != 0)) {
        recovered_10001de0(&local_444,0x30);
        local_440 = DAT_10005000;
        iVar3 = DAT_10005000 + 1;
        piVar6 = &DAT_10006078;
        local_430 = recovered_10001df9;
        do {
          iVar3 = iVar3 + -1;
          if (iVar3 == 0) goto LAB_1000053f;
          iVar4 = *piVar6;
          piVar6 = piVar6 + 0x1c00;
        } while (iVar4 != 0);
        local_430 = (code *)0x0;
LAB_1000053f:
        local_444 = 3;
        local_43c = recovered_10001eb0;
        local_438 = recovered_10001f56;
        local_434 = recovered_10001f7c;
        local_42c = recovered_10001fa2;
        local_428 = 0;
        local_424 = 0;
        local_420 = 0;
        local_41c = 0;
        local_418 = 0;
        recovered_100020a0(&DAT_10003e89);
        if (((*(code **)((int)api + 0xc) != (code *)0x0) &&
            (iVar3 = (**(code **)((int)api + 0xc))(&DAT_10003e89,str_10003e8a,local_414), iVar3 != 0
            )) && ((*(int *)api == 0x54584b57 &&
                   (((0xd3 < *(uint *)((int)api + 8) && (*(code **)((int)api + 0xd0) != (code *)0x0)
                     ) && (iVar3 = (**(code **)((int)api + 0xd0))(&local_444), iVar3 != 0)))))) {
          return 1;
        }
      }
    }
    recovered_10001d9f();
  }
  return 0;
}

#undef DAT_10003e89
#undef DAT_10005000
#undef DAT_10006078
#undef str_10003e8a
#undef local_414
#undef local_408
#undef local_454
#undef local_444
#undef local_440
#undef local_43c
#undef local_438
#undef local_434
#undef local_430
#undef local_42c
#undef local_428
#undef local_424
#undef local_420
#undef local_41c
#undef local_418

#undef DAT_10003e89
#define DAT_10003e89 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x0U)))
#undef DAT_10003f51
#define DAT_10003f51 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xc8U)))
#undef DAT_10003f53
#define DAT_10003f53 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xcaU)))
#undef DAT_10003f55
#define DAT_10003f55 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xccU)))
#undef DAT_10003f57
#define DAT_10003f57 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xceU)))
#undef DAT_10003f5c
#define DAT_10003f5c (*(uint8_t *)(((uintptr_t)pf_module_state + 0xd3U)))
#undef DAT_10003f5f
#define DAT_10003f5f (*(uint8_t *)(((uintptr_t)pf_module_state + 0xd6U)))
#undef DAT_10003f61
#define DAT_10003f61 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xd8U)))
#undef DAT_10005000
#define DAT_10005000 (*(int *)(((uintptr_t)pf_module_state + 0x1177U)))
#undef DAT_10006000
#define DAT_10006000 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2177U)))
#undef DAT_10006004
#define DAT_10006004 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x217bU)))
#undef DAT_10006008
#define DAT_10006008 (*(uint *)(((uintptr_t)pf_module_state + 0x217fU)))
#undef DAT_1000600c
#define DAT_1000600c (*(uint *)(((uintptr_t)pf_module_state + 0x2183U)))
#undef DAT_10006010
#define DAT_10006010 (*(uint *)(((uintptr_t)pf_module_state + 0x2187U)))
#undef DAT_10006014
#define DAT_10006014 (*(uint *)(((uintptr_t)pf_module_state + 0x218bU)))
#undef DAT_10006018
#define DAT_10006018 (*(uint *)(((uintptr_t)pf_module_state + 0x218fU)))
#undef DAT_1000601c
#define DAT_1000601c (*(uint *)(((uintptr_t)pf_module_state + 0x2193U)))
#undef DAT_10006020
#define DAT_10006020 (*(uint *)(((uintptr_t)pf_module_state + 0x2197U)))
#undef DAT_10006024
#define DAT_10006024 (*(uint *)(((uintptr_t)pf_module_state + 0x219bU)))
#undef DAT_10006028
#define DAT_10006028 (*(uint *)(((uintptr_t)pf_module_state + 0x219fU)))
#undef DAT_1000602c
#define DAT_1000602c (*(uint *)(((uintptr_t)pf_module_state + 0x21a3U)))
#undef DAT_10006030
#define DAT_10006030 (*(int *)(((uintptr_t)pf_module_state + 0x21a7U)))
#undef DAT_10006034
#define DAT_10006034 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x21abU)))
#undef DAT_10006038
#define DAT_10006038 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x21afU)))
#undef DAT_1000603c
#define DAT_1000603c (*(uint *)(((uintptr_t)pf_module_state + 0x21b3U)))
#undef DAT_10006040
#define DAT_10006040 (*(uint *)(((uintptr_t)pf_module_state + 0x21b7U)))
#undef DAT_10006044
#define DAT_10006044 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x21bbU)))
#undef DAT_10006048
#define DAT_10006048 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x21bfU)))
#undef DAT_1000604c
#define DAT_1000604c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x21c3U)))
#undef DAT_10006050
#define DAT_10006050 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x21c7U)))
#undef DAT_10006054
#define DAT_10006054 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x21cbU)))
#undef DAT_10006058
#define DAT_10006058 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x21cfU)))
#undef DAT_1000605c
#define DAT_1000605c (*(uint *)(((uintptr_t)pf_module_state + 0x21d3U)))
#undef DAT_10006060
#define DAT_10006060 (*(int *)(((uintptr_t)pf_module_state + 0x21d7U)))
#undef DAT_10006064
#define DAT_10006064 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x21dbU)))
#undef DAT_1000606b
#define DAT_1000606b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x21e2U)))
#undef DAT_1000606c
#define DAT_1000606c (*(uint16_t *)(((uintptr_t)pf_module_state + 0x21e3U)))
#undef DAT_10006070
#define DAT_10006070 (*(uint *)(((uintptr_t)pf_module_state + 0x21e7U)))
#undef DAT_10006074
#define DAT_10006074 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x21ebU)))
#undef DAT_10006078
#define DAT_10006078 (*(uint *)(((uintptr_t)pf_module_state + 0x21efU)))
#undef DAT_1000607c
#define DAT_1000607c (*(uint *)(((uintptr_t)pf_module_state + 0x21f3U)))
#undef DAT_10006084
#define DAT_10006084 (*(ushort *)(((uintptr_t)pf_module_state + 0x21fbU)))
#undef DAT_1000608a
#define DAT_1000608a (*(uint16_t *)(((uintptr_t)pf_module_state + 0x2201U)))
#undef DAT_1000608c
#define DAT_1000608c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2203U)))
#undef DAT_10006090
#define DAT_10006090 (*(short *)(((uintptr_t)pf_module_state + 0x2207U)))
#undef DAT_10006092
#define DAT_10006092 (*(uint16_t *)(((uintptr_t)pf_module_state + 0x2209U)))
#undef DAT_10006094
#define DAT_10006094 (*(uint16_t *)(((uintptr_t)pf_module_state + 0x220bU)))
#undef DAT_10006096
#define DAT_10006096 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x220dU)))
#undef DAT_100060a4
#define DAT_100060a4 (*(int *)(((uintptr_t)pf_module_state + 0x221bU)))
#undef DAT_100060a8
#define DAT_100060a8 (*(int *)(((uintptr_t)pf_module_state + 0x221fU)))
#undef DAT_100060ac
#define DAT_100060ac (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2223U)))
#undef DAT_10006100
#define DAT_10006100 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2277U)))
#undef DAT_10006200
#define DAT_10006200 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2377U)))
#undef DAT_10006300
#define DAT_10006300 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2477U)))
#undef DAT_10007000
#define DAT_10007000 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3177U)))
#undef str_10003ee5
#define str_10003ee5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5cU)))
#undef str_10003eee
#define str_10003eee (*(char (*)[1])(((uintptr_t)pf_module_state + 0x65U)))
#undef str_10003ef7
#define str_10003ef7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6eU)))
#undef str_10003f06
#define str_10003f06 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7dU)))
#define local_8c4 (*(uint *)(pf_stack_frame + 28))
#define local_8c0 (*(char * *)(pf_stack_frame + 32))
#define local_8bc (*(uint *)(pf_stack_frame + 36))
#define local_8b8 (*(uint *)(pf_stack_frame + 40))
#define local_8b4 (*(char * *)(pf_stack_frame + 44))
#define local_8b0 (*(uint *)(pf_stack_frame + 48))
#define local_8ac (*(uint *)(pf_stack_frame + 52))
#define local_8a8 (*(uint *)(pf_stack_frame + 56))
#define local_8a4 (*(uint *)(pf_stack_frame + 60))
#define local_8a0 (*(uint *)(pf_stack_frame + 64))
#define local_89c (*(uint *)(pf_stack_frame + 68))
#define local_898 (*(int *)(pf_stack_frame + 72))
#define local_894 (*(undefined4 *)(pf_stack_frame + 76))
#define local_890 (*(int *)(pf_stack_frame + 80))
#define local_88c (*(uint (*)[547])(pf_stack_frame + 84))
#define local_878 (*(char * *)(pf_stack_frame + 104))
#define local_874 (*(uint (*)[541])(pf_stack_frame + 108))
#define local_814 (*(uint (*)[517])(pf_stack_frame + 204))
#define local_414 (*(char (*)[1044])(pf_stack_frame + 1228))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000060b
 */

undefined4 recovered_1000060b(void)

{
  unsigned char pf_stack_frame[2304] __attribute__((aligned(16))) = {0};

  byte bVar1;
  short sVar2;
  short sVar3;
  bool bVar4;
  bool bVar5;
  byte bVar6;
  uint uVar7;
  undefined3 extraout_var = 0;
  int iVar8;
  undefined3 extraout_var_00 = 0;
  uint uVar9;
  undefined3 extraout_var_01 = 0;
  undefined3 extraout_var_02 = 0;
  undefined3 extraout_var_03 = 0;
  undefined3 extraout_var_04 = 0;
  uint uVar10;
  int iVar11;
  int *in_ECX;
  byte *in_EDX;
  ushort uVar12;
  int iVar13;
  uint uVar14;

  if (in_EDX == (byte *)0x0) {
    return 0;
  }
  if (((*(short *)(in_EDX + 4) != 0x1af4) ||
      ((*(short *)(in_EDX + 6) != 0x1001 && (*(short *)(in_EDX + 6) != 0x1042)))) &&
     ((in_EDX[8] != 1 || (in_EDX[9] != 1)))) {
    if (*(short *)(in_EDX + 4) != 0x106b) {
      return 0;
    }
    if (*(short *)(in_EDX + 6) != 0x10) {
      return 0;
    }
  }
  if (DAT_10005000 != 0) {
    return 0;
  }
  local_8c0 = (char *)&DAT_10006000;
  recovered_10001de0(&DAT_10006000,0x7000);
  local_878 = &DAT_10003e89;
  recovered_100020a0(&DAT_10003e89);
  local_89c = 0;
  local_88c[3] = 0;
  local_8a0 = 0;
  local_88c[2] = 0;
  local_8a4 = 0;
  local_88c[1] = 0;
  local_88c[0] = 0;
  local_890 = 0;
  local_894 = 0;
  local_898 = 0;
  *(int **)local_8c0 = in_ECX;
  local_8b4 = (char *)(uint)*in_EDX;
  *(byte *)((int)local_8c0 + 0x68) = *in_EDX;
  bVar6 = in_EDX[1];
  *(byte *)((int)local_8c0 + 0x69) = bVar6;
  bVar1 = in_EDX[2];
  *(byte *)((int)local_8c0 + 0x6a) = bVar1;
  uVar7 = recovered_10002378();
  *(uint *)((int)local_8c0 + 0x70) = uVar7;
  uVar7 = recovered_1000223c(in_ECX,(uint)local_8b4,(uint)bVar6,(uint)bVar1,4,2,&local_894);
  if (uVar7 == 0) goto LAB_10001b80;
  DAT_1000606c = (undefined2)local_894;
  DAT_1000606b = 1;
  if (((in_EDX[8] == 1) && (in_EDX[9] == 1)) ||
     ((*(short *)(in_EDX + 4) == 0x106b && (*(short *)(in_EDX + 6) == 0x10)))) {
    local_8a8 = 0;
    if (in_ECX != (int *)0x0) {
      if ((*(short *)(in_EDX + 4) != 0x106b) || (bVar5 = true, *(short *)(in_EDX + 6) != 0x10)) {
        if ((in_EDX[8] != 1) || (in_EDX[9] != 1)) goto LAB_10001b73;
        bVar5 = false;
      }
      bVar4 = recovered_1000239f();
      if (CONCAT31(extraout_var,bVar4) != 0) {
        if (bVar5) {
          uVar7 = recovered_100027fc(in_ECX,in_EDX,0,0x22000,&local_8a8);
          if (uVar7 != 0) {
            DAT_100060a8 = local_8a8 + 0x20000;
            DAT_100060ac = 1;
            DAT_10006094 = 0xe0;
            DAT_10006096 = 0;
            DAT_100060a4 = 1;
            iVar8 = recovered_100029af();
            if (iVar8 != 0) goto LAB_10000857;
          }
        }
        else {
          bVar6 = in_EDX[10];
          if ((~bVar6 & 5) == 0) {
LAB_10001bad:
            for (iVar8 = 0; iVar8 != 4; iVar8 = iVar8 + 2) {
              if ((bVar6 & (iVar8 != 0) * '\x03' + 1U) == 0) {
                uVar12 = (ushort)(iVar8 == 0) * 0x80;
                *(ushort *)((int)local_88c + iVar8 + -0x30) = uVar12 + 0x170;
                uVar12 = uVar12 | 0x376;
              }
              else {
                uVar7 = *(uint *)(in_EDX + iVar8 * 4 + 0x14);
                uVar9 = *(uint *)(in_EDX + iVar8 * 4 + 0x18);
                uVar14 = 0xfffffffc;
                if ((uVar7 & 1) == 0) {
                  uVar14 = 0xfffffff0;
                }
                uVar10 = 0xfffffffc;
                if ((uVar9 & 1) == 0) {
                  uVar10 = 0xfffffff0;
                }
                if ((((uVar7 & 1) == 0) || ((uVar9 & 1) == 0)) ||
                   (((uVar14 & uVar7) - 0x10000 < 0xffff0001 ||
                    ((uVar10 & uVar9) - 0xfffe < 0xffff0003)))) {
                  *(undefined2 *)((int)local_88c + iVar8 + -0x30) = 0;
                  uVar12 = 0;
                }
                else {
                  *(short *)((int)local_88c + iVar8 + -0x30) = (short)(uVar14 & uVar7);
                  uVar12 = (ushort)(uVar10 & uVar9) | 2;
                }
              }
              *(ushort *)((int)local_88c + iVar8 + -0x38) = uVar12;
            }
            for (iVar8 = 0; iVar8 != 2; iVar8 = iVar8 + 1) {
              sVar2 = *(short *)((int)local_88c + iVar8 * 2 + -0x30);
              if (sVar2 != 0) {
                sVar3 = *(short *)((int)local_88c + iVar8 * 2 + -0x38);
                local_8b4 = (char *)CONCAT22(PF_PART2(local_8b4, 2),sVar3);
                if (sVar3 != 0) {
                  DAT_10006096 = 0;
                  for (iVar13 = -0x20; iVar13 != 0; iVar13 = iVar13 + 0x10) {
                    DAT_10006092 = PF_PART2(local_8b4, 0);
                    DAT_10006094 = CONCAT11((char)iVar8,(char)iVar13);
                    DAT_100060a4 = 1;
                    DAT_10006090 = sVar2;
                    iVar11 = recovered_100029af();
                    if (iVar11 != 0) goto LAB_10000857;
                    DAT_100060a4 = 0;
                  }
                }
              }
            }
          }
          else {
            local_814[0] = 0;
            uVar7 = recovered_1000223c(in_ECX,(uint)*in_EDX,(uint)in_EDX[1],(uint)in_EDX[2],4,2,
                                       local_814);
            if (uVar7 != 0) {
              local_874[0] = local_814[0] | 1;
              iVar8 = recovered_10002bc3(in_EDX[1],in_EDX[2],local_874[0]);
              if (((iVar8 != 0) &&
                  (uVar7 = recovered_1000223c(in_ECX,(uint)*in_EDX,(uint)in_EDX[1],(uint)in_EDX[2],4
                                              ,2,local_874), uVar7 != 0)) &&
                 ((local_874[0] & 1) != 0)) {
                bVar6 = in_EDX[10];
                goto LAB_10001bad;
              }
            }
          }
        }
      }
    }
  }
  else {
    bVar5 = recovered_1000239f();
    if (CONCAT31(extraout_var_00,bVar5) != 0) {
      local_814[0] = 0;
      recovered_10001de0(&DAT_10006004,100);
      uVar7 = recovered_1000223c(in_ECX,(uint)*in_EDX,(uint)in_EDX[1],(uint)in_EDX[2],0x34,1,
                                 local_814);
      if (uVar7 != 0) {
        uVar7 = 0;
        while ((uVar7 < 0x20 && (local_814[0] - 0x40 < 0xb0))) {
          local_874[0] = 0;
          local_8a8 = 0;
          local_8bc = 0;
          local_8c4 = 0;
          local_8ac = 0;
          local_8b8 = 0;
          uVar9 = recovered_1000223c(in_ECX,(uint)*in_EDX,(uint)in_EDX[1],(uint)in_EDX[2],
                                     local_814[0] & 0xffff,1,local_874);
          if ((uVar9 == 0) ||
             (uVar9 = recovered_1000223c(in_ECX,(uint)*in_EDX,(uint)in_EDX[1],(uint)in_EDX[2],
                                         local_814[0] + 1 & 0xffff,1,&local_8a8), uVar9 == 0))
          break;
          if ((((local_874[0] == 9) &&
               (uVar9 = recovered_1000223c(in_ECX,(uint)*in_EDX,(uint)in_EDX[1],(uint)in_EDX[2],
                                           local_814[0] + 3 & 0xffff,1,&local_8bc), uVar9 != 0)) &&
              (uVar9 = recovered_1000223c(in_ECX,(uint)*in_EDX,(uint)in_EDX[1],(uint)in_EDX[2],
                                          local_814[0] + 4 & 0xffff,1,&local_8c4), uVar9 != 0)) &&
             ((uVar9 = recovered_1000223c(in_ECX,(uint)*in_EDX,(uint)in_EDX[1],(uint)in_EDX[2],
                                          local_814[0] + 8 & 0xffff,4,&local_8ac), uVar9 != 0 &&
              (uVar9 = recovered_1000223c(in_ECX,(uint)*in_EDX,(uint)in_EDX[1],(uint)in_EDX[2],
                                          local_814[0] + 0xc & 0xffff,4,&local_8b8), uVar9 != 0))))
          {
            local_8b0 = 0;
            DAT_10006030 = DAT_10006030 + 1;
            if ((local_8b8 < 0x38 || local_8bc != 1) ||
               (iVar8 = recovered_10003220(local_8c4,local_8ac,local_8b8,(int *)&local_8b0),
               iVar8 == 0)) {
              if ((local_8b8 < 2 || local_8bc != 2) ||
                 (iVar8 = recovered_10003220(local_8c4,local_8ac,local_8b8,(int *)&local_8b0),
                 iVar8 == 0)) {
                if ((local_8bc == 3) &&
                   (iVar8 = recovered_10003220(local_8c4,local_8ac,local_8b8,(int *)&local_8b0),
                   iVar8 != 0)) {
                  DAT_1000600c = local_8b0;
                  DAT_10006020 = local_8c4;
                }
                else if ((local_8bc == 4) &&
                        (iVar8 = recovered_10003220(local_8c4,local_8ac,local_8b8,(int *)&local_8b0)
                        , iVar8 != 0)) {
                  DAT_10006010 = local_8b0;
                  DAT_10006014 = local_8b8;
                  DAT_10006024 = local_8c4;
                }
              }
              else {
                local_88c[4] = 0;
                DAT_10006008 = local_8b0;
                DAT_1000601c = local_8c4;
                local_8b4 = (char *)(uint)in_EDX[1];
                uVar9 = recovered_1000223c(in_ECX,(uint)*in_EDX,(uint)local_8b4,(uint)in_EDX[2],
                                           local_814[0] + 0x10 & 0xffff,4,local_88c + 4);
                if (local_88c[4] == 0 || uVar9 == 0) {
                  DAT_10006008 = 0;
                }
                else {
                  DAT_10006028 = local_88c[4];
                  DAT_1000602c = local_8b8;
                }
              }
            }
            else {
              DAT_10006004 = local_8b0;
              DAT_10006018 = local_8c4;
            }
          }
          if ((local_8a8 == 0) || (local_8a8 == local_814[0])) break;
          uVar7 = uVar7 + 1;
          local_814[0] = local_8a8;
        }
        if (DAT_10006004 != 0) {
          local_814[0] = 0;
          local_874[0] = 0;
          recovered_10002682(in_ECX,DAT_10006004,0x14,&DAT_10006044);
          DAT_1000604c = 1;
          bVar5 = recovered_1000326f();
          if (CONCAT31(extraout_var_01,bVar5) != 0) {
            DAT_1000604c = 2;
            uVar7 = recovered_1000309a(in_ECX,DAT_10006004,0x14,1);
            if (((uVar7 != 0) &&
                (uVar7 = recovered_10002682(in_ECX,DAT_10006004,0x14,local_874), uVar7 != 0)) &&
               ((local_874[0] & 0xc1) == 1)) {
              DAT_1000604c = 3;
              uVar7 = recovered_1000309a(in_ECX,DAT_10006004,0x14,3);
              if (((uVar7 != 0) &&
                  (uVar7 = recovered_10002682(in_ECX,DAT_10006004,0x14,local_874), uVar7 != 0)) &&
                 ((local_874[0] & 0xc3) == 3)) {
                DAT_1000604c = 4;
                iVar8 = recovered_10003303();
                if (((iVar8 != 0) && (iVar8 = recovered_100026b8(4,&DAT_10006034), iVar8 != 0)) &&
                   ((iVar8 = recovered_10003303(), iVar8 != 0 &&
                    ((iVar8 = recovered_100026b8(4,&DAT_10006038), iVar8 != 0 &&
                     ((DAT_10006038 & 1) != 0)))))) {
                  DAT_1000603c = DAT_10006034 & 0x200;
                  DAT_10006040 = DAT_10006038 & 3;
                  DAT_1000604c = 5;
                  iVar8 = recovered_10003303();
                  if ((iVar8 != 0) &&
                     (((iVar8 = recovered_10003303(), iVar8 != 0 &&
                       (iVar8 = recovered_10003303(), iVar8 != 0)) &&
                      (iVar8 = recovered_10003303(), iVar8 != 0)))) {
                    recovered_10002594(in_ECX);
                    local_874[0] = 0xb;
                    DAT_1000604c = 6;
                    uVar7 = recovered_1000309a(in_ECX,DAT_10006004,0x14,0xb);
                    if (((uVar7 != 0) &&
                        (uVar7 = recovered_10002682(in_ECX,DAT_10006004,0x14,&DAT_10006048),
                        uVar7 != 0)) && ((DAT_10006048 & 200) == 8)) {
                      DAT_1000604c = 7;
                      uVar7 = recovered_10002634(in_ECX,DAT_10006004,0x12,&DAT_10006050);
                      if (((uVar7 != 0) &&
                          (uVar7 = recovered_10002682(in_ECX,DAT_10006004,0x15,&DAT_10006064),
                          uVar7 != 0)) &&
                         ((uVar7 = recovered_100025bc(in_ECX,DAT_10006004,0x16,0), uVar7 != 0 &&
                          ((uVar7 = recovered_10002634(in_ECX,DAT_10006004,0x18,&DAT_10006054),
                           uVar7 != 0 &&
                           (uVar7 = recovered_10002634(in_ECX,DAT_10006004,0x1c,&DAT_10006058),
                           uVar7 != 0)))))) {
                        uVar9 = recovered_10002634(in_ECX,DAT_10006004,0x1e,local_814);
                        uVar7 = DAT_10006040;
                        if ((uVar9 != 0) &&
                           ((((DAT_1000605c = local_814[0], DAT_10006008 != 0 && (DAT_10006028 != 0)
                              ) && (1 < DAT_1000602c)) &&
                            ((int)((ulonglong)DAT_10006028 * (ulonglong)local_814[0] >> 0x20) == 0))
                           )) {
                          uVar9 = DAT_10006028 * local_814[0];
                          if (!CARRY4(DAT_10006008,uVar9) && uVar9 <= DAT_1000602c - 2) {
                            DAT_10006060 = DAT_10006008 + uVar9;
                          }
                        }
                        DAT_1000604c = 8;
                        uVar9 = recovered_10002378();
                        DAT_10006070 = ((uVar7 & 2) << 0x1d | uVar9) ^ 0x40000000;
                        if (((DAT_10006060 != 0) && (DAT_10006010 != 0)) &&
                           (((7 < DAT_10006014 &&
                             ((2 < DAT_10006054 &&
                              (uVar7 = DAT_10006054 - (DAT_10006054 >> 1 & 0x55555555),
                              uVar7 = (uVar7 >> 2 & 0x33333333) + (uVar7 & 0x33333333),
                              ((uVar7 >> 4) + uVar7 & 0xf0f0f0f) * 0x1010101 >> 0x18 < 2)))) &&
                            (DAT_10006058 == 0)))) {
                          uVar7 = 8;
                          if (DAT_10006054 < 8) {
                            uVar7 = DAT_10006054;
                          }
                          DAT_10006084 = (ushort)uVar7;
                          recovered_10001de0(&DAT_10006100,0x80);
                          recovered_10001de0(&DAT_10006200,0x16);
                          recovered_10001de0(&DAT_10006300,0x46);
                          local_8b4 = &DAT_10006100;
                          uVar7 = recovered_1000250f(local_8c0,&DAT_10006100,0x80,&local_89c,
                                                     local_88c + 3);
                          if ((((uVar7 != 0) &&
                               (uVar7 = recovered_1000250f(local_8c0,&DAT_10006200,0x16,&local_8a0,
                                                           local_88c + 2), uVar7 != 0)) &&
                              (uVar7 = recovered_1000250f(local_8c0,&DAT_10006300,0x46,&local_8a4,
                                                          local_88c + 1), uVar7 != 0)) &&
                             ((((local_89c & 0xf) == 0 && ((local_8a0 & 1) == 0)) &&
                              ((local_8a4 & 3) == 0)))) {
                            recovered_10002562(in_ECX,DAT_10006070,local_8b4,0x80);
                            recovered_10002562(in_ECX,DAT_10006070,&DAT_10006200,0x16);
                            recovered_10002562(in_ECX,DAT_10006070,&DAT_10006300,0x46);
                            recovered_10002594(in_ECX);
                            uVar7 = recovered_100025bc(in_ECX,DAT_10006004,0x16,0);
                            if (((uVar7 != 0) &&
                                (uVar7 = recovered_100025bc(in_ECX,DAT_10006004,0x18,
                                                            (uint)DAT_10006084), uVar7 != 0)) &&
                               (((bVar5 = recovered_100025e3(), CONCAT31(extraout_var_02,bVar5) != 0
                                 && (((bVar5 = recovered_100025e3(),
                                      CONCAT31(extraout_var_03,bVar5) != 0 &&
                                      (bVar5 = recovered_100025e3(),
                                      CONCAT31(extraout_var_04,bVar5) != 0)) &&
                                     (uVar7 = recovered_100025bc(in_ECX,DAT_10006004,0x1c,1),
                                     uVar7 != 0)))) &&
                                ((uVar7 = recovered_10002634(in_ECX,DAT_10006004,0x1c,&local_898),
                                 uVar7 != 0 && (local_898 == 1)))))) {
                              iVar8 = 5;
                              do {
                                iVar8 = iVar8 + -1;
                                if (iVar8 == 0) goto LAB_10001b73;
                                local_814[0] = 0;
                                local_874[0] = 0;
                                uVar7 = recovered_10002682(in_ECX,DAT_10006004,0x15,local_814);
                                if (((uVar7 == 0) ||
                                    (iVar13 = recovered_100026b8(0,local_88c), iVar13 == 0)) ||
                                   ((iVar13 = recovered_100026b8(4,&local_890), iVar13 == 0 ||
                                    (uVar9 = recovered_10002682(in_ECX,DAT_10006004,0x15,local_874),
                                    uVar7 = DAT_10006004, uVar9 == 0)))) goto LAB_10001b73;
                              } while (local_814[0] != local_874[0]);
                              if ((((((local_890 == 0) &&
                                     (DAT_1000607c = local_88c[0], local_88c[0] != 0)) &&
                                    (local_814[0] = 0, DAT_10006004 != 0)) &&
                                   ((uVar9 = recovered_10002682(in_ECX,DAT_10006004,0x14,local_814),
                                    uVar9 != 0 && ((local_814[0] & 200) == 8)))) &&
                                  (uVar9 = recovered_1000309a(in_ECX,uVar7,0x14,local_814[0] | 4),
                                  uVar9 != 0)) &&
                                 ((uVar7 = recovered_10002682(in_ECX,uVar7,0x14,local_814),
                                  uVar7 != 0 && ((local_814[0] & 0xc4) == 4)))) {
                                DAT_10006074 = 1;
                                DAT_10006078 = DAT_1000603c >> 9 & 1;
                                goto LAB_10000857;
                              }
                            }
                          }
                        }
                        goto LAB_10001b73;
                      }
                    }
                  }
                }
              }
            }
          }
          uVar7 = recovered_10002682(in_ECX,DAT_10006004,0x14,local_874);
          if (local_874[0] != 0 && uVar7 != 0) {
            recovered_1000309a(in_ECX,DAT_10006004,0x14,local_874[0] | 0x80);
          }
          uVar7 = DAT_10006040;
          uVar9 = recovered_10002378();
          DAT_10006070 = ((uVar7 & 2) << 0x1d | uVar9) ^ 0x40000000;
          goto LAB_10001b73;
        }
      }
      local_814[0] = 0;
      local_874[0] = 0;
      local_8a8 = 0;
      local_8bc = 0;
      local_8c4 = 0;
      local_8ac = 0;
      local_8b8 = 0;
      if ((((in_ECX != (int *)0x0) && (*(short *)(in_EDX + 4) == 0x1af4)) &&
          (*(short *)(in_EDX + 6) == 0x1001)) &&
         (((*(uint *)(in_EDX + 0x14) & 1) != 0 &&
          (uVar7 = *(uint *)(in_EDX + 0x14) & 0xfffc, uVar7 != 0)))) {
        uVar14 = uVar7 + 0x12 & 0xffff;
        uVar9 = recovered_100030c1(in_ECX,uVar14,1,0);
        if (((uVar9 != 0) &&
            ((uVar9 = recovered_100030c1(in_ECX,uVar14,1,3), uVar9 != 0 &&
             (uVar9 = recovered_1000314d(in_ECX,uVar7,4,local_814), uVar9 != 0)))) &&
           ((uVar9 = recovered_100030c1(in_ECX,uVar7 + 4 & 0xffff,4,local_814[0] & 0x200),
            uVar9 != 0 &&
            ((((uVar9 = recovered_100030c1(in_ECX,uVar7 + 0xe & 0xffff,2,0), uVar9 != 0 &&
               (uVar10 = recovered_1000314d(in_ECX,uVar7 + 0xc & 0xffff,2,&local_8bc),
               uVar9 = local_8bc, uVar10 != 0)) && (local_8bc - 3 < 0x7e)) &&
             (uVar10 = local_8bc - (local_8bc >> 1 & 0x55555555),
             uVar10 = (uVar10 >> 2 & 0x33333333) + (uVar10 & 0x33333333),
             ((uVar10 >> 4) + uVar10 & 0xf0f0f0f) * 0x1010101 >> 0x18 < 2)))))) {
          DAT_1000608c = 1;
          uVar10 = recovered_10002378();
          DAT_10006070 = uVar10 | 0x40000000;
          DAT_1000608a = (undefined2)uVar7;
          DAT_10006084 = (ushort)uVar9;
          recovered_10001de0(&DAT_10007000,0x2000);
          uVar9 = recovered_1000250f(local_8c0,&DAT_10007000,0x2000,local_874,&local_8a8);
          if (((uVar9 != 0) && (local_8a8 == 0)) && ((local_874[0] & 0xfff) == 0)) {
            recovered_10002562(in_ECX,DAT_10006070,&DAT_10007000,0x2000);
            recovered_10002594(in_ECX);
            uVar9 = recovered_100030c1(in_ECX,uVar7 + 8 & 0xffff,4,local_874[0] >> 0xc);
            if (((uVar9 != 0) &&
                (uVar9 = recovered_1000314d(in_ECX,uVar7 + 0x14 & 0xffff,4,&local_8c4), uVar9 != 0))
               && ((uVar7 = recovered_1000314d(in_ECX,uVar7 + 0x18 & 0xffff,4,&local_8ac),
                   uVar7 != 0 &&
                   ((((local_8ac == 0 && (local_8c4 != 0)) &&
                     (uVar7 = recovered_100030c1(in_ECX,uVar14,1,7), uVar7 != 0)) &&
                    ((uVar7 = recovered_1000314d(in_ECX,uVar14,1,&local_8b8), uVar7 != 0 &&
                     ((local_8b8 & 4) != 0)))))))) {
              DAT_1000607c = local_8c4;
              DAT_10006078 = local_814[0] >> 9 & 1;
              DAT_10006074 = 1;
LAB_10000857:
              recovered_100020a0(local_878);
              recovered_100022cb(DAT_1000607c);
              recovered_10002332(str_10003ee5);
              DAT_10005000 = DAT_10005000 + 1;
              local_8b4 = str_10003ef7;
              if (DAT_100060a4 == 0) {
                local_8b4 = str_10003f06;
              }
              recovered_100020a0(str_10003eee);
              recovered_10002332(&DAT_10003f51);
              recovered_100033be((uint)*in_EDX,2);
              local_8c0 = &DAT_10003f53;
              recovered_10002332(&DAT_10003f53);
              recovered_100033be((uint)in_EDX[1],2);
              recovered_10002332(&DAT_10003f55);
              recovered_100022cb((uint)in_EDX[2]);
              recovered_100020a0(&DAT_10003f57);
              recovered_100033be((uint)*in_EDX,2);
              recovered_10002332(local_8c0);
              recovered_100033be((uint)in_EDX[1],2);
              recovered_10002332(&DAT_10003f55);
              recovered_100022cb((uint)in_EDX[2]);
              recovered_10002332(&DAT_10003f5c);
              recovered_100033be((uint)*(ushort *)(in_EDX + 4),4);
              recovered_10002332(local_8c0);
              recovered_100033be((uint)*(ushort *)(in_EDX + 6),4);
              recovered_10002332(&DAT_10003f5f);
              if (local_414[0] != '\0') {
                recovered_10002332(&DAT_10003f61);
                recovered_10002332(local_414);
              }
              if ((in_ECX != (int *)0x0) && ((code *)in_ECX[3] != (code *)0x0)) {
                (*(code *)in_ECX[3])(local_874,local_8b4,local_814);
              }
              return 1;
            }
          }
        }
      }
    }
  }
LAB_10001b73:
  recovered_10002706(local_8c0);
LAB_10001b80:
  recovered_100022a0();
  return 0;
}

#undef DAT_10003e89
#undef DAT_10003f51
#undef DAT_10003f53
#undef DAT_10003f55
#undef DAT_10003f57
#undef DAT_10003f5c
#undef DAT_10003f5f
#undef DAT_10003f61
#undef DAT_10005000
#undef DAT_10006000
#undef DAT_10006004
#undef DAT_10006008
#undef DAT_1000600c
#undef DAT_10006010
#undef DAT_10006014
#undef DAT_10006018
#undef DAT_1000601c
#undef DAT_10006020
#undef DAT_10006024
#undef DAT_10006028
#undef DAT_1000602c
#undef DAT_10006030
#undef DAT_10006034
#undef DAT_10006038
#undef DAT_1000603c
#undef DAT_10006040
#undef DAT_10006044
#undef DAT_10006048
#undef DAT_1000604c
#undef DAT_10006050
#undef DAT_10006054
#undef DAT_10006058
#undef DAT_1000605c
#undef DAT_10006060
#undef DAT_10006064
#undef DAT_1000606b
#undef DAT_1000606c
#undef DAT_10006070
#undef DAT_10006074
#undef DAT_10006078
#undef DAT_1000607c
#undef DAT_10006084
#undef DAT_1000608a
#undef DAT_1000608c
#undef DAT_10006090
#undef DAT_10006092
#undef DAT_10006094
#undef DAT_10006096
#undef DAT_100060a4
#undef DAT_100060a8
#undef DAT_100060ac
#undef DAT_10006100
#undef DAT_10006200
#undef DAT_10006300
#undef DAT_10007000
#undef str_10003ee5
#undef str_10003eee
#undef str_10003ef7
#undef str_10003f06
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
#undef local_898
#undef local_894
#undef local_890
#undef local_88c
#undef local_878
#undef local_874
#undef local_814
#undef local_414

#undef DAT_10005000
#define DAT_10005000 (*(uint *)(((uintptr_t)pf_module_state + 0x1177U)))
#undef DAT_10006000
#define DAT_10006000 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2177U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001d9f
 */

void recovered_10001d9f(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  undefined4 *device;

  device = &DAT_10006000;
  for (uVar1 = 0; uVar1 < DAT_10005000; uVar1 = uVar1 + 1) {
    recovered_10002706(device);
    device = device + 0x1c00;
  }
  DAT_10005000 = 0;
  return;
}

#undef DAT_10005000
#undef DAT_10006000

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001de0
 */

void recovered_10001de0(void *data,uint bytes)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;

  if (data != (void *)0x0) {
    while (bVar1 = bytes != 0, bytes = bytes - 1, bVar1) {
      *(undefined1 *)data = 0;
      data = (void *)((int)data + 1);
    }
  }
  return;
}


#undef DAT_10005000
#define DAT_10005000 (*(uint *)(((uintptr_t)pf_module_state + 0x1177U)))
#undef DAT_10006000
#define DAT_10006000 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2177U)))
#undef DAT_10006078
#define DAT_10006078 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x21efU)))
#undef DAT_10006080
#define DAT_10006080 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x21f7U)))
#undef DAT_10006094
#define DAT_10006094 (*(uint16_t *)(((uintptr_t)pf_module_state + 0x220bU)))
#undef DAT_100060a4
#define DAT_100060a4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x221bU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001df9
 */

bool recovered_10001df9(uint param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *device;
  uint uVar1;
  bool bVar2;

  bVar2 = false;
  if ((param_1 < DAT_10005000) && ((&DAT_10006078)[param_1 * 0x1c00] != 0)) {
    device = &DAT_10006000 + param_1 * 0x1c00;
    if ((&DAT_100060a4)[param_1 * 0x1c00] == 0) {
      uVar1 = recovered_10003435(device,4,0,(void *)0x0,0);
      return (bool)(char)uVar1;
    }
    recovered_10003410(device);
    uVar1 = recovered_10002c10(device,2);
    bVar2 = false;
    if (((uVar1 != 0) &&
        (uVar1 = recovered_10002dec(device,(uint)*(byte *)(&DAT_10006094 + param_1 * 0x3800)),
        uVar1 != 0)) && (uVar1 = recovered_10002ef1(device,0xe7), uVar1 != 0)) {
      uVar1 = recovered_10002f33(device,0,0x29);
      bVar2 = uVar1 != 0;
    }
    *(undefined4 *)(&DAT_10006080 + param_1 * 0x7000) = 0;
  }
  return bVar2;
}

#undef DAT_10005000
#undef DAT_10006000
#undef DAT_10006078
#undef DAT_10006080
#undef DAT_10006094
#undef DAT_100060a4

#undef DAT_10005000
#define DAT_10005000 (*(uint *)(((uintptr_t)pf_module_state + 0x1177U)))
#undef DAT_1000607c
#define DAT_1000607c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x21f3U)))
#undef DAT_100060a4
#define DAT_100060a4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x221bU)))
#undef str_10003f64
#define str_10003f64 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xdbU)))
#undef str_10003f71
#define str_10003f71 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xe8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001eb0
 */

undefined4 recovered_10001eb0(uint param_1,undefined4 *param_2,int param_3,int param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;

  uVar1 = 0;
  if ((param_2 != (undefined4 *)0x0) && (param_1 < DAT_10005000)) {
    *param_2 = (&DAT_1000607c)[param_1 * 0x1c00];
    pcVar4 = str_10003f71;
    if ((&DAT_100060a4)[param_1 * 0x1c00] == 0) {
      pcVar4 = str_10003f64;
    }
    if (param_4 != 0 && param_3 != 0) {
      iVar3 = param_4 + -1;
      for (iVar2 = 1; param_4 != iVar2; iVar2 = iVar2 + 1) {
        if (pcVar4[iVar2 + -1] == '\0') {
          *(byte *)(param_3 + -1 + iVar2) = (byte)(param_1 % 10) | 0x30;
          iVar3 = iVar2;
          break;
        }
        *(char *)(param_3 + -1 + iVar2) = pcVar4[iVar2 + -1];
      }
      *(undefined1 *)(param_3 + iVar3) = 0;
    }
    uVar1 = 1;
  }
  return uVar1;
}

#undef DAT_10005000
#undef DAT_1000607c
#undef DAT_100060a4
#undef str_10003f64
#undef str_10003f71

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001f56
 */

void recovered_10001f56(undefined4 param_1,undefined4 param_2,int param_3,uint param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_100039c2(param_3,param_4,0);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001f7c
 */

void recovered_10001f7c(undefined4 param_1,undefined4 param_2,int param_3,uint param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_100039c2(param_3,param_4,1);
  return;
}


#undef DAT_10003fae
#define DAT_10003fae (*(uint8_t *)(((uintptr_t)pf_module_state + 0x125U)))
#undef DAT_10003fb3
#define DAT_10003fb3 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x12aU)))
#undef DAT_10005000
#define DAT_10005000 (*(uint *)(((uintptr_t)pf_module_state + 0x1177U)))
#undef DAT_10006068
#define DAT_10006068 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x21dfU)))
#undef DAT_10006069
#define DAT_10006069 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x21e0U)))
#undef DAT_1000606a
#define DAT_1000606a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x21e1U)))
#undef DAT_10006090
#define DAT_10006090 (*(uint16_t *)(((uintptr_t)pf_module_state + 0x2207U)))
#undef DAT_10006094
#define DAT_10006094 (*(uint16_t *)(((uintptr_t)pf_module_state + 0x220bU)))
#undef DAT_100060a4
#define DAT_100060a4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x221bU)))
#undef DAT_100060a8
#define DAT_100060a8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x221fU)))
#undef DAT_100060ac
#define DAT_100060ac (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2223U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001fa2
 */

undefined4 recovered_10001fa2(uint param_1,int param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  ushort uVar4;
  undefined4 uVar5;
  byte bVar6;
  undefined *puVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  undefined8 uVar11;

  uVar5 = 0;
  if (param_1 < DAT_10005000) {
    iVar10 = param_1 * 0x7000;
    puVar7 = &DAT_10003fae;
    if ((&DAT_100060a4)[param_1 * 0x1c00] == 0) {
      puVar7 = &DAT_10003fb3;
    }
    if ((&DAT_100060ac)[param_1 * 0x1c00] == 0) {
      uVar8 = (uint)(ushort)(&DAT_10006090)[param_1 * 0x3800];
    }
    else {
      uVar8 = (&DAT_100060a8)[param_1 * 0x1c00];
    }
    uVar1 = (&DAT_10006068)[iVar10];
    uVar2 = (&DAT_10006069)[iVar10];
    uVar3 = (&DAT_1000606a)[iVar10];
    uVar4 = (&DAT_10006094)[param_1 * 0x3800];
    for (iVar10 = -0x40; iVar10 != 0; iVar10 = iVar10 + 1) {
      *(undefined1 *)(param_2 + 0x40 + iVar10) = 0;
    }
    for (iVar10 = -4; iVar10 != 0; iVar10 = iVar10 + 1) {
      *(undefined *)(param_2 + 4 + iVar10) = puVar7[iVar10 + 4];
    }
    *(undefined1 *)(param_2 + 4) = uVar1;
    *(undefined1 *)(param_2 + 5) = uVar2;
    *(undefined1 *)(param_2 + 6) = uVar3;
    bVar6 = 0;
    for (iVar10 = -4; iVar10 != 0; iVar10 = iVar10 + 1) {
      *(char *)(param_2 + 0xc + iVar10) = (char)(uVar4 >> (bVar6 & 0x1f));
      bVar6 = bVar6 + 8;
    }
    uVar9 = 0;
    for (iVar10 = -8; iVar10 != 0; iVar10 = iVar10 + 1) {
      uVar11 = recovered_10003e0f(uVar8,0,uVar9 & 0xff);
      *(char *)(param_2 + 0x18 + iVar10) = (char)uVar11;
      uVar9 = uVar9 + 8;
    }
    uVar5 = 1;
  }
  return uVar5;
}

#undef DAT_10003fae
#undef DAT_10003fb3
#undef DAT_10005000
#undef DAT_10006068
#undef DAT_10006069
#undef DAT_1000606a
#undef DAT_10006090
#undef DAT_10006094
#undef DAT_100060a4
#undef DAT_100060a8
#undef DAT_100060ac

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100020a0
 */

void recovered_100020a0(char *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined1 *in_ECX;

  if (in_ECX != (undefined1 *)0x0) {
    *in_ECX = 0;
    recovered_10002332(param_1);
  }
  return;
}


#define local_34 (*(undefined4 *)(pf_stack_frame + 28))
#define local_30 (*(uint *)(pf_stack_frame + 32))
#define local_2c (*(uint *)(pf_stack_frame + 36))
#define local_28 (*(undefined4 *)(pf_stack_frame + 40))
#define local_24 (*(undefined4 *)(pf_stack_frame + 44))
#define local_20 (*(undefined4 * *)(pf_stack_frame + 48))
#define local_1c (*(uint *)(pf_stack_frame + 52))
#define local_18 (*(int * *)(pf_stack_frame + 56))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100020bf
 */

uint recovered_100020bf(int *api,uint bus,uint slot,uint function,void *out)

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
    uVar1 = recovered_1000223c(api,bus_00,slot_00,function_00,0,4,&local_30);
    if (((uVar1 == 0) || ((local_30 & 0xffff) == 0)) || ((local_30 & 0xffff) == 0xffff)) {
      uVar1 = 0;
    }
    else {
      uVar2 = recovered_1000223c(api,bus_00,slot_00,function_00,8,4,&local_24);
      uVar1 = 0;
      if (uVar2 != 0) {
        local_20 = (undefined4 *)((int)out + 0x10);
        uVar1 = recovered_1000223c(api,bus_00,slot_00,function_00,4,4,local_20);
        if (uVar1 == 0) {
          *local_20 = 0;
        }
        uVar1 = recovered_1000223c(api,bus_00,slot_00,function_00,0xc,4,&local_34);
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
          uVar1 = recovered_1000223c(local_18,bus_00,local_1c,function_00,iVar4 + 0x28U & 0xffff,4,
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
 * Address: 0x1000223c
 */

uint recovered_1000223c(int *api,uint bus,uint slot,uint function,uint offset,uint width,void *out)

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


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100022a0
 */

void recovered_100022a0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int *in_ECX;

  if ((((in_ECX != (int *)0x0) && (*in_ECX == 0x54584b57)) && (0x2b < (uint)in_ECX[2])) &&
     ((code *)in_ECX[10] != (code *)0x0)) {
    (*(code *)in_ECX[10])();
  }
  return;
}


#define abStack_1f (*(byte (*)[31])(pf_stack_frame + 17))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100022cb
 */

void recovered_100022cb(uint param_1)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  uint uVar1;

  if (param_1 == 0) {
    recovered_10003390(0x30);
  }
  else {
    for (uVar1 = 0; (param_1 != 0 && (uVar1 < 10)); uVar1 = uVar1 + 1) {
      abStack_1f[uVar1 + 1] = (byte)(param_1 % 10) | 0x30;
      param_1 = param_1 / 10;
    }
    while (uVar1 != 0) {
      recovered_10003390(abStack_1f[uVar1]);
      uVar1 = uVar1 - 1;
    }
  }
  return;
}

#undef abStack_1f

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002332
 */

void recovered_10002332(char *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int in_ECX;
  uint in_EDX;

  uVar1 = recovered_100031ff();
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
 * Address: 0x10002378
 */

uint recovered_10002378(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  byte *in_ECX;

  return (uint)in_ECX[1] << 0xb | (uint)*in_ECX << 0x10 | (uint)in_ECX[2] << 8 | 0x80000000;
}


#undef str_10003f1a
#define str_10003f1a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x91U)))
#undef str_10003f2c
#define str_10003f2c (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa3U)))
#undef str_10003f3e
#define str_10003f3e (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb5U)))
#define local_1c (*(uint *)(pf_stack_frame + 20))
#define local_18 (*(uint (*)[6])(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000239f
 */

bool recovered_1000239f(void)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  char *pcVar3;
  int *in_ECX;
  byte *in_EDX;
  uint uVar4;
  uint uVar5;

  local_1c = 0;
  if ((((in_ECX == (int *)0x0) || (*in_ECX != 0x54584b57)) || ((uint)in_ECX[2] < 100)) ||
     (in_ECX[0x18] == 0)) {
    pcVar3 = str_10003f1a;
  }
  else {
    uVar1 = recovered_1000223c(in_ECX,(uint)*in_EDX,(uint)in_EDX[1],(uint)in_EDX[2],4,2,&local_1c);
    if (uVar1 == 0) {
      pcVar3 = str_10003f2c;
    }
    else {
      uVar1 = 0;
      for (iVar2 = -0x18; iVar2 != 0; iVar2 = iVar2 + 4) {
        uVar4 = uVar1 | 1;
        uVar5 = uVar1 | 2;
        if (*(uint *)(in_EDX + iVar2 + 0x2c) == 0) {
          uVar5 = uVar1;
        }
        uVar1 = uVar5;
        if ((*(uint *)(in_EDX + iVar2 + 0x2c) & 1) != 0) {
          uVar1 = uVar4;
        }
      }
      iVar2 = recovered_100031ff();
      uVar5 = uVar1 | 4;
      if (iVar2 == 0) {
        uVar5 = uVar1;
      }
      if ((in_EDX[8] == 6) && (in_EDX[9] != 0)) {
        uVar5 = uVar5 | 2;
      }
      local_18[0] = local_1c | uVar5;
      iVar2 = recovered_10002bc3(in_EDX[1],in_EDX[2],local_18[0]);
      if (iVar2 != 0) {
        recovered_1000223c(in_ECX,(uint)*in_EDX,(uint)in_EDX[1],(uint)in_EDX[2],4,2,local_18);
        return (uVar5 & ~local_18[0]) == 0;
      }
      pcVar3 = str_10003f3e;
    }
  }
  recovered_10002332(pcVar3);
  return false;
}

#undef str_10003f1a
#undef str_10003f2c
#undef str_10003f3e
#undef local_1c
#undef local_18

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000250f
 */

uint recovered_1000250f(void *device,void *data,uint bytes,uint *low,uint *high)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int *piVar1;
  uint uVar2;

  piVar1 = *(int **)device;
  uVar2 = 0;
  if ((((piVar1 != (int *)0x0) && (*piVar1 == 0x54584b57)) && (0x73 < (uint)piVar1[2])) &&
     (((low != (uint *)0x0 && (data != (void *)0x0)) && ((code *)piVar1[0x1c] != (code *)0x0)))) {
    uVar2 = (*(code *)piVar1[0x1c])(*(uint *)((int)device + 0x70),data,bytes,low,high);
    uVar2 = (uint)(uVar2 != 0);
  }
  return uVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002562
 */

void recovered_10002562(int *api,uint device,void *data,uint bytes)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if ((((api != (int *)0x0) && (*api == 0x54584b57)) && (0x77 < (uint)api[2])) &&
     ((code *)api[0x1d] != (code *)0x0)) {
    (*(code *)api[0x1d])(device,data,bytes);
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002594
 */

void recovered_10002594(int *api)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if ((((api != (int *)0x0) && (*api == 0x54584b57)) && (0x7b < (uint)api[2])) &&
     ((code *)api[0x1e] != (code *)0x0)) {
    (*(code *)api[0x1e])();
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100025bc
 */

uint recovered_100025bc(int *api,uint base,uint offset,uint value)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  if (base == 0) {
    return 0;
  }
  uVar1 = recovered_10003103(api,base + offset,2,value);
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100025e3
 */

bool recovered_100025e3(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  bool bVar2;

  iVar1 = recovered_10003303();
  if (iVar1 == 0) {
    bVar2 = false;
  }
  else {
    iVar1 = recovered_10003303();
    bVar2 = iVar1 != 0;
  }
  return bVar2;
}


#define local_14 (*(undefined4 (*)[5])(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002634
 */

uint recovered_10002634(int *api,uint base,uint offset,void *out)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;

  local_14[0] = 0;
  uVar2 = 0;
  if (base != 0 && out != (void *)0x0) {
    uVar1 = recovered_1000332a(api,base + offset,2,local_14);
    if (uVar1 != 0) {
      *(undefined4 *)out = local_14[0];
      uVar2 = 1;
    }
  }
  return uVar2;
}

#undef local_14

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002682
 */

uint recovered_10002682(int *api,uint base,uint offset,void *out)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  if (base == 0 || out == (void *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = recovered_1000332a(api,base + offset,1,out);
  }
  return uVar1;
}


#define local_14 (*(undefined4 (*)[5])(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100026b8
 */

undefined4 recovered_100026b8(int param_1,undefined4 *param_2)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int *in_ECX;
  int in_EDX;
  undefined4 uVar2;

  local_14[0] = 0;
  uVar2 = 0;
  if (in_EDX != 0 && param_2 != (undefined4 *)0x0) {
    uVar1 = recovered_1000332a(in_ECX,in_EDX + param_1,4,local_14);
    if (uVar1 != 0) {
      *param_2 = local_14[0];
      uVar2 = 1;
    }
  }
  return uVar2;
}

#undef local_14

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002706
 */

void recovered_10002706(void *device)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  uint uVar2;
  undefined3 extraout_var = 0;
  int iVar3;
  uint uVar4;

  if ((device != (void *)0x0) && (*(int **)device != (int *)0x0)) {
    *(undefined4 *)((int)device + 0x74) = 0;
    *(undefined4 *)((int)device + 0x78) = 0;
    if ((*(int *)((int)device + 0x8c) == 0) || (*(ushort *)((int)device + 0x8a) == 0)) {
      if (*(int *)((int)device + 4) == 0) {
        uVar2 = 1;
      }
      else {
        bVar1 = recovered_1000326f();
        uVar2 = CONCAT31(extraout_var,bVar1);
      }
    }
    else {
      uVar2 = recovered_100030c1(*(int **)device,*(ushort *)((int)device + 0x8a) + 0x12 & 0xffff,1,0
                                );
    }
    if (*(char *)((int)device + 0x6b) != '\0') {
      uVar4 = *(uint *)((int)device + 0x6c) & 0xfffffffb;
      if (uVar2 != 0) {
        uVar4 = *(uint *)((int)device + 0x6c);
      }
      recovered_10002bc3(*(undefined1 *)((int)device + 0x69),*(undefined1 *)((int)device + 0x6a),
                         uVar4 & 0xffff);
      *(undefined1 *)((int)device + 0x6b) = 0;
    }
    *(undefined4 *)((int)device + 0x8c) = 0;
    *(undefined2 *)((int)device + 0x8a) = 0;
    *(undefined4 *)((int)device + 0xa4) = 0;
    *(undefined4 *)((int)device + 0x90) = 0;
    *(undefined4 *)((int)device + 0x94) = 0;
    *(undefined4 *)((int)device + 0x98) = 0;
    *(undefined1 *)((int)device + 0x9c) = 0;
    for (iVar3 = -4; iVar3 != 0; iVar3 = iVar3 + 1) {
      *(undefined1 *)((int)device + iVar3 + 0xa1) = 0;
    }
    *(undefined4 *)((int)device + 0xa8) = 0;
    *(undefined4 *)((int)device + 0xac) = 0;
  }
  return;
}


#define local_24 (*(uint *)(pf_stack_frame + 28))
#define local_20 (*(int *)(pf_stack_frame + 32))
#define local_1c (*(undefined4 *)(pf_stack_frame + 36))
#define local_18 (*(uint *)(pf_stack_frame + 40))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100027fc
 */

uint recovered_100027fc(int *api,byte *device,uint index,int span,void *out)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  uint uVar3;

  local_20 = 0;
  uVar3 = 0;
  if ((out != (void *)0x0) &&
     (((index == 0 || ((*(uint *)(device + index * 4 + 0x10) & 7) != 4)) &&
      (local_24 = *(uint *)(device + index * 4 + 0x14), (local_24 & 1) == 0 && local_24 != 0)))) {
    local_18 = (uint)device[2];
    recovered_1000223c(api,(uint)*device,(uint)device[1],local_18,index * 4 + 0x10 & 0xffff,4,
                       &local_24);
    uVar3 = 0;
    iVar2 = 0;
    if ((local_24 & 7) == 4) {
      if (4 < index) {
        return 0;
      }
      local_20 = *(int *)(device + index * 4 + 0x18);
      recovered_1000223c(api,(uint)*device,(uint)device[1],(uint)device[2],index * 4 + 0x14 & 0xffff
                         ,4,&local_20);
      iVar2 = local_20;
    }
    uVar1 = 0xfffffffc;
    if ((local_24 & 1) == 0) {
      uVar1 = 0xfffffff0;
    }
    uVar1 = uVar1 & local_24;
    if ((span != 0) && (uVar1 != 0 || iVar2 != 0)) {
      *(undefined4 *)out = 0;
      local_1c = 0;
      uVar3 = 0;
      if ((api != (int *)0x0) && (*api == 0x54584b57)) {
        if (((uint)api[2] < 0xbc) || ((code *)api[0x2e] == (code *)0x0)) {
          if ((0x67 < (uint)api[2] && iVar2 == 0) &&
             (((code *)api[0x19] != (code *)0x0 &&
              (iVar2 = (*(code *)api[0x19])(uVar1,0,span,&local_1c), iVar2 != 0)))) {
            *(undefined4 *)out = local_1c;
            uVar3 = 1;
          }
        }
        else {
          uVar3 = (*(code *)api[0x2e])(uVar1,iVar2,span,out);
        }
      }
    }
  }
  return uVar3;
}

#undef local_24
#undef local_20
#undef local_1c
#undef local_18

#define local_1c (*(undefined4 *)(pf_stack_frame + 20))
#define local_18 (*(uint (*)[6])(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100029af
 */

undefined4 recovered_100029af(void)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int *in_ECX;
  void *in_EDX;
  undefined4 uVar2;
  int iVar3;

  local_18[0] = 0;
  uVar2 = 0;
  if ((*(int *)((int)in_EDX + 0xa4) != 0) && (*(char *)((int)in_EDX + 0x96) != '\x02')) {
    if (*(char *)((int)in_EDX + 0x96) == '\0') {
      uVar1 = recovered_10002c10(in_EDX,6);
      if ((((uVar1 == 0) || (uVar1 = recovered_10002d4b(in_ECX,10), uVar1 == 0)) ||
          (uVar1 = recovered_10002c10(in_EDX,2), uVar1 == 0)) ||
         ((uVar1 = recovered_10002d4b(in_ECX,2000), uVar1 == 0 ||
          (uVar1 = recovered_10002d79(in_EDX), uVar1 == 0)))) {
        recovered_10002c64();
        *(undefined1 *)((int)in_EDX + 0x96) = 2;
        return 0;
      }
      *(undefined1 *)((int)in_EDX + 0x96) = 1;
    }
    uVar1 = recovered_10002dec(in_EDX,(uint)*(byte *)((int)in_EDX + 0x94));
    if ((uVar1 == 0) || (uVar1 = recovered_10002e42(in_EDX), uVar1 == 0)) {
      recovered_10002c64();
    }
    else {
      uVar1 = recovered_10002ef1(in_EDX,0xec);
      if ((uVar1 == 0) || (uVar1 = recovered_10002f33(in_EDX,8,0x21), uVar1 == 0)) {
        recovered_10002c64();
        *(undefined1 *)((int)in_EDX + 0x96) = 0;
      }
      else {
        for (iVar3 = -0x200; iVar3 != 0; iVar3 = iVar3 + 2) {
          local_1c = 0;
          uVar1 = recovered_10002fac(in_EDX,0,2,&local_1c);
          if (uVar1 == 0) goto LAB_10002ba8;
          *(undefined2 *)((int)in_EDX + iVar3 + 0x4200) = (undefined2)local_1c;
        }
        uVar2 = 1;
        uVar1 = recovered_10002d4b(in_ECX,1);
        if (((((uVar1 == 0) || (iVar3 = *(int *)((int)in_EDX + 0x4078), iVar3 == 0)) ||
             (uVar1 = recovered_1000302a(in_EDX), uVar1 == 0)) ||
            ((uVar1 = recovered_10002fac(in_EDX,7,1,local_18), uVar1 == 0 || (local_18[0] == 0))))
           || ((local_18[0] & 0x29) != 0)) {
LAB_10002ba8:
          recovered_10002c64();
          *(undefined1 *)((int)in_EDX + 0x96) = 0;
          uVar2 = 0;
        }
        else {
          *(int *)((int)in_EDX + 0x7c) = iVar3;
          *(undefined4 *)((int)in_EDX + 0x78) = 1;
          *(undefined4 *)((int)in_EDX + 0x74) = 1;
        }
      }
    }
  }
  return uVar2;
}

#undef local_1c
#undef local_18

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002bc3
 */

undefined4 recovered_10002bc3(undefined1 param_1,undefined1 param_2,undefined4 param_3)

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
 * Address: 0x10002c10
 */

uint recovered_10002c10(void *device,uint value)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  if (device == (void *)0x0) {
    uVar1 = 0;
  }
  else if (*(int *)((int)device + 0xac) == 0) {
    uVar1 = recovered_100030c1(*(int **)device,(uint)*(ushort *)((int)device + 0x92),1,value);
  }
  else {
    uVar1 = recovered_1000309a(*(int **)device,*(uint *)((int)device + 0xa8),0x160,value);
  }
  return uVar1;
}


#define local_18 (*(undefined4 (*)[6])(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002c64
 */

void recovered_10002c64(void)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  undefined1 uVar1;
  uint uVar2;
  undefined4 *in_ECX;
  uint in_EDX;
  int iVar3;
  int iVar4;

  local_18[0] = 0;
  if (*(byte *)((int)in_ECX + 0x97) < in_EDX) {
    *(char *)((int)in_ECX + 0x97) = (char)in_EDX;
    *(undefined1 *)(in_ECX + 0x26) = *(undefined1 *)((int)in_ECX + 0x95);
    *(byte *)((int)in_ECX + 0x99) = *(byte *)(in_ECX + 0x25) >> 4 & 1;
    if (in_ECX[0x2b] == 0) {
      uVar2 = recovered_1000314d((int *)*in_ECX,(uint)*(ushort *)((int)in_ECX + 0x92),1,local_18);
      uVar1 = (undefined1)uVar2;
    }
    else {
      uVar2 = recovered_10002682((int *)*in_ECX,in_ECX[0x2a],0x160,local_18);
      uVar1 = (undefined1)uVar2;
    }
    *(undefined1 *)((int)in_ECX + 0x9b) = uVar1;
    *(undefined1 *)((int)in_ECX + 0x9a) = (undefined1)local_18[0];
    *(undefined1 *)(in_ECX + 0x27) = 1;
    iVar3 = 0;
    for (iVar4 = -4; iVar4 != 0; iVar4 = iVar4 + 1) {
      uVar2 = recovered_10002fac(in_ECX,iVar3 + 2,1,local_18);
      if (uVar2 == 0) {
        *(undefined1 *)(in_ECX + 0x27) = 0;
        local_18[0] = 0;
        PF_PART1(local_18[0], 0) = 0;
      }
      else {
      }
      *(undefined1 *)((int)in_ECX + iVar4 + 0xa1) = (undefined1)local_18[0];
      iVar3 = iVar3 + 1;
    }
  }
  return;
}

#undef local_18

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002d4b
 */

uint recovered_10002d4b(int *api,uint delay)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  if ((((api == (int *)0x0) || (*api != 0x54584b57)) || ((uint)api[2] < 0x34)) ||
     ((code *)api[0xc] == (code *)0x0)) {
    return 0;
  }
  uVar1 = (*(code *)api[0xc])(delay);
  return uVar1;
}


#define local_18 (*(uint (*)[6])(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002d79
 */

uint recovered_10002d79(void *device)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  bool bVar3;

  local_18[0] = 0;
  iVar2 = 31000;
  while( true ) {
    bVar3 = iVar2 == 0;
    iVar2 = iVar2 + -1;
    if (bVar3) {
      return 0;
    }
    uVar1 = recovered_10002fac(device,7,1,local_18);
    if (uVar1 == 0) break;
    if ((local_18[0] == 0) || (local_18[0] == 0xff)) {
      return 1;
    }
    if (-1 < (char)local_18[0]) {
      return (uint)((local_18[0] & 0x29) == 0);
    }
    recovered_10002d4b(*(int **)device,1000);
  }
  return 0;
}

#undef local_18

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002dec
 */

uint recovered_10002dec(void *device,uint value)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  if ((((device == (void *)0x0) || (*(int *)device == 0)) ||
      (uVar1 = recovered_10003193(device,6,1,value), uVar1 == 0)) ||
     (uVar1 = recovered_10002d4b(*(int **)device,1), uVar1 == 0)) {
    return 0;
  }
  uVar1 = recovered_10002f33(device,0,0x29);
  return uVar1;
}


#define local_20 (*(int *)(pf_stack_frame + 16))
#define local_1c (*(int *)(pf_stack_frame + 20))
#define local_18 (*(int *)(pf_stack_frame + 24))
#define local_14 (*(int (*)[5])(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002e42
 */

uint recovered_10002e42(void *device)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;

  local_14[0] = 0;
  local_18 = 0;
  local_1c = 0;
  local_20 = 0;
  uVar1 = recovered_10002fac(device,2,1,local_14);
  uVar2 = 0;
  if (uVar1 != 0) {
    uVar1 = recovered_10002fac(device,3,1,&local_18);
    if (uVar1 != 0) {
      uVar1 = recovered_10002fac(device,4,1,&local_1c);
      if (uVar1 != 0) {
        uVar1 = recovered_10002fac(device,5,1,&local_20);
        if (uVar1 != 0) {
          uVar2 = (uint)(((local_18 == 1 && local_14[0] == 1) && local_1c == 0) && local_20 == 0);
        }
      }
    }
  }
  return uVar2;
}

#undef local_20
#undef local_1c
#undef local_18
#undef local_14

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002ef1
 */

uint recovered_10002ef1(void *device,uint command)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  if (((device == (void *)0x0) || (*(int *)device == 0)) ||
     (uVar1 = recovered_10003193(device,7,1,command), uVar1 == 0)) {
    return 0;
  }
  uVar1 = recovered_10002d4b(*(int **)device,1);
  return uVar1;
}


#define local_1c (*(uint *)(pf_stack_frame + 20))
#define local_18 (*(uint *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002f33
 */

uint recovered_10002f33(void *device,uint mask,uint errors)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  bool bVar3;

  local_1c = 0;
  iVar2 = 100000;
  local_18 = mask;
  while( true ) {
    bVar3 = iVar2 == 0;
    iVar2 = iVar2 + -1;
    if (bVar3) {
      return 0;
    }
    uVar1 = recovered_10002fac(device,7,1,&local_1c);
    if (uVar1 == 0) {
      return 0;
    }
    if (local_1c == 0) {
      return 0;
    }
    if (local_1c == 0xff) break;
    if (-1 < (char)local_1c) {
      if ((errors & local_1c) != 0) {
        return 0;
      }
      if ((local_18 & ~local_1c) == 0) {
        return 1;
      }
    }
    recovered_10002d4b(*(int **)device,10);
  }
  return 0;
}

#undef local_1c
#undef local_18

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002fac
 */

uint recovered_10002fac(void *device,uint offset,uint width,void *out)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  if (out == (void *)0x0 || device == (void *)0x0) {
    uVar1 = 0;
  }
  else if (*(int *)((int)device + 0xac) == 0) {
    uVar1 = recovered_1000314d(*(int **)device,
                               (uint)(ushort)((short)offset + *(short *)((int)device + 0x90)),width,
                               out);
  }
  else if (width == 2) {
    uVar1 = recovered_10002634(*(int **)device,*(uint *)((int)device + 0xa8),offset << 4,out);
  }
  else {
    uVar1 = recovered_10002682(*(int **)device,*(uint *)((int)device + 0xa8),offset << 4,out);
  }
  return uVar1;
}


#define local_18 (*(uint (*)[6])(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000302a
 */

uint recovered_1000302a(void *device)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  bool bVar3;

  local_18[0] = 0;
  iVar2 = 100000;
  while( true ) {
    bVar3 = iVar2 == 0;
    iVar2 = iVar2 + -1;
    if (bVar3) {
      return 0;
    }
    uVar1 = recovered_10002fac(device,7,1,local_18);
    if (uVar1 == 0) {
      return 0;
    }
    if (local_18[0] == 0) {
      return 0;
    }
    if (local_18[0] == 0xff) break;
    if (-1 < (char)local_18[0]) {
      if ((local_18[0] & 0x21) != 0) {
        return 0;
      }
      if ((local_18[0] & 8) == 0) {
        return 1;
      }
    }
    recovered_10002d4b(*(int **)device,10);
  }
  return 0;
}

#undef local_18

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000309a
 */

uint recovered_1000309a(int *api,uint base,uint offset,uint value)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  if (base == 0) {
    return 0;
  }
  uVar1 = recovered_10003103(api,base + offset,1,value);
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100030c1
 */

uint recovered_100030c1(int *api,uint port,uint width,uint value)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  if ((((api == (int *)0x0 || port == 0) || (*api != 0x54584b57)) || ((uint)api[2] < 0x5c)) ||
     ((code *)api[0x16] == (code *)0x0)) {
    return 0;
  }
  uVar1 = (*(code *)api[0x16])(port & 0xffff,width,value);
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003103
 */

uint recovered_10003103(int *api,uint address,uint width,uint value)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  code *pcVar1;
  uint uVar2;

  if ((api != (int *)0x0) && (*api == 0x54584b57)) {
    if ((uint)api[2] < 0xc4) {
      if ((uint)api[2] < 0x70) {
        return 0;
      }
    }
    else {
      pcVar1 = (code *)api[0x30];
      if (pcVar1 != (code *)0x0) goto LAB_10003131;
    }
    pcVar1 = (code *)api[0x1b];
    if (pcVar1 != (code *)0x0) {
LAB_10003131:
      uVar2 = (*pcVar1)(address,width,value);
      return uVar2;
    }
  }
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000314d
 */

uint recovered_1000314d(int *api,uint port,uint width,void *out)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  if ((((api == (int *)0x0) || ((short)port == 0)) || (out == (void *)0x0)) ||
     (((*api != 0x54584b57 || ((uint)api[2] < 0x58)) || ((code *)api[0x15] == (code *)0x0)))) {
    uVar1 = 0;
  }
  else {
    uVar1 = (*(code *)api[0x15])(port & 0xffff,width,out);
  }
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003193
 */

uint recovered_10003193(void *device,uint offset,uint width,uint value)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  if (*(int *)((int)device + 0xac) == 0) {
    uVar1 = recovered_100030c1(*(int **)device,
                               (uint)(ushort)((short)offset + *(short *)((int)device + 0x90)),width,
                               value);
  }
  else if (width == 2) {
    uVar1 = recovered_100025bc(*(int **)device,*(uint *)((int)device + 0xa8),offset << 4,value);
  }
  else {
    uVar1 = recovered_1000309a(*(int **)device,*(uint *)((int)device + 0xa8),offset << 4,value);
  }
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100031ff
 */

int recovered_100031ff(void)

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


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003220
 */

undefined4 recovered_10003220(uint param_1,uint param_2,uint param_3,int *param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int *in_ECX;
  byte *in_EDX;
  undefined4 uVar2;

  uVar2 = 0;
  if ((((!CARRY4(param_3,param_2)) && (param_3 != 0)) && (param_1 < 6)) && (param_4 != (int *)0x0))
  {
    uVar1 = recovered_100027fc(in_ECX,in_EDX,param_1,param_3 + param_2,param_4);
    if (uVar1 != 0) {
      *param_4 = *param_4 + param_2;
      uVar2 = 1;
    }
  }
  return uVar2;
}


#define local_18 (*(int (*)[6])(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000326f
 */

bool recovered_1000326f(void)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  int *in_ECX;
  uint in_EDX;
  bool bVar3;

  local_18[0] = 0xff;
  bVar3 = false;
  if (in_EDX != 0 && in_ECX != (int *)0x0) {
    uVar1 = recovered_1000309a(in_ECX,in_EDX,0x14,0);
    if (uVar1 != 0) {
      recovered_10002594(in_ECX);
      for (uVar1 = 0; uVar1 != 1000; uVar1 = uVar1 + 1) {
        uVar2 = recovered_10002682(in_ECX,in_EDX,0x14,local_18);
        if ((uVar2 != 0) && (local_18[0] == 0)) break;
        recovered_10002d4b(in_ECX,10);
      }
      bVar3 = uVar1 < 1000;
    }
  }
  return bVar3;
}

#undef local_18

#define in_stack_00000004 (*(int *)(pf_stack_frame + 36))
#define in_stack_00000008 (*(uint *)(pf_stack_frame + 40))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003303
 */

uint recovered_10003303(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int *in_ECX;
  int in_EDX;

  if (in_EDX == 0) {
    return 0;
  }
  uVar1 = recovered_10003103(in_ECX,in_EDX + in_stack_00000004,4,in_stack_00000008);
  return uVar1;
}

#undef in_stack_00000004
#undef in_stack_00000008

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000332a
 */

uint recovered_1000332a(int *api,uint address,uint width,void *out)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  code *pcVar2;

  if ((api != (int *)0x0) && (*api == 0x54584b57)) {
    if ((uint)api[2] < 0xc0) {
      if ((uint)api[2] < 0x6c) {
        return 0;
      }
    }
    else {
      pcVar2 = (code *)api[0x2f];
      if (out != (void *)0x0 && pcVar2 != (code *)0x0) goto LAB_10003378;
    }
    pcVar2 = (code *)api[0x1a];
    if (out != (void *)0x0 && pcVar2 != (code *)0x0) {
LAB_10003378:
      uVar1 = (*pcVar2)(address,width,out);
      return uVar1;
    }
  }
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003390
 */

void recovered_10003390(undefined1 param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int in_ECX;
  uint in_EDX;

  iVar1 = recovered_100031ff();
  if ((in_ECX != 0) && (iVar1 + 1U < in_EDX)) {
    *(undefined1 *)(in_ECX + iVar1) = param_1;
    *(undefined1 *)(in_ECX + 1 + iVar1) = 0;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100033be
 */

void recovered_100033be(uint param_1,int param_2)

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
    recovered_10003390(cVar3);
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003410
 */

void recovered_10003410(void *device)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  while( true ) {
    iVar1 = __atomic_exchange_n(&(*(int *)((int)device + 0x80)),1,__ATOMIC_SEQ_CST);
    if (iVar1 == 0) break;
    do {
    } while (*(int *)((int)device + 0x80) != 0);
  }
  return;
}


#define local_44 (*(short *)(pf_stack_frame + 28))
#define local_3c (*(int *)(pf_stack_frame + 36))
#define local_30 (*(uint *)(pf_stack_frame + 48))
#define local_2c (*(uint *)(pf_stack_frame + 52))
#define local_28 (*(void * *)(pf_stack_frame + 56))
#define local_24 (*(uint *)(pf_stack_frame + 60))
#define local_20 (*(uint *)(pf_stack_frame + 64))
#define local_1c (*(uint *)(pf_stack_frame + 68))
#define local_18 (*(uint (*)[6])(pf_stack_frame + 72))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003435
 */

uint recovered_10003435(void *device,uint operation,uint sector,void *data,uint sectors)

{
  unsigned char pf_stack_frame[128] __attribute__((aligned(16))) = {0};

  void *pvVar1;
  void *pvVar2;
  short sVar3;
  void *data_00;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  void *descriptor;
  uint uVar8;
  uint uVar9;
  bool bVar10;

  if (device == (void *)0x0) {
    return 0;
  }
  recovered_10003410(device);
  local_18[0] = 0;
  local_1c = 0;
  local_20 = 0;
  local_24 = 0;
  local_2c = 0;
  local_30 = 0;
  pvVar1 = (void *)((int)device + 0x100);
  if (*(int *)((int)device + 0x8c) == 0) {
    data_00 = (void *)((int)device + 0x200);
    local_3c = 0x300;
  }
  else {
    data_00 = (void *)((int)device + (uint)*(ushort *)((int)device + 0x84) * 0x10 + 0x1000);
    local_3c = 0x2000;
    pvVar1 = (void *)((int)device + 0x1000);
  }
  uVar9 = 0;
  if (*(int *)((int)device + 0x74) == 0) goto LAB_100038ca;
  if (operation == 4) {
    if (*(int *)((int)device + 0x78) == 0) goto LAB_100038ca;
  }
  else if (sectors - 0x11 < 0xfffffff0 || data == (void *)0x0) goto LAB_100038ca;
  pvVar2 = (void *)((int)device + 0x3000);
  recovered_10001de0(pvVar2,0x10);
  *(uint *)((int)device + 0x3000) = operation;
  recovered_100038de((void *)((int)device + 0x3008),sector,0);
  *(undefined1 *)((int)device + 0x6000) = 0xff;
  uVar4 = recovered_1000250f(device,pvVar2,0x10,local_18,&local_1c);
  if (uVar4 == 0) goto LAB_100038ca;
  local_28 = (void *)((int)device + 0x6000);
  uVar4 = recovered_1000250f(device,local_28,1,&local_2c,&local_30);
  if (uVar4 == 0) goto LAB_100038ca;
  uVar4 = sectors << 9;
  if (operation != 4) {
    uVar5 = recovered_1000250f(device,(void *)((int)device + 0x4000),uVar4,&local_20,&local_24);
    if (uVar5 == 0) goto LAB_100038ca;
    if (operation == 1) {
      recovered_10003919((void *)((int)device + 0x4000),data,uVar4);
    }
  }
  recovered_10001de0(pvVar1,(uint)*(ushort *)((int)device + 0x84) << 4);
  recovered_1000393a(pvVar1,local_18[0],local_1c,0x10,1,1);
  descriptor = (void *)((int)pvVar1 + 0x10);
  if (operation != 4) {
    recovered_1000393a(descriptor,local_20,local_24,uVar4,(uint)(operation == 0) * 2 + 1,2);
    descriptor = (void *)((int)pvVar1 + 0x20);
  }
  recovered_1000393a(descriptor,local_2c,local_30,1,2,0);
  *(undefined2 *)
   ((int)data_00 +
   ((uint)*(ushort *)((int)device + 0x86) % (uint)*(ushort *)((int)device + 0x84)) * 2 + 4) = 0;
  iVar6 = *(ushort *)((int)device + 0x86) + 1;
  *(short *)((int)device + 0x86) = (short)iVar6;
  *(char *)((int)data_00 + 2) = (char)iVar6;
  *(char *)((int)data_00 + 3) = (char)((uint)iVar6 >> 8);
  uVar5 = *(uint *)((int)device + 0x88);
  recovered_10002562(*(int **)device,*(uint *)((int)device + 0x70),pvVar2,0x10);
  pvVar2 = (void *)((int)device + 0x4000);
  recovered_10002562(*(int **)device,*(uint *)((int)device + 0x70),pvVar2,uVar4);
  recovered_10002562(*(int **)device,*(uint *)((int)device + 0x70),local_28,1);
  recovered_10002562(*(int **)device,*(uint *)((int)device + 0x70),pvVar1,
                     (uint)*(ushort *)((int)device + 0x84) << 4);
  recovered_10002562(*(int **)device,*(uint *)((int)device + 0x70),data_00,
                     (uint)*(ushort *)((int)device + 0x84) * 2 + 6);
  recovered_10002594(*(int **)device);
  if (*(int *)((int)device + 0x8c) == 0) {
LAB_10003762:
    uVar9 = recovered_100025bc(*(int **)device,*(uint *)((int)device + 0x60),0,0);
    if (uVar9 != 0) {
LAB_1000377e:
      pvVar1 = (void *)(local_3c + (int)device);
      local_44 = (short)uVar5 + 1;
      iVar6 = 50000;
      while (bVar10 = iVar6 != 0, iVar6 = iVar6 + -1, bVar10) {
        recovered_10002562(*(int **)device,*(uint *)((int)device + 0x70),pvVar1,
                           (uint)*(ushort *)((int)device + 0x84) * 8 + 6);
        sVar3 = *(short *)((int)pvVar1 + 2);
        *(short *)((int)device + 0x88) = sVar3;
        if (sVar3 == local_44) goto LAB_100037f1;
        recovered_10002d4b(*(int **)device,100);
      }
      if (*(short *)((int)device + 0x88) == local_44) {
LAB_100037f1:
        uVar9 = 0;
        uVar5 = (uVar5 & 0xffff) % (uint)*(ushort *)((int)device + 0x84);
        uVar7 = recovered_10003990((void *)((int)pvVar1 + uVar5 * 8 + 4));
        uVar5 = recovered_10003990((void *)((int)pvVar1 + uVar5 * 8 + 8));
        uVar8 = uVar4 | 1;
        if (operation != 0) {
          uVar8 = 1;
        }
        if (((uVar7 == 0) && (uVar5 != 0)) && (uVar5 <= uVar8)) {
          recovered_10002562(*(int **)device,*(uint *)((int)device + 0x70),local_28,1);
          recovered_10002562(*(int **)device,*(uint *)((int)device + 0x70),pvVar2,uVar4);
          bVar10 = *(char *)((int)device + 0x6000) == '\0';
          if (bVar10 && operation == 0) {
            recovered_10003919(data,pvVar2,uVar4);
            uVar9 = 1;
          }
          else {
            uVar9 = (uint)bVar10;
          }
        }
        else {
          recovered_10002706(device);
        }
        goto LAB_100038ca;
      }
    }
  }
  else {
    uVar9 = recovered_100030c1(*(int **)device,(uint)(ushort)(*(short *)((int)device + 0x8a) + 0x10)
                               ,2,0);
    if (uVar9 != 0) {
      if (*(int *)((int)device + 0x8c) == 0) goto LAB_10003762;
      goto LAB_1000377e;
    }
  }
  recovered_10002706(device);
  uVar9 = 0;
LAB_100038ca:
  *(undefined4 *)((int)device + 0x80) = 0;
  return uVar9;
}

#undef local_44
#undef local_3c
#undef local_30
#undef local_2c
#undef local_28
#undef local_24
#undef local_20
#undef local_1c
#undef local_18

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100038de
 */

void recovered_100038de(void *data,uint low,uint high)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (data != (void *)0x0) {
    *(char *)data = (char)low;
    *(char *)((int)data + 1) = (char)(low >> 8);
    *(char *)((int)data + 2) = (char)(low >> 0x10);
    *(char *)((int)data + 3) = (char)(low >> 0x18);
    *(char *)((int)data + 4) = (char)high;
    *(char *)((int)data + 5) = (char)(high >> 8);
    *(char *)((int)data + 6) = (char)(high >> 0x10);
    *(char *)((int)data + 7) = (char)(high >> 0x18);
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003919
 */

void recovered_10003919(void *dest,void *data,uint bytes)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  for (uVar1 = 0; bytes != uVar1; uVar1 = uVar1 + 1) {
    *(undefined1 *)((int)dest + uVar1) = *(undefined1 *)((int)data + uVar1);
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000393a
 */

void recovered_1000393a(void *descriptor,uint low,uint high,uint bytes,uint flags,uint next)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_100038de(descriptor,low,high);
  *(char *)((int)descriptor + 8) = (char)bytes;
  *(char *)((int)descriptor + 9) = (char)(bytes >> 8);
  *(char *)((int)descriptor + 10) = (char)(bytes >> 0x10);
  *(char *)((int)descriptor + 0xb) = (char)(bytes >> 0x18);
  *(char *)((int)descriptor + 0xc) = (char)flags;
  *(char *)((int)descriptor + 0xd) = (char)(flags >> 8);
  *(char *)((int)descriptor + 0xe) = (char)(next & 0xffff);
  *(char *)((int)descriptor + 0xf) = (char)((next & 0xffff) >> 8);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003990
 */

uint recovered_10003990(void *data)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (data == (void *)0x0) {
    return 0;
  }
  return *(uint *)data;
}


#undef DAT_10005000
#define DAT_10005000 (*(uint *)(((uintptr_t)pf_module_state + 0x1177U)))
#undef DAT_10006000
#define DAT_10006000 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2177U)))
#undef DAT_1000607c
#define DAT_1000607c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x21f3U)))
#undef DAT_10006080
#define DAT_10006080 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x21f7U)))
#undef DAT_10006094
#define DAT_10006094 (*(uint16_t *)(((uintptr_t)pf_module_state + 0x220bU)))
#undef DAT_10006096
#define DAT_10006096 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x220dU)))
#undef DAT_100060a4
#define DAT_100060a4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x221bU)))
#define local_20 (*(uint *)(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100039c2
 */

undefined4 recovered_100039c2(int param_1,uint param_2,int param_3)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  int *device;
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  uint in_ECX;
  uint in_EDX;
  bool bVar4;

  if ((((param_2 != 0) && (param_1 != 0)) && (in_ECX < DAT_10005000)) &&
     (param_2 <= (&DAT_1000607c)[in_ECX * 0x1c00] - in_EDX &&
      in_EDX <= (uint)(&DAT_1000607c)[in_ECX * 0x1c00])) {
    device = &DAT_10006000 + in_ECX * 0x1c00;
    local_20 = in_EDX;
    if ((&DAT_100060a4)[in_ECX * 0x1c00] != 0) {
      recovered_10003410(device);
      uVar1 = (uint)(param_3 == 1);
      do {
        bVar4 = param_2 == 0;
        param_2 = param_2 - 1;
        if (bVar4) {
          uVar3 = 1;
LAB_10003b86:
          *(undefined4 *)(&DAT_10006080 + in_ECX * 0x7000) = 0;
          return uVar3;
        }
        uVar2 = recovered_10003b98(device,local_20,(void *)param_1,uVar1);
        if (uVar2 == 0) {
          if ((((((&DAT_100060a4)[in_ECX * 0x1c00] != 0) && (*device != 0)) &&
               ((uVar2 = recovered_10002c10(device,6), uVar2 != 0 &&
                ((uVar2 = recovered_10002d4b((int *)*device,10), uVar2 != 0 &&
                 (uVar2 = recovered_10002c10(device,2), uVar2 != 0)))))) &&
              (uVar2 = recovered_10002d4b((int *)*device,2000), uVar2 != 0)) &&
             (((uVar2 = recovered_10002d79(device), uVar2 != 0 &&
               (uVar2 = recovered_10002dec(device,(uint)*(byte *)(&DAT_10006094 + in_ECX * 0x3800)),
               uVar2 != 0)) && (uVar2 = recovered_10002e42(device), uVar2 != 0)))) {
            (&DAT_10006096)[in_ECX * 0x7000] = 1;
            uVar2 = recovered_10003b98(device,local_20,(void *)param_1,uVar1);
            if (uVar2 != 0) goto LAB_10003b0d;
          }
          recovered_10003d4b(uVar1);
          uVar3 = 0;
          goto LAB_10003b86;
        }
LAB_10003b0d:
        local_20 = local_20 + 1;
        param_1 = param_1 + 0x200;
      } while( true );
    }
    do {
      if (param_2 == 0) {
        return 1;
      }
      uVar1 = 0x10;
      if (param_2 < 0x10) {
        uVar1 = param_2;
      }
      uVar2 = recovered_10003435(device,param_3,local_20,(void *)param_1,uVar1);
      local_20 = local_20 + uVar1;
      param_2 = param_2 - uVar1;
      param_1 = param_1 + uVar1 * 0x200;
    } while (uVar2 != 0);
  }
  return 0;
}

#undef DAT_10005000
#undef DAT_10006000
#undef DAT_1000607c
#undef DAT_10006080
#undef DAT_10006094
#undef DAT_10006096
#undef DAT_100060a4
#undef local_20

#define local_18 (*(uint (*)[6])(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003b98
 */

uint recovered_10003b98(void *device,uint sector,void *data,int writing)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  int iVar3;

  uVar2 = 0;
  if (((((device != (void *)0x0) && (sector < 0x10000000)) && (data != (void *)0x0)) &&
      ((((*(int *)((int)device + 0xa4) != 0 && (uVar1 = recovered_10002c10(device,2), uVar1 != 0))
        && ((uVar1 = recovered_10002dec(device,sector >> 0x18 | (uint)*(byte *)((int)device + 0x94))
            , uVar1 != 0 &&
            ((uVar1 = recovered_10003193(device,2,1,1), uVar1 != 0 &&
             (uVar1 = recovered_10003193(device,3,1,sector), uVar1 != 0)))))) &&
       (uVar1 = recovered_10003193(device,4,1,sector >> 8), uVar1 != 0)))) &&
     (((uVar1 = recovered_10003193(device,5,1,sector >> 0x10), uVar1 != 0 &&
       (uVar1 = recovered_10002ef1(device,(uint)(writing != 0) << 4 | 0x20), uVar1 != 0)) &&
      (uVar1 = recovered_10002f33(device,8,0x21), uVar1 != 0)))) {
    for (iVar3 = -0x200; iVar3 != 0; iVar3 = iVar3 + 2) {
      local_18[0] = 0;
      if (writing == 0) {
        uVar2 = recovered_10002fac(device,0,2,local_18);
        if (uVar2 == 0) goto LAB_10003d3f;
        *(undefined2 *)((int)data + iVar3 + 0x200) = (undefined2)local_18[0];
      }
      else {
        local_18[0] = (uint)*(ushort *)((int)data + iVar3 + 0x200);
        uVar2 = recovered_10003193(device,0,2,local_18[0]);
        if (uVar2 == 0) goto LAB_10003d3f;
      }
    }
    uVar2 = recovered_10002d4b(*(int **)device,1);
    if (uVar2 == 0) {
LAB_10003d3f:
      uVar2 = 0;
    }
    else {
      uVar2 = recovered_1000302a(device);
    }
  }
  return uVar2;
}

#undef local_18

#undef str_10003f7b
#define str_10003f7b (*(char (*)[1])(((uintptr_t)pf_module_state + 0xf2U)))
#undef str_10003f95
#define str_10003f95 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x10cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003d4b
 */

void recovered_10003d4b(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  int *in_ECX;
  uint in_EDX;

  if ((((in_ECX != (int *)0x0) && (*in_ECX != 0)) && (in_ECX[0x1d] != 0)) && (in_ECX[0x2c] == 0)) {
    in_ECX[0x2c] = 1;
    pcVar1 = str_10003f7b;
    if (param_1 == 0) {
      pcVar1 = str_10003f95;
    }
    recovered_100020a0(pcVar1);
    recovered_100022cb(in_EDX);
    recovered_100022a0();
  }
  return;
}

#undef str_10003f7b
#undef str_10003f95

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003dcd
 */

undefined8 recovered_10003dcd(uint param_1,uint param_2,uint param_3)

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
    if (0x3f < param_3) goto LAB_10003e08;
    bVar2 = (byte)param_3;
    if (0x1f < param_3) {
      uVar3 = param_1 << (bVar2 & 0x1f);
      uVar1 = 0;
      goto LAB_10003e08;
    }
    uVar3 = param_1 >> 0x20 - (bVar2 & 0x1f);
    param_1 = param_1 << (bVar2 & 0x1f);
    uVar3 = param_2 << (bVar2 & 0x1f) | uVar3;
  }
  uVar1 = param_1;
LAB_10003e08:
  return CONCAT44(uVar3,uVar1);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003e0f
 */

undefined8 recovered_10003e0f(uint param_1,uint param_2,uint param_3)

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
 * Address: 0x10003e53
 */

undefined8 recovered_10003e53(uint param_1,uint param_2,uint param_3)

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
