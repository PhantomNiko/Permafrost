/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_10001000
#define DAT_10001000 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xcbU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000b1d
 */

void * recovered_10000b1d(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return &DAT_10001000;
}

#undef DAT_10001000

#undef DAT_10000f35
#define DAT_10000f35 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x0U)))
#undef DAT_10000f39
#define DAT_10000f39 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4U)))
#undef DAT_10000f6a
#define DAT_10000f6a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x35U)))
#undef DAT_10000fa5
#define DAT_10000fa5 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x70U)))
#undef str_10000f3a
#define str_10000f3a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5U)))
#undef str_10000f51
#define str_10000f51 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1cU)))
#undef str_10000f6d
#define str_10000f6d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x38U)))
#undef str_10000f84
#define str_10000f84 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4fU)))
#undef str_10000f9d
#define str_10000f9d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x68U)))
#define local_b4 (*(undefined1 (*)[180])(pf_stack_frame + 476))
#define local_74 (*(undefined1 (*)[116])(pf_stack_frame + 540))
#define local_274 (*(char (*)[628])(pf_stack_frame + 28))
#define local_174 (*(uint *)(pf_stack_frame + 284))
#define local_170 (*(char (*)[368])(pf_stack_frame + 288))
#define local_110 (*(uint *)(pf_stack_frame + 384))
#define local_cc (*(undefined4 *)(pf_stack_frame + 452))
#define local_c8 (*(undefined4 *)(pf_stack_frame + 456))
#define local_c4 (*(undefined4 *)(pf_stack_frame + 460))
#define local_bc (*(undefined4 *)(pf_stack_frame + 468))
#define local_b8 (*(undefined4 *)(pf_stack_frame + 472))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000b33
 */

uint recovered_10000b33(void *api)

{
  unsigned char pf_stack_frame[688] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  char *pcVar3;
  uint number;
  uint uVar4;

  uVar4 = 0;
  if ((((api != (void *)0x0) && (*(int *)api == 0x54584b57)) && (*(int *)((int)api + 4) == 1100000))
     && (0xf7 < *(uint *)((int)api + 8))) {
    recovered_10000d77(&local_174,0xa8);
    recovered_10000d90(local_274,0x100,&DAT_10000f39);
    pcVar3 = &DAT_10000f35;
    if (((*(int *)api == 0x54584b57) && (0x3f < *(uint *)((int)api + 8))) &&
       (*(code **)((int)api + 0x3c) != (code *)0x0)) {
      iVar1 = (**(code **)((int)api + 0x3c))(&local_174);
      pcVar3 = &DAT_10000f35;
      if (iVar1 != 0) {
        number = local_174 >> 0x10 & 0xff;
        uVar2 = number;
        if (number == 0) {
          uVar2 = local_110;
        }
        if (local_174 < 0x1000000) {
          number = uVar2;
        }
        if (number != 0) {
          recovered_10000daf(local_274,number);
          pcVar3 = str_10000f51;
          if (number == 1) {
            pcVar3 = str_10000f3a;
          }
          recovered_10000e12(local_274,0x100,pcVar3);
        }
        if (0xffffff < local_174) {
          if (local_274[0] != '\0') {
            recovered_10000e12(local_274,0x100,&DAT_10000f6a);
          }
          recovered_10000daf(local_274,local_174 >> 0x18);
          pcVar3 = str_10000f84;
          if (local_174 >> 0x18 == 1) {
            pcVar3 = str_10000f6d;
          }
          recovered_10000e12(local_274,0x100,pcVar3);
        }
        pcVar3 = &DAT_10000f35;
        if (local_170[0] != '\0') {
          pcVar3 = local_170;
        }
      }
    }
    if (*(code **)((int)api + 0xc) != (code *)0x0) {
      iVar1 = (**(code **)((int)api + 0xc))(&DAT_10000f39,pcVar3,local_274);
      if (iVar1 != 0) {
        recovered_10000d77(&local_cc,0xb8);
        local_cc = 1;
        local_c8 = 0xb8;
        local_c4 = 1;
        local_bc = 0;
        local_b8 = 0;
        recovered_10000d90(local_b4,0x40,str_10000f9d);
        recovered_10000d90(local_74,0x60,&DAT_10000fa5);
        if (((*(int *)api == 0x54584b57) && (0xeb < *(uint *)((int)api + 8))) &&
           (*(code **)((int)api + 0xe8) != (code *)0x0)) {
          uVar4 = (**(code **)((int)api + 0xe8))(&local_cc);
        }
      }
    }
  }
  return uVar4;
}

#undef DAT_10000f35
#undef DAT_10000f39
#undef DAT_10000f6a
#undef DAT_10000fa5
#undef str_10000f3a
#undef str_10000f51
#undef str_10000f6d
#undef str_10000f84
#undef str_10000f9d
#undef local_b4
#undef local_74
#undef local_274
#undef local_174
#undef local_170
#undef local_110
#undef local_cc
#undef local_c8
#undef local_c4
#undef local_bc
#undef local_b8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000d77
 */

void recovered_10000d77(void *data,uint bytes)

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


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000d90
 */

void recovered_10000d90(void *dest,uint capacity,void *text)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (dest != (void *)0x0) {
    *(undefined1 *)dest = 0;
    recovered_10000e12(dest,capacity,text);
  }
  return;
}


#define abStack_1f (*(byte (*)[31])(pf_stack_frame + 17))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000daf
 */

void recovered_10000daf(void *dest,uint number)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;

  for (uVar3 = 0; (number != 0 && (uVar3 < 10)); uVar3 = uVar3 + 1) {
    abStack_1f[uVar3 + 1] = (byte)(number % 10) | 0x30;
    number = number / 10;
  }
  while (uVar4 = uVar3 - 1, uVar3 != 0) {
    bVar1 = abStack_1f[uVar3];
    uVar2 = recovered_10000e58(dest);
    uVar3 = uVar4;
    if ((dest != (void *)0x0) && (uVar2 + 1 < 0x100)) {
      *(byte *)((int)dest + uVar2) = bVar1;
      *(undefined1 *)((int)dest + uVar2 + 1) = 0;
    }
  }
  return;
}

#undef abStack_1f

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000e12
 */

void recovered_10000e12(void *dest,uint capacity,void *text)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  uVar1 = recovered_10000e58(dest);
  if (text != (void *)0x0 && dest != (void *)0x0) {
    while( true ) {
      if ((*(char *)text == '\0') || (capacity <= uVar1 + 1)) break;
      *(char *)((int)dest + uVar1) = *(char *)text;
      text = (void *)((int)text + 1);
      uVar1 = uVar1 + 1;
    }
    *(undefined1 *)((int)dest + uVar1) = 0;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000e58
 */

uint recovered_10000e58(void *text)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  uint uVar3;

  if (text == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar3 = 0xffffffff;
    do {
      uVar2 = uVar3 + 1;
      iVar1 = uVar3 + 1;
      uVar3 = uVar2;
    } while (*(char *)((int)text + iVar1) != '\0');
  }
  return uVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000e79
 */

undefined8 recovered_10000e79(uint param_1,uint param_2,uint param_3)

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
    if (0x3f < param_3) goto LAB_10000eb4;
    bVar2 = (byte)param_3;
    if (0x1f < param_3) {
      uVar3 = param_1 << (bVar2 & 0x1f);
      uVar1 = 0;
      goto LAB_10000eb4;
    }
    uVar3 = param_1 >> 0x20 - (bVar2 & 0x1f);
    param_1 = param_1 << (bVar2 & 0x1f);
    uVar3 = param_2 << (bVar2 & 0x1f) | uVar3;
  }
  uVar1 = param_1;
LAB_10000eb4:
  return CONCAT44(uVar3,uVar1);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000ebb
 */

undefined8 recovered_10000ebb(uint param_1,uint param_2,uint param_3)

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
 * Address: 0x10000eff
 */

undefined8 recovered_10000eff(uint param_1,uint param_2,uint param_3)

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
