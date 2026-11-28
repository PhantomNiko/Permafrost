/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_10004000
#define DAT_10004000 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x38c4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100003e0
 */

void * recovered_100003e0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return &DAT_10004000;
}

#undef DAT_10004000

#undef DAT_10000740
#define DAT_10000740 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x4U)))
#undef DAT_10000748
#define DAT_10000748 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xcU)))
#undef DAT_1000074c
#define DAT_1000074c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x10U)))
#undef DAT_1000077d
#define DAT_1000077d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x41U)))
#undef str_1000074d
#define str_1000074d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x11U)))
#undef str_10000764
#define str_10000764 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x28U)))
#undef str_10000780
#define str_10000780 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x44U)))
#undef str_10000797
#define str_10000797 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5bU)))
#undef str_100007b0
#define str_100007b0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x74U)))
#undef str_100007bf
#define str_100007bf (*(char (*)[1])(((uintptr_t)pf_module_state + 0x83U)))
#define local_2a0 (*(char (*)[672])(pf_stack_frame + 16))
#define local_1a0 (*(undefined8 *)(pf_stack_frame + 272))
#define local_198 (*(undefined4 *)(pf_stack_frame + 280))
#define local_190 (*(undefined8 *)(pf_stack_frame + 288))
#define local_e8 (*(uint *)(pf_stack_frame + 456))
#define local_e4 (*(char (*)[228])(pf_stack_frame + 460))
#define local_84 (*(uint *)(pf_stack_frame + 556))
#define auStack_188 (*(undefined1 (*)[392])(pf_stack_frame + 296))
#define auStack_148 (*(undefined1 (*)[328])(pf_stack_frame + 360))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100003ec
 */

uint recovered_100003ec(void *api)

{
  unsigned char pf_stack_frame[720] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;

  if (api == (void *)0x0) {
    return 0;
  }
  if (((*(int *)api == 0x54584b57) && (*(int *)((long)api + 4) == 1100000)) &&
     (0xf7 < *(uint *)((long)api + 8))) {
    recovered_100005f0((undefined1 *)&local_e8,0xa8);
    recovered_10000608(local_2a0,0x100,&DAT_1000074c);
    if (((*(int *)api == 0x54584b57) && (0x3f < *(uint *)((long)api + 8))) &&
       (*(uint *)((long)api + 0x3c) != 0)) {
      iVar3 = (*(code *)(ulong)*(uint *)((long)api + 0x3c))(&local_e8);
      pcVar5 = &DAT_10000748;
      if (iVar3 != 0) {
        uVar2 = local_e8 >> 0x10 & 0xff;
        uVar1 = local_e8 >> 0x18;
        uVar4 = local_84;
        if (uVar2 != 0 || local_e8 >> 0x18 != 0) {
          uVar4 = uVar2;
        }
        if (uVar4 != 0) {
          recovered_10000618((long)local_2a0,uVar4);
          pcVar5 = str_1000074d;
          if (uVar4 != 1) {
            pcVar5 = str_10000764;
          }
          recovered_100006b4((long)local_2a0,0x100,pcVar5);
        }
        if (uVar1 != 0) {
          if (local_2a0[0] != '\0') {
            recovered_100006b4((long)local_2a0,0x100,&DAT_1000077d);
          }
          recovered_10000618((long)local_2a0,uVar1);
          pcVar5 = str_10000780;
          if (uVar1 != 1) {
            pcVar5 = str_10000797;
          }
          recovered_100006b4((long)local_2a0,0x100,pcVar5);
        }
        pcVar5 = &DAT_10000748;
        if (local_e4[0] != '\0') {
          pcVar5 = local_e4;
        }
      }
    }
    else {
      pcVar5 = &DAT_10000748;
    }
    if (*(uint *)((long)api + 0xc) != 0) {
      iVar3 = (*(code *)(ulong)*(uint *)((long)api + 0xc))(&DAT_1000074c,pcVar5,local_2a0);
      if (iVar3 == 0) {
        return 0;
      }
      recovered_100005f0((undefined1 *)&local_1a0,0xb8);
      local_1a0 = DAT_10000740;
      local_190 = 0;
      local_198 = 3;
      recovered_10000608(auStack_188,0x40,str_100007b0);
      recovered_10000608(auStack_148,0x60,str_100007bf);
      if (((*(int *)api == 0x54584b57) && (0xeb < *(uint *)((long)api + 8))) &&
         (*(uint *)((long)api + 0xe8) != 0)) {
        uVar4 = (*(code *)(ulong)*(uint *)((long)api + 0xe8))(&local_1a0);
        return uVar4;
      }
    }
  }
  return 0;
}

#undef DAT_10000740
#undef DAT_10000748
#undef DAT_1000074c
#undef DAT_1000077d
#undef str_1000074d
#undef str_10000764
#undef str_10000780
#undef str_10000797
#undef str_100007b0
#undef str_100007bf
#undef local_2a0
#undef local_1a0
#undef local_198
#undef local_190
#undef local_e8
#undef local_e4
#undef local_84
#undef auStack_188
#undef auStack_148

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100005f0
 */

void recovered_100005f0(undefined1 *param_1,long param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 != (undefined1 *)0x0) {
    for (; param_2 != 0; param_2 = param_2 + -1) {
      *param_1 = 0;
      param_1 = param_1 + 1;
    }
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000608
 */

void recovered_10000608(undefined1 *param_1,ulong param_2,char *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  char *pcVar2;

  if (param_1 == (undefined1 *)0x0) {
    return;
  }
  *param_1 = 0;
  uVar1 = recovered_10000714((long)param_1);
  if ((param_1 != (undefined1 *)0x0) && (param_3 != (char *)0x0)) {
    pcVar2 = param_1 + uVar1;
    while( true ) {
      uVar1 = uVar1 + 1;
      if (*param_3 == '\0' || param_2 <= uVar1) break;
      *pcVar2 = *param_3;
      pcVar2 = pcVar2 + 1;
      param_3 = param_3 + 1;
    }
    *pcVar2 = '\0';
  }
  return;
}


#define abStack_3b (*(byte (*)[59])(pf_stack_frame + 21))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000618
 */

void recovered_10000618(long param_1,uint param_2)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  byte bVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;

  for (uVar3 = 0; (param_2 != 0 && (uVar3 < 10)); uVar3 = uVar3 + 1) {
    abStack_3b[uVar3 + 1] = (char)param_2 + (char)(param_2 / 10) * -10 | 0x30;
    param_2 = param_2 / 10;
  }
  while (uVar4 = uVar3 - 1, uVar4 != 0xffffffffffffffff) {
    bVar1 = abStack_3b[uVar3];
    lVar2 = recovered_10000714(param_1);
    uVar3 = uVar4;
    if ((param_1 != 0) && (lVar2 + 1U < 0x100)) {
      *(byte *)(param_1 + lVar2) = bVar1;
      *(undefined1 *)(param_1 + lVar2 + 1U) = 0;
    }
  }
  return;
}

#undef abStack_3b

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100006b4
 */

void recovered_100006b4(long param_1,ulong param_2,char *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  char *pcVar2;

  uVar1 = recovered_10000714(param_1);
  if ((param_1 != 0) && (param_3 != (char *)0x0)) {
    pcVar2 = (char *)(param_1 + uVar1);
    while( true ) {
      uVar1 = uVar1 + 1;
      if (*param_3 == '\0' || param_2 <= uVar1) break;
      *pcVar2 = *param_3;
      pcVar2 = pcVar2 + 1;
      param_3 = param_3 + 1;
    }
    *pcVar2 = '\0';
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000714
 */

long recovered_10000714(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  long lVar2;

  lVar2 = 0;
  if (param_1 != 0) {
    lVar1 = 0;
    do {
      lVar2 = lVar1;
      lVar1 = lVar2 + 1;
    } while (*(char *)(param_1 + lVar2) != '\0');
  }
  return lVar2;
}


void *memset(void *p,int v,size_t n){volatile unsigned char *b=p;while(n--)*b++=(unsigned char)v;return p;}
void __bzero(void *p,size_t n){volatile unsigned char *b=p;while(n--)*b++=0;}
void bzero(void *p,size_t n){__bzero(p,n);}
