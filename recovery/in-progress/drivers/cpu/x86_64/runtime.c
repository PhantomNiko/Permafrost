/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_10001000
#define DAT_10001000 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x911U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000380
 */

void * recovered_10000380(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return &DAT_10001000;
}

#undef DAT_10001000

#undef DAT_100006ef
#define DAT_100006ef (*(uint8_t *)(((uintptr_t)pf_module_state + 0x0U)))
#undef DAT_100006f3
#define DAT_100006f3 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4U)))
#undef DAT_10000724
#define DAT_10000724 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x35U)))
#undef DAT_1000075f
#define DAT_1000075f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x70U)))
#undef str_100006f4
#define str_100006f4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5U)))
#undef str_1000070b
#define str_1000070b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1cU)))
#undef str_10000727
#define str_10000727 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x38U)))
#undef str_1000073e
#define str_1000073e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4fU)))
#undef str_10000757
#define str_10000757 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x68U)))
#define local_290 (*(undefined8 *)(pf_stack_frame + 16))
#define local_288 (*(undefined4 *)(pf_stack_frame + 24))
#define local_280 (*(undefined8 *)(pf_stack_frame + 32))
#define local_278 (*(undefined1 (*)[632])(pf_stack_frame + 40))
#define local_238 (*(undefined1 (*)[568])(pf_stack_frame + 104))
#define local_1d8 (*(char (*)[472])(pf_stack_frame + 200))
#define local_d8 (*(uint *)(pf_stack_frame + 456))
#define local_d4 (*(char (*)[212])(pf_stack_frame + 460))
#define local_74 (*(uint *)(pf_stack_frame + 556))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000038d
 */

uint recovered_1000038d(void *api)

{
  unsigned char pf_stack_frame[704] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  uint uVar5;

  uVar3 = 0;
  if ((((api != (void *)0x0) && (*(int *)api == 0x54584b57)) && (*(int *)((long)api + 4) == 1100000)
      ) && (0xf7 < *(uint *)((long)api + 8))) {
    recovered_100005d6((long)&local_d8,0xa8);
    recovered_100005f1(local_1d8,0x100,&DAT_100006f3);
    pcVar4 = &DAT_100006ef;
    if (((*(int *)api == 0x54584b57) && (0x3f < *(uint *)((long)api + 8))) &&
       ((code *)(ulong)*(uint *)((long)api + 0x3c) != (code *)0x0)) {
      iVar1 = (*(code *)(ulong)*(uint *)((long)api + 0x3c))(&local_d8);
      if (iVar1 != 0) {
        uVar5 = local_d8 >> 0x10 & 0xff;
        uVar2 = uVar5;
        if (uVar5 == 0) {
          uVar2 = local_74;
        }
        if (local_d8 < 0x1000000) {
          uVar5 = uVar2;
        }
        if (uVar5 != 0) {
          recovered_10000605((long)local_1d8,uVar5);
          pcVar4 = str_1000070b;
          if (uVar5 == 1) {
            pcVar4 = str_100006f4;
          }
          recovered_1000067b((long)local_1d8,0x100,pcVar4);
        }
        if (0xffffff < local_d8) {
          if (local_1d8[0] != '\0') {
            recovered_1000067b((long)local_1d8,0x100,&DAT_10000724);
          }
          recovered_10000605((long)local_1d8,local_d8 >> 0x18);
          pcVar4 = str_1000073e;
          if (local_d8 >> 0x18 == 1) {
            pcVar4 = str_10000727;
          }
          recovered_1000067b((long)local_1d8,0x100,pcVar4);
        }
        pcVar4 = &DAT_100006ef;
        if (local_d4[0] != '\0') {
          pcVar4 = local_d4;
        }
      }
    }
    if ((code *)(ulong)*(uint *)((long)api + 0xc) != (code *)0x0) {
      iVar1 = (*(code *)(ulong)*(uint *)((long)api + 0xc))(&DAT_100006f3,pcVar4,local_1d8);
      if (iVar1 != 0) {
        recovered_100005d6((long)&local_290,0xb8);
        local_290 = 0xb800000001;
        local_288 = 1;
        local_280 = 0;
        recovered_100005f1(local_278,0x40,str_10000757);
        recovered_100005f1(local_238,0x60,&DAT_1000075f);
        if (((*(int *)api == 0x54584b57) && (0xeb < *(uint *)((long)api + 8))) &&
           ((code *)(ulong)*(uint *)((long)api + 0xe8) != (code *)0x0)) {
          uVar3 = (*(code *)(ulong)*(uint *)((long)api + 0xe8))(&local_290);
        }
      }
    }
  }
  return uVar3;
}

#undef DAT_100006ef
#undef DAT_100006f3
#undef DAT_10000724
#undef DAT_1000075f
#undef str_100006f4
#undef str_1000070b
#undef str_10000727
#undef str_1000073e
#undef str_10000757
#undef local_290
#undef local_288
#undef local_280
#undef local_278
#undef local_238
#undef local_1d8
#undef local_d8
#undef local_d4
#undef local_74

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100005d6
 */

void recovered_100005d6(long param_1,long param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;

  if (param_1 != 0) {
    for (lVar1 = 0; param_2 != lVar1; lVar1 = lVar1 + 1) {
      *(undefined1 *)(param_1 + lVar1) = 0;
    }
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100005f1
 */

void recovered_100005f1(undefined1 *param_1,ulong param_2,char *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == (undefined1 *)0x0) {
    return;
  }
  *param_1 = 0;
  recovered_1000067b((long)param_1,param_2,param_3);
  return;
}


#define abStack_2b (*(byte (*)[43])(pf_stack_frame + 21))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000605
 */

void recovered_10000605(long param_1,uint param_2)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  byte bVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;

  for (uVar3 = 0; (param_2 != 0 && (uVar3 < 10)); uVar3 = uVar3 + 1) {
    abStack_2b[uVar3 + 1] = (byte)(param_2 % 10) | 0x30;
    param_2 = param_2 / 10;
  }
  while (uVar4 = uVar3 - 1, uVar3 != 0) {
    bVar1 = abStack_2b[uVar3];
    lVar2 = recovered_100006cf(param_1);
    uVar3 = uVar4;
    if ((param_1 != 0) && (lVar2 + 1U < 0x100)) {
      *(byte *)(param_1 + lVar2) = bVar1;
      *(undefined1 *)(param_1 + 1 + lVar2) = 0;
    }
  }
  return;
}

#undef abStack_2b

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000067b
 */

void recovered_1000067b(long param_1,ulong param_2,char *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  uVar1 = recovered_100006cf(param_1);
  if (param_3 != (char *)0x0 && param_1 != 0) {
    while( true ) {
      uVar1 = uVar1 + 1;
      if ((*param_3 == '\0') || (param_2 <= uVar1)) break;
      *(char *)(param_1 + -1 + uVar1) = *param_3;
      param_3 = param_3 + 1;
    }
    *(undefined1 *)(param_1 + -1 + uVar1) = 0;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100006cf
 */

long recovered_100006cf(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  long lVar2;
  long lVar3;

  if (param_1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar3 = -1;
    do {
      lVar2 = lVar3 + 1;
      pcVar1 = (char *)(param_1 + 1 + lVar3);
      lVar3 = lVar2;
    } while (*pcVar1 != '\0');
  }
  return lVar2;
}


void *memset(void *p,int v,size_t n){volatile unsigned char *b=p;while(n--)*b++=(unsigned char)v;return p;}
void __bzero(void *p,size_t n){volatile unsigned char *b=p;while(n--)*b++=0;}
void bzero(void *p,size_t n){__bzero(p,n);}
