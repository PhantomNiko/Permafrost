/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000ac0
 */

uint recovered_10000ac0(uint a,uint b)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

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
 * Address: 0x10000b10
 */

uint recovered_10000b10(uint a,uint b)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

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
 * Address: 0x10000b48
 */

int recovered_10000b48(int a,int b)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

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
 * Address: 0x10000bb8
 */

int recovered_10000bb8(int a,int b)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

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
 * Address: 0x10000c20
 */

ulonglong recovered_10000c20(ulonglong a,ulonglong b)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

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
 * Address: 0x10000d04
 */

ulonglong recovered_10000d04(ulonglong a,ulonglong b)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

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
 * Address: 0x10000d84
 */

longlong recovered_10000d84(longlong a,longlong b)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

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
 * Address: 0x10000ea4
 */

longlong recovered_10000ea4(longlong a,longlong b)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

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


#undef DAT_10000fe0
#define DAT_10000fe0 (*(double *)(0x10000fe0U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000f60
 */

ulonglong recovered_10000f60(double x)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  double dVar7;
  double dVar8;

  dVar7 = (double)(((ulonglong)x & 0xffffffff00000000) + ((ulonglong)x & 0xffffffff));
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

#undef DAT_10000fe0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000fe8
 */

longlong recovered_10000fe8(double x)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  ulonglong uVar2;

  dVar1 = (double)(((ulonglong)x & 0xffffffff00000000) + ((ulonglong)x & 0xffffffff));
  if (NAN(dVar1)) {
    return 0;
  }
  if (dVar1 < 0.0) {
    uVar2 = recovered_10000f60(-dVar1);
    return CONCAT44(-((int)(uVar2 >> 0x20) + (uint)((int)uVar2 != 0)),-(int)uVar2);
  }
  uVar2 = recovered_10000f60(x);
  return uVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001034
 */

ulonglong recovered_10001034(float x)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulonglong uVar1;

  uVar1 = recovered_10000f60((double)x);
  return uVar1;
}


#undef DAT_10024008
#define DAT_10024008 (*(code * *)(((uintptr_t)pf_module_state + 0xa00U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001044
 */

longlong recovered_10001044(float x)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  longlong lVar1;

                    /* WARNING: Could not recover jumptable at ((uintptr_t)pf_module_state + 0x9a8U). Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = (*DAT_10024008)(SUB84((double)x,0),(int)((ulonglong)(double)x >> 0x20));
  return lVar1;
}

#undef DAT_10024008

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001054
 */

double recovered_10001054(ulonglong x)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  double dVar3;
  double dVar4;
  double dVar5;

  if (x == 0) {
    return 0.0;
  }
  dVar3 = 1.0;
  dVar4 = 0.0;
  do {
    dVar5 = dVar4 + dVar3;
    dVar3 = dVar3 + dVar3;
    if ((x & 1) == 0) {
      dVar5 = dVar4;
    }
    dVar4 = dVar5;
    uVar1 = (uint)(x >> 0x21);
    uVar2 = (uint)((byte)(x >> 0x20) & 1) << 0x1f | (uint)x >> 1;
    x = CONCAT44(uVar1,uVar2);
  } while (uVar2 != 0 || uVar1 != 0);
  return dVar4;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000109c
 */

double recovered_1000109c(longlong x)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  if (x < 0) {
    dVar1 = recovered_10001054(CONCAT44(-((int)((ulonglong)x >> 0x20) + (uint)((int)x != 0)),-(int)x
                                       ));
    return -dVar1;
  }
  dVar1 = recovered_10001054(x);
  return dVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100010c4
 */

float recovered_100010c4(ulonglong x)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_10001054(x);
  return (float)pf_bits_double(((pf_double_bits(dVar1) & 0xffffffff00000000) + (pf_double_bits(dVar1) & 0xffffffff)));
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100010e0
 */

float recovered_100010e0(longlong x)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_1000109c(x);
  return (float)pf_bits_double(((pf_double_bits(dVar1) & 0xffffffff00000000) + (pf_double_bits(dVar1) & 0xffffffff)));
}


#undef DAT_10001ae0
#define DAT_10001ae0 (*(uint8_t *)(0x10001ae0U))
#undef DAT_10001ae8
#define DAT_10001ae8 (*(uint8_t *)(0x10001ae8U))
#undef DAT_10023774
#define DAT_10023774 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x16cU)))
#undef DAT_10024130
#define DAT_10024130 (*(char * *)(((uintptr_t)pf_module_state + 0xb28U)))
#undef DAT_10024134
#define DAT_10024134 (*(char * *)(((uintptr_t)pf_module_state + 0xb2cU)))
#undef DAT_10024138
#define DAT_10024138 (*(uint *)(((uintptr_t)pf_module_state + 0xb30U)))
#undef DAT_1002413c
#define DAT_1002413c (*(int *)(((uintptr_t)pf_module_state + 0xb34U)))
#undef DAT_10024140
#define DAT_10024140 (*(uint *)(((uintptr_t)pf_module_state + 0xb38U)))
#undef DAT_10024144
#define DAT_10024144 (*(char *)(((uintptr_t)pf_module_state + 0xb3cU)))
#undef DAT_10024148
#define DAT_10024148 (*(uint32_t *)(((uintptr_t)pf_module_state + 0xb40U)))
#undef DAT_1002414c
#define DAT_1002414c (*(uint32_t *)(((uintptr_t)pf_module_state + 0xb44U)))
#undef DAT_10024150
#define DAT_10024150 (*(uint32_t *)(((uintptr_t)pf_module_state + 0xb48U)))
#undef DAT_10024154
#define DAT_10024154 (*(char *)(((uintptr_t)pf_module_state + 0xb4cU)))
#undef DAT_100242d4
#define DAT_100242d4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0xcccU)))
#undef DAT_100242dc
#define DAT_100242dc (*(uint8_t * *)(((uintptr_t)pf_module_state + 0xcd4U)))
#undef DAT_100242e4
#define DAT_100242e4 (*(uint *)(((uintptr_t)pf_module_state + 0xcdcU)))
#undef DAT_100242f0
#define DAT_100242f0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0xce8U)))
#undef DAT_100242f4
#define DAT_100242f4 (*(int *)(((uintptr_t)pf_module_state + 0xcecU)))
#undef DAT_100242f8
#define DAT_100242f8 (*(void * *)(((uintptr_t)pf_module_state + 0xcf0U)))
#undef DAT_10024308
#define DAT_10024308 (*(byte *)(((uintptr_t)pf_module_state + 0xd00U)))
#undef DAT_1002430c
#define DAT_1002430c (*(char * *)(((uintptr_t)pf_module_state + 0xd04U)))
#undef DAT_10024310
#define DAT_10024310 (*(int *)(((uintptr_t)pf_module_state + 0xd08U)))
#undef DAT_10024314
#define DAT_10024314 (*(char *)(((uintptr_t)pf_module_state + 0xd0cU)))
#undef DAT_10024318
#define DAT_10024318 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xd10U)))
#undef DAT_10024319
#define DAT_10024319 (*(char *)(((uintptr_t)pf_module_state + 0xd11U)))
#undef DAT_1002431c
#define DAT_1002431c (*(uint32_t *)(((uintptr_t)pf_module_state + 0xd14U)))
#undef DAT_10024320
#define DAT_10024320 (*(int *)(((uintptr_t)pf_module_state + 0xd18U)))
#undef DAT_10024328
#define DAT_10024328 (*(int *)(((uintptr_t)pf_module_state + 0xd20U)))
#undef DAT_1002432c
#define DAT_1002432c (*(uint *)(((uintptr_t)pf_module_state + 0xd24U)))
#undef DAT_10024330
#define DAT_10024330 (*(uint *)(((uintptr_t)pf_module_state + 0xd28U)))
#undef DAT_10024334
#define DAT_10024334 (*(int *)(((uintptr_t)pf_module_state + 0xd2cU)))
#undef DAT_10024364
#define DAT_10024364 (*(char * *)(((uintptr_t)pf_module_state + 0xd5cU)))
#undef DAT_10024368
#define DAT_10024368 (*(char * *)(((uintptr_t)pf_module_state + 0xd60U)))
#undef DAT_1002436c
#define DAT_1002436c (*(char * *)(((uintptr_t)pf_module_state + 0xd64U)))
#undef DAT_10024370
#define DAT_10024370 (*(char * *)(((uintptr_t)pf_module_state + 0xd68U)))
#undef DAT_10024374
#define DAT_10024374 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xd6cU)))
#undef DAT_10024910
#define DAT_10024910 (*(void * *)(((uintptr_t)pf_module_state + 0x1308U)))
#undef DAT_10024914
#define DAT_10024914 (*(void * *)(((uintptr_t)pf_module_state + 0x130cU)))
#undef DAT_10024918
#define DAT_10024918 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1310U)))
#undef DAT_100256c8
#define DAT_100256c8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x20c0U)))
#undef DAT_10027228
#define DAT_10027228 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3c20U)))
#undef DAT_10027414
#define DAT_10027414 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3e0cU)))
#undef DAT_10027610
#define DAT_10027610 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4008U)))
#undef DAT_10027614
#define DAT_10027614 (*(int *)(((uintptr_t)pf_module_state + 0x400cU)))
#undef DAT_10027618
#define DAT_10027618 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x4010U)))
#undef DAT_10027620
#define DAT_10027620 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x4018U)))
#undef DAT_10027628
#define DAT_10027628 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4020U)))
#undef DAT_10028fb0
#define DAT_10028fb0 (*(void * *)(((uintptr_t)pf_module_state + 0x59a8U)))
#undef DAT_10028fe0
#define DAT_10028fe0 (*(char *)(((uintptr_t)pf_module_state + 0x59d8U)))
#undef DAT_10028fe4
#define DAT_10028fe4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x59dcU)))
#undef DAT_100290dc
#define DAT_100290dc (*(uint *)(((uintptr_t)pf_module_state + 0x5ad4U)))
#undef DAT_1012e404
#define DAT_1012e404 (*(char *)(((uintptr_t)pf_module_state + 0x10adfcU)))
#undef DAT_1012e405
#define DAT_1012e405 (*(char *)(((uintptr_t)pf_module_state + 0x10adfdU)))
#undef DAT_1012e408
#define DAT_1012e408 (*(int *)(((uintptr_t)pf_module_state + 0x10ae00U)))
#undef DAT_1012e40c
#define DAT_1012e40c (*(char *)(((uintptr_t)pf_module_state + 0x10ae04U)))
#undef DAT_1012e40d
#define DAT_1012e40d (*(char *)(((uintptr_t)pf_module_state + 0x10ae05U)))
#undef DAT_1012e40e
#define DAT_1012e40e (*(char *)(((uintptr_t)pf_module_state + 0x10ae06U)))
#undef DAT_1012e40f
#define DAT_1012e40f (*(char *)(((uintptr_t)pf_module_state + 0x10ae07U)))
#undef DAT_1012e410
#define DAT_1012e410 (*(char *)(((uintptr_t)pf_module_state + 0x10ae08U)))
#undef DAT_1012e411
#define DAT_1012e411 (*(char *)(((uintptr_t)pf_module_state + 0x10ae09U)))
#undef DAT_1012e412
#define DAT_1012e412 (*(char *)(((uintptr_t)pf_module_state + 0x10ae0aU)))
#undef DAT_1012e413
#define DAT_1012e413 (*(char *)(((uintptr_t)pf_module_state + 0x10ae0bU)))
#undef DAT_1012e414
#define DAT_1012e414 (*(char *)(((uintptr_t)pf_module_state + 0x10ae0cU)))
#undef DAT_1012e415
#define DAT_1012e415 (*(char *)(((uintptr_t)pf_module_state + 0x10ae0dU)))
#undef DAT_1012e416
#define DAT_1012e416 (*(char *)(((uintptr_t)pf_module_state + 0x10ae0eU)))
#undef DAT_1012e417
#define DAT_1012e417 (*(char *)(((uintptr_t)pf_module_state + 0x10ae0fU)))
#undef DAT_1012e418
#define DAT_1012e418 (*(char *)(((uintptr_t)pf_module_state + 0x10ae10U)))
#undef DAT_1012e419
#define DAT_1012e419 (*(char *)(((uintptr_t)pf_module_state + 0x10ae11U)))
#undef DAT_1012e41a
#define DAT_1012e41a (*(char *)(((uintptr_t)pf_module_state + 0x10ae12U)))
#undef DAT_1012e41b
#define DAT_1012e41b (*(char *)(((uintptr_t)pf_module_state + 0x10ae13U)))
#undef DAT_1012e41c
#define DAT_1012e41c (*(char *)(((uintptr_t)pf_module_state + 0x10ae14U)))
#undef DAT_1012e41d
#define DAT_1012e41d (*(char *)(((uintptr_t)pf_module_state + 0x10ae15U)))
#undef DAT_1012e41e
#define DAT_1012e41e (*(char *)(((uintptr_t)pf_module_state + 0x10ae16U)))
#undef DAT_1012e41f
#define DAT_1012e41f (*(char *)(((uintptr_t)pf_module_state + 0x10ae17U)))
#undef DAT_1012e420
#define DAT_1012e420 (*(char *)(((uintptr_t)pf_module_state + 0x10ae18U)))
#undef DAT_1012e421
#define DAT_1012e421 (*(char *)(((uintptr_t)pf_module_state + 0x10ae19U)))
#undef DAT_1012e422
#define DAT_1012e422 (*(char *)(((uintptr_t)pf_module_state + 0x10ae1aU)))
#undef DAT_1012e423
#define DAT_1012e423 (*(char *)(((uintptr_t)pf_module_state + 0x10ae1bU)))
#undef DAT_1012e424
#define DAT_1012e424 (*(char *)(((uintptr_t)pf_module_state + 0x10ae1cU)))
#undef DAT_1012e425
#define DAT_1012e425 (*(char *)(((uintptr_t)pf_module_state + 0x10ae1dU)))
#undef DAT_1012e426
#define DAT_1012e426 (*(char *)(((uintptr_t)pf_module_state + 0x10ae1eU)))
#undef DAT_1012e427
#define DAT_1012e427 (*(char *)(((uintptr_t)pf_module_state + 0x10ae1fU)))
#undef DAT_1012e428
#define DAT_1012e428 (*(char *)(((uintptr_t)pf_module_state + 0x10ae20U)))
#undef DAT_1012e429
#define DAT_1012e429 (*(char *)(((uintptr_t)pf_module_state + 0x10ae21U)))
#undef DAT_1012e42a
#define DAT_1012e42a (*(char *)(((uintptr_t)pf_module_state + 0x10ae22U)))
#undef DAT_1012e42b
#define DAT_1012e42b (*(char *)(((uintptr_t)pf_module_state + 0x10ae23U)))
#undef DAT_1012e42c
#define DAT_1012e42c (*(char *)(((uintptr_t)pf_module_state + 0x10ae24U)))
#undef DAT_1012e42d
#define DAT_1012e42d (*(char *)(((uintptr_t)pf_module_state + 0x10ae25U)))
#undef DAT_1012e42e
#define DAT_1012e42e (*(char *)(((uintptr_t)pf_module_state + 0x10ae26U)))
#undef DAT_1012e42f
#define DAT_1012e42f (*(char *)(((uintptr_t)pf_module_state + 0x10ae27U)))
#undef DAT_1012e430
#define DAT_1012e430 (*(char *)(((uintptr_t)pf_module_state + 0x10ae28U)))
#undef DAT_1012e431
#define DAT_1012e431 (*(char *)(((uintptr_t)pf_module_state + 0x10ae29U)))
#undef DAT_1012e432
#define DAT_1012e432 (*(char *)(((uintptr_t)pf_module_state + 0x10ae2aU)))
#undef DAT_1012e433
#define DAT_1012e433 (*(byte *)(((uintptr_t)pf_module_state + 0x10ae2bU)))
#undef DAT_1012e434
#define DAT_1012e434 (*(byte *)(((uintptr_t)pf_module_state + 0x10ae2cU)))
#undef DAT_1012e459
#define DAT_1012e459 (*(char *)(((uintptr_t)pf_module_state + 0x10ae51U)))
#undef DAT_1012e460
#define DAT_1012e460 (*(int *)(((uintptr_t)pf_module_state + 0x10ae58U)))
#undef DAT_1012e464
#define DAT_1012e464 (*(int *)(((uintptr_t)pf_module_state + 0x10ae5cU)))
#undef DAT_1012e468
#define DAT_1012e468 (*(char *)(((uintptr_t)pf_module_state + 0x10ae60U)))
#undef DAT_1012e46c
#define DAT_1012e46c (*(char * *)(((uintptr_t)pf_module_state + 0x10ae64U)))
#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef EXT_00000008
#define EXT_00000008 (*(uint8_t *)(0x8U))
#undef EXT_00000014
#define EXT_00000014 (*(uint8_t *)(0x14U))
#undef EXT_00000018
#define EXT_00000018 (*(uint8_t *)(0x18U))
#undef Ram40010800
#define Ram40010800 (*(uint32_t *)(0x40010800U))
#undef Ram40010804
#define Ram40010804 (*(uint32_t *)(0x40010804U))
#undef Ram40010808
#define Ram40010808 (*(uint32_t *)(0x40010808U))
#undef UINT_40010814
#define UINT_40010814 (*(uint *)(0x40010814U))
#undef UINT_40010818
#define UINT_40010818 (*(uint *)(0x40010818U))
#undef UINT_40010834
#define UINT_40010834 (*(uint *)(0x40010834U))
#undef UINT_40010840
#define UINT_40010840 (*(uint *)(0x40010840U))
#undef UINT_4001084c
#define UINT_4001084c (*(uint *)(0x4001084cU))
#undef UINT_40010850
#define UINT_40010850 (*(uint *)(0x40010850U))
#undef UINT_40010858
#define UINT_40010858 (*(uint *)(0x40010858U))
#undef UINT_4001087c
#define UINT_4001087c (*(uint *)(0x4001087cU))
#undef UINT_40010880
#define UINT_40010880 (*(uint *)(0x40010880U))
#undef UINT_4001089c
#define UINT_4001089c (*(uint *)(0x4001089cU))
#undef UINT_400108bc
#define UINT_400108bc (*(uint *)(0x400108bcU))
#undef UINT_400108c0
#define UINT_400108c0 (*(uint *)(0x400108c0U))
#undef UINT_4001095c
#define UINT_4001095c (*(uint *)(0x4001095cU))
#undef UINT_40010968
#define UINT_40010968 (*(uint *)(0x40010968U))
#undef UINT_40010970
#define UINT_40010970 (*(uint *)(0x40010970U))
#undef UINT_40010974
#define UINT_40010974 (*(uint *)(0x40010974U))
#undef _DAT_10027610
#define _DAT_10027610 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x4008U)))
#undef str_100236c8
#define str_100236c8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc0U)))
#undef str_100236dd
#define str_100236dd (*(char (*)[1])(((uintptr_t)pf_module_state + 0xd5U)))
#undef str_100236ff
#define str_100236ff (*(char (*)[1])(((uintptr_t)pf_module_state + 0xf7U)))
#undef str_10023725
#define str_10023725 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x11dU)))
#undef str_1002373f
#define str_1002373f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x137U)))
#undef str_10023759
#define str_10023759 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x151U)))
#undef str_10023760
#define str_10023760 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x158U)))
#undef str_10023775
#define str_10023775 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x16dU)))
#undef str_10023904
#define str_10023904 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2fcU)))
#undef str_10023910
#define str_10023910 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x308U)))
#undef str_1002391f
#define str_1002391f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x317U)))
#undef str_10023ec1
#define str_10023ec1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x8b9U)))
#undef str_10024155
#define str_10024155 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb4dU)))
#undef str_100241e0
#define str_100241e0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xbd8U)))
#define local_4148 (*(char (*)[408])(frame + 200))
#define local_3fb0 (*(int (*)[3908])(frame + 608))
#define local_2a0 (*(char * *)(frame + 16240))
#define local_298 (*(char * *)(frame + 16248))
#define local_294 (*(char * *)(frame + 16252))
#define local_290 (*(char * *)(frame + 16256))
#define local_288 (*(char * *)(frame + 16264))
#define local_24 (*(uint *)(frame + 16876))
#define local_4200 (*(char * *)(frame + 16))
#define local_41fc (*(char * *)(frame + 20))
#define local_41f8 (*(int *)(frame + 24))
#define local_41f4 (*(char * *)(frame + 28))
#define local_41e8 (*(char * *)(frame + 40))
#define local_41dc (*(uint *)(frame + 52))
#define local_41d4 (*(char * *)(frame + 60))
#define local_41c8 (*(uint *)(frame + 72))
#define local_41c4 (*(char * *)(frame + 76))
#define local_41bc (*(char * *)(frame + 84))
#define local_41b8 (*(char * *)(frame + 88))
#define local_41b4 (*(char * *)(frame + 92))
#define local_41b0 (*(char * *)(frame + 96))
#define local_41ac (*(char * *)(frame + 100))
#define local_41a8 (*(int * *)(frame + 104))
#define pcStack_29c (*(char * *)(frame + 16244))
#define local_41a4 (*(int *)(frame + 108))
#define local_41a0 (*(undefined8 *)(frame + 112))
#define local_4198 (*(char * *)(frame + 120))
#define local_4194 (*(char * *)(frame + 124))
#define pcStack_28c (*(char * *)(frame + 16260))
#define local_4190 (*(uint *)(frame + 128))
#define local_418c (*(char * *)(frame + 132))
#define local_4188 (*(uint (*)[4])(frame + 136))
#define local_4178 (*(uint (*)[6])(frame + 152))
#define local_4160 (*(uint (*)[6])(frame + 176))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001100
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int recovered_10001100(void)

{
  unsigned char frame[16944] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  undefined4 *puVar2;
  code *pcVar3;
  ulonglong uVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  char *pcVar8;
  void *pvVar9;
  int iVar10;
  char *pcVar11;
  char *pcVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  char *pcVar18;
  int iVar19;
  uint *puVar20;
  int extraout_r1 = 0;
  char *pcVar21;
  undefined1 *puVar22;
  uint uVar23;
  char *pcVar24;
  char *pcVar25;
  uint extraout_r1_00 = 0;
  int extraout_r1_01 = 0;
  uint extraout_r1_02 = 0;
  uint extraout_r1_03 = 0;
  uint extraout_r1_04 = 0;
  uint uVar26;
  char *pcVar27;
  uint uVar28;
  void *pvVar29;
  byte *pbVar30;
  undefined8 *puVar31;
  char *pcVar32;
  undefined1 *puVar33;
  char *pcVar34;
  uint uVar35;
  char *pcVar36;
  char *pcVar37;
  bool bVar38;
  bool bVar39;
  bool bVar40;
  ulonglong uVar41;

  iVar10 = Ram40010800;
  if ((iVar10 == 0x50414d57) && (iVar10 = Ram40010804, iVar10 != 0)) {
    uVar6 = Ram40010808;
    bVar38 = 0xb < uVar6;
    if (bVar38) {
      uVar6 = Ram40010808;
    }
    if ((bVar38 && 0x43 < uVar6) && (pcVar3 = (code *)UINT_40010840, pcVar3 != (code *)0x0)) {
      (*pcVar3)(str_100236c8);
    }
  }
  DAT_10024134 = (char *)0x21c;
  DAT_10024130 = (char *)0x3c0;
  memset(&DAT_100242f0,0,0x18);
  memset(&DAT_10024318,0,0x5c);
  iVar10 = Ram40010800;
  if ((iVar10 != 0x50414d57) || (iVar10 = Ram40010804, iVar10 == 0)) goto LAB_100011e4;
  uVar6 = Ram40010808;
  bVar38 = 0xb < uVar6;
  if (bVar38) {
    uVar6 = Ram40010808;
  }
  if (((!bVar38 || uVar6 < 0x18) || (pcVar3 = (code *)UINT_40010814, pcVar3 == (code *)0x0)) ||
     (uVar6 = (*pcVar3)(), uVar6 == 0)) goto LAB_100011e4;
  iVar10 = Ram40010800;
  if ((iVar10 == 0x50414d57) && (iVar10 = Ram40010804, iVar10 != 0)) {
    uVar6 = Ram40010808;
    bVar38 = 0xb < uVar6;
    if (bVar38) {
      uVar6 = Ram40010808;
    }
    if (((bVar38 && 0x7f < uVar6) && (pcVar3 = (code *)UINT_4001087c, pcVar3 != (code *)0x0)) &&
       ((uVar6 = (*pcVar3)(&DAT_1002431c), uVar6 != 0 &&
        ((((DAT_10024320 == 0 && (DAT_1002431c != 0)) && (DAT_10024334 - 0xfU < 0x12)) &&
         ((0x1fdfcU >> (DAT_10024334 - 0xfU & 0xff) & 1) == 0)))))) {
      uVar6 = 0;
      if (DAT_10024328 != 0) {
        uVar6 = DAT_1002432c;
      }
      if ((DAT_10024328 != 0 && uVar6 != 0) && (DAT_10024330 != 0)) {
        DAT_10024364 = (char *)(uVar6 >> 1);
        DAT_10024368 = (char *)(DAT_10024330 >> 1);
        DAT_10024318 = '\x01';
        recovered_1000c814(((uintptr_t)pf_module_state + 0xd10U));
        iVar7 = recovered_100044fc(&DAT_10024318);
        iVar10 = Ram40010800;
        if (iVar7 == 0 && DAT_100242f8 == (void *)0x0) {
          if ((iVar10 == 0x50414d57) && (iVar10 = Ram40010804, iVar10 != 0)) {
            uVar6 = Ram40010808;
            bVar38 = 0xb < uVar6;
            if (bVar38) {
              uVar6 = Ram40010808;
            }
            if ((bVar38 && 0x43 < uVar6) && (pcVar3 = (code *)UINT_40010840, pcVar3 != (code *)0x0))
            {
              (*pcVar3)(str_100236ff);
            }
          }
          goto LAB_10001568;
        }
        if ((iVar10 == 0x50414d57) && (iVar10 = Ram40010804, iVar10 != 0)) {
          uVar6 = Ram40010808;
          bVar38 = 0xb < uVar6;
          if (bVar38) {
            uVar6 = Ram40010808;
          }
          if ((bVar38 && 0x43 < uVar6) && (pcVar3 = (code *)UINT_40010840, pcVar3 != (code *)0x0)) {
            (*pcVar3)(str_10023725);
          }
        }
        if (DAT_100242f8 != (void *)0x0) {
          iVar10 = Ram40010800;
          pvVar29 = (void *)0x0;
          pcVar8 = (char *)0x0;
          if (iVar10 == 0x50414d57) {
            iVar10 = Ram40010804;
            pcVar8 = (char *)0x0;
            if (iVar10 != 0) {
              uVar6 = Ram40010808;
              pcVar8 = (char *)0x0;
              if (0xb < uVar6) {
                uVar6 = Ram40010808;
                pcVar8 = (char *)0x0;
                if ((0x4f < uVar6) && (pcVar3 = (code *)UINT_4001084c, pcVar3 != (code *)0x0)) {
                  pcVar8 = (*pcVar3)(0x11030);
                }
              }
            }
          }
          iVar10 = Ram40010800;
          DAT_1002430c = pcVar8;
          if ((iVar10 == 0x50414d57) && (iVar10 = Ram40010804, iVar10 != 0)) {
            uVar6 = Ram40010808;
            bVar38 = 0xb < uVar6;
            if (bVar38) {
              uVar6 = Ram40010808;
            }
            if ((bVar38 && 0x4f < uVar6) && (pcVar3 = (code *)UINT_4001084c, pcVar3 != (code *)0x0))
            {
              pvVar29 = (*pcVar3)(0x1518);
            }
          }
          iVar10 = Ram40010800;
          pvVar9 = (void *)0x0;
          DAT_10024910 = pvVar29;
          if ((iVar10 == 0x50414d57) && (iVar10 = Ram40010804, iVar10 != 0)) {
            uVar6 = Ram40010808;
            bVar38 = 0xb < uVar6;
            if (bVar38) {
              uVar6 = Ram40010808;
            }
            if ((bVar38 && 0x4f < uVar6) && (pcVar3 = (code *)UINT_4001084c, pcVar3 != (code *)0x0))
            {
              pvVar9 = (*pcVar3)(0x50);
            }
          }
          DAT_10024914 = pvVar9;
          if ((DAT_1002430c != (char *)0x0 && DAT_10024910 != (void *)0x0) &&
             (pvVar9 != (void *)0x0)) {
            memset(DAT_1002430c,0,0x11030);
            memset(DAT_10024910,0,0x1518);
            memset(&DAT_10024918,0,0xdb0);
            memset(&DAT_100256c8,0,0x1b60);
            memset(DAT_10024914,0,0x50);
            memset(&DAT_10024374,0,0x59c);
            memset(&DAT_10027228,0,0x1ec);
            memset(&DAT_10027414,0,0x1fc);
            memset(&DAT_10027610,0,0x18);
            local_2a0 = (char *)0x0;
            DAT_10027628 = 0;
            iVar10 = Ram40010800;
            local_41a4 = -1;
            if (iVar10 == 0x50414d57) {
              iVar10 = Ram40010804;
              local_41a4 = -1;
              if (iVar10 != 0) {
                uVar6 = Ram40010808;
                local_41a4 = -1;
                if (0xb < uVar6) {
                  uVar6 = Ram40010808;
                  local_41a4 = -1;
                  if (0xbf < uVar6) {
                    pcVar3 = (code *)UINT_400108bc;
                    local_41a4 = -1;
                    if (pcVar3 != (code *)0x0) {
                      local_41a4 = (*pcVar3)();
                    }
                  }
                }
              }
            }
            DAT_10028fe0 = '\0';
            DAT_10024144 = '&';
            DAT_10024148 = 1;
            DAT_1002414c = 8;
            DAT_10024150 = 0x23;
            builtin_strncpy(str_10024155 + 8,".org",5);
            str_100241e0[0] = (undefined1)(0x69U);
            str_100241e0[1] = (0x6dULL);
            str_100241e0[2] = (0x61ULL);
            str_100241e0[3] = (0x67ULL);
            str_100241e0[4] = (0x65ULL);
            str_100241e0[5] = (0x73ULL);
            str_100241e0[6] = (0x2fULL);
            str_100241e0[7] = (0x68ULL);
            str_100241e0[8] = (char)(0x6fU);
            str_100241e0[9] = (0x6cULL);
            str_100241e0[10] = (0x6cULL);
            str_100241e0[0xb] = (0x79ULL);
            str_100241e0[0xc] = (0x2eULL);
            str_100241e0[0xd] = (0x70ULL);
            str_100241e0[0xe] = (0x6eULL);
            str_100241e0[0xf] = (0x67ULL);
            builtin_strncpy(str_10024155 + 4,".ntp",4);
            DAT_10024154 = '\x01';
            builtin_strncpy(str_10024155,"pool",4);
            DAT_10028fe4 = 0;
            DAT_100242d4 = 0xffffffff;
            str_100241e0[0x10] = '\0';
            if ((local_41a4 < 0) || (iVar10 = recovered_1000cb74(local_41a4), iVar10 == 0)) {
              memset(&local_41a0,0,0x3f00);
              iVar10 = Ram40010800;
              if ((iVar10 == 0x50414d57) && (iVar10 = Ram40010804, iVar10 != 0)) {
                uVar6 = Ram40010808;
                bVar38 = 0xb < uVar6;
                if (bVar38) {
                  uVar6 = Ram40010808;
                }
                if (((bVar38 && 0xc3 < uVar6) &&
                    (pcVar3 = (code *)UINT_400108c0, pcVar3 != (code *)0x0)) &&
                   (uVar6 = (*pcVar3)(&local_41a0,0x20,(uint *)&local_2a0), uVar6 != 0)) {
                  if (local_2a0 < (char *)0x21) {
                    if (local_2a0 == (char *)0x0) goto LAB_10001828;
                  }
                  else {
                    local_2a0 = (char *)0x20;
                  }
                  pcVar27 = (char *)0x0;
                  pcVar8 = local_2a0;
                  local_41a8 = local_3fb0;
                  do {
                    if (*local_41a8 != local_41a4) {
                      iVar10 = recovered_1000cb74(*local_41a8);
                      if (iVar10 != 0) break;
                      pcVar8 = local_2a0;
                    }
                    pcVar27 = pcVar27 + 1;
                    local_41a8 = local_41a8 + 0x7e;
                  } while (pcVar27 < pcVar8);
                }
              }
            }
LAB_10001828:
            DAT_10024364 = (char *)((int)DAT_10024130 / 2);
            DAT_10024368 = (char *)((int)DAT_10024134 / 2);
            recovered_10005734(0,str_10023759,0xffecd7,'\x01');
            uVar6 = recovered_10005d20();
            recovered_100059dc(str_10023760,uVar6);
            memset(&local_41a0,0,0xc);
            iVar10 = Ram40010800;
            if ((iVar10 == 0x50414d57) && (iVar10 = Ram40010804, iVar10 != 0)) {
              uVar6 = Ram40010808;
              bVar38 = 0xb < uVar6;
              if (bVar38) {
                uVar6 = Ram40010808;
              }
              if (((bVar38 && 0x37 < uVar6) &&
                  (pcVar3 = (code *)UINT_40010834, pcVar3 != (code *)0x0)) &&
                 (uVar6 = (*pcVar3)(str_10023904,&local_41a0), uVar6 != 0)) {
                uVar6 = extraout_r1_02;
                if ((char *)local_41a0 != (char *)0x0) {
                  uVar6 = (uint)PF_PART4(local_41a0, 4);
                }
                if ((char *)local_41a0 != (char *)0x0 && uVar6 != 0) {
                  recovered_1000e4d4((int)(char *)local_41a0,uVar6,0,((uintptr_t)pf_module_state + 0x1310U),0xc);
                }
              }
            }
            memset(&local_41a0,0,0xc);
            iVar10 = Ram40010800;
            if ((iVar10 == 0x50414d57) && (iVar10 = Ram40010804, iVar10 != 0)) {
              uVar6 = Ram40010808;
              bVar38 = 0xb < uVar6;
              if (bVar38) {
                uVar6 = Ram40010808;
              }
              if (((bVar38 && 0x37 < uVar6) &&
                  (pcVar3 = (code *)UINT_40010834, pcVar3 != (code *)0x0)) &&
                 (uVar6 = (*pcVar3)(str_10023910,&local_41a0), uVar6 != 0)) {
                uVar6 = extraout_r1_03;
                if ((char *)local_41a0 != (char *)0x0) {
                  uVar6 = (uint)PF_PART4(local_41a0, 4);
                }
                if ((char *)local_41a0 != (char *)0x0 && uVar6 != 0) {
                  recovered_1000e4d4((int)(char *)local_41a0,uVar6,0,((uintptr_t)pf_module_state + 0x20c0U),0x18);
                }
              }
            }
            memset(&local_41a0,0,0xc);
            iVar10 = Ram40010800;
            if ((iVar10 == 0x50414d57) && (iVar10 = Ram40010804, iVar10 != 0)) {
              uVar6 = Ram40010808;
              bVar38 = 0xb < uVar6;
              if (bVar38) {
                uVar6 = Ram40010808;
              }
              if (((bVar38 && 0x37 < uVar6) &&
                  (pcVar3 = (code *)UINT_40010834, pcVar3 != (code *)0x0)) &&
                 (uVar6 = (*pcVar3)(str_1002391f,&local_41a0), uVar6 != 0)) {
                uVar6 = extraout_r1_04;
                if ((char *)local_41a0 != (char *)0x0) {
                  uVar6 = (uint)PF_PART4(local_41a0, 4);
                }
                if ((char *)local_41a0 != (char *)0x0 && uVar6 != 0) {
                  recovered_1000e4d4((int)(char *)local_41a0,uVar6,1,0,0);
                }
              }
            }
            if (str_100241e0[0] == '\0') {
              local_41a0 = (0x69U);
              PF_PART1(local_4198, 0) = (char)(0x6fU);
              PF_PART1(local_4198, 1) = (0x6cULL);
              PF_PART1(local_4198, 2) = (0x6cULL);
              PF_PART1(local_4198, 3) = (0x79ULL);
              PF_PART1(local_4194, 0) = (0x2eULL);
              PF_PART1(local_4194, 1) = (0x70ULL);
              PF_PART1(local_4194, 2) = (0x6eULL);
              PF_PART1(local_4194, 3) = (0x67ULL);
              local_4190 = local_4190 & 0xffffff00;
              memset(&local_2a0,0,0x18);
            }
            else {
              uVar6 = 0;
              cVar5 = str_100241e0[0];
              do {
                uVar13 = uVar6;
                *(char *)((int)local_4188 + (uVar13 - 0x18)) = cVar5;
                if (0xef < uVar13 + 1) break;
                cVar5 = str_100241e0[uVar13 + 1];
                uVar6 = uVar13 + 1;
              } while (cVar5 != '\0');
              *(undefined1 *)((int)local_4188 + (uVar13 - 0x17)) = 0;
              cVar5 = (char)local_41a0;
              memset(&local_2a0,0,0x18);
              if (cVar5 == '\0') goto LAB_100019fc;
            }
            iVar10 = Ram40010800;
            if ((iVar10 == 0x50414d57) && (iVar10 = Ram40010804, iVar10 != 0)) {
              uVar6 = Ram40010808;
              bVar38 = 0xb < uVar6;
              if (bVar38) {
                uVar6 = Ram40010808;
              }
              if (((bVar38 && 0x5b < uVar6) &&
                  (pcVar3 = (code *)UINT_40010858, pcVar3 != (code *)0x0)) &&
                 (uVar6 = (*pcVar3)((char *)&local_41a0,&local_2a0), uVar6 != 0)) {
                if (((DAT_10027614 == 0) && (_DAT_10027610 != (void *)0x0)) &&
                   ((iVar10 = Ram40010800, iVar10 == 0x50414d57 &&
                    (iVar10 = Ram40010804, iVar10 != 0)))) {
                  uVar6 = Ram40010808;
                  bVar38 = 0xb < uVar6;
                  if (bVar38) {
                    uVar6 = Ram40010808;
                  }
                  if ((bVar38 && 0x53 < uVar6) &&
                     (pcVar3 = (code *)UINT_40010850, pcVar3 != (code *)0x0)) {
                    (*pcVar3)(_DAT_10027610);
                  }
                }
                memset(&DAT_10027610,0,0x18);
                _DAT_10027610 = CONCAT44(pcStack_29c,local_2a0);
                DAT_10027618 = CONCAT44(local_294,local_298);
                DAT_10027620 = CONCAT44(pcStack_28c,local_290);
              }
            }
LAB_100019fc:
            uVar6 = recovered_10005d20();
            recovered_1000e894(&DAT_10023774,uVar6);
            DAT_10024308 = 0;
            recovered_10005fdc();
            if (DAT_100242f8 != (void *)0x0) {
              iVar10 = DAT_100242f0;
              iVar7 = extraout_r1;
              if (0 < DAT_100242f0) {
                iVar10 = DAT_100242f4;
                iVar7 = DAT_100242f4;
              }
              if (((0 < iVar10) && (uVar1 = DAT_100242f0 * iVar7 * 4, uVar1 != 0)) &&
                 (cVar5 = recovered_1001acec(), cVar5 != '\0')) {
                memcpy(DAT_10028fb0,DAT_100242f8,uVar1);
                DAT_10024314 = '\x01';
                DAT_1002413c = -1;
              }
            }
            recovered_10006078(((uintptr_t)pf_module_state + 0xd10U));
            recovered_100061c0(&DAT_10024318);
            iVar10 = Ram40010800;
            if ((iVar10 == 0x50414d57) && (iVar10 = Ram40010804, iVar10 != 0)) {
              uVar6 = Ram40010808;
              bVar38 = 0xb < uVar6;
              if (bVar38) {
                uVar6 = Ram40010808;
              }
              if ((bVar38 && 0x43 < uVar6) &&
                 (pcVar3 = (code *)UINT_40010840, pcVar3 != (code *)0x0)) {
                (*pcVar3)(str_10023775);
              }
            }
            if (DAT_10024318 == '\x01') {
              local_41f8 = 0;
              iVar10 = 0;
              do {
                pcVar36 = DAT_10024370;
                pcVar34 = DAT_1002436c;
                pcVar27 = DAT_10024368;
                pcVar8 = DAT_10024364;
                uVar6 = DAT_10024138;
                if (DAT_10024319 != '\0') break;
                if ((((DAT_1012e404 == '\0') && (DAT_1012e405 == '\0')) &&
                    (0x7fffffff < DAT_10024138)) &&
                   ((0x7fffffff < DAT_10024140 && (0x7fffffff < DAT_100242e4)))) {
                  local_41d4 = (char *)(uint)DAT_10027414;
                  local_41dc = 1;
LAB_10001c64:
                  local_4200 = (char *)0x0;
                  local_41fc = (char *)0x0;
                  local_41f4 = (char *)0x0;
                  local_41e8 = (char *)0x0;
                }
                else {
                  local_41d4 = (char *)0x1;
                  if (0x13 < DAT_10024138) {
                    local_41dc = DAT_10024138 >> 0x1f;
                    goto LAB_10001c64;
                  }
                  local_41dc = 0;
                  pcVar11 = DAT_1002430c + DAT_10024138 * 0xd9c;
                  if (*pcVar11 != '\x01') goto LAB_10001c64;
                  local_41e8 = &IRQ;
                  local_41f4 = *(char **)(pcVar11 + 0x60);
                  if (pcVar11[2] == '\0') {
                    local_41e8 = *(char **)(pcVar11 + 100);
                  }
                  pcVar21 = *(char **)(pcVar11 + 0x5c);
                  pcVar37 = local_41f4;
                  if (0 < (int)local_41f4) {
                    pcVar37 = local_41e8;
                  }
                  pcVar12 = *(char **)(pcVar11 + 0x58);
                  pcVar11 = local_41f4;
                  if (0 < (int)local_41f4) {
                    pcVar11 = pcVar37;
                  }
                  if ((int)pcVar11 < 1) {
                    local_4200 = pcVar12;
                    local_41fc = pcVar21;
                  }
                  else {
                    if ((0 < (int)DAT_10024130) && (0 < (int)DAT_10024134)) {
                      pcVar11 = pcVar21 + (int)local_41e8 + 6;
                      local_41e8 = DAT_10024134;
                      if ((int)pcVar11 < (int)DAT_10024134) {
                        local_41e8 = pcVar11;
                      }
                      if ((int)pcVar11 < 0) {
                        local_41e8 = (char *)0x0;
                      }
                      pcVar11 = pcVar12 + (int)local_41f4 + 5;
                      local_41f4 = DAT_10024130;
                      if ((int)pcVar11 < (int)DAT_10024130) {
                        local_41f4 = pcVar11;
                      }
                      if ((int)pcVar11 < 0) {
                        local_41f4 = (char *)0x0;
                      }
                      local_41fc = DAT_10024134;
                      if ((int)pcVar21 < (int)DAT_10024134) {
                        local_41fc = pcVar21;
                      }
                      if ((int)pcVar21 < 0) {
                        local_41fc = (char *)0x0;
                      }
                      local_4200 = DAT_10024130;
                      if ((int)pcVar12 < (int)DAT_10024130) {
                        local_4200 = pcVar12;
                      }
                      if ((int)pcVar12 < 0) {
                        local_4200 = (char *)0x0;
                      }
                      if (((int)local_4200 < (int)local_41f4) && ((int)local_41fc < (int)local_41e8)
                         ) {
                        local_41e8 = local_41e8 + -(int)local_41fc;
                        local_41f4 = local_41f4 + -(int)local_4200;
                        goto LAB_10002d14;
                      }
                    }
                    local_4200 = (char *)0x0;
                    local_41fc = (char *)0x0;
                    local_41f4 = (char *)0x0;
                    local_41e8 = (char *)0x0;
                  }
LAB_10002d14:
                  local_41dc = 0;
                }
                DAT_10024310 = DAT_10024310 + 1;
                uVar13 = recovered_100044fc(&DAT_10024318);
                if (DAT_10024318 == '\x01') {
                  bVar38 = false;
                  if ((((DAT_100242dc < &NotUsed) &&
                       (pcVar11 = DAT_1002430c + (int)DAT_100242dc * 0xd9c, *pcVar11 == '\x01')) &&
                      (pcVar11[1] == '\x01')) && (*(int *)(pcVar11 + 0x10) == 4)) {
                    recovered_1001aff0(((uintptr_t)pf_module_state + 0xd10U));
                    bVar38 = true;
                  }
                  memset(&local_41a0,0,0x20);
                  iVar7 = Ram40010800;
                  if ((iVar7 == 0x50414d57) && (iVar7 = Ram40010804, iVar7 != 0)) {
                    uVar14 = Ram40010808;
                    bVar39 = 0xb < uVar14;
                    if (bVar39) {
                      uVar14 = Ram40010808;
                    }
                    if ((bVar39 && 0x83 < uVar14) &&
                       (pcVar3 = (code *)UINT_40010880, pcVar3 != (code *)0x0)) {
                      uVar14 = (*pcVar3)(&local_41a0);
                      uVar4 = local_41a0;
                      if (uVar14 != 0) {
                        pcVar11 = (char *)local_41a0;
                        if ((local_41a0 & 1) == 0) {
                          bVar39 = (local_41a0 & 2) != 0;
                          pcVar37 = (char *)local_41a0;
                          uVar14 = extraout_r1_00;
                          if (bVar39) {
                            pcVar37 = local_418c;
                            uVar14 = local_4190;
                          }
                          if (bVar39 && (uVar14 != 0 || pcVar37 != (char *)0x0)) {
                            pcVar12 = DAT_10024364 + uVar14;
                            DAT_10024364 = DAT_10024130 + -1;
                            if ((int)pcVar12 < (int)(DAT_10024130 + -1)) {
                              DAT_10024364 = pcVar12;
                            }
                            pcVar37 = DAT_10024368 + (int)pcVar37;
                            pcVar21 = DAT_10024134 + -1;
                            if ((int)pcVar12 < 0) {
                              DAT_10024364 = (char *)0x0;
                            }
LAB_10002f40:
                            if ((int)pcVar37 < (int)pcVar21) {
                              pcVar21 = pcVar37;
                            }
                            goto LAB_10002f54;
                          }
                        }
                        else {
                          pcVar21 = (char *)0x0;
                          pcVar37 = (char *)0x0;
                          if (1 < (int)DAT_10024130) {
                            pcVar37 = DAT_10024130 + -1;
                            if (local_4188[0] == 0) {
                              pcVar12 = local_4198;
                              if (local_4198 < pcVar37) {
                                pcVar37 = local_4198;
                              }
                            }
                            else {
                              uVar41 = recovered_10000c20((ulonglong)
                                                          ((uint)local_4198 &
                                                          ~((int)local_4198 >> 0x1f)) *
                                                          ZEXT48(pcVar37),(ulonglong)local_4188[0]);
                              pcVar12 = (char *)uVar41;
                              if ((int)pcVar12 < (int)pcVar37) {
                                pcVar37 = pcVar12;
                              }
                            }
                            if ((int)pcVar12 < 0) {
                              pcVar37 = (char *)0x0;
                            }
                          }
                          DAT_10024364 = pcVar37;
                          if (1 < (int)DAT_10024134) {
                            pcVar21 = DAT_10024134 + -1;
                            if (local_4188[1] != 0) {
                              uVar41 = recovered_10000c20((ulonglong)
                                                          ((uint)local_4194 &
                                                          ~((int)local_4194 >> 0x1f)) *
                                                          ZEXT48(pcVar21),(ulonglong)local_4188[1]);
                              pcVar37 = (char *)uVar41;
                              goto LAB_10002f40;
                            }
                            pcVar37 = local_4194;
                            if (local_4194 < pcVar21) {
                              pcVar21 = local_4194;
                            }
LAB_10002f54:
                            if ((int)pcVar37 < 0) {
                              pcVar21 = (char *)0x0;
                            }
                          }
                          DAT_10024368 = pcVar21;
                        }
                        DAT_10024370 = pcVar11;
                        DAT_1002436c = PF_PART4(local_41a0, 4);
                        if ((uVar4 & 0x10000) != 0) {
                          DAT_1002436c = (char *)((uint)PF_PART4(local_41a0, 4) & 0xfffffffc |
                                                  ((uint)PF_PART4(local_41a0, 4) & 1) << 1 |
                                                 ((uint)PF_PART4(local_41a0, 4) & 3) >> 1);
                        }
                      }
                    }
                  }
                  if (DAT_100242dc < &NotUsed) {
                    pcVar11 = DAT_1002430c + (int)DAT_100242dc * 0xd9c;
                    cVar5 = *pcVar11;
                    bVar39 = cVar5 == '\x01';
                    if (bVar39) {
                      cVar5 = pcVar11[1];
                    }
                    if ((bVar39 && cVar5 == '\x01') && (!bVar38 && *(int *)(pcVar11 + 0x10) == 4)) {
                      recovered_1001aff0(((uintptr_t)pf_module_state + 0xd10U));
                    }
                  }
                }
                local_41c8 = 1;
                if (((((DAT_1012e408 == 0) && (DAT_1012e40c == '\0')) && (DAT_1012e40d == '\0')) &&
                    ((((DAT_1012e40e == '\0' && (DAT_1012e40f == '\0')) &&
                      ((DAT_1012e410 == '\0' && ((DAT_1012e411 == '\0' && (DAT_1012e412 == '\0')))))
                      ) && (DAT_1012e413 == '\0')))) &&
                   (((((((((DAT_1012e414 == '\0' && (DAT_1012e415 == '\0')) &&
                          (DAT_1012e416 == '\0')) &&
                         ((DAT_1012e417 == '\0' && (DAT_1012e418 == '\0')))) &&
                        (DAT_1012e419 == '\0')) &&
                       ((DAT_1012e41a == '\0' && (DAT_1012e41b == '\0')))) &&
                      (((DAT_1012e41c == '\0' &&
                        (((DAT_1012e41d == '\0' && (DAT_1012e41e == '\0')) && (DAT_1012e41f == '\0')
                         ))) && (((DAT_1012e420 == '\0' && (DAT_1012e421 == '\0')) &&
                                 (DAT_1012e422 == '\0')))))) &&
                     ((DAT_1012e423 == '\0' && (DAT_1012e424 == '\0')))) &&
                    (((DAT_1012e425 == '\0' &&
                      (((DAT_1012e426 == '\0' && (DAT_1012e427 == '\0')) && (DAT_1012e428 == '\0')))
                      ) && (((DAT_1012e429 == '\0' && (DAT_1012e42a == '\0')) &&
                            ((DAT_1012e42b == '\0' &&
                             (((DAT_1012e42c == '\0' && (DAT_1012e42d == '\0')) &&
                              ((DAT_1012e42e == '\0' &&
                               ((((DAT_1012e42f == '\0' && (DAT_1012e430 == '\0')) &&
                                 (DAT_1012e431 == '\0')) && (DAT_1012e432 == '\0')))))))))))))))) {
                  local_41c8 = (uint)(DAT_1012e433 | DAT_1012e434);
                }
                recovered_10006bd0(((uintptr_t)pf_module_state + 0xd10U));
                local_24 = 0;
                uVar14 = terror_ui_window_list(&local_41a0,0x10,&local_24);
                local_41a8 = (int *)0x0;
                if (uVar14 != 0) {
                  if (local_24 < 0x11) {
                    if (local_24 != 0) goto LAB_10001f30;
                  }
                  else {
                    local_24 = 0x10;
LAB_10001f30:
                    uVar14 = 0;
                    pcVar11 = local_4148 + 1;
                    do {
                      puVar33 = (undefined1 *)0xffffffff;
                      if (local_4188[uVar14 * 0x9e + -6] != 0) {
                        puVar22 = (undefined1 *)0x0;
                        pcVar37 = DAT_1002430c;
                        do {
                          if (*pcVar37 == '\x01') {
                            uVar28 = *(uint *)(pcVar37 + 0x10);
                            bVar38 = uVar28 == 6;
                            if (bVar38) {
                              uVar28 = *(uint *)(pcVar37 + 0xb1c);
                            }
                            puVar33 = puVar22;
                            if (bVar38 && uVar28 == local_4188[uVar14 * 0x9e + -6]) break;
                          }
                          puVar22 = puVar22 + 1;
                          pcVar37 = pcVar37 + 0xd9c;
                          puVar33 = (undefined1 *)0xffffffff;
                        } while (puVar22 != &NotUsed);
                      }
                      iVar7 = uVar14 * 0x278;
                      puVar20 = local_4188 + uVar14 * 0x9e + -6;
                      if ((local_4178[uVar14 * 0x9e] & 1) == 0) {
                        if ((int)puVar33 < 0) {
                          pcVar21 = local_4148 + iVar7;
                          local_41c4 = (char *)((uint)local_41c4 & 0xff000000 | 0xb784ec);
                          pcVar37 = pcVar21;
                          if (*pcVar21 == '\0') {
                            pcVar37 = str_10023ec1;
                          }
                          pcStack_29c = (char *)recovered_10005734(4,pcVar37,local_41c4,'\0');
                          uVar28 = local_4188[uVar14 * 0x9e];
                          if (uVar28 == 0) {
                            pcStack_28c = (char *)0x164;
                            if ((int)DAT_10024130 < 0x164) {
                              pcStack_28c = DAT_10024130;
                            }
                            pcStack_28c = pcStack_28c + -8;
                          }
                          else {
                            pcStack_28c = DAT_10024130 + -8;
                            if ((int)(uVar28 + 0x1c) < (int)(DAT_10024130 + -8)) {
                              pcStack_28c = (char *)(uVar28 + 0x1c);
                            }
                            if ((int)uVar28 < 0xc0) {
                              pcStack_28c = (char *)0xdc;
                            }
                          }
                          uVar28 = local_4188[uVar14 * 0x9e + 1];
                          if (uVar28 == 0) {
                            local_288 = (char *)0x11c;
                            if ((int)DAT_10024134 < 0x11c) {
                              local_288 = DAT_10024134;
                            }
                            local_288 = local_288 + -0x20;
                          }
                          else {
                            local_288 = DAT_10024134 + -0x20;
                            if ((int)(uVar28 + 0x34) < (int)(DAT_10024134 + -0x20)) {
                              local_288 = (char *)(uVar28 + 0x34);
                            }
                            if ((int)uVar28 < 0x58) {
                              local_288 = (char *)0x8c;
                            }
                          }
                          pcVar12 = (char *)local_4178[uVar14 * 0x9e + 1];
                          pcVar37 = (char *)local_4178[uVar14 * 0x9e + 2];
                          local_2a0 = (char *)0x6;
                          if (local_4148[iVar7] == '\0') {
                            pcVar21 = str_10023ec1;
                          }
                          local_290 = DAT_10024134 + -0x1c;
                          if ((int)pcVar37 < (int)(DAT_10024134 + -0x1c)) {
                            local_290 = pcVar37;
                          }
                          if ((int)pcVar37 < 0x20) {
                            local_290 = (char *)0x20;
                          }
                          local_294 = DAT_10024130 + (-8 - (int)pcStack_28c);
                          if ((int)pcVar12 < (int)(DAT_10024130 + (-8 - (int)pcStack_28c))) {
                            local_294 = pcVar12;
                          }
                          if ((int)pcVar12 < 8) {
                            local_294 = &SupervisorCall;
                          }
                          local_298 = pcVar21;
                          puVar33 = (undefined1 *)recovered_1000eac0(&local_2a0);
                          pcVar37 = DAT_1002430c;
                          if ((int)puVar33 < 0) goto LAB_10001f74;
                          *(uint *)(DAT_1002430c + (int)puVar33 * 0xd9c + 0xb1c) = *puVar20;
                          local_41a8 = (int *)0x1;
                        }
                        else {
                          pcVar37 = DAT_1002430c;
                        }
                        uVar15 = *(uint *)(pcVar37 + (int)puVar33 * 0xd9c + 0xb4c);
                        memcpy(&local_2a0,pcVar37 + (int)puVar33 * 0xd9c + 0xb24,0x278);
                        *(int *)(pcVar37 + (int)puVar33 * 0xd9c + 0xb20) = DAT_10024310;
                        memcpy(pcVar37 + (int)puVar33 * 0xd9c + 0xb24,puVar20,0x278);
                        uVar16 = local_4160[uVar14 * 0x9e];
                        uVar23 = local_4160[uVar14 * 0x9e + 1];
                        uVar26 = local_4160[uVar14 * 0x9e + 2];
                        uVar35 = local_4160[uVar14 * 0x9e + 3];
                        uVar28 = 0xff;
                        if (uVar16 < 0xff) {
                          uVar28 = uVar16;
                        }
                        cVar5 = (char)uVar28;
                        if (uVar16 == 0xffffffff) {
                          cVar5 = DAT_10024144;
                        }
                        uVar28 = uVar26;
                        if (3 < uVar26) {
                          uVar28 = 1;
                        }
                        if (uVar26 == 0xffffffff) {
                          uVar28 = uVar26;
                        }
                        pcVar37[(int)puVar33 * 0xd9c + 5] = cVar5;
                        *(uint *)(pcVar37 + (int)puVar33 * 0xd9c + 8) = uVar28;
                        uVar28 = 0xff;
                        if (uVar23 < 0xff) {
                          uVar28 = uVar23;
                        }
                        cVar5 = DAT_10028fe0;
                        if (uVar23 != 0xffffffff) {
                          cVar5 = (char)uVar28;
                        }
                        pcVar37[(int)puVar33 * 0xd9c + 6] = cVar5;
                        *(uint *)(pcVar37 + (int)puVar33 * 0xd9c + 0xc) = uVar35;
                        iVar17 = memcmp(&local_2a0,puVar20,0x278);
                        cVar5 = local_4148[iVar7];
                        if (cVar5 != '\0') {
                          iVar7 = (int)puVar33 * 0xd9c + 0x18;
                          uVar28 = 0;
                          do {
                            uVar16 = uVar28 + 1;
                            pcVar37[uVar28 + iVar7] = cVar5;
                            if (0x3e < uVar16) break;
                            cVar5 = pcVar11[uVar28];
                            uVar28 = uVar16;
                          } while (cVar5 != '\0');
                          pcVar37[uVar16 + iVar7] = '\0';
                        }
                        uVar28 = DAT_100290dc;
                        puVar22 = DAT_100242dc;
                        if ((local_4178[uVar14 * 0x9e] & 2) != 0) {
                          if ((uVar15 & 2) == 0) {
                            if (puVar33 != DAT_100242dc) {
                              uVar15 = 0xffffffff;
                              (pcVar37 + (int)puVar33 * 0xd9c + 1)[0] = '\x01';
                              pvVar29 = DAT_10024914;
                              (pcVar37 + (int)puVar33 * 0xd9c + 1)[1] = '\0';
                              if (0 < (int)uVar28) {
                                uVar16 = 0;
                                do {
                                  if (*(undefined1 **)((int)DAT_10024914 + uVar16 * 4) == puVar33) {
                                    uVar15 = uVar16;
                                    break;
                                  }
                                  uVar16 = uVar16 + 1;
                                } while (uVar28 != uVar16);
                              }
                              if (DAT_1002430c[(int)puVar33 * 0xd9c] == '\x01') {
                                if ((int)uVar15 < 0) {
                                  if ((int)uVar28 < 0x14) {
                                    DAT_100290dc = uVar28 + 1;
                                    uVar16 = uVar28;
                                    goto LAB_10002504;
                                  }
                                }
                                else {
                                  uVar16 = uVar28 - 1;
                                  if ((int)uVar15 < (int)uVar16) {
                                    uVar23 = uVar28 + ~uVar15;
                                    if (3 < uVar23) {
                                      uVar35 = uVar23 & 0xfffffffc;
                                      puVar31 = (undefined8 *)((int)DAT_10024914 + uVar15 * 4);
                                      uVar15 = uVar15 + uVar35;
                                      uVar26 = uVar35;
                                      do {
                                        uVar26 = uVar26 - 4;
                                        *puVar31 = *(undefined8 *)((int)puVar31 + 4);
                                        puVar31[1] = *(undefined8 *)((int)puVar31 + 0xc);
                                        puVar31 = puVar31 + 2;
                                      } while (uVar26 != 0);
                                      if (uVar23 == uVar35) goto LAB_10002504;
                                    }
                                    iVar7 = ~uVar15 + uVar28;
                                    puVar2 = (undefined4 *)((int)pvVar29 + uVar15 * 4);
                                    do {
                                      iVar7 = iVar7 + -1;
                                      *puVar2 = puVar2[1];
                                      puVar2 = puVar2 + 1;
                                    } while (iVar7 != 0);
                                  }
LAB_10002504:
                                  *(undefined1 **)((int)pvVar29 + uVar16 * 4) = puVar33;
                                }
                                puVar22 = puVar33;
                                DAT_100242dc = puVar33;
                              }
                            }
                          }
                        }
                        pcVar21 = DAT_10024130;
                        if (pcVar37[(int)puVar33 * 0xd9c + 3] == '\0') {
                          if (pcVar37[(int)puVar33 * 0xd9c + 4] == '\x01') {
                            pcVar12 = *(char **)(pcVar37 + (int)puVar33 * 0xd9c + 0x60);
                            pcVar32 = *(char **)(pcVar37 + (int)puVar33 * 0xd9c + 100);
                            pcVar25 = DAT_10024134;
                          }
                          else {
                            uVar28 = local_4188[uVar14 * 0x9e];
                            if (uVar28 == 0) {
                              pcVar12 = (char *)0x164;
                              if ((int)DAT_10024130 < 0x164) {
                                pcVar12 = DAT_10024130;
                              }
                              pcVar12 = pcVar12 + -8;
                            }
                            else {
                              pcVar12 = DAT_10024130 + -8;
                              if ((int)(uVar28 + 0x1c) < (int)(DAT_10024130 + -8)) {
                                pcVar12 = (char *)(uVar28 + 0x1c);
                              }
                              if ((int)uVar28 < 0xc0) {
                                pcVar12 = (char *)0xdc;
                              }
                            }
                            uVar28 = local_4188[uVar14 * 0x9e + 1];
                            *(char **)(pcVar37 + (int)puVar33 * 0xd9c + 0x60) = pcVar12;
                            pcVar25 = DAT_10024134;
                            if (uVar28 == 0) {
                              pcVar32 = (char *)0x11c;
                              if ((int)DAT_10024134 < 0x11c) {
                                pcVar32 = DAT_10024134;
                              }
                              pcVar32 = pcVar32 + -0x20;
                            }
                            else {
                              pcVar32 = DAT_10024134 + -0x20;
                              if ((int)(uVar28 + 0x34) < (int)(DAT_10024134 + -0x20)) {
                                pcVar32 = (char *)(uVar28 + 0x34);
                              }
                              if ((int)uVar28 < 0x58) {
                                pcVar32 = (char *)0x8c;
                              }
                            }
                            *(char **)(pcVar37 + (int)puVar33 * 0xd9c + 100) = pcVar32;
                          }
                          pcVar24 = *(char **)(pcVar37 + (int)puVar33 * 0xd9c + 0x5c);
                          pcVar18 = *(char **)(pcVar37 + (int)puVar33 * 0xd9c + 0x58);
                          *(char **)(pcVar37 + (int)puVar33 * 0xd9c + 0x74) = pcVar32;
                          pcVar32 = pcVar25 + -0x1c;
                          if ((int)pcVar24 < (int)(pcVar25 + -0x1c)) {
                            pcVar32 = pcVar24;
                          }
                          if ((int)pcVar24 < 0x1a) {
                            pcVar32 = (char *)0x1a;
                          }
                          *(char **)(pcVar37 + (int)puVar33 * 0xd9c + 0x70) = pcVar12;
                          *(char **)(pcVar37 + (int)puVar33 * 0xd9c + 0x5c) = pcVar32;
                          pcVar25 = pcVar21 + (-4 - (int)pcVar12);
                          if ((int)pcVar18 < (int)(pcVar21 + (-4 - (int)pcVar12))) {
                            pcVar25 = pcVar18;
                          }
                          if ((int)pcVar18 < 4) {
                            pcVar25 = (char *)0x4;
                          }
                          *(char **)(pcVar37 + (int)puVar33 * 0xd9c + 0x6c) = pcVar32;
                          *(char **)(pcVar37 + (int)puVar33 * 0xd9c + 0x58) = pcVar25;
                          *(char **)(pcVar37 + (int)puVar33 * 0xd9c + 0x68) = pcVar25;
                        }
                        uVar28 = 8;
                        if (pcVar37[(int)puVar33 * 0xd9c + 2] != '\0') {
                          uVar28 = 0xc;
                        }
                        uVar15 = local_4178[uVar14 * 0x9e];
                        if (puVar22 == puVar33) {
                          uVar28 = uVar28 | 2;
                        }
                        if (*(int *)(pcVar37 + (int)puVar33 * 0xd9c + 0x10) == 6) {
                          iVar7 = *(int *)(pcVar37 + (int)puVar33 * 0xd9c + 0x60);
                          if (iVar7 < 0x1e) {
                            iVar7 = 0x1d;
                          }
                          if (local_4160[uVar14 * 0x9e + 4] == iVar7 - 0x1cU) {
                            iVar19 = *(int *)(pcVar37 + (int)puVar33 * 0xd9c + 100);
                            if (iVar19 < 0x36) {
                              iVar19 = 0x35;
                            }
                            if (local_4160[uVar14 * 0x9e + 5] == iVar19 - 0x34U) goto LAB_10002708;
                          }
                          if (*(uint *)(pcVar37 + (int)puVar33 * 0xd9c + 0xb1c) != 0) {
                            iVar19 = *(int *)(pcVar37 + (int)puVar33 * 0xd9c + 100);
                            if (iVar19 < 0x36) {
                              iVar19 = 0x35;
                            }
                            terror_ui_window_set_content_size(*(uint *)(pcVar37 + (int)puVar33 * 0xd9c + 0xb1c),
                                               iVar7 - 0x1cU,iVar19 - 0x34);
                          }
                        }
LAB_10002708:
                        if (local_4178[uVar14 * 0x9e + 1] ==
                            *(uint *)(pcVar37 + (int)puVar33 * 0xd9c + 0x58)) {
                          if ((puVar33 < &NotUsed) &&
                             (local_4178[uVar14 * 0x9e + 2] !=
                              *(uint *)(pcVar37 + (int)puVar33 * 0xd9c + 0x5c) ||
                              (uVar15 & 0xe) != uVar28)) goto LAB_10001f40;
                        }
                        else if (puVar33 < &NotUsed) {
LAB_10001f40:
                          pbVar30 = (byte *)(DAT_1002430c + (int)puVar33 * 0xd9c);
                          uVar28 = (uint)*pbVar30;
                          bVar38 = uVar28 == 1;
                          if (bVar38) {
                            uVar28 = *(uint *)(pbVar30 + 0x10);
                          }
                          if (bVar38 && uVar28 == 6) {
                            uVar28 = 8;
                            if (pbVar30[2] != 0) {
                              uVar28 = 0xc;
                            }
                            if (DAT_100242dc == puVar33) {
                              uVar28 = uVar28 | 2;
                            }
                            if (*(uint *)(pbVar30 + 0xb1c) == 0) {
                              uVar15 = 0;
                            }
                            else {
                              iVar7 = *(int *)(pbVar30 + 0x60);
                              iVar19 = *(int *)(pbVar30 + 100);
                              if (iVar7 < 0x1e) {
                                iVar7 = 0x1d;
                              }
                              if (iVar19 < 0x36) {
                                iVar19 = 0x35;
                              }
                              terror_ui_window_set_content_size(*(uint *)(pbVar30 + 0xb1c),iVar7 - 0x1c,
                                                 iVar19 - 0x34);
                              uVar15 = *(uint *)(pbVar30 + 0xb1c);
                            }
                            terror_ui_window_configure(uVar15,*(int *)(pbVar30 + 0x58),
                                               *(int *)(pbVar30 + 0x5c),0xe,uVar28);
                          }
                        }
                        local_41a8 = (int *)((uint)(iVar17 != 0) | (uint)local_41a8);
                      }
                      else if (-1 < (int)puVar33) {
                        recovered_10021c20(puVar33,0);
                        local_41a8 = (int *)0x1;
                      }
LAB_10001f74:
                      pcVar11 = pcVar11 + 0x278;
                      uVar14 = uVar14 + 1;
                    } while (uVar14 < local_24);
                  }
                  iVar7 = 0;
                  puVar33 = (undefined1 *)0x0;
                  pcVar11 = DAT_1002430c;
                  do {
                    if (((pcVar11[iVar7] == '\x01') && (*(int *)(pcVar11 + iVar7 + 0x10) == 6)) &&
                       (*(int *)(pcVar11 + iVar7 + 0xb20) != DAT_10024310)) {
                      recovered_10021c20(puVar33,0);
                      local_41a8 = (int *)0x1;
                      pcVar11 = DAT_1002430c;
                    }
                    puVar33 = puVar33 + 1;
                    iVar7 = iVar7 + 0xd9c;
                  } while (puVar33 != &NotUsed);
                }
                memset(&local_41a0,0,0x18);
                iVar7 = Ram40010800;
                if ((iVar7 == 0x50414d57) && (iVar7 = Ram40010804, iVar7 != 0)) {
                  uVar14 = Ram40010808;
                  bVar38 = 0xb < uVar14;
                  if (bVar38) {
                    uVar14 = Ram40010808;
                  }
                  if (((!bVar38 || uVar14 < 0x16c) ||
                      (pcVar3 = (code *)UINT_40010968, pcVar3 == (code *)0x0)) ||
                     (uVar14 = (*pcVar3)(&local_41a0), uVar14 == 0)) goto LAB_10002874;
                  if ((DAT_1012e459 != '\x01') ||
                     (uVar14 = 0,
                     (char *)DAT_1012e460 != local_4198 || (char *)DAT_1012e464 != local_4194)) {
                    uVar14 = 1;
                    DAT_1012e464 = (int)local_4194;
                    DAT_1012e460 = (int)local_4198;
                    DAT_1012e459 = '\x01';
                  }
                }
                else {
LAB_10002874:
                  uVar14 = 0;
                }
                uVar28 = 0;
                if (DAT_10024154 == '\x01') {
                  memset(&local_41a0,0,0x18);
                  iVar7 = Ram40010800;
                  if ((iVar7 == 0x50414d57) && (iVar7 = Ram40010804, iVar7 != 0)) {
                    uVar28 = Ram40010808;
                    bVar38 = 0xb < uVar28;
                    if (bVar38) {
                      uVar28 = Ram40010808;
                    }
                    if ((bVar38 && 0x16b < uVar28) &&
                       (pcVar3 = (code *)UINT_40010968, pcVar3 != (code *)0x0)) {
                      uVar15 = (*pcVar3)(&local_41a0);
                      uVar28 = local_4190;
                      if ((uVar15 != 0) &&
                         ((DAT_1012e468 != '\x01' || (-1 < (int)(local_4190 - (int)DAT_1012e46c)))))
                      {
                        DAT_1012e468 = '\x01';
                        memset(&local_2a0,0,0x18);
                        local_41a0 = local_41a0 & 0xffffffffffffff00;
                        iVar7 = Ram40010800;
                        if ((iVar7 == 0x50414d57) && (iVar7 = Ram40010804, iVar7 != 0)) {
                          uVar15 = Ram40010808;
                          bVar38 = 0xb < uVar15;
                          if (bVar38) {
                            uVar15 = Ram40010808;
                          }
                          if (((bVar38 && 0x173 < uVar15) &&
                              (pcVar3 = (code *)UINT_40010970, pcVar3 != (code *)0x0)) &&
                             (uVar15 = (*pcVar3)(str_10024155,&local_2a0,(char *)&local_41a0,0x80),
                             uVar15 != 0)) {
                            DAT_1012e459 = '\0';
                            DAT_1012e46c = local_290 + 0x5eec0;
                            uVar28 = 1;
                            goto LAB_10003028;
                          }
                        }
                        DAT_1012e46c = (char *)(uVar28 + 0x1518);
                      }
                    }
                  }
                  uVar28 = 0;
                }
LAB_10003028:
                pcVar37 = DAT_10024368;
                pcVar11 = DAT_10024364;
                uVar15 = 1;
                uVar16 = 1;
                if (((DAT_1012e404 == '\0') && (DAT_1012e405 == '\0')) &&
                   ((0x7fffffff < DAT_10024138 &&
                    ((0x7fffffff < DAT_10024140 && (0x7fffffff < DAT_100242e4)))))) {
                  uVar16 = (uint)DAT_10027414;
                }
                uVar14 = uVar14 | uVar28;
                uVar28 = 0;
                puVar20 = (uint *)(DAT_1002430c + 0x10);
                do {
                  if ((char)puVar20[-4] == '\x01') {
                    uVar23 = *puVar20;
                    bVar38 = uVar23 == 6;
                    if (bVar38) {
                      uVar23 = (uint)*(byte *)((int)puVar20 + -0xf);
                    }
                    if ((bVar38 && uVar23 == 1) && (*(char *)((int)puVar20 + -0xe) != '\x01'))
                    break;
                  }
                  bVar38 = uVar28 < 0x13;
                  puVar20 = puVar20 + 0x367;
                  uVar28 = uVar28 + 1;
                  uVar15 = (uint)bVar38;
                } while (uVar28 != 0x14);
                uVar28 = uVar13 | local_41c8 | (uint)local_41a8;
                uVar23 = uVar28 | uVar14;
                if ((((uVar13 | local_41c8) & 1) == 0 && local_41a8 == (int *)0x0) && uVar14 == 0) {
                  pcVar12 = (char *)(uint)DAT_10024308;
                  pcVar21 = pcVar12;
                  if (pcVar12 == (char *)0x0) {
                    pcVar21 = pcVar8;
                  }
                  if (pcVar12 != (char *)0x0 || DAT_10024364 != pcVar21) goto LAB_10003180;
                  pcVar21 = (char *)0xd9c;
                  pcVar12 = pcVar27;
                  if (DAT_10024368 == pcVar27) {
                    pcVar21 = pcVar34;
                    pcVar12 = DAT_1002436c;
                  }
                  if (DAT_10024368 != pcVar27 || pcVar12 != pcVar21) goto LAB_10003180;
                  uVar26 = (uint)local_41d4 ^ uVar16;
                  bVar38 = DAT_10024370 == pcVar36 && (uVar26 & 1) == 0;
                  uVar13 = uVar26;
                  if (bVar38) {
                    uVar13 = uVar15 ^ 1;
                  }
                  if (bVar38 && (uVar13 & 1) == 0) {
                    if (local_41f8 == 0) {
                      local_41f8 = 0xf;
                      if ((((DAT_1002432c != 0) && (DAT_10024330 != 0)) &&
                          (iVar7 = Ram40010800, iVar7 == 0x50414d57)) &&
                         (iVar7 = Ram40010804, iVar7 != 0)) {
                        uVar6 = Ram40010808;
                        bVar38 = 0xb < uVar6;
                        if (bVar38) {
                          uVar6 = Ram40010808;
                        }
                        if ((bVar38 && 0x15f < uVar6) &&
                           (pcVar3 = (code *)UINT_4001095c, pcVar3 != (code *)0x0)) {
                          (*pcVar3)(0,0,DAT_1002432c,DAT_10024330);
                        }
                      }
                    }
                    else {
                      local_41f8 = local_41f8 + -1;
                    }
                  }
                  else {
                    local_41f8 = 0;
                    if (DAT_10024370 != pcVar36 || (uVar26 & 1) != 0) goto LAB_10003180;
                  }
LAB_10003ca0:
                  iVar7 = 0;
                  if ((local_41c8 & 1) == 0 && (local_41a8 == (int *)0x0 && uVar15 == 0)) {
                    if (iVar10 == 0) {
                      iVar7 = 0x1e;
                      goto LAB_10003d2c;
                    }
                    iVar7 = iVar10 + -1;
                  }
                  else {
LAB_10003d2c:
                    iVar10 = Ram40010800;
                    if ((iVar10 == 0x50414d57) && (iVar10 = Ram40010804, iVar10 != 0)) {
                      uVar6 = Ram40010808;
                      bVar38 = 0xb < uVar6;
                      if (bVar38) {
                        uVar6 = Ram40010808;
                      }
                      if ((bVar38 && 0x9f < uVar6) &&
                         (pcVar3 = (code *)UINT_4001089c, pcVar3 != (code *)0x0)) {
                        (*pcVar3)();
                      }
                    }
                  }
                  iVar10 = Ram40010800;
                  uVar6 = 4000;
                  if ((uVar16 & 1) != 0) {
                    uVar6 = 1000;
                  }
                  if ((iVar10 == 0x50414d57) && (iVar10 = Ram40010804, iVar10 != 0)) {
                    uVar13 = Ram40010808;
                    bVar38 = 0xb < uVar13;
                    if (bVar38) {
                      uVar13 = Ram40010808;
                    }
                    if ((bVar38 && 0x177 < uVar13) &&
                       (pcVar3 = (code *)UINT_40010974, pcVar3 != (code *)0x0)) {
                      (*pcVar3)(uVar6);
                    }
                  }
                  if (((((((uVar16 | ~uVar15) & 1) == 0) &&
                        (iVar10 = Ram40010800, iVar10 == 0x50414d57)) &&
                       (iVar10 = Ram40010804, iVar10 != 0)) &&
                      ((uVar6 = Ram40010808, 0xb < uVar6 && (uVar6 = Ram40010808, 0x9f < uVar6))))
                     && (pcVar3 = (code *)UINT_4001089c, pcVar3 != (code *)0x0)) {
                    (*pcVar3)();
                  }
                }
                else {
LAB_10003180:
                  local_41c4 = DAT_10024368 + 0x10;
                  pcVar21 = pcVar27 + 0x10;
                  local_41b8 = DAT_10024368;
                  if ((int)pcVar27 < (int)DAT_10024368) {
                    local_41b8 = pcVar27;
                  }
                  pcVar12 = DAT_10024364 + 0xc;
                  local_41bc = local_41c4;
                  if ((int)local_41c4 < (int)pcVar21) {
                    local_41bc = pcVar21;
                  }
                  local_41bc = local_41bc + -(int)local_41b8;
                  pcVar32 = pcVar8 + 0xc;
                  pcVar25 = DAT_10024364;
                  if ((int)pcVar8 < (int)DAT_10024364) {
                    pcVar25 = pcVar8;
                  }
                  local_41b0 = pcVar12;
                  if ((int)pcVar12 < (int)pcVar32) {
                    local_41b0 = pcVar32;
                  }
                  local_41b0 = local_41b0 + -(int)pcVar25;
                  local_41b4 = DAT_10024368;
                  if (((uVar28 | ~uVar14) & 1) == 0) {
                    pcVar18 = (char *)((uint)DAT_10024308 | (uint)local_41d4 | uVar16);
                    bVar38 = ((uint)pcVar18 & 1) == 0;
                    if (bVar38) {
                      pcVar18 = pcVar8;
                    }
                    bVar39 = bVar38 && DAT_10024364 == pcVar18;
                    if (bVar38 && DAT_10024364 == pcVar18) {
                      bVar39 = DAT_10024368 == pcVar27;
                    }
                    if (!bVar39) goto LAB_10003270;
                    pcVar18 = &DAT_10024318;
                    pcVar24 = DAT_1002436c;
                    if (DAT_1002436c == pcVar34) {
                      pcVar18 = pcVar36;
                      pcVar24 = DAT_10024370;
                    }
                    if (((DAT_1002436c != pcVar34 || pcVar24 != pcVar18) || (DAT_10024314 != '\x01')
                        ) || (DAT_1002413c != -1)) goto LAB_10003270;
                    recovered_1000bb1c((int *)&local_41a0);
                    recovered_1000ba84((int *)&local_2a0,(int)pcVar25,(int)local_41b8,
                                       (int)local_41b0,(int)local_41bc,(int)(char *)local_41a0,
                                       (int)PF_PART4(local_41a0, 4),(int)local_4198,(int)local_4194);
                    recovered_1000bc48((int *)&local_2a0,(int)local_2a0,(int)pcStack_29c,
                                       (int)local_298,(int)local_294,(int)DAT_10024130,
                                       (int)DAT_10024134);
                    local_41bc = local_294;
                    pcVar24 = local_298;
                    pcVar18 = pcStack_29c;
                    pcVar25 = local_2a0;
                    local_41b8 = pcStack_29c;
                    local_41b0 = local_298;
                    recovered_1000bd14((int)local_2a0,(int)pcStack_29c,(int)local_298,(int)local_294
                                      );
                    recovered_1000be90((int *)&local_41a0);
                    recovered_1000c2f0((int)(char *)local_41a0,(int)PF_PART4(local_41a0, 4),(int)local_4198
                                       ,(int)local_4194);
                    recovered_10006078(((uintptr_t)pf_module_state + 0xd10U));
                    iVar7 = recovered_1000c47c(&DAT_10024318,(undefined4 *)pcVar25,
                                               (undefined4 *)pcVar18,(undefined4 *)pcVar24,
                                               (undefined4 *)local_41bc);
                    if (iVar7 == 0) goto LAB_10003270;
                    iVar7 = 0;
                    if (uVar15 == 0) goto LAB_10003b14;
                    goto LAB_10003e60;
                  }
LAB_10003270:
                  if ((local_41a8 != (int *)0x0 || (local_41c8 & 1) != 0) || uVar14 != 0) {
                    DAT_1002413c = -1;
                    DAT_10024314 = '\0';
                  }
                  if ((((((uVar23 | (uint)local_41d4 ^ uVar16) & 1) == 0 && local_41dc == 0) &&
                       ((int)DAT_10024138 < 0x14)) && (uVar6 == DAT_10024138)) &&
                     ((0x7fffffff < DAT_10024140 &&
                      (pcVar18 = DAT_1002430c + uVar6 * 0xd9c, *pcVar18 == '\x01')))) {
                    pcVar8 = local_41b0;
                    if (0 < (int)local_41b0) {
                      pcVar8 = local_41bc;
                    }
                    if (0 < (int)pcVar8) {
                      pcVar8 = local_41f4;
                      if (0 < (int)local_41f4) {
                        pcVar8 = local_41e8;
                      }
                      if ((int)pcVar8 < 1) {
                        local_41fc = local_41b8;
                        local_41f4 = local_41b0;
                        local_41e8 = local_41bc;
                        local_4200 = pcVar25;
                      }
                      else {
                        pcVar8 = local_41e8 + (int)local_41fc;
                        if ((int)(local_41e8 + (int)local_41fc) <
                            (int)(local_41b8 + (int)local_41bc)) {
                          pcVar8 = local_41b8 + (int)local_41bc;
                        }
                        if ((int)local_41b8 < (int)local_41fc) {
                          local_41fc = local_41b8;
                        }
                        local_41e8 = pcVar8 + -(int)local_41fc;
                        pcVar8 = local_41f4 + (int)local_4200;
                        if ((int)(local_41f4 + (int)local_4200) < (int)(pcVar25 + (int)local_41b0))
                        {
                          pcVar8 = pcVar25 + (int)local_41b0;
                        }
                        if ((int)pcVar25 < (int)local_4200) {
                          local_4200 = pcVar25;
                        }
                        local_41f4 = pcVar8 + -(int)local_4200;
                      }
                    }
                    pcVar27 = &IRQ;
                    pcVar8 = *(char **)(pcVar18 + 0x60);
                    pcVar34 = *(char **)(pcVar18 + 0x5c);
                    if (pcVar18[2] == '\0') {
                      pcVar27 = *(char **)(pcVar18 + 100);
                    }
                    pcVar36 = *(char **)(pcVar18 + 0x58);
                    if (((int)pcVar8 < 1) || ((int)pcVar27 < 1)) {
                    }
                    else {
                      if ((0 < (int)DAT_10024130) && (0 < (int)DAT_10024134)) {
                        pcVar27 = pcVar34 + (int)pcVar27 + 6;
                        pcVar8 = pcVar36 + (int)pcVar8 + 5;
                        pcVar11 = DAT_10024134;
                        if ((int)pcVar27 < (int)DAT_10024134) {
                          pcVar11 = pcVar27;
                        }
                        if ((int)pcVar27 < 0) {
                          pcVar11 = (char *)0x0;
                        }
                        pcVar37 = DAT_10024130;
                        if ((int)pcVar8 < (int)DAT_10024130) {
                          pcVar37 = pcVar8;
                        }
                        if ((int)pcVar8 < 0) {
                          pcVar37 = (char *)0x0;
                        }
                        pcVar21 = DAT_10024134;
                        if ((int)pcVar34 < (int)DAT_10024134) {
                          pcVar21 = pcVar34;
                        }
                        if ((int)pcVar34 < 0) {
                          pcVar21 = (char *)0x0;
                        }
                        pcVar12 = DAT_10024130;
                        if ((int)pcVar36 < (int)DAT_10024130) {
                          pcVar12 = pcVar36;
                        }
                        if ((int)pcVar36 < 0) {
                          pcVar12 = (char *)0x0;
                        }
                        if ((int)pcVar12 < (int)pcVar37) {
                          pcVar8 = (char *)0x0;
                          pcVar27 = (char *)0x0;
                          pcVar34 = (char *)0x0;
                          pcVar36 = (char *)0x0;
                          if ((int)pcVar21 < (int)pcVar11) {
                            pcVar27 = pcVar11 + -(int)pcVar21;
                            pcVar8 = pcVar37 + -(int)pcVar12;
                            pcVar34 = pcVar21;
                            pcVar36 = pcVar12;
                          }
                          goto LAB_10003814;
                        }
                      }
                      pcVar8 = (char *)0x0;
                      pcVar27 = (char *)0x0;
                      pcVar34 = (char *)0x0;
                      pcVar36 = (char *)0x0;
                    }
LAB_10003814:
                    pcVar11 = local_41f4;
                    if (0 < (int)local_41f4) {
                      pcVar11 = local_41e8;
                    }
                    if (0 < (int)pcVar11) {
                      pcVar11 = pcVar8;
                      if (0 < (int)pcVar8) {
                        pcVar11 = pcVar27;
                      }
                      if ((int)pcVar11 < 1) {
                        pcVar8 = local_41f4;
                        pcVar27 = local_41e8;
                        pcVar34 = local_41fc;
                        pcVar36 = local_4200;
                      }
                      else {
                        pcVar11 = pcVar27 + (int)pcVar34;
                        if ((int)(pcVar27 + (int)pcVar34) < (int)(local_41e8 + (int)local_41fc)) {
                          pcVar11 = local_41e8 + (int)local_41fc;
                        }
                        if ((int)local_41fc < (int)pcVar34) {
                          pcVar34 = local_41fc;
                        }
                        pcVar27 = pcVar11 + -(int)pcVar34;
                        pcVar11 = pcVar8 + (int)pcVar36;
                        if ((int)(pcVar8 + (int)pcVar36) < (int)(local_41f4 + (int)local_4200)) {
                          pcVar11 = local_41f4 + (int)local_4200;
                        }
                        if ((int)local_4200 < (int)pcVar36) {
                          pcVar36 = local_4200;
                        }
                        pcVar8 = pcVar11 + -(int)pcVar36;
                      }
                    }
                    local_41ac = (char *)0x0;
                    if (((int)DAT_10024130 < 1) || ((int)DAT_10024134 < 1)) {
LAB_10003864:
                      pcVar36 = (char *)0x0;
                      local_41b0 = (char *)0x0;
                      pcVar37 = (char *)0x0;
                    }
                    else {
                      pcVar11 = pcVar8;
                      if (0 < (int)pcVar8) {
                        pcVar11 = pcVar27;
                      }
                      if ((int)pcVar11 < 1) goto LAB_10003864;
                      pcVar27 = pcVar27 + (int)pcVar34;
                      pcVar11 = DAT_10024134;
                      if ((int)pcVar27 < (int)DAT_10024134) {
                        pcVar11 = pcVar27;
                      }
                      pcVar8 = pcVar8 + (int)pcVar36;
                      if ((int)pcVar27 < 0) {
                        pcVar11 = (char *)0x0;
                      }
                      pcVar27 = DAT_10024130;
                      if ((int)pcVar8 < (int)DAT_10024130) {
                        pcVar27 = pcVar8;
                      }
                      if ((int)pcVar8 < 0) {
                        pcVar27 = (char *)0x0;
                      }
                      pcVar8 = DAT_10024134;
                      if ((int)pcVar34 < (int)DAT_10024134) {
                        pcVar8 = pcVar34;
                      }
                      if ((int)pcVar34 < 0) {
                        pcVar8 = (char *)0x0;
                      }
                      pcVar34 = DAT_10024130;
                      if ((int)pcVar36 < (int)DAT_10024130) {
                        pcVar34 = pcVar36;
                      }
                      if ((int)pcVar36 < 0) {
                        pcVar34 = (char *)0x0;
                      }
                      if ((int)pcVar27 <= (int)pcVar34) goto LAB_10003864;
                      pcVar36 = (char *)0x0;
                      pcVar37 = (char *)0x0;
                      if ((int)pcVar8 < (int)pcVar11) {
                        pcVar36 = pcVar27 + -(int)pcVar34;
                      }
                      local_41b0 = (char *)0x0;
                      if ((int)pcVar8 < (int)pcVar11) {
                        pcVar37 = pcVar11 + -(int)pcVar8;
                        local_41b0 = pcVar8;
                        local_41ac = pcVar34;
                      }
                    }
                    iVar7 = recovered_1000c638((int)local_41ac,(int)local_41b0,(int)pcVar36,
                                               (int)pcVar37);
                    if (iVar7 != 0) {
                      recovered_10006078(((uintptr_t)pf_module_state + 0xd10U));
                      pcVar34 = local_41ac;
                      pcVar25 = local_41b0;
LAB_10003aec:
                      iVar7 = recovered_1000c47c(&DAT_10024318,(undefined4 *)pcVar34,
                                                 (undefined4 *)pcVar25,(undefined4 *)pcVar36,
                                                 (undefined4 *)pcVar37);
                      if (iVar7 != 0) goto LAB_10003af8;
                    }
LAB_10003bdc:
                    if ((((int)DAT_10024138 < 0) || (DAT_10024140 < 0x80000000)) ||
                       (iVar7 = recovered_1000c638(0,0,(int)DAT_10024130,(int)DAT_10024134),
                       iVar7 == 0)) {
                      DAT_10024308 = 0;
                      recovered_10005fdc();
                      if (DAT_100242f8 != (void *)0x0) {
                        iVar7 = DAT_100242f0;
                        iVar17 = extraout_r1_01;
                        if (0 < DAT_100242f0) {
                          iVar7 = DAT_100242f4;
                          iVar17 = DAT_100242f4;
                        }
                        if (((0 < iVar7) && (uVar1 = DAT_100242f0 * iVar17 * 4, uVar1 != 0)) &&
                           (cVar5 = recovered_1001acec(), cVar5 != '\0')) {
                          memcpy(DAT_10028fb0,DAT_100242f8,uVar1);
                          DAT_10024314 = '\x01';
                          DAT_1002413c = -1;
                        }
                      }
                    }
                    recovered_10006078(((uintptr_t)pf_module_state + 0xd10U));
                    recovered_100061c0(&DAT_10024318);
                    local_41f8 = 0;
                    goto LAB_10003ca0;
                  }
                  if ((((((uVar23 | (uint)local_41d4 | uVar16) & 1) != 0) ||
                       (DAT_1002436c != pcVar34)) || (DAT_10024370 != pcVar36)) ||
                     (((DAT_10024364 == pcVar8 && (DAT_10024368 == pcVar27)) ||
                      ((DAT_10024314 != '\x01' || (DAT_1002413c != -1)))))) goto LAB_10003bdc;
                  local_41b8 = (char *)0x0;
                  pcVar18 = (char *)0x0;
                  bVar38 = (int)DAT_10024130 < 1;
                  pcVar34 = (char *)0x0;
                  pcVar25 = (char *)0x0;
                  local_41d4 = (char *)0x0;
                  local_41bc = (char *)0x0;
                  local_41ac = (char *)0x0;
                  local_41b0 = (char *)0x0;
                  pcVar36 = (char *)(uint)bVar38;
                  if (!bVar38 && (int)DAT_10024134 >= 1) {
                    if ((int)DAT_10024134 <= (int)pcVar21) {
                      pcVar21 = DAT_10024134;
                    }
                    if ((int)pcVar27 < -0x10) {
                      pcVar21 = (char *)0x0;
                    }
                    if ((int)DAT_10024130 <= (int)pcVar32) {
                      pcVar32 = DAT_10024130;
                    }
                    if ((int)pcVar8 < -0xc) {
                      pcVar32 = (char *)0x0;
                    }
                    pcVar34 = DAT_10024134;
                    if ((int)pcVar27 < (int)DAT_10024134) {
                      pcVar34 = pcVar27;
                    }
                    if ((int)pcVar27 < 0) {
                      pcVar34 = (char *)0x0;
                    }
                    pcVar27 = DAT_10024130;
                    if ((int)pcVar8 < (int)DAT_10024130) {
                      pcVar27 = pcVar8;
                    }
                    if ((int)pcVar8 < 0) {
                      pcVar27 = (char *)0x0;
                    }
                    local_41ac = (char *)0x0;
                    local_41bc = (char *)0x0;
                    local_41d4 = (char *)0x0;
                    local_41b8 = (char *)0x0;
                    if ((int)pcVar27 < (int)pcVar32) {
                      local_41bc = (char *)0x0;
                      if ((int)pcVar34 < (int)pcVar21) {
                        pcVar18 = pcVar32 + -(int)pcVar27;
                      }
                      local_41d4 = (char *)0x0;
                      local_41b8 = (char *)0x0;
                      if ((int)pcVar34 < (int)pcVar21) {
                        local_41b8 = pcVar21 + -(int)pcVar34;
                        local_41d4 = pcVar34;
                        local_41bc = pcVar27;
                      }
                    }
                    local_41b0 = local_41c4;
                    if ((int)DAT_10024134 <= (int)local_41c4) {
                      local_41b0 = DAT_10024134;
                    }
                    if ((int)pcVar37 < -0x10) {
                      local_41b0 = (char *)0x0;
                    }
                    if ((int)DAT_10024130 <= (int)pcVar12) {
                      pcVar12 = DAT_10024130;
                    }
                    if ((int)pcVar11 < -0xc) {
                      pcVar12 = (char *)0x0;
                    }
                    pcVar25 = DAT_10024134;
                    if ((int)pcVar37 < (int)DAT_10024134) {
                      pcVar25 = pcVar37;
                    }
                    if ((int)pcVar37 < 0) {
                      pcVar25 = (char *)0x0;
                    }
                    pcVar34 = DAT_10024130;
                    if ((int)pcVar11 < (int)DAT_10024130) {
                      pcVar34 = pcVar11;
                    }
                    if ((int)pcVar11 < 0) {
                      pcVar34 = (char *)0x0;
                    }
                    bVar40 = SBORROW4((int)pcVar12,(int)pcVar34);
                    iVar7 = (int)pcVar12 - (int)pcVar34;
                    bVar39 = pcVar12 == pcVar34;
                    if ((int)pcVar34 < (int)pcVar12) {
                      bVar40 = SBORROW4((int)local_41b0,(int)pcVar25);
                      iVar7 = (int)local_41b0 - (int)pcVar25;
                      bVar39 = local_41b0 == pcVar25;
                    }
                    pcVar36 = pcVar37;
                    if (bVar39 || iVar7 < 0 != bVar40) {
                      pcVar34 = (char *)0x0;
                      pcVar25 = (char *)0x0;
                      local_41b0 = (char *)0x0;
                    }
                    else {
                      local_41b0 = local_41b0 + -(int)pcVar25;
                      local_41ac = pcVar12 + -(int)pcVar34;
                    }
                  }
                  bVar39 = pcVar18 == (char *)0x1;
                  pcVar8 = local_41ac;
                  if (0 < (int)pcVar18) {
                    pcVar8 = local_41b8;
                  }
                  pcVar27 = pcVar18 + -1;
                  if ((int)pcVar18 >= 1) {
                    bVar39 = pcVar8 == (char *)0x0;
                    pcVar27 = pcVar8;
                  }
                  if (!bVar39 && (int)pcVar27 < 0 == ((int)pcVar18 < 1 && SBORROW4((int)pcVar18,1)))
                  {
                    pcVar8 = local_41ac;
                    if (0 < (int)local_41ac) {
                      pcVar8 = local_41b0;
                    }
                    if ((int)pcVar8 < 1) {
                      local_41b0 = local_41b8;
                      pcVar25 = local_41d4;
                      pcVar34 = local_41bc;
                      local_41ac = pcVar18;
LAB_100039d8:
                      if (((bVar38 || (int)DAT_10024134 < 1) || (int)local_41ac < 1) ||
                         ((int)local_41b0 < 1)) {
LAB_10003a94:
                        pcVar34 = (char *)0x0;
                        local_41ac = (char *)0x0;
                        local_41b0 = (char *)0x0;
                        pcVar25 = (char *)0x0;
                      }
                      else {
                        local_41b0 = local_41b0 + (int)pcVar25;
                        pcVar8 = DAT_10024134;
                        if ((int)local_41b0 < (int)DAT_10024134) {
                          pcVar8 = local_41b0;
                        }
                        local_41ac = local_41ac + (int)pcVar34;
                        if ((int)local_41b0 < 0) {
                          pcVar8 = (char *)0x0;
                        }
                        pcVar27 = DAT_10024130;
                        if ((int)local_41ac < (int)DAT_10024130) {
                          pcVar27 = local_41ac;
                        }
                        if ((int)local_41ac < 0) {
                          pcVar27 = (char *)0x0;
                        }
                        pcVar36 = DAT_10024134;
                        if ((int)pcVar25 < (int)DAT_10024134) {
                          pcVar36 = pcVar25;
                        }
                        if ((int)pcVar25 < 0) {
                          pcVar36 = (char *)0x0;
                        }
                        pcVar11 = DAT_10024130;
                        if ((int)pcVar34 < (int)DAT_10024130) {
                          pcVar11 = pcVar34;
                        }
                        if ((int)pcVar34 < 0) {
                          pcVar11 = (char *)0x0;
                        }
                        if ((int)pcVar27 <= (int)pcVar11) goto LAB_10003a94;
                        local_41ac = (char *)0x0;
                        pcVar34 = (char *)0x0;
                        if ((int)pcVar36 < (int)pcVar8) {
                          pcVar34 = pcVar11;
                        }
                        local_41b0 = (char *)0x0;
                        pcVar25 = (char *)0x0;
                        if ((int)pcVar36 < (int)pcVar8) {
                          local_41b0 = pcVar8 + -(int)pcVar36;
                          local_41ac = pcVar27 + -(int)pcVar11;
                          pcVar25 = pcVar36;
                        }
                      }
                      recovered_1000bd14((int)pcVar34,(int)pcVar25,(int)local_41ac,(int)local_41b0);
                      recovered_10006078(((uintptr_t)pf_module_state + 0xd10U));
                    }
                    else {
                      pcVar8 = local_41ac + (int)pcVar34;
                      bVar39 = SBORROW4((int)local_41bc,(int)pcVar8);
                      iVar7 = (int)local_41bc - (int)pcVar8;
                      if ((int)local_41bc < (int)pcVar8) {
                        local_41b4 = local_41bc + (int)pcVar18;
                        bVar39 = SBORROW4((int)pcVar34,(int)local_41b4);
                        iVar7 = (int)pcVar34 - (int)local_41b4;
                      }
                      if (iVar7 < 0 != bVar39) {
                        pcVar27 = local_41b0 + (int)pcVar25;
                        bVar39 = SBORROW4((int)local_41d4,(int)pcVar27);
                        iVar7 = (int)local_41d4 - (int)pcVar27;
                        if ((int)local_41d4 < (int)pcVar27) {
                          pcVar36 = local_41d4 + (int)local_41b8;
                          bVar39 = SBORROW4((int)pcVar25,(int)pcVar36);
                          iVar7 = (int)pcVar25 - (int)pcVar36;
                        }
                        if (iVar7 < 0 != bVar39) {
                          if ((int)local_41d4 < (int)pcVar25) {
                            pcVar25 = local_41d4;
                          }
                          if ((int)pcVar27 < (int)pcVar36) {
                            pcVar27 = pcVar36;
                          }
                          local_41b0 = pcVar27 + -(int)pcVar25;
                          if ((int)local_41bc < (int)pcVar34) {
                            pcVar34 = local_41bc;
                          }
                          if ((int)pcVar8 < (int)local_41b4) {
                            pcVar8 = local_41b4;
                          }
                          local_41ac = pcVar8 + -(int)pcVar34;
                          goto LAB_100039d8;
                        }
                      }
                      recovered_1000bd14((int)local_41bc,(int)local_41d4,(int)pcVar18,
                                         (int)local_41b8);
                      recovered_1000bd14((int)pcVar34,(int)pcVar25,(int)local_41ac,(int)local_41b0);
                      recovered_10006078(((uintptr_t)pf_module_state + 0xd10U));
                      iVar7 = recovered_1000c47c(&DAT_10024318,(undefined4 *)local_41bc,
                                                 (undefined4 *)local_41d4,(undefined4 *)pcVar18,
                                                 (undefined4 *)local_41b8);
                      if (iVar7 == 0) goto LAB_10003bdc;
                    }
                    pcVar36 = local_41ac;
                    pcVar37 = local_41b0;
                    goto LAB_10003aec;
                  }
                  if (0 < (int)local_41ac) {
                    if (0 < (int)local_41b0) goto LAB_100039d8;
                  }
LAB_10003af8:
                  iVar7 = 0;
                  if ((local_41c8 & 1) == 0 && (local_41a8 == (int *)0x0 && uVar15 == 0)) {
LAB_10003b14:
                    if (iVar10 == 0) {
                      iVar7 = 0x1e;
                      goto LAB_10003e60;
                    }
                    iVar7 = iVar10 + -1;
                  }
                  else {
LAB_10003e60:
                    iVar10 = Ram40010800;
                    if ((iVar10 == 0x50414d57) && (iVar10 = Ram40010804, iVar10 != 0)) {
                      uVar6 = Ram40010808;
                      bVar38 = 0xb < uVar6;
                      if (bVar38) {
                        uVar6 = Ram40010808;
                      }
                      if ((bVar38 && 0x9f < uVar6) &&
                         (pcVar3 = (code *)UINT_4001089c, pcVar3 != (code *)0x0)) {
                        (*pcVar3)();
                      }
                    }
                  }
                  iVar10 = Ram40010800;
                  uVar6 = 4000;
                  if ((uVar16 & 1) != 0) {
                    uVar6 = 1000;
                  }
                  local_41f8 = 0;
                  if ((iVar10 == 0x50414d57) && (iVar10 = Ram40010804, iVar10 != 0)) {
                    uVar13 = Ram40010808;
                    bVar38 = 0xb < uVar13;
                    if (bVar38) {
                      uVar13 = Ram40010808;
                    }
                    if ((bVar38 && 0x177 < uVar13) &&
                       (pcVar3 = (code *)UINT_40010974, pcVar3 != (code *)0x0)) {
                      (*pcVar3)(uVar6);
                    }
                  }
                }
                iVar10 = iVar7;
              } while (DAT_10024318 != '\0');
            }
            recovered_10004fc8(&DAT_10024318);
            recovered_100050f8();
            iVar10 = Ram40010800;
            if ((iVar10 == 0x50414d57) && (iVar10 = Ram40010804, iVar10 != 0)) {
              uVar6 = Ram40010808;
              bVar38 = 0xb < uVar6;
              if (bVar38) {
                uVar6 = Ram40010808;
              }
              if ((bVar38 && 0x53 < uVar6) &&
                 (pcVar3 = (code *)UINT_40010850, pcVar3 != (code *)0x0)) {
                (*pcVar3)(DAT_100242f8);
              }
            }
            DAT_100242f8 = (void *)0x0;
            return 1;
          }
        }
        iVar10 = Ram40010800;
        if ((iVar10 == 0x50414d57) && (iVar10 = Ram40010804, iVar10 != 0)) {
          uVar6 = Ram40010808;
          bVar38 = 0xb < uVar6;
          if (bVar38) {
            uVar6 = Ram40010808;
          }
          if ((bVar38 && 0x43 < uVar6) && (pcVar3 = (code *)UINT_40010840, pcVar3 != (code *)0x0)) {
            (*pcVar3)(str_1002373f);
          }
        }
        recovered_100050f8();
        if (DAT_100242f8 != (void *)0x0) {
          iVar10 = Ram40010800;
          if ((iVar10 == 0x50414d57) && (iVar10 = Ram40010804, iVar10 != 0)) {
            uVar6 = Ram40010808;
            bVar38 = 0xb < uVar6;
            if (bVar38) {
              uVar6 = Ram40010808;
            }
            if ((bVar38 && 0x53 < uVar6) && (pcVar3 = (code *)UINT_40010850, pcVar3 != (code *)0x0))
            {
              (*pcVar3)(DAT_100242f8);
            }
          }
          DAT_100242f8 = (void *)0x0;
        }
LAB_10001568:
        recovered_10004fc8(&DAT_10024318);
        return 0;
      }
    }
  }
  iVar10 = Ram40010800;
  if ((iVar10 == 0x50414d57) && (iVar10 = Ram40010804, iVar10 != 0)) {
    uVar6 = Ram40010808;
    bVar38 = 0xb < uVar6;
    if (bVar38) {
      uVar6 = Ram40010808;
    }
    if ((bVar38 && 0x1b < uVar6) && (pcVar3 = (code *)UINT_40010818, pcVar3 != (code *)0x0)) {
      (*pcVar3)();
    }
  }
LAB_100011e4:
  iVar10 = Ram40010800;
  if ((iVar10 == 0x50414d57) && (iVar10 = Ram40010804, iVar10 != 0)) {
    uVar6 = Ram40010808;
    bVar38 = 0xb < uVar6;
    if (bVar38) {
      uVar6 = Ram40010808;
    }
    if ((bVar38 && 0x43 < uVar6) && (pcVar3 = (code *)UINT_40010840, pcVar3 != (code *)0x0)) {
      (*pcVar3)(str_100236dd);
    }
  }
  return 0;
}

#undef DAT_10001ae0
#undef DAT_10001ae8
#undef DAT_10023774
#undef DAT_10024130
#undef DAT_10024134
#undef DAT_10024138
#undef DAT_1002413c
#undef DAT_10024140
#undef DAT_10024144
#undef DAT_10024148
#undef DAT_1002414c
#undef DAT_10024150
#undef DAT_10024154
#undef DAT_100242d4
#undef DAT_100242dc
#undef DAT_100242e4
#undef DAT_100242f0
#undef DAT_100242f4
#undef DAT_100242f8
#undef DAT_10024308
#undef DAT_1002430c
#undef DAT_10024310
#undef DAT_10024314
#undef DAT_10024318
#undef DAT_10024319
#undef DAT_1002431c
#undef DAT_10024320
#undef DAT_10024328
#undef DAT_1002432c
#undef DAT_10024330
#undef DAT_10024334
#undef DAT_10024364
#undef DAT_10024368
#undef DAT_1002436c
#undef DAT_10024370
#undef DAT_10024374
#undef DAT_10024910
#undef DAT_10024914
#undef DAT_10024918
#undef DAT_100256c8
#undef DAT_10027228
#undef DAT_10027414
#undef DAT_10027610
#undef DAT_10027614
#undef DAT_10027618
#undef DAT_10027620
#undef DAT_10027628
#undef DAT_10028fb0
#undef DAT_10028fe0
#undef DAT_10028fe4
#undef DAT_100290dc
#undef DAT_1012e404
#undef DAT_1012e405
#undef DAT_1012e408
#undef DAT_1012e40c
#undef DAT_1012e40d
#undef DAT_1012e40e
#undef DAT_1012e40f
#undef DAT_1012e410
#undef DAT_1012e411
#undef DAT_1012e412
#undef DAT_1012e413
#undef DAT_1012e414
#undef DAT_1012e415
#undef DAT_1012e416
#undef DAT_1012e417
#undef DAT_1012e418
#undef DAT_1012e419
#undef DAT_1012e41a
#undef DAT_1012e41b
#undef DAT_1012e41c
#undef DAT_1012e41d
#undef DAT_1012e41e
#undef DAT_1012e41f
#undef DAT_1012e420
#undef DAT_1012e421
#undef DAT_1012e422
#undef DAT_1012e423
#undef DAT_1012e424
#undef DAT_1012e425
#undef DAT_1012e426
#undef DAT_1012e427
#undef DAT_1012e428
#undef DAT_1012e429
#undef DAT_1012e42a
#undef DAT_1012e42b
#undef DAT_1012e42c
#undef DAT_1012e42d
#undef DAT_1012e42e
#undef DAT_1012e42f
#undef DAT_1012e430
#undef DAT_1012e431
#undef DAT_1012e432
#undef DAT_1012e433
#undef DAT_1012e434
#undef DAT_1012e459
#undef DAT_1012e460
#undef DAT_1012e464
#undef DAT_1012e468
#undef DAT_1012e46c
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef EXT_00000008
#undef EXT_00000014
#undef EXT_00000018
#undef Ram40010800
#undef Ram40010804
#undef Ram40010808
#undef UINT_40010814
#undef UINT_40010818
#undef UINT_40010834
#undef UINT_40010840
#undef UINT_4001084c
#undef UINT_40010850
#undef UINT_40010858
#undef UINT_4001087c
#undef UINT_40010880
#undef UINT_4001089c
#undef UINT_400108bc
#undef UINT_400108c0
#undef UINT_4001095c
#undef UINT_40010968
#undef UINT_40010970
#undef UINT_40010974
#undef _DAT_10027610
#undef str_100236c8
#undef str_100236dd
#undef str_100236ff
#undef str_10023725
#undef str_1002373f
#undef str_10023759
#undef str_10023760
#undef str_10023775
#undef str_10023904
#undef str_10023910
#undef str_1002391f
#undef str_10023ec1
#undef str_10024155
#undef str_100241e0
#undef local_4148
#undef local_3fb0
#undef local_2a0
#undef local_298
#undef local_294
#undef local_290
#undef local_288
#undef local_24
#undef local_4200
#undef local_41fc
#undef local_41f8
#undef local_41f4
#undef local_41e8
#undef local_41dc
#undef local_41d4
#undef local_41c8
#undef local_41c4
#undef local_41bc
#undef local_41b8
#undef local_41b4
#undef local_41b0
#undef local_41ac
#undef local_41a8
#undef pcStack_29c
#undef local_41a4
#undef local_41a0
#undef local_4198
#undef local_4194
#undef pcStack_28c
#undef local_4190
#undef local_418c
#undef local_4188
#undef local_4178
#undef local_4160

#undef DAT_10023f70
#define DAT_10023f70 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x968U)))
#undef DAT_10023f8c
#define DAT_10023f8c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x984U)))
#undef DAT_10024130
#define DAT_10024130 (*(uint *)(((uintptr_t)pf_module_state + 0xb28U)))
#undef DAT_10024134
#define DAT_10024134 (*(uint *)(((uintptr_t)pf_module_state + 0xb2cU)))
#undef DAT_1002413c
#define DAT_1002413c (*(uint32_t *)(((uintptr_t)pf_module_state + 0xb34U)))
#undef DAT_100242f0
#define DAT_100242f0 (*(uint *)(((uintptr_t)pf_module_state + 0xce8U)))
#undef DAT_100242f4
#define DAT_100242f4 (*(uint *)(((uintptr_t)pf_module_state + 0xcecU)))
#undef DAT_100242f8
#define DAT_100242f8 (*(void * *)(((uintptr_t)pf_module_state + 0xcf0U)))
#undef DAT_1002430c
#define DAT_1002430c (*(int *)(((uintptr_t)pf_module_state + 0xd04U)))
#undef DAT_10024314
#define DAT_10024314 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xd0cU)))
#undef DAT_10024374
#define DAT_10024374 (*(char *)(((uintptr_t)pf_module_state + 0xd6cU)))
#undef DAT_10024378
#define DAT_10024378 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xd70U)))
#undef DAT_1002437c
#define DAT_1002437c (*(int *)(((uintptr_t)pf_module_state + 0xd74U)))
#undef DAT_1002490c
#define DAT_1002490c (*(int *)(((uintptr_t)pf_module_state + 0x1304U)))
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
#undef UINT_40010854
#define UINT_40010854 (*(uint *)(0x40010854U))
#undef UINT_4001087c
#define UINT_4001087c (*(uint *)(0x4001087cU))
#undef _DAT_10024378
#define _DAT_10024378 (*(int *)(((uintptr_t)pf_module_state + 0xd70U)))
#undef str_1002378f
#define str_1002378f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x187U)))
#undef str_100237a1
#define str_100237a1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x199U)))
#undef str_100237ae
#define str_100237ae (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1a6U)))
#define iStack_dc (*(int *)(frame + 52))
#define local_f4 (*(uint *)(frame + 28))
#define local_f0 (*(uint *)(frame + 32))
#define local_e8 (*(uint *)(frame + 40))
#define uStack_cc (*(uint *)(frame + 68))
#define local_e0 (*(uint *)(frame + 48))
#define local_d8 (*(int *)(frame + 56))
#define iStack_bc (*(int *)(frame + 84))
#define local_d4 (*(uint *)(frame + 60))
#define local_d0 (*(uint *)(frame + 64))
#define local_c8 (*(uint *)(frame + 72))
#define local_c4 (*(int *)(frame + 76))
#define local_c0 (*(int *)(frame + 80))
#define local_b8 (*(int *)(frame + 88))
#define local_b4 (*(int *)(frame + 92))
#define local_b0 (*(int *)(frame + 96))
#define local_ac (*(uint (*)[32])(frame + 100))
#define local_2c (*(undefined8 * *)(frame + 228))
#define local_28 (*(uint *)(frame + 232))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100044fc
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int recovered_100044fc(char *param_1)

{
  unsigned char frame[304] __attribute__((aligned(16))) = {0};

  char cVar1;
  ulonglong uVar2;
  code *pcVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  void *dst;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint extraout_r2 = 0;
  uint extraout_r2_00 = 0;
  undefined8 *puVar10;
  undefined1 *puVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  byte *pbVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  undefined1 *puVar22;
  uint *puVar23;
  int iVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint extraout_r12 = 0;
  uint uVar28;
  uint uVar29;
  bool bVar30;
  bool bVar31;
  undefined8 uVar32;

  if (*param_1 != '\x01') {
    return 0;
  }
  memset(&local_e0,0,0x34);
  iVar19 = Ram40010800;
  if (iVar19 != 0x50414d57) {
    return 0;
  }
  iVar19 = Ram40010804;
  if (iVar19 == 0) {
    return 0;
  }
  uVar4 = Ram40010808;
  bVar30 = 0xb < uVar4;
  if (bVar30) {
    uVar4 = Ram40010808;
  }
  if (!bVar30 || uVar4 < 0x80) {
    return 0;
  }
  pcVar3 = (code *)UINT_4001087c;
  if (pcVar3 == (code *)0x0) {
    return 0;
  }
  puVar23 = &local_e0;
  uVar4 = (*pcVar3)(puVar23);
  if (uVar4 == 0) {
    return 0;
  }
  if (iStack_dc != 0) {
    return 0;
  }
  if (local_e0 == 0) {
    return 0;
  }
  if (0x11 < local_c8 - 0xf) {
    return 0;
  }
  if ((0x1fdfcU >> (local_c8 - 0xf & 0xff) & 1) != 0) {
    return 0;
  }
  uVar4 = extraout_r12;
  if (local_d4 != 0) {
    uVar4 = local_d0;
  }
  if (local_d4 == 0 || uVar4 == 0) {
    return 0;
  }
  if (uStack_cc == 0) {
    return 0;
  }
  bVar30 = (uint)*(ulonglong *)(param_1 + 4) == local_e0;
  uVar9 = local_e0;
  if (bVar30) {
    uVar9 = *(uint *)(param_1 + 8);
  }
  if ((!(bVar30 && uVar9 == 0)) || (*(int *)(param_1 + 0xc) != local_d8)) {
LAB_1000462c:
    puVar23 = &local_d0;
    param_1[0x48] = '\0';
    *(ulonglong *)(param_1 + 4) = (ulonglong)local_e0;
    *(ulonglong *)(param_1 + 0xc) = CONCAT44(local_d4,local_d8);
    *(ulonglong *)(param_1 + 0x14) = CONCAT44(uStack_cc,local_d0);
    *(ulonglong *)(param_1 + 0x1c) = CONCAT44(local_c4,local_c8);
    *(ulonglong *)(param_1 + 0x24) = CONCAT44(iStack_bc,local_c0);
    *(ulonglong *)(param_1 + 0x2c) = CONCAT44(local_b4,local_b8);
    *(int *)(param_1 + 0x34) = local_b0;
    DAT_10024314 = 0;
    DAT_1002413c = 0xffffffff;
    recovered_1000c814((int)param_1);
    iVar19 = 1;
    uVar4 = local_d0;
  }
  else {
    uVar9 = *(uint *)(param_1 + 0x10);
    bVar30 = uVar9 != local_d4;
    if (!bVar30) {
      uVar9 = *(uint *)(param_1 + 0x14);
    }
    if (bVar30 || uVar9 != uVar4) goto LAB_1000462c;
    uVar9 = *(uint *)(param_1 + 0x18);
    bVar30 = uVar9 != uStack_cc;
    if (!bVar30) {
      uVar9 = *(uint *)(param_1 + 0x1c);
    }
    if (((((bVar30 || uVar9 != local_c8) || (*(int *)(param_1 + 0x20) != local_c4)) ||
         (*(int *)(param_1 + 0x24) != local_c0)) ||
        ((*(int *)(param_1 + 0x28) != iStack_bc || (*(int *)(param_1 + 0x2c) != local_b8)))) ||
       ((*(int *)(param_1 + 0x30) != local_b4 || (iVar19 = 0, *(int *)(param_1 + 0x34) != local_b0))
       )) goto LAB_1000462c;
  }
  local_e8 = uStack_cc;
  memset(&local_2c,0,0xc);
  iVar14 = Ram40010800;
  bVar30 = true;
  local_f0 = extraout_r2;
  if ((iVar14 == 0x50414d57) && (iVar14 = Ram40010804, iVar14 != 0)) {
    uVar9 = Ram40010808;
    bVar31 = 0xb < uVar9;
    if (bVar31) {
      uVar9 = Ram40010808;
    }
    if (bVar31 && 0x37 < uVar9) {
      pcVar3 = (code *)UINT_40010834;
      local_f0 = 0;
      if (pcVar3 != (code *)0x0) {
        uVar9 = (*pcVar3)(str_1002378f,&local_2c);
        bVar30 = uVar9 == 0;
        local_f0 = extraout_r2_00;
      }
    }
  }
  if (((!bVar30) && (0xffffff80 < local_28 - 0x80)) && (local_2c != (undefined8 *)0x0)) {
    bVar30 = local_28 == 8;
    uVar9 = 0;
    if (local_28 >= 8) {
      puVar23 = local_ac;
      local_f0 = (int)puVar23 - (int)local_2c;
      bVar30 = local_f0 == 7;
    }
    if ((local_28 < 8 || local_f0 < 7) || bVar30) {
LAB_10004770:
      iVar14 = local_28 - uVar9;
      puVar11 = (undefined1 *)((int)local_2c + uVar9);
      puVar22 = (undefined1 *)((int)local_ac + uVar9);
      do {
        iVar14 = iVar14 + -1;
        *puVar22 = *puVar11;
        puVar11 = puVar11 + 1;
        puVar22 = puVar22 + 1;
      } while (iVar14 != 0);
    }
    else {
      uVar9 = local_28 & 0x78;
      puVar10 = local_2c;
      uVar13 = uVar9;
      do {
        uVar32 = *puVar10;
        puVar10 = puVar10 + 1;
        uVar13 = uVar13 - 8;
        *(undefined8 *)puVar23 = uVar32;
        puVar23 = puVar23 + 2;
      } while (uVar13 != 0);
      if (local_28 != uVar9) goto LAB_10004770;
    }
    puVar23 = local_ac;
    local_f0 = 0;
    *(char *)((int)puVar23 + local_28) = '\0';
    local_f4 = 0;
    if ((char)local_ac[0] != '\0') {
      local_f0 = 0;
      do {
        uVar5 = strlen(str_100237a1);
        iVar14 = strncmp((char *)puVar23,str_100237a1,uVar5);
        if (iVar14 == 0) {
          uVar9 = (uint)(byte)puVar23[3];
          if (uVar9 != 0) {
            uVar13 = 0;
            if ((uVar9 - 0x30 & 0xff) < 10) {
              pbVar15 = (byte *)((int)puVar23 + 0xd);
              do {
                if (0x19999999 < uVar13) goto LAB_10004938;
                uVar6 = uVar9 - 0x30 & 0xff;
                if (uVar13 == 0x19999999) {
                  if (5 < uVar6) goto LAB_10004938;
                }
                uVar9 = (uint)*pbVar15;
                uVar13 = uVar6 + uVar13 * 10;
                pbVar15 = pbVar15 + 1;
              } while ((uVar9 - 0x30 & 0xff) < 10);
            }
            if (uVar9 < 0xe) {
              if ((1 << uVar9 & 0x2401U) != 0) {
                local_f0 = uVar13;
              }
            }
          }
        }
        else {
          uVar5 = strlen(str_100237ae);
          iVar14 = strncmp((char *)puVar23,str_100237ae,uVar5);
          if (iVar14 == 0) {
            uVar9 = (uint)*(byte *)((int)puVar23 + 0xd);
            if (uVar9 != 0) {
              uVar13 = 0;
              if ((uVar9 - 0x30 & 0xff) < 10) {
                pbVar15 = (byte *)((int)puVar23 + 0xe);
                do {
                  if ((0x19999999 < uVar13) ||
                     ((uVar6 = uVar9 - 0x30 & 0xff, uVar13 == 0x19999999 && (5 < uVar6))))
                  goto LAB_10004938;
                  uVar9 = (uint)*pbVar15;
                  uVar13 = uVar6 + uVar13 * 10;
                  pbVar15 = pbVar15 + 1;
                } while ((uVar9 - 0x30 & 0xff) < 10);
              }
              if ((uVar9 < 0xe) && ((1 << uVar9 & 0x2401U) != 0)) {
                local_f4 = uVar13;
              }
            }
          }
        }
LAB_10004938:
        for (; cVar1 = (char)*puVar23, cVar1 != '\0' && cVar1 != '\n';
            puVar23 = (uint *)((int)puVar23 + 1)) {
        }
        if (cVar1 == '\n') {
          puVar23 = (uint *)((int)puVar23 + 1);
        }
      } while ((char)*puVar23 != '\0');
      if ((local_f0 != 0) && (local_f4 != 0)) {
        if (0xfff < (int)local_f4) {
          local_f4 = 0x1000;
        }
        if ((int)local_f4 < 2) {
          local_f4 = 1;
        }
        uVar4 = 0x1000;
        if ((int)local_f0 < 0x1000) {
          uVar4 = local_f0;
        }
        if ((int)uVar4 < 2) {
          uVar4 = 1;
        }
        local_e8 = local_f4;
      }
    }
  }
  if (0xfff < (local_e8 - 1 | uVar4 - 1)) {
    local_f0 = uStack_cc;
    if (0xfff < (int)uStack_cc) {
      local_f0 = 0x1000;
    }
    if ((int)local_f0 < 2) {
      local_f0 = 1;
    }
    uVar4 = 0x1000;
    if ((int)local_d0 < 0x1000) {
      uVar4 = local_d0;
    }
    if ((int)uVar4 < 2) {
      uVar4 = 1;
    }
    local_e8 = local_f0;
  }
  if (DAT_100242f8 != (void *)0x0) {
    uVar9 = DAT_100242f0;
    if (DAT_100242f0 == uVar4) {
      local_f0 = local_e8;
      uVar9 = DAT_100242f4;
    }
    if (DAT_100242f0 == uVar4 && uVar9 == local_f0) {
      if (iVar19 == 0) {
        return 0;
      }
      goto LAB_10004b08;
    }
  }
  if ((local_e8 - 1 | uVar4 - 1) >> 0xc != 0) {
    return iVar19;
  }
  uVar2 = (ulonglong)local_e8 * (ulonglong)uVar4;
  if ((uint)((uVar2 & 0x3fffffff) != 0) <= (uint)(uVar2 * 4 >> 0x20)) {
    return iVar19;
  }
  iVar14 = Ram40010800;
  if (iVar14 != 0x50414d57) {
    return iVar19;
  }
  iVar14 = Ram40010804;
  if (iVar14 == 0) {
    return iVar19;
  }
  uVar9 = Ram40010808;
  bVar30 = uVar9 < 0xc;
  if (!bVar30) {
    uVar9 = Ram40010808;
  }
  if (bVar30 || uVar9 < 0x58) {
    return iVar19;
  }
  pcVar3 = (code *)UINT_40010854;
  if (pcVar3 == (code *)0x0) {
    return iVar19;
  }
  uVar5 = (int)uVar2 << 2;
  dst = (*pcVar3)(DAT_100242f8,uVar5);
  if (dst == (void *)0x0) {
    return iVar19;
  }
  DAT_10024134 = local_e8;
  DAT_100242f4 = local_e8;
  DAT_10024130 = uVar4;
  DAT_100242f0 = uVar4;
  DAT_100242f8 = dst;
  memset(dst,0,uVar5);
  DAT_10024314 = 0;
  DAT_1002413c = 0xffffffff;
LAB_10004b08:
  iVar19 = DAT_1002430c;
  uVar9 = DAT_10024134;
  uVar4 = DAT_10024130;
  iVar24 = 0;
  iVar14 = 0;
  iVar12 = *(int *)(param_1 + 0x4c);
  if (0 < (int)DAT_10024130) {
    iVar24 = DAT_10024130 - 1;
  }
  iVar16 = *(int *)(param_1 + 0x50);
  if (iVar12 < iVar24) {
    iVar24 = iVar12;
  }
  if (iVar12 < 0) {
    iVar24 = 0;
  }
  if (0 < (int)DAT_10024134) {
    iVar14 = DAT_10024134 - 1;
  }
  *(int *)(param_1 + 0x4c) = iVar24;
  if (iVar16 < iVar14) {
    iVar14 = iVar16;
  }
  if (iVar16 < 0) {
    iVar14 = 0;
  }
  *(int *)(param_1 + 0x50) = iVar14;
  if (iVar19 != 0) {
    iVar14 = 0x14;
    puVar23 = (uint *)(iVar19 + 0xaf8);
    uVar13 = uVar9 - 0x6e;
    uVar6 = uVar4 - 0x1c;
    do {
      if ((char)puVar23[-0x2be] == '\x01') {
        uVar20 = puVar23[-0x2ba];
        if (uVar20 < 7) {
          uVar26 = *(uint *)(&DAT_10023f8c + uVar20 * 4);
          uVar25 = *(uint *)(&DAT_10023f70 + uVar20 * 4);
        }
        else {
          uVar26 = 0x6e;
          uVar25 = 0xb4;
        }
        uVar17 = 0xffffffbe;
        uVar8 = uVar25;
        if ((int)uVar25 < (int)(uVar4 - 8)) {
          uVar8 = uVar4 - 8;
        }
        if (uVar20 == 6) {
          uVar17 = 0xfffffffc;
        }
        uVar28 = (uVar9 - 0x1a) + uVar17;
        if ((int)uVar28 <= (int)uVar26) {
          uVar28 = uVar26;
        }
        if (*(char *)((int)puVar23 + -0xaf5) == '\x01') {
          uVar29 = 0xe;
          puVar23[-0x2a6] = uVar6;
          uVar27 = uVar6;
          if ((int)uVar6 < (int)uVar25) {
            puVar23[-0x2a6] = uVar25;
            uVar27 = uVar25;
          }
          uVar18 = uVar17;
          if ((int)uVar26 <= (int)uVar13) {
            uVar18 = uVar13;
          }
          puVar23[-0x2a5] = uVar13;
          if ((int)uVar13 < (int)uVar26) {
            puVar23[-0x2a5] = uVar26;
            uVar18 = uVar26;
          }
          local_f0 = 0x24;
        }
        else {
          uVar18 = puVar23[-0x2a6];
          uVar21 = puVar23[-0x2a5];
          uVar29 = puVar23[-0x2a8];
          uVar27 = uVar8;
          if ((int)uVar18 < (int)uVar8) {
            uVar27 = uVar18;
          }
          if ((int)uVar18 < (int)uVar25) {
            uVar27 = uVar25;
          }
          local_f0 = puVar23[-0x2a7];
          uVar18 = uVar28;
          if ((int)uVar21 < (int)uVar28) {
            uVar18 = uVar21;
          }
          if ((int)uVar21 < (int)uVar26) {
            uVar18 = uVar26;
          }
          puVar23[-0x2a6] = uVar27;
          puVar23[-0x2a5] = uVar18;
        }
        uVar7 = puVar23[-0x2a3];
        uVar21 = (uVar4 - uVar27) - 4;
        if ((int)(uVar4 - uVar27) < 8) {
          uVar21 = 4;
        }
        if ((int)uVar29 < (int)uVar21) {
          uVar21 = uVar29;
        }
        if ((int)uVar29 < 4) {
          uVar21 = 4;
        }
        uVar29 = puVar23[-0x2a1];
        if (puVar23[-0x2a1] == 0) {
          uVar29 = uVar18;
        }
        if ((int)uVar29 < (int)uVar28) {
          uVar28 = uVar29;
        }
        if ((int)uVar29 < (int)uVar26) {
          uVar28 = uVar26;
        }
        uVar26 = puVar23[-0x2a2];
        if (puVar23[-0x2a2] == 0) {
          uVar26 = uVar27;
        }
        if ((int)uVar26 < (int)uVar8) {
          uVar8 = uVar26;
        }
        if ((int)uVar26 < (int)uVar25) {
          uVar8 = uVar25;
        }
        puVar23[-0x2a8] = uVar21;
        uVar25 = (uVar17 + uVar9) - uVar18;
        uVar26 = puVar23[-0x2a4];
        if ((int)uVar25 < 0x1b) {
          uVar25 = 0x1a;
        }
        if (local_f0 < uVar25) {
          uVar25 = local_f0;
        }
        if ((int)local_f0 < 0x1a) {
          uVar25 = 0x1a;
        }
        puVar23[-0x2a2] = uVar8;
        puVar23[-0x2a7] = uVar25;
        uVar25 = (uVar4 - uVar8) - 4;
        if ((int)(uVar4 - uVar8) < 8) {
          uVar25 = 4;
        }
        if ((int)uVar26 < (int)uVar25) {
          uVar25 = uVar26;
        }
        uVar8 = (uVar17 + uVar9) - uVar28;
        if ((int)uVar26 < 4) {
          uVar25 = 4;
        }
        if ((int)uVar8 < 0x1b) {
          uVar8 = 0x1a;
        }
        if ((int)uVar7 < (int)uVar8) {
          uVar8 = uVar7;
        }
        if ((int)uVar7 < 0x1a) {
          uVar8 = 0x1a;
        }
        puVar23[-0x2a3] = uVar8;
        puVar23[-0x2a1] = uVar28;
        puVar23[-0x2a4] = uVar25;
        if (uVar20 == 0) {
          iVar12 = (int)(((ulonglong)(uVar27 - 0x26) << 0x20) +
                         (longlong)(int)(uVar27 - 0x26) * -0x2df2df2d >> 0x20);
          iVar19 = -1;
          uVar20 = *puVar23;
          iVar24 = ((int)((ulonglong)((longlong)(int)(uVar18 - 0x6a) * 0x22983759) >> 0x20) - uVar18
                   ) + 0x6a;
          if (0x49 < (int)(uVar18 - 0x6a)) {
            iVar19 = (iVar24 >> 6) - (iVar24 >> 0x1f);
          }
          iVar24 = (iVar12 >> 6) - (iVar12 >> 0x1f);
          if (iVar24 < 2) {
            iVar24 = 1;
          }
          if (0x7fffffff < uVar20) {
            uVar20 = 0;
            *puVar23 = 0;
          }
          uVar25 = iVar24 * iVar19 + puVar23[-2] + 2;
          if (((int)uVar25 < 1) || ((int)uVar25 < (int)uVar20)) {
            if ((int)uVar25 < 1) {
              uVar25 = 0;
            }
            *puVar23 = uVar25;
          }
        }
      }
      puVar23 = puVar23 + 0x367;
      iVar14 = iVar14 + -1;
    } while (iVar14 != 0);
    if (DAT_10024374 != '\0') {
      if ((int)uVar4 < 0xa9) {
        uVar4 = 0xa8;
      }
      iVar19 = uVar4 - 0xa8;
      if (_DAT_10024378 < (int)(uVar4 - 0xa8)) {
        iVar19 = _DAT_10024378;
      }
      if (_DAT_10024378 < 0) {
        iVar19 = 0;
      }
      iVar14 = DAT_1002490c * -0x16 + uVar9 + -4;
      if (iVar14 < 0x19) {
        iVar14 = 0x18;
      }
      if (DAT_1002437c < iVar14) {
        iVar14 = DAT_1002437c;
      }
      if (DAT_1002437c < 0x18) {
        iVar14 = 0x18;
      }
      _DAT_10024378 = iVar19;
      DAT_1002437c = iVar14;
    }
  }
  return 1;
}

#undef DAT_10023f70
#undef DAT_10023f8c
#undef DAT_10024130
#undef DAT_10024134
#undef DAT_1002413c
#undef DAT_100242f0
#undef DAT_100242f4
#undef DAT_100242f8
#undef DAT_1002430c
#undef DAT_10024314
#undef DAT_10024374
#undef DAT_10024378
#undef DAT_1002437c
#undef DAT_1002490c
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef Ram40010800
#undef Ram40010804
#undef Ram40010808
#undef UINT_40010834
#undef UINT_40010854
#undef UINT_4001087c
#undef _DAT_10024378
#undef str_1002378f
#undef str_100237a1
#undef str_100237ae
#undef iStack_dc
#undef local_f4
#undef local_f0
#undef local_e8
#undef uStack_cc
#undef local_e0
#undef local_d8
#undef iStack_bc
#undef local_d4
#undef local_d0
#undef local_c8
#undef local_c4
#undef local_c0
#undef local_b8
#undef local_b4
#undef local_b0
#undef local_ac
#undef local_2c
#undef local_28

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
#undef UINT_40010818
#define UINT_40010818 (*(uint *)(0x40010818U))
#undef UINT_40010850
#define UINT_40010850 (*(uint *)(0x40010850U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004fc8
 */

void recovered_10004fc8(undefined1 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  code *UNRECOVERED_JUMPTABLE;
  bool bVar3;

  if (*(void **)(param_1 + 0x38) != (void *)0x0) {
    iVar2 = Ram40010800;
    if ((iVar2 == 0x50414d57) && (iVar2 = Ram40010804, iVar2 != 0)) {
      uVar1 = Ram40010808;
      bVar3 = 0xb < uVar1;
      if (bVar3) {
        uVar1 = Ram40010808;
      }
      if ((bVar3 && 0x53 < uVar1) &&
         (UNRECOVERED_JUMPTABLE = (code *)UINT_40010850, UNRECOVERED_JUMPTABLE != (code *)0x0)) {
        (*UNRECOVERED_JUMPTABLE)(*(void **)(param_1 + 0x38));
      }
    }
    *(undefined4 *)(param_1 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  if (*(void **)(param_1 + 0x3c) != (void *)0x0) {
    iVar2 = Ram40010800;
    if ((iVar2 == 0x50414d57) && (iVar2 = Ram40010804, iVar2 != 0)) {
      uVar1 = Ram40010808;
      bVar3 = 0xb < uVar1;
      if (bVar3) {
        uVar1 = Ram40010808;
      }
      if ((bVar3 && 0x53 < uVar1) &&
         (UNRECOVERED_JUMPTABLE = (code *)UINT_40010850, UNRECOVERED_JUMPTABLE != (code *)0x0)) {
        (*UNRECOVERED_JUMPTABLE)(*(void **)(param_1 + 0x3c));
      }
    }
    param_1[0x48] = 0;
    *(undefined4 *)(param_1 + 0x44) = 0;
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }
  iVar2 = Ram40010800;
  *param_1 = 0;
  if ((iVar2 == 0x50414d57) && (iVar2 = Ram40010804, iVar2 != 0)) {
    uVar1 = Ram40010808;
    bVar3 = 0xb < uVar1;
    if (bVar3) {
      uVar1 = Ram40010808;
    }
    if ((bVar3 && 0x1b < uVar1) &&
       (UNRECOVERED_JUMPTABLE = (code *)UINT_40010818, UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x100050b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
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
#undef UINT_40010818
#undef UINT_40010850

#undef DAT_1002413c
#define DAT_1002413c (*(uint32_t *)(((uintptr_t)pf_module_state + 0xb34U)))
#undef DAT_1002430c
#define DAT_1002430c (*(void * *)(((uintptr_t)pf_module_state + 0xd04U)))
#undef DAT_10024314
#define DAT_10024314 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xd0cU)))
#undef DAT_10024910
#define DAT_10024910 (*(void * *)(((uintptr_t)pf_module_state + 0x1308U)))
#undef DAT_10024914
#define DAT_10024914 (*(void * *)(((uintptr_t)pf_module_state + 0x130cU)))
#undef DAT_10027610
#define DAT_10027610 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4008U)))
#undef DAT_10027614
#define DAT_10027614 (*(int *)(((uintptr_t)pf_module_state + 0x400cU)))
#undef DAT_10027724
#define DAT_10027724 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x411cU)))
#undef DAT_10027728
#define DAT_10027728 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4120U)))
#undef DAT_10028fac
#define DAT_10028fac (*(void * *)(((uintptr_t)pf_module_state + 0x59a4U)))
#undef DAT_10028fb0
#define DAT_10028fb0 (*(void * *)(((uintptr_t)pf_module_state + 0x59a8U)))
#undef DAT_10028fb4
#define DAT_10028fb4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x59acU)))
#undef DAT_10028fb8
#define DAT_10028fb8 (*(void * *)(((uintptr_t)pf_module_state + 0x59b0U)))
#undef DAT_10028fbc
#define DAT_10028fbc (*(uint32_t *)(((uintptr_t)pf_module_state + 0x59b4U)))
#undef DAT_10028fc0
#define DAT_10028fc0 (*(void * *)(((uintptr_t)pf_module_state + 0x59b8U)))
#undef DAT_10028fc4
#define DAT_10028fc4 (*(void * *)(((uintptr_t)pf_module_state + 0x59bcU)))
#undef DAT_10028fc8
#define DAT_10028fc8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x59c0U)))
#undef DAT_10028fcc
#define DAT_10028fcc (*(uint32_t *)(((uintptr_t)pf_module_state + 0x59c4U)))
#undef DAT_10028fd0
#define DAT_10028fd0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x59c8U)))
#undef DAT_10028fd4
#define DAT_10028fd4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x59ccU)))
#undef DAT_10028fd8
#define DAT_10028fd8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x59d0U)))
#undef DAT_10028fdc
#define DAT_10028fdc (*(uint32_t *)(((uintptr_t)pf_module_state + 0x59d4U)))
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
#undef UINT_40010878
#define UINT_40010878 (*(uint *)(0x40010878U))
#undef _DAT_10027610
#define _DAT_10027610 (*(void * *)(((uintptr_t)pf_module_state + 0x4008U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100050f8
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_100050f8(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  code *pcVar3;
  int *dst;
  void *pvVar4;
  void *pvVar5;
  int iVar6;
  int iVar7;
  bool bVar8;

  iVar7 = 0x14;
  iVar6 = 0xb08;
  pvVar5 = DAT_1002430c;
  pvVar4 = DAT_1002430c;
  do {
    if (pvVar4 == (void *)0x0) {
      pvVar4 = (void *)0x0;
    }
    else if (*(char *)((int)pvVar4 + iVar6 + -0xb08) == '\x01') {
      pvVar4 = *(void **)((int)pvVar4 + iVar6 + -0x1c);
      if (((pvVar4 != (void *)0x0) && (iVar2 = Ram40010800, iVar2 == 0x50414d57)) &&
         (iVar2 = Ram40010804, iVar2 != 0)) {
        uVar1 = Ram40010808;
        bVar8 = 0xb < uVar1;
        if (bVar8) {
          uVar1 = Ram40010808;
        }
        if ((bVar8 && 0x53 < uVar1) && (pcVar3 = (code *)UINT_40010850, pcVar3 != (code *)0x0)) {
          (*pcVar3)(pvVar4);
          pvVar5 = DAT_1002430c;
        }
      }
      dst = (int *)((int)pvVar5 + iVar6) + -1;
      pvVar4 = (void *)*dst;
      if (((*(int *)((int)pvVar5 + iVar6) == 0) && (pvVar4 != (void *)0x0)) &&
         ((iVar2 = Ram40010800, iVar2 == 0x50414d57 && (iVar2 = Ram40010804, iVar2 != 0)))) {
        uVar1 = Ram40010808;
        bVar8 = 0xb < uVar1;
        if (bVar8) {
          uVar1 = Ram40010808;
        }
        if ((bVar8 && 0x53 < uVar1) && (pcVar3 = (code *)UINT_40010850, pcVar3 != (code *)0x0)) {
          (*pcVar3)(pvVar4);
        }
      }
      memset(dst,0,0x18);
      pvVar5 = DAT_1002430c;
      pvVar4 = DAT_1002430c;
    }
    iVar6 = iVar6 + 0xd9c;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  iVar6 = 0;
  do {
    pvVar5 = *(void **)((int)&DAT_10027724 + iVar6);
    if ((((*(int *)((int)&DAT_10027728 + iVar6) == 0) && (pvVar5 != (void *)0x0)) &&
        (iVar7 = Ram40010800, iVar7 == 0x50414d57)) && (iVar7 = Ram40010804, iVar7 != 0)) {
      uVar1 = Ram40010808;
      bVar8 = 0xb < uVar1;
      if (bVar8) {
        uVar1 = Ram40010808;
      }
      if ((bVar8 && 0x53 < uVar1) && (pcVar3 = (code *)UINT_40010850, pcVar3 != (code *)0x0)) {
        (*pcVar3)(pvVar5);
      }
    }
    memset((undefined4 *)((int)&DAT_10027724 + iVar6),0,0x18);
    iVar6 = iVar6 + 0x110;
  } while (iVar6 != 0xaa0);
  if (DAT_10028fac != (void *)0x0) {
    iVar6 = Ram40010800;
    if ((iVar6 == 0x50414d57) && (iVar6 = Ram40010804, iVar6 != 0)) {
      uVar1 = Ram40010808;
      bVar8 = 0xb < uVar1;
      if (bVar8) {
        uVar1 = Ram40010808;
      }
      if ((bVar8 && 0x7b < uVar1) && (pcVar3 = (code *)UINT_40010878, pcVar3 != (code *)0x0)) {
        (*pcVar3)(DAT_10028fac);
      }
    }
    DAT_10028fac = (void *)0x0;
  }
  if ((((DAT_10027614 == 0) && (_DAT_10027610 != (void *)0x0)) &&
      (iVar6 = Ram40010800, iVar6 == 0x50414d57)) && (iVar6 = Ram40010804, iVar6 != 0)) {
    uVar1 = Ram40010808;
    bVar8 = 0xb < uVar1;
    if (bVar8) {
      uVar1 = Ram40010808;
    }
    if ((bVar8 && 0x53 < uVar1) && (pcVar3 = (code *)UINT_40010850, pcVar3 != (code *)0x0)) {
      (*pcVar3)(_DAT_10027610);
    }
  }
  memset(&DAT_10027610,0,0x18);
  if (DAT_10028fb0 != (void *)0x0) {
    iVar6 = Ram40010800;
    if ((iVar6 == 0x50414d57) && (iVar6 = Ram40010804, iVar6 != 0)) {
      uVar1 = Ram40010808;
      bVar8 = 0xb < uVar1;
      if (bVar8) {
        uVar1 = Ram40010808;
      }
      if ((bVar8 && 0x53 < uVar1) && (pcVar3 = (code *)UINT_40010850, pcVar3 != (code *)0x0)) {
        (*pcVar3)(DAT_10028fb0);
      }
    }
    DAT_10028fb0 = (void *)0x0;
  }
  DAT_10024314 = 0;
  DAT_10028fb4 = 0;
  DAT_1002413c = 0xffffffff;
  if (((DAT_1002430c != (void *)0x0) && (iVar6 = Ram40010800, iVar6 == 0x50414d57)) &&
     (iVar6 = Ram40010804, iVar6 != 0)) {
    uVar1 = Ram40010808;
    bVar8 = 0xb < uVar1;
    if (bVar8) {
      uVar1 = Ram40010808;
    }
    if ((bVar8 && 0x53 < uVar1) && (pcVar3 = (code *)UINT_40010850, pcVar3 != (code *)0x0)) {
      (*pcVar3)(DAT_1002430c);
    }
  }
  if (((DAT_10024910 != (void *)0x0) && (iVar6 = Ram40010800, iVar6 == 0x50414d57)) &&
     (iVar6 = Ram40010804, iVar6 != 0)) {
    uVar1 = Ram40010808;
    bVar8 = 0xb < uVar1;
    if (bVar8) {
      uVar1 = Ram40010808;
    }
    if ((bVar8 && 0x53 < uVar1) && (pcVar3 = (code *)UINT_40010850, pcVar3 != (code *)0x0)) {
      (*pcVar3)(DAT_10024910);
    }
  }
  if (((DAT_10024914 != (void *)0x0) && (iVar6 = Ram40010800, iVar6 == 0x50414d57)) &&
     (iVar6 = Ram40010804, iVar6 != 0)) {
    uVar1 = Ram40010808;
    bVar8 = 0xb < uVar1;
    if (bVar8) {
      uVar1 = Ram40010808;
    }
    if ((bVar8 && 0x53 < uVar1) && (pcVar3 = (code *)UINT_40010850, pcVar3 != (code *)0x0)) {
      (*pcVar3)(DAT_10024914);
    }
  }
  if (((DAT_10028fb8 != (void *)0x0) && (iVar6 = Ram40010800, iVar6 == 0x50414d57)) &&
     (iVar6 = Ram40010804, iVar6 != 0)) {
    uVar1 = Ram40010808;
    bVar8 = 0xb < uVar1;
    if (bVar8) {
      uVar1 = Ram40010808;
    }
    if ((bVar8 && 0x53 < uVar1) && (pcVar3 = (code *)UINT_40010850, pcVar3 != (code *)0x0)) {
      (*pcVar3)(DAT_10028fb8);
    }
  }
  if (DAT_10028fc0 != (void *)0x0) {
    iVar6 = Ram40010800;
    if ((iVar6 == 0x50414d57) && (iVar6 = Ram40010804, iVar6 != 0)) {
      uVar1 = Ram40010808;
      bVar8 = 0xb < uVar1;
      if (bVar8) {
        uVar1 = Ram40010808;
      }
      if ((bVar8 && 0x53 < uVar1) && (pcVar3 = (code *)UINT_40010850, pcVar3 != (code *)0x0)) {
        (*pcVar3)(DAT_10028fc0);
      }
    }
    DAT_10028fc0 = (void *)0x0;
  }
  if (DAT_10028fc4 != (void *)0x0) {
    iVar6 = Ram40010800;
    if ((iVar6 == 0x50414d57) && (iVar6 = Ram40010804, iVar6 != 0)) {
      uVar1 = Ram40010808;
      bVar8 = 0xb < uVar1;
      if (bVar8) {
        uVar1 = Ram40010808;
      }
      if ((bVar8 && 0x53 < uVar1) && (pcVar3 = (code *)UINT_40010850, pcVar3 != (code *)0x0)) {
        (*pcVar3)(DAT_10028fc4);
      }
    }
    DAT_10028fc4 = (void *)0x0;
  }
  DAT_10028fcc = 0;
  DAT_10028fc8 = 0;
  DAT_10028fd0 = 0;
  DAT_10028fd4 = 0;
  DAT_10028fd8 = 0;
  DAT_10028fdc = 0;
  DAT_1002430c = (void *)0x0;
  DAT_10024910 = (void *)0x0;
  DAT_10024914 = (void *)0x0;
  DAT_10028fb8 = (void *)0x0;
  DAT_10028fbc = 0;
  return;
}

#undef DAT_1002413c
#undef DAT_1002430c
#undef DAT_10024314
#undef DAT_10024910
#undef DAT_10024914
#undef DAT_10027610
#undef DAT_10027614
#undef DAT_10027724
#undef DAT_10027728
#undef DAT_10028fac
#undef DAT_10028fb0
#undef DAT_10028fb4
#undef DAT_10028fb8
#undef DAT_10028fbc
#undef DAT_10028fc0
#undef DAT_10028fc4
#undef DAT_10028fc8
#undef DAT_10028fcc
#undef DAT_10028fd0
#undef DAT_10028fd4
#undef DAT_10028fd8
#undef DAT_10028fdc
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef Ram40010800
#undef Ram40010804
#undef Ram40010808
#undef UINT_40010850
#undef UINT_40010878
#undef _DAT_10027610

#undef DAT_10023774
#define DAT_10023774 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x16cU)))
#undef DAT_10024910
#define DAT_10024910 (*(char * *)(((uintptr_t)pf_module_state + 0x1308U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005734
 */

int recovered_10005734(int param_1,char *param_2,undefined4 param_3,char param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  short sVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  char *pcVar10;

  pcVar10 = &DAT_10023774;
  if (param_2 != (char *)0x0) {
    pcVar10 = param_2;
  }
  iVar8 = 0;
  iVar7 = 0;
  pcVar2 = DAT_10024910;
  do {
    if ((pcVar2[iVar8] == '\x01') && (*(int *)(pcVar2 + iVar8 + 4) == param_1)) {
      iVar3 = strcmp(pcVar2 + iVar8 + 8,pcVar10);
      if (iVar3 == 0) {
        return iVar7;
      }
      pcVar2 = DAT_10024910;
    }
    iVar7 = iVar7 + 1;
    iVar8 = iVar8 + 300;
  } while (iVar7 != 0x12);
  uVar9 = 0;
  iVar7 = 0;
  pcVar5 = pcVar2;
  if (*pcVar2 != '\0') {
    iVar7 = 1;
    pcVar5 = pcVar2 + 300;
    if (*pcVar5 == '\x01') {
      iVar7 = 2;
      pcVar5 = pcVar2 + 600;
      if (*pcVar5 == '\x01') {
        iVar7 = 3;
        pcVar5 = pcVar2 + 900;
        if (*pcVar5 == '\x01') {
          iVar7 = 4;
          pcVar5 = pcVar2 + 0x4b0;
          if (*pcVar5 == '\x01') {
            iVar7 = 5;
            pcVar5 = pcVar2 + 0x5dc;
            if (*pcVar5 == '\x01') {
              iVar7 = 6;
              pcVar5 = pcVar2 + 0x708;
              if (*pcVar5 == '\x01') {
                iVar7 = 7;
                pcVar5 = pcVar2 + 0x834;
                if (*pcVar5 == '\x01') {
                  iVar7 = 8;
                  pcVar5 = pcVar2 + 0x960;
                  if (*pcVar5 == '\x01') {
                    iVar7 = 9;
                    pcVar5 = pcVar2 + 0xa8c;
                    if (*pcVar5 == '\x01') {
                      iVar7 = 10;
                      pcVar5 = pcVar2 + 3000;
                      if (*pcVar5 == '\x01') {
                        iVar7 = 0xb;
                        pcVar5 = pcVar2 + 0xce4;
                        if (*pcVar5 == '\x01') {
                          iVar7 = 0xc;
                          pcVar5 = pcVar2 + 0xe10;
                          if (*pcVar5 == '\x01') {
                            iVar7 = 0xd;
                            pcVar5 = pcVar2 + 0xf3c;
                            if (*pcVar5 == '\x01') {
                              pcVar5 = pcVar2 + 0x1068;
                              iVar7 = 0xe;
                              if (*pcVar5 == '\x01') {
                                iVar7 = 0xf;
                                pcVar5 = pcVar2 + 0x1194;
                                if (*pcVar5 == '\x01') {
                                  iVar7 = 0x10;
                                  pcVar5 = pcVar2 + 0x12c0;
                                  if (*pcVar5 == '\x01') {
                                    pcVar5 = pcVar2 + 0x13ec;
                                    iVar7 = 0x11;
                                    if (*pcVar5 == '\x01') {
                                      return -1;
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
                }
              }
            }
          }
        }
      }
    }
  }
  sVar1 = (short)iVar7;
  *pcVar5 = '\x01';
  iVar8 = sVar1 * 300 + 8;
  *(int *)(pcVar2 + sVar1 * 300 + 4) = param_1;
  pcVar2[sVar1 * 300 + 1] = param_4;
  cVar6 = *pcVar10;
  if (cVar6 != '\0') {
    uVar4 = 0;
    do {
      uVar9 = uVar4 + 1;
      pcVar2[uVar4 + iVar8] = cVar6;
      if (0x26 < uVar9) break;
      cVar6 = pcVar10[uVar4 + 1];
      uVar4 = uVar9;
    } while (cVar6 != '\0');
  }
  pcVar2[uVar9 + iVar8] = '\0';
  pcVar2[sVar1 * 300 + 0x30] = '\0';
  uVar9 = recovered_10005d20();
  pcVar10 = DAT_10024910;
  *(short *)(DAT_10024910 + sVar1 * 300 + 0x128) = (short)param_3;
  pcVar10[sVar1 * 300 + 0x12a] = (char)((uint)param_3 >> 0x10);
  *(uint *)(pcVar10 + sVar1 * 300 + 0x124) = uVar9;
  return iVar7;
}

#undef DAT_10023774
#undef DAT_10024910

#undef DAT_10023774
#define DAT_10023774 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x16cU)))
#undef DAT_10023899
#define DAT_10023899 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x291U)))
#undef DAT_10024910
#define DAT_10024910 (*(char * *)(((uintptr_t)pf_module_state + 0x1308U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100059dc
 */

void recovered_100059dc(char *param_1,int param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  short sVar10;
  char *pcVar11;
  bool bVar12;

  iVar9 = 0;
  if (param_1 == (char *)0x0) {
    pcVar2 = (char *)0x0;
    param_1 = &DAT_10023774;
  }
  else {
    pcVar2 = (char *)0x0;
    if (*param_1 != '\0') {
      pcVar11 = param_1;
      cVar7 = *param_1;
      do {
        cVar1 = pcVar11[1];
        if (cVar7 == '/') {
          pcVar2 = pcVar11;
        }
        pcVar11 = pcVar11 + 1;
        cVar7 = cVar1;
      } while (cVar1 != '\0');
    }
  }
  pcVar11 = param_1;
  if (pcVar2 != (char *)0x0) {
    pcVar11 = pcVar2 + 1;
  }
  iVar8 = 0x12;
  pcVar2 = DAT_10024910;
  do {
    if (pcVar2[iVar9] == '\x01') {
      iVar4 = *(int *)(pcVar2 + iVar9 + 4);
      bVar12 = iVar4 == 5;
      if (bVar12) {
        iVar4 = *(int *)(pcVar2 + iVar9 + 0x124);
      }
      if (bVar12 && iVar4 == param_2) {
        iVar4 = strcmp(pcVar2 + iVar9 + 0x30,param_1);
        pcVar2 = DAT_10024910;
        if (iVar4 == 0) {
          DAT_10024910[iVar9 + 1] = '\x01';
          return;
        }
      }
    }
    iVar8 = iVar8 + -1;
    iVar9 = iVar9 + 300;
  } while (iVar8 != 0);
  uVar5 = 0;
  sVar10 = 0;
  pcVar6 = pcVar2;
  if (*pcVar2 != '\0') {
    sVar10 = 1;
    pcVar6 = pcVar2 + 300;
    if (*pcVar6 == '\x01') {
      sVar10 = 2;
      pcVar6 = pcVar2 + 600;
      if (*pcVar6 == '\x01') {
        sVar10 = 3;
        pcVar6 = pcVar2 + 900;
        if (*pcVar6 == '\x01') {
          sVar10 = 4;
          pcVar6 = pcVar2 + 0x4b0;
          if (*pcVar6 == '\x01') {
            sVar10 = 5;
            pcVar6 = pcVar2 + 0x5dc;
            if (*pcVar6 == '\x01') {
              sVar10 = 6;
              pcVar6 = pcVar2 + 0x708;
              if (*pcVar6 == '\x01') {
                sVar10 = 7;
                pcVar6 = pcVar2 + 0x834;
                if (*pcVar6 == '\x01') {
                  sVar10 = 8;
                  pcVar6 = pcVar2 + 0x960;
                  if (*pcVar6 == '\x01') {
                    sVar10 = 9;
                    pcVar6 = pcVar2 + 0xa8c;
                    if (*pcVar6 == '\x01') {
                      sVar10 = 10;
                      pcVar6 = pcVar2 + 3000;
                      if (*pcVar6 == '\x01') {
                        sVar10 = 0xb;
                        pcVar6 = pcVar2 + 0xce4;
                        if (*pcVar6 == '\x01') {
                          sVar10 = 0xc;
                          pcVar6 = pcVar2 + 0xe10;
                          if (*pcVar6 == '\x01') {
                            sVar10 = 0xd;
                            pcVar6 = pcVar2 + 0xf3c;
                            if (*pcVar6 == '\x01') {
                              pcVar6 = pcVar2 + 0x1068;
                              sVar10 = 0xe;
                              if (*pcVar6 == '\x01') {
                                sVar10 = 0xf;
                                pcVar6 = pcVar2 + 0x1194;
                                if (*pcVar6 == '\x01') {
                                  sVar10 = 0x10;
                                  pcVar6 = pcVar2 + 0x12c0;
                                  if (*pcVar6 == '\x01') {
                                    pcVar6 = pcVar2 + 0x13ec;
                                    sVar10 = 0x11;
                                    if (*pcVar6 == '\x01') {
                                      return;
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
                }
              }
            }
          }
        }
      }
    }
  }
  *pcVar6 = '\x01';
  iVar9 = sVar10 * 300 + 0x30;
  *(int *)(pcVar2 + sVar10 * 300 + 0x124) = param_2;
  pcVar6 = pcVar2 + sVar10 * 300 + 4;
  pcVar6[0] = '\x05';
  pcVar6[1] = '\0';
  pcVar6[2] = '\0';
  pcVar6[3] = '\0';
  pcVar2[sVar10 * 300 + 1] = '\x01';
  cVar7 = *param_1;
  if (cVar7 != '\0') {
    uVar3 = 0;
    do {
      uVar5 = uVar3 + 1;
      pcVar2[uVar3 + iVar9] = cVar7;
      if (0xef < uVar5) break;
      cVar7 = param_1[uVar3 + 1];
      uVar3 = uVar5;
    } while (cVar7 != '\0');
  }
  pcVar2[uVar5 + iVar9] = '\0';
  iVar9 = sVar10 * 300 + 8;
  pcVar6 = &DAT_10023899;
  if (*pcVar11 != '\0') {
    pcVar6 = pcVar11;
  }
  uVar5 = 0;
  cVar7 = *pcVar6;
  if (cVar7 != '\0') {
    uVar3 = 0;
    do {
      uVar5 = uVar3 + 1;
      pcVar2[uVar3 + iVar9] = cVar7;
      if (0x26 < uVar5) break;
      cVar7 = pcVar6[uVar3 + 1];
      uVar3 = uVar5;
    } while (cVar7 != '\0');
  }
  pcVar2[uVar5 + iVar9] = '\0';
  (pcVar2 + sVar10 * 300 + 0x128)[0] = -0x14;
  (pcVar2 + sVar10 * 300 + 0x128)[1] = -0x14;
  pcVar2[sVar10 * 300 + 0x12a] = -0x14;
  return;
}

#undef DAT_10023774
#undef DAT_10023899
#undef DAT_10024910

#undef DAT_100242d8
#define DAT_100242d8 (*(uint *)(((uintptr_t)pf_module_state + 0xcd0U)))
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
#undef UINT_400108bc
#define UINT_400108bc (*(uint *)(0x400108bcU))
#undef UINT_400108c0
#define UINT_400108c0 (*(uint *)(0x400108c0U))
#undef UINT_40010910
#define UINT_40010910 (*(uint *)(0x40010910U))
#define auStack_3fb0 (*(undefined1 (*)[496])(frame + 32))
#define auStack_3dc0 (*(uint (*)[3908])(frame + 528))
#define auStack_b0 (*(undefined1 (*)[4])(frame + 16160))
#define local_3fbc (*(uint *)(frame + 20))
#define local_3fb4 (*(uint *)(frame + 28))
#define local_ac (*(uint *)(frame + 16164))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005d20
 */

uint recovered_10005d20(void)

{
  unsigned char frame[16368] __attribute__((aligned(16))) = {0};

  int iVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  uint deviceId;
  uint *puVar5;
  uint uVar6;
  bool bVar7;

  uVar4 = 0xffffffff;
  iVar1 = Ram40010800;
  if ((iVar1 == 0x50414d57) && (iVar1 = Ram40010804, iVar1 != 0)) {
    uVar6 = Ram40010808;
    bVar7 = 0xb < uVar6;
    if (bVar7) {
      uVar6 = Ram40010808;
    }
    if ((bVar7 && 0xbf < uVar6) && (pcVar2 = (code *)UINT_400108bc, pcVar2 != (code *)0x0)) {
      uVar4 = (*pcVar2)();
    }
  }
  local_3fb4 = 0;
  if (DAT_100242d8 < 0x80000000) {
    return DAT_100242d8;
  }
  if (-1 < (int)uVar4) {
    DAT_100242d8 = uVar4;
    return uVar4;
  }
  DAT_100242d8 = 0xfffffffe;
  memset(auStack_3fb0,0,0x3f00);
  iVar1 = Ram40010800;
  if ((iVar1 == 0x50414d57) && (iVar1 = Ram40010804, iVar1 != 0)) {
    uVar4 = Ram40010808;
    bVar7 = 0xb < uVar4;
    if (bVar7) {
      uVar4 = Ram40010808;
    }
    if (((bVar7 && 0xc3 < uVar4) && (pcVar2 = (code *)UINT_400108c0, pcVar2 != (code *)0x0)) &&
       (uVar4 = (*pcVar2)(auStack_3fb0,0x20,&local_3fb4), uVar4 != 0)) {
      if (local_3fb4 < 0x21) {
        if (local_3fb4 == 0) {
          return 0xffffffff;
        }
      }
      else {
        local_3fb4 = 0x20;
      }
      uVar4 = 0xffffffff;
      uVar6 = 0;
      local_3fbc = 0xffffffff;
      puVar5 = auStack_3dc0;
      do {
        deviceId = *puVar5;
        if (-1 < (int)deviceId) {
          memset(auStack_b0,0,0x8c);
          iVar1 = Ram40010800;
          if ((iVar1 == 0x50414d57) && (iVar1 = Ram40010804, iVar1 != 0)) {
            uVar3 = Ram40010808;
            bVar7 = 0xb < uVar3;
            if (bVar7) {
              uVar3 = Ram40010808;
            }
            if (((bVar7 && 0x113 < uVar3) && (pcVar2 = (code *)UINT_40010910, pcVar2 != (code *)0x0)
                ) && ((uVar3 = (*pcVar2)(deviceId,auStack_b0), uVar3 != 0 &&
                      ((local_ac & 0x12) == 2)))) {
              memset(auStack_b0,0,0x8c);
              iVar1 = Ram40010800;
              if ((int)local_3fbc < 0) {
                local_3fbc = deviceId;
              }
              if ((iVar1 == 0x50414d57) && (iVar1 = Ram40010804, iVar1 != 0)) {
                uVar3 = Ram40010808;
                bVar7 = 0xb < uVar3;
                if (bVar7) {
                  uVar3 = Ram40010808;
                }
                if ((((bVar7 && 0x113 < uVar3) &&
                     (pcVar2 = (code *)UINT_40010910, pcVar2 != (code *)0x0)) &&
                    (uVar3 = (*pcVar2)(deviceId,auStack_b0), uVar3 != 0)) &&
                   ((local_ac & 0x12) == 2 && (local_ac & 0xc) == 0)) {
                  if ((int)uVar4 < 0) {
                    uVar4 = deviceId;
                  }
                  bVar7 = recovered_1000e24c(deviceId);
                  if (bVar7) {
                    DAT_100242d8 = deviceId;
                    return deviceId;
                  }
                }
              }
            }
          }
        }
        uVar6 = uVar6 + 1;
        puVar5 = puVar5 + 0x7e;
        if (local_3fb4 <= uVar6) {
          if (uVar4 < 0x80000000) {
            return uVar4;
          }
          return local_3fbc | (int)local_3fbc >> 0x1f;
        }
      } while( true );
    }
  }
  return 0xffffffff;
}

#undef DAT_100242d8
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef Ram40010800
#undef Ram40010804
#undef Ram40010808
#undef UINT_400108bc
#undef UINT_400108c0
#undef UINT_40010910
#undef auStack_3fb0
#undef auStack_3dc0
#undef auStack_b0
#undef local_3fbc
#undef local_3fb4
#undef local_ac

#undef DAT_100242dc
#define DAT_100242dc (*(int *)(((uintptr_t)pf_module_state + 0xcd4U)))
#undef DAT_1002430c
#define DAT_1002430c (*(int *)(((uintptr_t)pf_module_state + 0xd04U)))
#undef DAT_10024914
#define DAT_10024914 (*(int *)(((uintptr_t)pf_module_state + 0x130cU)))
#undef DAT_100290dc
#define DAT_100290dc (*(int *)(((uintptr_t)pf_module_state + 0x5ad4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005fdc
 */

void recovered_10005fdc(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;

  recovered_1000f8c8();
  recovered_1000fdc0();
  recovered_10010090();
  recovered_100101b8();
  if (0 < DAT_100290dc) {
    iVar2 = 0;
    do {
      iVar1 = *(int *)(DAT_10024914 + iVar2 * 4);
      recovered_10010640((char *)(iVar1 * 0xd9c + DAT_1002430c),(uint)(iVar1 == DAT_100242dc));
      iVar2 = iVar2 + 1;
    } while (iVar2 < DAT_100290dc);
  }
  recovered_100118f4();
  recovered_10011a3c();
  recovered_10011d24();
  recovered_10011e18();
  return;
}

#undef DAT_100242dc
#undef DAT_1002430c
#undef DAT_10024914
#undef DAT_100290dc

#undef DAT_1002408c
#define DAT_1002408c (*(uint32_t *)(((uintptr_t)pf_module_state + 0xa84U)))
#undef DAT_10024130
#define DAT_10024130 (*(uint *)(((uintptr_t)pf_module_state + 0xb28U)))
#undef DAT_10024134
#define DAT_10024134 (*(uint *)(((uintptr_t)pf_module_state + 0xb2cU)))
#undef DAT_100242f8
#define DAT_100242f8 (*(int *)(((uintptr_t)pf_module_state + 0xcf0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006078
 */

void recovered_10006078(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  char *pcVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  undefined1 uVar13;
  bool bVar14;
  bool bVar15;

  uVar3 = DAT_10024134;
  uVar2 = DAT_10024130;
  uVar6 = *(uint *)(param_1 + 0x4c);
  iVar4 = *(int *)(param_1 + 0x50);
  iVar7 = 0;
LAB_100060d4:
  iVar11 = 0;
  uVar10 = iVar7 + iVar4;
  uVar5 = uVar6;
  pcVar9 = (char *)(&DAT_1002408c)[iVar7];
  do {
    cVar1 = *pcVar9;
    if (cVar1 == 'B') {
      if (-1 < (int)(uVar5 | uVar10)) {
        bVar15 = SBORROW4(uVar2,uVar5);
        iVar8 = uVar2 - uVar5;
        bVar14 = uVar2 == uVar5;
        if ((int)uVar5 < (int)uVar2) {
          bVar15 = SBORROW4(uVar3,uVar10);
          iVar8 = uVar3 - uVar10;
          bVar14 = uVar3 == uVar10;
        }
        if ((!bVar14 && iVar8 < 0 == bVar15) && (DAT_100242f8 != 0)) {
          uVar13 = 0;
          uVar12 = iVar11 + uVar6;
LAB_1000617c:
          iVar8 = uVar2 * uVar10 + uVar12;
          *(undefined1 *)(DAT_100242f8 + iVar8 * 4) = uVar13;
          *(undefined1 *)(DAT_100242f8 + iVar8 * 4 + 1) = uVar13;
          *(undefined1 *)(DAT_100242f8 + iVar8 * 4 + 2) = uVar13;
          *(undefined1 *)(DAT_100242f8 + iVar8 * 4 + 3) = 0xff;
        }
      }
    }
    else if (cVar1 == 'W') {
      if (-1 < (int)(uVar5 | uVar10)) {
        bVar15 = SBORROW4(uVar2,uVar5);
        iVar8 = uVar2 - uVar5;
        bVar14 = uVar2 == uVar5;
        if ((int)uVar5 < (int)uVar2) {
          bVar15 = SBORROW4(uVar3,uVar10);
          iVar8 = uVar3 - uVar10;
          bVar14 = uVar3 == uVar10;
        }
        if ((!bVar14 && iVar8 < 0 == bVar15) && (uVar13 = 0xff, uVar12 = uVar5, DAT_100242f8 != 0))
        goto LAB_1000617c;
      }
    }
    else if (cVar1 == '\0') break;
    uVar5 = uVar5 + 1;
    iVar11 = iVar11 + 1;
    pcVar9 = pcVar9 + 1;
  } while( true );
  iVar7 = iVar7 + 1;
  if (iVar7 == 0x10) {
    return;
  }
  goto LAB_100060d4;
}

#undef DAT_1002408c
#undef DAT_10024130
#undef DAT_10024134
#undef DAT_100242f8

#undef DAT_10006b90
#define DAT_10006b90 (*(uint64_t *)(0x10006b90U))
#undef DAT_10006b98
#define DAT_10006b98 (*(uint64_t *)(0x10006b98U))
#undef DAT_10006ba0
#define DAT_10006ba0 (*(uint64_t *)(0x10006ba0U))
#undef DAT_10006ba8
#define DAT_10006ba8 (*(uint64_t *)(0x10006ba8U))
#undef DAT_10006bb0
#define DAT_10006bb0 (*(uint64_t *)(0x10006bb0U))
#undef DAT_10006bb8
#define DAT_10006bb8 (*(uint64_t *)(0x10006bb8U))
#undef DAT_10006bc0
#define DAT_10006bc0 (*(uint64_t *)(0x10006bc0U))
#undef DAT_10006bc8
#define DAT_10006bc8 (*(uint64_t *)(0x10006bc8U))
#undef DAT_100242f0
#define DAT_100242f0 (*(uint *)(((uintptr_t)pf_module_state + 0xce8U)))
#undef DAT_100242f4
#define DAT_100242f4 (*(uint *)(((uintptr_t)pf_module_state + 0xcecU)))
#undef DAT_100242f8
#define DAT_100242f8 (*(int *)(((uintptr_t)pf_module_state + 0xcf0U)))
#undef DAT_10028fc0
#define DAT_10028fc0 (*(int *)(((uintptr_t)pf_module_state + 0x59b8U)))
#undef DAT_10028fc4
#define DAT_10028fc4 (*(int *)(((uintptr_t)pf_module_state + 0x59bcU)))
#undef DAT_10028fc8
#define DAT_10028fc8 (*(uint *)(((uintptr_t)pf_module_state + 0x59c0U)))
#undef DAT_10028fcc
#define DAT_10028fcc (*(uint *)(((uintptr_t)pf_module_state + 0x59c4U)))
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
#undef UINT_4001095c
#define UINT_4001095c (*(uint *)(0x4001095cU))
#define local_3c (*(uint *)(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100061c0
 */

void recovered_100061c0(char *param_1)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint128 auVar2;
  bool bVar3;
  code *UNRECOVERED_JUMPTABLE;
  int iVar4;
  uint uVar5;
  void *dst;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int *piVar10;
  uint uVar11;
  undefined1 *puVar12;
  int iVar13;
  int iVar14;
  uint extraout_r3 = 0;
  uint uVar15;
  uint extraout_r3_00 = 0;
  uint extraout_r3_01 = 0;
  uint uVar16;
  uint extraout_r3_02 = 0;
  uint extraout_r3_03 = 0;
  uint extraout_r3_04 = 0;
  byte *pbVar17;
  int iVar18;
  uint uVar19;
  undefined1 *puVar20;
  uint uVar21;
  uint unaff_r6;
  void *pvVar22;
  void *a;
  undefined8 *puVar23;
  uint uVar24;
  int iVar25;
  ulong n;
  int iVar26;
  uint unaff_r10;
  uint uVar27;
  bool bVar28;
  bool bVar29;
  bool bVar30;
  uint128 auVar31;
  uint128 auVar32;
  uint128 auVar33;
  uint128 auVar34;
  uint128 auVar35;
  uint128 auVar36;
  undefined8 uVar37;
  uint128 auVar38;
  undefined8 uVar39;
  uint128 auVar40;
  uint128 auVar41;
  ulonglong uVar42;

  if (*param_1 == '\x01') {
    piVar10 = (int *)(param_1 + 4);
    iVar18 = *piVar10;
    if ((*(int *)(param_1 + 8) == 0) && (iVar18 != 0)) {
      iVar4 = recovered_1000c814((int)param_1);
      uVar21 = DAT_100242f4;
      uVar5 = DAT_100242f0;
      iVar25 = *(int *)(param_1 + 0x1c);
      if (iVar4 == 0) {
        uVar16 = extraout_r3;
        if (((iVar25 - 0xfU < 0x12) &&
            (uVar16 = extraout_r3, (1 << (iVar25 - 0xfU & 0xff) & 0x20203U) != 0)) &&
           (uVar16 = extraout_r3, DAT_100242f8 != 0)) {
          uVar15 = *(uint *)(param_1 + 0x14);
          if (uVar15 != 0) {
            unaff_r6 = *(uint *)(param_1 + 0x18);
          }
          uVar16 = extraout_r3;
          if (((uVar15 != 0 && unaff_r6 != 0) && (uVar16 = extraout_r3, 0 < (int)DAT_100242f0)) &&
             ((uVar16 = extraout_r3, 0 < (int)DAT_100242f4 &&
              ((uVar16 = extraout_r3, *(int *)(param_1 + 8) == 0 &&
               (iVar18 = *(int *)(param_1 + 4), uVar16 = extraout_r3, iVar18 != 0)))))) {
            uVar42 = recovered_10000c20((ulonglong)uVar15 * (ulonglong)DAT_100242f4,
                                        (ulonglong)DAT_100242f0);
            uVar19 = (uint)uVar42;
            uVar6 = uVar19;
            local_3c = uVar15;
            if (unaff_r6 < uVar19) {
              uVar42 = recovered_10000c20((ulonglong)unaff_r6 * (ulonglong)uVar5,(ulonglong)uVar21);
              uVar19 = (uint)uVar42;
              uVar6 = unaff_r6;
              local_3c = uVar19;
            }
            if (uVar6 != 0) {
              uVar19 = local_3c;
            }
            uVar16 = uVar6;
            if (uVar6 != 0 && uVar19 != 0) {
              recovered_10019234(uVar5,uVar21,local_3c,uVar6);
              uVar5 = *(uint *)(param_1 + 0x18);
              uVar16 = extraout_r3_02;
              if (uVar5 != 0) {
                uVar27 = 0;
                uVar21 = iVar25 + 7U >> 3;
                uVar19 = unaff_r6 - uVar6 >> 1;
                uVar15 = uVar15 - local_3c >> 1;
                uVar11 = *(uint *)(param_1 + 0x14);
                uVar16 = local_3c;
                do {
                  bVar28 = uVar11 != 0;
                  uVar11 = 0;
                  if (bVar28) {
                    uVar5 = 0;
                    puVar20 = (undefined1 *)(*(int *)(param_1 + 0x10) * uVar27 + iVar18);
                    do {
                      uVar16 = 0;
                      if (((uVar27 < uVar19 + uVar6) &&
                          (uVar16 = 0, uVar19 <= uVar27 && uVar15 <= uVar5)) &&
                         (uVar16 = 0, uVar5 < uVar15 + local_3c)) {
                        if ((DAT_10028fc0 == 0) || (DAT_10028fc8 != local_3c)) {
                          uVar42 = recovered_10000c20((ulonglong)(uVar5 - uVar15) *
                                                      (ulonglong)DAT_100242f0,(ulonglong)local_3c);
                          iVar4 = (int)uVar42;
                        }
                        else {
                          iVar4 = *(int *)(DAT_10028fc0 + (uVar5 - uVar15) * 4);
                        }
                        if ((DAT_10028fc4 == 0) || (DAT_10028fcc != uVar6)) {
                          uVar42 = recovered_10000c20((ulonglong)(uVar27 - uVar19) *
                                                      (ulonglong)DAT_100242f4,(ulonglong)uVar6);
                          iVar25 = (int)uVar42;
                        }
                        else {
                          iVar25 = *(int *)(DAT_10028fc4 + (uVar27 - uVar19) * 4);
                        }
                        pbVar17 = (byte *)(DAT_100242f8 + (DAT_100242f0 * iVar25 + iVar4) * 4);
                        uVar16 = recovered_1001ae80((int)piVar10,(uint)*pbVar17,(uint)pbVar17[1],
                                                    (uint)pbVar17[2]);
                      }
                      uVar8 = 0;
                      puVar12 = puVar20;
                      uVar11 = uVar21;
                      do {
                        uVar24 = uVar8 & 0xff;
                        uVar8 = uVar8 + 8;
                        *puVar12 = (char)(uVar16 >> uVar24);
                        uVar11 = uVar11 - 1;
                        puVar12 = puVar12 + 1;
                      } while (uVar11 != 0);
                      uVar11 = *(uint *)(param_1 + 0x14);
                      uVar5 = uVar5 + 1;
                      puVar20 = puVar20 + uVar21;
                    } while (uVar5 < uVar11);
                    uVar5 = *(uint *)(param_1 + 0x18);
                    uVar16 = 0;
                  }
                  uVar27 = uVar27 + 1;
                } while (uVar27 < uVar5);
              }
            }
          }
        }
      }
      else {
        uVar15 = 0;
        if ((iVar25 - 0xfU < 0x12) && ((1 << (iVar25 - 0xfU & 0xff) & 0x20203U) != 0)) {
          uVar15 = iVar25 + 7U >> 3;
        }
        uVar16 = uVar15;
        if ((DAT_100242f8 != 0) &&
           (pvVar22 = *(void **)(param_1 + 0x38), pvVar22 != (void *)0x0 && uVar15 != 0)) {
          uVar19 = *(uint *)(param_1 + 0x14);
          if (uVar19 != 0) {
            unaff_r10 = *(uint *)(param_1 + 0x18);
          }
          if (((uVar19 != 0 && unaff_r10 != 0) && (0 < (int)DAT_100242f0)) &&
             (0 < (int)DAT_100242f4)) {
            uVar42 = recovered_10000c20((ulonglong)uVar19 * (ulonglong)DAT_100242f4,
                                        (ulonglong)DAT_100242f0);
            uVar6 = (uint)uVar42;
            uVar16 = extraout_r3_03;
            uVar11 = uVar19;
            if (unaff_r10 < (uint)uVar42) {
              uVar42 = recovered_10000c20((ulonglong)unaff_r10 * (ulonglong)uVar5,(ulonglong)uVar21)
              ;
              uVar11 = (uint)uVar42;
              uVar6 = unaff_r10;
              uVar16 = extraout_r3_04;
            }
            if (uVar6 != 0 && uVar11 != 0) {
              if (unaff_r10 - uVar6 != 0 || uVar19 != uVar11) {
                memset(pvVar22,0,*(ulong *)(param_1 + 0x40));
                uVar21 = DAT_100242f4;
                uVar5 = DAT_100242f0;
              }
              recovered_10019234(uVar5,uVar21,uVar11,uVar6);
              iVar25 = DAT_10028fc4;
              iVar4 = DAT_10028fc0;
              PF_PART8(auVar32, 8) = SUB168((uint128)0x0,8);
              PF_PART8(auVar32, 0) = 0x1000000010;
              auVar32 = (auVar32 << 64 | auVar32);
              uVar21 = 0;
              bVar29 = DAT_10028fc0 == 0;
              bVar28 = DAT_10028fc8 != uVar11;
              bVar30 = DAT_10028fc4 == 0;
              bVar3 = DAT_10028fcc != uVar6;
              uVar5 = uVar15 & 0xfffffff0;
              do {
                if (bVar30 || bVar3) {
                  uVar42 = recovered_10000c20((ulonglong)uVar21 * (ulonglong)DAT_100242f4,
                                              (ulonglong)uVar6);
                  iVar7 = (int)uVar42;
                }
                else {
                  iVar7 = *(int *)(iVar25 + uVar21 * 4);
                }
                iVar9 = DAT_100242f8;
                uVar16 = DAT_100242f0;
                iVar13 = *(int *)(param_1 + 0x38);
                iVar26 = *(int *)(param_1 + 0x10) * (uVar21 + (unaff_r10 - uVar6 >> 1)) + iVar13 +
                         (uVar19 - uVar11 >> 1) * uVar15;
                if (uVar15 == 4) {
                  uVar16 = 0;
                  do {
                    uVar27 = DAT_100242f0;
                    if (bVar29 || bVar28) {
                      uVar42 = recovered_10000c20((ulonglong)uVar16 * (ulonglong)DAT_100242f0,
                                                  (ulonglong)uVar11);
                      iVar13 = (int)uVar42;
                    }
                    else {
                      iVar13 = *(int *)(iVar4 + uVar16 * 4);
                    }
                    pbVar17 = (byte *)(iVar9 + (uVar27 * iVar7 + iVar13) * 4);
                    uVar27 = recovered_1001ae80((int)piVar10,(uint)*pbVar17,(uint)pbVar17[1],
                                                (uint)pbVar17[2]);
                    *(uint *)(iVar26 + uVar16 * 4) = uVar27;
                    uVar16 = uVar16 + 1;
                  } while (uVar11 != uVar16);
                }
                else if (uVar15 == 2) {
                  uVar27 = 0;
                  iVar7 = DAT_100242f0 * iVar7;
                  do {
                    if (bVar29 || bVar28) {
                      uVar42 = recovered_10000c20((ulonglong)uVar16 * (ulonglong)uVar27,
                                                  (ulonglong)uVar11);
                      iVar13 = (int)uVar42;
                    }
                    else {
                      iVar13 = *(int *)(iVar4 + uVar27 * 4);
                    }
                    pbVar17 = (byte *)(iVar9 + (iVar13 + iVar7) * 4);
                    uVar8 = recovered_1001ae80((int)piVar10,(uint)*pbVar17,(uint)pbVar17[1],
                                               (uint)pbVar17[2]);
                    iVar13 = uVar27 * 2;
                    uVar27 = uVar27 + 1;
                    *(short *)(iVar26 + iVar13) = (short)uVar8;
                  } while (uVar11 != uVar27);
                }
                else {
                  uVar16 = 0;
                  do {
                    uVar27 = DAT_100242f0;
                    if (bVar29 || bVar28) {
                      uVar42 = recovered_10000c20((ulonglong)uVar16 * (ulonglong)DAT_100242f0,
                                                  (ulonglong)uVar11);
                      iVar9 = (int)uVar42;
                    }
                    else {
                      iVar9 = *(int *)(iVar4 + uVar16 * 4);
                    }
                    pbVar17 = (byte *)(DAT_100242f8 + (uVar27 * iVar7 + iVar9) * 4);
                    uVar27 = recovered_1001ae80((int)piVar10,(uint)*pbVar17,(uint)pbVar17[1],
                                                (uint)pbVar17[2]);
                    if (iVar13 != 0) {
                      iVar9 = uVar16 * uVar15 + iVar26;
                      uVar8 = 0;
                      if (0xf < uVar15) {
                        PF_PART8(auVar2, 8) = CONCAT44(uVar27,uVar27);
                        PF_PART8(auVar2, 0) = CONCAT44(uVar27,uVar27);
                        PF_PART8(auVar33, 8) = (0xf0000000eU);
                        PF_PART8(auVar33, 0) = (0xd0000000cU);
                        PF_PART8(auVar34, 8) = (0xb0000000aU);
                        PF_PART8(auVar34, 0) = (0x900000008U);
                        PF_PART8(auVar35, 8) = (0x700000006U);
                        PF_PART8(auVar35, 0) = (0x500000004U);
                        PF_PART8(auVar36, 8) = (0x300000002U);
                        PF_PART8(auVar36, 0) = (0x100000000U);
                        iVar14 = 0;
                        uVar8 = uVar5;
                        do {
                          auVar38 = VectorShiftLeft(auVar36,3,0x20,0);
                          puVar23 = (undefined8 *)(iVar9 + iVar14);
                          auVar40 = VectorShiftLeft(auVar35,3,0x20,0);
                          uVar8 = uVar8 - 0x10;
                          auVar41 = VectorShiftLeft(auVar34,3,0x20,0);
                          iVar14 = iVar14 + 0x10;
                          auVar31 = VectorShiftLeft(auVar33,3,0x20,0);
                          auVar38 = FloatVectorNeg(auVar38,1,4);
                          auVar40 = FloatVectorNeg(auVar40,1,4);
                          auVar41 = FloatVectorNeg(auVar41,1,4);
                          auVar31 = FloatVectorNeg(auVar31,1,4);
                          auVar38 = VectorShiftLeft(auVar2,auVar38,4,1);
                          auVar40 = VectorShiftLeft(auVar2,auVar40,4,1);
                          auVar41 = VectorShiftLeft(auVar2,auVar41,4,1);
                          auVar31 = VectorShiftLeft(auVar2,auVar31,4,1);
                          PF_PART8(auVar38, 0) = VectorCopyNarrow(auVar38,4);
                          PF_PART8(auVar38, 8) = VectorCopyNarrow(auVar40,4);
                          PF_PART8(auVar40, 0) = VectorCopyNarrow(auVar41,4);
                          PF_PART8(auVar40, 8) = VectorCopyNarrow(auVar31,4);
                          uVar37 = VectorCopyNarrow(auVar38,2);
                          auVar35 = VectorAdd(auVar35,auVar32,4);
                          auVar36 = VectorAdd(auVar36,auVar32,4);
                          auVar34 = VectorAdd(auVar34,auVar32,4);
                          auVar33 = VectorAdd(auVar33,auVar32,4);
                          uVar39 = VectorCopyNarrow(auVar40,2);
                          *puVar23 = uVar37;
                          puVar23[1] = uVar39;
                        } while (uVar8 != 0);
                        uVar8 = uVar5;
                        if (uVar15 == uVar5) goto LAB_10006a18;
                      }
                      iVar14 = uVar15 - uVar8;
                      uVar24 = uVar8 << 3;
                      do {
                        uVar1 = uVar24 & 0xff;
                        uVar24 = uVar24 + 8;
                        *(char *)(iVar9 + uVar8) = (char)(uVar27 >> uVar1);
                        iVar14 = iVar14 + -1;
                        uVar8 = uVar8 + 1;
                      } while (iVar14 != 0);
                    }
LAB_10006a18:
                    uVar16 = uVar16 + 1;
                  } while (uVar16 != uVar11);
                }
                uVar21 = uVar21 + 1;
              } while (uVar21 < uVar6);
              iVar25 = *(int *)(param_1 + 0x1c);
              uVar16 = uVar15;
            }
          }
        }
        uVar5 = iVar25 - 0xf;
        if (uVar5 < 0x12) {
          bVar28 = (1 << (uVar5 & 0xff) & 0x20203U) != 0;
          if (bVar28) {
            uVar5 = *(uint *)(param_1 + 0x38);
          }
          if (((bVar28 && uVar5 != 0) && (n = *(int *)(param_1 + 0x14) * (iVar25 + 7U >> 3), n != 0)
              ) && (n <= *(uint *)(param_1 + 0x10))) {
            if (*(int *)(param_1 + 0x18) != 0) {
              uVar5 = 0;
              do {
                iVar4 = *(int *)(param_1 + 0x10);
                dst = (void *)(iVar4 * uVar5 + iVar18);
                a = (void *)(iVar4 * uVar5 + *(int *)(param_1 + 0x38));
                pvVar22 = dst;
                if (*(int *)(param_1 + 0x3c) == 0) {
LAB_10006364:
                  memcpy(pvVar22,a,n);
                  uVar16 = extraout_r3_01;
                }
                else {
                  pvVar22 = (void *)(iVar4 * uVar5 + *(int *)(param_1 + 0x3c));
                  if (((param_1[0x48] != '\x01') ||
                      (*(int *)(param_1 + 0x44) != *(int *)(param_1 + 0x40))) ||
                     (iVar4 = memcmp(a,pvVar22,n), uVar16 = extraout_r3_00, iVar4 != 0))
                  {
                    memcpy(dst,a,n);
                    goto LAB_10006364;
                  }
                }
                uVar5 = uVar5 + 1;
              } while (uVar5 < *(uint *)(param_1 + 0x18));
            }
            if (*(int *)(param_1 + 0x3c) != 0) {
              param_1[0x48] = '\x01';
            }
          }
        }
      }
      uVar5 = *(uint *)(param_1 + 0x14);
      if (uVar5 != 0) {
        uVar16 = *(uint *)(param_1 + 0x18);
      }
      if (((uVar5 != 0 && uVar16 != 0) && (iVar18 = Ram40010800, iVar18 == 0x50414d57)) &&
         (iVar18 = Ram40010804, iVar18 != 0)) {
        uVar21 = Ram40010808;
        bVar28 = 0xb < uVar21;
        if (bVar28) {
          uVar21 = Ram40010808;
        }
        if ((bVar28 && 0x15f < uVar21) &&
           (UNRECOVERED_JUMPTABLE = (code *)UINT_4001095c, UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x10006470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)(0,0,uVar5,uVar16);
          return;
        }
      }
    }
  }
  return;
}

#undef DAT_10006b90
#undef DAT_10006b98
#undef DAT_10006ba0
#undef DAT_10006ba8
#undef DAT_10006bb0
#undef DAT_10006bb8
#undef DAT_10006bc0
#undef DAT_10006bc8
#undef DAT_100242f0
#undef DAT_100242f4
#undef DAT_100242f8
#undef DAT_10028fc0
#undef DAT_10028fc4
#undef DAT_10028fc8
#undef DAT_10028fcc
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef Ram40010800
#undef Ram40010804
#undef Ram40010808
#undef UINT_4001095c
#undef local_3c

#undef DAT_10006fa0
#define DAT_10006fa0 (*(uint8_t *)(0x10006fa0U))
#undef DAT_10006fa8
#define DAT_10006fa8 (*(uint8_t *)(0x10006fa8U))
#undef DAT_10006fb0
#define DAT_10006fb0 (*(uint8_t *)(0x10006fb0U))
#undef DAT_10006fb8
#define DAT_10006fb8 (*(uint8_t *)(0x10006fb8U))
#undef DAT_10007770
#define DAT_10007770 (*(uint64_t *)(0x10007770U))
#undef DAT_10007778
#define DAT_10007778 (*(uint64_t *)(0x10007778U))
#undef DAT_100088a0
#define DAT_100088a0 (*(uint64_t *)(0x100088a0U))
#undef DAT_100088a8
#define DAT_100088a8 (*(uint64_t *)(0x100088a8U))
#undef DAT_100088b0
#define DAT_100088b0 (*(uint64_t *)(0x100088b0U))
#undef DAT_100088b8
#define DAT_100088b8 (*(uint64_t *)(0x100088b8U))
#undef DAT_100096a0
#define DAT_100096a0 (*(uint64_t *)(0x100096a0U))
#undef DAT_100096a8
#define DAT_100096a8 (*(uint64_t *)(0x100096a8U))
#undef DAT_100096b0
#define DAT_100096b0 (*(uint64_t *)(0x100096b0U))
#undef DAT_100096b8
#define DAT_100096b8 (*(uint64_t *)(0x100096b8U))
#undef DAT_100096c0
#define DAT_100096c0 (*(uint64_t *)(0x100096c0U))
#undef DAT_100096c8
#define DAT_100096c8 (*(uint64_t *)(0x100096c8U))
#undef DAT_100096d0
#define DAT_100096d0 (*(uint64_t *)(0x100096d0U))
#undef DAT_100096d8
#define DAT_100096d8 (*(uint64_t *)(0x100096d8U))
#undef DAT_10009a48
#define DAT_10009a48 (*(uint *)(0x10009a48U))
#undef DAT_1000a4c0
#define DAT_1000a4c0 (*(uint8_t *)(0x1000a4c0U))
#undef DAT_1000a4c8
#define DAT_1000a4c8 (*(uint8_t *)(0x1000a4c8U))
#undef DAT_1000a4d0
#define DAT_1000a4d0 (*(uint8_t *)(0x1000a4d0U))
#undef DAT_1000a4d8
#define DAT_1000a4d8 (*(uint8_t *)(0x1000a4d8U))
#undef DAT_1000b950
#define DAT_1000b950 (*(uint64_t *)(0x1000b950U))
#undef DAT_1000b958
#define DAT_1000b958 (*(uint64_t *)(0x1000b958U))
#undef DAT_10023774
#define DAT_10023774 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x16cU)))
#undef DAT_10023f70
#define DAT_10023f70 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x968U)))
#undef DAT_10023f8c
#define DAT_10023f8c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x984U)))
#undef DAT_10024130
#define DAT_10024130 (*(int *)(((uintptr_t)pf_module_state + 0xb28U)))
#undef DAT_10024134
#define DAT_10024134 (*(int *)(((uintptr_t)pf_module_state + 0xb2cU)))
#undef DAT_10024138
#define DAT_10024138 (*(uint32_t *)(((uintptr_t)pf_module_state + 0xb30U)))
#undef DAT_1002413c
#define DAT_1002413c (*(uint32_t *)(((uintptr_t)pf_module_state + 0xb34U)))
#undef DAT_10024140
#define DAT_10024140 (*(int *)(((uintptr_t)pf_module_state + 0xb38U)))
#undef DAT_100242dc
#define DAT_100242dc (*(uint8_t * *)(((uintptr_t)pf_module_state + 0xcd4U)))
#undef DAT_100242e4
#define DAT_100242e4 (*(int *)(((uintptr_t)pf_module_state + 0xcdcU)))
#undef DAT_100242e8
#define DAT_100242e8 (*(uint * *)(((uintptr_t)pf_module_state + 0xce0U)))
#undef DAT_100242ec
#define DAT_100242ec (*(uint *)(((uintptr_t)pf_module_state + 0xce4U)))
#undef DAT_1002430c
#define DAT_1002430c (*(int *)(((uintptr_t)pf_module_state + 0xd04U)))
#undef DAT_10024310
#define DAT_10024310 (*(int *)(((uintptr_t)pf_module_state + 0xd08U)))
#undef DAT_10024314
#define DAT_10024314 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xd0cU)))
#undef DAT_10024319
#define DAT_10024319 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xd11U)))
#undef DAT_10024374
#define DAT_10024374 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xd6cU)))
#undef DAT_10024378
#define DAT_10024378 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xd70U)))
#undef DAT_1002437c
#define DAT_1002437c (*(uint * *)(((uintptr_t)pf_module_state + 0xd74U)))
#undef DAT_10024380
#define DAT_10024380 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xd78U)))
#undef DAT_10024384
#define DAT_10024384 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xd7cU)))
#undef DAT_1002438c
#define DAT_1002438c (*(int *)(((uintptr_t)pf_module_state + 0xd84U)))
#undef DAT_10024390
#define DAT_10024390 (*(uint *)(((uintptr_t)pf_module_state + 0xd88U)))
#undef DAT_10024394
#define DAT_10024394 (*(uint *)(((uintptr_t)pf_module_state + 0xd8cU)))
#undef DAT_10024398
#define DAT_10024398 (*(char *)(((uintptr_t)pf_module_state + 0xd90U)))
#undef DAT_10024399
#define DAT_10024399 (*(char *)(((uintptr_t)pf_module_state + 0xd91U)))
#undef DAT_1002439a
#define DAT_1002439a (*(char *)(((uintptr_t)pf_module_state + 0xd92U)))
#undef DAT_1002439b
#define DAT_1002439b (*(char *)(((uintptr_t)pf_module_state + 0xd93U)))
#undef DAT_1002439c
#define DAT_1002439c (*(uint *)(((uintptr_t)pf_module_state + 0xd94U)))
#undef DAT_100243a4
#define DAT_100243a4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xd9cU)))
#undef DAT_10024588
#define DAT_10024588 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xf80U)))
#undef DAT_100245d0
#define DAT_100245d0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xfc8U)))
#undef DAT_10024618
#define DAT_10024618 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1010U)))
#undef DAT_1002461c
#define DAT_1002461c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1014U)))
#undef DAT_1002461e
#define DAT_1002461e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1016U)))
#undef DAT_10024620
#define DAT_10024620 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1018U)))
#undef DAT_10024622
#define DAT_10024622 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x101aU)))
#undef DAT_10024624
#define DAT_10024624 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x101cU)))
#undef DAT_10024626
#define DAT_10024626 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x101eU)))
#undef DAT_10024628
#define DAT_10024628 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1020U)))
#undef DAT_1002462a
#define DAT_1002462a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1022U)))
#undef DAT_1002490c
#define DAT_1002490c (*(uint * *)(((uintptr_t)pf_module_state + 0x1304U)))
#undef DAT_10024910
#define DAT_10024910 (*(int *)(((uintptr_t)pf_module_state + 0x1308U)))
#undef DAT_10024914
#define DAT_10024914 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x130cU)))
#undef DAT_10024918
#define DAT_10024918 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1310U)))
#undef DAT_100256c8
#define DAT_100256c8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x20c0U)))
#undef DAT_10027414
#define DAT_10027414 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3e0cU)))
#undef DAT_10027415
#define DAT_10027415 (*(char *)(((uintptr_t)pf_module_state + 0x3e0dU)))
#undef DAT_10027418
#define DAT_10027418 (*(uint * *)(((uintptr_t)pf_module_state + 0x3e10U)))
#undef DAT_1002741c
#define DAT_1002741c (*(uint *)(((uintptr_t)pf_module_state + 0x3e14U)))
#undef DAT_10027420
#define DAT_10027420 (*(uint * *)(((uintptr_t)pf_module_state + 0x3e18U)))
#undef DAT_10027424
#define DAT_10027424 (*(uint * *)(((uintptr_t)pf_module_state + 0x3e1cU)))
#undef DAT_10027428
#define DAT_10027428 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3e20U)))
#undef DAT_10027519
#define DAT_10027519 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3f11U)))
#undef DAT_1002760a
#define DAT_1002760a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4002U)))
#undef DAT_1002760c
#define DAT_1002760c (*(uint *)(((uintptr_t)pf_module_state + 0x4004U)))
#undef DAT_10027628
#define DAT_10027628 (*(uint *)(((uintptr_t)pf_module_state + 0x4020U)))
#undef DAT_10028fe4
#define DAT_10028fe4 (*(int *)(((uintptr_t)pf_module_state + 0x59dcU)))
#undef DAT_100290dc
#define DAT_100290dc (*(uint * *)(((uintptr_t)pf_module_state + 0x5ad4U)))
#undef DAT_100290e4
#define DAT_100290e4 (*(uint *)(((uintptr_t)pf_module_state + 0x5adcU)))
#undef DAT_1012e3fc
#define DAT_1012e3fc (*(char * *)(((uintptr_t)pf_module_state + 0x10adf4U)))
#undef DAT_1012e400
#define DAT_1012e400 (*(char * *)(((uintptr_t)pf_module_state + 0x10adf8U)))
#undef DAT_1012e404
#define DAT_1012e404 (*(char *)(((uintptr_t)pf_module_state + 0x10adfcU)))
#undef DAT_1012e405
#define DAT_1012e405 (*(char *)(((uintptr_t)pf_module_state + 0x10adfdU)))
#undef DAT_1012e408
#define DAT_1012e408 (*(uint *)(((uintptr_t)pf_module_state + 0x10ae00U)))
#undef DAT_1012e40c
#define DAT_1012e40c (*(char *)(((uintptr_t)pf_module_state + 0x10ae04U)))
#undef DAT_1012e40d
#define DAT_1012e40d (*(char *)(((uintptr_t)pf_module_state + 0x10ae05U)))
#undef DAT_1012e40e
#define DAT_1012e40e (*(char *)(((uintptr_t)pf_module_state + 0x10ae06U)))
#undef DAT_1012e40f
#define DAT_1012e40f (*(char *)(((uintptr_t)pf_module_state + 0x10ae07U)))
#undef DAT_1012e410
#define DAT_1012e410 (*(char *)(((uintptr_t)pf_module_state + 0x10ae08U)))
#undef DAT_1012e411
#define DAT_1012e411 (*(char *)(((uintptr_t)pf_module_state + 0x10ae09U)))
#undef DAT_1012e412
#define DAT_1012e412 (*(char *)(((uintptr_t)pf_module_state + 0x10ae0aU)))
#undef DAT_1012e413
#define DAT_1012e413 (*(char *)(((uintptr_t)pf_module_state + 0x10ae0bU)))
#undef DAT_1012e414
#define DAT_1012e414 (*(char *)(((uintptr_t)pf_module_state + 0x10ae0cU)))
#undef DAT_1012e415
#define DAT_1012e415 (*(char *)(((uintptr_t)pf_module_state + 0x10ae0dU)))
#undef DAT_1012e416
#define DAT_1012e416 (*(char *)(((uintptr_t)pf_module_state + 0x10ae0eU)))
#undef DAT_1012e417
#define DAT_1012e417 (*(char *)(((uintptr_t)pf_module_state + 0x10ae0fU)))
#undef DAT_1012e418
#define DAT_1012e418 (*(char *)(((uintptr_t)pf_module_state + 0x10ae10U)))
#undef DAT_1012e419
#define DAT_1012e419 (*(char *)(((uintptr_t)pf_module_state + 0x10ae11U)))
#undef DAT_1012e41a
#define DAT_1012e41a (*(char *)(((uintptr_t)pf_module_state + 0x10ae12U)))
#undef DAT_1012e41b
#define DAT_1012e41b (*(char *)(((uintptr_t)pf_module_state + 0x10ae13U)))
#undef DAT_1012e41c
#define DAT_1012e41c (*(char *)(((uintptr_t)pf_module_state + 0x10ae14U)))
#undef DAT_1012e41d
#define DAT_1012e41d (*(char *)(((uintptr_t)pf_module_state + 0x10ae15U)))
#undef DAT_1012e41e
#define DAT_1012e41e (*(char *)(((uintptr_t)pf_module_state + 0x10ae16U)))
#undef DAT_1012e41f
#define DAT_1012e41f (*(char *)(((uintptr_t)pf_module_state + 0x10ae17U)))
#undef DAT_1012e420
#define DAT_1012e420 (*(char *)(((uintptr_t)pf_module_state + 0x10ae18U)))
#undef DAT_1012e421
#define DAT_1012e421 (*(char *)(((uintptr_t)pf_module_state + 0x10ae19U)))
#undef DAT_1012e422
#define DAT_1012e422 (*(char *)(((uintptr_t)pf_module_state + 0x10ae1aU)))
#undef DAT_1012e423
#define DAT_1012e423 (*(char *)(((uintptr_t)pf_module_state + 0x10ae1bU)))
#undef DAT_1012e424
#define DAT_1012e424 (*(char *)(((uintptr_t)pf_module_state + 0x10ae1cU)))
#undef DAT_1012e425
#define DAT_1012e425 (*(char *)(((uintptr_t)pf_module_state + 0x10ae1dU)))
#undef DAT_1012e426
#define DAT_1012e426 (*(char *)(((uintptr_t)pf_module_state + 0x10ae1eU)))
#undef DAT_1012e427
#define DAT_1012e427 (*(char *)(((uintptr_t)pf_module_state + 0x10ae1fU)))
#undef DAT_1012e428
#define DAT_1012e428 (*(char *)(((uintptr_t)pf_module_state + 0x10ae20U)))
#undef DAT_1012e429
#define DAT_1012e429 (*(char *)(((uintptr_t)pf_module_state + 0x10ae21U)))
#undef DAT_1012e42a
#define DAT_1012e42a (*(char *)(((uintptr_t)pf_module_state + 0x10ae22U)))
#undef DAT_1012e42b
#define DAT_1012e42b (*(char *)(((uintptr_t)pf_module_state + 0x10ae23U)))
#undef DAT_1012e42c
#define DAT_1012e42c (*(char *)(((uintptr_t)pf_module_state + 0x10ae24U)))
#undef DAT_1012e42d
#define DAT_1012e42d (*(char *)(((uintptr_t)pf_module_state + 0x10ae25U)))
#undef DAT_1012e42e
#define DAT_1012e42e (*(char *)(((uintptr_t)pf_module_state + 0x10ae26U)))
#undef DAT_1012e42f
#define DAT_1012e42f (*(char *)(((uintptr_t)pf_module_state + 0x10ae27U)))
#undef DAT_1012e430
#define DAT_1012e430 (*(char *)(((uintptr_t)pf_module_state + 0x10ae28U)))
#undef DAT_1012e431
#define DAT_1012e431 (*(char *)(((uintptr_t)pf_module_state + 0x10ae29U)))
#undef DAT_1012e432
#define DAT_1012e432 (*(char *)(((uintptr_t)pf_module_state + 0x10ae2aU)))
#undef DAT_1012e433
#define DAT_1012e433 (*(char *)(((uintptr_t)pf_module_state + 0x10ae2bU)))
#undef DAT_1012e434
#define DAT_1012e434 (*(char *)(((uintptr_t)pf_module_state + 0x10ae2cU)))
#undef DAT_1012e438
#define DAT_1012e438 (*(int *)(((uintptr_t)pf_module_state + 0x10ae30U)))
#undef DAT_1012e43c
#define DAT_1012e43c (*(int *)(((uintptr_t)pf_module_state + 0x10ae34U)))
#undef DAT_1012e440
#define DAT_1012e440 (*(int *)(((uintptr_t)pf_module_state + 0x10ae38U)))
#undef DAT_1012e448
#define DAT_1012e448 (*(int *)(((uintptr_t)pf_module_state + 0x10ae40U)))
#undef DAT_1012e44c
#define DAT_1012e44c (*(int *)(((uintptr_t)pf_module_state + 0x10ae44U)))
#undef DAT_1012e450
#define DAT_1012e450 (*(int *)(((uintptr_t)pf_module_state + 0x10ae48U)))
#undef DAT_1012e454
#define DAT_1012e454 (*(int *)(((uintptr_t)pf_module_state + 0x10ae4cU)))
#undef DAT_1012e458
#define DAT_1012e458 (*(char *)(((uintptr_t)pf_module_state + 0x10ae50U)))
#undef DAT_1012e459
#define DAT_1012e459 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x10ae51U)))
#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef EXT_00000014
#define EXT_00000014 (*(uint8_t *)(0x14U))
#undef EXT_00000018
#define EXT_00000018 (*(uint8_t *)(0x18U))
#undef Ram40010800
#define Ram40010800 (*(uint32_t *)(0x40010800U))
#undef Ram40010804
#define Ram40010804 (*(uint32_t *)(0x40010804U))
#undef Ram40010808
#define Ram40010808 (*(uint32_t *)(0x40010808U))
#undef UINT_40010888
#define UINT_40010888 (*(uint *)(0x40010888U))
#undef UINT_4001088c
#define UINT_4001088c (*(uint *)(0x4001088cU))
#undef UINT_400108d8
#define UINT_400108d8 (*(uint *)(0x400108d8U))
#undef UINT_400108dc
#define UINT_400108dc (*(uint *)(0x400108dcU))
#undef UINT_400108f4
#define UINT_400108f4 (*(uint *)(0x400108f4U))
#undef UINT_40010968
#define UINT_40010968 (*(uint *)(0x40010968U))
#undef UINT_4001096c
#define UINT_4001096c (*(uint *)(0x4001096cU))
#undef _DAT_10024378
#define _DAT_10024378 (*(uint * *)(((uintptr_t)pf_module_state + 0xd70U)))
#undef _DAT_10024380
#define _DAT_10024380 (*(uint * *)(((uintptr_t)pf_module_state + 0xd78U)))
#undef _DAT_10027414
#define _DAT_10027414 (*(uint16_t *)(((uintptr_t)pf_module_state + 0x3e0cU)))
#undef str_10023d7e
#define str_10023d7e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x776U)))
#undef str_10023d85
#define str_10023d85 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x77dU)))
#undef str_10023d8f
#define str_10023d8f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x787U)))
#undef str_10023d9d
#define str_10023d9d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x795U)))
#undef str_10023daa
#define str_10023daa (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7a2U)))
#undef str_10023db7
#define str_10023db7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7afU)))
#undef str_10023dc3
#define str_10023dc3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7bbU)))
#undef str_10023e71
#define str_10023e71 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x869U)))
#undef str_10023e81
#define str_10023e81 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x879U)))
#undef str_10023e95
#define str_10023e95 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x88dU)))
#undef switchdataD_10009a48
#define switchdataD_10009a48 (*(uint *)(0x10009a48U))
#define uStack_108 (*(undefined4 *)(frame + 760))
#define uStack_104 (*(undefined4 *)(frame + 764))
#define uStack_100 (*(undefined4 *)(frame + 768))
#define local_3ee (*(byte (*)[482])(frame + 18))
#define local_20c (*(undefined4 *)(frame + 500))
#define local_208 (*(uint *)(frame + 504))
#define local_204 (*(uint *)(frame + 508))
#define local_200 (*(uint *)(frame + 512))
#define local_1fc (*(uint *)(frame + 516))
#define local_1f8 (*(uint *)(frame + 520))
#define local_1f4 (*(undefined4 *)(frame + 524))
#define local_118 (*(undefined8 *)(frame + 744))
#define local_110 (*(undefined8 *)(frame + 752))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006bd0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10006bd0(int param_1)

{
  unsigned char frame[1056] __attribute__((aligned(16))) = {0};

  uint128 auVar1;
  uint128 auVar2;
  uint128 auVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  char cVar10;
  uint uVar11;
  undefined4 *puVar12;
  char *pcVar13;
  uint uVar14;
  ulong uVar15;
  uint *puVar16;
  ulong uVar17;
  undefined1 *puVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  uint uVar22;
  int iVar23;
  uint extraout_r1 = 0;
  int extraout_r1_00 = 0;
  byte *pbVar24;
  uint *puVar25;
  uint uVar26;
  char *pcVar27;
  int iVar28;
  uint uVar29;
  void *dst;
  uint uVar30;
  undefined4 *puVar31;
  byte *pbVar32;
  byte bVar33;
  byte bVar34;
  char *pcVar35;
  int iVar36;
  uint uVar37;
  uint *puVar38;
  int iVar39;
  int *piVar40;
  code *pcVar41;
  byte *pbVar42;
  uint uVar43;
  uint *puVar44;
  uint *unaff_r5;
  byte *pbVar45;
  char *pcVar46;
  uint *puVar47;
  byte *pbVar48;
  uint *puVar49;
  undefined4 uVar50;
  uint *puVar51;
  int iVar52;
  bool bVar53;
  bool bVar54;
  ulonglong uVar55;
  longlong lVar56;
  ulonglong uVar57;

  pcVar27 = DAT_1012e3fc;
  uVar20 = (*(uint32_t *)(pf_module_state+0xd80U));
  iVar39 = DAT_1002430c;
  puVar25 = *(uint **)(param_1 + 0x4c);
  puVar51 = *(uint **)(param_1 + 0x50);
  uVar26 = *(uint *)(param_1 + 0x54);
  uVar11 = *(uint *)(param_1 + 0x58);
  uVar19 = uVar26 & 1;
  if (uVar19 == 0) {
    if (DAT_1012e404 != '\0') {
      if (DAT_10024140 < 0) {
        cVar10 = DAT_10027414;
        if (DAT_10027414 == '\x01') {
          cVar10 = DAT_10027415;
        }
        if ((DAT_10027414 == '\x01' && cVar10 == '\x01') &&
           (puVar16 = DAT_100290dc, 0 < (int)DAT_100290dc)) {
          do {
            iVar23 = DAT_10024914[(int)((int)puVar16 + -1)];
            pcVar27 = (char *)(DAT_1002430c + iVar23 * 0xd9c);
            cVar10 = *pcVar27;
            bVar53 = cVar10 == '\x01';
            if (bVar53) {
              cVar10 = pcVar27[1];
            }
            if (bVar53 && cVar10 == '\x01') {
              iVar52 = 0x18;
              puVar44 = *(uint **)(pcVar27 + 0x58);
              if (pcVar27[2] == '\0') {
                iVar52 = *(int *)(pcVar27 + 100);
              }
              bVar54 = SBORROW4((int)puVar44,(int)puVar25);
              iVar21 = (int)puVar44 - (int)puVar25;
              bVar53 = puVar44 == puVar25;
              if ((int)puVar44 <= (int)puVar25) {
                unaff_r5 = *(uint **)(pcVar27 + 0x5c);
                bVar54 = SBORROW4((int)unaff_r5,(int)puVar51);
                iVar21 = (int)unaff_r5 - (int)puVar51;
                bVar53 = unaff_r5 == puVar51;
              }
              if (bVar53 || iVar21 < 0 != bVar54) {
                puVar44 = (uint *)((int)puVar44 + *(int *)(pcVar27 + 0x60));
                bVar54 = SBORROW4((int)puVar44,(int)puVar25);
                iVar21 = (int)puVar44 - (int)puVar25;
                bVar53 = puVar44 == puVar25;
                if ((int)puVar25 < (int)puVar44) {
                  puVar44 = (uint *)((int)unaff_r5 + iVar52);
                  bVar54 = SBORROW4((int)puVar44,(int)puVar51);
                  iVar21 = (int)puVar44 - (int)puVar51;
                  bVar53 = puVar44 == puVar51;
                }
                if (!bVar53 && iVar21 < 0 == bVar54) {
                  if ((-1 < iVar23) && (*(int *)(pcVar27 + 0x10) == 0)) {
                    uVar20 = recovered_1001cd98((int)pcVar27,(int)puVar25,(int)puVar51);
                    cVar10 = pcVar27[0x78];
                    uVar37 = 0;
                    if (cVar10 == '\0') goto LAB_10008d10;
                    uVar22 = 0;
                    goto LAB_10008cf0;
                  }
                  break;
                }
              }
            }
            bVar53 = (uint *)0x1 < puVar16;
            puVar16 = (uint *)((int)puVar16 + -1);
          } while (bVar53);
        }
        goto LAB_10006e80;
      }
      if ((DAT_1002430c != 0) &&
         (pcVar13 = (char *)(DAT_10024140 * 0xd9c + DAT_1002430c), *pcVar13 == '\x01')) {
        cVar10 = pcVar13[2];
        bVar53 = cVar10 == '\0';
        if (bVar53) {
          cVar10 = pcVar13[3];
        }
        if (bVar53 && cVar10 == '\0') {
          *(char **)(pcVar13 + 0x60) = DAT_1012e3fc;
          pcVar35 = DAT_1012e400;
          unaff_r5 = *(uint **)(pcVar13 + 0x5c);
          *(char **)(pcVar13 + 0x70) = pcVar27;
          *(undefined4 *)(pcVar13 + 0x68) = *(undefined4 *)(pcVar13 + 0x58);
          *(uint **)(pcVar13 + 0x6c) = unaff_r5;
          *(char **)(pcVar13 + 0x74) = pcVar35;
          *(char **)(pcVar13 + 100) = pcVar35;
          if (*(int *)(pcVar13 + 0x10) == 6) {
            pcVar13[4] = '\x01';
            if (*(uint *)(pcVar13 + 0xb1c) != 0) {
              if ((int)pcVar27 < 0x1e) {
                pcVar27 = (char *)0x1d;
              }
              if ((int)pcVar35 < 0x36) {
                pcVar35 = (char *)0x35;
              }
              terror_ui_window_set_content_size(*(uint *)(pcVar13 + 0xb1c),(uint)(pcVar27 + -0x1c),
                                 (uint)(pcVar35 + -0x34));
            }
          }
          else if (*(int *)(pcVar13 + 0x10) == 0) {
            iVar52 = -1;
            iVar23 = (int)((ZEXT48(pcVar27 + -0x26) << 0x20) +
                           (longlong)(int)(pcVar27 + -0x26) * -0x2df2df2d >> 0x20);
            uVar20 = *(uint *)(pcVar13 + 0xaf8);
            iVar39 = ((int)((ulonglong)((longlong)(int)(pcVar35 + -0x6a) * 0x22983759) >> 0x20) -
                     (int)pcVar35) + 0x6a;
            unaff_r5 = (uint *)(iVar39 >> 6);
            if (0x49 < (int)(pcVar35 + -0x6a)) {
              iVar52 = (int)unaff_r5 - (iVar39 >> 0x1f);
            }
            iVar39 = (iVar23 >> 6) - (iVar23 >> 0x1f);
            if (iVar39 < 2) {
              iVar39 = 1;
            }
            if (0x7fffffff < uVar20) {
              uVar20 = 0;
              pcVar13[0xaf8] = '\0';
              pcVar13[0xaf9] = '\0';
              pcVar13[0xafa] = '\0';
              pcVar13[0xafb] = '\0';
            }
            iVar39 = iVar52 * iVar39 + *(int *)(pcVar13 + 0xaf0) + 2;
            if ((iVar39 < 1) || (iVar39 < (int)uVar20)) {
              if (iVar39 < 1) {
                iVar39 = 0;
              }
              *(int *)(pcVar13 + 0xaf8) = iVar39;
            }
          }
        }
      }
      DAT_10024140 = -1;
      memset(&DAT_10027414,0,0x1fc);
      puVar12 = &DAT_10024138;
      goto LAB_10006ecc;
    }
    goto LAB_10006ee8;
  }
  if (DAT_1012e404 != '\0') goto LAB_10006ee8;
  if (DAT_10024374 != '\x01') {
    if (puVar51 < (uint *)0x18) {
      if ((int)puVar25 < 0x52) {
        memset(&DAT_10024374,0,0x59c);
        DAT_10024374 = '\x01';
        _DAT_10024378 = (uint *)(0x4U);
        DAT_1002437c = (0x18ULL);
        _DAT_10024380 = (uint *)(0xffU);
        (*(uint32_t *)(pf_module_state+0xd7cU)) = (0xffffffffULL);
        DAT_10024390 = 0xffffffff;
        DAT_1002438c = -1;
        (*(uint32_t *)(pf_module_state+0xd80U)) = 0xffffffff;
        if ((int)DAT_1002490c < 0x12) {
          *(undefined4 *)(&DAT_10024588 + (int)DAT_1002490c * 4) = 0x18;
          *(undefined4 *)(&DAT_100245d0 + (int)DAT_1002490c * 4) = 0xffffffff;
          iVar39 = (int)DAT_1002490c * 0x2a;
          *(undefined4 *)(&DAT_10024618 + iVar39) = 0x74697551;
          *(undefined4 *)(&DAT_1002461c + iVar39) = 0x6e755420;
          *(undefined4 *)(&DAT_10024620 + iVar39) = 0x617264;
          puVar16 = (uint *)((int)DAT_1002490c + 1);
          bVar53 = (int)DAT_1002490c < 0x11;
          DAT_1002490c = puVar16;
          if (bVar53) {
            *(undefined4 *)(&DAT_10024588 + (int)puVar16 * 4) = 0x19;
            *(undefined4 *)(&DAT_100245d0 + (int)DAT_1002490c * 4) = 0xffffffff;
            uVar5 = (0x6974616dULL);
            uVar4 = (undefined4)(0x6eU);
            uVar50 = (0x49206d65ULL);
            iVar39 = (int)DAT_1002490c * 0x2a;
            *(undefined4 *)(&DAT_10024618 + iVar39) = (undefined4)(0x53U);
            *(undefined4 *)(&DAT_1002461c + iVar39) = uVar50;
            *(undefined4 *)(&DAT_10024620 + iVar39) = uVar4;
            *(undefined4 *)(&DAT_10024624 + iVar39) = uVar5;
            unaff_r5 = DAT_1002490c;
            (&DAT_1002462a)[iVar39] = 0;
            *(undefined2 *)(&DAT_10024628 + iVar39) = 0x6e6f;
            puVar16 = (uint *)((int)DAT_1002490c + 1);
            bVar53 = (int)DAT_1002490c < 0x11;
            DAT_1002490c = puVar16;
            if (bVar53) {
              *(undefined4 *)(&DAT_10024588 + (int)puVar16 * 4) = 0x1a;
              *(undefined4 *)(&DAT_100245d0 + (int)DAT_1002490c * 4) = 0xffffffff;
              iVar39 = (int)DAT_1002490c * 0x2a;
              *(undefined4 *)(&DAT_10024618 + iVar39) = 0x74756853;
              *(undefined2 *)(&DAT_10024620 + iVar39) = 0x6e;
              *(undefined4 *)(&DAT_1002461c + iVar39) = 0x776f4420;
              DAT_1002490c = (uint *)((int)DAT_1002490c + 1);
            }
          }
        }
        goto LAB_10006ee8;
      }
      if ((char *)((int)puVar25 + -0x56) < (char *)0x26) {
        recovered_1001b500(1,0x56);
      }
      else if ((char *)((int)puVar25 + -0x82) < (char *)0x28) {
        recovered_1001b500(2,0x82);
      }
      else {
        if ((uint *)0x3b < puVar25 + -0x2c) goto LAB_10006ee8;
        recovered_1001b500(3,0xb0);
      }
    }
    else {
      pbVar48 = (byte *)recovered_1001bd00((int)puVar25,(int)puVar51);
      puVar16 = DAT_100290dc;
      puVar12 = DAT_10024914;
      iVar39 = DAT_10024130;
      if ((int)pbVar48 < 0) {
        if (0 < (int)DAT_100290dc) {
          unaff_r5 = DAT_100290dc;
          do {
            puVar16 = (uint *)DAT_10024914[(int)((int)unaff_r5 + -1)];
            pcVar27 = (char *)(DAT_1002430c + (int)puVar16 * 0xd9c);
            cVar10 = *pcVar27;
            bVar53 = cVar10 == '\x01';
            if (bVar53) {
              cVar10 = pcVar27[1];
            }
            if (bVar53 && cVar10 == '\x01') {
              iVar23 = 0x18;
              puVar44 = *(uint **)(pcVar27 + 0x58);
              if (pcVar27[2] == 0) {
                iVar23 = *(int *)(pcVar27 + 100);
              }
              bVar54 = SBORROW4((int)puVar44,(int)puVar25);
              iVar52 = (int)puVar44 - (int)puVar25;
              bVar53 = puVar44 == puVar25;
              puVar49 = puVar25;
              if ((int)puVar44 <= (int)puVar25) {
                puVar49 = *(uint **)(pcVar27 + 0x5c);
                bVar54 = SBORROW4((int)puVar49,(int)puVar51);
                iVar52 = (int)puVar49 - (int)puVar51;
                bVar53 = puVar49 == puVar51;
              }
              if (bVar53 || iVar52 < 0 != bVar54) {
                puVar38 = (uint *)((int)puVar44 + *(int *)(pcVar27 + 0x60));
                bVar54 = SBORROW4((int)puVar38,(int)puVar25);
                iVar52 = (int)puVar38 - (int)puVar25;
                bVar53 = puVar38 == puVar25;
                if ((int)puVar25 < (int)puVar38) {
                  puVar38 = (uint *)((int)puVar49 + iVar23);
                  bVar54 = SBORROW4((int)puVar38,(int)puVar51);
                  iVar52 = (int)puVar38 - (int)puVar51;
                  bVar53 = puVar38 == puVar51;
                }
                if (!bVar53 && iVar52 < 0 == bVar54) {
                  if (-1 < (int)puVar16) {
                    pcVar13 = (char *)((int)puVar49 + 0x12);
                    puVar49 = (uint *)((int)puVar49 + 6);
                    if ((int)puVar25 < (int)((int)puVar44 + 0x15)) {
                      puVar38 = (uint *)((int)puVar44 + 9);
                      bVar54 = SBORROW4((int)puVar38,(int)puVar25);
                      iVar39 = (int)puVar38 - (int)puVar25;
                      bVar53 = puVar38 == puVar25;
                      if ((int)puVar38 <= (int)puVar25) {
                        bVar54 = SBORROW4((int)puVar49,(int)puVar51);
                        iVar39 = (int)puVar49 - (int)puVar51;
                        bVar53 = puVar49 == puVar51;
                      }
                      if ((bVar53 || iVar39 < 0 != bVar54) && ((int)puVar51 < (int)pcVar13))
                      goto switchD_10009be8_caseD_15;
                    }
                    if ((int)puVar25 < (int)((int)puVar44 + 0x27)) {
                      puVar38 = (uint *)((int)puVar44 + 0x1b);
                      bVar54 = SBORROW4((int)puVar38,(int)puVar25);
                      iVar39 = (int)puVar38 - (int)puVar25;
                      bVar53 = puVar38 == puVar25;
                      if ((int)puVar38 <= (int)puVar25) {
                        bVar54 = SBORROW4((int)puVar49,(int)puVar51);
                        iVar39 = (int)puVar49 - (int)puVar51;
                        bVar53 = puVar49 == puVar51;
                      }
                      if ((bVar53 || iVar39 < 0 != bVar54) && ((int)puVar51 < (int)pcVar13)) {
                        pcVar27[2] = pcVar27[2] ^ 1;
                        goto LAB_1000af60;
                      }
                    }
                    if ((int)puVar25 < (int)((int)puVar44 + 0x39)) {
                      puVar38 = (uint *)((int)puVar44 + 0x2d);
                      bVar54 = SBORROW4((int)puVar38,(int)puVar25);
                      iVar39 = (int)puVar38 - (int)puVar25;
                      bVar53 = puVar38 == puVar25;
                      if ((int)puVar38 <= (int)puVar25) {
                        bVar54 = SBORROW4((int)puVar49,(int)puVar51);
                        iVar39 = (int)puVar49 - (int)puVar51;
                        bVar53 = puVar49 == puVar51;
                      }
                      if ((bVar53 || iVar39 < 0 != bVar54) && ((int)puVar51 < (int)pcVar13)) {
                        recovered_1001c050((int)puVar16);
                        recovered_1000f6c4((int)puVar16);
                        goto LAB_10006ee4;
                      }
                    }
                    if ((int)puVar25 < (int)((int)puVar44 + 0x4b)) {
                      puVar44 = (uint *)((int)puVar44 + 0x3f);
                      bVar54 = SBORROW4((int)puVar44,(int)puVar25);
                      iVar39 = (int)puVar44 - (int)puVar25;
                      bVar53 = puVar44 == puVar25;
                      if ((int)puVar44 <= (int)puVar25) {
                        bVar54 = SBORROW4((int)puVar49,(int)puVar51);
                        iVar39 = (int)puVar49 - (int)puVar51;
                        bVar53 = puVar49 == puVar51;
                      }
                      if ((bVar53 || iVar39 < 0 != bVar54) && ((int)puVar51 < (int)pcVar13)) {
                        puVar44 = (uint *)0x0;
                        goto LAB_1000af30;
                      }
                    }
                    recovered_1000f6c4((int)puVar16);
                    cVar10 = *pcVar27;
                    iVar39 = 0;
                    bVar53 = cVar10 == '\x01';
                    if (bVar53) {
                      cVar10 = pcVar27[2];
                    }
                    if (bVar53 && cVar10 == '\0') {
                      puVar49 = (uint *)0x0;
                      puVar44 = (uint *)0x0;
                      if (pcVar27[3] == '\0') {
                        puVar49 = (uint *)(*(int *)(pcVar27 + 0x58) + *(int *)(pcVar27 + 0x60) +
                                          -0x10);
                        iVar39 = 0xe;
                        puVar44 = (uint *)(*(int *)(pcVar27 + 0x5c) + *(int *)(pcVar27 + 100) +
                                          -0x10);
                      }
                    }
                    else {
                      puVar44 = (uint *)0x0;
                      puVar49 = (uint *)0x0;
                    }
                    bVar54 = SBORROW4((int)puVar49,(int)puVar25);
                    iVar23 = (int)puVar49 - (int)puVar25;
                    bVar53 = puVar49 == puVar25;
                    if ((int)puVar49 <= (int)puVar25) {
                      bVar54 = SBORROW4((int)puVar44,(int)puVar51);
                      iVar23 = (int)puVar44 - (int)puVar51;
                      bVar53 = puVar44 == puVar51;
                    }
                    unaff_r5 = puVar16;
                    if (bVar53 || iVar23 < 0 != bVar54) {
                      puVar49 = (uint *)((int)puVar49 + iVar39);
                      bVar54 = SBORROW4((int)puVar49,(int)puVar25);
                      iVar23 = (int)puVar49 - (int)puVar25;
                      bVar53 = puVar49 == puVar25;
                      if ((int)puVar25 < (int)puVar49) {
                        puVar44 = (uint *)((int)puVar44 + iVar39);
                        bVar54 = SBORROW4((int)puVar44,(int)puVar51);
                        iVar23 = (int)puVar44 - (int)puVar51;
                        bVar53 = puVar44 == puVar51;
                      }
                      if (!bVar53 && iVar23 < 0 == bVar54) {
                        recovered_1001c1c8((int)puVar16);
                        goto LAB_10006ee4;
                      }
                    }
                    if (((int)puVar51 < *(int *)(pcVar27 + 0x5c) + 0x18) && (pcVar27[3] == '\0')) {
                      DAT_1012e43c = (int)puVar51 - *(int *)(pcVar27 + 0x5c);
                      DAT_10024314 = 0;
                      DAT_1002413c = 0xffffffff;
                      DAT_1012e438 = (int)puVar25 - *(int *)(pcVar27 + 0x58);
                      DAT_10024138 = puVar16;
                      goto LAB_10006ee8;
                    }
                    uVar20 = *(uint *)(pcVar27 + 0x10);
                    if (uVar20 == 3) {
                      if (pcVar27[2] != '\0') goto LAB_10006ee8;
                      iVar39 = recovered_1001c254((int)puVar16,(uint)puVar25,(int)puVar51);
                      if (iVar39 != 0) goto LAB_10006ee8;
                      uVar20 = *(uint *)(pcVar27 + 0x10);
                    }
                    bVar53 = uVar20 != 0;
                    if (!bVar53) {
                      uVar20 = (uint)(byte)pcVar27[2];
                    }
                    if (bVar53 || uVar20 != 0) goto LAB_10006ee8;
                    iVar39 = recovered_1001ca40((int)pcVar27,(int)puVar25,(int)puVar51);
                    if (-1 < iVar39) {
                      recovered_1001c000(&DAT_10024918 + iVar39 * 0x124);
                      goto LAB_10006ee4;
                    }
                    iVar39 = recovered_1001cac4((int)puVar16,(int)puVar25,(int)puVar51);
                    if (iVar39 != 0) goto LAB_10006ee8;
                    uVar20 = recovered_1001cd98((int)pcVar27,(int)puVar25,(int)puVar51);
                    if (uVar20 != 0xfffffffe) {
                      if (uVar20 == 0xffffffff) {
                        if (pcVar27[0x260] == '\x01') {
                          cVar10 = '\0';
                          pcVar27[0x78] = '\0';
LAB_1000b824:
                          pcVar27[0x260] = cVar10;
                        }
                        else {
                          pcVar13 = pcVar27 + 0x78;
                          if (*pcVar13 == '\0') {
                            cVar10 = '\x01';
                            goto LAB_1000b824;
                          }
                          recovered_1001cf30(pcVar13,pcVar13);
                        }
                        pcVar27[0xaf8] = '\0';
                        pcVar27[0xaf9] = '\0';
                        pcVar27[0xafa] = '\0';
                        pcVar27[0xafb] = '\0';
                      }
                      else {
                        if (((int)uVar20 < 0) || (*(uint *)(pcVar27 + 0xaf0) <= uVar20))
                        goto LAB_10006ee8;
                        iVar39 = *(int *)(pcVar27 + 0xaec) + uVar20 * 0x1f8;
                        if (*(int *)(iVar39 + 0x1ec) != 3) {
                          pcVar27[0xafc] = '\x01';
                          *(uint *)(pcVar27 + 0xaf4) = uVar20;
                          uVar37 = 0;
                          uVar22 = 0;
                          _DAT_10027414 = 1;
                          cVar10 = *(char *)(iVar39 + 0xf1);
                          DAT_10027418 = puVar16;
                          DAT_1002741c = uVar20;
                          DAT_10027420 = puVar25;
                          DAT_10027424 = puVar51;
                          if (cVar10 == '\0') goto LAB_1000b8b0;
                          uVar14 = 0;
                          goto LAB_1000b88c;
                        }
                        uVar50 = *(undefined4 *)(iVar39 + 0x1f0);
                        pcVar27[0x260] = '\0';
                        pcVar27[0xaf8] = '\0';
                        pcVar27[0xaf9] = '\0';
                        pcVar27[0xafa] = '\0';
                        pcVar27[0xafb] = '\0';
                        *(undefined4 *)(pcVar27 + 0x25c) = uVar50;
                        pcVar27[0x78] = '\0';
                      }
                    }
                    recovered_1000eef4((int)pcVar27);
                    goto LAB_10006ee4;
                  }
                  break;
                }
              }
            }
            bVar53 = (uint *)0x1 < unaff_r5;
            unaff_r5 = (uint *)((int)unaff_r5 + -1);
          } while (bVar53);
        }
        iVar52 = 0;
        pbVar48 = &DAT_100256c8;
        unaff_r5 = (uint *)&IRQ;
        iVar23 = (DAT_10024130 + -0x18) / 0x52;
        if (iVar23 < 2) {
          iVar23 = 1;
        }
        do {
          if (*pbVar48 == 1) {
            iVar36 = recovered_10000b48(iVar52,iVar23);
            iVar28 = (iVar52 - iVar36 * iVar23) * 0x52;
            puVar16 = (uint *)(iVar28 + 0xc);
            bVar54 = SBORROW4((int)puVar16,(int)puVar25);
            iVar21 = (int)puVar16 - (int)puVar25;
            bVar53 = puVar16 == puVar25;
            if ((int)puVar16 <= (int)puVar25) {
              iVar36 = iVar36 * 0x4e;
              puVar16 = (uint *)(iVar36 + 0x24);
              bVar54 = SBORROW4((int)puVar16,(int)puVar51);
              iVar21 = (int)puVar16 - (int)puVar51;
              bVar53 = puVar16 == puVar51;
            }
            if (bVar53 || iVar21 < 0 != bVar54) {
              puVar16 = (uint *)(iVar28 + 0x56);
              bVar54 = SBORROW4((int)puVar16,(int)puVar25);
              iVar21 = (int)puVar16 - (int)puVar25;
              bVar53 = puVar16 == puVar25;
              if ((int)puVar25 < (int)puVar16) {
                puVar44 = (uint *)(iVar36 + 0x66);
                bVar54 = SBORROW4((int)puVar44,(int)puVar51);
                iVar21 = (int)puVar44 - (int)puVar51;
                bVar53 = puVar44 == puVar51;
              }
              if (!bVar53 && iVar21 < 0 == bVar54) {
                uVar37 = recovered_100130e8(pbVar48,(uint)puVar16);
                pbVar42 = pbVar48 + 0x29;
                uVar20 = *(uint *)(pbVar48 + 0x11c);
                if (uVar37 == 0) goto LAB_10009dbc;
                recovered_1000e894((char *)pbVar42,*(uint *)(pbVar48 + 0x11c));
                goto LAB_10006ee4;
              }
            }
            iVar52 = iVar52 + 1;
          }
          pbVar48 = pbVar48 + 0x124;
          unaff_r5 = (uint *)((int)unaff_r5 + -1);
        } while (unaff_r5 != (uint *)0x0);
        iVar23 = iVar39 + -0x56;
        if (iVar39 < 0x5e) {
          iVar23 = 8;
        }
        if (((((uint *)0x65 < puVar51) || ((int)puVar51 < 0x24)) || ((int)puVar25 < iVar23)) ||
           (iVar23 + 0x4a <= (int)puVar25)) goto LAB_10006ee8;
        uVar20 = recovered_10005d20();
        recovered_1000e894(&DAT_10023774,uVar20);
      }
      else {
        if (0 < (int)DAT_100290dc) {
          puVar44 = DAT_100290dc;
          do {
            puVar18 = (undefined1 *)DAT_10024914[(int)((int)puVar44 + -1)];
            pbVar42 = (byte *)(DAT_1002430c + (int)puVar18 * 0xd9c);
            unaff_r5 = (uint *)(uint)*pbVar42;
            if (unaff_r5 == (uint *)0x1) {
              pbVar42 = *(byte **)(pbVar42 + 0x14);
            }
            if (unaff_r5 == (uint *)0x1 && pbVar42 == pbVar48) {
              if (-1 < (int)puVar18) {
                unaff_r5 = (uint *)((int)DAT_100290dc + -1);
                *(undefined2 *)((int)puVar18 * 0xd9c + DAT_1002430c + 1) = 1;
                puVar44 = (uint *)0x0;
                puVar31 = puVar12;
                goto LAB_100099f0;
              }
              break;
            }
            bVar53 = (uint *)0x1 < puVar44;
            puVar44 = (uint *)((int)puVar44 + -1);
          } while (bVar53);
        }
        recovered_1001be90((uint)pbVar48);
      }
    }
    goto LAB_10006ee4;
  }
  if ((((int)puVar25 < (int)_DAT_10024378) || ((int)(_DAT_10024378 + 0x2a) <= (int)puVar25)) ||
     (((int)puVar51 - (int)DAT_1002437c < -0x15 ||
      (iVar23 = ((int)puVar51 - (int)DAT_1002437c) / 0x16, (int)DAT_1002490c <= iVar23)))) {
    DAT_10024374 = '\0';
    goto LAB_10006ee8;
  }
  iVar23 = iVar23 * 4;
  iVar52 = *(int *)(&DAT_10024588 + iVar23);
  DAT_10024374 = '\0';
  if (iVar52 == 2) {
    recovered_1001be90((*(uint32_t *)(pf_module_state+0xd80U)));
    goto LAB_10006ee4;
  }
  if ((iVar52 == 0x13) && (-1 < (int)(*(uint32_t *)(pf_module_state+0xd80U)))) {
    dst = (void *)((*(uint32_t *)(pf_module_state+0xd80U)) * 300 + DAT_10024910);
    unaff_r5 = *(uint **)((int)dst + 4);
    if (unaff_r5 != (uint *)0x5) goto switchD_10009a44_caseD_5;
    iVar23 = 0;
    memset(dst,0,300);
    recovered_1001d834();
    iVar39 = DAT_10024910;
    do {
      pcVar27 = (char *)(iVar39 + iVar23 * 300);
      cVar10 = *pcVar27;
      bVar53 = cVar10 == '\x01';
      if (bVar53) {
        cVar10 = pcVar27[1];
      }
      if (bVar53 && cVar10 == '\0') {
        iVar21 = 0x14;
        piVar40 = (int *)(DAT_1002430c + 0x14);
        iVar52 = 0;
        do {
          if (((char)piVar40[-5] == '\x01') && (*piVar40 == iVar23)) {
            iVar52 = iVar52 + 1;
          }
          piVar40 = piVar40 + 0x367;
          iVar21 = iVar21 + -1;
        } while (iVar21 != 0);
        unaff_r5 = (uint *)0x0;
        if (iVar52 == 0) {
          memset(pcVar27,0,300);
          iVar39 = DAT_10024910;
        }
      }
      iVar23 = iVar23 + 1;
    } while (iVar23 != 0x12);
    goto LAB_10006ee8;
  }
  unaff_r5 = &DAT_10009a48;
  switch((uintptr_t)(iVar52)) {
  case 3:
    iVar39 = *(int *)(&DAT_100245d0 + iVar23);
    if (-1 < iVar39) {
      *(undefined2 *)(iVar39 * 0xd9c + DAT_1002430c + 1) = 1;
      recovered_1000f6c4(iVar39);
      goto LAB_10006ee4;
    }
    break;
  case 4:
    iVar23 = 0;
    puVar18 = (undefined1 *)0x0;
    do {
      if ((*(char *)(iVar39 + iVar23) == '\x01') && (*(uint *)(iVar39 + iVar23 + 0x14) == uVar20)) {
        recovered_10021c20(puVar18,1);
        iVar39 = DAT_1002430c;
      }
      puVar18 = puVar18 + 1;
      iVar23 = iVar23 + 0xd9c;
    } while (puVar18 != &NotUsed);
    iVar23 = 0;
    unaff_r5 = (uint *)&NotUsed;
    iVar39 = DAT_10024910;
    do {
      pcVar27 = (char *)(iVar39 + iVar23 * 300);
      cVar10 = *pcVar27;
      bVar53 = cVar10 == '\x01';
      if (bVar53) {
        cVar10 = pcVar27[1];
      }
      if (bVar53 && cVar10 == '\0') {
        iVar21 = 0x14;
        piVar40 = (int *)(DAT_1002430c + 0x14);
        iVar52 = 0;
        do {
          if (((char)piVar40[-5] == '\x01') && (*piVar40 == iVar23)) {
            iVar52 = iVar52 + 1;
          }
          piVar40 = piVar40 + 0x367;
          iVar21 = iVar21 + -1;
        } while (iVar21 != 0);
        unaff_r5 = (uint *)0x0;
        if (iVar52 == 0) {
          memset(pcVar27,0,300);
          iVar39 = DAT_10024910;
        }
      }
      iVar23 = iVar23 + 1;
    } while (iVar23 != 0x12);
    break;
  default:
switchD_10009a44_caseD_5:
    if (((int)_DAT_10024380 < 0) ||
       (unaff_r5 = (uint *)(DAT_1002430c + (int)_DAT_10024380 * 0xd9c), (char)*unaff_r5 == '\0')) {
      switch((uintptr_t)(iVar52)) {
      case 1:
        pbVar42 = (byte *)&DAT_100243a4;
        uVar20 = DAT_10024394;
LAB_10009dbc:
        recovered_1001d040(pbVar42,0,uVar20);
        break;
      default:
        if (iVar52 != 0x13) goto LAB_10006ee8;
LAB_1000a514:
        recovered_1001eb04(DAT_10024394);
        break;
      case 5:
switchD_1000a5e0_caseD_5:
        if (DAT_10024399 != '\x01') goto LAB_10006ee8;
        recovered_1001e238(DAT_10024394);
        break;
      case 0xb:
        puVar16 = (uint *)&DAT_100243a4;
LAB_1000a4fc:
        recovered_1001da60((char *)puVar16,0);
        break;
      case 0xe:
switchD_1000a5e0_caseD_e:
        recovered_1002063c(&DAT_10024918,0xc,DAT_10024394,DAT_10024398);
        recovered_10020804();
        break;
      case 0xf:
switchD_1000a5e0_caseD_f:
        recovered_1001e5a8(DAT_10024394);
        break;
      case 0x10:
switchD_1000a5e0_caseD_10:
        recovered_1001e8d4(DAT_10024394,DAT_10024398);
        break;
      case 0x11:
switchD_1000a5e0_caseD_11:
        recovered_1001e9c0(DAT_10024394);
        break;
      case 0x12:
switchD_1000a5e0_caseD_12:
        recovered_100059dc(&DAT_100243a4,DAT_10024394);
        recovered_1001d834();
        break;
      case 0x17:
switchD_1000a5e0_caseD_17:
        if (DAT_1002439b != '\x01') goto LAB_10006ee8;
        recovered_1001e440(DAT_10024394);
      }
    }
    else {
      pcVar27 = (char *)0x0;
      if ((-1 < (int)(uint)DAT_10024384) && ((uint)DAT_10024384 < unaff_r5[700])) {
        pcVar27 = (char *)(unaff_r5[699] + (uint)DAT_10024384 * 0x1f8);
      }
      puVar16 = _DAT_10024380;
      pcVar13 = pcVar27;
      switch((uintptr_t)(iVar52)) {
      case 0x14:
        if (unaff_r5[4] == 0) {
LAB_10009c1c:
          recovered_1000e894((char *)(unaff_r5 + 0x1e),unaff_r5[0x97]);
        }
        else {
LAB_1000a5c0:
          if (pcVar27 != (char *)0x0) {
            pcVar13 = (char *)0x1;
          }
LAB_1000a5cc:
          switch((uintptr_t)(iVar52)) {
          case 5:
            goto switchD_1000a5e0_caseD_5;
          case 6:
            if (DAT_1002439a != '\x01') goto LAB_10006ee8;
            recovered_1000e894(&DAT_100243a4,DAT_10024394);
            break;
          default:
            if (iVar52 == 0x13) goto LAB_1000a514;
            if (((uint)(iVar52 == 7) & (uint)pcVar13) == 1) {
              recovered_1001f110((int)unaff_r5,(uint)DAT_10024384,0);
            }
            else if (((uint)(iVar52 == 8) & (uint)pcVar13) == 1) {
              recovered_1001f110((int)unaff_r5,(uint)DAT_10024384,1);
            }
            else if (iVar52 == 9) {
              recovered_1001f248((int)unaff_r5);
            }
            else if (((uint)(iVar52 == 10) & (uint)pcVar13) == 1) {
              recovered_1001f580(1,(int)_DAT_10024380,str_10023d7e,str_10023d85,pcVar27);
              iVar23 = DAT_1002430c;
              puVar18 = DAT_100242dc;
              if ((int)DAT_100242dc < 0) goto LAB_10006ee8;
              cVar10 = pcVar27[0xf1];
              uVar20 = 0;
              iVar52 = (int)DAT_100242dc * 0xd9c + DAT_1002430c + 0x78;
              if (cVar10 != '\0') {
                uVar37 = 0;
                do {
                  uVar20 = uVar37 + 1;
                  *(char *)(iVar52 + uVar37) = cVar10;
                  if (0xef < uVar20) break;
                  cVar10 = pcVar27[uVar37 + 0xf2];
                  uVar37 = uVar20;
                } while (cVar10 != '\0');
              }
              *(undefined1 *)(iVar52 + uVar20) = 0;
              uVar20 = *(uint *)(pcVar27 + 0x1f0);
              if (0x7fffffff < uVar20) {
                if (iVar39 == 0) {
                  uVar20 = recovered_10005d20();
                  iVar23 = DAT_1002430c;
                  puVar18 = DAT_100242dc;
                }
                else {
                  uVar20 = unaff_r5[0x97];
                }
              }
              *(uint *)((int)puVar18 * 0xd9c + iVar23 + 0x25c) = uVar20;
            }
            else if (iVar52 == 0xc) {
              recovered_1001f580(2,(int)_DAT_10024380,str_10023d8f,str_10023d9d,str_10023daa);
            }
            else {
              if (iVar52 != 0xb) {
                if (((uint)(iVar52 == 0xd) & (uint)pcVar13) == 1) {
                  uVar20 = *(uint *)(pcVar27 + 0x1f0);
                  if (0x7fffffff < uVar20) {
                    uVar20 = unaff_r5[0x97];
                  }
                  recovered_1001f710(uVar20,pcVar27 + 0xf1);
                  goto LAB_1000afac;
                }
                goto LAB_10006ee8;
              }
              if (pcVar13 == (char *)0x0) {
                puVar16 = unaff_r5 + 0x1e;
                goto LAB_1000a4fc;
              }
              recovered_1001da60(pcVar27 + 0xf1,(int)pcVar27);
            }
            break;
          case 0xe:
            goto switchD_1000a5e0_caseD_e;
          case 0xf:
            goto switchD_1000a5e0_caseD_f;
          case 0x10:
            goto switchD_1000a5e0_caseD_10;
          case 0x11:
            goto switchD_1000a5e0_caseD_11;
          case 0x12:
            goto switchD_1000a5e0_caseD_12;
          case 0x17:
            goto switchD_1000a5e0_caseD_17;
          }
        }
        break;
      case 0x15:
switchD_10009be8_caseD_15:
        recovered_10021c20((undefined1 *)puVar16,1);
        break;
      case 0x16:
        recovered_1001d92c(unaff_r5[5]);
        break;
      default:
        if ((iVar52 == 1) && (DAT_100243a4 != '\0')) {
          recovered_1001d040((byte *)&DAT_100243a4,(int)pcVar27,DAT_10024394);
        }
        else {
          if (pcVar27 != (char *)0x0) {
            pcVar13 = (char *)0x1;
          }
          if ((iVar52 != 1) || (pcVar27 == (char *)0x0)) {
            if (iVar52 == 1) {
              if ((unaff_r5[4] == 0) && (pcVar27 == (char *)0x0)) goto LAB_10009c1c;
              goto LAB_10006ee8;
            }
            goto LAB_1000a5cc;
          }
          if (*(int *)(pcVar27 + 0x1ec) != 3) goto LAB_10006ee8;
          uVar20 = *(uint *)(pcVar27 + 0x1f0);
          *(char *)(unaff_r5 + 0x98) = '\0';
          unaff_r5[0x2be] = 0;
          unaff_r5[0x97] = uVar20;
          *(char *)(unaff_r5 + 0x1e) = '\0';
LAB_1000afac:
          recovered_1000eef4((int)unaff_r5);
        }
        break;
      case 0x1b:
        if (unaff_r5[4] != 1) goto LAB_1000a5c0;
        recovered_1001ebb0((int)unaff_r5,*(undefined4 *)(&DAT_100245d0 + iVar23));
        break;
      case 0x1c:
        if (unaff_r5[4] != 6) goto LAB_1000a5c0;
        terror_ui_window_menu_command(unaff_r5[0x2c7],DAT_1002439c,*(uint *)(&DAT_100245d0 + iVar23));
      }
    }
    goto LAB_10006ee4;
  case 0x18:
    iVar23 = 0x14;
    unaff_r5 = (uint *)0x0;
    do {
      if ((*(char *)((int)unaff_r5 + iVar39) == '\x01') &&
         (*(int *)((int)unaff_r5 + iVar39 + 0x10) == 6)) {
        uVar20 = *(uint *)((int)unaff_r5 + iVar39 + 0xb1c);
        if (uVar20 != 0) {
          terror_ui_window_request_close(uVar20,*(int *)((int)unaff_r5 + iVar39 + 0x58),
                             *(int *)((int)unaff_r5 + iVar39 + 0x5c));
          iVar39 = DAT_1002430c;
        }
      }
      unaff_r5 = unaff_r5 + 0x367;
      iVar23 = iVar23 + -1;
    } while (iVar23 != 0);
    DAT_10024319 = 1;
    break;
  case 0x19:
    unaff_r5 = (uint *)0x3;
    iVar39 = recovered_10005734(3,str_10023db7,0x9c9c9c,'\0');
    uStack_108 = (0x20ULL);
    uStack_104 = (undefined4)(0x76U);
    uStack_100 = (0x224ULL);
    local_110 = CONCAT44((undefined4)(0x64U),str_10023dc3);
    local_118 = CONCAT44(iVar39,3);
    iVar39 = recovered_1000eac0((undefined4 *)&local_118);
    uVar9 = (0x6974616dULL);
    uVar5 = (undefined4)(0x6eU);
    uVar4 = (0x49206d65ULL);
    uVar50 = (undefined4)(0x53U);
    if (-1 < iVar39) {
      iVar39 = iVar39 * 0xd9c + DAT_1002430c;
      *(undefined1 *)(iVar39 + 0x273) = 0;
      *(undefined4 *)(iVar39 + 0x261) = uVar50;
      *(undefined4 *)(iVar39 + 0x265) = uVar4;
      *(undefined4 *)(iVar39 + 0x269) = uVar5;
      *(undefined4 *)(iVar39 + 0x26d) = uVar9;
      *(undefined2 *)(iVar39 + 0x271) = 0x6e6f;
    }
    goto LAB_10006ee4;
  case 0x1a:
    iVar39 = Ram40010800;
    if ((iVar39 == 0x50414d57) && (iVar39 = Ram40010804, iVar39 != 0)) {
      uVar20 = Ram40010808;
      bVar53 = 0xb < uVar20;
      if (bVar53) {
        uVar20 = Ram40010808;
      }
      if ((bVar53 && 0xf7 < uVar20) && (pcVar41 = (code *)UINT_400108f4, pcVar41 != (code *)0x0)) {
        (*pcVar41)();
        goto LAB_10006ee4;
      }
    }
  }
  goto LAB_10006ee8;
  while( true ) {
    cVar10 = *(char *)(iVar23 * 0xd9c + iVar39 + 0x79 + uVar22);
    uVar22 = uVar37;
    if (cVar10 == '\0') break;
LAB_10008cf0:
    uVar37 = uVar22 + 1;
    *(char *)((int)&local_118 + uVar22) = cVar10;
    if (0xef < uVar37) break;
  }
LAB_10008d10:
  *(undefined1 *)((int)&local_118 + uVar37) = 0;
  if ((((-1 < (int)uVar20) && (uVar20 < *(uint *)(pcVar27 + 0xaf0))) &&
      (*(int *)(pcVar27 + 0xaec) != 0)) &&
     ((iVar39 = *(int *)(pcVar27 + 0xaec) + uVar20 * 0x1f8, *(int *)(iVar39 + 0x1ec) == 2 ||
      ((*(byte *)(iVar39 + 0x1e8) & 2) != 0)))) {
    cVar10 = *(char *)(iVar39 + 0xf1);
    uVar20 = 0;
    if (cVar10 != '\0') {
      uVar37 = 0;
      do {
        uVar20 = uVar37 + 1;
        *(char *)((int)&local_118 + uVar37) = cVar10;
        if (0xef < uVar20) break;
        cVar10 = *(char *)(iVar39 + 0xf2 + uVar37);
        uVar37 = uVar20;
      } while (cVar10 != '\0');
    }
    *(undefined1 *)((int)&local_118 + uVar20) = 0;
  }
  recovered_10013e2c((byte *)&local_118,&DAT_10027519,(char *)&local_20c);
  unaff_r5 = (uint *)&DAT_10027428;
  iVar39 = strcmp((char *)&local_20c,&DAT_10027428);
  if ((iVar39 != 0) && (DAT_1002760c == *(uint *)(pcVar27 + 0x25c))) {
    recovered_10020a18(DAT_1002760c,&DAT_10027428,(char *)&local_20c);
    iVar23 = 0x14;
    unaff_r5 = (uint *)0x0;
    iVar39 = DAT_1002430c;
    do {
      if ((*(char *)((int)unaff_r5 + iVar39) == '\x01') &&
         (*(int *)((int)unaff_r5 + iVar39 + 0x10) == 0)) {
        recovered_1000eef4((int)unaff_r5 + iVar39);
        iVar39 = DAT_1002430c;
      }
      unaff_r5 = unaff_r5 + 0x367;
      iVar23 = iVar23 + -1;
    } while (iVar23 != 0);
  }
LAB_10006e80:
  memset(&DAT_10027414,0,0x1fc);
  puVar12 = &DAT_1002413c;
  DAT_10024138 = (uint *)0xffffffff;
  DAT_10024314 = 0;
LAB_10006ecc:
  *puVar12 = 0xffffffff;
  DAT_100242e4 = -1;
  goto LAB_10006ee4;
  while (puVar44 = (uint *)((int)puVar44 + 1), DAT_100290dc != puVar44) {
LAB_1000af30:
    if ((uint *)DAT_10024914[(int)puVar44] == puVar16) goto LAB_1000af4c;
  }
  puVar44 = (uint *)0xffffffff;
LAB_1000af4c:
  if (puVar44 == (uint *)((int)DAT_100290dc + -1)) {
    recovered_1001c0e4((int)puVar16);
  }
  else {
LAB_1000af60:
    recovered_1000f6c4((int)puVar16);
  }
  goto LAB_10006ee4;
  while( true ) {
    cVar10 = *(char *)(iVar39 + 0xf2 + uVar14);
    uVar14 = uVar22;
    if (cVar10 == '\0') break;
LAB_1000b88c:
    (&DAT_10027428)[uVar14] = cVar10;
    uVar22 = uVar14 + 1;
    if (0xef < uVar22) break;
  }
LAB_1000b8b0:
  (&DAT_10027428)[uVar22] = 0;
  pcVar13 = &DAT_10023774;
  if (*(int *)(pcVar27 + 0xaec) != 0) {
    pcVar13 = (char *)(*(int *)(pcVar27 + 0xaec) + uVar20 * 0x1f8);
  }
  cVar10 = *pcVar13;
  if (cVar10 != '\0') {
    uVar22 = 0;
    do {
      (&DAT_10027519)[uVar22] = cVar10;
      uVar37 = uVar22 + 1;
      if (0xef < uVar37) break;
      cVar10 = pcVar13[uVar22 + 1];
      uVar22 = uVar37;
    } while (cVar10 != '\0');
  }
  (&DAT_10027519)[uVar37] = 0;
  iVar23 = *(int *)(pcVar27 + 0xaec);
  iVar39 = iVar23 + uVar20 * 0x1f8;
  if (iVar23 == 0) {
    DAT_1002760a = 0;
    DAT_1002760c = *(uint *)(pcVar27 + 0x25c);
  }
  else {
    DAT_1002760a = 1;
    if (*(int *)(iVar39 + 0x1ec) != 2) {
      DAT_1002760a = (undefined1)((*(byte *)(iVar39 + 0x1e8) & 3) >> 1);
    }
    DAT_1002760c = *(uint *)(iVar39 + 0x1f0);
    if (0x7fffffff < DAT_1002760c) {
      DAT_1002760c = *(uint *)(pcVar27 + 0x25c);
    }
  }
  if ((DAT_100242e8 == puVar16 && DAT_100242ec == uVar20) &&
     ((uint)(DAT_10024310 - DAT_1012e440) < 0x1c)) {
    if (iVar23 == 0) {
      uVar37 = *(uint *)(pcVar27 + 0x25c);
    }
    else {
      uVar37 = *(uint *)(iVar39 + 0x1f0);
      if (0x7fffffff < uVar37) {
        uVar37 = *(uint *)(pcVar27 + 0x25c);
      }
    }
    recovered_1001d040((byte *)(iVar39 + 0xf1),iVar39,uVar37);
  }
  DAT_100242e8 = puVar16;
  DAT_100242ec = uVar20;
  DAT_1012e440 = DAT_10024310;
  goto LAB_10006ee4;
LAB_100099f0:
  if ((undefined1 *)*puVar31 != puVar18) goto code_r0x100099fc;
  puVar49 = (uint *)((int)puVar16 + -1);
  uVar20 = (int)puVar49 - (int)puVar44;
  if (!(uVar20 == 0 || (int)puVar49 < (int)puVar44)) {
    if (3 < uVar20) {
      uVar37 = uVar20 & 0xfffffffc;
      puVar44 = (uint *)((int)puVar44 + ((uint)unaff_r5 & 0xfffffffc));
      do {
        uVar37 = uVar37 - 4;
        *puVar31 = puVar31[1];
        puVar31[1] = puVar31[2];
        puVar31[2] = puVar31[3];
        puVar31[3] = puVar31[4];
        puVar31 = puVar31 + 4;
      } while (uVar37 != 0);
      unaff_r5 = (uint *)0x0;
      if (uVar20 == (uVar20 & 0xfffffffc)) goto LAB_10009eb8;
    }
    pcVar27 = (char *)((int)puVar16 + ~(uint)puVar44);
    puVar31 = puVar12 + (int)puVar44;
    do {
      pcVar27 = pcVar27 + -1;
      *puVar31 = puVar31[1];
      puVar31 = puVar31 + 1;
    } while (pcVar27 != (char *)0x0);
  }
  goto LAB_10009eb8;
code_r0x100099fc:
  puVar44 = (uint *)((int)puVar44 + 1);
  puVar31 = puVar31 + 1;
  unaff_r5 = (uint *)((int)unaff_r5 + -1);
  if (puVar16 == puVar44) goto code_r0x10009a10;
  goto LAB_100099f0;
LAB_100090dc:
  do {
    if (*pcVar13 == '\x01') {
      puVar47 = (uint *)((int)puVar38 + iVar23 * 0x5c + 0x22);
      bVar54 = SBORROW4((int)puVar47,(int)puVar25);
      iVar21 = (int)puVar47 - (int)puVar25;
      bVar53 = puVar47 == puVar25;
      if ((int)puVar47 <= (int)puVar25) {
        bVar54 = SBORROW4((int)puVar44,(int)puVar51);
        iVar21 = (int)puVar44 - (int)puVar51;
        bVar53 = puVar44 == puVar51;
      }
      if (bVar53 || iVar21 < 0 != bVar54) {
        puVar47 = puVar47 + 0x15;
        bVar54 = SBORROW4((int)puVar47,(int)puVar25);
        iVar21 = (int)puVar47 - (int)puVar25;
        bVar53 = puVar47 == puVar25;
        if ((int)puVar25 < (int)puVar47) {
          bVar54 = SBORROW4((int)puVar16,(int)puVar51);
          iVar21 = (int)puVar16 - (int)puVar51;
          bVar53 = puVar16 == puVar51;
        }
        if (!bVar53 && iVar21 < 0 == bVar54) {
          memset(&DAT_10024374,0,0x59c);
          DAT_10024390 = 0xffffffff;
          (*(uint32_t *)(pf_module_state+0xd80U)) = 0xffffffff;
          (*(uint32_t *)(pf_module_state+0xd7cU)) = 0xffffffff;
          DAT_10024374 = '\x01';
          _DAT_10024378 = puVar25;
          DAT_1002437c = puVar51;
          _DAT_10024380 = puVar49;
          DAT_1002438c = iVar52;
          recovered_10021278(puVar49,0xfffffc18,(byte *)(pcVar13 + 0x29),(byte *)(pcVar13 + 1),
                             *(undefined4 *)(pcVar13 + 0x11c),(uint)(byte)pcVar13[0x120]);
          if ((int)DAT_1002490c < 0x12) {
            *(undefined4 *)(&DAT_10024588 + (int)DAT_1002490c * 4) = 1;
            *(undefined4 *)(&DAT_100245d0 + (int)DAT_1002490c * 4) = 0xffffffff;
            iVar39 = (int)DAT_1002490c * 0x2a;
            *(undefined4 *)(&DAT_10024618 + iVar39) = 0x6e65704f;
            (&DAT_1002461c)[iVar39] = 0;
            puVar16 = (uint *)((int)DAT_1002490c + 1);
            bVar53 = (int)DAT_1002490c < 0x11;
            DAT_1002490c = puVar16;
            if (bVar53) {
              *(undefined4 *)(&DAT_10024588 + (int)puVar16 * 4) = 0xb;
              *(undefined4 *)(&DAT_100245d0 + (int)DAT_1002490c * 4) = 0xffffffff;
              iVar39 = (int)DAT_1002490c * 0x2a;
              *(undefined4 *)(&DAT_10024618 + iVar39) = 0x6f666e49;
              (&DAT_1002461c)[iVar39] = 0;
              DAT_1002490c = (uint *)((int)DAT_1002490c + 1);
            }
          }
          recovered_10020b60();
          if ((DAT_10024399 == '\x01') && ((int)DAT_1002490c < 0x12)) {
            *(undefined4 *)(&DAT_10024588 + (int)DAT_1002490c * 4) = 5;
            *(undefined4 *)(&DAT_100245d0 + (int)DAT_1002490c * 4) = 0xffffffff;
            iVar39 = (int)DAT_1002490c * 0x2a;
            *(undefined4 *)(&DAT_10024618 + iVar39) = 0x20746553;
            (&DAT_10024626)[iVar39] = 0;
            *(undefined2 *)(&DAT_10024624 + iVar39) = 0x646e;
            *(undefined4 *)(&DAT_10024620 + iVar39) = 0x756f7267;
            *(undefined4 *)(&DAT_1002461c + iVar39) = 0x6b636142;
            DAT_1002490c = (uint *)((int)DAT_1002490c + 1);
          }
          puVar16 = DAT_1002490c;
          if ((DAT_1002439b == '\x01') && ((int)DAT_1002490c < 0x12)) {
            *(undefined4 *)(&DAT_10024588 + (int)DAT_1002490c * 4) = 0x17;
            *(undefined4 *)(&DAT_100245d0 + (int)DAT_1002490c * 4) = 0xffffffff;
            uVar6 = (0x746e6f4620706f74U);
            iVar39 = (int)DAT_1002490c * 0x2a;
            *(undefined8 *)(&DAT_10024618 + iVar39) = (0x6b73654420746553U);
            *(undefined8 *)(&DAT_10024620 + iVar39) = uVar6;
            (&DAT_10024628)[iVar39] = 0;
            puVar16 = (uint *)((int)DAT_1002490c + 1);
          }
          goto LAB_10006f0c;
        }
      }
      iVar23 = iVar23 + 1;
    }
    iVar52 = iVar52 + 1;
    pcVar13 = pcVar13 + 0x124;
  } while (iVar52 != 0xc);
  uVar20 = recovered_1001cd98((int)pcVar27,(int)puVar25,(int)puVar51);
  pbVar48 = (byte *)0x0;
  memset(&DAT_10024374,0,0x59c);
  PF_PART8(auVar2, 8) = SUB168((uint128)0x0,8);
  PF_PART8(auVar2, 0) = 0xffffffffffffffff;
  auVar2 = auVar2 << 0x40 | auVar2;
  _DAT_10024380 = *(uint **)auVar2;
  (*(uint32_t *)(pf_module_state+0xd7cU)) = PF_PART4(auVar2, 4);
  (*(uint32_t *)(pf_module_state+0xd80U)) = PF_PART4(auVar2, 8);
  DAT_1002438c = PF_PART4(auVar2, 12);
  DAT_10024374 = '\x01';
  DAT_10024390 = 0xffffffff;
  if (((int)uVar20 < 0) || (*(uint *)(pcVar27 + 0xaf0) <= uVar20)) {
    pbVar42 = (byte *)(pcVar27 + 0x78);
    if (*pbVar42 != 0) {
      pbVar24 = (byte *)((int)puVar49 * 0xd9c + iVar39 + 0x79);
      bVar33 = *pbVar42;
      do {
        bVar34 = *pbVar24;
        if (bVar33 == 0x2f) {
          pbVar48 = pbVar24 + -1;
        }
        pbVar24 = pbVar24 + 1;
        bVar33 = bVar34;
      } while (bVar34 != 0);
    }
    pbVar24 = pbVar42;
    if (pbVar48 != (byte *)0x0) {
      pbVar24 = pbVar48 + 1;
    }
    _DAT_10024378 = puVar25;
    DAT_1002437c = puVar51;
    recovered_10021278(puVar49,uVar20,pbVar42,pbVar24,*(undefined4 *)(pcVar27 + 0x25c),1);
    recovered_10020b60();
    puVar16 = DAT_1002490c;
    if ((int)DAT_1002490c < 0x12) {
      *(undefined4 *)(&DAT_10024588 + (int)DAT_1002490c * 4) = 9;
      *(undefined4 *)(&DAT_100245d0 + (int)DAT_1002490c * 4) = 0xffffffff;
      iVar39 = (int)DAT_1002490c * 0x2a;
      *(undefined4 *)(&DAT_10024618 + iVar39) = 0x74736150;
      *(undefined2 *)(&DAT_1002461c + iVar39) = 0x65;
      puVar16 = (uint *)((int)DAT_1002490c + 1);
      if ((int)DAT_1002490c < 0x11) {
        DAT_1002490c = puVar16;
        *(undefined4 *)(&DAT_10024588 + (int)puVar16 * 4) = 0xc;
        *(undefined4 *)(&DAT_100245d0 + (int)DAT_1002490c * 4) = 0xffffffff;
        iVar39 = (int)DAT_1002490c * 0x2a;
        *(undefined4 *)(&DAT_10024618 + iVar39) = 0x61657243;
        *(undefined2 *)(&DAT_10024624 + iVar39) = 0x72;
        *(undefined4 *)(&DAT_10024620 + iVar39) = 0x65646c6f;
        *(undefined4 *)(&DAT_1002461c + iVar39) = 0x46206574;
        puVar16 = (uint *)((int)DAT_1002490c + 1);
        if (0x10 < (int)DAT_1002490c) goto LAB_10006f0c;
        DAT_1002490c = puVar16;
        *(undefined4 *)(&DAT_10024588 + (int)puVar16 * 4) = 0xb;
        *(undefined4 *)(&DAT_100245d0 + (int)DAT_1002490c * 4) = 0xffffffff;
        iVar39 = (int)DAT_1002490c * 0x2a;
        *(undefined4 *)(&DAT_10024618 + iVar39) = 0x6f666e49;
        puVar18 = &DAT_1002461c + iVar39;
LAB_1000a450:
        *puVar18 = 0;
        puVar16 = (uint *)((int)DAT_1002490c + 1);
      }
    }
  }
  else {
    pbVar48 = (byte *)(*(int *)(pcVar27 + 0xaec) + uVar20 * 0x1f8);
    pbVar42 = pbVar48 + 0xf1;
    if (*(int *)(pcVar27 + 0xaec) == 0) {
      uVar37 = *(uint *)(pcVar27 + 0x25c);
      uVar22 = 0;
    }
    else {
      uVar37 = *(uint *)(pbVar48 + 0x1f0);
      uVar22 = 1;
      if (0x7fffffff < uVar37) {
        uVar37 = *(uint *)(pcVar27 + 0x25c);
      }
      if (*(int *)(pbVar48 + 0x1ec) != 2) {
        uVar22 = (pbVar48[0x1e8] & 3) >> 1;
      }
    }
    _DAT_10024378 = puVar25;
    DAT_1002437c = puVar51;
    recovered_10021278(puVar49,uVar20,pbVar42,pbVar48,uVar37,uVar22);
    if ((int)DAT_1002490c < 0x12) {
      *(undefined4 *)(&DAT_10024588 + (int)DAT_1002490c * 4) = 1;
      *(undefined4 *)(&DAT_100245d0 + (int)DAT_1002490c * 4) = 0xffffffff;
      iVar39 = (int)DAT_1002490c * 0x2a;
      *(undefined4 *)(&DAT_10024618 + iVar39) = 0x6e65704f;
      (&DAT_1002461c)[iVar39] = 0;
      DAT_1002490c = (uint *)((int)DAT_1002490c + 1);
    }
    pbVar24 = (byte *)0x0;
    pbVar32 = (byte *)0x0;
    if (*pbVar42 != 0) {
      pbVar48 = pbVar48 + 0xf2;
      bVar33 = *pbVar42;
      do {
        bVar34 = *pbVar48;
        if (bVar33 == 0x2f) {
          pbVar32 = pbVar48 + -1;
        }
        pbVar48 = pbVar48 + 1;
        bVar33 = bVar34;
      } while (bVar34 != 0);
    }
    pbVar48 = pbVar42;
    if (pbVar32 != (byte *)0x0) {
      pbVar48 = pbVar32 + 1;
    }
    if (*pbVar48 != 0) {
      pbVar24 = (byte *)0x0;
      bVar33 = *pbVar48;
      do {
        bVar34 = pbVar48[1];
        if (bVar33 == 0x2e) {
          pbVar24 = pbVar48;
        }
        pbVar48 = pbVar48 + 1;
        bVar33 = bVar34;
      } while (bVar34 != 0);
    }
    pbVar48 = &DAT_10023774;
    if (pbVar24 != (byte *)0x0) {
      pbVar48 = pbVar24;
    }
    uVar20 = (uint)*pbVar48;
    if (uVar20 == 0) {
      bVar34 = 0x2e;
      bVar33 = 0;
LAB_1000b298:
      if (bVar33 != bVar34) goto LAB_1000b2fc;
      if ((int)DAT_1002490c < 0x12) {
        *(undefined4 *)(&DAT_10024588 + (int)DAT_1002490c * 4) = 6;
        *(undefined4 *)(&DAT_100245d0 + (int)DAT_1002490c * 4) = 0xffffffff;
        iVar39 = (int)DAT_1002490c * 0x2a;
        *(undefined4 *)(&DAT_10024618 + iVar39) = 0x65746e45;
        *(undefined2 *)(&DAT_10024620 + iVar39) = 0x70;
        *(undefined4 *)(&DAT_1002461c + iVar39) = 0x70412072;
        DAT_1002490c = (uint *)((int)DAT_1002490c + 1);
        goto LAB_1000b2fc;
      }
    }
    else {
      if (uVar20 - 0x41 < 0x1a) {
        uVar20 = uVar20 | 0x20;
      }
      if (uVar20 == 0x2e) {
        uVar20 = (uint)pbVar48[1];
        if (uVar20 == 0) {
          bVar34 = 0x61;
          bVar33 = 0;
        }
        else {
          if (uVar20 - 0x41 < 0x1a) {
            uVar20 = uVar20 | 0x20;
          }
          if (uVar20 != 0x61) goto LAB_1000b2fc;
          uVar20 = (uint)pbVar48[2];
          bVar34 = 0x70;
          bVar33 = 0;
          if (uVar20 != 0) {
            if (uVar20 - 0x41 < 0x1a) {
              uVar20 = uVar20 | 0x20;
            }
            if (uVar20 != 0x70) goto LAB_1000b2fc;
            uVar20 = (uint)pbVar48[3];
            bVar33 = 0;
            if (uVar20 != 0) {
              if (uVar20 - 0x41 < 0x1a) {
                uVar20 = uVar20 | 0x20;
              }
              if (uVar20 != 0x70) goto LAB_1000b2fc;
              bVar33 = pbVar48[4];
              bVar34 = 0;
            }
          }
        }
        goto LAB_1000b298;
      }
LAB_1000b2fc:
      if ((int)DAT_1002490c < 0x12) {
        *(undefined4 *)(&DAT_10024588 + (int)DAT_1002490c * 4) = 0xb;
        *(undefined4 *)(&DAT_100245d0 + (int)DAT_1002490c * 4) = 0xffffffff;
        iVar39 = (int)DAT_1002490c * 0x2a;
        *(undefined4 *)(&DAT_10024618 + iVar39) = 0x6f666e49;
        (&DAT_1002461c)[iVar39] = 0;
        DAT_1002490c = (uint *)((int)DAT_1002490c + 1);
      }
    }
    recovered_10020b60();
    if ((int)DAT_1002490c < 0x12) {
      *(undefined4 *)(&DAT_10024588 + (int)DAT_1002490c * 4) = 7;
      *(undefined4 *)(&DAT_100245d0 + (int)DAT_1002490c * 4) = 0xffffffff;
      iVar39 = (int)DAT_1002490c * 0x2a;
      *(undefined4 *)(&DAT_10024618 + iVar39) = 0x79706f43;
      (&DAT_1002461c)[iVar39] = 0;
      puVar16 = (uint *)((int)DAT_1002490c + 1);
      bVar53 = (int)DAT_1002490c < 0x11;
      DAT_1002490c = puVar16;
      if (bVar53) {
        *(undefined4 *)(&DAT_10024588 + (int)puVar16 * 4) = 8;
        *(undefined4 *)(&DAT_100245d0 + (int)DAT_1002490c * 4) = 0xffffffff;
        *(undefined4 *)(&DAT_10024618 + (int)DAT_1002490c * 0x2a) = 0x747543;
        puVar16 = (uint *)((int)DAT_1002490c + 1);
        bVar53 = (int)DAT_1002490c < 0x11;
        DAT_1002490c = puVar16;
        if (bVar53) {
          *(undefined4 *)(&DAT_10024588 + (int)puVar16 * 4) = 10;
          *(undefined4 *)(&DAT_100245d0 + (int)DAT_1002490c * 4) = 0xffffffff;
          iVar39 = (int)DAT_1002490c * 0x2a;
          *(undefined4 *)(&DAT_10024618 + iVar39) = 0x616e6552;
          (&DAT_1002461e)[iVar39] = 0;
          *(undefined2 *)(&DAT_1002461c + iVar39) = 0x656d;
          puVar16 = (uint *)((int)DAT_1002490c + 1);
          bVar53 = (int)DAT_1002490c < 0x11;
          DAT_1002490c = puVar16;
          if (bVar53) {
            *(undefined4 *)(&DAT_10024588 + (int)puVar16 * 4) = 0xd;
            *(undefined4 *)(&DAT_100245d0 + (int)DAT_1002490c * 4) = 0xffffffff;
            iVar39 = (int)DAT_1002490c * 0x2a;
            *(undefined4 *)(&DAT_10024618 + iVar39) = 0x656c6544;
            puVar16 = DAT_1002490c;
            (&DAT_1002461e)[iVar39] = 0;
            *(undefined2 *)(&DAT_1002461c + iVar39) = 0x6574;
            puVar44 = (uint *)((int)DAT_1002490c + 1);
            DAT_1002490c = puVar44;
            bVar53 = recovered_10013aec(pbVar42);
            if ((bVar53) && ((int)puVar16 < 0x11)) {
              *(undefined4 *)(&DAT_10024588 + (int)puVar44 * 4) = 5;
              *(undefined4 *)(&DAT_100245d0 + (int)DAT_1002490c * 4) = 0xffffffff;
              iVar39 = (int)DAT_1002490c * 0x2a;
              *(undefined4 *)(&DAT_10024618 + iVar39) = 0x20746553;
              (&DAT_10024626)[iVar39] = 0;
              *(undefined2 *)(&DAT_10024624 + iVar39) = 0x646e;
              puVar44 = (uint *)((int)DAT_1002490c + 1);
              *(undefined4 *)(&DAT_10024620 + iVar39) = 0x756f7267;
              DAT_1002490c = puVar44;
              *(undefined4 *)(&DAT_1002461c + iVar39) = 0x6b636142;
            }
            bVar53 = recovered_1001ffe8(pbVar42);
            puVar16 = DAT_1002490c;
            if ((bVar53) && ((int)puVar44 < 0x12)) {
              *(undefined4 *)(&DAT_10024588 + (int)puVar44 * 4) = 0x17;
              *(undefined4 *)(&DAT_100245d0 + (int)DAT_1002490c * 4) = 0xffffffff;
              uVar6 = (0x746e6f4620706f74U);
              iVar39 = (int)DAT_1002490c * 0x2a;
              *(undefined8 *)(&DAT_10024618 + iVar39) = (0x6b73654420746553U);
              *(undefined8 *)(&DAT_10024620 + iVar39) = uVar6;
              puVar18 = &DAT_10024628 + iVar39;
              goto LAB_1000a450;
            }
            goto LAB_10006f0c;
          }
        }
      }
    }
    recovered_10013aec(pbVar42);
    recovered_1001ffe8(pbVar42);
    puVar16 = DAT_1002490c;
  }
  goto LAB_10006f0c;
code_r0x10009a10:
  if ((int)puVar16 < 0x14) {
    DAT_100290dc = (uint *)((int)puVar16 + 1);
    puVar49 = puVar16;
LAB_10009eb8:
    puVar12[(int)puVar49] = puVar18;
  }
  DAT_100242dc = puVar18;
LAB_10006ee4:
LAB_10006ee8:
  puVar16 = DAT_1002490c;
  if (((uVar26 & 2) != 0) && (DAT_1012e405 == '\0')) {
    if ((puVar51 < (uint *)0x18) &&
       (((DAT_1012e450 <= (int)puVar25 && ((int)puVar25 < DAT_1012e454 + DAT_1012e450)) &&
        (DAT_1012e458 != '\0')))) {
      memset(&local_20c,0,0x18);
      iVar39 = Ram40010800;
      if ((iVar39 == 0x50414d57) && (iVar39 = Ram40010804, iVar39 != 0)) {
        uVar20 = Ram40010808;
        bVar53 = 0xb < uVar20;
        if (bVar53) {
          uVar20 = Ram40010808;
        }
        if (((!bVar53 || uVar20 < 0x16c) ||
            (pcVar41 = (code *)UINT_40010968, pcVar41 == (code *)0x0)) ||
           (uVar20 = (*pcVar41)(&local_20c), uVar20 == 0)) goto LAB_10007608;
        memset(&local_20c,0,0x1c);
        lVar56 = (longlong)DAT_10028fe4 * 0x3c + CONCAT44(local_200,local_204);
        iVar39 = (int)lVar56;
        uVar20 = (uint)((ulonglong)lVar56 >> 0x20);
        if (lVar56 < 0) {
          iVar39 = 0;
        }
        uVar57 = recovered_10000c20(CONCAT44(uVar20 & ~((int)uVar20 >> 0x1f),iVar39),0x15180);
        uVar37 = 0x7b2;
        uVar20 = 0x7b1;
        uVar55 = uVar57;
        do {
          uVar14 = (uint)(uVar55 >> 0x20);
          uVar43 = (uint)uVar55;
          uVar22 = uVar20 + 1;
          uVar30 = 0x16d;
          if (((uVar22 & 3) == 0) &&
             (uVar30 = 0x16d,
             uVar20 + (uVar37 / 100) * -100 != -1 || uVar20 + (uVar37 / 400) * -400 == -1)) {
            uVar30 = 0x16e;
          }
          uVar37 = uVar37 + 1;
          uVar55 = CONCAT44(uVar14 - (uVar30 > uVar43),uVar43 - uVar30);
          uVar20 = uVar22;
        } while (uVar14 != 0 || uVar14 < (uVar30 <= uVar43));
        uVar20 = iVar39 + (int)uVar57 * -0x15180;
        if (uVar14 == 0 && (0x1e < uVar43) <= uVar14) {
          local_208 = 1;
          local_204 = uVar43;
        }
        else {
          local_208 = 2;
          uVar37 = 0x1d;
          if ((uVar22 & 3) != 0 || (uVar22 / 100) * 100 == uVar22 && (uVar22 / 400) * 400 != uVar22)
          {
            uVar37 = 0x1c;
          }
          local_204 = uVar43 - 0x1f;
          uVar14 = uVar14 - (uVar43 < 0x1f);
          uVar30 = local_204 - uVar37;
          uVar43 = uVar14 - (uVar37 > local_204);
          if (uVar14 != 0 || uVar14 < (uVar37 <= local_204)) {
            if (uVar43 == 0 && (0x1e < uVar30) <= uVar43) {
              local_208 = 3;
              local_204 = uVar30;
            }
            else {
              local_204 = uVar30 - 0x1f;
              local_208 = 4;
              if (uVar43 != uVar30 < 0x1f || uVar43 - (uVar30 < 0x1f) < (uint)(0x1d < local_204)) {
                local_204 = uVar30 - 0x3d;
                local_208 = 5;
                if (uVar43 != uVar30 < 0x3d || uVar43 - (uVar30 < 0x3d) < (uint)(0x1e < local_204))
                {
                  local_204 = uVar30 - 0x5c;
                  local_208 = 6;
                  if (uVar43 != uVar30 < 0x5c || uVar43 - (uVar30 < 0x5c) < (uint)(0x1d < local_204)
                     ) {
                    local_204 = uVar30 - 0x7a;
                    local_208 = 7;
                    if (uVar43 != uVar30 < 0x7a ||
                        uVar43 - (uVar30 < 0x7a) < (uint)(0x1e < local_204)) {
                      local_204 = uVar30 - 0x99;
                      local_208 = 8;
                      if (uVar43 != uVar30 < 0x99 ||
                          uVar43 - (uVar30 < 0x99) < (uint)(0x1e < local_204)) {
                        local_204 = uVar30 - 0xb8;
                        local_208 = 9;
                        if (uVar43 != uVar30 < 0xb8 ||
                            uVar43 - (uVar30 < 0xb8) < (uint)(0x1d < local_204)) {
                          local_204 = uVar30 - 0xd6;
                          local_208 = 10;
                          if (uVar43 != uVar30 < 0xd6 ||
                              uVar43 - (uVar30 < 0xd6) < (uint)(0x1e < local_204)) {
                            local_204 = uVar30 - 0xf5;
                            local_208 = 0xb;
                            if (uVar43 != uVar30 < 0xf5 ||
                                uVar43 - (uVar30 < 0xf5) < (uint)(0x1d < local_204)) {
                              local_204 = uVar30 - 0x113;
                              local_208 = 0xd;
                              if (uVar43 == uVar30 < 0x113 &&
                                  (uint)(0x1e < local_204) <= uVar43 - (uVar30 < 0x113)) {
                                local_208 = 0xc;
                              }
                              else {
                                local_204 = uVar30 - 0x132;
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
          }
        }
        local_204 = local_204 + 1;
        uVar37 = ((uint)((ulonglong)uVar20 * 0x88888889 >> 0x20) & 0x1fffff) >> 5;
        local_118 = local_118 & 0xffffffffffffff00;
        local_20c = uVar22;
        uVar55 = recovered_10000d04(uVar57 + 4,7);
        local_1f4 = (int)uVar55;
        local_200 = uVar20 / 0xe10;
        local_1f8 = uVar20 + ((uVar20 / 0x3c) * 0x10 - uVar20 / 0x3c) * -4;
        local_1fc = uVar20 / 0x3c + ((uVar37 / 0x3c) * 0x10 - uVar37 / 0x3c) * -4 & 0xffff;
        uVar20 = 0;
        if (uVar22 == 0) {
          uVar37 = 1;
          local_3ee[0xf1] = 0x30;
LAB_1000a8e0:
          uVar22 = 4 - uVar37;
          if (0xf < uVar22) {
            uVar14 = uVar22 & 0xfffffff0;
            PF_PART8(auVar3, 8) = SUB168((uint128)0x0,8);
            PF_PART8(auVar3, 0) = 0x3030303030303030;
            auVar3 = auVar3 << 0x40 | auVar3;
            pbVar48 = local_3ee + uVar37 + 0xf1;
            uVar37 = uVar37 + uVar14;
            uVar20 = uVar14;
            do {
              *(undefined4 *)pbVar48 = PF_PART4(auVar3, 0);
              *(undefined4 *)(pbVar48 + 4) = PF_PART4(auVar3, 4);
              *(undefined4 *)(pbVar48 + 8) = PF_PART4(auVar3, 8);
              *(undefined4 *)(pbVar48 + 0xc) = PF_PART4(auVar3, 12);
              pbVar48 = pbVar48 + 0x10;
              uVar20 = uVar20 - 0x10;
            } while (uVar20 != 0);
            uVar20 = 4;
            if (uVar22 == uVar14) goto LAB_1000a948;
          }
          do {
            local_3ee[uVar37 + 0xf1] = 0x30;
            uVar37 = uVar37 + 1;
          } while (uVar37 != 4);
          uVar20 = 4;
        }
        else {
          do {
            uVar14 = uVar20;
            uVar20 = uVar14 + 1;
            local_3ee[uVar14 + 0xf1] = (char)uVar22 + (char)(uVar22 / 10) * -10 | 0x30;
            if (10 < uVar14) break;
            bVar53 = 9 < uVar22;
            uVar22 = uVar22 / 10;
          } while (bVar53);
          uVar37 = uVar20;
          if (uVar14 < 3) goto LAB_1000a8e0;
        }
LAB_1000a948:
        do {
          uVar37 = uVar20 - 1;
          local_3ee[1] = 0;
          bVar33 = local_3ee[uVar20 + 0xf0];
          uVar15 = strlen((char *)&local_118);
          if (uVar15 < 0x20) {
            if ((bVar33 != 0) && (uVar15 != 0x1f)) {
              uVar17 = uVar15;
              pbVar48 = local_3ee;
              do {
                pbVar48 = pbVar48 + 1;
                bVar34 = *pbVar48;
                uVar15 = uVar17 + 1;
                *(byte *)((int)&local_118 + uVar17) = bVar33;
                if (0x1d < uVar17) break;
                uVar17 = uVar15;
                bVar33 = bVar34;
              } while (bVar34 != 0);
            }
            *(char *)((int)&local_118 + uVar15) = '\0';
          }
          uVar20 = uVar37;
        } while (uVar37 != 0);
        uVar15 = strlen((char *)&local_118);
        if (uVar15 < 0x20) {
          iVar39 = 0x1f;
          if (uVar15 != 0x1f) {
            *(char *)((int)&local_118 + uVar15) = '-';
            iVar39 = uVar15 + 1;
          }
          *(char *)((int)&local_118 + iVar39) = '\0';
        }
        if (local_208 == 0) {
          local_3ee[0xf1] = 0x30;
LAB_1000aa58:
          uVar22 = 2;
          local_3ee[0xf2] = 0x30;
        }
        else {
          uVar20 = local_208;
          uVar37 = 0;
          do {
            uVar22 = uVar37 + 1;
            local_3ee[uVar37 + 0xf1] = (char)uVar20 + (char)(uVar20 / 10) * -10 | 0x30;
            if (10 < uVar37) break;
            bVar53 = 9 < uVar20;
            uVar20 = uVar20 / 10;
            uVar37 = uVar22;
          } while (bVar53);
          if (uVar22 == 1) goto LAB_1000aa58;
        }
        do {
          uVar20 = uVar22 - 1;
          local_3ee[1] = 0;
          bVar33 = local_3ee[uVar22 + 0xf0];
          uVar15 = strlen((char *)&local_118);
          if (uVar15 < 0x20) {
            if ((bVar33 != 0) && (uVar15 != 0x1f)) {
              uVar17 = uVar15;
              pbVar48 = local_3ee;
              do {
                pbVar48 = pbVar48 + 1;
                bVar34 = *pbVar48;
                uVar15 = uVar17 + 1;
                *(byte *)((int)&local_118 + uVar17) = bVar33;
                if (0x1d < uVar17) break;
                uVar17 = uVar15;
                bVar33 = bVar34;
              } while (bVar34 != 0);
            }
            *(char *)((int)&local_118 + uVar15) = '\0';
          }
          uVar22 = uVar20;
        } while (uVar20 != 0);
        uVar15 = strlen((char *)&local_118);
        if (uVar15 < 0x20) {
          iVar39 = 0x1f;
          if (uVar15 != 0x1f) {
            *(char *)((int)&local_118 + uVar15) = '-';
            iVar39 = uVar15 + 1;
          }
          *(char *)((int)&local_118 + iVar39) = '\0';
        }
        if (local_204 == 0) {
          local_3ee[0xf1] = 0x30;
LAB_1000ab68:
          uVar22 = 2;
          local_3ee[0xf2] = 0x30;
        }
        else {
          uVar20 = local_204;
          uVar37 = 0;
          do {
            uVar22 = uVar37 + 1;
            local_3ee[uVar37 + 0xf1] = (char)uVar20 + (char)(uVar20 / 10) * -10 | 0x30;
            if (10 < uVar37) break;
            bVar53 = 9 < uVar20;
            uVar20 = uVar20 / 10;
            uVar37 = uVar22;
          } while (bVar53);
          if (uVar22 == 1) goto LAB_1000ab68;
        }
        do {
          uVar20 = uVar22 - 1;
          local_3ee[1] = 0;
          bVar33 = local_3ee[uVar22 + 0xf0];
          uVar15 = strlen((char *)&local_118);
          if (uVar15 < 0x20) {
            if ((bVar33 != 0) && (uVar15 != 0x1f)) {
              uVar17 = uVar15;
              pbVar48 = local_3ee;
              do {
                pbVar48 = pbVar48 + 1;
                bVar34 = *pbVar48;
                uVar15 = uVar17 + 1;
                *(byte *)((int)&local_118 + uVar17) = bVar33;
                if (0x1d < uVar17) break;
                uVar17 = uVar15;
                bVar33 = bVar34;
              } while (bVar34 != 0);
            }
            *(char *)((int)&local_118 + uVar15) = '\0';
          }
          uVar22 = uVar20;
        } while (uVar20 != 0);
        uVar15 = strlen((char *)&local_118);
        if (uVar15 < 0x20) {
          iVar39 = 0x1f;
          if (uVar15 != 0x1f) {
            *(char *)((int)&local_118 + uVar15) = ' ';
            iVar39 = uVar15 + 1;
          }
          *(char *)((int)&local_118 + iVar39) = '\0';
        }
        if (local_200 == 0) {
          local_3ee[0xf1] = 0x30;
LAB_1000ac78:
          uVar22 = 2;
          local_3ee[0xf2] = 0x30;
        }
        else {
          uVar20 = local_200;
          uVar37 = 0;
          do {
            uVar22 = uVar37 + 1;
            local_3ee[uVar37 + 0xf1] = (char)uVar20 + (char)(uVar20 / 10) * -10 | 0x30;
            if (10 < uVar37) break;
            bVar53 = 9 < uVar20;
            uVar20 = uVar20 / 10;
            uVar37 = uVar22;
          } while (bVar53);
          if (uVar22 == 1) goto LAB_1000ac78;
        }
        do {
          uVar20 = uVar22 - 1;
          local_3ee[1] = 0;
          bVar33 = local_3ee[uVar22 + 0xf0];
          uVar15 = strlen((char *)&local_118);
          if (uVar15 < 0x20) {
            if ((bVar33 != 0) && (uVar15 != 0x1f)) {
              uVar17 = uVar15;
              pbVar48 = local_3ee;
              do {
                pbVar48 = pbVar48 + 1;
                bVar34 = *pbVar48;
                uVar15 = uVar17 + 1;
                *(byte *)((int)&local_118 + uVar17) = bVar33;
                if (0x1d < uVar17) break;
                uVar17 = uVar15;
                bVar33 = bVar34;
              } while (bVar34 != 0);
            }
            *(char *)((int)&local_118 + uVar15) = '\0';
          }
          uVar22 = uVar20;
        } while (uVar20 != 0);
        uVar15 = strlen((char *)&local_118);
        if (uVar15 < 0x20) {
          iVar39 = 0x1f;
          if (uVar15 != 0x1f) {
            *(char *)((int)&local_118 + uVar15) = ':';
            iVar39 = uVar15 + 1;
          }
          *(char *)((int)&local_118 + iVar39) = '\0';
        }
        if (local_1fc == 0) {
          local_3ee[0xf1] = 0x30;
LAB_1000ad88:
          uVar22 = 2;
          local_3ee[0xf2] = 0x30;
        }
        else {
          uVar20 = local_1fc;
          uVar37 = 0;
          do {
            uVar22 = uVar37 + 1;
            local_3ee[uVar37 + 0xf1] = (char)uVar20 + (char)(uVar20 / 10) * -10 | 0x30;
            if (10 < uVar37) break;
            bVar53 = 9 < uVar20;
            uVar20 = uVar20 / 10;
            uVar37 = uVar22;
          } while (bVar53);
          if (uVar22 == 1) goto LAB_1000ad88;
        }
        do {
          uVar20 = uVar22 - 1;
          local_3ee[1] = 0;
          bVar33 = local_3ee[uVar22 + 0xf0];
          uVar15 = strlen((char *)&local_118);
          if (uVar15 < 0x20) {
            if ((bVar33 != 0) && (uVar15 != 0x1f)) {
              uVar17 = uVar15;
              pbVar48 = local_3ee;
              do {
                pbVar48 = pbVar48 + 1;
                bVar34 = *pbVar48;
                uVar15 = uVar17 + 1;
                *(byte *)((int)&local_118 + uVar17) = bVar33;
                if (0x1d < uVar17) break;
                uVar17 = uVar15;
                bVar33 = bVar34;
              } while (bVar34 != 0);
            }
            *(char *)((int)&local_118 + uVar15) = '\0';
          }
          uVar22 = uVar20;
        } while (uVar20 != 0);
        uVar15 = strlen((char *)&local_118);
        if (uVar15 < 0x20) {
          iVar39 = 0x1f;
          if (uVar15 != 0x1f) {
            *(char *)((int)&local_118 + uVar15) = ':';
            iVar39 = uVar15 + 1;
          }
          *(char *)((int)&local_118 + iVar39) = '\0';
        }
        if (local_1f8 == 0) {
          local_3ee[0xf1] = 0x30;
LAB_1000ae98:
          uVar22 = 2;
          local_3ee[0xf2] = 0x30;
        }
        else {
          uVar20 = local_1f8;
          uVar37 = 0;
          do {
            uVar22 = uVar37 + 1;
            local_3ee[uVar37 + 0xf1] = (char)uVar20 + (char)(uVar20 / 10) * -10 | 0x30;
            if (10 < uVar37) break;
            bVar53 = 9 < uVar20;
            uVar20 = uVar20 / 10;
            uVar37 = uVar22;
          } while (bVar53);
          if (uVar22 == 1) goto LAB_1000ae98;
        }
        do {
          uVar20 = uVar22 - 1;
          local_3ee[1] = 0;
          bVar33 = local_3ee[uVar22 + 0xf0];
          uVar15 = strlen((char *)&local_118);
          if (uVar15 < 0x20) {
            if ((bVar33 != 0) && (uVar15 != 0x1f)) {
              uVar17 = uVar15;
              pbVar48 = local_3ee;
              do {
                pbVar48 = pbVar48 + 1;
                bVar34 = *pbVar48;
                uVar15 = uVar17 + 1;
                *(byte *)((int)&local_118 + uVar17) = bVar33;
                if (0x1d < uVar17) break;
                uVar17 = uVar15;
                bVar33 = bVar34;
              } while (bVar34 != 0);
            }
            *(char *)((int)&local_118 + uVar15) = '\0';
          }
          uVar22 = uVar20;
        } while (uVar20 != 0);
      }
      else {
LAB_10007608:
        local_118 = (0x2d31302d30373931U);
        local_110 = (0x30303a3030203130U);
        uStack_108 = 0x30303a;
      }
      recovered_1001f580(4,-1,str_10023e71,str_10023e81,(char *)&local_118);
      puVar16 = DAT_1002490c;
    }
    else {
      uVar20 = recovered_1001bd00((int)puVar25,(int)puVar51);
      iVar39 = DAT_1002430c;
      puVar16 = DAT_1002490c;
      if ((int)uVar20 < 0) {
        puVar44 = DAT_100290dc;
        if (0 < (int)DAT_100290dc) {
          do {
            puVar49 = (uint *)DAT_10024914[(int)((int)puVar44 + -1)];
            pcVar27 = (char *)(DAT_1002430c + (int)puVar49 * 0xd9c);
            cVar10 = *pcVar27;
            bVar53 = cVar10 == '\x01';
            if (bVar53) {
              cVar10 = pcVar27[1];
            }
            if (bVar53 && cVar10 == '\x01') {
              iVar23 = 0x18;
              puVar38 = *(uint **)(pcVar27 + 0x58);
              if (pcVar27[2] == '\0') {
                iVar23 = *(int *)(pcVar27 + 100);
              }
              bVar54 = SBORROW4((int)puVar38,(int)puVar25);
              iVar52 = (int)puVar38 - (int)puVar25;
              bVar53 = puVar38 == puVar25;
              if ((int)puVar38 <= (int)puVar25) {
                unaff_r5 = *(uint **)(pcVar27 + 0x5c);
                bVar54 = SBORROW4((int)unaff_r5,(int)puVar51);
                iVar52 = (int)unaff_r5 - (int)puVar51;
                bVar53 = unaff_r5 == puVar51;
              }
              if (bVar53 || iVar52 < 0 != bVar54) {
                puVar47 = (uint *)((int)puVar38 + *(int *)(pcVar27 + 0x60));
                bVar54 = SBORROW4((int)puVar47,(int)puVar25);
                iVar52 = (int)puVar47 - (int)puVar25;
                bVar53 = puVar47 == puVar25;
                if ((int)puVar25 < (int)puVar47) {
                  puVar47 = (uint *)((int)unaff_r5 + iVar23);
                  bVar54 = SBORROW4((int)puVar47,(int)puVar51);
                  iVar52 = (int)puVar47 - (int)puVar51;
                  bVar53 = puVar47 == puVar51;
                }
                if (!bVar53 && iVar52 < 0 == bVar54) {
                  if (-1 < (int)puVar49) {
                    if (*(int *)(pcVar27 + 0x10) != 0) goto LAB_10006f0c;
                    pcVar13 = &DAT_10024918;
                    puVar16 = unaff_r5 + 0xf;
                    puVar44 = (uint *)((int)unaff_r5 + 0x22);
                    iVar52 = 0;
                    iVar23 = 0;
                    goto LAB_100090dc;
                  }
                  break;
                }
              }
            }
            bVar53 = (uint *)0x1 < puVar44;
            puVar44 = (uint *)((int)puVar44 + -1);
          } while (bVar53);
        }
        uVar20 = 0;
        pbVar48 = &DAT_100256c8;
        iVar23 = 0;
        iVar39 = (DAT_10024130 + -0x18) / 0x52;
        if (iVar39 < 2) {
          iVar39 = 1;
        }
        do {
          if (*pbVar48 == 1) {
            iVar21 = recovered_10000b48(iVar23,iVar39);
            iVar36 = (iVar23 - iVar21 * iVar39) * 0x52;
            puVar16 = (uint *)(iVar36 + 0xc);
            bVar54 = SBORROW4((int)puVar16,(int)puVar25);
            iVar52 = (int)puVar16 - (int)puVar25;
            bVar53 = puVar16 == puVar25;
            if ((int)puVar16 <= (int)puVar25) {
              iVar21 = iVar21 * 0x4e;
              puVar16 = (uint *)(iVar21 + 0x24);
              bVar54 = SBORROW4((int)puVar16,(int)puVar51);
              iVar52 = (int)puVar16 - (int)puVar51;
              bVar53 = puVar16 == puVar51;
            }
            if (bVar53 || iVar52 < 0 != bVar54) {
              puVar16 = (uint *)(iVar36 + 0x56);
              bVar54 = SBORROW4((int)puVar16,(int)puVar25);
              iVar52 = (int)puVar16 - (int)puVar25;
              bVar53 = puVar16 == puVar25;
              if ((int)puVar25 < (int)puVar16) {
                puVar16 = (uint *)(iVar21 + 0x66);
                bVar54 = SBORROW4((int)puVar16,(int)puVar51);
                iVar52 = (int)puVar16 - (int)puVar51;
                bVar53 = puVar16 == puVar51;
              }
              if (!bVar53 && iVar52 < 0 == bVar54) {
                puVar16 = DAT_1002490c;
                if (uVar20 < 0x18) {
                  memset(&DAT_10024374,0,0x59c);
                  PF_PART8(auVar1, 8) = SUB168((uint128)0x0,8);
                  PF_PART8(auVar1, 0) = 0xffffffffffffffff;
                  auVar1 = auVar1 << 0x40 | auVar1;
                  _DAT_10024380 = *(uint **)auVar1;
                  (*(uint32_t *)(pf_module_state+0xd7cU)) = PF_PART4(auVar1, 4);
                  (*(uint32_t *)(pf_module_state+0xd80U)) = PF_PART4(auVar1, 8);
                  DAT_1002438c = PF_PART4(auVar1, 12);
                  uVar50 = *(undefined4 *)(pbVar48 + 0x11c);
                  DAT_10024374 = '\x01';
                  _DAT_10024378 = puVar25;
                  DAT_1002437c = puVar51;
                  DAT_10024390 = uVar20;
                  uVar20 = recovered_100130e8(pbVar48,extraout_r1);
                  recovered_10021278(0xffffffff,0xfffffc18,pbVar48 + 0x29,pbVar48 + 1,uVar50,uVar20)
                  ;
                  if ((int)DAT_1002490c < 0x12) {
                    *(undefined4 *)(&DAT_10024588 + (int)DAT_1002490c * 4) = 1;
                    *(undefined4 *)(&DAT_100245d0 + (int)DAT_1002490c * 4) = 0xffffffff;
                    iVar39 = (int)DAT_1002490c * 0x2a;
                    *(undefined4 *)(&DAT_10024618 + iVar39) = 0x6e65704f;
                    (&DAT_1002461c)[iVar39] = 0;
                    puVar16 = (uint *)((int)DAT_1002490c + 1);
                    bVar53 = (int)DAT_1002490c < 0x11;
                    DAT_1002490c = puVar16;
                    if (bVar53) {
                      *(undefined4 *)(&DAT_10024588 + (int)puVar16 * 4) = 0xb;
                      *(undefined4 *)(&DAT_100245d0 + (int)DAT_1002490c * 4) = 0xffffffff;
                      iVar39 = (int)DAT_1002490c * 0x2a;
                      *(undefined4 *)(&DAT_10024618 + iVar39) = 0x6f666e49;
                      (&DAT_1002461c)[iVar39] = 0;
                      DAT_1002490c = (uint *)((int)DAT_1002490c + 1);
                    }
                  }
                  recovered_10020b60();
                  if ((DAT_10024399 == '\x01') && ((int)DAT_1002490c < 0x12)) {
                    *(undefined4 *)(&DAT_10024588 + (int)DAT_1002490c * 4) = 5;
                    *(undefined4 *)(&DAT_100245d0 + (int)DAT_1002490c * 4) = 0xffffffff;
                    iVar39 = (int)DAT_1002490c * 0x2a;
                    *(undefined4 *)(&DAT_10024618 + iVar39) = 0x20746553;
                    (&DAT_10024626)[iVar39] = 0;
                    *(undefined2 *)(&DAT_10024624 + iVar39) = 0x646e;
                    *(undefined4 *)(&DAT_10024620 + iVar39) = 0x756f7267;
                    *(undefined4 *)(&DAT_1002461c + iVar39) = 0x6b636142;
                    DAT_1002490c = (uint *)((int)DAT_1002490c + 1);
                  }
                  puVar16 = DAT_1002490c;
                  if ((DAT_1002439b == '\x01') && ((int)DAT_1002490c < 0x12)) {
                    *(undefined4 *)(&DAT_10024588 + (int)DAT_1002490c * 4) = 0x17;
                    *(undefined4 *)(&DAT_100245d0 + (int)DAT_1002490c * 4) = 0xffffffff;
                    uVar6 = (0x746e6f4620706f74U);
                    iVar39 = (int)DAT_1002490c * 0x2a;
                    *(undefined8 *)(&DAT_10024618 + iVar39) = (0x6b73654420746553U);
                    *(undefined8 *)(&DAT_10024620 + iVar39) = uVar6;
                    (&DAT_10024628)[iVar39] = 0;
                    puVar16 = (uint *)((int)DAT_1002490c + 1);
                  }
                }
                break;
              }
            }
            iVar23 = iVar23 + 1;
          }
          uVar20 = uVar20 + 1;
          pbVar48 = pbVar48 + 0x124;
          puVar16 = DAT_1002490c;
        } while (uVar20 != 0x18);
      }
      else if ((uVar20 < 0x12) && (*(char *)(DAT_10024910 + uVar20 * 300) == '\x01')) {
        memset(&DAT_10024374,0,0x59c);
        DAT_10024390 = 0xffffffff;
        DAT_1002438c = -1;
        (*(uint32_t *)(pf_module_state+0xd7cU)) = 0xffffffff;
        _DAT_10024380 = (uint *)0xffffffff;
        DAT_10024374 = '\x01';
        _DAT_10024378 = puVar25;
        DAT_1002437c = puVar51;
        (*(uint32_t *)(pf_module_state+0xd80U)) = uVar20;
        if ((int)DAT_1002490c < 0x12) {
          *(undefined4 *)(&DAT_10024588 + (int)DAT_1002490c * 4) = 2;
          *(undefined4 *)(&DAT_100245d0 + (int)DAT_1002490c * 4) = 0xffffffff;
          iVar39 = (int)DAT_1002490c * 0x2a;
          *(undefined4 *)(&DAT_10024618 + iVar39) = 0x2077654e;
          *(undefined2 *)(&DAT_10024620 + iVar39) = 0x776f;
          DAT_1002490c = (uint *)((int)DAT_1002490c + 1);
          (&DAT_10024622)[iVar39] = 0;
          *(undefined4 *)(&DAT_1002461c + iVar39) = 0x646e6957;
        }
        iVar39 = DAT_1002430c;
        iVar52 = 0;
        iVar23 = DAT_1002430c + 0x19;
        puVar44 = DAT_1002490c;
        do {
          pbVar48 = (byte *)(iVar39 + iVar52 * 0xd9c);
          uVar37 = (uint)*pbVar48;
          bVar53 = uVar37 == 1;
          if (bVar53) {
            uVar37 = *(uint *)(pbVar48 + 0x14);
          }
          if ((bVar53 && uVar37 == uVar20) && ((int)puVar44 < 0x12)) {
            *(undefined4 *)(&DAT_10024588 + (int)puVar44 * 4) = 3;
            *(int *)(&DAT_100245d0 + (int)DAT_1002490c * 4) = iVar52;
            puVar16 = DAT_1002490c;
            bVar33 = pbVar48[0x18];
            if (bVar33 == 0) {
              uVar37 = 0;
            }
            else {
              uVar22 = 0;
              do {
                uVar37 = uVar22 + 1;
                (&DAT_10024618)[uVar22 + (int)puVar16 * 0x2a] = bVar33;
                if (0x28 < uVar37) break;
                bVar33 = *(byte *)(iVar23 + uVar22);
                uVar22 = uVar37;
              } while (bVar33 != 0);
            }
            (&DAT_10024618)[uVar37 + (int)puVar16 * 0x2a] = 0;
            puVar44 = (uint *)((int)DAT_1002490c + 1);
            DAT_1002490c = puVar44;
          }
          iVar52 = iVar52 + 1;
          iVar23 = iVar23 + 0xd9c;
        } while (iVar52 != 0x14);
        puVar16 = DAT_1002490c;
        if ((int)puVar44 < 0x12) {
          *(undefined4 *)(&DAT_10024588 + (int)puVar44 * 4) = 4;
          *(undefined4 *)(&DAT_100245d0 + (int)DAT_1002490c * 4) = 0xffffffff;
          iVar39 = (int)DAT_1002490c * 0x2a;
          iVar23 = uVar20 * 300 + DAT_10024910;
          *(undefined4 *)(&DAT_10024618 + iVar39) = 0x6c6c694b;
          (&DAT_10024624)[iVar39] = 0;
          *(undefined4 *)(&DAT_1002461c + iVar39) = 0x6e695720;
          *(undefined4 *)(&DAT_10024620 + iVar39) = 0x73776f64;
          puVar16 = (uint *)((int)DAT_1002490c + 1);
          if ((*(int *)(iVar23 + 4) == 5) && ((int)DAT_1002490c < 0x11)) {
            DAT_1002490c = puVar16;
            *(undefined4 *)(&DAT_10024588 + (int)puVar16 * 4) = 0x13;
            *(undefined4 *)(&DAT_100245d0 + (int)DAT_1002490c * 4) = 0xffffffff;
            uVar6 = (0x6b636f44206d6f72U);
            iVar39 = (int)DAT_1002490c * 0x2a;
            *(undefined8 *)(&DAT_10024618 + iVar39) = (0x662065766f6d6552U);
            *(undefined8 *)(&DAT_10024620 + iVar39) = uVar6;
            (&DAT_10024628)[iVar39] = 0;
            puVar16 = (uint *)((int)DAT_1002490c + 1);
          }
        }
      }
    }
  }
LAB_10006f0c:
  DAT_1002490c = puVar16;
  iVar23 = DAT_10024140;
  iVar39 = DAT_10024134;
  if ((uVar19 == 0) || (DAT_10024140 < 0)) {
    if ((uVar19 != 0) && (-1 < (int)DAT_10024138)) {
      iVar21 = (int)DAT_10024138 * 0xd9c + DAT_1002430c;
      iVar36 = (int)puVar25 - DAT_1012e438;
      iVar52 = (DAT_10024130 - *(int *)(iVar21 + 0x60)) + -4;
      if (iVar36 < iVar52) {
        iVar52 = iVar36;
      }
      if (iVar36 < 4) {
        iVar52 = 4;
      }
      iVar36 = -0x5a;
      *(int *)(iVar21 + 0x58) = iVar52;
      if (*(int *)(iVar21 + 0x10) == 6) {
        iVar36 = -0x1c;
      }
      iVar28 = (int)puVar51 - DAT_1012e43c;
      iVar52 = iVar36 + iVar39;
      if (iVar28 < iVar36 + iVar39) {
        iVar52 = iVar28;
      }
      if (iVar28 < 0x1a) {
        iVar52 = 0x1a;
      }
      *(int *)(iVar21 + 0x5c) = iVar52;
    }
    uVar20 = uVar19 & iVar23 < 0;
    if (((uVar20 == 1) && (-1 < DAT_100242e4)) &&
       (pcVar27 = (char *)(DAT_1002430c + DAT_100242e4 * 0xd9c), *pcVar27 == '\x01')) {
      iVar39 = *(int *)(pcVar27 + 0x10);
      if (iVar39 == 0) {
        iVar39 = *(int *)(pcVar27 + 100);
        uVar20 = iVar39 - 0x6a;
        iVar21 = 1;
        iVar52 = (int)(((ulonglong)uVar20 << 0x20) + (longlong)(int)uVar20 * -0x22983759 >> 0x20);
        iVar23 = -1;
        if (0x49 < (int)uVar20) {
          iVar21 = (iVar52 >> 6) - (iVar52 >> 0x1f);
        }
        iVar52 = (int)(((ulonglong)(*(int *)(pcVar27 + 0x60) - 0x26U) << 0x20) +
                       (longlong)(int)(*(int *)(pcVar27 + 0x60) - 0x26U) * -0x2df2df2d >> 0x20);
        iVar28 = ((int)((ulonglong)((longlong)(int)uVar20 * 0x22983759) >> 0x20) - iVar39) + 0x6a;
        iVar36 = (iVar52 >> 6) - (iVar52 >> 0x1f);
        iVar52 = 1;
        if (1 < iVar36) {
          iVar52 = iVar36;
        }
        if (0x49 < (int)uVar20) {
          iVar23 = (iVar28 >> 6) - (iVar28 >> 0x1f);
        }
        iVar36 = *(int *)(pcVar27 + 0xaf0) + 2;
        iVar28 = iVar39 + -0x88;
        uVar20 = iVar52 * iVar23 + iVar36;
        if (iVar39 + -0x84 < 0x16) {
          iVar28 = 0x12;
        }
        iVar39 = iVar28;
        if (((-2 < *(int *)(pcVar27 + 0xaf0)) && (iVar52 * iVar21 < iVar36)) && (0 < (int)uVar20)) {
          iVar39 = recovered_10000b48(iVar52 * iVar21 * iVar28,iVar36);
          if (iVar39 < 0x13) {
            iVar39 = 0x12;
          }
          iVar36 = extraout_r1_00;
          if (iVar28 <= iVar39) {
            iVar39 = iVar28;
          }
        }
        bVar53 = uVar20 == 1;
        if (0 < (int)uVar20) {
          iVar36 = iVar28 - iVar39;
        }
        iVar39 = uVar20 - 1;
        if ((int)uVar20 >= 1) {
          bVar53 = iVar36 == 0;
          iVar39 = iVar36;
        }
        if (bVar53 || iVar39 < 0 != ((int)uVar20 < 1 && SBORROW4(uVar20,1))) {
LAB_10008efc:
          pcVar27[0xaf8] = '\0';
          pcVar27[0xaf9] = '\0';
          pcVar27[0xafa] = '\0';
          pcVar27[0xafb] = '\0';
        }
        else {
          iVar39 = recovered_10000b48(((int)puVar51 - DAT_1012e448) * uVar20,iVar36);
          uVar37 = iVar39 + DAT_1012e44c;
          if ((int)uVar37 <= (int)uVar20) {
            uVar20 = uVar37 & ~((int)uVar37 >> 0x1f);
          }
          *(uint *)(pcVar27 + 0xaf8) = uVar20;
        }
      }
      else {
        bVar53 = iVar39 == 3;
        if (bVar53) {
          iVar39 = *(int *)(pcVar27 + 0xb00);
        }
        if (!bVar53 || iVar39 != 1) goto LAB_100070dc;
        iVar52 = *(int *)(pcVar27 + 0x5c);
        iVar39 = *(int *)(pcVar27 + 100);
        recovered_1001a1e4((int *)&local_118,(int)pcVar27);
        uVar20 = DAT_100290e4;
        iVar23 = iVar52 + iVar39 + -0x92;
        iVar39 = iVar52 + 0x114;
        if (iVar52 + 0x114 < iVar23) {
          iVar39 = iVar23;
        }
        iVar39 = iVar39 - iVar52;
        uVar37 = (iVar39 + -0x102) / 0x12;
        if ((int)uVar37 < 2) {
          uVar37 = 1;
        }
        if (iVar39 + -0xee < 0x26) {
          uVar37 = 1;
        }
        uVar22 = DAT_100290e4 - uVar37;
        if (DAT_100290e4 < uVar37) {
          uVar22 = 0;
        }
        iVar23 = iVar39 + -0x12d;
        if (iVar39 + -0xee < 0x26) {
          iVar23 = -0x19;
        }
        iVar39 = iVar23 + -2;
        if (iVar23 < 0x14) {
          iVar39 = 0x12;
        }
        bVar53 = uVar22 == 1;
        if (0 < (int)uVar22) {
          iVar39 = iVar39 - PF_PART4(local_110, 4);
        }
        iVar23 = uVar22 - 1;
        if ((int)uVar22 >= 1) {
          bVar53 = iVar39 == 0;
          iVar23 = iVar39;
        }
        if (bVar53 || iVar23 < 0 != ((int)uVar22 < 1 && SBORROW4(uVar22,1))) goto LAB_10008efc;
        iVar39 = recovered_10000b48(((int)puVar51 - DAT_1012e448) * uVar22,iVar39);
        uVar37 = iVar39 + DAT_1012e44c;
        *(uint *)(pcVar27 + 0xaf8) = uVar37;
        if (uVar20 == 0) {
          pcVar27[0xafc] = '\0';
          pcVar27[0xaf8] = '\0';
          pcVar27[0xaf9] = '\0';
          pcVar27[0xafa] = '\0';
          pcVar27[0xafb] = '\0';
          pcVar27[0xaf4] = '\0';
          pcVar27[0xaf5] = '\0';
          pcVar27[0xaf6] = '\0';
          pcVar27[0xaf7] = '\0';
        }
        else {
          if ((pcVar27[0xafc] != '\x01') || (uVar20 <= *(uint *)(pcVar27 + 0xaf4))) {
            pcVar27[0xafc] = '\x01';
            pcVar27[0xaf4] = '\0';
            pcVar27[0xaf5] = '\0';
            pcVar27[0xaf6] = '\0';
            pcVar27[0xaf7] = '\0';
          }
          if ((int)uVar37 < 0) {
            pcVar27[0xaf8] = '\0';
            pcVar27[0xaf9] = '\0';
            pcVar27[0xafa] = '\0';
            pcVar27[0xafb] = '\0';
          }
          else if (uVar22 < uVar37) {
            *(uint *)(pcVar27 + 0xaf8) = uVar22;
          }
        }
      }
    }
    else {
LAB_100070dc:
      if (uVar20 == 0) goto LAB_10007104;
    }
    cVar10 = DAT_10027414;
    if (DAT_10027414 == '\x01') {
      cVar10 = DAT_10027415;
    }
    if ((DAT_10027414 == '\x01' && cVar10 == '\0') &&
       (0x24 < (uint)(((int)puVar51 - (int)DAT_10027424) * ((int)puVar51 - (int)DAT_10027424) +
                     ((int)puVar25 - (int)DAT_10027420) * ((int)puVar25 - (int)DAT_10027420)))) {
      _DAT_10027414 = CONCAT11(1,DAT_10027414);
    }
  }
  else if ((DAT_1002430c != 0) &&
          (pcVar27 = (char *)(DAT_10024140 * 0xd9c + DAT_1002430c), *pcVar27 == '\x01')) {
    cVar10 = pcVar27[2];
    bVar53 = cVar10 == '\0';
    if (bVar53) {
      cVar10 = pcVar27[3];
    }
    if (bVar53 && cVar10 == '\0') {
      uVar20 = *(uint *)(pcVar27 + 0x10);
      if (uVar20 < 7) {
        pcVar13 = *(char **)(&DAT_10023f8c + uVar20 * 4);
        pcVar35 = *(char **)(&DAT_10023f70 + uVar20 * 4);
      }
      else {
        pcVar13 = (char *)0x6e;
        pcVar35 = (char *)0xb4;
      }
      DAT_1012e3fc = (char *)((DAT_10024130 - *(int *)(pcVar27 + 0x58)) + -4);
      pcVar46 = (char *)((int)puVar25 + (1 - *(int *)(pcVar27 + 0x58)));
      if ((int)DAT_1012e3fc <= (int)pcVar35) {
        DAT_1012e3fc = pcVar35;
      }
      if ((int)pcVar46 < (int)DAT_1012e3fc) {
        DAT_1012e3fc = pcVar46;
      }
      if ((int)pcVar46 < (int)pcVar35) {
        DAT_1012e3fc = pcVar35;
      }
      iVar39 = -0x42;
      if (uVar20 == 6) {
        iVar39 = -4;
      }
      DAT_1012e400 = (char *)((DAT_10024134 + iVar39) - *(int *)(pcVar27 + 0x5c));
      if ((int)DAT_1012e400 <= (int)pcVar13) {
        DAT_1012e400 = pcVar13;
      }
      pcVar27 = (char *)((int)puVar51 + (1 - *(int *)(pcVar27 + 0x5c)));
      if ((int)pcVar27 < (int)DAT_1012e400) {
        DAT_1012e400 = pcVar27;
      }
      if ((int)pcVar27 < (int)pcVar13) {
        DAT_1012e400 = pcVar13;
      }
    }
  }
LAB_10007104:
  iVar39 = DAT_1002430c;
  puVar18 = DAT_100242dc;
  if ((int)DAT_100242dc < 0) {
    pcVar27 = (char *)0x0;
    goto LAB_100071fc;
  }
  pbVar48 = (byte *)(DAT_1002430c + (int)DAT_100242dc * 0xd9c);
  uVar20 = (uint)*pbVar48;
  bVar53 = uVar20 == 1;
  if (bVar53) {
    uVar20 = *(uint *)(pbVar48 + 0x10);
  }
  if (!bVar53 || uVar20 != 4) goto switchD_10007c70_default;
  uVar20 = DAT_1012e408;
  if (((((((((int)DAT_1012e408 < 0x20) && (uVar20 = 0x61, DAT_1012e40e == '\0')) &&
          (uVar20 = 0x62, DAT_1012e40f == '\0')) &&
         ((uVar20 = 99, DAT_1012e410 == '\0' && (uVar20 = 100, DAT_1012e411 == '\0')))) &&
        (uVar20 = 0x65, DAT_1012e412 == '\0')) &&
       ((uVar20 = 0x66, DAT_1012e413 == '\0' && (uVar20 = 0x67, DAT_1012e414 == '\0')))) &&
      ((((uVar20 = 0x68, DAT_1012e415 == '\0' &&
         (((uVar20 = 0x69, DAT_1012e416 == '\0' && (uVar20 = 0x6a, DAT_1012e417 == '\0')) &&
          (uVar20 = 0x6b, DAT_1012e418 == '\0')))) &&
        (((uVar20 = 0x6c, DAT_1012e419 == '\0' && (uVar20 = 0x6d, DAT_1012e41a == '\0')) &&
         (uVar20 = 0x6e, DAT_1012e41b == '\0')))) &&
       (((uVar20 = 0x6f, DAT_1012e41c == '\0' && (uVar20 = 0x70, DAT_1012e41d == '\0')) &&
        ((uVar20 = 0x71, DAT_1012e41e == '\0' &&
         (((uVar20 = 0x72, DAT_1012e41f == '\0' && (uVar20 = 0x73, DAT_1012e420 == '\0')) &&
          (uVar20 = 0x74, DAT_1012e421 == '\0')))))))))) &&
     (((uVar20 = 0x75, DAT_1012e422 == '\0' && (uVar20 = 0x76, DAT_1012e423 == '\0')) &&
      (((uVar20 = 0x77, DAT_1012e424 == '\0' &&
        (((((uVar20 = 0x78, DAT_1012e425 == '\0' && (uVar20 = 0x79, DAT_1012e426 == '\0')) &&
           ((uVar20 = 0x7a, DAT_1012e427 == '\0' &&
            ((((uVar20 = 0x30, DAT_1012e428 == '\0' && (uVar20 = 0x31, DAT_1012e429 == '\0')) &&
              (uVar20 = 0x32, DAT_1012e42a == '\0')) &&
             ((uVar20 = 0x33, DAT_1012e42b == '\0' && (uVar20 = 0x34, DAT_1012e42c == '\0'))))))))
          && (uVar20 = 0x35, DAT_1012e42d == '\0')) &&
         ((uVar20 = 0x36, DAT_1012e42e == '\0' && (uVar20 = 0x37, DAT_1012e42f == '\0')))))) &&
       (((uVar20 = 0x38, DAT_1012e430 == '\0' &&
         (((uVar20 = 0x39, DAT_1012e431 == '\0' && (uVar20 = 0x2d, DAT_1012e432 == '\0')) &&
          (uVar20 = 0x2e, DAT_1012e433 == '\0')))) && (uVar20 = 0, DAT_1012e434 != '\0')))))))) {
    uVar20 = 0x20;
  }
  if (DAT_1012e40c == '\x01') {
    uVar15 = strlen((char *)(pbVar48 + 0xa61));
    if (uVar15 != 0) {
      (pbVar48 + 0xa61)[uVar15 - 1] = 0;
    }
  }
  if ((uVar20 & 0xff) != 0) {
    pbVar42 = pbVar48 + 0xa61;
    uVar15 = strlen((char *)pbVar42);
    if (uVar15 + 1 < 0x80) {
      pbVar42[uVar15] = (byte)uVar20;
      pbVar42[uVar15 + 1] = 0;
    }
  }
  if (DAT_1012e40d != '\x01') goto switchD_10007c70_default;
  switch((uintptr_t)(*(undefined4 *)(pbVar48 + 0xae4))) {
  case 1:
    bVar33 = pbVar48[0x78];
    uVar20 = 0;
    uVar37 = 0;
    if (bVar33 != 0) {
      uVar22 = 0;
      do {
        uVar37 = uVar22 + 1;
        local_3ee[uVar22 + 0xf1] = bVar33;
        if (0xef < uVar37) break;
        bVar33 = *(byte *)((int)puVar18 * 0xd9c + iVar39 + 0x79 + uVar22);
        uVar22 = uVar37;
      } while (bVar33 != 0);
    }
    (local_3ee + 0xf1)[uVar37] = 0;
    if (local_3ee[0xf1] != 0) {
      uVar20 = 0;
      bVar33 = local_3ee[0xf1];
      do {
        bVar34 = local_3ee[uVar20 + 0xf2];
        *(byte *)((int)&local_118 + uVar20) = bVar33;
        uVar20 = uVar20 + 1;
        if (0xef < uVar20) break;
        bVar33 = bVar34;
      } while (bVar34 != 0);
    }
    pbVar42 = (byte *)0x0;
    *(byte *)((int)&local_118 + uVar20) = 0;
    pbVar24 = local_3ee;
    if ((byte)local_118 != 0) {
      pbVar32 = (byte *)&local_118;
      bVar33 = (byte)local_118;
      do {
        bVar34 = pbVar32[1];
        if (bVar33 == 0x2f) {
          pbVar42 = pbVar32;
        }
        pbVar32 = pbVar32 + 1;
        bVar33 = bVar34;
      } while (bVar34 != 0);
      if (pbVar42 != (byte *)0x0) {
        uVar20 = 0;
        *pbVar42 = 0;
        if ((byte)local_118 != 0) {
          uVar20 = 0;
          bVar33 = (byte)local_118;
          do {
            bVar34 = *(byte *)((int)&local_118 + uVar20 + 1);
            local_3ee[uVar20] = bVar33;
            uVar20 = uVar20 + 1;
            if (0xef < uVar20) break;
            bVar33 = bVar34;
          } while (bVar34 != 0);
        }
        pbVar24 = local_3ee + uVar20;
      }
    }
    pbVar32 = (byte *)0x0;
    *pbVar24 = 0;
    pbVar24 = pbVar48 + 0xa61;
    recovered_10013e2c(local_3ee,(char *)pbVar24,(char *)&local_20c);
    pbVar42 = (byte *)0x0;
    if (local_3ee[0xf1] != 0) {
      pbVar45 = local_3ee + 0xf1;
      bVar33 = local_3ee[0xf1];
      do {
        bVar34 = pbVar45[1];
        if (bVar33 == 0x2f) {
          pbVar42 = pbVar45;
        }
        pbVar45 = pbVar45 + 1;
        bVar33 = bVar34;
      } while (bVar34 != 0);
    }
    pbVar45 = local_3ee + 0xf1;
    if (pbVar42 != (byte *)0x0) {
      pbVar45 = pbVar42 + 1;
    }
    if (*pbVar45 != 0) {
      pbVar32 = (byte *)0x0;
      pbVar42 = pbVar45;
      bVar33 = *pbVar45;
      do {
        bVar34 = pbVar42[1];
        if (bVar33 == 0x2f) {
          pbVar32 = pbVar42;
        }
        pbVar42 = pbVar42 + 1;
        bVar33 = bVar34;
      } while (bVar34 != 0);
    }
    pbVar42 = (byte *)0x0;
    if (pbVar32 != (byte *)0x0) {
      pbVar45 = pbVar32 + 1;
    }
    pbVar32 = (byte *)0x0;
    if (*pbVar45 != 0) {
      bVar33 = *pbVar45;
      do {
        bVar34 = pbVar45[1];
        if (bVar33 == 0x2e) {
          pbVar32 = pbVar45;
        }
        pbVar45 = pbVar45 + 1;
        bVar33 = bVar34;
      } while (bVar34 != 0);
    }
    if (pbVar32 == (byte *)0x0) {
      pbVar32 = &DAT_10023774;
    }
    if (*pbVar24 != 0) {
      pbVar42 = (byte *)0x0;
      pbVar45 = pbVar24;
      bVar33 = *pbVar24;
      do {
        bVar34 = pbVar45[1];
        if (bVar33 == 0x2f) {
          pbVar42 = pbVar45;
        }
        pbVar45 = pbVar45 + 1;
        bVar33 = bVar34;
      } while (bVar34 != 0);
    }
    if (pbVar42 != (byte *)0x0) {
      pbVar24 = pbVar42 + 1;
    }
    pbVar42 = (byte *)0x0;
    if (*pbVar24 != 0) {
      bVar33 = *pbVar24;
      do {
        bVar34 = pbVar24[1];
        if (bVar33 == 0x2e) {
          pbVar42 = pbVar24;
        }
        pbVar24 = pbVar24 + 1;
        bVar33 = bVar34;
      } while (bVar34 != 0);
    }
    pbVar24 = &DAT_10023774;
    if (pbVar42 != (byte *)0x0) {
      pbVar24 = pbVar42;
    }
    do {
      uVar37 = (uint)*pbVar32;
      uVar20 = (uint)*pbVar24;
      if (uVar37 == 0 || uVar20 == 0) {
        if (uVar37 == uVar20) {
          iVar23 = *(int *)(pbVar48 + 0x25c);
          iVar39 = Ram40010800;
          if ((iVar39 == 0x50414d57) && (iVar39 = Ram40010804, iVar39 != 0)) {
            uVar20 = Ram40010808;
            bVar54 = 0xb < uVar20;
            bVar53 = uVar20 == 0xc;
            if (bVar54) {
              uVar20 = Ram40010808;
              bVar53 = uVar20 == 0xdb;
            }
            if ((bVar54 && 0xda < uVar20) && !bVar53) {
              pcVar41 = (code *)UINT_400108d8;
              if (pcVar41 == (code *)0x0) goto LAB_1000a484;
              pbVar24 = (byte *)&local_20c;
              pbVar42 = local_3ee + 0xf1;
              goto override_prt_1000a480_ae991ece;
            }
          }
          iVar39 = Ram40010800;
          if ((iVar39 == 0x50414d57) && (iVar39 = Ram40010804, iVar39 != 0)) {
            uVar20 = Ram40010808;
            bVar53 = 0xb < uVar20;
            if (bVar53) {
              uVar20 = Ram40010808;
            }
            if ((bVar53 && 0x8b < uVar20) &&
               (pcVar41 = (code *)UINT_40010888, pcVar41 != (code *)0x0)) {
              (*pcVar41)((char *)(local_3ee + 0xf1),(char *)&local_20c);
            }
          }
          goto LAB_1000a484;
        }
        break;
      }
      pbVar24 = pbVar24 + 1;
      if (uVar20 - 0x41 < 0x1a) {
        uVar20 = uVar20 | 0x20;
      }
      if (uVar37 - 0x41 < 0x1a) {
        uVar37 = uVar37 | 0x20;
      }
      pbVar32 = pbVar32 + 1;
    } while (uVar37 == uVar20);
    uVar20 = local_20c & 0xff;
    uVar37 = 0;
    if (uVar20 != 0) {
      uVar22 = 0;
      do {
        uVar37 = uVar22 + 1;
        pbVar48[uVar22 + 0x169] = (byte)uVar20;
        if (0xef < uVar37) break;
        uVar20 = (uint)*(byte *)((int)&local_20c + uVar22 + 1);
        uVar22 = uVar37;
      } while (uVar20 != 0);
    }
    pbVar48[uVar37 + 0x169] = 0;
    bVar33 = 0x45;
    pbVar48[0xae4] = 3;
    pbVar48[0xae5] = 0;
    pbVar48[0xae6] = 0;
    pbVar48[0xae7] = 0;
    iVar39 = 0;
    do {
      pbVar48[iVar39 + 0x261] = bVar33;
      iVar23 = iVar39 + 1;
      bVar33 = str_10023e95[iVar39 + 1];
      iVar39 = iVar23;
    } while (iVar23 != 0x2b);
    pbVar48[0x28c] = 0;
    break;
  case 2:
    if ((-1 < *(int *)(pbVar48 + 0xae8)) &&
       (pcVar27 = (char *)(DAT_1002430c + *(int *)(pbVar48 + 0xae8) * 0xd9c), *pcVar27 == '\x01')) {
      recovered_10013e2c((byte *)(pcVar27 + 0x78),(char *)(pbVar48 + 0xa61),(char *)&local_118);
      iVar39 = Ram40010800;
      if (iVar39 == 0x50414d57) {
        iVar39 = Ram40010804;
        if (iVar39 == 0) goto LAB_10009774;
        uVar20 = Ram40010808;
        bVar54 = 0xb < uVar20;
        bVar53 = uVar20 == 0xc;
        if (bVar54) {
          uVar20 = Ram40010808;
          bVar53 = uVar20 == 0xdf;
        }
        if ((!bVar54 || uVar20 < 0xdf) || bVar53) goto LAB_10009774;
        pcVar41 = (code *)UINT_400108dc;
        if (pcVar41 != (code *)0x0) {
          (*pcVar41)(*(int *)(*(int *)(pbVar48 + 0xae8) * 0xd9c + DAT_1002430c + 0x25c),
                     (char *)&local_118);
        }
      }
      else {
LAB_10009774:
        iVar39 = Ram40010800;
        if ((iVar39 == 0x50414d57) && (iVar39 = Ram40010804, iVar39 != 0)) {
          uVar20 = Ram40010808;
          bVar53 = 0xb < uVar20;
          if (bVar53) {
            uVar20 = Ram40010808;
          }
          if ((bVar53 && 0x8f < uVar20) && (pcVar41 = (code *)UINT_4001088c, pcVar41 != (code *)0x0)
             ) {
            (*pcVar41)((char *)&local_118);
          }
        }
      }
      recovered_1000eef4(*(int *)(pbVar48 + 0xae8) * 0xd9c + DAT_1002430c);
    }
    goto LAB_1000a4b0;
  case 3:
    pbVar24 = pbVar48 + 0x169;
    iVar23 = *(int *)(pbVar48 + 0x25c);
    iVar39 = Ram40010800;
    pbVar42 = pbVar48 + 0x78;
    if ((iVar39 == 0x50414d57) && (iVar39 = Ram40010804, iVar39 != 0)) {
      uVar20 = Ram40010808;
      bVar54 = 0xb < uVar20;
      bVar53 = uVar20 == 0xc;
      if (bVar54) {
        uVar20 = Ram40010808;
        bVar53 = uVar20 == 0xdb;
      }
      if ((!bVar54 || uVar20 < 0xdb) || bVar53) goto LAB_10009350;
      pcVar41 = (code *)UINT_400108d8;
      if (pcVar41 != (code *)0x0) {
override_prt_1000a480_ae991ece:
        (*pcVar41)(iVar23,(char *)pbVar42,(char *)pbVar24);
      }
    }
    else {
LAB_10009350:
      iVar39 = Ram40010800;
      if ((iVar39 == 0x50414d57) && (iVar39 = Ram40010804, iVar39 != 0)) {
        uVar20 = Ram40010808;
        bVar53 = 0xb < uVar20;
        if (bVar53) {
          uVar20 = Ram40010808;
        }
        if ((bVar53 && 0x8b < uVar20) && (pcVar41 = (code *)UINT_40010888, pcVar41 != (code *)0x0))
        {
          (*pcVar41)((char *)pbVar42,(char *)pbVar24);
        }
      }
    }
LAB_1000a484:
    if ((-1 < *(int *)(pbVar48 + 0xae8)) &&
       (pcVar27 = (char *)(DAT_1002430c + *(int *)(pbVar48 + 0xae8) * 0xd9c), *pcVar27 == '\x01')) {
      recovered_1000eef4((int)pcVar27);
    }
LAB_1000a4b0:
    recovered_10021c20(puVar18,1);
    break;
  case 4:
    local_118 = 0;
    if ((((((0xf5 < (byte)(pbVar48[0xa61] - 0x3a)) && (0xf5 < (byte)(pbVar48[0xa62] - 0x3a))) &&
          ((0xf5 < (byte)(pbVar48[0xa63] - 0x3a) &&
           ((0xf5 < (byte)(pbVar48[0xa64] - 0x3a) && (pbVar48[0xa65] == 0x2d)))))) &&
         ((0xf5 < (byte)(pbVar48[0xa66] - 0x3a) &&
          (((((0xf5 < (byte)(pbVar48[0xa67] - 0x3a) && (pbVar48[0xa68] == 0x2d)) &&
             (0xf5 < (byte)(pbVar48[0xa69] - 0x3a))) &&
            ((0xf5 < (byte)(pbVar48[0xa6a] - 0x3a) && (pbVar48[0xa6b] == 0x20)))) &&
           ((0xf5 < (byte)(pbVar48[0xa6c] - 0x3a) &&
            ((0xf5 < (byte)(pbVar48[0xa6d] - 0x3a) && (pbVar48[0xa6e] == 0x3a)))))))))) &&
        (0xf5 < (byte)(pbVar48[0xa6f] - 0x3a))) &&
       (((((0xf5 < (byte)(pbVar48[0xa70] - 0x3a) && (pbVar48[0xa71] == 0x3a)) &&
          (0xf5 < (byte)(pbVar48[0xa72] - 0x3a))) &&
         ((0xf5 < (byte)(pbVar48[0xa73] - 0x3a) && (pbVar48[0xa74] == 0)))) &&
        (iVar39 = recovered_10022430((((uint)(byte)(pbVar48[0xa62] - 0x30U) +
                                      (uint)(byte)(pbVar48[0xa61] * '\n' + 0x20)) * 10 +
                                     (uint)(byte)(pbVar48[0xa63] - 0x30U)) * 10 +
                                     (uint)(byte)(pbVar48[0xa64] - 0x30U),
                                     (uint)(byte)(pbVar48[0xa67] - 0x30U) +
                                     (uint)(byte)(pbVar48[0xa66] * '\n' + 0x20),
                                     (uint)(byte)(pbVar48[0xa6a] - 0x30U) +
                                     (uint)(byte)(pbVar48[0xa69] * '\n' + 0x20),
                                     (uint)(byte)(pbVar48[0xa6d] - 0x30U) +
                                     (uint)(byte)(pbVar48[0xa6c] * '\n' + 0x20),
                                     (uint)(byte)(pbVar48[0xa70] - 0x30U) +
                                     (uint)(byte)(pbVar48[0xa6f] * '\n' + 0x20),
                                     (uint)(byte)(pbVar48[0xa73] - 0x30U) +
                                     (uint)(byte)(pbVar48[0xa72] * '\n' + 0x20),&local_118),
        iVar39 != 0)))) {
      lVar56 = (longlong)DAT_10028fe4 * -0x3c + local_118;
      if (-1 < lVar56) {
        iVar39 = Ram40010800;
        if ((iVar39 == 0x50414d57) && (iVar39 = Ram40010804, iVar39 != 0)) {
          uVar20 = Ram40010808;
          bVar53 = 0xb < uVar20;
          if (bVar53) {
            uVar20 = Ram40010808;
          }
          if (((bVar53 && 0x16f < uVar20) &&
              (pcVar41 = (code *)UINT_4001096c, pcVar41 != (code *)0x0)) &&
             (uVar20 = (*pcVar41)((uint)lVar56,(uint)((ulonglong)lVar56 >> 0x20)), uVar20 != 0)) {
            DAT_1012e459 = 0;
            recovered_10021c20(puVar18,1);
            break;
          }
        }
        uVar7 = (0x797320746573206fU);
        uVar6 = (0x7420656c62616e55U);
        pbVar48[0x279] = 0x65;
        pbVar48[0x27a] = 0;
        pbVar48[0x275] = 0x20;
        pbVar48[0x276] = 0x74;
        pbVar48[0x277] = 0x69;
        pbVar48[0x278] = 0x6d;
        *(undefined8 *)(pbVar48 + 0x261) = uVar6;
        *(undefined8 *)(pbVar48 + 0x269) = uVar7;
        pbVar48[0x271] = 0x73;
        pbVar48[0x272] = 0x74;
        pbVar48[0x273] = 0x65;
        pbVar48[0x274] = 0x6d;
        break;
      }
    }
    uVar8 = (0x5959592065735520U);
    uVar7 = (0x53533a4d4d3a4848U);
    uVar6 = (0x2044442d4d4d2d59U);
    *(undefined8 *)(pbVar48 + 0x261) = (0x2e64696c61766e49U);
    *(undefined8 *)(pbVar48 + 0x269) = uVar8;
    *(undefined8 *)(pbVar48 + 0x271) = uVar6;
    *(undefined8 *)(pbVar48 + 0x279) = uVar7;
    pbVar48[0x281] = 0;
  }
switchD_10007c70_default:
  pcVar27 = (char *)0x0;
  if (DAT_100242dc < (undefined1 *)0x14) {
    pcVar27 = (char *)(DAT_1002430c + (int)DAT_100242dc * 0xd9c);
    if ((((*pcVar27 == '\x01') && (pcVar27[1] == '\x01')) && (*(int *)(pcVar27 + 0x10) == 6)) &&
       (uVar20 = *(uint *)(pcVar27 + 0xb1c), uVar20 != 0)) {
      if (pcVar27[2] != '\0') {
        uVar20 = 0;
      }
    }
    else {
LAB_100071fc:
      uVar20 = 0;
    }
  }
  else {
    uVar20 = 0;
  }
  if (DAT_10027628 != 0 && DAT_10027628 != uVar20) {
    terror_ui_window_pointer_event(DAT_10027628,0,0,0,0);
  }
  DAT_10027628 = uVar20;
  if (pcVar27 != (char *)0x0 && uVar20 != 0) {
    uVar22 = *(uint *)(pcVar27 + 0x10);
    uVar37 = 0;
    bVar53 = uVar22 == 6;
    if (bVar53) {
      uVar22 = (uint)(byte)pcVar27[2];
    }
    uVar14 = 1;
    if ((!(bVar53 && uVar22 == 0)) || (*(int *)(pcVar27 + 0x60) < 0x1d)) {
      iVar23 = 0;
      iVar39 = 0;
    }
    else {
      iVar23 = 0;
      iVar39 = 0;
      if (0x34 < *(int *)(pcVar27 + 100)) {
        uVar14 = *(int *)(pcVar27 + 0x60) - 0x1c;
        iVar39 = *(int *)(pcVar27 + 0x58);
        uVar22 = *(int *)(pcVar27 + 100) - 0x34;
        iVar23 = *(int *)(pcVar27 + 0x5c);
        uVar37 = *(uint *)(pcVar27 + 0xb3c);
        if (*(uint *)(pcVar27 + 0xb3c) == 0) {
          uVar37 = uVar14;
        }
        uVar30 = *(uint *)(pcVar27 + 0xb40);
        if (*(uint *)(pcVar27 + 0xb40) == 0) {
          uVar30 = uVar22;
        }
        bVar53 = false;
        if ((int)uVar37 < 1 || (int)uVar30 < 1) {
          uVar37 = uVar14;
          uVar30 = uVar22;
        }
        uVar55 = recovered_10000c20((ulonglong)uVar14 * (ulonglong)uVar30,(ulonglong)uVar37);
        uVar43 = (uint)uVar55;
        if ((int)uVar43 < 2) {
          uVar43 = 1;
        }
        uVar29 = uVar14;
        if (uVar22 < uVar43) {
          uVar55 = recovered_10000c20((ulonglong)uVar22 * (ulonglong)uVar37,(ulonglong)uVar30);
          uVar29 = 1;
          if (1 < (int)(uint)uVar55) {
            uVar29 = (uint)uVar55;
          }
          uVar43 = uVar22;
        }
        iVar52 = iVar23 + 0x26 + (int)(uVar22 - uVar43) / 2;
        iVar39 = iVar39 + 0xe + (int)(uVar14 - uVar29) / 2;
        if (((iVar39 <= (int)puVar25) && ((int)puVar25 < (int)(iVar39 + uVar29))) &&
           (iVar52 <= (int)puVar51)) {
          bVar53 = (int)puVar51 < (int)(iVar52 + uVar43);
        }
        lVar56 = (ulonglong)uVar37 * (ulonglong)(uint)((int)puVar25 - iVar39);
        lVar56 = recovered_10000d84(CONCAT44(((int)puVar25 - iVar39 >> 0x1f) * uVar37 +
                                             (int)((ulonglong)lVar56 >> 0x20),(int)lVar56),
                                    (ulonglong)uVar29);
        iVar39 = (int)lVar56;
        iVar23 = uVar37 - 1;
        if (iVar39 < (int)(uVar37 - 1)) {
          iVar23 = iVar39;
        }
        lVar56 = (ulonglong)uVar30 * (ulonglong)(uint)((int)puVar51 - iVar52);
        if (iVar39 < 0) {
          iVar23 = 0;
        }
        lVar56 = recovered_10000d84(CONCAT44(((int)puVar51 - iVar52 >> 0x1f) * uVar30 +
                                             (int)((ulonglong)lVar56 >> 0x20),(int)lVar56),
                                    (ulonglong)uVar43);
        iVar52 = (int)lVar56;
        iVar39 = uVar30 - 1;
        if (iVar52 < (int)(uVar30 - 1)) {
          iVar39 = iVar52;
        }
        if (iVar52 < 0) {
          iVar39 = 0;
        }
        uVar37 = 0;
        if (bVar53) {
          uVar37 = uVar26 & 3;
        }
        uVar14 = 1;
        if (bVar53) {
          uVar14 = 3;
        }
      }
    }
    terror_ui_window_pointer_event(uVar20,iVar23,iVar39,uVar37,uVar11 & 0x10000 | uVar14 | 4);
  }
  DAT_1012e405 = (char)((uVar26 & 2) >> 1);
  DAT_1012e404 = (char)uVar19;
  DAT_1012e40e = 0;
  DAT_1012e40f = 0;
  DAT_1012e410 = 0;
  DAT_1012e411 = 0;
  DAT_1012e412 = 0;
  DAT_1012e413 = 0;
  DAT_1012e414 = 0;
  DAT_1012e415 = 0;
  DAT_1012e416 = 0;
  DAT_1012e417 = 0;
  DAT_1012e418 = 0;
  DAT_1012e419 = 0;
  DAT_1012e41a = 0;
  DAT_1012e41b = 0;
  DAT_1012e41c = 0;
  DAT_1012e41d = 0;
  DAT_1012e41e = 0;
  DAT_1012e41f = 0;
  DAT_1012e420 = 0;
  DAT_1012e421 = 0;
  DAT_1012e422 = 0;
  DAT_1012e423 = 0;
  DAT_1012e424 = 0;
  DAT_1012e425 = 0;
  DAT_1012e426 = 0;
  DAT_1012e427 = 0;
  DAT_1012e428 = 0;
  DAT_1012e429 = 0;
  DAT_1012e42a = 0;
  DAT_1012e42b = 0;
  DAT_1012e42c = 0;
  DAT_1012e42d = 0;
  DAT_1012e42e = 0;
  DAT_1012e42f = 0;
  DAT_1012e430 = 0;
  DAT_1012e431 = 0;
  DAT_1012e432 = 0;
  DAT_1012e433 = 0;
  DAT_1012e434 = 0;
  DAT_1012e40c = 0;
  DAT_1012e408 = 0;
  DAT_1012e40d = 0;
  return;
}

#undef DAT_10006fa0
#undef DAT_10006fa8
#undef DAT_10006fb0
#undef DAT_10006fb8
#undef DAT_10007770
#undef DAT_10007778
#undef DAT_100088a0
#undef DAT_100088a8
#undef DAT_100088b0
#undef DAT_100088b8
#undef DAT_100096a0
#undef DAT_100096a8
#undef DAT_100096b0
#undef DAT_100096b8
#undef DAT_100096c0
#undef DAT_100096c8
#undef DAT_100096d0
#undef DAT_100096d8
#undef DAT_10009a48
#undef DAT_1000a4c0
#undef DAT_1000a4c8
#undef DAT_1000a4d0
#undef DAT_1000a4d8
#undef DAT_1000b950
#undef DAT_1000b958
#undef DAT_10023774
#undef DAT_10023f70
#undef DAT_10023f8c
#undef DAT_10024130
#undef DAT_10024134
#undef DAT_10024138
#undef DAT_1002413c
#undef DAT_10024140
#undef DAT_100242dc
#undef DAT_100242e4
#undef DAT_100242e8
#undef DAT_100242ec
#undef DAT_1002430c
#undef DAT_10024310
#undef DAT_10024314
#undef DAT_10024319
#undef DAT_10024374
#undef DAT_10024378
#undef DAT_1002437c
#undef DAT_10024380
#undef DAT_10024384
#undef DAT_1002438c
#undef DAT_10024390
#undef DAT_10024394
#undef DAT_10024398
#undef DAT_10024399
#undef DAT_1002439a
#undef DAT_1002439b
#undef DAT_1002439c
#undef DAT_100243a4
#undef DAT_10024588
#undef DAT_100245d0
#undef DAT_10024618
#undef DAT_1002461c
#undef DAT_1002461e
#undef DAT_10024620
#undef DAT_10024622
#undef DAT_10024624
#undef DAT_10024626
#undef DAT_10024628
#undef DAT_1002462a
#undef DAT_1002490c
#undef DAT_10024910
#undef DAT_10024914
#undef DAT_10024918
#undef DAT_100256c8
#undef DAT_10027414
#undef DAT_10027415
#undef DAT_10027418
#undef DAT_1002741c
#undef DAT_10027420
#undef DAT_10027424
#undef DAT_10027428
#undef DAT_10027519
#undef DAT_1002760a
#undef DAT_1002760c
#undef DAT_10027628
#undef DAT_10028fe4
#undef DAT_100290dc
#undef DAT_100290e4
#undef DAT_1012e3fc
#undef DAT_1012e400
#undef DAT_1012e404
#undef DAT_1012e405
#undef DAT_1012e408
#undef DAT_1012e40c
#undef DAT_1012e40d
#undef DAT_1012e40e
#undef DAT_1012e40f
#undef DAT_1012e410
#undef DAT_1012e411
#undef DAT_1012e412
#undef DAT_1012e413
#undef DAT_1012e414
#undef DAT_1012e415
#undef DAT_1012e416
#undef DAT_1012e417
#undef DAT_1012e418
#undef DAT_1012e419
#undef DAT_1012e41a
#undef DAT_1012e41b
#undef DAT_1012e41c
#undef DAT_1012e41d
#undef DAT_1012e41e
#undef DAT_1012e41f
#undef DAT_1012e420
#undef DAT_1012e421
#undef DAT_1012e422
#undef DAT_1012e423
#undef DAT_1012e424
#undef DAT_1012e425
#undef DAT_1012e426
#undef DAT_1012e427
#undef DAT_1012e428
#undef DAT_1012e429
#undef DAT_1012e42a
#undef DAT_1012e42b
#undef DAT_1012e42c
#undef DAT_1012e42d
#undef DAT_1012e42e
#undef DAT_1012e42f
#undef DAT_1012e430
#undef DAT_1012e431
#undef DAT_1012e432
#undef DAT_1012e433
#undef DAT_1012e434
#undef DAT_1012e438
#undef DAT_1012e43c
#undef DAT_1012e440
#undef DAT_1012e448
#undef DAT_1012e44c
#undef DAT_1012e450
#undef DAT_1012e454
#undef DAT_1012e458
#undef DAT_1012e459
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef EXT_00000014
#undef EXT_00000018
#undef Ram40010800
#undef Ram40010804
#undef Ram40010808
#undef UINT_40010888
#undef UINT_4001088c
#undef UINT_400108d8
#undef UINT_400108dc
#undef UINT_400108f4
#undef UINT_40010968
#undef UINT_4001096c
#undef _DAT_10024378
#undef _DAT_10024380
#undef _DAT_10027414
#undef str_10023d7e
#undef str_10023d85
#undef str_10023d8f
#undef str_10023d9d
#undef str_10023daa
#undef str_10023db7
#undef str_10023dc3
#undef str_10023e71
#undef str_10023e81
#undef str_10023e95
#undef switchdataD_10009a48
#undef uStack_108
#undef uStack_104
#undef uStack_100
#undef local_3ee
#undef local_20c
#undef local_208
#undef local_204
#undef local_200
#undef local_1fc
#undef local_1f8
#undef local_1f4
#undef local_118
#undef local_110

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ba84
 */

void recovered_1000ba84(int *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                       int param_7,int param_8,int param_9)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int unaff_r5;

  iVar1 = param_4;
  if (0 < param_4) {
    iVar1 = param_5;
    unaff_r5 = param_5;
  }
  if (0 < iVar1) {
    iVar1 = param_8;
    if (0 < param_8) {
      iVar1 = param_9;
    }
    if (iVar1 < 1) {
      param_9 = unaff_r5;
      param_6 = param_2;
      param_7 = param_3;
      param_8 = param_4;
    }
    else {
      iVar1 = param_7 + param_9;
      if (param_7 + param_9 < param_3 + unaff_r5) {
        iVar1 = param_3 + unaff_r5;
      }
      if (param_3 < param_7) {
        param_7 = param_3;
      }
      param_9 = iVar1 - param_7;
      iVar1 = param_6 + param_8;
      if (param_6 + param_8 < param_2 + param_4) {
        iVar1 = param_2 + param_4;
      }
      if (param_2 < param_6) {
        param_6 = param_2;
      }
      param_8 = iVar1 - param_6;
    }
  }
  param_1[3] = param_9;
  param_1[2] = param_8;
  param_1[1] = param_7;
  *param_1 = param_6;
  return;
}


#undef DAT_10024130
#define DAT_10024130 (*(int *)(((uintptr_t)pf_module_state + 0xb28U)))
#undef DAT_1012e450
#define DAT_1012e450 (*(int *)(((uintptr_t)pf_module_state + 0x10ae48U)))
#undef DAT_1012e454
#define DAT_1012e454 (*(int *)(((uintptr_t)pf_module_state + 0x10ae4cU)))
#undef DAT_1012e458
#define DAT_1012e458 (*(char *)(((uintptr_t)pf_module_state + 0x10ae50U)))
#define acStack_68 (*(char (*)[80])(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000bb1c
 */

void recovered_1000bb1c(int *param_1)

{
  unsigned char frame[160] __attribute__((aligned(16))) = {0};

  bool bVar1;
  ulong uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;

  recovered_10022730(acStack_68);
  iVar5 = DAT_10024130;
  if (DAT_10024130 < 0xf5) {
    iVar5 = 0xf4;
  }
  uVar2 = strlen(acStack_68);
  if (0 < (int)uVar2) {
    do {
      uVar3 = recovered_10019aa8(acStack_68,uVar2);
      if ((int)uVar3 <= iVar5 + -0xf4) goto LAB_1000bb8c;
      uVar3 = uVar2 - 1;
      bVar1 = 0 < (int)uVar2;
      uVar2 = uVar3;
    } while (uVar3 != 0 && bVar1);
    uVar2 = 0;
  }
LAB_1000bb8c:
  uVar3 = recovered_10019aa8(acStack_68,uVar2);
  iVar5 = (DAT_10024130 - uVar3) + -2;
  if (iVar5 < 0xf3) {
    iVar5 = 0xf2;
  }
  iVar4 = DAT_10024130 - iVar5;
  if ((0 < DAT_1012e454) && (DAT_1012e458 != '\0')) {
    if (iVar4 < 1) {
      iVar5 = DAT_1012e450;
      iVar4 = DAT_1012e454;
    }
    else {
      if (DAT_1012e450 < iVar5) {
        iVar5 = DAT_1012e450;
      }
      iVar4 = DAT_10024130;
      if (DAT_10024130 < DAT_1012e454 + DAT_1012e450) {
        iVar4 = DAT_1012e454 + DAT_1012e450;
      }
      iVar4 = iVar4 - iVar5;
    }
  }
  param_1[3] = 0x18;
  param_1[2] = iVar4;
  param_1[1] = 0;
  *param_1 = iVar5;
  return;
}

#undef DAT_10024130
#undef DAT_1012e450
#undef DAT_1012e454
#undef DAT_1012e458
#undef acStack_68

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000bc48
 */

void recovered_1000bc48(int *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                       int param_7)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  int unaff_r4;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int unaff_lr;

  iVar2 = param_6;
  if (0 < param_6) {
    iVar2 = param_7;
    unaff_lr = param_7;
  }
  iVar6 = 0;
  if (0 < iVar2) {
    iVar2 = param_4;
    if (0 < param_4) {
      iVar2 = param_5;
      unaff_r4 = param_5;
    }
    if (0 < iVar2) {
      iVar4 = param_2 + param_4;
      iVar2 = param_6;
      if (iVar4 < param_6) {
        iVar2 = iVar4;
      }
      iVar5 = param_3 + unaff_r4;
      if (iVar4 < 0) {
        iVar2 = 0;
      }
      iVar4 = unaff_lr;
      if (iVar5 < unaff_lr) {
        iVar4 = iVar5;
      }
      if (iVar5 < 0) {
        iVar4 = 0;
      }
      if (param_2 < param_6) {
        param_6 = param_2;
      }
      if (param_2 < 0) {
        param_6 = 0;
      }
      if (param_3 < unaff_lr) {
        unaff_lr = param_3;
      }
      if (param_3 < 0) {
        unaff_lr = 0;
      }
      if (param_6 < iVar2) {
        iVar1 = 0;
        iVar3 = 0;
        iVar5 = 0;
        if (unaff_lr < iVar4) {
          iVar3 = iVar4 - unaff_lr;
          iVar1 = iVar2 - param_6;
          iVar5 = unaff_lr;
          iVar6 = param_6;
        }
        goto LAB_1000bd00;
      }
    }
  }
  iVar1 = 0;
  iVar3 = 0;
  iVar5 = 0;
LAB_1000bd00:
  param_1[3] = iVar3;
  param_1[2] = iVar1;
  param_1[1] = iVar5;
  *param_1 = iVar6;
  return;
}


#undef DAT_10024130
#define DAT_10024130 (*(int *)(((uintptr_t)pf_module_state + 0xb28U)))
#undef DAT_10024134
#define DAT_10024134 (*(int *)(((uintptr_t)pf_module_state + 0xb2cU)))
#undef DAT_100242f0
#define DAT_100242f0 (*(int *)(((uintptr_t)pf_module_state + 0xce8U)))
#undef DAT_100242f4
#define DAT_100242f4 (*(int *)(((uintptr_t)pf_module_state + 0xcecU)))
#undef DAT_100242f8
#define DAT_100242f8 (*(int *)(((uintptr_t)pf_module_state + 0xcf0U)))
#undef DAT_10024314
#define DAT_10024314 (*(char *)(((uintptr_t)pf_module_state + 0xd0cU)))
#undef DAT_10028fb0
#define DAT_10028fb0 (*(int *)(((uintptr_t)pf_module_state + 0x59a8U)))
#undef DAT_10028fb4
#define DAT_10028fb4 (*(int *)(((uintptr_t)pf_module_state + 0x59acU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000bd14
 */

void recovered_1000bd14(int param_1,int param_2,int param_3,int param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;

  if (((DAT_10024314 == '\x01') && (DAT_10028fb0 != 0)) && (DAT_100242f8 != 0)) {
    iVar3 = DAT_100242f0 * DAT_100242f4 * 4;
    if (DAT_100242f4 < 1) {
      iVar3 = 0;
    }
    if (DAT_100242f0 < 1) {
      iVar3 = 0;
    }
    if (((DAT_10028fb4 == iVar3) && (0 < DAT_10024130)) && (0 < DAT_10024134)) {
      iVar3 = param_3;
      if (0 < param_3) {
        iVar3 = param_4;
      }
      if (0 < iVar3) {
        iVar4 = param_1 + param_3;
        iVar2 = param_2 + param_4;
        iVar3 = DAT_10024130;
        if (iVar4 < DAT_10024130) {
          iVar3 = iVar4;
        }
        if (iVar4 < 0) {
          iVar3 = 0;
        }
        iVar4 = DAT_10024134;
        if (iVar2 < DAT_10024134) {
          iVar4 = iVar2;
        }
        if (iVar2 < 0) {
          iVar4 = 0;
        }
        iVar2 = DAT_10024130;
        if (param_1 < DAT_10024130) {
          iVar2 = param_1;
        }
        if (param_1 < 0) {
          iVar2 = 0;
        }
        iVar5 = DAT_10024134;
        if (param_2 < DAT_10024134) {
          iVar5 = param_2;
        }
        if (param_2 < 0) {
          iVar5 = 0;
        }
        if (((iVar2 < iVar3) && (iVar5 < iVar4)) && (0 < iVar3 - iVar2)) {
          do {
            iVar1 = DAT_10024130 * iVar5 + iVar2;
            memcpy((void *)(DAT_100242f8 + iVar1 * 4),(void *)(DAT_10028fb0 + iVar1 * 4)
                               ,(iVar3 - iVar2) * 4);
            iVar5 = iVar5 + 1;
          } while (iVar4 != iVar5);
        }
      }
    }
  }
  return;
}

#undef DAT_10024130
#undef DAT_10024134
#undef DAT_100242f0
#undef DAT_100242f4
#undef DAT_100242f8
#undef DAT_10024314
#undef DAT_10028fb0
#undef DAT_10028fb4

#undef DAT_1000c2d0
#define DAT_1000c2d0 (*(uint64_t *)(0x1000c2d0U))
#undef DAT_1000c2d8
#define DAT_1000c2d8 (*(uint64_t *)(0x1000c2d8U))
#undef DAT_1000c2e0
#define DAT_1000c2e0 (*(uint64_t *)(0x1000c2e0U))
#undef DAT_1000c2e8
#define DAT_1000c2e8 (*(uint64_t *)(0x1000c2e8U))
#undef DAT_10024130
#define DAT_10024130 (*(int *)(((uintptr_t)pf_module_state + 0xb28U)))
#undef DAT_10024134
#define DAT_10024134 (*(int *)(((uintptr_t)pf_module_state + 0xb2cU)))
#undef DAT_100242f8
#define DAT_100242f8 (*(int *)(((uintptr_t)pf_module_state + 0xcf0U)))
#undef DAT_1012e450
#define DAT_1012e450 (*(int *)(((uintptr_t)pf_module_state + 0x10ae48U)))
#undef DAT_1012e454
#define DAT_1012e454 (*(int *)(((uintptr_t)pf_module_state + 0x10ae4cU)))
#undef DAT_1012e458
#define DAT_1012e458 (*(char *)(((uintptr_t)pf_module_state + 0x10ae50U)))
#define acStack_70 (*(char (*)[80])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000be90
 */

void recovered_1000be90(int *param_1)

{
  unsigned char frame[160] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  int iVar21;
  uint uVar22;

  recovered_10022730(acStack_70);
  iVar14 = DAT_10024130;
  if (DAT_10024130 < 0xf5) {
    iVar14 = 0xf4;
  }
  uVar2 = strlen(acStack_70);
  if (0 < (int)uVar2) {
    do {
      uVar3 = recovered_10019aa8(acStack_70,uVar2);
      if ((int)uVar3 <= iVar14 + -0xf4) goto LAB_1000bf00;
      uVar3 = uVar2 - 1;
      bVar6 = 0 < (int)uVar2;
      uVar2 = uVar3;
    } while (uVar3 != 0 && bVar6);
    uVar2 = 0;
  }
LAB_1000bf00:
  uVar3 = recovered_10019aa8(acStack_70,uVar2);
  iVar10 = DAT_10024134;
  iVar14 = DAT_10024130;
  iVar21 = (DAT_10024130 - uVar3) + -2;
  if (iVar21 < 0xf3) {
    iVar21 = 0xf2;
  }
  iVar7 = DAT_10024130 - iVar21;
  if ((DAT_1012e454 < 1) || (DAT_1012e458 == '\0')) {
    DAT_1012e450 = iVar21;
    DAT_1012e454 = iVar7;
  }
  else if (iVar7 < 1) {
  }
  else {
    iVar11 = iVar21;
    if (DAT_1012e450 < iVar21) {
      iVar11 = DAT_1012e450;
    }
    iVar12 = DAT_1012e454 + DAT_1012e450;
    if (DAT_1012e454 + DAT_1012e450 <= DAT_10024130) {
      iVar12 = DAT_10024130;
    }
    DAT_1012e450 = iVar11;
    DAT_1012e454 = iVar12 - iVar11;
  }
  iVar12 = 0;
  iVar15 = 0;
  iVar11 = 0;
  if (0 < DAT_10024130) {
    iVar17 = DAT_10024134;
    if (0 < DAT_10024134) {
      iVar17 = DAT_1012e454;
    }
    if (0 < iVar17) {
      iVar11 = DAT_1012e454 + DAT_1012e450;
      iVar17 = DAT_10024130;
      if (iVar11 < DAT_10024130) {
        iVar17 = iVar11;
      }
      if (iVar11 < 0) {
        iVar17 = 0;
      }
      iVar18 = DAT_10024130;
      if (DAT_1012e450 < DAT_10024130) {
        iVar18 = DAT_1012e450;
      }
      if (DAT_1012e450 < 0) {
        iVar18 = 0;
      }
      iVar11 = 0;
      if (iVar18 < iVar17) {
        iVar15 = iVar17 - iVar18;
        iVar11 = 0x18;
        if (DAT_10024134 < 0x19) {
          iVar11 = DAT_10024134;
        }
        iVar12 = iVar18;
      }
    }
  }
  param_1[3] = iVar11;
  iVar17 = iVar15;
  if (0 < iVar15) {
    iVar17 = iVar11;
  }
  param_1[2] = iVar15;
  param_1[1] = 0;
  *param_1 = iVar12;
  iVar18 = DAT_100242f8;
  if (0 < iVar17) {
    iVar15 = iVar15 + iVar12;
    iVar17 = iVar14;
    if (iVar12 < iVar14) {
      iVar17 = iVar12;
    }
    if (iVar12 < 0) {
      iVar17 = 0;
    }
    iVar12 = iVar14;
    if (iVar15 < iVar14) {
      iVar12 = iVar15;
    }
    if (iVar15 < 0) {
      iVar12 = 0;
    }
    bVar6 = DAT_100242f8 != 0 && iVar17 < iVar12;
    if (iVar10 <= iVar11) {
      iVar11 = iVar10;
    }
    if ((bVar6) && (0 < iVar10)) {
      iVar16 = 0;
      uVar13 = iVar12 - iVar17;
      uVar22 = uVar13 & 0xfffffffc;
      puVar20 = (undefined8 *)(DAT_100242f8 + iVar17 * 4);
      iVar15 = DAT_100242f8;
      do {
        uVar4 = uVar22;
        iVar8 = iVar17;
        puVar19 = puVar20;
        if (uVar13 < 4) {
LAB_1000c188:
          iVar9 = iVar12 - iVar8;
          puVar5 = (undefined4 *)(iVar15 + iVar8 * 4);
          do {
            *puVar5 = 0xfffafafa;
            iVar9 = iVar9 + -1;
            puVar5 = puVar5 + 1;
          } while (iVar9 != 0);
        }
        else {
          do {
            uVar1 = (0xfffafafafffafafaU);
            uVar4 = uVar4 - 4;
            *puVar19 = (0xfffafafafffafafaU);
            puVar19[1] = uVar1;
            puVar19 = puVar19 + 2;
          } while (uVar4 != 0);
          iVar8 = iVar17 + uVar22;
          if (uVar13 != uVar22) goto LAB_1000c188;
        }
        iVar16 = iVar16 + 1;
        iVar15 = iVar15 + iVar14 * 4;
        puVar20 = (undefined8 *)((int)puVar20 + iVar14 * 4);
      } while (iVar16 != iVar11);
    }
    if (0x17 < iVar10 && bVar6) {
      uVar13 = iVar12 - iVar17;
      if (3 < uVar13) {
        uVar4 = uVar13 & 0xfffffffc;
        iVar10 = iVar14 * 0x17 + iVar17;
        iVar17 = iVar17 + uVar4;
        puVar20 = (undefined8 *)(iVar18 + iVar10 * 4);
        uVar22 = uVar4;
        do {
          uVar1 = (0xffa6a6a6ffa6a6a6U);
          uVar22 = uVar22 - 4;
          *puVar20 = (0xffa6a6a6ffa6a6a6U);
          puVar20[1] = uVar1;
          puVar20 = puVar20 + 2;
        } while (uVar22 != 0);
        if (uVar13 == uVar4) goto LAB_1000c00c;
      }
      iVar12 = iVar12 - iVar17;
      puVar5 = (undefined4 *)(iVar18 + iVar14 * 0x5c + iVar17 * 4);
      do {
        *puVar5 = 0xffa6a6a6;
        iVar12 = iVar12 + -1;
        puVar5 = puVar5 + 1;
      } while (iVar12 != 0);
    }
  }
LAB_1000c00c:
  uVar13 = uVar2;
  if (0 < (int)uVar2) {
    uVar13 = uVar3;
  }
  DAT_1012e458 = 1;
  DAT_1012e450 = iVar21;
  DAT_1012e454 = iVar7;
  if (0 < (int)uVar13) {
    recovered_100125d8(iVar21,7,acStack_70,uVar2,0x4b4b4b,1);
  }
  return;
}

#undef DAT_1000c2d0
#undef DAT_1000c2d8
#undef DAT_1000c2e0
#undef DAT_1000c2e8
#undef DAT_10024130
#undef DAT_10024134
#undef DAT_100242f8
#undef DAT_1012e450
#undef DAT_1012e454
#undef DAT_1012e458
#undef acStack_70

#undef DAT_10024130
#define DAT_10024130 (*(int *)(((uintptr_t)pf_module_state + 0xb28U)))
#undef DAT_10024134
#define DAT_10024134 (*(int *)(((uintptr_t)pf_module_state + 0xb2cU)))
#undef DAT_1002413c
#define DAT_1002413c (*(int *)(((uintptr_t)pf_module_state + 0xb34U)))
#undef DAT_100242f0
#define DAT_100242f0 (*(int *)(((uintptr_t)pf_module_state + 0xce8U)))
#undef DAT_100242f4
#define DAT_100242f4 (*(int *)(((uintptr_t)pf_module_state + 0xcecU)))
#undef DAT_100242f8
#define DAT_100242f8 (*(int *)(((uintptr_t)pf_module_state + 0xcf0U)))
#undef DAT_10024314
#define DAT_10024314 (*(char *)(((uintptr_t)pf_module_state + 0xd0cU)))
#undef DAT_10028fb0
#define DAT_10028fb0 (*(int *)(((uintptr_t)pf_module_state + 0x59a8U)))
#undef DAT_10028fb4
#define DAT_10028fb4 (*(int *)(((uintptr_t)pf_module_state + 0x59acU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c2f0
 */

void recovered_1000c2f0(int param_1,int param_2,int param_3,int param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;

  if ((((DAT_10024314 == '\x01') && (DAT_1002413c == -1)) && (DAT_10028fb0 != 0)) &&
     (DAT_100242f8 != 0)) {
    iVar3 = DAT_100242f0 * DAT_100242f4 * 4;
    if (DAT_100242f4 < 1) {
      iVar3 = 0;
    }
    if (DAT_100242f0 < 1) {
      iVar3 = 0;
    }
    if (((DAT_10028fb4 == iVar3) && (0 < DAT_10024130)) && (0 < DAT_10024134)) {
      iVar3 = param_3;
      if (0 < param_3) {
        iVar3 = param_4;
      }
      if (0 < iVar3) {
        iVar4 = param_1 + param_3;
        iVar2 = param_2 + param_4;
        iVar3 = DAT_10024130;
        if (iVar4 < DAT_10024130) {
          iVar3 = iVar4;
        }
        if (iVar4 < 0) {
          iVar3 = 0;
        }
        iVar4 = DAT_10024134;
        if (iVar2 < DAT_10024134) {
          iVar4 = iVar2;
        }
        if (iVar2 < 0) {
          iVar4 = 0;
        }
        iVar2 = DAT_10024130;
        if (param_1 < DAT_10024130) {
          iVar2 = param_1;
        }
        if (param_1 < 0) {
          iVar2 = 0;
        }
        iVar5 = DAT_10024134;
        if (param_2 < DAT_10024134) {
          iVar5 = param_2;
        }
        if (param_2 < 0) {
          iVar5 = 0;
        }
        if (((iVar2 < iVar3) && (iVar5 < iVar4)) && (0 < iVar3 - iVar2)) {
          do {
            iVar1 = DAT_10024130 * iVar5 + iVar2;
            memcpy((void *)(DAT_10028fb0 + iVar1 * 4),(void *)(DAT_100242f8 + iVar1 * 4)
                               ,(iVar3 - iVar2) * 4);
            iVar5 = iVar5 + 1;
          } while (iVar4 != iVar5);
        }
      }
    }
  }
  return;
}

#undef DAT_10024130
#undef DAT_10024134
#undef DAT_1002413c
#undef DAT_100242f0
#undef DAT_100242f4
#undef DAT_100242f8
#undef DAT_10024314
#undef DAT_10028fb0
#undef DAT_10028fb4

#undef DAT_100242f0
#define DAT_100242f0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0xce8U)))
#undef DAT_100242f4
#define DAT_100242f4 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0xcecU)))
#undef DAT_100242f8
#define DAT_100242f8 (*(int *)(((uintptr_t)pf_module_state + 0xcf0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c47c
 */

undefined4
recovered_1000c47c(char *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
                  undefined4 *param_5)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *unaff_r9;
  undefined4 *puVar8;
  bool bVar9;
  bool bVar10;

  uVar1 = 0;
  if ((*param_1 == '\x01') && (DAT_100242f8 != 0)) {
    puVar6 = DAT_100242f0;
    if (0 < (int)DAT_100242f0) {
      puVar6 = DAT_100242f4;
      unaff_r9 = DAT_100242f4;
    }
    if ((0 < (int)puVar6) && (DAT_100242f0 == *(undefined4 **)(param_1 + 0x14))) {
      puVar6 = *(undefined4 **)(param_1 + 0x18);
      bVar9 = unaff_r9 == puVar6;
      if (bVar9) {
        puVar6 = *(undefined4 **)(param_1 + 8);
      }
      if ((bVar9 && puVar6 == (undefined4 *)0x0) && (iVar5 = *(int *)(param_1 + 4), iVar5 != 0)) {
        iVar2 = recovered_1000c814((int)param_1);
        if (iVar2 == 0) {
          uVar1 = 0;
        }
        else {
          uVar1 = 0;
          if (param_1[0x48] == '\x01') {
            uVar1 = 1;
            puVar6 = DAT_100242f0;
            puVar8 = &DAT_100242f0;
            if (0 < (int)DAT_100242f0) {
              puVar6 = DAT_100242f4;
              puVar8 = DAT_100242f4;
            }
            if (0 < (int)puVar6) {
              puVar6 = param_4;
              if (0 < (int)param_4) {
                puVar6 = param_5;
                unaff_r9 = param_5;
              }
              if (0 < (int)puVar6) {
                puVar3 = (undefined4 *)((int)param_2 + (int)param_4);
                puVar6 = DAT_100242f0;
                if ((int)puVar3 < (int)DAT_100242f0) {
                  puVar6 = puVar3;
                }
                puVar4 = (undefined4 *)((int)param_3 + (int)unaff_r9);
                if ((int)puVar3 < 0) {
                  puVar6 = (undefined4 *)0x0;
                }
                puVar3 = puVar8;
                if ((int)puVar4 < (int)puVar8) {
                  puVar3 = puVar4;
                }
                if ((int)puVar4 < 0) {
                  puVar3 = (undefined4 *)0x0;
                }
                puVar4 = DAT_100242f0;
                if ((int)param_2 < (int)DAT_100242f0) {
                  puVar4 = param_2;
                }
                if ((int)param_2 < 0) {
                  puVar4 = (undefined4 *)0x0;
                }
                if ((int)param_3 < (int)puVar8) {
                  puVar8 = param_3;
                }
                if ((int)param_3 < 0) {
                  puVar8 = (undefined4 *)0x0;
                }
                bVar10 = SBORROW4((int)puVar6,(int)puVar4);
                iVar2 = (int)puVar6 - (int)puVar4;
                bVar9 = puVar6 == puVar4;
                if ((int)puVar4 < (int)puVar6) {
                  bVar10 = SBORROW4((int)puVar3,(int)puVar8);
                  iVar2 = (int)puVar3 - (int)puVar8;
                  bVar9 = puVar3 == puVar8;
                }
                if (!bVar9 && iVar2 < 0 == bVar10) {
                  puVar6 = (undefined4 *)((int)puVar6 - (int)puVar4);
                  puVar7 = puVar6;
                  if (0 < (int)puVar6) {
                    puVar7 = (undefined4 *)((int)puVar3 - (int)puVar8);
                    param_2 = puVar7;
                  }
                  if (0 < (int)puVar7) {
                    recovered_10022f20((int)param_1,(uint *)&DAT_100242f0,(uint)puVar4,(uint)puVar8,
                                       (int)puVar6,(int)param_2);
                    recovered_10023280((int)param_1,iVar5,(int)puVar4,(int)puVar8,(int)puVar6,
                                       (int)param_2);
                    recovered_10023448((uint)param_1,(uint)puVar4,(uint)puVar8,(int)puVar6,
                                       (int)param_2);
                    uVar1 = 1;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return uVar1;
}

#undef DAT_100242f0
#undef DAT_100242f4
#undef DAT_100242f8

#undef DAT_10024138
#define DAT_10024138 (*(uint *)(((uintptr_t)pf_module_state + 0xb30U)))
#undef DAT_1002413c
#define DAT_1002413c (*(uint *)(((uintptr_t)pf_module_state + 0xb34U)))
#undef DAT_100242dc
#define DAT_100242dc (*(uint *)(((uintptr_t)pf_module_state + 0xcd4U)))
#undef DAT_100242f0
#define DAT_100242f0 (*(int *)(((uintptr_t)pf_module_state + 0xce8U)))
#undef DAT_100242f4
#define DAT_100242f4 (*(int *)(((uintptr_t)pf_module_state + 0xcecU)))
#undef DAT_100242f8
#define DAT_100242f8 (*(void * *)(((uintptr_t)pf_module_state + 0xcf0U)))
#undef DAT_1002430c
#define DAT_1002430c (*(int *)(((uintptr_t)pf_module_state + 0xd04U)))
#undef DAT_10024314
#define DAT_10024314 (*(char *)(((uintptr_t)pf_module_state + 0xd0cU)))
#undef DAT_10028fb0
#define DAT_10028fb0 (*(void * *)(((uintptr_t)pf_module_state + 0x59a8U)))
#undef DAT_10028fb4
#define DAT_10028fb4 (*(int *)(((uintptr_t)pf_module_state + 0x59acU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c638
 */

undefined4 recovered_1000c638(int param_1,int param_2,int param_3,int param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong n;
  int iVar1;
  uint uVar2;
  char cVar3;
  undefined4 uVar4;
  int extraout_r1 = 0;
  char *pcVar5;
  int iVar6;

  uVar2 = DAT_10024138;
  iVar6 = DAT_100242f0 * DAT_100242f4 * 4;
  if (DAT_100242f4 < 1) {
    iVar6 = 0;
  }
  if (DAT_100242f0 < 1) {
    iVar6 = 0;
  }
  if (DAT_100242f8 == (void *)0x0) {
    iVar6 = 0;
  }
  uVar4 = 0;
  if (DAT_10024138 < 0x14) {
    pcVar5 = (char *)(DAT_1002430c + DAT_10024138 * 0xd9c);
    cVar3 = *pcVar5;
    if (cVar3 == '\x01') {
      pcVar5 = (char *)(uint)(byte)pcVar5[1];
    }
    if ((cVar3 == '\x01' && pcVar5 == (char *)0x1) && (iVar6 != 0)) {
      cVar3 = recovered_1001acec();
      uVar4 = 0;
      if (cVar3 != '\0') {
        if (((DAT_10024314 == '\x01') && (DAT_1002413c == uVar2)) && (DAT_10028fb4 == iVar6)) {
          recovered_1000bd14(param_1,param_2,param_3,param_4);
        }
        else {
          recovered_1002354c(uVar2);
          if (DAT_100242f8 != (void *)0x0) {
            iVar6 = DAT_100242f0;
            iVar1 = extraout_r1;
            if (0 < DAT_100242f0) {
              iVar6 = DAT_100242f4;
              iVar1 = DAT_100242f4;
            }
            if (((0 < iVar6) && (n = DAT_100242f0 * iVar1 * 4, n != 0)) &&
               (cVar3 = recovered_1001acec(), cVar3 != '\0')) {
              memcpy(DAT_10028fb0,DAT_100242f8,n);
              DAT_10024314 = '\x01';
              DAT_1002413c = uVar2;
            }
          }
        }
        recovered_10010640((char *)(uVar2 * 0xd9c + DAT_1002430c),(uint)(uVar2 == DAT_100242dc));
        uVar4 = 1;
      }
    }
  }
  return uVar4;
}

#undef DAT_10024138
#undef DAT_1002413c
#undef DAT_100242dc
#undef DAT_100242f0
#undef DAT_100242f4
#undef DAT_100242f8
#undef DAT_1002430c
#undef DAT_10024314
#undef DAT_10028fb0
#undef DAT_10028fb4

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
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c814
 */

undefined4 recovered_1000c814(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  longlong lVar1;
  int iVar2;
  code *pcVar3;
  void *pvVar4;
  uint uVar5;
  ulong size;
  uint uVar6;
  bool bVar7;

  if (param_1 == 0) {
    return 0;
  }
  uVar5 = *(uint *)(param_1 + 0x1c);
  uVar6 = 0;
  if (uVar5 - 0xf < 0x12) {
    bVar7 = (1 << (uVar5 - 0xf & 0xff) & 0x20203U) != 0;
    if (bVar7) {
      uVar5 = uVar5 + 7;
    }
    uVar6 = 0;
    if (bVar7) {
      uVar6 = uVar5 >> 3;
    }
  }
  lVar1 = (ulonglong)*(uint *)(param_1 + 0x14) * (ulonglong)uVar6;
  if (lVar1 == 0) {
    return 0;
  }
  if ((uint)((uint)lVar1 <= *(uint *)(param_1 + 0x10)) <= (uint)-(int)((ulonglong)lVar1 >> 0x20)) {
    return 0;
  }
  lVar1 = (ulonglong)*(uint *)(param_1 + 0x10) * (ulonglong)*(uint *)(param_1 + 0x18);
  size = (ulong)lVar1;
  if ((uint)(size != 0) <= (uint)((ulonglong)lVar1 >> 0x20)) {
    return 0;
  }
  if (size == 0) {
    return 0;
  }
  if (*(void **)(param_1 + 0x38) != (void *)0x0) {
    if (((*(int *)(param_1 + 0x3c) != 0) && (*(ulong *)(param_1 + 0x40) == size)) &&
       (*(ulong *)(param_1 + 0x44) == size)) {
      return 1;
    }
    iVar2 = Ram40010800;
    if ((iVar2 == 0x50414d57) && (iVar2 = Ram40010804, iVar2 != 0)) {
      uVar6 = Ram40010808;
      bVar7 = 0xb < uVar6;
      if (bVar7) {
        uVar6 = Ram40010808;
      }
      if ((bVar7 && 0x53 < uVar6) && (pcVar3 = (code *)UINT_40010850, pcVar3 != (code *)0x0)) {
        (*pcVar3)(*(void **)(param_1 + 0x38));
      }
    }
    *(undefined4 *)(param_1 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  if (*(void **)(param_1 + 0x3c) != (void *)0x0) {
    iVar2 = Ram40010800;
    if ((iVar2 == 0x50414d57) && (iVar2 = Ram40010804, iVar2 != 0)) {
      uVar6 = Ram40010808;
      bVar7 = 0xb < uVar6;
      if (bVar7) {
        uVar6 = Ram40010808;
      }
      if ((bVar7 && 0x53 < uVar6) && (pcVar3 = (code *)UINT_40010850, pcVar3 != (code *)0x0)) {
        (*pcVar3)(*(void **)(param_1 + 0x3c));
      }
    }
    *(undefined1 *)(param_1 + 0x48) = 0;
    *(undefined4 *)(param_1 + 0x44) = 0;
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }
  iVar2 = Ram40010800;
  if ((iVar2 != 0x50414d57) || (iVar2 = Ram40010804, iVar2 == 0)) {
LAB_1000c994:
    *(undefined4 *)(param_1 + 0x38) = 0;
    return 0;
  }
  uVar6 = Ram40010808;
  bVar7 = 0xb < uVar6;
  if (bVar7) {
    uVar6 = Ram40010808;
  }
  if ((!bVar7 || uVar6 < 0x50) || (pcVar3 = (code *)UINT_4001084c, pcVar3 == (code *)0x0))
  goto LAB_1000c994;
  pvVar4 = (*pcVar3)(size);
  *(void **)(param_1 + 0x38) = pvVar4;
  if (pvVar4 == (void *)0x0) {
    return 0;
  }
  iVar2 = Ram40010800;
  if ((iVar2 == 0x50414d57) && (iVar2 = Ram40010804, iVar2 != 0)) {
    uVar6 = Ram40010808;
    bVar7 = 0xb < uVar6;
    if (bVar7) {
      uVar6 = Ram40010808;
    }
    if ((bVar7 && 0x4f < uVar6) && (pcVar3 = (code *)UINT_4001084c, pcVar3 != (code *)0x0)) {
      pvVar4 = (*pcVar3)(size);
      *(void **)(param_1 + 0x3c) = pvVar4;
      if (pvVar4 != (void *)0x0) {
        *(undefined1 *)(param_1 + 0x48) = 0;
        *(ulong *)(param_1 + 0x44) = size;
        *(ulong *)(param_1 + 0x40) = size;
        return 1;
      }
      pvVar4 = *(void **)(param_1 + 0x38);
      goto LAB_1000ca0c;
    }
  }
  *(undefined4 *)(param_1 + 0x3c) = 0;
LAB_1000ca0c:
  iVar2 = Ram40010800;
  if ((iVar2 == 0x50414d57) && (iVar2 = Ram40010804, iVar2 != 0)) {
    uVar6 = Ram40010808;
    bVar7 = 0xb < uVar6;
    if (bVar7) {
      uVar6 = Ram40010808;
    }
    if ((bVar7 && 0x53 < uVar6) && (pcVar3 = (code *)UINT_40010850, pcVar3 != (code *)0x0)) {
      (*pcVar3)(pvVar4);
    }
  }
  *(undefined4 *)(param_1 + 0x38) = 0;
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
 * Address: 0x1000cae0
 */

void recovered_1000cae0(undefined4 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;

  if (param_1 == (undefined4 *)0x0) {
    return;
  }
  if ((((param_1[1] == 0) && ((void *)*param_1 != (void *)0x0)) &&
      (iVar2 = Ram40010800, iVar2 == 0x50414d57)) && (iVar2 = Ram40010804, iVar2 != 0)) {
    uVar1 = Ram40010808;
    bVar4 = 0xb < uVar1;
    if (bVar4) {
      uVar1 = Ram40010808;
    }
    if ((bVar4 && 0x53 < uVar1) && (pcVar3 = (code *)UINT_40010850, pcVar3 != (code *)0x0)) {
      (*pcVar3)((void *)*param_1);
    }
  }
  memset(param_1,0,0x18);
  return;
}

#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef Ram40010800
#undef Ram40010804
#undef Ram40010808
#undef UINT_40010850

#undef DAT_100237ce
#define DAT_100237ce (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1c6U)))
#undef DAT_10023879
#define DAT_10023879 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x271U)))
#undef DAT_10023887
#define DAT_10023887 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x27fU)))
#undef DAT_10023888
#define DAT_10023888 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x280U)))
#undef DAT_10023889
#define DAT_10023889 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x281U)))
#undef DAT_1002388a
#define DAT_1002388a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x282U)))
#undef DAT_1002388e
#define DAT_1002388e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x286U)))
#undef DAT_10023890
#define DAT_10023890 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x288U)))
#undef DAT_10023893
#define DAT_10023893 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x28bU)))
#undef DAT_10023897
#define DAT_10023897 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x28fU)))
#undef DAT_10024144
#define DAT_10024144 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb3cU)))
#undef DAT_10024148
#define DAT_10024148 (*(uint32_t *)(((uintptr_t)pf_module_state + 0xb40U)))
#undef DAT_1002414c
#define DAT_1002414c (*(uint32_t *)(((uintptr_t)pf_module_state + 0xb44U)))
#undef DAT_10024150
#define DAT_10024150 (*(uint32_t *)(((uintptr_t)pf_module_state + 0xb48U)))
#undef DAT_10024154
#define DAT_10024154 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb4cU)))
#undef DAT_100242d4
#define DAT_100242d4 (*(int *)(((uintptr_t)pf_module_state + 0xcccU)))
#undef DAT_10028fe0
#define DAT_10028fe0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x59d8U)))
#undef DAT_10028fe4
#define DAT_10028fe4 (*(int *)(((uintptr_t)pf_module_state + 0x59dcU)))
#undef DAT_10028fe8
#define DAT_10028fe8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x59e0U)))
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
#undef UINT_400108c8
#define UINT_400108c8 (*(uint *)(0x400108c8U))
#undef str_100237bc
#define str_100237bc (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1b4U)))
#undef str_100237d1
#define str_100237d1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1c9U)))
#undef str_100237dc
#define str_100237dc (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1d4U)))
#undef str_100237ed
#define str_100237ed (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1e5U)))
#undef str_100237fa
#define str_100237fa (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1f2U)))
#undef str_1002380d
#define str_1002380d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x205U)))
#undef str_1002381d
#define str_1002381d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x215U)))
#undef str_1002382c
#define str_1002382c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x224U)))
#undef str_1002383b
#define str_1002383b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x233U)))
#undef str_10023851
#define str_10023851 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x249U)))
#undef str_10023862
#define str_10023862 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x25aU)))
#undef str_1002386d
#define str_1002386d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x265U)))
#undef str_10023873
#define str_10023873 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x26bU)))
#undef str_1002387e
#define str_1002387e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x276U)))
#undef str_10024155
#define str_10024155 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb4dU)))
#undef str_100241e0
#define str_100241e0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xbd8U)))
#define abStack_162 (*(byte (*)[306])(frame + 30))
#define local_168 (*(uint *)(frame + 24))
#define local_30 (*(int *)(frame + 336))
#define local_2c (*(uint *)(frame + 340))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000cb74
 */

undefined4 recovered_1000cb74(int param_1)

{
  unsigned char frame[416] __attribute__((aligned(16))) = {0};

  code *pcVar1;
  byte bVar2;
  uint uVar3;
  ulong uVar4;
  byte *pbVar5;
  char *pcVar6;
  byte *pbVar7;
  int iVar8;
  uint uVar9;
  char cVar10;
  undefined1 *puVar11;
  uint *puVar12;
  byte *pbVar13;
  byte bVar14;
  int iVar15;
  uint uVar16;
  undefined1 uVar17;
  byte *pbVar18;
  char *pcVar19;
  byte *pbVar20;
  int unaff_r9;
  bool bVar21;
  bool bVar22;

  memset(&local_30,0,0xc);
  if (param_1 < 0) {
    return 0;
  }
  iVar15 = Ram40010800;
  if ((iVar15 == 0x50414d57) && (iVar15 = Ram40010804, iVar15 != 0)) {
    uVar3 = Ram40010808;
    bVar22 = 0xb < uVar3;
    bVar21 = uVar3 == 0xc;
    if (bVar22) {
      uVar3 = Ram40010808;
      bVar21 = uVar3 == 0xcb;
    }
    if ((bVar22 && 0xca < uVar3) && !bVar21) {
      pcVar1 = (code *)UINT_400108c8;
      if (pcVar1 == (code *)0x0) {
        uVar3 = 0;
      }
      else {
        uVar3 = (*pcVar1)(param_1,str_100237bc,&local_30);
      }
      goto LAB_1000cc14;
    }
  }
  iVar15 = Ram40010800;
  uVar3 = 0;
  if ((iVar15 == 0x50414d57) && (iVar15 = Ram40010804, iVar15 != 0)) {
    uVar16 = Ram40010808;
    bVar21 = 0xb < uVar16;
    if (bVar21) {
      uVar16 = Ram40010808;
    }
    if ((bVar21 && 0x37 < uVar16) && (pcVar1 = (code *)UINT_40010834, pcVar1 != (code *)0x0)) {
      uVar3 = (*pcVar1)(str_100237bc,&local_30);
    }
  }
LAB_1000cc14:
  if (uVar3 != 0) {
    if (local_2c != 0) {
      unaff_r9 = local_30;
    }
    if (local_2c != 0 && unaff_r9 != 0) {
      local_168 = 0;
LAB_1000cc74:
      pbVar20 = abStack_162 + 1;
      iVar15 = 0;
      do {
        bVar2 = *(byte *)(unaff_r9 + local_168 + iVar15);
        if (bVar2 == 10) {
          iVar8 = iVar15;
LAB_1000ccc0:
          uVar3 = local_168 + iVar15;
          iVar15 = iVar8;
          break;
        }
        if (iVar15 == 0x130) {
          iVar8 = 0x130;
          goto LAB_1000ccc0;
        }
        pbVar20[iVar15] = bVar2;
        iVar15 = iVar15 + 1;
        uVar3 = local_168 + iVar15;
      } while (local_168 + iVar15 < local_2c);
      local_168 = uVar3;
      if (local_168 < local_2c) {
        do {
          pcVar6 = (char *)(unaff_r9 + local_168);
          local_168 = local_168 + 1;
          if (*pcVar6 == '\n') goto LAB_1000ccf0;
        } while (local_2c != local_168);
        local_168 = local_2c;
      }
LAB_1000ccf0:
      pbVar20[iVar15] = 0;
      uVar4 = strlen((char *)pbVar20);
      if (uVar4 != 0) {
        do {
          uVar3 = abStack_162[uVar4] - 9;
          if (0x17 < uVar3) break;
          bVar21 = (1 << (uVar3 & 0xff) & 0x800011U) == 0;
          if (!bVar21) {
            abStack_162[uVar4] = 0;
            uVar4 = uVar4 - 1;
            bVar21 = uVar4 == 0;
          }
        } while (!bVar21);
      }
      pbVar20 = abStack_162;
      do {
        switch((uintptr_t)(pbVar20[1])) {
        case 0:
          goto switchD_1000cd44_caseD_0;
        default:
          uVar4 = strlen(&DAT_100237ce);
          pbVar18 = pbVar20 + 1;
          iVar15 = strncmp((char *)pbVar18,&DAT_100237ce,uVar4);
          if (iVar15 != 0) {
            pbVar5 = (byte *)strchr((char *)pbVar18,0x3d);
            if (pbVar5 != (byte *)0x0) {
              *pbVar5 = 0;
              uVar4 = strlen((char *)pbVar18);
              if (uVar4 == 0) goto LAB_1000ce64;
              goto LAB_1000ce44;
            }
          }
          goto switchD_1000cd44_caseD_0;
        case 9:
        case 0xd:
        case 0x20:
          pbVar20 = pbVar20 + 1;
        }
      } while( true );
    }
  }
  return 0;
  while( true ) {
    bVar21 = (1 << (pbVar20[uVar4] - 9 & 0xff) & 0x800011U) == 0;
    if (!bVar21) {
      pbVar20[uVar4] = 0;
      uVar4 = uVar4 - 1;
      bVar21 = uVar4 == 0;
    }
    if (bVar21) break;
LAB_1000ce44:
    if (0x17 < pbVar20[uVar4] - 9) break;
  }
LAB_1000ce64:
  pbVar20 = pbVar5 + 2;
  while( true ) {
    pbVar5 = pbVar5 + 1;
    if ((0x17 < *pbVar5 - 9) || ((1 << (*pbVar5 - 9 & 0xff) & 0x800011U) == 0)) break;
    pbVar20 = pbVar20 + 1;
  }
  iVar15 = strcmp((char *)pbVar18,str_100237d1);
  if (iVar15 == 0) {
    iVar15 = 0;
    do {
      switch((uintptr_t)(pbVar5[iVar15])) {
      case 9:
      case 0xd:
      case 0x20:
        pbVar20 = pbVar20 + 1;
        iVar15 = iVar15 + 1;
        break;
      default:
        goto switchD_1000d46c_caseD_a;
      case 0x22:
        iVar15 = 0;
        pbVar5 = &DAT_10028fe8;
        while( true ) {
          bVar2 = *pbVar20;
          if ((bVar2 == 0) || (bVar2 == 0x22 || iVar15 == 0xf0)) break;
          (&DAT_10028fe8)[iVar15] = bVar2;
          iVar15 = iVar15 + 1;
          pbVar20 = pbVar20 + 1;
        }
        (&DAT_10028fe8)[iVar15] = 0;
        goto LAB_1000d56c;
      }
    } while( true );
  }
  iVar15 = strcmp((char *)pbVar18,str_100237dc);
  if (iVar15 == 0) {
    do {
      uVar3 = (uint)*pbVar5;
      switch((uintptr_t)(uVar3)) {
      case 0:
        goto switchD_1000cd44_caseD_0;
      default:
        uVar16 = 0;
        goto joined_r0x1000d0b4;
      case 9:
      case 0xd:
      case 0x20:
        pbVar20 = pbVar20 + 1;
        pbVar5 = pbVar5 + 1;
      }
    } while( true );
  }
  iVar15 = strcmp((char *)pbVar18,str_100237ed);
  if (iVar15 == 0) {
    do {
      uVar3 = (uint)*pbVar5;
      switch((uintptr_t)(uVar3)) {
      case 0:
        goto switchD_1000cd44_caseD_0;
      default:
        uVar16 = 0;
        goto joined_r0x1000d1ac;
      case 9:
      case 0xd:
      case 0x20:
        pbVar20 = pbVar20 + 1;
        pbVar5 = pbVar5 + 1;
      }
    } while( true );
  }
  iVar15 = strcmp((char *)pbVar18,str_100237fa);
  if (iVar15 == 0) {
    do {
      uVar16 = (uint)*pbVar5;
      switch((uintptr_t)(uVar16)) {
      case 0:
        goto switchD_1000cd44_caseD_0;
      default:
        uVar3 = 0;
        goto joined_r0x1000d2ac;
      case 9:
      case 0xd:
      case 0x20:
        pbVar20 = pbVar20 + 1;
        pbVar5 = pbVar5 + 1;
      }
    } while( true );
  }
  iVar15 = strcmp((char *)pbVar18,str_1002380d);
  if (iVar15 == 0) {
    do {
      uVar16 = (uint)*pbVar5;
      switch((uintptr_t)(uVar16)) {
      case 0:
        goto switchD_1000cd44_caseD_0;
      default:
        uVar3 = 0;
        goto joined_r0x1000d394;
      case 9:
      case 0xd:
      case 0x20:
        pbVar20 = pbVar20 + 1;
        pbVar5 = pbVar5 + 1;
      }
    } while( true );
  }
  iVar15 = strcmp((char *)pbVar18,str_1002381d);
  if (iVar15 == 0) {
    iVar15 = 0;
    pbVar18 = pbVar20;
    do {
      switch((uintptr_t)(pbVar5[iVar15])) {
      case 9:
      case 0xd:
      case 0x20:
        pbVar18 = pbVar18 + 1;
        iVar15 = iVar15 + 1;
        break;
      default:
        goto switchD_1000d6f0_caseD_a;
      case 0x22:
        iVar15 = 0;
        while( true ) {
          bVar2 = *pbVar18;
          if ((bVar2 == 0) || (bVar2 == 0x22 || iVar15 == 0xf0)) break;
          (&DAT_10028fe8)[iVar15] = bVar2;
          iVar15 = iVar15 + 1;
          pbVar18 = pbVar18 + 1;
        }
        pbVar18 = &DAT_10028fe8;
        (&DAT_10028fe8)[iVar15] = 0;
        goto LAB_1000d874;
      }
    } while( true );
  }
  iVar15 = strcmp((char *)pbVar18,str_1002382c);
  if ((iVar15 == 0) || (iVar15 = strcmp((char *)pbVar18,str_1002383b), iVar15 == 0)) {
    pbVar18 = &DAT_10028fe8;
    do {
      switch((uintptr_t)(pbVar20[-1])) {
      case 9:
      case 0xd:
      case 0x20:
        pbVar20 = pbVar20 + 1;
        break;
      default:
        goto switchD_1000d65c_caseD_a;
      case 0x22:
        for (iVar15 = 0;
            (bVar2 = pbVar20[-iVar15], bVar2 != 0 && (bVar2 != 0x22 && iVar15 != -0xf0));
            iVar15 = iVar15 + -1) {
          (&DAT_10028fe8)[-iVar15] = bVar2;
        }
        (&DAT_10028fe8)[-iVar15] = 0;
        goto LAB_1000d7ac;
      }
    } while( true );
  }
  iVar15 = strcmp((char *)pbVar18,str_10023851);
  if (iVar15 == 0) {
    pcVar6 = recovered_1000e050(pbVar5);
    cVar10 = *pcVar6;
    if (cVar10 == '\0') goto switchD_1000cd44_caseD_0;
    pcVar19 = str_10024155;
    uVar3 = 0;
    do {
      uVar16 = uVar3 + 1;
      str_10024155[uVar3] = cVar10;
      if (0x7e < uVar16) break;
      cVar10 = pcVar6[uVar3 + 1];
      uVar3 = uVar16;
    } while (cVar10 != '\0');
  }
  else {
    iVar15 = strcmp((char *)pbVar18,str_10023862);
    if (iVar15 != 0) goto switchD_1000cd44_caseD_0;
    pcVar6 = recovered_1000e050(pbVar5);
    cVar10 = *pcVar6;
    if (cVar10 == '\0') goto switchD_1000cd44_caseD_0;
    pcVar19 = str_100241e0;
    uVar3 = 0;
    do {
      uVar16 = uVar3 + 1;
      str_100241e0[uVar3] = cVar10;
      if (0xef < uVar16) break;
      cVar10 = pcVar6[uVar3 + 1];
      uVar3 = uVar16;
    } while (cVar10 != '\0');
  }
  pcVar19[uVar16] = '\0';
  goto switchD_1000cd44_caseD_0;
switchD_1000d46c_caseD_a:
  pbVar5 = pbVar5 + iVar15;
LAB_1000d56c:
  iVar15 = strcmp((char *)pbVar5,str_1002386d);
  if (iVar15 == 0) {
    uVar3 = 0;
  }
  else {
    iVar15 = strcmp((char *)pbVar5,str_10023873);
    if (iVar15 == 0) {
      uVar3 = 1;
    }
    else {
      iVar15 = strcmp((char *)pbVar5,&DAT_10023879);
      if (iVar15 == 0) {
        uVar3 = 2;
      }
      else {
        iVar15 = strcmp((char *)pbVar5,str_1002387e);
        if (iVar15 != 0) goto switchD_1000cd44_caseD_0;
        uVar3 = 3;
      }
    }
  }
  puVar12 = &DAT_10024148;
LAB_1000cc54:
  *puVar12 = uVar3;
switchD_1000cd44_caseD_0:
  if (local_2c <= local_168) {
    DAT_100242d4 = param_1;
    return 1;
  }
  goto LAB_1000cc74;
joined_r0x1000d0b4:
  if (9 < (uVar3 - 0x30 & 0xff)) goto LAB_1000d0b8;
  if ((0x19999999 < uVar16) || ((uVar9 = uVar3 - 0x30 & 0xff, uVar16 == 0x19999999 && (5 < uVar9))))
  goto switchD_1000cd44_caseD_0;
  uVar3 = (uint)*pbVar20;
  uVar16 = uVar9 + uVar16 * 10;
  pbVar20 = pbVar20 + 1;
  goto joined_r0x1000d0b4;
LAB_1000d0b8:
  if ((0xd < uVar3) || ((1 << uVar3 & 0x2401U) == 0)) goto switchD_1000cd44_caseD_0;
  if (99 < uVar16) {
    uVar16 = 100;
  }
  puVar11 = &DAT_10024144;
  goto LAB_1000d1ec;
joined_r0x1000d1ac:
  if (9 < (uVar3 - 0x30 & 0xff)) goto LAB_1000d1b0;
  if ((0x19999999 < uVar16) || ((uVar9 = uVar3 - 0x30 & 0xff, uVar16 == 0x19999999 && (5 < uVar9))))
  goto switchD_1000cd44_caseD_0;
  uVar3 = (uint)*pbVar20;
  uVar16 = uVar9 + uVar16 * 10;
  pbVar20 = pbVar20 + 1;
  goto joined_r0x1000d1ac;
LAB_1000d1b0:
  if ((0xd < uVar3) || ((1 << uVar3 & 0x2401U) == 0)) goto switchD_1000cd44_caseD_0;
  if (99 < uVar16) {
    uVar16 = 100;
  }
  puVar11 = &DAT_10028fe0;
LAB_1000d1ec:
  *puVar11 = (char)((uVar16 * 0xff + 0x32) * 0x147b >> 0x13);
  goto switchD_1000cd44_caseD_0;
joined_r0x1000d2ac:
  if (9 < (uVar16 - 0x30 & 0xff)) goto LAB_1000d2b0;
  if ((0x19999999 < uVar3) || ((uVar9 = uVar16 - 0x30 & 0xff, uVar3 == 0x19999999 && (5 < uVar9))))
  goto switchD_1000cd44_caseD_0;
  uVar16 = (uint)*pbVar20;
  uVar3 = uVar9 + uVar3 * 10;
  pbVar20 = pbVar20 + 1;
  goto joined_r0x1000d2ac;
LAB_1000d2b0:
  if ((0xd < uVar16) || ((1 << uVar16 & 0x2401U) == 0)) goto switchD_1000cd44_caseD_0;
  if (0xfff < uVar3) {
    uVar3 = 0x1000;
  }
  puVar12 = &DAT_10024150;
  goto LAB_1000cc54;
joined_r0x1000d394:
  if (9 < (uVar16 - 0x30 & 0xff)) goto LAB_1000d398;
  if ((0x19999999 < uVar3) || ((uVar9 = uVar16 - 0x30 & 0xff, uVar3 == 0x19999999 && (5 < uVar9))))
  goto switchD_1000cd44_caseD_0;
  uVar16 = (uint)*pbVar20;
  uVar3 = uVar9 + uVar3 * 10;
  pbVar20 = pbVar20 + 1;
  goto joined_r0x1000d394;
LAB_1000d398:
  if ((0xd < uVar16) || ((1 << uVar16 & 0x2401U) == 0)) goto switchD_1000cd44_caseD_0;
  if (0xfff < uVar3) {
    uVar3 = 0x1000;
  }
  puVar12 = &DAT_1002414c;
  goto LAB_1000cc54;
switchD_1000d6f0_caseD_a:
  pbVar18 = pbVar5 + iVar15;
LAB_1000d874:
  pbVar18 = pbVar18 + 3;
  while( true ) {
    uVar3 = (uint)pbVar18[-3];
    if ((0x17 < uVar3 - 9) || ((1 << (uVar3 - 9 & 0xff) & 0x800011U) == 0)) break;
    pbVar18 = pbVar18 + 1;
  }
  pbVar13 = pbVar18 + -3;
  uVar16 = (uint)*pbVar13;
  if (uVar16 == 0) {
    bVar14 = 0x55;
    bVar2 = 0;
LAB_1000d990:
    iVar15 = 0;
    if (bVar2 != bVar14) goto LAB_1000d99c;
  }
  else {
    if (uVar16 - 0x41 < 0x1a) {
      uVar16 = uVar16 | 0x20;
    }
    if (uVar16 == 0x75) {
      uVar16 = (uint)pbVar18[-2];
      if (uVar16 == 0) {
        bVar14 = 0x54;
        bVar2 = 0;
      }
      else {
        if (uVar16 - 0x41 < 0x1a) {
          uVar16 = uVar16 | 0x20;
        }
        if (uVar16 != 0x74) goto LAB_1000d99c;
        uVar16 = (uint)pbVar18[-1];
        if (uVar16 == 0) {
          bVar14 = 0x43;
          bVar2 = 0;
        }
        else {
          if (uVar16 - 0x41 < 0x1a) {
            uVar16 = uVar16 | 0x20;
          }
          if (uVar16 != 99) goto LAB_1000d99c;
          bVar2 = *pbVar18;
          bVar14 = 0;
        }
      }
      goto LAB_1000d990;
    }
LAB_1000d99c:
    uVar16 = (uint)*pbVar13;
    if (uVar16 == 0) {
      bVar14 = 0x47;
      bVar2 = 0;
LAB_1000da1c:
      iVar15 = 0;
      if (bVar2 == bVar14) goto LAB_1000da28;
    }
    else {
      if (uVar16 - 0x41 < 0x1a) {
        uVar16 = uVar16 | 0x20;
      }
      if (uVar16 == 0x67) {
        uVar16 = (uint)pbVar18[-2];
        if (uVar16 == 0) {
          bVar14 = 0x4d;
          bVar2 = 0;
        }
        else {
          if (uVar16 - 0x41 < 0x1a) {
            uVar16 = uVar16 | 0x20;
          }
          if (uVar16 != 0x6d) goto LAB_1000da3c;
          uVar16 = (uint)pbVar18[-1];
          if (uVar16 == 0) {
            bVar14 = 0x54;
            bVar2 = 0;
          }
          else {
            if (uVar16 - 0x41 < 0x1a) {
              uVar16 = uVar16 | 0x20;
            }
            if (uVar16 != 0x74) goto LAB_1000da3c;
            bVar2 = *pbVar18;
            bVar14 = 0;
          }
        }
        goto LAB_1000da1c;
      }
    }
LAB_1000da3c:
    if (uVar3 < 0x67) {
      if (uVar3 != 0x47) {
        if (uVar3 == 0x55) goto LAB_1000da68;
        goto LAB_1000daac;
      }
LAB_1000da8c:
      bVar2 = pbVar18[-2] | 0x20;
      bVar21 = bVar2 == 0x6d;
      if (bVar21) {
        bVar2 = pbVar18[-1] | 0x20;
      }
      if (!bVar21 || bVar2 != 0x74) {
        pbVar18 = pbVar13;
      }
    }
    else {
      if (uVar3 == 0x67) goto LAB_1000da8c;
      if (uVar3 == 0x75) {
LAB_1000da68:
        bVar2 = pbVar18[-2] | 0x20;
        bVar21 = bVar2 == 0x74;
        if (bVar21) {
          bVar2 = pbVar18[-1] | 0x20;
        }
        if (!bVar21 || bVar2 != 99) {
          if (uVar3 == 0x67) goto LAB_1000da8c;
          goto LAB_1000daac;
        }
      }
      else {
LAB_1000daac:
        pbVar18 = pbVar13;
      }
    }
    if (*pbVar18 == 0x2d) {
      pbVar18 = pbVar18 + 1;
      iVar15 = -1;
    }
    else {
      iVar15 = 1;
      if (*pbVar18 == 0x2b) {
        pbVar18 = pbVar18 + 1;
      }
    }
    uVar3 = (uint)(*pbVar18 == 0x2d);
    bVar2 = pbVar18[uVar3];
    if ((byte)(bVar2 - 0x3a) < 0xf6) goto switchD_1000cd44_caseD_0;
    uVar16 = 0;
    pbVar13 = pbVar18 + uVar3 + 1;
    do {
      bVar14 = bVar2 - 0x30U;
      if (0xccccccc < (int)uVar16) goto switchD_1000cd44_caseD_0;
      pbVar7 = pbVar13 + 1;
      bVar2 = *pbVar13;
      uVar16 = uVar16 * 10 + (uint)bVar14;
      pbVar13 = pbVar7;
    } while ((byte)(bVar2 - 0x30U) < 10);
    if (*pbVar18 == 0x2d) {
      uVar16 = -uVar16;
    }
    if (bVar2 != 0) {
      if (bVar2 == 0x3a) {
        uVar3 = (uint)(*pbVar7 == 0x2d);
        if (0xfffffff5 < pbVar7[uVar3] - 0x3a) {
          uVar9 = 0;
          do {
            bVar2 = pbVar7[uVar3];
            if (9 < (byte)(bVar2 - 0x30U)) {
              if (*pbVar7 == 0x2d) {
                uVar9 = -uVar9;
              }
              if ((((uVar9 < 0x3c) && (bVar2 == 0)) && (uVar16 < 0x19)) &&
                 (iVar15 = (uVar9 + uVar16 * 0x3c) * iVar15, iVar15 + 0x5a0U < 0xb41))
              goto LAB_1000da28;
              break;
            }
            uVar3 = uVar3 + 1;
            bVar21 = (int)uVar9 < 0xccccccd;
            uVar9 = uVar9 * 10 + (uint)(byte)(bVar2 - 0x30U);
          } while (bVar21);
        }
      }
      goto switchD_1000cd44_caseD_0;
    }
    uVar3 = (uint)*pbVar5;
    while (uVar3 != 0) {
      uVar9 = (uint)*pbVar20;
      if (uVar3 - 0x41 < 0x1a) {
        uVar3 = uVar3 | 0x20;
      }
      if (uVar3 == 0x75) {
        if (uVar9 == 0) {
          pcVar6 = &DAT_10023887;
        }
        else {
          uVar3 = uVar9;
          if (uVar9 - 0x41 < 0x1a) {
            uVar3 = uVar9 | 0x20;
          }
          if (uVar3 != 0x74) goto LAB_1000dc10;
          uVar3 = (uint)pbVar20[1];
          if (uVar3 == 0) {
            pcVar6 = &DAT_10023888;
          }
          else {
            if (uVar3 - 0x41 < 0x1a) {
              uVar3 = uVar3 | 0x20;
            }
            if (uVar3 != 99) goto LAB_1000dc10;
            if (pbVar20[2] != 0) goto LAB_1000dbe4;
            pcVar6 = &DAT_10023889;
          }
        }
        if (*pcVar6 == '\0') goto LAB_1000dbe4;
      }
LAB_1000dc10:
      pbVar20 = pbVar20 + 1;
      uVar3 = uVar9;
    }
    iVar8 = recovered_1000e1a0(pbVar5,&DAT_1002388a);
    if (iVar8 != 0) {
LAB_1000dbe4:
      uVar16 = uVar16 * 0x3c;
    }
    if (0xb40 < uVar16 + 0x5a0) goto switchD_1000cd44_caseD_0;
    iVar15 = uVar16 * iVar15;
  }
LAB_1000da28:
  DAT_10028fe4 = iVar15;
  goto switchD_1000cd44_caseD_0;
switchD_1000d65c_caseD_a:
  pbVar18 = pbVar20 + -1;
LAB_1000d7ac:
  uVar3 = (uint)*pbVar18;
  if (uVar3 == 0) {
    bVar14 = 0x74;
    bVar2 = 0;
LAB_1000dc98:
    uVar17 = 1;
    if (bVar2 != bVar14) goto LAB_1000dca4;
  }
  else {
    if (uVar3 - 0x41 < 0x1a) {
      uVar3 = uVar3 | 0x20;
    }
    if (uVar3 == 0x74) {
      uVar3 = (uint)pbVar18[1];
      if (uVar3 == 0) {
        bVar14 = 0x72;
        bVar2 = 0;
      }
      else {
        if (uVar3 - 0x41 < 0x1a) {
          uVar3 = uVar3 | 0x20;
        }
        if (uVar3 != 0x72) goto LAB_1000dca4;
        uVar3 = (uint)pbVar18[2];
        if (uVar3 == 0) {
          bVar14 = 0x75;
          bVar2 = 0;
        }
        else {
          if (uVar3 - 0x41 < 0x1a) {
            uVar3 = uVar3 | 0x20;
          }
          if (uVar3 != 0x75) goto LAB_1000dca4;
          uVar3 = (uint)pbVar18[3];
          if (uVar3 == 0) {
            bVar14 = 0x65;
            bVar2 = 0;
          }
          else {
            if (uVar3 - 0x41 < 0x1a) {
              uVar3 = uVar3 | 0x20;
            }
            if (uVar3 != 0x65) goto LAB_1000dca4;
            bVar2 = pbVar18[4];
            bVar14 = 0;
          }
        }
      }
      goto LAB_1000dc98;
    }
LAB_1000dca4:
    uVar3 = (uint)*pbVar18;
    if (uVar3 == 0) {
      bVar14 = 0x79;
      bVar2 = 0;
LAB_1000dd24:
      uVar17 = 1;
      if (bVar2 == bVar14) goto LAB_1000df28;
    }
    else {
      if (uVar3 - 0x41 < 0x1a) {
        uVar3 = uVar3 | 0x20;
      }
      if (uVar3 == 0x79) {
        uVar3 = (uint)pbVar18[1];
        if (uVar3 == 0) {
          bVar14 = 0x65;
          bVar2 = 0;
        }
        else {
          if (uVar3 - 0x41 < 0x1a) {
            uVar3 = uVar3 | 0x20;
          }
          if (uVar3 != 0x65) goto LAB_1000dd30;
          uVar3 = (uint)pbVar18[2];
          if (uVar3 == 0) {
            bVar14 = 0x73;
            bVar2 = 0;
          }
          else {
            if (uVar3 - 0x41 < 0x1a) {
              uVar3 = uVar3 | 0x20;
            }
            if (uVar3 != 0x73) goto LAB_1000dd30;
            bVar2 = pbVar18[3];
            bVar14 = 0;
          }
        }
        goto LAB_1000dd24;
      }
    }
LAB_1000dd30:
    uVar3 = (uint)*pbVar18;
    if (uVar3 == 0) {
      bVar14 = 0x6f;
      bVar2 = 0;
LAB_1000dd88:
      uVar17 = 1;
      if (bVar2 == bVar14) goto LAB_1000df28;
    }
    else {
      if (uVar3 - 0x41 < 0x1a) {
        uVar3 = uVar3 | 0x20;
      }
      if (uVar3 == 0x6f) {
        uVar3 = (uint)pbVar18[1];
        if (uVar3 == 0) {
          bVar14 = 0x6e;
          bVar2 = 0;
        }
        else {
          if (uVar3 - 0x41 < 0x1a) {
            uVar3 = uVar3 | 0x20;
          }
          if (uVar3 != 0x6e) goto LAB_1000dd94;
          bVar2 = pbVar18[2];
          bVar14 = 0;
        }
        goto LAB_1000dd88;
      }
    }
LAB_1000dd94:
    iVar15 = strcmp((char *)pbVar18,&DAT_1002388e);
    if (iVar15 == 0) {
      uVar17 = 1;
    }
    else {
      uVar3 = (uint)*pbVar18;
      if (uVar3 == 0) {
        bVar14 = 0x66;
        bVar2 = 0;
LAB_1000dec4:
        uVar17 = 0;
        if (bVar2 == bVar14) goto LAB_1000df28;
      }
      else {
        if (uVar3 - 0x41 < 0x1a) {
          uVar3 = uVar3 | 0x20;
        }
        if (uVar3 == 0x66) {
          uVar3 = (uint)pbVar18[1];
          if (uVar3 == 0) {
            bVar14 = 0x61;
            bVar2 = 0;
          }
          else {
            if (uVar3 - 0x41 < 0x1a) {
              uVar3 = uVar3 | 0x20;
            }
            if (uVar3 != 0x61) goto LAB_1000ded0;
            uVar3 = (uint)pbVar18[2];
            if (uVar3 == 0) {
              bVar14 = 0x6c;
              bVar2 = 0;
            }
            else {
              if (uVar3 - 0x41 < 0x1a) {
                uVar3 = uVar3 | 0x20;
              }
              if (uVar3 != 0x6c) goto LAB_1000ded0;
              uVar3 = (uint)pbVar18[3];
              if (uVar3 == 0) {
                bVar14 = 0x73;
                bVar2 = 0;
              }
              else {
                if (uVar3 - 0x41 < 0x1a) {
                  uVar3 = uVar3 | 0x20;
                }
                if (uVar3 != 0x73) goto LAB_1000ded0;
                uVar3 = (uint)pbVar18[4];
                if (uVar3 == 0) {
                  bVar14 = 0x65;
                  bVar2 = 0;
                }
                else {
                  if (uVar3 - 0x41 < 0x1a) {
                    uVar3 = uVar3 | 0x20;
                  }
                  if (uVar3 != 0x65) goto LAB_1000ded0;
                  bVar2 = pbVar18[5];
                  bVar14 = 0;
                }
              }
            }
          }
          goto LAB_1000dec4;
        }
      }
LAB_1000ded0:
      bVar21 = recovered_1000e13c(pbVar18,&DAT_10023890);
      uVar17 = 0;
      if ((!bVar21) && (bVar21 = recovered_1000e13c(pbVar18,&DAT_10023893), !bVar21)) {
        iVar15 = strcmp((char *)pbVar18,&DAT_10023897);
        if (iVar15 != 0) goto switchD_1000cd44_caseD_0;
      }
    }
  }
LAB_1000df28:
  DAT_10024154 = uVar17;
  goto switchD_1000cd44_caseD_0;
}

#undef DAT_100237ce
#undef DAT_10023879
#undef DAT_10023887
#undef DAT_10023888
#undef DAT_10023889
#undef DAT_1002388a
#undef DAT_1002388e
#undef DAT_10023890
#undef DAT_10023893
#undef DAT_10023897
#undef DAT_10024144
#undef DAT_10024148
#undef DAT_1002414c
#undef DAT_10024150
#undef DAT_10024154
#undef DAT_100242d4
#undef DAT_10028fe0
#undef DAT_10028fe4
#undef DAT_10028fe8
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef Ram40010800
#undef Ram40010804
#undef Ram40010808
#undef UINT_40010834
#undef UINT_400108c8
#undef str_100237bc
#undef str_100237d1
#undef str_100237dc
#undef str_100237ed
#undef str_100237fa
#undef str_1002380d
#undef str_1002381d
#undef str_1002382c
#undef str_1002383b
#undef str_10023851
#undef str_10023862
#undef str_1002386d
#undef str_10023873
#undef str_1002387e
#undef str_10024155
#undef str_100241e0
#undef abStack_162
#undef local_168
#undef local_30
#undef local_2c

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
#undef UINT_400108c8
#define UINT_400108c8 (*(uint *)(0x400108c8U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000dfb8
 */

uint recovered_1000dfb8(int param_1,char *param_2,void *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  code *UNRECOVERED_JUMPTABLE_00;
  uint uVar2;
  bool bVar3;
  bool bVar4;

  iVar1 = Ram40010800;
  if ((iVar1 == 0x50414d57) && (iVar1 = Ram40010804, iVar1 != 0)) {
    uVar2 = Ram40010808;
    bVar4 = 0xb < uVar2;
    bVar3 = uVar2 == 0xc;
    if (bVar4) {
      uVar2 = Ram40010808;
      bVar3 = uVar2 == 0xcb;
    }
    if ((bVar4 && 0xca < uVar2) && !bVar3) {
      UNRECOVERED_JUMPTABLE_00 = (code *)UINT_400108c8;
      if (UNRECOVERED_JUMPTABLE_00 == (code *)0x0) {
        return 0;
      }
                    /* WARNING: Could not recover jumptable at 0x1000e034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*UNRECOVERED_JUMPTABLE_00)(param_1,param_2,param_3);
      return uVar2;
    }
  }
  iVar1 = Ram40010800;
  if ((iVar1 == 0x50414d57) && (iVar1 = Ram40010804, iVar1 != 0)) {
    uVar2 = Ram40010808;
    bVar3 = 0xb < uVar2;
    if (bVar3) {
      uVar2 = Ram40010808;
    }
    if ((bVar3 && 0x37 < uVar2) &&
       (UNRECOVERED_JUMPTABLE_00 = (code *)UINT_40010834, UNRECOVERED_JUMPTABLE_00 != (code *)0x0))
    {
                    /* WARNING: Could not recover jumptable at 0x1000e04c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*UNRECOVERED_JUMPTABLE_00)(param_2,param_3);
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
#undef UINT_40010834
#undef UINT_400108c8

#undef DAT_10023774
#define DAT_10023774 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x16cU)))
#undef DAT_10028fe8
#define DAT_10028fe8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x59e0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000e050
 */

undefined1 * recovered_1000e050(undefined1 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  int iVar2;

  if (param_1 == (undefined1 *)0x0) {
    return &DAT_10023774;
  }
  do {
    switch((uintptr_t)(*param_1)) {
    case 9:
    case 0xd:
    case 0x20:
      param_1 = param_1 + 1;
      break;
    case 10:
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
    case 0x1b:
    case 0x1c:
    case 0x1d:
    case 0x1e:
    case 0x1f:
    case 0x21:
      return param_1;
    case 0x22:
      for (iVar2 = 0;
          (cVar1 = param_1[iVar2 + 1], cVar1 != '\0' && (cVar1 != '\"' && iVar2 != 0xf0));
          iVar2 = iVar2 + 1) {
        (&DAT_10028fe8)[iVar2] = cVar1;
      }
      (&DAT_10028fe8)[iVar2] = 0;
      return &DAT_10028fe8;
    default:
      return param_1;
    }
  } while( true );
}

#undef DAT_10023774
#undef DAT_10028fe8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000e13c
 */

bool recovered_1000e13c(byte *param_1,byte *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;

  if (param_1 == (byte *)0x0 || param_2 == (byte *)0x0) {
    return false;
  }
  do {
    uVar1 = (uint)*param_1;
    uVar2 = (uint)*param_2;
    if (uVar1 == 0 || uVar2 == 0) {
      return uVar1 == uVar2;
    }
    param_2 = param_2 + 1;
    if (uVar2 - 0x41 < 0x1a) {
      uVar2 = uVar2 | 0x20;
    }
    if (uVar1 - 0x41 < 0x1a) {
      uVar1 = uVar1 | 0x20;
    }
    param_1 = param_1 + 1;
  } while (uVar1 == uVar2);
  return false;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000e1a0
 */

undefined4 recovered_1000e1a0(byte *param_1,char *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint in_r12;
  int iVar2;
  int iVar3;

  if (param_1 != (byte *)0x0 && param_2 != (char *)0x0) {
    if (*param_2 != '\0') {
      in_r12 = (uint)*param_1;
    }
    if (*param_2 != '\0' && in_r12 != 0) {
      iVar3 = 0;
LAB_1000e1d8:
      uVar1 = (uint)(byte)param_2[iVar3];
      if (uVar1 == 0) {
        return 1;
      }
      if (uVar1 - 0x41 < 0x1a) {
        uVar1 = uVar1 | 0x20;
      }
      if (in_r12 - 0x41 < 0x1a) {
        in_r12 = in_r12 | 0x20;
      }
      if (in_r12 == uVar1) goto code_r0x1000e208;
      goto LAB_1000e228;
    }
  }
  return 0;
code_r0x1000e208:
  iVar2 = iVar3 + 1;
  in_r12 = (uint)param_1[iVar3 + 1];
  iVar3 = iVar2;
  if (in_r12 == 0) {
    if (param_2[iVar2] == '\0') {
      return 1;
    }
LAB_1000e228:
    param_1 = param_1 + 1;
    in_r12 = (uint)*param_1;
    if (in_r12 == 0) {
      return 0;
    }
    iVar3 = 0;
  }
  goto LAB_1000e1d8;
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
#undef UINT_40010834
#define UINT_40010834 (*(uint *)(0x40010834U))
#undef UINT_400108c8
#define UINT_400108c8 (*(uint *)(0x400108c8U))
#undef str_1002389e
#define str_1002389e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x296U)))
#undef str_100238bd
#define str_100238bd (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2b5U)))
#undef str_100238dc
#define str_100238dc (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2d4U)))
#define auStack_20 (*(undefined1 (*)[12])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000e24c
 */

bool recovered_1000e24c(int param_1)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  int iVar1;
  code *pcVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;

  if (param_1 < 0) {
    return false;
  }
  memset(auStack_20,0,0xc);
  iVar1 = Ram40010800;
  if ((iVar1 == 0x50414d57) && (iVar1 = Ram40010804, iVar1 != 0)) {
    uVar3 = Ram40010808;
    bVar5 = 0xb < uVar3;
    bVar4 = uVar3 == 0xc;
    if (bVar5) {
      uVar3 = Ram40010808;
      bVar4 = uVar3 == 0xcb;
    }
    if ((!bVar5 || uVar3 < 0xcb) || bVar4) goto LAB_1000e2b4;
    pcVar2 = (code *)UINT_400108c8;
    if (pcVar2 != (code *)0x0) {
      uVar3 = (*pcVar2)(param_1,str_1002389e,auStack_20);
LAB_1000e42c:
      if (uVar3 != 0) {
        return true;
      }
    }
  }
  else {
LAB_1000e2b4:
    iVar1 = Ram40010800;
    if ((iVar1 == 0x50414d57) && (iVar1 = Ram40010804, iVar1 != 0)) {
      uVar3 = Ram40010808;
      bVar4 = 0xb < uVar3;
      if (bVar4) {
        uVar3 = Ram40010808;
      }
      if ((bVar4 && 0x37 < uVar3) && (pcVar2 = (code *)UINT_40010834, pcVar2 != (code *)0x0)) {
        uVar3 = (*pcVar2)(str_1002389e,auStack_20);
        goto LAB_1000e42c;
      }
    }
  }
  memset(auStack_20,0,0xc);
  iVar1 = Ram40010800;
  if ((iVar1 == 0x50414d57) && (iVar1 = Ram40010804, iVar1 != 0)) {
    uVar3 = Ram40010808;
    bVar4 = 0xb < uVar3;
    if (bVar4) {
      uVar3 = Ram40010808;
    }
    if (!bVar4 || uVar3 < 0xcc) goto LAB_1000e31c;
    pcVar2 = (code *)UINT_400108c8;
    if (pcVar2 != (code *)0x0) {
      uVar3 = (*pcVar2)(param_1,str_100238bd,auStack_20);
LAB_1000e488:
      if (uVar3 != 0) {
        return true;
      }
    }
  }
  else {
LAB_1000e31c:
    iVar1 = Ram40010800;
    if ((iVar1 == 0x50414d57) && (iVar1 = Ram40010804, iVar1 != 0)) {
      uVar3 = Ram40010808;
      bVar4 = 0xb < uVar3;
      if (bVar4) {
        uVar3 = Ram40010808;
      }
      if ((bVar4 && 0x37 < uVar3) && (pcVar2 = (code *)UINT_40010834, pcVar2 != (code *)0x0)) {
        uVar3 = (*pcVar2)(str_100238bd,auStack_20);
        goto LAB_1000e488;
      }
    }
  }
  memset(auStack_20,0,0xc);
  iVar1 = Ram40010800;
  if ((iVar1 == 0x50414d57) && (iVar1 = Ram40010804, iVar1 != 0)) {
    uVar3 = Ram40010808;
    bVar4 = 0xb < uVar3;
    if (bVar4) {
      uVar3 = Ram40010808;
    }
    if (bVar4 && 0xcb < uVar3) {
      pcVar2 = (code *)UINT_400108c8;
      if (pcVar2 == (code *)0x0) {
        return false;
      }
      uVar3 = (*pcVar2)(param_1,str_100238dc,auStack_20);
      goto LAB_1000e4bc;
    }
  }
  iVar1 = Ram40010800;
  if ((iVar1 == 0x50414d57) && (iVar1 = Ram40010804, iVar1 != 0)) {
    uVar3 = Ram40010808;
    bVar4 = 0xb < uVar3;
    if (bVar4) {
      uVar3 = Ram40010808;
    }
    if ((bVar4 && 0x37 < uVar3) && (pcVar2 = (code *)UINT_40010834, pcVar2 != (code *)0x0)) {
      uVar3 = (*pcVar2)(str_100238dc,auStack_20);
LAB_1000e4bc:
      return uVar3 != 0;
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
#undef UINT_40010834
#undef UINT_400108c8
#undef str_1002389e
#undef str_100238bd
#undef str_100238dc
#undef auStack_20

#undef DAT_10023899
#define DAT_10023899 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x291U)))
#define local_115 (*(char (*)[245])(frame + 27))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000e4d4
 */

void recovered_1000e4d4(int param_1,uint param_2,int param_3,int param_4,int param_5)

{
  unsigned char frame[336] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  char cVar6;
  char cVar7;
  char *pcVar8;
  char *pcVar9;
  byte bVar10;
  char *pcVar11;
  int iVar12;
  uint uVar13;
  undefined1 *puVar14;

  if (param_2 == 0) {
    return;
  }
  uVar13 = 0;
LAB_1000e568:
  if (param_1 != 0) {
    pcVar4 = (char *)(param_1 + uVar13);
    cVar7 = *pcVar4;
    if (cVar7 == '-') {
      pcVar4 = pcVar4 + 1;
    }
    cVar6 = *pcVar4;
    if ((byte)(cVar6 - 0x3aU) < 0xf6) goto LAB_1000e594;
    if ((byte)(cVar6 - 0x30U) < 10) {
      iVar5 = 0;
      do {
        bVar10 = cVar6 - 0x30;
        if (0xccccccc < iVar5) goto LAB_1000e594;
        pcVar4 = pcVar4 + 1;
        cVar6 = *pcVar4;
        iVar5 = iVar5 * 10 + (uint)bVar10;
      } while ((byte)(cVar6 - 0x30U) < 10);
    }
    else {
      iVar5 = 0;
    }
    if (cVar7 == '-') {
      iVar5 = -iVar5;
    }
    if (((char *)(param_1 + param_2) <= pcVar4) || (cVar6 != '|')) goto LAB_1000e594;
    pcVar4 = pcVar4 + 1;
    iVar12 = 0;
    pcVar8 = pcVar4;
    while( true ) {
      if (((char *)(param_1 + param_2) <= pcVar8) ||
         (cVar7 = pcVar4[iVar12], cVar7 == '\n' || cVar7 == '\r')) goto LAB_1000e678;
      if (iVar12 == 0xf0) break;
      local_115[iVar12] = cVar7;
      iVar12 = iVar12 + 1;
      pcVar8 = pcVar4 + iVar12;
    }
    iVar12 = 0xf0;
LAB_1000e678:
    local_115[iVar12] = '\0';
    if (param_3 == 0) {
      pcVar4 = (char *)(param_4 + 1);
      iVar12 = param_5;
      pcVar8 = (char *)(param_4 + 0x29);
      puVar14 = (undefined1 *)(param_4 + 0x120);
      if (param_4 != 0 && 0 < param_5) {
        do {
          if (puVar14[-0x120] == '\0') {
            *(int *)(puVar14 + -4) = iVar5;
            uVar2 = 1;
            puVar14[-0x120] = 1;
            if (local_115[0] != '\0') {
              cVar7 = local_115[0];
              goto LAB_1000e700;
            }
            puVar14[-0xf7] = 0;
            pcVar8 = &DAT_10023899;
            goto LAB_1000e7dc;
          }
          pcVar4 = pcVar4 + 0x124;
          pcVar8 = pcVar8 + 0x124;
          puVar14 = puVar14 + 0x124;
          iVar12 = iVar12 + -1;
        } while (iVar12 != 0);
      }
    }
    else {
      recovered_100059dc(local_115,iVar5);
    }
    goto LAB_1000e83c;
  }
LAB_1000e594:
  iVar5 = 0;
  if ((uVar13 < param_2) && (iVar5 = 1, *(char *)(param_1 + uVar13) != '\n')) {
    uVar13 = uVar13 + 1;
    do {
      uVar2 = uVar13;
      if (param_2 == uVar2) goto LAB_1000e54c;
      uVar13 = uVar2 + 1;
    } while (*(char *)(param_1 + uVar2) != '\n');
    goto LAB_1000e5d0;
  }
  goto LAB_1000e55c;
  while( true ) {
    cVar7 = local_115[uVar2];
    uVar2 = uVar2 + 1;
    pcVar8 = pcVar11;
    if (cVar7 == '\0') break;
LAB_1000e700:
    pcVar11 = pcVar8 + 1;
    *pcVar8 = cVar7;
    if (0xef < uVar2) break;
  }
  *pcVar11 = '\0';
  pcVar8 = local_115;
  pcVar11 = (char *)0x0;
  cVar7 = local_115[0];
  do {
    cVar6 = cVar7;
    pcVar9 = pcVar11;
    pcVar3 = pcVar8 + 1;
    pcVar11 = pcVar8;
    if (cVar6 != '/') {
      pcVar11 = pcVar9;
    }
    pcVar8 = pcVar3;
    cVar7 = *pcVar3;
  } while (*pcVar3 != '\0');
  if (cVar6 != '/') {
    pcVar3 = pcVar9 + 1;
  }
  if (pcVar11 == (char *)0x0) {
    pcVar3 = local_115;
  }
  pcVar8 = &DAT_10023899;
  if (*pcVar3 != '\0') {
    pcVar11 = (char *)0x0;
    pcVar3 = local_115;
    cVar7 = local_115[0];
    do {
      cVar6 = cVar7;
      pcVar9 = pcVar11;
      pcVar8 = pcVar3 + 1;
      pcVar11 = pcVar3;
      if (cVar6 != '/') {
        pcVar11 = pcVar9;
      }
      pcVar3 = pcVar8;
      cVar7 = *pcVar8;
    } while (*pcVar8 != '\0');
    if (cVar6 != '/') {
      pcVar8 = pcVar9 + 1;
    }
    if (pcVar11 == (char *)0x0) {
      pcVar8 = local_115;
    }
  }
LAB_1000e7dc:
  cVar7 = *pcVar8;
  if (cVar7 == '\0') {
    uVar2 = 0;
  }
  else {
    uVar1 = 1;
    do {
      uVar2 = uVar1;
      *pcVar4 = cVar7;
      if (0x26 < uVar2) break;
      cVar7 = pcVar8[uVar2];
      pcVar4 = pcVar4 + 1;
      uVar1 = uVar2 + 1;
    } while (cVar7 != '\0');
  }
  puVar14[uVar2 - 0x11f] = 0;
  *puVar14 = 1;
LAB_1000e83c:
  iVar5 = 0;
  if ((param_2 <= uVar13) || (iVar5 = 1, *(char *)(param_1 + uVar13) == '\n')) goto LAB_1000e55c;
  uVar13 = uVar13 + 1;
  do {
    uVar2 = uVar13;
    if (param_2 == uVar2) goto LAB_1000e54c;
    uVar13 = uVar2 + 1;
  } while (*(char *)(param_1 + uVar2) != '\n');
LAB_1000e5d0:
  uVar13 = uVar13 - 1;
LAB_1000e550:
  iVar5 = 0;
  if (uVar2 < param_2) {
    iVar5 = 1;
  }
LAB_1000e55c:
  uVar13 = uVar13 + iVar5;
  if (param_2 <= uVar13) {
    return;
  }
  goto LAB_1000e568;
LAB_1000e54c:
  uVar13 = param_2;
  goto LAB_1000e550;
}

#undef DAT_10023899
#undef local_115

#undef DAT_10023774
#define DAT_10023774 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x16cU)))
#undef DAT_10024144
#define DAT_10024144 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb3cU)))
#undef DAT_10024148
#define DAT_10024148 (*(uint *)(((uintptr_t)pf_module_state + 0xb40U)))
#undef DAT_1002414c
#define DAT_1002414c (*(uint32_t *)(((uintptr_t)pf_module_state + 0xb44U)))
#undef DAT_10024150
#define DAT_10024150 (*(uint32_t *)(((uintptr_t)pf_module_state + 0xb48U)))
#undef DAT_1002430c
#define DAT_1002430c (*(int *)(((uintptr_t)pf_module_state + 0xd04U)))
#undef DAT_10024310
#define DAT_10024310 (*(uint *)(((uintptr_t)pf_module_state + 0xd08U)))
#undef DAT_10024910
#define DAT_10024910 (*(int *)(((uintptr_t)pf_module_state + 0x1308U)))
#undef DAT_10028fe0
#define DAT_10028fe0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x59d8U)))
#undef str_10023759
#define str_10023759 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x151U)))
#define iStack_34 (*(int *)(frame + 28))
#define pcStack_30 (*(char * *)(frame + 32))
#define local_38 (*(undefined4 *)(frame + 24))
#define local_2c (*(int *)(frame + 36))
#define local_28 (*(int *)(frame + 40))
#define local_24 (*(undefined4 *)(frame + 44))
#define local_20 (*(undefined4 *)(frame + 48))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000e894
 */

void recovered_1000e894(char *param_1,uint param_2)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  char cVar7;
  undefined4 uVar8;
  bool bVar9;

  iVar5 = 0;
  iVar4 = 0;
  iVar1 = DAT_10024910;
  do {
    if ((*(char *)(iVar1 + iVar5) == '\x01') && (*(int *)(iVar1 + iVar5 + 4) == 0)) {
      iVar1 = strcmp((char *)(iVar1 + iVar5 + 8),str_10023759);
      if (iVar1 == 0) goto LAB_1000e924;
      iVar1 = DAT_10024910;
    }
    iVar4 = iVar4 + 1;
    iVar5 = iVar5 + 300;
  } while (iVar4 != 0x12);
  iVar4 = -1;
LAB_1000e924:
  pcStack_30 = str_10023759;
  local_38 = 0;
  local_20 = 0x14c;
  local_24 = 500;
  local_28 = (DAT_10024310 % 5) * 0xc + 0x38;
  local_2c = (DAT_10024310 % 5) * 0x12 + 0x40;
  iStack_34 = iVar4;
  iVar4 = recovered_1000eac0(&local_38);
  iVar1 = DAT_1002430c;
  uVar3 = DAT_10024148;
  if (-1 < iVar4) {
    iVar5 = iVar4 * 0xd9c + DAT_1002430c;
    bVar9 = DAT_10024148 == 3;
    uVar2 = DAT_10024148;
    if (3 < DAT_10024148) {
      uVar2 = 1;
    }
    *(undefined1 *)(iVar5 + 5) = DAT_10024144;
    *(uint *)(iVar5 + 8) = uVar2;
    *(undefined1 *)(iVar5 + 6) = DAT_10028fe0;
    if (bVar9) {
      uVar8 = DAT_10024150;
    }
    else {
      uVar8 = 0;
      if (uVar3 == 2) {
        uVar8 = DAT_1002414c;
      }
    }
    iVar5 = iVar4 * 0xd9c + iVar1;
    pcVar6 = &DAT_10023774;
    if (param_1 != (char *)0x0) {
      pcVar6 = param_1;
    }
    uVar3 = 0;
    *(undefined4 *)(iVar5 + 0xc) = uVar8;
    iVar5 = iVar5 + 0x78;
    cVar7 = *pcVar6;
    if (cVar7 != '\0') {
      uVar2 = 0;
      do {
        uVar3 = uVar2 + 1;
        *(char *)(iVar5 + uVar2) = cVar7;
        if (0xef < uVar3) break;
        cVar7 = pcVar6[uVar2 + 1];
        uVar2 = uVar3;
      } while (cVar7 != '\0');
    }
    *(undefined1 *)(iVar5 + uVar3) = 0;
    if (0x7fffffff < param_2) {
      param_2 = recovered_10005d20();
      iVar1 = DAT_1002430c;
    }
    iVar1 = iVar4 * 0xd9c + iVar1;
    *(undefined1 *)(iVar1 + 0x260) = 0;
    *(uint *)(iVar1 + 0x25c) = param_2;
    recovered_1000eef4(iVar1);
  }
  return;
}

#undef DAT_10023774
#undef DAT_10024144
#undef DAT_10024148
#undef DAT_1002414c
#undef DAT_10024150
#undef DAT_1002430c
#undef DAT_10024310
#undef DAT_10024910
#undef DAT_10028fe0
#undef str_10023759
#undef iStack_34
#undef pcStack_30
#undef local_38
#undef local_2c
#undef local_28
#undef local_24
#undef local_20

#undef DAT_10023774
#define DAT_10023774 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x16cU)))
#undef DAT_10024144
#define DAT_10024144 (*(char *)(((uintptr_t)pf_module_state + 0xb3cU)))
#undef DAT_10024148
#define DAT_10024148 (*(uint *)(((uintptr_t)pf_module_state + 0xb40U)))
#undef DAT_1002414c
#define DAT_1002414c (*(uint32_t *)(((uintptr_t)pf_module_state + 0xb44U)))
#undef DAT_10024150
#define DAT_10024150 (*(uint32_t *)(((uintptr_t)pf_module_state + 0xb48U)))
#undef DAT_100242dc
#define DAT_100242dc (*(int *)(((uintptr_t)pf_module_state + 0xcd4U)))
#undef DAT_1002430c
#define DAT_1002430c (*(char * *)(((uintptr_t)pf_module_state + 0xd04U)))
#undef DAT_10024914
#define DAT_10024914 (*(int *)(((uintptr_t)pf_module_state + 0x130cU)))
#undef DAT_10028fe0
#define DAT_10028fe0 (*(char *)(((uintptr_t)pf_module_state + 0x59d8U)))
#undef DAT_100290dc
#define DAT_100290dc (*(uint *)(((uintptr_t)pf_module_state + 0x5ad4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000eac0
 */

int recovered_1000eac0(undefined4 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  undefined4 *puVar6;
  char cVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  uint uVar12;
  undefined8 *puVar13;
  char *dst;
  uint uVar14;
  undefined4 uVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;

  if (param_1 == (undefined4 *)0x0) {
    return -1;
  }
  if (*DAT_1002430c == '\0') {
    iVar17 = 0;
    dst = DAT_1002430c;
  }
  else {
    iVar17 = 1;
    dst = DAT_1002430c + 0xd9c;
    if (DAT_1002430c[0xd9c] == '\x01') {
      iVar17 = 2;
      if (DAT_1002430c[0x1b38] == '\x01') {
        iVar17 = 3;
        dst = DAT_1002430c + 0x28d4;
        if (DAT_1002430c[0x28d4] == '\x01') {
          iVar17 = 4;
          dst = DAT_1002430c + 0x3670;
          if (DAT_1002430c[0x3670] == '\x01') {
            iVar17 = 5;
            dst = DAT_1002430c + 0x440c;
            if (DAT_1002430c[0x440c] == '\x01') {
              iVar17 = 6;
              dst = DAT_1002430c + 0x51a8;
              if (DAT_1002430c[0x51a8] == '\x01') {
                iVar17 = 7;
                dst = DAT_1002430c + 0x5f44;
                if (DAT_1002430c[0x5f44] == '\x01') {
                  iVar17 = 8;
                  dst = DAT_1002430c + 0x6ce0;
                  if (DAT_1002430c[0x6ce0] == '\x01') {
                    iVar17 = 9;
                    dst = DAT_1002430c + 0x7a7c;
                    if (DAT_1002430c[0x7a7c] == '\x01') {
                      iVar17 = 10;
                      dst = DAT_1002430c + 0x8818;
                      if (DAT_1002430c[0x8818] == '\x01') {
                        iVar17 = 0xb;
                        dst = DAT_1002430c + 0x95b4;
                        if (DAT_1002430c[0x95b4] == '\x01') {
                          iVar17 = 0xc;
                          dst = DAT_1002430c + 0xa350;
                          if (DAT_1002430c[0xa350] == '\x01') {
                            iVar17 = 0xd;
                            dst = DAT_1002430c + 0xb0ec;
                            if (DAT_1002430c[0xb0ec] == '\x01') {
                              iVar17 = 0xe;
                              dst = DAT_1002430c + 0xbe88;
                              if (DAT_1002430c[0xbe88] == '\x01') {
                                iVar17 = 0xf;
                                dst = DAT_1002430c + 0xcc24;
                                if (DAT_1002430c[0xcc24] == '\x01') {
                                  iVar17 = 0x10;
                                  dst = DAT_1002430c + 0xd9c0;
                                  if (DAT_1002430c[0xd9c0] == '\x01') {
                                    iVar17 = 0x11;
                                    dst = DAT_1002430c + 0xe75c;
                                    if (DAT_1002430c[0xe75c] == '\x01') {
                                      iVar17 = 0x12;
                                      dst = DAT_1002430c + 0xf4f8;
                                      if (DAT_1002430c[0xf4f8] == '\x01') {
                                        iVar17 = 0x13;
                                        dst = DAT_1002430c + 0x10294;
                                        if (DAT_1002430c[0x10294] == '\x01') {
                                          return -1;
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
                    }
                  }
                }
              }
            }
          }
        }
      }
      else {
        dst = DAT_1002430c + 0x1b38;
      }
    }
  }
  memset(dst,0,0xd9c);
  uVar12 = DAT_10024148;
  dst[6] = DAT_10028fe0;
  cVar7 = DAT_10024144;
  uVar9 = *param_1;
  uVar4 = uVar12;
  if (3 < uVar12) {
    uVar4 = 1;
  }
  uVar11 = param_1[1];
  dst[0] = '\x01';
  dst[1] = '\x01';
  *(undefined4 *)(dst + 0x10) = uVar9;
  *(undefined4 *)(dst + 0x14) = uVar11;
  dst[5] = cVar7;
  *(uint *)(dst + 8) = uVar4;
  if (uVar12 == 3) {
    uVar9 = DAT_10024150;
  }
  else {
    uVar9 = 0;
    if (uVar12 == 2) {
      uVar9 = DAT_1002414c;
    }
  }
  pcVar2 = (char *)param_1[2];
  *(undefined4 *)(dst + 0xc) = uVar9;
  uVar12 = 0;
  pcVar5 = &DAT_10023774;
  if (pcVar2 != (char *)0x0) {
    pcVar5 = pcVar2;
  }
  cVar7 = *pcVar5;
  if (cVar7 != '\0') {
    uVar4 = 0;
    do {
      uVar12 = uVar4 + 1;
      dst[uVar4 + 0x18] = cVar7;
      if (0x3e < uVar12) break;
      cVar7 = pcVar5[uVar4 + 1];
      uVar4 = uVar12;
    } while (cVar7 != '\0');
  }
  dst[uVar12 + 0x18] = '\0';
  uVar12 = DAT_100290dc;
  uVar9 = param_1[3];
  uVar11 = param_1[4];
  uVar10 = param_1[5];
  uVar15 = param_1[6];
  *(undefined4 *)(dst + 0x58) = uVar9;
  *(undefined4 *)(dst + 0x68) = uVar9;
  uVar4 = 0xffffffff;
  dst[0xaf4] = '\0';
  dst[0xaf5] = '\0';
  dst[0xaf6] = '\0';
  dst[0xaf7] = '\0';
  *(undefined4 *)(dst + 0x5c) = uVar11;
  *(undefined4 *)(dst + 0x60) = uVar10;
  *(undefined4 *)(dst + 0x74) = uVar15;
  *(undefined4 *)(dst + 0x70) = uVar10;
  *(undefined4 *)(dst + 0x6c) = uVar11;
  *(undefined4 *)(dst + 100) = uVar15;
  iVar1 = DAT_10024914;
  if (0 < (int)uVar12) {
    uVar8 = 0;
    do {
      if (*(int *)(DAT_10024914 + uVar8 * 4) == iVar17) {
        uVar4 = uVar8;
        break;
      }
      uVar8 = uVar8 + 1;
    } while (uVar12 != uVar8);
  }
  if (DAT_1002430c[(short)iVar17 * 0xd9c] != '\x01') {
    return iVar17;
  }
  if ((int)uVar4 < 0) {
    if (0x13 < (int)uVar12) {
      DAT_100242dc = iVar17;
      return iVar17;
    }
    DAT_100290dc = uVar12 + 1;
    uVar8 = uVar12;
  }
  else {
    uVar8 = uVar12 - 1;
    if ((int)uVar4 < (int)uVar8) {
      uVar18 = uVar12 + ~uVar4;
      if (3 < uVar18) {
        uVar16 = uVar18 & 0xfffffffc;
        puVar13 = (undefined8 *)(DAT_10024914 + uVar4 * 4);
        uVar4 = uVar4 + uVar16;
        uVar14 = uVar16;
        do {
          uVar14 = uVar14 - 4;
          *puVar13 = *(undefined8 *)((int)puVar13 + 4);
          puVar13[1] = *(undefined8 *)((int)puVar13 + 0xc);
          puVar13 = puVar13 + 2;
        } while (uVar14 != 0);
        if (uVar18 == uVar16) goto LAB_1000eecc;
      }
      iVar3 = ~uVar4 + uVar12;
      puVar6 = (undefined4 *)(iVar1 + uVar4 * 4);
      do {
        iVar3 = iVar3 + -1;
        *puVar6 = puVar6[1];
        puVar6 = puVar6 + 1;
      } while (iVar3 != 0);
    }
  }
LAB_1000eecc:
  *(int *)(iVar1 + uVar8 * 4) = iVar17;
  DAT_100242dc = iVar17;
  return iVar17;
}

#undef DAT_10023774
#undef DAT_10024144
#undef DAT_10024148
#undef DAT_1002414c
#undef DAT_10024150
#undef DAT_100242dc
#undef DAT_1002430c
#undef DAT_10024914
#undef DAT_10028fe0
#undef DAT_100290dc

#undef DAT_10023774
#define DAT_10023774 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x16cU)))
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
#undef UINT_40010884
#define UINT_40010884 (*(uint *)(0x40010884U))
#undef UINT_400108c0
#define UINT_400108c0 (*(uint *)(0x400108c0U))
#undef UINT_400108cc
#define UINT_400108cc (*(uint *)(0x400108ccU))
#define local_328 (*(uint *)(frame + 24))
#define local_310 (*(uint *)(frame + 48))
#define local_309 (*(char (*)[241])(frame + 55))
#define local_218 (*(char (*)[241])(frame + 296))
#define local_127 (*(char (*)[247])(frame + 537))
#define local_30 (*(uint *)(frame + 784))
#define local_2c (*(int *)(frame + 788))
#define local_28 (*(undefined4 *)(frame + 792))
#define local_24 (*(undefined4 *)(frame + 796))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000eef4
 */

void recovered_1000eef4(int param_1)

{
  unsigned char frame[864] __attribute__((aligned(16))) = {0};

  char cVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  ulong n;
  void *pvVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint *outEntryCount;
  char *pcVar10;
  int iVar11;
  char *pcVar12;
  code *pcVar13;
  uint uVar14;
  char *a;
  char *pcVar15;
  uint uVar16;
  uint uVar17;
  bool bVar18;
  bool bVar19;

  local_310 = 0;
  if (param_1 == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    return;
  }
  pvVar6 = *(void **)(param_1 + 0xaec);
  if (pvVar6 == (void *)0x0) {
    iVar4 = Ram40010800;
    if ((iVar4 == 0x50414d57) && (iVar4 = Ram40010804, iVar4 != 0)) {
      uVar3 = Ram40010808;
      bVar18 = 0xb < uVar3;
      if (bVar18) {
        uVar3 = Ram40010808;
      }
      if ((bVar18 && 0x4f < uVar3) && (pcVar13 = (code *)UINT_4001084c, pcVar13 != (code *)0x0)) {
        pvVar6 = (*pcVar13)(0x1f69ba8);
        *(void **)(param_1 + 0xaec) = pvVar6;
        if (pvVar6 == (void *)0x0) goto LAB_1000efe8;
        goto LAB_1000ef40;
      }
    }
    *(undefined4 *)(param_1 + 0xaec) = 0;
LAB_1000efe8:
    *(undefined4 *)(param_1 + 0xaf0) = 0;
    return;
  }
LAB_1000ef40:
  memset(pvVar6,0,0x1f69ba8);
  if (*(char *)(param_1 + 0x260) == '\x01') {
    iVar4 = Ram40010800;
    if ((iVar4 != 0x50414d57) || (iVar4 = Ram40010804, iVar4 == 0)) goto LAB_1000f058;
    uVar3 = Ram40010808;
    bVar18 = 0xb < uVar3;
    if (bVar18) {
      uVar3 = Ram40010808;
    }
    if ((!bVar18 || uVar3 < 0xc4) || (pcVar13 = (code *)UINT_400108c0, pcVar13 == (code *)0x0))
    goto LAB_1000f058;
    uVar3 = (*pcVar13)(*(void **)(param_1 + 0xaec),0xff4b,&local_310);
  }
  else {
    pcVar10 = *(char **)(param_1 + 0xaec);
    pcVar15 = (char *)(param_1 + 0x78);
    pcVar12 = *(char **)(param_1 + 0x25c);
    iVar4 = Ram40010800;
    if ((iVar4 == 0x50414d57) && (iVar4 = Ram40010804, iVar4 != 0)) {
      uVar3 = Ram40010808;
      bVar19 = 0xb < uVar3;
      bVar18 = uVar3 == 0xc;
      if (bVar19) {
        uVar3 = Ram40010808;
        bVar18 = uVar3 == 0xcf;
      }
      if ((!bVar19 || uVar3 < 0xcf) || bVar18) goto LAB_1000f02c;
      pcVar13 = (code *)UINT_400108cc;
      if (pcVar13 == (code *)0x0) goto LAB_1000f058;
      outEntryCount = (uint *)0xff4b;
    }
    else {
LAB_1000f02c:
      iVar4 = Ram40010800;
      if ((iVar4 != 0x50414d57) || (iVar4 = Ram40010804, iVar4 == 0)) goto LAB_1000f058;
      uVar3 = Ram40010808;
      bVar18 = 0xb < uVar3;
      if (bVar18) {
        uVar3 = Ram40010808;
      }
      if ((!bVar18 || uVar3 < 0x88) || (pcVar13 = (code *)UINT_40010884, pcVar13 == (code *)0x0))
      goto LAB_1000f058;
      outEntryCount = &local_310;
      pcVar12 = pcVar15;
      pcVar15 = pcVar10;
      pcVar10 = (char *)0xff4b;
    }
    if (outEntryCount == (uint *)0xff4b) {
      uVar3 = ((WmBaremetalProgramListDirectoryOnDeviceFn)(uintptr_t)pcVar13)
          ((int)(uintptr_t)pcVar12,pcVar15,(WmBaremetalProgramDirectoryEntry *)pcVar10,
           0xff4b,&local_310);
    } else {
      uVar3 = (*pcVar13)(pcVar12,pcVar15,(uint)pcVar10,outEntryCount);
    }
  }
  if (uVar3 != 0) {
    if (0xff4b < local_310) {
      local_310 = 0xff4b;
    }
    uVar3 = local_310;
    local_328 = local_310;
    if (*(char *)(param_1 + 0x260) == '\0') {
      iVar4 = *(int *)(param_1 + 0xaec);
      if (iVar4 != 0 && local_310 != 0) {
        uVar17 = 0;
        local_328 = 0;
LAB_1000f210:
        pvVar6 = (void *)(iVar4 + uVar17 * 0x1f8);
        memcpy(local_218,pvVar6,0x1f8);
        for (pcVar12 = local_127; *pcVar12 == '/' || *pcVar12 == '\\'; pcVar12 = pcVar12 + 1) {
        }
        for (pcVar15 = (char *)(param_1 + 0x78); *pcVar15 == '\\' || *pcVar15 == '/';
            pcVar15 = pcVar15 + 1) {
        }
        uVar5 = strlen(pcVar15);
        cVar2 = *pcVar12;
        if (cVar2 != '\0') {
          if (*pcVar15 != '\0') {
            iVar7 = strcmp(pcVar12,pcVar15);
            pcVar10 = &DAT_10023774;
            if (iVar7 != 0) {
              n = strlen(pcVar15);
              iVar7 = strncmp(pcVar12,pcVar15,n);
              if ((iVar7 != 0) || (pcVar12[uVar5] != '/' && pcVar12[uVar5] != '\\'))
              goto LAB_1000f204;
              pcVar10 = pcVar12 + uVar5 + 1;
            }
            cVar2 = *pcVar10;
            pcVar12 = pcVar10;
            if (cVar2 == '\0') goto LAB_1000f204;
          }
          pcVar15 = local_309;
          iVar7 = 0;
          while( true ) {
            pcVar10 = (char *)(iVar4 + 0xf1);
            uVar14 = local_328;
            if (cVar2 == '\0') break;
            if (cVar2 == '/' || cVar2 == '\\') {
              if ((iVar7 == 0) || (uVar14 = -iVar7, 0xef < uVar14 && iVar7 != -0xf0))
              goto LAB_1000f204;
              cVar2 = *(char *)(param_1 + 0x78);
              uVar16 = uVar14;
              if (cVar2 == '\0') goto LAB_1000f3d8;
              uVar16 = 0;
              goto LAB_1000f368;
            }
            cVar2 = pcVar12[1 - iVar7];
            iVar7 = iVar7 + -1;
          }
          for (; uVar14 != 0; uVar14 = uVar14 - 1) {
            iVar7 = strcmp(pcVar10,local_127);
            if (iVar7 == 0) goto LAB_1000f204;
            pcVar10 = pcVar10 + 0x1f8;
          }
          goto LAB_1000f520;
        }
        goto LAB_1000f204;
      }
      local_328 = 0;
    }
    *(uint *)(param_1 + 0xaf0) = local_328;
LAB_1000f128:
    iVar9 = *(int *)(param_1 + 100) + -0x6a;
    uVar3 = *(int *)(param_1 + 0x60) - 0x26;
    iVar4 = (int)(((ulonglong)uVar3 << 0x20) + (longlong)(int)uVar3 * -0x2df2df2d >> 0x20);
    iVar11 = -1;
    iVar7 = ((int)((ulonglong)((longlong)iVar9 * 0x22983759) >> 0x20) - *(int *)(param_1 + 100)) +
            0x6a;
    if (0x49 < iVar9) {
      iVar11 = (iVar7 >> 6) - (iVar7 >> 0x1f);
    }
    iVar4 = (iVar4 >> 6) - (iVar4 >> 0x1f);
    uVar3 = *(uint *)(param_1 + 0xaf8);
    if (iVar4 < 2) {
      iVar4 = 1;
    }
    if (0x7fffffff < uVar3) {
      uVar3 = 0;
      *(undefined4 *)(param_1 + 0xaf8) = 0;
    }
    iVar4 = iVar4 * iVar11 + local_328 + 2;
    if ((0 < iVar4) && ((int)uVar3 <= iVar4)) {
      return;
    }
    if (iVar4 < 1) {
      iVar4 = 0;
    }
    *(int *)(param_1 + 0xaf8) = iVar4;
    return;
  }
LAB_1000f058:
  *(undefined4 *)(param_1 + 0xaf0) = 0;
  return;
  while (cVar2 = cVar1, cVar1 != '\0') {
LAB_1000f368:
    cVar1 = *(char *)(param_1 + 0x79 + uVar16);
    pcVar15[uVar16] = cVar2;
    uVar16 = uVar16 + 1;
    if (0xef < uVar16) break;
  }
  pcVar15[uVar16] = '\0';
  uVar5 = strlen(pcVar15);
  if (uVar5 < 0xf1) {
    iVar9 = 0xf0;
    if (uVar5 != 0xf0) {
      local_309[uVar5] = '/';
      iVar9 = uVar5 + 1;
    }
    local_309[iVar9] = '\0';
  }
  uVar5 = strlen(local_309);
  uVar16 = uVar5 - iVar7;
  if (uVar16 < 0xf1) {
    pcVar15 = local_309 + uVar5;
LAB_1000f3d8:
    memcpy(pcVar15,pcVar12,uVar14);
    local_309[uVar16] = '\0';
    pcVar12 = (char *)(iVar4 + 0xf1);
    for (uVar14 = local_328; uVar14 != 0; uVar14 = uVar14 - 1) {
      iVar7 = strcmp(pcVar12,local_309);
      if (iVar7 == 0) goto LAB_1000f204;
      pcVar12 = pcVar12 + 0x1f8;
    }
    memset(local_218,0,0x1f8);
    pcVar12 = (char *)0x0;
    if (local_309[0] == '\0') {
      local_127[0] = '\0';
    }
    else {
      cVar2 = local_309[0];
      do {
        pcVar15 = pcVar12 + 1;
        local_127[(int)pcVar12] = cVar2;
        if ((char *)0xef < pcVar15) break;
        cVar2 = (local_309 + 1)[(int)pcVar12];
        pcVar12 = pcVar15;
      } while (cVar2 != '\0');
      pcVar12 = (char *)0x0;
      local_127[(int)pcVar15] = '\0';
      pcVar15 = local_309;
      cVar2 = local_309[0];
      do {
        cVar1 = pcVar15[1];
        if (cVar2 == '/') {
          pcVar12 = pcVar15;
        }
        pcVar15 = pcVar15 + 1;
        cVar2 = cVar1;
      } while (cVar1 != '\0');
    }
    pcVar15 = local_309;
    if (pcVar12 != (char *)0x0) {
      pcVar15 = pcVar12 + 1;
    }
    cVar2 = *pcVar15;
    if (cVar2 == '\0') {
      uVar14 = 0;
    }
    else {
      uVar16 = 0;
      do {
        uVar14 = uVar16 + 1;
        local_218[uVar16] = cVar2;
        if (0xef < uVar14) break;
        cVar2 = pcVar15[uVar16 + 1];
        uVar16 = uVar14;
      } while (cVar2 != '\0');
    }
    local_218[uVar14] = '\0';
    local_28 = *(undefined4 *)((int)pvVar6 + 0x1f0);
    local_24 = *(undefined4 *)((int)pvVar6 + 500);
    local_2c = 2;
    local_30 = 2;
LAB_1000f520:
    memcpy((void *)(iVar4 + local_328 * 0x1f8),local_218,0x1f8);
    local_328 = local_328 + 1;
  }
LAB_1000f204:
  uVar17 = uVar17 + 1;
  if (uVar17 == uVar3) goto LAB_1000f584;
  goto LAB_1000f210;
LAB_1000f584:
  local_310 = local_328;
  *(uint *)(param_1 + 0xaf0) = local_328;
  if (((*(byte *)(param_1 + 0x260) & 1) == 0) && (1 < local_328)) {
    pcVar15 = *(char **)(param_1 + 0xaec);
    uVar3 = 1;
    pcVar12 = pcVar15;
    do {
      pcVar12 = pcVar12 + 0x1f8;
      memcpy(local_218,pcVar15 + uVar3 * 0x1f8,0x1f8);
      pcVar10 = pcVar12;
      uVar17 = uVar3;
      do {
        uVar14 = local_30;
        a = pcVar10 + -0x1f8;
        if (a == (char *)0x0) {
          uVar16 = 0;
        }
        else {
          uVar16 = 1;
          if (*(int *)(pcVar10 + -0xc) != 2) {
            uVar16 = ((byte)pcVar10[-0x10] & 3) >> 1;
          }
        }
        if (local_2c == 2) {
          iVar4 = strcmp(a,local_218);
          uVar8 = 1;
        }
        else {
          iVar4 = strcmp(a,local_218);
          uVar8 = (uVar14 & 3) >> 1;
          if ((uVar16 != 0) && ((uVar14 & 2) == 0)) goto LAB_1000f5c4;
        }
        if ((uVar16 == uVar8) && (iVar4 < 1)) goto LAB_1000f5c4;
        memcpy(pcVar10,a,0x1f8);
        uVar17 = uVar17 - 1;
        pcVar10 = a;
      } while (uVar17 != 0);
      uVar17 = 0;
LAB_1000f5c4:
      memcpy(pcVar15 + uVar17 * 0x1f8,local_218,0x1f8);
      uVar3 = uVar3 + 1;
    } while (uVar3 != local_328);
    local_328 = *(uint *)(param_1 + 0xaf0);
  }
  goto LAB_1000f128;
}

#undef DAT_10023774
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef Ram40010800
#undef Ram40010804
#undef Ram40010808
#undef UINT_4001084c
#undef UINT_40010884
#undef UINT_400108c0
#undef UINT_400108cc
#undef local_328
#undef local_310
#undef local_309
#undef local_218
#undef local_127
#undef local_30
#undef local_2c
#undef local_28
#undef local_24

#undef DAT_100242dc
#define DAT_100242dc (*(int *)(((uintptr_t)pf_module_state + 0xcd4U)))
#undef DAT_1002430c
#define DAT_1002430c (*(int *)(((uintptr_t)pf_module_state + 0xd04U)))
#undef DAT_10024914
#define DAT_10024914 (*(int *)(((uintptr_t)pf_module_state + 0x130cU)))
#undef DAT_100290dc
#define DAT_100290dc (*(uint *)(((uintptr_t)pf_module_state + 0x5ad4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000f6c4
 */

void recovered_1000f6c4(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined8 *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;

  uVar2 = DAT_100290dc;
  iVar1 = DAT_10024914;
  uVar4 = 0xffffffff;
  if (0 < (int)DAT_100290dc) {
    uVar6 = 0;
    do {
      uVar4 = uVar6;
      if (*(int *)(DAT_10024914 + uVar6 * 4) == param_1) break;
      uVar6 = uVar6 + 1;
      uVar4 = 0xffffffff;
    } while (DAT_100290dc != uVar6);
  }
  if ((param_1 < 0) || (*(char *)(DAT_1002430c + param_1 * 0xd9c) != '\x01')) {
    return;
  }
  if ((int)uVar4 < 0) {
    if (0x13 < (int)DAT_100290dc) {
      DAT_100242dc = param_1;
      return;
    }
    uVar8 = DAT_100290dc + 1;
    uVar6 = DAT_100290dc;
  }
  else {
    uVar6 = DAT_100290dc - 1;
    uVar8 = DAT_100290dc;
    if ((int)uVar4 < (int)uVar6) {
      uVar9 = DAT_100290dc + ~uVar4;
      if (3 < uVar9) {
        uVar10 = uVar9 & 0xfffffffc;
        puVar7 = (undefined8 *)(DAT_10024914 + uVar4 * 4);
        uVar4 = uVar4 + uVar10;
        uVar8 = uVar10;
        do {
          uVar8 = uVar8 - 4;
          *puVar7 = *(undefined8 *)((int)puVar7 + 4);
          puVar7[1] = *(undefined8 *)((int)puVar7 + 0xc);
          puVar7 = puVar7 + 2;
        } while (uVar8 != 0);
        uVar8 = DAT_100290dc;
        if (uVar9 == uVar10) goto LAB_1000f7f8;
      }
      iVar3 = ~uVar4 + uVar2;
      puVar5 = (undefined4 *)(iVar1 + uVar4 * 4);
      do {
        iVar3 = iVar3 + -1;
        *puVar5 = puVar5[1];
        puVar5 = puVar5 + 1;
        uVar8 = DAT_100290dc;
      } while (iVar3 != 0);
    }
  }
LAB_1000f7f8:
  DAT_100290dc = uVar8;
  *(int *)(iVar1 + uVar6 * 4) = param_1;
  DAT_100242dc = param_1;
  return;
}

#undef DAT_100242dc
#undef DAT_1002430c
#undef DAT_10024914
#undef DAT_100290dc

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
#undef UINT_40010884
#define UINT_40010884 (*(uint *)(0x40010884U))
#undef UINT_400108cc
#define UINT_400108cc (*(uint *)(0x400108ccU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000f810
 */

uint recovered_1000f810(int param_1,char *param_2,void *param_3,uint param_4,uint *param_5)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  code *UNRECOVERED_JUMPTABLE_00;
  uint uVar2;
  bool bVar3;
  bool bVar4;

  iVar1 = Ram40010800;
  if ((iVar1 == 0x50414d57) && (iVar1 = Ram40010804, iVar1 != 0)) {
    uVar2 = Ram40010808;
    bVar4 = 0xb < uVar2;
    bVar3 = uVar2 == 0xc;
    if (bVar4) {
      uVar2 = Ram40010808;
      bVar3 = uVar2 == 0xcf;
    }
    if ((bVar4 && 0xce < uVar2) && !bVar3) {
      UNRECOVERED_JUMPTABLE_00 = (code *)UINT_400108cc;
      if (UNRECOVERED_JUMPTABLE_00 == (code *)0x0) {
        return 0;
      }
                    /* WARNING: Could not recover jumptable at 0x1000f8a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*UNRECOVERED_JUMPTABLE_00)(param_1,param_2,param_3,param_4,param_5);
      return uVar2;
    }
  }
  iVar1 = Ram40010800;
  if ((iVar1 == 0x50414d57) && (iVar1 = Ram40010804, iVar1 != 0)) {
    uVar2 = Ram40010808;
    bVar3 = 0xb < uVar2;
    if (bVar3) {
      uVar2 = Ram40010808;
    }
    if ((bVar3 && 0x87 < uVar2) &&
       (UNRECOVERED_JUMPTABLE_00 = (code *)UINT_40010884, UNRECOVERED_JUMPTABLE_00 != (code *)0x0))
    {
                    /* WARNING: Could not recover jumptable at 0x1000f8c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*UNRECOVERED_JUMPTABLE_00)(param_2,param_3,param_4,param_5);
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
#undef UINT_40010884
#undef UINT_400108cc

#undef DAT_10024130
#define DAT_10024130 (*(uint *)(((uintptr_t)pf_module_state + 0xb28U)))
#undef DAT_10024134
#define DAT_10024134 (*(uint *)(((uintptr_t)pf_module_state + 0xb2cU)))
#undef DAT_100242f8
#define DAT_100242f8 (*(int *)(((uintptr_t)pf_module_state + 0xcf0U)))
#undef DAT_10027610
#define DAT_10027610 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4008U)))
#undef DAT_10027614
#define DAT_10027614 (*(int *)(((uintptr_t)pf_module_state + 0x400cU)))
#undef DAT_10027618
#define DAT_10027618 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4010U)))
#undef DAT_10027620
#define DAT_10027620 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4018U)))
#undef _DAT_10027610
#define _DAT_10027610 (*(int *)(((uintptr_t)pf_module_state + 0x4008U)))
#define local_40 (*(int *)(frame + 16))
#define local_38 (*(uint *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000f8c8
 */

/* WARNING: Removing unreachable block (ram,0x1000fb74) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_1000f8c8(void)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  undefined1 uVar1;
  undefined1 uVar2;
  longlong lVar3;
  uint b;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ulonglong *puVar8;
  undefined1 *puVar9;
  uint *puVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  ulonglong *puVar18;
  bool bVar19;
  bool bVar20;
  ulonglong uVar21;

  uVar16 = (uint)DAT_10027620;
  uVar13 = (*(uint32_t *)(pf_module_state+0x4014U));
  iVar17 = _DAT_10027610;
  b = DAT_10024134;
  uVar12 = DAT_10024130;
  if ((DAT_10027614 == 0) && (_DAT_10027610 != 0)) {
    if (((((*(uint32_t *)(pf_module_state+0x4014U)) != 0) && (0x18 < (int)DAT_10024134)) && (0 < (int)DAT_10024130)) &&
       ((uint)DAT_10027620 != 0)) {
      uVar15 = DAT_10024134 - 0x18;
      lVar3 = (ulonglong)DAT_10024130 * (ulonglong)(uint)DAT_10027620 +
              (ulonglong)(*(uint32_t *)(pf_module_state+0x4014U));
      iVar4 = (int)lVar3;
      iVar11 = 0;
      uVar21 = recovered_10000c20(CONCAT44((int)((ulonglong)lVar3 >> 0x20) - (uint)(iVar4 == 0),
                                           iVar4 + -1),(ulonglong)(*(uint32_t *)(pf_module_state+0x4014U)));
      local_38 = (uint)uVar21;
      if ((int)local_38 < (int)uVar15) {
        local_40 = 0;
        lVar3 = (ulonglong)uVar15 * (ulonglong)uVar13 + (ulonglong)uVar16;
        iVar4 = (int)lVar3;
        uVar21 = recovered_10000c20(CONCAT44((int)((ulonglong)lVar3 >> 0x20) - (uint)(iVar4 == 0),
                                             iVar4 + -1),(ulonglong)uVar16);
        uVar16 = (uint)uVar21;
        if ((int)uVar16 < 1) {
          return;
        }
        if (uVar12 < uVar16) {
          iVar11 = (int)(uVar16 - uVar12) / 2;
        }
        local_38 = uVar15;
      }
      else {
        if (uVar15 < local_38) {
          local_40 = (int)(local_38 - uVar15) / 2;
        }
        else {
          local_40 = 0;
        }
        uVar16 = uVar12;
      }
      uVar7 = 0;
      iVar4 = uVar12 * 0x60;
      do {
        uVar14 = (uint)DAT_10027620;
        lVar3 = (ulonglong)(uVar7 + local_40) * (ulonglong)(uint)DAT_10027620;
        uVar21 = recovered_10000c20(CONCAT44((uint)DAT_10027620 * ((int)(uVar7 + local_40) >> 0x1f)
                                             + (int)((ulonglong)lVar3 >> 0x20),(int)lVar3),
                                    (ulonglong)local_38);
        uVar5 = (uint)uVar21;
        if (uVar14 <= uVar5) {
          uVar5 = uVar14 + 0x3fffffff;
        }
        uVar14 = 0;
        do {
          lVar3 = (ulonglong)uVar13 * (ulonglong)(iVar11 + uVar14);
          uVar21 = recovered_10000c20(CONCAT44(((int)(iVar11 + uVar14) >> 0x1f) * uVar13 +
                                               (int)((ulonglong)lVar3 >> 0x20),(int)lVar3),
                                      (ulonglong)uVar16);
          uVar6 = (uint)uVar21;
          if (uVar13 <= uVar6) {
            uVar6 = uVar13 - 1;
          }
          if ((((int)uVar14 < (int)uVar12) && ((int)(uVar7 + 0x18) < (int)b)) && (DAT_100242f8 != 0)
             ) {
            puVar9 = (undefined1 *)(iVar17 + (uVar13 * uVar5 + uVar6) * 4);
            uVar1 = puVar9[1];
            uVar2 = puVar9[2];
            *(undefined1 *)(DAT_100242f8 + iVar4 + uVar14 * 4) = *puVar9;
            *(undefined1 *)(DAT_100242f8 + iVar4 + uVar14 * 4 + 1) = uVar1;
            *(undefined1 *)(DAT_100242f8 + iVar4 + uVar14 * 4 + 2) = uVar2;
            *(undefined1 *)(DAT_100242f8 + iVar4 + uVar14 * 4 + 3) = 0xff;
            uVar13 = (*(uint32_t *)(pf_module_state+0x4014U));
          }
          uVar14 = uVar14 + 1;
        } while (uVar12 != uVar14);
        iVar4 = iVar4 + uVar12 * 4;
        uVar7 = uVar7 + 1;
      } while (uVar7 != uVar15);
    }
  }
  else if (0 < (int)DAT_10024134) {
    uVar13 = 0;
    uVar16 = DAT_10024130 & ~((int)DAT_10024130 >> 0x1f);
    uVar12 = 0;
    if ((int)DAT_10024130 < 0) {
      uVar12 = DAT_10024130;
    }
    bVar19 = DAT_100242f8 != 0;
    uVar15 = uVar16 - uVar12;
    puVar18 = (ulonglong *)(DAT_100242f8 + uVar12 * 4);
    iVar17 = DAT_10024130 * 4;
    uVar7 = uVar15 & 0xfffffffc;
    iVar11 = DAT_100242f8;
    do {
      if (bVar19 && (int)uVar12 < (int)uVar16) {
        uVar14 = recovered_10000ac0(uVar13 * 0x12,b);
        uVar5 = (uVar14 + 0xe4 & 0xff) * 0x10101;
        uVar14 = uVar12;
        if (3 < uVar15) {
          uVar21 = CONCAT44(uVar5,uVar5) | 0xff000000ff000000;
          puVar8 = puVar18;
          uVar14 = uVar7;
          do {
            *puVar8 = uVar21;
            puVar8[1] = uVar21;
            puVar8 = puVar8 + 2;
            uVar14 = uVar14 - 4;
          } while (uVar14 != 0);
          uVar14 = uVar12 + uVar7;
          if (uVar15 == uVar7) goto LAB_1000fa80;
        }
        iVar4 = uVar16 - uVar14;
        puVar10 = (uint *)(iVar11 + uVar14 * 4);
        do {
          *puVar10 = uVar5 | 0xff000000;
          iVar4 = iVar4 + -1;
          puVar10 = puVar10 + 1;
        } while (iVar4 != 0);
      }
LAB_1000fa80:
      uVar14 = DAT_10024130;
      uVar13 = uVar13 + 1;
      iVar11 = iVar11 + iVar17;
      puVar18 = (ulonglong *)((int)puVar18 + iVar17);
    } while (uVar13 != b);
    if (0x7c < (int)b) {
      iVar17 = 1;
      uVar12 = 0x3e;
      if ((int)DAT_10024130 < 1) {
        iVar17 = -1;
      }
      uVar13 = DAT_10024130;
      if ((int)DAT_10024130 < 0) {
        uVar13 = -DAT_10024130;
      }
LAB_1000fb5c:
      uVar15 = 0;
      uVar16 = uVar12;
      iVar11 = uVar13 - 10;
      do {
        bVar20 = SBORROW4(uVar14,uVar15);
        iVar4 = uVar14 - uVar15;
        bVar19 = uVar14 == uVar15;
        if ((int)uVar15 < (int)uVar14) {
          bVar20 = SBORROW4(b,uVar16);
          iVar4 = b - uVar16;
          bVar19 = b == uVar16;
        }
        if ((!bVar19 && iVar4 < 0 == bVar20) && (DAT_100242f8 != 0)) {
          iVar4 = uVar16 * uVar14 + uVar15;
          *(undefined1 *)(DAT_100242f8 + iVar4 * 4) = 0xd2;
          *(undefined1 *)(DAT_100242f8 + iVar4 * 4 + 1) = 0xd2;
          *(undefined1 *)(DAT_100242f8 + iVar4 * 4 + 2) = 0xd2;
          *(undefined1 *)(DAT_100242f8 + iVar4 * 4 + 3) = 0xff;
        }
        do {
          if (uVar16 == uVar12 + 10 && uVar15 == uVar14) {
            uVar12 = uVar12 + 0x48;
            if ((int)(b - 0x3e) <= (int)uVar12) {
              return;
            }
            goto LAB_1000fb5c;
          }
          if (iVar11 * 2 <= (int)uVar13) {
            uVar16 = uVar16 + 1;
          }
          iVar4 = iVar11;
          if (-6 < iVar11) {
            iVar4 = iVar11 + -10;
          }
          if (iVar11 * 2 <= (int)uVar13) {
            iVar4 = iVar4 + uVar13;
          }
          if (-6 < iVar11) {
            uVar15 = uVar15 + iVar17;
          }
          iVar11 = iVar4;
        } while ((int)uVar15 < 0);
      } while( true );
    }
  }
  return;
}

#undef DAT_10024130
#undef DAT_10024134
#undef DAT_100242f8
#undef DAT_10027610
#undef DAT_10027614
#undef DAT_10027618
#undef DAT_10027620
#undef _DAT_10027610
#undef local_40
#undef local_38

#undef DAT_10010070
#define DAT_10010070 (*(uint64_t *)(0x10010070U))
#undef DAT_10010078
#define DAT_10010078 (*(uint64_t *)(0x10010078U))
#undef DAT_10010080
#define DAT_10010080 (*(uint64_t *)(0x10010080U))
#undef DAT_10010088
#define DAT_10010088 (*(uint64_t *)(0x10010088U))
#undef DAT_1002395c
#define DAT_1002395c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x354U)))
#undef DAT_10023961
#define DAT_10023961 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x359U)))
#undef DAT_10024130
#define DAT_10024130 (*(uint *)(((uintptr_t)pf_module_state + 0xb28U)))
#undef DAT_10024134
#define DAT_10024134 (*(int *)(((uintptr_t)pf_module_state + 0xb2cU)))
#undef DAT_100242f8
#define DAT_100242f8 (*(int *)(((uintptr_t)pf_module_state + 0xcf0U)))
#undef str_1002392b
#define str_1002392b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x323U)))
#undef str_10023955
#define str_10023955 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x34dU)))
#undef str_10023966
#define str_10023966 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x35eU)))
#define aiStack_30 (*(int (*)[4])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000fdc0
 */

void recovered_1000fdc0(void)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined8 uVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  undefined4 *puVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  undefined8 *puVar15;
  int iVar16;
  undefined8 *puVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;

  uVar5 = recovered_10005d20();
  piVar6 = recovered_10011f28((byte *)str_1002392b,uVar5);
  iVar3 = DAT_100242f8;
  iVar9 = DAT_10024134;
  uVar5 = DAT_10024130;
  iVar13 = DAT_10024134;
  if (0x17 < DAT_10024134) {
    iVar13 = 0x18;
  }
  uVar18 = 0;
  if ((int)DAT_10024130 < 0) {
    uVar18 = DAT_10024130;
  }
  uVar12 = DAT_10024130 & ~((int)DAT_10024130 >> 0x1f);
  bVar4 = DAT_100242f8 != 0 && (int)uVar18 < (int)uVar12;
  if ((bVar4) && (0 < DAT_10024134)) {
    uVar14 = uVar12 - uVar18;
    uVar20 = uVar14 & 0xfffffffc;
    puVar17 = (undefined8 *)(DAT_100242f8 + uVar18 * 4);
    iVar1 = DAT_10024130 * 4;
    iVar7 = 0;
    iVar19 = DAT_100242f8;
    do {
      uVar8 = uVar20;
      uVar11 = uVar18;
      puVar15 = puVar17;
      if (uVar14 < 4) {
LAB_1000fee0:
        iVar16 = uVar12 - uVar11;
        puVar10 = (undefined4 *)(iVar19 + uVar11 * 4);
        do {
          *puVar10 = 0xfffafafa;
          iVar16 = iVar16 + -1;
          puVar10 = puVar10 + 1;
        } while (iVar16 != 0);
      }
      else {
        do {
          uVar2 = (0xfffafafafffafafaU);
          uVar8 = uVar8 - 4;
          *puVar15 = (0xfffafafafffafafaU);
          puVar15[1] = uVar2;
          puVar15 = puVar15 + 2;
        } while (uVar8 != 0);
        uVar11 = uVar18 + uVar20;
        if (uVar14 != uVar20) goto LAB_1000fee0;
      }
      iVar7 = iVar7 + 1;
      iVar19 = iVar19 + iVar1;
      puVar17 = (undefined8 *)((int)puVar17 + iVar1);
    } while (iVar7 != iVar13);
  }
  if (bVar4 && 0x17 < iVar9) {
    uVar14 = uVar12 - uVar18;
    if (3 < uVar14) {
      uVar8 = uVar14 & 0xfffffffc;
      iVar9 = uVar5 * 0x17 + uVar18;
      uVar18 = uVar18 + uVar8;
      puVar17 = (undefined8 *)(iVar3 + iVar9 * 4);
      uVar20 = uVar8;
      do {
        uVar2 = (0xffa6a6a6ffa6a6a6U);
        uVar20 = uVar20 - 4;
        *puVar17 = (0xffa6a6a6ffa6a6a6U);
        puVar17[1] = uVar2;
        puVar17 = puVar17 + 2;
      } while (uVar20 != 0);
      if (uVar14 == uVar8) goto LAB_1000ff90;
    }
    iVar9 = uVar12 - uVar18;
    puVar10 = (undefined4 *)(iVar3 + uVar5 * 0x5c + uVar18 * 4);
    do {
      *puVar10 = 0xffa6a6a6;
      iVar9 = iVar9 + -1;
      puVar10 = puVar10 + 1;
    } while (iVar9 != 0);
  }
LAB_1000ff90:
  if (piVar6 != (int *)0x0) {
    recovered_10012318(piVar6,5,3,0x10,0x10);
  }
  recovered_100125d8(0x19,7,str_10023955,0xffffffff,0x191919,1);
  recovered_100125d8(0x56,7,&DAT_1002395c,0xffffffff,0x4b4b4b,1);
  recovered_100125d8(0x82,7,&DAT_10023961,0xffffffff,0x4b4b4b,1);
  recovered_100125d8(0xb0,7,str_10023966,0xffffffff,0x4b4b4b,1);
  recovered_1000be90(aiStack_30);
  return;
}

#undef DAT_10010070
#undef DAT_10010078
#undef DAT_10010080
#undef DAT_10010088
#undef DAT_1002395c
#undef DAT_10023961
#undef DAT_10024130
#undef DAT_10024134
#undef DAT_100242f8
#undef str_1002392b
#undef str_10023955
#undef str_10023966
#undef aiStack_30

#undef DAT_10024130
#define DAT_10024130 (*(int *)(((uintptr_t)pf_module_state + 0xb28U)))
#undef DAT_10024134
#define DAT_10024134 (*(int *)(((uintptr_t)pf_module_state + 0xb2cU)))
#undef DAT_10024144
#define DAT_10024144 (*(byte *)(((uintptr_t)pf_module_state + 0xb3cU)))
#undef DAT_10024148
#define DAT_10024148 (*(int *)(((uintptr_t)pf_module_state + 0xb40U)))
#undef str_10023759
#define str_10023759 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x151U)))
#undef str_1002396d
#define str_1002396d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x365U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10010090
 */

void recovered_10010090(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;

  iVar1 = DAT_10024130;
  uVar2 = recovered_10005d20();
  piVar3 = recovered_10011f28((byte *)str_1002396d,uVar2);
  iVar4 = iVar1 + -0x56;
  if (iVar1 < 0x5e) {
    iVar4 = 8;
  }
  if ((0x6f < DAT_10024130) && (0x77 < DAT_10024134)) {
    if (piVar3 == (int *)0x0) {
      uVar2 = DAT_10024144 ^ 0xff;
      if (DAT_10024148 == 0) {
        uVar2 = 0xff;
      }
      recovered_10012e84(iVar4 + 0x16,0x2c,0x1e,0x18,0xffecd7,uVar2);
      recovered_1001297c(iVar4 + 0x16,0x2c,0x1e,0x18,0x967450);
    }
    else {
      recovered_10012318(piVar3,iVar4 + 0x14,0x2a,0x22,0x22);
    }
    recovered_10012dc0(iVar4 + 3,0x4f,0x44,(byte *)str_10023759,0x1c1c1c);
  }
  return;
}

#undef DAT_10024130
#undef DAT_10024134
#undef DAT_10024144
#undef DAT_10024148
#undef str_10023759
#undef str_1002396d

#undef DAT_10023774
#define DAT_10023774 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x16cU)))
#undef DAT_10024130
#define DAT_10024130 (*(int *)(((uintptr_t)pf_module_state + 0xb28U)))
#undef DAT_10024134
#define DAT_10024134 (*(int *)(((uintptr_t)pf_module_state + 0xb2cU)))
#undef DAT_10024144
#define DAT_10024144 (*(byte *)(((uintptr_t)pf_module_state + 0xb3cU)))
#undef DAT_10024148
#define DAT_10024148 (*(int *)(((uintptr_t)pf_module_state + 0xb40U)))
#undef DAT_100256c8
#define DAT_100256c8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x20c0U)))
#undef DAT_100256c9
#define DAT_100256c9 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x20c1U)))
#undef DAT_100256f1
#define DAT_100256f1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x20e9U)))
#undef DAT_100256f2
#define DAT_100256f2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x20eaU)))
#undef DAT_100257e4
#define DAT_100257e4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x21dcU)))
#define local_24 (*(int *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100101b8
 */

void recovered_100101b8(void)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  byte *pbVar7;
  byte *pbVar8;
  uint uVar9;
  int iVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte bVar13;
  int iVar14;
  byte *pbVar15;
  int iVar16;

  iVar16 = 0;
  pbVar12 = &DAT_100256f2;
  local_24 = 0;
  do {
    iVar3 = iVar16 * 0x124;
    pbVar7 = &DAT_100256c8 + iVar3;
    if (*pbVar7 == 1) {
      iVar14 = (DAT_10024130 + -0x18) / 0x52;
      if (iVar14 < 2) {
        iVar14 = 1;
      }
      iVar4 = recovered_10000b48(local_24,iVar14);
      iVar10 = iVar4 * 0x4e;
      if (DAT_10024134 + -0x42 < (int)(iVar10 + 0x66U)) {
        return;
      }
      uVar5 = recovered_100130e8(pbVar7,iVar10 + 0x66U);
      if (*pbVar7 == 0) {
        local_24 = local_24 + 1;
      }
      else {
        pbVar15 = &DAT_100256f1 + iVar3;
        pbVar7 = (byte *)0x0;
        pbVar8 = (byte *)0x0;
        if (*pbVar15 != 0) {
          pbVar11 = pbVar12;
          bVar13 = *pbVar15;
          do {
            bVar1 = *pbVar11;
            if (bVar13 == 0x2f) {
              pbVar8 = pbVar11 + -1;
            }
            pbVar11 = pbVar11 + 1;
            bVar13 = bVar1;
          } while (bVar1 != 0);
        }
        pbVar11 = pbVar15;
        if (pbVar8 != (byte *)0x0) {
          pbVar11 = pbVar8 + 1;
        }
        if (*pbVar11 != 0) {
          pbVar7 = (byte *)0x0;
          bVar13 = *pbVar11;
          do {
            bVar1 = pbVar11[1];
            if (bVar13 == 0x2e) {
              pbVar7 = pbVar11;
            }
            pbVar11 = pbVar11 + 1;
            bVar13 = bVar1;
          } while (bVar1 != 0);
        }
        iVar14 = (local_24 - iVar4 * iVar14) * 0x52;
        if (pbVar7 == (byte *)0x0) {
          pbVar7 = &DAT_10023774;
        }
        uVar9 = (uint)*pbVar7;
        if (uVar9 == 0) {
          iVar4 = 0x2e;
          goto LAB_100103fc;
        }
        if (uVar9 - 0x41 < 0x1a) {
          uVar9 = uVar9 | 0x20;
        }
        if ((uVar9 == 0x2e) && (uVar9 = (uint)pbVar7[1], uVar9 != 0)) {
          if (uVar9 - 0x41 < 0x1a) {
            uVar9 = uVar9 | 0x20;
          }
          if (uVar9 != 0x61) goto LAB_1001042c;
          uVar9 = (uint)pbVar7[2];
          iVar4 = 0x70;
          if (uVar9 == 0) {
LAB_100103fc:
            if (iVar4 != 0) goto LAB_1001042c;
          }
          else {
            if (uVar9 - 0x41 < 0x1a) {
              uVar9 = uVar9 | 0x20;
            }
            if (uVar9 != 0x70) goto LAB_1001042c;
            uVar9 = (uint)pbVar7[3];
            if (uVar9 == 0) goto LAB_100103fc;
            if (uVar9 - 0x41 < 0x1a) {
              uVar9 = uVar9 | 0x20;
            }
            if ((uVar9 != 0x70) || (pbVar7[4] != 0)) goto LAB_1001042c;
          }
          piVar6 = recovered_100132e8(pbVar15,(&DAT_100257e4)[iVar16 * 0x49]);
          if (piVar6 != (int *)0x0) goto LAB_10010458;
LAB_10010478:
          uVar9 = ~(uint)DAT_10024144;
          if (DAT_10024148 == 0) {
            uVar9 = 0xffffffff;
          }
          if (uVar5 == 0) {
            recovered_10012e84(iVar14 + 0x25,iVar10 + 0x2c,0x18,0x1e,0xffffff,uVar9 & 0xff);
            recovered_1001297c(iVar14 + 0x25,iVar10 + 0x2c,0x18,0x1e,0x787878);
            uVar5 = DAT_10024144 ^ 0xff;
            if (DAT_10024148 == 0) {
              uVar5 = 0xff;
            }
            recovered_10012e84(iVar14 + 0x36,iVar10 + 0x2d,6,6,0xe8e8e8,uVar5);
          }
          else {
            recovered_10012e84(iVar14 + 0x20,iVar10 + 0x30,0x22,0x18,0xffecd7,uVar9 & 0xff);
            recovered_1001297c(iVar14 + 0x20,iVar10 + 0x30,0x22,0x18,0xcc823e);
            uVar5 = DAT_10024144 ^ 0xff;
            if (DAT_10024148 == 0) {
              uVar5 = 0xff;
            }
            recovered_10012e84(iVar14 + 0x25,iVar10 + 0x2c,0x10,7,0xfcdfbe,uVar5);
            recovered_1001297c(iVar14 + 0x25,iVar10 + 0x2c,0x10,7,0xcc823e);
          }
        }
        else {
LAB_1001042c:
          bVar2 = recovered_10013aec(pbVar15);
          if ((!bVar2) ||
             (piVar6 = recovered_10011f28(pbVar15,(&DAT_100257e4)[iVar16 * 0x49]),
             piVar6 == (int *)0x0)) goto LAB_10010478;
LAB_10010458:
          recovered_10012318(piVar6,iVar14 + 0x20,iVar10 + 0x2a,0x22,0x22);
        }
        recovered_10012dc0(iVar14 + 0xf,iVar10 + 0x4f,0x44,&DAT_100256c9 + iVar3,0x1c1c1c);
        local_24 = local_24 + 1;
      }
    }
    iVar16 = iVar16 + 1;
    pbVar12 = pbVar12 + 0x124;
    if (iVar16 == 0x18) {
      return;
    }
  } while( true );
}

#undef DAT_10023774
#undef DAT_10024130
#undef DAT_10024134
#undef DAT_10024144
#undef DAT_10024148
#undef DAT_100256c8
#undef DAT_100256c9
#undef DAT_100256f1
#undef DAT_100256f2
#undef DAT_100257e4
#undef local_24

#undef DAT_10024130
#define DAT_10024130 (*(uint *)(((uintptr_t)pf_module_state + 0xb28U)))
#undef DAT_10024134
#define DAT_10024134 (*(uint *)(((uintptr_t)pf_module_state + 0xb2cU)))
#undef DAT_10024144
#define DAT_10024144 (*(byte *)(((uintptr_t)pf_module_state + 0xb3cU)))
#undef DAT_10024148
#define DAT_10024148 (*(uint *)(((uintptr_t)pf_module_state + 0xb40U)))
#undef DAT_1002414c
#define DAT_1002414c (*(uint32_t *)(((uintptr_t)pf_module_state + 0xb44U)))
#undef DAT_10024150
#define DAT_10024150 (*(uint32_t *)(((uintptr_t)pf_module_state + 0xb48U)))
#undef DAT_100242f8
#define DAT_100242f8 (*(int *)(((uintptr_t)pf_module_state + 0xcf0U)))
#define local_70 (*(int *)(frame + 16))
#define local_6c (*(uint *)(frame + 20))
#define local_4c (*(int *)(frame + 52))
#define local_44 (*(uint *)(frame + 60))
#define local_3c (*(undefined1 * *)(frame + 68))
#define local_34 (*(uint *)(frame + 76))
#define local_30 (*(int *)(frame + 80))
#define local_2c (*(int *)(frame + 84))
#define local_28 (*(uint *)(frame + 88))
#define local_24 (*(uint *)(frame + 92))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10010640
 */

void recovered_10010640(char *param_1,int param_2)

{
  unsigned char frame[160] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  longlong lVar9;
  ushort uVar10;
  ushort uVar11;
  int iVar12;
  int *piVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  uint *puVar17;
  int iVar18;
  byte *pbVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  int iVar23;
  byte *pbVar24;
  uint uVar25;
  uint uVar26;
  int iVar27;
  int *piVar28;
  int iVar29;
  uint uVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  byte *pbVar35;
  uint uVar36;
  uint uVar37;
  byte *pbVar38;
  undefined1 *puVar39;
  int iVar40;
  uint uVar41;
  uint uVar42;
  uint uVar43;
  byte *pbVar44;
  uint uVar45;
  uint uVar46;
  uint uVar47;
  uint uVar48;
  int iVar49;
  int iVar50;
  int iVar51;
  uint uVar52;
  uint uVar53;
  uint uVar54;
  int iVar55;
  int iVar56;
  uint uVar57;
  uint uVar58;
  int iVar59;
  uint uVar60;
  uint uVar61;
  bool bVar62;
  bool bVar63;
  longlong lVar64;
  ulonglong uVar65;
  ulonglong uVar66;

  cVar4 = *param_1;
  bVar62 = cVar4 == '\x01';
  if (bVar62) {
    cVar4 = param_1[1];
  }
  if (!bVar62 || cVar4 != '\x01') {
    return;
  }
  iVar29 = 0x18;
  iVar12 = *(int *)(param_1 + 0x60);
  piVar13 = *(int **)(param_1 + 0x5c);
  iVar14 = *(int *)(param_1 + 0x58);
  uVar15 = *(uint *)(param_1 + 8);
  if (param_1[2] == '\0') {
    iVar29 = *(int *)(param_1 + 100);
  }
  if (uVar15 == 0xffffffff) {
    uVar30 = DAT_10024148;
    if (DAT_10024148 < 4) goto LAB_100106d0;
LAB_100106d8:
    uVar30 = ~(uint)(byte)param_1[5];
  }
  else {
    uVar30 = uVar15;
    if (3 < uVar15) goto LAB_100106d8;
LAB_100106d0:
    if (uVar30 != 0) goto LAB_100106d8;
    uVar30 = 0xff;
  }
  if (uVar15 == 0xffffffff) {
    uVar15 = DAT_10024148;
    if (DAT_10024148 < 4) goto LAB_10010710;
LAB_10010718:
    uVar15 = (uint)(byte)param_1[6];
  }
  else {
    if (3 < uVar15) goto LAB_10010718;
LAB_10010710:
    if (uVar15 != 0) goto LAB_10010718;
    uVar15 = 0xff;
  }
  recovered_10012e84(iVar14 + 5,(int)piVar13 + 6,iVar12,iVar29,0xacacac,uVar15);
  uVar16 = *(uint *)(param_1 + 8);
  uVar15 = DAT_10024148;
  if (uVar16 != 0xffffffff) {
    uVar15 = uVar16;
  }
  if (uVar15 < 4) {
    if (uVar15 == 3) {
      if (uVar16 == 0xffffffff) {
        if (DAT_10024148 == 2) {
          puVar17 = &DAT_1002414c;
        }
        else {
          if (DAT_10024148 != 3) goto LAB_100112c4;
          puVar17 = &DAT_10024150;
        }
      }
      else {
        puVar17 = (uint *)(param_1 + 0xc);
      }
      uVar15 = *puVar17;
      local_34 = 0;
      if ((uVar15 != 0) &&
         (iVar49 = recovered_10017bfc(iVar14,piVar13,iVar12,iVar29,&local_30,&local_34),
         uVar16 = DAT_10024130, iVar49 != 0)) {
        uVar25 = local_24;
        if ((int)local_28 < (int)local_24) {
          uVar25 = local_28;
        }
        uVar45 = (int)uVar25 / 2;
        uVar25 = (int)uVar25 / 2;
        if (uVar45 < uVar15) {
          uVar15 = uVar25;
        }
        uVar48 = uVar45;
        if ((int)uVar15 < (int)uVar25) {
          uVar48 = uVar15;
        }
        if ((int)uVar15 < 1) {
          uVar48 = 1;
        }
        uVar15 = local_24 * 0x80 - 0x80;
        if ((int)(uVar48 * 2) < (int)uVar25) {
          uVar45 = uVar48 << 1;
        }
        uVar25 = local_28 * 0x80 - 0x80;
        if ((int)uVar48 < 4) {
          uVar45 = 8;
        }
        uVar58 = uVar15;
        if ((int)uVar15 < (int)uVar25) {
          uVar58 = uVar25;
        }
        if (0 < (int)local_24) {
          uVar41 = 5;
          uVar1 = uVar48 >> 1;
          if (uVar48 / 0xc < 5) {
            uVar41 = uVar48 / 0xc;
          }
          if (uVar48 < 0xc) {
            uVar41 = 1;
          }
          uVar26 = uVar1;
          if (0x25 < uVar1) {
            uVar26 = 0x26;
          }
          local_44 = 0;
          uVar20 = local_24;
          uVar57 = local_28;
          do {
            if (0 < (int)uVar57) {
              uVar61 = 0;
              uVar21 = local_44 * 0x100 - uVar15;
              uVar20 = local_44;
              if ((int)uVar21 < 0) {
                uVar20 = -uVar21;
              }
              local_6c = uVar21;
              if ((int)uVar21 < 0) {
                local_6c = uVar20;
              }
              local_3c = (undefined1 *)
                         (DAT_100242f8 + ((local_2c + local_44) * uVar16 + local_30) * 4);
              do {
                uVar20 = local_24;
                iVar49 = uVar57 - 1;
                uVar36 = iVar49 - uVar61;
                iVar27 = local_24 - 1;
                uVar42 = 0;
                uVar53 = uVar61;
                if ((int)uVar36 < (int)uVar61) {
                  uVar53 = uVar36;
                }
                uVar52 = 0xfffffc00;
                uVar46 = iVar27 - local_44;
                if ((int)local_44 < (int)uVar53) {
                  uVar42 = 0xfffffc00;
                }
                uVar54 = local_44;
                if ((int)uVar53 < (int)local_44) {
                  uVar54 = uVar53;
                }
                if ((int)uVar46 < (int)uVar54) {
                  uVar42 = 0x400;
                }
                if ((int)uVar36 < (int)uVar61) {
                  uVar52 = 0x400;
                }
                if ((int)uVar46 < (int)uVar54) {
                  uVar52 = 0;
                }
                if ((int)local_44 < (int)uVar53) {
                  uVar52 = 0;
                }
                if ((int)uVar46 < (int)uVar54) {
                  uVar54 = uVar46;
                }
                if (0 < (int)uVar45) {
                  uVar36 = uVar45;
                  uVar53 = uVar45;
                  if (((int)uVar45 <= (int)local_44) || ((int)uVar45 <= (int)uVar61)) {
                    uVar46 = uVar57 - uVar45;
                    if (((int)local_44 < (int)uVar45) && ((int)uVar46 <= (int)uVar61)) {
                      uVar53 = iVar49 - uVar45;
                    }
                    else {
                      uVar36 = local_24 - uVar45;
                      if (((int)uVar61 < (int)uVar45) && ((int)uVar36 <= (int)local_44)) {
                        uVar36 = iVar27 - uVar45;
                      }
                      else {
                        bVar63 = SBORROW4(uVar46,uVar61);
                        iVar50 = uVar46 - uVar61;
                        bVar62 = uVar46 == uVar61;
                        if ((int)uVar46 <= (int)uVar61) {
                          bVar63 = SBORROW4(uVar36,local_44);
                          iVar50 = uVar36 - local_44;
                          bVar62 = uVar36 == local_44;
                        }
                        if (!bVar62 && iVar50 < 0 == bVar63) goto LAB_10010ec4;
                        uVar36 = iVar27 - uVar45;
                        uVar53 = iVar49 - uVar45;
                      }
                    }
                  }
                  uVar53 = uVar61 - uVar53;
                  uVar36 = local_44 - uVar36;
                  uVar42 = uVar36 * uVar36 + uVar53 * uVar53;
                  uVar52 = 0x40000000;
                  uVar46 = 0;
                  do {
                    uVar37 = uVar46;
                    uVar54 = uVar52;
                    uVar52 = uVar54 >> 2;
                    uVar46 = uVar37 >> 2 | uVar54 << 0x1e;
                  } while ((uint)(uVar37 <= uVar42) <= -uVar54);
                  if (uVar37 == 0 && uVar54 == 0) {
                    uVar42 = 0;
                    uVar52 = 0;
                    uVar54 = uVar45;
                  }
                  else {
                    uVar46 = 0;
                    uVar43 = 0;
                    uVar52 = 0;
                    do {
                      uVar47 = uVar37 + uVar46;
                      uVar22 = uVar54 + uVar43 + (uint)CARRY4(uVar37,uVar46);
                      uVar60 = uVar42 - uVar47;
                      bVar62 = (uint)(uVar47 <= uVar42) <= uVar52 - uVar22;
                      uVar2 = uVar43 >> 1;
                      uVar3 = (uint)((byte)uVar43 & 1) << 0x1f | uVar46 >> 1;
                      uVar46 = uVar3 + uVar37;
                      uVar43 = uVar2 + uVar54 + (uint)CARRY4(uVar3,uVar37);
                      if (uVar52 <= uVar22 && bVar62) {
                        uVar43 = uVar2;
                      }
                      uVar37 = uVar37 >> 2 | uVar54 << 0x1e;
                      if (uVar52 <= uVar22 && bVar62) {
                        uVar60 = uVar42;
                        uVar46 = uVar3;
                      }
                      else {
                        uVar52 = uVar52 - (uVar22 + (uVar47 > uVar42));
                      }
                      uVar2 = uVar54 >> 2;
                      uVar54 = uVar54 >> 2;
                      uVar42 = uVar60;
                    } while (uVar37 != 0 || uVar2 != 0);
                    uVar42 = 0;
                    uVar54 = uVar45 - uVar46;
                    if (uVar45 < uVar46) {
                      uVar54 = 0;
                    }
                    if (uVar46 == 0) {
                      uVar52 = 0;
                    }
                    else {
                      lVar64 = recovered_10000d84(CONCAT44(((int)uVar53 >> 0x1f) << 10 |
                                                           uVar53 >> 0x16,uVar53 * 0x400),
                                                  (ulonglong)uVar46);
                      uVar52 = (uint)lVar64;
                      lVar64 = recovered_10000d84(CONCAT44(((int)uVar36 >> 0x1f) << 10 |
                                                           uVar36 >> 0x16,uVar36 * 0x400),
                                                  (ulonglong)uVar46);
                      uVar42 = (uint)lVar64;
                    }
                  }
                }
LAB_10010ec4:
                uVar54 = uVar54 & ~((int)uVar54 >> 0x1f);
                iVar49 = uVar61 * 0x100;
                if ((int)uVar54 < (int)uVar48) {
                  uVar53 = recovered_10000ac0(uVar1 + (uVar48 - uVar54) * 0x400,uVar48);
                  if (0x3ff < uVar53) {
                    uVar53 = 0x400;
                  }
                  lVar64 = (ulonglong)(uVar53 * -2 + 0xc00) * (ulonglong)(uVar53 * uVar53) + 0x80000
                  ;
                  uVar53 = (uint)lVar64 >> 0x14 | (int)((ulonglong)lVar64 >> 0x20) << 0xc;
                  uVar53 = (((uVar53 + 0x400) * uVar53 + 0x200) / 0x600) * (uVar26 + 4);
                  lVar64 = (ulonglong)uVar42 * (ulonglong)uVar53 +
                           CONCAT44(uVar53 * ((int)uVar42 >> 0x1f),
                                    (uint)((int)(uVar53 * ((int)uVar42 >> 0x1f) +
                                                (int)((ulonglong)uVar42 * (ulonglong)uVar53 >> 0x20)
                                                ) >> 0x1f) >> 0x14);
                  lVar9 = (ulonglong)uVar52 * (ulonglong)uVar53 +
                          CONCAT44(uVar53 * ((int)uVar52 >> 0x1f),
                                   (uint)((int)(uVar53 * ((int)uVar52 >> 0x1f) +
                                               (int)((ulonglong)uVar52 * (ulonglong)uVar53 >> 0x20))
                                         >> 0x1f) >> 0x14);
                  iVar49 = iVar49 - ((uint)lVar9 >> 0xc | (int)((ulonglong)lVar9 >> 0x20) << 0x14);
                  local_4c = local_44 * 0x100 -
                             ((uint)lVar64 >> 0xc | (int)((ulonglong)lVar64 >> 0x20) << 0x14);
                }
                else {
                  local_4c = local_44 * 0x100;
                }
                if (0 < (int)uVar58) {
                  uVar42 = uVar61 * 0x100 - uVar25;
                  uVar53 = uVar42;
                  if ((int)uVar42 < 0) {
                    uVar53 = -uVar42;
                  }
                  if (uVar53 <= local_6c) {
                    uVar53 = local_6c;
                  }
                  if (uVar53 != 0) {
                    if (uVar58 <= uVar53) {
                      uVar53 = uVar58;
                    }
                    uVar65 = recovered_10000c20(CONCAT44(uVar53 >> 0x16,uVar53 << 10),
                                                (ulonglong)uVar58);
                    uVar36 = 0x400 - (int)uVar65;
                    if (0x3ff < uVar36) {
                      uVar36 = 0x400;
                    }
                    lVar64 = (ulonglong)(uVar36 * -2 + 0xc00) * (ulonglong)(uVar36 * uVar36) +
                             0x80000;
                    uVar65 = (ulonglong)uVar41 *
                             (ulonglong)
                             ((uint)lVar64 >> 0x14 | (int)((ulonglong)lVar64 >> 0x20) << 0xc);
                    iVar40 = (int)(uVar65 >> 0x20);
                    uVar66 = recovered_10000d84(CONCAT44(((int)uVar21 >> 0x1f) << 10 |
                                                         uVar21 >> 0x16,uVar21 * 0x400),
                                                (ulonglong)uVar53);
                    iVar27 = (int)uVar66;
                    lVar64 = (uVar66 & 0xffffffff) * (uVar65 & 0xffffffff);
                    uVar36 = (uint)lVar64;
                    uVar52 = (int)uVar65 * (iVar27 >> 0x1f) + (int)((ulonglong)lVar64 >> 0x20);
                    uVar66 = recovered_10000d84(CONCAT44(((int)uVar42 >> 0x1f) << 10 |
                                                         uVar42 >> 0x16,uVar42 * 0x400),
                                                (ulonglong)uVar53);
                    iVar50 = (int)uVar66;
                    lVar64 = (uVar66 & 0xffffffff) * (uVar65 & 0xffffffff);
                    uVar46 = (uint)lVar64;
                    iVar55 = (int)uVar65 * (iVar50 >> 0x1f) + (int)((ulonglong)lVar64 >> 0x20);
                    uVar53 = (uint)((int)(iVar40 * iVar27 + uVar52) >> 0x1f) >> 0x14;
                    uVar42 = (uint)(iVar40 * iVar50 + iVar55 >> 0x1f) >> 0x14;
                    local_4c = local_4c -
                               (uVar36 + uVar53 >> 0xc |
                               (uVar52 + iVar40 * iVar27 + (uint)CARRY4(uVar36,uVar53)) * 0x100000);
                    iVar49 = iVar49 - (uVar46 + uVar42 >> 0xc |
                                      (iVar55 + iVar40 * iVar50 + (uint)CARRY4(uVar46,uVar42)) *
                                      0x100000);
                  }
                }
                if (0 < (int)uVar20) {
                  if (local_3c != (undefined1 *)0x0) {
                    uVar52 = local_34;
                  }
                  if (local_3c != (undefined1 *)0x0 && uVar52 != 0) {
                    iVar27 = uVar57 * 0x100 + -0x100;
                    iVar50 = uVar20 * 0x100 + -0x100;
                    if (local_4c < iVar50) {
                      iVar50 = local_4c;
                    }
                    if (local_4c < 0) {
                      iVar50 = 0;
                    }
                    iVar55 = iVar50 >> 8;
                    if (iVar49 < iVar27) {
                      iVar27 = iVar49;
                    }
                    if (iVar49 < 0) {
                      iVar27 = 0;
                    }
                    uVar10 = (ushort)iVar50 & 0xff;
                    uVar11 = (ushort)iVar27 & 0xff;
                    iVar27 = iVar27 >> 8;
                    pbVar19 = (byte *)(uVar52 + (iVar55 * uVar57 + iVar27) * 4);
                    iVar49 = (int)(short)(0x100 - uVar10) * (int)(short)uVar11;
                    iVar50 = iVar27 + 1;
                    if ((int)uVar57 <= iVar27 + 1) {
                      iVar50 = iVar27;
                    }
                    iVar40 = (int)(short)(0x100 - uVar10) * (int)(short)(0x100 - uVar11);
                    pbVar24 = (byte *)(uVar52 + (iVar55 * uVar57 + iVar50) * 4);
                    iVar31 = (int)(short)(0x100 - uVar11) * (int)(short)uVar10;
                    if (iVar55 + 1 < (int)uVar20) {
                      iVar55 = iVar55 + 1;
                    }
                    pbVar35 = (byte *)(uVar52 + (iVar55 * uVar57 + iVar27) * 4);
                    pbVar38 = (byte *)(uVar52 + (iVar55 * uVar57 + iVar50) * 4);
                    iVar27 = (int)(short)uVar10 * (int)(short)uVar11;
                    *local_3c = (char)(iVar27 * (uint)*pbVar38 +
                                       iVar31 * (uint)*pbVar35 +
                                       iVar40 * (uint)*pbVar19 + iVar49 * (uint)*pbVar24 + 0x8000 >>
                                      0x10);
                    local_3c[1] = (char)(iVar27 * (uint)pbVar38[1] +
                                         iVar31 * (uint)pbVar35[1] +
                                         iVar40 * (uint)pbVar19[1] + iVar49 * (uint)pbVar24[1] +
                                         0x8000 >> 0x10);
                    bVar5 = pbVar24[2];
                    bVar6 = pbVar19[2];
                    bVar7 = pbVar35[2];
                    bVar8 = pbVar38[2];
                    local_3c[3] = 0xff;
                    local_3c[2] = (char)(iVar27 * (uint)bVar8 +
                                         iVar31 * (uint)bVar7 +
                                         iVar40 * (uint)bVar6 + iVar49 * (uint)bVar5 + 0x8000 >>
                                        0x10);
                    uVar57 = local_28;
                  }
                }
                uVar61 = uVar61 + 1;
                local_3c = local_3c + 4;
              } while ((int)uVar61 < (int)uVar57);
              uVar20 = local_24;
            }
            local_44 = local_44 + 1;
          } while ((int)local_44 < (int)uVar20);
        }
      }
    }
    else if (uVar15 == 2) {
      if (uVar16 == 0xffffffff) {
        if (DAT_10024148 == 2) {
          puVar17 = &DAT_1002414c;
        }
        else {
          if (DAT_10024148 != 3) goto LAB_100112c4;
          puVar17 = &DAT_10024150;
        }
      }
      else {
        puVar17 = (uint *)(param_1 + 0xc);
      }
      uVar15 = *puVar17;
      local_34 = 0;
      if ((uVar15 != 0) &&
         (iVar49 = recovered_10017bfc(iVar14,piVar13,iVar12,iVar29,&local_30,&local_34),
         uVar16 = DAT_10024130, iVar49 != 0)) {
        uVar25 = local_24;
        if ((int)local_24 < (int)local_28) {
          uVar25 = local_28;
        }
        if (uVar25 < uVar15) {
          uVar15 = uVar25;
        }
        if ((int)uVar15 < (int)uVar25) {
          uVar25 = uVar15;
        }
        iVar49 = (int)(uVar25 + 1) / 2;
        if ((int)uVar15 < 1) {
          iVar49 = 1;
        }
        if (0 < (int)local_24) {
          iVar27 = 0;
          local_70 = iVar49 * -2;
          do {
            if (0 < (int)local_28) {
              iVar50 = 0;
              puVar39 = (undefined1 *)(DAT_100242f8 + ((local_2c + iVar27) * uVar16 + local_30) * 4)
              ;
              do {
                iVar56 = 5;
                iVar40 = local_28 - 1;
                iVar31 = iVar50 + iVar49 * 2;
                iVar55 = iVar40;
                if (iVar31 < iVar40) {
                  iVar55 = iVar31;
                }
                if (iVar31 < 0) {
                  iVar55 = 0;
                }
                iVar32 = iVar50 + iVar49;
                iVar23 = 0;
                iVar31 = iVar40;
                if (iVar32 < iVar40) {
                  iVar31 = iVar32;
                }
                if (iVar32 < 0) {
                  iVar31 = 0;
                }
                iVar33 = iVar50 - iVar49;
                iVar59 = 0;
                iVar32 = iVar40;
                if (iVar33 < iVar40) {
                  iVar32 = iVar33;
                }
                if (iVar33 < 0) {
                  iVar32 = 0;
                }
                iVar34 = iVar50 + iVar49 * -2;
                iVar33 = iVar40;
                if (iVar34 < iVar40) {
                  iVar33 = iVar34;
                }
                if (iVar34 < 0) {
                  iVar33 = 0;
                }
                if (iVar50 < iVar40) {
                  iVar40 = iVar50;
                }
                iVar18 = 0;
                iVar34 = local_70;
                do {
                  iVar51 = local_24 - 1;
                  if (iVar34 < (int)(local_24 - 1)) {
                    iVar51 = iVar34;
                  }
                  if (iVar34 < 0) {
                    iVar51 = 0;
                  }
                  pbVar24 = (byte *)(local_34 + (iVar51 * local_28 + iVar33) * 4);
                  pbVar35 = (byte *)(local_34 + (iVar51 * local_28 + iVar31) * 4);
                  pbVar19 = (byte *)(local_34 + (iVar51 * local_28 + iVar55) * 4);
                  iVar56 = iVar56 + -1;
                  pbVar38 = (byte *)(local_34 + (iVar51 * local_28 + iVar32) * 4);
                  pbVar44 = (byte *)(local_34 + (iVar51 * local_28 + iVar40) * 4);
                  iVar59 = iVar59 + (uint)*pbVar24 + (uint)*pbVar38 + (uint)*pbVar44 +
                           (uint)*pbVar35 + (uint)*pbVar19;
                  iVar34 = iVar34 + iVar49;
                  iVar23 = iVar23 + (uint)pbVar24[2] + (uint)pbVar38[2] + (uint)pbVar44[2] +
                           (uint)pbVar35[2] + (uint)pbVar19[2];
                  iVar18 = iVar18 + (uint)pbVar24[1] + (uint)pbVar38[1] + (uint)pbVar44[1] +
                           (uint)pbVar35[1] + (uint)pbVar19[1];
                } while (iVar56 != 0);
                iVar50 = iVar50 + 1;
                puVar39[3] = 0xff;
                puVar39[2] = (char)((iVar23 + 0xcU) / 0x19);
                puVar39[1] = (char)((iVar18 + 0xcU) / 0x19);
                *puVar39 = (char)((iVar59 + 0xcU) / 0x19);
                puVar39 = puVar39 + 4;
              } while (iVar50 < (int)local_28);
            }
            iVar27 = iVar27 + 1;
            local_70 = local_70 + 1;
          } while (iVar27 < (int)local_24);
        }
      }
    }
  }
LAB_100112c4:
  uVar15 = (uint)(byte)param_1[2];
  bVar62 = uVar15 == 0;
  if (bVar62) {
    uVar15 = *(uint *)(param_1 + 0x10);
  }
  if (bVar62 && uVar15 == 6) {
    uVar15 = *(uint *)(param_1 + 8);
    if (*(uint *)(param_1 + 8) == 0xffffffff) {
      uVar15 = DAT_10024148;
    }
    if ((3 < uVar15) || (uVar15 != 0)) {
      iVar49 = *(int *)(param_1 + 0x60);
      iVar55 = *(int *)(param_1 + 0x5c) + 0x26;
      iVar27 = *(int *)(param_1 + 100);
      iVar50 = *(int *)(param_1 + 0x58);
      uVar15 = uVar30 & 0xff;
      recovered_10012e84(iVar14,(int)piVar13,iVar12,iVar55 - (int)piVar13,0xf6f6f6,uVar15);
      iVar27 = iVar27 + -0x34;
      recovered_10012e84(iVar14,iVar55,(iVar50 - iVar14) + 0xe,iVar27,0xf6f6f6,uVar15);
      iVar49 = iVar50 + iVar49 + -0xe;
      recovered_10012e84(iVar49,iVar55,(iVar12 + iVar14) - iVar49,iVar27,0xf6f6f6,uVar15);
      piVar28 = (int *)(iVar27 + iVar55);
      iVar49 = (int)piVar13 + (iVar29 - (int)piVar28);
      goto LAB_10011310;
    }
  }
  piVar28 = piVar13;
  iVar49 = iVar29;
LAB_10011310:
  recovered_10012e84(iVar14,(int)piVar28,iVar12,iVar49,0xf6f6f6,uVar30 & 0xff);
  uVar15 = 0x808080;
  if (param_2 != 0) {
    uVar15 = 0x282828;
  }
  recovered_1001297c(iVar14,(int)piVar13,iVar12,iVar29,uVar15);
  uVar15 = 0xdadada;
  if (param_2 != 0) {
    uVar15 = 0xe8e8e8;
  }
  recovered_10012e84(iVar14 + 1,(int)piVar13 + 1,iVar12 + -2,0x17,uVar15,uVar30 & 0xff);
  recovered_10012e84(iVar14 + 1,(int)piVar13 + 0x17,iVar12 + -2,1,0x9a9a9a,uVar30 & 0xff);
  recovered_10013f70(*(int *)(param_1 + 0x58) + 9,*(int *)(param_1 + 0x5c) + 6,0xc,0xc,0x505cee,0);
  recovered_10013f70(*(int *)(param_1 + 0x58) + 0x1b,*(int *)(param_1 + 0x5c) + 6,0xc,0xc,0x48beee,1
                    );
  recovered_10013f70(*(int *)(param_1 + 0x58) + 0x2d,*(int *)(param_1 + 0x5c) + 6,0xc,0xc,0x6ecd78,2
                    );
  recovered_10013f70(*(int *)(param_1 + 0x58) + 0x3f,*(int *)(param_1 + 0x5c) + 6,0xc,0xc,0xbababa,3
                    );
  uVar15 = 0x606060;
  if (param_2 != 0) {
    uVar15 = 0x1c1c1c;
  }
  recovered_100125d8(iVar14 + 0x58,(int)(piVar13 + 2),param_1 + 0x18,0x22,uVar15,1);
  if ((param_1[2] == '\0') && (recovered_10014490((int)param_1), *param_1 == '\x01')) {
    cVar4 = param_1[2];
    bVar62 = cVar4 == '\0';
    if (bVar62) {
      cVar4 = param_1[3];
    }
    if (bVar62 && cVar4 == '\0') {
      uVar15 = DAT_10024144 ^ 0xff;
      iVar12 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
      if (DAT_10024148 == 0) {
        uVar15 = 0xff;
      }
      iVar14 = *(int *)(param_1 + 0x5c) + *(int *)(param_1 + 100);
      recovered_10012e84(iVar12 + -0x10,iVar14 + -0x10,0xe,0xe,0xb6b6b6,uVar15);
      uVar15 = DAT_10024144 ^ 0xff;
      if (DAT_10024148 == 0) {
        uVar15 = 0xff;
      }
      recovered_10012e84(iVar12 + -0xf,iVar14 + -0xf,0xc,0xc,0xcecece,uVar15);
      recovered_1001297c(iVar12 + -0x10,iVar14 + -0x10,0xe,0xe,0x6e6e6e);
      uVar45 = DAT_10024134;
      uVar25 = DAT_10024130;
      uVar16 = iVar14 - 3;
      uVar15 = iVar12 - 5;
      uVar58 = iVar12 - 3;
      uVar48 = uVar15 | uVar16;
      uVar30 = uVar16;
      iVar29 = -9;
      while( true ) {
        if (-1 < (int)uVar48) {
          bVar63 = SBORROW4(uVar25,uVar15);
          iVar49 = uVar25 - uVar15;
          bVar62 = uVar25 == uVar15;
          if ((int)uVar15 < (int)uVar25) {
            bVar63 = SBORROW4(uVar45,uVar30);
            iVar49 = uVar45 - uVar30;
            bVar62 = uVar45 == uVar30;
          }
          if ((!bVar62 && iVar49 < 0 == bVar63) && (DAT_100242f8 != 0)) {
            iVar49 = uVar30 * uVar25 + uVar15;
            *(undefined1 *)(DAT_100242f8 + iVar49 * 4) = 0x80;
            *(undefined1 *)(DAT_100242f8 + iVar49 * 4 + 1) = 0x80;
            *(undefined1 *)(DAT_100242f8 + iVar49 * 4 + 2) = 0x80;
            *(undefined1 *)(DAT_100242f8 + iVar49 * 4 + 3) = 0xff;
          }
        }
        if (uVar30 == iVar14 - 0xeU && uVar15 == uVar58) break;
        if (iVar29 < 2) {
          uVar30 = uVar30 - 1;
        }
        iVar49 = iVar29;
        if (-6 < iVar29) {
          uVar15 = uVar15 + 1;
          iVar49 = iVar29 + -0xb;
        }
        if (iVar29 < 2) {
          iVar49 = iVar49 + 2;
        }
        uVar48 = uVar15 | uVar30;
        iVar29 = iVar49;
      }
      uVar15 = iVar12 - 9;
      uVar48 = uVar15 | uVar16;
      uVar30 = uVar16;
      iVar29 = -1;
      while( true ) {
        if (-1 < (int)uVar48) {
          bVar63 = SBORROW4(uVar25,uVar15);
          iVar49 = uVar25 - uVar15;
          bVar62 = uVar25 == uVar15;
          if ((int)uVar15 < (int)uVar25) {
            bVar63 = SBORROW4(uVar45,uVar30);
            iVar49 = uVar45 - uVar30;
            bVar62 = uVar45 == uVar30;
          }
          if ((!bVar62 && iVar49 < 0 == bVar63) && (DAT_100242f8 != 0)) {
            iVar49 = uVar30 * uVar25 + uVar15;
            *(undefined1 *)(DAT_100242f8 + iVar49 * 4) = 0x80;
            *(undefined1 *)(DAT_100242f8 + iVar49 * 4 + 1) = 0x80;
            *(undefined1 *)(DAT_100242f8 + iVar49 * 4 + 2) = 0x80;
            *(undefined1 *)(DAT_100242f8 + iVar49 * 4 + 3) = 0xff;
          }
        }
        if (uVar30 == iVar14 - 10U && uVar15 == uVar58) break;
        if (iVar29 < 4) {
          uVar30 = uVar30 - 1;
        }
        iVar49 = iVar29;
        if (-4 < iVar29) {
          uVar15 = uVar15 + 1;
          iVar49 = iVar29 + -7;
        }
        if (iVar29 < 4) {
          iVar49 = iVar49 + 6;
        }
        uVar48 = uVar15 | uVar30;
        iVar29 = iVar49;
      }
      uVar15 = iVar12 - 0xd;
      uVar30 = uVar15 | uVar16;
      iVar12 = 7;
      while( true ) {
        if (-1 < (int)uVar30) {
          bVar63 = SBORROW4(uVar25,uVar15);
          iVar29 = uVar25 - uVar15;
          bVar62 = uVar25 == uVar15;
          if ((int)uVar15 < (int)uVar25) {
            bVar63 = SBORROW4(uVar45,uVar16);
            iVar29 = uVar45 - uVar16;
            bVar62 = uVar45 == uVar16;
          }
          if ((!bVar62 && iVar29 < 0 == bVar63) && (DAT_100242f8 != 0)) {
            iVar29 = uVar16 * uVar25 + uVar15;
            *(undefined1 *)(DAT_100242f8 + iVar29 * 4) = 0x80;
            *(undefined1 *)(DAT_100242f8 + iVar29 * 4 + 1) = 0x80;
            *(undefined1 *)(DAT_100242f8 + iVar29 * 4 + 2) = 0x80;
            *(undefined1 *)(DAT_100242f8 + iVar29 * 4 + 3) = 0xff;
          }
        }
        if (uVar16 == iVar14 - 6U && uVar15 == uVar58) break;
        if (iVar12 < 6) {
          uVar16 = uVar16 - 1;
        }
        iVar29 = iVar12;
        if (-2 < iVar12) {
          uVar15 = uVar15 + 1;
          iVar29 = iVar12 + -3;
        }
        if (iVar12 < 6) {
          iVar29 = iVar29 + 10;
        }
        uVar30 = uVar15 | uVar16;
        iVar12 = iVar29;
      }
    }
  }
  return;
}

#undef DAT_10024130
#undef DAT_10024134
#undef DAT_10024144
#undef DAT_10024148
#undef DAT_1002414c
#undef DAT_10024150
#undef DAT_100242f8
#undef local_70
#undef local_6c
#undef local_4c
#undef local_44
#undef local_3c
#undef local_34
#undef local_30
#undef local_2c
#undef local_28
#undef local_24

#undef DAT_10023f70
#define DAT_10023f70 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x968U)))
#undef DAT_10023f8c
#define DAT_10023f8c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x984U)))
#undef DAT_10024130
#define DAT_10024130 (*(int *)(((uintptr_t)pf_module_state + 0xb28U)))
#undef DAT_10024134
#define DAT_10024134 (*(int *)(((uintptr_t)pf_module_state + 0xb2cU)))
#undef DAT_10024140
#define DAT_10024140 (*(int *)(((uintptr_t)pf_module_state + 0xb38U)))
#undef DAT_1002430c
#define DAT_1002430c (*(int *)(((uintptr_t)pf_module_state + 0xd04U)))
#undef DAT_1012e3fc
#define DAT_1012e3fc (*(int *)(((uintptr_t)pf_module_state + 0x10adf4U)))
#undef DAT_1012e400
#define DAT_1012e400 (*(int *)(((uintptr_t)pf_module_state + 0x10adf8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100118f4
 */

void recovered_100118f4(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  int iVar5;

  if ((-1 < DAT_10024140) &&
     (pcVar3 = (char *)(DAT_1002430c + DAT_10024140 * 0xd9c), *pcVar3 == '\x01')) {
    uVar4 = *(uint *)(pcVar3 + 0x10);
    iVar2 = (DAT_10024130 - *(int *)(pcVar3 + 0x58)) + -4;
    if (DAT_1012e3fc < iVar2) {
      iVar2 = DAT_1012e3fc;
    }
    if (uVar4 < 7) {
      iVar5 = *(int *)(&DAT_10023f8c + uVar4 * 4);
      iVar1 = *(int *)(&DAT_10023f70 + uVar4 * 4);
    }
    else {
      iVar5 = 0x6e;
      iVar1 = 0xb4;
    }
    if (DAT_1012e3fc < iVar1) {
      iVar2 = iVar1;
    }
    iVar1 = -0x42;
    if (uVar4 == 6) {
      iVar1 = -4;
    }
    iVar1 = (iVar1 + DAT_10024134) - *(int *)(pcVar3 + 0x5c);
    if (DAT_1012e400 < iVar1) {
      iVar1 = DAT_1012e400;
    }
    if (DAT_1012e400 < iVar5) {
      iVar1 = iVar5;
    }
    recovered_1001297c(*(int *)(pcVar3 + 0x58),*(int *)(pcVar3 + 0x5c),iVar2,iVar1,0x5c5c5c);
    iVar5 = iVar2;
    if (2 < iVar2) {
      iVar5 = iVar1;
    }
    if (2 < iVar5) {
      recovered_1001297c(*(int *)(pcVar3 + 0x58) + 1,*(int *)(pcVar3 + 0x5c) + 1,iVar2 + -2,
                         iVar1 + -2,0xd2d2d2);
    }
  }
  return;
}

#undef DAT_10023f70
#undef DAT_10023f8c
#undef DAT_10024130
#undef DAT_10024134
#undef DAT_10024140
#undef DAT_1002430c
#undef DAT_1012e3fc
#undef DAT_1012e400

#undef DAT_10024130
#define DAT_10024130 (*(int *)(((uintptr_t)pf_module_state + 0xb28U)))
#undef DAT_10024134
#define DAT_10024134 (*(int *)(((uintptr_t)pf_module_state + 0xb2cU)))
#undef DAT_10024144
#define DAT_10024144 (*(byte *)(((uintptr_t)pf_module_state + 0xb3cU)))
#undef DAT_10024148
#define DAT_10024148 (*(int *)(((uintptr_t)pf_module_state + 0xb40U)))
#undef DAT_10024910
#define DAT_10024910 (*(char * *)(((uintptr_t)pf_module_state + 0x1308U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10011a3c
 */

void recovered_10011a3c(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;

  iVar1 = (uint)(byte)DAT_10024910[0x834] +
          (uint)(byte)(DAT_10024910[300] + *DAT_10024910 + DAT_10024910[600] + DAT_10024910[900] +
                       DAT_10024910[0x4b0] + DAT_10024910[0x5dc] + DAT_10024910[0x708]) +
          (uint)(byte)DAT_10024910[0x960] + (uint)(byte)DAT_10024910[0xa8c] +
          (uint)(byte)DAT_10024910[3000] + (uint)(byte)DAT_10024910[0xce4] +
          (uint)(byte)DAT_10024910[0xe10] + (uint)(byte)DAT_10024910[0xf3c] +
          (uint)(byte)DAT_10024910[0x1068] + (uint)(byte)DAT_10024910[0x1194] +
          (uint)(byte)DAT_10024910[0x12c0] + (uint)(byte)DAT_10024910[0x13ec];
  if (iVar1 != 0) {
    uVar5 = DAT_10024144 ^ 0xff;
    iVar7 = DAT_10024134 + -0x3c;
    if (DAT_10024148 == 0) {
      uVar5 = 0xff;
    }
    iVar6 = iVar1 * 0x44 + 6;
    iVar1 = (DAT_10024130 + iVar1 * -0x44 + 0x12) / 2 + -0xc;
    recovered_10012e84(iVar1,iVar7,iVar6,0x3a,0xeeeeee,uVar5);
    recovered_1001297c(iVar1,iVar7,iVar6,0x3a,0x8e8e8e);
    iVar1 = 0x12;
    iVar7 = 0;
    iVar6 = 0;
    pcVar2 = DAT_10024910;
    do {
      if (pcVar2[iVar7] == '\x01') {
        iVar4 = (uint)(byte)pcVar2[0x834] +
                (uint)(byte)(pcVar2[300] + *pcVar2 + pcVar2[600] + pcVar2[900] + pcVar2[0x4b0] +
                             pcVar2[0x5dc] + pcVar2[0x708]) + (uint)(byte)pcVar2[0x960] +
                (uint)(byte)pcVar2[0xa8c] + (uint)(byte)pcVar2[3000] + (uint)(byte)pcVar2[0xce4] +
                (uint)(byte)pcVar2[0xe10] + (uint)(byte)pcVar2[0xf3c] + (uint)(byte)pcVar2[0x1068] +
                (uint)(byte)pcVar2[0x1194] + (uint)(byte)pcVar2[0x12c0] + (uint)(byte)pcVar2[0x13ec]
        ;
        iVar3 = DAT_10024130;
        if (iVar4 != 0) {
          iVar3 = DAT_10024130 + iVar4 * -0x44 + 0x12;
        }
        recovered_1001a398(iVar3 / 2 + iVar6 * 0x44,DAT_10024134 + -0x36,0x32,0x2e,
                           (int)(pcVar2 + iVar7));
        iVar6 = iVar6 + 1;
        pcVar2 = DAT_10024910;
      }
      iVar7 = iVar7 + 300;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}

#undef DAT_10024130
#undef DAT_10024134
#undef DAT_10024144
#undef DAT_10024148
#undef DAT_10024910

#undef DAT_10024144
#define DAT_10024144 (*(byte *)(((uintptr_t)pf_module_state + 0xb3cU)))
#undef DAT_10024148
#define DAT_10024148 (*(int *)(((uintptr_t)pf_module_state + 0xb40U)))
#undef DAT_10027414
#define DAT_10027414 (*(char *)(((uintptr_t)pf_module_state + 0x3e0cU)))
#undef DAT_10027415
#define DAT_10027415 (*(char *)(((uintptr_t)pf_module_state + 0x3e0dU)))
#undef DAT_10027420
#define DAT_10027420 (*(int *)(((uintptr_t)pf_module_state + 0x3e18U)))
#undef DAT_10027424
#define DAT_10027424 (*(int *)(((uintptr_t)pf_module_state + 0x3e1cU)))
#undef DAT_10027519
#define DAT_10027519 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3f11U)))
#undef DAT_1002760a
#define DAT_1002760a (*(char *)(((uintptr_t)pf_module_state + 0x4002U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10011d24
 */

void recovered_10011d24(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;

  iVar3 = DAT_10027424;
  iVar2 = DAT_10027420;
  cVar1 = DAT_10027414;
  if (DAT_10027414 == '\x01') {
    cVar1 = DAT_10027415;
  }
  if (DAT_10027414 == '\x01' && cVar1 == '\x01') {
    iVar5 = DAT_10027420 + 0x12;
    iVar6 = DAT_10027424 + 0x12;
    uVar4 = DAT_10024144 ^ 0xff;
    if (DAT_10024148 == 0) {
      uVar4 = 0xff;
    }
    recovered_10012e84(iVar5,iVar6,0x2c,0x20,0xffffff,uVar4);
    uVar4 = 0x787878;
    if (DAT_1002760a != '\0') {
      uVar4 = 0xcc823e;
    }
    recovered_1001297c(iVar5,iVar6,0x2c,0x20,uVar4);
    recovered_100125d8(iVar2 + 0x16,iVar3 + 0x1e,&DAT_10027519,5,0x141414,1);
  }
  return;
}

#undef DAT_10024144
#undef DAT_10024148
#undef DAT_10027414
#undef DAT_10027415
#undef DAT_10027420
#undef DAT_10027424
#undef DAT_10027519
#undef DAT_1002760a

#undef DAT_10024144
#define DAT_10024144 (*(byte *)(((uintptr_t)pf_module_state + 0xb3cU)))
#undef DAT_10024148
#define DAT_10024148 (*(int *)(((uintptr_t)pf_module_state + 0xb40U)))
#undef DAT_10024374
#define DAT_10024374 (*(char *)(((uintptr_t)pf_module_state + 0xd6cU)))
#undef DAT_10024378
#define DAT_10024378 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xd70U)))
#undef DAT_1002437c
#define DAT_1002437c (*(int *)(((uintptr_t)pf_module_state + 0xd74U)))
#undef DAT_10024618
#define DAT_10024618 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1010U)))
#undef DAT_1002490c
#define DAT_1002490c (*(int *)(((uintptr_t)pf_module_state + 0x1304U)))
#undef _DAT_10024378
#define _DAT_10024378 (*(int *)(((uintptr_t)pf_module_state + 0xd70U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10011e18
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10011e18(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;

  if (DAT_10024374 == '\x01') {
    uVar1 = DAT_10024144 ^ 0xff;
    if (DAT_10024148 == 0) {
      uVar1 = 0xff;
    }
    iVar2 = DAT_1002490c * 0x16 + 4;
    recovered_10012e84(_DAT_10024378,DAT_1002437c,0xa8,iVar2,0xfafafa,uVar1);
    recovered_1001297c(_DAT_10024378,DAT_1002437c,0xa8,iVar2,0x666666);
    if (0 < DAT_1002490c) {
      pcVar3 = &DAT_10024618;
      iVar4 = 0;
      iVar2 = 8;
      do {
        recovered_100125d8(_DAT_10024378 + 10,iVar2 + DAT_1002437c,pcVar3,0xffffffff,0x232323,1);
        iVar4 = iVar4 + 1;
        iVar2 = iVar2 + 0x16;
        pcVar3 = pcVar3 + 0x2a;
      } while (iVar4 < DAT_1002490c);
    }
  }
  return;
}

#undef DAT_10024144
#undef DAT_10024148
#undef DAT_10024374
#undef DAT_10024378
#undef DAT_1002437c
#undef DAT_10024618
#undef DAT_1002490c
#undef _DAT_10024378

#undef DAT_100242e0
#define DAT_100242e0 (*(int *)(((uintptr_t)pf_module_state + 0xcd8U)))
#undef DAT_10024308
#define DAT_10024308 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xd00U)))
#undef DAT_10024310
#define DAT_10024310 (*(int *)(((uintptr_t)pf_module_state + 0xd08U)))
#undef DAT_1002762c
#define DAT_1002762c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4024U)))
#undef DAT_1002762d
#define DAT_1002762d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4025U)))
#undef DAT_10027720
#define DAT_10027720 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4118U)))
#undef DAT_10027724
#define DAT_10027724 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x411cU)))
#undef DAT_10027728
#define DAT_10027728 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4120U)))
#undef DAT_1002773c
#define DAT_1002773c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4134U)))
#undef DAT_1002784c
#define DAT_1002784c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4244U)))
#undef DAT_1002795c
#define DAT_1002795c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4354U)))
#undef DAT_10027a6c
#define DAT_10027a6c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4464U)))
#undef DAT_10027b7c
#define DAT_10027b7c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4574U)))
#undef DAT_10027c8c
#define DAT_10027c8c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4684U)))
#undef DAT_10027d9c
#define DAT_10027d9c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4794U)))
#undef DAT_10027eac
#define DAT_10027eac (*(uint8_t *)(((uintptr_t)pf_module_state + 0x48a4U)))
#undef DAT_10027fbc
#define DAT_10027fbc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x49b4U)))
#undef DAT_100280cc
#define DAT_100280cc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4ac4U)))
#undef DAT_100281dc
#define DAT_100281dc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4bd4U)))
#undef DAT_100282ec
#define DAT_100282ec (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4ce4U)))
#undef DAT_100283fc
#define DAT_100283fc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4df4U)))
#undef DAT_1002850c
#define DAT_1002850c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4f04U)))
#undef DAT_1002861c
#define DAT_1002861c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5014U)))
#undef DAT_1002872c
#define DAT_1002872c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5124U)))
#undef DAT_1002883c
#define DAT_1002883c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5234U)))
#undef DAT_1002894c
#define DAT_1002894c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5344U)))
#undef DAT_10028a5c
#define DAT_10028a5c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5454U)))
#undef DAT_10028b6c
#define DAT_10028b6c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5564U)))
#undef DAT_10028c7c
#define DAT_10028c7c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5674U)))
#undef DAT_10028d8c
#define DAT_10028d8c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5784U)))
#undef DAT_10028e9c
#define DAT_10028e9c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5894U)))
#undef DAT_100290e0
#define DAT_100290e0 (*(uint *)(((uintptr_t)pf_module_state + 0x5ad8U)))
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
#undef UINT_40010858
#define UINT_40010858 (*(uint *)(0x40010858U))
#undef UINT_400108e0
#define UINT_400108e0 (*(uint *)(0x400108e0U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10011f28
 */

int * recovered_10011f28(byte *param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  code *pcVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  byte bVar5;
  undefined1 *dst;
  int iVar6;
  uint uVar7;
  uint unaff_r8;
  bool bVar8;
  bool bVar9;

  uVar4 = param_2;
  if (param_1 != (byte *)0x0) {
    uVar4 = (uint)*param_1;
    unaff_r8 = param_2;
  }
  if (param_1 == (byte *)0x0 || uVar4 == 0) {
    return (int *)0x0;
  }
  iVar6 = 0;
  dst = &DAT_1002762c;
  do {
    if ((((&DAT_1002762c)[iVar6] == '\x01') && (*(uint *)((int)&DAT_10027720 + iVar6) == unaff_r8))
       && (iVar2 = strcmp(&DAT_1002762d + iVar6,(char *)param_1), iVar2 == 0)) {
      piVar3 = (int *)((int)&DAT_10027724 + iVar6);
      if (*piVar3 == 0) {
        piVar3 = (int *)0x0;
      }
      if (*(int *)((int)&DAT_10027728 + iVar6) != 0) {
        piVar3 = (int *)0x0;
      }
      return piVar3;
    }
    iVar6 = iVar6 + 0x110;
  } while (iVar6 != 0x1980);
  if (DAT_100242e0 == DAT_10024310) {
    if (1 < DAT_100290e0) {
      DAT_10024308 = 1;
      return (int *)0x0;
    }
  }
  else {
    DAT_100242e0 = DAT_10024310;
    DAT_100290e0 = 0;
  }
  DAT_100290e0 = DAT_100290e0 + 1;
  if ((((((DAT_1002762c == '\x01') && (dst = &DAT_1002773c, DAT_1002773c == '\x01')) &&
        ((dst = &DAT_1002784c, DAT_1002784c == '\x01' &&
         ((dst = &DAT_1002795c, DAT_1002795c == '\x01' &&
          (dst = &DAT_10027a6c, DAT_10027a6c == '\x01')))))) &&
       (((dst = &DAT_10027b7c, DAT_10027b7c == '\x01' &&
         ((((dst = &DAT_10027c8c, DAT_10027c8c == '\x01' &&
            (dst = &DAT_10027d9c, DAT_10027d9c == '\x01')) &&
           (dst = &DAT_10027eac, DAT_10027eac == '\x01')) &&
          ((dst = &DAT_10027fbc, DAT_10027fbc == '\x01' &&
           (dst = &DAT_100280cc, DAT_100280cc == '\x01')))))) &&
        (((dst = &DAT_100281dc, DAT_100281dc == '\x01' &&
          ((dst = &DAT_100282ec, DAT_100282ec == '\x01' &&
           (dst = &DAT_100283fc, DAT_100283fc == '\x01')))) &&
         (dst = &DAT_1002850c, DAT_1002850c == '\x01')))))) &&
      ((((dst = &DAT_1002861c, DAT_1002861c == '\x01' &&
         (dst = &DAT_1002872c, DAT_1002872c == '\x01')) &&
        (dst = &DAT_1002883c, DAT_1002883c == '\x01')) &&
       ((dst = &DAT_1002894c, DAT_1002894c == '\x01' &&
        (dst = &DAT_10028a5c, DAT_10028a5c == '\x01')))))) &&
     (((dst = &DAT_10028b6c, DAT_10028b6c == '\x01' &&
       ((dst = &DAT_10028c7c, DAT_10028c7c == '\x01' &&
        (dst = &DAT_10028d8c, DAT_10028d8c == '\x01')))) &&
      (dst = &DAT_10028e9c, DAT_10028e9c != '\0')))) {
    return (int *)0x0;
  }
  *(uint *)(dst + 0xf4) = unaff_r8;
  *dst = 1;
  bVar5 = *param_1;
  uVar7 = 0;
  uVar4 = 1;
  if (bVar5 != 0) {
    do {
      uVar7 = uVar4;
      dst[uVar7] = bVar5;
      if (0xef < uVar7) break;
      bVar5 = param_1[uVar7];
      uVar4 = uVar7 + 1;
    } while (bVar5 != 0);
  }
  dst[uVar7 + 1] = 0;
  iVar6 = Ram40010800;
  piVar3 = (int *)(dst + 0xf8);
  if ((iVar6 == 0x50414d57) && (iVar6 = Ram40010804, iVar6 != 0)) {
    uVar4 = Ram40010808;
    bVar9 = 0xb < uVar4;
    bVar8 = uVar4 == 0xc;
    if (bVar9) {
      uVar4 = Ram40010808;
      bVar8 = uVar4 == 0xe3;
    }
    if ((!bVar9 || uVar4 < 0xe3) || bVar8) goto LAB_10012284;
    pcVar1 = (code *)UINT_400108e0;
    if (pcVar1 == (code *)0x0) goto LAB_100122b0;
    uVar4 = (*pcVar1)(unaff_r8,(char *)param_1,piVar3);
  }
  else {
LAB_10012284:
    iVar6 = Ram40010800;
    if ((iVar6 != 0x50414d57) || (iVar6 = Ram40010804, iVar6 == 0)) goto LAB_100122b0;
    uVar4 = Ram40010808;
    bVar8 = 0xb < uVar4;
    if (bVar8) {
      uVar4 = Ram40010808;
    }
    if ((!bVar8 || uVar4 < 0x5c) || (pcVar1 = (code *)UINT_40010858, pcVar1 == (code *)0x0))
    goto LAB_100122b0;
    uVar4 = (*pcVar1)((char *)param_1,piVar3);
  }
  if (uVar4 != 0) {
    return piVar3;
  }
LAB_100122b0:
  memset(dst,0,0x110);
  return (int *)0x0;
}

#undef DAT_100242e0
#undef DAT_10024308
#undef DAT_10024310
#undef DAT_1002762c
#undef DAT_1002762d
#undef DAT_10027720
#undef DAT_10027724
#undef DAT_10027728
#undef DAT_1002773c
#undef DAT_1002784c
#undef DAT_1002795c
#undef DAT_10027a6c
#undef DAT_10027b7c
#undef DAT_10027c8c
#undef DAT_10027d9c
#undef DAT_10027eac
#undef DAT_10027fbc
#undef DAT_100280cc
#undef DAT_100281dc
#undef DAT_100282ec
#undef DAT_100283fc
#undef DAT_1002850c
#undef DAT_1002861c
#undef DAT_1002872c
#undef DAT_1002883c
#undef DAT_1002894c
#undef DAT_10028a5c
#undef DAT_10028b6c
#undef DAT_10028c7c
#undef DAT_10028d8c
#undef DAT_10028e9c
#undef DAT_100290e0
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef Ram40010800
#undef Ram40010804
#undef Ram40010808
#undef UINT_40010858
#undef UINT_400108e0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10012318
 */

void recovered_10012318(int *param_1,int param_2,int param_3,uint param_4,uint param_5)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  byte *pbVar3;
  uint uVar4;
  uint unaff_r4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;

  if (param_1 == (int *)0x0) {
    return;
  }
  if (param_1[1] == 0) {
    iVar6 = *param_1;
    if (iVar6 != 0) {
      unaff_r4 = param_1[3];
    }
    if (((iVar6 != 0 && unaff_r4 != 0) && (0 < (int)param_4)) && (uVar5 = param_1[4], uVar5 != 0)) {
      uVar10 = recovered_10000c20((ulonglong)param_4 * (ulonglong)uVar5,(ulonglong)unaff_r4);
      uVar4 = (uint)uVar10;
      uVar1 = param_4;
      if ((int)param_5 < (int)(uint)uVar10) {
        uVar10 = recovered_10000c20((ulonglong)param_5 * (ulonglong)unaff_r4,(ulonglong)uVar5);
        uVar1 = (uint)uVar10;
        uVar4 = param_5;
      }
      uVar7 = uVar4;
      if (0 < (int)uVar4) {
        uVar7 = uVar1;
      }
      if (0 < (int)uVar7) {
        uVar7 = 0;
        do {
          uVar10 = recovered_10000c20((ulonglong)uVar7 * (ulonglong)(uint)param_1[4],
                                      (ulonglong)uVar4);
          uVar8 = 0;
          do {
            uVar9 = param_1[3];
            uVar11 = recovered_10000c20((ulonglong)uVar8 * (ulonglong)uVar9,(ulonglong)uVar1);
            iVar2 = uVar9 * (int)uVar10 + (int)uVar11;
            uVar9 = (uint)*(byte *)(iVar6 + iVar2 * 4 + 3);
            if (uVar9 != 0) {
              pbVar3 = (byte *)(iVar6 + iVar2 * 4);
              uVar5 = uVar5 & 0xff000000 | (uint)*pbVar3 | (uint)pbVar3[1] << 8 |
                      (uint)pbVar3[2] << 0x10;
              recovered_100124c4(param_2 + (int)(param_4 - uVar1) / 2 + uVar8,
                                 param_3 + (int)(param_5 - uVar4) / 2 + uVar7,uVar5,uVar9);
            }
            uVar8 = uVar8 + 1;
          } while (uVar1 != uVar8);
          uVar7 = uVar7 + 1;
        } while ((int)uVar7 < (int)uVar4);
      }
    }
  }
  return;
}


#undef DAT_10024130
#define DAT_10024130 (*(int *)(((uintptr_t)pf_module_state + 0xb28U)))
#undef DAT_10024134
#define DAT_10024134 (*(int *)(((uintptr_t)pf_module_state + 0xb2cU)))
#undef DAT_100242f8
#define DAT_100242f8 (*(int *)(((uintptr_t)pf_module_state + 0xcf0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100124c4
 */

void recovered_100124c4(uint param_1,uint param_2,undefined4 param_3,int param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;

  if ((((-1 < (int)(param_2 | param_1)) && ((int)param_1 < DAT_10024130)) && (param_4 != 0)) &&
     (((int)param_2 < DAT_10024134 && (DAT_100242f8 != 0)))) {
    iVar3 = DAT_10024130 * param_2 + param_1;
    if (param_4 == 0xff) {
      *(char *)(DAT_100242f8 + iVar3 * 4) = (char)param_3;
      *(char *)(DAT_100242f8 + iVar3 * 4 + 1) = (char)((uint)param_3 >> 8);
      *(char *)(DAT_100242f8 + iVar3 * 4 + 2) = (char)((uint)param_3 >> 0x10);
    }
    else {
      uVar2 = (ushort)param_4;
      uVar1 = uVar2 ^ 0xff;
      *(char *)(DAT_100242f8 + iVar3 * 4) =
           (char)((ulonglong)
                  ((int)(short)uVar1 * (int)(short)(ushort)*(byte *)(DAT_100242f8 + iVar3 * 4) +
                   (int)(short)((ushort)param_3 & 0xff) * (int)(short)uVar2 + 0x7f) * 0x1010102 >>
                 0x20);
      iVar4 = DAT_100242f8 + iVar3 * 4;
      *(char *)(iVar4 + 1) =
           (char)((ulonglong)
                  ((int)(short)uVar1 * (int)(short)(ushort)*(byte *)(iVar4 + 1) +
                   (int)(short)((ushort)((uint)param_3 >> 8) & 0xff) * (int)(short)uVar2 + 0x7f) *
                  0x1010102 >> 0x20);
      iVar4 = DAT_100242f8 + iVar3 * 4;
      *(char *)(iVar4 + 2) =
           (char)((ulonglong)
                  ((int)(short)uVar1 * (int)(short)(ushort)*(byte *)(iVar4 + 2) +
                   (int)(short)((ushort)((uint)param_3 >> 0x10) & 0xff) * (int)(short)uVar2 + 0x7f)
                  * 0x1010102 >> 0x20);
    }
    *(undefined1 *)(DAT_100242f8 + iVar3 * 4 + 3) = 0xff;
  }
  return;
}

#undef DAT_10024130
#undef DAT_10024134
#undef DAT_100242f8

#undef DAT_10028fac
#define DAT_10028fac (*(void * *)(((uintptr_t)pf_module_state + 0x59a4U)))
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
#undef UINT_40010874
#define UINT_40010874 (*(uint *)(0x40010874U))
#undef UINT_40010978
#define UINT_40010978 (*(uint *)(0x40010978U))
#define aiStack_d8 (*(int (*)[6])(frame + 24))
#define local_c0 (*(int (*)[40])(frame + 48))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100125d8
 */

void recovered_100125d8(int param_1,int param_2,char *param_3,uint param_4,uint param_5,uint param_6
                       )

{
  unsigned char frame[272] __attribute__((aligned(16))) = {0};

  char cVar1;
  int iVar2;
  code *pcVar3;
  uint uVar4;
  int *piVar5;
  char cVar6;
  bool bVar7;

  if (((param_3 == (char *)0x0) || (param_6 != 1)) || (DAT_10028fac == (void *)0x0)) {
    if (param_3 == (char *)0x0) {
      return;
    }
  }
  else {
    if (*param_3 == '\0') {
      return;
    }
    uVar4 = 0;
    cVar6 = *param_3;
    do {
      if (param_4 <= uVar4) break;
      if (uVar4 == 0x9f) {
        uVar4 = 0x9f;
        break;
      }
      cVar1 = param_3[uVar4 + 1];
      *(char *)((int)local_c0 + uVar4) = cVar6;
      uVar4 = uVar4 + 1;
      cVar6 = cVar1;
    } while (cVar1 != '\0');
    *(undefined1 *)((int)local_c0 + uVar4) = 0;
    memset(aiStack_d8,0,0x18);
    iVar2 = Ram40010800;
    if ((iVar2 == 0x50414d57) && (iVar2 = Ram40010804, iVar2 != 0)) {
      uVar4 = Ram40010808;
      bVar7 = 0xb < uVar4;
      if (bVar7) {
        uVar4 = Ram40010808;
      }
      if (((bVar7 && 0x77 < uVar4) && (pcVar3 = (code *)UINT_40010874, pcVar3 != (code *)0x0)) &&
         (uVar4 = (*pcVar3)(DAT_10028fac,(char *)local_c0,param_5 & 0xff,param_5 >> 8 & 0xff,
                            param_5 >> 0x10 & 0xff,0xff,aiStack_d8), uVar4 != 0)) {
        piVar5 = aiStack_d8;
        goto LAB_100127d0;
      }
    }
  }
  if (*param_3 == '\0') {
    return;
  }
  memset(local_c0,0,0x18);
  iVar2 = Ram40010800;
  if (iVar2 != 0x50414d57) {
    return;
  }
  iVar2 = Ram40010804;
  if (iVar2 == 0) {
    return;
  }
  uVar4 = Ram40010808;
  bVar7 = 0xb < uVar4;
  if (bVar7) {
    uVar4 = Ram40010808;
  }
  if (!bVar7 || uVar4 < 0x17c) {
    return;
  }
  pcVar3 = (code *)UINT_40010978;
  if (pcVar3 == (code *)0x0) {
    return;
  }
  uVar4 = (*pcVar3)(param_3,param_4 | (int)param_4 >> 0x1f,param_6,
                    param_5 << 0x18 | ((param_5 & 0xff00) >> 8) << 0x10 |
                    ((param_5 & 0xff0000) >> 0x10) << 8 | (param_5 | 0xff000000) >> 0x18,local_c0);
  if (uVar4 == 0) {
    return;
  }
  piVar5 = local_c0;
LAB_100127d0:
  recovered_100127e0(param_1,param_2,piVar5);
  return;
}

#undef DAT_10028fac
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef Ram40010800
#undef Ram40010804
#undef Ram40010808
#undef UINT_40010874
#undef UINT_40010978
#undef aiStack_d8
#undef local_c0

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
 * Address: 0x100127e0
 */

uint recovered_100127e0(int param_1,int param_2,int *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  code *pcVar1;
  uint uVar2;
  byte *pbVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  void *ptr;
  uint unaff_r6;
  uint uVar7;
  bool bVar8;

  if (param_3 == (int *)0x0) {
    return 0;
  }
  uVar2 = param_3[3];
  ptr = (void *)*param_3;
  iVar4 = param_3[1];
  uVar6 = uVar2;
  if (0x7ffffffe < uVar2) {
    uVar6 = 0x7fffffff;
  }
  if ((iVar4 == 0) && (ptr != (void *)0x0)) {
    uVar5 = param_3[4];
    if (uVar5 != 0) {
      uVar7 = 0;
      do {
        if (uVar2 == 0) {
          uVar2 = 0;
        }
        else {
          uVar5 = 0;
          do {
            pbVar3 = (byte *)((int)ptr + uVar5 * 4 + uVar7 * param_3[5]);
            unaff_r6 = unaff_r6 & 0xff000000 | (uint)*pbVar3 | (uint)pbVar3[1] << 8 |
                       (uint)pbVar3[2] << 0x10;
            recovered_100124c4(param_1 + uVar5,uVar7 + param_2,unaff_r6,(uint)pbVar3[3]);
            uVar2 = param_3[3];
            uVar5 = uVar5 + 1;
          } while (uVar5 < uVar2);
          uVar5 = param_3[4];
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < uVar5);
      ptr = (void *)*param_3;
      iVar4 = param_3[1];
      goto LAB_100128e0;
    }
  }
  else {
LAB_100128e0:
    if (iVar4 != 0) goto LAB_1001295c;
  }
  if (((ptr != (void *)0x0) && (iVar4 = Ram40010800, iVar4 == 0x50414d57)) &&
     (iVar4 = Ram40010804, iVar4 != 0)) {
    uVar2 = Ram40010808;
    bVar8 = 0xb < uVar2;
    if (bVar8) {
      uVar2 = Ram40010808;
    }
    if ((bVar8 && 0x53 < uVar2) && (pcVar1 = (code *)UINT_40010850, pcVar1 != (code *)0x0)) {
      (*pcVar1)(ptr);
    }
  }
LAB_1001295c:
  memset(param_3,0,0x18);
  return uVar6;
}

#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef Ram40010800
#undef Ram40010804
#undef Ram40010808
#undef UINT_40010850

#undef DAT_10024130
#define DAT_10024130 (*(int *)(((uintptr_t)pf_module_state + 0xb28U)))
#undef DAT_10024134
#define DAT_10024134 (*(int *)(((uintptr_t)pf_module_state + 0xb2cU)))
#undef DAT_100242f8
#define DAT_100242f8 (*(int *)(((uintptr_t)pf_module_state + 0xcf0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001297c
 */

void recovered_1001297c(int param_1,int param_2,int param_3,int param_4,uint param_5)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulonglong uVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ulonglong *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  ulonglong *puVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;

  iVar13 = DAT_100242f8;
  iVar9 = DAT_10024134;
  iVar2 = DAT_10024130;
  iVar12 = param_3;
  if (0 < param_3) {
    iVar12 = param_4;
  }
  if (iVar12 < 1) {
    return;
  }
  iVar11 = param_3 + param_1;
  iVar12 = DAT_10024130;
  if (iVar11 < DAT_10024130) {
    iVar12 = iVar11;
  }
  if (iVar11 < 0) {
    iVar12 = 0;
  }
  iVar21 = DAT_10024130;
  if (param_1 < DAT_10024130) {
    iVar21 = param_1;
  }
  if (param_1 < 0) {
    iVar21 = 0;
  }
  iVar15 = param_2 + 1;
  if (DAT_10024134 <= param_2 + 1) {
    iVar15 = DAT_10024134;
  }
  if (param_2 < -1) {
    iVar15 = 0;
  }
  bVar3 = DAT_100242f8 != 0 && iVar21 < iVar12;
  iVar17 = DAT_10024134;
  if (param_2 < DAT_10024134) {
    iVar17 = param_2;
  }
  if (param_2 < 0) {
    iVar17 = 0;
  }
  if ((bVar3) && (iVar17 < iVar15)) {
    puVar18 = (ulonglong *)(DAT_100242f8 + (iVar17 * DAT_10024130 + iVar21) * 4);
    uVar19 = iVar12 - iVar21;
    uVar20 = uVar19 & 0xfffffffc;
    iVar4 = DAT_100242f8 + iVar17 * DAT_10024130 * 4;
    iVar5 = DAT_10024130 * 4;
    uVar1 = CONCAT44(param_5,param_5) | 0xff000000ff000000;
    iVar8 = iVar17;
    do {
      puVar6 = puVar18;
      iVar16 = iVar21;
      uVar14 = uVar20;
      if (uVar19 < 4) {
LAB_10012ae0:
        iVar7 = iVar12 - iVar16;
        puVar10 = (uint *)(iVar4 + iVar16 * 4);
        do {
          *puVar10 = param_5 | 0xff000000;
          iVar7 = iVar7 + -1;
          puVar10 = puVar10 + 1;
        } while (iVar7 != 0);
      }
      else {
        do {
          *puVar6 = uVar1;
          puVar6[1] = uVar1;
          puVar6 = puVar6 + 2;
          uVar14 = uVar14 - 4;
        } while (uVar14 != 0);
        iVar16 = iVar21 + uVar20;
        if (uVar19 != uVar20) goto LAB_10012ae0;
      }
      iVar8 = iVar8 + 1;
      iVar4 = iVar4 + iVar5;
      puVar18 = (ulonglong *)((int)puVar18 + iVar5);
    } while (iVar8 != iVar15);
  }
  iVar5 = param_4 + param_2;
  iVar15 = iVar5 + -1;
  if (iVar9 <= iVar5 + -1) {
    iVar15 = iVar9;
  }
  if (iVar5 < 1) {
    iVar15 = 0;
  }
  if (iVar5 < iVar9) {
    iVar9 = iVar5;
  }
  if (iVar5 < 0) {
    iVar9 = 0;
  }
  if (bVar3 && iVar15 < iVar9) {
    puVar18 = (ulonglong *)(iVar13 + (iVar15 * iVar2 + iVar21) * 4);
    uVar19 = iVar12 - iVar21;
    uVar20 = uVar19 & 0xfffffffc;
    iVar5 = iVar13 + iVar15 * iVar2 * 4;
    uVar1 = CONCAT44(param_5,param_5) | 0xff000000ff000000;
    do {
      uVar14 = uVar20;
      puVar6 = puVar18;
      iVar8 = iVar21;
      if (uVar19 < 4) {
LAB_10012bd0:
        iVar4 = iVar12 - iVar8;
        puVar10 = (uint *)(iVar5 + iVar8 * 4);
        do {
          *puVar10 = param_5 | 0xff000000;
          iVar4 = iVar4 + -1;
          puVar10 = puVar10 + 1;
        } while (iVar4 != 0);
      }
      else {
        do {
          *puVar6 = uVar1;
          puVar6[1] = uVar1;
          puVar6 = puVar6 + 2;
          uVar14 = uVar14 - 4;
        } while (uVar14 != 0);
        iVar8 = iVar21 + uVar20;
        if (uVar19 != uVar20) goto LAB_10012bd0;
      }
      iVar15 = iVar15 + 1;
      iVar5 = iVar5 + iVar2 * 4;
      puVar18 = (ulonglong *)((int)puVar18 + iVar2 * 4);
    } while (iVar15 != iVar9);
  }
  iVar15 = param_1 + 1;
  if (iVar2 <= param_1 + 1) {
    iVar15 = iVar2;
  }
  if (param_1 < -1) {
    iVar15 = 0;
  }
  if (((iVar13 != 0) && (iVar21 < iVar15)) && (iVar17 < iVar9)) {
    puVar18 = (ulonglong *)(iVar13 + (iVar17 * iVar2 + iVar21) * 4);
    uVar20 = iVar15 - iVar21;
    iVar8 = iVar13 + iVar17 * iVar2 * 4;
    uVar19 = uVar20 & 0xfffffffc;
    uVar1 = CONCAT44(param_5,param_5) | 0xff000000ff000000;
    iVar5 = iVar17;
    do {
      puVar6 = puVar18;
      uVar14 = uVar19;
      iVar4 = iVar21;
      if (uVar20 < 4) {
LAB_10012cb8:
        iVar16 = iVar15 - iVar4;
        puVar10 = (uint *)(iVar8 + iVar4 * 4);
        do {
          *puVar10 = param_5 | 0xff000000;
          iVar16 = iVar16 + -1;
          puVar10 = puVar10 + 1;
        } while (iVar16 != 0);
      }
      else {
        do {
          *puVar6 = uVar1;
          puVar6[1] = uVar1;
          puVar6 = puVar6 + 2;
          uVar14 = uVar14 - 4;
        } while (uVar14 != 0);
        iVar4 = iVar21 + uVar19;
        if (uVar20 != uVar19) goto LAB_10012cb8;
      }
      iVar5 = iVar5 + 1;
      iVar8 = iVar8 + iVar2 * 4;
      puVar18 = (ulonglong *)((int)puVar18 + iVar2 * 4);
    } while (iVar5 != iVar9);
  }
  iVar21 = iVar11 + -1;
  if (iVar2 <= iVar11 + -1) {
    iVar21 = iVar2;
  }
  if (iVar11 < 1) {
    iVar21 = 0;
  }
  if (((iVar13 != 0) && (iVar21 < iVar12)) && (iVar17 < iVar9)) {
    puVar18 = (ulonglong *)(iVar13 + (iVar17 * iVar2 + iVar21) * 4);
    uVar19 = iVar12 - iVar21;
    uVar20 = uVar19 & 0xfffffffc;
    iVar13 = iVar13 + iVar17 * iVar2 * 4;
    uVar1 = CONCAT44(param_5,param_5) | 0xff000000ff000000;
    do {
      uVar14 = uVar20;
      puVar6 = puVar18;
      iVar11 = iVar21;
      if (uVar19 < 4) {
LAB_10012d94:
        iVar15 = iVar12 - iVar11;
        puVar10 = (uint *)(iVar13 + iVar11 * 4);
        do {
          *puVar10 = param_5 | 0xff000000;
          iVar15 = iVar15 + -1;
          puVar10 = puVar10 + 1;
        } while (iVar15 != 0);
      }
      else {
        do {
          *puVar6 = uVar1;
          puVar6[1] = uVar1;
          puVar6 = puVar6 + 2;
          uVar14 = uVar14 - 4;
        } while (uVar14 != 0);
        iVar11 = iVar21 + uVar20;
        if (uVar19 != uVar20) goto LAB_10012d94;
      }
      iVar17 = iVar17 + 1;
      iVar13 = iVar13 + iVar2 * 4;
      puVar18 = (ulonglong *)((int)puVar18 + iVar2 * 4);
    } while (iVar17 != iVar9);
  }
  return;
}

#undef DAT_10024130
#undef DAT_10024134
#undef DAT_100242f8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10012dc0
 */

void recovered_10012dc0(int param_1,int param_2,int param_3,byte *param_4,uint param_5)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  byte *unaff_r4;
  uint uVar2;

  uVar1 = param_3 / 6 + (param_3 >> 0x1f);
  uVar2 = uVar1 - (param_3 >> 0x1f);
  if ((int)uVar2 < 2) {
    uVar2 = 1;
  }
  if (param_4 != (byte *)0x0) {
    uVar1 = (uint)*param_4;
    unaff_r4 = param_4;
  }
  if (param_4 != (byte *)0x0 && uVar1 != 0) {
    uVar1 = param_5 & 0xffffff;
    recovered_100125d8(param_1,param_2,(char *)unaff_r4,uVar2,uVar1,1);
    if (unaff_r4[uVar2] != 0) {
      recovered_100125d8(param_1,param_2 + 10,(char *)(unaff_r4 + uVar2),uVar2,uVar1,1);
      if (unaff_r4[uVar2 * 2] != 0) {
        recovered_100125d8(param_1,param_2 + 0x14,(char *)(unaff_r4 + uVar2 * 2),uVar2,uVar1,1);
      }
    }
  }
  return;
}


#undef DAT_10024130
#define DAT_10024130 (*(int *)(((uintptr_t)pf_module_state + 0xb28U)))
#undef DAT_10024134
#define DAT_10024134 (*(int *)(((uintptr_t)pf_module_state + 0xb2cU)))
#undef DAT_100242f8
#define DAT_100242f8 (*(int *)(((uintptr_t)pf_module_state + 0xcf0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10012e84
 */

void recovered_10012e84(int param_1,int param_2,int param_3,int param_4,uint param_5,int param_6)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ushort uVar1;
  ushort uVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong *puVar5;
  int iVar6;
  uint uVar7;
  uint *puVar8;
  int iVar9;
  ulonglong *puVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  byte *pbVar18;

  iVar3 = DAT_10024130;
  iVar12 = param_4 + param_2;
  iVar9 = param_3 + param_1;
  iVar13 = DAT_10024134;
  if (iVar12 < DAT_10024134) {
    iVar13 = iVar12;
  }
  if (iVar12 < 0) {
    iVar13 = 0;
  }
  iVar12 = DAT_10024130;
  if (iVar9 < DAT_10024130) {
    iVar12 = iVar9;
  }
  if (iVar9 < 0) {
    iVar12 = 0;
  }
  iVar9 = DAT_10024134;
  if (param_2 < DAT_10024134) {
    iVar9 = param_2;
  }
  if (param_2 < 0) {
    iVar9 = 0;
  }
  iVar6 = DAT_10024130;
  if (param_1 < DAT_10024130) {
    iVar6 = param_1;
  }
  if (param_1 < 0) {
    iVar6 = 0;
  }
  if (param_6 == 0xff) {
    if (((DAT_100242f8 != 0) && (iVar6 < iVar12)) && (iVar9 < iVar13)) {
      uVar4 = CONCAT44(param_5,param_5) | 0xff000000ff000000;
      uVar17 = iVar12 - iVar6;
      uVar15 = uVar17 & 0xfffffffc;
      iVar3 = DAT_10024130 * 4;
      puVar5 = (ulonglong *)(DAT_100242f8 + (iVar9 * DAT_10024130 + iVar6) * 4);
      iVar14 = DAT_100242f8 + iVar9 * DAT_10024130 * 4;
      do {
        uVar7 = uVar15;
        puVar10 = puVar5;
        iVar16 = iVar6;
        if (uVar17 < 4) {
LAB_10012fdc:
          iVar11 = iVar12 - iVar16;
          puVar8 = (uint *)(iVar14 + iVar16 * 4);
          do {
            *puVar8 = param_5 | 0xff000000;
            iVar11 = iVar11 + -1;
            puVar8 = puVar8 + 1;
          } while (iVar11 != 0);
        }
        else {
          do {
            *puVar10 = uVar4;
            puVar10[1] = uVar4;
            puVar10 = puVar10 + 2;
            uVar7 = uVar7 - 4;
          } while (uVar7 != 0);
          iVar16 = iVar6 + uVar15;
          if (uVar17 != uVar15) goto LAB_10012fdc;
        }
        iVar9 = iVar9 + 1;
        iVar14 = iVar14 + iVar3;
        puVar5 = (ulonglong *)((int)puVar5 + iVar3);
      } while (iVar9 != iVar13);
    }
  }
  else if (((param_6 != 0 && DAT_100242f8 != 0) && (iVar6 < iVar12)) && (iVar9 < iVar13)) {
    uVar2 = (ushort)param_6;
    uVar1 = uVar2 ^ 0xff;
    do {
      pbVar18 = (byte *)(DAT_100242f8 + (iVar9 * iVar3 + iVar6) * 4);
      iVar14 = iVar12 - iVar6;
      do {
        if (param_6 != 0 && pbVar18 != (byte *)0x0) {
          *pbVar18 = (byte)((ulonglong)
                            (uint)((int)(short)uVar1 * (int)(short)(ushort)*pbVar18 +
                                  (int)(short)(param_5 & 0xff00ff) * (int)(short)uVar2 + 0x7f) *
                            0x1010102 >> 0x20);
          pbVar18[3] = 0xff;
          pbVar18[1] = (byte)((ulonglong)
                              (uint)((int)(short)uVar1 * (int)(short)(ushort)pbVar18[1] +
                                    (int)(short)((ushort)(param_5 >> 8) & 0xff) * (int)(short)uVar2
                                    + 0x7f) * 0x1010102 >> 0x20);
          pbVar18[2] = (byte)((ulonglong)
                              (uint)((int)(short)uVar1 * (int)(short)(ushort)pbVar18[2] +
                                    (int)(short)((param_5 & 0xff00ff) >> 0x10) * (int)(short)uVar2 +
                                    0x7f) * 0x1010102 >> 0x20);
        }
        iVar14 = iVar14 + -1;
        pbVar18 = pbVar18 + 4;
      } while (iVar14 != 0);
      iVar9 = iVar9 + 1;
    } while (iVar9 != iVar13);
  }
  return;
}

#undef DAT_10024130
#undef DAT_10024134
#undef DAT_100242f8

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
#undef UINT_400108c8
#define UINT_400108c8 (*(uint *)(0x400108c8U))
#define local_14 (*(byte *)(frame + 28))
#define auStack_1c (*(undefined1 (*)[8])(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100130e8
 */

uint recovered_100130e8(byte *param_1,uint param_2)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  int iVar1;
  code *pcVar2;
  uint uVar3;
  byte *unaff_r5;
  bool bVar4;
  bool bVar5;

  bVar4 = param_1 == (byte *)0x0;
  if (!bVar4) {
    unaff_r5 = param_1;
  }
  uVar3 = 1;
  if (!bVar4) {
    unaff_r5 = unaff_r5 + 0x29;
    param_2 = (uint)*unaff_r5;
  }
  if (bVar4 || param_2 == 0) goto LAB_10013190;
  memset(auStack_1c,0,0xc);
  iVar1 = Ram40010800;
  if ((iVar1 == 0x50414d57) && (iVar1 = Ram40010804, iVar1 != 0)) {
    uVar3 = Ram40010808;
    bVar5 = 0xb < uVar3;
    bVar4 = uVar3 == 0xc;
    if (bVar5) {
      uVar3 = Ram40010808;
      bVar4 = uVar3 == 0xcb;
    }
    if ((!bVar5 || uVar3 < 0xcb) || bVar4) goto LAB_10013160;
    pcVar2 = (code *)UINT_400108c8;
    if (pcVar2 != (code *)0x0) {
      uVar3 = (*pcVar2)(*(int *)(param_1 + 0x11c),(char *)unaff_r5,auStack_1c);
LAB_100131d0:
      if (uVar3 != 0) {
        uVar3 = (local_14 & 3) >> 1;
        goto LAB_10013190;
      }
    }
  }
  else {
LAB_10013160:
    iVar1 = Ram40010800;
    if ((iVar1 == 0x50414d57) && (iVar1 = Ram40010804, iVar1 != 0)) {
      uVar3 = Ram40010808;
      bVar4 = 0xb < uVar3;
      if (bVar4) {
        uVar3 = Ram40010808;
      }
      if ((bVar4 && 0x37 < uVar3) && (pcVar2 = (code *)UINT_40010834, pcVar2 != (code *)0x0)) {
        uVar3 = (*pcVar2)((char *)unaff_r5,auStack_1c);
        goto LAB_100131d0;
      }
    }
  }
  uVar3 = (uint)param_1[0x120];
LAB_10013190:
  return uVar3 & 1;
}

#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef Ram40010800
#undef Ram40010804
#undef Ram40010808
#undef UINT_40010834
#undef UINT_400108c8
#undef local_14
#undef auStack_1c

#undef DAT_10023774
#define DAT_10023774 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x16cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100131e4
 */

bool recovered_100131e4(byte *param_1,byte *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  uint uVar4;
  byte bVar5;
  byte *pbVar6;
  byte *pbVar7;

  pbVar6 = (byte *)0x0;
  if (param_1 == (byte *)0x0) {
    pbVar3 = (byte *)0x0;
    param_1 = &DAT_10023774;
  }
  else {
    pbVar3 = (byte *)0x0;
    if (*param_1 != 0) {
      pbVar7 = param_1;
      bVar5 = *param_1;
      do {
        bVar1 = pbVar7[1];
        if (bVar5 == 0x2f) {
          pbVar3 = pbVar7;
        }
        pbVar7 = pbVar7 + 1;
        bVar5 = bVar1;
      } while (bVar1 != 0);
    }
  }
  if (pbVar3 != (byte *)0x0) {
    param_1 = pbVar3 + 1;
  }
  if (*param_1 != 0) {
    pbVar6 = (byte *)0x0;
    bVar5 = *param_1;
    do {
      bVar1 = param_1[1];
      if (bVar5 == 0x2e) {
        pbVar6 = param_1;
      }
      param_1 = param_1 + 1;
      bVar5 = bVar1;
    } while (bVar1 != 0);
  }
  if (param_2 != (byte *)0x0) {
    pbVar3 = &DAT_10023774;
    if (pbVar6 != (byte *)0x0) {
      pbVar3 = pbVar6;
    }
    do {
      uVar4 = (uint)*pbVar3;
      uVar2 = (uint)*param_2;
      if (uVar4 == 0 || uVar2 == 0) {
        return uVar4 == uVar2;
      }
      param_2 = param_2 + 1;
      if (uVar2 - 0x41 < 0x1a) {
        uVar2 = uVar2 | 0x20;
      }
      if (uVar4 - 0x41 < 0x1a) {
        uVar4 = uVar4 | 0x20;
      }
      pbVar3 = pbVar3 + 1;
    } while (uVar4 == uVar2);
  }
  return false;
}

#undef DAT_10023774

#undef DAT_100239cc
#define DAT_100239cc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3c4U)))
#undef DAT_100239cd
#define DAT_100239cd (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3c5U)))
#undef DAT_100239ce
#define DAT_100239ce (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3c6U)))
#undef DAT_100239cf
#define DAT_100239cf (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3c7U)))
#undef DAT_100239d1
#define DAT_100239d1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3c9U)))
#undef DAT_100239d2
#define DAT_100239d2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3caU)))
#undef DAT_100239d3
#define DAT_100239d3 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3cbU)))
#undef DAT_100242e0
#define DAT_100242e0 (*(int *)(((uintptr_t)pf_module_state + 0xcd8U)))
#undef DAT_10024308
#define DAT_10024308 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xd00U)))
#undef DAT_10024310
#define DAT_10024310 (*(int *)(((uintptr_t)pf_module_state + 0xd08U)))
#undef DAT_1002762c
#define DAT_1002762c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4024U)))
#undef DAT_1002762d
#define DAT_1002762d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4025U)))
#undef DAT_10027720
#define DAT_10027720 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4118U)))
#undef DAT_10027724
#define DAT_10027724 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x411cU)))
#undef DAT_10027728
#define DAT_10027728 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4120U)))
#undef DAT_1002773c
#define DAT_1002773c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4134U)))
#undef DAT_1002784c
#define DAT_1002784c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4244U)))
#undef DAT_1002795c
#define DAT_1002795c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4354U)))
#undef DAT_10027a6c
#define DAT_10027a6c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4464U)))
#undef DAT_10027b7c
#define DAT_10027b7c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4574U)))
#undef DAT_10027c8c
#define DAT_10027c8c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4684U)))
#undef DAT_10027d9c
#define DAT_10027d9c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4794U)))
#undef DAT_10027eac
#define DAT_10027eac (*(uint8_t *)(((uintptr_t)pf_module_state + 0x48a4U)))
#undef DAT_10027fbc
#define DAT_10027fbc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x49b4U)))
#undef DAT_100280cc
#define DAT_100280cc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4ac4U)))
#undef DAT_100281dc
#define DAT_100281dc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4bd4U)))
#undef DAT_100282ec
#define DAT_100282ec (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4ce4U)))
#undef DAT_100283fc
#define DAT_100283fc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4df4U)))
#undef DAT_1002850c
#define DAT_1002850c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4f04U)))
#undef DAT_1002861c
#define DAT_1002861c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5014U)))
#undef DAT_1002872c
#define DAT_1002872c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5124U)))
#undef DAT_1002883c
#define DAT_1002883c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5234U)))
#undef DAT_1002894c
#define DAT_1002894c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5344U)))
#undef DAT_10028a5c
#define DAT_10028a5c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5454U)))
#undef DAT_10028b6c
#define DAT_10028b6c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5564U)))
#undef DAT_10028c7c
#define DAT_10028c7c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5674U)))
#undef DAT_10028d8c
#define DAT_10028d8c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5784U)))
#undef DAT_10028e9c
#define DAT_10028e9c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5894U)))
#undef DAT_100290e0
#define DAT_100290e0 (*(uint *)(((uintptr_t)pf_module_state + 0x5ad8U)))
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
#undef UINT_40010858
#define UINT_40010858 (*(uint *)(0x40010858U))
#undef UINT_400108e0
#define UINT_400108e0 (*(uint *)(0x400108e0U))
#undef str_10023999
#define str_10023999 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x391U)))
#undef str_100239b8
#define str_100239b8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3b0U)))
#undef str_100239d4
#define str_100239d4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3ccU)))
#define local_401c (*(uint *)(frame + 20))
#define local_4018 (*(byte (*)[492])(frame + 24))
#define local_3e2c (*(int (*)[3909])(frame + 516))
#define acStack_115 (*(char (*)[245])(frame + 16155))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100132e8
 */

int * recovered_100132e8(byte *param_1,uint param_2)

{
  unsigned char frame[16464] __attribute__((aligned(16))) = {0};

  code *pcVar1;
  int iVar2;
  int *piVar3;
  byte *path;
  uint uVar4;
  uint uVar5;
  uint extraout_r1 = 0;
  byte *pbVar6;
  uint uVar7;
  byte bVar8;
  uint uVar9;
  char *pcVar10;
  undefined1 *puVar11;
  int iVar12;
  uint uVar13;
  uint unaff_r8;
  byte *pbVar14;
  byte *pbVar15;
  bool bVar16;
  bool bVar17;

  uVar5 = param_2;
  if (param_1 != (byte *)0x0) {
    uVar5 = (uint)*param_1;
    unaff_r8 = param_2;
  }
  local_401c = 0;
  if (param_1 == (byte *)0x0 || uVar5 == 0) {
    return (int *)0x0;
  }
  iVar12 = 0;
  puVar11 = &DAT_1002762c;
  do {
    if ((((&DAT_1002762c)[iVar12] == '\x01') && (*(uint *)((int)&DAT_10027720 + iVar12) == unaff_r8)
        ) && (iVar2 = strcmp(&DAT_1002762d + iVar12,(char *)param_1), iVar2 == 0)) {
      if ((*(int *)((int)&DAT_10027728 + iVar12) == 0) &&
         (*(int *)((int)&DAT_10027724 + iVar12) != 0)) {
        return (int *)((int)&DAT_10027724 + iVar12);
      }
      goto LAB_100133a0;
    }
    iVar12 = iVar12 + 0x110;
  } while (iVar12 != 0x1980);
  if (DAT_100242e0 == DAT_10024310) {
    if (1 < DAT_100290e0) {
      DAT_10024308 = 1;
      return (int *)0x0;
    }
  }
  else {
    DAT_100242e0 = DAT_10024310;
    DAT_100290e0 = 0;
  }
  DAT_100290e0 = DAT_100290e0 + 1;
  if (((((((DAT_1002762c == '\x01') && (puVar11 = &DAT_1002773c, DAT_1002773c == '\x01')) &&
         ((puVar11 = &DAT_1002784c, DAT_1002784c == '\x01' &&
          ((((puVar11 = &DAT_1002795c, DAT_1002795c == '\x01' &&
             (puVar11 = &DAT_10027a6c, DAT_10027a6c == '\x01')) &&
            (puVar11 = &DAT_10027b7c, DAT_10027b7c == '\x01')) &&
           ((puVar11 = &DAT_10027c8c, DAT_10027c8c == '\x01' &&
            (puVar11 = &DAT_10027d9c, DAT_10027d9c == '\x01')))))))) &&
        (puVar11 = &DAT_10027eac, DAT_10027eac == '\x01')) &&
       ((puVar11 = &DAT_10027fbc, DAT_10027fbc == '\x01' &&
        (puVar11 = &DAT_100280cc, DAT_100280cc == '\x01')))) &&
      (((puVar11 = &DAT_100281dc, DAT_100281dc == '\x01' &&
        (((puVar11 = &DAT_100282ec, DAT_100282ec == '\x01' &&
          (puVar11 = &DAT_100283fc, DAT_100283fc == '\x01')) &&
         (puVar11 = &DAT_1002850c, DAT_1002850c == '\x01')))) &&
       (((puVar11 = &DAT_1002861c, DAT_1002861c == '\x01' &&
         (puVar11 = &DAT_1002872c, DAT_1002872c == '\x01')) &&
        (puVar11 = &DAT_1002883c, DAT_1002883c == '\x01')))))) &&
     (((puVar11 = &DAT_1002894c, DAT_1002894c == '\x01' &&
       (puVar11 = &DAT_10028a5c, DAT_10028a5c == '\x01')) &&
      ((puVar11 = &DAT_10028b6c, DAT_10028b6c == '\x01' &&
       (((puVar11 = &DAT_10028c7c, DAT_10028c7c == '\x01' &&
         (puVar11 = &DAT_10028d8c, DAT_10028d8c == '\x01')) &&
        (puVar11 = &DAT_10028e9c, DAT_10028e9c == '\x01')))))))) {
LAB_100133a0:
    uVar5 = recovered_10005d20();
    piVar3 = recovered_10011f28((byte *)str_100239d4,uVar5);
    return piVar3;
  }
  *(uint *)(puVar11 + 0xf4) = unaff_r8;
  *puVar11 = 1;
  bVar8 = *param_1;
  uVar13 = 0;
  uVar5 = 1;
  if (bVar8 != 0) {
    do {
      uVar13 = uVar5;
      puVar11[uVar13] = bVar8;
      if (0xef < uVar13) break;
      bVar8 = param_1[uVar13];
      uVar5 = uVar13 + 1;
    } while (bVar8 != 0);
  }
  puVar11[uVar13 + 1] = 0;
  recovered_10013e2c(param_1,str_10023999,acStack_115);
  piVar3 = (int *)(puVar11 + 0xf8);
  iVar12 = Ram40010800;
  if ((iVar12 == 0x50414d57) && (iVar12 = Ram40010804, iVar12 != 0)) {
    uVar5 = Ram40010808;
    bVar17 = 0xb < uVar5;
    bVar16 = uVar5 == 0xc;
    if (bVar17) {
      uVar5 = Ram40010808;
      bVar16 = uVar5 == 0xe3;
    }
    if ((!bVar17 || uVar5 < 0xe3) || bVar16) goto LAB_1001368c;
    pcVar1 = (code *)UINT_400108e0;
    if (pcVar1 == (code *)0x0) goto LAB_100136b8;
    uVar5 = (*pcVar1)(unaff_r8,acStack_115,piVar3);
  }
  else {
LAB_1001368c:
    iVar12 = Ram40010800;
    if ((iVar12 != 0x50414d57) || (iVar12 = Ram40010804, iVar12 == 0)) goto LAB_100136b8;
    uVar5 = Ram40010808;
    bVar16 = 0xb < uVar5;
    if (bVar16) {
      uVar5 = Ram40010808;
    }
    if ((!bVar16 || uVar5 < 0x5c) || (pcVar1 = (code *)UINT_40010858, pcVar1 == (code *)0x0))
    goto LAB_100136b8;
    uVar5 = (*pcVar1)(acStack_115,piVar3);
  }
  if (uVar5 != 0) {
    return piVar3;
  }
LAB_100136b8:
  recovered_1000cae0(piVar3);
  recovered_10013e2c(param_1,str_100239b8,acStack_115);
  uVar13 = recovered_1000f810(unaff_r8,acStack_115,local_4018,0x20,&local_401c);
  uVar5 = extraout_r1;
  if (uVar13 != 0) {
    uVar5 = local_401c;
  }
  if (uVar13 == 0 || uVar5 == 0) {
LAB_10013714:
    uVar5 = recovered_10005d20();
    piVar3 = recovered_10011f28((byte *)str_100239d4,uVar5);
    return piVar3;
  }
  pbVar14 = (byte *)((uint)local_4018 | 1);
  pbVar15 = (byte *)((uint)local_4018 | 2);
  uVar13 = 0;
LAB_10013760:
  iVar12 = uVar13 * 0x1f8;
  if ((local_3e2c[uVar13 * 0x7e] != 2) && ((local_4018[iVar12 + 0x1e8] & 2) == 0)) {
    path = local_4018 + iVar12 + 0xf1;
    bVar16 = recovered_10013aec(path);
    if (bVar16) {
      uVar4 = (uint)local_4018[iVar12];
      pbVar6 = pbVar15;
      uVar9 = uVar4;
      if (uVar4 != 0) {
        do {
          uVar7 = (uint)pbVar6[-1];
          if (uVar9 - 0x41 < 0x1a) {
            uVar9 = uVar9 | 0x20;
          }
          if (uVar9 == 0x69) {
            if (uVar7 == 0) {
              pcVar10 = &DAT_100239cc;
            }
            else {
              uVar9 = uVar7;
              if (uVar7 - 0x41 < 0x1a) {
                uVar9 = uVar7 | 0x20;
              }
              if (uVar9 != 99) goto LAB_100137d0;
              uVar9 = (uint)*pbVar6;
              if (uVar9 == 0) {
                pcVar10 = &DAT_100239cd;
              }
              else {
                if (uVar9 - 0x41 < 0x1a) {
                  uVar9 = uVar9 | 0x20;
                }
                if (uVar9 != 0x6f) goto LAB_100137d0;
                uVar9 = (uint)pbVar6[1];
                if (uVar9 == 0) {
                  pcVar10 = &DAT_100239ce;
                }
                else {
                  if (uVar9 - 0x41 < 0x1a) {
                    uVar9 = uVar9 | 0x20;
                  }
                  if (uVar9 != 0x6e) goto LAB_100137d0;
                  if (pbVar6[2] != 0) goto LAB_1001393c;
                  pcVar10 = &DAT_100239cf;
                }
              }
            }
            if (*pcVar10 == '\0') goto LAB_1001393c;
          }
LAB_100137d0:
          pbVar6 = pbVar6 + 1;
          uVar9 = uVar7;
        } while (uVar7 != 0);
        pbVar6 = pbVar14;
        do {
          uVar9 = (uint)*pbVar6;
          if (uVar4 - 0x41 < 0x1a) {
            uVar4 = uVar4 | 0x20;
          }
          if (uVar4 == 0x61) {
            if (uVar9 == 0) {
              pcVar10 = &DAT_100239d1;
            }
            else {
              uVar4 = uVar9;
              if (uVar9 - 0x41 < 0x1a) {
                uVar4 = uVar9 | 0x20;
              }
              if (uVar4 != 0x70) goto LAB_100138a0;
              uVar4 = (uint)pbVar6[1];
              if (uVar4 == 0) {
                pcVar10 = &DAT_100239d2;
              }
              else {
                if (uVar4 - 0x41 < 0x1a) {
                  uVar4 = uVar4 | 0x20;
                }
                if (uVar4 != 0x70) goto LAB_100138a0;
                if (pbVar6[2] != 0) goto LAB_1001393c;
                pcVar10 = &DAT_100239d3;
              }
            }
            if (*pcVar10 == '\0') goto LAB_1001393c;
          }
LAB_100138a0:
          pbVar6 = pbVar6 + 1;
          uVar4 = uVar9;
        } while (uVar9 != 0);
      }
    }
  }
  goto LAB_10013748;
LAB_1001393c:
  iVar12 = Ram40010800;
  if ((iVar12 == 0x50414d57) && (iVar12 = Ram40010804, iVar12 != 0)) {
    uVar5 = Ram40010808;
    bVar17 = 0xb < uVar5;
    bVar16 = uVar5 == 0xc;
    if (bVar17) {
      uVar5 = Ram40010808;
      bVar16 = uVar5 == 0xe3;
    }
    if ((!bVar17 || uVar5 < 0xe3) || bVar16) goto LAB_10013978;
    pcVar1 = (code *)UINT_400108e0;
    if (pcVar1 == (code *)0x0) goto LAB_100139e8;
    uVar5 = (*pcVar1)(unaff_r8,(char *)path,piVar3);
  }
  else {
LAB_10013978:
    iVar12 = Ram40010800;
    if ((iVar12 != 0x50414d57) || (iVar12 = Ram40010804, iVar12 == 0)) goto LAB_100139e8;
    uVar5 = Ram40010808;
    bVar16 = uVar5 < 0xc;
    if (!bVar16) {
      uVar5 = Ram40010808;
    }
    if ((bVar16 || uVar5 < 0x5c) || (pcVar1 = (code *)UINT_40010858, pcVar1 == (code *)0x0))
    goto LAB_100139e8;
    uVar5 = (*pcVar1)((char *)path,piVar3);
  }
  if (uVar5 != 0) {
    return piVar3;
  }
LAB_100139e8:
  if (((((*(int *)(puVar11 + 0xfc) == 0) && (*(void **)(puVar11 + 0xf8) != (void *)0x0)) &&
       (iVar12 = Ram40010800, iVar12 == 0x50414d57)) &&
      ((iVar12 = Ram40010804, iVar12 != 0 && (uVar5 = Ram40010808, 0xb < uVar5)))) &&
     ((uVar5 = Ram40010808, 0x53 < uVar5 && (pcVar1 = (code *)UINT_40010850, pcVar1 != (code *)0x0))
     )) {
    (*pcVar1)(*(void **)(puVar11 + 0xf8));
  }
  memset(piVar3,0,0x18);
  uVar5 = local_401c;
LAB_10013748:
  bVar16 = 0x1d < uVar13;
  if (uVar13 < 0x1f) {
    pbVar14 = pbVar14 + 0x1f8;
    pbVar15 = pbVar15 + 0x1f8;
    uVar13 = uVar13 + 1;
    bVar16 = uVar5 <= uVar13;
  }
  if (bVar16) goto LAB_10013714;
  goto LAB_10013760;
}

#undef DAT_100239cc
#undef DAT_100239cd
#undef DAT_100239ce
#undef DAT_100239cf
#undef DAT_100239d1
#undef DAT_100239d2
#undef DAT_100239d3
#undef DAT_100242e0
#undef DAT_10024308
#undef DAT_10024310
#undef DAT_1002762c
#undef DAT_1002762d
#undef DAT_10027720
#undef DAT_10027724
#undef DAT_10027728
#undef DAT_1002773c
#undef DAT_1002784c
#undef DAT_1002795c
#undef DAT_10027a6c
#undef DAT_10027b7c
#undef DAT_10027c8c
#undef DAT_10027d9c
#undef DAT_10027eac
#undef DAT_10027fbc
#undef DAT_100280cc
#undef DAT_100281dc
#undef DAT_100282ec
#undef DAT_100283fc
#undef DAT_1002850c
#undef DAT_1002861c
#undef DAT_1002872c
#undef DAT_1002883c
#undef DAT_1002894c
#undef DAT_10028a5c
#undef DAT_10028b6c
#undef DAT_10028c7c
#undef DAT_10028d8c
#undef DAT_10028e9c
#undef DAT_100290e0
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef Ram40010800
#undef Ram40010804
#undef Ram40010808
#undef UINT_40010850
#undef UINT_40010858
#undef UINT_400108e0
#undef str_10023999
#undef str_100239b8
#undef str_100239d4
#undef local_401c
#undef local_4018
#undef local_3e2c
#undef acStack_115

#undef DAT_10023774
#define DAT_10023774 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x16cU)))
#undef DAT_10024064
#define DAT_10024064 (*(uint32_t *)(((uintptr_t)pf_module_state + 0xa5cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10013aec
 */

bool recovered_10013aec(byte *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte bVar6;
  uint uVar7;
  byte *pbVar8;
  int iVar9;

  iVar9 = 0;
  do {
    pbVar4 = (byte *)0x0;
    pbVar5 = (byte *)(&DAT_10024064)[iVar9 * 3];
    pbVar2 = &DAT_10023774;
    if (param_1 != (byte *)0x0) {
      pbVar2 = param_1;
      if (*param_1 != 0) {
        pbVar8 = param_1;
        bVar6 = *param_1;
        do {
          bVar1 = pbVar8[1];
          if (bVar6 == 0x2f) {
            pbVar4 = pbVar8;
          }
          pbVar8 = pbVar8 + 1;
          bVar6 = bVar1;
        } while (bVar1 != 0);
      }
    }
    if (pbVar4 != (byte *)0x0) {
      pbVar2 = pbVar4 + 1;
    }
    pbVar4 = (byte *)0x0;
    if (*pbVar2 != 0) {
      bVar6 = *pbVar2;
      do {
        bVar1 = pbVar2[1];
        if (bVar6 == 0x2e) {
          pbVar4 = pbVar2;
        }
        pbVar2 = pbVar2 + 1;
        bVar6 = bVar1;
      } while (bVar1 != 0);
    }
    if (pbVar4 == (byte *)0x0) {
      pbVar4 = &DAT_10023774;
    }
    do {
      uVar7 = (uint)*pbVar4;
      uVar3 = (uint)*pbVar5;
      if (uVar7 == 0 || uVar3 == 0) {
        if (uVar7 == uVar3) {
          return true;
        }
        break;
      }
      pbVar5 = pbVar5 + 1;
      if (uVar3 - 0x41 < 0x1a) {
        uVar3 = uVar3 | 0x20;
      }
      if (uVar7 - 0x41 < 0x1a) {
        uVar7 = uVar7 | 0x20;
      }
      pbVar4 = pbVar4 + 1;
    } while (uVar7 == uVar3);
    iVar9 = iVar9 + 1;
    if (iVar9 == 4) {
      pbVar2 = (byte *)0x0;
      if (param_1 == (byte *)0x0) {
        pbVar4 = (byte *)0x0;
        param_1 = &DAT_10023774;
      }
      else {
        pbVar4 = (byte *)0x0;
        if (*param_1 != 0) {
          pbVar5 = param_1;
          bVar6 = *param_1;
          do {
            bVar1 = pbVar5[1];
            if (bVar6 == 0x2f) {
              pbVar4 = pbVar5;
            }
            pbVar5 = pbVar5 + 1;
            bVar6 = bVar1;
          } while (bVar1 != 0);
        }
      }
      if (pbVar4 != (byte *)0x0) {
        param_1 = pbVar4 + 1;
      }
      if (*param_1 != 0) {
        pbVar2 = (byte *)0x0;
        bVar6 = *param_1;
        do {
          bVar1 = param_1[1];
          if (bVar6 == 0x2e) {
            pbVar2 = param_1;
          }
          param_1 = param_1 + 1;
          bVar6 = bVar1;
        } while (bVar1 != 0);
      }
      pbVar4 = &DAT_10023774;
      if (pbVar2 != (byte *)0x0) {
        pbVar4 = pbVar2;
      }
      uVar3 = (uint)*pbVar4;
      if (uVar3 == 0) {
        bVar1 = 0x2e;
        bVar6 = 0;
      }
      else {
        bVar1 = 0;
        if (uVar3 - 0x41 < 0x1a) {
          uVar3 = uVar3 | 0x20;
        }
        if (uVar3 != 0x2e) {
          return false;
        }
        uVar3 = (uint)pbVar4[1];
        if (uVar3 == 0) {
          bVar1 = 0x61;
          bVar6 = 0;
        }
        else {
          if (uVar3 - 0x41 < 0x1a) {
            uVar3 = uVar3 | 0x20;
          }
          if (uVar3 != 0x61) {
            return false;
          }
          uVar3 = (uint)pbVar4[2];
          if (uVar3 == 0) {
            bVar1 = 0x70;
            bVar6 = 0;
          }
          else {
            if (uVar3 - 0x41 < 0x1a) {
              uVar3 = uVar3 | 0x20;
            }
            if (uVar3 != 0x70) {
              return false;
            }
            uVar3 = (uint)pbVar4[3];
            if (uVar3 == 0) {
              bVar1 = 0x6e;
              bVar6 = 0;
            }
            else {
              if (uVar3 - 0x41 < 0x1a) {
                uVar3 = uVar3 | 0x20;
              }
              if (uVar3 != 0x6e) {
                return false;
              }
              uVar3 = (uint)pbVar4[4];
              if (uVar3 == 0) {
                bVar1 = 0x67;
                bVar6 = 0;
              }
              else {
                if (uVar3 - 0x41 < 0x1a) {
                  uVar3 = uVar3 | 0x20;
                }
                if (uVar3 != 0x67) {
                  return false;
                }
                bVar6 = pbVar4[5];
              }
            }
          }
        }
      }
      return bVar6 == bVar1;
    }
  } while( true );
}

#undef DAT_10023774
#undef DAT_10024064

#undef DAT_10023774
#define DAT_10023774 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x16cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10013d80
 */

char * recovered_10013d80(char *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  char *pcVar2;
  char *pcVar3;
  char cVar4;
  char *pcVar5;

  pcVar5 = (char *)0x0;
  if (param_1 == (char *)0x0) {
    pcVar2 = (char *)0x0;
    param_1 = &DAT_10023774;
  }
  else {
    pcVar2 = (char *)0x0;
    if (*param_1 != '\0') {
      pcVar3 = param_1;
      cVar4 = *param_1;
      do {
        cVar1 = pcVar3[1];
        if (cVar4 == '/') {
          pcVar2 = pcVar3;
        }
        pcVar3 = pcVar3 + 1;
        cVar4 = cVar1;
      } while (cVar1 != '\0');
    }
  }
  if (pcVar2 != (char *)0x0) {
    param_1 = pcVar2 + 1;
  }
  if (*param_1 != '\0') {
    pcVar5 = (char *)0x0;
    cVar4 = *param_1;
    do {
      cVar1 = param_1[1];
      if (cVar4 == '.') {
        pcVar5 = param_1;
      }
      param_1 = param_1 + 1;
      cVar4 = cVar1;
    } while (cVar1 != '\0');
  }
  pcVar2 = &DAT_10023774;
  if (pcVar5 != (char *)0x0) {
    pcVar2 = pcVar5;
  }
  return pcVar2;
}

#undef DAT_10023774

#undef DAT_10023774
#define DAT_10023774 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x16cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10013e2c
 */

void recovered_10013e2c(byte *param_1,char *param_2,char *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  char *pcVar5;
  uint uVar6;

  if (param_3 == (char *)0x0) {
    return;
  }
  pcVar5 = param_3;
  if (param_1 != (byte *)0x0) {
    pcVar5 = (char *)(uint)*param_1;
  }
  if (param_1 != (byte *)0x0 && pcVar5 != (char *)0x0) {
    uVar2 = 0;
    do {
      uVar6 = uVar2 + 1;
      param_3[uVar2] = (char)pcVar5;
      if (0xef < uVar6) break;
      pcVar5 = (char *)(uint)param_1[uVar2 + 1];
      uVar2 = uVar6;
    } while (pcVar5 != (char *)0x0);
    param_3[uVar6] = '\0';
    uVar1 = strlen(param_3);
    if (uVar1 < 0xf1) {
      iVar3 = 0xf0;
      if (uVar1 != 0xf0) {
        param_3[uVar1] = '/';
        iVar3 = uVar1 + 1;
      }
      param_3[iVar3] = '\0';
    }
    pcVar5 = &DAT_10023774;
    if (param_2 != (char *)0x0) {
      pcVar5 = param_2;
    }
    uVar1 = strlen(param_3);
    if (0xf0 < uVar1) {
      return;
    }
    if ((uVar1 == 0xf0) || (cVar4 = *pcVar5, cVar4 == '\0')) {
      uVar2 = uVar1;
    }
    else {
      do {
        pcVar5 = pcVar5 + 1;
        uVar2 = uVar1 + 1;
        param_3[uVar1] = cVar4;
        if (0xee < uVar1) break;
        cVar4 = *pcVar5;
        uVar1 = uVar2;
      } while (cVar4 != '\0');
    }
  }
  else {
    pcVar5 = &DAT_10023774;
    if (param_2 != (char *)0x0) {
      pcVar5 = param_2;
    }
    cVar4 = *pcVar5;
    if (cVar4 == '\0') {
      uVar2 = 0;
    }
    else {
      uVar6 = 0;
      do {
        uVar2 = uVar6 + 1;
        param_3[uVar6] = cVar4;
        if (0xef < uVar2) break;
        cVar4 = pcVar5[uVar6 + 1];
        uVar6 = uVar2;
      } while (cVar4 != '\0');
    }
  }
  param_3[uVar2] = '\0';
  return;
}

#undef DAT_10023774

#undef DAT_10014480
#define DAT_10014480 (*(uint8_t *)(0x10014480U))
#undef DAT_10014488
#define DAT_10014488 (*(uint8_t *)(0x10014488U))
#undef DAT_10024130
#define DAT_10024130 (*(uint *)(((uintptr_t)pf_module_state + 0xb28U)))
#undef DAT_10024134
#define DAT_10024134 (*(uint *)(((uintptr_t)pf_module_state + 0xb2cU)))
#undef DAT_100242f8
#define DAT_100242f8 (*(int *)(((uintptr_t)pf_module_state + 0xcf0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10013f70
 */

void recovered_10013f70(uint param_1,uint param_2,int param_3,int param_4,uint param_5,int param_6)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint *puVar13;
  int iVar14;
  undefined4 *puVar15;
  uint uVar16;
  int iVar17;
  undefined4 *puVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint *puVar22;
  int iVar23;
  uint uVar24;
  uint uVar25;
  int iVar26;
  bool bVar27;
  bool bVar28;

  uVar5 = DAT_10024130;
  uVar10 = param_4 + param_2;
  uVar19 = DAT_10024134;
  if ((int)uVar10 < (int)DAT_10024134) {
    uVar19 = uVar10;
  }
  uVar7 = param_3 + param_1;
  if ((int)uVar10 < 0) {
    uVar19 = 0;
  }
  uVar10 = DAT_10024130;
  if ((int)uVar7 < (int)DAT_10024130) {
    uVar10 = uVar7;
  }
  if ((int)uVar7 < 0) {
    uVar10 = 0;
  }
  uVar7 = DAT_10024134;
  if ((int)param_2 < (int)DAT_10024134) {
    uVar7 = param_2;
  }
  if ((int)param_2 < 0) {
    uVar7 = 0;
  }
  uVar25 = DAT_10024130;
  if ((int)param_1 < (int)DAT_10024130) {
    uVar25 = param_1;
  }
  if ((int)param_1 < 0) {
    uVar25 = 0;
  }
  if (((DAT_100242f8 != 0) && ((int)uVar25 < (int)uVar10)) && ((int)uVar7 < (int)uVar19)) {
    puVar22 = (uint *)(DAT_100242f8 + (uVar7 * DAT_10024130 + uVar25) * 4);
    uVar20 = uVar10 - uVar25;
    uVar24 = uVar20 & 0xfffffffc;
    iVar6 = DAT_100242f8 + uVar7 * DAT_10024130 * 4;
    iVar9 = DAT_10024130 * 4;
    do {
      puVar13 = puVar22;
      uVar16 = uVar24;
      uVar21 = uVar25;
      if (uVar20 < 4) {
LAB_100140a8:
        iVar17 = uVar10 - uVar21;
        puVar13 = (uint *)(iVar6 + uVar21 * 4);
        do {
          *puVar13 = param_5 | 0xff000000;
          iVar17 = iVar17 + -1;
          puVar13 = puVar13 + 1;
        } while (iVar17 != 0);
      }
      else {
        do {
          *puVar13 = param_5 | 0xff000000;
          puVar13[1] = param_5 | 0xff000000;
          puVar13[2] = param_5 | 0xff000000;
          puVar13[3] = param_5 | 0xff000000;
          puVar13 = puVar13 + 4;
          uVar16 = uVar16 - 4;
        } while (uVar16 != 0);
        uVar21 = uVar25 + uVar24;
        if (uVar20 != uVar24) goto LAB_100140a8;
      }
      uVar7 = uVar7 + 1;
      iVar6 = iVar6 + iVar9;
      puVar22 = puVar22 + uVar5;
    } while (uVar7 != uVar19);
  }
  recovered_1001297c(param_1,param_2,param_3,param_4,0x434343);
  uVar19 = DAT_10024134;
  uVar5 = DAT_10024130;
  iVar17 = param_2 + param_4 / 2;
  iVar9 = param_3 / 2;
  iVar6 = param_1 + iVar9;
  if (param_6 == 2) {
    iVar17 = iVar17 + -4;
    iVar9 = 8;
    iVar6 = iVar6 + -4;
    iVar12 = 8;
  }
  else {
    if (param_6 == 1) {
      uVar19 = iVar17 + 4U;
      if ((int)DAT_10024134 <= (int)(iVar17 + 4U)) {
        uVar19 = DAT_10024134;
      }
      if (iVar17 < -4) {
        uVar19 = 0;
      }
      uVar10 = iVar6 + 4U;
      if ((int)DAT_10024130 <= (int)(iVar6 + 4U)) {
        uVar10 = DAT_10024130;
      }
      if (iVar6 < -4) {
        uVar10 = 0;
      }
      uVar7 = DAT_10024134;
      if ((int)(iVar17 + 2U) < (int)DAT_10024134) {
        uVar7 = iVar17 + 2U;
      }
      if (iVar17 < -2) {
        uVar7 = 0;
      }
      uVar25 = iVar6 - 4U;
      if ((int)DAT_10024130 <= (int)(iVar6 - 4U)) {
        uVar25 = DAT_10024130;
      }
      if (iVar6 < 4) {
        uVar25 = 0;
      }
      if (DAT_100242f8 == 0) {
        return;
      }
      if ((int)uVar10 <= (int)uVar25) {
        return;
      }
      if ((int)uVar19 <= (int)uVar7) {
        return;
      }
      iVar9 = DAT_10024130 * 4;
      puVar18 = (undefined4 *)(DAT_100242f8 + (uVar7 * DAT_10024130 + uVar25) * 4);
      uVar20 = uVar10 - uVar25;
      iVar6 = DAT_100242f8 + uVar7 * DAT_10024130 * 4;
      uVar24 = uVar20 & 0xfffffffc;
      do {
        uVar16 = uVar24;
        puVar15 = puVar18;
        uVar21 = uVar25;
        if (uVar20 < 4) {
LAB_10014334:
          iVar17 = uVar10 - uVar21;
          puVar15 = (undefined4 *)(iVar6 + uVar21 * 4);
          do {
            *puVar15 = 0xff1e1e1e;
            iVar17 = iVar17 + -1;
            puVar15 = puVar15 + 1;
          } while (iVar17 != 0);
        }
        else {
          do {
            uVar4 = (0xff1e1e1eULL);
            uVar3 = (undefined4)(0x1eU);
            uVar2 = (0xff1e1e1eULL);
            uVar16 = uVar16 - 4;
            *puVar15 = (undefined4)(0x1eU);
            puVar15[1] = uVar2;
            puVar15[2] = uVar3;
            puVar15[3] = uVar4;
            puVar15 = puVar15 + 4;
          } while (uVar16 != 0);
          uVar21 = uVar25 + uVar24;
          if (uVar20 != uVar24) goto LAB_10014334;
        }
        uVar7 = uVar7 + 1;
        iVar6 = iVar6 + iVar9;
        puVar18 = puVar18 + uVar5;
        if (uVar7 == uVar19) {
          return;
        }
      } while( true );
    }
    if (param_6 == 0) {
      iVar8 = param_1 + iVar9;
      iVar6 = DAT_10024130 * 4;
      uVar10 = DAT_10024130 << 2;
      uVar7 = iVar17 - 3;
      iVar11 = (DAT_10024130 * uVar7 + iVar8) * -4;
      iVar14 = DAT_10024130 * uVar7;
      iVar12 = iVar14 * 4;
      iVar26 = iVar12 + param_1 * 4 + iVar9 * 4;
      iVar23 = 6;
      while( true ) {
        uVar25 = iVar17 - 3;
        uVar20 = iVar8 - 3;
        if (-1 < (int)(uVar20 | uVar25)) {
          bVar28 = SBORROW4(uVar5,uVar20);
          iVar1 = uVar5 - uVar20;
          bVar27 = uVar5 == uVar20;
          if ((int)uVar20 < (int)uVar5) {
            bVar28 = SBORROW4(uVar19,uVar25);
            iVar1 = uVar19 - uVar25;
            bVar27 = uVar19 == uVar25;
          }
          if ((!bVar27 && iVar1 < 0 == bVar28) && (DAT_100242f8 != 0)) {
            *(undefined1 *)(DAT_100242f8 + iVar26 + -0xc) = 0x1e;
            *(undefined1 *)((DAT_100242f8 - iVar11) + -0xb) = 0x1e;
            *(undefined1 *)((DAT_100242f8 - iVar11) + -10) = 0x1e;
            *(undefined1 *)((DAT_100242f8 - iVar11) + -9) = 0xff;
          }
        }
        if (iVar23 == 0) break;
        iVar26 = iVar26 + iVar6 + 4;
        iVar11 = iVar11 + (uVar10 ^ 0xfffffffc);
        iVar8 = iVar8 + 1;
        iVar23 = iVar23 + -1;
        iVar17 = iVar17 + 1;
      }
      iVar6 = 3;
      iVar17 = param_1 * 4 + iVar9 * 4;
      while( true ) {
        uVar10 = param_1 + iVar9 + iVar6;
        if (-1 < (int)(uVar10 | uVar7)) {
          bVar28 = SBORROW4(uVar5,uVar10);
          iVar11 = uVar5 - uVar10;
          bVar27 = uVar5 == uVar10;
          if ((int)uVar10 < (int)uVar5) {
            bVar28 = SBORROW4(uVar19,uVar7);
            iVar11 = uVar19 - uVar7;
            bVar27 = uVar19 == uVar7;
          }
          if ((!bVar27 && iVar11 < 0 == bVar28) && (DAT_100242f8 != 0)) {
            *(undefined1 *)(DAT_100242f8 + iVar14 * 4 + 0xc + iVar17) = 0x1e;
            *(undefined1 *)(DAT_100242f8 + iVar12 + iVar17 + 0xd) = 0x1e;
            *(undefined1 *)(DAT_100242f8 + iVar12 + iVar17 + 0xe) = 0x1e;
            *(undefined1 *)(DAT_100242f8 + iVar12 + iVar17 + 0xf) = 0xff;
          }
        }
        if (iVar6 == -3) break;
        iVar17 = iVar17 + uVar5 * 4 + -4;
        iVar6 = iVar6 + -1;
        uVar7 = uVar7 + 1;
      }
      return;
    }
    recovered_1001297c(iVar6 + -5,iVar17 + -4,6,6,0x1e1e1e);
    iVar6 = iVar6 + -1;
    iVar17 = iVar17 + -1;
    iVar9 = 6;
    iVar12 = 6;
  }
  recovered_1001297c(iVar6,iVar17,iVar9,iVar12,0x1e1e1e);
  return;
}

#undef DAT_10014480
#undef DAT_10014488
#undef DAT_10024130
#undef DAT_10024134
#undef DAT_100242f8

#undef DAT_100153c0
#define DAT_100153c0 (*(uint64_t *)(0x100153c0U))
#undef DAT_100153c8
#define DAT_100153c8 (*(uint64_t *)(0x100153c8U))
#undef DAT_10015950
#define DAT_10015950 (*(uint64_t *)(0x10015950U))
#undef DAT_10015958
#define DAT_10015958 (*(uint64_t *)(0x10015958U))
#undef DAT_10023a5a
#define DAT_10023a5a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x452U)))
#undef DAT_10023a6a
#define DAT_10023a6a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x462U)))
#undef DAT_10023a6f
#define DAT_10023a6f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x467U)))
#undef DAT_10023a78
#define DAT_10023a78 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x470U)))
#undef DAT_10023ae0
#define DAT_10023ae0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4d8U)))
#undef DAT_10023bc1
#define DAT_10023bc1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5b9U)))
#undef DAT_10023be6
#define DAT_10023be6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5deU)))
#undef DAT_10023beb
#define DAT_10023beb (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5e3U)))
#undef DAT_10023c0a
#define DAT_10023c0a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x602U)))
#undef DAT_10023c17
#define DAT_10023c17 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x60fU)))
#undef DAT_10024130
#define DAT_10024130 (*(uint *)(((uintptr_t)pf_module_state + 0xb28U)))
#undef DAT_10024134
#define DAT_10024134 (*(uint *)(((uintptr_t)pf_module_state + 0xb2cU)))
#undef DAT_10024144
#define DAT_10024144 (*(byte *)(((uintptr_t)pf_module_state + 0xb3cU)))
#undef DAT_10024148
#define DAT_10024148 (*(uint *)(((uintptr_t)pf_module_state + 0xb40U)))
#undef DAT_100242f8
#define DAT_100242f8 (*(int *)(((uintptr_t)pf_module_state + 0xcf0U)))
#undef DAT_10028fc0
#define DAT_10028fc0 (*(int *)(((uintptr_t)pf_module_state + 0x59b8U)))
#undef DAT_10028fc4
#define DAT_10028fc4 (*(int *)(((uintptr_t)pf_module_state + 0x59bcU)))
#undef DAT_10028fc8
#define DAT_10028fc8 (*(uint *)(((uintptr_t)pf_module_state + 0x59c0U)))
#undef DAT_10028fcc
#define DAT_10028fcc (*(uint *)(((uintptr_t)pf_module_state + 0x59c4U)))
#undef DAT_100290e4
#define DAT_100290e4 (*(uint *)(((uintptr_t)pf_module_state + 0x5adcU)))
#undef DAT_100290e8
#define DAT_100290e8 (*(uint *)(((uintptr_t)pf_module_state + 0x5ae0U)))
#undef DAT_100290ec
#define DAT_100290ec (*(uint *)(((uintptr_t)pf_module_state + 0x5ae4U)))
#undef DAT_100290f0
#define DAT_100290f0 (*(uint *)(((uintptr_t)pf_module_state + 0x5ae8U)))
#undef DAT_100290f4
#define DAT_100290f4 (*(uint *)(((uintptr_t)pf_module_state + 0x5aecU)))
#undef DAT_100290f8
#define DAT_100290f8 (*(uint *)(((uintptr_t)pf_module_state + 0x5af0U)))
#undef DAT_100290fc
#define DAT_100290fc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5af4U)))
#undef DAT_100291ed
#define DAT_100291ed (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5be5U)))
#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_40010930
#define DAT_40010930 (*(uint8_t *)(0x40010930U))
#undef Ram40010800
#define Ram40010800 (*(uint32_t *)(0x40010800U))
#undef Ram40010804
#define Ram40010804 (*(uint32_t *)(0x40010804U))
#undef Ram40010808
#define Ram40010808 (*(uint32_t *)(0x40010808U))
#undef Ram40010930
#define Ram40010930 (*(uint32_t *)(0x40010930U))
#undef UINT_4001087c
#define UINT_4001087c (*(uint *)(0x4001087cU))
#undef UINT_400108b8
#define UINT_400108b8 (*(uint *)(0x400108b8U))
#undef UINT_400108c0
#define UINT_400108c0 (*(uint *)(0x400108c0U))
#undef UINT_400108f8
#define UINT_400108f8 (*(uint *)(0x400108f8U))
#undef str_100236d6
#define str_100236d6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xceU)))
#undef str_1002392b
#define str_1002392b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x323U)))
#undef str_10023a22
#define str_10023a22 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x41aU)))
#undef str_10023a4f
#define str_10023a4f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x447U)))
#undef str_10023a5e
#define str_10023a5e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x456U)))
#undef str_10023a7c
#define str_10023a7c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x474U)))
#undef str_10023a82
#define str_10023a82 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x47aU)))
#undef str_10023a8e
#define str_10023a8e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x486U)))
#undef str_10023a9f
#define str_10023a9f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x497U)))
#undef str_10023aaa
#define str_10023aaa (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4a2U)))
#undef str_10023ac5
#define str_10023ac5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4bdU)))
#undef str_10023ace
#define str_10023ace (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4c6U)))
#undef str_10023ad6
#define str_10023ad6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4ceU)))
#undef str_10023ae5
#define str_10023ae5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4ddU)))
#undef str_10023aed
#define str_10023aed (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4e5U)))
#undef str_10023af6
#define str_10023af6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4eeU)))
#undef str_10023afd
#define str_10023afd (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4f5U)))
#undef str_10023b04
#define str_10023b04 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4fcU)))
#undef str_10023b12
#define str_10023b12 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x50aU)))
#undef str_10023b1a
#define str_10023b1a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x512U)))
#undef str_10023b25
#define str_10023b25 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x51dU)))
#undef str_10023b2e
#define str_10023b2e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x526U)))
#undef str_10023b3b
#define str_10023b3b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x533U)))
#undef str_10023b45
#define str_10023b45 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x53dU)))
#undef str_10023b4b
#define str_10023b4b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x543U)))
#undef str_10023b58
#define str_10023b58 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x550U)))
#undef str_10023b6d
#define str_10023b6d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x565U)))
#undef str_10023b77
#define str_10023b77 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x56fU)))
#undef str_10023b80
#define str_10023b80 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x578U)))
#undef str_10023b89
#define str_10023b89 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x581U)))
#undef str_10023b96
#define str_10023b96 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x58eU)))
#undef str_10023b9f
#define str_10023b9f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x597U)))
#undef str_10023ba7
#define str_10023ba7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x59fU)))
#undef str_10023bb0
#define str_10023bb0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5a8U)))
#undef str_10023bb8
#define str_10023bb8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5b0U)))
#undef str_10023bc3
#define str_10023bc3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5bbU)))
#undef str_10023bd4
#define str_10023bd4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5ccU)))
#undef str_10023bf0
#define str_10023bf0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5e8U)))
#undef str_10023bf8
#define str_10023bf8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5f0U)))
#undef str_10023c00
#define str_10023c00 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5f8U)))
#undef str_10023c22
#define str_10023c22 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x61aU)))
#undef str_10023c30
#define str_10023c30 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x628U)))
#undef str_10023c37
#define str_10023c37 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x62fU)))
#undef str_10023c43
#define str_10023c43 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x63bU)))
#undef str_10023c81
#define str_10023c81 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x679U)))
#undef str_10023c8c
#define str_10023c8c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x684U)))
#undef str_10023c94
#define str_10023c94 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x68cU)))
#undef str_10023c9c
#define str_10023c9c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x694U)))
#undef str_10023ca5
#define str_10023ca5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x69dU)))
#define uStack_2328 (*(uint *)(frame + 216))
#define uStack_2324 (*(uint *)(frame + 220))
#define uStack_2320 (*(uint *)(frame + 224))
#define auStack_2304 (*(undefined1 (*)[16])(frame + 252))
#define uStack_2120 (*(undefined8 *)(frame + 736))
#define local_23f0 (*(int *)(frame + 16))
#define local_23c8 (*(uint *)(frame + 56))
#define local_23c0 (*(uint *)(frame + 64))
#define local_23bc (*(int *)(frame + 68))
#define local_23b4 (*(uint *)(frame + 76))
#define local_23ac (*(byte (*)[4])(frame + 84))
#define local_23a8 (*(char (*)[96])(frame + 88))
#define local_2348 (*(uint *)(frame + 184))
#define local_2344 (*(int *)(frame + 188))
#define local_2340 (*(int *)(frame + 192))
#define local_233c (*(int *)(frame + 196))
#define local_2338 (*(uint *)(frame + 200))
#define local_2334 (*(uint *)(frame + 204))
#define local_2330 (*(uint *)(frame + 208))
#define local_232c (*(uint *)(frame + 212))
#define local_231c (*(uint *)(frame + 228))
#define local_2318 (*(uint *)(frame + 232))
#define local_2314 (*(uint *)(frame + 236))
#define local_2310 (*(uint *)(frame + 240))
#define local_22f4 (*(uint *)(frame + 268))
#define local_22f0 (*(uint *)(frame + 272))
#define local_22ec (*(uint *)(frame + 276))
#define local_22d0 (*(char (*)[24])(frame + 304))
#define local_22b8 (*(char (*)[24])(frame + 328))
#define local_22a0 (*(char (*)[24])(frame + 352))
#define local_2288 (*(uint (*)[16])(frame + 376))
#define local_2248 (*(char (*)[32])(frame + 440))
#define local_2228 (*(char (*)[32])(frame + 472))
#define local_2208 (*(char (*)[32])(frame + 504))
#define local_21e8 (*(char (*)[32])(frame + 536))
#define local_21c8 (*(char (*)[32])(frame + 568))
#define local_21a8 (*(uint (*)[2])(frame + 600))
#define local_21a0 (*(undefined2 *)(frame + 608))
#define local_2188 (*(undefined4 *)(frame + 632))
#define local_2184 (*(undefined4 *)(frame + 636))
#define local_2128 (*(undefined8 *)(frame + 728))
#define local_2118 (*(undefined4 *)(frame + 744))
#define local_20e0 (*(char (*)[48])(frame + 800))
#define local_20b0 (*(undefined4 *)(frame + 848))
#define local_20ac (*(undefined4 *)(frame + 852))
#define local_20a8 (*(undefined4 *)(frame + 856))
#define local_2050 (*(char (*)[168])(frame + 944))
#define local_1fa8 (*(uint *)(frame + 1112))
#define local_1fa4 (*(undefined4 *)(frame + 1116))
#define local_1fa0 (*(int *)(frame + 1120))
#define local_1f9c (*(uint *)(frame + 1124))
#define local_1f98 (*(int *)(frame + 1128))
#define local_1f7c (*(char (*)[16])(frame + 1156))
#define local_1f6c (*(char (*)[428])(frame + 1172))
#define local_1dc0 (*(uint (*)[1896])(frame + 1600))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10014490
 */

/* WARNING: Type propagation algorithm not settling */

void recovered_10014490(int param_1)

{
  unsigned char frame[9248] __attribute__((aligned(16))) = {0};

  ushort uVar1;
  ushort uVar2;
  char cVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  byte bVar6;
  byte bVar7;
  code *pcVar8;
  undefined8 uVar9;
  char cVar10;
  int *piVar11;
  ulong uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  uint extraout_r0 = 0;
  int iVar20;
  int iVar21;
  byte *pbVar22;
  uint uVar23;
  ulong uVar24;
  undefined1 *puVar25;
  int iVar26;
  uint uVar27;
  uint uVar28;
  int iVar29;
  uint uVar30;
  byte *pbVar31;
  char *pcVar32;
  undefined4 *puVar33;
  uint uVar34;
  undefined8 *puVar35;
  uint unaff_r6;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  undefined8 *puVar39;
  uint uVar40;
  int iVar41;
  int iVar42;
  uint uVar43;
  int iVar44;
  int iVar45;
  bool bVar46;
  bool bVar47;
  ulonglong uVar48;
  ulonglong uVar49;

  iVar44 = *(int *)(param_1 + 0x5c);
  iVar42 = *(int *)(param_1 + 0x58);
  iVar20 = iVar44 + 0x26;
  uVar23 = iVar42 + 0xe;
  switch((uintptr_t)(*(undefined4 *)(param_1 + 0x10))) {
  case 0:
    recovered_10017e70(param_1);
    return;
  case 1:
    if ((*(int *)(param_1 + 0xb08) == 0) && (iVar44 = *(int *)(param_1 + 0xb04), iVar44 != 0)) {
      uVar27 = *(uint *)(param_1 + 0xb10);
      if (uVar27 == 0) {
        return;
      }
      if (*(int *)(param_1 + 100) < 0x35) {
        return;
      }
      if (*(int *)(param_1 + 0x60) < 0x1d) {
        return;
      }
      uVar40 = *(uint *)(param_1 + 0xb14);
      if (uVar40 == 0) {
        return;
      }
      uVar15 = *(int *)(param_1 + 0x60) - 0x1c;
      uVar43 = *(int *)(param_1 + 100) - 0x34;
      uVar49 = recovered_10000c20((ulonglong)uVar15 * (ulonglong)uVar40,(ulonglong)uVar27);
      uVar34 = (uint)uVar49;
      uVar13 = uVar15;
      if ((int)uVar43 < (int)(uint)uVar49) {
        uVar49 = recovered_10000c20((ulonglong)uVar43 * (ulonglong)uVar27,(ulonglong)uVar40);
        uVar13 = (uint)uVar49;
        uVar34 = uVar43;
      }
      uVar40 = DAT_10024134;
      uVar27 = DAT_10024130;
      if ((int)uVar34 < 1) {
        return;
      }
      if ((int)uVar13 < 1) {
        return;
      }
      iVar20 = iVar20 + (int)(uVar43 - uVar34) / 2;
      iVar26 = (int)(uVar15 - uVar13) / 2;
      iVar29 = DAT_10024130 * iVar20 * 4 + iVar42 * 4 + iVar26 * 4;
      uVar43 = 0;
      iVar42 = DAT_10024130 * 4;
      do {
        uVar49 = recovered_10000c20((ulonglong)uVar43 * (ulonglong)*(uint *)(param_1 + 0xb14),
                                    (ulonglong)uVar34);
        uVar36 = iVar20 + uVar43;
        uVar15 = 0;
        do {
          uVar37 = *(uint *)(param_1 + 0xb10);
          uVar48 = recovered_10000c20((ulonglong)uVar15 * (ulonglong)uVar37,(ulonglong)uVar13);
          uVar28 = uVar23 + iVar26 + uVar15;
          if (-1 < (int)(uVar28 | uVar36)) {
            bVar46 = SBORROW4(uVar27,uVar28);
            iVar14 = uVar27 - uVar28;
            bVar47 = uVar27 == uVar28;
            if ((int)uVar28 < (int)uVar27) {
              bVar46 = SBORROW4(uVar40,uVar36);
              iVar14 = uVar40 - uVar36;
              bVar47 = uVar40 == uVar36;
            }
            if ((!bVar47 && iVar14 < 0 == bVar46) && (DAT_100242f8 != 0)) {
              puVar25 = (undefined1 *)(iVar44 + (uVar37 * (int)uVar49 + (int)uVar48) * 4);
              uVar4 = puVar25[1];
              uVar5 = puVar25[2];
              *(undefined1 *)(DAT_100242f8 + iVar29 + uVar15 * 4 + 0x38) = *puVar25;
              *(undefined1 *)(DAT_100242f8 + iVar29 + uVar15 * 4 + 0x39) = uVar4;
              *(undefined1 *)(DAT_100242f8 + iVar29 + uVar15 * 4 + 0x3a) = uVar5;
              *(undefined1 *)(DAT_100242f8 + iVar29 + uVar15 * 4 + 0x3b) = 0xff;
            }
          }
          uVar15 = uVar15 + 1;
        } while (uVar13 != uVar15);
        uVar43 = uVar43 + 1;
        iVar29 = iVar29 + iVar42;
      } while ((int)uVar43 < (int)uVar34);
      return;
    }
    uVar27 = 0x323232;
    pcVar32 = (char *)(param_1 + 0x261);
    break;
  default:
    pcVar32 = (char *)(param_1 + 0x261);
    cVar10 = *pcVar32;
    if (cVar10 == '\0') {
      return;
    }
    do {
      iVar42 = 0;
      while ((cVar10 != '\0' && (cVar10 != '\n' && iVar42 != -0x5f))) {
        *(char *)((int)&local_1fa4 + -iVar42) = cVar10;
        cVar10 = pcVar32[1 - iVar42];
        iVar42 = iVar42 + -1;
      }
      *(char *)((int)&local_1fa4 + -iVar42) = '\0';
      recovered_100125d8(uVar23,iVar20,(char *)&local_1fa4,0xffffffff,0x2d2d2d,1);
      pcVar32 = pcVar32 + -iVar42;
      iVar20 = iVar20 + 0x10;
      if (*pcVar32 == '\n') {
        pcVar32 = pcVar32 + 1;
      }
      cVar10 = *pcVar32;
    } while (cVar10 != '\0');
    return;
  case 3:
    iVar26 = *(int *)(param_1 + 0x60);
    uVar23 = recovered_10019aa8(&DAT_10023bc1,0xffffffff);
    uVar27 = recovered_10005d20();
    piVar11 = recovered_10011f28((byte *)str_1002392b,uVar27);
    recovered_100196a4(str_10023a4f,&DAT_10023a5a,local_2050 + 0x60,0x48);
    recovered_100196a4(str_10023a5e,&DAT_10023a6a,local_2050,0x60);
    memset(&local_1fa4,0,0x1bc);
    if ((int)uVar23 < 2) {
      uVar23 = 1;
    }
    uVar23 = recovered_10000b48(iVar26 + -0xb2,uVar23);
    iVar29 = Ram40010800;
    if ((iVar29 == 0x50414d57) && (iVar29 = Ram40010804, iVar29 != 0)) {
      uVar27 = Ram40010808;
      bVar47 = 0xb < uVar27;
      if (bVar47) {
        uVar27 = Ram40010808;
      }
      if ((bVar47 && 0x133 < uVar27) && (pcVar8 = (code *)Ram40010930, pcVar8 != (code *)0x0)) {
        iVar29 = (*pcVar8)(&local_1fa4);
        uVar27 = 0;
        if (iVar29 != 0) {
          uVar27 = local_1f9c & 0xff;
        }
        if (iVar29 != 0 && (uVar27 & 1) != 0) {
          builtin_strncpy(local_2050 + 8,"ell ",5);
          builtin_strncpy(local_2050 + 4,"erSh",4);
          builtin_strncpy(local_2050,"Wint",4);
          uVar12 = strlen(local_2050);
          if (uVar12 < 0x60) {
            iVar29 = 0x5f;
            if (uVar12 != 0x5f) {
              local_2050[uVar12] = '0';
              iVar29 = uVar12 + 1;
              if (uVar12 < 0x5e) {
                local_2050[iVar29] = '.';
                iVar29 = uVar12 + 2;
                if (uVar12 != 0x5d) {
                  local_2050[iVar29] = '4';
                  iVar29 = uVar12 + 3;
                }
              }
            }
            local_2050[iVar29] = '\0';
          }
          uVar12 = strlen(local_2050);
          if (uVar12 < 0x60) {
            iVar29 = 0x5f;
            if (uVar12 != 0x5f) {
              local_2050[uVar12] = ' ';
              iVar29 = uVar12 + 1;
            }
            local_2050[iVar29] = '\0';
          }
          uVar12 = strlen(local_2050);
          if (uVar12 < 0x60) {
            iVar29 = 0x5f;
            if (uVar12 != 0x5f) {
              local_2050[uVar12] = 'B';
              iVar29 = uVar12 + 1;
              if (uVar12 < 0x5e) {
                local_2050[iVar29] = 'e';
                iVar29 = uVar12 + 2;
                if (uVar12 != 0x5d) {
                  local_2050[iVar29] = 't';
                  iVar29 = uVar12 + 3;
                  if (uVar12 < 0x5c) {
                    local_2050[iVar29] = 'a';
                    iVar29 = uVar12 + 4;
                  }
                }
              }
            }
            local_2050[iVar29] = '\0';
          }
          uVar12 = strlen(local_2050);
          if (uVar12 < 0x60) {
            uVar27 = 0x5f;
            if (uVar12 != 0x5f) {
              pcVar32 = &DAT_10023a6f;
              cVar10 = ' ';
              do {
                cVar3 = *pcVar32;
                uVar27 = uVar12 + 1;
                local_2050[uVar12] = cVar10;
                if (0x5d < uVar12) break;
                uVar12 = uVar27;
                pcVar32 = pcVar32 + 1;
                cVar10 = cVar3;
              } while (cVar3 != '\0');
            }
            local_2050[uVar27] = '\0';
          }
          pcVar32 = &DAT_10023a78;
          if (local_1f7c[0] != '\0') {
            pcVar32 = local_1f7c;
          }
          uVar12 = strlen(local_2050);
          if (uVar12 < 0x60) {
            if ((uVar12 == 0x5f) || (cVar10 = *pcVar32, cVar10 == '\0')) {
              uVar24 = uVar12;
            }
            else {
              do {
                pcVar32 = pcVar32 + 1;
                cVar3 = *pcVar32;
                uVar24 = uVar12 + 1;
                local_2050[uVar12] = cVar10;
                if (0x5d < uVar12) break;
                uVar12 = uVar24;
                cVar10 = cVar3;
              } while (cVar3 != '\0');
            }
            local_2050[uVar24] = '\0';
          }
          uVar12 = strlen(local_2050);
          if (uVar12 < 0x60) {
            iVar29 = 0x5f;
            if (uVar12 != 0x5f) {
              local_2050[uVar12] = ' ';
              iVar29 = uVar12 + 1;
            }
            local_2050[iVar29] = '\0';
          }
          pcVar32 = str_10023a7c;
          if (local_1f6c[0] != '\0') {
            pcVar32 = local_1f6c;
          }
          uVar12 = strlen(local_2050);
          if (uVar12 < 0x60) {
            if ((uVar12 == 0x5f) || (cVar10 = *pcVar32, cVar10 == '\0')) {
              uVar24 = uVar12;
            }
            else {
              do {
                pcVar32 = pcVar32 + 1;
                cVar3 = *pcVar32;
                uVar24 = uVar12 + 1;
                local_2050[uVar12] = cVar10;
                if (0x5d < uVar12) break;
                uVar12 = uVar24;
                cVar10 = cVar3;
              } while (cVar3 != '\0');
            }
            local_2050[uVar24] = '\0';
          }
        }
      }
    }
    bVar47 = false;
    memset(local_23ac,0,0xa8);
    iVar29 = Ram40010800;
    if ((iVar29 == 0x50414d57) && (iVar29 = Ram40010804, iVar29 != 0)) {
      uVar27 = Ram40010808;
      bVar46 = 0xb < uVar27;
      if (bVar46) {
        uVar27 = Ram40010808;
      }
      if (((!bVar46 || uVar27 < 0xfc) || (pcVar8 = (code *)UINT_400108f8, pcVar8 == (code *)0x0)) ||
         (uVar27 = (*pcVar8)(local_23ac), uVar27 == 0)) goto LAB_100146d8;
      bVar47 = true;
    }
    else {
LAB_100146d8:
      iVar29 = Ram40010800;
      local_2348 = 0;
      if (iVar29 == 0x50414d57) {
        iVar29 = Ram40010804;
        if (iVar29 != 0) {
          uVar27 = Ram40010808;
          bVar46 = 0xb < uVar27;
          if (bVar46) {
            uVar27 = Ram40010808;
          }
          if (bVar46 && 0xbb < uVar27) {
            pcVar8 = (code *)UINT_400108b8;
            if (pcVar8 != (code *)0x0) {
              local_2348 = (*pcVar8)();
            }
          }
        }
      }
    }
    local_20e0[0] = '\0';
    uVar27 = local_2348;
    if (local_2348 < 2) {
      uVar27 = 1;
    }
    recovered_10018f20(local_20e0,0x30,uVar27);
    pcVar32 = str_10023bd4;
    if (local_2348 < 2) {
      pcVar32 = str_10023bc3;
    }
    uVar12 = strlen(local_20e0);
    uVar40 = local_2318;
    uVar27 = local_231c;
    if (uVar12 < 0x30) {
      if ((uVar12 == 0x2f) || (cVar10 = *pcVar32, cVar10 == '\0')) {
        uVar24 = uVar12;
      }
      else {
        do {
          pcVar32 = pcVar32 + 1;
          cVar3 = *pcVar32;
          uVar24 = uVar12 + 1;
          local_20e0[uVar12] = cVar10;
          if (0x2d < uVar12) break;
          uVar12 = uVar24;
          cVar10 = cVar3;
        } while (cVar3 != '\0');
      }
      local_20e0[uVar24] = '\0';
    }
    if (bVar47) {
      uVar34 = 0;
      pcVar32 = str_10023a82;
      if (local_23a8[0] != '\0') {
        pcVar32 = local_23a8;
      }
      cVar10 = *pcVar32;
      do {
        if (cVar10 == '\0') break;
        cVar3 = pcVar32[uVar34 + 1];
        *(char *)((int)&local_20b0 + uVar34) = cVar10;
        uVar34 = uVar34 + 1;
        cVar10 = cVar3;
      } while (uVar34 < 0x5f);
      *(undefined1 *)((int)&local_20b0 + uVar34) = 0;
      if ((local_23ac[0] & 4) == 0) goto LAB_100150fc;
      if (local_232c == 0 && uStack_2328 == 0) {
        uStack_2328 = uStack_2320;
        local_232c = uStack_2324;
      }
      recovered_10019878(local_232c,uStack_2328,local_21e8,0x20);
      recovered_10019878(uStack_2324,uStack_2320,local_2208,0x20);
      recovered_10019878(local_2314,local_2310,local_2228,0x20);
      recovered_10019878(uVar27,uVar40,local_2248,0x20);
      uVar27 = extraout_r0;
    }
    else {
      local_20a8 = 0x555043;
      local_20ac = 0x206e776f;
      local_20b0 = 0x6e6b6e55;
LAB_100150fc:
      uVar27 = 0;
      builtin_strncpy(local_21e8 + 8,"ble",4);
      builtin_strncpy(local_21e8 + 4,"aila",4);
      builtin_strncpy(local_21e8,"unav",4);
      builtin_strncpy(local_2208 + 8,"ble",4);
      builtin_strncpy(local_2208 + 4,"aila",4);
      builtin_strncpy(local_2208,"unav",4);
      builtin_strncpy(local_2228,"unavailable",0xc);
      builtin_strncpy(local_2248 + 8,"ble",4);
      builtin_strncpy(local_2248 + 4,"aila",4);
      builtin_strncpy(local_2248,"unav",4);
    }
    if (bVar47) {
      uVar27 = (uint)local_23ac[0];
    }
    if (bVar47 && (uVar27 & 2) != 0) {
      local_2288[0] = local_2288[0] & 0xffffff00;
      recovered_10019ec8((char *)local_2288,&DAT_10023be6,local_2344);
      recovered_10019ec8((char *)local_2288,&DAT_10023beb,local_2340);
      recovered_10019ec8((char *)local_2288,str_10023bf0,local_233c);
      if ((char)local_2288[0] == '\0') {
        local_2288[2] = 0x656c62;
        local_2288[1] = 0x616c6961;
        local_2288[0] = 0x76616e75;
      }
      if (local_2338 == 0) {
        builtin_strncpy(local_22a0 + 8,"ble",4);
        builtin_strncpy(local_22a0 + 4,"aila",4);
        builtin_strncpy(local_22a0,"unav",4);
      }
      else {
        recovered_10019878(local_2338,0,local_22a0,0x18);
      }
      if (local_2334 == 0) {
        builtin_strncpy(local_22b8 + 8,"ble",4);
        builtin_strncpy(local_22b8 + 4,"aila",4);
        builtin_strncpy(local_22b8,"unav",4);
      }
      else {
        recovered_10019878(local_2334,0,local_22b8,0x18);
      }
      if (local_2330 == 0) {
        builtin_strncpy(local_22d0 + 8,"ble",4);
        builtin_strncpy(local_22d0 + 4,"aila",4);
        builtin_strncpy(local_22d0,"unav",4);
      }
      else {
        recovered_10019878(local_2330,0,local_22d0,0x18);
      }
    }
    else {
      local_2288[2] = 0x656c62;
      local_2288[1] = 0x616c6961;
      local_2288[0] = 0x76616e75;
      builtin_strncpy(local_22a0 + 8,"ble",4);
      builtin_strncpy(local_22a0 + 4,"aila",4);
      builtin_strncpy(local_22a0,"unav",4);
      builtin_strncpy(local_22b8,"unavailable",0xc);
      builtin_strncpy(local_22d0 + 8,"ble",4);
      builtin_strncpy(local_22d0 + 4,"aila",4);
      builtin_strncpy(local_22d0,"unav",4);
    }
    memset(auStack_2304,0,0x34);
    iVar29 = Ram40010800;
    if ((iVar29 == 0x50414d57) && (iVar29 = Ram40010804, iVar29 != 0)) {
      uVar27 = Ram40010808;
      bVar46 = 0xb < uVar27;
      if (bVar46) {
        uVar27 = Ram40010808;
      }
      if (((!bVar46 || uVar27 < 0x80) || (pcVar8 = (code *)UINT_4001087c, pcVar8 == (code *)0x0)) ||
         (uVar27 = (*pcVar8)(auStack_2304), uVar27 == 0)) goto LAB_100151bc;
      local_2128 = local_2128 & 0xffffffffffffff00;
      recovered_10018f20((char *)&local_2128,0x48,local_22f4);
      uVar12 = strlen((char *)&local_2128);
      if (uVar12 < 0x48) {
        iVar29 = 0x47;
        if (uVar12 != 0x47) {
          *(char *)((int)&local_2128 + uVar12) = ' ';
          iVar29 = uVar12 + 1;
          if (uVar12 < 0x46) {
            *(char *)((int)&local_2128 + iVar29) = 'x';
            iVar29 = uVar12 + 2;
            if (uVar12 != 0x45) {
              *(char *)((int)&local_2128 + iVar29) = ' ';
              iVar29 = uVar12 + 3;
            }
          }
        }
        *(char *)((int)&local_2128 + iVar29) = '\0';
      }
      recovered_10018f20((char *)&local_2128,0x48,local_22f0);
      uVar12 = strlen((char *)&local_2128);
      if (uVar12 < 0x48) {
        iVar29 = 0x47;
        if (uVar12 != 0x47) {
          *(char *)((int)&local_2128 + uVar12) = ',';
          iVar29 = uVar12 + 1;
          if (uVar12 < 0x46) {
            *(char *)((int)&local_2128 + iVar29) = ' ';
            iVar29 = uVar12 + 2;
          }
        }
        *(char *)((int)&local_2128 + iVar29) = '\0';
      }
      recovered_10018f20((char *)&local_2128,0x48,local_22ec);
      uVar12 = strlen((char *)&local_2128);
      if (uVar12 < 0x48) {
        uVar27 = 0x47;
        if (uVar12 != 0x47) {
          pcVar32 = str_10023a8e;
          cVar10 = '-';
          do {
            pcVar32 = pcVar32 + 1;
            cVar3 = *pcVar32;
            uVar27 = uVar12 + 1;
            *(char *)((int)&local_2128 + uVar12) = cVar10;
            if (0x45 < uVar12) break;
            uVar12 = uVar27;
            cVar10 = cVar3;
          } while (cVar3 != '\0');
        }
        goto LAB_100151dc;
      }
    }
    else {
LAB_100151bc:
      local_2128 = (0x7363696870617267U);
      uStack_2120 = (0x6c696176616e7520U);
      local_2118 = 0x656c6261;
      uVar27 = 0x14;
LAB_100151dc:
      local_20e0[uVar27 - 0x48] = '\0';
    }
    local_1fa8 = 0;
    uVar40 = recovered_10005d20();
    local_2184 = 0x206563;
    local_2188 = 0x69766564;
    uVar27 = uVar40;
    if (0x7fffffff < uVar40) {
      uVar12 = strlen((char *)&local_2188);
      if (uVar12 < 0x60) {
        iVar29 = 0x5f;
        if (uVar12 != 0x5f) {
          *(char *)((int)&local_2188 + uVar12) = '-';
          iVar29 = uVar12 + 1;
        }
        *(char *)((int)&local_2188 + iVar29) = '\0';
      }
      uVar27 = -uVar40;
    }
    recovered_10018f20((char *)&local_2188,0x60,uVar27);
    local_21a0 = 0x73;
    local_21a8[1] = 0x656d756c;
    local_21a8[0] = 0x6f762030;
    builtin_strncpy(local_21c8 + 4,"own",4);
    builtin_strncpy(local_21c8,"unkn",4);
    memset(&local_1fa4,0,0x1f80);
    iVar29 = Ram40010800;
    if ((iVar29 == 0x50414d57) && (iVar29 = Ram40010804, iVar29 != 0)) {
      uVar27 = Ram40010808;
      bVar46 = 0xb < uVar27;
      if (bVar46) {
        uVar27 = Ram40010808;
      }
      if (((bVar46 && 0xc3 < uVar27) && (pcVar8 = (code *)UINT_400108c0, pcVar8 != (code *)0x0)) &&
         (uVar27 = (*pcVar8)(&local_1fa4,0x10,&local_1fa8), uVar27 != 0)) {
        local_21a8[0] = local_21a8[0] & 0xffffff00;
        recovered_10018f20((char *)local_21a8,0x20,local_1fa8);
        pcVar32 = str_10023c00;
        if (local_1fa8 == 1) {
          pcVar32 = str_10023bf8;
        }
        uVar12 = strlen((char *)local_21a8);
        if (uVar12 < 0x20) {
          if ((uVar12 == 0x1f) || (cVar10 = *pcVar32, cVar10 == '\0')) {
            uVar24 = uVar12;
          }
          else {
            do {
              pcVar32 = pcVar32 + 1;
              cVar3 = *pcVar32;
              uVar24 = uVar12 + 1;
              *(char *)((int)local_21a8 + uVar12) = cVar10;
              if (0x1d < uVar12) break;
              uVar12 = uVar24;
              cVar10 = cVar3;
            } while (cVar3 != '\0');
          }
          *(char *)((int)local_21a8 + uVar24) = '\0';
        }
        uVar27 = 0;
        uVar34 = local_1fa8;
        if (0xf < local_1fa8) {
          uVar34 = 0x10;
        }
        if (local_1fa8 == 0) {
          uVar40 = 0;
        }
        else {
          uVar43 = (uint)&local_1fa4 | 1;
          uVar15 = 0;
          uVar13 = 0;
          uVar27 = 0;
          iVar29 = 0;
          do {
            bVar46 = CARRY4(uVar27,local_1dc0[uVar15 * 0x7e]);
            uVar27 = uVar27 + local_1dc0[uVar15 * 0x7e];
            iVar29 = iVar29 + (uint)bVar46;
            if (uVar13 == 0) {
              uVar13 = 0;
              if (local_1dc0[uVar15 * 0x7e + 3] == uVar40) {
                cVar10 = local_2050[uVar15 * 0x1f8 + 0xac];
                do {
                  if (cVar10 == '\0') break;
                  cVar3 = *(char *)(uVar43 + uVar13);
                  *(char *)((int)&local_2188 + uVar13) = cVar10;
                  uVar13 = uVar13 + 1;
                  cVar10 = cVar3;
                } while (uVar13 < 0x5f);
                *(char *)((int)&local_2188 + uVar13) = '\0';
                goto LAB_100178dc;
              }
            }
            else {
LAB_100178dc:
              uVar13 = 1;
            }
            uVar15 = uVar15 + 1;
            uVar43 = uVar43 + 0x1f8;
          } while (uVar15 != uVar34);
          uVar40 = iVar29 * 0x200 | uVar27 >> 0x17;
          uVar27 = uVar27 * 0x200;
        }
        recovered_10019878(uVar27,uVar40,local_21c8,0x20);
      }
    }
    iVar14 = iVar42 + 0x12;
    iVar29 = iVar26 + -0x24;
    uVar27 = *(uint *)(param_1 + 8);
    if (*(uint *)(param_1 + 8) == 0xffffffff) {
      uVar27 = DAT_10024148;
    }
    if ((uVar27 < 4) && (uVar27 == 0)) {
      uVar27 = 0xff;
    }
    else {
      uVar27 = ~(uint)*(byte *)(param_1 + 5);
    }
    recovered_10012e84(iVar14,iVar20,iVar29,*(int *)(param_1 + 100) + -0x34,0xfcfcfc,uVar27 & 0xff);
    recovered_1001297c(iVar14,iVar20,iVar29,*(int *)(param_1 + 100) + -0x34,0xb8b8b8);
    if (piVar11 == (int *)0x0) {
      uVar27 = DAT_10024144 ^ 0xff;
      if (DAT_10024148 == 0) {
        uVar27 = 0xff;
      }
      recovered_10012e84(iVar42 + 0x2e,iVar44 + 0x3c,0x36,0x36,0xececec,uVar27);
      recovered_1001297c(iVar42 + 0x2e,iVar44 + 0x3c,0x36,0x36,0x808080);
    }
    else {
      recovered_10012318(piVar11,iVar42 + 0x26,iVar44 + 0x38,0x46,0x46);
    }
    recovered_100125d8(iVar42 + 0x82,iVar44 + 0x3a,str_10023a9f,0x1c,0x141414,2);
    recovered_100125d8(iVar42 + 0x84,iVar44 + 0x56,local_2050 + 0x60,0x26,0x484848,1);
    recovered_100125d8(iVar42 + 0x84,iVar44 + 0x68,str_10023aaa,0x26,0x484848,1);
    uVar40 = 0xf6f6f6;
    uVar27 = 0xf6f6f6;
    iVar20 = *(int *)(param_1 + 0x5c);
    iVar16 = *(int *)(param_1 + 0xb00);
    iVar21 = iVar20 + 0x86;
    if (iVar16 == 0) {
      uVar27 = 0xe8e8e8;
    }
    iVar41 = *(int *)(param_1 + 0x58) + 0x82;
    uVar34 = DAT_10024144 ^ 0xff;
    if (DAT_10024148 == 0) {
      uVar34 = 0xff;
    }
    recovered_10012e84(iVar41,iVar21,0x4c,0x16,uVar27,uVar34);
    recovered_1001297c(iVar41,iVar21,0x4c,0x16,0x969696);
    uVar27 = recovered_10019aa8(str_10023ac5,0xffffffff);
    uVar13 = 0x505050;
    uVar34 = 0x505050;
    if (iVar16 == 0) {
      uVar34 = 0x202020;
    }
    recovered_100125d8(iVar41 + (int)(0x4c - uVar27) / 2,iVar20 + 0x8e,str_10023ac5,0xffffffff,
                       uVar34,1);
    iVar20 = *(int *)(param_1 + 0xb00);
    if (iVar20 == 1) {
      uVar40 = 0xe8e8e8;
    }
    uVar27 = DAT_10024144 ^ 0xff;
    iVar41 = *(int *)(param_1 + 0x5c);
    iVar16 = *(int *)(param_1 + 0x58) + 0xd6;
    iVar21 = iVar41 + 0x86;
    if (DAT_10024148 == 0) {
      uVar27 = 0xff;
    }
    recovered_10012e84(iVar16,iVar21,0x46,0x16,uVar40,uVar27);
    recovered_1001297c(iVar16,iVar21,0x46,0x16,0x969696);
    uVar27 = recovered_10019aa8(str_10023ace,0xffffffff);
    if (iVar20 == 1) {
      uVar13 = 0x202020;
    }
    recovered_100125d8(iVar16 + (int)(0x46 - uVar27) / 2,iVar41 + 0x8e,str_10023ace,0xffffffff,
                       uVar13,1);
    if (*(int *)(param_1 + 0xb00) != 1) {
      iVar20 = iVar29 + iVar14 + -0xfa;
      uVar40 = (iVar42 + iVar26) - 0x22;
      uVar27 = DAT_10024130;
      if ((int)uVar40 < (int)DAT_10024130) {
        uVar27 = uVar40;
      }
      if ((int)uVar40 < 0) {
        uVar27 = 0;
      }
      uVar40 = iVar44 + 0xa9U;
      if ((int)DAT_10024134 <= (int)(iVar44 + 0xa9U)) {
        uVar40 = DAT_10024134;
      }
      if (iVar44 < -0xa9) {
        uVar40 = 0;
      }
      uVar34 = DAT_10024134;
      if ((int)(iVar44 + 0xa8U) < (int)DAT_10024134) {
        uVar34 = iVar44 + 0xa8U;
      }
      if (iVar44 < -0xa8) {
        uVar34 = 0;
      }
      uVar13 = iVar42 + 0x22U;
      if ((int)DAT_10024130 <= (int)(iVar42 + 0x22U)) {
        uVar13 = DAT_10024130;
      }
      if (iVar42 < -0x22) {
        uVar13 = 0;
      }
      if (((DAT_100242f8 != 0) && ((int)uVar13 < (int)uVar27)) && ((int)uVar34 < (int)uVar40)) {
        iVar26 = DAT_10024130 * 4;
        puVar35 = (undefined8 *)(DAT_100242f8 + (uVar34 * DAT_10024130 + uVar13) * 4);
        uVar43 = uVar27 - uVar13;
        iVar21 = DAT_100242f8 + uVar34 * DAT_10024130 * 4;
        uVar15 = uVar43 & 0xfffffffc;
        do {
          uVar36 = uVar15;
          puVar39 = puVar35;
          uVar28 = uVar13;
          if (uVar43 < 4) {
LAB_10015930:
            iVar16 = uVar27 - uVar28;
            puVar33 = (undefined4 *)(iVar21 + uVar28 * 4);
            do {
              *puVar33 = 0xffd6d6d6;
              iVar16 = iVar16 + -1;
              puVar33 = puVar33 + 1;
            } while (iVar16 != 0);
          }
          else {
            do {
              uVar9 = (0xffd6d6d6ffd6d6d6U);
              uVar36 = uVar36 - 4;
              *puVar39 = (0xffd6d6d6ffd6d6d6U);
              puVar39[1] = uVar9;
              puVar39 = puVar39 + 2;
            } while (uVar36 != 0);
            uVar28 = uVar13 + uVar15;
            if (uVar43 != uVar15) goto LAB_10015930;
          }
          uVar34 = uVar34 + 1;
          iVar21 = iVar21 + iVar26;
          puVar35 = (undefined8 *)((int)puVar35 + iVar26);
        } while (uVar34 != uVar40);
      }
      iVar21 = iVar42 + 0x24;
      recovered_100125d8(iVar21,iVar44 + 0xb4,str_10023ad6,0xffffffff,0x262626,1);
      iVar16 = iVar42 + 0x32;
      recovered_100125d8(iVar16,iVar44 + 0xca,&DAT_10023ae0,0x11,0x5c5c5c,1);
      recovered_100125d8(iVar42 + 0xb2,iVar44 + 0xca,(char *)&local_20b0,0x30,0x1c1c1c,1);
      recovered_100125d8(iVar16,iVar44 + 0xdc,str_10023ae5,0x11,0x5c5c5c,1);
      recovered_100125d8(iVar42 + 0xb2,iVar44 + 0xdc,local_20e0,0x30,0x1c1c1c,1);
      recovered_100125d8(iVar21,iVar44 + 0xfc,str_10023aed,0xffffffff,0x262626,1);
      recovered_100125d8(iVar20,iVar44 + 0xfc,str_10023af6,0xffffffff,0x262626,1);
      iVar26 = iVar44 + 0x112;
      recovered_100125d8(iVar16,iVar26,str_10023afd,0xd,0x5c5c5c,1);
      iVar42 = iVar42 + 0x92;
      recovered_100125d8(iVar42,iVar26,local_2050 + 0x60,0x18,0x1c1c1c,1);
      recovered_100125d8(iVar20,iVar26,str_10023b04,0xd,0x5c5c5c,1);
      iVar29 = iVar29 + iVar14 + -0x9a;
      recovered_100125d8(iVar29,iVar26,local_21e8,0x18,0x1c1c1c,1);
      iVar26 = iVar44 + 0x124;
      recovered_100125d8(iVar16,iVar26,str_10023b12,0xd,0x5c5c5c,1);
      recovered_100125d8(iVar42,iVar26,str_100236d6,0x18,0x1c1c1c,1);
      recovered_100125d8(iVar20,iVar26,str_10023b1a,0xd,0x5c5c5c,1);
      recovered_100125d8(iVar29,iVar26,local_2208,0x18,0x1c1c1c,1);
      iVar26 = iVar44 + 0x136;
      recovered_100125d8(iVar16,iVar26,str_10023b25,0xd,0x5c5c5c,1);
      recovered_100125d8(iVar42,iVar26,str_10023b2e,0x18,0x1c1c1c,1);
      recovered_100125d8(iVar20,iVar26,str_10023b3b,0xd,0x5c5c5c,1);
      recovered_100125d8(iVar29,iVar26,local_2228,0x18,0x1c1c1c,1);
      iVar26 = iVar44 + 0x148;
      recovered_100125d8(iVar16,iVar26,str_10023b45,0xd,0x5c5c5c,1);
      uVar27 = 0x18;
      if (0x18 < (int)uVar23) {
        uVar27 = uVar23;
      }
      recovered_100125d8(iVar42,iVar26,local_2050,uVar27,0x1c1c1c,1);
      if ((bVar47) && (local_231c != 0 || local_2318 != 0)) {
        iVar26 = iVar44 + 0x15a;
        recovered_100125d8(iVar20,iVar26,str_10023b4b,0xd,0x5c5c5c,1);
        recovered_100125d8(iVar29,iVar26,local_2248,0x18,0x1c1c1c,1);
      }
      recovered_100125d8(iVar21,iVar26 + 0x22,str_10023b58,0xffffffff,0x262626,1);
      recovered_100125d8(iVar20,iVar26 + 0x22,str_10023b6d,0xffffffff,0x262626,1);
      iVar44 = iVar26 + 0x38;
      recovered_100125d8(iVar16,iVar44,str_10023b77,0xd,0x5c5c5c,1);
      recovered_100125d8(iVar42,iVar44,(char *)&local_2128,0x18,0x1c1c1c,1);
      recovered_100125d8(iVar20,iVar44,str_10023b80,0xd,0x5c5c5c,1);
      recovered_100125d8(iVar29,iVar44,(char *)local_2288,0x18,0x1c1c1c,1);
      iVar44 = iVar26 + 0x4a;
      recovered_100125d8(iVar16,iVar44,str_10023b89,0xd,0x5c5c5c,1);
      recovered_100125d8(iVar42,iVar44,(char *)&local_2188,0x18,0x1c1c1c,1);
      recovered_100125d8(iVar20,iVar44,str_10023b96,0xd,0x5c5c5c,1);
      recovered_100125d8(iVar29,iVar44,local_22a0,0x18,0x1c1c1c,1);
      iVar44 = iVar26 + 0x5c;
      recovered_100125d8(iVar16,iVar44,str_10023b9f,0xd,0x5c5c5c,1);
      recovered_100125d8(iVar42,iVar44,(char *)local_21a8,0x18,0x1c1c1c,1);
      recovered_100125d8(iVar20,iVar44,str_10023ba7,0xd,0x5c5c5c,1);
      recovered_100125d8(iVar29,iVar44,local_22b8,0x18,0x1c1c1c,1);
      iVar26 = iVar26 + 0x6e;
      recovered_100125d8(iVar16,iVar26,str_10023bb0,0xd,0x5c5c5c,1);
      recovered_100125d8(iVar42,iVar26,local_21c8,0x18,0x1c1c1c,1);
      if (!(bool)(bVar47 & local_2330 != 0)) {
        return;
      }
      recovered_100125d8(iVar20,iVar26,str_10023bb8,0xd,0x5c5c5c,1);
      uVar27 = 0x1c1c1c;
      pcVar32 = local_22d0;
      uVar23 = 0x18;
      goto LAB_10017294;
    }
    local_23bc = *(int *)(param_1 + 0x60);
    iVar42 = *(int *)(param_1 + 0x58);
    iVar20 = local_23bc + -0x44;
    local_23b4 = *(int *)(param_1 + 0x5c);
    uVar40 = iVar42 + 0x22;
    uVar27 = iVar20 + uVar40;
    uVar23 = DAT_10024130;
    if ((int)uVar27 < (int)DAT_10024130) {
      uVar23 = uVar27;
    }
    if ((int)uVar27 < 0) {
      uVar23 = 0;
    }
    uVar34 = local_23b4 + 0xa8;
    uVar27 = local_23b4 + 0xa9;
    if ((int)DAT_10024134 <= (int)(local_23b4 + 0xa9)) {
      uVar27 = DAT_10024134;
    }
    if ((int)uVar34 < -1) {
      uVar27 = 0;
    }
    uVar13 = DAT_10024134;
    if ((int)uVar34 < (int)DAT_10024134) {
      uVar13 = uVar34;
    }
    if ((int)local_23b4 < -0xa8) {
      uVar13 = 0;
    }
    uVar34 = DAT_10024130;
    if ((int)uVar40 < (int)DAT_10024130) {
      uVar34 = uVar40;
    }
    if (iVar42 < -0x22) {
      uVar34 = 0;
    }
    if (((DAT_100242f8 != 0) && ((int)uVar34 < (int)uVar23)) && ((int)uVar13 < (int)uVar27)) {
      uVar40 = uVar23 - uVar34;
      uVar43 = uVar40 & 0xfffffffc;
      iVar20 = DAT_10024130 * 4;
      puVar35 = (undefined8 *)(DAT_100242f8 + (uVar13 * DAT_10024130 + uVar34) * 4);
      iVar42 = DAT_100242f8 + uVar13 * DAT_10024130 * 4;
      do {
        uVar15 = uVar43;
        puVar39 = puVar35;
        uVar36 = uVar34;
        if (uVar40 < 4) {
LAB_100157d4:
          iVar44 = uVar23 - uVar36;
          puVar33 = (undefined4 *)(iVar42 + uVar36 * 4);
          do {
            *puVar33 = 0xffd6d6d6;
            iVar44 = iVar44 + -1;
            puVar33 = puVar33 + 1;
          } while (iVar44 != 0);
        }
        else {
          do {
            uVar9 = (0xffd6d6d6ffd6d6d6U);
            uVar15 = uVar15 - 4;
            *puVar39 = (0xffd6d6d6ffd6d6d6U);
            puVar39[1] = uVar9;
            puVar39 = puVar39 + 2;
          } while (uVar15 != 0);
          uVar36 = uVar34 + uVar43;
          if (uVar40 != uVar43) goto LAB_100157d4;
        }
        uVar13 = uVar13 + 1;
        iVar42 = iVar42 + iVar20;
        puVar35 = (undefined8 *)((int)puVar35 + iVar20);
      } while (uVar13 != uVar27);
      iVar42 = *(int *)(param_1 + 0x58);
      local_23b4 = *(int *)(param_1 + 0x5c);
      local_23bc = *(int *)(param_1 + 0x60);
      uVar40 = iVar42 + 0x22;
      iVar20 = local_23bc + -0x44;
    }
    uVar23 = DAT_10024144 ^ 0xff;
    if (DAT_10024148 == 0) {
      uVar23 = 0xff;
    }
    recovered_10012e84(uVar40,local_23b4 + 0xb4,iVar20,0x2e,0xfafafa,uVar23);
    recovered_1001297c(uVar40,local_23b4 + 0xb4,iVar20,0x2e,0x949494);
    local_1f9c = CONCAT22(PF_PART2(local_1f9c, 2),0x20);
    local_1fa0 = 0x3a534543;
    local_1fa4 = 0x49564544;
    recovered_10018f20((char *)&local_1fa4,0xa0,DAT_100290e4);
    uVar12 = strlen((char *)&local_1fa4);
    if (uVar12 < 0xa0) {
      iVar20 = 0x9f;
      if (uVar12 != 0x9f) {
        *(char *)((int)&local_1fa4 + uVar12) = '/';
        iVar20 = uVar12 + 1;
      }
      *(char *)((int)&local_1fa4 + iVar20) = '\0';
    }
    recovered_10018f20((char *)&local_1fa4,0xa0,DAT_100290e8);
    uVar23 = recovered_10019aa8(&DAT_10023bc1,0xffffffff);
    uVar40 = local_23bc - 0x54;
    uVar27 = 1;
    if (0x54 < local_23bc) {
      uVar27 = uVar23;
      if ((int)uVar23 < 2) {
        uVar27 = 1;
      }
      uVar27 = recovered_10000ac0(uVar40,uVar27);
      if ((int)uVar40 < (int)uVar23) {
        uVar27 = 1;
      }
    }
    recovered_100125d8(iVar42 + 0x2a,local_23b4 + 0xbf,(char *)&local_1fa4,uVar27,0x282828,1);
    local_1fa0 = 0x204556;
    local_1fa4 = 0x4954414e;
    recovered_10018f20((char *)&local_1fa4,0xa0,DAT_100290ec);
    uVar12 = strlen((char *)&local_1fa4);
    if (uVar12 < 0xa0) {
      uVar23 = 0x9f;
      if (uVar12 != 0x9f) {
        pcVar32 = &DAT_10023c0a;
        cVar10 = ' ';
        do {
          cVar3 = *pcVar32;
          uVar23 = uVar12 + 1;
          *(char *)((int)&local_1fa4 + uVar12) = cVar10;
          if (0x9d < uVar12) break;
          uVar12 = uVar23;
          pcVar32 = pcVar32 + 1;
          cVar10 = cVar3;
        } while (cVar3 != '\0');
      }
      *(char *)((int)&local_1fa4 + uVar23) = '\0';
    }
    recovered_10018f20((char *)&local_1fa4,0xa0,DAT_100290f0);
    uVar12 = strlen((char *)&local_1fa4);
    if (uVar12 < 0xa0) {
      uVar23 = 0x9f;
      if (uVar12 != 0x9f) {
        pcVar32 = &DAT_10023c17;
        cVar10 = ' ';
        do {
          cVar3 = *pcVar32;
          uVar23 = uVar12 + 1;
          *(char *)((int)&local_1fa4 + uVar12) = cVar10;
          if (0x9d < uVar12) break;
          uVar12 = uVar23;
          pcVar32 = pcVar32 + 1;
          cVar10 = cVar3;
        } while (cVar3 != '\0');
      }
      *(char *)((int)&local_1fa4 + uVar23) = '\0';
    }
    recovered_10018f20((char *)&local_1fa4,0xa0,DAT_100290f4);
    uVar12 = strlen((char *)&local_1fa4);
    if (uVar12 < 0xa0) {
      uVar23 = 0x9f;
      if (uVar12 != 0x9f) {
        pcVar32 = str_10023c22;
        cVar10 = ' ';
        do {
          pcVar32 = pcVar32 + 1;
          cVar3 = *pcVar32;
          uVar23 = uVar12 + 1;
          *(char *)((int)&local_1fa4 + uVar12) = cVar10;
          if (0x9d < uVar12) break;
          uVar12 = uVar23;
          cVar10 = cVar3;
        } while (cVar3 != '\0');
      }
      *(char *)((int)&local_1fa4 + uVar23) = '\0';
    }
    recovered_10018f20((char *)&local_1fa4,0xa0,DAT_100290f8);
    uVar23 = recovered_10019aa8(&DAT_10023bc1,0xffffffff);
    uVar27 = 1;
    if (0x54 < local_23bc) {
      uVar27 = uVar23;
      if ((int)uVar23 < 2) {
        uVar27 = 1;
      }
      uVar27 = recovered_10000ac0(uVar40,uVar27);
      if ((int)uVar40 < (int)uVar23) {
        uVar27 = 1;
      }
    }
    recovered_100125d8(iVar42 + 0x2a,local_23b4 + 0xd1,(char *)&local_1fa4,uVar27,0x282828,1);
    iVar20 = *(int *)(param_1 + 0x5c);
    iVar29 = *(int *)(param_1 + 0x60);
    iVar14 = *(int *)(param_1 + 0x58);
    iVar44 = iVar20 + *(int *)(param_1 + 100) + -0x92;
    uVar23 = iVar29 - 0x5e;
    iVar26 = iVar20 + 0xee;
    iVar42 = iVar20 + 0x114;
    if (iVar20 + 0x114 < iVar44) {
      iVar42 = iVar44;
    }
    iVar44 = iVar42 - iVar20;
    iVar16 = iVar14 + 0x36;
    iVar21 = iVar44 + -0xee;
    uVar27 = (iVar44 + -0x102) / 0x12;
    if (iVar29 + -0x46 < 0x19) {
      uVar23 = 1;
    }
    if (uVar23 < 0x169) {
      local_23f0 = iVar16 + (uVar23 & 0xffff) / 3;
      local_23c8 = (uVar23 & 0xffff) / 3;
LAB_100164ec:
      local_23b4 = (uVar23 & 0x7fff) * 0xaaac >> 0x10;
    }
    else {
      local_23f0 = iVar14 + 0xc4;
      local_23b4 = 0x1b4;
      local_23c8 = 0x8e;
      if (uVar23 < 0x209) goto LAB_100164ec;
    }
    uVar40 = uVar27;
    if ((int)uVar27 < 2) {
      uVar40 = 1;
    }
    if (iVar21 < 0x26) {
      uVar40 = 1;
    }
    uVar34 = DAT_100290e4 - uVar40;
    if (DAT_100290e4 < uVar40) {
      uVar34 = 0;
    }
    if (DAT_100290e4 == 0) {
      *(undefined1 *)(param_1 + 0xafc) = 0;
      *(undefined4 *)(param_1 + 0xaf8) = 0;
      *(undefined4 *)(param_1 + 0xaf4) = 0;
    }
    else {
      if ((*(char *)(param_1 + 0xafc) != '\x01') || (DAT_100290e4 <= *(uint *)(param_1 + 0xaf4))) {
        *(undefined1 *)(param_1 + 0xafc) = 1;
        *(undefined4 *)(param_1 + 0xaf4) = 0;
      }
      if ((int)*(uint *)(param_1 + 0xaf8) < 0) {
        *(undefined4 *)(param_1 + 0xaf8) = 0;
      }
      else {
        uVar34 = uVar34 & ~((int)uVar34 >> 0x1f);
        if (uVar34 < *(uint *)(param_1 + 0xaf8)) {
          *(uint *)(param_1 + 0xaf8) = uVar34;
        }
      }
    }
    iVar41 = iVar20 + 0xf4;
    uVar40 = DAT_10024144 ^ 0xff;
    if (DAT_10024148 == 0) {
      uVar40 = 0xff;
    }
    recovered_10012e84(iVar14 + 0x22,iVar26,iVar29 + -0x44,iVar42 - iVar26,0xffffff,uVar40);
    recovered_1001297c(iVar14 + 0x22,iVar26,iVar29 + -0x44,iVar42 - iVar26,0xaeaeae);
    uVar40 = DAT_10024144 ^ 0xff;
    iVar42 = iVar20 + 0xef;
    if (DAT_10024148 == 0) {
      uVar40 = 0xff;
    }
    recovered_10012e84(iVar14 + 0x23,iVar42,iVar29 + -0x46,0x12,0xeeeeee,uVar40);
    uVar40 = recovered_10019aa8(&DAT_10023bc1,0xffffffff);
    uVar13 = 1;
    uVar34 = 1;
    if (10 < local_23c8) {
      uVar34 = uVar40;
      if ((int)uVar40 < 2) {
        uVar34 = 1;
      }
      uVar34 = recovered_10000ac0(local_23c8 - 10,uVar34);
      if ((int)(local_23c8 - 10) < (int)uVar40) {
        uVar34 = 1;
      }
    }
    recovered_100125d8(iVar14 + 0x39,iVar41,str_10023c30,uVar34,0x262626,1);
    iVar26 = local_23b4 - local_23c8;
    uVar34 = iVar26 - 10;
    uVar40 = recovered_10019aa8(&DAT_10023bc1,0xffffffff);
    if (10 < iVar26) {
      uVar13 = uVar40;
      if ((int)uVar40 < 2) {
        uVar13 = 1;
      }
      uVar13 = recovered_10000ac0(uVar34,uVar13);
      if ((int)uVar34 < (int)uVar40) {
        uVar13 = 1;
      }
    }
    recovered_100125d8(local_23f0 + 3,iVar41,str_10023c37,uVar13,0x262626,1);
    iVar17 = uVar23 - local_23b4;
    uVar43 = iVar17 - 8;
    uVar40 = recovered_10019aa8(&DAT_10023bc1,0xffffffff);
    uVar13 = 1;
    iVar29 = local_23b4 + iVar16 + 3;
    if (8 < iVar17) {
      uVar13 = uVar40;
      if ((int)uVar40 < 2) {
        uVar13 = 1;
      }
      uVar13 = recovered_10000ac0(uVar43,uVar13);
      if ((int)uVar43 < (int)uVar40) {
        uVar13 = 1;
      }
    }
    recovered_100125d8(iVar29,iVar41,str_10023c43,uVar13,0x262626,1);
    uVar40 = DAT_10024144 ^ 0xff;
    if (DAT_10024148 == 0) {
      uVar40 = 0xff;
    }
    recovered_10012e84(local_23f0 + -2,iVar42,1,0x12,0xbcbcbc,uVar40);
    uVar40 = DAT_10024144 ^ 0xff;
    if (DAT_10024148 == 0) {
      uVar40 = 0xff;
    }
    recovered_10012e84(local_23b4 + iVar16 + -2,iVar42,1,0x12,0xbcbcbc,uVar40);
    iVar20 = iVar20 + 0x106;
    uVar40 = 0;
    do {
      iVar42 = uVar40 + *(int *)(param_1 + 0xaf8);
      if ((iVar42 < 0) || ((int)DAT_100290e4 <= iVar42)) break;
      iVar41 = iVar42 * 0x571;
      bVar47 = *(char *)(param_1 + 0xafc) == '\x01';
      iVar45 = param_1;
      if (bVar47) {
        iVar45 = *(int *)(param_1 + 0xaf4);
      }
      if (bVar47 && iVar42 == iVar45) {
        uVar13 = 0xffffff;
        uVar15 = 0xeeab65;
      }
      else {
        uVar15 = 0xfdf2eb;
        if ((uVar40 & 1) == 0) {
          uVar15 = 0xffffff;
        }
        uVar13 = 0x1e1e1e;
      }
      uVar36 = DAT_10024144 ^ 0xff;
      if (DAT_10024148 == 0) {
        uVar36 = 0xff;
      }
      recovered_10012e84(iVar16,iVar20 + -5,uVar23,0x12,uVar15,uVar36);
      recovered_1001a044((undefined1 *)&local_1fa4,(int)(&DAT_100291ed + iVar41));
      uVar15 = DAT_10024144 ^ 0xff;
      if (DAT_10024148 == 0) {
        uVar15 = 0xff;
      }
      recovered_10012e84(iVar14 + 0x39,iVar20 + -1,8,8,local_1fa4 & 0xffffff,uVar15);
      uVar15 = recovered_10019aa8(&DAT_10023bc1,0xffffffff);
      uVar28 = 1;
      uVar36 = 1;
      if (0x16 < local_23c8) {
        uVar36 = 1;
        if (1 < (int)uVar15) {
          uVar36 = uVar15;
        }
        uVar36 = recovered_10000ac0(local_23c8 - 0x16,uVar36);
        if ((int)(local_23c8 - 0x16) < (int)uVar15) {
          uVar36 = 1;
        }
      }
      recovered_100125d8(iVar14 + 0x47,iVar20,&DAT_100291ed + iVar41,uVar36,uVar13,1);
      uVar15 = recovered_10019aa8(&DAT_10023bc1,0xffffffff);
      if (10 < iVar26) {
        uVar36 = 1;
        if (1 < (int)uVar15) {
          uVar36 = uVar15;
        }
        uVar28 = recovered_10000ac0(uVar34,uVar36);
        if ((int)uVar34 < (int)uVar15) {
          uVar28 = 1;
        }
      }
      uVar36 = 1;
      recovered_100125d8(local_23f0 + 3,iVar20,&DAT_100290fc + iVar41,uVar28,uVar13,1);
      uVar15 = recovered_10019aa8(&DAT_10023bc1,0xffffffff);
      if (8 < iVar17) {
        uVar36 = 1;
        if (1 < (int)uVar15) {
          uVar36 = uVar15;
        }
        uVar36 = recovered_10000ac0(uVar43,uVar36);
        if ((int)uVar43 < (int)uVar15) {
          uVar36 = 1;
        }
      }
      recovered_100125d8(iVar29,iVar20,(char *)(iVar41 + ((uintptr_t)pf_module_state + 0x5c05U)),uVar36,uVar13,1);
      bVar46 = SBORROW4(iVar21,0x26);
      iVar42 = iVar44 + -0x114;
      bVar47 = iVar21 == 0x26;
      if (0x25 < iVar21) {
        uVar40 = uVar40 + 1;
        iVar20 = iVar20 + 0x12;
        bVar46 = SBORROW4(uVar27,uVar40);
        iVar42 = uVar27 - uVar40;
        bVar47 = uVar27 == uVar40;
      }
    } while (!bVar47 && iVar42 < 0 == bVar46);
    iVar20 = *(int *)(param_1 + 0x58);
    iVar44 = *(int *)(param_1 + 0x5c);
    iVar42 = *(int *)(param_1 + 100);
    recovered_1001a1e4(&local_1fa4,param_1);
    uVar23 = DAT_10024144 ^ 0xff;
    if (DAT_10024148 == 0) {
      uVar23 = 0xff;
    }
    iVar26 = iVar44 + iVar42 + -0x92;
    iVar42 = iVar44 + 0x114;
    if (iVar44 + 0x114 < iVar26) {
      iVar42 = iVar26;
    }
    iVar26 = (iVar42 - iVar44) + -0x12d;
    if ((iVar42 - iVar44) + -0xee < 0x26) {
      iVar26 = -0x19;
    }
    iVar20 = iVar20 + 0x28;
    iVar42 = iVar26 + -2;
    if (iVar26 < 0x14) {
      iVar42 = 0x12;
    }
    recovered_10012e84(iVar20,iVar44 + 0x106,0xc,iVar42,0xe4e4e4,uVar23);
    recovered_1001297c(iVar20,iVar44 + 0x106,0xc,iVar42,0xacacac);
    uVar27 = local_1f9c;
    iVar20 = local_1fa0;
    uVar23 = local_1fa4;
    uVar40 = DAT_10024144 ^ 0xff;
    if (DAT_10024148 == 0) {
      uVar40 = 0xff;
    }
    recovered_10012e84(local_1fa4 + 1,local_1fa0 + 1,local_1f9c - 2,local_1f98 + -2,0xbebebe,uVar40)
    ;
    recovered_1001297c(uVar23,iVar20,uVar27,local_1f98,0x747474);
    uVar23 = 1;
    iVar42 = *(int *)(param_1 + 0x5c);
    iVar44 = iVar42 + *(int *)(param_1 + 100) + -0x92;
    iVar20 = iVar42 + 0x114;
    if (iVar42 + 0x114 < iVar44) {
      iVar20 = iVar44;
    }
    iVar44 = (iVar20 - iVar42) + -0x102;
    if ((iVar20 - iVar42) + -0xee < 0x26) {
      iVar44 = 0x12;
    }
    recovered_10019058(*(int *)(param_1 + 0x58) + 0x28,iVar42 + iVar44 + 0xdb,0xc,0xe,1);
    iVar42 = *(int *)(param_1 + 0x5c);
    iVar44 = iVar42 + *(int *)(param_1 + 100) + -0x92;
    iVar20 = iVar42 + 0x114;
    if (iVar42 + 0x114 < iVar44) {
      iVar20 = iVar44;
    }
    iVar44 = (iVar20 - iVar42) + -0x102;
    if ((iVar20 - iVar42) + -0xee < 0x26) {
      iVar44 = 0x12;
    }
    recovered_10019058(*(int *)(param_1 + 0x58) + 0x28,iVar42 + iVar44 + 0xeb,0xc,0xe,0);
    iVar20 = *(int *)(param_1 + 0x60);
    iVar42 = *(int *)(param_1 + 0x58);
    uVar27 = DAT_10024144 ^ 0xff;
    iVar26 = *(int *)(param_1 + 0x5c) + *(int *)(param_1 + 100);
    if (DAT_10024148 == 0) {
      uVar27 = 0xff;
    }
    recovered_10012e84(iVar42 + 0x22,iVar26 + -0x86,iVar20 + -0x44,0x68,0xe7e7e7,uVar27);
    recovered_1001297c(iVar42 + 0x22,iVar26 + -0x86,iVar20 + -0x44,0x68,0xc3c3c3);
    if ((*(char *)(param_1 + 0xafc) == '\x01') &&
       (uVar27 = *(uint *)(param_1 + 0xaf4), uVar27 < DAT_100290e4)) {
      iVar14 = iVar42 + 0x34;
      recovered_100125d8(iVar14,iVar26 + -0x76,str_10023c8c,0xffffffff,0x282828,1);
      iVar44 = uVar27 * 0x571;
      uVar23 = recovered_10019aa8(&DAT_10023bc1,0xffffffff);
      uVar27 = 1;
      if (0xb4 < iVar20) {
        uVar27 = uVar23;
        if ((int)uVar23 < 2) {
          uVar27 = 1;
        }
        uVar27 = recovered_10000ac0(iVar20 - 0xb4U,uVar27);
        if ((int)(iVar20 - 0xb4U) < (int)uVar23) {
          uVar27 = 1;
        }
      }
      recovered_100125d8(iVar42 + 0x80,iVar26 + -0x76,&DAT_100290fc + iVar44,uVar27,0x282828,1);
      iVar21 = iVar26 + -0x60;
      recovered_100125d8(iVar14,iVar21,str_10023c94,0xffffffff,0x282828,1);
      recovered_1001a044((undefined1 *)&local_1fa4,(int)(&DAT_100291ed + iVar44));
      uVar23 = DAT_10024144 ^ 0xff;
      if (DAT_10024148 == 0) {
        uVar23 = 0xff;
      }
      recovered_10012e84(iVar42 + 0x80,iVar26 + -0x5d,8,8,local_1fa4 & 0xffffff,uVar23);
      iVar29 = iVar42 + 0x90;
      recovered_100125d8(iVar29,iVar21,&DAT_100291ed + iVar44,0x18,0x282828,1);
      if (iVar20 < 0x254) {
        uVar23 = 1;
        recovered_100125d8(iVar14,iVar26 + -0x4a,str_10023c9c,0xffffffff,0x282828,1);
        uVar27 = recovered_10019aa8(&DAT_10023bc1,0xffffffff);
        uVar34 = iVar20 - 0xc4;
        uVar40 = 1;
        if (0xc4 < iVar20) {
          uVar40 = uVar27;
          if ((int)uVar27 < 2) {
            uVar40 = 1;
          }
          uVar40 = recovered_10000ac0(uVar34,uVar40);
          if ((int)uVar34 < (int)uVar27) {
            uVar40 = 1;
          }
        }
        recovered_100125d8(iVar29,iVar26 + -0x4a,(char *)(iVar44 + ((uintptr_t)pf_module_state + 0x5c05U)),uVar40,0x282828,1);
        iVar26 = iVar26 + -0x34;
        recovered_100125d8(iVar14,iVar26,str_10023ca5,0xffffffff,0x282828,1);
        pcVar32 = (char *)(iVar44 + ((uintptr_t)pf_module_state + 0x5c65U));
        uVar27 = recovered_10019aa8(&DAT_10023bc1,0xffffffff);
        if (0xc4 < iVar20) {
          uVar23 = uVar27;
          if ((int)uVar27 < 2) {
            uVar23 = 1;
          }
          uVar23 = recovered_10000ac0(uVar34,uVar23);
          if ((int)uVar34 < (int)uVar27) {
            uVar23 = 1;
          }
        }
        uVar27 = 0x282828;
      }
      else {
        recovered_100125d8(iVar42 + 0x150,iVar21,str_10023c9c,0xffffffff,0x282828,1);
        uVar27 = recovered_10019aa8(&DAT_10023bc1,0xffffffff);
        uVar23 = 1;
        if (1 < (int)uVar27) {
          uVar23 = uVar27;
        }
        uVar23 = recovered_10000ac0(iVar20 - 0x1e4U,uVar23);
        if ((int)(iVar20 - 0x1e4U) < (int)uVar27) {
          uVar23 = 1;
        }
        recovered_100125d8(iVar42 + 0x1b0,iVar21,(char *)(iVar44 + ((uintptr_t)pf_module_state + 0x5c05U)),uVar23,0x282828,1);
        iVar26 = iVar26 + -0x46;
        recovered_100125d8(iVar14,iVar26,str_10023ca5,0xffffffff,0x282828,1);
        uVar40 = recovered_10019aa8(&DAT_10023bc1,0xffffffff);
        uVar23 = 1;
        if (1 < (int)uVar40) {
          uVar23 = uVar40;
        }
        uVar23 = recovered_10000ac0(iVar20 - 0xc4U,uVar23);
        uVar27 = 0x282828;
        pcVar32 = (char *)(iVar44 + ((uintptr_t)pf_module_state + 0x5c65U));
        if ((int)(iVar20 - 0xc4U) < (int)uVar40) {
          uVar23 = 1;
        }
      }
    }
    else {
      uVar27 = recovered_10019aa8(&DAT_10023bc1,0xffffffff);
      iVar26 = iVar26 + -0x76;
      iVar29 = iVar42 + 0x34;
      if (0x68 < iVar20) {
        uVar23 = uVar27;
        if ((int)uVar27 < 2) {
          uVar23 = 1;
        }
        uVar23 = recovered_10000ac0(iVar20 - 0x68U,uVar23);
        if ((int)(iVar20 - 0x68U) < (int)uVar27) {
          uVar23 = 1;
        }
      }
      pcVar32 = str_10023c81;
      uVar27 = 0x282828;
    }
LAB_10017294:
    recovered_100125d8(iVar29,iVar26,pcVar32,uVar23,uVar27,1);
    return;
  case 4:
    recovered_100125d8(uVar23,iVar20,(char *)(param_1 + 0x261),0xffffffff,0x2d2d2d,1);
    uVar27 = DAT_10024144 ^ 0xff;
    if (DAT_10024148 == 0) {
      uVar27 = 0xff;
    }
    recovered_10012e84(uVar23,iVar44 + 0x48,*(int *)(param_1 + 0x60) + -0x1c,0x1a,0xffffff,uVar27);
    recovered_1001297c(uVar23,iVar44 + 0x48,*(int *)(param_1 + 0x60) + -0x1c,0x1a,0x919191);
    recovered_100125d8(iVar42 + 0x16,iVar44 + 0x51,(char *)(param_1 + 0xa61),0xffffffff,0x141414,1);
    uVar27 = 0x5c5c5c;
    pcVar32 = str_10023a22;
    iVar20 = iVar44 + 0x78;
    break;
  case 6:
    iVar29 = *(int *)(param_1 + 100);
    iVar26 = *(int *)(param_1 + 0x60);
    uVar40 = iVar29 - 0x34;
    uVar27 = iVar26 - 0x1c;
    if ((*(int *)(param_1 + 0xb30) == 0) && (*(int *)(param_1 + 0xb2c) != 0)) {
      uVar34 = *(uint *)(param_1 + 0xb3c);
      if (uVar34 != 0) {
        unaff_r6 = *(uint *)(param_1 + 0xb40);
      }
      if ((uVar34 != 0 && unaff_r6 != 0) && (uVar34 << 2 <= *(uint *)(param_1 + 0xb44))) {
        uVar49 = recovered_10000c20(CONCAT44(unaff_r6 * ((int)uVar27 >> 0x1f) +
                                             (int)((ulonglong)uVar27 * (ulonglong)unaff_r6 >> 0x20),
                                             (int)((ulonglong)uVar27 * (ulonglong)unaff_r6)),
                                    (ulonglong)uVar34);
        uVar13 = (uint)uVar49;
        uVar43 = uVar27;
        if ((int)uVar40 < (int)(uint)uVar49) {
          uVar49 = recovered_10000c20(CONCAT44(uVar34 * ((int)uVar40 >> 0x1f) +
                                               (int)((ulonglong)uVar40 * (ulonglong)uVar34 >> 0x20),
                                               (int)((ulonglong)uVar40 * (ulonglong)uVar34)),
                                      (ulonglong)unaff_r6);
          uVar43 = (uint)uVar49;
          uVar13 = uVar40;
        }
        bVar47 = SBORROW4(uVar43,uVar27);
        iVar14 = uVar43 - uVar27;
        if ((int)uVar27 <= (int)uVar43) {
          bVar47 = SBORROW4(uVar13,uVar40);
          iVar14 = uVar13 - uVar40;
        }
        if (iVar14 < 0 == bVar47) goto LAB_10014ba0;
      }
    }
    uVar34 = *(uint *)(param_1 + 8);
    uVar13 = *(uint *)(param_1 + 0xb48);
    if (uVar34 == 0xffffffff) {
      uVar34 = DAT_10024148;
      if (DAT_10024148 < 4) goto LAB_10014b58;
LAB_10014b60:
      uVar34 = ~(uint)*(byte *)(param_1 + 5);
    }
    else {
      if (3 < uVar34) goto LAB_10014b60;
LAB_10014b58:
      if (uVar34 != 0) goto LAB_10014b60;
      uVar34 = 0xff;
    }
    recovered_10012e84(uVar23,iVar20,uVar27,uVar40,
                       uVar13 & 0xff00 | (uVar13 & 0xff) << 0x10 | (uVar13 & 0xff0000) >> 0x10,
                       uVar34 & 0xff);
LAB_10014ba0:
    recovered_1001297c(uVar23,iVar20,uVar27,uVar40,0x848484);
    if (*(int *)(param_1 + 0xb30) != 0) {
      return;
    }
    iVar14 = *(int *)(param_1 + 0xb2c);
    if (iVar14 == 0) {
      return;
    }
    uVar34 = *(uint *)(param_1 + 0xb3c);
    if (uVar34 == 0) {
      return;
    }
    uVar13 = *(uint *)(param_1 + 0xb40);
    if (uVar13 == 0) {
      return;
    }
    if (*(uint *)(param_1 + 0xb44) < uVar34 << 2) {
      return;
    }
    if (iVar29 < 0x35) {
      return;
    }
    if (iVar26 < 0x1d) {
      return;
    }
    if (*(int *)(param_1 + 0xb34) == 0) {
      return;
    }
    if (DAT_100242f8 == 0) {
      return;
    }
    uVar49 = recovered_10000c20((ulonglong)uVar27 * (ulonglong)uVar13,(ulonglong)uVar34);
    uVar43 = (uint)uVar49;
    local_23c0 = uVar27;
    if ((int)uVar40 < (int)(uint)uVar49) {
      uVar49 = recovered_10000c20((ulonglong)uVar40 * (ulonglong)uVar34,(ulonglong)uVar13);
      local_23c0 = (uint)uVar49;
      uVar43 = uVar40;
    }
    if ((int)uVar43 < 1) {
      return;
    }
    if ((int)local_23c0 < 1) {
      return;
    }
    uVar36 = iVar20 + (int)(uVar40 - uVar43) / 2;
    uVar15 = DAT_10024134;
    if ((int)uVar36 < (int)DAT_10024134) {
      uVar15 = uVar36;
    }
    if ((int)uVar36 < 0) {
      uVar15 = 0;
    }
    iVar20 = (int)(uVar27 - local_23c0) / 2;
    uVar28 = uVar23 + iVar20;
    uVar37 = uVar36 + uVar43;
    uVar27 = DAT_10024130;
    if ((int)uVar28 < (int)DAT_10024130) {
      uVar27 = uVar28;
    }
    if ((int)uVar28 < 0) {
      uVar27 = 0;
    }
    uVar30 = DAT_10024134;
    if ((int)uVar37 < (int)DAT_10024134) {
      uVar30 = uVar37;
    }
    if ((int)uVar37 < 0) {
      uVar30 = 0;
    }
    uVar38 = uVar28 + local_23c0;
    uVar37 = DAT_10024130;
    if ((int)uVar38 < (int)DAT_10024130) {
      uVar37 = uVar38;
    }
    if ((int)uVar38 < 0) {
      uVar37 = 0;
    }
    if ((int)uVar37 <= (int)uVar27) {
      return;
    }
    if ((int)uVar30 <= (int)uVar15) {
      return;
    }
    uVar38 = uVar43;
    if (uVar43 == uVar13) {
      uVar23 = uVar34;
      uVar38 = local_23c0;
    }
    if (uVar43 != uVar13 || uVar38 != uVar23) {
      recovered_10019234(uVar34,uVar13,local_23c0,uVar43);
      uVar40 = DAT_10028fcc;
      uVar23 = DAT_10028fc8;
      iVar29 = DAT_10028fc4;
      iVar44 = DAT_10024130 * 4;
      iVar26 = (uVar15 * DAT_10024130 + uVar27) * 4;
      iVar21 = uVar27 * 4 + (iVar42 + iVar20) * -4 + DAT_10028fc0;
      do {
        uVar34 = uVar15 - uVar36;
        if (uVar34 < uVar40) {
          iVar16 = *(int *)(iVar29 + uVar34 * 4);
        }
        else {
          uVar49 = recovered_10000c20((ulonglong)uVar34 * (ulonglong)*(uint *)(param_1 + 0xb40),
                                      (ulonglong)uVar43);
          iVar16 = (int)uVar49;
        }
        iVar45 = 0;
        iVar17 = DAT_100242f8 + iVar26;
        iVar41 = uVar37 - uVar27;
        uVar34 = ((uVar27 - iVar42) - iVar20) - 0xe;
        do {
          if (uVar34 < uVar23) {
            iVar18 = *(int *)(iVar21 + -0x38 + iVar45);
          }
          else {
            uVar49 = recovered_10000c20((ulonglong)uVar34 * (ulonglong)*(uint *)(param_1 + 0xb3c),
                                        (ulonglong)local_23c0);
            iVar18 = (int)uVar49;
          }
          iVar18 = *(int *)(param_1 + 0xb44) * iVar16 + iVar18 * 4;
          uVar13 = iVar18 + 3;
          if (uVar13 < *(uint *)(param_1 + 0xb34)) {
            iVar19 = iVar17 + iVar45;
            if (iVar19 != 0) {
              uVar13 = (uint)*(byte *)(iVar14 + uVar13);
            }
            if (iVar19 != 0 && uVar13 != 0) {
              pbVar31 = (byte *)(iVar14 + iVar18);
              bVar6 = pbVar31[1];
              bVar7 = pbVar31[2];
              if (uVar13 == 0xff) {
                pbVar22 = (byte *)(iVar17 + iVar45);
                *pbVar22 = *pbVar31;
                pbVar22[2] = bVar7;
                pbVar22[1] = bVar6;
              }
              else {
                uVar1 = (ushort)uVar13;
                uVar2 = uVar1 ^ 0xff;
                pbVar22 = (byte *)(iVar17 + iVar45);
                *pbVar22 = (byte)((ulonglong)
                                  ((int)(short)uVar2 * (int)(short)(ushort)*pbVar22 +
                                   (int)(short)uVar1 * (int)(short)(ushort)*pbVar31 + 0x7f) *
                                  0x1010102 >> 0x20);
                pbVar22[1] = (byte)((ulonglong)
                                    ((int)(short)uVar2 * (int)(short)(ushort)pbVar22[1] +
                                     (int)(short)uVar1 * (int)(short)(ushort)bVar6 + 0x7f) *
                                    0x1010102 >> 0x20);
                pbVar22[2] = (byte)((ulonglong)
                                    ((int)(short)uVar2 * (int)(short)(ushort)pbVar22[2] +
                                     (int)(short)uVar1 * (int)(short)(ushort)bVar7 + 0x7f) *
                                    0x1010102 >> 0x20);
              }
              *(undefined1 *)(iVar19 + 3) = 0xff;
            }
          }
          uVar34 = uVar34 + 1;
          iVar45 = iVar45 + 4;
          iVar41 = iVar41 + -1;
        } while (iVar41 != 0);
        iVar26 = iVar26 + iVar44;
        uVar15 = uVar15 + 1;
      } while (uVar15 != uVar30);
      return;
    }
    iVar21 = uVar27 - uVar28;
    iVar26 = (uVar15 * DAT_10024130 + uVar27) * 4;
    iVar29 = uVar37 - uVar27;
    iVar42 = uVar27 * 4 + (iVar42 + iVar20) * -4 + -0x35;
    iVar44 = ((uVar15 - iVar44) - (int)(uVar40 - uVar43) / 2) + -0x26;
    iVar20 = DAT_10024130 * 4;
    do {
      iVar16 = *(int *)(param_1 + 0xb44);
      if (*(uint *)(param_1 + 0xb34) <= iVar16 * (uVar15 - uVar36) + iVar21 * 4) {
        return;
      }
      iVar17 = 0;
      iVar45 = DAT_100242f8 + iVar26;
      iVar41 = iVar29;
      do {
        pbVar31 = *(byte **)(param_1 + 0xb34);
        if (pbVar31 <= (byte *)(iVar16 * iVar44 + iVar42 + iVar17)) break;
        iVar18 = iVar45 + iVar17;
        if (iVar18 != 0) {
          pbVar31 = (byte *)(iVar16 * iVar44 + iVar14 + iVar42 + iVar17);
          uVar27 = (uint)*pbVar31;
        }
        if (iVar18 != 0 && uVar27 != 0) {
          bVar6 = pbVar31[-2];
          bVar7 = pbVar31[-1];
          if (uVar27 == 0xff) {
            pbVar22 = (byte *)(iVar45 + iVar17);
            *pbVar22 = pbVar31[-3];
            pbVar22[2] = bVar7;
            pbVar22[1] = bVar6;
          }
          else {
            uVar1 = (ushort)uVar27;
            pbVar22 = (byte *)(iVar45 + iVar17);
            uVar2 = uVar1 ^ 0xff;
            *pbVar22 = (byte)((ulonglong)
                              ((int)(short)uVar2 * (int)(short)(ushort)*pbVar22 +
                               (int)(short)uVar1 * (int)(short)(ushort)pbVar31[-3] + 0x7f) *
                              0x1010102 >> 0x20);
            pbVar22[1] = (byte)((ulonglong)
                                ((int)(short)uVar2 * (int)(short)(ushort)pbVar22[1] +
                                 (int)(short)uVar1 * (int)(short)(ushort)bVar6 + 0x7f) * 0x1010102
                               >> 0x20);
            pbVar22[2] = (byte)((ulonglong)
                                ((int)(short)uVar2 * (int)(short)(ushort)pbVar22[2] +
                                 (int)(short)uVar1 * (int)(short)(ushort)bVar7 + 0x7f) * 0x1010102
                               >> 0x20);
          }
          *(undefined1 *)(iVar18 + 3) = 0xff;
        }
        iVar41 = iVar41 + -1;
        iVar17 = iVar17 + 4;
      } while (iVar41 != 0);
      iVar26 = iVar26 + iVar20;
      iVar44 = iVar44 + 1;
      uVar15 = uVar15 + 1;
      if (uVar15 == uVar30) {
        return;
      }
    } while( true );
  }
  recovered_100125d8(uVar23,iVar20,pcVar32,0xffffffff,uVar27,1);
  return;
}

#undef DAT_100153c0
#undef DAT_100153c8
#undef DAT_10015950
#undef DAT_10015958
#undef DAT_10023a5a
#undef DAT_10023a6a
#undef DAT_10023a6f
#undef DAT_10023a78
#undef DAT_10023ae0
#undef DAT_10023bc1
#undef DAT_10023be6
#undef DAT_10023beb
#undef DAT_10023c0a
#undef DAT_10023c17
#undef DAT_10024130
#undef DAT_10024134
#undef DAT_10024144
#undef DAT_10024148
#undef DAT_100242f8
#undef DAT_10028fc0
#undef DAT_10028fc4
#undef DAT_10028fc8
#undef DAT_10028fcc
#undef DAT_100290e4
#undef DAT_100290e8
#undef DAT_100290ec
#undef DAT_100290f0
#undef DAT_100290f4
#undef DAT_100290f8
#undef DAT_100290fc
#undef DAT_100291ed
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_40010930
#undef Ram40010800
#undef Ram40010804
#undef Ram40010808
#undef Ram40010930
#undef UINT_4001087c
#undef UINT_400108b8
#undef UINT_400108c0
#undef UINT_400108f8
#undef str_100236d6
#undef str_1002392b
#undef str_10023a22
#undef str_10023a4f
#undef str_10023a5e
#undef str_10023a7c
#undef str_10023a82
#undef str_10023a8e
#undef str_10023a9f
#undef str_10023aaa
#undef str_10023ac5
#undef str_10023ace
#undef str_10023ad6
#undef str_10023ae5
#undef str_10023aed
#undef str_10023af6
#undef str_10023afd
#undef str_10023b04
#undef str_10023b12
#undef str_10023b1a
#undef str_10023b25
#undef str_10023b2e
#undef str_10023b3b
#undef str_10023b45
#undef str_10023b4b
#undef str_10023b58
#undef str_10023b6d
#undef str_10023b77
#undef str_10023b80
#undef str_10023b89
#undef str_10023b96
#undef str_10023b9f
#undef str_10023ba7
#undef str_10023bb0
#undef str_10023bb8
#undef str_10023bc3
#undef str_10023bd4
#undef str_10023bf0
#undef str_10023bf8
#undef str_10023c00
#undef str_10023c22
#undef str_10023c30
#undef str_10023c37
#undef str_10023c43
#undef str_10023c81
#undef str_10023c8c
#undef str_10023c94
#undef str_10023c9c
#undef str_10023ca5
#undef uStack_2328
#undef uStack_2324
#undef uStack_2320
#undef auStack_2304
#undef uStack_2120
#undef local_23f0
#undef local_23c8
#undef local_23c0
#undef local_23bc
#undef local_23b4
#undef local_23ac
#undef local_23a8
#undef local_2348
#undef local_2344
#undef local_2340
#undef local_233c
#undef local_2338
#undef local_2334
#undef local_2330
#undef local_232c
#undef local_231c
#undef local_2318
#undef local_2314
#undef local_2310
#undef local_22f4
#undef local_22f0
#undef local_22ec
#undef local_22d0
#undef local_22b8
#undef local_22a0
#undef local_2288
#undef local_2248
#undef local_2228
#undef local_2208
#undef local_21e8
#undef local_21c8
#undef local_21a8
#undef local_21a0
#undef local_2188
#undef local_2184
#undef local_2128
#undef local_2118
#undef local_20e0
#undef local_20b0
#undef local_20ac
#undef local_20a8
#undef local_2050
#undef local_1fa8
#undef local_1fa4
#undef local_1fa0
#undef local_1f9c
#undef local_1f98
#undef local_1f7c
#undef local_1f6c
#undef local_1dc0

#undef DAT_10024130
#define DAT_10024130 (*(int *)(((uintptr_t)pf_module_state + 0xb28U)))
#undef DAT_10024134
#define DAT_10024134 (*(int * *)(((uintptr_t)pf_module_state + 0xb2cU)))
#undef DAT_100242f8
#define DAT_100242f8 (*(int *)(((uintptr_t)pf_module_state + 0xcf0U)))
#undef DAT_10028fb8
#define DAT_10028fb8 (*(void * *)(((uintptr_t)pf_module_state + 0x59b0U)))
#undef DAT_10028fbc
#define DAT_10028fbc (*(uint *)(((uintptr_t)pf_module_state + 0x59b4U)))
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
 * Address: 0x10017bfc
 */

undefined4
recovered_10017bfc(int param_1,int *param_2,int param_3,int param_4,int *param_5,undefined4 *param_6
                  )

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  code *pcVar3;
  undefined4 uVar4;
  void *pvVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  int *piVar12;
  uint uVar13;
  uint uVar14;
  bool bVar15;
  bool bVar16;

  uVar4 = 0;
  iVar9 = 0;
  piVar12 = (int *)0x0;
  uVar13 = 0;
  uVar14 = 0;
  if ((0 < DAT_10024130) && (0 < (int)DAT_10024134)) {
    iVar7 = param_3;
    if (0 < param_3) {
      iVar7 = param_4;
    }
    if (0 < iVar7) {
      iVar10 = param_1 + param_3;
      iVar7 = DAT_10024130;
      if (iVar10 < DAT_10024130) {
        iVar7 = iVar10;
      }
      piVar11 = (int *)((int)param_2 + param_4);
      if (iVar10 < 0) {
        iVar7 = 0;
      }
      piVar8 = DAT_10024134;
      if ((int)piVar11 < (int)DAT_10024134) {
        piVar8 = piVar11;
      }
      if ((int)piVar11 < 0) {
        piVar8 = (int *)0x0;
      }
      iVar10 = DAT_10024130;
      if (param_1 < DAT_10024130) {
        iVar10 = param_1;
      }
      if (param_1 < 0) {
        iVar10 = 0;
      }
      piVar11 = DAT_10024134;
      if ((int)param_2 < (int)DAT_10024134) {
        piVar11 = param_2;
      }
      if ((int)param_2 < 0) {
        piVar11 = (int *)0x0;
      }
      bVar16 = SBORROW4(iVar7,iVar10);
      iVar1 = iVar7 - iVar10;
      bVar15 = iVar7 == iVar10;
      if (iVar10 < iVar7) {
        bVar16 = SBORROW4((int)piVar8,(int)piVar11);
        iVar1 = (int)piVar8 - (int)piVar11;
        bVar15 = piVar8 == piVar11;
      }
      if (!bVar15 && iVar1 < 0 == bVar16) {
        uVar14 = (int)piVar8 - (int)piVar11;
        uVar13 = iVar7 - iVar10;
        iVar9 = iVar10;
        piVar12 = piVar11;
      }
    }
  }
  if (param_6 != (undefined4 *)0x0) {
    param_2 = param_5;
  }
  if ((param_6 != (undefined4 *)0x0 && param_2 != (int *)0x0) && (DAT_100242f8 != 0)) {
    uVar6 = uVar13;
    if (0 < (int)uVar13) {
      uVar6 = uVar14;
    }
    if ((((0 < (int)uVar6) &&
         (uVar6 = (uint)((ulonglong)uVar14 * (ulonglong)uVar13),
         (int)((ulonglong)uVar14 * (ulonglong)uVar13 >> 0x20) == 0)) && (uVar6 < 0x40000000)) &&
       (uVar6 != 0)) {
      uVar6 = uVar6 << 2;
      if ((DAT_10028fbc < uVar6) || (DAT_10028fb8 == (void *)0x0)) {
        iVar7 = Ram40010800;
        if (iVar7 != 0x50414d57) {
          return 0;
        }
        iVar7 = Ram40010804;
        if (iVar7 == 0) {
          return 0;
        }
        uVar2 = Ram40010808;
        bVar15 = uVar2 < 0xc;
        if (!bVar15) {
          uVar2 = Ram40010808;
        }
        if (bVar15 || uVar2 < 0x58) {
          return 0;
        }
        pcVar3 = (code *)UINT_40010854;
        if (pcVar3 == (code *)0x0) {
          return 0;
        }
        pvVar5 = (*pcVar3)(DAT_10028fb8,uVar6);
        if (pvVar5 == (void *)0x0) {
          return 0;
        }
        DAT_10028fb8 = pvVar5;
        DAT_10028fbc = uVar6;
      }
      iVar7 = 0;
      uVar6 = 0;
      do {
        memcpy((void *)((int)DAT_10028fb8 + iVar7),
                           (void *)(DAT_100242f8 +
                                   (DAT_10024130 * ((int)piVar12 + uVar6) + iVar9) * 4),uVar13 * 4);
        pvVar5 = DAT_10028fb8;
        uVar6 = uVar6 + 1;
        iVar7 = iVar7 + uVar13 * 4;
      } while (uVar14 != uVar6);
      param_5[2] = uVar13;
      param_5[1] = (int)piVar12;
      param_5[3] = uVar14;
      *param_5 = iVar9;
      *param_6 = pvVar5;
      uVar4 = 1;
    }
  }
  return uVar4;
}

#undef DAT_10024130
#undef DAT_10024134
#undef DAT_100242f8
#undef DAT_10028fb8
#undef DAT_10028fbc
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef Ram40010800
#undef Ram40010804
#undef Ram40010808
#undef UINT_40010854

#undef DAT_10018600
#define DAT_10018600 (*(uint64_t *)(0x10018600U))
#undef DAT_10018608
#define DAT_10018608 (*(uint64_t *)(0x10018608U))
#undef DAT_10024130
#define DAT_10024130 (*(uint *)(((uintptr_t)pf_module_state + 0xb28U)))
#undef DAT_10024134
#define DAT_10024134 (*(uint *)(((uintptr_t)pf_module_state + 0xb2cU)))
#undef DAT_10024144
#define DAT_10024144 (*(byte *)(((uintptr_t)pf_module_state + 0xb3cU)))
#undef DAT_10024148
#define DAT_10024148 (*(int *)(((uintptr_t)pf_module_state + 0xb40U)))
#undef DAT_100242f8
#define DAT_100242f8 (*(int *)(((uintptr_t)pf_module_state + 0xcf0U)))
#undef DAT_10024918
#define DAT_10024918 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1310U)))
#undef DAT_10024919
#define DAT_10024919 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1311U)))
#undef str_10023a38
#define str_10023a38 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x430U)))
#undef str_10023a40
#define str_10023a40 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x438U)))
#undef str_10023a47
#define str_10023a47 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x43fU)))
#define local_134 (*(uint *)(frame + 28))
#define local_130 (*(uint *)(frame + 32))
#define local_124 (*(uint *)(frame + 44))
#define local_120 (*(uint *)(frame + 48))
#define local_117 (*(char (*)[247])(frame + 57))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10017e70
 */

void recovered_10017e70(int param_1)

{
  unsigned char frame[368] __attribute__((aligned(16))) = {0};

  char cVar1;
  undefined8 uVar2;
  int iVar3;
  ulong uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  int iVar9;
  uint uVar10;
  undefined8 *puVar11;
  undefined4 *puVar12;
  char *pcVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  char cVar17;
  int iVar18;
  int iVar19;
  undefined8 *puVar20;
  uint uVar21;
  uint uVar22;
  int iVar23;
  uint uVar24;
  int iVar25;

  uVar10 = *(int *)(param_1 + 0x60) - 0x26;
  uVar6 = *(int *)(param_1 + 100) - 0x6a;
  iVar18 = (int)(((ulonglong)uVar10 << 0x20) + (longlong)(int)uVar10 * -0x2df2df2d >> 0x20);
  iVar9 = (int)(((ulonglong)uVar6 << 0x20) + (longlong)(int)uVar6 * -0x22983759 >> 0x20);
  iVar7 = 1;
  iVar14 = *(int *)(param_1 + 0x5c);
  local_134 = *(uint *)(param_1 + 0x58);
  iVar19 = 0;
  iVar23 = 0;
  iVar3 = *(int *)(param_1 + 0xaf0);
  if (0x49 < (int)uVar6) {
    iVar7 = (iVar9 >> 6) - (iVar9 >> 0x1f);
  }
  iVar9 = (iVar18 >> 6) - (iVar18 >> 0x1f);
  if (iVar9 < 2) {
    iVar9 = 1;
  }
  local_130 = local_134 + 0x22;
  do {
    if ((&DAT_10024918)[iVar19] == '\x01') {
      iVar18 = iVar23 * 0x5c + *(int *)(param_1 + 0x58);
      if (*(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60) + -0xe < iVar18 + 0x76) break;
      iVar25 = *(int *)(param_1 + 0x5c);
      iVar5 = iVar25 + 0x22;
      uVar6 = DAT_10024144 ^ 0xff;
      if (DAT_10024148 == 0) {
        uVar6 = 0xff;
      }
      recovered_10012e84(iVar18 + 0x22,iVar5,0x54,0x1a,0xfafafa,uVar6);
      local_124 = local_124 & 0xff000000 | 0x969696;
      recovered_1001297c(iVar18 + 0x22,iVar5,0x54,0x1a,local_124);
      local_120 = local_120 & 0xff000000 | 0x202020;
      recovered_100125d8(iVar18 + 0x2a,iVar25 + 0x2b,&DAT_10024919 + iVar19,0xb,local_120,1);
      iVar23 = iVar23 + 1;
    }
    iVar19 = iVar19 + 0x124;
  } while (iVar19 != 0xdb0);
  if (*(char *)(param_1 + 0x260) == '\0') {
    uVar6 = *(uint *)(param_1 + 0x25c);
    builtin_strncpy(local_117 + 4,"ce ",4);
    builtin_strncpy(local_117,"devi",4);
    if ((int)uVar6 < 0) {
      uVar8 = strlen(local_117);
      if (uVar8 < 0xf3) {
        iVar18 = 0xf2;
        if (uVar8 != 0xf2) {
          local_117[uVar8] = '-';
          iVar18 = uVar8 + 1;
        }
        local_117[iVar18] = '\0';
      }
      uVar6 = -uVar6;
    }
    recovered_10018f20(local_117,0xf3,uVar6);
    uVar8 = strlen(local_117);
    if (uVar8 < 0xf3) {
      iVar18 = 0xf2;
      if (uVar8 != 0xf2) {
        local_117[uVar8] = ' ';
        iVar18 = uVar8 + 1;
        if (uVar8 < 0xf1) {
          local_117[iVar18] = '/';
          iVar18 = uVar8 + 2;
        }
      }
      local_117[iVar18] = '\0';
    }
    uVar8 = strlen(local_117);
    if (0xf2 < uVar8) goto LAB_100181a0;
    if ((uVar8 != 0xf2) && (*(char *)(param_1 + 0x78) != '\0')) {
      uVar4 = uVar8;
      pcVar13 = (char *)(param_1 + 0x79);
      cVar17 = *(char *)(param_1 + 0x78);
      do {
        cVar1 = *pcVar13;
        uVar8 = uVar4 + 1;
        local_117[uVar4] = cVar17;
        if (0xf0 < uVar4) break;
        uVar4 = uVar8;
        pcVar13 = pcVar13 + 1;
        cVar17 = cVar1;
      } while (cVar1 != '\0');
    }
  }
  else {
    uVar8 = 0xf;
    builtin_strncpy(local_117,"mounted devices",0xf);
  }
  local_117[uVar8] = '\0';
LAB_100181a0:
  recovered_100125d8(local_130,iVar14 + 0x44,local_117,0xffffffff,0x2e2e2e,1);
  iVar18 = *(int *)(param_1 + 0x60);
  uVar10 = (local_134 + iVar18) - 0xe;
  uVar6 = DAT_10024130;
  if ((int)uVar10 < (int)DAT_10024130) {
    uVar6 = uVar10;
  }
  if ((int)uVar10 < 0) {
    uVar6 = 0;
  }
  local_120 = iVar14 + 0x57U;
  if ((int)DAT_10024134 <= (int)(iVar14 + 0x57U)) {
    local_120 = DAT_10024134;
  }
  if (iVar14 < -0x57) {
    local_120 = 0;
  }
  uVar10 = DAT_10024134;
  if ((int)(iVar14 + 0x56U) < (int)DAT_10024134) {
    uVar10 = iVar14 + 0x56U;
  }
  if (iVar14 < -0x56) {
    uVar10 = 0;
  }
  uVar15 = local_130;
  if ((int)DAT_10024130 <= (int)local_130) {
    uVar15 = DAT_10024130;
  }
  if ((int)local_134 < -0x22) {
    uVar15 = 0;
  }
  if (((DAT_100242f8 != 0) && ((int)uVar15 < (int)uVar6)) && ((int)uVar10 < (int)local_120)) {
    uVar22 = uVar6 - uVar15;
    uVar24 = uVar22 & 0xfffffffc;
    iVar14 = DAT_10024130 * 4;
    puVar20 = (undefined8 *)(DAT_100242f8 + (uVar10 * DAT_10024130 + uVar15) * 4);
    local_130 = uVar15 + uVar24;
    iVar18 = DAT_100242f8 + uVar10 * DAT_10024130 * 4;
    do {
      puVar11 = puVar20;
      uVar16 = uVar24;
      uVar21 = uVar15;
      if (uVar22 < 4) {
LAB_100182f0:
        iVar19 = uVar6 - uVar21;
        puVar12 = (undefined4 *)(iVar18 + uVar21 * 4);
        do {
          *puVar12 = 0xffcccccc;
          iVar19 = iVar19 + -1;
          puVar12 = puVar12 + 1;
        } while (iVar19 != 0);
      }
      else {
        do {
          uVar2 = (0xffccccccffccccccU);
          uVar16 = uVar16 - 4;
          *puVar11 = (0xffccccccffccccccU);
          puVar11[1] = uVar2;
          puVar11 = puVar11 + 2;
        } while (uVar16 != 0);
        uVar21 = local_130;
        if (uVar22 != uVar24) goto LAB_100182f0;
      }
      uVar10 = uVar10 + 1;
      iVar18 = iVar18 + iVar14;
      puVar20 = (undefined8 *)((int)puVar20 + iVar14);
    } while (uVar10 != local_120);
    iVar18 = *(int *)(param_1 + 0x60);
    local_124 = uVar6;
  }
  iVar19 = *(int *)(param_1 + 100);
  uVar10 = iVar19 - 0x6a;
  iVar23 = *(int *)(param_1 + 0xaf0);
  iVar18 = (int)(((ulonglong)(iVar18 - 0x26U) << 0x20) +
                 (longlong)(int)(iVar18 - 0x26U) * -0x2df2df2d >> 0x20);
  iVar14 = ((int)((ulonglong)((longlong)(int)uVar10 * 0x22983759) >> 0x20) - iVar19) + 0x6a;
  iVar25 = (iVar14 >> 6) - (iVar14 >> 0x1f);
  uVar6 = (iVar18 >> 6) - (iVar18 >> 0x1f);
  iVar14 = -1;
  if (0x49 < (int)uVar10) {
    iVar14 = iVar25;
  }
  uVar15 = *(uint *)(param_1 + 0xaf8);
  uVar22 = 1;
  if (1 < (int)uVar6) {
    uVar22 = uVar6;
  }
  iVar18 = iVar23 + 2;
  iVar14 = uVar22 * iVar14 + iVar18;
  if (0x7fffffff < uVar15) {
    uVar15 = 0;
    *(undefined4 *)(param_1 + 0xaf8) = 0;
  }
  if ((iVar14 < 1) || (iVar14 < (int)uVar15)) {
    if (iVar14 < 1) {
      iVar14 = 0;
    }
    *(int *)(param_1 + 0xaf8) = iVar14;
  }
  if (0 < iVar9 * iVar7) {
    uVar6 = 0;
    do {
      iVar19 = *(int *)(param_1 + 0x58);
      uVar10 = *(int *)(param_1 + 0x60) - 0x26;
      iVar18 = *(int *)(param_1 + 0x5c);
      iVar14 = (int)(((ulonglong)uVar10 << 0x20) + (longlong)(int)uVar10 * -0x2df2df2d >> 0x20);
      uVar22 = (iVar14 >> 6) - (iVar14 >> 0x1f);
      if ((int)uVar22 < 2) {
        uVar22 = 1;
      }
      uVar10 = recovered_10000ac0(uVar6,uVar22);
      iVar14 = uVar6 + *(int *)(param_1 + 0xaf8);
      if (iVar3 + 2 <= iVar14) goto LAB_1001862c;
      iVar19 = (uVar6 - uVar10 * uVar22) * 0x4e + iVar19;
      iVar18 = uVar10 * 0x4a + iVar18;
      iVar23 = iVar18 + 0x60;
      if (iVar14 == 0) {
        recovered_10018860(iVar19 + 0x2c,iVar23,(char *)0x0,1);
        pcVar13 = str_10023a40;
        if ((*(char *)(param_1 + 0x78) == '\0') &&
           (pcVar13 = str_10023a38, *(char *)(param_1 + 0x260) != '\0')) {
          pcVar13 = str_10023a40;
        }
        uVar10 = local_130 & 0xff000000 | 0x1c1c1c;
        local_130 = uVar10;
LAB_100183f8:
        recovered_10012dc0(iVar19 + 0x22,iVar18 + 0x86,0x44,(byte *)pcVar13,uVar10);
      }
      else {
        if (iVar14 == 1) {
          recovered_10018860(iVar19 + 0x2c,iVar23,(char *)0x0,0);
          uVar10 = local_120 & 0xff000000 | 0x1c1c1c;
          pcVar13 = str_10023a47;
          local_120 = uVar10;
          goto LAB_100183f8;
        }
        iVar25 = iVar14 + -2;
        if (((1 < iVar14) && ((*(byte *)(param_1 + 0xafc) & 1) != 0)) &&
           (iVar25 == *(int *)(param_1 + 0xaf4))) {
          uVar10 = DAT_10024144 ^ 0xff;
          if (DAT_10024148 == 0) {
            uVar10 = 0xff;
          }
          recovered_10012e84(iVar19 + 0x1e,iVar18 + 0x5c,0x44,0x40,0xe8e8e8,uVar10);
          local_134 = local_134 & 0xff000000 | 0x8e8e8e;
          recovered_1001297c(iVar19 + 0x1e,iVar18 + 0x5c,0x44,0x40,local_134);
        }
        recovered_10018860(iVar19 + 0x2c,iVar23,(char *)(*(int *)(param_1 + 0xaec) + iVar25 * 0x1f8)
                           ,0);
        local_124 = local_124 & 0xff000000 | 0x1c1c1c;
        recovered_10012dc0(iVar19 + 0x22,iVar18 + 0x86,0x44,
                           (byte *)(*(int *)(param_1 + 0xaec) + iVar25 * 0x1f8),local_124);
      }
      uVar6 = uVar6 + 1;
    } while (iVar9 * iVar7 != uVar6);
    uVar6 = *(int *)(param_1 + 0x60) - 0x26;
    iVar3 = (int)(((ulonglong)uVar6 << 0x20) + (longlong)(int)uVar6 * -0x2df2df2d >> 0x20);
    uVar22 = (iVar3 >> 6) - (iVar3 >> 0x1f);
    if ((int)uVar22 < 2) {
      uVar22 = 1;
    }
LAB_1001862c:
    iVar19 = *(int *)(param_1 + 100);
    iVar23 = *(int *)(param_1 + 0xaf0);
    uVar10 = iVar19 - 0x6a;
    iVar3 = ((int)((ulonglong)((longlong)(int)uVar10 * 0x22983759) >> 0x20) - iVar19) + 0x6a;
    iVar25 = (iVar3 >> 6) - (iVar3 >> 0x1f);
    iVar18 = iVar23 + 2;
  }
  if ((int)uVar10 < 0x4a) {
    iVar25 = -1;
  }
  iVar7 = (int)(((ulonglong)uVar10 << 0x20) + (longlong)(int)uVar10 * -0x22983759 >> 0x20);
  iVar3 = 1;
  iVar14 = *(int *)(param_1 + 0x58);
  iVar9 = iVar19 + -0x88;
  if (0x49 < (int)uVar10) {
    iVar3 = (iVar7 >> 6) - (iVar7 >> 0x1f);
  }
  iVar7 = *(int *)(param_1 + 0x5c) + 0x5e;
  if (iVar19 + -0x84 < 0x16) {
    iVar9 = 0x12;
  }
  iVar19 = iVar9;
  iVar5 = iVar7;
  if (((-2 < iVar23) && ((int)(uVar22 * iVar3) < iVar18)) &&
     (iVar23 = uVar22 * iVar25 + iVar18, 0 < iVar23)) {
    iVar19 = recovered_10000b48(uVar22 * iVar3 * iVar9,iVar18);
    if (iVar19 < 0x13) {
      iVar19 = 0x12;
    }
    if (iVar9 <= iVar19) {
      iVar19 = iVar9;
    }
    iVar5 = recovered_10000b48((iVar9 - iVar19) * *(int *)(param_1 + 0xaf8),iVar23);
    iVar5 = iVar5 + iVar7;
  }
  iVar3 = iVar14 + 0xe;
  uVar6 = DAT_10024144 ^ 0xff;
  if (DAT_10024148 == 0) {
    uVar6 = 0xff;
  }
  recovered_10012e84(iVar3,iVar7,0xc,iVar9,0xe4e4e4,uVar6);
  recovered_1001297c(iVar3,iVar7,0xc,iVar9,0xacacac);
  uVar6 = DAT_10024144 ^ 0xff;
  if (DAT_10024148 == 0) {
    uVar6 = 0xff;
  }
  recovered_10012e84(iVar14 + 0xf,iVar5 + 1,10,iVar19 + -2,0xbebebe,uVar6);
  recovered_1001297c(iVar3,iVar5,0xc,iVar19,0x747474);
  recovered_10019058(*(int *)(param_1 + 0x58) + 0xe,
                     *(int *)(param_1 + 0x5c) + *(int *)(param_1 + 100) + -0x26,0xc,0xe,1);
  recovered_10019058(*(int *)(param_1 + 0x58) + 0xe,
                     *(int *)(param_1 + 0x5c) + *(int *)(param_1 + 100) + -0x16,0xc,0xe,0);
  return;
}

#undef DAT_10018600
#undef DAT_10018608
#undef DAT_10024130
#undef DAT_10024134
#undef DAT_10024144
#undef DAT_10024148
#undef DAT_100242f8
#undef DAT_10024918
#undef DAT_10024919
#undef str_10023a38
#undef str_10023a40
#undef str_10023a47
#undef local_134
#undef local_130
#undef local_124
#undef local_120
#undef local_117

#undef DAT_10023774
#define DAT_10023774 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x16cU)))
#undef DAT_10024144
#define DAT_10024144 (*(byte *)(((uintptr_t)pf_module_state + 0xb3cU)))
#undef DAT_10024148
#define DAT_10024148 (*(int *)(((uintptr_t)pf_module_state + 0xb40U)))
#define local_28 (*(undefined4 *)(frame + 24))
#define local_24 (*(char *)(frame + 28))
#define local_23 (*(char *)(frame + 29))
#define local_22 (*(char *)(frame + 30))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10018860
 */

void recovered_10018860(int param_1,int param_2,char *param_3,uint param_4)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  undefined2 uVar4;
  int iVar5;
  uint uVar6;
  byte *pbVar7;
  int *piVar8;
  char *pcVar9;
  byte *pbVar10;
  int iVar11;
  char *pcVar12;
  uint uVar13;
  byte *pbVar14;
  char *pcVar15;
  uint uVar16;
  uint uVar17;
  byte *pbVar18;
  char cVar19;
  byte bVar20;
  byte bVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;

  uVar3 = local_28;
  uVar4 = PF_PART2(local_28, 2);
  local_28 = CONCAT22(PF_PART2(local_28, 2),0x3f);
  iVar5 = local_28;
  PF_PART1(local_28, 3) = SUB41(uVar3,3);
  bVar20 = PF_PART1(local_28, 3);
  if (param_4 == 0) {
    if (param_3 == (char *)0x0) {
      local_28 = 0x464552;
      goto LAB_100188f0;
    }
    if (*(int *)(param_3 + 0x1ec) == 3) {
      uVar23 = 0xff;
      local_28 = (uint)PF_PART1(local_28, 3) << 0x18;
      local_28 = CONCAT22(PF_PART2(local_28, 2),0x4448);
      uVar13 = 0xe700;
      uVar16 = 0xc40000;
      uVar17 = 0xd2;
      uVar22 = 0x8500;
      uVar24 = 0x2a0000;
      iVar5 = local_28;
    }
    else {
      pbVar10 = (byte *)(param_3 + 0xf1);
      pbVar7 = (byte *)0x0;
      pbVar14 = (byte *)0x0;
      if (*pbVar10 != 0) {
        pbVar18 = (byte *)(param_3 + 0xf2);
        bVar21 = *pbVar10;
        do {
          bVar1 = *pbVar18;
          if (bVar21 == 0x2f) {
            pbVar14 = pbVar18 + -1;
          }
          pbVar18 = pbVar18 + 1;
          bVar21 = bVar1;
        } while (bVar1 != 0);
      }
      pbVar18 = pbVar10;
      if (pbVar14 != (byte *)0x0) {
        pbVar18 = pbVar14 + 1;
      }
      if (*pbVar18 != 0) {
        pbVar7 = (byte *)0x0;
        bVar21 = *pbVar18;
        do {
          bVar1 = pbVar18[1];
          if (bVar21 == 0x2e) {
            pbVar7 = pbVar18;
          }
          pbVar18 = pbVar18 + 1;
          bVar21 = bVar1;
        } while (bVar1 != 0);
      }
      if (pbVar7 == (byte *)0x0) {
        pbVar7 = &DAT_10023774;
      }
      uVar13 = (uint)*pbVar7;
      if (uVar13 == 0) {
        iVar11 = 0x2e;
        goto LAB_10018d28;
      }
      if (uVar13 - 0x41 < 0x1a) {
        uVar13 = uVar13 | 0x20;
      }
      if ((uVar13 == 0x2e) && (uVar13 = (uint)pbVar7[1], uVar13 != 0)) {
        if (uVar13 - 0x41 < 0x1a) {
          uVar13 = uVar13 | 0x20;
        }
        if (uVar13 == 0x61) {
          uVar13 = (uint)pbVar7[2];
          iVar11 = 0x70;
          if (uVar13 == 0) {
LAB_10018d28:
            if (iVar11 == 0) {
LAB_10018d30:
              local_28 = 0x505041;
              piVar8 = recovered_100132e8(pbVar10,*(uint *)(param_3 + 0x1f0));
              if (piVar8 != (int *)0x0) {
                recovered_10012318(piVar8,param_1,param_2 + -2,0x2a,0x24);
                return;
              }
              uVar23 = 0xff;
              uVar13 = 0xce00;
              uVar16 = 0xe60000;
              uVar17 = 0x84;
              uVar22 = 0x3e00;
              uVar24 = 0x630000;
              iVar5 = local_28;
              goto LAB_10018908;
            }
          }
          else {
            if (uVar13 - 0x41 < 0x1a) {
              uVar13 = uVar13 | 0x20;
            }
            if (uVar13 == 0x70) {
              uVar13 = (uint)pbVar7[3];
              if (uVar13 == 0) goto LAB_10018d28;
              if (uVar13 - 0x41 < 0x1a) {
                uVar13 = uVar13 | 0x20;
              }
              if ((uVar13 != 0x70) || (pbVar7[4] != 0)) goto LAB_10018d74;
              goto LAB_10018d30;
            }
          }
        }
      }
LAB_10018d74:
      PF_PART3(local_28, 1) = SUB43(iVar5,1);
      if ((*(int *)(param_3 + 0x1ec) == 2) || ((param_3[0x1e8] & 2U) != 0)) {
        uVar23 = 0xd7;
        local_28 = (uint)PF_PART3(local_28, 1) << 8;
        uVar13 = 0xec00;
        uVar16 = 0xff0000;
        uVar17 = 0x3e;
        uVar22 = 0x8200;
        uVar24 = 0xcc0000;
        iVar5 = local_28;
      }
      else {
        pcVar9 = (char *)0x0;
        pcVar12 = (char *)0x0;
        if (*param_3 != '\0') {
          pcVar15 = param_3;
          cVar19 = *param_3;
          do {
            cVar2 = pcVar15[1];
            if (cVar19 == '/') {
              pcVar12 = pcVar15;
            }
            pcVar15 = pcVar15 + 1;
            cVar19 = cVar2;
          } while (cVar2 != '\0');
        }
        pcVar15 = param_3;
        if (pcVar12 != (char *)0x0) {
          pcVar15 = pcVar12 + 1;
        }
        if (*pcVar15 != '\0') {
          pcVar9 = (char *)0x0;
          cVar19 = *pcVar15;
          do {
            cVar2 = pcVar15[1];
            if (cVar19 == '.') {
              pcVar9 = pcVar15;
            }
            pcVar15 = pcVar15 + 1;
            cVar19 = cVar2;
          } while (cVar2 != '\0');
        }
        uVar23 = 0xff;
        pcVar12 = &DAT_10023774;
        if (pcVar9 != (char *)0x0) {
          pcVar12 = pcVar9;
        }
        uVar13 = 0xff00;
        uVar16 = 0xff0000;
        uVar17 = 0x78;
        uVar22 = 0x7800;
        uVar24 = 0x780000;
        if (*pcVar12 == '.') {
          cVar19 = pcVar12[1];
          iVar11 = 0;
          if (cVar19 != '\0') {
            local_28 = CONCAT31(PF_PART3(local_28, 1),cVar19);
            if (pcVar12[2] == '\0') {
              iVar11 = 1;
              iVar5 = local_28;
            }
            else {
              PF_PART2(local_28, 0) = CONCAT11(pcVar12[2],cVar19);
              local_28 = CONCAT22(uVar4,(undefined2)local_28);
              if (pcVar12[3] == '\0') {
                iVar11 = 2;
                iVar5 = local_28;
              }
              else {
                PF_PART3(local_28, 0) = CONCAT12(pcVar12[3],(undefined2)local_28);
                local_28 = CONCAT13(bVar20,(undefined3)local_28);
                if (pcVar12[4] == '\0') {
                  iVar11 = 3;
                  iVar5 = local_28;
                }
                else {
                  local_28 = CONCAT13(pcVar12[4],(undefined3)local_28);
                  cVar19 = pcVar12[5];
                  if (cVar19 == '\0') {
                    iVar11 = 4;
                    iVar5 = local_28;
                  }
                  else {
                    cVar2 = pcVar12[6];
                    local_24 = cVar19;
                    if (cVar2 == '\0') {
                      iVar11 = 5;
                      iVar5 = local_28;
                    }
                    else {
                      local_23 = cVar2;
                      if (pcVar12[7] == '\0') {
                        iVar11 = 6;
                        iVar5 = local_28;
                      }
                      else {
                        iVar11 = 7;
                        iVar5 = local_28;
                        local_22 = pcVar12[7];
                      }
                    }
                  }
                }
              }
            }
          }
          local_28 = iVar5;
          *(undefined1 *)((int)&local_28 + iVar11) = 0;
          iVar5 = local_28;
        }
      }
    }
  }
  else {
    local_28 = (uint)PF_PART1(local_28, 3) << 0x18;
    local_28 = CONCAT22(PF_PART2(local_28, 2),0x5055);
LAB_100188f0:
    uVar23 = 0xd1;
    uVar13 = 0xf400;
    uVar16 = 0xd10000;
    uVar17 = 0x44;
    uVar22 = 0x9c00;
    uVar24 = 0x4c0000;
    iVar5 = local_28;
  }
LAB_10018908:
  local_28 = iVar5;
  uVar6 = DAT_10024144 ^ 0xff;
  if (DAT_10024148 == 0) {
    uVar6 = 0xff;
  }
  recovered_10012e84(param_1,param_2,0x2a,0x20,uVar13 | uVar16 | uVar23,uVar6);
  recovered_1001297c(param_1,param_2,0x2a,0x20,uVar22 | uVar24 | uVar17);
  if (param_3 == (char *)0x0) goto LAB_10018c24;
  pbVar10 = (byte *)(param_3 + 0xf1);
  pbVar7 = (byte *)0x0;
  pbVar14 = (byte *)0x0;
  if (*pbVar10 != 0) {
    pbVar18 = (byte *)(param_3 + 0xf2);
    bVar20 = *pbVar10;
    do {
      bVar21 = *pbVar18;
      if (bVar20 == 0x2f) {
        pbVar14 = pbVar18 + -1;
      }
      pbVar18 = pbVar18 + 1;
      bVar20 = bVar21;
    } while (bVar21 != 0);
  }
  if (pbVar14 != (byte *)0x0) {
    pbVar10 = pbVar14 + 1;
  }
  if (*pbVar10 != 0) {
    pbVar7 = (byte *)0x0;
    bVar20 = *pbVar10;
    do {
      bVar21 = pbVar10[1];
      if (bVar20 == 0x2e) {
        pbVar7 = pbVar10;
      }
      pbVar10 = pbVar10 + 1;
      bVar20 = bVar21;
    } while (bVar21 != 0);
  }
  pbVar10 = &DAT_10023774;
  if (pbVar7 != (byte *)0x0) {
    pbVar10 = pbVar7;
  }
  uVar13 = (uint)*pbVar10;
  if (uVar13 == 0) {
    uVar16 = 0x2e;
    uVar13 = 0;
LAB_10018be4:
    uVar17 = uVar13;
    if (uVar13 == uVar16) {
      uVar17 = param_4;
    }
    if (uVar13 == uVar16 && uVar17 == 0) {
      uVar13 = DAT_10024144 ^ 0xff;
      if (DAT_10024148 == 0) {
        uVar13 = 0xff;
      }
      recovered_10012e84(param_1 + 8,param_2 + 7,0x1a,0x12,0xb784ec,uVar13);
      recovered_1001297c(param_1 + 8,param_2 + 7,0x1a,0x12,0x5c3f7a);
      return;
    }
  }
  else {
    if (uVar13 - 0x41 < 0x1a) {
      uVar13 = uVar13 | 0x20;
    }
    if (uVar13 == 0x2e) {
      uVar13 = (uint)pbVar10[1];
      if (uVar13 == 0) {
        uVar16 = 0x61;
        uVar13 = 0;
      }
      else {
        if (uVar13 - 0x41 < 0x1a) {
          uVar13 = uVar13 | 0x20;
        }
        if (uVar13 != 0x61) goto LAB_10018bf4;
        uVar17 = (uint)pbVar10[2];
        uVar16 = 0x70;
        uVar13 = 0;
        if (uVar17 != 0) {
          if (uVar17 - 0x41 < 0x1a) {
            uVar17 = uVar17 | 0x20;
          }
          if (uVar17 != 0x70) goto LAB_10018bf4;
          uVar17 = (uint)pbVar10[3];
          uVar13 = 0;
          if (uVar17 != 0) {
            if (uVar17 - 0x41 < 0x1a) {
              uVar17 = uVar17 | 0x20;
            }
            if (uVar17 != 0x70) goto LAB_10018bf4;
            uVar13 = (uint)pbVar10[4];
            uVar16 = 0;
          }
        }
      }
      goto LAB_10018be4;
    }
  }
LAB_10018bf4:
  uVar13 = 0;
  if (*(int *)(param_3 + 0x1ec) != 2) {
    uVar13 = ((byte)param_3[0x1e8] & 2) >> 1 ^ 1;
  }
  uVar16 = uVar13;
  if (uVar13 == 0) {
    uVar16 = param_4;
  }
  if (uVar13 == 0 && uVar16 == 0) {
    uVar13 = DAT_10024144 ^ 0xff;
    if (DAT_10024148 == 0) {
      uVar13 = 0xff;
    }
    recovered_10012e84(param_1 + 6,param_2 + 7,0x1e,6,0xfcdfbe,uVar13);
    return;
  }
LAB_10018c24:
  recovered_100125d8(param_1 + 7,param_2 + 0xc,(char *)&local_28,3,0x141414,1);
  return;
}

#undef DAT_10023774
#undef DAT_10024144
#undef DAT_10024148
#undef local_28
#undef local_24
#undef local_23
#undef local_22

#define local_2d (*(char (*)[13])(frame + 19))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10018f20
 */

void recovered_10018f20(char *param_1,uint param_2,uint param_3)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  ulong uVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  char cVar6;
  bool bVar7;

  if (param_3 == 0) {
    if ((param_1 != (char *)0x0) && (uVar5 = strlen(param_1), uVar5 < param_2)) {
      if (uVar5 + 1 < param_2) {
        param_1[uVar5] = '0';
        uVar5 = uVar5 + 1;
      }
      param_1[uVar5] = '\0';
    }
  }
  else {
    uVar5 = 0;
    do {
      local_2d[uVar5 + 1] = (char)param_3 + (char)(param_3 / 10) * -10 | 0x30;
      uVar4 = uVar5 + 1;
      if (param_3 < 10) break;
      bVar7 = uVar5 < 0xb;
      uVar5 = uVar4;
      param_3 = param_3 / 10;
    } while (bVar7);
    do {
      uVar5 = uVar4 - 1;
      local_2d[0] = '\0';
      cVar6 = local_2d[uVar4];
      if ((param_1 != (char *)0x0) && (uVar1 = strlen(param_1), uVar1 < param_2)) {
        if ((cVar6 != '\0') && (uVar1 + 1 < param_2)) {
          uVar2 = uVar1;
          pcVar3 = local_2d;
          do {
            param_1[uVar2] = cVar6;
            uVar1 = uVar2 + 1;
            cVar6 = *pcVar3;
            if (cVar6 == '\0') break;
            uVar4 = uVar2 + 2;
            uVar2 = uVar1;
            pcVar3 = pcVar3 + 1;
          } while (uVar4 < param_2);
        }
        param_1[uVar1] = '\0';
      }
      uVar4 = uVar5;
    } while (uVar5 != 0);
  }
  return;
}

#undef local_2d

#undef DAT_10024144
#define DAT_10024144 (*(byte *)(((uintptr_t)pf_module_state + 0xb3cU)))
#undef DAT_10024148
#define DAT_10024148 (*(int *)(((uintptr_t)pf_module_state + 0xb40U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10019058
 */

void recovered_10019058(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;

  uVar1 = DAT_10024144 ^ 0xff;
  if (DAT_10024148 == 0) {
    uVar1 = 0xff;
  }
  recovered_10012e84(param_1,param_2,param_3,param_4,0xeeeeee,uVar1);
  recovered_1001297c(param_1,param_2,param_3,param_4,0x969696);
  iVar3 = -2;
  uVar1 = DAT_10024144 ^ 0xff;
  if (DAT_10024148 == 0) {
    uVar1 = 0xff;
  }
  iVar4 = param_1 + param_3 / 2;
  iVar2 = 3;
  if (param_5 != 0) {
    iVar2 = 0;
    iVar3 = -4;
  }
  iVar3 = param_2 + param_4 / 2 + iVar3;
  recovered_10012e84(iVar4 - iVar2,iVar3,iVar2 << 1 | 1,1,0x464646,uVar1);
  uVar1 = DAT_10024144 ^ 0xff;
  iVar2 = 2;
  if (DAT_10024148 == 0) {
    uVar1 = 0xff;
  }
  if (param_5 != 0) {
    iVar2 = 1;
  }
  recovered_10012e84(iVar4 - iVar2,iVar3 + 1,iVar2 << 1 | 1,1,0x464646,uVar1);
  uVar1 = DAT_10024144 ^ 0xff;
  iVar2 = 1;
  if (DAT_10024148 == 0) {
    uVar1 = 0xff;
  }
  if (param_5 != 0) {
    iVar2 = 2;
  }
  recovered_10012e84(iVar4 - iVar2,iVar3 + 2,iVar2 << 1 | 1,1,0x464646,uVar1);
  uVar1 = DAT_10024144 ^ 0xff;
  if (DAT_10024148 == 0) {
    uVar1 = 0xff;
  }
  iVar2 = 0;
  if (param_5 != 0) {
    iVar2 = 3;
  }
  recovered_10012e84(iVar4 - iVar2,iVar3 + 3,iVar2 << 1 | 1,1,0x464646,uVar1);
  return;
}

#undef DAT_10024144
#undef DAT_10024148

#undef DAT_10028fc0
#define DAT_10028fc0 (*(void * *)(((uintptr_t)pf_module_state + 0x59b8U)))
#undef DAT_10028fc4
#define DAT_10028fc4 (*(void * *)(((uintptr_t)pf_module_state + 0x59bcU)))
#undef DAT_10028fc8
#define DAT_10028fc8 (*(uint *)(((uintptr_t)pf_module_state + 0x59c0U)))
#undef DAT_10028fcc
#define DAT_10028fcc (*(uint *)(((uintptr_t)pf_module_state + 0x59c4U)))
#undef DAT_10028fd0
#define DAT_10028fd0 (*(uint *)(((uintptr_t)pf_module_state + 0x59c8U)))
#undef DAT_10028fd4
#define DAT_10028fd4 (*(uint *)(((uintptr_t)pf_module_state + 0x59ccU)))
#undef DAT_10028fd8
#define DAT_10028fd8 (*(uint *)(((uintptr_t)pf_module_state + 0x59d0U)))
#undef DAT_10028fdc
#define DAT_10028fdc (*(uint *)(((uintptr_t)pf_module_state + 0x59d4U)))
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
#undef UINT_40010854
#define UINT_40010854 (*(uint *)(0x40010854U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10019234
 */

/* WARNING: Type propagation algorithm not settling */

void recovered_10019234(uint param_1,uint param_2,uint param_3,uint param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  code *pcVar2;
  void *pvVar3;
  void *pvVar4;
  uint uVar5;
  bool bVar6;
  ulonglong uVar7;

  if (param_1 == 0 || param_2 == 0) {
    return;
  }
  if (((((DAT_10028fc0 != (void *)0x0 && DAT_10028fc4 != (void *)0x0) && (DAT_10028fd0 == param_1))
       && (DAT_10028fd4 == param_2)) &&
      ((DAT_10028fd8 == param_3 && (DAT_10028fdc == param_4 && DAT_10028fc8 == param_3)))) &&
     (DAT_10028fcc == param_4)) {
    return;
  }
  if ((DAT_10028fc0 == (void *)0x0) ||
     (uVar5 = DAT_10028fc8, pvVar4 = DAT_10028fc0, DAT_10028fc8 != param_3)) {
    iVar1 = Ram40010800;
    if ((iVar1 == 0x50414d57) && (iVar1 = Ram40010804, iVar1 != 0)) {
      uVar5 = Ram40010808;
      bVar6 = 0xb < uVar5;
      if (bVar6) {
        uVar5 = Ram40010808;
      }
      if (((bVar6 && 0x57 < uVar5) && (pcVar2 = (code *)UINT_40010854, pcVar2 != (code *)0x0)) &&
         (pvVar4 = (*pcVar2)(DAT_10028fc0,param_3 << 2), uVar5 = param_3, pvVar4 != (void *)0x0))
      goto joined_r0x1001949c;
    }
    if (DAT_10028fc0 != (void *)0x0) {
      iVar1 = Ram40010800;
      if ((iVar1 == 0x50414d57) && (iVar1 = Ram40010804, iVar1 != 0)) {
        uVar5 = Ram40010808;
        bVar6 = 0xb < uVar5;
        if (bVar6) {
          uVar5 = Ram40010808;
        }
        if ((bVar6 && 0x53 < uVar5) && (pcVar2 = (code *)UINT_40010850, pcVar2 != (code *)0x0)) {
          (*pcVar2)(DAT_10028fc0);
        }
      }
      DAT_10028fc0 = (void *)0x0;
    }
    if (DAT_10028fc4 == (void *)0x0) {
      DAT_10028fc8 = 0;
      DAT_10028fcc = 0;
      DAT_10028fd0 = 0;
      DAT_10028fd4 = 0;
      DAT_10028fd8 = 0;
      DAT_10028fdc = 0;
      return;
    }
    iVar1 = Ram40010800;
    goto joined_r0x10019428;
  }
joined_r0x1001949c:
  DAT_10028fc0 = pvVar4;
  DAT_10028fc8 = uVar5;
  if ((DAT_10028fc4 != (void *)0x0) &&
     (uVar5 = DAT_10028fcc, pvVar4 = DAT_10028fc4, pvVar3 = DAT_10028fc0, DAT_10028fcc == param_4))
  {
joined_r0x10019660:
    DAT_10028fcc = uVar5;
    DAT_10028fc0 = pvVar3;
    DAT_10028fc4 = pvVar4;
    if (param_3 != 0) {
      uVar5 = 0;
      do {
        uVar7 = recovered_10000c20((ulonglong)param_1 * (ulonglong)uVar5,(ulonglong)param_3);
        *(int *)((int)pvVar3 + uVar5 * 4) = (int)uVar7;
        uVar5 = uVar5 + 1;
      } while (param_3 != uVar5);
    }
    if (param_4 == 0) {
      DAT_10028fd0 = param_1;
      DAT_10028fd4 = param_2;
      DAT_10028fd8 = param_3;
      DAT_10028fdc = param_4;
      return;
    }
    uVar5 = 0;
    do {
      uVar7 = recovered_10000c20((ulonglong)param_2 * (ulonglong)uVar5,(ulonglong)param_4);
      *(int *)((int)pvVar4 + uVar5 * 4) = (int)uVar7;
      uVar5 = uVar5 + 1;
    } while (param_4 != uVar5);
    DAT_10028fd0 = param_1;
    DAT_10028fd4 = param_2;
    DAT_10028fd8 = param_3;
    DAT_10028fdc = param_4;
    return;
  }
  iVar1 = Ram40010800;
  if ((iVar1 == 0x50414d57) && (iVar1 = Ram40010804, iVar1 != 0)) {
    uVar5 = Ram40010808;
    bVar6 = 0xb < uVar5;
    if (bVar6) {
      uVar5 = Ram40010808;
    }
    if ((!bVar6 || uVar5 < 0x58) || (pcVar2 = (code *)UINT_40010854, pcVar2 == (code *)0x0))
    goto LAB_100194dc;
    pvVar4 = (*pcVar2)(DAT_10028fc4,param_4 << 2);
    uVar5 = param_4;
    pvVar3 = DAT_10028fc0;
    if (pvVar4 != (void *)0x0) goto joined_r0x10019660;
    if (DAT_10028fc0 != (void *)0x0) goto LAB_100194dc;
  }
  else {
LAB_100194dc:
    iVar1 = Ram40010800;
    if ((iVar1 == 0x50414d57) && (iVar1 = Ram40010804, iVar1 != 0)) {
      uVar5 = Ram40010808;
      bVar6 = 0xb < uVar5;
      if (bVar6) {
        uVar5 = Ram40010808;
      }
      if ((bVar6 && 0x53 < uVar5) && (pcVar2 = (code *)UINT_40010850, pcVar2 != (code *)0x0)) {
        (*pcVar2)(DAT_10028fc0);
      }
    }
    DAT_10028fc0 = (void *)0x0;
  }
  if (DAT_10028fc4 == (void *)0x0) {
    DAT_10028fc8 = 0;
    DAT_10028fcc = 0;
    DAT_10028fd0 = 0;
    DAT_10028fd4 = 0;
    DAT_10028fd8 = 0;
    DAT_10028fdc = 0;
    return;
  }
  iVar1 = Ram40010800;
joined_r0x10019428:
  if ((iVar1 == 0x50414d57) && (iVar1 = Ram40010804, iVar1 != 0)) {
    uVar5 = Ram40010808;
    bVar6 = 0xb < uVar5;
    if (bVar6) {
      uVar5 = Ram40010808;
    }
    if ((bVar6 && 0x53 < uVar5) && (pcVar2 = (code *)UINT_40010850, pcVar2 != (code *)0x0)) {
      (*pcVar2)(DAT_10028fc4);
    }
  }
  DAT_10028fdc = 0;
  DAT_10028fd8 = 0;
  DAT_10028fd4 = 0;
  DAT_10028fd0 = 0;
  DAT_10028fcc = 0;
  DAT_10028fc8 = 0;
  DAT_10028fc4 = (void *)0x0;
  return;
}

#undef DAT_10028fc0
#undef DAT_10028fc4
#undef DAT_10028fc8
#undef DAT_10028fcc
#undef DAT_10028fd0
#undef DAT_10028fd4
#undef DAT_10028fd8
#undef DAT_10028fdc
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef Ram40010800
#undef Ram40010804
#undef Ram40010808
#undef UINT_40010850
#undef UINT_40010854

#undef DAT_10023774
#define DAT_10023774 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x16cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100196a4
 */

void recovered_100196a4(char *param_1,char *param_2,char *param_3,uint param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  ulong uVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  char cVar6;
  ulong uVar7;

  if (param_3 == (char *)0x0) {
    return;
  }
  if (param_1 == (char *)0x0) {
    param_1 = &DAT_10023774;
  }
  iVar3 = 0;
  if ((1 < param_4) && (cVar6 = *param_1, cVar6 != '\0')) {
    iVar4 = 0;
    do {
      param_3[iVar4] = cVar6;
      iVar3 = iVar4 + 1;
      if (param_4 <= iVar4 + 2U) break;
      cVar6 = param_1[iVar4 + 1];
      iVar4 = iVar3;
    } while (cVar6 != '\0');
  }
  param_3[iVar3] = '\0';
  uVar1 = strlen(param_3);
  if (uVar1 < param_4) {
    if (uVar1 + 1 < param_4) {
      param_3[uVar1] = ' ';
      uVar1 = uVar1 + 1;
    }
    param_3[uVar1] = '\0';
  }
  uVar2 = strlen(param_3);
  if (uVar2 < param_4) {
    pcVar5 = &DAT_10023774;
    if (param_2 != (char *)0x0) {
      pcVar5 = param_2;
    }
    cVar6 = *pcVar5;
    if ((cVar6 == '\0') || (param_4 <= uVar2 + 1)) {
      uVar7 = uVar2;
    }
    else {
      do {
        pcVar5 = pcVar5 + 1;
        param_3[uVar2] = cVar6;
        uVar7 = uVar2 + 1;
        cVar6 = *pcVar5;
        if (cVar6 == '\0') break;
        uVar1 = uVar2 + 2;
        uVar2 = uVar7;
      } while (uVar1 < param_4);
    }
    param_3[uVar7] = '\0';
  }
  uVar1 = strlen(param_3);
  if (uVar1 < param_4) {
    if (uVar1 + 1 < param_4) {
      param_3[uVar1] = ' ';
      uVar1 = uVar1 + 1;
    }
    param_3[uVar1] = '\0';
  }
  uVar2 = strlen(param_3);
  if (param_4 <= uVar2) {
    return;
  }
  uVar1 = uVar2 + 1;
  uVar7 = uVar2;
  if (param_4 <= uVar1) goto LAB_10019864;
  param_3[uVar2] = 'B';
  uVar7 = uVar2 + 2;
  if (uVar7 < param_4) {
    param_3[uVar1] = 'e';
    uVar1 = uVar2 + 3;
    if (param_4 <= uVar1) goto LAB_10019864;
    param_3[uVar7] = 't';
    if (uVar2 + 4 < param_4) {
      param_3[uVar1] = 'a';
      uVar7 = uVar2 + 4;
      goto LAB_10019864;
    }
  }
  uVar7 = uVar1;
LAB_10019864:
  param_3[uVar7] = '\0';
  return;
}

#undef DAT_10023774

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10019878
 */

void recovered_10019878(uint param_1,uint param_2,char *param_3,uint param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  longlong lVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  char cVar6;

  if (param_3 == (char *)0x0) {
    return;
  }
  *param_3 = '\0';
  if (param_2 == 0 && (0x3fffffff < param_1) <= param_2) {
    if (param_2 == 0 && (0xfffff < param_1) <= param_2) {
      if (param_2 == 0 && (0x3ff < param_1) <= param_2) {
        recovered_10019d4c(param_3,param_4,param_1,param_2);
        uVar3 = strlen(param_3);
        if (param_4 <= uVar3) {
          return;
        }
        uVar4 = uVar3 + 1;
        if (uVar4 < param_4) {
          param_3[uVar3] = ' ';
          uVar3 = uVar3 + 2;
          goto LAB_10019a78;
        }
      }
      else {
        recovered_10019d4c(param_3,param_4,param_1 >> 10 | param_2 << 0x16,param_2 >> 10);
        uVar3 = strlen(param_3);
        if (param_4 <= uVar3) {
          return;
        }
        uVar5 = uVar3 + 1;
        if (uVar5 < param_4) {
          param_3[uVar3] = ' ';
          uVar4 = uVar3 + 2;
          if (param_4 <= uVar4) goto LAB_10019a94;
          cVar6 = 'K';
          goto LAB_10019a70;
        }
      }
    }
    else {
      recovered_10019d4c(param_3,param_4,param_1 >> 0x14 | param_2 << 0xc,param_2 >> 0x14);
      uVar3 = strlen(param_3);
      if (param_4 <= uVar3) {
        return;
      }
      uVar5 = uVar3 + 1;
      if (uVar5 < param_4) {
        param_3[uVar3] = ' ';
        uVar4 = uVar3 + 2;
        if (param_4 <= uVar4) goto LAB_10019a94;
        cVar6 = 'M';
        goto LAB_10019a70;
      }
    }
  }
  else {
    recovered_10019d4c(param_3,param_4,param_1 >> 0x1e | param_2 << 2,param_2 >> 0x1e);
    if ((param_2 < 2 || 2 - param_2 < (uint)(param_1 < 0x80000000)) &&
       (0x6666666 < (param_1 & 0x3fffffff))) {
      lVar1 = (ulonglong)(param_1 & 0x3fffffff) * 10;
      uVar2 = strlen(param_3);
      if (uVar2 < param_4) {
        if (uVar2 + 1 < param_4) {
          param_3[uVar2] = '.';
          uVar2 = uVar2 + 1;
        }
        param_3[uVar2] = '\0';
      }
      recovered_10019d4c(param_3,param_4,(uint)lVar1 >> 0x1e | (int)((ulonglong)lVar1 >> 0x20) << 2,
                         0);
    }
    uVar3 = strlen(param_3);
    if (param_4 <= uVar3) {
      return;
    }
    uVar5 = uVar3 + 1;
    if (uVar5 < param_4) {
      param_3[uVar3] = ' ';
      uVar4 = uVar3 + 2;
      if (param_4 <= uVar4) goto LAB_10019a94;
      cVar6 = 'G';
LAB_10019a70:
      param_3[uVar5] = cVar6;
      uVar3 = uVar3 + 3;
LAB_10019a78:
      uVar5 = uVar4;
      if (param_4 <= uVar3) goto LAB_10019a94;
      param_3[uVar4] = 'B';
    }
  }
  uVar5 = uVar3;
LAB_10019a94:
  param_3[uVar5] = '\0';
  return;
}


#undef DAT_10028fac
#define DAT_10028fac (*(void * *)(((uintptr_t)pf_module_state + 0x59a4U)))
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
#undef UINT_40010874
#define UINT_40010874 (*(uint *)(0x40010874U))
#undef UINT_40010978
#define UINT_40010978 (*(uint *)(0x40010978U))
#define local_d8 (*(void * *)(frame + 24))
#define local_d4 (*(int *)(frame + 28))
#define local_cc (*(uint *)(frame + 36))
#define local_c0 (*(void * *)(frame + 48))
#define local_bc (*(int *)(frame + 52))
#define local_b4 (*(uint *)(frame + 60))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10019aa8
 */

uint recovered_10019aa8(char *param_1,uint param_2)

{
  unsigned char frame[272] __attribute__((aligned(16))) = {0};

  char cVar1;
  uint uVar2;
  int iVar3;
  code *pcVar4;
  void **dst;
  uint uVar5;
  char cVar6;
  bool bVar7;

  if ((param_1 == (char *)0x0) || (DAT_10028fac == (void *)0x0)) {
    if (param_1 == (char *)0x0) {
      return 0;
    }
  }
  else {
    if (*param_1 == '\0') {
      return 0;
    }
    uVar5 = 0;
    cVar6 = *param_1;
    do {
      if (param_2 <= uVar5) break;
      if (uVar5 == 0x9f) {
        uVar5 = 0x9f;
        break;
      }
      cVar1 = param_1[uVar5 + 1];
      *(char *)((int)&local_c0 + uVar5) = cVar6;
      uVar5 = uVar5 + 1;
      cVar6 = cVar1;
    } while (cVar1 != '\0');
    *(undefined1 *)((int)&local_c0 + uVar5) = 0;
    memset(&local_d8,0,0x18);
    iVar3 = Ram40010800;
    if ((iVar3 == 0x50414d57) && (iVar3 = Ram40010804, iVar3 != 0)) {
      uVar5 = Ram40010808;
      bVar7 = 0xb < uVar5;
      if (bVar7) {
        uVar5 = Ram40010808;
      }
      if (((bVar7 && 0x77 < uVar5) && (pcVar4 = (code *)UINT_40010874, pcVar4 != (code *)0x0)) &&
         (uVar5 = (*pcVar4)(DAT_10028fac,(char *)&local_c0,0,0,0,0,&local_d8), uVar5 != 0)) {
        uVar5 = local_cc;
        if (0x7ffffffe < local_cc) {
          uVar5 = 0x7fffffff;
        }
        if (((local_d4 == 0) && (local_d8 != (void *)0x0)) &&
           ((iVar3 = Ram40010800, iVar3 == 0x50414d57 && (iVar3 = Ram40010804, iVar3 != 0)))) {
          uVar2 = Ram40010808;
          bVar7 = 0xb < uVar2;
          if (bVar7) {
            uVar2 = Ram40010808;
          }
          if ((bVar7 && 0x53 < uVar2) && (pcVar4 = (code *)UINT_40010850, pcVar4 != (code *)0x0)) {
            (*pcVar4)(local_d8);
          }
        }
        dst = &local_d8;
        goto LAB_10019d14;
      }
    }
  }
  if (*param_1 == '\0') {
    return 0;
  }
  memset(&local_c0,0,0x18);
  iVar3 = Ram40010800;
  if (iVar3 != 0x50414d57) {
    return 0;
  }
  iVar3 = Ram40010804;
  if (iVar3 == 0) {
    return 0;
  }
  uVar5 = Ram40010808;
  bVar7 = uVar5 < 0xc;
  if (!bVar7) {
    uVar5 = Ram40010808;
  }
  if (bVar7 || uVar5 < 0x17c) {
    return 0;
  }
  pcVar4 = (code *)UINT_40010978;
  if (pcVar4 == (code *)0x0) {
    return 0;
  }
  uVar5 = (*pcVar4)(param_1,param_2 | (int)param_2 >> 0x1f,1,0,&local_c0);
  if (uVar5 == 0) {
    return 0;
  }
  uVar5 = local_b4;
  if (0x7ffffffe < local_b4) {
    uVar5 = 0x7fffffff;
  }
  if ((((local_bc == 0) && (local_c0 != (void *)0x0)) && (iVar3 = Ram40010800, iVar3 == 0x50414d57))
     && (iVar3 = Ram40010804, iVar3 != 0)) {
    uVar2 = Ram40010808;
    bVar7 = 0xb < uVar2;
    if (bVar7) {
      uVar2 = Ram40010808;
    }
    if ((bVar7 && 0x53 < uVar2) && (pcVar4 = (code *)UINT_40010850, pcVar4 != (code *)0x0)) {
      (*pcVar4)(local_c0);
    }
  }
  dst = &local_c0;
LAB_10019d14:
  memset(dst,0,0x18);
  return uVar5;
}

#undef DAT_10028fac
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef Ram40010800
#undef Ram40010804
#undef Ram40010808
#undef UINT_40010850
#undef UINT_40010874
#undef UINT_40010978
#undef local_d8
#undef local_d4
#undef local_cc
#undef local_c0
#undef local_bc
#undef local_b4

#define local_39 (*(char (*)[25])(frame + 23))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10019d4c
 */

void recovered_10019d4c(char *param_1,uint param_2,uint param_3,uint param_4)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  longlong lVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  char cVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;

  if (param_3 == 0 && param_4 == 0) {
    if ((param_1 != (char *)0x0) && (uVar10 = strlen(param_1), uVar10 < param_2)) {
      if (uVar10 + 1 < param_2) {
        param_1[uVar10] = '0';
        uVar10 = uVar10 + 1;
      }
      param_1[uVar10] = '\0';
    }
  }
  else {
    uVar10 = 0;
    do {
      uVar2 = param_3 >> 1 | param_4 << 0x1f;
      uVar9 = uVar10 + 1;
      uVar5 = uVar2 + (param_4 >> 1) + (uint)CARRY4(uVar2,param_4 >> 1);
      uVar5 = uVar5 - (((uint)((ulonglong)uVar5 * 0xcccccccd >> 0x20) & 0xfffffffc) + uVar5 / 5);
      uVar6 = uVar2 - uVar5;
      lVar1 = (ulonglong)uVar6 * 0xcccccccd;
      local_39[uVar10 + 1] = (char)param_3 + (char)lVar1 * -10 | 0x30;
      if (param_4 == 0 && (9 < param_3) <= param_4) break;
      bVar11 = uVar10 < 0x17;
      param_4 = ((param_4 >> 1) - (uint)(uVar2 < uVar5)) * -0x33333333 +
                uVar6 * -0x33333334 + (int)((ulonglong)lVar1 >> 0x20);
      param_3 = (uint)lVar1;
      uVar10 = uVar9;
    } while (bVar11);
    do {
      uVar10 = uVar9 - 1;
      local_39[0] = '\0';
      cVar8 = local_39[uVar9];
      if ((param_1 != (char *)0x0) && (uVar3 = strlen(param_1), uVar3 < param_2)) {
        if ((cVar8 != '\0') && (uVar3 + 1 < param_2)) {
          uVar4 = uVar3;
          pcVar7 = local_39;
          do {
            param_1[uVar4] = cVar8;
            uVar3 = uVar4 + 1;
            cVar8 = *pcVar7;
            if (cVar8 == '\0') break;
            uVar9 = uVar4 + 2;
            uVar4 = uVar3;
            pcVar7 = pcVar7 + 1;
          } while (uVar9 < param_2);
        }
        param_1[uVar3] = '\0';
      }
      uVar9 = uVar10;
    } while (uVar10 != 0);
  }
  return;
}

#undef local_39

#undef DAT_10023774
#define DAT_10023774 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x16cU)))
#define acStack_2f (*(char (*)[23])(frame + 17))
#define local_30 (*(char *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10019ec8
 */

void recovered_10019ec8(char *param_1,char *param_2,int param_3)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  int iVar2;
  ulong uVar3;
  char *pcVar4;
  char cVar5;

  if (param_3 == 0) {
    return;
  }
  if (*param_1 != '\0') {
    uVar1 = strlen(param_1);
    if (uVar1 < 0x40) {
      iVar2 = 0x3f;
      if (uVar1 != 0x3f) {
        param_1[uVar1] = ',';
        iVar2 = uVar1 + 1;
        if (uVar1 < 0x3e) {
          param_1[iVar2] = ' ';
          iVar2 = uVar1 + 2;
        }
      }
      param_1[iVar2] = '\0';
    }
  }
  recovered_10019878(param_3,0,&local_30,0x18);
  uVar1 = strlen(param_1);
  if (uVar1 < 0x40) {
    pcVar4 = &DAT_10023774;
    if (param_2 != (char *)0x0) {
      pcVar4 = param_2;
    }
    if ((uVar1 == 0x3f) || (cVar5 = *pcVar4, cVar5 == '\0')) {
      uVar3 = uVar1;
    }
    else {
      do {
        pcVar4 = pcVar4 + 1;
        uVar3 = uVar1 + 1;
        param_1[uVar1] = cVar5;
        if (0x3d < uVar1) break;
        cVar5 = *pcVar4;
        uVar1 = uVar3;
      } while (cVar5 != '\0');
    }
    param_1[uVar3] = '\0';
  }
  uVar1 = strlen(param_1);
  if (uVar1 < 0x40) {
    iVar2 = 0x3f;
    if (uVar1 != 0x3f) {
      param_1[uVar1] = ' ';
      iVar2 = uVar1 + 1;
    }
    param_1[iVar2] = '\0';
  }
  uVar1 = strlen(param_1);
  if (uVar1 < 0x40) {
    if ((uVar1 != 0x3f) && (local_30 != '\0')) {
      uVar3 = uVar1;
      pcVar4 = acStack_2f;
      do {
        uVar1 = uVar3 + 1;
        param_1[uVar3] = local_30;
        if (0x3d < uVar3) break;
        local_30 = *pcVar4;
        uVar3 = uVar1;
        pcVar4 = pcVar4 + 1;
      } while (local_30 != '\0');
    }
    param_1[uVar1] = '\0';
  }
  return;
}

#undef DAT_10023774
#undef acStack_2f
#undef local_30

#undef str_10023c4b
#define str_10023c4b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x643U)))
#undef str_10023c5b
#define str_10023c5b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x653U)))
#undef str_10023c6d
#define str_10023c6d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x665U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001a044
 */

void recovered_1001a044(undefined1 *param_1,int param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined1 uVar1;
  undefined1 uVar2;
  char cVar3;
  undefined1 uVar4;
  int iVar5;
  char cVar6;

  if (param_2 != 0) {
    iVar5 = 0;
    do {
      cVar3 = *(char *)(param_2 + iVar5);
      if (cVar3 == '\0') {
        if (str_10023c4b[iVar5] == '\0') {
          uVar1 = 0x4e;
          uVar2 = 0x78;
          uVar4 = 0x22;
          goto LAB_1001a1a4;
        }
        break;
      }
      if (iVar5 == 0xf) break;
      cVar6 = str_10023c4b[iVar5];
      iVar5 = iVar5 + 1;
      if ((byte)(cVar6 + 0x9fU) < 0x1a) {
        cVar6 = cVar6 + -0x20;
      }
      if ((byte)(cVar3 + 0x9fU) < 0x1a) {
        cVar3 = cVar3 + -0x20;
      }
    } while (cVar3 == cVar6);
    iVar5 = 0;
    do {
      cVar3 = *(char *)(param_2 + iVar5);
      if (cVar3 == '\0') {
        if (str_10023c5b[iVar5] == '\0') {
          uVar1 = 0x16;
          uVar2 = 0x68;
          uVar4 = 0xa8;
          goto LAB_1001a1a4;
        }
        break;
      }
      if (iVar5 == 0x11) break;
      cVar6 = str_10023c5b[iVar5];
      iVar5 = iVar5 + 1;
      if ((byte)(cVar6 + 0x9fU) < 0x1a) {
        cVar6 = cVar6 + -0x20;
      }
      if ((byte)(cVar3 + 0x9fU) < 0x1a) {
        cVar3 = cVar3 + -0x20;
      }
    } while (cVar3 == cVar6);
    iVar5 = 0;
    do {
      cVar3 = *(char *)(param_2 + iVar5);
      if (cVar3 == '\0') {
        if (str_10023c6d[iVar5] == '\0') {
          uVar1 = 0x9e;
          uVar2 = 0x57;
          uVar4 = 0x3e;
          goto LAB_1001a1a4;
        }
        break;
      }
      if (iVar5 == 0x13) break;
      cVar6 = str_10023c6d[iVar5];
      iVar5 = iVar5 + 1;
      if ((byte)(cVar6 + 0x9fU) < 0x1a) {
        cVar6 = cVar6 + -0x20;
      }
      if ((byte)(cVar3 + 0x9fU) < 0x1a) {
        cVar3 = cVar3 + -0x20;
      }
    } while (cVar3 == cVar6);
  }
  uVar1 = 0x34;
  uVar2 = 0x30;
  uVar4 = 0xb8;
LAB_1001a1a4:
  param_1[2] = uVar1;
  param_1[1] = uVar2;
  *param_1 = uVar4;
  return;
}

#undef str_10023c4b
#undef str_10023c5b
#undef str_10023c6d

#undef DAT_100290e4
#define DAT_100290e4 (*(uint *)(((uintptr_t)pf_module_state + 0x5adcU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001a1e4
 */

void recovered_1001a1e4(int *param_1,int param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;

  iVar4 = -0x84;
  iVar2 = 0xbc;
  if (param_2 == 0) {
    iVar7 = 0x16;
    iVar5 = 0xbc;
    iVar8 = -0x84;
  }
  else {
    iVar7 = *(int *)(param_2 + 0x58) + 0x28;
    iVar5 = *(int *)(param_2 + 0x5c) + 0xe2;
    iVar8 = *(int *)(param_2 + 0x5c) + *(int *)(param_2 + 100) + -0x92;
  }
  *param_1 = iVar7;
  iVar7 = iVar5 + 0x32;
  if (iVar5 + 0x32 < iVar8) {
    iVar7 = iVar8;
  }
  iVar8 = (iVar7 - iVar5) + -0x4b;
  if ((iVar7 - iVar5) + -0xc < 0x26) {
    iVar8 = -0x19;
  }
  iVar7 = iVar8 + -2;
  param_1[2] = 0xc;
  if (iVar8 < 0x14) {
    iVar7 = 0x12;
  }
  if (param_2 != 0) {
    iVar4 = *(int *)(param_2 + 0x5c);
    iVar8 = *(int *)(param_2 + 100);
    iVar2 = iVar4 + 0xe2;
  }
  param_1[1] = iVar5 + 0x24;
  if (param_2 != 0) {
    iVar4 = iVar4 + iVar8 + -0x92;
  }
  iVar8 = iVar2 + 0x32;
  if (iVar2 + 0x32 < iVar4) {
    iVar8 = iVar4;
  }
  uVar3 = ((iVar8 - iVar2) + -0x20) / 0x12;
  if ((int)uVar3 < 2) {
    uVar3 = 1;
  }
  if ((iVar8 - iVar2) + -0xc < 0x26) {
    uVar3 = 1;
  }
  if (param_2 == 0) {
    iVar2 = -0x84;
    iVar4 = 0xbc;
  }
  else {
    iVar4 = *(int *)(param_2 + 0x5c) + 0xe2;
    iVar2 = *(int *)(param_2 + 0x5c) + *(int *)(param_2 + 100) + -0x92;
  }
  iVar8 = iVar4 + 0x32;
  if (iVar4 + 0x32 < iVar2) {
    iVar8 = iVar2;
  }
  uVar1 = ((iVar8 - iVar4) + -0x20) / 0x12;
  uVar6 = 1;
  if (1 < (int)uVar1) {
    uVar6 = uVar1;
  }
  if ((iVar8 - iVar4) + -0xc < 0x26) {
    uVar6 = 1;
  }
  iVar4 = DAT_100290e4 - uVar6;
  if (DAT_100290e4 < uVar6) {
    iVar4 = 0;
  }
  if ((uVar3 < DAT_100290e4) && (0 < iVar4)) {
    iVar2 = recovered_10000b48(uVar3 * iVar7,DAT_100290e4);
    if (iVar2 < 0x13) {
      iVar2 = 0x12;
    }
    if (iVar7 <= iVar2) {
      iVar2 = iVar7;
    }
    iVar4 = recovered_10000b48((iVar7 - iVar2) * *(int *)(param_2 + 0xaf8),iVar4);
    param_1[1] = iVar4 + iVar5 + 0x24;
    iVar7 = iVar2;
  }
  param_1[3] = iVar7;
  return;
}

#undef DAT_100290e4

#undef DAT_10023774
#define DAT_10023774 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x16cU)))
#undef DAT_10024144
#define DAT_10024144 (*(byte *)(((uintptr_t)pf_module_state + 0xb3cU)))
#undef DAT_10024148
#define DAT_10024148 (*(int *)(((uintptr_t)pf_module_state + 0xb40U)))
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
#undef UINT_40010884
#define UINT_40010884 (*(uint *)(0x40010884U))
#undef UINT_400108cc
#define UINT_400108cc (*(uint *)(0x400108ccU))
#undef str_1002396d
#define str_1002396d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x365U)))
#define local_7f48 (*(undefined4 *)(frame + 24))
#define local_7f41 (*(byte (*)[40])(frame + 31))
#define local_7f19 (*(byte (*)[241])(frame + 71))
#define local_7e28 (*(uint *)(frame + 312))
#define local_7d33 (*(byte (*)[251])(frame + 557))
#define local_7c38 (*(int (*)[7942])(frame + 808))
#define auStack_7e24 (*(undefined1 (*)[241])(frame + 316))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001a398
 */

void recovered_1001a398(int param_1,int param_2,int param_3,undefined4 param_4,int param_5)

{
  unsigned char frame[32640] __attribute__((aligned(16))) = {0};

  int iVar1;
  int *piVar2;
  byte *pbVar3;
  ulong uVar4;
  uint uVar5;
  byte bVar6;
  byte bVar7;
  undefined1 *entries;
  uint uVar8;
  undefined1 *entryCapacity;
  uint uVar9;
  int iVar10;
  uint *outEntryCount;
  byte bVar11;
  byte *pbVar12;
  byte *pbVar13;
  char *pcVar14;
  int iVar15;
  code *pcVar16;
  byte *pbVar17;
  byte *pbVar18;
  bool bVar19;
  bool bVar20;

  if (param_5 == 0) goto LAB_1001a82c;
  pbVar18 = (byte *)(param_5 + 8);
  iVar1 = *(int *)(param_5 + 4);
  if ((*pbVar18 == 0) || (iVar1 != 4)) {
    if (iVar1 == 0) {
      uVar8 = recovered_10005d20();
      pcVar14 = str_1002396d;
LAB_1001a558:
      piVar2 = recovered_10011f28((byte *)pcVar14,uVar8);
      goto joined_r0x1001a560;
    }
    if (iVar1 != 5) goto LAB_1001a82c;
    pcVar14 = (char *)(param_5 + 0x30);
    bVar19 = recovered_10013aec((byte *)pcVar14);
    if (bVar19) {
      uVar8 = *(uint *)(param_5 + 0x124);
      goto LAB_1001a558;
    }
    pbVar18 = (byte *)0x0;
    pbVar13 = (byte *)0x0;
    if (*pcVar14 != 0) {
      pbVar3 = (byte *)(param_5 + 0x31);
      bVar11 = *pcVar14;
      do {
        bVar6 = *pbVar3;
        if (bVar11 == 0x2f) {
          pbVar13 = pbVar3 + -1;
        }
        pbVar3 = pbVar3 + 1;
        bVar11 = bVar6;
      } while (bVar6 != 0);
    }
    pbVar3 = (byte *)pcVar14;
    if (pbVar13 != (byte *)0x0) {
      pbVar3 = pbVar13 + 1;
    }
    if (*pbVar3 != 0) {
      pbVar18 = (byte *)0x0;
      bVar11 = *pbVar3;
      do {
        bVar6 = pbVar3[1];
        if (bVar11 == 0x2e) {
          pbVar18 = pbVar3;
        }
        pbVar3 = pbVar3 + 1;
        bVar11 = bVar6;
      } while (bVar6 != 0);
    }
    pbVar13 = &DAT_10023774;
    if (pbVar18 != (byte *)0x0) {
      pbVar13 = pbVar18;
    }
    uVar8 = (uint)*pbVar13;
    if (uVar8 == 0) {
      bVar6 = 0x2e;
      bVar11 = 0;
LAB_1001a810:
      if (bVar11 == bVar6) {
        piVar2 = recovered_100132e8((byte *)pcVar14,*(uint *)(param_5 + 0x124));
        goto joined_r0x1001a560;
      }
    }
    else {
      if (uVar8 - 0x41 < 0x1a) {
        uVar8 = uVar8 | 0x20;
      }
      if (uVar8 == 0x2e) {
        uVar8 = (uint)pbVar13[1];
        if (uVar8 == 0) {
          bVar6 = 0x61;
          bVar11 = 0;
        }
        else {
          if (uVar8 - 0x41 < 0x1a) {
            uVar8 = uVar8 | 0x20;
          }
          if (uVar8 != 0x61) goto LAB_1001a82c;
          uVar8 = (uint)pbVar13[2];
          bVar6 = 0x70;
          bVar11 = 0;
          if (uVar8 != 0) {
            if (uVar8 - 0x41 < 0x1a) {
              uVar8 = uVar8 | 0x20;
            }
            if (uVar8 != 0x70) goto LAB_1001a82c;
            uVar8 = (uint)pbVar13[3];
            bVar11 = 0;
            if (uVar8 != 0) {
              if (uVar8 - 0x41 < 0x1a) {
                uVar8 = uVar8 | 0x20;
              }
              if (uVar8 != 0x70) goto LAB_1001a82c;
              bVar11 = pbVar13[4];
              bVar6 = 0;
            }
          }
        }
        goto LAB_1001a810;
      }
    }
  }
  else {
    local_7f48 = (char *)recovered_10005d20();
    bVar11 = *pbVar18;
    piVar2 = (int *)0x0;
    local_7e28 = 0;
    if (bVar11 == 0) goto joined_r0x1001a560;
    pbVar3 = (byte *)0x0;
    pbVar13 = (byte *)(param_5 + 9);
    bVar6 = bVar11;
    do {
      bVar7 = *pbVar13;
      if (bVar6 == 0x2f) {
        pbVar3 = pbVar13 + -1;
      }
      pbVar13 = pbVar13 + 1;
      bVar6 = bVar7;
    } while (bVar7 != 0);
    pbVar13 = pbVar18;
    if (pbVar3 != (byte *)0x0) {
      pbVar13 = pbVar3 + 1;
    }
    pbVar3 = (byte *)0x0;
    if (*pbVar13 != 0) {
      bVar6 = *pbVar13;
      do {
        bVar7 = pbVar13[1];
        if (bVar6 == 0x2e) {
          pbVar3 = pbVar13;
        }
        pbVar13 = pbVar13 + 1;
        bVar6 = bVar7;
      } while (bVar7 != 0);
    }
    if (pbVar3 == (byte *)0x0) {
      pbVar3 = &DAT_10023774;
    }
    uVar8 = (uint)*pbVar3;
    if (uVar8 == 0) {
      iVar1 = 0x2e;
      goto LAB_1001a56c;
    }
    if (uVar8 - 0x41 < 0x1a) {
      uVar8 = uVar8 | 0x20;
    }
    if ((uVar8 == 0x2e) && (uVar8 = (uint)pbVar3[1], uVar8 != 0)) {
      if (uVar8 - 0x41 < 0x1a) {
        uVar8 = uVar8 | 0x20;
      }
      if (uVar8 == 0x61) {
        uVar8 = (uint)pbVar3[2];
        iVar1 = 0x70;
        if (uVar8 == 0) {
LAB_1001a56c:
          if (iVar1 == 0) {
LAB_1001a574:
            piVar2 = recovered_100132e8(pbVar18,(uint)local_7f48);
            goto joined_r0x1001a560;
          }
        }
        else {
          if (uVar8 - 0x41 < 0x1a) {
            uVar8 = uVar8 | 0x20;
          }
          if (uVar8 == 0x70) {
            uVar8 = (uint)pbVar3[3];
            if (uVar8 == 0) goto LAB_1001a56c;
            if (uVar8 - 0x41 < 0x1a) {
              uVar8 = uVar8 | 0x20;
            }
            if ((uVar8 != 0x70) || (pbVar3[4] != 0)) goto LAB_1001a6b8;
            goto LAB_1001a574;
          }
        }
      }
    }
LAB_1001a6b8:
    uVar8 = 0;
    do {
      bVar6 = *(byte *)(param_5 + 9 + uVar8);
      local_7f19[uVar8] = bVar11;
      uVar8 = uVar8 + 1;
      if (0xef < uVar8) break;
      bVar11 = bVar6;
    } while (bVar6 != 0);
    local_7f19[uVar8] = 0;
    uVar4 = strlen((char *)local_7f19);
    if (uVar4 < 0xf1) {
      iVar1 = 0xf0;
      if (uVar4 != 0xf0) {
        local_7f19[uVar4] = 0x2e;
        iVar1 = uVar4 + 1;
        if (uVar4 < 0xef) {
          local_7f19[iVar1] = 0x61;
          iVar1 = uVar4 + 2;
          if (uVar4 != 0xee) {
            local_7f19[iVar1] = 0x70;
            iVar1 = uVar4 + 3;
            if (uVar4 < 0xed) {
              local_7f19[iVar1] = 0x70;
              iVar1 = uVar4 + 4;
            }
          }
        }
      }
      local_7f19[iVar1] = 0;
    }
    piVar2 = recovered_100132e8(local_7f19,(uint)local_7f48);
    if (piVar2 != (int *)0x0) goto joined_r0x1001a560;
    iVar1 = Ram40010800;
    if ((iVar1 == 0x50414d57) && (iVar1 = Ram40010804, iVar1 != 0)) {
      uVar8 = Ram40010808;
      bVar20 = 0xb < uVar8;
      bVar19 = uVar8 == 0xc;
      if (bVar20) {
        uVar8 = Ram40010808;
        bVar19 = uVar8 == 0xcf;
      }
      if ((!bVar20 || uVar8 < 0xcf) || bVar19) goto LAB_1001a7a8;
      pcVar16 = (code *)UINT_400108cc;
      if (pcVar16 == (code *)0x0) {
        piVar2 = (int *)0x0;
        goto joined_r0x1001a560;
      }
      entries = &DAT_10023774;
      entryCapacity = auStack_7e24;
      outEntryCount = (uint *)0x40;
      pcVar14 = local_7f48;
override_prt_1001a954_1c52fd2a:
      uVar5 = (*pcVar16)(pcVar14,entries,(uint)entryCapacity,outEntryCount);
      uVar8 = 0;
      if (uVar5 != 0) {
        uVar8 = local_7e28;
      }
      piVar2 = (int *)0x0;
      if (uVar5 != 0 && uVar8 != 0) {
        uVar8 = 0;
        pbVar13 = local_7d33 + 1;
        do {
          pbVar3 = (byte *)0x0;
          pbVar12 = local_7d33 + uVar8 * 0x1f8;
          bVar11 = *pbVar12;
          if (bVar11 != 0) {
            pbVar17 = pbVar13;
            bVar6 = bVar11;
            do {
              bVar7 = *pbVar17;
              if (bVar6 == 0x2f) {
                pbVar3 = pbVar17 + -1;
              }
              pbVar17 = pbVar17 + 1;
              bVar6 = bVar7;
            } while (bVar7 != 0);
          }
          pbVar17 = pbVar12;
          if (pbVar3 != (byte *)0x0) {
            pbVar17 = pbVar3 + 1;
          }
          pbVar3 = (byte *)0x0;
          if (*pbVar17 != 0) {
            bVar6 = *pbVar17;
            do {
              bVar7 = pbVar17[1];
              if (bVar6 == 0x2e) {
                pbVar3 = pbVar17;
              }
              pbVar17 = pbVar17 + 1;
              bVar6 = bVar7;
            } while (bVar7 != 0);
          }
          pbVar17 = pbVar3;
          if (pbVar3 == (byte *)0x0) {
            pbVar17 = &DAT_10023774;
          }
          uVar5 = (uint)*pbVar17;
          if (uVar5 == 0) {
            bVar7 = 0x2e;
            bVar6 = 0;
LAB_1001aae8:
            if ((bVar6 == bVar7) &&
               ((local_7c38[uVar8 * 0x7e] == 2 || ((local_7d33[uVar8 * 0x1f8 + 0xf7] & 2) != 0)))) {
              if (bVar11 == 0) {
                pbVar3 = (byte *)0x0;
              }
              else {
                pbVar3 = (byte *)0x0;
                pbVar17 = pbVar13;
                do {
                  bVar6 = *pbVar17;
                  if (bVar11 == 0x2f) {
                    pbVar3 = pbVar17 + -1;
                  }
                  pbVar17 = pbVar17 + 1;
                  bVar11 = bVar6;
                } while (bVar6 != 0);
              }
              pbVar17 = pbVar12;
              if (pbVar3 != (byte *)0x0) {
                pbVar17 = pbVar3 + 1;
              }
              uVar4 = strlen((char *)pbVar17);
              if (4 < uVar4) {
                bVar11 = *pbVar17;
                iVar1 = 0;
                uVar5 = 0;
                if (bVar11 != 0) {
                  uVar9 = 0;
                  do {
                    uVar5 = uVar9 + 1;
                    local_7f41[uVar9] = bVar11;
                    if (0x26 < uVar5) break;
                    bVar11 = pbVar17[uVar9 + 1];
                    uVar9 = uVar5;
                  } while (bVar11 != 0);
                }
                local_7f41[uVar5] = 0;
                local_7f41[uVar4 - 4] = 0;
                do {
                  uVar5 = (uint)pbVar18[iVar1];
                  uVar9 = (uint)local_7f41[iVar1];
                  if (uVar5 == 0 || uVar9 == 0) {
                    if (uVar5 == uVar9) goto LAB_1001ac88;
                    break;
                  }
                  iVar1 = iVar1 + 1;
                  if (uVar9 - 0x41 < 0x1a) {
                    uVar9 = uVar9 | 0x20;
                  }
                  if (uVar5 - 0x41 < 0x1a) {
                    uVar5 = uVar5 | 0x20;
                  }
                } while (uVar5 == uVar9);
                pbVar3 = pbVar18;
                do {
                  uVar9 = (uint)*pbVar3;
                  uVar5 = (uint)*pbVar17;
                  if (uVar9 == 0 || uVar5 == 0) {
                    if (uVar9 == uVar5) goto LAB_1001ac88;
                    break;
                  }
                  pbVar17 = pbVar17 + 1;
                  if (uVar5 - 0x41 < 0x1a) {
                    uVar5 = uVar5 | 0x20;
                  }
                  if (uVar9 - 0x41 < 0x1a) {
                    uVar9 = uVar9 | 0x20;
                  }
                  pbVar3 = pbVar3 + 1;
                } while (uVar9 == uVar5);
              }
            }
          }
          else {
            if (uVar5 - 0x41 < 0x1a) {
              uVar5 = uVar5 | 0x20;
            }
            if (uVar5 == 0x2e) {
              pbVar17 = pbVar3;
              if (pbVar3 == (byte *)0x0) {
                pbVar17 = &DAT_10023774;
              }
              uVar5 = (uint)pbVar17[1];
              if (uVar5 == 0) {
                bVar7 = 0x61;
                bVar6 = 0;
              }
              else {
                if (uVar5 - 0x41 < 0x1a) {
                  uVar5 = uVar5 | 0x20;
                }
                if (uVar5 != 0x61) goto LAB_1001ac50;
                pbVar17 = pbVar3;
                if (pbVar3 == (byte *)0x0) {
                  pbVar17 = &DAT_10023774;
                }
                bVar7 = 0x70;
                uVar5 = (uint)pbVar17[2];
                bVar6 = 0;
                if (uVar5 != 0) {
                  if (uVar5 - 0x41 < 0x1a) {
                    uVar5 = uVar5 | 0x20;
                  }
                  if (uVar5 != 0x70) goto LAB_1001ac50;
                  pbVar17 = pbVar3;
                  if (pbVar3 == (byte *)0x0) {
                    pbVar17 = &DAT_10023774;
                  }
                  uVar5 = (uint)pbVar17[3];
                  bVar6 = 0;
                  if (uVar5 != 0) {
                    if (uVar5 - 0x41 < 0x1a) {
                      uVar5 = uVar5 | 0x20;
                    }
                    if (uVar5 != 0x70) goto LAB_1001ac50;
                    bVar7 = 0;
                    if (pbVar3 == (byte *)0x0) {
                      pbVar3 = &DAT_10023774;
                    }
                    bVar6 = pbVar3[4];
                  }
                }
              }
              goto LAB_1001aae8;
            }
          }
LAB_1001ac50:
          piVar2 = (int *)0x0;
          if (0x3e < uVar8) break;
          uVar8 = uVar8 + 1;
          pbVar13 = pbVar13 + 0x1f8;
        } while (uVar8 < local_7e28);
      }
    }
    else {
LAB_1001a7a8:
      iVar1 = Ram40010800;
      piVar2 = (int *)0x0;
      if ((iVar1 == 0x50414d57) && (iVar1 = Ram40010804, iVar1 != 0)) {
        uVar8 = Ram40010808;
        bVar19 = 0xb < uVar8;
        if (bVar19) {
          uVar8 = Ram40010808;
        }
        if ((bVar19 && 0x87 < uVar8) && (pcVar16 = (code *)UINT_40010884, pcVar16 != (code *)0x0)) {
          entries = auStack_7e24;
          outEntryCount = &local_7e28;
          entryCapacity = (undefined1 *)0x40;
          pcVar14 = &DAT_10023774;
          goto override_prt_1001a954_1c52fd2a;
        }
      }
    }
joined_r0x1001a560:
    if (piVar2 != (int *)0x0) {
      recovered_10012318(piVar2,param_1 + 8,param_2 + 4,param_3 - 0x10,0x1c);
      goto LAB_1001acc0;
    }
  }
LAB_1001a82c:
  iVar1 = param_1 + 0xb;
  if (*(int *)(param_5 + 4) == 0) {
    iVar15 = param_2 + 9;
    uVar8 = DAT_10024144 ^ 0xff;
    if (DAT_10024148 == 0) {
      uVar8 = 0xff;
    }
    recovered_10012e84(iVar1,iVar15,0x1c,0x15,0xffecd7,uVar8);
    uVar8 = 0xcc823e;
    iVar10 = 0x15;
  }
  else {
    iVar15 = param_2 + 8;
    uVar8 = DAT_10024144 ^ 0xff;
    if (DAT_10024148 == 0) {
      uVar8 = 0xff;
    }
    recovered_10012e84(iVar1,iVar15,0x1c,0x18,(uint)*(uint3 *)(param_5 + 0x128),uVar8);
    uVar8 = 0x606060;
    iVar10 = 0x18;
  }
  recovered_1001297c(iVar1,iVar15,0x1c,iVar10,uVar8);
LAB_1001acc0:
  recovered_10012dc0(param_1 + -6,param_2 + 0x22,0x3e,(byte *)(param_5 + 8),0x2d2d2d);
  return;
LAB_1001ac88:
  piVar2 = recovered_100132e8(pbVar12,(uint)local_7f48);
  goto joined_r0x1001a560;
}

#undef DAT_10023774
#undef DAT_10024144
#undef DAT_10024148
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef Ram40010800
#undef Ram40010804
#undef Ram40010808
#undef UINT_40010884
#undef UINT_400108cc
#undef str_1002396d
#undef local_7f48
#undef local_7f41
#undef local_7f19
#undef local_7e28
#undef local_7d33
#undef local_7c38
#undef auStack_7e24

#undef DAT_1002413c
#define DAT_1002413c (*(uint32_t *)(((uintptr_t)pf_module_state + 0xb34U)))
#undef DAT_100242f0
#define DAT_100242f0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0xce8U)))
#undef DAT_100242f4
#define DAT_100242f4 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0xcecU)))
#undef DAT_100242f8
#define DAT_100242f8 (*(int *)(((uintptr_t)pf_module_state + 0xcf0U)))
#undef DAT_10024314
#define DAT_10024314 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xd0cU)))
#undef DAT_10028fb0
#define DAT_10028fb0 (*(void * *)(((uintptr_t)pf_module_state + 0x59a8U)))
#undef DAT_10028fb4
#define DAT_10028fb4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x59acU)))
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
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001acec
 */

undefined1 recovered_1001acec(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong size;
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  code *pcVar5;
  undefined1 uVar6;
  bool bVar7;

  uVar6 = 0;
  if (DAT_100242f8 == 0) {
    return 0;
  }
  puVar1 = DAT_100242f0;
  puVar2 = &DAT_100242f0;
  if (0 < (int)DAT_100242f0) {
    puVar1 = DAT_100242f4;
    puVar2 = DAT_100242f4;
  }
  if ((int)puVar1 < 1) {
    return 0;
  }
  size = (int)DAT_100242f0 * (int)puVar2 * 4;
  if ((size != 0) && ((uVar6 = 1, DAT_10028fb0 == (void *)0x0 || (DAT_10028fb4 != size)))) {
    if (DAT_10028fb0 != (void *)0x0) {
      iVar4 = Ram40010800;
      if ((iVar4 == 0x50414d57) && (iVar4 = Ram40010804, iVar4 != 0)) {
        uVar3 = Ram40010808;
        bVar7 = 0xb < uVar3;
        if (bVar7) {
          uVar3 = Ram40010808;
        }
        if ((bVar7 && 0x53 < uVar3) && (pcVar5 = (code *)UINT_40010850, pcVar5 != (code *)0x0)) {
          (*pcVar5)(DAT_10028fb0);
        }
      }
      DAT_10028fb0 = (void *)0x0;
    }
    DAT_1002413c = 0xffffffff;
    iVar4 = Ram40010800;
    uVar6 = 0;
    DAT_10024314 = 0;
    DAT_10028fb4 = 0;
    if ((iVar4 == 0x50414d57) && (iVar4 = Ram40010804, iVar4 != 0)) {
      uVar3 = Ram40010808;
      bVar7 = 0xb < uVar3;
      if (bVar7) {
        uVar3 = Ram40010808;
      }
      if ((bVar7 && 0x4f < uVar3) && (pcVar5 = (code *)UINT_4001084c, pcVar5 != (code *)0x0)) {
        DAT_10028fb0 = (*pcVar5)(size);
        if (DAT_10028fb0 == (void *)0x0) {
          return 0;
        }
        DAT_10028fb4 = size;
        return 1;
      }
    }
    DAT_10028fb0 = (void *)0x0;
  }
  return uVar6;
}

#undef DAT_1002413c
#undef DAT_100242f0
#undef DAT_100242f4
#undef DAT_100242f8
#undef DAT_10024314
#undef DAT_10028fb0
#undef DAT_10028fb4
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef Ram40010800
#undef Ram40010804
#undef Ram40010808
#undef UINT_4001084c
#undef UINT_40010850

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001ae80
 */

uint recovered_1001ae80(int param_1,int param_2,int param_3,uint param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint unaff_r9;
  uint uVar3;

  if (param_1 != 0) {
    uVar2 = *(uint *)(param_1 + 0x1c);
    if (uVar2 != 0) {
      uVar3 = *(uint *)(param_1 + 0x24);
      if (uVar3 != 0) {
        unaff_r9 = *(uint *)(param_1 + 0x2c);
      }
      if (uVar3 != 0 && unaff_r9 != 0) {
        if (uVar2 < 8) {
          uVar2 = (((param_2 << (uVar2 & 0xff)) - param_2) + 0x7fU) / 0xff;
        }
        else {
          uVar2 = param_2 << (uVar2 - 8 & 0xff);
        }
        if (uVar3 < 8) {
          uVar3 = (((param_3 << (uVar3 & 0xff)) - param_3) + 0x7fU) / 0xff;
        }
        else {
          uVar3 = param_3 << (uVar3 - 8 & 0xff);
        }
        if (unaff_r9 < 8) {
          uVar1 = (((param_4 << (unaff_r9 & 0xff)) - param_4) + 0x7f) / 0xff;
        }
        else {
          uVar1 = param_4 << (unaff_r9 - 8 & 0xff);
        }
        return uVar2 << (*(uint *)(param_1 + 0x20) & 0xff) |
               uVar3 << (*(uint *)(param_1 + 0x28) & 0xff) |
               uVar1 << (*(uint *)(param_1 + 0x30) & 0xff);
      }
    }
    if (*(int *)(param_1 + 0x18) == 0x10) {
      return (uint)((short)((short)param_2 * 0x1f + 0x7f) * 0x4041) >> 0xb & 0x3f800 |
             (uint)((param_3 * 0x3f + 0x7f) * 0x8081) >> 0x12 & 0x1fe0 |
             (uint)((short)((short)param_4 * 0x1f + 0x7f) * 0x4041) >> 0x16;
    }
    if (*(int *)(param_1 + 0x18) == 0xf) {
      return (uint)((short)((short)param_2 * 0x1f + 0x7f) * 0x4041) >> 0xc & 0x1fc00 |
             (uint)((short)((short)param_3 * 0x1f + 0x7f) * 0x4041) >> 0x11 & 0xfe0 |
             (uint)((short)((short)param_4 * 0x1f + 0x7f) * 0x4041) >> 0x16;
    }
  }
  return param_3 << 8 | param_2 << 0x10 | param_4;
}


#undef DAT_1012e408
#define DAT_1012e408 (*(uint *)(((uintptr_t)pf_module_state + 0x10ae00U)))
#undef DAT_1012e40c
#define DAT_1012e40c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x10ae04U)))
#undef DAT_1012e40d
#define DAT_1012e40d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x10ae05U)))
#undef DAT_1012e40e
#define DAT_1012e40e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x10ae06U)))
#undef DAT_1012e40f
#define DAT_1012e40f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x10ae07U)))
#undef DAT_1012e410
#define DAT_1012e410 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x10ae08U)))
#undef DAT_1012e411
#define DAT_1012e411 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x10ae09U)))
#undef DAT_1012e412
#define DAT_1012e412 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x10ae0aU)))
#undef DAT_1012e413
#define DAT_1012e413 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x10ae0bU)))
#undef DAT_1012e414
#define DAT_1012e414 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x10ae0cU)))
#undef DAT_1012e415
#define DAT_1012e415 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x10ae0dU)))
#undef DAT_1012e416
#define DAT_1012e416 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x10ae0eU)))
#undef DAT_1012e417
#define DAT_1012e417 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x10ae0fU)))
#undef DAT_1012e418
#define DAT_1012e418 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x10ae10U)))
#undef DAT_1012e419
#define DAT_1012e419 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x10ae11U)))
#undef DAT_1012e41a
#define DAT_1012e41a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x10ae12U)))
#undef DAT_1012e41b
#define DAT_1012e41b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x10ae13U)))
#undef DAT_1012e41c
#define DAT_1012e41c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x10ae14U)))
#undef DAT_1012e41d
#define DAT_1012e41d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x10ae15U)))
#undef DAT_1012e41e
#define DAT_1012e41e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x10ae16U)))
#undef DAT_1012e41f
#define DAT_1012e41f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x10ae17U)))
#undef DAT_1012e420
#define DAT_1012e420 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x10ae18U)))
#undef DAT_1012e421
#define DAT_1012e421 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x10ae19U)))
#undef DAT_1012e422
#define DAT_1012e422 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x10ae1aU)))
#undef DAT_1012e423
#define DAT_1012e423 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x10ae1bU)))
#undef DAT_1012e424
#define DAT_1012e424 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x10ae1cU)))
#undef DAT_1012e425
#define DAT_1012e425 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x10ae1dU)))
#undef DAT_1012e426
#define DAT_1012e426 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x10ae1eU)))
#undef DAT_1012e427
#define DAT_1012e427 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x10ae1fU)))
#undef DAT_1012e428
#define DAT_1012e428 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x10ae20U)))
#undef DAT_1012e429
#define DAT_1012e429 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x10ae21U)))
#undef DAT_1012e42a
#define DAT_1012e42a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x10ae22U)))
#undef DAT_1012e42b
#define DAT_1012e42b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x10ae23U)))
#undef DAT_1012e42c
#define DAT_1012e42c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x10ae24U)))
#undef DAT_1012e42d
#define DAT_1012e42d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x10ae25U)))
#undef DAT_1012e42e
#define DAT_1012e42e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x10ae26U)))
#undef DAT_1012e42f
#define DAT_1012e42f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x10ae27U)))
#undef DAT_1012e430
#define DAT_1012e430 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x10ae28U)))
#undef DAT_1012e431
#define DAT_1012e431 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x10ae29U)))
#undef DAT_1012e432
#define DAT_1012e432 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x10ae2aU)))
#undef DAT_1012e433
#define DAT_1012e433 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x10ae2bU)))
#undef DAT_1012e434
#define DAT_1012e434 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x10ae2cU)))
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
#undef UINT_4001082c
#define UINT_4001082c (*(uint *)(0x4001082cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001aff0
 */

void recovered_1001aff0(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  code *pcVar2;
  uint uVar3;
  undefined1 *puVar4;
  uint uVar5;
  bool bVar6;

  iVar1 = Ram40010800;
  if ((iVar1 == 0x50414d57) && (iVar1 = Ram40010804, iVar1 != 0)) {
    uVar3 = Ram40010808;
    bVar6 = 0xb < uVar3;
    if (bVar6) {
      uVar3 = Ram40010808;
    }
    if (((bVar6 && 0x2f < uVar3) && (pcVar2 = (code *)UINT_4001082c, pcVar2 != (code *)0x0)) &&
       (uVar3 = (*pcVar2)(), uVar3 != 0)) {
      uVar5 = (uVar3 & 0xffff) >> 8;
      if ((uVar3 & 0x60000) == 0) {
        if ((uVar3 & 0x800000ff) == 0x80000000 && uVar5 == 0) {
          return;
        }
        uVar3 = uVar3 & 0xff;
        if (uVar3 - 0x20 < 0x5f) {
          uVar5 = uVar3;
          if (uVar3 - 0x41 < 0x1a) {
            uVar5 = uVar3 | 0x20;
          }
          puVar4 = &DAT_1012e40e;
          DAT_1012e408 = uVar3;
          switch((uintptr_t)(uVar5)) {
          case 0x20:
            puVar4 = &DAT_1012e434;
            break;
          default:
            goto switchD_1001b0c8_caseD_21;
          case 0x2d:
            puVar4 = &DAT_1012e432;
            break;
          case 0x2e:
            puVar4 = &DAT_1012e433;
            break;
          case 0x30:
            puVar4 = &DAT_1012e428;
            break;
          case 0x31:
            puVar4 = &DAT_1012e429;
            break;
          case 0x32:
            puVar4 = &DAT_1012e42a;
            break;
          case 0x33:
            puVar4 = &DAT_1012e42b;
            break;
          case 0x34:
            puVar4 = &DAT_1012e42c;
            break;
          case 0x35:
            puVar4 = &DAT_1012e42d;
            break;
          case 0x36:
            puVar4 = &DAT_1012e42e;
            break;
          case 0x37:
            puVar4 = &DAT_1012e42f;
            break;
          case 0x38:
            puVar4 = &DAT_1012e430;
            break;
          case 0x39:
            puVar4 = &DAT_1012e431;
            break;
          case 0x61:
            break;
          case 0x62:
            puVar4 = &DAT_1012e40f;
            break;
          case 99:
            puVar4 = &DAT_1012e410;
            break;
          case 100:
            puVar4 = &DAT_1012e411;
            break;
          case 0x65:
            puVar4 = &DAT_1012e412;
            break;
          case 0x66:
            puVar4 = &DAT_1012e413;
            break;
          case 0x67:
            puVar4 = &DAT_1012e414;
            break;
          case 0x68:
            puVar4 = &DAT_1012e415;
            break;
          case 0x69:
            puVar4 = &DAT_1012e416;
            break;
          case 0x6a:
            puVar4 = &DAT_1012e417;
            break;
          case 0x6b:
            puVar4 = &DAT_1012e418;
            break;
          case 0x6c:
            puVar4 = &DAT_1012e419;
            break;
          case 0x6d:
            puVar4 = &DAT_1012e41a;
            break;
          case 0x6e:
            puVar4 = &DAT_1012e41b;
            break;
          case 0x6f:
            puVar4 = &DAT_1012e41c;
            break;
          case 0x70:
            puVar4 = &DAT_1012e41d;
            break;
          case 0x71:
            puVar4 = &DAT_1012e41e;
            break;
          case 0x72:
            puVar4 = &DAT_1012e41f;
            break;
          case 0x73:
            puVar4 = &DAT_1012e420;
            break;
          case 0x74:
            puVar4 = &DAT_1012e421;
            break;
          case 0x75:
            puVar4 = &DAT_1012e422;
            break;
          case 0x76:
            puVar4 = &DAT_1012e423;
            break;
          case 0x77:
            puVar4 = &DAT_1012e424;
            break;
          case 0x78:
            puVar4 = &DAT_1012e425;
            break;
          case 0x79:
            puVar4 = &DAT_1012e426;
            break;
          case 0x7a:
            puVar4 = &DAT_1012e427;
          }
        }
        else if ((uVar5 == 0xe || uVar3 == 0x7f) || (uVar3 == 8)) {
          puVar4 = &DAT_1012e40c;
        }
        else {
          if ((uVar5 != 0x1c && uVar3 != 0xd) && (uVar3 != 10)) {
            if (uVar3 == 0x1b || uVar5 == 1) {
              *(undefined1 *)(param_1 + 1) = 1;
            }
            return;
          }
          puVar4 = &DAT_1012e40d;
        }
        *puVar4 = 1;
        return;
      }
    }
  }
switchD_1001b0c8_caseD_21:
  return;
}

#undef DAT_1012e408
#undef DAT_1012e40c
#undef DAT_1012e40d
#undef DAT_1012e40e
#undef DAT_1012e40f
#undef DAT_1012e410
#undef DAT_1012e411
#undef DAT_1012e412
#undef DAT_1012e413
#undef DAT_1012e414
#undef DAT_1012e415
#undef DAT_1012e416
#undef DAT_1012e417
#undef DAT_1012e418
#undef DAT_1012e419
#undef DAT_1012e41a
#undef DAT_1012e41b
#undef DAT_1012e41c
#undef DAT_1012e41d
#undef DAT_1012e41e
#undef DAT_1012e41f
#undef DAT_1012e420
#undef DAT_1012e421
#undef DAT_1012e422
#undef DAT_1012e423
#undef DAT_1012e424
#undef DAT_1012e425
#undef DAT_1012e426
#undef DAT_1012e427
#undef DAT_1012e428
#undef DAT_1012e429
#undef DAT_1012e42a
#undef DAT_1012e42b
#undef DAT_1012e42c
#undef DAT_1012e42d
#undef DAT_1012e42e
#undef DAT_1012e42f
#undef DAT_1012e430
#undef DAT_1012e431
#undef DAT_1012e432
#undef DAT_1012e433
#undef DAT_1012e434
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef Ram40010800
#undef Ram40010804
#undef Ram40010808
#undef UINT_4001082c

#undef DAT_1001b880
#define DAT_1001b880 (*(uint64_t *)(0x1001b880U))
#undef DAT_1001b888
#define DAT_1001b888 (*(uint64_t *)(0x1001b888U))
#undef DAT_10023774
#define DAT_10023774 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x16cU)))
#undef DAT_10023e0f
#define DAT_10023e0f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x807U)))
#undef DAT_10023e14
#define DAT_10023e14 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80cU)))
#undef DAT_1002405c
#define DAT_1002405c (*(uint32_t *)(((uintptr_t)pf_module_state + 0xa54U)))
#undef DAT_10024060
#define DAT_10024060 (*(uint32_t *)(((uintptr_t)pf_module_state + 0xa58U)))
#undef DAT_100242dc
#define DAT_100242dc (*(uint *)(((uintptr_t)pf_module_state + 0xcd4U)))
#undef DAT_1002430c
#define DAT_1002430c (*(uint8_t * *)(((uintptr_t)pf_module_state + 0xd04U)))
#undef DAT_10024374
#define DAT_10024374 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xd6cU)))
#undef DAT_10024378
#define DAT_10024378 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xd70U)))
#undef DAT_1002437c
#define DAT_1002437c (*(uint8_t *)(((uintptr_t)pf_module_state + 0xd74U)))
#undef DAT_10024384
#define DAT_10024384 (*(uint64_t *)(((uintptr_t)pf_module_state + 0xd7cU)))
#undef DAT_1002438c
#define DAT_1002438c (*(uint32_t *)(((uintptr_t)pf_module_state + 0xd84U)))
#undef DAT_10024390
#define DAT_10024390 (*(uint32_t *)(((uintptr_t)pf_module_state + 0xd88U)))
#undef DAT_10024399
#define DAT_10024399 (*(char *)(((uintptr_t)pf_module_state + 0xd91U)))
#undef DAT_1002439a
#define DAT_1002439a (*(char *)(((uintptr_t)pf_module_state + 0xd92U)))
#undef DAT_1002439b
#define DAT_1002439b (*(char *)(((uintptr_t)pf_module_state + 0xd93U)))
#undef DAT_10024588
#define DAT_10024588 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xf80U)))
#undef DAT_100245d0
#define DAT_100245d0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xfc8U)))
#undef DAT_10024618
#define DAT_10024618 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1010U)))
#undef DAT_1002461c
#define DAT_1002461c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1014U)))
#undef DAT_10024620
#define DAT_10024620 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1018U)))
#undef DAT_10024624
#define DAT_10024624 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x101cU)))
#undef DAT_1002490c
#define DAT_1002490c (*(int *)(((uintptr_t)pf_module_state + 0x1304U)))
#undef DAT_10027228
#define DAT_10027228 (*(char *)(((uintptr_t)pf_module_state + 0x3c20U)))
#undef _DAT_10024378
#define _DAT_10024378 (*(uint32_t *)(((uintptr_t)pf_module_state + 0xd70U)))
#undef _DAT_1002437c
#define _DAT_1002437c (*(uint64_t *)(((uintptr_t)pf_module_state + 0xd74U)))
#undef str_10023d7e
#define str_10023d7e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x776U)))
#undef str_10023e05
#define str_10023e05 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7fdU)))
#undef str_10023e18
#define str_10023e18 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x810U)))
#undef str_10023e1e
#define str_10023e1e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x816U)))
#undef str_10023e25
#define str_10023e25 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x81dU)))
#undef str_10023e34
#define str_10023e34 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x82cU)))
#define local_4a (*(undefined4 *)(frame + 22))
#define local_46 (*(undefined4 *)(frame + 26))
#define local_42 (*(undefined2 *)(frame + 30))
#define local_40 (*(undefined1 *)(frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001b500
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_1001b500(int param_1,undefined4 param_2)

{
  unsigned char frame[128] __attribute__((aligned(16))) = {0};

  bool bVar1;
  byte bVar2;
  undefined *puVar3;
  char *pcVar4;
  uint uVar5;
  ulong uVar6;
  undefined4 *puVar7;
  int iVar8;
  uint uVar9;
  byte *pbVar10;
  undefined4 uVar11;
  int extraout_r2 = 0;
  ulong uVar12;
  uint uVar13;
  char cVar14;
  byte *pbVar15;
  byte *pbVar16;
  byte bVar17;
  int iVar18;
  uint uVar19;

  uVar13 = DAT_100242dc;
  memset(&DAT_10024374,0,0x59c);
  puVar3 = DAT_1002430c;
  DAT_10024374 = 1;
  DAT_10024384 = (0xffffffffffffffffU);
  DAT_10024390 = 0xffffffff;
  DAT_1002438c = 0xffffffff;
  if (0x13 < uVar13) {
    DAT_10024374 = 1;
    _DAT_10024378 = param_2;
    _DAT_1002437c = (0xffffffff00000018U);
    DAT_10024384 = (0xffffffffffffffffU);
    DAT_1002438c = 0xffffffff;
    DAT_10024390 = 0xffffffff;
    return;
  }
  pcVar4 = DAT_1002430c + uVar13 * 0xd9c;
  if (*pcVar4 != '\x01') {
    DAT_10024374 = 1;
    _DAT_10024378 = param_2;
    _DAT_1002437c = (0xffffffff00000018U);
    DAT_10024384 = (0xffffffffffffffffU);
    DAT_1002438c = 0xffffffff;
    DAT_10024390 = 0xffffffff;
    return;
  }
  iVar8 = *(int *)(pcVar4 + 0x10);
  _DAT_1002437c = CONCAT44(uVar13,(int)(0xffffffff00000018U));
  _DAT_10024378 = param_2;
  if (iVar8 == 6) {
    iVar8 = extraout_r2;
    if (param_1 == 2) {
      pbVar15 = (byte *)(pcVar4 + 0xc5c);
      uVar11 = 2;
    }
    else if (param_1 == 1) {
      pbVar15 = (byte *)(pcVar4 + 0xbbc);
      uVar11 = 1;
    }
    else {
      iVar8 = extraout_r2;
      if (DAT_1002490c < 0x12) {
        *(undefined4 *)(&DAT_10024588 + DAT_1002490c * 4) = 0x15;
        *(undefined4 *)(&DAT_100245d0 + DAT_1002490c * 4) = 0xffffffff;
        iVar8 = DAT_1002490c * 0x2a;
        *(undefined4 *)(&DAT_10024618 + iVar8) = 0x736f6c43;
        *(undefined2 *)(&DAT_1002461c + iVar8) = 0x65;
        iVar18 = DAT_1002490c + 1;
        bVar1 = DAT_1002490c < 0x11;
        iVar8 = 0x736f6c43;
        DAT_1002490c = iVar18;
        if (bVar1) {
          *(undefined4 *)(&DAT_10024588 + iVar18 * 4) = 0x16;
          *(undefined4 *)(&DAT_100245d0 + DAT_1002490c * 4) = 0xffffffff;
          iVar8 = DAT_1002490c * 0x2a;
          *(undefined4 *)(&DAT_10024618 + iVar8) = 0x736f6c43;
          *(undefined2 *)(&DAT_10024620 + iVar8) = 0x6c;
          *(undefined4 *)(&DAT_1002461c + iVar8) = 0x6c412065;
          iVar8 = DAT_1002490c;
          DAT_1002490c = DAT_1002490c + 1;
        }
      }
      pbVar15 = puVar3 + uVar13 * 0xd9c + 0xcfc;
      uVar11 = 3;
    }
    recovered_10021120(pbVar15,uVar11,iVar8,puVar3);
    goto LAB_1001bbb0;
  }
  if (iVar8 == 1) {
    if (param_1 != 3) {
      if (param_1 == 1) {
        iVar8 = 0;
        do {
          local_40 = 0;
          local_42 = 0x206f;
          local_46 = 0x74207472;
          local_4a = 0x6f707845;
          pcVar4 = (char *)(&DAT_10024060)[iVar8 * 3];
          uVar6 = strlen((char *)&local_4a);
          if (uVar6 < 0x2a) {
            if (pcVar4 == (char *)0x0) {
              pcVar4 = &DAT_10023774;
            }
            if ((uVar6 == 0x29) || (cVar14 = *pcVar4, cVar14 == '\0')) {
              uVar12 = uVar6;
            }
            else {
              do {
                pcVar4 = pcVar4 + 1;
                uVar12 = uVar6 + 1;
                *(char *)((int)&local_4a + uVar6) = cVar14;
                if (0x27 < uVar6) break;
                cVar14 = *pcVar4;
                uVar6 = uVar12;
              } while (cVar14 != '\0');
            }
            *(char *)((int)&local_4a + uVar12) = '\0';
          }
          if (DAT_1002490c < 0x12) {
            *(undefined4 *)(&DAT_10024588 + DAT_1002490c * 4) = 0x1b;
            *(undefined4 *)(&DAT_100245d0 + DAT_1002490c * 4) = (&DAT_1002405c)[iVar8 * 3];
            iVar18 = DAT_1002490c;
            local_4a = local_4a & 0xff;
            if (local_4a == 0) {
              uVar13 = 0;
            }
            else {
              uVar9 = 0;
              do {
                uVar13 = uVar9 + 1;
                (&DAT_10024618)[uVar9 + iVar18 * 0x2a] = (char)local_4a;
                if (0x28 < uVar13) break;
                local_4a = (uint)*(byte *)((int)&local_4a + uVar9 + 1);
                uVar9 = uVar13;
              } while (local_4a != 0);
            }
            (&DAT_10024618)[uVar13 + iVar18 * 0x2a] = 0;
            DAT_1002490c = DAT_1002490c + 1;
          }
          iVar8 = iVar8 + 1;
        } while (iVar8 != 4);
      }
      goto LAB_1001bbb0;
    }
    if (0x11 < DAT_1002490c) {
      DAT_10024374 = 1;
      DAT_10024384 = (0xffffffffffffffffU);
      DAT_1002438c = 0xffffffff;
      DAT_10024390 = 0xffffffff;
      return;
    }
    *(undefined4 *)(&DAT_10024588 + DAT_1002490c * 4) = 0x15;
    *(undefined4 *)(&DAT_100245d0 + DAT_1002490c * 4) = 0xffffffff;
    iVar8 = DAT_1002490c * 0x2a;
    *(undefined4 *)(&DAT_10024618 + iVar8) = 0x736f6c43;
    *(undefined2 *)(&DAT_1002461c + iVar8) = 0x65;
    iVar8 = DAT_1002490c + 1;
    if (0x10 < DAT_1002490c) {
      DAT_1002490c = iVar8;
      return;
    }
    DAT_1002490c = iVar8;
    *(undefined4 *)(&DAT_10024588 + iVar8 * 4) = 0x16;
    *(undefined4 *)(&DAT_100245d0 + DAT_1002490c * 4) = 0xffffffff;
    iVar8 = DAT_1002490c * 0x2a;
    puVar7 = (undefined4 *)(&DAT_10024618 + iVar8);
    *puVar7 = 0x736f6c43;
    *(undefined2 *)(&DAT_10024620 + iVar8) = 0x6c;
    uVar11 = 0x6c412065;
  }
  else {
    if (iVar8 != 0) goto LAB_1001bbb0;
    if ((pcVar4[0xafc] == '\x01') &&
       (uVar9 = *(uint *)(pcVar4 + 0xaf4), uVar9 < *(uint *)(pcVar4 + 0xaf0))) {
      iVar8 = *(int *)(pcVar4 + 0xaec);
      pbVar15 = (byte *)(iVar8 + uVar9 * 0x1f8);
      if (iVar8 == 0) {
        uVar19 = *(uint *)(pcVar4 + 0x25c);
        uVar5 = 0;
      }
      else {
        uVar19 = *(uint *)(pbVar15 + 0x1f0);
        if (0x7fffffff < uVar19) {
          uVar19 = *(uint *)(pcVar4 + 0x25c);
        }
        uVar5 = 1;
        if (*(int *)(pbVar15 + 0x1ec) != 2) {
          uVar5 = (pbVar15[0x1e8] & 3) >> 1;
        }
      }
      bVar1 = iVar8 == 0;
      recovered_10021278(uVar13,uVar9,pbVar15 + 0xf1,pbVar15,uVar19,uVar5);
    }
    else {
      pbVar15 = (byte *)(pcVar4 + 0x78);
      if (*pbVar15 == 0) {
        pbVar10 = (byte *)0x0;
      }
      else {
        pbVar10 = (byte *)0x0;
        pbVar16 = DAT_1002430c + uVar13 * 0xd9c + 0x79;
        bVar17 = *pbVar15;
        do {
          bVar2 = *pbVar16;
          if (bVar17 == 0x2f) {
            pbVar10 = pbVar16 + -1;
          }
          pbVar16 = pbVar16 + 1;
          bVar17 = bVar2;
        } while (bVar2 != 0);
      }
      bVar1 = true;
      pbVar16 = pbVar15;
      if (pbVar10 != (byte *)0x0) {
        pbVar16 = pbVar10 + 1;
      }
      recovered_10021278(uVar13,0xfffffc18,pbVar15,pbVar16,*(undefined4 *)(pcVar4 + 0x25c),1);
    }
    if (param_1 != 2) {
      if (param_1 == 1) {
        if (DAT_1002490c < 0x12) {
          *(undefined4 *)(&DAT_10024588 + DAT_1002490c * 4) = 1;
          *(undefined4 *)(&DAT_100245d0 + DAT_1002490c * 4) = 0xffffffff;
          iVar8 = DAT_1002490c * 0x2a;
          *(undefined4 *)(&DAT_10024618 + iVar8) = 0x6e65704f;
          (&DAT_1002461c)[iVar8] = 0;
          DAT_1002490c = DAT_1002490c + 1;
        }
        if (DAT_1002439a == '\x01') {
          recovered_10020aac(6,str_10023e05,0xffffffff);
        }
        if (DAT_1002490c < 0x12) {
          *(undefined4 *)(&DAT_10024588 + DAT_1002490c * 4) = 0xb;
          *(undefined4 *)(&DAT_100245d0 + DAT_1002490c * 4) = 0xffffffff;
          iVar8 = DAT_1002490c * 0x2a;
          *(undefined4 *)(&DAT_10024618 + iVar8) = 0x6f666e49;
          (&DAT_1002461c)[iVar8] = 0;
          DAT_1002490c = DAT_1002490c + 1;
        }
        recovered_10020b60();
      }
      else {
        if (DAT_1002490c < 0x12) {
          *(undefined4 *)(&DAT_10024588 + DAT_1002490c * 4) = 0x15;
          *(undefined4 *)(&DAT_100245d0 + DAT_1002490c * 4) = 0xffffffff;
          iVar8 = DAT_1002490c * 0x2a;
          *(undefined4 *)(&DAT_10024618 + iVar8) = 0x736f6c43;
          *(undefined2 *)(&DAT_1002461c + iVar8) = 0x65;
          iVar8 = DAT_1002490c + 1;
          bVar1 = DAT_1002490c < 0x11;
          DAT_1002490c = iVar8;
          if (bVar1) {
            *(undefined4 *)(&DAT_10024588 + iVar8 * 4) = 0x16;
            *(undefined4 *)(&DAT_100245d0 + DAT_1002490c * 4) = 0xffffffff;
            iVar8 = DAT_1002490c * 0x2a;
            *(undefined4 *)(&DAT_10024618 + iVar8) = 0x736f6c43;
            *(undefined2 *)(&DAT_10024620 + iVar8) = 0x6c;
            *(undefined4 *)(&DAT_1002461c + iVar8) = 0x6c412065;
            iVar8 = DAT_1002490c + 1;
            bVar1 = DAT_1002490c < 0x11;
            DAT_1002490c = iVar8;
            if (bVar1) {
              *(undefined4 *)(&DAT_10024588 + iVar8 * 4) = 0x14;
              *(undefined4 *)(&DAT_100245d0 + DAT_1002490c * 4) = 0xffffffff;
              iVar8 = DAT_1002490c * 0x2a;
              *(undefined4 *)(&DAT_10024618 + iVar8) = 0x6c707544;
              *(undefined2 *)(&DAT_10024620 + iVar8) = 0x65;
              *(undefined4 *)(&DAT_1002461c + iVar8) = 0x74616369;
              DAT_1002490c = DAT_1002490c + 1;
            }
          }
        }
        if (DAT_10024399 == '\x01') {
          recovered_10020aac(5,str_10023e25,0xffffffff);
        }
        if (DAT_1002439b == '\x01') {
          recovered_10020aac(0x17,str_10023e34,0xffffffff);
        }
      }
      goto LAB_1001bbb0;
    }
    if (!bVar1) {
      recovered_10020aac(7,&DAT_10023e0f,0xffffffff);
      recovered_10020aac(8,&DAT_10023e14,0xffffffff);
    }
    if (DAT_10027228 == '\x01') {
      recovered_10020aac(9,str_10023e18,0xffffffff);
    }
    if (!bVar1) {
      recovered_10020aac(10,str_10023d7e,0xffffffff);
      recovered_10020aac(0xd,str_10023e1e,0xffffffff);
    }
    if (0x11 < DAT_1002490c) {
      return;
    }
    *(undefined4 *)(&DAT_10024588 + DAT_1002490c * 4) = 0xc;
    *(undefined4 *)(&DAT_100245d0 + DAT_1002490c * 4) = 0xffffffff;
    iVar8 = DAT_1002490c * 0x2a;
    puVar7 = (undefined4 *)(&DAT_10024618 + iVar8);
    *puVar7 = 0x61657243;
    *(undefined2 *)(&DAT_10024624 + iVar8) = 0x72;
    *(undefined4 *)(&DAT_10024620 + iVar8) = 0x65646c6f;
    uVar11 = 0x46206574;
  }
  puVar7[1] = uVar11;
  DAT_1002490c = DAT_1002490c + 1;
LAB_1001bbb0:
  if (DAT_1002490c == 0) {
    DAT_10024374 = 0;
  }
  return;
}

#undef DAT_1001b880
#undef DAT_1001b888
#undef DAT_10023774
#undef DAT_10023e0f
#undef DAT_10023e14
#undef DAT_1002405c
#undef DAT_10024060
#undef DAT_100242dc
#undef DAT_1002430c
#undef DAT_10024374
#undef DAT_10024378
#undef DAT_1002437c
#undef DAT_10024384
#undef DAT_1002438c
#undef DAT_10024390
#undef DAT_10024399
#undef DAT_1002439a
#undef DAT_1002439b
#undef DAT_10024588
#undef DAT_100245d0
#undef DAT_10024618
#undef DAT_1002461c
#undef DAT_10024620
#undef DAT_10024624
#undef DAT_1002490c
#undef DAT_10027228
#undef _DAT_10024378
#undef _DAT_1002437c
#undef str_10023d7e
#undef str_10023e05
#undef str_10023e18
#undef str_10023e1e
#undef str_10023e25
#undef str_10023e34
#undef local_4a
#undef local_46
#undef local_42
#undef local_40

#undef DAT_10024130
#define DAT_10024130 (*(int *)(((uintptr_t)pf_module_state + 0xb28U)))
#undef DAT_10024134
#define DAT_10024134 (*(int *)(((uintptr_t)pf_module_state + 0xb2cU)))
#undef DAT_10024910
#define DAT_10024910 (*(char * *)(((uintptr_t)pf_module_state + 0x1308U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001bd00
 */

int recovered_1001bd00(int param_1,int param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  bool bVar8;
  bool bVar9;

  iVar6 = 0;
  iVar1 = DAT_10024134 + -8;
  iVar2 = DAT_10024134 + -0x36;
  iVar5 = 0;
  pcVar7 = DAT_10024910;
  do {
    if (*pcVar7 == '\x01') {
      iVar3 = (uint)(byte)DAT_10024910[0x834] +
              (uint)(byte)(DAT_10024910[300] + *DAT_10024910 + DAT_10024910[600] + DAT_10024910[900]
                           + DAT_10024910[0x4b0] + DAT_10024910[0x5dc] + DAT_10024910[0x708]) +
              (uint)(byte)DAT_10024910[0x960] + (uint)(byte)DAT_10024910[0xa8c] +
              (uint)(byte)DAT_10024910[3000] + (uint)(byte)DAT_10024910[0xce4] +
              (uint)(byte)DAT_10024910[0xe10] + (uint)(byte)DAT_10024910[0xf3c] +
              (uint)(byte)DAT_10024910[0x1068] + (uint)(byte)DAT_10024910[0x1194] +
              (uint)(byte)DAT_10024910[0x12c0] + (uint)(byte)DAT_10024910[0x13ec];
      iVar4 = DAT_10024130;
      if (iVar3 != 0) {
        iVar4 = DAT_10024130 + iVar3 * -0x44 + 0x12;
      }
      iVar3 = iVar4 / 2 + iVar6 * 0x44;
      bVar9 = SBORROW4(iVar3,param_1);
      iVar4 = iVar3 - param_1;
      bVar8 = iVar3 == param_1;
      if (iVar3 <= param_1) {
        bVar9 = SBORROW4(iVar2,param_2);
        iVar4 = iVar2 - param_2;
        bVar8 = iVar2 == param_2;
      }
      if (bVar8 || iVar4 < 0 != bVar9) {
        iVar3 = iVar3 + 0x32;
        bVar9 = SBORROW4(iVar3,param_1);
        iVar4 = iVar3 - param_1;
        bVar8 = iVar3 == param_1;
        if (param_1 < iVar3) {
          bVar9 = SBORROW4(iVar1,param_2);
          iVar4 = iVar1 - param_2;
          bVar8 = iVar1 == param_2;
        }
        if (!bVar8 && iVar4 < 0 == bVar9) {
          return iVar5;
        }
      }
      iVar6 = iVar6 + 1;
    }
    iVar5 = iVar5 + 1;
    pcVar7 = pcVar7 + 300;
    if (iVar5 == 0x12) {
      return -1;
    }
  } while( true );
}

#undef DAT_10024130
#undef DAT_10024134
#undef DAT_10024910

#undef DAT_1001bfe0
#define DAT_1001bfe0 (*(uint64_t *)(0x1001bfe0U))
#undef DAT_1001bfe8
#define DAT_1001bfe8 (*(uint64_t *)(0x1001bfe8U))
#undef DAT_1001bff0
#define DAT_1001bff0 (*(uint64_t *)(0x1001bff0U))
#undef DAT_1001bff8
#define DAT_1001bff8 (*(uint64_t *)(0x1001bff8U))
#undef DAT_10023774
#define DAT_10023774 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x16cU)))
#undef DAT_1002430c
#define DAT_1002430c (*(int *)(((uintptr_t)pf_module_state + 0xd04U)))
#undef DAT_10024910
#define DAT_10024910 (*(int *)(((uintptr_t)pf_module_state + 0x1308U)))
#undef str_10023db7
#define str_10023db7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7afU)))
#undef str_10023dc3
#define str_10023dc3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7bbU)))
#define uStack_18 (*(undefined8 *)(frame + 40))
#define iStack_28 (*(int *)(frame + 24))
#define local_2c (*(undefined4 *)(frame + 20))
#define local_20 (*(undefined8 *)(frame + 32))
#define pcStack_24 (*(char * *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001be90
 */

void recovered_1001be90(uint param_1)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;

  if ((param_1 < 0x12) && (pcVar5 = (char *)(DAT_10024910 + param_1 * 300), *pcVar5 == '\x01')) {
    iVar3 = *(int *)(pcVar5 + 4);
    if (iVar3 == 5) {
      recovered_1001d040((byte *)(pcVar5 + 0x30),0,*(int *)(pcVar5 + 0x124));
      return;
    }
    if (iVar3 == 3) {
      iStack_28 = recovered_10005734(3,str_10023db7,0x9c9c9c,'\0');
      pcStack_24 = str_10023dc3;
      local_20 = (0x2000000064U);
      uStack_18 = (0x22400000276U);
      local_2c = 3;
      iVar3 = recovered_1000eac0(&local_2c);
      uVar2 = (0x6974616d726f666eU);
      uVar1 = (0x49206d6574737953U);
      if (-1 < iVar3) {
        iVar3 = iVar3 * 0xd9c + DAT_1002430c;
        *(undefined1 *)(iVar3 + 0x273) = 0;
        *(undefined8 *)(iVar3 + 0x261) = uVar1;
        *(undefined8 *)(iVar3 + 0x269) = uVar2;
        *(undefined2 *)(iVar3 + 0x271) = 0x6e6f;
        return;
      }
    }
    else {
      if (iVar3 == 0) {
        uVar4 = recovered_10005d20();
        recovered_1000e894(&DAT_10023774,uVar4);
        return;
      }
      if (pcVar5[8] != 0) {
        uVar4 = recovered_10005d20();
        recovered_10021520((byte *)(pcVar5 + 8),uVar4);
        return;
      }
    }
  }
  return;
}

#undef DAT_1001bfe0
#undef DAT_1001bfe8
#undef DAT_1001bff0
#undef DAT_1001bff8
#undef DAT_10023774
#undef DAT_1002430c
#undef DAT_10024910
#undef str_10023db7
#undef str_10023dc3
#undef uStack_18
#undef iStack_28
#undef local_2c
#undef local_20
#undef pcStack_24

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001c000
 */

void recovered_1001c000(char *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  if (param_1 == (char *)0x0) {
    return;
  }
  if (*param_1 != '\x01') {
    return;
  }
  uVar1 = recovered_100130e8((byte *)param_1,1);
  if (uVar1 == 0) {
    recovered_1001d040((byte *)(param_1 + 0x29),0,*(uint *)(param_1 + 0x11c));
    return;
  }
  recovered_1000e894(param_1 + 0x29,*(uint *)(param_1 + 0x11c));
  return;
}


#undef DAT_10024130
#define DAT_10024130 (*(int *)(((uintptr_t)pf_module_state + 0xb28U)))
#undef DAT_10024134
#define DAT_10024134 (*(int *)(((uintptr_t)pf_module_state + 0xb2cU)))
#undef DAT_1002430c
#define DAT_1002430c (*(int *)(((uintptr_t)pf_module_state + 0xd04U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001c050
 */

void recovered_1001c050(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;

  iVar2 = param_1 * 0xd9c + DAT_1002430c;
  if (*(char *)(iVar2 + 3) == '\0') {
    uVar3 = *(undefined8 *)(iVar2 + 0x58);
    uVar4 = *(undefined8 *)(iVar2 + 0x60);
    *(undefined4 *)(iVar2 + 0x5c) = 0x24;
    *(undefined4 *)(iVar2 + 0x58) = 0xe;
    *(int *)(iVar2 + 0x60) = DAT_10024130 + -0x1c;
    *(undefined8 *)(iVar2 + 0x68) = uVar3;
    *(undefined8 *)(iVar2 + 0x70) = uVar4;
    iVar1 = DAT_10024134;
    *(undefined1 *)(iVar2 + 2) = 0;
    *(int *)(iVar2 + 100) = iVar1 + -0x6e;
    *(undefined1 *)(iVar2 + 3) = 1;
    return;
  }
  *(undefined8 *)(iVar2 + 0x58) = *(undefined8 *)(iVar2 + 0x68);
  *(undefined8 *)(iVar2 + 0x60) = *(undefined8 *)(iVar2 + 0x70);
  *(undefined1 *)(iVar2 + 3) = 0;
  return;
}

#undef DAT_10024130
#undef DAT_10024134
#undef DAT_1002430c

#undef DAT_100242dc
#define DAT_100242dc (*(int *)(((uintptr_t)pf_module_state + 0xcd4U)))
#undef DAT_10024914
#define DAT_10024914 (*(int * *)(((uintptr_t)pf_module_state + 0x130cU)))
#undef DAT_100290dc
#define DAT_100290dc (*(uint *)(((uintptr_t)pf_module_state + 0x5ad4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001c0e4
 */

void recovered_1001c0e4(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined8 *puVar4;
  uint uVar5;
  bool bVar6;

  uVar2 = DAT_100290dc;
  piVar1 = DAT_10024914;
  if ((int)DAT_100290dc < 1) {
    return;
  }
  uVar5 = 0;
  iVar3 = 0x10;
  while (DAT_10024914[uVar5] != param_1) {
    uVar5 = uVar5 + 1;
    iVar3 = iVar3 + -4;
    if (DAT_100290dc == uVar5) {
      return;
    }
  }
  if (uVar5 != 0) {
    if (uVar5 >> 2 != 0) {
      puVar4 = (undefined8 *)((int)DAT_10024914 - iVar3);
      iVar3 = (uVar5 >> 2) << 2;
      do {
        iVar3 = iVar3 + -4;
        *(undefined8 *)((int)puVar4 + 4) = *puVar4;
        *(undefined8 *)((int)puVar4 + 0xc) = puVar4[1];
        puVar4 = puVar4 + -2;
      } while (iVar3 != 0);
      bVar6 = uVar5 == (uVar5 & 0x7ffffffc);
      uVar5 = uVar5 & 3;
      if (bVar6) goto LAB_1001c1a8;
    }
    piVar1[uVar5] = piVar1[uVar5 - 1];
    if ((1 < uVar5) && (piVar1[uVar5 - 1] = piVar1[uVar5 - 2], uVar5 == 3)) {
      piVar1[1] = *piVar1;
    }
  }
LAB_1001c1a8:
  *piVar1 = param_1;
  DAT_100242dc = piVar1[uVar2 - 1];
  return;
}

#undef DAT_100242dc
#undef DAT_10024914
#undef DAT_100290dc

#undef DAT_10024140
#define DAT_10024140 (*(int *)(((uintptr_t)pf_module_state + 0xb38U)))
#undef DAT_1002430c
#define DAT_1002430c (*(int *)(((uintptr_t)pf_module_state + 0xd04U)))
#undef DAT_1012e3fc
#define DAT_1012e3fc (*(uint32_t *)(((uintptr_t)pf_module_state + 0x10adf4U)))
#undef DAT_1012e400
#define DAT_1012e400 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x10adf8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001c1c8
 */

void recovered_1001c1c8(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  int iVar2;
  char *pcVar3;

  if (param_1 < 0x14) {
    if (DAT_1002430c == 0) {
      return;
    }
    pcVar3 = (char *)(param_1 * 0xd9c + DAT_1002430c);
    if (*pcVar3 == '\x01') {
      pcVar1 = pcVar3 + 2;
      if (*pcVar1 == '\0') {
        pcVar3 = (char *)(uint)(byte)pcVar3[3];
      }
      if (*pcVar1 == '\0' && pcVar3 == (char *)0x0) {
        iVar2 = param_1 * 0xd9c + DAT_1002430c;
        DAT_10024140 = param_1;
        DAT_1012e3fc = *(undefined4 *)(iVar2 + 0x60);
        DAT_1012e400 = *(undefined4 *)(iVar2 + 100);
        return;
      }
    }
  }
  return;
}

#undef DAT_10024140
#undef DAT_1002430c
#undef DAT_1012e3fc
#undef DAT_1012e400

#undef DAT_100242e4
#define DAT_100242e4 (*(int *)(((uintptr_t)pf_module_state + 0xcdcU)))
#undef DAT_1002430c
#define DAT_1002430c (*(int *)(((uintptr_t)pf_module_state + 0xd04U)))
#undef DAT_100290e4
#define DAT_100290e4 (*(uint *)(((uintptr_t)pf_module_state + 0x5adcU)))
#undef DAT_100290e8
#define DAT_100290e8 (*(uint *)(((uintptr_t)pf_module_state + 0x5ae0U)))
#undef DAT_100290ec
#define DAT_100290ec (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5ae4U)))
#undef DAT_100290f0
#define DAT_100290f0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5ae8U)))
#undef DAT_100290f4
#define DAT_100290f4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5aecU)))
#undef DAT_100290f8
#define DAT_100290f8 (*(int *)(((uintptr_t)pf_module_state + 0x5af0U)))
#undef DAT_100290fc
#define DAT_100290fc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5af4U)))
#undef DAT_100291ed
#define DAT_100291ed (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5be5U)))
#undef DAT_1012e444
#define DAT_1012e444 (*(char *)(((uintptr_t)pf_module_state + 0x10ae3cU)))
#undef DAT_1012e448
#define DAT_1012e448 (*(int *)(((uintptr_t)pf_module_state + 0x10ae40U)))
#undef DAT_1012e44c
#define DAT_1012e44c (*(uint *)(((uintptr_t)pf_module_state + 0x10ae44U)))
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
#undef UINT_4001098c
#define UINT_4001098c (*(uint *)(0x4001098cU))
#undef str_10023c4b
#define str_10023c4b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x643U)))
#undef str_10023c5b
#define str_10023c5b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x653U)))
#undef str_10023c6d
#define str_10023c6d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x665U)))
#define local_40 (*(int *)(frame + 16))
#define local_3c (*(int *)(frame + 20))
#define local_38 (*(int *)(frame + 24))
#define local_30 (*(uint *)(frame + 32))
#define local_2c (*(int *)(frame + 36))
#define local_28 (*(int *)(frame + 40))
#define local_24 (*(int *)(frame + 44))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001c254
 */

/* WARNING: Type propagation algorithm not settling */

undefined4 recovered_1001c254(int param_1,uint param_2,int param_3)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  code *pcVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  int *piVar5;
  int extraout_r2 = 0;
  int extraout_r2_00 = 0;
  int iVar6;
  undefined1 *puVar7;
  int iVar8;
  char cVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  char *pcVar16;
  bool bVar17;
  bool bVar18;

  if (0x13 < param_1) {
    return 0;
  }
  pcVar16 = (char *)(DAT_1002430c + param_1 * 0xd9c);
  if (*pcVar16 != '\x01') {
    return 0;
  }
  iVar6 = *(int *)(pcVar16 + 0x58);
  iVar14 = *(int *)(pcVar16 + 0x5c);
  uVar10 = iVar6 + 0x82;
  iVar8 = iVar14 + 0x9c;
  iVar12 = iVar14 + 0x86;
  bVar18 = SBORROW4(uVar10,param_2);
  iVar2 = uVar10 - param_2;
  bVar17 = uVar10 == param_2;
  if ((int)uVar10 <= (int)param_2) {
    bVar18 = SBORROW4(iVar12,param_3);
    iVar2 = iVar12 - param_3;
    bVar17 = iVar12 == param_3;
  }
  if (bVar17 || iVar2 < 0 != bVar18) {
    uVar10 = iVar6 + 0xce;
    bVar18 = SBORROW4(uVar10,param_2);
    iVar2 = uVar10 - param_2;
    bVar17 = uVar10 == param_2;
    if ((int)param_2 < (int)uVar10) {
      bVar18 = SBORROW4(iVar8,param_3);
      iVar2 = iVar8 - param_3;
      bVar17 = iVar8 == param_3;
    }
    if (!bVar17 && iVar2 < 0 == bVar18) {
      pcVar16[0xb00] = '\0';
      pcVar16[0xb01] = '\0';
      pcVar16[0xb02] = '\0';
      pcVar16[0xb03] = '\0';
      DAT_100242e4 = 0xffffffff;
      return 1;
    }
  }
  uVar10 = iVar6 + 0xd6;
  bVar18 = SBORROW4(uVar10,param_2);
  iVar2 = uVar10 - param_2;
  bVar17 = uVar10 == param_2;
  if ((int)uVar10 <= (int)param_2) {
    bVar18 = SBORROW4(iVar12,param_3);
    iVar2 = iVar12 - param_3;
    bVar17 = iVar12 == param_3;
  }
  if (bVar17 || iVar2 < 0 != bVar18) {
    uVar10 = iVar6 + 0x11c;
    bVar18 = SBORROW4(uVar10,param_2);
    iVar2 = uVar10 - param_2;
    bVar17 = uVar10 == param_2;
    if ((int)param_2 < (int)uVar10) {
      bVar18 = SBORROW4(iVar8,param_3);
      iVar2 = iVar8 - param_3;
      bVar17 = iVar8 == param_3;
    }
    if (!bVar17 && iVar2 < 0 == bVar18) {
      if ((*(int *)(pcVar16 + 0xb00) == 1) && (DAT_1012e444 != '\0')) {
        pcVar16[0xb00] = '\x01';
        pcVar16[0xb01] = '\0';
        pcVar16[0xb02] = '\0';
        pcVar16[0xb03] = '\0';
        return 1;
      }
      pcVar16[0xb00] = '\x01';
      pcVar16[0xb01] = '\0';
      pcVar16[0xb02] = '\0';
      pcVar16[0xb03] = '\0';
      local_30 = 0;
      memset(&DAT_100290fc,0,0x105300);
      DAT_100290e8 = 0;
      DAT_100290ec = 0;
      DAT_100290f4 = 0;
      DAT_100290f8 = 0;
      DAT_100290e4 = 0;
      DAT_100290f0 = 0;
      cVar9 = '\0';
      iVar2 = Ram40010800;
      DAT_1012e444 = 1;
      if ((iVar2 == 0x50414d57) && (iVar2 = Ram40010804, iVar2 != 0)) {
        uVar10 = Ram40010808;
        bVar17 = 0xb < uVar10;
        if (bVar17) {
          uVar10 = Ram40010808;
        }
        if (((bVar17 && 399 < uVar10) && (pcVar1 = (code *)UINT_4001098c, pcVar1 != (code *)0x0)) &&
           (uVar10 = (*pcVar1)(&DAT_100290fc,0x300,&local_30), uVar10 != 0)) {
          DAT_100290e8 = local_30;
          uVar10 = 0x300;
          if (local_30 < 0x300) {
            uVar10 = local_30;
          }
          DAT_100290e4 = uVar10;
          if (local_30 != 0) {
            puVar7 = &DAT_100291ed;
            uVar15 = 0;
            local_40 = DAT_100290f4;
            local_3c = DAT_100290f0;
            local_38 = DAT_100290ec;
            iVar2 = DAT_100290f8;
LAB_1001c890:
            iVar6 = 0;
            do {
              cVar9 = puVar7[-iVar6];
              if (cVar9 == '\0') {
                if (str_10023c4b[-iVar6] == '\0') {
                  iVar6 = local_38 + 1;
                  piVar5 = &DAT_100290ec;
                  local_38 = iVar6;
                  goto LAB_1001c9f4;
                }
                break;
              }
              if (iVar6 == -0xf) break;
              cVar4 = str_10023c4b[-iVar6];
              iVar6 = iVar6 + -1;
              if ((byte)(cVar4 + 0x9fU) < 0x1a) {
                cVar4 = cVar4 + -0x20;
              }
              if ((byte)(cVar9 + 0x9fU) < 0x1a) {
                cVar9 = cVar9 + -0x20;
              }
            } while (cVar9 == cVar4);
            iVar6 = 0;
            do {
              cVar9 = puVar7[-iVar6];
              if (cVar9 == '\0') {
                if (str_10023c5b[-iVar6] == '\0') {
                  iVar6 = local_3c + 1;
                  piVar5 = &DAT_100290f0;
                  local_3c = iVar6;
                  goto LAB_1001c9f4;
                }
                break;
              }
              if (iVar6 == -0x11) break;
              cVar4 = str_10023c5b[-iVar6];
              iVar6 = iVar6 + -1;
              if ((byte)(cVar4 + 0x9fU) < 0x1a) {
                cVar4 = cVar4 + -0x20;
              }
              if ((byte)(cVar9 + 0x9fU) < 0x1a) {
                cVar9 = cVar9 + -0x20;
              }
            } while (cVar9 == cVar4);
            iVar6 = 0;
LAB_1001c954:
            cVar9 = puVar7[-iVar6];
            if (cVar9 == '\0') {
              if (str_10023c6d[-iVar6] == '\0') {
                iVar6 = local_40 + 1;
                piVar5 = &DAT_100290f4;
                local_40 = iVar6;
LAB_1001c9f4:
                *piVar5 = iVar6;
                goto LAB_1001c874;
              }
            }
            else if (iVar6 != -0x13) goto code_r0x1001c968;
            goto LAB_1001c860;
          }
        }
      }
LAB_1001c4f8:
      pcVar16[0xafc] = cVar9;
      pcVar16[0xaf8] = '\0';
      pcVar16[0xaf9] = '\0';
      pcVar16[0xafa] = '\0';
      pcVar16[0xafb] = '\0';
      pcVar16[0xaf4] = '\0';
      pcVar16[0xaf5] = '\0';
      pcVar16[0xaf6] = '\0';
      pcVar16[0xaf7] = '\0';
      return 1;
    }
  }
  if (*(int *)(pcVar16 + 0xb00) != 1) {
    return 0;
  }
  uVar15 = iVar6 + 0x34;
  uVar10 = iVar6 + 0x28;
  iVar6 = iVar14 + *(int *)(pcVar16 + 100) + -0x92;
  iVar2 = iVar14 + 0x114;
  if (iVar14 + 0x114 < iVar6) {
    iVar2 = iVar6;
  }
  iVar2 = iVar2 - iVar14;
  iVar12 = iVar2 + -0x102;
  iVar8 = iVar2 + -0xee;
  iVar6 = iVar12;
  if (iVar8 < 0x26) {
    iVar6 = 0x12;
  }
  iVar6 = iVar6 + iVar14;
  bVar18 = SBORROW4(uVar10,param_2);
  iVar3 = uVar10 - param_2;
  bVar17 = uVar10 == param_2;
  if ((int)uVar10 <= (int)param_2) {
    iVar11 = iVar6 + 0xdb;
    bVar18 = SBORROW4(iVar11,param_3);
    iVar3 = iVar11 - param_3;
    bVar17 = iVar11 == param_3;
  }
  if (bVar17 || iVar3 < 0 != bVar18) {
    bVar18 = SBORROW4(uVar15,param_2);
    iVar3 = uVar15 - param_2;
    bVar17 = uVar15 == param_2;
    if ((int)param_2 < (int)uVar15) {
      iVar11 = iVar6 + 0xe9;
      bVar18 = SBORROW4(iVar11,param_3);
      iVar3 = iVar11 - param_3;
      bVar17 = iVar11 == param_3;
    }
    if (!bVar17 && iVar3 < 0 == bVar18) {
      iVar2 = *(int *)(pcVar16 + 0xaf8);
      uVar15 = iVar2 - 1;
      *(uint *)(pcVar16 + 0xaf8) = uVar15;
      uVar10 = iVar12 / 0x12;
      if ((int)uVar10 < 2) {
        uVar10 = 1;
      }
      if (iVar8 < 0x26) {
        uVar10 = 1;
      }
      uVar13 = DAT_100290e4 - uVar10;
      if (DAT_100290e4 < uVar10) {
        uVar13 = 0;
      }
      if (DAT_100290e4 == 0) goto LAB_1001c6e8;
      if ((pcVar16[0xafc] != '\x01') || (DAT_100290e4 <= *(uint *)(pcVar16 + 0xaf4))) {
        pcVar16[0xafc] = '\x01';
        pcVar16[0xaf4] = '\0';
        pcVar16[0xaf5] = '\0';
        pcVar16[0xaf6] = '\0';
        pcVar16[0xaf7] = '\0';
      }
      if (0 < iVar2) goto LAB_1001c58c;
      goto LAB_1001c624;
    }
  }
  bVar18 = SBORROW4(uVar10,param_2);
  iVar3 = uVar10 - param_2;
  bVar17 = uVar10 == param_2;
  if ((int)uVar10 <= (int)param_2) {
    iVar11 = iVar6 + 0xeb;
    bVar18 = SBORROW4(iVar11,param_3);
    iVar3 = iVar11 - param_3;
    bVar17 = iVar11 == param_3;
  }
  if (bVar17 || iVar3 < 0 != bVar18) {
    bVar18 = SBORROW4(uVar15,param_2);
    iVar3 = uVar15 - param_2;
    bVar17 = uVar15 == param_2;
    if ((int)param_2 < (int)uVar15) {
      iVar6 = iVar6 + 0xf9;
      bVar18 = SBORROW4(iVar6,param_3);
      iVar3 = iVar6 - param_3;
      bVar17 = iVar6 == param_3;
    }
    if (!bVar17 && iVar3 < 0 == bVar18) {
      iVar2 = *(int *)(pcVar16 + 0xaf8);
      uVar15 = iVar2 + 1;
      *(uint *)(pcVar16 + 0xaf8) = uVar15;
      uVar10 = iVar12 / 0x12;
      if ((int)uVar10 < 2) {
        uVar10 = 1;
      }
      if (iVar8 < 0x26) {
        uVar10 = 1;
      }
      uVar13 = DAT_100290e4 - uVar10;
      if (DAT_100290e4 < uVar10) {
        uVar13 = 0;
      }
      if (DAT_100290e4 == 0) {
LAB_1001c6e8:
        pcVar16[0xafc] = '\0';
        pcVar16[0xaf8] = '\0';
        pcVar16[0xaf9] = '\0';
        pcVar16[0xafa] = '\0';
        pcVar16[0xafb] = '\0';
        pcVar16[0xaf4] = '\0';
        pcVar16[0xaf5] = '\0';
        pcVar16[0xaf6] = '\0';
        pcVar16[0xaf7] = '\0';
        return 1;
      }
      if ((pcVar16[0xafc] != '\x01') || (DAT_100290e4 <= *(uint *)(pcVar16 + 0xaf4))) {
        pcVar16[0xafc] = '\x01';
        pcVar16[0xaf4] = '\0';
        pcVar16[0xaf5] = '\0';
        pcVar16[0xaf6] = '\0';
        pcVar16[0xaf7] = '\0';
      }
      if (-2 < iVar2) {
LAB_1001c58c:
        uVar13 = uVar13 & ~((int)uVar13 >> 0x1f);
        if (uVar13 < uVar15) {
          *(uint *)(pcVar16 + 0xaf8) = uVar13;
          return 1;
        }
        return 1;
      }
LAB_1001c624:
      pcVar16[0xaf8] = '\0';
      pcVar16[0xaf9] = '\0';
      pcVar16[0xafa] = '\0';
      pcVar16[0xafb] = '\0';
      return 1;
    }
  }
  iVar2 = iVar2 + -0x12d;
  if (iVar8 < 0x26) {
    iVar2 = -0x19;
  }
  iVar6 = iVar2 + -2;
  if (iVar2 < 0x14) {
    iVar6 = 0x12;
  }
  bVar18 = SBORROW4(uVar10,param_2);
  iVar3 = uVar10 - param_2;
  bVar17 = uVar10 == param_2;
  if ((int)uVar10 <= (int)param_2) {
    iVar2 = iVar14 + 0x106;
    bVar18 = SBORROW4(iVar2,param_3);
    iVar3 = iVar2 - param_3;
    bVar17 = iVar2 == param_3;
  }
  if (bVar17 || iVar3 < 0 != bVar18) {
    bVar18 = SBORROW4(uVar15,param_2);
    iVar3 = uVar15 - param_2;
    bVar17 = uVar15 == param_2;
    if ((int)param_2 < (int)uVar15) {
      iVar2 = iVar6 + iVar2;
      bVar18 = SBORROW4(iVar2,param_3);
      iVar3 = iVar2 - param_3;
      bVar17 = iVar2 == param_3;
    }
    if (!bVar17 && iVar3 < 0 == bVar18) {
      recovered_1001a1e4((int *)&local_30,(int)pcVar16);
      bVar18 = SBORROW4(local_30,param_2);
      iVar2 = local_30 - param_2;
      bVar17 = local_30 == param_2;
      iVar3 = extraout_r2;
      if ((int)local_30 <= (int)param_2) {
        bVar18 = SBORROW4(local_2c,param_3);
        iVar2 = local_2c - param_3;
        bVar17 = local_2c == param_3;
        iVar3 = local_2c;
      }
      if (bVar17 || iVar2 < 0 != bVar18) {
        local_30 = local_28 + local_30;
        bVar18 = SBORROW4(local_30,param_2);
        iVar2 = local_30 - param_2;
        bVar17 = local_30 == param_2;
        if ((int)param_2 < (int)local_30) {
          iVar3 = local_24 + iVar3;
          bVar18 = SBORROW4(iVar3,param_3);
          iVar2 = iVar3 - param_3;
          bVar17 = iVar3 == param_3;
        }
        if (!bVar17 && iVar2 < 0 == bVar18) {
          DAT_100242e4 = param_1;
          DAT_1012e448 = param_3;
          DAT_1012e44c = *(uint *)(pcVar16 + 0xaf8);
          return 1;
        }
      }
      recovered_1001a1e4((int *)&local_30,(int)pcVar16);
      uVar10 = DAT_100290e4;
      iVar2 = iVar12 / 0x12 + (iVar12 >> 0x1f);
      uVar15 = iVar2 - (iVar12 >> 0x1f);
      if ((int)uVar15 < 2) {
        uVar15 = 1;
      }
      if (iVar8 < 0x26) {
        uVar15 = 1;
      }
      uVar13 = DAT_100290e4 - uVar15;
      if (DAT_100290e4 < uVar15) {
        uVar13 = 0;
      }
      bVar17 = uVar13 == 1;
      iVar8 = extraout_r2_00;
      if (0 < (int)uVar13) {
        iVar2 = iVar6 - local_24;
        iVar8 = local_24;
      }
      iVar6 = uVar13 - 1;
      if ((int)uVar13 >= 1) {
        bVar17 = iVar2 == 0;
        iVar6 = iVar2;
      }
      if (bVar17 || iVar6 < 0 != ((int)uVar13 < 1 && SBORROW4(uVar13,1))) {
        pcVar16[0xaf8] = '\0';
        pcVar16[0xaf9] = '\0';
        pcVar16[0xafa] = '\0';
        pcVar16[0xafb] = '\0';
        DAT_1012e44c = 0;
      }
      else {
        DAT_1012e44c = recovered_10000b48((((param_3 - iVar14) - iVar8 / 2) + -0x106) * uVar13,iVar2
                                         );
        *(uint *)(pcVar16 + 0xaf8) = DAT_1012e44c;
        if (uVar10 == 0) {
          pcVar16[0xafc] = '\0';
          pcVar16[0xaf8] = '\0';
          pcVar16[0xaf9] = '\0';
          pcVar16[0xafa] = '\0';
          pcVar16[0xafb] = '\0';
          pcVar16[0xaf4] = '\0';
          pcVar16[0xaf5] = '\0';
          pcVar16[0xaf6] = '\0';
          pcVar16[0xaf7] = '\0';
          DAT_1012e44c = 0;
        }
        else {
          if ((pcVar16[0xafc] != '\x01') || (uVar10 <= *(uint *)(pcVar16 + 0xaf4))) {
            pcVar16[0xafc] = '\x01';
            pcVar16[0xaf4] = '\0';
            pcVar16[0xaf5] = '\0';
            pcVar16[0xaf6] = '\0';
            pcVar16[0xaf7] = '\0';
          }
          if ((int)DAT_1012e44c < 0) {
            pcVar16[0xaf8] = '\0';
            pcVar16[0xaf9] = '\0';
            pcVar16[0xafa] = '\0';
            pcVar16[0xafb] = '\0';
            DAT_1012e44c = 0;
          }
          else if (uVar13 < DAT_1012e44c) {
            *(uint *)(pcVar16 + 0xaf8) = uVar13;
            DAT_1012e44c = uVar13;
          }
        }
      }
      DAT_100242e4 = param_1;
      DAT_1012e448 = param_3;
      return 1;
    }
  }
  uVar10 = recovered_1002201c((int)pcVar16,param_2,param_3);
  if ((int)uVar10 < 0) {
    return 0;
  }
  recovered_1002217c((int)pcVar16,uVar10);
  return 1;
code_r0x1001c968:
  cVar4 = str_10023c6d[-iVar6];
  iVar6 = iVar6 + -1;
  if ((byte)(cVar4 + 0x9fU) < 0x1a) {
    cVar4 = cVar4 + -0x20;
  }
  if ((byte)(cVar9 + 0x9fU) < 0x1a) {
    cVar9 = cVar9 + -0x20;
  }
  if (cVar9 != cVar4) goto LAB_1001c860;
  goto LAB_1001c954;
LAB_1001c860:
  iVar2 = iVar2 + 1;
  DAT_100290f8 = iVar2;
LAB_1001c874:
  puVar7 = puVar7 + 0x571;
  uVar15 = uVar15 + 1;
  cVar9 = '\x01';
  if (uVar15 == uVar10) goto LAB_1001c4f8;
  goto LAB_1001c890;
}

#undef DAT_100242e4
#undef DAT_1002430c
#undef DAT_100290e4
#undef DAT_100290e8
#undef DAT_100290ec
#undef DAT_100290f0
#undef DAT_100290f4
#undef DAT_100290f8
#undef DAT_100290fc
#undef DAT_100291ed
#undef DAT_1012e444
#undef DAT_1012e448
#undef DAT_1012e44c
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef Ram40010800
#undef Ram40010804
#undef Ram40010808
#undef UINT_4001098c
#undef str_10023c4b
#undef str_10023c5b
#undef str_10023c6d
#undef local_40
#undef local_3c
#undef local_38
#undef local_30
#undef local_2c
#undef local_28
#undef local_24

#undef DAT_10024918
#define DAT_10024918 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1310U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001ca40
 */

int recovered_1001ca40(int param_1,int param_2,int param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  bool bVar9;

  iVar2 = 0;
  iVar7 = 0;
  pcVar3 = &DAT_10024918;
  do {
    if (*pcVar3 == '\x01') {
      iVar4 = iVar7 * 0x5c + *(int *)(param_1 + 0x58);
      iVar5 = iVar4 + 0x22;
      bVar9 = SBORROW4(iVar5,param_2);
      iVar1 = iVar5 - param_2;
      bVar8 = iVar5 == param_2;
      if (iVar5 <= param_2) {
        iVar5 = *(int *)(param_1 + 0x5c);
        iVar6 = iVar5 + 0x22;
        bVar9 = SBORROW4(iVar6,param_3);
        iVar1 = iVar6 - param_3;
        bVar8 = iVar6 == param_3;
      }
      if (bVar8 || iVar1 < 0 != bVar9) {
        iVar4 = iVar4 + 0x76;
        bVar9 = SBORROW4(iVar4,param_2);
        iVar1 = iVar4 - param_2;
        bVar8 = iVar4 == param_2;
        if (param_2 < iVar4) {
          iVar5 = iVar5 + 0x3c;
          bVar9 = SBORROW4(iVar5,param_3);
          iVar1 = iVar5 - param_3;
          bVar8 = iVar5 == param_3;
        }
        if (!bVar8 && iVar1 < 0 == bVar9) {
          return iVar2;
        }
      }
      iVar7 = iVar7 + 1;
    }
    iVar2 = iVar2 + 1;
    pcVar3 = pcVar3 + 0x124;
    if (iVar2 == 0xc) {
      return -1;
    }
  } while( true );
}

#undef DAT_10024918

#undef DAT_100242e4
#define DAT_100242e4 (*(int *)(((uintptr_t)pf_module_state + 0xcdcU)))
#undef DAT_1002430c
#define DAT_1002430c (*(int *)(((uintptr_t)pf_module_state + 0xd04U)))
#undef DAT_1012e448
#define DAT_1012e448 (*(int *)(((uintptr_t)pf_module_state + 0x10ae40U)))
#undef DAT_1012e44c
#define DAT_1012e44c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x10ae44U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001cac4
 */

undefined4 recovered_1001cac4(int param_1,int param_2,int param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  bool bVar11;

  if (0x13 < param_1) {
    return 0;
  }
  pcVar5 = (char *)(DAT_1002430c + param_1 * 0xd9c);
  if (*pcVar5 != '\x01') {
    return 0;
  }
  iVar9 = *(int *)(pcVar5 + 100);
  iVar8 = *(int *)(pcVar5 + 0x58) + 0x1a;
  iVar4 = (int)(((ulonglong)(*(int *)(pcVar5 + 0x60) - 0x26U) << 0x20) +
                (longlong)(int)(*(int *)(pcVar5 + 0x60) - 0x26U) * -0x2df2df2d >> 0x20);
  iVar2 = *(int *)(pcVar5 + 0x58) + 0xe;
  iVar7 = (iVar4 >> 6) - (iVar4 >> 0x1f);
  iVar4 = iVar9 + *(int *)(pcVar5 + 0x5c);
  if (iVar7 < 2) {
    iVar7 = 1;
  }
  bVar11 = SBORROW4(iVar2,param_2);
  iVar6 = iVar2 - param_2;
  bVar10 = iVar2 == param_2;
  if (iVar2 <= param_2) {
    iVar1 = iVar4 + -0x26;
    bVar11 = SBORROW4(iVar1,param_3);
    iVar6 = iVar1 - param_3;
    bVar10 = iVar1 == param_3;
  }
  if (bVar10 || iVar6 < 0 != bVar11) {
    bVar11 = SBORROW4(iVar8,param_2);
    iVar6 = iVar8 - param_2;
    bVar10 = iVar8 == param_2;
    if (param_2 < iVar8) {
      iVar1 = iVar4 + -0x18;
      bVar11 = SBORROW4(iVar1,param_3);
      iVar6 = iVar1 - param_3;
      bVar10 = iVar1 == param_3;
    }
    if (!bVar10 && iVar6 < 0 == bVar11) {
      iVar2 = -1;
      iVar4 = ((int)((ulonglong)((longlong)(iVar9 + -0x6a) * 0x22983759) >> 0x20) - iVar9) + 0x6a;
      if (0x49 < iVar9 + -0x6a) {
        iVar2 = (iVar4 >> 6) - (iVar4 >> 0x1f);
      }
      iVar4 = iVar7 * iVar2 + *(int *)(pcVar5 + 0xaf0);
      uVar3 = *(int *)(pcVar5 + 0xaf8) - iVar7;
      goto LAB_1001cce4;
    }
  }
  bVar11 = SBORROW4(iVar2,param_2);
  iVar6 = iVar2 - param_2;
  bVar10 = iVar2 == param_2;
  if (iVar2 <= param_2) {
    iVar1 = iVar4 + -0x16;
    bVar11 = SBORROW4(iVar1,param_3);
    iVar6 = iVar1 - param_3;
    bVar10 = iVar1 == param_3;
  }
  if (bVar10 || iVar6 < 0 != bVar11) {
    bVar11 = SBORROW4(iVar8,param_2);
    iVar6 = iVar8 - param_2;
    bVar10 = iVar8 == param_2;
    if (param_2 < iVar8) {
      iVar4 = iVar4 + -8;
      bVar11 = SBORROW4(iVar4,param_3);
      iVar6 = iVar4 - param_3;
      bVar10 = iVar4 == param_3;
    }
    if (!bVar10 && iVar6 < 0 == bVar11) {
      iVar2 = -1;
      iVar4 = ((int)((ulonglong)((longlong)(iVar9 + -0x6a) * 0x22983759) >> 0x20) - iVar9) + 0x6a;
      if (0x49 < iVar9 + -0x6a) {
        iVar2 = (iVar4 >> 6) - (iVar4 >> 0x1f);
      }
      iVar4 = iVar7 * iVar2 + *(int *)(pcVar5 + 0xaf0);
      uVar3 = *(int *)(pcVar5 + 0xaf8) + iVar7;
LAB_1001cce4:
      *(uint *)(pcVar5 + 0xaf8) = uVar3;
      if (0x7fffffff < uVar3) {
        uVar3 = 0;
        pcVar5[0xaf8] = '\0';
        pcVar5[0xaf9] = '\0';
        pcVar5[0xafa] = '\0';
        pcVar5[0xafb] = '\0';
      }
      iVar4 = iVar4 + 2;
      if ((0 < iVar4) && ((int)uVar3 <= iVar4)) {
        return 1;
      }
      if (iVar4 < 1) {
        iVar4 = 0;
      }
      *(int *)(pcVar5 + 0xaf8) = iVar4;
      return 1;
    }
  }
  iVar4 = iVar9 + -0x84;
  iVar6 = iVar9 + -0x88;
  if (iVar4 < 0x16) {
    iVar6 = 0x12;
  }
  bVar11 = SBORROW4(iVar2,param_2);
  iVar1 = iVar2 - param_2;
  bVar10 = iVar2 == param_2;
  if (iVar2 <= param_2) {
    iVar4 = *(int *)(pcVar5 + 0x5c) + 0x5e;
    bVar11 = SBORROW4(iVar4,param_3);
    iVar1 = iVar4 - param_3;
    bVar10 = iVar4 == param_3;
  }
  if (!(!bVar10 && iVar1 < 0 == bVar11)) {
    bVar11 = SBORROW4(iVar8,param_2);
    iVar2 = iVar8 - param_2;
    bVar10 = iVar8 == param_2;
    if (param_2 < iVar8) {
      param_2 = iVar6 + iVar4;
      bVar11 = SBORROW4(param_2,param_3);
      iVar2 = param_2 - param_3;
      bVar10 = param_2 == param_3;
    }
    if (!(bVar10 || iVar2 < 0 != bVar11)) {
      uVar3 = iVar9 - 0x6a;
      iVar2 = 1;
      iVar8 = (int)(((ulonglong)uVar3 << 0x20) + (longlong)(int)uVar3 * -0x22983759 >> 0x20);
      if (0x49 < (int)uVar3) {
        iVar2 = (iVar8 >> 6) - (iVar8 >> 0x1f);
      }
      iVar8 = ((int)((ulonglong)((longlong)(int)uVar3 * 0x22983759) >> 0x20) - iVar9) + 0x6a;
      iVar9 = -1;
      if (0x49 < (int)uVar3) {
        iVar9 = (iVar8 >> 6) - (iVar8 >> 0x1f);
      }
      if (-2 < *(int *)(pcVar5 + 0xaf0)) {
        iVar8 = *(int *)(pcVar5 + 0xaf0) + 2;
        if ((iVar7 * iVar2 < iVar8) && (iVar9 = iVar7 * iVar9 + iVar8, 0 < iVar9)) {
          iVar2 = recovered_10000b48(iVar7 * iVar2 * iVar6,iVar8);
          if (iVar2 < 0x13) {
            iVar2 = 0x12;
          }
          if (iVar6 <= iVar2) {
            iVar2 = iVar6;
          }
          iVar7 = recovered_10000b48((iVar6 - iVar2) * *(int *)(pcVar5 + 0xaf8),iVar9);
          iVar4 = iVar7 + iVar4;
          param_2 = iVar2 + iVar4;
        }
      }
      if ((param_3 < iVar4) || (param_2 <= param_3)) {
        recovered_100222ec((int)pcVar5,param_3);
      }
      DAT_1012e44c = *(undefined4 *)(pcVar5 + 0xaf8);
      DAT_1012e448 = param_3;
      DAT_100242e4 = param_1;
      return 1;
    }
    return 0;
  }
  return 0;
}

#undef DAT_100242e4
#undef DAT_1002430c
#undef DAT_1012e448
#undef DAT_1012e44c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001cd98
 */

int recovered_1001cd98(int param_1,int param_2,int param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  bool bVar12;
  bool bVar13;

  if (param_1 == 0) {
    iVar4 = 0;
    iVar5 = 1;
    iVar8 = 1;
  }
  else {
    uVar3 = *(int *)(param_1 + 0x60) - 0x26;
    uVar7 = *(int *)(param_1 + 100) - 0x6a;
    iVar4 = (int)(((ulonglong)uVar3 << 0x20) + (longlong)(int)uVar3 * -0x2df2df2d >> 0x20);
    iVar9 = (int)(((ulonglong)uVar7 << 0x20) + (longlong)(int)uVar7 * -0x22983759 >> 0x20);
    iVar5 = 1;
    iVar8 = (iVar4 >> 6) - (iVar4 >> 0x1f);
    iVar4 = *(int *)(param_1 + 0xaf0) + 2;
    if (0x49 < (int)uVar7) {
      iVar5 = (iVar9 >> 6) - (iVar9 >> 0x1f);
    }
  }
  iVar9 = 1;
  if (1 < iVar8) {
    iVar9 = iVar8;
  }
  if (0 < iVar9 * iVar5) {
    iVar8 = *(int *)(param_1 + 0xaf8);
    uVar3 = 0;
    if (iVar4 <= iVar8) {
      iVar4 = iVar8;
    }
    do {
      if ((iVar8 - iVar4) + uVar3 == 0) {
        return -1000;
      }
      iVar10 = *(int *)(param_1 + 0x58);
      uVar7 = *(int *)(param_1 + 0x60) - 0x26;
      iVar11 = *(int *)(param_1 + 0x5c);
      iVar1 = (int)(((ulonglong)uVar7 << 0x20) + (longlong)(int)uVar7 * -0x2df2df2d >> 0x20);
      uVar7 = (iVar1 >> 6) - (iVar1 >> 0x1f);
      if ((int)uVar7 < 2) {
        uVar7 = 1;
      }
      uVar2 = recovered_10000ac0(uVar3,uVar7);
      iVar10 = (uVar3 - uVar2 * uVar7) * 0x4e + iVar10;
      iVar6 = iVar10 + 0x22;
      bVar13 = SBORROW4(iVar6,param_2);
      iVar1 = iVar6 - param_2;
      bVar12 = iVar6 == param_2;
      if (iVar6 <= param_2) {
        uVar2 = uVar2 * 0x4a + iVar11;
        iVar11 = uVar2 + 0x60;
        bVar13 = SBORROW4(iVar11,param_3);
        iVar1 = iVar11 - param_3;
        bVar12 = iVar11 == param_3;
      }
      if (bVar12 || iVar1 < 0 != bVar13) {
        iVar10 = iVar10 + 0x66;
        bVar13 = SBORROW4(iVar10,param_2);
        iVar1 = iVar10 - param_2;
        bVar12 = iVar10 == param_2;
        if (param_2 < iVar10) {
          iVar10 = uVar2 + 0xa0;
          bVar13 = SBORROW4(iVar10,param_3);
          iVar1 = iVar10 - param_3;
          bVar12 = iVar10 == param_3;
        }
        if (!bVar12 && iVar1 < 0 == bVar13) {
          iVar8 = iVar8 + uVar3;
          if (iVar8 == 0) {
            return -1;
          }
          if (iVar8 == 1) {
            return -2;
          }
          return iVar8 + -2;
        }
      }
      uVar3 = uVar3 + 1;
    } while (iVar9 * iVar5 != uVar3);
  }
  return -1000;
}


#undef DAT_10023774
#define DAT_10023774 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x16cU)))
#define local_fd (*(char (*)[241])(frame + 19))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001cf30
 */

void recovered_1001cf30(char *param_1,undefined1 *param_2)

{
  unsigned char frame[304] __attribute__((aligned(16))) = {0};

  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char cVar5;
  char *pcVar6;

  uVar3 = 0;
  pcVar4 = &DAT_10023774;
  if (param_1 != (char *)0x0) {
    pcVar4 = param_1;
  }
  cVar5 = *pcVar4;
  do {
    if (cVar5 == '\0') break;
    cVar1 = pcVar4[uVar3 + 1];
    local_fd[uVar3] = cVar5;
    uVar3 = uVar3 + 1;
    cVar5 = cVar1;
  } while (uVar3 < 0xf0);
  local_fd[uVar3] = '\0';
  if (local_fd[0] != '\0') {
    pcVar4 = (char *)0x0;
    pcVar6 = local_fd;
    cVar5 = local_fd[0];
    do {
      cVar1 = pcVar6[1];
      if (cVar5 == '/') {
        pcVar4 = pcVar6;
      }
      pcVar6 = pcVar6 + 1;
      cVar5 = cVar1;
    } while (cVar1 != '\0');
    if (pcVar4 != (char *)0x0) {
      uVar3 = 0;
      *pcVar4 = '\0';
      if (param_2 == (undefined1 *)0x0) {
        return;
      }
      if (local_fd[0] != '\0') {
        uVar2 = 0;
        do {
          uVar3 = uVar2 + 1;
          param_2[uVar2] = local_fd[0];
          if (0xef < uVar3) break;
          local_fd[0] = local_fd[uVar2 + 1];
          uVar2 = uVar3;
        } while (local_fd[0] != '\0');
      }
      param_2 = param_2 + uVar3;
      goto LAB_1001d024;
    }
  }
  if (param_2 == (undefined1 *)0x0) {
    return;
  }
LAB_1001d024:
  *param_2 = 0;
  return;
}

#undef DAT_10023774
#undef local_fd

#undef DAT_1001d4b0
#define DAT_1001d4b0 (*(uint64_t *)(0x1001d4b0U))
#undef DAT_1001d4b8
#define DAT_1001d4b8 (*(uint64_t *)(0x1001d4b8U))
#undef DAT_1001d4d0
#define DAT_1001d4d0 (*(uint64_t *)(0x1001d4d0U))
#undef DAT_1001d4d8
#define DAT_1001d4d8 (*(uint64_t *)(0x1001d4d8U))
#undef DAT_10023774
#define DAT_10023774 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x16cU)))
#undef DAT_10023e65
#define DAT_10023e65 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x85dU)))
#undef DAT_1002430c
#define DAT_1002430c (*(int *)(((uintptr_t)pf_module_state + 0xd04U)))
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
#undef UINT_40010858
#define UINT_40010858 (*(uint *)(0x40010858U))
#undef UINT_400108e0
#define UINT_400108e0 (*(uint *)(0x400108e0U))
#undef str_10023e69
#define str_10023e69 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x861U)))
#define uStack_28 (*(undefined8 *)(frame + 40))
#define local_3c (*(undefined4 *)(frame + 20))
#define local_38 (*(int *)(frame + 24))
#define local_34 (*(char * *)(frame + 28))
#define local_30 (*(undefined8 *)(frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001d040
 */

/* WARNING: Removing unreachable block (ram,0x1001d4cc) */

void recovered_1001d040(byte *param_1,int param_2,int param_3)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  byte *pbVar8;
  byte bVar9;
  uint uVar10;
  void *outImage;
  byte bVar11;
  uint uVar12;
  byte *pbVar13;
  uint unaff_r11;
  int iVar14;
  bool bVar15;

  if (param_1 != (byte *)0x0) {
    unaff_r11 = (uint)*param_1;
  }
  if (param_1 == (byte *)0x0 || unaff_r11 == 0) {
    param_1 = &DAT_10023774;
    goto LAB_1001d070;
  }
  bVar4 = recovered_10013aec(param_1);
  if (bVar4) {
    uVar12 = 0;
    local_38 = recovered_10005734(1,str_10023e69,0xf4f4f4,'\0');
    local_34 = str_10023e69;
    local_30 = (0x44000000a4U);
    uStack_28 = (0x16800000230U);
    local_3c = 1;
    iVar5 = recovered_1000eac0(&local_3c);
    iVar6 = DAT_1002430c;
    if (iVar5 < 0) {
      return;
    }
    bVar11 = *param_1;
    iVar14 = iVar5 * 0xd9c + DAT_1002430c;
    if (bVar11 != 0) {
      uVar10 = 0;
      do {
        uVar12 = uVar10 + 1;
        *(byte *)(iVar14 + 0x78 + uVar10) = bVar11;
        if (0xef < uVar12) break;
        bVar11 = param_1[uVar10 + 1];
        uVar10 = uVar12;
      } while (bVar11 != 0);
    }
    uVar10 = 0;
    *(undefined1 *)(iVar14 + 0x78 + uVar12) = 0;
    pbVar13 = (byte *)0x0;
    *(int *)(iVar14 + 0x25c) = param_3;
    if (*param_1 != 0) {
      pbVar8 = param_1;
      bVar11 = *param_1;
      do {
        bVar9 = pbVar8[1];
        if (bVar11 == 0x2f) {
          pbVar13 = pbVar8;
        }
        pbVar8 = pbVar8 + 1;
        bVar11 = bVar9;
      } while (bVar9 != 0);
    }
    pbVar8 = param_1;
    if (pbVar13 != (byte *)0x0) {
      pbVar8 = pbVar13 + 1;
    }
    bVar11 = *pbVar8;
    if (bVar11 != 0) {
      uVar12 = 0;
      do {
        uVar10 = uVar12 + 1;
        *(byte *)(iVar14 + 0x18 + uVar12) = bVar11;
        if (0x3e < uVar10) break;
        bVar11 = pbVar8[uVar12 + 1];
        uVar12 = uVar10;
      } while (bVar11 != 0);
    }
    *(undefined1 *)(iVar14 + 0x18 + uVar10) = 0;
    outImage = (void *)(iVar5 * 0xd9c + iVar6 + 0xb04);
    iVar14 = Ram40010800;
    if ((iVar14 == 0x50414d57) && (iVar14 = Ram40010804, iVar14 != 0)) {
      uVar12 = Ram40010808;
      bVar15 = 0xb < uVar12;
      bVar4 = uVar12 == 0xc;
      if (bVar15) {
        uVar12 = Ram40010808;
        bVar4 = uVar12 == 0xe3;
      }
      if ((!bVar15 || uVar12 < 0xe3) || bVar4) goto LAB_1001d218;
      pcVar1 = (code *)UINT_400108e0;
      if (pcVar1 == (code *)0x0) goto LAB_1001d244;
      uVar12 = (*pcVar1)(param_3,(char *)param_1,outImage);
    }
    else {
LAB_1001d218:
      iVar14 = Ram40010800;
      if ((iVar14 != 0x50414d57) || (iVar14 = Ram40010804, iVar14 == 0)) goto LAB_1001d244;
      uVar12 = Ram40010808;
      bVar4 = 0xb < uVar12;
      if (bVar4) {
        uVar12 = Ram40010808;
      }
      if ((!bVar4 || uVar12 < 0x5c) || (pcVar1 = (code *)UINT_40010858, pcVar1 == (code *)0x0))
      goto LAB_1001d244;
      uVar12 = (*pcVar1)((char *)param_1,outImage);
    }
    if (uVar12 != 0) {
      return;
    }
    iVar6 = DAT_1002430c;
LAB_1001d244:
    uVar3 = (0x65646f6365642074U);
    uVar2 = (0x6f6e20646c756f43U);
    iVar6 = iVar5 * 0xd9c + iVar6;
    *(undefined1 *)(iVar6 + 0x277) = 0;
    *(undefined2 *)(iVar6 + 0x275) = 0x6567;
    *(undefined8 *)(iVar6 + 0x261) = uVar2;
    *(undefined8 *)(iVar6 + 0x269) = uVar3;
    *(undefined4 *)(iVar6 + 0x271) = 0x616d6920;
    return;
  }
  pbVar13 = (byte *)0x0;
  uVar12 = unaff_r11;
  pbVar8 = param_1;
  do {
    uVar10 = (uint)pbVar8[1];
    if (uVar12 == 0x2f) {
      pbVar13 = pbVar8;
    }
    uVar12 = uVar10;
    pbVar8 = pbVar8 + 1;
  } while (uVar10 != 0);
  pbVar8 = param_1;
  if (pbVar13 != (byte *)0x0) {
    pbVar8 = pbVar13 + 1;
  }
  pbVar13 = (byte *)0x0;
  if (*pbVar8 != 0) {
    bVar11 = *pbVar8;
    do {
      bVar9 = pbVar8[1];
      if (bVar11 == 0x2e) {
        pbVar13 = pbVar8;
      }
      pbVar8 = pbVar8 + 1;
      bVar11 = bVar9;
    } while (bVar9 != 0);
  }
  if (pbVar13 == (byte *)0x0) {
    pbVar13 = &DAT_10023774;
  }
  uVar12 = (uint)*pbVar13;
  if (uVar12 == 0) {
    iVar6 = 0x2e;
    goto LAB_1001d3a4;
  }
  if (uVar12 - 0x41 < 0x1a) {
    uVar12 = uVar12 | 0x20;
  }
  if ((uVar12 == 0x2e) && (uVar12 = (uint)pbVar13[1], uVar12 != 0)) {
    if (uVar12 - 0x41 < 0x1a) {
      uVar12 = uVar12 | 0x20;
    }
    if (uVar12 == 0x61) {
      uVar12 = (uint)pbVar13[2];
      iVar6 = 0x70;
      if (uVar12 == 0) {
LAB_1001d3a4:
        if (iVar6 == 0) goto LAB_1001d790;
      }
      else {
        if (uVar12 - 0x41 < 0x1a) {
          uVar12 = uVar12 | 0x20;
        }
        if (uVar12 == 0x70) {
          uVar12 = (uint)pbVar13[3];
          if (uVar12 == 0) goto LAB_1001d3a4;
          if (uVar12 - 0x41 < 0x1a) {
            uVar12 = uVar12 | 0x20;
          }
          if ((uVar12 == 0x70) && (pbVar13[4] == 0)) goto LAB_1001d790;
        }
      }
    }
  }
  pbVar13 = (byte *)0x0;
  pbVar8 = param_1;
  uVar12 = unaff_r11;
  do {
    uVar10 = (uint)pbVar8[1];
    if (uVar12 == 0x2f) {
      pbVar13 = pbVar8;
    }
    pbVar8 = pbVar8 + 1;
    uVar12 = uVar10;
  } while (uVar10 != 0);
  pbVar8 = param_1;
  if (pbVar13 != (byte *)0x0) {
    pbVar8 = pbVar13 + 1;
  }
  pbVar13 = (byte *)0x0;
  if (*pbVar8 != 0) {
    bVar11 = *pbVar8;
    do {
      bVar9 = pbVar8[1];
      if (bVar11 == 0x2e) {
        pbVar13 = pbVar8;
      }
      pbVar8 = pbVar8 + 1;
      bVar11 = bVar9;
    } while (bVar9 != 0);
  }
  if (pbVar13 == (byte *)0x0) {
    pbVar13 = &DAT_10023774;
  }
  uVar12 = (uint)*pbVar13;
  if (uVar12 == 0) {
    bVar9 = 0x2e;
    bVar11 = 0;
LAB_1001d54c:
    if (bVar11 == bVar9) goto LAB_1001d790;
  }
  else {
    if (uVar12 - 0x41 < 0x1a) {
      uVar12 = uVar12 | 0x20;
    }
    if (uVar12 == 0x2e) {
      uVar12 = (uint)pbVar13[1];
      if (uVar12 == 0) {
        bVar9 = 0x62;
        bVar11 = 0;
      }
      else {
        if (uVar12 - 0x41 < 0x1a) {
          uVar12 = uVar12 | 0x20;
        }
        if (uVar12 != 0x62) goto LAB_1001d554;
        uVar12 = (uint)pbVar13[2];
        if (uVar12 == 0) {
          bVar9 = 0x69;
          bVar11 = 0;
        }
        else {
          if (uVar12 - 0x41 < 0x1a) {
            uVar12 = uVar12 | 0x20;
          }
          if (uVar12 != 0x69) goto LAB_1001d554;
          uVar12 = (uint)pbVar13[3];
          if (uVar12 == 0) {
            bVar9 = 0x6e;
            bVar11 = 0;
          }
          else {
            if (uVar12 - 0x41 < 0x1a) {
              uVar12 = uVar12 | 0x20;
            }
            if (uVar12 != 0x6e) goto LAB_1001d554;
            bVar11 = pbVar13[4];
            bVar9 = 0;
          }
        }
      }
      goto LAB_1001d54c;
    }
  }
LAB_1001d554:
  pbVar13 = (byte *)0x0;
  pbVar8 = param_1;
  uVar12 = unaff_r11;
  do {
    uVar10 = (uint)pbVar8[1];
    if (uVar12 == 0x2f) {
      pbVar13 = pbVar8;
    }
    pbVar8 = pbVar8 + 1;
    uVar12 = uVar10;
  } while (uVar10 != 0);
  pbVar8 = param_1;
  if (pbVar13 != (byte *)0x0) {
    pbVar8 = pbVar13 + 1;
  }
  pbVar13 = (byte *)0x0;
  if (*pbVar8 != 0) {
    bVar11 = *pbVar8;
    do {
      bVar9 = pbVar8[1];
      if (bVar11 == 0x2e) {
        pbVar13 = pbVar8;
      }
      pbVar8 = pbVar8 + 1;
      bVar11 = bVar9;
    } while (bVar9 != 0);
  }
  if (pbVar13 == (byte *)0x0) {
    pbVar13 = &DAT_10023774;
  }
  uVar12 = (uint)*pbVar13;
  if (uVar12 == 0) {
    bVar9 = 0x2e;
    bVar11 = 0;
LAB_1001d644:
    if (bVar11 == bVar9) goto LAB_1001d790;
  }
  else {
    if (uVar12 - 0x41 < 0x1a) {
      uVar12 = uVar12 | 0x20;
    }
    if (uVar12 == 0x2e) {
      uVar12 = (uint)pbVar13[1];
      if (uVar12 == 0) {
        bVar9 = 0x77;
        bVar11 = 0;
      }
      else {
        if (uVar12 - 0x41 < 0x1a) {
          uVar12 = uVar12 | 0x20;
        }
        if (uVar12 != 0x77) goto LAB_1001d64c;
        uVar12 = (uint)pbVar13[2];
        if (uVar12 == 0) {
          bVar9 = 0x73;
          bVar11 = 0;
        }
        else {
          if (uVar12 - 0x41 < 0x1a) {
            uVar12 = uVar12 | 0x20;
          }
          if (uVar12 != 0x73) goto LAB_1001d64c;
          bVar11 = pbVar13[3];
          bVar9 = 0;
        }
      }
      goto LAB_1001d644;
    }
  }
LAB_1001d64c:
  pbVar13 = (byte *)0x0;
  pbVar8 = param_1;
  do {
    uVar12 = (uint)pbVar8[1];
    if (unaff_r11 == 0x2f) {
      pbVar13 = pbVar8;
    }
    pbVar8 = pbVar8 + 1;
    unaff_r11 = uVar12;
  } while (uVar12 != 0);
  pbVar8 = param_1;
  if (pbVar13 != (byte *)0x0) {
    pbVar8 = pbVar13 + 1;
  }
  pbVar13 = (byte *)0x0;
  if (*pbVar8 != 0) {
    bVar11 = *pbVar8;
    do {
      bVar9 = pbVar8[1];
      if (bVar11 == 0x2e) {
        pbVar13 = pbVar8;
      }
      pbVar8 = pbVar8 + 1;
      bVar11 = bVar9;
    } while (bVar9 != 0);
  }
  pbVar8 = &DAT_10023774;
  if (pbVar13 != (byte *)0x0) {
    pbVar8 = pbVar13;
  }
  uVar12 = (uint)*pbVar8;
  if (uVar12 == 0) {
    bVar9 = 0x2e;
    bVar11 = 0;
LAB_1001d760:
    if (bVar11 == bVar9) goto LAB_1001d790;
  }
  else {
    if (uVar12 - 0x41 < 0x1a) {
      uVar12 = uVar12 | 0x20;
    }
    if (uVar12 == 0x2e) {
      uVar12 = (uint)pbVar8[1];
      if (uVar12 == 0) {
        bVar9 = 0x6c;
        bVar11 = 0;
      }
      else {
        if (uVar12 - 0x41 < 0x1a) {
          uVar12 = uVar12 | 0x20;
        }
        if (uVar12 != 0x6c) goto LAB_1001d768;
        uVar12 = (uint)pbVar8[2];
        if (uVar12 == 0) {
          bVar9 = 0x75;
          bVar11 = 0;
        }
        else {
          if (uVar12 - 0x41 < 0x1a) {
            uVar12 = uVar12 | 0x20;
          }
          if (uVar12 != 0x75) goto LAB_1001d768;
          uVar12 = (uint)pbVar8[3];
          if (uVar12 == 0) {
            bVar9 = 0x61;
            bVar11 = 0;
          }
          else {
            if (uVar12 - 0x41 < 0x1a) {
              uVar12 = uVar12 | 0x20;
            }
            if (uVar12 != 0x61) goto LAB_1001d768;
            bVar11 = pbVar8[4];
            bVar9 = 0;
          }
        }
      }
      goto LAB_1001d760;
    }
  }
LAB_1001d768:
  bVar4 = recovered_100131e4(param_1,&DAT_10023e65);
  if (bVar4) {
LAB_1001d790:
    recovered_10021520(param_1,param_3);
    return;
  }
  if (param_2 == 0) {
    memset(&local_3c,0,0xc);
    uVar10 = recovered_1000dfb8(param_3,(char *)param_1,&local_3c);
    uVar12 = 0;
    if (uVar10 != 0) {
      uVar12 = (uint)local_34 & 0xff;
    }
    if (uVar10 != 0 && (uVar12 & 2) != 0) {
      recovered_1000e894((char *)param_1,param_3);
      return;
    }
  }
  else {
    if ((*(int *)(param_2 + 0x1ec) == 2) || ((*(byte *)(param_2 + 0x1e8) & 2) != 0)) {
LAB_1001d070:
      recovered_1000e894((char *)param_1,param_3);
      return;
    }
    pcVar7 = recovered_10013d80((char *)param_1);
    if (*pcVar7 == '\0') goto LAB_1001d790;
  }
  recovered_1001da60((char *)param_1,param_2);
  return;
}

#undef DAT_1001d4b0
#undef DAT_1001d4b8
#undef DAT_1001d4d0
#undef DAT_1001d4d8
#undef DAT_10023774
#undef DAT_10023e65
#undef DAT_1002430c
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef Ram40010800
#undef Ram40010804
#undef Ram40010808
#undef UINT_40010858
#undef UINT_400108e0
#undef str_10023e69
#undef uStack_28
#undef local_3c
#undef local_38
#undef local_34
#undef local_30

#undef DAT_10024910
#define DAT_10024910 (*(int *)(((uintptr_t)pf_module_state + 0x1308U)))
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
#undef str_1002391f
#define str_1002391f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x317U)))
#define local_818 (*(char (*)[2048])(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001d834
 */

void recovered_1001d834(void)

{
  unsigned char frame[2128] __attribute__((aligned(16))) = {0};

  code *pcVar1;
  int iVar2;
  ulong size;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  bool bVar7;

  iVar5 = 0;
  iVar6 = 0x12;
  local_818[0] = '\0';
  iVar2 = DAT_10024910;
  do {
    if (*(char *)(iVar2 + iVar5) == '\x01') {
      iVar3 = iVar2 + iVar5;
      uVar4 = *(uint *)(iVar3 + 4);
      bVar7 = uVar4 == 5;
      if (bVar7) {
        uVar4 = (uint)*(byte *)(iVar3 + 1);
      }
      if (bVar7 && uVar4 == 1) {
        recovered_1001f7a0(local_818,*(uint *)(iVar3 + 0x124),(char *)(iVar3 + 0x30));
        iVar2 = DAT_10024910;
      }
    }
    iVar5 = iVar5 + 300;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  size = strlen(local_818);
  iVar2 = Ram40010800;
  if ((iVar2 == 0x50414d57) && (iVar2 = Ram40010804, iVar2 != 0)) {
    uVar4 = Ram40010808;
    bVar7 = 0xb < uVar4;
    if (bVar7) {
      uVar4 = Ram40010808;
    }
    if ((bVar7 && 0x3b < uVar4) && (pcVar1 = (code *)UINT_40010838, pcVar1 != (code *)0x0)) {
      (*pcVar1)(str_1002391f,local_818,size);
    }
  }
  return;
}

#undef DAT_10024910
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef Ram40010800
#undef Ram40010804
#undef Ram40010808
#undef UINT_40010838
#undef str_1002391f
#undef local_818

#undef DAT_1002430c
#define DAT_1002430c (*(int *)(((uintptr_t)pf_module_state + 0xd04U)))
#undef DAT_10024910
#define DAT_10024910 (*(int *)(((uintptr_t)pf_module_state + 0x1308U)))
#undef EXT_00000014
#define EXT_00000014 (*(uint8_t *)(0x14U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001d92c
 */

void recovered_1001d92c(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  int iVar2;
  char *dst;
  int iVar3;
  int *piVar4;
  undefined1 *puVar5;
  int iVar6;
  int iVar7;
  bool bVar8;

  iVar7 = 0;
  puVar5 = (undefined1 *)0x0;
  iVar2 = DAT_1002430c;
  do {
    if ((*(char *)(iVar2 + iVar7) == '\x01') && (*(int *)(iVar2 + iVar7 + 0x14) == param_1)) {
      recovered_10021c20(puVar5,1);
      iVar2 = DAT_1002430c;
    }
    puVar5 = puVar5 + 1;
    iVar7 = iVar7 + 0xd9c;
  } while (puVar5 != &NotUsed);
  iVar7 = 0;
  iVar2 = DAT_10024910;
  do {
    dst = (char *)(iVar2 + iVar7 * 300);
    cVar1 = *dst;
    bVar8 = cVar1 == '\x01';
    if (bVar8) {
      cVar1 = dst[1];
    }
    if (bVar8 && cVar1 == '\0') {
      iVar6 = 0x14;
      piVar4 = (int *)(DAT_1002430c + 0x14);
      iVar3 = 0;
      do {
        if (((char)piVar4[-5] == '\x01') && (*piVar4 == iVar7)) {
          iVar3 = iVar3 + 1;
        }
        piVar4 = piVar4 + 0x367;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
      if (iVar3 == 0) {
        memset(dst,0,300);
        iVar2 = DAT_10024910;
      }
    }
    iVar7 = iVar7 + 1;
  } while (iVar7 != 0x12);
  return;
}

#undef DAT_1002430c
#undef DAT_10024910
#undef EXT_00000014

#undef DAT_1001de60
#define DAT_1001de60 (*(uint64_t *)(0x1001de60U))
#undef DAT_1001de68
#define DAT_1001de68 (*(uint64_t *)(0x1001de68U))
#undef DAT_10023774
#define DAT_10023774 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x16cU)))
#undef DAT_10023dd6
#define DAT_10023dd6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7ceU)))
#undef DAT_1002430c
#define DAT_1002430c (*(int *)(((uintptr_t)pf_module_state + 0xd04U)))
#undef str_10023ddb
#define str_10023ddb (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7d3U)))
#undef str_10023de7
#define str_10023de7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7dfU)))
#define uStack_28 (*(undefined8 *)(frame + 40))
#define local_3c (*(undefined4 *)(frame + 20))
#define local_38 (*(int *)(frame + 24))
#define local_34 (*(char * *)(frame + 28))
#define local_30 (*(undefined8 *)(frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001da60
 */

void recovered_1001da60(char *param_1,int param_2)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  char cVar1;
  int iVar2;
  char *pcVar3;
  ulong uVar4;
  char *pcVar5;
  char cVar6;
  int iVar7;
  ulong uVar8;
  uint uVar9;
  char *pcVar10;
  char *pcVar11;
  char *text;

  pcVar11 = (char *)0x0;
  local_38 = recovered_10005734(2,&DAT_10023dd6,0xd6d6d6,'\0');
  local_30 = (0x72000000f8U);
  uStack_28 = (0xd60000019aU);
  local_34 = str_10023ddb;
  local_3c = 2;
  iVar2 = recovered_1000eac0(&local_3c);
  if (-1 < iVar2) {
    if (param_1 == (char *)0x0) {
      pcVar3 = &DAT_10023774;
    }
    else {
      pcVar3 = param_1;
      if (*param_1 != '\0') {
        pcVar5 = param_1;
        cVar6 = *param_1;
        do {
          cVar1 = pcVar5[1];
          if (cVar6 == '/') {
            pcVar11 = pcVar5;
          }
          pcVar5 = pcVar5 + 1;
          cVar6 = cVar1;
        } while (cVar1 != '\0');
      }
    }
    if (pcVar11 != (char *)0x0) {
      pcVar3 = pcVar11 + 1;
    }
    pcVar11 = (char *)0x0;
    if (*pcVar3 != '\0') {
      cVar6 = *pcVar3;
      do {
        cVar1 = pcVar3[1];
        if (cVar6 == '.') {
          pcVar11 = pcVar3;
        }
        pcVar3 = pcVar3 + 1;
        cVar6 = cVar1;
      } while (cVar1 != '\0');
    }
    pcVar3 = (char *)(iVar2 * 0xd9c + DAT_1002430c + 0x261);
    *pcVar3 = '\0';
    uVar4 = strlen(pcVar3);
    if (pcVar11 == (char *)0x0) {
      pcVar11 = &DAT_10023774;
    }
    if (uVar4 >> 0xb == 0) {
      iVar7 = 0x7ff;
      if (uVar4 != 0x7ff) {
        pcVar3[uVar4] = 'N';
        iVar7 = uVar4 + 1;
        if (uVar4 < 0x7fe) {
          pcVar3[iVar7] = 'a';
          iVar7 = uVar4 + 2;
          if (uVar4 != 0x7fd) {
            pcVar3[iVar7] = 'm';
            iVar7 = uVar4 + 3;
            if (uVar4 < 0x7fc) {
              pcVar3[iVar7] = 'e';
              iVar7 = uVar4 + 4;
              if (uVar4 != 0x7fb) {
                pcVar3[iVar7] = ':';
                iVar7 = uVar4 + 5;
                if (uVar4 < 0x7fa) {
                  pcVar3[iVar7] = ' ';
                  iVar7 = uVar4 + 6;
                }
              }
            }
          }
        }
      }
      pcVar3[iVar7] = '\0';
    }
    text = (char *)(iVar2 * 0xd9c + DAT_1002430c + 0x261);
    pcVar5 = (char *)0x0;
    pcVar3 = &DAT_10023774;
    if (param_1 != (char *)0x0) {
      pcVar3 = param_1;
      if (*param_1 != '\0') {
        pcVar10 = param_1;
        cVar6 = *param_1;
        do {
          cVar1 = pcVar10[1];
          if (cVar6 == '/') {
            pcVar5 = pcVar10;
          }
          pcVar10 = pcVar10 + 1;
          cVar6 = cVar1;
        } while (cVar1 != '\0');
      }
    }
    if (pcVar5 != (char *)0x0) {
      pcVar3 = pcVar5 + 1;
    }
    uVar4 = strlen(text);
    if (uVar4 >> 0xb == 0) {
      if ((uVar4 == 0x7ff) || (cVar6 = *pcVar3, cVar6 == '\0')) {
        uVar8 = uVar4;
      }
      else {
        do {
          pcVar3 = pcVar3 + 1;
          uVar8 = uVar4 + 1;
          text[uVar4] = cVar6;
          if (0x7fd < uVar4) break;
          cVar6 = *pcVar3;
          uVar4 = uVar8;
        } while (cVar6 != '\0');
      }
      text[uVar8] = '\0';
    }
    pcVar3 = (char *)(iVar2 * 0xd9c + DAT_1002430c + 0x261);
    uVar4 = strlen(pcVar3);
    if (uVar4 >> 0xb == 0) {
      iVar7 = 0x7ff;
      if (uVar4 != 0x7ff) {
        pcVar3[uVar4] = '\n';
        iVar7 = uVar4 + 1;
        if (uVar4 < 0x7fe) {
          pcVar3[iVar7] = 'P';
          iVar7 = uVar4 + 2;
          if (uVar4 != 0x7fd) {
            pcVar3[iVar7] = 'a';
            iVar7 = uVar4 + 3;
            if (uVar4 < 0x7fc) {
              pcVar3[iVar7] = 't';
              iVar7 = uVar4 + 4;
              if (uVar4 != 0x7fb) {
                pcVar3[iVar7] = 'h';
                iVar7 = uVar4 + 5;
                if (uVar4 < 0x7fa) {
                  pcVar3[iVar7] = ':';
                  iVar7 = uVar4 + 6;
                  if (uVar4 != 0x7f9) {
                    pcVar3[iVar7] = ' ';
                    iVar7 = uVar4 + 7;
                    if (uVar4 >> 3 < 0xff) {
                      pcVar3[iVar7] = '/';
                      iVar7 = uVar4 + 8;
                    }
                  }
                }
              }
            }
          }
        }
      }
      pcVar3[iVar7] = '\0';
    }
    pcVar5 = (char *)(iVar2 * 0xd9c + DAT_1002430c + 0x261);
    uVar4 = strlen(pcVar5);
    pcVar3 = &DAT_10023774;
    if (param_1 != (char *)0x0) {
      pcVar3 = param_1;
    }
    if (uVar4 >> 0xb == 0) {
      if ((uVar4 == 0x7ff) || (cVar6 = *pcVar3, cVar6 == '\0')) {
        uVar8 = uVar4;
      }
      else {
        do {
          pcVar3 = pcVar3 + 1;
          uVar8 = uVar4 + 1;
          pcVar5[uVar4] = cVar6;
          if (0x7fd < uVar4) break;
          cVar6 = *pcVar3;
          uVar4 = uVar8;
        } while (cVar6 != '\0');
      }
      pcVar5[uVar8] = '\0';
    }
    pcVar3 = (char *)(iVar2 * 0xd9c + DAT_1002430c + 0x261);
    uVar4 = strlen(pcVar3);
    if (uVar4 >> 0xb == 0) {
      iVar7 = 0x7ff;
      if (uVar4 != 0x7ff) {
        pcVar3[uVar4] = '\n';
        iVar7 = uVar4 + 1;
        if (uVar4 < 0x7fe) {
          pcVar3[iVar7] = 'T';
          iVar7 = uVar4 + 2;
          if (uVar4 != 0x7fd) {
            pcVar3[iVar7] = 'y';
            iVar7 = uVar4 + 3;
            if (uVar4 < 0x7fc) {
              pcVar3[iVar7] = 'p';
              iVar7 = uVar4 + 4;
              if (uVar4 != 0x7fb) {
                pcVar3[iVar7] = 'e';
                iVar7 = uVar4 + 5;
                if (uVar4 < 0x7fa) {
                  pcVar3[iVar7] = ':';
                  iVar7 = uVar4 + 6;
                  if (uVar4 != 0x7f9) {
                    pcVar3[iVar7] = ' ';
                    iVar7 = uVar4 + 7;
                  }
                }
              }
            }
          }
        }
      }
      pcVar3[iVar7] = '\0';
    }
    pcVar3 = (char *)((uintptr_t)pf_module_state + 0x7e6U);
    pcVar5 = (char *)(iVar2 * 0xd9c + DAT_1002430c + 0x261);
    if ((param_2 != 0) &&
       ((*(int *)(param_2 + 0x1ec) == 2 || ((*(uint *)(param_2 + 0x1e8) & 2) != 0)))) {
      pcVar3 = str_10023de7;
    }
    uVar4 = strlen(pcVar5);
    if (uVar4 >> 0xb == 0) {
      if ((uVar4 == 0x7ff) || (cVar6 = *pcVar3, cVar6 == '\0')) {
        uVar8 = uVar4;
      }
      else {
        do {
          pcVar3 = pcVar3 + 1;
          uVar8 = uVar4 + 1;
          pcVar5[uVar4] = cVar6;
          if (0x7fd < uVar4) break;
          cVar6 = *pcVar3;
          uVar4 = uVar8;
        } while (cVar6 != '\0');
      }
      pcVar5[uVar8] = '\0';
    }
    if (*pcVar11 != '\0') {
      pcVar3 = (char *)(iVar2 * 0xd9c + DAT_1002430c + 0x261);
      uVar4 = strlen(pcVar3);
      if (uVar4 >> 0xb == 0) {
        if ((uVar4 == 0x7ff) || (cVar6 = *pcVar11, cVar6 == '\0')) {
          uVar8 = uVar4;
        }
        else {
          do {
            pcVar11 = pcVar11 + 1;
            uVar8 = uVar4 + 1;
            pcVar3[uVar4] = cVar6;
            if (0x7fd < uVar4) break;
            cVar6 = *pcVar11;
            uVar4 = uVar8;
          } while (cVar6 != '\0');
        }
        pcVar3[uVar8] = '\0';
      }
    }
    pcVar11 = (char *)(iVar2 * 0xd9c + DAT_1002430c + 0x261);
    uVar4 = strlen(pcVar11);
    if (uVar4 >> 0xb == 0) {
      iVar7 = 0x7ff;
      if (uVar4 != 0x7ff) {
        pcVar11[uVar4] = '\n';
        iVar7 = uVar4 + 1;
        if (uVar4 < 0x7fe) {
          pcVar11[iVar7] = 'S';
          iVar7 = uVar4 + 2;
          if (uVar4 != 0x7fd) {
            pcVar11[iVar7] = 'i';
            iVar7 = uVar4 + 3;
            if (uVar4 < 0x7fc) {
              pcVar11[iVar7] = 'z';
              iVar7 = uVar4 + 4;
              if (uVar4 != 0x7fb) {
                pcVar11[iVar7] = 'e';
                iVar7 = uVar4 + 5;
                if (uVar4 < 0x7fa) {
                  pcVar11[iVar7] = ':';
                  iVar7 = uVar4 + 6;
                  if (uVar4 != 0x7f9) {
                    pcVar11[iVar7] = ' ';
                    iVar7 = uVar4 + 7;
                  }
                }
              }
            }
          }
        }
      }
      pcVar11[iVar7] = '\0';
    }
    if (param_2 == 0) {
      uVar9 = 0;
    }
    else {
      uVar9 = *(uint *)(param_2 + 0x1e4);
    }
    recovered_10018f20((char *)(iVar2 * 0xd9c + DAT_1002430c + 0x261),0x800,uVar9);
    pcVar11 = (char *)(iVar2 * 0xd9c + DAT_1002430c + 0x261);
    uVar4 = strlen(pcVar11);
    if (uVar4 >> 0xb == 0) {
      iVar2 = 0x7ff;
      if (uVar4 != 0x7ff) {
        pcVar11[uVar4] = ' ';
        iVar2 = uVar4 + 1;
        if (uVar4 < 0x7fe) {
          pcVar11[iVar2] = 'b';
          iVar2 = uVar4 + 2;
          if (uVar4 != 0x7fd) {
            pcVar11[iVar2] = 'y';
            iVar2 = uVar4 + 3;
            if (uVar4 < 0x7fc) {
              pcVar11[iVar2] = 't';
              iVar2 = uVar4 + 4;
              if (uVar4 != 0x7fb) {
                pcVar11[iVar2] = 'e';
                iVar2 = uVar4 + 5;
                if (uVar4 < 0x7fa) {
                  pcVar11[iVar2] = 's';
                  iVar2 = uVar4 + 6;
                }
              }
            }
          }
        }
      }
      pcVar11[iVar2] = '\0';
    }
  }
  return;
}

#undef DAT_1001de60
#undef DAT_1001de68
#undef DAT_10023774
#undef DAT_10023dd6
#undef DAT_1002430c
#undef str_10023ddb
#undef str_10023de7
#undef uStack_28
#undef local_3c
#undef local_38
#undef local_34
#undef local_30

#undef DAT_100242d4
#define DAT_100242d4 (*(uint *)(((uintptr_t)pf_module_state + 0xcccU)))
#undef DAT_100243a4
#define DAT_100243a4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xd9cU)))
#undef DAT_100243a5
#define DAT_100243a5 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xd9dU)))
#undef DAT_10027610
#define DAT_10027610 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4008U)))
#undef DAT_10027614
#define DAT_10027614 (*(int *)(((uintptr_t)pf_module_state + 0x400cU)))
#undef DAT_10027618
#define DAT_10027618 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x4010U)))
#undef DAT_10027620
#define DAT_10027620 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x4018U)))
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
#undef UINT_40010858
#define UINT_40010858 (*(uint *)(0x40010858U))
#undef UINT_400108e0
#define UINT_400108e0 (*(uint *)(0x400108e0U))
#undef _DAT_10027610
#define _DAT_10027610 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x4008U)))
#undef str_100241e0
#define str_100241e0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xbd8U)))
#define local_30 (*(undefined8 *)(frame + 16))
#define uStack_28 (*(undefined8 *)(frame + 24))
#define local_20 (*(undefined8 *)(frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001e238
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint recovered_1001e238(int param_1)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  int iVar1;
  code *pcVar2;
  uint uVar3;
  char cVar4;
  uint uVar5;
  bool bVar6;
  bool bVar7;

  memset(&local_30,0,0x18);
  iVar1 = Ram40010800;
  if ((iVar1 == 0x50414d57) && (iVar1 = Ram40010804, iVar1 != 0)) {
    uVar3 = Ram40010808;
    bVar7 = 0xb < uVar3;
    bVar6 = uVar3 == 0xc;
    if (bVar7) {
      uVar3 = Ram40010808;
      bVar6 = uVar3 == 0xe3;
    }
    if ((bVar7 && 0xe2 < uVar3) && !bVar6) {
      pcVar2 = (code *)UINT_400108e0;
      if (pcVar2 == (code *)0x0) {
        return uVar3;
      }
      uVar3 = (*pcVar2)(param_1,&DAT_100243a4,&local_30);
      if (uVar3 == 0) {
        return 0;
      }
      goto LAB_1001e338;
    }
  }
  uVar3 = Ram40010800;
  if (uVar3 != 0x50414d57) {
    return uVar3;
  }
  iVar1 = Ram40010804;
  if (iVar1 == 0) {
    return 0;
  }
  uVar3 = Ram40010808;
  bVar6 = 0xb < uVar3;
  if (bVar6) {
    uVar3 = Ram40010808;
  }
  if (!bVar6 || uVar3 < 0x5c) {
    return uVar3;
  }
  pcVar2 = (code *)UINT_40010858;
  if (pcVar2 == (code *)0x0) {
    return uVar3;
  }
  uVar3 = (*pcVar2)(&DAT_100243a4,&local_30);
  if (uVar3 == 0) {
    return 0;
  }
LAB_1001e338:
  if ((((DAT_10027614 == 0) && (_DAT_10027610 != (void *)0x0)) &&
      (iVar1 = Ram40010800, iVar1 == 0x50414d57)) && (iVar1 = Ram40010804, iVar1 != 0)) {
    uVar3 = Ram40010808;
    bVar6 = 0xb < uVar3;
    if (bVar6) {
      uVar3 = Ram40010808;
    }
    if ((bVar6 && 0x53 < uVar3) && (pcVar2 = (code *)UINT_40010850, pcVar2 != (code *)0x0)) {
      (*pcVar2)(_DAT_10027610);
    }
  }
  memset(&DAT_10027610,0,0x18);
  _DAT_10027610 = local_30;
  DAT_10027618 = uStack_28;
  DAT_10027620 = local_20;
  uVar3 = 0;
  if (DAT_100243a4 != '\0') {
    uVar5 = 0;
    cVar4 = DAT_100243a4;
    do {
      uVar3 = uVar5 + 1;
      str_100241e0[uVar5] = cVar4;
      if (0xef < uVar3) break;
      cVar4 = (&DAT_100243a5)[uVar5];
      uVar5 = uVar3;
    } while (cVar4 != '\0');
  }
  str_100241e0[uVar3] = '\0';
  bVar6 = recovered_1001f8dc(DAT_100242d4);
  uVar3 = (uint)bVar6;
  if (uVar3 == 0) {
    uVar3 = recovered_10005d20();
    bVar6 = recovered_1001f8dc(uVar3);
    uVar3 = (uint)bVar6;
  }
  return uVar3;
}

#undef DAT_100242d4
#undef DAT_100243a4
#undef DAT_100243a5
#undef DAT_10027610
#undef DAT_10027614
#undef DAT_10027618
#undef DAT_10027620
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef Ram40010800
#undef Ram40010804
#undef Ram40010808
#undef UINT_40010850
#undef UINT_40010858
#undef UINT_400108e0
#undef _DAT_10027610
#undef str_100241e0
#undef local_30
#undef uStack_28
#undef local_20

#undef DAT_100243a4
#define DAT_100243a4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xd9cU)))
#undef DAT_10028fac
#define DAT_10028fac (*(void * *)(((uintptr_t)pf_module_state + 0x59a4U)))
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
#undef UINT_40010868
#define UINT_40010868 (*(uint *)(0x40010868U))
#undef UINT_40010878
#define UINT_40010878 (*(uint *)(0x40010878U))
#undef UINT_400108e4
#define UINT_400108e4 (*(uint *)(0x400108e4U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001e440
 */

void recovered_1001e440(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  void *pvVar5;
  bool bVar6;
  float extraout_s0 = 0;
  float fontSize;

  if (DAT_100243a4 == '\0') {
    return;
  }
  bVar4 = recovered_1001ffe8((byte *)&DAT_100243a4);
  if (bVar4) {
    fontSize = extraout_s0;
    if (DAT_10028fac != (void *)0x0) {
      iVar2 = Ram40010800;
      if ((iVar2 == 0x50414d57) && (iVar2 = Ram40010804, iVar2 != 0)) {
        uVar1 = Ram40010808;
        bVar4 = 0xb < uVar1;
        if (bVar4) {
          uVar1 = Ram40010808;
        }
        if ((bVar4 && 0x7b < uVar1) && (pcVar3 = (code *)UINT_40010878, pcVar3 != (code *)0x0)) {
          fontSize = (float)(*pcVar3)(DAT_10028fac);
        }
      }
      DAT_10028fac = (void *)0x0;
    }
    iVar2 = Ram40010800;
    if ((iVar2 == 0x50414d57) && (iVar2 = Ram40010804, iVar2 != 0)) {
      uVar1 = Ram40010808;
      bVar6 = 0xb < uVar1;
      bVar4 = uVar1 == 0xc;
      if (bVar6) {
        uVar1 = Ram40010808;
        bVar4 = uVar1 == 0xe7;
      }
      if ((bVar6 && 0xe6 < uVar1) && !bVar4) {
        pcVar3 = (code *)UINT_400108e4;
        if (pcVar3 == (code *)0x0) {
          DAT_10028fac = (void *)0x0;
          return;
        }
        DAT_10028fac = (*pcVar3)(param_1,&DAT_100243a4,fontSize);
        return;
      }
    }
    iVar2 = Ram40010800;
    pvVar5 = (void *)0x0;
    if ((iVar2 == 0x50414d57) && (iVar2 = Ram40010804, iVar2 != 0)) {
      uVar1 = Ram40010808;
      bVar4 = 0xb < uVar1;
      if (bVar4) {
        uVar1 = Ram40010808;
      }
      if ((bVar4 && 0x6b < uVar1) && (pcVar3 = (code *)UINT_40010868, pcVar3 != (code *)0x0)) {
        pvVar5 = (*pcVar3)(&DAT_100243a4,fontSize);
      }
    }
    DAT_10028fac = pvVar5;
    return;
  }
  return;
}

#undef DAT_100243a4
#undef DAT_10028fac
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef Ram40010800
#undef Ram40010804
#undef Ram40010808
#undef UINT_40010868
#undef UINT_40010878
#undef UINT_400108e4

#undef DAT_100243a4
#define DAT_100243a4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xd9cU)))
#undef DAT_10024918
#define DAT_10024918 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1310U)))
#undef DAT_10024941
#define DAT_10024941 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1339U)))
#undef DAT_10024a34
#define DAT_10024a34 (*(uint *)(((uintptr_t)pf_module_state + 0x142cU)))
#undef DAT_10024a3c
#define DAT_10024a3c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1434U)))
#undef DAT_10024a65
#define DAT_10024a65 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x145dU)))
#undef DAT_10024b58
#define DAT_10024b58 (*(uint *)(((uintptr_t)pf_module_state + 0x1550U)))
#undef DAT_10024b60
#define DAT_10024b60 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1558U)))
#undef DAT_10024b89
#define DAT_10024b89 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1581U)))
#undef DAT_10024c7c
#define DAT_10024c7c (*(uint *)(((uintptr_t)pf_module_state + 0x1674U)))
#undef DAT_10024c84
#define DAT_10024c84 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x167cU)))
#undef DAT_10024cad
#define DAT_10024cad (*(uint8_t *)(((uintptr_t)pf_module_state + 0x16a5U)))
#undef DAT_10024da0
#define DAT_10024da0 (*(uint *)(((uintptr_t)pf_module_state + 0x1798U)))
#undef DAT_10024da8
#define DAT_10024da8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17a0U)))
#undef DAT_10024dd1
#define DAT_10024dd1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17c9U)))
#undef DAT_10024ec4
#define DAT_10024ec4 (*(uint *)(((uintptr_t)pf_module_state + 0x18bcU)))
#undef DAT_10024ecc
#define DAT_10024ecc (*(byte *)(((uintptr_t)pf_module_state + 0x18c4U)))
#undef DAT_10024ef5
#define DAT_10024ef5 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x18edU)))
#undef DAT_10024fe8
#define DAT_10024fe8 (*(uint *)(((uintptr_t)pf_module_state + 0x19e0U)))
#undef DAT_10024ff0
#define DAT_10024ff0 (*(byte *)(((uintptr_t)pf_module_state + 0x19e8U)))
#undef DAT_10025019
#define DAT_10025019 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1a11U)))
#undef DAT_1002510c
#define DAT_1002510c (*(uint *)(((uintptr_t)pf_module_state + 0x1b04U)))
#undef DAT_10025114
#define DAT_10025114 (*(byte *)(((uintptr_t)pf_module_state + 0x1b0cU)))
#undef DAT_1002513d
#define DAT_1002513d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1b35U)))
#undef DAT_10025230
#define DAT_10025230 (*(uint *)(((uintptr_t)pf_module_state + 0x1c28U)))
#undef DAT_10025238
#define DAT_10025238 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1c30U)))
#undef DAT_10025261
#define DAT_10025261 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1c59U)))
#undef DAT_10025354
#define DAT_10025354 (*(uint *)(((uintptr_t)pf_module_state + 0x1d4cU)))
#undef DAT_1002535c
#define DAT_1002535c (*(byte *)(((uintptr_t)pf_module_state + 0x1d54U)))
#undef DAT_10025385
#define DAT_10025385 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1d7dU)))
#undef DAT_10025478
#define DAT_10025478 (*(uint *)(((uintptr_t)pf_module_state + 0x1e70U)))
#undef DAT_10025480
#define DAT_10025480 (*(byte *)(((uintptr_t)pf_module_state + 0x1e78U)))
#undef DAT_100254a9
#define DAT_100254a9 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1ea1U)))
#undef DAT_1002559c
#define DAT_1002559c (*(uint *)(((uintptr_t)pf_module_state + 0x1f94U)))
#undef DAT_100255a4
#define DAT_100255a4 (*(byte *)(((uintptr_t)pf_module_state + 0x1f9cU)))
#undef DAT_100255cd
#define DAT_100255cd (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1fc5U)))
#undef DAT_100256c0
#define DAT_100256c0 (*(uint *)(((uintptr_t)pf_module_state + 0x20b8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001e5a8
 */

void recovered_1001e5a8(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined1 *dst;

  dst = &DAT_10024918;
  uVar2 = (uint)DAT_10024918;
  uVar1 = uVar2;
  if (uVar2 == 1) {
    uVar1 = DAT_10024a34;
  }
  if ((uVar2 != 1 || uVar1 != param_1) ||
     (iVar3 = strcmp(&DAT_10024941,&DAT_100243a4), iVar3 != 0)) {
    uVar2 = (uint)DAT_10024a3c;
    uVar1 = uVar2;
    if (uVar2 == 1) {
      uVar1 = DAT_10024b58;
    }
    if ((uVar2 == 1 && uVar1 == param_1) &&
       (iVar3 = strcmp(&DAT_10024a65,&DAT_100243a4), iVar3 == 0)) {
      dst = &DAT_10024a3c;
    }
    else {
      uVar2 = (uint)DAT_10024b60;
      uVar1 = uVar2;
      if (uVar2 == 1) {
        uVar1 = DAT_10024c7c;
      }
      if ((uVar2 == 1 && uVar1 == param_1) &&
         (iVar3 = strcmp(&DAT_10024b89,&DAT_100243a4), iVar3 == 0)) {
        dst = &DAT_10024b60;
      }
      else {
        uVar2 = (uint)DAT_10024c84;
        uVar1 = uVar2;
        if (uVar2 == 1) {
          uVar1 = DAT_10024da0;
        }
        if ((uVar2 == 1 && uVar1 == param_1) &&
           (iVar3 = strcmp(&DAT_10024cad,&DAT_100243a4), iVar3 == 0)) {
          dst = &DAT_10024c84;
        }
        else {
          uVar2 = (uint)DAT_10024da8;
          uVar1 = uVar2;
          if (uVar2 == 1) {
            uVar1 = DAT_10024ec4;
          }
          if ((uVar2 == 1 && uVar1 == param_1) &&
             (iVar3 = strcmp(&DAT_10024dd1,&DAT_100243a4), iVar3 == 0)) {
            dst = &DAT_10024da8;
          }
          else {
            uVar2 = (uint)DAT_10024ecc;
            uVar1 = uVar2;
            if (uVar2 == 1) {
              uVar1 = DAT_10024fe8;
            }
            if ((uVar2 == 1 && uVar1 == param_1) &&
               (iVar3 = strcmp(&DAT_10024ef5,&DAT_100243a4), iVar3 == 0)) {
              iVar3 = 0x5b4;
            }
            else {
              uVar2 = (uint)DAT_10024ff0;
              uVar1 = uVar2;
              if (uVar2 == 1) {
                uVar1 = DAT_1002510c;
              }
              if ((uVar2 == 1 && uVar1 == param_1) &&
                 (iVar3 = strcmp(&DAT_10025019,&DAT_100243a4), iVar3 == 0)) {
                iVar3 = 0x6d8;
              }
              else {
                uVar2 = (uint)DAT_10025114;
                uVar1 = uVar2;
                if (uVar2 == 1) {
                  uVar1 = DAT_10025230;
                }
                if ((uVar2 == 1 && uVar1 == param_1) &&
                   (iVar3 = strcmp(&DAT_1002513d,&DAT_100243a4), iVar3 == 0)) {
                  iVar3 = 0x7fc;
                }
                else {
                  uVar2 = (uint)DAT_10025238;
                  uVar1 = uVar2;
                  if (uVar2 == 1) {
                    uVar1 = DAT_10025354;
                  }
                  if ((uVar2 == 1 && uVar1 == param_1) &&
                     (iVar3 = strcmp(&DAT_10025261,&DAT_100243a4), iVar3 == 0)) {
                    dst = &DAT_10025238;
                    goto LAB_1001e8bc;
                  }
                  uVar2 = (uint)DAT_1002535c;
                  uVar1 = uVar2;
                  if (uVar2 == 1) {
                    uVar1 = DAT_10025478;
                  }
                  if ((uVar2 == 1 && uVar1 == param_1) &&
                     (iVar3 = strcmp(&DAT_10025385,&DAT_100243a4), iVar3 == 0)) {
                    iVar3 = 0xa44;
                  }
                  else {
                    uVar2 = (uint)DAT_10025480;
                    uVar1 = uVar2;
                    if (uVar2 == 1) {
                      uVar1 = DAT_1002559c;
                    }
                    if ((uVar2 == 1 && uVar1 == param_1) &&
                       (iVar3 = strcmp(&DAT_100254a9,&DAT_100243a4), iVar3 == 0)) {
                      iVar3 = 0xb68;
                    }
                    else {
                      uVar2 = (uint)DAT_100255a4;
                      uVar1 = uVar2;
                      if (uVar2 == 1) {
                        uVar1 = DAT_100256c0;
                      }
                      if (uVar2 != 1 || uVar1 != param_1) {
                        return;
                      }
                      iVar3 = strcmp(&DAT_100255cd,&DAT_100243a4);
                      if (iVar3 != 0) {
                        return;
                      }
                      iVar3 = 0xc8c;
                    }
                  }
                }
              }
            }
            dst = &DAT_10024918 + iVar3;
          }
        }
      }
    }
  }
LAB_1001e8bc:
  memset(dst,0,0x124);
  recovered_10020804();
  return;
}

#undef DAT_100243a4
#undef DAT_10024918
#undef DAT_10024941
#undef DAT_10024a34
#undef DAT_10024a3c
#undef DAT_10024a65
#undef DAT_10024b58
#undef DAT_10024b60
#undef DAT_10024b89
#undef DAT_10024c7c
#undef DAT_10024c84
#undef DAT_10024cad
#undef DAT_10024da0
#undef DAT_10024da8
#undef DAT_10024dd1
#undef DAT_10024ec4
#undef DAT_10024ecc
#undef DAT_10024ef5
#undef DAT_10024fe8
#undef DAT_10024ff0
#undef DAT_10025019
#undef DAT_1002510c
#undef DAT_10025114
#undef DAT_1002513d
#undef DAT_10025230
#undef DAT_10025238
#undef DAT_10025261
#undef DAT_10025354
#undef DAT_1002535c
#undef DAT_10025385
#undef DAT_10025478
#undef DAT_10025480
#undef DAT_100254a9
#undef DAT_1002559c
#undef DAT_100255a4
#undef DAT_100255cd
#undef DAT_100256c0

#undef DAT_100256c8
#define DAT_100256c8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x20c0U)))
#undef DAT_100257e4
#define DAT_100257e4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x21dcU)))
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
#undef str_10023910
#define str_10023910 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x308U)))
#define local_818 (*(char (*)[2048])(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001e8d4
 */

void recovered_1001e8d4(uint param_1,char param_2)

{
  unsigned char frame[2128] __attribute__((aligned(16))) = {0};

  uint uVar1;
  code *pcVar2;
  ulong size;
  int iVar3;
  uint *puVar4;
  bool bVar5;

  iVar3 = 0x18;
  recovered_1002063c(&DAT_100256c8,0x18,param_1,param_2);
  puVar4 = &DAT_100257e4;
  local_818[0] = '\0';
  do {
    if ((char)puVar4[-0x47] == '\x01') {
      recovered_1001f7a0(local_818,*puVar4,(char *)((int)puVar4 + -0xf3));
    }
    puVar4 = puVar4 + 0x49;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  size = strlen(local_818);
  iVar3 = Ram40010800;
  if ((iVar3 == 0x50414d57) && (iVar3 = Ram40010804, iVar3 != 0)) {
    uVar1 = Ram40010808;
    bVar5 = 0xb < uVar1;
    if (bVar5) {
      uVar1 = Ram40010808;
    }
    if ((bVar5 && 0x3b < uVar1) && (pcVar2 = (code *)UINT_40010838, pcVar2 != (code *)0x0)) {
      (*pcVar2)(str_10023910,local_818,size);
    }
  }
  return;
}

#undef DAT_100256c8
#undef DAT_100257e4
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef Ram40010800
#undef Ram40010804
#undef Ram40010808
#undef UINT_40010838
#undef str_10023910
#undef local_818

#undef DAT_100243a4
#define DAT_100243a4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xd9cU)))
#undef DAT_100256c8
#define DAT_100256c8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x20c0U)))
#undef DAT_100257e4
#define DAT_100257e4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x21dcU)))
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
#undef str_10023910
#define str_10023910 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x308U)))
#define local_81c (*(char (*)[2048])(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001e9c0
 */

void recovered_1001e9c0(uint param_1)

{
  unsigned char frame[2128] __attribute__((aligned(16))) = {0};

  code *pcVar1;
  uint uVar2;
  int iVar3;
  ulong size;
  byte *dst;
  uint *puVar4;
  int iVar5;
  bool bVar6;

  dst = &DAT_100256c8;
  iVar5 = 0x18;
  while( true ) {
    uVar2 = (uint)*dst;
    bVar6 = uVar2 == 1;
    if (bVar6) {
      uVar2 = *(uint *)(dst + 0x11c);
    }
    if ((bVar6 && uVar2 == param_1) &&
       (iVar3 = strcmp((char *)(dst + 0x29),&DAT_100243a4), iVar3 == 0)) break;
    dst = dst + 0x124;
    iVar5 = iVar5 + -1;
    if (iVar5 == 0) {
      return;
    }
  }
  memset(dst,0,0x124);
  iVar5 = 0x18;
  local_81c[0] = '\0';
  puVar4 = &DAT_100257e4;
  do {
    if ((char)puVar4[-0x47] == '\x01') {
      recovered_1001f7a0(local_81c,*puVar4,(char *)((int)puVar4 + -0xf3));
    }
    puVar4 = puVar4 + 0x49;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  size = strlen(local_81c);
  iVar5 = Ram40010800;
  if ((iVar5 == 0x50414d57) && (iVar5 = Ram40010804, iVar5 != 0)) {
    uVar2 = Ram40010808;
    bVar6 = 0xb < uVar2;
    if (bVar6) {
      uVar2 = Ram40010808;
    }
    if ((bVar6 && 0x3b < uVar2) && (pcVar1 = (code *)UINT_40010838, pcVar1 != (code *)0x0)) {
      (*pcVar1)(str_10023910,local_81c,size);
    }
  }
  return;
}

#undef DAT_100243a4
#undef DAT_100256c8
#undef DAT_100257e4
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef Ram40010800
#undef Ram40010804
#undef Ram40010808
#undef UINT_40010838
#undef str_10023910
#undef local_81c

#undef DAT_100243a4
#define DAT_100243a4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xd9cU)))
#undef DAT_10024910
#define DAT_10024910 (*(int *)(((uintptr_t)pf_module_state + 0x1308U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001eb04
 */

void recovered_1001eb04(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  bool bVar6;

  iVar5 = 0;
  iVar4 = 0x12;
  iVar2 = DAT_10024910;
  do {
    if (*(char *)(iVar2 + iVar5) == '\x01') {
      iVar1 = iVar2 + iVar5;
      iVar3 = *(int *)(iVar1 + 4);
      bVar6 = iVar3 == 5;
      if (bVar6) {
        iVar3 = *(int *)(iVar1 + 0x124);
      }
      if ((bVar6 && iVar3 == param_1) &&
         (iVar3 = strcmp((char *)(iVar1 + 0x30),&DAT_100243a4), iVar2 = DAT_10024910,
         iVar3 == 0)) {
        memset((void *)(DAT_10024910 + iVar5),0,300);
        recovered_1001d834();
        return;
      }
    }
    iVar4 = iVar4 + -1;
    iVar5 = iVar5 + 300;
    if (iVar4 == 0) {
      return;
    }
  } while( true );
}

#undef DAT_100243a4
#undef DAT_10024910

#undef DAT_1001efe0
#define DAT_1001efe0 (*(uint64_t *)(0x1001efe0U))
#undef DAT_1001efe8
#define DAT_1001efe8 (*(uint64_t *)(0x1001efe8U))
#undef DAT_10023774
#define DAT_10023774 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x16cU)))
#undef DAT_1002405c
#define DAT_1002405c (*(uint32_t *)(((uintptr_t)pf_module_state + 0xa54U)))
#undef DAT_10024080
#define DAT_10024080 (*(uint32_t *)(((uintptr_t)pf_module_state + 0xa78U)))
#undef DAT_1002430c
#define DAT_1002430c (*(int *)(((uintptr_t)pf_module_state + 0xd04U)))
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
#undef UINT_4001091c
#define UINT_4001091c (*(uint *)(0x4001091cU))
#undef UINT_40010920
#define UINT_40010920 (*(uint *)(0x40010920U))
#define local_206 (*(char (*)[241])(frame + 42))
#define local_115 (*(undefined4 *)(frame + 283))
#define local_111 (*(undefined2 *)(frame + 287))
#define height (*(char * *)(frame + 28))
#define stride (*(char * *)(frame + 32))
#define in_stack_fffffdf4 (*(char * *)(frame + 36))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001ebb0
 */

/* WARNING: Type propagation algorithm not settling */

void recovered_1001ebb0(int param_1,undefined4 param_2)

{
  unsigned char frame[592] __attribute__((aligned(16))) = {0};

  char cVar1;
  byte bVar2;
  undefined8 uVar3;
  uint uVar4;
  ulong uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  ulong uVar10;
  int iVar11;
  byte *pbVar12;
  char *pcVar13;
  char *width;
  char cVar14;
  byte bVar15;
  char *pcVar16;
  code *pcVar17;
  int iVar18;
  byte *pbVar19;
  int iVar20;
  undefined4 *puVar21;
  char *pcVar22;
  bool bVar23;

  bVar15 = 1;
  puVar21 = &DAT_1002405c;
  switch((uintptr_t)(param_2)) {
  case 2:
    puVar21 = (undefined4 *)((uintptr_t)pf_module_state + 0xa60U);
    break;
  case 3:
    puVar21 = (undefined4 *)((uintptr_t)pf_module_state + 0xa6cU);
    break;
  default:
    bVar15 = 0;
    puVar21 = (undefined4 *)0x0;
    break;
  case 5:
    puVar21 = &DAT_10024080;
  case 1:
  }
  if (param_1 == 0) {
    return;
  }
  pcVar22 = *(char **)(param_1 + 0xb04);
  if (*(int *)(param_1 + 0xb08) != 0) {
    pcVar22 = (char *)0x0;
  }
  if (!(bool)(bVar15 & pcVar22 != (char *)0x0)) {
LAB_1001ec8c:
    *(undefined1 *)(param_1 + 0x273) = 0;
    uVar3 = (0x6f707865206f7420U);
    *(undefined8 *)(param_1 + 0x261) = (0x6567616d69206f4eU);
    *(undefined8 *)(param_1 + 0x269) = uVar3;
    *(undefined2 *)(param_1 + 0x271) = 0x7472;
    return;
  }
  bVar23 = *(int *)(param_1 + 0xb10) != 0;
  iVar6 = 0;
  if (bVar23) {
    iVar6 = *(int *)(param_1 + 0xb14);
  }
  if (!bVar23 || iVar6 == 0) goto LAB_1001ec8c;
  pbVar12 = (byte *)0x0;
  uVar7 = 0;
  if (*(char *)(param_1 + 0x78) != '\0') {
    cVar14 = *(char *)(param_1 + 0x78);
    do {
      cVar1 = *(char *)(param_1 + 0x79 + uVar7);
      local_206[uVar7 + 0xf1] = cVar14;
      uVar7 = uVar7 + 1;
      if (0xef < uVar7) break;
      cVar14 = cVar1;
    } while (cVar1 != '\0');
  }
  *(byte *)((int)&local_115 + uVar7) = 0;
  uVar7 = local_115 & 0xff;
  if (uVar7 != 0) {
    pbVar12 = (byte *)0x0;
    uVar4 = uVar7;
    pbVar19 = (byte *)&local_115;
    do {
      uVar8 = (uint)pbVar19[1];
      if (uVar4 == 0x2f) {
        pbVar12 = pbVar19;
      }
      uVar4 = uVar8;
      pbVar19 = pbVar19 + 1;
    } while (uVar8 != 0);
  }
  pbVar19 = (byte *)&local_115;
  if (pbVar12 != (byte *)0x0) {
    pbVar19 = pbVar12 + 1;
  }
  if (*pbVar19 != 0) {
    pbVar12 = (byte *)0x0;
    bVar15 = *pbVar19;
    do {
      bVar2 = pbVar19[1];
      if (bVar15 == 0x2e) {
        pbVar12 = pbVar19;
      }
      pbVar19 = pbVar19 + 1;
      bVar15 = bVar2;
    } while (bVar2 != 0);
    if (pbVar12 != (byte *)0x0) {
      *pbVar12 = 0;
      uVar7 = local_115 & 0xff;
    }
  }
  if (uVar7 == 0) {
    uVar7 = 0x69;
    local_115 = 0x67616d69;
    local_111 = 0x65;
  }
  uVar4 = 0;
  do {
    uVar8 = uVar4 + 1;
    local_206[uVar4] = (char)uVar7;
    if (0xef < uVar8) break;
    uVar7 = (uint)(byte)local_206[uVar4 + 0xf2];
    uVar4 = uVar8;
  } while (uVar7 != 0);
  local_206[uVar8] = '\0';
  uVar5 = strlen(local_206);
  if (uVar5 < 0xf1) {
    iVar6 = 0xf0;
    if (uVar5 != 0xf0) {
      local_206[uVar5] = '-';
      iVar6 = uVar5 + 1;
      if (uVar5 < 0xef) {
        local_206[iVar6] = 'e';
        iVar6 = uVar5 + 2;
        if (uVar5 != 0xee) {
          local_206[iVar6] = 'x';
          iVar6 = uVar5 + 3;
          if (uVar5 < 0xed) {
            local_206[iVar6] = 'p';
            iVar6 = uVar5 + 4;
            if (uVar5 != 0xec) {
              local_206[iVar6] = 'o';
              iVar6 = uVar5 + 5;
              if (uVar5 < 0xeb) {
                local_206[iVar6] = 'r';
                iVar6 = uVar5 + 6;
                if (uVar5 != 0xea) {
                  local_206[iVar6] = 't';
                  iVar6 = uVar5 + 7;
                }
              }
            }
          }
        }
      }
    }
    local_206[iVar6] = '\0';
  }
  pcVar16 = (char *)puVar21[2];
  uVar5 = strlen(local_206);
  if (uVar5 < 0xf1) {
    pcVar13 = &DAT_10023774;
    if (pcVar16 != (char *)0x0) {
      pcVar13 = pcVar16;
    }
    if ((uVar5 == 0xf0) || (cVar14 = *pcVar13, cVar14 == '\0')) {
      uVar10 = uVar5;
    }
    else {
      do {
        pcVar13 = pcVar13 + 1;
        uVar10 = uVar5 + 1;
        local_206[uVar5] = cVar14;
        if (0xee < uVar5) break;
        cVar14 = *pcVar13;
        uVar5 = uVar10;
      } while (cVar14 != '\0');
    }
    local_206[uVar10] = '\0';
  }
  pcVar16 = *(char **)(param_1 + 0x25c);
  iVar6 = Ram40010800;
  if ((((iVar6 == 0x50414d57) && (iVar6 = Ram40010804, iVar6 != 0)) &&
      (uVar7 = Ram40010808, 0xb < uVar7)) && (uVar7 = Ram40010808, 0x48 < uVar7 >> 2)) {
    pcVar17 = (code *)UINT_40010920;
    if (pcVar17 == (code *)0x0) goto LAB_1001efa8;
    pcVar13 = local_206;
    width = *(char **)(param_1 + 0xb10);
    height = *(char **)(param_1 + 0xb14);
    stride = *(char **)(param_1 + 0xb18);
    in_stack_fffffdf4 = (char *)*puVar21;
  }
  else {
    iVar6 = Ram40010800;
    if ((iVar6 != 0x50414d57) || (iVar6 = Ram40010804, iVar6 == 0)) goto LAB_1001efa8;
    uVar7 = Ram40010808;
    bVar23 = 0xb < uVar7;
    if (bVar23) {
      uVar7 = Ram40010808;
    }
    if ((!bVar23 || uVar7 < 0x120) || (pcVar17 = (code *)UINT_4001091c, pcVar17 == (code *)0x0))
    goto LAB_1001efa8;
    pcVar16 = local_206;
    pcVar13 = pcVar22;
    pcVar22 = *(char **)(param_1 + 0xb10);
    width = *(char **)(param_1 + 0xb14);
    height = *(char **)(param_1 + 0xb18);
    stride = (char *)*puVar21;
  }
  uVar7 = (*pcVar17)((int)pcVar16,pcVar13,pcVar22,(uint)width,(uint)height,(uint)stride,
                     (uint)in_stack_fffffdf4);
  if (uVar7 != 0) {
    iVar6 = 0;
    pcVar22 = (char *)(param_1 + 0x261);
    builtin_strncpy(pcVar22,"Expo",4);
    *(undefined2 *)(param_1 + 0x269) = 0x2f20;
    *(undefined1 *)(param_1 + 0x26b) = 0;
    *(undefined4 *)(param_1 + 0x265) = 0x64657472;
    uVar5 = strlen(pcVar22);
    if (uVar5 >> 0xb == 0) {
      if ((uVar5 != 0x7ff) && (local_206[0] != '\0')) {
        pcVar16 = local_206;
        uVar10 = uVar5;
        do {
          pcVar16 = pcVar16 + 1;
          uVar5 = uVar10 + 1;
          pcVar22[uVar10] = local_206[0];
          if (0x7fd < uVar10) break;
          local_206[0] = *pcVar16;
          uVar10 = uVar5;
        } while (local_206[0] != '\0');
      }
      pcVar22[uVar5] = '\0';
    }
    iVar18 = 0x14;
    iVar20 = *(int *)(param_1 + 0x25c);
    iVar9 = DAT_1002430c;
    do {
      if (*(char *)(iVar9 + iVar6) == '\x01') {
        iVar11 = iVar9 + iVar6;
        bVar23 = *(int *)(iVar11 + 0x10) == 0;
        if (bVar23) {
          iVar11 = *(int *)(iVar11 + 0x25c);
        }
        if (bVar23 && iVar11 == iVar20) {
          recovered_1000eef4(iVar9 + iVar6);
          iVar9 = DAT_1002430c;
        }
      }
      iVar6 = iVar6 + 0xd9c;
      iVar18 = iVar18 + -1;
    } while (iVar18 != 0);
    return;
  }
LAB_1001efa8:
  *(undefined2 *)(param_1 + 0x26d) = 100;
  *(undefined4 *)(param_1 + 0x269) = 0x656c6961;
  *(undefined4 *)(param_1 + 0x265) = 0x66207472;
  *(undefined4 *)(param_1 + 0x261) = 0x6f707845;
  return;
}

#undef DAT_1001efe0
#undef DAT_1001efe8
#undef DAT_10023774
#undef DAT_1002405c
#undef DAT_10024080
#undef DAT_1002430c
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef Ram40010800
#undef Ram40010804
#undef Ram40010808
#undef UINT_4001091c
#undef UINT_40010920
#undef local_206
#undef local_115
#undef local_111
#undef height
#undef stride
#undef in_stack_fffffdf4

#undef DAT_10023774
#define DAT_10023774 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x16cU)))
#undef DAT_10027228
#define DAT_10027228 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3c20U)))
#undef DAT_10027229
#define DAT_10027229 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3c21U)))
#undef DAT_1002722a
#define DAT_1002722a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3c22U)))
#undef DAT_1002722b
#define DAT_1002722b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3c23U)))
#undef DAT_1002731c
#define DAT_1002731c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3d14U)))
#undef DAT_1002731d
#define DAT_1002731d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3d15U)))
#undef DAT_10027410
#define DAT_10027410 (*(uint *)(((uintptr_t)pf_module_state + 0x3e08U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001f110
 */

void recovered_1001f110(int param_1,uint param_2,undefined1 param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  uint uVar2;
  char *pcVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;

  if (param_1 == 0) {
    return;
  }
  if ((int)param_2 < 0) {
    return;
  }
  if (*(uint *)(param_1 + 0xaf0) <= param_2) {
    return;
  }
  iVar5 = *(int *)(param_1 + 0xaec);
  pcVar6 = (char *)(iVar5 + param_2 * 0x1f8);
  DAT_10027228 = 1;
  uVar2 = 0;
  DAT_1002722a = 0;
  if ((iVar5 != 0) && (DAT_1002722a = 1, *(int *)(pcVar6 + 0x1ec) != 2)) {
    DAT_1002722a = (undefined1)(((byte)pcVar6[0x1e8] & 3) >> 1);
  }
  cVar1 = pcVar6[0xf1];
  DAT_10027229 = param_3;
  if (cVar1 != '\0') {
    uVar4 = 0;
    do {
      (&DAT_1002722b)[uVar4] = cVar1;
      uVar2 = uVar4 + 1;
      if (0xef < uVar2) break;
      cVar1 = pcVar6[uVar4 + 0xf2];
      uVar4 = uVar2;
    } while (cVar1 != '\0');
  }
  (&DAT_1002722b)[uVar2] = 0;
  cVar1 = *pcVar6;
  pcVar3 = &DAT_10023774;
  if (iVar5 != 0) {
    pcVar3 = pcVar6;
  }
  uVar2 = 0;
  if (cVar1 == '\0') {
    DAT_1002731c = 0;
  }
  else {
    do {
      uVar4 = uVar2;
      (&DAT_1002731c)[uVar4] = cVar1;
      if (0xef < uVar4 + 1) break;
      cVar1 = pcVar3[uVar4 + 1];
      uVar2 = uVar4 + 1;
    } while (cVar1 != '\0');
    (&DAT_1002731d)[uVar4] = 0;
    if (iVar5 == 0) {
      DAT_10027410 = *(undefined4 *)(param_1 + 0x25c);
      return;
    }
  }
  DAT_10027410 = *(uint *)(pcVar6 + 0x1f0);
  if (0x7fffffff < DAT_10027410) {
    DAT_10027410 = *(uint *)(param_1 + 0x25c);
  }
  return;
}

#undef DAT_10023774
#undef DAT_10027228
#undef DAT_10027229
#undef DAT_1002722a
#undef DAT_1002722b
#undef DAT_1002731c
#undef DAT_1002731d
#undef DAT_10027410

#undef DAT_10027228
#define DAT_10027228 (*(char *)(((uintptr_t)pf_module_state + 0x3c20U)))
#undef DAT_10027229
#define DAT_10027229 (*(char *)(((uintptr_t)pf_module_state + 0x3c21U)))
#undef DAT_1002722a
#define DAT_1002722a (*(char *)(((uintptr_t)pf_module_state + 0x3c22U)))
#undef DAT_1002722b
#define DAT_1002722b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3c23U)))
#undef DAT_1002731c
#define DAT_1002731c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3d14U)))
#undef DAT_10027410
#define DAT_10027410 (*(int *)(((uintptr_t)pf_module_state + 0x3e08U)))
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
#undef UINT_40010838
#define UINT_40010838 (*(uint *)(0x40010838U))
#undef UINT_40010888
#define UINT_40010888 (*(uint *)(0x40010888U))
#undef UINT_4001088c
#define UINT_4001088c (*(uint *)(0x4001088cU))
#undef UINT_400108c8
#define UINT_400108c8 (*(uint *)(0x400108c8U))
#undef UINT_400108d0
#define UINT_400108d0 (*(uint *)(0x400108d0U))
#undef UINT_400108d8
#define UINT_400108d8 (*(uint *)(0x400108d8U))
#undef UINT_400108dc
#define UINT_400108dc (*(uint *)(0x400108dcU))
#define local_11c (*(void * *)(frame + 20))
#define uStack_118 (*(uint *)(frame + 24))
#define acStack_10d (*(char (*)[241])(frame + 35))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001f248
 */

void recovered_1001f248(int param_1)

{
  unsigned char frame[336] __attribute__((aligned(16))) = {0};

  int iVar1;
  code *pcVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;

  if (param_1 == 0) {
    return;
  }
  if (DAT_10027228 != '\x01') {
    return;
  }
  recovered_10013e2c((byte *)(param_1 + 0x78),&DAT_1002731c,acStack_10d);
  if (DAT_10027229 == '\x01') {
    if (DAT_10027410 == *(int *)(param_1 + 0x25c)) {
      iVar1 = Ram40010800;
      if ((iVar1 == 0x50414d57) && (iVar1 = Ram40010804, iVar1 != 0)) {
        uVar3 = Ram40010808;
        bVar5 = 0xb < uVar3;
        bVar4 = uVar3 == 0xc;
        if (bVar5) {
          uVar3 = Ram40010808;
          bVar4 = uVar3 == 0xdb;
        }
        if ((bVar5 && 0xda < uVar3) && !bVar4) {
          pcVar2 = (code *)UINT_400108d8;
          if (pcVar2 != (code *)0x0) {
            (*pcVar2)(DAT_10027410,&DAT_1002722b,acStack_10d);
          }
          goto LAB_1001f470;
        }
      }
      iVar1 = Ram40010800;
      if ((iVar1 == 0x50414d57) && (iVar1 = Ram40010804, iVar1 != 0)) {
        uVar3 = Ram40010808;
        bVar4 = 0xb < uVar3;
        if (bVar4) {
          uVar3 = Ram40010808;
        }
        if ((bVar4 && 0x8b < uVar3) && (pcVar2 = (code *)UINT_40010888, pcVar2 != (code *)0x0)) {
          (*pcVar2)(&DAT_1002722b,acStack_10d);
        }
      }
    }
LAB_1001f470:
    DAT_10027228 = '\0';
    goto LAB_1001f478;
  }
  if (DAT_1002722a == '\x01') {
    iVar1 = Ram40010800;
    if ((iVar1 == 0x50414d57) && (iVar1 = Ram40010804, iVar1 != 0)) {
      uVar3 = Ram40010808;
      bVar5 = 0xb < uVar3;
      bVar4 = uVar3 == 0xc;
      if (bVar5) {
        uVar3 = Ram40010808;
        bVar4 = uVar3 == 0xdf;
      }
      if ((bVar5 && 0xde < uVar3) && !bVar4) {
        pcVar2 = (code *)UINT_400108dc;
        if (pcVar2 != (code *)0x0) {
          (*pcVar2)(*(int *)(param_1 + 0x25c),acStack_10d);
        }
        goto LAB_1001f478;
      }
    }
    iVar1 = Ram40010800;
    if ((iVar1 == 0x50414d57) && (iVar1 = Ram40010804, iVar1 != 0)) {
      uVar3 = Ram40010808;
      bVar4 = 0xb < uVar3;
      if (bVar4) {
        uVar3 = Ram40010808;
      }
      if ((bVar4 && 0x8f < uVar3) && (pcVar2 = (code *)UINT_4001088c, pcVar2 != (code *)0x0)) {
        (*pcVar2)(acStack_10d);
      }
    }
    goto LAB_1001f478;
  }
  memset(&local_11c,0,0xc);
  iVar1 = Ram40010800;
  if ((iVar1 == 0x50414d57) && (iVar1 = Ram40010804, iVar1 != 0)) {
    uVar3 = Ram40010808;
    bVar5 = 0xb < uVar3;
    bVar4 = uVar3 == 0xc;
    if (bVar5) {
      uVar3 = Ram40010808;
      bVar4 = uVar3 == 0xcb;
    }
    if ((!bVar5 || uVar3 < 0xcb) || bVar4) goto LAB_1001f404;
    pcVar2 = (code *)UINT_400108c8;
    if (pcVar2 == (code *)0x0) goto LAB_1001f478;
    uVar3 = (*pcVar2)(DAT_10027410,&DAT_1002722b,&local_11c);
  }
  else {
LAB_1001f404:
    iVar1 = Ram40010800;
    if ((iVar1 != 0x50414d57) || (iVar1 = Ram40010804, iVar1 == 0)) goto LAB_1001f478;
    uVar3 = Ram40010808;
    bVar4 = 0xb < uVar3;
    if (bVar4) {
      uVar3 = Ram40010808;
    }
    if ((!bVar4 || uVar3 < 0x38) || (pcVar2 = (code *)UINT_40010834, pcVar2 == (code *)0x0))
    goto LAB_1001f478;
    uVar3 = (*pcVar2)(&DAT_1002722b,&local_11c);
  }
  if (uVar3 != 0) {
    iVar1 = Ram40010800;
    if ((iVar1 == 0x50414d57) && (iVar1 = Ram40010804, iVar1 != 0)) {
      uVar3 = Ram40010808;
      bVar5 = 0xb < uVar3;
      bVar4 = uVar3 == 0xc;
      if (bVar5) {
        uVar3 = Ram40010808;
        bVar4 = uVar3 == 0xd3;
      }
      if ((bVar5 && 0xd2 < uVar3) && !bVar4) {
        pcVar2 = (code *)UINT_400108d0;
        if (pcVar2 != (code *)0x0) {
          (*pcVar2)(*(int *)(param_1 + 0x25c),acStack_10d,local_11c,uStack_118);
        }
        goto LAB_1001f478;
      }
    }
    iVar1 = Ram40010800;
    if ((iVar1 == 0x50414d57) && (iVar1 = Ram40010804, iVar1 != 0)) {
      uVar3 = Ram40010808;
      bVar4 = 0xb < uVar3;
      if (bVar4) {
        uVar3 = Ram40010808;
      }
      if ((bVar4 && 0x3b < uVar3) && (pcVar2 = (code *)UINT_40010838, pcVar2 != (code *)0x0)) {
        (*pcVar2)(acStack_10d,local_11c,uStack_118);
      }
    }
  }
LAB_1001f478:
  recovered_1000eef4(param_1);
  return;
}

#undef DAT_10027228
#undef DAT_10027229
#undef DAT_1002722a
#undef DAT_1002722b
#undef DAT_1002731c
#undef DAT_10027410
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef Ram40010800
#undef Ram40010804
#undef Ram40010808
#undef UINT_40010834
#undef UINT_40010838
#undef UINT_40010888
#undef UINT_4001088c
#undef UINT_400108c8
#undef UINT_400108d0
#undef UINT_400108d8
#undef UINT_400108dc
#undef local_11c
#undef uStack_118
#undef acStack_10d

#undef DAT_1001f700
#define DAT_1001f700 (*(uint64_t *)(0x1001f700U))
#undef DAT_1001f708
#define DAT_1001f708 (*(uint64_t *)(0x1001f708U))
#undef DAT_10023774
#define DAT_10023774 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x16cU)))
#undef DAT_10023dd6
#define DAT_10023dd6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7ceU)))
#undef DAT_1002430c
#define DAT_1002430c (*(int *)(((uintptr_t)pf_module_state + 0xd04U)))
#define iStack_30 (*(int *)(frame + 32))
#define uStack_2c (*(undefined4 *)(frame + 36))
#define uStack_20 (*(undefined8 *)(frame + 48))
#define local_34 (*(undefined4 *)(frame + 28))
#define local_28 (*(undefined8 *)(frame + 40))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001f580
 */

void recovered_1001f580(undefined4 param_1,int param_2,undefined4 param_3,char *param_4,
                       char *param_5)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  char cVar8;

  iStack_30 = recovered_10005734(2,&DAT_10023dd6,0xd6d6d6,'\0');
  local_34 = 4;
  local_28 = (0x9c00000124U);
  uStack_20 = (0x920000017cU);
  uStack_2c = param_3;
  iVar1 = recovered_1000eac0(&local_34);
  iVar2 = DAT_1002430c;
  if (-1 < iVar1) {
    iVar3 = iVar1 * 0xd9c + DAT_1002430c;
    *(int *)(iVar3 + 0xae8) = param_2;
    *(undefined4 *)(iVar3 + 0xae4) = param_1;
    if ((-1 < param_2) && (pcVar4 = (char *)(iVar2 + param_2 * 0xd9c), *pcVar4 == '\x01')) {
      *(undefined4 *)(iVar1 * 0xd9c + iVar2 + 0x25c) = *(undefined4 *)(pcVar4 + 0x25c);
    }
    uVar7 = 0;
    if (param_4 == (char *)0x0) {
      param_4 = &DAT_10023774;
    }
    uVar6 = 0;
    cVar8 = *param_4;
    if (cVar8 != '\0') {
      uVar5 = 0;
      do {
        uVar6 = uVar5 + 1;
        *(char *)(iVar3 + 0x261 + uVar5) = cVar8;
        if (0x7fe < uVar6) break;
        cVar8 = param_4[uVar5 + 1];
        uVar5 = uVar6;
      } while (cVar8 != '\0');
    }
    *(undefined1 *)(iVar3 + 0x261 + uVar6) = 0;
    pcVar4 = &DAT_10023774;
    if (param_5 != (char *)0x0) {
      pcVar4 = param_5;
    }
    cVar8 = *pcVar4;
    iVar2 = iVar1 * 0xd9c + iVar2 + 0xa61;
    if (cVar8 != '\0') {
      uVar6 = 0;
      do {
        uVar7 = uVar6 + 1;
        *(char *)(iVar2 + uVar6) = cVar8;
        if (0x7e < uVar7) break;
        cVar8 = pcVar4[uVar6 + 1];
        uVar6 = uVar7;
      } while (cVar8 != '\0');
    }
    *(undefined1 *)(iVar2 + uVar7) = 0;
  }
  return;
}

#undef DAT_1001f700
#undef DAT_1001f708
#undef DAT_10023774
#undef DAT_10023dd6
#undef DAT_1002430c
#undef iStack_30
#undef uStack_2c
#undef uStack_20
#undef local_34
#undef local_28

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
#undef UINT_4001083c
#define UINT_4001083c (*(uint *)(0x4001083cU))
#undef UINT_400108d4
#define UINT_400108d4 (*(uint *)(0x400108d4U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001f710
 */

void recovered_1001f710(int param_1,char *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  code *UNRECOVERED_JUMPTABLE_00;
  bool bVar3;
  bool bVar4;

  iVar2 = Ram40010800;
  if ((iVar2 == 0x50414d57) && (iVar2 = Ram40010804, iVar2 != 0)) {
    uVar1 = Ram40010808;
    bVar4 = 0xb < uVar1;
    bVar3 = uVar1 == 0xc;
    if (bVar4) {
      uVar1 = Ram40010808;
      bVar3 = uVar1 == 0xd7;
    }
    if ((bVar4 && 0xd6 < uVar1) && !bVar3) {
      UNRECOVERED_JUMPTABLE_00 = (code *)UINT_400108d4;
      if (UNRECOVERED_JUMPTABLE_00 == (code *)0x0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x1001f788. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_00)(param_1,param_2);
      return;
    }
  }
  iVar2 = Ram40010800;
  if ((iVar2 == 0x50414d57) && (iVar2 = Ram40010804, iVar2 != 0)) {
    uVar1 = Ram40010808;
    bVar3 = 0xb < uVar1;
    if (bVar3) {
      uVar1 = Ram40010808;
    }
    if (bVar3 && 0x3f < uVar1) {
      UNRECOVERED_JUMPTABLE_00 = (code *)UINT_4001083c;
      if (UNRECOVERED_JUMPTABLE_00 == (code *)0x0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x1001f79c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_00)(param_2);
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
#undef UINT_4001083c
#undef UINT_400108d4

#undef DAT_10023774
#define DAT_10023774 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x16cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001f7a0
 */

void recovered_1001f7a0(char *param_1,uint param_2,char *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  int iVar2;
  char *pcVar3;
  ulong uVar4;
  char cVar5;

  if (0x7fffffff < param_2) {
    if ((param_1 != (char *)0x0) && (uVar1 = strlen(param_1), uVar1 >> 0xb == 0)) {
      iVar2 = 0x7ff;
      if (uVar1 != 0x7ff) {
        param_1[uVar1] = '-';
        iVar2 = uVar1 + 1;
      }
      param_1[iVar2] = '\0';
    }
    param_2 = -param_2;
  }
  recovered_10018f20(param_1,0x800,param_2);
  if (param_1 != (char *)0x0) {
    uVar1 = strlen(param_1);
    if (uVar1 >> 0xb == 0) {
      iVar2 = 0x7ff;
      if (uVar1 != 0x7ff) {
        param_1[uVar1] = '|';
        iVar2 = uVar1 + 1;
      }
      param_1[iVar2] = '\0';
    }
    pcVar3 = &DAT_10023774;
    if (param_3 != (char *)0x0) {
      pcVar3 = param_3;
    }
    uVar1 = strlen(param_1);
    if (uVar1 >> 0xb == 0) {
      if ((uVar1 == 0x7ff) || (cVar5 = *pcVar3, cVar5 == '\0')) {
        uVar4 = uVar1;
      }
      else {
        do {
          pcVar3 = pcVar3 + 1;
          uVar4 = uVar1 + 1;
          param_1[uVar1] = cVar5;
          if (0x7fd < uVar1) break;
          cVar5 = *pcVar3;
          uVar1 = uVar4;
        } while (cVar5 != '\0');
      }
      param_1[uVar4] = '\0';
    }
    uVar1 = strlen(param_1);
    if (uVar1 >> 0xb == 0) {
      iVar2 = 0x7ff;
      if (uVar1 != 0x7ff) {
        param_1[uVar1] = '\n';
        iVar2 = uVar1 + 1;
      }
      param_1[iVar2] = '\0';
    }
  }
  return;
}

#undef DAT_10023774

#undef DAT_10023db5
#define DAT_10023db5 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7adU)))
#undef DAT_100243a4
#define DAT_100243a4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xd9cU)))
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
#undef UINT_40010838
#define UINT_40010838 (*(uint *)(0x40010838U))
#undef UINT_400108c8
#define UINT_400108c8 (*(uint *)(0x400108c8U))
#undef UINT_400108d0
#define UINT_400108d0 (*(uint *)(0x400108d0U))
#undef str_100237bc
#define str_100237bc (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1b4U)))
#undef str_10023862
#define str_10023862 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x25aU)))
#define local_2034 (*(undefined4 *)(frame + 28))
#define local_2030 (*(char (*)[4095])(frame + 32))
#define local_30 (*(void * *)(frame + 8224))
#define local_2c (*(uint *)(frame + 8228))
#define abStack_1031 (*(byte (*)[4097])(frame + 4127))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001f8dc
 */

bool recovered_1001f8dc(uint param_1)

{
  unsigned char frame[8304] __attribute__((aligned(16))) = {0};

  char cVar1;
  code *pcVar2;
  ulong uVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  uint extraout_r2 = 0;
  uint extraout_r2_00 = 0;
  uint uVar9;
  uint uVar10;
  char *pcVar11;
  uint uVar12;
  byte *src;
  bool bVar13;
  bool bVar14;

  if (0x7fffffff < param_1) {
    param_1 = recovered_10005d20();
  }
  if ((int)param_1 < 0) {
    return false;
  }
  if (DAT_100243a4 == '\0') {
    return false;
  }
  uVar10 = 0;
  memset(&local_30,0,0xc);
  local_2030[0] = '\0';
  abStack_1031[1] = 0;
  iVar4 = Ram40010800;
  uVar8 = 0x50414d57;
  if ((iVar4 == 0x50414d57) && (iVar4 = Ram40010804, iVar4 != 0)) {
    uVar9 = Ram40010808;
    bVar14 = 0xb < uVar9;
    bVar13 = uVar9 == 0xc;
    if (bVar14) {
      uVar9 = Ram40010808;
      bVar13 = uVar9 == 0xcb;
    }
    if ((!bVar14 || uVar9 < 0xcb) || bVar13) goto LAB_1001f97c;
    pcVar2 = (code *)UINT_400108c8;
    if (pcVar2 != (code *)0x0) {
      uVar10 = (*pcVar2)(param_1,str_100237bc,&local_30);
      uVar8 = extraout_r2_00;
    }
  }
  else {
LAB_1001f97c:
    iVar4 = Ram40010800;
    if ((iVar4 == 0x50414d57) && (iVar4 = Ram40010804, iVar4 != 0)) {
      uVar9 = Ram40010808;
      bVar13 = 0xb < uVar9;
      if (bVar13) {
        uVar9 = Ram40010808;
      }
      if (bVar13 && 0x37 < uVar9) {
        pcVar2 = (code *)UINT_40010834;
        uVar8 = 0;
        if (pcVar2 != (code *)0x0) {
          uVar10 = (*pcVar2)(str_100237bc,&local_30);
          uVar8 = extraout_r2;
        }
      }
    }
  }
  if (uVar10 != 0) {
    if (local_30 != (void *)0x0) {
      uVar8 = local_2c;
    }
    if (local_30 != (void *)0x0 && uVar8 != 0) {
      if (uVar8 >> 0xc != 0) {
        return false;
      }
      memcpy(abStack_1031 + 1,local_30,uVar8);
      local_2034 = local_2c;
      (abStack_1031 + 1)[local_2c] = 0;
      if (local_2c != 0) {
        uVar8 = 0;
        bVar13 = false;
LAB_1001fb54:
        uVar9 = uVar8 + 1;
        uVar10 = uVar9;
        if (uVar9 < local_2034) {
          uVar10 = local_2034;
        }
        iVar4 = 1;
        uVar12 = uVar8;
        if (abStack_1031[uVar8 + 1] != 10) {
          do {
            uVar7 = uVar9;
            if (uVar10 == uVar7) goto LAB_1001fbb4;
            uVar9 = uVar7 + 1;
          } while (abStack_1031[uVar7 + 1] != 10);
          uVar10 = uVar7;
LAB_1001fbb4:
          iVar4 = 0;
          uVar12 = uVar10;
          if (uVar7 < local_2034) {
            iVar4 = 1;
          }
        }
        uVar10 = uVar12 - uVar8;
        src = abStack_1031 + uVar8 + 1;
        uVar3 = strlen(str_10023862);
        if (uVar3 != 0) {
          uVar9 = 0;
          if (uVar10 != 0) {
            do {
              if ((0x17 < src[uVar9] - 9) || ((1 << (src[uVar9] - 9 & 0xff) & 0x800011U) == 0))
              goto LAB_1001fc2c;
              uVar9 = uVar9 + 1;
            } while (uVar10 != uVar9);
            uVar9 = uVar10;
          }
LAB_1001fc2c:
          if ((uVar9 + 1 < uVar10) && (src[uVar9] == 0x40)) {
            if ((uVar9 < uVar10) && (src[uVar9 + 1] != 0x40)) goto LAB_1001fc64;
          }
          else if (uVar9 < uVar10) {
LAB_1001fc64:
            uVar7 = uVar9;
            do {
              if (src[uVar7] == 0x3d) {
                if (uVar7 <= uVar9) goto LAB_1001fcb8;
                goto LAB_1001fc90;
              }
              uVar7 = uVar7 + 1;
            } while (uVar7 < uVar10);
          }
        }
        goto LAB_1001fce0;
      }
    }
  }
LAB_1001fa10:
  uVar3 = strlen(local_2030);
  cVar1 = '\0';
  if (uVar3 != 0) {
    cVar1 = local_2030[uVar3 - 1];
  }
  if (uVar3 != 0 && cVar1 != '\n') {
    uVar3 = strlen(&DAT_10023db5);
    uVar6 = strlen(local_2030);
    if (uVar6 >> 0xc != 0) {
      return false;
    }
    if (0x1000 - uVar6 <= uVar3) {
      return false;
    }
    pcVar11 = local_2030 + uVar6;
    memcpy(pcVar11,&DAT_10023db5,uVar3);
    pcVar11[uVar3] = '\0';
  }
  iVar4 = recovered_1001feb8(local_2030,&DAT_100243a4);
  if (iVar4 == 0) {
    return false;
  }
LAB_1001fa54:
  uVar3 = strlen(local_2030);
  iVar4 = Ram40010800;
  if ((iVar4 == 0x50414d57) && (iVar4 = Ram40010804, iVar4 != 0)) {
    uVar8 = Ram40010808;
    bVar14 = 0xb < uVar8;
    bVar13 = uVar8 == 0xc;
    if (bVar14) {
      uVar8 = Ram40010808;
      bVar13 = uVar8 == 0xd3;
    }
    if (!((!bVar14 || uVar8 < 0xd3) || bVar13)) {
      pcVar2 = (code *)UINT_400108d0;
      if (pcVar2 == (code *)0x0) {
        uVar8 = 0;
      }
      else {
        uVar8 = (*pcVar2)(param_1,str_100237bc,local_2030,uVar3);
      }
      goto LAB_1001fea0;
    }
  }
  iVar4 = Ram40010800;
  uVar8 = 0;
  if ((iVar4 == 0x50414d57) && (iVar4 = Ram40010804, iVar4 != 0)) {
    uVar10 = Ram40010808;
    bVar13 = 0xb < uVar10;
    if (bVar13) {
      uVar10 = Ram40010808;
    }
    if ((!(!bVar13 || uVar10 < 0x3c)) && (pcVar2 = (code *)UINT_40010838, pcVar2 != (code *)0x0)) {
      uVar8 = (*pcVar2)(str_100237bc,local_2030,uVar3);
    }
  }
LAB_1001fea0:
  return uVar8 != 0;
  while (uVar7 = uVar7 - 1, uVar9 < uVar7) {
LAB_1001fc90:
    if ((0x17 < abStack_1031[uVar7 + uVar8] - 9) ||
       ((1 << (abStack_1031[uVar7 + uVar8] - 9 & 0xff) & 0x800011U) == 0)) goto LAB_1001fcb8;
  }
  uVar7 = uVar9;
LAB_1001fcb8:
  if ((uVar7 - uVar9 == uVar3) &&
     (iVar5 = strncmp((char *)(src + uVar9),str_10023862,uVar3), iVar5 == 0)) {
    if (bVar13) {
      bVar13 = true;
    }
    else {
      iVar5 = recovered_1001feb8(local_2030,&DAT_100243a4);
      bVar13 = true;
      if (iVar5 == 0) {
        return false;
      }
    }
  }
  else {
LAB_1001fce0:
    uVar3 = strlen(local_2030);
    if (uVar3 >> 0xc != 0) {
      return false;
    }
    if (0x1000 - uVar3 <= uVar10) {
      return false;
    }
    pcVar11 = local_2030 + uVar3;
    memcpy(pcVar11,src,uVar10);
    pcVar11[uVar10] = '\0';
    if (iVar4 != 0) {
      uVar3 = strlen(&DAT_10023db5);
      uVar6 = strlen(local_2030);
      if (uVar6 >> 0xc != 0) {
        return false;
      }
      if (0x1000 - uVar6 <= uVar3) {
        return false;
      }
      pcVar11 = local_2030 + uVar6;
      memcpy(pcVar11,&DAT_10023db5,uVar3);
      pcVar11[uVar3] = '\0';
    }
  }
  uVar8 = uVar12 + iVar4;
  if (local_2034 <= uVar8) goto LAB_1001fe5c;
  goto LAB_1001fb54;
LAB_1001fe5c:
  if (!bVar13) goto LAB_1001fa10;
  goto LAB_1001fa54;
}

#undef DAT_10023db5
#undef DAT_100243a4
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef Ram40010800
#undef Ram40010804
#undef Ram40010808
#undef UINT_40010834
#undef UINT_40010838
#undef UINT_400108c8
#undef UINT_400108d0
#undef str_100237bc
#undef str_10023862
#undef local_2034
#undef local_2030
#undef local_30
#undef local_2c
#undef abStack_1031

#undef DAT_10023774
#define DAT_10023774 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x16cU)))
#undef DAT_10023e02
#define DAT_10023e02 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7faU)))
#undef str_10023df3
#define str_10023df3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7ebU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001feb8
 */

undefined4 recovered_1001feb8(char *param_1,char *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  ulong uVar2;
  undefined4 uVar3;

  uVar1 = strlen(str_10023df3);
  uVar3 = 0;
  if (((param_1 != (char *)0x0) && (uVar2 = strlen(param_1), uVar2 >> 0xc == 0)) &&
     (uVar1 < 0x1000 - uVar2)) {
    memcpy(param_1 + uVar2,str_10023df3,uVar1);
    (param_1 + uVar2)[uVar1] = '\0';
    if (param_2 == (char *)0x0) {
      uVar1 = 0;
      param_2 = &DAT_10023774;
    }
    else {
      uVar1 = strlen(param_2);
    }
    uVar2 = strlen(param_1);
    if ((uVar2 >> 0xc == 0) && (uVar1 < 0x1000 - uVar2)) {
      memcpy(param_1 + uVar2,param_2,uVar1);
      (param_1 + uVar2)[uVar1] = '\0';
      uVar1 = strlen(&DAT_10023e02);
      uVar2 = strlen(param_1);
      if ((uVar2 >> 0xc == 0) && (uVar1 < 0x1000 - uVar2)) {
        memcpy(param_1 + uVar2,&DAT_10023e02,uVar1);
        uVar3 = 1;
        (param_1 + uVar2)[uVar1] = '\0';
      }
    }
  }
  return uVar3;
}

#undef DAT_10023774
#undef DAT_10023e02
#undef str_10023df3

#undef DAT_10023774
#define DAT_10023774 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x16cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001ffe8
 */

bool recovered_1001ffe8(byte *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte *pbVar1;
  byte *pbVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  byte *pbVar6;
  byte *pbVar7;

  pbVar6 = (byte *)0x0;
  if (param_1 == (byte *)0x0) {
    pbVar2 = (byte *)0x0;
    pbVar7 = &DAT_10023774;
  }
  else {
    pbVar2 = (byte *)0x0;
    pbVar7 = param_1;
    if (*param_1 != 0) {
      pbVar1 = param_1;
      bVar4 = *param_1;
      do {
        bVar5 = pbVar1[1];
        if (bVar4 == 0x2f) {
          pbVar2 = pbVar1;
        }
        pbVar1 = pbVar1 + 1;
        bVar4 = bVar5;
      } while (bVar5 != 0);
    }
  }
  if (pbVar2 != (byte *)0x0) {
    pbVar7 = pbVar2 + 1;
  }
  if (*pbVar7 != 0) {
    pbVar6 = (byte *)0x0;
    bVar4 = *pbVar7;
    do {
      bVar5 = pbVar7[1];
      if (bVar4 == 0x2e) {
        pbVar6 = pbVar7;
      }
      pbVar7 = pbVar7 + 1;
      bVar4 = bVar5;
    } while (bVar5 != 0);
  }
  if (pbVar6 == (byte *)0x0) {
    pbVar6 = &DAT_10023774;
  }
  uVar3 = (uint)*pbVar6;
  if (uVar3 == 0) {
    bVar5 = 0x2e;
    bVar4 = 0;
LAB_1002012c:
    if (bVar4 == bVar5) {
      return true;
    }
  }
  else {
    if (uVar3 - 0x41 < 0x1a) {
      uVar3 = uVar3 | 0x20;
    }
    if (uVar3 == 0x2e) {
      uVar3 = (uint)pbVar6[1];
      bVar5 = 0x74;
      bVar4 = 0;
      if (uVar3 != 0) {
        if (uVar3 - 0x41 < 0x1a) {
          uVar3 = uVar3 | 0x20;
        }
        if (uVar3 != 0x74) goto LAB_10020138;
        uVar3 = (uint)pbVar6[2];
        bVar4 = 0;
        if (uVar3 != 0) {
          if (uVar3 - 0x41 < 0x1a) {
            uVar3 = uVar3 | 0x20;
          }
          if (uVar3 != 0x74) goto LAB_10020138;
          uVar3 = (uint)pbVar6[3];
          if (uVar3 == 0) {
            bVar5 = 0x66;
            bVar4 = 0;
          }
          else {
            if (uVar3 - 0x41 < 0x1a) {
              uVar3 = uVar3 | 0x20;
            }
            if (uVar3 != 0x66) goto LAB_10020138;
            bVar4 = pbVar6[4];
            bVar5 = 0;
          }
        }
      }
      goto LAB_1002012c;
    }
  }
LAB_10020138:
  pbVar2 = (byte *)0x0;
  pbVar6 = (byte *)0x0;
  pbVar7 = &DAT_10023774;
  if (param_1 != (byte *)0x0) {
    pbVar7 = param_1;
    if (*param_1 != 0) {
      pbVar1 = param_1;
      bVar4 = *param_1;
      do {
        bVar5 = pbVar1[1];
        if (bVar4 == 0x2f) {
          pbVar6 = pbVar1;
        }
        pbVar1 = pbVar1 + 1;
        bVar4 = bVar5;
      } while (bVar5 != 0);
    }
  }
  if (pbVar6 != (byte *)0x0) {
    pbVar7 = pbVar6 + 1;
  }
  if (*pbVar7 != 0) {
    pbVar2 = (byte *)0x0;
    bVar4 = *pbVar7;
    do {
      bVar5 = pbVar7[1];
      if (bVar4 == 0x2e) {
        pbVar2 = pbVar7;
      }
      pbVar7 = pbVar7 + 1;
      bVar4 = bVar5;
    } while (bVar5 != 0);
  }
  if (pbVar2 == (byte *)0x0) {
    pbVar2 = &DAT_10023774;
  }
  uVar3 = (uint)*pbVar2;
  if (uVar3 == 0) {
    bVar5 = 0x2e;
    bVar4 = 0;
LAB_1002027c:
    if (bVar4 == bVar5) {
      return true;
    }
  }
  else {
    if (uVar3 - 0x41 < 0x1a) {
      uVar3 = uVar3 | 0x20;
    }
    if (uVar3 == 0x2e) {
      uVar3 = (uint)pbVar2[1];
      if (uVar3 == 0) {
        bVar5 = 0x6f;
        bVar4 = 0;
      }
      else {
        if (uVar3 - 0x41 < 0x1a) {
          uVar3 = uVar3 | 0x20;
        }
        if (uVar3 != 0x6f) goto LAB_10020288;
        uVar3 = (uint)pbVar2[2];
        if (uVar3 == 0) {
          bVar5 = 0x74;
          bVar4 = 0;
        }
        else {
          if (uVar3 - 0x41 < 0x1a) {
            uVar3 = uVar3 | 0x20;
          }
          if (uVar3 != 0x74) goto LAB_10020288;
          uVar3 = (uint)pbVar2[3];
          if (uVar3 == 0) {
            bVar5 = 0x66;
            bVar4 = 0;
          }
          else {
            if (uVar3 - 0x41 < 0x1a) {
              uVar3 = uVar3 | 0x20;
            }
            if (uVar3 != 0x66) goto LAB_10020288;
            bVar4 = pbVar2[4];
            bVar5 = 0;
          }
        }
      }
      goto LAB_1002027c;
    }
  }
LAB_10020288:
  pbVar7 = (byte *)0x0;
  pbVar6 = (byte *)0x0;
  pbVar2 = &DAT_10023774;
  if (param_1 != (byte *)0x0) {
    pbVar2 = param_1;
    if (*param_1 != 0) {
      pbVar1 = param_1;
      bVar4 = *param_1;
      do {
        bVar5 = pbVar1[1];
        if (bVar4 == 0x2f) {
          pbVar6 = pbVar1;
        }
        pbVar1 = pbVar1 + 1;
        bVar4 = bVar5;
      } while (bVar5 != 0);
    }
  }
  if (pbVar6 != (byte *)0x0) {
    pbVar2 = pbVar6 + 1;
  }
  if (*pbVar2 != 0) {
    pbVar7 = (byte *)0x0;
    bVar4 = *pbVar2;
    do {
      bVar5 = pbVar2[1];
      if (bVar4 == 0x2e) {
        pbVar7 = pbVar2;
      }
      pbVar2 = pbVar2 + 1;
      bVar4 = bVar5;
    } while (bVar5 != 0);
  }
  if (pbVar7 == (byte *)0x0) {
    pbVar7 = &DAT_10023774;
  }
  uVar3 = (uint)*pbVar7;
  if (uVar3 == 0) {
    bVar5 = 0x2e;
    bVar4 = 0;
LAB_1002039c:
    if (bVar4 == bVar5) {
      return true;
    }
  }
  else {
    if (uVar3 - 0x41 < 0x1a) {
      uVar3 = uVar3 | 0x20;
    }
    if (uVar3 == 0x2e) {
      uVar3 = (uint)pbVar7[1];
      if (uVar3 == 0) {
        bVar5 = 0x70;
        bVar4 = 0;
      }
      else {
        if (uVar3 - 0x41 < 0x1a) {
          uVar3 = uVar3 | 0x20;
        }
        if (uVar3 != 0x70) goto LAB_100203a8;
        uVar3 = (uint)pbVar7[2];
        if (uVar3 == 0) {
          bVar5 = 0x73;
          bVar4 = 0;
        }
        else {
          if (uVar3 - 0x41 < 0x1a) {
            uVar3 = uVar3 | 0x20;
          }
          if (uVar3 != 0x73) goto LAB_100203a8;
          bVar4 = pbVar7[3];
          bVar5 = 0;
        }
      }
      goto LAB_1002039c;
    }
  }
LAB_100203a8:
  pbVar7 = (byte *)0x0;
  pbVar6 = (byte *)0x0;
  pbVar2 = &DAT_10023774;
  if (param_1 != (byte *)0x0) {
    pbVar2 = param_1;
    if (*param_1 != 0) {
      pbVar1 = param_1;
      bVar4 = *param_1;
      do {
        bVar5 = pbVar1[1];
        if (bVar4 == 0x2f) {
          pbVar6 = pbVar1;
        }
        pbVar1 = pbVar1 + 1;
        bVar4 = bVar5;
      } while (bVar5 != 0);
    }
  }
  if (pbVar6 != (byte *)0x0) {
    pbVar2 = pbVar6 + 1;
  }
  if (*pbVar2 != 0) {
    pbVar7 = (byte *)0x0;
    bVar4 = *pbVar2;
    do {
      bVar5 = pbVar2[1];
      if (bVar4 == 0x2e) {
        pbVar7 = pbVar2;
      }
      pbVar2 = pbVar2 + 1;
      bVar4 = bVar5;
    } while (bVar5 != 0);
  }
  if (pbVar7 == (byte *)0x0) {
    pbVar7 = &DAT_10023774;
  }
  uVar3 = (uint)*pbVar7;
  if (uVar3 == 0) {
    bVar5 = 0x2e;
    bVar4 = 0;
  }
  else {
    if (uVar3 - 0x41 < 0x1a) {
      uVar3 = uVar3 | 0x20;
    }
    if (uVar3 != 0x2e) goto LAB_100204f0;
    uVar3 = (uint)pbVar7[1];
    if (uVar3 == 0) {
      bVar5 = 0x70;
      bVar4 = 0;
    }
    else {
      if (uVar3 - 0x41 < 0x1a) {
        uVar3 = uVar3 | 0x20;
      }
      if (uVar3 != 0x70) goto LAB_100204f0;
      uVar3 = (uint)pbVar7[2];
      if (uVar3 == 0) {
        bVar5 = 0x66;
        bVar4 = 0;
      }
      else {
        if (uVar3 - 0x41 < 0x1a) {
          uVar3 = uVar3 | 0x20;
        }
        if (uVar3 != 0x66) goto LAB_100204f0;
        uVar3 = (uint)pbVar7[3];
        if (uVar3 == 0) {
          bVar5 = 0x61;
          bVar4 = 0;
        }
        else {
          if (uVar3 - 0x41 < 0x1a) {
            uVar3 = uVar3 | 0x20;
          }
          if (uVar3 != 0x61) goto LAB_100204f0;
          bVar4 = pbVar7[4];
          bVar5 = 0;
        }
      }
    }
  }
  if (bVar4 == bVar5) {
    return true;
  }
LAB_100204f0:
  pbVar7 = (byte *)0x0;
  pbVar2 = (byte *)0x0;
  pbVar6 = &DAT_10023774;
  if (param_1 != (byte *)0x0) {
    if (*param_1 != 0) {
      pbVar6 = param_1;
      bVar4 = *param_1;
      do {
        bVar5 = pbVar6[1];
        if (bVar4 == 0x2f) {
          pbVar2 = pbVar6;
        }
        pbVar6 = pbVar6 + 1;
        bVar4 = bVar5;
      } while (bVar5 != 0);
    }
    pbVar6 = param_1;
  }
  if (pbVar2 != (byte *)0x0) {
    pbVar6 = pbVar2 + 1;
  }
  if (*pbVar6 != 0) {
    pbVar7 = (byte *)0x0;
    bVar4 = *pbVar6;
    do {
      bVar5 = pbVar6[1];
      if (bVar4 == 0x2e) {
        pbVar7 = pbVar6;
      }
      pbVar6 = pbVar6 + 1;
      bVar4 = bVar5;
    } while (bVar5 != 0);
  }
  pbVar6 = &DAT_10023774;
  if (pbVar7 != (byte *)0x0) {
    pbVar6 = pbVar7;
  }
  uVar3 = (uint)*pbVar6;
  if (uVar3 == 0) {
    bVar5 = 0x2e;
    bVar4 = 0;
  }
  else {
    bVar5 = 0;
    if (uVar3 - 0x41 < 0x1a) {
      uVar3 = uVar3 | 0x20;
    }
    if (uVar3 != 0x2e) {
      return false;
    }
    uVar3 = (uint)pbVar6[1];
    if (uVar3 == 0) {
      bVar5 = 0x70;
      bVar4 = 0;
    }
    else {
      if (uVar3 - 0x41 < 0x1a) {
        uVar3 = uVar3 | 0x20;
      }
      if (uVar3 != 0x70) {
        return false;
      }
      uVar3 = (uint)pbVar6[2];
      if (uVar3 == 0) {
        bVar5 = 0x66;
        bVar4 = 0;
      }
      else {
        if (uVar3 - 0x41 < 0x1a) {
          uVar3 = uVar3 | 0x20;
        }
        if (uVar3 != 0x66) {
          return false;
        }
        uVar3 = (uint)pbVar6[3];
        if (uVar3 == 0) {
          bVar5 = 0x62;
          bVar4 = 0;
        }
        else {
          if (uVar3 - 0x41 < 0x1a) {
            uVar3 = uVar3 | 0x20;
          }
          if (uVar3 != 0x62) {
            return false;
          }
          bVar4 = pbVar6[4];
        }
      }
    }
  }
  return bVar4 == bVar5;
}

#undef DAT_10023774

#undef DAT_10023899
#define DAT_10023899 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x291U)))
#undef DAT_100243a4
#define DAT_100243a4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xd9cU)))
#undef DAT_100243a5
#define DAT_100243a5 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xd9dU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1002063c
 */

void recovered_1002063c(char *param_1,int param_2,uint param_3,char param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  int iVar7;
  char cVar8;
  uint uVar9;
  uint *puVar10;
  bool bVar11;

  if (DAT_100243a4 == '\0') {
    pcVar2 = (char *)0x0;
  }
  else {
    pcVar2 = (char *)0x0;
    pcVar5 = &DAT_100243a5;
    cVar8 = DAT_100243a4;
    do {
      cVar1 = *pcVar5;
      if (cVar8 == '/') {
        pcVar2 = pcVar5 + -1;
      }
      pcVar5 = pcVar5 + 1;
      cVar8 = cVar1;
    } while (cVar1 != '\0');
  }
  pcVar5 = &DAT_100243a4;
  if (pcVar2 != (char *)0x0) {
    pcVar5 = pcVar2 + 1;
  }
  if (param_1 == (char *)0x0) {
    return;
  }
  if (param_2 < 1) {
    return;
  }
  puVar10 = (uint *)(param_1 + 0x11c);
  iVar7 = param_2;
  do {
    uVar3 = (uint)(byte)puVar10[-0x47];
    bVar11 = uVar3 == 1;
    if (bVar11) {
      uVar3 = *puVar10;
    }
    if ((bVar11 && uVar3 == param_3) &&
       (iVar4 = strcmp((char *)((int)puVar10 + -0xf3),&DAT_100243a4), iVar4 == 0)) {
      return;
    }
    puVar10 = puVar10 + 0x49;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  if (param_2 < 1) {
    return;
  }
  while (*param_1 != '\0') {
    param_2 = param_2 + -1;
    param_1 = param_1 + 0x124;
    if (param_2 == 0) {
      return;
    }
  }
  uVar9 = 0;
  param_1[0x120] = param_4;
  *param_1 = '\x01';
  uVar3 = 0;
  *(uint *)(param_1 + 0x11c) = param_3;
  if (DAT_100243a4 != '\0') {
    pcVar2 = param_1 + 0x29;
    uVar6 = 0;
    cVar8 = DAT_100243a4;
    do {
      uVar9 = uVar6 + 1;
      *pcVar2 = cVar8;
      if (0xef < uVar9) break;
      cVar8 = (&DAT_100243a5)[uVar6];
      pcVar2 = pcVar2 + 1;
      uVar6 = uVar9;
    } while (cVar8 != '\0');
  }
  param_1[uVar9 + 0x29] = '\0';
  pcVar2 = &DAT_10023899;
  if (*pcVar5 != '\0') {
    pcVar2 = pcVar5;
  }
  cVar8 = *pcVar2;
  if (cVar8 != '\0') {
    uVar9 = 1;
    pcVar5 = param_1;
    do {
      uVar3 = uVar9;
      pcVar5 = pcVar5 + 1;
      *pcVar5 = cVar8;
      if (0x26 < uVar3) break;
      cVar8 = pcVar2[uVar3];
      uVar9 = uVar3 + 1;
    } while (cVar8 != '\0');
  }
  param_1[uVar3 + 1] = '\0';
  return;
}

#undef DAT_10023899
#undef DAT_100243a4
#undef DAT_100243a5

#undef DAT_10024918
#define DAT_10024918 (*(char *)(((uintptr_t)pf_module_state + 0x1310U)))
#undef DAT_10024941
#define DAT_10024941 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1339U)))
#undef DAT_10024a34
#define DAT_10024a34 (*(uint *)(((uintptr_t)pf_module_state + 0x142cU)))
#undef DAT_10024a3c
#define DAT_10024a3c (*(char *)(((uintptr_t)pf_module_state + 0x1434U)))
#undef DAT_10024a65
#define DAT_10024a65 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x145dU)))
#undef DAT_10024b58
#define DAT_10024b58 (*(uint *)(((uintptr_t)pf_module_state + 0x1550U)))
#undef DAT_10024b60
#define DAT_10024b60 (*(char *)(((uintptr_t)pf_module_state + 0x1558U)))
#undef DAT_10024b89
#define DAT_10024b89 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1581U)))
#undef DAT_10024c7c
#define DAT_10024c7c (*(uint *)(((uintptr_t)pf_module_state + 0x1674U)))
#undef DAT_10024c84
#define DAT_10024c84 (*(char *)(((uintptr_t)pf_module_state + 0x167cU)))
#undef DAT_10024cad
#define DAT_10024cad (*(uint8_t *)(((uintptr_t)pf_module_state + 0x16a5U)))
#undef DAT_10024da0
#define DAT_10024da0 (*(uint *)(((uintptr_t)pf_module_state + 0x1798U)))
#undef DAT_10024da8
#define DAT_10024da8 (*(char *)(((uintptr_t)pf_module_state + 0x17a0U)))
#undef DAT_10024dd1
#define DAT_10024dd1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17c9U)))
#undef DAT_10024ec4
#define DAT_10024ec4 (*(uint *)(((uintptr_t)pf_module_state + 0x18bcU)))
#undef DAT_10024ecc
#define DAT_10024ecc (*(char *)(((uintptr_t)pf_module_state + 0x18c4U)))
#undef DAT_10024ef5
#define DAT_10024ef5 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x18edU)))
#undef DAT_10024fe8
#define DAT_10024fe8 (*(uint *)(((uintptr_t)pf_module_state + 0x19e0U)))
#undef DAT_10024ff0
#define DAT_10024ff0 (*(char *)(((uintptr_t)pf_module_state + 0x19e8U)))
#undef DAT_10025019
#define DAT_10025019 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1a11U)))
#undef DAT_1002510c
#define DAT_1002510c (*(uint *)(((uintptr_t)pf_module_state + 0x1b04U)))
#undef DAT_10025114
#define DAT_10025114 (*(char *)(((uintptr_t)pf_module_state + 0x1b0cU)))
#undef DAT_1002513d
#define DAT_1002513d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1b35U)))
#undef DAT_10025230
#define DAT_10025230 (*(uint *)(((uintptr_t)pf_module_state + 0x1c28U)))
#undef DAT_10025238
#define DAT_10025238 (*(char *)(((uintptr_t)pf_module_state + 0x1c30U)))
#undef DAT_10025261
#define DAT_10025261 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1c59U)))
#undef DAT_10025354
#define DAT_10025354 (*(uint *)(((uintptr_t)pf_module_state + 0x1d4cU)))
#undef DAT_1002535c
#define DAT_1002535c (*(char *)(((uintptr_t)pf_module_state + 0x1d54U)))
#undef DAT_10025385
#define DAT_10025385 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1d7dU)))
#undef DAT_10025478
#define DAT_10025478 (*(uint *)(((uintptr_t)pf_module_state + 0x1e70U)))
#undef DAT_10025480
#define DAT_10025480 (*(char *)(((uintptr_t)pf_module_state + 0x1e78U)))
#undef DAT_100254a9
#define DAT_100254a9 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1ea1U)))
#undef DAT_1002559c
#define DAT_1002559c (*(uint *)(((uintptr_t)pf_module_state + 0x1f94U)))
#undef DAT_100255a4
#define DAT_100255a4 (*(char *)(((uintptr_t)pf_module_state + 0x1f9cU)))
#undef DAT_100255cd
#define DAT_100255cd (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1fc5U)))
#undef DAT_100256c0
#define DAT_100256c0 (*(uint *)(((uintptr_t)pf_module_state + 0x20b8U)))
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
#undef str_10023904
#define str_10023904 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2fcU)))
#define local_810 (*(char (*)[2048])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10020804
 */

void recovered_10020804(void)

{
  unsigned char frame[2112] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  code *pcVar3;
  ulong size;
  bool bVar4;

  local_810[0] = '\0';
  if (DAT_10024918 != '\0') {
    recovered_1001f7a0(local_810,DAT_10024a34,&DAT_10024941);
  }
  if (DAT_10024a3c == '\x01') {
    recovered_1001f7a0(local_810,DAT_10024b58,&DAT_10024a65);
  }
  if (DAT_10024b60 == '\x01') {
    recovered_1001f7a0(local_810,DAT_10024c7c,&DAT_10024b89);
  }
  if (DAT_10024c84 == '\x01') {
    recovered_1001f7a0(local_810,DAT_10024da0,&DAT_10024cad);
  }
  if (DAT_10024da8 == '\x01') {
    recovered_1001f7a0(local_810,DAT_10024ec4,&DAT_10024dd1);
  }
  if (DAT_10024ecc == '\x01') {
    recovered_1001f7a0(local_810,DAT_10024fe8,&DAT_10024ef5);
  }
  if (DAT_10024ff0 == '\x01') {
    recovered_1001f7a0(local_810,DAT_1002510c,&DAT_10025019);
  }
  if (DAT_10025114 == '\x01') {
    recovered_1001f7a0(local_810,DAT_10025230,&DAT_1002513d);
  }
  if (DAT_10025238 == '\x01') {
    recovered_1001f7a0(local_810,DAT_10025354,&DAT_10025261);
  }
  if (DAT_1002535c == '\x01') {
    recovered_1001f7a0(local_810,DAT_10025478,&DAT_10025385);
  }
  if (DAT_10025480 == '\x01') {
    recovered_1001f7a0(local_810,DAT_1002559c,&DAT_100254a9);
  }
  if (DAT_100255a4 == '\x01') {
    recovered_1001f7a0(local_810,DAT_100256c0,&DAT_100255cd);
  }
  size = strlen(local_810);
  iVar2 = Ram40010800;
  if ((iVar2 == 0x50414d57) && (iVar2 = Ram40010804, iVar2 != 0)) {
    uVar1 = Ram40010808;
    bVar4 = 0xb < uVar1;
    if (bVar4) {
      uVar1 = Ram40010808;
    }
    if ((bVar4 && 0x3b < uVar1) && (pcVar3 = (code *)UINT_40010838, pcVar3 != (code *)0x0)) {
      (*pcVar3)(str_10023904,local_810,size);
      return;
    }
  }
  return;
}

#undef DAT_10024918
#undef DAT_10024941
#undef DAT_10024a34
#undef DAT_10024a3c
#undef DAT_10024a65
#undef DAT_10024b58
#undef DAT_10024b60
#undef DAT_10024b89
#undef DAT_10024c7c
#undef DAT_10024c84
#undef DAT_10024cad
#undef DAT_10024da0
#undef DAT_10024da8
#undef DAT_10024dd1
#undef DAT_10024ec4
#undef DAT_10024ecc
#undef DAT_10024ef5
#undef DAT_10024fe8
#undef DAT_10024ff0
#undef DAT_10025019
#undef DAT_1002510c
#undef DAT_10025114
#undef DAT_1002513d
#undef DAT_10025230
#undef DAT_10025238
#undef DAT_10025261
#undef DAT_10025354
#undef DAT_1002535c
#undef DAT_10025385
#undef DAT_10025478
#undef DAT_10025480
#undef DAT_100254a9
#undef DAT_1002559c
#undef DAT_100255a4
#undef DAT_100255cd
#undef DAT_100256c0
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef Ram40010800
#undef Ram40010804
#undef Ram40010808
#undef UINT_40010838
#undef str_10023904
#undef local_810

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
#undef UINT_40010888
#define UINT_40010888 (*(uint *)(0x40010888U))
#undef UINT_400108d8
#define UINT_400108d8 (*(uint *)(0x400108d8U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10020a18
 */

void recovered_10020a18(int param_1,char *param_2,char *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  code *UNRECOVERED_JUMPTABLE_00;
  bool bVar3;
  bool bVar4;

  iVar2 = Ram40010800;
  if ((iVar2 == 0x50414d57) && (iVar2 = Ram40010804, iVar2 != 0)) {
    uVar1 = Ram40010808;
    bVar4 = 0xb < uVar1;
    bVar3 = uVar1 == 0xc;
    if (bVar4) {
      uVar1 = Ram40010808;
      bVar3 = uVar1 == 0xdb;
    }
    if ((bVar4 && 0xda < uVar1) && !bVar3) {
      UNRECOVERED_JUMPTABLE_00 = (code *)UINT_400108d8;
      if (UNRECOVERED_JUMPTABLE_00 == (code *)0x0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x10020a90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_00)(param_1,param_2,param_3);
      return;
    }
  }
  iVar2 = Ram40010800;
  if ((iVar2 == 0x50414d57) && (iVar2 = Ram40010804, iVar2 != 0)) {
    uVar1 = Ram40010808;
    bVar3 = 0xb < uVar1;
    if (bVar3) {
      uVar1 = Ram40010808;
    }
    if (bVar3 && 0x8b < uVar1) {
      UNRECOVERED_JUMPTABLE_00 = (code *)UINT_40010888;
      if (UNRECOVERED_JUMPTABLE_00 == (code *)0x0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x10020aa8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_00)(param_2,param_3);
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
#undef UINT_40010888
#undef UINT_400108d8

#undef DAT_10023774
#define DAT_10023774 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x16cU)))
#undef DAT_10024588
#define DAT_10024588 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xf80U)))
#undef DAT_100245d0
#define DAT_100245d0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xfc8U)))
#undef DAT_10024618
#define DAT_10024618 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1010U)))
#undef DAT_1002490c
#define DAT_1002490c (*(int *)(((uintptr_t)pf_module_state + 0x1304U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10020aac
 */

void recovered_10020aac(undefined4 param_1,char *param_2,undefined4 param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  char cVar3;
  char *pcVar4;
  uint uVar5;

  if (0x11 < DAT_1002490c) {
    return;
  }
  *(undefined4 *)(&DAT_10024588 + DAT_1002490c * 4) = param_1;
  *(undefined4 *)(&DAT_100245d0 + DAT_1002490c * 4) = param_3;
  iVar1 = DAT_1002490c;
  pcVar4 = &DAT_10023774;
  if (param_2 != (char *)0x0) {
    pcVar4 = param_2;
  }
  cVar3 = *pcVar4;
  uVar2 = 0;
  if (cVar3 != '\0') {
    uVar5 = 0;
    do {
      uVar2 = uVar5 + 1;
      (&DAT_10024618)[uVar5 + iVar1 * 0x2a] = cVar3;
      if (0x28 < uVar2) break;
      cVar3 = pcVar4[uVar5 + 1];
      uVar5 = uVar2;
    } while (cVar3 != '\0');
  }
  (&DAT_10024618)[uVar2 + iVar1 * 0x2a] = 0;
  DAT_1002490c = DAT_1002490c + 1;
  return;
}

#undef DAT_10023774
#undef DAT_10024588
#undef DAT_100245d0
#undef DAT_10024618
#undef DAT_1002490c

#undef DAT_100210f0
#define DAT_100210f0 (*(uint64_t *)(0x100210f0U))
#undef DAT_100210f8
#define DAT_100210f8 (*(uint64_t *)(0x100210f8U))
#undef DAT_10021100
#define DAT_10021100 (*(uint64_t *)(0x10021100U))
#undef DAT_10021108
#define DAT_10021108 (*(uint64_t *)(0x10021108U))
#undef DAT_10021110
#define DAT_10021110 (*(uint64_t *)(0x10021110U))
#undef DAT_10021118
#define DAT_10021118 (*(uint64_t *)(0x10021118U))
#undef DAT_10024374
#define DAT_10024374 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xd6cU)))
#undef DAT_10024394
#define DAT_10024394 (*(uint *)(((uintptr_t)pf_module_state + 0xd8cU)))
#undef DAT_100243a4
#define DAT_100243a4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xd9cU)))
#undef DAT_10024588
#define DAT_10024588 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xf80U)))
#undef DAT_100245d0
#define DAT_100245d0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xfc8U)))
#undef DAT_10024618
#define DAT_10024618 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1010U)))
#undef DAT_1002461c
#define DAT_1002461c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1014U)))
#undef DAT_10024620
#define DAT_10024620 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1018U)))
#undef DAT_10024622
#define DAT_10024622 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x101aU)))
#undef DAT_10024623
#define DAT_10024623 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x101bU)))
#undef DAT_10024624
#define DAT_10024624 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x101cU)))
#undef DAT_10024626
#define DAT_10024626 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x101eU)))
#undef DAT_10024628
#define DAT_10024628 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1020U)))
#undef DAT_1002462a
#define DAT_1002462a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1022U)))
#undef DAT_1002490c
#define DAT_1002490c (*(int *)(((uintptr_t)pf_module_state + 0x1304U)))
#undef DAT_10024910
#define DAT_10024910 (*(int *)(((uintptr_t)pf_module_state + 0x1308U)))
#undef DAT_10024918
#define DAT_10024918 (*(byte *)(((uintptr_t)pf_module_state + 0x1310U)))
#undef DAT_10024941
#define DAT_10024941 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1339U)))
#undef DAT_10024a34
#define DAT_10024a34 (*(uint *)(((uintptr_t)pf_module_state + 0x142cU)))
#undef DAT_10024a3c
#define DAT_10024a3c (*(byte *)(((uintptr_t)pf_module_state + 0x1434U)))
#undef DAT_10024a65
#define DAT_10024a65 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x145dU)))
#undef DAT_10024b58
#define DAT_10024b58 (*(uint *)(((uintptr_t)pf_module_state + 0x1550U)))
#undef DAT_10024b60
#define DAT_10024b60 (*(byte *)(((uintptr_t)pf_module_state + 0x1558U)))
#undef DAT_10024b89
#define DAT_10024b89 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1581U)))
#undef DAT_10024c7c
#define DAT_10024c7c (*(uint *)(((uintptr_t)pf_module_state + 0x1674U)))
#undef DAT_10024c84
#define DAT_10024c84 (*(byte *)(((uintptr_t)pf_module_state + 0x167cU)))
#undef DAT_10024cad
#define DAT_10024cad (*(uint8_t *)(((uintptr_t)pf_module_state + 0x16a5U)))
#undef DAT_10024da0
#define DAT_10024da0 (*(uint *)(((uintptr_t)pf_module_state + 0x1798U)))
#undef DAT_10024da8
#define DAT_10024da8 (*(byte *)(((uintptr_t)pf_module_state + 0x17a0U)))
#undef DAT_10024dd1
#define DAT_10024dd1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17c9U)))
#undef DAT_10024ec4
#define DAT_10024ec4 (*(uint *)(((uintptr_t)pf_module_state + 0x18bcU)))
#undef DAT_10024ecc
#define DAT_10024ecc (*(byte *)(((uintptr_t)pf_module_state + 0x18c4U)))
#undef DAT_10024ef5
#define DAT_10024ef5 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x18edU)))
#undef DAT_10024fe8
#define DAT_10024fe8 (*(uint *)(((uintptr_t)pf_module_state + 0x19e0U)))
#undef DAT_10024ff0
#define DAT_10024ff0 (*(byte *)(((uintptr_t)pf_module_state + 0x19e8U)))
#undef DAT_10025019
#define DAT_10025019 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1a11U)))
#undef DAT_1002510c
#define DAT_1002510c (*(uint *)(((uintptr_t)pf_module_state + 0x1b04U)))
#undef DAT_10025114
#define DAT_10025114 (*(byte *)(((uintptr_t)pf_module_state + 0x1b0cU)))
#undef DAT_1002513d
#define DAT_1002513d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1b35U)))
#undef DAT_10025230
#define DAT_10025230 (*(uint *)(((uintptr_t)pf_module_state + 0x1c28U)))
#undef DAT_10025238
#define DAT_10025238 (*(byte *)(((uintptr_t)pf_module_state + 0x1c30U)))
#undef DAT_10025261
#define DAT_10025261 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1c59U)))
#undef DAT_10025354
#define DAT_10025354 (*(uint *)(((uintptr_t)pf_module_state + 0x1d4cU)))
#undef DAT_1002535c
#define DAT_1002535c (*(byte *)(((uintptr_t)pf_module_state + 0x1d54U)))
#undef DAT_10025385
#define DAT_10025385 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1d7dU)))
#undef DAT_10025478
#define DAT_10025478 (*(uint *)(((uintptr_t)pf_module_state + 0x1e70U)))
#undef DAT_10025480
#define DAT_10025480 (*(byte *)(((uintptr_t)pf_module_state + 0x1e78U)))
#undef DAT_100254a9
#define DAT_100254a9 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1ea1U)))
#undef DAT_1002559c
#define DAT_1002559c (*(uint *)(((uintptr_t)pf_module_state + 0x1f94U)))
#undef DAT_100255a4
#define DAT_100255a4 (*(byte *)(((uintptr_t)pf_module_state + 0x1f9cU)))
#undef DAT_100255cd
#define DAT_100255cd (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1fc5U)))
#undef DAT_100256c0
#define DAT_100256c0 (*(uint *)(((uintptr_t)pf_module_state + 0x20b8U)))
#undef DAT_100257e4
#define DAT_100257e4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x21dcU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10020b60
 */

void recovered_10020b60(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  undefined1 *puVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  int iVar9;
  int iVar10;
  bool bVar11;

  uVar4 = DAT_10024394;
  uVar3 = (uint)DAT_10024918;
  uVar1 = uVar3;
  if (uVar3 == 1) {
    uVar1 = DAT_10024a34;
  }
  if ((uVar3 == 1 && uVar1 == DAT_10024394) &&
     (iVar10 = strcmp(&DAT_10024941,&DAT_100243a4), iVar10 == 0)) {
LAB_10020e28:
    if (0x11 < DAT_1002490c) goto LAB_10020e90;
    *(undefined4 *)(&DAT_10024588 + DAT_1002490c * 4) = 0xf;
    *(undefined4 *)(&DAT_100245d0 + DAT_1002490c * 4) = 0xffffffff;
    uVar2 = (0x7562657245206d6fU);
    iVar10 = DAT_1002490c * 0x2a;
    *(undefined8 *)(&DAT_10024618 + iVar10) = (0x7266206e69706e55U);
    *(undefined8 *)(&DAT_10024620 + iVar10) = uVar2;
    (&DAT_10024628)[iVar10] = 0x73;
    iVar6 = 0x2b5;
  }
  else {
    uVar3 = (uint)DAT_10024a3c;
    uVar1 = uVar3;
    if (uVar3 == 1) {
      uVar1 = DAT_10024b58;
    }
    if ((uVar3 == 1 && uVar1 == uVar4) &&
       (iVar10 = strcmp(&DAT_10024a65,&DAT_100243a4), iVar10 == 0)) goto LAB_10020e28;
    uVar3 = (uint)DAT_10024b60;
    uVar1 = uVar3;
    if (uVar3 == 1) {
      uVar1 = DAT_10024c7c;
    }
    if ((uVar3 == 1 && uVar1 == uVar4) &&
       (iVar10 = strcmp(&DAT_10024b89,&DAT_100243a4), iVar10 == 0)) goto LAB_10020e28;
    uVar3 = (uint)DAT_10024c84;
    uVar1 = uVar3;
    if (uVar3 == 1) {
      uVar1 = DAT_10024da0;
    }
    if ((uVar3 == 1 && uVar1 == uVar4) &&
       (iVar10 = strcmp(&DAT_10024cad,&DAT_100243a4), iVar10 == 0)) goto LAB_10020e28;
    uVar3 = (uint)DAT_10024da8;
    uVar1 = uVar3;
    if (uVar3 == 1) {
      uVar1 = DAT_10024ec4;
    }
    if ((uVar3 == 1 && uVar1 == uVar4) &&
       (iVar10 = strcmp(&DAT_10024dd1,&DAT_100243a4), iVar10 == 0)) goto LAB_10020e28;
    uVar3 = (uint)DAT_10024ecc;
    uVar1 = uVar3;
    if (uVar3 == 1) {
      uVar1 = DAT_10024fe8;
    }
    if ((uVar3 == 1 && uVar1 == uVar4) &&
       (iVar10 = strcmp(&DAT_10024ef5,&DAT_100243a4), iVar10 == 0)) goto LAB_10020e28;
    uVar3 = (uint)DAT_10024ff0;
    uVar1 = uVar3;
    if (uVar3 == 1) {
      uVar1 = DAT_1002510c;
    }
    if ((uVar3 == 1 && uVar1 == uVar4) &&
       (iVar10 = strcmp(&DAT_10025019,&DAT_100243a4), iVar10 == 0)) goto LAB_10020e28;
    uVar3 = (uint)DAT_10025114;
    uVar1 = uVar3;
    if (uVar3 == 1) {
      uVar1 = DAT_10025230;
    }
    if ((uVar3 == 1 && uVar1 == uVar4) &&
       (iVar10 = strcmp(&DAT_1002513d,&DAT_100243a4), iVar10 == 0)) goto LAB_10020e28;
    uVar3 = (uint)DAT_10025238;
    uVar1 = uVar3;
    if (uVar3 == 1) {
      uVar1 = DAT_10025354;
    }
    if ((uVar3 == 1 && uVar1 == uVar4) &&
       (iVar10 = strcmp(&DAT_10025261,&DAT_100243a4), iVar10 == 0)) goto LAB_10020e28;
    uVar3 = (uint)DAT_1002535c;
    uVar1 = uVar3;
    if (uVar3 == 1) {
      uVar1 = DAT_10025478;
    }
    if ((uVar3 == 1 && uVar1 == uVar4) &&
       (iVar10 = strcmp(&DAT_10025385,&DAT_100243a4), iVar10 == 0)) goto LAB_10020e28;
    uVar3 = (uint)DAT_10025480;
    uVar1 = uVar3;
    if (uVar3 == 1) {
      uVar1 = DAT_1002559c;
    }
    if ((uVar3 == 1 && uVar1 == uVar4) &&
       (iVar10 = strcmp(&DAT_100254a9,&DAT_100243a4), iVar10 == 0)) goto LAB_10020e28;
    uVar3 = (uint)DAT_100255a4;
    uVar1 = uVar3;
    if (uVar3 == 1) {
      uVar1 = DAT_100256c0;
    }
    if ((uVar3 == 1 && uVar1 == uVar4) &&
       (iVar10 = strcmp(&DAT_100255cd,&DAT_100243a4), iVar10 == 0)) goto LAB_10020e28;
    if (0x11 < DAT_1002490c) goto LAB_10020e90;
    *(undefined4 *)(&DAT_10024588 + DAT_1002490c * 4) = 0xe;
    *(undefined4 *)(&DAT_100245d0 + DAT_1002490c * 4) = 0xffffffff;
    iVar10 = DAT_1002490c * 0x2a;
    (&DAT_10024624)[iVar10] = 0x73;
    *(undefined4 *)(&DAT_10024620 + iVar10) = 0x75626572;
    *(undefined4 *)(&DAT_1002461c + iVar10) = 0x45206f74;
    *(undefined4 *)(&DAT_10024618 + iVar10) = 0x206e6950;
    iVar6 = 0x2b1;
  }
  (&DAT_10024374)[iVar6 + iVar10] = 0;
  DAT_1002490c = DAT_1002490c + 1;
LAB_10020e90:
  uVar1 = DAT_10024394;
  iVar10 = 0x18;
  puVar8 = &DAT_100257e4;
  do {
    uVar4 = (uint)(byte)puVar8[-0x47];
    bVar11 = uVar4 == 1;
    if (bVar11) {
      uVar4 = *puVar8;
    }
    if ((bVar11 && uVar4 == uVar1) &&
       (iVar6 = strcmp((char *)((int)puVar8 + -0xf3),&DAT_100243a4), iVar6 == 0)) {
      if (0x11 < DAT_1002490c) goto LAB_10020fb0;
      *(undefined4 *)(&DAT_10024588 + DAT_1002490c * 4) = 0x11;
      *(undefined4 *)(&DAT_100245d0 + DAT_1002490c * 4) = 0xffffffff;
      uVar2 = (0x746b736544206d6fU);
      iVar10 = DAT_1002490c * 0x2a;
      *(undefined8 *)(&DAT_10024618 + iVar10) = (0x7266206e69706e55U);
      *(undefined8 *)(&DAT_10024620 + iVar10) = uVar2;
      *(undefined2 *)(&DAT_10024628 + iVar10) = 0x706f;
      puVar5 = &DAT_1002462a + iVar10;
      goto LAB_10020f9c;
    }
    puVar8 = puVar8 + 0x49;
    iVar10 = iVar10 + -1;
  } while (iVar10 != 0);
  if (DAT_1002490c < 0x12) {
    *(undefined4 *)(&DAT_10024588 + DAT_1002490c * 4) = 0x10;
    *(undefined4 *)(&DAT_100245d0 + DAT_1002490c * 4) = 0xffffffff;
    iVar10 = DAT_1002490c * 0x2a;
    *(undefined4 *)(&DAT_10024618 + iVar10) = 0x206e6950;
    *(undefined2 *)(&DAT_10024624 + iVar10) = 0x706f;
    *(undefined4 *)(&DAT_10024620 + iVar10) = 0x746b7365;
    *(undefined4 *)(&DAT_1002461c + iVar10) = 0x44206f74;
    puVar5 = &DAT_10024626 + iVar10;
LAB_10020f9c:
    *puVar5 = 0;
    DAT_1002490c = DAT_1002490c + 1;
  }
LAB_10020fb0:
  uVar1 = DAT_10024394;
  iVar9 = 0x12;
  iVar6 = 0;
  iVar10 = DAT_10024910;
  do {
    if (*(char *)(iVar10 + iVar6) == '\x01') {
      iVar7 = iVar10 + iVar6;
      uVar4 = *(uint *)(iVar7 + 4);
      bVar11 = uVar4 == 5;
      if (bVar11) {
        uVar4 = *(uint *)(iVar7 + 0x124);
      }
      if (bVar11 && uVar4 == uVar1) {
        iVar10 = strcmp((char *)(iVar7 + 0x30),&DAT_100243a4);
        if (iVar10 == 0) {
          if (0x11 < DAT_1002490c) {
            return;
          }
          *(undefined4 *)(&DAT_10024588 + DAT_1002490c * 4) = 0x13;
          *(undefined4 *)(&DAT_100245d0 + DAT_1002490c * 4) = 0xffffffff;
          uVar2 = (0x6b636f44206d6f72U);
          iVar10 = DAT_1002490c * 0x2a;
          *(undefined8 *)(&DAT_10024618 + iVar10) = (0x662065766f6d6552U);
          *(undefined8 *)(&DAT_10024620 + iVar10) = uVar2;
          puVar5 = &DAT_10024628 + iVar10;
          goto LAB_10021080;
        }
        iVar10 = DAT_10024910;
      }
    }
    iVar6 = iVar6 + 300;
    iVar9 = iVar9 + -1;
  } while (iVar9 != 0);
  if (DAT_1002490c < 0x12) {
    *(undefined4 *)(&DAT_10024588 + DAT_1002490c * 4) = 0x12;
    *(undefined4 *)(&DAT_100245d0 + DAT_1002490c * 4) = 0xffffffff;
    iVar10 = DAT_1002490c * 0x2a;
    *(undefined4 *)(&DAT_10024618 + iVar10) = 0x20646441;
    (&DAT_10024622)[iVar10] = 0x6b;
    *(undefined2 *)(&DAT_10024620 + iVar10) = 0x636f;
    *(undefined4 *)(&DAT_1002461c + iVar10) = 0x44206f74;
    puVar5 = &DAT_10024623 + iVar10;
LAB_10021080:
    *puVar5 = 0;
    DAT_1002490c = DAT_1002490c + 1;
  }
  return;
}

#undef DAT_100210f0
#undef DAT_100210f8
#undef DAT_10021100
#undef DAT_10021108
#undef DAT_10021110
#undef DAT_10021118
#undef DAT_10024374
#undef DAT_10024394
#undef DAT_100243a4
#undef DAT_10024588
#undef DAT_100245d0
#undef DAT_10024618
#undef DAT_1002461c
#undef DAT_10024620
#undef DAT_10024622
#undef DAT_10024623
#undef DAT_10024624
#undef DAT_10024626
#undef DAT_10024628
#undef DAT_1002462a
#undef DAT_1002490c
#undef DAT_10024910
#undef DAT_10024918
#undef DAT_10024941
#undef DAT_10024a34
#undef DAT_10024a3c
#undef DAT_10024a65
#undef DAT_10024b58
#undef DAT_10024b60
#undef DAT_10024b89
#undef DAT_10024c7c
#undef DAT_10024c84
#undef DAT_10024cad
#undef DAT_10024da0
#undef DAT_10024da8
#undef DAT_10024dd1
#undef DAT_10024ec4
#undef DAT_10024ecc
#undef DAT_10024ef5
#undef DAT_10024fe8
#undef DAT_10024ff0
#undef DAT_10025019
#undef DAT_1002510c
#undef DAT_10025114
#undef DAT_1002513d
#undef DAT_10025230
#undef DAT_10025238
#undef DAT_10025261
#undef DAT_10025354
#undef DAT_1002535c
#undef DAT_10025385
#undef DAT_10025478
#undef DAT_10025480
#undef DAT_100254a9
#undef DAT_1002559c
#undef DAT_100255a4
#undef DAT_100255cd
#undef DAT_100256c0
#undef DAT_100257e4

#undef DAT_1002439c
#define DAT_1002439c (*(uint32_t *)(((uintptr_t)pf_module_state + 0xd94U)))
#undef DAT_10024588
#define DAT_10024588 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xf80U)))
#undef DAT_100245d0
#define DAT_100245d0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xfc8U)))
#undef DAT_10024618
#define DAT_10024618 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1010U)))
#undef DAT_1002490c
#define DAT_1002490c (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x1304U)))
#define local_46 (*(char (*)[42])(frame + 26))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10021120
 */

void recovered_10021120(byte *param_1,undefined4 param_2,undefined4 param_3,undefined *param_4)

{
  unsigned char frame[128] __attribute__((aligned(16))) = {0};

  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  byte *pbVar7;
  uint uVar8;

  iVar4 = 0;
  DAT_1002439c = param_2;
LAB_10021158:
  if (param_1 != (byte *)0x0) {
    param_4 = (undefined *)(uint)*param_1;
    local_46[0] = '\0';
  }
  if (param_1 == (byte *)0x0 || param_4 == (undefined *)0x0) {
    return;
  }
  iVar5 = 0;
  pbVar7 = param_1;
  do {
    iVar1 = 0;
    while ((param_4 != (undefined *)0x0 &&
           (param_4 != (undefined *)0xa && param_4 != (undefined *)0x7c))) {
      if (iVar1 == 0x29) {
        iVar3 = 0x29;
        goto LAB_100211bc;
      }
      local_46[iVar1] = (char)param_4;
      param_4 = (undefined *)(uint)pbVar7[iVar1 + 1];
      iVar1 = iVar1 + 1;
    }
    iVar3 = iVar1;
LAB_100211bc:
    local_46[iVar3] = '\0';
    for (pbVar7 = pbVar7 + iVar1; param_4 = (undefined *)(uint)*pbVar7,
        param_4 == (undefined *)0x7c || param_4 == (undefined *)0xa; pbVar7 = pbVar7 + 1) {
    }
    if (local_46[0] != '\0') {
      if (iVar5 == iVar4) break;
      iVar5 = iVar5 + 1;
    }
    if (param_4 == (undefined *)0x0) {
      return;
    }
  } while( true );
  param_4 = DAT_1002490c;
  if ((int)DAT_1002490c < 0x12) {
    *(undefined4 *)(&DAT_10024588 + (int)DAT_1002490c * 4) = 0x1c;
    *(int *)(&DAT_100245d0 + (int)DAT_1002490c * 4) = iVar4;
    param_4 = &DAT_10024618 + (int)DAT_1002490c * 0x2a;
    uVar6 = 0;
    cVar2 = local_46[0];
    do {
      uVar8 = uVar6 + 1;
      param_4[uVar6] = cVar2;
      if (0x28 < uVar8) break;
      cVar2 = local_46[uVar6 + 1];
      uVar6 = uVar8;
    } while (cVar2 != '\0');
    param_4[uVar8] = 0;
    DAT_1002490c = DAT_1002490c + 1;
  }
  iVar4 = iVar4 + 1;
  if (iVar4 == 0x12) {
    return;
  }
  goto LAB_10021158;
}

#undef DAT_1002439c
#undef DAT_10024588
#undef DAT_100245d0
#undef DAT_10024618
#undef DAT_1002490c
#undef local_46

#undef DAT_10023774
#define DAT_10023774 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x16cU)))
#undef DAT_10024374
#define DAT_10024374 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xd6cU)))
#undef DAT_10024380
#define DAT_10024380 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xd78U)))
#undef DAT_10024384
#define DAT_10024384 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xd7cU)))
#undef DAT_10024394
#define DAT_10024394 (*(uint32_t *)(((uintptr_t)pf_module_state + 0xd8cU)))
#undef DAT_10024398
#define DAT_10024398 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xd90U)))
#undef DAT_10024399
#define DAT_10024399 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xd91U)))
#undef DAT_1002439a
#define DAT_1002439a (*(uint8_t *)(((uintptr_t)pf_module_state + 0xd92U)))
#undef DAT_1002439b
#define DAT_1002439b (*(uint8_t *)(((uintptr_t)pf_module_state + 0xd93U)))
#undef DAT_100243a4
#define DAT_100243a4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xd9cU)))
#undef DAT_10024495
#define DAT_10024495 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xe8dU)))
#undef _DAT_10024380
#define _DAT_10024380 (*(uint32_t *)(((uintptr_t)pf_module_state + 0xd78U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10021278
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10021278(undefined4 param_1,undefined4 param_2,byte *param_3,byte *param_4,
                       undefined4 param_5,int param_6)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  byte bVar2;
  byte *pbVar3;
  byte *pbVar4;
  uint uVar5;
  undefined1 *puVar6;
  byte bVar7;
  uint uVar8;
  byte *pbVar9;

  pbVar4 = (byte *)0x0;
  if (param_6 == 0) {
    pbVar4 = param_3;
  }
  DAT_10024398 = (undefined1)param_6;
  DAT_10024394 = param_5;
  pbVar9 = (byte *)0x0;
  _DAT_10024380 = param_1;
  (*(uint32_t *)(pf_module_state+0xd7cU)) = param_2;
  if (param_6 == 0) {
    bVar1 = recovered_10013aec(pbVar4);
    pbVar4 = (byte *)(uint)bVar1;
  }
  DAT_10024399 = SUB41(pbVar4,0);
  if (param_3 == (byte *)0x0) {
    pbVar4 = &DAT_10023774;
  }
  else {
    pbVar4 = param_3;
    if (*param_3 != 0) {
      pbVar3 = param_3;
      bVar2 = *param_3;
      do {
        bVar7 = pbVar3[1];
        if (bVar2 == 0x2f) {
          pbVar9 = pbVar3;
        }
        pbVar3 = pbVar3 + 1;
        bVar2 = bVar7;
      } while (bVar7 != 0);
    }
  }
  pbVar3 = (byte *)0x0;
  if (pbVar9 != (byte *)0x0) {
    pbVar4 = pbVar9 + 1;
  }
  if (*pbVar4 != 0) {
    bVar2 = *pbVar4;
    do {
      bVar7 = pbVar4[1];
      if (bVar2 == 0x2e) {
        pbVar3 = pbVar4;
      }
      pbVar4 = pbVar4 + 1;
      bVar2 = bVar7;
    } while (bVar7 != 0);
  }
  if (pbVar3 == (byte *)0x0) {
    pbVar3 = &DAT_10023774;
  }
  uVar5 = (uint)*pbVar3;
  if (uVar5 == 0) {
    bVar7 = 0x2e;
    bVar2 = 0;
LAB_10021404:
    DAT_1002439a = bVar2 == bVar7;
  }
  else {
    DAT_1002439a = false;
    if (uVar5 - 0x41 < 0x1a) {
      uVar5 = uVar5 | 0x20;
    }
    if (uVar5 == 0x2e) {
      uVar5 = (uint)pbVar3[1];
      if (uVar5 == 0) {
        bVar7 = 0x61;
        bVar2 = 0;
      }
      else {
        if (uVar5 - 0x41 < 0x1a) {
          uVar5 = uVar5 | 0x20;
        }
        if (uVar5 != 0x61) goto LAB_10021410;
        uVar5 = (uint)pbVar3[2];
        bVar7 = 0x70;
        bVar2 = 0;
        if (uVar5 != 0) {
          if (uVar5 - 0x41 < 0x1a) {
            uVar5 = uVar5 | 0x20;
          }
          if (uVar5 != 0x70) goto LAB_10021410;
          uVar5 = (uint)pbVar3[3];
          bVar2 = 0;
          if (uVar5 != 0) {
            if (uVar5 - 0x41 < 0x1a) {
              uVar5 = uVar5 | 0x20;
            }
            if (uVar5 != 0x70) goto LAB_10021410;
            bVar2 = pbVar3[4];
            bVar7 = 0;
          }
        }
      }
      goto LAB_10021404;
    }
  }
LAB_10021410:
  DAT_1002439b = recovered_1001ffe8(param_3);
  pbVar4 = param_3;
  if (param_3 == (byte *)0x0) {
    pbVar4 = &DAT_10023774;
  }
  bVar2 = *pbVar4;
  uVar5 = 0;
  if (bVar2 != 0) {
    uVar8 = 0;
    do {
      (&DAT_100243a4)[uVar8] = bVar2;
      uVar5 = uVar8 + 1;
      if (0xef < uVar5) break;
      bVar2 = pbVar4[uVar8 + 1];
      uVar8 = uVar5;
    } while (bVar2 != 0);
  }
  puVar6 = &DAT_10024374 + uVar5;
  (&DAT_100243a4)[uVar5] = 0;
  if (param_4 != (byte *)0x0) {
    puVar6 = (undefined1 *)(uint)*param_4;
  }
  if (param_4 == (byte *)0x0 || puVar6 == (undefined1 *)0x0) {
    uVar5 = 0;
    param_4 = &DAT_10023774;
    pbVar4 = (byte *)0x0;
    if (param_3 != (byte *)0x0) {
      if (*param_3 != 0) {
        pbVar9 = param_3;
        bVar2 = *param_3;
        do {
          bVar7 = pbVar9[1];
          if (bVar2 == 0x2f) {
            pbVar4 = pbVar9;
          }
          pbVar9 = pbVar9 + 1;
          bVar2 = bVar7;
        } while (bVar7 != 0);
      }
      param_4 = param_3;
    }
    if (pbVar4 != (byte *)0x0) {
      param_4 = pbVar4 + 1;
    }
    puVar6 = (undefined1 *)(uint)*param_4;
    if (puVar6 == (undefined1 *)0x0) goto LAB_1002150c;
  }
  uVar8 = 0;
  do {
    (&DAT_10024495)[uVar8] = (char)puVar6;
    uVar5 = uVar8 + 1;
    if (0xef < uVar5) break;
    puVar6 = (undefined1 *)(uint)param_4[uVar8 + 1];
    uVar8 = uVar5;
  } while (puVar6 != (undefined1 *)0x0);
LAB_1002150c:
  (&DAT_10024495)[uVar5] = 0;
  return;
}

#undef DAT_10023774
#undef DAT_10024374
#undef DAT_10024380
#undef DAT_10024384
#undef DAT_10024394
#undef DAT_10024398
#undef DAT_10024399
#undef DAT_1002439a
#undef DAT_1002439b
#undef DAT_100243a4
#undef DAT_10024495
#undef _DAT_10024380

#undef DAT_10021c00
#define DAT_10021c00 (*(uint64_t *)(0x10021c00U))
#undef DAT_10021c08
#define DAT_10021c08 (*(uint64_t *)(0x10021c08U))
#undef DAT_10023774
#define DAT_10023774 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x16cU)))
#undef DAT_1002430c
#define DAT_1002430c (*(int *)(((uintptr_t)pf_module_state + 0xd04U)))
#undef DAT_10024910
#define DAT_10024910 (*(int *)(((uintptr_t)pf_module_state + 0x1308U)))
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
#undef UINT_400108e8
#define UINT_400108e8 (*(uint *)(0x400108e8U))
#undef str_10021c10
#define str_10021c10 (*(char (*)[1])(0x10021c10U))
#undef str_10023e45
#define str_10023e45 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x83dU)))
#define iStack_60 (*(int *)(frame + 32))
#define pbStack_5c (*(byte * *)(frame + 36))
#define uStack_50 (*(undefined8 *)(frame + 48))
#define local_64 (*(undefined4 *)(frame + 28))
#define local_58 (*(undefined8 *)(frame + 40))
#define local_48 (*(byte (*)[40])(frame + 56))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10021520
 */

void recovered_10021520(byte *param_1,int param_2)

{
  unsigned char frame[160] __attribute__((aligned(16))) = {0};

  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  char *pcVar8;
  byte *pbVar9;
  ulong uVar10;
  int iVar11;
  byte bVar12;
  int *piVar13;
  byte bVar14;
  uint uVar15;
  int iVar16;
  char cVar17;
  byte *pbVar18;
  char *pcVar19;
  byte bVar20;
  bool bVar21;
  bool bVar22;

  if (param_1 == (byte *)0x0) {
    return;
  }
  bVar20 = *param_1;
  if (bVar20 == 0) {
    return;
  }
  pbVar9 = (byte *)0x0;
  pbVar18 = param_1;
  bVar12 = bVar20;
  do {
    bVar14 = pbVar18[1];
    if (bVar12 == 0x2f) {
      pbVar9 = pbVar18;
    }
    pbVar18 = pbVar18 + 1;
    bVar12 = bVar14;
  } while (bVar14 != 0);
  pbVar18 = param_1;
  if (pbVar9 != (byte *)0x0) {
    pbVar18 = pbVar9 + 1;
  }
  pbVar9 = (byte *)0x0;
  uVar4 = 0;
  bVar12 = *pbVar18;
  if (bVar12 != 0) {
    uVar15 = 0;
    do {
      uVar4 = uVar15 + 1;
      local_48[uVar15] = bVar12;
      if (0x26 < uVar4) break;
      bVar12 = pbVar18[uVar15 + 1];
      uVar15 = uVar4;
    } while (bVar12 != 0);
  }
  local_48[uVar4] = 0;
  pbVar18 = param_1;
  bVar12 = bVar20;
  do {
    bVar14 = pbVar18[1];
    if (bVar12 == 0x2f) {
      pbVar9 = pbVar18;
    }
    pbVar18 = pbVar18 + 1;
    bVar12 = bVar14;
  } while (bVar14 != 0);
  pbVar18 = param_1;
  if (pbVar9 != (byte *)0x0) {
    pbVar18 = pbVar9 + 1;
  }
  pbVar9 = (byte *)0x0;
  if (*pbVar18 != 0) {
    bVar12 = *pbVar18;
    do {
      bVar14 = pbVar18[1];
      if (bVar12 == 0x2e) {
        pbVar9 = pbVar18;
      }
      pbVar18 = pbVar18 + 1;
      bVar12 = bVar14;
    } while (bVar14 != 0);
  }
  if (pbVar9 == (byte *)0x0) {
    pbVar9 = &DAT_10023774;
  }
  uVar4 = (uint)*pbVar9;
  if (uVar4 == 0) {
    bVar14 = 0x2e;
    bVar12 = 0;
LAB_100216c0:
    uVar4 = 0x80000002;
    if (bVar12 != bVar14) goto LAB_100216cc;
  }
  else {
    if (uVar4 - 0x41 < 0x1a) {
      uVar4 = uVar4 | 0x20;
    }
    if (uVar4 == 0x2e) {
      uVar4 = (uint)pbVar9[1];
      if (uVar4 == 0) {
        bVar14 = 0x77;
        bVar12 = 0;
      }
      else {
        if (uVar4 - 0x41 < 0x1a) {
          uVar4 = uVar4 | 0x20;
        }
        if (uVar4 != 0x77) goto LAB_100216cc;
        uVar4 = (uint)pbVar9[2];
        if (uVar4 == 0) {
          bVar14 = 0x73;
          bVar12 = 0;
        }
        else {
          if (uVar4 - 0x41 < 0x1a) {
            uVar4 = uVar4 | 0x20;
          }
          if (uVar4 != 0x73) goto LAB_100216cc;
          bVar12 = pbVar9[3];
          bVar14 = 0;
        }
      }
      goto LAB_100216c0;
    }
LAB_100216cc:
    pbVar9 = (byte *)0x0;
    pbVar18 = param_1;
    bVar12 = bVar20;
    do {
      bVar14 = pbVar18[1];
      if (bVar12 == 0x2f) {
        pbVar9 = pbVar18;
      }
      pbVar18 = pbVar18 + 1;
      bVar12 = bVar14;
    } while (bVar14 != 0);
    pbVar18 = param_1;
    if (pbVar9 != (byte *)0x0) {
      pbVar18 = pbVar9 + 1;
    }
    pbVar9 = (byte *)0x0;
    if (*pbVar18 != 0) {
      bVar12 = *pbVar18;
      do {
        bVar14 = pbVar18[1];
        if (bVar12 == 0x2e) {
          pbVar9 = pbVar18;
        }
        pbVar18 = pbVar18 + 1;
        bVar12 = bVar14;
      } while (bVar14 != 0);
    }
    if (pbVar9 == (byte *)0x0) {
      pbVar9 = &DAT_10023774;
    }
    uVar4 = (uint)*pbVar9;
    if (uVar4 == 0) {
      bVar14 = 0x2e;
      bVar12 = 0;
LAB_100217e4:
      uVar4 = 0x80000003;
      if (bVar12 == bVar14) goto LAB_100218fc;
    }
    else {
      if (uVar4 - 0x41 < 0x1a) {
        uVar4 = uVar4 | 0x20;
      }
      if (uVar4 == 0x2e) {
        uVar4 = (uint)pbVar9[1];
        if (uVar4 == 0) {
          bVar14 = 0x6c;
          bVar12 = 0;
        }
        else {
          if (uVar4 - 0x41 < 0x1a) {
            uVar4 = uVar4 | 0x20;
          }
          if (uVar4 != 0x6c) goto LAB_100217f0;
          uVar4 = (uint)pbVar9[2];
          if (uVar4 == 0) {
            bVar14 = 0x75;
            bVar12 = 0;
          }
          else {
            if (uVar4 - 0x41 < 0x1a) {
              uVar4 = uVar4 | 0x20;
            }
            if (uVar4 != 0x75) goto LAB_100217f0;
            uVar4 = (uint)pbVar9[3];
            if (uVar4 == 0) {
              bVar14 = 0x61;
              bVar12 = 0;
            }
            else {
              if (uVar4 - 0x41 < 0x1a) {
                uVar4 = uVar4 | 0x20;
              }
              if (uVar4 != 0x61) goto LAB_100217f0;
              bVar12 = pbVar9[4];
              bVar14 = 0;
            }
          }
        }
        goto LAB_100217e4;
      }
    }
LAB_100217f0:
    pbVar18 = (byte *)0x0;
    pbVar9 = param_1;
    do {
      bVar12 = pbVar9[1];
      if (bVar20 == 0x2f) {
        pbVar18 = pbVar9;
      }
      pbVar9 = pbVar9 + 1;
      bVar20 = bVar12;
    } while (bVar12 != 0);
    pbVar9 = param_1;
    if (pbVar18 != (byte *)0x0) {
      pbVar9 = pbVar18 + 1;
    }
    pbVar18 = (byte *)0x0;
    if (*pbVar9 != 0) {
      bVar20 = *pbVar9;
      do {
        bVar12 = pbVar9[1];
        if (bVar20 == 0x2e) {
          pbVar18 = pbVar9;
        }
        pbVar9 = pbVar9 + 1;
        bVar20 = bVar12;
      } while (bVar12 != 0);
    }
    pbVar9 = &DAT_10023774;
    if (pbVar18 != (byte *)0x0) {
      pbVar9 = pbVar18;
    }
    bVar20 = *pbVar9;
    if (bVar20 == 0) {
      bVar12 = 0x2e;
      bVar20 = 0;
    }
    else {
      if ((byte)(bVar20 + 0xbf) < 0x1a) {
        bVar20 = bVar20 | 0x20;
      }
      uVar4 = 0x80000001;
      if (bVar20 != 0x2e) goto LAB_100218fc;
      bVar20 = pbVar9[1];
      if (bVar20 == 0) {
        bVar12 = 0x72;
        bVar20 = 0;
      }
      else {
        if ((byte)(bVar20 + 0xbf) < 0x1a) {
          bVar20 = bVar20 | 0x20;
        }
        if (bVar20 != 0x72) goto LAB_100218fc;
        bVar20 = pbVar9[2];
        if (bVar20 == 0) {
          bVar12 = 0x62;
          bVar20 = 0;
        }
        else {
          if ((byte)(bVar20 + 0xbf) < 0x1a) {
            bVar20 = bVar20 | 0x20;
          }
          if (bVar20 != 0x62) goto LAB_100218fc;
          bVar20 = pbVar9[3];
          bVar12 = 0;
        }
      }
    }
    uVar4 = 0x80000001;
    if (bVar20 == bVar12) {
      uVar4 = 0x80000004;
    }
  }
LAB_100218fc:
  iVar5 = Ram40010800;
  if ((iVar5 == 0x50414d57) && (iVar5 = Ram40010804, iVar5 != 0)) {
    uVar15 = Ram40010808;
    bVar22 = 0xb < uVar15;
    bVar21 = uVar15 == 0xc;
    if (bVar22) {
      uVar15 = Ram40010808;
      bVar21 = uVar15 == 0xeb;
    }
    if ((!bVar22 || uVar15 < 0xeb) || bVar21) goto LAB_10021938;
    pcVar1 = (code *)UINT_400108e8;
    if (pcVar1 == (code *)0x0) goto LAB_10021964;
    uVar4 = (*pcVar1)(param_2,(char *)param_1,uVar4);
  }
  else {
LAB_10021938:
    iVar5 = Ram40010800;
    if ((iVar5 != 0x50414d57) || (iVar5 = Ram40010804, iVar5 == 0)) goto LAB_10021964;
    uVar15 = Ram40010808;
    bVar21 = 0xb < uVar15;
    if (bVar21) {
      uVar15 = Ram40010808;
    }
    if ((!bVar21 || uVar15 < 0x94) || (pcVar1 = (code *)UINT_40010890, pcVar1 == (code *)0x0))
    goto LAB_10021964;
    uVar4 = (*pcVar1)((char *)param_1,uVar4);
  }
  if (uVar4 != 0) {
    iVar6 = 0;
    iVar5 = DAT_10024910;
    do {
      pcVar19 = (char *)(iVar5 + iVar6 * 300);
      cVar17 = *pcVar19;
      bVar21 = cVar17 == '\x01';
      if (bVar21) {
        cVar17 = pcVar19[1];
      }
      if (bVar21 && cVar17 == '\0') {
        iVar16 = 0x14;
        piVar13 = (int *)(DAT_1002430c + 0x14);
        iVar11 = 0;
        do {
          if (((char)piVar13[-5] == '\x01') && (*piVar13 == iVar6)) {
            iVar11 = iVar11 + 1;
          }
          piVar13 = piVar13 + 0x367;
          iVar16 = iVar16 + -1;
        } while (iVar16 != 0);
        if (iVar11 == 0) {
          memset(pcVar19,0,300);
          iVar5 = DAT_10024910;
        }
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 != 0x12);
    return;
  }
LAB_10021964:
  uVar4 = 0;
  iStack_60 = recovered_10005734(4,(char *)local_48,0xb784ec,'\0');
  local_64 = 5;
  local_58 = (0x8e00000120U);
  uStack_50 = (0x960000017cU);
  pbStack_5c = local_48;
  iVar5 = recovered_1000eac0(&local_64);
  if (-1 < iVar5) {
    iVar6 = iVar5 * 0xd9c + DAT_1002430c;
    bVar20 = *param_1;
    if (bVar20 != 0) {
      uVar15 = 0;
      do {
        uVar4 = uVar15 + 1;
        *(byte *)(iVar6 + 0x78 + uVar15) = bVar20;
        if (0xef < uVar4) break;
        bVar20 = param_1[uVar15 + 1];
        uVar15 = uVar4;
      } while (bVar20 != 0);
    }
    uVar3 = PF_PART8(str_10021c10, 8);
    uVar2 = PF_PART8(str_10021c10, 0);
    pcVar19 = (char *)(iVar6 + 0x261);
    *(undefined1 *)(iVar6 + 0x78 + uVar4) = 0;
    *(int *)(iVar6 + 0x25c) = param_2;
    *(undefined8 *)pcVar19 = uVar2;
    *(undefined8 *)(iVar6 + 0x269) = uVar3;
    uVar7 = strlen(pcVar19);
    if (uVar7 >> 0xb == 0) {
      if ((uVar7 == 0x7ff) || (bVar20 = *param_1, bVar20 == 0)) {
        uVar10 = uVar7;
      }
      else {
        do {
          param_1 = param_1 + 1;
          uVar10 = uVar7 + 1;
          pcVar19[uVar7] = bVar20;
          if (0x7fd < uVar7) break;
          bVar20 = *param_1;
          uVar7 = uVar10;
        } while (bVar20 != 0);
      }
      pcVar19[uVar10] = '\0';
    }
    pcVar19 = (char *)(iVar5 * 0xd9c + DAT_1002430c + 0x261);
    uVar7 = strlen(pcVar19);
    if (uVar7 >> 0xb == 0) {
      uVar4 = 0x7ff;
      if (uVar7 != 0x7ff) {
        cVar17 = '\n';
        pcVar8 = str_10023e45;
        do {
          pcVar8 = pcVar8 + 1;
          uVar4 = uVar7 + 1;
          pcVar19[uVar7] = cVar17;
          if (0x7fd < uVar7) break;
          cVar17 = *pcVar8;
          uVar7 = uVar4;
        } while (cVar17 != '\0');
      }
      pcVar19[uVar4] = '\0';
    }
  }
  return;
}

#undef DAT_10021c00
#undef DAT_10021c08
#undef DAT_10023774
#undef DAT_1002430c
#undef DAT_10024910
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef Ram40010800
#undef Ram40010804
#undef Ram40010808
#undef UINT_40010890
#undef UINT_400108e8
#undef str_10021c10
#undef str_10023e45
#undef iStack_60
#undef pbStack_5c
#undef uStack_50
#undef local_64
#undef local_58
#undef local_48

#undef DAT_10024138
#define DAT_10024138 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0xb30U)))
#undef DAT_10024140
#define DAT_10024140 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0xb38U)))
#undef DAT_100242dc
#define DAT_100242dc (*(uint32_t *)(((uintptr_t)pf_module_state + 0xcd4U)))
#undef DAT_100242e4
#define DAT_100242e4 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0xcdcU)))
#undef DAT_1002430c
#define DAT_1002430c (*(int *)(((uintptr_t)pf_module_state + 0xd04U)))
#undef DAT_10024910
#define DAT_10024910 (*(int *)(((uintptr_t)pf_module_state + 0x1308U)))
#undef DAT_10024914
#define DAT_10024914 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x130cU)))
#undef DAT_10027414
#define DAT_10027414 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3e0cU)))
#undef DAT_10027418
#define DAT_10027418 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x3e10U)))
#undef DAT_100290dc
#define DAT_100290dc (*(uint *)(((uintptr_t)pf_module_state + 0x5ad4U)))
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
 * Address: 0x10021c20
 */

void recovered_10021c20(undefined1 *param_1,int param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  undefined1 *puVar2;
  code *pcVar3;
  undefined8 *puVar4;
  void *pvVar5;
  int iVar6;
  undefined4 *puVar7;
  char *dst;
  undefined8 *puVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int *piVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  bool bVar17;

  if ((undefined1 *)0x13 < param_1) {
    return;
  }
  if (*(char *)(DAT_1002430c + (int)param_1 * 0xd9c) == '\x01') {
    if (DAT_10024138 == param_1) {
      DAT_10024138 = (undefined1 *)0xffffffff;
    }
    if (DAT_10024140 == param_1) {
      DAT_10024140 = (undefined1 *)0xffffffff;
    }
    if (DAT_100242e4 == param_1) {
      DAT_100242e4 = (undefined1 *)0xffffffff;
    }
    puVar2 = &DAT_10027414;
    if (DAT_10027414 == '\x01') {
      puVar2 = DAT_10027418;
    }
    if (DAT_10027414 == '\x01' && puVar2 == param_1) {
      memset(&DAT_10027414,0,0x1fc);
    }
    if (((param_2 != 0) &&
        (iVar6 = (int)param_1 * 0xd9c + DAT_1002430c, *(int *)(iVar6 + 0x10) == 6)) &&
       (*(uint *)(iVar6 + 0xb1c) != 0)) {
      terror_ui_window_request_close(*(uint *)(iVar6 + 0xb1c),*(int *)(iVar6 + 0x58),*(int *)(iVar6 + 0x5c));
    }
    pvVar5 = *(void **)((int)param_1 * 0xd9c + DAT_1002430c + 0xaec);
    if (((pvVar5 != (void *)0x0) && (iVar6 = Ram40010800, iVar6 == 0x50414d57)) &&
       (iVar6 = Ram40010804, iVar6 != 0)) {
      uVar12 = Ram40010808;
      bVar17 = 0xb < uVar12;
      if (bVar17) {
        uVar12 = Ram40010808;
      }
      if ((bVar17 && 0x53 < uVar12) && (pcVar3 = (code *)UINT_40010850, pcVar3 != (code *)0x0)) {
        (*pcVar3)(pvVar5);
      }
    }
    iVar6 = (int)param_1 * 0xd9c + DAT_1002430c;
    puVar7 = (undefined4 *)(iVar6 + 0xb04);
    pvVar5 = (void *)*puVar7;
    if ((((*(int *)(iVar6 + 0xb08) == 0) && (pvVar5 != (void *)0x0)) &&
        (iVar6 = Ram40010800, iVar6 == 0x50414d57)) && (iVar6 = Ram40010804, iVar6 != 0)) {
      uVar12 = Ram40010808;
      bVar17 = 0xb < uVar12;
      if (bVar17) {
        uVar12 = Ram40010808;
      }
      if ((bVar17 && 0x53 < uVar12) && (pcVar3 = (code *)UINT_40010850, pcVar3 != (code *)0x0)) {
        (*pcVar3)(pvVar5);
      }
    }
    iVar6 = 0;
    memset(puVar7,0,0x18);
    puVar4 = DAT_10024914;
    if (0 < (int)DAT_100290dc) {
      uVar10 = 0;
      puVar8 = DAT_10024914;
      uVar12 = DAT_100290dc;
LAB_10021e3c:
      uVar12 = uVar12 - 1;
      if (*(undefined1 **)puVar8 != param_1) goto code_r0x10021e48;
      uVar15 = DAT_100290dc - 1;
      uVar16 = uVar15 - uVar10;
      if (uVar16 == 0 || (int)uVar15 < (int)uVar10) {
        DAT_100242dc = 0xffffffff;
        if (DAT_100290dc != 1) goto LAB_10021ef4;
      }
      else {
        if (uVar16 < 4) goto LAB_10021ea0;
        uVar10 = (uVar12 & 0xfffffffc) + uVar10;
        uVar12 = uVar16 & 0xfffffffc;
        do {
          uVar12 = uVar12 - 4;
          *puVar8 = *(undefined8 *)((int)puVar8 + 4);
          puVar8[1] = *(undefined8 *)((int)puVar8 + 0xc);
          puVar8 = puVar8 + 2;
        } while (uVar12 != 0);
        if (uVar16 != (uVar16 & 0xfffffffc)) {
LAB_10021ea0:
          iVar9 = ~uVar10 + DAT_100290dc;
          puVar7 = (undefined4 *)((int)puVar4 + uVar10 * 4);
          do {
            iVar9 = iVar9 + -1;
            *puVar7 = puVar7[1];
            puVar7 = puVar7 + 1;
          } while (iVar9 != 0);
        }
LAB_10021ef4:
        DAT_100242dc = *(undefined4 *)((int)puVar4 + DAT_100290dc * 4 + -8);
      }
      DAT_100290dc = uVar15;
    }
LAB_10021f0c:
    memset((void *)((int)param_1 * 0xd9c + DAT_1002430c),0,0xd9c);
    iVar9 = DAT_10024910;
    do {
      dst = (char *)(iVar9 + iVar6 * 300);
      cVar1 = *dst;
      bVar17 = cVar1 == '\x01';
      if (bVar17) {
        cVar1 = dst[1];
      }
      if (bVar17 && cVar1 == '\0') {
        iVar14 = 0x14;
        piVar13 = (int *)(DAT_1002430c + 0x14);
        iVar11 = 0;
        do {
          if (((char)piVar13[-5] == '\x01') && (*piVar13 == iVar6)) {
            iVar11 = iVar11 + 1;
          }
          piVar13 = piVar13 + 0x367;
          iVar14 = iVar14 + -1;
        } while (iVar14 != 0);
        if (iVar11 == 0) {
          memset(dst,0,300);
          iVar9 = DAT_10024910;
        }
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 != 0x12);
  }
  return;
code_r0x10021e48:
  uVar10 = uVar10 + 1;
  puVar8 = (undefined8 *)((int)puVar8 + 4);
  if (DAT_100290dc == uVar10) goto LAB_10021f0c;
  goto LAB_10021e3c;
}

#undef DAT_10024138
#undef DAT_10024140
#undef DAT_100242dc
#undef DAT_100242e4
#undef DAT_1002430c
#undef DAT_10024910
#undef DAT_10024914
#undef DAT_10027414
#undef DAT_10027418
#undef DAT_100290dc
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef Ram40010800
#undef Ram40010804
#undef Ram40010808
#undef UINT_40010850

#undef DAT_100290e4
#define DAT_100290e4 (*(int *)(((uintptr_t)pf_module_state + 0x5adcU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1002201c
 */

int recovered_1002201c(int param_1,int param_2,int param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  bool bVar10;

  iVar6 = -0x84;
  iVar8 = 0xbc;
  if (param_1 == 0) {
    iVar2 = -0x22;
    iVar7 = 0x24;
    iVar5 = 0xbc;
    iVar4 = -0x84;
  }
  else {
    iVar7 = *(int *)(param_1 + 0x58) + 0x36;
    iVar5 = *(int *)(param_1 + 0x5c) + 0xe2;
    iVar4 = *(int *)(param_1 + 0x5c) + *(int *)(param_1 + 100) + -0x92;
    iVar2 = *(int *)(param_1 + 0x60) + -0x46;
  }
  iVar3 = iVar5 + 0x32;
  if (iVar5 + 0x32 < iVar4) {
    iVar3 = iVar4;
  }
  iVar4 = (iVar3 - iVar5) + -0xc;
  iVar3 = (iVar3 - iVar5) + -0x20;
  iVar1 = iVar2 + -0x18;
  if (iVar4 < 0x26) {
    iVar3 = 0x12;
  }
  if (iVar2 < 0x19) {
    iVar1 = 1;
  }
  if (param_1 != 0) {
    iVar8 = *(int *)(param_1 + 0x5c) + 0xe2;
    iVar4 = *(int *)(param_1 + 0x5c) + *(int *)(param_1 + 100);
  }
  if (param_1 != 0) {
    iVar6 = iVar4 + -0x92;
  }
  iVar2 = iVar8 + 0x32;
  if (iVar8 + 0x32 < iVar6) {
    iVar2 = iVar6;
  }
  if (param_1 != 0) {
    bVar10 = SBORROW4(iVar7,param_2);
    iVar6 = iVar7 - param_2;
    bVar9 = iVar7 == param_2;
    if (iVar7 <= param_2) {
      iVar4 = iVar5 + 0x1f;
      bVar10 = SBORROW4(iVar4,param_3);
      iVar6 = iVar4 - param_3;
      bVar9 = iVar4 == param_3;
    }
    if (bVar9 || iVar6 < 0 != bVar10) {
      iVar1 = iVar1 + iVar7;
      bVar10 = SBORROW4(iVar1,param_2);
      iVar6 = iVar1 - param_2;
      bVar9 = iVar1 == param_2;
      if (param_2 < iVar1) {
        iVar3 = iVar3 + iVar4;
        bVar10 = SBORROW4(iVar3,param_3);
        iVar6 = iVar3 - param_3;
        bVar9 = iVar3 == param_3;
      }
      if (!bVar9 && iVar6 < 0 == bVar10) {
        iVar7 = 0;
        iVar5 = *(int *)(param_1 + 0xaf8);
        iVar6 = DAT_100290e4;
        if (DAT_100290e4 < iVar5) {
          iVar6 = iVar5;
        }
        while ((iVar5 - iVar6) + iVar7 != 0) {
          if ((param_3 < iVar4 + 0x12) && (iVar4 <= param_3)) {
            return iVar5 + iVar7;
          }
          if ((iVar2 - iVar8) + -0xc < 0x26) {
            return -1;
          }
          iVar7 = iVar7 + 1;
          iVar4 = iVar4 + 0x12;
          if (((iVar2 - iVar8) + -0x20) / 0x12 <= iVar7) {
            return -1;
          }
        }
      }
    }
  }
  return -1;
}

#undef DAT_100290e4

#undef DAT_100290e4
#define DAT_100290e4 (*(uint *)(((uintptr_t)pf_module_state + 0x5adcU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1002217c
 */

void recovered_1002217c(int param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;

  uVar1 = DAT_100290e4;
  if (param_1 == 0) {
    iVar3 = -0x84;
    iVar6 = 0xbc;
  }
  else {
    iVar6 = *(int *)(param_1 + 0x5c) + 0xe2;
    iVar3 = *(int *)(param_1 + 0x5c) + *(int *)(param_1 + 100) + -0x92;
  }
  iVar4 = iVar6 + 0x32;
  if (iVar6 + 0x32 < iVar3) {
    iVar4 = iVar3;
  }
  iVar3 = ((iVar4 - iVar6) + -0x20) / 0x12;
  if (iVar3 < 2) {
    iVar3 = 1;
  }
  if ((iVar4 - iVar6) + -0xc < 0x26) {
    iVar3 = 1;
  }
  if (param_1 == 0) {
    return;
  }
  if ((int)DAT_100290e4 <= (int)param_2) {
    return;
  }
  uVar7 = *(uint *)(param_1 + 0xaf8);
  *(undefined1 *)(param_1 + 0xafc) = 1;
  *(uint *)(param_1 + 0xaf4) = param_2;
  uVar2 = param_2;
  if ((int)uVar7 <= (int)param_2) {
    uVar2 = uVar7;
    if ((int)param_2 < (int)(uVar7 + iVar3)) goto LAB_1002223c;
    uVar2 = (param_2 - iVar3) + 1;
  }
  *(uint *)(param_1 + 0xaf8) = uVar2;
LAB_1002223c:
  iVar6 = *(int *)(param_1 + 0x5c);
  iVar4 = iVar6 + *(int *)(param_1 + 100) + -0x92;
  iVar3 = iVar6 + 0x114;
  if (iVar6 + 0x114 < iVar4) {
    iVar3 = iVar4;
  }
  uVar7 = ((iVar3 - iVar6) + -0x102) / 0x12;
  if ((int)uVar7 < 2) {
    uVar7 = 1;
  }
  if ((iVar3 - iVar6) + -0xee < 0x26) {
    uVar7 = 1;
  }
  uVar5 = uVar1 - uVar7;
  if (uVar1 < uVar7) {
    uVar5 = 0;
  }
  if (uVar1 == 0) {
    *(undefined1 *)(param_1 + 0xafc) = 0;
    *(undefined4 *)(param_1 + 0xaf8) = 0;
    *(undefined4 *)(param_1 + 0xaf4) = 0;
    return;
  }
  if (uVar1 <= param_2) {
    *(undefined1 *)(param_1 + 0xafc) = 1;
    *(undefined4 *)(param_1 + 0xaf4) = 0;
  }
  if ((int)uVar2 < 0) {
    *(undefined4 *)(param_1 + 0xaf8) = 0;
    return;
  }
  uVar5 = uVar5 & ~((int)uVar5 >> 0x1f);
  if (uVar5 < uVar2) {
    *(uint *)(param_1 + 0xaf8) = uVar5;
  }
  return;
}

#undef DAT_100290e4

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100222ec
 */

void recovered_100222ec(int param_1,int param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int extraout_r2 = 0;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  bool bVar10;

  if (param_1 == 0) {
    return;
  }
  iVar8 = *(int *)(param_1 + 0x5c);
  iVar1 = *(int *)(param_1 + 100);
  iVar9 = 1;
  iVar7 = -1;
  uVar5 = iVar1 - 0x6a;
  iVar2 = (int)(((ulonglong)uVar5 << 0x20) + (longlong)(int)uVar5 * -0x22983759 >> 0x20);
  if (0x49 < (int)uVar5) {
    iVar9 = (iVar2 >> 6) - (iVar2 >> 0x1f);
  }
  uVar3 = *(int *)(param_1 + 0x60) - 0x26;
  iVar2 = (int)(((ulonglong)uVar3 << 0x20) + (longlong)(int)uVar3 * -0x2df2df2d >> 0x20);
  iVar4 = (iVar2 >> 6) - (iVar2 >> 0x1f);
  iVar2 = 1;
  if (1 < iVar4) {
    iVar2 = iVar4;
  }
  iVar6 = iVar1 + -0x88;
  iVar4 = ((int)((ulonglong)((longlong)(int)uVar5 * 0x22983759) >> 0x20) - iVar1) + 0x6a;
  if (0x49 < (int)uVar5) {
    iVar7 = (iVar4 >> 6) - (iVar4 >> 0x1f);
  }
  iVar4 = *(int *)(param_1 + 0xaf0) + 2;
  uVar5 = iVar2 * iVar7 + iVar4;
  if (iVar1 + -0x84 < 0x16) {
    iVar6 = 0x12;
  }
  iVar1 = iVar6;
  if (((-2 < *(int *)(param_1 + 0xaf0)) && (iVar2 * iVar9 < iVar4)) && (0 < (int)uVar5)) {
    iVar1 = recovered_10000b48(iVar2 * iVar9 * iVar6,iVar4);
    if (iVar1 < 0x13) {
      iVar1 = 0x12;
    }
    iVar4 = extraout_r2;
    if (iVar6 <= iVar1) {
      iVar1 = iVar6;
    }
  }
  bVar10 = uVar5 == 1;
  if (0 < (int)uVar5) {
    iVar4 = iVar6 - iVar1;
  }
  iVar2 = uVar5 - 1;
  if ((int)uVar5 >= 1) {
    bVar10 = iVar4 == 0;
    iVar2 = iVar4;
  }
  if (bVar10 || iVar2 < 0 != ((int)uVar5 < 1 && SBORROW4(uVar5,1))) {
    *(undefined4 *)(param_1 + 0xaf8) = 0;
  }
  else {
    uVar3 = recovered_10000b48((((param_2 - iVar8) - iVar1 / 2) + -0x5e) * uVar5,iVar4);
    if ((int)uVar3 <= (int)uVar5) {
      uVar5 = uVar3 & ~((int)uVar3 >> 0x1f);
    }
    *(uint *)(param_1 + 0xaf8) = uVar5;
  }
  return;
}


#undef DAT_10023f63
#define DAT_10023f63 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x95bU)))
#undef DAT_10023f66
#define DAT_10023f66 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x95eU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10022430
 */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

/* Pooka's Free Software License. Scalar Gregorian timestamp conversion. */
undefined4 recovered_10022430(uint year,uint month,uint day,uint hour,uint minute,uint second,longlong *output)
{
    static const unsigned char lengths[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    if (!output || year<1970 || month<1 || month>12 || !day || hour>23 || minute>59 || second>59) return 0;
    uint leap=year%4==0 && (year%100!=0 || year%400==0);
    if(day>lengths[month-1]+(month==2 && leap))return 0;
    uint64_t days=day-1;
    for(uint y=1970;y<year;++y)days+=365+(y%4==0 && (y%100!=0 || y%400==0));
    for(uint m=1;m<month;++m)days+=lengths[m-1]+(m==2 && leap);
    uint64_t midnight=days*86400;
    *output=midnight+(uint64_t)hour*3600+minute*60+second;
    return 1;
}

#undef DAT_10023f63
#undef DAT_10023f66

#undef DAT_10022b70
#define DAT_10022b70 (*(uint64_t *)(0x10022b70U))
#undef DAT_10022b78
#define DAT_10022b78 (*(uint64_t *)(0x10022b78U))
#undef DAT_10023f5c
#define DAT_10023f5c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x954U)))
#undef DAT_100240cc
#define DAT_100240cc (*(uint8_t *)(((uintptr_t)pf_module_state + 0xac4U)))
#undef DAT_100240e8
#define DAT_100240e8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0xae0U)))
#undef DAT_10028fe4
#define DAT_10028fe4 (*(int *)(((uintptr_t)pf_module_state + 0x59dcU)))
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
#undef UINT_40010968
#define UINT_40010968 (*(uint *)(0x40010968U))
#define local_4c (*(uint *)(frame + 20))
#define local_48 (*(int *)(frame + 24))
#define local_44 (*(uint *)(frame + 28))
#define local_40 (*(uint *)(frame + 32))
#define local_3c (*(uint *)(frame + 36))
#define local_38 (*(uint *)(frame + 40))
#define local_34 (*(int *)(frame + 44))
#define local_2d (*(char (*)[13])(frame + 51))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10022730
 */

void recovered_10022730(char *param_1)

{
  unsigned char frame[128] __attribute__((aligned(16))) = {0};

  longlong lVar1;
  code *pcVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  uint uVar7;
  char *pcVar8;
  ulong uVar9;
  uint uVar10;
  uint uVar11;
  char cVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  bool bVar16;
  ulonglong uVar17;
  ulonglong uVar18;

  if (param_1 == (char *)0x0) {
    return;
  }
  memset(&local_4c,0,0x18);
  iVar14 = Ram40010800;
  if ((iVar14 == 0x50414d57) && (iVar14 = Ram40010804, iVar14 != 0)) {
    uVar4 = Ram40010808;
    bVar16 = 0xb < uVar4;
    if (bVar16) {
      uVar4 = Ram40010808;
    }
    if (((bVar16 && 0x16b < uVar4) && (pcVar2 = (code *)UINT_40010968, pcVar2 != (code *)0x0)) &&
       (uVar4 = (*pcVar2)(&local_4c), uVar4 != 0)) {
      memset(&local_4c,0,0x1c);
      lVar1 = (longlong)DAT_10028fe4 * 0x3c + CONCAT44(local_40,local_44);
      iVar14 = (int)lVar1;
      uVar4 = (uint)((ulonglong)lVar1 >> 0x20);
      if (lVar1 < 0) {
        iVar14 = 0;
      }
      uVar17 = recovered_10000c20(CONCAT44(uVar4 & ~((int)uVar4 >> 0x1f),iVar14),0x15180);
      uVar13 = 0x7b2;
      uVar5 = iVar14 + (int)uVar17 * -0x15180;
      uVar4 = 0x7b1;
      uVar18 = uVar17;
      do {
        uVar7 = (uint)(uVar18 >> 0x20);
        uVar10 = (uint)uVar18;
        uVar15 = uVar4 + 1;
        uVar11 = 0x16d;
        if (((uVar15 & 3) == 0) &&
           (uVar11 = 0x16d,
           uVar4 + (uVar13 / 100) * -100 != -1 || uVar4 + (uVar13 / 400) * -400 == -1)) {
          uVar11 = 0x16e;
        }
        uVar13 = uVar13 + 1;
        uVar18 = CONCAT44(uVar7 - (uVar11 > uVar10),uVar10 - uVar11);
        uVar4 = uVar15;
      } while (uVar7 != 0 || uVar7 < (uVar11 <= uVar10));
      if (uVar7 == 0 && (0x1e < uVar10) <= uVar7) {
        local_48 = 1;
        local_44 = uVar10;
      }
      else {
        local_48 = 2;
        uVar4 = 0x1d;
        if ((uVar15 & 3) != 0 || (uVar15 / 100) * 100 == uVar15 && (uVar15 / 400) * 400 != uVar15) {
          uVar4 = 0x1c;
        }
        local_44 = uVar10 - 0x1f;
        uVar7 = uVar7 - (uVar10 < 0x1f);
        uVar13 = local_44 - uVar4;
        uVar11 = uVar7 - (uVar4 > local_44);
        if (uVar7 != 0 || uVar7 < (uVar4 <= local_44)) {
          if (uVar11 == 0 && (0x1e < uVar13) <= uVar11) {
            local_48 = 3;
            local_44 = uVar13;
          }
          else {
            local_44 = uVar13 - 0x1f;
            local_48 = 4;
            if (uVar11 != uVar13 < 0x1f || uVar11 - (uVar13 < 0x1f) < (uint)(0x1d < local_44)) {
              local_44 = uVar13 - 0x3d;
              local_48 = 5;
              if (uVar11 != uVar13 < 0x3d || uVar11 - (uVar13 < 0x3d) < (uint)(0x1e < local_44)) {
                local_44 = uVar13 - 0x5c;
                local_48 = 6;
                if (uVar11 != uVar13 < 0x5c || uVar11 - (uVar13 < 0x5c) < (uint)(0x1d < local_44)) {
                  local_44 = uVar13 - 0x7a;
                  local_48 = 7;
                  if (uVar11 != uVar13 < 0x7a || uVar11 - (uVar13 < 0x7a) < (uint)(0x1e < local_44))
                  {
                    local_44 = uVar13 - 0x99;
                    local_48 = 8;
                    if (uVar11 != uVar13 < 0x99 ||
                        uVar11 - (uVar13 < 0x99) < (uint)(0x1e < local_44)) {
                      local_44 = uVar13 - 0xb8;
                      local_48 = 9;
                      if (uVar11 != uVar13 < 0xb8 ||
                          uVar11 - (uVar13 < 0xb8) < (uint)(0x1d < local_44)) {
                        local_44 = uVar13 - 0xd6;
                        local_48 = 10;
                        if (uVar11 != uVar13 < 0xd6 ||
                            uVar11 - (uVar13 < 0xd6) < (uint)(0x1e < local_44)) {
                          local_44 = uVar13 - 0xf5;
                          local_48 = 0xb;
                          if (uVar11 != uVar13 < 0xf5 ||
                              uVar11 - (uVar13 < 0xf5) < (uint)(0x1d < local_44)) {
                            local_44 = uVar13 - 0x113;
                            local_48 = 0xd;
                            if (uVar11 == uVar13 < 0x113 &&
                                (uint)(0x1e < local_44) <= uVar11 - (uVar13 < 0x113)) {
                              local_48 = 0xc;
                            }
                            else {
                              local_44 = uVar13 - 0x132;
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
        }
      }
      local_44 = local_44 + 1;
      *param_1 = '\0';
      uVar18 = recovered_10000d04(uVar17 + 4,7);
      local_34 = (int)uVar18;
      pcVar8 = *(char **)(&DAT_100240cc + local_34 * 4);
      local_3c = uVar5 / 0x3c;
      local_38 = uVar5 + (local_3c * 0x10 - uVar5 / 0x3c) * -4;
      local_3c = local_3c + ((local_3c / 0x3c) * 0x10 - local_3c / 0x3c) * -4;
      uVar4 = (uVar5 / 0xe10) % 0xc;
      if (uVar4 == 0) {
        uVar4 = 0xc;
      }
      local_4c = uVar15;
      local_40 = uVar5 / 0xe10;
      uVar6 = strlen(param_1);
      if (uVar6 < 0x50) {
        if ((uVar6 == 0x4f) || (cVar12 = *pcVar8, cVar12 == '\0')) {
          uVar9 = uVar6;
        }
        else {
          do {
            pcVar8 = pcVar8 + 1;
            uVar9 = uVar6 + 1;
            param_1[uVar6] = cVar12;
            if (0x4d < uVar6) break;
            cVar12 = *pcVar8;
            uVar6 = uVar9;
          } while (cVar12 != '\0');
        }
        param_1[uVar9] = '\0';
      }
      uVar6 = strlen(param_1);
      if (uVar6 < 0x50) {
        iVar14 = 0x4f;
        if (uVar6 != 0x4f) {
          param_1[uVar6] = ' ';
          iVar14 = uVar6 + 1;
        }
        param_1[iVar14] = '\0';
      }
      uVar5 = local_48 - 1;
      if (0xb < uVar5) {
        uVar5 = 0;
      }
      pcVar8 = (char *)(&DAT_100240e8)[uVar5];
      uVar6 = strlen(param_1);
      if (uVar6 < 0x50) {
        if ((uVar6 == 0x4f) || (cVar12 = *pcVar8, cVar12 == '\0')) {
          uVar9 = uVar6;
        }
        else {
          do {
            pcVar8 = pcVar8 + 1;
            uVar9 = uVar6 + 1;
            param_1[uVar6] = cVar12;
            if (0x4d < uVar6) break;
            cVar12 = *pcVar8;
            uVar6 = uVar9;
          } while (cVar12 != '\0');
        }
        param_1[uVar9] = '\0';
      }
      uVar6 = strlen(param_1);
      if (uVar6 < 0x50) {
        iVar14 = 0x4f;
        if (uVar6 != 0x4f) {
          param_1[uVar6] = ' ';
          iVar14 = uVar6 + 1;
        }
        param_1[iVar14] = '\0';
      }
      recovered_10018f20(param_1,0x50,local_44);
      uVar6 = strlen(param_1);
      if (uVar6 < 0x50) {
        iVar14 = 0x4f;
        if (uVar6 != 0x4f) {
          param_1[uVar6] = ' ';
          iVar14 = uVar6 + 1;
        }
        param_1[iVar14] = '\0';
      }
      recovered_10018f20(param_1,0x50,uVar4);
      uVar6 = strlen(param_1);
      if (uVar6 < 0x50) {
        iVar14 = 0x4f;
        if (uVar6 != 0x4f) {
          param_1[uVar6] = ':';
          iVar14 = uVar6 + 1;
        }
        param_1[iVar14] = '\0';
      }
      if (local_3c == 0) {
        local_2d[1] = 0x30;
LAB_10022d24:
        uVar13 = 2;
        local_2d[2] = 0x30;
      }
      else {
        uVar4 = local_3c;
        uVar5 = 0;
        do {
          local_2d[uVar5 + 1] = (char)uVar4 + (char)(uVar4 / 10) * -10 | 0x30;
          uVar13 = uVar5 + 1;
          if (10 < uVar5) break;
          bVar16 = 9 < uVar4;
          uVar4 = uVar4 / 10;
          uVar5 = uVar13;
        } while (bVar16);
        if (uVar13 == 1) goto LAB_10022d24;
      }
      do {
        uVar4 = uVar13 - 1;
        local_2d[0] = '\0';
        cVar12 = local_2d[uVar13];
        uVar6 = strlen(param_1);
        if (uVar6 < 0x50) {
          if ((cVar12 != '\0') && (uVar6 != 0x4f)) {
            uVar9 = uVar6;
            pcVar8 = local_2d;
            do {
              uVar6 = uVar9 + 1;
              param_1[uVar9] = cVar12;
              if (0x4d < uVar9) break;
              cVar12 = *pcVar8;
              uVar9 = uVar6;
              pcVar8 = pcVar8 + 1;
            } while (cVar12 != '\0');
          }
          param_1[uVar6] = '\0';
        }
        uVar13 = uVar4;
      } while (uVar4 != 0);
      uVar6 = strlen(param_1);
      if (uVar6 < 0x50) {
        iVar14 = 0x4f;
        if (uVar6 != 0x4f) {
          param_1[uVar6] = ':';
          iVar14 = uVar6 + 1;
        }
        param_1[iVar14] = '\0';
      }
      if (local_38 == 0) {
        local_2d[1] = 0x30;
LAB_10022e2c:
        uVar13 = 2;
        local_2d[2] = 0x30;
      }
      else {
        uVar4 = local_38;
        uVar5 = 0;
        do {
          uVar13 = uVar5 + 1;
          local_2d[uVar5 + 1] = (char)uVar4 + (char)(uVar4 / 10) * -10 | 0x30;
          if (10 < uVar5) break;
          bVar16 = 9 < uVar4;
          uVar4 = uVar4 / 10;
          uVar5 = uVar13;
        } while (bVar16);
        if (uVar13 == 1) goto LAB_10022e2c;
      }
      do {
        uVar4 = uVar13 - 1;
        local_2d[0] = '\0';
        cVar12 = local_2d[uVar13];
        uVar6 = strlen(param_1);
        if (uVar6 < 0x50) {
          if ((cVar12 != '\0') && (uVar6 != 0x4f)) {
            uVar9 = uVar6;
            pcVar8 = local_2d;
            do {
              uVar6 = uVar9 + 1;
              param_1[uVar9] = cVar12;
              if (0x4d < uVar9) break;
              cVar12 = *pcVar8;
              uVar9 = uVar6;
              pcVar8 = pcVar8 + 1;
            } while (cVar12 != '\0');
          }
          param_1[uVar6] = '\0';
        }
        uVar13 = uVar4;
      } while (uVar4 != 0);
      pcVar8 = (char *)((uintptr_t)pf_module_state + 0x957U);
      if (local_40 < 0xc) {
        pcVar8 = &DAT_10023f5c;
      }
      uVar9 = strlen(param_1);
      if (0x4f < uVar9) {
        return;
      }
      if ((uVar9 == 0x4f) || (cVar12 = *pcVar8, cVar12 == '\0')) {
        uVar6 = uVar9;
      }
      else {
        do {
          pcVar8 = pcVar8 + 1;
          uVar6 = uVar9 + 1;
          param_1[uVar9] = cVar12;
          if (0x4d < uVar9) break;
          cVar12 = *pcVar8;
          uVar9 = uVar6;
        } while (cVar12 != '\0');
      }
      goto LAB_100227a8;
    }
  }
  uVar3 = (0x656c62616c696176U);
  *(undefined8 *)param_1 = (0x616e7520656d6954U);
  *(undefined8 *)(param_1 + 8) = uVar3;
  uVar6 = 0x10;
LAB_100227a8:
  param_1[uVar6] = '\0';
  return;
}

#undef DAT_10022b70
#undef DAT_10022b78
#undef DAT_10023f5c
#undef DAT_100240cc
#undef DAT_100240e8
#undef DAT_10028fe4
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef Ram40010800
#undef Ram40010804
#undef Ram40010808
#undef UINT_40010968
#undef local_4c
#undef local_48
#undef local_44
#undef local_40
#undef local_3c
#undef local_38
#undef local_34
#undef local_2d

#undef DAT_10023240
#define DAT_10023240 (*(uint64_t *)(0x10023240U))
#undef DAT_10023248
#define DAT_10023248 (*(uint64_t *)(0x10023248U))
#undef DAT_10023250
#define DAT_10023250 (*(uint64_t *)(0x10023250U))
#undef DAT_10023258
#define DAT_10023258 (*(uint64_t *)(0x10023258U))
#undef DAT_10023260
#define DAT_10023260 (*(uint64_t *)(0x10023260U))
#undef DAT_10023268
#define DAT_10023268 (*(uint64_t *)(0x10023268U))
#undef DAT_10023270
#define DAT_10023270 (*(uint64_t *)(0x10023270U))
#undef DAT_10023278
#define DAT_10023278 (*(uint64_t *)(0x10023278U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10022f20
 */

void recovered_10022f20(int param_1,uint *param_2,uint param_3,uint param_4,int param_5,int param_6)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint128 auVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined8 *puVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  byte *pbVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  undefined2 *puVar16;
  uint *puVar17;
  int iVar18;
  int unaff_r9;
  uint uVar19;
  uint uVar20;
  undefined8 *puVar21;
  bool bVar22;
  uint128 auVar23;
  uint128 auVar24;
  uint128 auVar25;
  uint128 auVar26;
  uint128 auVar27;
  uint128 auVar28;
  undefined8 uVar29;
  uint128 auVar30;
  undefined8 uVar31;
  uint128 auVar32;
  uint128 auVar33;

  uVar20 = 0;
  uVar13 = *(int *)(param_1 + 0x1c) - 0xf;
  if ((uVar13 < 0x12) && (unaff_r9 = 0x20203, (1 << (uVar13 & 0xff) & 0x20203U) != 0)) {
    uVar20 = *(int *)(param_1 + 0x1c) + 7U >> 3;
  }
  if (param_2[2] != 0) {
    uVar10 = *param_2;
    uVar14 = uVar10;
    if (0 < (int)uVar10) {
      uVar14 = param_2[1];
      uVar13 = uVar14;
    }
    if (0 < (int)uVar14) {
      uVar14 = *(uint *)(param_1 + 0x14);
      bVar22 = uVar10 == uVar14;
      if (bVar22) {
        uVar14 = *(uint *)(param_1 + 0x18);
      }
      if ((bVar22 && uVar13 == uVar14) && (*(int *)(param_1 + 0x38) != 0 && uVar20 != 0)) {
        iVar6 = param_5;
        if (0 < param_5) {
          iVar6 = param_6;
          unaff_r9 = param_6;
        }
        if (0 < iVar6) {
          uVar15 = param_3 + param_5;
          uVar19 = param_4 + unaff_r9;
          uVar14 = uVar10;
          if ((int)uVar15 < (int)uVar10) {
            uVar14 = uVar15;
          }
          if ((int)uVar15 < 0) {
            uVar14 = 0;
          }
          uVar15 = uVar13;
          if ((int)uVar19 < (int)uVar13) {
            uVar15 = uVar19;
          }
          if ((int)uVar19 < 0) {
            uVar15 = 0;
          }
          if ((int)param_3 < (int)uVar10) {
            uVar10 = param_3;
          }
          if ((int)param_3 < 0) {
            uVar10 = 0;
          }
          if ((int)param_4 < (int)uVar13) {
            uVar13 = param_4;
          }
          if ((int)param_4 < 0) {
            uVar13 = 0;
          }
          if ((((int)uVar10 < (int)uVar14) && ((int)uVar13 < (int)uVar15)) &&
             (iVar6 = uVar14 - uVar10, 0 < iVar6)) {
            PF_PART8(auVar24, 8) = SUB168((uint128)0x0,8);
            PF_PART8(auVar24, 0) = 0x1000000010;
            auVar24 = (auVar24 << 64 | auVar24);
            iVar18 = param_1 + 4;
            uVar14 = uVar20 & 0xfffffff0;
            do {
              iVar4 = *(int *)(param_1 + 0x10);
              iVar11 = *(int *)(param_1 + 0x38);
              iVar3 = iVar11 + uVar10 * uVar20;
              iVar7 = param_2[2] + (*param_2 * uVar13 + uVar10) * 4;
              if (uVar20 == 4) {
                pbVar12 = (byte *)(iVar7 + 2);
                iVar7 = iVar6;
                puVar17 = (uint *)(iVar4 * uVar13 + iVar3);
                do {
                  uVar19 = recovered_1001ae80(iVar18,(uint)pbVar12[-2],(uint)pbVar12[-1],
                                              (uint)*pbVar12);
                  *puVar17 = uVar19;
                  pbVar12 = pbVar12 + 4;
                  iVar7 = iVar7 + -1;
                  puVar17 = puVar17 + 1;
                } while (iVar7 != 0);
              }
              else if (uVar20 == 2) {
                pbVar12 = (byte *)(iVar7 + 2);
                iVar7 = iVar6;
                puVar16 = (undefined2 *)(iVar4 * uVar13 + iVar3);
                do {
                  uVar19 = recovered_1001ae80(iVar18,(uint)pbVar12[-2],(uint)pbVar12[-1],
                                              (uint)*pbVar12);
                  *puVar16 = (short)uVar19;
                  pbVar12 = pbVar12 + 4;
                  iVar7 = iVar7 + -1;
                  puVar16 = puVar16 + 1;
                } while (iVar7 != 0);
              }
              else {
                puVar21 = (undefined8 *)(iVar4 * uVar13 + iVar3);
                iVar3 = 0;
                do {
                  pbVar12 = (byte *)(iVar7 + iVar3 * 4);
                  uVar19 = recovered_1001ae80(iVar18,(uint)*pbVar12,(uint)pbVar12[1],
                                              (uint)pbVar12[2]);
                  if (iVar11 != 0) {
                    uVar5 = 0;
                    if (0xf < uVar20) {
                      PF_PART8(auVar2, 8) = CONCAT44(uVar19,uVar19);
                      PF_PART8(auVar2, 0) = CONCAT44(uVar19,uVar19);
                      PF_PART8(auVar25, 8) = (0xf0000000eU);
                      PF_PART8(auVar25, 0) = (0xd0000000cU);
                      PF_PART8(auVar26, 8) = (0xb0000000aU);
                      PF_PART8(auVar26, 0) = (0x900000008U);
                      PF_PART8(auVar27, 8) = (0x700000006U);
                      PF_PART8(auVar27, 0) = (0x500000004U);
                      PF_PART8(auVar28, 8) = (0x300000002U);
                      PF_PART8(auVar28, 0) = (0x100000000U);
                      uVar5 = uVar14;
                      puVar8 = puVar21;
                      do {
                        auVar30 = VectorShiftLeft(auVar28,3,0x20,0);
                        uVar5 = uVar5 - 0x10;
                        auVar32 = VectorShiftLeft(auVar27,3,0x20,0);
                        auVar33 = VectorShiftLeft(auVar26,3,0x20,0);
                        auVar23 = VectorShiftLeft(auVar25,3,0x20,0);
                        auVar30 = FloatVectorNeg(auVar30,1,4);
                        auVar32 = FloatVectorNeg(auVar32,1,4);
                        auVar33 = FloatVectorNeg(auVar33,1,4);
                        auVar23 = FloatVectorNeg(auVar23,1,4);
                        auVar30 = VectorShiftLeft(auVar2,auVar30,4,1);
                        auVar32 = VectorShiftLeft(auVar2,auVar32,4,1);
                        auVar33 = VectorShiftLeft(auVar2,auVar33,4,1);
                        auVar23 = VectorShiftLeft(auVar2,auVar23,4,1);
                        PF_PART8(auVar30, 0) = VectorCopyNarrow(auVar30,4);
                        PF_PART8(auVar30, 8) = VectorCopyNarrow(auVar32,4);
                        PF_PART8(auVar32, 0) = VectorCopyNarrow(auVar33,4);
                        PF_PART8(auVar32, 8) = VectorCopyNarrow(auVar23,4);
                        uVar29 = VectorCopyNarrow(auVar30,2);
                        uVar31 = VectorCopyNarrow(auVar32,2);
                        auVar27 = VectorAdd(auVar27,auVar24,4);
                        auVar28 = VectorAdd(auVar28,auVar24,4);
                        *puVar8 = uVar29;
                        puVar8[1] = uVar31;
                        puVar8 = puVar8 + 2;
                        auVar26 = VectorAdd(auVar26,auVar24,4);
                        auVar25 = VectorAdd(auVar25,auVar24,4);
                      } while (uVar5 != 0);
                      uVar5 = uVar14;
                      if (uVar20 == uVar14) goto LAB_10023144;
                    }
                    uVar9 = uVar5 << 3;
                    do {
                      uVar1 = uVar9 & 0xff;
                      uVar9 = uVar9 + 8;
                      *(char *)((int)puVar21 + uVar5) = (char)(uVar19 >> uVar1);
                      uVar5 = uVar5 + 1;
                    } while (uVar20 != uVar5);
                  }
LAB_10023144:
                  iVar3 = iVar3 + 1;
                  puVar21 = (undefined8 *)((int)puVar21 + uVar20);
                } while (iVar3 != iVar6);
              }
              uVar13 = uVar13 + 1;
            } while (uVar13 != uVar15);
          }
        }
      }
    }
  }
  return;
}

#undef DAT_10023240
#undef DAT_10023248
#undef DAT_10023250
#undef DAT_10023258
#undef DAT_10023260
#undef DAT_10023268
#undef DAT_10023270
#undef DAT_10023278

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10023280
 */

void recovered_10023280(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  int iVar3;
  void *dst;
  ulong n;
  int iVar4;
  int iVar5;
  int iVar6;
  void *a;
  int unaff_r9;
  void *b;
  bool bVar7;

  uVar1 = *(int *)(param_1 + 0x1c) - 0xf;
  if (uVar1 < 0x12) {
    bVar7 = (1 << (uVar1 & 0xff) & 0x20203U) != 0;
    if (bVar7) {
      uVar1 = *(uint *)(param_1 + 0x38);
    }
    if (bVar7 && uVar1 != 0) {
      iVar6 = *(int *)(param_1 + 0x14);
      iVar4 = iVar6;
      iVar5 = 0x20203;
      if (0 < iVar6) {
        iVar4 = *(int *)(param_1 + 0x18);
        iVar5 = iVar4;
      }
      if (0 < iVar4) {
        iVar4 = param_5;
        if (0 < param_5) {
          iVar4 = param_6;
          unaff_r9 = param_6;
        }
        if (0 < iVar4) {
          iVar2 = param_3 + param_5;
          iVar4 = iVar6;
          if (iVar2 < iVar6) {
            iVar4 = iVar2;
          }
          iVar3 = param_4 + unaff_r9;
          if (iVar2 < 0) {
            iVar4 = 0;
          }
          iVar2 = iVar5;
          if (iVar3 < iVar5) {
            iVar2 = iVar3;
          }
          if (iVar3 < 0) {
            iVar2 = 0;
          }
          if (param_3 < iVar6) {
            iVar6 = param_3;
          }
          if (param_3 < 0) {
            iVar6 = 0;
          }
          if (param_4 < iVar5) {
            iVar5 = param_4;
          }
          if (param_4 < 0) {
            iVar5 = 0;
          }
          if (((iVar6 < iVar4) && (iVar5 < iVar2)) && (0 < iVar4 - iVar6)) {
            uVar1 = *(int *)(param_1 + 0x1c) + 7U >> 3;
            n = (iVar4 - iVar6) * uVar1;
            if ((n != 0) && (iVar4 * uVar1 <= *(uint *)(param_1 + 0x10))) {
              do {
                iVar4 = *(int *)(param_1 + 0x10) * iVar5 + iVar6 * uVar1;
                dst = (void *)(param_2 + iVar4);
                a = (void *)(*(int *)(param_1 + 0x38) + iVar4);
                if (*(int *)(param_1 + 0x3c) == 0) {
LAB_1002342c:
                  memcpy(dst,a,n);
                }
                else {
                  b = (void *)(*(int *)(param_1 + 0x3c) + iVar4);
                  if (((*(char *)(param_1 + 0x48) != '\x01') ||
                      (*(int *)(param_1 + 0x44) != *(int *)(param_1 + 0x40))) ||
                     (iVar4 = memcmp(a,b,n), iVar4 != 0)) {
                    memcpy(dst,a,n);
                    dst = b;
                    goto LAB_1002342c;
                  }
                }
                iVar5 = iVar5 + 1;
              } while (iVar2 != iVar5);
            }
          }
        }
      }
    }
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
#undef UINT_4001095c
#define UINT_4001095c (*(uint *)(0x4001095cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10023448
 */

void recovered_10023448(uint param_1,uint param_2,uint param_3,int param_4,int param_5)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  uint x;
  uint uVar2;
  uint height;
  uint uVar3;
  int in_r12;
  uint uVar4;
  bool bVar5;
  bool bVar6;

  x = *(uint *)(param_1 + 0x14);
  if (x != 0) {
    param_1 = *(uint *)(param_1 + 0x18);
  }
  if (x != 0 && param_1 != 0) {
    uVar4 = x;
    if (0 < (int)x) {
      uVar4 = param_1;
    }
    if (0 < (int)uVar4) {
      iVar1 = param_4;
      if (0 < param_4) {
        iVar1 = param_5;
        in_r12 = param_5;
      }
      if (0 < iVar1) {
        uVar2 = param_2 + param_4;
        uVar4 = x;
        if ((int)uVar2 < (int)x) {
          uVar4 = uVar2;
        }
        height = param_3 + in_r12;
        if ((int)uVar2 < 0) {
          uVar4 = 0;
        }
        uVar2 = param_1;
        if ((int)height < (int)param_1) {
          uVar2 = height;
        }
        if ((int)height < 0) {
          uVar2 = 0;
        }
        if ((int)param_2 < (int)x) {
          x = param_2;
        }
        if ((int)param_2 < 0) {
          x = 0;
        }
        if ((int)param_3 < (int)param_1) {
          param_1 = param_3;
        }
        if ((int)param_3 < 0) {
          param_1 = 0;
        }
        bVar6 = SBORROW4(uVar4,x);
        iVar1 = uVar4 - x;
        bVar5 = uVar4 == x;
        if ((int)x < (int)uVar4) {
          bVar6 = SBORROW4(uVar2,param_1);
          iVar1 = uVar2 - param_1;
          bVar5 = uVar2 == param_1;
        }
        if (!bVar5 && iVar1 < 0 == bVar6) {
          uVar4 = uVar4 - x;
          uVar3 = uVar4;
          if (0 < (int)uVar4) {
            uVar3 = uVar2 - param_1;
            height = uVar3;
          }
          if (0 < (int)uVar3) {
            iVar1 = Ram40010800;
            if (iVar1 != 0x50414d57) {
              return;
            }
            iVar1 = Ram40010804;
            if (iVar1 != 0) {
              uVar2 = Ram40010808;
              bVar5 = 0xb < uVar2;
              if (bVar5) {
                uVar2 = Ram40010808;
              }
              if ((bVar5 && 0x15f < uVar2) &&
                 (UNRECOVERED_JUMPTABLE = (code *)UINT_4001095c,
                 UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x10023548. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (*UNRECOVERED_JUMPTABLE)(x,param_1,uVar4,height);
                return;
              }
            }
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
#undef Ram40010800
#undef Ram40010804
#undef Ram40010808
#undef UINT_4001095c

#undef DAT_100242dc
#define DAT_100242dc (*(int *)(((uintptr_t)pf_module_state + 0xcd4U)))
#undef DAT_1002430c
#define DAT_1002430c (*(int *)(((uintptr_t)pf_module_state + 0xd04U)))
#undef DAT_10024914
#define DAT_10024914 (*(int *)(((uintptr_t)pf_module_state + 0x130cU)))
#undef DAT_100290dc
#define DAT_100290dc (*(int *)(((uintptr_t)pf_module_state + 0x5ad4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1002354c
 */

void recovered_1002354c(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;

  recovered_1000f8c8();
  recovered_1000fdc0();
  recovered_10010090();
  recovered_100101b8();
  if (0 < DAT_100290dc) {
    iVar4 = 0;
    iVar1 = DAT_100290dc;
    iVar2 = DAT_10024914;
    do {
      iVar3 = *(int *)(iVar2 + iVar4 * 4);
      if (iVar3 != param_1) {
        recovered_10010640((char *)(iVar3 * 0xd9c + DAT_1002430c),(uint)(iVar3 == DAT_100242dc));
        iVar1 = DAT_100290dc;
        iVar2 = DAT_10024914;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar1);
  }
  recovered_100118f4();
  recovered_10011a3c();
  recovered_10011d24();
  recovered_10011e18();
  return;
}

#undef DAT_100242dc
#undef DAT_1002430c
#undef DAT_10024914
#undef DAT_100290dc
