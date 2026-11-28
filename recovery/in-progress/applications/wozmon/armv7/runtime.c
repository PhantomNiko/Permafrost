/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000000
 */

uint recovered_10000000(uint param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;

  if (param_2 == 0) {
    return 0;
  }
  uVar1 = 0;
  uVar2 = 0;
  uVar3 = 0x1f;
  do {
    uVar1 = param_1 >> (uVar3 & 0xff) & 1 | uVar1 << 1;
    if (param_2 <= uVar1) {
      uVar2 = uVar2 | 1 << (uVar3 & 0xff);
      uVar1 = uVar1 - param_2;
    }
    bVar4 = uVar3 != 0;
    uVar3 = uVar3 - 1;
  } while (bVar4);
  return uVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000050
 */

uint recovered_10000050(uint param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;

  uVar1 = 0;
  if (param_2 != 0) {
    uVar3 = 0x1f;
    do {
      uVar2 = param_1 >> (uVar3 & 0xff) & 1 | uVar1 << 1;
      uVar1 = uVar2 - param_2;
      if (uVar2 < param_2) {
        uVar1 = uVar2;
      }
      bVar4 = uVar3 != 0;
      uVar3 = uVar3 - 1;
    } while (bVar4);
  }
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000088
 */

uint recovered_10000088(uint param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;

  uVar4 = param_2;
  if ((int)param_2 < 0) {
    uVar4 = -param_2;
  }
  uVar3 = param_1;
  if ((int)param_1 < 0) {
    uVar3 = -param_1;
  }
  if (param_2 == 0) {
    uVar5 = 0;
  }
  else {
    uVar2 = 0;
    uVar5 = 0;
    uVar1 = 0x1f;
    do {
      uVar2 = uVar3 >> (uVar1 & 0xff) & 1 | uVar2 << 1;
      if (uVar4 <= uVar2) {
        uVar5 = uVar5 | 1 << (uVar1 & 0xff);
        uVar2 = uVar2 - uVar4;
      }
      bVar6 = uVar1 != 0;
      uVar1 = uVar1 - 1;
    } while (bVar6);
  }
  if ((int)(param_2 ^ param_1) < 0) {
    uVar5 = -uVar5;
  }
  return uVar5;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100000f8
 */

uint recovered_100000f8(uint param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;

  uVar4 = param_2;
  if ((int)param_2 < 0) {
    uVar4 = -param_2;
  }
  uVar5 = param_1;
  if ((int)param_1 < 0) {
    uVar5 = -param_1;
  }
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = 0;
    uVar2 = 0x1f;
    do {
      uVar3 = uVar5 >> (uVar2 & 0xff) & 1 | uVar1 << 1;
      uVar1 = uVar3 - uVar4;
      if (uVar3 < uVar4) {
        uVar1 = uVar3;
      }
      bVar6 = uVar2 != 0;
      uVar2 = uVar2 - 1;
    } while (bVar6);
  }
  if ((int)param_1 < 0) {
    uVar1 = -uVar1;
  }
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000160
 */

undefined8 recovered_10000160(uint param_1,uint param_2,uint param_3,uint param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;

  if (param_3 == 0 && param_4 == 0) {
    uVar6 = 0;
    uVar8 = 0;
  }
  else {
    uVar9 = 0;
    uVar4 = 0;
    uVar6 = 0;
    uVar8 = 0;
    uVar2 = 0x3f;
    do {
      uVar7 = uVar4 << 1 | uVar9 >> 0x1f;
      uVar3 = uVar2 - 0x20;
      uVar4 = param_1 >> (uVar2 & 0xff) | param_2 << (0x20 - uVar2 & 0xff);
      if (-1 < (int)uVar3) {
        uVar4 = param_2 >> (uVar3 & 0xff);
      }
      uVar5 = uVar4 & 1 | uVar9 << 1;
      bVar10 = uVar7 <= param_4;
      bVar1 = (uint)(param_3 <= uVar5) <= uVar7 - param_4;
      uVar4 = uVar7 - (param_4 + (param_3 > uVar5));
      uVar9 = uVar5 - param_3;
      if (bVar10 && bVar1) {
        uVar4 = uVar7;
        uVar9 = uVar5;
      }
      uVar7 = 1 >> (0x20 - uVar2 & 0xff);
      if (-1 < (int)uVar3) {
        uVar7 = 1 << (uVar3 & 0xff);
      }
      if (!bVar10 || !bVar1) {
        uVar8 = uVar8 | uVar7;
      }
      uVar7 = 1 << (uVar2 & 0xff);
      if (-1 < (int)uVar3) {
        uVar7 = 0;
      }
      if (!bVar10 || !bVar1) {
        uVar6 = uVar6 | uVar7;
      }
      bVar10 = uVar2 != 0;
      uVar2 = uVar2 - 1;
    } while (bVar10);
  }
  return CONCAT44(uVar8,uVar6);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000244
 */

undefined8 recovered_10000244(uint param_1,uint param_2,uint param_3,uint param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;

  if (param_3 == 0 && param_4 == 0) {
    return 0;
  }
  uVar1 = 0;
  uVar4 = 0;
  uVar5 = 0x3f;
  do {
    uVar3 = uVar4 << 1 | uVar1 >> 0x1f;
    uVar4 = param_1 >> (uVar5 & 0xff) | param_2 << (0x20 - uVar5 & 0xff);
    if (-1 < (int)(uVar5 - 0x20)) {
      uVar4 = param_2 >> (uVar5 - 0x20 & 0xff);
    }
    uVar2 = uVar4 & 1 | uVar1 << 1;
    uVar1 = uVar2 - param_3;
    uVar4 = uVar3 - (param_4 + (param_3 > uVar2));
    if (uVar3 <= param_4 && (uint)(param_3 <= uVar2) <= uVar3 - param_4) {
      uVar1 = uVar2;
      uVar4 = uVar3;
    }
    bVar6 = uVar5 != 0;
    uVar5 = uVar5 - 1;
  } while (bVar6);
  return CONCAT44(uVar4,uVar1);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100002c4
 */

undefined8 recovered_100002c4(uint param_1,uint param_2,uint param_3,uint param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  bool bVar15;

  uVar1 = (int)param_4 >> 0x1f;
  uVar8 = (param_3 ^ uVar1) - uVar1;
  uVar2 = (int)param_2 >> 0x1f;
  uVar13 = (param_4 ^ uVar1) - (uVar1 + ((param_3 ^ uVar1) < uVar1));
  uVar11 = (param_2 ^ uVar2) - (uVar2 + ((param_1 ^ uVar2) < uVar2));
  if (param_3 == 0 && param_4 == 0) {
    uVar12 = 0;
    uVar14 = 0;
  }
  else {
    uVar9 = 0;
    uVar4 = 0;
    uVar12 = 0;
    uVar14 = 0;
    uVar10 = 0x3f;
    do {
      uVar6 = uVar4 << 1 | uVar9 >> 0x1f;
      uVar5 = uVar10 - 0x20;
      uVar4 = (param_1 ^ uVar2) - uVar2 >> (uVar10 & 0xff) | uVar11 << (0x20 - uVar10 & 0xff);
      if (-1 < (int)uVar5) {
        uVar4 = uVar11 >> (uVar5 & 0xff);
      }
      uVar7 = uVar4 & 1 | uVar9 << 1;
      bVar15 = uVar6 <= uVar13;
      bVar3 = (uint)(uVar8 <= uVar7) <= uVar6 - uVar13;
      uVar4 = uVar6 - (uVar13 + (uVar8 > uVar7));
      uVar9 = uVar7 - uVar8;
      if (bVar15 && bVar3) {
        uVar4 = uVar6;
        uVar9 = uVar7;
      }
      uVar6 = 1 >> (0x20 - uVar10 & 0xff);
      if (-1 < (int)uVar5) {
        uVar6 = 1 << (uVar5 & 0xff);
      }
      if (!bVar15 || !bVar3) {
        uVar14 = uVar14 | uVar6;
      }
      uVar6 = 1 << (uVar10 & 0xff);
      if (-1 < (int)uVar5) {
        uVar6 = 0;
      }
      if (!bVar15 || !bVar3) {
        uVar12 = uVar12 | uVar6;
      }
      bVar15 = uVar10 != 0;
      uVar10 = uVar10 - 1;
    } while (bVar15);
  }
  uVar11 = -uVar12;
  uVar8 = -(uVar14 + (uVar12 != 0));
  if (-uVar2 == -uVar1) {
    uVar11 = uVar12;
    uVar8 = uVar14;
  }
  return CONCAT44(uVar8,uVar11);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100003e4
 */

undefined8 recovered_100003e4(uint param_1,uint param_2,uint param_3,uint param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;

  uVar7 = (int)param_4 >> 0x1f;
  uVar8 = (param_3 ^ uVar7) - uVar7;
  uVar1 = (int)param_2 >> 0x1f;
  uVar9 = (param_4 ^ uVar7) - (uVar7 + ((param_3 ^ uVar7) < uVar7));
  uVar7 = (param_2 ^ uVar1) - (uVar1 + ((param_1 ^ uVar1) < uVar1));
  if (param_3 == 0 && param_4 == 0) {
    uVar3 = 0;
    uVar4 = 0;
  }
  else {
    uVar3 = 0;
    uVar4 = 0;
    uVar2 = 0x3f;
    do {
      uVar5 = uVar4 << 1 | uVar3 >> 0x1f;
      uVar4 = (param_1 ^ uVar1) - uVar1 >> (uVar2 & 0xff) | uVar7 << (0x20 - uVar2 & 0xff);
      if (-1 < (int)(uVar2 - 0x20)) {
        uVar4 = uVar7 >> (uVar2 - 0x20 & 0xff);
      }
      uVar6 = uVar4 & 1 | uVar3 << 1;
      uVar3 = uVar6 - uVar8;
      uVar4 = uVar5 - (uVar9 + (uVar8 > uVar6));
      if (uVar5 <= uVar9 && (uint)(uVar8 <= uVar6) <= uVar5 - uVar9) {
        uVar3 = uVar6;
        uVar4 = uVar5;
      }
      bVar10 = uVar2 != 0;
      uVar2 = uVar2 - 1;
    } while (bVar10);
  }
  uVar1 = -uVar3;
  uVar7 = -(uVar4 + (uVar3 != 0));
  if (-1 < (int)param_2) {
    uVar1 = uVar3;
    uVar7 = uVar4;
  }
  return CONCAT44(uVar7,uVar1);
}


#undef DAT_10000520
#define DAT_10000520 (*(double *)(0x10000520U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100004a0
 */

undefined8 recovered_100004a0(undefined4 param_1,undefined4 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  double dVar7;
  double dVar8;

  dVar7 = pf_bits_double(CONCAT44(param_2,param_1));
  uVar1 = 0;
  uVar2 = 0;
  if (dVar7 <= 0.0) {
    return 0;
  }
  uVar3 = 0x3f;
  dVar8 = pf_bits_double(0x43e0000000000000ULL);
  do {
    uVar4 = 1 << (uVar3 & 0xff);
    uVar5 = uVar3 - 0x20;
    if (-1 < (int)uVar5) {
      uVar4 = 0;
    }
    if (dVar8 <= dVar7) {
      uVar1 = uVar1 | uVar4;
    }
    uVar4 = 1 >> (0x20 - uVar3 & 0xff);
    if (-1 < (int)uVar5) {
      uVar4 = 1 << (uVar5 & 0xff);
    }
    if (dVar8 <= dVar7) {
      uVar2 = uVar2 | uVar4;
      dVar7 = dVar7 - dVar8;
    }
    bVar6 = uVar3 != 0;
    uVar3 = uVar3 - 1;
    dVar8 = dVar8 * 0.5;
  } while (bVar6);
  return CONCAT44(uVar2,uVar1);
}

#undef DAT_10000520

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000528
 */

undefined8 recovered_10000528(undefined4 param_1,undefined4 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  undefined8 uVar2;

  dVar1 = pf_bits_double(CONCAT44(param_2,param_1));
  if (NAN(dVar1)) {
    return 0;
  }
  if (dVar1 < 0.0) {
    uVar2 = recovered_100004a0(SUB84(-dVar1,0),(int)((ulonglong)-dVar1 >> 0x20));
    return CONCAT44(-((int)((ulonglong)uVar2 >> 0x20) + (uint)((int)uVar2 != 0)),-(int)uVar2);
  }
  uVar2 = recovered_100004a0(param_1,param_2);
  return uVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000574
 */

void recovered_10000574(float param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_100004a0(SUB84((double)param_1,0),(int)((ulonglong)(double)param_1 >> 0x20));
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000584
 */

void recovered_10000584(float param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10000528(SUB84((double)param_1,0),(int)((ulonglong)(double)param_1 >> 0x20));
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000594
 */

double recovered_10000594(uint param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  double dVar2;
  double dVar3;
  double dVar4;

  if (param_1 == 0 && param_2 == 0) {
    return 0.0;
  }
  dVar2 = 1.0;
  dVar3 = 0.0;
  do {
    dVar4 = dVar3 + dVar2;
    dVar2 = dVar2 + dVar2;
    if ((param_1 & 1) == 0) {
      dVar4 = dVar3;
    }
    dVar3 = dVar4;
    bVar1 = (byte)param_2;
    param_2 = param_2 >> 1;
    param_1 = (uint)(bVar1 & 1) << 0x1f | param_1 >> 1;
  } while (param_1 != 0 || param_2 != 0);
  return dVar3;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100005dc
 */

void recovered_100005dc(int param_1,int param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_2 < 0) {
    recovered_10000594(-param_1,-(param_2 + (uint)(param_1 != 0)));
    return;
  }
  recovered_10000594(param_1,param_2);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000604
 */

float recovered_10000604(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint in_r0;
  uint in_r1;
  double dVar1;

  dVar1 = recovered_10000594(in_r0,in_r1);
  return (float)pf_bits_double(((pf_double_bits(dVar1) & 0xffffffff00000000) + (pf_double_bits(dVar1) & 0xffffffff)));
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000620
 */

float recovered_10000620(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int in_r0;
  undefined4 extraout_r0 = 0;
  int in_r1;
  undefined4 extraout_r1 = 0;

  recovered_100005dc(in_r0,in_r1);
  return (float)pf_bits_double(CONCAT44(extraout_r1,extraout_r0));
}


#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_40010820
#define DAT_40010820 (*(uint8_t *)(0x40010820U))
#undef DAT_40010824
#define DAT_40010824 (*(uint8_t *)(0x40010824U))
#undef DAT_40010828
#define DAT_40010828 (*(uint8_t *)(0x40010828U))
#undef DAT_4001082c
#define DAT_4001082c (*(uint8_t *)(0x4001082cU))
#undef DAT_40010830
#define DAT_40010830 (*(uint8_t *)(0x40010830U))
#undef DAT_60002000
#define DAT_60002000 (*(uint8_t *)(0x60002000U))
#undef DAT_60002001
#define DAT_60002001 (*(uint8_t *)(0x60002001U))
#undef DAT_60002060
#define DAT_60002060 (*(char *)(0x60002060U))
#undef DAT_60002064
#define DAT_60002064 (*(uint8_t *)(0x60002064U))
#undef _DAT_40010800
#define _DAT_40010800 (*(int *)(0x40010800U))
#undef _DAT_40010804
#define _DAT_40010804 (*(int *)(0x40010804U))
#undef _DAT_40010808
#define _DAT_40010808 (*(uint *)(0x40010808U))
#undef _DAT_40010820
#define _DAT_40010820 (*(code * *)(0x40010820U))
#undef _DAT_40010824
#define _DAT_40010824 (*(code * *)(0x40010824U))
#undef _DAT_40010828
#define _DAT_40010828 (*(code * *)(0x40010828U))
#undef _DAT_4001082c
#define _DAT_4001082c (*(code * *)(0x4001082cU))
#undef _DAT_40010830
#define _DAT_40010830 (*(code * *)(0x40010830U))
#define local_25 (*(char *)(pf_stack_frame + 43))
#define local_24 (*(code * *)(pf_stack_frame + 44))
#define local_35 (*(char *)(pf_stack_frame + 27))
#define local_34 (*(code * *)(pf_stack_frame + 28))
#define local_30 (*(byte * *)(pf_stack_frame + 32))
#define local_2c (*(byte * *)(pf_stack_frame + 36))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000063c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_1000063c(void)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  uint uVar1;
  byte bVar2;
  int iVar3;
  code *pcVar4;
  code *pcVar5;
  uint uVar6;
  uint uVar7;

  if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x23 < _DAT_40010808)) &&
     (_DAT_40010820 != (code *)0x0)) {
    (*_DAT_40010820)(0,0x55ff55,10);
  }
  if (((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) &&
     ((0x2b < _DAT_40010808 && (_DAT_40010828 != (code *)0x0)))) {
    (*_DAT_40010828)(((uintptr_t)pf_module_state+0x0U));
  }
  if (((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) &&
     ((0x2b < _DAT_40010808 && (_DAT_40010828 != (code *)0x0)))) {
    (*_DAT_40010828)(((uintptr_t)pf_module_state+0x18U));
  }
  if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x2b < _DAT_40010808)) &&
     (_DAT_40010828 != (code *)0x0)) {
    (*_DAT_40010828)(((uintptr_t)pf_module_state+0x34U));
  }
  if (((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) &&
     ((0x2b < _DAT_40010808 && (_DAT_40010828 != (code *)0x0)))) {
    (*_DAT_40010828)(((uintptr_t)pf_module_state+0x4eU));
  }
  if (((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) &&
     ((0x2b < _DAT_40010808 && (_DAT_40010828 != (code *)0x0)))) {
    (*_DAT_40010828)(((uintptr_t)pf_module_state+0x6bU));
  }
  if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x2b < _DAT_40010808)) &&
     (_DAT_40010828 != (code *)0x0)) {
    (*_DAT_40010828)(((uintptr_t)pf_module_state+0x80U));
  }
LAB_1000079c:
  (*(uint8_t *)((uintptr_t)pf_module_state+0xa5cU)) = 0;
  uVar6 = 0;
  uVar1 = uVar6;
  if (((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x27 < _DAT_40010808)) {
    iVar3 = 0x5c;
    if (_DAT_40010824 != (code *)0x0) goto LAB_10000d98;
  }
switchD_10000844_caseD_0:
  do {
    do {
      uVar7 = uVar1;
      uVar1 = uVar7;
    } while (_DAT_40010800 != 0x50414d57);
  } while (((_DAT_40010804 == 0) || (_DAT_40010808 < 0xc)) ||
          ((_DAT_40010808 < 0x30 || (_DAT_4001082c == (code *)0x0))));
  bVar2 = (*_DAT_4001082c)();
  switch((uintptr_t)(bVar2)) {
  case 0:
    goto switchD_10000844_caseD_0;
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 9:
  case 0xb:
  case 0xc:
  case 0xe:
  case 0xf:
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
  case 0x1a:
    goto switchD_10000844_caseD_1;
  case 8:
switchD_10000844_caseD_8:
    uVar1 = 0;
    if (uVar7 == 0) goto switchD_10000844_caseD_0;
    uVar6 = uVar7 - 1;
    *(undefined1 *)(uVar7 + ((uintptr_t)pf_module_state+0xa5bU)) = 0;
    uVar1 = uVar6;
    if ((((_DAT_40010800 != 0x50414d57) || (_DAT_40010804 == 0)) || (_DAT_40010808 < 0x28)) ||
       (_DAT_40010824 == (code *)0x0)) goto switchD_10000844_caseD_0;
    iVar3 = 8;
    break;
  case 10:
  case 0xd:
    goto switchD_10000844_caseD_a;
  case 0x1b:
    if (uVar7 == 0) {
      if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x2b < _DAT_40010808)) &&
         (_DAT_40010828 != (code *)0x0)) {
        (*_DAT_40010828)(((uintptr_t)pf_module_state+0xacU));
      }
      if (((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) &&
         ((0x33 < _DAT_40010808 && (_DAT_40010830 != (code *)0x0)))) {
        (*_DAT_40010830)();
      }
      return 0;
    }
    (*(uint8_t *)((uintptr_t)pf_module_state+0xa5cU)) = 0;
    if (((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) &&
       ((0x2b < _DAT_40010808 && (_DAT_40010828 != (code *)0x0)))) {
      (*_DAT_40010828)(((uintptr_t)pf_module_state+0xacU));
    }
    uVar6 = 0;
    uVar1 = uVar6;
    if ((((_DAT_40010800 != 0x50414d57) || (_DAT_40010804 == 0)) || (_DAT_40010808 < 0x28)) ||
       (_DAT_40010824 == (code *)0x0)) goto switchD_10000844_caseD_0;
    iVar3 = 0x5c;
    break;
  default:
    if (bVar2 == 0x7f) goto switchD_10000844_caseD_8;
switchD_10000844_caseD_1:
    if ((bVar2 - 0x7f < 0xffffffa1) || (uVar6 = uVar7 + 1, 0x5f < uVar6))
    goto switchD_10000844_caseD_0;
    (&(*(uint8_t *)((uintptr_t)pf_module_state+0xa5dU)))[uVar7] = 0;
    if ((byte)(bVar2 + 0x9f) < 0x1a) {
      bVar2 = bVar2 - 0x20;
    }
    (&(*(uint8_t *)((uintptr_t)pf_module_state+0xa5cU)))[uVar7] = bVar2;
    uVar1 = uVar6;
    if (((_DAT_40010800 != 0x50414d57) || (_DAT_40010804 == 0)) ||
       ((_DAT_40010808 < 0xc || ((_DAT_40010808 < 0x28 || (_DAT_40010824 == (code *)0x0))))))
    goto switchD_10000844_caseD_0;
    iVar3 = (int)(char)bVar2;
  }
LAB_10000d98:
  (*_DAT_40010824)(iVar3);
  uVar1 = uVar6;
  goto switchD_10000844_caseD_0;
switchD_10000844_caseD_a:
  (&(*(uint8_t *)((uintptr_t)pf_module_state+0xa5cU)))[uVar7] = 0;
  if (((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) &&
     ((0x2b < _DAT_40010808 && (_DAT_40010828 != (code *)0x0)))) {
    (*_DAT_40010828)(((uintptr_t)pf_module_state+0xacU));
  }
  for (local_30 = &(*(uint8_t *)((uintptr_t)pf_module_state+0xa5cU)); bVar2 = *local_30, bVar2 == 0x20 || bVar2 == 9;
      local_30 = local_30 + 1) {
  }
  local_34 = (code *)0x0;
  local_35 = '\0';
  if (bVar2 == 0) {
    if ((*(uint8_t *)((uintptr_t)pf_module_state+0xabcU)) != '\x01') goto LAB_1000079c;
    pcVar5 = (*(uint32_t *)((uintptr_t)pf_module_state+0xac0U));
    goto LAB_10000b48;
  }
  iVar3 = recovered_10001278(&local_30,(uint *)&local_34,&local_35);
  if (iVar3 != 0) {
    if (local_30 == (byte *)0x0) {
      local_30 = (byte *)0x0;
    }
    else {
      for (; *local_30 == 0x20 || *local_30 == 9; local_30 = local_30 + 1) {
      }
    }
    bVar2 = *local_30;
    if (bVar2 < 0x3a) {
      if (bVar2 == 0) {
        if (local_35 == '\x01') {
          pcVar5 = local_34;
        }
        else {
          if ((*(uint8_t *)((uintptr_t)pf_module_state+0xabcU)) != '\x01') goto LAB_10000dc0;
          local_34 = (*(uint32_t *)((uintptr_t)pf_module_state+0xac0U));
          pcVar5 = (*(uint32_t *)((uintptr_t)pf_module_state+0xac0U));
        }
LAB_10000b48:
        pcVar4 = pcVar5 + 7;
        if ((code *)0xfffffff8 < pcVar5) {
          pcVar4 = (code *)0xffffffff;
        }
        recovered_10000f94((byte *)pcVar5,(byte *)pcVar4);
        goto LAB_1000079c;
      }
      if (bVar2 == 0x2e) {
        local_24 = (code *)0x0;
        local_2c = (byte *)((uint)local_2c & 0xffffff00);
        if (local_35 == '\x01') {
          do {
            local_30 = local_30 + 1;
          } while (*local_30 == 0x20 || *local_30 == 9);
          iVar3 = recovered_10001278(&local_30,(uint *)&local_24,(undefined1 *)&local_2c);
          if ((iVar3 != 0) && ((char)local_2c == '\x01')) {
            for (; *local_30 == 0x20 || *local_30 == 9; local_30 = local_30 + 1) {
            }
            if ((*local_30 == 0) && (local_34 <= local_24)) {
              recovered_10000f94((byte *)local_34,(byte *)local_24);
              goto LAB_1000079c;
            }
          }
        }
      }
    }
    else if (bVar2 == 0x3a) {
      if (local_35 == '\x01') {
        local_30 = local_30 + 1;
        for (local_2c = local_30; bVar2 = *local_2c, bVar2 == 0x20 || bVar2 == 9;
            local_2c = local_2c + 1) {
        }
        pcVar5 = local_34;
        if (bVar2 != 0) {
          do {
            local_24 = (code *)0x0;
            local_25 = '\0';
            iVar3 = recovered_10001278(&local_2c,(uint *)&local_24,&local_25);
            if (((iVar3 == 0) || (local_25 != '\x01')) || ((code *)0xff < local_24))
            goto LAB_10000dc0;
            *(uint8_t *)(uintptr_t)pcVar5 = (uint8_t)(uintptr_t)local_24;
            for (; *local_2c == 0x20 || *local_2c == 9; local_2c = local_2c + 1) {
            }
            pcVar5 = pcVar5 + 1;
          } while (*local_2c != 0);
          (*(uint8_t *)((uintptr_t)pf_module_state+0xabcU)) = '\x01';
          (*(uint32_t *)((uintptr_t)pf_module_state+0xac0U)) = pcVar5;
          goto LAB_1000079c;
        }
      }
    }
    else if (bVar2 == 0x52) {
      if (local_35 == '\0') {
        if ((*(uint8_t *)((uintptr_t)pf_module_state+0xabcU)) != '\x01') goto LAB_10000dc0;
        local_34 = (*(uint32_t *)((uintptr_t)pf_module_state+0xac0U));
      }
      do {
        local_30 = local_30 + 1;
      } while (*local_30 == 0x20 || *local_30 == 9);
      if (*local_30 == 0) {
        (*(uint32_t *)((uintptr_t)pf_module_state+0xac0U)) = local_34;
        (*(uint8_t *)((uintptr_t)pf_module_state+0xabcU)) = '\x01';
        (*local_34)();
        if (((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) &&
           ((0x2b < _DAT_40010808 && (_DAT_40010828 != (code *)0x0)))) {
          (*_DAT_40010828)(((uintptr_t)pf_module_state+0xacU));
        }
        goto LAB_1000079c;
      }
    }
  }
LAB_10000dc0:
  if (((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) &&
     ((0x2b < _DAT_40010808 && (_DAT_40010828 != (code *)0x0)))) {
    (*_DAT_40010828)(((uintptr_t)pf_module_state+0xc4U));
  }
  goto LAB_1000079c;
}

#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_40010820
#undef DAT_40010824
#undef DAT_40010828
#undef DAT_4001082c
#undef DAT_40010830
#undef DAT_60002000
#undef DAT_60002001
#undef DAT_60002060
#undef DAT_60002064
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_40010820
#undef _DAT_40010824
#undef _DAT_40010828
#undef _DAT_4001082c
#undef _DAT_40010830
#undef local_25
#undef local_24
#undef local_35
#undef local_34
#undef local_30
#undef local_2c

#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_40010828
#define DAT_40010828 (*(uint8_t *)(0x40010828U))
#undef DAT_60001657
#define DAT_60001657 (*(uint8_t *)(0x60001657U))
#undef DAT_60002060
#define DAT_60002060 (*(uint8_t *)(0x60002060U))
#undef DAT_60002064
#define DAT_60002064 (*(uint8_t *)(0x60002064U))
#undef _DAT_40010800
#define _DAT_40010800 (*(int *)(0x40010800U))
#undef _DAT_40010804
#define _DAT_40010804 (*(int *)(0x40010804U))
#undef _DAT_40010808
#define _DAT_40010808 (*(uint *)(0x40010808U))
#undef _DAT_40010828
#define _DAT_40010828 (*(code * *)(0x40010828U))
#define local_2c (*(undefined1 *)(pf_stack_frame + 20))
#define local_2b (*(undefined1 *)(pf_stack_frame + 21))
#define local_2a (*(undefined1 *)(pf_stack_frame + 22))
#define local_29 (*(undefined1 *)(pf_stack_frame + 23))
#define local_28 (*(undefined1 *)(pf_stack_frame + 24))
#define local_27 (*(undefined1 *)(pf_stack_frame + 25))
#define local_26 (*(undefined1 *)(pf_stack_frame + 26))
#define local_25 (*(undefined1 *)(pf_stack_frame + 27))
#define local_24 (*(undefined1 *)(pf_stack_frame + 28))
#define local_23 (*(undefined1 *)(pf_stack_frame + 29))
#define local_22 (*(undefined1 *)(pf_stack_frame + 30))
#define local_21 (*(undefined1 *)(pf_stack_frame + 31))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000f94
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10000f94(byte *param_1,byte *param_2)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;

  do {
    local_24 = 0;
    local_2b = (&(*(uint8_t *)((uintptr_t)pf_module_state+0xb3U)))[((uint)param_1 & 0xfffffff) >> 0x18];
    local_2a = (&(*(uint8_t *)((uintptr_t)pf_module_state+0xb3U)))[((uint)param_1 & 0xffffff) >> 0x14];
    local_29 = (&(*(uint8_t *)((uintptr_t)pf_module_state+0xb3U)))[((uint)param_1 & 0xfffff) >> 0x10];
    local_28 = (&(*(uint8_t *)((uintptr_t)pf_module_state+0xb3U)))[((uint)param_1 & 0xffff) >> 0xc];
    local_27 = (&(*(uint8_t *)((uintptr_t)pf_module_state+0xb3U)))[((uint)param_1 & 0xfff) >> 8];
    local_25 = (&(*(uint8_t *)((uintptr_t)pf_module_state+0xb3U)))[(uint)param_1 & 0xf];
    local_26 = (&(*(uint8_t *)((uintptr_t)pf_module_state+0xb3U)))[((uint)param_1 & 0xff) >> 4];
    local_2c = (&(*(uint8_t *)((uintptr_t)pf_module_state+0xb3U)))[(uint)param_1 >> 0x1c];
    if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x2b < _DAT_40010808)) &&
       (_DAT_40010828 != (code *)0x0)) {
      (*_DAT_40010828)(&local_2c);
    }
    if (((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) &&
       ((0x2b < _DAT_40010808 && (_DAT_40010828 != (code *)0x0)))) {
      (*_DAT_40010828)(((uintptr_t)pf_module_state+0xafU));
    }
    uVar3 = 0;
    do {
      pbVar2 = param_1 + uVar3;
      bVar5 = 6 < uVar3;
      bVar4 = uVar3 == 7;
      if (uVar3 < 8) {
        bVar5 = param_2 <= pbVar2;
        bVar4 = pbVar2 == param_2;
      }
      if (bVar5 && !bVar4) goto LAB_100011d8;
      bVar1 = *pbVar2;
      if (((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) &&
         ((0x2b < _DAT_40010808 && (_DAT_40010828 != (code *)0x0)))) {
        (*_DAT_40010828)(((uintptr_t)pf_module_state+0xb1U));
      }
      local_23 = (&(*(uint8_t *)((uintptr_t)pf_module_state+0xb3U)))[bVar1 >> 4];
      local_22 = (&(*(uint8_t *)((uintptr_t)pf_module_state+0xb3U)))[bVar1 & 0xf];
      local_21 = 0;
      if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x2b < _DAT_40010808)) &&
         (_DAT_40010828 != (code *)0x0)) {
        (*_DAT_40010828)(&local_23);
      }
      uVar3 = uVar3 + 1;
    } while (param_1 + uVar3 != (byte *)0x0);
    pbVar2 = (byte *)0x0;
LAB_100011d8:
    if (((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) &&
       ((0x2b < _DAT_40010808 && (_DAT_40010828 != (code *)0x0)))) {
      (*_DAT_40010828)(((uintptr_t)pf_module_state+0xacU));
    }
    if ((param_2 <= param_1) || (param_1 = pbVar2, param_2 <= pbVar2 + -1)) {
      (*(uint8_t *)((uintptr_t)pf_module_state+0xabcU)) = 1;
      (*(uint32_t *)((uintptr_t)pf_module_state+0xac0U)) = param_2 + 1;
      return;
    }
  } while( true );
}

#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_40010828
#undef DAT_60001657
#undef DAT_60002060
#undef DAT_60002064
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_40010828
#undef local_2c
#undef local_2b
#undef local_2a
#undef local_29
#undef local_28
#undef local_27
#undef local_26
#undef local_25
#undef local_24
#undef local_23
#undef local_22
#undef local_21

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001278
 */

undefined4 recovered_10001278(undefined4 *param_1,uint *param_2,undefined1 *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  byte *in_r12;

  if (param_1 == (undefined4 *)0x0 || param_3 == (undefined1 *)0x0) {
    return 0;
  }
  if (param_2 != (uint *)0x0) {
    in_r12 = (byte *)*param_1;
  }
  if (param_2 == (uint *)0x0 || in_r12 == (byte *)0x0) {
    return 0;
  }
  uVar1 = (uint)*in_r12;
  uVar3 = uVar1 - 0x30;
  if (9 < (uVar3 & 0xff)) {
    if ((5 < uVar1 - 0x61) && (5 < uVar1 - 0x41)) {
      *param_3 = 0;
      return 1;
    }
    if ((uVar1 - 0x61 & 0xff) < 0x1a) {
      uVar1 = uVar1 - 0x20;
    }
    uVar3 = uVar1 - 0x37;
  }
  uVar3 = uVar3 & 0xff;
  pbVar2 = in_r12 + 1;
  uVar1 = (uint)*pbVar2;
  uVar4 = uVar1 - 0x30;
  if (9 < (uVar4 & 0xff)) {
    if ((5 < uVar1 - 0x61) && (5 < uVar1 - 0x41)) goto LAB_10001578;
    if ((uVar1 - 0x61 & 0xff) < 0x1a) {
      uVar1 = uVar1 - 0x20;
    }
    uVar4 = uVar1 - 0x37;
  }
  pbVar2 = in_r12 + 2;
  uVar1 = (uint)*pbVar2;
  uVar3 = uVar4 & 0xff | uVar3 << 4;
  uVar4 = uVar1 - 0x30;
  if (9 < (uVar4 & 0xff)) {
    if ((5 < uVar1 - 0x61) && (5 < uVar1 - 0x41)) goto LAB_10001578;
    if ((uVar1 - 0x61 & 0xff) < 0x1a) {
      uVar1 = uVar1 - 0x20;
    }
    uVar4 = uVar1 - 0x37;
  }
  pbVar2 = in_r12 + 3;
  uVar1 = (uint)*pbVar2;
  uVar3 = uVar4 & 0xff | uVar3 << 4;
  uVar4 = uVar1 - 0x30;
  if (9 < (uVar4 & 0xff)) {
    if ((5 < uVar1 - 0x61) && (5 < uVar1 - 0x41)) goto LAB_10001578;
    if ((uVar1 - 0x61 & 0xff) < 0x1a) {
      uVar1 = uVar1 - 0x20;
    }
    uVar4 = uVar1 - 0x37;
  }
  pbVar2 = in_r12 + 4;
  uVar1 = (uint)*pbVar2;
  uVar3 = uVar4 & 0xff | uVar3 << 4;
  uVar4 = uVar1 - 0x30;
  if (9 < (uVar4 & 0xff)) {
    if ((5 < uVar1 - 0x61) && (5 < uVar1 - 0x41)) goto LAB_10001578;
    if ((uVar1 - 0x61 & 0xff) < 0x1a) {
      uVar1 = uVar1 - 0x20;
    }
    uVar4 = uVar1 - 0x37;
  }
  pbVar2 = in_r12 + 5;
  uVar1 = (uint)*pbVar2;
  uVar3 = uVar4 & 0xff | uVar3 << 4;
  uVar4 = uVar1 - 0x30;
  if (9 < (uVar4 & 0xff)) {
    if ((5 < uVar1 - 0x61) && (5 < uVar1 - 0x41)) goto LAB_10001578;
    if ((uVar1 - 0x61 & 0xff) < 0x1a) {
      uVar1 = uVar1 - 0x20;
    }
    uVar4 = uVar1 - 0x37;
  }
  pbVar2 = in_r12 + 6;
  uVar1 = (uint)*pbVar2;
  uVar3 = uVar4 & 0xff | uVar3 << 4;
  uVar4 = uVar1 - 0x30;
  if (9 < (uVar4 & 0xff)) {
    if ((5 < uVar1 - 0x61) && (5 < uVar1 - 0x41)) goto LAB_10001578;
    if ((uVar1 - 0x61 & 0xff) < 0x1a) {
      uVar1 = uVar1 - 0x20;
    }
    uVar4 = uVar1 - 0x37;
  }
  pbVar2 = in_r12 + 7;
  uVar5 = (uint)*pbVar2;
  uVar3 = uVar4 & 0xff | uVar3 << 4;
  uVar1 = uVar5 - 0x30;
  if (9 < (uVar1 & 0xff)) {
    if ((5 < uVar5 - 0x61) && (5 < uVar5 - 0x41)) goto LAB_10001578;
    if ((uVar5 - 0x61 & 0xff) < 0x1a) {
      uVar5 = uVar5 - 0x20;
    }
    uVar1 = uVar5 - 0x37;
  }
  pbVar2 = in_r12 + 8;
  uVar4 = (uint)*pbVar2;
  if ((uVar4 - 0x30 & 0xff) < 10) {
    return 0;
  }
  if (uVar4 - 0x41 < 6) {
    return 0;
  }
  if (uVar4 - 0x61 < 6) {
    return 0;
  }
  uVar3 = uVar1 & 0xff | uVar3 << 4;
LAB_10001578:
  *param_2 = uVar3;
  *param_3 = 1;
  *param_1 = pbVar2;
  return 1;
}

