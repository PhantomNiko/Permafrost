/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_10006000
#define DAT_10006000 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x504U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001064
 */

void * recovered_10001064(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return &DAT_10006000;
}

#undef DAT_10006000

#undef DAT_10001001
#define DAT_10001001 (*(uint8_t *)(0x10001001U))
#undef DAT_1000601c
#define DAT_1000601c (*(int * *)(((uintptr_t)pf_module_state + 0x520U)))
#undef DAT_10006020
#define DAT_10006020 (*(uint *)(((uintptr_t)pf_module_state + 0x524U)))
#undef DAT_10006062
#define DAT_10006062 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x566U)))
#undef DAT_100060b4
#define DAT_100060b4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5b8U)))
#undef str_10005d85
#define str_10005d85 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x289U)))
#undef str_10005da0
#define str_10005da0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2a4U)))
#undef str_10005dad
#define str_10005dad (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2b1U)))
#undef str_10005dcf
#define str_10005dcf (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2d3U)))
#undef str_10005df0
#define str_10005df0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2f4U)))
#define local_218 (*(undefined * *)(pf_stack_frame + 24))
#define local_200 (*(undefined4 *)(pf_stack_frame + 48))
#define local_1fc (*(uint *)(pf_stack_frame + 52))
#define local_1f8 (*(code * *)(pf_stack_frame + 56))
#define local_1f4 (*(code * *)(pf_stack_frame + 60))
#define local_1f0 (*(code * *)(pf_stack_frame + 64))
#define local_1ec (*(code * *)(pf_stack_frame + 68))
#define local_1e8 (*(code * *)(pf_stack_frame + 72))
#define local_1e4 (*(undefined4 *)(pf_stack_frame + 76))
#define local_1e0 (*(undefined4 *)(pf_stack_frame + 80))
#define local_1dc (*(undefined4 *)(pf_stack_frame + 84))
#define local_1d8 (*(undefined4 *)(pf_stack_frame + 88))
#define local_1d4 (*(undefined4 *)(pf_stack_frame + 92))
#define local_1d0 (*(undefined4 *)(pf_stack_frame + 96))
#define local_1cc (*(undefined4 *)(pf_stack_frame + 100))
#define local_1c8 (*(undefined4 *)(pf_stack_frame + 104))
#define local_1c4 (*(undefined4 *)(pf_stack_frame + 108))
#define local_1bc (*(code * *)(pf_stack_frame + 116))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000107a
 */

uint recovered_1000107a(void *api)

{
  unsigned char pf_stack_frame[592] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  int *piVar6;
  uint uVar7;
  char *pcVar8;
  undefined *puVar9;
  bool bVar10;
  bool bVar11;

  if ((((api != (void *)0x0) && (*(int *)api == 0x54584b57)) && (*(int *)((int)api + 4) == 1100000))
     && ((0xf7 < *(uint *)((int)api + 8) && (DAT_1000601c == (int *)0x0)))) {
    DAT_1000601c = api;
    DAT_10006020 = 0;
    recovered_100013f1();
    if ((*(int *)api == 0x54584b57) &&
       ((0x5f < *(uint *)((int)api + 8) && (*(int *)((int)api + 0x5c) != 0)))) {
      for (iVar1 = 0; iVar1 != 0x100; iVar1 = iVar1 + 1) {
        for (iVar4 = 0; iVar4 != 0x20; iVar4 = iVar4 + 1) {
          iVar2 = recovered_100032a5((byte)iVar4,0,(undefined1 *)&local_1d0);
          if (iVar2 != 0) {
            recovered_1000140a();
            if ((char)local_1c4 < '\0') {
              for (iVar2 = -7; iVar2 != 0; iVar2 = iVar2 + 1) {
                iVar3 = recovered_100032a5((byte)iVar4,(char)iVar2 + '\b',(undefined1 *)&local_200);
                if (iVar3 != 0) {
                  recovered_1000140a();
                }
              }
            }
          }
        }
      }
    }
    if (DAT_10006020 != 0) {
      recovered_100013f1();
      local_1fc = DAT_10006020;
      puVar5 = &DAT_10006062;
      local_218 = (undefined *)0x0;
      uVar7 = DAT_10006020;
      while (bVar10 = uVar7 != 0, uVar7 = uVar7 - 1, bVar10) {
        puVar9 = &DAT_10001001;
        if (((uint)local_218 & 1) == 0) {
          puVar9 = (undefined *)(CONCAT31(0x100010,*puVar5) ^ 1);
        }
        puVar5 = puVar5 + 0xac;
        local_218 = puVar9;
      }
      local_200 = 3;
      local_1f8 = recovered_10002fdc;
      local_1f4 = recovered_10003076;
      local_1f0 = recovered_1000309c;
      bVar10 = false;
      if (((uint)local_218 & 1) == 0) {
        local_1f0 = (code *)0x0;
      }
      local_1ec = recovered_100030c2;
      local_1e8 = recovered_10003138;
      local_1e4 = 0;
      local_1e0 = 0;
      local_1dc = 0;
      local_1d8 = 0;
      local_1d4 = 0;
      piVar6 = &DAT_100060b4;
      uVar7 = DAT_10006020;
      while (bVar11 = uVar7 != 0, uVar7 = uVar7 - 1, bVar11) {
        bVar11 = !bVar10;
        bVar10 = true;
        if (bVar11) {
          bVar10 = *piVar6 != 0;
        }
        piVar6 = piVar6 + 0x2b;
      }
      recovered_100013f1();
      local_1d0 = 0x1bc;
      local_1cc = 1;
      local_1c8 = 0x11;
      local_1c4 = 0x13;
      local_1bc = recovered_1000582e;
      recovered_10003700(str_10005d85);
      recovered_10003700(str_10005da0);
      pcVar8 = str_10005dcf;
      if (bVar10) {
        pcVar8 = str_10005dad;
      }
      recovered_10003700(pcVar8);
      recovered_10003700(str_10005df0);
      if ((((DAT_1000601c != (int *)0x0) && (*DAT_1000601c == 0x54584b57)) &&
          (0xef < (uint)DAT_1000601c[2])) &&
         (((((code *)DAT_1000601c[0x3b] != (code *)0x0 &&
            (iVar1 = (*(code *)DAT_1000601c[0x3b])(&local_1d0), iVar1 != 0)) &&
           ((*(int *)api == 0x54584b57 &&
            ((0xd3 < *(uint *)((int)api + 8) && (*(code **)((int)api + 0xd0) != (code *)0x0)))))) &&
          (iVar1 = (**(code **)((int)api + 0xd0))(&local_200), iVar1 != 0)))) {
        return 1;
      }
    }
    for (uVar7 = 0; uVar7 < DAT_10006020; uVar7 = uVar7 + 1) {
      recovered_10003232();
    }
    DAT_10006020 = 0;
    DAT_1000601c = (int *)0x0;
  }
  return 0;
}

#undef DAT_10001001
#undef DAT_1000601c
#undef DAT_10006020
#undef DAT_10006062
#undef DAT_100060b4
#undef str_10005d85
#undef str_10005da0
#undef str_10005dad
#undef str_10005dcf
#undef str_10005df0
#undef local_218
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
 * Address: 0x100013f1
 */

void recovered_100013f1(void)

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


#undef DAT_10005c4e
#define DAT_10005c4e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x152U)))
#undef DAT_10005c50
#define DAT_10005c50 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x154U)))
#undef DAT_10005c6a
#define DAT_10005c6a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x16eU)))
#undef DAT_10005c6c
#define DAT_10005c6c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x170U)))
#undef DAT_10005c71
#define DAT_10005c71 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x175U)))
#undef DAT_10005c74
#define DAT_10005c74 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x178U)))
#undef DAT_10005c76
#define DAT_10005c76 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17aU)))
#undef DAT_10005f70
#define DAT_10005f70 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x474U)))
#undef DAT_10005f71
#define DAT_10005f71 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x475U)))
#undef DAT_10005f72
#define DAT_10005f72 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x476U)))
#undef DAT_10005f98
#define DAT_10005f98 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x49cU)))
#undef DAT_10005fa8
#define DAT_10005fa8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4acU)))
#undef DAT_1000601c
#define DAT_1000601c (*(int * *)(((uintptr_t)pf_module_state + 0x520U)))
#undef DAT_10006020
#define DAT_10006020 (*(uint *)(((uintptr_t)pf_module_state + 0x524U)))
#undef DAT_10006024
#define DAT_10006024 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x528U)))
#undef DAT_10006025
#define DAT_10006025 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x529U)))
#undef DAT_10006026
#define DAT_10006026 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x52aU)))
#undef DAT_10006038
#define DAT_10006038 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x53cU)))
#undef DAT_1000603c
#define DAT_1000603c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x540U)))
#undef DAT_10006040
#define DAT_10006040 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x544U)))
#undef DAT_10006050
#define DAT_10006050 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x554U)))
#undef DAT_10006058
#define DAT_10006058 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x55cU)))
#undef DAT_1000605c
#define DAT_1000605c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x560U)))
#undef DAT_10006060
#define DAT_10006060 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x564U)))
#undef DAT_10006061
#define DAT_10006061 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x565U)))
#undef DAT_10006062
#define DAT_10006062 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x566U)))
#undef DAT_10006064
#define DAT_10006064 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x568U)))
#undef DAT_10006068
#define DAT_10006068 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x56cU)))
#undef DAT_1000606c
#define DAT_1000606c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x570U)))
#undef DAT_10006078
#define DAT_10006078 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x57cU)))
#undef DAT_1000607c
#define DAT_1000607c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x580U)))
#undef DAT_10006084
#define DAT_10006084 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x588U)))
#undef DAT_100060a4
#define DAT_100060a4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5a8U)))
#undef DAT_100060a8
#define DAT_100060a8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5acU)))
#undef DAT_100060ac
#define DAT_100060ac (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5b0U)))
#undef DAT_100060b0
#define DAT_100060b0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5b4U)))
#undef DAT_100060b4
#define DAT_100060b4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5b8U)))
#undef DAT_100060c0
#define DAT_100060c0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5c4U)))
#undef str_10005b44
#define str_10005b44 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x48U)))
#undef str_10005b5d
#define str_10005b5d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x61U)))
#undef str_10005b75
#define str_10005b75 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x79U)))
#undef str_10005bb6
#define str_10005bb6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xbaU)))
#undef str_10005be9
#define str_10005be9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xedU)))
#define local_4b4 (*(char * *)(pf_stack_frame + 28))
#define local_4b0 (*(uint *)(pf_stack_frame + 32))
#define local_4ac (*(uint * *)(pf_stack_frame + 36))
#define local_4a8 (*(uint *)(pf_stack_frame + 40))
#define local_4a4 (*(uint *)(pf_stack_frame + 44))
#define local_4a0 (*(uint *)(pf_stack_frame + 48))
#define local_49c (*(uint *)(pf_stack_frame + 52))
#define local_498 (*(int * *)(pf_stack_frame + 56))
#define local_494 (*(uint *)(pf_stack_frame + 60))
#define local_490 (*(int *)(pf_stack_frame + 64))
#define local_48c (*(uint *)(pf_stack_frame + 68))
#define local_488 (*(uint *)(pf_stack_frame + 72))
#define local_484 (*(byte * *)(pf_stack_frame + 76))
#define local_480 (*(uint *)(pf_stack_frame + 80))
#define local_47c (*(uint *)(pf_stack_frame + 84))
#define local_478 (*(uint *)(pf_stack_frame + 88))
#define local_474 (*(uint (*)[285])(pf_stack_frame + 92))
#define local_414 (*(uint (*)[261])(pf_stack_frame + 188))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000140a
 */

void recovered_1000140a(void)

{
  unsigned char pf_stack_frame[1264] __attribute__((aligned(16))) = {0};

  uint *puVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  uint uVar5;
  int extraout_EAX = 0;
  int extraout_EAX_00 = 0;
  int extraout_EAX_01 = 0;
  int extraout_EAX_02 = 0;
  int extraout_EAX_03 = 0;
  undefined3 extraout_var_01 = 0;
  int extraout_EAX_04 = 0;
  int extraout_EAX_05 = 0;
  int extraout_EAX_06 = 0;
  int extraout_EAX_07 = 0;
  int extraout_EAX_08 = 0;
  int extraout_EAX_09 = 0;
  int extraout_EAX_10 = 0;
  int extraout_EAX_11 = 0;
  int extraout_EAX_12 = 0;
  int extraout_EAX_13 = 0;
  int extraout_EAX_14 = 0;
  undefined3 extraout_var_02 = 0;
  int extraout_EAX_15 = 0;
  int extraout_EAX_16 = 0;
  int extraout_EAX_17 = 0;
  int extraout_EAX_18 = 0;
  int extraout_EAX_19 = 0;
  int extraout_EAX_20 = 0;
  int extraout_EAX_21 = 0;
  int extraout_EAX_22 = 0;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined3 extraout_var_03 = 0;
  undefined3 extraout_var_04 = 0;
  int *in_ECX;
  int iVar9;
  undefined4 uVar10;
  byte *in_EDX;
  uint uVar11;
  uint uVar12;
  byte *pbVar13;
  undefined4 *puVar14;
  byte bVar15;
  undefined8 uVar16;

  uVar2 = DAT_10006020;
  bVar15 = 0;
  if (*(short *)(in_EDX + 4) != 0x10ec) {
    return;
  }
  if (*(short *)(in_EDX + 6) != 0x525a) {
    return;
  }
  if (3 < DAT_10006020) {
    return;
  }
  iVar4 = DAT_10006020 * 0xac;
  local_498 = in_ECX;
  recovered_100013f1();
  pbVar13 = in_EDX;
  puVar14 = (undefined4 *)(&DAT_10006024 + iVar4);
  for (iVar9 = 0xb; iVar9 != 0; iVar9 = iVar9 + -1) {
    *puVar14 = *(undefined4 *)pbVar13;
    pbVar13 = pbVar13 + (uint)bVar15 * -8 + 4;
    puVar14 = puVar14 + (uint)bVar15 * -2 + 1;
  }
  *(undefined4 *)(&DAT_10006068 + iVar4) = 1;
  *(undefined4 *)(&DAT_1000606c + iVar4) = 0x40000;
  local_480 = 0;
  local_484 = in_EDX;
  iVar9 = recovered_10003422(in_EDX[1],in_EDX[2],4,2,(int)&local_480);
  if (iVar9 == 0) {
    recovered_10003486();
    return;
  }
  *(short *)(&DAT_10006084 + iVar4) = (short)local_480;
  local_4ac = (uint *)(local_480 & 0xfbf9 | 0x402);
  bVar3 = recovered_100035db();
  if (CONCAT31(extraout_var,bVar3) == 0) goto LAB_1000153f;
  *(undefined4 *)(&DAT_10006068 + iVar4) = 2;
  local_414[0] = 0;
  local_474[0] = 0;
  *(undefined4 *)(&DAT_1000606c + iVar4) = 0x60000;
  iVar9 = recovered_10003422((&DAT_10006025)[iVar4],(&DAT_10006026)[iVar4],6,2,(int)local_414);
  if (local_414[0] == 0xffff || iVar9 == 0) goto LAB_1000153f;
  if ((local_414[0] & 0x10) != 0) {
    *(undefined4 *)(&DAT_1000606c + iVar4) = 0x340000;
    iVar9 = recovered_10003422((&DAT_10006025)[iVar4],(&DAT_10006026)[iVar4],0x34,1,(int)local_474);
    if (iVar9 == 0) goto LAB_1000153f;
    for (uVar12 = 0; (local_474[0] != 0 && (uVar12 < 0x30)); uVar12 = uVar12 + 1) {
      local_4b0 = 0;
      *(uint *)(&DAT_1000606c + iVar4) = local_474[0] << 0x10;
      local_4a8 = 0;
      if ((0xbc < local_474[0] - 0x40) ||
         (((local_474[0] & 3) != 0 ||
          (iVar9 = recovered_10003422((&DAT_10006025)[iVar4],(&DAT_10006026)[iVar4],
                                      (short)local_474[0],2,(int)&local_4b0), iVar9 == 0)))) {
LAB_10001790:
        uVar12 = local_4a8;
        goto LAB_1000179c;
      }
      if ((char)local_4b0 == '\x01') {
        local_4a0 = 0;
        uVar12 = local_474[0] + 4;
        *(uint *)(&DAT_1000606c + iVar4) = uVar12 * 0x10000;
        local_4a8 = 0;
        if (local_474[0] < 0xf9) {
          local_4a4 = uVar12 & 0xffff;
          local_49c = uVar12 * 0x10000;
          iVar9 = recovered_10003422((&DAT_10006025)[iVar4],(&DAT_10006026)[iVar4],(short)uVar12,2,
                                     (int)&local_4a0);
          if (local_4a0 != 0xffff && iVar9 != 0) {
            *(uint *)(&DAT_1000606c + iVar4) = *(uint *)(&DAT_1000606c + iVar4) | local_4a0;
            if ((local_4a0 & 3) != 0) {
              iVar9 = recovered_10003877((&DAT_10006025)[iVar4],(&DAT_10006026)[iVar4],
                                         (short)local_4a4,local_4a0 & 0xffff7ffc);
              if (iVar9 == 0) goto LAB_10001790;
              recovered_100038ce();
            }
            iVar9 = recovered_10003422((&DAT_10006025)[iVar4],(&DAT_10006026)[iVar4],
                                       (short)local_4a4,2,(int)&local_4a0);
            if (iVar9 != 0) {
              *(uint *)(&DAT_1000606c + iVar4) = local_49c | local_4a0;
              local_4a8 = (uint)((local_4a0 & 3) == 0);
            }
          }
        }
        goto LAB_10001790;
      }
      local_474[0] = local_4b0 >> 8 & 0xff;
    }
    uVar12 = (uint)(local_474[0] == 0);
LAB_1000179c:
    if (uVar12 == 0) goto LAB_1000153f;
  }
  bVar3 = recovered_100035db();
  if (CONCAT31(extraout_var_00,bVar3) == 0) goto LAB_1000153f;
  *(undefined4 *)(&DAT_10006068 + iVar4) = 5;
  *(undefined4 *)(&DAT_1000606c + iVar4) = 0x140000;
  local_4ac = (uint *)(&DAT_1000603c + iVar4);
  iVar9 = recovered_10003422(local_484[1],local_484[2],0x14,4,(int)local_4ac);
  if (iVar9 == 0) goto LAB_1000153f;
  *(uint *)(&DAT_1000606c + iVar4) = *(uint *)(&DAT_1000603c + iVar4);
  if (((*(uint *)(&DAT_1000603c + iVar4) & 7) == 4) &&
     (iVar9 = recovered_10003422(local_484[1],local_484[2],0x18,4,(int)(&DAT_10006040 + iVar4)),
     iVar9 == 0)) {
    *(undefined4 *)(&DAT_1000606c + iVar4) = 0x180000;
    goto LAB_1000153f;
  }
  local_474[0] = 0;
  if (((*(uint *)(&DAT_10006038 + iVar4) & 7) == 4) ||
     (uVar12 = *local_4ac, (uVar12 & 1) != 0 || uVar12 == 0)) goto LAB_1000153f;
  local_4b0 = uVar12;
  recovered_10003422((&DAT_10006025)[iVar4],(&DAT_10006026)[iVar4],0x14,4,(int)&local_4b0);
  uVar12 = 0;
  if ((local_4b0 & 7) == 4) {
    local_474[0] = *(uint *)(&DAT_10006040 + iVar4);
    recovered_10003422((&DAT_10006025)[iVar4],(&DAT_10006026)[iVar4],0x18,4,(int)local_474);
    uVar12 = local_474[0];
  }
  uVar5 = 0xfffffffc;
  if ((local_4b0 & 1) == 0) {
    uVar5 = 0xfffffff0;
  }
  uVar5 = uVar5 & local_4b0;
  if (uVar5 == 0 && uVar12 == 0) goto LAB_1000153f;
  puVar1 = (uint *)(&DAT_10006050 + iVar4);
  *puVar1 = 0;
  local_414[0] = 0;
  if ((local_498 == (int *)0x0) || (*local_498 != 0x54584b57)) goto LAB_1000153f;
  if (((uint)local_498[2] < 0xbc) || ((code *)local_498[0x2e] == (code *)0x0)) {
    if ((((uint)local_498[2] < 0x68 || uVar12 != 0) || ((code *)local_498[0x19] == (code *)0x0)) ||
       (iVar9 = (*(code *)local_498[0x19])(uVar5,0,0x1000,local_414), iVar9 == 0))
    goto LAB_1000153f;
    *puVar1 = local_414[0];
  }
  else {
    iVar9 = (*(code *)local_498[0x2e])(uVar5,uVar12,0x1000,puVar1);
    if (iVar9 == 0) goto LAB_1000153f;
  }
  *(undefined4 *)(&DAT_10006068 + iVar4) = 6;
  *(undefined4 *)(&DAT_1000606c + iVar4) = 0x180000;
  iVar9 = recovered_1000369a(0);
  if (iVar9 == 0) goto LAB_1000153f;
  *(undefined4 *)(&DAT_10006068 + iVar4) = 7;
  *(undefined4 *)(&DAT_1000606c + iVar4) = 0x40000;
  iVar9 = recovered_1000369a(0x10000000);
  if (iVar9 == 0) goto LAB_1000153f;
  *(undefined4 *)(&DAT_10006068 + iVar4) = 8;
  *(undefined4 *)(&DAT_1000606c + iVar4) = 0xc0000;
  iVar9 = recovered_1000369a(0x10000000);
  if (iVar9 == 0) goto LAB_1000153f;
  local_414[0] = 0;
  local_474[0] = 0;
  local_4b0 = local_4b0 & 0xffffff00;
  *(undefined4 *)(&DAT_10006068 + iVar4) = 9;
  recovered_100038fc(3,0);
  if (extraout_EAX == 0) goto LAB_1000153f;
  recovered_100038ce();
  *(undefined4 *)(&DAT_10006068 + iVar4) = 10;
  recovered_100038fc(3,0);
  if (extraout_EAX_00 == 0) goto LAB_1000153f;
  *(undefined4 *)(&DAT_10006068 + iVar4) = 0xb;
  recovered_100038fc(0x3f,0x30);
  if (extraout_EAX_01 == 0) goto LAB_1000153f;
  recovered_100038ce();
  *(undefined4 *)(&DAT_10006068 + iVar4) = 0xc;
  recovered_100038fc(0x80,0x80);
  if (extraout_EAX_02 == 0) goto LAB_1000153f;
  *(undefined4 *)(&DAT_10006068 + iVar4) = 0xd;
  recovered_100038fc(0x80,0x80);
  if (extraout_EAX_03 == 0) goto LAB_1000153f;
  recovered_10003922();
  recovered_100038ce();
  *(undefined4 *)(&DAT_10006068 + iVar4) = 0xe;
  bVar3 = recovered_100039aa(0x1e);
  if (CONCAT31(extraout_var_01,bVar3) == 0) goto LAB_1000153f;
  *(undefined4 *)(&DAT_10006068 + iVar4) = 0xf;
  recovered_100038fc(0xff,0xb);
  if (extraout_EAX_04 == 0) goto LAB_1000153f;
  recovered_100038ce();
  recovered_100038fc(3,0);
  if (extraout_EAX_05 == 0) goto LAB_1000153f;
  iVar9 = recovered_1000369a(0x2c00000);
  if (iVar9 == 0) {
    *(undefined4 *)(&DAT_1000606c + iVar4) = 0x140000;
    goto LAB_1000153f;
  }
  *(undefined4 *)(&DAT_10006068 + iVar4) = 0x10;
  iVar9 = recovered_10003422((&DAT_10006025)[iVar4],(&DAT_10006026)[iVar4],0x724,4,(int)local_414);
  uVar12 = 3;
  if ((iVar9 != 0) && ((local_414[0] & 0x1000000) == 0)) {
    iVar9 = recovered_10003422((&DAT_10006025)[iVar4],(&DAT_10006026)[iVar4],0x814,4,(int)local_474)
    ;
    uVar5 = local_474[0];
    if (iVar9 != 0) {
      bVar15 = (byte)(local_474[0] >> 0x12) & 0x30;
      if ((local_474[0] >> 0xe & 1) != 0) {
        bVar15 = 0x30;
      }
      recovered_100038fc(0x30,bVar15);
      if ((extraout_EAX_06 == 0) ||
         (recovered_100038fc(0x40,(byte)(local_414[0] >> 0x13) & 0x40), extraout_EAX_07 == 0))
      goto LAB_1000153f;
      uVar12 = uVar5 >> 5 & 3;
    }
  }
  recovered_100038fc(0x52,0);
  if (extraout_EAX_08 == 0) goto LAB_1000153f;
  iVar9 = uVar12 * 3;
  recovered_100038fc(0xff,(&DAT_10005f70)[iVar9]);
  if (((((extraout_EAX_09 == 0) ||
        (recovered_100038fc(0xff,(&DAT_10005f71)[iVar9]), extraout_EAX_10 == 0)) ||
       (recovered_100038fc(0xff,(&DAT_10005f72)[iVar9]), extraout_EAX_11 == 0)) ||
      ((recovered_100038fc(3,0), extraout_EAX_12 == 0 ||
       (recovered_100038fc(3,1), extraout_EAX_13 == 0)))) ||
     ((recovered_100039fb((byte *)&local_4b0), extraout_EAX_14 == 0 ||
      (((local_4b0 & 0xf) == 0 &&
       (bVar3 = recovered_100039aa(7), CONCAT31(extraout_var_02,bVar3) == 0)))))) goto LAB_1000153f;
  *(undefined4 *)(&DAT_10006068 + iVar4) = 0x11;
  iVar9 = recovered_10003a25();
  if (iVar9 == 0) goto LAB_1000153f;
  *(undefined4 *)(&DAT_10006068 + iVar4) = 0x12;
  recovered_100038fc(4,4);
  if (((extraout_EAX_15 == 0) || (recovered_100038fc(3,2), extraout_EAX_16 == 0)) ||
     (recovered_100038fc(6,2), extraout_EAX_17 == 0)) goto LAB_1000153f;
  recovered_100038ce();
  recovered_100038fc(3,0);
  if ((extraout_EAX_18 == 0) || (recovered_100038fc(6,6), extraout_EAX_19 == 0)) goto LAB_1000153f;
  recovered_100038ce();
  recovered_100038fc(4,4);
  if ((extraout_EAX_20 == 0) || (recovered_100038fc(0x80,0x80), extraout_EAX_21 == 0))
  goto LAB_1000153f;
  recovered_100038ce();
  recovered_100038fc(0x80,0);
  if (extraout_EAX_22 == 0) goto LAB_1000153f;
  *(undefined4 *)(&DAT_10006068 + iVar4) = 0x13;
  iVar9 = recovered_10003c13();
  if (iVar9 == 0) goto LAB_1000153f;
  local_474[0] = 0;
  local_4b0 = 0;
  uVar12 = recovered_10004272(0,4,0,0);
  if (uVar12 == 0) goto LAB_1000153f;
  uVar12 = recovered_10004272(0x1aa,1,local_474,0);
  if (uVar12 == 0) {
    if ((((&DAT_1000606c)[iVar4] & 1) == 0) || (iVar9 = recovered_10003c13(), iVar9 == 0))
    goto LAB_1000153f;
    recovered_10003ee2();
    PF_PART1(local_4b4, 0) = 0;
    uVar12 = recovered_10004272(0,4,0,0);
    if (uVar12 == 0) goto LAB_1000153f;
    uVar12 = 0x300000;
LAB_100020c3:
    iVar9 = 1000;
    while (bVar3 = iVar9 != 0, iVar9 = iVar9 + -1, bVar3) {
      iVar6 = recovered_100043e5(0,0);
      if ((iVar6 == 0) || (uVar5 = recovered_10004272(uVar12,5,&local_4b0,0), uVar5 == 0))
      goto LAB_1000153f;
      if (SBORROW4(0,local_4b0 & 0x81000000) && (local_4b0 & 0x300000) != 0) {
        bVar3 = true;
        goto LAB_10002151;
      }
      recovered_100038ce();
    }
    bVar3 = (local_4b0 & 0x300000) != 0;
LAB_10002151:
    if ((((!(bool)(bVar3 ^ 1U | !SBORROW4(0,local_4b0 & 0x81000000))) &&
         (uVar12 = recovered_10004272(0,2,0,iVar4 + ((uintptr_t)pf_module_state+0x58aU)), uVar12 != 0)) &&
        (uVar12 = recovered_10004272(0,1,local_474,0), uVar12 != 0)) &&
       (0xffff < local_474[0] && (local_474[0] & 0xe000) == 0)) {
      *(uint *)(&DAT_10006064 + iVar4) = local_474[0] & 0xffff0000;
      uVar5 = recovered_10004272(local_474[0] & 0xffff0000,2,0,(int)local_414);
      uVar12 = local_4b0;
      if (uVar5 == 0) goto LAB_1000153f;
      local_4ac = (uint *)recovered_1000471a(0x7e);
      local_4a8 = recovered_1000471a(0x50);
      local_4a4 = recovered_1000471a(0x16);
      uVar5 = recovered_1000471a(0x54);
      uVar7 = recovered_1000471a(0x60);
      uVar11 = uVar7 >> 3 & 0xf;
      iVar9 = 0;
      if (uVar11 != 0 && ((uVar7 & 7) < 4 && -1 < (char)uVar7)) {
        iVar9 = (uint)(byte)(&DAT_10005f98)[uVar11] * *(int *)(&DAT_10005fa8 + (uVar7 & 7) * 4);
      }
      if (((uVar5 & 4) == 0) || (iVar9 == 0)) goto LAB_1000153f;
      PF_PART1(local_4b4, 0) = (byte)local_4b4 & (byte)(uVar12 >> 0x1e) & 1;
      if (local_4ac == (uint *)0x1) {
        if ((local_4a8 == 9 & (byte)local_4b4) != 1) goto LAB_1000153f;
        uVar12 = recovered_1000471a(0x30);
        uVar16 = CONCAT44((uVar12 >> 0x16) + (uint)(0xfffffbff < uVar12 * 0x400),
                          uVar12 * 0x400 + 0x400);
      }
      else {
        if (((local_4ac != (uint *)0x0) || (local_4a8 - 0xc < 0xfffffffd || (byte)local_4b4 != 0))
           || ((9 < local_4a8 && (iVar6 = recovered_1000471a(0x4f), iVar6 == 0))))
        goto LAB_1000153f;
        iVar6 = recovered_1000471a(0x3e);
        iVar8 = recovered_1000471a(0x2f);
        uVar16 = recovered_10005a40(iVar6 + 1U,(uint)(iVar6 + 1U == 0),
                                    (uint)(byte)(((char)local_4a8 + (char)iVar8) - 7));
      }
      iVar8 = (int)((ulonglong)uVar16 >> 0x20);
      local_49c = CONCAT31(PF_PART3(local_49c, 1),iVar8 != 0);
      iVar6 = recovered_1000471a(0xc);
      local_4a8 = CONCAT31(PF_PART3(local_4a8, 1),1);
      if ((iVar6 == 0) && (0xfffffffc < local_4a4 - 0xc && (uVar5 & 0x10) != 0)) {
        local_4a8 = CONCAT31(PF_PART3(local_4a8, 1),local_4a4 != 9 && local_4ac == (uint *)0x1);
      }
      (&DAT_10006058)[uVar2 * 0x2b] = -(uint)(iVar8 != 0) | (uint)uVar16;
      *(int *)(&DAT_1000605c + iVar4) = iVar9;
      (&DAT_10006060)[iVar4] = (undefined1)local_49c;
      (&DAT_10006061)[iVar4] = (byte)local_4b4;
      (&DAT_10006062)[iVar4] = (undefined1)local_4a8;
      iVar9 = recovered_100043e5(*(uint *)(&DAT_10006064 + iVar4),1);
      if ((iVar9 == 0) ||
         (((((&DAT_10006061)[iVar4] == '\0' && (iVar9 = recovered_100043e5(0x200,0), iVar9 == 0)) ||
           (iVar9 = recovered_10003a25(), iVar9 == 0)) || (iVar9 = recovered_1000443d(), iVar9 == 0)
          ))) goto LAB_1000153f;
      local_4a0 = 0;
      iVar9 = recovered_10003c13();
      if ((iVar9 == 0) || (iVar9 = recovered_1000369a(0x2000000), iVar9 == 0)) goto LAB_1000153f;
      (&DAT_10006062)[iVar4] = (&DAT_10006062)[iVar4] | (byte)(local_4a0 >> 0x13) & 1;
      *(undefined4 *)(&DAT_10006078 + iVar4) = 1;
      (&DAT_1000607c)[uVar2 * 0x2b] = 1;
      local_490 = 0;
      local_478 = 0;
      local_47c = 0;
      local_48c = 0;
      recovered_10004785();
      if (DAT_1000601c == (int *)0x0) {
        uVar12 = 0;
LAB_10002616:
        *(undefined4 *)(&DAT_10006068 + iVar4) = 0x163;
      }
      else {
        uVar12 = DAT_1000601c[2];
        if (((uVar12 < 0x7c || *DAT_1000601c != 0x54584b57) || (DAT_1000601c[0x1e] == 0)) ||
           ((DAT_1000601c[0xd] == 0 ||
            (((DAT_1000601c[0xe] == 0 || (DAT_1000601c[0x1c] == 0)) || (DAT_1000601c[0x1d] == 0)))))
           ) goto LAB_10002616;
        local_414[0] = 0;
        local_474[0] = 0;
        local_4b0 = 0;
        iVar9 = recovered_10003422((&DAT_10006025)[iVar4],(&DAT_10006026)[iVar4],4,2,(int)local_414)
        ;
        if (iVar9 == 0) {
          *(undefined4 *)(&DAT_10006068 + iVar4) = 0x155;
LAB_10002edb:
          *(undefined4 *)(&DAT_1000606c + iVar4) = 0x40000;
          goto LAB_10002624;
        }
        if ((local_414[0] & 0x406) != 0x402) {
          uVar12 = local_414[0] | 0x40000;
          *(undefined4 *)(&DAT_10006068 + iVar4) = 0x156;
          goto LAB_10002621;
        }
        iVar9 = recovered_10003422((&DAT_10006025)[iVar4],(&DAT_10006026)[iVar4],6,2,(int)local_474)
        ;
        if (iVar9 == 0) {
          *(undefined4 *)(&DAT_10006068 + iVar4) = 0x157;
          *(undefined4 *)(&DAT_1000606c + iVar4) = 0x60000;
          goto LAB_10002624;
        }
        if (local_474[0] == 0xffff) {
          *(undefined4 *)(&DAT_10006068 + iVar4) = 0x158;
          *(undefined4 *)(&DAT_1000606c + iVar4) = 0x6ffff;
          goto LAB_10002624;
        }
        if ((local_474[0] & 0x10) != 0) {
          iVar9 = recovered_10003422((&DAT_10006025)[iVar4],(&DAT_10006026)[iVar4],0x34,1,
                                     (int)&local_4b0);
          if (iVar9 == 0) {
            *(undefined4 *)(&DAT_10006068 + iVar4) = 0x159;
            *(undefined4 *)(&DAT_1000606c + iVar4) = 0x340000;
            goto LAB_10002624;
          }
          if (local_4b0 == 0) {
            uVar12 = local_474[0] << 0x10;
            *(undefined4 *)(&DAT_10006068 + iVar4) = 0x15a;
          }
          else {
            for (local_4a8 = 0; (uVar12 = local_4b0, local_4b0 != 0 && (local_4a8 < 0x30));
                local_4a8 = local_4a8 + 1) {
              local_4a0 = 0;
              if ((0xbc < local_4b0 - 0x40) || ((local_4b0 & 3) != 0)) {
                *(undefined4 *)(&DAT_10006068 + iVar4) = 0x15b;
                goto LAB_10002621;
              }
              iVar9 = recovered_10003422((&DAT_10006025)[iVar4],(&DAT_10006026)[iVar4],
                                         (short)local_4b0,2,(int)&local_4a0);
              if (iVar9 == 0) {
                *(undefined4 *)(&DAT_10006068 + iVar4) = 0x15c;
                uVar12 = local_4b0 << 0x10;
                goto LAB_10002621;
              }
              if (((char)local_4a0 == -1) ||
                 (local_4ac = (uint *)(local_4a0 & 0xff), local_4ac == (uint *)0x0)) {
                *(undefined4 *)(&DAT_10006068 + iVar4) = 0x15c;
                *(uint *)(&DAT_1000606c + iVar4) = local_4b0 << 0x10 | local_4a0;
                goto LAB_10002624;
              }
              if ((char)local_4a0 != '\x11') {
                if ((local_4a0 & 0xff) != 0x10) {
                  if ((local_4a0 & 0xff) == 5) goto LAB_100029ac;
                  goto LAB_10002bc7;
                }
LAB_10002ace:
                local_494 = 0;
                local_488 = 0;
                if (local_4b0 < 0xf5) {
                  uVar12 = local_4b0 + 8;
                  local_4a4 = (uint)(byte)(&DAT_10006025)[iVar4];
                  local_4ac = (uint *)(uVar12 & 0xffff);
                  iVar9 = recovered_10003422((&DAT_10006025)[iVar4],(&DAT_10006026)[iVar4],
                                             (short)uVar12,2,(int)&local_494);
                  if (iVar9 == 0) {
                    uVar12 = uVar12 * 0x10000;
                  }
                  else {
                    if (local_494 != 0xffff) {
                      if ((local_494 >> 0xb & 1) != 0) {
                        local_4a4 = (uint)(byte)(&DAT_10006025)[iVar4];
                        iVar9 = recovered_10003877((&DAT_10006025)[iVar4],(&DAT_10006026)[iVar4],
                                                   (short)local_4ac,local_494 & 0xfffff7ff);
                        if (iVar9 == 0) {
                          uVar10 = 0x175;
                          uVar12 = uVar12 * 0x10000 | local_494;
                          goto LAB_10002cdd;
                        }
                      }
                      iVar9 = recovered_10003422((&DAT_10006025)[iVar4],(&DAT_10006026)[iVar4],
                                                 (short)local_4ac,2,(int)&local_488);
                      if (iVar9 == 0) {
                        uVar10 = 0x176;
                        uVar12 = uVar12 * 0x10000;
                      }
                      else {
                        if ((local_488 >> 0xb & 1) == 0) goto LAB_10002bc7;
                        uVar10 = 0x177;
                        uVar12 = uVar12 * 0x10000 | local_488;
                      }
                      goto LAB_10002cdd;
                    }
                    uVar12 = uVar12 * 0x10000 | 0xffff;
                  }
                  uVar10 = 0x174;
                }
                else {
                  uVar10 = 0x173;
                  uVar12 = local_4b0;
                }
LAB_10002cdd:
                *(undefined4 *)(&DAT_10006068 + iVar4) = uVar10;
                *(uint *)(&DAT_1000606c + iVar4) = uVar12;
                goto LAB_10002624;
              }
LAB_100029ac:
              local_494 = 0;
              local_488 = 0;
              uVar12 = local_4b0 + 2;
              local_49c = (uint)(byte)(&DAT_10006025)[iVar4];
              local_4a4 = uVar12 & 0xffff;
              iVar9 = recovered_10003422((&DAT_10006025)[iVar4],(&DAT_10006026)[iVar4],(short)uVar12
                                         ,2,(int)&local_494);
              if (iVar9 == 0) {
                uVar12 = uVar12 * 0x10000;
                uVar10 = 0x15d;
LAB_10002c90:
                *(undefined4 *)(&DAT_10006068 + iVar4) = uVar10;
                *(uint *)(&DAT_1000606c + iVar4) = uVar12;
                goto LAB_10002624;
              }
              uVar5 = local_494 & 0xfffffffe;
              local_494 = local_494 & 0xffff3fff | 0x4000;
              if (local_4ac == (uint *)0x5) {
                local_494 = uVar5;
              }
              local_49c = (uint)(byte)(&DAT_10006025)[iVar4];
              iVar9 = recovered_10003877((&DAT_10006025)[iVar4],(&DAT_10006026)[iVar4],
                                         (short)local_4a4,local_494);
              if (iVar9 == 0) {
                uVar12 = uVar12 * 0x10000 | local_494;
                uVar10 = 0x15e;
                goto LAB_10002c90;
              }
              local_49c = (uint)(byte)(&DAT_10006025)[iVar4];
              iVar9 = recovered_10003422((&DAT_10006025)[iVar4],(&DAT_10006026)[iVar4],
                                         (short)local_4a4,2,(int)&local_488);
              if (iVar9 == 0) {
                uVar12 = uVar12 * 0x10000;
                uVar10 = 0x15f;
                goto LAB_10002c90;
              }
              if (local_4ac == (uint *)0x5) {
                if ((local_488 & 1) != 0) goto LAB_10002c86;
              }
              else {
                if ((local_488 & 0xc000) != 0x4000) {
LAB_10002c86:
                  uVar12 = local_488 | uVar12 * 0x10000;
                  uVar10 = 0x160;
                  goto LAB_10002c90;
                }
                if (local_4ac == (uint *)0x10) goto LAB_10002ace;
              }
LAB_10002bc7:
              local_4b0 = local_4a0 >> 8 & 0xff;
            }
            if (local_4b0 == 0) goto LAB_10002cec;
            *(undefined4 *)(&DAT_10006068 + iVar4) = 0x161;
          }
          goto LAB_10002621;
        }
LAB_10002cec:
        iVar9 = recovered_10003c13();
        if (iVar9 == 0) {
          *(undefined4 *)(&DAT_10006068 + iVar4) = 0x164;
          goto LAB_10002624;
        }
        bVar3 = recovered_10003d96(&local_478);
        if (CONCAT31(extraout_var_03,bVar3) == 0) {
          *(undefined4 *)(&DAT_10006068 + iVar4) = 0x165;
          goto LAB_10002edb;
        }
        if ((int)local_478 < 0) {
          *(undefined4 *)(&DAT_10006068 + iVar4) = 0x166;
          uVar12 = local_478;
        }
        else {
          bVar3 = recovered_10003d96(&local_47c);
          if (CONCAT31(extraout_var_04,bVar3) == 0) {
            *(undefined4 *)(&DAT_10006068 + iVar4) = 0x167;
            *(undefined4 *)(&DAT_1000606c + iVar4) = 0xc0000;
            goto LAB_10002624;
          }
          if ((int)local_47c < 0) {
            *(undefined4 *)(&DAT_10006068 + iVar4) = 0x168;
            uVar12 = local_47c;
          }
          else {
            if ((local_48c & 0x1000000) == 0) {
LAB_10002da0:
              *(undefined4 *)(&DAT_100060c0 + iVar4) = 1;
              uVar12 = recovered_100047b4();
              *(uint *)(&DAT_100060a4 + iVar4) = uVar12;
              if (uVar12 == 0) {
                recovered_100040a7();
                *(undefined4 *)(&DAT_10006068 + iVar4) = 0x16a;
              }
              else {
                uVar12 = recovered_100047b4();
                *(uint *)(&DAT_100060a8 + iVar4) = uVar12;
                if (uVar12 != 0) {
                  iVar9 = recovered_10004839(*(int *)(&DAT_100060a4 + iVar4),
                                             (int)(&DAT_100060ac + iVar4));
                  if (iVar9 == 0) {
                    recovered_100040a7();
                    *(undefined4 *)(&DAT_10006068 + iVar4) = 0x16c;
LAB_10002fb2:
                    *(undefined4 *)(&DAT_1000606c + iVar4) = 0x1000;
                  }
                  else {
                    uVar12 = *(uint *)(&DAT_100060ac + iVar4);
                    if ((uVar12 - 1 < 0xfffff000) && ((uVar12 & 0xfff) == 0 && local_490 == 0)) {
                      local_490 = 0;
                      iVar9 = recovered_10004839(*(int *)(&DAT_100060a8 + iVar4),
                                                 (int)(&DAT_100060b0 + iVar4));
                      if (iVar9 == 0) {
                        recovered_100040a7();
                        *(undefined4 *)(&DAT_10006068 + iVar4) = 0x16e;
                        goto LAB_10002fb2;
                      }
                      uVar12 = *(uint *)(&DAT_100060b0 + iVar4);
                      if ((uVar12 - 1 < 0xfffff000) && ((uVar12 & 0xfff) == 0 && local_490 == 0)) {
                        recovered_100013f1();
                        recovered_100013f1();
                        (&DAT_100060b4)[uVar2 * 0x2b] = 1;
                        goto LAB_10002624;
                      }
                      recovered_100040a7();
                      *(undefined4 *)(&DAT_10006068 + iVar4) = 0x16f;
                    }
                    else {
                      recovered_100040a7();
                      *(undefined4 *)(&DAT_10006068 + iVar4) = 0x16d;
                    }
                    *(int *)(&DAT_1000606c + iVar4) = local_490;
                  }
                  goto LAB_10002624;
                }
                recovered_100040a7();
                *(undefined4 *)(&DAT_10006068 + iVar4) = 0x16b;
              }
              *(undefined4 *)(&DAT_1000606c + iVar4) = 0x1fff;
              goto LAB_10002624;
            }
            iVar9 = recovered_1000369a(0x1000000);
            if (iVar9 != 0) {
              iVar9 = recovered_10003c13();
              if (iVar9 == 0) {
                *(undefined4 *)(&DAT_10006068 + iVar4) = 0x169;
                goto LAB_10002624;
              }
              if ((local_48c >> 0x18 & 1) == 0) goto LAB_10002da0;
            }
            *(undefined4 *)(&DAT_10006068 + iVar4) = 0x169;
            uVar12 = local_48c;
          }
        }
      }
LAB_10002621:
      *(uint *)(&DAT_1000606c + iVar4) = uVar12;
LAB_10002624:
      if ((&DAT_100060b4)[uVar2 * 0x2b] == 0) {
        local_4b4 = str_10005be9;
        if ((&DAT_10006062)[iVar4] != '\0') {
          local_4b4 = str_10005bb6;
        }
      }
      else {
        local_4b4 = str_10005b75;
      }
      recovered_10003700(str_10005b44);
      recovered_1000377b(&DAT_10005c6a);
      recovered_10003729((uint)*local_484,2);
      recovered_1000377b(&DAT_10005c4e);
      recovered_10003729((uint)local_484[1],2);
      local_4ac = (uint *)&DAT_10005c50;
      recovered_1000377b(&DAT_10005c50);
      recovered_100037c1((uint)local_484[2]);
      recovered_10003700(&DAT_10005c6c);
      recovered_10003729((uint)*local_484,2);
      recovered_1000377b(&DAT_10005c4e);
      recovered_10003729((uint)local_484[1],2);
      recovered_1000377b((char *)local_4ac);
      recovered_100037c1((uint)local_484[2]);
      recovered_1000377b(&DAT_10005c71);
      recovered_10003729((uint)*(ushort *)(local_484 + 4),4);
      recovered_1000377b(&DAT_10005c4e);
      recovered_10003729((uint)*(ushort *)(local_484 + 6),4);
      recovered_1000377b(&DAT_10005c74);
      if (*local_4b4 != '\0') {
        recovered_1000377b(&DAT_10005c76);
        recovered_1000377b(local_4b4);
      }
      if ((code *)local_498[3] != (code *)0x0) {
        (*(code *)local_498[3])(local_474,str_10005b5d,local_414);
      }
      DAT_10006020 = DAT_10006020 + 1;
      return;
    }
  }
  else {
    if ((local_474[0] >> 0x16 & 1) != 0) {
      uVar12 = 0x300000;
      PF_PART1(local_4b4, 0) = 0;
      goto LAB_100020c3;
    }
    if ((local_474[0] & 0xfff) == 0x1aa) {
      uVar12 = 0x40300000;
      PF_PART1(local_4b4, 0) = 1;
      goto LAB_100020c3;
    }
  }
  *(uint *)(&DAT_1000606c + iVar4) = local_474[0];
LAB_1000153f:
  uVar10 = *(undefined4 *)(&DAT_1000606c + iVar4);
  recovered_10003486();
  recovered_10003232();
  *(undefined4 *)(&DAT_1000606c + iVar4) = uVar10;
  return;
}

#undef DAT_10005c4e
#undef DAT_10005c50
#undef DAT_10005c6a
#undef DAT_10005c6c
#undef DAT_10005c71
#undef DAT_10005c74
#undef DAT_10005c76
#undef DAT_10005f70
#undef DAT_10005f71
#undef DAT_10005f72
#undef DAT_10005f98
#undef DAT_10005fa8
#undef DAT_1000601c
#undef DAT_10006020
#undef DAT_10006024
#undef DAT_10006025
#undef DAT_10006026
#undef DAT_10006038
#undef DAT_1000603c
#undef DAT_10006040
#undef DAT_10006050
#undef DAT_10006058
#undef DAT_1000605c
#undef DAT_10006060
#undef DAT_10006061
#undef DAT_10006062
#undef DAT_10006064
#undef DAT_10006068
#undef DAT_1000606c
#undef DAT_10006078
#undef DAT_1000607c
#undef DAT_10006084
#undef DAT_100060a4
#undef DAT_100060a8
#undef DAT_100060ac
#undef DAT_100060b0
#undef DAT_100060b4
#undef DAT_100060c0
#undef str_10005b44
#undef str_10005b5d
#undef str_10005b75
#undef str_10005bb6
#undef str_10005be9
#undef local_4b4
#undef local_4b0
#undef local_4ac
#undef local_4a8
#undef local_4a4
#undef local_4a0
#undef local_49c
#undef local_498
#undef local_494
#undef local_490
#undef local_48c
#undef local_488
#undef local_484
#undef local_480
#undef local_47c
#undef local_478
#undef local_474
#undef local_414

#undef DAT_10006020
#define DAT_10006020 (*(uint *)(((uintptr_t)pf_module_state + 0x524U)))
#undef DAT_10006024
#define DAT_10006024 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x528U)))
#undef str_10005b5d
#define str_10005b5d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x61U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002fdc
 */

undefined4 recovered_10002fdc(uint param_1,undefined4 *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined *puVar2;
  undefined4 uVar3;

  uVar3 = 0;
  puVar2 = &DAT_10006024 + param_1 * 0xac;
  if (DAT_10006020 <= param_1) {
    puVar2 = (undefined *)0x0;
  }
  if (param_2 != (undefined4 *)0x0 && param_1 < DAT_10006020) {
    recovered_10004887();
    if (*(int *)(puVar2 + 0x58) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = 0;
      iVar1 = recovered_10003c13();
      if (iVar1 == 0) {
        if (*(int *)(puVar2 + 0x58) != 0) {
          recovered_10003922();
        }
      }
      else {
        *param_2 = *(undefined4 *)(puVar2 + 0x34);
        recovered_10003700(str_10005b5d);
        uVar3 = 1;
      }
    }
    *(undefined4 *)(puVar2 + 0x30) = 0;
  }
  return uVar3;
}

#undef DAT_10006020
#undef DAT_10006024
#undef str_10005b5d

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003076
 */

void recovered_10003076(undefined4 param_1,undefined4 param_2,int param_3,uint param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_100048a6(param_3,param_4,0);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000309c
 */

void recovered_1000309c(undefined4 param_1,undefined4 param_2,int param_3,uint param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_100048a6(param_3,param_4,1);
  return;
}


#undef DAT_10006020
#define DAT_10006020 (*(uint *)(((uintptr_t)pf_module_state + 0x524U)))
#undef DAT_10006054
#define DAT_10006054 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x558U)))
#undef DAT_1000607c
#define DAT_1000607c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x580U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100030c2
 */

undefined4 recovered_100030c2(uint param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined4 uVar2;

  uVar2 = 0;
  if (param_1 < DAT_10006020) {
    recovered_10004887();
    uVar2 = 0;
    if ((&DAT_1000607c)[param_1 * 0x2b] != 0) {
      iVar1 = recovered_1000443d();
      if (iVar1 == 0) {
        if ((&DAT_1000607c)[param_1 * 0x2b] != 0) {
          recovered_10003486();
          recovered_10003922();
        }
      }
      else {
        uVar2 = 1;
      }
    }
    (&DAT_10006054)[param_1 * 0x2b] = 0;
  }
  return uVar2;
}

#undef DAT_10006020
#undef DAT_10006054
#undef DAT_1000607c

#undef DAT_10005d80
#define DAT_10005d80 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x284U)))
#undef DAT_10006020
#define DAT_10006020 (*(uint *)(((uintptr_t)pf_module_state + 0x524U)))
#undef DAT_10006024
#define DAT_10006024 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x528U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003138
 */

int recovered_10003138(uint param_1,int param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  int iVar7;

  iVar7 = 0;
  puVar6 = &DAT_10006024 + param_1 * 0xac;
  if (DAT_10006020 <= param_1) {
    puVar6 = (undefined *)0x0;
  }
  if (param_2 != 0 && param_1 < DAT_10006020) {
    recovered_10004887();
    if (*(int *)(puVar6 + 0x58) == 0) {
      iVar7 = 0;
    }
    else {
      iVar4 = recovered_10003c13();
      iVar7 = 0;
      if (iVar4 != 0) {
        uVar1 = *puVar6;
        uVar2 = puVar6[1];
        uVar3 = puVar6[2];
        for (iVar7 = -0x40; iVar7 != 0; iVar7 = iVar7 + 1) {
          *(undefined1 *)(param_2 + 0x40 + iVar7) = 0;
        }
        puVar5 = &DAT_10005d80;
        for (iVar7 = -4; iVar7 != 0; iVar7 = iVar7 + 1) {
          *(undefined1 *)(param_2 + 4 + iVar7) = *puVar5;
          puVar5 = puVar5 + 1;
        }
        *(undefined1 *)(param_2 + 4) = uVar1;
        *(undefined1 *)(param_2 + 5) = uVar2;
        *(undefined1 *)(param_2 + 6) = uVar3;
        for (iVar7 = -4; iVar7 != 0; iVar7 = iVar7 + 1) {
          *(undefined1 *)(param_2 + 0xc + iVar7) = 0;
        }
        for (iVar7 = -8; iVar7 != 0; iVar7 = iVar7 + 1) {
          *(undefined1 *)(param_2 + 0x18 + iVar7) = 0;
        }
        for (iVar7 = -0x10; iVar7 != 0; iVar7 = iVar7 + 1) {
          *(undefined *)(param_2 + 0x30 + iVar7) = puVar6[iVar7 + 0x72];
        }
        iVar7 = iVar4;
      }
    }
    *(undefined4 *)(puVar6 + 0x30) = 0;
  }
  return iVar7;
}

#undef DAT_10005d80
#undef DAT_10006020
#undef DAT_10006024

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003232
 */

void recovered_10003232(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int in_ECX;

  if (*(int *)(in_ECX + 0x2c) != 0) {
    recovered_10003922();
    recovered_1000369a(0);
  }
  if (*(int *)(in_ECX + 0x5c) != 0) {
    recovered_10003877(*(undefined1 *)(in_ECX + 1),*(undefined1 *)(in_ECX + 2),4,
                       *(ushort *)(in_ECX + 0x60) & 0xfbfb | 0x400);
    *(undefined4 *)(in_ECX + 0x5c) = 0;
  }
  return;
}


#define local_34 (*(undefined4 *)(pf_stack_frame + 28))
#define local_30 (*(uint *)(pf_stack_frame + 32))
#define local_2c (*(undefined1 *)(pf_stack_frame + 36))
#define local_28 (*(undefined4 *)(pf_stack_frame + 40))
#define local_24 (*(undefined4 *)(pf_stack_frame + 44))
#define local_20 (*(undefined4 * *)(pf_stack_frame + 48))
#define local_1c (*(uint *)(pf_stack_frame + 52))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100032a5
 */

undefined4 recovered_100032a5(byte param_1,undefined1 param_2,undefined1 *param_3)

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
    iVar2 = recovered_10003422(param_1,param_2,0,4,(int)&local_30);
    if (((iVar2 == 0) || ((local_30 & 0xffff) == 0)) || ((local_30 & 0xffff) == 0xffff)) {
      uVar1 = 0;
    }
    else {
      iVar2 = recovered_10003422(param_1,param_2,8,4,(int)&local_24);
      uVar1 = 0;
      if (iVar2 != 0) {
        local_20 = (undefined4 *)(param_3 + 0x10);
        iVar2 = recovered_10003422(param_1,param_2,4,4,(int)local_20);
        if (iVar2 == 0) {
          *local_20 = 0;
        }
        iVar2 = recovered_10003422(param_1,param_2,0xc,4,(int)&local_34);
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
          iVar3 = recovered_10003422((char)local_1c,param_2,(short)iVar2 + 0x28,4,(int)&local_28);
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
 * Address: 0x10003422
 */

undefined4
recovered_10003422(undefined1 param_1,undefined1 param_2,undefined2 param_3,undefined4 param_4,
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


#undef DAT_10005c4e
#define DAT_10005c4e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x152U)))
#undef DAT_10005c50
#define DAT_10005c50 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x154U)))
#undef DAT_10005c52
#define DAT_10005c52 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x156U)))
#undef DAT_1000601c
#define DAT_1000601c (*(int * *)(((uintptr_t)pf_module_state + 0x520U)))
#undef str_10005c3e
#define str_10005c3e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x142U)))
#undef str_10005c55
#define str_10005c55 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x159U)))
#undef str_10005c5e
#define str_10005c5e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x162U)))
#define local_d4 (*(undefined1 (*)[212])(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003486
 */

void recovered_10003486(void)

{
  unsigned char pf_stack_frame[272] __attribute__((aligned(16))) = {0};

  byte *in_ECX;
  char *in_EDX;

  recovered_10003700(str_10005c3e);
  recovered_10003729((uint)*in_ECX,2);
  recovered_1000377b(&DAT_10005c4e);
  recovered_10003729((uint)in_ECX[1],2);
  recovered_1000377b(&DAT_10005c50);
  recovered_100037c1((uint)in_ECX[2]);
  recovered_1000377b(&DAT_10005c52);
  recovered_1000377b(in_EDX);
  recovered_1000377b(str_10005c55);
  recovered_100037c1(*(uint *)(in_ECX + 0x44));
  recovered_1000377b(str_10005c5e);
  recovered_10003729(*(uint *)(in_ECX + 0x48),8);
  if ((((DAT_1000601c != (int *)0x0) && (*DAT_1000601c == 0x54584b57)) &&
      (0x2b < (uint)DAT_1000601c[2])) && ((code *)DAT_1000601c[10] != (code *)0x0)) {
    (*(code *)DAT_1000601c[10])(local_d4);
  }
  in_ECX[0x4c] = 1;
  in_ECX[0x4d] = 0;
  in_ECX[0x4e] = 0;
  in_ECX[0x4f] = 0;
  return;
}

#undef DAT_10005c4e
#undef DAT_10005c50
#undef DAT_10005c52
#undef DAT_1000601c
#undef str_10005c3e
#undef str_10005c55
#undef str_10005c5e
#undef local_d4

#define local_18 (*(uint (*)[6])(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100035db
 */

bool recovered_100035db(void)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  int iVar1;
  int in_ECX;
  int in_EDX;
  bool bVar2;

  local_18[0] = 0;
  *(undefined4 *)(in_ECX + 0x44) = 3;
  *(int *)(in_ECX + 0x48) = in_EDX + 0x40000;
  iVar1 = recovered_10003877(*(undefined1 *)(in_ECX + 1),*(undefined1 *)(in_ECX + 2),4,in_EDX);
  bVar2 = false;
  if (iVar1 != 0) {
    *(undefined4 *)(in_ECX + 0x5c) = 1;
    *(undefined4 *)(in_ECX + 0x44) = 4;
    *(undefined4 *)(in_ECX + 0x48) = 0x40000;
    iVar1 = recovered_10003422(*(undefined1 *)(in_ECX + 1),*(undefined1 *)(in_ECX + 2),4,2,
                               (int)local_18);
    if (iVar1 != 0) {
      *(uint *)(in_ECX + 0x48) = *(uint *)(in_ECX + 0x48) | local_18[0];
      bVar2 = (local_18[0] & 0x406) == 0x402;
    }
  }
  return bVar2;
}

#undef local_18

#undef DAT_1000601c
#define DAT_1000601c (*(int * *)(((uintptr_t)pf_module_state + 0x520U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000369a
 */

undefined4 recovered_1000369a(undefined4 param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  int in_ECX;
  int in_EDX;
  code *pcVar2;

  if (((*(int *)(in_ECX + 0x2c) != 0) && (DAT_1000601c != (int *)0x0)) &&
     (*DAT_1000601c == 0x54584b57)) {
    if ((uint)DAT_1000601c[2] < 0xc4) {
      if ((uint)DAT_1000601c[2] < 0x70) {
        return 0;
      }
    }
    else {
      pcVar2 = (code *)DAT_1000601c[0x30];
      if (pcVar2 != (code *)0x0) goto LAB_100036e6;
    }
    pcVar2 = (code *)DAT_1000601c[0x1b];
    if (pcVar2 != (code *)0x0) {
LAB_100036e6:
      uVar1 = (*pcVar2)(*(int *)(in_ECX + 0x2c) + in_EDX,4,param_1);
      return uVar1;
    }
  }
  return 0;
}

#undef DAT_1000601c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003700
 */

void recovered_10003700(char *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined1 *in_ECX;
  int in_EDX;

  if (in_EDX != 0 && in_ECX != (undefined1 *)0x0) {
    *in_ECX = 0;
    recovered_1000377b(param_1);
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003729
 */

void recovered_10003729(uint param_1,int param_2)

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
    recovered_10003828(cVar3);
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000377b
 */

void recovered_1000377b(char *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int in_ECX;
  uint in_EDX;

  uVar1 = recovered_10003856();
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


#define abStack_1f (*(byte (*)[31])(pf_stack_frame + 17))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100037c1
 */

void recovered_100037c1(uint param_1)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  uint uVar1;

  if (param_1 == 0) {
    recovered_10003828(0x30);
  }
  else {
    for (uVar1 = 0; (param_1 != 0 && (uVar1 < 10)); uVar1 = uVar1 + 1) {
      abStack_1f[uVar1 + 1] = (byte)(param_1 % 10) | 0x30;
      param_1 = param_1 / 10;
    }
    while (uVar1 != 0) {
      recovered_10003828(abStack_1f[uVar1]);
      uVar1 = uVar1 - 1;
    }
  }
  return;
}

#undef abStack_1f

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003828
 */

void recovered_10003828(undefined1 param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int in_ECX;
  uint in_EDX;

  iVar1 = recovered_10003856();
  if ((in_ECX != 0) && (iVar1 + 1U < in_EDX)) {
    *(undefined1 *)(in_ECX + iVar1) = param_1;
    *(undefined1 *)(in_ECX + 1 + iVar1) = 0;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003856
 */

int recovered_10003856(void)

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
 * Address: 0x10003877
 */

undefined4
recovered_10003877(undefined1 param_1,undefined1 param_2,undefined2 param_3,undefined4 param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  int *in_ECX;
  undefined1 in_DL;

  if ((((in_ECX == (int *)0x0) || (*in_ECX != 0x54584b57)) || ((uint)in_ECX[2] < 100)) ||
     ((code *)in_ECX[0x18] == (code *)0x0)) {
    return 0;
  }
  uVar1 = (*(code *)in_ECX[0x18])(in_DL,param_1,param_2,param_3,2,param_4);
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100038ce
 */

undefined4 recovered_100038ce(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  int *in_ECX;

  if ((((in_ECX == (int *)0x0) || (*in_ECX != 0x54584b57)) || ((uint)in_ECX[2] < 0x34)) ||
     ((code *)in_ECX[0xc] == (code *)0x0)) {
    return 0;
  }
  uVar1 = (*(code *)in_ECX[0xc])();
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100038fc
 */

void recovered_100038fc(undefined1 param_1,byte param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10003caf(1,param_1,&param_2);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003922
 */

void recovered_10003922(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int in_ECX;

  *(undefined4 *)(in_ECX + 0x58) = 0;
  if (*(int *)(in_ECX + 0x94) != 0) {
    recovered_10003f1e();
  }
  *(undefined4 *)(in_ECX + 0x90) = 0;
  recovered_100040a7();
  recovered_10003ee2();
  recovered_100038fc(4,0);
  recovered_100038fc(4,0);
  recovered_100038fc(3,3);
  recovered_100038fc(6,0);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100039aa
 */

bool recovered_100039aa(uint param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int extraout_EAX = 0;
  uint uVar2;
  int in_EDX;

  uVar1 = 0;
  do {
    uVar2 = uVar1;
    if (param_1 == uVar2) break;
    recovered_100038fc(*(undefined1 *)(in_EDX + 2 + uVar2 * 4),*(byte *)(in_EDX + 3 + uVar2 * 4));
    uVar1 = uVar2 + 1;
  } while (extraout_EAX != 0);
  return param_1 <= uVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100039fb
 */

void recovered_100039fb(byte *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 != (byte *)0x0) {
    *param_1 = 0;
  }
  recovered_10003caf(0,0,param_1);
  return;
}


#define local_20 (*(undefined4 *)(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003a25
 */

undefined4 recovered_10003a25(void)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  byte bVar1;
  byte bVar2;
  uint uVar3;
  int extraout_EAX = 0;
  int extraout_EAX_00 = 0;
  int extraout_EAX_01 = 0;
  int extraout_EAX_02 = 0;
  int extraout_EAX_03 = 0;
  int extraout_EAX_04 = 0;
  int extraout_EAX_05 = 0;
  int extraout_EAX_06 = 0;
  byte bVar4;
  int in_ECX;
  int iVar5;
  byte in_DL;
  uint uVar6;

  uVar6 = *(uint *)(in_ECX + 0x38);
  local_20 = 0;
  if ((uVar6 < 0x39387 & (in_DL ^ 1)) == 0) {
    bVar1 = uVar6 < 6000000 | in_DL;
    if (bVar1 == 0) {
      uVar3 = 25000000;
      if (uVar6 < 25000000) {
        uVar3 = uVar6;
      }
      uVar6 = (uVar3 / 1000000) * 2;
    }
    else {
      uVar6 = 0x1e;
    }
    uVar3 = uVar6 - 2;
    bVar4 = 0x10;
    for (bVar2 = 1; (uVar3 < 0x50 && (bVar2 < 4)); bVar2 = bVar2 + 1) {
      uVar3 = uVar3 * 2 + 2;
      bVar4 = bVar4 + 0x10;
    }
    if (uVar3 - 0x50 < 0x81) {
      iVar5 = 0x39387;
      if (bVar1 == 0) {
        iVar5 = uVar6 * 500000;
      }
      recovered_100038fc(1,1);
      if (extraout_EAX != 0) {
        local_20 = 0;
        recovered_100038fc(0xff,(char)(0x7d / uVar6) + 3U | bVar4);
        if (extraout_EAX_00 != 0) {
          recovered_100038fc(0xff,0x50);
          if (extraout_EAX_01 != 0) {
            recovered_100038fc(7,0);
            if (extraout_EAX_02 != 0) {
              recovered_100038fc(0xff,(byte)uVar3);
              if (extraout_EAX_03 != 0) {
                recovered_100038fc(0x80,0x80);
                if (extraout_EAX_04 != 0) {
                  recovered_100038ce();
                  recovered_100038fc(1,0);
                  if (extraout_EAX_05 != 0) {
                    recovered_100038fc(0xff,bVar1 << 7 | 0x10);
                    if (extraout_EAX_06 != 0) {
                      *(int *)(in_ECX + 0x50) = iVar5;
                      local_20 = 1;
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
  return local_20;
}

#undef local_20

#define local_15 (*(byte *)(pf_stack_frame + 27))
#define local_14 (*(uint (*)[5])(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003c13
 */

undefined4 recovered_10003c13(void)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  bool bVar1;
  undefined3 extraout_var = 0;
  int extraout_EAX = 0;
  int in_ECX;
  uint *in_EDX;

  local_14[0] = 0;
  local_15 = 0;
  bVar1 = recovered_10003d96(local_14);
  if (CONCAT31(extraout_var,bVar1) == 0) {
    *(undefined4 *)(in_ECX + 0x48) = 0x140000;
  }
  else {
    if (((local_14[0] & 0xc10000) == 0x10000) &&
       (((local_14[0] >> 0x19 & 1) == 0 || (*(int *)(in_ECX + 0x54) == 0)))) {
      recovered_100039fb(&local_15);
      if (extraout_EAX == 0) {
        return 0;
      }
      if ((local_15 & 6) != 0) {
        *(uint *)(in_ECX + 0x48) = local_15 | local_14[0];
        return 0;
      }
      if (in_EDX == (uint *)0x0) {
        return 1;
      }
      *in_EDX = local_14[0];
      return 1;
    }
    *(uint *)(in_ECX + 0x48) = local_14[0];
  }
  return 0;
}

#undef local_15
#undef local_14

#define local_1c (*(uint *)(pf_stack_frame + 20))
#define local_18 (*(uint *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003caf
 */

undefined4 recovered_10003caf(byte param_1,undefined1 param_2,byte *param_3)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  bool bVar1;
  uint uVar2;
  int iVar3;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  int in_ECX;
  uint in_EDX;

  local_1c = 0;
  uVar2 = 0;
  if (param_3 != (byte *)0x0) {
    uVar2 = 0;
    if (param_1 != 0) {
      uVar2 = (uint)CONCAT11(param_2,*param_3);
    }
    iVar3 = recovered_1000369a(uVar2 + 0x80000000 +
                               ((in_EDX & 0x3fff) << 0x10 | (uint)param_1 << 0x1e));
    if (iVar3 != 0) {
      iVar3 = 0x3e9;
      local_18 = in_EDX;
      do {
        iVar3 = iVar3 + -1;
        if (((iVar3 == 0) ||
            (bVar1 = recovered_10003d96(&local_1c), CONCAT31(extraout_var,bVar1) == 0)) ||
           (local_1c == 0xffffffff)) break;
        if (-1 < (int)local_1c) {
          if ((param_1 == 0) || (*param_3 == (byte)local_1c)) {
            *param_3 = (byte)local_1c;
            return 1;
          }
          goto LAB_10003d5a;
        }
        bVar1 = recovered_10003e21();
      } while (CONCAT31(extraout_var_00,bVar1) != 0);
      local_1c = local_1c & 0xffff;
LAB_10003d5a:
      *(uint *)(in_ECX + 0x48) = local_1c & 0xffff | local_18 << 0x10;
      return 0;
    }
    uVar2 = (uint)*param_3;
  }
  *(uint *)(in_ECX + 0x48) = in_EDX << 0x10 | uVar2;
  return 0;
}

#undef local_1c
#undef local_18

#undef DAT_1000601c
#define DAT_1000601c (*(int * *)(((uintptr_t)pf_module_state + 0x520U)))
#define local_18 (*(undefined4 (*)[6])(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003d96
 */

bool recovered_10003d96(undefined4 *param_1)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  int iVar1;
  int in_ECX;
  int in_EDX;
  code *pcVar2;

  local_18[0] = 0;
  if (*(int *)(in_ECX + 0x2c) == 0 || param_1 == (undefined4 *)0x0) {
    return false;
  }
  if (DAT_1000601c == (int *)0x0) {
    return false;
  }
  if (*DAT_1000601c != 0x54584b57) {
    return false;
  }
  if ((uint)DAT_1000601c[2] < 0xc0) {
    if ((uint)DAT_1000601c[2] < 0x6c) {
      return false;
    }
  }
  else {
    pcVar2 = (code *)DAT_1000601c[0x2f];
    if (pcVar2 != (code *)0x0) goto LAB_10003df8;
  }
  pcVar2 = (code *)DAT_1000601c[0x1a];
  if (pcVar2 == (code *)0x0) {
    return false;
  }
LAB_10003df8:
  iVar1 = (*pcVar2)(*(int *)(in_ECX + 0x2c) + in_EDX,4,local_18);
  if (iVar1 != 0) {
    *param_1 = local_18[0];
  }
  return iVar1 != 0;
}

#undef DAT_1000601c
#undef local_18

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003e21
 */

bool recovered_10003e21(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint *puVar1;
  uint uVar2;
  bool bVar3;
  undefined3 extraout_var = 0;
  int iVar4;
  int in_ECX;
  uint in_EDX;

  bVar3 = recovered_10003e74();
  if (CONCAT31(extraout_var,bVar3) == 0) {
    bVar3 = false;
  }
  else {
    puVar1 = *(uint **)(in_ECX + 0x74);
    if (puVar1 != (uint *)0x0) {
      uVar2 = *puVar1;
      if (uVar2 < in_EDX) {
        in_EDX = uVar2;
      }
      *puVar1 = uVar2 - in_EDX;
    }
    iVar4 = recovered_100038ce();
    bVar3 = iVar4 != 0;
  }
  return bVar3;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003e74
 */

bool recovered_10003e74(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int *piVar1;
  int iVar2;
  int in_ECX;
  bool bVar3;

  piVar1 = *(int **)(in_ECX + 0x74);
  if (piVar1 == (int *)0x0) {
    bVar3 = true;
  }
  else if (*piVar1 == 0) {
    bVar3 = false;
  }
  else {
    iVar2 = recovered_10003eb7();
    bVar3 = (uint)(iVar2 - piVar1[1]) < 0x5c;
  }
  return bVar3;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003eb7
 */

undefined4 recovered_10003eb7(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  int *in_ECX;

  if ((((in_ECX == (int *)0x0) || (*in_ECX != 0x54584b57)) || ((uint)in_ECX[2] < 0x30)) ||
     ((code *)in_ECX[0xb] == (code *)0x0)) {
    return 0;
  }
  uVar1 = (*(code *)in_ECX[0xb])();
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003ee2
 */

void recovered_10003ee2(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_100038fc(0x44,0x44);
  recovered_100038fc(0xc0,0);
  return;
}


#define local_23 (*(byte *)(pf_stack_frame + 29))
#define local_22 (*(byte *)(pf_stack_frame + 30))
#define local_21 (*(byte *)(pf_stack_frame + 31))
#define local_20 (*(uint *)(pf_stack_frame + 32))
#define local_1c (*(uint (*)[7])(pf_stack_frame + 36))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003f1e
 */

undefined4 recovered_10003f1e(void)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  bool bVar1;
  int iVar2;
  int extraout_EAX = 0;
  int extraout_EAX_00 = 0;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  int extraout_EAX_01 = 0;
  undefined3 extraout_var_01 = 0;
  undefined3 extraout_var_02 = 0;
  undefined4 uVar3;
  byte bVar4;
  int in_ECX;
  byte bVar5;

  local_1c[1] = 0x10003f31;
  iVar2 = recovered_1000369a(0x10000000);
  local_21 = iVar2 != 0;
  iVar2 = recovered_1000369a(0x10000000);
  local_22 = iVar2 != 0;
  recovered_100038fc(0x80,0x80);
  recovered_100038fc(0x80,0x80);
  iVar2 = recovered_1000369a(0);
  bVar5 = extraout_EAX != 0 & local_22 & (iVar2 != 0 && extraout_EAX_00 != 0) & local_21;
  recovered_10004118();
  iVar2 = 0x3e9;
  do {
    iVar2 = iVar2 + -1;
    if (iVar2 == 0) break;
    local_1c[0] = 0;
    local_20 = 0;
    local_23 = 0;
    bVar1 = recovered_10003d96(&local_20);
    bVar4 = 0;
    if ((CONCAT31(extraout_var,bVar1) == 0) || (local_20 == 0xffffffff)) goto LAB_10004057;
    bVar1 = recovered_10003d96(local_1c);
    bVar4 = 0;
    if ((CONCAT31(extraout_var_00,bVar1) == 0) || (local_1c[0] == 0xffffffff)) goto LAB_10004057;
    recovered_100039fb(&local_23);
    if (extraout_EAX_01 == 0) break;
    if ((-1 < (int)(local_20 | local_1c[0])) && ((local_23 & 4) == 0)) {
      bVar4 = 1;
      goto LAB_10004057;
    }
    bVar1 = recovered_10003e21();
  } while (CONCAT31(extraout_var_01,bVar1) != 0);
  bVar4 = 0;
LAB_10004057:
  bVar1 = recovered_10004140();
  recovered_10004118();
  if (((bVar5 & bVar4) == 1) && (CONCAT31(extraout_var_02,bVar1) != 0)) {
    uVar3 = 1;
    iVar2 = 0x94;
  }
  else {
    *(undefined4 *)(in_ECX + 0x98) = 1;
    iVar2 = 0x90;
    uVar3 = 0;
  }
  *(undefined4 *)(in_ECX + iVar2) = 0;
  return uVar3;
}

#undef local_23
#undef local_22
#undef local_21
#undef local_20
#undef local_1c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100040a7
 */

void recovered_100040a7(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int in_ECX;

  if ((*(int *)(in_ECX + 0x94) == 0) && (*(int *)(in_ECX + 0x98) == 0)) {
    if (*(int *)(in_ECX + 0x78) != 0) {
      recovered_10004247();
    }
    if (*(int *)(in_ECX + 0x7c) != 0) {
      recovered_10004247();
    }
    *(undefined4 *)(in_ECX + 0x7c) = 0;
    *(undefined4 *)(in_ECX + 0x78) = 0;
    *(undefined4 *)(in_ECX + 0x84) = 0;
    *(undefined4 *)(in_ECX + 0x80) = 0;
    *(undefined4 *)(in_ECX + 0x8c) = 0;
    *(undefined4 *)(in_ECX + 0x88) = 0;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004118
 */

void recovered_10004118(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int *in_ECX;

  if ((((in_ECX != (int *)0x0) && (*in_ECX == 0x54584b57)) && (0x7b < (uint)in_ECX[2])) &&
     ((code *)in_ECX[0x1e] != (code *)0x0)) {
    (*(code *)in_ECX[0x1e])();
  }
  return;
}


#define local_1c (*(uint *)(pf_stack_frame + 20))
#define local_18 (*(uint (*)[6])(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004140
 */

bool recovered_10004140(void)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  int iVar1;
  int in_ECX;
  uint uVar2;
  byte in_DL;
  bool bVar3;

  local_18[0] = 0;
  local_1c = 0;
  iVar1 = recovered_10003422(*(undefined1 *)(in_ECX + 1),*(undefined1 *)(in_ECX + 2),4,2,
                             (int)local_18);
  bVar3 = false;
  if (local_18[0] != 0xffff && iVar1 != 0) {
    uVar2 = local_18[0] & 0xfffffbf9;
    local_18[0] = local_18[0] | 0x406;
    if (in_DL == 0) {
      local_18[0] = uVar2 | 0x402;
    }
    iVar1 = recovered_10003877(*(undefined1 *)(in_ECX + 1),*(undefined1 *)(in_ECX + 2),4,local_18[0]
                              );
    if (iVar1 == 0) {
      bVar3 = false;
    }
    else {
      iVar1 = recovered_10003422(*(undefined1 *)(in_ECX + 1),*(undefined1 *)(in_ECX + 2),4,2,
                                 (int)&local_1c);
      bVar3 = false;
      if (iVar1 != 0) {
        bVar3 = (local_1c & 0x406) == (uint)in_DL * 4 + 0x402;
      }
    }
  }
  return bVar3;
}

#undef local_1c
#undef local_18

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004247
 */

void recovered_10004247(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int *in_ECX;

  if ((((in_ECX != (int *)0x0) && (*in_ECX == 0x54584b57)) && (0x3b < (uint)in_ECX[2])) &&
     ((code *)in_ECX[0xe] != (code *)0x0)) {
    (*(code *)in_ECX[0xe])();
  }
  return;
}


#define local_24 (*(byte *)(pf_stack_frame + 28))
#define auStack_23 (*(undefined1 (*)[35])(pf_stack_frame + 29))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004272
 */

uint recovered_10004272(uint param_1,int param_2,undefined4 param_3,int param_4)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  bool bVar1;
  int iVar2;
  undefined3 extraout_var = 0;
  int extraout_EAX = 0;
  int extraout_EAX_00 = 0;
  int extraout_EAX_01 = 0;
  int extraout_EAX_02 = 0;
  int in_ECX;
  int in_EDX;
  uint uVar3;
  byte *pbVar4;

  *(int *)(in_ECX + 0x44) = in_EDX + 100;
  uVar3 = 0;
  iVar2 = recovered_10003c13();
  if ((((iVar2 != 0) && (bVar1 = recovered_100044f0(param_1), CONCAT31(extraout_var,bVar1) != 0)) &&
      (recovered_100038fc(0xff,(byte)param_2), extraout_EAX != 0)) &&
     ((recovered_100038fc(1,1), extraout_EAX_00 != 0 &&
      (recovered_100038fc(0xff,0x88), extraout_EAX_01 != 0)))) {
    iVar2 = 1000;
    if (param_2 == 9) {
      iVar2 = 5000;
    }
    iVar2 = recovered_10004577(param_2 - 6U < 0xfffffffe,iVar2);
    if (iVar2 != 0) {
      if (param_2 != 4) {
        iVar2 = 5;
        if (param_2 == 2) {
          iVar2 = 0x10;
        }
        pbVar4 = &local_24;
        while (bVar1 = iVar2 != 0, iVar2 = iVar2 + -1, bVar1) {
          recovered_100039fb(pbVar4);
          pbVar4 = pbVar4 + 1;
          if (extraout_EAX_02 == 0) {
            return 0;
          }
        }
        if (param_2 != 2) {
          uVar3 = recovered_100046f0();
          return uVar3 & 0xff;
        }
        if (param_4 == 0) {
          return 0;
        }
        if (0x3f < local_24) {
          return 0;
        }
        for (iVar2 = -0xf; iVar2 != 0; iVar2 = iVar2 + 1) {
          *(undefined1 *)(param_4 + 0xf + iVar2) = auStack_23[iVar2 + 0xf];
        }
        *(undefined1 *)(param_4 + 0xf) = 1;
      }
      uVar3 = 1;
    }
  }
  return uVar3;
}

#undef local_24
#undef auStack_23

#define local_18 (*(uint (*)[6])(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100043e5
 */

undefined4 recovered_100043e5(uint param_1,byte param_2)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  uint uVar1;
  undefined4 uVar2;
  int in_ECX;

  local_18[0] = 0;
  uVar1 = recovered_10004272(param_1,(uint)param_2 * 8 + 1,local_18,0);
  uVar2 = 0;
  if (uVar1 != 0) {
    if ((local_18[0] & 0xfff9a008) == 0) {
      uVar2 = 1;
    }
    else {
      *(uint *)(in_ECX + 0x48) = local_18[0];
    }
  }
  return uVar2;
}

#undef local_18

#define local_20 (*(uint (*)[8])(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000443d
 */

undefined4 recovered_1000443d(void)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  bool bVar1;
  undefined3 extraout_var = 0;
  uint uVar2;
  undefined3 extraout_var_00 = 0;
  undefined3 extraout_var_01 = 0;
  int in_ECX;
  undefined4 uVar3;
  int iVar4;

  local_20[1] = 5000000;
  local_20[2] = recovered_10003eb7();
  *(uint **)(in_ECX + 0x74) = local_20 + 1;
  iVar4 = 0x1389;
  do {
    iVar4 = iVar4 + -1;
    if (iVar4 == 0) break;
    local_20[0] = 0;
    bVar1 = recovered_10003e74();
    uVar3 = 0;
    if (CONCAT31(extraout_var,bVar1) == 0) goto LAB_100044e2;
    uVar2 = recovered_10004272(*(uint *)(in_ECX + 0x40),1,local_20,0);
    if ((uVar2 == 0) || (*(uint *)(in_ECX + 0x48) = local_20[0], (local_20[0] & 0xfff9a008) != 0))
    goto LAB_100044e2;
    bVar1 = recovered_10003e74();
    if (CONCAT31(extraout_var_00,bVar1) == 0) goto LAB_100044e2;
    if ((local_20[0] & 0xfff9bf08) == 0x900) {
      uVar3 = 1;
      goto LAB_100044e2;
    }
    bVar1 = recovered_10003e21();
  } while (CONCAT31(extraout_var_01,bVar1) != 0);
  uVar3 = 0;
LAB_100044e2:
  *(undefined4 *)(in_ECX + 0x74) = 0;
  return uVar3;
}

#undef local_20

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100044f0
 */

bool recovered_100044f0(uint param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int extraout_EAX = 0;
  int extraout_EAX_00 = 0;
  uint uVar2;
  byte in_DL;
  byte bVar3;
  bool bVar4;

  recovered_100038fc(0xff,in_DL | 0x40);
  if (extraout_EAX == 0) {
    bVar4 = false;
  }
  else {
    bVar3 = 0x18;
    uVar1 = 0;
    do {
      uVar2 = uVar1;
      if (uVar2 == 4) break;
      recovered_100038fc(0xff,(byte)(param_1 >> (bVar3 & 0x1f)));
      bVar3 = bVar3 - 8;
      uVar1 = uVar2 + 1;
    } while (extraout_EAX_00 != 0);
    bVar4 = 3 < uVar2;
  }
  return bVar4;
}


#define local_1c (*(uint *)(pf_stack_frame + 36))
#define local_18 (*(uint *)(pf_stack_frame + 40))
#define local_23 (*(byte *)(pf_stack_frame + 29))
#define local_22 (*(byte *)(pf_stack_frame + 30))
#define local_21 (*(byte *)(pf_stack_frame + 31))
#define local_20 (*(undefined4 *)(pf_stack_frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004577
 */

undefined4 recovered_10004577(char param_1,int param_2)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  bool bVar2;
  int iVar3;
  int extraout_EAX = 0;
  uint uVar4;
  undefined3 extraout_var = 0;
  int extraout_EAX_00 = 0;
  int extraout_EAX_01 = 0;
  int extraout_EAX_02 = 0;
  int extraout_EAX_03 = 0;
  int in_ECX;
  undefined4 in_EDX;
  uint uVar5;
  byte bVar6;
  uint uVar7;

  uVar5 = 0;
  local_21 = 0;
  local_22 = 0;
  local_23 = 0;
  local_1c = (uint)(byte)((byte)in_EDX ^ 1) << 5 | 0xffffff9f;
  local_18 = param_2 * 1000;
  local_20 = in_EDX;
  while (uVar7 = local_18 - uVar5, uVar5 <= local_18 && uVar7 != 0) {
    iVar3 = recovered_10003c13();
    if ((iVar3 == 0) || (recovered_100039fb(&local_21), extraout_EAX == 0)) goto LAB_100046d9;
    if ((local_21 & 0x10) != 0) break;
    if ((local_21 | local_1c) == 0xffffffff) {
      bVar6 = 0xe2;
      if ((char)local_20 != '\0') {
        bVar6 = 0x80;
      }
      recovered_100039fb(&local_22);
      if ((extraout_EAX_00 == 0) || (recovered_100039fb(&local_23), extraout_EAX_01 == 0))
      goto LAB_100046d9;
      if ((((param_1 << 7 | 0x62U) & bVar6 & local_22) == 0) && ((local_23 & 1) == 0)) {
        return 1;
      }
      break;
    }
    uVar4 = 10;
    if (999 < uVar5) {
      uVar4 = 1000;
    }
    if (uVar4 < uVar7) {
      uVar7 = uVar4;
    }
    bVar2 = recovered_10003e21();
    uVar5 = uVar5 + uVar7;
    if (CONCAT31(extraout_var,bVar2) == 0) break;
  }
  recovered_100039fb(&local_22);
  if ((extraout_EAX_02 != 0) && (recovered_100039fb(&local_23), extraout_EAX_03 != 0)) {
    *(uint *)(in_ECX + 0x48) = (uint)local_23 | (uint)local_22 << 8 | (uint)local_21 << 0x10;
  }
LAB_100046d9:
  uVar1 = *(undefined4 *)(in_ECX + 0x48);
  recovered_10003ee2();
  *(undefined4 *)(in_ECX + 0x48) = uVar1;
  return 0;
}

#undef local_1c
#undef local_18
#undef local_23
#undef local_22
#undef local_21
#undef local_20

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100046f0
 */

undefined4 recovered_100046f0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  undefined4 uVar2;
  byte *in_ECX;
  uint *in_EDX;

  if ((in_EDX == (uint *)0x0 || in_ECX == (byte *)0x0) || (0x3f < *in_ECX)) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(uint *)(in_ECX + 1);
    uVar1 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
    *in_EDX = uVar1;
    uVar2 = CONCAT31((int3)(uVar1 >> 8),1);
  }
  return uVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000471a
 */

int recovered_1000471a(uint param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int in_ECX;
  uint in_EDX;
  uint uVar2;

  iVar1 = 0;
  if (in_EDX - param_1 < 0x20 && (param_1 <= in_EDX && in_ECX != 0)) {
    uVar2 = 0x7f - in_EDX;
    iVar1 = 0;
    do {
      iVar1 = (uint)((*(byte *)(in_ECX + (uVar2 >> 3)) >> (in_EDX & 7) & 1) != 0) + iVar1 * 2;
      in_EDX = in_EDX - 1;
      uVar2 = uVar2 + 1;
    } while (param_1 - 1 != in_EDX);
  }
  return iVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004785
 */

uint recovered_10004785(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  byte *in_ECX;

  if (in_ECX == (byte *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (uint)in_ECX[2] << 8 | (uint)in_ECX[1] << 0xb | (uint)*in_ECX << 0x10 | 0x80000000;
  }
  return uVar1;
}


#undef DAT_1000601c
#define DAT_1000601c (*(int * *)(((uintptr_t)pf_module_state + 0x520U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100047b4
 */

uint recovered_100047b4(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint *in_ECX;
  uint uVar2;
  code *pcVar3;

  uVar1 = 0;
  if ((DAT_1000601c == (int *)0x0) || (*DAT_1000601c != 0x54584b57)) goto LAB_10004815;
  if ((uint)DAT_1000601c[2] < 0xfc) {
    uVar1 = 0;
    if ((uint)DAT_1000601c[2] < 0x38) goto LAB_10004815;
LAB_10004800:
    pcVar3 = (code *)DAT_1000601c[0xd];
    uVar1 = 0;
    if (pcVar3 == (code *)0x0) goto LAB_10004815;
  }
  else {
    pcVar3 = (code *)DAT_1000601c[0x3e];
    if (pcVar3 == (code *)0x0) goto LAB_10004800;
  }
  uVar1 = (*pcVar3)(0x1fff);
LAB_10004815:
  *in_ECX = uVar1;
  uVar2 = uVar1 + 0xfff & 0xfffff000;
  if (0xfffff000 < uVar1) {
    uVar2 = 0;
  }
  if (uVar1 == 0) {
    uVar2 = 0;
  }
  return uVar2;
}

#undef DAT_1000601c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004839
 */

undefined4 recovered_10004839(int param_1,int param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  int *in_ECX;

  if ((((in_ECX == (int *)0x0) || (*in_ECX != 0x54584b57)) || ((uint)in_ECX[2] < 0x74)) ||
     (((param_2 == 0 || (param_1 == 0)) || ((code *)in_ECX[0x1c] == (code *)0x0)))) {
    uVar1 = 0;
  }
  else {
    uVar1 = (*(code *)in_ECX[0x1c])();
  }
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004887
 */

void recovered_10004887(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int in_ECX;

  while( true ) {
    iVar1 = __atomic_exchange_n(&(*(int *)(in_ECX + 0x30)),1,__ATOMIC_SEQ_CST);
    if (iVar1 == 0) break;
    do {
    } while (*(int *)(in_ECX + 0x30) != 0);
  }
  return;
}


#undef DAT_10006020
#define DAT_10006020 (*(uint *)(((uintptr_t)pf_module_state + 0x524U)))
#undef DAT_10006024
#define DAT_10006024 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x528U)))
#define local_2d0 (*(uint *)(pf_stack_frame + 48))
#define local_2cc (*(uint *)(pf_stack_frame + 52))
#define local_2c8 (*(int *)(pf_stack_frame + 56))
#define local_2c4 (*(uint *)(pf_stack_frame + 60))
#define local_2c0 (*(uint *)(pf_stack_frame + 64))
#define local_2b8 (*(uint *)(pf_stack_frame + 72))
#define local_2b4 (*(uint *)(pf_stack_frame + 76))
#define local_2b0 (*(uint *)(pf_stack_frame + 80))
#define uStack_244 (*(ushort *)(pf_stack_frame + 188))
#define abStack_242 (*(byte (*)[578])(pf_stack_frame + 190))
#define local_2ac (*(uint *)(pf_stack_frame + 84))
#define local_2a8 (*(uint (*)[170])(pf_stack_frame + 88))
#define local_298 (*(uint *)(pf_stack_frame + 104))
#define local_294 (*(ushort *)(pf_stack_frame + 108))
#define local_290 (*(undefined4 *)(pf_stack_frame + 112))
#define local_28c (*(undefined4 *)(pf_stack_frame + 116))
#define local_288 (*(undefined2 *)(pf_stack_frame + 120))
#define local_286 (*(undefined1 *)(pf_stack_frame + 122))
#define local_285 (*(undefined1 *)(pf_stack_frame + 123))
#define local_284 (*(undefined2 *)(pf_stack_frame + 124))
#define local_282 (*(undefined1 *)(pf_stack_frame + 126))
#define local_281 (*(undefined1 *)(pf_stack_frame + 127))
#define local_280 (*(undefined2 *)(pf_stack_frame + 128))
#define local_27e (*(undefined1 *)(pf_stack_frame + 130))
#define local_27d (*(undefined1 *)(pf_stack_frame + 131))
#define local_27c (*(undefined2 *)(pf_stack_frame + 132))
#define local_27a (*(undefined1 *)(pf_stack_frame + 134))
#define local_279 (*(undefined1 *)(pf_stack_frame + 135))
#define local_278 (*(undefined2 *)(pf_stack_frame + 136))
#define local_276 (*(undefined1 *)(pf_stack_frame + 138))
#define local_275 (*(char *)(pf_stack_frame + 139))
#define local_274 (*(undefined4 *)(pf_stack_frame + 140))
#define local_270 (*(undefined4 *)(pf_stack_frame + 144))
#define local_26c (*(undefined4 *)(pf_stack_frame + 148))
#define local_268 (*(undefined4 *)(pf_stack_frame + 152))
#define local_264 (*(undefined4 *)(pf_stack_frame + 156))
#define local_260 (*(undefined2 *)(pf_stack_frame + 160))
#define local_25e (*(undefined1 *)(pf_stack_frame + 162))
#define local_25d (*(char *)(pf_stack_frame + 163))
#define local_25c (*(undefined4 *)(pf_stack_frame + 164))
#define local_258 (*(undefined4 *)(pf_stack_frame + 168))
#define local_254 (*(undefined4 *)(pf_stack_frame + 172))
#define local_250 (*(undefined4 *)(pf_stack_frame + 176))
#define local_24c (*(undefined4 *)(pf_stack_frame + 180))
#define local_248 (*(undefined4 *)(pf_stack_frame + 184))
#define local_94 (*(uint *)(pf_stack_frame + 620))
#define bStack_2bc (*(byte *)(pf_stack_frame + 68))
#define abStack_292 (*(byte (*)[658])(pf_stack_frame + 110))
#define local_2e1 (*(byte *)(pf_stack_frame + 31))
#define local_2e0 (*(int *)(pf_stack_frame + 32))
#define local_2db (*(byte *)(pf_stack_frame + 37))
#define local_2da (*(byte *)(pf_stack_frame + 38))
#define local_2d9 (*(byte *)(pf_stack_frame + 39))
#define local_2d8 (*(uint *)(pf_stack_frame + 40))
#define local_2d4 (*(uint *)(pf_stack_frame + 44))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100048a6
 */

uint recovered_100048a6(int param_1,uint param_2,byte param_3)

{
  unsigned char pf_stack_frame[800] __attribute__((aligned(16))) = {0};

  byte bVar1;
  undefined4 uVar2;
  uint uVar3;
  byte bVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  int extraout_EAX = 0;
  undefined3 extraout_var_01 = 0;
  undefined3 extraout_var_02 = 0;
  int extraout_EAX_00 = 0;
  int extraout_EAX_01 = 0;
  int extraout_EAX_02 = 0;
  undefined3 extraout_var_03 = 0;
  undefined3 extraout_var_04 = 0;
  int extraout_EAX_03 = 0;
  uint in_ECX;
  undefined4 extraout_ECX = 0;
  char *pcVar9;
  uint in_EDX;
  undefined *puVar10;
  uint uVar11;
  int iVar12;
  uint *puVar13;

  iVar8 = 0x100048be;
  uVar11 = 0;
  puVar10 = &DAT_10006024 + in_ECX * 0xac;
  if (DAT_10006020 <= in_ECX) {
    puVar10 = (undefined *)0x0;
  }
  if ((param_2 < 0x800000 && param_1 != 0) && in_ECX < DAT_10006020) {
    local_2c4 = in_EDX;
    recovered_10004887();
    *(undefined4 *)(puVar10 + 0x4c) = 0;
    uVar11 = 0;
    if (((*(int *)(puVar10 + 0x58) != 0) && (local_2c4 < *(uint *)(puVar10 + 0x34))) &&
       (param_2 - 1 < *(uint *)(puVar10 + 0x34) - local_2c4)) {
      bVar4 = CARRY4(param_2,local_2c4) < (param_2 + local_2c4 < 0x800001) | puVar10[0x3d];
      if ((bVar4 & param_3) == 1) {
        if (puVar10[0x3e] == '\0') goto LAB_1000495e;
      }
      else if (bVar4 != 0) {
LAB_1000495e:
        local_298 = (uint)param_3;
        local_2b4 = 0;
LAB_1000496f:
        uVar11 = 1;
        uVar6 = param_2 - local_2b4;
        if (local_2b4 <= param_2 && uVar6 != 0) {
          if ((param_3 == 0) && (*(int *)(puVar10 + 0x90) != 0)) {
            local_2d8 = 8;
            if (uVar6 < 8) {
              local_2d8 = uVar6;
            }
            if (uVar6 < 2) goto LAB_10004bd5;
            uVar6 = recovered_10004785();
            *(undefined4 *)(puVar10 + 0x44) = 0x13e;
            iVar7 = 0;
            if (*(int *)(puVar10 + 0x9c) == 0) goto LAB_100051f6;
            uVar11 = local_2d8;
            if (*(int *)(puVar10 + 0x94) != 0) goto LAB_10004bfb;
            iVar7 = 0;
            local_2c8 = CONCAT31(PF_PART3(local_2c8, 1),puVar10[0x3d]);
            local_2cc = uVar6;
            if ((0x7fffff < local_2b4 + local_2c4) && (puVar10[0x3d] == '\0')) goto LAB_10004bfb;
            local_2b8 = local_2b4 + local_2c4;
            iVar7 = recovered_10003c13();
            if (iVar7 != 0) {
              iVar7 = local_2b4 * 0x200 + param_1;
              local_2ac = local_2d8 << 9;
              local_2d0 = local_2ac | 0xa0000000;
              uVar11 = local_2b8 << 9;
              if ((char)local_2c8 != '\0') {
                uVar11 = local_2b8;
              }
              PF_PART4(local_294,0) = 0x80fe2c;
              local_290 = 0x80fe34;
              local_28c = 0x52fffda9;
              local_288 = 0xfdaa;
              local_286 = 0xff;
              local_285 = (char)(uVar11 >> 0x18);
              local_284 = 0xfdab;
              local_282 = 0xff;
              local_281 = (char)(uVar11 >> 0x10);
              local_2c8 = local_2d8 - 1;
              local_280 = 0xfdac;
              local_27e = 0xff;
              local_27d = (char)(uVar11 >> 8);
              local_27c = 0xfdad;
              local_27a = 0xff;
              local_279 = (char)uVar11;
              local_278 = 0xfdb1;
              local_276 = 0xff;
              local_275 = (char)local_2d8;
              local_274 = 0xfffdb2;
              local_270 = 0xfffdaf;
              local_26c = 0x2fffdb0;
              local_268 = 0x8080fe21;
              local_264 = 0xfffe28;
              local_260 = 0xfe29;
              local_25e = 0xff;
              local_25d = (char)local_2d8 * '\x02';
              local_25c = 0xfffe2a;
              local_258 = 0xfffe2b;
              local_254 = 0x2333fe2c;
              local_250 = 0x1fd5b;
              local_24c = 0x21fffda1;
              local_248 = 0x8efffdb3;
              local_2b0 = 0;
              iVar12 = -0x50;
              local_2e0 = iVar8;
              do {
                if (iVar12 == 0) {
                  iVar8 = recovered_100057c0(2,0xfdb3,0x40,0x40);
                  if (((char)iVar8 != '\0') &&
                     (iVar8 = recovered_100057c0(0,0xfdb3,0,0), (char)iVar8 != '\0')) {
                    iVar8 = local_2e0;
                    local_2a8[3] = iVar7;
                    if (local_2b0 - 0x101 < 0xffffff00) goto LAB_10005004;
                    local_2d4 = local_2b0;
                    puVar10[0xa8] = 0;
                    recovered_1000578e();
                    recovered_1000578e();
                    recovered_10004118();
                    iVar8 = recovered_1000369a(0xf0000000);
                    if ((((iVar8 == 0) ||
                         (iVar8 = recovered_1000369a(*(undefined4 *)(puVar10 + 0x8c)), iVar8 == 0))
                        || (iVar8 = recovered_1000369a(*(undefined4 *)(puVar10 + 0x88)), iVar8 == 0)
                        ) || (iVar8 = recovered_1000369a(0x30000000), iVar8 == 0))
                    goto LAB_10005079;
                    recovered_10004118();
                    *(undefined4 *)(puVar10 + 0x94) = 1;
                    bVar5 = recovered_10004140();
                    if (((CONCAT31(extraout_var,bVar5) == 0) ||
                        (iVar8 = recovered_1000369a(local_2d4 << 2 | 0xc0000000), iVar8 == 0)) ||
                       (iVar8 = recovered_1000369a(local_2d0), iVar8 == 0)) goto LAB_10005079;
                    PF_PART4(local_294,0) = 5000000;
                    local_290 = recovered_10003eb7();
                    *(ushort **)(puVar10 + 0x74) = &local_294;
                    local_2d4 = 0;
                    local_2d0 = 0;
                    goto LAB_10004de8;
                  }
                  break;
                }
                iVar8 = recovered_100057c0(1,*(ushort *)(abStack_242 + iVar12 + -2),
                                           abStack_242[iVar12],abStack_242[iVar12 + 1]);
                iVar12 = iVar12 + 4;
              } while ((char)iVar8 != '\0');
              goto LAB_10005000;
            }
            goto LAB_10005004;
          }
LAB_10004bd5:
          iVar7 = recovered_100054c8((byte *)(local_2b4 * 0x200 + param_1),(byte)local_298);
          goto LAB_10004bfb;
        }
      }
    }
LAB_100054b7:
    *(undefined4 *)(puVar10 + 0x30) = 0;
  }
  return uVar11;
LAB_10004de8:
  bVar5 = recovered_10003e74();
  if (CONCAT31(extraout_var_00,bVar5) == 0) goto LAB_10005012;
  local_94 = 0;
  local_2e1 = 0;
  iVar8 = recovered_10003c13();
  if (iVar8 == 0) {
LAB_1000505e:
    *(undefined4 *)(puVar10 + 0x74) = 0;
    goto LAB_10005079;
  }
  if ((local_94 & 0x11000000) != 0) {
    *(uint *)(puVar10 + 0x48) = local_94;
    goto LAB_1000505e;
  }
  if ((local_94 >> 0x1d & 1) == 0) goto LAB_10004fc8;
  local_2d9 = 0;
  local_2da = 0;
  local_2db = 0;
  local_2a8[0] = 0;
  local_2c0 = 0;
  recovered_100039fb(&local_2e1);
  if (((extraout_EAX == 0) ||
      (bVar5 = recovered_10003d96(local_2a8), CONCAT31(extraout_var_01,bVar5) == 0)) ||
     ((local_2a8[0] == 0xffffffff ||
      (((bVar5 = recovered_10003d96(&local_2c0), CONCAT31(extraout_var_02,bVar5) == 0 ||
        (local_2c0 == 0xffffffff)) || (recovered_100039fb(&local_2db), extraout_EAX_00 == 0)))))) {
LAB_1000506e:
    *(undefined4 *)(puVar10 + 0x74) = 0;
    goto LAB_10005079;
  }
  if ((local_2e1 & 0x10) != 0) {
    uVar11 = (uint)local_2e1 << 0x10;
LAB_10005067:
    *(uint *)(puVar10 + 0x48) = uVar11;
    goto LAB_1000506e;
  }
  if ((((local_2e1 & 0x40) != 0) && (-1 < (int)(local_2c0 | local_2a8[0]))) &&
     ((local_2db & 4) == 0)) {
    recovered_100039fb(&local_2d9);
    if (((extraout_EAX_01 == 0) || (recovered_100039fb(&local_2da), extraout_EAX_02 == 0)) ||
       (*(uint *)(puVar10 + 0x48) = (uint)local_2da | (uint)local_2d9 << 8 | (uint)local_2e1 << 0x10
       , (local_2da & 1) != 0 || (local_2d9 & 0xe2) != 0)) goto LAB_1000506e;
    recovered_10004785();
    recovered_1000578e();
    recovered_10004118();
    bVar4 = *(byte *)(*(int *)(puVar10 + 0x84) + 1);
    uVar11 = (uint)bVar4;
    puVar10[0xa8] = bVar4;
    if ((bVar4 & 0x10) != 0) {
      *(undefined4 *)(puVar10 + 0x44) = 0x17d;
      goto LAB_10005067;
    }
    local_2d4 = CONCAT31((int3)((uint)extraout_ECX >> 8),1);
    if ((bVar4 & 0x40) != 0) {
      iVar8 = recovered_1000369a(local_94 & 0xf0000000);
      *(undefined4 *)(puVar10 + 0x74) = 0;
      if (iVar8 == 0) goto LAB_10005079;
      iVar8 = -5;
      puVar13 = &local_2c0;
      goto LAB_100050cb;
    }
  }
LAB_10004fc8:
  uVar11 = local_2d0;
  *(uint *)(puVar10 + 0x48) = local_94;
  iVar8 = 1000;
  if (local_2d0 < 1000) {
    iVar8 = 10;
  }
  bVar5 = recovered_10003e21();
  if (CONCAT31(extraout_var_03,bVar5) == 0) goto LAB_10005012;
  local_2d0 = uVar11 + iVar8;
  goto LAB_10004de8;
  while( true ) {
    recovered_100039fb((byte *)puVar13);
    puVar13 = (uint *)((int)puVar13 + 1);
    iVar8 = iVar8 + 1;
    if (extraout_EAX_03 == 0) break;
LAB_100050cb:
    if (iVar8 == 0) {
      uVar11 = 0;
      if ((byte)local_2c0 < 0x40) {
        uVar6 = (uint)bStack_2bc | (PF_PART3(local_2c0, 1) & 0xff0000) >> 8 |
                (PF_PART3(local_2c0, 1) & 0xff00) << 8;
        uVar3 = CONCAT13(bStack_2bc,PF_PART3(local_2c0, 1)) << 0x18;
        uVar11 = uVar6 | uVar3;
        if ((uVar6 & 0xfff9a008) == 0 && uVar3 == 0) {
          iVar8 = recovered_100043e5(0,1);
          if ((iVar8 != 0) && (iVar8 = recovered_1000443d(), iVar8 != 0)) {
            *(undefined4 *)(puVar10 + 0x44) = 0x14a;
            iVar8 = recovered_10003f1e();
            if (iVar8 != 0) {
              recovered_1000578e();
              recovered_1000578e();
              recovered_10004118();
              puVar10[0xa8] = *(undefined1 *)(*(int *)(puVar10 + 0x84) + 1);
              if ((1 < *(uint *)(puVar10 + 0xa0)) ||
                 ((*(uint *)(puVar10 + 0xa0) == 1 && (*(uint *)(puVar10 + 0xa4) == local_2b8))))
              goto LAB_100051ce;
              local_2a8[0] = 0;
              local_2a8[1] = local_2c8;
              local_2cc = 0;
              goto LAB_10005229;
            }
          }
          break;
        }
      }
      *(uint *)(puVar10 + 0x48) = uVar11;
      break;
    }
  }
LAB_10005079:
  uVar2 = *(undefined4 *)(puVar10 + 0x48);
  recovered_10003f1e();
  *(undefined4 *)(puVar10 + 0x48) = uVar2;
LAB_10005000:
  iVar8 = local_2e0;
LAB_10005004:
  iVar7 = 0;
  uVar11 = local_2d8;
LAB_10004bfb:
  if (iVar7 != 1) {
    uVar11 = 0;
    if (iVar7 == 0) {
      if (*(int *)(puVar10 + 0x4c) == 0) {
        pcVar9 = (char *)(iVar8 + 0x13dc);
        if (param_3 != 0) {
          pcVar9 = (char *)(iVar8 + 0x13bb);
        }
        recovered_10003700(pcVar9);
        recovered_100037c1(local_2c4);
        recovered_1000377b((char *)(iVar8 + 0x13fc));
        recovered_100037c1(local_2b4);
        recovered_1000377b((char *)(iVar8 + 0x140b));
        recovered_100037c1(param_2);
        recovered_10003486();
      }
      recovered_10003922();
    }
    goto LAB_100054b7;
  }
  local_2b4 = local_2b4 + uVar11;
  goto LAB_1000496f;
LAB_10005229:
  if (local_2cc == 2) goto LAB_1000538b;
  uVar11 = local_2a8[local_2cc];
  local_2d0 = uVar11 + local_2b8;
  iVar7 = recovered_100054c8((byte *)&local_294,0);
  iVar8 = local_2e0;
  if (iVar7 != 1) {
    recovered_10003700((char *)(local_2e0 + 0x1440));
    recovered_100037c1(local_2d0);
    recovered_10003486();
    goto LAB_10005079;
  }
  local_2c8 = uVar11 * 0x200 + *(int *)(puVar10 + 0x80);
  iVar7 = 0;
  for (uVar11 = 0; uVar11 != 0x200; uVar11 = uVar11 + 1) {
    bVar4 = *(byte *)(local_2c8 + uVar11);
    bVar1 = abStack_292[uVar11 - 2];
    if (bVar4 != bVar1) {
      *(undefined4 *)(puVar10 + 0x44) = 0x172;
      *(uint *)(puVar10 + 0x48) = (uint)CONCAT11(bVar1,bVar4) - iVar7;
      local_2d4 = (uint)bVar4;
      local_2a8[2] = (uint)bVar1;
      recovered_10003700((char *)(local_2e0 + 0x146c));
      recovered_100037c1(local_2d0);
      recovered_1000377b((char *)(iVar8 + 0x148c));
      recovered_100037c1(uVar11);
      recovered_1000377b((char *)(iVar8 + 0x1494));
      recovered_10003729(local_2a8[2],2);
      recovered_1000377b((char *)(iVar8 + 0x149b));
      recovered_10003729(local_2d4,2);
      recovered_10003486();
      goto LAB_10005079;
    }
    iVar7 = iVar7 + -0x10000;
  }
  local_2cc = local_2cc + 1;
  goto LAB_10005229;
LAB_1000538b:
  if (*(int *)(puVar10 + 0xa0) == 0) {
    *(uint *)(puVar10 + 0xa4) = local_2b8;
  }
  *(int *)(puVar10 + 0xa0) = *(int *)(puVar10 + 0xa0) + 1;
LAB_100051ce:
  for (uVar11 = 0; local_2ac != uVar11; uVar11 = uVar11 + 1) {
    *(undefined1 *)(local_2a8[3] + uVar11) = *(undefined1 *)(*(int *)(puVar10 + 0x80) + uVar11);
  }
  iVar7 = 1;
  iVar8 = local_2e0;
LAB_100051f6:
  uVar11 = local_2d8;
  goto LAB_10004bfb;
LAB_10005012:
  if (((local_2d4 & 1) != 0) && (bVar5 = recovered_10003e74(), CONCAT31(extraout_var_04,bVar5) == 0)
     ) {
    *(undefined4 *)(puVar10 + 0x44) = 0x17c;
    *(uint *)(puVar10 + 0x48) = (uint)(byte)puVar10[0xa8];
    recovered_10003486();
  }
  *(undefined4 *)(puVar10 + 0x74) = 0;
  goto LAB_10005079;
}

#undef DAT_10006020
#undef DAT_10006024
#undef local_2d0
#undef local_2cc
#undef local_2c8
#undef local_2c4
#undef local_2c0
#undef local_2b8
#undef local_2b4
#undef local_2b0
#undef uStack_244
#undef abStack_242
#undef local_2ac
#undef local_2a8
#undef local_298
#undef local_294
#undef local_290
#undef local_28c
#undef local_288
#undef local_286
#undef local_285
#undef local_284
#undef local_282
#undef local_281
#undef local_280
#undef local_27e
#undef local_27d
#undef local_27c
#undef local_27a
#undef local_279
#undef local_278
#undef local_276
#undef local_275
#undef local_274
#undef local_270
#undef local_26c
#undef local_268
#undef local_264
#undef local_260
#undef local_25e
#undef local_25d
#undef local_25c
#undef local_258
#undef local_254
#undef local_250
#undef local_24c
#undef local_248
#undef local_94
#undef bStack_2bc
#undef abStack_292
#undef local_2e1
#undef local_2e0
#undef local_2db
#undef local_2da
#undef local_2d9
#undef local_2d8
#undef local_2d4

#define local_2c (*(uint *)(pf_stack_frame + 20))
#define local_24 (*(byte * *)(pf_stack_frame + 28))
#define local_1d (*(byte *)(pf_stack_frame + 35))
#define local_1c (*(uint *)(pf_stack_frame + 36))
#define local_18 (*(byte * *)(pf_stack_frame + 40))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100054c8
 */

undefined4 recovered_100054c8(byte *param_1,byte param_2)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  byte bVar1;
  int iVar2;
  int extraout_EAX = 0;
  undefined3 extraout_var = 0;
  int extraout_EAX_00 = 0;
  int extraout_EAX_01 = 0;
  int extraout_EAX_02 = 0;
  int extraout_EAX_03 = 0;
  int extraout_EAX_04 = 0;
  int extraout_EAX_05 = 0;
  int extraout_EAX_06 = 0;
  undefined4 uVar3;
  int extraout_EAX_07 = 0;
  int extraout_EAX_08 = 0;
  int in_ECX;
  byte *pbVar4;
  uint in_EDX;
  uint uVar5;
  bool bVar6;

  local_2c = 0;
  if ((0x7fffff < in_EDX & (*(byte *)(in_ECX + 0x3d) ^ 1)) == 0) {
    uVar5 = in_EDX << 9;
    if (*(byte *)(in_ECX + 0x3d) != 0) {
      uVar5 = in_EDX;
    }
    iVar2 = recovered_10003c13();
    if (iVar2 != 0) {
      local_24 = param_1;
      if (param_2 == 0) {
        *(undefined4 *)(in_ECX + 0x44) = 0xd9;
        bVar6 = recovered_100044f0(uVar5);
        if (CONCAT31(extraout_var,bVar6) != 0) {
LAB_100055bf:
          recovered_100038fc(0xff,0);
          if ((((extraout_EAX_00 != 0) && (recovered_100038fc(0xff,2), extraout_EAX_01 != 0)) &&
              (recovered_100038fc(0xff,1), extraout_EAX_02 != 0)) &&
             ((recovered_100038fc(0xff,0), extraout_EAX_03 != 0 &&
              (recovered_100038fc(1,1), extraout_EAX_04 != 0)))) {
            bVar1 = 0x20;
            if (param_2 == 0) {
              bVar1 = 1;
            }
            recovered_100038fc(0xff,bVar1);
            if (extraout_EAX_05 != 0) {
              bVar1 = 0x8c;
              if (param_2 != 0) {
                bVar1 = 0x81;
              }
              recovered_100038fc(0xff,bVar1);
              if (extraout_EAX_06 == 0) {
                return 0;
              }
              iVar2 = recovered_10004577(param_2 ^ 1,5000);
              if (iVar2 == 0) {
                return 0;
              }
              if (param_2 != 0) {
                uVar3 = recovered_1000443d();
                return uVar3;
              }
              iVar2 = 5;
              pbVar4 = &local_1d;
              while (bVar6 = iVar2 != 0, iVar2 = iVar2 + -1, bVar6) {
                local_18 = pbVar4;
                recovered_100039fb(pbVar4);
                pbVar4 = local_18 + 1;
                if (extraout_EAX_07 == 0) {
                  return 0;
                }
              }
              if ((0x3f < local_1d) ||
                 (uVar5 = local_1c >> 0x18 | (local_1c & 0xff0000) >> 8 | (local_1c & 0xff00) << 8,
                 local_2c = uVar5 | local_1c << 0x18,
                 (uVar5 & 0xfff9a008) != 0 || local_1c << 0x18 != 0)) {
                *(uint *)(in_ECX + 0x48) = local_2c;
                return 0;
              }
              iVar2 = 0x200;
              do {
                bVar6 = iVar2 == 0;
                iVar2 = iVar2 + -1;
                if (bVar6) {
                  return 1;
                }
                recovered_100039fb(local_24);
                local_24 = local_24 + 1;
              } while (extraout_EAX_08 != 0);
              return 0;
            }
          }
        }
      }
      else {
        if (*(char *)(in_ECX + 0x3e) != '\0') {
          return 2;
        }
        iVar2 = recovered_1000443d();
        if (iVar2 != 0) {
          *(undefined4 *)(in_ECX + 0x44) = 0xe0;
          iVar2 = recovered_100043e5(uVar5,0);
          if (iVar2 != 0) {
            iVar2 = -0x200;
            do {
              if (iVar2 == 0) goto LAB_100055bf;
              recovered_100038fc(0xff,param_1[iVar2 + 0x200]);
              iVar2 = iVar2 + 1;
            } while (extraout_EAX != 0);
          }
        }
      }
    }
  }
  return 0;
}

#undef local_2c
#undef local_24
#undef local_1d
#undef local_1c
#undef local_18

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000578e
 */

void recovered_1000578e(void)

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
 * Address: 0x100057c0
 */

int recovered_100057c0(byte param_1,ushort param_2,byte param_3,byte param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int in_ECX;
  int iVar1;
  uint *in_EDX;

  if (in_EDX == (uint *)0x0 || in_ECX == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = 0;
    if (*in_EDX < 0x100) {
      for (; iVar1 != 0x20; iVar1 = iVar1 + 8) {
        *(char *)(in_ECX + *in_EDX * 4) =
             (char)(((uint)param_4 |
                    (uint)param_3 << 8 | (param_2 & 0x3fff) << 0x10 | (uint)param_1 << 0x1e) >>
                   ((byte)iVar1 & 0x1f));
        in_ECX = in_ECX + 1;
      }
      *in_EDX = *in_EDX + 1;
      iVar1 = 1;
    }
  }
  return iVar1;
}


#undef DAT_1000601c
#define DAT_1000601c (*(int *)(((uintptr_t)pf_module_state + 0x520U)))
#undef DAT_10006020
#define DAT_10006020 (*(uint *)(((uintptr_t)pf_module_state + 0x524U)))
#undef DAT_10006024
#define DAT_10006024 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x528U)))
#undef str_10005d85
#define str_10005d85 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x289U)))
#undef str_10005da0
#define str_10005da0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2a4U)))
#undef str_10005dad
#define str_10005dad (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2b1U)))
#undef str_10005dcf
#define str_10005dcf (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2d3U)))
#undef str_10005e40
#define str_10005e40 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x344U)))
#undef str_10005e63
#define str_10005e63 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x367U)))
#undef str_10005e94
#define str_10005e94 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x398U)))
#undef str_10005eab
#define str_10005eab (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3afU)))
#define local_28 (*(uint *)(pf_stack_frame + 24))
#define local_24 (*(uint *)(pf_stack_frame + 28))
#define local_20 (*(uint *)(pf_stack_frame + 32))
#define local_1c (*(int *)(pf_stack_frame + 36))
#define local_18 (*(uint *)(pf_stack_frame + 40))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000582e
 */

undefined4 recovered_1000582e(undefined4 *param_1)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  uint uVar5;
  undefined *puVar6;
  bool bVar7;

  uVar1 = 0;
  if (DAT_10006020 != 0 && (DAT_1000601c != 0 && param_1 != (undefined4 *)0x0)) {
    local_24 = 0;
    puVar6 = &DAT_10006024;
    local_1c = 0;
    local_18 = 0;
    local_20 = 0;
    local_28 = 0;
    for (uVar5 = 0; uVar5 < DAT_10006020; uVar5 = uVar5 + 1) {
      recovered_10004887();
      if (*(int *)(puVar6 + 0x58) != 0) {
        iVar2 = recovered_10003c13();
        if (iVar2 == 0) {
          recovered_10003922();
        }
        if (*(int *)(puVar6 + 0x58) != 0) {
          local_18 = local_18 + 1;
          local_28 = (local_28 + 1) - (uint)(*(int *)(puVar6 + 0x90) == 0);
          bVar7 = CARRY4(local_24,*(uint *)(puVar6 + 0x34));
          local_24 = local_24 + *(uint *)(puVar6 + 0x34);
          local_1c = local_1c + (uint)bVar7;
          if (local_20 < *(uint *)(puVar6 + 0x50)) {
            local_20 = *(uint *)(puVar6 + 0x50);
          }
        }
      }
      *(undefined4 *)(puVar6 + 0x30) = 0;
      puVar6 = puVar6 + 0xac;
    }
    recovered_100013f1();
    *param_1 = 500;
    param_1[1] = 1;
    param_1[3] = 0x11;
    uVar1 = 9;
    if (local_18 == DAT_10006020) {
      uVar1 = 0x13;
    }
    param_1[4] = uVar1;
    uVar1 = recovered_10003eb7();
    param_1[6] = uVar1;
    param_1[0x11] = DAT_10006020;
    param_1[0x12] = local_18;
    param_1[0x13] = local_24;
    param_1[0x14] = local_1c;
    recovered_10003700(str_10005d85);
    recovered_10003700(str_10005da0);
    pcVar4 = str_10005dad;
    if (local_28 == 0) {
      pcVar4 = str_10005dcf;
    }
    pcVar3 = str_10005e40;
    if (local_18 != 0) {
      pcVar3 = pcVar4;
    }
    recovered_10003700(pcVar3);
    recovered_10003700(str_10005e63);
    recovered_100037c1(local_20);
    recovered_1000377b(str_10005e94);
    recovered_100037c1(local_28);
    recovered_1000377b(str_10005eab);
    uVar1 = 1;
  }
  return uVar1;
}

#undef DAT_1000601c
#undef DAT_10006020
#undef DAT_10006024
#undef str_10005d85
#undef str_10005da0
#undef str_10005dad
#undef str_10005dcf
#undef str_10005e40
#undef str_10005e63
#undef str_10005e94
#undef str_10005eab
#undef local_28
#undef local_24
#undef local_20
#undef local_1c
#undef local_18

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005a40
 */

undefined8 recovered_10005a40(uint param_1,uint param_2,uint param_3)

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
    if (0x3f < param_3) goto LAB_10005a7b;
    bVar2 = (byte)param_3;
    if (0x1f < param_3) {
      uVar3 = param_1 << (bVar2 & 0x1f);
      uVar1 = 0;
      goto LAB_10005a7b;
    }
    uVar3 = param_1 >> 0x20 - (bVar2 & 0x1f);
    param_1 = param_1 << (bVar2 & 0x1f);
    uVar3 = param_2 << (bVar2 & 0x1f) | uVar3;
  }
  uVar1 = param_1;
LAB_10005a7b:
  return CONCAT44(uVar3,uVar1);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005a82
 */

undefined8 recovered_10005a82(uint param_1,uint param_2,uint param_3)

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
 * Address: 0x10005ac6
 */

undefined8 recovered_10005ac6(uint param_1,uint param_2,uint param_3)

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
