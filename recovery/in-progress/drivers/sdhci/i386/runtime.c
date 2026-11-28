/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_10003000
#define DAT_10003000 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x24dU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100006e2
 */

void * recovered_100006e2(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return &DAT_10003000;
}

#undef DAT_10003000

#undef DAT_1000301c
#define DAT_1000301c (*(int * *)(((uintptr_t)pf_module_state + 0x269U)))
#undef DAT_10003020
#define DAT_10003020 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x26dU)))
#undef DAT_10003024
#define DAT_10003024 (*(int *)(((uintptr_t)pf_module_state + 0x271U)))
#undef str_10002eb2
#define str_10002eb2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xffU)))
#undef str_10002ec6
#define str_10002ec6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x113U)))
#undef str_10002ed4
#define str_10002ed4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x121U)))
#undef str_10002ee7
#define str_10002ee7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x134U)))
#define local_200 (*(undefined4 *)(pf_stack_frame + 16))
#define local_1fc (*(int *)(pf_stack_frame + 20))
#define local_1f8 (*(code * *)(pf_stack_frame + 24))
#define local_1f4 (*(code * *)(pf_stack_frame + 28))
#define local_1f0 (*(code * *)(pf_stack_frame + 32))
#define local_1ec (*(code * *)(pf_stack_frame + 36))
#define local_1e8 (*(code * *)(pf_stack_frame + 40))
#define local_1e4 (*(undefined4 *)(pf_stack_frame + 44))
#define local_1e0 (*(undefined4 *)(pf_stack_frame + 48))
#define local_1dc (*(undefined4 *)(pf_stack_frame + 52))
#define local_1d8 (*(undefined4 *)(pf_stack_frame + 56))
#define local_1d4 (*(undefined4 *)(pf_stack_frame + 60))
#define local_1d0 (*(undefined4 *)(pf_stack_frame + 64))
#define local_1cc (*(undefined4 *)(pf_stack_frame + 68))
#define local_1c8 (*(undefined4 *)(pf_stack_frame + 72))
#define local_1c4 (*(undefined4 *)(pf_stack_frame + 76))
#define local_1bc (*(code * *)(pf_stack_frame + 84))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100006f8
 */

uint recovered_100006f8(void *api)

{
  unsigned char pf_stack_frame[560] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;

  if ((((api != (void *)0x0) && (*(int *)api == 0x54584b57)) && (*(int *)((int)api + 4) == 1100000))
     && (0xf7 < *(uint *)((int)api + 8))) {
    DAT_1000301c = api;
    DAT_10003020 = 0;
    DAT_10003024 = 0;
    recovered_100009a9();
    recovered_100009a9();
    if (((*(int *)api == 0x54584b57) && (0x5f < *(uint *)((int)api + 8))) &&
       (*(int *)((int)api + 0x5c) != 0)) {
      for (iVar1 = 0; iVar1 != 0x100; iVar1 = iVar1 + 1) {
        for (iVar4 = 0; iVar4 != 0x20; iVar4 = iVar4 + 1) {
          iVar2 = recovered_10001b58((byte)iVar4,0,(undefined1 *)&local_1d0);
          if (iVar2 != 0) {
            recovered_100009c2();
            if ((char)local_1c4 < '\0') {
              for (iVar2 = -7; iVar2 != 0; iVar2 = iVar2 + 1) {
                iVar3 = recovered_10001b58((byte)iVar4,(char)iVar2 + '\b',(undefined1 *)&local_200);
                if (iVar3 != 0) {
                  recovered_100009c2();
                }
              }
            }
          }
        }
      }
    }
    if (DAT_10003024 != 0) {
      local_200 = 3;
      local_1f8 = recovered_1000199d;
      local_1f4 = recovered_10001a04;
      local_1f0 = recovered_10001a2a;
      local_1ec = recovered_10001a50;
      local_1e8 = recovered_10001aaa;
      local_1e4 = 0;
      local_1e0 = 0;
      local_1dc = 0;
      local_1d8 = 0;
      local_1d4 = 0;
      local_1fc = DAT_10003024;
      recovered_100009a9();
      local_1d0 = 0x1bc;
      local_1cc = 1;
      local_1c8 = 0x11;
      local_1c4 = 0x13;
      local_1bc = recovered_10002bac;
      recovered_100026bf(str_10002eb2);
      recovered_100026bf(str_10002ec6);
      recovered_100026bf(str_10002ed4);
      recovered_100026bf(str_10002ee7);
      if (((DAT_1000301c != (int *)0x0) && (*DAT_1000301c == 0x54584b57)) &&
         (((0xef < (uint)DAT_1000301c[2] &&
           (((((code *)DAT_1000301c[0x3b] != (code *)0x0 &&
              (iVar1 = (*(code *)DAT_1000301c[0x3b])(&local_1d0), iVar1 != 0)) &&
             (*(int *)api == 0x54584b57)) &&
            ((0xd3 < *(uint *)((int)api + 8) && (*(code **)((int)api + 0xd0) != (code *)0x0)))))) &&
          (iVar1 = (**(code **)((int)api + 0xd0))(&local_200), iVar1 != 0)))) {
        return 1;
      }
    }
    recovered_1000193b();
  }
  return 0;
}

#undef DAT_1000301c
#undef DAT_10003020
#undef DAT_10003024
#undef str_10002eb2
#undef str_10002ec6
#undef str_10002ed4
#undef str_10002ee7
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
 * Address: 0x100009a9
 */

void recovered_100009a9(void)

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


#undef DAT_10002e5e
#define DAT_10002e5e (*(uint8_t *)(((uintptr_t)pf_module_state + 0xabU)))
#undef DAT_10002e60
#define DAT_10002e60 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xadU)))
#undef DAT_10002e62
#define DAT_10002e62 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xafU)))
#undef DAT_10002e64
#define DAT_10002e64 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb1U)))
#undef DAT_10002e69
#define DAT_10002e69 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb6U)))
#undef DAT_10002e6c
#define DAT_10002e6c (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb9U)))
#undef DAT_10002e6e
#define DAT_10002e6e (*(uint8_t *)(((uintptr_t)pf_module_state + 0xbbU)))
#undef DAT_10002f98
#define DAT_10002f98 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1e5U)))
#undef DAT_10002fa8
#define DAT_10002fa8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1f5U)))
#undef DAT_1000301c
#define DAT_1000301c (*(int * *)(((uintptr_t)pf_module_state + 0x269U)))
#undef DAT_10003020
#define DAT_10003020 (*(uint *)(((uintptr_t)pf_module_state + 0x26dU)))
#undef DAT_10003024
#define DAT_10003024 (*(uint *)(((uintptr_t)pf_module_state + 0x271U)))
#undef DAT_10003028
#define DAT_10003028 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x275U)))
#undef DAT_100030f8
#define DAT_100030f8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x345U)))
#undef DAT_100030fc
#define DAT_100030fc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x349U)))
#undef DAT_10003100
#define DAT_10003100 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x34dU)))
#undef DAT_10003104
#define DAT_10003104 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x351U)))
#undef DAT_10003108
#define DAT_10003108 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x355U)))
#undef DAT_1000310c
#define DAT_1000310c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x359U)))
#undef DAT_10003112
#define DAT_10003112 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x35fU)))
#undef DAT_10003114
#define DAT_10003114 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x361U)))
#undef DAT_1000311c
#define DAT_1000311c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x369U)))
#undef DAT_10003120
#define DAT_10003120 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x36dU)))
#undef DAT_10003124
#define DAT_10003124 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x371U)))
#undef DAT_10003125
#define DAT_10003125 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x372U)))
#undef DAT_10003126
#define DAT_10003126 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x373U)))
#undef str_10002df7
#define str_10002df7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x44U)))
#undef str_10002e06
#define str_10002e06 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x53U)))
#undef str_10002e1d
#define str_10002e1d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6aU)))
#define bStack_419 (*(byte *)(pf_stack_frame + 183))
#define aiStack_418 (*(int (*)[262])(pf_stack_frame + 184))
#define local_4bc (*(uint *)(pf_stack_frame + 20))
#define local_4b8 (*(char * *)(pf_stack_frame + 24))
#define local_4b1 (*(bool *)(pf_stack_frame + 31))
#define local_4b0 (*(int * *)(pf_stack_frame + 32))
#define local_4ac (*(code * *)(pf_stack_frame + 36))
#define local_4a8 (*(int * *)(pf_stack_frame + 40))
#define local_4a1 (*(undefined1 *)(pf_stack_frame + 47))
#define local_4a0 (*(uint *)(pf_stack_frame + 48))
#define local_49c (*(uint *)(pf_stack_frame + 52))
#define local_498 (*(char * *)(pf_stack_frame + 56))
#define local_494 (*(int *)(pf_stack_frame + 60))
#define local_490 (*(uint *)(pf_stack_frame + 64))
#define local_48c (*(uint *)(pf_stack_frame + 68))
#define local_488 (*(uint *)(pf_stack_frame + 72))
#define local_484 (*(uint *)(pf_stack_frame + 76))
#define local_480 (*(uint *)(pf_stack_frame + 80))
#define local_47c (*(uint *)(pf_stack_frame + 84))
#define local_478 (*(uint *)(pf_stack_frame + 88))
#define local_474 (*(undefined4 *)(pf_stack_frame + 92))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100009c2
 */

void recovered_100009c2(void)

{
  unsigned char pf_stack_frame[1264] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;
  uint *puVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  byte *in_ECX;
  uint uVar9;
  undefined4 uVar10;
  byte *pbVar11;
  uint uVar12;
  undefined4 *puVar13;
  int iVar14;
  bool bVar15;
  byte bVar16;
  undefined8 uVar17;

  bVar16 = 0;
  if (in_ECX[8] != 8) {
    return;
  }
  if (in_ECX[9] != 5) {
    return;
  }
  if (1 < in_ECX[10]) {
    return;
  }
  if ((in_ECX[0xc] & 0x7f) != 0) {
    return;
  }
  if (3 < DAT_10003020) {
    return;
  }
  local_488 = DAT_10003024;
  iVar5 = recovered_10001cd5(in_ECX[1],in_ECX[2],0x40,1,(int)&local_480);
  if (iVar5 == 0) {
    return;
  }
  local_484 = local_480 & 7;
  local_498 = (char *)(local_480 >> 4 & 7);
  if ((5 < local_484 || (local_480 & 0x88) != 0) || -(local_484 - 6) <= local_498) {
    return;
  }
  puVar1 = (undefined4 *)(&DAT_10003028 + DAT_10003020 * 0x34);
  recovered_100009a9();
  pbVar11 = in_ECX;
  puVar13 = puVar1;
  for (iVar5 = 0xb; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar13 = *(undefined4 *)pbVar11;
    pbVar11 = pbVar11 + (uint)bVar16 * -8 + 4;
    puVar13 = puVar13 + (uint)bVar16 * -2 + 1;
  }
  local_4a8 = puVar1;
  if ((in_ECX[0x12] & 0x10) != 0) {
    iVar5 = recovered_10001cd5(in_ECX[1],in_ECX[2],0x34,1,(int)(aiStack_418 + 1));
    if (iVar5 == 0) {
      return;
    }
    uVar12 = 0;
LAB_10000afe:
    if ((aiStack_418[1] == 0) || (0x2f < uVar12)) goto LAB_10000b6e;
    if ((aiStack_418[1] - 0x40U < 0xbd) && ((aiStack_418[1] & 3U) == 0)) {
      local_4b8 = (char *)(uint)in_ECX[1];
      iVar5 = recovered_10001cd5(in_ECX[1],in_ECX[2],(short)aiStack_418[1],2,(int)&local_474);
      if (iVar5 == 0) goto LAB_10000b9f;
      if ((char)local_474 != '\x01') {
        aiStack_418[1] = local_474 >> 8;
        uVar12 = uVar12 + 1;
        goto LAB_10000afe;
      }
      if (0xf8 < (uint)aiStack_418[1]) goto LAB_10000b9f;
      local_4b8 = (char *)(uint)in_ECX[1];
      iVar5 = recovered_10001cd5(in_ECX[1],in_ECX[2],(short)aiStack_418[1] + 4,2,(int)&local_4bc);
      if (iVar5 != 0) {
        iVar5 = recovered_10001d39(in_ECX[1],in_ECX[2],(short)aiStack_418[1] + 4,
                                   local_4bc & 0xffff7ffc);
        bVar15 = false;
        if (iVar5 != 0) {
          recovered_10001ef5();
          local_4b8 = (char *)(uint)in_ECX[1];
          iVar5 = recovered_10001cd5(in_ECX[1],in_ECX[2],(short)aiStack_418[1] + 4,2,(int)&local_4bc
                                    );
          bVar15 = (local_4bc & 3) == 0 && iVar5 != 0;
        }
        goto LAB_10000ba1;
      }
    }
LAB_10000b9f:
    bVar15 = false;
    goto LAB_10000ba1;
  }
LAB_10000bad:
  piVar4 = local_4a8;
  local_4b8 = (char *)(uint)in_ECX[1];
  iVar5 = recovered_10001cd5(in_ECX[1],in_ECX[2],4,2,(int)(local_4a8 + 0xb));
  if (iVar5 != 0) {
    local_490 = piVar4[0xb] & 0xfffffbf9U | 0x402;
    piVar4[0xc] = 1;
    iVar5 = recovered_10001d39(in_ECX[1],in_ECX[2],4,local_490);
    if (((iVar5 != 0) &&
        (iVar5 = recovered_10001cd5(in_ECX[1],in_ECX[2],4,2,(int)&local_490), iVar5 != 0)) &&
       ((local_490 & 0x406) == 0x402)) {
      uVar12 = 0;
LAB_10000c77:
      uVar3 = DAT_10003024;
      if ((uVar12 <= local_498) && (DAT_10003024 < 8)) {
        iVar5 = DAT_10003024 * 0x30;
        puVar2 = (uint *)(&DAT_100030f8 + iVar5);
        recovered_100009a9();
        *(uint *)(&DAT_100030fc + iVar5) = DAT_10003020;
        *(uint *)(&DAT_10003100 + iVar5) = uVar12;
        local_4b0 = DAT_1000301c;
        local_474 = 0;
        uVar6 = uVar12 + local_484;
        local_4b8 = (char *)uVar12;
        if (((4 < (uVar12 - 1) + local_484) || ((*(uint *)(in_ECX + uVar6 * 4 + 0x10) & 7) != 4)) &&
           (uVar12 = *(uint *)(in_ECX + uVar6 * 4 + 0x14), (uVar12 & 1) == 0 && uVar12 != 0)) {
          local_4ac = (code *)(uint)in_ECX[1];
          local_4bc = uVar12;
          recovered_10001cd5(in_ECX[1],in_ECX[2],(short)uVar6 * 4 + 0x10,4,(int)&local_4bc);
          uVar12 = 0;
          if ((local_4bc & 7) == 4) {
            if (4 < uVar6) goto LAB_10001066;
            local_474 = *(uint *)(in_ECX + uVar6 * 4 + 0x18);
            recovered_10001cd5(in_ECX[1],in_ECX[2],(short)uVar6 * 4 + 0x14,4,(int)&local_474);
            uVar12 = local_474;
          }
          uVar6 = 0xfffffffc;
          if ((local_4bc & 1) == 0) {
            uVar6 = 0xfffffff0;
          }
          uVar6 = uVar6 & local_4bc;
          if (uVar6 == 0 && uVar12 == 0) goto LAB_10001066;
          *puVar2 = 0;
          aiStack_418[1] = 0;
          if ((local_4b0 == (int *)0x0) || (*local_4b0 != 0x54584b57)) goto LAB_10001066;
          if (((uint)local_4b0[2] < 0xbc) ||
             (local_4ac = (code *)local_4b0[0x2e], local_4ac == (code *)0x0)) {
            if (((0x67 < (uint)local_4b0[2] && uVar12 == 0) &&
                ((code *)local_4b0[0x19] != (code *)0x0)) &&
               (iVar7 = (*(code *)local_4b0[0x19])(uVar6,0,0x100,aiStack_418 + 1), iVar7 != 0)) {
              *puVar2 = aiStack_418[1];
              goto LAB_10000e60;
            }
            goto LAB_10001066;
          }
          iVar7 = (*local_4ac)(uVar6,uVar12,0x100,puVar2);
          if (iVar7 == 0) goto LAB_10001066;
LAB_10000e60:
          iVar7 = recovered_10001f20();
          if ((((iVar7 != 0) && (iVar7 = recovered_10001fa1(2,&local_48c), iVar7 != 0)) &&
              ((local_48c != 0xffff &&
               ((iVar7 = recovered_10001fa1(4,&local_478), iVar7 != 0 && (local_478 != 0xffffffff)))
               ))) && ((local_478 & 0x1000000) != 0)) {
            *(uint *)(&DAT_10003104 + iVar5) = local_48c & 0xff;
            uVar12 = 0x3f;
            if (1 < (local_48c & 0xff)) {
              uVar12 = 0xff;
            }
            *(uint *)(&DAT_10003108 + iVar5) = (uVar12 & local_478 >> 8) * 1000000;
            iVar7 = recovered_10002081();
            if (((((iVar7 != 0) && (iVar7 = recovered_10002081(), iVar7 != 0)) &&
                 (iVar7 = recovered_10002081(), iVar7 != 0)) &&
                ((iVar7 = recovered_10002081(), iVar7 != 0 &&
                 (iVar7 = recovered_10002081(), iVar7 != 0)))) &&
               ((*(uint *)(&DAT_10003104 + iVar5) < 2 || (iVar7 = recovered_10002081(), iVar7 != 0))
               )) {
              recovered_10001ef5();
              iVar7 = recovered_10002081();
              if ((iVar7 != 0) && (iVar7 = recovered_10002081(), iVar7 != 0)) {
                recovered_10001ef5();
                local_4b0 = (int *)0x3e7;
                while( true ) {
                  iVar7 = recovered_10001fa1(4,&local_47c);
                  if ((iVar7 == 0) || (local_47c == 0xffffffff)) goto LAB_10001571;
                  if ((~local_47c & 0x30000) == 0) break;
                  bVar15 = local_4b0 == (int *)0x0;
                  local_4b0 = (int *)((int)local_4b0 + -1);
                  if (bVar15) goto LAB_10001571;
                  recovered_10001ef5();
                }
                iVar7 = recovered_100020da();
                if ((iVar7 != 0) && (iVar7 = recovered_10002081(), iVar7 != 0)) {
                  recovered_10001ef5();
                  local_4a0 = 0;
                  iVar7 = recovered_100022c2(0,0,0,0,(undefined4 *)0x0);
                  if (iVar7 != 0) {
                    iVar7 = recovered_100022c2(0x1aa,2,0x18,0,&local_4bc);
                    if (iVar7 == 0) {
                      if (*(short *)(&DAT_10003112 + iVar5) == 1) {
                        iVar14 = recovered_10001f20();
                        uVar10 = 0x300000;
                        if (iVar14 != 0) goto LAB_10001149;
                      }
                    }
                    else {
                      uVar10 = 0x40300000;
                      if ((local_4bc & 0xfff) == 0x1aa) {
LAB_10001149:
                        iVar14 = 100;
                        goto LAB_1000114c;
                      }
                    }
                  }
                }
              }
            }
          }
          goto LAB_10001571;
        }
        goto LAB_10001066;
      }
      if (DAT_10003024 != local_488) {
        DAT_10003020 = DAT_10003020 + 1;
        local_4a8 = DAT_1000301c;
        recovered_100026bf(str_10002df7);
        recovered_100026e8(&DAT_10002e5e);
        recovered_10002795((uint)*in_ECX,2);
        local_4b8 = &DAT_10002e60;
        recovered_100026e8(&DAT_10002e60);
        recovered_10002795((uint)in_ECX[1],2);
        local_498 = &DAT_10002e62;
        recovered_100026e8(&DAT_10002e62);
        recovered_1000272e((uint)in_ECX[2]);
        recovered_100026bf(&DAT_10002e64);
        recovered_10002795((uint)*in_ECX,2);
        recovered_100026e8(local_4b8);
        recovered_10002795((uint)in_ECX[1],2);
        recovered_100026e8(local_498);
        recovered_1000272e((uint)in_ECX[2]);
        recovered_100026e8(&DAT_10002e69);
        recovered_10002795((uint)*(ushort *)(in_ECX + 4),4);
        recovered_100026e8(local_4b8);
        recovered_10002795((uint)*(ushort *)(in_ECX + 6),4);
        recovered_100026e8(&DAT_10002e6c);
        recovered_100026e8(&DAT_10002e6e);
        recovered_100026e8(str_10002e1d);
        if (local_4a8 == (int *)0x0) {
          return;
        }
        if ((code *)local_4a8[3] == (code *)0x0) {
          return;
        }
        (*(code *)local_4a8[3])(&local_474,str_10002e06,aiStack_418 + 1);
        return;
      }
    }
    recovered_10001d90();
  }
  return;
LAB_10000b6e:
  bVar15 = aiStack_418[1] == 0;
LAB_10000ba1:
  if (!bVar15) {
    return;
  }
  goto LAB_10000bad;
LAB_1000114c:
  bVar15 = iVar14 == 0;
  iVar14 = iVar14 + -1;
  if (bVar15) goto LAB_100011ec;
  iVar8 = recovered_100022c2(0,2,0x18,0,&local_4bc);
  if (((iVar8 == 0) || ((local_4bc & 0xfff9a028) != 0x20)) ||
     (iVar8 = recovered_100022c2(uVar10,2,0,0,&local_4a0), iVar8 == 0)) goto LAB_10001571;
  if (SBORROW4(0,local_4a0 & 0x81000000) && (local_4a0 & 0x300000) != 0) {
    bVar15 = true;
    goto LAB_100011fc;
  }
  recovered_10001ef5();
  goto LAB_1000114c;
LAB_100011ec:
  bVar15 = (local_4a0 & 0x300000) != 0;
LAB_100011fc:
  if (((!(bool)(bVar15 ^ 1U | !SBORROW4(0,local_4a0 & 0x81000000))) &&
      ((iVar7 == 0 & (byte)(local_4a0 >> 0x1e) & 1) == 0)) &&
     ((iVar7 = recovered_100022c2(0,1,8,0,(undefined4 *)0x0), iVar7 != 0 &&
      ((iVar7 = recovered_100022c2(0,2,0x18,0,&local_4bc), iVar7 != 0 &&
       (0xffff < local_4bc && (local_4bc & 0xe000) == 0)))))) {
    *(uint *)(&DAT_1000310c + iVar5) = local_4bc & 0xffff0000;
    iVar7 = recovered_100022c2(local_4bc & 0xffff0000,1,8,0,(undefined4 *)0x0);
    if (iVar7 != 0) {
      iVar7 = 0;
LAB_100012ba:
      if (iVar7 + 4 != 0x14) goto code_r0x100012c2;
      iVar7 = (int)&local_474 + 3;
      for (iVar14 = 4; iVar14 != 0; iVar14 = iVar14 + -1) {
        uVar12 = aiStack_418[iVar14] << 8;
        if (iVar14 != 1) {
          uVar12 = uVar12 | *(byte *)((int)aiStack_418 + iVar14 * 4 + -1);
        }
        *(uint *)(iVar7 + -3) =
             uVar12 >> 0x18 | (uVar12 & 0xff0000) >> 8 | (uVar12 & 0xff00) << 8 | uVar12 << 0x18;
        iVar7 = iVar7 + 4;
      }
      local_49c = local_4a0 & 0x40000000;
      local_4ac = (code *)recovered_10002654(0x7e);
      uVar12 = recovered_10002654(0x50);
      local_494 = recovered_10002654(0x16);
      local_4b0 = (int *)recovered_10002654(0x54);
      uVar6 = recovered_10002654(0x60);
      uVar9 = uVar6 >> 3 & 0xf;
      iVar7 = 0;
      if (uVar9 != 0 && ((uVar6 & 7) < 4 && -1 < (char)uVar6)) {
        iVar7 = (uint)(byte)(&DAT_10002f98)[uVar9] * *(int *)(&DAT_10002fa8 + (uVar6 & 7) * 4);
      }
      if ((((uint)local_4b0 & 4) == 0) || (iVar7 == 0)) goto LAB_10001571;
      if (local_4ac == (code *)0x1) {
        if (uVar12 == 9 && local_49c != 0) {
          uVar12 = recovered_10002654(0x30);
          uVar17 = CONCAT44((uVar12 >> 0x16) + (uint)(0xfffffbff < uVar12 * 0x400),
                            uVar12 * 0x400 + 0x400);
          goto LAB_100014bb;
        }
        goto LAB_10001571;
      }
      if (((local_4ac != (code *)0x0) || (uVar12 - 0xc < 0xfffffffd || local_49c != 0)) ||
         ((9 < uVar12 && (iVar14 = recovered_10002654(0x4f), iVar14 == 0)))) goto LAB_10001571;
      iVar14 = recovered_10002654(0x3e);
      iVar8 = recovered_10002654(0x2f);
      uVar17 = recovered_10002cf7(iVar14 + 1U,(uint)(iVar14 + 1U == 0),
                                  (uint)(byte)(((char)uVar12 + (char)iVar8) - 7));
LAB_100014bb:
      iVar8 = (int)((ulonglong)uVar17 >> 0x20);
      local_4a1 = iVar8 != 0;
      iVar14 = recovered_10002654(0xc);
      local_4b1 = true;
      if ((iVar14 == 0) && (0xfffffffc < local_494 - 0xcU && ((uint)local_4b0 & 0x10) != 0)) {
        local_4b1 = local_494 != 9 && local_4ac == (code *)0x1;
      }
      (&DAT_1000311c)[uVar3 * 0xc] = -(uint)(iVar8 != 0) | (uint)uVar17;
      *(int *)(&DAT_10003120 + iVar5) = iVar7;
      (&DAT_10003124)[iVar5] = local_4a1;
      (&DAT_10003125)[iVar5] = (byte)(local_49c >> 0x1e);
      (&DAT_10003126)[iVar5] = local_4b1;
      iVar7 = recovered_100022c2(*(undefined4 *)(&DAT_1000310c + iVar5),3,0x18,0,&local_4bc);
      if (((((iVar7 == 0) || ((local_4bc & 0xfff9a008) != 0)) ||
           (((&DAT_10003125)[iVar5] == '\0' &&
            ((iVar5 = recovered_100022c2(0x200,2,0x18,0,&local_4bc), iVar5 == 0 ||
             ((local_4bc & 0xfff9a008) != 0)))))) || (iVar5 = recovered_100020da(), iVar5 == 0)) ||
         (iVar5 = recovered_10002489(), iVar5 == 0)) goto LAB_10001571;
      (&DAT_10003114)[uVar3 * 0xc] = 1;
      DAT_10003024 = DAT_10003024 + 1;
      goto LAB_10001066;
    }
  }
LAB_10001571:
  recovered_10001dd1();
  recovered_10001e9a();
LAB_10001066:
  uVar12 = (int)local_4b8 + 1;
  goto LAB_10000c77;
code_r0x100012c2:
  iVar14 = recovered_10001fa1(4,(undefined4 *)((int)aiStack_418 + iVar7 + 4));
  iVar7 = iVar7 + 4;
  if (iVar14 == 0) goto LAB_10001571;
  goto LAB_100012ba;
}

#undef DAT_10002e5e
#undef DAT_10002e60
#undef DAT_10002e62
#undef DAT_10002e64
#undef DAT_10002e69
#undef DAT_10002e6c
#undef DAT_10002e6e
#undef DAT_10002f98
#undef DAT_10002fa8
#undef DAT_1000301c
#undef DAT_10003020
#undef DAT_10003024
#undef DAT_10003028
#undef DAT_100030f8
#undef DAT_100030fc
#undef DAT_10003100
#undef DAT_10003104
#undef DAT_10003108
#undef DAT_1000310c
#undef DAT_10003112
#undef DAT_10003114
#undef DAT_1000311c
#undef DAT_10003120
#undef DAT_10003124
#undef DAT_10003125
#undef DAT_10003126
#undef str_10002df7
#undef str_10002e06
#undef str_10002e1d
#undef bStack_419
#undef aiStack_418
#undef local_4bc
#undef local_4b8
#undef local_4b1
#undef local_4b0
#undef local_4ac
#undef local_4a8
#undef local_4a1
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

#undef DAT_10003020
#define DAT_10003020 (*(uint *)(((uintptr_t)pf_module_state + 0x26dU)))
#undef DAT_10003024
#define DAT_10003024 (*(uint *)(((uintptr_t)pf_module_state + 0x271U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000193b
 */

void recovered_1000193b(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  for (uVar1 = 0; uVar1 < DAT_10003024; uVar1 = uVar1 + 1) {
    recovered_10001e9a();
  }
  for (uVar1 = 0; uVar1 < DAT_10003020; uVar1 = uVar1 + 1) {
    recovered_10001d90();
  }
  DAT_10003024 = 0;
  DAT_10003020 = 0;
  return;
}

#undef DAT_10003020
#undef DAT_10003024

#undef DAT_10003024
#define DAT_10003024 (*(uint *)(((uintptr_t)pf_module_state + 0x271U)))
#undef DAT_10003114
#define DAT_10003114 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x361U)))
#undef DAT_1000311c
#define DAT_1000311c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x369U)))
#undef DAT_10003125
#define DAT_10003125 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x372U)))
#undef str_10002e71
#define str_10002e71 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xbeU)))
#undef str_10002e86
#define str_10002e86 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xd3U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000199d
 */

undefined4 recovered_1000199d(uint param_1,undefined4 *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  char *pcVar2;

  uVar1 = 0;
  if (((param_2 != (undefined4 *)0x0) && (param_1 < DAT_10003024)) &&
     ((&DAT_10003114)[param_1 * 0xc] != 0)) {
    *param_2 = (&DAT_1000311c)[param_1 * 0xc];
    pcVar2 = str_10002e86;
    if ((&DAT_10003125)[param_1 * 0x30] != '\0') {
      pcVar2 = str_10002e71;
    }
    recovered_100026bf(pcVar2);
    uVar1 = 1;
  }
  return uVar1;
}

#undef DAT_10003024
#undef DAT_10003114
#undef DAT_1000311c
#undef DAT_10003125
#undef str_10002e71
#undef str_10002e86

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001a04
 */

void recovered_10001a04(undefined4 param_1,undefined4 param_2,int param_3,uint param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10002836(param_3,param_4,0);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001a2a
 */

void recovered_10001a2a(undefined4 param_1,undefined4 param_2,int param_3,uint param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10002836(param_3,param_4,1);
  return;
}


#undef DAT_10003024
#define DAT_10003024 (*(uint *)(((uintptr_t)pf_module_state + 0x271U)))
#undef DAT_10003114
#define DAT_10003114 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x361U)))
#undef DAT_10003118
#define DAT_10003118 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x365U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001a50
 */

undefined4 recovered_10001a50(uint param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined4 uVar2;

  if (DAT_10003024 <= param_1) {
    return 0;
  }
  recovered_10002b8d();
  if (((&DAT_10003114)[param_1 * 0xc] == 0) || (iVar1 = recovered_10002489(), iVar1 == 0)) {
    recovered_10001e9a();
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  *(undefined4 *)(&DAT_10003118 + param_1 * 0x30) = 0;
  return uVar2;
}

#undef DAT_10003024
#undef DAT_10003114
#undef DAT_10003118

#undef DAT_10002ead
#define DAT_10002ead (*(uint8_t *)(((uintptr_t)pf_module_state + 0xfaU)))
#undef DAT_10003024
#define DAT_10003024 (*(uint *)(((uintptr_t)pf_module_state + 0x271U)))
#undef DAT_10003028
#define DAT_10003028 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x275U)))
#undef DAT_10003029
#define DAT_10003029 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x276U)))
#undef DAT_1000302a
#define DAT_1000302a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x277U)))
#undef DAT_100030fc
#define DAT_100030fc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x349U)))
#undef DAT_10003100
#define DAT_10003100 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x34dU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001aaa
 */

undefined4 recovered_10001aaa(uint param_1,int param_2)

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
  if (param_2 != 0) {
    if (param_1 < DAT_10003024) {
      iVar8 = *(int *)(&DAT_100030fc + param_1 * 0x30) * 0x34;
      uVar1 = (&DAT_10003028)[iVar8];
      uVar2 = (&DAT_10003029)[iVar8];
      uVar3 = (&DAT_1000302a)[iVar8];
      uVar4 = *(uint *)(&DAT_10003100 + param_1 * 0x30);
      for (iVar8 = -0x40; iVar8 != 0; iVar8 = iVar8 + 1) {
        *(undefined1 *)(param_2 + 0x40 + iVar8) = 0;
      }
      puVar7 = &DAT_10002ead;
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
  }
  return uVar5;
}

#undef DAT_10002ead
#undef DAT_10003024
#undef DAT_10003028
#undef DAT_10003029
#undef DAT_1000302a
#undef DAT_100030fc
#undef DAT_10003100

#define local_1c (*(uint *)(pf_stack_frame + 52))
#define local_34 (*(undefined4 *)(pf_stack_frame + 28))
#define local_30 (*(uint *)(pf_stack_frame + 32))
#define local_2c (*(undefined1 *)(pf_stack_frame + 36))
#define local_28 (*(undefined4 *)(pf_stack_frame + 40))
#define local_24 (*(undefined4 *)(pf_stack_frame + 44))
#define local_20 (*(undefined4 * *)(pf_stack_frame + 48))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001b58
 */

undefined4 recovered_10001b58(byte param_1,undefined1 param_2,undefined1 *param_3)

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
    iVar2 = recovered_10001cd5(param_1,param_2,0,4,(int)&local_30);
    if (((iVar2 == 0) || ((local_30 & 0xffff) == 0)) || ((local_30 & 0xffff) == 0xffff)) {
      uVar1 = 0;
    }
    else {
      iVar2 = recovered_10001cd5(param_1,param_2,8,4,(int)&local_24);
      uVar1 = 0;
      if (iVar2 != 0) {
        local_20 = (undefined4 *)(param_3 + 0x10);
        iVar2 = recovered_10001cd5(param_1,param_2,4,4,(int)local_20);
        if (iVar2 == 0) {
          *local_20 = 0;
        }
        iVar2 = recovered_10001cd5(param_1,param_2,0xc,4,(int)&local_34);
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
          iVar3 = recovered_10001cd5((char)local_1c,param_2,(short)iVar2 + 0x28,4,(int)&local_28);
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

#undef local_1c
#undef local_34
#undef local_30
#undef local_2c
#undef local_28
#undef local_24
#undef local_20

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001cd5
 */

undefined4
recovered_10001cd5(undefined1 param_1,undefined1 param_2,undefined2 param_3,undefined4 param_4,
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
 * Address: 0x10001d39
 */

undefined4
recovered_10001d39(undefined1 param_1,undefined1 param_2,undefined2 param_3,undefined4 param_4)

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
 * Address: 0x10001d90
 */

void recovered_10001d90(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int in_ECX;

  if (*(int *)(in_ECX + 0x30) != 0) {
    recovered_10001d39(*(undefined1 *)(in_ECX + 1),*(undefined1 *)(in_ECX + 2),4,
                       *(undefined4 *)(in_ECX + 0x2c));
    *(undefined4 *)(in_ECX + 0x30) = 0;
  }
  return;
}


#undef DAT_1000301c
#define DAT_1000301c (*(int * *)(((uintptr_t)pf_module_state + 0x269U)))
#undef str_10002e44
#define str_10002e44 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x91U)))
#undef str_10002e4c
#define str_10002e4c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x99U)))
#undef str_10002e54
#define str_10002e54 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa1U)))
#define local_d4 (*(undefined1 (*)[212])(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001dd1
 */

void recovered_10001dd1(void)

{
  unsigned char pf_stack_frame[272] __attribute__((aligned(16))) = {0};

  int in_ECX;
  char *in_EDX;

  recovered_100026bf(str_10002e44);
  recovered_100026e8(in_EDX);
  recovered_100026e8(str_10002e4c);
  recovered_1000272e(*(uint *)(in_ECX + 8));
  recovered_100026e8(str_10002e54);
  recovered_10002795(*(uint *)(in_ECX + 0x18),8);
  if ((((DAT_1000301c != (int *)0x0) && (*DAT_1000301c == 0x54584b57)) &&
      (0x2b < (uint)DAT_1000301c[2])) && ((code *)DAT_1000301c[10] != (code *)0x0)) {
    (*(code *)DAT_1000301c[10])(local_d4);
  }
  return;
}

#undef DAT_1000301c
#undef str_10002e44
#undef str_10002e4c
#undef str_10002e54
#undef local_d4

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001e9a
 */

void recovered_10001e9a(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int *in_ECX;

  in_ECX[7] = 0;
  if (*in_ECX != 0) {
    recovered_10002081();
    recovered_10001f20();
    recovered_10002081();
    recovered_10002081();
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001ef5
 */

void recovered_10001ef5(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int *in_ECX;

  if ((((in_ECX != (int *)0x0) && (*in_ECX == 0x54584b57)) && (0x33 < (uint)in_ECX[2])) &&
     ((code *)in_ECX[0xc] != (code *)0x0)) {
    (*(code *)in_ECX[0xc])();
  }
  return;
}


#define local_18 (*(uint (*)[6])(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001f20
 */

undefined4 recovered_10001f20(void)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  uint in_EDX;
  bool bVar3;

  iVar1 = recovered_10002081();
  if (iVar1 != 0) {
    iVar1 = 1000;
    while ((bVar3 = iVar1 != 0, iVar1 = iVar1 + -1, bVar3 &&
           (iVar2 = recovered_10001fa1(1,local_18), iVar2 != 0))) {
      if ((local_18[0] & in_EDX) == 0) {
        return 1;
      }
      recovered_10001ef5();
    }
  }
  return 0;
}

#undef local_18

#define local_1c (*(undefined4 *)(pf_stack_frame + 20))
#define local_18 (*(undefined4 (*)[6])(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001fa1
 */

undefined4 recovered_10001fa1(int param_1,undefined4 *param_2)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  int iVar2;
  int *in_ECX;

  if (param_1 == 2) {
    local_1c = 0;
    if (*in_ECX == 0 || param_2 == (undefined4 *)0x0) {
      return 0;
    }
    iVar2 = recovered_10002212(2,(int)&local_1c);
    if (iVar2 == 0) {
      return 0;
    }
    local_18[0] = local_1c;
  }
  else {
    if (param_1 == 1) {
      if (*in_ECX == 0 || param_2 == (undefined4 *)0x0) {
        return 0;
      }
      uVar1 = recovered_10002212(1,(int)param_2);
      return uVar1;
    }
    local_18[0] = 0;
    if (*in_ECX == 0 || param_2 == (undefined4 *)0x0) {
      return 0;
    }
    iVar2 = recovered_10002212(4,(int)local_18);
    if (iVar2 == 0) {
      return 0;
    }
  }
  *param_2 = local_18[0];
  return 1;
}

#undef local_1c
#undef local_18

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002081
 */

undefined4 recovered_10002081(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  int *in_ECX;

  if (*in_ECX == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = recovered_10002278();
  }
  return uVar1;
}


#define local_18 (*(byte (*)[24])(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100020da
 */

undefined4 recovered_100020da(void)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int in_ECX;
  uint in_EDX;
  uint uVar6;
  uint uVar7;
  bool bVar8;

  uVar1 = *(uint *)(in_ECX + 0xc);
  uVar7 = 0x100;
  if (1 < uVar1) {
    uVar7 = 0x7fe;
  }
  if (((uVar1 < 6) && (in_EDX != 0)) && (*(uint *)(in_ECX + 0x10) != 0)) {
    uVar6 = 1;
    while ((uint)((ulonglong)uVar6 * (ulonglong)in_EDX >> 0x20) <
           (uint)((uint)((ulonglong)uVar6 * (ulonglong)in_EDX) < *(uint *)(in_ECX + 0x10))) {
      if (uVar7 <= uVar6) {
        return 0;
      }
      uVar2 = uVar6 + 2;
      if (uVar6 == 1) {
        uVar2 = 2;
      }
      uVar6 = uVar6 * 2;
      if (1 < uVar1) {
        uVar6 = uVar2;
      }
    }
    iVar3 = recovered_10002081();
    if ((iVar3 != 0) && (iVar3 = recovered_10002081(), iVar3 != 0)) {
      iVar3 = 0x5dc;
      while ((bVar8 = iVar3 != 0, iVar3 = iVar3 + -1, bVar8 &&
             (iVar4 = recovered_10001fa1(2,(undefined4 *)local_18), iVar4 != 0))) {
        if ((local_18[0] & 2) != 0) {
          uVar5 = recovered_10002081();
          return uVar5;
        }
        recovered_10001ef5();
      }
    }
  }
  return 0;
}

#undef local_18

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002212
 */

undefined4 recovered_10002212(undefined4 param_1,int param_2)

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
      if (param_2 != 0 && pcVar2 != (code *)0x0) goto LAB_10002260;
    }
    pcVar2 = (code *)in_ECX[0x1a];
    if (param_2 != 0 && pcVar2 != (code *)0x0) {
LAB_10002260:
      uVar1 = (*pcVar2)();
      return uVar1;
    }
  }
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002278
 */

undefined4 recovered_10002278(void)

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
      if (pcVar1 != (code *)0x0) goto LAB_100022a6;
    }
    pcVar1 = (code *)in_ECX[0x1b];
    if (pcVar1 != (code *)0x0) {
LAB_100022a6:
      uVar2 = (*pcVar1)();
      return uVar2;
    }
  }
  return 0;
}


#define local_18 (*(uint (*)[6])(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100022c2
 */

undefined4
recovered_100022c2(undefined4 param_1,int param_2,undefined4 param_3,int param_4,undefined4 *param_5
                  )

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  int in_ECX;
  uint uVar3;
  bool bVar4;

  uVar3 = (uint)(param_4 != 0) * 2 + 1;
  if (param_2 == 3) {
    uVar3 = 3;
  }
  *(undefined4 *)(in_ECX + 0x18) = 0;
  iVar1 = recovered_10002518();
  if (iVar1 != 0) {
    iVar1 = 1000;
    while (((bVar4 = iVar1 != 0, iVar1 = iVar1 + -1, bVar4 &&
            (iVar2 = recovered_10001fa1(4,local_18), iVar2 != 0)) && (local_18[0] != 0xffffffff))) {
      if ((local_18[0] & uVar3) == 0) {
        iVar1 = recovered_10002081();
        if (iVar1 == 0) {
          return 0;
        }
        iVar1 = recovered_10002081();
        if (iVar1 == 0) {
          return 0;
        }
        recovered_10002590();
        iVar1 = recovered_10002081();
        if (iVar1 == 0) {
          return 0;
        }
        iVar1 = recovered_100025b8(10000);
        if (iVar1 == 0) {
          return 0;
        }
        iVar1 = recovered_10002081();
        if (iVar1 == 0) {
          return 0;
        }
        if ((param_5 != (undefined4 *)0x0) && (iVar1 = recovered_10001fa1(4,param_5), iVar1 == 0)) {
          return 0;
        }
        if (param_2 == 3) {
          iVar1 = recovered_100025b8(20000);
          if (iVar1 == 0) {
            return 0;
          }
          iVar1 = recovered_10002081();
          if (iVar1 == 0) {
            return 0;
          }
        }
        return 1;
      }
      recovered_10001ef5();
    }
  }
  return 0;
}

#undef local_18

#define local_18 (*(uint (*)[6])(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002489
 */

undefined4 recovered_10002489(void)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  int iVar1;
  int in_ECX;
  int iVar2;
  bool bVar3;

  iVar2 = 5000;
  while( true ) {
    bVar3 = iVar2 == 0;
    iVar2 = iVar2 + -1;
    if (bVar3) {
      return 0;
    }
    iVar1 = recovered_100022c2(*(undefined4 *)(in_ECX + 0x14),2,0x18,0,local_18);
    if (iVar1 == 0) {
      return 0;
    }
    if ((local_18[0] & 0xfff9a008) != 0) {
      return 0;
    }
    if ((local_18[0] & 0x1f00) == 0x900) break;
    if ((local_18[0] & 0x1c00) != 0xc00) {
      return 0;
    }
    recovered_10001ef5();
  }
  return 1;
}

#undef local_18

#define local_18 (*(int *)(pf_stack_frame + 24))
#define local_14 (*(int (*)[5])(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002518
 */

undefined4 recovered_10002518(void)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  int iVar1;
  int in_ECX;

  iVar1 = recovered_10001fa1(4,&local_18);
  if ((iVar1 == 0) ||
     (iVar1 = recovered_10001fa1(4,local_14),
     ((byte)((uint)local_18 >> 0x10) & local_14[0] != -1 & (local_18 != -1 && iVar1 != 0) &
     -1 < (char)local_14[0]) == 0)) {
    *(undefined4 *)(in_ECX + 0x1c) = 0;
    return 0;
  }
  return 1;
}

#undef local_18
#undef local_14

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002590
 */

void recovered_10002590(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int *in_ECX;

  if ((((in_ECX != (int *)0x0) && (*in_ECX == 0x54584b57)) && (0x7b < (uint)in_ECX[2])) &&
     ((code *)in_ECX[0x1e] != (code *)0x0)) {
    (*(code *)in_ECX[0x1e])();
  }
  return;
}


#define local_1c (*(undefined4 *)(pf_stack_frame + 20))
#define local_18 (*(uint (*)[6])(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100025b8
 */

undefined4 recovered_100025b8(int param_1)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  int iVar1;
  int in_ECX;
  uint in_EDX;
  bool bVar2;

  while( true ) {
    bVar2 = param_1 == 0;
    param_1 = param_1 + -1;
    if (bVar2) {
      return 0;
    }
    iVar1 = recovered_10001fa1(4,local_18);
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = recovered_10001fa1(4,&local_1c);
    if (iVar1 == 0) {
      return 0;
    }
    *(uint *)(in_ECX + 0x18) = local_18[0];
    if ((local_18[0] & 0xffff8080) != 0) break;
    if ((PF_PART1(local_1c, 2) & 1) == 0) {
      return 0;
    }
    if ((in_EDX & local_18[0]) != 0) {
      return 1;
    }
    recovered_10001ef5();
  }
  return 0;
}

#undef local_1c
#undef local_18

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002654
 */

int recovered_10002654(uint param_1)

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
 * Address: 0x100026bf
 */

void recovered_100026bf(char *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined1 *in_ECX;
  int in_EDX;

  if (in_EDX != 0 && in_ECX != (undefined1 *)0x0) {
    *in_ECX = 0;
    recovered_100026e8(param_1);
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100026e8
 */

void recovered_100026e8(char *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int in_ECX;
  uint in_EDX;

  uVar1 = recovered_100027e7();
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
 * Address: 0x1000272e
 */

void recovered_1000272e(uint param_1)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  uint uVar1;

  if (param_1 == 0) {
    recovered_10002808(0x30);
  }
  else {
    for (uVar1 = 0; (param_1 != 0 && (uVar1 < 10)); uVar1 = uVar1 + 1) {
      abStack_1f[uVar1 + 1] = (byte)(param_1 % 10) | 0x30;
      param_1 = param_1 / 10;
    }
    while (uVar1 != 0) {
      recovered_10002808(abStack_1f[uVar1]);
      uVar1 = uVar1 - 1;
    }
  }
  return;
}

#undef abStack_1f

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002795
 */

void recovered_10002795(uint param_1,int param_2)

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
    recovered_10002808(cVar3);
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100027e7
 */

int recovered_100027e7(void)

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
 * Address: 0x10002808
 */

void recovered_10002808(undefined1 param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int in_ECX;
  uint in_EDX;

  iVar1 = recovered_100027e7();
  if ((in_ECX != 0) && (iVar1 + 1U < in_EDX)) {
    *(undefined1 *)(in_ECX + iVar1) = param_1;
    *(undefined1 *)(in_ECX + 1 + iVar1) = 0;
  }
  return;
}


#undef DAT_10003024
#define DAT_10003024 (*(uint *)(((uintptr_t)pf_module_state + 0x271U)))
#undef DAT_10003114
#define DAT_10003114 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x361U)))
#undef DAT_10003118
#define DAT_10003118 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x365U)))
#undef DAT_1000311c
#define DAT_1000311c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x369U)))
#undef DAT_10003125
#define DAT_10003125 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x372U)))
#undef DAT_10003126
#define DAT_10003126 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x373U)))
#define local_38 (*(int *)(pf_stack_frame + 40))
#define local_2c (*(uint *)(pf_stack_frame + 52))
#define local_28 (*(uint *)(pf_stack_frame + 56))
#define local_24 (*(undefined4 *)(pf_stack_frame + 60))
#define local_20 (*(undefined4 *)(pf_stack_frame + 64))
#define local_1c (*(undefined4 *)(pf_stack_frame + 68))
#define local_18 (*(undefined4 *)(pf_stack_frame + 72))
#define uStack_44 (*(undefined4 *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002836
 */

undefined4 recovered_10002836(int param_1,uint param_2,int param_3)

{
  unsigned char pf_stack_frame[128] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  uint uVar3;
  uint in_ECX;
  uint in_EDX;
  undefined4 uVar4;
  uint uVar5;

  uVar4 = 0;
  if (0x7fffff < param_2) {
    return 0;
  }
  if (param_1 == 0) {
    return 0;
  }
  if (DAT_10003024 <= in_ECX) {
    return 0;
  }
  iVar1 = in_ECX * 0x30;
  recovered_10002b8d();
  if ((((&DAT_10003114)[in_ECX * 0xc] != 0) && (in_EDX < (uint)(&DAT_1000311c)[in_ECX * 0xc])) &&
     (param_2 - 1 < (&DAT_1000311c)[in_ECX * 0xc] - in_EDX)) {
    if (((&DAT_10003125)[iVar1] != '\0') ||
       (uVar4 = 0,
       !CARRY4(param_2,in_EDX) &&
       (uint)(0x800000 < param_2 + in_EDX) <= -(uint)CARRY4(param_2,in_EDX))) {
      uVar4 = 0;
      iVar2 = recovered_10002518();
      if (iVar2 != 0) {
        if (param_3 == 0) {
          local_20 = 0x12;
          uStack_44 = 0x11;
        }
        else {
          if ((((&DAT_10003126)[iVar1] != '\0') ||
              (iVar2 = recovered_10001fa1(4,&local_2c), iVar2 == 0)) || ((local_2c & 0x80000) == 0))
          goto LAB_10002b7c;
          local_20 = 2;
          uStack_44 = 0x18;
        }
        local_24 = uStack_44;
        local_38 = param_1 + 3;
        for (local_28 = 0; uVar4 = 1, local_28 != param_2; local_28 = local_28 + 1) {
          uVar3 = in_EDX + local_28;
          if ((0x7fffff < uVar3 & ((&DAT_10003125)[iVar1] ^ 1)) != 0) {
LAB_10002b59:
            recovered_10001dd1();
            recovered_10001e9a();
            uVar4 = 0;
            break;
          }
          uVar5 = uVar3 * 0x200;
          if ((&DAT_10003125)[iVar1] != 0) {
            uVar5 = uVar3;
          }
          iVar2 = recovered_10001fa1(4,&local_18);
          if (((iVar2 == 0) ||
              (((param_3 != 0 && (((&DAT_10003126)[iVar1] != '\0' || ((PF_PART1(local_18, 2) & 8) == 0))))
               || (iVar2 = recovered_10002081(), iVar2 == 0)))) ||
             (((((iVar2 = recovered_10002081(), iVar2 == 0 ||
                 (iVar2 = recovered_10002081(), iVar2 == 0)) ||
                (iVar2 = recovered_100022c2(uVar5,2,0x18,1,&local_2c), iVar2 == 0)) ||
               (((local_2c & 0xfff9a008) != 0 || (iVar2 = recovered_100025b8(20000), iVar2 == 0))))
              || (iVar2 = recovered_10002081(), iVar2 == 0)))) goto LAB_10002b59;
          for (uVar3 = 0; uVar3 < 0x200; uVar3 = uVar3 + 4) {
            if (param_3 == 0) {
              iVar2 = recovered_10001fa1(4,&local_1c);
              if (iVar2 == 0) goto LAB_10002b59;
              *(undefined4 *)(local_38 + -3 + uVar3) = local_1c;
            }
            else {
              local_1c = *(undefined4 *)(local_38 + -3 + uVar3);
              iVar2 = recovered_10002081();
              if (iVar2 == 0) goto LAB_10002b59;
            }
          }
          recovered_10002590();
          iVar2 = recovered_100025b8(20000);
          if (iVar2 == 0) goto LAB_10002b59;
          iVar2 = recovered_10002081();
          if (iVar2 != 0 && param_3 != 0) {
            iVar2 = recovered_10002489();
          }
          if (iVar2 == 0) goto LAB_10002b59;
          local_38 = local_38 + 0x200;
        }
      }
    }
  }
LAB_10002b7c:
  *(undefined4 *)(&DAT_10003118 + iVar1) = 0;
  return uVar4;
}

#undef DAT_10003024
#undef DAT_10003114
#undef DAT_10003118
#undef DAT_1000311c
#undef DAT_10003125
#undef DAT_10003126
#undef local_38
#undef local_2c
#undef local_28
#undef local_24
#undef local_20
#undef local_1c
#undef local_18
#undef uStack_44

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002b8d
 */

void recovered_10002b8d(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int in_ECX;

  while( true ) {
    iVar1 = __atomic_exchange_n(&(*(int *)(in_ECX + 0x20)),1,__ATOMIC_SEQ_CST);
    if (iVar1 == 0) break;
    do {
    } while (*(int *)(in_ECX + 0x20) != 0);
  }
  return;
}


#undef DAT_1000301c
#define DAT_1000301c (*(int * *)(((uintptr_t)pf_module_state + 0x269U)))
#undef DAT_10003020
#define DAT_10003020 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x26dU)))
#undef DAT_10003024
#define DAT_10003024 (*(int *)(((uintptr_t)pf_module_state + 0x271U)))
#undef DAT_1000311c
#define DAT_1000311c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x369U)))
#undef str_10002eb2
#define str_10002eb2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xffU)))
#undef str_10002ec6
#define str_10002ec6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x113U)))
#undef str_10002ed4
#define str_10002ed4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x121U)))
#undef str_10002f24
#define str_10002f24 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x171U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002bac
 */

undefined4 recovered_10002bac(undefined4 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  bool bVar7;

  uVar1 = 0;
  if (DAT_10003024 != 0 && (DAT_1000301c != (int *)0x0 && param_1 != (undefined4 *)0x0)) {
    iVar6 = 0;
    puVar2 = &DAT_1000311c;
    uVar4 = 0;
    iVar5 = 0;
    iVar3 = DAT_10003024;
    while (bVar7 = iVar3 != 0, iVar3 = iVar3 + -1, bVar7) {
      if (puVar2[-2] != 0) {
        iVar6 = iVar6 + 1;
        bVar7 = CARRY4(uVar4,*puVar2);
        uVar4 = uVar4 + *puVar2;
        iVar5 = iVar5 + (uint)bVar7;
      }
      puVar2 = puVar2 + 0xc;
    }
    recovered_100009a9();
    *param_1 = 500;
    param_1[1] = 1;
    param_1[3] = 0x11;
    uVar1 = 9;
    if (iVar6 == DAT_10003024) {
      uVar1 = 0x13;
    }
    param_1[4] = uVar1;
    uVar1 = 0;
    if ((((DAT_1000301c != (int *)0x0) && (*DAT_1000301c == 0x54584b57)) &&
        (0x2f < (uint)DAT_1000301c[2])) && ((code *)DAT_1000301c[0xb] != (code *)0x0)) {
      uVar1 = (*(code *)DAT_1000301c[0xb])();
    }
    param_1[6] = uVar1;
    param_1[0x11] = DAT_10003020;
    param_1[0x12] = iVar6;
    param_1[0x13] = uVar4;
    param_1[0x14] = iVar5;
    recovered_100026bf(str_10002eb2);
    recovered_100026bf(str_10002ec6);
    recovered_100026bf(str_10002ed4);
    recovered_100026bf(str_10002f24);
    uVar1 = 1;
  }
  return uVar1;
}

#undef DAT_1000301c
#undef DAT_10003020
#undef DAT_10003024
#undef DAT_1000311c
#undef str_10002eb2
#undef str_10002ec6
#undef str_10002ed4
#undef str_10002f24

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002cf7
 */

undefined8 recovered_10002cf7(uint param_1,uint param_2,uint param_3)

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
    if (0x3f < param_3) goto LAB_10002d32;
    bVar2 = (byte)param_3;
    if (0x1f < param_3) {
      uVar3 = param_1 << (bVar2 & 0x1f);
      uVar1 = 0;
      goto LAB_10002d32;
    }
    uVar3 = param_1 >> 0x20 - (bVar2 & 0x1f);
    param_1 = param_1 << (bVar2 & 0x1f);
    uVar3 = param_2 << (bVar2 & 0x1f) | uVar3;
  }
  uVar1 = param_1;
LAB_10002d32:
  return CONCAT44(uVar3,uVar1);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002d39
 */

undefined8 recovered_10002d39(uint param_1,uint param_2,uint param_3)

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
 * Address: 0x10002d7d
 */

undefined8 recovered_10002d7d(uint param_1,uint param_2,uint param_3)

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
