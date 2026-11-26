/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001de8
 */

uint recovered_10001de8(uint a,uint b)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;

  if (b == 0) {
    return 0;
  }
  uVar1 = 0;
  uVar2 = 0;
  uVar3 = 0x1f;
  do {
    uVar1 = a >> (uVar3 & 0xff) & 1 | uVar1 << 1;
    if (b <= uVar1) {
      uVar2 = uVar2 | 1 << (uVar3 & 0xff);
      uVar1 = uVar1 - b;
    }
    bVar4 = uVar3 != 0;
    uVar3 = uVar3 - 1;
  } while (bVar4);
  return uVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001e38
 */

uint recovered_10001e38(uint param_1,uint param_2)

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
 * Address: 0x10001e70
 */

int recovered_10001e70(int a,int b)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;

  uVar4 = b;
  if (b < 0) {
    uVar4 = -b;
  }
  uVar3 = a;
  if (a < 0) {
    uVar3 = -a;
  }
  if (b == 0) {
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
  if ((b ^ a) < 0) {
    uVar5 = -uVar5;
  }
  return uVar5;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001ee0
 */

uint recovered_10001ee0(uint param_1,uint param_2)

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
 * Address: 0x10001f48
 */

undefined8 recovered_10001f48(uint param_1,uint param_2,uint param_3,uint param_4)

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
 * Address: 0x1000202c
 */

undefined8 recovered_1000202c(uint param_1,uint param_2,uint param_3,uint param_4)

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
 * Address: 0x100020ac
 */

longlong recovered_100020ac(longlong a,longlong b)

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
  uint uVar15;
  bool bVar16;

  uVar14 = (uint)((ulonglong)b >> 0x20);
  uVar13 = (uint)((ulonglong)a >> 0x20);
  uVar1 = (int)uVar14 >> 0x1f;
  uVar11 = (uint)b ^ uVar1;
  uVar9 = uVar11 - uVar1;
  uVar2 = (int)uVar13 >> 0x1f;
  uVar4 = (uint)a ^ uVar2;
  uVar14 = (uVar14 ^ uVar1) - (uVar1 + (uVar11 < uVar1));
  uVar13 = (uVar13 ^ uVar2) - (uVar2 + (uVar4 < uVar2));
  if (b == 0) {
    uVar11 = 0;
    uVar15 = 0;
  }
  else {
    uVar10 = 0;
    uVar5 = 0;
    uVar11 = 0;
    uVar15 = 0;
    uVar12 = 0x3f;
    do {
      uVar7 = uVar5 << 1 | uVar10 >> 0x1f;
      uVar6 = uVar12 - 0x20;
      uVar5 = uVar4 - uVar2 >> (uVar12 & 0xff) | uVar13 << (0x20 - uVar12 & 0xff);
      if (-1 < (int)uVar6) {
        uVar5 = uVar13 >> (uVar6 & 0xff);
      }
      uVar8 = uVar5 & 1 | uVar10 << 1;
      bVar16 = uVar7 <= uVar14;
      bVar3 = (uint)(uVar9 <= uVar8) <= uVar7 - uVar14;
      uVar5 = uVar7 - (uVar14 + (uVar9 > uVar8));
      uVar10 = uVar8 - uVar9;
      if (bVar16 && bVar3) {
        uVar5 = uVar7;
        uVar10 = uVar8;
      }
      uVar7 = 1 >> (0x20 - uVar12 & 0xff);
      if (-1 < (int)uVar6) {
        uVar7 = 1 << (uVar6 & 0xff);
      }
      if (!bVar16 || !bVar3) {
        uVar15 = uVar15 | uVar7;
      }
      uVar7 = 1 << (uVar12 & 0xff);
      if (-1 < (int)uVar6) {
        uVar7 = 0;
      }
      if (!bVar16 || !bVar3) {
        uVar11 = uVar11 | uVar7;
      }
      bVar16 = uVar12 != 0;
      uVar12 = uVar12 - 1;
    } while (bVar16);
  }
  uVar13 = -uVar11;
  uVar4 = -(uVar15 + (uVar11 != 0));
  if (-uVar2 == -uVar1) {
    uVar13 = uVar11;
    uVar4 = uVar15;
  }
  return CONCAT44(uVar4,uVar13);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100021cc
 */

undefined8 recovered_100021cc(uint param_1,uint param_2,uint param_3,uint param_4)

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


#undef DAT_10002308
#define DAT_10002308 (*(double *)(0x10002308U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002288
 */

ulonglong recovered_10002288(double value)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 in_r0;
  uint uVar1;
  undefined4 in_r1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  double dVar7;
  double dVar8;

  dVar7 = pf_bits_double(CONCAT44(in_r1,in_r0));
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

#undef DAT_10002308

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002310
 */

longlong recovered_10002310(double value)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 in_r0;
  undefined4 in_r1;
  ulonglong uVar1;

  if (NAN(pf_bits_double(CONCAT44(in_r1,in_r0)))) {
    return 0;
  }
  if (pf_bits_double(CONCAT44(in_r1,in_r0)) < 0.0) {
    uVar1 = recovered_10002288(value);
    return CONCAT44(-((int)(uVar1 >> 0x20) + (uint)((int)uVar1 != 0)),-(int)uVar1);
  }
  uVar1 = recovered_10002288(value);
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000235c
 */

ulonglong recovered_1000235c(float param_1,undefined4 in_s1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulonglong uVar1;

  uVar1 = recovered_10002288(pf_bits_double(CONCAT44(in_s1,param_1)));
  return uVar1;
}


#undef DAT_10008008
#define DAT_10008008 (*(code * *)(((uintptr_t)pf_module_state + 0x3b0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000236c
 */

void recovered_1000236c(float param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

                    /* WARNING: Could not recover jumptable at ((uintptr_t)pf_module_state + 0x338U). Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_10008008)(SUB84((double)param_1,0),(int)((ulonglong)(double)param_1 >> 0x20));
  return;
}

#undef DAT_10008008

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000237c
 */

double recovered_1000237c(ulonglong value)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  double in_d0;

  if (value == 0) {
    return in_d0;
  }
  do {
    uVar1 = (uint)(value >> 0x21);
    uVar2 = (uint)((byte)(value >> 0x20) & 1) << 0x1f | (uint)value >> 1;
    value = CONCAT44(uVar1,uVar2);
  } while (uVar2 != 0 || uVar1 != 0);
  return in_d0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100023c4
 */

double recovered_100023c4(longlong value)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  if (value < 0) {
    dVar1 = recovered_1000237c(CONCAT44(-((int)((ulonglong)value >> 0x20) + (uint)((int)value != 0))
                                        ,-(int)value));
    return dVar1;
  }
  dVar1 = recovered_1000237c(value);
  return dVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100023ec
 */

float recovered_100023ec(uint param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 extraout_r0 = 0;
  undefined4 extraout_r1 = 0;

  recovered_1000237c(CONCAT44(param_2,param_1));
  return (float)pf_bits_double(CONCAT44(extraout_r1,extraout_r0));
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002408
 */

float recovered_10002408(uint param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 extraout_r0 = 0;
  undefined4 extraout_r1 = 0;

  recovered_100023c4(CONCAT44(param_2,param_1));
  return (float)pf_bits_double(CONCAT44(extraout_r1,extraout_r0));
}


#undef DAT_10007e2a
#define DAT_10007e2a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1d2U)))
#undef DAT_10007e2d
#define DAT_10007e2d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1d5U)))
#undef DAT_10007f69
#define DAT_10007f69 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x311U)))
#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef EXT_0000000c
#define EXT_0000000c (*(uint8_t *)(0xcU))
#undef Ram40010800
#define Ram40010800 (*(uint32_t *)(0x40010800U))
#undef Ram40010804
#define Ram40010804 (*(uint32_t *)(0x40010804U))
#undef Ram40010808
#define Ram40010808 (*(uint32_t *)(0x40010808U))
#undef UINT_40010828
#define UINT_40010828 (*(uint *)(0x40010828U))
#undef UINT_4001082c
#define UINT_4001082c (*(uint *)(0x4001082cU))
#undef UINT_40010850
#define UINT_40010850 (*(uint *)(0x40010850U))
#undef UINT_40010854
#define UINT_40010854 (*(uint *)(0x40010854U))
#undef UINT_4001089c
#define UINT_4001089c (*(uint *)(0x4001089cU))
#undef UINT_40010978
#define UINT_40010978 (*(uint *)(0x40010978U))
#undef str_10007d90
#define str_10007d90 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x138U)))
#undef str_10007db5
#define str_10007db5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x15dU)))
#undef str_10007dbb
#define str_10007dbb (*(char (*)[1])(((uintptr_t)pf_module_state + 0x163U)))
#undef str_10007dc1
#define str_10007dc1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x169U)))
#undef str_10007dcd
#define str_10007dcd (*(char (*)[1])(((uintptr_t)pf_module_state + 0x175U)))
#undef str_10007ddc
#define str_10007ddc (*(char (*)[1])(((uintptr_t)pf_module_state + 0x184U)))
#undef str_10007de9
#define str_10007de9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x191U)))
#undef str_10007f3a
#define str_10007f3a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2e2U)))
#undef str_10007f4e
#define str_10007f4e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2f6U)))
#undef str_10007f5c
#define str_10007f5c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x304U)))
#define local_6844 (*(uint *)(pf_stack_frame + 28))
#define local_6838 (*(int *)(pf_stack_frame + 40))
#define iStack_2ec (*(int *)(pf_stack_frame + 25972))
#define local_6834 (*(uint *)(pf_stack_frame + 44))
#define local_6830 (*(undefined4 ******* *)(pf_stack_frame + 48))
#define local_682c (*(uint *)(pf_stack_frame + 52))
#define local_680c (*(void * *)(pf_stack_frame + 84))
#define uStack_2dc (*(undefined4 *)(pf_stack_frame + 25988))
#define local_64f8 (*(uint *)(pf_stack_frame + 872))
#define uStack_2d8 (*(undefined8 *)(pf_stack_frame + 25992))
#define local_64f4 (*(byte *)(pf_stack_frame + 876))
#define local_64f3 (*(undefined1 *)(pf_stack_frame + 877))
#define uStack_2c8 (*(undefined8 *)(pf_stack_frame + 26008))
#define local_64e8 (*(int *)(pf_stack_frame + 888))
#define local_64dc (*(int *)(pf_stack_frame + 900))
#define local_64c8 (*(void * *)(pf_stack_frame + 920))
#define local_64c4 (*(int *)(pf_stack_frame + 924))
#define local_64c0 (*(int *)(pf_stack_frame + 928))
#define local_64bc (*(char * *)(pf_stack_frame + 932))
#define local_64b8 (*(int *)(pf_stack_frame + 936))
#define local_64b4 (*(uint *)(pf_stack_frame + 940))
#define local_64b0 (*(uint *)(pf_stack_frame + 944))
#define local_64ac (*(uint *)(pf_stack_frame + 948))
#define uStack_40 (*(undefined4 *)(pf_stack_frame + 26656))
#define local_39c (*(ulong *)(pf_stack_frame + 25796))
#define local_398 (*(uint *)(pf_stack_frame + 25800))
#define local_314 (*(uint *)(pf_stack_frame + 25932))
#define local_310 (*(uint *)(pf_stack_frame + 25936))
#define local_30c (*(int *)(pf_stack_frame + 25940))
#define local_308 (*(undefined4 ******* *)(pf_stack_frame + 25944))
#define local_304 (*(undefined4 ******* *)(pf_stack_frame + 25948))
#define local_300 (*(undefined2 *)(pf_stack_frame + 25952))
#define local_2fe (*(undefined1 *)(pf_stack_frame + 25954))
#define local_2fd (*(undefined2 *)(pf_stack_frame + 25955))
#define local_2fb (*(byte *)(pf_stack_frame + 25957))
#define local_2f8 (*(int *)(pf_stack_frame + 25960))
#define local_2f4 (*(char *)(pf_stack_frame + 25964))
#define local_2f0 (*(void * *)(pf_stack_frame + 25968))
#define local_2e4 (*(int *)(pf_stack_frame + 25980))
#define local_2e0 (*(int *)(pf_stack_frame + 25984))
#define local_2d0 (*(undefined8 *)(pf_stack_frame + 26000))
#define local_2c0 (*(uint *)(pf_stack_frame + 26016))
#define local_2b8 (*(ulonglong (*)[87])(pf_stack_frame + 26024))
#define local_2a8 (*(undefined8 *)(pf_stack_frame + 26040))
#define local_2a0 (*(undefined8 *)(pf_stack_frame + 26048))
#define local_298 (*(undefined8 *)(pf_stack_frame + 26056))
#define local_290 (*(undefined8 *)(pf_stack_frame + 26064))
#define local_288 (*(uint *)(pf_stack_frame + 26072))
#define local_284 (*(int *)(pf_stack_frame + 26076))
#define local_280 (*(int *)(pf_stack_frame + 26080))
#define local_27c (*(int *)(pf_stack_frame + 26084))
#define local_3c (*(int *)(pf_stack_frame + 26660))
#define local_30 (*(undefined4 ******* *)(pf_stack_frame + 26672))
#define local_2c (*(undefined4 ******* *)(pf_stack_frame + 26676))
#define local_28 (*(undefined4 ******* *)(pf_stack_frame + 26680))
#define local_24 (*(int *)(pf_stack_frame + 26684))
#define auStack_64f0 (*(undefined1 (*)[25840])(pf_stack_frame + 880))
#define iStack_64e4 (*(int *)(pf_stack_frame + 892))
#define iStack_64e0 (*(int *)(pf_stack_frame + 896))
#define acStack_64a8 (*(char (*)[25768])(pf_stack_frame + 952))
#define acStack_3424 (*(char (*)[13348])(pf_stack_frame + 13372))
#define acStack_394 (*(char (*)[916])(pf_stack_frame + 25804))
#define local_6850 (*(uint *)(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002424
 */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

int recovered_10002424(int argc,char **argv)

{
  unsigned char pf_stack_frame[26752] __attribute__((aligned(16))) = {0};

  uint uVar1;
  byte bVar2;
  code *pcVar3;
  ulonglong uVar4;
  undefined4 *******pppppppuVar5;
  uchar uVar6;
  uint uVar7;
  char *extraout_r0 = 0;
  char *pcVar8;
  int iVar9;
  uint uVar10;
  int *piVar11;
  uint uVar12;
  undefined4 *******pppppppuVar13;
  undefined4 *******pppppppuVar14;
  uint uVar15;
  ulong uVar16;
  int a;
  ulong uVar17;
  uint uVar18;
  undefined4 *******pppppppuVar19;
  undefined4 *******pppppppuVar20;
  char *pcVar21;
  undefined4 *******pppppppuVar22;
  uint uVar23;
  uint uVar24;
  ulonglong *puVar25;
  undefined4 extraout_r1 = 0;
  void *extraout_r2;
  void *pvVar26;
  undefined4 *******extraout_r2_00 = 0;
  undefined4 *******extraout_r2_01 = 0;
  undefined4 *******extraout_r2_02 = 0;
  undefined4 *******extraout_r2_03 = 0;
  uint extraout_r2_04 = 0;
  int extraout_r2_05 = 0;
  uint extraout_r3 = 0;
  int extraout_r3_00 = 0;
  uint uVar27;
  byte *a_00;
  char *pcVar28;
  uint uVar29;
  int iVar30;
  undefined4 *******pppppppuVar31;
  undefined4 *******pppppppuVar32;
  uint uVar33;
  uint uVar34;
  bool bVar35;
  bool bVar36;
  bool bVar37;
  longlong lVar38;

  thunk_memset(&local_6838,0,0x6548);
  if (local_64b8 == 0) {
    iVar30 = Ram40010800;
    if ((iVar30 != 0x50414d57) || (iVar30 = Ram40010804, iVar30 == 0)) goto LAB_1000276c;
    uVar7 = Ram40010808;
    bVar36 = 0xb < uVar7;
    if (bVar36) {
      uVar7 = Ram40010808;
    }
    if (((!bVar36 || uVar7 < 0x58) || (pcVar3 = (code *)UINT_40010854, pcVar3 == (code *)0x0)) ||
       (pcVar8 = (*pcVar3)(local_64bc,0x400), pcVar8 == (char *)0x0)) goto LAB_1000276c;
    local_64b8 = 0x400;
    local_64bc = pcVar8;
  }
  else {
  }
  *local_64bc = '\0';
  recovered_10005cc4(0xffffffff,str_10007dcd,acStack_64a8);
  thunk_snprintf(acStack_394,0x80,&DAT_10007e2a,str_10007ddc);
  thunk_pf_app_window_spec(&local_2f0,str_10007dc1,800,0x208);
  local_2b8[0] = CONCAT44(iStack_2ec,local_2f0);
  PF_PART4(local_2a8, 4) = (undefined4 *******)uStack_2dc;
  local_2a0 = uStack_2d8;
  local_298 = local_2d0;
  local_290 = uStack_2c8;
  local_288 = local_2c0;
  __builtin_memcpy(local_2b8,&local_2f0,sizeof(TerrorUIWindowSpec));
  uVar7 = thunk_terror_ui_colour(0);
  local_2a8 = CONCAT44(PF_PART4(local_2a8, 4),uVar7);
  local_288 = local_288 | 1;
  uVar7 = thunk_terror_ui_window_open(&local_6838,local_2b8);
  if (uVar7 == 0) {
    iVar30 = Ram40010800;
  }
  else {
    terror_ui_window_set_custom_menus(&local_6838,str_10007de9);
    local_64c8 = local_680c;
    if (local_680c != (void *)0x0) {
      local_64c0 = 10;
      local_64c4 = 6;
      thunk_memset(&local_2f0,0,0x18);
      iVar30 = Ram40010800;
      if ((iVar30 == 0x50414d57) && (iVar30 = Ram40010804, iVar30 != 0)) {
        uVar7 = Ram40010808;
        bVar36 = 0xb < uVar7;
        if (bVar36) {
          uVar7 = Ram40010808;
        }
        if (((bVar36 && 0x17b < uVar7) && (pcVar3 = (code *)UINT_40010978, pcVar3 != (code *)0x0))
           && (uVar7 = (*pcVar3)(&DAT_10007e2d,0xffffffff,1,0,&local_2f0), uVar7 != 0)) {
          if (local_2e4 - 1U < 0x40) {
            local_64c4 = local_2e4 + 1;
          }
          if (local_2e0 - 1U < 0x40) {
            local_64c0 = local_2e0;
          }
          if ((((local_2f0 != (void *)0x0) && (iStack_2ec == 0)) && (local_2f0 != (void *)0x0)) &&
             ((iVar30 = Ram40010800, iVar30 == 0x50414d57 && (iVar30 = Ram40010804, iVar30 != 0))))
          {
            uVar7 = Ram40010808;
            bVar36 = 0xb < uVar7;
            if (bVar36) {
              uVar7 = Ram40010808;
            }
            if ((bVar36 && 0x53 < uVar7) && (pcVar3 = (code *)UINT_40010850, pcVar3 != (code *)0x0))
            {
              (*pcVar3)(local_2f0);
            }
          }
          thunk_memset(&local_2f0,0,0x18);
        }
      }
      local_2f4 = '\x01';
      recovered_10004eb0((int)&local_6838);
      if ((argv == (char **)0x0) || (argc < 2)) goto LAB_10002830;
      a_00 = (byte *)argv[1];
      pcVar8 = extraout_r0;
      if (a_00 != (byte *)0x0) {
        pcVar8 = (char *)(uint)*a_00;
      }
      if (a_00 != (byte *)0x0 && pcVar8 != (char *)0x0) {
        iVar30 = thunk_strncmp((char *)a_00,str_10007db5,5);
        if ((iVar30 == 0) || (iVar30 = thunk_strncmp((char *)a_00,str_10007dbb,5), iVar30 == 0)
           ) {
LAB_10002820:
          a_00 = a_00 + 5;
        }
        else {
          pcVar8 = thunk_strchr((char *)a_00,0x3d);
          if (pcVar8 != (char *)0x0) goto LAB_10002628;
        }
        recovered_1000413c((int)&local_6838,(char *)a_00);
      }
      else {
LAB_10002628:
        if (2 < (uint)argc) {
          iVar30 = 2;
          do {
            a_00 = (byte *)argv[iVar30];
            if (a_00 != (byte *)0x0) {
              pcVar8 = (char *)(uint)*a_00;
            }
            if ((a_00 != (byte *)0x0 && pcVar8 != (char *)0x0) &&
               ((iVar9 = thunk_strncmp((char *)a_00,str_10007db5,5), iVar9 == 0 ||
                (pcVar8 = (char *)thunk_strncmp((char *)a_00,str_10007dbb,5),
                pcVar8 == (char *)0x0)))) goto LAB_10002820;
            iVar30 = iVar30 + 1;
          } while (iVar30 < argc);
        }
      }
LAB_10002830:
      if (local_2f4 == '\x01') {
        pcVar8 = acStack_3424 + 1;
        bVar36 = true;
        uVar7 = (local_310 & 0x1fff) >> 0xc;
        do {
          terror_ui_window_begin_frame(&local_6838);
          pppppppuVar22 = local_6830;
          uVar12 = local_6834;
          thunk_memset(local_2b8,0,0x278);
          uVar10 = thunk_terror_ui_window_query(&local_6838,local_2b8);
          if (((uVar10 == 0) || (uVar6 = thunk_terror_ui_window_info_requests_close(local_2b8), uVar6 != '\0')) ||
             (uVar10 = thunk_terror_ui_window_sync_buffer(&local_6838,local_2b8), uVar10 == 0)) break;
          piVar11 = (int *)(local_6834 ^ uVar12);
          bVar35 = piVar11 != (int *)0x0 || local_6830 != pppppppuVar22;
          local_314 = (uint)local_290;
          if (bVar35) {
            piVar11 = &local_6838;
          }
          local_64c8 = local_680c;
          pvVar26 = local_680c;
          uVar12 = (uint)local_290;
          if (bVar35) {
            recovered_10004610((int)piVar11);
            pvVar26 = extraout_r2;
            uVar12 = extraout_r3;
          }
          uVar10 = (uint)bVar35;
          local_6844 = uVar10;
          if ((local_284 == 0) || (local_284 == local_30c)) goto LAB_10002a2c;
          local_30c = local_284;
          if (local_280 == 2) {
            if (local_27c == 2) {
              uVar12 = recovered_10006ae0((int)&local_6838,2,pvVar26,uVar12);
            }
            else if (local_27c == 1) {
              bVar35 = recovered_100068c4((int)&local_6838);
              uVar12 = (uint)bVar35;
            }
            else {
              if (local_27c != 0) goto LAB_10002a2c;
              uVar12 = recovered_100065e0((int)&local_6838,2,(int)pvVar26);
            }
            local_6844 = 1;
            if (uVar12 == 0) {
              local_6844 = uVar10;
            }
            goto LAB_10002a2c;
          }
          if (local_280 != 1) goto LAB_10002a2c;
          switch((uintptr_t)(local_27c)) {
          case 0:
            local_6844 = 1;
            if (local_64bc != (char *)0x0) {
              *local_64bc = '\0';
              local_2fe = 0;
              local_304 = (undefined4 *******)0x0;
              local_308 = (undefined4 *******)0x0;
              local_64ac = 0;
              local_64b0 = 0;
              local_64b4 = 0;
              thunk_snprintf(acStack_394,0x80,&DAT_10007e2a,str_10007ddc);
            }
            break;
          case 1:
            iVar30 = 0;
            goto LAB_10002d10;
          case 2:
            local_6844 = 1;
            recovered_10006408((int)&local_6838);
            break;
          case 3:
            iVar30 = 1;
LAB_10002d10:
            local_6844 = 1;
            recovered_100062f0((int)&local_6838,iVar30);
            break;
          default:
            local_6844 = 1;
          }
LAB_10002a2c:
          uVar12 = local_314;
          local_64f4 = 0;
          thunk_memset(local_2b8,0,0x1c);
          uVar10 = thunk_terror_ui_window_pointer_state(&local_6838,local_2b8);
          iVar30 = local_64c4;
          pppppppuVar22 = local_6830;
          if (uVar10 == 0) {
LAB_10002ad4:
            uVar10 = 0;
            local_2fd = 0;
            local_2fb = 0;
          }
          else {
            local_64f4 = false;
            if ((local_2b8[0] & 2) != 0) {
              pppppppuVar31 = (undefined4 *******)0xac;
              if (0xac < (int)local_6830) {
                pppppppuVar31 = local_6830;
              }
              pppppppuVar31 = (undefined4 *******)((int)pppppppuVar31 + -0x2a);
              if (local_6830 == (undefined4 *******)0x0) {
                pppppppuVar31 = (undefined4 *******)0x1de;
              }
              local_64f4 = ((int)PF_PART4(local_2a8, 4) - 0xfU < 0xc &&
                           0x3e < (int)(undefined4 *******)local_2a0) &&
                           (undefined4 *******)local_2a0 < pppppppuVar31;
            }
            if ((local_2b8[0] & 4) == 0) goto LAB_10002ad4;
            pppppppuVar31 = (undefined4 *******)((int)local_6830 + -1);
            if (local_6830 == (undefined4 *******)0x0) {
              pppppppuVar31 = (undefined4 *******)0x207;
            }
            if ((int)(undefined4 *******)local_2a0 < (int)pppppppuVar31) {
              pppppppuVar31 = (undefined4 *******)local_2a0;
            }
            if ((int)(undefined4 *******)local_2a0 < 0) {
              pppppppuVar31 = (undefined4 *******)0x0;
            }
            pppppppuVar32 = (undefined4 *******)(local_6834 - 1);
            if (local_6834 == 0) {
              pppppppuVar32 = (undefined4 *******)0x31f;
            }
            if ((int)PF_PART4(local_2a8, 4) < (int)pppppppuVar32) {
              pppppppuVar32 = PF_PART4(local_2a8, 4);
            }
            if (local_2a8 < 0) {
              pppppppuVar32 = (undefined4 *******)0x0;
            }
            uVar4 = local_2b8[0] >> 0x20;
            if ((local_2b8[0] & 0x100000000) == 0) {
              uVar10 = 0;
              local_2fd = 0;
            }
            else {
              pppppppuVar19 = PF_PART4(local_2a8, 4);
              if (local_2fb == 0) {
                uVar10 = 0xa2;
                if (0xa2 < (int)local_6834) {
                  uVar10 = local_6834;
                }
                pppppppuVar19 = (undefined4 *******)(uVar10 - 10);
                if (local_6834 == 0) {
                  pppppppuVar19 = (undefined4 *******)0x316;
                }
                if ((int)pppppppuVar32 < 0x48) {
LAB_10002b8c:
                  recovered_10007220(&local_30,(int)&local_6838,(int)PF_PART4(local_2a8, 4));
                  pppppppuVar5 = local_308;
                  pppppppuVar14 = (undefined4 *******)0xac;
                  if (0xac < (int)pppppppuVar22) {
                    pppppppuVar14 = pppppppuVar22;
                  }
                  pppppppuVar13 = (undefined4 *******)((int)pppppppuVar32 + -0xf);
                  bVar37 = (undefined4 *******)0xa < pppppppuVar13;
                  bVar35 = pppppppuVar13 == (undefined4 *******)0xb;
                  if (pppppppuVar13 < &PrefetchAbort) {
                    bVar37 = 0xc < (int)pppppppuVar31 - 0x3fU;
                    bVar35 = (int)pppppppuVar31 - 0x3fU == 0xd;
                  }
                  pppppppuVar19 = &local_308;
                  if (!bVar37 || bVar35) {
                    pppppppuVar13 = (undefined4 *******)((int)local_308 + -1);
                    iVar30 = 1;
                    pcVar28 = local_64bc;
                    uVar10 = local_64b4;
                    if (local_64bc != (char *)0x0) {
                      for (; uVar10 != 0; uVar10 = uVar10 - 1) {
                        iVar30 = iVar30 + (uint)(*pcVar28 == '\n' && iVar30 != 0x7fffffff);
                        pcVar28 = pcVar28 + 1;
                      }
                    }
                    uVar10 = 0xd;
                    if (0 < local_64c0) {
                      uVar10 = local_64c0 + 3;
                    }
                    pppppppuVar14 = pppppppuVar14 + -0x1a;
                    if (pppppppuVar22 == (undefined4 *******)0x0) {
                      pppppppuVar14 = (undefined4 *******)0x1a0;
                    }
                    local_308 = pppppppuVar13;
                    uVar10 = recovered_10001de8((uint)pppppppuVar14,uVar10);
                    if (uVar10 < 2) {
                      uVar10 = 1;
                    }
                    local_308 = (undefined4 *******)
                                (iVar30 - uVar10 & ~((int)(iVar30 - uVar10) >> 0x1f));
                    if ((int)pppppppuVar13 < (int)local_308) {
                      local_308 = pppppppuVar13;
                    }
                    if ((int)pppppppuVar5 < 1) {
                      local_308 = (undefined4 *******)0x0;
                    }
                    if ((undefined4 *******)0x7fffffff < local_304) {
                      local_304 = (undefined4 *******)0x0;
                      pppppppuVar19 = (undefined4 *******)0x0;
                    }
LAB_10002e7c:
                    uVar10 = 1;
                    if (local_308 != pppppppuVar5) goto LAB_1000315c;
                  }
                  else {
                    pppppppuVar20 = pppppppuVar14 + -0xe;
                    if (pppppppuVar22 == (undefined4 *******)0x0) {
                      pppppppuVar20 = (undefined4 *******)0x1d0;
                    }
                    if (((pppppppuVar13 < &PrefetchAbort) &&
                        ((int)pppppppuVar20 <= (int)pppppppuVar31)) &&
                       (pppppppuVar31 < (undefined4 *******)((int)pppppppuVar20 + 0xe))) {
                      if (0x7ffffffd < (int)local_308) {
                        local_308 = (undefined4 *******)0x7ffffffe;
                      }
                      iVar30 = 1;
                      pppppppuVar13 =
                           (undefined4 *******)(((uint)local_308 | (int)local_308 >> 0x1f) + 1);
                      pcVar28 = local_64bc;
                      uVar10 = local_64b4;
                      if (local_64bc != (char *)0x0) {
                        for (; uVar10 != 0; uVar10 = uVar10 - 1) {
                          iVar30 = iVar30 + (uint)(*pcVar28 == '\n' && iVar30 != 0x7fffffff);
                          pcVar28 = pcVar28 + 1;
                        }
                      }
                      uVar10 = 0xd;
                      if (0 < local_64c0) {
                        uVar10 = local_64c0 + 3;
                      }
                      pppppppuVar14 = pppppppuVar14 + -0x1a;
                      if (pppppppuVar22 == (undefined4 *******)0x0) {
                        pppppppuVar14 = (undefined4 *******)0x1a0;
                      }
                      local_308 = pppppppuVar13;
                      uVar10 = recovered_10001de8((uint)pppppppuVar14,uVar10);
                      if (uVar10 < 2) {
                        uVar10 = 1;
                      }
                      local_308 = (undefined4 *******)
                                  (iVar30 - uVar10 & ~((int)(iVar30 - uVar10) >> 0x1f));
                      if ((int)pppppppuVar13 < (int)local_308) {
                        local_308 = pppppppuVar13;
                      }
                      if ((undefined4 *******)0x7fffffff < local_304) {
                        pppppppuVar19 = (undefined4 *******)0x0;
                        local_304 = (undefined4 *******)0x0;
                      }
                      goto LAB_10002e7c;
                    }
                    pppppppuVar19 = (undefined4 *******)((int)pppppppuVar14 + -0x3f);
                    if (pppppppuVar22 == (undefined4 *******)0x0) {
                      pppppppuVar19 = (undefined4 *******)0x1c9;
                    }
                    if (((pppppppuVar13 < &PrefetchAbort) && (0x4e < (int)pppppppuVar31)) &&
                       (pppppppuVar31 < pppppppuVar19)) {
                      bVar37 = SBORROW4((int)local_30,(int)pppppppuVar32);
                      iVar30 = (int)local_30 - (int)pppppppuVar32;
                      bVar35 = local_30 == pppppppuVar32;
                      pppppppuVar19 = local_308;
                      if ((int)local_30 <= (int)pppppppuVar32) {
                        bVar37 = SBORROW4((int)local_2c,(int)pppppppuVar31);
                        iVar30 = (int)local_2c - (int)pppppppuVar31;
                        bVar35 = local_2c == pppppppuVar31;
                        pppppppuVar19 = pppppppuVar31;
                        pppppppuVar13 = local_2c;
                      }
                      if (bVar35 || iVar30 < 0 != bVar37) {
                        pppppppuVar19 = (undefined4 *******)((int)local_28 + (int)local_30);
                        bVar37 = SBORROW4((int)pppppppuVar19,(int)pppppppuVar32);
                        iVar30 = (int)pppppppuVar19 - (int)pppppppuVar32;
                        bVar35 = pppppppuVar19 == pppppppuVar32;
                        if ((int)pppppppuVar32 < (int)pppppppuVar19) {
                          pppppppuVar13 = (undefined4 *******)(local_24 + (int)pppppppuVar13);
                          bVar37 = SBORROW4((int)pppppppuVar13,(int)pppppppuVar31);
                          iVar30 = (int)pppppppuVar13 - (int)pppppppuVar31;
                          bVar35 = pppppppuVar13 == pppppppuVar31;
                        }
                        pppppppuVar19 = local_28;
                        if (bVar35 || iVar30 < 0 != bVar37) goto LAB_10002edc;
                      }
                      else {
LAB_10002edc:
                        recovered_10007220(&local_2f0,(int)&local_6838,(int)pppppppuVar19);
                        pcVar28 = local_64bc;
                        iVar30 = (int)pppppppuVar14 + -0x8e;
                        iVar9 = 1;
                        if (pppppppuVar22 == (undefined4 *******)0x0) {
                          iVar30 = 0x17a;
                        }
                        if ((local_64bc != (char *)0x0) && (local_64b4 != 0)) {
                          uVar10 = local_64b4;
                          pcVar21 = local_64bc;
                          do {
                            uVar10 = uVar10 - 1;
                            iVar9 = iVar9 + (uint)(*pcVar21 == '\n' && iVar9 != 0x7fffffff);
                            pcVar21 = pcVar21 + 1;
                          } while (uVar10 != 0);
                        }
                        uVar10 = 0xd;
                        if (0 < local_64c0) {
                          uVar10 = local_64c0 + 3;
                        }
                        pppppppuVar14 = pppppppuVar14 + -0x1a;
                        if (pppppppuVar22 == (undefined4 *******)0x0) {
                          pppppppuVar14 = (undefined4 *******)0x1a0;
                        }
                        uVar10 = recovered_10001de8((uint)pppppppuVar14,uVar10);
                        if (uVar10 < 2) {
                          uVar10 = 1;
                        }
                        uVar18 = iVar9 - uVar10;
                        pppppppuVar22 = &local_308;
                        pppppppuVar19 = extraout_r2_02;
                        if (0 < (int)uVar18) {
                          pppppppuVar19 = (undefined4 *******)(iVar30 - local_2e4);
                          if (0 < (int)pppppppuVar19) {
                            uVar29 = (int)pppppppuVar31 + (-0x4f - local_2e4 / 2);
                            lVar38 = (ulonglong)uVar18 * (ulonglong)uVar29;
                            lVar38 = recovered_100020ac(CONCAT44(((int)uVar29 >> 0x1f) * uVar18 +
                                                                 (int)((ulonglong)lVar38 >> 0x20),
                                                                 (int)lVar38),ZEXT48(pppppppuVar19))
                            ;
                            if ((int)(uint)((uint)lVar38 < 0x7fffffff) <=
                                (int)((ulonglong)lVar38 >> 0x20)) {
                              lVar38 = 0x7fffffff;
                            }
                            pppppppuVar22 = (undefined4 *******)lVar38;
                            if (lVar38 < 0) {
                              pppppppuVar22 = (undefined4 *******)0x0;
                            }
                            uVar18 = (uint)((ulonglong)lVar38 >> 0x20);
                            if (pcVar28 != (char *)0x0) {
                              uVar18 = local_64b4;
                            }
                            iVar30 = 1;
                            if (pcVar28 != (char *)0x0 && uVar18 != 0) {
                              do {
                                uVar18 = uVar18 - 1;
                                iVar30 = iVar30 + (uint)(*pcVar28 == '\n' && iVar30 != 0x7fffffff);
                                pcVar28 = pcVar28 + 1;
                              } while (uVar18 != 0);
                            }
                            local_308 = (undefined4 *******)
                                        (iVar30 - uVar10 & ~((int)(iVar30 - uVar10) >> 0x1f));
                            if ((int)pppppppuVar22 < (int)local_308) {
                              local_308 = pppppppuVar22;
                            }
                            pppppppuVar22 = &local_304;
                            pppppppuVar19 = local_304;
                            if (local_304 < (undefined4 *******)0x80000000) goto LAB_1000312c;
                          }
                        }
                        *pppppppuVar22 = (undefined4 ******)0x0;
                      }
LAB_1000312c:
                      uVar10 = 1;
                      local_2fd = CONCAT11(PF_PART1(local_2fd, 1),1);
                      recovered_10007220(&uStack_40,(int)&local_6838,(int)pppppppuVar19);
                      local_2f8 = (int)pppppppuVar31 - local_3c;
                      pppppppuVar19 = extraout_r2_03;
                      goto LAB_1000315c;
                    }
                  }
                  iVar30 = recovered_10006f80((int)&local_6838,(int)pppppppuVar32,
                                              (uint)pppppppuVar31,0,0);
                  pppppppuVar19 = extraout_r2_01;
                  if (iVar30 == 0) {
                    iVar30 = local_6834 - 0x14;
                    if (local_6834 == 0) {
                      iVar30 = 0x30c;
                    }
                    pppppppuVar22 = (undefined4 *******)0xac;
                    if (0xac < (int)local_6830) {
                      pppppppuVar22 = local_6830;
                    }
                    pppppppuVar22 = pppppppuVar22 + -10;
                    if (local_6830 == (undefined4 *******)0x0) {
                      pppppppuVar22 = (undefined4 *******)0x1e0;
                    }
                    pppppppuVar19 = local_6830;
                    if ((((int)pppppppuVar32 < 0x41) || ((int)pppppppuVar31 < 0x40)) ||
                       (iVar30 <= (int)pppppppuVar32)) goto LAB_10002b58;
                    uVar10 = 0;
                    if (pppppppuVar22 <= pppppppuVar31) goto LAB_1000315c;
                  }
                  uVar10 = 1;
                  local_2fd = CONCAT11(1,(byte)local_2fd);
                }
                else {
                  bVar37 = SBORROW4((int)pppppppuVar31,0xf);
                  iVar9 = (int)pppppppuVar31 + -0xf;
                  bVar35 = pppppppuVar31 == (undefined4 *******)0xf;
                  if (0xe < (int)pppppppuVar31) {
                    bVar37 = SBORROW4((int)pppppppuVar19,(int)pppppppuVar32);
                    iVar9 = (int)pppppppuVar19 - (int)pppppppuVar32;
                    bVar35 = pppppppuVar19 == pppppppuVar32;
                  }
                  if ((bVar35 || iVar9 < 0 != bVar37) || ((undefined4 *******)0x26 < pppppppuVar31))
                  goto LAB_10002b8c;
                  uVar10 = 1;
                  local_300 = 1;
                  local_64ac = local_64b0;
                  thunk_snprintf(pcVar8,0x3085,&DAT_10007e2a,acStack_64a8);
                  if (iVar30 < 1) {
                    iVar30 = 6;
                  }
                  iVar30 = recovered_10001e70((int)(pppppppuVar32 + -0x13),iVar30);
                  uVar16 = local_398 + iVar30;
                  local_39c = thunk_strlen(pcVar8);
                  if ((int)uVar16 < (int)local_39c) {
                    local_39c = uVar16;
                  }
                  if ((int)uVar16 < 0) {
                    local_39c = 0;
                  }
                  pppppppuVar19 = extraout_r2_00;
                }
              }
              else {
LAB_10002b58:
                uVar10 = 0;
              }
LAB_1000315c:
              pppppppuVar22 = local_6830;
              if ((byte)local_2fd == '\x01') {
                recovered_10007220(&local_2f0,(int)&local_6838,(int)pppppppuVar19);
                pcVar28 = local_64bc;
                pppppppuVar32 = (undefined4 *******)0xac;
                if (0xac < (int)pppppppuVar22) {
                  pppppppuVar32 = pppppppuVar22;
                }
                iVar30 = (int)pppppppuVar32 + -0x8e;
                if (pppppppuVar22 == (undefined4 *******)0x0) {
                  iVar30 = 0x17a;
                }
                iVar9 = 1;
                if ((local_64bc != (char *)0x0) && (local_64b4 != 0)) {
                  uVar18 = local_64b4;
                  pcVar21 = local_64bc;
                  do {
                    uVar18 = uVar18 - 1;
                    iVar9 = iVar9 + (uint)(*pcVar21 == '\n' && iVar9 != 0x7fffffff);
                    pcVar21 = pcVar21 + 1;
                  } while (uVar18 != 0);
                }
                uVar18 = 0xd;
                if (0 < local_64c0) {
                  uVar18 = local_64c0 + 3;
                }
                pppppppuVar32 = pppppppuVar32 + -0x1a;
                if (pppppppuVar22 == (undefined4 *******)0x0) {
                  pppppppuVar32 = (undefined4 *******)0x1a0;
                }
                uVar18 = recovered_10001de8((uint)pppppppuVar32,uVar18);
                pppppppuVar22 = local_308;
                if (uVar18 < 2) {
                  uVar18 = 1;
                }
                uVar23 = iVar9 - uVar18;
                uVar15 = 0;
                uVar29 = uVar23;
                uVar27 = extraout_r2_04;
                if (0 < (int)uVar23) {
                  uVar29 = iVar30 - local_2e4;
                  uVar27 = uVar29;
                }
                if (0 < (int)uVar29) {
                  uVar29 = (int)pppppppuVar31 + (-0x4f - local_2f8);
                  lVar38 = (ulonglong)uVar23 * (ulonglong)uVar29;
                  lVar38 = recovered_100020ac(CONCAT44(((int)uVar29 >> 0x1f) * uVar23 +
                                                       (int)((ulonglong)lVar38 >> 0x20),(int)lVar38)
                                              ,(ulonglong)uVar27);
                  if ((int)(uint)((uint)lVar38 < 0x7fffffff) <= (int)((ulonglong)lVar38 >> 0x20)) {
                    lVar38 = 0x7fffffff;
                  }
                  pppppppuVar31 = (undefined4 *******)lVar38;
                  iVar30 = 1;
                  if (lVar38 < 0) {
                    pppppppuVar31 = (undefined4 *******)0x0;
                  }
                  uVar29 = (uint)((ulonglong)lVar38 >> 0x20);
                  if (pcVar28 != (char *)0x0) {
                    uVar29 = local_64b4;
                  }
                  if (pcVar28 != (char *)0x0 && uVar29 != 0) {
                    do {
                      uVar29 = uVar29 - 1;
                      iVar30 = iVar30 + (uint)(*pcVar28 == '\n' && iVar30 != 0x7fffffff);
                      pcVar28 = pcVar28 + 1;
                    } while (uVar29 != 0);
                  }
                  local_308 = (undefined4 *******)
                              (iVar30 - uVar18 & ~((int)(iVar30 - uVar18) >> 0x1f));
                  if ((int)pppppppuVar31 < (int)local_308) {
                    local_308 = pppppppuVar31;
                  }
                  if ((undefined4 *******)0x7fffffff < local_304) {
                    local_304 = (undefined4 *******)0x0;
                  }
                  uVar15 = 0;
                  if (local_308 != pppppppuVar22) {
                    uVar15 = 1;
                  }
                }
                uVar10 = uVar10 | uVar15;
              }
              else if (PF_PART1(local_2fd, 1) == '\x01') {
                uVar18 = recovered_10006f80((int)&local_6838,(int)pppppppuVar32,(uint)pppppppuVar31,
                                            1,1);
                uVar10 = uVar10 | uVar18;
              }
            }
            local_2fb = (byte)uVar4 & 1;
          }
          local_6844 = local_6844 | uVar10;
          if ((uVar12 & 2) != 0) {
            iVar30 = 0;
            local_6850 = 0;
            while ((iVar9 = Ram40010800, iVar9 == 0x50414d57 && (iVar9 = Ram40010804, iVar9 != 0)))
            {
              uVar10 = Ram40010808;
              bVar35 = uVar10 < 0xc;
              if (!bVar35) {
                uVar10 = Ram40010808;
              }
              if ((bVar35 || uVar10 < 0x30) ||
                 (pcVar3 = (code *)UINT_4001082c, pcVar3 == (code *)0x0)) break;
              uVar18 = (*pcVar3)();
              uVar16 = local_39c;
              uVar10 = local_64b0;
              if (uVar18 == 0) break;
              uVar29 = (uVar18 & 0xffff) >> 8;
              if ((uVar18 & 0x8000ffff) == 0x80000000) goto switchD_1000392c_caseD_48;
              uVar27 = uVar18 & 0xff;
              if ((char)local_300 != '\x01') {
                uVar15 = local_64b4;
                if (local_64ac < local_64b4) {
                  uVar15 = local_64ac;
                }
                uVar23 = local_64b4;
                if (local_64b0 < local_64b4) {
                  uVar23 = local_64b0;
                }
                uVar33 = uVar23;
                uVar1 = uVar15;
                if (local_64ac < uVar23) {
                  uVar33 = uVar15;
                  uVar1 = uVar23;
                }
                uVar24 = 0;
                uVar34 = 0;
                if (uVar15 != uVar23) {
                  uVar24 = uVar1;
                  uVar34 = uVar33;
                }
                if ((uVar18 & 0x40000) != 0) {
                  if (((uVar29 == 0x1e) || (uVar27 == 1 || uVar27 == 0x61)) || (uVar27 == 0x41)) {
                    local_64b0 = local_64b4;
                    local_64ac = 0;
                    thunk_snprintf(acStack_394,0x80,&DAT_10007e2a,str_10007f5c);
                  }
                  else {
                    if (((uVar29 == 0x2e) || (uVar27 == 3 || uVar27 == 99)) || (uVar27 == 0x43)) {
                      bVar35 = recovered_100068c4((int)&local_6838);
                      uVar10 = (uint)bVar35;
                    }
                    else if (((uVar29 == 0x2f) || (uVar27 == 0x16 || uVar27 == 0x76)) ||
                            (uVar27 == 0x56)) {
                      uVar10 = recovered_10006ae0((int)&local_6838,uVar24,uVar23,extraout_r3_00);
                    }
                    else {
                      if (((uVar29 != 0x2d) && (uVar27 != 0x18 && uVar27 != 0x78)) &&
                         (uVar27 != 0x58)) goto switchD_1000392c_caseD_48;
                      uVar10 = recovered_100065e0((int)&local_6838,uVar24,uVar23);
                    }
joined_r0x10003644:
                    if (uVar10 == 0) goto switchD_1000392c_caseD_48;
                  }
                  goto LAB_1000353c;
                }
                if ((uVar18 & 0x20000) != 0) goto switchD_1000392c_caseD_48;
                if (uVar27 - 0x20 < 0x5f) {
                  uVar10 = 1;
                  puVar25 = local_2b8;
                  local_2b8[0] = CONCAT71(PF_PART7(local_2b8[0], 1),(char)uVar18);
LAB_1000362c:
                  uVar10 = recovered_10006d64((int)&local_6838,(int)puVar25,uVar10);
                  goto joined_r0x10003644;
                }
                if (uVar27 == 9) {
                  uVar10 = 4;
                  puVar25 = (ulonglong *)&DAT_10007f69;
                  goto LAB_1000362c;
                }
                if ((uVar29 == 0xe || uVar27 == 0x7f) || (uVar27 == 8)) {
                  if ((uVar15 == uVar23) || ((uVar1 <= uVar33 || (local_64bc == (char *)0x0)))) {
                    if ((local_64b0 == 0) || (local_64bc == (char *)0x0))
                    goto switchD_1000392c_caseD_48;
                    thunk_memmove(local_64bc + local_64b0 + -1,local_64bc + local_64b0,
                                       (local_64b4 - local_64b0) + 1);
                    local_64b4 = local_64b4 - 1;
                    local_64b0 = local_64b0 - 1;
                  }
                  else {
                    thunk_memmove(local_64bc + uVar33,local_64bc + uVar1,
                                       (local_64b4 - uVar1) + 1);
                    local_64b4 = (uVar33 - uVar1) + local_64b4;
                    local_64b0 = uVar33;
                  }
                  local_2fe = 1;
                  local_64ac = local_64b0;
                  goto LAB_1000353c;
                }
                if (uVar29 == 0x1c) {
LAB_100038f8:
                  local_2b8[0] = CONCAT71(PF_PART7(local_2b8[0], 1),10);
                  uVar10 = recovered_10006d64((int)&local_6838,(int)local_2b8,1);
                  goto joined_r0x10003644;
                }
                if (uVar29 == 0x53) {
                  uVar10 = recovered_100074e4((int)&local_6838);
                  goto joined_r0x10003644;
                }
                if (uVar27 == 0xd || uVar27 == 10) goto LAB_100038f8;
                switch((uintptr_t)(uVar29)) {
                case 0x47:
                  uVar10 = 0;
                  if (local_64bc != (char *)0x0 && uVar23 != 0) {
                    do {
                      if (local_64bc[uVar23 - 1] == '\n') goto LAB_10003c18;
                      uVar23 = uVar23 - 1;
                    } while (uVar23 != 0);
                  }
                  goto LAB_10003c64;
                case 0x48:
                  iVar9 = 1;
                  goto LAB_10003ac4;
                case 0x49:
                  uVar10 = 0xd;
                  if (0 < local_64c0) {
                    uVar10 = local_64c0 + 3;
                  }
                  pppppppuVar22 = (undefined4 *******)0xac;
                  if (0xac < (int)local_6830) {
                    pppppppuVar22 = local_6830;
                  }
                  pppppppuVar22 = pppppppuVar22 + -0x1a;
                  if (local_6830 == (undefined4 *******)0x0) {
                    pppppppuVar22 = (undefined4 *******)0x1a0;
                  }
                  uVar10 = recovered_10001de8((uint)pppppppuVar22,uVar10);
                  if (uVar10 < 2) {
                    uVar10 = 1;
                  }
                  pppppppuVar31 = local_308;
                  pppppppuVar32 = &local_308;
                  local_308 = (undefined4 *******)((int)local_308 - uVar10);
                  goto LAB_10003bac;
                default:
                  goto switchD_1000392c_caseD_48;
                case 0x4b:
                  if (((uVar18 & 0x10000) != 0) || (uVar15 == uVar23)) {
                    if (local_64b0 == 0) goto switchD_1000392c_caseD_48;
                    uVar34 = local_64b0 - 1;
                  }
                  bVar35 = true;
                  local_64b0 = uVar34;
                  break;
                case 0x4d:
                  if (((uVar18 & 0x10000) == 0) && (uVar15 != uVar23)) {
                    bVar35 = true;
                    local_64b0 = uVar24;
                  }
                  else {
                    if (local_64b4 <= local_64b0) goto switchD_1000392c_caseD_48;
                    bVar35 = true;
                    local_64b0 = local_64b0 + 1;
                  }
                  break;
                case 0x4f:
                  if (local_64bc == (char *)0x0) {
                    uVar10 = 0;
                  }
                  else {
                    for (; uVar23 != 0; uVar23 = uVar23 - 1) {
                      if (local_64bc[uVar23 - 1] == '\n') {
                        uVar10 = 0;
                        if (uVar23 <= local_64b4) goto LAB_10003a80;
                        goto LAB_10003c64;
                      }
                    }
                    uVar23 = 0;
LAB_10003a80:
                    if (uVar23 < local_64b4) {
                      do {
                        if (local_64bc[uVar23] == '\n') goto LAB_10003c18;
                        uVar23 = uVar23 + 1;
                      } while (local_64b4 != uVar23);
                      uVar10 = local_64b4;
                    }
                    else {
LAB_10003c18:
                      uVar10 = uVar23;
                    }
                  }
LAB_10003c64:
                  bVar35 = uVar10 != local_64b0;
                  local_64b0 = uVar10;
                  break;
                case 0x50:
                  iVar9 = 0;
LAB_10003ac4:
                  recovered_100075c8((int)&local_6838,iVar9);
                  bVar35 = local_64b0 != uVar10;
                  break;
                case 0x51:
                  uVar10 = 0xd;
                  if (0 < local_64c0) {
                    uVar10 = local_64c0 + 3;
                  }
                  pppppppuVar22 = (undefined4 *******)0xac;
                  if (0xac < (int)local_6830) {
                    pppppppuVar22 = local_6830;
                  }
                  pppppppuVar22 = pppppppuVar22 + -0x1a;
                  if (local_6830 == (undefined4 *******)0x0) {
                    pppppppuVar22 = (undefined4 *******)0x1a0;
                  }
                  uVar10 = recovered_10001de8((uint)pppppppuVar22,uVar10);
                  if (uVar10 < 2) {
                    uVar10 = 1;
                  }
                  pppppppuVar22 = (undefined4 *******)(uVar10 + (int)local_308);
                  pppppppuVar31 =
                       (undefined4 *******)
                       (((int)local_308 >> 0x1f) + (uint)CARRY4(uVar10,(uint)local_308));
                  if ((int)pppppppuVar31 <
                      (int)(uint)(pppppppuVar22 < (undefined4 *******)0x7fffffff)) {
                    pppppppuVar32 = pppppppuVar31;
                  }
                  else {
                    pppppppuVar22 = (undefined4 *******)0x7fffffff;
                    pppppppuVar32 = (undefined4 *******)0x0;
                  }
                  if ((int)pppppppuVar32 < 0) {
                    pppppppuVar22 = (undefined4 *******)0x0;
                  }
                  local_308 = pppppppuVar22;
LAB_10003bac:
                  recovered_1000740c((int)&local_6838,pppppppuVar31,(int)pppppppuVar32);
                  goto LAB_1000353c;
                }
                if (((uVar18 & 0x10000) != 0) || (!bVar35)) {
                  if (!bVar35) goto switchD_1000392c_caseD_48;
                }
                else {
                  local_64ac = local_64b0;
                }
LAB_1000353c:
                recovered_10004610((int)&local_6838);
                local_6850 = 1;
                goto switchD_1000392c_caseD_48;
              }
              if ((uVar18 & 0x60000) != 0) goto switchD_1000392c_caseD_48;
              if (uVar27 - 0x20 < 0x5f) {
                uVar16 = thunk_strlen(pcVar8);
                if (0xffffcf7a < uVar16 - 0x3084) {
                  thunk_memmove(acStack_3424 + local_39c + 2,pcVar8 + local_39c,
                                     (uVar16 - local_39c) + 1);
                  pcVar8[local_39c] = (char)uVar18;
                  local_39c = local_39c + 1;
                  goto LAB_100035b8;
                }
                goto switchD_1000392c_caseD_48;
              }
              if ((uVar29 == 0xe || uVar27 == 0x7f) || (uVar27 == 8)) {
                uVar16 = thunk_strlen(pcVar8);
                if (local_39c != 0 && uVar16 != 0) {
                  thunk_memmove(acStack_3424 + local_39c,pcVar8 + local_39c,
                                     (uVar16 - local_39c) + 1);
                  local_39c = local_39c - 1;
                  goto LAB_100035b8;
                }
                goto switchD_1000392c_caseD_48;
              }
              bVar2 = PF_PART1(local_300, 1);
              if ((uVar29 == 0x1c || uVar27 == 0xd) || (uVar27 == 10)) {
                if (acStack_3424[1] == '\0') {
                  thunk_snprintf(acStack_394,0x80,&DAT_10007e2a,str_10007f4e);
                }
                else {
                  local_300 = (ushort)PF_PART1(local_300, 1) << 8;
                  if (bVar2 == 1) {
                    thunk_snprintf(acStack_64a8,0x3085,&DAT_10007e2a,pcVar8);
                    iVar9 = recovered_10006408((int)&local_6838);
                  }
                  else {
                    iVar9 = recovered_1000413c((int)&local_6838,pcVar8);
                  }
                  if (iVar9 != 0) goto LAB_100035b8;
                }
                goto switchD_1000392c_caseD_48;
              }
              if (uVar27 == 0x1b || uVar29 == 1) {
                local_300 = (ushort)PF_PART1(local_300, 1) << 8;
                thunk_snprintf(acStack_394,0x80,&DAT_10007e2a,str_10007f3a);
                goto LAB_100035b8;
              }
              switch((uintptr_t)(uVar29)) {
              case 0x47:
                local_39c = 0;
                goto LAB_100035b8;
              case 0x4b:
                if (local_39c != 0) {
                  local_39c = local_39c - 1;
                  goto LAB_100035b8;
                }
                break;
              case 0x4d:
                uVar17 = thunk_strlen(pcVar8);
                if (uVar16 < uVar17) {
                  local_39c = local_39c + 1;
                  goto LAB_100035b8;
                }
                break;
              case 0x4f:
                local_39c = thunk_strlen(pcVar8);
LAB_100035b8:
                iVar9 = local_64c4;
                if (local_64c4 < 1) {
                  iVar9 = 6;
                }
                uVar10 = 0xa2;
                if (0xa2 < (int)local_6834) {
                  uVar10 = local_6834;
                }
                a = uVar10 - 0x5a;
                if (local_6834 == 0) {
                  a = 0x2c6;
                }
                iVar9 = recovered_10001e70(a,iVar9);
                if (iVar9 < 2) {
                  iVar9 = 1;
                }
                if ((int)local_39c < (int)local_398) {
                  local_398 = local_39c;
                }
                else if ((int)(local_398 + iVar9) <= (int)local_39c) {
                  local_398 = (local_39c - iVar9) + 1;
                }
                local_6850 = 1;
                if (0x7fffffff < local_398) {
                  local_398 = 0;
                }
              }
switchD_1000392c_caseD_48:
              iVar30 = iVar30 + 1;
              if (iVar30 == 0x20) break;
            }
            local_6844 = local_6850 | local_6844;
          }
          if ((char)local_300 == '\x01') {
            iVar30 = local_64c4;
            if (local_64c4 < 1) {
              iVar30 = 6;
            }
            uVar10 = 0xa2;
            if (0xa2 < (int)local_6834) {
              uVar10 = local_6834;
            }
            iVar9 = uVar10 - 0x5a;
            if (local_6834 == 0) {
              iVar9 = 0x2c6;
            }
            iVar30 = recovered_10001e70(iVar9,iVar30);
            uVar18 = local_398;
            if (iVar30 < 2) {
              iVar30 = 1;
            }
            if ((int)local_39c < (int)local_398) {
              local_398 = local_39c;
            }
            else if ((int)(local_398 + iVar30) <= (int)local_39c) {
              local_398 = (local_39c - iVar30) + 1;
            }
            if (0x7fffffff < local_398) {
              local_398 = 0;
            }
            uVar10 = 0;
            if (uVar18 != local_398) {
              uVar10 = 1;
            }
          }
          else {
            uVar10 = recovered_10004610((int)&local_6838);
          }
          uVar18 = local_64f8;
          uVar29 = (local_310 & 0x1fff) >> 0xc;
          if ((uVar12 & 2) == 0) {
            uVar29 = 1;
          }
          bVar2 = local_64f4;
          if (local_64f4 == 0) {
            bVar2 = (byte)local_2fd;
          }
          if (local_64f4 == 0 && (bVar2 & 1) == 0) {
            iVar30 = -1;
            if (local_64f8 != 0) goto LAB_10003dac;
            uVar27 = 0;
          }
          else {
            iVar30 = 1;
            uVar27 = local_64f8;
            if (local_64f8 < 0x20) {
LAB_10003dac:
              local_64f8 = iVar30 + local_64f8;
              uVar27 = local_64f8;
            }
          }
          local_6844 = uVar29 != uVar7 | uVar10 | local_6844;
          if (bVar36) {
LAB_10003dd0:
            recovered_10004eb0((int)&local_6838);
            pvVar26 = local_64c8;
            uVar10 = local_682c;
            pppppppuVar22 = local_6830;
            uVar7 = local_6834;
            uVar18 = thunk_terror_ui_colour(0);
            thunk_terror_ui_window_present(&local_6838,str_10007dc1,pvVar26,uVar7,(uint)pppppppuVar22,uVar10,
                               uVar18);
LAB_10003f1c:
            local_310 = local_310 + 1;
            if (local_64f8 - 1 < 0x1f) goto LAB_10002884;
            if ((local_6844 & 1) == 0) {
LAB_10003fb0:
              uVar7 = 5;
              if ((uVar12 & 2) == 0) {
                uVar7 = 0x14;
              }
              goto LAB_10002888;
            }
            iVar30 = Ram40010800;
            if ((((iVar30 == 0x50414d57) && (iVar30 = Ram40010804, iVar30 != 0)) &&
                (uVar7 = Ram40010808, 0xb < uVar7)) &&
               ((uVar7 = Ram40010808, 0x9f < uVar7 &&
                (pcVar3 = (code *)UINT_4001089c, pcVar3 != (code *)0x0)))) {
              (*pcVar3)();
            }
          }
          else {
            if (0x1f < uVar27) {
              uVar27 = 0x20;
            }
            if (0x1f < uVar18) {
              uVar18 = 0x20;
            }
            if ((local_6844 & 1) == 0 &&
                ((uVar27 * 0x20 * uVar27 * 0x20 * (uVar27 * -0x40 + 0xc00) + 0x80000 >> 0x14) * 10 +
                 0x200 ^ ((uVar18 * 0x20 * uVar18 * 0x20 * (uVar18 * -0x40 + 0xc00) + 0x80000 >>
                          0x14) * 5 + 0x100) * 2) >> 10 == 0) goto LAB_10003f1c;
            if (((local_6844 & 1) != 0) ||
               (uVar6 = terror_ui_scrollbar_restore(auStack_64f0,&local_6838), uVar6 == '\0'))
            goto LAB_10003dd0;
            local_64f3 = 1;
            recovered_10004870((int)&local_6838,extraout_r1,extraout_r2_05);
            local_64f3 = 0;
            pf_app_terror_ui_window_present_rect(&local_6838,local_64e8,iStack_64e4,iStack_64e0,local_64dc);
            local_310 = local_310 + 1;
            if (0x1e < local_64f8 - 1) goto LAB_10003fb0;
LAB_10002884:
            uVar7 = 2;
LAB_10002888:
            thunk_terror_ui_yield_frames(uVar7);
          }
          bVar36 = false;
          uVar7 = uVar29;
        } while (local_2f4 != '\0');
      }
      terror_ui_scrollbar_release(auStack_64f0);
      if (local_6838 != 0) {
        thunk_terror_ui_window_close(&local_6838);
      }
      if (local_64bc == (char *)0x0) {
        return 0;
      }
      iVar30 = Ram40010800;
      if (iVar30 != 0x50414d57) {
        return 0;
      }
      iVar30 = Ram40010804;
      if (iVar30 == 0) {
        return 0;
      }
      uVar7 = Ram40010808;
      bVar36 = 0xb < uVar7;
      if (bVar36) {
        uVar7 = Ram40010808;
      }
      if (!(!bVar36 || uVar7 < 0x54)) {
        pcVar3 = (code *)UINT_40010850;
        if (pcVar3 == (code *)0x0) {
          return 0;
        }
        (*pcVar3)(local_64bc);
        return 0;
      }
      return 0;
    }
    thunk_terror_ui_window_close(&local_6838);
    iVar30 = Ram40010800;
  }
  if ((iVar30 == 0x50414d57) && (iVar30 = Ram40010804, iVar30 != 0)) {
    uVar7 = Ram40010808;
    bVar36 = 0xb < uVar7;
    if (bVar36) {
      uVar7 = Ram40010808;
    }
    if ((bVar36 && 0x53 < uVar7) && (pcVar3 = (code *)UINT_40010850, pcVar3 != (code *)0x0)) {
      (*pcVar3)(local_64bc);
    }
  }
  local_64bc = (char *)0x0;
LAB_1000276c:
  iVar30 = Ram40010800;
  if ((iVar30 == 0x50414d57) && (iVar30 = Ram40010804, iVar30 != 0)) {
    uVar7 = Ram40010808;
    bVar36 = 0xb < uVar7;
    if (bVar36) {
      uVar7 = Ram40010808;
    }
    if ((bVar36 && 0x2b < uVar7) && (pcVar3 = (code *)UINT_40010828, pcVar3 != (code *)0x0)) {
      (*pcVar3)(str_10007d90);
    }
  }
  return 1;
}

#undef DAT_10007e2a
#undef DAT_10007e2d
#undef DAT_10007f69
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef EXT_0000000c
#undef Ram40010800
#undef Ram40010804
#undef Ram40010808
#undef UINT_40010828
#undef UINT_4001082c
#undef UINT_40010850
#undef UINT_40010854
#undef UINT_4001089c
#undef UINT_40010978
#undef str_10007d90
#undef str_10007db5
#undef str_10007dbb
#undef str_10007dc1
#undef str_10007dcd
#undef str_10007ddc
#undef str_10007de9
#undef str_10007f3a
#undef str_10007f4e
#undef str_10007f5c
#undef local_6844
#undef local_6838
#undef iStack_2ec
#undef local_6834
#undef local_6830
#undef local_682c
#undef local_680c
#undef uStack_2dc
#undef local_64f8
#undef uStack_2d8
#undef local_64f4
#undef local_64f3
#undef uStack_2c8
#undef local_64e8
#undef local_64dc
#undef local_64c8
#undef local_64c4
#undef local_64c0
#undef local_64bc
#undef local_64b8
#undef local_64b4
#undef local_64b0
#undef local_64ac
#undef uStack_40
#undef local_39c
#undef local_398
#undef local_314
#undef local_310
#undef local_30c
#undef local_308
#undef local_304
#undef local_300
#undef local_2fe
#undef local_2fd
#undef local_2fb
#undef local_2f8
#undef local_2f4
#undef local_2f0
#undef local_2e4
#undef local_2e0
#undef local_2d0
#undef local_2c0
#undef local_2b8
#undef local_2a8
#undef local_2a0
#undef local_298
#undef local_290
#undef local_288
#undef local_284
#undef local_280
#undef local_27c
#undef local_3c
#undef local_30
#undef local_2c
#undef local_28
#undef local_24
#undef auStack_64f0
#undef iStack_64e4
#undef iStack_64e0
#undef acStack_64a8
#undef acStack_3424
#undef acStack_394
#undef local_6850

#undef DAT_10007e2a
#define DAT_10007e2a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1d2U)))
#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_40010a1c
#define DAT_40010a1c (*(uint8_t *)(0x40010a1cU))
#undef Ram40010800
#define Ram40010800 (*(uint32_t *)(0x40010800U))
#undef Ram40010804
#define Ram40010804 (*(uint32_t *)(0x40010804U))
#undef Ram40010808
#define Ram40010808 (*(uint32_t *)(0x40010808U))
#undef Ram40010a1c
#define Ram40010a1c (*(uint32_t *)(0x40010a1cU))
#undef UINT_40010834
#define UINT_40010834 (*(uint *)(0x40010834U))
#undef UINT_4001084c
#define UINT_4001084c (*(uint *)(0x4001084cU))
#undef UINT_40010850
#define UINT_40010850 (*(uint *)(0x40010850U))
#undef UINT_400108c8
#define UINT_400108c8 (*(uint *)(0x400108c8U))
#undef str_10007e2f
#define str_10007e2f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1d7U)))
#undef str_10007e3b
#define str_10007e3b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1e3U)))
#undef str_10007e4b
#define str_10007e4b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1f3U)))
#undef str_10007e7c
#define str_10007e7c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x224U)))
#undef str_10007e9d
#define str_10007e9d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x245U)))
#define local_30bc (*(uint *)(pf_stack_frame + 148))
#define local_30 (*(void * *)(pf_stack_frame + 12576))
#define local_2c (*(ulong *)(pf_stack_frame + 12580))
#define local_28 (*(byte *)(pf_stack_frame + 12584))
#define acStack_313c (*(char (*)[12604])(pf_stack_frame + 20))
#define acStack_30b8 (*(char (*)[12472])(pf_stack_frame + 152))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000413c
 */

undefined4 recovered_1000413c(int param_1,char *param_2)

{
  unsigned char pf_stack_frame[12656] __attribute__((aligned(16))) = {0};

  code *pcVar1;
  void *pvVar2;
  bool bVar3;
  uint uVar4;
  void *ptr;
  int iVar5;
  uint uVar6;
  byte bVar7;
  char *arg0;
  uint uVar8;
  int iVar9;
  ulong in_r1;
  bool bVar10;

  if (param_1 == 0) {
    return 0;
  }
  iVar5 = 0;
  if (param_2 != (char *)0x0) {
    iVar5 = *(int *)(param_1 + 0x37c);
  }
  if ((param_2 == (char *)0x0 || iVar5 == 0) || (*param_2 == '\0')) {
    thunk_snprintf((char *)(param_1 + 0x64a4),0x80,&DAT_10007e2a,str_10007e2f);
    return 0;
  }
  thunk_memset(&local_30,0,0xc);
  bVar3 = recovered_10006004(param_2,&local_30bc);
  if (!bVar3) goto LAB_10004270;
  iVar5 = Ram40010800;
  if ((iVar5 == 0x50414d57) && (iVar5 = Ram40010804, iVar5 != 0)) {
    uVar4 = Ram40010808;
    bVar3 = 0xb < uVar4;
    if (bVar3) {
      uVar4 = Ram40010808;
    }
    if ((!bVar3 || uVar4 < 0x220) || (iVar5 = Ram40010a1c, iVar5 == 0)) goto LAB_10004218;
    pcVar1 = (code *)Ram40010a1c;
    iVar5 = (*pcVar1)(local_30bc,acStack_30b8,&local_30);
    if (iVar5 == 0) goto LAB_10004270;
LAB_10004450:
    if (((local_28 & 2) == 0) && ((local_2c == 0 || (local_30 != (void *)0x0)))) {
      in_r1 = local_2c + 1;
      if (local_2c == 0xffffffff) {
        recovered_10005f60(local_30);
        arg0 = str_10007e4b;
      }
      else {
        iVar5 = recovered_10005fb0(local_30,in_r1);
        if (iVar5 != 0) {
          iVar9 = 0;
          if (local_2c != 0) {
            uVar4 = 0;
            do {
              bVar7 = *(byte *)(iVar5 + uVar4);
              uVar8 = (uint)bVar7;
              if (uVar8 == 0xd) {
                bVar7 = 10;
                if ((local_2c <= uVar4 + 1) || (*(char *)(iVar5 + uVar4 + 1) != '\n')) {
LAB_100044ec:
                  *(byte *)(iVar5 + iVar9) = bVar7;
                  iVar9 = iVar9 + 1;
                }
              }
              else {
                uVar6 = uVar8 - 9;
                bVar3 = 1 < uVar6;
                if (bVar3) {
                  uVar6 = uVar8 - 0x20;
                }
                if ((!bVar3 || uVar6 < 0x5f) || (bVar7 = 0x3f, uVar8 != 0)) goto LAB_100044ec;
              }
              uVar4 = uVar4 + 1;
            } while (uVar4 < local_2c);
          }
          *(undefined1 *)(iVar5 + iVar9) = 0;
          recovered_10005f60(*(void **)(param_1 + 0x37c));
          *(int *)(param_1 + 900) = iVar9;
          *(undefined1 *)(param_1 + 0x653a) = 0;
          *(undefined4 *)(param_1 + 0x6534) = 0;
          *(undefined4 *)(param_1 + 0x6530) = 0;
          *(undefined4 *)(param_1 + 0x38c) = 0;
          *(undefined4 *)(param_1 + 0x388) = 0;
          *(ulong *)(param_1 + 0x380) = in_r1;
          *(int *)(param_1 + 0x37c) = iVar5;
          recovered_10005cc4(local_30bc,acStack_30b8,(undefined1 *)(param_1 + 0x390));
          thunk_snprintf(acStack_313c,0x80,str_10007e9d,(undefined1 *)(param_1 + 0x390));
          thunk_snprintf((char *)(param_1 + 0x64a4),0x80,&DAT_10007e2a,acStack_313c);
          return 1;
        }
        recovered_10005f60(local_30);
        arg0 = str_10007e7c;
      }
      goto override_prt_100042dc_945f3014;
    }
  }
  else {
LAB_10004218:
    iVar5 = Ram40010800;
    if ((iVar5 == 0x50414d57) && (iVar5 = Ram40010804, iVar5 != 0)) {
      uVar4 = Ram40010808;
      bVar10 = 0xb < uVar4;
      bVar3 = uVar4 == 0xc;
      if (bVar10) {
        uVar4 = Ram40010808;
        bVar3 = uVar4 == 0xcb;
      }
      if ((!bVar10 || uVar4 < 0xcb) || bVar3) goto LAB_10004244;
      pcVar1 = (code *)UINT_400108c8;
      if (pcVar1 == (code *)0x0) goto LAB_10004270;
      uVar4 = (*pcVar1)(local_30bc,acStack_30b8,&local_30);
LAB_10004364:
      pvVar2 = local_30;
      if (uVar4 != 0) {
        local_30 = (void *)0x0;
        if (local_2c == 0) goto LAB_10004450;
        if (((pvVar2 != (void *)0x0) && (iVar5 = Ram40010800, iVar5 == 0x50414d57)) &&
           (iVar5 = Ram40010804, iVar5 != 0)) {
          uVar4 = Ram40010808;
          bVar3 = 0xb < uVar4;
          if (bVar3) {
            uVar4 = Ram40010808;
          }
          if (((bVar3 && 0x4f < uVar4) && (pcVar1 = (code *)UINT_4001084c, pcVar1 != (code *)0x0))
             && (ptr = (*pcVar1)(local_2c), ptr != (void *)0x0)) {
            if ((local_2c == 0) || (ptr <= (void *)-local_2c)) {
              if (local_2c != 0) {
                uVar4 = 0;
                do {
                  *(undefined1 *)((int)ptr + uVar4) = *(undefined1 *)((int)pvVar2 + uVar4);
                  uVar4 = uVar4 + 1;
                } while (uVar4 < local_2c);
              }
              local_30 = ptr;
              goto LAB_10004450;
            }
            iVar5 = Ram40010800;
            if ((iVar5 == 0x50414d57) && (iVar5 = Ram40010804, iVar5 != 0)) {
              uVar4 = Ram40010808;
              bVar3 = 0xb < uVar4;
              if (bVar3) {
                uVar4 = Ram40010808;
              }
              if ((bVar3 && 0x53 < uVar4) && (pcVar1 = (code *)UINT_40010850, pcVar1 != (code *)0x0)
                 ) {
                (*pcVar1)(ptr);
              }
            }
          }
        }
      }
    }
    else {
LAB_10004244:
      iVar5 = Ram40010800;
      if ((iVar5 == 0x50414d57) && (iVar5 = Ram40010804, iVar5 != 0)) {
        uVar4 = Ram40010808;
        bVar3 = 0xb < uVar4;
        if (bVar3) {
          uVar4 = Ram40010808;
        }
        if ((bVar3 && 0x37 < uVar4) && (pcVar1 = (code *)UINT_40010834, pcVar1 != (code *)0x0)) {
          uVar4 = (*pcVar1)(acStack_30b8,&local_30);
          goto LAB_10004364;
        }
      }
    }
  }
LAB_10004270:
  iVar5 = Ram40010800;
  if ((iVar5 == 0x50414d57) && (iVar5 = Ram40010804, iVar5 != 0)) {
    uVar4 = Ram40010808;
    bVar3 = 0xb < uVar4;
    if (bVar3) {
      uVar4 = Ram40010808;
    }
    if ((bVar3 && 0x53 < uVar4) && (pcVar1 = (code *)UINT_40010850, pcVar1 != (code *)0x0)) {
      (*pcVar1)(local_30);
    }
  }
  arg0 = acStack_313c;
  thunk_snprintf(arg0,0x80,str_10007e3b,param_2);
override_prt_100042dc_945f3014:
  thunk_snprintf((char *)(param_1 + 0x64a4),0x80,&DAT_10007e2a,arg0);
  return 0;
}

#undef DAT_10007e2a
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_40010a1c
#undef Ram40010800
#undef Ram40010804
#undef Ram40010808
#undef Ram40010a1c
#undef UINT_40010834
#undef UINT_4001084c
#undef UINT_40010850
#undef UINT_400108c8
#undef str_10007e2f
#undef str_10007e3b
#undef str_10007e4b
#undef str_10007e7c
#undef str_10007e9d
#undef local_30bc
#undef local_30
#undef local_2c
#undef local_28
#undef acStack_313c
#undef acStack_30b8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004610
 */

undefined4 recovered_10004610(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint *puVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  uint uVar8;
  char *pcVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  bool bVar17;

  if (param_1 == 0) {
    return 0;
  }
  puVar1 = (uint *)(param_1 + 0x6530);
  pcVar9 = *(char **)(param_1 + 0x37c);
  uVar11 = *(uint *)(param_1 + 0x388);
  uVar16 = *puVar1;
  uVar14 = *(uint *)(param_1 + 0x6534);
  if (pcVar9 == (char *)0x0) {
    uVar10 = 0;
  }
  else {
    uVar10 = 0;
    uVar4 = *(uint *)(param_1 + 900);
    if (uVar11 <= *(uint *)(param_1 + 900)) {
      uVar4 = uVar11;
    }
    if (uVar4 != 0) {
      pcVar7 = pcVar9;
      do {
        uVar4 = uVar4 - 1;
        uVar10 = uVar10 + (*pcVar7 == '\n' && uVar10 != 0x7fffffff);
        pcVar7 = pcVar7 + 1;
      } while (uVar4 != 0);
    }
    uVar4 = *(uint *)(param_1 + 900);
    if (uVar11 < *(uint *)(param_1 + 900)) {
      uVar4 = uVar11;
    }
    for (; uVar4 != 0; uVar4 = uVar4 - 1) {
      if (pcVar9[uVar4 - 1] == '\n') {
        uVar12 = 0;
        if (uVar11 < uVar4) goto LAB_100046e8;
        goto LAB_100046dc;
      }
    }
  }
  uVar4 = 0;
LAB_100046dc:
  uVar12 = uVar11 - uVar4;
  if (0x7ffffffe < uVar12) {
    uVar12 = 0x7fffffff;
  }
LAB_100046e8:
  uVar11 = 0xd;
  iVar6 = *(int *)(param_1 + 8);
  iVar13 = *(int *)(param_1 + 4);
  if (0 < *(int *)(param_1 + 0x378)) {
    uVar11 = *(int *)(param_1 + 0x378) + 3;
  }
  iVar2 = iVar6;
  if (iVar6 < 0xad) {
    iVar2 = 0xac;
  }
  uVar4 = iVar2 - 0x68;
  if (iVar6 == 0) {
    uVar4 = 0x1a0;
  }
  uVar11 = recovered_10001de8(uVar4,uVar11);
  iVar2 = *(int *)(param_1 + 0x374);
  iVar6 = iVar13 + -0x55;
  if (iVar2 < 1) {
    iVar2 = 6;
  }
  if (iVar13 == 0) {
    iVar6 = 0x2cb;
  }
  uVar4 = recovered_10001e70(iVar6,iVar2);
  if ((int)uVar4 < 2) {
    uVar4 = 1;
  }
  uVar5 = 1;
  if (1 < uVar11) {
    uVar5 = uVar11;
  }
  if ((int)uVar10 < (int)uVar16) {
LAB_10004790:
    *puVar1 = uVar10;
    uVar15 = uVar10;
  }
  else {
    iVar13 = ((int)uVar16 >> 0x1f) + (uint)CARRY4(uVar5,uVar16);
    bVar17 = uVar10 < uVar5 + uVar16;
    iVar6 = (int)uVar10 >> 0x1f;
    uVar15 = uVar16;
    if ((int)(iVar6 - (iVar13 + (uint)bVar17)) < 0 ==
        (SBORROW4(iVar6,iVar13) != SBORROW4(iVar6 - iVar13,(uint)bVar17))) {
      uVar10 = (uVar10 - uVar5) + 1;
      goto LAB_10004790;
    }
  }
  if ((int)uVar14 <= (int)uVar12) {
    uVar8 = uVar4 + uVar14;
    iVar6 = ((int)uVar14 >> 0x1f) + (uint)CARRY4(uVar4,uVar14);
    uVar11 = uVar12 - uVar8;
    uVar10 = uVar14;
    if ((int)-(iVar6 + (uint)(uVar12 < uVar8)) < 0 !=
        (SBORROW4(0,iVar6) != SBORROW4(-iVar6,(uint)(uVar12 < uVar8)))) goto LAB_100047d8;
    uVar12 = (uVar12 - uVar4) + 1;
  }
  *(uint *)(param_1 + 0x6534) = uVar12;
  uVar10 = uVar12;
LAB_100047d8:
  iVar6 = 1;
  if (pcVar9 != (char *)0x0) {
    uVar11 = *(uint *)(param_1 + 900);
  }
  if (pcVar9 != (char *)0x0 && uVar11 != 0) {
    do {
      uVar11 = uVar11 - 1;
      iVar6 = iVar6 + (uint)(*pcVar9 == '\n' && iVar6 != 0x7fffffff);
      pcVar9 = pcVar9 + 1;
    } while (uVar11 != 0);
  }
  uVar11 = iVar6 - uVar5 & ~((int)(iVar6 - uVar5) >> 0x1f);
  uVar3 = 1;
  if ((int)uVar15 < (int)uVar11) {
    uVar11 = uVar15;
  }
  if ((int)uVar15 < 0) {
    uVar11 = 0;
  }
  uVar4 = uVar10;
  if (0x7fffffff < uVar10) {
    uVar4 = 0;
  }
  *puVar1 = uVar11;
  if (0x7fffffff < uVar10) {
    *(uint *)(param_1 + 0x6534) = uVar4;
  }
  if ((uVar11 == uVar16) && (uVar3 = 0, uVar4 != uVar14)) {
    uVar3 = 1;
  }
  return uVar3;
}


#define local_30 (*(uint *)(pf_stack_frame + 16))
#define local_2c (*(uint *)(pf_stack_frame + 20))
#define local_24 (*(int *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004870
 */

void recovered_10004870(int param_1,undefined4 param_2,int param_3)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;

  if (param_1 == 0) {
    iVar5 = 0x208;
  }
  else {
    iVar5 = *(int *)(param_1 + 8);
    if (iVar5 == 0) {
      iVar5 = 0x208;
    }
  }
  recovered_10007220(&local_30,param_1,param_3);
  if (iVar5 < 0xad) {
    iVar5 = 0xac;
  }
  if (param_1 == 0) {
    uVar1 = 0x1d0;
  }
  else {
    iVar3 = *(int *)(param_1 + 8);
    iVar11 = 0xac;
    if (0xac < iVar3) {
      iVar11 = iVar3;
    }
    uVar1 = iVar11 - 0x38;
    if (iVar3 == 0) {
      uVar1 = 0x1d0;
    }
  }
  iVar11 = iVar5 + -0x8e;
  if (*(char *)(param_1 + 0x345) == '\0') {
    uVar2 = iVar5 - 0x3fU;
    if (iVar5 - 0x3fU < uVar1 + 0xe) {
      uVar2 = uVar1 + 0xe;
    }
    pf_app_terror_ui_scrollbar_capture((void *)(param_1 + 0x348),(void *)param_1,0xf,0x3f,0xc,uVar2 - 0x3f);
  }
  uVar2 = *(uint *)(param_1 + 0x340);
  if (0x1f < uVar2) {
    uVar2 = 0x20;
  }
  uVar7 = uVar2 * 0x20 * uVar2 * 0x20 * (uVar2 * -0x40 + 0xc00);
  uVar2 = thunk_terror_ui_colour(5);
  uVar10 = (uVar7 + 0x80000 >> 0x14) * 10 + 0x200;
  uVar9 = (uVar10 >> 10) + 2;
  recovered_100077ac(param_1,0xf,0x4f,uVar9,iVar11,
                     uVar2 & 0xff00 | (uVar2 & 0xff) << 0x10 | (uVar2 & 0xff0000) >> 0x10);
  uVar2 = thunk_terror_ui_colour(8);
  uVar8 = uVar2 & 0xff00 | (uVar2 & 0xff) << 0x10 | (uVar2 & 0xff0000) >> 0x10;
  recovered_100077ac(param_1,0xf,0x4f,uVar9,1,uVar8);
  recovered_100077ac(param_1,0xf,iVar5 - 0x40,uVar9,1,uVar8);
  recovered_100077ac(param_1,0xf,0x4f,1,iVar11,uVar8);
  uVar2 = (uVar10 >> 10) + 0x10;
  recovered_100077ac(param_1,uVar2,0x4f,1,iVar11,uVar8);
  if (0 < local_24) {
    uVar8 = (uint)(0x66 < uVar7 >> 0x13);
    uVar7 = thunk_terror_ui_colour(6);
    recovered_100077ac(param_1,local_30 + uVar8,local_2c + uVar8,uVar9 + uVar8 * -2,
                       local_24 + uVar8 * -2,
                       uVar7 & 0xff00 | (uVar7 & 0xff) << 0x10 | (uVar7 & 0xff0000) >> 0x10);
    uVar7 = thunk_terror_ui_colour(9);
    uVar7 = uVar7 & 0xff00 | (uVar7 & 0xff) << 0x10 | (uVar7 & 0xff0000) >> 0x10;
    recovered_100077ac(param_1,local_30,local_2c,uVar9,1,uVar7);
    recovered_100077ac(param_1,local_30,(local_24 + local_2c) - 1,uVar9,1,uVar7);
    recovered_100077ac(param_1,local_30,local_2c,1,local_24,uVar7);
    recovered_100077ac(param_1,(uVar10 >> 10) + local_30 + 1,local_2c,1,local_24,uVar7);
  }
  uVar7 = thunk_terror_ui_colour(7);
  recovered_100077ac(param_1,0xf,0x3f,uVar9,0xe,
                     uVar7 & 0xff00 | (uVar7 & 0xff) << 0x10 | (uVar7 & 0xff0000) >> 0x10);
  uVar7 = thunk_terror_ui_colour(10);
  uVar7 = uVar7 & 0xff00 | (uVar7 & 0xff) << 0x10 | (uVar7 & 0xff0000) >> 0x10;
  recovered_100077ac(param_1,0xf,0x3f,uVar9,1,uVar7);
  recovered_100077ac(param_1,0xf,0x4c,uVar9,1,uVar7);
  recovered_100077ac(param_1,0xf,0x3f,1,0xe,uVar7);
  recovered_100077ac(param_1,uVar2,0x3f,1,0xe,uVar7);
  uVar7 = thunk_terror_ui_colour(0xb);
  uVar6 = uVar7 & 0xff00 | (uVar7 & 0xff) << 0x10 | (uVar7 & 0xff0000) >> 0x10;
  uVar4 = (uVar9 >> 1) + 0xf;
  recovered_100077ac(param_1,uVar4,0x42,1,1,uVar6);
  uVar8 = 4;
  uVar10 = (uVar10 >> 10) + 3;
  uVar7 = uVar10 >> 1;
  if (uVar7 < 4) {
    uVar8 = uVar10 >> 1;
  }
  if (uVar10 >> 1 != 1) {
    uVar10 = uVar9 >> 1;
    recovered_100077ac(param_1,uVar10 + 0xe,0x43,3,1,uVar6);
    if ((uVar7 != 2) && (recovered_100077ac(param_1,uVar10 + 0xd,0x44,5,1,uVar6), uVar7 != 3)) {
      recovered_100077ac(param_1,uVar10 + 0xc,0x45,7,1,uVar6);
    }
  }
  uVar10 = thunk_terror_ui_colour(7);
  recovered_100077ac(param_1,0xf,uVar1,uVar9,0xe,
                     uVar10 & 0xff00 | (uVar10 & 0xff) << 0x10 | (uVar10 & 0xff0000) >> 0x10);
  uVar10 = thunk_terror_ui_colour(10);
  uVar10 = uVar10 & 0xff00 | (uVar10 & 0xff) << 0x10 | (uVar10 & 0xff0000) >> 0x10;
  recovered_100077ac(param_1,0xf,uVar1,uVar9,1,uVar10);
  recovered_100077ac(param_1,0xf,uVar1 + 0xd,uVar9,1,uVar10);
  recovered_100077ac(param_1,0xf,uVar1,1,0xe,uVar10);
  recovered_100077ac(param_1,uVar2,uVar1,1,0xe,uVar10);
  uVar2 = thunk_terror_ui_colour(0xb);
  uVar2 = uVar2 & 0xff00 | (uVar2 & 0xff) << 0x10 | (uVar2 & 0xff0000) >> 0x10;
  recovered_100077ac(param_1,uVar4 - (uVar8 - 1),uVar1 + 5,(uVar8 - 1) * 2 | 1,1,uVar2);
  if (((uVar7 != 1) &&
      (recovered_100077ac(param_1,uVar4 - (uVar8 - 2),uVar1 + 6,(uVar8 - 2) * 2 | 1,1,uVar2),
      uVar7 != 2)) &&
     (recovered_100077ac(param_1,uVar4 - (uVar8 - 3),uVar1 + 7,(uVar8 - 3) * 2 | 1,1,uVar2),
     uVar7 != 3)) {
    recovered_100077ac(param_1,uVar4 - (uVar8 - 4),uVar1 + 8,(uVar8 - 4) * 2 | 1,1,uVar2);
  }
  return;
}

#undef local_30
#undef local_2c
#undef local_24

#undef DAT_10007ea9
#define DAT_10007ea9 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x251U)))
#undef DAT_10007f73
#define DAT_10007f73 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x31bU)))
#undef DAT_10007f76
#define DAT_10007f76 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x31eU)))
#undef EXT_00000004
#define EXT_00000004 (*(uint8_t *)(0x4U))
#undef str_10007f7b
#define str_10007f7b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x323U)))
#define local_b0 (*(char *)(pf_stack_frame + 80))
#define local_f0 (*(uint *)(pf_stack_frame + 16))
#define local_e4 (*(uint *)(pf_stack_frame + 28))
#define local_e0 (*(uint *)(pf_stack_frame + 32))
#define local_d8 (*(uint *)(pf_stack_frame + 40))
#define local_d4 (*(uint *)(pf_stack_frame + 44))
#define local_c8 (*(uint *)(pf_stack_frame + 56))
#define local_b4 (*(char (*)[180])(pf_stack_frame + 76))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004eb0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10004eb0(int param_1)

{
  unsigned char pf_stack_frame[288] __attribute__((aligned(16))) = {0};

  char cVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  uint extraout_r1 = 0;
  uint uVar8;
  uint extraout_r1_00 = 0;
  char *pcVar9;
  uint extraout_r2 = 0;
  uint extraout_r2_00 = 0;
  uint extraout_r2_01 = 0;
  uint extraout_r2_02 = 0;
  uint extraout_r2_03 = 0;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  char *pcVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  bool bVar22;
  bool bVar23;

  if (param_1 == 0) {
    iVar12 = 0x208;
    iVar15 = 800;
  }
  else {
    iVar12 = *(int *)(param_1 + 8);
    iVar15 = *(int *)(param_1 + 4);
    if (iVar12 == 0) {
      iVar12 = 0x208;
    }
    if (iVar15 == 0) {
      iVar15 = 800;
    }
  }
  uVar3 = thunk_terror_ui_colour(0);
  recovered_100077ac(param_1,0,0,iVar15,iVar12,
                     uVar3 & 0xff00 | (uVar3 & 0xff) << 0x10 | (uVar3 & 0xff0000) >> 0x10);
  if (param_1 == 0) {
    iVar12 = _UndefinedInstruction;
    iVar15 = 800;
  }
  else {
    iVar12 = *(int *)(param_1 + 4);
    iVar15 = iVar12;
    if (iVar12 == 0) {
      iVar15 = 800;
    }
  }
  iVar4 = *(int *)(param_1 + 0x374);
  cVar1 = *(char *)(param_1 + 0x6538);
  uVar3 = thunk_terror_ui_colour(0x2d);
  if (iVar12 == 0) {
    iVar12 = 800;
  }
  iVar13 = 0;
  recovered_100077ac(param_1,0,0,iVar12,0x3a,
                     uVar3 & 0xff00 | (uVar3 & 0xff) << 0x10 | (uVar3 & 0xff0000) >> 0x10);
  uVar17 = 3;
  iVar12 = *(int *)(param_1 + 4);
  uVar3 = thunk_terror_ui_colour(3);
  if (iVar12 == 0) {
    iVar12 = 800;
  }
  recovered_100077ac(param_1,0,0x39,iVar12,1,
                     uVar3 & 0xff00 | (uVar3 & 0xff) << 0x10 | (uVar3 & 0xff0000) >> 0x10);
  uVar3 = thunk_terror_ui_colour(1);
  recovered_10007950(param_1,0xc,0x12,((uintptr_t)pf_module_state + 0x316U),4,
                     uVar3 & 0xff00 | (uVar3 & 0xff) << 0x10 | (uVar3 & 0xff0000) >> 0x10);
  uVar3 = 2;
  if (*(char *)(param_1 + 0x6538) != '\0') {
    uVar3 = 0x1f;
  }
  uVar3 = thunk_terror_ui_colour(uVar3);
  if (iVar15 < 0xa3) {
    iVar15 = 0xa2;
  }
  iVar12 = iVar15 + -0x52;
  recovered_100077ac(param_1,0x48,0xf,iVar12,0x18,
                     uVar3 & 0xff00 | (uVar3 & 0xff) << 0x10 | (uVar3 & 0xff0000) >> 0x10);
  if (*(char *)(param_1 + 0x6538) != '\0') {
    uVar17 = 4;
  }
  uVar3 = thunk_terror_ui_colour(uVar17);
  uVar3 = uVar3 & 0xff00 | (uVar3 & 0xff) << 0x10 | (uVar3 & 0xff0000) >> 0x10;
  recovered_100077ac(param_1,0x48,0xf,iVar12,1,uVar3);
  recovered_100077ac(param_1,0x48,0x26,iVar12,1,uVar3);
  recovered_100077ac(param_1,0x48,0xf,1,0x18,uVar3);
  recovered_100077ac(param_1,iVar15 - 0xb,0xf,1,0x18,uVar3);
  if (iVar4 < 1) {
    iVar4 = 6;
  }
  iVar12 = recovered_10001e70(iVar15 + -0x5a,iVar4);
  iVar4 = 0x390;
  if (cVar1 != '\0') {
    iVar4 = 0x3415;
  }
  uVar5 = thunk_strlen((char *)(param_1 + iVar4));
  iVar20 = 1;
  if (1 < iVar12) {
    iVar20 = iVar12;
  }
  if (*(int *)(param_1 + 0x64a0) < (int)uVar5) {
    iVar12 = 0x16;
    pcVar18 = (char *)(param_1 + iVar4) + *(int *)(param_1 + 0x64a0);
    if (0 < *(int *)(param_1 + 0x378)) {
      iVar12 = (0x18 - *(int *)(param_1 + 0x378)) / 2 + 0xf;
    }
    uVar3 = thunk_terror_ui_colour(1);
    do {
      if (pcVar18[iVar13] == '\0') goto LAB_100051e8;
      iVar13 = iVar13 + 1;
    } while (iVar20 != iVar13);
    iVar13 = iVar20;
LAB_100051e8:
    recovered_10007950(param_1,0x4c,iVar12,(int)pcVar18,iVar13,
                       uVar3 & 0xff00 | (uVar3 & 0xff) << 0x10 | (uVar3 & 0xff0000) >> 0x10);
  }
  bVar2 = *(byte *)(param_1 + 0x6538);
  bVar22 = bVar2 == 1;
  if (bVar22) {
    bVar2 = *(byte *)(param_1 + 0x6529);
  }
  if (bVar22 && (bVar2 & 0x10) == 0) {
    iVar12 = *(int *)(param_1 + 0x374);
    if (iVar12 < 1) {
      iVar12 = 6;
    }
    iVar12 = iVar12 * (*(int *)(param_1 + 0x649c) - *(int *)(param_1 + 0x64a0));
    if ((-1 < iVar12) && (uVar3 = iVar12 + 0x4c, (int)uVar3 < iVar15 + -0xd)) {
      uVar17 = thunk_terror_ui_colour(4);
      recovered_100077ac(param_1,uVar3,0x13,2,0x10,
                         uVar17 & 0xff00 | (uVar17 & 0xff) << 0x10 | (uVar17 & 0xff0000) >> 0x10);
    }
  }
  iVar15 = *(int *)(param_1 + 4);
  iVar4 = *(int *)(param_1 + 8);
  iVar12 = iVar15 + -0x55;
  iVar13 = iVar15 + -0x14;
  if (iVar15 == 0) {
    iVar12 = 0x2cb;
    iVar13 = 0x30c;
  }
  iVar15 = iVar4;
  if (iVar4 < 0xad) {
    iVar15 = 0xac;
  }
  uVar3 = iVar15 - 0x68;
  iVar15 = iVar15 + -0x5c;
  if (iVar4 == 0) {
    uVar3 = 0x1a0;
    iVar15 = 0x1ac;
  }
  if (*(int *)(param_1 + 0x378) < 1) {
    uVar3 = uVar3 / 0xd;
  }
  else {
    uVar3 = recovered_10001de8(uVar3,*(int *)(param_1 + 0x378) + 3);
    if (uVar3 < 2) {
      uVar3 = 1;
    }
  }
  iVar4 = *(int *)(param_1 + 0x374);
  if (iVar4 < 1) {
    iVar4 = 6;
  }
  pcVar18 = *(char **)(param_1 + 0x37c);
  uVar17 = recovered_10001e70(iVar12,iVar4);
  uVar21 = 1;
  if ((int)uVar17 < 2) {
    uVar17 = 1;
  }
  if (pcVar18 == (char *)0x0) {
    uVar10 = *(uint *)(param_1 + 0x388);
LAB_10005380:
    local_c8 = 0;
  }
  else {
    uVar19 = *(uint *)(param_1 + 900);
    if (uVar19 != 0) {
      pcVar9 = pcVar18;
      uVar10 = uVar19;
      do {
        uVar10 = uVar10 - 1;
        uVar21 = uVar21 + (*pcVar9 == '\n' && uVar21 != 0x7fffffff);
        pcVar9 = pcVar9 + 1;
      } while (uVar10 != 0);
    }
    uVar10 = *(uint *)(param_1 + 0x388);
    if (uVar10 <= uVar19) {
      uVar19 = uVar10;
    }
    if (uVar19 == 0) goto LAB_10005380;
    local_c8 = 0;
    uVar7 = uVar19;
    pcVar9 = pcVar18;
    do {
      uVar7 = uVar7 - 1;
      local_c8 = local_c8 + (*pcVar9 == '\n' && local_c8 != 0x7fffffff);
      pcVar9 = pcVar9 + 1;
    } while (uVar7 != 0);
    if (param_1 == 0) {
      local_f0 = 0;
      local_e0 = 0;
      local_d8 = 0;
      bVar22 = false;
      goto LAB_1000540c;
    }
    do {
      if (pcVar18[uVar19 - 1] == '\n') {
        local_f0 = 0;
        if (uVar19 <= uVar10) goto LAB_10005388;
        goto LAB_10005394;
      }
      uVar19 = uVar19 - 1;
    } while (uVar19 != 0);
  }
  uVar19 = 0;
LAB_10005388:
  local_f0 = uVar10 - uVar19;
  if (0x7ffffffe < local_f0) {
    local_f0 = 0x7fffffff;
  }
LAB_10005394:
  if (param_1 == 0) {
    bVar22 = false;
    local_e0 = 0;
    local_d8 = 0;
  }
  else {
    uVar19 = *(uint *)(param_1 + 900);
    uVar7 = *(uint *)(param_1 + 0x38c);
    local_d8 = 0;
    if (uVar19 <= uVar10) {
      uVar10 = uVar19;
    }
    if (uVar7 < uVar19) {
      uVar19 = uVar7;
    }
    if (uVar19 == uVar10) {
      bVar22 = false;
      local_e0 = 0;
    }
    else {
      local_e0 = uVar19;
      local_d8 = uVar10;
      if (uVar7 < uVar10) {
        local_e0 = uVar10;
        local_d8 = uVar19;
      }
      bVar22 = true;
    }
  }
LAB_1000540c:
  uVar10 = thunk_terror_ui_colour(0x1f);
  recovered_100077ac(param_1,10,0x3a,iVar13,iVar15,
                     uVar10 & 0xff00 | (uVar10 & 0xff) << 0x10 | (uVar10 & 0xff0000) >> 0x10);
  uVar10 = thunk_terror_ui_colour(3);
  uVar10 = uVar10 & 0xff00 | (uVar10 & 0xff) << 0x10 | (uVar10 & 0xff0000) >> 0x10;
  recovered_100077ac(param_1,10,0x3a,iVar13,1,uVar10);
  recovered_100077ac(param_1,10,iVar15 + 0x39,iVar13,1,uVar10);
  recovered_100077ac(param_1,10,0x3a,1,iVar15,uVar10);
  recovered_100077ac(param_1,iVar13 + 9,0x3a,1,iVar15,uVar10);
  uVar10 = thunk_terror_ui_colour(0x2a);
  recovered_100077ac(param_1,0x17,0x3b,0x29,iVar15 + -2,
                     uVar10 & 0xff00 | (uVar10 & 0xff) << 0x10 | (uVar10 & 0xff0000) >> 0x10);
  uVar10 = thunk_terror_ui_colour(0x15);
  recovered_100077ac(param_1,0x40,0x3b,1,iVar15 + -2,
                     uVar10 & 0xff00 | (uVar10 & 0xff) << 0x10 | (uVar10 & 0xff0000) >> 0x10);
  uVar19 = 0;
  uVar10 = extraout_r2;
  do {
    iVar15 = 0xd;
    if (0 < *(int *)(param_1 + 0x378)) {
      iVar15 = *(int *)(param_1 + 0x378) + 3;
    }
    uVar7 = *(uint *)(param_1 + 0x6530);
    uVar14 = uVar7 + uVar19;
    iVar13 = ((int)uVar7 >> 0x1f) + (uint)CARRY4(uVar7,uVar19);
    uVar7 = uVar14 - uVar21;
    iVar4 = (int)uVar21 >> 0x1f;
    if ((int)(iVar13 - (iVar4 + (uint)(uVar14 < uVar21))) < 0 ==
        (SBORROW4(iVar13,iVar4) != SBORROW4(iVar13 - iVar4,(uint)(uVar14 < uVar21)))) break;
    iVar4 = iVar15 * uVar19;
    uVar10 = local_c8;
    if (local_c8 == uVar14) {
      uVar10 = (uint)*(byte *)(param_1 + 0x6538);
    }
    if (local_c8 == uVar14 && uVar10 == 0) {
      uVar10 = thunk_terror_ui_colour(0x2c);
      local_e4 = local_e4 & 0xff000000 |
                 uVar10 & 0xff00 | (uVar10 & 0xff) << 0x10 | (uVar10 & 0xff0000) >> 0x10;
      recovered_100077ac(param_1,0x41,iVar4 + 0x3f,iVar12,iVar15,local_e4);
    }
    thunk_snprintf(local_b4,0x10,&DAT_10007f73,uVar14 + 1);
    uVar10 = thunk_terror_ui_colour(0x31);
    if (local_b4[0] == '\0') {
      iVar15 = 0;
    }
    else if (local_b4[1] == '\0') {
      iVar15 = 1;
    }
    else if (local_b4[2] == '\0') {
      iVar15 = 2;
    }
    else if (local_b4[3] == '\0') {
      iVar15 = 3;
    }
    else {
      iVar15 = 5;
      if (local_b0 == '\0') {
        iVar15 = 4;
      }
    }
    recovered_10007950(param_1,0x1c,iVar4 + 0x40,(int)local_b4,iVar15,
                       uVar10 & 0xff00 | (uVar10 & 0xff) << 0x10 | (uVar10 & 0xff0000) >> 0x10);
    iVar15 = *(int *)(param_1 + 0x37c);
    uVar10 = extraout_r2_01;
    if (((int)uVar14 < 1) || (iVar15 == 0)) {
      if (iVar15 == 0) goto LAB_100057a8;
      uVar7 = *(uint *)(param_1 + 900);
      uVar14 = 0;
LAB_1000577c:
      uVar11 = uVar14;
      if (uVar14 < uVar7) {
        do {
          uVar10 = (uint)*(byte *)(iVar15 + uVar11);
          if (uVar10 == 10) goto LAB_100057b0;
          uVar11 = uVar11 + 1;
        } while (uVar7 != uVar11);
        goto LAB_100057a0;
      }
    }
    else {
      uVar7 = *(uint *)(param_1 + 900);
      if (uVar7 == 0) {
LAB_100057a8:
        uVar14 = 0;
        uVar11 = 0;
      }
      else {
        uVar11 = 0;
        uVar10 = 0;
        do {
          bVar23 = *(char *)(iVar15 + uVar10) == '\n';
          if (bVar23) {
            uVar11 = uVar11 + 1;
          }
          if (bVar23 && uVar11 == uVar14) {
            uVar14 = uVar10 + 1;
            uVar11 = 0;
            if (uVar10 < uVar7) goto LAB_1000577c;
            goto LAB_100057b0;
          }
          uVar10 = uVar10 + 1;
        } while (uVar7 != uVar10);
        uVar14 = uVar7;
LAB_100057a0:
        uVar11 = uVar7;
      }
    }
LAB_100057b0:
    if (bVar22) {
      uVar7 = uVar11;
      if (local_e0 < uVar11) {
        uVar7 = local_e0;
      }
      uVar16 = uVar14;
      if (uVar14 < local_d8) {
        uVar16 = local_d8;
      }
      bVar23 = false;
      if (uVar11 < *(uint *)(param_1 + 900)) {
        bVar23 = uVar11 < local_e0 && (local_d8 <= uVar11 && *(char *)(iVar15 + uVar11) == '\n');
      }
      if ((uVar16 < uVar7) || (uVar10 = 0, bVar23)) {
        uVar7 = uVar7 - uVar14;
        uVar16 = uVar16 - uVar14;
        uVar8 = 0x7fffffff;
        if (uVar7 < 0x7fffffff) {
          uVar8 = uVar7;
        }
        uVar6 = 0x7fffffff;
        if (uVar16 < 0x7fffffff) {
          uVar6 = uVar16;
        }
        if (uVar16 < uVar8 || !bVar23) {
          if (bVar23) {
            if (0x7ffffffd < uVar7) {
              uVar7 = 0x7ffffffe;
            }
            uVar8 = uVar7 + 1;
          }
        }
        else {
          if (0x7ffffffd < uVar16) {
            uVar16 = 0x7ffffffe;
          }
          uVar8 = uVar16 + 1;
        }
        uVar10 = *(uint *)(param_1 + 0x6534);
        uVar7 = uVar10 + uVar17;
        iVar15 = ((int)uVar10 >> 0x1f) + (uint)CARRY4(uVar10,uVar17);
        if ((int)(uint)(uVar7 < 0x7fffffff) <= iVar15) {
          uVar7 = 0x7fffffff;
          iVar15 = 0;
        }
        if (iVar15 < 0) {
          uVar7 = 0;
        }
        if (uVar8 < uVar7) {
          uVar7 = uVar8;
        }
        if ((int)uVar6 <= (int)uVar10) {
          uVar6 = uVar10;
        }
        if (uVar6 < uVar7) {
          iVar13 = 0xd;
          iVar15 = *(int *)(param_1 + 0x374);
          if (0 < *(int *)(param_1 + 0x378)) {
            iVar13 = *(int *)(param_1 + 0x378) + 3;
          }
          if (iVar15 < 1) {
            iVar15 = 6;
          }
          uVar16 = thunk_terror_ui_colour(0x2b);
          recovered_100077ac(param_1,iVar15 * (uVar6 - uVar10) + 0x41,iVar4 + 0x3f,
                             iVar15 * (uVar7 - uVar6),iVar13,
                             uVar16 & 0xff00 | (uVar16 & 0xff) << 0x10 | (uVar16 & 0xff0000) >> 0x10
                            );
          uVar10 = extraout_r2_02;
        }
      }
    }
    uVar7 = uVar11 - uVar14;
    if (*(uint *)(param_1 + 0x6534) < uVar7) {
      iVar15 = *(uint *)(param_1 + 0x6534) + uVar14;
      uVar11 = uVar11 - iVar15;
      if (0x7ffffffe < uVar11) {
        uVar11 = 0x7fffffff;
      }
      iVar13 = *(int *)(param_1 + 0x37c);
      if ((int)uVar17 < (int)uVar11) {
        uVar11 = uVar17;
      }
      uVar10 = thunk_terror_ui_colour(1);
      local_d4 = local_d4 & 0xff000000 |
                 uVar10 & 0xff00 | (uVar10 & 0xff) << 0x10 | (uVar10 & 0xff0000) >> 0x10;
      recovered_10007950(param_1,0x41,iVar4 + 0x40,iVar13 + iVar15,uVar11,local_d4);
      uVar7 = extraout_r1;
      uVar10 = extraout_r2_00;
    }
    uVar19 = uVar19 + 1;
  } while (uVar19 != uVar3);
  if (*(char *)(param_1 + 0x6538) == '\0') {
    if ((*(byte *)(param_1 + 0x6524) & 2) != 0) {
      if ((*(byte *)(param_1 + 0x6529) & 0x10) == 0) {
        uVar21 = *(uint *)(param_1 + 0x6530);
        uVar7 = local_c8;
        if ((int)uVar21 <= (int)local_c8) {
          uVar19 = uVar21 + uVar3;
          iVar15 = ((int)uVar21 >> 0x1f) + (uint)CARRY4(uVar21,uVar3);
          iVar12 = (int)local_c8 >> 0x1f;
          uVar7 = iVar12 - (iVar15 + (uint)(local_c8 < uVar19));
          uVar10 = local_c8 - uVar19;
          if ((int)uVar7 < 0 !=
              (SBORROW4(iVar12,iVar15) != SBORROW4(iVar12 - iVar15,(uint)(local_c8 < uVar19)))) {
            uVar7 = *(uint *)(param_1 + 0x6534);
            uVar10 = local_f0;
            if (((int)uVar7 <= (int)local_f0) &&
               (iVar12 = ((int)uVar7 >> 0x1f) + (uint)CARRY4(uVar7,uVar17),
               bVar22 = uVar7 + uVar17 < local_f0, uVar10 = iVar12 - (uint)bVar22,
               (int)(uint)bVar22 <= iVar12)) {
              iVar4 = *(int *)(param_1 + 0x378);
              iVar12 = 0xc;
              iVar13 = 0xd;
              iVar15 = *(int *)(param_1 + 0x374);
              if (0 < iVar4) {
                iVar12 = iVar4 + 2;
                iVar13 = iVar4 + 3;
              }
              if (iVar15 < 1) {
                iVar15 = 6;
              }
              uVar3 = thunk_terror_ui_colour(4);
              recovered_100077ac(param_1,iVar15 * (local_f0 - uVar7) + 0x41,
                                 iVar13 * (local_c8 - uVar21) + 0x3f,2,iVar12,
                                 uVar3 & 0xff00 | (uVar3 & 0xff) << 0x10 |
                                 (uVar3 & 0xff0000) >> 0x10);
              uVar7 = extraout_r1_00;
              uVar10 = extraout_r2_03;
            }
          }
        }
      }
    }
  }
  recovered_10004870(param_1,uVar7,uVar10);
  iVar15 = *(int *)(param_1 + 4);
  iVar12 = *(int *)(param_1 + 8);
  uVar3 = thunk_terror_ui_colour(0x2d);
  uVar17 = iVar12 - 0x18;
  if (iVar12 == 0) {
    uVar17 = 0x1f0;
  }
  if (iVar15 == 0) {
    iVar15 = 800;
  }
  iVar12 = 0;
  recovered_100077ac(param_1,0,uVar17,iVar15,0x18,
                     uVar3 & 0xff00 | (uVar3 & 0xff) << 0x10 | (uVar3 & 0xff0000) >> 0x10);
  uVar3 = thunk_terror_ui_colour(3);
  recovered_100077ac(param_1,0,uVar17,iVar15,1,
                     uVar3 & 0xff00 | (uVar3 & 0xff) << 0x10 | (uVar3 & 0xff0000) >> 0x10);
  pcVar18 = &DAT_10007ea9;
  if (*(char *)(param_1 + 0x653a) != '\0') {
    pcVar18 = str_10007f7b;
  }
  thunk_snprintf(local_b4,0x90,&DAT_10007f76,pcVar18,(void *)(param_1 + 0x64a4));
  iVar4 = *(int *)(param_1 + 0x374);
  iVar13 = *(int *)(param_1 + 0x378);
  if (iVar4 < 1) {
    iVar4 = 6;
  }
  iVar4 = recovered_10001e70(iVar15 + -0x14,iVar4);
  iVar15 = 1;
  if (1 < iVar4) {
    iVar15 = iVar4;
  }
  uVar3 = thunk_terror_ui_colour(0x31);
  do {
    if (local_b4[iVar12] == '\0') goto LAB_10005bcc;
    iVar12 = iVar12 + 1;
  } while (iVar15 != iVar12);
  iVar12 = iVar15;
LAB_10005bcc:
  iVar15 = 7;
  if (0 < iVar13) {
    iVar15 = (0x18 - iVar13) / 2;
  }
  recovered_10007950(param_1,10,iVar15 + uVar17,(int)local_b4,iVar12,
                     uVar3 & 0xff00 | (uVar3 & 0xff) << 0x10 | (uVar3 & 0xff0000) >> 0x10);
  return;
}

#undef DAT_10007ea9
#undef DAT_10007f73
#undef DAT_10007f76
#undef EXT_00000004
#undef str_10007f7b
#undef local_b0
#undef local_f0
#undef local_e4
#undef local_e0
#undef local_d8
#undef local_d4
#undef local_c8
#undef local_b4

#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_40010a20
#define DAT_40010a20 (*(uint8_t *)(0x40010a20U))
#undef Ram40010800
#define Ram40010800 (*(uint32_t *)(0x40010800U))
#undef Ram40010804
#define Ram40010804 (*(uint32_t *)(0x40010804U))
#undef Ram40010808
#define Ram40010808 (*(uint32_t *)(0x40010808U))
#undef Ram40010a20
#define Ram40010a20 (*(uint32_t *)(0x40010a20U))
#undef UINT_400108bc
#define UINT_400108bc (*(uint *)(0x400108bcU))
#define local_98 (*(byte (*)[152])(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005cc4
 */

void recovered_10005cc4(uint param_1,char *param_2,undefined1 *param_3)

{
  unsigned char pf_stack_frame[208] __attribute__((aligned(16))) = {0};

  code *pcVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  char cVar8;
  char *pcVar9;
  bool bVar10;

  if (0x7fffffff < param_1) {
    iVar4 = Ram40010800;
    param_1 = 0xffffffff;
    if ((iVar4 == 0x50414d57) && (iVar4 = Ram40010804, iVar4 != 0)) {
      uVar6 = Ram40010808;
      bVar10 = 0xb < uVar6;
      if (bVar10) {
        uVar6 = Ram40010808;
      }
      if ((bVar10 && 0xbf < uVar6) && (pcVar1 = (code *)UINT_400108bc, pcVar1 != (code *)0x0)) {
        param_1 = (*pcVar1)();
      }
    }
  }
  if (param_3 != (undefined1 *)0x0) {
    *param_3 = 0;
    iVar4 = Ram40010800;
    if ((iVar4 == 0x50414d57) && (iVar4 = Ram40010804, iVar4 != 0)) {
      uVar6 = Ram40010808;
      bVar10 = 0xb < uVar6;
      if (bVar10) {
        uVar6 = Ram40010808;
      }
      if ((bVar10 && 0x223 < uVar6) && (iVar4 = Ram40010a20, iVar4 != 0)) {
        pcVar1 = (code *)Ram40010a20;
        iVar4 = (*pcVar1)(param_1,local_98,0x80);
        if ((-1 < iVar4) && (local_98[0] != 0)) {
          iVar7 = 0;
          iVar4 = 1;
          uVar6 = 1;
          bVar3 = local_98[0];
          do {
            if (iVar4 == 0x80) {
              return;
            }
            if (bVar3 == 0x5c) {
              if (iVar7 == 0) {
                return;
              }
              uVar6 = uVar6 + 1;
              iVar7 = 0;
              if (6 < uVar6) {
                return;
              }
            }
            else {
              bVar10 = 9 < (byte)(bVar3 - 0x30U);
              bVar2 = bVar3;
              if (bVar10) {
                bVar2 = (bVar3 & 0xdf) + 0xbf;
              }
              if ((bVar10 && 0x19 < bVar2) && (bVar3 != 0x5f && bVar3 != 0x2d)) {
                return;
              }
              iVar7 = iVar7 + 1;
            }
            bVar3 = local_98[iVar4];
            iVar4 = iVar4 + 1;
          } while (bVar3 != 0);
          if ((iVar7 != 0) && (1 < uVar6)) {
            *param_3 = 0x5b;
            iVar4 = 0;
            do {
              iVar7 = iVar4;
              if (iVar7 + 2U < 0x3085) {
                param_3[iVar7 + 1] = local_98[0];
              }
              local_98[0] = local_98[iVar7 + 1];
              iVar4 = iVar7 + 1;
            } while (local_98[0] != 0);
            uVar6 = iVar7 + 4;
            if (iVar7 + 3U < 0x3085) {
              param_3[iVar7 + 2] = 0x5d;
            }
            if (uVar6 < 0x3085) {
              param_3[iVar7 + 3] = 0x5c;
            }
            if (param_2 != (char *)0x0) {
              do {
                pcVar9 = param_2 + 1;
                cVar8 = *param_2;
                param_2 = pcVar9;
              } while (cVar8 == '\\');
              bVar10 = true;
              while( true ) {
                while (cVar8 == '\\') {
                  if (!bVar10) {
                    bVar10 = true;
                    if (uVar6 + 1 < 0x3085) {
                      param_3[uVar6] = 0x5c;
                    }
                    goto LAB_10005f04;
                  }
                  bVar10 = true;
                  cVar8 = *pcVar9;
                  pcVar9 = pcVar9 + 1;
                }
                if (cVar8 == '\0') break;
                bVar10 = false;
                if (uVar6 + 1 < 0x3085) {
                  param_3[uVar6] = cVar8;
                }
LAB_10005f04:
                uVar6 = uVar6 + 1;
                cVar8 = *pcVar9;
                pcVar9 = pcVar9 + 1;
              }
            }
            uVar5 = 0x3084;
            if (uVar6 < 0x3084) {
              uVar5 = uVar6;
            }
            param_3[uVar5] = 0;
          }
        }
      }
    }
  }
  return;
}

#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_40010a20
#undef Ram40010800
#undef Ram40010804
#undef Ram40010808
#undef Ram40010a20
#undef UINT_400108bc
#undef local_98

#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef Ram40010800
#define Ram40010800 (*(uint32_t *)(0x40010800U))
#undef Ram40010804
#define Ram40010804 (*(uint32_t *)(0x40010804U))
#undef Ram40010808
#define Ram40010808 (*(uint32_t *)(0x40010808U))
#undef UINT_40010850
#define UINT_40010850 (*(uint *)(0x40010850U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005f60
 */

void recovered_10005f60(void *in_r0)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  code *UNRECOVERED_JUMPTABLE;
  bool bVar3;

  iVar2 = Ram40010800;
  if (iVar2 != 0x50414d57) {
    return;
  }
  iVar2 = Ram40010804;
  if (iVar2 != 0) {
    uVar1 = Ram40010808;
    bVar3 = 0xb < uVar1;
    if (bVar3) {
      uVar1 = Ram40010808;
    }
    if ((bVar3 && 0x53 < uVar1) &&
       (UNRECOVERED_JUMPTABLE = (code *)UINT_40010850, UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x10005fac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(in_r0);
      return;
    }
  }
  return;
}

#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef Ram40010800
#undef Ram40010804
#undef Ram40010808
#undef UINT_40010850

#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef Ram40010800
#define Ram40010800 (*(uint32_t *)(0x40010800U))
#undef Ram40010804
#define Ram40010804 (*(uint32_t *)(0x40010804U))
#undef Ram40010808
#define Ram40010808 (*(uint32_t *)(0x40010808U))
#undef UINT_40010854
#define UINT_40010854 (*(uint *)(0x40010854U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005fb0
 */

undefined4 recovered_10005fb0(void *in_r0,ulong in_r1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  code *UNRECOVERED_JUMPTABLE;
  void *pvVar3;
  bool bVar4;

  iVar2 = Ram40010800;
  if ((iVar2 == 0x50414d57) && (iVar2 = Ram40010804, iVar2 != 0)) {
    uVar1 = Ram40010808;
    bVar4 = 0xb < uVar1;
    if (bVar4) {
      uVar1 = Ram40010808;
    }
    if ((bVar4 && 0x57 < uVar1) &&
       (UNRECOVERED_JUMPTABLE = (code *)UINT_40010854, UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x10006000. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pvVar3 = (*UNRECOVERED_JUMPTABLE)(in_r0,in_r1);
      return pvVar3;
    }
  }
  return 0;
}

#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef Ram40010800
#undef Ram40010804
#undef Ram40010808
#undef UINT_40010854

#undef DAT_10007e2a
#define DAT_10007e2a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1d2U)))
#undef DAT_10007ea7
#define DAT_10007ea7 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x24fU)))
#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_40010a20
#define DAT_40010a20 (*(uint8_t *)(0x40010a20U))
#undef Ram40010800
#define Ram40010800 (*(uint32_t *)(0x40010800U))
#undef Ram40010804
#define Ram40010804 (*(uint32_t *)(0x40010804U))
#undef Ram40010808
#define Ram40010808 (*(uint32_t *)(0x40010808U))
#undef Ram40010a20
#define Ram40010a20 (*(uint32_t *)(0x40010a20U))
#define local_124 (*(char (*)[292])(pf_stack_frame + 28))
#define local_a4 (*(byte (*)[164])(pf_stack_frame + 156))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006004
 */

bool recovered_10006004(char *param_1,uint *param_2)

{
  unsigned char pf_stack_frame[352] __attribute__((aligned(16))) = {0};

  code *pcVar1;
  bool bVar2;
  uint *arg0;
  char cVar3;
  int iVar4;
  byte bVar5;
  char *pcVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  bool bVar12;

  bVar2 = param_1 != (char *)0x0 && param_2 != (uint *)0x0;
  if (param_1 == (char *)0x0 || param_2 == (uint *)0x0) {
    return bVar2;
  }
  uVar10 = 0xffffffff;
  arg0 = param_2 + 1;
  *param_2 = 0xffffffff;
  cVar3 = *param_1;
  if (cVar3 != '[') goto LAB_10006270;
  pcVar6 = local_124;
  iVar8 = 1;
  uVar7 = 0;
  while (cVar3 = param_1[iVar8], cVar3 != '\0' && cVar3 != ']') {
    iVar8 = iVar8 + 1;
    if (uVar7 + 1 < 0x80) {
      pcVar6[uVar7] = cVar3;
      uVar7 = uVar7 + 1;
    }
  }
  uVar10 = 0x7fffffff;
  pcVar6[uVar7] = '\0';
  uVar7 = (uint)(cVar3 == ']');
  if ((cVar3 == ']') && (iVar8 + 1U < 0x82)) {
    iVar4 = 0;
    if (local_124[0] == '[') {
      pcVar6 = local_124 + 1;
    }
    for (; (bVar5 = pcVar6[iVar4], bVar5 != 0 && (bVar5 != 0x5d && iVar4 != 0x7f));
        iVar4 = iVar4 + 1) {
      local_a4[iVar4] = bVar5;
    }
    local_a4[iVar4] = 0;
    if (local_124[0] == '[') {
      uVar10 = 0x7fffffff;
      if (bVar5 != 0x5d) goto LAB_10006258;
      bVar5 = local_124[iVar4 + 2];
    }
    uVar10 = 0x7fffffff;
    if ((bVar5 == 0) && (uVar10 = 0x7fffffff, local_a4[0] != 0)) {
      iVar11 = 0;
      iVar4 = 1;
      uVar9 = 1;
      do {
        if (iVar4 == 0x80) goto LAB_10006258;
        if (local_a4[0] == 0x5c) {
          if (iVar11 == 0) goto LAB_10006258;
          uVar9 = uVar9 + 1;
          iVar11 = 0;
          if (6 < uVar9) goto LAB_10006258;
        }
        else {
          bVar12 = 9 < (byte)(local_a4[0] - 0x30U);
          bVar5 = local_a4[0];
          if (bVar12) {
            bVar5 = (local_a4[0] & 0xdf) + 0xbf;
          }
          if ((bVar12 && 0x19 < bVar5) && (local_a4[0] != 0x5f && local_a4[0] != 0x2d))
          goto LAB_10006258;
          iVar11 = iVar11 + 1;
        }
        local_a4[0] = local_a4[iVar4];
        iVar4 = iVar4 + 1;
      } while (local_a4[0] != 0);
      if ((((iVar11 != 0) && (1 < uVar9)) && (iVar4 = Ram40010800, iVar4 == 0x50414d57)) &&
         (iVar4 = Ram40010804, iVar4 != 0)) {
        uVar9 = Ram40010808;
        bVar12 = 0xb < uVar9;
        if (bVar12) {
          uVar9 = Ram40010808;
        }
        if ((bVar12 && 0x223 < uVar9) && (iVar4 = Ram40010a20, iVar4 != 0)) {
          pcVar1 = (code *)Ram40010a20;
          uVar10 = (*pcVar1)(0xfffffffe,local_a4,0x80);
          if (0x7fffffff < uVar10) {
            uVar10 = 0x7fffffff;
          }
        }
      }
    }
  }
LAB_10006258:
  if (param_1[iVar8 + uVar7] == '\\') {
    uVar7 = uVar7 + 1;
  }
  param_1 = param_1 + iVar8 + uVar7;
  cVar3 = *param_1;
LAB_10006270:
  uVar7 = 0;
  if (cVar3 != '\0') {
    uVar9 = 0;
    do {
      uVar7 = uVar9 + 1;
      *(char *)((int)arg0 + uVar9) = cVar3;
      if (0x3083 < uVar7) break;
      cVar3 = param_1[uVar9 + 1];
      uVar9 = uVar7;
    } while (cVar3 != '\0');
  }
  *(char *)((int)arg0 + uVar7) = '\0';
  *param_2 = uVar10;
  if ((char)param_2[1] == '\0') {
    thunk_snprintf((char *)arg0,0x3085,&DAT_10007e2a,&DAT_10007ea7);
  }
  return bVar2;
}

#undef DAT_10007e2a
#undef DAT_10007ea7
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_40010a20
#undef Ram40010800
#undef Ram40010804
#undef Ram40010808
#undef Ram40010a20
#undef local_124
#undef local_a4

#undef DAT_10007e2a
#define DAT_10007e2a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1d2U)))
#undef str_10007eaa
#define str_10007eaa (*(char (*)[1])(((uintptr_t)pf_module_state + 0x252U)))
#undef str_10007eb7
#define str_10007eb7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x25fU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100062f0
 */

void recovered_100062f0(int param_1,int param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  char *arg3;

  thunk_snprintf((char *)(param_1 + 0x3415),0x3085,&DAT_10007e2a,(void *)(param_1 + 0x390));
  uVar1 = thunk_strlen((char *)(param_1 + 0x3415));
  *(ulong *)(param_1 + 0x649c) = uVar1;
  *(undefined4 *)(param_1 + 0x64a0) = 0;
  arg3 = str_10007eb7;
  if (param_2 != 0) {
    arg3 = str_10007eaa;
  }
  *(char *)(param_1 + 0x6539) = (char)param_2;
  *(undefined1 *)(param_1 + 0x6538) = 1;
  thunk_snprintf((char *)(param_1 + 0x64a4),0x80,&DAT_10007e2a,arg3);
  iVar4 = *(int *)(param_1 + 4);
  iVar3 = *(int *)(param_1 + 0x374);
  iVar2 = iVar4;
  if (iVar4 < 0xa3) {
    iVar2 = 0xa2;
  }
  iVar2 = iVar2 + -0x5a;
  if (iVar4 == 0) {
    iVar2 = 0x2c6;
  }
  if (iVar3 < 1) {
    iVar3 = 6;
  }
  iVar3 = recovered_10001e70(iVar2,iVar3);
  uVar5 = *(ulong *)(param_1 + 0x649c);
  uVar1 = *(uint *)(param_1 + 0x64a0);
  iVar2 = 1;
  if (1 < iVar3) {
    iVar2 = iVar3;
  }
  if ((int)uVar1 <= (int)uVar5) {
    if ((int)uVar5 < (int)(uVar1 + iVar2)) goto LAB_100063f4;
    uVar5 = (uVar5 - iVar2) + 1;
  }
  *(ulong *)(param_1 + 0x64a0) = uVar5;
  uVar1 = uVar5;
LAB_100063f4:
  if (0x7fffffff < uVar1) {
    *(undefined4 *)(param_1 + 0x64a0) = 0;
  }
  return;
}

#undef DAT_10007e2a
#undef str_10007eaa
#undef str_10007eb7

#undef DAT_10007e2a
#define DAT_10007e2a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1d2U)))
#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef Ram40010800
#define Ram40010800 (*(uint32_t *)(0x40010800U))
#undef Ram40010804
#define Ram40010804 (*(uint32_t *)(0x40010804U))
#undef Ram40010808
#define Ram40010808 (*(uint32_t *)(0x40010808U))
#undef UINT_40010838
#define UINT_40010838 (*(uint *)(0x40010838U))
#undef UINT_400108d0
#define UINT_400108d0 (*(uint *)(0x400108d0U))
#undef str_10007ec1
#define str_10007ec1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x269U)))
#undef str_10007ecd
#define str_10007ecd (*(char (*)[1])(((uintptr_t)pf_module_state + 0x275U)))
#undef str_10007edd
#define str_10007edd (*(char (*)[1])(((uintptr_t)pf_module_state + 0x285U)))
#define local_3128 (*(uint *)(pf_stack_frame + 24))
#define acStack_3124 (*(char (*)[12580])(pf_stack_frame + 28))
#define acStack_9c (*(char (*)[156])(pf_stack_frame + 12452))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006408
 */

undefined4 recovered_10006408(int param_1)

{
  unsigned char pf_stack_frame[12640] __attribute__((aligned(16))) = {0};

  char cVar1;
  int iVar2;
  code *pcVar3;
  uint uVar4;
  char *arg0;
  char *unaff_r5;
  bool bVar5;
  bool bVar6;

  bVar5 = *(int *)(param_1 + 0x37c) != 0;
  cVar1 = '\0';
  if (bVar5) {
    unaff_r5 = (char *)(param_1 + 0x390);
    cVar1 = *unaff_r5;
  }
  if (!bVar5 || cVar1 == '\0') {
    arg0 = str_10007ec1;
    goto override_prt_1000652c_945f3014;
  }
  bVar5 = recovered_10006004(unaff_r5,&local_3128);
  if (bVar5) {
    iVar2 = Ram40010800;
    if ((iVar2 == 0x50414d57) && (iVar2 = Ram40010804, iVar2 != 0)) {
      uVar4 = Ram40010808;
      bVar6 = 0xb < uVar4;
      bVar5 = uVar4 == 0xc;
      if (bVar6) {
        uVar4 = Ram40010808;
        bVar5 = uVar4 == 0xd3;
      }
      if ((!bVar6 || uVar4 < 0xd3) || bVar5) goto LAB_100064c4;
      pcVar3 = (code *)UINT_400108d0;
      if (pcVar3 == (code *)0x0) goto LAB_100064f0;
      uVar4 = (*pcVar3)(local_3128,acStack_3124,*(void **)(param_1 + 0x37c),*(uint *)(param_1 + 900)
                       );
LAB_10006574:
      if (uVar4 != 0) {
        *(undefined1 *)(param_1 + 0x653a) = 0;
        recovered_10005cc4(local_3128,acStack_3124,unaff_r5);
        thunk_snprintf(acStack_9c,0x80,str_10007edd,unaff_r5);
        thunk_snprintf((char *)(param_1 + 0x64a4),0x80,&DAT_10007e2a,acStack_9c);
        return 1;
      }
    }
    else {
LAB_100064c4:
      iVar2 = Ram40010800;
      if ((iVar2 == 0x50414d57) && (iVar2 = Ram40010804, iVar2 != 0)) {
        uVar4 = Ram40010808;
        bVar5 = 0xb < uVar4;
        if (bVar5) {
          uVar4 = Ram40010808;
        }
        if ((bVar5 && 0x3b < uVar4) && (pcVar3 = (code *)UINT_40010838, pcVar3 != (code *)0x0)) {
          uVar4 = (*pcVar3)(acStack_3124,*(void **)(param_1 + 0x37c),*(uint *)(param_1 + 900));
          goto LAB_10006574;
        }
      }
    }
  }
LAB_100064f0:
  arg0 = acStack_9c;
  thunk_snprintf(arg0,0x80,str_10007ecd,unaff_r5);
override_prt_1000652c_945f3014:
  thunk_snprintf((char *)(param_1 + 0x64a4),0x80,&DAT_10007e2a,arg0);
  return 0;
}

#undef DAT_10007e2a
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef Ram40010800
#undef Ram40010804
#undef Ram40010808
#undef UINT_40010838
#undef UINT_400108d0
#undef str_10007ec1
#undef str_10007ecd
#undef str_10007edd
#undef local_3128
#undef acStack_3124
#undef acStack_9c

#undef DAT_10007e2a
#define DAT_10007e2a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1d2U)))
#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef Ram40010800
#define Ram40010800 (*(uint32_t *)(0x40010800U))
#undef Ram40010804
#define Ram40010804 (*(uint32_t *)(0x40010804U))
#undef Ram40010808
#define Ram40010808 (*(uint32_t *)(0x40010808U))
#undef UINT_40010980
#define UINT_40010980 (*(uint *)(0x40010980U))
#undef str_10007ee6
#define str_10007ee6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x28eU)))
#undef str_10007ef4
#define str_10007ef4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x29cU)))
#undef str_10007efd
#define str_10007efd (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2a5U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100065e0
 */

uint recovered_100065e0(int param_1,undefined4 param_2,int param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  code *pcVar1;
  uint uVar2;
  uint extraout_r1 = 0;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;

  if (param_1 != 0) {
    param_3 = *(int *)(param_1 + 0x37c);
  }
  if (param_1 == 0 || param_3 == 0) {
    return 0;
  }
  uVar2 = *(uint *)(param_1 + 900);
  uVar7 = *(uint *)(param_1 + 0x38c);
  uVar4 = *(uint *)(param_1 + 0x388);
  if (uVar2 <= *(uint *)(param_1 + 0x388)) {
    uVar4 = uVar2;
  }
  if (uVar7 < uVar2) {
    uVar2 = uVar7;
  }
  if (uVar2 != uVar4) {
    uVar6 = uVar4;
    uVar5 = uVar2;
    if (uVar7 < uVar4) {
      uVar6 = uVar2;
      uVar5 = uVar4;
    }
    if (uVar2 < uVar4) {
      uVar2 = uVar4;
    }
    uVar4 = uVar2 - uVar6;
    iVar3 = Ram40010800;
    if (uVar2 < uVar6) {
      uVar4 = 0;
    }
    if ((iVar3 == 0x50414d57) && (iVar3 = Ram40010804, iVar3 != 0)) {
      uVar2 = Ram40010808;
      bVar8 = 0xb < uVar2;
      if (bVar8) {
        uVar2 = Ram40010808;
      }
      if (((bVar8 && 0x183 < uVar2) && (pcVar1 = (code *)UINT_40010980, pcVar1 != (code *)0x0)) &&
         (uVar2 = (*pcVar1)((char *)(param_3 + uVar6),uVar4), uVar2 != 0)) {
        thunk_snprintf((char *)(param_1 + 0x64a4),0x80,&DAT_10007e2a,str_10007ee6);
        if ((uVar5 <= uVar6) || (iVar3 = *(int *)(param_1 + 0x37c), iVar3 == 0)) {
          return 0;
        }
        uVar2 = *(uint *)(param_1 + 900);
        if (uVar2 < uVar6) {
          return 0;
        }
        if (uVar2 < uVar5) {
          uVar5 = uVar2;
        }
        if (uVar6 < uVar5) {
          thunk_memmove((void *)(iVar3 + uVar6),(void *)(iVar3 + uVar5),(uVar2 - uVar5) + 1);
          *(undefined1 *)(param_1 + 0x653a) = 1;
          *(uint *)(param_1 + 0x38c) = uVar6;
          *(uint *)(param_1 + 0x388) = uVar6;
          *(uint *)(param_1 + 900) = (uVar6 - uVar5) + *(int *)(param_1 + 900);
          return 1;
        }
        return 0;
      }
    }
    thunk_snprintf((char *)(param_1 + 0x64a4),0x80,&DAT_10007e2a,str_10007efd);
    return 0;
  }
  recovered_100068c4(param_1);
  iVar3 = *(int *)(param_1 + 0x37c);
  uVar4 = *(uint *)(param_1 + 900);
  uVar2 = extraout_r1;
  if (iVar3 == 0) {
    uVar7 = 0;
    uVar5 = 0;
LAB_10006750:
    if (uVar5 < uVar4) {
      if (*(char *)(iVar3 + uVar5) == '\n') {
        uVar5 = uVar5 + 1;
      }
      goto LAB_10006778;
    }
  }
  else {
    uVar7 = *(uint *)(param_1 + 0x388);
    if (uVar4 <= *(uint *)(param_1 + 0x388)) {
      uVar7 = uVar4;
    }
    if (uVar7 != 0) {
      do {
        uVar2 = (uint)*(byte *)(iVar3 + -1 + uVar7);
        if (uVar2 == 10) {
          uVar5 = 0;
          if (uVar7 <= uVar4) goto LAB_10006678;
          goto LAB_10006750;
        }
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
    uVar7 = 0;
LAB_10006678:
    uVar5 = uVar7;
    if (uVar4 <= uVar7) goto LAB_10006750;
    do {
      if (*(char *)(iVar3 + uVar5) == '\n') goto LAB_10006750;
      uVar5 = uVar5 + 1;
    } while (uVar4 != uVar5);
    uVar5 = uVar4;
  }
  if (uVar4 == 0) {
    uVar2 = 0;
  }
  if (uVar4 == 0 && uVar5 == uVar7) {
    return uVar2;
  }
LAB_10006778:
  thunk_memmove((void *)(iVar3 + uVar7),(void *)(iVar3 + uVar5),(uVar4 - uVar5) + 1);
  *(undefined1 *)(param_1 + 0x653a) = 1;
  uVar2 = *(int *)(param_1 + 900) + (uVar7 - uVar5);
  *(uint *)(param_1 + 900) = uVar2;
  if (uVar7 < uVar2) {
    uVar2 = uVar7;
  }
  *(uint *)(param_1 + 0x38c) = uVar2;
  *(uint *)(param_1 + 0x388) = uVar2;
  thunk_snprintf((char *)(param_1 + 0x64a4),0x80,&DAT_10007e2a,str_10007ef4);
  return 1;
}

#undef DAT_10007e2a
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef Ram40010800
#undef Ram40010804
#undef Ram40010808
#undef UINT_40010980
#undef str_10007ee6
#undef str_10007ef4
#undef str_10007efd

#undef DAT_10007e2a
#define DAT_10007e2a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1d2U)))
#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef Ram40010800
#define Ram40010800 (*(uint32_t *)(0x40010800U))
#undef Ram40010804
#define Ram40010804 (*(uint32_t *)(0x40010804U))
#undef Ram40010808
#define Ram40010808 (*(uint32_t *)(0x40010808U))
#undef UINT_40010980
#define UINT_40010980 (*(uint *)(0x40010980U))
#undef str_10007efd
#define str_10007efd (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2a5U)))
#undef str_10007f09
#define str_10007f09 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2b1U)))
#undef str_10007f1a
#define str_10007f1a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2c2U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100068c4
 */

bool recovered_100068c4(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  code *pcVar2;
  uint uVar3;
  char *pcVar4;
  uint uVar5;
  char *arg3;
  uint uVar6;
  uint uVar7;
  int unaff_r9;
  bool bVar8;
  bool bVar9;

  if (param_1 != 0) {
    unaff_r9 = *(int *)(param_1 + 0x37c);
  }
  if (param_1 == 0 || unaff_r9 == 0) {
    return false;
  }
  uVar3 = *(uint *)(param_1 + 900);
  uVar7 = *(uint *)(param_1 + 0x38c);
  uVar5 = *(uint *)(param_1 + 0x388);
  if (uVar3 <= *(uint *)(param_1 + 0x388)) {
    uVar5 = uVar3;
  }
  uVar6 = uVar3;
  if (uVar7 < uVar3) {
    uVar6 = uVar7;
  }
  if (uVar6 == uVar5) {
    if (uVar6 != 0) {
      do {
        if (*(char *)(unaff_r9 + -1 + uVar6) == '\n') {
          uVar5 = 0;
          if (uVar3 < uVar6) goto LAB_10006a08;
          goto LAB_10006934;
        }
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
    uVar6 = 0;
LAB_10006934:
    uVar5 = uVar6;
    if (uVar6 < uVar3) {
      do {
        if (*(char *)(unaff_r9 + uVar5) == '\n') goto LAB_10006a08;
        uVar5 = uVar5 + 1;
      } while (uVar3 != uVar5);
      uVar5 = uVar3;
    }
LAB_10006a08:
    bVar8 = false;
    if (uVar3 < uVar6) {
      return false;
    }
    if (uVar3 < uVar5) {
      uVar5 = uVar3;
    }
    if (uVar5 <= uVar6) {
      uVar5 = uVar6;
    }
    iVar1 = Ram40010800;
    uVar3 = uVar5 - uVar6;
    if (uVar5 < uVar6) {
      uVar3 = 0;
    }
    arg3 = str_10007efd;
    if ((iVar1 != 0x50414d57) || (iVar1 = Ram40010804, iVar1 == 0)) goto LAB_10006abc;
    uVar5 = Ram40010808;
    bVar9 = uVar5 < 0xc;
    if (!bVar9) {
      uVar5 = Ram40010808;
    }
    if ((bVar9 || uVar5 < 0x184) || (pcVar2 = (code *)UINT_40010980, pcVar2 == (code *)0x0))
    goto LAB_10006abc;
    uVar5 = (*pcVar2)((char *)(unaff_r9 + uVar6),uVar3);
    pcVar4 = str_10007f1a;
  }
  else {
    uVar3 = uVar5;
    if (uVar7 < uVar5) {
      uVar3 = uVar6;
    }
    if (uVar6 < uVar5) {
      uVar6 = uVar5;
    }
    uVar5 = uVar6 - uVar3;
    iVar1 = Ram40010800;
    bVar8 = false;
    arg3 = str_10007efd;
    if (uVar6 < uVar3) {
      uVar5 = 0;
    }
    if ((iVar1 != 0x50414d57) || (iVar1 = Ram40010804, iVar1 == 0)) goto LAB_10006abc;
    uVar7 = Ram40010808;
    bVar9 = uVar7 < 0xc;
    if (!bVar9) {
      uVar7 = Ram40010808;
    }
    if ((bVar9 || uVar7 < 0x184) || (pcVar2 = (code *)UINT_40010980, pcVar2 == (code *)0x0))
    goto LAB_10006abc;
    uVar5 = (*pcVar2)((char *)(unaff_r9 + uVar3),uVar5);
    pcVar4 = str_10007f09;
  }
  bVar8 = uVar5 != 0;
  arg3 = str_10007efd;
  if (bVar8) {
    arg3 = pcVar4;
  }
LAB_10006abc:
  thunk_snprintf((char *)(param_1 + 0x64a4),0x80,&DAT_10007e2a,arg3);
  return bVar8;
}

#undef DAT_10007e2a
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef Ram40010800
#undef Ram40010804
#undef Ram40010808
#undef UINT_40010980
#undef str_10007efd
#undef str_10007f09
#undef str_10007f1a

#undef DAT_10007e2a
#define DAT_10007e2a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1d2U)))
#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef Ram40010800
#define Ram40010800 (*(uint32_t *)(0x40010800U))
#undef Ram40010804
#define Ram40010804 (*(uint32_t *)(0x40010804U))
#undef Ram40010808
#define Ram40010808 (*(uint32_t *)(0x40010808U))
#undef UINT_4001084c
#define UINT_4001084c (*(uint *)(0x4001084cU))
#undef UINT_40010850
#define UINT_40010850 (*(uint *)(0x40010850U))
#undef UINT_40010984
#define UINT_40010984 (*(uint *)(0x40010984U))
#undef UINT_40010988
#define UINT_40010988 (*(uint *)(0x40010988U))
#undef str_10007f26
#define str_10007f26 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2ceU)))
#undef str_10007f33
#define str_10007f33 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2dbU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006ae0
 */

undefined4 recovered_10006ae0(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  code *pcVar2;
  char *outText;
  int iVar3;
  uint uVar4;
  int extraout_r3 = 0;
  char *arg3;
  undefined4 uVar5;
  bool bVar6;

  iVar3 = Ram40010800;
  uVar4 = 0;
  if (iVar3 == 0x50414d57) {
    iVar3 = Ram40010804;
    uVar4 = 0;
    if (iVar3 != 0) {
      uVar1 = Ram40010808;
      uVar4 = 0;
      if (0xb < uVar1) {
        uVar1 = Ram40010808;
        uVar4 = 0;
        if (0x18b < uVar1) {
          pcVar2 = (code *)UINT_40010988;
          param_4 = 0;
          if (pcVar2 != (code *)0x0) {
            uVar4 = (*pcVar2)();
            param_4 = extraout_r3;
          }
        }
      }
    }
  }
  if (param_1 != 0) {
    param_4 = *(int *)(param_1 + 0x37c);
  }
  if (param_1 == 0 || param_4 == 0) {
    return 0;
  }
  if (uVar4 != 0) {
    param_4 = *(int *)(param_1 + 0x380);
  }
  if (uVar4 == 0 || param_4 == 0) {
    return 0;
  }
  arg3 = str_10007f26;
  if (((0xfffffffe < uVar4) || (iVar3 = Ram40010800, iVar3 != 0x50414d57)) ||
     (iVar3 = Ram40010804, iVar3 == 0)) {
    uVar5 = 0;
    goto LAB_10006cc4;
  }
  uVar1 = Ram40010808;
  uVar5 = 0;
  bVar6 = 0xb < uVar1;
  if (bVar6) {
    uVar1 = Ram40010808;
  }
  if ((!bVar6 || uVar1 < 0x50) || (pcVar2 = (code *)UINT_4001084c, pcVar2 == (code *)0x0))
  goto LAB_10006cc4;
  outText = (*pcVar2)(uVar4 + 1);
  if (outText == (char *)0x0) {
    arg3 = str_10007f26;
    goto LAB_10006cc4;
  }
  iVar3 = Ram40010800;
  if (((iVar3 == 0x50414d57) && (iVar3 = Ram40010804, iVar3 != 0)) &&
     ((uVar1 = Ram40010808, 0xb < uVar1 && (uVar1 = Ram40010808, 0x30 < uVar1 >> 3)))) {
    pcVar2 = (code *)UINT_40010984;
    if (((pcVar2 == (code *)0x0) || (uVar4 = (*pcVar2)(outText,uVar4 + 1), uVar4 == 0)) ||
       (iVar3 = recovered_10006d64(param_1,(int)outText,uVar4), iVar3 == 0)) goto LAB_10006cfc;
    uVar5 = 1;
    iVar3 = Ram40010800;
    arg3 = str_10007f33;
    if (((iVar3 != 0x50414d57) || (iVar3 = Ram40010804, iVar3 == 0)) ||
       ((uVar4 = Ram40010808, uVar4 < 0xc || (uVar4 = Ram40010808, uVar4 < 0x54))))
    goto LAB_10006cc4;
  }
  else {
    *outText = '\0';
LAB_10006cfc:
    arg3 = str_10007f26;
    iVar3 = Ram40010800;
    if ((iVar3 != 0x50414d57) || (iVar3 = Ram40010804, iVar3 == 0)) goto LAB_10006cc4;
    uVar4 = Ram40010808;
    bVar6 = 0xb < uVar4;
    if (bVar6) {
      uVar4 = Ram40010808;
    }
    if (!bVar6 || uVar4 < 0x54) goto LAB_10006cc4;
    arg3 = str_10007f26;
  }
  pcVar2 = (code *)UINT_40010850;
  if (pcVar2 != (code *)0x0) {
    (*pcVar2)(outText);
  }
LAB_10006cc4:
  thunk_snprintf((char *)(param_1 + 0x64a4),0x80,&DAT_10007e2a,arg3);
  return uVar5;
}

#undef DAT_10007e2a
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef Ram40010800
#undef Ram40010804
#undef Ram40010808
#undef UINT_4001084c
#undef UINT_40010850
#undef UINT_40010984
#undef UINT_40010988
#undef str_10007f26
#undef str_10007f33

#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef Ram40010800
#define Ram40010800 (*(uint32_t *)(0x40010800U))
#undef Ram40010804
#define Ram40010804 (*(uint32_t *)(0x40010804U))
#undef Ram40010808
#define Ram40010808 (*(uint32_t *)(0x40010808U))
#undef UINT_40010854
#define UINT_40010854 (*(uint *)(0x40010854U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006d64
 */

undefined4 recovered_10006d64(int param_1,int param_2,uint param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  code *pcVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  void *unaff_r9;
  int iVar9;
  uint uVar10;
  uint in_r12;
  bool bVar11;

  uVar3 = 0;
  if (param_1 != 0) {
    if (param_2 != 0) {
      unaff_r9 = *(void **)(param_1 + 0x37c);
    }
    if (param_2 != 0 && unaff_r9 != (void *)0x0) {
      uVar4 = *(uint *)(param_1 + 900);
      uVar5 = *(uint *)(param_1 + 0x38c);
      uVar7 = uVar4;
      if (uVar5 < uVar4) {
        uVar7 = uVar5;
      }
      uVar6 = *(uint *)(param_1 + 0x388);
      if (uVar4 <= *(uint *)(param_1 + 0x388)) {
        uVar6 = uVar4;
      }
      uVar8 = uVar7;
      uVar10 = uVar6;
      if (uVar5 < uVar6) {
        uVar8 = uVar6;
        uVar10 = uVar7;
      }
      if (uVar7 != uVar6) {
        iVar9 = uVar8 - uVar10;
      }
      else {
        uVar8 = 0;
        iVar9 = 0;
      }
      uVar4 = uVar4 - iVar9;
      if (uVar7 == uVar6) {
        uVar10 = 0;
      }
      bVar11 = CARRY4(uVar4,param_3);
      if (!bVar11) {
        uVar4 = uVar4 + param_3;
        in_r12 = uVar4 + 1;
      }
      if (!bVar11 && uVar4 != 0xffffffff) {
        uVar7 = *(uint *)(param_1 + 0x380);
        if (uVar7 <= uVar4) {
          if (uVar7 == 0) {
            uVar7 = 0x400;
          }
          uVar5 = uVar7;
          if (uVar7 <= uVar4) {
            do {
              uVar7 = in_r12;
              if (-1 < (int)uVar5) {
                uVar7 = uVar5 << 1;
              }
              uVar5 = uVar7;
            } while (uVar7 <= uVar4);
          }
          iVar1 = Ram40010800;
          if (iVar1 != 0x50414d57) {
            return 0;
          }
          iVar1 = Ram40010804;
          if (iVar1 == 0) {
            return 0;
          }
          uVar4 = Ram40010808;
          bVar11 = uVar4 < 0xc;
          if (!bVar11) {
            uVar4 = Ram40010808;
          }
          if (bVar11 || uVar4 < 0x58) {
            return 0;
          }
          pcVar2 = (code *)UINT_40010854;
          if (pcVar2 == (code *)0x0) {
            return 0;
          }
          unaff_r9 = (*pcVar2)(unaff_r9,uVar7);
          if (unaff_r9 == (void *)0x0) {
            return 0;
          }
          *(uint *)(param_1 + 0x380) = uVar7;
          *(void **)(param_1 + 0x37c) = unaff_r9;
        }
        if (iVar9 == 0) {
          iVar9 = *(int *)(param_1 + 900);
          uVar10 = *(uint *)(param_1 + 0x388);
        }
        else {
          thunk_memmove((void *)((int)unaff_r9 + uVar10),(void *)((int)unaff_r9 + uVar8),
                             (*(int *)(param_1 + 900) - uVar8) + 1);
          unaff_r9 = *(void **)(param_1 + 0x37c);
          iVar9 = *(int *)(param_1 + 900) - iVar9;
          *(uint *)(param_1 + 0x38c) = uVar10;
          *(uint *)(param_1 + 0x388) = uVar10;
          *(int *)(param_1 + 900) = iVar9;
        }
        thunk_memmove((void *)((int)((int)unaff_r9 + uVar10) + param_3),
                           (void *)((int)unaff_r9 + uVar10),(iVar9 - uVar10) + 1);
        thunk_memcpy((void *)(*(int *)(param_1 + 0x37c) + *(int *)(param_1 + 0x388)),
                           (void *)param_2,param_3);
        uVar3 = 1;
        *(undefined1 *)(param_1 + 0x653a) = 1;
        iVar9 = *(int *)(param_1 + 0x388) + param_3;
        *(int *)(param_1 + 0x388) = iVar9;
        *(uint *)(param_1 + 900) = *(int *)(param_1 + 900) + param_3;
        *(int *)(param_1 + 0x38c) = iVar9;
      }
    }
  }
  return uVar3;
}

#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef Ram40010800
#undef Ram40010804
#undef Ram40010808
#undef UINT_40010854

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006f80
 */

undefined4 recovered_10006f80(int param_1,int param_2,uint param_3,int param_4,int param_5)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  bool bVar12;
  bool bVar13;

  iVar1 = *(int *)(param_1 + 8);
  iVar4 = *(int *)(param_1 + 4) + -0x14;
  if (*(int *)(param_1 + 4) == 0) {
    iVar4 = 0x30c;
  }
  iVar7 = *(int *)(param_1 + 0x38c);
  iVar10 = *(int *)(param_1 + 0x388);
  iVar8 = iVar1;
  if (iVar1 < 0xad) {
    iVar8 = 0xac;
  }
  if (iVar1 == 0) {
    iVar8 = 0x208;
  }
  if (param_5 == 0) {
    if (param_2 < 0x41) {
      return 0;
    }
    bVar13 = SBORROW4(param_3,0x40);
    iVar1 = param_3 - 0x40;
    bVar12 = param_3 == 0x40;
    if (0x3f < (int)param_3) {
      bVar13 = SBORROW4(iVar4,param_2);
      iVar1 = iVar4 - param_2;
      bVar12 = iVar4 == param_2;
    }
    if (bVar12 || iVar1 < 0 != bVar13) {
      return 0;
    }
    if (iVar8 - 0x28U <= param_3) {
      return 0;
    }
  }
  else {
    uVar2 = iVar8 - 0x29U;
    if (param_3 < iVar8 - 0x29U) {
      uVar2 = param_3;
    }
    if ((int)param_3 < 0x40) {
      uVar2 = 0x40;
    }
    iVar1 = iVar4 + -1;
    if (param_2 < iVar4 + -1) {
      iVar1 = param_2;
    }
    if (param_2 < 0x41) {
      iVar1 = 0x41;
    }
    param_3 = uVar2;
    param_2 = iVar1;
  }
  iVar1 = 0xd;
  if (0 < *(int *)(param_1 + 0x378)) {
    iVar1 = *(int *)(param_1 + 0x378) + 3;
  }
  iVar4 = *(int *)(param_1 + 0x374);
  iVar8 = *(int *)(param_1 + 0x37c);
  uVar2 = recovered_10001e70(param_3 - 0x40,iVar1);
  uVar5 = *(uint *)(param_1 + 0x6530);
  uVar11 = uVar5 + uVar2;
  uVar9 = *(uint *)(param_1 + 0x6534);
  iVar1 = ((int)uVar5 >> 0x1f) + ((int)uVar2 >> 0x1f) + (uint)CARRY4(uVar5,uVar2);
  if ((int)(uint)(uVar11 < 0x7fffffff) <= iVar1) {
    uVar11 = 0x7fffffff;
    iVar1 = 0;
  }
  if (iVar1 < 0) {
    uVar11 = 0;
  }
  if (iVar4 < 1) {
    iVar4 = 6;
  }
  uVar2 = recovered_10001e70(param_2 + -0x41,iVar4);
  uVar2 = uVar2 & ~((int)uVar2 >> 0x1f);
  uVar5 = uVar2 + uVar9;
  iVar4 = ((int)uVar9 >> 0x1f) + (uint)CARRY4(uVar2,uVar9);
  iVar1 = 0;
  uVar2 = 0x7fffffff;
  if (iVar4 < (int)(uint)(uVar5 < 0x7fffffff)) {
    iVar1 = iVar4;
    uVar2 = uVar5;
  }
  if (iVar1 < 0) {
    uVar2 = 0;
  }
  if (iVar8 == 0 || uVar11 == 0) {
    uVar11 = 0;
    uVar9 = 0;
    if (iVar8 != 0) {
      uVar5 = *(uint *)(param_1 + 900);
LAB_1000711c:
      uVar9 = uVar11;
      if (uVar11 < uVar5) {
        do {
          if (*(char *)(iVar8 + uVar9) == '\n') goto LAB_100071b8;
          uVar9 = uVar9 + 1;
        } while (uVar5 != uVar9);
        uVar9 = uVar5;
      }
    }
  }
  else {
    uVar5 = *(uint *)(param_1 + 900);
    if (uVar5 == 0) {
      uVar11 = 0;
      uVar9 = 0;
    }
    else {
      uVar9 = 0;
      uVar6 = 0;
      do {
        bVar12 = *(char *)(iVar8 + uVar6) == '\n';
        if (bVar12) {
          uVar9 = uVar9 + 1;
        }
        if (bVar12 && uVar9 == uVar11) {
          uVar11 = uVar6 + 1;
          uVar9 = 0;
          if (uVar6 < uVar5) goto LAB_1000711c;
          goto LAB_100071b8;
        }
        uVar6 = uVar6 + 1;
      } while (uVar5 != uVar6);
      uVar9 = uVar5;
      uVar11 = uVar5;
    }
  }
LAB_100071b8:
  *(undefined1 *)(param_1 + 0x6538) = 0;
  uVar9 = uVar9 - uVar11;
  if (0x7ffffffe < uVar9) {
    uVar9 = 0x7fffffff;
  }
  if ((int)uVar2 < (int)uVar9) {
    uVar9 = uVar2;
  }
  *(uint *)(param_1 + 0x388) = uVar9 + uVar11;
  if (param_4 == 0) {
    *(uint *)(param_1 + 0x38c) = uVar9 + uVar11;
  }
  recovered_10004610(param_1);
  uVar3 = 1;
  if ((*(int *)(param_1 + 0x388) == iVar10) && (uVar3 = 0, *(int *)(param_1 + 0x38c) != iVar7)) {
    uVar3 = 1;
  }
  return uVar3;
}


#define local_2c (*(int *)(pf_stack_frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007220
 */

void recovered_10007220(undefined4 *param_1,int param_2,int param_3)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  char *pcVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;

  if (param_2 == 0) {
    uVar2 = 0x1a0;
    iVar5 = 1;
    local_2c = 0x17a;
    uVar4 = 0x20;
    iVar9 = 1;
    iVar8 = 10;
  }
  else {
    iVar7 = *(int *)(param_2 + 8);
    iVar5 = 1;
    pcVar6 = *(char **)(param_2 + 0x37c);
    iVar9 = iVar7;
    if (iVar7 < 0xad) {
      iVar9 = 0xac;
    }
    local_2c = iVar9 + -0x8e;
    if (iVar7 == 0) {
      local_2c = 0x17a;
    }
    if (pcVar6 != (char *)0x0) {
      param_3 = *(int *)(param_2 + 900);
    }
    if (pcVar6 != (char *)0x0 && param_3 != 0) {
      pcVar3 = pcVar6;
      do {
        param_3 = param_3 + -1;
        iVar5 = iVar5 + (uint)(*pcVar3 == '\n' && iVar5 != 0x7fffffff);
        pcVar3 = pcVar3 + 1;
      } while (param_3 != 0);
    }
    iVar8 = *(int *)(param_2 + 0x378);
    uVar2 = iVar9 - 0x68;
    if (iVar7 == 0) {
      uVar2 = 0x1a0;
    }
    if (iVar8 < 1) {
      uVar1 = uVar2 * 0x4ec4ec4f;
      uVar4 = uVar2 / 0xd;
    }
    else {
      uVar1 = recovered_10001de8(uVar2,iVar8 + 3);
      uVar4 = uVar1;
      if (uVar1 < 2) {
        uVar4 = 1;
      }
    }
    iVar9 = 1;
    if (pcVar6 != (char *)0x0) {
      uVar1 = *(uint *)(param_2 + 900);
    }
    if (pcVar6 != (char *)0x0 && uVar1 != 0) {
      do {
        uVar1 = uVar1 - 1;
        iVar9 = iVar9 + (uint)(*pcVar6 == '\n' && iVar9 != 0x7fffffff);
        pcVar6 = pcVar6 + 1;
      } while (uVar1 != 0);
    }
    if (iVar8 < 1) {
      iVar8 = 10;
    }
  }
  uVar2 = recovered_10001de8(uVar2,iVar8 + 3);
  iVar8 = 0;
  if (uVar2 < 2) {
    uVar2 = 1;
  }
  iVar7 = 0x4f;
  if ((int)uVar4 < iVar5) {
    uVar2 = iVar9 - uVar2;
    iVar5 = recovered_10001e70(local_2c * uVar4,iVar5);
    iVar8 = local_2c;
    if (iVar5 < local_2c) {
      iVar8 = iVar5;
    }
    if (iVar5 < 0x12) {
      iVar8 = 0x12;
    }
    if ((0 < (int)uVar2) && (iVar8 < local_2c)) {
      lVar10 = recovered_100020ac((longlong)*(int *)(param_2 + 0x6530) *
                                  (longlong)(local_2c - iVar8),
                                  (ulonglong)(uVar2 & ~((int)uVar2 >> 0x1f)));
      iVar7 = (int)lVar10 + 0x4f;
    }
  }
  param_1[3] = iVar8;
  param_1[2] = 0xc;
  param_1[1] = iVar7;
  *param_1 = 0xf;
  return;
}

#undef local_2c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000740c
 */

void recovered_1000740c(int param_1,undefined4 param_2,int param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;

  if (param_1 == 0) {
    return;
  }
  pcVar3 = *(char **)(param_1 + 0x37c);
  iVar7 = 1;
  if (pcVar3 != (char *)0x0) {
    param_3 = *(int *)(param_1 + 900);
  }
  if (pcVar3 != (char *)0x0 && param_3 != 0) {
    do {
      param_3 = param_3 + -1;
      iVar7 = iVar7 + (uint)(*pcVar3 == '\n' && iVar7 != 0x7fffffff);
      pcVar3 = pcVar3 + 1;
    } while (param_3 != 0);
  }
  uVar4 = 0xd;
  iVar6 = *(int *)(param_1 + 8);
  if (0 < *(int *)(param_1 + 0x378)) {
    uVar4 = *(int *)(param_1 + 0x378) + 3;
  }
  iVar1 = iVar6;
  if (iVar6 < 0xad) {
    iVar1 = 0xac;
  }
  uVar2 = iVar1 - 0x68;
  if (iVar6 == 0) {
    uVar2 = 0x1a0;
  }
  uVar2 = recovered_10001de8(uVar2,uVar4);
  uVar5 = *(uint *)(param_1 + 0x6530);
  uVar4 = 1;
  if (1 < uVar2) {
    uVar4 = uVar2;
  }
  uVar4 = iVar7 - uVar4 & ~((int)(iVar7 - uVar4) >> 0x1f);
  if ((int)uVar5 < (int)uVar4) {
    uVar4 = uVar5;
  }
  if ((int)uVar5 < 0) {
    uVar4 = 0;
  }
  *(uint *)(param_1 + 0x6530) = uVar4;
  if (0x7fffffff < *(uint *)(param_1 + 0x6534)) {
    *(undefined4 *)(param_1 + 0x6534) = 0;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100074e4
 */

undefined4 recovered_100074e4(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;

  if (param_1 != 0) {
    uVar7 = *(uint *)(param_1 + 900);
    uVar1 = *(uint *)(param_1 + 0x388);
    uVar3 = *(uint *)(param_1 + 0x38c);
    uVar5 = uVar7;
    if (uVar1 < uVar7) {
      uVar5 = uVar1;
    }
    uVar2 = uVar7;
    if (uVar3 < uVar7) {
      uVar2 = uVar3;
    }
    if (uVar2 == uVar5) {
      iVar4 = *(int *)(param_1 + 0x37c);
    }
    else {
      iVar4 = *(int *)(param_1 + 0x37c);
      uVar6 = uVar5;
      if (uVar3 < uVar5) {
        uVar6 = uVar2;
        uVar2 = uVar5;
      }
      if ((uVar6 < uVar2) && (iVar4 != 0)) {
        thunk_memmove((void *)(iVar4 + uVar6),(void *)(iVar4 + uVar2),(uVar7 - uVar2) + 1);
        *(uint *)(param_1 + 0x388) = uVar6;
        iVar4 = (uVar6 - uVar2) + *(int *)(param_1 + 900);
        goto LAB_100075ac;
      }
    }
    if ((iVar4 == 0 || uVar1 <= uVar7) && (iVar4 != 0 && uVar7 != uVar1)) {
      thunk_memmove((void *)(iVar4 + uVar1),(void *)((int)(iVar4 + uVar1) + 1),uVar7 - uVar1);
      uVar6 = *(uint *)(param_1 + 0x388);
      iVar4 = *(int *)(param_1 + 900) + -1;
LAB_100075ac:
      *(int *)(param_1 + 900) = iVar4;
      *(uint *)(param_1 + 0x38c) = uVar6;
      *(undefined1 *)(param_1 + 0x653a) = 1;
      return 1;
    }
  }
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100075c8
 */

void recovered_100075c8(int param_1,int param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;

  if (param_1 == 0) {
    return;
  }
  iVar4 = *(int *)(param_1 + 0x37c);
  uVar5 = *(uint *)(param_1 + 0x388);
  if (iVar4 == 0) {
    uVar1 = 0;
    uVar2 = 0;
  }
  else {
    uVar2 = *(uint *)(param_1 + 900);
    if (uVar5 < *(uint *)(param_1 + 900)) {
      uVar2 = uVar5;
    }
    uVar1 = 0;
    if (uVar2 != 0) {
      do {
        if (*(char *)(iVar4 + -1 + uVar2) == '\n') {
          uVar1 = uVar2;
          goto LAB_10007630;
        }
        uVar2 = uVar2 - 1;
      } while (uVar2 != 0);
      uVar1 = 0;
    }
LAB_10007630:
    uVar2 = *(uint *)(param_1 + 900);
    if (uVar5 < *(uint *)(param_1 + 900)) {
      uVar2 = uVar5;
    }
    for (; uVar2 != 0; uVar2 = uVar2 - 1) {
      if (*(char *)(iVar4 + -1 + uVar2) == '\n') {
        uVar3 = 0;
        if (uVar5 < uVar2) goto LAB_10007668;
        goto LAB_1000765c;
      }
    }
    uVar2 = 0;
  }
LAB_1000765c:
  uVar3 = uVar5 - uVar2;
  if (0x7ffffffe < uVar3) {
    uVar3 = 0x7fffffff;
  }
LAB_10007668:
  if (param_2 == 0) {
    uVar5 = *(uint *)(param_1 + 900);
    if (iVar4 != 0) {
      uVar2 = 0;
      if ((uVar5 < uVar1) || (uVar2 = uVar1, uVar5 <= uVar1)) {
LAB_10007740:
        if (uVar2 < uVar5) {
          uVar2 = uVar2 + 1;
          uVar1 = uVar2;
          if (uVar2 < uVar5) {
            do {
              if (*(char *)(iVar4 + uVar1) == '\n') goto LAB_10007788;
              uVar1 = uVar1 + 1;
            } while (uVar5 != uVar1);
            goto LAB_10007770;
          }
          goto LAB_10007788;
        }
      }
      else {
        do {
          uVar2 = uVar1;
          if (*(char *)(iVar4 + uVar1) == '\n') goto LAB_10007740;
          uVar1 = uVar1 + 1;
        } while (uVar5 != uVar1);
      }
      uVar1 = uVar5;
      goto LAB_100077a0;
    }
    uVar2 = 1;
    uVar1 = 0;
    if (uVar5 == 0) goto LAB_100077a0;
  }
  else {
    if (uVar1 == 0) {
      uVar1 = 0;
      goto LAB_100077a0;
    }
    do {
      uVar2 = uVar1;
      if (uVar2 - 1 == 0) {
        if (iVar4 == 0) {
          uVar2 = 0;
          uVar1 = 0;
          goto LAB_10007788;
        }
        break;
      }
      uVar1 = uVar2 - 1;
    } while (*(char *)(iVar4 + -2 + uVar2) != '\n');
    uVar2 = uVar2 - 1;
    uVar5 = *(uint *)(param_1 + 900);
    uVar1 = 0;
    if (uVar2 <= uVar5) {
      uVar1 = uVar2;
    }
    if (uVar2 < uVar5) {
      do {
        if (*(char *)(iVar4 + uVar1) == '\n') goto LAB_10007788;
        uVar1 = uVar1 + 1;
      } while (uVar5 != uVar1);
LAB_10007770:
      uVar1 = uVar5;
    }
  }
LAB_10007788:
  uVar1 = uVar1 - uVar2;
  if (0x7ffffffe < uVar1) {
    uVar1 = 0x7fffffff;
  }
  if ((int)uVar3 < (int)uVar1) {
    uVar1 = uVar3;
  }
  uVar1 = uVar1 + uVar2;
LAB_100077a0:
  *(uint *)(param_1 + 0x388) = uVar1;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100077ac
 */

void recovered_100077ac(int param_1,uint param_2,uint param_3,int param_4,int param_5,
                       undefined4 param_6)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;

  if (param_1 == 0) {
    uVar5 = 0x208;
    if ((int)param_3 < 0x208) {
      uVar5 = param_3;
    }
    uVar5 = uVar5 & ~((int)uVar5 >> 0x1f);
    uVar7 = 800;
    if ((int)param_2 < 800) {
      uVar7 = param_2;
    }
    uVar4 = 800;
    if ((int)(param_2 + param_4) < 800) {
      uVar4 = param_2 + param_4;
    }
    uVar6 = 0x208;
    uVar7 = uVar7 & ~((int)uVar7 >> 0x1f);
    uVar4 = uVar4 & ~((int)uVar4 >> 0x1f);
  }
  else {
    uVar7 = *(uint *)(param_1 + 4);
    uVar5 = param_2 + param_4;
    uVar6 = *(uint *)(param_1 + 8);
    if (uVar7 == 0) {
      uVar7 = 800;
    }
    uVar4 = uVar7;
    if ((int)uVar5 < (int)uVar7) {
      uVar4 = uVar5;
    }
    if ((int)uVar5 < 0) {
      uVar4 = 0;
    }
    if (uVar6 == 0) {
      uVar6 = 0x208;
    }
    uVar5 = uVar6;
    if ((int)param_3 < (int)uVar6) {
      uVar5 = param_3;
    }
    if ((int)param_3 < 0) {
      uVar5 = 0;
    }
    if ((int)param_2 < (int)uVar7) {
      uVar7 = param_2;
    }
    if ((int)param_2 < 0) {
      uVar7 = 0;
    }
  }
  uVar1 = param_3 + param_5;
  if ((int)uVar1 < (int)uVar6) {
    uVar6 = uVar1;
  }
  if ((int)uVar1 < 0) {
    uVar6 = 0;
  }
  if ((int)uVar5 < (int)uVar6) {
    do {
      if ((int)uVar7 < (int)uVar4) {
        uVar1 = uVar7;
        do {
          if (((param_1 != 0) && (-1 < (int)(uVar1 | uVar5))) && (*(int *)(param_1 + 0x370) != 0)) {
            iVar3 = *(int *)(param_1 + 4);
            iVar2 = iVar3;
            if (iVar3 == 0) {
              iVar2 = 800;
            }
            if ((int)uVar1 < iVar2) {
              iVar2 = *(int *)(param_1 + 8);
              if (iVar2 == 0) {
                iVar2 = 0x208;
              }
              if ((int)uVar5 < iVar2) {
                iVar2 = iVar3 << 2;
                if (iVar3 == 0) {
                  iVar2 = 0xc80;
                }
                if (*(int *)(param_1 + 0xc) != 0) {
                  iVar2 = *(int *)(param_1 + 0xc);
                }
                *(char *)(uVar5 * iVar2 + *(int *)(param_1 + 0x370) + uVar1 * 4) = (char)param_6;
                *(char *)(uVar5 * iVar2 + *(int *)(param_1 + 0x370) + uVar1 * 4 + 1) =
                     (char)((uint)param_6 >> 8);
                *(char *)(uVar5 * iVar2 + *(int *)(param_1 + 0x370) + uVar1 * 4 + 2) =
                     (char)((uint)param_6 >> 0x10);
                *(undefined1 *)(uVar5 * iVar2 + *(int *)(param_1 + 0x370) + uVar1 * 4 + 3) = 0xff;
              }
            }
          }
          uVar1 = uVar1 + 1;
        } while (uVar4 != uVar1);
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 != uVar6);
  }
  return;
}


#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef Ram40010800
#define Ram40010800 (*(uint32_t *)(0x40010800U))
#undef Ram40010804
#define Ram40010804 (*(uint32_t *)(0x40010804U))
#undef Ram40010808
#define Ram40010808 (*(uint32_t *)(0x40010808U))
#undef UINT_40010850
#define UINT_40010850 (*(uint *)(0x40010850U))
#undef UINT_40010978
#define UINT_40010978 (*(uint *)(0x40010978U))
#define local_44 (*(int *)(pf_stack_frame + 28))
#define local_38 (*(void * *)(pf_stack_frame + 40))
#define local_34 (*(int *)(pf_stack_frame + 44))
#define local_2c (*(uint *)(pf_stack_frame + 52))
#define local_28 (*(uint *)(pf_stack_frame + 56))
#define local_24 (*(int *)(pf_stack_frame + 60))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007950
 */

void recovered_10007950(int param_1,int param_2,int param_3,int param_4,int param_5,uint param_6)

{
  unsigned char pf_stack_frame[128] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  code *pcVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  char *pcVar10;
  bool bVar11;

  if ((param_4 != 0) && (0 < param_5)) {
    thunk_memset(&local_38,0,0x18);
    iVar1 = Ram40010800;
    if ((iVar1 == 0x50414d57) && (iVar1 = Ram40010804, iVar1 != 0)) {
      uVar5 = Ram40010808;
      bVar11 = 0xb < uVar5;
      if (bVar11) {
        uVar5 = Ram40010808;
      }
      if (((bVar11 && 0x17b < uVar5) && (pcVar4 = (code *)UINT_40010978, pcVar4 != (code *)0x0)) &&
         (uVar5 = (*pcVar4)((char *)param_4,param_5,1,
                            param_6 << 0x18 | ((param_6 & 0xff00) >> 8) << 0x10 |
                            ((param_6 & 0xff0000) >> 0x10) << 8 | (param_6 | 0xff000000) >> 0x18,
                            &local_38), uVar5 != 0)) {
        if ((local_34 == 0) && (local_38 != (void *)0x0)) {
          if (local_28 == 0) {
            local_34 = 0;
          }
          else {
            uVar7 = 0;
            iVar1 = param_2 * 4;
            uVar5 = local_2c;
            local_44 = param_3;
            do {
              if (uVar5 == 0) {
                uVar5 = 0;
              }
              else {
                uVar5 = 0;
                iVar8 = (int)local_38 + 3;
                do {
                  pcVar10 = (char *)(iVar8 + uVar7 * local_24);
                  if (((*pcVar10 != '\0' && param_1 != 0) &&
                      (-1 < (int)(param_2 + uVar5 | uVar7 + param_3))) &&
                     (*(int *)(param_1 + 0x370) != 0)) {
                    iVar9 = *(int *)(param_1 + 4);
                    iVar6 = iVar9;
                    if (iVar9 == 0) {
                      iVar6 = 800;
                    }
                    if ((int)(param_2 + uVar5) < iVar6) {
                      iVar6 = *(int *)(param_1 + 8);
                      if (iVar6 == 0) {
                        iVar6 = 0x208;
                      }
                      if ((int)(uVar7 + param_3) < iVar6) {
                        iVar6 = iVar9 << 2;
                        if (iVar9 == 0) {
                          iVar6 = 0xc80;
                        }
                        iVar9 = uVar5 * 4 + uVar7 * local_24;
                        uVar2 = *(undefined1 *)((int)local_38 + iVar9 + 1);
                        uVar3 = *(undefined1 *)((int)local_38 + iVar9 + 2);
                        if (*(int *)(param_1 + 0xc) != 0) {
                          iVar6 = *(int *)(param_1 + 0xc);
                        }
                        *(char *)(local_44 * iVar6 + *(int *)(param_1 + 0x370) + iVar1 + uVar5 * 4)
                             = pcVar10[-3];
                        *(undefined1 *)
                         (local_44 * iVar6 + *(int *)(param_1 + 0x370) + iVar1 + uVar5 * 4 + 1) =
                             uVar2;
                        *(undefined1 *)
                         (local_44 * iVar6 + *(int *)(param_1 + 0x370) + iVar1 + uVar5 * 4 + 2) =
                             uVar3;
                        *(undefined1 *)
                         (local_44 * iVar6 + *(int *)(param_1 + 0x370) + iVar1 + uVar5 * 4 + 3) =
                             0xff;
                      }
                    }
                  }
                  uVar5 = uVar5 + 1;
                  iVar8 = iVar8 + 4;
                } while (uVar5 < local_2c);
                uVar5 = local_2c;
              }
              uVar7 = uVar7 + 1;
              local_44 = local_44 + 1;
            } while (uVar7 < local_28);
          }
        }
        if ((((local_38 != (void *)0x0) && (local_34 == 0)) && (local_38 != (void *)0x0)) &&
           ((iVar1 = Ram40010800, iVar1 == 0x50414d57 && (iVar1 = Ram40010804, iVar1 != 0)))) {
          uVar5 = Ram40010808;
          bVar11 = 0xb < uVar5;
          if (bVar11) {
            uVar5 = Ram40010808;
          }
          if ((bVar11 && 0x53 < uVar5) && (pcVar4 = (code *)UINT_40010850, pcVar4 != (code *)0x0)) {
            (*pcVar4)(local_38);
          }
        }
        thunk_memset(&local_38,0,0x18);
      }
    }
  }
  return;
}

#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef Ram40010800
#undef Ram40010804
#undef Ram40010808
#undef UINT_40010850
#undef UINT_40010978
#undef local_44
#undef local_38
#undef local_34
#undef local_2c
#undef local_28
#undef local_24
