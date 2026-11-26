/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_100023f0
#define DAT_100023f0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x18U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000428
 */

undefined * recovered_10000428(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return &DAT_100023f0;
}

#undef DAT_100023f0

#undef DAT_10008000
#define DAT_10008000 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5c28U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000434
 */

undefined1 * recovered_10000434(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return &DAT_10008000;
}

#undef DAT_10008000

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000440
 */

bool recovered_10000440(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 == 0x10;
}


#undef DAT_100024a3
#define DAT_100024a3 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xcbU)))
#undef DAT_100024d0
#define DAT_100024d0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xf8U)))
#undef DAT_100024d3
#define DAT_100024d3 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xfbU)))
#undef DAT_100024d8
#define DAT_100024d8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x100U)))
#undef DAT_100024dd
#define DAT_100024dd (*(uint8_t *)(((uintptr_t)pf_module_state + 0x105U)))
#undef DAT_100024e2
#define DAT_100024e2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x10aU)))
#undef DAT_100024e7
#define DAT_100024e7 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x10fU)))
#undef DAT_100024ec
#define DAT_100024ec (*(uint8_t *)(((uintptr_t)pf_module_state + 0x114U)))
#undef DAT_100024f1
#define DAT_100024f1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x119U)))
#undef DAT_100024f6
#define DAT_100024f6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x11eU)))
#undef DAT_10002535
#define DAT_10002535 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x15dU)))
#undef DAT_10002569
#define DAT_10002569 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x191U)))
#undef DAT_1000257a
#define DAT_1000257a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1a2U)))
#undef DAT_100025f1
#define DAT_100025f1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x219U)))
#undef DAT_1000260d
#define DAT_1000260d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x235U)))
#undef DAT_10008000
#define DAT_10008000 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5c28U)))
#undef DAT_1000a000
#define DAT_1000a000 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7c28U)))
#undef DAT_1000c610
#define DAT_1000c610 (*(uint64_t *)(((uintptr_t)pf_module_state + 0xa238U)))
#undef DAT_1000c618
#define DAT_1000c618 (*(byte *)(((uintptr_t)pf_module_state + 0xa240U)))
#undef DAT_1000c619
#define DAT_1000c619 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa241U)))
#undef DAT_1000c820
#define DAT_1000c820 (*(uint64_t *)(((uintptr_t)pf_module_state + 0xa448U)))
#undef str_1000246c
#define str_1000246c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x94U)))
#undef str_100024c2
#define str_100024c2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xeaU)))
#undef str_100024fb
#define str_100024fb (*(char (*)[1])(((uintptr_t)pf_module_state + 0x123U)))
#undef str_1000250d
#define str_1000250d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x135U)))
#undef str_10002520
#define str_10002520 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x148U)))
#undef str_10002538
#define str_10002538 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x160U)))
#undef str_1000256e
#define str_1000256e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x196U)))
#undef str_1000257f
#define str_1000257f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1a7U)))
#undef str_1000259a
#define str_1000259a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1c2U)))
#undef str_100025b5
#define str_100025b5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1ddU)))
#undef str_100025c0
#define str_100025c0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1e8U)))
#undef str_100025d3
#define str_100025d3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1fbU)))
#undef str_100025db
#define str_100025db (*(char (*)[1])(((uintptr_t)pf_module_state + 0x203U)))
#undef str_100025f5
#define str_100025f5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x21dU)))
#undef str_10002611
#define str_10002611 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x239U)))
#undef str_1000262d
#define str_1000262d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x255U)))
#undef str_10002643
#define str_10002643 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x26bU)))
#define aiStack_23a0 (*(int (*)[2280])(pf_stack_frame + 16))
#define uStack_2398 (*(ulong *)(pf_stack_frame + 24))
#define uStack_3a0 (*(ulong *)(pf_stack_frame + 8208))
#define auStack_398 (*(ulong (*)[115])(pf_stack_frame + 8216))
#define pcStack_358 (*(char * *)(pf_stack_frame + 8280))
#define pcStack_350 (*(char * *)(pf_stack_frame + 8288))
#define acStack_348 (*(char (*)[840])(pf_stack_frame + 8296))
#define acStack_240 (*(char (*)[576])(pf_stack_frame + 8560))
#define local_248 (*(char * *)(pf_stack_frame + 8552))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000044c
 */

uint recovered_1000044c(uint capability,uint operation,void *request)

{
  unsigned char pf_stack_frame[9168] __attribute__((aligned(16))) = {0};

  uchar uVar1;
  byte bVar2;
  int iVar3;
  ulong uVar4;
  char *pcVar5;
  uint uVar6;
  undefined8 *puVar7;
  code *pcVar8;
  ulong uVar9;
  long lVar10;
  char *pcVar11;

  lVar10 = DAT_1000c820;
  if (request == (void *)0x0) {
    return 0;
  }
  if (capability != 0x10) {
    return 0;
  }
  if (DAT_1000c820 == 0) {
    return 0;
  }
  if ((*(int *)request != 1) || (*(int *)((long)request + 4) != 0x48)) {
    return 0;
  }
  if (operation != 0x50001) {
    if (operation == 0x50003) {
      puVar7 = *(undefined8 **)((long)request + 8);
      if (puVar7 == (undefined8 *)0x0) {
        return 0;
      }
      *(undefined4 *)((long)puVar7 + 0x6c) = 0;
      *(undefined8 *)((long)puVar7 + 100) = 0;
      *(undefined8 *)((long)puVar7 + 0x5c) = 0;
      *(undefined8 *)((long)puVar7 + 0x54) = 0;
      *(undefined8 *)((long)puVar7 + 0x4c) = 0;
      *(undefined8 *)((long)puVar7 + 0x44) = 0;
      *(undefined8 *)((long)puVar7 + 0x3c) = 0;
      *(undefined8 *)((long)puVar7 + 0x34) = 0;
      *(undefined8 *)((long)puVar7 + 0x2c) = 0;
      *(undefined8 *)((long)puVar7 + 0x24) = 0;
      *(undefined8 *)((long)puVar7 + 0x1c) = 0;
      *(undefined8 *)((long)puVar7 + 0x14) = 0;
      *(undefined8 *)((long)puVar7 + 0xc) = 0;
      *puVar7 = 0x7000000001;
      *(undefined4 *)(puVar7 + 1) = 1;
      recovered_10000a90(puVar7 + 2,&DAT_100024a3,5);
      return 1;
    }
    if (operation == 0x50005) {
      (**(code **)(DAT_1000c820 + 8))(str_1000246c);
      return 1;
    }
    return 0;
  }
  pcVar11 = *(char **)((long)request + 8);
  if (pcVar11 == (char *)0x0) {
    return 0;
  }
  uVar4 = recovered_10000c24(pcVar11);
  local_248 = (char *)0x0;
  DAT_1000c618 = 0;
  DAT_1000c610 = 0;
  if (0x1ff < uVar4) {
    pcVar11 = str_100024c2;
    goto LAB_10000570;
  }
  recovered_10000a90(acStack_240,pcVar11,uVar4 + 1);
  uVar1 = recovered_10000cb0(acStack_240,&DAT_100024d0);
  if (uVar1 == '\0') {
    pcVar5 = &DAT_1000c619;
    pcVar11 = acStack_240;
  }
  else {
    uVar4 = recovered_10000c24(&DAT_1000c619);
    pcVar5 = acStack_240;
    pcVar11 = &DAT_1000c619;
  }
  recovered_10000a90(pcVar5,pcVar11,uVar4 + 1);
  uVar4 = recovered_10000c24(acStack_240);
  bVar2 = recovered_10000cb0(acStack_240,&DAT_100024d3);
  if (((bVar2 & 1) == 0) && (uVar1 = recovered_10000cb0(acStack_240,&DAT_100024d8), uVar1 == '\0'))
  {
    uVar1 = recovered_10000cb0(acStack_240,&DAT_100024dd);
    if (uVar1 != '\0') {
      DAT_1000a000 = 0;
      DAT_10008000 = 0;
      goto LAB_10000640;
    }
    uVar1 = recovered_10000cb0(acStack_240,&DAT_100024e2);
    if (uVar1 == '\0') {
      uVar1 = recovered_10000cb0(acStack_240,&DAT_100024e7);
      if (uVar1 != '\0') {
        recovered_10000cdc(&DAT_10008000,&DAT_10008000 + DAT_1000a000,0);
        goto LAB_10000640;
      }
      pcVar11 = acStack_240 + uVar4;
      uVar1 = recovered_10001004(acStack_240,pcVar11,&DAT_100024ec,&local_248);
      if (uVar1 != '\0') {
        recovered_100010ac(local_248,pcVar11);
        goto LAB_10000640;
      }
      uVar1 = recovered_10001004(acStack_240,pcVar11,&DAT_100024f1,&local_248);
      if (uVar1 == '\0') {
        uVar1 = recovered_10001004(acStack_240,pcVar11,&DAT_100024f6,&local_248);
        if (uVar1 == '\0') {
          uVar1 = recovered_10001004(acStack_240,pcVar11,&DAT_10002569,&local_248);
          if (uVar1 == '\0') {
            uVar1 = recovered_10001004(acStack_240,pcVar11,&DAT_1000257a,&local_248);
            if (uVar1 == '\0') {
              uVar1 = recovered_10001004(acStack_240,pcVar11,str_100025b5,&local_248);
              if (uVar1 == '\0') {
                uVar1 = recovered_10001004(acStack_240,pcVar11,str_100025d3,&local_248);
                if (uVar1 == '\0') {
                  uVar1 = recovered_10001004(acStack_240,pcVar11,&DAT_100025f1,&local_248);
                  if (uVar1 == '\0') {
                    uVar1 = recovered_10001004(acStack_240,pcVar11,&DAT_1000260d,&local_248);
                    if (uVar1 == '\0') {
                      uVar4 = recovered_10000c24(acStack_240);
                      if (uVar4 + 1 < 0x2000U - DAT_1000a000) {
                        recovered_10000a90(&DAT_10008000 + DAT_1000a000,acStack_240,uVar4);
                        lVar10 = DAT_1000a000 + uVar4;
                        DAT_1000a000 = lVar10 + 1;
                        (&DAT_10008000)[lVar10] = 10;
LAB_10000a7c:
                        (&DAT_10008000)[DAT_1000a000] = 0;
                        goto LAB_10000640;
                      }
                      pcVar11 = str_1000262d;
                    }
                    else {
                      uVar1 = recovered_100018dc(local_248,acStack_348);
                      if ((uVar1 == '\0') ||
                         (iVar3 = (**(code **)(DAT_1000c820 + 0x30))(acStack_348,1), iVar3 != 0))
                      goto LAB_10000640;
                      pcVar11 = str_10002611;
                    }
                  }
                  else {
                    uVar1 = recovered_100018dc(local_248,acStack_348);
                    if ((uVar1 == '\0') ||
                       (iVar3 = (**(code **)(DAT_1000c820 + 0x30))(acStack_348,0), iVar3 != 0))
                    goto LAB_10000640;
                    pcVar11 = str_100025f5;
                  }
                }
                else {
                  uVar1 = recovered_100018dc(local_248,acStack_348);
                  if ((uVar1 == '\0') ||
                     (iVar3 = (**(code **)(DAT_1000c820 + 0x28))(acStack_348), iVar3 != 0))
                  goto LAB_10000640;
                  pcVar11 = str_100025db;
                }
              }
              else {
                uVar1 = recovered_100018dc(local_248,acStack_348);
                if ((uVar1 == '\0') ||
                   (iVar3 = (**(code **)(DAT_1000c820 + 0x20))(acStack_348), iVar3 != 0))
                goto LAB_10000640;
                pcVar11 = str_100025c0;
              }
            }
            else {
              auStack_398[0] = 0;
              uVar1 = recovered_100018dc(local_248,acStack_348);
              if (uVar1 == '\0') goto LAB_10000640;
              iVar3 = (**(code **)(DAT_1000c820 + 0x10))
                                (acStack_348,aiStack_23a0,0x1fff,auStack_398);
              uVar4 = auStack_398[0];
              pcVar11 = str_1000257f;
              if (((iVar3 != 0) && (auStack_398[0] >> 0xd == 0)) &&
                 (auStack_398[0] <= 0x1fffU - DAT_1000a000)) {
                uVar9 = 0;
                pcVar11 = str_1000259a;
                do {
                  if (auStack_398[0] == uVar9) {
                    recovered_10000a90(&DAT_10008000 + DAT_1000a000,aiStack_23a0,auStack_398[0]);
                    DAT_1000a000 = DAT_1000a000 + uVar4;
                    goto LAB_10000a7c;
                  }
                  pcVar5 = (char *)((long)aiStack_23a0 + uVar9);
                  uVar9 = uVar9 + 1;
                } while (*pcVar5 != '\0');
              }
            }
          }
          else {
            uVar1 = recovered_100018dc(local_248,acStack_348);
            if ((uVar1 == '\0') ||
               (iVar3 = (**(code **)(DAT_1000c820 + 0x18))(acStack_348,&DAT_10008000,DAT_1000a000),
               iVar3 != 0)) goto LAB_10000640;
            pcVar11 = str_1000256e;
          }
        }
        else {
          pcStack_358 = local_248;
          uStack_3a0 = 0;
          pcStack_350 = pcVar11;
          uVar1 = recovered_10001328(&pcStack_358,acStack_348,0x40);
          if (uVar1 == '\0') {
            pcVar11 = str_100024fb;
          }
          else {
            lVar10 = 0;
            while ((bVar2 = recovered_100013ec(&pcStack_358), (bVar2 & 1) == 0 &&
                   ((DAT_1000c618 & 1) == 0))) {
              if (lVar10 == 8) {
                pcVar11 = str_1000250d;
                goto LAB_10000570;
              }
              recovered_10001428(aiStack_23a0,&pcStack_358,7);
              if ((aiStack_23a0[0] != 1) || ((long)uStack_2398 < 0)) {
                pcVar11 = str_10002520;
                goto LAB_10000570;
              }
              auStack_398[lVar10] = uStack_2398;
              lVar10 = lVar10 + 1;
            }
            if (((DAT_1000c618 & 1) == 0) &&
               (iVar3 = (**(code **)(DAT_1000c820 + 0x38))
                                  (acStack_348,lVar10,auStack_398,&uStack_3a0),
               iVar3 != 0)) {
              recovered_100023c4((undefined1 *)aiStack_23a0,0x110);
              uStack_2398 = uStack_3a0;
              aiStack_23a0[0] = 1;
              recovered_10001798(aiStack_23a0);
              pcVar8 = *(code **)(DAT_1000c820 + 8);
              pcVar11 = &DAT_10002535;
              goto LAB_1000063c;
            }
            pcVar11 = str_10002538;
          }
        }
LAB_10000570:
        recovered_10000c3c(pcVar11);
        goto LAB_10000640;
      }
      pcVar8 = *(code **)(DAT_1000c820 + 0x40);
      pcVar11 = local_248;
    }
    else {
      pcVar8 = *(code **)(lVar10 + 8);
      pcVar11 = &DAT_10008000;
    }
  }
  else {
    pcVar8 = *(code **)(lVar10 + 8);
    pcVar11 = str_10002643;
  }
LAB_1000063c:
  (*pcVar8)(pcVar11);
LAB_10000640:
  uVar6 = 1;
  if (DAT_1000c618 != 0) {
    uVar6 = 2;
  }
  return uVar6;
}

#undef DAT_100024a3
#undef DAT_100024d0
#undef DAT_100024d3
#undef DAT_100024d8
#undef DAT_100024dd
#undef DAT_100024e2
#undef DAT_100024e7
#undef DAT_100024ec
#undef DAT_100024f1
#undef DAT_100024f6
#undef DAT_10002535
#undef DAT_10002569
#undef DAT_1000257a
#undef DAT_100025f1
#undef DAT_1000260d
#undef DAT_10008000
#undef DAT_1000a000
#undef DAT_1000c610
#undef DAT_1000c618
#undef DAT_1000c619
#undef DAT_1000c820
#undef str_1000246c
#undef str_100024c2
#undef str_100024fb
#undef str_1000250d
#undef str_10002520
#undef str_10002538
#undef str_1000256e
#undef str_1000257f
#undef str_1000259a
#undef str_100025b5
#undef str_100025c0
#undef str_100025d3
#undef str_100025db
#undef str_100025f5
#undef str_10002611
#undef str_1000262d
#undef str_10002643
#undef aiStack_23a0
#undef uStack_2398
#undef uStack_3a0
#undef auStack_398
#undef pcStack_358
#undef pcStack_350
#undef acStack_348
#undef acStack_240
#undef local_248

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000a90
 */

void recovered_10000a90(void *out,void *src,ulong length)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  for (; length != 0; length = length - 1) {
    *(undefined1 *)out = *(undefined1 *)src;
    out = (undefined1 *)((long)out + 1);
    src = (undefined1 *)((long)src + 1);
  }
  return;
}


#undef DAT_100023f0
#define DAT_100023f0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x18U)))
#undef DAT_1000c820
#define DAT_1000c820 (*(int * *)(((uintptr_t)pf_module_state + 0xa448U)))
#undef str_100024a8
#define str_100024a8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xd0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000aa8
 */

uint recovered_10000aa8(void *context,void *descriptor)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uchar uVar1;
  uint uVar2;

  uVar1 = recovered_10000ba0(context);
  if (((((descriptor == &DAT_100023f0 && uVar1 != '\0') &&
        (*(code **)((long)context + 0x38) != (code *)0x0)) &&
       (DAT_1000c820 = (int *)(**(code **)((long)context + 0x38))(str_100024a8,1,0x48),
       DAT_1000c820 != (int *)0x0)) &&
      (((*DAT_1000c820 == 1 && (DAT_1000c820[1] == 0x48)) &&
       ((*(long *)(DAT_1000c820 + 2) != 0 &&
        ((*(long *)(DAT_1000c820 + 4) != 0 && (*(long *)(DAT_1000c820 + 6) != 0)))))))) &&
     ((*(long *)(DAT_1000c820 + 8) != 0 &&
      (((((*(long *)(DAT_1000c820 + 10) != 0 && (*(long *)(DAT_1000c820 + 0xc) != 0)) &&
         (*(long *)(DAT_1000c820 + 0xe) != 0)) &&
        ((*(long *)(DAT_1000c820 + 0x10) != 0 &&
         (uVar1 = recovered_10000ba0(context), uVar1 != '\0')))) &&
       (*(code **)((long)context + 0x18) != (code *)0x0)))))) {
                    /* WARNING: Could not recover jumptable at 0x10000b90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)((long)context + 0x18))(((uintptr_t)pf_module_state+0xe3U),3,0x240002,((uintptr_t)pf_module_state+0x1c28U),0x28);
    return uVar2;
  }
  return 0;
}

#undef DAT_100023f0
#undef DAT_1000c820
#undef str_100024a8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000ba0
 */

uchar recovered_10000ba0(void *context)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;

  bVar1 = false;
  if (context != (void *)0x0) {
    if ((*(int *)context != 0x444f4d4b) || (*(uint *)((long)context + 4) < 1100000)) {
      return '\0';
    }
    bVar1 = 0x3f < *(uint *)((long)context + 8);
  }
  return bVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000be4
 */

undefined8 recovered_10000be4(int *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uchar uVar1;
  undefined8 uVar2;

  uVar1 = recovered_10000ba0(param_1);
  if ((uVar1 == '\0') || (*(code **)(param_1 + 8) == (code *)0x0)) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x10000c14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(param_1 + 8))(((uintptr_t)pf_module_state+0xe3U));
  return uVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000c24
 */

ulong recovered_10000c24(char *text)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  ulong uVar2;

  uVar1 = 0;
  do {
    uVar2 = uVar1;
    uVar1 = uVar2 + 1;
  } while (text[uVar2] != '\0');
  return uVar2;
}


#undef DAT_10002535
#define DAT_10002535 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x15dU)))
#undef DAT_10002640
#define DAT_10002640 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x268U)))
#undef DAT_1000c618
#define DAT_1000c618 (*(byte *)(((uintptr_t)pf_module_state + 0xa240U)))
#undef DAT_1000c820
#define DAT_1000c820 (*(uint64_t *)(((uintptr_t)pf_module_state + 0xa448U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000c3c
 */

void recovered_10000c3c(char *text)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if ((DAT_1000c618 & 1) == 0) {
    (**(code **)(DAT_1000c820 + 8))(&DAT_10002640);
    (**(code **)(DAT_1000c820 + 8))(text);
    (**(code **)(DAT_1000c820 + 8))(&DAT_10002535);
  }
  DAT_1000c618 = 1;
  return;
}

#undef DAT_10002535
#undef DAT_10002640
#undef DAT_1000c618
#undef DAT_1000c820

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000cb0
 */

uchar recovered_10000cb0(char *left,char *right)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;

  while( true ) {
    cVar1 = *left;
    if (cVar1 == '\0' || cVar1 != *right) break;
    left = left + 1;
    right = right + 1;
  }
  return cVar1 == *right;
}


#undef DAT_10002535
#define DAT_10002535 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x15dU)))
#undef DAT_10002640
#define DAT_10002640 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x268U)))
#undef DAT_100027f2
#define DAT_100027f2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x41aU)))
#undef DAT_10002805
#define DAT_10002805 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x42dU)))
#undef DAT_1000c618
#define DAT_1000c618 (*(byte *)(((uintptr_t)pf_module_state + 0xa240U)))
#undef DAT_1000c820
#define DAT_1000c820 (*(uint64_t *)(((uintptr_t)pf_module_state + 0xa448U)))
#undef str_100027cd
#define str_100027cd (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3f5U)))
#undef str_100027e9
#define str_100027e9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x411U)))
#undef str_100027f6
#define str_100027f6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x41eU)))
#undef str_1000280a
#define str_1000280a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x432U)))
#undef str_10002817
#define str_10002817 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x43fU)))
#undef str_10002823
#define str_10002823 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x44bU)))
#define pcStack_1a8 (*(char * *)(pf_stack_frame + 24))
#define pcStack_1a0 (*(char * *)(pf_stack_frame + 32))
#define pcStack_198 (*(char * *)(pf_stack_frame + 40))
#define pcStack_190 (*(char * *)(pf_stack_frame + 48))
#define pcStack_188 (*(char * *)(pf_stack_frame + 56))
#define pcStack_180 (*(char * *)(pf_stack_frame + 64))
#define pcStack_78 (*(char * *)(pf_stack_frame + 328))
#define local_70 (*(char * (*)[14])(pf_stack_frame + 336))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000cdc
 */

void recovered_10000cdc(char *begin,char *end,uint depth)

{
  unsigned char pf_stack_frame[480] __attribute__((aligned(16))) = {0};

  char *begin_00;
  uchar uVar1;
  byte bVar2;
  byte bVar3;
  char *pcVar4;
  char *end_00;
  int iVar5;
  char *pcVar6;
  int iVar7;

  if (0x10 < depth) {
    if ((DAT_1000c618 & 1) == 0) {
      (**(code **)(DAT_1000c820 + 8))(&DAT_10002640);
      (**(code **)(DAT_1000c820 + 8))(str_100027cd);
      (**(code **)(DAT_1000c820 + 8))(&DAT_10002535);
    }
    DAT_1000c618 = 1;
    return;
  }
LAB_10000d44:
  if (end <= begin) {
    return;
  }
LAB_10000d4c:
  if ((DAT_1000c618 & 1) != 0) {
    return;
  }
  uVar1 = recovered_100019f4();
  if (uVar1 == '\0') {
    return;
  }
  pcVar4 = recovered_10001a3c(begin,end);
  local_70[0] = (char *)0x0;
  bVar2 = recovered_10001004(begin,pcVar4,str_100027e9,local_70);
  if (((bVar2 & 1) != 0) ||
     (uVar1 = recovered_10001004(begin,pcVar4,(char *)((uintptr_t)pf_module_state+0x417U),local_70), uVar1 != '\0')) {
    pcStack_198 = (char *)0x0;
    pcStack_190 = (char *)0x0;
    pcStack_1a8 = (char *)0x0;
    pcStack_1a0 = (char *)0x0;
    iVar7 = 0;
    begin_00 = end;
    if (pcVar4 < end) {
      begin_00 = pcVar4 + 1;
    }
    pcVar6 = begin_00;
LAB_10000db8:
    if (end <= pcVar6) goto LAB_10000eec;
    end_00 = recovered_10001a3c(pcVar6,end);
    pcStack_78 = (char *)0x0;
    bVar3 = recovered_10001004(pcVar6,end_00,(char *)((uintptr_t)pf_module_state+0x417U),(char **)0x0);
    if (((bVar3 & 1) == 0) &&
       (uVar1 = recovered_10001004(pcVar6,end_00,str_100027e9,(char **)0x0), uVar1 == '\0')) {
      uVar1 = recovered_10001004(pcVar6,end_00,&DAT_100027f2,&pcStack_78);
      if (uVar1 != '\0') {
        pcStack_188 = pcStack_78;
        pcStack_180 = end_00;
        bVar3 = recovered_100013ec(&pcStack_188);
        if ((bVar3 & 1) == 0) {
          recovered_10000c3c(str_100027f6);
          iVar5 = 1;
        }
        else {
          if (iVar7 != 0) {
            iVar7 = iVar7 + -1;
            goto LAB_10000dfc;
          }
          pcStack_1a0 = end;
          if (end_00 < end) {
            pcStack_1a0 = end_00 + 1;
          }
          iVar5 = 5;
          pcStack_198 = pcVar6;
        }
        goto LAB_10000e08;
      }
      if (iVar7 == 0) {
        uVar1 = recovered_10001004(pcVar6,end_00,&DAT_10002805,&pcStack_78);
        if (uVar1 == '\0') {
          iVar7 = 0;
          goto LAB_10000dfc;
        }
        pcStack_188 = pcStack_78;
        bVar3 = bVar2;
        if (pcStack_190 != (char *)0x0) {
          bVar3 = 1;
        }
        pcStack_180 = end_00;
        if ((bVar3 & 1) == 0) {
          uVar1 = recovered_100013ec(&pcStack_188);
          if (uVar1 != '\0') {
            iVar7 = 0;
            pcStack_1a8 = end;
            if (end_00 < end) {
              pcStack_1a8 = end_00 + 1;
            }
            pcStack_190 = pcVar6;
            goto LAB_10000dfc;
          }
        }
        pcVar4 = str_1000280a;
        goto LAB_10000fd4;
      }
    }
    else {
      iVar7 = iVar7 + 1;
    }
LAB_10000dfc:
    iVar5 = 0;
    pcVar6 = end;
    if (end_00 < end) {
      pcVar6 = end_00 + 1;
    }
LAB_10000e08:
    if (iVar5 != 0) goto LAB_10000ed0;
    goto LAB_10000db8;
  }
  bVar2 = recovered_10001004(begin,pcVar4,&DAT_10002805,(char **)0x0);
  if (((bVar2 & 1) == 0) &&
     (uVar1 = recovered_10001004(begin,pcVar4,&DAT_100027f2,(char **)0x0), uVar1 == '\0')) {
    recovered_100010ac(begin,pcVar4);
    begin = end;
    if (pcVar4 < end) {
      begin = pcVar4 + 1;
    }
    goto LAB_10000d44;
  }
  pcVar4 = str_10002823;
  goto LAB_10000fd4;
LAB_10000ed0:
  if (iVar5 == 5) goto LAB_10000eec;
  if (iVar5 == 1 || end <= begin) {
    return;
  }
  goto LAB_10000d4c;
LAB_10000eec:
  if (pcStack_198 == (char *)0x0) {
    pcVar4 = str_10002817;
LAB_10000fd4:
    recovered_10000c3c(pcVar4);
    return;
  }
  pcVar6 = pcStack_198;
  if (pcStack_190 != (char *)0x0) {
    pcVar6 = pcStack_190;
  }
  do {
    recovered_10001a5c(&pcStack_188,local_70[0],pcVar4);
    if (DAT_1000c618 == 1) {
      return;
    }
    begin = pcStack_1a0;
    if ((int)pcStack_188 == 3) {
      if (pcStack_180 == (char *)0x0) goto LAB_10000f64;
    }
    else if ((int)pcStack_188 == 0) {
LAB_10000f64:
      if (pcStack_1a8 == (char *)0x0) {
        bVar2 = 1;
      }
      if ((bVar2 & 1) == 0) {
        recovered_10000cdc(pcStack_1a8,pcStack_198,depth + 1);
      }
      goto LAB_10000d44;
    }
    recovered_10000cdc(begin_00,pcVar6,depth + 1);
    if ((bVar2 == 0) || ((DAT_1000c618 & 1) != 0)) goto LAB_10000d44;
    bVar3 = recovered_100019f4();
    if ((bVar3 & 1) == 0) goto LAB_10000d44;
  } while( true );
}

#undef DAT_10002535
#undef DAT_10002640
#undef DAT_100027f2
#undef DAT_10002805
#undef DAT_1000c618
#undef DAT_1000c820
#undef str_100027cd
#undef str_100027e9
#undef str_100027f6
#undef str_1000280a
#undef str_10002817
#undef str_10002823
#undef pcStack_1a8
#undef pcStack_1a0
#undef pcStack_198
#undef pcStack_190
#undef pcStack_188
#undef pcStack_180
#undef pcStack_78
#undef local_70

#define local_40 (*(byte * *)(pf_stack_frame + 48))
#define acStack_60 (*(char (*)[96])(pf_stack_frame + 16))
#define pcStack_38 (*(char * *)(pf_stack_frame + 56))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001004
 */

uchar recovered_10001004(char *begin,char *end,char *keyword,char **after)

{
  unsigned char pf_stack_frame[144] __attribute__((aligned(16))) = {0};

  uchar uVar1;
  uchar uVar2;

  local_40 = (byte *)begin;
  pcStack_38 = end;
  uVar2 = recovered_10001328(&local_40,acStack_60,0x20);
  uVar1 = '\0';
  if (uVar2 != '\0') {
    uVar2 = recovered_10000cb0(acStack_60,keyword);
    uVar1 = '\0';
    if (uVar2 != '\0') {
      if ((local_40 < end) &&
         (0x20 < *local_40 || (1L << ((ulong)*local_40 & 0x3f) & 0x100002200U) == 0)) {
        uVar1 = '\0';
      }
      else {
        recovered_10001aa0(&local_40);
        if (after != (char **)0x0) {
          *after = (char *)local_40;
        }
        uVar1 = '\x01';
      }
    }
  }
  return uVar1;
}

#undef local_40
#undef acStack_60
#undef pcStack_38

#undef DAT_10002535
#define DAT_10002535 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x15dU)))
#undef DAT_10002886
#define DAT_10002886 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4aeU)))
#undef DAT_10002891
#define DAT_10002891 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4b9U)))
#undef DAT_1000a008
#define DAT_1000a008 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7c30U)))
#undef DAT_1000a028
#define DAT_1000a028 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7c50U)))
#undef DAT_1000c608
#define DAT_1000c608 (*(uint64_t *)(((uintptr_t)pf_module_state + 0xa230U)))
#undef DAT_1000c618
#define DAT_1000c618 (*(byte *)(((uintptr_t)pf_module_state + 0xa240U)))
#undef DAT_1000c820
#define DAT_1000c820 (*(uint64_t *)(((uintptr_t)pf_module_state + 0xa448U)))
#undef str_10002872
#define str_10002872 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x49aU)))
#undef str_1000288b
#define str_1000288b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4b3U)))
#undef str_10002893
#define str_10002893 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4bbU)))
#define local_50 (*(char * *)(pf_stack_frame + 592))
#define auStack_290 (*(undefined1 (*)[656])(pf_stack_frame + 16))
#define auStack_180 (*(undefined1 (*)[384])(pf_stack_frame + 288))
#define acStack_70 (*(char (*)[112])(pf_stack_frame + 560))
#define pcStack_48 (*(char * *)(pf_stack_frame + 600))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100010ac
 */

void recovered_100010ac(char *begin,char *end)

{
  unsigned char pf_stack_frame[704] __attribute__((aligned(16))) = {0};

  char *begin_00;
  char cVar1;
  long lVar2;
  byte bVar3;
  uchar uVar4;
  ulong uVar5;
  char *pcVar6;
  long lVar7;

  local_50 = begin;
  pcStack_48 = end;
  recovered_10001aa0(&local_50);
  bVar3 = recovered_100013ec(&local_50);
  if ((bVar3 & 1) != 0) {
    return;
  }
  uVar4 = recovered_10001328(&local_50,acStack_70,0x20);
  if (uVar4 == '\0') {
LAB_10001164:
    recovered_10001a5c(auStack_180,begin,end);
  }
  else {
    recovered_10001aa0(&local_50);
    pcVar6 = local_50;
    if (((local_50 < end) && (*local_50 == '=')) &&
       ((begin_00 = local_50 + 1, begin_00 == end || (*begin_00 != '=')))) {
      recovered_10001a5c(auStack_180,begin_00,end);
      lVar2 = DAT_1000c608;
      if ((DAT_1000c618 & 1) != 0) {
        return;
      }
      pcVar6 = &DAT_1000a008;
      for (lVar7 = 0; lVar2 != lVar7; lVar7 = lVar7 + 1) {
        bVar3 = recovered_10000cb0(pcVar6,acStack_70);
        if ((bVar3 & 1) != 0) goto LAB_100012b4;
        pcVar6 = pcVar6 + 0x130;
      }
      lVar7 = lVar2;
LAB_100012b4:
      if (lVar7 != 0x20) {
        if (lVar7 == lVar2) {
          DAT_1000c608 = lVar2 + 1;
          uVar5 = recovered_10000c24(acStack_70);
          recovered_10000a90(&DAT_1000a008 + lVar2 * 0x130,acStack_70,uVar5 + 1);
        }
        recovered_100023a4((long)(&DAT_1000a028 + lVar7 * 0x130),(long)auStack_180,0x110);
        return;
      }
      pcVar6 = str_10002872;
    }
    else {
      bVar3 = recovered_10000cb0(acStack_70,&DAT_10002886);
      if (((((bVar3 & 1) == 0) &&
           (bVar3 = recovered_10000cb0(acStack_70,str_1000288b), (bVar3 & 1) == 0)) &&
          (uVar4 = recovered_10000cb0(acStack_70,&DAT_10002891), uVar4 == '\0')) ||
         ((pcVar6 != end && (*pcVar6 == '(')))) goto LAB_10001164;
      bVar3 = recovered_100013ec(&local_50);
      if ((bVar3 & 1) != 0) {
        bVar3 = recovered_10000cb0(acStack_70,str_1000288b);
        if ((bVar3 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x100011cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(DAT_1000c820 + 8))(&DAT_10002535);
          return;
        }
        return;
      }
      do {
        if ((DAT_1000c618 & 1) != 0) {
          return;
        }
        recovered_10001428(auStack_180,&local_50,0);
        if ((DAT_1000c618 & 1) != 0) {
          return;
        }
        recovered_100023a4((long)auStack_290,(long)auStack_180,0x110);
        recovered_10001798(auStack_290);
        bVar3 = recovered_10000cb0(acStack_70,str_1000288b);
        if ((bVar3 & 1) == 0) {
          (**(code **)(DAT_1000c820 + 8))(&DAT_10002535);
        }
        recovered_10001aa0(&local_50);
        bVar3 = recovered_100013ec(&local_50);
        if ((bVar3 & 1) != 0) {
          return;
        }
        pcVar6 = local_50 + 1;
        cVar1 = *local_50;
        local_50 = pcVar6;
      } while (cVar1 == ',');
      pcVar6 = str_10002893;
    }
    recovered_10000c3c(pcVar6);
  }
  return;
}

#undef DAT_10002535
#undef DAT_10002886
#undef DAT_10002891
#undef DAT_1000a008
#undef DAT_1000a028
#undef DAT_1000c608
#undef DAT_1000c618
#undef DAT_1000c820
#undef str_10002872
#undef str_1000288b
#undef str_10002893
#undef local_50
#undef auStack_290
#undef auStack_180
#undef acStack_70
#undef pcStack_48

#undef str_100028a2
#define str_100028a2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4caU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001328
 */

uchar recovered_10001328(void *cursor,char *out,ulong capacity)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  uint uVar2;
  uchar uVar3;
  byte *pbVar4;
  ulong uVar5;
  byte *pbVar6;

  recovered_10001aa0(cursor);
  pbVar4 = *(byte **)cursor;
  pbVar6 = *(byte **)((long)cursor + 8);
  if ((pbVar4 == pbVar6) || (*pbVar4 != 0x5f && 0x19 < (*pbVar4 & 0xffffffdf) - 0x41)) {
LAB_100013d8:
    uVar3 = '\0';
  }
  else {
    uVar5 = 1;
    while (pbVar4 < pbVar6) {
      bVar1 = *pbVar4;
      if ((9 < bVar1 - 0x30U) &&
         (uVar2 = (bVar1 & 0xffffffdf) - 0x41,
         (bVar1 != 0x5f && 0x18 < uVar2) && (bVar1 == 0x5f || uVar2 != 0x19))) break;
      if (capacity <= uVar5) {
        recovered_10000c3c(str_100028a2);
        goto LAB_100013d8;
      }
      *(byte **)cursor = pbVar4 + 1;
      *out = *pbVar4;
      pbVar6 = *(byte **)((long)cursor + 8);
      uVar5 = uVar5 + 1;
      out = out + 1;
      pbVar4 = *(byte **)cursor;
    }
    *out = 0;
    uVar3 = '\x01';
  }
  return uVar3;
}

#undef str_100028a2

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100013ec
 */

uchar recovered_100013ec(void *cursor)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;

  recovered_10001aa0(cursor);
  if (*(char **)cursor == *(char **)((long)cursor + 8)) {
    bVar1 = true;
  }
  else {
    bVar1 = **(char **)cursor == '#';
  }
  return bVar1;
}


#undef DAT_100023e3
#define DAT_100023e3 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xbU)))
#undef DAT_10002440
#define DAT_10002440 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x68U)))
#undef DAT_1000c610
#define DAT_1000c610 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa238U)))
#undef DAT_1000c618
#define DAT_1000c618 (*(byte *)(((uintptr_t)pf_module_state + 0xa240U)))
#undef str_100028b6
#define str_100028b6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4deU)))
#undef str_100028d7
#define str_100028d7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4ffU)))
#undef str_100028e7
#define str_100028e7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x50fU)))
#undef str_10002904
#define str_10002904 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x52cU)))
#define acStack_168 (*(char (*)[360])(pf_stack_frame + 40))
#define aiStack_178 (*(int (*)[94])(pf_stack_frame + 24))
#define lStack_170 (*(long *)(pf_stack_frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001428
 */

void recovered_10001428(void *out,void *cursor,uint precedence)

{
  unsigned char pf_stack_frame[432] __attribute__((aligned(16))) = {0};

  bool bVar1;
  byte *pbVar2;
  bool bVar3;
  byte bVar4;
  uint uVar5;
  char *pcVar6;
  ulong uVar7;
  ulong uVar8;
  int iVar9;
  long lVar10;
  uint uVar11;
  long lVar12;

  recovered_100023c4(out,0x110);
  PF_PART4(DAT_1000c610, 4) = PF_PART4(DAT_1000c610, 4) + 1;
  if (0x10 < PF_PART4(DAT_1000c610, 4)) {
    pcVar6 = str_100028b6;
LAB_1000147c:
    recovered_10000c3c(pcVar6);
LAB_10001480:
    PF_PART4(DAT_1000c610, 4) = PF_PART4(DAT_1000c610, 4) - 1;
    return;
  }
  recovered_10001ae0(out,cursor);
  pcVar6 = (char *)((long)out + 0x10);
  do {
    while( true ) {
      while( true ) {
        if ((DAT_1000c618 & 1) != 0) goto LAB_10001480;
        recovered_10001aa0(cursor);
        pbVar2 = *(byte **)cursor;
        if (pbVar2 == *(byte **)((long)cursor + 8)) goto LAB_10001480;
        bVar4 = *pbVar2;
        if (pbVar2 + 1 < *(byte **)((long)cursor + 8)) {
          bVar3 = pbVar2[1] == 0x3d;
        }
        else {
          bVar3 = false;
        }
        uVar11 = (uint)bVar4;
        if ((bVar4 == 0x21 || bVar4 == 0x3d) && (bVar3)) {
          iVar9 = 3;
          lVar12 = 2;
        }
        else if ((uVar11 & 0xfffffffd) == 0x3c) {
          lVar12 = 1;
          if (bVar3) {
            lVar12 = 2;
          }
          iVar9 = 4;
        }
        else {
          uVar5 = uVar11 - 0x25;
          if ((10 < uVar5) || ((0x561U >> (ulong)(uVar5 & 0x1f) & 1) == 0)) goto LAB_10001480;
          iVar9 = *(int *)(&DAT_10002440 + ((ulong)uVar5 & 0xff) * 4);
          lVar12 = 1;
        }
        if (iVar9 < (int)precedence) goto LAB_10001480;
        *(byte **)cursor = pbVar2 + lVar12;
        recovered_10001428(aiStack_178,cursor,iVar9 + 1);
        if ((uVar11 != 0x3d) && (uVar11 != 0x21)) break;
        if (*(int *)out == aiStack_178[0]) {
          if (*(int *)out == 2) {
            bVar4 = recovered_10000cb0(pcVar6,acStack_168);
            uVar5 = (uint)bVar4;
          }
          else {
            uVar5 = (uint)(*(long *)((long)out + 8) == lStack_170);
          }
        }
        else {
          uVar5 = 0;
        }
        recovered_100023c4(pcVar6,0x100);
        *(undefined8 *)out = 3;
        *(ulong *)((long)out + 8) = (ulong)(uVar11 == 0x3d ^ uVar5 ^ 1);
      }
      if ((uVar11 != 0x2b || *(int *)out != 2) || aiStack_178[0] != 2) break;
      uVar7 = recovered_10000c24(pcVar6);
      uVar8 = recovered_10000c24(acStack_168);
      if (uVar8 + uVar7 < 0x100) {
        recovered_10000a90(pcVar6 + uVar7,acStack_168,uVar8 + 1);
      }
      else {
        recovered_10000c3c(str_100028d7);
      }
    }
    if (*(int *)out != 1 || aiStack_178[0] != 1) {
      pcVar6 = str_100028e7;
      goto LAB_1000147c;
    }
    lVar10 = *(long *)((long)out + 8);
    uVar5 = uVar11 - 0x25;
    switch((uintptr_t)((ulong)uVar5)) {
    case 0:
    case 10:
      if ((lStack_170 == 0) || (lVar10 == -0x8000000000000000 && lStack_170 == -1)) {
        pcVar6 = str_10002904;
        goto LAB_1000147c;
      }
      /* The two native jump-table entries implement floor division/modulo. */
      if (uVar5 == 0) {
        int64_t remainder = lVar10 % lStack_170;
        if (remainder != 0 && (remainder ^ lStack_170) < 0) remainder += lStack_170;
        *(int64_t *)((byte *)out + 8) = remainder;
      } else {
        int64_t quotient = lVar10 / lStack_170;
        if (lVar10 % lStack_170 != 0 && (lVar10 ^ lStack_170) < 0) --quotient;
        *(int64_t *)((byte *)out + 8) = quotient;
      }
      break;
    case 1:
    case 2:
    case 3:
    case 4:
    case 7:
    case 9:
      break;
    case 5:
      *(long *)((long)out + 8) = lStack_170 * lVar10;
      break;
    case 6:
      *(long *)((long)out + 8) = lStack_170 + lVar10;
      break;
    case 8:
      *(long *)((long)out + 8) = lVar10 - lStack_170;
      break;
    default:
      if (uVar11 == 0x3c) {
        bVar3 = lVar10 <= lStack_170;
        bVar1 = lVar10 < lStack_170;
      }
      else {
        if (uVar11 != 0x3e) break;
        bVar3 = lStack_170 <= lVar10;
        bVar1 = lStack_170 < lVar10;
      }
      if (lVar12 != 2) {
        bVar3 = bVar1;
      }
      *(ulong *)((long)out + 8) = (ulong)bVar3;
      *(undefined4 *)out = 3;
      break;
    }
  } while( true );
}

#undef DAT_100023e3
#undef DAT_10002440
#undef DAT_1000c610
#undef DAT_1000c618
#undef str_100028b6
#undef str_100028d7
#undef str_100028e7
#undef str_10002904
#undef acStack_168
#undef aiStack_178
#undef lStack_170

/* Pooka's Free Software License. Recovered Stage4 value formatting.
 * Private callers pass the existing value object directly in the C build. */
void recovered_10001798(const byte *value){uint32_t tag;uint64_t bits;__builtin_memcpy(&tag,value,4);__builtin_memcpy(&bits,value+8,8);uintptr_t host;__builtin_memcpy(&host,pf_module_state+0xa448,8);void(*write)(const char*)=*(void(**)(const char*))(host+8);if(tag==3){write(bits?"true":"false");return;}if(tag==2){write((const char*)value+16);return;}if(tag==0){write("nil");return;}if((int64_t)bits<0)write("-");uint64_t magnitude=(int64_t)bits<0?0-bits:bits;char text[40];unsigned n=0;do{text[n++]=(char)('0'+magnitude%10);magnitude/=10;}while(magnitude);for(unsigned i=0;i<n/2;i++){char c=text[i];text[i]=text[n-1-i];text[n-1-i]=c;}text[n]=0;write(text);}


#undef DAT_1000c618
#define DAT_1000c618 (*(byte *)(((uintptr_t)pf_module_state + 0xa240U)))
#undef str_10002a73
#define str_10002a73 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x69bU)))
#define local_150 (*(int (*)[84])(pf_stack_frame + 16))
#define local_40 (*(char * *)(pf_stack_frame + 288))
#define acStack_140 (*(char (*)[320])(pf_stack_frame + 32))
#define local_38 (*(char * *)(pf_stack_frame + 296))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100018dc
 */

uchar recovered_100018dc(char *input,char *out)

{
  unsigned char pf_stack_frame[384] __attribute__((aligned(16))) = {0};

  bool bVar1;
  ulong uVar2;

  local_40 = input;
  uVar2 = recovered_10000c24(input);
  local_38 = input + uVar2;
  recovered_10001aa0(&local_40);
  if ((local_40 < local_38) && ((*local_40 == '\'' || (*local_40 == '\"')))) {
    recovered_10001a5c(local_150,local_40,local_38);
    bVar1 = false;
    if (((DAT_1000c618 & 1) == 0) && (local_150[0] == 2)) {
      uVar2 = recovered_10000c24(acStack_140);
      recovered_10000a90(out,acStack_140,uVar2 + 1);
      bVar1 = *out != '\0';
    }
  }
  else {
    for (uVar2 = (long)local_38 - (long)local_40; uVar2 != 0; uVar2 = uVar2 - 1) {
      if (local_40[uVar2 - 1] != ' ' && local_40[uVar2 - 1] != '\t') {
        if (uVar2 < 0x100) {
          recovered_10000a90(out,local_40,uVar2);
          out[uVar2] = '\0';
          return '\x01';
        }
        break;
      }
    }
    recovered_10000c3c(str_10002a73);
    bVar1 = false;
  }
  return bVar1;
}

#undef DAT_1000c618
#undef str_10002a73
#undef local_150
#undef local_40
#undef acStack_140
#undef local_38

#undef DAT_1000c610
#define DAT_1000c610 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa238U)))
#undef DAT_1000c618
#define DAT_1000c618 (*(byte *)(((uintptr_t)pf_module_state + 0xa240U)))
#undef str_1000283f
#define str_1000283f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x467U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100019f4
 */

uchar recovered_100019f4(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  PF_PART4(DAT_1000c610, 0) = (uint)DAT_1000c610 + 1;
  if (10000 < (uint)DAT_1000c610) {
    recovered_10000c3c(str_1000283f);
  }
  return (DAT_1000c618 ^ 0xff) & 1;
}

#undef DAT_1000c610
#undef DAT_1000c618
#undef str_1000283f

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001a3c
 */

char * recovered_10001a3c(char *begin,char *end)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  for (; (begin < end && (*begin != '\n')); begin = begin + 1) {
  }
  return begin;
}


/* Pooka's Free Software License. Explicit recovered parser cursor. */
void recovered_10001a5c(void *out,const char *begin,const char *end){const char *cursor[2]={begin,end};recovered_10001428(out,cursor,0);if(!recovered_100013ec(cursor))recovered_10000c3c((const char *)pf_module_state+0x481);}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001aa0
 */

void recovered_10001aa0(void *cursor)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  byte *pbVar1;

  pbVar1 = *(byte **)cursor;
  while ((pbVar1 < *(byte **)((long)cursor + 8) &&
         (*pbVar1 < 0x21 && (1L << ((ulong)*pbVar1 & 0x3f) & 0x100002200U) != 0))) {
    pbVar1 = pbVar1 + 1;
    *(byte **)cursor = pbVar1;
  }
  return;
}


#undef DAT_100024f1
#define DAT_100024f1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x119U)))
#undef DAT_100024f6
#define DAT_100024f6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x11eU)))
#undef DAT_10002535
#define DAT_10002535 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x15dU)))
#undef DAT_100025f1
#define DAT_100025f1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x219U)))
#undef DAT_1000260d
#define DAT_1000260d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x235U)))
#undef DAT_10002886
#define DAT_10002886 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4aeU)))
#undef DAT_10002891
#define DAT_10002891 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4b9U)))
#undef DAT_100029c9
#define DAT_100029c9 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5f1U)))
#undef DAT_100029cd
#define DAT_100029cd (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5f5U)))
#undef DAT_10002a58
#define DAT_10002a58 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x680U)))
#undef DAT_10002a5d
#define DAT_10002a5d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x685U)))
#undef DAT_1000c608
#define DAT_1000c608 (*(uint64_t *)(((uintptr_t)pf_module_state + 0xa230U)))
#undef DAT_1000c618
#define DAT_1000c618 (*(byte *)(((uintptr_t)pf_module_state + 0xa240U)))
#undef DAT_1000c820
#define DAT_1000c820 (*(uint64_t *)(((uintptr_t)pf_module_state + 0xa448U)))
#undef str_1000250d
#define str_1000250d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x135U)))
#undef str_10002538
#define str_10002538 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x160U)))
#undef str_1000288b
#define str_1000288b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4b3U)))
#undef str_100028d7
#define str_100028d7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4ffU)))
#undef str_10002915
#define str_10002915 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x53dU)))
#undef str_10002929
#define str_10002929 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x551U)))
#undef str_10002946
#define str_10002946 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x56eU)))
#undef str_10002971
#define str_10002971 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x599U)))
#undef str_10002985
#define str_10002985 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5adU)))
#undef str_1000299e
#define str_1000299e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5c6U)))
#undef str_100029b8
#define str_100029b8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5e0U)))
#undef str_100029d2
#define str_100029d2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5faU)))
#undef str_100029d8
#define str_100029d8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x600U)))
#undef str_100029e9
#define str_100029e9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x611U)))
#undef str_100029fa
#define str_100029fa (*(char (*)[1])(((uintptr_t)pf_module_state + 0x622U)))
#undef str_10002a1a
#define str_10002a1a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x642U)))
#undef str_10002a42
#define str_10002a42 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x66aU)))
#undef str_10002a62
#define str_10002a62 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x68aU)))
#define aiStack_c28 (*(int (*)[778])(pf_stack_frame + 24))
#define auStack_c18 (*(undefined1 (*)[3096])(pf_stack_frame + 40))
#define alStack_b10 (*(long (*)[354])(pf_stack_frame + 304))
#define acStack_298 (*(char (*)[664])(pf_stack_frame + 2472))
#define aiStack_278 (*(int (*)[158])(pf_stack_frame + 2504))
#define uStack_270 (*(ulong *)(pf_stack_frame + 2512))
#define abStack_268 (*(byte (*)[616])(pf_stack_frame + 2520))
#define uStack_168 (*(undefined8 *)(pf_stack_frame + 2776))
#define alStack_160 (*(long (*)[44])(pf_stack_frame + 2784))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001ae0
 */

void recovered_10001ae0(void *out,void *cursor)

{
  unsigned char pf_stack_frame[3168] __attribute__((aligned(16))) = {0};

  long lVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte bVar4;
  ulong uVar5;
  bool bVar6;
  bool bVar7;
  uchar uVar8;
  byte bVar9;
  int iVar10;
  char *pcVar11;
  undefined8 uVar12;
  code *pcVar13;
  byte *pbVar14;
  char *pcVar15;
  long *plVar16;
  long lVar17;
  uint uVar18;
  ulong uVar19;
  byte bVar20;
  ulong uVar21;
  int *piVar22;
  long lVar23;

  recovered_100023c4((undefined1 *)aiStack_278,0x110);
  recovered_10001aa0(cursor);
  uVar8 = recovered_100019f4();
  if (uVar8 == '\0') {
LAB_10001b64:
    pcVar11 = str_10002915;
  }
  else {
    pbVar2 = *(byte **)cursor;
    pbVar3 = *(byte **)((long)cursor + 8);
    if (pbVar2 == pbVar3) goto LAB_10001b64;
    pbVar14 = pbVar2 + 1;
    *(byte **)cursor = pbVar14;
    bVar9 = *pbVar2;
    if (bVar9 == 0x28) {
      recovered_10001428(aiStack_278,cursor,0);
      recovered_10001aa0(cursor);
      pcVar11 = *(char **)cursor;
      if (pcVar11 != *(char **)((long)cursor + 8)) {
        *(char **)cursor = pcVar11 + 1;
        if (*pcVar11 == ')') goto LAB_10001d78;
      }
      pcVar11 = str_10002929;
LAB_10001d74:
      recovered_10000c3c(pcVar11);
LAB_10001d78:
      recovered_100023a4((long)out,(long)aiStack_278,0x110);
      return;
    }
    uVar18 = (uint)bVar9;
    if (bVar9 < 0x2e && (1L << ((ulong)bVar9 & 0x3f) & 0x280200000000U) != 0) {
      recovered_10001428(aiStack_278,cursor,7);
      if (bVar9 == 0x21) {
        if (aiStack_278[0] == 0) {
          uVar21 = 1;
        }
        else if (aiStack_278[0] == 3) {
          uVar21 = (ulong)(uStack_270 == 0);
        }
        else {
          uVar21 = 0;
        }
        recovered_100023c4(abStack_268,0x100);
        aiStack_278[0] = 3;
        aiStack_278[1] = 0;
        uStack_270 = uVar21;
        goto LAB_10001d78;
      }
      if (aiStack_278[0] == 1) {
        if (bVar9 == 0x2d) {
          uStack_270 = -uStack_270;
        }
        goto LAB_10001d78;
      }
      pcVar11 = str_10002946;
      goto LAB_10001d74;
    }
    if ((uVar18 == 0x27) || (uVar18 == 0x22)) {
      aiStack_278[0] = 2;
      lVar17 = 0x10;
      while ((pbVar14 < pbVar3 && (*pbVar14 != bVar9))) {
        pbVar2 = pbVar14 + 1;
        *(byte **)cursor = pbVar2;
        bVar20 = *pbVar14;
        if (bVar20 == 0x5c) {
          if (pbVar2 < pbVar3) {
            bVar4 = *pbVar2;
            if ((bVar4 == bVar9) || (bVar4 == 0x5c)) {
              *(byte **)cursor = pbVar14 + 2;
              bVar20 = pbVar14[1];
              pbVar2 = pbVar14 + 2;
            }
            else {
              if (bVar9 != 0x22) goto LAB_10001c9c;
              pbVar2 = pbVar14 + 2;
              *(byte **)cursor = pbVar2;
              if (bVar4 == 0x6e) {
                bVar20 = 10;
              }
              else if (bVar4 == 0x72) {
                bVar20 = 0xd;
              }
              else {
                bVar20 = 9;
                if (bVar4 != 0x74) {
                  bVar20 = bVar4;
                }
              }
            }
          }
          else {
LAB_10001c9c:
            bVar20 = 0x5c;
          }
        }
        pbVar14 = pbVar2;
        if (lVar17 == 0x10f) {
          pcVar11 = str_100028d7;
          goto LAB_10001d74;
        }
        *(byte *)((long)aiStack_278 + lVar17) = bVar20;
        lVar17 = lVar17 + 1;
      }
      if (pbVar14 != pbVar3) {
        *(byte **)cursor = pbVar14 + 1;
        goto LAB_10001d78;
      }
      pcVar11 = str_10002971;
      goto LAB_10001d74;
    }
    uVar21 = (ulong)(uVar18 - 0x30);
    if (uVar18 - 0x30 < 10) {
      if (bVar9 == 0x30 && pbVar14 < pbVar3) {
        if (*pbVar14 == 0x78) {
          uVar21 = 0;
          pbVar14 = pbVar2 + 2;
          *(byte **)cursor = pbVar14;
          uVar19 = 0x10;
          bVar7 = true;
          goto LAB_10001e10;
        }
        uVar21 = 0;
      }
      bVar7 = false;
      uVar19 = 10;
LAB_10001e10:
      lVar17 = 0;
      uVar21 = uVar21 & 0xff;
      while (pbVar14 < pbVar3) {
        bVar9 = *pbVar14;
        iVar10 = (int)(char)bVar9;
        uVar18 = iVar10 - 0x37;
        if (5 < bVar9 - 0x41U) {
          uVar18 = 99;
        }
        if (iVar10 - 0x61U < 6) {
          uVar18 = iVar10 - 0x57;
        }
        if (bVar9 - 0x30U < 10) {
          uVar18 = bVar9 - 0x30U;
        }
        if ((uint)uVar19 <= uVar18) break;
        uVar5 = 0;
        if (uVar19 != 0) {
          uVar5 = ~(ulong)uVar18 / uVar19;
        }
        if (uVar5 < uVar21) {
          pcVar11 = str_10002985;
          goto LAB_10001b6c;
        }
        uVar21 = (ulong)uVar18 + uVar21 * uVar19;
        pbVar14 = pbVar14 + 1;
        *(byte **)cursor = pbVar14;
        lVar17 = lVar17 + -1;
      }
      bVar6 = false;
      if (lVar17 == 0) {
        bVar6 = bVar7;
      }
      if (bVar6) {
        recovered_10000c3c(str_1000299e);
      }
      recovered_100023c4(out,0x110);
      *(undefined4 *)out = 1;
      *(ulong *)((long)out + 8) = uVar21;
      return;
    }
    *(byte **)cursor = pbVar2;
    bVar9 = recovered_10001328(cursor,acStack_298,0x20);
    if ((bVar9 & 1) != 0) {
      uVar8 = recovered_10000cb0(acStack_298,&DAT_100029c9);
      if (uVar8 != '\0') goto LAB_10001b70;
      bVar9 = recovered_10000cb0(acStack_298,&DAT_100029cd);
      if (((bVar9 & 1) != 0) ||
         (uVar8 = recovered_10000cb0(acStack_298,str_100029d2), uVar8 != '\0')) {
        aiStack_278[0] = 3;
        uStack_270 = (ulong)bVar9;
        goto LAB_10001d78;
      }
      recovered_10001aa0(cursor);
      pcVar11 = *(char **)cursor;
      if ((*(char **)((long)cursor + 8) <= pcVar11) || (*pcVar11 != '(')) {
        lVar17 = DAT_1000c608 + 1;
        lVar23 = ((uintptr_t)pf_module_state+0x7b20U);
        while (lVar17 = lVar17 + -1, lVar17 != 0) {
          lVar1 = lVar23 + 0x130;
          uVar8 = recovered_10000cb0(acStack_298,(char *)(lVar23 + 0x110));
          lVar23 = lVar1;
          if (uVar8 != '\0') {
            for (lVar17 = 0; lVar17 != 0x110; lVar17 = lVar17 + 1) {
              *(undefined1 *)((long)out + lVar17) = *(undefined1 *)(lVar1 + lVar17);
            }
            return;
          }
        }
        pcVar11 = str_100029e9;
        goto LAB_10001b6c;
      }
      *(char **)cursor = pcVar11 + 1;
      recovered_10001aa0(cursor);
      lVar17 = 0;
      piVar22 = aiStack_c28;
      lVar23 = 1;
      while( true ) {
        pcVar11 = *(char **)cursor;
        pcVar15 = *(char **)((long)cursor + 8);
        if (pcVar15 <= pcVar11) break;
        if ((*pcVar11 == ')') || ((DAT_1000c618 & 1) != 0)) goto LAB_10002008;
        if (lVar23 == 10) {
          pcVar11 = str_1000250d;
          goto LAB_100020cc;
        }
        lVar17 = lVar17 + 1;
        recovered_10001428(alStack_160,cursor,0);
        recovered_100023a4((long)piVar22,(long)alStack_160,0x110);
        recovered_10001aa0(cursor);
        pcVar11 = *(char **)cursor;
        pcVar15 = *(char **)((long)cursor + 8);
        if (pcVar15 <= pcVar11) goto LAB_10002008;
        if (*pcVar11 != ',') {
          lVar17 = lVar23;
          goto LAB_10002008;
        }
        *(char **)cursor = pcVar11 + 1;
        recovered_10001aa0(cursor);
        if ((*(char **)cursor == *(char **)((long)cursor + 8)) || (**(char **)cursor == ')')) {
          recovered_10000c3c(str_100029d8);
        }
        lVar23 = lVar23 + 1;
        piVar22 = piVar22 + 0x44;
      }
      lVar17 = lVar23 + -1;
LAB_10002008:
      if ((pcVar11 == pcVar15) || (*(char **)cursor = pcVar11 + 1, *pcVar11 != ')')) {
        pcVar11 = str_10002929;
LAB_100020cc:
        recovered_10000c3c(pcVar11);
      }
      else if (DAT_1000c618 != 1) {
        bVar9 = recovered_10000cb0(acStack_298,&DAT_10002886);
        if ((((bVar9 & 1) == 0) &&
            (bVar9 = recovered_10000cb0(acStack_298,str_1000288b), (bVar9 & 1) == 0)) &&
           (uVar8 = recovered_10000cb0(acStack_298,&DAT_10002891), uVar8 == '\0')) {
          if ((lVar17 == 0) || (aiStack_c28[0] != 2)) {
            pcVar11 = str_100029fa;
LAB_10002194:
            recovered_10000c3c(pcVar11);
            goto LAB_100020b0;
          }
          uVar8 = recovered_10000cb0(acStack_298,&DAT_100024f6);
          if (uVar8 != '\0') {
            lVar23 = 0;
            uStack_168 = 0;
            plVar16 = alStack_b10;
            while( true ) {
              if (lVar17 * 8 + -8 == lVar23) {
                iVar10 = (**(code **)(DAT_1000c820 + 0x38))
                                   (auStack_c18,lVar17 + -1,alStack_160,&uStack_168);
                if (iVar10 == 0) {
                  recovered_10000c3c(str_10002538);
                }
                uVar12 = uStack_168;
                recovered_100023c4(out,0x110);
                *(undefined4 *)out = 1;
                *(undefined8 *)((long)out + 8) = uVar12;
                return;
              }
              if (((*(uint *)(plVar16 + -1) | 2) != 3) || (*plVar16 < 0)) break;
              *(long *)((long)alStack_160 + lVar23) = *plVar16;
              lVar23 = lVar23 + 8;
              plVar16 = plVar16 + 0x22;
            }
            pcVar11 = str_10002a1a;
            goto LAB_10002194;
          }
          if (lVar17 != 1) {
            pcVar11 = str_10002a42;
            goto LAB_10002194;
          }
          uVar8 = recovered_10000cb0(acStack_298,&DAT_10002a58);
          if (uVar8 == '\0') {
            uVar8 = recovered_10000cb0(acStack_298,&DAT_10002a5d);
            if (uVar8 != '\0') {
              pcVar13 = *(code **)(DAT_1000c820 + 0x28);
              goto LAB_10002208;
            }
            uVar8 = recovered_10000cb0(acStack_298,&DAT_100025f1);
            if (uVar8 == '\0') {
              uVar8 = recovered_10000cb0(acStack_298,&DAT_1000260d);
              if (uVar8 != '\0') {
                pcVar13 = *(code **)(DAT_1000c820 + 0x30);
                uVar12 = 1;
                goto LAB_1000226c;
              }
              uVar8 = recovered_10000cb0(acStack_298,&DAT_100024f1);
              if (uVar8 == '\0') {
                recovered_10000c3c(str_10002a62);
                uVar21 = 0;
              }
              else {
                (**(code **)(DAT_1000c820 + 0x40))(auStack_c18);
                uVar21 = 1;
              }
            }
            else {
              pcVar13 = *(code **)(DAT_1000c820 + 0x30);
              uVar12 = 0;
LAB_1000226c:
              uVar21 = (*pcVar13)(auStack_c18,uVar12);
            }
          }
          else {
            pcVar13 = *(code **)(DAT_1000c820 + 0x20);
LAB_10002208:
            uVar21 = (*pcVar13)(auStack_c18);
          }
          *(undefined8 *)out = 1;
          *(ulong *)((long)out + 8) = uVar21 & 0xffffffff;
        }
        else {
          piVar22 = aiStack_c28;
          for (; lVar17 != 0; lVar17 = lVar17 + -1) {
            recovered_100023a4((long)alStack_160,(long)piVar22,0x110);
            recovered_10001798(alStack_160);
            bVar9 = recovered_10000cb0(acStack_298,str_1000288b);
            if ((bVar9 & 1) == 0) {
              (**(code **)(DAT_1000c820 + 8))(&DAT_10002535);
            }
            piVar22 = piVar22 + 0x44;
          }
LAB_100020b0:
          *(undefined8 *)out = 1;
          *(undefined8 *)((long)out + 8) = 0;
        }
        out = (void *)((long)out + 0x10);
        lVar17 = 0x100;
        goto LAB_100020d8;
      }
      lVar17 = 0x110;
LAB_100020d8:
      recovered_100023c4(out,lVar17);
      return;
    }
    pcVar11 = str_100029b8;
  }
LAB_10001b6c:
  recovered_10000c3c(pcVar11);
LAB_10001b70:
  lVar17 = 0x110;
  do {
    *(undefined1 *)out = 0;
    lVar17 = lVar17 + -1;
    out = (undefined1 *)((long)out + 1);
  } while (lVar17 != 0);
  return;
}

#undef DAT_100024f1
#undef DAT_100024f6
#undef DAT_10002535
#undef DAT_100025f1
#undef DAT_1000260d
#undef DAT_10002886
#undef DAT_10002891
#undef DAT_100029c9
#undef DAT_100029cd
#undef DAT_10002a58
#undef DAT_10002a5d
#undef DAT_1000c608
#undef DAT_1000c618
#undef DAT_1000c820
#undef str_1000250d
#undef str_10002538
#undef str_1000288b
#undef str_100028d7
#undef str_10002915
#undef str_10002929
#undef str_10002946
#undef str_10002971
#undef str_10002985
#undef str_1000299e
#undef str_100029b8
#undef str_100029d2
#undef str_100029d8
#undef str_100029e9
#undef str_100029fa
#undef str_10002a1a
#undef str_10002a42
#undef str_10002a62
#undef aiStack_c28
#undef auStack_c18
#undef alStack_b10
#undef acStack_298
#undef aiStack_278
#undef uStack_270
#undef abStack_268
#undef uStack_168
#undef alStack_160

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100023a4
 */

void recovered_100023a4(long param_1,long param_2,long param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;

  for (lVar1 = 0; param_3 != lVar1; lVar1 = lVar1 + 1) {
    *(undefined1 *)(param_1 + lVar1) = *(undefined1 *)(param_2 + lVar1);
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100023c4
 */

void recovered_100023c4(undefined1 *param_1,long param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0;
    param_1 = param_1 + 1;
  }
  return;
}


/* Freestanding compiler clearing helper; Pooka's Free Software License. */
void __bzero(void *memory,unsigned long size){volatile unsigned char *bytes=memory;while(size--)*bytes++=0;}
void bzero(void *memory,unsigned long size){__bzero(memory,size); }
