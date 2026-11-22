/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_10004000
#define DAT_10004000 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x380cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000390
 */

void * recovered_10000390(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return &DAT_10004000;
}

#undef DAT_10004000

#undef DAT_100008ba
#define DAT_100008ba (*(uint8_t *)(((uintptr_t)pf_module_state + 0xc6U)))
#undef DAT_100008bc
#define DAT_100008bc (*(uint8_t *)(((uintptr_t)pf_module_state + 0xc8U)))
#undef DAT_100008be
#define DAT_100008be (*(uint8_t *)(((uintptr_t)pf_module_state + 0xcaU)))
#undef str_100007f4
#define str_100007f4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x0U)))
#undef str_10000804
#define str_10000804 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x10U)))
#undef str_10000833
#define str_10000833 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3fU)))
#undef str_10000844
#define str_10000844 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x50U)))
#undef str_10000852
#define str_10000852 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5eU)))
#undef str_10000862
#define str_10000862 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6eU)))
#undef str_1000086c
#define str_1000086c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x78U)))
#undef str_10000875
#define str_10000875 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x81U)))
#undef str_1000087e
#define str_1000087e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x8aU)))
#undef str_100008a4
#define str_100008a4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb0U)))
#undef str_100008b3
#define str_100008b3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xbfU)))
#define uStack_74 (*(uint *)(frame + 380))
#define uStack_38 (*(uint *)(frame + 440))
#define uStack_34 (*(uint *)(frame + 444))
#define auStack_1d8 (*(undefined1 (*)[256])(frame + 24))
#define auStack_d8 (*(undefined1 (*)[4])(frame + 280))
#define acStack_d4 (*(char (*)[96])(frame + 284))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000039c
 */

int recovered_1000039c(int *api)

{
  unsigned char frame[528] __attribute__((aligned(16))) = {0};

  int iVar1;

  if (api == (int *)0x0) {
    return 0;
  }
  if ((*api == 0x54584b57) && (0xf < (uint)api[2])) {
    recovered_10000564(auStack_1d8,0x60,str_100007f4);
    recovered_10000664((long)auStack_1d8,0x60,str_100008a4);
    recovered_100006bc((long)auStack_1d8,0x60,api[1]);
    recovered_10000664((long)auStack_1d8,0x60,str_100008b3);
    if ((*api == 0x54584b57) && ((0x2b < (uint)api[2] && (api[10] != 0)))) {
      (*(code *)(ulong)(uint)api[10])(auStack_1d8);
    }
    recovered_10000564(auStack_1d8,0x100,str_10000804);
    recovered_10000574((long)auStack_1d8,str_10000833,0);
    recovered_10000574((long)auStack_1d8,str_10000844,0);
    if ((((*api == 0x54584b57) && (0x3f < (uint)api[2])) && (api[0xf] != 0)) &&
       (iVar1 = (*(code *)(ulong)(uint)api[0xf])(auStack_d8), iVar1 != 0)) {
      recovered_10000574((long)auStack_1d8,str_10000852,uStack_74);
      recovered_10000664((long)auStack_1d8,0x100,&DAT_100008ba);
      recovered_10000664((long)auStack_1d8,0x100,str_10000862);
      recovered_10000664((long)auStack_1d8,0x100,&DAT_100008bc);
      recovered_10000664((long)auStack_1d8,0x100,acStack_d4);
      recovered_100005d8((long)auStack_1d8,str_1000086c,uStack_38);
      recovered_100005d8((long)auStack_1d8,str_10000875,uStack_34);
    }
    if (api[3] != 0) {
      iVar1 = (*(code *)(ulong)(uint)api[3])(&DAT_100008be,str_1000087e,auStack_1d8);
      if (iVar1 == 0) {
        return 0;
      }
      if (api[4] != 0) {
        iVar1 = (*(code *)(ulong)(uint)api[4])(0,0);
        return iVar1;
      }
    }
  }
  return 0;
}

#undef DAT_100008ba
#undef DAT_100008bc
#undef DAT_100008be
#undef str_100007f4
#undef str_10000804
#undef str_10000833
#undef str_10000844
#undef str_10000852
#undef str_10000862
#undef str_1000086c
#undef str_10000875
#undef str_1000087e
#undef str_100008a4
#undef str_100008b3
#undef uStack_74
#undef uStack_38
#undef uStack_34
#undef auStack_1d8
#undef auStack_d8
#undef acStack_d4

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000564
 */

void recovered_10000564(undefined1 *param_1,ulong param_2,char *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  char *pcVar2;

  if (param_1 == (undefined1 *)0x0) {
    return;
  }
  *param_1 = 0;
  uVar1 = recovered_1000076c((long)param_1);
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


#undef DAT_100008ba
#define DAT_100008ba (*(uint8_t *)(((uintptr_t)pf_module_state + 0xc6U)))
#undef DAT_100008bc
#define DAT_100008bc (*(uint8_t *)(((uintptr_t)pf_module_state + 0xc8U)))
#define abStack_3b (*(byte (*)[11])(frame + 21))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000574
 */

void recovered_10000574(long param_1,char *param_2,uint param_3)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  long lVar1;
  ulong uVar2;

  recovered_10000664(param_1,0x100,&DAT_100008ba);
  recovered_10000664(param_1,0x100,param_2);
  recovered_10000664(param_1,0x100,&DAT_100008bc);
  if (param_3 == 0) {
    lVar1 = recovered_1000076c(param_1);
    if ((param_1 != 0) && (lVar1 + 1U < 0x100)) {
      *(undefined1 *)(param_1 + lVar1) = 0x30;
      *(undefined1 *)(param_1 + lVar1 + 1U) = 0;
    }
    return;
  }
  for (uVar2 = 0; (param_3 != 0 && (uVar2 < 10)); uVar2 = uVar2 + 1) {
    abStack_3b[uVar2 + 1] = (char)param_3 + (char)(param_3 / 10) * -10 | 0x30;
    param_3 = param_3 / 10;
  }
  for (; uVar2 != 0; uVar2 = uVar2 - 1) {
    recovered_10000788(param_1,0x100,abStack_3b[uVar2]);
  }
  return;
}

#undef DAT_100008ba
#undef DAT_100008bc
#undef abStack_3b

#undef DAT_100008ba
#define DAT_100008ba (*(uint8_t *)(((uintptr_t)pf_module_state + 0xc6U)))
#undef DAT_100008bc
#define DAT_100008bc (*(uint8_t *)(((uintptr_t)pf_module_state + 0xc8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100005d8
 */

void recovered_100005d8(long param_1,char *param_2,uint param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;

  recovered_10000664(param_1,0x100,&DAT_100008ba);
  recovered_10000664(param_1,0x100,param_2);
  recovered_10000664(param_1,0x100,&DAT_100008bc);
  for (uVar4 = 0x1c; uVar4 != 0xfffffffc; uVar4 = uVar4 - 4) {
    uVar3 = param_3 >> (ulong)(uVar4 & 0x1f);
    uVar1 = uVar3 & 0xf;
    bVar2 = (byte)uVar3 & 0xf | 0x30;
    if (9 < uVar1) {
      bVar2 = (char)uVar1 + 0x37;
    }
    recovered_10000788(param_1,0x100,bVar2);
  }
  return;
}

#undef DAT_100008ba
#undef DAT_100008bc

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000664
 */

void recovered_10000664(long param_1,ulong param_2,char *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  char *pcVar2;

  uVar1 = recovered_1000076c(param_1);
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


#define local_3b (*(byte (*)[11])(frame + 21))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100006bc
 */

void recovered_100006bc(long param_1,ulong param_2,uint param_3)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  long lVar1;
  ulong uVar2;

  if (param_3 == 0) {
    lVar1 = recovered_1000076c(param_1);
    if ((param_1 != 0) && (lVar1 + 1U < param_2)) {
      *(undefined1 *)(param_1 + lVar1) = 0x30;
      *(undefined1 *)(param_1 + lVar1 + 1U) = 0;
    }
    return;
  }
  for (uVar2 = 0; (param_3 != 0 && (uVar2 < 10)); uVar2 = uVar2 + 1) {
    local_3b[uVar2 + 1] = (char)param_3 + (char)(param_3 / 10) * -10 | 0x30;
    param_3 = param_3 / 10;
  }
  for (; uVar2 != 0; uVar2 = uVar2 - 1) {
    recovered_10000788(param_1,param_2,local_3b[uVar2]);
  }
  return;
}

#undef local_3b

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000076c
 */

long recovered_1000076c(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

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


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000788
 */

void recovered_10000788(long param_1,ulong param_2,undefined1 param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;

  lVar1 = recovered_1000076c(param_1);
  if ((param_1 != 0) && (lVar1 + 1U < param_2)) {
    *(undefined1 *)(param_1 + lVar1) = param_3;
    *(undefined1 *)(param_1 + lVar1 + 1U) = 0;
  }
  return;
}


void bzero(void *p,size_t n){volatile unsigned char *d=p;while(n--)*d++=0;}
void __bzero(void *p,size_t n){bzero(p,n);}
void *memset(void *p,int value,size_t n){volatile unsigned char *d=p;while(n--)*d++=value;return p;}
