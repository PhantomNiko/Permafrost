/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003f20
 */

uint recovered_10003f20(uint a,uint b)

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
 * Address: 0x10003f70
 */

uint recovered_10003f70(uint a,uint b)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;

  uVar1 = 0;
  if (b != 0) {
    uVar3 = 0x1f;
    do {
      uVar2 = a >> (uVar3 & 0xff) & 1 | uVar1 << 1;
      uVar1 = uVar2 - b;
      if (uVar2 < b) {
        uVar1 = uVar2;
      }
      bVar4 = uVar3 != 0;
      uVar3 = uVar3 - 1;
    } while (bVar4);
  }
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003fa8
 */

int recovered_10003fa8(int a,int b)

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
 * Address: 0x10004018
 */

int recovered_10004018(int a,int b)

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
  uVar5 = a;
  if (a < 0) {
    uVar5 = -a;
  }
  if (b == 0) {
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
  if (a < 0) {
    uVar1 = -uVar1;
  }
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004080
 */

ulonglong recovered_10004080(ulonglong a,ulonglong b)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  bool bVar13;

  uVar2 = a >> 0x20;
  if (b == 0) {
    uVar9 = 0;
    uVar11 = 0;
  }
  else {
    uVar12 = 0;
    uVar7 = 0;
    uVar9 = 0;
    uVar11 = 0;
    uVar5 = 0x3f;
    do {
      uVar4 = (uint)(b >> 0x20);
      uVar3 = (uint)b;
      uVar8 = (uint)(a >> 0x20);
      uVar10 = uVar7 << 1 | uVar12 >> 0x1f;
      uVar6 = uVar5 - 0x20;
      uVar7 = (uint)a >> (uVar5 & 0xff) | uVar8 << (0x20 - uVar5 & 0xff);
      if (-1 < (int)uVar6) {
        uVar7 = uVar8 >> (uVar6 & 0xff);
      }
      uVar8 = uVar7 & 1 | uVar12 << 1;
      bVar13 = uVar10 <= uVar4;
      bVar1 = (uint)(uVar3 <= uVar8) <= uVar10 - uVar4;
      uVar7 = uVar10 - (uVar4 + (uVar3 > uVar8));
      uVar12 = uVar8 - uVar3;
      if (bVar13 && bVar1) {
        uVar7 = uVar10;
        uVar12 = uVar8;
      }
      uVar8 = 1 >> (0x20 - uVar5 & 0xff);
      if (-1 < (int)uVar6) {
        uVar8 = 1 << (uVar6 & 0xff);
      }
      if (!bVar13 || !bVar1) {
        uVar11 = uVar11 | uVar8;
      }
      uVar8 = 1 << (uVar5 & 0xff);
      if (-1 < (int)uVar6) {
        uVar8 = 0;
      }
      a = CONCAT44((int)uVar2,(uint)a);
      if (!bVar13 || !bVar1) {
        uVar9 = uVar9 | uVar8;
      }
      bVar13 = uVar5 != 0;
      uVar5 = uVar5 - 1;
    } while (bVar13);
  }
  return CONCAT44(uVar11,uVar9);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004164
 */

ulonglong recovered_10004164(ulonglong a,ulonglong b)

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
  bool bVar9;

  uVar4 = (uint)(b >> 0x20);
  uVar3 = (uint)b;
  uVar2 = (uint)(a >> 0x20);
  if (b == 0) {
    return 0;
  }
  uVar1 = 0;
  uVar7 = 0;
  uVar8 = 0x3f;
  do {
    uVar6 = uVar7 << 1 | uVar1 >> 0x1f;
    uVar7 = (uint)a >> (uVar8 & 0xff) | uVar2 << (0x20 - uVar8 & 0xff);
    if (-1 < (int)(uVar8 - 0x20)) {
      uVar7 = uVar2 >> (uVar8 - 0x20 & 0xff);
    }
    uVar5 = uVar7 & 1 | uVar1 << 1;
    uVar1 = uVar5 - uVar3;
    uVar7 = uVar6 - (uVar4 + (uVar3 > uVar5));
    if (uVar6 <= uVar4 && (uint)(uVar3 <= uVar5) <= uVar6 - uVar4) {
      uVar1 = uVar5;
      uVar7 = uVar6;
    }
    bVar9 = uVar8 != 0;
    uVar8 = uVar8 - 1;
  } while (bVar9);
  return CONCAT44(uVar7,uVar1);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100041e4
 */

longlong recovered_100041e4(longlong a,longlong b)

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
 * Address: 0x10004304
 */

longlong recovered_10004304(longlong a,longlong b)

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
  uint uVar10;
  bool bVar11;

  uVar10 = (uint)((ulonglong)b >> 0x20);
  uVar5 = (uint)((ulonglong)a >> 0x20);
  uVar8 = (int)uVar10 >> 0x1f;
  uVar4 = (uint)b ^ uVar8;
  uVar9 = uVar4 - uVar8;
  uVar2 = (int)uVar5 >> 0x1f;
  uVar1 = (uint)a ^ uVar2;
  uVar10 = (uVar10 ^ uVar8) - (uVar8 + (uVar4 < uVar8));
  uVar8 = (uVar5 ^ uVar2) - (uVar2 + (uVar1 < uVar2));
  if (b == 0) {
    uVar4 = 0;
    uVar5 = 0;
  }
  else {
    uVar4 = 0;
    uVar5 = 0;
    uVar3 = 0x3f;
    do {
      uVar6 = uVar5 << 1 | uVar4 >> 0x1f;
      uVar5 = uVar1 - uVar2 >> (uVar3 & 0xff) | uVar8 << (0x20 - uVar3 & 0xff);
      if (-1 < (int)(uVar3 - 0x20)) {
        uVar5 = uVar8 >> (uVar3 - 0x20 & 0xff);
      }
      uVar7 = uVar5 & 1 | uVar4 << 1;
      uVar4 = uVar7 - uVar9;
      uVar5 = uVar6 - (uVar10 + (uVar9 > uVar7));
      if (uVar6 <= uVar10 && (uint)(uVar9 <= uVar7) <= uVar6 - uVar10) {
        uVar4 = uVar7;
        uVar5 = uVar6;
      }
      bVar11 = uVar3 != 0;
      uVar3 = uVar3 - 1;
    } while (bVar11);
  }
  uVar2 = -uVar4;
  uVar8 = -(uVar5 + (uVar4 != 0));
  if (-1 < a) {
    uVar2 = uVar4;
    uVar8 = uVar5;
  }
  return CONCAT44(uVar8,uVar2);
}


#undef DAT_10004440
#define DAT_10004440 (*(double *)(0x10004440U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100043c0
 */

ulonglong recovered_100043c0(double value)

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

#undef DAT_10004440

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004448
 */

longlong recovered_10004448(double value)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 in_r0;
  undefined4 in_r1;
  ulonglong uVar1;

  if (NAN(pf_bits_double(CONCAT44(in_r1,in_r0)))) {
    return 0;
  }
  if (pf_bits_double(CONCAT44(in_r1,in_r0)) < 0.0) {
    uVar1 = recovered_100043c0(value);
    return CONCAT44(-((int)(uVar1 >> 0x20) + (uint)((int)uVar1 != 0)),-(int)uVar1);
  }
  uVar1 = recovered_100043c0(value);
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004494
 */

ulonglong recovered_10004494(float x)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 in_s1;
  ulonglong uVar1;

  uVar1 = recovered_100043c0(pf_bits_double(CONCAT44(in_s1,x)));
  return uVar1;
}


#undef DAT_10014008
#define DAT_10014008 (*(code * *)(((uintptr_t)pf_module_state + 0x114cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100044a4
 */

longlong recovered_100044a4(float x)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  longlong lVar1;

                    /* WARNING: Could not recover jumptable at ((uintptr_t)pf_module_state + 0x10acU). Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = (*DAT_10014008)(SUB84((double)x,0),(int)((ulonglong)(double)x >> 0x20));
  return lVar1;
}

#undef DAT_10014008

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100044b4
 */

double recovered_100044b4(ulonglong value)

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
 * Address: 0x100044fc
 */

double recovered_100044fc(longlong value)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  if (value < 0) {
    dVar1 = recovered_100044b4(CONCAT44(-((int)((ulonglong)value >> 0x20) + (uint)((int)value != 0))
                                        ,-(int)value));
    return dVar1;
  }
  dVar1 = recovered_100044b4(value);
  return dVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004524
 */

float recovered_10004524(ulonglong x)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 extraout_r0 = 0;
  undefined4 extraout_r1 = 0;

  recovered_100044b4(x);
  return (float)pf_bits_double(CONCAT44(extraout_r1,extraout_r0));
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004540
 */

float recovered_10004540(longlong x)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 extraout_r0 = 0;
  undefined4 extraout_r1 = 0;

  recovered_100044fc(x);
  return (float)pf_bits_double(CONCAT44(extraout_r1,extraout_r0));
}


#undef DAT_10013117
#define DAT_10013117 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x25bU)))
#undef DAT_10013119
#define DAT_10013119 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x25dU)))
#undef DAT_100132d9
#define DAT_100132d9 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x41dU)))
#undef DAT_10013b71
#define DAT_10013b71 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xcb5U)))
#undef DAT_100140a0
#define DAT_100140a0 (*(int *)(((uintptr_t)pf_module_state + 0x11e4U)))
#undef DAT_100140a4
#define DAT_100140a4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x11e8U)))
#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_40010a04
#define DAT_40010a04 (*(uint8_t *)(0x40010a04U))
#undef DAT_40010a3c
#define DAT_40010a3c (*(uint8_t *)(0x40010a3cU))
#undef DAT_40010a4c
#define DAT_40010a4c (*(uint8_t *)(0x40010a4cU))
#undef EXT_0000000c
#define EXT_0000000c (*(uint8_t *)(0xcU))
#undef EXT_0000001c
#define EXT_0000001c (*(uint8_t *)(0x1cU))
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
#undef UINT_4001084c
#define UINT_4001084c (*(uint *)(0x4001084cU))
#undef UINT_40010850
#define UINT_40010850 (*(uint *)(0x40010850U))
#undef UINT_40010854
#define UINT_40010854 (*(uint *)(0x40010854U))
#undef UINT_40010894
#define UINT_40010894 (*(uint *)(0x40010894U))
#undef UINT_4001089c
#define UINT_4001089c (*(uint *)(0x4001089cU))
#undef UINT_40010978
#define UINT_40010978 (*(uint *)(0x40010978U))
#undef UINT_40010984
#define UINT_40010984 (*(uint *)(0x40010984U))
#undef _DAT_40010a04
#define _DAT_40010a04 (*(code * *)(0x40010a04U))
#undef _DAT_40010a3c
#define _DAT_40010a3c (*(code * *)(0x40010a3cU))
#undef _DAT_40010a4c
#define _DAT_40010a4c (*(code * *)(0x40010a4cU))
#undef str_10013060
#define str_10013060 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1a4U)))
#undef str_10013080
#define str_10013080 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1c4U)))
#undef str_10013090
#define str_10013090 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1d4U)))
#undef str_10013097
#define str_10013097 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1dbU)))
#undef str_100130a7
#define str_100130a7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1ebU)))
#undef str_100130b2
#define str_100130b2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1f6U)))
#undef str_100130b9
#define str_100130b9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1fdU)))
#undef str_100130c1
#define str_100130c1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x205U)))
#undef str_100130df
#define str_100130df (*(char (*)[1])(((uintptr_t)pf_module_state + 0x223U)))
#undef str_100130fa
#define str_100130fa (*(char (*)[1])(((uintptr_t)pf_module_state + 0x23eU)))
#undef str_10013156
#define str_10013156 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x29aU)))
#undef str_10013360
#define str_10013360 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4a4U)))
#undef str_10013370
#define str_10013370 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4b4U)))
#undef str_100133a2
#define str_100133a2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4e6U)))
#undef str_100133c2
#define str_100133c2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x506U)))
#undef str_10013b6a
#define str_10013b6a (*(char (*)[1])(((uintptr_t)pf_module_state + 0xcaeU)))
#define local_4254 (*(int *)(pf_stack_frame + 60))
#define local_423c (*(uint *)(pf_stack_frame + 84))
#define local_4238 (*(int *)(pf_stack_frame + 88))
#define local_4234 (*(uint *)(pf_stack_frame + 92))
#define local_4230 (*(uint *)(pf_stack_frame + 96))
#define local_422c (*(uint *)(pf_stack_frame + 100))
#define local_420c (*(void * *)(pf_stack_frame + 132))
#define local_3ef8 (*(uint *)(pf_stack_frame + 920))
#define local_3ef4 (*(char *)(pf_stack_frame + 924))
#define local_3ef3 (*(undefined1 *)(pf_stack_frame + 925))
#define local_3ee8 (*(int *)(pf_stack_frame + 936))
#define local_3edc (*(int *)(pf_stack_frame + 948))
#define local_3ec8 (*(void * *)(pf_stack_frame + 968))
#define auStack_3ef0 (*(undefined1 (*)[16112])(pf_stack_frame + 928))
#define local_3ec4 (*(void * *)(pf_stack_frame + 972))
#define local_3ec0 (*(byte * *)(pf_stack_frame + 976))
#define iStack_3ee4 (*(int *)(pf_stack_frame + 940))
#define local_3ebc (*(uint *)(pf_stack_frame + 980))
#define iStack_3ee0 (*(int *)(pf_stack_frame + 944))
#define local_3eb4 (*(undefined4 *)(pf_stack_frame + 988))
#define local_3eb0 (*(uint *)(pf_stack_frame + 992))
#define local_3eac (*(uint *)(pf_stack_frame + 996))
#define local_3ea8 (*(byte * *)(pf_stack_frame + 1000))
#define local_3ea4 (*(uint * *)(pf_stack_frame + 1004))
#define local_3ea0 (*(byte * *)(pf_stack_frame + 1008))
#define local_3e9c (*(char *)(pf_stack_frame + 1012))
#define local_3e9b (*(char *)(pf_stack_frame + 1013))
#define local_3e9a (*(byte *)(pf_stack_frame + 1014))
#define local_3e98 (*(int *)(pf_stack_frame + 1016))
#define local_3e94 (*(int *)(pf_stack_frame + 1020))
#define local_3e90 (*(int *)(pf_stack_frame + 1024))
#define local_3e8c (*(byte * *)(pf_stack_frame + 1028))
#define local_3e88 (*(uint *)(pf_stack_frame + 1032))
#define local_3e84 (*(ulong *)(pf_stack_frame + 1036))
#define local_3e80 (*(uint *)(pf_stack_frame + 1040))
#define local_3e7c (*(uint *)(pf_stack_frame + 1044))
#define local_3e78 (*(void * *)(pf_stack_frame + 1048))
#define local_3e70 (*(int *)(pf_stack_frame + 1056))
#define local_3e6c (*(uint *)(pf_stack_frame + 1060))
#define local_3e68 (*(int *)(pf_stack_frame + 1064))
#define local_3e64 (*(uint *)(pf_stack_frame + 1068))
#define local_3e60 (*(uint *)(pf_stack_frame + 1072))
#define local_3e5c (*(byte * *)(pf_stack_frame + 1076))
#define local_3e54 (*(uint *)(pf_stack_frame + 1084))
#define local_3e50 (*(uint *)(pf_stack_frame + 1088))
#define local_3e4c (*(int *)(pf_stack_frame + 1092))
#define local_3e48 (*(byte *)(pf_stack_frame + 1096))
#define local_3e47 (*(char *)(pf_stack_frame + 1097))
#define local_3e46 (*(byte *)(pf_stack_frame + 1098))
#define local_3e40 (*(int *)(pf_stack_frame + 1104))
#define local_3e3c (*(int *)(pf_stack_frame + 1108))
#define local_3e38 (*(int *)(pf_stack_frame + 1112))
#define local_3e34 (*(uint *)(pf_stack_frame + 1116))
#define local_3e30 (*(undefined1 * *)(pf_stack_frame + 1120))
#define local_3e2c (*(undefined4 *)(pf_stack_frame + 1124))
#define local_3e28 (*(byte * *)(pf_stack_frame + 1128))
#define local_3e24 (*(undefined4 *)(pf_stack_frame + 1132))
#define local_3da0 (*(char (*)[15776])(pf_stack_frame + 1264))
#define local_3cd0 (*(uint *)(pf_stack_frame + 1472))
#define local_3ccc (*(undefined4 *)(pf_stack_frame + 1476))
#define local_3c88 (*(char *)(pf_stack_frame + 1544))
#define local_3c87 (*(char *)(pf_stack_frame + 1545))
#define local_3c85 (*(bool *)(pf_stack_frame + 1547))
#define acStack_3e20 (*(char (*)[15904])(pf_stack_frame + 1136))
#define local_3c84 (*(undefined4 *)(pf_stack_frame + 1548))
#define local_3c80 (*(int *)(pf_stack_frame + 1552))
#define auStack_3d20 (*(undefined1 (*)[15648])(pf_stack_frame + 1392))
#define local_3a34 (*(undefined4 *)(pf_stack_frame + 2140))
#define acStack_3cf8 (*(char (*)[15608])(pf_stack_frame + 1432))
#define local_3a30 (*(undefined4 *)(pf_stack_frame + 2144))
#define local_3814 (*(char (*)[14356])(pf_stack_frame + 2684))
#define auStack_3cc8 (*(undefined1 (*)[15560])(pf_stack_frame + 1480))
#define local_3810 (*(char *)(pf_stack_frame + 2688))
#define local_380f (*(char *)(pf_stack_frame + 2689))
#define local_380e (*(char *)(pf_stack_frame + 2690))
#define local_380d (*(char *)(pf_stack_frame + 2691))
#define auStack_3c74 (*(undefined1 (*)[15476])(pf_stack_frame + 1564))
#define local_3804 (*(undefined1 (*)[14340])(pf_stack_frame + 2700))
#define auStack_3c34 (*(undefined1 (*)[15412])(pf_stack_frame + 1628))
#define auStack_3b34 (*(undefined1 (*)[15156])(pf_stack_frame + 1884))
#define local_37fc (*(uint (*)[3583])(pf_stack_frame + 2708))
#define local_b04 (*(int *)(pf_stack_frame + 14220))
#define local_b00 (*(int *)(pf_stack_frame + 14224))
#define auStack_3a24 (*(undefined1 (*)[14884])(pf_stack_frame + 2156))
#define local_afc (*(uint *)(pf_stack_frame + 14228))
#define auStack_391c (*(undefined1 (*)[14620])(pf_stack_frame + 2420))
#define local_af8 (*(int *)(pf_stack_frame + 14232))
#define local_af4 (*(undefined4 *)(pf_stack_frame + 14236))
#define local_99c (*(uint *)(pf_stack_frame + 14580))
#define local_994 (*(int *)(pf_stack_frame + 14588))
#define local_990 (*(uint *)(pf_stack_frame + 14592))
#define local_98c (*(int *)(pf_stack_frame + 14596))
#define auStack_380c (*(undefined1 (*)[14348])(pf_stack_frame + 2692))
#define local_988 (*(undefined4 *)(pf_stack_frame + 14600))
#define local_984 (*(uint *)(pf_stack_frame + 14604))
#define local_980 (*(int *)(pf_stack_frame + 14608))
#define acStack_37ef (*(char (*)[14319])(pf_stack_frame + 2721))
#define local_97c (*(int *)(pf_stack_frame + 14612))
#define local_978 (*(int *)(pf_stack_frame + 14616))
#define local_974 (*(char *)(pf_stack_frame + 14620))
#define local_973 (*(char *)(pf_stack_frame + 14621))
#define local_972 (*(byte *)(pf_stack_frame + 14622))
#define local_971 (*(char *)(pf_stack_frame + 14623))
#define local_970 (*(char (*)[2416])(pf_stack_frame + 14624))
#define local_5f0 (*(void * *)(pf_stack_frame + 15520))
#define local_5ec (*(int *)(pf_stack_frame + 15524))
#define local_5e8 (*(int *)(pf_stack_frame + 15528))
#define local_5e4 (*(int *)(pf_stack_frame + 15532))
#define local_5e0 (*(int *)(pf_stack_frame + 15536))
#define local_5dc (*(int *)(pf_stack_frame + 15540))
#define local_5d8 (*(char *)(pf_stack_frame + 15544))
#define local_4e0 (*(uint *)(pf_stack_frame + 15792))
#define local_4dc (*(uint *)(pf_stack_frame + 15796))
#define local_4d8 (*(char *)(pf_stack_frame + 15800))
#define local_4d4 (*(uint *)(pf_stack_frame + 15804))
#define local_464 (*(undefined4 *)(pf_stack_frame + 15916))
#define local_45c (*(char *)(pf_stack_frame + 15924))
#define local_458 (*(uint (*)[278])(pf_stack_frame + 15928))
#define local_2b8 (*(undefined1 *)(pf_stack_frame + 16344))
#define local_2b4 (*(byte * *)(pf_stack_frame + 16348))
#define local_2b0 (*(uint * *)(pf_stack_frame + 16352))
#define local_2ac (*(uint *)(pf_stack_frame + 16356))
#define local_2a8 (*(int *)(pf_stack_frame + 16360))
#define local_2a4 (*(int *)(pf_stack_frame + 16364))
#define acStack_5d0 (*(char (*)[1488])(pf_stack_frame + 15552))
#define local_29c (*(uint *)(pf_stack_frame + 16372))
#define local_298 (*(byte * *)(pf_stack_frame + 16376))
#define local_294 (*(uint * *)(pf_stack_frame + 16380))
#define local_290 (*(byte * *)(pf_stack_frame + 16384))
#define local_28c (*(uint *)(pf_stack_frame + 16388))
#define local_288 (*(byte * *)(pf_stack_frame + 16392))
#define local_284 (*(uint * *)(pf_stack_frame + 16396))
#define local_274 (*(uint *)(pf_stack_frame + 16412))
#define auStack_2bc (*(undefined1 (*)[700])(pf_stack_frame + 16340))
#define local_270 (*(undefined4 *)(pf_stack_frame + 16416))
#define local_26c (*(uint *)(pf_stack_frame + 16420))
#define local_268 (*(int *)(pf_stack_frame + 16424))
#define local_264 (*(int *)(pf_stack_frame + 16428))
#define local_260 (*(int *)(pf_stack_frame + 16432))
#define local_4278 (*(int *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004560
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

int recovered_10004560(int argc,char **argv)

{
  unsigned char pf_stack_frame[17072] __attribute__((aligned(16))) = {0};

  char cVar1;
  code *pcVar2;
  char cVar3;
  uchar uVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  char *pcVar8;
  byte *pbVar9;
  ulong uVar10;
  int *piVar11;
  uint uVar12;
  uint uVar13;
  void *pvVar14;
  uint uVar15;
  int iVar16;
  uint *puVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint *puVar24;
  uint uVar25;
  int extraout_r1 = 0;
  char *in_r2;
  uint *puVar26;
  uint extraout_r2 = 0;
  int iVar27;
  int iVar28;
  byte *extraout_r2_00 = 0;
  byte *pbVar29;
  byte bVar30;
  undefined1 *puVar31;
  uint uVar32;
  uint uVar33;
  byte *pbVar34;
  byte *pbVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  int iVar39;
  uint uVar40;
  int iVar41;
  uint uVar42;
  bool bVar43;
  bool bVar44;
  bool bVar45;
  longlong lVar46;

  iVar5 = 0;
  if (argc != 0) {
    if (argv != (char **)0x0) {
      in_r2 = *argv;
    }
    if (argv != (char **)0x0 && in_r2 != (char *)0x0) {
      pcVar6 = thunk_strstr(in_r2,str_10013090);
      iVar5 = 0;
      if (pcVar6 != (char *)0x0) {
        iVar5 = 1;
      }
    }
  }
  DAT_100140a4 = 0;
  DAT_100140a0 = iVar5;
  if ((1 < argc) && (argv != (char **)0x0)) {
    iVar5 = 1;
    do {
      iVar7 = thunk_strcmp(argv[iVar5],str_10013097);
      if (iVar7 == 0) {
        DAT_100140a0 = 1;
      }
      iVar7 = thunk_strncmp(argv[iVar5],str_100130a7,10);
      if (iVar7 == 0) {
        pcVar6 = argv[iVar5] + 10;
LAB_10004684:
        cVar3 = *pcVar6;
        if (cVar3 == '\0') {
          return 0;
        }
        uVar22 = 0;
        do {
          pcVar6 = pcVar6 + 1;
          if ((byte)(cVar3 - 0x3aU) < 0xf6) {
            return 0;
          }
          bVar30 = cVar3 - 0x30;
          if ((bVar30 ^ 0x7ffffffe) / 10 < uVar22) {
            return 0;
          }
          cVar3 = *pcVar6;
          uVar22 = (uint)bVar30 + uVar22 * 10;
        } while (cVar3 != '\0');
        if (uVar22 == 0) {
          return 0;
        }
        DAT_100140a4 = uVar22;
      }
      else {
        iVar7 = thunk_strncmp(argv[iVar5],str_100130b2,6);
        if (iVar7 == 0) {
          pcVar6 = argv[iVar5] + 6;
          goto LAB_10004684;
        }
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 != argc);
  }
  pbVar35 = (byte *)0x0;
  if ((1 < argc) && (argv != (char **)0x0)) {
    iVar5 = argc + -1;
    do {
      argv = argv + 1;
      pcVar6 = *argv;
      if (((pcVar6 != (char *)0x0) &&
          (pcVar8 = thunk_strchr(pcVar6,0x3d), pcVar8 != (char *)0x0 && pcVar8 != pcVar6)) &&
         (uVar22 = (int)pcVar8 - (int)pcVar6, uVar22 < 0x10)) {
        thunk_memcpy(&local_29c,pcVar6,uVar22);
        uVar23 = 0;
        *(undefined1 *)((int)&local_29c + uVar22) = 0;
        uVar22 = local_29c & 0xff;
        if (uVar22 != 0) {
          if (uVar22 - 0x41 < 0x1a) {
            uVar22 = uVar22 | 0x20;
          }
          if (uVar22 != 99) goto LAB_10004750;
          uVar22 = local_29c >> 8 & 0xff;
          if (uVar22 == 0) {
            uVar23 = 1;
          }
          else {
            if (uVar22 - 0x41 < 0x1a) {
              uVar22 = uVar22 | 0x20;
            }
            if (uVar22 != 0x6f) goto LAB_10004750;
            uVar22 = local_29c >> 0x10 & 0xff;
            if (uVar22 == 0) {
              uVar23 = 2;
            }
            else {
              if (uVar22 - 0x41 < 0x1a) {
                uVar22 = uVar22 | 0x20;
              }
              if (uVar22 != 0x6d) goto LAB_10004750;
              uVar22 = local_29c >> 0x18;
              if (uVar22 == 0) {
                uVar23 = 3;
              }
              else {
                if (uVar22 - 0x41 < 0x1a) {
                  uVar22 = uVar22 | 0x20;
                }
                if (uVar22 != 0x6d) goto LAB_10004750;
                uVar22 = (uint)local_298 & 0xff;
                if (uVar22 == 0) {
                  uVar23 = 4;
                }
                else {
                  if (uVar22 - 0x41 < 0x1a) {
                    uVar22 = uVar22 | 0x20;
                  }
                  if (uVar22 != 0x61) goto LAB_10004750;
                  uVar22 = (uint)local_298 >> 8 & 0xff;
                  if (uVar22 == 0) {
                    uVar23 = 5;
                  }
                  else {
                    if (uVar22 - 0x41 < 0x1a) {
                      uVar22 = uVar22 | 0x20;
                    }
                    if (uVar22 != 0x6e) goto LAB_10004750;
                    uVar23 = (uint)local_298 >> 0x10 & 0xff;
                    if (uVar23 == 0) {
                      uVar23 = 6;
                    }
                    else {
                      uVar22 = uVar23 - 0x41;
                      if (uVar22 < 0x1a) {
                        uVar23 = uVar23 | 0x20;
                      }
                      bVar43 = uVar23 != 100;
                      if (!bVar43) {
                        uVar22 = (uint)local_298 >> 0x18;
                        uVar23 = 7;
                      }
                      if (bVar43 || uVar22 != 0) goto LAB_10004750;
                    }
                  }
                }
              }
            }
          }
        }
        if (str_100130b9[uVar23] == '\0') {
          pbVar35 = (byte *)(pcVar8 + 1);
          goto LAB_100048c4;
        }
      }
LAB_10004750:
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    pbVar35 = (byte *)0x0;
  }
LAB_100048c4:
  thunk_memset(&local_4238,0,0x3f84);
  if ((local_3e8c == (byte *)0x0 || 0x3e < local_3e84) &&
      (local_3e8c != (byte *)0x0 && local_3e84 != 0x3f)) {
LAB_1000497c:
    iVar5 = recovered_1000b6c0((int)&local_4238,0x80);
    uVar22 = 0;
    if (iVar5 != 0) {
      uVar22 = local_3e7c;
    }
    if (iVar5 != 0 && uVar22 != 0x7fffffff) {
      if ((int)uVar22 < (int)local_3e80) {
LAB_10004af4:
        uVar22 = 0x2a8;
        pcVar6 = str_10013090;
        if (DAT_100140a0 == 0) {
          pcVar6 = str_10013b6a;
          uVar22 = 400;
        }
        pf_app_window_spec(&local_29c,pcVar6,0x2f8,uVar22);
        local_28c = thunk_terror_ui_colour(0);
        local_26c = local_26c | 1;
        uVar22 = thunk_terror_ui_window_open(&local_4238,&local_29c);
        if (uVar22 != 0) {
          pcVar6 = str_100130df;
          if (DAT_100140a0 == 1) {
            pcVar6 = str_100130c1;
          }
          terror_ui_window_set_custom_menus(&local_4238,pcVar6);
          if ((local_3ec8 != (void *)0x0) || (local_3ec8 = local_420c, local_420c != (void *)0x0)) {
            local_3e90 = 10;
            local_3e94 = 6;
            thunk_memset(&local_2b4,0,0x18);
            iVar5 = Ram40010800;
            if ((iVar5 == 0x50414d57) && (iVar5 = Ram40010804, iVar5 != 0)) {
              uVar22 = Ram40010808;
              bVar43 = 0xb < uVar22;
              if (bVar43) {
                uVar22 = Ram40010808;
              }
              if (((bVar43 && 0x17b < uVar22) &&
                  (pcVar2 = (code *)UINT_40010978, pcVar2 != (code *)0x0)) &&
                 (uVar22 = (*pcVar2)(&DAT_10013117,0xffffffff,0x80000001,0,&local_2b4), uVar22 != 0)
                 ) {
                if (local_2a8 - 1U < 0x40) {
                  local_3e94 = local_2a8;
                }
                if (local_2a4 - 1U < 0x40) {
                  local_3e90 = local_2a4;
                }
                if (((local_2b4 != (byte *)0x0) && (local_2b0 == (uint *)0x0)) &&
                   ((local_2b4 != (byte *)0x0 &&
                    ((iVar5 = Ram40010800, iVar5 == 0x50414d57 && (iVar5 = Ram40010804, iVar5 != 0))
                    )))) {
                  uVar22 = Ram40010808;
                  bVar43 = 0xb < uVar22;
                  if (bVar43) {
                    uVar22 = Ram40010808;
                  }
                  if ((bVar43 && 0x53 < uVar22) &&
                     (pcVar2 = (code *)UINT_40010850, pcVar2 != (code *)0x0)) {
                    (*pcVar2)(local_2b4);
                  }
                }
                thunk_memset(&local_2b4,0,0x18);
              }
            }
            pcVar6 = str_10013090;
            if (DAT_100140a0 == 0) {
              pcVar6 = str_10013b6a;
            }
            uVar10 = thunk_strlen(pcVar6);
            recovered_1000bb24((int)&local_4238,(byte *)pcVar6,uVar10,0);
            if (DAT_100140a0 != 0) {
              thunk_snprintf(acStack_3e20,0x80,str_100130fa);
              local_974 = '\x01';
              local_3cd0 = DAT_100140a4;
            }
            local_3e54 = recovered_1000ba00((int)&local_4238);
            local_3e47 = '\x01';
            if (DAT_100140a0 == 0) {
              iVar5 = Ram40010800;
              piVar11 = (int *)0x0;
              if ((iVar5 == 0x50414d57) && (iVar5 = Ram40010804, iVar5 != 0)) {
                uVar22 = Ram40010808;
                bVar43 = 0xb < uVar22;
                if (bVar43) {
                  uVar22 = Ram40010808;
                }
                if ((bVar43 && 0x23f < uVar22) && (_DAT_40010a3c != (code *)0x0)) {
                  iVar5 = (*_DAT_40010a3c)();
                  piVar11 = (int *)(uint)(iVar5 != 0);
                }
              }
            }
            else {
              piVar11 = (int *)0x0;
            }
            local_3e46 = (byte)piVar11;
            if (pbVar35 != (byte *)0x0) {
              piVar11 = &local_4238;
            }
            uVar22 = local_3e50 & 0x1fff;
            if (pbVar35 != (byte *)0x0) {
              recovered_10008340((uint)piVar11,pbVar35);
            }
            if (local_3e47 == '\x01') {
              bVar43 = true;
              uVar22 = uVar22 >> 0xc;
LAB_10004f88:
              terror_ui_window_begin_frame(&local_4238);
              uVar15 = local_4230;
              uVar23 = local_4234;
              thunk_memset(&local_29c,0,0x278);
              uVar12 = thunk_terror_ui_window_query(&local_4238,&local_29c);
              if ((uVar12 != 0) &&
                 (uVar12 = thunk_terror_ui_window_sync_buffer(&local_4238,&local_29c), uVar12 != 0)) {
                uVar12 = local_4230;
                if (local_4234 != uVar23 || local_4230 != uVar15) {
                  uVar12 = 1;
                }
                local_3ec8 = local_420c;
                if (local_4234 != uVar23 || local_4230 != uVar15) {
                  local_3e48 = (byte)uVar12;
                }
                local_3eb4 = local_270;
                local_3eb0 = local_26c;
                local_3eac = local_274;
                if (local_268 != 0 && local_268 != local_3e4c) {
                  local_3e4c = local_268;
                  if (local_264 == 2 && local_260 == 0) {
                    recovered_1000d758((int)&local_4238);
                  }
                  else if (local_264 == 2 && local_260 == 1) {
                    recovered_1000d90c((int)&local_4238);
                  }
                }
                if ((local_274 & 0x11) == 0) {
                  uVar23 = (uint)local_3e48;
                  if (uVar23 == 1) {
                    local_3e48 = 0;
                  }
                  uVar12 = recovered_1000958c((int)&local_4238);
                  uVar15 = local_3e54;
                  uVar33 = 0;
                  if (local_3e40 != 0) {
                    DataMemoryBarrier(0xb);
                    iVar5 = __atomic_fetch_or((uint32_t *)(&local_3e3c),0,__ATOMIC_ACQ_REL);
                    DataMemoryBarrier(0xb);
                    if (iVar5 != 0) {
                      uVar13 = recovered_1000ba00((int)&local_4238);
                      uVar33 = local_990;
                      pbVar35 = local_3e28;
                      if (DAT_100140a0 == 0) {
                        if (*local_3e28 == 0) {
                          if (local_3e38 == 0) {
                            uVar10 = thunk_strlen(str_10013156);
                            recovered_1000bb24((int)&local_4238,(byte *)str_10013156,uVar10,0);
                          }
                        }
                        else {
                          bVar45 = false;
                          if (local_3ec0 == (byte *)0x0) {
LAB_1000514c:
                            pbVar9 = local_3e28;
                            pbVar35 = (byte *)0x0;
                          }
                          else {
                            bVar44 = local_3e28 <= local_3ec0;
                            if (local_3ec0 <= local_3e28) {
                              bVar44 = local_3ebc <= (uint)((int)local_3e28 - (int)local_3ec0);
                            }
                            if (bVar44) goto LAB_1000514c;
                            uVar10 = thunk_strlen((char *)local_3e28);
                            if ((((0xfffffffe < uVar10) ||
                                 (iVar5 = Ram40010800, iVar5 != 0x50414d57)) ||
                                (iVar5 = Ram40010804, iVar5 == 0)) ||
                               (((uVar33 = Ram40010808, uVar33 < 0xc ||
                                 (uVar33 = Ram40010808, uVar33 < 0x50)) ||
                                ((pcVar2 = (code *)UINT_4001084c, pcVar2 == (code *)0x0 ||
                                 (pbVar9 = (*pcVar2)(uVar10 + 1), pbVar9 == (byte *)0x0))))))
                            goto LAB_100057fc;
                            thunk_memcpy(pbVar9,pbVar35,uVar10 + 1);
                            pbVar35 = pbVar9;
                          }
                          pbVar29 = pbVar9;
                          pbVar34 = pbVar9;
LAB_10005188:
                          bVar30 = *pbVar34;
                          if (bVar30 == 10) {
                            iVar5 = recovered_1000bb24((int)&local_4238,pbVar9,
                                                       (int)pbVar29 - (int)pbVar9,1);
                            bVar45 = false;
                            pbVar9 = pbVar34 + 1;
                            if (iVar5 == 0) goto LAB_10005488;
LAB_10005180:
                            pbVar29 = pbVar29 + 1;
                            pbVar34 = pbVar34 + 1;
                            goto LAB_10005188;
                          }
                          if (bVar30 == 0xd) goto LAB_10005180;
                          if (bVar30 != 0) {
                            bVar45 = true;
                            goto LAB_10005180;
                          }
                          if (bVar45) {
                            recovered_1000bb24((int)&local_4238,pbVar9,(int)pbVar29 - (int)pbVar9,1)
                            ;
                          }
LAB_10005488:
                          iVar5 = Ram40010800;
                          if (((iVar5 == 0x50414d57) && (iVar5 = Ram40010804, iVar5 != 0)) &&
                             ((uVar33 = Ram40010808, 0xb < uVar33 &&
                              ((uVar33 = Ram40010808, 0x53 < uVar33 &&
                               (pcVar2 = (code *)UINT_40010850, pcVar2 != (code *)0x0)))))) {
                            (*pcVar2)(pbVar35);
                          }
                        }
                      }
                      else {
                        if (local_990 != 0) {
                          if (DAT_100140a4 == 0) {
                            if (local_97c == local_980) {
                              DAT_100140a4 = local_990;
                              local_3cd0 = local_990;
                            }
LAB_100051dc:
                            puVar24 = local_37fc;
                            for (uVar36 = local_99c; uVar36 != 0; uVar36 = uVar36 - 1) {
                              if (*puVar24 == 0) {
                                *puVar24 = uVar33;
                              }
                              puVar24 = puVar24 + 0x5a;
                            }
                            if (local_4e0 != 0) {
                              pbVar35 = (byte *)((int)local_5f0 + 0x15);
                              uVar36 = local_4e0;
                              do {
                                uVar21 = *(uint *)(pbVar35 + -0x15);
                                bVar45 = uVar21 == 0;
                                if (bVar45) {
                                  uVar21 = (uint)*pbVar35;
                                }
                                if (bVar45 && uVar21 == 1) {
                                  *(uint *)(pbVar35 + -0x15) = uVar33;
                                }
                                pbVar35 = pbVar35 + 0x10c;
                                uVar36 = uVar36 - 1;
                              } while (uVar36 != 0);
                            }
                          }
                          else if (local_b04 != 0) {
                            if (local_afc == 0) goto LAB_100051dc;
                          }
                        }
                        local_3ccc = local_3c84;
                        thunk_memcpy(auStack_3cc8,auStack_3c74,0x40);
                        if (local_990 == DAT_100140a4) {
                          local_971 = local_3c87;
                          if (local_973 == '\x01') {
                            thunk_snprintf(acStack_3cf8,0x28,&DAT_100132d9,auStack_3d20);
                            thunk_memcpy(auStack_391c,auStack_3a24,0x108);
                            thunk_memcpy(auStack_380c,local_3814,8);
                            thunk_memcpy(auStack_3b34,auStack_3c34,0x100);
                            local_3a30 = local_3a34;
                            if (((local_b04 == 0) && (local_97c == local_980)) &&
                               (local_3814[local_3c80] == '\0')) {
                              iVar5 = 0;
                              if (((((local_3814[0] == '\0') && (iVar5 = 1, local_3814[1] == '\0'))
                                   && ((iVar5 = 2, local_3814[2] == '\0' &&
                                       ((iVar5 = 3, local_3814[3] == '\0' &&
                                        (iVar5 = 4, local_3810 == '\0')))))) &&
                                  (iVar5 = 5, local_380f == '\0')) &&
                                 (iVar5 = 6, local_380e == '\0')) {
                                if (local_380d != '\0') {
                                  local_3c80 = 7;
                                }
                              }
                              else {
                                local_3c80 = iVar5;
                              }
                            }
                          }
                          if (local_970[0] == '\0') {
                            thunk_snprintf(acStack_3e20,0x80,&DAT_100132d9,local_3da0);
                          }
                        }
                        iVar5 = local_994;
                        if (local_b04 == 0) {
LAB_100055d4:
                          if ((local_3c87 != '\x01') || (local_3c88 == '\x01')) {
LAB_100055ec:
                            local_978 = local_3e50 + 0x3c;
                          }
                        }
                        else {
                          if (local_994 == 2) goto LAB_100055ec;
                          if (local_4e0 != 0) {
                            puVar31 = (undefined1 *)((int)local_5f0 + 0x15);
                            uVar33 = local_4e0;
                            do {
                              if (*(int *)(puVar31 + 3) == local_b00) {
                                puVar31[1] = local_994 != 1;
                                *puVar31 = 0;
                              }
                              puVar31 = puVar31 + 0x10c;
                              uVar33 = uVar33 - 1;
                            } while (uVar33 != 0);
                          }
                          if (local_99c != 0) {
                            iVar7 = 1;
                            puVar31 = local_3804;
                            do {
                              if (*(int *)(puVar31 + 4) == local_b00) {
                                thunk_memset(puVar31,0,0x168);
                                iVar7 = local_99c - iVar7;
                                local_99c = local_99c - 1;
                                thunk_memmove(puVar31,puVar31 + 0x168,iVar7 * 0x168);
                                thunk_memset(local_3804 + local_99c * 0x168,0,0x168);
                                break;
                              }
                              iVar7 = iVar7 + 1;
                              puVar31 = puVar31 + 0x168;
                            } while (iVar7 - local_99c != 1);
                          }
                          if (iVar5 == 1) {
                            if (local_b04 != 2) goto LAB_100055cc;
                            local_974 = '\x01';
                          }
                          else {
                            pcVar6 = local_3da0;
                            if (local_3da0[0] == '\0') {
                              pcVar6 = str_10013370;
                            }
                            thunk_snprintf(local_970,0x80,str_10013360,local_990,pcVar6);
                            thunk_snprintf(acStack_3e20,0x80,&DAT_100132d9,local_970);
LAB_100055cc:
                            if (local_b04 == 0) goto LAB_100055d4;
                          }
                        }
                        thunk_memset(&local_b04,0,0x168);
                        if (local_4d8 == '\x01') {
                          if (local_4e0 == 0) {
                            uVar33 = 0;
                          }
                          else {
                            iVar5 = 0;
                            uVar36 = 0;
                            uVar33 = local_4e0;
                            do {
                              pvVar14 = local_5f0;
                              if (*(int *)((int)local_5f0 + iVar5) == local_5ec) {
                                if (((local_5e0 != 0) &&
                                    (*(int *)((int)local_5f0 + iVar5 + 0xc) == local_5e0)) &&
                                   (*(int *)((int)local_5f0 + iVar5 + 4) == local_5e8))
                                goto LAB_100057fc;
                                if (((*(char *)((int)local_5f0 + iVar5 + 0x14) == '\x01') &&
                                    (*(int *)((int)local_5f0 + iVar5 + 0xc) == 0)) &&
                                   (*(char *)((int)local_5f0 + iVar5 + 0x15) == '\0')) {
                                  cVar3 = *(char *)((int)local_5f0 + iVar5 + 0x16);
                                  cVar1 = cVar3;
                                  if (cVar3 == '\0') {
                                    cVar1 = local_5d8;
                                  }
                                  if (((cVar3 == '\0' && cVar1 == '\x01') &&
                                      (*(int *)((int)local_5f0 + iVar5 + 8) == local_5e4)) &&
                                     (*(int *)((int)local_5f0 + iVar5 + 0x10) == local_5dc)) {
                                    iVar7 = thunk_strcmp((char *)((int)local_5f0 +
                                                                       iVar5 + 0x1c),acStack_5d0);
                                    if (iVar7 == 0) {
                                      *(int *)((int)pvVar14 + iVar5 + 0xc) = local_5e0;
                                      goto LAB_100057fc;
                                    }
                                    uVar33 = local_4e0;
                                  }
                                }
                              }
                              uVar36 = uVar36 + 1;
                              iVar5 = iVar5 + 0x10c;
                            } while (uVar36 < uVar33);
                          }
                          if (uVar33 < local_4dc) {
                            pvVar14 = local_5f0;
                            local_4e0 = uVar33;
                          }
                          else {
                            uVar33 = local_4dc << 1;
                            if (local_4dc == 0) {
                              uVar33 = 0x80;
                            }
                            if ((((((uVar33 < local_4dc) || (0x10000 < uVar33)) ||
                                  (iVar5 = Ram40010800, iVar5 != 0x50414d57)) ||
                                 ((iVar5 = Ram40010804, iVar5 == 0 ||
                                  (uVar36 = Ram40010808, uVar36 < 0xc)))) ||
                                (uVar36 = Ram40010808, uVar36 < 0x58)) ||
                               ((pcVar2 = (code *)UINT_40010854, pcVar2 == (code *)0x0 ||
                                (pvVar14 = (*pcVar2)(local_5f0,(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)uVar33 * 0x10c),
                                pvVar14 == (void *)0x0)))) {
                              thunk_snprintf(acStack_3e20,0x80,str_100133a2);
                              goto LAB_100057fc;
                            }
                            local_4dc = uVar33;
                          }
                          iVar5 = local_4e0 * 0x10c;
                          local_4e0 = local_4e0 + 1;
                          thunk_memcpy((void *)(iVar5 + (int)pvVar14),&local_5ec,0x10c);
                        }
                      }
LAB_100057fc:
                      uVar33 = 1;
                      *local_3e28 = 0;
                      *local_3e30 = 0;
                      local_3e3c = 0;
                      local_3e34 = 0;
                      local_3e40 = 0;
                      if ((int)uVar13 <= (int)uVar15) {
                        local_3e54 = recovered_1000ba00((int)&local_4238);
                      }
                    }
                  }
                  uVar23 = uVar12 | uVar33 | uVar23;
                  local_423c = uVar23;
                  if (DAT_100140a0 == 0) {
                    iVar5 = Ram40010800;
                    local_288 = (byte *)0x0;
                    local_28c = 0;
                    local_290 = (byte *)0x0;
                    local_294 = (uint *)0x0;
                    local_298 = (byte *)0x0;
                    local_29c = 0;
                    if ((iVar5 == 0x50414d57) && (iVar5 = Ram40010804, iVar5 != 0)) {
                      uVar15 = Ram40010808;
                      bVar45 = 0xb < uVar15;
                      if (bVar45) {
                        uVar15 = Ram40010808;
                      }
                      if (((!bVar45 || uVar15 < 0x208) || (_DAT_40010a04 == (code *)0x0)) ||
                         (iVar5 = (*_DAT_40010a04)(str_10013080,&local_29c), iVar5 == 0))
                      goto switchD_10007d8c_caseD_55;
                      if ((local_29c & 0xfffffffb) != 1) {
                        if ((local_29c == 3) && (local_290 != (byte *)0x0)) {
                          switch((uintptr_t)(*local_290)) {
                          case 0x54:
                          case 0x59:
                          case 0x74:
                          case 0x79:
switchD_10007d8c_caseD_54:
                            local_423c = 1;
                            goto LAB_100058d4;
                          case 0x55:
                          case 0x56:
                          case 0x57:
                          case 0x58:
                          case 0x5a:
                          case 0x5b:
                          case 0x5c:
                          case 0x5d:
                          case 0x5e:
                          case 0x5f:
                          case 0x60:
                          case 0x61:
                          case 0x62:
                          case 99:
                          case 100:
                          case 0x65:
                          case 0x66:
                          case 0x67:
                          case 0x68:
                          case 0x69:
                          case 0x6a:
                          case 0x6b:
                          case 0x6c:
                          case 0x6d:
                          case 0x6e:
                          case 0x6f:
                          case 0x70:
                          case 0x71:
                          case 0x72:
                          case 0x73:
                          case 0x75:
                          case 0x76:
                          case 0x77:
                          case 0x78:
                            break;
                          default:
                            if (*local_290 == 0x31) goto switchD_10007d8c_caseD_54;
                          }
                        }
                        goto switchD_10007d8c_caseD_55;
                      }
                      local_423c = 1;
                      if (local_298 == (byte *)0x0) {
                        local_423c = uVar23;
                      }
                    }
                    else {
switchD_10007d8c_caseD_55:
                    }
LAB_100058d4:
                    if (DAT_100140a0 != 0) goto LAB_100058ec;
                  }
                  else {
LAB_100058ec:
                    if (local_3e40 == 0) {
                      thunk_memset(&local_b04,0,0x168);
                      iVar5 = local_978;
                      uVar23 = local_3e50;
                      local_97c = local_980;
                      local_98c = local_3c80;
                      local_988 = local_464;
                      local_984 = local_3e50;
                      puVar24 = &DAT_100140a4;
                      if (local_45c != '\0') {
                        puVar24 = local_458;
                      }
                      local_972 = 1;
                      local_990 = *puVar24;
                      if (((local_974 == '\0') && (local_990 != 0)) &&
                         (local_972 = 0,
                         (local_3e50 * -0x11111111 >> 2 | local_3e50 * -0x40000000) < 0x4444445)) {
                        local_972 = 1;
                      }
                      bVar45 = false;
                      uVar12 = 0;
                      local_994 = 0;
                      uVar15 = local_99c;
                      if (local_45c != '\0' && local_99c != 0) {
                        pcVar6 = acStack_37ef;
                        do {
                          if (*(int *)(pcVar6 + -0x15) == 1) {
                            iVar7 = thunk_strcmp(pcVar6,str_100133c2);
                            uVar15 = local_99c;
                            if (iVar7 == 0) break;
                          }
                          uVar12 = uVar12 + 1;
                          pcVar6 = pcVar6 + 0x168;
                        } while (uVar12 < uVar15);
                      }
                      if (uVar12 < uVar15) {
                        iVar7 = thunk_strcmp(acStack_37ef + uVar12 * 0x168,str_100133c2);
                        bVar45 = iVar7 == 0;
                        uVar15 = local_99c;
                      }
                      if ((uVar15 <= uVar12) || (!(bool)(uVar23 - iVar5 < 0x80000000 | bVar45))) {
                        if ((int)(uVar23 - iVar5) < 0) goto LAB_10005bf4;
                        if (local_974 == '\0') {
                          DataMemoryBarrier(0xb);
                          iVar5 = __atomic_fetch_or((uint32_t *)(auStack_2bc),0,__ATOMIC_ACQ_REL);
                          DataMemoryBarrier(0xb);
                          if (iVar5 != 0) {
                            iVar5 = local_3e50 +
                                    ((local_3e50 / 0x3c) * 0x10 - local_3e50 / 0x3c) * -4;
                            local_3c85 = iVar5 == 0;
                            if (iVar5 == 0) {
                              local_2b8 = 0;
                            }
                            else {
                              if ((local_3e50 & 3) != 0) goto LAB_10005bf4;
                              local_2b8 = 1;
                            }
                            goto LAB_10005b70;
                          }
                        }
                        local_3c85 = true;
                        local_2b8 = 0;
                      }
                      else {
                        thunk_memcpy(&local_b04,local_3804 + uVar12 * 0x168,0x168);
                        local_2b8 = 0;
                        local_990 = local_afc;
                        local_98c = local_af8;
                        local_972 = local_972 | local_afc == 0;
                        local_988 = local_af4;
                        local_3c85 = false;
                      }
LAB_10005b70:
                      local_974 = '\0';
                      local_3e3c = 0;
                      local_3e40 = 1;
                      iVar5 = Ram40010800;
                      pcVar6 = str_10013090;
                      if (DAT_100140a0 == 0) {
                        pcVar6 = str_10013b6a;
                      }
                      if ((iVar5 == 0x50414d57) && (iVar5 = Ram40010804, iVar5 != 0)) {
                        uVar23 = Ram40010808;
                        bVar45 = 0xb < uVar23;
                        if (bVar45) {
                          uVar23 = Ram40010808;
                        }
                        if ((!bVar45 || uVar23 < 0x98) ||
                           (pcVar2 = (code *)UINT_40010894, pcVar2 == (code *)0x0))
                        goto LAB_10005bd8;
                        local_3e34 = (*pcVar2)(recovered_10009798,&local_4238,pcVar6);
                        if (local_3e34 != 0) goto LAB_10005bf4;
                      }
                      else {
LAB_10005bd8:
                        local_3e34 = 0;
                      }
                      local_978 = local_3e50 + 0x3c;
                      local_3e40 = 0;
                    }
                  }
LAB_10005bf4:
                  pbVar9 = local_3ea0;
                  puVar24 = local_3ea4;
                  pbVar35 = local_3ea8;
                  uVar23 = local_3eac;
                  local_3ef4 = '\0';
                  thunk_memset(&local_29c,0,0x30);
                  uVar15 = terror_ui_window_pointer_state_ex(&local_4238,&local_29c);
                  iVar5 = DAT_100140a0;
                  if (uVar15 != 0) {
                    if (local_3e9c == '\0') {
                      local_3e9c = '\x01';
                      local_3ea8 = (byte *)((int)local_4234 / 2);
                      if (local_4234 == 0) {
                        local_3ea8 = (byte *)0x17c;
                      }
                      local_3ea4 = (uint *)((int)local_4230 / 2);
                      if (local_4230 == 0) {
                        local_3ea4 = (uint *)0xc8;
                      }
                    }
                    if (local_3e90 < 1) {
                      if (DAT_100140a0 != 0) goto LAB_10005ce8;
                      iVar7 = 0x20;
LAB_10005d50:
                      iVar27 = 10;
                      iVar5 = 0;
                    }
                    else {
                      if (DAT_100140a0 == 0) {
                        iVar7 = local_3e90 + 0x16;
                        goto LAB_10005d50;
                      }
LAB_10005ce8:
                      iVar7 = 0x16;
                      iVar27 = 0x56;
                      if (0 < local_3e90) {
                        iVar7 = local_3e90 + 0xc;
                        iVar27 = local_3e90 + 0x4c;
                      }
                      if (0x207 < (int)local_4234) {
                        iVar27 = 0x2e;
                      }
                      if (local_4234 == 0) {
                        iVar27 = 0x2e;
                      }
                      iVar41 = 0x18;
                      if (0 < local_3e90) {
                        iVar41 = local_3e90 * 2 + 4;
                      }
                      iVar27 = iVar27 + iVar41;
                      iVar7 = iVar7 + iVar27;
                    }
                    iVar41 = local_4230 - 10;
                    if (local_4230 == 0) {
                      iVar41 = 0x186;
                    }
                    iVar16 = (iVar41 - iVar7) + -8;
                    if (local_3e90 < 1) {
                      iVar39 = 10;
                      bVar45 = SBORROW4(iVar16,0x10);
                      iVar7 = (iVar41 - iVar7) + -0x18;
                    }
                    else {
                      bVar45 = SBORROW4(iVar16,local_3e90 + 6);
                      iVar7 = iVar16 - (local_3e90 + 6);
                      iVar39 = local_3e90;
                    }
                    if (iVar7 < 0 != bVar45) {
                      iVar16 = iVar39 + 6;
                    }
                    local_3ef4 = false;
                    if ((local_29c & 2) != 0) {
                      local_3ef4 = (local_288 + -10 < &PrefetchAbort && iVar27 <= (int)local_284) &&
                                   (int)local_284 < iVar16 + iVar27;
                    }
                    local_3ea0 = (byte *)0x0;
                    if ((local_29c & 4) != 0) {
                      local_3ea4 = (uint *)(local_4230 - 1);
                      if (local_4230 == 0) {
                        local_3ea4 = (uint *)0x18f;
                      }
                      if ((int)local_284 < (int)local_3ea4) {
                        local_3ea4 = local_284;
                      }
                      if ((int)local_284 < 0) {
                        local_3ea4 = (uint *)0x0;
                      }
                      local_3ea8 = (byte *)(local_4234 - 1);
                      if (local_4234 == 0) {
                        local_3ea8 = (byte *)0x2f7;
                      }
                      if ((int)local_288 < (int)local_3ea8) {
                        local_3ea8 = local_288;
                      }
                      if ((int)local_288 < 0) {
                        local_3ea8 = (byte *)0x0;
                      }
                      local_3ea0 = local_298;
                    }
                  }
                  uVar23 = uVar23 & 6;
                  if (iVar5 == 0) {
                    if (uVar23 == 2) {
                      iVar5 = Ram40010800;
                      local_288 = (byte *)0x0;
                      local_28c = 0;
                      local_290 = (byte *)0x0;
                      local_294 = (uint *)0x0;
                      local_298 = (byte *)0x0;
                      local_29c = 0;
                      if ((iVar5 == 0x50414d57) && (iVar5 = Ram40010804, iVar5 != 0)) {
                        uVar15 = Ram40010808;
                        bVar45 = 0xb < uVar15;
                        if (bVar45) {
                          uVar15 = Ram40010808;
                        }
                        if (((bVar45 && 0x207 < uVar15) && (_DAT_40010a04 != (code *)0x0)) &&
                           (iVar5 = (*_DAT_40010a04)(str_10013080,&local_29c), iVar5 != 0)) {
                          if ((local_29c & 0xfffffffb) == 1) {
                            if (local_298 != (byte *)0x0) goto switchD_10007e60_caseD_54;
                          }
                          else if ((local_29c == 3) && (local_290 != (byte *)0x0)) {
                            switch((uintptr_t)(*local_290)) {
                            case 0x54:
                            case 0x59:
                            case 0x74:
                            case 0x79:
                              break;
                            case 0x55:
                            case 0x56:
                            case 0x57:
                            case 0x58:
                            case 0x5a:
                            case 0x5b:
                            case 0x5c:
                            case 0x5d:
                            case 0x5e:
                            case 0x5f:
                            case 0x60:
                            case 0x61:
                            case 0x62:
                            case 99:
                            case 100:
                            case 0x65:
                            case 0x66:
                            case 0x67:
                            case 0x68:
                            case 0x69:
                            case 0x6a:
                            case 0x6b:
                            case 0x6c:
                            case 0x6d:
                            case 0x6e:
                            case 0x6f:
                            case 0x70:
                            case 0x71:
                            case 0x72:
                            case 0x73:
                            case 0x75:
                            case 0x76:
                            case 0x77:
                            case 0x78:
                              goto switchD_10007e60_caseD_55;
                            default:
                              if (*local_290 != 0x31) goto switchD_10007e60_caseD_55;
                            }
                            goto switchD_10007e60_caseD_54;
                          }
                        }
                      }
switchD_10007e60_caseD_55:
                      iVar5 = 0;
                      uVar15 = 0;
LAB_10005f24:
                      iVar7 = Ram40010800;
                      if (((iVar7 != 0x50414d57) || (iVar7 = Ram40010804, iVar7 == 0)) ||
                         ((uVar12 = Ram40010808, uVar12 < 0xc ||
                          (((uVar12 = Ram40010808, uVar12 < 0x30 ||
                            (pcVar2 = (code *)UINT_4001082c, pcVar2 == (code *)0x0)) ||
                           (uVar12 = (*pcVar2)(), uVar12 == 0)))))) goto LAB_1000635c;
                      uVar33 = (uVar12 & 0xffff) >> 8;
                      if ((uVar12 & 0x800000ff) == 0x80000000 && uVar33 == 0) goto LAB_10005f0c;
                      uVar13 = uVar12 & 0xff;
                      if ((uVar12 & 0x40000) == 0) {
                        if (DAT_100140a0 != 0) {
                          bVar45 = recovered_1000ec14((int)&local_4238,uVar13,uVar33);
                          uVar36 = 1;
                          if (bVar45) goto LAB_10005f10;
                        }
                        if ((uVar12 & 0x20000) == 0) {
                          if (0x5e < uVar13 - 0x20) {
                            if ((uVar33 == 0xe || uVar13 == 0x7f) || (uVar13 == 8)) {
                              uVar36 = 1;
                              if (local_3e88 != 0) {
                                do {
                                  local_3e88 = local_3e88 - 1;
                                  if (local_3e88 == 0) break;
                                } while ((local_3e8c[local_3e88] & 0xc0) == 0x80);
                                local_3e8c[local_3e88] = 0;
                              }
                            }
                            else {
                              if ((uVar33 != 0x1c && uVar13 != 0xd) && (uVar13 != 10)) {
                                if ((uVar13 != 0x1b) && (uVar36 = uVar15, uVar33 != 1))
                                goto LAB_10005f10;
                                local_3e47 = '\0';
                                local_423c = 1;
                                goto switchD_10007e60_caseD_54;
                              }
                              uVar15 = recovered_10008340((uint)&local_4238,local_3e8c);
                              uVar36 = 1;
                              if (uVar15 != 0) {
                                if (local_3e8c != (byte *)0x0) {
                                  *local_3e8c = 0;
                                }
                                local_3e88 = 0;
                              }
                            }
                            goto LAB_10005f10;
                          }
                          if (0xfffffffd < local_3e88) goto LAB_10005f0c;
                          uVar33 = local_3e88 + 2;
                          if (local_3e8c == (byte *)0x0) {
LAB_100061e8:
                            uVar10 = local_3e84;
                            if (local_3e84 == 0) {
                              uVar10 = 0x40;
                            }
                            if (uVar10 < uVar33) {
                              do {
                                uVar13 = uVar33;
                                if (-1 < (int)uVar10) {
                                  uVar13 = uVar10 << 1;
                                }
                                uVar10 = uVar13;
                              } while (uVar10 < uVar33);
                            }
                            iVar7 = Ram40010800;
                            if ((iVar7 == 0x50414d57) && (iVar7 = Ram40010804, iVar7 != 0)) {
                              uVar33 = Ram40010808;
                              bVar45 = 0xb < uVar33;
                              if (bVar45) {
                                uVar33 = Ram40010808;
                              }
                              if ((bVar45 && 0x57 < uVar33) &&
                                 (pcVar2 = (code *)UINT_40010854, pcVar2 != (code *)0x0)) {
                                pbVar35 = (*pcVar2)(local_3e8c,uVar10);
                                uVar36 = uVar15;
                                if (pbVar35 == (byte *)0x0) goto LAB_10005f10;
                                if (local_3e8c == (byte *)0x0) {
                                  *pbVar35 = 0;
                                }
                                local_3e8c = pbVar35;
                                local_3e84 = uVar10;
                                goto LAB_10006014;
                              }
                            }
LAB_10005f0c:
                            uVar36 = uVar15;
                            goto LAB_10005f10;
                          }
                          if (local_3e84 < uVar33) goto LAB_100061e8;
LAB_10006014:
                          local_3e8c[local_3e88] = (byte)uVar12;
                          local_3e8c[local_3e88 + 1] = 0;
                          local_3e88 = local_3e88 + 1;
                        }
                        else {
                          if ((local_3e46 != 1) || (local_3e40 == 0)) goto LAB_10005f0c;
                          if (((uVar12 & 0xbf) != 3 && uVar13 != 99) &&
                             (uVar36 = uVar15, uVar33 != 0x2e)) goto LAB_10005f10;
                          iVar7 = Ram40010800;
                          if ((iVar7 == 0x50414d57) && (iVar7 = Ram40010804, iVar7 != 0)) {
                            uVar15 = Ram40010808;
                            bVar45 = 0xb < uVar15;
                            if (bVar45) {
                              uVar15 = Ram40010808;
                            }
                            if ((bVar45 && 0x24f < uVar15) && (_DAT_40010a4c != (code *)0x0)) {
                              (*_DAT_40010a4c)();
                            }
                          }
                          recovered_1000cc50((int)&local_4238,&DAT_10013b71);
                          if (local_3e8c != (byte *)0x0) {
                            *local_3e8c = 0;
                          }
                          local_3e88 = 0;
                        }
LAB_10006114:
                        uVar36 = 1;
                      }
                      else {
                        uVar12 = uVar12 & 0xbf;
                        if ((!(uVar12 == 3 || uVar13 == 99)) && (uVar33 != 0x2e)) {
                          if ((uVar12 == 0x16 || uVar13 == 0x76) || (uVar33 == 0x2f)) {
                            if (DAT_100140a0 != 0) {
                              uVar12 = local_4d4;
                            }
                            if (DAT_100140a0 == 0 || uVar12 == 0) {
                              cVar3 = recovered_1000d90c((int)&local_4238);
                              uVar36 = 1;
                              if (cVar3 == '\0') {
                                uVar36 = uVar15;
                              }
                              goto LAB_10005f10;
                            }
                            iVar7 = Ram40010800;
                            if ((iVar7 == 0x50414d57) && (iVar7 = Ram40010804, iVar7 != 0)) {
                              uVar12 = Ram40010808;
                              bVar45 = 0xb < uVar12;
                              if (bVar45) {
                                uVar12 = Ram40010808;
                              }
                              if ((bVar45 && 0x187 < uVar12) &&
                                 (pcVar2 = (code *)UINT_40010984, pcVar2 != (code *)0x0)) {
                                uVar33 = (*pcVar2)((char *)&local_29c,0x42);
                                uVar12 = 0x42;
                                if (uVar33 < 0x42) {
                                  uVar12 = uVar33;
                                }
                                if (uVar33 != 0) {
                                  uVar15 = 0;
                                  do {
                                    uVar33 = (uint)*(byte *)((int)&local_29c + uVar15);
                                    if (uVar33 == 0) break;
                                    if (0x1f < uVar33) {
                                      recovered_1000ec14((int)&local_4238,uVar33,0);
                                    }
                                    uVar15 = uVar15 + 1;
                                  } while (uVar12 != uVar15);
                                  goto LAB_10006114;
                                }
                              }
                            }
                          }
                          goto LAB_10005f0c;
                        }
                        bVar45 = recovered_1000d758((int)&local_4238);
                        uVar36 = bVar45 | uVar15;
                      }
LAB_10005f10:
                      iVar5 = iVar5 + 1;
                      uVar15 = uVar36;
                      if (iVar5 == 0x18) goto LAB_1000635c;
                      goto LAB_10005f24;
                    }
                  }
                  else {
                    local_423c = local_423c |
                                 ((pbVar35 != local_3ea8 || puVar24 != local_3ea4) ||
                                 pbVar9 != local_3ea0);
                    if (uVar23 == 2) goto switchD_10007e60_caseD_55;
                  }
                  goto switchD_10007e60_caseD_54;
                }
              }
            }
LAB_10007f4c:
            uVar22 = (uint)local_3e46;
            bVar43 = uVar22 == 1;
            if (bVar43) {
              uVar22 = Ram40010800;
            }
            if ((bVar43 && uVar22 == 0x50414d57) && (iVar5 = Ram40010804, iVar5 != 0)) {
              uVar22 = Ram40010808;
              bVar43 = 0xb < uVar22;
              if (bVar43) {
                uVar22 = Ram40010808;
              }
              if ((bVar43 && 0x24f < uVar22) && (_DAT_40010a4c != (code *)0x0)) {
                (*_DAT_40010a4c)();
              }
            }
            if (local_3e40 != 0) {
              do {
                if (local_3e3c != 0) break;
                recovered_1000958c((int)&local_4238);
                iVar5 = Ram40010800;
                if ((iVar5 == 0x50414d57) && (iVar5 = Ram40010804, iVar5 != 0)) {
                  uVar22 = Ram40010808;
                  bVar43 = 0xb < uVar22;
                  if (bVar43) {
                    uVar22 = Ram40010808;
                  }
                  if ((bVar43 && 0x9f < uVar22) &&
                     (pcVar2 = (code *)UINT_4001089c, pcVar2 != (code *)0x0)) {
                    (*pcVar2)();
                  }
                }
              } while (local_3e40 != 0);
            }
            terror_ui_scrollbar_release(auStack_3ef0);
            if (local_4238 != 0) {
              thunk_terror_ui_window_close(&local_4238);
            }
            if (((local_3ec4 != (void *)0x0) && (iVar5 = Ram40010800, iVar5 == 0x50414d57)) &&
               (iVar5 = Ram40010804, iVar5 != 0)) {
              uVar22 = Ram40010808;
              bVar43 = 0xb < uVar22;
              if (bVar43) {
                uVar22 = Ram40010808;
              }
              if ((bVar43 && 0x53 < uVar22) &&
                 (pcVar2 = (code *)UINT_40010850, pcVar2 != (code *)0x0)) {
                (*pcVar2)(local_3ec4);
              }
            }
            iVar5 = Ram40010800;
            if ((iVar5 == 0x50414d57) && (iVar5 = Ram40010804, iVar5 != 0)) {
              uVar22 = Ram40010808;
              bVar43 = 0xb < uVar22;
              if (bVar43) {
                uVar22 = Ram40010808;
              }
              if ((bVar43 && 0x53 < uVar22) &&
                 (pcVar2 = (code *)UINT_40010850, pcVar2 != (code *)0x0)) {
                (*pcVar2)(local_3e78);
              }
            }
            iVar5 = Ram40010800;
            if ((iVar5 == 0x50414d57) && (iVar5 = Ram40010804, iVar5 != 0)) {
              uVar22 = Ram40010808;
              bVar43 = 0xb < uVar22;
              if (bVar43) {
                uVar22 = Ram40010808;
              }
              if ((bVar43 && 0x53 < uVar22) &&
                 (pcVar2 = (code *)UINT_40010850, pcVar2 != (code *)0x0)) {
                (*pcVar2)(local_3ec0);
              }
            }
            iVar5 = Ram40010800;
            if ((iVar5 == 0x50414d57) && (iVar5 = Ram40010804, iVar5 != 0)) {
              uVar22 = Ram40010808;
              bVar43 = 0xb < uVar22;
              if (bVar43) {
                uVar22 = Ram40010808;
              }
              if ((bVar43 && 0x53 < uVar22) &&
                 (pcVar2 = (code *)UINT_40010850, pcVar2 != (code *)0x0)) {
                (*pcVar2)(local_3e8c);
              }
            }
            iVar5 = Ram40010800;
            if ((iVar5 == 0x50414d57) && (iVar5 = Ram40010804, iVar5 != 0)) {
              uVar22 = Ram40010808;
              bVar43 = 0xb < uVar22;
              if (bVar43) {
                uVar22 = Ram40010808;
              }
              if ((bVar43 && 0x53 < uVar22) &&
                 (pcVar2 = (code *)UINT_40010850, pcVar2 != (code *)0x0)) {
                (*pcVar2)(local_3e30);
              }
            }
            iVar5 = Ram40010800;
            if ((iVar5 == 0x50414d57) && (iVar5 = Ram40010804, iVar5 != 0)) {
              uVar22 = Ram40010808;
              bVar43 = 0xb < uVar22;
              if (bVar43) {
                uVar22 = Ram40010808;
              }
              if ((bVar43 && 0x53 < uVar22) &&
                 (pcVar2 = (code *)UINT_40010850, pcVar2 != (code *)0x0)) {
                (*pcVar2)(local_3e28);
              }
            }
            local_3e30 = (undefined1 *)0x0;
            local_3e28 = (byte *)0x0;
            local_3e24 = 0;
            local_3e84 = 0;
            local_3e88 = 0;
            local_3e8c = (byte *)0x0;
            local_3e2c = 0;
            if (local_5f0 == (void *)0x0) {
              return 1;
            }
            iVar5 = Ram40010800;
            if (iVar5 != 0x50414d57) {
              return 1;
            }
            iVar5 = Ram40010804;
            if (iVar5 == 0) {
              return 1;
            }
            uVar22 = Ram40010808;
            bVar43 = 0xb < uVar22;
            if (bVar43) {
              uVar22 = Ram40010808;
            }
            if (!(!bVar43 || uVar22 < 0x54)) {
              pcVar2 = (code *)UINT_40010850;
              if (pcVar2 == (code *)0x0) {
                return 1;
              }
              (*pcVar2)(local_5f0);
              return 1;
            }
            return 1;
          }
          thunk_terror_ui_window_close(&local_4238);
        }
        recovered_1000b890((int)&local_4238);
        iVar5 = Ram40010800;
        goto joined_r0x10004e14;
      }
      uVar23 = local_3e80;
      if (local_3e80 == 0) {
        uVar23 = 0x10;
      }
      uVar15 = 0x1fffffff;
      if (uVar23 < 0x10000000) {
        uVar15 = uVar23 << 1;
      }
      if (local_3e80 == 0) {
        uVar15 = 0x10;
      }
      if ((((uVar22 < uVar15) && (uVar15 < 0x20000000)) &&
          (iVar5 = Ram40010800, iVar5 == 0x50414d57)) && (iVar5 = Ram40010804, iVar5 != 0)) {
        uVar22 = Ram40010808;
        bVar43 = 0xb < uVar22;
        if (bVar43) {
          uVar22 = Ram40010808;
        }
        if (((bVar43 && 0x57 < uVar22) && (pcVar2 = (code *)UINT_40010854, pcVar2 != (code *)0x0))
           && (pvVar14 = (*pcVar2)(local_3ec4,uVar15 << 3), pvVar14 != (void *)0x0)) {
          local_3ec4 = pvVar14;
          local_3e80 = uVar15;
          goto LAB_10004af4;
        }
      }
    }
  }
  else {
    uVar22 = local_3e84;
    if (local_3e84 == 0) {
      uVar22 = 0x40;
    }
    uVar10 = local_3e84;
    if (uVar22 < 0x40) {
      do {
        uVar22 = uVar10 << 1;
        bVar43 = uVar10 < 0x20;
        uVar10 = uVar22;
      } while (bVar43);
    }
    iVar5 = Ram40010800;
    if ((iVar5 == 0x50414d57) && (iVar5 = Ram40010804, iVar5 != 0)) {
      uVar23 = Ram40010808;
      bVar43 = 0xb < uVar23;
      if (bVar43) {
        uVar23 = Ram40010808;
      }
      if (((bVar43 && 0x57 < uVar23) && (pcVar2 = (code *)UINT_40010854, pcVar2 != (code *)0x0)) &&
         (pbVar9 = (*pcVar2)(local_3e8c,uVar22), pbVar9 != (byte *)0x0)) {
        if (local_3e8c == (byte *)0x0) {
          *pbVar9 = 0;
        }
        local_3e8c = pbVar9;
        local_3e84 = uVar22;
        goto LAB_1000497c;
      }
    }
  }
  iVar5 = Ram40010800;
  if ((iVar5 == 0x50414d57) && (iVar5 = Ram40010804, iVar5 != 0)) {
    uVar22 = Ram40010808;
    bVar43 = 0xb < uVar22;
    if (bVar43) {
      uVar22 = Ram40010808;
    }
    if ((bVar43 && 0x53 < uVar22) && (pcVar2 = (code *)UINT_40010850, pcVar2 != (code *)0x0)) {
      (*pcVar2)(local_3e8c);
    }
  }
  iVar5 = Ram40010800;
  if ((iVar5 == 0x50414d57) && (iVar5 = Ram40010804, iVar5 != 0)) {
    uVar22 = Ram40010808;
    bVar43 = 0xb < uVar22;
    if (bVar43) {
      uVar22 = Ram40010808;
    }
    if ((bVar43 && 0x53 < uVar22) && (pcVar2 = (code *)UINT_40010850, pcVar2 != (code *)0x0)) {
      (*pcVar2)(local_3e30);
    }
  }
  iVar5 = Ram40010800;
  if ((iVar5 == 0x50414d57) && (iVar5 = Ram40010804, iVar5 != 0)) {
    uVar22 = Ram40010808;
    bVar43 = 0xb < uVar22;
    if (bVar43) {
      uVar22 = Ram40010808;
    }
    if ((bVar43 && 0x53 < uVar22) && (pcVar2 = (code *)UINT_40010850, pcVar2 != (code *)0x0)) {
      (*pcVar2)(local_3e28);
    }
  }
  iVar5 = Ram40010800;
  local_3e30 = (undefined1 *)0x0;
  local_3e28 = (byte *)0x0;
  local_3e24 = 0;
  local_3e84 = 0;
  local_3e88 = 0;
  local_3e8c = (byte *)0x0;
  local_3e2c = 0;
joined_r0x10004e14:
  if ((iVar5 == 0x50414d57) && (iVar5 = Ram40010804, iVar5 != 0)) {
    uVar22 = Ram40010808;
    bVar43 = 0xb < uVar22;
    if (bVar43) {
      uVar22 = Ram40010808;
    }
    if ((bVar43 && 0x53 < uVar22) && (pcVar2 = (code *)UINT_40010850, pcVar2 != (code *)0x0)) {
      (*pcVar2)(local_3ec4);
    }
  }
  iVar5 = Ram40010800;
  if ((iVar5 == 0x50414d57) && (iVar5 = Ram40010804, iVar5 != 0)) {
    uVar22 = Ram40010808;
    bVar43 = 0xb < uVar22;
    if (bVar43) {
      uVar22 = Ram40010808;
    }
    if ((bVar43 && 0x53 < uVar22) && (pcVar2 = (code *)UINT_40010850, pcVar2 != (code *)0x0)) {
      (*pcVar2)(local_3ec0);
    }
  }
  local_3ec4 = (void *)0x0;
  iVar5 = Ram40010800;
  if ((iVar5 == 0x50414d57) && (iVar5 = Ram40010804, iVar5 != 0)) {
    uVar22 = Ram40010808;
    bVar43 = 0xb < uVar22;
    if (bVar43) {
      uVar22 = Ram40010808;
    }
    if ((bVar43 && 0x2b < uVar22) && (pcVar2 = (code *)UINT_40010828, pcVar2 != (code *)0x0)) {
      (*pcVar2)(str_10013060);
    }
  }
  return 0;
LAB_1000635c:
  local_423c = uVar15 | local_423c;
switchD_10007e60_caseD_54:
  puVar24 = local_3ea4;
  pbVar35 = local_3ea8;
  uVar15 = (uint)local_3ea0 & 1;
  if (uVar15 == 0) {
    local_3e9a = 0;
  }
  else {
    if (local_3e9b == '\0') {
      if (DAT_100140a0 != 0) {
        thunk_memset(&local_29c,0,0x2c);
        local_294 = puVar24;
        local_28c = 1;
        local_29c = 1;
        local_290 = (byte *)0x1;
        local_2ac = local_2ac & 0xffffff00;
        local_298 = pbVar35;
        local_2b4 = (byte *)&local_4238;
        local_2b0 = &local_29c;
        recovered_1000f1b8((int *)&local_2b4);
        local_423c = local_2ac & 0xff | local_423c;
        if (DAT_100140a0 != 0) goto LAB_10006974;
      }
      iVar5 = 0x20;
      if (0 < local_3e90) {
        iVar5 = local_3e90 + 0x16;
      }
      iVar7 = local_4230 - 10;
      if (local_4230 == 0) {
        iVar7 = 0x186;
      }
      uVar12 = (iVar7 - iVar5) - 8;
      if (local_3e90 < 1) {
        if ((int)uVar12 < 0x10) {
          uVar12 = 0x10;
        }
      }
      else if ((int)uVar12 < local_3e90 + 6) {
        uVar12 = local_3e90 + 6;
      }
      recovered_10012820(&local_2b4,(int)&local_4238);
      uVar33 = local_3e54;
      if (local_3e90 < 1) {
        iVar5 = 0x16;
      }
      else {
        iVar5 = local_3e90 + 0xc;
      }
      if (DAT_100140a0 == 0) {
        iVar7 = 10;
        bVar45 = true;
      }
      else {
        iVar7 = 0x56;
        if (0 < local_3e90) {
          iVar7 = local_3e90 + 0x4c;
        }
        if (0x207 < (int)local_4234) {
          iVar7 = 0x2e;
        }
        if (local_4234 == 0) {
          iVar7 = 0x2e;
        }
        iVar27 = 0x18;
        if (0 < local_3e90) {
          iVar27 = local_3e90 * 2 + 4;
        }
        iVar7 = iVar7 + iVar27;
        bVar45 = false;
      }
      iVar27 = local_4230 - 10;
      if (local_4230 == 0) {
        iVar27 = 0x186;
      }
      iVar5 = (iVar27 - (iVar7 + iVar5)) + -8;
      if (local_3e90 < 1) {
        if (iVar5 < 0x10) {
          iVar5 = 0x10;
        }
      }
      else if (iVar5 < local_3e90 + 6) {
        iVar5 = local_3e90 + 6;
      }
      pbVar9 = pbVar35 + -10;
      if (((pbVar9 < (byte *)0xc) && (iVar7 + iVar5 + -0x1e <= (int)puVar24)) &&
         ((int)puVar24 < iVar7 + iVar5 + -0x10)) {
        uVar12 = local_3e54 - 1;
        local_3e54 = uVar12;
        local_3e54 = recovered_1000ba00((int)&local_4238);
        if ((int)uVar12 < (int)local_3e54) {
          local_3e54 = uVar12;
        }
        if ((int)uVar33 < 1) {
          local_3e54 = 0;
        }
        puVar17 = (uint *)(uint)(local_3e54 != uVar33);
      }
      else {
        if (local_3e90 < 1) {
          iVar5 = 0x16;
        }
        else {
          iVar5 = local_3e90 + 0xc;
        }
        if (bVar45) {
          iVar5 = iVar5 + 10;
          iVar7 = 10;
        }
        else {
          iVar7 = 0x56;
          if (0 < local_3e90) {
            iVar7 = local_3e90 + 0x4c;
          }
          if (0x207 < (int)local_4234) {
            iVar7 = 0x2e;
          }
          if (local_4234 == 0) {
            iVar7 = 0x2e;
          }
          iVar41 = 0x18;
          if (0 < local_3e90) {
            iVar41 = local_3e90 * 2 + 4;
          }
          iVar7 = iVar7 + iVar41;
          iVar5 = iVar5 + iVar7;
        }
        iVar41 = (iVar27 - iVar5) + -8;
        if (local_3e90 < 1) {
          iVar16 = 10;
          bVar45 = SBORROW4(iVar41,0x10);
          iVar5 = (iVar27 - iVar5) + -0x18;
        }
        else {
          bVar45 = SBORROW4(iVar41,local_3e90 + 6);
          iVar5 = iVar41 - (local_3e90 + 6);
          iVar16 = local_3e90;
        }
        if (iVar5 < 0 != bVar45) {
          iVar41 = iVar16 + 6;
        }
        if (((pbVar9 < (byte *)0xc) && ((int)puVar24 < iVar41 + iVar7)) &&
           (iVar41 + iVar7 + -0xe <= (int)puVar24)) {
          uVar12 = local_3e54 + 1;
          local_3e54 = uVar12;
          local_3e54 = recovered_1000ba00((int)&local_4238);
          if ((int)uVar12 < (int)local_3e54) {
            local_3e54 = uVar12;
          }
          if ((int)uVar33 < -1) {
            local_3e54 = 0;
          }
          puVar17 = (uint *)0x0;
          if (local_3e54 != uVar33) {
            puVar17 = (uint *)0x1;
          }
        }
        else {
          puVar26 = (uint *)(uVar12 - 0x18);
          if (uVar12 < 0x34) {
            puVar26 = (uint *)&FIQ;
          }
          puVar17 = (uint *)0x0;
          if (pbVar9 < &PrefetchAbort) {
            bVar44 = SBORROW4((int)puVar24,10);
            puVar31 = (undefined1 *)((int)puVar24 + -10);
            bVar45 = puVar24 == (uint *)0xa;
            if (9 < (int)puVar24) {
              bVar44 = SBORROW4((int)puVar26,(int)puVar24);
              puVar31 = (undefined1 *)((int)puVar26 - (int)puVar24);
              bVar45 = puVar26 == puVar24;
            }
            if (!bVar45 && (int)puVar31 < 0 == bVar44) {
              bVar44 = SBORROW4((int)local_2b4,(int)pbVar35);
              iVar5 = (int)local_2b4 - (int)pbVar35;
              bVar45 = local_2b4 == pbVar35;
              if ((int)local_2b4 <= (int)pbVar35) {
                bVar44 = SBORROW4((int)local_2b0,(int)puVar24);
                iVar5 = (int)local_2b0 - (int)puVar24;
                bVar45 = local_2b0 == puVar24;
                puVar17 = local_2b0;
              }
              if (bVar45 || iVar5 < 0 != bVar44) {
                pbVar9 = local_2b4 + local_2ac;
                bVar44 = SBORROW4((int)pbVar9,(int)pbVar35);
                iVar5 = (int)pbVar9 - (int)pbVar35;
                bVar45 = pbVar9 == pbVar35;
                if ((int)pbVar35 < (int)pbVar9) {
                  puVar17 = (uint *)(local_2a8 + (int)puVar17);
                  bVar44 = SBORROW4((int)puVar17,(int)puVar24);
                  iVar5 = (int)puVar17 - (int)puVar24;
                  bVar45 = puVar17 == puVar24;
                }
                if (bVar45 || iVar5 < 0 != bVar44) goto LAB_100066e0;
              }
              else {
LAB_100066e0:
                recovered_1000c280((int *)&local_29c,(int)&local_4238);
                pbVar34 = local_290;
                pbVar9 = local_298;
                recovered_10012820(&local_29c,(int)&local_4238);
                pbVar35 = pbVar34 + -0x1e;
                uVar12 = recovered_1000ba00((int)&local_4238);
                pbVar34 = pbVar34 + -0x22;
                if ((int)pbVar35 < 0x16) {
                  pbVar34 = (byte *)0x12;
                }
                uVar21 = 0;
                uVar13 = uVar12;
                uVar36 = extraout_r2;
                if (0 < (int)uVar12) {
                  uVar13 = (int)pbVar34 - (int)local_290;
                  uVar36 = uVar13;
                  pbVar35 = local_290;
                }
                if (0 < (int)uVar13) {
                  puVar31 = (undefined1 *)((int)puVar24 + (-((int)pbVar35 / 2) - (int)pbVar9));
                  lVar46 = (ulonglong)uVar12 * ZEXT48(puVar31);
                  lVar46 = recovered_100041e4(CONCAT44(((int)puVar31 >> 0x1f) * uVar12 +
                                                       (int)((ulonglong)lVar46 >> 0x20),(int)lVar46)
                                              ,(ulonglong)uVar36);
                  iVar5 = (int)((ulonglong)lVar46 >> 0x20);
                  uVar13 = (uint)lVar46;
                  if ((int)-(iVar5 + (uint)(uVar12 < uVar13)) < 0 !=
                      (SBORROW4(0,iVar5) != SBORROW4(-iVar5,(uint)(uVar12 < uVar13)))) {
                    uVar13 = uVar12;
                  }
                  if (lVar46 < 0) {
                    uVar13 = 0;
                  }
                  local_3e54 = uVar13;
                  uVar21 = recovered_1000ba00((int)&local_4238);
                  if ((int)uVar13 < (int)uVar21) {
                    uVar21 = uVar13;
                  }
                  if ((int)uVar13 < 0) {
                    uVar21 = 0;
                  }
                }
                local_3e54 = uVar21;
              }
              recovered_10012820(&local_29c,(int)&local_4238);
              local_3e9a = 1;
              local_3e98 = (int)puVar24 - (int)local_298;
              puVar17 = (uint *)0x0;
              if (local_3e54 != uVar33) {
                puVar17 = (uint *)0x1;
              }
            }
          }
        }
      }
      local_423c = (uint)puVar17 | local_423c;
    }
LAB_10006974:
    if (local_3e9a == 1) {
      if (local_3e90 < 1) {
        iVar5 = 0x16;
        if (DAT_100140a0 == 0) goto LAB_100069fc;
LAB_100069a8:
        iVar7 = -0x18;
        if (0 < local_3e90) {
          iVar7 = local_3e90 * -2 + -4;
        }
        iVar27 = -0x56;
        if (0 < local_3e90) {
          iVar27 = -0x4c - local_3e90;
        }
        if (0x207 < (int)local_4234) {
          iVar27 = -0x2e;
        }
        if (local_4234 == 0) {
          iVar27 = -0x2e;
        }
        iVar27 = iVar27 + iVar7;
      }
      else {
        iVar5 = local_3e90 + 0xc;
        if (DAT_100140a0 != 0) goto LAB_100069a8;
LAB_100069fc:
        iVar27 = -10;
      }
      iVar7 = local_4230 - 10;
      if (local_4230 == 0) {
        iVar7 = 0x186;
      }
      uVar12 = ((iVar27 - iVar5) + iVar7) - 8;
      if (local_3e90 < 1) {
        if ((int)uVar12 < 0x10) {
          uVar12 = 0x10;
        }
      }
      else if ((int)uVar12 < local_3e90 + 6) {
        uVar12 = local_3e90 + 6;
      }
      recovered_10012820(&local_29c,(int)&local_4238);
      uVar13 = recovered_1000ba00((int)&local_4238);
      uVar33 = local_3e54;
      iVar5 = uVar12 - 0x22;
      if (uVar12 < 0x34) {
        iVar5 = 0x12;
      }
      if (((local_3e9a == 1) && (0 < (int)uVar13)) && (0 < iVar5 - (int)local_290)) {
        puVar31 = (undefined1 *)((int)puVar24 + (iVar27 - local_3e98));
        lVar46 = (ulonglong)uVar13 * ZEXT48(puVar31);
        lVar46 = recovered_100041e4(CONCAT44(((int)puVar31 >> 0x1f) * uVar13 +
                                             (int)((ulonglong)lVar46 >> 0x20),(int)lVar46),
                                    (ulonglong)(uint)(iVar5 - (int)local_290));
        iVar5 = (int)((ulonglong)lVar46 >> 0x20);
        uVar12 = (uint)lVar46;
        if ((int)-(iVar5 + (uint)(uVar13 < uVar12)) < 0 !=
            (SBORROW4(0,iVar5) != SBORROW4(-iVar5,(uint)(uVar13 < uVar12)))) {
          uVar12 = uVar13;
        }
        if (lVar46 < 0) {
          uVar12 = 0;
        }
        local_3e54 = uVar12;
        local_3e54 = recovered_1000ba00((int)&local_4238);
        if ((int)uVar12 < (int)local_3e54) {
          local_3e54 = uVar12;
        }
        if ((int)uVar12 < 0) {
          local_3e54 = 0;
        }
        local_423c = local_3e54 != uVar33 | local_423c;
      }
    }
  }
  uVar33 = local_3e54;
  uVar12 = local_423c;
  local_3e9b = (char)uVar15;
  local_3e54 = recovered_1000ba00((int)&local_4238);
  uVar15 = local_3ef8;
  if ((int)uVar33 < (int)local_3e54) {
    local_3e54 = uVar33;
  }
  if ((int)uVar33 < 0) {
    local_3e54 = 0;
  }
  uVar13 = (local_3e50 & 0x1fff) >> 0xc;
  if (uVar23 != 2) {
    uVar13 = 1;
  }
  bVar45 = local_3e54 != uVar33;
  bVar44 = uVar13 != uVar22 || bVar45;
  if (local_3ef4 == '\0' && (local_3e9a & 1) == 0) {
    iVar5 = -1;
    if (local_3ef8 == 0) {
      uVar33 = 0;
      goto LAB_10006bc8;
    }
  }
  else {
    iVar5 = 1;
    uVar33 = local_3ef8;
    if (0x1f < local_3ef8) goto LAB_10006bc8;
  }
  local_3ef8 = iVar5 + local_3ef8;
  uVar33 = local_3ef8;
LAB_10006bc8:
  if (0x1f < uVar15) {
    uVar15 = 0x20;
  }
  if (0x1f < uVar33) {
    uVar33 = 0x20;
  }
  if ((bVar43 || (bVar44 || (local_423c & 1) != 0)) ||
     (0x3ff < ((uVar15 * 0x20 * uVar15 * 0x20 * (uVar15 * -0x40 + 0xc00) + 0x80000 >> 0x14) * 10 +
               0x200 ^ (((uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)uVar33 * 0x20 * (uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)uVar33 * 0x20 * (uVar33 * -0x40 + 0xc00) + 0x80000 >> 0x14)
                        * 5 + 0x100) * 2))) {
    if ((bVar43 || (bVar44 || (local_423c & 1) != 0)) ||
       (uVar4 = terror_ui_scrollbar_restore(auStack_3ef0,&local_4238), uVar4 == '\0')) {
      uVar33 = local_4230;
      uVar15 = local_4234;
      if (DAT_100140a0 == 0) {
        uVar21 = thunk_terror_ui_colour(0);
        uVar36 = local_4230;
        if (local_4230 == 0) {
          uVar36 = 400;
        }
        uVar32 = 0;
        if ((int)uVar36 < 0) {
          uVar32 = uVar36;
        }
        uVar25 = local_4234;
        if (local_4234 == 0) {
          uVar25 = 0x2f8;
        }
        uVar18 = 0;
        if ((int)uVar25 < 0) {
          uVar18 = uVar25;
        }
        if (uVar33 == 0) {
          uVar33 = 400;
        }
        if ((int)uVar33 < (int)uVar36) {
          uVar36 = uVar33;
        }
        if ((int)uVar33 < 0) {
          uVar36 = 0;
        }
        if (uVar15 == 0) {
          uVar15 = 0x2f8;
        }
        if ((int)uVar15 < (int)uVar25) {
          uVar25 = uVar15;
        }
        if ((int)uVar15 < 0) {
          uVar25 = 0;
        }
        if ((int)uVar32 < (int)uVar36) {
          do {
            uVar15 = uVar18;
            if ((int)uVar18 < (int)uVar25) {
              do {
                if ((-1 < (int)(uVar15 | uVar32)) && (local_3ec8 != (void *)0x0)) {
                  uVar33 = local_4234;
                  if (local_4234 == 0) {
                    uVar33 = 0x2f8;
                  }
                  if ((int)uVar15 < (int)uVar33) {
                    uVar33 = local_4230;
                    if (local_4230 == 0) {
                      uVar33 = 400;
                    }
                    if ((int)uVar32 < (int)uVar33) {
                      uVar33 = local_4234 << 2;
                      if (local_4234 == 0) {
                        uVar33 = 0xbe0;
                      }
                      if (local_422c != 0) {
                        uVar33 = local_422c;
                      }
                      *(char *)((int)local_3ec8 + uVar15 * 4 + uVar32 * uVar33) =
                           (char)(uVar21 >> 0x10);
                      *(char *)((int)local_3ec8 + uVar15 * 4 + uVar32 * uVar33 + 1) =
                           (char)(uVar21 >> 8);
                      *(char *)((int)local_3ec8 + uVar15 * 4 + uVar32 * uVar33 + 2) = (char)uVar21;
                      *(undefined1 *)((int)local_3ec8 + uVar15 * 4 + uVar32 * uVar33 + 3) = 0xd9;
                    }
                  }
                }
                uVar15 = uVar15 + 1;
              } while (uVar25 != uVar15);
            }
            uVar32 = uVar32 + 1;
          } while (uVar32 != uVar36);
        }
        if (local_3e90 < 1) {
          iVar5 = 0x16;
        }
        else {
          iVar5 = local_3e90 + 0xc;
        }
        if (DAT_100140a0 == 0) {
          bVar43 = true;
          uVar15 = 10;
        }
        else {
          iVar7 = 0x56;
          if (0 < local_3e90) {
            iVar7 = local_3e90 + 0x4c;
          }
          if (0x207 < (int)local_4234) {
            iVar7 = 0x2e;
          }
          if (local_4234 == 0) {
            iVar7 = 0x2e;
          }
          iVar27 = 0x18;
          if (0 < local_3e90) {
            iVar27 = local_3e90 * 2 + 4;
          }
          uVar15 = iVar7 + iVar27;
          bVar43 = false;
        }
        iVar7 = local_4230 - 10;
        if (local_4230 == 0) {
          iVar7 = 0x186;
        }
        iVar27 = local_4234 - 0x1c;
        local_423c = 0x12;
        if (local_4234 == 0) {
          iVar27 = 0x2dc;
        }
        if (!bVar43) {
          local_423c = 0xe4;
          if (local_4234 < 700) {
            local_423c = 0xb0;
          }
          if ((int)local_4234 < 0x208) {
            local_423c = 0xc;
          }
          iVar27 = local_4234 - 0xc;
          if (local_4234 == 0) {
            local_423c = 0xe4;
            iVar27 = 0x2ec;
          }
          iVar27 = iVar27 - local_423c;
        }
        iVar41 = 0xe;
        iVar5 = (iVar7 - (uVar15 + iVar5)) + -8;
        if (0 < local_3e94) {
          iVar41 = local_3e94 + 8;
        }
        if (iVar41 < iVar27) {
          iVar41 = iVar27;
        }
        if (local_3e90 < 1) {
          if (iVar5 < 0x10) {
            iVar5 = 0x10;
          }
        }
        else if (iVar5 < local_3e90 + 6) {
          iVar5 = local_3e90 + 6;
        }
        uVar36 = thunk_terror_ui_colour(1);
        iVar27 = local_3e90;
        uVar33 = local_4234;
        iVar7 = DAT_100140a0;
        iVar39 = local_4230 - 10;
        iVar16 = local_4234 - 0x1c;
        if (local_4230 == 0) {
          iVar39 = 0x186;
        }
        if (local_4234 == 0) {
          iVar16 = 0x2dc;
        }
        if (DAT_100140a0 != 0) {
          iVar16 = -0xe4;
          if (local_4234 < 700) {
            iVar16 = -0xb0;
          }
          if ((int)local_4234 < 0x208) {
            iVar16 = -0xc;
          }
          iVar16 = local_4234 + iVar16 + -0xc;
          if (local_4234 == 0) {
            iVar16 = 0x208;
          }
        }
        iVar28 = 0xe;
        if (0 < local_3e94) {
          iVar28 = local_3e94 + 8;
        }
        if (iVar28 < iVar16) {
          iVar28 = iVar16;
        }
        iVar16 = local_3e94;
        if (local_3e94 < 1) {
          iVar16 = 6;
        }
        uVar21 = recovered_10003fa8(iVar28 + -8,iVar16);
        if ((int)uVar21 < 2) {
          uVar21 = 1;
        }
        if (iVar27 < 1) {
          iVar16 = 0x16;
        }
        else {
          iVar16 = iVar27 + 0xc;
        }
        if (iVar7 == 0) {
          iVar16 = iVar16 + 10;
        }
        else {
          iVar7 = 0x56;
          if (0 < iVar27) {
            iVar7 = iVar27 + 0x4c;
          }
          if (0x207 < (int)uVar33) {
            iVar7 = 0x2e;
          }
          if (uVar33 == 0) {
            iVar7 = 0x2e;
          }
          iVar28 = 0x18;
          if (0 < iVar27) {
            iVar28 = iVar27 * 2 + 4;
          }
          iVar16 = iVar7 + iVar28 + iVar16;
        }
        uVar33 = (iVar39 - iVar16) - 8;
        if (iVar27 < 1) {
          uVar32 = 0xc;
          if ((int)uVar33 < 0x11) {
            uVar33 = 0x10;
          }
        }
        else {
          if ((int)uVar33 <= (int)(iVar27 + 6U)) {
            uVar33 = iVar27 + 6U;
          }
          uVar32 = iVar27 + 2;
        }
        local_29c = 0;
        iVar7 = recovered_1000dce4((int)&local_4238,local_3e54,(int)local_3e54 >> 0x1f,&local_29c);
        uVar18 = thunk_terror_ui_colour(0);
        uVar25 = local_4230;
        if (local_4230 == 0) {
          uVar25 = 400;
        }
        uVar19 = iVar5 + uVar15;
        uVar38 = uVar25;
        if ((int)uVar19 < (int)uVar25) {
          uVar38 = uVar19;
        }
        if ((int)uVar19 < 0) {
          uVar38 = 0;
        }
        uVar42 = local_4234;
        if (local_4234 == 0) {
          uVar42 = 0x2f8;
        }
        uVar20 = iVar41 + local_423c;
        uVar40 = uVar42;
        if ((int)uVar20 < (int)uVar42) {
          uVar40 = uVar20;
        }
        if ((int)uVar20 < 0) {
          uVar40 = 0;
        }
        uVar33 = recovered_10003f20(uVar33,uVar32);
        if (uVar33 < 2) {
          uVar33 = 1;
        }
        if ((int)local_423c < (int)uVar42) {
          uVar42 = local_423c;
        }
        if ((int)uVar15 < (int)uVar25) {
          uVar25 = uVar15;
        }
        if ((int)uVar15 < 0) {
          uVar25 = 0;
        }
        if ((int)uVar25 < (int)uVar38) {
          do {
            uVar32 = uVar42;
            if ((int)uVar42 < (int)uVar40) {
              do {
                if ((-1 < (int)(uVar32 | uVar25)) && (local_3ec8 != (void *)0x0)) {
                  uVar37 = local_4234;
                  if (local_4234 == 0) {
                    uVar37 = 0x2f8;
                  }
                  if ((int)uVar32 < (int)uVar37) {
                    uVar37 = local_4230;
                    if (local_4230 == 0) {
                      uVar37 = 400;
                    }
                    if ((int)uVar25 < (int)uVar37) {
                      uVar37 = local_4234 << 2;
                      if (local_4234 == 0) {
                        uVar37 = 0xbe0;
                      }
                      if (local_422c != 0) {
                        uVar37 = local_422c;
                      }
                      *(char *)((int)local_3ec8 + (uintptr_t)uVar32 * 4 + uVar25 * uVar37) =
                           (char)(uVar18 >> 0x10);
                      *(char *)((int)local_3ec8 + (uintptr_t)uVar32 * 4 + uVar25 * uVar37 + 1) =
                           (char)(uVar18 >> 8);
                      *(char *)((int)local_3ec8 + (uintptr_t)uVar32 * 4 + uVar25 * uVar37 + 2) = (char)uVar18;
                      *(undefined1 *)((int)local_3ec8 + (uintptr_t)uVar32 * 4 + uVar25 * uVar37 + 3) = 0xd9;
                    }
                  }
                }
                uVar32 = uVar32 + 1;
              } while (uVar40 != uVar32);
            }
            uVar25 = uVar25 + 1;
          } while (uVar25 != uVar38);
        }
        uVar32 = thunk_terror_ui_colour(3);
        uVar32 = uVar32 & 0xff00 | (uVar32 & 0xff) << 0x10 | (uVar32 & 0xff0000) >> 0x10;
        recovered_10012a10((int)&local_4238,local_423c,uVar15,iVar41,1,uVar32);
        recovered_10012a10((int)&local_4238,local_423c,uVar19 - 1,iVar41,1,uVar32);
        recovered_10012a10((int)&local_4238,local_423c,uVar15,1,iVar5,uVar32);
        recovered_10012a10((int)&local_4238,uVar20 - 1,uVar15,1,iVar5,uVar32);
        if ((-1 < iVar7) && (iVar7 < (int)local_3e7c)) {
          iVar5 = 0;
          uVar32 = uVar36 & 0xff0000;
          pbVar35 = extraout_r2_00;
          local_4278 = iVar7;
          do {
            pbVar9 = &DAT_10013119;
            if (local_3ec4 != (void *)0x0) {
              uVar32 = *(uint *)((int)local_3ec4 + local_4278 * 8);
              pbVar35 = local_3ec0;
            }
            if (local_3ec4 != (void *)0x0) {
              pbVar9 = pbVar35 + uVar32;
            }
            pbVar35 = *(byte **)((int)local_3ec4 + local_4278 * 8 + 4);
            if ((local_3e6c == uVar21) && (local_4278 < local_3e70)) {
              puVar24 = (uint *)((int)local_3e78 + local_4278 * 8);
              uVar32 = puVar24[2] - *puVar24;
              iVar27 = 0x7fffffff;
              if (0x7ffffffe < uVar32) {
                uVar32 = 0x7fffffff;
              }
              if (puVar24[3] != puVar24[1] + (uint)(puVar24[2] < *puVar24)) {
                uVar32 = 0x7fffffff;
              }
            }
            else {
              uVar32 = recovered_1000c0f8((int)&local_4238,pbVar9,(uint)pbVar35);
              iVar27 = extraout_r1;
            }
            if ((int)local_29c < (int)uVar32) {
              iVar41 = iVar7;
              if (local_4278 == iVar7) {
                iVar27 = iVar7;
                iVar41 = local_3e68;
              }
              uVar18 = local_29c;
              if (local_4278 != iVar7 || iVar41 != iVar27) {
LAB_10007460:
                pbVar34 = (byte *)0x0;
                if ((0 < (int)local_29c) && (pbVar35 != (byte *)0x0)) {
                  iVar27 = 0;
                  do {
                    if (pbVar9 != (byte *)0x0) {
                      uVar25 = (int)pbVar35 - (int)pbVar34;
                      if (uVar21 < uVar25) {
                        pbVar29 = pbVar9 + (int)pbVar34;
                        uVar38 = 0xffffffff;
                        uVar42 = 0;
                        do {
                          bVar30 = pbVar29[uVar42];
                          if (bVar30 == 0) break;
                          if (bVar30 == 9) {
                            uVar38 = uVar42;
                          }
                          if (bVar30 == 0x20) {
                            uVar38 = uVar42;
                          }
                          uVar42 = uVar42 + 1;
                        } while (uVar21 != uVar42);
                        uVar42 = uVar21;
                        if ((int)uVar38 < 1) {
                          do {
                            uVar38 = uVar42;
                            if ((pbVar29[uVar38] & 0xc0) != 0x80) goto LAB_10007508;
                            uVar42 = uVar38 - 1;
                          } while (uVar38 - 1 != 0 && 0 < (int)uVar38);
                          uVar38 = 1;
                          do {
                            if ((pbVar29[uVar38] & 0xc0) != 0x80) goto LAB_10007508;
                            uVar38 = uVar38 + 1;
                          } while (uVar25 != uVar38);
                          goto LAB_10007504;
                        }
                      }
                      else {
LAB_10007504:
                        uVar38 = uVar25;
                      }
LAB_10007508:
                      pbVar34 = pbVar34 + uVar38;
                      if (pbVar34 < pbVar35) {
                        while (pbVar9[(int)pbVar34] == 0x20 || pbVar9[(int)pbVar34] == 9) {
                          pbVar34 = pbVar34 + 1;
                          if (pbVar35 <= pbVar34) {
                            pbVar34 = pbVar35;
                            goto LAB_10007588;
                          }
                        }
                      }
                    }
                    iVar27 = iVar27 + 1;
                  } while ((iVar27 < (int)local_29c) && (pbVar34 < pbVar35));
                }
LAB_10007588:
                if (local_4278 == iVar7) {
                  local_3e64 = local_29c;
                  local_3e68 = iVar7;
                  local_3e60 = uVar21;
                  local_3e5c = pbVar34;
                }
              }
              else {
                uVar25 = local_3e64;
                if (local_3e64 == local_29c) {
                  uVar25 = local_3e60;
                }
                if (local_3e64 != local_29c || uVar25 != uVar21) goto LAB_10007460;
                pbVar34 = local_3e5c;
              }
              do {
                uVar25 = 0;
                if ((pbVar9 == (byte *)0x0 || pbVar34 <= pbVar35) &&
                    (pbVar9 != (byte *)0x0 && pbVar35 != pbVar34)) {
                  uVar38 = (int)pbVar35 - (int)pbVar34;
                  if (uVar21 < uVar38) {
                    pbVar29 = pbVar9 + (int)pbVar34;
                    uVar25 = 0xffffffff;
                    uVar42 = 0;
                    do {
                      bVar30 = pbVar29[uVar42];
                      if (bVar30 == 0) break;
                      if (bVar30 == 9) {
                        uVar25 = uVar42;
                      }
                      if (bVar30 == 0x20) {
                        uVar25 = uVar42;
                      }
                      uVar42 = uVar42 + 1;
                    } while (uVar21 != uVar42);
                    uVar42 = uVar21;
                    if (0 < (int)uVar25) goto LAB_100075e8;
                    do {
                      if ((pbVar29[uVar42] & 0xc0) != 0x80) {
                        uVar25 = uVar42;
                        goto LAB_100075e8;
                      }
                      uVar25 = uVar42 - 1;
                      bVar43 = 0 < (int)uVar42;
                      uVar42 = uVar25;
                    } while (uVar25 != 0 && bVar43);
                    uVar25 = 1;
                    do {
                      if ((pbVar29[uVar25] & 0xc0) != 0x80) goto LAB_100075e8;
                      uVar25 = uVar25 + 1;
                    } while (uVar38 != uVar25);
                  }
                  uVar25 = uVar38;
                }
LAB_100075e8:
                iVar27 = 0xc;
                if (0 < local_3e90) {
                  iVar27 = local_3e90 + 2;
                }
                iVar41 = iVar27 * iVar5 + uVar15 + 2;
                iVar27 = local_3e90;
                if (local_3e90 < 1) {
                  iVar27 = 10;
                }
                if ((int)uVar19 < iVar41 + iVar27) goto LAB_10007734;
                uVar38 = uVar21;
                if (0 < (int)uVar25) {
                  uVar38 = uVar25;
                }
                recovered_10012bb4((int)&local_4238,local_423c + 4,iVar41,
                                   (int)(pbVar9 + (int)pbVar34),uVar38,
                                   uVar36 & 0xff00 | (uVar36 & 0xff) << 0x10 |
                                   (uVar36 & 0xff0000) >> 0x10);
                if (0 < (int)uVar25) {
                  pbVar34 = pbVar34 + uVar25;
                  if ((pbVar9 != (byte *)0x0) && (pbVar34 < pbVar35)) {
                    do {
                      if (pbVar9[(int)pbVar34] != 0x20 && pbVar9[(int)pbVar34] != 9)
                      goto LAB_100075bc;
                      pbVar34 = pbVar34 + 1;
                    } while (pbVar34 < pbVar35);
                    pbVar34 = pbVar35;
                  }
                }
LAB_100075bc:
                uVar18 = uVar18 + 1;
                iVar5 = iVar5 + 1;
                bVar43 = SBORROW4(uVar18,uVar32);
                iVar27 = uVar18 - uVar32;
                uVar25 = 0;
                if ((int)uVar18 < (int)uVar32) {
                  bVar43 = SBORROW4(iVar5,uVar33);
                  iVar27 = iVar5 - uVar33;
                }
              } while (iVar27 < 0 != bVar43);
            }
            else {
              uVar25 = local_29c - uVar32;
            }
            local_4278 = local_4278 + 1;
            bVar43 = SBORROW4(local_4278,local_3e7c);
            iVar27 = local_4278 - local_3e7c;
            if (local_4278 < (int)local_3e7c) {
              bVar43 = SBORROW4(iVar5,uVar33);
              iVar27 = iVar5 - uVar33;
            }
            uVar32 = local_3e7c;
            local_29c = uVar25;
          } while (iVar27 < 0 != bVar43);
        }
LAB_10007734:
        recovered_1000b06c((int)&local_4238);
        if (local_3e90 < 1) {
          iVar5 = 0x16;
        }
        else {
          iVar5 = local_3e90 + 0xc;
        }
        if (DAT_100140a0 == 0) {
          bVar43 = true;
          iVar7 = 10;
        }
        else {
          iVar7 = 0x56;
          if (0 < local_3e90) {
            iVar7 = local_3e90 + 0x4c;
          }
          if (0x207 < (int)local_4234) {
            iVar7 = 0x2e;
          }
          if (local_4234 == 0) {
            iVar7 = 0x2e;
          }
          iVar27 = 0x18;
          if (0 < local_3e90) {
            iVar27 = local_3e90 * 2 + 4;
          }
          bVar43 = false;
          iVar7 = iVar7 + iVar27;
        }
        uVar15 = 10;
        iVar27 = local_4230 - 10;
        if (local_4230 == 0) {
          iVar27 = 0x186;
        }
        iVar41 = local_4234 - 0x1c;
        if (local_4234 == 0) {
          iVar41 = 0x2dc;
        }
        if (!bVar43) {
          uVar15 = 0xe4;
          if (local_4234 < 700) {
            uVar15 = 0xb0;
          }
          if ((int)local_4234 < 0x208) {
            uVar15 = 0xc;
          }
          iVar41 = local_4234 - 0xc;
          if (local_4234 == 0) {
            uVar15 = 0xe4;
            iVar41 = 0x2ec;
          }
          iVar41 = iVar41 - uVar15;
        }
        iVar16 = 0xe;
        iVar5 = (iVar27 - (iVar7 + iVar5)) + -8;
        if (0 < local_3e94) {
          iVar16 = local_3e94 + 8;
        }
        if (iVar41 <= iVar16) {
          iVar41 = iVar16;
        }
        if (local_3e90 < 1) {
          if (iVar5 < 0x10) {
            iVar5 = 0x10;
          }
        }
        else if (iVar5 < local_3e90 + 6) {
          iVar5 = local_3e90 + 6;
        }
        iVar27 = local_4234 - 0x14;
        if (local_4234 == 0) {
          iVar27 = 0x2e4;
        }
        if (!bVar43) {
          iVar27 = iVar41 + -0x60;
        }
        uVar33 = iVar7 + iVar5 + 8;
        if (iVar27 <= iVar16) {
          iVar27 = iVar16;
        }
        uVar36 = local_4230;
        if (local_4230 == 0) {
          uVar36 = 400;
        }
        iVar5 = (uVar36 - uVar33) + -10;
        if (local_3e90 < 1) {
          if ((int)(uVar36 - uVar33) < 0x1c) {
            iVar5 = 0x12;
          }
          local_4254 = 10;
        }
        else {
          local_4254 = local_3e90;
          if (iVar5 <= local_3e90 + 8) {
            iVar5 = local_3e90 + 8;
          }
        }
        uVar21 = thunk_terror_ui_colour(2);
        uVar25 = iVar27 + uVar15;
        uVar32 = iVar5 + uVar33;
        uVar36 = local_4230;
        if (local_4230 == 0) {
          uVar36 = 400;
        }
        uVar18 = uVar36;
        if ((int)uVar32 < (int)uVar36) {
          uVar18 = uVar32;
        }
        if ((int)uVar32 < 0) {
          uVar18 = 0;
        }
        uVar38 = local_4234;
        if (local_4234 == 0) {
          uVar38 = 0x2f8;
        }
        uVar19 = uVar38;
        if ((int)uVar25 < (int)uVar38) {
          uVar19 = uVar25;
        }
        if ((int)uVar25 < 0) {
          uVar19 = 0;
        }
        if ((int)uVar15 < (int)uVar38) {
          uVar38 = uVar15;
        }
        if ((int)uVar33 < (int)uVar36) {
          uVar36 = uVar33;
        }
        if ((int)uVar33 < 0) {
          uVar36 = 0;
        }
        if ((int)uVar36 < (int)uVar18) {
          do {
            uVar42 = uVar38;
            if ((int)uVar38 < (int)uVar19) {
              do {
                if ((-1 < (int)(uVar42 | uVar36)) && (local_3ec8 != (void *)0x0)) {
                  uVar40 = local_4234;
                  if (local_4234 == 0) {
                    uVar40 = 0x2f8;
                  }
                  if ((int)uVar42 < (int)uVar40) {
                    uVar40 = local_4230;
                    if (local_4230 == 0) {
                      uVar40 = 400;
                    }
                    if ((int)uVar36 < (int)uVar40) {
                      uVar40 = local_4234 << 2;
                      if (local_4234 == 0) {
                        uVar40 = 0xbe0;
                      }
                      if (local_422c != 0) {
                        uVar40 = local_422c;
                      }
                      *(char *)((int)local_3ec8 + uVar42 * 4 + uVar36 * uVar40) =
                           (char)(uVar21 >> 0x10);
                      *(char *)((int)local_3ec8 + uVar42 * 4 + uVar36 * uVar40 + 1) =
                           (char)(uVar21 >> 8);
                      *(char *)((int)local_3ec8 + uVar42 * 4 + uVar36 * uVar40 + 2) = (char)uVar21;
                      *(undefined1 *)((int)local_3ec8 + uVar42 * 4 + uVar36 * uVar40 + 3) = 0xd9;
                    }
                  }
                }
                uVar42 = uVar42 + 1;
              } while (uVar19 != uVar42);
            }
            uVar36 = uVar36 + 1;
          } while (uVar36 != uVar18);
        }
        uVar36 = thunk_terror_ui_colour(3);
        uVar36 = uVar36 & 0xff00 | (uVar36 & 0xff) << 0x10 | (uVar36 & 0xff0000) >> 0x10;
        recovered_10012a10((int)&local_4238,uVar15,uVar33,iVar27,1,uVar36);
        recovered_10012a10((int)&local_4238,uVar15,uVar32 - 1,iVar27,1,uVar36);
        recovered_10012a10((int)&local_4238,uVar15,uVar33,1,iVar5,uVar36);
        recovered_10012a10((int)&local_4238,uVar25 - 1,uVar33,1,iVar5,uVar36);
        uVar36 = local_3e88;
        pbVar35 = local_3e8c;
        iVar7 = local_3e94;
        if (local_3e94 < 1) {
          iVar7 = 6;
        }
        uVar32 = recovered_10003fa8(iVar27 + -10,iVar7);
        uVar21 = uVar32 - 0x10;
        if (0xff < uVar21) {
          uVar21 = 0x100;
        }
        if ((int)uVar32 < 0x11) {
          uVar21 = 1;
        }
        uVar25 = uVar36 - uVar21;
        if (uVar36 < uVar21) {
          uVar25 = 0;
        }
        if (uVar25 < uVar36) {
          if (uVar36 <= uVar21) {
            uVar21 = uVar36;
          }
          iVar7 = -uVar21;
          do {
            if ((pbVar35[iVar7 + uVar36] & 0xc0) != 0x80) {
              uVar25 = uVar36 + iVar7;
              goto LAB_10007b60;
            }
            bVar43 = iVar7 != -1;
            iVar7 = iVar7 + 1;
          } while (bVar43);
          uVar25 = uVar36;
        }
LAB_10007b60:
        iVar5 = uVar33 + (iVar5 - local_4254) / 2;
        recovered_1000c740((int)&local_29c,0x180,(uint *)(pbVar35 + uVar25));
        uVar33 = thunk_terror_ui_colour(1);
        recovered_10012bb4((int)&local_4238,uVar15 + 4,iVar5,(int)&local_29c,uVar32,
                           uVar33 & 0xff00 | (uVar33 & 0xff) << 0x10 | (uVar33 & 0xff0000) >> 0x10);
        uVar33 = local_3eac & 6;
        bVar43 = uVar33 == 2;
        if (bVar43) {
          uVar33 = local_3e50 >> 8 & 0xff;
        }
        if (bVar43 && (uVar33 & 0x10) == 0) {
          uVar10 = thunk_strlen((char *)&local_29c);
          iVar27 = local_3e90;
          iVar7 = local_3e94;
          uVar32 = uVar32 & ~((int)uVar32 >> 0x1f);
          iVar41 = 6;
          if (0 < local_3e94) {
            iVar41 = local_3e94;
          }
          if ((int)uVar10 < (int)uVar32) {
            uVar32 = uVar10;
          }
          if ((int)uVar10 < 0) {
            uVar32 = 0;
          }
          uVar33 = thunk_terror_ui_colour(4);
          iVar16 = iVar7 + -1;
          if (iVar16 == 0 || iVar7 < 1) {
            iVar16 = 5;
          }
          if (iVar27 < 1) {
            iVar27 = 10;
          }
          recovered_10012a10((int)&local_4238,iVar41 * uVar32 + uVar15 + 4,(iVar5 + iVar27) - 1,
                             iVar16,2,uVar33 & 0xff00 | (uVar33 & 0xff) << 0x10 |
                                      (uVar33 & 0xff0000) >> 0x10);
        }
      }
      else {
        thunk_memset(&local_29c,0,0x2c);
        if ((local_3eac & 6) == 2) {
          local_29c = 1;
          local_298 = local_3ea8;
          local_294 = local_3ea4;
          local_290 = local_3ea0;
        }
        local_2ac = local_2ac & 0xffffff00;
        local_2b4 = (byte *)&local_4238;
        local_2b0 = &local_29c;
        recovered_1000f1b8((int *)&local_2b4);
      }
      pvVar14 = local_3ec8;
      uVar36 = local_422c;
      uVar33 = local_4230;
      uVar15 = local_4234;
      iVar5 = DAT_100140a0;
      uVar21 = thunk_terror_ui_colour(0);
      pcVar6 = str_10013090;
      if (iVar5 == 0) {
        pcVar6 = str_10013b6a;
      }
      thunk_terror_ui_window_present(&local_4238,pcVar6,pvVar14,uVar15,uVar33,uVar36,uVar21);
    }
    else {
      local_3ef3 = 1;
      recovered_1000b06c((int)&local_4238);
      local_3ef3 = 0;
      pf_app_terror_ui_window_present_rect(&local_4238,local_3ee8,iStack_3ee4,iStack_3ee0,local_3edc);
    }
  }
  local_3e50 = local_3e50 + 1;
  if (local_3ef8 - 1 < 0x1f) {
    thunk_terror_ui_yield_frames(2);
  }
  else if ((uVar13 != uVar22 || bVar45) || (uVar12 & 1) != 0) {
    iVar5 = Ram40010800;
    if ((iVar5 == 0x50414d57) && (iVar5 = Ram40010804, iVar5 != 0)) {
      uVar22 = Ram40010808;
      bVar43 = 0xb < uVar22;
      if (bVar43) {
        uVar22 = Ram40010808;
      }
      if ((bVar43 && 0x9f < uVar22) && (pcVar2 = (code *)UINT_4001089c, pcVar2 != (code *)0x0)) {
        (*pcVar2)();
      }
    }
  }
  else {
    uVar22 = 0x18;
    if (uVar23 == 2) {
      uVar22 = 6;
    }
    thunk_terror_ui_yield_frames(uVar22);
  }
  bVar43 = false;
  uVar22 = uVar13;
  if (local_3e47 == '\0') goto LAB_10007f4c;
  goto LAB_10004f88;
}

#undef DAT_10013117
#undef DAT_10013119
#undef DAT_100132d9
#undef DAT_10013b71
#undef DAT_100140a0
#undef DAT_100140a4
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_40010a04
#undef DAT_40010a3c
#undef DAT_40010a4c
#undef EXT_0000000c
#undef EXT_0000001c
#undef Ram40010800
#undef Ram40010804
#undef Ram40010808
#undef UINT_40010828
#undef UINT_4001082c
#undef UINT_4001084c
#undef UINT_40010850
#undef UINT_40010854
#undef UINT_40010894
#undef UINT_4001089c
#undef UINT_40010978
#undef UINT_40010984
#undef _DAT_40010a04
#undef _DAT_40010a3c
#undef _DAT_40010a4c
#undef str_10013060
#undef str_10013080
#undef str_10013090
#undef str_10013097
#undef str_100130a7
#undef str_100130b2
#undef str_100130b9
#undef str_100130c1
#undef str_100130df
#undef str_100130fa
#undef str_10013156
#undef str_10013360
#undef str_10013370
#undef str_100133a2
#undef str_100133c2
#undef str_10013b6a
#undef local_4254
#undef local_423c
#undef local_4238
#undef local_4234
#undef local_4230
#undef local_422c
#undef local_420c
#undef local_3ef8
#undef local_3ef4
#undef local_3ef3
#undef local_3ee8
#undef local_3edc
#undef local_3ec8
#undef auStack_3ef0
#undef local_3ec4
#undef local_3ec0
#undef iStack_3ee4
#undef local_3ebc
#undef iStack_3ee0
#undef local_3eb4
#undef local_3eb0
#undef local_3eac
#undef local_3ea8
#undef local_3ea4
#undef local_3ea0
#undef local_3e9c
#undef local_3e9b
#undef local_3e9a
#undef local_3e98
#undef local_3e94
#undef local_3e90
#undef local_3e8c
#undef local_3e88
#undef local_3e84
#undef local_3e80
#undef local_3e7c
#undef local_3e78
#undef local_3e70
#undef local_3e6c
#undef local_3e68
#undef local_3e64
#undef local_3e60
#undef local_3e5c
#undef local_3e54
#undef local_3e50
#undef local_3e4c
#undef local_3e48
#undef local_3e47
#undef local_3e46
#undef local_3e40
#undef local_3e3c
#undef local_3e38
#undef local_3e34
#undef local_3e30
#undef local_3e2c
#undef local_3e28
#undef local_3e24
#undef local_3da0
#undef local_3cd0
#undef local_3ccc
#undef local_3c88
#undef local_3c87
#undef local_3c85
#undef acStack_3e20
#undef local_3c84
#undef local_3c80
#undef auStack_3d20
#undef local_3a34
#undef acStack_3cf8
#undef local_3a30
#undef local_3814
#undef auStack_3cc8
#undef local_3810
#undef local_380f
#undef local_380e
#undef local_380d
#undef auStack_3c74
#undef local_3804
#undef auStack_3c34
#undef auStack_3b34
#undef local_37fc
#undef local_b04
#undef local_b00
#undef auStack_3a24
#undef local_afc
#undef auStack_391c
#undef local_af8
#undef local_af4
#undef local_99c
#undef local_994
#undef local_990
#undef local_98c
#undef auStack_380c
#undef local_988
#undef local_984
#undef local_980
#undef acStack_37ef
#undef local_97c
#undef local_978
#undef local_974
#undef local_973
#undef local_972
#undef local_971
#undef local_970
#undef local_5f0
#undef local_5ec
#undef local_5e8
#undef local_5e4
#undef local_5e0
#undef local_5dc
#undef local_5d8
#undef local_4e0
#undef local_4dc
#undef local_4d8
#undef local_4d4
#undef local_464
#undef local_45c
#undef local_458
#undef local_2b8
#undef local_2b4
#undef local_2b0
#undef local_2ac
#undef local_2a8
#undef local_2a4
#undef acStack_5d0
#undef local_29c
#undef local_298
#undef local_294
#undef local_290
#undef local_28c
#undef local_288
#undef local_284
#undef local_274
#undef auStack_2bc
#undef local_270
#undef local_26c
#undef local_268
#undef local_264
#undef local_260
#undef local_4278

#undef DAT_10013119
#define DAT_10013119 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x25dU)))
#undef DAT_10013144
#define DAT_10013144 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x288U)))
#undef DAT_1001317d
#define DAT_1001317d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2c1U)))
#undef DAT_100132d3
#define DAT_100132d3 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x417U)))
#undef DAT_1001333a
#define DAT_1001333a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x47eU)))
#undef DAT_1001333f
#define DAT_1001333f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x483U)))
#undef DAT_10013344
#define DAT_10013344 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x488U)))
#undef DAT_10013352
#define DAT_10013352 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x496U)))
#undef DAT_10013357
#define DAT_10013357 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x49bU)))
#undef DAT_1001335c
#define DAT_1001335c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4a0U)))
#undef DAT_100140a0
#define DAT_100140a0 (*(int *)(((uintptr_t)pf_module_state + 0x11e4U)))
#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_40010a04
#define DAT_40010a04 (*(uint8_t *)(0x40010a04U))
#undef DAT_40010a44
#define DAT_40010a44 (*(uint8_t *)(0x40010a44U))
#undef DAT_40010a48
#define DAT_40010a48 (*(uint8_t *)(0x40010a48U))
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
#undef UINT_40010894
#define UINT_40010894 (*(uint *)(0x40010894U))
#undef _DAT_40010a04
#define _DAT_40010a04 (*(code * *)(0x40010a04U))
#undef _DAT_40010a44
#define _DAT_40010a44 (*(code * *)(0x40010a44U))
#undef _DAT_40010a48
#define _DAT_40010a48 (*(code * *)(0x40010a48U))
#undef str_1001311a
#define str_1001311a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x25eU)))
#undef str_10013146
#define str_10013146 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x28aU)))
#undef str_10013156
#define str_10013156 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x29aU)))
#undef str_1001315c
#define str_1001315c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2a0U)))
#undef str_10013181
#define str_10013181 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2c5U)))
#undef str_100131a9
#define str_100131a9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2edU)))
#undef str_100131b8
#define str_100131b8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2fcU)))
#undef str_10013349
#define str_10013349 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x48dU)))
#undef str_10013f3f
#define str_10013f3f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1083U)))
#define local_144 (*(byte * *)(pf_stack_frame + 28))
#define local_13c (*(byte (*)[316])(pf_stack_frame + 36))
#define local_3c (*(uint *)(pf_stack_frame + 292))
#define local_38 (*(int *)(pf_stack_frame + 296))
#define local_34 (*(undefined4 *)(pf_stack_frame + 300))
#define local_30 (*(char * *)(pf_stack_frame + 304))
#define local_2c (*(undefined4 *)(pf_stack_frame + 308))
#define local_28 (*(undefined4 *)(pf_stack_frame + 312))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008340
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint recovered_10008340(uint param_1,byte *param_2)

{
  unsigned char pf_stack_frame[384] __attribute__((aligned(16))) = {0};

  code *pcVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  ulong uVar6;
  int iVar7;
  uint extraout_r0 = 0;
  void *dst;
  uint uVar8;
  ulong uVar9;
  byte *pbVar10;
  uint uVar11;
  int iVar12;
  char *text;
  ulong size;
  bool bVar13;
  bool bVar14;

  if (DAT_100140a0 != 0) {
    uVar3 = recovered_1000c440(param_1,param_2);
    return uVar3;
  }
  iVar4 = *(int *)(param_1 + 0x3e4);
  uVar3 = recovered_1000ba00(param_1);
  if ((((*(char *)(param_1 + 0x3f2) == '\x01') && (*(int *)(param_1 + 0x3f8) != 0)) &&
      (iVar7 = Ram40010800, iVar7 == 0x50414d57)) && (iVar7 = Ram40010804, iVar7 != 0)) {
    uVar8 = Ram40010808;
    bVar13 = 0xb < uVar8;
    if (bVar13) {
      uVar8 = Ram40010808;
    }
    if (((bVar13 && 0x247 < uVar8) && (_DAT_40010a44 != (code *)0x0)) &&
       (uVar8 = (*_DAT_40010a44)(), (uVar8 & 1) != 0)) {
      iVar4 = Ram40010800;
      pbVar5 = &DAT_10013119;
      if (param_2 != (byte *)0x0) {
        pbVar5 = param_2;
      }
      if ((iVar4 == 0x50414d57) && (iVar4 = Ram40010804, iVar4 != 0)) {
        uVar3 = Ram40010808;
        bVar13 = 0xb < uVar3;
        if (bVar13) {
          uVar3 = Ram40010808;
        }
        if (((bVar13 && 0x24b < uVar3) && (_DAT_40010a48 != (code *)0x0)) &&
           (iVar4 = (*_DAT_40010a48)(pbVar5), iVar4 != 0)) {
          return 1;
        }
      }
      text = str_1001311a;
      goto LAB_10008fb0;
    }
  }
  if (param_2 != (byte *)0x0) {
    pbVar5 = param_2;
    while( true ) {
      uVar8 = (uint)*pbVar5;
      if ((0x17 < uVar8 - 9) || ((1 << (uVar8 - 9 & 0xff) & 0x800013U) == 0)) break;
      pbVar5 = pbVar5 + 1;
    }
    if (uVar8 != 0) {
      pbVar10 = pbVar5;
      uVar11 = uVar8;
      if (uVar8 < 0x21) {
LAB_1000843c:
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch((uintptr_t)(uVar11)) {
        default:
          goto switchD_10008444_caseD_1;
        case 9:
        case 10:
        case 0xd:
        case 0x20:
          goto switchD_10008444_caseD_9;
        }
      }
LAB_100084d8:
      if (uVar11 == 0x3e) {
        bVar13 = true;
      }
      else {
switchD_10008444_caseD_1:
        if (uVar11 - 0x41 < 0x1a) {
          uVar11 = uVar11 | 0x20;
        }
        if (9 < pbVar10[uVar11 == 0x69] - 0x30U) {
LAB_10008748:
          iVar7 = 0;
          do {
            if (uVar8 < 0x20) {
              if (uVar8 == 0 || uVar8 == 9) goto LAB_10008790;
            }
            else if (uVar8 == 0x20 || uVar8 == 0x2c) goto LAB_10008790;
            if (iVar7 == 0x3f) goto LAB_10008790;
            local_13c[iVar7] = (byte)uVar8;
            uVar8 = (uint)pbVar5[iVar7 + 1];
            iVar7 = iVar7 + 1;
          } while( true );
        }
        pbVar10 = pbVar10 + (uVar11 == 0x69);
        do {
          pbVar10 = pbVar10 + 1;
        } while (*pbVar10 - 0x30U < 10);
        bVar13 = true;
        if (*pbVar10 != 0x3e) goto LAB_10008748;
      }
      goto LAB_100084ec;
    }
  }
  bVar13 = false;
LAB_100084ec:
  recovered_1000c740((int)local_13c,0x100,(uint *)&DAT_10013119);
  uVar6 = thunk_strlen(&DAT_10013119);
  iVar7 = recovered_1000bb24(param_1,&DAT_10013119,uVar6,0);
  uVar8 = 0;
  if (iVar7 != 0) {
    *(undefined4 *)(param_1 + 0x3e0) = 1;
    recovered_1000cc50(param_1,local_13c);
    pbVar5 = &DAT_10013119;
    if (param_2 != (byte *)0x0) {
      pbVar5 = param_2;
    }
    recovered_1000cc50(param_1,pbVar5);
    recovered_1000cc50(param_1,&DAT_10013144);
    uVar8 = extraout_r0;
  }
  if (param_2 != (byte *)0x0) {
    uVar8 = (uint)*param_2;
  }
  if (param_2 == (byte *)0x0 || uVar8 == 0) {
    uVar8 = 1;
    goto LAB_100086e0;
  }
  if (bVar13) {
    if (*(int *)(param_1 + 0x3f8) == 0) goto switchD_10009388_caseD_54;
  }
  else {
    local_28 = 0;
    local_2c = 0;
    local_30 = (char *)0x0;
    local_34 = 0;
    local_38 = 0;
    local_3c = 0;
    iVar7 = Ram40010800;
    if ((iVar7 == 0x50414d57) && (iVar7 = Ram40010804, iVar7 != 0)) {
      uVar8 = Ram40010808;
      bVar13 = 0xb < uVar8;
      if (bVar13) {
        uVar8 = Ram40010808;
      }
      if (((!bVar13 || uVar8 < 0x208) || (_DAT_40010a04 == (code *)0x0)) ||
         (iVar7 = (*_DAT_40010a04)(str_10013146,&local_3c), iVar7 == 0))
      goto switchD_1000900c_caseD_55;
      if ((local_3c & 0xfffffffb) == 1) {
        if (local_38 != 0) goto switchD_10008620_caseD_9;
        goto switchD_1000900c_caseD_55;
      }
      if ((local_3c != 3) || (local_30 == (char *)0x0)) goto switchD_1000900c_caseD_55;
      switch((uintptr_t)(*local_30)) {
      case 'T':
      case 'Y':
      case 't':
      case 'y':
        break;
      case 'U':
      case 'V':
      case 'W':
      case 'X':
      case 'Z':
      case '[':
      case '\\':
      case ']':
      case '^':
      case '_':
      case '`':
      case 'a':
      case 'b':
      case 'c':
      case 'd':
      case 'e':
      case 'f':
      case 'g':
      case 'h':
      case 'i':
      case 'j':
      case 'k':
      case 'l':
      case 'm':
      case 'n':
      case 'o':
      case 'p':
      case 'q':
      case 'r':
      case 's':
      case 'u':
      case 'v':
      case 'w':
      case 'x':
        goto switchD_1000900c_caseD_55;
      default:
        if (*local_30 != '1') goto switchD_1000900c_caseD_55;
      }
    }
    else {
switchD_1000900c_caseD_55:
      bVar2 = *param_2;
      if (bVar2 != 0) {
        iVar7 = 1;
        do {
          switch((uintptr_t)(bVar2)) {
          case 0:
            goto switchD_10008620_caseD_0;
          default:
            bVar2 = param_2[iVar7];
            iVar7 = iVar7 + 1;
            break;
          case 9:
          case 10:
          case 0xd:
          case 0x20:
            goto switchD_10008620_caseD_9;
          }
        } while( true );
      }
    }
switchD_10008620_caseD_9:
    if (*(int *)(param_1 + 0x3f8) == 0) {
      iVar7 = Ram40010800;
      local_28 = 0;
      local_2c = 0;
      local_30 = (char *)0x0;
      local_34 = 0;
      local_38 = 0;
      local_3c = 0;
      if ((iVar7 == 0x50414d57) && (iVar7 = Ram40010804, iVar7 != 0)) {
        uVar8 = Ram40010808;
        bVar13 = 0xb < uVar8;
        if (bVar13) {
          uVar8 = Ram40010808;
        }
        if (((!bVar13 || uVar8 < 0x208) || (_DAT_40010a04 == (code *)0x0)) ||
           (iVar7 = (*_DAT_40010a04)(str_10013146,&local_3c), iVar7 == 0))
        goto switchD_10009388_caseD_55;
        if ((local_3c & 0xfffffffb) == 1) {
          bVar13 = false;
          if (local_38 == 0) goto switchD_10009388_caseD_55;
        }
        else {
          if ((local_3c != 3) || (local_30 == (char *)0x0)) goto switchD_10009388_caseD_55;
          switch((uintptr_t)(*local_30)) {
          case 'U':
          case 'V':
          case 'W':
          case 'X':
          case 'Z':
          case '[':
          case '\\':
          case ']':
          case '^':
          case '_':
          case '`':
          case 'a':
          case 'b':
          case 'c':
          case 'd':
          case 'e':
          case 'f':
          case 'g':
          case 'h':
          case 'i':
          case 'j':
          case 'k':
          case 'l':
          case 'm':
          case 'n':
          case 'o':
          case 'p':
          case 'q':
          case 'r':
          case 's':
          case 'u':
          case 'v':
          case 'w':
          case 'x':
            goto switchD_10009388_caseD_55;
          default:
            if (*local_30 != '1') goto switchD_10009388_caseD_55;
          case 'T':
          case 'Y':
          case 't':
          case 'y':
switchD_10009388_caseD_54:
            bVar13 = false;
          }
        }
      }
      else {
switchD_10009388_caseD_55:
        iVar7 = recovered_1000d19c(param_2);
        bVar13 = false;
        if (iVar7 == 0) {
          bVar13 = recovered_1000d258((char *)param_2,&DAT_1001317d);
        }
      }
      uVar6 = thunk_strlen((char *)param_2);
      size = uVar6 + 1;
      if (0xfffffffe < uVar6) goto LAB_10008fa4;
      uVar9 = size;
      if (bVar13 != false) {
        if (0x7fffffee < uVar6) goto LAB_10008fa4;
        uVar9 = uVar6 * 2 + 0x22;
      }
      pbVar5 = *(byte **)(param_1 + 0x408);
      if (pbVar5 == (byte *)0x0) {
LAB_1000893c:
        local_144 = (byte *)0x0;
        pbVar5 = param_2;
LAB_10008944:
        iVar7 = recovered_1000b6c0(param_1,uVar9);
        if (iVar7 == 0) {
LAB_10008b5c:
          bVar13 = false;
        }
        else {
          dst = *(void **)(param_1 + 0x408);
          if (bVar13 == false) {
            thunk_memcpy(dst,pbVar5,size);
            bVar13 = true;
          }
          else {
            if ((dst == (void *)0x0) || (uVar8 = *(uint *)(param_1 + 0x40c), uVar8 < 0x20))
            goto LAB_10008b5c;
            iVar7 = 0x1f;
            thunk_memcpy(dst,str_10013f3f,0x1f);
            bVar13 = false;
            bVar2 = *pbVar5;
            while (bVar2 != 0) {
              iVar12 = 1;
              if (bVar2 == 0x22) {
                iVar12 = 2;
              }
              if (bVar2 == 0x2f) {
                iVar12 = 2;
              }
              if (uVar8 < iVar7 + iVar12 + 3U) goto LAB_10008d4c;
              if (bVar2 == 0x2f || bVar2 == 0x22) {
                *(undefined1 *)((int)dst + iVar7) = 0x2f;
                iVar7 = iVar7 + 1;
                bVar2 = *pbVar5;
              }
              *(byte *)((int)dst + iVar7) = bVar2;
              iVar7 = iVar7 + 1;
              bVar2 = pbVar5[1];
              pbVar5 = pbVar5 + 1;
            }
            if (iVar7 + 3U <= uVar8) {
              bVar13 = true;
              *(undefined2 *)((int)dst + iVar7) = 0x7d22;
              *(undefined1 *)((undefined2 *)((int)dst + iVar7) + 1) = 0;
            }
          }
        }
LAB_10008d4c:
        iVar7 = Ram40010800;
        if ((iVar7 == 0x50414d57) && (iVar7 = Ram40010804, iVar7 != 0)) {
          uVar8 = Ram40010808;
          bVar14 = 0xb < uVar8;
          if (bVar14) {
            uVar8 = Ram40010808;
          }
          if ((bVar14 && 0x53 < uVar8) && (pcVar1 = (code *)UINT_40010850, pcVar1 != (code *)0x0)) {
            (*pcVar1)(local_144);
          }
        }
        if (bVar13) {
          **(undefined1 **)(param_1 + 0x410) = 0;
          *(undefined4 *)(param_1 + 0x3fc) = 0;
          *(undefined4 *)(param_1 + 0x400) = 0;
          *(undefined4 *)(param_1 + 0x3f8) = 1;
          iVar7 = Ram40010800;
          if ((iVar7 == 0x50414d57) && (iVar7 = Ram40010804, iVar7 != 0)) {
            uVar8 = Ram40010808;
            bVar13 = 0xb < uVar8;
            if (bVar13) {
              uVar8 = Ram40010808;
            }
            if ((!bVar13 || uVar8 < 0x98) || (pcVar1 = (code *)UINT_40010894, pcVar1 == (code *)0x0)
               ) goto LAB_10008dc8;
            uVar8 = (*pcVar1)(recovered_10009798,(void *)param_1,str_100131a9);
            *(uint *)(param_1 + 0x404) = uVar8;
            if (uVar8 != 0) goto LAB_10008df0;
          }
          else {
LAB_10008dc8:
            *(undefined4 *)(param_1 + 0x404) = 0;
          }
          *(undefined4 *)(param_1 + 0x3f8) = 0;
          *(undefined4 *)(param_1 + 0x3fc) = 0;
          recovered_1000b9bc(param_1,(byte *)str_100131b8);
LAB_10008df0:
          if ((int)uVar3 <= iVar4) {
            uVar3 = recovered_1000ba00(param_1);
            *(uint *)(param_1 + 0x3e4) = uVar3;
          }
          return (uint)(*(int *)(param_1 + 0x404) != 0);
        }
      }
      else {
        bVar14 = param_2 <= pbVar5;
        if (pbVar5 <= param_2) {
          bVar14 = *(uint *)(param_1 + 0x40c) <= (uint)((int)param_2 - (int)pbVar5);
        }
        if (bVar14) goto LAB_1000893c;
        iVar7 = Ram40010800;
        if ((iVar7 == 0x50414d57) && (iVar7 = Ram40010804, iVar7 != 0)) {
          uVar8 = Ram40010808;
          bVar14 = uVar8 < 0xc;
          if (!bVar14) {
            uVar8 = Ram40010808;
          }
          if (((bVar14 || uVar8 < 0x50) || (pcVar1 = (code *)UINT_4001084c, pcVar1 == (code *)0x0))
             || (pbVar5 = (*pcVar1)(size), pbVar5 == (byte *)0x0)) goto LAB_10008fa4;
          thunk_memcpy(pbVar5,param_2,size);
          local_144 = pbVar5;
          goto LAB_10008944;
        }
      }
LAB_10008fa4:
      text = str_10013181;
LAB_10008fb0:
      uVar6 = thunk_strlen(text);
      recovered_1000bb24(param_1,(byte *)text,uVar6,0);
      return 0;
    }
  }
  uVar6 = thunk_strlen(str_1001315c);
  uVar8 = 0;
  recovered_1000bb24(param_1,(byte *)str_1001315c,uVar6,0);
LAB_100086e0:
  if ((int)uVar3 <= iVar4) {
    uVar3 = recovered_1000ba00(param_1);
    *(uint *)(param_1 + 0x3e4) = uVar3;
  }
  return uVar8;
switchD_10008444_caseD_9:
  pbVar10 = pbVar10 + 1;
  uVar11 = (uint)*pbVar10;
  if (0x20 < uVar11) goto LAB_100084d8;
  goto LAB_1000843c;
LAB_10008790:
  uVar8 = 0;
  local_13c[iVar7] = 0;
  if (local_13c[0] != 0) {
    bVar2 = local_13c[0];
    if ((byte)(local_13c[0] + 0xbf) < 0x1a) {
      bVar2 = local_13c[0] | 0x20;
    }
    switch((uintptr_t)(bVar2)) {
    case 0x6c:
      uVar11 = (uint)local_13c[1];
      bVar13 = true;
      uVar8 = 1;
      if (uVar11 == 0) {
LAB_100090ec:
        if (*(char *)(uVar8 + ((uintptr_t)pf_module_state + 0x3f2U)) == '\0') goto LAB_100084ec;
      }
      else {
        if (uVar11 - 0x41 < 0x1a) {
          uVar11 = uVar11 | 0x20;
        }
        if (uVar11 == 0x69) {
          uVar8 = (uint)local_13c[2];
          if (uVar8 == 0) {
            uVar8 = 2;
          }
          else {
            if (uVar8 - 0x41 < 0x1a) {
              uVar8 = uVar8 | 0x20;
            }
            if (uVar8 != 0x73) goto LAB_10009104;
            uVar8 = (uint)local_13c[3];
            if (uVar8 == 0) {
              uVar8 = 3;
            }
            else {
              uVar11 = uVar8 - 0x41;
              if (uVar11 < 0x1a) {
                uVar8 = uVar8 | 0x20;
              }
              bVar14 = uVar8 != 0x74;
              if (!bVar14) {
                uVar11 = (uint)local_13c[4];
                uVar8 = 4;
              }
              if (bVar14 || uVar11 != 0) goto LAB_10009104;
            }
          }
          goto LAB_100090ec;
        }
      }
LAB_10009104:
      uVar11 = (uint)local_13c[1];
      uVar8 = 1;
      if (uVar11 == 0) {
LAB_10009274:
        if (*(char *)(uVar8 + ((uintptr_t)pf_module_state + 0x400U)) == '\0') goto LAB_100084ec;
      }
      else {
        if (uVar11 - 0x41 < 0x1a) {
          uVar11 = uVar11 | 0x20;
        }
        if (uVar11 == 0x6f) {
          uVar8 = (uint)local_13c[2];
          if (uVar8 == 0) {
            uVar8 = 2;
          }
          else {
            if (uVar8 - 0x41 < 0x1a) {
              uVar8 = uVar8 | 0x20;
            }
            if (uVar8 != 0x61) goto LAB_1000928c;
            uVar8 = (uint)local_13c[3];
            if (uVar8 == 0) {
              uVar8 = 3;
            }
            else {
              uVar11 = uVar8 - 0x41;
              if (uVar11 < 0x1a) {
                uVar8 = uVar8 | 0x20;
              }
              bVar14 = uVar8 != 100;
              if (!bVar14) {
                uVar11 = (uint)local_13c[4];
                uVar8 = 4;
              }
              if (bVar14 || uVar11 != 0) goto LAB_1000928c;
            }
          }
          goto LAB_10009274;
        }
      }
LAB_1000928c:
      uVar11 = (uint)local_13c[1];
      uVar8 = 1;
      if (uVar11 != 0) {
        if (uVar11 - 0x41 < 0x1a) {
          uVar11 = uVar11 | 0x20;
        }
        if (uVar11 != 0x6f) break;
        uVar8 = (uint)local_13c[2];
        if (uVar8 == 0) {
          uVar8 = 2;
        }
        else {
          if (uVar8 - 0x41 < 0x1a) {
            uVar8 = uVar8 | 0x20;
          }
          if (uVar8 != 0x61) break;
          uVar8 = (uint)local_13c[3];
          if (uVar8 == 0) {
            uVar8 = 3;
          }
          else {
            if (uVar8 - 0x41 < 0x1a) {
              uVar8 = uVar8 | 0x20;
            }
            if (uVar8 != 100) break;
            uVar8 = (uint)local_13c[4];
            if (uVar8 == 0) {
              uVar8 = 4;
            }
            else {
              if (uVar8 - 0x41 < 0x1a) {
                uVar8 = uVar8 | 0x20;
              }
              if (uVar8 != 0x62) break;
              uVar8 = (uint)local_13c[5];
              if (uVar8 == 0) {
                uVar8 = 5;
              }
              else {
                uVar11 = uVar8 - 0x41;
                if (uVar11 < 0x1a) {
                  uVar8 = uVar8 | 0x20;
                }
                bVar13 = uVar8 != 99;
                if (!bVar13) {
                  uVar11 = (uint)local_13c[6];
                  uVar8 = 6;
                }
                if (bVar13 || uVar11 != 0) break;
              }
            }
          }
        }
      }
      iVar7 = ((uintptr_t)pf_module_state + 0x410U);
LAB_100094a4:
      bVar13 = true;
      if (*(char *)(iVar7 + uVar8) == '\0') goto LAB_100084ec;
      break;
    case 0x6e:
      uVar11 = (uint)local_13c[1];
      uVar8 = 1;
      if (uVar11 == 0) {
LAB_10008ad4:
        iVar7 = ((uintptr_t)pf_module_state + 0x3f7U);
        goto LAB_100094a4;
      }
      if (uVar11 - 0x41 < 0x1a) {
        uVar11 = uVar11 | 0x20;
      }
      if (uVar11 == 0x65) {
        uVar8 = (uint)local_13c[2];
        if (uVar8 == 0) {
          uVar8 = 2;
          iVar7 = ((uintptr_t)pf_module_state + 0x3f7U);
          goto LAB_100094a4;
        }
        uVar11 = uVar8 - 0x41;
        if (uVar11 < 0x1a) {
          uVar8 = uVar8 | 0x20;
        }
        bVar13 = uVar8 == 0x77;
        if (bVar13) {
          uVar11 = (uint)local_13c[3];
          uVar8 = 3;
        }
        if (bVar13 && uVar11 == 0) goto LAB_10008ad4;
      }
      break;
    case 0x72:
      uVar11 = (uint)local_13c[1];
      bVar13 = true;
      uVar8 = 1;
      if (uVar11 == 0) {
LAB_10008ecc:
        if (*(char *)(uVar8 + ((uintptr_t)pf_module_state + 0x3eeU)) == '\0') goto LAB_100084ec;
      }
      else {
        if (uVar11 - 0x41 < 0x1a) {
          uVar11 = uVar11 | 0x20;
        }
        if (uVar11 == 0x65) {
          uVar8 = (uint)local_13c[2];
          if (uVar8 == 0) {
            uVar8 = 2;
          }
          else {
            uVar11 = uVar8 - 0x41;
            if (uVar11 < 0x1a) {
              uVar8 = uVar8 | 0x20;
            }
            bVar14 = uVar8 != 0x6d;
            if (!bVar14) {
              uVar11 = (uint)local_13c[3];
              uVar8 = 3;
            }
            if (bVar14 || uVar11 != 0) goto LAB_10008ee4;
          }
          goto LAB_10008ecc;
        }
      }
LAB_10008ee4:
      uVar11 = (uint)local_13c[1];
      uVar8 = 1;
      if (uVar11 == 0) {
LAB_10008f34:
        iVar7 = ((uintptr_t)pf_module_state + 0x405U);
        goto LAB_100094a4;
      }
      if (uVar11 - 0x41 < 0x1a) {
        uVar11 = uVar11 | 0x20;
      }
      if (uVar11 == 0x75) {
        uVar8 = (uint)local_13c[2];
        if (uVar8 == 0) {
          uVar8 = 2;
          iVar7 = ((uintptr_t)pf_module_state + 0x405U);
          goto LAB_100094a4;
        }
        uVar11 = uVar8 - 0x41;
        if (uVar11 < 0x1a) {
          uVar8 = uVar8 | 0x20;
        }
        bVar13 = uVar8 == 0x6e;
        if (bVar13) {
          uVar11 = (uint)local_13c[3];
          uVar8 = 3;
        }
        if (bVar13 && uVar11 == 0) goto LAB_10008f34;
      }
      break;
    case 0x73:
      uVar11 = (uint)local_13c[1];
      bVar13 = true;
      uVar8 = 1;
      if (uVar11 == 0) {
LAB_10009184:
        if (*(char *)(uVar8 + ((uintptr_t)pf_module_state + 0x3fbU)) == '\0') goto LAB_100084ec;
      }
      else {
        if (uVar11 - 0x41 < 0x1a) {
          uVar11 = uVar11 | 0x20;
        }
        if (uVar11 == 0x61) {
          uVar8 = (uint)local_13c[2];
          if (uVar8 == 0) {
            uVar8 = 2;
          }
          else {
            if (uVar8 - 0x41 < 0x1a) {
              uVar8 = uVar8 | 0x20;
            }
            if (uVar8 != 0x76) goto LAB_1000919c;
            uVar8 = (uint)local_13c[3];
            if (uVar8 == 0) {
              uVar8 = 3;
            }
            else {
              uVar11 = uVar8 - 0x41;
              if (uVar11 < 0x1a) {
                uVar8 = uVar8 | 0x20;
              }
              bVar14 = uVar8 != 0x65;
              if (!bVar14) {
                uVar11 = (uint)local_13c[4];
                uVar8 = 4;
              }
              if (bVar14 || uVar11 != 0) goto LAB_1000919c;
            }
          }
          goto LAB_10009184;
        }
      }
LAB_1000919c:
      uVar11 = (uint)local_13c[1];
      uVar8 = 1;
      if (uVar11 == 0) {
LAB_1000924c:
        iVar7 = ((uintptr_t)pf_module_state + 0x409U);
        goto LAB_100094a4;
      }
      if (uVar11 - 0x41 < 0x1a) {
        uVar11 = uVar11 | 0x20;
      }
      if (uVar11 == 0x61) {
        uVar8 = (uint)local_13c[2];
        if (uVar8 == 0) {
          uVar8 = 2;
          iVar7 = ((uintptr_t)pf_module_state + 0x409U);
          goto LAB_100094a4;
        }
        if (uVar8 - 0x41 < 0x1a) {
          uVar8 = uVar8 | 0x20;
        }
        if (uVar8 == 0x76) {
          uVar8 = (uint)local_13c[3];
          if (uVar8 == 0) {
            uVar8 = 3;
            iVar7 = ((uintptr_t)pf_module_state + 0x409U);
            goto LAB_100094a4;
          }
          if (uVar8 - 0x41 < 0x1a) {
            uVar8 = uVar8 | 0x20;
          }
          if (uVar8 == 0x65) {
            uVar8 = (uint)local_13c[4];
            if (uVar8 == 0) {
              uVar8 = 4;
              iVar7 = ((uintptr_t)pf_module_state + 0x409U);
              goto LAB_100094a4;
            }
            if (uVar8 - 0x41 < 0x1a) {
              uVar8 = uVar8 | 0x20;
            }
            if (uVar8 == 0x62) {
              uVar8 = (uint)local_13c[5];
              if (uVar8 == 0) {
                uVar8 = 5;
                iVar7 = ((uintptr_t)pf_module_state + 0x409U);
                goto LAB_100094a4;
              }
              uVar11 = uVar8 - 0x41;
              if (uVar11 < 0x1a) {
                uVar8 = uVar8 | 0x20;
              }
              bVar13 = uVar8 == 99;
              if (bVar13) {
                uVar11 = (uint)local_13c[6];
                uVar8 = 6;
              }
              if (bVar13 && uVar11 == 0) goto LAB_1000924c;
            }
          }
        }
      }
    }
    bVar13 = false;
    if ((byte)(local_13c[0] + 0xbf) < 0x1a) {
      local_13c[0] = local_13c[0] | 0x20;
    }
    if (local_13c[0] != 0x72) goto LAB_100084ec;
    uVar8 = (uint)local_13c[1];
    if (uVar8 == 0) {
      uVar8 = 1;
    }
    else {
      if (uVar8 - 0x41 < 0x1a) {
        uVar8 = uVar8 | 0x20;
      }
      if (uVar8 != 0x75) goto LAB_100084ec;
      uVar8 = (uint)local_13c[2];
      if (uVar8 == 0) {
        uVar8 = 2;
      }
      else {
        if (uVar8 - 0x41 < 0x1a) {
          uVar8 = uVar8 | 0x20;
        }
        if (uVar8 != 0x6e) goto LAB_100084ec;
        uVar8 = (uint)local_13c[3];
        if (uVar8 == 0) {
          uVar8 = 3;
        }
        else {
          if (uVar8 - 0x41 < 0x1a) {
            uVar8 = uVar8 | 0x20;
          }
          if (uVar8 != 0x62) goto LAB_100084ec;
          uVar11 = (uint)local_13c[4];
          if (uVar11 == 0) {
            uVar8 = 4;
          }
          else {
            uVar8 = uVar11 - 0x41;
            if (uVar8 < 0x1a) {
              uVar11 = uVar11 | 0x20;
            }
            bVar14 = uVar11 != 99;
            if (!bVar14) {
              uVar11 = (uint)local_13c[5];
              uVar8 = 5;
            }
            if (bVar14 || uVar11 != 0) goto LAB_100084ec;
          }
        }
      }
    }
  }
  bVar13 = (&DAT_100132d3)[uVar8] == '\0';
  goto LAB_100084ec;
switchD_10008620_caseD_0:
  bVar13 = recovered_1000d258((char *)param_2,&DAT_1001333a);
  if ((((bVar13) || (bVar13 = recovered_1000d258((char *)param_2,&DAT_1001333f), bVar13)) ||
      ((bVar13 = recovered_1000d258((char *)param_2,&DAT_10013344), bVar13 ||
       ((((bVar13 = recovered_1000d258((char *)param_2,(byte *)str_10013349), bVar13 ||
          (bVar13 = recovered_1000d258((char *)param_2,&DAT_10013352), bVar13)) ||
         (bVar13 = recovered_1000d258((char *)param_2,&DAT_10013357), bVar13)) ||
        (bVar13 = recovered_1000d258((char *)param_2,&DAT_1001335c), bVar13)))))) &&
     (bVar13 = recovered_1000d058((char *)param_2), !bVar13)) {
    recovered_1000d100((char *)param_2);
    iVar7 = recovered_1000d0ac();
    if (iVar7 == 0) {
      recovered_1000b9bc(param_1,(byte *)str_10013156);
      uVar8 = 0;
    }
    else {
      uVar8 = 1;
    }
    goto LAB_100086e0;
  }
  goto switchD_10008620_caseD_9;
}

#undef DAT_10013119
#undef DAT_10013144
#undef DAT_1001317d
#undef DAT_100132d3
#undef DAT_1001333a
#undef DAT_1001333f
#undef DAT_10013344
#undef DAT_10013352
#undef DAT_10013357
#undef DAT_1001335c
#undef DAT_100140a0
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_40010a04
#undef DAT_40010a44
#undef DAT_40010a48
#undef Ram40010800
#undef Ram40010804
#undef Ram40010808
#undef UINT_4001084c
#undef UINT_40010850
#undef UINT_40010894
#undef _DAT_40010a04
#undef _DAT_40010a44
#undef _DAT_40010a48
#undef str_1001311a
#undef str_10013146
#undef str_10013156
#undef str_1001315c
#undef str_10013181
#undef str_100131a9
#undef str_100131b8
#undef str_10013349
#undef str_10013f3f
#undef local_144
#undef local_13c
#undef local_3c
#undef local_38
#undef local_34
#undef local_30
#undef local_2c
#undef local_28

#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_40010a40
#define DAT_40010a40 (*(uint8_t *)(0x40010a40U))
#undef DAT_40010a44
#define DAT_40010a44 (*(uint8_t *)(0x40010a44U))
#undef Ram40010800
#define Ram40010800 (*(uint32_t *)(0x40010800U))
#undef Ram40010804
#define Ram40010804 (*(uint32_t *)(0x40010804U))
#undef Ram40010808
#define Ram40010808 (*(uint32_t *)(0x40010808U))
#undef _DAT_40010a40
#define _DAT_40010a40 (*(code * *)(0x40010a40U))
#undef _DAT_40010a44
#define _DAT_40010a44 (*(code * *)(0x40010a44U))
#define abStack_424 (*(byte (*)[1060])(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000958c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int recovered_1000958c(int param_1)

{
  unsigned char pf_stack_frame[1120] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  bool bVar8;

  iVar5 = 0;
  if ((param_1 != 0) && (*(char *)(param_1 + 0x3f2) == '\x01')) {
    iVar7 = *(int *)(param_1 + 0x3e4);
    uVar3 = recovered_1000ba00(param_1);
    iVar6 = 0;
    iVar4 = Ram40010800;
    iVar5 = 0;
    if (iVar4 == 0x50414d57) {
      iVar4 = Ram40010804;
      iVar5 = 0;
      if (iVar4 != 0) {
        uVar1 = Ram40010808;
        iVar5 = 0;
        if (0xb < uVar1) {
          uVar1 = Ram40010808;
          iVar5 = 0;
          if ((0x243 < uVar1) && (_DAT_40010a40 != (code *)0x0)) {
            iVar4 = (*_DAT_40010a40)(abStack_424,0x400);
            iVar5 = 0;
            if (iVar4 != 0) {
              recovered_1000cc50(param_1,abStack_424);
              iVar4 = 0xf;
              do {
                iVar2 = Ram40010800;
                iVar5 = 1;
                if ((iVar2 != 0x50414d57) || (iVar2 = Ram40010804, iVar2 == 0)) break;
                uVar1 = Ram40010808;
                bVar8 = uVar1 < 0xc;
                if (!bVar8) {
                  uVar1 = Ram40010808;
                }
                if ((bVar8 || uVar1 < 0x244) || (_DAT_40010a40 == (code *)0x0)) break;
                iVar5 = (*_DAT_40010a40)(abStack_424,0x400);
                if (iVar5 == 0) {
                  iVar5 = 1;
                  break;
                }
                recovered_1000cc50(param_1,abStack_424);
                iVar4 = iVar4 + -1;
                iVar5 = 1;
              } while (iVar4 != 0);
            }
          }
        }
      }
    }
    iVar4 = Ram40010800;
    if ((iVar4 == 0x50414d57) && (iVar4 = Ram40010804, iVar4 != 0)) {
      uVar1 = Ram40010808;
      bVar8 = 0xb < uVar1;
      if (bVar8) {
        uVar1 = Ram40010808;
      }
      if ((bVar8 && 0x247 < uVar1) && (_DAT_40010a44 != (code *)0x0)) {
        iVar6 = (*_DAT_40010a44)();
      }
    }
    if (iVar6 != *(int *)(param_1 + 0x3f4)) {
      *(int *)(param_1 + 0x3f4) = iVar6;
      iVar5 = 1;
    }
    if ((iVar5 != 0) && ((int)uVar3 <= iVar7)) {
      uVar3 = recovered_1000ba00(param_1);
      *(uint *)(param_1 + 0x3e4) = uVar3;
    }
  }
  return iVar5;
}

#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_40010a40
#undef DAT_40010a44
#undef Ram40010800
#undef Ram40010804
#undef Ram40010808
#undef _DAT_40010a40
#undef _DAT_40010a44
#undef abStack_424

#undef DAT_00003749
#define DAT_00003749 (*(uint8_t *)(0x3749U))
#undef DAT_10013119
#define DAT_10013119 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x25dU)))
#undef DAT_100132d9
#define DAT_100132d9 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x41dU)))
#undef DAT_1001332f
#define DAT_1001332f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x473U)))
#undef DAT_10013352
#define DAT_10013352 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x496U)))
#undef DAT_10013357
#define DAT_10013357 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x49bU)))
#undef DAT_1001335c
#define DAT_1001335c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4a0U)))
#undef DAT_10013582
#define DAT_10013582 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6c6U)))
#undef DAT_10013587
#define DAT_10013587 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6cbU)))
#undef DAT_1001358c
#define DAT_1001358c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6d0U)))
#undef DAT_1001358f
#define DAT_1001358f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6d3U)))
#undef DAT_1001359a
#define DAT_1001359a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6deU)))
#undef DAT_100136c7
#define DAT_100136c7 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80bU)))
#undef DAT_10013740
#define DAT_10013740 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x884U)))
#undef DAT_1001395e
#define DAT_1001395e (*(uint8_t *)(((uintptr_t)pf_module_state + 0xaa2U)))
#undef DAT_100140a0
#define DAT_100140a0 (*(int *)(((uintptr_t)pf_module_state + 0x11e4U)))
#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_40010a04
#define DAT_40010a04 (*(uint8_t *)(0x40010a04U))
#undef DAT_40010a3c
#define DAT_40010a3c (*(uint8_t *)(0x40010a3cU))
#undef Ram40010800
#define Ram40010800 (*(uint32_t *)(0x40010800U))
#undef Ram40010804
#define Ram40010804 (*(uint32_t *)(0x40010804U))
#undef Ram40010808
#define Ram40010808 (*(uint32_t *)(0x40010808U))
#undef UINT_40010834
#define UINT_40010834 (*(uint *)(0x40010834U))
#undef UINT_40010890
#define UINT_40010890 (*(uint *)(0x40010890U))
#undef UINT_40010898
#define UINT_40010898 (*(uint *)(0x40010898U))
#undef _DAT_40010a04
#define _DAT_40010a04 (*(code * *)(0x40010a04U))
#undef _DAT_40010a3c
#define _DAT_40010a3c (*(code * *)(0x40010a3cU))
#undef str_10013334
#define str_10013334 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x478U)))
#undef str_10013349
#define str_10013349 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x48dU)))
#undef str_100133c2
#define str_100133c2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x506U)))
#undef str_100133ca
#define str_100133ca (*(char (*)[1])(((uintptr_t)pf_module_state + 0x50eU)))
#undef str_100133e3
#define str_100133e3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x527U)))
#undef str_1001342e
#define str_1001342e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x572U)))
#undef str_10013446
#define str_10013446 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x58aU)))
#undef str_1001346e
#define str_1001346e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5b2U)))
#undef str_10013495
#define str_10013495 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5d9U)))
#undef str_100134c2
#define str_100134c2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x606U)))
#undef str_100134ee
#define str_100134ee (*(char (*)[1])(((uintptr_t)pf_module_state + 0x632U)))
#undef str_10013531
#define str_10013531 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x675U)))
#undef str_1001353a
#define str_1001353a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x67eU)))
#undef str_10013542
#define str_10013542 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x686U)))
#undef str_1001354a
#define str_1001354a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x68eU)))
#undef str_10013592
#define str_10013592 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6d6U)))
#undef str_1001359f
#define str_1001359f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6e3U)))
#undef str_100135d1
#define str_100135d1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x715U)))
#undef str_100135e6
#define str_100135e6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x72aU)))
#undef str_10013625
#define str_10013625 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x769U)))
#undef str_10013630
#define str_10013630 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x774U)))
#undef str_10013667
#define str_10013667 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7abU)))
#undef str_10013670
#define str_10013670 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7b4U)))
#undef str_1001368f
#define str_1001368f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7d3U)))
#undef str_100136cc
#define str_100136cc (*(char (*)[1])(((uintptr_t)pf_module_state + 0x810U)))
#undef str_100136e3
#define str_100136e3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x827U)))
#undef str_10013713
#define str_10013713 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x857U)))
#undef str_1001372b
#define str_1001372b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x86fU)))
#undef str_10013745
#define str_10013745 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x889U)))
#undef str_1001374e
#define str_1001374e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x892U)))
#undef str_10013758
#define str_10013758 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x89cU)))
#undef str_1001375f
#define str_1001375f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x8a3U)))
#undef str_10013798
#define str_10013798 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x8dcU)))
#undef str_1001379f
#define str_1001379f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x8e3U)))
#undef str_100137c4
#define str_100137c4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x908U)))
#undef str_100137ce
#define str_100137ce (*(char (*)[1])(((uintptr_t)pf_module_state + 0x912U)))
#undef str_10013801
#define str_10013801 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x945U)))
#undef str_10013936
#define str_10013936 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa7aU)))
#undef str_10013961
#define str_10013961 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xaa5U)))
#undef str_10013994
#define str_10013994 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xad8U)))
#undef str_100139bf
#define str_100139bf (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb03U)))
#undef str_100139de
#define str_100139de (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb22U)))
#undef str_10013a15
#define str_10013a15 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb59U)))
#undef str_10013b59
#define str_10013b59 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc9dU)))
#define local_3a4 (*(undefined1 * *)(pf_stack_frame + 28))
#define local_3a0 (*(int *)(pf_stack_frame + 32))
#define local_39c (*(uint *)(pf_stack_frame + 36))
#define local_398 (*(undefined4 *)(pf_stack_frame + 40))
#define local_1a0 (*(char (*)[416])(pf_stack_frame + 544))
#define local_140 (*(undefined4 *)(pf_stack_frame + 640))
#define local_80 (*(undefined4 *)(pf_stack_frame + 832))
#define local_78 (*(undefined4 *)(pf_stack_frame + 840))
#define local_74 (*(char * *)(pf_stack_frame + 844))
#define local_70 (*(undefined4 *)(pf_stack_frame + 848))
#define local_6c (*(undefined4 *)(pf_stack_frame + 852))
#define iStack_7c (*(int *)(pf_stack_frame + 836))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009798
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool recovered_10009798(undefined4 *param_1)

{
  unsigned char pf_stack_frame[992] __attribute__((aligned(16))) = {0};

  byte bVar1;
  code *pcVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  uint uVar7;
  ulong uVar8;
  undefined4 uVar9;
  byte bVar10;
  char *pcVar11;
  char *pcVar12;
  byte *pbVar13;
  undefined4 *puVar14;
  int *piVar15;
  uint uVar16;
  undefined4 *puVar17;
  int iVar18;
  undefined1 *puVar19;
  undefined1 uVar20;
  uint *dst;
  char *arg0;
  bool bVar21;
  bool bVar22;
  bool bVar23;

  if (param_1 == (undefined4 *)0x0) {
    return true;
  }
  *(undefined1 *)param_1[0x104] = 0;
  uVar4 = (uint)*(byte *)((int)param_1 + 0x3f2);
  bVar21 = uVar4 == 1;
  if (bVar21) {
    uVar4 = Ram40010800;
  }
  if ((bVar21 && uVar4 == 0x50414d57) && (iVar5 = Ram40010804, iVar5 != 0)) {
    uVar4 = Ram40010808;
    bVar21 = 0xb < uVar4;
    if (bVar21) {
      uVar4 = Ram40010808;
    }
    if ((bVar21 && 0x23f < uVar4) && (_DAT_40010a3c != (code *)0x0)) {
      (*_DAT_40010a3c)();
    }
  }
  if (DAT_100140a0 == 0) {
    pcVar11 = (char *)param_1[0x102];
    uVar4 = 0;
    pcVar6 = (char *)0x0;
    if (pcVar11 != (char *)0x0) {
      bVar21 = recovered_1000d258(pcVar11,(byte *)str_10013349);
      if ((bVar21) || (bVar21 = recovered_1000d258(pcVar11,&DAT_10013352), bVar21)) {
        pcVar6 = (char *)param_1[0x102];
        bVar21 = recovered_1000d258(pcVar6,(byte *)str_10013349);
        uVar7 = 5;
        if (!bVar21) {
          bVar21 = recovered_1000d258(pcVar6,&DAT_10013352);
          uVar7 = 2;
          if (!bVar21) {
            bVar21 = recovered_1000d258(pcVar6,&DAT_10013357);
            uVar7 = 3;
            if (!bVar21) {
              bVar21 = recovered_1000d258(pcVar6,&DAT_1001335c);
              uVar7 = 1;
              if (bVar21) {
                uVar7 = 4;
              }
            }
          }
        }
        iVar5 = Ram40010800;
        if ((iVar5 == 0x50414d57) && (iVar5 = Ram40010804, iVar5 != 0)) {
          uVar16 = Ram40010808;
          bVar21 = uVar16 < 0xc;
          if (!bVar21) {
            uVar16 = Ram40010808;
          }
          if ((!(bVar21 || uVar16 < 0x94)) &&
             (pcVar2 = (code *)UINT_40010890, pcVar2 != (code *)0x0)) {
            uVar4 = (*pcVar2)(pcVar6,uVar7);
          }
        }
        goto LAB_1000a72c;
      }
      pcVar6 = (char *)param_1[0x102];
    }
    iVar5 = Ram40010800;
    if ((iVar5 == 0x50414d57) && (iVar5 = Ram40010804, iVar5 != 0)) {
      uVar7 = Ram40010808;
      bVar21 = uVar7 < 0xc;
      if (!bVar21) {
        uVar7 = Ram40010808;
      }
      if ((!(bVar21 || uVar7 < 0x9c)) && (pcVar2 = (code *)UINT_40010898, pcVar2 != (code *)0x0)) {
        uVar4 = (*pcVar2)(pcVar6,(char *)param_1[0x104],param_1[0x105]);
      }
    }
    goto LAB_1000a72c;
  }
  piVar15 = param_1 + 0xdcd;
  *(undefined1 *)(param_1 + 0xf58) = 0;
  *(undefined1 *)param_1[0x104] = 0;
  if ((*piVar15 == 1) &&
     (iVar5 = thunk_strcmp((char *)((int)param_1 + 0x3749),str_100133c2), iVar5 == 0)) {
    *(undefined2 *)(param_1 + 0xf77) = 0;
    thunk_snprintf((char *)(param_1 + 0xfbf),0x80,str_100133ca);
    thunk_snprintf((char *)(param_1 + 0x126),0x80,&DAT_100132d9,param_1 + 0xfbf);
    uVar4 = 1;
    param_1[0xe29] = 1;
    goto LAB_1000a72c;
  }
  if (*(char *)((int)param_1 + 0x5b3) == '\x01') {
    *(undefined1 *)((int)param_1 + 0x5b2) = 0;
    *(undefined1 *)((int)param_1 + 0x38c5) = 0;
    *(undefined2 *)(param_1 + 0x16c) = 0;
LAB_100099b4:
    thunk_snprintf((char *)&local_140,0xc0,str_10013630,*param_1);
    iVar5 = Ram40010800;
    bVar21 = true;
    if ((iVar5 == 0x50414d57) && (iVar5 = Ram40010804, iVar5 != 0)) {
      uVar4 = Ram40010808;
      bVar23 = 0xb < uVar4;
      if (bVar23) {
        uVar4 = Ram40010808;
      }
      if ((bVar23 && 0x9b < uVar4) && (pcVar2 = (code *)UINT_40010898, pcVar2 != (code *)0x0)) {
        uVar4 = (*pcVar2)((char *)&local_140,(char *)&local_3a0,0x100);
        if (uVar4 == 0) {
          bVar21 = true;
        }
        else {
          uVar7 = recovered_1000e5f0(param_1,str_10013625);
          uVar16 = 0;
          uVar4 = uVar7;
          if (0xf < uVar7) {
            uVar4 = 0x10;
          }
          param_1[0x16d] = 0;
          if (uVar7 != 0) {
            do {
              uVar16 = uVar16 + 1;
              thunk_snprintf(local_1a0,0x60,str_10013667,uVar16);
              uVar7 = recovered_1000e5f0(param_1,local_1a0);
              if (uVar7 != 0) {
                iVar5 = param_1[0x16d];
                param_1[0x16d] = iVar5 + 1;
                param_1[iVar5 + 0x171] = uVar7;
              }
            } while (uVar4 != uVar16);
          }
          bVar21 = true;
          if ((param_1[0xe2a] == 0) && (param_1[0x16d] != 0)) {
            param_1[0xe2a] = param_1[0x171];
          }
        }
      }
    }
  }
  else {
    bVar21 = false;
    *(undefined1 *)((int)param_1 + 0x5b2) = 0;
    *(undefined1 *)((int)param_1 + 0x38c5) = 0;
    *(undefined2 *)(param_1 + 0x16c) = 0;
    if (*(char *)((int)param_1 + 0x38c6) == '\x01') goto LAB_100099b4;
  }
  local_3a4 = (undefined1 *)((int)param_1 + 0x38c5);
  pcVar6 = (char *)((int)param_1 + 0x5b2);
  uVar4 = param_1[0xe2a];
  if (uVar4 == 0) {
    thunk_snprintf((char *)(param_1 + 0x126),0x80,str_10013670);
LAB_10009b28:
    uVar4 = 0;
    if (*(char *)((int)param_1 + 0x5b3) == '\0') {
LAB_1000a6f4:
      DataMemoryBarrier(0xb);
      (void)__atomic_exchange_n((uint32_t *)(param_1 + 0xfdf),0,__ATOMIC_ACQ_REL);
      DataMemoryBarrier(0xb);
      uVar4 = 0;
      if (*piVar15 != 0) {
        param_1[0xe29] = 2;
      }
      goto LAB_1000a72c;
    }
  }
  else {
    if (param_1[0x204] != uVar4) {
      param_1[0x204] = uVar4;
      param_1[0x203] = 0x3c;
      param_1[0x201] = 0;
    }
    thunk_snprintf((char *)&local_140,0xc0,str_1001368f,*param_1,uVar4);
    iVar5 = Ram40010800;
    if ((iVar5 != 0x50414d57) || (iVar5 = Ram40010804, iVar5 == 0)) {
LAB_10009a7c:
      pcVar6 = thunk_strstr((char *)&local_3a0,&DAT_100136c7);
      *(bool *)(param_1 + 0x16c) = pcVar6 != (char *)0x0;
      pcVar11 = str_100136e3;
      if (pcVar6 != (char *)0x0) {
        pcVar11 = str_100136cc;
      }
      thunk_snprintf((char *)(param_1 + 0x126),0x80,&DAT_100132d9,pcVar11);
      goto LAB_10009b28;
    }
    uVar4 = Ram40010808;
    bVar23 = 0xb < uVar4;
    if (bVar23) {
      uVar4 = Ram40010808;
    }
    if (((!bVar23 || uVar4 < 0x9c) || (pcVar2 = (code *)UINT_40010898, pcVar2 == (code *)0x0)) ||
       (uVar4 = (*pcVar2)((char *)&local_140,(char *)&local_3a0,0x100), uVar4 == 0))
    goto LAB_10009a7c;
    thunk_snprintf(local_1a0,0x60,str_10013713,*param_1);
    iVar5 = Ram40010800;
    bVar22 = false;
    local_6c = 0;
    local_70 = 0;
    local_74 = (char *)0x0;
    local_78 = 0;
    iStack_7c = 0;
    local_80 = 0;
    bVar23 = false;
    if (iVar5 == 0x50414d57) {
      iVar5 = Ram40010804;
      bVar23 = false;
      if (iVar5 != 0) {
        uVar4 = Ram40010808;
        bVar23 = false;
        if (0xb < uVar4) {
          uVar4 = Ram40010808;
          bVar23 = false;
          if ((0x207 < uVar4) && (_DAT_40010a04 != (code *)0x0)) {
            iVar5 = (*_DAT_40010a04)(local_1a0,&local_80);
            bVar23 = false;
            if (iVar5 != 0) {
              if ((local_80 & 0xfffffffb) == 1) {
                bVar23 = iStack_7c != 0;
              }
              else {
                bVar23 = false;
                if ((local_80 == 3) && (local_74 != (char *)0x0)) {
                  bVar23 = true;
                  switch((uintptr_t)(*local_74)) {
                  case 'T':
                  case 'Y':
                  case 't':
                  case 'y':
                    break;
                  case 'U':
                  case 'V':
                  case 'W':
                  case 'X':
                  case 'Z':
                  case '[':
                  case '\\':
                  case ']':
                  case '^':
                  case '_':
                  case '`':
                  case 'a':
                  case 'b':
                  case 'c':
                  case 'd':
                  case 'e':
                  case 'f':
                  case 'g':
                  case 'h':
                  case 'i':
                  case 'j':
                  case 'k':
                  case 'l':
                  case 'm':
                  case 'n':
                  case 'o':
                  case 'p':
                  case 'q':
                  case 'r':
                  case 's':
                  case 'u':
                  case 'v':
                  case 'w':
                  case 'x':
                    bVar23 = false;
                    break;
                  default:
                    bVar23 = true;
                    if (*local_74 != '1') {
                      bVar23 = false;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    *(bool *)((int)param_1 + 0x5b1) = bVar23;
    thunk_snprintf(local_1a0,0x60,str_1001372b,*param_1);
    iVar5 = Ram40010800;
    local_6c = 0;
    local_70 = 0;
    local_74 = (char *)0x0;
    local_78 = 0;
    iStack_7c = 0;
    local_80 = 0;
    if (((((iVar5 == 0x50414d57) && (iVar5 = Ram40010804, iVar5 != 0)) &&
         (uVar4 = Ram40010808, 0xb < uVar4)) &&
        ((uVar4 = Ram40010808, 0x207 < uVar4 && (_DAT_40010a04 != (code *)0x0)))) &&
       (iVar5 = (*_DAT_40010a04)(local_1a0,&local_80), iVar5 != 0)) {
      if ((local_80 & 0xfffffffb) == 1) {
        bVar22 = iStack_7c != 0;
      }
      else if ((local_80 == 3) && (local_74 != (char *)0x0)) {
        bVar22 = true;
        switch((uintptr_t)(*local_74)) {
        case 'T':
        case 'Y':
        case 't':
        case 'y':
          break;
        case 'U':
        case 'V':
        case 'W':
        case 'X':
        case 'Z':
        case '[':
        case '\\':
        case ']':
        case '^':
        case '_':
        case '`':
        case 'a':
        case 'b':
        case 'c':
        case 'd':
        case 'e':
        case 'f':
        case 'g':
        case 'h':
        case 'i':
        case 'j':
        case 'k':
        case 'l':
        case 'm':
        case 'n':
        case 'o':
        case 'p':
        case 'q':
        case 'r':
        case 's':
        case 'u':
        case 'v':
        case 'w':
        case 'x':
          bVar22 = false;
          break;
        default:
          bVar22 = *local_74 == '1';
        }
      }
    }
    *(bool *)((int)param_1 + 0x5b2) = bVar22;
    pcVar11 = &DAT_10013740;
    thunk_snprintf((char *)&local_80,0x60,str_10013b59,*param_1,&DAT_10013740);
    recovered_1000d4e0(&local_80,(undefined1 *)(param_1 + 0x146),0x28,&DAT_10013119);
    uVar4 = recovered_1000e5f0(param_1,str_10013745);
    if (7 < uVar4) {
      uVar4 = 8;
    }
    param_1[0x16f] = uVar4;
    thunk_memset(param_1 + 0x289,0,8);
    if (param_1[0x16f] != 0) {
      iVar5 = 0x814;
      uVar4 = 0;
      do {
        thunk_snprintf(local_1a0,0x60,str_1001374e,uVar4);
        pcVar11 = local_1a0;
        thunk_snprintf((char *)&local_80,0x60,str_10013b59,*param_1,local_1a0);
        recovered_1000d4e0(&local_80,(undefined1 *)((int)param_1 + iVar5),0x21,&DAT_10013119);
        thunk_snprintf(local_1a0,0x60,str_10013758,uVar4);
        uVar7 = recovered_1000e5f0(param_1,local_1a0);
        iVar5 = iVar5 + 0x21;
        uVar16 = uVar4 + 1;
        *(char *)((int)param_1 + uVar4 + 0xa24) = (char)uVar7;
        uVar4 = uVar16;
      } while (uVar16 < (uint)param_1[0x16f]);
    }
    *local_3a4 = 1;
    if ((bVar21) || (uVar4 = param_1[0x203], param_1[0x203] = uVar4 + 1, 0x3b < uVar4)) {
      param_1[0x203] = 0;
      pcVar11 = (char *)param_1[0xe2a];
      thunk_snprintf((char *)&local_140,0xc0,str_1001375f,*param_1,(uint)pcVar11);
      iVar5 = Ram40010800;
      if (((iVar5 == 0x50414d57) &&
          (((iVar5 = Ram40010804, iVar5 != 0 && (uVar4 = Ram40010808, 0xb < uVar4)) &&
           (uVar4 = Ram40010808, 0x9b < uVar4)))) &&
         ((pcVar2 = (code *)UINT_40010898, pcVar2 != (code *)0x0 &&
          (uVar4 = (*pcVar2)((char *)&local_140,(char *)&local_3a0,0x100), uVar4 != 0)))) {
        uVar7 = recovered_1000e5f0(param_1,str_10013625);
        uVar16 = 0;
        uVar4 = uVar7;
        if (0x3f < uVar7) {
          uVar4 = 0x40;
        }
        param_1[0x201] = 0;
        if (uVar7 != 0) {
          do {
            uVar16 = uVar16 + 1;
            thunk_snprintf(local_1a0,0x60,str_10013798,uVar16);
            uVar7 = recovered_1000e5f0(param_1,local_1a0);
            if (uVar7 - 1 < 0xfffffffd || uVar7 == 0xfffffffe) {
              iVar5 = param_1[0x201];
              param_1[0x201] = iVar5 + 1;
              param_1[iVar5 + 0x181] = uVar7;
            }
          } while (uVar4 != uVar16);
        }
      }
    }
    arg0 = (char *)(param_1 + 0x126);
    if (*(char *)((int)param_1 + 0x5b1) == '\x01') {
      pcVar12 = str_100137ce;
      if (*pcVar6 != '\0') {
        pcVar12 = str_100137c4;
      }
    }
    else {
      pcVar12 = str_1001379f;
    }
    thunk_snprintf(arg0,0x80,&DAT_100132d9,pcVar12);
    cVar3 = *(char *)(param_1 + 0xf77);
    bVar21 = cVar3 == '\x01';
    if (bVar21) {
      cVar3 = *pcVar6;
    }
    if (bVar21 && cVar3 == '\x01') {
      pcVar11 = (char *)(param_1[0xf7b] + 1);
      pcVar6 = str_10013801;
      pcVar12 = (char *)(param_1[0xf7c] + 1);
LAB_1000a3d4:
      thunk_snprintf(arg0,0x80,pcVar6,(uint)pcVar12,(uint)pcVar11);
    }
    else {
      pcVar12 = (char *)(param_1 + 0xfbf);
      if ((*pcVar12 != '\0') && (*pcVar6 == '\x01')) {
        pcVar6 = &DAT_100132d9;
        goto LAB_1000a3d4;
      }
    }
    if (*(char *)((int)param_1 + 0x5b1) != '\x01') goto LAB_10009b28;
    uVar7 = param_1[0xe2a];
    if (*(char *)((int)param_1 + 0x5b3) == '\0') {
      iVar5 = *piVar15;
      if (*(byte *)((int)param_1 + 0x5b2) != 0) {
LAB_1000a428:
        if (iVar5 == 1) {
          param_1[0xe29] = 3;
          if (*(char *)((int)param_1 + 0x3749) != '$') {
            iVar5 = param_1[0xe2c];
            uVar4 = 0;
            *(undefined1 *)(param_1 + 0xfbf) = 0;
            if (iVar5 == 0) {
              iVar5 = -1;
            }
            bVar21 = recovered_1000df84(param_1,uVar7,param_1[0xe2b],iVar5,(int)param_1 + 0x3749);
            if (bVar21) {
              uVar4 = 1;
              param_1[0xe29] = 1;
              thunk_snprintf(arg0,0x80,str_10013495);
            }
            else {
              bVar21 = recovered_1000de9c(param_1[0x104]);
              uVar9 = 3;
              if (bVar21) {
                uVar9 = 2;
              }
              param_1[0xe29] = uVar9;
              if (!bVar21) {
                pcVar6 = (char *)param_1[0x104];
              }
              else {
                pcVar6 = str_1001346e;
              }
              thunk_snprintf(arg0,0x80,&DAT_100132d9,pcVar6);
            }
            goto LAB_1000a72c;
          }
          if (*(char *)(param_1 + 0xf77) == '\x01') {
            thunk_snprintf(arg0,0x80,str_10013936);
          }
          else {
            puVar19 = &DAT_00003749 + (int)param_1;
            puVar14 = param_1 + 0xdd2;
            do {
              puVar17 = puVar14;
              puVar19 = puVar19 + 1;
              puVar14 = (undefined4 *)((int)puVar17 + 1);
            } while (*(char *)((int)puVar17 + 2) == ' ');
            pcVar11 = (char *)((int)puVar17 + 2);
            pcVar6 = thunk_strstr(pcVar11,&DAT_1001395e);
            if (pcVar6 == (char *)0x0) {
              uVar8 = thunk_strlen(pcVar11);
            }
            else {
              uVar8 = (int)pcVar6 - (int)puVar19;
            }
            pcVar12 = (char *)((int)puVar17 + 1 + uVar8);
            uVar4 = uVar8 - 0x7f;
            do {
              uVar7 = uVar4;
              if (uVar7 == 0xffffff81) goto LAB_1000aa0c;
              cVar3 = *pcVar12;
              pcVar12 = pcVar12 + -1;
              uVar4 = uVar7 - 1;
            } while (cVar3 == ' ');
            if ((uVar7 - 1 < 0xffffff81) || (param_1[0xe2c] == 0)) {
LAB_1000aa0c:
              pcVar6 = str_10013961;
            }
            else {
              pcVar12 = (char *)(param_1 + 0xf7f);
              thunk_memcpy(pcVar12,pcVar11,uVar7 + 0x7f);
              pcVar11 = pcVar12;
              if (pcVar6 != (char *)0x0) {
                pcVar11 = pcVar6 + 2;
              }
              pcVar11 = pcVar11 + -1;
              *(undefined1 *)((int)param_1 + uVar7 + 0x3e7b) = 0;
              do {
                pcVar11 = pcVar11 + 1;
              } while (*pcVar11 == ' ');
              uVar8 = thunk_strlen(pcVar11);
              if ((uVar8 - 0x80 < 0xffffff81) || (*pcVar11 != '/')) {
                pcVar6 = str_10013994;
              }
              else {
                if (uVar8 != 1) {
                  iVar5 = 0;
                  do {
                    bVar10 = pcVar11[iVar5 + 1];
                    if (((bVar10 < 0x20) || (bVar10 == 0x5c)) ||
                       ((bVar10 == 0x2e && (pcVar11[iVar5] == '.')))) {
                      pcVar6 = str_100139bf;
                      goto LAB_1000aa18;
                    }
                    iVar5 = iVar5 + 1;
                  } while (uVar8 - 1 != iVar5);
                }
                thunk_memcpy(param_1 + 3999,pcVar11,uVar8 + 1);
                local_39c = 0;
                local_3a0 = 0;
                local_398 = 0;
                iVar5 = Ram40010800;
                if (((((iVar5 == 0x50414d57) && (iVar5 = Ram40010804, iVar5 != 0)) &&
                     (uVar4 = Ram40010808, 0xb < uVar4)) &&
                    ((uVar4 = Ram40010808, 0x37 < uVar4 &&
                     (pcVar2 = (code *)UINT_40010834, pcVar2 != (code *)0x0)))) &&
                   ((uVar4 = (*pcVar2)(pcVar12,&local_3a0), uVar4 != 0 &&
                    ((local_39c < 0xffdd && (local_39c == 0 || local_3a0 != 0)))))) {
                  uVar4 = 1;
                  param_1[0xf7d] = local_39c;
                  param_1[0xf7b] = (local_39c + 99) / 100;
                  *(undefined2 *)(param_1 + 0xf77) = 1;
                  param_1[0xf7c] = 0;
                  *(undefined1 *)(param_1 + 0xfbf) = 0;
                  param_1[0xf78] = param_1[0xe2a];
                  param_1[0xf79] = param_1[0xe2c];
                  param_1[0xf7a] = param_1[0xe2b];
                  bVar21 = recovered_1000e29c(param_1);
                  if (bVar21) {
                    param_1[0xe29] = 1;
                    goto LAB_1000a72c;
                  }
                  *(undefined1 *)(param_1 + 0xf77) = 0;
                  thunk_snprintf(arg0,0x80,str_10013a15,(void *)param_1[0x104]);
                  goto LAB_1000aa28;
                }
                pcVar6 = str_100139de;
              }
            }
LAB_1000aa18:
            thunk_snprintf(arg0,0x80,pcVar6);
          }
LAB_1000aa28:
          bVar21 = recovered_1000de9c(param_1[0x104]);
          uVar9 = 3;
          if (bVar21) {
            uVar9 = 2;
          }
          uVar4 = 0;
          param_1[0xe29] = uVar9;
          goto LAB_1000a72c;
        }
        if (iVar5 == 2) goto LAB_1000a55c;
        cVar3 = *(char *)(param_1 + 0xf77);
        bVar21 = cVar3 == '\x01';
        if (bVar21) {
          cVar3 = *(char *)((int)param_1 + 0x3ddd);
        }
        if (((bVar21 && cVar3 == '\x01') && (0x1df < (uint)(param_1[0xe2d] - param_1[0xf7e]))) &&
           (bVar21 = recovered_1000e29c(param_1), !bVar21)) {
          *(undefined1 *)((int)param_1 + 0x3ddd) = 0;
          param_1[0xf7e] = param_1[0xe2d];
          thunk_snprintf(arg0,0x80,str_100134c2,(void *)param_1[0x104]);
        }
        cVar3 = *(char *)(param_1 + 0xf77);
        bVar21 = cVar3 == '\x01';
        if (bVar21) {
          cVar3 = *(char *)((int)param_1 + 0x3ddd);
        }
        if ((bVar21 && cVar3 == '\0') && (0x3b < (uint)(param_1[0xe2d] - param_1[0xf7e]))) {
          recovered_1000e29c(param_1);
        }
        uVar4 = param_1[0xe2a];
        iVar5 = 0;
        iVar18 = 0x3948;
        do {
          uVar7 = *(uint *)((int)param_1 + iVar18);
          if (uVar7 == 0 || uVar7 == uVar4) goto LAB_1000a498;
          iVar5 = iVar5 + 1;
          iVar18 = iVar18 + 0x18;
        } while (iVar5 != 0x20);
        uVar7 = param_1[0xe52];
        iVar5 = 0;
LAB_1000a498:
        dst = param_1 + 0xe52 + iVar5 * 6;
        if (uVar7 != uVar4) {
          thunk_memset(dst,0,0x18);
          uVar4 = param_1[0xe2a];
          dst[5] = 0x3c;
        }
        uVar7 = *param_1;
        *dst = uVar4;
        thunk_snprintf((char *)&local_3a0,0x200,str_100134ee,uVar7,uVar4,dst[1],dst[2]);
        pcVar6 = (char *)param_1[0x104];
        iVar5 = Ram40010800;
        if ((iVar5 == 0x50414d57) && (iVar5 = Ram40010804, iVar5 != 0)) {
          uVar4 = Ram40010808;
          bVar21 = 0xb < uVar4;
          if (bVar21) {
            uVar4 = Ram40010808;
          }
          if ((bVar21 && 0x9b < uVar4) && (pcVar2 = (code *)UINT_40010898, pcVar2 != (code *)0x0)) {
            uVar4 = (*pcVar2)((char *)&local_3a0,pcVar6,param_1[0x105]);
            if (uVar4 != 0) {
              uVar4 = recovered_1000e5f0(param_1,str_10013531);
              dst[1] = uVar4;
              uVar4 = recovered_1000e5f0(param_1,str_1001353a);
              dst[2] = uVar4;
              uVar4 = recovered_1000e5f0(param_1,str_10013542);
              if (uVar4 != 0) {
                thunk_snprintf(arg0,0x80,str_1001354a);
              }
              uVar4 = recovered_1000e5f0(param_1,&DAT_10013582);
              if (uVar4 != 1) {
                uVar7 = param_1[0xe2a];
                if ((uVar7 < 0x40000000) &&
                   ((dst[3] < dst[4] || (uVar4 = dst[5], dst[5] = uVar4 + 1, 0x3b < uVar4)))) {
                  uVar16 = *param_1;
                  uVar4 = 0;
                  dst[5] = 0;
                  thunk_snprintf((char *)&local_3a0,0x200,str_100135e6,uVar16,uVar7,dst[3]);
                  iVar5 = recovered_1000de48();
                  if (iVar5 == 0) goto LAB_1000a72c;
                  uVar4 = recovered_1000e5f0(param_1,str_10013625);
                  dst[4] = uVar4;
                  if (dst[3] < uVar4) {
                    dst[3] = dst[3] + 1;
                    uVar20 = 0;
                    thunk_memset(param_1 + 0xf13,0,0x10c);
                    param_1[0xf13] = param_1[0xe2a];
                    uVar4 = recovered_1000e5f0(param_1,&DAT_10013587);
                    param_1[0xf14] = uVar4;
                    uVar4 = recovered_1000e5f0(param_1,&DAT_1001358c);
                    param_1[0xf15] = uVar4;
                    uVar4 = recovered_1000e5f0(param_1,&DAT_1001358f);
                    param_1[0xf16] = uVar4;
                    uVar4 = recovered_1000e5f0(param_1,str_10013592);
                    param_1[0xf17] = uVar4;
                    bVar21 = recovered_1000ea4c(param_1);
                    *(bool *)(param_1 + 0xf18) = bVar21;
                    recovered_1000e6fc(param_1,&DAT_1001359a,(undefined1 *)(param_1 + 0xf1a),0xf0);
                    if ((param_1[0xf16] != 0) && (uVar20 = 0, *(char *)(param_1 + 0xf1a) != '\0')) {
                      uVar20 = 1;
                    }
                    *(undefined1 *)(param_1 + 0xf58) = uVar20;
                  }
                }
                uVar4 = 1;
                goto LAB_1000a72c;
              }
              thunk_memset(param_1 + 0xf13,0,0x10c);
              param_1[0xf13] = param_1[0xe2a];
              uVar4 = recovered_1000e5f0(param_1,&DAT_10013587);
              param_1[0xf14] = uVar4;
              uVar4 = recovered_1000e5f0(param_1,&DAT_1001358c);
              param_1[0xf15] = uVar4;
              uVar4 = recovered_1000e5f0(param_1,&DAT_1001358f);
              param_1[0xf16] = uVar4;
              uVar4 = recovered_1000e5f0(param_1,str_10013592);
              param_1[0xf17] = uVar4;
              pcVar6 = (char *)(param_1 + 0xf1a);
              recovered_1000e6fc(param_1,&DAT_1001359a,pcVar6,0xf0);
              cVar3 = *(char *)(param_1 + 0xf1a);
              if (cVar3 == '$') {
                uVar8 = thunk_strlen(pcVar6);
                iVar5 = recovered_1000e758(pcVar6,uVar8,&local_140,&local_80,local_1a0);
                if (iVar5 == 0) {
                  cVar3 = *pcVar6;
                  goto LAB_1000af34;
                }
                bVar21 = local_1a0[0] == '?' || local_1a0[0] == '!';
                if (local_1a0[0] == '?' || local_1a0[0] == '!') {
                  bVar21 = *(char *)(param_1 + 0xf77) == '\x01';
                }
                if ((((bVar21) && (*(char *)((int)param_1 + 0x3ddd) == '\x01')) &&
                    (param_1[0xf14] == param_1[0xf79])) &&
                   ((local_140 == param_1[0xf7b] && (local_80 == param_1[0xf7c])))) {
                  *(undefined1 *)((int)param_1 + 0x3ddd) = 0;
                  if (local_1a0[0] == '?') {
                    pcVar6 = str_1001359f;
                    *(undefined1 *)(param_1 + 0xf77) = 0;
                    puVar14 = (undefined4 *)(local_80 + 1);
                  }
                  else {
                    if (local_80 != local_140) {
                      param_1[0xf7c] = local_80 + 1;
                      recovered_1000e29c(param_1);
                      goto LAB_1000ac28;
                    }
                    pcVar6 = str_100135d1;
                    *(undefined1 *)(param_1 + 0xf77) = 0;
                    puVar14 = param_1 + 3999;
                  }
                  thunk_snprintf((char *)(param_1 + 0xfbf),0x80,pcVar6,(uint)puVar14);
                  thunk_snprintf(arg0,0x80,&DAT_100132d9,param_1 + 0xfbf);
                }
LAB_1000ac28:
                uVar20 = 0;
              }
              else {
LAB_1000af34:
                uVar20 = 0;
                if (cVar3 != '\0') {
                  uVar20 = 1;
                }
              }
              uVar4 = 1;
              *(undefined1 *)(param_1 + 0xf58) = uVar20;
              goto LAB_1000a72c;
            }
            pcVar6 = (char *)param_1[0x104];
          }
        }
        thunk_snprintf(arg0,0x80,&DAT_100132d9,pcVar6);
        uVar4 = 0;
        goto LAB_1000a72c;
      }
      if (iVar5 == 2) {
LAB_1000a55c:
        iVar18 = 1;
        iVar5 = 1;
        param_1[0xe29] = 3;
        local_80 = CONCAT31(PF_PART3(local_80, 1),0x22);
        if (*(byte *)((int)param_1 + 0x3839) != 0) {
          uVar4 = 0;
          iVar5 = 1;
          pbVar13 = (byte *)((int)param_1 + 0x383a);
          bVar10 = *(byte *)((int)param_1 + 0x3839);
          do {
            if ((bVar10 < 0x20) || (0x43 < iVar5 + 3U)) goto LAB_1000a72c;
            bVar1 = *pbVar13;
            if (bVar10 == 0x2f || bVar10 == 0x22) {
              *(undefined1 *)((int)&local_80 + iVar5) = 0x2f;
              iVar5 = iVar5 + 1;
            }
            *(byte *)((int)&local_80 + iVar5) = bVar10;
            iVar5 = iVar5 + 1;
            pbVar13 = pbVar13 + 1;
            bVar10 = bVar1;
          } while (bVar1 != 0);
        }
        local_140 = CONCAT31(PF_PART3(local_140, 1),0x22);
        *(undefined2 *)((int)&local_80 + iVar5) = 0x22;
        if (*(byte *)((int)param_1 + 0x385a) != 0) {
          iVar18 = 1;
          uVar4 = 0;
          pbVar13 = (byte *)((int)param_1 + 0x385b);
          bVar10 = *(byte *)((int)param_1 + 0x385a);
          do {
            if ((bVar10 < 0x20) || (0x83 < iVar18 + 3U)) goto LAB_1000a72c;
            bVar1 = *pbVar13;
            if (bVar10 == 0x2f || bVar10 == 0x22) {
              *(undefined1 *)((int)&local_140 + iVar18) = 0x2f;
              iVar18 = iVar18 + 1;
            }
            *(byte *)((int)&local_140 + iVar18) = bVar10;
            iVar18 = iVar18 + 1;
            pbVar13 = pbVar13 + 1;
            bVar10 = bVar1;
          } while (bVar1 != 0);
        }
        pcVar6 = str_10013334;
        uVar4 = *param_1;
        uVar16 = param_1[0xdd0];
        if (*(char *)(param_1 + 0xdd2) != '\0') {
          pcVar6 = &DAT_1001332f;
        }
        *(undefined2 *)((int)&local_140 + iVar18) = 0x22;
        thunk_snprintf((char *)&local_3a0,0x200,str_100133e3,uVar4,uVar7,uVar16,&local_80,
                           &local_140,pcVar6);
        iVar5 = recovered_1000de48();
        if (iVar5 == 0) {
          bVar21 = recovered_1000de9c(param_1[0x104]);
          uVar9 = 3;
          if (bVar21) {
            uVar9 = 2;
          }
          param_1[0xe29] = uVar9;
          if (!bVar21) {
            pcVar6 = (char *)param_1[0x104];
          }
          else {
            pcVar6 = str_10013446;
          }
        }
        else {
          param_1[0xe29] = 1;
          pcVar6 = str_1001342e;
        }
        thunk_snprintf(arg0,0x80,&DAT_100132d9,pcVar6);
        uVar4 = (uint)(iVar5 != 0);
        goto LAB_1000a72c;
      }
      if ((*(char *)(param_1 + 0xfe0) == '\x01') && (uVar7 < 0x40000000)) goto LAB_1000a428;
      goto LAB_1000a6f4;
    }
    uVar4 = (uint)(*(byte *)((int)param_1 + 0x5b2) | uVar7 < 0x40000000);
  }
  DataMemoryBarrier(0xb);
  (void)__atomic_exchange_n((uint32_t *)(param_1 + 0xfdf),uVar4,__ATOMIC_ACQ_REL);
  DataMemoryBarrier(0xb);
  uVar4 = 1;
LAB_1000a72c:
  param_1[0x100] = uVar4;
  DataMemoryBarrier(0xb);
  (void)__atomic_exchange_n((uint32_t *)(param_1 + 0xff),1,__ATOMIC_ACQ_REL);
  DataMemoryBarrier(0xb);
  return param_1[0x100] == 0;
}

#undef DAT_00003749
#undef DAT_10013119
#undef DAT_100132d9
#undef DAT_1001332f
#undef DAT_10013352
#undef DAT_10013357
#undef DAT_1001335c
#undef DAT_10013582
#undef DAT_10013587
#undef DAT_1001358c
#undef DAT_1001358f
#undef DAT_1001359a
#undef DAT_100136c7
#undef DAT_10013740
#undef DAT_1001395e
#undef DAT_100140a0
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_40010a04
#undef DAT_40010a3c
#undef Ram40010800
#undef Ram40010804
#undef Ram40010808
#undef UINT_40010834
#undef UINT_40010890
#undef UINT_40010898
#undef _DAT_40010a04
#undef _DAT_40010a3c
#undef str_10013334
#undef str_10013349
#undef str_100133c2
#undef str_100133ca
#undef str_100133e3
#undef str_1001342e
#undef str_10013446
#undef str_1001346e
#undef str_10013495
#undef str_100134c2
#undef str_100134ee
#undef str_10013531
#undef str_1001353a
#undef str_10013542
#undef str_1001354a
#undef str_10013592
#undef str_1001359f
#undef str_100135d1
#undef str_100135e6
#undef str_10013625
#undef str_10013630
#undef str_10013667
#undef str_10013670
#undef str_1001368f
#undef str_100136cc
#undef str_100136e3
#undef str_10013713
#undef str_1001372b
#undef str_10013745
#undef str_1001374e
#undef str_10013758
#undef str_1001375f
#undef str_10013798
#undef str_1001379f
#undef str_100137c4
#undef str_100137ce
#undef str_10013801
#undef str_10013936
#undef str_10013961
#undef str_10013994
#undef str_100139bf
#undef str_100139de
#undef str_10013a15
#undef str_10013b59
#undef local_3a4
#undef local_3a0
#undef local_39c
#undef local_398
#undef local_1a0
#undef local_140
#undef local_80
#undef local_78
#undef local_74
#undef local_70
#undef local_6c
#undef iStack_7c

#define iStack_30 (*(int *)(pf_stack_frame + 48))
#define local_44 (*(int *)(pf_stack_frame + 28))
#define local_40 (*(uint *)(pf_stack_frame + 32))
#define local_3c (*(uint *)(pf_stack_frame + 36))
#define local_34 (*(int *)(pf_stack_frame + 44))
#define local_2c (*(uint *)(pf_stack_frame + 52))
#define local_24 (*(int *)(pf_stack_frame + 60))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b06c
 */

void recovered_1000b06c(int param_1)

{
  unsigned char pf_stack_frame[128] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;

  recovered_1000c280(&iStack_30,param_1);
  iVar3 = local_24;
  uVar5 = local_2c;
  recovered_10012820(&local_40,param_1);
  uVar1 = thunk_terror_ui_colour(0xb);
  recovered_1000c280(&iStack_30,param_1);
  iVar2 = local_24;
  uVar7 = local_2c;
  recovered_1000c280(&iStack_30,param_1);
  iVar2 = uVar7 + iVar2;
  iVar11 = iVar3 + -0x22;
  uVar7 = iVar2 - 0x1e;
  iVar6 = local_24 + local_2c;
  if (iVar3 + -0x1e < 0x16) {
    iVar11 = 0x12;
  }
  if (*(char *)(param_1 + 0x345) != '\x01') {
    uVar4 = uVar7;
    if ((int)uVar5 < (int)uVar7) {
      uVar4 = uVar5;
    }
    iVar3 = iVar11 + uVar5;
    if ((int)(iVar11 + uVar5) < iVar6) {
      iVar3 = iVar6;
    }
    pf_app_terror_ui_scrollbar_capture((void *)(param_1 + 0x348),(void *)param_1,10,uVar4,0xc,iVar3 - uVar4);
  }
  local_44 = iVar11 + uVar5;
  uVar4 = *(uint *)(param_1 + 0x340);
  if (0x1f < uVar4) {
    uVar4 = 0x20;
  }
  uVar8 = uVar4 * 0x20 * uVar4 * 0x20 * (uVar4 * -0x40 + 0xc00);
  uVar4 = thunk_terror_ui_colour(5);
  uVar12 = (uVar8 + 0x80000 >> 0x14) * 10 + 0x200;
  uVar9 = (uVar12 >> 10) + 2;
  recovered_10012a10(param_1,10,uVar5,uVar9,iVar11,
                     uVar4 & 0xff00 | (uVar4 & 0xff) << 0x10 | (uVar4 & 0xff0000) >> 0x10);
  uVar4 = thunk_terror_ui_colour(8);
  uVar13 = uVar4 & 0xff00 | (uVar4 & 0xff) << 0x10 | (uVar4 & 0xff0000) >> 0x10;
  recovered_10012a10(param_1,10,uVar5,uVar9,1,uVar13);
  recovered_10012a10(param_1,10,local_44 - 1,uVar9,1,uVar13);
  recovered_10012a10(param_1,10,uVar5,1,iVar11,uVar13);
  uVar4 = (uVar12 >> 10) + 0xb;
  recovered_10012a10(param_1,uVar4,uVar5,1,iVar11,uVar13);
  if (0 < local_34) {
    uVar8 = (uint)(0x66 < uVar8 >> 0x13);
    uVar5 = thunk_terror_ui_colour(6);
    recovered_10012a10(param_1,local_40 + uVar8,local_3c + uVar8,uVar9 + uVar8 * -2,
                       local_34 + uVar8 * -2,
                       uVar5 & 0xff00 | (uVar5 & 0xff) << 0x10 | (uVar5 & 0xff0000) >> 0x10);
    uVar5 = thunk_terror_ui_colour(9);
    uVar5 = uVar5 & 0xff00 | (uVar5 & 0xff) << 0x10 | (uVar5 & 0xff0000) >> 0x10;
    recovered_10012a10(param_1,local_40,local_3c,uVar9,1,uVar5);
    recovered_10012a10(param_1,local_40,(local_34 + local_3c) - 1,uVar9,1,uVar5);
    recovered_10012a10(param_1,local_40,local_3c,1,local_34,uVar5);
    recovered_10012a10(param_1,(uVar12 >> 10) + local_40 + 1,local_3c,1,local_34,uVar5);
  }
  uVar8 = iVar6 - 0xe;
  uVar5 = thunk_terror_ui_colour(7);
  recovered_10012a10(param_1,10,uVar7,uVar9,0xe,
                     uVar5 & 0xff00 | (uVar5 & 0xff) << 0x10 | (uVar5 & 0xff0000) >> 0x10);
  uVar5 = thunk_terror_ui_colour(10);
  uVar5 = uVar5 & 0xff00 | (uVar5 & 0xff) << 0x10 | (uVar5 & 0xff0000) >> 0x10;
  recovered_10012a10(param_1,10,uVar7,uVar9,1,uVar5);
  recovered_10012a10(param_1,10,iVar2 - 0x11,uVar9,1,uVar5);
  recovered_10012a10(param_1,10,uVar7,1,0xe,uVar5);
  recovered_10012a10(param_1,uVar4,uVar7,1,0xe,uVar5);
  uVar10 = uVar1 & 0xff00 | (uVar1 & 0xff) << 0x10 | (uVar1 & 0xff0000) >> 0x10;
  uVar13 = (uVar9 >> 1) + 10;
  recovered_10012a10(param_1,uVar13,iVar2 - 0x1b,1,1,uVar10);
  uVar7 = 4;
  uVar1 = (uVar12 >> 10) + 3;
  uVar5 = uVar1 >> 1;
  if (uVar5 < 4) {
    uVar7 = uVar1 >> 1;
  }
  if (uVar1 >> 1 != 1) {
    uVar1 = uVar9 >> 1;
    recovered_10012a10(param_1,uVar1 + 9,iVar2 - 0x1a,3,1,uVar10);
    if ((uVar5 != 2) && (recovered_10012a10(param_1,uVar1 + 8,iVar2 - 0x19,5,1,uVar10), uVar5 != 3))
    {
      recovered_10012a10(param_1,uVar1 + 7,iVar2 - 0x18,7,1,uVar10);
    }
  }
  uVar1 = thunk_terror_ui_colour(7);
  recovered_10012a10(param_1,10,uVar8,uVar9,0xe,
                     uVar1 & 0xff00 | (uVar1 & 0xff) << 0x10 | (uVar1 & 0xff0000) >> 0x10);
  uVar1 = thunk_terror_ui_colour(10);
  uVar1 = uVar1 & 0xff00 | (uVar1 & 0xff) << 0x10 | (uVar1 & 0xff0000) >> 0x10;
  recovered_10012a10(param_1,10,uVar8,uVar9,1,uVar1);
  recovered_10012a10(param_1,10,iVar6 - 1,uVar9,1,uVar1);
  recovered_10012a10(param_1,10,uVar8,1,0xe,uVar1);
  recovered_10012a10(param_1,uVar4,uVar8,1,0xe,uVar1);
  recovered_10012a10(param_1,uVar13 - (uVar7 - 1),iVar6 - 9,(uVar7 - 1) * 2 | 1,1,uVar10);
  if (((uVar5 != 1) &&
      (recovered_10012a10(param_1,uVar13 - (uVar7 - 2),iVar6 - 8,(uVar7 - 2) * 2 | 1,1,uVar10),
      uVar5 != 2)) &&
     (recovered_10012a10(param_1,uVar13 - (uVar7 - 3),iVar6 - 7,(uVar7 - 3) * 2 | 1,1,uVar10),
     uVar5 != 3)) {
    recovered_10012a10(param_1,uVar13 - (uVar7 - 4),iVar6 - 6,(uVar7 - 4) * 2 | 1,1,uVar10);
  }
  return;
}

#undef iStack_30
#undef local_44
#undef local_40
#undef local_3c
#undef local_34
#undef local_2c
#undef local_24

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
 * Address: 0x1000b6c0
 */

undefined4 recovered_1000b6c0(int param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  code *pcVar2;
  uint uVar3;
  undefined1 *puVar4;
  uint uVar5;
  ulong size;
  bool bVar6;

  if (param_1 == 0 || param_2 == 0) {
    return 0;
  }
  uVar5 = *(uint *)(param_1 + 0x40c);
  if ((*(void **)(param_1 + 0x408) == (void *)0x0) || (uVar5 < param_2)) {
    if (uVar5 == 0) {
      uVar5 = 0x40;
    }
    if (uVar5 < param_2) {
      do {
        uVar3 = param_2;
        if (-1 < (int)uVar5) {
          uVar3 = uVar5 << 1;
        }
        uVar5 = uVar3;
      } while (uVar5 < param_2);
    }
    iVar1 = Ram40010800;
    if (iVar1 != 0x50414d57) {
      return 0;
    }
    iVar1 = Ram40010804;
    if (iVar1 == 0) {
      return 0;
    }
    uVar3 = Ram40010808;
    bVar6 = uVar3 < 0xc;
    if (!bVar6) {
      uVar3 = Ram40010808;
    }
    if (bVar6 || uVar3 < 0x58) {
      return 0;
    }
    pcVar2 = (code *)UINT_40010854;
    if (pcVar2 == (code *)0x0) {
      return 0;
    }
    puVar4 = (*pcVar2)(*(void **)(param_1 + 0x408),uVar5);
    if (puVar4 == (undefined1 *)0x0) {
      return 0;
    }
    if (*(int *)(param_1 + 0x408) == 0) {
      *puVar4 = 0;
    }
    *(undefined1 **)(param_1 + 0x408) = puVar4;
    *(uint *)(param_1 + 0x40c) = uVar5;
  }
  size = *(uint *)(param_1 + 0x414);
  if (param_2 < 0x1001) {
    param_2 = 0x1000;
  }
  if ((*(void **)(param_1 + 0x410) != (void *)0x0) && (param_2 <= size)) {
    return 1;
  }
  uVar5 = size;
  if (size == 0) {
    uVar5 = 0x40;
  }
  while (uVar3 = uVar5, uVar3 < param_2) {
    size = param_2;
    uVar5 = param_2;
    if (-1 < (int)uVar3) {
      size = uVar3 << 1;
      uVar5 = size;
    }
  }
  iVar1 = Ram40010800;
  if ((iVar1 == 0x50414d57) && (iVar1 = Ram40010804, iVar1 != 0)) {
    uVar5 = Ram40010808;
    bVar6 = 0xb < uVar5;
    if (bVar6) {
      uVar5 = Ram40010808;
    }
    if (((bVar6 && 0x57 < uVar5) && (pcVar2 = (code *)UINT_40010854, pcVar2 != (code *)0x0)) &&
       (puVar4 = (*pcVar2)(*(void **)(param_1 + 0x410),size), puVar4 != (undefined1 *)0x0)) {
      if (*(int *)(param_1 + 0x410) == 0) {
        *puVar4 = 0;
      }
      *(ulong *)(param_1 + 0x414) = size;
      *(undefined1 **)(param_1 + 0x410) = puVar4;
      return 1;
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
 * Address: 0x1000b890
 */

void recovered_1000b890(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;

  iVar2 = Ram40010800;
  if ((iVar2 == 0x50414d57) && (iVar2 = Ram40010804, iVar2 != 0)) {
    uVar1 = Ram40010808;
    bVar4 = 0xb < uVar1;
    if (bVar4) {
      uVar1 = Ram40010808;
    }
    if ((bVar4 && 0x53 < uVar1) && (pcVar3 = (code *)UINT_40010850, pcVar3 != (code *)0x0)) {
      (*pcVar3)(*(void **)(param_1 + 0x3ac));
    }
  }
  iVar2 = Ram40010800;
  if ((iVar2 == 0x50414d57) && (iVar2 = Ram40010804, iVar2 != 0)) {
    uVar1 = Ram40010808;
    bVar4 = 0xb < uVar1;
    if (bVar4) {
      uVar1 = Ram40010808;
    }
    if ((bVar4 && 0x53 < uVar1) && (pcVar3 = (code *)UINT_40010850, pcVar3 != (code *)0x0)) {
      (*pcVar3)(*(void **)(param_1 + 0x408));
    }
  }
  iVar2 = Ram40010800;
  if ((iVar2 == 0x50414d57) && (iVar2 = Ram40010804, iVar2 != 0)) {
    uVar1 = Ram40010808;
    bVar4 = 0xb < uVar1;
    if (bVar4) {
      uVar1 = Ram40010808;
    }
    if ((bVar4 && 0x53 < uVar1) && (pcVar3 = (code *)UINT_40010850, pcVar3 != (code *)0x0)) {
      (*pcVar3)(*(void **)(param_1 + 0x410));
    }
  }
  *(undefined4 *)(param_1 + 0x408) = 0;
  *(undefined4 *)(param_1 + 0x410) = 0;
  *(undefined4 *)(param_1 + 0x414) = 0;
  *(undefined4 *)(param_1 + 0x3b4) = 0;
  *(undefined4 *)(param_1 + 0x3b0) = 0;
  *(undefined4 *)(param_1 + 0x3ac) = 0;
  *(undefined4 *)(param_1 + 0x40c) = 0;
  return;
}

#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef Ram40010800
#undef Ram40010804
#undef Ram40010808
#undef UINT_40010850

#undef DAT_10013119
#define DAT_10013119 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x25dU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b9bc
 */

void recovered_1000b9bc(int param_1,byte *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  if (param_2 == (byte *)0x0) {
    param_2 = &DAT_10013119;
  }
  uVar1 = thunk_strlen((char *)param_2);
  recovered_1000bb24(param_1,param_2,uVar1,0);
  return;
}

#undef DAT_10013119

#undef DAT_10013119
#define DAT_10013119 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x25dU)))
#define aiStack_2c (*(int (*)[11])(pf_stack_frame + 20))
#define local_20 (*(int *)(pf_stack_frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ba00
 */

uint recovered_1000ba00(int param_1)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  uint *puVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;

  if (param_1 == 0) {
    uVar5 = 0;
    recovered_1000c280(aiStack_2c,0);
    iVar1 = 10;
  }
  else {
    iVar1 = recovered_1000bedc(param_1);
    if (iVar1 == 0) {
      if (*(int *)(param_1 + 0x3bc) < 1) {
        uVar5 = 0;
      }
      else {
        iVar1 = 0;
        uVar6 = 0;
        do {
          iVar2 = *(int *)(param_1 + 0x374);
          pbVar4 = &DAT_10013119;
          if (iVar2 != 0) {
            pbVar4 = *(byte **)(iVar2 + iVar1 * 8);
          }
          if (iVar2 != 0) {
            pbVar4 = pbVar4 + *(int *)(param_1 + 0x378);
          }
          iVar2 = recovered_1000c0f8(param_1,pbVar4,*(uint *)(iVar2 + iVar1 * 8 + 4));
          uVar5 = 0x7fffffff;
          if ((int)(uVar6 ^ 0x7fffffff) < iVar2) break;
          uVar5 = iVar2 + uVar6;
          iVar1 = iVar1 + 1;
          uVar6 = uVar5;
        } while (iVar1 < *(int *)(param_1 + 0x3bc));
      }
    }
    else {
      puVar3 = (uint *)(*(int *)(param_1 + 0x3c0) + *(int *)(param_1 + 0x3bc) * 8);
      uVar5 = *puVar3;
      if (0x7ffffffe < uVar5) {
        uVar5 = 0x7fffffff;
      }
      if (puVar3[1] != 0) {
        uVar5 = 0x7fffffff;
      }
    }
    recovered_1000c280(aiStack_2c,param_1);
    iVar1 = *(int *)(param_1 + 0x3a8);
    if (iVar1 < 1) {
      iVar1 = 10;
    }
  }
  iVar1 = recovered_10003fa8(local_20,iVar1 + 2);
  if (iVar1 < 2) {
    iVar1 = 1;
  }
  return uVar5 - iVar1 & ~((int)(uVar5 - iVar1) >> 0x1f);
}

#undef DAT_10013119
#undef aiStack_2c
#undef local_20

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
#undef UINT_40010854
#define UINT_40010854 (*(uint *)(0x40010854U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000bb24
 */

undefined4 recovered_1000bb24(int param_1,byte *param_2,uint param_3,int param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  code *pcVar1;
  byte *dst;
  ulong uVar2;
  void *pvVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int unaff_r4;
  byte bVar8;
  byte *pbVar9;
  undefined4 uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  undefined1 *ptr;
  bool bVar17;

  if (param_1 == 0) {
    return 0;
  }
  uVar4 = 0;
  if (param_2 != (byte *)0x0) {
    uVar4 = *(uint *)(param_1 + 0x37c);
    unaff_r4 = param_1;
  }
  if (param_2 == (byte *)0x0 || uVar4 == 0xffffffff) {
    return 0;
  }
  if (-uVar4 - 2 < param_3) {
    return 0;
  }
  pbVar9 = *(byte **)(unaff_r4 + 0x378);
  dst = (byte *)0x0;
  if (((pbVar9 != (byte *)0x0) && (pbVar9 <= param_2)) &&
     ((uint)((int)param_2 - (int)pbVar9) < uVar4)) {
    uVar2 = thunk_strlen((char *)param_2);
    if (0xfffffffe < uVar2) {
      return 0;
    }
    iVar16 = Ram40010800;
    if (iVar16 != 0x50414d57) {
      return 0;
    }
    iVar16 = Ram40010804;
    if (iVar16 == 0) {
      return 0;
    }
    uVar4 = Ram40010808;
    bVar17 = uVar4 < 0xc;
    if (!bVar17) {
      uVar4 = Ram40010808;
    }
    if (bVar17 || uVar4 < 0x50) {
      return 0;
    }
    pcVar1 = (code *)UINT_4001084c;
    if (pcVar1 == (code *)0x0) {
      return 0;
    }
    dst = (*pcVar1)(uVar2 + 1);
    if (dst == (byte *)0x0) {
      return 0;
    }
    thunk_memcpy(dst,param_2,uVar2 + 1);
    param_2 = dst;
  }
  uVar4 = *(uint *)(unaff_r4 + 0x3bc);
  if (uVar4 != 0x7fffffff) {
    uVar12 = *(uint *)(unaff_r4 + 0x3b8);
    if ((int)uVar4 < (int)uVar12) {
LAB_1000bc9c:
      iVar16 = *(int *)(unaff_r4 + 0x37c);
      uVar4 = param_3 + iVar16 + 1;
      if (uVar4 != 0) {
        ptr = *(undefined1 **)(unaff_r4 + 0x378);
        uVar12 = *(uint *)(unaff_r4 + 0x380);
        if ((ptr != (undefined1 *)0x0) && (uVar4 <= uVar12)) {
LAB_1000bcc4:
          iVar14 = *(int *)(unaff_r4 + 0x3bc);
          iVar13 = 0;
          if (param_3 != 0) {
            do {
              bVar8 = *param_2;
              if ((param_4 == 0) || (bVar8 != 0xd)) {
                if (bVar8 < 0x21) {
                  bVar8 = 0x20;
                }
                *(byte *)(*(int *)(unaff_r4 + 0x378) + iVar16 + iVar13) = bVar8;
                iVar13 = iVar13 + 1;
              }
              param_3 = param_3 - 1;
              param_2 = param_2 + 1;
            } while (param_3 != 0);
            ptr = *(undefined1 **)(unaff_r4 + 0x378);
          }
          ptr[iVar13 + iVar16] = 0;
          iVar5 = *(int *)(unaff_r4 + 0x3c8);
          *(int *)(unaff_r4 + 0x3bc) = *(int *)(unaff_r4 + 0x3bc) + 1;
          *(undefined4 *)(unaff_r4 + 0x3e0) = 0;
          piVar7 = (int *)(*(int *)(unaff_r4 + 0x374) + iVar14 * 8);
          *piVar7 = iVar16;
          uVar10 = 1;
          iVar6 = *(int *)(unaff_r4 + 0x3d0);
          if (iVar14 < iVar5) {
            *(int *)(unaff_r4 + 0x3c8) = iVar14;
          }
          bVar17 = iVar6 == iVar14;
          piVar7[1] = iVar13;
          if (bVar17) {
            iVar6 = -1;
          }
          *(int *)(unaff_r4 + 0x37c) = iVar13 + iVar16 + 1;
          if (bVar17) {
            *(int *)(unaff_r4 + 0x3d0) = iVar6;
          }
          iVar16 = Ram40010800;
          goto LAB_1000bc4c;
        }
        if (uVar12 == 0) {
          uVar12 = 0x40;
        }
        if (uVar12 < uVar4) {
          do {
            uVar11 = uVar4;
            if (-1 < (int)uVar12) {
              uVar11 = uVar12 << 1;
            }
            uVar12 = uVar11;
          } while (uVar12 < uVar4);
        }
        iVar16 = Ram40010800;
        if ((iVar16 == 0x50414d57) && (iVar16 = Ram40010804, iVar16 != 0)) {
          uVar4 = Ram40010808;
          bVar17 = 0xb < uVar4;
          if (bVar17) {
            uVar4 = Ram40010808;
          }
          if (((bVar17 && 0x57 < uVar4) && (pcVar1 = (code *)UINT_40010854, pcVar1 != (code *)0x0))
             && (ptr = (*pcVar1)(ptr,uVar12), ptr != (undefined1 *)0x0)) {
            if (*(int *)(unaff_r4 + 0x378) == 0) {
              *ptr = 0;
            }
            iVar16 = *(int *)(unaff_r4 + 0x37c);
            *(uint *)(unaff_r4 + 0x380) = uVar12;
            *(undefined1 **)(unaff_r4 + 0x378) = ptr;
            goto LAB_1000bcc4;
          }
        }
      }
    }
    else {
      uVar11 = uVar12;
      if (uVar12 == 0) {
        uVar11 = 0x10;
      }
      uVar15 = 0x1fffffff;
      if (uVar11 < 0x10000000) {
        uVar15 = uVar11 << 1;
      }
      if (uVar12 == 0) {
        uVar15 = 0x10;
      }
      if ((uVar4 < uVar15) && (uVar15 < 0x20000000)) {
        iVar16 = Ram40010800;
        if ((iVar16 == 0x50414d57) && (iVar16 = Ram40010804, iVar16 != 0)) {
          uVar4 = Ram40010808;
          bVar17 = 0xb < uVar4;
          if (bVar17) {
            uVar4 = Ram40010808;
          }
          if (((bVar17 && 0x57 < uVar4) && (pcVar1 = (code *)UINT_40010854, pcVar1 != (code *)0x0))
             && (pvVar3 = (*pcVar1)(*(void **)(unaff_r4 + 0x374),uVar15 << 3), pvVar3 != (void *)0x0
                )) {
            *(uint *)(unaff_r4 + 0x3b8) = uVar15;
            *(void **)(unaff_r4 + 0x374) = pvVar3;
            goto LAB_1000bc9c;
          }
        }
      }
    }
  }
  iVar16 = Ram40010800;
  uVar10 = 0;
LAB_1000bc4c:
  if ((iVar16 == 0x50414d57) && (iVar16 = Ram40010804, iVar16 != 0)) {
    uVar4 = Ram40010808;
    bVar17 = 0xb < uVar4;
    if (bVar17) {
      uVar4 = Ram40010808;
    }
    if ((bVar17 && 0x53 < uVar4) && (pcVar1 = (code *)UINT_40010850, pcVar1 != (code *)0x0)) {
      (*pcVar1)(dst);
    }
  }
  return uVar10;
}

#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef Ram40010800
#undef Ram40010804
#undef Ram40010808
#undef UINT_4001084c
#undef UINT_40010850
#undef UINT_40010854

#undef DAT_10013119
#define DAT_10013119 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x25dU)))
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
#define local_28 (*(int *)(pf_stack_frame + 24))
#define aiStack_30 (*(int (*)[12])(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000bedc
 */

undefined4 recovered_1000bedc(int param_1)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  code *pcVar3;
  void *pvVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  byte *pbVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  bool bVar15;

  if (*(int *)(param_1 + 0x374) == 0) {
    return 0;
  }
  iVar13 = *(int *)(param_1 + 0x3bc);
  uVar7 = iVar13 + 1;
  if (0x1ffffffe < uVar7 && iVar13 != 0x1ffffffe) {
    return 0;
  }
  uVar12 = *(uint *)(param_1 + 0x3c4);
  if (uVar12 < uVar7) {
    if (uVar12 == 0) {
      uVar12 = 0x10;
    }
    uVar6 = uVar12;
    if (uVar12 < uVar7) {
      do {
        if (0xfffffff < uVar6) {
          uVar12 = uVar7;
          break;
        }
        uVar12 = uVar6 << 1;
        uVar1 = uVar6 * 2;
        uVar6 = uVar12;
      } while (uVar1 < uVar7);
    }
    iVar13 = Ram40010800;
    if (iVar13 != 0x50414d57) {
      return 0;
    }
    iVar13 = Ram40010804;
    if (iVar13 == 0) {
      return 0;
    }
    uVar7 = Ram40010808;
    bVar15 = uVar7 < 0xc;
    if (!bVar15) {
      uVar7 = Ram40010808;
    }
    if (bVar15 || uVar7 < 0x58) {
      return 0;
    }
    pcVar3 = (code *)UINT_40010854;
    if (pcVar3 == (code *)0x0) {
      return 0;
    }
    pvVar4 = (*pcVar3)(*(void **)(param_1 + 0x3c0),uVar12 << 3);
    if (pvVar4 == (void *)0x0) {
      return 0;
    }
    iVar13 = *(int *)(param_1 + 0x3bc);
    *(uint *)(param_1 + 0x3c4) = uVar12;
    *(void **)(param_1 + 0x3c0) = pvVar4;
  }
  recovered_1000c280(aiStack_30,param_1);
  iVar8 = *(int *)(param_1 + 0x3a4);
  if (iVar8 < 1) {
    iVar8 = 6;
  }
  iVar8 = recovered_10003fa8(local_28 + -8,iVar8);
  if (iVar8 < 2) {
    iVar8 = 1;
  }
  if ((iVar8 != *(int *)(param_1 + 0x3cc)) || (iVar9 = *(int *)(param_1 + 0x3c8), iVar13 < iVar9)) {
    iVar9 = 0;
    *(int *)(param_1 + 0x3cc) = iVar8;
    *(undefined4 *)(param_1 + 0x3c8) = 0;
  }
  puVar5 = *(undefined4 **)(param_1 + 0x3c0);
  iVar8 = 0;
  puVar5[1] = 0;
  *puVar5 = 0;
  if (iVar9 < iVar13) {
    uVar7 = puVar5[iVar9 * 2];
    iVar2 = iVar9 * 8;
    iVar14 = 8;
    uVar12 = (puVar5 + iVar9 * 2)[1];
    do {
      iVar13 = *(int *)(param_1 + 0x374);
      pbVar11 = &DAT_10013119;
      if ((-1 < iVar9 + iVar8) && (iVar13 != 0)) {
        pbVar11 = (byte *)(*(int *)(param_1 + 0x378) + *(int *)(iVar13 + iVar2 + iVar8 * 8));
      }
      uVar6 = recovered_1000c0f8(param_1,pbVar11,*(uint *)(iVar13 + iVar2 + iVar8 * 8 + 4));
      bVar15 = CARRY4(uVar7,uVar6);
      uVar7 = uVar7 + uVar6;
      uVar12 = uVar12 + ((int)uVar6 >> 0x1f) + (uint)bVar15;
      iVar8 = iVar8 + 1;
      iVar13 = *(int *)(param_1 + 0x3bc);
      puVar10 = (uint *)(*(int *)(param_1 + 0x3c0) + iVar2 + iVar14);
      *puVar10 = uVar7;
      iVar14 = iVar14 + 8;
      puVar10[1] = uVar12;
    } while (iVar9 + iVar8 < iVar13);
  }
  *(int *)(param_1 + 0x3c8) = iVar13;
  return 1;
}

#undef DAT_10013119
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef Ram40010800
#undef Ram40010804
#undef Ram40010808
#undef UINT_40010854
#undef local_28
#undef aiStack_30

#define local_20 (*(int *)(pf_stack_frame + 32))
#define aiStack_28 (*(int (*)[10])(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c0f8
 */

int recovered_1000c0f8(int param_1,byte *param_2,uint param_3)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  byte bVar1;
  uint uVar2;
  int iVar3;
  uint extraout_r2 = 0;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;

  recovered_1000c280(aiStack_28,param_1);
  if (param_1 == 0) {
    iVar3 = 6;
  }
  else {
    iVar3 = *(int *)(param_1 + 0x3a4);
    if (iVar3 < 1) {
      iVar3 = 6;
    }
  }
  uVar2 = recovered_10003fa8(local_20 + -8,iVar3);
  iVar3 = 1;
  if ((int)uVar2 < 2) {
    uVar2 = 1;
  }
  uVar4 = extraout_r2;
  if (param_2 != (byte *)0x0) {
    uVar4 = (uint)*param_2;
  }
  if (param_2 != (byte *)0x0 && uVar4 != 0) {
    iVar3 = 0;
    if (param_3 != 0) {
      uVar4 = 0;
      do {
        uVar7 = param_3 - uVar4;
        if (uVar2 < uVar7) {
          uVar5 = 0xffffffff;
          uVar6 = 0;
          do {
            bVar1 = param_2[uVar6 + uVar4];
            if (bVar1 == 0) break;
            if (bVar1 == 9) {
              uVar5 = uVar6;
            }
            if (bVar1 == 0x20) {
              uVar5 = uVar6;
            }
            uVar6 = uVar6 + 1;
          } while (uVar2 != uVar6);
          uVar6 = uVar2;
          if ((int)uVar5 < 1) {
            do {
              uVar5 = uVar6;
              if ((param_2[uVar5 + uVar4] & 0xc0) != 0x80) {
                if ((int)uVar5 < 1) goto LAB_1000c25c;
                goto LAB_1000c218;
              }
              uVar6 = uVar5 - 1;
            } while (uVar5 - 1 != 0 && 0 < (int)uVar5);
            uVar5 = 1;
            do {
              if ((param_2[uVar5 + uVar4] & 0xc0) != 0x80) goto LAB_1000c210;
              uVar5 = uVar5 + 1;
            } while (uVar7 != uVar5);
            goto LAB_1000c20c;
          }
        }
        else {
LAB_1000c20c:
          uVar5 = uVar7;
LAB_1000c210:
          if ((int)uVar5 < 1) break;
        }
LAB_1000c218:
        if (iVar3 == 0x7fffffff) {
          iVar3 = 0x7fffffff;
          goto LAB_1000c268;
        }
        uVar4 = uVar5 + uVar4;
        iVar3 = iVar3 + 1;
        if (uVar4 < param_3) {
          while (param_2[uVar4] == 0x20 || param_2[uVar4] == 9) {
            uVar4 = uVar4 + 1;
            if (param_3 <= uVar4) goto LAB_1000c25c;
          }
        }
        if (param_3 <= uVar4) break;
      } while( true );
    }
LAB_1000c25c:
    if (iVar3 < 2) {
      iVar3 = 1;
    }
  }
LAB_1000c268:
  return iVar3;
}

#undef local_20
#undef aiStack_28

#undef DAT_1000c430
#define DAT_1000c430 (*(uint64_t *)(0x1000c430U))
#undef DAT_1000c438
#define DAT_1000c438 (*(uint64_t *)(0x1000c438U))
#undef DAT_100140a0
#define DAT_100140a0 (*(int *)(((uintptr_t)pf_module_state + 0x11e4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c280
 */

void recovered_1000c280(int *param_1,int param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;

  iVar3 = DAT_100140a0;
  if (param_2 == 0) {
    *param_1 = 0x12;
    uVar2 = (*(uint64_t *)(uint64_t[]){0x12200000208ULL});
    if (DAT_100140a0 == 0) {
      param_1[3] = 0x15e;
      param_1[2] = 0x2dc;
      param_1[1] = 10;
      return;
    }
    *(undefined8 *)param_1 = (*(uint64_t *)(uint64_t[]){0x46000000e4ULL});
    *(undefined8 *)(param_1 + 2) = uVar2;
    return;
  }
  iVar6 = *(int *)(param_2 + 0x3a8);
  if (iVar6 < 1) {
    iVar7 = 0x16;
    *param_1 = 0x12;
  }
  else {
    *param_1 = 0x12;
    iVar7 = iVar6 + 0xc;
    iVar3 = DAT_100140a0;
  }
  if (iVar3 == 0) {
    bVar1 = true;
    iVar3 = 10;
  }
  else {
    iVar3 = 0x56;
    if (0 < iVar6) {
      iVar3 = iVar6 + 0x4c;
    }
    if (0x207 < *(int *)(param_2 + 4)) {
      iVar3 = 0x2e;
    }
    if (*(int *)(param_2 + 4) == 0) {
      iVar3 = 0x2e;
    }
    iVar4 = 0x18;
    if (0 < iVar6) {
      iVar4 = iVar6 * 2 + 4;
    }
    bVar1 = false;
    iVar3 = iVar3 + iVar4;
  }
  iVar4 = *(int *)(param_2 + 8);
  param_1[1] = iVar3;
  iVar6 = iVar4 + -10;
  if (iVar4 == 0) {
    iVar6 = 0x186;
  }
  uVar5 = *(uint *)(param_2 + 4);
  iVar6 = (iVar6 - (iVar3 + iVar7)) + -8;
  iVar3 = uVar5 - 0x1c;
  param_1[3] = iVar6;
  if (uVar5 == 0) {
    iVar3 = 0x2dc;
  }
  param_1[2] = iVar3;
  if (!bVar1) {
    iVar3 = 0xe4;
    if (uVar5 < 700) {
      iVar3 = 0xb0;
    }
    if ((int)uVar5 < 0x208) {
      iVar3 = 0xc;
    }
    if (uVar5 == 0) {
      iVar3 = 0xe4;
      uVar5 = 0x2f8;
    }
    *param_1 = iVar3;
    iVar3 = (uVar5 - iVar3) + -0xc;
    param_1[2] = iVar3;
  }
  iVar7 = 0xe;
  if (0 < *(int *)(param_2 + 0x3a4)) {
    iVar7 = *(int *)(param_2 + 0x3a4) + 8;
  }
  iVar4 = *(int *)(param_2 + 0x3a8);
  if (iVar3 < iVar7) {
    param_1[2] = iVar7;
  }
  if (iVar4 < 1) {
    iVar4 = 10;
    if (0xf < iVar6) {
      return;
    }
  }
  else if (iVar4 + 6 <= iVar6) {
    return;
  }
  param_1[3] = iVar4 + 6;
  return;
}

#undef DAT_1000c430
#undef DAT_1000c438
#undef DAT_100140a0

#undef DAT_100140a4
#define DAT_100140a4 (*(uint *)(((uintptr_t)pf_module_state + 0x11e8U)))
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
#undef str_100131de
#define str_100131de (*(char (*)[1])(((uintptr_t)pf_module_state + 0x322U)))
#undef str_1001321a
#define str_1001321a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x35eU)))
#undef str_10013246
#define str_10013246 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x38aU)))
#undef str_1001327f
#define str_1001327f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3c3U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c440
 */

undefined4 recovered_1000c440(uint param_1,byte *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  code *pcVar2;
  uint uVar3;
  ulong uVar4;
  byte bVar5;
  undefined4 uVar6;
  int iVar7;
  char *arg2;
  int iVar8;
  undefined4 uVar9;
  byte *pbVar10;
  uint unaff_r4;
  undefined4 uVar11;
  int iVar12;
  void *pvVar13;
  uint uVar14;
  undefined4 uVar15;
  int iVar16;
  int *piVar17;
  bool bVar18;

  uVar11 = 0;
  uVar3 = param_1;
  if (param_2 != (byte *)0x0) {
    uVar3 = (uint)*param_2;
    unaff_r4 = param_1;
  }
  if (param_2 == (byte *)0x0 || uVar3 == 0) {
    return 0;
  }
  uVar4 = thunk_strlen((char *)param_2);
  arg2 = str_100131de;
  if (0xe9 < uVar4) goto LAB_1000c488;
  bVar1 = *param_2;
  piVar17 = (int *)(unaff_r4 + 0x389c);
  if (bVar1 == 0x24) {
LAB_1000c4f0:
    arg2 = str_1001321a;
    pbVar10 = param_2;
    bVar5 = bVar1;
    do {
      pbVar10 = pbVar10 + 1;
      if (bVar5 < 0x20) goto LAB_1000c488;
      bVar5 = *pbVar10;
    } while (bVar5 != 0);
    iVar8 = *piVar17;
    if (iVar8 == 0x20) {
      arg2 = str_10013246;
      goto LAB_1000c488;
    }
    if (bVar1 != 0x24) goto LAB_1000c55c;
  }
  else {
    if (((0xdd < uVar4) && (*(int *)(unaff_r4 + 0x3dd4) != 0)) && (DAT_100140a4 < 0x40000000))
    goto LAB_1000c488;
    if (bVar1 != 0) goto LAB_1000c4f0;
    iVar8 = *piVar17;
    if (iVar8 == 0x20) {
      arg2 = str_10013246;
      goto LAB_1000c488;
    }
LAB_1000c55c:
    uVar3 = *(uint *)(unaff_r4 + 0x3d5c);
    if (uVar3 <= *(uint *)(unaff_r4 + 0x3d58)) {
      uVar14 = uVar3 << 1;
      arg2 = str_10013246;
      if (uVar3 == 0) {
        uVar14 = 0x80;
      }
      if ((uVar14 < uVar3) || (0x10000 < uVar14)) goto LAB_1000c488;
      iVar8 = Ram40010800;
      if ((iVar8 != 0x50414d57) || (iVar8 = Ram40010804, iVar8 == 0)) goto LAB_1000c488;
      uVar3 = Ram40010808;
      bVar18 = 0xb < uVar3;
      if (bVar18) {
        uVar3 = Ram40010808;
      }
      if ((!bVar18 || uVar3 < 0x58) || (pcVar2 = (code *)UINT_40010854, pcVar2 == (code *)0x0))
      goto LAB_1000c488;
      pvVar13 = (*pcVar2)(*(void **)(unaff_r4 + 0x3c48),uVar14 * 0x10c);
      arg2 = str_10013246;
      if (pvVar13 == (void *)0x0) goto LAB_1000c488;
      *(void **)(unaff_r4 + 0x3c48) = pvVar13;
      iVar8 = *piVar17;
      *(uint *)(unaff_r4 + 0x3d5c) = uVar14;
    }
  }
  iVar12 = iVar8 * 0x168 + unaff_r4;
  *piVar17 = iVar8 + 1;
  thunk_memset((void *)(iVar12 + 0xa34),0,0x168);
  iVar8 = *(int *)(unaff_r4 + 0x38a0);
  uVar11 = 1;
  *(undefined4 *)(iVar12 + 0xa34) = 1;
  iVar8 = iVar8 + 1;
  uVar6 = *(undefined4 *)(unaff_r4 + 0x3dd4);
  *(int *)(unaff_r4 + 0x38a0) = iVar8;
  *(int *)(iVar12 + 0xa38) = iVar8;
  uVar3 = DAT_100140a4;
  uVar9 = *(undefined4 *)(unaff_r4 + 0x5b8);
  *(undefined4 *)(iVar12 + 0xa44) = uVar6;
  *(uint *)(iVar12 + 0xa3c) = uVar3;
  *(undefined4 *)(iVar12 + 0xa40) = uVar9;
  thunk_memcpy((void *)(iVar12 + 0xa49),param_2,uVar4 + 1);
  if (*param_2 != 0x24) {
    iVar16 = *(int *)(unaff_r4 + 0x3d58);
    iVar8 = *(int *)(unaff_r4 + 0x3c48);
    pvVar13 = (void *)(iVar16 * 0x10c + iVar8);
    *(int *)(unaff_r4 + 0x3d58) = iVar16 + 1;
    thunk_memset(pvVar13,0,0x10c);
    iVar7 = *(int *)(iVar12 + 0xa44);
    uVar6 = *(undefined4 *)(iVar12 + 0xa3c);
    uVar15 = *(undefined4 *)(iVar12 + 0xa38);
    uVar9 = *(undefined4 *)(iVar12 + 0xa40);
    if (iVar7 == 0) {
      iVar7 = -1;
    }
    *(int *)((int)pvVar13 + 8) = iVar7;
    *(undefined4 *)((int)pvVar13 + 0x10) = uVar9;
    *(undefined4 *)(iVar8 + iVar16 * 0x10c) = uVar6;
    *(undefined2 *)((int)pvVar13 + 0x14) = 0x101;
    *(undefined4 *)((int)pvVar13 + 0x18) = uVar15;
    thunk_memcpy((void *)((int)pvVar13 + 0x1c),param_2,uVar4 + 1);
  }
  *(undefined1 *)(unaff_r4 + 0x38c8) = 0;
  arg2 = str_1001327f;
  *(undefined4 *)(unaff_r4 + 0x5c0) = 0;
LAB_1000c488:
  thunk_snprintf((char *)(unaff_r4 + 0x418),0x80,arg2);
  return uVar11;
}

#undef DAT_100140a4
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef Ram40010800
#undef Ram40010804
#undef Ram40010808
#undef UINT_40010854
#undef str_100131de
#undef str_1001321a
#undef str_10013246
#undef str_1001327f

#undef DAT_10013119
#define DAT_10013119 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x25dU)))
#undef DAT_100132d9
#define DAT_100132d9 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x41dU)))
#undef DAT_10013318
#define DAT_10013318 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x45cU)))
#undef DAT_1001331d
#define DAT_1001331d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x461U)))
#undef DAT_1001332c
#define DAT_1001332c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x470U)))
#undef DAT_100140a0
#define DAT_100140a0 (*(int *)(((uintptr_t)pf_module_state + 0x11e4U)))
#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_40010a04
#define DAT_40010a04 (*(uint8_t *)(0x40010a04U))
#undef DAT_40010a44
#define DAT_40010a44 (*(uint8_t *)(0x40010a44U))
#undef Ram40010800
#define Ram40010800 (*(uint32_t *)(0x40010800U))
#undef Ram40010804
#define Ram40010804 (*(uint32_t *)(0x40010804U))
#undef Ram40010808
#define Ram40010808 (*(uint32_t *)(0x40010808U))
#undef _DAT_40010a04
#define _DAT_40010a04 (*(code * *)(0x40010a04U))
#undef _DAT_40010a44
#define _DAT_40010a44 (*(code * *)(0x40010a44U))
#undef str_10013080
#define str_10013080 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1c4U)))
#undef str_10013146
#define str_10013146 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x28aU)))
#undef str_100132dc
#define str_100132dc (*(char (*)[1])(((uintptr_t)pf_module_state + 0x420U)))
#undef str_100132f2
#define str_100132f2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x436U)))
#undef str_10013304
#define str_10013304 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x448U)))
#undef str_10013320
#define str_10013320 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x464U)))
#define acStack_a4 (*(char (*)[164])(pf_stack_frame + 284))
#define local_1a4 (*(uint *)(pf_stack_frame + 28))
#define local_1a0 (*(int *)(pf_stack_frame + 32))
#define local_19c (*(undefined4 *)(pf_stack_frame + 36))
#define local_198 (*(char * *)(pf_stack_frame + 40))
#define local_194 (*(undefined4 *)(pf_stack_frame + 44))
#define local_190 (*(undefined4 *)(pf_stack_frame + 48))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c740
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_1000c740(int param_1,uint param_2,uint *param_3)

{
  unsigned char pf_stack_frame[480] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  char *arg3;
  uint *puVar3;
  ulong n;
  bool bVar4;

  if (param_1 == 0) {
    return;
  }
  arg3 = &DAT_1001331d;
  if (DAT_100140a0 == 0) {
    iVar2 = Ram40010800;
    if ((iVar2 == 0x50414d57) && (iVar2 = Ram40010804, iVar2 != 0)) {
      uVar1 = Ram40010808;
      bVar4 = 0xb < uVar1;
      if (bVar4) {
        uVar1 = Ram40010808;
      }
      if ((bVar4 && 0x247 < uVar1) && (_DAT_40010a44 != (code *)0x0)) {
        uVar1 = (*_DAT_40010a44)();
        if ((uVar1 & 1) != 0) {
          if ((uVar1 & 2) == 0) {
            puVar3 = (uint *)&DAT_10013119;
            if (param_3 != (uint *)0x0) {
              puVar3 = param_3;
            }
            thunk_snprintf((char *)param_1,param_2,&DAT_100132d9,puVar3);
            return;
          }
          n = 0;
          if (param_3 != (uint *)0x0) {
            n = thunk_strlen((char *)param_3);
          }
          if (param_2 <= n) {
            n = param_2 - 1;
          }
          thunk_memset((void *)param_1,0x2a,n);
          *(undefined1 *)(param_1 + n) = 0;
          return;
        }
        arg3 = &DAT_1001331d;
        if (DAT_100140a0 != 0) goto LAB_1000c814;
      }
    }
    iVar2 = Ram40010800;
    local_190 = 0;
    local_194 = 0;
    local_198 = (char *)0x0;
    local_19c = 0;
    local_1a0 = 0;
    local_1a4 = 0;
    if ((iVar2 == 0x50414d57) && (iVar2 = Ram40010804, iVar2 != 0)) {
      uVar1 = Ram40010808;
      bVar4 = 0xb < uVar1;
      if (bVar4) {
        uVar1 = Ram40010808;
      }
      if (((bVar4 && 0x207 < uVar1) && (_DAT_40010a04 != (code *)0x0)) &&
         (iVar2 = (*_DAT_40010a04)(str_10013146,&local_1a4), iVar2 != 0)) {
        if ((local_1a4 & 0xfffffffb) == 1) {
          if (local_1a0 != 0) {
            arg3 = str_10013320;
            goto LAB_1000c814;
          }
        }
        else if ((local_1a4 == 3) && (local_198 != (char *)0x0)) {
          switch((uintptr_t)(*local_198)) {
          case 'T':
          case 'Y':
          case 't':
          case 'y':
switchD_1000cb50_caseD_54:
            arg3 = str_10013320;
            goto LAB_1000c814;
          case 'U':
          case 'V':
          case 'W':
          case 'X':
          case 'Z':
          case '[':
          case '\\':
          case ']':
          case '^':
          case '_':
          case '`':
          case 'a':
          case 'b':
          case 'c':
          case 'd':
          case 'e':
          case 'f':
          case 'g':
          case 'h':
          case 'i':
          case 'j':
          case 'k':
          case 'l':
          case 'm':
          case 'n':
          case 'o':
          case 'p':
          case 'q':
          case 'r':
          case 's':
          case 'u':
          case 'v':
          case 'w':
          case 'x':
            break;
          default:
            if (*local_198 == '1') goto switchD_1000cb50_caseD_54;
          }
        }
      }
    }
    arg3 = &DAT_1001332c;
  }
LAB_1000c814:
  thunk_snprintf(acStack_a4,0x80,&DAT_100132d9,arg3);
  if (DAT_100140a0 == 0) {
    local_190 = 0;
    local_194 = 0;
    local_198 = (char *)0x0;
    local_19c = 0;
    local_1a0 = 0;
    iVar2 = Ram40010800;
    local_1a4 = 0;
    if ((iVar2 == 0x50414d57) && (iVar2 = Ram40010804, iVar2 != 0)) {
      uVar1 = Ram40010808;
      bVar4 = 0xb < uVar1;
      if (bVar4) {
        uVar1 = Ram40010808;
      }
      if ((bVar4 && 0x207 < uVar1) && (_DAT_40010a04 != (code *)0x0)) {
        puVar3 = &local_1a4;
        iVar2 = (*_DAT_40010a04)(str_10013080,puVar3);
        if (iVar2 != 0) {
          if ((local_1a4 & 0xfffffffb) == 1) {
            if (local_1a0 != 0) goto switchD_1000ca1c_caseD_54;
          }
          else if ((local_1a4 == 3) && (local_198 != (char *)0x0)) {
            switch((uintptr_t)(*local_198)) {
            case 'T':
            case 'Y':
            case 't':
            case 'y':
switchD_1000ca1c_caseD_54:
              recovered_1000d4e0(str_100132dc,acStack_a4,0x80,str_100132f2);
              recovered_1000d4e0(str_10013304,(undefined1 *)puVar3,0x100,&DAT_10013119);
              goto override_prt_1000c8c8_1419e63f;
            case 'U':
            case 'V':
            case 'W':
            case 'X':
            case 'Z':
            case '[':
            case '\\':
            case ']':
            case '^':
            case '_':
            case '`':
            case 'a':
            case 'b':
            case 'c':
            case 'd':
            case 'e':
            case 'f':
            case 'g':
            case 'h':
            case 'i':
            case 'j':
            case 'k':
            case 'l':
            case 'm':
            case 'n':
            case 'o':
            case 'p':
            case 'q':
            case 'r':
            case 's':
            case 'u':
            case 'v':
            case 'w':
            case 'x':
              break;
            default:
              if (*local_198 == '1') goto switchD_1000ca1c_caseD_54;
            }
          }
        }
      }
    }
  }
  puVar3 = (uint *)&DAT_10013119;
  if (param_3 != (uint *)0x0) {
    puVar3 = param_3;
  }
override_prt_1000c8c8_1419e63f:
  thunk_snprintf((char *)param_1,param_2,&DAT_10013318,acStack_a4,puVar3);
  return;
}

#undef DAT_10013119
#undef DAT_100132d9
#undef DAT_10013318
#undef DAT_1001331d
#undef DAT_1001332c
#undef DAT_100140a0
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_40010a04
#undef DAT_40010a44
#undef Ram40010800
#undef Ram40010804
#undef Ram40010808
#undef _DAT_40010a04
#undef _DAT_40010a44
#undef str_10013080
#undef str_10013146
#undef str_100132dc
#undef str_100132f2
#undef str_10013304
#undef str_10013320
#undef acStack_a4
#undef local_1a4
#undef local_1a0
#undef local_19c
#undef local_198
#undef local_194
#undef local_190

#undef DAT_10013119
#define DAT_10013119 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x25dU)))
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
#undef UINT_40010854
#define UINT_40010854 (*(uint *)(0x40010854U))
#define local_24 (*(byte * *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000cc50
 */

void recovered_1000cc50(int param_1,byte *param_2)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  code *UNRECOVERED_JUMPTABLE;
  uint uVar1;
  int iVar2;
  byte *pbVar3;
  ulong uVar4;
  undefined1 *ptr;
  uint uVar5;
  uint size;
  int iVar6;
  int unaff_r4;
  int iVar7;
  int iVar8;
  byte bVar9;
  bool bVar10;

  if (param_1 == 0) {
    return;
  }
  iVar2 = param_1;
  if (param_2 != (byte *)0x0) {
    iVar2 = *(int *)(param_1 + 0x374);
    unaff_r4 = param_1;
  }
  if (param_2 == (byte *)0x0 || iVar2 == 0) {
    return;
  }
  pbVar3 = *(byte **)(unaff_r4 + 0x378);
  if (pbVar3 != (byte *)0x0) {
    bVar10 = param_2 <= pbVar3;
    if (pbVar3 <= param_2) {
      bVar10 = *(uint *)(unaff_r4 + 0x37c) <= (uint)((int)param_2 - (int)pbVar3);
    }
    if (!bVar10) {
      uVar4 = thunk_strlen((char *)param_2);
      if (0xfffffffe < uVar4) {
        return;
      }
      iVar2 = Ram40010800;
      if (iVar2 != 0x50414d57) {
        return;
      }
      iVar2 = Ram40010804;
      if (iVar2 == 0) {
        return;
      }
      uVar5 = Ram40010808;
      bVar10 = uVar5 < 0xc;
      if (!bVar10) {
        uVar5 = Ram40010808;
      }
      if (bVar10 || uVar5 < 0x50) {
        return;
      }
      UNRECOVERED_JUMPTABLE = (code *)UINT_4001084c;
      if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
        return;
      }
      pbVar3 = (*UNRECOVERED_JUMPTABLE)(uVar4 + 1);
      if (pbVar3 == (byte *)0x0) {
        return;
      }
      thunk_memcpy(pbVar3,param_2,uVar4 + 1);
      local_24 = pbVar3;
      goto LAB_1000cd04;
    }
  }
  local_24 = (byte *)0x0;
  pbVar3 = param_2;
LAB_1000cd04:
  bVar9 = *pbVar3;
  switch((uintptr_t)(bVar9)) {
  case 0:
    goto switchD_1000cd18_caseD_0;
  default:
    if (bVar9 < 0x21) {
      bVar9 = 0x20;
    }
    if (*(int *)(unaff_r4 + 0x3e0) == 0) {
      uVar4 = thunk_strlen(&DAT_10013119);
      iVar2 = recovered_1000bb24(unaff_r4,&DAT_10013119,uVar4,0);
      if (iVar2 == 0) goto switchD_1000cd18_caseD_0;
      *(undefined4 *)(unaff_r4 + 0x3e0) = 1;
    }
    uVar5 = *(uint *)(unaff_r4 + 0x37c);
    if (0xfffffffe < uVar5) goto switchD_1000cd18_caseD_0;
    ptr = *(undefined1 **)(unaff_r4 + 0x378);
    iVar2 = *(int *)(unaff_r4 + 0x374);
    iVar8 = *(int *)(unaff_r4 + 0x3bc);
    size = *(uint *)(unaff_r4 + 0x380);
    if (ptr == (undefined1 *)0x0 || size <= uVar5) {
      if (size == 0) {
        size = 0x40;
      }
      if (size <= uVar5) {
        do {
          uVar1 = uVar5 + 1;
          if (-1 < (int)size) {
            uVar1 = size << 1;
          }
          size = uVar1;
        } while (size <= uVar5);
      }
      iVar6 = Ram40010800;
      if ((iVar6 != 0x50414d57) || (iVar6 = Ram40010804, iVar6 == 0)) goto switchD_1000cd18_caseD_0;
      uVar5 = Ram40010808;
      bVar10 = uVar5 < 0xc;
      if (!bVar10) {
        uVar5 = Ram40010808;
      }
      if (((bVar10 || uVar5 < 0x58) ||
          (UNRECOVERED_JUMPTABLE = (code *)UINT_40010854, UNRECOVERED_JUMPTABLE == (code *)0x0)) ||
         (ptr = (*UNRECOVERED_JUMPTABLE)(ptr,size), ptr == (undefined1 *)0x0))
      goto switchD_1000cd18_caseD_0;
      if (*(int *)(unaff_r4 + 0x378) == 0) {
        *ptr = 0;
      }
      *(uint *)(unaff_r4 + 0x380) = size;
      *(undefined1 **)(unaff_r4 + 0x378) = ptr;
    }
    iVar2 = iVar2 + iVar8 * 8;
    iVar8 = *(int *)(iVar2 + -8);
    iVar6 = *(int *)(iVar2 + -4);
    *(int *)(iVar2 + -4) = iVar6 + 1;
    ptr[iVar6 + iVar8] = bVar9;
    ptr[*(int *)(iVar2 + -4) + iVar8] = 0;
    *(int *)(unaff_r4 + 0x37c) = *(int *)(iVar2 + -8) + *(int *)(iVar2 + -4) + 1;
    iVar2 = *(int *)(unaff_r4 + 0x3bc) + -1;
    if (*(int *)(unaff_r4 + 0x3bc) <= *(int *)(unaff_r4 + 0x3c8)) {
      *(int *)(unaff_r4 + 0x3c8) = iVar2;
    }
LAB_1000ccf0:
    if (*(int *)(unaff_r4 + 0x3d0) == iVar2) {
      *(undefined4 *)(unaff_r4 + 0x3d0) = 0xffffffff;
    }
    break;
  case 8:
    if ((*(int *)(unaff_r4 + 0x3e0) != 0) && (0 < *(int *)(unaff_r4 + 0x3bc))) {
      iVar8 = *(int *)(unaff_r4 + 0x374) + *(int *)(unaff_r4 + 0x3bc) * 8;
      iVar2 = *(int *)(iVar8 + -4);
      if (iVar2 != 0) {
        iVar6 = *(int *)(unaff_r4 + 0x378) + *(int *)(iVar8 + -8);
        do {
          iVar2 = iVar2 + -1;
          if (iVar2 == 0) break;
        } while ((*(byte *)(iVar6 + iVar2) & 0xc0) == 0x80);
        *(undefined1 *)(iVar6 + iVar2) = 0;
        iVar6 = *(int *)(unaff_r4 + 0x3bc);
        iVar7 = *(int *)(unaff_r4 + 0x3c8);
        *(int *)(iVar8 + -4) = iVar2;
        *(int *)(unaff_r4 + 0x37c) = *(int *)(iVar8 + -8) + iVar2 + 1;
        iVar2 = iVar6 + -1;
        if (iVar6 <= iVar7) {
          *(int *)(unaff_r4 + 0x3c8) = iVar2;
        }
        goto LAB_1000ccf0;
      }
    }
    break;
  case 10:
    if (*(int *)(unaff_r4 + 0x3e0) != 0) goto LAB_1000cdfc;
    uVar4 = thunk_strlen(&DAT_10013119);
    iVar2 = recovered_1000bb24(unaff_r4,&DAT_10013119,uVar4,0);
    if (iVar2 == 0) goto switchD_1000cd18_caseD_0;
LAB_1000cdfc:
    *(undefined4 *)(unaff_r4 + 0x3e0) = 0;
    pbVar3 = pbVar3 + 1;
    goto LAB_1000cd04;
  case 0xd:
    break;
  }
  pbVar3 = pbVar3 + 1;
  goto LAB_1000cd04;
switchD_1000cd18_caseD_0:
  iVar2 = Ram40010800;
  if ((iVar2 == 0x50414d57) && (iVar2 = Ram40010804, iVar2 != 0)) {
    uVar5 = Ram40010808;
    bVar10 = 0xb < uVar5;
    if (bVar10) {
      uVar5 = Ram40010808;
    }
    if ((bVar10 && 0x53 < uVar5) &&
       (UNRECOVERED_JUMPTABLE = (code *)UINT_40010850, UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x1000cfcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(local_24);
      return;
    }
  }
  return;
}

#undef DAT_10013119
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef Ram40010800
#undef Ram40010804
#undef Ram40010808
#undef UINT_4001084c
#undef UINT_40010850
#undef UINT_40010854
#undef local_24

#undef DAT_10013352
#define DAT_10013352 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x496U)))
#undef str_10013349
#define str_10013349 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x48dU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d058
 */

bool recovered_1000d058(char *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;

  if (param_1 == (char *)0x0) {
    return false;
  }
  bVar1 = recovered_1000d258(param_1,(byte *)str_10013349);
  if (bVar1) {
    return true;
  }
  bVar1 = recovered_1000d258(param_1,&DAT_10013352);
  return bVar1;
}

#undef DAT_10013352
#undef str_10013349

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
#undef UINT_40010890
#define UINT_40010890 (*(uint *)(0x40010890U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d0ac
 */

undefined4 recovered_1000d0ac(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  char *in_r0;
  uint uVar2;
  uint in_r1;
  bool bVar3;

  iVar1 = Ram40010800;
  if ((iVar1 == 0x50414d57) && (iVar1 = Ram40010804, iVar1 != 0)) {
    uVar2 = Ram40010808;
    bVar3 = 0xb < uVar2;
    if (bVar3) {
      uVar2 = Ram40010808;
    }
    if ((bVar3 && 0x93 < uVar2) &&
       (UNRECOVERED_JUMPTABLE = (code *)UINT_40010890, UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x1000d0fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*UNRECOVERED_JUMPTABLE)(in_r0,in_r1);
      return uVar2;
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
#undef UINT_40010890

#undef DAT_10013352
#define DAT_10013352 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x496U)))
#undef DAT_10013357
#define DAT_10013357 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x49bU)))
#undef DAT_1001335c
#define DAT_1001335c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4a0U)))
#undef str_10013349
#define str_10013349 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x48dU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d100
 */

undefined4 recovered_1000d100(char *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  undefined4 uVar2;

  bVar1 = recovered_1000d258(param_1,(byte *)str_10013349);
  uVar2 = 5;
  if (!bVar1) {
    bVar1 = recovered_1000d258(param_1,&DAT_10013352);
    uVar2 = 2;
    if (!bVar1) {
      bVar1 = recovered_1000d258(param_1,&DAT_10013357);
      if (bVar1) {
        return 3;
      }
      bVar1 = recovered_1000d258(param_1,&DAT_1001335c);
      uVar2 = 1;
      if (bVar1) {
        uVar2 = 4;
      }
    }
  }
  return uVar2;
}

#undef DAT_10013352
#undef DAT_10013357
#undef DAT_1001335c
#undef str_10013349

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d19c
 */

undefined4 recovered_1000d19c(undefined1 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == (undefined1 *)0x0) {
    return 0;
  }
  do {
    switch((uintptr_t)(*param_1)) {
    case 0:
      return 0;
    default:
      param_1 = param_1 + 1;
      break;
    case 9:
    case 10:
    case 0xd:
    case 0x20:
      return 1;
    }
  } while( true );
}


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
#undef _DAT_40010a20
#define _DAT_40010a20 (*(code * *)(0x40010a20U))
#define local_11c (*(char (*)[284])(pf_stack_frame + 20))
#define local_9c (*(byte (*)[156])(pf_stack_frame + 148))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d258
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool recovered_1000d258(char *param_1,byte *param_2)

{
  unsigned char pf_stack_frame[336] __attribute__((aligned(16))) = {0};

  char cVar1;
  byte bVar2;
  ulong uVar3;
  ulong uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  byte *unaff_r4;
  bool bVar9;
  int iVar10;
  bool bVar11;

  pcVar8 = local_11c;
  bVar9 = false;
  if (param_1 != (char *)0x0) {
    unaff_r4 = param_2;
  }
  if (param_1 == (char *)0x0 || param_2 == (byte *)0x0) {
    return false;
  }
  uVar3 = thunk_strlen(param_1);
  if (uVar3 == 0) {
    thunk_strlen((char *)unaff_r4);
    return false;
  }
  cVar1 = param_1[uVar3 - 1];
  bVar11 = cVar1 == '>';
  if (bVar11) {
    cVar1 = *param_1;
  }
  if (!bVar11 || cVar1 != '[') goto LAB_1000d2b8;
  uVar7 = 1;
  uVar6 = 0;
  while (cVar1 = param_1[uVar7], cVar1 != '\0' && cVar1 != ']') {
    uVar7 = uVar7 + 1;
    if (uVar6 + 1 < 0x80) {
      local_11c[uVar6] = cVar1;
      uVar6 = uVar6 + 1;
    }
  }
  if (cVar1 == ']') {
    uVar7 = uVar7 + 1;
  }
  local_11c[uVar6] = '\0';
  if ((cVar1 == ']') && (uVar7 < 0x82)) {
    iVar5 = 0;
    if (local_11c[0] == '[') {
      pcVar8 = local_11c + 1;
    }
    for (; (bVar2 = pcVar8[iVar5], bVar2 != 0 && (bVar2 != 0x5d && iVar5 != 0x7f));
        iVar5 = iVar5 + 1) {
      local_9c[iVar5] = bVar2;
    }
    local_9c[iVar5] = 0;
    if (local_11c[0] == '[') {
      if (bVar2 != 0x5d) goto LAB_1000d4b4;
      bVar2 = local_11c[iVar5 + 2];
    }
    if ((bVar2 == 0) && (local_9c[0] != 0)) {
      iVar10 = 0;
      iVar5 = 1;
      uVar6 = 1;
      do {
        if (iVar5 == 0x80) goto LAB_1000d4b4;
        if (local_9c[0] == 0x5c) {
          if (iVar10 == 0) goto LAB_1000d4b4;
          uVar6 = uVar6 + 1;
          iVar10 = 0;
          if (6 < uVar6) goto LAB_1000d4b4;
        }
        else {
          bVar11 = 9 < (byte)(local_9c[0] - 0x30U);
          bVar2 = local_9c[0];
          if (bVar11) {
            bVar2 = (local_9c[0] & 0xdf) + 0xbf;
          }
          if ((bVar11 && 0x19 < bVar2) && (local_9c[0] != 0x5f && local_9c[0] != 0x2d))
          goto LAB_1000d4b4;
          iVar10 = iVar10 + 1;
        }
        local_9c[0] = local_9c[iVar5];
        iVar5 = iVar5 + 1;
      } while (local_9c[0] != 0);
      if ((((iVar10 != 0) && (1 < uVar6)) && (iVar5 = Ram40010800, iVar5 == 0x50414d57)) &&
         (iVar5 = Ram40010804, iVar5 != 0)) {
        uVar6 = Ram40010808;
        bVar11 = 0xb < uVar6;
        if (bVar11) {
          uVar6 = Ram40010808;
        }
        if ((bVar11 && 0x223 < uVar6) && (_DAT_40010a20 != (code *)0x0)) {
          (*_DAT_40010a20)(0xfffffffe,local_9c,0x80);
        }
      }
    }
  }
LAB_1000d4b4:
  uVar3 = uVar3 - 1;
LAB_1000d2b8:
  uVar4 = thunk_strlen((char *)unaff_r4);
  if (uVar4 - 1 < uVar3) {
    do {
      uVar6 = (uint)(byte)param_1[uVar3 - uVar4];
      uVar7 = (uint)*unaff_r4;
      if (uVar6 - 0x41 < 0x1a) {
        uVar6 = uVar6 | 0x20;
      }
      if (uVar7 - 0x41 < 0x1a) {
        uVar7 = uVar7 | 0x20;
      }
      bVar9 = uVar6 == uVar7;
    } while ((uVar6 == uVar7) && (uVar4 = uVar4 - 1, unaff_r4 = unaff_r4 + 1, uVar4 != 0));
  }
  return bVar9;
}

#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_40010a20
#undef Ram40010800
#undef Ram40010804
#undef Ram40010808
#undef _DAT_40010a20
#undef local_11c
#undef local_9c

#undef DAT_10013119
#define DAT_10013119 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x25dU)))
#undef DAT_1001332f
#define DAT_1001332f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x473U)))
#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_40010a04
#define DAT_40010a04 (*(uint8_t *)(0x40010a04U))
#undef Ram40010800
#define Ram40010800 (*(uint32_t *)(0x40010800U))
#undef Ram40010804
#define Ram40010804 (*(uint32_t *)(0x40010804U))
#undef Ram40010808
#define Ram40010808 (*(uint32_t *)(0x40010808U))
#undef _DAT_40010a04
#define _DAT_40010a04 (*(code * *)(0x40010a04U))
#undef str_10013334
#define str_10013334 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x478U)))
#define local_28 (*(undefined4 *)(pf_stack_frame + 40))
#define local_24 (*(int *)(pf_stack_frame + 44))
#define local_20 (*(undefined4 *)(pf_stack_frame + 48))
#define local_1c (*(undefined4 *)(pf_stack_frame + 52))
#define local_3c (*(byte (*)[60])(pf_stack_frame + 20))
#define local_30 (*(int *)(pf_stack_frame + 32))
#define local_2c (*(uint *)(pf_stack_frame + 36))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d4e0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_1000d4e0(undefined4 param_1,undefined1 *param_2,uint param_3,undefined1 *param_4)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  char cVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  undefined1 *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;

  local_1c = 0;
  local_20 = 0;
  local_24 = 0;
  local_28 = 0;
  local_2c = 0;
  local_30 = 0;
  if (param_2 == (undefined1 *)0x0) {
    return;
  }
  iVar3 = Ram40010800;
  if ((iVar3 == 0x50414d57) && (iVar3 = Ram40010804, iVar3 != 0)) {
    uVar8 = Ram40010808;
    bVar9 = 0xb < uVar8;
    if (bVar9) {
      uVar8 = Ram40010808;
    }
    if ((bVar9 && 0x207 < uVar8) && (_DAT_40010a04 != (code *)0x0)) {
      iVar3 = (*_DAT_40010a04)(param_1,&local_30);
      if ((iVar3 != 0) && ((local_30 == 3 && (local_24 != 0)))) {
        iVar3 = 0;
        if (1 < param_3) {
          do {
            cVar1 = *(char *)(local_24 + iVar3);
            if (cVar1 != '\0') {
              param_2[iVar3] = cVar1;
              iVar3 = iVar3 + 1;
            }
          } while (cVar1 != '\0' && param_3 - 1 != iVar3);
        }
        param_2[iVar3] = 0;
        return;
      }
      if ((iVar3 != 0) && (local_30 == 1)) {
        uVar8 = local_2c;
        uVar7 = 0;
        if ((int)local_2c < 0) {
          uVar8 = -local_2c;
        }
        do {
          uVar6 = uVar7;
          uVar2 = uVar8 / 10;
          local_3c[uVar6] = (char)uVar8 + (char)uVar2 * -10 | 0x30;
          if (10 < uVar6) break;
          bVar9 = 9 < uVar8;
          uVar8 = uVar2;
          uVar7 = uVar6 + 1;
        } while (bVar9);
        if (0x7fffffff < local_2c) {
          uVar2 = 0x2d;
        }
        uVar8 = (uint)(0x7fffffff < local_2c);
        if (0x7fffffff < local_2c) {
          *param_2 = (char)uVar2;
        }
        if (uVar8 + 1 < param_3) {
          uVar7 = 0;
          do {
            param_2[uVar7 + uVar8] = local_3c[~uVar7 + uVar6 + 1];
            uVar2 = uVar7 + 1;
            if (uVar6 == uVar7) break;
            iVar3 = uVar8 + uVar7;
            uVar7 = uVar2;
          } while (iVar3 + 2U < param_3);
          uVar8 = uVar8 + uVar2;
        }
        param_2[uVar8] = 0;
        return;
      }
      if ((iVar3 != 0) && (local_30 == 5)) {
        pcVar4 = &DAT_1001332f;
        iVar3 = 0;
        if (local_2c == 0) {
          pcVar4 = str_10013334;
        }
        if (1 < param_3) {
          do {
            cVar1 = pcVar4[iVar3];
            if (cVar1 != '\0') {
              param_2[iVar3] = cVar1;
              iVar3 = iVar3 + 1;
            }
          } while (cVar1 != '\0' && param_3 - 1 != iVar3);
        }
        param_2[iVar3] = 0;
        return;
      }
    }
  }
  puVar5 = &DAT_10013119;
  if (param_4 != (undefined1 *)0x0) {
    puVar5 = param_4;
  }
  iVar3 = 0;
  if (1 < param_3) {
    do {
      cVar1 = puVar5[iVar3];
      if (cVar1 != '\0') {
        param_2[iVar3] = cVar1;
        iVar3 = iVar3 + 1;
      }
    } while (cVar1 != '\0' && param_3 - 1 != iVar3);
  }
  param_2[iVar3] = 0;
  return;
}

#undef DAT_10013119
#undef DAT_1001332f
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_40010a04
#undef Ram40010800
#undef Ram40010804
#undef Ram40010808
#undef _DAT_40010a04
#undef str_10013334
#undef local_28
#undef local_24
#undef local_20
#undef local_1c
#undef local_3c
#undef local_30
#undef local_2c

#undef DAT_10013119
#define DAT_10013119 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x25dU)))
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
#define local_28 (*(int *)(pf_stack_frame + 24))
#define local_24 (*(int *)(pf_stack_frame + 28))
#define local_20 (*(int *)(pf_stack_frame + 32))
#define local_1c (*(int *)(pf_stack_frame + 36))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d758
 */

bool recovered_1000d758(int param_1)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  int iVar1;
  code *pcVar2;
  int extraout_r0 = 0;
  uint uVar3;
  ulong textSize;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  char *text;
  bool bVar8;
  bool bVar9;
  bool bVar10;

  bVar9 = false;
  if (param_1 == 0) {
    return false;
  }
  iVar6 = *(int *)(param_1 + 0x390);
  iVar7 = *(int *)(param_1 + 0x394);
  recovered_1000c280(&local_28,param_1);
  bVar10 = SBORROW4(local_28,iVar6);
  iVar5 = local_28 - iVar6;
  bVar8 = local_28 == iVar6;
  iVar1 = extraout_r0;
  if (local_28 <= iVar6) {
    bVar10 = SBORROW4(local_24,iVar7);
    iVar5 = local_24 - iVar7;
    bVar8 = local_24 == iVar7;
    iVar1 = local_24;
  }
  if (bVar8 || iVar5 < 0 != bVar10) {
    local_20 = local_20 + local_28;
    bVar10 = SBORROW4(local_20,iVar6);
    iVar5 = local_20 - iVar6;
    bVar8 = local_20 == iVar6;
    if (iVar6 < local_20) {
      local_1c = local_1c + iVar1;
      bVar10 = SBORROW4(local_1c,iVar7);
      iVar5 = local_1c - iVar7;
      bVar8 = local_1c == iVar7;
    }
    if (bVar8 || iVar5 < 0 != bVar10) goto LAB_1000d7bc;
    iVar5 = 0xc;
    uVar4 = *(uint *)(param_1 + 0x3e4);
    if (0 < *(int *)(param_1 + 0x3a8)) {
      iVar5 = *(int *)(param_1 + 0x3a8) + 2;
    }
    uVar3 = recovered_10003fa8((iVar7 - iVar1) + -2,iVar5);
    uVar3 = uVar3 & ~((int)uVar3 >> 0x1f);
    iVar5 = recovered_1000dce4(param_1,uVar4 + uVar3,
                               ((int)uVar4 >> 0x1f) + (uint)CARRY4(uVar4,uVar3),(uint *)0x0);
    if (iVar5 < 0) goto LAB_1000d7bc;
    text = &DAT_10013119;
    if (((*(int *)(param_1 + 0x374) != 0) && (iVar5 < *(int *)(param_1 + 0x3bc))) &&
       (text = (char *)(*(int *)(param_1 + 0x378) + *(int *)(*(int *)(param_1 + 0x374) + iVar5 * 8))
       , text == (char *)0x0)) goto LAB_1000d854;
LAB_1000d7c8:
    if (*text != '\0') goto LAB_1000d890;
  }
  else {
LAB_1000d7bc:
    text = *(char **)(param_1 + 0x3ac);
    if (text != (char *)0x0) goto LAB_1000d7c8;
LAB_1000d854:
    text = (char *)0x0;
  }
  if (0 < *(int *)(param_1 + 0x3bc)) {
    if (*(int *)(param_1 + 0x374) == 0) {
      text = &DAT_10013119;
    }
    else {
      text = (char *)(*(int *)(param_1 + 0x378) +
                     *(int *)(*(int *)(param_1 + 0x374) + *(int *)(param_1 + 0x3bc) * 8 + -8));
    }
  }
LAB_1000d890:
  textSize = thunk_strlen(text);
  iVar5 = Ram40010800;
  if ((iVar5 == 0x50414d57) && (iVar5 = Ram40010804, iVar5 != 0)) {
    uVar4 = Ram40010808;
    bVar8 = 0xb < uVar4;
    if (bVar8) {
      uVar4 = Ram40010808;
    }
    if ((bVar8 && 0x183 < uVar4) && (pcVar2 = (code *)UINT_40010980, pcVar2 != (code *)0x0)) {
      uVar4 = (*pcVar2)(text,textSize);
      bVar9 = uVar4 != 0;
      if (bVar9) {
        *(undefined1 *)(param_1 + 0x3f0) = 1;
      }
    }
  }
  return bVar9;
}

#undef DAT_10013119
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef Ram40010800
#undef Ram40010804
#undef Ram40010808
#undef UINT_40010980
#undef local_28
#undef local_24
#undef local_20
#undef local_1c

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
#undef UINT_40010854
#define UINT_40010854 (*(uint *)(0x40010854U))
#undef UINT_40010984
#define UINT_40010984 (*(uint *)(0x40010984U))
#undef UINT_40010988
#define UINT_40010988 (*(uint *)(0x40010988U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d90c
 */

undefined1 recovered_1000d90c(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  int iVar2;
  code *pcVar3;
  uint uVar4;
  byte *outText;
  uint uVar5;
  uint uVar6;
  undefined1 *ptr;
  byte *pbVar7;
  byte bVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  bool bVar12;
  bool bVar13;

  iVar2 = Ram40010800;
  if (iVar2 != 0x50414d57) {
    return 0;
  }
  iVar2 = Ram40010804;
  if (iVar2 == 0) {
    return 0;
  }
  uVar4 = Ram40010808;
  bVar12 = 0xb < uVar4;
  if (bVar12) {
    uVar4 = Ram40010808;
  }
  if (!bVar12 || uVar4 < 0x18c) {
    return 0;
  }
  pcVar3 = (code *)UINT_40010988;
  if (pcVar3 == (code *)0x0) {
    return 0;
  }
  uVar4 = (*pcVar3)();
  if (param_1 != 0) {
    uVar4 = uVar4 + 1;
    if (uVar4 < 2) {
      return 0;
    }
    uVar11 = *(uint *)(param_1 + 0x3b0);
    iVar2 = Ram40010800;
    if (iVar2 != 0x50414d57) {
      return 0;
    }
    iVar2 = Ram40010804;
    if (iVar2 == 0) {
      return 0;
    }
    uVar10 = Ram40010808;
    bVar12 = uVar10 < 0xc;
    if (!bVar12) {
      uVar10 = Ram40010808;
    }
    if (bVar12 || uVar10 < 0x50) {
      return 0;
    }
    pcVar3 = (code *)UINT_4001084c;
    if (pcVar3 == (code *)0x0) {
      return 0;
    }
    outText = (*pcVar3)(uVar4);
    if (outText != (byte *)0x0) {
      iVar2 = Ram40010800;
      if ((((iVar2 == 0x50414d57) && (iVar2 = Ram40010804, iVar2 != 0)) &&
          (uVar10 = Ram40010808, 0xb < uVar10)) && (uVar10 = Ram40010808, 0x30 < uVar10 >> 3)) {
        pcVar3 = (code *)UINT_40010984;
        uVar10 = 0;
        if ((pcVar3 != (code *)0x0) && (uVar4 = (*pcVar3)((char *)outText,uVar4), uVar4 != 0)) {
          uVar10 = 1;
          do {
            uVar5 = uVar10;
            if (uVar4 == uVar5) {
              uVar6 = (uint)*outText;
              break;
            }
            uVar6 = (uint)outText[uVar4 - uVar5];
            uVar10 = uVar5 + 1;
          } while ((uVar6 & 0xc0) == 0x80);
          uVar9 = 4;
          if (((4 < uVar6 - 0xf0) && (uVar9 = 3, (uVar6 & 0xf0) != 0xe0)) &&
             (uVar9 = 1, uVar6 - 0xc2 < 0x1e)) {
            uVar9 = 2;
          }
          uVar10 = uVar4;
          if (uVar5 < uVar9) {
            uVar10 = uVar4 - uVar5;
          }
        }
      }
      else {
        *outText = 0;
        uVar10 = 0;
      }
      if ((uVar11 <= -uVar10 - 2) && (uVar4 = uVar11 + uVar10 + 1, uVar4 != 0)) {
        ptr = *(undefined1 **)(param_1 + 0x3ac);
        uVar5 = *(uint *)(param_1 + 0x3b4);
        if ((ptr != (undefined1 *)0x0) && (uVar4 <= uVar5)) {
LAB_1000dac8:
          bVar12 = false;
          if (uVar10 != 0) {
            pbVar7 = outText;
            do {
              bVar1 = *pbVar7;
              bVar8 = bVar1;
              if ((bVar1 & 0xfb) == 9) {
                bVar8 = 0x20;
              }
              if (bVar1 == 10) {
                bVar8 = 0x20;
              }
              if ((0x1f < bVar8) && (bVar8 != 0x7f)) {
                bVar12 = true;
                *(byte *)(*(int *)(param_1 + 0x3ac) + uVar11) = bVar8;
                uVar11 = uVar11 + 1;
              }
              uVar10 = uVar10 - 1;
              pbVar7 = pbVar7 + 1;
            } while (uVar10 != 0);
            ptr = *(undefined1 **)(param_1 + 0x3ac);
          }
          ptr[uVar11] = 0;
          iVar2 = Ram40010800;
          *(uint *)(param_1 + 0x3b0) = uVar11;
          if ((iVar2 == 0x50414d57) && (iVar2 = Ram40010804, iVar2 != 0)) {
            uVar4 = Ram40010808;
            bVar13 = 0xb < uVar4;
            if (bVar13) {
              uVar4 = Ram40010808;
            }
            if ((bVar13 && 0x53 < uVar4) && (pcVar3 = (code *)UINT_40010850, pcVar3 != (code *)0x0))
            {
              (*pcVar3)(outText);
            }
          }
          if (!bVar12) {
            return 0;
          }
          *(undefined1 *)(param_1 + 0x3f0) = 1;
          return 1;
        }
        if (uVar5 == 0) {
          uVar5 = 0x40;
        }
        if (uVar5 < uVar4) {
          do {
            uVar6 = uVar4;
            if (-1 < (int)uVar5) {
              uVar6 = uVar5 << 1;
            }
            uVar5 = uVar6;
          } while (uVar5 < uVar4);
        }
        iVar2 = Ram40010800;
        if ((iVar2 == 0x50414d57) && (iVar2 = Ram40010804, iVar2 != 0)) {
          uVar4 = Ram40010808;
          bVar12 = 0xb < uVar4;
          if (bVar12) {
            uVar4 = Ram40010808;
          }
          if (((bVar12 && 0x57 < uVar4) && (pcVar3 = (code *)UINT_40010854, pcVar3 != (code *)0x0))
             && (ptr = (*pcVar3)(ptr,uVar5), ptr != (undefined1 *)0x0)) {
            if (*(int *)(param_1 + 0x3ac) == 0) {
              *ptr = 0;
            }
            *(uint *)(param_1 + 0x3b4) = uVar5;
            *(undefined1 **)(param_1 + 0x3ac) = ptr;
            goto LAB_1000dac8;
          }
        }
      }
      iVar2 = Ram40010800;
      if (iVar2 != 0x50414d57) {
        return 0;
      }
      iVar2 = Ram40010804;
      if (iVar2 == 0) {
        return 0;
      }
      uVar4 = Ram40010808;
      bVar12 = uVar4 < 0xc;
      if (!bVar12) {
        uVar4 = Ram40010808;
      }
      if (bVar12 || uVar4 < 0x54) {
        return 0;
      }
      pcVar3 = (code *)UINT_40010850;
      if (pcVar3 == (code *)0x0) {
        return 0;
      }
      (*pcVar3)(outText);
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
#undef UINT_4001084c
#undef UINT_40010850
#undef UINT_40010854
#undef UINT_40010984
#undef UINT_40010988

#undef DAT_10013119
#define DAT_10013119 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x25dU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000dce4
 */

int recovered_1000dce4(int param_1,uint param_2,uint param_3,uint *param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  bool bVar9;

  if (param_1 == 0) {
    return -1;
  }
  if ((int)param_3 < 0) {
    return -1;
  }
  iVar1 = recovered_1000bedc(param_1);
  iVar8 = *(int *)(param_1 + 0x3bc);
  if (iVar1 == 0) {
    if (iVar8 < 1) {
      return -1;
    }
    iVar1 = 0;
    while( true ) {
      iVar8 = *(int *)(param_1 + 0x374);
      pbVar5 = &DAT_10013119;
      if (iVar8 != 0) {
        pbVar5 = *(byte **)(iVar8 + iVar1 * 8);
      }
      if (iVar8 != 0) {
        pbVar5 = pbVar5 + *(int *)(param_1 + 0x378);
      }
      uVar3 = recovered_1000c0f8(param_1,pbVar5,*(uint *)(iVar8 + iVar1 * 8 + 4));
      iVar8 = (int)uVar3 >> 0x1f;
      if ((int)(param_3 - (iVar8 + (uint)(param_2 < uVar3))) < 0 !=
          (SBORROW4(param_3,iVar8) != SBORROW4(param_3 - iVar8,(uint)(param_2 < uVar3)))) break;
      bVar9 = param_2 < uVar3;
      param_2 = param_2 - uVar3;
      param_3 = param_3 - (iVar8 + (uint)bVar9);
      iVar1 = iVar1 + 1;
      if (*(int *)(param_1 + 0x3bc) <= iVar1) {
        return -1;
      }
    }
    if (param_4 == (uint *)0x0) {
      return iVar1;
    }
  }
  else {
    if (iVar8 < 1) {
      iVar1 = 0;
    }
    else {
      iVar1 = 0;
      iVar6 = iVar8;
      do {
        iVar7 = iVar1 + (iVar6 - iVar1) / 2;
        iVar4 = iVar7 + 1;
        puVar2 = (uint *)(*(int *)(param_1 + 0x3c0) + iVar4 * 8);
        uVar3 = puVar2[1];
        if (uVar3 < param_3 || param_3 - uVar3 < (uint)(*puVar2 <= param_2)) {
          iVar1 = iVar4;
          iVar7 = iVar6;
        }
        iVar6 = iVar7;
      } while (iVar1 < iVar6);
    }
    if (iVar1 == iVar8) {
      return -1;
    }
    if (param_4 == (uint *)0x0) {
      return iVar1;
    }
    param_2 = param_2 - *(int *)(*(int *)(param_1 + 0x3c0) + iVar1 * 8);
  }
  *param_4 = param_2;
  return iVar1;
}

#undef DAT_10013119

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
#undef UINT_40010898
#define UINT_40010898 (*(uint *)(0x40010898U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000de48
 */

undefined4 recovered_1000de48(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  char *in_r0;
  uint uVar2;
  char *in_r1;
  uint in_r2;
  bool bVar3;

  iVar1 = Ram40010800;
  if ((iVar1 == 0x50414d57) && (iVar1 = Ram40010804, iVar1 != 0)) {
    uVar2 = Ram40010808;
    bVar3 = 0xb < uVar2;
    if (bVar3) {
      uVar2 = Ram40010808;
    }
    if ((bVar3 && 0x9b < uVar2) &&
       (UNRECOVERED_JUMPTABLE = (code *)UINT_40010898, UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x1000de98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*UNRECOVERED_JUMPTABLE)(in_r0,in_r1,in_r2);
      return uVar2;
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
#undef UINT_40010898

#undef str_10013831
#define str_10013831 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x975U)))
#undef str_10013844
#define str_10013844 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x988U)))
#undef str_10013875
#define str_10013875 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x9b9U)))
#undef str_10013891
#define str_10013891 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x9d5U)))
#undef str_100138b3
#define str_100138b3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x9f7U)))
#undef str_100138e1
#define str_100138e1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa25U)))
#undef str_10013922
#define str_10013922 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa66U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000de9c
 */

bool recovered_1000de9c(char *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;

  pcVar1 = thunk_strstr(param_1,str_10013831);
  if (pcVar1 != (char *)0x0) {
    return true;
  }
  pcVar1 = thunk_strstr(param_1,str_10013844);
  if ((((pcVar1 != (char *)0x0) ||
       (pcVar1 = thunk_strstr(param_1,str_10013875), pcVar1 != (char *)0x0)) ||
      (pcVar1 = thunk_strstr(param_1,str_10013891), pcVar1 != (char *)0x0)) ||
     (pcVar1 = thunk_strstr(param_1,str_100138b3), pcVar1 != (char *)0x0)) {
    return true;
  }
  pcVar1 = thunk_strstr(param_1,str_100138e1);
  if (pcVar1 == (char *)0x0) {
    pcVar1 = thunk_strstr(param_1,str_10013922);
    return pcVar1 != (char *)0x0;
  }
  return true;
}

#undef str_10013831
#undef str_10013844
#undef str_10013875
#undef str_10013891
#undef str_100138b3
#undef str_100138e1
#undef str_10013922

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
#undef UINT_40010898
#define UINT_40010898 (*(uint *)(0x40010898U))
#undef str_10013a3d
#define str_10013a3d (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb81U)))
#undef str_10013a73
#define str_10013a73 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xbb7U)))
#undef str_10013abd
#define str_10013abd (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc01U)))
#define acStack_224 (*(char (*)[548])(pf_stack_frame + 620))
#define local_475 (*(byte (*)[1141])(pf_stack_frame + 27))
#define local_3fc (*(byte (*)[1020])(pf_stack_frame + 148))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000df84
 */

/* WARNING: Type propagation algorithm not settling */

bool recovered_1000df84(undefined4 *param_1,uint param_2,uint param_3,uint param_4,int param_5)

{
  unsigned char pf_stack_frame[1200] __attribute__((aligned(16))) = {0};

  byte bVar1;
  code *pcVar2;
  ulong uVar3;
  byte *pbVar4;
  int iVar5;
  uint uVar6;
  byte bVar7;
  ulong n;

  uVar3 = thunk_strlen((char *)param_5);
  if (uVar3 - 0xea < 0xffffff17) {
    return false;
  }
  n = uVar3;
  if (0x77 < uVar3) {
    n = 0x78;
  }
  thunk_memcpy(local_475,(void *)param_5,n);
  local_475[n] = 0;
  local_3fc[0] = 0x22;
  if (local_475[0] == 0) {
    iVar5 = 1;
  }
  else {
    pbVar4 = local_475;
    iVar5 = 1;
    do {
      pbVar4 = pbVar4 + 1;
      if (local_475[0] < 0x20) {
        return false;
      }
      if (0x3a < iVar5 + 3U >> 3) {
        return false;
      }
      bVar7 = *pbVar4;
      if (local_475[0] == 0x2f || local_475[0] == 0x22) {
        local_3fc[iVar5] = 0x2f;
        iVar5 = iVar5 + 1;
      }
      local_3fc[iVar5] = local_475[0];
      iVar5 = iVar5 + 1;
      local_475[0] = bVar7;
    } while (bVar7 != 0);
  }
  pbVar4 = local_3fc + iVar5;
  uVar6 = *param_1;
  pbVar4[0] = 0x22;
  pbVar4[1] = 0;
  thunk_snprintf(acStack_224,0x200,str_10013a3d,uVar6,local_3fc);
  iVar5 = Ram40010800;
  if (((((iVar5 == 0x50414d57) && (iVar5 = Ram40010804, iVar5 != 0)) &&
       (uVar6 = Ram40010808, 0xb < uVar6)) &&
      ((uVar6 = Ram40010808, 0x9b < uVar6 && (pcVar2 = (code *)UINT_40010898, pcVar2 != (code *)0x0)
       ))) && (uVar6 = (*pcVar2)(acStack_224,(char *)param_1[0x104],param_1[0x105]), uVar6 != 0)) {
    if (0x78 < uVar3) {
      local_3fc[0] = 0x22;
      if (*(byte *)(param_5 + n) == 0) {
        iVar5 = 1;
      }
      else {
        pbVar4 = (byte *)(n + param_5);
        iVar5 = 1;
        bVar7 = *(byte *)(param_5 + n);
        do {
          pbVar4 = pbVar4 + 1;
          if (bVar7 < 0x20) {
            return false;
          }
          if (0x3a < iVar5 + 3U >> 3) {
            return false;
          }
          bVar1 = *pbVar4;
          if (bVar7 == 0x2f || bVar7 == 0x22) {
            local_3fc[iVar5] = 0x2f;
            iVar5 = iVar5 + 1;
          }
          local_3fc[iVar5] = bVar7;
          iVar5 = iVar5 + 1;
          bVar7 = bVar1;
        } while (bVar1 != 0);
      }
      pbVar4 = local_3fc + iVar5;
      pbVar4[0] = 0x22;
      pbVar4[1] = 0;
      thunk_snprintf(acStack_224,0x200,str_10013a73,*param_1,*param_1,local_3fc);
      iVar5 = Ram40010800;
      if (iVar5 != 0x50414d57) {
        return false;
      }
      iVar5 = Ram40010804;
      if (iVar5 == 0) {
        return false;
      }
      uVar6 = Ram40010808;
      if (uVar6 < 0xc) {
        return false;
      }
      uVar6 = Ram40010808;
      if (uVar6 < 0x9c) {
        return false;
      }
      pcVar2 = (code *)UINT_40010898;
      if (pcVar2 == (code *)0x0) {
        return false;
      }
      uVar6 = (*pcVar2)(acStack_224,(char *)param_1[0x104],param_1[0x105]);
      if (uVar6 == 0) {
        return false;
      }
    }
    thunk_snprintf(acStack_224,0x200,str_10013abd,*param_1,param_2,*param_1,param_3,param_4);
    iVar5 = Ram40010800;
    if (((iVar5 == 0x50414d57) && (iVar5 = Ram40010804, iVar5 != 0)) &&
       ((uVar6 = Ram40010808, 0xb < uVar6 && (uVar6 = Ram40010808, 0x9b < uVar6)))) {
      pcVar2 = (code *)UINT_40010898;
      if (pcVar2 == (code *)0x0) {
        return false;
      }
      uVar6 = (*pcVar2)(acStack_224,(char *)param_1[0x104],param_1[0x105]);
      return uVar6 != 0;
    }
  }
  return false;
}

#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef Ram40010800
#undef Ram40010804
#undef Ram40010808
#undef UINT_40010898
#undef str_10013a3d
#undef str_10013a73
#undef str_10013abd
#undef acStack_224
#undef local_475
#undef local_3fc

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
#undef UINT_40010834
#define UINT_40010834 (*(uint *)(0x40010834U))
#undef str_10013b10
#define str_10013b10 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc54U)))
#undef str_10013b48
#define str_10013b48 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc8cU)))
#define local_120 (*(int *)(pf_stack_frame + 16))
#define local_11c (*(int *)(pf_stack_frame + 20))
#define local_118 (*(undefined4 *)(pf_stack_frame + 24))
#define local_110 (*(undefined1 *)(pf_stack_frame + 32))
#define local_10f (*(char *)(pf_stack_frame + 33))
#define local_10e (*(char *)(pf_stack_frame + 34))
#define local_10d (*(char *)(pf_stack_frame + 35))
#define local_10c (*(char *)(pf_stack_frame + 36))
#define local_10b (*(char *)(pf_stack_frame + 37))
#define local_10a (*(char *)(pf_stack_frame + 38))
#define local_109 (*(char *)(pf_stack_frame + 39))
#define local_108 (*(char *)(pf_stack_frame + 40))
#define local_107 (*(char *)(pf_stack_frame + 41))
#define local_106 (*(char *)(pf_stack_frame + 42))
#define local_105 (*(char *)(pf_stack_frame + 43))
#define local_104 (*(char *)(pf_stack_frame + 44))
#define local_103 (*(undefined2 *)(pf_stack_frame + 45))
#define local_101 (*(char (*)[257])(pf_stack_frame + 47))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000e29c
 */

bool recovered_1000e29c(undefined4 *param_1)

{
  unsigned char pf_stack_frame[336] __attribute__((aligned(16))) = {0};

  int iVar1;
  code *pcVar2;
  bool bVar3;
  ulong uVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  uint uVar9;

  uVar6 = param_1[0xf7b];
  uVar9 = param_1[0xf7c];
  if ((uVar9 | uVar6) >> 0x18 != 0) {
    return false;
  }
  local_103 = 0x3a;
  local_110 = 0x24;
  local_10e = str_10013b48[(uVar6 & 0xfffff) >> 0x10];
  local_10d = str_10013b48[(uVar6 & 0xffff) >> 0xc];
  local_10c = str_10013b48[(uVar6 & 0xfff) >> 8];
  local_104 = str_10013b48[uVar9 & 0xf];
  local_10b = str_10013b48[(uVar6 & 0xff) >> 4];
  local_105 = str_10013b48[(uVar9 & 0xff) >> 4];
  local_106 = str_10013b48[(uVar9 & 0xfff) >> 8];
  local_107 = str_10013b48[(uVar9 & 0xffff) >> 0xc];
  local_10a = str_10013b48[uVar6 & 0xf];
  local_108 = str_10013b48[(uVar9 & 0xfffff) >> 0x10];
  local_109 = str_10013b48[uVar9 >> 0x14];
  local_10f = str_10013b48[uVar6 >> 0x14];
  if (uVar9 == uVar6) {
    uVar4 = thunk_strlen((char *)(param_1 + 3999));
    if (0xef < uVar4 + 0xe) {
      return false;
    }
    thunk_memcpy((void *)((int)&local_103 + 1),param_1 + 3999,uVar4 + 1);
  }
  else {
    local_11c = 0;
    local_120 = 0;
    local_118 = 0;
    iVar1 = Ram40010800;
    if (iVar1 != 0x50414d57) {
      return false;
    }
    iVar1 = Ram40010804;
    if (iVar1 == 0) {
      return false;
    }
    uVar6 = Ram40010808;
    bVar3 = uVar6 < 0xc;
    if (!bVar3) {
      uVar6 = Ram40010808;
    }
    if (bVar3 || uVar6 < 0x38) {
      return false;
    }
    pcVar2 = (code *)UINT_40010834;
    if (pcVar2 == (code *)0x0) {
      return false;
    }
    uVar6 = (*pcVar2)((char *)(param_1 + 0xf7f),&local_120);
    if (uVar6 == 0) {
      return false;
    }
    if (local_11c != param_1[0xf7d]) {
      return false;
    }
    if (local_120 == 0) {
      return false;
    }
    uVar9 = param_1[0xf7c];
    uVar6 = local_11c + uVar9 * -100;
    if (99 < uVar6) {
      uVar6 = 100;
    }
    if (local_11c == uVar9 * 100) {
      return false;
    }
    uVar7 = param_1[0xf7b];
    if ((uVar7 | uVar9) >> 0x18 != 0) {
      return false;
    }
    iVar1 = uVar6 * 2;
    local_103 = 0x3a;
    local_110 = 0x24;
    local_10e = str_10013b48[(uVar7 & 0xfffff) >> 0x10];
    local_10d = str_10013b48[(uVar7 & 0xffff) >> 0xc];
    local_10c = str_10013b48[(uVar7 & 0xfff) >> 8];
    local_104 = str_10013b48[uVar9 & 0xf];
    local_10b = str_10013b48[(uVar7 & 0xff) >> 4];
    local_105 = str_10013b48[(uVar9 & 0xff) >> 4];
    local_106 = str_10013b48[(uVar9 & 0xfff) >> 8];
    local_10f = str_10013b48[uVar7 >> 0x14];
    local_107 = str_10013b48[(uVar9 & 0xffff) >> 0xc];
    local_10a = str_10013b48[uVar7 & 0xf];
    local_109 = str_10013b48[uVar9 >> 0x14];
    local_108 = str_10013b48[(uVar9 & 0xfffff) >> 0x10];
    pcVar8 = local_101;
    pbVar5 = (byte *)(uVar9 * 100 + local_120);
    do {
      uVar6 = uVar6 - 1;
      pcVar8[-1] = str_10013b48[*pbVar5 >> 4];
      *pcVar8 = str_10013b48[*pbVar5 & 0xf];
      pcVar8 = pcVar8 + 2;
      pbVar5 = pbVar5 + 1;
    } while (uVar6 != 0);
    local_101[iVar1 + -1] = '\0';
  }
  bVar3 = recovered_1000df84(param_1,param_1[0xf78],param_1[0xf7a],param_1[0xf79],(int)&local_110);
  if (bVar3) {
    param_1[0xf7e] = param_1[0xe2d];
    *(undefined1 *)((int)param_1 + 0x3ddd) = 1;
    thunk_snprintf((char *)(param_1 + 0x126),0x80,str_10013b10,param_1[0xf7c] + 1,
                       param_1[0xf7b] + 1);
  }
  return bVar3;
}

#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef Ram40010800
#undef Ram40010804
#undef Ram40010808
#undef UINT_40010834
#undef str_10013b10
#undef str_10013b48
#undef local_120
#undef local_11c
#undef local_118
#undef local_110
#undef local_10f
#undef local_10e
#undef local_10d
#undef local_10c
#undef local_10b
#undef local_10a
#undef local_109
#undef local_108
#undef local_107
#undef local_106
#undef local_105
#undef local_104
#undef local_103
#undef local_101

#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_40010a04
#define DAT_40010a04 (*(uint8_t *)(0x40010a04U))
#undef Ram40010800
#define Ram40010800 (*(uint32_t *)(0x40010800U))
#undef Ram40010804
#define Ram40010804 (*(uint32_t *)(0x40010804U))
#undef Ram40010808
#define Ram40010808 (*(uint32_t *)(0x40010808U))
#undef _DAT_40010a04
#define _DAT_40010a04 (*(code * *)(0x40010a04U))
#undef str_10013b59
#define str_10013b59 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc9dU)))
#define acStack_80 (*(char (*)[128])(pf_stack_frame + 16))
#define local_20 (*(int *)(pf_stack_frame + 112))
#define local_1c (*(uint *)(pf_stack_frame + 116))
#define local_18 (*(float *)(pf_stack_frame + 120))
#define local_14 (*(undefined4 *)(pf_stack_frame + 124))
#define local_10 (*(undefined4 *)(pf_stack_frame + 128))
#define local_c (*(undefined4 *)(pf_stack_frame + 132))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000e5f0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint recovered_1000e5f0(undefined4 *param_1,void *param_2)

{
  unsigned char pf_stack_frame[176] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  bool bVar3;

  thunk_snprintf(acStack_80,0x60,str_10013b59,*param_1,param_2);
  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  local_18 = 0.0;
  local_1c = 0;
  iVar2 = Ram40010800;
  local_20 = 0;
  if ((iVar2 == 0x50414d57) && (iVar2 = Ram40010804, iVar2 != 0)) {
    uVar1 = Ram40010808;
    bVar3 = 0xb < uVar1;
    if (bVar3) {
      uVar1 = Ram40010808;
    }
    if ((bVar3 && 0x207 < uVar1) && (_DAT_40010a04 != (code *)0x0)) {
      iVar2 = (*_DAT_40010a04)(acStack_80,&local_20);
      if (iVar2 == 0) {
        return 0;
      }
      if (local_20 == 5) {
        return (uint)(local_1c != 0);
      }
      if (local_20 == 2) {
        return (int)local_18;
      }
      if (local_20 == 1) {
        return local_1c;
      }
    }
  }
  return 0;
}

#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_40010a04
#undef Ram40010800
#undef Ram40010804
#undef Ram40010808
#undef _DAT_40010a04
#undef str_10013b59
#undef acStack_80
#undef local_20
#undef local_1c
#undef local_18
#undef local_14
#undef local_10
#undef local_c

#undef DAT_10013119
#define DAT_10013119 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x25dU)))
#undef str_10013b59
#define str_10013b59 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc9dU)))
#define acStack_74 (*(char (*)[116])(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000e6fc
 */

void recovered_1000e6fc(undefined4 *param_1,void *param_2,undefined1 *param_3,uint param_4)

{
  unsigned char pf_stack_frame[176] __attribute__((aligned(16))) = {0};


  thunk_snprintf(acStack_74,0x60,str_10013b59,*param_1,param_2);
  recovered_1000d4e0(acStack_74,param_3,param_4,&DAT_10013119);
  return;
}

#undef DAT_10013119
#undef str_10013b59
#undef acStack_74

#define local_24 (*(uint *)(pf_stack_frame + 28))
#define local_28 (*(uint *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000e758
 */

undefined4 recovered_1000e758(char *param_1,uint param_2,uint *param_3,uint *param_4,char *param_5)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  char cVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  uint *puVar10;
  uint uVar11;
  uint uVar12;
  bool bVar13;

  uVar9 = 0;
  if (((param_1 != (char *)0x0) && (0xd < param_2)) && (*param_1 == '$')) {
    puVar10 = &local_24;
    iVar3 = 1;
    local_24 = 0;
    local_28 = 0;
    bVar2 = true;
    do {
      bVar13 = bVar2;
      pcVar6 = param_1 + iVar3;
      cVar1 = *pcVar6;
      iVar3 = (int)cVar1;
      uVar11 = iVar3 - 0x30;
      if (9 < (uVar11 & 0xff)) {
        if ((byte)(cVar1 + 0xbfU) < 6) {
          uVar11 = iVar3 - 0x37;
        }
        else {
          if (5 < (byte)(cVar1 + 0x9fU)) {
            return 0;
          }
          uVar11 = iVar3 - 0x57;
        }
      }
      if ((int)uVar11 < 0) {
        return 0;
      }
      cVar1 = pcVar6[1];
      iVar3 = (int)cVar1;
      uVar4 = iVar3 - 0x30;
      if (9 < (uVar4 & 0xff)) {
        if ((byte)(cVar1 + 0xbfU) < 6) {
          uVar4 = iVar3 - 0x37;
        }
        else {
          if (5 < (byte)(cVar1 + 0x9fU)) {
            return 0;
          }
          uVar4 = iVar3 - 0x57;
        }
      }
      if ((int)uVar4 < 0) {
        return 0;
      }
      cVar1 = pcVar6[2];
      iVar3 = (int)cVar1;
      uVar5 = iVar3 - 0x30;
      if (9 < (uVar5 & 0xff)) {
        if ((byte)(cVar1 + 0xbfU) < 6) {
          uVar5 = iVar3 - 0x37;
        }
        else {
          if (5 < (byte)(cVar1 + 0x9fU)) {
            return 0;
          }
          uVar5 = iVar3 - 0x57;
        }
      }
      if ((int)uVar5 < 0) {
        return 0;
      }
      cVar1 = pcVar6[3];
      iVar3 = (int)cVar1;
      uVar12 = iVar3 - 0x30;
      if (9 < (uVar12 & 0xff)) {
        if ((byte)(cVar1 + 0xbfU) < 6) {
          uVar12 = iVar3 - 0x37;
        }
        else {
          if (5 < (byte)(cVar1 + 0x9fU)) {
            return 0;
          }
          uVar12 = iVar3 - 0x57;
        }
      }
      if ((int)uVar12 < 0) {
        return 0;
      }
      cVar1 = pcVar6[4];
      iVar3 = (int)cVar1;
      uVar8 = iVar3 - 0x30;
      if (9 < (uVar8 & 0xff)) {
        if ((byte)(cVar1 + 0xbfU) < 6) {
          uVar8 = iVar3 - 0x37;
        }
        else {
          if (5 < (byte)(cVar1 + 0x9fU)) {
            return 0;
          }
          uVar8 = iVar3 - 0x57;
        }
      }
      if ((int)uVar8 < 0) {
        return 0;
      }
      cVar1 = pcVar6[5];
      iVar3 = (int)cVar1;
      uVar7 = iVar3 - 0x30;
      if (9 < (uVar7 & 0xff)) {
        if ((byte)(cVar1 + 0xbfU) < 6) {
          uVar7 = iVar3 - 0x37;
        }
        else {
          if (5 < (byte)(cVar1 + 0x9fU)) {
            return 0;
          }
          uVar7 = iVar3 - 0x57;
        }
      }
      if ((int)uVar7 < 0) {
        return 0;
      }
      iVar3 = 7;
      *puVar10 = ((*puVar10 << 8 | uVar11 << 4 | uVar4) << 8 | uVar5 << 4 | uVar12) << 8 |
                 uVar8 << 4 | uVar7;
      puVar10 = &local_28;
      bVar2 = false;
    } while (bVar13);
    uVar9 = 0;
    uVar11 = (byte)param_1[0xd] - 0x21;
    if (((uVar11 < 0x1f) && ((1 << (uVar11 & 0xff) & 0x42000001U) != 0)) &&
       (param_2 == 0xe || (byte)param_1[0xd] == 0x3a)) {
      uVar9 = 1;
      *param_3 = local_24;
      *param_4 = local_28;
      *param_5 = param_1[0xd];
    }
  }
  return uVar9;
}

#undef local_24
#undef local_28

#undef DAT_1001362b
#define DAT_1001362b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x76fU)))
#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_40010a04
#define DAT_40010a04 (*(uint8_t *)(0x40010a04U))
#undef Ram40010800
#define Ram40010800 (*(uint32_t *)(0x40010800U))
#undef Ram40010804
#define Ram40010804 (*(uint32_t *)(0x40010804U))
#undef Ram40010808
#define Ram40010808 (*(uint32_t *)(0x40010808U))
#undef _DAT_40010a04
#define _DAT_40010a04 (*(code * *)(0x40010a04U))
#undef str_10013b59
#define str_10013b59 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc9dU)))
#define acStack_80 (*(char (*)[128])(pf_stack_frame + 16))
#define local_20 (*(uint *)(pf_stack_frame + 112))
#define local_1c (*(int *)(pf_stack_frame + 116))
#define local_18 (*(undefined4 *)(pf_stack_frame + 120))
#define local_14 (*(char * *)(pf_stack_frame + 124))
#define local_10 (*(undefined4 *)(pf_stack_frame + 128))
#define local_c (*(undefined4 *)(pf_stack_frame + 132))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ea4c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool recovered_1000ea4c(undefined4 *param_1)

{
  unsigned char pf_stack_frame[176] __attribute__((aligned(16))) = {0};

  uint uVar1;
  bool bVar2;
  int iVar3;
  bool bVar4;

  thunk_snprintf(acStack_80,0x60,str_10013b59,*param_1,&DAT_1001362b);
  bVar2 = false;
  local_c = 0;
  local_10 = 0;
  local_14 = (char *)0x0;
  local_18 = 0;
  local_1c = 0;
  iVar3 = Ram40010800;
  local_20 = 0;
  if ((iVar3 == 0x50414d57) && (iVar3 = Ram40010804, iVar3 != 0)) {
    uVar1 = Ram40010808;
    bVar4 = 0xb < uVar1;
    if (bVar4) {
      uVar1 = Ram40010808;
    }
    if ((bVar4 && 0x207 < uVar1) && (_DAT_40010a04 != (code *)0x0)) {
      iVar3 = (*_DAT_40010a04)(acStack_80,&local_20);
      if (iVar3 == 0) {
switchD_1000eb5c_caseD_55:
        return false;
      }
      bVar2 = false;
      if ((local_20 & 0xfffffffb) == 1) {
        return local_1c != 0;
      }
      if ((local_20 == 3) && (local_14 != (char *)0x0)) {
        bVar2 = true;
        switch((uintptr_t)(*local_14)) {
        case 'T':
        case 'Y':
        case 't':
        case 'y':
          break;
        case 'U':
        case 'V':
        case 'W':
        case 'X':
        case 'Z':
        case '[':
        case '\\':
        case ']':
        case '^':
        case '_':
        case '`':
        case 'a':
        case 'b':
        case 'c':
        case 'd':
        case 'e':
        case 'f':
        case 'g':
        case 'h':
        case 'i':
        case 'j':
        case 'k':
        case 'l':
        case 'm':
        case 'n':
        case 'o':
        case 'p':
        case 'q':
        case 'r':
        case 's':
        case 'u':
        case 'v':
        case 'w':
        case 'x':
          goto switchD_1000eb5c_caseD_55;
        default:
          return *local_14 == '1';
        }
      }
    }
  }
  return bVar2;
}

#undef DAT_1001362b
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_40010a04
#undef Ram40010800
#undef Ram40010804
#undef Ram40010808
#undef _DAT_40010a04
#undef str_10013b59
#undef acStack_80
#undef local_20
#undef local_1c
#undef local_18
#undef local_14
#undef local_10
#undef local_c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ec14
 */

bool recovered_1000ec14(int param_1,int param_2,int param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  char *text;
  uint uVar5;
  bool bVar6;

  iVar4 = *(int *)(param_1 + 0x3d64);
  if (iVar4 != 0) {
    if (param_2 == 0x1b || param_3 == 1) {
      *(int *)(param_1 + 0x3d64) = 0;
      thunk_memset((void *)(param_1 + 0x3d92),0,0x41);
    }
    else if (param_2 == 9) {
      *(uint *)(param_1 + 0x3d68) = *(uint *)(param_1 + 0x3d68) ^ 1;
    }
    else if ((param_3 == 0x1c || param_2 == 0xd) || (param_2 == 10)) {
      recovered_1000ed44(param_1);
    }
    else {
      if (iVar4 == 2) {
        iVar3 = 0x3d71;
        uVar5 = 0x21;
      }
      else {
        iVar3 = 0x3d92;
        uVar5 = 0x41;
        if (*(int *)(param_1 + 0x3d68) == 0) {
          iVar3 = 0x3d71;
          uVar5 = 0x21;
        }
      }
      text = (char *)(param_1 + iVar3);
      uVar1 = thunk_strlen(text);
      if (((param_2 == 8 || param_2 == 0x7f) || param_3 == 0xe) && (uVar1 != 0)) {
        text[uVar1 - 1] = '\0';
      }
      else {
        uVar2 = param_2 - 0x20;
        bVar6 = 0x5d < uVar2;
        if (uVar2 < 0x5f) {
          uVar2 = uVar1 + 1;
          bVar6 = uVar5 <= uVar2;
        }
        if (!bVar6) {
          text[uVar1] = (char)param_2;
          text[uVar2] = '\0';
        }
      }
    }
  }
  return iVar4 != 0;
}


#undef DAT_10013b75
#define DAT_10013b75 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xcb9U)))
#undef DAT_10013c30
#define DAT_10013c30 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xd74U)))
#undef DAT_100140a4
#define DAT_100140a4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x11e8U)))
#undef str_10013b79
#define str_10013b79 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xcbdU)))
#undef str_10013ba6
#define str_10013ba6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xceaU)))
#undef str_10013bd3
#define str_10013bd3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xd17U)))
#undef str_10013c03
#define str_10013c03 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xd47U)))
#undef str_10013c28
#define str_10013c28 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xd6cU)))
#undef str_10013c35
#define str_10013c35 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xd79U)))
#undef str_10013c77
#define str_10013c77 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xdbbU)))
#undef str_10013ca4
#define str_10013ca4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xde8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ed44
 */

void recovered_1000ed44(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint128 auVar1;
  uint128 auVar2;
  uint128 auVar3;
  uint128 auVar4;
  uint128 auVar5;
  char cVar6;
  undefined1 uVar7;
  int iVar8;
  int iVar9;
  ulong uVar10;
  byte *pbVar11;
  bool bVar12;
  char *arg2;
  uint128 *pauVar13;
  undefined4 uVar14;
  uint uVar15;
  byte *a;
  uint uVar16;
  uint128 *unaff_r10;
  bool bVar17;
  uint128 auVar18;
  uint128 auVar19;
  uint128 auVar20;
  uint128 auVar21;
  uint128 auVar22;

  a = (byte *)(param_1 + 0x3d71);
  if (*(int *)(param_1 + 0x3d64) == 2) {
    iVar8 = thunk_strcmp((char *)a,&DAT_10013b75);
    iVar9 = 0;
    if (iVar8 == 0) {
LAB_1000eec0:
      *(int *)(param_1 + 0x3dd4) = iVar9;
      *(undefined4 *)(param_1 + 0x5c0) = 0;
      *(undefined4 *)(param_1 + 0x3d64) = 0;
      *(int *)(param_1 + 0x38b8) = *(int *)(param_1 + 0x38b8) + 1;
      return;
    }
    if (*(char *)(param_1 + 0x3d71) == '!') {
      a = (byte *)(param_1 + 0x3d72);
    }
    uVar10 = thunk_strlen((char *)a);
    if (uVar10 == 8) {
      uVar15 = (uint)*a;
      if (uVar15 != 0) {
        iVar9 = 0;
        do {
          a = a + 1;
          uVar16 = uVar15 - 0x30 & 0xff;
          if (9 < uVar16) {
            if ((uVar15 - 0x61 & 0xff) < 6) {
              uVar16 = uVar15 - 0x57;
            }
            else {
              if (5 < (uVar15 - 0x41 & 0xff)) {
                arg2 = str_10013ba6;
                goto LAB_1000f19c;
              }
              uVar16 = uVar15 - 0x37;
            }
          }
          uVar15 = (uint)*a;
          iVar9 = uVar16 + iVar9 * 0x10;
        } while (uVar15 != 0);
        if (1 < iVar9 + 1U) goto LAB_1000eec0;
      }
      arg2 = str_10013bd3;
    }
    else {
      arg2 = str_10013b79;
    }
    goto LAB_1000f19c;
  }
  cVar6 = '\0';
  if (*a != 0) {
    unaff_r10 = (uint128 *)(param_1 + 0x3d92);
    cVar6 = ((uint8_t *)(void *)unaff_r10)[0];
  }
  if (*a == 0 || cVar6 == '\0') {
    arg2 = str_10013c03;
    goto LAB_1000f19c;
  }
  uVar10 = thunk_strlen((char *)unaff_r10);
  iVar8 = thunk_strcmp((char *)unaff_r10,str_10013c28);
  if (iVar8 == 0) {
    bVar12 = true;
  }
  else {
    iVar8 = thunk_strcmp((char *)unaff_r10,&DAT_10013c30);
    bVar12 = iVar8 == 0;
  }
  if (uVar10 == 0x40 || uVar10 == 0x20) {
    bVar12 = true;
    uVar15 = 0;
    if (0xf < uVar10) {
      uVar15 = uVar10 & 0xfffffff0;
      auVar20 = (uint128)0x0;
      PF_PART8(auVar1, 8) = SUB168((uint128)0x0,8);
      PF_PART8(auVar1, 0) = 0x9999999999999999;
      PF_PART8(auVar2, 8) = SUB168((uint128)0x0,8);
      PF_PART8(auVar2, 0) = 0xc6c6c6c6c6c6c6c6;
      PF_PART8(auVar3, 8) = SUB168((uint128)0x0,8);
      PF_PART8(auVar3, 0) = 0xb9b9b9b9b9b9b9b9;
      PF_PART8(auVar5, 8) = SUB168((uint128)0x0,8);
      PF_PART8(auVar5, 0) = 0xfafafafafafafafa;
      auVar5 = (auVar5 << 64 | auVar5);
      PF_PART8(auVar4, 8) = SUB168((uint128)0x0,8);
      PF_PART8(auVar4, 0) = 0xf6f6f6f6f6f6f6f6;
      uVar16 = uVar15;
      pauVar13 = unaff_r10;
      do {
        auVar19 = *pauVar13;
        pauVar13 = pauVar13 + 1;
        uVar16 = uVar16 - 0x10;
        auVar22 = VectorAdd(auVar19,(auVar1 << 64 | auVar1),1);
        auVar18 = VectorAdd(auVar19,(auVar2 << 64 | auVar2),1);
        auVar21 = VectorAdd(auVar19,(auVar3 << 64 | auVar3),1);
        auVar22 = VectorCompareGreaterThan(auVar5,auVar22,1,1);
        auVar19 = VectorCompareGreaterThan
                            ((auVar4 << 64 | auVar4),auVar18,1,1);
        auVar18 = VectorCompareGreaterThan(auVar5,auVar21,1,1);
        auVar20 = auVar20 | auVar19 & auVar22 & auVar18;
      } while (uVar16 != 0);
      bVar12 = (((((((((((((((((uint8_t *)(void *)&auVar20)[0] & 1) == 0 && (((uint8_t *)(void *)&auVar20)[1] & 1) == 0) &&
                           (((uint8_t *)(void *)&auVar20)[2] & 1) == 0) && (((uint8_t *)(void *)&auVar20)[3] & 1) == 0) && (((uint8_t *)(void *)&auVar20)[4] & 1) == 0
                         ) && (((uint8_t *)(void *)&auVar20)[5] & 1) == 0) && (((uint8_t *)(void *)&auVar20)[6] & 1) == 0) &&
                      (((uint8_t *)(void *)&auVar20)[7] & 1) == 0) && (((uint8_t *)(void *)&auVar20)[8] & 1) == 0) && (((uint8_t *)(void *)&auVar20)[9] & 1) == 0) &&
                   (((uint8_t *)(void *)&auVar20)[10] & 1) == 0) && (((uint8_t *)(void *)&auVar20)[0xb] & 1) == 0) && (((uint8_t *)(void *)&auVar20)[0xc] & 1) == 0)
                && (((uint8_t *)(void *)&auVar20)[0xd] & 1) == 0) && (((uint8_t *)(void *)&auVar20)[0xe] & 1) == 0) && (((uint8_t *)(void *)&auVar20)[0xf] & 1) == 0;
      if (uVar10 == uVar15) goto LAB_1000f044;
    }
    iVar8 = uVar10 - uVar15;
    pbVar11 = (byte *)(uVar15 + param_1 + 0x3d92);
    do {
      uVar16 = (uint)*pbVar11;
      uVar15 = uVar16 - 0x30;
      bVar17 = 9 < uVar15;
      if (bVar17) {
        uVar15 = uVar16 - 0x61;
      }
      if (bVar17 && 5 < uVar15) {
        bVar12 = (bool)(uVar16 - 0x41 < 6 & bVar12);
      }
      iVar8 = iVar8 + -1;
      pbVar11 = pbVar11 + 1;
    } while (iVar8 != 0);
  }
LAB_1000f044:
  arg2 = str_10013c35;
  if ((0xfffffff8 < *(int *)(param_1 + 0x3d6c) - 8U) && ((bool)(*a != 0 & bVar12))) {
    iVar8 = *(int *)(param_1 + 0x389c);
    if (iVar8 == 0x20) {
      arg2 = str_10013c77;
    }
    else {
      iVar9 = iVar8 * 0x168 + param_1;
      *(int *)(param_1 + 0x389c) = iVar8 + 1;
      thunk_memset((void *)(iVar9 + 0xa34),0,0x168);
      iVar8 = *(int *)(param_1 + 0x38a0);
      *(undefined4 *)(iVar9 + 0xa34) = 2;
      iVar8 = iVar8 + 1;
      uVar7 = *(undefined1 *)(param_1 + 0x3d70);
      *(int *)(param_1 + 0x38a0) = iVar8;
      *(int *)(iVar9 + 0xa38) = iVar8;
      uVar14 = *(undefined4 *)(param_1 + 0x3d6c);
      *(undefined4 *)(iVar9 + 0xa3c) = DAT_100140a4;
      *(undefined1 *)(iVar9 + 0xa48) = uVar7;
      *(undefined4 *)(iVar9 + 0xa40) = uVar14;
      thunk_memcpy((void *)(iVar9 + 0xb39),a,0x21);
      thunk_memcpy((void *)(iVar9 + 0xb5a),unaff_r10,0x41);
      *(undefined4 *)(param_1 + 0x3d64) = 0;
      thunk_memset(unaff_r10,0,0x41);
      *(undefined1 *)(param_1 + 0x38c8) = 0;
      arg2 = str_10013ca4;
    }
  }
LAB_1000f19c:
  thunk_snprintf((char *)(param_1 + 0x418),0x80,arg2);
  return;
}

#undef DAT_10013b75
#undef DAT_10013c30
#undef DAT_100140a4
#undef str_10013b79
#undef str_10013ba6
#undef str_10013bd3
#undef str_10013c03
#undef str_10013c28
#undef str_10013c35
#undef str_10013c77
#undef str_10013ca4

#undef DAT_000038c7
#define DAT_000038c7 (*(uint8_t *)(0x38c7U))
#undef DAT_10013119
#define DAT_10013119 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x25dU)))
#undef DAT_100132d9
#define DAT_100132d9 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x41dU)))
#undef DAT_10013e01
#define DAT_10013e01 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xf45U)))
#undef DAT_10013efe
#define DAT_10013efe (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1042U)))
#undef DAT_10013f00
#define DAT_10013f00 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1044U)))
#undef DAT_10013f3a
#define DAT_10013f3a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x107eU)))
#undef EXT_0000000c
#define EXT_0000000c (*(uint8_t *)(0xcU))
#undef str_10013090
#define str_10013090 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1d4U)))
#undef str_10013592
#define str_10013592 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6d6U)))
#undef str_10013cf5
#define str_10013cf5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xe39U)))
#undef str_10013d16
#define str_10013d16 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xe5aU)))
#undef str_10013de5
#define str_10013de5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xf29U)))
#undef str_10013deb
#define str_10013deb (*(char (*)[1])(((uintptr_t)pf_module_state + 0xf2fU)))
#undef str_10013df8
#define str_10013df8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xf3cU)))
#undef str_10013e06
#define str_10013e06 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xf4aU)))
#undef str_10013e0e
#define str_10013e0e (*(char (*)[1])(((uintptr_t)pf_module_state + 0xf52U)))
#undef str_10013e1c
#define str_10013e1c (*(char (*)[1])(((uintptr_t)pf_module_state + 0xf60U)))
#undef str_10013e2c
#define str_10013e2c (*(char (*)[1])(((uintptr_t)pf_module_state + 0xf70U)))
#undef str_10013e3c
#define str_10013e3c (*(char (*)[1])(((uintptr_t)pf_module_state + 0xf80U)))
#undef str_10013e55
#define str_10013e55 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xf99U)))
#undef str_10013e68
#define str_10013e68 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xfacU)))
#undef str_10013e6e
#define str_10013e6e (*(char (*)[1])(((uintptr_t)pf_module_state + 0xfb2U)))
#undef str_10013e75
#define str_10013e75 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xfb9U)))
#undef str_10013e7d
#define str_10013e7d (*(char (*)[1])(((uintptr_t)pf_module_state + 0xfc1U)))
#undef str_10013e8b
#define str_10013e8b (*(char (*)[1])(((uintptr_t)pf_module_state + 0xfcfU)))
#undef str_10013ebe
#define str_10013ebe (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1002U)))
#undef str_10013ec4
#define str_10013ec4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1008U)))
#undef str_10013ecd
#define str_10013ecd (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1011U)))
#undef str_10013ed4
#define str_10013ed4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1018U)))
#undef str_10013edd
#define str_10013edd (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1021U)))
#undef str_10013ee3
#define str_10013ee3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1027U)))
#undef str_10013ef4
#define str_10013ef4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1038U)))
#undef str_10013f05
#define str_10013f05 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1049U)))
#undef str_10013f13
#define str_10013f13 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1057U)))
#undef str_10013f2f
#define str_10013f2f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1073U)))
#define local_c4 (*(undefined4 *)(pf_stack_frame + 7820))
#define uStack_34 (*(undefined4 *)(pf_stack_frame + 7964))
#define local_c0 (*(undefined4 *)(pf_stack_frame + 7824))
#define uStack_30 (*(undefined4 *)(pf_stack_frame + 7968))
#define local_7c (*(int * *)(pf_stack_frame + 7892))
#define uStack_2c (*(undefined4 *)(pf_stack_frame + 7972))
#define local_78 (*(undefined4 *)(pf_stack_frame + 7896))
#define uStack_28 (*(undefined4 *)(pf_stack_frame + 7976))
#define local_74 (*(undefined4 *)(pf_stack_frame + 7900))
#define local_70 (*(undefined1 (*)[112])(pf_stack_frame + 7904))
#define acStack_1f18 (*(char (*)[7960])(pf_stack_frame + 56))
#define uStack_bc (*(undefined4 *)(pf_stack_frame + 7828))
#define uStack_b8 (*(undefined4 *)(pf_stack_frame + 7832))
#define uStack_b4 (*(undefined4 *)(pf_stack_frame + 7836))
#define uStack_b0 (*(undefined4 *)(pf_stack_frame + 7840))
#define uStack_ac (*(undefined4 *)(pf_stack_frame + 7844))
#define uStack_a8 (*(undefined4 *)(pf_stack_frame + 7848))
#define uStack_a4 (*(undefined4 *)(pf_stack_frame + 7852))
#define uStack_a0 (*(undefined4 *)(pf_stack_frame + 7856))
#define uStack_9c (*(undefined4 *)(pf_stack_frame + 7860))
#define uStack_98 (*(undefined4 *)(pf_stack_frame + 7864))
#define uStack_94 (*(undefined4 *)(pf_stack_frame + 7868))
#define uStack_90 (*(undefined4 *)(pf_stack_frame + 7872))
#define uStack_8c (*(undefined4 *)(pf_stack_frame + 7876))
#define uStack_88 (*(undefined4 *)(pf_stack_frame + 7880))
#define uStack_84 (*(undefined4 *)(pf_stack_frame + 7884))
#define uStack_80 (*(undefined4 *)(pf_stack_frame + 7888))
#define local_1f40 (*(int *)(pf_stack_frame + 16))
#define uStack_64 (*(undefined4 *)(pf_stack_frame + 7916))
#define local_1f2c (*(int *)(pf_stack_frame + 36))
#define uStack_60 (*(undefined4 *)(pf_stack_frame + 7920))
#define local_1f28 (*(int *)(pf_stack_frame + 40))
#define uStack_5c (*(undefined4 *)(pf_stack_frame + 7924))
#define local_1f24 (*(int *)(pf_stack_frame + 44))
#define uStack_58 (*(undefined4 *)(pf_stack_frame + 7928))
#define uStack_54 (*(undefined4 *)(pf_stack_frame + 7932))
#define uStack_50 (*(undefined4 *)(pf_stack_frame + 7936))
#define local_1ed8 (*(char (*)[7896])(pf_stack_frame + 120))
#define uStack_4c (*(undefined4 *)(pf_stack_frame + 7940))
#define local_d8 (*(int * *)(pf_stack_frame + 7800))
#define uStack_48 (*(undefined4 *)(pf_stack_frame + 7944))
#define local_d4 (*(int *)(pf_stack_frame + 7804))
#define uStack_44 (*(undefined4 *)(pf_stack_frame + 7948))
#define local_d0 (*(int *)(pf_stack_frame + 7808))
#define uStack_40 (*(undefined4 *)(pf_stack_frame + 7952))
#define local_cc (*(int *)(pf_stack_frame + 7812))
#define uStack_3c (*(undefined4 *)(pf_stack_frame + 7956))
#define local_c8 (*(int * *)(pf_stack_frame + 7816))
#define uStack_38 (*(undefined4 *)(pf_stack_frame + 7960))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000f1b8
 */

void recovered_1000f1b8(int *param_1)

{
  unsigned char pf_stack_frame[8048] __attribute__((aligned(16))) = {0};

  bool bVar1;
  PFUiView view;
  PFUiView view_00;
  PFUiView view_01;
  int *piVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  void *pvVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  char *arg2;
  char cVar14;
  char *pcVar15;
  char *arg3;
  int iVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  char *pcVar25;
  bool bVar26;

  iVar22 = *param_1;
  if (iVar22 == 0) {
    iVar19 = 400;
    iVar17 = 0x2f8;
  }
  else {
    iVar19 = *(int *)(iVar22 + 8);
    iVar17 = *(int *)(iVar22 + 4);
    if (iVar19 == 0) {
      iVar19 = 400;
    }
    if (iVar17 == 0) {
      iVar17 = 0x2f8;
    }
  }
  uVar4 = thunk_terror_ui_colour(0);
  pf_app_terror_ui_rectangle(local_70,uVar4);
  thunk_memcpy(local_1ed8,local_70,0x4c);
  iVar20 = iVar17;
  if (0 < iVar17) {
    iVar20 = iVar19;
  }
  if (0 < iVar20) {
    pvVar10 = (void *)0x0;
    if ((char)param_1[2] == '\0') {
      pvVar10 = (void *)param_1[1];
    }
    pf_app_terror_ui_view_draw((void *)*param_1,local_1ed8,0,0,iVar17,iVar19,pvVar10);
  }
  iVar17 = param_1[1];
  if (*(int *)(iVar22 + 0x3d64) == 0 || iVar17 == 0) {
    if (*(int *)(iVar22 + 0x3d64) != 0) goto LAB_1000f2a8;
  }
  else {
    if (*(int *)(iVar17 + 0x10) != 0) {
      recovered_10010ee4(param_1);
      *(undefined1 *)(param_1 + 2) = 1;
    }
LAB_1000f2a8:
    param_1[1] = 0;
  }
  iVar22 = *param_1;
  if (iVar22 == 0) {
    iVar20 = 400;
    local_1f24 = 0x1c;
    iVar19 = 0xd8;
LAB_1000f340:
    uVar4 = thunk_terror_ui_colour(0x2d);
    pf_app_terror_ui_rectangle(local_70,uVar4);
    thunk_memcpy(local_1ed8,local_70,0x4c);
    if (0 < iVar20) {
      pvVar10 = (void *)0x0;
      if ((char)param_1[2] == '\0') {
        pvVar10 = (void *)param_1[1];
      }
      pf_app_terror_ui_view_draw((void *)*param_1,local_1ed8,0,0,iVar19,iVar20,pvVar10);
    }
    iVar20 = iVar19 + -0x1c;
    if (iVar22 == 0) {
      iVar5 = 10;
    }
    else {
      iVar5 = *(int *)(iVar22 + 0x3a8);
      if (iVar5 < 1) {
        iVar5 = 10;
      }
    }
    recovered_10011b3c(param_1,0xe,0xc,iVar20,iVar5 + 2,str_10013090,1);
    if (iVar22 == 0) {
      iVar5 = 10;
    }
    else {
      iVar5 = *(int *)(iVar22 + 0x3a8);
      if (iVar5 < 1) {
        iVar5 = 10;
      }
    }
    pvVar10 = (void *)0x0;
    local_c0 = 0;
    local_c4 = 0;
    pcVar25 = str_10013deb;
    if (*(char *)(iVar22 + 0x540) != '\0') {
      pcVar25 = (char *)(iVar22 + 0x540);
    }
    local_c8 = param_1;
    pf_app_terror_ui_button(local_70,pcVar25,recovered_1001211c,&local_c8);
    thunk_memcpy(local_1ed8,local_70,0x4c);
    iVar19 = iVar19 + -0x14;
    if ((char)param_1[2] == '\0') {
      pvVar10 = (void *)param_1[1];
    }
    pf_app_terror_ui_view_draw((void *)*param_1,local_1ed8,10,iVar5 + 0x1a,iVar19,local_1f24,pvVar10);
    iVar11 = 0xc;
    if (0 < *(int *)(iVar22 + 0x3a8)) {
      iVar11 = *(int *)(iVar22 + 0x3a8) + 2;
    }
    iVar23 = local_1f24 + iVar5 + 0x1a + 0x12;
    recovered_10011b3c(param_1,0xe,iVar23,iVar20,iVar11,str_10013df8,0x31);
    iVar11 = *(int *)(iVar22 + 0x3a8);
    iVar5 = 0x14;
    iVar13 = *(int *)(iVar22 + 8);
    if (0 < iVar11) {
      iVar5 = iVar11 + 10;
    }
    if (iVar13 == 0) {
      iVar13 = 400;
    }
    if (*(char *)(iVar22 + 0xa2d) == '\0') {
      uVar4 = 1;
      if (*(int *)(iVar22 + 0x5b8) == 1) {
        uVar4 = 2;
      }
    }
    else {
      uVar4 = 2;
    }
    if (*(char *)(iVar22 + 0xa2e) == '\0') {
      if (*(int *)(iVar22 + 0x5b8) == 2) {
        uVar4 = uVar4 + 1;
      }
    }
    else {
      uVar4 = uVar4 + 1;
    }
    if (*(char *)(iVar22 + 0xa2f) == '\0') {
      if (*(int *)(iVar22 + 0x5b8) == 3) {
        uVar4 = uVar4 + 1;
      }
    }
    else {
      uVar4 = uVar4 + 1;
    }
    if (*(char *)(iVar22 + 0xa30) == '\0') {
      if (*(int *)(iVar22 + 0x5b8) == 4) {
        uVar4 = uVar4 + 1;
      }
    }
    else {
      uVar4 = uVar4 + 1;
    }
    if (*(char *)(iVar22 + 0xa31) == '\0') {
      if (*(int *)(iVar22 + 0x5b8) == 5) {
        uVar4 = uVar4 + 1;
      }
    }
    else {
      uVar4 = uVar4 + 1;
    }
    if (*(char *)(iVar22 + 0xa32) == '\0') {
      if (*(int *)(iVar22 + 0x5b8) == 6) {
        uVar4 = uVar4 + 1;
      }
    }
    else {
      uVar4 = uVar4 + 1;
    }
    if (*(char *)(iVar22 + 0xa33) == '\0') {
      if (*(int *)(iVar22 + 0x5b8) == 7) {
        uVar4 = uVar4 + 1;
      }
    }
    else {
      uVar4 = uVar4 + 1;
    }
    iVar21 = -0xc;
    if (0 < iVar11) {
      iVar21 = -2 - iVar11;
    }
    iVar5 = iVar5 + iVar23;
    iVar11 = iVar21 + local_1f24 * -2 + iVar13 + -0x1c;
    if (iVar5 < iVar11) {
      uVar6 = recovered_10003fa8((iVar11 - iVar5) + -0xe,local_1f24 + 4);
    }
    else {
      uVar6 = 0;
    }
    local_1f2c = local_1f24 + 4;
    iVar13 = uVar6 - (uVar6 < uVar4 && uVar6 != 0);
    uVar18 = 0;
    if (iVar13 != 0) {
      pcVar25 = str_10013e06;
      if (*(char *)(iVar22 + 0x91c) != '\0') {
        pcVar25 = (char *)(iVar22 + 0x91c);
      }
      thunk_snprintf(local_1ed8,0x30,&DAT_10013e01,pcVar25);
      iVar13 = iVar13 + -1;
      if (*(int *)(iVar22 + 0x3dd4) == 0) {
        uVar18 = (uint)(*(int *)(iVar22 + 0x5b8) == 0);
      }
      iVar23 = 0;
      recovered_10011ee0(param_1,10,iVar5,iVar19,local_1f24,local_1ed8,1,0,uVar18);
      pcVar25 = (char *)(iVar22 + 0x93d);
      iVar5 = local_1f2c + iVar5;
      do {
        pcVar15 = (char *)(iVar22 + 0xa2d + iVar23);
        iVar23 = iVar23 + 1;
        if ((*pcVar15 != '\0') || (iVar23 == *(int *)(iVar22 + 0x5b8))) {
          if (iVar13 == 0) break;
          pcVar15 = pcVar25;
          if (*pcVar25 == '\0') {
            pcVar15 = str_10013592;
          }
          thunk_snprintf(local_1ed8,0x30,&DAT_10013e01,pcVar15);
          uVar18 = 0;
          if (*(int *)(iVar22 + 0x3dd4) == 0) {
            uVar18 = (uint)(iVar23 == *(int *)(iVar22 + 0x5b8));
          }
          iVar13 = iVar13 + -1;
          recovered_10011ee0(param_1,10,iVar5,iVar19,local_1f24,local_1ed8,1,iVar23,uVar18);
          iVar5 = iVar5 + local_1f2c;
        }
        pcVar25 = pcVar25 + 0x21;
      } while (iVar23 != 7);
    }
    if ((uVar6 < uVar4) && (iVar5 + local_1f24 < iVar11)) {
      pvVar10 = (void *)0x0;
      local_c4 = 0x10;
      local_c0 = 0;
      local_c8 = param_1;
      pf_app_terror_ui_button(local_70,str_10013e0e,recovered_1001211c,&local_c8);
      thunk_memcpy(local_1ed8,local_70,0x4c);
      if ((char)param_1[2] == '\0') {
        pvVar10 = (void *)param_1[1];
      }
      pf_app_terror_ui_view_draw((void *)*param_1,local_1ed8,10,iVar5,iVar19,local_1f24,pvVar10);
      iVar5 = iVar5 + local_1f2c;
    }
    iVar13 = *(int *)(iVar22 + 0x3a8);
    if (iVar13 < 1) {
      iVar13 = 10;
      if (iVar5 + 0x1a < iVar11) goto LAB_1000f914;
      iVar13 = 10;
    }
    else if (iVar5 + iVar13 + 0x10 < iVar11) {
LAB_1000f914:
      recovered_10011b3c(param_1,0xe,iVar5 + 0xe,iVar20,iVar13 + 2,str_10013e1c,0x31);
      iVar13 = *(int *)(iVar22 + 0x3a8);
      iVar23 = iVar13;
      if (iVar13 < 1) {
        iVar23 = 10;
      }
      iVar5 = iVar5 + iVar23 + 0x18;
      if (iVar5 + local_1f24 < iVar11) {
        iVar13 = 0;
        do {
          uVar4 = recovered_10011d24(iVar22,iVar13);
          if (uVar4 == 0) break;
          thunk_snprintf(local_1ed8,0x20,str_10013d16,uVar4);
          recovered_10011ee0(param_1,10,iVar5,iVar19,local_1f24,local_1ed8,4,uVar4,
                             (uint)(*(uint *)(iVar22 + 0x3dd4) == uVar4));
          iVar13 = iVar13 + 1;
          iVar5 = iVar5 + local_1f2c;
        } while (local_1f24 + iVar5 < iVar11);
        iVar13 = *(int *)(iVar22 + 0x3a8);
      }
      if (iVar13 < 1) {
        iVar13 = 10;
      }
    }
    pcVar25 = str_10013e3c;
    if ((&DAT_000038c7)[iVar22] != '\0') {
      pcVar25 = str_10013e2c;
    }
    recovered_10011b3c(param_1,0xe,iVar11,iVar20,iVar13 + 2,pcVar25,0x31);
    iVar5 = *(int *)(iVar22 + 0x3a8);
    local_c4 = 3;
    local_c0 = 0;
    local_c8 = param_1;
    pf_app_terror_ui_button(local_70,str_10013e55,recovered_1001211c,&local_c8);
    thunk_memcpy(local_1ed8,local_70,0x4c);
    iVar20 = 0xc;
    if (0 < iVar5) {
      iVar20 = iVar5 + 2;
    }
    pvVar10 = (void *)0x0;
    if ((char)param_1[2] == '\0') {
      pvVar10 = (void *)param_1[1];
    }
    iVar5 = 0xc;
    pf_app_terror_ui_view_draw((void *)*param_1,local_1ed8,10,iVar11 + iVar20 + 8,iVar19,local_1f24,pvVar10)
    ;
    iVar22 = *(int *)(iVar22 + 0x3a8);
    pvVar10 = (void *)0x0;
    local_c4 = 2;
    local_c0 = 0;
    local_c8 = param_1;
    pf_app_terror_ui_button(local_70,str_10013cf5,recovered_1001211c,&local_c8);
    thunk_memcpy(local_1ed8,local_70,0x4c);
    if (0 < iVar22) {
      iVar5 = iVar22 + 2;
    }
    if ((char)param_1[2] == '\0') {
      pvVar10 = (void *)param_1[1];
    }
    pf_app_terror_ui_view_draw((void *)*param_1,local_1ed8,10,local_1f24 + iVar11 + iVar5 + 0xe,iVar19,
                       local_1f24,pvVar10);
    iVar22 = *param_1;
    if (iVar22 != 0) goto LAB_1000fbdc;
    iVar20 = 0x24;
    local_1f28 = 0x220;
    iVar5 = 0xc;
    iVar19 = 0xd8;
    iVar22 = 0;
    local_1f24 = 0x1c;
  }
  else {
    uVar4 = *(uint *)(iVar22 + 4);
    if (uVar4 == 0) {
      local_1f24 = 0x1c;
      iVar19 = 0xd8;
      if (0 < *(int *)(iVar22 + 0x3a8)) {
        local_1f24 = *(int *)(iVar22 + 0x3a8) + 0x12;
      }
LAB_1000f330:
      iVar20 = *(int *)(iVar22 + 8);
      if (iVar20 == 0) {
        iVar20 = 400;
      }
      goto LAB_1000f340;
    }
    iVar19 = 0xd8;
    if (uVar4 < 700) {
      iVar19 = 0xa4;
    }
    if (*(int *)(iVar22 + 0x3a8) < 1) {
      local_1f24 = 0x1c;
      if (0x207 < (int)uVar4) goto LAB_1000f330;
    }
    else if (0x207 < (int)uVar4) {
      local_1f24 = *(int *)(iVar22 + 0x3a8) + 0x12;
      goto LAB_1000f330;
    }
LAB_1000fbdc:
    iVar11 = *(int *)(iVar22 + 0x3a8);
    iVar5 = 0xc;
    uVar4 = *(uint *)(iVar22 + 4);
    local_1f24 = 0x1c;
    iVar19 = 0xd8;
    if (0 < iVar11) {
      local_1f24 = iVar11 + 0x12;
      iVar5 = iVar11 + 2;
    }
    if (uVar4 < 700) {
      iVar19 = 0xa4;
    }
    if ((int)uVar4 < 0x208) {
      iVar19 = 0;
    }
    uVar6 = uVar4;
    if (uVar4 == 0) {
      iVar19 = 0xd8;
      uVar6 = 0x2f8;
    }
    iVar20 = 0x24;
    local_1f28 = uVar6 - iVar19;
    if (((uVar4 != 0) && ((int)uVar4 < 0x208)) && (iVar20 = 0x4c, 0 < iVar11)) {
      iVar20 = iVar11 + 0x42;
    }
  }
  uVar4 = thunk_terror_ui_colour(0);
  pf_app_terror_ui_rectangle(local_70,uVar4);
  thunk_memcpy(local_1ed8,local_70,0x4c);
  iVar20 = iVar20 + iVar5 * 2;
  iVar5 = local_1f28;
  if (0 < local_1f28) {
    iVar5 = iVar20;
  }
  if (0 < iVar5) {
    pvVar10 = (void *)0x0;
    if ((char)param_1[2] == '\0') {
      pvVar10 = (void *)param_1[1];
    }
    pf_app_terror_ui_view_draw((void *)*param_1,local_1ed8,iVar19,0,local_1f28,iVar20,pvVar10);
  }
  pcVar25 = *(char **)(iVar22 + 0x3dd4);
  if (pcVar25 == (char *)0x0) {
    pcVar25 = (char *)(iVar22 + *(int *)(iVar22 + 0x5b8) * 0x21 + 0x91c);
    pcVar15 = &DAT_10013e01;
    if (*pcVar25 == '\0') {
      pcVar25 = str_10013e06;
    }
  }
  else {
    pcVar15 = str_10013d16;
  }
  thunk_snprintf(acStack_1f18,0x38,pcVar15,(uint)pcVar25);
  pcVar25 = &PrefetchAbort;
  pcVar15 = (char *)0x44;
  if (0 < *(int *)(iVar22 + 0x3a8)) {
    pcVar25 = (char *)(*(int *)(iVar22 + 0x3a8) + 2);
  }
  if (local_1f28 < 0x1e0) {
    pcVar15 = (char *)0x34;
  }
  recovered_10011b3c(param_1,iVar19 + 0xe,0xc,local_1f28 + (int)pcVar15 * -3 + -0x2c,(int)pcVar25,
                     acStack_1f18,1);
  iVar5 = *(int *)(iVar22 + 4);
  pvVar10 = (void *)0x0;
  local_c4 = 5;
  local_c0 = 0;
  local_c8 = param_1;
  pf_app_terror_ui_button(local_70,str_10013e68,recovered_1001211c,&local_c8);
  thunk_memcpy(local_1ed8,local_70,0x4c);
  if (iVar5 == 0) {
    iVar5 = 0x2f8;
  }
  iVar11 = (int)pcVar15 * -3 + -0x1c;
  if (0 < local_1f24) {
    if ((char)param_1[2] == '\0') {
      pvVar10 = (void *)param_1[1];
    }
    pcVar25 = pcVar15;
    pf_app_terror_ui_view_draw((void *)*param_1,local_1ed8,iVar5 + iVar11,8,(int)pcVar15,local_1f24,pvVar10)
    ;
  }
  pvVar10 = (void *)0x0;
  iVar5 = *(int *)(iVar22 + 4);
  local_c4 = 6;
  local_c0 = 0;
  local_c8 = param_1;
  pf_app_terror_ui_button(local_70,str_10013e6e,recovered_1001211c,&local_c8);
  thunk_memcpy(local_1ed8,local_70,0x4c);
  if (iVar5 == 0) {
    iVar5 = 0x2f8;
  }
  if (0 < local_1f24) {
    if ((char)param_1[2] == '\0') {
      pvVar10 = (void *)param_1[1];
    }
    pcVar25 = pcVar15;
    pf_app_terror_ui_view_draw((void *)*param_1,local_1ed8,iVar11 + ((uint)pcVar15 | 8) + iVar5,8,
                       (int)pcVar15,local_1f24,pvVar10);
  }
  pvVar10 = (void *)0x0;
  iVar5 = *(int *)(iVar22 + 4);
  local_c4 = 7;
  local_c0 = 0;
  local_c8 = param_1;
  pf_app_terror_ui_button(local_70,str_10013e75,recovered_1001211c,&local_c8);
  thunk_memcpy(local_1ed8,local_70,0x4c);
  if (iVar5 == 0) {
    iVar5 = 0x2f8;
  }
  if (0 < local_1f24) {
    if ((char)param_1[2] == '\0') {
      pvVar10 = (void *)param_1[1];
    }
    pf_app_terror_ui_view_draw((void *)*param_1,local_1ed8,iVar11 + ((uint)pcVar15 | 8) * 2 + iVar5,8,
                       (int)pcVar15,local_1f24,pvVar10);
    pcVar25 = pcVar15;
  }
  pcVar15 = (char *)(iVar22 + 0x418);
  if (*(char **)(iVar22 + 0x389c) == (char *)0x0) {
    arg2 = &DAT_100132d9;
    arg3 = str_10013e8b;
    if (*pcVar15 != '\0') {
      arg3 = pcVar15;
    }
  }
  else {
    arg2 = str_10013e7d;
    arg3 = *(char **)(iVar22 + 0x389c);
    pcVar25 = pcVar15;
  }
  thunk_snprintf(local_1ed8,0xa0,arg2,(uint)arg3,pcVar25);
  iVar5 = 0xc;
  if (0 < *(int *)(iVar22 + 0x3a8)) {
    iVar5 = *(int *)(iVar22 + 0x3a8) + 2;
  }
  recovered_10011b3c(param_1,iVar19 + 0xe,local_1f24 + 0xe,local_1f28 + -0x1c,iVar5,local_1ed8,0x31)
  ;
  if (iVar19 == 0) {
    iVar5 = *(int *)(iVar22 + 0x3a8);
    pvVar10 = (void *)0x0;
    local_d0 = 0;
    local_d4 = 0;
    local_d8 = param_1;
    pf_app_terror_ui_button(&local_c8,str_10013ebe,recovered_1001211c,&local_d8);
    thunk_memcpy(local_70,&local_c8,0x4c);
    bVar26 = 0 < local_1f24;
    bVar1 = 0x35 < local_1f28;
    iVar22 = 0x3c;
    if (0 < iVar5) {
      iVar22 = iVar5 * 2 + 0x28;
    }
    iVar5 = (int)(local_1f28 + -0x32 + ((uint)(local_1f28 + -0x32 >> 0x1f) >> 0x1e)) >> 2;
    if (bVar1 && bVar26) {
      if ((char)param_1[2] == '\0') {
        pvVar10 = (void *)param_1[1];
      }
      pf_app_terror_ui_view_draw((void *)*param_1,local_70,10,iVar22,iVar5,local_1f24,pvVar10);
    }
    pvVar10 = (void *)0x0;
    local_d4 = 0x10;
    local_d0 = 0;
    local_d8 = param_1;
    pf_app_terror_ui_button(&local_c8,str_10013ec4,recovered_1001211c,&local_d8);
    thunk_memcpy(local_70,&local_c8,0x4c);
    if (bVar1 && bVar26) {
      if ((char)param_1[2] == '\0') {
        pvVar10 = (void *)param_1[1];
      }
      pf_app_terror_ui_view_draw((void *)*param_1,local_70,iVar5 + 0x14,iVar22,iVar5,local_1f24,pvVar10);
    }
    pvVar10 = (void *)0x0;
    local_d4 = 3;
    local_d0 = 0;
    local_d8 = param_1;
    pf_app_terror_ui_button(&local_c8,str_10013ecd,recovered_1001211c,&local_d8);
    thunk_memcpy(local_70,&local_c8,0x4c);
    if (bVar1 && bVar26) {
      if ((char)param_1[2] == '\0') {
        pvVar10 = (void *)param_1[1];
      }
      pf_app_terror_ui_view_draw((void *)*param_1,local_70,iVar5 * 2 + 0x1e,iVar22,iVar5,local_1f24,pvVar10)
      ;
    }
    pvVar10 = (void *)0x0;
    local_d4 = 2;
    local_d0 = 0;
    local_d8 = param_1;
    pf_app_terror_ui_button(&local_c8,str_10013ed4,recovered_1001211c,&local_d8);
    thunk_memcpy(local_70,&local_c8,0x4c);
    if (bVar1 && bVar26) {
      if ((char)param_1[2] == '\0') {
        pvVar10 = (void *)param_1[1];
      }
      pf_app_terror_ui_view_draw((void *)*param_1,local_70,iVar5 * 3 + 0x28,iVar22,iVar5,local_1f24,pvVar10)
      ;
    }
  }
  uVar4 = thunk_terror_ui_colour(0x15);
  pf_app_terror_ui_rectangle(&local_c8,uVar4);
  thunk_memcpy(local_70,&local_c8,0x4c);
  if (0 < local_1f28) {
    pvVar10 = (void *)0x0;
    if ((char)param_1[2] == '\0') {
      pvVar10 = (void *)param_1[1];
    }
    pf_app_terror_ui_view_draw((void *)*param_1,local_70,iVar19,iVar20 + -1,local_1f28,1,pvVar10);
  }
  iVar11 = *param_1;
  recovered_1000c280((int *)&local_d8,iVar11);
  iVar5 = local_cc;
  iVar20 = local_d0;
  iVar19 = local_d4;
  piVar2 = local_d8;
  uVar4 = thunk_terror_ui_colour(0);
  pf_app_terror_ui_rectangle(local_70,uVar4);
  thunk_memcpy(local_1ed8,local_70,0x4c);
  iVar22 = iVar20;
  if (0 < iVar20) {
    iVar22 = iVar5;
  }
  if (0 < iVar22) {
    pvVar10 = (void *)0x0;
    if ((char)param_1[2] == '\0') {
      pvVar10 = (void *)param_1[1];
    }
    pf_app_terror_ui_view_draw((void *)*param_1,local_1ed8,(int)piVar2,iVar19,iVar20,iVar5,pvVar10);
  }
  if (iVar11 == 0) {
    iVar22 = 10;
    uVar4 = (iVar20 + -0x40) / 6;
  }
  else {
    iVar13 = *(int *)(iVar11 + 0x3a4);
    iVar22 = *(int *)(iVar11 + 0x3a8);
    if (iVar13 < 1) {
      iVar13 = 6;
    }
    uVar4 = recovered_10003fa8(iVar20 + -0x40,iVar13);
    if (iVar22 < 1) {
      iVar22 = 10;
    }
  }
  if (0 < (int)uVar4) {
    iVar13 = iVar22 + 2;
    iVar23 = *(int *)(iVar11 + 0x3d58);
    if (iVar23 != 0) {
      if (0xee < uVar4) {
        uVar4 = 0xef;
      }
      local_1f24 = iVar19 + iVar5 + -8;
      iVar5 = iVar23 * 0x10c + -0xf0;
      uVar6 = 0;
      local_1f40 = 0;
      do {
        iVar24 = *(int *)(iVar11 + 0x3c48);
        iVar21 = iVar23 * 0x10c + iVar24;
        if (*(int *)(iVar21 + -0x10c) == *(int *)(iVar11 + 0x568)) {
          if (*(int *)(iVar11 + 0x3dd4) == 0) {
            iVar16 = *(int *)(iVar11 + 0x5b8);
            bVar26 = *(int *)(iVar21 + -0xfc) == iVar16;
            if (bVar26) {
              iVar16 = *(int *)(iVar21 + -0x104);
            }
            if (bVar26 && iVar16 == -1) goto LAB_100105a8;
          }
          else {
            iVar16 = *(int *)(iVar21 + -0x104);
            if (*(char *)(iVar21 + -0xf8) != '\x01') {
              if (iVar16 == -1) goto LAB_10010554;
              iVar16 = *(int *)(iVar21 + -0x108);
            }
            if (iVar16 == *(int *)(iVar11 + 0x3dd4)) {
LAB_100105a8:
              if (uVar6 < *(uint *)(iVar11 + 0x5c0)) {
                uVar6 = uVar6 + 1;
              }
              else {
                pcVar25 = (char *)(iVar21 + -0xf0);
                cVar3 = *pcVar25;
                if (cVar3 == '\0') {
                  uVar18 = 1;
                  local_1ed8[0] = '\0';
                }
                else {
                  iVar16 = 0;
                  pcVar15 = pcVar25;
                  uVar7 = 0;
                  do {
                    uVar18 = 0;
                    uVar8 = 0;
                    cVar14 = cVar3;
                    while (cVar14 != '\0' && cVar14 != '\n') {
                      if (uVar4 == uVar8) {
                        uVar8 = uVar4;
                        break;
                      }
                      if (cVar14 == ' ') {
                        uVar18 = uVar8;
                      }
                      cVar14 = pcVar15[uVar8 + 1];
                      uVar8 = uVar8 + 1;
                    }
                    if (uVar18 == 0) {
                      uVar18 = uVar8;
                    }
                    if (cVar14 == '\n') {
                      uVar18 = uVar8;
                    }
                    if (cVar14 == '\0') {
                      uVar18 = uVar8;
                    }
                    for (; uVar18 != 0; uVar18 = uVar18 - 1) {
                      if ((pcVar15[uVar18] & 0xc0U) != 0x80) goto LAB_10010694;
                    }
                    uVar18 = 0;
                    if (cVar3 != '\n') {
                      uVar18 = 1;
                      do {
                        if ((pcVar15[uVar18] & 0xc0U) != 0x80) goto LAB_10010694;
                        uVar18 = uVar18 + 1;
                      } while (uVar18 != 0xef);
                      uVar18 = 0xef;
                    }
LAB_10010694:
                    thunk_memcpy(local_1ed8 + uVar7 * 0xf0,pcVar15,uVar18);
                    iVar12 = uVar18 + iVar16;
                    (local_1ed8 + uVar7 * 0xf0)[uVar18] = '\0';
                    if (pcVar25[iVar12] == '\n') {
                      iVar16 = iVar12 + 1;
                      cVar3 = pcVar25[iVar16];
                    }
                    else {
                      do {
                        iVar16 = iVar12;
                        cVar3 = *(char *)(iVar24 + iVar5 + iVar16);
                        iVar12 = iVar16 + 1;
                      } while (cVar3 == ' ');
                    }
                    uVar18 = uVar7 + 1;
                    if (cVar3 == '\0') break;
                    pcVar15 = pcVar25 + iVar16;
                    bVar26 = uVar7 < 0x1f;
                    uVar7 = uVar18;
                  } while (bVar26);
                }
                iVar24 = recovered_10003fa8((local_1f24 - iVar19) + -0xe,iVar13);
                if (iVar24 < 2) break;
                uVar7 = iVar24 - 1U;
                if (uVar18 < iVar24 - 1U) {
                  uVar7 = uVar18;
                }
                if (*(char *)(iVar21 + -0xf8) == '\x01') {
                  pcVar25 = str_10013ee3;
                  if ((*(char *)(iVar21 + -0xf6) == '\0') &&
                     (pcVar25 = &DAT_10013119, *(char *)(iVar21 + -0xf7) != '\0')) {
                    pcVar25 = str_10013ef4;
                  }
                  thunk_snprintf(acStack_1f18,0x40,str_10013edd,pcVar25);
                  thunk_snprintf((char *)&local_7c,4,&DAT_10013efe);
                }
                else {
                  thunk_snprintf(acStack_1f18,0x40,str_10013de5,*(uint *)(iVar21 + -0x108));
                  thunk_snprintf((char *)&local_7c,4,&DAT_10013f00,
                                     (uint)*(byte *)(iVar21 + -0x108));
                }
                pf_app_terror_ui_text(local_70,(char *)&local_7c);
                view.words[4] = uStack_60;
                view.words[3] = uStack_64;
                view.words[5] = uStack_5c;
                view.words[6] = uStack_58;
                view.words[7] = uStack_54;
                view.words[8] = uStack_50;
                view.words[9] = uStack_4c;
                view.words[10] = uStack_48;
                view.words[0xb] = uStack_44;
                view.words[0xc] = uStack_40;
                view.words[0xd] = uStack_3c;
                view.words[0xe] = uStack_38;
                view.words[0xf] = uStack_34;
                view.words[0x10] = uStack_30;
                view.words[0x11] = uStack_2c;
                view.words[0x12] = uStack_28;
                view.words[0] = PF_PART4(local_70, 0);
                view.words[1] = PF_PART4(local_70, 4);
                view.words[2] = PF_PART4(local_70, 8);
                pf_app_terror_ui_view_alignment(&local_c8,view,1);
                uVar8 = thunk_terror_ui_colour(4);
                view_00.words[1] = local_c4;
                view_00.words[0] = (uint)local_c8;
                view_00.words[2] = local_c0;
                view_00.words[4] = uStack_b8;
                view_00.words[3] = uStack_bc;
                view_00.words[5] = uStack_b4;
                view_00.words[6] = uStack_b0;
                view_00.words[7] = uStack_ac;
                view_00.words[8] = uStack_a8;
                view_00.words[9] = uStack_a4;
                view_00.words[10] = uStack_a0;
                view_00.words[0xb] = uStack_9c;
                view_00.words[0xc] = uStack_98;
                view_00.words[0xd] = uStack_94;
                view_00.words[0xe] = uStack_90;
                view_00.words[0xf] = uStack_8c;
                view_00.words[0x10] = uStack_88;
                view_00.words[0x11] = uStack_84;
                view_00.words[0x12] = uStack_80;
                pf_app_terror_ui_view_foreground(local_70,view_00,uVar8);
                thunk_memcpy(&local_c8,local_70,0x4c);
                uVar8 = thunk_terror_ui_colour(0x2d);
                view_01.words[1] = local_c4;
                view_01.words[0] = (uint)local_c8;
                view_01.words[2] = local_c0;
                view_01.words[4] = uStack_b8;
                view_01.words[3] = uStack_bc;
                view_01.words[5] = uStack_b4;
                view_01.words[6] = uStack_b0;
                view_01.words[7] = uStack_ac;
                view_01.words[8] = uStack_a8;
                view_01.words[9] = uStack_a4;
                view_01.words[10] = uStack_a0;
                view_01.words[0xb] = uStack_9c;
                view_01.words[0xc] = uStack_98;
                view_01.words[0xd] = uStack_94;
                view_01.words[0xe] = uStack_90;
                view_01.words[0xf] = uStack_8c;
                view_01.words[0x10] = uStack_88;
                view_01.words[0x11] = uStack_84;
                view_01.words[0x12] = uStack_80;
                pf_app_terror_ui_view_background(local_70,view_01,uVar8);
                thunk_memcpy(&local_c8,local_70,0x4c);
                thunk_memcpy(local_70,&local_c8,0x4c);
                pvVar10 = (void *)0x0;
                if ((char)param_1[2] == '\0') {
                  pvVar10 = (void *)param_1[1];
                }
                iVar24 = iVar13 * ~uVar7 + local_1f24;
                iVar16 = iVar24 + -0xe;
                pf_app_terror_ui_view_draw((void *)*param_1,local_70,(int)(piVar2 + 1),iVar16,0x24,0x24,
                                   pvVar10);
                uVar9 = 0x12;
                if ((*(char *)(iVar21 + -0xf6) == '\0') &&
                   (uVar9 = 4, *(char *)(iVar21 + -0xf7) != '\0')) {
                  uVar9 = 0x31;
                }
                recovered_10011b3c(param_1,(int)piVar2 + 0x32,iVar16,iVar20 + -0x36,iVar13,
                                   acStack_1f18,uVar9);
                uVar8 = 1;
                if (1 < uVar7) {
                  uVar8 = uVar7;
                }
                iVar21 = iVar22 + -0xc + local_1f24 + iVar13 * ~uVar7;
                pcVar25 = local_1ed8 + uVar18 * 0xf0 + uVar7 * -0xf0;
                do {
                  recovered_10011b3c(param_1,(int)piVar2 + 0x32,iVar21,iVar20 + -0x36,iVar13,pcVar25
                                     ,1);
                  iVar21 = iVar21 + iVar13;
                  uVar8 = uVar8 - 1;
                  pcVar25 = pcVar25 + 0xf0;
                } while (uVar8 != 0);
                local_1f40 = local_1f40 + 1;
                local_1f24 = iVar24 + -0x16;
                uVar6 = uVar6 + 1;
              }
            }
          }
        }
LAB_10010554:
        iVar5 = iVar5 + -0x10c;
        iVar23 = iVar23 + -1;
      } while (iVar23 != 0);
      if (local_1f40 != 0) goto LAB_10010cb8;
    }
    pcVar25 = *(char **)(iVar11 + 0x3dd4);
    if (pcVar25 == (char *)0x0) {
      pcVar25 = (char *)(iVar11 + *(int *)(iVar11 + 0x5b8) * 0x21 + 0x91c);
      pcVar15 = &DAT_10013e01;
      if (*pcVar25 == '\0') {
        pcVar25 = str_10013e06;
      }
    }
    else {
      pcVar15 = str_10013d16;
    }
    thunk_snprintf(local_70,0x38,pcVar15,(uint)pcVar25);
    thunk_snprintf(local_1ed8,0x50,str_10013f05,local_70);
    recovered_10011b3c(param_1,piVar2 + 4,iVar19 + 0x18,iVar20 + -0x20,iVar13,local_1ed8,1);
    recovered_10011b3c(param_1,piVar2 + 4,iVar19 + 0x18 + iVar13 * 2,iVar20 + -0x20,iVar13,
                       str_10013f13,0x31);
  }
LAB_10010cb8:
  iVar22 = *param_1;
  recovered_100126f8((int *)&local_d8,iVar22);
  pcVar25 = *(char **)(iVar22 + 0x3dd4);
  if (pcVar25 == (char *)0x0) {
    pcVar25 = (char *)(iVar22 + *(int *)(iVar22 + 0x5b8) * 0x21 + 0x91c);
    pcVar15 = &DAT_10013e01;
    if (*pcVar25 == '\0') {
      pcVar25 = str_10013e06;
    }
  }
  else {
    pcVar15 = str_10013d16;
  }
  thunk_snprintf(acStack_1f18,0x38,pcVar15,(uint)pcVar25);
  thunk_snprintf(local_1ed8,0x50,str_10013f2f,acStack_1f18);
  iVar20 = local_d0;
  iVar19 = local_d4;
  piVar2 = local_d8;
  bVar26 = false;
  if ((*(uint *)(iVar22 + 0x38c) & 6) == 2) {
    bVar26 = *(int *)(iVar22 + 0x3d64) == 0;
  }
  local_74 = 0;
  local_78 = 0xd;
  local_7c = param_1;
  pf_app_terror_ui_text_field(&local_c8,*(char **)(iVar22 + 0x3ac),(ulong)local_1ed8,bVar26,
                     recovered_1001211c,&local_7c);
  thunk_memcpy(local_70,&local_c8,0x4c);
  iVar22 = iVar20;
  if (0 < iVar20) {
    iVar22 = local_cc;
  }
  if (0 < iVar22) {
    pvVar10 = (void *)0x0;
    if ((char)param_1[2] == '\0') {
      pvVar10 = (void *)param_1[1];
    }
    pf_app_terror_ui_view_draw((void *)*param_1,local_70,(int)piVar2,iVar19,iVar20,local_cc,pvVar10);
  }
  pvVar10 = (void *)0x0;
  local_78 = 8;
  local_74 = 0;
  local_7c = param_1;
  pf_app_terror_ui_button(&local_c8,&DAT_10013f3a,recovered_1001211c,&local_7c);
  thunk_memcpy(local_70,&local_c8,0x4c);
  if (0 < local_cc) {
    if ((char)param_1[2] == '\0') {
      pvVar10 = (void *)param_1[1];
    }
    pf_app_terror_ui_view_draw((void *)*param_1,local_70,(int)piVar2 + iVar20 + 8,iVar19,0x58,local_cc,
                       pvVar10);
  }
  param_1[1] = iVar17;
  recovered_10010ee4(param_1);
  return;
}

#undef DAT_000038c7
#undef DAT_10013119
#undef DAT_100132d9
#undef DAT_10013e01
#undef DAT_10013efe
#undef DAT_10013f00
#undef DAT_10013f3a
#undef EXT_0000000c
#undef str_10013090
#undef str_10013592
#undef str_10013cf5
#undef str_10013d16
#undef str_10013de5
#undef str_10013deb
#undef str_10013df8
#undef str_10013e06
#undef str_10013e0e
#undef str_10013e1c
#undef str_10013e2c
#undef str_10013e3c
#undef str_10013e55
#undef str_10013e68
#undef str_10013e6e
#undef str_10013e75
#undef str_10013e7d
#undef str_10013e8b
#undef str_10013ebe
#undef str_10013ec4
#undef str_10013ecd
#undef str_10013ed4
#undef str_10013edd
#undef str_10013ee3
#undef str_10013ef4
#undef str_10013f05
#undef str_10013f13
#undef str_10013f2f
#undef local_c4
#undef uStack_34
#undef local_c0
#undef uStack_30
#undef local_7c
#undef uStack_2c
#undef local_78
#undef uStack_28
#undef local_74
#undef local_70
#undef acStack_1f18
#undef uStack_bc
#undef uStack_b8
#undef uStack_b4
#undef uStack_b0
#undef uStack_ac
#undef uStack_a8
#undef uStack_a4
#undef uStack_a0
#undef uStack_9c
#undef uStack_98
#undef uStack_94
#undef uStack_90
#undef uStack_8c
#undef uStack_88
#undef uStack_84
#undef uStack_80
#undef local_1f40
#undef uStack_64
#undef local_1f2c
#undef uStack_60
#undef local_1f28
#undef uStack_5c
#undef local_1f24
#undef uStack_58
#undef uStack_54
#undef uStack_50
#undef local_1ed8
#undef uStack_4c
#undef local_d8
#undef uStack_48
#undef local_d4
#undef uStack_44
#undef local_d0
#undef uStack_40
#undef local_cc
#undef uStack_3c
#undef local_c8
#undef uStack_38

#undef DAT_10013d52
#define DAT_10013d52 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xe96U)))
#undef DAT_10013d57
#define DAT_10013d57 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xe9bU)))
#undef str_10013cd9
#define str_10013cd9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xe1dU)))
#undef str_10013cf5
#define str_10013cf5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xe39U)))
#undef str_10013d16
#define str_10013d16 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xe5aU)))
#undef str_10013d1e
#define str_10013d1e (*(char (*)[1])(((uintptr_t)pf_module_state + 0xe62U)))
#undef str_10013d31
#define str_10013d31 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xe75U)))
#undef str_10013d41
#define str_10013d41 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xe85U)))
#undef str_10013d49
#define str_10013d49 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xe8dU)))
#undef str_10013d5b
#define str_10013d5b (*(char (*)[1])(((uintptr_t)pf_module_state + 0xe9fU)))
#undef str_10013d67
#define str_10013d67 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xeabU)))
#undef str_10013d74
#define str_10013d74 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xeb8U)))
#undef str_10013d92
#define str_10013d92 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xed6U)))
#undef str_10013dbf
#define str_10013dbf (*(char (*)[1])(((uintptr_t)pf_module_state + 0xf03U)))
#undef str_10013dd1
#define str_10013dd1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xf15U)))
#undef str_10013dde
#define str_10013dde (*(char (*)[1])(((uintptr_t)pf_module_state + 0xf22U)))
#define local_d0 (*(byte *)(pf_stack_frame + 144))
#define local_cc (*(int * *)(pf_stack_frame + 148))
#define local_c8 (*(undefined4 *)(pf_stack_frame + 152))
#define local_c4 (*(uint *)(pf_stack_frame + 156))
#define local_70 (*(int *)(pf_stack_frame + 240))
#define local_6c (*(int *)(pf_stack_frame + 244))
#define local_68 (*(int *)(pf_stack_frame + 248))
#define local_60 (*(int *)(pf_stack_frame + 256))
#define local_5c (*(int *)(pf_stack_frame + 260))
#define local_58 (*(int *)(pf_stack_frame + 264))
#define local_54 (*(char *)(pf_stack_frame + 268))
#define auStack_c0 (*(undefined1 (*)[192])(pf_stack_frame + 160))
#define local_144 (*(int *)(pf_stack_frame + 28))
#define local_12c (*(int * *)(pf_stack_frame + 52))
#define local_128 (*(undefined4 *)(pf_stack_frame + 56))
#define local_124 (*(undefined4 *)(pf_stack_frame + 60))
#define local_ec (*(int *)(pf_stack_frame + 116))
#define local_e8 (*(int *)(pf_stack_frame + 120))
#define local_e4 (*(int *)(pf_stack_frame + 124))
#define local_e0 (*(int *)(pf_stack_frame + 128))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10010ee4
 */

void recovered_10010ee4(int *param_1)

{
  unsigned char pf_stack_frame[384] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  uint arg3;
  int iVar6;
  int iVar7;
  void *pvVar8;
  uint uVar9;
  undefined *puVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int *piVar14;
  char *pcVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  bool bVar19;

  iVar7 = *param_1;
  piVar14 = (int *)(iVar7 + 0x3d64);
  if (*piVar14 == 0) {
    return;
  }
  recovered_10011904(&local_ec,iVar7);
  uVar4 = thunk_terror_ui_colour(0x2d);
  pf_app_terror_ui_rectangle(auStack_c0,uVar4);
  thunk_memcpy(&local_70,auStack_c0,0x4c);
  iVar5 = local_e4;
  if (0 < local_e4) {
    iVar5 = local_e0;
  }
  if (0 < iVar5) {
    pvVar8 = (void *)0x0;
    if ((char)param_1[2] == '\0') {
      pvVar8 = (void *)param_1[1];
    }
    pf_app_terror_ui_view_draw((void *)*param_1,&local_70,local_ec,local_e8,local_e4,local_e0,pvVar8);
  }
  pcVar15 = str_10013cf5;
  if (*piVar14 == 2) {
    pcVar15 = str_10013cd9;
  }
  iVar5 = 0xc;
  if (0 < *(int *)(iVar7 + 0x3a8)) {
    iVar5 = *(int *)(iVar7 + 0x3a8) + 2;
  }
  recovered_10011b3c(param_1,local_ec + 0x12,local_e8 + 0x10,local_e4 + -0x24,iVar5,pcVar15,1);
  if (*piVar14 == 2) {
    recovered_10011904(&local_70,iVar7);
    iVar11 = local_58;
    iVar17 = local_60;
    iVar1 = local_68;
    iVar18 = local_6c;
    iVar12 = local_70;
    uVar4 = 0;
    local_128 = 0xd;
    local_124 = 0;
    local_12c = param_1;
    pf_app_terror_ui_text_field(auStack_c0,(char *)(iVar7 + 0x3d71),((uintptr_t)pf_module_state + 0xe4aU),'\x01',recovered_1001211c,
                       &local_12c);
    thunk_memcpy(&local_70,auStack_c0,0x4c);
    bVar19 = SBORROW4(iVar1,0x25);
    iVar5 = iVar1 + -0x25;
    if (0x24 < iVar1) {
      bVar19 = SBORROW4(iVar17,1);
      iVar5 = iVar17 + -1;
    }
    if (iVar5 < 0 == bVar19) {
      pvVar8 = (void *)0x0;
      if ((char)param_1[2] == '\0') {
        pvVar8 = (void *)param_1[1];
      }
      pf_app_terror_ui_view_draw((void *)*param_1,&local_70,iVar12 + 0x12,iVar11 + iVar18,iVar1 + -0x24,
                         iVar17,pvVar8);
    }
    uVar9 = 2;
    if (local_d0 != 0) {
      uVar9 = 1;
    }
    do {
      arg3 = recovered_10011d24(iVar7,uVar4 + (*(int *)(iVar7 + 0x3dd8) << (local_d0 ^ 1)));
      uVar4 = uVar4 + 1;
      if (arg3 != 0) {
        thunk_snprintf((char *)&local_12c,0x30,str_10013d16,arg3);
        recovered_10011904(&local_70,iVar7);
        iVar1 = local_58;
        iVar18 = local_60;
        iVar12 = local_6c;
        iVar5 = local_70;
        if ((uVar4 & 0x7ffffffe) == 4) {
          uVar13 = 4;
          if (local_54 != '\0') {
            uVar13 = 3;
          }
          iVar17 = (local_68 + -0x2c) / 2;
        }
        else {
          iVar17 = local_68 + -0x24;
          uVar13 = uVar4;
        }
        local_144 = uVar13 * local_5c;
        local_c8 = 4;
        local_cc = param_1;
        local_c4 = arg3;
        pf_app_terror_ui_button(auStack_c0,(char *)&local_12c,recovered_1001211c,&local_cc);
        thunk_memcpy(&local_70,auStack_c0,0x4c);
        iVar11 = iVar17;
        if (0 < iVar17) {
          iVar11 = iVar18;
        }
        if (0 < iVar11) {
          pvVar8 = (void *)0x0;
          if ((char)param_1[2] == '\0') {
            pvVar8 = (void *)param_1[1];
          }
          pf_app_terror_ui_view_draw((void *)*param_1,&local_70,iVar5 + 0x12,iVar1 + iVar12 + local_144,
                             iVar17,iVar18,pvVar8);
        }
      }
    } while (uVar9 != uVar4);
    iVar5 = recovered_10011d24(iVar7,uVar9);
    if (iVar5 != 0) {
      recovered_10011904(&local_70,iVar7);
      iVar6 = local_58;
      iVar11 = local_5c;
      iVar17 = local_60;
      iVar1 = local_68;
      iVar18 = local_6c;
      iVar12 = local_70;
      local_124 = 0;
      local_128 = 0xf;
      local_12c = param_1;
      pf_app_terror_ui_button(auStack_c0,str_10013d1e,recovered_1001211c,&local_12c);
      thunk_memcpy(&local_70,auStack_c0,0x4c);
      bVar19 = SBORROW4(iVar1,0x25);
      iVar5 = iVar1 + -0x25;
      if (0x24 < iVar1) {
        bVar19 = SBORROW4(iVar17,1);
        iVar5 = iVar17 + -1;
      }
      if (iVar5 < 0 == bVar19) {
        pvVar8 = (void *)0x0;
        if ((char)param_1[2] == '\0') {
          pvVar8 = (void *)param_1[1];
        }
        pf_app_terror_ui_view_draw((void *)*param_1,&local_70,iVar12 + 0x12,
                           iVar11 * (uVar9 + 1) + iVar6 + iVar18,iVar1 + -0x24,iVar17,pvVar8);
      }
    }
  }
  else {
    thunk_snprintf((char *)&local_12c,0x40,str_10013d31,*(uint *)(iVar7 + 0x3d6c));
    recovered_10011904(&local_70,iVar7);
    iVar11 = local_58;
    iVar17 = local_60;
    iVar1 = local_68;
    iVar18 = local_6c;
    iVar12 = local_70;
    local_c4 = 0;
    local_c8 = 0xb;
    local_cc = param_1;
    pf_app_terror_ui_button(auStack_c0,(char *)&local_12c,recovered_1001211c,&local_cc);
    thunk_memcpy(&local_70,auStack_c0,0x4c);
    bVar19 = SBORROW4(iVar1,0x2e);
    iVar5 = iVar1 + -0x2e;
    if (0x2d < iVar1) {
      bVar19 = SBORROW4(iVar17,1);
      iVar5 = iVar17 + -1;
    }
    iVar1 = (iVar1 + -0x2c) / 2;
    if (iVar5 < 0 == bVar19) {
      pvVar8 = (void *)0x0;
      if ((char)param_1[2] == '\0') {
        pvVar8 = (void *)param_1[1];
      }
      pf_app_terror_ui_view_draw((void *)*param_1,&local_70,iVar12 + 0x12,iVar11 + iVar18,iVar1,iVar17,
                         pvVar8);
    }
    pcVar15 = str_10013d49;
    if (*(byte *)(iVar7 + 0x3d70) != 0) {
      pcVar15 = str_10013d41;
    }
    recovered_10011ee0(param_1,iVar12 + iVar1 + 0x1a,iVar11 + iVar18,iVar1,iVar17,pcVar15,0xc,0,
                       (uint)*(byte *)(iVar7 + 0x3d70));
    iVar5 = 1;
    do {
      recovered_10011904(&local_70,iVar7);
      iVar1 = local_60;
      iVar18 = local_68;
      iVar12 = local_70;
      iVar17 = local_5c * iVar5 + local_58 + local_6c;
      local_144 = local_70 + 0x12;
      if (local_d0 == 0) {
        pcVar15 = str_10013d5b;
        iVar18 = local_68 + -0x24;
        if (iVar5 == 1) {
          pcVar15 = &DAT_10013d52;
        }
        iVar12 = 0xc;
        if (0 < *(int *)(iVar7 + 0x3a8)) {
          iVar12 = *(int *)(iVar7 + 0x3a8) + 2;
        }
        recovered_10011b3c(param_1,local_144,iVar17 - iVar12,iVar18,iVar12,pcVar15,0x31);
      }
      else {
        puVar10 = &DAT_10013d57;
        if (iVar5 == 1) {
          puVar10 = &DAT_10013d52;
        }
        iVar11 = 0xc;
        if (0 < *(int *)(iVar7 + 0x3a8)) {
          iVar11 = *(int *)(iVar7 + 0x3a8) + 2;
        }
        recovered_10011b3c(param_1,local_144,iVar17 + (local_60 - iVar11) / 2,0x40,iVar11,puVar10,
                           0x31);
        local_144 = iVar12 + 0x5a;
        iVar18 = iVar18 + -0x6c;
      }
      local_c4 = 0;
      local_c8 = 0xe;
      if (iVar5 == 1) {
        local_c8 = 0xd;
      }
      pcVar15 = str_10013d74;
      if (iVar5 == 1) {
        pcVar15 = str_10013d67;
      }
      iVar12 = 0x3d92;
      if (iVar5 == 1) {
        iVar12 = 0x3d71;
      }
      local_cc = param_1;
      pf_app_terror_ui_text_field(auStack_c0,(char *)(iVar7 + iVar12),(ulong)pcVar15,
                         (iVar5 == 1) != (*(int *)(iVar7 + 0x3d68) != 0),recovered_1001211c,
                         &local_cc);
      thunk_memcpy(&local_70,auStack_c0,0x4c);
      iVar12 = iVar18;
      if (0 < iVar18) {
        iVar12 = iVar1;
      }
      if (0 < iVar12) {
        pvVar8 = (void *)0x0;
        if ((char)param_1[2] == '\0') {
          pvVar8 = (void *)param_1[1];
        }
        pf_app_terror_ui_view_draw((void *)*param_1,&local_70,local_144,iVar17,iVar18,iVar1,pvVar8);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 != 3);
    if (local_d0 == 0) {
      recovered_10011904(&local_70,iVar7);
      recovered_10011b3c(param_1,local_70 + 0x12,local_58 + local_6c + (uintptr_t)(uintptr_t)local_5c * 3,local_68 + -0x24
                         ,local_60,str_10013d92,0x31);
    }
  }
  recovered_10011904(&local_70,iVar7);
  cVar3 = local_54;
  iVar11 = local_58;
  iVar17 = local_5c;
  iVar1 = local_60;
  iVar18 = local_68;
  iVar12 = local_6c;
  iVar5 = local_70;
  local_124 = 0;
  local_128 = 9;
  pcVar15 = str_10013dd1;
  if (*piVar14 == 2) {
    pcVar15 = str_10013dbf;
  }
  local_12c = param_1;
  pf_app_terror_ui_button(auStack_c0,pcVar15,recovered_1001211c,&local_12c);
  thunk_memcpy(&local_70,auStack_c0,0x4c);
  iVar6 = 4;
  if (cVar3 != '\0') {
    iVar6 = 3;
  }
  bVar19 = SBORROW4(iVar18,0x2e);
  iVar2 = iVar18 + -0x2e;
  iVar16 = 4;
  if (0x2d < iVar18) {
    bVar19 = SBORROW4(iVar1,1);
    iVar2 = iVar1 + -1;
  }
  if (iVar2 < 0 == bVar19) {
    pvVar8 = (void *)0x0;
    if ((char)param_1[2] == '\0') {
      pvVar8 = (void *)param_1[1];
    }
    pf_app_terror_ui_view_draw((void *)*param_1,&local_70,iVar5 + 0x12,iVar6 * iVar17 + iVar11 + iVar12,
                       (iVar18 + -0x2c) / 2,iVar1,pvVar8);
  }
  recovered_10011904(&local_70,iVar7);
  local_124 = 0;
  local_128 = 10;
  local_12c = param_1;
  pf_app_terror_ui_button(auStack_c0,str_10013dde,recovered_1001211c,&local_12c);
  thunk_memcpy(&local_70,auStack_c0,0x4c);
  if (local_54 != '\0') {
    iVar16 = 3;
  }
  bVar19 = SBORROW4(local_68,0x2e);
  iVar7 = local_68 + -0x2e;
  if (0x2d < local_68) {
    bVar19 = SBORROW4(local_60,1);
    iVar7 = local_60 + -1;
  }
  if (iVar7 < 0 == bVar19) {
    pvVar8 = (void *)0x0;
    iVar7 = (local_68 + -0x2c) / 2;
    if ((char)param_1[2] == '\0') {
      pvVar8 = (void *)param_1[1];
    }
    pf_app_terror_ui_view_draw((void *)*param_1,&local_70,local_70 + iVar7 + 0x1a,
                       iVar16 * local_5c + local_58 + local_6c,iVar7,local_60,pvVar8);
  }
  return;
}

#undef DAT_10013d52
#undef DAT_10013d57
#undef str_10013cd9
#undef str_10013cf5
#undef str_10013d16
#undef str_10013d1e
#undef str_10013d31
#undef str_10013d41
#undef str_10013d49
#undef str_10013d5b
#undef str_10013d67
#undef str_10013d74
#undef str_10013d92
#undef str_10013dbf
#undef str_10013dd1
#undef str_10013dde
#undef local_d0
#undef local_cc
#undef local_c8
#undef local_c4
#undef local_70
#undef local_6c
#undef local_68
#undef local_60
#undef local_5c
#undef local_58
#undef local_54
#undef auStack_c0
#undef local_144
#undef local_12c
#undef local_128
#undef local_124
#undef local_ec
#undef local_e8
#undef local_e4
#undef local_e0

#define local_34 (*(int *)(pf_stack_frame + 28))
#define local_30 (*(int *)(pf_stack_frame + 32))
#define local_2c (*(int *)(pf_stack_frame + 36))
#define local_28 (*(uint *)(pf_stack_frame + 40))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10011904
 */

void recovered_10011904(int *param_1,int param_2)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;

  recovered_1000c280(&local_30,param_2);
  if (param_2 == 0) {
    iVar2 = 0x2e;
    iVar1 = 0x1c;
    param_1[6] = 0x2e;
    param_1[4] = 0x1c;
    if ((int)local_28 < 0x188) {
      local_34 = 0x230;
    }
    else {
      uVar3 = local_28;
      if (0x24f < local_28) {
        uVar3 = 0x250;
      }
      local_34 = uVar3 - 0x20;
    }
    iVar4 = 400;
    goto LAB_10011a00;
  }
  iVar1 = *(int *)(param_2 + 0x3a8);
  uVar3 = local_28;
  if (iVar1 < 1) {
    iVar2 = 0x2e;
    iVar1 = 0x1c;
    param_1[6] = 0x2e;
    param_1[4] = 0x1c;
    if ((int)local_28 < 0x188) goto LAB_100119b4;
    if (0x24f < local_28) {
      uVar3 = 0x250;
    }
  }
  else {
    iVar2 = iVar1 + 0x24;
    iVar1 = iVar1 + 0x12;
    param_1[6] = iVar2;
    param_1[4] = iVar1;
    if ((int)local_28 < 0x188) {
LAB_100119b4:
      uVar3 = *(uint *)(param_2 + 4);
      if (*(uint *)(param_2 + 4) == 0) {
        uVar3 = 0x2f8;
      }
    }
    if (0x24f < (int)uVar3) {
      uVar3 = 0x250;
    }
  }
  iVar4 = *(int *)(param_2 + 8);
  local_34 = uVar3 - 0x20;
  if (iVar4 == 0) {
    iVar4 = 400;
  }
LAB_10011a00:
  iVar6 = 5;
  iVar7 = (iVar4 - local_2c) + -0xc;
  iVar4 = 0x14;
  iVar5 = (uintptr_t)iVar1 * 5 + iVar2 + 0x62;
  if (iVar7 < iVar5) {
    iVar6 = 4;
    iVar4 = 8;
  }
  iVar2 = iVar6 * iVar1 + iVar2;
  iVar6 = iVar6 + -1;
  *(bool *)(param_1 + 7) = iVar7 < iVar5;
  iVar8 = iVar2 + 0x12;
  iVar5 = (int)(short)iVar6 * (int)(short)iVar4 + iVar8;
  if (iVar7 < iVar5) {
    if (param_2 == 0) {
      iVar7 = 0x178;
    }
    else {
      iVar7 = *(int *)(param_2 + 8) + -0x18;
      if (*(int *)(param_2 + 8) == 0) {
        iVar7 = 0x178;
      }
    }
    iVar2 = recovered_10003fa8((iVar7 - iVar2) + -0x12,iVar6);
    if (iVar2 < iVar4) {
      iVar4 = iVar2;
    }
    if (iVar2 < 0) {
      iVar4 = 0;
    }
    iVar5 = iVar4 * iVar6 + iVar8;
    local_2c = 0xc;
  }
  param_1[5] = iVar4 + iVar1;
  if ((int)local_28 < local_34) {
    if (param_2 == 0) {
      iVar1 = 0x2f8;
    }
    else {
      iVar1 = *(int *)(param_2 + 4);
      if (iVar1 == 0) {
        iVar1 = 0x2f8;
      }
    }
    iVar1 = iVar1 - local_34;
    local_30 = iVar1 - (iVar1 >> 0x1f);
    iVar1 = iVar1 / 2;
  }
  else {
    iVar1 = local_30 + (int)(local_28 - local_34) / 2;
  }
  iVar2 = 0;
  if (iVar5 < iVar7) {
    local_30 = iVar7 - iVar5;
  }
  param_1[3] = iVar5;
  param_1[2] = local_34;
  if (iVar5 < iVar7) {
    local_30 = local_30 - (local_30 >> 0x1f);
  }
  *param_1 = iVar1;
  if (iVar5 < iVar7) {
    iVar2 = local_30 >> 1;
  }
  param_1[1] = iVar2 + local_2c;
  return;
}

#undef local_34
#undef local_30
#undef local_2c
#undef local_28

#define local_70 (*(undefined1 (*)[112])(pf_stack_frame + 96))
#define uStack_b4 (*(undefined4 *)(pf_stack_frame + 28))
#define uStack_b0 (*(undefined4 *)(pf_stack_frame + 32))
#define uStack_ac (*(undefined4 *)(pf_stack_frame + 36))
#define uStack_a8 (*(undefined4 *)(pf_stack_frame + 40))
#define uStack_a4 (*(undefined4 *)(pf_stack_frame + 44))
#define uStack_a0 (*(undefined4 *)(pf_stack_frame + 48))
#define uStack_9c (*(undefined4 *)(pf_stack_frame + 52))
#define uStack_98 (*(undefined4 *)(pf_stack_frame + 56))
#define uStack_94 (*(undefined4 *)(pf_stack_frame + 60))
#define uStack_90 (*(undefined4 *)(pf_stack_frame + 64))
#define uStack_8c (*(undefined4 *)(pf_stack_frame + 68))
#define uStack_88 (*(undefined4 *)(pf_stack_frame + 72))
#define uStack_84 (*(undefined4 *)(pf_stack_frame + 76))
#define uStack_80 (*(undefined4 *)(pf_stack_frame + 80))
#define uStack_7c (*(undefined4 *)(pf_stack_frame + 84))
#define uStack_78 (*(undefined4 *)(pf_stack_frame + 88))
#define uStack_64 (*(undefined4 *)(pf_stack_frame + 108))
#define uStack_60 (*(undefined4 *)(pf_stack_frame + 112))
#define uStack_5c (*(undefined4 *)(pf_stack_frame + 116))
#define uStack_58 (*(undefined4 *)(pf_stack_frame + 120))
#define uStack_54 (*(undefined4 *)(pf_stack_frame + 124))
#define uStack_50 (*(undefined4 *)(pf_stack_frame + 128))
#define uStack_4c (*(undefined4 *)(pf_stack_frame + 132))
#define uStack_48 (*(undefined4 *)(pf_stack_frame + 136))
#define uStack_44 (*(undefined4 *)(pf_stack_frame + 140))
#define uStack_40 (*(undefined4 *)(pf_stack_frame + 144))
#define uStack_3c (*(undefined4 *)(pf_stack_frame + 148))
#define uStack_38 (*(undefined4 *)(pf_stack_frame + 152))
#define uStack_34 (*(undefined4 *)(pf_stack_frame + 156))
#define uStack_30 (*(undefined4 *)(pf_stack_frame + 160))
#define uStack_2c (*(undefined4 *)(pf_stack_frame + 164))
#define uStack_28 (*(undefined4 *)(pf_stack_frame + 168))
#define local_c0 (*(undefined1 (*)[192])(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10011b3c
 */

void recovered_10011b3c(undefined4 *param_1,int param_2,int param_3,int param_4,int param_5,
                       char *param_6,uint param_7)

{
  unsigned char pf_stack_frame[240] __attribute__((aligned(16))) = {0};

  PFUiView view;
  PFUiView view_00;
  int iVar1;
  int height;
  uint value;
  int extraout_r1 = 0;
  void *input;

  pf_app_terror_ui_text(local_70,param_6);
  value = thunk_terror_ui_colour(param_7);
  view.words[4] = uStack_60;
  view.words[3] = uStack_64;
  view.words[5] = uStack_5c;
  view.words[6] = uStack_58;
  view.words[7] = uStack_54;
  view.words[8] = uStack_50;
  view.words[9] = uStack_4c;
  view.words[10] = uStack_48;
  view.words[0xb] = uStack_44;
  view.words[0xc] = uStack_40;
  view.words[0xd] = uStack_3c;
  view.words[0xe] = uStack_38;
  view.words[0xf] = uStack_34;
  view.words[0x10] = uStack_30;
  view.words[0x11] = uStack_2c;
  view.words[0x12] = uStack_28;
  view.words[0] = PF_PART4(local_70, 0);
  view.words[1] = PF_PART4(local_70, 4);
  view.words[2] = PF_PART4(local_70, 8);
  pf_app_terror_ui_view_foreground(local_c0,view,value);
  view_00.words[4] = uStack_b0;
  view_00.words[3] = uStack_b4;
  view_00.words[5] = uStack_ac;
  view_00.words[6] = uStack_a8;
  view_00.words[7] = uStack_a4;
  view_00.words[8] = uStack_a0;
  view_00.words[9] = uStack_9c;
  view_00.words[10] = uStack_98;
  view_00.words[0xb] = uStack_94;
  view_00.words[0xc] = uStack_90;
  view_00.words[0xd] = uStack_8c;
  view_00.words[0xe] = uStack_88;
  view_00.words[0xf] = uStack_84;
  view_00.words[0x10] = uStack_80;
  view_00.words[0x11] = uStack_7c;
  view_00.words[0x12] = uStack_78;
  view_00.words[0] = PF_PART4(local_c0, 0);
  view_00.words[1] = PF_PART4(local_c0, 4);
  view_00.words[2] = PF_PART4(local_c0, 8);
  pf_app_terror_ui_view_alignment(local_70,view_00,3);
  thunk_memcpy(local_c0,local_70,0x4c);
  thunk_memcpy(local_70,local_c0,0x4c);
  iVar1 = param_4;
  height = extraout_r1;
  if (0 < param_4) {
    iVar1 = param_5;
    height = param_5;
  }
  if (0 < iVar1) {
    input = (void *)0x0;
    if (*(char *)(param_1 + 2) == '\0') {
      input = (void *)param_1[1];
    }
    pf_app_terror_ui_view_draw((void *)*param_1,local_70,param_2,param_3,param_4,height,input);
  }
  return;
}

#undef local_70
#undef uStack_b4
#undef uStack_b0
#undef uStack_ac
#undef uStack_a8
#undef uStack_a4
#undef uStack_a0
#undef uStack_9c
#undef uStack_98
#undef uStack_94
#undef uStack_90
#undef uStack_8c
#undef uStack_88
#undef uStack_84
#undef uStack_80
#undef uStack_7c
#undef uStack_78
#undef uStack_64
#undef uStack_60
#undef uStack_5c
#undef uStack_58
#undef uStack_54
#undef uStack_50
#undef uStack_4c
#undef uStack_48
#undef uStack_44
#undef uStack_40
#undef uStack_3c
#undef uStack_38
#undef uStack_34
#undef uStack_30
#undef uStack_2c
#undef uStack_28
#undef local_c0

#define local_24 (*(int *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10011d24
 */

int recovered_10011d24(int param_1,int param_2)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;

  iVar7 = *(int *)(param_1 + 0x808);
  local_24 = 0;
  if (iVar7 != 0) {
    iVar6 = 0;
    do {
      iVar3 = *(int *)(param_1 + 0x704 + iVar6 * 4);
      if (1 < iVar3 + 1U) {
        if (iVar6 != 0) {
          iVar4 = 0;
          do {
            if (*(int *)(param_1 + 0x704 + iVar4 * 4) == iVar3) goto LAB_10011d64;
            iVar4 = iVar4 + 1;
          } while (iVar6 != iVar4);
        }
        if (local_24 == param_2) {
          return iVar3;
        }
        local_24 = local_24 + 1;
      }
LAB_10011d64:
      iVar6 = iVar6 + 1;
    } while (iVar6 != iVar7);
  }
  uVar8 = *(uint *)(param_1 + 0x3d58);
  if (uVar8 != 0) {
    uVar5 = uVar8;
    do {
      iVar6 = uVar5 * 0x10c + *(int *)(param_1 + 0x3c48);
      iVar3 = -0x108;
      if (*(char *)(iVar6 + -0xf8) != '\0') {
        iVar3 = -0x104;
      }
      if (*(int *)(iVar6 + -0x10c) == *(int *)(param_1 + 0x568)) {
        iVar3 = *(int *)(iVar6 + iVar3);
        iVar6 = iVar7;
        piVar1 = (int *)(param_1 + 0x704);
        if (1 < iVar3 + 1U) {
          while( true ) {
            uVar2 = uVar8;
            iVar4 = uVar8 * 0x10c + *(int *)(param_1 + 0x3c48);
            if (iVar6 == 0) break;
            if (*piVar1 == iVar3) goto LAB_10011df4;
            iVar6 = iVar6 + -1;
            piVar1 = piVar1 + 1;
          }
          for (; uVar5 < uVar2; uVar2 = uVar2 - 1) {
            if (*(int *)(iVar4 + -0x10c) == *(int *)(param_1 + 0x568)) {
              iVar6 = -0x108;
              if (*(char *)(iVar4 + -0xf8) != '\0') {
                iVar6 = -0x104;
              }
              if (*(int *)(iVar4 + iVar6) == iVar3) goto LAB_10011df4;
            }
            iVar4 = iVar4 + -0x10c;
          }
          if (local_24 == param_2) {
            return iVar3;
          }
          local_24 = local_24 + 1;
        }
      }
LAB_10011df4:
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  return 0;
}

#undef local_24

#define local_c8 (*(undefined1 (*)[200])(pf_stack_frame + 24))
#define local_7c (*(undefined4 * *)(pf_stack_frame + 100))
#define local_78 (*(undefined4 *)(pf_stack_frame + 104))
#define local_74 (*(undefined4 *)(pf_stack_frame + 108))
#define uStack_bc (*(undefined4 *)(pf_stack_frame + 36))
#define uStack_b8 (*(undefined4 *)(pf_stack_frame + 40))
#define uStack_b4 (*(undefined4 *)(pf_stack_frame + 44))
#define uStack_b0 (*(undefined4 *)(pf_stack_frame + 48))
#define uStack_ac (*(undefined4 *)(pf_stack_frame + 52))
#define uStack_a8 (*(undefined4 *)(pf_stack_frame + 56))
#define uStack_a4 (*(undefined4 *)(pf_stack_frame + 60))
#define uStack_a0 (*(undefined4 *)(pf_stack_frame + 64))
#define uStack_9c (*(undefined4 *)(pf_stack_frame + 68))
#define uStack_98 (*(undefined4 *)(pf_stack_frame + 72))
#define uStack_94 (*(undefined4 *)(pf_stack_frame + 76))
#define uStack_90 (*(undefined4 *)(pf_stack_frame + 80))
#define uStack_8c (*(undefined4 *)(pf_stack_frame + 84))
#define uStack_88 (*(undefined4 *)(pf_stack_frame + 88))
#define uStack_84 (*(undefined4 *)(pf_stack_frame + 92))
#define uStack_80 (*(undefined4 *)(pf_stack_frame + 96))
#define auStack_70 (*(undefined1 (*)[112])(pf_stack_frame + 112))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10011ee0
 */

void recovered_10011ee0(undefined4 *param_1,int param_2,int param_3,int param_4,int param_5,
                       char *param_6,undefined4 param_7,undefined4 param_8,int param_9)

{
  unsigned char pf_stack_frame[256] __attribute__((aligned(16))) = {0};

  PFUiView view;
  PFUiView view_00;
  int iVar1;
  int height;
  uint uVar2;
  int extraout_r1 = 0;
  void *input;

  local_74 = param_8;
  local_78 = param_7;
  local_7c = param_1;
  pf_app_terror_ui_button(local_c8,param_6,recovered_1001211c,&local_7c);
  if (param_9 != 0) {
    uVar2 = thunk_terror_ui_colour(0x2b);
    view.words[4] = uStack_b8;
    view.words[3] = uStack_bc;
    view.words[5] = uStack_b4;
    view.words[6] = uStack_b0;
    view.words[7] = uStack_ac;
    view.words[8] = uStack_a8;
    view.words[9] = uStack_a4;
    view.words[10] = uStack_a0;
    view.words[0xb] = uStack_9c;
    view.words[0xc] = uStack_98;
    view.words[0xd] = uStack_94;
    view.words[0xe] = uStack_90;
    view.words[0xf] = uStack_8c;
    view.words[0x10] = uStack_88;
    view.words[0x11] = uStack_84;
    view.words[0x12] = uStack_80;
    view.words[0] = PF_PART4(local_c8, 0);
    view.words[1] = PF_PART4(local_c8, 4);
    view.words[2] = PF_PART4(local_c8, 8);
    pf_app_terror_ui_view_background(auStack_70,view,uVar2);
    thunk_memcpy(local_c8,auStack_70,0x4c);
    uVar2 = thunk_terror_ui_colour(0xe);
    view_00.words[4] = uStack_b8;
    view_00.words[3] = uStack_bc;
    view_00.words[5] = uStack_b4;
    view_00.words[6] = uStack_b0;
    view_00.words[7] = uStack_ac;
    view_00.words[8] = uStack_a8;
    view_00.words[9] = uStack_a4;
    view_00.words[10] = uStack_a0;
    view_00.words[0xb] = uStack_9c;
    view_00.words[0xc] = uStack_98;
    view_00.words[0xd] = uStack_94;
    view_00.words[0xe] = uStack_90;
    view_00.words[0xf] = uStack_8c;
    view_00.words[0x10] = uStack_88;
    view_00.words[0x11] = uStack_84;
    view_00.words[0x12] = uStack_80;
    view_00.words[0] = PF_PART4(local_c8, 0);
    view_00.words[1] = PF_PART4(local_c8, 4);
    view_00.words[2] = PF_PART4(local_c8, 8);
    pf_app_terror_ui_view_foreground(auStack_70,view_00,uVar2);
    thunk_memcpy(local_c8,auStack_70,0x4c);
  }
  thunk_memcpy(auStack_70,local_c8,0x4c);
  iVar1 = param_4;
  height = extraout_r1;
  if (0 < param_4) {
    iVar1 = param_5;
    height = param_5;
  }
  if (0 < iVar1) {
    input = (void *)0x0;
    if (*(char *)(param_1 + 2) == '\0') {
      input = (void *)param_1[1];
    }
    pf_app_terror_ui_view_draw((void *)*param_1,auStack_70,param_2,param_3,param_4,height,input);
  }
  return;
}

#undef local_c8
#undef local_7c
#undef local_78
#undef local_74
#undef uStack_bc
#undef uStack_b8
#undef uStack_b4
#undef uStack_b0
#undef uStack_ac
#undef uStack_a8
#undef uStack_a4
#undef uStack_a0
#undef uStack_9c
#undef uStack_98
#undef uStack_94
#undef uStack_90
#undef uStack_8c
#undef uStack_88
#undef uStack_84
#undef uStack_80
#undef auStack_70

#undef DAT_100132d9
#define DAT_100132d9 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x41dU)))
#undef str_10013de5
#define str_10013de5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xf29U)))
#define local_1c (*(byte *)(pf_stack_frame + 52))
#define aiStack_38 (*(int (*)[14])(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001211c
 */

void recovered_1001211c(int *param_1)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  uint uVar12;
  bool bVar13;

  puVar2 = (uint *)*param_1;
  if ((char)puVar2[2] != '\0') {
    return;
  }
  uVar4 = param_1[1];
  uVar12 = *puVar2;
  *(undefined1 *)(puVar2 + 2) = 1;
  if (0x10 < uVar4) {
    return;
  }
  piVar11 = (int *)(uVar12 + 0x38b8);
  switch((uintptr_t)(uVar4)) {
  case 0:
    iVar7 = *(int *)(uVar12 + 0x56c);
    if (iVar7 != 0) {
      iVar6 = 0;
      iVar10 = 0;
      do {
        iVar1 = iVar10 * 4;
        iVar8 = iVar10 - iVar7;
        iVar10 = iVar10 + 1;
        iVar9 = 0;
        if (iVar8 != -1) {
          iVar9 = iVar10;
        }
        if (*(int *)(uVar12 + iVar1 + 0x570) == *(int *)(uVar12 + 0x568)) {
          iVar6 = iVar9;
        }
      } while (iVar10 != iVar7);
      recovered_10012660(uVar12,*(undefined4 *)(uVar12 + 0x570 + iVar6 * 4));
      return;
    }
  case 7:
    *(undefined1 *)(uVar12 + 0x38c4) = 1;
    break;
  case 1:
    uVar4 = param_1[2];
    if (7 < (uint)param_1[2]) {
      return;
    }
    goto LAB_100123e8;
  case 2:
    uVar4 = *(uint *)(uVar12 + 0x5b8);
    uVar3 = 1;
    if (1 < uVar4) {
      uVar3 = uVar4;
    }
    if ((uVar4 == 0) && (uVar4 = 1, *(char *)(uVar12 + 0xa2d) != '\0')) {
      if (*(char *)(uVar12 + 0xa2e) == '\0') {
        uVar4 = 2;
      }
      else if (*(char *)(uVar12 + 0xa2f) == '\0') {
        uVar4 = 3;
      }
      else if (*(char *)(uVar12 + 0xa30) == '\0') {
        uVar4 = 4;
      }
      else if (*(char *)(uVar12 + 0xa31) == '\0') {
        uVar4 = 5;
      }
      else if (*(char *)(uVar12 + 0xa32) == '\0') {
        uVar4 = 6;
      }
      else {
        uVar4 = uVar3;
        if (*(char *)(uVar12 + 0xa33) == '\0') {
          uVar4 = 7;
        }
      }
    }
    *(uint *)(uVar12 + 0x3d6c) = uVar4;
    *(undefined1 *)(uVar12 + 0x3d70) = 1;
    *(undefined4 *)(uVar12 + 0x3d64) = 1;
    *(undefined4 *)(uVar12 + 0x3d68) = 0;
    thunk_snprintf((char *)(uVar12 + 0x3d71),0x21,&DAT_100132d9,
                       (void *)(uVar12 + uVar4 * 0x21 + 0x91c));
    *(undefined1 *)(uVar12 + 0x3d92) = 0;
    break;
  case 3:
    *(undefined4 *)(uVar12 + 0x3d64) = 2;
    *(undefined4 *)(uVar12 + 0x3dd8) = 0;
    if (*(uint *)(uVar12 + 0x3dd4) != 0) {
      thunk_snprintf((char *)(uVar12 + 0x3d71),0x21,str_10013de5,*(uint *)(uVar12 + 0x3dd4));
      return;
    }
    *(char *)(uVar12 + 0x3d71) = '\0';
    break;
  case 4:
    iVar7 = param_1[2];
    iVar6 = *piVar11;
    *(undefined4 *)(uVar12 + 0x5c0) = 0;
    *(undefined4 *)(uVar12 + 0x3d64) = 0;
    *(int *)(uVar12 + 0x3dd4) = iVar7;
    goto LAB_100124c0;
  case 5:
    iVar7 = *(int *)(uVar12 + 0x3d58);
    if (iVar7 != 0) {
      uVar4 = 0;
      piVar11 = (int *)(*(int *)(uVar12 + 0x3c48) + 0x10);
      do {
        if (piVar11[-4] == *(int *)(uVar12 + 0x568)) {
          if (*(int *)(uVar12 + 0x3dd4) == 0) {
            iVar6 = *(int *)(uVar12 + 0x5b8);
            bVar13 = *piVar11 == iVar6;
            if (bVar13) {
              iVar6 = piVar11[-2];
            }
            if (bVar13 && iVar6 == -1) {
              uVar4 = uVar4 + 1;
            }
          }
          else {
            iVar6 = piVar11[-2];
            if ((char)piVar11[1] != '\x01') {
              if (iVar6 == -1) goto LAB_10012500;
              iVar6 = piVar11[-3];
            }
            if (iVar6 == *(int *)(uVar12 + 0x3dd4)) {
              uVar4 = uVar4 + 1;
            }
          }
        }
LAB_10012500:
        piVar11 = piVar11 + 0x43;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
      uVar3 = *(int *)(uVar12 + 0x5c0) + 1;
      if (uVar3 < uVar4) {
        *(uint *)(uVar12 + 0x5c0) = uVar3;
      }
    }
    break;
  case 6:
    *(undefined4 *)(uVar12 + 0x5c0) = 0;
    break;
  case 8:
    iVar7 = recovered_1000c440(uVar12,*(byte **)(uVar12 + 0x3ac));
    if (iVar7 != 0) {
      if (*(undefined1 **)(uVar12 + 0x3ac) != (undefined1 *)0x0) {
        **(undefined1 **)(uVar12 + 0x3ac) = 0;
      }
      *(undefined4 *)(uVar12 + 0x3b0) = 0;
    }
    break;
  case 9:
    recovered_1000ed44(uVar12);
    return;
  case 10:
    *(undefined4 *)(uVar12 + 0x3d64) = 0;
    thunk_memset((void *)(uVar12 + 0x3d92),0,0x41);
    return;
  case 0xb:
    *(undefined1 *)(uVar12 + 0x3d70) = 1;
    iVar7 = *(uint *)(uVar12 + 0x3d6c) % 7 + 1;
    *(int *)(uVar12 + 0x3d6c) = iVar7;
    thunk_snprintf((char *)(uVar12 + 0x3d71),0x21,&DAT_100132d9,
                       (void *)(uVar12 + iVar7 * 0x21 + 0x91c));
    *(undefined1 *)(uVar12 + 0x3d92) = 0;
    break;
  case 0xc:
    *(byte *)(uVar12 + 0x3d70) = *(byte *)(uVar12 + 0x3d70) ^ 1;
    break;
  case 0xd:
    *(undefined4 *)(uVar12 + 0x3d68) = 0;
    break;
  case 0xe:
    *(undefined4 *)(uVar12 + 0x3d68) = 1;
    break;
  case 0xf:
    recovered_10011904(aiStack_38,uVar12);
    iVar10 = *(int *)(uVar12 + 0x3dd8) + 1;
    iVar6 = recovered_10011d24(uVar12,iVar10 << (local_1c ^ 1));
    iVar7 = 0;
    if (iVar6 != 0) {
      iVar7 = iVar10;
    }
    *(int *)(uVar12 + 0x3dd8) = iVar7;
    break;
  case 0x10:
    uVar5 = *(uint *)(uVar12 + 0x5b8);
    uVar3 = uVar5 & 7;
    uVar4 = uVar5 + 1 & 7;
    if (uVar3 != 7) {
      iVar7 = uVar12 + 0xa2c;
      if (*(char *)(iVar7 + uVar4) == '\0') {
        uVar4 = uVar5 + 2 & 7;
        if ((uVar3 != 6) && (*(char *)(iVar7 + uVar4) == '\0')) {
          uVar4 = uVar5 + 3 & 7;
          if ((uVar3 != 5) && (*(char *)(iVar7 + uVar4) == '\0')) {
            uVar4 = uVar3 ^ 4;
            if ((uVar3 != 4) && (*(char *)(iVar7 + uVar4) == '\0')) {
              uVar4 = uVar5 + 5 & 7;
              if ((uVar3 != 3) && (*(char *)(iVar7 + uVar4) == '\0')) {
                uVar4 = uVar5 + 6 & 7;
                if ((uVar3 != 2) && (*(char *)(iVar7 + uVar4) == '\0')) {
                  uVar4 = uVar5 - 1 & 7;
                  if ((uVar3 != 1) && (*(char *)(iVar7 + uVar4) == '\0')) {
                    uVar4 = uVar3;
                  }
                }
              }
            }
          }
        }
      }
    }
LAB_100123e8:
    iVar6 = *piVar11;
    *(undefined4 *)(uVar12 + 0x3dd4) = 0;
    *(uint *)(uVar12 + 0x5b8) = uVar4;
    *(undefined4 *)(uVar12 + 0x5c0) = 0;
LAB_100124c0:
    *piVar11 = iVar6 + 1;
  }
  return;
}

#undef DAT_100132d9
#undef str_10013de5
#undef local_1c
#undef aiStack_38

#undef DAT_000038c7
#define DAT_000038c7 (*(uint8_t *)(0x38c7U))
#undef DAT_100140a4
#define DAT_100140a4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x11e8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10012660
 */

void recovered_10012660(int param_1,undefined4 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  DAT_100140a4 = param_2;
  *(undefined4 *)(param_1 + 0x5c0) = 0;
  *(undefined4 *)(param_1 + 0x568) = param_2;
  *(undefined4 *)(param_1 + 0x808) = 0;
  *(int *)(param_1 + 0x38b8) = *(int *)(param_1 + 0x38b8) + 1;
  *(undefined1 *)(param_1 + 0x540) = 0;
  (&DAT_000038c7)[param_1] = 0;
  thunk_memset((void *)(param_1 + 0x91c),0,0x108);
  thunk_memset((void *)(param_1 + 0xa2c),0,8);
  *(undefined1 *)(param_1 + 0x38c4) = 1;
  return;
}

#undef DAT_000038c7
#undef DAT_100140a4

#undef DAT_100140a0
#define DAT_100140a0 (*(int *)(((uintptr_t)pf_module_state + 0x11e4U)))
#define local_14 (*(int *)(pf_stack_frame + 28))
#define local_20 (*(int *)(pf_stack_frame + 16))
#define local_1c (*(int *)(pf_stack_frame + 20))
#define local_18 (*(int *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100126f8
 */

void recovered_100126f8(int *param_1,int param_2)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;

  recovered_1000c280(&local_20,param_2);
  *param_1 = 10;
  iVar4 = local_1c + local_14 + 8;
  param_1[1] = iVar4;
  iVar1 = DAT_100140a0;
  if (param_2 == 0) {
    iVar3 = 0x2e4;
    iVar2 = 400;
    if (DAT_100140a0 == 1) {
      iVar3 = 0x284;
    }
    param_1[2] = iVar3;
  }
  else {
    iVar2 = *(int *)(param_2 + 8);
    iVar3 = *(int *)(param_2 + 4) + -0x14;
    if (*(int *)(param_2 + 4) == 0) {
      iVar3 = 0x2e4;
    }
    if (DAT_100140a0 == 1) {
      iVar3 = iVar3 + -0x60;
    }
    param_1[2] = iVar3;
    if (iVar2 == 0) {
      iVar2 = 400;
    }
  }
  iVar2 = iVar2 - iVar4;
  if (iVar1 != 0) {
    iVar3 = local_18 + -0x60;
    *param_1 = local_20;
    param_1[2] = iVar3;
  }
  iVar1 = iVar2 + -10;
  param_1[3] = iVar1;
  if (param_2 == 0) {
    if (iVar3 < 0xe) {
      param_1[2] = 0xe;
    }
  }
  else {
    iVar4 = 0xe;
    if (0 < *(int *)(param_2 + 0x3a4)) {
      iVar4 = *(int *)(param_2 + 0x3a4) + 8;
    }
    if (iVar3 < iVar4) {
      param_1[2] = iVar4;
    }
    iVar4 = *(int *)(param_2 + 0x3a8);
    if (0 < iVar4) {
      if (iVar4 + 8 <= iVar1) {
        return;
      }
      goto LAB_10012810;
    }
  }
  iVar4 = 10;
  if (0x1b < iVar2) {
    return;
  }
LAB_10012810:
  param_1[3] = iVar4 + 8;
  return;
}

#undef DAT_100140a0
#undef local_14
#undef local_20
#undef local_1c
#undef local_18

#undef DAT_10013119
#define DAT_10013119 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x25dU)))
#define local_2c (*(int *)(pf_stack_frame + 20))
#define local_24 (*(int *)(pf_stack_frame + 28))
#define iStack_30 (*(int *)(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10012820
 */

void recovered_10012820(undefined4 *param_1,int param_2)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  byte *pbVar6;
  uint b;
  int iVar7;
  longlong lVar8;

  recovered_1000c280(&iStack_30,param_2);
  param_1[2] = 0xc;
  *param_1 = 10;
  iVar7 = local_24 + -0x22;
  if (local_24 + -0x1e < 0x16) {
    iVar7 = 0x12;
  }
  param_1[1] = local_2c;
  param_1[3] = iVar7;
  recovered_1000c280(&iStack_30,param_2);
  if (param_2 == 0) {
    iVar1 = local_24 / 0xc;
    b = 0;
    if (iVar1 < 2) {
      iVar1 = 1;
    }
  }
  else {
    if (*(int *)(param_2 + 0x3a8) < 1) {
      iVar1 = local_24 / 0xc;
    }
    else {
      iVar1 = recovered_10003fa8(local_24,*(int *)(param_2 + 0x3a8) + 2);
    }
    if (iVar1 < 2) {
      iVar1 = 1;
    }
    iVar2 = recovered_1000bedc(param_2);
    if (iVar2 == 0) {
      if (*(int *)(param_2 + 0x3bc) < 1) {
        b = 0;
      }
      else {
        iVar2 = 0;
        uVar4 = 0;
        do {
          iVar3 = *(int *)(param_2 + 0x374);
          pbVar6 = &DAT_10013119;
          if (iVar3 != 0) {
            pbVar6 = *(byte **)(iVar3 + iVar2 * 8);
          }
          if (iVar3 != 0) {
            pbVar6 = pbVar6 + *(int *)(param_2 + 0x378);
          }
          iVar3 = recovered_1000c0f8(param_2,pbVar6,*(uint *)(iVar3 + iVar2 * 8 + 4));
          b = 0x7fffffff;
          if ((int)(uVar4 ^ 0x7fffffff) < iVar3) break;
          uVar4 = iVar3 + uVar4;
          iVar2 = iVar2 + 1;
          b = uVar4;
        } while (iVar2 < *(int *)(param_2 + 0x3bc));
      }
    }
    else {
      puVar5 = (uint *)(*(int *)(param_2 + 0x3c0) + *(int *)(param_2 + 0x3bc) * 8);
      b = *puVar5;
      if (0x7ffffffe < b) {
        b = 0x7fffffff;
      }
      if (puVar5[1] != 0) {
        b = 0x7fffffff;
      }
    }
  }
  uVar4 = recovered_1000ba00(param_2);
  if ((iVar1 < (int)b) && (0 < (int)uVar4)) {
    iVar1 = recovered_10003fa8(iVar1 * iVar7,b);
    iVar2 = *(int *)(param_2 + 0x3e4);
    if (iVar1 < 0x13) {
      iVar1 = 0x12;
    }
    if (iVar7 <= iVar1) {
      iVar1 = iVar7;
    }
    param_1[3] = iVar1;
    lVar8 = recovered_100041e4((longlong)(iVar7 - iVar1) * (longlong)iVar2,(ulonglong)uVar4);
    param_1[1] = local_2c + (int)lVar8;
  }
  return;
}

#undef DAT_10013119
#undef local_2c
#undef local_24
#undef iStack_30

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10012a10
 */

void recovered_10012a10(int param_1,uint param_2,uint param_3,int param_4,int param_5,
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
    uVar5 = 400;
    if ((int)param_3 < 400) {
      uVar5 = param_3;
    }
    uVar5 = uVar5 & ~((int)uVar5 >> 0x1f);
    uVar7 = 0x2f8;
    if ((int)param_2 < 0x2f8) {
      uVar7 = param_2;
    }
    uVar4 = 0x2f8;
    if ((int)(param_2 + param_4) < 0x2f8) {
      uVar4 = param_2 + param_4;
    }
    uVar6 = 400;
    uVar7 = uVar7 & ~((int)uVar7 >> 0x1f);
    uVar4 = uVar4 & ~((int)uVar4 >> 0x1f);
  }
  else {
    uVar7 = *(uint *)(param_1 + 4);
    uVar5 = param_2 + param_4;
    uVar6 = *(uint *)(param_1 + 8);
    if (uVar7 == 0) {
      uVar7 = 0x2f8;
    }
    uVar4 = uVar7;
    if ((int)uVar5 < (int)uVar7) {
      uVar4 = uVar5;
    }
    if ((int)uVar5 < 0) {
      uVar4 = 0;
    }
    if (uVar6 == 0) {
      uVar6 = 400;
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
      uVar1 = uVar7;
      if ((int)uVar7 < (int)uVar4) {
        do {
          if (((param_1 != 0) && (-1 < (int)(uVar1 | uVar5))) && (*(int *)(param_1 + 0x370) != 0)) {
            iVar3 = *(int *)(param_1 + 4);
            iVar2 = iVar3;
            if (iVar3 == 0) {
              iVar2 = 0x2f8;
            }
            if ((int)uVar1 < iVar2) {
              iVar2 = *(int *)(param_1 + 8);
              if (iVar2 == 0) {
                iVar2 = 400;
              }
              if ((int)uVar5 < iVar2) {
                iVar2 = iVar3 << 2;
                if (iVar3 == 0) {
                  iVar2 = 0xbe0;
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
 * Address: 0x10012bb4
 */

void recovered_10012bb4(int param_1,int param_2,int param_3,int param_4,int param_5,uint param_6)

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
         (uVar5 = (*pcVar4)((char *)param_4,param_5,0x80000001,
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
                      iVar6 = 0x2f8;
                    }
                    if ((int)(param_2 + uVar5) < iVar6) {
                      iVar6 = *(int *)(param_1 + 8);
                      if (iVar6 == 0) {
                        iVar6 = 400;
                      }
                      if ((int)(uVar7 + param_3) < iVar6) {
                        iVar6 = iVar9 << 2;
                        if (iVar9 == 0) {
                          iVar6 = 0xbe0;
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
