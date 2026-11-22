/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003950
 */

uint recovered_10003950(uint a,uint b)

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
 * Address: 0x100039a0
 */

uint recovered_100039a0(uint a,uint b)

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
 * Address: 0x100039d8
 */

int recovered_100039d8(int a,int b)

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
 * Address: 0x10003a48
 */

int recovered_10003a48(int a,int b)

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
 * Address: 0x10003ab0
 */

ulonglong recovered_10003ab0(ulonglong a,ulonglong b)

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
      uVar8 = (uint)(a >> 0x20);
      uVar4 = (uint)(b >> 0x20);
      uVar3 = (uint)b;
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
 * Address: 0x10003b94
 */

ulonglong recovered_10003b94(ulonglong a,ulonglong b)

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

  uVar2 = (uint)(a >> 0x20);
  uVar4 = (uint)(b >> 0x20);
  uVar3 = (uint)b;
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
 * Address: 0x10003c14
 */

longlong recovered_10003c14(longlong a,longlong b)

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

  uVar13 = (uint)((ulonglong)a >> 0x20);
  uVar14 = (uint)((ulonglong)b >> 0x20);
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
 * Address: 0x10003d34
 */

longlong recovered_10003d34(longlong a,longlong b)

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

  uVar5 = (uint)((ulonglong)a >> 0x20);
  uVar10 = (uint)((ulonglong)b >> 0x20);
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


#undef DAT_10003e70
#define DAT_10003e70 (*(double *)(0x10003e70U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003df0
 */

ulonglong recovered_10003df0(double x)

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

#undef DAT_10003e70

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003e78
 */

longlong recovered_10003e78(double x)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  ulonglong uVar2;

  dVar1 = (double)(((ulonglong)x & 0xffffffff00000000) + ((ulonglong)x & 0xffffffff));
  if (NAN(dVar1)) {
    return 0;
  }
  if (dVar1 < 0.0) {
    uVar2 = recovered_10003df0(-dVar1);
    return CONCAT44(-((int)(uVar2 >> 0x20) + (uint)((int)uVar2 != 0)),-(int)uVar2);
  }
  uVar2 = recovered_10003df0(x);
  return uVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003ec4
 */

ulonglong recovered_10003ec4(float x)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulonglong uVar1;

  uVar1 = recovered_10003df0((double)x);
  return uVar1;
}


#undef DAT_10024004
#define DAT_10024004 (*(code * *)(((uintptr_t)pf_module_state + 0x15bcU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003ed4
 */

longlong recovered_10003ed4(float x)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  longlong lVar1;

                    /* WARNING: Could not recover jumptable at ((uintptr_t)pf_module_state + 0x1534U). Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = (*DAT_10024004)(SUB84((double)x,0),(int)((ulonglong)(double)x >> 0x20));
  return lVar1;
}

#undef DAT_10024004

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003ee4
 */

double recovered_10003ee4(ulonglong x)

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
 * Address: 0x10003f2c
 */

double recovered_10003f2c(longlong x)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  if (x < 0) {
    dVar1 = recovered_10003ee4(CONCAT44(-((int)((ulonglong)x >> 0x20) + (uint)((int)x != 0)),-(int)x
                                       ));
    return -dVar1;
  }
  dVar1 = recovered_10003ee4(x);
  return dVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003f54
 */

float recovered_10003f54(ulonglong x)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_10003ee4(x);
  return (float)pf_bits_double(((pf_double_bits(dVar1) & 0xffffffff00000000) + (pf_double_bits(dVar1) & 0xffffffff)));
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003f70
 */

float recovered_10003f70(longlong x)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_10003f2c(x);
  return (float)pf_bits_double(((pf_double_bits(dVar1) & 0xffffffff00000000) + (pf_double_bits(dVar1) & 0xffffffff)));
}


#undef DAT_10022c1b
#define DAT_10022c1b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1d3U)))
#undef DAT_10022ca6
#define DAT_10022ca6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x25eU)))
#undef DAT_10024114
#define DAT_10024114 (*(uint *)(((uintptr_t)pf_module_state + 0x16ccU)))
#undef DAT_10024118
#define DAT_10024118 (*(uint *)(((uintptr_t)pf_module_state + 0x16d0U)))
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
#undef UINT_40010828
#define UINT_40010828 (*(uint *)(0x40010828U))
#undef UINT_4001082c
#define UINT_4001082c (*(uint *)(0x4001082cU))
#undef UINT_40010834
#define UINT_40010834 (*(uint *)(0x40010834U))
#undef UINT_40010838
#define UINT_40010838 (*(uint *)(0x40010838U))
#undef UINT_4001084c
#define UINT_4001084c (*(uint *)(0x4001084cU))
#undef UINT_40010850
#define UINT_40010850 (*(uint *)(0x40010850U))
#undef UINT_4001088c
#define UINT_4001088c (*(uint *)(0x4001088cU))
#undef UINT_4001089c
#define UINT_4001089c (*(uint *)(0x4001089cU))
#undef UINT_400108c8
#define UINT_400108c8 (*(uint *)(0x400108c8U))
#undef UINT_40010914
#define UINT_40010914 (*(uint *)(0x40010914U))
#undef str_10022ba4
#define str_10022ba4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x15cU)))
#undef str_10022bbd
#define str_10022bbd (*(char (*)[1])(((uintptr_t)pf_module_state + 0x175U)))
#undef str_10022bde
#define str_10022bde (*(char (*)[1])(((uintptr_t)pf_module_state + 0x196U)))
#undef str_10022be6
#define str_10022be6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x19eU)))
#undef str_10022c10
#define str_10022c10 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1c8U)))
#undef str_10022c1c
#define str_10022c1c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1d4U)))
#undef str_10022c32
#define str_10022c32 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1eaU)))
#undef str_1002372d
#define str_1002372d (*(char (*)[1])(((uintptr_t)pf_module_state + 0xce5U)))
#undef str_10023988
#define str_10023988 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xf40U)))
#undef str_10023a40
#define str_10023a40 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xff8U)))
#undef str_10023d8e
#define str_10023d8e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1346U)))
#undef str_10023d98
#define str_10023d98 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1350U)))
#undef str_10023db2
#define str_10023db2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x136aU)))
#undef str_10023dd4
#define str_10023dd4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x138cU)))
#undef str_10023df6
#define str_10023df6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x13aeU)))
#undef str_10023dfc
#define str_10023dfc (*(char (*)[1])(((uintptr_t)pf_module_state + 0x13b4U)))
#undef str_10023e0c
#define str_10023e0c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x13c4U)))
#undef str_10023ee4
#define str_10023ee4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x149cU)))
#undef str_10023f0f
#define str_10023f0f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x14c7U)))
#undef str_10023f33
#define str_10023f33 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x14ebU)))
#undef str_10023f45
#define str_10023f45 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x14fdU)))
#define abStack_727 (*(byte (*)[7])(frame + 665))
#define acStack_524 (*(char (*)[4])(frame + 1180))
#define local_9ac (*(byte *)(frame + 20))
#define local_9ab (*(byte (*)[15])(frame + 21))
#define local_99c (*(undefined4 *)(frame + 36))
#define local_984 (*(int *)(frame + 60))
#define local_97c (*(uint *)(frame + 68))
#define local_978 (*(uint *)(frame + 72))
#define local_974 (*(int *)(frame + 76))
#define local_970 (*(int *)(frame + 80))
#define local_734 (*(void * *)(frame + 652))
#define local_730 (*(uint *)(frame + 656))
#define local_728 (*(byte *)(frame + 664))
#define local_720 (*(uint * *)(frame + 672))
#define local_718 (*(int *)(frame + 680))
#define local_714 (*(int *)(frame + 684))
#define local_710 (*(uint *)(frame + 688))
#define local_628 (*(int *)(frame + 920))
#define local_624 (*(void * *)(frame + 924))
#define local_620 (*(undefined4 *)(frame + 928))
#define local_520 (*(int *)(frame + 1184))
#define local_518 (*(int *)(frame + 1192))
#define local_124 (*(void * *)(frame + 2204))
#define local_120 (*(uint *)(frame + 2208))
#define local_84 (*(int (*)[25])(frame + 2364))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003f8c
 */

int recovered_10003f8c(void)

{
  unsigned char frame[2528] __attribute__((aligned(16))) = {0};

  byte bVar1;
  char cVar2;
  void *pvVar3;
  uchar uVar4;
  undefined1 uVar5;
  int *dst;
  uint uVar6;
  uint *puVar7;
  char *pcVar8;
  int iVar9;
  uint *puVar10;
  int iVar11;
  int *text;
  ulong uVar12;
  undefined2 uVar13;
  code *pcVar14;
  uint uVar15;
  byte *pbVar16;
  byte *pbVar17;
  void *extraout_r1;
  int iVar18;
  char *pcVar19;
  int iVar20;
  char *vararg0;
  uint uVar21;
  int iVar22;
  uint uVar23;
  int *piVar24;
  int iVar25;
  int *piVar26;
  int iVar27;
  uint uVar28;
  int iVar29;
  uint *puVar30;
  int iVar31;
  bool bVar32;
  bool bVar33;

  iVar9 = Ram40010800;
  if ((iVar9 == 0x50414d57) && (iVar9 = Ram40010804, iVar9 != 0)) {
    uVar6 = Ram40010808;
    bVar32 = 0xb < uVar6;
    if (bVar32) {
      uVar6 = Ram40010808;
    }
    if (((bVar32 && 0x4f < uVar6) && (pcVar14 = (code *)UINT_4001084c, pcVar14 != (code *)0x0)) &&
       (dst = (*pcVar14)(0x206158), dst != (int *)0x0)) {
      memset(dst,0,0x206158);
      pf_app_window_spec(&local_9ac,str_10022bde,DAT_10024114,DAT_10024118);
      local_99c = 0xffffff;
      local_97c = local_97c | 1;
      uVar6 = terror_ui_window_open(dst,&local_9ac);
      if (uVar6 != 0) {
        dst[0xd0] = dst[0xb];
        if (dst[0xb] == 0) {
          terror_ui_window_close(dst);
        }
        else {
          DAT_10024114 = dst[1];
          DAT_10024118 = dst[2];
          terror_ui_window_set_menus(dst,str_10022be6,str_10022c10,&DAT_10022c1b);
          memset(dst + 0xd1,0,0x90);
          iVar9 = Ram40010800;
          if ((iVar9 == 0x50414d57) && (iVar9 = Ram40010804, iVar9 != 0)) {
            uVar6 = Ram40010808;
            bVar32 = 0xb < uVar6;
            if (bVar32) {
              uVar6 = Ram40010808;
            }
            if (((bVar32 && 0x117 < uVar6) &&
                (pcVar14 = (code *)UINT_40010914, pcVar14 != (code *)0x0)) &&
               (uVar6 = (*pcVar14)(dst + 0xd1), uVar6 != 0)) {
              uVar5 = 0;
              if ((*(byte *)(dst + 0xd2) & 1) != 0) {
                uVar5 = (undefined1)((*(byte *)(dst + 0xd3) & 3) >> 1);
              }
              *(undefined1 *)(dst + 0x15f6) = uVar5;
            }
          }
          puVar7 = (uint *)(dst + 0x816eb);
          *(undefined1 *)(dst + 0x15f7) = 1;
          memset(&local_624,0,0xc);
          iVar9 = Ram40010800;
          if ((iVar9 == 0x50414d57) && (iVar9 = Ram40010804, iVar9 != 0)) {
            uVar6 = Ram40010808;
            bVar32 = 0xb < uVar6;
            if (bVar32) {
              uVar6 = Ram40010808;
            }
            if ((bVar32 && 0x37 < uVar6) &&
               (pcVar14 = (code *)UINT_40010834, pcVar14 != (code *)0x0)) {
              uVar6 = (*pcVar14)(str_10022c1c,&local_624);
              pvVar3 = extraout_r1;
              if (uVar6 != 0) {
                pvVar3 = local_624;
              }
              if ((uVar6 != 0 && pvVar3 != (void *)0x0) && (6 < local_620)) {
                uVar6 = local_620;
                if (0x7e < local_620) {
                  uVar6 = 0x7f;
                }
                memcpy(acStack_524,pvVar3,uVar6);
                acStack_524[uVar6] = '\0';
                iVar9 = strncmp(acStack_524,str_10022c32,7);
                if (iVar9 == 0) {
                  *(undefined1 *)(dst + 0x15f7) = 0;
                }
              }
            }
          }
          dst[0x816f1] = 0;
          *(undefined2 *)((int)dst + 0x57d9) = 0x101;
          recovered_1000620c((uint)dst,&DAT_10022c1b);
          if (*puVar7 != 0) {
            *(undefined1 *)((int)dst + 0x57db) = 1;
            if (*(char *)((int)dst + 0x57d9) == '\x01') {
              pcVar8 = (char *)((int)dst + 0x57de);
LAB_10004280:
              uVar21 = dst[1];
              uVar23 = dst[2];
              memset(&local_9ac,0,0x278);
              uVar6 = terror_ui_window_query(dst,&local_9ac);
              if (uVar6 != 0) {
                dst[0x816ef] = local_984;
                uVar4 = terror_ui_window_info_requests_close(&local_9ac);
                if ((uVar4 == '\0') && (uVar6 = terror_ui_window_sync_buffer(dst,&local_9ac), uVar6 != 0)) {
                  DAT_10024114 = dst[1];
                  DAT_10024118 = dst[2];
                  dst[0xd0] = dst[0xb];
                  uVar6 = DAT_10024114;
                  if (DAT_10024114 != uVar21 || DAT_10024118 != uVar23) {
                    if ((*puVar7 != 0) && (uVar6 = dst[0x816ec], uVar6 < *puVar7)) {
                      piVar24 = dst + uVar6 * 0x15573 + 0x1639;
                      recovered_10007eb4((int)dst,piVar24);
                      uVar6 = piVar24[0x1512e];
                      iVar9 = (piVar24[0x1512f] - DAT_10024118) + 0x5e;
                      if (piVar24[0x1512f] - DAT_10024118 == -0x72 || iVar9 < -0x14) {
                        iVar9 = -0x14;
                      }
                      uVar21 = iVar9 + 0x14U;
                      if ((int)uVar6 < (int)(iVar9 + 0x14U)) {
                        uVar21 = uVar6;
                      }
                      if ((int)uVar6 < 0) {
                        uVar21 = 0;
                      }
                      piVar24[0x1512e] = uVar21;
                    }
                    *(undefined1 *)((int)dst + 0x57da) = 1;
                  }
                  if (local_978 != 0) {
                    uVar6 = dst[0x816ed];
                  }
                  if (local_978 == 0 || local_978 == uVar6) goto switchD_10004838_default;
                  dst[0x816ed] = local_978;
                  if (local_974 == 2) {
                    if (local_970 == 1) {
                      recovered_1002194c((int)dst);
                    }
                    else if (local_970 == 0) {
                      recovered_100217b8((int)dst);
                    }
                    goto switchD_10004838_default;
                  }
                  if (local_974 != 1) goto switchD_10004838_default;
                  switch((uintptr_t)(local_970)) {
                  case 0:
                    if ((*puVar7 != 0) && (uVar6 = dst[0x816ec], uVar6 < *puVar7)) {
                      iVar9 = Ram40010800;
                      if ((iVar9 == 0x50414d57) && (iVar9 = Ram40010804, iVar9 != 0)) {
                        uVar21 = Ram40010808;
                        bVar32 = 0xb < uVar21;
                        if (bVar32) {
                          uVar21 = Ram40010808;
                        }
                        if ((bVar32 && 0x8f < uVar21) &&
                           (pcVar14 = (code *)UINT_4001088c, pcVar14 != (code *)0x0)) {
                          (*pcVar14)(str_10023d8e);
                        }
                      }
                      iVar9 = Ram40010800;
                      if ((iVar9 == 0x50414d57) && (iVar9 = Ram40010804, iVar9 != 0)) {
                        uVar21 = Ram40010808;
                        bVar32 = 0xb < uVar21;
                        if (bVar32) {
                          uVar21 = Ram40010808;
                        }
                        if ((bVar32 && 0x8f < uVar21) &&
                           (pcVar14 = (code *)UINT_4001088c, pcVar14 != (code *)0x0)) {
                          (*pcVar14)(str_1002372d);
                        }
                      }
                      piVar24 = dst + uVar6 * 0x15573 + 0x1639;
                      uVar6 = 0;
                      do {
                        iVar9 = dst[0x816f1];
                        dst[0x816f1] = iVar9 + 1U;
                        pf_varargs_10023fa4__4_((char *)local_84,0x60,str_10023d98,iVar9 + 1U);
                        iVar9 = Ram40010800;
                        if ((iVar9 == 0x50414d57) && (iVar9 = Ram40010804, iVar9 != 0)) {
                          uVar21 = Ram40010808;
                          bVar32 = 0xb < uVar21;
                          if (bVar32) {
                            uVar21 = Ram40010808;
                          }
                          if (((bVar32 && 0x8f < uVar21) &&
                              (pcVar14 = (code *)UINT_4001088c, pcVar14 != (code *)0x0)) &&
                             (uVar21 = (*pcVar14)((char *)local_84), uVar21 != 0))
                          goto LAB_1000495c;
                        }
                        if (0x3e6 < uVar6) goto LAB_1000495c;
                        uVar6 = uVar6 + 1;
                      } while( true );
                    }
                    break;
                  case 1:
                    recovered_1000620c((uint)dst,&DAT_10022c1b);
                    *(undefined1 *)((int)dst + 0x57db) = 1;
                    break;
                  case 2:
                    if ((*puVar7 < 2) || (*puVar7 <= (uint)dst[0x816ec])) break;
                    recovered_1000b89c((int)(dst + dst[0x816ec] * 0x15573 + 0x1639));
                    iVar9 = dst[0x816ec];
                    uVar6 = *puVar7;
                    uVar21 = iVar9 + 1;
                    if (uVar21 < uVar6) {
                      piVar24 = dst + iVar9 * 0x15573 + 0x16bac;
                      piVar26 = dst + iVar9 * 0x15573 + 0x1639;
                      do {
                        memcpy(piVar26,piVar24,0x555cc);
                        piVar24 = piVar24 + 0x15573;
                        piVar26 = piVar26 + 0x15573;
                        uVar21 = uVar21 + 1;
                        uVar6 = *puVar7;
                      } while (uVar21 < uVar6);
                    }
                    memset(dst + (uVar6 - 1) * 0x15573 + 0x1639,0,0x555cc);
                    uVar23 = *puVar7;
                    uVar6 = dst[0x816ec];
                    uVar21 = uVar23 - 1;
                    *puVar7 = uVar21;
                    if (uVar6 < uVar21) {
LAB_10004ad8:
                      if (uVar6 < uVar21) {
                        pf_varargs_10023fa4__4_
                                  (pcVar8,0x100,&DAT_10022ca6,(int)dst + uVar6 * 0x555cc + 0x58e5);
                        uVar12 = strlen(pcVar8);
                        dst[0x1638] = uVar12;
                      }
                    }
                    else {
                      uVar6 = uVar23 - 2;
                      dst[0x816ec] = uVar6;
                      if (uVar21 != 0) goto LAB_10004ad8;
                    }
                    goto LAB_10004b18;
                  case 3:
                    recovered_10021620((int)dst);
                  }
                  goto switchD_10004838_default;
                }
              }
            }
LAB_10005c40:
            cVar2 = (char)dst[0x81769];
            bVar32 = cVar2 == '\x01';
            if (bVar32) {
              cVar2 = *(char *)((int)dst + 0x205da5);
            }
            if (bVar32 && cVar2 == '\0') {
              do {
                iVar9 = Ram40010800;
                if ((iVar9 == 0x50414d57) && (iVar9 = Ram40010804, iVar9 != 0)) {
                  uVar6 = Ram40010808;
                  bVar32 = 0xb < uVar6;
                  if (bVar32) {
                    uVar6 = Ram40010808;
                  }
                  if (((bVar32 && 0x9f < uVar6) &&
                      (pcVar14 = (code *)UINT_4001089c, pcVar14 != (code *)0x0)) &&
                     ((*pcVar14)(), (*(byte *)(dst + 0x81769) & 1) == 0)) break;
                }
              } while (*(char *)((int)dst + 0x205da5) != '\x01');
            }
            recovered_10005e9c((int)dst);
            if (*dst != 0) {
              terror_ui_window_close(dst);
            }
            if (*puVar7 != 0) {
              uVar6 = 0;
              piVar24 = dst + 0x1639;
              do {
                recovered_1000b89c((int)piVar24);
                uVar6 = uVar6 + 1;
                piVar24 = piVar24 + 0x15573;
              } while (uVar6 < *puVar7);
            }
            memset(dst,0,0x206158);
            iVar9 = Ram40010800;
            if (iVar9 != 0x50414d57) {
              return 1;
            }
            iVar9 = Ram40010804;
            if (iVar9 == 0) {
              return 1;
            }
            uVar6 = Ram40010808;
            bVar32 = 0xb < uVar6;
            if (bVar32) {
              uVar6 = Ram40010808;
            }
            if (!bVar32 || uVar6 < 0x54) {
              return 1;
            }
            pcVar14 = (code *)UINT_40010850;
            if (pcVar14 == (code *)0x0) {
              return 1;
            }
            (*pcVar14)(dst);
            return 1;
          }
          terror_ui_window_close(dst);
          memset(dst,0,0x206158);
        }
      }
      iVar9 = Ram40010800;
      if ((iVar9 == 0x50414d57) && (iVar9 = Ram40010804, iVar9 != 0)) {
        uVar6 = Ram40010808;
        bVar32 = 0xb < uVar6;
        if (bVar32) {
          uVar6 = Ram40010808;
        }
        if ((bVar32 && 0x53 < uVar6) && (pcVar14 = (code *)UINT_40010850, pcVar14 != (code *)0x0)) {
          (*pcVar14)(dst);
        }
      }
      iVar9 = Ram40010800;
      if (iVar9 != 0x50414d57) {
        return 0;
      }
      iVar9 = Ram40010804;
      if (iVar9 == 0) {
        return 0;
      }
      uVar6 = Ram40010808;
      bVar32 = uVar6 < 0xc;
      if (!bVar32) {
        uVar6 = Ram40010808;
      }
      if (bVar32 || uVar6 < 0x2c) {
        return 0;
      }
      pcVar14 = (code *)UINT_40010828;
      if (pcVar14 == (code *)0x0) {
        return 0;
      }
      pcVar8 = str_10022bbd;
      goto override_prt_10004264_f3c0dc0;
    }
  }
  iVar9 = Ram40010800;
  if (iVar9 != 0x50414d57) {
    return 0;
  }
  iVar9 = Ram40010804;
  if (iVar9 == 0) {
    return 0;
  }
  uVar6 = Ram40010808;
  bVar32 = 0xb < uVar6;
  if (bVar32) {
    uVar6 = Ram40010808;
  }
  if (!bVar32 || uVar6 < 0x2c) {
    return 0;
  }
  pcVar14 = (code *)UINT_40010828;
  if (pcVar14 == (code *)0x0) {
    return 0;
  }
  pcVar8 = str_10022ba4;
override_prt_10004264_f3c0dc0:
  (*pcVar14)(pcVar8);
  return 0;
LAB_1000495c:
  pf_varargs_10023fa4__4_((char *)&local_124,0xa0,str_10023db2,(uint)local_84);
  pcVar19 = (char *)piVar24[0xc3];
  uVar12 = strlen(pcVar19);
  iVar9 = Ram40010800;
  if ((iVar9 == 0x50414d57) && (iVar9 = Ram40010804, iVar9 != 0)) {
    uVar6 = Ram40010808;
    bVar32 = 0xb < uVar6;
    if (bVar32) {
      uVar6 = Ram40010808;
    }
    if (((!bVar32 || uVar6 < 0x3c) || (pcVar14 = (code *)UINT_40010838, pcVar14 == (code *)0x0)) ||
       (uVar6 = (*pcVar14)((char *)&local_124,pcVar19,uVar12), uVar6 == 0)) goto LAB_100049b8;
    pf_varargs_10023fa4__4__4_(acStack_524,0x400,str_10023dd4,(int)piVar24 + 1,(int)piVar24 + 0x101)
    ;
    uVar6 = piVar24[0x14b0b];
    if (uVar6 != 0) {
      uVar21 = 0;
LAB_10005784:
      piVar26 = piVar24 + uVar21 * 0xdc + 0x10b;
      if ((*piVar26 == 3) && (*(byte *)(piVar26 + 0x35) != 0)) {
        local_628 = -1;
        recovered_1000c270((int)piVar24,(byte *)(piVar26 + 0x35),(char *)&local_624);
        memset(&local_734,0,0xc);
        bVar32 = recovered_1000d880((char *)&local_624,&local_628,&local_728);
        if (bVar32) {
          iVar9 = Ram40010800;
          if ((iVar9 == 0x50414d57) && (iVar9 = Ram40010804, iVar9 != 0)) {
            uVar6 = Ram40010808;
            bVar33 = 0xb < uVar6;
            bVar32 = uVar6 == 0xc;
            if (bVar33) {
              uVar6 = Ram40010808;
              bVar32 = uVar6 == 0xcb;
            }
            if ((!bVar33 || uVar6 < 0xcb) || bVar32) goto LAB_10005818;
            pcVar14 = (code *)UINT_400108c8;
            if (pcVar14 == (code *)0x0) goto LAB_10005774;
            uVar6 = (*pcVar14)(local_628,(char *)&local_728,&local_734);
LAB_10005878:
            pvVar3 = (void *)0x0;
            if (uVar6 != 0) {
              pvVar3 = local_734;
            }
            if (uVar6 != 0 && pvVar3 != (void *)0x0) {
              pbVar17 = &local_728;
              pbVar16 = abStack_727;
              do {
                bVar1 = pbVar16[-1];
                if (bVar1 == 0x2f || bVar1 == 0x5c) {
                  pbVar17 = pbVar16;
                }
                else if (bVar1 == 0) goto LAB_100058b8;
                pbVar16 = pbVar16 + 1;
              } while( true );
            }
          }
          else {
LAB_10005818:
            iVar9 = Ram40010800;
            if ((iVar9 == 0x50414d57) && (iVar9 = Ram40010804, iVar9 != 0)) {
              uVar6 = Ram40010808;
              bVar32 = 0xb < uVar6;
              if (bVar32) {
                uVar6 = Ram40010808;
              }
              if ((bVar32 && 0x37 < uVar6) &&
                 (pcVar14 = (code *)UINT_40010834, pcVar14 != (code *)0x0)) {
                uVar6 = (*pcVar14)((char *)&local_728,&local_734);
                goto LAB_10005878;
              }
            }
          }
        }
        goto LAB_10005774;
      }
      goto LAB_10005778;
    }
LAB_10005964:
    pf_varargs_10023fa4__4_((char *)&local_124,0xa0,str_10023dfc,(uint)local_84);
    uVar12 = strlen(acStack_524);
    iVar9 = Ram40010800;
    if ((iVar9 == 0x50414d57) && (iVar9 = Ram40010804, iVar9 != 0)) {
      uVar6 = Ram40010808;
      bVar32 = 0xb < uVar6;
      if (bVar32) {
        uVar6 = Ram40010808;
      }
      if ((bVar32 && 0x3b < uVar6) && (pcVar14 = (code *)UINT_40010838, pcVar14 != (code *)0x0)) {
        (*pcVar14)((char *)&local_124,acStack_524,uVar12);
      }
    }
    pf_varargs_10023fa4__4_((char *)((int)piVar24 + 0x141),0xc0,str_10023e0c,(uint)local_84);
LAB_10004b18:
    *(undefined1 *)((int)dst + 0x57da) = 1;
  }
  else {
LAB_100049b8:
    pf_varargs_10023fa4__4_((char *)((int)piVar24 + 0x141),0xc0,&DAT_10022ca6,((uintptr_t)pf_module_state + 0x1378U));
    *(undefined1 *)((int)dst + 0x57da) = 1;
  }
switchD_10004838_default:
  recovered_10005e9c((int)dst);
  puVar30 = puVar7;
  if (((*puVar7 != 0) && ((uint)dst[0x816ec] < *puVar7)) && ((dst[0x816ef] & 6U) == 2)) {
    iVar9 = 0x20;
    piVar24 = dst + dst[0x816ec] * 0x15573 + 0x1639;
    do {
      iVar11 = Ram40010800;
      if ((iVar11 != 0x50414d57) || (iVar11 = Ram40010804, iVar11 == 0)) break;
      uVar6 = Ram40010808;
      bVar32 = uVar6 < 0xc;
      if (!bVar32) {
        uVar6 = Ram40010808;
      }
      if (((bVar32 || uVar6 < 0x30) || (pcVar14 = (code *)UINT_4001082c, pcVar14 == (code *)0x0)) ||
         (puVar10 = (uint *)(*pcVar14)(), puVar10 == (uint *)0x0)) break;
      uVar6 = ((uint)puVar10 & 0xffff) >> 8;
      puVar30 = puVar10;
      if (((uint)puVar10 & 0x800000ff) != 0x80000000 || uVar6 != 0) {
        uVar21 = (uint)puVar10 & 0xff;
        if (((uint)puVar10 & 0x40000) == 0) {
          if (((uint)puVar10 & 0x20000) == 0) {
            if (*(char *)((int)dst + 0x57db) == '\x01') {
              if (uVar21 - 0x20 < 0x5f) {
                iVar11 = dst[0x1638];
                if (iVar11 < 0xff) {
                  dst[0x1638] = iVar11 + 1;
                  pcVar8[iVar11] = (char)puVar10;
                  pcVar8[dst[0x1638]] = '\0';
                  *(undefined1 *)((int)dst + 0x57da) = 1;
                }
              }
              else if ((uVar6 == 0xe || uVar21 == 0x7f) || (uVar21 == 8)) {
                if (0 < dst[0x1638]) {
                  iVar11 = dst[0x1638] + -1;
                  dst[0x1638] = iVar11;
                  pcVar8[iVar11] = '\0';
                  *(undefined1 *)((int)dst + 0x57da) = 1;
                }
              }
              else if ((uVar6 == 0x1c || uVar21 == 0xd) || (uVar21 == 10)) {
                recovered_10021cf0((int)dst);
              }
              else if (uVar21 == 0x1b || uVar6 == 1) {
                *(undefined2 *)((int)dst + 0x57da) = 1;
              }
            }
            else {
              iVar11 = piVar24[0x1512d];
              if (((iVar11 < 0) || (piVar24[0x14b0b] <= iVar11)) ||
                 (piVar26 = piVar24 + iVar11 * 0xdc + 0x10b, *piVar26 != 4)) {
                if (uVar21 == 0x1b || uVar6 == 1) {
                  *(undefined2 *)((int)dst + 0x57d9) = 0x100;
                  break;
                }
                uVar21 = piVar24[0x1512e];
                uVar6 = uVar21;
                switch((uintptr_t)((uint)puVar10 >> 8 & 0xff)) {
                case 0x47:
                  uVar6 = 0;
                  break;
                case 0x48:
                  uVar6 = uVar21 - 0x1c;
                  break;
                case 0x49:
                  uVar6 = (uVar21 - DAT_10024118) + 0x86;
                  break;
                case 0x4f:
                  uVar6 = piVar24[0x1512f];
                  break;
                case 0x50:
                  uVar6 = uVar21 + 0x1c;
                  break;
                case 0x51:
                  uVar6 = (uVar21 + DAT_10024118) - 0x86;
                }
                iVar11 = piVar24[0x1512f] - DAT_10024118;
                iVar18 = iVar11 + 0x5e;
                if (iVar11 == -0x72 || iVar18 < -0x14) {
                  iVar18 = -0x14;
                }
                uVar23 = iVar18 + 0x14U;
                if (uVar6 < iVar18 + 0x14U) {
                  uVar23 = uVar6;
                }
                if ((int)uVar6 < 0) {
                  uVar23 = 0;
                }
                piVar24[0x1512e] = uVar23;
                if (uVar23 != uVar21) goto LAB_1000476c;
              }
              else {
                text = piVar26 + 0x95;
                uVar12 = strlen((char *)text);
                if (uVar21 - 0x20 < 0x5f) {
                  if (uVar12 + 1 < 0x80) {
                    *(undefined1 *)((int)text + uVar12 + 1) = 0;
                    *(char *)((int)text + uVar12) = (char)puVar10;
LAB_1000476c:
                    *(undefined1 *)((int)dst + 0x57da) = 1;
                  }
                }
                else if ((uVar6 == 0xe || uVar21 == 0x7f) || (uVar21 == 8)) {
                  if (uVar12 != 0) {
                    *(undefined1 *)((int)text + (uVar12 - 1)) = 0;
                    goto LAB_1000476c;
                  }
                }
                else {
                  uVar23 = uVar21 - 0x20;
                  if (uVar6 != 0x1c) {
                    uVar23 = uVar21;
                  }
                  if ((uVar6 != 0x1c && uVar23 != 0xd) && (uVar21 != 10)) {
                    if (uVar21 == 0x1b || uVar6 == 1) {
                      *(undefined1 *)((int)dst + 0x57da) = 1;
                      piVar24[0x1512d] = -1;
                    }
                  }
                  else {
                    recovered_10021d8c((int)dst,(uint)piVar24,piVar26[0xd5]);
                  }
                }
              }
            }
          }
        }
        else if ((((uint)puVar10 & 0xbf) == 3 || uVar21 == 99) || (uVar6 == 0x2e)) {
          recovered_100217b8((int)dst);
        }
        else if ((((uint)puVar10 & 0xbf) == 0x16 || uVar21 == 0x76) || (uVar6 == 0x2f)) {
          recovered_1002194c((int)dst);
        }
      }
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
  }
  if ((dst[0x816ef] & 6U) != 2) goto LAB_10004ba8;
  memset(&local_728,0,0x1c);
  uVar21 = terror_ui_window_pointer_state(dst,&local_728);
  uVar6 = local_710;
  bVar1 = 0;
  if (uVar21 != 0) {
    bVar1 = local_728;
  }
  if (uVar21 == 0 || (bVar1 & 2) == 0) goto LAB_10004ba8;
  if (local_718 != dst[0x816ee]) {
    puVar30 = local_720;
  }
  if (local_718 == dst[0x816ee] || ((uint)puVar30 & 3) == 0) goto LAB_10004ba8;
  uVar23 = *puVar7;
  dst[0x816ee] = local_718;
  uVar21 = DAT_10024118;
  if ((uVar23 == 0) || (uVar28 = dst[0x816ec], uVar23 <= uVar28)) goto LAB_10004ba8;
  piVar24 = dst + uVar28 * 0x15573 + 0x1639;
  if (((uint)puVar30 & 2) == 0) {
    uVar15 = local_714 - 10U;
    if (local_714 - 10U < 0x1a) {
      uVar15 = local_710 - 9;
    }
    if (uVar15 < 0x1a) {
      recovered_100228e4((int)dst,-1);
      goto LAB_10004ba8;
    }
    uVar15 = local_714 - 0x28U;
    if (local_714 - 0x28U < 0x1a) {
      uVar15 = local_710 - 9;
    }
    if (uVar15 < 0x1a) {
      recovered_100228e4((int)dst,1);
      goto LAB_10004ba8;
    }
    if ((0x22 < local_710) || (local_714 < 0x4a)) {
LAB_10004e18:
      if ((((local_710 < 0x23) && (8 < (int)local_710)) && ((int)(DAT_10024114 - 0xa6) <= local_714)
          ) && (local_714 < (int)(DAT_10024114 - 0x78))) {
        recovered_10021cf0((int)dst);
        goto LAB_10004ba8;
      }
      if (((local_710 < 0x23) && (8 < (int)local_710)) &&
         (((int)(DAT_10024114 - 0x70) <= local_714 && (local_714 < (int)(DAT_10024114 - 8))))) {
        recovered_10021620((int)dst);
        goto LAB_10004ba8;
      }
      goto LAB_10004d18;
    }
    bVar33 = SBORROW4(local_710,9);
    iVar9 = local_710 - 9;
    bVar32 = local_710 == 9;
    if (8 < (int)local_710) {
      iVar11 = DAT_10024114 - 0xb0;
      bVar33 = SBORROW4(iVar11,local_714);
      iVar9 = iVar11 - local_714;
      bVar32 = iVar11 == local_714;
    }
    if (bVar32 || iVar9 < 0 != bVar33) goto LAB_10004e18;
    piVar24[0x1512d] = -1;
    uVar13 = 0x101;
  }
  else {
LAB_10004d18:
    uVar15 = 0;
    iVar9 = -0x58e5;
    iVar11 = 0x8c;
    do {
      if (((local_710 < 0x47) && (0x2e < (int)local_710)) &&
         ((iVar11 + -0x84 <= local_714 && (local_714 < iVar11)))) {
        *(undefined1 *)((int)dst + 0x57db) = 0;
        dst[0x816ec] = uVar15;
        pf_varargs_10023fa4__4_(pcVar8,0x100,&DAT_10022ca6,(int)dst - iVar9);
        uVar12 = strlen(pcVar8);
        dst[0x1638] = uVar12;
        *(undefined1 *)((int)dst + 0x57da) = 1;
        goto LAB_10004ba8;
      }
      uVar15 = uVar15 + 1;
      iVar9 = iVar9 + -0x555cc;
      iVar11 = iVar11 + 0x88;
    } while (uVar23 != uVar15);
    if (((uint)puVar30 & 2) == 0) {
      bVar33 = 4 < uVar23;
      bVar32 = uVar23 == 5;
      if (uVar23 < 6) {
        bVar33 = 0x45 < local_710;
        bVar32 = local_710 == 0x46;
      }
      if ((((!bVar33 || bVar32) && (0x30 < (int)local_710)) &&
          ((int)(uVar23 * 0x88 + 8) <= local_714)) && (local_714 < (int)(uVar23 * 0x88 + 0x20))) {
        recovered_1000620c((uint)dst,&DAT_10022c1b);
        *(undefined1 *)((int)dst + 0x57db) = 1;
        goto LAB_10004ba8;
      }
      uVar23 = local_714 - 8;
      if (((uVar23 < 0xc) && ((int)(DAT_10024118 - 0x3c) <= (int)local_710)) &&
         ((int)local_710 < (int)(DAT_10024118 - 0x2e))) {
        iVar9 = piVar24[0x1512e];
        *(undefined1 *)((int)dst + 0x57da) = 1;
        iVar11 = (piVar24[0x1512f] - uVar21) + 0x5e;
        if (piVar24[0x1512f] - uVar21 == -0x72 || iVar11 < -0x14) {
          iVar11 = -0x14;
        }
        iVar18 = iVar11 + 0x14;
        if (iVar9 + -0x1c < iVar11 + 0x14) {
          iVar18 = iVar9 + -0x1c;
        }
        bVar32 = SBORROW4(iVar9,0x1c);
        iVar9 = iVar9 + -0x1c;
      }
      else {
        if (((0xb < uVar23) || ((int)local_710 < (int)(DAT_10024118 - 0x2c))) ||
           ((int)(DAT_10024118 - 0x1e) <= (int)local_710)) {
          if ((0xb < uVar23) || ((int)local_710 < 0x4e)) goto LAB_10004e58;
          iVar9 = DAT_10024118 - 0x3e;
          if ((int)DAT_10024118 < 0x9e) {
            iVar9 = 0x60;
          }
          if ((int)local_710 < iVar9) {
            recovered_1001f5e0((undefined4 *)acStack_524,(int)piVar24);
            if ((int)uVar6 < local_520) {
              iVar9 = piVar24[0x1512e] - (int)(uVar21 - 0x5e) / 2;
            }
            else {
              iVar9 = piVar24[0x1512e];
              if (local_518 + local_520 < (int)uVar6) {
                iVar9 = iVar9 + (int)(uVar21 - 0x5e) / 2;
              }
            }
            iVar11 = (piVar24[0x1512f] - uVar21) + 0x5e;
            if (piVar24[0x1512f] - uVar21 == -0x72 || iVar11 < -0x14) {
              iVar11 = -0x14;
            }
            iVar18 = iVar11 + 0x14;
            if (iVar9 < iVar11 + 0x14) {
              iVar18 = iVar9;
            }
            if (iVar9 < 0) {
              iVar18 = 0;
            }
            piVar24[0x1512e] = iVar18;
            goto LAB_1000572c;
          }
          goto LAB_10004e6c;
        }
        iVar9 = piVar24[0x1512e];
        *(undefined1 *)((int)dst + 0x57da) = 1;
        iVar11 = (piVar24[0x1512f] - uVar21) + 0x5e;
        if (piVar24[0x1512f] - uVar21 == -0x72 || iVar11 < -0x14) {
          iVar11 = -0x14;
        }
        iVar18 = iVar11 + 0x14;
        if (iVar9 + 0x1c < iVar11 + 0x14) {
          iVar18 = iVar9 + 0x1c;
        }
        bVar32 = SCARRY4(iVar9,0x1c);
        iVar9 = iVar9 + 0x1c;
      }
      if (iVar9 < 0 != bVar32) {
        iVar18 = 0;
      }
      piVar24[0x1512e] = iVar18;
      goto LAB_10004ba8;
    }
LAB_10004e58:
    if (0x47 < (int)local_710) {
LAB_10004e6c:
      if (((int)local_710 < (int)(DAT_10024118 - 0x16)) && (iVar9 = piVar24[0x14b0b], iVar9 != 0)) {
        iVar20 = uVar28 * 0x555cc + iVar9 * 0x370;
        iVar18 = iVar9 * -0x370 + -0x5c74 + uVar28 * -0x555cc;
        iVar29 = iVar20 + 0x59a0;
        iVar20 = iVar20 + 0x5d0d;
        iVar27 = 1 - iVar9;
        iVar11 = iVar18 + 0x200;
        do {
          iVar25 = *(int *)((int)dst + iVar29);
          if ((1 < iVar25 - 7U) && (iVar31 = *(int *)((int)dst + iVar29 + 4), iVar31 <= local_714))
          {
            iVar22 = local_710 - 0x48;
            if (*(char *)((int)dst + iVar20 + -1) == '\0') {
              iVar22 = (local_710 - 0x48) + piVar24[0x1512e];
            }
            if (((local_714 < *(int *)((int)dst + iVar29 + 0xc) + iVar31) &&
                (iVar31 = *(int *)((int)dst + iVar29 + 8), iVar31 <= iVar22)) &&
               (iVar22 < iVar31 + *(int *)((int)dst + iVar29 + 0x10))) {
              *(undefined1 *)((int)dst + 0x57db) = 0;
              if (iVar25 == 4) {
                if (((uint)puVar30 & 2) == 0) {
                  iVar11 = 0;
                  uVar6 = iVar9 - 1U;
                  if ((uint)-iVar27 < iVar9 - 1U) {
                    uVar6 = -iVar27;
                  }
                  goto LAB_1000543c;
                }
              }
              else {
                if (iVar25 == 2) {
                  bVar1 = *(byte *)((int)dst + iVar20);
                  piVar24[0x1512d] = -1;
                  if (((byte *)((int)dst + iVar20))[-0x299] == 0) goto LAB_10004ba8;
                  recovered_1000c270((int)piVar24,(byte *)((int)dst - iVar11),(char *)&local_624);
                  if ((bVar1 & 1) == 0) {
                    if (((uint)puVar30 & 2) == 0) {
                      recovered_1000a604((uint)dst,(int)piVar24,(byte *)&local_624);
                      pf_varargs_10023fa4__4_(pcVar8,0x100,&DAT_10022ca6,(int)piVar24 + 1);
                      uVar12 = strlen(pcVar8);
                      dst[0x1638] = uVar12;
                      *(undefined1 *)((int)dst + 0x57da) = 1;
                    }
                    else {
                      recovered_1000620c((uint)dst,(byte *)&local_624);
                      if ((*puVar7 != 0) && ((uint)dst[0x816ec] < *puVar7)) {
                        pf_varargs_10023fa4__4_
                                  (pcVar8,0x100,&DAT_10022ca6,
                                   (int)dst + dst[0x816ec] * 0x555cc + 0x58e5);
                        uVar12 = strlen(pcVar8);
                        dst[0x1638] = uVar12;
                      }
                    }
                    goto LAB_10004ba8;
                  }
                  local_84[0] = -1;
                  bVar32 = recovered_1000d880((char *)&local_624,local_84,&local_9ac);
                  if (bVar32) {
                    memset(&local_124,0,0xc);
                    iVar9 = Ram40010800;
                    if ((iVar9 == 0x50414d57) && (iVar9 = Ram40010804, iVar9 != 0)) {
                      uVar6 = Ram40010808;
                      bVar33 = 0xb < uVar6;
                      bVar32 = uVar6 == 0xc;
                      if (bVar33) {
                        uVar6 = Ram40010808;
                        bVar32 = uVar6 == 0xcb;
                      }
                      if ((!bVar33 || uVar6 < 0xcb) || bVar32) goto LAB_10005068;
                      pcVar14 = (code *)UINT_400108c8;
                      if (pcVar14 != (code *)0x0) {
                        uVar6 = (*pcVar14)(local_84[0],(char *)&local_9ac,&local_124);
LAB_10005a30:
                        pvVar3 = (void *)0x0;
                        if (uVar6 != 0) {
                          pvVar3 = local_124;
                        }
                        if (uVar6 != 0 && pvVar3 != (void *)0x0) {
                          iVar9 = Ram40010800;
                          if ((iVar9 == 0x50414d57) && (iVar9 = Ram40010804, iVar9 != 0)) {
                            uVar6 = Ram40010808;
                            bVar32 = 0xb < uVar6;
                            if (bVar32) {
                              uVar6 = Ram40010808;
                            }
                            if ((bVar32 && 0x8f < uVar6) &&
                               (pcVar14 = (code *)UINT_4001088c, pcVar14 != (code *)0x0)) {
                              (*pcVar14)(str_1002372d);
                            }
                          }
                          pcVar19 = (char *)&local_9ac;
                          pbVar17 = local_9ab;
                          goto LAB_10005a84;
                        }
                      }
                    }
                    else {
LAB_10005068:
                      iVar9 = Ram40010800;
                      if ((iVar9 == 0x50414d57) && (iVar9 = Ram40010804, iVar9 != 0)) {
                        uVar6 = Ram40010808;
                        bVar32 = 0xb < uVar6;
                        if (bVar32) {
                          uVar6 = Ram40010808;
                        }
                        if ((bVar32 && 0x37 < uVar6) &&
                           (pcVar14 = (code *)UINT_40010834, pcVar14 != (code *)0x0)) {
                          uVar6 = (*pcVar14)((char *)&local_9ac,&local_124);
                          goto LAB_10005a30;
                        }
                      }
                    }
                    pcVar19 = &DAT_10022ca6;
                    vararg0 = str_10023f0f;
                    goto LAB_10005724;
                  }
                  uVar6 = (uint)local_624 & 0xff;
                  if (uVar6 != 0) {
                    if (uVar6 - 0x41 < 0x1a) {
                      uVar6 = uVar6 | 0x20;
                    }
                    if ((uVar6 == 0x68) && (uVar6 = (uint)local_624 >> 8 & 0xff, uVar6 != 0)) {
                      if (uVar6 - 0x41 < 0x1a) {
                        uVar6 = uVar6 | 0x20;
                      }
                      if ((uVar6 == 0x74) && (uVar6 = (uint)local_624 >> 0x10 & 0xff, uVar6 != 0)) {
                        if (uVar6 - 0x41 < 0x1a) {
                          uVar6 = uVar6 | 0x20;
                        }
                        if ((uVar6 == 0x74) && (uVar6 = (uint)local_624 >> 0x18, uVar6 != 0)) {
                          if (uVar6 - 0x41 < 0x1a) {
                            uVar6 = uVar6 | 0x20;
                          }
                          if ((uVar6 == 0x70) && (uVar6 = local_620 & 0xff, uVar6 != 0)) {
                            if (uVar6 - 0x41 < 0x1a) {
                              uVar6 = uVar6 | 0x20;
                            }
                            if (uVar6 == 0x73) {
                              uVar6 = (uint)PF_PART1(local_620, 1);
                              if (uVar6 != 0) {
                                if (uVar6 - 0x41 < 0x1a) {
                                  uVar6 = uVar6 | 0x20;
                                }
                                if ((uVar6 == 0x3a) && (uVar6 = (uint)PF_PART1(local_620, 2), uVar6 != 0))
                                {
                                  if (uVar6 - 0x41 < 0x1a) {
                                    uVar6 = uVar6 | 0x20;
                                  }
                                  if ((uVar6 == 0x2f) && (uVar6 = local_620 >> 0x18, uVar6 != 0)) {
                                    if (uVar6 - 0x41 < 0x1a) {
                                      uVar6 = uVar6 | 0x20;
                                    }
                                    goto joined_r0x10005624;
                                  }
                                }
                              }
                            }
                            else if ((uVar6 == 0x3a) && (uVar6 = (uint)PF_PART1(local_620, 1), uVar6 != 0))
                            {
                              if (uVar6 - 0x41 < 0x1a) {
                                uVar6 = uVar6 | 0x20;
                              }
                              if ((uVar6 == 0x2f) && (uVar6 = (uint)PF_PART1(local_620, 2), uVar6 != 0)) {
                                if (uVar6 - 0x41 < 0x1a) {
                                  uVar6 = uVar6 | 0x20;
                                }
joined_r0x10005624:
                                if (uVar6 == 0x2f) {
                                  recovered_1001ae3c((int)dst,(int)piVar24,(byte *)&local_624,
                                                     &DAT_10022c1b);
                                  goto LAB_10004ba8;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                  pcVar19 = &DAT_10022ca6;
                  vararg0 = str_10023ee4;
                  goto LAB_10005724;
                }
                if (((uint)puVar30 & 2) == 0 && iVar25 == 5) {
                  piVar24[0x1512d] = -1;
                  if (*(char *)((int)dst + iVar20 + -0x99) == '\0') {
                    recovered_10021d8c((int)dst,(uint)piVar24,*(int *)((int)dst + iVar29 + 0x354));
                  }
                  else {
                    recovered_10022230((int)dst,(uint)piVar24,(byte *)((int)dst - iVar18));
                  }
                  goto LAB_10004ba8;
                }
              }
              piVar24[0x1512d] = -1;
              goto LAB_1000572c;
            }
          }
          iVar27 = iVar27 + 1;
          iVar29 = iVar29 + -0x370;
          iVar11 = iVar11 + 0x370;
          iVar20 = iVar20 + -0x370;
          iVar18 = iVar18 + 0x370;
        } while (iVar27 != 1);
      }
    }
    piVar24[0x1512d] = -1;
    uVar13 = 1;
  }
  *(undefined2 *)((int)dst + 0x57da) = uVar13;
  goto LAB_10004ba8;
LAB_100058b8:
  pf_varargs_10023fa4__4__4_((char *)&local_124,0xa0,str_10023df6,(uint)local_84,(uint)pbVar17);
  iVar9 = Ram40010800;
  if ((iVar9 == 0x50414d57) && (iVar9 = Ram40010804, iVar9 != 0)) {
    uVar6 = Ram40010808;
    bVar32 = 0xb < uVar6;
    if (bVar32) {
      uVar6 = Ram40010808;
    }
    if (((bVar32 && 0x3b < uVar6) && (pcVar14 = (code *)UINT_40010838, pcVar14 != (code *)0x0)) &&
       (uVar6 = (*pcVar14)((char *)&local_124,local_734,local_730), uVar6 != 0)) {
      uVar12 = strlen(acStack_524);
      if (uVar12 < 0x3ff) {
        pf_varargs_10023fa4__4_(acStack_524 + uVar12,0x400 - uVar12,&DAT_10022ca6,(uint)&local_124);
      }
      uVar12 = strlen(acStack_524);
      if (uVar12 < 0x3ff) {
        (acStack_524 + uVar12)[0] = '\n';
        (acStack_524 + uVar12)[1] = '\0';
      }
    }
  }
LAB_10005774:
  uVar6 = piVar24[0x14b0b];
LAB_10005778:
  uVar21 = uVar21 + 1;
  if (uVar6 <= uVar21) goto LAB_10005964;
  goto LAB_10005784;
  while (iVar11 = iVar11 + -1, -iVar11 != iVar9) {
LAB_1000543c:
    if (iVar27 == iVar11) goto LAB_10005454;
  }
  uVar6 = 0xffffffff;
LAB_10005454:
  piVar24[0x1512d] = uVar6;
LAB_1000572c:
  *(undefined1 *)((int)dst + 0x57da) = 1;
LAB_10004ba8:
  if ((*(char *)((int)dst + 0x57da) != '\0') ||
     ((uVar6 = dst[0x816f0], *(char *)((int)dst + 0x57db) == '\x01' && (uVar6 % 0x18 == 0)))) {
    recovered_10006090(dst);
    uVar6 = dst[0x816f0];
    *(undefined1 *)((int)dst + 0x57da) = 0;
  }
  dst[0x816f0] = uVar6 + 1;
  iVar9 = 0x18;
  if ((dst[0x816ef] & 6U) == 2) {
    iVar9 = 6;
  }
  do {
    iVar11 = Ram40010800;
    if ((iVar11 == 0x50414d57) && (iVar11 = Ram40010804, iVar11 != 0)) {
      uVar6 = Ram40010808;
      bVar32 = 0xb < uVar6;
      if (bVar32) {
        uVar6 = Ram40010808;
      }
      if ((bVar32 && 0x9f < uVar6) && (pcVar14 = (code *)UINT_4001089c, pcVar14 != (code *)0x0)) {
        (*pcVar14)();
      }
    }
    iVar9 = iVar9 + -1;
  } while (iVar9 != 0);
  iVar9 = Ram40010800;
  if ((iVar9 == 0x50414d57) && (iVar9 = Ram40010804, iVar9 != 0)) {
    uVar6 = Ram40010808;
    bVar32 = 0xb < uVar6;
    if (bVar32) {
      uVar6 = Ram40010808;
    }
    if ((bVar32 && 0x9f < uVar6) && (pcVar14 = (code *)UINT_4001089c, pcVar14 != (code *)0x0)) {
      (*pcVar14)();
    }
  }
  if (*(char *)((int)dst + 0x57d9) == '\0') goto LAB_10005c40;
  goto LAB_10004280;
LAB_10005a84:
  bVar1 = pbVar17[-1];
  if (bVar1 == 0x2f || bVar1 == 0x5c) {
    pcVar19 = (char *)pbVar17;
  }
  else if (bVar1 == 0) goto LAB_10005a9c;
  pbVar17 = pbVar17 + 1;
  goto LAB_10005a84;
LAB_10005a9c:
  pbVar17 = (byte *)str_10023988;
  if ((byte *)pcVar19 != (byte *)0x0) {
    if (*pcVar19 == 0) {
      pcVar19 = str_10023988;
    }
    pbVar17 = (byte *)pcVar19;
  }
  pf_varargs_10023fa4__4_(acStack_524,0x140,str_10023a40,(uint)pbVar17);
  iVar9 = Ram40010800;
  if ((iVar9 == 0x50414d57) && (iVar9 = Ram40010804, iVar9 != 0)) {
    uVar6 = Ram40010808;
    bVar32 = 0xb < uVar6;
    if (bVar32) {
      uVar6 = Ram40010808;
    }
    if (((!bVar32 || uVar6 < 0x3c) || (pcVar14 = (code *)UINT_40010838, pcVar14 == (code *)0x0)) ||
       (uVar6 = (*pcVar14)(acStack_524,local_124,local_120), uVar6 == 0)) goto LAB_10005b18;
    pcVar19 = str_10023f33;
    vararg0 = acStack_524;
  }
  else {
LAB_10005b18:
    pcVar19 = &DAT_10022ca6;
    vararg0 = str_10023f45;
  }
LAB_10005724:
  pf_varargs_10023fa4__4_((char *)((int)piVar24 + 0x141),0xc0,pcVar19,(uint)vararg0);
  goto LAB_1000572c;
}

#undef DAT_10022c1b
#undef DAT_10022ca6
#undef DAT_10024114
#undef DAT_10024118
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef Ram40010800
#undef Ram40010804
#undef Ram40010808
#undef UINT_40010828
#undef UINT_4001082c
#undef UINT_40010834
#undef UINT_40010838
#undef UINT_4001084c
#undef UINT_40010850
#undef UINT_4001088c
#undef UINT_4001089c
#undef UINT_400108c8
#undef UINT_40010914
#undef str_10022ba4
#undef str_10022bbd
#undef str_10022bde
#undef str_10022be6
#undef str_10022c10
#undef str_10022c1c
#undef str_10022c32
#undef str_1002372d
#undef str_10023988
#undef str_10023a40
#undef str_10023d8e
#undef str_10023d98
#undef str_10023db2
#undef str_10023dd4
#undef str_10023df6
#undef str_10023dfc
#undef str_10023e0c
#undef str_10023ee4
#undef str_10023f0f
#undef str_10023f33
#undef str_10023f45
#undef abStack_727
#undef acStack_524
#undef local_9ac
#undef local_9ab
#undef local_99c
#undef local_984
#undef local_97c
#undef local_978
#undef local_974
#undef local_970
#undef local_734
#undef local_730
#undef local_728
#undef local_720
#undef local_718
#undef local_714
#undef local_710
#undef local_628
#undef local_624
#undef local_620
#undef local_520
#undef local_518
#undef local_124
#undef local_120
#undef local_84

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
 * Address: 0x10005e4c
 */

void recovered_10005e4c(void *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

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
                    /* WARNING: Could not recover jumptable at 0x10005e98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_1);
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

#undef DAT_10022ca6
#define DAT_10022ca6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x25eU)))
#undef DAT_100234a1
#define DAT_100234a1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa59U)))
#undef str_10023995
#define str_10023995 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xf4dU)))
#undef str_10023a8b
#define str_10023a8b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1043U)))
#undef str_10023aa3
#define str_10023aa3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x105bU)))
#undef str_10023e5b
#define str_10023e5b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1413U)))
#undef str_10023e70
#define str_10023e70 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1428U)))
#define in_stack_ffffff24 (*(uint *)(frame + 20))
#define in_stack_ffffff28 (*(uint *)(frame + 24))
#define local_d4 (*(byte (*)[192])(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005e9c
 */

void recovered_10005e9c(int param_1)

{
  unsigned char frame[272] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  int iVar6;
  bool bVar7;

  if (*(char *)(param_1 + 0x205da4) == '\x01') {
    uVar2 = *(uint *)(param_1 + 0x205bac);
    iVar6 = 0;
    if (uVar2 != 0) {
      uVar3 = *(uint *)(param_1 + 0x205dac);
      bVar7 = uVar2 <= uVar3;
      if (bVar7) {
        uVar3 = *(uint *)(param_1 + 0x205bb0);
      }
      if (!bVar7 || uVar3 < uVar2) {
        iVar6 = uVar3 * 0x555cc + param_1 + 0x58e4;
      }
    }
    local_d4[0] = 0;
    if (*(char *)(param_1 + 0x205da5) == '\x01') {
      if (*(char *)(param_1 + 0x205cb8) == '\x01') {
        memcpy((void *)(param_1 + 0x205bc8),(char *)(param_1 + 0x205cb8),0xec);
      }
      if (*(char *)(param_1 + 0x205da6) == '\x01') {
        pcVar5 = (char *)(param_1 + 0x205eb8);
        in_stack_ffffff24 = param_1 + 0x205f38;
        pcVar4 = str_10023e5b;
        if (*pcVar5 == '\0') {
          pcVar5 = &DAT_100234a1;
        }
      }
      else {
        pcVar5 = (char *)(param_1 + 0x2060d8);
        pcVar4 = str_10023e70;
        if (*pcVar5 == '\0') {
          pcVar5 = str_10023995;
        }
      }
      pf_varargs_10023fa4__4__4_((char *)local_d4,0xc0,pcVar4,(uint)pcVar5,in_stack_ffffff24);
      uVar2 = 0;
      *(undefined1 *)(param_1 + 0x205da4) = 0;
    }
    else {
      pcVar4 = &DAT_100234a1;
      if (*(char *)(param_1 + 0x205eb8) != '\0') {
        pcVar4 = (char *)(param_1 + 0x205eb8);
      }
      if (*(int *)(param_1 + 0x205db4) == 0) {
        pcVar5 = str_10023aa3;
      }
      else {
        pcVar5 = str_10023a8b;
        in_stack_ffffff28 = *(int *)(param_1 + 0x205db4) + 0x3ffU >> 10;
      }
      uVar2 = pf_varargs_10023fa4__4__4__4_
                        ((char *)local_d4,0xc0,pcVar5,(uint)pcVar4,
                         *(int *)(param_1 + 0x205db0) + 0x3ffU >> 10,in_stack_ffffff28);
    }
    if (iVar6 != 0) {
      uVar2 = (uint)local_d4[0];
    }
    if (iVar6 != 0 && uVar2 != 0) {
      iVar1 = strcmp((char *)(iVar6 + 0x141),(char *)local_d4);
      if (iVar1 != 0) {
        pf_varargs_10023fa4__4_((char *)(iVar6 + 0x141),0xc0,&DAT_10022ca6,(uint)local_d4);
        *(undefined1 *)(param_1 + 0x57da) = 1;
        return;
      }
    }
  }
  return;
}

#undef DAT_10022ca6
#undef DAT_100234a1
#undef str_10023995
#undef str_10023a8b
#undef str_10023aa3
#undef str_10023e5b
#undef str_10023e70
#undef in_stack_ffffff24
#undef in_stack_ffffff28
#undef local_d4

#undef DAT_10024114
#define DAT_10024114 (*(uint *)(((uintptr_t)pf_module_state + 0x16ccU)))
#undef DAT_10024118
#define DAT_10024118 (*(uint *)(((uintptr_t)pf_module_state + 0x16d0U)))
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
#undef UINT_40010918
#define UINT_40010918 (*(uint *)(0x40010918U))
#undef str_10022bde
#define str_10022bde (*(char (*)[1])(((uintptr_t)pf_module_state + 0x196U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006090
 */

void recovered_10006090(void *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  code *pcVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;

  if (param_1 == (void *)0x0) {
    return;
  }
  if (*(uint *)((int)param_1 + 0x205bac) == 0) {
    return;
  }
  uVar3 = *(uint *)((int)param_1 + 0x205bb0);
  if (*(uint *)((int)param_1 + 0x205bac) <= uVar3) {
    return;
  }
  recovered_1001f6a4((int)param_1);
  iVar4 = (int)param_1 + uVar3 * 0x555cc + 0x58e4;
  recovered_10020e98((int)param_1,iVar4,(undefined8 *)0x0,(undefined8 *)0x48,DAT_10024114,
                     DAT_10024118 - 0x5e);
  recovered_10020354((int)param_1,iVar4);
  recovered_1001f1ac((int)param_1,iVar4);
  uVar3 = *(uint *)((int)param_1 + 0x57d4);
  if (uVar3 == 0) goto LAB_1000619c;
  iVar4 = Ram40010800;
  if ((iVar4 == 0x50414d57) && (iVar4 = Ram40010804, iVar4 != 0)) {
    uVar1 = Ram40010808;
    bVar5 = 0xb < uVar1;
    if (bVar5) {
      uVar1 = Ram40010808;
    }
    if (((!bVar5 || uVar1 < 0x11c) || (pcVar2 = (code *)UINT_40010918, pcVar2 == (code *)0x0)) ||
       (uVar3 = (*pcVar2)((void *)((int)param_1 + 0x3d4),uVar3), uVar3 == 0)) goto LAB_1000618c;
  }
  else {
LAB_1000618c:
    *(undefined1 *)((int)param_1 + 0x57d8) = 0;
  }
  *(uint *)((int)param_1 + 0x57d4) = 0;
LAB_1000619c:
  terror_ui_window_present(param_1,str_10022bde,*(void **)((int)param_1 + 0x340),DAT_10024114,DAT_10024118
                     ,DAT_10024114 << 2,0xffffff);
  return;
}

#undef DAT_10024114
#undef DAT_10024118
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef Ram40010800
#undef Ram40010804
#undef Ram40010808
#undef UINT_40010918
#undef str_10022bde

#undef DAT_10022c1b
#define DAT_10022c1b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1d3U)))
#undef DAT_10022ca6
#define DAT_10022ca6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x25eU)))
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
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000620c
 */

void recovered_1000620c(uint param_1,byte *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  byte *vararg0;
  char *dst;
  uint *puVar7;
  int *dst_00;
  uint uVar8;
  bool bVar9;

  puVar7 = (uint *)(param_1 + 0x205bac);
  uVar8 = *puVar7;
  if (uVar8 < 6) {
    iVar3 = uVar8 * 0x555cc + param_1;
    *puVar7 = uVar8 + 1;
    dst_00 = (int *)(iVar3 + 0x58e4);
    memset(dst_00,0,0x555cc);
    iVar4 = recovered_1000645c((int)dst_00);
    if (iVar4 == 0) {
      memset(dst_00,0,0x555cc);
      *puVar7 = *puVar7 - 1;
    }
    else {
      *(undefined1 *)dst_00 = 1;
      iVar5 = -1;
      iVar4 = Ram40010800;
      *(undefined4 *)(iVar3 + 0x59d98) = 0xffffffff;
      if ((iVar4 == 0x50414d57) && (iVar4 = Ram40010804, iVar4 != 0)) {
        uVar1 = Ram40010808;
        bVar9 = 0xb < uVar1;
        if (bVar9) {
          uVar1 = Ram40010808;
        }
        if ((bVar9 && 0xbf < uVar1) && (pcVar2 = (code *)UINT_400108bc, pcVar2 != (code *)0x0)) {
          iVar5 = (*pcVar2)();
        }
      }
      *(int *)(iVar3 + 0x5be8) = iVar5;
      pf_varargs_10023fa4__4_((char *)(iVar3 + 0x59e5),0x40,&DAT_10022ca6,((uintptr_t)pf_module_state + 0x1f2U));
      if (*(char **)(iVar3 + 0x5bf0) != (char *)0x0) {
        pf_varargs_10023fa4__4_(*(char **)(iVar3 + 0x5bf0),0x50000,&DAT_10022ca6,((uintptr_t)pf_module_state + 0x1faU));
      }
      pf_varargs_10023fa4__4_((char *)(iVar3 + 0x58e5),0x100,&DAT_10022ca6,((uintptr_t)pf_module_state + 0x252U));
      recovered_100066d0(param_1,(int)dst_00);
      recovered_10007eb4(param_1,dst_00);
      *(uint *)(param_1 + 0x205bb0) = uVar8;
      dst = (char *)(param_1 + 0x57de);
      vararg0 = &DAT_10022c1b;
      if ((param_2 != (byte *)0x0) && (*param_2 != 0)) {
        vararg0 = param_2;
      }
      pf_varargs_10023fa4__4_(dst,0x100,&DAT_10022ca6,(uint)vararg0);
      uVar6 = strlen(dst);
      *(ulong *)(param_1 + 0x58e0) = uVar6;
      if (param_2 != (byte *)0x0) {
        uVar6 = (ulong)*param_2;
      }
      if (param_2 != (byte *)0x0 && uVar6 != 0) {
        recovered_1000a604(param_1,(int)dst_00,param_2);
        pf_varargs_10023fa4__4_(dst,0x100,&DAT_10022ca6,(uint)(iVar3 + 0x58e5));
        uVar6 = strlen(dst);
        *(ulong *)(param_1 + 0x58e0) = uVar6;
      }
      *(undefined1 *)(param_1 + 0x57da) = 1;
    }
  }
  return;
}

#undef DAT_10022c1b
#undef DAT_10022ca6
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef Ram40010800
#undef Ram40010804
#undef Ram40010808
#undef UINT_400108bc

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
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000645c
 */

undefined4 recovered_1000645c(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  code *pcVar2;
  int iVar3;
  void *pvVar4;
  void *pvVar5;
  bool bVar6;

  if (param_1 == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x30c) != 0) {
    bVar6 = *(int *)(param_1 + 0x310) != 0;
    iVar3 = 0;
    if (bVar6) {
      iVar3 = *(int *)(param_1 + 0x314);
    }
    if ((bVar6 && iVar3 != 0) && (*(int *)(param_1 + 0x318) != 0)) {
      return 1;
    }
  }
  recovered_1000b89c(param_1);
  pvVar5 = (void *)0x0;
  iVar3 = Ram40010800;
  pvVar4 = (void *)0x0;
  if (iVar3 == 0x50414d57) {
    iVar3 = Ram40010804;
    pvVar4 = (void *)0x0;
    if (iVar3 != 0) {
      uVar1 = Ram40010808;
      pvVar4 = (void *)0x0;
      if (0xb < uVar1) {
        uVar1 = Ram40010808;
        pvVar4 = (void *)0x0;
        if ((0x4f < uVar1) && (pcVar2 = (code *)UINT_4001084c, pcVar2 != (code *)0x0)) {
          pvVar4 = (*pcVar2)(0x50000);
        }
      }
    }
  }
  *(void **)(param_1 + 0x30c) = pvVar4;
  iVar3 = Ram40010800;
  if ((iVar3 == 0x50414d57) && (iVar3 = Ram40010804, iVar3 != 0)) {
    uVar1 = Ram40010808;
    bVar6 = 0xb < uVar1;
    if (bVar6) {
      uVar1 = Ram40010808;
    }
    if ((bVar6 && 0x4f < uVar1) && (pcVar2 = (code *)UINT_4001084c, pcVar2 != (code *)0x0)) {
      pvVar5 = (*pcVar2)(0x60000);
    }
  }
  *(void **)(param_1 + 0x310) = pvVar5;
  pvVar5 = (void *)0x0;
  iVar3 = Ram40010800;
  pvVar4 = (void *)0x0;
  if (iVar3 == 0x50414d57) {
    iVar3 = Ram40010804;
    pvVar4 = (void *)0x0;
    if (iVar3 != 0) {
      uVar1 = Ram40010808;
      pvVar4 = (void *)0x0;
      if (0xb < uVar1) {
        uVar1 = Ram40010808;
        pvVar4 = (void *)0x0;
        if ((0x4f < uVar1) && (pcVar2 = (code *)UINT_4001084c, pcVar2 != (code *)0x0)) {
          pvVar4 = (*pcVar2)(0x8000);
        }
      }
    }
  }
  *(void **)(param_1 + 0x314) = pvVar4;
  iVar3 = Ram40010800;
  if ((iVar3 == 0x50414d57) && (iVar3 = Ram40010804, iVar3 != 0)) {
    uVar1 = Ram40010808;
    bVar6 = 0xb < uVar1;
    if (bVar6) {
      uVar1 = Ram40010808;
    }
    if ((bVar6 && 0x4f < uVar1) && (pcVar2 = (code *)UINT_4001084c, pcVar2 != (code *)0x0)) {
      pvVar5 = (*pcVar2)(0x8000);
    }
  }
  *(void **)(param_1 + 0x318) = pvVar5;
  if (*(undefined1 **)(param_1 + 0x30c) != (undefined1 *)0x0) {
    bVar6 = *(int *)(param_1 + 0x310) != 0;
    iVar3 = 0;
    if (bVar6) {
      iVar3 = *(int *)(param_1 + 0x314);
    }
    if ((bVar6 && iVar3 != 0) && (pvVar5 != (void *)0x0)) {
      **(undefined1 **)(param_1 + 0x30c) = 0;
      **(undefined1 **)(param_1 + 0x310) = 0;
      **(undefined1 **)(param_1 + 0x314) = 0;
      **(undefined1 **)(param_1 + 0x318) = 0;
      return 1;
    }
  }
  recovered_1000b89c(param_1);
  return 0;
}

#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef Ram40010800
#undef Ram40010804
#undef Ram40010808
#undef UINT_4001084c

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
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000667c
 */

int recovered_1000667c(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  code *UNRECOVERED_JUMPTABLE;
  int iVar2;
  bool bVar3;

  iVar2 = Ram40010800;
  if ((iVar2 == 0x50414d57) && (iVar2 = Ram40010804, iVar2 != 0)) {
    uVar1 = Ram40010808;
    bVar3 = 0xb < uVar1;
    if (bVar3) {
      uVar1 = Ram40010808;
    }
    if ((bVar3 && 0xbf < uVar1) &&
       (UNRECOVERED_JUMPTABLE = (code *)UINT_400108bc, UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x100066cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar2 = (*UNRECOVERED_JUMPTABLE)();
      return iVar2;
    }
  }
  return -1;
}

#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef Ram40010800
#undef Ram40010804
#undef Ram40010808
#undef UINT_400108bc

#undef DAT_10022ca6
#define DAT_10022ca6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x25eU)))
#undef DAT_10022ca9
#define DAT_10022ca9 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x261U)))
#undef DAT_10022cad
#define DAT_10022cad (*(uint8_t *)(((uintptr_t)pf_module_state + 0x265U)))
#undef DAT_10022cb2
#define DAT_10022cb2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x26aU)))
#undef DAT_10022cb3
#define DAT_10022cb3 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x26bU)))
#undef DAT_10022cb4
#define DAT_10022cb4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x26cU)))
#undef DAT_10022cb5
#define DAT_10022cb5 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x26dU)))
#undef DAT_10022cb6
#define DAT_10022cb6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x26eU)))
#undef DAT_10022cb7
#define DAT_10022cb7 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x26fU)))
#undef DAT_10022cb8
#define DAT_10022cb8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x270U)))
#undef DAT_10022cb9
#define DAT_10022cb9 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x271U)))
#undef DAT_10022cba
#define DAT_10022cba (*(uint8_t *)(((uintptr_t)pf_module_state + 0x272U)))
#undef DAT_10022cbb
#define DAT_10022cbb (*(uint8_t *)(((uintptr_t)pf_module_state + 0x273U)))
#undef DAT_10022cd2
#define DAT_10022cd2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x28aU)))
#undef DAT_10022cd3
#define DAT_10022cd3 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x28bU)))
#undef DAT_10022cd4
#define DAT_10022cd4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x28cU)))
#undef DAT_10022cd5
#define DAT_10022cd5 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x28dU)))
#undef DAT_10022cd6
#define DAT_10022cd6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x28eU)))
#undef DAT_10022d05
#define DAT_10022d05 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2bdU)))
#undef DAT_10023339
#define DAT_10023339 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8f1U)))
#undef DAT_10023366
#define DAT_10023366 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x91eU)))
#undef str_10022cc8
#define str_10022cc8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x280U)))
#undef str_10022cda
#define str_10022cda (*(char (*)[1])(((uintptr_t)pf_module_state + 0x292U)))
#undef str_10022ce5
#define str_10022ce5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x29dU)))
#undef str_10022ceb
#define str_10022ceb (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2a3U)))
#undef str_10022cf4
#define str_10022cf4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2acU)))
#undef str_10022cfb
#define str_10022cfb (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2b3U)))
#undef str_10022d09
#define str_10022d09 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2c1U)))
#undef str_1002333e
#define str_1002333e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x8f6U)))
#undef str_1002334f
#define str_1002334f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x907U)))
#undef str_10023360
#define str_10023360 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x918U)))
#undef str_10023368
#define str_10023368 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x920U)))
#define local_8480 (*(uint *)(frame + 16))
#define local_8465 (*(char (*)[192])(frame + 43))
#define local_83a5 (*(byte *)(frame + 235))
#define local_83a4 (*(byte (*)[95])(frame + 236))
#define local_8345 (*(byte (*)[4])(frame + 331))
#define local_8341 (*(byte *)(frame + 335))
#define local_8340 (*(byte *)(frame + 336))
#define local_833f (*(byte *)(frame + 337))
#define local_833e (*(byte *)(frame + 338))
#define local_345 (*(byte *)(frame + 33099))
#define local_344 (*(byte *)(frame + 33100))
#define local_343 (*(byte *)(frame + 33101))
#define local_342 (*(byte *)(frame + 33102))
#define local_341 (*(byte *)(frame + 33103))
#define local_340 (*(byte *)(frame + 33104))
#define local_33f (*(byte *)(frame + 33105))
#define local_33e (*(byte *)(frame + 33106))
#define local_245 (*(byte (*)[256])(frame + 33355))
#define local_145 (*(char *)(frame + 33611))
#define local_144 (*(byte *)(frame + 33612))
#define local_143 (*(byte *)(frame + 33613))
#define local_142 (*(byte *)(frame + 33614))
#define local_141 (*(byte *)(frame + 33615))
#define local_140 (*(byte *)(frame + 33616))
#define local_13f (*(byte *)(frame + 33617))
#define local_13e (*(byte *)(frame + 33618))
#define abStack_125 (*(byte (*)[261])(frame + 33643))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100066d0
 */

/* WARNING: Removing unreachable block (ram,0x1000730c) */

void recovered_100066d0(int param_1,int param_2)

{
  unsigned char frame[33968] __attribute__((aligned(16))) = {0};

  bool bVar1;
  int iVar2;
  ulong uVar3;
  byte *pbVar4;
  uint uVar5;
  uint extraout_r1 = 0;
  ulong uVar6;
  uint extraout_r1_00 = 0;
  uint extraout_r1_01 = 0;
  uint uVar7;
  char *pcVar8;
  uint uVar9;
  char *pcVar10;
  int iVar11;
  byte *pbVar12;
  char *pcVar13;
  byte *pbVar14;
  char *src;
  bool bVar15;

  if (param_2 == 0) {
    return;
  }
  iVar2 = recovered_1000645c(param_2);
  if (iVar2 == 0) {
    return;
  }
  pbVar14 = *(byte **)(param_2 + 0x30c);
  **(undefined1 **)(param_2 + 0x310) = 0;
  **(undefined1 **)(param_2 + 0x314) = 0;
  **(undefined1 **)(param_2 + 0x318) = 0;
  pcVar8 = (char *)(param_2 + 0x554c8);
  *pcVar8 = '\0';
  if (pbVar14 != (byte *)0x0) {
    local_8480 = 0;
LAB_1000678c:
    do {
      while( true ) {
        while( true ) {
          if ((*pbVar14 == 0) ||
             (uVar3 = strlen(*(char **)(param_2 + 0x310)), 0x5fffe < uVar3))
          goto LAB_10007a64;
          pbVar4 = (byte *)strchr((char *)pbVar14,0x3c);
          if (pbVar4 == (byte *)0x0) {
            pcVar8 = *(char **)(param_2 + 0x310);
            if ((pcVar8 != (char *)0x0) && (uVar3 = strlen(pcVar8), uVar3 < 0x5ffff)) {
              pf_varargs_10023fa4__4_(pcVar8 + uVar3,0x60000 - uVar3,&DAT_10022ca6,(uint)pbVar14);
            }
            goto LAB_10007a64;
          }
          if (pbVar14 < pbVar4) {
            uVar3 = strlen(*(char **)(param_2 + 0x310));
            pcVar13 = *(char **)(param_2 + 0x310);
            uVar5 = 0x5ffff - uVar3;
            if ((int)pbVar4 - (int)pbVar14 < (int)(0x5ffff - uVar3)) {
              uVar5 = (int)pbVar4 - (int)pbVar14;
            }
            if ((pcVar13 != (char *)0x0) && (uVar3 = strlen(pcVar13), uVar3 < 0x5ffff))
            {
              if (0x5ffff - uVar3 < uVar5) {
                uVar5 = 0x5ffff - uVar3;
              }
              if (uVar5 != 0) {
                memcpy(pcVar13 + uVar3,pbVar14,uVar5);
              }
              pcVar13[uVar5 + uVar3] = '\0';
            }
          }
          pcVar13 = strchr((char *)pbVar4,0x3e);
          if (pcVar13 == (char *)0x0) goto LAB_10007a64;
          iVar11 = (int)pcVar13 - (int)pbVar4;
          iVar2 = 0x100;
          if (iVar11 < 0x100) {
            iVar2 = iVar11;
          }
          pbVar12 = abStack_125 + 1;
          memcpy(pbVar12,pbVar4 + 1,iVar2 - 1U);
          pbVar12[iVar2 - 1U] = 0;
          local_145 = '\0';
          recovered_1000ba88(pbVar12,&local_144,0x20,&local_145);
          iVar2 = strncmp((char *)pbVar12,&DAT_10022ca9,3);
          if (iVar2 != 0) break;
          pcVar10 = strstr((char *)(pbVar4 + 4),&DAT_10022cad);
          pbVar14 = (byte *)(pcVar10 + 3);
          if (pcVar10 == (char *)0x0) {
            pbVar14 = (byte *)(pcVar13 + 1);
          }
        }
        if (local_145 != '\0') goto LAB_10007354;
        uVar5 = (uint)local_144;
        bVar1 = true;
        if (uVar5 == 0) {
          pcVar10 = &DAT_10022cb6;
          goto LAB_100069cc;
        }
        if (uVar5 != 0x21) break;
LAB_10006784:
        pbVar14 = (byte *)(pcVar13 + 1);
      }
      uVar9 = uVar5;
      if (uVar5 - 0x41 < 0x1a) {
        uVar9 = uVar5 | 0x20;
      }
      if (uVar9 == 0x62) {
        uVar9 = (uint)local_143;
        if (uVar9 == 0) {
          pcVar10 = &DAT_10022cb7;
          bVar1 = false;
        }
        else {
          bVar1 = false;
          if (uVar9 - 0x41 < 0x1a) {
            uVar9 = uVar9 | 0x20;
          }
          if (uVar9 != 0x61) goto LAB_10006cec;
          uVar9 = (uint)local_142;
          if (uVar9 == 0) {
            pcVar10 = &DAT_10022cb8;
            bVar1 = false;
          }
          else {
            bVar1 = false;
            if (uVar9 - 0x41 < 0x1a) {
              uVar9 = uVar9 | 0x20;
            }
            if (uVar9 != 0x73) goto LAB_10006cec;
            uVar9 = (uint)local_141;
            if (uVar9 == 0) {
              pcVar10 = &DAT_10022cb9;
              bVar1 = false;
            }
            else {
              bVar1 = false;
              if (uVar9 - 0x41 < 0x1a) {
                uVar9 = uVar9 | 0x20;
              }
              bVar15 = uVar9 == 0x65;
              if (bVar15) {
                uVar9 = (uint)local_140;
              }
              if (!bVar15 || uVar9 != 0) goto LAB_10006cec;
              pcVar10 = &DAT_10022cba;
            }
          }
        }
LAB_100069cc:
        if (*pcVar10 == '\0') {
          recovered_1000bd50((char *)(abStack_125 + 1),&DAT_10022cbb,(char *)local_8345,0x100);
          uVar5 = (uint)local_8345[0];
          if (uVar5 == 0) {
LAB_10006bdc:
            pbVar14 = (byte *)(pcVar13 + 1);
          }
          else {
            uVar9 = uVar5;
            if (uVar5 - 0x41 < 0x1a) {
              uVar9 = uVar5 | 0x20;
            }
            if (uVar9 == 0x68) {
              uVar9 = (uint)local_8345[1];
              if (uVar9 == 0) {
LAB_10006ae0:
                uVar9 = (uint)local_8345[1];
                if (uVar9 != 0) {
                  if (uVar9 - 0x41 < 0x1a) {
                    uVar9 = uVar9 | 0x20;
                  }
                  if ((uVar9 == 0x74) && (uVar9 = (uint)local_8345[2], uVar9 != 0)) {
                    if (uVar9 - 0x41 < 0x1a) {
                      uVar9 = uVar9 | 0x20;
                    }
                    if ((uVar9 == 0x74) && (uVar9 = (uint)local_8345[3], uVar9 != 0)) {
                      if (uVar9 - 0x41 < 0x1a) {
                        uVar9 = uVar9 | 0x20;
                      }
                      if ((uVar9 == 0x70) && (uVar9 = (uint)local_8341, uVar9 != 0)) {
                        if (uVar9 - 0x41 < 0x1a) {
                          uVar9 = uVar9 | 0x20;
                        }
                        if ((uVar9 == 0x73) && (uVar9 = (uint)local_8340, uVar9 != 0)) {
                          if (uVar9 - 0x41 < 0x1a) {
                            uVar9 = uVar9 | 0x20;
                          }
                          if ((uVar9 == 0x3a) && (uVar9 = (uint)local_833f, uVar9 != 0)) {
                            if (uVar9 - 0x41 < 0x1a) {
                              uVar9 = uVar9 | 0x20;
                            }
                            if ((uVar9 == 0x2f) && (uVar9 = (uint)local_833e, uVar9 != 0)) {
                              if (uVar9 - 0x41 < 0x1a) {
                                uVar9 = uVar9 | 0x20;
                              }
                              if (uVar9 == 0x2f) goto LAB_10006c14;
                            }
                          }
                        }
                      }
                    }
                  }
                }
                goto LAB_10006bc0;
              }
              if (uVar9 - 0x41 < 0x1a) {
                uVar9 = uVar9 | 0x20;
              }
              if ((uVar9 != 0x74) || (uVar9 = (uint)local_8345[2], uVar9 == 0)) goto LAB_10006ae0;
              if (uVar9 - 0x41 < 0x1a) {
                uVar9 = uVar9 | 0x20;
              }
              if ((uVar9 != 0x74) || (uVar9 = (uint)local_8345[3], uVar9 == 0)) goto LAB_10006ae0;
              if (uVar9 - 0x41 < 0x1a) {
                uVar9 = uVar9 | 0x20;
              }
              if ((uVar9 != 0x70) || (uVar9 = (uint)local_8341, uVar9 == 0)) goto LAB_10006ae0;
              if (uVar9 - 0x41 < 0x1a) {
                uVar9 = uVar9 | 0x20;
              }
              if ((uVar9 != 0x3a) || (uVar9 = (uint)local_8340, uVar9 == 0)) goto LAB_10006ae0;
              if (uVar9 - 0x41 < 0x1a) {
                uVar9 = uVar9 | 0x20;
              }
              if ((uVar9 != 0x2f) || (uVar9 = (uint)local_833f, uVar9 == 0)) goto LAB_10006ae0;
              if (uVar9 - 0x41 < 0x1a) {
                uVar9 = uVar9 | 0x20;
              }
              if (uVar9 != 0x2f) goto LAB_10006ae0;
            }
            else {
LAB_10006bc0:
              if (uVar5 != 0x5b) {
                recovered_1000c270(param_2,local_8345,pcVar8);
                goto LAB_10006bdc;
              }
            }
LAB_10006c14:
            pf_varargs_10023fa4__4_(pcVar8,0x100,&DAT_10022ca6,(uint)local_8345);
            pbVar14 = (byte *)(pcVar13 + 1);
          }
          goto LAB_1000678c;
        }
      }
      else {
        if (uVar9 != 0x6d) {
          bVar1 = false;
          goto LAB_10006cec;
        }
        uVar9 = (uint)local_143;
        if (uVar9 == 0) {
          pcVar10 = &DAT_10022cb2;
LAB_10006c4c:
          if (*pcVar10 == '\0') goto LAB_10006784;
          pcVar10 = &DAT_10022cb6;
          if (uVar5 == 0) goto LAB_100069cc;
        }
        else {
          if (uVar9 - 0x41 < 0x1a) {
            uVar9 = uVar9 | 0x20;
          }
          if (uVar9 == 0x65) {
            uVar9 = (uint)local_142;
            if (uVar9 == 0) {
              pcVar10 = &DAT_10022cb3;
            }
            else {
              if (uVar9 - 0x41 < 0x1a) {
                uVar9 = uVar9 | 0x20;
              }
              if (uVar9 != 0x74) goto LAB_10006c6c;
              uVar9 = (uint)local_141;
              if (uVar9 == 0) {
                pcVar10 = &DAT_10022cb4;
              }
              else {
                if (uVar9 - 0x41 < 0x1a) {
                  uVar9 = uVar9 | 0x20;
                }
                bVar15 = uVar9 != 0x61;
                if (!bVar15) {
                  uVar9 = (uint)local_140;
                }
                if (bVar15 || uVar9 != 0) goto LAB_10006c6c;
                pcVar10 = &DAT_10022cb5;
              }
            }
            goto LAB_10006c4c;
          }
        }
LAB_10006c6c:
        bVar1 = false;
      }
LAB_10006cec:
      pcVar10 = str_10022ce5;
      if (!bVar1) {
        uVar9 = uVar5;
        if (uVar5 - 0x41 < 0x1a) {
          uVar9 = uVar5 | 0x20;
        }
        if (uVar9 == 0x73) {
          uVar9 = (uint)local_143;
          if (uVar9 == 0) {
            pcVar10 = str_10022ce5 + 1;
          }
          else {
            if (uVar9 - 0x41 < 0x1a) {
              uVar9 = uVar9 | 0x20;
            }
            if (uVar9 != 0x74) goto LAB_10007034;
            uVar9 = (uint)local_142;
            if (uVar9 == 0) {
              pcVar10 = str_10022ce5 + 2;
            }
            else {
              if (uVar9 - 0x41 < 0x1a) {
                uVar9 = uVar9 | 0x20;
              }
              if (uVar9 != 0x79) goto LAB_10007034;
              uVar9 = (uint)local_141;
              if (uVar9 == 0) {
                pcVar10 = str_10022ce5 + 3;
              }
              else {
                if (uVar9 - 0x41 < 0x1a) {
                  uVar9 = uVar9 | 0x20;
                }
                if (uVar9 != 0x6c) goto LAB_10007034;
                uVar9 = (uint)local_140;
                if (uVar9 == 0) {
                  pcVar10 = str_10022ce5 + 4;
                }
                else {
                  if (uVar9 - 0x41 < 0x1a) {
                    uVar9 = uVar9 | 0x20;
                  }
                  bVar15 = uVar9 == 0x65;
                  if (bVar15) {
                    uVar9 = (uint)local_13f;
                  }
                  if (!bVar15 || uVar9 != 0) goto LAB_10007034;
                  pcVar10 = str_10022ce5 + 5;
                }
              }
            }
          }
          goto LAB_10006d00;
        }
        if (uVar9 == 0x6c) {
          uVar9 = (uint)local_143;
          if (uVar9 == 0) {
            pcVar10 = &DAT_10022cd2;
          }
          else {
            if (uVar9 - 0x41 < 0x1a) {
              uVar9 = uVar9 | 0x20;
            }
            if (uVar9 != 0x69) goto LAB_10007034;
            uVar9 = (uint)local_142;
            if (uVar9 == 0) {
              pcVar10 = &DAT_10022cd3;
            }
            else {
              if (uVar9 - 0x41 < 0x1a) {
                uVar9 = uVar9 | 0x20;
              }
              if (uVar9 != 0x6e) goto LAB_10007034;
              uVar9 = (uint)local_141;
              if (uVar9 == 0) {
                pcVar10 = &DAT_10022cd4;
              }
              else {
                if (uVar9 - 0x41 < 0x1a) {
                  uVar9 = uVar9 | 0x20;
                }
                bVar1 = uVar9 != 0x6b;
                if (!bVar1) {
                  uVar9 = (uint)local_140;
                }
                if (bVar1 || uVar9 != 0) goto LAB_10007034;
                pcVar10 = &DAT_10022cd5;
              }
            }
          }
          if (*pcVar10 == '\0') {
            recovered_1000bd50((char *)(abStack_125 + 1),&DAT_10022cd6,(char *)&local_83a5,0x40);
            recovered_1000bd50((char *)(abStack_125 + 1),&DAT_10022cbb,(char *)local_245,0x100);
            local_8465[0] = '\0';
            local_345 = 0;
            if (local_245[0] != 0) {
              recovered_1000c270(param_2,local_245,(char *)&local_345);
              uVar5 = (uint)local_345;
              if (uVar5 == 0) {
LAB_100078c8:
                uVar9 = 0;
                bVar1 = false;
              }
              else {
                if (uVar5 - 0x41 < 0x1a) {
                  uVar5 = uVar5 | 0x20;
                }
                if (uVar5 != 0x68) goto LAB_100078c8;
                uVar5 = (uint)local_344;
                if (uVar5 == 0) {
LAB_100077d4:
                  uVar5 = (uint)local_344;
                  if (uVar5 == 0) goto LAB_100078c8;
                  if (uVar5 - 0x41 < 0x1a) {
                    uVar5 = uVar5 | 0x20;
                  }
                  if ((uVar5 == 0x74) && (uVar5 = (uint)local_343, uVar5 != 0)) {
                    if (uVar5 - 0x41 < 0x1a) {
                      uVar5 = uVar5 | 0x20;
                    }
                    if ((uVar5 == 0x74) && (uVar5 = (uint)local_342, uVar5 != 0)) {
                      if (uVar5 - 0x41 < 0x1a) {
                        uVar5 = uVar5 | 0x20;
                      }
                      if ((uVar5 == 0x70) && (uVar5 = (uint)local_341, uVar5 != 0)) {
                        if (uVar5 - 0x41 < 0x1a) {
                          uVar5 = uVar5 | 0x20;
                        }
                        if ((uVar5 == 0x73) && (uVar5 = (uint)local_340, uVar5 != 0)) {
                          if (uVar5 - 0x41 < 0x1a) {
                            uVar5 = uVar5 | 0x20;
                          }
                          if ((uVar5 == 0x3a) && (uVar5 = (uint)local_33f, uVar5 != 0)) {
                            if (uVar5 - 0x41 < 0x1a) {
                              uVar5 = uVar5 | 0x20;
                            }
                            if (uVar5 == 0x2f) {
                              uVar5 = (uint)local_33e;
                              uVar9 = 0;
                              bVar1 = false;
                              if (uVar5 != 0) {
                                if (uVar5 - 0x41 < 0x1a) {
                                  uVar5 = uVar5 | 0x20;
                                }
                                bVar1 = uVar5 == 0x2f;
                                uVar9 = (uint)bVar1;
                              }
                              goto LAB_100078cc;
                            }
                          }
                        }
                      }
                    }
                  }
                  uVar9 = 0;
                  bVar1 = false;
                }
                else {
                  if (uVar5 - 0x41 < 0x1a) {
                    uVar5 = uVar5 | 0x20;
                  }
                  if ((uVar5 != 0x74) || (uVar5 = (uint)local_343, uVar5 == 0)) goto LAB_100077d4;
                  if (uVar5 - 0x41 < 0x1a) {
                    uVar5 = uVar5 | 0x20;
                  }
                  if ((uVar5 != 0x74) || (uVar5 = (uint)local_342, uVar5 == 0)) goto LAB_100077d4;
                  if (uVar5 - 0x41 < 0x1a) {
                    uVar5 = uVar5 | 0x20;
                  }
                  if ((uVar5 != 0x70) || (uVar5 = (uint)local_341, uVar5 == 0)) goto LAB_100077d4;
                  if (uVar5 - 0x41 < 0x1a) {
                    uVar5 = uVar5 | 0x20;
                  }
                  if ((uVar5 != 0x3a) || (uVar5 = (uint)local_340, uVar5 == 0)) goto LAB_100077d4;
                  if (uVar5 - 0x41 < 0x1a) {
                    uVar5 = uVar5 | 0x20;
                  }
                  if ((uVar5 != 0x2f) || (uVar5 = (uint)local_33f, uVar5 == 0)) goto LAB_100077d4;
                  if (uVar5 - 0x41 < 0x1a) {
                    uVar5 = uVar5 | 0x20;
                  }
                  bVar1 = uVar5 == 0x2f;
                  uVar9 = (uint)bVar1;
                  if (uVar5 != 0x2f) goto LAB_100077d4;
                }
              }
LAB_100078cc:
              if (local_245[0] != 0) {
                uVar3 = strlen(str_10022cda);
                uVar5 = extraout_r1_01;
                if (uVar3 != 0) {
                  uVar5 = (uint)local_83a5;
                }
                if (uVar3 != 0 && uVar5 != 0) {
                  pbVar14 = &local_83a5;
                  do {
                    uVar6 = 0;
                    while (uVar5 = (uint)pbVar14[uVar6], uVar5 != 0) {
                      uVar7 = (uint)(byte)str_10022cda[uVar6];
                      if (uVar7 - 0x41 < 0x1a) {
                        uVar7 = uVar7 | 0x20;
                      }
                      if (uVar5 - 0x41 < 0x1a) {
                        uVar5 = uVar5 | 0x20;
                      }
                      if (uVar5 != uVar7) break;
                      uVar6 = uVar6 + 1;
                      if (uVar3 == uVar6) goto LAB_10007970;
                    }
                    if (uVar3 == uVar6) {
LAB_10007970:
                      if (!(bool)(bVar1 & 3 < local_8480)) {
                        iVar2 = recovered_1000c7ac(param_1,param_2,local_245,local_8345,0x8000,
                                                   local_8465);
                        local_8480 = local_8480 + uVar9;
                        if (iVar2 != 0) {
                          recovered_1000ba2c(*(char **)(param_2 + 0x314),0x8000,(int)local_8345);
                          pcVar10 = *(char **)(param_2 + 0x314);
                          if ((pcVar10 != (char *)0x0) &&
                             (uVar3 = strlen(pcVar10), uVar3 < 0x7fff)) {
                            (pcVar10 + uVar3)[0] = '\n';
                            (pcVar10 + uVar3)[1] = '\0';
                          }
                        }
                      }
                      break;
                    }
                    pbVar14 = pbVar14 + 1;
                  } while (*pbVar14 != 0);
                }
              }
            }
            pbVar14 = (byte *)(pcVar13 + 1);
            goto LAB_1000678c;
          }
        }
LAB_10007034:
        if (uVar5 - 0x41 < 0x1a) {
          uVar5 = uVar5 | 0x20;
        }
        if (uVar5 == 0x73) {
          uVar5 = (uint)local_143;
          if (uVar5 == 0) {
            pcVar10 = str_10022cf4 + 1;
          }
          else {
            if (uVar5 - 0x41 < 0x1a) {
              uVar5 = uVar5 | 0x20;
            }
            if (uVar5 != 99) goto LAB_10007354;
            uVar5 = (uint)local_142;
            if (uVar5 == 0) {
              pcVar10 = str_10022cf4 + 2;
            }
            else {
              if (uVar5 - 0x41 < 0x1a) {
                uVar5 = uVar5 | 0x20;
              }
              if (uVar5 != 0x72) goto LAB_10007354;
              uVar5 = (uint)local_141;
              if (uVar5 == 0) {
                pcVar10 = str_10022cf4 + 3;
              }
              else {
                if (uVar5 - 0x41 < 0x1a) {
                  uVar5 = uVar5 | 0x20;
                }
                if (uVar5 != 0x69) goto LAB_10007354;
                uVar5 = (uint)local_140;
                if (uVar5 == 0) {
                  pcVar10 = str_10022cf4 + 4;
                }
                else {
                  if (uVar5 - 0x41 < 0x1a) {
                    uVar5 = uVar5 | 0x20;
                  }
                  if (uVar5 != 0x70) goto LAB_10007354;
                  uVar5 = (uint)local_13f;
                  if (uVar5 == 0) {
                    pcVar10 = str_10022cf4 + 5;
                  }
                  else {
                    if (uVar5 - 0x41 < 0x1a) {
                      uVar5 = uVar5 | 0x20;
                    }
                    bVar1 = uVar5 != 0x74;
                    if (!bVar1) {
                      uVar5 = (uint)local_13e;
                    }
                    if (bVar1 || uVar5 != 0) goto LAB_10007354;
                    pcVar10 = str_10022cf4 + 6;
                  }
                }
              }
            }
          }
          goto LAB_10007348;
        }
LAB_10007354:
        pcVar10 = *(char **)(param_2 + 0x310);
        uVar3 = strlen(pcVar10);
        uVar5 = 0x5ffff - uVar3;
        if ((int)(iVar11 + 1U) < (int)(0x5ffff - uVar3)) {
          uVar5 = iVar11 + 1U;
        }
        if ((pcVar10 != (char *)0x0) && (uVar3 = strlen(pcVar10), uVar3 < 0x5ffff)) {
          if (0x5ffff - uVar3 < uVar5) {
            uVar5 = 0x5ffff - uVar3;
          }
          if (uVar5 != 0) {
            memcpy(pcVar10 + uVar3,pbVar4,uVar5);
          }
          pcVar10[uVar5 + uVar3] = '\0';
        }
        goto LAB_10006784;
      }
LAB_10006d00:
      if (*pcVar10 == '\0') {
        uVar3 = strlen(str_10022ceb);
        uVar5 = extraout_r1;
        if (uVar3 != 0) {
          pbVar14 = (byte *)(pcVar13 + 1);
          uVar5 = (uint)*pbVar14;
        }
        if (uVar3 != 0 && uVar5 != 0) {
          pbVar4 = pbVar14;
          do {
            uVar6 = 0;
            while (uVar5 = (uint)pbVar4[uVar6], uVar5 != 0) {
              uVar9 = (uint)(byte)str_10022ceb[uVar6];
              if (uVar9 - 0x41 < 0x1a) {
                uVar9 = uVar9 | 0x20;
              }
              if (uVar5 - 0x41 < 0x1a) {
                uVar5 = uVar5 | 0x20;
              }
              if (uVar5 != uVar9) break;
              uVar6 = uVar6 + 1;
              if (uVar3 == uVar6) goto LAB_10006ea0;
            }
            if (uVar3 == uVar6) goto LAB_10006ea0;
            pbVar4 = pbVar4 + 1;
            if (*pbVar4 == 0) break;
          } while( true );
        }
        break;
      }
      pcVar10 = str_10022cf4;
      if (!bVar1) goto LAB_10007034;
LAB_10007348:
      if (*pcVar10 != '\0') goto LAB_10007354;
      src = pcVar13 + 1;
      uVar3 = strlen(str_10022cfb);
      pcVar10 = (char *)0x0;
      if ((uVar3 != 0) && (*src != '\0')) {
        pcVar10 = src;
        do {
          uVar6 = 0;
          while (uVar5 = (uint)(byte)pcVar10[uVar6], uVar5 != 0) {
            uVar9 = (uint)(byte)str_10022cfb[uVar6];
            if (uVar9 - 0x41 < 0x1a) {
              uVar9 = uVar9 | 0x20;
            }
            if (uVar5 - 0x41 < 0x1a) {
              uVar5 = uVar5 | 0x20;
            }
            if (uVar5 != uVar9) break;
            uVar6 = uVar6 + 1;
            if (uVar3 == uVar6) goto LAB_10007474;
          }
          if (uVar3 == uVar6) goto LAB_10007474;
          pcVar10 = pcVar10 + 1;
        } while (*pcVar10 != '\0');
        pcVar10 = (char *)0x0;
      }
LAB_10007474:
      local_8345[0] = 0;
      local_245[0] = 0;
      local_345 = 0;
      local_83a5 = 0;
      recovered_1000bd50((char *)(abStack_125 + 1),&DAT_10022d05,(char *)local_245,0x100);
      if (local_245[0] == 0) {
        if (pcVar10 != (char *)0x0) {
          pcVar13 = pcVar10 + ~(uint)pcVar13;
          if (0xffe < (int)pcVar13) {
            pcVar13 = (char *)0xfff;
          }
          memcpy(local_8345,src,(ulong)pcVar13);
          local_8345[(int)pcVar13] = 0;
        }
      }
      else {
        recovered_1000c270(param_2,local_245,(char *)&local_345);
        uVar5 = (uint)local_345;
        if (uVar5 != 0) {
          if (uVar5 - 0x41 < 0x1a) {
            uVar5 = uVar5 | 0x20;
          }
          if ((uVar5 == 0x68) && (uVar5 = (uint)local_344, uVar5 != 0)) {
            if (uVar5 - 0x41 < 0x1a) {
              uVar5 = uVar5 | 0x20;
            }
            if ((uVar5 == 0x74) && (uVar5 = (uint)local_343, uVar5 != 0)) {
              if (uVar5 - 0x41 < 0x1a) {
                uVar5 = uVar5 | 0x20;
              }
              if ((uVar5 == 0x74) && (uVar5 = (uint)local_342, uVar5 != 0)) {
                if (uVar5 - 0x41 < 0x1a) {
                  uVar5 = uVar5 | 0x20;
                }
                if ((uVar5 == 0x70) && (uVar5 = (uint)local_341, uVar5 != 0)) {
                  if (uVar5 - 0x41 < 0x1a) {
                    uVar5 = uVar5 | 0x20;
                  }
                  if ((uVar5 == 0x3a) && (uVar5 = (uint)local_340, uVar5 != 0)) {
                    if (uVar5 - 0x41 < 0x1a) {
                      uVar5 = uVar5 | 0x20;
                    }
                    if ((uVar5 == 0x2f) && (uVar5 = (uint)local_33f, uVar5 != 0)) {
                      if (uVar5 - 0x41 < 0x1a) {
                        uVar5 = uVar5 | 0x20;
                      }
                      if (uVar5 == 0x2f) goto LAB_1000762c;
                    }
                  }
                }
              }
            }
          }
        }
        iVar2 = recovered_1000c1fc(&local_345,(byte *)str_10022cc8);
        if (iVar2 == 0) {
          recovered_1000c7ac(param_1,param_2,local_245,local_8345,0x1000,(char *)&local_83a5);
        }
      }
LAB_1000762c:
      uVar3 = strlen(str_10022d09);
      uVar5 = extraout_r1_00;
      if (uVar3 != 0) {
        uVar5 = (uint)abStack_125[1];
      }
      if (uVar3 != 0 && uVar5 != 0) {
        pbVar14 = abStack_125 + 1;
        do {
          uVar6 = 0;
          while (uVar5 = (uint)pbVar14[uVar6], uVar5 != 0) {
            uVar9 = (uint)(byte)str_10022d09[uVar6];
            if (uVar9 - 0x41 < 0x1a) {
              uVar9 = uVar9 | 0x20;
            }
            if (uVar5 - 0x41 < 0x1a) {
              uVar5 = uVar5 | 0x20;
            }
            if (uVar5 != uVar9) break;
            uVar6 = uVar6 + 1;
            if (uVar3 == uVar6) goto LAB_10007788;
          }
          if (uVar3 == uVar6) {
LAB_10007788:
            if (*(char *)(param_1 + 0x57dd) == '\x01') {
              recovered_1000ba2c(*(char **)(param_2 + 0x310),0x60000,((uintptr_t)pf_module_state + 0x2ceU));
            }
            goto LAB_100077b8;
          }
          pbVar14 = pbVar14 + 1;
        } while (*pbVar14 != 0);
      }
      if (local_8345[0] != 0) {
        recovered_1000ba2c(*(char **)(param_2 + 0x318),0x8000,(int)local_8345);
        pcVar13 = *(char **)(param_2 + 0x318);
        if ((pcVar13 != (char *)0x0) && (uVar3 = strlen(pcVar13), uVar3 < 0x7fff)) {
          (pcVar13 + uVar3)[0] = '\n';
          (pcVar13 + uVar3)[1] = '\0';
        }
        bVar1 = recovered_1000cb64(local_8345);
        if (bVar1) {
          local_8465[0] = '\0';
          uVar5 = 1;
          if (*(char *)(param_1 + 0x57dc) != '\0') {
            uVar5 = 3;
          }
          winter_js_execute_basic((char *)local_8345,*(char **)(param_2 + 0x310),0x60000,local_8465,0xc0,
                             uVar5);
          if (local_8465[0] != '\0') {
            pf_varargs_10023fa4__4_((char *)(param_2 + 0x141),0xc0,&DAT_10022ca6,(uint)local_8465);
          }
        }
      }
LAB_100077b8:
      pbVar14 = (byte *)(pcVar10 + 9);
      if (pcVar10 == (char *)0x0) break;
    } while( true );
  }
LAB_10007a64:
  memset((undefined1 *)(param_2 + 0x31c),0,0x110);
  *(uint *)(param_2 + 800) = 0xfffffcff;
  *(uint *)(param_2 + 0x328) = 0x1252b4ff;
  *(uint *)(param_2 + 0x324) = 0x161c22ff;
  pcVar8 = (char *)(param_2 + 0x32c);
  *pcVar8 = '\0';
  iVar2 = recovered_10012054(*(char **)(param_2 + 0x314),&DAT_10023339,local_8345);
  if (iVar2 == 0) goto LAB_10007e1c;
  bVar1 = recovered_10012350((char *)local_8345,str_1002333e,(char *)(abStack_125 + 1),0x100);
  if ((bVar1) &&
     (iVar2 = recovered_10012764((int)(abStack_125 + 1),(uint *)(param_2 + 800)), iVar2 != 0)) {
    *(undefined1 *)(param_2 + 0x31c) = 1;
  }
  bVar1 = recovered_10012350((char *)local_8345,str_1002334f,(char *)(abStack_125 + 1),0x100);
  if (bVar1) {
    *pcVar8 = '\0';
    pbVar14 = abStack_125 + 3;
    do {
      uVar5 = (uint)pbVar14[-2];
      switch((uintptr_t)(uVar5)) {
      case 0:
        goto switchD_10007b64_caseD_0;
      default:
        if (uVar5 - 0x41 < 0x1a) {
          uVar5 = uVar5 | 0x20;
        }
        if ((uVar5 == 0x75) && (uVar5 = (uint)pbVar14[-1], uVar5 != 0)) {
          if (uVar5 - 0x41 < 0x1a) {
            uVar5 = uVar5 | 0x20;
          }
          if ((uVar5 == 0x72) && (uVar5 = (uint)*pbVar14, uVar5 != 0)) {
            if (uVar5 - 0x41 < 0x1a) {
              uVar5 = uVar5 | 0x20;
            }
            if ((uVar5 == 0x6c) && (uVar5 = (uint)pbVar14[1], uVar5 != 0)) {
              if (uVar5 - 0x41 < 0x1a) {
                uVar5 = uVar5 | 0x20;
              }
              if (uVar5 == 0x28) {
                pbVar14 = pbVar14 + 2;
                goto LAB_10007c78;
              }
            }
          }
        }
        goto switchD_10007b64_caseD_0;
      case 9:
      case 10:
      case 0xc:
      case 0xd:
      case 0x20:
        pbVar14 = pbVar14 + 1;
      }
    } while( true );
  }
  goto switchD_10007b64_caseD_0;
LAB_10006ea0:
  pcVar10 = *(char **)(param_2 + 0x314);
  uVar3 = strlen(pcVar10);
  pbVar12 = (byte *)(0x7fff - uVar3);
  if ((int)(pbVar4 + ~(uint)pcVar13) < (int)(0x7fff - uVar3)) {
    pbVar12 = pbVar4 + ~(uint)pcVar13;
  }
  if ((pcVar10 != (char *)0x0) && (uVar3 = strlen(pcVar10), uVar3 < 0x7fff)) {
    if ((byte *)(0x7fff - uVar3) < pbVar12) {
      pbVar12 = (byte *)(0x7fff - uVar3);
    }
    if (pbVar12 != (byte *)0x0) {
      memcpy(pcVar10 + uVar3,pbVar14,(ulong)pbVar12);
    }
    (pcVar10 + uVar3)[(int)pbVar12] = '\0';
  }
  pcVar13 = *(char **)(param_2 + 0x314);
  if ((pcVar13 != (char *)0x0) && (uVar3 = strlen(pcVar13), uVar3 < 0x7fff)) {
    (pcVar13 + uVar3)[0] = '\n';
    (pcVar13 + uVar3)[1] = '\0';
  }
  pbVar14 = pbVar4 + 8;
  goto LAB_1000678c;
LAB_10007c78:
  uVar5 = (uint)*pbVar14;
  uVar9 = uVar5 - 9;
  if (0x1e < uVar9) goto LAB_10007cb4;
  if ((1 << (uVar9 & 0xff) & 0x80001bU) == 0) {
    if ((1 << (uVar9 & 0xff) & 0x42000000U) != 0) {
      pbVar14 = pbVar14 + 1;
      uVar9 = (uint)*pbVar14;
      uVar7 = uVar5;
      goto LAB_10007cb8;
    }
    goto LAB_10007cb4;
  }
  pbVar14 = pbVar14 + 1;
  goto LAB_10007c78;
LAB_10007cb4:
  uVar7 = 0;
  uVar9 = uVar5;
LAB_10007cb8:
  uVar5 = 0;
  if ((uVar9 != 0) && (uVar5 = 0, uVar7 != (int)(char)uVar9)) {
    uVar5 = 0;
    do {
      if (uVar7 == 0) {
        switch((uintptr_t)(uVar9)) {
        case 9:
        case 10:
        case 0xc:
        case 0xd:
        case 0x20:
        case 0x29:
          goto LAB_10007dc8;
        }
      }
      pcVar8[uVar5] = (char)uVar9;
      iVar2 = uVar5 + 1;
      uVar5 = uVar5 + 1;
      uVar9 = (uint)pbVar14[iVar2];
      if (((uVar9 == 0) || (0xfe < uVar5)) || (uVar7 == (int)(char)pbVar14[iVar2])) break;
    } while( true );
  }
LAB_10007dc8:
  pcVar8[uVar5] = '\0';
  if (*pcVar8 != '\0') {
    *(undefined1 *)(param_2 + 0x31d) = 1;
  }
switchD_10007b64_caseD_0:
  bVar1 = recovered_10012350((char *)local_8345,str_10023360,(char *)(abStack_125 + 1),0x100);
  if ((bVar1) &&
     (iVar2 = recovered_10012764((int)(abStack_125 + 1),(uint *)(param_2 + 0x324)), iVar2 != 0)) {
    *(undefined1 *)(param_2 + 0x31e) = 1;
  }
LAB_10007e1c:
  iVar2 = recovered_10012054(*(char **)(param_2 + 0x314),&DAT_10023366,local_8345);
  if (((iVar2 != 0) ||
      (iVar2 = recovered_10012054(*(char **)(param_2 + 0x314),str_10023368,local_8345), iVar2 != 0))
     && ((bVar1 = recovered_10012350((char *)local_8345,str_10023360,(char *)(abStack_125 + 1),0x100
                                    ), bVar1 &&
         (iVar2 = recovered_10012764((int)(abStack_125 + 1),(uint *)(param_2 + 0x328)), iVar2 != 0))
        )) {
    *(undefined1 *)(param_2 + 799) = 1;
  }
  return;
}

#undef DAT_10022ca6
#undef DAT_10022ca9
#undef DAT_10022cad
#undef DAT_10022cb2
#undef DAT_10022cb3
#undef DAT_10022cb4
#undef DAT_10022cb5
#undef DAT_10022cb6
#undef DAT_10022cb7
#undef DAT_10022cb8
#undef DAT_10022cb9
#undef DAT_10022cba
#undef DAT_10022cbb
#undef DAT_10022cd2
#undef DAT_10022cd3
#undef DAT_10022cd4
#undef DAT_10022cd5
#undef DAT_10022cd6
#undef DAT_10022d05
#undef DAT_10023339
#undef DAT_10023366
#undef str_10022cc8
#undef str_10022cda
#undef str_10022ce5
#undef str_10022ceb
#undef str_10022cf4
#undef str_10022cfb
#undef str_10022d09
#undef str_1002333e
#undef str_1002334f
#undef str_10023360
#undef str_10023368
#undef local_8480
#undef local_8465
#undef local_83a5
#undef local_83a4
#undef local_8345
#undef local_8341
#undef local_8340
#undef local_833f
#undef local_833e
#undef local_345
#undef local_344
#undef local_343
#undef local_342
#undef local_341
#undef local_340
#undef local_33f
#undef local_33e
#undef local_245
#undef local_145
#undef local_144
#undef local_143
#undef local_142
#undef local_141
#undef local_140
#undef local_13f
#undef local_13e
#undef abStack_125

#undef DAT_10022c1b
#define DAT_10022c1b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1d3U)))
#undef DAT_10022ca6
#define DAT_10022ca6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x25eU)))
#undef DAT_10022ca9
#define DAT_10022ca9 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x261U)))
#undef DAT_10022cad
#define DAT_10022cad (*(uint8_t *)(((uintptr_t)pf_module_state + 0x265U)))
#undef DAT_10022cbb
#define DAT_10022cbb (*(uint8_t *)(((uintptr_t)pf_module_state + 0x273U)))
#undef DAT_10022d05
#define DAT_10022d05 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2bdU)))
#undef DAT_10023366
#define DAT_10023366 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x91eU)))
#undef DAT_1002336f
#define DAT_1002336f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x927U)))
#undef DAT_10023370
#define DAT_10023370 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x928U)))
#undef DAT_10023371
#define DAT_10023371 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x929U)))
#undef DAT_10023372
#define DAT_10023372 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x92aU)))
#undef DAT_10023373
#define DAT_10023373 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x92bU)))
#undef DAT_10023374
#define DAT_10023374 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x92cU)))
#undef DAT_10023375
#define DAT_10023375 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x92dU)))
#undef DAT_10023376
#define DAT_10023376 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x92eU)))
#undef DAT_10023377
#define DAT_10023377 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x92fU)))
#undef DAT_10023378
#define DAT_10023378 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x930U)))
#undef DAT_1002337b
#define DAT_1002337b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x933U)))
#undef DAT_1002337e
#define DAT_1002337e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x936U)))
#undef DAT_10023381
#define DAT_10023381 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x939U)))
#undef DAT_10023386
#define DAT_10023386 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x93eU)))
#undef DAT_10023389
#define DAT_10023389 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x941U)))
#undef DAT_10023394
#define DAT_10023394 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x94cU)))
#undef DAT_100233bf
#define DAT_100233bf (*(uint8_t *)(((uintptr_t)pf_module_state + 0x977U)))
#undef DAT_100233c0
#define DAT_100233c0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x978U)))
#undef DAT_100233c1
#define DAT_100233c1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x979U)))
#undef DAT_100233c2
#define DAT_100233c2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x97aU)))
#undef DAT_100233c3
#define DAT_100233c3 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x97bU)))
#undef DAT_100233c4
#define DAT_100233c4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x97cU)))
#undef DAT_100233ca
#define DAT_100233ca (*(uint8_t *)(((uintptr_t)pf_module_state + 0x982U)))
#undef DAT_100233cc
#define DAT_100233cc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x984U)))
#undef DAT_100233cd
#define DAT_100233cd (*(uint8_t *)(((uintptr_t)pf_module_state + 0x985U)))
#undef DAT_100233ce
#define DAT_100233ce (*(uint8_t *)(((uintptr_t)pf_module_state + 0x986U)))
#undef DAT_100233e9
#define DAT_100233e9 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x9a1U)))
#undef DAT_100233f4
#define DAT_100233f4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x9acU)))
#undef DAT_10023404
#define DAT_10023404 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x9bcU)))
#undef DAT_10023408
#define DAT_10023408 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x9c0U)))
#undef DAT_10023437
#define DAT_10023437 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x9efU)))
#undef DAT_1002343b
#define DAT_1002343b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x9f3U)))
#undef DAT_10023440
#define DAT_10023440 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x9f8U)))
#undef DAT_10023445
#define DAT_10023445 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x9fdU)))
#undef DAT_10023498
#define DAT_10023498 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa50U)))
#undef DAT_100234a1
#define DAT_100234a1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa59U)))
#undef DAT_100234a6
#define DAT_100234a6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa5eU)))
#undef DAT_100234b2
#define DAT_100234b2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa6aU)))
#undef DAT_100234c5
#define DAT_100234c5 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa7dU)))
#undef DAT_100234d0
#define DAT_100234d0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa88U)))
#undef DAT_100234e4
#define DAT_100234e4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa9cU)))
#undef DAT_10024114
#define DAT_10024114 (*(int *)(((uintptr_t)pf_module_state + 0x16ccU)))
#undef DAT_10024118
#define DAT_10024118 (*(int *)(((uintptr_t)pf_module_state + 0x16d0U)))
#undef str_1002338c
#define str_1002338c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x944U)))
#undef str_10023398
#define str_10023398 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x950U)))
#undef str_1002339f
#define str_1002339f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x957U)))
#undef str_100233a8
#define str_100233a8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x960U)))
#undef str_100233ae
#define str_100233ae (*(char (*)[1])(((uintptr_t)pf_module_state + 0x966U)))
#undef str_100233b7
#define str_100233b7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x96fU)))
#undef str_100233cf
#define str_100233cf (*(char (*)[1])(((uintptr_t)pf_module_state + 0x987U)))
#undef str_100233d6
#define str_100233d6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x98eU)))
#undef str_100233dc
#define str_100233dc (*(char (*)[1])(((uintptr_t)pf_module_state + 0x994U)))
#undef str_100233e2
#define str_100233e2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x99aU)))
#undef str_100233ed
#define str_100233ed (*(char (*)[1])(((uintptr_t)pf_module_state + 0x9a5U)))
#undef str_100233f9
#define str_100233f9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x9b1U)))
#undef str_1002340c
#define str_1002340c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x9c4U)))
#undef str_10023412
#define str_10023412 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x9caU)))
#undef str_10023419
#define str_10023419 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x9d1U)))
#undef str_10023420
#define str_10023420 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x9d8U)))
#undef str_10023427
#define str_10023427 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x9dfU)))
#undef str_10023430
#define str_10023430 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x9e8U)))
#undef str_10023448
#define str_10023448 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa00U)))
#undef str_1002344e
#define str_1002344e (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa06U)))
#undef str_10023455
#define str_10023455 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa0dU)))
#undef str_1002345c
#define str_1002345c (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa14U)))
#undef str_10023463
#define str_10023463 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa1bU)))
#undef str_10023469
#define str_10023469 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa21U)))
#undef str_10023471
#define str_10023471 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa29U)))
#undef str_10023478
#define str_10023478 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa30U)))
#undef str_10023481
#define str_10023481 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa39U)))
#undef str_1002348a
#define str_1002348a (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa42U)))
#undef str_10023490
#define str_10023490 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa48U)))
#undef str_1002349b
#define str_1002349b (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa53U)))
#undef str_100234ab
#define str_100234ab (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa63U)))
#undef str_100234b6
#define str_100234b6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa6eU)))
#undef str_100234bc
#define str_100234bc (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa74U)))
#undef str_100234c9
#define str_100234c9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa81U)))
#undef str_100234d5
#define str_100234d5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa8dU)))
#undef str_100234e9
#define str_100234e9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xaa1U)))
#undef str_100234f5
#define str_100234f5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xaadU)))
#undef str_100234ff
#define str_100234ff (*(char (*)[1])(((uintptr_t)pf_module_state + 0xab7U)))
#undef str_10023509
#define str_10023509 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xac1U)))
#undef str_1002350f
#define str_1002350f (*(char (*)[1])(((uintptr_t)pf_module_state + 0xac7U)))
#define local_d68 (*(uint *)(frame + 24))
#define local_d64 (*(uint *)(frame + 28))
#define local_d60 (*(uint *)(frame + 32))
#define local_d5c (*(uint *)(frame + 36))
#define local_d50 (*(uint *)(frame + 48))
#define local_d40 (*(uint *)(frame + 64))
#define local_d3c (*(uint *)(frame + 68))
#define local_d30 (*(byte (*)[128])(frame + 80))
#define local_cb0 (*(ulonglong (*)[16])(frame + 208))
#define local_c30 (*(byte (*)[64])(frame + 336))
#define local_bd0 (*(char (*)[256])(frame + 432))
#define local_ad0 (*(ulonglong (*)[32])(frame + 688))
#define local_9c9 (*(char *)(frame + 951))
#define local_9c8 (*(byte *)(frame + 952))
#define local_9c7 (*(byte *)(frame + 953))
#define local_9c6 (*(byte *)(frame + 954))
#define local_9c5 (*(byte *)(frame + 955))
#define local_9c4 (*(byte *)(frame + 956))
#define local_9c3 (*(byte *)(frame + 957))
#define local_9c2 (*(byte *)(frame + 958))
#define local_9c1 (*(byte *)(frame + 959))
#define local_9c0 (*(byte *)(frame + 960))
#define local_9a0 (*(byte (*)[512])(frame + 992))
#define local_7a0 (*(char (*)[244])(frame + 1504))
#define local_130 (*(char (*)[256])(frame + 3152))
#define local_30 (*(undefined8 *)(frame + 3408))
#define local_28 (*(undefined8 *)(frame + 3416))
#define abStack_bf0 (*(byte (*)[32])(frame + 400))
#define acStack_6ac (*(char (*)[4])(frame + 1748))
#define aiStack_6a8 (*(int (*)[2])(frame + 1752))
#define abStack_6a0 (*(byte (*)[4])(frame + 1760))
#define auStack_69c (*(uint (*)[47])(frame + 1764))
#define uStack_5e0 (*(uint *)(frame + 1952))
#define auStack_5dc (*(ulonglong (*)[2])(frame + 1956))
#define auStack_5cc (*(uint (*)[295])(frame + 1972))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007eb4
 */

void recovered_10007eb4(int param_1,int *param_2)

{
  unsigned char frame[3488] __attribute__((aligned(16))) = {0};

  char cVar1;
  byte bVar2;
  char cVar3;
  ulonglong uVar4;
  int iVar5;
  uint *puVar6;
  char *dst;
  byte *pbVar7;
  char *pcVar8;
  uint uVar9;
  int iVar10;
  uint *puVar11;
  int iVar12;
  uint extraout_r1 = 0;
  ulong uVar13;
  int iVar14;
  byte *extraout_r2 = 0;
  int *piVar15;
  ulong uVar16;
  char *pcVar17;
  uint uVar18;
  ulonglong *puVar19;
  byte *pbVar20;
  char *pcVar21;
  int iVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  bool bVar28;
  bool bVar29;
  bool bVar30;

  PF_PART4(local_28, 4) = (uint)(local_28 >> 0x20) & 0xffffff00;
  local_28 = CONCAT44(PF_PART4(local_28, 4),0x12);
  local_30 = CONCAT44(DAT_10024114 + -0x3c,0x1e);
  if ((param_2 != (int *)0x0) && (iVar5 = recovered_1000645c((int)param_2), iVar5 != 0)) {
    puVar11 = (uint *)(param_2 + 0x14b0b);
    puVar6 = (uint *)(param_2 + 0x1512c);
    *puVar11 = 0;
    param_2[0x1512d] = -1;
    *puVar6 = 0;
    local_d50 = 0xffffffff;
    pbVar20 = (byte *)param_2[0xc4];
    local_130[0] = '\0';
    memset(auStack_69c + 0x2f,0,0x480);
    memset(abStack_6a0,0,0xc0);
    local_7a0[0] = '\0';
    if (pbVar20 != (byte *)0x0) {
      iVar5 = 0;
      dst = (char *)((int)param_2 + 0x101);
      local_d3c = 1;
      bVar30 = false;
      local_d40 = 0;
      local_d60 = 0;
      local_d68 = 0;
      local_d5c = 0;
      local_d64 = 0;
LAB_10007fe4:
      iVar22 = iVar5;
      pcVar8 = &DAT_10022c1b;
      if (bVar30) {
        iVar22 = 2;
        pcVar8 = local_130;
      }
      while( true ) {
        if (*pbVar20 == 0) goto LAB_1000a5a4;
        if (*pbVar20 == 0x3c) break;
        pbVar7 = (byte *)strchr((char *)pbVar20,0x3c);
        if (pbVar7 == (byte *)0x0) {
          uVar16 = strlen((char *)pbVar20);
        }
        else {
          uVar16 = (int)pbVar7 - (int)pbVar20;
        }
        uVar13 = 0x1ff;
        if ((int)uVar16 < 0x1ff) {
          uVar13 = uVar16;
        }
        memcpy(local_9a0,pbVar20,uVar13);
        local_9a0[uVar13] = 0;
        if (local_9a0[0] != 0) {
          recovered_10014a40((int)param_2,local_9a0,iVar22,pcVar8,local_d3c,local_d40,
                             (int *)&local_30);
        }
        if (pbVar7 == (byte *)0x0) {
          pbVar7 = pbVar20 + uVar16;
        }
        pbVar20 = pbVar7;
      }
      pcVar8 = strchr((char *)pbVar20,0x3e);
      if (pcVar8 == (char *)0x0) goto LAB_1000a5a4;
      pcVar17 = pcVar8 + ~(uint)pbVar20;
      if (0x1fe < (int)pcVar17) {
        pcVar17 = (char *)0x1ff;
      }
      local_9c9 = '\0';
      memcpy(local_9a0,pbVar20 + 1,(ulong)pcVar17);
      local_9a0[(int)pcVar17] = 0;
      recovered_1000ba88(local_9a0,&local_9c8,0x28,&local_9c9);
      iVar22 = strncmp((char *)local_9a0,&DAT_10022ca9,3);
      if (iVar22 == 0) {
        pcVar17 = strstr((char *)(pbVar20 + 4),&DAT_10022cad);
        pbVar20 = (byte *)(pcVar17 + 3);
        if (pcVar17 == (char *)0x0) {
          pbVar20 = (byte *)(pcVar8 + 1);
        }
        goto LAB_10007fe4;
      }
      uVar18 = (uint)local_9c8;
      if (local_9c9 == '\0' && uVar18 == 0x21) {
        pbVar20 = (byte *)(pcVar8 + 1);
        goto LAB_10007fe4;
      }
      if (local_9c9 != '\0') {
        pcVar17 = &DAT_10023375;
        if (uVar18 == 0) goto LAB_10008484;
        uVar9 = (uint)local_9c7;
        if (uVar18 - 0x41 < 0x1a) {
          uVar18 = uVar18 | 0x20;
        }
        if (uVar18 == 0x61 && uVar9 == 0) {
          bVar30 = false;
          local_130[0] = '\0';
          goto LAB_100091ec;
        }
        if (uVar18 == 0x68) {
          if (uVar9 == 0) {
            pcVar17 = &DAT_10023370;
LAB_1000839c:
            if (*pcVar17 != '\0') goto code_r0x100083b0;
          }
          else {
            if (uVar9 - 0x41 < 0x1a) {
              uVar9 = uVar9 | 0x20;
            }
            bVar28 = uVar9 == 0x31;
            if (bVar28) {
              uVar9 = (uint)local_9c6;
            }
            if (bVar28 && uVar9 == 0) {
              pcVar17 = &DAT_10023371;
              goto LAB_1000839c;
            }
code_r0x100083b0:
            uVar18 = (uint)local_9c7;
            if (uVar18 == 0) {
              pcVar17 = &DAT_10023373;
LAB_10008410:
              if (*pcVar17 == '\0') goto LAB_100084e4;
            }
            else {
              if (uVar18 - 0x41 < 0x1a) {
                uVar18 = uVar18 | 0x20;
              }
              bVar28 = uVar18 == 0x32;
              if (bVar28) {
                uVar18 = (uint)local_9c6;
              }
              if (bVar28 && uVar18 == 0) {
                pcVar17 = &DAT_10023374;
                goto LAB_10008410;
              }
            }
            uVar18 = (uint)local_9c7;
            if (uVar18 == 0) {
              pcVar17 = &DAT_10023376;
            }
            else {
              if (uVar18 - 0x41 < 0x1a) {
                uVar18 = uVar18 | 0x20;
              }
              bVar28 = uVar18 != 0x33;
              if (!bVar28) {
                uVar18 = (uint)local_9c6;
              }
              if (bVar28 || uVar18 != 0) goto LAB_10008490;
              pcVar17 = &DAT_10023377;
            }
LAB_10008484:
            if (*pcVar17 != '\0') goto LAB_10008490;
          }
LAB_100084e4:
          iVar5 = 0;
          local_28 = CONCAT44(PF_PART4(local_28, 4),(uint)local_28 + 6);
          local_d3c = 1;
        }
        else {
LAB_10008490:
          bVar28 = recovered_1000bcd4(&local_9c8,&DAT_10023378);
          if (((bVar28) || (bVar28 = recovered_1000bcd4(&local_9c8,&DAT_1002337b), bVar28)) ||
             (bVar28 = recovered_1000bcd4(&local_9c8,&DAT_1002337e), bVar28)) goto LAB_100084e4;
          bVar28 = recovered_1000bcd4(&local_9c8,&DAT_10023381);
          if (bVar28) {
            if (local_d60 == 0) {
              local_d60 = 0;
            }
            else {
              local_d40 = auStack_5cc[local_d60 + 0x11a];
              local_d60 = local_d60 - 1;
            }
            local_28 = CONCAT44(PF_PART4(local_28, 4),(uint)local_28 + 8);
            local_d50 = 0xffffffff;
          }
          else {
            bVar28 = recovered_1000bcd4(&local_9c8,&DAT_10023386);
            if ((bVar28) || (bVar28 = recovered_1000bcd4(&local_9c8,&DAT_10023389), bVar28)) {
              if (local_d5c == 0) {
                local_28 = CONCAT44(PF_PART4(local_28, 4),(uint)local_28 + 8);
                local_d5c = 0;
              }
              else {
                local_d5c = local_d5c - 1;
                if ((abStack_6a0[local_d5c * 0xc] & 1) == 0) {
                  local_28 = CONCAT44(PF_PART4(local_28, 4),(uint)local_28 + 8);
                }
                else {
                  uVar18 = 1;
                  if (1 < (int)local_d3c) {
                    uVar18 = local_d3c;
                  }
                  iVar22 = auStack_69c[local_d5c * 3 + 1] + uVar18 * 8 + 8;
                  if (iVar22 < (int)(uint)local_28) {
                    iVar22 = (uint)local_28;
                  }
                  local_28 = CONCAT44(PF_PART4(local_28, 4),iVar22);
                }
              }
            }
            else {
              bVar28 = recovered_1000bcd4(&local_9c8,(byte *)str_1002338c);
              if (bVar28) {
                bVar28 = local_d64 == 0;
                local_d64 = local_d64 - 1;
                if (bVar28 || local_d64 == 0) {
                  local_d64 = 0;
                  local_7a0[0] = '\0';
                }
              }
              else {
                iVar22 = recovered_10012c7c(&local_9c8);
                if (iVar22 != 0) {
                  bVar28 = recovered_1000bcd4(&local_9c8,&DAT_10023394);
                  if (bVar28) {
                    if (local_d68 == 0) {
                      local_d68 = 0;
                    }
                    else {
                      uVar25 = local_d68 - 1;
                      uVar18 = auStack_69c[uVar25 * 0x12 + 0x2f];
                      puVar19 = auStack_5dc + uVar25 * 9;
                      uVar9 = auStack_5cc[uVar25 * 0x12];
                      local_ad0[0] = *puVar19;
                      local_ad0[1] = auStack_5dc[uVar25 * 9 + 1];
                      if (uVar18 == 1) {
                        local_30 = *puVar19;
                        PF_PART4(local_28, 4) = (uint)(auStack_5dc[uVar25 * 9 + 1] >> 0x20);
                        local_28 = CONCAT44(PF_PART4(local_28, 4),
                                            auStack_5cc[uVar25 * 0x12 + 0xc] +
                                            auStack_5cc[uVar25 * 0x12 + 0xb] + 10);
                        local_d68 = uVar25;
                      }
                      else {
                        uVar23 = auStack_5cc[uVar25 * 0x12 + 2];
                        uVar24 = auStack_5cc[uVar25 * 0x12 + 5];
                        uVar26 = auStack_5cc[uVar25 * 0x12 + 6];
                        uVar27 = auStack_5cc[uVar25 * 0x12 + 7];
                        iVar22 = (uint)local_28;
                        if (uVar18 == 3) {
                          uVar18 = auStack_5cc[uVar25 * 0x12 + 4];
                          if ((int)(uint)local_28 < 0x1b) {
                            iVar22 = 0x1a;
                          }
                          iVar14 = (DAT_10024118 - iVar22) + -0x68;
                          iVar12 = (DAT_10024114 - uVar23) + -0x1c;
                          if (iVar14 < 0x13) {
                            iVar14 = 0x12;
                          }
                          if (uVar18 < *puVar11) {
                            piVar15 = param_2 + uVar18 * 0xdc + 0x10c;
                            iVar10 = *puVar11 - uVar18;
                            do {
                              iVar10 = iVar10 + -1;
                              *(undefined1 *)(piVar15 + 0xda) = 1;
                              *piVar15 = *piVar15 + iVar12;
                              piVar15[1] = piVar15[1] + iVar14 + -10;
                              piVar15 = piVar15 + 0xdc;
                            } while (iVar10 != 0);
                          }
                          recovered_1001324c((int)param_2,iVar12,iVar14 + -10,uVar23,iVar22 + 10,
                                             uVar24,uVar26,uVar27,1);
                        }
                        else {
                          if (uVar18 != 2) {
                            local_30 = *puVar19;
                            PF_PART4(local_28, 0) = (uint)auStack_5dc[uVar25 * 9 + 1];
                            if (iVar22 < (int)(uint)local_28) {
                              iVar22 = (uint)local_28;
                            }
                            PF_PART4(local_28, 4) = (uint)(auStack_5dc[uVar25 * 9 + 1] >> 0x20);
                            local_28 = CONCAT44(PF_PART4(local_28, 4),iVar22);
                            if (local_d60 == 0) {
                              local_d60 = 0;
                            }
                            else {
                              local_d40 = auStack_5cc[local_d60 + 0x11a];
                              local_d60 = local_d60 - 1;
                            }
                            local_d68 = uVar25;
                            if (uVar18 != 4) {
                              local_28 = CONCAT44(PF_PART4(local_28, 4),iVar22 + 8);
                            }
                            goto LAB_100091ec;
                          }
                          iVar22 = (uint)local_28 - auStack_5cc[uVar25 * 0x12 + 1];
                          if (iVar22 < 0x13) {
                            iVar22 = 0x12;
                          }
                          uVar18 = iVar22 + 10;
                          recovered_1001324c((int)param_2,uVar9,auStack_5cc[uVar25 * 0x12 + 1],
                                             uVar23,uVar18,uVar24,uVar26,uVar27,0);
                          if ((uVar25 != 0) && (auStack_69c[local_d68 * 0x12 + 0xb] == 1)) {
                            auStack_69c[local_d68 * 0x12 + 0x1a] = uVar23 + uVar9;
                            if ((int)uVar18 < (int)auStack_69c[local_d68 * 0x12 + 0x1c]) {
                              uVar18 = auStack_69c[local_d68 * 0x12 + 0x1c];
                            }
                            auStack_69c[local_d68 * 0x12 + 0x1c] = uVar18;
                          }
                        }
                        local_30 = local_ad0[0];
                        local_28 = local_ad0[1];
                        local_d68 = uVar25;
                      }
                    }
                  }
                  else {
                    bVar28 = recovered_1000bcd4(&local_9c8,(byte *)str_10023398);
                    uVar18 = 0;
                    if (bVar28) {
                      uVar18 = local_d60;
                    }
                    if (bVar28 && uVar18 != 0) {
                      local_d40 = auStack_5cc[local_d60 + 0x11a];
                      local_d60 = local_d60 - 1;
                    }
                    local_28 = CONCAT44(PF_PART4(local_28, 4),(uint)local_28 + 8);
                  }
                }
              }
            }
          }
        }
        goto LAB_100091ec;
      }
      if (*(char *)param_2[0xc6] == '\0') {
LAB_1000896c:
        if (uVar18 == 0) {
          bVar28 = true;
          pcVar17 = str_100233a8;
LAB_10008aa0:
          if (*pcVar17 != '\0') goto LAB_10008aac;
        }
        else {
LAB_10008974:
          bVar28 = false;
          uVar9 = uVar18;
          if (uVar18 - 0x41 < 0x1a) {
            uVar9 = uVar18 | 0x20;
          }
          if (uVar9 == 0x69) {
            uVar9 = (uint)local_9c7;
            if (uVar9 == 0) {
              pcVar17 = str_100233a8 + 1;
LAB_10008a9c:
              bVar28 = false;
              goto LAB_10008aa0;
            }
            bVar28 = false;
            if (uVar9 - 0x41 < 0x1a) {
              uVar9 = uVar9 | 0x20;
            }
            if (uVar9 == 0x6e) {
              uVar9 = (uint)local_9c6;
              if (uVar9 == 0) {
                pcVar17 = str_100233a8 + 2;
                goto LAB_10008a9c;
              }
              bVar28 = false;
              if (uVar9 - 0x41 < 0x1a) {
                uVar9 = uVar9 | 0x20;
              }
              if (uVar9 == 0x70) {
                uVar9 = (uint)local_9c5;
                if (uVar9 == 0) {
                  pcVar17 = str_100233a8 + 3;
                  goto LAB_10008a9c;
                }
                bVar28 = false;
                if (uVar9 - 0x41 < 0x1a) {
                  uVar9 = uVar9 | 0x20;
                }
                if (uVar9 == 0x75) {
                  uVar9 = (uint)local_9c4;
                  if (uVar9 == 0) {
                    pcVar17 = str_100233a8 + 4;
                    goto LAB_10008a9c;
                  }
                  bVar28 = false;
                  if (uVar9 - 0x41 < 0x1a) {
                    uVar9 = uVar9 | 0x20;
                  }
                  bVar29 = uVar9 == 0x74;
                  if (bVar29) {
                    uVar9 = (uint)local_9c3;
                  }
                  if (bVar29 && uVar9 == 0) {
                    pcVar17 = str_100233a8 + 5;
                    goto LAB_10008aa0;
                  }
                }
              }
            }
          }
LAB_10008aac:
          pcVar17 = str_100233b7;
          if (bVar28) {
LAB_10008ac0:
            if (*pcVar17 == '\0') goto LAB_10008dcc;
          }
          else {
            uVar9 = uVar18;
            if (uVar18 - 0x41 < 0x1a) {
              uVar9 = uVar18 | 0x20;
            }
            if (uVar9 == 0x73) {
              uVar9 = (uint)local_9c7;
              if (uVar9 == 0) {
                pcVar17 = str_100233b7 + 1;
              }
              else {
                if (uVar9 - 0x41 < 0x1a) {
                  uVar9 = uVar9 | 0x20;
                }
                if (uVar9 != 0x65) goto LAB_10008db0;
                uVar9 = (uint)local_9c6;
                if (uVar9 == 0) {
                  pcVar17 = str_100233b7 + 2;
                }
                else {
                  if (uVar9 - 0x41 < 0x1a) {
                    uVar9 = uVar9 | 0x20;
                  }
                  if (uVar9 != 0x6c) goto LAB_10008db0;
                  uVar9 = (uint)local_9c5;
                  if (uVar9 == 0) {
                    pcVar17 = str_100233b7 + 3;
                  }
                  else {
                    if (uVar9 - 0x41 < 0x1a) {
                      uVar9 = uVar9 | 0x20;
                    }
                    if (uVar9 != 0x65) goto LAB_10008db0;
                    uVar9 = (uint)local_9c4;
                    if (uVar9 == 0) {
                      pcVar17 = str_100233b7 + 4;
                    }
                    else {
                      if (uVar9 - 0x41 < 0x1a) {
                        uVar9 = uVar9 | 0x20;
                      }
                      if (uVar9 != 99) goto LAB_10008db0;
                      uVar9 = (uint)local_9c3;
                      if (uVar9 == 0) {
                        pcVar17 = str_100233b7 + 5;
                      }
                      else {
                        if (uVar9 - 0x41 < 0x1a) {
                          uVar9 = uVar9 | 0x20;
                        }
                        bVar28 = uVar9 == 0x74;
                        if (bVar28) {
                          uVar9 = (uint)local_9c2;
                        }
                        if (!bVar28 || uVar9 != 0) goto LAB_10008db0;
                        pcVar17 = str_100233b7 + 6;
                      }
                    }
                  }
                }
              }
              goto LAB_10008ac0;
            }
            if (uVar9 == 0x74) {
              uVar9 = (uint)local_9c7;
              if (uVar9 == 0) {
                pcVar17 = str_100233ae + 1;
              }
              else {
                if (uVar9 - 0x41 < 0x1a) {
                  uVar9 = uVar9 | 0x20;
                }
                if (uVar9 != 0x65) goto LAB_10008db0;
                uVar9 = (uint)local_9c6;
                if (uVar9 == 0) {
                  pcVar17 = str_100233ae + 2;
                }
                else {
                  if (uVar9 - 0x41 < 0x1a) {
                    uVar9 = uVar9 | 0x20;
                  }
                  if (uVar9 != 0x78) goto LAB_10008db0;
                  uVar9 = (uint)local_9c5;
                  if (uVar9 == 0) {
                    pcVar17 = str_100233ae + 3;
                  }
                  else {
                    if (uVar9 - 0x41 < 0x1a) {
                      uVar9 = uVar9 | 0x20;
                    }
                    if (uVar9 != 0x74) goto LAB_10008db0;
                    uVar9 = (uint)local_9c4;
                    if (uVar9 == 0) {
                      pcVar17 = str_100233ae + 4;
                    }
                    else {
                      if (uVar9 - 0x41 < 0x1a) {
                        uVar9 = uVar9 | 0x20;
                      }
                      if (uVar9 != 0x61) goto LAB_10008db0;
                      uVar9 = (uint)local_9c3;
                      if (uVar9 == 0) {
                        pcVar17 = str_100233ae + 5;
                      }
                      else {
                        if (uVar9 - 0x41 < 0x1a) {
                          uVar9 = uVar9 | 0x20;
                        }
                        if (uVar9 != 0x72) goto LAB_10008db0;
                        uVar9 = (uint)local_9c2;
                        if (uVar9 == 0) {
                          pcVar17 = str_100233ae + 6;
                        }
                        else {
                          if (uVar9 - 0x41 < 0x1a) {
                            uVar9 = uVar9 | 0x20;
                          }
                          if (uVar9 != 0x65) goto LAB_10008db0;
                          uVar9 = (uint)local_9c1;
                          if (uVar9 == 0) {
                            pcVar17 = str_100233ae + 7;
                          }
                          else {
                            if (uVar9 - 0x41 < 0x1a) {
                              uVar9 = uVar9 | 0x20;
                            }
                            bVar29 = uVar9 == 0x61;
                            if (bVar29) {
                              uVar9 = (uint)local_9c0;
                            }
                            if (!bVar29 || uVar9 != 0) goto LAB_10008db0;
                            pcVar17 = str_100233ae + 8;
                          }
                        }
                      }
                    }
                  }
                }
              }
              if (*pcVar17 == '\0') goto LAB_10008dcc;
              pcVar17 = str_100233b7;
              if (bVar28) goto LAB_10008ac0;
            }
          }
LAB_10008db0:
          bVar28 = recovered_10013a08((int)param_2,(char *)local_9a0,(char *)&local_9c8);
          if (bVar28) goto LAB_10008edc;
          uVar18 = (uint)local_9c8;
        }
LAB_10008dcc:
        pcVar17 = &DAT_100233c1;
        if (uVar18 == 0) {
LAB_10008ec0:
          if (*pcVar17 == '\0') {
            uVar16 = strlen(&DAT_100233c4);
            uVar18 = extraout_r1;
            pbVar7 = extraout_r2;
            if (uVar16 != 0) {
              pbVar7 = (byte *)(pcVar8 + 1);
              uVar18 = (uint)*pbVar7;
            }
            if (uVar16 != 0 && uVar18 != 0) {
              pbVar20 = pbVar7;
              do {
                uVar13 = 0;
                while (uVar18 = (uint)pbVar20[uVar13], uVar18 != 0) {
                  uVar9 = (uint)(byte)(&DAT_100233c4)[uVar13];
                  if (uVar9 - 0x41 < 0x1a) {
                    uVar9 = uVar9 | 0x20;
                  }
                  if (uVar18 - 0x41 < 0x1a) {
                    uVar18 = uVar18 | 0x20;
                  }
                  if (uVar18 != uVar9) break;
                  uVar13 = uVar13 + 1;
                  if (uVar16 == uVar13) goto LAB_10009058;
                }
                if (uVar16 == uVar13) {
LAB_10009058:
                  if ((local_d5c == 0) || (acStack_6ac[local_d5c * 0xc] != '\x01')) {
                    local_28 = CONCAT44(PF_PART4(local_28, 4),(uint)local_28 + 2);
                    recovered_10014478((uint)param_2,(int *)&local_30,pbVar7,
                                       (int)(pbVar20 + ~(uint)pcVar8),local_d3c);
                    pbVar20 = pbVar20 + 5;
                  }
                  else {
                    recovered_10013f60(param_2,(int *)&local_30,aiStack_6a8 + local_d5c * 3,
                                       aiStack_6a8 + local_d5c * 3 + 1,pbVar7,
                                       (int)(pbVar20 + ~(uint)pcVar8),local_d3c);
                    pbVar20 = pbVar20 + 5;
                  }
                  goto LAB_10007fe4;
                }
                pbVar20 = pbVar20 + 1;
              } while (*pbVar20 != 0);
            }
            local_28 = CONCAT44(PF_PART4(local_28, 4),(uint)local_28 + 2);
            recovered_10014a40((int)param_2,&DAT_100233ca,0,&DAT_10022c1b,local_d3c,local_d40,
                               (int *)&local_30);
            goto LAB_100091ec;
          }
        }
        else {
          uVar9 = uVar18;
          if (uVar18 - 0x41 < 0x1a) {
            uVar9 = uVar18 | 0x20;
          }
          if (uVar9 == 0x6c) {
            uVar9 = (uint)local_9c7;
            if (uVar9 == 0) {
              pcVar17 = &DAT_100233c2;
            }
            else {
              if (uVar9 - 0x41 < 0x1a) {
                uVar9 = uVar9 | 0x20;
              }
              bVar28 = uVar9 != 0x69;
              if (!bVar28) {
                uVar9 = (uint)local_9c6;
              }
              if (bVar28 || uVar9 != 0) goto LAB_10008ecc;
              pcVar17 = &DAT_100233c3;
            }
            goto LAB_10008ec0;
          }
          if (uVar9 == 0x62) {
            uVar9 = (uint)local_9c7;
            if (uVar9 == 0) {
              pcVar17 = &DAT_100233bf;
            }
            else {
              if (uVar9 - 0x41 < 0x1a) {
                uVar9 = uVar9 | 0x20;
              }
              bVar28 = uVar9 == 0x72;
              if (bVar28) {
                uVar9 = (uint)local_9c6;
              }
              if (!bVar28 || uVar9 != 0) goto LAB_10008ecc;
              pcVar17 = &DAT_100233c0;
            }
            if (*pcVar17 == '\0') {
              local_28 = CONCAT44(PF_PART4(local_28, 4),(uint)local_28 + 0xe);
              goto LAB_100091ec;
            }
          }
        }
LAB_10008ecc:
        uVar9 = recovered_10014e0c(&local_9c8);
        if (uVar9 == 0) {
          pcVar17 = &DAT_100233cc;
          if (uVar18 == 0) {
LAB_100090d4:
            if (*pcVar17 == '\0') {
              recovered_10015428((int)param_2,(undefined4 *)&local_30);
              goto LAB_100091ec;
            }
          }
          else {
            if (uVar18 - 0x41 < 0x1a) {
              uVar18 = uVar18 | 0x20;
            }
            if (uVar18 == 0x68) {
              uVar18 = (uint)local_9c7;
              if (uVar18 == 0) {
                pcVar17 = &DAT_100233cd;
              }
              else {
                if (uVar18 - 0x41 < 0x1a) {
                  uVar18 = uVar18 | 0x20;
                }
                bVar28 = uVar18 != 0x72;
                if (!bVar28) {
                  uVar18 = (uint)local_9c6;
                }
                if (bVar28 || uVar18 != 0) goto LAB_100090e0;
                pcVar17 = &DAT_100233ce;
              }
              goto LAB_100090d4;
            }
          }
LAB_100090e0:
          bVar28 = recovered_1000bcd4(&local_9c8,&DAT_10023386);
          if ((bVar28) || (bVar28 = recovered_1000bcd4(&local_9c8,&DAT_10023389), bVar28)) {
            bVar28 = recovered_100154ec((int)param_2,(int)local_9a0,&local_9c8);
            iVar22 = 6;
            if (bVar28) {
              iVar22 = 4;
            }
            local_28 = CONCAT44(PF_PART4(local_28, 4),(uint)local_28 + iVar22);
            if (local_d5c < 0x10) {
              memset(abStack_6a0 + local_d5c * 0xc,0,0xc);
              abStack_6a0[local_d5c * 0xc] = bVar28;
              auStack_69c[local_d5c * 3] = (uint)local_30;
              auStack_69c[local_d5c * 3 + 1] = (uint)local_28;
              local_d5c = local_d5c + 1;
            }
          }
          else {
            bVar28 = recovered_1000bcd4(&local_9c8,(byte *)str_1002338c);
            if (bVar28) {
              local_7a0[0] = '\0';
              if (local_d64 < 8) {
                local_d64 = local_d64 + 1;
              }
            }
            else {
              bVar28 = recovered_1000bcd4(&local_9c8,(byte *)str_100233cf);
              if (bVar28) {
                if (local_d64 != 0) {
                  if (local_7a0[0] == '\0') {
                    recovered_10016074((int)local_9a0,local_7a0);
                  }
                }
              }
              else {
                iVar22 = recovered_10012c7c(&local_9c8);
                if (iVar22 == 0) {
                  bVar28 = recovered_1000bcd4(&local_9c8,&DAT_1002336f);
                  if (bVar28) {
                    recovered_1000bd50((char *)local_9a0,str_100233d6,(char *)local_ad0,0x40);
                    local_d3c = recovered_1001687c((int)param_2,(char *)local_ad0,2);
                  }
                  else {
                    bVar28 = recovered_1000bcd4(&local_9c8,&DAT_10023372);
                    if ((((!bVar28) &&
                         (bVar28 = recovered_1000bcd4(&local_9c8,&DAT_10023375), !bVar28)) &&
                        (bVar28 = recovered_1000bcd4(&local_9c8,&DAT_10023378), !bVar28)) &&
                       ((bVar28 = recovered_1000bcd4(&local_9c8,&DAT_1002337b), !bVar28 &&
                        (bVar28 = recovered_1000bcd4(&local_9c8,&DAT_1002337e), !bVar28)))) {
                      bVar28 = recovered_1000bcd4(&local_9c8,&DAT_10023366);
                      if (bVar28) {
                        pcVar17 = recovered_1000c6fc(pcVar8 + 1,&DAT_100233f4);
                        recovered_1000bd50((char *)local_9a0,&DAT_10022cbb,local_130,0x100);
                        recovered_1000bd50((char *)local_9a0,str_100233f9,local_bd0,0x80);
                        cVar3 = local_130[0];
                        bVar30 = local_130[0] != '\0';
                        cVar1 = bVar30;
                        if (pcVar17 != (char *)0x0) {
                          cVar1 = local_bd0[0];
                        }
                        if (pcVar17 != (char *)0x0 && cVar1 != '\0') {
                          recovered_100169a4((int)param_2,(byte *)(pcVar8 + 1),
                                             (int)(pcVar17 + ~(uint)pcVar8),(char *)local_ad0,0x100)
                          ;
                          if ((char)local_ad0[0] == '\0') {
                            pcVar8 = &DAT_10022c1b;
                            if (cVar3 != '\0') {
                              pcVar8 = local_130;
                            }
                            recovered_10014a40((int)param_2,(byte *)local_bd0,
                                               (uint)(cVar3 != '\0') << 1,pcVar8,local_d3c,local_d40
                                               ,(int *)&local_30);
                            bVar30 = false;
                            pbVar20 = (byte *)(pcVar17 + 4);
                            local_130[0] = '\0';
                            goto LAB_10007fe4;
                          }
                        }
                      }
                      else {
                        bVar28 = recovered_1000bcd4(&local_9c8,&DAT_10023404);
                        if (bVar28) {
                          recovered_10016074((int)local_9a0,(char *)local_ad0);
                          if (((char)local_ad0[0] == '\0') && (local_7a0[0] != '\0')) {
                            pf_varargs_10023fa4__4_
                                      ((char *)local_ad0,0x100,&DAT_10022ca6,(uint)local_7a0);
                          }
                          recovered_1000bd50((char *)local_9a0,&DAT_10023408,local_bd0,0x80);
                          puVar19 = local_cb0;
                          recovered_1000bd50((char *)local_9a0,str_1002340c,(char *)puVar19,0x20);
                          recovered_1000bd50((char *)local_9a0,str_10023412,(char *)local_d30,0x20);
                          while( true ) {
                            uVar18 = (uint)(byte)*puVar19;
                            if ((0x17 < uVar18 - 9) || ((1 << (uVar18 - 9 & 0xff) & 0x80001bU) == 0)
                               ) break;
                            puVar19 = (ulonglong *)((int)puVar19 + 1);
                          }
                          iVar22 = 0;
                          if ((uVar18 - 0x30 & 0xff) < 10) {
                            iVar12 = 1;
                            do {
                              pbVar20 = (byte *)((int)puVar19 + iVar12);
                              iVar12 = iVar12 + 1;
                              iVar22 = iVar22 * 10 + (uVar18 - 0x30 & 0xff);
                              uVar18 = (uint)*pbVar20;
                            } while ((*pbVar20 - 0x30U & 0xff) < 10);
                          }
                          pbVar20 = local_d30;
                          while( true ) {
                            uVar18 = (uint)*pbVar20;
                            if ((0x17 < uVar18 - 9) || ((1 << (uVar18 - 9 & 0xff) & 0x80001bU) == 0)
                               ) break;
                            pbVar20 = pbVar20 + 1;
                          }
                          iVar12 = 0;
                          if ((uVar18 - 0x30 & 0xff) < 10) {
                            iVar14 = 1;
                            do {
                              pbVar7 = pbVar20 + iVar14;
                              iVar14 = iVar14 + 1;
                              iVar12 = iVar12 * 10 + (uVar18 - 0x30 & 0xff);
                              uVar18 = (uint)*pbVar7;
                            } while ((*pbVar7 - 0x30U & 0xff) < 10);
                          }
                          recovered_1001786c((int)param_2,(char *)local_ad0,local_bd0,iVar22,iVar12,
                                             local_d40,(int *)&local_30);
                        }
                        else {
                          bVar28 = recovered_1000bcd4(&local_9c8,(byte *)str_10023419);
                          if (bVar28) {
                            recovered_1000bd50((char *)local_9a0,&DAT_10022d05,(char *)local_ad0,
                                               0x100);
                            recovered_10017b88(param_1,(uint)param_2,(undefined4 *)&local_30,
                                               (byte *)local_ad0,local_d3c);
                          }
                          else {
                            bVar28 = recovered_1000bcd4(&local_9c8,&DAT_10023381);
                            if (bVar28) {
                              if (local_d60 < 0xc) {
                                auStack_5cc[local_d60 + 0x11b] = local_d40;
                                local_d40 = recovered_10016460((char *)local_9a0,local_d40);
                                local_d60 = local_d60 + 1;
                              }
                              if (*puVar6 < 0x10) {
                                piVar15 = param_2 + *puVar6 * 0x62 + 0x14b0c;
                                memset(piVar15,0,0x188);
                                recovered_1000bd50((char *)local_9a0,str_10023420,(char *)piVar15,
                                                   0x100);
                                recovered_1000bd50((char *)local_9a0,str_10023427,
                                                   (char *)(piVar15 + 0x42),0x80);
                                puVar19 = local_ad0;
                                recovered_1000bd50((char *)local_9a0,str_10023430,(char *)puVar19,
                                                   0x10);
                                if ((char)local_ad0[0] == '\0') {
                                  puVar19 = (ulonglong *)&DAT_10023437;
                                }
                                pf_varargs_10023fa4__4_
                                          ((char *)(piVar15 + 0x40),8,&DAT_10022ca6,(uint)puVar19);
                                local_d50 = *puVar6;
                                *puVar6 = local_d50 + 1;
                              }
                              iVar22 = (uint)local_28 + 6;
                              goto LAB_10009428;
                            }
                            bVar28 = recovered_1000bcd4(&local_9c8,(byte *)str_100233a8);
                            if (bVar28) {
                              recovered_1000bd50((char *)local_9a0,&DAT_1002343b,(char *)local_c30,
                                                 0x20);
                              recovered_1000bd50((char *)local_9a0,&DAT_10023440,(char *)local_cb0,
                                                 0x40);
                              recovered_1000bd50((char *)local_9a0,&DAT_10023445,(char *)local_d30,
                                                 0x40);
                              recovered_1000bd50((char *)local_9a0,str_10023448,(char *)local_ad0,
                                                 0x80);
                              bVar28 = recovered_1000bcd4(local_c30,(byte *)str_1002344e);
                              if (!bVar28) {
                                bVar28 = recovered_10013a08((int)param_2,(char *)local_9a0,
                                                            (char *)&local_9c8);
                                bVar2 = local_c30[0];
                                if (!bVar28) {
                                  if ((local_c30[0] == 0) ||
                                     (((bVar28 = recovered_1000bcd4(local_c30,(byte *)str_10023455),
                                       !bVar28 &&
                                       (bVar28 = recovered_1000bcd4(local_c30,(byte *)str_1002345c),
                                       !bVar28)) &&
                                      (bVar28 = recovered_1000bcd4(local_c30,(byte *)str_10023463),
                                      !bVar28)))) {
                                    bVar28 = recovered_1000bcd4(local_c30,(byte *)str_10023481);
                                    if ((bVar28) ||
                                       (bVar28 = recovered_1000bcd4(local_c30,(byte *)str_1002348a),
                                       bVar28)) {
                                      iVar22 = recovered_100188bc((char *)local_9a0,str_10023490);
                                      if (iVar22 != 0) {
                                        puVar19 = local_ad0;
                                        if ((char)local_ad0[0] == '\0') {
                                          puVar19 = (ulonglong *)&DAT_10023498;
                                        }
                                        recovered_100184f4((int)param_2,(undefined1 *)local_cb0,
                                                           local_d30,(undefined1 *)puVar19,local_d50
                                                          );
                                      }
                                    }
                                    else {
                                      bVar28 = recovered_1000bcd4(local_c30,(byte *)str_1002349b);
                                      if (!bVar28) {
                                        bVar28 = recovered_1000bcd4(local_c30,&DAT_100234a1);
                                        if (!bVar28) {
                                          if (((((bVar2 != 0) &&
                                                (bVar28 = recovered_1000bcd4(local_c30,&DAT_100234a6
                                                                            ), !bVar28)) &&
                                               ((bVar28 = recovered_1000bcd4(local_c30,
                                                                             (byte *)str_100234ab),
                                                !bVar28 &&
                                                (((bVar28 = recovered_1000bcd4(local_c30,
                                                                               &DAT_100234b2),
                                                  !bVar28 &&
                                                  (bVar28 = recovered_1000bcd4(local_c30,
                                                                               (byte *)str_100234b6)
                                                  , !bVar28)) &&
                                                 (bVar28 = recovered_1000bcd4(local_c30,
                                                                              (byte *)str_100234bc),
                                                 !bVar28)))))) &&
                                              ((bVar28 = recovered_1000bcd4(local_c30,&DAT_100234c5)
                                               , !bVar28 &&
                                               (bVar28 = recovered_1000bcd4(local_c30,
                                                                            (byte *)str_100234c9),
                                               !bVar28)))) &&
                                             ((bVar28 = recovered_1000bcd4(local_c30,&DAT_100234d0),
                                              !bVar28 &&
                                              (bVar28 = recovered_1000bcd4(local_c30,
                                                                           (byte *)str_100234d5),
                                              !bVar28)))) {
                                            bVar28 = recovered_1000bcd4(local_c30,&DAT_100234e4);
                                            if (!bVar28) goto LAB_100091ec;
                                          }
                                          recovered_10018b94((int)param_2,(char *)local_cb0,
                                                             (char *)local_d30,
                                                             (undefined1 *)local_ad0,local_d50,
                                                             local_d40,(int *)&local_30);
                                        }
                                      }
                                    }
                                  }
                                  else {
                                    recovered_1000bd50((char *)local_9a0,str_10023469,local_bd0,0x80
                                                      );
                                    cVar1 = (char)local_ad0[0];
                                    iVar22 = recovered_100188bc((char *)local_9a0,str_10023478);
                                    pcVar17 = (char *)local_ad0;
                                    if (cVar1 == '\0') {
                                      pcVar17 = str_10023471;
                                    }
                                    recovered_10018600((int)param_2,pcVar17,(undefined1 *)local_cb0,
                                                       (undefined1 *)local_ad0,local_bd0,local_d50,
                                                       iVar22,local_d40,(int *)&local_30);
                                  }
                                  goto LAB_100091ec;
                                }
                              }
                              recovered_100184f4((int)param_2,(undefined1 *)local_cb0,local_d30,
                                                 (undefined1 *)local_ad0,local_d50);
                            }
                            else {
                              bVar28 = recovered_1000bcd4(&local_9c8,(byte *)str_100233ae);
                              if (bVar28) {
                                pcVar17 = recovered_1000c6fc(pcVar8 + 1,str_100234e9);
                                recovered_1000bd50((char *)local_9a0,&DAT_10023440,(char *)local_cb0
                                                   ,0x40);
                                recovered_1000bd50((char *)local_9a0,&DAT_10023445,(char *)local_d30
                                                   ,0x40);
                                local_ad0[0] = local_ad0[0] & 0xffffffffffffff00;
                                if (pcVar17 != (char *)0x0) {
                                  pcVar21 = pcVar17 + ~(uint)pcVar8;
                                  if (0xfe < (int)pcVar21) {
                                    pcVar21 = (char *)0xff;
                                  }
                                  memcpy(local_ad0,pcVar8 + 1,(ulong)pcVar21);
                                  *(char *)((int)local_ad0 + (int)pcVar21) = '\0';
                                }
                                recovered_1000ce7c((char *)local_ad0,local_bd0,0x100);
                                bVar28 = recovered_10013a08((int)param_2,(char *)local_9a0,
                                                            (char *)&local_9c8);
                                if (bVar28) {
                                  recovered_100184f4((int)param_2,(undefined1 *)local_cb0,local_d30,
                                                     local_bd0,local_d50);
                                }
                                else {
                                  recovered_10018b94((int)param_2,(char *)local_cb0,
                                                     (char *)local_d30,local_bd0,local_d50,local_d40
                                                     ,(int *)&local_30);
                                }
                                if (pcVar17 != (char *)0x0) {
                                  pbVar20 = (byte *)(pcVar17 + 0xb);
                                  goto LAB_10007fe4;
                                }
                              }
                              else {
                                bVar28 = recovered_1000bcd4(&local_9c8,(byte *)str_100233b7);
                                if (bVar28) {
                                  pcVar17 = recovered_1000c6fc(pcVar8 + 1,str_100234f5);
                                  recovered_1000bd50((char *)local_9a0,&DAT_10023440,local_bd0,0x40)
                                  ;
                                  recovered_1000bd50((char *)local_9a0,&DAT_10023445,
                                                     (char *)local_cb0,0x40);
                                  local_ad0[0] = local_ad0[0] & 0xffffffffffffff00;
                                  if (pcVar17 != (char *)0x0) {
                                    recovered_10018dac(pcVar8 + 1,pcVar17,(char *)local_ad0);
                                  }
                                  bVar28 = recovered_10013a08((int)param_2,(char *)local_9a0,
                                                              (char *)&local_9c8);
                                  if (bVar28) {
                                    recovered_100184f4((int)param_2,local_bd0,
                                                       (undefined1 *)local_cb0,
                                                       (undefined1 *)local_ad0,local_d50);
                                  }
                                  else {
                                    recovered_10018b94((int)param_2,local_bd0,(char *)local_cb0,
                                                       (undefined1 *)local_ad0,local_d50,local_d40,
                                                       (int *)&local_30);
                                  }
                                  if (pcVar17 != (char *)0x0) {
                                    pbVar20 = (byte *)(pcVar17 + 9);
                                    goto LAB_10007fe4;
                                  }
                                }
                                else {
                                  bVar28 = recovered_1000bcd4(&local_9c8,(byte *)str_1002345c);
                                  if (bVar28) {
                                    pcVar17 = recovered_1000c6fc(pcVar8 + 1,str_100234ff);
                                    recovered_1000bd50((char *)local_9a0,&DAT_1002343b,
                                                       (char *)abStack_bf0,0x20);
                                    recovered_1000bd50((char *)local_9a0,&DAT_10023440,
                                                       (char *)local_c30,0x40);
                                    recovered_1000bd50((char *)local_9a0,str_10023448,
                                                       (char *)local_ad0,0x80);
                                    recovered_1000bd50((char *)local_9a0,str_100233f9,
                                                       (char *)local_cb0,0x80);
                                    local_bd0[0] = '\0';
                                    recovered_1000bd50((char *)local_9a0,str_10023469,
                                                       (char *)local_d30,0x80);
                                    if (pcVar17 != (char *)0x0) {
                                      recovered_100169a4((int)param_2,(byte *)(pcVar8 + 1),
                                                         (int)(pcVar17 + ~(uint)pcVar8),local_bd0,
                                                         0x80);
                                    }
                                    bVar28 = recovered_1000bcd4(abStack_bf0,(byte *)str_1002349b);
                                    if (!bVar28) {
                                      pcVar21 = local_bd0;
                                      if ((local_bd0[0] == '\0') &&
                                         (pcVar21 = (char *)local_cb0, (char)local_cb0[0] == '\0'))
                                      {
                                        pcVar21 = (char *)local_ad0;
                                        if ((char)local_ad0[0] == '\0') {
                                          pcVar21 = str_10023471;
                                        }
                                      }
                                      iVar22 = recovered_100188bc((char *)local_9a0,str_10023478);
                                      recovered_10018600((int)param_2,pcVar21,local_c30,
                                                         (undefined1 *)local_ad0,local_d30,local_d50
                                                         ,iVar22,local_d40,(int *)&local_30);
                                    }
                                    if (pcVar17 != (char *)0x0) {
                                      pbVar20 = (byte *)(pcVar17 + 9);
                                      goto LAB_10007fe4;
                                    }
                                  }
                                  else {
                                    bVar28 = recovered_1000bcd4(&local_9c8,(byte *)str_10023509);
                                    if (!bVar28) goto LAB_100091ec;
                                    pcVar17 = recovered_1000c6fc(pcVar8 + 1,str_1002350f);
                                    if (pcVar17 != (char *)0x0) {
                                      pcVar21 = pcVar17 + ~(uint)pcVar8;
                                      if (0x3e < (int)pcVar21) {
                                        pcVar21 = (char *)0x3f;
                                      }
                                      memcpy(dst,pcVar8 + 1,(ulong)pcVar21);
                                      dst[(int)pcVar21] = '\0';
                                      recovered_1000ce7c(dst,(char *)local_ad0,0x40);
                                      pf_varargs_10023fa4__4_
                                                (dst,0x40,&DAT_10022ca6,(uint)local_ad0);
                                      pbVar20 = (byte *)(pcVar17 + 8);
                                      goto LAB_10007fe4;
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                      goto LAB_100091ec;
                    }
                    recovered_1000bd50((char *)local_9a0,str_100233d6,(char *)local_ad0,0x40);
                    local_d3c = recovered_1001687c((int)param_2,(char *)local_ad0,1);
                  }
                  iVar5 = 1;
                  local_28 = CONCAT44(PF_PART4(local_28, 4),(uint)local_28 + 8);
                }
                else {
                  bVar28 = recovered_1000bcd4(&local_9c8,&DAT_10023394);
                  if (bVar28) {
                    recovered_1000bd50((char *)local_9a0,str_100233d6,(char *)local_ad0,0x60);
                    iVar22 = recovered_1001624c((byte *)local_ad0,(byte *)str_100233dc);
                    if ((iVar22 == 0) || (0xf < local_d68)) {
                      iVar22 = recovered_1001624c((byte *)local_ad0,(byte *)str_100233e2);
                      if ((!(iVar22 != 0 && local_d68 != 0)) ||
                         ((auStack_69c[local_d68 * 0x12 + 0x1d] != 1 || (0xf < local_d68)))) {
                        iVar22 = recovered_1001624c((byte *)local_ad0,&DAT_100233e9);
                        if ((iVar22 == 0) || (0xf < local_d68)) {
                          iVar22 = recovered_1001624c((byte *)local_ad0,(byte *)str_100233ed);
                          if ((iVar22 == 0) || (0xf < local_d68)) {
                            if (local_d60 < 0xc) {
                              auStack_5cc[local_d60 + 0x11b] = local_d40;
                              local_d40 = recovered_10016460((char *)local_9a0,local_d40);
                              local_d60 = local_d60 + 1;
                            }
                            if (local_d68 < 0x10) {
                              memset(auStack_69c + local_d68 * 0x12 + 0x2f,0,0x48);
                              auStack_69c[local_d68 * 0x12 + 0x2f] = 0;
                              auStack_5dc[local_d68 * 9] = local_30;
                              auStack_5dc[local_d68 * 9 + 1] = local_28;
                              local_d68 = local_d68 + 1;
                            }
                            goto LAB_10009420;
                          }
                          memset(auStack_69c + local_d68 * 0x12 + 0x2f,0,0x48);
                          auStack_69c[local_d68 * 0x12 + 0x2f] = 4;
                          auStack_5dc[local_d68 * 9] = local_30;
                          auStack_5dc[local_d68 * 9 + 1] = local_28;
                        }
                        else {
                          memset(auStack_69c + local_d68 * 0x12 + 0x2f,0,0x48);
                          auStack_69c[local_d68 * 0x12 + 0x2f] = 3;
                          auStack_5cc[local_d68 * 0x12 + 7] = 3;
                          auStack_5cc[local_d68 * 0x12 + 6] = 0xff;
                          auStack_5cc[local_d68 * 0x12 + 4] = *puVar11;
                          auStack_5dc[local_d68 * 9] = local_30;
                          auStack_5dc[local_d68 * 9 + 1] = local_28;
                          auStack_5cc[local_d68 * 0x12 + 2] = 0xfc;
                          auStack_5cc[local_d68 * 0x12 + 5] = 0xffffff4a;
                          recovered_100163cc((int)param_2,((uintptr_t)pf_module_state + 0x9a1U),
                                             auStack_5cc + local_d68 * 0x12 + 5);
                          local_30 = CONCAT44(auStack_5cc[local_d68 * 0x12 + 2] - 0x14,10);
                          local_28 = CONCAT35(PF_PART3(local_28, 5),0x10000000a);
                        }
                      }
                      else {
                        uVar18 = auStack_69c[local_d68 * 0x12 + 0x2b];
                        uVar9 = auStack_69c[local_d68 * 0x12 + 0x2a];
                        iVar22 = (int)(uVar18 + ((uint)((int)uVar18 >> 0x1f) >> 0x1e)) >> 2;
                        iVar12 = 0x96;
                        if (0x96 < iVar22) {
                          iVar12 = iVar22;
                        }
                        uVar25 = iVar12 + 10;
                        if ((auStack_69c[local_d68 * 0x12 + 0x2c] != uVar9) &&
                           ((int)(uVar9 + uVar18) <
                            (int)(uVar25 + auStack_69c[local_d68 * 0x12 + 0x2c]))) {
                          uVar18 = auStack_69c[local_d68 * 0x12 + 0x2e];
                          auStack_69c[local_d68 * 0x12 + 0x2c] = uVar9;
                          auStack_69c[local_d68 * 0x12 + 0x2e] = 0;
                          auStack_69c[local_d68 * 0x12 + 0x2d] =
                               uVar18 + auStack_69c[local_d68 * 0x12 + 0x2d] + 10;
                        }
                        memset(auStack_69c + local_d68 * 0x12 + 0x2f,0,0x48);
                        uVar4 = local_28;
                        uVar23 = auStack_69c[local_d68 * 0x12 + 0x2d];
                        uVar9 = auStack_69c[local_d68 * 0x12 + 0x2c];
                        auStack_69c[local_d68 * 0x12 + 0x2f] = 2;
                        uVar18 = (auStack_69c[local_d68 * 0x12 + 0x2a] - uVar9) +
                                 auStack_69c[local_d68 * 0x12 + 0x2b];
                        auStack_5dc[local_d68 * 9] = local_30;
                        auStack_5dc[local_d68 * 9 + 1] = uVar4;
                        if ((int)uVar25 < (int)uVar18) {
                          uVar18 = uVar25;
                        }
                        auStack_5cc[local_d68 * 0x12] = uVar9;
                        auStack_5cc[local_d68 * 0x12 + 2] = uVar18;
                        auStack_5cc[local_d68 * 0x12 + 5] = 0xffffff4a;
                        auStack_5cc[local_d68 * 0x12 + 7] = 0;
                        auStack_5cc[local_d68 * 0x12 + 6] = 0;
                        auStack_5cc[local_d68 * 0x12 + 1] = uVar23;
                        recovered_100163cc((int)param_2,((uintptr_t)pf_module_state + 0x99aU),
                                           auStack_5cc + local_d68 * 0x12 + 5);
                        uVar18 = auStack_5cc[local_d68 * 0x12 + 2];
                        if ((int)uVar18 < 0x45) {
                          uVar18 = 0x44;
                        }
                        local_30 = CONCAT44(uVar18 - 0x14,auStack_5cc[local_d68 * 0x12] + 10);
                        local_28 = CONCAT44((int)(local_28 >> 0x20),
                                            auStack_5cc[local_d68 * 0x12 + 1] + 10) &
                                   0xffffff00ffffffff;
                      }
                    }
                    else {
                      memset(auStack_69c + local_d68 * 0x12 + 0x2f,0,0x48);
                      auStack_5cc[local_d68 * 0x12 + 0xb] = (uint)local_28;
                      auStack_5cc[local_d68 * 0x12 + 9] = PF_PART4(local_30, 4);
                      auStack_5dc[local_d68 * 9] = local_30;
                      auStack_5dc[local_d68 * 9 + 1] = local_28;
                      auStack_69c[local_d68 * 0x12 + 0x2f] = 1;
                      auStack_5cc[local_d68 * 0x12 + 0xc] = 0;
                      auStack_5cc[local_d68 * 0x12 + 10] = (uint)local_30;
                      auStack_5cc[local_d68 * 0x12 + 8] = (uint)local_30;
                    }
                    local_d68 = local_d68 + 1;
                    pbVar20 = (byte *)(pcVar8 + 1);
                    goto LAB_10007fe4;
                  }
                  bVar28 = recovered_1000bcd4(&local_9c8,(byte *)str_10023398);
                  if ((bVar28) && (local_d60 < 0xc)) {
                    auStack_5cc[local_d60 + 0x11b] = local_d40;
                    local_d60 = local_d60 + 1;
                    local_d40 = 1;
                  }
LAB_10009420:
                  iVar22 = (uint)local_28 + 8;
LAB_10009428:
                  local_28 = CONCAT44(PF_PART4(local_28, 4),iVar22);
                }
              }
            }
          }
LAB_100091ec:
          pbVar20 = (byte *)(pcVar8 + 1);
          goto LAB_10007fe4;
        }
      }
      else {
        pcVar17 = str_1002339f;
        if (uVar18 != 0) {
          uVar9 = uVar18;
          if (uVar18 - 0x41 < 0x1a) {
            uVar9 = uVar18 | 0x20;
          }
          if (uVar9 == 0x6e) {
            uVar9 = (uint)local_9c7;
            if (uVar9 == 0) {
              pcVar17 = str_1002339f + 1;
            }
            else {
              if (uVar9 - 0x41 < 0x1a) {
                uVar9 = uVar9 | 0x20;
              }
              if (uVar9 != 0x6f) goto LAB_10008974;
              uVar9 = (uint)local_9c6;
              if (uVar9 == 0) {
                pcVar17 = str_1002339f + 2;
              }
              else {
                if (uVar9 - 0x41 < 0x1a) {
                  uVar9 = uVar9 | 0x20;
                }
                if (uVar9 != 0x73) goto LAB_10008974;
                uVar9 = (uint)local_9c5;
                if (uVar9 == 0) {
                  pcVar17 = str_1002339f + 3;
                }
                else {
                  if (uVar9 - 0x41 < 0x1a) {
                    uVar9 = uVar9 | 0x20;
                  }
                  if (uVar9 != 99) goto LAB_10008974;
                  uVar9 = (uint)local_9c4;
                  if (uVar9 == 0) {
                    pcVar17 = str_1002339f + 4;
                  }
                  else {
                    if (uVar9 - 0x41 < 0x1a) {
                      uVar9 = uVar9 | 0x20;
                    }
                    if (uVar9 != 0x72) goto LAB_10008974;
                    uVar9 = (uint)local_9c3;
                    if (uVar9 == 0) {
                      pcVar17 = str_1002339f + 5;
                    }
                    else {
                      if (uVar9 - 0x41 < 0x1a) {
                        uVar9 = uVar9 | 0x20;
                      }
                      if (uVar9 != 0x69) goto LAB_10008974;
                      uVar9 = (uint)local_9c2;
                      if (uVar9 == 0) {
                        pcVar17 = str_1002339f + 6;
                      }
                      else {
                        if (uVar9 - 0x41 < 0x1a) {
                          uVar9 = uVar9 | 0x20;
                        }
                        if (uVar9 != 0x70) goto LAB_10008974;
                        uVar9 = (uint)local_9c1;
                        if (uVar9 == 0) {
                          pcVar17 = str_1002339f + 7;
                        }
                        else {
                          if (uVar9 - 0x41 < 0x1a) {
                            uVar9 = uVar9 | 0x20;
                          }
                          bVar28 = uVar9 == 0x74;
                          if (bVar28) {
                            uVar9 = (uint)local_9c0;
                          }
                          if (!bVar28 || uVar9 != 0) goto LAB_10008974;
                          pcVar17 = str_1002339f + 8;
                        }
                      }
                    }
                  }
                }
              }
            }
            goto LAB_10008960;
          }
          goto LAB_10008974;
        }
LAB_10008960:
        if (*pcVar17 != '\0') goto LAB_1000896c;
      }
LAB_10008edc:
      pbVar20 = (byte *)recovered_10013320((uint)pcVar8,&local_9c8);
      goto LAB_10007fe4;
    }
LAB_1000a5a4:
    iVar5 = DAT_10024118 + -0x5e;
    if (DAT_10024118 + -0x5e < (int)((uint)local_28 + 0x20)) {
      iVar5 = (uint)local_28 + 0x20;
    }
    iVar22 = iVar5 - DAT_10024118;
    iVar12 = iVar22 + 0x5e;
    iVar14 = param_2[0x1512e];
    param_2[0x1512f] = iVar5;
    if (iVar22 == -0x72 || iVar12 < -0x14) {
      iVar12 = -0x14;
    }
    iVar5 = iVar12 + 0x14;
    if (iVar14 < iVar12 + 0x14) {
      iVar5 = iVar14;
    }
    if (iVar14 < 0) {
      iVar5 = 0;
    }
    param_2[0x1512e] = iVar5;
  }
  return;
}

#undef DAT_10022c1b
#undef DAT_10022ca6
#undef DAT_10022ca9
#undef DAT_10022cad
#undef DAT_10022cbb
#undef DAT_10022d05
#undef DAT_10023366
#undef DAT_1002336f
#undef DAT_10023370
#undef DAT_10023371
#undef DAT_10023372
#undef DAT_10023373
#undef DAT_10023374
#undef DAT_10023375
#undef DAT_10023376
#undef DAT_10023377
#undef DAT_10023378
#undef DAT_1002337b
#undef DAT_1002337e
#undef DAT_10023381
#undef DAT_10023386
#undef DAT_10023389
#undef DAT_10023394
#undef DAT_100233bf
#undef DAT_100233c0
#undef DAT_100233c1
#undef DAT_100233c2
#undef DAT_100233c3
#undef DAT_100233c4
#undef DAT_100233ca
#undef DAT_100233cc
#undef DAT_100233cd
#undef DAT_100233ce
#undef DAT_100233e9
#undef DAT_100233f4
#undef DAT_10023404
#undef DAT_10023408
#undef DAT_10023437
#undef DAT_1002343b
#undef DAT_10023440
#undef DAT_10023445
#undef DAT_10023498
#undef DAT_100234a1
#undef DAT_100234a6
#undef DAT_100234b2
#undef DAT_100234c5
#undef DAT_100234d0
#undef DAT_100234e4
#undef DAT_10024114
#undef DAT_10024118
#undef str_1002338c
#undef str_10023398
#undef str_1002339f
#undef str_100233a8
#undef str_100233ae
#undef str_100233b7
#undef str_100233cf
#undef str_100233d6
#undef str_100233dc
#undef str_100233e2
#undef str_100233ed
#undef str_100233f9
#undef str_1002340c
#undef str_10023412
#undef str_10023419
#undef str_10023420
#undef str_10023427
#undef str_10023430
#undef str_10023448
#undef str_1002344e
#undef str_10023455
#undef str_1002345c
#undef str_10023463
#undef str_10023469
#undef str_10023471
#undef str_10023478
#undef str_10023481
#undef str_1002348a
#undef str_10023490
#undef str_1002349b
#undef str_100234ab
#undef str_100234b6
#undef str_100234bc
#undef str_100234c9
#undef str_100234d5
#undef str_100234e9
#undef str_100234f5
#undef str_100234ff
#undef str_10023509
#undef str_1002350f
#undef local_d68
#undef local_d64
#undef local_d60
#undef local_d5c
#undef local_d50
#undef local_d40
#undef local_d3c
#undef local_d30
#undef local_cb0
#undef local_c30
#undef local_bd0
#undef local_ad0
#undef local_9c9
#undef local_9c8
#undef local_9c7
#undef local_9c6
#undef local_9c5
#undef local_9c4
#undef local_9c3
#undef local_9c2
#undef local_9c1
#undef local_9c0
#undef local_9a0
#undef local_7a0
#undef local_130
#undef local_30
#undef local_28
#undef abStack_bf0
#undef acStack_6ac
#undef aiStack_6a8
#undef abStack_6a0
#undef auStack_69c
#undef uStack_5e0
#undef auStack_5dc
#undef auStack_5cc

#undef DAT_10022ca6
#define DAT_10022ca6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x25eU)))
#undef DAT_1002382b
#define DAT_1002382b (*(uint8_t *)(((uintptr_t)pf_module_state + 0xde3U)))
#undef DAT_10023831
#define DAT_10023831 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xde9U)))
#undef DAT_10023836
#define DAT_10023836 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xdeeU)))
#undef DAT_10024088
#define DAT_10024088 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1640U)))
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
#undef UINT_400108bc
#define UINT_400108bc (*(uint *)(0x400108bcU))
#undef str_10022d82
#define str_10022d82 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x33aU)))
#undef str_10022dba
#define str_10022dba (*(char (*)[1])(((uintptr_t)pf_module_state + 0x372U)))
#undef str_1002369e
#define str_1002369e (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc56U)))
#undef str_100236bc
#define str_100236bc (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc74U)))
#undef str_10023723
#define str_10023723 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xcdbU)))
#undef str_1002372d
#define str_1002372d (*(char (*)[1])(((uintptr_t)pf_module_state + 0xce5U)))
#undef str_10023736
#define str_10023736 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xceeU)))
#undef str_10023754
#define str_10023754 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xd0cU)))
#undef str_10023760
#define str_10023760 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xd18U)))
#undef str_1002379d
#define str_1002379d (*(char (*)[1])(((uintptr_t)pf_module_state + 0xd55U)))
#undef str_100237a7
#define str_100237a7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xd5fU)))
#undef str_100237b2
#define str_100237b2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xd6aU)))
#undef str_100237c2
#define str_100237c2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xd7aU)))
#undef str_100237cb
#define str_100237cb (*(char (*)[1])(((uintptr_t)pf_module_state + 0xd83U)))
#undef str_100237e4
#define str_100237e4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xd9cU)))
#undef str_100237f8
#define str_100237f8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xdb0U)))
#undef str_10023807
#define str_10023807 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xdbfU)))
#undef str_1002383b
#define str_1002383b (*(char (*)[1])(((uintptr_t)pf_module_state + 0xdf3U)))
#undef str_1002384f
#define str_1002384f (*(char (*)[1])(((uintptr_t)pf_module_state + 0xe07U)))
#undef str_1002387d
#define str_1002387d (*(char (*)[1])(((uintptr_t)pf_module_state + 0xe35U)))
#undef str_10023bc6
#define str_10023bc6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x117eU)))
#define local_44c (*(int *)(frame + 276))
#define local_348 (*(ulong *)(frame + 536))
#define local_344 (*(byte *)(frame + 540))
#define local_343 (*(byte (*)[95])(frame + 541))
#define local_2e4 (*(byte (*)[128])(frame + 636))
#define abStack_54c (*(byte (*)[256])(frame + 20))
#define abStack_448 (*(byte (*)[256])(frame + 280))
#define acStack_264 (*(char (*)[256])(frame + 764))
#define acStack_164 (*(char (*)[64])(frame + 1020))
#define acStack_124 (*(char (*)[260])(frame + 1084))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a604
 */

void recovered_1000a604(uint param_1,int param_2,byte *param_3)

{
  unsigned char frame[1408] __attribute__((aligned(16))) = {0};

  undefined1 uVar1;
  byte bVar2;
  code *pcVar3;
  byte bVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  ulong uVar8;
  int iVar9;
  undefined1 *ptr;
  uint uVar10;
  ulong uVar11;
  char *pcVar12;
  char *pcVar13;
  byte *pbVar14;
  uint uVar15;
  undefined4 *puVar16;
  int *piVar17;
  char *dst;
  byte *pbVar18;
  int iVar19;
  bool bVar20;

  if (param_2 == 0) {
    return;
  }
  if (param_3 == (byte *)0x0) {
    return;
  }
  iVar5 = recovered_1000645c(param_2);
  if (iVar5 == 0) {
    pcVar13 = str_10022dba;
    goto LAB_1000a820;
  }
  pcVar13 = (char *)(param_2 + 1);
  pf_varargs_10023fa4__4_(acStack_124,0x100,&DAT_10022ca6,(uint)pcVar13);
  pf_varargs_10023fa4__4_(acStack_164,0x40,&DAT_10022ca6,(uint)(param_2 + 0x101));
  pbVar14 = (byte *)(param_2 + 0x201);
  pf_varargs_10023fa4__4_(acStack_264,0x100,&DAT_10022ca6,(uint)pbVar14);
  puVar16 = (undefined4 *)(param_2 + 0x544b8);
  uVar6 = *puVar16;
  uVar1 = *(undefined1 *)(param_2 + 0x308);
  piVar17 = (int *)(param_2 + 0x304);
  iVar5 = *piVar17;
  recovered_10005e9c(param_1);
  uVar7 = (uint)*param_3;
  if (*(char *)(param_1 + 0x205da4) == '\x01') {
    if (uVar7 == 0) goto LAB_1000adbc;
    uVar10 = uVar7;
    if (uVar7 - 0x41 < 0x1a) {
      uVar10 = uVar7 | 0x20;
    }
    if (uVar10 != 0x68) goto LAB_1000a848;
    uVar10 = (uint)param_3[1];
    if (uVar10 != 0) {
      if (uVar10 - 0x41 < 0x1a) {
        uVar10 = uVar10 | 0x20;
      }
      if ((uVar10 != 0x74) || (uVar10 = (uint)param_3[2], uVar10 == 0)) goto code_r0x1000aa34;
      if (uVar10 - 0x41 < 0x1a) {
        uVar10 = uVar10 | 0x20;
      }
      if ((uVar10 != 0x74) || (uVar10 = (uint)param_3[3], uVar10 == 0)) goto code_r0x1000aa34;
      if (uVar10 - 0x41 < 0x1a) {
        uVar10 = uVar10 | 0x20;
      }
      if ((uVar10 != 0x70) || (uVar10 = (uint)param_3[4], uVar10 == 0)) goto code_r0x1000aa34;
      if (uVar10 - 0x41 < 0x1a) {
        uVar10 = uVar10 | 0x20;
      }
      if ((uVar10 != 0x3a) || (uVar10 = (uint)param_3[5], uVar10 == 0)) goto code_r0x1000aa34;
      if (uVar10 - 0x41 < 0x1a) {
        uVar10 = uVar10 | 0x20;
      }
      if ((uVar10 != 0x2f) || (uVar10 = (uint)param_3[6], uVar10 == 0)) goto code_r0x1000aa34;
      if (uVar10 - 0x41 < 0x1a) {
        uVar10 = uVar10 | 0x20;
      }
      if (uVar10 != 0x2f) goto code_r0x1000aa34;
LAB_1000a7ec:
      pcVar13 = str_1002369e;
LAB_1000a820:
      pf_varargs_10023fa4__4_((char *)(param_2 + 0x141),0xc0,&DAT_10022ca6,(uint)pcVar13);
      *(undefined1 *)(param_1 + 0x57da) = 1;
      return;
    }
code_r0x1000aa34:
    uVar10 = (uint)param_3[1];
    if (uVar10 != 0) {
      if (uVar10 - 0x41 < 0x1a) {
        uVar10 = uVar10 | 0x20;
      }
      if ((uVar10 == 0x74) && (uVar10 = (uint)param_3[2], uVar10 != 0)) {
        if (uVar10 - 0x41 < 0x1a) {
          uVar10 = uVar10 | 0x20;
        }
        if ((uVar10 == 0x74) && (uVar10 = (uint)param_3[3], uVar10 != 0)) {
          if (uVar10 - 0x41 < 0x1a) {
            uVar10 = uVar10 | 0x20;
          }
          if ((uVar10 == 0x70) && (uVar10 = (uint)param_3[4], uVar10 != 0)) {
            if (uVar10 - 0x41 < 0x1a) {
              uVar10 = uVar10 | 0x20;
            }
            if ((uVar10 == 0x73) && (uVar10 = (uint)param_3[5], uVar10 != 0)) {
              if (uVar10 - 0x41 < 0x1a) {
                uVar10 = uVar10 | 0x20;
              }
              if ((uVar10 == 0x3a) && (uVar10 = (uint)param_3[6], uVar10 != 0)) {
                if (uVar10 - 0x41 < 0x1a) {
                  uVar10 = uVar10 | 0x20;
                }
                if ((uVar10 == 0x2f) && (uVar10 = (uint)param_3[7], uVar10 != 0)) {
                  if (uVar10 - 0x41 < 0x1a) {
                    uVar10 = uVar10 | 0x20;
                  }
                  if (uVar10 == 0x2f) goto LAB_1000a7ec;
                }
              }
            }
          }
        }
      }
    }
LAB_1000a848:
    if (uVar7 - 0x41 < 0x1a) {
      uVar7 = uVar7 | 0x20;
    }
    if (uVar7 == 0x68) {
      uVar7 = (uint)param_3[1];
      if (uVar7 == 0) {
code_r0x1000a948:
        uVar7 = (uint)param_3[1];
        if (uVar7 != 0) {
          if (uVar7 - 0x41 < 0x1a) {
            uVar7 = uVar7 | 0x20;
          }
          if ((uVar7 == 0x74) && (uVar7 = (uint)param_3[2], uVar7 != 0)) {
            if (uVar7 - 0x41 < 0x1a) {
              uVar7 = uVar7 | 0x20;
            }
            if ((uVar7 == 0x74) && (uVar7 = (uint)param_3[3], uVar7 != 0)) {
              if (uVar7 - 0x41 < 0x1a) {
                uVar7 = uVar7 | 0x20;
              }
              if ((uVar7 == 0x70) && (uVar7 = (uint)param_3[4], uVar7 != 0)) {
                if (uVar7 - 0x41 < 0x1a) {
                  uVar7 = uVar7 | 0x20;
                }
                if ((uVar7 == 0x73) && (uVar7 = (uint)param_3[5], uVar7 != 0)) {
                  if (uVar7 - 0x41 < 0x1a) {
                    uVar7 = uVar7 | 0x20;
                  }
                  if ((uVar7 == 0x3a) && (uVar7 = (uint)param_3[6], uVar7 != 0)) {
                    if (uVar7 - 0x41 < 0x1a) {
                      uVar7 = uVar7 | 0x20;
                    }
                    if ((uVar7 == 0x2f) && (uVar7 = (uint)param_3[7], uVar7 != 0)) {
                      if (uVar7 - 0x41 < 0x1a) {
                        uVar7 = uVar7 | 0x20;
                      }
                      if (uVar7 == 0x2f) goto LAB_1000a91c;
                    }
                  }
                }
              }
            }
          }
        }
      }
      else {
        if (uVar7 - 0x41 < 0x1a) {
          uVar7 = uVar7 | 0x20;
        }
        if ((uVar7 != 0x74) || (uVar7 = (uint)param_3[2], uVar7 == 0)) goto code_r0x1000a948;
        if (uVar7 - 0x41 < 0x1a) {
          uVar7 = uVar7 | 0x20;
        }
        if ((uVar7 != 0x74) || (uVar7 = (uint)param_3[3], uVar7 == 0)) goto code_r0x1000a948;
        if (uVar7 - 0x41 < 0x1a) {
          uVar7 = uVar7 | 0x20;
        }
        if ((uVar7 != 0x70) || (uVar7 = (uint)param_3[4], uVar7 == 0)) goto code_r0x1000a948;
        if (uVar7 - 0x41 < 0x1a) {
          uVar7 = uVar7 | 0x20;
        }
        if ((uVar7 != 0x3a) || (uVar7 = (uint)param_3[5], uVar7 == 0)) goto code_r0x1000a948;
        if (uVar7 - 0x41 < 0x1a) {
          uVar7 = uVar7 | 0x20;
        }
        if ((uVar7 != 0x2f) || (uVar7 = (uint)param_3[6], uVar7 == 0)) goto code_r0x1000a948;
        if (uVar7 - 0x41 < 0x1a) {
          uVar7 = uVar7 | 0x20;
        }
        if (uVar7 != 0x2f) goto code_r0x1000a948;
LAB_1000a91c:
        pbVar18 = &DAT_1002382b;
        uVar8 = strlen(&DAT_1002382b);
        if (uVar8 != 0) {
          for (uVar7 = 0; (bVar2 = param_3[uVar7], bVar2 != 0 && (bVar2 != 0x23 && bVar2 != 0x3f));
              uVar7 = uVar7 + 1) {
          }
          if (uVar8 <= uVar7) {
            do {
              uVar10 = (uint)param_3[uVar7 - uVar8];
              uVar15 = (uint)*pbVar18;
              if (uVar10 - 0x41 < 0x1a) {
                uVar10 = uVar10 | 0x20;
              }
              if (uVar15 - 0x41 < 0x1a) {
                uVar15 = uVar15 | 0x20;
              }
              if (uVar10 != uVar15) goto LAB_1000ab3c;
              uVar8 = uVar8 - 1;
              pbVar18 = pbVar18 + 1;
            } while (uVar8 != 0);
            goto LAB_1000adbc;
          }
        }
LAB_1000ab3c:
        pbVar18 = &DAT_10023831;
        uVar8 = strlen(&DAT_10023831);
        if (uVar8 != 0) {
          for (uVar7 = 0; (bVar2 = param_3[uVar7], bVar2 != 0 && (bVar2 != 0x23 && bVar2 != 0x3f));
              uVar7 = uVar7 + 1) {
          }
          if (uVar8 <= uVar7) {
            do {
              uVar10 = (uint)param_3[uVar7 - uVar8];
              uVar15 = (uint)*pbVar18;
              if (uVar10 - 0x41 < 0x1a) {
                uVar10 = uVar10 | 0x20;
              }
              if (uVar15 - 0x41 < 0x1a) {
                uVar15 = uVar15 | 0x20;
              }
              if (uVar10 != uVar15) goto LAB_1000ab84;
              uVar8 = uVar8 - 1;
              pbVar18 = pbVar18 + 1;
            } while (uVar8 != 0);
            goto LAB_1000adbc;
          }
        }
LAB_1000ab84:
        pbVar18 = &DAT_10023836;
        uVar8 = strlen(&DAT_10023836);
        if (uVar8 != 0) {
          for (uVar7 = 0; (bVar2 = param_3[uVar7], bVar2 != 0 && (bVar2 != 0x23 && bVar2 != 0x3f));
              uVar7 = uVar7 + 1) {
          }
          if (uVar8 <= uVar7) {
            do {
              uVar10 = (uint)param_3[uVar7 - uVar8];
              uVar15 = (uint)*pbVar18;
              if (uVar10 - 0x41 < 0x1a) {
                uVar10 = uVar10 | 0x20;
              }
              if (uVar15 - 0x41 < 0x1a) {
                uVar15 = uVar15 | 0x20;
              }
              if (uVar10 != uVar15) goto LAB_1000abcc;
              uVar8 = uVar8 - 1;
              pbVar18 = pbVar18 + 1;
            } while (uVar8 != 0);
            goto LAB_1000adbc;
          }
        }
LAB_1000abcc:
        for (uVar7 = 0; (bVar2 = param_3[uVar7], bVar2 != 0 && (bVar2 != 0x23 && bVar2 != 0x3f));
            uVar7 = uVar7 + 1) {
        }
        if (3 < uVar7) {
          uVar10 = (uint)param_3[uVar7 - 4];
          if (uVar10 - 0x41 < 0x1a) {
            uVar10 = uVar10 | 0x20;
          }
          if (uVar10 == 0x2e) {
            uVar10 = (uint)param_3[uVar7 - 3];
            if (uVar10 - 0x41 < 0x1a) {
              uVar10 = uVar10 | 0x20;
            }
            if (uVar10 == 0x70) {
              uVar10 = (uint)param_3[uVar7 - 2];
              if (uVar10 - 0x41 < 0x1a) {
                uVar10 = uVar10 | 0x20;
              }
              if (uVar10 == 0x6e) {
                uVar7 = (uint)param_3[uVar7 - 1];
                if (uVar7 - 0x41 < 0x1a) {
                  uVar7 = uVar7 | 0x20;
                }
                if (uVar7 == 0x67) goto LAB_1000adbc;
              }
            }
          }
        }
        iVar19 = 0;
        do {
          pbVar18 = (byte *)(&DAT_10024088)[iVar19];
          uVar8 = strlen((char *)pbVar18);
          if (uVar8 != 0) {
            for (uVar7 = 0; (bVar2 = param_3[uVar7], bVar2 != 0 && (bVar2 != 0x23 && bVar2 != 0x3f))
                ; uVar7 = uVar7 + 1) {
            }
            if (uVar8 <= uVar7) {
              while( true ) {
                uVar10 = (uint)param_3[uVar7 - uVar8];
                uVar15 = (uint)*pbVar18;
                if (uVar10 - 0x41 < 0x1a) {
                  uVar10 = uVar10 | 0x20;
                }
                if (uVar15 - 0x41 < 0x1a) {
                  uVar15 = uVar15 | 0x20;
                }
                if (uVar10 != uVar15) break;
                uVar8 = uVar8 - 1;
                pbVar18 = pbVar18 + 1;
                if (uVar8 == 0) {
                  recovered_1001ae3c(param_1,param_2,param_3,(byte *)0x0);
                  return;
                }
              }
            }
          }
          iVar19 = iVar19 + 1;
        } while (iVar19 != 0x22);
      }
    }
  }
  else if (uVar7 != 0) goto LAB_1000a848;
LAB_1000adbc:
  dst = (char *)(param_2 + 0x141);
  *dst = '\0';
  *(undefined1 *)(param_2 + 0x101) = 0;
  *puVar16 = 0;
  *(undefined1 *)(param_2 + 0x201) = 0;
  *(undefined1 *)(param_2 + 0x308) = 0;
  iVar9 = -1;
  iVar19 = Ram40010800;
  if ((iVar19 == 0x50414d57) && (iVar19 = Ram40010804, iVar19 != 0)) {
    uVar7 = Ram40010808;
    bVar20 = 0xb < uVar7;
    if (bVar20) {
      uVar7 = Ram40010808;
    }
    if ((bVar20 && 0xbf < uVar7) && (pcVar3 = (code *)UINT_400108bc, pcVar3 != (code *)0x0)) {
      iVar9 = (*pcVar3)();
    }
  }
  *piVar17 = iVar9;
  pf_varargs_10023fa4__4_(pcVar13,0x100,&DAT_10022ca6,(uint)param_3);
  uVar7 = (uint)*param_3;
  if (uVar7 == 0) {
LAB_1000b030:
    bVar20 = recovered_1000d880((char *)param_3,piVar17,pbVar14);
    if (bVar20) {
      *(undefined1 *)(param_2 + 0x308) = 1;
    }
    else {
      if (((((*param_3 != 0x2f) &&
            (pcVar12 = strchr((char *)param_3,0x2f), pcVar12 == (char *)0x0)) &&
           (bVar20 = recovered_1001bb60((char *)param_3,&DAT_1002382b), !bVar20)) &&
          ((bVar20 = recovered_1001bb60((char *)param_3,&DAT_10023831), !bVar20 &&
           (bVar20 = recovered_1001bb60((char *)param_3,&DAT_10023836), !bVar20)))) &&
         (bVar20 = recovered_1001b940((int)param_3), !bVar20)) {
        recovered_1001b758(param_1,param_2,str_1002383b,str_1002384f);
        pcVar13 = str_1002387d;
LAB_1000b254:
        pcVar12 = &DAT_10022ca6;
        goto LAB_1000b258;
      }
      pbVar18 = param_3 + 1;
      if (*param_3 != 0x2f) {
        pbVar18 = param_3;
      }
      pf_varargs_10023fa4__4_((char *)abStack_448,0x100,&DAT_10022ca6,(uint)pbVar18);
      recovered_1000d9c0(abStack_448);
      iVar5 = recovered_1000667c();
      *(int *)(param_2 + 0x304) = iVar5;
      *(undefined1 *)(param_2 + 0x308) = 1;
      pf_varargs_10023fa4__4_((char *)pbVar14,0x100,&DAT_10022ca6,(uint)abStack_448);
    }
    bVar20 = recovered_1001b940((int)pbVar14);
    uVar7 = *(uint *)(param_2 + 0x304);
    if (bVar20) {
      pf_varargs_10023fa4__4__4_(pcVar13,0x100,str_10022d82,uVar7,(uint)pbVar14);
      recovered_1001b300(param_1,param_2,(char *)pbVar14);
    }
    else {
      iVar5 = recovered_1001b9ec(param_2,uVar7,pbVar14,uVar7);
      if (iVar5 == 0) {
        recovered_1001b758(param_1,param_2,str_100237f8,str_10023807);
      }
      else {
        pf_varargs_10023fa4__4__4_
                  (pcVar13,0x100,str_10022d82,*(uint *)(param_2 + 0x304),(uint)pbVar14);
        recovered_100066d0(param_1,param_2);
        recovered_10007eb4(param_1,(int *)param_2);
        recovered_1001b800(param_1,param_2);
      }
    }
  }
  else {
    uVar10 = uVar7;
    if (uVar7 - 0x41 < 0x1a) {
      uVar10 = uVar7 | 0x20;
    }
    if (uVar10 != 0x68) goto LAB_1000b030;
    uVar10 = (uint)param_3[1];
    if (uVar10 == 0) {
code_r0x1000af50:
      uVar10 = (uint)param_3[1];
      if (uVar10 != 0) {
        if (uVar10 - 0x41 < 0x1a) {
          uVar10 = uVar10 | 0x20;
        }
        if ((uVar10 == 0x74) && (uVar10 = (uint)param_3[2], uVar10 != 0)) {
          if (uVar10 - 0x41 < 0x1a) {
            uVar10 = uVar10 | 0x20;
          }
          if ((uVar10 == 0x74) && (uVar10 = (uint)param_3[3], uVar10 != 0)) {
            if (uVar10 - 0x41 < 0x1a) {
              uVar10 = uVar10 | 0x20;
            }
            if ((uVar10 == 0x70) && (uVar10 = (uint)param_3[4], uVar10 != 0)) {
              if (uVar10 - 0x41 < 0x1a) {
                uVar10 = uVar10 | 0x20;
              }
              if ((uVar10 == 0x73) && (uVar10 = (uint)param_3[5], uVar10 != 0)) {
                if (uVar10 - 0x41 < 0x1a) {
                  uVar10 = uVar10 | 0x20;
                }
                if ((uVar10 == 0x3a) && (uVar10 = (uint)param_3[6], uVar10 != 0)) {
                  if (uVar10 - 0x41 < 0x1a) {
                    uVar10 = uVar10 | 0x20;
                  }
                  if ((uVar10 == 0x2f) && (uVar10 = (uint)param_3[7], uVar10 != 0)) {
                    if (uVar10 - 0x41 < 0x1a) {
                      uVar10 = uVar10 | 0x20;
                    }
                    if (uVar10 == 0x2f) goto LAB_1000af3c;
                  }
                }
              }
            }
          }
        }
      }
      goto LAB_1000b030;
    }
    if (uVar10 - 0x41 < 0x1a) {
      uVar10 = uVar10 | 0x20;
    }
    if ((uVar10 != 0x74) || (uVar10 = (uint)param_3[2], uVar10 == 0)) goto code_r0x1000af50;
    if (uVar10 - 0x41 < 0x1a) {
      uVar10 = uVar10 | 0x20;
    }
    if ((uVar10 != 0x74) || (uVar10 = (uint)param_3[3], uVar10 == 0)) goto code_r0x1000af50;
    if (uVar10 - 0x41 < 0x1a) {
      uVar10 = uVar10 | 0x20;
    }
    if ((uVar10 != 0x70) || (uVar10 = (uint)param_3[4], uVar10 == 0)) goto code_r0x1000af50;
    if (uVar10 - 0x41 < 0x1a) {
      uVar10 = uVar10 | 0x20;
    }
    if ((uVar10 != 0x3a) || (uVar10 = (uint)param_3[5], uVar10 == 0)) goto code_r0x1000af50;
    if (uVar10 - 0x41 < 0x1a) {
      uVar10 = uVar10 | 0x20;
    }
    if ((uVar10 != 0x2f) || (uVar10 = (uint)param_3[6], uVar10 == 0)) goto code_r0x1000af50;
    if (uVar10 - 0x41 < 0x1a) {
      uVar10 = uVar10 | 0x20;
    }
    if (uVar10 != 0x2f) goto code_r0x1000af50;
LAB_1000af3c:
    local_348 = 0;
    uVar10 = 0;
    while ((uVar7 != 0 && (uVar7 != 0x23 && uVar7 != 0x3f))) {
      uVar7 = (uint)param_3[uVar10 + 1];
      uVar10 = uVar10 + 1;
    }
    if (uVar10 < 4) {
LAB_1000b3a4:
      local_344 = 0;
      local_2e4[0] = 0;
      iVar19 = Ram40010800;
      if ((iVar19 == 0x50414d57) && (iVar19 = Ram40010804, iVar19 != 0)) {
        uVar7 = Ram40010808;
        bVar20 = 0xb < uVar7;
        if (bVar20) {
          uVar7 = Ram40010808;
        }
        if (((bVar20 && 0x4f < uVar7) && (pcVar3 = (code *)UINT_4001084c, pcVar3 != (code *)0x0)) &&
           (ptr = (*pcVar3)(0x50000), ptr != (undefined1 *)0x0)) {
          pbVar18 = &local_344;
          iVar19 = recovered_1000dacc(param_1,param_3,ptr,0x50000,&local_348,pbVar18,
                                      (char *)local_2e4,0x80);
          bVar2 = local_2e4[0];
          if (iVar19 == 0) {
            iVar5 = recovered_1000645c(param_2);
            if (iVar5 != 0) {
              pbVar14 = (byte *)str_100237cb;
              if (bVar2 != 0) {
                pbVar14 = local_2e4;
              }
              pf_varargs_10023fa4__4__4__4_
                        (*(char **)(param_2 + 0x30c),0x50000,str_10023bc6,((uintptr_t)pf_module_state + 0xc99U),((uintptr_t)pf_module_state + 0xc99U),
                         (uint)pbVar14);
              recovered_100066d0(param_1,param_2);
              recovered_10007eb4(param_1,(int *)param_2);
            }
            pcVar12 = (char *)local_2e4;
            pcVar13 = &DAT_10022ca6;
            if (local_2e4[0] == 0) {
              pcVar12 = str_100237e4;
            }
LAB_1000b6b0:
            pf_varargs_10023fa4__4_(dst,0xc0,pcVar13,(uint)pcVar12);
          }
          else {
            uVar8 = strlen(str_10023723);
            bVar4 = local_344;
            bVar2 = local_344;
            if (uVar8 != 0) {
              while (bVar2 != 0) {
                uVar11 = 0;
                while (uVar7 = (uint)pbVar18[uVar11], uVar7 != 0) {
                  uVar10 = (uint)(byte)str_10023723[uVar11];
                  if (uVar10 - 0x41 < 0x1a) {
                    uVar10 = uVar10 | 0x20;
                  }
                  if (uVar7 - 0x41 < 0x1a) {
                    uVar7 = uVar7 | 0x20;
                  }
                  if (uVar7 != uVar10) break;
                  uVar11 = uVar11 + 1;
                  if (uVar8 == uVar11) goto LAB_1000b55c;
                }
                if (uVar8 == uVar11) goto LAB_1000b55c;
                pbVar18 = pbVar18 + 1;
                bVar2 = *pbVar18;
              }
            }
            bVar20 = recovered_1001ad90((int)param_3);
            if (bVar20) {
LAB_1000b55c:
              recovered_10011fb0(str_1002372d);
              uVar7 = *(uint *)(param_1 + 0x205bc4) + 1;
              *(uint *)(param_1 + 0x205bc4) = uVar7;
              pf_varargs_10023fa4__4_((char *)abStack_448,0x60,str_10023736,uVar7);
              uVar7 = recovered_10012000((char *)abStack_448,ptr,local_348);
              if (uVar7 != 0) {
                iVar5 = recovered_1000667c();
                pcVar12 = (char *)abStack_448;
                *(undefined1 *)(param_2 + 0x308) = 1;
                *(int *)(param_2 + 0x304) = iVar5;
                pf_varargs_10023fa4__4_((char *)pbVar14,0x100,&DAT_10022ca6,(uint)pcVar12);
                recovered_1001b300(param_1,param_2,(char *)pbVar14);
                pcVar13 = str_100236bc;
                goto LAB_1000b6b0;
              }
              recovered_1001b758(param_1,param_2,str_10023754,str_10023760);
            }
            else {
              if (((bVar4 != 0) &&
                  (pcVar12 = recovered_1000c6fc((char *)&local_344,str_1002379d),
                  pcVar12 == (char *)0x0)) &&
                 (pcVar12 = recovered_1000c6fc((char *)&local_344,str_100237a7),
                 pcVar12 == (char *)0x0)) {
                pf_varargs_10023fa4__4_(pcVar13,0x100,&DAT_10022ca6,(uint)acStack_124);
                pf_varargs_10023fa4__4_
                          ((char *)(param_2 + 0x101),0x40,&DAT_10022ca6,(uint)acStack_164);
                pf_varargs_10023fa4__4_((char *)pbVar14,0x100,&DAT_10022ca6,(uint)acStack_264);
                *(undefined1 *)(param_2 + 0x308) = uVar1;
                *(int *)(param_2 + 0x304) = iVar5;
                *puVar16 = uVar6;
                recovered_1001ae3c(param_1,param_2,param_3,&local_344);
                recovered_10005e4c(ptr);
                return;
              }
              if (*(char **)(param_2 + 0x30c) != (char *)0x0) {
                pf_varargs_10023fa4__4_(*(char **)(param_2 + 0x30c),0x50000,&DAT_10022ca6,(uint)ptr)
                ;
              }
              pcVar13 = (char *)&local_344;
              if (local_344 == 0) {
                pcVar13 = str_100237c2;
              }
              pf_varargs_10023fa4__4_(dst,0xc0,str_100237b2,(uint)pcVar13);
              recovered_100066d0(param_1,param_2);
              recovered_10007eb4(param_1,(int *)param_2);
              recovered_1001b800(param_1,param_2);
            }
          }
          iVar5 = Ram40010800;
          if (((iVar5 == 0x50414d57) && (iVar5 = Ram40010804, iVar5 != 0)) &&
             ((uVar7 = Ram40010808, 0xb < uVar7 &&
              ((uVar7 = Ram40010808, 0x53 < uVar7 &&
               (pcVar3 = (code *)UINT_40010850, pcVar3 != (code *)0x0)))))) {
            (*pcVar3)(ptr);
          }
          goto LAB_1000b200;
        }
      }
      iVar5 = recovered_1000645c(param_2);
      if (iVar5 != 0) {
        pf_varargs_10023fa4__4__4__4_
                  (*(char **)(param_2 + 0x30c),0x50000,str_10023bc6,((uintptr_t)pf_module_state + 0xc99U),((uintptr_t)pf_module_state + 0xc99U),((uintptr_t)pf_module_state + 0xca7U)
                  );
        recovered_100066d0(param_1,param_2);
        recovered_10007eb4(param_1,(int *)param_2);
      }
      pcVar13 = str_10022dba;
      goto LAB_1000b254;
    }
    uVar7 = (uint)param_3[uVar10 - 4];
    if (uVar7 - 0x41 < 0x1a) {
      uVar7 = uVar7 | 0x20;
    }
    if (uVar7 != 0x2e) goto LAB_1000b3a4;
    uVar7 = (uint)param_3[uVar10 - 3];
    if (uVar7 - 0x41 < 0x1a) {
      uVar7 = uVar7 | 0x20;
    }
    if (uVar7 != 0x70) goto LAB_1000b3a4;
    uVar7 = (uint)param_3[uVar10 - 2];
    if (uVar7 - 0x41 < 0x1a) {
      uVar7 = uVar7 | 0x20;
    }
    if (uVar7 != 0x6e) goto LAB_1000b3a4;
    uVar7 = (uint)param_3[uVar10 - 1];
    if (uVar7 - 0x41 < 0x1a) {
      uVar7 = uVar7 | 0x20;
    }
    if (uVar7 != 0x67) goto LAB_1000b3a4;
    local_44c = 0;
    iVar19 = recovered_1001c6d0(param_1,param_3,(char *)abStack_448,(undefined *)0x0,
                                (undefined *)0x0,0);
    if ((iVar19 == 0) ||
       (bVar20 = recovered_1000d880((char *)abStack_448,&local_44c,abStack_54c), !bVar20))
    goto LAB_1000b3a4;
    *(undefined1 *)(param_2 + 0x308) = 1;
    *(int *)(param_2 + 0x304) = local_44c;
    pf_varargs_10023fa4__4_((char *)pbVar14,0x100,&DAT_10022ca6,(uint)abStack_54c);
    pf_varargs_10023fa4__4_(pcVar13,0x100,&DAT_10022ca6,(uint)param_3);
    recovered_1001b300(param_1,param_2,(char *)pbVar14);
    pcVar13 = (char *)abStack_54c;
    pcVar12 = str_100236bc;
LAB_1000b258:
    pf_varargs_10023fa4__4_(dst,0xc0,pcVar12,(uint)pcVar13);
  }
LAB_1000b200:
  recovered_1001b3f8(param_2);
  return;
}

#undef DAT_10022ca6
#undef DAT_1002382b
#undef DAT_10023831
#undef DAT_10023836
#undef DAT_10024088
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef Ram40010800
#undef Ram40010804
#undef Ram40010808
#undef UINT_4001084c
#undef UINT_40010850
#undef UINT_400108bc
#undef str_10022d82
#undef str_10022dba
#undef str_1002369e
#undef str_100236bc
#undef str_10023723
#undef str_1002372d
#undef str_10023736
#undef str_10023754
#undef str_10023760
#undef str_1002379d
#undef str_100237a7
#undef str_100237b2
#undef str_100237c2
#undef str_100237cb
#undef str_100237e4
#undef str_100237f8
#undef str_10023807
#undef str_1002383b
#undef str_1002384f
#undef str_1002387d
#undef str_10023bc6
#undef local_44c
#undef local_348
#undef local_344
#undef local_343
#undef local_2e4
#undef abStack_54c
#undef abStack_448
#undef acStack_264
#undef acStack_164
#undef acStack_124

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
 * Address: 0x1000b89c
 */

void recovered_1000b89c(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  code *pcVar3;
  void *ptr;
  bool bVar4;

  if (param_1 == 0) {
    return;
  }
  ptr = *(void **)(param_1 + 0x30c);
  if (((ptr != (void *)0x0) && (iVar2 = Ram40010800, iVar2 == 0x50414d57)) &&
     (iVar2 = Ram40010804, iVar2 != 0)) {
    uVar1 = Ram40010808;
    bVar4 = 0xb < uVar1;
    if (bVar4) {
      uVar1 = Ram40010808;
    }
    if ((bVar4 && 0x53 < uVar1) && (pcVar3 = (code *)UINT_40010850, pcVar3 != (code *)0x0)) {
      (*pcVar3)(ptr);
    }
  }
  if (((*(void **)(param_1 + 0x310) != (void *)0x0) && (iVar2 = Ram40010800, iVar2 == 0x50414d57))
     && (iVar2 = Ram40010804, iVar2 != 0)) {
    uVar1 = Ram40010808;
    bVar4 = 0xb < uVar1;
    if (bVar4) {
      uVar1 = Ram40010808;
    }
    if ((bVar4 && 0x53 < uVar1) && (pcVar3 = (code *)UINT_40010850, pcVar3 != (code *)0x0)) {
      (*pcVar3)(*(void **)(param_1 + 0x310));
    }
  }
  if (((*(void **)(param_1 + 0x314) != (void *)0x0) && (iVar2 = Ram40010800, iVar2 == 0x50414d57))
     && (iVar2 = Ram40010804, iVar2 != 0)) {
    uVar1 = Ram40010808;
    bVar4 = 0xb < uVar1;
    if (bVar4) {
      uVar1 = Ram40010808;
    }
    if ((bVar4 && 0x53 < uVar1) && (pcVar3 = (code *)UINT_40010850, pcVar3 != (code *)0x0)) {
      (*pcVar3)(*(void **)(param_1 + 0x314));
    }
  }
  if (((*(void **)(param_1 + 0x318) != (void *)0x0) && (iVar2 = Ram40010800, iVar2 == 0x50414d57))
     && (iVar2 = Ram40010804, iVar2 != 0)) {
    uVar1 = Ram40010808;
    bVar4 = 0xb < uVar1;
    if (bVar4) {
      uVar1 = Ram40010808;
    }
    if ((bVar4 && 0x53 < uVar1) && (pcVar3 = (code *)UINT_40010850, pcVar3 != (code *)0x0)) {
      (*pcVar3)(*(void **)(param_1 + 0x318));
    }
  }
  *(undefined4 *)(param_1 + 0x30c) = 0;
  *(undefined4 *)(param_1 + 0x310) = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 4);
  *(undefined4 *)(param_1 + 0x314) = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 8);
  *(undefined4 *)(param_1 + 0x318) = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 12);
  return;
}

#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef Ram40010800
#undef Ram40010804
#undef Ram40010808
#undef UINT_40010850

#undef DAT_10022ca6
#define DAT_10022ca6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x25eU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ba2c
 */

void recovered_1000ba2c(char *param_1,int param_2,int param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  if (((param_1 == (char *)0x0) || (uVar1 = strlen(param_1), param_3 == 0)) ||
     (param_2 - 1U <= uVar1)) {
    return;
  }
  pf_varargs_10023fa4__4_(param_1 + uVar1,param_2 - uVar1,&DAT_10022ca6,param_3);
  return;
}

#undef DAT_10022ca6

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ba88
 */

void recovered_1000ba88(byte *param_1,undefined1 *param_2,uint param_3,undefined1 *param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  byte *pbVar3;

  if (param_2 == (undefined1 *)0x0) {
    return;
  }
  *param_2 = 0;
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = 0;
  }
  if (param_1 == (byte *)0x0) {
    return;
  }
  do {
    switch((uintptr_t)(*param_1)) {
    case 9:
    case 10:
    case 0xc:
    case 0xd:
    case 0x20:
      param_1 = param_1 + 1;
      break;
    default:
      goto switchD_1000bac8_caseD_b;
    case 0x2f:
      param_1 = param_1 + 1;
      if (param_4 != (undefined1 *)0x0) {
        *param_4 = 1;
      }
      goto switchD_1000bac8_caseD_b;
    }
  } while( true );
switchD_1000bac8_caseD_b:
  do {
    pbVar3 = param_1 + 1;
    uVar2 = (uint)*param_1;
    if (0x17 < uVar2 - 9) break;
    param_1 = pbVar3;
  } while ((1 << (uVar2 - 9 & 0xff) & 0x80001bU) != 0);
  if (param_3 < 2) {
    param_3 = 1;
  }
  iVar1 = 0;
  while( true ) {
    if (uVar2 < 0x30) {
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch((uintptr_t)(uVar2)) {
      case 0:
      case 9:
      case 10:
      case 0xc:
      case 0xd:
      case 0x20:
      case 0x2f:
        goto switchD_1000bbd0_caseD_0;
      }
    }
    if (param_3 - 1 == iVar1) break;
    if (uVar2 - 0x41 < 0x1a) {
      uVar2 = uVar2 | 0x20;
    }
    param_2[iVar1] = (char)uVar2;
    uVar2 = (uint)pbVar3[iVar1];
    iVar1 = iVar1 + 1;
  }
  iVar1 = param_3 - 1;
switchD_1000bbd0_caseD_0:
  param_2[iVar1] = 0;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000bcd4
 */

bool recovered_1000bcd4(byte *param_1,byte *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  uint uVar2;
  uint uVar3;

  if (param_1 != (byte *)0x0 && param_2 != (byte *)0x0) {
    bVar1 = *param_1;
    while( true ) {
      uVar3 = (uint)bVar1;
      if (uVar3 == 0) {
        return *param_2 == 0;
      }
      param_1 = param_1 + 1;
      uVar2 = (uint)*param_2;
      if (uVar2 == 0) break;
      if (uVar2 - 0x41 < 0x1a) {
        uVar2 = uVar2 | 0x20;
      }
      if (uVar3 - 0x41 < 0x1a) {
        uVar3 = uVar3 | 0x20;
      }
      if (uVar3 != uVar2) {
        return false;
      }
      bVar1 = *param_1;
      param_2 = param_2 + 1;
    }
  }
  return false;
}


#undef DAT_10022ca6
#define DAT_10022ca6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x25eU)))
#define acStack_124 (*(char (*)[260])(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000bd50
 */

void recovered_1000bd50(char *param_1,char *param_2,char *param_3,uint param_4)

{
  unsigned char frame[352] __attribute__((aligned(16))) = {0};

  int iVar1;
  ulong uVar2;
  char cVar3;
  ulong uVar4;
  byte *pbVar5;
  uint uVar6;
  char *pcVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  byte *pbVar12;

  if (param_2 == (char *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = strlen(param_2);
  }
  if (param_3 == (char *)0x0) {
    return;
  }
  cVar3 = '\0';
  *param_3 = '\0';
  if (param_1 == (char *)0x0 || param_2 == (char *)0x0) {
    return;
  }
  if (uVar2 != 0) {
    cVar3 = *param_1;
  }
  if (uVar2 == 0 || cVar3 == '\0') {
    return;
  }
  pbVar12 = (byte *)(param_1 + uVar2 + 2);
  pcVar7 = param_1;
  while( true ) {
    uVar4 = 0;
    do {
      uVar11 = (uint)(byte)param_2[uVar4];
      uVar9 = (uint)(byte)pcVar7[uVar4];
      if (uVar11 - 0x41 < 0x1a) {
        uVar11 = uVar11 | 0x20;
      }
      if (uVar9 - 0x41 < 0x1a) {
        uVar9 = uVar9 | 0x20;
      }
      if (uVar9 != uVar11) goto switchD_1000be34_caseD_b;
      uVar4 = uVar4 + 1;
    } while (uVar2 != uVar4);
    if (pcVar7 == param_1) break;
    switch((uintptr_t)(pcVar7[-1])) {
    case '\t':
    case '\n':
    case '\f':
    case '\r':
    case ' ':
    case '/':
    case '<':
      goto switchD_1000be34_caseD_9;
    default:
switchD_1000be34_caseD_b:
      pcVar7 = pcVar7 + 1;
      pbVar12 = pbVar12 + 1;
      if (*pcVar7 == '\0') {
        return;
      }
    }
  }
switchD_1000be34_caseD_9:
  pbVar5 = pbVar12;
  do {
    switch((uintptr_t)(pbVar5[-2])) {
    case 9:
    case 10:
    case 0xc:
    case 0xd:
    case 0x20:
      pbVar5 = pbVar5 + 1;
      break;
    default:
      goto switchD_1000be34_caseD_b;
    case 0x3d:
      goto LAB_1000c010;
    }
  } while( true );
LAB_1000c010:
  uVar9 = (uint)pbVar5[-1];
  uVar11 = uVar9 - 9;
  if (0x1e < uVar11) goto LAB_1000c04c;
  if ((1 << (uVar11 & 0xff) & 0x80001bU) == 0) {
    if ((1 << (uVar11 & 0xff) & 0x42000000U) != 0) {
      uVar11 = (uint)*pbVar5;
      uVar6 = uVar9;
      goto LAB_1000c054;
    }
    goto LAB_1000c04c;
  }
  pbVar5 = pbVar5 + 1;
  goto LAB_1000c010;
LAB_1000c04c:
  pbVar5 = pbVar5 + -1;
  uVar6 = 0;
  uVar11 = uVar9;
LAB_1000c054:
  iVar8 = 0;
  if (((uVar11 == 0) || (param_4 < 2)) || (iVar8 = 0, uVar6 == (int)(char)uVar11)) {
LAB_1000c1bc:
    param_3[iVar8] = '\0';
    recovered_1000ce7c(param_3,acStack_124,0x100);
    pf_varargs_10023fa4__4_(param_3,param_4,&DAT_10022ca6,(uint)acStack_124);
    return;
  }
  iVar10 = 0;
  do {
    if (uVar6 == 0) {
      switch((uintptr_t)(uVar11)) {
      case 9:
      case 10:
      case 0xc:
      case 0xd:
      case 0x20:
      case 0x3e:
        iVar8 = iVar10;
        goto LAB_1000c1bc;
      }
    }
    param_3[iVar10] = (char)uVar11;
    iVar1 = iVar10 + 1;
    iVar8 = iVar10 + 1;
    uVar11 = (uint)pbVar5[iVar1];
    if (((uVar11 == 0) || (param_4 <= iVar10 + 2U)) ||
       (iVar10 = iVar8, uVar6 == (int)(char)pbVar5[iVar1])) goto LAB_1000c1bc;
  } while( true );
}

#undef DAT_10022ca6
#undef acStack_124

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c1fc
 */

undefined4 recovered_1000c1fc(byte *param_1,byte *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  uint uVar2;
  uint uVar3;

  if (param_1 != (byte *)0x0 && param_2 != (byte *)0x0) {
    bVar1 = *param_2;
    while( true ) {
      uVar3 = (uint)bVar1;
      if (uVar3 == 0) {
        return 1;
      }
      param_2 = param_2 + 1;
      uVar2 = (uint)*param_1;
      if (uVar2 == 0) break;
      if (uVar3 - 0x41 < 0x1a) {
        uVar3 = uVar3 | 0x20;
      }
      if (uVar2 - 0x41 < 0x1a) {
        uVar2 = uVar2 | 0x20;
      }
      if (uVar2 != uVar3) {
        return 0;
      }
      bVar1 = *param_2;
      param_1 = param_1 + 1;
    }
  }
  return 0;
}


#undef DAT_10022ca6
#define DAT_10022ca6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x25eU)))
#undef str_10022cc0
#define str_10022cc0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x278U)))
#undef str_10022cc8
#define str_10022cc8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x280U)))
#undef str_10022d82
#define str_10022d82 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x33aU)))
#define abStack_324 (*(byte (*)[256])(frame + 28))
#define abStack_120 (*(byte (*)[256])(frame + 544))
#define in_stack_fffffcd8 (*(byte * *)(frame + 24))
#define local_224 (*(byte * (*)[64])(frame + 284))
#define local_124 (*(byte * *)(frame + 540))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c270
 */

void recovered_1000c270(int param_1,byte *param_2,char *param_3)

{
  unsigned char frame[864] __attribute__((aligned(16))) = {0};

  int iVar1;
  char *pcVar2;
  uint uVar3;
  byte *pbVar4;
  uint unaff_r6;

  if (param_3 == (char *)0x0) {
    return;
  }
  *param_3 = '\0';
  if (param_2 != (byte *)0x0) {
    unaff_r6 = (uint)*param_2;
  }
  if (param_2 == (byte *)0x0 || unaff_r6 == 0) {
    return;
  }
  uVar3 = unaff_r6;
  if (unaff_r6 - 0x41 < 0x1a) {
    uVar3 = unaff_r6 | 0x20;
  }
  if (uVar3 == 0x68) {
    uVar3 = (uint)param_2[1];
    if (uVar3 != 0) {
      if (uVar3 - 0x41 < 0x1a) {
        uVar3 = uVar3 | 0x20;
      }
      if ((uVar3 == 0x74) && (uVar3 = (uint)param_2[2], uVar3 != 0)) {
        if (uVar3 - 0x41 < 0x1a) {
          uVar3 = uVar3 | 0x20;
        }
        if ((uVar3 == 0x74) && (uVar3 = (uint)param_2[3], uVar3 != 0)) {
          if (uVar3 - 0x41 < 0x1a) {
            uVar3 = uVar3 | 0x20;
          }
          if ((uVar3 == 0x70) && (uVar3 = (uint)param_2[4], uVar3 != 0)) {
            if (uVar3 - 0x41 < 0x1a) {
              uVar3 = uVar3 | 0x20;
            }
            if ((uVar3 == 0x3a) && (uVar3 = (uint)param_2[5], uVar3 != 0)) {
              if (uVar3 - 0x41 < 0x1a) {
                uVar3 = uVar3 | 0x20;
              }
              if ((uVar3 == 0x2f) && (uVar3 = (uint)param_2[6], uVar3 != 0)) {
                if (uVar3 - 0x41 < 0x1a) {
                  uVar3 = uVar3 | 0x20;
                }
                if (uVar3 == 0x2f) goto LAB_1000c474;
              }
            }
          }
        }
      }
    }
    uVar3 = (uint)param_2[1];
    if (uVar3 != 0) {
      if (uVar3 - 0x41 < 0x1a) {
        uVar3 = uVar3 | 0x20;
      }
      if ((uVar3 == 0x74) && (uVar3 = (uint)param_2[2], uVar3 != 0)) {
        if (uVar3 - 0x41 < 0x1a) {
          uVar3 = uVar3 | 0x20;
        }
        if ((uVar3 == 0x74) && (uVar3 = (uint)param_2[3], uVar3 != 0)) {
          if (uVar3 - 0x41 < 0x1a) {
            uVar3 = uVar3 | 0x20;
          }
          if ((uVar3 == 0x70) && (uVar3 = (uint)param_2[4], uVar3 != 0)) {
            if (uVar3 - 0x41 < 0x1a) {
              uVar3 = uVar3 | 0x20;
            }
            if ((uVar3 == 0x73) && (uVar3 = (uint)param_2[5], uVar3 != 0)) {
              if (uVar3 - 0x41 < 0x1a) {
                uVar3 = uVar3 | 0x20;
              }
              if ((uVar3 == 0x3a) && (uVar3 = (uint)param_2[6], uVar3 != 0)) {
                if (uVar3 - 0x41 < 0x1a) {
                  uVar3 = uVar3 | 0x20;
                }
                if ((uVar3 == 0x2f) && (uVar3 = (uint)param_2[7], uVar3 != 0)) {
                  if (uVar3 - 0x41 < 0x1a) {
                    uVar3 = uVar3 | 0x20;
                  }
                  if (uVar3 == 0x2f) goto LAB_1000c474;
                }
              }
            }
          }
        }
      }
    }
  }
  if (unaff_r6 == 0x23) {
    if (*(char *)(param_1 + 1) != '\0') {
      pf_varargs_10023fa4__4_(param_3,0x100,&DAT_10022ca6,(uint)(param_1 + 1));
      pcVar2 = strchr(param_3,0x23);
      if (pcVar2 != (char *)0x0) {
        *pcVar2 = '\0';
      }
      recovered_1000ba2c(param_3,0x100,(int)param_2);
      return;
    }
  }
  else if (unaff_r6 == 0x5b) {
LAB_1000c474:
    pf_varargs_10023fa4__4_(param_3,0x100,&DAT_10022ca6,(uint)param_2);
    return;
  }
  if (*(byte *)(param_1 + 0x554c8) == 0) {
    if (unaff_r6 == 0x2f) goto LAB_1000c564;
  }
  else {
    iVar1 = recovered_1000d094((byte *)(param_1 + 0x554c8),param_2,param_3);
    if (iVar1 != 0) {
      return;
    }
    if (*param_2 == 0x2f) {
LAB_1000c564:
      local_224[0] = (byte *)0x0;
      iVar1 = recovered_1000d60c(param_1,(int *)local_224,abStack_120);
      if (iVar1 != 0) {
        in_stack_fffffcd8 = param_2 + 1;
        pcVar2 = str_10022d82;
        param_2 = local_224[0];
        goto LAB_1000c6f0;
      }
    }
  }
  local_124 = (byte *)0x0;
  iVar1 = recovered_1000d60c(param_1,(int *)&local_124,abStack_120);
  if (iVar1 == 0) {
    pbVar4 = (byte *)(param_1 + 1);
    if ((*param_2 == 0x2f) &&
       (((iVar1 = recovered_1000c1fc(pbVar4,(byte *)str_10022cc0), iVar1 != 0 ||
         (iVar1 = recovered_1000c1fc(pbVar4,(byte *)str_10022cc8), iVar1 != 0)) &&
        (iVar1 = recovered_1000d094(pbVar4,param_2,param_3), iVar1 != 0)))) {
      return;
    }
    iVar1 = recovered_1000c1fc(pbVar4,(byte *)str_10022cc0);
    if (((iVar1 != 0) || (iVar1 = recovered_1000c1fc(pbVar4,(byte *)str_10022cc8), iVar1 != 0)) &&
       (iVar1 = recovered_1000d094(pbVar4,param_2,param_3), iVar1 != 0)) {
      return;
    }
    pcVar2 = &DAT_10022ca6;
  }
  else {
    recovered_1000d6c4((char *)abStack_120,(undefined1 *)local_224);
    in_stack_fffffcd8 = abStack_324;
    recovered_1000d770((byte *)local_224,param_2,(char *)in_stack_fffffcd8);
    pcVar2 = str_10022d82;
    param_2 = local_124;
  }
LAB_1000c6f0:
  pf_varargs_10023fa4__4__4_(param_3,0x100,pcVar2,(uint)param_2,(uint)in_stack_fffffcd8);
  return;
}

#undef DAT_10022ca6
#undef str_10022cc0
#undef str_10022cc8
#undef str_10022d82
#undef abStack_324
#undef abStack_120
#undef in_stack_fffffcd8
#undef local_224
#undef local_124

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c6fc
 */

char * recovered_1000c6fc(char *param_1,char *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;

  if ((param_2 != (char *)0x0) &&
     (uVar2 = strlen(param_2), param_1 != (char *)0x0 && uVar2 != 0)) {
    cVar1 = *param_1;
    while (cVar1 != '\0') {
      uVar3 = 0;
      while (uVar4 = (uint)(byte)param_1[uVar3], uVar4 != 0) {
        uVar5 = (uint)(byte)param_2[uVar3];
        if (uVar5 - 0x41 < 0x1a) {
          uVar5 = uVar5 | 0x20;
        }
        if (uVar4 - 0x41 < 0x1a) {
          uVar4 = uVar4 | 0x20;
        }
        if (uVar4 != uVar5) break;
        uVar3 = uVar3 + 1;
        if (uVar2 == uVar3) {
          return param_1;
        }
      }
      if (uVar2 == uVar3) {
        return param_1;
      }
      param_1 = param_1 + 1;
      cVar1 = *param_1;
    }
  }
  return (char *)0x0;
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
#undef str_10022d94
#define str_10022d94 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x34cU)))
#undef str_10022da7
#define str_10022da7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x35fU)))
#define abStack_220 (*(byte (*)[256])(frame + 32))
#define local_22c (*(void * *)(frame + 20))
#define local_228 (*(uint *)(frame + 24))
#define local_120 (*(int *)(frame + 288))
#define local_11c (*(byte *)(frame + 292))
#define local_11b (*(byte *)(frame + 293))
#define local_11a (*(byte *)(frame + 294))
#define local_119 (*(byte *)(frame + 295))
#define local_118 (*(byte *)(frame + 296))
#define local_117 (*(byte *)(frame + 297))
#define local_116 (*(byte *)(frame + 298))
#define local_115 (*(byte *)(frame + 299))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c7ac
 */

int recovered_1000c7ac(int param_1,int param_2,byte *param_3,undefined1 *param_4,uint param_5,
                      char *param_6)

{
  unsigned char frame[608] __attribute__((aligned(16))) = {0};

  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  void *extraout_r1;
  void *extraout_r1_00;
  void *src;
  ulong extraout_r1_01;
  ulong uVar5;
  uint unaff_r5;
  bool bVar6;

  local_120 = -1;
  if (param_4 == (undefined1 *)0x0) {
    return 0;
  }
  *param_4 = 0;
  if (param_3 != (byte *)0x0) {
    unaff_r5 = (uint)*param_3;
  }
  if (param_3 == (byte *)0x0 || unaff_r5 == 0) {
    return 0;
  }
  recovered_1000c270(param_2,param_3,(char *)&local_11c);
  uVar3 = (uint)local_11c;
  if (uVar3 != 0) {
    if (uVar3 - 0x41 < 0x1a) {
      uVar3 = uVar3 | 0x20;
    }
    if (uVar3 == 0x68) {
      uVar3 = (uint)local_11b;
      if (uVar3 != 0) {
        if (uVar3 - 0x41 < 0x1a) {
          uVar3 = uVar3 | 0x20;
        }
        if ((uVar3 == 0x74) && (uVar3 = (uint)local_11a, uVar3 != 0)) {
          if (uVar3 - 0x41 < 0x1a) {
            uVar3 = uVar3 | 0x20;
          }
          if ((uVar3 == 0x74) && (uVar3 = (uint)local_119, uVar3 != 0)) {
            if (uVar3 - 0x41 < 0x1a) {
              uVar3 = uVar3 | 0x20;
            }
            if ((uVar3 == 0x70) && (uVar3 = (uint)local_118, uVar3 != 0)) {
              if (uVar3 - 0x41 < 0x1a) {
                uVar3 = uVar3 | 0x20;
              }
              if ((uVar3 == 0x3a) && (uVar3 = (uint)local_117, uVar3 != 0)) {
                if (uVar3 - 0x41 < 0x1a) {
                  uVar3 = uVar3 | 0x20;
                }
                if ((uVar3 == 0x2f) && (uVar3 = (uint)local_116, uVar3 != 0)) {
                  if (uVar3 - 0x41 < 0x1a) {
                    uVar3 = uVar3 | 0x20;
                  }
                  if (uVar3 == 0x2f) goto LAB_1000c8f4;
                }
              }
            }
          }
        }
      }
      uVar3 = (uint)local_11b;
      if (uVar3 != 0) {
        if (uVar3 - 0x41 < 0x1a) {
          uVar3 = uVar3 | 0x20;
        }
        if ((uVar3 == 0x74) && (uVar3 = (uint)local_11a, uVar3 != 0)) {
          if (uVar3 - 0x41 < 0x1a) {
            uVar3 = uVar3 | 0x20;
          }
          if ((uVar3 == 0x74) && (uVar3 = (uint)local_119, uVar3 != 0)) {
            if (uVar3 - 0x41 < 0x1a) {
              uVar3 = uVar3 | 0x20;
            }
            if ((uVar3 == 0x70) && (uVar3 = (uint)local_118, uVar3 != 0)) {
              if (uVar3 - 0x41 < 0x1a) {
                uVar3 = uVar3 | 0x20;
              }
              if ((uVar3 == 0x73) && (uVar3 = (uint)local_117, uVar3 != 0)) {
                if (uVar3 - 0x41 < 0x1a) {
                  uVar3 = uVar3 | 0x20;
                }
                if ((uVar3 == 0x3a) && (uVar3 = (uint)local_116, uVar3 != 0)) {
                  if (uVar3 - 0x41 < 0x1a) {
                    uVar3 = uVar3 | 0x20;
                  }
                  if ((uVar3 == 0x2f) && (uVar3 = (uint)local_115, uVar3 != 0)) {
                    if (uVar3 - 0x41 < 0x1a) {
                      uVar3 = uVar3 | 0x20;
                    }
                    if (uVar3 == 0x2f) {
LAB_1000c8f4:
                      iVar4 = recovered_1000dacc(param_1,&local_11c,param_4,param_5,
                                                 (ulong *)&local_22c,abStack_220,param_6,0x60);
                      return iVar4;
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
  bVar2 = recovered_1000d880((char *)&local_11c,&local_120,abStack_220);
  if (!bVar2) {
    return 0;
  }
  memset(&local_22c,0,0xc);
  iVar4 = Ram40010800;
  if ((iVar4 == 0x50414d57) && (iVar4 = Ram40010804, iVar4 != 0)) {
    uVar3 = Ram40010808;
    bVar6 = 0xb < uVar3;
    bVar2 = uVar3 == 0xc;
    if (bVar6) {
      uVar3 = Ram40010808;
      bVar2 = uVar3 == 0xcb;
    }
    if ((!bVar6 || uVar3 < 0xcb) || bVar2) goto LAB_1000ca7c;
    pcVar1 = (code *)UINT_400108c8;
    if (pcVar1 == (code *)0x0) goto LAB_1000caa8;
    uVar3 = (*pcVar1)(local_120,(char *)abStack_220,&local_22c);
    src = extraout_r1;
  }
  else {
LAB_1000ca7c:
    iVar4 = Ram40010800;
    if ((iVar4 != 0x50414d57) || (iVar4 = Ram40010804, iVar4 == 0)) goto LAB_1000caa8;
    uVar3 = Ram40010808;
    bVar2 = 0xb < uVar3;
    if (bVar2) {
      uVar3 = Ram40010808;
    }
    if ((!bVar2 || uVar3 < 0x38) || (pcVar1 = (code *)UINT_40010834, pcVar1 == (code *)0x0))
    goto LAB_1000caa8;
    uVar3 = (*pcVar1)((char *)abStack_220,&local_22c);
    src = extraout_r1_00;
  }
  if (uVar3 != 0) {
    src = local_22c;
  }
  if (uVar3 != 0 && src != (void *)0x0) {
    uVar3 = param_5 - 1;
    if (local_228 < param_5 - 1) {
      uVar3 = local_228;
    }
    memcpy(param_4,src,uVar3);
    uVar5 = extraout_r1_01;
    if (param_6 != (char *)0x0) {
      uVar5 = local_228;
    }
    param_4[uVar3] = 0;
    if (param_6 != (char *)0x0 && uVar3 != uVar5) {
      pf_varargs_10023fa4___(param_6,0x60,str_10022da7);
      return 1;
    }
    return 1;
  }
LAB_1000caa8:
  pf_varargs_10023fa4___(param_6,0x60,str_10022d94);
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
#undef str_10022d94
#undef str_10022da7
#undef abStack_220
#undef local_22c
#undef local_228
#undef local_120
#undef local_11c
#undef local_11b
#undef local_11a
#undef local_119
#undef local_118
#undef local_117
#undef local_116
#undef local_115

#undef str_100232ac
#define str_100232ac (*(char (*)[1])(((uintptr_t)pf_module_state + 0x864U)))
#undef str_100232bb
#define str_100232bb (*(char (*)[1])(((uintptr_t)pf_module_state + 0x873U)))
#undef str_100232cc
#define str_100232cc (*(char (*)[1])(((uintptr_t)pf_module_state + 0x884U)))
#undef str_100232d6
#define str_100232d6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x88eU)))
#undef str_100232e0
#define str_100232e0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x898U)))
#undef str_100232ec
#define str_100232ec (*(char (*)[1])(((uintptr_t)pf_module_state + 0x8a4U)))
#undef str_100232f6
#define str_100232f6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x8aeU)))
#undef str_10023309
#define str_10023309 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x8c1U)))
#undef str_10023315
#define str_10023315 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x8cdU)))
#undef str_10023322
#define str_10023322 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x8daU)))
#undef str_10023329
#define str_10023329 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x8e1U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000cb64
 */

bool recovered_1000cb64(byte *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  char *pcVar2;
  uint extraout_r1 = 0;
  uint uVar3;
  uint extraout_r1_00 = 0;
  uint extraout_r1_01 = 0;
  uint extraout_r1_02 = 0;
  byte *pbVar4;
  ulong uVar5;
  uint uVar6;

  if (param_1 == (byte *)0x0) {
    return false;
  }
  uVar1 = strlen(str_100232ac);
  uVar3 = extraout_r1;
  if (uVar1 != 0) {
    uVar3 = (uint)*param_1;
  }
  if (uVar1 != 0 && uVar3 != 0) {
    pbVar4 = param_1;
    do {
      uVar5 = 0;
      while (uVar3 = (uint)pbVar4[uVar5], uVar3 != 0) {
        uVar6 = (uint)(byte)str_100232ac[uVar5];
        if (uVar6 - 0x41 < 0x1a) {
          uVar6 = uVar6 | 0x20;
        }
        if (uVar3 - 0x41 < 0x1a) {
          uVar3 = uVar3 | 0x20;
        }
        if (uVar3 != uVar6) break;
        uVar5 = uVar5 + 1;
        if (uVar1 == uVar5) {
          return true;
        }
      }
      if (uVar1 == uVar5) {
        return true;
      }
      pbVar4 = pbVar4 + 1;
    } while (*pbVar4 != 0);
  }
  uVar1 = strlen(str_100232bb);
  uVar3 = extraout_r1_00;
  if (uVar1 != 0) {
    uVar3 = (uint)*param_1;
  }
  if (uVar1 != 0 && uVar3 != 0) {
    pbVar4 = param_1;
    do {
      uVar5 = 0;
      while (uVar3 = (uint)pbVar4[uVar5], uVar3 != 0) {
        uVar6 = (uint)(byte)str_100232bb[uVar5];
        if (uVar6 - 0x41 < 0x1a) {
          uVar6 = uVar6 | 0x20;
        }
        if (uVar3 - 0x41 < 0x1a) {
          uVar3 = uVar3 | 0x20;
        }
        if (uVar3 != uVar6) break;
        uVar5 = uVar5 + 1;
        if (uVar1 == uVar5) {
          return true;
        }
      }
      if (uVar1 == uVar5) {
        return true;
      }
      pbVar4 = pbVar4 + 1;
    } while (*pbVar4 != 0);
  }
  uVar1 = strlen(str_100232cc);
  uVar3 = extraout_r1_01;
  if (uVar1 != 0) {
    uVar3 = (uint)*param_1;
  }
  if (uVar1 != 0 && uVar3 != 0) {
    pbVar4 = param_1;
    do {
      uVar5 = 0;
      while (uVar3 = (uint)pbVar4[uVar5], uVar3 != 0) {
        uVar6 = (uint)(byte)str_100232cc[uVar5];
        if (uVar6 - 0x41 < 0x1a) {
          uVar6 = uVar6 | 0x20;
        }
        if (uVar3 - 0x41 < 0x1a) {
          uVar3 = uVar3 | 0x20;
        }
        if (uVar3 != uVar6) break;
        uVar5 = uVar5 + 1;
        if (uVar1 == uVar5) {
          return true;
        }
      }
      if (uVar1 == uVar5) {
        return true;
      }
      pbVar4 = pbVar4 + 1;
    } while (*pbVar4 != 0);
  }
  uVar1 = strlen(str_100232d6);
  uVar3 = extraout_r1_02;
  if (uVar1 != 0) {
    uVar3 = (uint)*param_1;
  }
  if (uVar1 != 0 && uVar3 != 0) {
    pbVar4 = param_1;
    do {
      uVar5 = 0;
      while (uVar3 = (uint)pbVar4[uVar5], uVar3 != 0) {
        uVar6 = (uint)(byte)str_100232d6[uVar5];
        if (uVar6 - 0x41 < 0x1a) {
          uVar6 = uVar6 | 0x20;
        }
        if (uVar3 - 0x41 < 0x1a) {
          uVar3 = uVar3 | 0x20;
        }
        if (uVar3 != uVar6) break;
        uVar5 = uVar5 + 1;
        if (uVar1 == uVar5) {
          return true;
        }
      }
      if (uVar1 == uVar5) {
        return true;
      }
      pbVar4 = pbVar4 + 1;
    } while (*pbVar4 != 0);
  }
  pcVar2 = recovered_1000c6fc((char *)param_1,str_100232e0);
  if (pcVar2 == (char *)0x0) {
    pcVar2 = recovered_1000c6fc((char *)param_1,str_100232ec);
    if ((((pcVar2 != (char *)0x0) ||
         (pcVar2 = recovered_1000c6fc((char *)param_1,str_100232f6), pcVar2 != (char *)0x0)) ||
        (pcVar2 = recovered_1000c6fc((char *)param_1,str_10023309), pcVar2 != (char *)0x0)) ||
       (pcVar2 = recovered_1000c6fc((char *)param_1,str_10023315), pcVar2 != (char *)0x0)) {
      return true;
    }
    pcVar2 = recovered_1000c6fc((char *)param_1,str_10023322);
    if (pcVar2 == (char *)0x0) {
      pcVar2 = recovered_1000c6fc((char *)param_1,str_10023329);
      return pcVar2 != (char *)0x0;
    }
  }
  return true;
}

#undef str_100232ac
#undef str_100232bb
#undef str_100232cc
#undef str_100232d6
#undef str_100232e0
#undef str_100232ec
#undef str_100232f6
#undef str_10023309
#undef str_10023315
#undef str_10023322
#undef str_10023329

#undef DAT_10022d59
#define DAT_10022d59 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x311U)))
#undef DAT_10022d5e
#define DAT_10022d5e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x316U)))
#undef str_10022d53
#define str_10022d53 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x30bU)))
#undef str_10022d63
#define str_10022d63 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x31bU)))
#undef str_10022d6a
#define str_10022d6a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x322U)))
#undef str_10022d70
#define str_10022d70 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x328U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ce7c
 */

void recovered_1000ce7c(char *param_1,char *param_2,int param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  int iVar2;
  char *pcVar3;
  undefined2 extraout_r1 = 0;
  undefined2 uVar4;
  undefined2 extraout_r1_00 = 0;
  undefined2 extraout_r1_01 = 0;
  undefined2 extraout_r1_02 = 0;
  char cVar5;
  int iVar6;
  char *pcVar7;
  bool bVar8;

  if (param_2 == (char *)0x0) {
    return;
  }
  cVar5 = '\0';
  *param_2 = '\0';
  if (param_1 != (char *)0x0) {
    cVar5 = *param_1;
  }
  if (param_1 != (char *)0x0 && cVar5 != '\0') {
    pcVar7 = (char *)(param_3 + -1);
    iVar6 = 0;
    pcVar3 = param_1;
    do {
      pcVar1 = (char *)strlen(param_2);
      if (pcVar7 <= pcVar1) {
        return;
      }
      cVar5 = *pcVar3;
      if (cVar5 == '&') {
        iVar2 = strncmp(pcVar3,str_10022d53,5);
        if (iVar2 == 0) {
          pcVar3 = (char *)strlen(param_2);
          bVar8 = pcVar7 <= pcVar3;
          iVar6 = iVar6 + 4;
          uVar4 = extraout_r1;
          if (!bVar8) {
            pcVar3 = param_2 + (int)pcVar3;
            uVar4 = 0x26;
          }
        }
        else {
          iVar2 = strncmp(pcVar3,&DAT_10022d59,4);
          if (iVar2 == 0) {
            pcVar3 = (char *)strlen(param_2);
            bVar8 = pcVar7 <= pcVar3;
            iVar6 = iVar6 + 3;
            uVar4 = extraout_r1_00;
            if (!bVar8) {
              pcVar3 = param_2 + (int)pcVar3;
              uVar4 = 0x3c;
            }
          }
          else {
            iVar2 = strncmp(pcVar3,&DAT_10022d5e,4);
            if (iVar2 != 0) {
              iVar2 = strncmp(pcVar3,str_10022d63,6);
              if (iVar2 == 0) {
                pcVar3 = (char *)strlen(param_2);
                if (pcVar3 < pcVar7) {
                  uVar4 = 0x22;
LAB_1000d088:
                  *(undefined2 *)(param_2 + (int)pcVar3) = uVar4;
                }
              }
              else {
                iVar2 = strncmp(pcVar3,str_10022d6a,5);
                if (iVar2 == 0) {
                  pcVar3 = (char *)strlen(param_2);
                  bVar8 = pcVar7 <= pcVar3;
                  iVar6 = iVar6 + 4;
                  uVar4 = extraout_r1_02;
                  if (!bVar8) {
                    pcVar3 = param_2 + (int)pcVar3;
                    uVar4 = 0x27;
                  }
                  goto LAB_1000cee4;
                }
                iVar2 = strncmp(pcVar3,str_10022d70,6);
                if (iVar2 != 0) {
                  cVar5 = *pcVar3;
                  goto LAB_1000cfdc;
                }
                pcVar3 = (char *)strlen(param_2);
                if (pcVar3 < pcVar7) {
                  uVar4 = 0x20;
                  goto LAB_1000d088;
                }
              }
              iVar6 = iVar6 + 5;
              goto LAB_1000cee8;
            }
            pcVar3 = (char *)strlen(param_2);
            bVar8 = pcVar7 <= pcVar3;
            iVar6 = iVar6 + 3;
            uVar4 = extraout_r1_01;
            if (!bVar8) {
              pcVar3 = param_2 + (int)pcVar3;
              uVar4 = 0x3e;
            }
          }
        }
LAB_1000cee4:
        if (!bVar8) {
          *(undefined2 *)pcVar3 = uVar4;
        }
      }
      else {
LAB_1000cfdc:
        pcVar3 = (char *)strlen(param_2);
        if (pcVar3 < pcVar7) {
          param_2[(int)pcVar3] = cVar5;
          (param_2 + (int)pcVar3)[1] = '\0';
        }
      }
LAB_1000cee8:
      iVar6 = iVar6 + 1;
      pcVar3 = param_1 + iVar6;
    } while (*pcVar3 != '\0');
  }
  return;
}

#undef DAT_10022d59
#undef DAT_10022d5e
#undef str_10022d53
#undef str_10022d63
#undef str_10022d6a
#undef str_10022d70

#undef DAT_10022ca6
#define DAT_10022ca6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x25eU)))
#undef DAT_10022d77
#define DAT_10022d77 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x32fU)))
#undef DAT_10022d7b
#define DAT_10022d7b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x333U)))
#define local_120 (*(byte (*)[256])(frame + 32))
#define in_stack_fffffedc (*(byte * *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d094
 */

undefined4 recovered_1000d094(byte *param_1,byte *param_2,char *param_3)

{
  unsigned char frame[352] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  uint uVar2;
  byte *pbVar3;
  byte *pbVar4;
  uint uVar5;
  ulong n;

  if (param_1 == (byte *)0x0) {
    return 0;
  }
  uVar5 = (uint)*param_1;
  if (uVar5 == 0) {
    return 0;
  }
  if (uVar5 - 0x41 < 0x1a) {
    uVar5 = uVar5 | 0x20;
  }
  if (uVar5 != 0x68) {
    return 0;
  }
  uVar5 = (uint)param_1[1];
  if (uVar5 == 0) {
code_r0x1000d3bc:
    uVar5 = (uint)param_1[1];
    if (uVar5 == 0) {
      return 0;
    }
    if (uVar5 - 0x41 < 0x1a) {
      uVar5 = uVar5 | 0x20;
    }
    if (uVar5 != 0x74) {
      return 0;
    }
    uVar5 = (uint)param_1[2];
    if (uVar5 == 0) {
      return 0;
    }
    if (uVar5 - 0x41 < 0x1a) {
      uVar5 = uVar5 | 0x20;
    }
    if (uVar5 != 0x74) {
      return 0;
    }
    uVar5 = (uint)param_1[3];
    if (uVar5 == 0) {
      return 0;
    }
    if (uVar5 - 0x41 < 0x1a) {
      uVar5 = uVar5 | 0x20;
    }
    if (uVar5 != 0x70) {
      return 0;
    }
    uVar5 = (uint)param_1[4];
    if (uVar5 == 0) {
      return 0;
    }
    if (uVar5 - 0x41 < 0x1a) {
      uVar5 = uVar5 | 0x20;
    }
    if (uVar5 != 0x73) {
      return 0;
    }
    uVar5 = (uint)param_1[5];
    if (uVar5 == 0) {
      return 0;
    }
    if (uVar5 - 0x41 < 0x1a) {
      uVar5 = uVar5 | 0x20;
    }
    if (uVar5 != 0x3a) {
      return 0;
    }
    uVar5 = (uint)param_1[6];
    if (uVar5 == 0) {
      return 0;
    }
    if (uVar5 - 0x41 < 0x1a) {
      uVar5 = uVar5 | 0x20;
    }
    if (uVar5 != 0x2f) {
      return 0;
    }
    uVar5 = (uint)param_1[7];
    if (uVar5 == 0) {
      return 0;
    }
    if (uVar5 - 0x41 < 0x1a) {
      uVar5 = uVar5 | 0x20;
    }
    if (uVar5 != 0x2f) {
      return 0;
    }
  }
  else {
    if (uVar5 - 0x41 < 0x1a) {
      uVar5 = uVar5 | 0x20;
    }
    if ((uVar5 != 0x74) || (uVar5 = (uint)param_1[2], uVar5 == 0)) goto code_r0x1000d3bc;
    if (uVar5 - 0x41 < 0x1a) {
      uVar5 = uVar5 | 0x20;
    }
    if ((uVar5 != 0x74) || (uVar5 = (uint)param_1[3], uVar5 == 0)) goto code_r0x1000d3bc;
    if (uVar5 - 0x41 < 0x1a) {
      uVar5 = uVar5 | 0x20;
    }
    if ((uVar5 != 0x70) || (uVar5 = (uint)param_1[4], uVar5 == 0)) goto code_r0x1000d3bc;
    if (uVar5 - 0x41 < 0x1a) {
      uVar5 = uVar5 | 0x20;
    }
    if ((uVar5 != 0x3a) || (uVar5 = (uint)param_1[5], uVar5 == 0)) goto code_r0x1000d3bc;
    if (uVar5 - 0x41 < 0x1a) {
      uVar5 = uVar5 | 0x20;
    }
    if ((uVar5 != 0x2f) || (uVar5 = (uint)param_1[6], uVar5 == 0)) goto code_r0x1000d3bc;
    if (uVar5 - 0x41 < 0x1a) {
      uVar5 = uVar5 | 0x20;
    }
    if (uVar5 != 0x2f) goto code_r0x1000d3bc;
  }
  uVar5 = (uint)*param_2;
  if (uVar5 == 0) {
LAB_1000d364:
    pcVar1 = strstr((char *)param_1,&DAT_10022d77);
    if (pcVar1 == (char *)0x0) {
      return 0;
    }
    in_stack_fffffedc = param_2;
    if (*param_2 != 0x2f) {
      pf_varargs_10023fa4__4_((char *)local_120,0x100,&DAT_10022ca6,(uint)param_1);
      pcVar1 = strchr((char *)local_120,0x23);
      pbVar4 = local_120;
      if (pcVar1 != (char *)0x0) {
        *pcVar1 = '\0';
      }
      pcVar1 = strchr((char *)pbVar4,0x3f);
      pbVar3 = (byte *)0x0;
      if (pcVar1 != (char *)0x0) {
        *pcVar1 = '\0';
      }
      do {
        if (*pbVar4 == 0x2f) {
          pbVar3 = pbVar4;
        }
        else if (*pbVar4 == 0) goto code_r0x1000d538;
        pbVar4 = pbVar4 + 1;
      } while( true );
    }
    pcVar1 = strchr(pcVar1 + 3,0x2f);
    if (pcVar1 == (char *)0x0) {
      n = strlen((char *)param_1);
    }
    else {
      n = (int)pcVar1 - (int)param_1;
    }
    if (0xfe < (int)n) {
      n = 0xff;
    }
    memcpy(local_120,param_1,n);
    local_120[n] = 0;
    pcVar1 = &DAT_10022d7b;
    pbVar4 = local_120;
  }
  else {
    uVar2 = uVar5;
    if (uVar5 - 0x41 < 0x1a) {
      uVar2 = uVar5 | 0x20;
    }
    if (uVar2 == 0x68) {
      uVar2 = (uint)param_2[1];
      if (uVar2 == 0) {
code_r0x1000d27c:
        uVar2 = (uint)param_2[1];
        if (uVar2 != 0) {
          if (uVar2 - 0x41 < 0x1a) {
            uVar2 = uVar2 | 0x20;
          }
          if ((uVar2 == 0x74) && (uVar2 = (uint)param_2[2], uVar2 != 0)) {
            if (uVar2 - 0x41 < 0x1a) {
              uVar2 = uVar2 | 0x20;
            }
            if ((uVar2 == 0x74) && (uVar2 = (uint)param_2[3], uVar2 != 0)) {
              if (uVar2 - 0x41 < 0x1a) {
                uVar2 = uVar2 | 0x20;
              }
              if ((uVar2 == 0x70) && (uVar2 = (uint)param_2[4], uVar2 != 0)) {
                if (uVar2 - 0x41 < 0x1a) {
                  uVar2 = uVar2 | 0x20;
                }
                if ((uVar2 == 0x73) && (uVar2 = (uint)param_2[5], uVar2 != 0)) {
                  if (uVar2 - 0x41 < 0x1a) {
                    uVar2 = uVar2 | 0x20;
                  }
                  if ((uVar2 == 0x3a) && (uVar2 = (uint)param_2[6], uVar2 != 0)) {
                    if (uVar2 - 0x41 < 0x1a) {
                      uVar2 = uVar2 | 0x20;
                    }
                    if ((uVar2 == 0x2f) && (uVar2 = (uint)param_2[7], uVar2 != 0)) {
                      if (uVar2 - 0x41 < 0x1a) {
                        uVar2 = uVar2 | 0x20;
                      }
                      if (uVar2 == 0x2f) goto LAB_1000d4a0;
                    }
                  }
                }
              }
            }
          }
        }
        goto LAB_1000d35c;
      }
      if (uVar2 - 0x41 < 0x1a) {
        uVar2 = uVar2 | 0x20;
      }
      if ((uVar2 != 0x74) || (uVar2 = (uint)param_2[2], uVar2 == 0)) goto code_r0x1000d27c;
      if (uVar2 - 0x41 < 0x1a) {
        uVar2 = uVar2 | 0x20;
      }
      if ((uVar2 != 0x74) || (uVar2 = (uint)param_2[3], uVar2 == 0)) goto code_r0x1000d27c;
      if (uVar2 - 0x41 < 0x1a) {
        uVar2 = uVar2 | 0x20;
      }
      if ((uVar2 != 0x70) || (uVar2 = (uint)param_2[4], uVar2 == 0)) goto code_r0x1000d27c;
      if (uVar2 - 0x41 < 0x1a) {
        uVar2 = uVar2 | 0x20;
      }
      if ((uVar2 != 0x3a) || (uVar2 = (uint)param_2[5], uVar2 == 0)) goto code_r0x1000d27c;
      if (uVar2 - 0x41 < 0x1a) {
        uVar2 = uVar2 | 0x20;
      }
      if ((uVar2 != 0x2f) || (uVar2 = (uint)param_2[6], uVar2 == 0)) goto code_r0x1000d27c;
      if (uVar2 - 0x41 < 0x1a) {
        uVar2 = uVar2 | 0x20;
      }
      if (uVar2 != 0x2f) goto code_r0x1000d27c;
    }
    else {
LAB_1000d35c:
      if (uVar5 != 0x5b) goto LAB_1000d364;
    }
LAB_1000d4a0:
    if (param_3 == (char *)0x0) {
      return 1;
    }
    pcVar1 = &DAT_10022ca6;
    pbVar4 = param_2;
  }
LAB_1000d5f0:
  pf_varargs_10023fa4__4__4_(param_3,0x100,pcVar1,(uint)pbVar4,(uint)in_stack_fffffedc);
  return 1;
code_r0x1000d538:
  if ((pbVar3 == (byte *)0x0) ||
     (pcVar1 = strstr((char *)local_120,&DAT_10022d77), pbVar3 <= pcVar1 + 2)) {
    recovered_1000ba2c((char *)local_120,0x100,((uintptr_t)pf_module_state + 0x338U));
  }
  else {
    pbVar3[1] = 0;
  }
  pcVar1 = &DAT_10022d7b;
  pbVar4 = local_120;
  goto LAB_1000d5f0;
}

#undef DAT_10022ca6
#undef DAT_10022d77
#undef DAT_10022d7b
#undef local_120
#undef in_stack_fffffedc

#undef DAT_10022ca6
#define DAT_10022ca6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x25eU)))
#define local_18 (*(int *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d60c
 */

undefined4 recovered_1000d60c(int param_1,int *param_2,byte *param_3)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  bool bVar1;

  local_18 = 0;
  if (param_2 == (int *)0x0 || param_3 == (byte *)0x0) {
    return 0;
  }
  *param_3 = 0;
  bVar1 = recovered_1000d880((char *)(param_1 + 1),&local_18,param_3);
  if (bVar1) {
    *param_2 = local_18;
  }
  else {
    if (*(char *)(param_1 + 0x308) != '\x01') {
      return 0;
    }
    if (*(char *)(param_1 + 0x201) == '\0') {
      return 0;
    }
    *param_2 = *(int *)(param_1 + 0x304);
    pf_varargs_10023fa4__4_((char *)param_3,0x100,&DAT_10022ca6,(uint)(param_1 + 0x201));
  }
  return 1;
}

#undef DAT_10022ca6
#undef local_18

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d6c4
 */

void recovered_1000d6c4(char *param_1,undefined1 *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong n;

  if (param_1 == (char *)0x0) {
    n = 0;
  }
  else {
    n = strlen(param_1);
  }
  if ((param_2 != (undefined1 *)0x0) && (*param_2 = 0, param_1 != (char *)0x0 && n != 0)) {
    do {
      if (param_1[n - 1] != '/' && param_1[n - 1] != '\\') {
        do {
          if (param_1[n - 1] == '/' || param_1[n - 1] == '\\') {
            if (0xfe < n) {
              n = 0xff;
            }
            memcpy(param_2,param_1,n);
            param_2[n] = 0;
            return;
          }
          n = n - 1;
        } while (n != 0);
        return;
      }
      n = n - 1;
    } while (n != 0);
  }
  return;
}


#undef DAT_10022c1b
#define DAT_10022c1b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1d3U)))
#undef DAT_10022ca6
#define DAT_10022ca6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x25eU)))
#undef DAT_10022d80
#define DAT_10022d80 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x338U)))
#undef str_10022d8d
#define str_10022d8d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x345U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d770
 */

void recovered_1000d770(byte *param_1,byte *param_2,char *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  byte *pbVar2;
  undefined1 *vararg1;

  if (param_3 == (char *)0x0) {
    return;
  }
  *param_3 = '\0';
  if (*param_2 == 0x2f) {
    param_2 = param_2 + 1;
  }
  else if (*param_2 == 0) {
    param_2 = &DAT_10022c1b;
    if (param_1 != (byte *)0x0) {
      param_2 = param_1;
    }
  }
  else {
    pbVar2 = param_2;
    if (param_1 != (byte *)0x0) {
      pbVar2 = (byte *)(uint)*param_1;
    }
    if (param_1 != (byte *)0x0 && pbVar2 != (byte *)0x0) {
      uVar1 = strlen((char *)param_1);
      vararg1 = &DAT_10022d80;
      if (param_1[uVar1 - 1] == 0x2f) {
        vararg1 = &DAT_10022c1b;
      }
      pf_varargs_10023fa4__4__4__4_
                (param_3,0x100,str_10022d8d,(uint)param_1,(uint)vararg1,(uint)param_2);
      return;
    }
  }
  pf_varargs_10023fa4__4_(param_3,0x100,&DAT_10022ca6,(uint)param_2);
  return;
}

#undef DAT_10022c1b
#undef DAT_10022ca6
#undef DAT_10022d80
#undef str_10022d8d

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d880
 */

bool recovered_1000d880(char *param_1,int *param_2,byte *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  char cVar2;
  char *pcVar3;
  ulong n;
  char *pcVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  bool bVar8;
  bool bVar9;

  if (param_1 == (char *)0x0) {
    return false;
  }
  if (param_2 == (int *)0x0 || param_3 == (byte *)0x0) {
    return false;
  }
  bVar9 = false;
  *param_3 = 0;
  if (*param_1 == '[') {
    iVar7 = 1;
    pcVar4 = param_1 + 1;
    cVar1 = *pcVar4;
    if (cVar1 == '-') {
      iVar7 = 2;
      pcVar4 = param_1 + 2;
    }
    if (0xf5 < (byte)(param_1[iVar7] - 0x3aU)) {
      iVar5 = 0;
      pcVar4 = pcVar4 + 2;
      cVar6 = param_1[iVar7];
      do {
        pcVar3 = pcVar4;
        cVar2 = pcVar3[-1];
        iVar5 = iVar5 * 10 + (uint)(byte)(cVar6 - 0x30);
        pcVar4 = pcVar3 + 1;
        cVar6 = cVar2;
      } while ((byte)(cVar2 - 0x30U) < 10);
      bVar9 = false;
      if (cVar2 == ']') {
        cVar6 = *pcVar3;
        bVar8 = cVar6 == ':';
        if (bVar8) {
          cVar6 = pcVar3[1];
        }
        if (bVar8 && cVar6 == ';') {
          pcVar4 = pcVar3 + 2;
          n = 0;
          if (*pcVar4 == '/') {
            pcVar4 = pcVar3 + 3;
          }
          for (; pcVar4[n] != '\0' && pcVar4[n] != '>'; n = n + 1) {
          }
          if (0xfe < n) {
            n = 0xff;
          }
          memcpy(param_3,pcVar4,n);
          param_3[n] = 0;
          recovered_1000d9c0(param_3);
          if (cVar1 == '-') {
            iVar5 = -iVar5;
          }
          *param_2 = iVar5;
          bVar9 = *param_3 != 0;
        }
      }
    }
  }
  return bVar9;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d9c0
 */

void recovered_1000d9c0(byte *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  int in_r12;
  uint unaff_lr;

  if (param_1 == (byte *)0x0) {
    return;
  }
  pbVar3 = param_1;
  do {
    for (; bVar1 = *pbVar3, bVar1 != 0x25; pbVar3 = pbVar3 + 1) {
      if (bVar1 == 0) {
        *param_1 = 0;
        return;
      }
LAB_1000d9e0:
      *param_1 = bVar1;
      param_1 = param_1 + 1;
    }
    bVar2 = pbVar3[1];
    iVar4 = (int)(char)bVar2;
    if (bVar2 != 0) {
      in_r12 = (int)(char)pbVar3[2];
      unaff_lr = (uint)pbVar3[2];
    }
    if (bVar2 == 0 || unaff_lr == 0) goto LAB_1000d9e0;
    if ((byte)(bVar2 - 0x30U) < 10) {
      iVar5 = iVar4 + -0x30;
    }
    else if ((byte)(bVar2 + 0x9f) < 6) {
      iVar5 = iVar4 + -0x57;
    }
    else {
      iVar5 = -1;
      if ((byte)(bVar2 + 0xbf) < 6) {
        iVar5 = iVar4 + -0x37;
      }
    }
    if ((unaff_lr - 0x30 & 0xff) < 10) {
      iVar4 = in_r12 + -0x30;
    }
    else if ((unaff_lr - 0x61 & 0xff) < 6) {
      iVar4 = in_r12 + -0x57;
    }
    else {
      iVar4 = -1;
      if ((unaff_lr - 0x41 & 0xff) < 6) {
        iVar4 = in_r12 + -0x37;
      }
    }
    if (iVar5 < 0 || iVar4 < 0) goto LAB_1000d9e0;
    *param_1 = (byte)iVar4 | (byte)(iVar5 << 4);
    pbVar3 = pbVar3 + 3;
    param_1 = param_1 + 1;
  } while( true );
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
#undef UINT_4001084c
#define UINT_4001084c (*(uint *)(0x4001084cU))
#undef UINT_40010850
#define UINT_40010850 (*(uint *)(0x40010850U))
#undef str_10022dba
#define str_10022dba (*(char (*)[1])(((uintptr_t)pf_module_state + 0x372U)))
#undef str_10022dc8
#define str_10022dc8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x380U)))
#undef str_10022e50
#define str_10022e50 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x408U)))
#undef str_1002303e
#define str_1002303e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5f6U)))
#define acStack_978 (*(char (*)[512])(frame + 24))
#define acStack_778 (*(char (*)[1536])(frame + 536))
#define acStack_172 (*(char (*)[6])(frame + 2078))
#define acStack_e7 (*(char (*)[193])(frame + 2217))
#define uStack_26 (*(ushort *)(frame + 2410))
#define local_97c (*(ulong *)(frame + 20))
#define local_178 (*(uint *)(frame + 2072))
#define local_16c (*(uint *)(frame + 2084))
#define local_168 (*(char (*)[129])(frame + 2088))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000dacc
 */

int recovered_1000dacc(int param_1,byte *param_2,undefined1 *param_3,uint param_4,ulong *param_5,
                      undefined1 *param_6,char *param_7,ulong param_8)

{
  unsigned char frame[2480] __attribute__((aligned(16))) = {0};

  uint uVar1;
  code *pcVar2;
  int iVar3;
  byte *ptr;
  undefined *vararg5;
  int iVar4;
  byte *vararg1;
  ulong n;
  char *pcVar5;
  bool bVar6;

  local_16c = 0;
  local_178 = 0;
  if (param_2 != (byte *)0x0) {
    *param_3 = 0;
    if (param_5 != (ulong *)0x0) {
      *param_5 = 0;
    }
    if (param_6 != (undefined1 *)0x0) {
      *param_6 = 0;
    }
    iVar3 = recovered_1000df3c(param_2,local_168,param_7,param_8);
    if (iVar3 != 0) {
      pcVar5 = (char *)(param_1 + 0x205bc8);
      iVar3 = recovered_1000e314(pcVar5,param_7,param_8);
      if (iVar3 != 0) {
        vararg1 = (byte *)((uint)local_168 | 1);
        iVar3 = recovered_1000e6e0(vararg1,&local_16c);
        if (((iVar3 != 0) ||
            (iVar3 = recovered_1000e870((int)pcVar5,vararg1,&local_16c,param_7,param_8), iVar3 != 0)
            ) && (iVar3 = recovered_1000ed34((int)pcVar5,local_16c,acStack_172,param_7,param_8),
                 iVar3 != 0)) {
          iVar3 = Ram40010800;
          if ((iVar3 == 0x50414d57) && (iVar3 = Ram40010804, iVar3 != 0)) {
            uVar1 = Ram40010808;
            bVar6 = 0xb < uVar1;
            if (bVar6) {
              uVar1 = Ram40010808;
            }
            if (((bVar6 && 0x4f < uVar1) && (pcVar2 = (code *)UINT_4001084c, pcVar2 != (code *)0x0))
               && (ptr = (*pcVar2)(0x50000), ptr != (byte *)0x0)) {
              vararg5 = winter_js_version();
              pf_varargs_10023fa4__4__4__4__4__4__4_
                        (acStack_978,0x200,str_1002303e,1000000,((uintptr_t)pf_module_state + 0x680U),((uintptr_t)pf_module_state + 0x678U),((uintptr_t)pf_module_state + 0x67cU),
                         ((uintptr_t)pf_module_state + 0x67cU),(uint)vararg5);
              if (local_168[0] == '\x01') {
                iVar3 = recovered_1000f15c(param_1,(int)pcVar5,local_16c,(uint)uStack_26,acStack_172
                                           ,(int)vararg1,acStack_e7,acStack_978,ptr,0x50000,
                                           &local_178,param_7,param_8,(undefined *)0x0,0);
              }
              else {
                pf_varargs_10023fa4__4__4__4_
                          (acStack_778,0x600,str_10022dc8,(uint)acStack_e7,(uint)vararg1,
                           (uint)acStack_978);
                iVar3 = recovered_1000f670(pcVar5,local_16c,(uint)uStack_26,acStack_172,acStack_778,
                                           ptr,0x50000,&local_178,param_7,param_8,(undefined *)0x0,0
                                          );
              }
              iVar4 = 0;
              if (iVar3 != 0) {
                pcVar5 = (char *)recovered_1000f98c((int)ptr);
                if (pcVar5 == (char *)0x0) {
                  pf_varargs_10023fa4___(param_7,param_8,str_10022e50);
                  iVar4 = 0;
                }
                else {
                  if ((uint)((int)pcVar5 - (int)ptr) < local_178) {
                    n = local_178 - ((int)pcVar5 - (int)ptr);
                  }
                  else {
                    n = strlen(pcVar5);
                  }
                  bVar6 = recovered_1000f9e4(ptr);
                  if (bVar6) {
                    local_97c = 0;
                    iVar4 = recovered_1000fc4c((int)pcVar5,n,(int)param_3,param_4 - 1,
                                               (int *)&local_97c,param_7,param_8);
                    if ((iVar4 != 0) && (param_3[local_97c] = 0, param_5 != (ulong *)0x0)) {
                      *param_5 = local_97c;
                    }
                  }
                  else {
                    if (param_4 <= n) {
                      n = param_4 - 1;
                    }
                    memcpy(param_3,pcVar5,n);
                    param_3[n] = 0;
                    iVar4 = 1;
                    if (param_5 != (ulong *)0x0) {
                      *param_5 = n;
                    }
                  }
                  if (param_6 != (undefined1 *)0x0) {
                    recovered_1000fee4((char *)ptr,param_6);
                  }
                }
              }
              iVar3 = Ram40010800;
              if (iVar3 != 0x50414d57) {
                return iVar4;
              }
              iVar3 = Ram40010804;
              if (iVar3 == 0) {
                return iVar4;
              }
              uVar1 = Ram40010808;
              bVar6 = 0xb < uVar1;
              if (bVar6) {
                uVar1 = Ram40010808;
              }
              if (!(bVar6 && 0x53 < uVar1)) {
                return iVar4;
              }
              pcVar2 = (code *)UINT_40010850;
              if (pcVar2 != (code *)0x0) {
                (*pcVar2)(ptr);
              }
              return iVar4;
            }
          }
          pf_varargs_10023fa4___(param_7,param_8,str_10022dba);
        }
      }
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
#undef str_10022dba
#undef str_10022dc8
#undef str_10022e50
#undef str_1002303e
#undef acStack_978
#undef acStack_778
#undef acStack_172
#undef acStack_e7
#undef uStack_26
#undef local_97c
#undef local_178
#undef local_16c
#undef local_168

#undef DAT_10022ca6
#define DAT_10022ca6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x25eU)))
#undef DAT_10022d80
#define DAT_10022d80 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x338U)))
#undef DAT_10022ea9
#define DAT_10022ea9 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x461U)))
#undef str_10022e6e
#define str_10022e6e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x426U)))
#undef str_10022e87
#define str_10022e87 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x43fU)))
#undef str_10022e98
#define str_10022e98 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x450U)))
#undef str_10022ead
#define str_10022ead (*(char (*)[1])(((uintptr_t)pf_module_state + 0x465U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000df3c
 */

undefined4 recovered_1000df3c(byte *param_1,undefined1 *param_2,char *param_3,ulong param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined2 uVar1;
  uint uVar2;
  byte bVar3;
  char *pcVar4;
  byte *vararg0;
  ulong n;
  byte *src;

  n = 0;
  if (param_1 == (byte *)0x0 || param_2 == (undefined1 *)0x0) {
    return 0;
  }
  memset(param_2,0,0x144);
  uVar2 = (uint)*param_1;
  if (uVar2 == 0) goto LAB_1000e1ac;
  if (uVar2 - 0x41 < 0x1a) {
    uVar2 = uVar2 | 0x20;
  }
  if (uVar2 != 0x68) goto LAB_1000e1ac;
  uVar2 = (uint)param_1[1];
  if (uVar2 == 0) {
code_r0x1000e098:
    uVar2 = (uint)param_1[1];
    if (uVar2 == 0) {
LAB_1000e1ac:
      pf_varargs_10023fa4___(param_3,param_4,str_10022e6e);
      return 0;
    }
    if (uVar2 - 0x41 < 0x1a) {
      uVar2 = uVar2 | 0x20;
    }
    if ((uVar2 != 0x74) || (uVar2 = (uint)param_1[2], uVar2 == 0)) goto LAB_1000e1ac;
    if (uVar2 - 0x41 < 0x1a) {
      uVar2 = uVar2 | 0x20;
    }
    if ((uVar2 != 0x74) || (uVar2 = (uint)param_1[3], uVar2 == 0)) goto LAB_1000e1ac;
    if (uVar2 - 0x41 < 0x1a) {
      uVar2 = uVar2 | 0x20;
    }
    if ((uVar2 != 0x70) || (uVar2 = (uint)param_1[4], uVar2 == 0)) goto LAB_1000e1ac;
    if (uVar2 - 0x41 < 0x1a) {
      uVar2 = uVar2 | 0x20;
    }
    if ((uVar2 != 0x3a) || (uVar2 = (uint)param_1[5], uVar2 == 0)) goto LAB_1000e1ac;
    if (uVar2 - 0x41 < 0x1a) {
      uVar2 = uVar2 | 0x20;
    }
    if ((uVar2 != 0x2f) || (uVar2 = (uint)param_1[6], uVar2 == 0)) goto LAB_1000e1ac;
    if (uVar2 - 0x41 < 0x1a) {
      uVar2 = uVar2 | 0x20;
    }
    if (uVar2 != 0x2f) goto LAB_1000e1ac;
    src = param_1 + 7;
    uVar1 = 0x50;
  }
  else {
    if (uVar2 - 0x41 < 0x1a) {
      uVar2 = uVar2 | 0x20;
    }
    if ((uVar2 != 0x74) || (uVar2 = (uint)param_1[2], uVar2 == 0)) goto code_r0x1000e098;
    if (uVar2 - 0x41 < 0x1a) {
      uVar2 = uVar2 | 0x20;
    }
    if ((uVar2 != 0x74) || (uVar2 = (uint)param_1[3], uVar2 == 0)) goto code_r0x1000e098;
    if (uVar2 - 0x41 < 0x1a) {
      uVar2 = uVar2 | 0x20;
    }
    if ((uVar2 != 0x70) || (uVar2 = (uint)param_1[4], uVar2 == 0)) goto code_r0x1000e098;
    if (uVar2 - 0x41 < 0x1a) {
      uVar2 = uVar2 | 0x20;
    }
    if ((uVar2 != 0x73) || (uVar2 = (uint)param_1[5], uVar2 == 0)) goto code_r0x1000e098;
    if (uVar2 - 0x41 < 0x1a) {
      uVar2 = uVar2 | 0x20;
    }
    if ((uVar2 != 0x3a) || (uVar2 = (uint)param_1[6], uVar2 == 0)) goto code_r0x1000e098;
    if (uVar2 - 0x41 < 0x1a) {
      uVar2 = uVar2 | 0x20;
    }
    if ((uVar2 != 0x2f) || (uVar2 = (uint)param_1[7], uVar2 == 0)) goto code_r0x1000e098;
    if (uVar2 - 0x41 < 0x1a) {
      uVar2 = uVar2 | 0x20;
    }
    if (uVar2 != 0x2f) goto code_r0x1000e098;
    src = param_1 + 8;
    *param_2 = 1;
    uVar1 = 0x1bb;
  }
  *(undefined2 *)(param_2 + 0x142) = uVar1;
  while( true ) {
    uVar2 = (uint)src[n];
    if (((uVar2 - 0x23 < 0x1d) && ((1 << (uVar2 - 0x23 & 0xff) & 0x10801001U) != 0)) || (uVar2 == 0)
       ) break;
    if (uVar2 < 0x21) goto LAB_1000e1e0;
    n = n + 1;
  }
  if (0xffffff7f < n - 0x80 && n != 0) {
    vararg0 = src + n;
    memcpy(param_2 + 1,src,n);
    uVar2 = 0;
    (param_2 + 1)[n] = 0;
    bVar3 = src[n];
    if (bVar3 != 0x3a) goto LAB_1000e274;
    goto LAB_1000e234;
  }
LAB_1000e1e0:
  pcVar4 = str_10022e87;
LAB_1000e1ec:
  pf_varargs_10023fa4___(param_3,param_4,pcVar4);
  return 0;
  while (uVar2 = ((uint)*vararg0 + uVar2 * 10) - 0x30, uVar2 < 0x10000) {
LAB_1000e234:
    vararg0 = vararg0 + 1;
    if (9 < *vararg0 - 0x30U) {
      if (uVar2 != 0) {
        *(short *)(param_2 + 0x142) = (short)uVar2;
        bVar3 = *vararg0;
LAB_1000e274:
        if (bVar3 < 0x2f) {
          if (bVar3 == 0) {
            pcVar4 = &DAT_10022ca6;
            vararg0 = &DAT_10022d80;
            goto LAB_1000e308;
          }
          if (bVar3 == 0x23) goto LAB_1000e2bc;
        }
        else {
          if (bVar3 == 0x2f) {
            pcVar4 = &DAT_10022ca6;
            goto LAB_1000e308;
          }
          if (bVar3 == 0x3f) {
LAB_1000e2bc:
            pcVar4 = &DAT_10022ea9;
LAB_1000e308:
            pf_varargs_10023fa4__4_(param_2 + 0x81,0xc0,pcVar4,(uint)vararg0);
            return 1;
          }
        }
        pcVar4 = str_10022ead;
        goto LAB_1000e1ec;
      }
      break;
    }
  }
  pcVar4 = str_10022e98;
  goto LAB_1000e1ec;
}

#undef DAT_10022ca6
#undef DAT_10022d80
#undef DAT_10022ea9
#undef str_10022e6e
#undef str_10022e87
#undef str_10022e98
#undef str_10022ead

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
#undef UINT_40010924
#define UINT_40010924 (*(uint *)(0x40010924U))
#undef str_10022ebe
#define str_10022ebe (*(char (*)[1])(((uintptr_t)pf_module_state + 0x476U)))
#undef str_10022ed3
#define str_10022ed3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x48bU)))
#undef str_10022ef4
#define str_10022ef4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4acU)))
#undef str_10022f0a
#define str_10022f0a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4c2U)))
#undef str_10022f23
#define str_10022f23 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4dbU)))
#undef str_10022f3d
#define str_10022f3d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4f5U)))
#undef str_10022f50
#define str_10022f50 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x508U)))
#undef str_10022f69
#define str_10022f69 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x521U)))
#define local_f8 (*(uint *)(frame + 24))
#define local_f4 (*(uint *)(frame + 28))
#define local_e8 (*(uint *)(frame + 40))
#define local_e4 (*(char *)(frame + 44))
#define local_e3 (*(char *)(frame + 45))
#define local_34 (*(int *)(frame + 220))
#define local_30 (*(undefined1 (*)[16])(frame + 224))
#define uStack_f0 (*(undefined8 *)(frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000e314
 */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 recovered_1000e314(char *param_1,char *param_2,ulong param_3)

{
  unsigned char frame[304] __attribute__((aligned(16))) = {0};

  code *pcVar1;
  uint128 auVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  bool bVar6;
  undefined8 uVar7;
  undefined1 in_q8 [16];
  undefined8 in_d18;
  uint128 auVar8;

  if (param_1 == (char *)0x0) {
    return 0;
  }
  memset(&local_f8,0,0xc0);
  iVar4 = Ram40010800;
  pcVar5 = str_10022ebe;
  if ((iVar4 != 0x50414d57) || (iVar4 = Ram40010804, iVar4 == 0)) {
LAB_1000e394:
    pf_varargs_10023fa4___(param_2,param_3,pcVar5);
    return 0;
  }
  uVar3 = Ram40010808;
  bVar6 = 0xb < uVar3;
  if (bVar6) {
    uVar3 = Ram40010808;
  }
  if ((!bVar6 || uVar3 < 0x128) || (pcVar1 = (code *)UINT_40010924, pcVar1 == (code *)0x0))
  goto LAB_1000e394;
  uVar3 = (*pcVar1)(&local_f8);
  if (uVar3 == 0) {
    pcVar5 = str_10022ebe;
    goto LAB_1000e394;
  }
  pcVar5 = str_10022ebe;
  if ((local_f4 & 1) == 0) goto LAB_1000e394;
  if ((local_f4 & 4) == 0) {
    pcVar5 = str_10022ed3;
    goto LAB_1000e394;
  }
  if ((local_f4 & 2) == 0) {
    pcVar5 = str_10022ef4;
    goto LAB_1000e394;
  }
  /* VLD1/VMOVL/VUZP transport the four MAC bytes into R0. */
  uVar7 = local_e8;
  if ((int)uVar7 == 0) {
    bVar6 = local_e4 == '\0';
    if (bVar6) {
      local_e4 = local_e3;
    }
    if (bVar6 && local_e4 == '\0') {
      pcVar5 = str_10022f0a;
      goto LAB_1000e394;
    }
  }
  if ((*param_1 == '\x01') && (iVar4 = memcmp(param_1 + 2,&local_e8,6), iVar4 != 0)) {
    memset(param_1,0,0xec);
  }
  memcpy(param_1 + 0x2c,&local_f8,0xc0);
  memcpy(param_1 + 2,&local_e8,6);
  if (*param_1 != '\0') {
    return 1;
  }
  memset(&local_f8,0,0x14);
  memset(&local_34,0,0x14);
  iVar4 = *(int *)(param_1 + 0x28);
  uVar3 = iVar4 + 0x1fff;
  if (uVar3 < 2) {
    uVar3 = 1;
  }
  if (iVar4 == 0) {
    uVar3 = 0x6142;
  }
  if (iVar4 == 0) {
    uVar3 = uVar3 & 0xffff | 0x474c0000;
  }
  *(uint *)(param_1 + 0x28) = uVar3;
  *(uint *)(param_1 + 0x1c) =
       uVar3 ^ ((uint)(byte)param_1[5] << 0x10 | (uint)(byte)param_1[2] << 0x18 |
                (uint)(byte)param_1[6] << 8 | (uint)(byte)param_1[7]);
  param_1[1] = '\x01';
  bVar6 = recovered_10010074((int)param_1,1,0,0);
  if (!bVar6) {
LAB_1000e690:
    pcVar5 = str_10022f23;
    goto LAB_1000e69c;
  }
  bVar6 = recovered_10010254((int)param_1,2,(undefined8 *)&local_f8);
  if (!bVar6) {
    bVar6 = recovered_10010074((int)param_1,1,0,0);
    if (!bVar6) goto LAB_1000e690;
    bVar6 = recovered_10010254((int)param_1,2,(undefined8 *)&local_f8);
    if (!bVar6) {
      bVar6 = recovered_10010074((int)param_1,1,0,0);
      if (!bVar6) goto LAB_1000e690;
      recovered_10010254((int)param_1,2,(undefined8 *)&local_f8);
    }
  }
  if (local_f8 == 0) {
    pcVar5 = str_10022f3d;
    goto LAB_1000e69c;
  }
  bVar6 = recovered_10010074((int)param_1,3,local_f8,local_e8);
  if (bVar6) {
    bVar6 = recovered_10010254((int)param_1,5,(undefined8 *)&local_34);
    if (!bVar6) {
      bVar6 = recovered_10010074((int)param_1,3,local_f8,local_e8);
      if (!bVar6) goto LAB_1000e6b0;
      recovered_10010254((int)param_1,5,(undefined8 *)&local_34);
    }
    if (local_34 != 0) {
      *(int *)(param_1 + 8) = local_34;
      PF_PART8(auVar2, 4) = uStack_f0;
      PF_PART4(auVar2, 0) = local_f4;
      PF_PART4(auVar2, 12) = local_e8;
      auVar8 = VectorCompareEqual(*(uint128 *)local_30,0,4);
      auVar8 = ((*(uint128 *)local_30 & ~auVar8) | (auVar2 & auVar8));
      *param_1 = '\x01';
      *(longlong *)(param_1 + 0xc) = PF_PART8(auVar8, 0);
      *(longlong *)(param_1 + 0x14) = PF_PART8(auVar8, 8);
      return 1;
    }
    pcVar5 = str_10022f69;
  }
  else {
LAB_1000e6b0:
    pcVar5 = str_10022f50;
  }
LAB_1000e69c:
  pf_varargs_10023fa4___(param_2,param_3,pcVar5);
  return 0;
}

#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef Ram40010800
#undef Ram40010804
#undef Ram40010808
#undef UINT_40010924
#undef str_10022ebe
#undef str_10022ed3
#undef str_10022ef4
#undef str_10022f0a
#undef str_10022f23
#undef str_10022f3d
#undef str_10022f50
#undef str_10022f69
#undef local_f8
#undef local_f4
#undef local_e8
#undef local_e4
#undef local_e3
#undef local_34
#undef local_30
#undef uStack_f0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000e6e0
 */

undefined4 recovered_1000e6e0(byte *param_1,uint *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte *pbVar1;
  undefined4 uVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  bool bVar11;

  uVar2 = 0;
  if (param_1 == (byte *)0x0 || param_2 == (uint *)0x0) {
    return 0;
  }
  uVar7 = (uint)*param_1;
  uVar9 = uVar7 - 0x30;
  if (uVar9 < 10) {
    uVar2 = 0;
    uVar6 = 0;
    pbVar1 = param_1 + 1;
    do {
      pbVar3 = pbVar1;
      uVar6 = (uVar7 + uVar6 * 10) - 0x30;
      if (0xff < uVar6) {
        return 0;
      }
      uVar7 = (uint)*pbVar3;
      pbVar1 = pbVar3 + 1;
    } while (uVar7 - 0x30 < 10);
    if ((uVar9 < 10) && (uVar7 == 0x2e)) {
      uVar7 = (uint)pbVar3[1];
      uVar9 = uVar7 - 0x30;
      if (uVar9 < 10) {
        uVar2 = 0;
        uVar8 = 0;
        pbVar1 = pbVar3 + 2;
        do {
          pbVar3 = pbVar1;
          uVar8 = (uVar7 + uVar8 * 10) - 0x30;
          if (0xff < uVar8) {
            return 0;
          }
          uVar7 = (uint)*pbVar3;
          pbVar1 = pbVar3 + 1;
        } while (uVar7 - 0x30 < 10);
        if ((uVar9 < 10) && (uVar7 == 0x2e)) {
          uVar7 = (uint)pbVar3[1];
          uVar9 = uVar7 - 0x30;
          if (uVar9 < 10) {
            uVar2 = 0;
            uVar4 = 0;
            pbVar1 = pbVar3 + 3;
            do {
              pbVar3 = pbVar1;
              uVar4 = (uVar7 + uVar4 * 10) - 0x30;
              if (0xff < uVar4) {
                return 0;
              }
              uVar7 = (uint)pbVar3[-1];
              pbVar1 = pbVar3 + 1;
            } while (uVar7 - 0x30 < 10);
            if ((uVar9 < 10) && (uVar7 == 0x2e)) {
              uVar7 = (uint)*pbVar3;
              uVar9 = uVar7 - 0x30;
              if (uVar9 < 10) {
                uVar2 = 0;
                iVar10 = 0;
                uVar5 = 0;
                do {
                  uVar5 = (uVar7 + uVar5 * 10) - 0x30;
                  if (0xff < uVar5) {
                    return 0;
                  }
                  uVar7 = (uint)(pbVar3 + 1)[iVar10];
                  iVar10 = iVar10 + 1;
                } while (uVar7 - 0x30 < 10);
                bVar11 = uVar9 == 9;
                if (uVar9 < 10) {
                  bVar11 = uVar7 == 0;
                }
                if (bVar11) {
                  *param_2 = uVar8 * 0x10000 | uVar6 * 0x1000000 | uVar4 * 0x100 | uVar5;
                  uVar2 = 1;
                }
              }
            }
          }
        }
      }
    }
  }
  return uVar2;
}


#undef DAT_10022ca6
#define DAT_10022ca6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x25eU)))
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
#undef UINT_4001089c
#define UINT_4001089c (*(uint *)(0x4001089cU))
#undef UINT_40010928
#define UINT_40010928 (*(uint *)(0x40010928U))
#undef str_10022f7a
#define str_10022f7a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x532U)))
#undef str_10022f91
#define str_10022f91 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x549U)))
#undef str_10022fa2
#define str_10022fa2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x55aU)))
#undef str_10022fb2
#define str_10022fb2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x56aU)))
#define local_a8e (*(char (*)[96])(frame + 18))
#define local_a22 (*(ushort *)(frame + 126))
#define local_a20 (*(byte (*)[2])(frame + 128))
#define local_a1e (*(ushort (*)[3])(frame + 130))
#define local_a17 (*(byte *)(frame + 137))
#define local_a14 (*(uint *)(frame + 140))
#define local_a10 (*(uint *)(frame + 144))
#define local_228 (*(undefined1 (*)[12])(frame + 2168))
#define auStack_a2e (*(undefined1 (*)[12])(frame + 114))
#define local_21c (*(undefined1 (*)[500])(frame + 2180))
#define local_28 (*(uint (*)[2])(frame + 2680))
#define acStack_22e (*(char (*)[6])(frame + 2162))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000e870
 */

undefined4 recovered_1000e870(int param_1,byte *param_2,uint *param_3,char *param_4,ulong param_5)

{
  unsigned char frame[2752] __attribute__((aligned(16))) = {0};

  ushort uVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  char *format;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  bool bVar12;

  if (param_1 == 0) {
    return 0;
  }
  if (param_2 == (byte *)0x0 || param_3 == (uint *)0x0) {
    return 0;
  }
  if (*(uint *)(param_1 + 0x14) == 0) {
    pf_varargs_10023fa4___(param_4,param_5,str_10022f7a);
    return 0;
  }
  iVar5 = recovered_1000ed34(param_1,*(uint *)(param_1 + 0x14),acStack_22e,param_4,param_5);
  if (iVar5 == 0) {
    return 0;
  }
  memset(local_228,0,0x200);
  uVar6 = (uint)*(ushort *)(param_1 + 0x22);
  if (uVar6 == 0) {
    uVar6 = 0x474c;
  }
  uVar10 = uVar6 + 1 & 0xffff;
  if (uVar10 != uVar6 + 1) {
    uVar10 = uVar6 + 2;
  }
  *(short *)(param_1 + 0x22) = (short)uVar10;
  uVar6 = (uint)*param_2;
  local_228[1] = (undefined1)uVar10;
  PF_PART4(local_228, 2) = 0x1000001;
  local_228[0] = (undefined1)(uVar10 >> 8);
  if (uVar6 == 0) {
    iVar5 = 0xd;
    local_21c[0] = 0;
  }
  else {
    uVar8 = 0xc;
    do {
      uVar9 = uVar8;
      uVar7 = 0;
      while (uVar6 != 0 && uVar6 != 0x2e) {
        if ((uVar6 < 0x21) ||
           (((uVar6 - 0x23 < 0x1d && ((1 << (uVar6 - 0x23 & 0xff) & 0x10801001U) != 0)) ||
            (uVar6 == 0x5c)))) goto LAB_1000ed00;
        uVar6 = (uint)param_2[uVar7 + 1];
        uVar7 = uVar7 + 1;
      }
      if (uVar7 == 0) {
        if (uVar6 == 0) goto LAB_1000ece0;
        goto LAB_1000ed00;
      }
      if ((0x3f < uVar7) || (uVar8 = uVar9 + 1 + uVar7, uVar8 >> 9 != 0)) goto LAB_1000ed00;
      local_228[uVar9] = (char)uVar7;
      memcpy(local_228 + uVar9 + 1,param_2,uVar7);
      param_2 = param_2 + uVar7;
      if (*param_2 == 0x2e) {
        param_2 = param_2 + 1;
      }
      uVar6 = (uint)*param_2;
    } while (uVar6 != 0);
    uVar9 = uVar9 + uVar7 + 1;
LAB_1000ece0:
    local_228[uVar9] = 0;
    if (uVar9 - 0x1fc < 0xfffffdff) {
LAB_1000ed00:
      format = str_10022f91;
      goto LAB_1000ed10;
    }
    iVar5 = uVar9 + 1;
  }
  uVar6 = *(uint *)(param_1 + 8);
  uVar8 = *(uint *)(param_1 + 0x14);
  *(undefined4 *)(local_228 + iVar5) = 0x1000100;
  uVar7 = uVar10 & 0xffff | 0xc000;
  bVar4 = recovered_100106c0(param_1,acStack_22e,uVar6,uVar8,uVar7,0x35,local_228,
                             iVar5 + 4U & 0xffff);
  if (bVar4) {
    iVar5 = 0x1450;
    do {
      local_a8e[0] = '\0';
      local_28[0] = 0;
      iVar2 = Ram40010800;
      if ((iVar2 == 0x50414d57) && (iVar2 = Ram40010804, iVar2 != 0)) {
        uVar6 = Ram40010808;
        bVar4 = 0xb < uVar6;
        if (bVar4) {
          uVar6 = Ram40010808;
        }
        if ((!bVar4 || uVar6 < 300) || (pcVar3 = (code *)UINT_40010928, pcVar3 == (code *)0x0))
        goto LAB_1000eaf0;
        uVar8 = (*pcVar3)(auStack_a2e,0x800,local_28);
        uVar6 = 0;
        if (uVar8 != 0) {
          uVar6 = local_28[0];
        }
        if (uVar8 == 0 || uVar6 < 0xe) goto LAB_1000eaf0;
        if ((0x29 < uVar6) &&
           (((uint)local_a22 << 0x18 | (uint)(local_a22 >> 8) << 0x10) == 0x8000000)) {
          uVar8 = local_a20[0] & 0xf0;
          bVar4 = uVar8 == 0x40;
          if (bVar4) {
            uVar8 = (uint)local_a17;
          }
          if (((bVar4 && uVar8 == 0x11) &&
              ((local_a14 << 0x18 | (local_a14 >> 8 & 0xff) << 0x10 |
                (local_a14 >> 0x10 & 0xff) << 8 | local_a14 >> 0x18) == *(uint *)(param_1 + 0x14)))
             && ((local_a10 << 0x18 | (local_a10 >> 8 & 0xff) << 0x10 |
                  (local_a10 >> 0x10 & 0xff) << 8 | local_a10 >> 0x18) == *(uint *)(param_1 + 8))) {
            uVar8 = (uint)local_a20[0] << 2;
            uVar9 = uVar8 & 0xff;
            if (0x13 < uVar9) {
              uVar8 = (uVar8 & 0xff) + 8;
              uVar11 = (local_a1e[0] & 0xff) << 8 | (uint)(local_a1e[0] >> 8);
              bVar12 = uVar11 <= uVar8;
              bVar4 = uVar8 == uVar11;
              if (!bVar12 || bVar4) {
                uVar8 = (((uint)local_a1e[0] << 0x18 | (uint)(local_a1e[0] >> 8) << 0x10) >> 0x10) +
                        0xe;
                bVar12 = uVar6 <= uVar8;
                bVar4 = uVar8 == uVar6;
              }
              if (((!bVar12 || bVar4) &&
                  (((uint)*(ushort *)(local_a20 + uVar9) << 0x18 |
                   (uint)(*(ushort *)(local_a20 + uVar9) >> 8) << 0x10) == 0x350000)) &&
                 (uVar7 == ((uint)*(ushort *)((int)local_a1e + uVar9) << 0x18 |
                           (uint)(*(ushort *)((int)local_a1e + uVar9) >> 8) << 0x10) >> 0x10)) {
                uVar1 = *(ushort *)((int)local_a1e + uVar9 + 2);
                uVar6 = (uVar1 & 0xff) << 8 | (uint)(uVar1 >> 8);
                if (((7 < uVar6) &&
                    (uVar9 + (((uint)uVar1 << 0x18 | (uint)(uVar1 >> 8) << 0x10) >> 0x10) <= uVar11)
                    ) && (bVar4 = recovered_10010944((ushort *)((int)local_a1e + uVar9 + 6),
                                                     (ushort *)(uVar6 - 8),uVar10 & 0xffff,param_3,
                                                     local_a8e), bVar4)) {
                  return 1;
                }
              }
            }
          }
        }
      }
      else {
LAB_1000eaf0:
        iVar2 = Ram40010800;
        if ((iVar2 == 0x50414d57) && (iVar2 = Ram40010804, iVar2 != 0)) {
          uVar6 = Ram40010808;
          bVar4 = 0xb < uVar6;
          if (bVar4) {
            uVar6 = Ram40010808;
          }
          if ((bVar4 && 0x9f < uVar6) && (pcVar3 = (code *)UINT_4001089c, pcVar3 != (code *)0x0)) {
            (*pcVar3)();
          }
        }
      }
      if (local_a8e[0] != '\0') {
        pf_varargs_10023fa4__4_(param_4,param_5,&DAT_10022ca6,(uint)local_a8e);
        return 0;
      }
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    format = str_10022fb2;
  }
  else {
    format = str_10022fa2;
  }
LAB_1000ed10:
  pf_varargs_10023fa4___(param_4,param_5,format);
  return 0;
}

#undef DAT_10022ca6
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef Ram40010800
#undef Ram40010804
#undef Ram40010808
#undef UINT_4001089c
#undef UINT_40010928
#undef str_10022f7a
#undef str_10022f91
#undef str_10022fa2
#undef str_10022fb2
#undef local_a8e
#undef local_a22
#undef local_a20
#undef local_a1e
#undef local_a17
#undef local_a14
#undef local_a10
#undef local_228
#undef auStack_a2e
#undef local_21c
#undef local_28
#undef acStack_22e

#undef DAT_10023f69
#define DAT_10023f69 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1521U)))
#undef DAT_10023f6f
#define DAT_10023f6f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1527U)))
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
#undef UINT_4001089c
#define UINT_4001089c (*(uint *)(0x4001089cU))
#undef UINT_40010928
#define UINT_40010928 (*(uint *)(0x40010928U))
#undef UINT_4001092c
#define UINT_4001092c (*(uint *)(0x4001092cU))
#undef str_10022ff8
#define str_10022ff8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5b0U)))
#undef str_10023008
#define str_10023008 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5c0U)))
#undef str_10023014
#define str_10023014 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5ccU)))
#undef str_1002302d
#define str_1002302d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5e5U)))
#define auStack_84a (*(undefined1 (*)[6])(frame + 38))
#define auStack_5a (*(undefined1 (*)[6])(frame + 2070))
#define auStack_4a (*(undefined1 (*)[6])(frame + 2086))
#define auStack_40 (*(undefined1 (*)[6])(frame + 2096))
#define local_854 (*(ushort *)(frame + 28))
#define local_852 (*(ushort *)(frame + 30))
#define local_850 (*(ushort *)(frame + 32))
#define local_84e (*(char *)(frame + 34))
#define local_84d (*(char *)(frame + 35))
#define local_84c (*(ushort *)(frame + 36))
#define local_844 (*(uint *)(frame + 44))
#define local_83a (*(uint *)(frame + 54))
#define local_60 (*(uint *)(frame + 2064))
#define local_54 (*(undefined4 *)(frame + 2076))
#define local_50 (*(undefined4 *)(frame + 2080))
#define local_4c (*(undefined2 *)(frame + 2084))
#define local_44 (*(uint *)(frame + 2092))
#define local_3a (*(undefined1 *)(frame + 2102))
#define local_39 (*(undefined1 *)(frame + 2103))
#define local_38 (*(undefined1 *)(frame + 2104))
#define local_37 (*(undefined1 *)(frame + 2105))
#define auStack_860 (*(undefined1 (*)[12])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ed34
 */

undefined4 recovered_1000ed34(int param_1,uint param_2,char *param_3,char *param_4,ulong param_5)

{
  unsigned char frame[2192] __attribute__((aligned(16))) = {0};

  char cVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  char *format;
  int iVar7;
  bool bVar8;

  if (param_1 == 0 || param_2 == 0) {
    format = str_10023014;
  }
  else {
    if (param_2 == 0xffffffff) {
      param_2 = 0xffffffff;
    }
    else if (((*(uint *)(param_1 + 0xc) == 0) ||
             (((*(uint *)(param_1 + 8) ^ param_2) & *(uint *)(param_1 + 0xc)) != 0)) &&
            (param_2 = *(uint *)(param_1 + 0x10), param_2 == 0)) {
      format = str_1002302d;
      goto LAB_1000f140;
    }
    if (param_2 == *(uint *)(param_1 + 8)) {
      if (param_3 == (char *)0x0) {
        return 1;
      }
      memcpy(param_3,(void *)(param_1 + 2),6);
      return 1;
    }
    iVar4 = 0;
    do {
      memset(&local_60,0,0x3c);
      memcpy(&local_60,&DAT_10023f69,6);
      memcpy(auStack_5a,(void *)(param_1 + 2),6);
      local_4c = 0x100;
      local_50 = 0x4060008;
      local_54 = 0x1000608;
      memcpy(auStack_4a,(void *)(param_1 + 2),6);
      uVar5 = *(uint *)(param_1 + 8);
      local_44 = uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 |
                 uVar5 >> 0x18;
      memcpy(auStack_40,&DAT_10023f6f,6);
      local_38 = (undefined1)(param_2 >> 8);
      local_39 = (undefined1)(param_2 >> 0x10);
      local_37 = (undefined1)param_2;
      local_3a = (undefined1)(param_2 >> 0x18);
      iVar7 = Ram40010800;
      if ((iVar7 != 0x50414d57) || (iVar7 = Ram40010804, iVar7 == 0)) {
LAB_1000f12c:
        format = str_10022ff8;
        goto LAB_1000f140;
      }
      uVar5 = Ram40010808;
      bVar8 = uVar5 < 0xc;
      if (!bVar8) {
        uVar5 = Ram40010808;
      }
      if (((bVar8 || uVar5 < 0x130) || (pcVar3 = (code *)UINT_4001092c, pcVar3 == (code *)0x0)) ||
         (uVar5 = (*pcVar3)(&local_60,0x3c), uVar5 == 0)) goto LAB_1000f12c;
      iVar7 = 900;
      do {
        local_60 = 0;
        iVar2 = Ram40010800;
        if ((iVar2 == 0x50414d57) && (iVar2 = Ram40010804, iVar2 != 0)) {
          uVar5 = Ram40010808;
          bVar8 = 0xb < uVar5;
          if (bVar8) {
            uVar5 = Ram40010808;
          }
          if ((!bVar8 || uVar5 < 300) || (pcVar3 = (code *)UINT_40010928, pcVar3 == (code *)0x0))
          goto LAB_1000ef98;
          uVar6 = (*pcVar3)(auStack_860,0x800,&local_60);
          uVar5 = 0;
          if (uVar6 != 0) {
            uVar5 = local_60;
          }
          if (uVar6 == 0 || uVar5 < 0xe) goto LAB_1000ef98;
          if ((((param_3 != (char *)0x0) && (0x29 < uVar5)) &&
              (((uint)local_854 << 0x18 | (uint)(local_854 >> 8) << 0x10) == 0x8060000)) &&
             ((((uint)local_852 << 0x18 | (uint)(local_852 >> 8) << 0x10) == 0x10000 &&
              (((uint)local_850 << 0x18 | (uint)(local_850 >> 8) << 0x10) == 0x8000000)))) {
            cVar1 = local_84e;
            if (local_84e == '\x06') {
              cVar1 = local_84d;
            }
            if (((local_84e == '\x06' && cVar1 == '\x04') &&
                (((uint)local_84c << 0x18 | (uint)(local_84c >> 8) << 0x10) == 0x20000)) &&
               (((local_844 << 0x18 | (local_844 >> 8 & 0xff) << 0x10 |
                  (local_844 >> 0x10 & 0xff) << 8 | local_844 >> 0x18) == param_2 &&
                ((local_83a << 0x18 | (local_83a >> 8 & 0xff) << 0x10 |
                  (local_83a >> 0x10 & 0xff) << 8 | local_83a >> 0x18) == *(uint *)(param_1 + 8)))))
            {
              memcpy(param_3,auStack_84a,6);
              if ((((*param_3 != '\0') || (param_3[1] != '\0')) || (param_3[2] != '\0')) ||
                 ((param_3[3] != '\0' || (param_3[4] != '\0')))) {
                return 1;
              }
              if (param_3[5] != '\0') {
                return 1;
              }
            }
          }
        }
        else {
LAB_1000ef98:
          iVar2 = Ram40010800;
          if ((iVar2 == 0x50414d57) && (iVar2 = Ram40010804, iVar2 != 0)) {
            uVar5 = Ram40010808;
            bVar8 = 0xb < uVar5;
            if (bVar8) {
              uVar5 = Ram40010808;
            }
            if ((bVar8 && 0x9f < uVar5) && (pcVar3 = (code *)UINT_4001089c, pcVar3 != (code *)0x0))
            {
              (*pcVar3)();
            }
          }
        }
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
      iVar4 = iVar4 + 1;
    } while (iVar4 != 3);
    format = str_10023008;
  }
LAB_1000f140:
  pf_varargs_10023fa4___(param_4,param_5,format);
  return 0;
}

#undef DAT_10023f69
#undef DAT_10023f6f
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef Ram40010800
#undef Ram40010804
#undef Ram40010808
#undef UINT_4001089c
#undef UINT_40010928
#undef UINT_4001092c
#undef str_10022ff8
#undef str_10023008
#undef str_10023014
#undef str_1002302d
#undef auStack_84a
#undef auStack_5a
#undef auStack_4a
#undef auStack_40
#undef local_854
#undef local_852
#undef local_850
#undef local_84e
#undef local_84d
#undef local_84c
#undef local_844
#undef local_83a
#undef local_60
#undef local_54
#undef local_50
#undef local_4c
#undef local_44
#undef local_3a
#undef local_39
#undef local_38
#undef local_37
#undef auStack_860

#undef DAT_10022ca6
#define DAT_10022ca6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x25eU)))
#undef DAT_10022d80
#define DAT_10022d80 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x338U)))
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
#undef str_10022bde
#define str_10022bde (*(char (*)[1])(((uintptr_t)pf_module_state + 0x196U)))
#undef str_10022dba
#define str_10022dba (*(char (*)[1])(((uintptr_t)pf_module_state + 0x372U)))
#undef str_10022dc8
#define str_10022dc8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x380U)))
#undef str_100230ce
#define str_100230ce (*(char (*)[1])(((uintptr_t)pf_module_state + 0x686U)))
#define acStack_485c (*(char (*)[1536])(frame + 132))
#define auStack_425c (*(undefined1 (*)[504])(frame + 1668))
#define local_48c4 (*(int *)(frame + 28))
#define local_48c0 (*(char (*)[96])(frame + 32))
#define local_4860 (*(ulong *)(frame + 128))
#define local_4064 (*(int * *)(frame + 2172))
#define local_4060 (*(code * *)(frame + 2176))
#define local_405c (*(code * *)(frame + 2180))
#define auStack_4030 (*(undefined1 (*)[16394])(frame + 2224))
#define local_4058 (*(code * *)(frame + 2184))
#define local_4054 (*(code * *)(frame + 2188))
#define local_4050 (*(int *)(frame + 2192))
#define local_404c (*(int * *)(frame + 2196))
#define local_4048 (*(undefined1 *)(frame + 2200))
#define local_4044 (*(int *)(frame + 2204))
#define local_4040 (*(uint *)(frame + 2208))
#define local_403c (*(ushort *)(frame + 2212))
#define local_403a (*(ushort *)(frame + 2214))
#define local_4038 (*(int *)(frame + 2216))
#define local_4034 (*(undefined4 *)(frame + 2220))
#define local_26 (*(char *)(frame + 18618))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000f15c
 */

undefined4
recovered_1000f15c(int param_1,int param_2,uint param_3,uint param_4,void *param_5,int param_6,
                  char *param_7,char *param_8,undefined1 *param_9,uint param_10,uint *param_11,
                  char *param_12,ulong param_13,undefined *param_14,undefined4 param_15)

{
  unsigned char frame[18688] __attribute__((aligned(16))) = {0};

  code *pcVar1;
  int iVar2;
  ulong size;
  void *data;
  char *vararg2;
  char *vararg0;
  uint uVar3;
  uint uVar4;
  bool bVar5;

  if (param_11 != (uint *)0x0) {
    *param_11 = 0;
  }
  if (param_2 != 0) {
    iVar2 = param_1;
    if (param_5 != (void *)0x0) {
      iVar2 = param_6;
      local_48c4 = param_1;
    }
    if (param_5 != (void *)0x0 && iVar2 != 0) {
      *param_9 = 0;
      memset(&local_4044,0,0x4020);
      iVar2 = recovered_10010b48(&local_4044,param_2,param_3,param_4,param_5,param_12,param_13);
      if (iVar2 != 0) {
        memset(&local_4050,0,0xc);
        local_4048 = 0;
        local_4050 = local_48c4;
        local_404c = &local_4044;
        memset(&local_4064,0,0x14);
        local_4054 = (code *)recovered_10011118;
        local_405c = (code *)recovered_10010f44;
        local_4060 = (code *)recovered_10010e4c;
        local_4058 = (code *)recovered_10010f64;
        local_4064 = &local_4050;
        winter_tls_client_init(auStack_425c,&local_4064,(char *)param_6);
        iVar2 = winter_tls_client_handshake(auStack_425c,param_12,param_13);
        if (iVar2 != 0) {
          vararg0 = &DAT_10022d80;
          if ((param_7 != (char *)0x0) && (*param_7 != '\0')) {
            vararg0 = param_7;
          }
          vararg2 = str_10022bde;
          if (param_8 != (char *)0x0) {
            vararg2 = param_8;
          }
          pf_varargs_10023fa4__4__4__4_
                    (acStack_485c,0x600,str_10022dc8,(uint)vararg0,param_6,(uint)vararg2);
          size = strlen(acStack_485c);
          iVar2 = winter_tls_write(auStack_425c,acStack_485c,size,param_12,param_13);
          if (iVar2 != 0) {
            iVar2 = Ram40010800;
            if ((iVar2 == 0x50414d57) && (iVar2 = Ram40010804, iVar2 != 0)) {
              uVar4 = Ram40010808;
              bVar5 = 0xb < uVar4;
              if (bVar5) {
                uVar4 = Ram40010808;
              }
              if (((bVar5 && 0x4f < uVar4) &&
                  (pcVar1 = (code *)UINT_4001084c, pcVar1 != (code *)0x0)) &&
                 (data = (*pcVar1)(0x4100), data != (void *)0x0)) {
                uVar4 = 0;
                local_4860 = 0;
                local_48c0[0] = '\0';
                iVar2 = winter_tls_read(auStack_425c,data,0x4100,&local_4860,local_48c0,0x60);
                while (iVar2 != 0) {
                  uVar3 = ~uVar4 + param_10;
                  if (local_4860 < ~uVar4 + param_10) {
                    uVar3 = local_4860;
                  }
                  if (uVar3 != 0) {
                    memcpy(param_9 + uVar4,data,uVar3);
                    uVar4 = uVar3 + uVar4;
                    param_9[uVar4] = 0;
                    if (param_14 != (undefined *)0x0) {
                      (*(code *)param_14)(param_15,param_9,uVar4);
                    }
                  }
                  if (param_10 <= uVar4 + 1) goto LAB_1000f568;
                  local_4860 = 0;
                  local_48c0[0] = '\0';
                  iVar2 = winter_tls_read(auStack_425c,data,0x4100,&local_4860,local_48c0,0x60);
                }
                if ((uVar4 == 0) && (local_48c0[0] != '\0')) {
                  pf_varargs_10023fa4__4_(param_12,param_13,&DAT_10022ca6,(uint)local_48c0);
                  uVar4 = 0;
                }
LAB_1000f568:
                iVar2 = Ram40010800;
                if ((iVar2 == 0x50414d57) && (iVar2 = Ram40010804, iVar2 != 0)) {
                  uVar3 = Ram40010808;
                  bVar5 = 0xb < uVar3;
                  if (bVar5) {
                    uVar3 = Ram40010808;
                  }
                  if ((bVar5 && 0x53 < uVar3) &&
                     (pcVar1 = (code *)UINT_40010850, pcVar1 != (code *)0x0)) {
                    (*pcVar1)(data);
                  }
                }
                if (local_26 == '\x01') {
                  recovered_100114dc(local_4044,auStack_4030,local_4040,(uint)local_403a,
                                     (uint)local_403c,local_4038,local_4034,0x11,(void *)0x0,0);
                  local_26 = '\0';
                  local_4038 = local_4038 + 1;
                }
                if (uVar4 != 0) {
                  if (param_11 == (uint *)0x0) {
                    return 1;
                  }
                  *param_11 = uVar4;
                  return 1;
                }
                if (param_12 == (char *)0x0) {
                  return 0;
                }
                if (*param_12 == '\0') {
                  pf_varargs_10023fa4___(param_12,param_13,str_100230ce);
                  return 0;
                }
                return 0;
              }
            }
            pf_varargs_10023fa4___(param_12,param_13,str_10022dba);
          }
        }
        if (local_26 == '\x01') {
          recovered_100114dc(local_4044,auStack_4030,local_4040,(uint)local_403a,(uint)local_403c,
                             local_4038,local_4034,0x11,(void *)0x0,0);
        }
      }
    }
  }
  return 0;
}

#undef DAT_10022ca6
#undef DAT_10022d80
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef Ram40010800
#undef Ram40010804
#undef Ram40010808
#undef UINT_4001084c
#undef UINT_40010850
#undef str_10022bde
#undef str_10022dba
#undef str_10022dc8
#undef str_100230ce
#undef acStack_485c
#undef auStack_425c
#undef local_48c4
#undef local_48c0
#undef local_4860
#undef local_4064
#undef local_4060
#undef local_405c
#undef auStack_4030
#undef local_4058
#undef local_4054
#undef local_4050
#undef local_404c
#undef local_4048
#undef local_4044
#undef local_4040
#undef local_403c
#undef local_403a
#undef local_4038
#undef local_4034
#undef local_26

#undef DAT_10022ca6
#define DAT_10022ca6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x25eU)))
#undef str_100231f1
#define str_100231f1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7a9U)))
#undef str_10023208
#define str_10023208 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7c0U)))
#define auStack_5044 (*(undefined1 (*)[4096])(frame + 124))
#define local_50a4 (*(char (*)[96])(frame + 28))
#define auStack_4030 (*(undefined1 (*)[6])(frame + 4240))
#define local_4044 (*(int *)(frame + 4220))
#define auStack_402a (*(undefined1 (*)[16384])(frame + 4246))
#define local_4040 (*(uint *)(frame + 4224))
#define local_403c (*(ushort *)(frame + 4228))
#define local_403a (*(ushort *)(frame + 4230))
#define local_4038 (*(undefined4 *)(frame + 4232))
#define local_4034 (*(undefined4 *)(frame + 4236))
#define local_2a (*(ushort *)(frame + 20630))
#define local_28 (*(ushort *)(frame + 20632))
#define local_26 (*(char *)(frame + 20634))
#define local_25 (*(char *)(frame + 20635))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000f670
 */

undefined4
recovered_1000f670(char *param_1,uint param_2,uint param_3,void *param_4,char *param_5,
                  undefined1 *param_6,uint param_7,uint *param_8,char *param_9,ulong param_10,
                  undefined *param_11,undefined4 param_12)

{
  unsigned char frame[20704] __attribute__((aligned(16))) = {0};

  bool bVar1;
  char *pcVar2;
  int iVar3;
  ulong uVar4;
  bool bVar5;
  uint n;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;

  pcVar2 = param_1;
  if (param_8 != (uint *)0x0) {
    pcVar2 = (char *)0x0;
    *param_8 = 0;
  }
  if (param_1 == (char *)0x0) {
    return 0;
  }
  if (param_4 != (void *)0x0) {
    pcVar2 = param_5;
  }
  if (param_4 == (void *)0x0 || pcVar2 == (char *)0x0) {
    return 0;
  }
  *param_6 = 0;
  memset(&local_4044,0,0x4020);
  iVar3 = recovered_10010b48(&local_4044,(int)param_1,param_2,param_3,param_4,param_9,param_10);
  if (iVar3 == 0) {
    return 0;
  }
  uVar4 = strlen(param_5);
  if (uVar4 < 0x2001) {
    iVar3 = recovered_10011e6c(&local_4044,(int)param_5,uVar4,param_9,param_10);
    if (iVar3 != 0) {
      uVar9 = 0;
      bVar5 = false;
      while( true ) {
        uVar8 = (uint)local_28;
        uVar6 = (uint)local_2a;
        local_50a4[0] = '\0';
        if (uVar8 <= uVar6) break;
LAB_1000f7d8:
        n = uVar8 - uVar6;
        if (0xfff < n) {
          n = 0x1000;
        }
        memcpy(auStack_5044,auStack_402a + uVar6,n);
        local_2a = local_2a + (short)n;
        if (uVar8 == uVar6) goto LAB_1000f8f4;
        uVar6 = ~uVar9 + param_7;
        if (n < ~uVar9 + param_7) {
          uVar6 = n;
        }
        if (uVar6 != 0) {
          memcpy(param_6 + uVar9,auStack_5044,uVar6);
          uVar9 = uVar6 + uVar9;
          param_6[uVar9] = 0;
          bVar5 = true;
          if (param_11 != (undefined *)0x0) {
            (*(code *)param_11)(param_12,param_6,uVar9);
          }
        }
        if ((param_7 <= uVar9 + 1) || ((local_25 == '\x01' && (local_28 <= local_2a))))
        goto LAB_1000f938;
      }
      bVar1 = recovered_100118f4(&local_4044,local_50a4,0x60);
      if (bVar1) {
        uVar6 = (uint)local_2a;
        uVar8 = (uint)local_28;
        goto LAB_1000f7d8;
      }
LAB_1000f8f4:
      if (!bVar5 && local_50a4[0] != '\0') {
        pf_varargs_10023fa4__4_(param_9,param_10,&DAT_10022ca6,(uint)local_50a4);
        bVar5 = false;
      }
LAB_1000f938:
      if (param_8 != (uint *)0x0) {
        *param_8 = uVar9;
      }
      if (bVar5) {
        uVar7 = 1;
        if (local_26 != '\x01') {
          return 1;
        }
        goto LAB_1000f8ac;
      }
      pf_varargs_10023fa4___(param_9,param_10,str_10023208);
    }
  }
  else {
    pf_varargs_10023fa4___(param_9,param_10,str_100231f1);
  }
  uVar7 = 0;
  if (local_26 == '\0') {
    return 0;
  }
LAB_1000f8ac:
  recovered_100114dc(local_4044,auStack_4030,local_4040,(uint)local_403a,(uint)local_403c,local_4038
                     ,local_4034,0x11,(void *)0x0,0);
  return uVar7;
}

#undef DAT_10022ca6
#undef str_100231f1
#undef str_10023208
#undef auStack_5044
#undef local_50a4
#undef auStack_4030
#undef local_4044
#undef auStack_402a
#undef local_4040
#undef local_403c
#undef local_403a
#undef local_4038
#undef local_4034
#undef local_2a
#undef local_28
#undef local_26
#undef local_25

#undef DAT_1002321e
#define DAT_1002321e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7d6U)))
#undef DAT_10023223
#define DAT_10023223 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7dbU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000f98c
 */

int recovered_1000f98c(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;

  if (param_1 == 0) {
    pcVar1 = (char *)0x0;
  }
  else {
    pcVar1 = strstr((char *)param_1,&DAT_1002321e);
    if (pcVar1 != (char *)0x0) {
      return (int)(pcVar1 + 4);
    }
    pcVar1 = strstr((char *)param_1,&DAT_10023223);
  }
  if (pcVar1 != (char *)0x0) {
    pcVar1 = pcVar1 + 2;
  }
  return (int)pcVar1;
}

#undef DAT_1002321e
#undef DAT_10023223

#undef DAT_1002321e
#define DAT_1002321e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7d6U)))
#undef DAT_10023223
#define DAT_10023223 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7dbU)))
#undef str_10023226
#define str_10023226 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7deU)))
#undef str_10023238
#define str_10023238 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7f0U)))
#define local_e0 (*(char (*)[192])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000f9e4
 */

bool recovered_1000f9e4(byte *param_1)

{
  unsigned char frame[272] __attribute__((aligned(16))) = {0};

  char cVar1;
  char *pcVar2;
  ulong uVar3;
  ulong uVar4;
  ulong extraout_r1;
  uint extraout_r2 = 0;
  uint uVar5;
  byte *pbVar6;
  byte *pbVar7;
  uint uVar8;
  ulong uVar9;
  uint uVar10;
  byte *pbVar11;
  ulong uVar12;
  byte *pbVar13;
  bool bVar14;

  if (param_1 == (byte *)0x0) {
    pbVar7 = (byte *)0x0;
  }
  else {
    pcVar2 = strstr((char *)param_1,&DAT_1002321e);
    if (pcVar2 != (char *)0x0) {
      pbVar7 = (byte *)(pcVar2 + 4);
      goto LAB_1000fa4c;
    }
    pbVar7 = (byte *)strstr((char *)param_1,&DAT_10023223);
  }
  if (pbVar7 != (byte *)0x0) {
    pbVar7 = pbVar7 + 2;
  }
LAB_1000fa4c:
  uVar3 = strlen(str_10023226);
  uVar5 = extraout_r2;
  if (uVar3 != 0) {
    uVar5 = (uint)*param_1;
  }
  if ((uVar3 == 0 || uVar5 == 0) || ((pbVar7 != (byte *)0x0 && (pbVar7 <= param_1)))) {
    return false;
  }
  do {
    uVar9 = 0xffffffff;
    pbVar6 = param_1;
    while ((0xd < uVar5 || ((1 << (uVar5 & 0xff) & 0x2401U) == 0))) {
      pbVar6 = pbVar6 + 1;
      uVar9 = uVar9 + 1;
      uVar5 = (uint)*pbVar6;
    }
    if (param_1 < pbVar6) {
      uVar4 = 0;
      do {
        if (param_1[uVar4] == 0x3a) {
          if (uVar3 == uVar4) {
            pbVar11 = (byte *)str_10023226;
            uVar12 = uVar3;
            pbVar13 = param_1;
            goto LAB_1000fb14;
          }
          break;
        }
        uVar4 = uVar4 + 1;
        bVar14 = uVar9 != 0;
        uVar9 = uVar9 - 1;
      } while (bVar14);
    }
LAB_1000fb70:
    while (uVar5 == 10 || uVar5 == 0xd) {
      pbVar6 = pbVar6 + 1;
      uVar5 = (uint)*pbVar6;
    }
    if (uVar5 == 0) {
      return false;
    }
    param_1 = pbVar6;
    if ((pbVar7 != (byte *)0x0) && (pbVar7 <= pbVar6)) {
      return false;
    }
  } while( true );
LAB_1000fb14:
  uVar8 = (uint)*pbVar11;
  uVar10 = (uint)*pbVar13;
  if (uVar8 - 0x41 < 0x1a) {
    uVar8 = uVar8 | 0x20;
  }
  if (uVar10 - 0x41 < 0x1a) {
    uVar10 = uVar10 | 0x20;
  }
  if (uVar10 != uVar8) goto LAB_1000fb70;
  uVar12 = uVar12 - 1;
  pbVar11 = pbVar11 + 1;
  pbVar13 = pbVar13 + 1;
  if (uVar12 == 0) {
    pcVar2 = local_e0;
    if (0xbe < (int)uVar9) {
      uVar9 = 0xbf;
    }
    memcpy(pcVar2,param_1 + uVar4 + 1,uVar9);
    pcVar2[uVar9] = '\0';
    uVar9 = strlen(str_10023238);
    uVar3 = extraout_r1;
    cVar1 = '\0';
    if (uVar9 != 0) {
      uVar3 = uVar9;
      cVar1 = local_e0[0];
    }
    if (uVar9 == 0 || cVar1 == '\0') {
      return false;
    }
    goto LAB_1000fbec;
  }
  goto LAB_1000fb14;
LAB_1000fbec:
  uVar9 = 0;
  while (uVar5 = (uint)(byte)pcVar2[uVar9], uVar5 != 0) {
    uVar8 = (uint)(byte)str_10023238[uVar9];
    if (uVar8 - 0x41 < 0x1a) {
      uVar8 = uVar8 | 0x20;
    }
    if (uVar5 - 0x41 < 0x1a) {
      uVar5 = uVar5 | 0x20;
    }
    if (uVar5 != uVar8) break;
    uVar9 = uVar9 + 1;
    if (uVar3 == uVar9) {
      return true;
    }
  }
  if (uVar3 == uVar9) {
    return uVar3 == uVar9;
  }
  pcVar2 = pcVar2 + 1;
  if (*pcVar2 == '\0') {
    return uVar3 == uVar9;
  }
  goto LAB_1000fbec;
}

#undef DAT_1002321e
#undef DAT_10023223
#undef str_10023226
#undef str_10023238
#undef local_e0

#undef str_10023240
#define str_10023240 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7f8U)))
#undef str_10023259
#define str_10023259 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x811U)))
#undef str_10023275
#define str_10023275 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x82dU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000fc4c
 */

undefined4
recovered_1000fc4c(int param_1,uint param_2,int param_3,int param_4,int *param_5,char *param_6,
                  ulong param_7)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  char *format;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  ulong n;
  int iVar6;
  uint uVar7;
  int iVar8;

  if (param_5 != (int *)0x0) {
    *param_5 = 0;
  }
  if (param_2 == 0) {
LAB_1000fe88:
    format = str_10023259;
LAB_1000fea4:
    pf_varargs_10023fa4___(param_6,param_7,format);
    return 0;
  }
  iVar3 = 0;
  uVar7 = 0;
LAB_1000fc9c:
  iVar6 = 0;
  uVar5 = uVar7;
  while( true ) {
    cVar1 = *(char *)(param_1 + uVar5);
    iVar8 = (int)cVar1;
    if (cVar1 != '\r' && cVar1 != '\n') break;
    uVar5 = uVar5 + 1;
    iVar6 = iVar6 + 1;
    if (param_2 <= uVar5) goto LAB_1000fe98;
  }
  if (uVar5 < param_2) {
    if ((byte)(cVar1 - 0x30U) < 10) {
      n = iVar8 - 0x30;
    }
    else if ((byte)(cVar1 + 0x9fU) < 6) {
      n = iVar8 - 0x57;
    }
    else {
      if (5 < (byte)(cVar1 + 0xbfU)) goto LAB_1000fe98;
      n = iVar8 - 0x37;
    }
    if (-1 < (int)n) {
      if (param_2 - 1 != uVar5) {
        uVar5 = uVar5 + 1;
        do {
          cVar1 = *(char *)(param_1 + uVar5);
          iVar8 = (int)cVar1;
          uVar4 = iVar8 - 0x30;
          if (9 < (uVar4 & 0xff)) {
            if ((byte)(cVar1 + 0x9fU) < 6) {
              uVar4 = iVar8 - 0x57;
            }
            else {
              if (5 < (byte)(cVar1 + 0xbfU)) goto LAB_1000fda4;
              uVar4 = iVar8 - 0x37;
            }
          }
          if ((int)uVar4 < 0) goto LAB_1000fda4;
          uVar5 = uVar5 + 1;
          n = uVar4 + n * 0x10;
          iVar6 = iVar6 + 1;
          if (param_2 == uVar5) break;
        } while( true );
      }
      goto LAB_1000fe88;
    }
  }
LAB_1000fe98:
  format = str_10023240;
  goto LAB_1000fea4;
LAB_1000fda4:
  if (param_2 <= uVar5) goto LAB_1000fe88;
  while (iVar8 = param_1 + uVar7 + iVar6, *(char *)(iVar8 + 1) != '\n') {
    iVar6 = iVar6 + 1;
    if ((param_2 - 1) - uVar7 == iVar6) goto LAB_1000fe88;
  }
  if (n == 0) {
    if (param_5 == (int *)0x0) {
      return 1;
    }
    *param_5 = iVar3;
    return 1;
  }
  if (((param_2 - 2) - uVar7) - iVar6 < n) goto LAB_1000fe88;
  if ((uint)(param_4 - iVar3) < n) {
    format = str_10023275;
    goto LAB_1000fea4;
  }
  memmove((void *)(param_3 + iVar3),(void *)(iVar8 + 2),n);
  iVar8 = uVar7 + n;
  uVar7 = iVar8 + iVar6 + 2;
  if (uVar7 < param_2) {
    iVar2 = iVar8 + 2;
    if (*(char *)(iVar8 + param_1 + 2 + iVar6) == '\r') {
      iVar2 = iVar8 + 3;
    }
    uVar7 = iVar2 + iVar6;
  }
  if ((uVar7 < param_2) && (*(char *)(param_1 + uVar7) == '\n')) {
    uVar7 = uVar7 + 1;
  }
  iVar3 = n + iVar3;
  if (param_2 <= uVar7) goto LAB_1000fe88;
  goto LAB_1000fc9c;
}

#undef str_10023240
#undef str_10023259
#undef str_10023275

#undef str_1002328f
#define str_1002328f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x847U)))
#undef str_1002329e
#define str_1002329e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x856U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000fee4
 */

void recovered_1000fee4(char *param_1,undefined1 *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  char *pcVar2;
  int iVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;

  *param_2 = 0;
  uVar1 = strlen(str_1002328f);
  if (param_1 != (char *)0x0 && uVar1 != 0) {
    if (*param_1 == '\0') goto LAB_1000ffa4;
    pcVar2 = param_1;
    do {
      uVar4 = 0;
      while (uVar5 = (uint)(byte)pcVar2[uVar4], uVar5 != 0) {
        uVar6 = (uint)(byte)str_1002328f[uVar4];
        if (uVar6 - 0x41 < 0x1a) {
          uVar6 = uVar6 | 0x20;
        }
        if (uVar5 - 0x41 < 0x1a) {
          uVar5 = uVar5 | 0x20;
        }
        if (uVar5 != uVar6) break;
        uVar4 = uVar4 + 1;
        if (uVar1 == uVar4) goto LAB_1000fffc;
      }
      if (uVar1 == uVar4) {
LAB_1000fffc:
        param_1 = pcVar2 + 1;
        goto LAB_10010000;
      }
      pcVar2 = pcVar2 + 1;
    } while (*pcVar2 != '\0');
  }
  if (param_1 == (char *)0x0) {
    return;
  }
LAB_1000ffa4:
  uVar5 = 99;
  iVar3 = 0;
  do {
    uVar6 = (uint)(byte)param_1[-iVar3];
    if (uVar6 == 0) {
      return;
    }
    if (uVar5 - 0x41 < 0x1a) {
      uVar5 = uVar5 | 0x20;
    }
    if (uVar6 - 0x41 < 0x1a) {
      uVar6 = uVar6 | 0x20;
    }
    if (uVar6 != uVar5) {
      return;
    }
    bVar7 = iVar3 != -0xc;
    uVar5 = (uint)(byte)str_1002329e[1 - iVar3];
    iVar3 = iVar3 + -1;
  } while (bVar7);
LAB_10010000:
  pcVar2 = strchr(param_1,0x3a);
  if (pcVar2 == (char *)0x0) {
    return;
  }
  pcVar2 = pcVar2 + 2;
  while (uVar5 = (uint)(byte)pcVar2[-1], uVar5 == 9 || uVar5 == 0x20) {
    pcVar2 = pcVar2 + 1;
  }
  for (iVar3 = 0; ((0xd < uVar5 || ((1 << uVar5 & 0x2401U) == 0)) && (iVar3 != 0x5f));
      iVar3 = iVar3 + 1) {
    param_2[iVar3] = (char)uVar5;
    uVar5 = (uint)(byte)pcVar2[iVar3];
  }
  param_2[iVar3] = 0;
  return;
}

#undef str_1002328f
#undef str_1002329e

#undef DAT_10023f63
#define DAT_10023f63 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x151bU)))
#define local_160 (*(undefined4 *)(frame + 16))
#define local_15b (*(undefined1 *)(frame + 21))
#define auStack_15a (*(undefined1 (*)[6])(frame + 22))
#define local_154 (*(undefined2 *)(frame + 28))
#define local_152 (*(undefined1 *)(frame + 30))
#define local_150 (*(undefined1 *)(frame + 32))
#define local_14f (*(undefined1 *)(frame + 33))
#define local_14e (*(undefined1 *)(frame + 34))
#define local_14d (*(undefined1 *)(frame + 35))
#define local_14a (*(undefined2 *)(frame + 38))
#define local_68 (*(undefined4 *)(frame + 264))
#define auStack_138 (*(undefined1 (*)[208])(frame + 56))
#define local_64 (*(undefined2 *)(frame + 268))
#define local_61 (*(undefined2 *)(frame + 271))
#define local_58 (*(undefined2 *)(frame + 280))
#define uStack_62 (*(undefined1 *)(frame + 270))
#define local_28 (*(uint (*)[2])(frame + 328))
#define uStack_5f (*(undefined1 *)(frame + 273))
#define auStack_5e (*(undefined1 (*)[6])(frame + 274))
#define auStack_56 (*(undefined1 (*)[4])(frame + 282))
#define uStack_52 (*(undefined2 *)(frame + 286))
#define auStack_50 (*(undefined1 (*)[40])(frame + 288))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10010074
 */

bool recovered_10010074(int param_1,int param_2,uint param_3,uint param_4)

{
  unsigned char frame[400] __attribute__((aligned(16))) = {0};

  bool bVar1;
  int iVar2;
  undefined4 uVar3;

  local_160 = 0x33060301;
  memset(&local_154,0,300);
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  local_152 = 6;
  local_154 = 0x101;
  local_14a = 0x80;
  local_14e = (undefined1)((uint)uVar3 >> 8);
  local_14f = (undefined1)((uint)uVar3 >> 0x10);
  local_150 = (undefined1)((uint)uVar3 >> 0x18);
  local_14d = (undefined1)uVar3;
  memcpy(auStack_138,(void *)(param_1 + 2),6);
  local_68 = 0x63538263;
  local_15b = 1;
  memcpy(auStack_15a,(void *)(param_1 + 2),6);
  local_64 = 0x135;
  local_28[0] = CONCAT31(PF_PART3(local_28[0], 1),(char)param_2);
  memcpy(&uStack_62,local_28,1);
  local_61 = 0x73d;
  memcpy(&uStack_5f,&local_15b,7);
  iVar2 = 0xc;
  if (param_2 == 3) {
    if (param_3 == 0) {
      return false;
    }
    local_58 = 0x432;
    local_28[0] = param_3 << 0x18 | (param_3 >> 8 & 0xff) << 0x10 | (param_3 >> 0x10 & 0xff) << 8 |
                  param_3 >> 0x18;
    memcpy(auStack_56,local_28,4);
    if (param_4 == 0) {
      iVar2 = 0x12;
    }
    else {
      uStack_52 = 0x436;
      local_28[0] = param_4 << 0x18 | (param_4 >> 8 & 0xff) << 0x10 | (param_4 >> 0x10 & 0xff) << 8
                    | param_4 >> 0x18;
      memcpy(auStack_50,local_28,4);
      iVar2 = 0x18;
    }
  }
  *(undefined2 *)(auStack_138 + iVar2 + 0xd4) = 0x437;
  memcpy(auStack_5e + iVar2 + -4,&local_160,4);
  auStack_5e[iVar2] = 0xff;
  bVar1 = recovered_100106c0(param_1,&DAT_10023f63,0,0xffffffff,0x44,0x43,&local_154,300);
  return bVar1;
}

#undef DAT_10023f63
#undef local_160
#undef local_15b
#undef auStack_15a
#undef local_154
#undef local_152
#undef local_150
#undef local_14f
#undef local_14e
#undef local_14d
#undef local_14a
#undef local_68
#undef auStack_138
#undef local_64
#undef local_61
#undef local_58
#undef uStack_62
#undef local_28
#undef uStack_5f
#undef auStack_5e
#undef auStack_56
#undef uStack_52
#undef auStack_50

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
#undef UINT_4001089c
#define UINT_4001089c (*(uint *)(0x4001089cU))
#undef UINT_40010928
#define UINT_40010928 (*(uint *)(0x40010928U))
#define local_81e (*(uint (*)[6])(frame + 82))
#define local_38 (*(uint *)(frame + 2104))
#define local_30 (*(uint *)(frame + 2112))
#define local_2c (*(uint *)(frame + 2116))
#define local_28 (*(uint *)(frame + 2120))
#define auStack_838 (*(undefined1 (*)[12])(frame + 56))
#define abStack_822 (*(byte (*)[2])(frame + 78))
#define auStack_820 (*(undefined1 (*)[2])(frame + 80))
#define auStack_806 (*(undefined1 (*)[208])(frame + 106))
#define acStack_736 (*(char (*)[1790])(frame + 314))
#define uStack_34 (*(uint *)(frame + 2108))
#define local_858 (*(uint *)(frame + 24))
#define local_82c (*(ushort *)(frame + 68))
#define local_82a (*(byte (*)[2])(frame + 70))
#define local_828 (*(ushort (*)[3])(frame + 72))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10010254
 */

bool recovered_10010254(int param_1,uint param_2,undefined8 *param_3)

{
  unsigned char frame[2192] __attribute__((aligned(16))) = {0};

  byte bVar1;
  char cVar2;
  ushort uVar3;
  code *pcVar4;
  uint uVar5;
  uint uVar6;
  byte *pbVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;

  bVar14 = true;
  uVar11 = 0;
  do {
    local_38 = 0;
    iVar8 = Ram40010800;
    if ((iVar8 == 0x50414d57) && (iVar8 = Ram40010804, iVar8 != 0)) {
      uVar6 = Ram40010808;
      bVar13 = 0xb < uVar6;
      if (bVar13) {
        uVar6 = Ram40010808;
      }
      if ((!bVar13 || uVar6 < 300) || (pcVar4 = (code *)UINT_40010928, pcVar4 == (code *)0x0))
      goto LAB_100102fc;
      uVar5 = (*pcVar4)(auStack_838,0x800,&local_38);
      uVar6 = 0;
      if (uVar5 != 0) {
        uVar6 = local_38;
      }
      if (uVar5 == 0 || uVar6 < 0xe) goto LAB_100102fc;
      if (((param_3 != (undefined8 *)0x0) && (0x8c < uVar6 >> 1)) &&
         (((uint)local_82c << 0x18 | (uint)(local_82c >> 8) << 0x10) == 0x8000000)) {
        uVar5 = local_82a[0] & 0xf0;
        bVar13 = uVar5 == 0x40;
        if (bVar13) {
          uVar5 = (uint)abStack_822[1];
        }
        if (bVar13 && uVar5 == 0x11) {
          uVar5 = local_82a[0] & 0xf;
          uVar9 = uVar5 * 4;
          if (0x13 < uVar9) {
            uVar12 = (local_828[0] & 0xff) << 8 | (uint)(local_828[0] >> 8);
            bVar15 = uVar12 <= uVar9 + 8;
            bVar13 = uVar9 + 8 == uVar12;
            if (!bVar15 || bVar13) {
              uVar10 = (((uint)local_828[0] << 0x18 | (uint)(local_828[0] >> 8) << 0x10) >> 0x10) +
                       0xe;
              bVar15 = uVar6 <= uVar10;
              bVar13 = uVar10 == uVar6;
            }
            if (((!bVar15 || bVar13) &&
                (((uint)*(ushort *)(local_82a + uVar9) << 0x18 |
                 (uint)(*(ushort *)(local_82a + uVar9) >> 8) << 0x10) == 0x430000)) &&
               (((uint)local_828[uVar5 * 2] << 0x18 | (uint)(local_828[uVar5 * 2] >> 8) << 0x10) ==
                0x440000)) {
              uVar3 = local_828[uVar5 * 2 + 1];
              uVar6 = (uVar3 & 0xff) << 8 | (uint)(uVar3 >> 8);
              if (((7 < uVar6) &&
                  (uVar9 + (((uint)uVar3 << 0x18 | (uint)(uVar3 >> 8) << 0x10) >> 0x10) <= uVar12))
                 && (uVar6 = uVar6 - 8, 0xef < uVar6)) {
                pbVar7 = abStack_822 + uVar9;
                bVar1 = *pbVar7;
                bVar13 = bVar1 == 2;
                if (bVar13) {
                  bVar1 = abStack_822[uVar9 + 1];
                }
                if ((((bVar13 && bVar1 == 1) && (5 < (byte)auStack_820[uVar9])) &&
                    (uVar12 = local_81e[uVar5],
                    (uVar12 << 0x18 | (uVar12 >> 8 & 0xff) << 0x10 | (uVar12 >> 0x10 & 0xff) << 8 |
                    uVar12 >> 0x18) == *(uint *)(param_1 + 0x1c))) &&
                   (iVar8 = memcmp(auStack_806 + uVar9,(void *)(param_1 + 2),6),
                   iVar8 == 0)) {
                  cVar2 = acStack_736[uVar9];
                  bVar13 = cVar2 == 'c';
                  if (bVar13) {
                    cVar2 = acStack_736[uVar9 + 1];
                  }
                  if (bVar13 && cVar2 == -0x7e) {
                    cVar2 = acStack_736[uVar9 + 2];
                    bVar13 = cVar2 == 'S';
                    if (bVar13) {
                      cVar2 = acStack_736[uVar9 + 3];
                    }
                    if (bVar13 && cVar2 == 'c') {
                      local_858 = 0;
                      memset(&local_38,0,0x14);
                      uVar5 = local_81e[uVar5 + 3];
                      uVar5 = uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 |
                              (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18;
                      local_28 = local_81e[0] << 0x18 | (local_81e[0] >> 8 & 0xff) << 0x10 |
                                 (local_81e[0] >> 0x10 & 0xff) << 8 | local_81e[0] >> 0x18;
                      if (uVar6 != 0xf0) {
                        local_858 = 0;
                        uVar9 = 0xf0;
                        do {
                          bVar1 = pbVar7[uVar9];
                          uVar12 = uVar9 + 1;
                          if (bVar1 != 0) {
                            if (bVar1 == 0xff) break;
                            if (uVar6 <= uVar12) goto LAB_100102b0;
                            iVar8 = uVar9 + 2;
                            uVar9 = (uint)pbVar7[uVar12];
                            uVar12 = iVar8 + uVar9;
                            if (uVar6 < uVar12) goto LAB_100102b0;
                            if (bVar1 < 6) {
                              if (bVar1 == 1) {
                                if (3 < uVar9) {
                                  uVar9 = *(uint *)(pbVar7 + iVar8);
                                  uStack_34 = uVar9 << 0x18 | (uVar9 >> 8 & 0xff) << 0x10 |
                                              (uVar9 >> 0x10 & 0xff) << 8 | uVar9 >> 0x18;
                                }
                              }
                              else if ((bVar1 == 3) && (3 < uVar9)) {
                                uVar9 = *(uint *)(pbVar7 + iVar8);
                                local_30 = uVar9 << 0x18 | (uVar9 >> 8 & 0xff) << 0x10 |
                                           (uVar9 >> 0x10 & 0xff) << 8 | uVar9 >> 0x18;
                              }
                            }
                            else if (bVar1 == 6) {
                              if (3 < uVar9) {
                                uVar9 = *(uint *)(pbVar7 + iVar8);
                                local_2c = uVar9 << 0x18 | (uVar9 >> 8 & 0xff) << 0x10 |
                                           (uVar9 >> 0x10 & 0xff) << 8 | uVar9 >> 0x18;
                              }
                            }
                            else if (bVar1 == 0x36) {
                              if (3 < uVar9) {
                                uVar9 = *(uint *)(pbVar7 + iVar8);
                                local_28 = uVar9 << 0x18 | (uVar9 >> 8 & 0xff) << 0x10 |
                                           (uVar9 >> 0x10 & 0xff) << 8 | uVar9 >> 0x18;
                              }
                            }
                            else if ((bVar1 == 0x35) && (uVar9 != 0)) {
                              local_858 = (uint)pbVar7[iVar8];
                            }
                          }
                          uVar9 = uVar12;
                        } while (uVar12 < uVar6);
                      }
                      if ((local_858 == param_2) && (uVar5 != 0)) {
                        if (uStack_34 == 0) {
                          uStack_34 = 0xffffff00;
                        }
                        *param_3 = CONCAT44(uStack_34,uVar5);
                        param_3[1] = CONCAT44(local_2c,local_30);
                        *(uint *)(param_3 + 2) = local_28;
                        return bVar14;
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
LAB_100102fc:
      iVar8 = Ram40010800;
      if ((iVar8 == 0x50414d57) && (iVar8 = Ram40010804, iVar8 != 0)) {
        uVar6 = Ram40010808;
        bVar14 = 0xb < uVar6;
        if (bVar14) {
          uVar6 = Ram40010808;
        }
        if ((bVar14 && 0x9f < uVar6) && (pcVar4 = (code *)UINT_4001089c, pcVar4 != (code *)0x0)) {
          (*pcVar4)();
        }
      }
    }
LAB_100102b0:
    bVar14 = uVar11 < 0x144f;
    uVar11 = uVar11 + 1;
    if (uVar11 == 0x1450) {
      return false;
    }
  } while( true );
}

#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef Ram40010800
#undef Ram40010804
#undef Ram40010808
#undef UINT_4001089c
#undef UINT_40010928
#undef local_81e
#undef local_38
#undef local_30
#undef local_2c
#undef local_28
#undef auStack_838
#undef abStack_822
#undef auStack_820
#undef auStack_806
#undef acStack_736
#undef uStack_34
#undef local_858
#undef local_82c
#undef local_82a
#undef local_828

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
#undef UINT_4001092c
#define UINT_4001092c (*(uint *)(0x4001092cU))
#define auStack_824 (*(undefined1 (*)[6])(frame + 28))
#define auStack_81e (*(undefined1 (*)[6])(frame + 34))
#define auStack_816 (*(undefined1 (*)[20])(frame + 42))
#define local_818 (*(undefined2 *)(frame + 40))
#define local_802 (*(undefined1 *)(frame + 62))
#define auStack_7fa (*(undefined1 (*)[2010])(frame + 70))
#define local_801 (*(undefined1 *)(frame + 63))
#define local_800 (*(undefined1 *)(frame + 64))
#define local_7ff (*(undefined1 *)(frame + 65))
#define local_7fe (*(undefined1 *)(frame + 66))
#define local_7fd (*(undefined1 *)(frame + 67))
#define local_7fc (*(undefined2 *)(frame + 68))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100106c0
 */

bool recovered_100106c0(int param_1,void *param_2,uint param_3,uint param_4,undefined4 param_5,
                       undefined4 param_6,void *param_7,uint param_8)

{
  unsigned char frame[2144] __attribute__((aligned(16))) = {0};

  int iVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  bool bVar6;

  bVar5 = false;
  if (((param_2 != (void *)0x0) && (param_8 < 0x7d7)) && (param_7 != (void *)0x0 || param_8 == 0)) {
    memcpy(auStack_824,param_2,6);
    memcpy(auStack_81e,(void *)(param_1 + 2),6);
    uVar3 = (uint)*(ushort *)(param_1 + 0x20);
    if (uVar3 == 0) {
      uVar3 = 0x4700;
    }
    uVar4 = uVar3 + 1 & 0xffff;
    if (uVar4 != uVar3 + 1) {
      uVar4 = uVar3 + 2;
    }
    local_818 = 8;
    *(short *)(param_1 + 0x20) = (short)uVar4;
    recovered_10010848(auStack_816,param_8 + 0x1c & 0xffff,uVar4 & 0xffff,0x11,param_3,param_4);
    local_7fd = (undefined1)(param_8 + 8);
    local_7fc = 0;
    local_7fe = (undefined1)(param_8 + 8 >> 8);
    local_7ff = (undefined1)param_6;
    local_800 = (undefined1)((uint)param_6 >> 8);
    local_801 = (undefined1)param_5;
    local_802 = (undefined1)((uint)param_5 >> 8);
    if (param_8 != 0) {
      memcpy(auStack_7fa,param_7,param_8);
    }
    bVar5 = false;
    iVar1 = Ram40010800;
    if ((iVar1 == 0x50414d57) && (iVar1 = Ram40010804, iVar1 != 0)) {
      uVar3 = Ram40010808;
      bVar6 = 0xb < uVar3;
      if (bVar6) {
        uVar3 = Ram40010808;
      }
      if ((bVar6 && 0x12f < uVar3) && (pcVar2 = (code *)UINT_4001092c, pcVar2 != (code *)0x0)) {
        uVar3 = (*pcVar2)(auStack_824,param_8 + 0x2a);
        bVar5 = uVar3 != 0;
      }
    }
  }
  return bVar5;
}

#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef Ram40010800
#undef Ram40010804
#undef Ram40010808
#undef UINT_4001092c
#undef auStack_824
#undef auStack_81e
#undef auStack_816
#undef local_818
#undef local_802
#undef auStack_7fa
#undef local_801
#undef local_800
#undef local_7ff
#undef local_7fe
#undef local_7fd
#undef local_7fc

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10010848
 */

void recovered_10010848(undefined1 *param_1,int param_2,int param_3,uint param_4,uint param_5,
                       uint param_6)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  memset(param_1,0,0x14);
  param_1[8] = 0x40;
  *(undefined2 *)(param_1 + 6) = 0x40;
  param_1[0x12] = (char)(param_6 >> 8);
  param_1[0x11] = (char)(param_6 >> 0x10);
  param_1[4] = (char)((uint)param_3 >> 8);
  param_1[0xe] = (char)(param_5 >> 8);
  param_1[2] = (char)((uint)param_2 >> 8);
  param_1[0xd] = (char)(param_5 >> 0x10);
  *param_1 = 0x45;
  param_1[0xc] = (char)(param_5 >> 0x18);
  param_1[0x10] = (char)(param_6 >> 0x18);
  param_1[0x13] = (char)param_6;
  param_1[0xf] = (char)param_5;
  param_1[9] = (char)param_4;
  param_1[5] = (char)param_3;
  param_1[3] = (char)param_2;
  uVar1 = (param_4 | (param_5 >> 0x18) << 8) + (param_6 >> 0x18) * 0x100 + (uint)(byte)param_1[1] +
          param_2 + param_3 + (param_5 >> 0x10 & 0xff) +
          (((uint)*(ushort *)(param_1 + 10) << 0x18 | (uint)(*(ushort *)(param_1 + 10) >> 8) << 0x10
           ) >> 0x10) + (param_6 >> 0x10 & 0xff) + (param_5 & 0xffff) + (param_6 & 0xffff) + 0xc500;
  if (0xffff < uVar1) {
    do {
      uVar1 = (uVar1 >> 0x10) + (uVar1 & 0xffff);
    } while (uVar1 >> 0x10 != 0);
  }
  *(ushort *)(param_1 + 10) = (ushort)((~uVar1 & 0xff) << 8) | (ushort)(~uVar1 >> 8) & 0xff;
  return;
}


#undef EXT_0000000c
#define EXT_0000000c (*(uint8_t *)(0xcU))
#undef str_10022fbe
#define str_10022fbe (*(char (*)[1])(((uintptr_t)pf_module_state + 0x576U)))
#undef str_10022fc8
#define str_10022fc8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x580U)))
#undef str_10022fdf
#define str_10022fdf (*(char (*)[1])(((uintptr_t)pf_module_state + 0x597U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10010944
 */

bool recovered_10010944(ushort *param_1,ushort *param_2,uint param_3,uint *param_4,char *param_5)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ushort uVar1;
  char *format;
  uint uVar2;
  ushort *puVar3;
  ushort *puVar4;
  uint uVar5;
  uint uVar6;
  ushort *puVar7;
  uint uVar8;
  bool bVar9;
  bool bVar10;

  if (param_1 == (ushort *)0x0) {
    return false;
  }
  if (param_2 < &PrefetchAbort) {
    return false;
  }
  if (param_3 != ((uint)*param_1 << 0x18 | (uint)(*param_1 >> 8) << 0x10) >> 0x10) {
    return false;
  }
  if ((uint)(int)(char)param_1[1] < 0x80000000) {
    return false;
  }
  if ((*(byte *)((int)param_1 + 3) & 0xf) == 0) {
    uVar1 = param_1[2];
    if ((uVar1 & 0xff) == 0 && uVar1 >> 8 == 0) {
      puVar7 = (ushort *)&PrefetchAbort;
    }
    else {
      puVar7 = (ushort *)&PrefetchAbort;
      uVar6 = 0;
      do {
        uVar8 = 0;
        while( true ) {
          if (param_2 <= puVar7) goto LAB_10010b0c;
          uVar2 = (uint)*(byte *)((int)param_1 + (int)puVar7);
          puVar4 = (ushort *)((int)puVar7 + 1);
          if ((*(byte *)((int)param_1 + (int)puVar7) & 0xc0) != 0) break;
          if (uVar2 == 0) goto LAB_10010a1c;
          puVar7 = (ushort *)((int)puVar4 + uVar2);
          if ((param_2 < puVar7) || (bVar9 = 0x7f < uVar8, uVar8 = uVar8 + 1, bVar9))
          goto LAB_10010b0c;
        }
        if (((uVar2 & 0xc0) != 0xc0) || (param_2 <= puVar4)) goto LAB_10010b0c;
        puVar4 = puVar7 + 1;
LAB_10010a1c:
        puVar7 = puVar4 + 2;
        if (param_2 < puVar7) goto LAB_10010b0c;
        uVar6 = uVar6 + 1;
      } while (uVar6 < ((uVar1 & 0xff) << 8 | (uint)(uVar1 >> 8)));
    }
    uVar6 = (param_1[3] & 0xff) << 8 | (uint)(param_1[3] >> 8);
    if (uVar6 != 0) {
      uVar8 = 0;
      do {
        uVar2 = 0;
        while( true ) {
          if (param_2 <= puVar7) goto LAB_10010b0c;
          uVar5 = (uint)*(byte *)((int)param_1 + (int)puVar7);
          puVar4 = (ushort *)((int)puVar7 + 1);
          if ((*(byte *)((int)param_1 + (int)puVar7) & 0xc0) != 0) break;
          if (uVar5 == 0) goto LAB_10010aa4;
          puVar7 = (ushort *)((int)puVar4 + uVar5);
          if ((param_2 < puVar7) || (bVar9 = 0x7f < uVar2, uVar2 = uVar2 + 1, bVar9))
          goto LAB_10010b0c;
        }
        if (((uVar5 & 0xc0) != 0xc0) || (param_2 <= puVar4)) goto LAB_10010b0c;
        puVar4 = puVar7 + 1;
LAB_10010aa4:
        puVar3 = puVar4 + 5;
        bVar10 = param_2 <= puVar3;
        bVar9 = puVar3 == param_2;
        if (!bVar10 || bVar9) {
          puVar4 = (ushort *)((int)param_1 + (int)puVar4);
          uVar5 = (uint)puVar4[4];
          puVar7 = (ushort *)
                   ((int)puVar3 + ((uVar5 << 0x18 | (uint)(puVar4[4] >> 8) << 0x10) >> 0x10));
          bVar10 = param_2 <= puVar7;
          bVar9 = puVar7 == param_2;
        }
        if (bVar10 && !bVar9) goto LAB_10010b0c;
        if (((((uVar5 & 0xff) << 8 | uVar5 >> 8) == 4) &&
            ((ushort)(*puVar4 << 8 | *puVar4 >> 8) == 1)) &&
           ((ushort)(puVar4[1] << 8 | puVar4[1] >> 8) == 1)) {
          uVar6 = *(uint *)((int)param_1 + (int)puVar3);
          uVar6 = uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 | (uVar6 >> 0x10 & 0xff) << 8 |
                  uVar6 >> 0x18;
          *param_4 = uVar6;
          return uVar6 != 0;
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 < uVar6);
    }
    format = str_10022fdf;
  }
  else {
    format = str_10022fbe;
  }
LAB_10010b18:
  pf_varargs_10023fa4___(param_5,0x60,format);
  return false;
LAB_10010b0c:
  format = str_10022fc8;
  goto LAB_10010b18;
}

#undef EXT_0000000c
#undef str_10022fbe
#undef str_10022fc8
#undef str_10022fdf

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
#undef UINT_4001089c
#define UINT_4001089c (*(uint *)(0x4001089cU))
#undef UINT_40010928
#define UINT_40010928 (*(uint *)(0x40010928U))
#undef str_100230e5
#define str_100230e5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x69dU)))
#undef str_100230f9
#define str_100230f9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6b1U)))
#undef str_10023103
#define str_10023103 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6bbU)))
#undef str_10023117
#define str_10023117 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6cfU)))
#define local_831 (*(byte *)(frame + 31))
#define local_830 (*(uint *)(frame + 32))
#define local_82c (*(uint *)(frame + 36))
#define local_28 (*(uint (*)[2])(frame + 2088))
#define auStack_828 (*(undefined1 (*)[2048])(frame + 40))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10010b48
 */

undefined4
recovered_10010b48(int *param_1,int param_2,uint param_3,uint param_4,void *param_5,char *param_6,
                  ulong param_7)

{
  unsigned char frame[2160] __attribute__((aligned(16))) = {0};

  ushort uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint extraout_r2 = 0;
  char *pcVar8;
  void *unaff_r11;

  if (param_1 != (int *)0x0) {
    if (param_2 != 0) {
      unaff_r11 = param_5;
    }
    if (param_2 != 0 && unaff_r11 != (void *)0x0) {
      memset(param_1,0,0x4020);
      *(short *)(param_1 + 2) = (short)param_4;
      param_1[1] = param_3;
      *param_1 = param_2;
      memcpy(param_1 + 5,unaff_r11,6);
      uVar4 = (uint)*(ushort *)(param_2 + 0x24);
      if (uVar4 == 0) {
        uVar4 = 0x474c;
      }
      uVar7 = uVar4 + 1 & 0xffff;
      if (uVar7 != uVar4 + 1) {
        uVar7 = uVar4 + 2;
      }
      iVar6 = *(int *)(param_2 + 0x28);
      *(ushort *)(param_2 + 0x24) = (ushort)uVar7;
      *(ushort *)((int)param_1 + 10) = (ushort)uVar7 | 0xc000;
      uVar4 = iVar6 + 0x1fff;
      if (uVar4 < 2) {
        uVar4 = 1;
      }
      if (iVar6 == 0) {
        uVar4 = 0x474c6142;
      }
      *(uint *)(param_2 + 0x28) = uVar4;
      param_1[3] = uVar4;
      bVar3 = recovered_100114dc(param_2,unaff_r11,param_3,uVar7 & 0xffff | 0xc000,param_4,uVar4,0,2
                                 ,(void *)0x0,0);
      if (bVar3) {
        iVar6 = 0x1450;
        do {
          local_82c = 0;
          local_830 = 0;
          local_831 = 0;
          local_28[0] = 0;
          iVar5 = Ram40010800;
          if ((iVar5 == 0x50414d57) && (iVar5 = Ram40010804, iVar5 != 0)) {
            uVar4 = Ram40010808;
            bVar3 = 0xb < uVar4;
            if (bVar3) {
              uVar4 = Ram40010808;
            }
            if ((!bVar3 || uVar4 < 300) || (pcVar2 = (code *)UINT_40010928, pcVar2 == (code *)0x0))
            goto LAB_10010cb4;
            uVar7 = (*pcVar2)(auStack_828,0x800,local_28);
            uVar4 = extraout_r2;
            if (uVar7 != 0) {
              uVar4 = local_28[0];
            }
            if (uVar7 == 0 || uVar4 < 0xe) goto LAB_10010cb4;
            uVar1 = *(ushort *)((int)param_1 + 10);
            iVar5 = recovered_10011784(param_2,(int)auStack_828,uVar4,param_3,(uint)uVar1,param_4,
                                       &local_82c,&local_830,&local_831,(undefined4 *)0x0,
                                       (short *)0x0);
            if (iVar5 != 0) {
              if ((local_831 & 4) != 0) {
                pcVar8 = str_100230f9;
                goto LAB_10010e18;
              }
              if (((local_831 & 0x12) == 0x12) && (local_830 == param_1[3] + 1U)) {
                param_1[3] = local_830;
                param_1[4] = local_82c + 1;
                bVar3 = recovered_100114dc(param_2,param_5,param_3,(uint)uVar1,param_4,local_830,
                                           local_82c + 1,0x10,(void *)0x0,0);
                if (bVar3) {
                  *(undefined1 *)((int)param_1 + 0x401e) = 1;
                  return 1;
                }
                pcVar8 = str_10023117;
                goto LAB_10010dfc;
              }
            }
          }
          else {
LAB_10010cb4:
            iVar5 = Ram40010800;
            if ((iVar5 == 0x50414d57) && (iVar5 = Ram40010804, iVar5 != 0)) {
              uVar4 = Ram40010808;
              bVar3 = 0xb < uVar4;
              if (bVar3) {
                uVar4 = Ram40010808;
              }
              if ((bVar3 && 0x9f < uVar4) && (pcVar2 = (code *)UINT_4001089c, pcVar2 != (code *)0x0)
                 ) {
                (*pcVar2)();
              }
            }
          }
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
        pcVar8 = str_10023103;
LAB_10010e18:
        pf_varargs_10023fa4___(param_6,param_7,pcVar8);
      }
      else {
        pcVar8 = str_100230e5;
LAB_10010dfc:
        pf_varargs_10023fa4___(param_6,param_7,pcVar8);
      }
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
#undef UINT_4001089c
#undef UINT_40010928
#undef str_100230e5
#undef str_100230f9
#undef str_10023103
#undef str_10023117
#undef local_831
#undef local_830
#undef local_82c
#undef local_28
#undef auStack_828

#define local_28 (*(undefined4 * *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10010e4c
 */

undefined4 recovered_10010e4c(int param_1,int param_2,uint param_3,char *param_4,ulong param_5)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  bool bVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint uVar5;
  ushort *puVar6;
  uint uVar7;

  uVar2 = 0;
  puVar4 = (undefined4 *)0x0;
  if (param_1 != 0) {
    puVar4 = *(undefined4 **)(param_1 + 4);
    local_28 = puVar4;
  }
  if ((param_1 != 0 && puVar4 != (undefined4 *)0x0) &&
     (((param_2 != 0 || (param_3 == 0)) && (uVar2 = 1, param_3 != 0)))) {
    uVar7 = 0;
    puVar6 = (ushort *)((int)local_28 + 0x401a);
    uVar5 = (uint)*puVar6;
    do {
      uVar3 = (uint)*(ushort *)(local_28 + 0x1007);
      if (uVar3 <= (uVar5 & 0xffff)) {
        bVar1 = recovered_100118f4(local_28,param_4,param_5);
        if (!bVar1) {
          return 0;
        }
        uVar5 = (uint)*puVar6;
        uVar3 = (uint)*(ushort *)(local_28 + 0x1007);
      }
      uVar3 = uVar3 - (uVar5 & 0xffff);
      if (param_3 - uVar7 < uVar3) {
        uVar3 = param_3 - uVar7;
      }
      memcpy((void *)(param_2 + uVar7),(void *)((int)local_28 + (uVar5 & 0xffff) + 0x1a)
                         ,uVar3);
      uVar7 = uVar3 + uVar7;
      uVar5 = *puVar6 + uVar3;
      *puVar6 = (ushort)uVar5;
    } while (uVar7 < param_3);
    uVar2 = 1;
  }
  return uVar2;
}

#undef local_28

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10010f44
 */

void recovered_10010f44(int param_1,int param_2,uint param_3,char *param_4,ulong param_5)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;

  puVar1 = (undefined4 *)0x0;
  if (param_1 != 0) {
    puVar1 = *(undefined4 **)(param_1 + 4);
  }
  if (param_1 != 0 && puVar1 != (undefined4 *)0x0) {
    recovered_10011e6c(puVar1,param_2,param_3,param_4,param_5);
    return;
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
#undef UINT_40010968
#define UINT_40010968 (*(uint *)(0x40010968U))
#define auStack_38 (*(undefined1 (*)[8])(frame + 24))
#define iStack_2c (*(int *)(frame + 36))
#define iStack_28 (*(int *)(frame + 40))
#define local_30 (*(uint *)(frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10010f64
 */

bool recovered_10010f64(int *param_1,undefined1 *param_2,int param_3)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  bool bVar8;

  if (param_1 == (int *)0x0) {
    iVar7 = 0;
  }
  else {
    iVar7 = *param_1;
  }
  bVar3 = param_2 != (undefined1 *)0x0 || param_3 == 0;
  if (bVar3) {
    memset(auStack_38,0,0x18);
    iVar1 = Ram40010800;
    uVar6 = 0x474c5343;
    if ((iVar1 == 0x50414d57) && (iVar1 = Ram40010804, iVar1 != 0)) {
      uVar4 = Ram40010808;
      bVar8 = 0xb < uVar4;
      if (bVar8) {
        uVar4 = Ram40010808;
      }
      if (((bVar8 && 0x16b < uVar4) && (pcVar2 = (code *)UINT_40010968, pcVar2 != (code *)0x0)) &&
         (uVar4 = (*pcVar2)(auStack_38), uVar4 != 0)) {
        uVar6 = local_30 ^ iStack_2c * 0x3c6ef35f ^ iStack_28 * 0x19660d ^ 0x474c5343;
      }
    }
    if (iVar7 != 0) {
      uVar6 = *(int *)(iVar7 + 0x205bc0) * 0x19660d ^ *(int *)(iVar7 + 0x205bc4) * 0x3c6ef35f ^
              *(uint *)(iVar7 + 0x205bf0) ^ *(uint *)(iVar7 + 0x205bd0) ^
              ((uint)*(byte *)(iVar7 + 0x205bcb) << 0x10 | (uint)*(byte *)(iVar7 + 0x205bca) << 0x18
               | (uint)*(byte *)(iVar7 + 0x205bce) << 8 | (uint)*(byte *)(iVar7 + 0x205bcf)) ^ uVar6
      ;
    }
    if (param_3 != 0) {
      uVar4 = 0;
      do {
        uVar6 = uVar6 ^ uVar6 << 0xd;
        uVar5 = uVar4 & 0x18;
        uVar4 = uVar4 + 8;
        param_3 = param_3 + -1;
        uVar6 = uVar6 ^ uVar6 >> 0x11;
        uVar6 = uVar6 ^ uVar6 << 5;
        *param_2 = (char)(uVar6 >> uVar5);
        param_2 = param_2 + 1;
      } while (param_3 != 0);
    }
    if (iVar7 != 0) {
      *(uint *)(iVar7 + 0x205bf0) = *(uint *)(iVar7 + 0x205bf0) ^ uVar6;
    }
  }
  return bVar3;
}

#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef Ram40010800
#undef Ram40010804
#undef Ram40010808
#undef UINT_40010968
#undef auStack_38
#undef iStack_2c
#undef iStack_28
#undef local_30

#undef DAT_10022c1b
#define DAT_10022c1b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1d3U)))
#undef DAT_10022ca6
#define DAT_10022ca6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x25eU)))
#undef DAT_100231a1
#define DAT_100231a1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x759U)))
#undef DAT_100231ec
#define DAT_100231ec (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7a4U)))
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
#undef UINT_4001088c
#define UINT_4001088c (*(uint *)(0x4001088cU))
#undef str_10023165
#define str_10023165 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x71dU)))
#undef str_1002317d
#define str_1002317d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x735U)))
#undef str_100231a6
#define str_100231a6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x75eU)))
#undef str_100231ad
#define str_100231ad (*(char (*)[1])(((uintptr_t)pf_module_state + 0x765U)))
#undef str_100231c0
#define str_100231c0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x778U)))
#undef str_100231e4
#define str_100231e4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x79cU)))
#define local_230 (*(uint *)(frame + 32))
#define local_125 (*(char (*)[192])(frame + 299))
#define local_65 (*(byte (*)[69])(frame + 491))
#define acStack_225 (*(char (*)[256])(frame + 43))
#define local_234 (*(int *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10011118
 */

bool recovered_10011118(int param_1,byte *param_2,int param_3,int param_4,char *param_5,
                       ulong param_6)

{
  unsigned char frame[624] __attribute__((aligned(16))) = {0};

  byte bVar1;
  code *pcVar2;
  undefined1 uVar3;
  int iVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  byte *pbVar8;
  uint extraout_r2 = 0;
  char *vararg0;
  int iVar9;
  uint unaff_r10;
  bool bVar10;
  bool bVar11;

  uVar3 = (undefined1)param_1;
  pbVar8 = param_2;
  if (param_1 != 0) {
    pbVar8 = (byte *)(uint)*(byte *)(param_1 + 8);
    uVar3 = 1;
  }
  if (param_1 != 0 && pbVar8 != (byte *)0x0) {
    return (bool)uVar3;
  }
  if (param_3 == 0 || param_4 == 0) {
    pf_varargs_10023fa4___(param_5,param_6,str_10023165);
LAB_10011168:
    bVar10 = false;
  }
  else {
    iVar4 = 0;
    do {
      bVar1 = *(byte *)(param_3 + iVar4);
      local_65[iVar4 * 2] = str_100231c0[bVar1 >> 4];
      iVar9 = iVar4 * 2;
      iVar4 = iVar4 + 1;
      local_65[iVar9 + 1] = str_100231c0[bVar1 & 0xf];
    } while (iVar4 != 0x20);
    local_125[0] = '\0';
    local_65[0x40] = 0;
    uVar5 = strlen(local_125);
    if (uVar5 < 0xbf) {
      pf_varargs_10023fa4__4_(local_125 + uVar5,0xc0 - uVar5,&DAT_10022ca6,((uintptr_t)pf_module_state + 0x789U));
    }
    if (param_2 != (byte *)0x0) {
      unaff_r10 = (uint)*param_2;
    }
    pbVar8 = param_2;
    if (param_2 != (byte *)0x0 && unaff_r10 != 0) {
      do {
        uVar6 = (unaff_r10 & 0xdf) - 0x41;
        bVar10 = 0x19 < uVar6;
        if (bVar10) {
          uVar6 = unaff_r10 - 0x30;
        }
        if ((bVar10 && 9 < uVar6) && (1 < unaff_r10 - 0x2d)) {
          uVar5 = strlen(local_125);
          if (uVar5 < 0xbf) {
            unaff_r10 = 0x5f;
LAB_10011240:
            local_125[uVar5] = (char)unaff_r10;
            local_125[uVar5 + 1] = '\0';
          }
        }
        else {
          uVar5 = strlen(local_125);
          if (uVar5 < 0xbf) goto LAB_10011240;
        }
        unaff_r10 = (uint)pbVar8[1];
        pbVar8 = pbVar8 + 1;
      } while (unaff_r10 != 0);
      uVar5 = strlen(local_125);
      if (uVar5 < 0xbf) {
        vararg0 = &DAT_100231ec;
        goto LAB_100112cc;
      }
    }
    else {
      uVar5 = strlen(local_125);
      if (uVar5 < 0xbf) {
        vararg0 = str_100231e4;
LAB_100112cc:
        pf_varargs_10023fa4__4_(local_125 + uVar5,0xc0 - uVar5,&DAT_10022ca6,(uint)vararg0);
      }
    }
    memset(&local_234,0,0xc);
    iVar4 = Ram40010800;
    if ((iVar4 == 0x50414d57) && (iVar4 = Ram40010804, iVar4 != 0)) {
      uVar6 = Ram40010808;
      bVar10 = 0xb < uVar6;
      if (bVar10) {
        uVar6 = Ram40010808;
      }
      if (((bVar10 && 0x37 < uVar6) && (pcVar2 = (code *)UINT_40010834, pcVar2 != (code *)0x0)) &&
         (uVar6 = (*pcVar2)(local_125,&local_234), uVar6 != 0)) {
        uVar6 = extraout_r2;
        if (local_234 != 0) {
          uVar6 = local_230;
        }
        if (local_234 != 0 && uVar6 != 0) {
          if (0x3f < uVar6) {
            iVar4 = 0;
            do {
              iVar9 = 0;
              while( true ) {
                uVar7 = (uint)*(byte *)(local_234 + iVar9);
                if (uVar7 - 0x41 < 0x1a) {
                  uVar7 = uVar7 | 0x20;
                }
                if (uVar7 != local_65[iVar9]) break;
                iVar9 = iVar9 + 1;
                if (iVar9 == 0x40) {
                  return true;
                }
              }
              uVar7 = iVar4 + 0x41;
              local_234 = local_234 + 1;
              iVar4 = iVar4 + 1;
            } while (uVar7 <= uVar6);
          }
          pbVar8 = &DAT_100231a1;
          if (param_2 != (byte *)0x0) {
            pbVar8 = param_2;
          }
          pf_varargs_10023fa4__4_(param_5,param_6,str_1002317d,(uint)pbVar8);
          goto LAB_10011168;
        }
      }
    }
    iVar4 = Ram40010800;
    if ((iVar4 == 0x50414d57) && (iVar4 = Ram40010804, iVar4 != 0)) {
      uVar6 = Ram40010808;
      bVar10 = 0xb < uVar6;
      if (bVar10) {
        uVar6 = Ram40010808;
      }
      if ((bVar10 && 0x8f < uVar6) && (pcVar2 = (code *)UINT_4001088c, pcVar2 != (code *)0x0)) {
        (*pcVar2)(str_100231a6);
      }
    }
    pbVar8 = &DAT_10022c1b;
    if (param_2 != (byte *)0x0) {
      pbVar8 = param_2;
    }
    pf_varargs_10023fa4__4__4_(acStack_225,0x100,str_100231ad,(uint)pbVar8,(uint)local_65);
    uVar5 = strlen(acStack_225);
    iVar4 = Ram40010800;
    bVar10 = false;
    if ((iVar4 == 0x50414d57) && (iVar4 = Ram40010804, iVar4 != 0)) {
      uVar6 = Ram40010808;
      bVar11 = 0xb < uVar6;
      if (bVar11) {
        uVar6 = Ram40010808;
      }
      if ((bVar11 && 0x3b < uVar6) && (pcVar2 = (code *)UINT_40010838, pcVar2 != (code *)0x0)) {
        uVar6 = (*pcVar2)(local_125,acStack_225,uVar5);
        bVar10 = uVar6 != 0;
      }
    }
  }
  return bVar10;
}

#undef DAT_10022c1b
#undef DAT_10022ca6
#undef DAT_100231a1
#undef DAT_100231ec
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef Ram40010800
#undef Ram40010804
#undef Ram40010808
#undef UINT_40010834
#undef UINT_40010838
#undef UINT_4001088c
#undef str_10023165
#undef str_1002317d
#undef str_100231a6
#undef str_100231ad
#undef str_100231c0
#undef str_100231e4
#undef local_230
#undef local_125
#undef local_65
#undef acStack_225
#undef local_234

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
#undef UINT_4001092c
#define UINT_4001092c (*(uint *)(0x4001092cU))
#define local_7f2 (*(ushort *)(frame + 78))
#define local_7ee (*(undefined4 *)(frame + 82))
#define auStack_824 (*(undefined1 (*)[6])(frame + 28))
#define auStack_81e (*(undefined1 (*)[6])(frame + 34))
#define auStack_816 (*(undefined1 (*)[20])(frame + 42))
#define local_818 (*(undefined2 *)(frame + 40))
#define local_802 (*(undefined2 *)(frame + 62))
#define local_800 (*(undefined1 *)(frame + 64))
#define local_7ff (*(undefined1 *)(frame + 65))
#define local_7fe (*(undefined1 *)(frame + 66))
#define local_7fd (*(undefined1 *)(frame + 67))
#define local_7fc (*(undefined1 *)(frame + 68))
#define local_7fb (*(undefined1 *)(frame + 69))
#define local_7fa (*(undefined1 *)(frame + 70))
#define local_7f9 (*(undefined1 *)(frame + 71))
#define local_7f8 (*(undefined1 *)(frame + 72))
#define local_7f7 (*(undefined1 *)(frame + 73))
#define local_7f6 (*(undefined1 *)(frame + 74))
#define local_7f5 (*(byte *)(frame + 75))
#define local_7f4 (*(undefined2 *)(frame + 76))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100114dc
 */

bool recovered_100114dc(int param_1,void *param_2,uint param_3,undefined4 param_4,undefined4 param_5
                       ,undefined4 param_6,undefined4 param_7,byte param_8,void *param_9,
                       ulong param_10)

{
  unsigned char frame[2144] __attribute__((aligned(16))) = {0};

  code *pcVar1;
  ushort *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint n;
  int iVar7;
  bool bVar8;
  bool bVar9;

  iVar7 = 0x18;
  bVar8 = false;
  if ((param_8 & 2) == 0) {
    iVar7 = 0x14;
  }
  if ((param_1 != 0 && param_2 != (void *)0x0) && (param_9 != (void *)0x0 || param_10 == 0)) {
    uVar6 = iVar7 + param_10 + 0x14;
    uVar5 = uVar6 & 0xffff;
    if (uVar5 < 0x7f3) {
      n = iVar7 + param_10 & 0xffff;
      memcpy(auStack_824,param_2,6);
      memcpy(auStack_81e,(void *)(param_1 + 2),6);
      uVar3 = (uint)*(ushort *)(param_1 + 0x20);
      if (uVar3 == 0) {
        uVar3 = 0x4700;
      }
      uVar4 = uVar3 + 1 & 0xffff;
      if (uVar4 != uVar3 + 1) {
        uVar4 = uVar3 + 2;
      }
      local_818 = 8;
      *(short *)(param_1 + 0x20) = (short)uVar4;
      recovered_10010848(auStack_816,uVar5,uVar4 & 0xffff,6,*(uint *)(param_1 + 8),param_3);
      memset(&local_802,0,n);
      local_7f4 = 0x40;
      local_7f6 = (char)(iVar7 << 2);
      local_7f7 = (char)param_7;
      local_7f8 = (char)((uint)param_7 >> 8);
      local_7f9 = (char)((uint)param_7 >> 0x10);
      local_7fa = (char)((uint)param_7 >> 0x18);
      local_7fb = (char)param_6;
      local_7fc = (char)((uint)param_6 >> 8);
      local_7fd = (char)((uint)param_6 >> 0x10);
      local_7fe = (char)((uint)param_6 >> 0x18);
      local_7ff = (char)param_5;
      local_7f5 = param_8;
      local_800 = (char)((uint)param_5 >> 8);
      PF_PART1(local_802, 1) = (char)param_4;
      PF_PART1(local_802, 0) = (char)((uint)param_4 >> 8);
      if ((param_8 & 2) != 0) {
        local_7ee = 0xb4050402;
      }
      if (param_10 != 0) {
        iVar7 = 0x3a;
        if ((param_8 & 2) == 0) {
          iVar7 = 0x36;
        }
        memcpy(auStack_824 + iVar7,param_9,param_10);
      }
      uVar5 = (param_3 >> 0x10) + (param_3 & 0xffff) + n + (*(uint *)(param_1 + 8) >> 0x10) +
              (*(uint *)(param_1 + 8) & 0xffff) + 6;
      puVar2 = &local_802;
      for (; 1 < n; n = n - 2) {
        uVar5 = uVar5 + (((uint)*puVar2 << 0x18 | (uint)(*puVar2 >> 8) << 0x10) >> 0x10);
        puVar2 = puVar2 + 1;
      }
      if (n != 0) {
        uVar5 = uVar5 + (uint)(byte)*puVar2 * 0x100;
      }
      if (0xffff < uVar5) {
        do {
          uVar5 = (uVar5 >> 0x10) + (uVar5 & 0xffff);
        } while (uVar5 >> 0x10 != 0);
      }
      local_7f2 = (ushort)((~uVar5 & 0xff) << 8) | (ushort)(~uVar5 >> 8) & 0xff;
      iVar7 = Ram40010800;
      bVar8 = false;
      if ((iVar7 == 0x50414d57) && (iVar7 = Ram40010804, iVar7 != 0)) {
        uVar5 = Ram40010808;
        bVar9 = 0xb < uVar5;
        if (bVar9) {
          uVar5 = Ram40010808;
        }
        if ((bVar9 && 0x12f < uVar5) && (pcVar1 = (code *)UINT_4001092c, pcVar1 != (code *)0x0)) {
          uVar5 = (*pcVar1)(auStack_824,(uVar6 & 0xffff) + 0xe);
          bVar8 = uVar5 != 0;
        }
      }
    }
  }
  return bVar8;
}

#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef Ram40010800
#undef Ram40010804
#undef Ram40010808
#undef UINT_4001092c
#undef local_7f2
#undef local_7ee
#undef auStack_824
#undef auStack_81e
#undef auStack_816
#undef local_818
#undef local_802
#undef local_800
#undef local_7ff
#undef local_7fe
#undef local_7fd
#undef local_7fc
#undef local_7fb
#undef local_7fa
#undef local_7f9
#undef local_7f8
#undef local_7f7
#undef local_7f6
#undef local_7f5
#undef local_7f4

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10011784
 */

undefined4
recovered_10011784(int param_1,int param_2,uint param_3,uint param_4,uint param_5,uint param_6,
                  uint *param_7,uint *param_8,byte *param_9,undefined4 *param_10,short *param_11)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ushort uVar1;
  uint uVar2;
  ushort *puVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  bool bVar7;

  if (param_10 != (undefined4 *)0x0) {
    *param_10 = 0;
  }
  if (param_11 != (short *)0x0) {
    *param_11 = 0;
  }
  if (((param_1 != 0 && param_2 != 0) && (0x35 < param_3)) &&
     (((uint)*(ushort *)(param_2 + 0xc) << 0x18 | (uint)(*(ushort *)(param_2 + 0xc) >> 8) << 0x10)
      == 0x8000000)) {
    uVar4 = (uint)*(byte *)(param_2 + 0xe);
    uVar5 = uVar4 & 0xf0;
    bVar6 = uVar5 == 0x40;
    if (bVar6) {
      uVar5 = (uint)*(byte *)(param_2 + 0x17);
    }
    if (((bVar6 && uVar5 == 6) &&
        (uVar5 = *(uint *)(param_2 + 0x1a),
        (uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18)
        == param_4)) &&
       (uVar5 = *(uint *)(param_2 + 0x1e),
       (uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18)
       == *(uint *)(param_1 + 8))) {
      uVar4 = uVar4 << 2;
      uVar5 = uVar4 & 0xff;
      if (0x13 < uVar5) {
        uVar1 = *(ushort *)(param_2 + 0x10);
        uVar2 = (uVar4 & 0xff) + 0x14;
        uVar4 = (uVar1 & 0xff) << 8 | (uint)(uVar1 >> 8);
        bVar7 = uVar4 <= uVar2;
        bVar6 = uVar2 == uVar4;
        if (!bVar7 || bVar6) {
          uVar2 = (((uint)uVar1 << 0x18 | (uint)(uVar1 >> 8) << 0x10) >> 0x10) + 0xe;
          bVar7 = param_3 <= uVar2;
          bVar6 = uVar2 == param_3;
        }
        if (((!bVar7 || bVar6) &&
            (puVar3 = (ushort *)((byte *)(param_2 + 0xe) + uVar5),
            param_6 == ((uint)*puVar3 << 0x18 | (uint)(*puVar3 >> 8) << 0x10) >> 0x10)) &&
           (param_5 == ((uint)puVar3[1] << 0x18 | (uint)(puVar3[1] >> 8) << 0x10) >> 0x10)) {
          uVar2 = (uint)(byte)puVar3[6];
          bVar6 = 0x4f < uVar2;
          if (bVar6) {
            uVar4 = uVar4 - uVar5;
            uVar2 = (byte)((byte)puVar3[6] >> 2) & 0x3c;
          }
          if (bVar6 && uVar2 <= uVar4) {
            if (param_7 != (uint *)0x0) {
              uVar5 = *(uint *)(puVar3 + 2);
              *param_7 = uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 |
                         uVar5 >> 0x18;
            }
            if (param_8 != (uint *)0x0) {
              uVar5 = *(uint *)(puVar3 + 4);
              *param_8 = uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 |
                         uVar5 >> 0x18;
            }
            if (param_9 != (byte *)0x0) {
              *param_9 = *(byte *)((int)puVar3 + 0xd);
            }
            if (param_10 != (undefined4 *)0x0) {
              *param_10 = (byte *)((int)puVar3 + uVar2);
            }
            if (param_11 != (short *)0x0) {
              *param_11 = (short)uVar4 - (short)uVar2;
            }
            return 1;
          }
        }
      }
    }
  }
  return 0;
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
#undef UINT_4001089c
#define UINT_4001089c (*(uint *)(0x4001089cU))
#undef UINT_40010928
#define UINT_40010928 (*(uint *)(0x40010928U))
#undef str_100230f9
#define str_100230f9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6b1U)))
#undef str_1002312b
#define str_1002312b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6e3U)))
#undef str_10023141
#define str_10023141 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6f9U)))
#define local_83a (*(ushort *)(frame + 22))
#define local_838 (*(void * *)(frame + 24))
#define local_831 (*(byte *)(frame + 31))
#define local_830 (*(uint *)(frame + 32))
#define local_82c (*(uint *)(frame + 36))
#define local_28 (*(uint (*)[2])(frame + 2088))
#define auStack_828 (*(undefined1 (*)[2048])(frame + 40))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100118f4
 */

/* WARNING: Type propagation algorithm not settling */

bool recovered_100118f4(undefined4 *param_1,char *param_2,ulong param_3)

{
  unsigned char frame[2160] __attribute__((aligned(16))) = {0};

  char cVar1;
  ushort uVar2;
  ushort uVar3;
  code *pcVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint extraout_r2 = 0;
  uint extraout_r2_00 = 0;
  uint uVar8;
  char *format;
  ushort *puVar9;
  int iVar10;
  undefined4 uVar11;
  int iVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;

  bVar15 = false;
  if (param_1 == (undefined4 *)0x0) {
    return false;
  }
  puVar9 = (ushort *)((int)param_1 + 0x401a);
  if (*(char *)((int)param_1 + 0x401e) != '\x01') {
    return false;
  }
  if (*puVar9 < *(ushort *)(param_1 + 0x1007)) {
    return true;
  }
  iVar10 = 0;
  puVar9[0] = 0;
  puVar9[1] = 0;
  bVar13 = false;
LAB_10011988:
  local_82c = 0;
  local_830 = 0;
  local_831 = 0;
  local_838 = (void *)0x0;
  local_83a = 0;
  local_28[0] = 0;
  iVar6 = Ram40010800;
  if ((iVar6 == 0x50414d57) && (iVar6 = Ram40010804, iVar6 != 0)) {
    uVar8 = Ram40010808;
    bVar14 = 0xb < uVar8;
    if (bVar14) {
      uVar8 = Ram40010808;
    }
    if ((!bVar14 || uVar8 < 300) || (pcVar4 = (code *)UINT_40010928, pcVar4 == (code *)0x0))
    goto LAB_100119cc;
    uVar5 = (*pcVar4)(auStack_828,0x800,local_28);
    uVar8 = extraout_r2_00;
    if (uVar5 != 0) {
      uVar8 = local_28[0];
    }
    if (uVar5 == 0 || uVar8 < 0xe) goto LAB_100119cc;
    goto LAB_10011b04;
  }
LAB_100119cc:
  iVar6 = Ram40010800;
  if ((iVar6 == 0x50414d57) && (iVar6 = Ram40010804, iVar6 != 0)) {
    uVar8 = Ram40010808;
    bVar14 = 0xb < uVar8;
    if (bVar14) {
      uVar8 = Ram40010808;
    }
    if ((bVar14 && 0x9f < uVar8) && (pcVar4 = (code *)UINT_4001089c, pcVar4 != (code *)0x0)) {
      (*pcVar4)();
    }
  }
  if (bVar15) {
    bVar15 = true;
    if (!bVar13) {
      return true;
    }
    if (*(char *)((int)param_1 + 0x401e) != '\x01') {
      return true;
    }
    uVar11 = param_1[3];
    iVar10 = *param_1;
    uVar5 = param_1[1];
    uVar8 = param_1[4];
    uVar2 = *(ushort *)((int)param_1 + 10);
    uVar3 = *(ushort *)(param_1 + 2);
    goto LAB_10011d20;
  }
  if (iVar10 != 0x144f) {
    do {
      local_82c = 0;
      local_830 = 0;
      local_831 = 0;
      local_838 = (void *)0x0;
      local_83a = 0;
      local_28[0] = 0;
      iVar6 = Ram40010800;
      if ((iVar6 == 0x50414d57) && (iVar6 = Ram40010804, iVar6 != 0)) {
        uVar8 = Ram40010808;
        bVar15 = 0xb < uVar8;
        if (bVar15) {
          uVar8 = Ram40010808;
        }
        if ((bVar15 && 299 < uVar8) && (pcVar4 = (code *)UINT_40010928, pcVar4 != (code *)0x0)) {
          uVar5 = (*pcVar4)(auStack_828,0x800,local_28);
          uVar8 = extraout_r2;
          if (uVar5 != 0) {
            uVar8 = local_28[0];
          }
          if (uVar5 != 0 && 0xd < uVar8) goto code_r0x10011acc;
        }
      }
      iVar6 = Ram40010800;
      if ((iVar6 == 0x50414d57) && (iVar6 = Ram40010804, iVar6 != 0)) {
        uVar8 = Ram40010808;
        bVar15 = 0xb < uVar8;
        if (bVar15) {
          uVar8 = Ram40010808;
        }
        if ((bVar15 && 0x9f < uVar8) && (pcVar4 = (code *)UINT_4001089c, pcVar4 != (code *)0x0)) {
          (*pcVar4)();
        }
      }
      iVar10 = iVar10 + 1;
      if (iVar10 == 0x144f) break;
    } while( true );
  }
  goto LAB_10011ca0;
code_r0x10011acc:
  iVar10 = iVar10 + 1;
  bVar15 = false;
LAB_10011b04:
  uVar5 = param_1[1];
  iVar12 = *param_1;
  uVar2 = *(ushort *)((int)param_1 + 10);
  uVar3 = *(ushort *)(param_1 + 2);
  iVar6 = recovered_10011784(iVar12,(int)auStack_828,uVar8,uVar5,(uint)uVar2,(uint)uVar3,&local_82c,
                             &local_830,&local_831,&local_838,(short *)&local_83a);
  if (iVar6 != 0) {
    if ((local_831 & 4) != 0) {
      pf_varargs_10023fa4___(param_2,param_3,str_100230f9);
      *(undefined1 *)((int)param_1 + 0x401e) = 0;
      return false;
    }
    uVar8 = (uint)local_83a;
    if (uVar8 != 0) {
      uVar7 = param_1[4];
      if (local_82c == uVar7) {
        if (0x4000 - *(ushort *)(param_1 + 0x1007) < uVar8) {
          format = str_1002312b;
          goto LAB_10011cac;
        }
        memcpy((void *)((int)param_1 + *(ushort *)(param_1 + 0x1007) + 0x1a),local_838,
                           uVar8);
        uVar8 = (uint)local_83a + (uint)*(ushort *)(param_1 + 0x1007);
        iVar6 = param_1[4] + (uint)local_83a;
        *(short *)(param_1 + 0x1007) = (short)uVar8;
        param_1[4] = iVar6;
        if ((local_831 & 1) == 0) {
          bVar15 = true;
          bVar13 = true;
          if ((uVar8 & 0xffff) - 0x3a4d < 0x5b4) {
            recovered_10011e04(param_1);
            return true;
          }
          goto LAB_10011c74;
        }
        bVar15 = true;
        cVar1 = *(char *)((int)param_1 + 0x401e);
        *(undefined1 *)((int)param_1 + 0x401f) = 1;
        uVar8 = iVar6 + 1;
        param_1[4] = uVar8;
        goto joined_r0x10011dbc;
      }
      if ((local_82c < uVar7) && (*(char *)((int)param_1 + 0x401e) == '\x01')) {
        recovered_100114dc(iVar12,param_1 + 5,uVar5,(uint)uVar2,(uint)uVar3,param_1[3],uVar7,0x10,
                           (void *)0x0,0);
      }
    }
    if ((local_831 & 1) != 0) {
      uVar8 = param_1[4];
      *(undefined1 *)((int)param_1 + 0x401f) = 1;
      bVar13 = local_82c == uVar8;
      if (bVar13) {
        uVar8 = local_82c + 1;
      }
      cVar1 = *(char *)((int)param_1 + 0x401e);
      if (bVar13) {
        param_1[4] = uVar8;
      }
joined_r0x10011dbc:
      if (cVar1 != '\x01') {
        return bVar15;
      }
      iVar10 = *param_1;
      uVar5 = param_1[1];
      uVar11 = param_1[3];
      uVar2 = *(ushort *)((int)param_1 + 10);
      uVar3 = *(ushort *)(param_1 + 2);
LAB_10011d20:
      recovered_100114dc(iVar10,param_1 + 5,uVar5,(uint)uVar2,(uint)uVar3,uVar11,uVar8,0x10,
                         (void *)0x0,0);
      return bVar15;
    }
  }
LAB_10011c74:
  iVar10 = iVar10 + 1;
  if (iVar10 == 0x1450) {
    if (bVar15 != false) {
      if (bVar13) {
        recovered_10011e04(param_1);
        return true;
      }
      return true;
    }
LAB_10011ca0:
    format = str_10023141;
LAB_10011cac:
    pf_varargs_10023fa4___(param_2,param_3,format);
    return false;
  }
  goto LAB_10011988;
}

#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef Ram40010800
#undef Ram40010804
#undef Ram40010808
#undef UINT_4001089c
#undef UINT_40010928
#undef str_100230f9
#undef str_1002312b
#undef str_10023141
#undef local_83a
#undef local_838
#undef local_831
#undef local_830
#undef local_82c
#undef local_28
#undef auStack_828

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10011e04
 */

void recovered_10011e04(undefined4 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (*(char *)((int)param_1 + 0x401e) == '\x01') {
    recovered_100114dc(*param_1,param_1 + 5,param_1[1],(uint)*(ushort *)((int)param_1 + 10),
                       (uint)*(ushort *)(param_1 + 2),param_1[3],param_1[4],0x10,(void *)0x0,0);
    return;
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
#undef UINT_4001089c
#define UINT_4001089c (*(uint *)(0x4001089cU))
#undef str_10023155
#define str_10023155 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x70dU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10011e6c
 */

undefined4
recovered_10011e6c(undefined4 *param_1,int param_2,uint param_3,char *param_4,ulong param_5)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  undefined4 uVar5;
  ulong uVar6;

  uVar5 = 0;
  if (((param_1 != (undefined4 *)0x0) && (*(char *)((int)param_1 + 0x401e) == '\x01')) &&
     ((param_2 != 0 || (param_3 == 0)))) {
    if (param_3 != 0) {
      do {
        uVar6 = 0x5b4;
        if (param_3 < 0x5b4) {
          uVar6 = param_3;
        }
        bVar4 = recovered_100114dc(*param_1,param_1 + 5,param_1[1],
                                   (uint)*(ushort *)((int)param_1 + 10),
                                   (uint)*(ushort *)(param_1 + 2),param_1[3],param_1[4],0x18,
                                   (void *)param_2,uVar6);
        if (!bVar4) {
          pf_varargs_10023fa4___(param_4,param_5,str_10023155);
          return 0;
        }
        iVar2 = Ram40010800;
        param_1[3] = param_1[3] + uVar6;
        if ((iVar2 == 0x50414d57) && (iVar2 = Ram40010804, iVar2 != 0)) {
          uVar1 = Ram40010808;
          bVar4 = 0xb < uVar1;
          if (bVar4) {
            uVar1 = Ram40010808;
          }
          if ((bVar4 && 0x9f < uVar1) && (pcVar3 = (code *)UINT_4001089c, pcVar3 != (code *)0x0)) {
            (*pcVar3)();
          }
        }
        param_3 = param_3 - uVar6;
        param_2 = param_2 + uVar6;
      } while (param_3 != 0);
    }
    uVar5 = 1;
  }
  return uVar5;
}

#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef Ram40010800
#undef Ram40010804
#undef Ram40010808
#undef UINT_4001089c
#undef str_10023155

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
#undef UINT_4001088c
#define UINT_4001088c (*(uint *)(0x4001088cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10011fb0
 */

void recovered_10011fb0(char *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

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
    if ((bVar3 && 0x8f < uVar1) &&
       (UNRECOVERED_JUMPTABLE = (code *)UINT_4001088c, UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x10011ffc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_1);
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
#undef UINT_4001088c

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
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10012000
 */

uint recovered_10012000(char *param_1,void *param_2,uint param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  uint uVar2;
  bool bVar3;

  iVar1 = Ram40010800;
  if ((iVar1 == 0x50414d57) && (iVar1 = Ram40010804, iVar1 != 0)) {
    uVar2 = Ram40010808;
    bVar3 = 0xb < uVar2;
    if (bVar3) {
      uVar2 = Ram40010808;
    }
    if ((bVar3 && 0x3b < uVar2) &&
       (UNRECOVERED_JUMPTABLE = (code *)UINT_40010838, UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x10012050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3);
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
#undef UINT_40010838

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10012054
 */

undefined4 recovered_10012054(char *param_1,char *param_2,undefined1 *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  ulong uVar2;
  char *pcVar3;
  char *pcVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  char *unaff_r5;
  char *pcVar8;

  if (param_3 != (undefined1 *)0x0) {
    if (param_1 != (char *)0x0) {
      unaff_r5 = param_2;
    }
    *param_3 = 0;
    if ((param_1 != (char *)0x0 && param_2 != (char *)0x0) &&
       (uVar2 = strlen(unaff_r5), uVar2 != 0)) {
      pcVar8 = param_1;
LAB_100120b8:
      if (*pcVar8 != '\0') {
        do {
          uVar5 = 0;
          while (uVar6 = (uint)(byte)pcVar8[uVar5], uVar6 != 0) {
            uVar7 = (uint)(byte)unaff_r5[uVar5];
            if (uVar7 - 0x41 < 0x1a) {
              uVar7 = uVar7 | 0x20;
            }
            if (uVar6 - 0x41 < 0x1a) {
              uVar6 = uVar6 | 0x20;
            }
            if (uVar6 != uVar7) break;
            uVar5 = uVar5 + 1;
            if (uVar2 == uVar5) goto LAB_10012120;
          }
          if (uVar2 == uVar5) goto LAB_10012120;
          pcVar8 = pcVar8 + 1;
          if (*pcVar8 == '\0') {
            return 0;
          }
        } while( true );
      }
    }
  }
  return 0;
LAB_10012120:
  if (pcVar8 == param_1) {
    uVar2 = strlen(unaff_r5);
    pcVar3 = param_1 + uVar2;
  }
  else {
    cVar1 = pcVar8[-1];
    uVar2 = strlen(unaff_r5);
    pcVar3 = pcVar8 + uVar2;
    switch((uintptr_t)(cVar1)) {
    case '\0':
    case '\t':
    case '\n':
    case '\f':
    case '\r':
    case ' ':
    case ',':
      break;
    case '\x01':
    case '\x02':
    case '\x03':
    case '\x04':
    case '\x05':
    case '\x06':
    case '\a':
    case '\b':
    case '\v':
    case '\x0e':
    case '\x0f':
    case '\x10':
    case '\x11':
    case '\x12':
    case '\x13':
    case '\x14':
    case '\x15':
    case '\x16':
    case '\x17':
    case '\x18':
    case '\x19':
    case '\x1a':
    case '\x1b':
    case '\x1c':
    case '\x1d':
    case '\x1e':
    case '\x1f':
    case '!':
    case '\"':
    case '#':
    case '$':
    case '%':
    case '&':
    case '\'':
    case '(':
    case ')':
    case '*':
    case '+':
      goto switchD_10012148_caseD_1;
    default:
      if (cVar1 != '}') goto switchD_10012148_caseD_1;
    }
  }
  switch((uintptr_t)(*pcVar3)) {
  default:
    if (*pcVar3 != '{') goto switchD_10012148_caseD_1;
  case '\t':
  case '\n':
  case '\f':
  case '\r':
  case ' ':
  case ',':
    pcVar3 = strchr(pcVar8,0x7b);
    if (pcVar3 != (char *)0x0) {
      pcVar4 = strchr(pcVar3 + 1,0x7d);
      if (pcVar4 != (char *)0x0) {
        pcVar8 = (char *)0x3ff;
        if ((int)(pcVar4 + ~(uint)pcVar3) < 0x3ff) {
          pcVar8 = pcVar4 + ~(uint)pcVar3;
        }
        memcpy(param_3,pcVar3 + 1,(ulong)pcVar8);
        param_3[(int)pcVar8] = 0;
        return 1;
      }
    }
  case '\v':
  case '\x0e':
  case '\x0f':
  case '\x10':
  case '\x11':
  case '\x12':
  case '\x13':
  case '\x14':
  case '\x15':
  case '\x16':
  case '\x17':
  case '\x18':
  case '\x19':
  case '\x1a':
  case '\x1b':
  case '\x1c':
  case '\x1d':
  case '\x1e':
  case '\x1f':
  case '!':
  case '\"':
  case '#':
  case '$':
  case '%':
  case '&':
  case '\'':
  case '(':
  case ')':
  case '*':
  case '+':
switchD_10012148_caseD_1:
    pcVar8 = pcVar8 + 1;
    uVar2 = strlen(unaff_r5);
    if (uVar2 == 0) {
      return 0;
    }
    goto LAB_100120b8;
  }
}


#undef EXT_00000018
#define EXT_00000018 (*(uint8_t *)(0x18U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10012350
 */

bool recovered_10012350(char *param_1,char *param_2,char *param_3,uint param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  ulong uVar2;
  char *pcVar3;
  byte *pbVar4;
  byte *pbVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  char *pcVar12;

  uVar7 = 0;
  if (param_2 != (char *)0x0) {
    uVar7 = strlen(param_2);
  }
  if (param_3 == (char *)0x0) {
    return false;
  }
  *param_3 = '\0';
  if (param_1 == (char *)0x0) {
    return false;
  }
  if (param_2 == (char *)0x0 || uVar7 == 0) {
    return false;
  }
  uVar2 = strlen(param_2);
  if (uVar2 == 0) {
    return false;
  }
  pcVar12 = param_1;
LAB_10012420:
  if (*pcVar12 == '\0') {
    return false;
  }
  pbVar5 = (byte *)(pcVar12 + uVar7 + 1);
  do {
    uVar8 = 0;
    while (uVar10 = (uint)(byte)pcVar12[uVar8], uVar10 != 0) {
      uVar11 = (uint)(byte)param_2[uVar8];
      if (uVar11 - 0x41 < 0x1a) {
        uVar11 = uVar11 | 0x20;
      }
      if (uVar10 - 0x41 < 0x1a) {
        uVar10 = uVar10 | 0x20;
      }
      if (uVar10 != uVar11) break;
      uVar8 = uVar8 + 1;
      if (uVar2 == uVar8) goto LAB_10012490;
    }
    if (uVar2 == uVar8) break;
    pcVar12 = pcVar12 + 1;
    pbVar5 = pbVar5 + 1;
    if (*pcVar12 == '\0') {
      return false;
    }
  } while( true );
LAB_10012490:
  pcVar3 = param_1;
  if (pcVar12 != param_1) {
    pcVar3 = (char *)(uint)(byte)pcVar12[-1];
    uVar8 = (uint)pcVar3 & 0xbf;
  }
  if ((pcVar12 == param_1 || uVar8 == 0x3b) ||
     ((pcVar3 + -9 < &IRQ && ((1 << ((uint)(pcVar3 + -9) & 0xff) & 0x80001bU) != 0)))) {
    bVar1 = pcVar12[uVar7];
    switch((uintptr_t)(bVar1)) {
    case 9:
    case 10:
    case 0xc:
    case 0xd:
    case 0x20:
    case 0x3a:
      do {
        switch((uintptr_t)(bVar1)) {
        case 9:
        case 10:
        case 0xc:
        case 0xd:
        case 0x20:
          bVar1 = *pbVar5;
          pbVar5 = pbVar5 + 1;
          break;
        default:
          goto switchD_100124c0_caseD_b;
        case 0x3a:
          goto LAB_1001269c;
        }
      } while( true );
    }
  }
switchD_100124c0_caseD_b:
  pcVar12 = pcVar12 + 1;
  uVar2 = strlen(param_2);
  if (uVar2 == 0) {
    return false;
  }
  goto LAB_10012420;
  while (pbVar5 = pbVar4, (1 << (uVar10 - 9 & 0xff) & 0x80001bU) != 0) {
LAB_1001269c:
    pbVar4 = pbVar5 + 1;
    uVar10 = (uint)*pbVar5;
    if (0x17 < uVar10 - 9) break;
  }
  if (param_4 < 2) {
    param_4 = 1;
  }
  iVar6 = 0;
  while( true ) {
    if ((uVar10 == 0) || (uVar10 == 0x3b || uVar10 == 0x7d)) goto LAB_10012700;
    if (param_4 - 1 == iVar6) break;
    param_3[iVar6] = (char)uVar10;
    uVar10 = (uint)pbVar4[iVar6];
    iVar6 = iVar6 + 1;
  }
  iVar6 = param_4 - 1;
LAB_10012700:
  iVar9 = 0;
  if (iVar6 != 0) {
    iVar9 = iVar6;
    do {
      if ((0x17 < (byte)param_3[iVar9 + -1] - 9) ||
         ((1 << ((byte)param_3[iVar9 + -1] - 9 & 0xff) & 0x80001bU) == 0)) goto LAB_10012740;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
    iVar9 = 0;
  }
LAB_10012740:
  param_3[iVar9] = '\0';
  return *param_3 != '\0';
}

#undef EXT_00000018

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10012764
 */

undefined4 recovered_10012764(int param_1,uint *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  bool bVar2;
  uint uVar3;
  char *pcVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;

  if (param_1 == 0 || param_2 == (uint *)0x0) {
    return 0;
  }
  pcVar4 = (char *)(param_1 + 8);
  do {
    uVar5 = (uint)(byte)pcVar4[-8];
    switch((uintptr_t)(uVar5)) {
    case 0:
      return 0;
    default:
      if (uVar5 - 0x41 < 0x1a) {
        uVar5 = uVar5 | 0x20;
      }
      if ((uVar5 == 0x62) && (uVar10 = (uint)(byte)pcVar4[-7], uVar10 != 0)) {
        if (uVar10 - 0x41 < 0x1a) {
          uVar10 = uVar10 | 0x20;
        }
        if ((uVar10 == 0x6c) && (uVar10 = (uint)(byte)pcVar4[-6], uVar10 != 0)) {
          if (uVar10 - 0x41 < 0x1a) {
            uVar10 = uVar10 | 0x20;
          }
          if ((uVar10 == 0x61) && (uVar10 = (uint)(byte)pcVar4[-5], uVar10 != 0)) {
            if (uVar10 - 0x41 < 0x1a) {
              uVar10 = uVar10 | 0x20;
            }
            if ((uVar10 == 99) && (uVar10 = (uint)(byte)pcVar4[-4], uVar10 != 0)) {
              uVar8 = 0xff;
              if (uVar10 - 0x41 < 0x1a) {
                uVar10 = uVar10 | 0x20;
              }
              if (uVar10 == 0x6b) goto LAB_10012b58;
            }
          }
        }
      }
      if (uVar5 != 0x77) {
        return 0;
      }
      uVar5 = (uint)(byte)pcVar4[-7];
      if (uVar5 == 0) {
        return 0;
      }
      if (uVar5 - 0x41 < 0x1a) {
        uVar5 = uVar5 | 0x20;
      }
      if (uVar5 != 0x68) {
        return 0;
      }
      uVar5 = (uint)(byte)pcVar4[-6];
      if (uVar5 == 0) {
        return 0;
      }
      if (uVar5 - 0x41 < 0x1a) {
        uVar5 = uVar5 | 0x20;
      }
      if (uVar5 != 0x69) {
        return 0;
      }
      uVar5 = (uint)(byte)pcVar4[-5];
      if (uVar5 == 0) {
        return 0;
      }
      if (uVar5 - 0x41 < 0x1a) {
        uVar5 = uVar5 | 0x20;
      }
      if (uVar5 != 0x74) {
        return 0;
      }
      uVar5 = (uint)(byte)pcVar4[-4];
      if (uVar5 == 0) {
        return 0;
      }
      uVar8 = 0xffffffff;
      if (uVar5 - 0x41 < 0x1a) {
        uVar5 = uVar5 | 0x20;
      }
      if (uVar5 != 0x65) {
        return 0;
      }
      goto LAB_10012b58;
    case 9:
    case 10:
    case 0xc:
    case 0xd:
    case 0x20:
      pcVar4 = pcVar4 + 1;
      break;
    case 0x23:
      cVar1 = pcVar4[-7];
      iVar9 = (int)cVar1;
      uVar5 = iVar9 - 0x30;
      if (9 < (uVar5 & 0xff)) {
        if ((byte)(cVar1 + 0x9fU) < 6) {
          uVar5 = iVar9 - 0x57;
        }
        else {
          if (5 < (byte)(cVar1 + 0xbfU)) {
            return 0;
          }
          uVar5 = iVar9 - 0x37;
        }
      }
      if ((int)uVar5 < 0) {
        return 0;
      }
      cVar1 = pcVar4[-6];
      iVar9 = (int)cVar1;
      uVar10 = iVar9 - 0x30;
      if (9 < (uVar10 & 0xff)) {
        if ((byte)(cVar1 + 0x9fU) < 6) {
          uVar10 = iVar9 - 0x57;
        }
        else {
          if (5 < (byte)(cVar1 + 0xbfU)) {
            return 0;
          }
          uVar10 = iVar9 - 0x37;
        }
      }
      if ((int)uVar10 < 0) {
        return 0;
      }
      cVar1 = pcVar4[-5];
      iVar9 = (int)cVar1;
      uVar12 = iVar9 - 0x30;
      if (9 < (uVar12 & 0xff)) {
        if ((byte)(cVar1 + 0x9fU) < 6) {
          uVar12 = iVar9 - 0x57;
        }
        else {
          if (5 < (byte)(cVar1 + 0xbfU)) {
            return 0;
          }
          uVar12 = iVar9 - 0x37;
        }
      }
      if ((int)uVar12 < 0) {
        return 0;
      }
      cVar1 = pcVar4[-4];
      iVar9 = (int)cVar1;
      uVar13 = iVar9 - 0x30;
      if ((uVar13 & 0xff) < 10) {
LAB_10012a90:
        if ((int)uVar13 < 0) goto LAB_10012ac8;
        cVar1 = pcVar4[-3];
        iVar9 = (int)cVar1;
        uVar6 = iVar9 - 0x30;
        if ((uVar6 & 0xff) < 10) {
LAB_10012ae8:
          if (-1 < (int)uVar6) {
            cVar1 = pcVar4[-2];
            iVar9 = (int)cVar1;
            uVar7 = iVar9 - 0x30;
            if (9 < (uVar7 & 0xff)) {
              if ((byte)(cVar1 + 0x9fU) < 6) {
                uVar7 = iVar9 - 0x57;
              }
              else {
                if (5 < (byte)(cVar1 + 0xbfU)) {
                  return 0;
                }
                uVar7 = iVar9 - 0x37;
              }
            }
            if ((int)uVar7 < 0) {
              return 0;
            }
            uVar3 = (uint)pcVar4[-1];
            uVar11 = uVar3 - 0x30;
            if ((uVar11 & 0xff) < 10) {
LAB_10012bd0:
              if ((int)uVar11 < 0) goto LAB_10012c08;
              cVar1 = *pcVar4;
              iVar9 = (int)cVar1;
              uVar3 = iVar9 - 0x30;
              if (9 < (uVar3 & 0xff)) {
                if ((byte)(cVar1 + 0x9fU) < 6) {
                  uVar3 = iVar9 - 0x57;
                }
                else {
                  if (5 < (byte)(cVar1 + 0xbfU)) {
                    return 0;
                  }
                  uVar3 = iVar9 - 0x37;
                }
              }
              bVar2 = true;
              if ((int)uVar3 < 0) {
                return 0;
              }
            }
            else {
              uVar11 = (uint)(byte)pcVar4[-1];
              if ((uVar11 - 0x61 & 0xff) < 6) {
                uVar11 = uVar3 - 0x57;
                goto LAB_10012bd0;
              }
              if ((uVar11 - 0x41 & 0xff) < 6) {
                uVar11 = uVar3 - 0x37;
                goto LAB_10012bd0;
              }
LAB_10012c08:
              bVar2 = false;
            }
            uVar8 = 0xff;
            if (bVar2) {
              uVar8 = (uVar3 | uVar11 << 4) & 0xff;
            }
            uVar8 = uVar10 << 0x18 | uVar5 << 0x1c | (uVar13 << 0x10 | uVar12 << 0x14) & 0xff00ff |
                    (uVar7 << 8 | uVar6 << 0xc) & 0xffff | uVar8;
            goto LAB_10012b58;
          }
          bVar2 = true;
        }
        else {
          if ((byte)(cVar1 + 0x9fU) < 6) {
            uVar6 = iVar9 - 0x57;
            goto LAB_10012ae8;
          }
          bVar2 = true;
          if ((byte)(cVar1 + 0xbfU) < 6) {
            uVar6 = iVar9 - 0x37;
            goto LAB_10012ae8;
          }
        }
      }
      else {
        if ((byte)(cVar1 + 0x9fU) < 6) {
          uVar13 = iVar9 - 0x57;
          goto LAB_10012a90;
        }
        if ((byte)(cVar1 + 0xbfU) < 6) {
          uVar13 = iVar9 - 0x37;
          goto LAB_10012a90;
        }
LAB_10012ac8:
        bVar2 = false;
      }
      uVar8 = 0xff;
      if (bVar2) {
        uVar8 = uVar13 * 0x11 & 0xff;
      }
      uVar8 = uVar8 | uVar5 * 0x11000000 | (uVar10 * 0x11 & 0xff) << 0x10 | uVar12 * 0x1100 & 0xffff
      ;
LAB_10012b58:
      *param_2 = uVar8;
      return 1;
    }
  } while( true );
}


#undef DAT_10023395
#define DAT_10023395 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x94dU)))
#undef DAT_10023396
#define DAT_10023396 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x94eU)))
#undef DAT_10023397
#define DAT_10023397 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x94fU)))
#undef DAT_10023520
#define DAT_10023520 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xad8U)))
#undef DAT_10023521
#define DAT_10023521 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xad9U)))
#undef DAT_10023522
#define DAT_10023522 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xadaU)))
#undef DAT_10023523
#define DAT_10023523 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xadbU)))
#undef DAT_10023524
#define DAT_10023524 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xadcU)))
#undef DAT_10023541
#define DAT_10023541 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xaf9U)))
#undef str_10023398
#define str_10023398 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x950U)))
#undef str_10023518
#define str_10023518 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xad0U)))
#undef str_10023525
#define str_10023525 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xaddU)))
#undef str_1002352d
#define str_1002352d (*(char (*)[1])(((uintptr_t)pf_module_state + 0xae5U)))
#undef str_10023533
#define str_10023533 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xaebU)))
#undef str_1002353a
#define str_1002353a (*(char (*)[1])(((uintptr_t)pf_module_state + 0xaf2U)))
#undef str_10023545
#define str_10023545 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xafdU)))
#undef str_1002354c
#define str_1002354c (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb04U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10012c7c
 */

undefined4 recovered_10012c7c(byte *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  bool bVar6;

  if (param_1 == (byte *)0x0) goto LAB_100131a0;
  uVar1 = (uint)*param_1;
  if (uVar1 == 0) {
    pcVar5 = &DAT_10023520;
LAB_10012f6c:
    if (*pcVar5 == '\0') {
      return 1;
    }
    if (uVar1 != 0) goto switchD_10012cc0_caseD_65;
    pcVar5 = str_1002352d;
  }
  else {
    uVar2 = uVar1;
    if (uVar1 - 0x41 < 0x1a) {
      uVar2 = uVar1 | 0x20;
    }
    switch((uintptr_t)(uVar2)) {
    case 100:
switchD_10012cc0_caseD_64:
      uVar4 = (uint)param_1[1];
      if (uVar4 == 0) {
        pcVar5 = &DAT_10023395;
LAB_10012da4:
        if (*pcVar5 == '\0') {
          return 1;
        }
      }
      else {
        if (uVar4 - 0x41 < 0x1a) {
          uVar4 = uVar4 | 0x20;
        }
        if (uVar4 == 0x69) {
          uVar4 = (uint)param_1[2];
          if (uVar4 == 0) {
            pcVar5 = &DAT_10023396;
          }
          else {
            uVar3 = uVar4 - 0x41;
            if (uVar3 < 0x1a) {
              uVar4 = uVar4 | 0x20;
            }
            if (uVar4 == 0x76) {
              uVar3 = (uint)param_1[3];
            }
            if (uVar4 != 0x76 || uVar3 != 0) goto LAB_10012db0;
            pcVar5 = &DAT_10023397;
          }
          goto LAB_10012da4;
        }
      }
LAB_10012db0:
      if (uVar2 == 0x6d) goto switchD_10012cc0_caseD_6d;
      if (uVar2 == 0x73) goto switchD_10012cc0_caseD_73;
      break;
    case 0x6d:
switchD_10012cc0_caseD_6d:
      uVar2 = (uint)param_1[1];
      if (uVar2 == 0) {
        pcVar5 = &DAT_10023521;
      }
      else {
        if (uVar2 - 0x41 < 0x1a) {
          uVar2 = uVar2 | 0x20;
        }
        if (uVar2 != 0x61) break;
        uVar2 = (uint)param_1[2];
        if (uVar2 == 0) {
          pcVar5 = &DAT_10023522;
        }
        else {
          if (uVar2 - 0x41 < 0x1a) {
            uVar2 = uVar2 | 0x20;
          }
          if (uVar2 != 0x69) break;
          uVar2 = (uint)param_1[3];
          if (uVar2 == 0) {
            pcVar5 = &DAT_10023523;
          }
          else {
            if (uVar2 - 0x41 < 0x1a) {
              uVar2 = uVar2 | 0x20;
            }
            bVar6 = uVar2 != 0x6e;
            if (!bVar6) {
              uVar2 = (uint)param_1[4];
            }
            if (bVar6 || uVar2 != 0) break;
            pcVar5 = &DAT_10023524;
          }
        }
      }
      goto LAB_10012f6c;
    case 0x70:
      if (param_1[1] == 0) {
        return 1;
      }
      if (uVar2 == 0x73) goto switchD_10012cc0_caseD_73;
      if (uVar2 == 0x6d) goto switchD_10012cc0_caseD_6d;
      if (uVar2 == 100) goto switchD_10012cc0_caseD_64;
      break;
    case 0x73:
switchD_10012cc0_caseD_73:
      uVar4 = (uint)param_1[1];
      if (uVar4 == 0) {
        pcVar5 = str_10023518 + 1;
LAB_10012ec8:
        if (*pcVar5 == '\0') {
          return 1;
        }
      }
      else {
        if (uVar4 - 0x41 < 0x1a) {
          uVar4 = uVar4 | 0x20;
        }
        if (uVar4 == 0x65) {
          uVar4 = (uint)param_1[2];
          if (uVar4 == 0) {
            pcVar5 = str_10023518 + 2;
          }
          else {
            if (uVar4 - 0x41 < 0x1a) {
              uVar4 = uVar4 | 0x20;
            }
            if (uVar4 != 99) goto LAB_10012ed4;
            uVar4 = (uint)param_1[3];
            if (uVar4 == 0) {
              pcVar5 = str_10023518 + 3;
            }
            else {
              if (uVar4 - 0x41 < 0x1a) {
                uVar4 = uVar4 | 0x20;
              }
              if (uVar4 != 0x74) goto LAB_10012ed4;
              uVar4 = (uint)param_1[4];
              if (uVar4 == 0) {
                pcVar5 = str_10023518 + 4;
              }
              else {
                if (uVar4 - 0x41 < 0x1a) {
                  uVar4 = uVar4 | 0x20;
                }
                if (uVar4 != 0x69) goto LAB_10012ed4;
                uVar4 = (uint)param_1[5];
                if (uVar4 == 0) {
                  pcVar5 = str_10023518 + 5;
                }
                else {
                  if (uVar4 - 0x41 < 0x1a) {
                    uVar4 = uVar4 | 0x20;
                  }
                  if (uVar4 != 0x6f) goto LAB_10012ed4;
                  uVar4 = (uint)param_1[6];
                  if (uVar4 == 0) {
                    pcVar5 = str_10023518 + 6;
                  }
                  else {
                    uVar3 = uVar4 - 0x41;
                    if (uVar3 < 0x1a) {
                      uVar4 = uVar4 | 0x20;
                    }
                    if (uVar4 == 0x6e) {
                      uVar3 = (uint)param_1[7];
                    }
                    if (uVar4 != 0x6e || uVar3 != 0) goto LAB_10012ed4;
                    pcVar5 = str_10023518 + 7;
                  }
                }
              }
            }
          }
          goto LAB_10012ec8;
        }
      }
LAB_10012ed4:
      if (uVar2 == 0x6d) goto switchD_10012cc0_caseD_6d;
    }
switchD_10012cc0_caseD_65:
    uVar2 = uVar1;
    if (uVar1 - 0x41 < 0x1a) {
      uVar2 = uVar1 | 0x20;
    }
    if (uVar2 != 0x61) goto LAB_100131a0;
    uVar2 = (uint)param_1[1];
    if (uVar2 == 0) {
      pcVar5 = str_10023525 + 1;
LAB_100130b0:
      if (*pcVar5 == '\0') {
        return 1;
      }
      if (uVar1 == 0) {
        pcVar5 = str_1002352d;
        goto LAB_10013194;
      }
    }
    else {
      if (uVar2 - 0x41 < 0x1a) {
        uVar2 = uVar2 | 0x20;
      }
      if (uVar2 == 0x72) {
        uVar2 = (uint)param_1[2];
        if (uVar2 == 0) {
          pcVar5 = str_10023525 + 2;
        }
        else {
          if (uVar2 - 0x41 < 0x1a) {
            uVar2 = uVar2 | 0x20;
          }
          if (uVar2 != 0x74) goto code_r0x100130cc;
          uVar2 = (uint)param_1[3];
          if (uVar2 == 0) {
            pcVar5 = str_10023525 + 3;
          }
          else {
            if (uVar2 - 0x41 < 0x1a) {
              uVar2 = uVar2 | 0x20;
            }
            if (uVar2 != 0x69) goto code_r0x100130cc;
            uVar2 = (uint)param_1[4];
            if (uVar2 == 0) {
              pcVar5 = str_10023525 + 4;
            }
            else {
              if (uVar2 - 0x41 < 0x1a) {
                uVar2 = uVar2 | 0x20;
              }
              if (uVar2 != 99) goto code_r0x100130cc;
              uVar2 = (uint)param_1[5];
              if (uVar2 == 0) {
                pcVar5 = str_10023525 + 5;
              }
              else {
                if (uVar2 - 0x41 < 0x1a) {
                  uVar2 = uVar2 | 0x20;
                }
                if (uVar2 != 0x6c) goto code_r0x100130cc;
                uVar2 = (uint)param_1[6];
                if (uVar2 == 0) {
                  pcVar5 = str_10023525 + 6;
                }
                else {
                  uVar4 = uVar2 - 0x41;
                  if (uVar4 < 0x1a) {
                    uVar2 = uVar2 | 0x20;
                  }
                  if (uVar2 == 0x65) {
                    uVar4 = (uint)param_1[7];
                  }
                  if (uVar2 != 0x65 || uVar4 != 0) goto code_r0x100130cc;
                  pcVar5 = str_10023525 + 7;
                }
              }
            }
          }
        }
        goto LAB_100130b0;
      }
    }
code_r0x100130cc:
    uVar1 = (uint)param_1[1];
    if (uVar1 == 0) {
      pcVar5 = str_1002352d + 1;
    }
    else {
      if (uVar1 - 0x41 < 0x1a) {
        uVar1 = uVar1 | 0x20;
      }
      if (uVar1 != 0x73) goto LAB_100131a0;
      uVar1 = (uint)param_1[2];
      if (uVar1 == 0) {
        pcVar5 = str_1002352d + 2;
      }
      else {
        if (uVar1 - 0x41 < 0x1a) {
          uVar1 = uVar1 | 0x20;
        }
        if (uVar1 != 0x69) goto LAB_100131a0;
        uVar1 = (uint)param_1[3];
        if (uVar1 == 0) {
          pcVar5 = str_1002352d + 3;
        }
        else {
          if (uVar1 - 0x41 < 0x1a) {
            uVar1 = uVar1 | 0x20;
          }
          if (uVar1 != 100) goto LAB_100131a0;
          uVar1 = (uint)param_1[4];
          if (uVar1 == 0) {
            pcVar5 = str_1002352d + 4;
          }
          else {
            if (uVar1 - 0x41 < 0x1a) {
              uVar1 = uVar1 | 0x20;
            }
            bVar6 = uVar1 != 0x65;
            if (!bVar6) {
              uVar1 = (uint)param_1[5];
            }
            if (bVar6 || uVar1 != 0) goto LAB_100131a0;
            pcVar5 = str_1002352d + 5;
          }
        }
      }
    }
  }
LAB_10013194:
  if (*pcVar5 == '\0') {
    return 1;
  }
LAB_100131a0:
  bVar6 = recovered_1000bcd4(param_1,(byte *)str_10023533);
  if ((((bVar6) || (bVar6 = recovered_1000bcd4(param_1,(byte *)str_1002353a), bVar6)) ||
      (bVar6 = recovered_1000bcd4(param_1,&DAT_10023541), bVar6)) ||
     ((bVar6 = recovered_1000bcd4(param_1,(byte *)str_10023545), bVar6 ||
      (bVar6 = recovered_1000bcd4(param_1,(byte *)str_1002354c), bVar6)))) {
    return 1;
  }
  bVar6 = recovered_1000bcd4(param_1,(byte *)str_10023398);
  return (uint)bVar6;
}

#undef DAT_10023395
#undef DAT_10023396
#undef DAT_10023397
#undef DAT_10023520
#undef DAT_10023521
#undef DAT_10023522
#undef DAT_10023523
#undef DAT_10023524
#undef DAT_10023541
#undef str_10023398
#undef str_10023518
#undef str_10023525
#undef str_1002352d
#undef str_10023533
#undef str_1002353a
#undef str_10023545
#undef str_1002354c

#define local_390 (*(undefined4 *)(frame + 16))
#define iStack_384 (*(int *)(frame + 28))
#define local_38c (*(undefined4 *)(frame + 20))
#define iStack_380 (*(int *)(frame + 32))
#define local_388 (*(undefined4 *)(frame + 24))
#define local_3c (*(undefined4 *)(frame + 868))
#define local_30 (*(undefined4 *)(frame + 880))
#define local_2c (*(undefined4 *)(frame + 884))
#define local_28 (*(undefined4 *)(frame + 888))
#define local_24 (*(undefined1 *)(frame + 892))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001324c
 */

void recovered_1001324c(int param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5,
                       undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined1 param_9)

{
  unsigned char frame[960] __attribute__((aligned(16))) = {0};

  uint uVar1;

  if (param_4 < 1) {
    return;
  }
  if (0 < param_5) {
    memset(&local_390,0,0x370);
    local_28 = param_8;
    local_2c = param_7;
    local_30 = param_6;
    iStack_380 = param_5;
    uVar1 = *(uint *)(param_1 + 0x52c2c);
    local_390 = 7;
    local_3c = 0xffffffff;
    local_24 = param_9;
    if (uVar1 >> 7 < 3) {
      *(uint *)(param_1 + 0x52c2c) = uVar1 + 1;
      local_38c = param_2;
      local_388 = param_3;
      iStack_384 = param_4;
      memcpy((void *)(uVar1 * 0x370 + param_1 + 0x42c),&local_390,0x370);
    }
  }
  return;
}

#undef local_390
#undef iStack_384
#undef local_38c
#undef iStack_380
#undef local_388
#undef local_3c
#undef local_30
#undef local_2c
#undef local_28
#undef local_24

#undef str_10022ce5
#define str_10022ce5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x29dU)))
#undef str_10022cf4
#define str_10022cf4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2acU)))
#undef str_10023557
#define str_10023557 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb0fU)))
#define local_c9 (*(byte *)(frame + 23))
#define local_c8 (*(byte *)(frame + 24))
#define local_c7 (*(byte *)(frame + 25))
#define local_c6 (*(byte *)(frame + 26))
#define local_c5 (*(byte *)(frame + 27))
#define local_c4 (*(byte *)(frame + 28))
#define local_c3 (*(byte *)(frame + 29))
#define local_a1 (*(byte *)(frame + 63))
#define abStack_a0 (*(byte (*)[128])(frame + 64))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10013320
 */

char * recovered_10013320(uint param_1,byte *param_2)

{
  unsigned char frame[256] __attribute__((aligned(16))) = {0};

  int iVar1;
  char *s;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  uint unaff_r4;
  byte *unaff_r5;
  char *pcVar5;
  char *pcVar6;
  bool bVar7;

  pcVar5 = (char *)(param_1 + 1);
  if (param_2 != (byte *)0x0) {
    unaff_r4 = (uint)*param_2;
    unaff_r5 = param_2;
  }
  if (param_2 == (byte *)0x0 || unaff_r4 == 0) {
    return pcVar5;
  }
  iVar1 = recovered_10019090(unaff_r5);
  if (iVar1 != 0) {
    return pcVar5;
  }
  if (unaff_r4 - 0x41 < 0x1a) {
    unaff_r4 = unaff_r4 | 0x20;
  }
  if (unaff_r4 == 0x74) {
    uVar3 = (uint)unaff_r5[1];
    pcVar2 = str_10023557;
    if (uVar3 == 0) goto LAB_1001361c;
    if (uVar3 - 0x41 < 0x1a) {
      uVar3 = uVar3 | 0x20;
    }
    if (uVar3 != 0x65) goto LAB_10013644;
    uVar3 = (uint)unaff_r5[2];
    if (uVar3 == 0) goto LAB_10013624;
    if (uVar3 - 0x41 < 0x1a) {
      uVar3 = uVar3 | 0x20;
    }
    if (uVar3 != 0x6d) goto LAB_10013644;
    uVar3 = (uint)unaff_r5[3];
    if (uVar3 == 0) goto LAB_1001362c;
    if (uVar3 - 0x41 < 0x1a) {
      uVar3 = uVar3 | 0x20;
    }
    if (uVar3 != 0x70) goto LAB_10013644;
    uVar3 = (uint)unaff_r5[4];
    if (uVar3 == 0) goto LAB_10013634;
    if (uVar3 - 0x41 < 0x1a) {
      uVar3 = uVar3 | 0x20;
    }
    if (uVar3 != 0x6c) goto LAB_10013644;
    uVar3 = (uint)unaff_r5[5];
    if (uVar3 == 0) goto LAB_10013614;
    if (uVar3 - 0x41 < 0x1a) {
      uVar3 = uVar3 | 0x20;
    }
    if (uVar3 != 0x61) goto LAB_10013644;
    uVar3 = (uint)unaff_r5[6];
    if (uVar3 == 0) {
      pcVar2 = str_10023557 + 6;
    }
    else {
      if (uVar3 - 0x41 < 0x1a) {
        uVar3 = uVar3 | 0x20;
      }
      if (uVar3 != 0x74) goto LAB_10013644;
      uVar3 = (uint)unaff_r5[7];
      if (uVar3 == 0) {
        pcVar2 = str_10023557 + 7;
      }
      else {
        uVar4 = uVar3 - 0x41;
        if (uVar4 < 0x1a) {
          uVar3 = uVar3 | 0x20;
        }
        if (uVar3 == 0x65) {
          uVar4 = (uint)unaff_r5[8];
        }
        if (uVar3 != 0x65 || uVar4 != 0) goto LAB_10013644;
        pcVar2 = str_10023557 + 8;
      }
    }
  }
  else {
    if (unaff_r4 != 0x73) goto LAB_10013644;
    uVar3 = (uint)unaff_r5[1];
    if (uVar3 == 0) {
      pcVar2 = str_10022cf4 + 1;
LAB_10013574:
      if (*pcVar2 == '\0') goto LAB_100139d4;
    }
    else {
      if (uVar3 - 0x41 < 0x1a) {
        uVar3 = uVar3 | 0x20;
      }
      if (uVar3 == 99) {
        uVar3 = (uint)unaff_r5[2];
        if (uVar3 == 0) {
          pcVar2 = str_10022cf4 + 2;
        }
        else {
          if (uVar3 - 0x41 < 0x1a) {
            uVar3 = uVar3 | 0x20;
          }
          if (uVar3 != 0x72) goto LAB_10013580;
          uVar3 = (uint)unaff_r5[3];
          if (uVar3 == 0) {
            pcVar2 = str_10022cf4 + 3;
          }
          else {
            if (uVar3 - 0x41 < 0x1a) {
              uVar3 = uVar3 | 0x20;
            }
            if (uVar3 != 0x69) goto LAB_10013580;
            uVar3 = (uint)unaff_r5[4];
            if (uVar3 == 0) {
              pcVar2 = str_10022cf4 + 4;
            }
            else {
              if (uVar3 - 0x41 < 0x1a) {
                uVar3 = uVar3 | 0x20;
              }
              if (uVar3 != 0x70) goto LAB_10013580;
              uVar3 = (uint)unaff_r5[5];
              if (uVar3 == 0) {
                pcVar2 = str_10022cf4 + 5;
              }
              else {
                if (uVar3 - 0x41 < 0x1a) {
                  uVar3 = uVar3 | 0x20;
                }
                bVar7 = uVar3 != 0x74;
                if (!bVar7) {
                  uVar3 = (uint)unaff_r5[6];
                }
                if (bVar7 || uVar3 != 0) goto LAB_10013580;
                pcVar2 = str_10022cf4 + 6;
              }
            }
          }
        }
        goto LAB_10013574;
      }
    }
LAB_10013580:
    uVar3 = (uint)unaff_r5[1];
    pcVar2 = str_10022ce5;
    if (uVar3 == 0) {
LAB_1001361c:
      pcVar2 = pcVar2 + 1;
    }
    else {
      if (uVar3 - 0x41 < 0x1a) {
        uVar3 = uVar3 | 0x20;
      }
      if (uVar3 != 0x74) goto LAB_10013644;
      uVar3 = (uint)unaff_r5[2];
      if (uVar3 == 0) {
LAB_10013624:
        pcVar2 = pcVar2 + 2;
      }
      else {
        if (uVar3 - 0x41 < 0x1a) {
          uVar3 = uVar3 | 0x20;
        }
        if (uVar3 != 0x79) goto LAB_10013644;
        uVar3 = (uint)unaff_r5[3];
        if (uVar3 == 0) {
LAB_1001362c:
          pcVar2 = pcVar2 + 3;
        }
        else {
          if (uVar3 - 0x41 < 0x1a) {
            uVar3 = uVar3 | 0x20;
          }
          if (uVar3 != 0x6c) goto LAB_10013644;
          uVar3 = (uint)unaff_r5[4];
          if (uVar3 == 0) {
LAB_10013634:
            pcVar2 = pcVar2 + 4;
          }
          else {
            if (uVar3 - 0x41 < 0x1a) {
              uVar3 = uVar3 | 0x20;
            }
            bVar7 = uVar3 == 0x65;
            if (bVar7) {
              uVar3 = (uint)unaff_r5[5];
            }
            if (!bVar7 || uVar3 != 0) goto LAB_10013644;
LAB_10013614:
            pcVar2 = pcVar2 + 5;
          }
        }
      }
    }
  }
  if (*pcVar2 == '\0') {
LAB_100139d4:
    pcVar5 = recovered_10019584(param_1,unaff_r5);
    return pcVar5;
  }
LAB_10013644:
  if (*pcVar5 != '\0') {
    iVar1 = 1;
    pcVar2 = pcVar5;
    do {
      s = strchr(pcVar2,0x3c);
      if (s == (char *)0x0) {
        return pcVar5;
      }
      pcVar2 = strchr(s,0x3e);
      if (pcVar2 == (char *)0x0) {
        return pcVar5;
      }
      local_a1 = 0;
      local_c9 = 0;
      if ((s < pcVar2) && (*s == '<')) {
        pcVar6 = pcVar2 + ~(uint)s;
        if (0x7e < (int)pcVar6) {
          pcVar6 = (char *)0x7f;
        }
        memcpy(abStack_a0,s + 1,(ulong)pcVar6);
        abStack_a0[(int)pcVar6] = 0;
        recovered_1000ba88(abStack_a0,&local_c9,0x28,&local_a1);
        if ((local_a1 & 1) == 0) goto LAB_10013718;
LAB_10013984:
        bVar7 = recovered_1001968c(s,pcVar2,unaff_r5,&local_a1);
        if (bVar7) {
          if (local_a1 == 1) {
            iVar1 = iVar1 + -1;
            if (iVar1 == 0) {
              return pcVar2 + 1;
            }
          }
          else {
            uVar3 = recovered_100197a8(s,pcVar2);
            iVar1 = iVar1 + (uVar3 ^ 1);
          }
        }
        pcVar2 = pcVar2 + 1;
      }
      else {
LAB_10013718:
        uVar3 = (uint)local_c9;
        pcVar6 = str_10022ce5;
        if (uVar3 == 0) goto LAB_1001395c;
        if (uVar3 - 0x41 < 0x1a) {
          uVar3 = uVar3 | 0x20;
        }
        if (uVar3 != 0x73) goto LAB_10013968;
        uVar3 = (uint)local_c8;
        if (uVar3 == 0) {
          pcVar6 = str_10022cf4 + 1;
LAB_10013860:
          if (*pcVar6 != '\0') goto code_r0x10013874;
        }
        else {
          if (uVar3 - 0x41 < 0x1a) {
            uVar3 = uVar3 | 0x20;
          }
          if (uVar3 == 99) {
            uVar3 = (uint)local_c7;
            if (uVar3 == 0) {
              pcVar6 = str_10022cf4 + 2;
            }
            else {
              if (uVar3 - 0x41 < 0x1a) {
                uVar3 = uVar3 | 0x20;
              }
              if (uVar3 != 0x72) goto code_r0x10013874;
              uVar3 = (uint)local_c6;
              if (uVar3 == 0) {
                pcVar6 = str_10022cf4 + 3;
              }
              else {
                if (uVar3 - 0x41 < 0x1a) {
                  uVar3 = uVar3 | 0x20;
                }
                if (uVar3 != 0x69) goto code_r0x10013874;
                uVar3 = (uint)local_c5;
                if (uVar3 == 0) {
                  pcVar6 = str_10022cf4 + 4;
                }
                else {
                  if (uVar3 - 0x41 < 0x1a) {
                    uVar3 = uVar3 | 0x20;
                  }
                  if (uVar3 != 0x70) goto code_r0x10013874;
                  uVar3 = (uint)local_c4;
                  if (uVar3 == 0) {
                    pcVar6 = str_10022cf4 + 5;
                  }
                  else {
                    if (uVar3 - 0x41 < 0x1a) {
                      uVar3 = uVar3 | 0x20;
                    }
                    bVar7 = uVar3 != 0x74;
                    if (!bVar7) {
                      uVar3 = (uint)local_c3;
                    }
                    if (bVar7 || uVar3 != 0) goto code_r0x10013874;
                    pcVar6 = str_10022cf4 + 6;
                  }
                }
              }
            }
            goto LAB_10013860;
          }
code_r0x10013874:
          uVar3 = (uint)local_c8;
          if (uVar3 == 0) {
            pcVar6 = str_10022ce5 + 1;
LAB_1001395c:
            if (*pcVar6 == '\0') goto LAB_10013660;
          }
          else {
            if (uVar3 - 0x41 < 0x1a) {
              uVar3 = uVar3 | 0x20;
            }
            if (uVar3 == 0x74) {
              uVar3 = (uint)local_c7;
              if (uVar3 == 0) {
                pcVar6 = str_10022ce5 + 2;
              }
              else {
                if (uVar3 - 0x41 < 0x1a) {
                  uVar3 = uVar3 | 0x20;
                }
                if (uVar3 != 0x79) goto LAB_10013968;
                uVar3 = (uint)local_c6;
                if (uVar3 == 0) {
                  pcVar6 = str_10022ce5 + 3;
                }
                else {
                  if (uVar3 - 0x41 < 0x1a) {
                    uVar3 = uVar3 | 0x20;
                  }
                  if (uVar3 != 0x6c) goto LAB_10013968;
                  uVar3 = (uint)local_c5;
                  if (uVar3 == 0) {
                    pcVar6 = str_10022ce5 + 4;
                  }
                  else {
                    if (uVar3 - 0x41 < 0x1a) {
                      uVar3 = uVar3 | 0x20;
                    }
                    bVar7 = uVar3 != 0x65;
                    if (!bVar7) {
                      uVar3 = (uint)local_c4;
                    }
                    if (bVar7 || uVar3 != 0) goto LAB_10013968;
                    pcVar6 = str_10022ce5 + 5;
                  }
                }
              }
              goto LAB_1001395c;
            }
          }
LAB_10013968:
          bVar7 = recovered_1000bcd4(&local_c9,(byte *)str_10023557);
          if (!bVar7) goto LAB_10013984;
        }
LAB_10013660:
        pcVar2 = recovered_10019584((uint)pcVar2,&local_c9);
      }
    } while (*pcVar2 != '\0');
  }
  return pcVar5;
}

#undef str_10022ce5
#undef str_10022cf4
#undef str_10023557
#undef local_c9
#undef local_c8
#undef local_c7
#undef local_c6
#undef local_c5
#undef local_c4
#undef local_c3
#undef local_a1
#undef abStack_a0

#undef DAT_10023445
#define DAT_10023445 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x9fdU)))
#undef DAT_10023591
#define DAT_10023591 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb49U)))
#undef DAT_10023592
#define DAT_10023592 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb4aU)))
#undef DAT_10023593
#define DAT_10023593 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb4bU)))
#undef DAT_10023594
#define DAT_10023594 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb4cU)))
#undef DAT_10023595
#define DAT_10023595 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb4dU)))
#undef DAT_1002359e
#define DAT_1002359e (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb56U)))
#undef DAT_100235ae
#define DAT_100235ae (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb66U)))
#undef str_10022ce5
#define str_10022ce5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x29dU)))
#undef str_100233d6
#define str_100233d6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x98eU)))
#undef str_1002344e
#define str_1002344e (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa06U)))
#undef str_10023585
#define str_10023585 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb3dU)))
#define local_684 (*(char (*)[512])(frame + 204))
#define local_484 (*(char *)(frame + 716))
#define local_483 (*(byte (*)[1123])(frame + 717))
#define local_734 (*(byte *)(frame + 28))
#define local_733 (*(byte *)(frame + 29))
#define local_732 (*(byte *)(frame + 30))
#define local_731 (*(byte *)(frame + 31))
#define local_730 (*(byte *)(frame + 32))
#define local_724 (*(byte (*)[160])(frame + 44))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10013a08
 */

bool recovered_10013a08(int param_1,char *param_2,char *param_3)

{
  unsigned char frame[1904] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  int iVar5;
  byte *pbVar6;
  byte *pbVar7;
  bool bVar8;

  if (param_2 == (char *)0x0 || param_3 == (char *)0x0) {
    return false;
  }
  iVar2 = recovered_100188bc(param_2,str_1002344e);
  if (iVar2 != 0) {
    return true;
  }
  recovered_1000bd50(param_2,str_10023585,(char *)&local_734,0x10);
  uVar3 = (uint)local_734;
  if (uVar3 == 0) {
    pcVar4 = &DAT_10023591;
  }
  else {
    if (uVar3 - 0x41 < 0x1a) {
      uVar3 = uVar3 | 0x20;
    }
    if (uVar3 != 0x74) goto LAB_10013b50;
    uVar3 = (uint)local_733;
    if (uVar3 == 0) {
      pcVar4 = &DAT_10023592;
    }
    else {
      if (uVar3 - 0x41 < 0x1a) {
        uVar3 = uVar3 | 0x20;
      }
      if (uVar3 != 0x72) goto LAB_10013b50;
      uVar3 = (uint)local_732;
      if (uVar3 == 0) {
        pcVar4 = &DAT_10023593;
      }
      else {
        if (uVar3 - 0x41 < 0x1a) {
          uVar3 = uVar3 | 0x20;
        }
        if (uVar3 != 0x75) goto LAB_10013b50;
        uVar3 = (uint)local_731;
        if (uVar3 == 0) {
          pcVar4 = &DAT_10023594;
        }
        else {
          if (uVar3 - 0x41 < 0x1a) {
            uVar3 = uVar3 | 0x20;
          }
          bVar8 = uVar3 != 0x65;
          if (!bVar8) {
            uVar3 = (uint)local_730;
          }
          if (bVar8 || uVar3 != 0) goto LAB_10013b50;
          pcVar4 = &DAT_10023595;
        }
      }
    }
  }
  if (*pcVar4 == '\0') {
    return true;
  }
LAB_10013b50:
  recovered_1000bd50(param_2,str_10022ce5,local_684,0x200);
  if (local_684[0] != '\0') {
    iVar2 = recovered_10019880((int)local_684,((uintptr_t)pf_module_state + 0xb4eU),&DAT_1002359e);
    if (iVar2 != 0) {
      return true;
    }
    iVar2 = recovered_10019880((int)local_684,((uintptr_t)pf_module_state + 0xb5bU),(byte *)str_1002344e);
    if (iVar2 != 0) {
      return true;
    }
  }
  if (param_1 != 0) {
    pbVar7 = local_724;
    recovered_1000bd50(param_2,str_100233d6,(char *)pbVar7,0xa0);
    if (local_724[0] != 0) {
      pbVar6 = local_483 + 0x5f;
LAB_10013c0c:
      do {
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch((uintptr_t)(local_724[0])) {
        default:
          iVar2 = 0;
          local_484 = '.';
          do {
            iVar5 = -iVar2;
            switch((uintptr_t)(pbVar7[iVar5])) {
            case 0:
            case 9:
            case 10:
            case 0xc:
            case 0xd:
            case 0x20:
              goto switchD_10013cc8_caseD_0;
            default:
              if (iVar2 == -0x5e) {
                local_483[0x5e] = 0;
                goto LAB_10013d84;
              }
              iVar1 = -iVar2;
              iVar2 = iVar2 + -1;
              local_483[iVar1] = pbVar7[iVar5];
            }
          } while( true );
        case 9:
        case 10:
        case 0xc:
        case 0xd:
        case 0x20:
          pbVar7 = pbVar7 + 1;
          local_724[0] = *pbVar7;
        }
      } while( true );
    }
LAB_10013ee0:
    recovered_1000bd50(param_2,&DAT_10023445,&local_484,0x60);
    if (local_484 != '\0') {
      pf_varargs_10023fa4__4_((char *)(local_483 + 0x5f),0x70,&DAT_100235ae,(uint)&local_484);
      iVar2 = recovered_10019a44(param_1,(int)(local_483 + 0x5f));
      if (iVar2 != 0) {
        return true;
      }
    }
    if (*param_3 != '\0') {
      iVar2 = recovered_10019a44(param_1,(int)param_3);
      return iVar2 != 0;
    }
  }
  return false;
switchD_10013cc8_caseD_0:
  local_483[-iVar2] = 0;
  if (1 < 1U - iVar2) {
LAB_10013d84:
    iVar5 = recovered_10012054(*(char **)(param_1 + 0x314),&local_484,pbVar6);
    if ((iVar5 != 0) &&
       (iVar5 = recovered_10019880((int)pbVar6,((uintptr_t)pf_module_state + 0xb4eU),&DAT_1002359e), iVar5 != 0)) {
      return true;
    }
    iVar5 = recovered_10012054(*(char **)(param_1 + 0x314),&local_484,pbVar6);
    if ((iVar5 != 0) &&
       (iVar5 = recovered_10019880((int)pbVar6,((uintptr_t)pf_module_state + 0xb5bU),(byte *)str_1002344e), iVar5 != 0)) {
      return true;
    }
  }
  pbVar7 = pbVar7 + -iVar2;
  do {
    switch((uintptr_t)(*pbVar7)) {
    case 0:
    case 9:
    case 10:
    case 0xc:
    case 0xd:
    case 0x20:
      goto switchD_10013e4c_caseD_0;
    default:
      pbVar7 = pbVar7 + 1;
    }
  } while( true );
switchD_10013e4c_caseD_0:
  local_724[0] = *pbVar7;
  if (local_724[0] == 0) goto LAB_10013ee0;
  goto LAB_10013c0c;
}

#undef DAT_10023445
#undef DAT_10023591
#undef DAT_10023592
#undef DAT_10023593
#undef DAT_10023594
#undef DAT_10023595
#undef DAT_1002359e
#undef DAT_100235ae
#undef str_10022ce5
#undef str_100233d6
#undef str_1002344e
#undef str_10023585
#undef local_684
#undef local_484
#undef local_483
#undef local_734
#undef local_733
#undef local_732
#undef local_731
#undef local_730
#undef local_724

#undef DAT_10022c1b
#define DAT_10022c1b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1d3U)))
#undef DAT_10022cbb
#define DAT_10022cbb (*(uint8_t *)(((uintptr_t)pf_module_state + 0x273U)))
#undef DAT_10023366
#define DAT_10023366 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x91eU)))
#undef DAT_10023367
#define DAT_10023367 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x91fU)))
#undef DAT_100233be
#define DAT_100233be (*(uint8_t *)(((uintptr_t)pf_module_state + 0x976U)))
#undef DAT_100233bf
#define DAT_100233bf (*(uint8_t *)(((uintptr_t)pf_module_state + 0x977U)))
#undef DAT_100233c0
#define DAT_100233c0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x978U)))
#undef DAT_100233f4
#define DAT_100233f4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x9acU)))
#undef str_100233f9
#define str_100233f9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x9b1U)))
#define local_4cd (*(byte (*)[512])(frame + 19))
#define local_2cd (*(byte (*)[256])(frame + 531))
#define local_1cd (*(byte (*)[128])(frame + 787))
#define local_14d (*(char *)(frame + 915))
#define local_14c (*(byte *)(frame + 916))
#define local_14b (*(byte *)(frame + 917))
#define local_14a (*(byte *)(frame + 918))
#define local_124 (*(char (*)[260])(frame + 956))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10013f60
 */

void recovered_10013f60(int *param_1,int *param_2,int *param_3,int *param_4,byte *param_5,
                       int param_6,uint param_7)

{
  unsigned char frame[1280] __attribute__((aligned(16))) = {0};

  int *piVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  uint uVar7;
  ulong uVar8;
  byte *pbVar9;
  undefined4 uVar10;
  ulong uVar11;
  byte *pbVar12;
  byte *pbVar13;
  ulong uVar14;
  byte *pbVar15;
  byte *unaff_r11;
  bool bVar16;
  bool bVar17;

  piVar1 = param_1;
  if (param_2 != (int *)0x0) {
    piVar1 = param_3;
  }
  if (param_2 != (int *)0x0 && piVar1 != (int *)0x0) {
    if (param_4 != (int *)0x0) {
      unaff_r11 = param_5;
    }
    if ((param_4 != (int *)0x0 && unaff_r11 != (byte *)0x0) && (local_124[0] = '\0', 0 < param_6)) {
      pbVar9 = unaff_r11 + param_6;
      uVar3 = param_7;
      if ((int)param_7 < 2) {
        uVar3 = 1;
      }
      bVar17 = false;
      do {
        uVar10 = 0;
        pcVar6 = &DAT_10022c1b;
        if (bVar17) {
          uVar10 = 2;
          pcVar6 = local_124;
        }
        while( true ) {
          if (*unaff_r11 == 0) {
            return;
          }
          uVar14 = (int)pbVar9 - (int)unaff_r11;
          if (*unaff_r11 == 0x3c) break;
          iVar4 = 0;
          do {
            if (unaff_r11[-iVar4] == 0x3c) {
              pbVar13 = unaff_r11 + -iVar4;
              goto LAB_10014024;
            }
            iVar4 = iVar4 + -1;
          } while ((int)unaff_r11 - (int)pbVar9 != iVar4);
          pbVar13 = (byte *)0x0;
LAB_10014024:
          if (pbVar13 != (byte *)0x0) {
            uVar14 = (int)pbVar13 - (int)unaff_r11;
          }
          if (0x1fe < (int)uVar14) {
            uVar14 = 0x1ff;
          }
          memcpy(local_4cd,unaff_r11,uVar14);
          local_4cd[uVar14] = 0;
          recovered_10019af8((uint)param_1,param_2,param_3,param_4,local_4cd,uVar10,pcVar6,param_7);
          unaff_r11 = pbVar13;
          if (pbVar13 == (byte *)0x0) {
            unaff_r11 = pbVar9;
          }
          if (pbVar9 <= unaff_r11) {
            return;
          }
        }
        uVar11 = 0;
        while (unaff_r11[uVar11] != 0x3e) {
          uVar11 = uVar11 + 1;
          if (uVar14 == uVar11) {
            return;
          }
        }
        uVar14 = uVar11 - 1;
        if (0xfe < (int)uVar14) {
          uVar14 = 0xff;
        }
        local_14d = '\0';
        memcpy(local_4cd,unaff_r11 + 1,uVar14);
        local_4cd[uVar14] = 0;
        recovered_1000ba88(local_4cd,&local_14c,0x28,&local_14d);
        pbVar13 = unaff_r11 + uVar11;
        uVar5 = (uint)local_14c;
        if (local_14d == '\x01') {
          pcVar6 = &DAT_10023366;
          if (uVar5 == 0) {
LAB_10014190:
            if (*pcVar6 == '\0') {
              bVar17 = false;
              unaff_r11 = pbVar13 + 1;
              local_124[0] = '\0';
              goto LAB_1001446c;
            }
          }
          else {
            if (uVar5 - 0x41 < 0x1a) {
              uVar5 = uVar5 | 0x20;
            }
            bVar16 = uVar5 == 0x61;
            if (bVar16) {
              uVar5 = (uint)local_14b;
            }
            if (bVar16 && uVar5 == 0) {
              pcVar6 = &DAT_10023367;
              goto LAB_10014190;
            }
          }
LAB_10014468:
          unaff_r11 = pbVar13 + 1;
        }
        else {
          pcVar6 = &DAT_100233be;
          if (uVar5 == 0) goto LAB_100143f8;
          uVar7 = (uint)local_14b;
          if (uVar5 - 0x41 < 0x1a) {
            uVar5 = uVar5 | 0x20;
          }
          if (uVar5 == 0x61 && uVar7 == 0) {
            pbVar12 = pbVar13 + 1;
            uVar14 = strlen(&DAT_100233f4);
            pbVar15 = (byte *)0x0;
            if ((uVar14 != 0) && (*pbVar12 != 0)) {
              pbVar15 = pbVar12;
              do {
                uVar8 = 0;
                while (uVar5 = (uint)pbVar15[uVar8], uVar5 != 0) {
                  uVar7 = (uint)(byte)(&DAT_100233f4)[uVar8];
                  if (uVar7 - 0x41 < 0x1a) {
                    uVar7 = uVar7 | 0x20;
                  }
                  if (uVar5 - 0x41 < 0x1a) {
                    uVar5 = uVar5 | 0x20;
                  }
                  if (uVar5 != uVar7) break;
                  uVar8 = uVar8 + 1;
                  if (uVar14 == uVar8) goto LAB_100142cc;
                }
                if (uVar14 == uVar8) goto LAB_100142cc;
                pbVar15 = pbVar15 + 1;
              } while (*pbVar15 != 0);
              pbVar15 = (byte *)0x0;
            }
LAB_100142cc:
            recovered_1000bd50((char *)local_4cd,&DAT_10022cbb,local_124,0x100);
            recovered_1000bd50((char *)local_4cd,str_100233f9,(char *)local_1cd,0x80);
            cVar2 = local_124[0];
            bVar17 = local_124[0] != '\0';
            if (((pbVar15 == (byte *)0x0) || (pbVar9 <= pbVar15)) ||
               (recovered_100169a4((int)param_1,pbVar12,(int)(pbVar15 + (~(uint)unaff_r11 - uVar11))
                                   ,(char *)local_2cd,0x100), local_2cd[0] == 0 && local_1cd[0] == 0
               )) goto LAB_10014468;
            pbVar13 = local_1cd;
            if (local_2cd[0] != 0) {
              pbVar13 = local_2cd;
            }
            pcVar6 = &DAT_10022c1b;
            if (cVar2 != '\0') {
              pcVar6 = local_124;
            }
            recovered_10019af8((uint)param_1,param_2,param_3,param_4,pbVar13,
                               (uint)(cVar2 != '\0') << 1,pcVar6,param_7);
            bVar17 = false;
            unaff_r11 = pbVar15 + 4;
            local_124[0] = '\0';
          }
          else {
            if (uVar5 == 0x62) {
              if (uVar7 == 0) {
                pcVar6 = &DAT_100233bf;
              }
              else {
                uVar5 = uVar7 - 0x41;
                if (uVar5 < 0x1a) {
                  uVar7 = uVar7 | 0x20;
                }
                if (uVar7 == 0x72) {
                  uVar5 = (uint)local_14a;
                }
                if (uVar7 != 0x72 || uVar5 != 0) goto LAB_10014404;
                pcVar6 = &DAT_100233c0;
              }
LAB_100143f8:
              if (*pcVar6 == '\0') {
                *param_3 = *param_2;
                *param_4 = (uVar3 << 3 | 4) + *param_4;
                goto LAB_10014468;
              }
            }
LAB_10014404:
            bVar16 = recovered_10013a08((int)param_1,(char *)local_4cd,(char *)&local_14c);
            if ((!bVar16) && (uVar5 = recovered_10014e0c(&local_14c), uVar5 == 0))
            goto LAB_10014468;
            unaff_r11 = recovered_10019cac(pbVar13,pbVar9,&local_14c);
          }
        }
LAB_1001446c:
      } while (unaff_r11 < pbVar9);
    }
  }
  return;
}

#undef DAT_10022c1b
#undef DAT_10022cbb
#undef DAT_10023366
#undef DAT_10023367
#undef DAT_100233be
#undef DAT_100233bf
#undef DAT_100233c0
#undef DAT_100233f4
#undef str_100233f9
#undef local_4cd
#undef local_2cd
#undef local_1cd
#undef local_14d
#undef local_14c
#undef local_14b
#undef local_14a
#undef local_124

#undef DAT_10022c1b
#define DAT_10022c1b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1d3U)))
#undef DAT_10022cbb
#define DAT_10022cbb (*(uint8_t *)(((uintptr_t)pf_module_state + 0x273U)))
#undef DAT_10023366
#define DAT_10023366 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x91eU)))
#undef DAT_10023367
#define DAT_10023367 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x91fU)))
#undef DAT_100233be
#define DAT_100233be (*(uint8_t *)(((uintptr_t)pf_module_state + 0x976U)))
#undef DAT_100233bf
#define DAT_100233bf (*(uint8_t *)(((uintptr_t)pf_module_state + 0x977U)))
#undef DAT_100233c0
#define DAT_100233c0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x978U)))
#undef DAT_100233ca
#define DAT_100233ca (*(uint8_t *)(((uintptr_t)pf_module_state + 0x982U)))
#undef DAT_100233f4
#define DAT_100233f4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x9acU)))
#undef str_100233f9
#define str_100233f9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x9b1U)))
#define local_4d5 (*(byte (*)[512])(frame + 27))
#define local_2d5 (*(byte (*)[256])(frame + 539))
#define local_1d5 (*(byte (*)[128])(frame + 795))
#define local_155 (*(char *)(frame + 923))
#define local_154 (*(byte *)(frame + 924))
#define local_153 (*(byte *)(frame + 925))
#define local_152 (*(byte *)(frame + 926))
#define local_12c (*(char (*)[256])(frame + 964))
#define local_2c (*(int *)(frame + 1220))
#define local_28 (*(int (*)[2])(frame + 1224))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10014478
 */

void recovered_10014478(uint param_1,int *param_2,byte *param_3,int param_4,uint param_5)

{
  unsigned char frame[1296] __attribute__((aligned(16))) = {0};

  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  uint uVar6;
  ulong uVar7;
  byte *pbVar8;
  undefined4 uVar9;
  byte *pbVar10;
  byte *pbVar11;
  ulong uVar12;
  byte *pbVar13;
  ulong uVar14;
  byte *unaff_r11;
  bool bVar15;
  bool bVar16;

  if (param_2 != (int *)0x0) {
    unaff_r11 = param_3;
  }
  if (param_2 != (int *)0x0 && param_3 != (byte *)0x0) {
    local_28[0] = *param_2;
    local_2c = param_2[2];
    local_12c[0] = '\0';
    recovered_1001a384(param_1,param_2,local_28,&local_2c,&DAT_100233ca,0,&DAT_10022c1b,param_5);
    uVar2 = param_5;
    if (param_4 < 1) {
      if ((int)param_5 < 2) {
        uVar2 = 1;
      }
    }
    else {
      if ((int)param_5 < 2) {
        uVar2 = 1;
      }
      pbVar8 = unaff_r11 + param_4;
      bVar16 = false;
      do {
        uVar9 = 0;
        pcVar5 = &DAT_10022c1b;
        if (bVar16) {
          uVar9 = 2;
          pcVar5 = local_12c;
        }
        while( true ) {
          if (*unaff_r11 == 0) goto LAB_10014a20;
          uVar12 = (int)pbVar8 - (int)unaff_r11;
          if (*unaff_r11 == 0x3c) break;
          iVar3 = 0;
          do {
            if (unaff_r11[-iVar3] == 0x3c) {
              pbVar10 = unaff_r11 + -iVar3;
              goto LAB_10014554;
            }
            iVar3 = iVar3 + -1;
          } while ((int)unaff_r11 - (int)pbVar8 != iVar3);
          pbVar10 = (byte *)0x0;
LAB_10014554:
          if (pbVar10 != (byte *)0x0) {
            uVar12 = (int)pbVar10 - (int)unaff_r11;
          }
          if (0x1fe < (int)uVar12) {
            uVar12 = 0x1ff;
          }
          memcpy(local_4d5,unaff_r11,uVar12);
          local_4d5[uVar12] = 0;
          recovered_10019af8(param_1,param_2,local_28,&local_2c,local_4d5,uVar9,pcVar5,param_5);
          unaff_r11 = pbVar10;
          if (pbVar10 == (byte *)0x0) {
            unaff_r11 = pbVar8;
          }
          if (pbVar8 <= unaff_r11) goto LAB_10014a20;
        }
        uVar14 = 0;
        while (unaff_r11[uVar14] != 0x3e) {
          uVar14 = uVar14 + 1;
          if (uVar12 == uVar14) goto LAB_10014a20;
        }
        uVar12 = uVar14 - 1;
        if (0xfe < (int)uVar12) {
          uVar12 = 0xff;
        }
        local_155 = '\0';
        memcpy(local_4d5,unaff_r11 + 1,uVar12);
        local_4d5[uVar12] = 0;
        recovered_1000ba88(local_4d5,&local_154,0x28,&local_155);
        pbVar10 = unaff_r11 + uVar14;
        uVar4 = (uint)local_154;
        if (local_155 == '\x01') {
          pcVar5 = &DAT_10023366;
          if (uVar4 == 0) {
LAB_100146f0:
            if (*pcVar5 == '\0') {
              bVar16 = false;
              local_12c[0] = '\0';
            }
          }
          else {
            if (uVar4 - 0x41 < 0x1a) {
              uVar4 = uVar4 | 0x20;
            }
            bVar15 = uVar4 == 0x61;
            if (bVar15) {
              uVar4 = (uint)local_153;
            }
            if (bVar15 && uVar4 == 0) {
              pcVar5 = &DAT_10023367;
              goto LAB_100146f0;
            }
          }
LAB_100149fc:
          unaff_r11 = pbVar10 + 1;
        }
        else {
          pcVar5 = &DAT_100233be;
          if (uVar4 == 0) goto LAB_1001496c;
          uVar6 = (uint)local_153;
          if (uVar4 - 0x41 < 0x1a) {
            uVar4 = uVar4 | 0x20;
          }
          if (uVar4 == 0x61 && uVar6 == 0) {
            pbVar11 = pbVar10 + 1;
            uVar12 = strlen(&DAT_100233f4);
            pbVar13 = (byte *)0x0;
            if ((uVar12 != 0) && (*pbVar11 != 0)) {
              pbVar13 = pbVar11;
              do {
                uVar7 = 0;
                while (uVar4 = (uint)pbVar13[uVar7], uVar4 != 0) {
                  uVar6 = (uint)(byte)(&DAT_100233f4)[uVar7];
                  if (uVar6 - 0x41 < 0x1a) {
                    uVar6 = uVar6 | 0x20;
                  }
                  if (uVar4 - 0x41 < 0x1a) {
                    uVar4 = uVar4 | 0x20;
                  }
                  if (uVar4 != uVar6) break;
                  uVar7 = uVar7 + 1;
                  if (uVar12 == uVar7) goto LAB_10014820;
                }
                if (uVar12 == uVar7) goto LAB_10014820;
                pbVar13 = pbVar13 + 1;
              } while (*pbVar13 != 0);
              pbVar13 = (byte *)0x0;
            }
LAB_10014820:
            recovered_1000bd50((char *)local_4d5,&DAT_10022cbb,local_12c,0x100);
            recovered_1000bd50((char *)local_4d5,str_100233f9,(char *)local_1d5,0x80);
            cVar1 = local_12c[0];
            bVar16 = local_12c[0] != '\0';
            if (((pbVar13 == (byte *)0x0) || (pbVar8 <= pbVar13)) ||
               (recovered_100169a4(param_1,pbVar11,(int)(pbVar13 + (~(uint)unaff_r11 - uVar14)),
                                   (char *)local_2d5,0x100), local_2d5[0] == 0 && local_1d5[0] == 0)
               ) goto LAB_100149fc;
            pbVar10 = local_1d5;
            if (local_2d5[0] != 0) {
              pbVar10 = local_2d5;
            }
            pcVar5 = &DAT_10022c1b;
            if (cVar1 != '\0') {
              pcVar5 = local_12c;
            }
            recovered_10019af8(param_1,param_2,local_28,&local_2c,pbVar10,(uint)(cVar1 != '\0') << 1
                               ,pcVar5,param_5);
            bVar16 = false;
            local_12c[0] = '\0';
            unaff_r11 = pbVar13 + 4;
          }
          else {
            if (uVar4 == 0x62) {
              if (uVar6 == 0) {
                pcVar5 = &DAT_100233bf;
              }
              else {
                uVar4 = uVar6 - 0x41;
                if (uVar4 < 0x1a) {
                  uVar6 = uVar6 | 0x20;
                }
                if (uVar6 == 0x72) {
                  uVar4 = (uint)local_152;
                }
                if (uVar6 != 0x72 || uVar4 != 0) goto LAB_10014984;
                pcVar5 = &DAT_100233c0;
              }
LAB_1001496c:
              if (*pcVar5 == '\0') {
                local_28[0] = *param_2;
                local_2c = (uVar2 << 3 | 4) + local_2c;
                goto LAB_100149fc;
              }
            }
LAB_10014984:
            bVar15 = recovered_10013a08(param_1,(char *)local_4d5,(char *)&local_154);
            if ((!bVar15) && (uVar4 = recovered_10014e0c(&local_154), uVar4 == 0))
            goto LAB_100149fc;
            unaff_r11 = recovered_10019cac(pbVar10,pbVar8,&local_154);
          }
        }
      } while (unaff_r11 < pbVar8);
    }
LAB_10014a20:
    param_2[2] = local_2c + uVar2 * 8 + 5;
  }
  return;
}

#undef DAT_10022c1b
#undef DAT_10022cbb
#undef DAT_10023366
#undef DAT_10023367
#undef DAT_100233be
#undef DAT_100233bf
#undef DAT_100233c0
#undef DAT_100233ca
#undef DAT_100233f4
#undef str_100233f9
#undef local_4d5
#undef local_2d5
#undef local_1d5
#undef local_155
#undef local_154
#undef local_153
#undef local_152
#undef local_12c
#undef local_2c
#undef local_28

#undef DAT_10022ca6
#define DAT_10022ca6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x25eU)))
#undef DAT_10024114
#define DAT_10024114 (*(int *)(((uintptr_t)pf_module_state + 0x16ccU)))
#undef EXT_00000008
#define EXT_00000008 (*(uint8_t *)(0x8U))
#define auStack_3a4 (*(undefined1 (*)[96])(frame + 28))
#define local_344 (*(undefined1 (*)[95])(frame + 124))
#define local_2e5 (*(undefined1 *)(frame + 219))
#define local_2e4 (*(char (*)[192])(frame + 220))
#define local_224 (*(byte (*)[516])(frame + 412))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10014a40
 */

void recovered_10014a40(int param_1,byte *param_2,int param_3,undefined1 *param_4,int param_5,
                       int param_6,int *param_7)

{
  unsigned char frame[992] __attribute__((aligned(16))) = {0};

  int a;
  int *piVar1;
  ulong uVar2;
  byte *pbVar3;
  uint uVar4;
  undefined1 *puVar5;
  char *pcVar6;
  int iVar7;
  int *piVar8;
  byte *pbVar9;
  int *piVar10;
  int *n;

  if (param_7 == (int *)0x0) {
    a = DAT_10024114 + -0x48;
  }
  else {
    a = param_7[1];
  }
  iVar7 = param_5;
  if (param_5 < 2) {
    iVar7 = 1;
  }
  piVar1 = (int *)recovered_100039d8(a,iVar7 * 6);
  piVar10 = piVar1;
  if ((int)piVar1 < 9) {
    piVar10 = (int *)&SupervisorCall;
  }
  if (param_2 != (byte *)0x0) {
    piVar1 = param_7;
  }
  if (param_2 != (byte *)0x0 && piVar1 != (int *)0x0) {
    uVar2 = strlen((char *)param_2);
    pbVar9 = local_224;
    recovered_100169a4(param_1,param_2,uVar2,(char *)pbVar9,0x200);
    local_2e4[0] = '\0';
    while (uVar4 = (uint)local_224[0], uVar4 != 0) {
      while( true ) {
        if ((0x17 < uVar4 - 9) || ((1 << (uVar4 - 9 & 0xff) & 0x80001bU) == 0)) break;
        pbVar9 = pbVar9 + 1;
        uVar4 = (uint)*pbVar9;
      }
      piVar1 = (int *)0x0;
      while( true ) {
        if (uVar4 < 0x21) {
                    /* WARNING: Could not find normalized switch variable to match jumptable */
          switch((uintptr_t)(uVar4)) {
          case 0:
          case 9:
          case 10:
          case 0xc:
          case 0xd:
          case 0x20:
            local_344[(int)piVar1] = 0;
            if (piVar1 == (int *)0x0) goto LAB_10014dd4;
            goto LAB_10014c08;
          }
        }
        if (piVar1 == (int *)0x5f) break;
        local_344[(int)piVar1] = (char)uVar4;
        pbVar3 = pbVar9 + (int)piVar1;
        piVar1 = (int *)((int)piVar1 + 1);
        uVar4 = (uint)pbVar3[1];
      }
      local_2e5 = 0;
      piVar1 = (int *)0x5f;
LAB_10014c08:
      uVar2 = strlen(local_2e4);
      puVar5 = (undefined1 *)(uVar2 + (int)piVar1);
      if (local_2e4[0] != '\0') {
        puVar5 = puVar5 + 1;
      }
      if ((int)piVar10 < (int)puVar5) {
        recovered_1001a7d8(param_1,param_3,param_4,local_2e4,param_5,param_6,param_7);
      }
      if (piVar10 < piVar1) {
        piVar8 = (int *)0x0;
        do {
          n = (int *)((int)piVar1 - (int)piVar8);
          if (piVar10 < (int *)((int)piVar1 - (int)piVar8)) {
            n = piVar10;
          }
          memcpy(auStack_3a4,local_344 + (int)piVar8,(ulong)n);
          auStack_3a4[(int)n] = 0;
          recovered_1001a7d8(param_1,param_3,param_4,local_2e4,param_5,param_6,param_7);
          pf_varargs_10023fa4__4_(local_2e4,0xc0,&DAT_10022ca6,(uint)auStack_3a4);
          recovered_1001a7d8(param_1,param_3,param_4,local_2e4,param_5,param_6,param_7);
          piVar8 = (int *)((int)n + (int)piVar8);
        } while (piVar8 < piVar1);
      }
      else {
        if ((local_2e4[0] != '\0') && (uVar2 = strlen(local_2e4), uVar2 < 0xbf)) {
          pcVar6 = local_2e4 + uVar2;
          pcVar6[0] = ' ';
          pcVar6[1] = '\0';
        }
        uVar2 = strlen(local_2e4);
        if (uVar2 < 0xbf) {
          pf_varargs_10023fa4__4_(local_2e4 + uVar2,0xc0 - uVar2,&DAT_10022ca6,(uint)local_344);
        }
      }
      pbVar9 = pbVar9 + (int)piVar1;
      local_224[0] = *pbVar9;
    }
LAB_10014dd4:
    recovered_1001a7d8(param_1,param_3,param_4,local_2e4,param_5,param_6,param_7);
  }
  return;
}

#undef DAT_10022ca6
#undef DAT_10024114
#undef EXT_00000008
#undef auStack_3a4
#undef local_344
#undef local_2e5
#undef local_2e4
#undef local_224

#undef DAT_100235b2
#define DAT_100235b2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb6aU)))
#undef DAT_100235b3
#define DAT_100235b3 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb6bU)))
#undef DAT_100235b4
#define DAT_100235b4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb6cU)))
#undef DAT_100235b5
#define DAT_100235b5 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb6dU)))
#undef DAT_100235bd
#define DAT_100235bd (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb75U)))
#undef DAT_100235be
#define DAT_100235be (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb76U)))
#undef DAT_100235bf
#define DAT_100235bf (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb77U)))
#undef DAT_100235c0
#define DAT_100235c0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb78U)))
#undef DAT_100235c1
#define DAT_100235c1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb79U)))
#undef DAT_100235c2
#define DAT_100235c2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb7aU)))
#undef str_10022ce5
#define str_10022ce5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x29dU)))
#undef str_10022cf4
#define str_10022cf4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2acU)))
#undef str_10023557
#define str_10023557 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb0fU)))
#undef str_100235b6
#define str_100235b6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb6eU)))
#undef str_100235c3
#define str_100235c3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb7bU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10014e0c
 */

uint recovered_10014e0c(byte *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  char *pcVar3;
  uint uVar4;
  bool bVar5;

  if (param_1 == (byte *)0x0) goto LAB_10015410;
  uVar4 = (uint)*param_1;
  if (uVar4 == 0) {
    pcVar3 = str_10022ce5;
LAB_10014f00:
    if (*pcVar3 == '\0') {
      return 1;
    }
    if (uVar4 != 0) goto LAB_10014ff0;
    pcVar3 = &DAT_100235b2;
LAB_100151fc:
    if (*pcVar3 == '\0') {
      return 1;
    }
    if (uVar4 != 0) goto LAB_10015210;
    pcVar3 = &DAT_100235bd;
  }
  else {
    uVar2 = uVar4;
    if (uVar4 - 0x41 < 0x1a) {
      uVar2 = uVar4 | 0x20;
    }
    if (uVar2 == 0x73) {
      uVar2 = (uint)param_1[1];
      if (uVar2 == 0) {
        pcVar3 = str_10022cf4 + 1;
LAB_10014f48:
        if (*pcVar3 == '\0') {
          return 1;
        }
      }
      else {
        if (uVar2 - 0x41 < 0x1a) {
          uVar2 = uVar2 | 0x20;
        }
        if (uVar2 == 99) {
          uVar2 = (uint)param_1[2];
          if (uVar2 == 0) {
            pcVar3 = str_10022cf4 + 2;
          }
          else {
            if (uVar2 - 0x41 < 0x1a) {
              uVar2 = uVar2 | 0x20;
            }
            if (uVar2 != 0x72) goto code_r0x10014f5c;
            uVar2 = (uint)param_1[3];
            if (uVar2 == 0) {
              pcVar3 = str_10022cf4 + 3;
            }
            else {
              if (uVar2 - 0x41 < 0x1a) {
                uVar2 = uVar2 | 0x20;
              }
              if (uVar2 != 0x69) goto code_r0x10014f5c;
              uVar2 = (uint)param_1[4];
              if (uVar2 == 0) {
                pcVar3 = str_10022cf4 + 4;
              }
              else {
                if (uVar2 - 0x41 < 0x1a) {
                  uVar2 = uVar2 | 0x20;
                }
                if (uVar2 != 0x70) goto code_r0x10014f5c;
                uVar2 = (uint)param_1[5];
                if (uVar2 == 0) {
                  pcVar3 = str_10022cf4 + 5;
                }
                else {
                  uVar1 = uVar2 - 0x41;
                  if (uVar1 < 0x1a) {
                    uVar2 = uVar2 | 0x20;
                  }
                  if (uVar2 == 0x74) {
                    uVar1 = (uint)param_1[6];
                  }
                  if (uVar2 != 0x74 || uVar1 != 0) goto code_r0x10014f5c;
                  pcVar3 = str_10022cf4 + 6;
                }
              }
            }
          }
          goto LAB_10014f48;
        }
      }
code_r0x10014f5c:
      uVar2 = (uint)param_1[1];
      if (uVar2 == 0) {
        pcVar3 = str_10022ce5 + 1;
      }
      else {
        if (uVar2 - 0x41 < 0x1a) {
          uVar2 = uVar2 | 0x20;
        }
        if (uVar2 != 0x74) goto LAB_10014ff0;
        uVar2 = (uint)param_1[2];
        if (uVar2 == 0) {
          pcVar3 = str_10022ce5 + 2;
        }
        else {
          if (uVar2 - 0x41 < 0x1a) {
            uVar2 = uVar2 | 0x20;
          }
          if (uVar2 != 0x79) goto LAB_10014ff0;
          uVar2 = (uint)param_1[3];
          if (uVar2 == 0) {
            pcVar3 = str_10022ce5 + 3;
          }
          else {
            if (uVar2 - 0x41 < 0x1a) {
              uVar2 = uVar2 | 0x20;
            }
            if (uVar2 != 0x6c) goto LAB_10014ff0;
            uVar2 = (uint)param_1[4];
            if (uVar2 == 0) {
              pcVar3 = str_10022ce5 + 4;
            }
            else {
              uVar1 = uVar2 - 0x41;
              if (uVar1 < 0x1a) {
                uVar2 = uVar2 | 0x20;
              }
              if (uVar2 == 0x65) {
                uVar1 = (uint)param_1[5];
              }
              if (uVar2 != 0x65 || uVar1 != 0) goto LAB_10014ff0;
              pcVar3 = str_10022ce5 + 5;
            }
          }
        }
      }
      goto LAB_10014f00;
    }
LAB_10014ff0:
    uVar2 = uVar4;
    if (uVar4 - 0x41 < 0x1a) {
      uVar2 = uVar4 | 0x20;
    }
    if (uVar2 == 0x73) {
      uVar2 = (uint)param_1[1];
      if (uVar2 == 0) {
        pcVar3 = &DAT_100235b3;
      }
      else {
        if (uVar2 - 0x41 < 0x1a) {
          uVar2 = uVar2 | 0x20;
        }
        if (uVar2 != 0x76) goto LAB_10015210;
        uVar2 = (uint)param_1[2];
        if (uVar2 == 0) {
          pcVar3 = &DAT_100235b4;
        }
        else {
          uVar1 = uVar2 - 0x41;
          if (uVar1 < 0x1a) {
            uVar2 = uVar2 | 0x20;
          }
          if (uVar2 == 0x67) {
            uVar1 = (uint)param_1[3];
          }
          if (uVar2 != 0x67 || uVar1 != 0) goto LAB_10015210;
          pcVar3 = &DAT_100235b5;
        }
      }
      goto LAB_100151fc;
    }
    if (uVar2 == 0x74) {
      uVar2 = (uint)param_1[1];
      if (uVar2 == 0) {
        pcVar3 = str_10023557 + 1;
      }
      else {
        if (uVar2 - 0x41 < 0x1a) {
          uVar2 = uVar2 | 0x20;
        }
        if (uVar2 != 0x65) goto LAB_10015210;
        uVar2 = (uint)param_1[2];
        if (uVar2 == 0) {
          pcVar3 = str_10023557 + 2;
        }
        else {
          if (uVar2 - 0x41 < 0x1a) {
            uVar2 = uVar2 | 0x20;
          }
          if (uVar2 != 0x6d) goto LAB_10015210;
          uVar2 = (uint)param_1[3];
          if (uVar2 == 0) {
            pcVar3 = str_10023557 + 3;
          }
          else {
            if (uVar2 - 0x41 < 0x1a) {
              uVar2 = uVar2 | 0x20;
            }
            if (uVar2 != 0x70) goto LAB_10015210;
            uVar2 = (uint)param_1[4];
            if (uVar2 == 0) {
              pcVar3 = str_10023557 + 4;
            }
            else {
              if (uVar2 - 0x41 < 0x1a) {
                uVar2 = uVar2 | 0x20;
              }
              if (uVar2 != 0x6c) goto LAB_10015210;
              uVar2 = (uint)param_1[5];
              if (uVar2 == 0) {
                pcVar3 = str_10023557 + 5;
              }
              else {
                if (uVar2 - 0x41 < 0x1a) {
                  uVar2 = uVar2 | 0x20;
                }
                if (uVar2 != 0x61) goto LAB_10015210;
                uVar2 = (uint)param_1[6];
                if (uVar2 == 0) {
                  pcVar3 = str_10023557 + 6;
                }
                else {
                  if (uVar2 - 0x41 < 0x1a) {
                    uVar2 = uVar2 | 0x20;
                  }
                  if (uVar2 != 0x74) goto LAB_10015210;
                  uVar2 = (uint)param_1[7];
                  if (uVar2 == 0) {
                    pcVar3 = str_10023557 + 7;
                  }
                  else {
                    uVar1 = uVar2 - 0x41;
                    if (uVar1 < 0x1a) {
                      uVar2 = uVar2 | 0x20;
                    }
                    if (uVar2 == 0x65) {
                      uVar1 = (uint)param_1[8];
                    }
                    if (uVar2 != 0x65 || uVar1 != 0) goto LAB_10015210;
                    pcVar3 = str_10023557 + 8;
                  }
                }
              }
            }
          }
        }
      }
      if (*pcVar3 == '\0') {
        return 1;
      }
      if (uVar4 == 0) {
        pcVar3 = &DAT_100235b2;
        goto LAB_100151fc;
      }
    }
LAB_10015210:
    uVar2 = uVar4;
    if (uVar4 - 0x41 < 0x1a) {
      uVar2 = uVar4 | 0x20;
    }
    if (uVar2 == 0x61) {
      uVar4 = (uint)param_1[1];
      if (uVar4 == 0) {
        pcVar3 = &DAT_100235be;
      }
      else {
        if (uVar4 - 0x41 < 0x1a) {
          uVar4 = uVar4 | 0x20;
        }
        if (uVar4 != 0x75) goto LAB_10015410;
        uVar4 = (uint)param_1[2];
        if (uVar4 == 0) {
          pcVar3 = &DAT_100235bf;
        }
        else {
          if (uVar4 - 0x41 < 0x1a) {
            uVar4 = uVar4 | 0x20;
          }
          if (uVar4 != 100) goto LAB_10015410;
          uVar4 = (uint)param_1[3];
          if (uVar4 == 0) {
            pcVar3 = &DAT_100235c0;
          }
          else {
            if (uVar4 - 0x41 < 0x1a) {
              uVar4 = uVar4 | 0x20;
            }
            if (uVar4 != 0x69) goto LAB_10015410;
            uVar4 = (uint)param_1[4];
            if (uVar4 == 0) {
              pcVar3 = &DAT_100235c1;
            }
            else {
              if (uVar4 - 0x41 < 0x1a) {
                uVar4 = uVar4 | 0x20;
              }
              bVar5 = uVar4 != 0x6f;
              if (!bVar5) {
                uVar4 = (uint)param_1[5];
              }
              if (bVar5 || uVar4 != 0) goto LAB_10015410;
              pcVar3 = &DAT_100235c2;
            }
          }
        }
      }
    }
    else {
      if (uVar2 != 99) goto LAB_10015410;
      uVar2 = (uint)param_1[1];
      if (uVar2 == 0) {
        pcVar3 = str_100235b6 + 1;
      }
      else {
        if (uVar2 - 0x41 < 0x1a) {
          uVar2 = uVar2 | 0x20;
        }
        if (uVar2 != 0x61) goto LAB_10015410;
        uVar2 = (uint)param_1[2];
        if (uVar2 == 0) {
          pcVar3 = str_100235b6 + 2;
        }
        else {
          if (uVar2 - 0x41 < 0x1a) {
            uVar2 = uVar2 | 0x20;
          }
          if (uVar2 != 0x6e) goto LAB_10015410;
          uVar2 = (uint)param_1[3];
          if (uVar2 == 0) {
            pcVar3 = str_100235b6 + 3;
          }
          else {
            if (uVar2 - 0x41 < 0x1a) {
              uVar2 = uVar2 | 0x20;
            }
            if (uVar2 != 0x76) goto LAB_10015410;
            uVar2 = (uint)param_1[4];
            if (uVar2 == 0) {
              pcVar3 = str_100235b6 + 4;
            }
            else {
              if (uVar2 - 0x41 < 0x1a) {
                uVar2 = uVar2 | 0x20;
              }
              if (uVar2 != 0x61) goto LAB_10015410;
              uVar2 = (uint)param_1[5];
              if (uVar2 == 0) {
                pcVar3 = str_100235b6 + 5;
              }
              else {
                uVar1 = uVar2 - 0x41;
                if (uVar1 < 0x1a) {
                  uVar2 = uVar2 | 0x20;
                }
                if (uVar2 == 0x73) {
                  uVar1 = (uint)param_1[6];
                }
                if (uVar2 != 0x73 || uVar1 != 0) goto LAB_10015410;
                pcVar3 = str_100235b6 + 6;
              }
            }
          }
        }
      }
      if (*pcVar3 == '\0') {
        return 1;
      }
      if (uVar4 != 0) goto LAB_10015410;
      pcVar3 = &DAT_100235bd;
    }
  }
  if (*pcVar3 == '\0') {
    return 1;
  }
LAB_10015410:
  bVar5 = recovered_1000bcd4(param_1,(byte *)str_100235c3);
  return (uint)bVar5;
}

#undef DAT_100235b2
#undef DAT_100235b3
#undef DAT_100235b4
#undef DAT_100235b5
#undef DAT_100235bd
#undef DAT_100235be
#undef DAT_100235bf
#undef DAT_100235c0
#undef DAT_100235c1
#undef DAT_100235c2
#undef str_10022ce5
#undef str_10022cf4
#undef str_10023557
#undef str_100235b6
#undef str_100235c3

#define local_380 (*(undefined4 *)(frame + 32))
#define local_24 (*(undefined1 *)(frame + 892))
#define local_390 (*(undefined4 *)(frame + 16))
#define local_38c (*(undefined4 *)(frame + 20))
#define local_388 (*(int *)(frame + 24))
#define local_384 (*(undefined4 *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10015428
 */

void recovered_10015428(int param_1,undefined4 *param_2)

{
  unsigned char frame[960] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;

  if (param_2 == (undefined4 *)0x0) {
    return;
  }
  memset(&local_390,0,0x370);
  local_390 = 6;
  iVar1 = param_2[2];
  uVar2 = *(uint *)(param_1 + 0x52c2c);
  local_380 = 1;
  local_388 = iVar1 + 9;
  local_38c = *param_2;
  local_384 = param_2[1];
  local_24 = *(undefined1 *)(param_2 + 3);
  if (uVar2 >> 7 < 3) {
    *(uint *)(param_1 + 0x52c2c) = uVar2 + 1;
    memcpy((void *)(uVar2 * 0x370 + param_1 + 0x42c),&local_390,0x370);
    iVar1 = param_2[2];
  }
  param_2[2] = iVar1 + 0x16;
  return;
}

#undef local_380
#undef local_24
#undef local_390
#undef local_38c
#undef local_388
#undef local_384

#undef DAT_10023387
#define DAT_10023387 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x93fU)))
#undef DAT_10023388
#define DAT_10023388 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x940U)))
#undef DAT_10023389
#define DAT_10023389 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x941U)))
#undef DAT_1002338a
#define DAT_1002338a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x942U)))
#undef DAT_1002338b
#define DAT_1002338b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x943U)))
#undef DAT_10023445
#define DAT_10023445 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x9fdU)))
#undef DAT_10023541
#define DAT_10023541 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xaf9U)))
#undef DAT_10023542
#define DAT_10023542 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xafaU)))
#undef DAT_10023543
#define DAT_10023543 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xafbU)))
#undef DAT_10023544
#define DAT_10023544 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xafcU)))
#undef DAT_100235ae
#define DAT_100235ae (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb66U)))
#undef DAT_100235c9
#define DAT_100235c9 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb81U)))
#undef DAT_100235d9
#define DAT_100235d9 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb91U)))
#undef DAT_100235de
#define DAT_100235de (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb96U)))
#undef DAT_100235e3
#define DAT_100235e3 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb9bU)))
#undef DAT_100235e4
#define DAT_100235e4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb9cU)))
#undef DAT_100235e5
#define DAT_100235e5 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb9dU)))
#undef DAT_100235e6
#define DAT_100235e6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb9eU)))
#undef str_10022ce5
#define str_10022ce5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x29dU)))
#undef str_100233d6
#define str_100233d6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x98eU)))
#undef str_10023596
#define str_10023596 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb4eU)))
#undef str_100235ce
#define str_100235ce (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb86U)))
#undef str_100235e7
#define str_100235e7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb9fU)))
#undef str_100235f3
#define str_100235f3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xbabU)))
#undef str_100235fa
#define str_100235fa (*(char (*)[1])(((uintptr_t)pf_module_state + 0xbb2U)))
#define acStack_868 (*(char (*)[112])(frame + 1112))
#define local_ca8 (*(byte *)(frame + 24))
#define local_ca7 (*(byte (*)[63])(frame + 25))
#define acStack_84 (*(char (*)[100])(frame + 3132))
#define local_c68 (*(char *)(frame + 88))
#define local_c67 (*(char (*)[1023])(frame + 89))
#define local_7f8 (*(char (*)[96])(frame + 1224))
#define local_798 (*(byte (*)[180])(frame + 1320))
#define local_6e4 (*(byte *)(frame + 1500))
#define local_6e3 (*(byte (*)[511])(frame + 1501))
#define local_4e4 (*(char (*)[96])(frame + 2012))
#define local_484 (*(char *)(frame + 2108))
#define local_483 (*(char (*)[1023])(frame + 2109))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100154ec
 */

bool recovered_100154ec(int param_1,int param_2,byte *param_3)

{
  unsigned char frame[3296] __attribute__((aligned(16))) = {0};

  char cVar1;
  int iVar2;
  char *pcVar3;
  ulong uVar4;
  uint uVar5;
  ulong uVar6;
  ulong extraout_r1;
  uint uVar7;
  char *pcVar8;
  byte *pbVar9;
  byte *unaff_r5;
  uint uVar10;
  char *pcVar11;
  bool bVar12;

  if (param_2 != 0) {
    unaff_r5 = param_3;
  }
  if (param_2 == 0 || param_3 == (byte *)0x0) {
    return false;
  }
  uVar5 = (uint)*unaff_r5;
  if (uVar5 == 0) {
    pcVar8 = &DAT_10023389;
LAB_100155f8:
    if (*pcVar8 != '\0') {
      if (uVar5 != 0) goto LAB_1001560c;
      pcVar8 = &DAT_10023541;
LAB_10015698:
      if (*pcVar8 != '\0') {
        return false;
      }
    }
  }
  else {
    uVar7 = uVar5;
    if (uVar5 - 0x41 < 0x1a) {
      uVar7 = uVar5 | 0x20;
    }
    if (uVar7 == 0x6f) {
      uVar7 = (uint)unaff_r5[1];
      if (uVar7 == 0) {
        pcVar8 = &DAT_1002338a;
      }
      else {
        if (uVar7 - 0x41 < 0x1a) {
          uVar7 = uVar7 | 0x20;
        }
        bVar12 = uVar7 != 0x6c;
        if (!bVar12) {
          uVar7 = (uint)unaff_r5[2];
        }
        if (bVar12 || uVar7 != 0) goto LAB_1001560c;
        pcVar8 = &DAT_1002338b;
      }
      goto LAB_100155f8;
    }
    if (uVar7 != 0x75) {
LAB_1001560c:
      if (uVar5 - 0x41 < 0x1a) {
        uVar5 = uVar5 | 0x20;
      }
      if (uVar5 != 0x6e) {
        return false;
      }
      uVar5 = (uint)unaff_r5[1];
      if (uVar5 == 0) {
        pcVar8 = &DAT_10023542;
      }
      else {
        if (uVar5 - 0x41 < 0x1a) {
          uVar5 = uVar5 | 0x20;
        }
        if (uVar5 != 0x61) {
          return false;
        }
        uVar5 = (uint)unaff_r5[2];
        if (uVar5 == 0) {
          pcVar8 = &DAT_10023543;
        }
        else {
          if (uVar5 - 0x41 < 0x1a) {
            uVar5 = uVar5 | 0x20;
          }
          bVar12 = uVar5 != 0x76;
          if (!bVar12) {
            uVar5 = (uint)unaff_r5[3];
          }
          if (bVar12 || uVar5 != 0) {
            return false;
          }
          pcVar8 = &DAT_10023544;
        }
      }
      goto LAB_10015698;
    }
    uVar7 = (uint)unaff_r5[1];
    if (uVar7 == 0) {
      pcVar8 = &DAT_10023387;
    }
    else {
      if (uVar7 - 0x41 < 0x1a) {
        uVar7 = uVar7 | 0x20;
      }
      bVar12 = uVar7 == 0x6c;
      if (bVar12) {
        uVar7 = (uint)unaff_r5[2];
      }
      if (!bVar12 || uVar7 != 0) goto LAB_1001560c;
      pcVar8 = &DAT_10023388;
    }
    if (*pcVar8 != '\0') goto LAB_1001560c;
  }
  local_ca8 = 0;
  recovered_1000bd50((char *)param_2,str_10022ce5,(char *)&local_6e4,0x200);
  if ((local_6e4 == 0) ||
     (bVar12 = recovered_10012350((char *)&local_6e4,str_10023596,(char *)&local_ca8,0x40), !bVar12)
     ) {
    recovered_1000bd50((char *)param_2,&DAT_10023445,local_7f8,0x60);
    if (local_7f8[0] != '\0') {
      pf_varargs_10023fa4__4_(acStack_868,0x70,&DAT_100235ae,(uint)local_7f8);
      iVar2 = recovered_10012054(*(char **)(param_1 + 0x314),acStack_868,&local_c68);
      if ((iVar2 != 0) &&
         (bVar12 = recovered_10012350(&local_c68,str_10023596,(char *)&local_ca8,0x40), bVar12))
      goto LAB_10015a5c;
    }
    pbVar9 = local_798;
    recovered_1000bd50((char *)param_2,str_100233d6,(char *)pbVar9,0xb4);
    uVar5 = (uint)local_798[0];
    if (uVar5 != 0) {
      local_ca8 = 0;
LAB_100157e4:
      while ((uVar5 - 9 < 0x18 && ((1 << (uVar5 - 9 & 0xff) & 0x80001bU) != 0))) {
        pbVar9 = pbVar9 + 1;
        uVar5 = (uint)*pbVar9;
      }
      iVar2 = 0;
      while( true ) {
        if (uVar5 < 0x21) {
                    /* WARNING: Could not find normalized switch variable to match jumptable */
          switch((uintptr_t)(uVar5)) {
          case 0:
          case 9:
          case 10:
          case 0xc:
          case 0xd:
          case 0x20:
            goto LAB_100158bc;
          }
        }
        if (iVar2 == 0x5f) break;
        local_4e4[iVar2] = (char)uVar5;
        uVar5 = (uint)pbVar9[iVar2 + 1];
        iVar2 = iVar2 + 1;
      }
      iVar2 = 0x5f;
LAB_100158bc:
      pbVar9 = pbVar9 + iVar2;
      local_4e4[iVar2] = '\0';
      if (local_4e4[0] != '\0') {
        pf_varargs_10023fa4__4_(acStack_84,0x60,&DAT_100235de,(uint)local_4e4);
        iVar2 = recovered_10012054(*(char **)(param_1 + 0x314),acStack_84,&local_484);
        if ((iVar2 != 0) &&
           (bVar12 = recovered_10012350(&local_484,str_10023596,(char *)&local_ca8,0x40), bVar12))
        goto LAB_10015a5c;
      }
      do {
        switch((uintptr_t)(*pbVar9)) {
        case 0:
        case 9:
        case 10:
        case 0xc:
        case 0xd:
        case 0x20:
          goto switchD_10015964_caseD_0;
        default:
          pbVar9 = pbVar9 + 1;
        }
      } while( true );
    }
LAB_10015a04:
    if (((*unaff_r5 == 0) ||
        (iVar2 = recovered_10012054(*(char **)(param_1 + 0x314),(char *)unaff_r5,&local_c68),
        iVar2 == 0)) ||
       (bVar12 = recovered_10012350(&local_c68,str_10023596,(char *)&local_ca8,0x40), !bVar12))
    goto LAB_10015dbc;
  }
LAB_10015a5c:
  uVar5 = (uint)local_ca8;
  if (uVar5 == 0) {
    pcVar8 = str_100235e7;
  }
  else {
    uVar7 = uVar5;
    if (uVar5 - 0x41 < 0x1a) {
      uVar7 = uVar5 | 0x20;
    }
    if (uVar7 == 0x66) {
      uVar7 = (uint)local_ca7[0];
      if (uVar7 == 0) {
        pcVar8 = &DAT_100235e3;
      }
      else {
        if (uVar7 - 0x41 < 0x1a) {
          uVar7 = uVar7 | 0x20;
        }
        if (uVar7 != 0x6c) goto LAB_10015b2c;
        uVar7 = (uint)local_ca7[1];
        if (uVar7 == 0) {
          pcVar8 = &DAT_100235e4;
        }
        else {
          if (uVar7 - 0x41 < 0x1a) {
            uVar7 = uVar7 | 0x20;
          }
          if (uVar7 != 0x65) goto LAB_10015b2c;
          uVar7 = (uint)local_ca7[2];
          if (uVar7 == 0) {
            pcVar8 = &DAT_100235e5;
          }
          else {
            if (uVar7 - 0x41 < 0x1a) {
              uVar7 = uVar7 | 0x20;
            }
            bVar12 = uVar7 != 0x78;
            if (!bVar12) {
              uVar7 = (uint)local_ca7[3];
            }
            if (bVar12 || uVar7 != 0) goto LAB_10015b2c;
            pcVar8 = &DAT_100235e6;
          }
        }
      }
      if (*pcVar8 == '\0') {
        return true;
      }
    }
LAB_10015b2c:
    iVar2 = 0;
    uVar7 = uVar5;
    do {
      if (iVar2 == -0xb) goto LAB_10015b94;
      uVar10 = (uint)(byte)str_100235e7[-iVar2];
      if (uVar10 - 0x41 < 0x1a) {
        uVar10 = uVar10 | 0x20;
      }
      if (uVar7 - 0x41 < 0x1a) {
        uVar7 = uVar7 | 0x20;
      }
      if (uVar7 != uVar10) goto LAB_10015b94;
      uVar7 = (uint)local_ca7[-iVar2];
      iVar2 = iVar2 + -1;
    } while (uVar7 != 0);
    pcVar8 = str_100235e7 + -iVar2;
  }
  if (*pcVar8 == '\0') {
    return true;
  }
LAB_10015b94:
  if (uVar5 == 0) {
    pcVar8 = str_100235fa;
  }
  else {
    if (uVar5 - 0x41 < 0x1a) {
      uVar5 = uVar5 | 0x20;
    }
    if (uVar5 == 99) {
      uVar5 = (uint)local_ca7[0];
      pcVar8 = str_100235fa;
      if (uVar5 == 0) {
LAB_10015d8c:
        pcVar8 = pcVar8 + 1;
      }
      else {
        if (uVar5 - 0x41 < 0x1a) {
          uVar5 = uVar5 | 0x20;
        }
        if (uVar5 != 0x6f) goto LAB_10015dbc;
        uVar5 = (uint)local_ca7[1];
        if (uVar5 == 0) {
LAB_10015d94:
          pcVar8 = pcVar8 + 2;
        }
        else {
          if (uVar5 - 0x41 < 0x1a) {
            uVar5 = uVar5 | 0x20;
          }
          if (uVar5 != 0x6e) goto LAB_10015dbc;
          uVar5 = (uint)local_ca7[2];
          if (uVar5 == 0) {
LAB_10015d9c:
            pcVar8 = pcVar8 + 3;
          }
          else {
            if (uVar5 - 0x41 < 0x1a) {
              uVar5 = uVar5 | 0x20;
            }
            if (uVar5 != 0x74) goto LAB_10015dbc;
            uVar5 = (uint)local_ca7[3];
            if (uVar5 == 0) {
LAB_10015da4:
              pcVar8 = pcVar8 + 4;
            }
            else {
              if (uVar5 - 0x41 < 0x1a) {
                uVar5 = uVar5 | 0x20;
              }
              if (uVar5 != 0x65) goto LAB_10015dbc;
              uVar5 = (uint)local_ca7[4];
              if (uVar5 == 0) {
LAB_10015dac:
                pcVar8 = pcVar8 + 5;
              }
              else {
                if (uVar5 - 0x41 < 0x1a) {
                  uVar5 = uVar5 | 0x20;
                }
                if (uVar5 != 0x6e) goto LAB_10015dbc;
                uVar5 = (uint)local_ca7[5];
                if (uVar5 == 0) {
                  pcVar8 = str_100235fa + 6;
                }
                else {
                  if (uVar5 - 0x41 < 0x1a) {
                    uVar5 = uVar5 | 0x20;
                  }
                  if (uVar5 != 0x74) goto LAB_10015dbc;
                  uVar5 = (uint)local_ca7[6];
                  if (uVar5 == 0) {
                    pcVar8 = str_100235fa + 7;
                  }
                  else {
                    if (uVar5 - 0x41 < 0x1a) {
                      uVar5 = uVar5 | 0x20;
                    }
                    bVar12 = uVar5 != 0x73;
                    if (!bVar12) {
                      uVar5 = (uint)local_ca7[7];
                    }
                    if (bVar12 || uVar5 != 0) goto LAB_10015dbc;
                    pcVar8 = str_100235fa + 8;
                  }
                }
              }
            }
          }
        }
      }
    }
    else {
      if (uVar5 != 0x69) goto LAB_10015dbc;
      uVar5 = (uint)local_ca7[0];
      pcVar8 = str_100235f3;
      if (uVar5 == 0) goto LAB_10015d8c;
      if (uVar5 - 0x41 < 0x1a) {
        uVar5 = uVar5 | 0x20;
      }
      if (uVar5 != 0x6e) goto LAB_10015dbc;
      uVar5 = (uint)local_ca7[1];
      if (uVar5 == 0) goto LAB_10015d94;
      if (uVar5 - 0x41 < 0x1a) {
        uVar5 = uVar5 | 0x20;
      }
      if (uVar5 != 0x6c) goto LAB_10015dbc;
      uVar5 = (uint)local_ca7[2];
      if (uVar5 == 0) goto LAB_10015d9c;
      if (uVar5 - 0x41 < 0x1a) {
        uVar5 = uVar5 | 0x20;
      }
      if (uVar5 != 0x69) goto LAB_10015dbc;
      uVar5 = (uint)local_ca7[3];
      if (uVar5 == 0) goto LAB_10015da4;
      if (uVar5 - 0x41 < 0x1a) {
        uVar5 = uVar5 | 0x20;
      }
      if (uVar5 != 0x6e) goto LAB_10015dbc;
      uVar5 = (uint)local_ca7[4];
      if (uVar5 == 0) goto LAB_10015dac;
      if (uVar5 - 0x41 < 0x1a) {
        uVar5 = uVar5 | 0x20;
      }
      bVar12 = uVar5 == 0x65;
      if (bVar12) {
        uVar5 = (uint)local_ca7[5];
      }
      if (!bVar12 || uVar5 != 0) goto LAB_10015dbc;
      pcVar8 = str_100235f3 + 6;
    }
  }
  if (*pcVar8 == '\0') {
    return true;
  }
LAB_10015dbc:
  pcVar8 = &local_484;
  recovered_1000bd50((char *)param_2,str_100233d6,pcVar8,0xb4);
  pcVar11 = &local_c68;
  recovered_1000bd50((char *)param_2,&DAT_10023445,pcVar11,0x60);
  recovered_1000bd50((char *)param_2,&DAT_100235c9,(char *)&local_6e4,0x40);
  uVar5 = (uint)local_6e4;
  if (uVar5 == 0) {
    pcVar3 = str_100235ce;
  }
  else {
    iVar2 = 0;
    do {
      if (iVar2 == -10) goto LAB_10015e9c;
      uVar7 = (uint)(byte)str_100235ce[-iVar2];
      if (uVar7 - 0x41 < 0x1a) {
        uVar7 = uVar7 | 0x20;
      }
      if (uVar5 - 0x41 < 0x1a) {
        uVar5 = uVar5 | 0x20;
      }
      if (uVar5 != uVar7) goto LAB_10015e9c;
      uVar5 = (uint)local_6e3[-iVar2];
      iVar2 = iVar2 + -1;
    } while (uVar5 != 0);
    pcVar3 = str_100235ce + -iVar2;
  }
  if (*pcVar3 == '\0') {
    return true;
  }
LAB_10015e9c:
  uVar4 = strlen(&DAT_10023541);
  cVar1 = local_484;
  if (uVar4 != 0) {
    while (cVar1 != '\0') {
      uVar6 = 0;
      while (uVar5 = (uint)(byte)pcVar8[uVar6], uVar5 != 0) {
        uVar7 = (uint)(byte)(&DAT_10023541)[uVar6];
        if (uVar7 - 0x41 < 0x1a) {
          uVar7 = uVar7 | 0x20;
        }
        if (uVar5 - 0x41 < 0x1a) {
          uVar5 = uVar5 | 0x20;
        }
        if (uVar5 != uVar7) break;
        uVar6 = uVar6 + 1;
        if (uVar4 == uVar6) {
          return true;
        }
      }
      if (uVar4 == uVar6) {
        return true;
      }
      pcVar8 = pcVar8 + 1;
      cVar1 = *pcVar8;
    }
  }
  uVar6 = strlen(&DAT_100235d9);
  uVar4 = extraout_r1;
  cVar1 = '\0';
  if (uVar6 != 0) {
    uVar4 = uVar6;
    cVar1 = local_484;
  }
  if (uVar6 != 0 && cVar1 != '\0') {
    pcVar8 = &local_484;
    do {
      uVar6 = 0;
      while (uVar5 = (uint)(byte)pcVar8[uVar6], uVar5 != 0) {
        uVar7 = (uint)(byte)(&DAT_100235d9)[uVar6];
        if (uVar7 - 0x41 < 0x1a) {
          uVar7 = uVar7 | 0x20;
        }
        if (uVar5 - 0x41 < 0x1a) {
          uVar5 = uVar5 | 0x20;
        }
        if (uVar5 != uVar7) break;
        uVar6 = uVar6 + 1;
        if (uVar4 == uVar6) {
          return true;
        }
      }
      if (uVar4 == uVar6) {
        return true;
      }
      pcVar8 = pcVar8 + 1;
    } while (*pcVar8 != '\0');
  }
  uVar4 = strlen(&DAT_10023541);
  if (uVar4 != 0) {
    while (local_c68 != '\0') {
      uVar6 = 0;
      while (uVar5 = (uint)(byte)pcVar11[uVar6], uVar5 != 0) {
        uVar7 = (uint)(byte)(&DAT_10023541)[uVar6];
        if (uVar7 - 0x41 < 0x1a) {
          uVar7 = uVar7 | 0x20;
        }
        if (uVar5 - 0x41 < 0x1a) {
          uVar5 = uVar5 | 0x20;
        }
        if (uVar5 != uVar7) break;
        uVar6 = uVar6 + 1;
        if (uVar4 == uVar6) {
          return true;
        }
      }
      if (uVar4 == uVar6) {
        return true;
      }
      pcVar11 = pcVar11 + 1;
      local_c68 = *pcVar11;
    }
  }
  pcVar8 = recovered_1000c6fc(&local_c68,&DAT_100235d9);
  return pcVar8 != (char *)0x0;
switchD_10015964_caseD_0:
  uVar5 = (uint)*pbVar9;
  if (uVar5 == 0) goto LAB_10015a04;
  goto LAB_100157e4;
}

#undef DAT_10023387
#undef DAT_10023388
#undef DAT_10023389
#undef DAT_1002338a
#undef DAT_1002338b
#undef DAT_10023445
#undef DAT_10023541
#undef DAT_10023542
#undef DAT_10023543
#undef DAT_10023544
#undef DAT_100235ae
#undef DAT_100235c9
#undef DAT_100235d9
#undef DAT_100235de
#undef DAT_100235e3
#undef DAT_100235e4
#undef DAT_100235e5
#undef DAT_100235e6
#undef str_10022ce5
#undef str_100233d6
#undef str_10023596
#undef str_100235ce
#undef str_100235e7
#undef str_100235f3
#undef str_100235fa
#undef acStack_868
#undef local_ca8
#undef local_ca7
#undef acStack_84
#undef local_c68
#undef local_c67
#undef local_7f8
#undef local_798
#undef local_6e4
#undef local_6e3
#undef local_4e4
#undef local_484
#undef local_483

#undef DAT_10022ca6
#define DAT_10022ca6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x25eU)))
#undef DAT_10022d05
#define DAT_10022d05 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2bdU)))
#undef str_10023603
#define str_10023603 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xbbbU)))
#undef str_1002360c
#define str_1002360c (*(char (*)[1])(((uintptr_t)pf_module_state + 0xbc4U)))
#undef str_1002361a
#define str_1002361a (*(char (*)[1])(((uintptr_t)pf_module_state + 0xbd2U)))
#undef str_10023628
#define str_10023628 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xbe0U)))
#undef str_1002362f
#define str_1002362f (*(char (*)[1])(((uintptr_t)pf_module_state + 0xbe7U)))
#undef str_10023636
#define str_10023636 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xbeeU)))
#define local_118 (*(byte (*)[256])(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10016074
 */

void recovered_10016074(int param_1,char *param_2)

{
  unsigned char frame[336] __attribute__((aligned(16))) = {0};

  int iVar1;

  if (param_2 == (char *)0x0) {
    return;
  }
  *param_2 = '\0';
  if (param_1 != 0) {
    recovered_1000bd50((char *)param_1,&DAT_10022d05,(char *)local_118,0x100);
    if ((((((local_118[0] == 0) || (iVar1 = recovered_1001a984(local_118), iVar1 != 0)) &&
          ((recovered_1000bd50((char *)param_1,str_10023603,(char *)local_118,0x100),
           local_118[0] == 0 || (iVar1 = recovered_1001a984(local_118), iVar1 != 0)))) &&
         ((recovered_1000bd50((char *)param_1,str_1002360c,(char *)local_118,0x100),
          local_118[0] == 0 || (iVar1 = recovered_1001a984(local_118), iVar1 != 0)))) &&
        ((recovered_1000bd50((char *)param_1,str_1002361a,(char *)local_118,0x100),
         local_118[0] == 0 || (iVar1 = recovered_1001a984(local_118), iVar1 != 0)))) &&
       ((recovered_1000bd50((char *)param_1,str_10023628,(char *)local_118,0x100), local_118[0] == 0
        || (iVar1 = recovered_1001a984(local_118), iVar1 != 0)))) {
      recovered_1000bd50((char *)param_1,str_1002362f,(char *)local_118,0x100);
      iVar1 = recovered_1001ab60((char *)local_118,param_2);
      if (iVar1 == 0) {
        recovered_1000bd50((char *)param_1,str_10023636,(char *)local_118,0x100);
        recovered_1001ab60((char *)local_118,param_2);
      }
    }
    else {
      pf_varargs_10023fa4__4_(param_2,0x100,&DAT_10022ca6,(uint)local_118);
    }
  }
  return;
}

#undef DAT_10022ca6
#undef DAT_10022d05
#undef str_10023603
#undef str_1002360c
#undef str_1002361a
#undef str_10023628
#undef str_1002362f
#undef str_10023636
#undef local_118

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001624c
 */

undefined4 recovered_1001624c(byte *param_1,byte *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  byte *pbVar2;
  ulong uVar3;
  uint uVar4;
  byte *pbVar5;
  uint uVar6;
  uint unaff_r11;
  ulong uVar7;

  if ((param_2 != (byte *)0x0) &&
     (uVar1 = strlen((char *)param_2), param_1 != (byte *)0x0)) {
    if (uVar1 != 0) {
      unaff_r11 = (uint)*param_1;
    }
    if (uVar1 != 0 && unaff_r11 != 0) {
LAB_100162a8:
      while ((unaff_r11 - 9 < 0x18 && ((1 << (unaff_r11 - 9 & 0xff) & 0x80001bU) != 0))) {
        param_1 = param_1 + 1;
        unaff_r11 = (uint)*param_1;
      }
      uVar7 = 0;
      do {
        switch((uintptr_t)(unaff_r11)) {
        case 0:
        case 9:
        case 10:
        case 0xc:
        case 0xd:
        case 0x20:
          goto switchD_100162e8_caseD_0;
        default:
          unaff_r11 = (uint)param_1[uVar7 + 1];
          uVar7 = uVar7 + 1;
        }
      } while( true );
    }
  }
  return 0;
switchD_100162e8_caseD_0:
  pbVar2 = param_2;
  uVar3 = uVar1;
  pbVar5 = param_1;
  if (uVar1 == uVar7) {
    while( true ) {
      uVar4 = (uint)*pbVar2;
      uVar6 = (uint)*pbVar5;
      if (uVar4 - 0x41 < 0x1a) {
        uVar4 = uVar4 | 0x20;
      }
      if (uVar6 - 0x41 < 0x1a) {
        uVar6 = uVar6 | 0x20;
      }
      if (uVar6 != uVar4) break;
      uVar3 = uVar3 - 1;
      pbVar2 = pbVar2 + 1;
      pbVar5 = pbVar5 + 1;
      if (uVar3 == 0) {
        return 1;
      }
    }
  }
  param_1 = param_1 + uVar7;
  if (unaff_r11 == 0) {
    return 0;
  }
  goto LAB_100162a8;
}


#undef DAT_100235de
#define DAT_100235de (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb96U)))
#undef str_1002333e
#define str_1002333e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x8f6U)))
#define acStack_4f8 (*(char (*)[128])(frame + 24))
#define acStack_478 (*(char (*)[1024])(frame + 152))
#define acStack_78 (*(char (*)[96])(frame + 1176))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100163cc
 */

void recovered_100163cc(int param_1,int param_2,uint *param_3)

{
  unsigned char frame[1328] __attribute__((aligned(16))) = {0};

  bool bVar1;
  int iVar2;

  if (param_2 != 0) {
    pf_varargs_10023fa4__4_(acStack_78,0x60,&DAT_100235de,param_2);
    iVar2 = recovered_10012054(*(char **)(param_1 + 0x314),acStack_78,acStack_478);
    if ((iVar2 != 0) &&
       (bVar1 = recovered_10012350(acStack_478,str_1002333e,acStack_4f8,0x80), bVar1)) {
      recovered_10012764((int)acStack_4f8,param_3);
    }
  }
  return;
}

#undef DAT_100235de
#undef str_1002333e
#undef acStack_4f8
#undef acStack_478
#undef acStack_78

#undef DAT_10023661
#define DAT_10023661 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xc19U)))
#undef DAT_10023662
#define DAT_10023662 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xc1aU)))
#undef DAT_10023663
#define DAT_10023663 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xc1bU)))
#undef DAT_10023664
#define DAT_10023664 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xc1cU)))
#undef DAT_10023665
#define DAT_10023665 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xc1dU)))
#undef str_10023398
#define str_10023398 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x950U)))
#undef str_1002364e
#define str_1002364e (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc06U)))
#undef str_10023654
#define str_10023654 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc0cU)))
#undef str_1002365b
#define str_1002365b (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc13U)))
#define local_28 (*(byte *)(frame + 24))
#define local_27 (*(byte *)(frame + 25))
#define local_26 (*(byte *)(frame + 26))
#define local_2c (*(byte *)(frame + 20))
#define local_2b (*(byte *)(frame + 21))
#define local_2a (*(byte *)(frame + 22))
#define local_29 (*(byte *)(frame + 23))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10016460
 */

undefined4 recovered_10016460(char *param_1,undefined4 param_2)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  bool bVar5;

  recovered_1000bd50(param_1,str_1002364e,(char *)&local_2c,0x20);
  uVar1 = (uint)local_2c;
  if (uVar1 == 0) {
    pcVar4 = str_10023654;
LAB_10016698:
    if (*pcVar4 == '\0') {
      return 1;
    }
    if (uVar1 == 0) {
      pcVar4 = &DAT_10023661;
      goto LAB_10016860;
    }
  }
  else {
    uVar2 = uVar1;
    if (uVar1 - 0x41 < 0x1a) {
      uVar2 = uVar1 | 0x20;
    }
    if (uVar2 == 0x6d) {
      uVar2 = (uint)local_2b;
      if (uVar2 == 0) {
        pcVar4 = str_10023654 + 1;
      }
      else {
        if (uVar2 - 0x41 < 0x1a) {
          uVar2 = uVar2 | 0x20;
        }
        if (uVar2 != 0x69) goto LAB_100166ac;
        uVar2 = (uint)local_2a;
        if (uVar2 == 0) {
          pcVar4 = str_10023654 + 2;
        }
        else {
          if (uVar2 - 0x41 < 0x1a) {
            uVar2 = uVar2 | 0x20;
          }
          if (uVar2 != 100) goto LAB_100166ac;
          uVar2 = (uint)local_29;
          if (uVar2 == 0) {
            pcVar4 = str_10023654 + 3;
          }
          else {
            if (uVar2 - 0x41 < 0x1a) {
              uVar2 = uVar2 | 0x20;
            }
            if (uVar2 != 100) goto LAB_100166ac;
            uVar2 = (uint)local_28;
            if (uVar2 == 0) {
              pcVar4 = str_10023654 + 4;
            }
            else {
              if (uVar2 - 0x41 < 0x1a) {
                uVar2 = uVar2 | 0x20;
              }
              if (uVar2 != 0x6c) goto LAB_100166ac;
              uVar2 = (uint)local_27;
              if (uVar2 == 0) {
                pcVar4 = str_10023654 + 5;
              }
              else {
                if (uVar2 - 0x41 < 0x1a) {
                  uVar2 = uVar2 | 0x20;
                }
                bVar5 = uVar2 != 0x65;
                if (!bVar5) {
                  uVar2 = (uint)local_26;
                }
                if (bVar5 || uVar2 != 0) goto LAB_100166ac;
                pcVar4 = str_10023654 + 6;
              }
            }
          }
        }
      }
      goto LAB_10016698;
    }
    if (uVar2 == 99) {
      uVar2 = (uint)local_2b;
      if (uVar2 == 0) {
        pcVar4 = str_10023398 + 1;
      }
      else {
        if (uVar2 - 0x41 < 0x1a) {
          uVar2 = uVar2 | 0x20;
        }
        if (uVar2 != 0x65) goto LAB_100166ac;
        uVar2 = (uint)local_2a;
        if (uVar2 == 0) {
          pcVar4 = str_10023398 + 2;
        }
        else {
          if (uVar2 - 0x41 < 0x1a) {
            uVar2 = uVar2 | 0x20;
          }
          if (uVar2 != 0x6e) goto LAB_100166ac;
          uVar2 = (uint)local_29;
          if (uVar2 == 0) {
            pcVar4 = str_10023398 + 3;
          }
          else {
            if (uVar2 - 0x41 < 0x1a) {
              uVar2 = uVar2 | 0x20;
            }
            if (uVar2 != 0x74) goto LAB_100166ac;
            uVar2 = (uint)local_28;
            if (uVar2 == 0) {
              pcVar4 = str_10023398 + 4;
            }
            else {
              if (uVar2 - 0x41 < 0x1a) {
                uVar2 = uVar2 | 0x20;
              }
              if (uVar2 != 0x65) goto LAB_100166ac;
              uVar2 = (uint)local_27;
              if (uVar2 == 0) {
                pcVar4 = str_10023398 + 5;
              }
              else {
                uVar3 = uVar2 - 0x41;
                if (uVar3 < 0x1a) {
                  uVar2 = uVar2 | 0x20;
                }
                if (uVar2 == 0x72) {
                  uVar3 = (uint)local_26;
                }
                if (uVar2 != 0x72 || uVar3 != 0) goto LAB_100166ac;
                pcVar4 = str_10023398 + 6;
              }
            }
          }
        }
      }
      if (*pcVar4 == '\0') {
        return 1;
      }
    }
  }
LAB_100166ac:
  uVar2 = uVar1;
  if (uVar1 - 0x41 < 0x1a) {
    uVar2 = uVar1 | 0x20;
  }
  if (uVar2 == 0x6c) {
    uVar1 = (uint)local_2b;
    if (uVar1 == 0) {
      pcVar4 = &DAT_10023662;
    }
    else {
      if (uVar1 - 0x41 < 0x1a) {
        uVar1 = uVar1 | 0x20;
      }
      if (uVar1 != 0x65) {
        return param_2;
      }
      uVar1 = (uint)local_2a;
      if (uVar1 == 0) {
        pcVar4 = &DAT_10023663;
      }
      else {
        if (uVar1 - 0x41 < 0x1a) {
          uVar1 = uVar1 | 0x20;
        }
        if (uVar1 != 0x66) {
          return param_2;
        }
        uVar1 = (uint)local_29;
        if (uVar1 == 0) {
          pcVar4 = &DAT_10023664;
        }
        else {
          if (uVar1 - 0x41 < 0x1a) {
            uVar1 = uVar1 | 0x20;
          }
          bVar5 = uVar1 != 0x74;
          if (!bVar5) {
            uVar1 = (uint)local_28;
          }
          if (bVar5 || uVar1 != 0) {
            return param_2;
          }
          pcVar4 = &DAT_10023665;
        }
      }
    }
  }
  else {
    if (uVar2 != 0x72) {
      return param_2;
    }
    uVar2 = (uint)local_2b;
    if (uVar2 == 0) {
      pcVar4 = str_1002365b + 1;
    }
    else {
      if (uVar2 - 0x41 < 0x1a) {
        uVar2 = uVar2 | 0x20;
      }
      if (uVar2 != 0x69) {
        return param_2;
      }
      uVar2 = (uint)local_2a;
      if (uVar2 == 0) {
        pcVar4 = str_1002365b + 2;
      }
      else {
        if (uVar2 - 0x41 < 0x1a) {
          uVar2 = uVar2 | 0x20;
        }
        if (uVar2 != 0x67) {
          return param_2;
        }
        uVar2 = (uint)local_29;
        if (uVar2 == 0) {
          pcVar4 = str_1002365b + 3;
        }
        else {
          if (uVar2 - 0x41 < 0x1a) {
            uVar2 = uVar2 | 0x20;
          }
          if (uVar2 != 0x68) {
            return param_2;
          }
          uVar2 = (uint)local_28;
          if (uVar2 == 0) {
            pcVar4 = str_1002365b + 4;
          }
          else {
            uVar3 = uVar2 - 0x41;
            if (uVar3 < 0x1a) {
              uVar2 = uVar2 | 0x20;
            }
            if (uVar2 == 0x74) {
              uVar3 = (uint)local_27;
            }
            if (uVar2 != 0x74 || uVar3 != 0) {
              return param_2;
            }
            pcVar4 = str_1002365b + 5;
          }
        }
      }
    }
    if (*pcVar4 == '\0') {
      return 2;
    }
    if (uVar1 != 0) {
      return param_2;
    }
    pcVar4 = &DAT_10023661;
  }
LAB_10016860:
  if (*pcVar4 == '\0') {
    param_2 = 0;
  }
  return param_2;
}

#undef DAT_10023661
#undef DAT_10023662
#undef DAT_10023663
#undef DAT_10023664
#undef DAT_10023665
#undef str_10023398
#undef str_1002364e
#undef str_10023654
#undef str_1002365b
#undef local_28
#undef local_27
#undef local_26
#undef local_2c
#undef local_2b
#undef local_2a
#undef local_29

#undef DAT_100235de
#define DAT_100235de (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb96U)))
#undef str_10023666
#define str_10023666 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc1eU)))
#define local_4f8 (*(byte (*)[128])(frame + 24))
#define acStack_478 (*(char (*)[1024])(frame + 152))
#define acStack_78 (*(char (*)[96])(frame + 1176))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001687c
 */

undefined4 recovered_1001687c(int param_1,char *param_2,undefined4 param_3)

{
  unsigned char frame[1328] __attribute__((aligned(16))) = {0};

  byte *pbVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  byte *pbVar7;
  bool bVar8;

  pbVar7 = local_4f8;
  if ((param_2 != (char *)0x0) && (*param_2 != '\0')) {
    pf_varargs_10023fa4__4_(acStack_78,0x60,&DAT_100235de,(uint)param_2);
    iVar3 = recovered_10012054(*(char **)(param_1 + 0x314),acStack_78,acStack_478);
    if ((iVar3 != 0) &&
       (bVar2 = recovered_10012350(acStack_478,str_10023666,(char *)local_4f8,0x80), bVar2)) {
      while( true ) {
        uVar4 = (uint)*pbVar7;
        if ((0x17 < uVar4 - 9) || ((1 << (uVar4 - 9 & 0xff) & 0x80001bU) == 0)) break;
        pbVar7 = pbVar7 + 1;
      }
      if ((uVar4 - 0x30 & 0xff) < 10) {
        iVar3 = 0;
        iVar6 = 1;
        do {
          pbVar1 = pbVar7 + iVar6;
          iVar6 = iVar6 + 1;
          iVar3 = iVar3 * 10 + (uVar4 - 0x30 & 0xff);
          uVar4 = (uint)*pbVar1;
        } while ((*pbVar1 - 0x30U & 0xff) < 10);
        uVar5 = 4;
        bVar8 = SBORROW4(iVar3,0x47);
        iVar6 = iVar3 + -0x47;
        bVar2 = iVar3 == 0x47;
        if (iVar3 < 0x48) {
          uVar5 = 3;
          bVar8 = SBORROW4(iVar3,0x29);
          iVar6 = iVar3 + -0x29;
          bVar2 = iVar3 == 0x29;
        }
        if (!bVar2 && iVar6 < 0 == bVar8) {
          return uVar5;
        }
        if (0x15 < iVar3) {
          param_3 = 2;
        }
      }
    }
  }
  return param_3;
}

#undef DAT_100235de
#undef str_10023666
#undef local_4f8
#undef acStack_478
#undef acStack_78

#undef DAT_10022ca6
#define DAT_10022ca6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x25eU)))
#undef DAT_10022ca9
#define DAT_10022ca9 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x261U)))
#undef DAT_10022cad
#define DAT_10022cad (*(uint8_t *)(((uintptr_t)pf_module_state + 0x265U)))
#undef DAT_1002336f
#define DAT_1002336f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x927U)))
#undef DAT_10023372
#define DAT_10023372 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x92aU)))
#undef DAT_10023375
#define DAT_10023375 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x92dU)))
#undef DAT_10023378
#define DAT_10023378 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x930U)))
#undef DAT_1002337b
#define DAT_1002337b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x933U)))
#undef DAT_1002337e
#define DAT_1002337e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x936U)))
#undef DAT_10023394
#define DAT_10023394 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x94cU)))
#undef DAT_10023396
#define DAT_10023396 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x94eU)))
#undef DAT_10023397
#define DAT_10023397 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x94fU)))
#undef DAT_100233be
#define DAT_100233be (*(uint8_t *)(((uintptr_t)pf_module_state + 0x976U)))
#undef DAT_100233c0
#define DAT_100233c0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x978U)))
#undef DAT_100233c1
#define DAT_100233c1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x979U)))
#undef DAT_10023404
#define DAT_10023404 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x9bcU)))
#undef DAT_10023405
#define DAT_10023405 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x9bdU)))
#undef DAT_10023406
#define DAT_10023406 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x9beU)))
#undef DAT_10023407
#define DAT_10023407 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x9bfU)))
#undef DAT_10023408
#define DAT_10023408 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x9c0U)))
#undef DAT_10023541
#define DAT_10023541 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xaf9U)))
#undef str_10023518
#define str_10023518 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xad0U)))
#undef str_10023525
#define str_10023525 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xaddU)))
#undef str_1002352d
#define str_1002352d (*(char (*)[1])(((uintptr_t)pf_module_state + 0xae5U)))
#undef str_10023533
#define str_10023533 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xaebU)))
#undef str_1002353a
#define str_1002353a (*(char (*)[1])(((uintptr_t)pf_module_state + 0xaf2U)))
#define local_8cd (*(char (*)[128])(frame + 19))
#define local_84d (*(char *)(frame + 147))
#define local_84c (*(byte *)(frame + 148))
#define local_84b (*(byte *)(frame + 149))
#define local_84a (*(byte *)(frame + 150))
#define local_849 (*(byte *)(frame + 151))
#define local_848 (*(byte *)(frame + 152))
#define local_847 (*(byte *)(frame + 153))
#define local_846 (*(byte *)(frame + 154))
#define local_845 (*(byte *)(frame + 155))
#define local_824 (*(byte (*)[1024])(frame + 188))
#define local_424 (*(byte (*)[1028])(frame + 1212))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100169a4
 */

void recovered_100169a4(int param_1,byte *param_2,int param_3,char *param_4,int param_5)

{
  unsigned char frame[2304] __attribute__((aligned(16))) = {0};

  bool bVar1;
  ulong uVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  byte *pbVar6;
  char *pcVar7;
  uint uVar8;
  ulong uVar9;
  byte bVar10;
  int iVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  bool bVar15;

  pbVar5 = param_2 + param_3;
  pbVar12 = param_2;
  if (param_2 != (byte *)0x0) {
    pbVar12 = pbVar5;
  }
  if ((param_4 == (char *)0x0) || (*param_4 = '\0', param_2 == (byte *)0x0 || param_3 == 0)) {
switchD_10017788_caseD_0:
    return;
  }
  local_424[0] = 0;
  if (0 < param_3) {
    do {
      while( true ) {
        if (*param_2 == 0) goto LAB_10017740;
        uVar2 = strlen((char *)local_424);
        if (0x3fe < uVar2) goto LAB_10017740;
        bVar10 = *param_2;
        if (bVar10 != 0x3c) break;
        iVar11 = 0;
        while (param_2[iVar11] != 0x3e) {
          iVar11 = iVar11 + 1;
          if ((int)pbVar5 - (int)param_2 == iVar11) goto LAB_10017740;
        }
        uVar2 = iVar11 - 1;
        if (0x1fe < (int)uVar2) {
          uVar2 = 0x1ff;
        }
        local_84d = '\0';
        memcpy(local_824,param_2 + 1,uVar2);
        local_824[uVar2] = 0;
        iVar3 = strncmp((char *)local_824,&DAT_10022ca9,3);
        pbVar6 = param_2 + iVar11;
        if (iVar3 == 0) {
          pbVar13 = param_2 + 4;
          uVar2 = strlen(&DAT_10022cad);
          pbVar14 = (byte *)0x0;
          if (((pbVar13 < pbVar12) && (uVar2 != 0)) && (pbVar13 + uVar2 <= pbVar12)) {
            do {
              if (*pbVar13 == 0) goto LAB_10016ce8;
              uVar9 = 0;
              while ((pbVar13 + uVar9 < pbVar12 && (uVar4 = (uint)pbVar13[uVar9], uVar4 != 0))) {
                uVar8 = (uint)(byte)(&DAT_10022cad)[uVar9];
                if (uVar8 - 0x41 < 0x1a) {
                  uVar8 = uVar8 | 0x20;
                }
                if (uVar4 - 0x41 < 0x1a) {
                  uVar4 = uVar4 | 0x20;
                }
                if (uVar4 != uVar8) break;
                uVar9 = uVar9 + 1;
                if (uVar2 == uVar9) goto LAB_10016c50;
              }
              if (uVar2 == uVar9) {
LAB_10016c50:
                pbVar14 = pbVar13;
                goto LAB_10016ce8;
              }
              pbVar13 = pbVar13 + 1;
            } while (pbVar13 + uVar2 <= pbVar12);
            pbVar14 = (byte *)0x0;
          }
LAB_10016ce8:
          param_2 = pbVar14 + 3;
          if (pbVar14 == (byte *)0x0) {
            param_2 = pbVar6 + 1;
          }
        }
        else {
          recovered_1000ba88(local_824,&local_84c,0x28,&local_84d);
          if ((local_84d == '\0') && (local_84c != 0)) {
            bVar1 = recovered_10013a08(param_1,(char *)local_824,(char *)&local_84c);
            if ((bVar1) || (uVar4 = recovered_10014e0c(&local_84c), uVar4 != 0)) {
              param_2 = recovered_10019cac(pbVar6,pbVar12,&local_84c);
              goto LAB_1001767c;
            }
            uVar4 = (uint)local_84c;
            pcVar7 = &DAT_10023404;
            if (uVar4 == 0) {
LAB_10016d20:
              if (*pcVar7 == '\0') {
                recovered_1000bd50((char *)local_824,&DAT_10023408,local_8cd,0x80);
                if (local_8cd[0] != '\0') {
                  if ((local_424[0] != 0) &&
                     (uVar2 = strlen((char *)local_424), uVar2 < 0x3ff)) {
                    (local_424 + uVar2)[0] = 0x20;
                    (local_424 + uVar2)[1] = 0;
                  }
                  uVar2 = strlen((char *)local_424);
                  if (uVar2 < 0x3ff) {
                    pf_varargs_10023fa4__4_
                              ((char *)(local_424 + uVar2),0x400 - uVar2,&DAT_10022ca6,
                               (uint)local_8cd);
                  }
                }
                uVar4 = (uint)local_84c;
              }
              if (uVar4 != 0) goto LAB_10016dd4;
              uVar4 = 0;
              bVar1 = true;
              pcVar7 = str_1002352d;
              goto LAB_10016f54;
            }
            uVar8 = uVar4;
            if (uVar4 - 0x41 < 0x1a) {
              uVar8 = uVar4 | 0x20;
            }
            if (uVar8 == 0x69) {
              uVar8 = (uint)local_84b;
              if (uVar8 == 0) {
                pcVar7 = &DAT_10023405;
              }
              else {
                if (uVar8 - 0x41 < 0x1a) {
                  uVar8 = uVar8 | 0x20;
                }
                if (uVar8 != 0x6d) goto LAB_10016dd4;
                uVar8 = (uint)local_84a;
                if (uVar8 == 0) {
                  pcVar7 = &DAT_10023406;
                }
                else {
                  if (uVar8 - 0x41 < 0x1a) {
                    uVar8 = uVar8 | 0x20;
                  }
                  bVar1 = uVar8 != 0x67;
                  if (!bVar1) {
                    uVar8 = (uint)local_849;
                  }
                  if (bVar1 || uVar8 != 0) goto LAB_10016dd4;
                  pcVar7 = &DAT_10023407;
                }
              }
              goto LAB_10016d20;
            }
LAB_10016dd4:
            uVar8 = uVar4;
            if (uVar4 - 0x41 < 0x1a) {
              uVar8 = uVar4 | 0x20;
            }
            bVar1 = false;
            switch((uintptr_t)(uVar8)) {
            case 0x61:
              uVar8 = (uint)local_84b;
              if (uVar8 == 0) {
                pcVar7 = str_1002352d + 1;
                bVar1 = false;
LAB_10016f54:
                if (*pcVar7 == '\0') goto LAB_10017660;
switchD_10016dfc_caseD_63:
                bVar15 = true;
                pcVar7 = str_10023533;
                if (!bVar1) goto LAB_1001714c;
                goto LAB_10017324;
              }
              if (uVar8 - 0x41 < 0x1a) {
                uVar8 = uVar8 | 0x20;
              }
              if (uVar8 == 0x73) {
                uVar8 = (uint)local_84a;
                if (uVar8 == 0) {
                  pcVar7 = str_1002352d + 2;
                  bVar1 = false;
                }
                else {
                  bVar1 = false;
                  if (uVar8 - 0x41 < 0x1a) {
                    uVar8 = uVar8 | 0x20;
                  }
                  if (uVar8 != 0x69) goto switchD_10016dfc_caseD_63;
                  uVar8 = (uint)local_849;
                  if (uVar8 == 0) {
                    pcVar7 = str_1002352d + 3;
                    bVar1 = false;
                  }
                  else {
                    bVar1 = false;
                    if (uVar8 - 0x41 < 0x1a) {
                      uVar8 = uVar8 | 0x20;
                    }
                    if (uVar8 != 100) goto switchD_10016dfc_caseD_63;
                    uVar8 = (uint)local_848;
                    if (uVar8 == 0) {
                      pcVar7 = str_1002352d + 4;
                    }
                    else {
                      bVar1 = false;
                      if (uVar8 - 0x41 < 0x1a) {
                        uVar8 = uVar8 | 0x20;
                      }
                      bVar15 = uVar8 == 0x65;
                      if (bVar15) {
                        uVar8 = (uint)local_847;
                      }
                      if (!bVar15 || uVar8 != 0) goto switchD_10016dfc_caseD_63;
                      pcVar7 = str_1002352d + 5;
                    }
                    bVar1 = false;
                  }
                }
                goto LAB_10016f54;
              }
              bVar1 = false;
              if (uVar8 != 0x72) goto switchD_10016dfc_caseD_63;
              uVar8 = (uint)local_84a;
              if (uVar8 == 0) {
                pcVar7 = str_10023525 + 2;
              }
              else {
                if (uVar8 - 0x41 < 0x1a) {
                  uVar8 = uVar8 | 0x20;
                }
                if (uVar8 != 0x74) goto switchD_10016dfc_caseD_63;
                uVar8 = (uint)local_849;
                if (uVar8 == 0) {
                  pcVar7 = str_10023525 + 3;
                }
                else {
                  if (uVar8 - 0x41 < 0x1a) {
                    uVar8 = uVar8 | 0x20;
                  }
                  if (uVar8 != 0x69) goto switchD_10016dfc_caseD_63;
                  uVar8 = (uint)local_848;
                  if (uVar8 == 0) {
                    pcVar7 = str_10023525 + 4;
                  }
                  else {
                    if (uVar8 - 0x41 < 0x1a) {
                      uVar8 = uVar8 | 0x20;
                    }
                    if (uVar8 != 99) goto switchD_10016dfc_caseD_63;
                    uVar8 = (uint)local_847;
                    if (uVar8 == 0) {
                      pcVar7 = str_10023525 + 5;
                    }
                    else {
                      if (uVar8 - 0x41 < 0x1a) {
                        uVar8 = uVar8 | 0x20;
                      }
                      if (uVar8 != 0x6c) goto switchD_10016dfc_caseD_63;
                      uVar8 = (uint)local_846;
                      if (uVar8 == 0) {
                        pcVar7 = str_10023525 + 6;
                      }
                      else {
                        if (uVar8 - 0x41 < 0x1a) {
                          uVar8 = uVar8 | 0x20;
                        }
                        bVar15 = uVar8 == 0x65;
                        if (bVar15) {
                          uVar8 = (uint)local_845;
                        }
                        if (!bVar15 || uVar8 != 0) goto switchD_10016dfc_caseD_63;
                        pcVar7 = str_10023525 + 7;
                      }
                    }
                  }
                }
              }
              if (*pcVar7 != '\0') goto switchD_10016dfc_caseD_63;
              goto LAB_10017660;
            case 0x62:
              uVar8 = (uint)local_84b;
              if (uVar8 != 0) {
                if (uVar8 - 0x41 < 0x1a) {
                  uVar8 = uVar8 | 0x20;
                }
                bVar1 = uVar8 == 0x72;
                if (bVar1) {
                  uVar8 = (uint)local_84a;
                }
                if (bVar1 && uVar8 == 0) {
                  pbVar14 = &DAT_100233c0;
                  goto LAB_10017140;
                }
                goto LAB_1001714c;
              }
              pcVar7 = &DAT_100233be;
              break;
            default:
              goto switchD_10016dfc_caseD_63;
            case 100:
              uVar8 = (uint)local_84b;
              if (uVar8 == 0) {
                pcVar7 = &DAT_10023394;
                break;
              }
              if (uVar8 - 0x41 < 0x1a) {
                uVar8 = uVar8 | 0x20;
              }
              if (uVar8 == 0x69) {
                uVar8 = (uint)local_84a;
                if (uVar8 == 0) {
                  pbVar14 = &DAT_10023396;
                }
                else {
                  if (uVar8 - 0x41 < 0x1a) {
                    uVar8 = uVar8 | 0x20;
                  }
                  bVar1 = uVar8 != 0x76;
                  if (!bVar1) {
                    uVar8 = (uint)local_849;
                  }
                  if (bVar1 || uVar8 != 0) goto LAB_1001714c;
                  pbVar14 = &DAT_10023397;
                }
                goto LAB_10017140;
              }
              goto LAB_1001714c;
            case 0x70:
              bVar10 = local_84b;
              goto joined_r0x1001701c;
            case 0x73:
              uVar8 = (uint)local_84b;
              if (uVar8 != 0) {
                if (uVar8 - 0x41 < 0x1a) {
                  uVar8 = uVar8 | 0x20;
                }
                if (uVar8 == 0x65) {
                  uVar8 = (uint)local_84a;
                  if (uVar8 == 0) {
                    pbVar14 = (byte *)(str_10023518 + 2);
                  }
                  else {
                    if (uVar8 - 0x41 < 0x1a) {
                      uVar8 = uVar8 | 0x20;
                    }
                    if (uVar8 != 99) goto LAB_1001714c;
                    uVar8 = (uint)local_849;
                    if (uVar8 == 0) {
                      pbVar14 = (byte *)(str_10023518 + 3);
                    }
                    else {
                      if (uVar8 - 0x41 < 0x1a) {
                        uVar8 = uVar8 | 0x20;
                      }
                      if (uVar8 != 0x74) goto LAB_1001714c;
                      uVar8 = (uint)local_848;
                      if (uVar8 == 0) {
                        pbVar14 = (byte *)(str_10023518 + 4);
                      }
                      else {
                        if (uVar8 - 0x41 < 0x1a) {
                          uVar8 = uVar8 | 0x20;
                        }
                        if (uVar8 != 0x69) goto LAB_1001714c;
                        uVar8 = (uint)local_847;
                        if (uVar8 == 0) {
                          pbVar14 = (byte *)(str_10023518 + 5);
                        }
                        else {
                          if (uVar8 - 0x41 < 0x1a) {
                            uVar8 = uVar8 | 0x20;
                          }
                          if (uVar8 != 0x6f) goto LAB_1001714c;
                          uVar8 = (uint)local_846;
                          if (uVar8 == 0) {
                            pbVar14 = (byte *)(str_10023518 + 6);
                          }
                          else {
                            if (uVar8 - 0x41 < 0x1a) {
                              uVar8 = uVar8 | 0x20;
                            }
                            bVar1 = uVar8 == 0x6e;
                            if (bVar1) {
                              uVar8 = (uint)local_845;
                            }
                            if (!bVar1 || uVar8 != 0) goto LAB_1001714c;
                            pbVar14 = (byte *)(str_10023518 + 7);
                          }
                        }
                      }
                    }
                  }
                  goto LAB_10017140;
                }
                goto LAB_1001714c;
              }
              pcVar7 = str_10023518;
            }
            pbVar14 = (byte *)(pcVar7 + 1);
LAB_10017140:
            bVar10 = *pbVar14;
joined_r0x1001701c:
            if (bVar10 == 0) {
LAB_10017660:
              uVar8 = 1;
            }
            else {
LAB_1001714c:
              uVar8 = uVar4;
              if (uVar4 - 0x41 < 0x1a) {
                uVar8 = uVar4 | 0x20;
              }
              if (uVar8 == 0x68) {
                uVar8 = (uint)local_84b;
                bVar15 = false;
                if (uVar8 == 0) {
                  pcVar7 = str_10023533 + 1;
                }
                else {
                  if (uVar8 - 0x41 < 0x1a) {
                    uVar8 = uVar8 | 0x20;
                  }
                  if (uVar8 != 0x65) goto LAB_10017344;
                  uVar8 = (uint)local_84a;
                  if (uVar8 == 0) {
                    pcVar7 = str_10023533 + 2;
                  }
                  else {
                    if (uVar8 - 0x41 < 0x1a) {
                      uVar8 = uVar8 | 0x20;
                    }
                    if (uVar8 != 0x61) goto LAB_10017344;
                    uVar8 = (uint)local_849;
                    if (uVar8 == 0) {
                      pcVar7 = str_10023533 + 3;
                    }
                    else {
                      if (uVar8 - 0x41 < 0x1a) {
                        uVar8 = uVar8 | 0x20;
                      }
                      if (uVar8 != 100) goto LAB_10017344;
                      uVar8 = (uint)local_848;
                      if (uVar8 == 0) {
                        pcVar7 = str_10023533 + 4;
                      }
                      else {
                        if (uVar8 - 0x41 < 0x1a) {
                          uVar8 = uVar8 | 0x20;
                        }
                        if (uVar8 != 0x65) goto LAB_10017344;
                        uVar8 = (uint)local_847;
                        if (uVar8 == 0) {
                          pcVar7 = str_10023533 + 5;
                        }
                        else {
                          if (uVar8 - 0x41 < 0x1a) {
                            uVar8 = uVar8 | 0x20;
                          }
                          bVar1 = uVar8 == 0x72;
                          if (bVar1) {
                            uVar8 = (uint)local_846;
                          }
                          if (!bVar1 || uVar8 != 0) goto LAB_10017344;
                          pcVar7 = str_10023533 + 6;
                        }
                      }
                    }
                  }
                }
LAB_10017324:
                if (*pcVar7 != '\0') {
                  pcVar7 = str_1002353a;
                  if (!bVar15) goto LAB_10017344;
                  goto LAB_10017484;
                }
                goto LAB_10017660;
              }
LAB_10017344:
              if (uVar4 - 0x41 < 0x1a) {
                uVar4 = uVar4 | 0x20;
              }
              if (uVar4 == 0x66) {
                uVar4 = (uint)local_84b;
                if (uVar4 == 0) {
                  pcVar7 = str_1002353a + 1;
                }
                else {
                  if (uVar4 - 0x41 < 0x1a) {
                    uVar4 = uVar4 | 0x20;
                  }
                  if (uVar4 != 0x6f) goto LAB_10017490;
                  uVar4 = (uint)local_84a;
                  if (uVar4 == 0) {
                    pcVar7 = str_1002353a + 2;
                  }
                  else {
                    if (uVar4 - 0x41 < 0x1a) {
                      uVar4 = uVar4 | 0x20;
                    }
                    if (uVar4 != 0x6f) goto LAB_10017490;
                    uVar4 = (uint)local_849;
                    if (uVar4 == 0) {
                      pcVar7 = str_1002353a + 3;
                    }
                    else {
                      if (uVar4 - 0x41 < 0x1a) {
                        uVar4 = uVar4 | 0x20;
                      }
                      if (uVar4 != 0x74) goto LAB_10017490;
                      uVar4 = (uint)local_848;
                      if (uVar4 == 0) {
                        pcVar7 = str_1002353a + 4;
                      }
                      else {
                        if (uVar4 - 0x41 < 0x1a) {
                          uVar4 = uVar4 | 0x20;
                        }
                        if (uVar4 != 0x65) goto LAB_10017490;
                        uVar4 = (uint)local_847;
                        if (uVar4 == 0) {
                          pcVar7 = str_1002353a + 5;
                        }
                        else {
                          if (uVar4 - 0x41 < 0x1a) {
                            uVar4 = uVar4 | 0x20;
                          }
                          bVar1 = uVar4 != 0x72;
                          if (!bVar1) {
                            uVar4 = (uint)local_846;
                          }
                          if (bVar1 || uVar4 != 0) goto LAB_10017490;
                          pcVar7 = str_1002353a + 6;
                        }
                      }
                    }
                  }
                }
LAB_10017484:
                uVar4 = 0;
                if (*pcVar7 == '\0') goto LAB_10017660;
              }
LAB_10017490:
              bVar1 = recovered_1000bcd4(&local_84c,&DAT_10023541);
              uVar4 = (uint)bVar1;
              uVar8 = 1;
              if (uVar4 == 0) {
                bVar1 = recovered_1000bcd4(&local_84c,&DAT_100233c1);
                uVar4 = (uint)bVar1;
                if (uVar4 == 0) {
                  bVar1 = recovered_1000bcd4(&local_84c,&DAT_1002336f);
                  uVar4 = (uint)bVar1;
                  if (uVar4 == 0) {
                    bVar1 = recovered_1000bcd4(&local_84c,&DAT_10023372);
                    uVar4 = (uint)bVar1;
                    if (uVar4 == 0) {
                      bVar1 = recovered_1000bcd4(&local_84c,&DAT_10023375);
                      uVar4 = (uint)bVar1;
                      if (uVar4 == 0) {
                        bVar1 = recovered_1000bcd4(&local_84c,&DAT_10023378);
                        uVar4 = (uint)bVar1;
                        if (uVar4 == 0) {
                          bVar1 = recovered_1000bcd4(&local_84c,&DAT_1002337b);
                          uVar4 = (uint)bVar1;
                          if (uVar4 == 0) {
                            bVar1 = recovered_1000bcd4(&local_84c,&DAT_1002337e);
                            uVar4 = (uint)bVar1;
                            uVar8 = uVar4;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            if (uVar8 != 0) {
              uVar4 = (uint)local_424[0];
            }
            if ((uVar8 != 0 && uVar4 != 0) &&
               (uVar2 = strlen((char *)local_424), uVar2 < 0x3ff)) {
              (local_424 + uVar2)[0] = 0x20;
              (local_424 + uVar2)[1] = 0;
            }
          }
          param_2 = pbVar6 + 1;
        }
LAB_1001767c:
        if (pbVar12 <= param_2) goto LAB_10017740;
      }
      uVar2 = strlen((char *)local_424);
      if (uVar2 < 0x3ff) {
        local_424[uVar2] = bVar10;
        local_424[uVar2 + 1] = 0;
      }
      param_2 = param_2 + 1;
    } while (param_2 < pbVar12);
  }
LAB_10017740:
  pbVar12 = local_824;
  recovered_1000ce7c((char *)local_424,(char *)pbVar12,0x400);
  bVar1 = false;
  *param_4 = '\0';
  do {
    bVar10 = *pbVar12;
    switch((uintptr_t)(bVar10)) {
    case 0:
      goto switchD_10017788_caseD_0;
    default:
      uVar2 = strlen(param_4);
      bVar1 = false;
      if (uVar2 < param_5 - 1U) {
LAB_10017858:
        param_4[uVar2] = bVar10;
        (param_4 + uVar2)[1] = 0;
      }
LAB_10017864:
      pbVar12 = pbVar12 + 1;
      break;
    case 9:
    case 10:
    case 0xc:
    case 0xd:
    case 0x20:
      if (!bVar1) {
        bVar1 = true;
        if (*param_4 != '\0') {
          uVar2 = strlen(param_4);
          bVar1 = true;
          if (uVar2 < param_5 - 1U) {
            bVar10 = 0x20;
            goto LAB_10017858;
          }
        }
        goto LAB_10017864;
      }
      bVar1 = true;
      pbVar12 = pbVar12 + 1;
    }
  } while( true );
}

#undef DAT_10022ca6
#undef DAT_10022ca9
#undef DAT_10022cad
#undef DAT_1002336f
#undef DAT_10023372
#undef DAT_10023375
#undef DAT_10023378
#undef DAT_1002337b
#undef DAT_1002337e
#undef DAT_10023394
#undef DAT_10023396
#undef DAT_10023397
#undef DAT_100233be
#undef DAT_100233c0
#undef DAT_100233c1
#undef DAT_10023404
#undef DAT_10023405
#undef DAT_10023406
#undef DAT_10023407
#undef DAT_10023408
#undef DAT_10023541
#undef str_10023518
#undef str_10023525
#undef str_1002352d
#undef str_10023533
#undef str_1002353a
#undef local_8cd
#undef local_84d
#undef local_84c
#undef local_84b
#undef local_84a
#undef local_849
#undef local_848
#undef local_847
#undef local_846
#undef local_845
#undef local_824
#undef local_424

#undef DAT_10022c1b
#define DAT_10022c1b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1d3U)))
#undef DAT_10022ca6
#define DAT_10022ca6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x25eU)))
#define local_390 (*(undefined4 *)(frame + 16))
#define local_38c (*(int *)(frame + 20))
#define local_388 (*(int *)(frame + 24))
#define local_384 (*(int *)(frame + 28))
#define local_380 (*(int *)(frame + 32))
#define local_37c (*(char (*)[192])(frame + 36))
#define local_3c (*(undefined4 *)(frame + 868))
#define local_38 (*(undefined4 *)(frame + 872))
#define local_34 (*(int *)(frame + 876))
#define local_24 (*(undefined1 *)(frame + 892))
#define acStack_2bc (*(char (*)[640])(frame + 228))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001786c
 */

void recovered_1001786c(int param_1,char *param_2,char *param_3,int param_4,int param_5,int param_6,
                       int *param_7)

{
  unsigned char frame[960] __attribute__((aligned(16))) = {0};

  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  char *vararg0;
  bool bVar5;

  if (param_7 == (int *)0x0) {
    return;
  }
  memset(&local_390,0,0x370);
  local_390 = 3;
  if (param_4 < 1) {
    if (param_2 != (char *)0x0) {
      for (uVar2 = 0; (cVar1 = param_2[uVar2], cVar1 != '\0' && (cVar1 != '#' && cVar1 != '?'));
          uVar2 = uVar2 + 1) {
      }
      param_4 = 0xa0;
      if (3 < uVar2) {
        uVar3 = (uint)(byte)param_2[uVar2 - 4];
        if (uVar3 - 0x41 < 0x1a) {
          uVar3 = uVar3 | 0x20;
        }
        if (uVar3 == 0x2e) {
          uVar3 = (uint)(byte)param_2[uVar2 - 3];
          if (uVar3 - 0x41 < 0x1a) {
            uVar3 = uVar3 | 0x20;
          }
          if (uVar3 == 0x70) {
            uVar3 = (uint)(byte)param_2[uVar2 - 2];
            if (uVar3 - 0x41 < 0x1a) {
              uVar3 = uVar3 | 0x20;
            }
            if (uVar3 == 0x6e) {
              uVar2 = (uint)(byte)param_2[uVar2 - 1];
              if (uVar2 - 0x41 < 0x1a) {
                uVar2 = uVar2 | 0x20;
              }
              if (uVar2 == 0x67) {
                param_4 = param_7[1];
              }
            }
          }
        }
      }
      goto LAB_100178c4;
    }
    param_4 = 0xa0;
    if (param_5 < 1) {
      param_5 = 0x5a;
    }
  }
  else {
LAB_100178c4:
    if ((param_5 < 1) && (param_5 = 0x5a, param_2 != (char *)0x0)) {
      for (uVar2 = 0; (cVar1 = param_2[uVar2], cVar1 != '\0' && (cVar1 != '#' && cVar1 != '?'));
          uVar2 = uVar2 + 1) {
      }
      if (3 < uVar2) {
        uVar3 = (uint)(byte)param_2[uVar2 - 4];
        if (uVar3 - 0x41 < 0x1a) {
          uVar3 = uVar3 | 0x20;
        }
        if (uVar3 == 0x2e) {
          uVar3 = (uint)(byte)param_2[uVar2 - 3];
          if (uVar3 - 0x41 < 0x1a) {
            uVar3 = uVar3 | 0x20;
          }
          if (uVar3 == 0x70) {
            uVar3 = (uint)(byte)param_2[uVar2 - 2];
            if (uVar3 - 0x41 < 0x1a) {
              uVar3 = uVar3 | 0x20;
            }
            if (uVar3 == 0x6e) {
              uVar2 = (uint)(byte)param_2[uVar2 - 1];
              if (uVar2 - 0x41 < 0x1a) {
                uVar2 = uVar2 | 0x20;
              }
              if ((uVar2 == 0x67) && (param_5 = param_4, 0x40 < param_4)) {
                param_5 = 0xb4;
              }
            }
          }
        }
      }
    }
  }
  iVar4 = param_7[1];
  local_38c = *param_7;
  local_384 = param_4;
  if (iVar4 <= param_4) {
    local_384 = iVar4;
  }
  if (param_6 == 2) {
    uVar2 = iVar4 - local_384 & ~(iVar4 - local_384 >> 0x1f);
LAB_10017a80:
    local_38c = uVar2 + local_38c;
  }
  else if (param_6 == 1) {
    iVar4 = iVar4 - local_384;
    uVar2 = iVar4 / 2 & ~(iVar4 - (iVar4 >> 0x1f) >> 0x1f);
    goto LAB_10017a80;
  }
  local_38 = 1;
  local_24 = (undefined1)param_7[3];
  local_388 = param_7[2];
  vararg0 = &DAT_10022c1b;
  if (param_2 != (char *)0x0) {
    vararg0 = param_2;
  }
  local_34 = param_6;
  local_3c = 0xffffffff;
  local_380 = param_5;
  pf_varargs_10023fa4__4_(acStack_2bc,0x100,&DAT_10022ca6,(uint)vararg0);
  if (param_3 == (char *)0x0) {
    if (param_2 != (char *)0x0) goto LAB_10017b0c;
  }
  else {
    cVar1 = *param_3;
    if (cVar1 == '\0') {
      param_3 = param_2;
    }
    bVar5 = param_2 != (char *)0x0;
    param_2 = param_3;
    if (cVar1 != '\0' || bVar5) {
LAB_10017b0c:
      pf_varargs_10023fa4__4_(local_37c,0xc0,&DAT_10022ca6,(uint)param_2);
      goto LAB_10017b28;
    }
  }
  local_37c[0] = '\0';
LAB_10017b28:
  uVar2 = *(uint *)(param_1 + 0x52c2c);
  if (uVar2 >> 7 < 3) {
    *(uint *)(param_1 + 0x52c2c) = uVar2 + 1;
    memcpy((void *)(uVar2 * 0x370 + param_1 + 0x42c),&local_390,0x370);
  }
  param_7[2] = local_380 + param_7[2] + 0xe;
  return;
}

#undef DAT_10022c1b
#undef DAT_10022ca6
#undef local_390
#undef local_38c
#undef local_388
#undef local_384
#undef local_380
#undef local_37c
#undef local_3c
#undef local_38
#undef local_34
#undef local_24
#undef acStack_2bc

#undef DAT_10022c1b
#define DAT_10022c1b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1d3U)))
#undef DAT_100233be
#define DAT_100233be (*(uint8_t *)(((uintptr_t)pf_module_state + 0x976U)))
#undef DAT_100233bf
#define DAT_100233bf (*(uint8_t *)(((uintptr_t)pf_module_state + 0x977U)))
#undef DAT_100233c0
#define DAT_100233c0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x978U)))
#undef DAT_100233cd
#define DAT_100233cd (*(uint8_t *)(((uintptr_t)pf_module_state + 0x985U)))
#undef DAT_100233ce
#define DAT_100233ce (*(uint8_t *)(((uintptr_t)pf_module_state + 0x986U)))
#undef str_10022ce5
#define str_10022ce5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x29dU)))
#undef str_10022ceb
#define str_10022ceb (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2a3U)))
#undef str_10022cf4
#define str_10022cf4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2acU)))
#undef str_10022cfb
#define str_10022cfb (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2b3U)))
#undef str_10023670
#define str_10023670 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc28U)))
#define local_c99 (*(char *)(frame + 23))
#define local_c98 (*(byte *)(frame + 24))
#define local_c97 (*(byte *)(frame + 25))
#define local_c96 (*(byte *)(frame + 26))
#define local_c95 (*(byte *)(frame + 27))
#define local_c94 (*(byte *)(frame + 28))
#define local_c93 (*(byte *)(frame + 29))
#define local_c92 (*(byte *)(frame + 30))
#define local_bf0 (*(char (*)[96])(frame + 192))
#define local_b90 (*(char (*)[2048])(frame + 288))
#define local_390 (*(byte (*)[4])(frame + 2336))
#define abStack_c70 (*(byte (*)[128])(frame + 64))
#define local_38c (*(undefined4 *)(frame + 2340))
#define local_388 (*(int *)(frame + 2344))
#define local_384 (*(undefined4 *)(frame + 2348))
#define local_380 (*(undefined4 *)(frame + 2352))
#define local_24 (*(undefined1 *)(frame + 3212))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10017b88
 */

void recovered_10017b88(int param_1,uint param_2,undefined4 *param_3,byte *param_4,int param_5)

{
  unsigned char frame[3280] __attribute__((aligned(16))) = {0};

  int iVar1;
  char *pcVar2;
  uint uVar3;
  char *pcVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  char *pcVar8;
  uint unaff_r11;
  bool bVar9;

  if (param_3 != (undefined4 *)0x0) {
    uVar3 = param_2;
    if (param_4 != (byte *)0x0) {
      uVar3 = (uint)*param_4;
      unaff_r11 = param_2;
    }
    if (param_4 != (byte *)0x0 && uVar3 != 0) {
      local_bf0[0] = '\0';
      iVar1 = recovered_1000c7ac(param_1,unaff_r11,param_4,local_b90,0x800,local_bf0);
      if (iVar1 != 0) {
        pcVar4 = local_b90;
LAB_10017c78:
        do {
          while (*pcVar4 != '<') {
            if (*pcVar4 == '\0') {
              return;
            }
            pcVar2 = strchr(pcVar4,0x3c);
            if (pcVar2 == (char *)0x0) {
              uVar7 = strlen(pcVar4);
            }
            else {
              uVar7 = (int)pcVar2 - (int)pcVar4;
            }
            uVar6 = 0x17f;
            if ((int)uVar7 < 0x17f) {
              uVar6 = uVar7;
            }
            memcpy(local_390,pcVar4,uVar6);
            local_390[uVar6] = 0;
            recovered_10014a40(unaff_r11,local_390,0,&DAT_10022c1b,param_5,0,param_3);
            if (pcVar2 == (char *)0x0) {
              pcVar2 = pcVar4 + uVar7;
            }
            pcVar4 = pcVar2;
          }
          pcVar2 = strchr(pcVar4,0x3e);
          if (pcVar2 == (char *)0x0) {
            return;
          }
          pcVar8 = pcVar2 + ~(uint)pcVar4;
          if (0x7e < (int)pcVar8) {
            pcVar8 = (char *)0x7f;
          }
          local_c99 = '\0';
          memcpy(abStack_c70,pcVar4 + 1,(ulong)pcVar8);
          abStack_c70[(int)pcVar8] = 0;
          recovered_1000ba88(abStack_c70,&local_c98,0x28,&local_c99);
          if (local_c99 != '\0') goto LAB_10017c74;
          uVar3 = (uint)local_c98;
          pcVar4 = &DAT_100233be;
          if (uVar3 == 0) {
LAB_10017e7c:
            if (*pcVar4 != '\0') {
              pcVar4 = str_10022ce5;
              if (uVar3 != 0) goto LAB_10017e9c;
              goto LAB_10017c68;
            }
            pcVar4 = pcVar2 + 1;
            param_3[2] = param_3[2] + 0xc;
            goto LAB_10017c78;
          }
          uVar5 = uVar3;
          if (uVar3 - 0x41 < 0x1a) {
            uVar5 = uVar3 | 0x20;
          }
          if (uVar5 == 0x62) {
            uVar5 = (uint)local_c97;
            if (uVar5 == 0) {
              pcVar4 = &DAT_100233bf;
            }
            else {
              if (uVar5 - 0x41 < 0x1a) {
                uVar5 = uVar5 | 0x20;
              }
              bVar9 = uVar5 != 0x72;
              if (!bVar9) {
                uVar5 = (uint)local_c96;
              }
              if (bVar9 || uVar5 != 0) goto LAB_10017e9c;
              pcVar4 = &DAT_100233c0;
            }
            goto LAB_10017e7c;
          }
          if (uVar5 == 0x68) {
            uVar5 = (uint)local_c97;
            if (uVar5 == 0) {
              pcVar4 = &DAT_100233cd;
            }
            else {
              if (uVar5 - 0x41 < 0x1a) {
                uVar5 = uVar5 | 0x20;
              }
              bVar9 = uVar5 == 0x72;
              if (bVar9) {
                uVar5 = (uint)local_c96;
              }
              if (!bVar9 || uVar5 != 0) goto LAB_10017e9c;
              pcVar4 = &DAT_100233ce;
            }
            if (*pcVar4 == '\0') {
              memset(local_390,0,0x370);
              iVar1 = param_3[2];
              local_390[0] = 6;
              local_390[1] = 0;
              local_390[2] = 0;
              local_390[3] = 0;
              local_380 = 1;
              uVar3 = *(uint *)(unaff_r11 + 0x52c2c);
              local_388 = iVar1 + 9;
              local_384 = param_3[1];
              local_38c = *param_3;
              local_24 = *(undefined1 *)(param_3 + 3);
              if (uVar3 >> 7 < 3) {
                *(uint *)(unaff_r11 + 0x52c2c) = uVar3 + 1;
                memcpy((void *)(uVar3 * 0x370 + unaff_r11 + 0x42c),local_390,0x370);
                iVar1 = param_3[2];
              }
              param_3[2] = iVar1 + 0x16;
              goto LAB_10017c74;
            }
          }
LAB_10017e9c:
          uVar5 = uVar3;
          if (uVar3 - 0x41 < 0x1a) {
            uVar5 = uVar3 | 0x20;
          }
          if (uVar5 != 0x73) goto LAB_10017c74;
          uVar5 = (uint)local_c97;
          if (uVar5 == 0) {
            pcVar4 = str_10022cf4 + 1;
LAB_1001807c:
            if (*pcVar4 != '\0') {
              pcVar4 = str_10022ce5;
              if (uVar3 == 0) goto LAB_10017c68;
              goto code_r0x100180a4;
            }
LAB_10018140:
            pcVar4 = str_10022cf4;
            if (uVar3 == 0) {
LAB_100182d0:
              pcVar8 = str_10022ceb;
              if (*pcVar4 == '\0') {
                pcVar8 = str_10022cfb;
              }
            }
            else {
              if (uVar3 - 0x41 < 0x1a) {
                uVar3 = uVar3 | 0x20;
              }
              pcVar8 = str_10022ceb;
              if (uVar3 == 0x73) {
                uVar3 = (uint)local_c97;
                if (uVar3 == 0) {
                  pcVar4 = str_10022cf4 + 1;
                }
                else {
                  if (uVar3 - 0x41 < 0x1a) {
                    uVar3 = uVar3 | 0x20;
                  }
                  if (uVar3 != 99) goto LAB_100182f4;
                  uVar3 = (uint)local_c96;
                  if (uVar3 == 0) {
                    pcVar4 = str_10022cf4 + 2;
                  }
                  else {
                    if (uVar3 - 0x41 < 0x1a) {
                      uVar3 = uVar3 | 0x20;
                    }
                    if (uVar3 != 0x72) goto LAB_100182f4;
                    uVar3 = (uint)local_c95;
                    if (uVar3 == 0) {
                      pcVar4 = str_10022cf4 + 3;
                    }
                    else {
                      if (uVar3 - 0x41 < 0x1a) {
                        uVar3 = uVar3 | 0x20;
                      }
                      if (uVar3 != 0x69) goto LAB_100182f4;
                      uVar3 = (uint)local_c94;
                      if (uVar3 == 0) {
                        pcVar4 = str_10022cf4 + 4;
                      }
                      else {
                        if (uVar3 - 0x41 < 0x1a) {
                          uVar3 = uVar3 | 0x20;
                        }
                        if (uVar3 != 0x70) goto LAB_100182f4;
                        uVar3 = (uint)local_c93;
                        if (uVar3 == 0) {
                          pcVar4 = str_10022cf4 + 5;
                        }
                        else {
                          if (uVar3 - 0x41 < 0x1a) {
                            uVar3 = uVar3 | 0x20;
                          }
                          bVar9 = uVar3 != 0x74;
                          if (!bVar9) {
                            uVar3 = (uint)local_c92;
                          }
                          if (bVar9 || uVar3 != 0) goto LAB_100182f4;
                          pcVar4 = str_10022cf4 + 6;
                        }
                      }
                    }
                  }
                }
                goto LAB_100182d0;
              }
            }
LAB_100182f4:
            pcVar4 = pcVar2 + 1;
            uVar7 = strlen(pcVar8);
            if ((uVar7 != 0) && (*pcVar4 != '\0')) {
              pcVar2 = pcVar4;
              do {
                uVar6 = 0;
                while (uVar3 = (uint)(byte)pcVar2[uVar6], uVar3 != 0) {
                  uVar5 = (uint)(byte)pcVar8[uVar6];
                  if (uVar5 - 0x41 < 0x1a) {
                    uVar5 = uVar5 | 0x20;
                  }
                  if (uVar3 - 0x41 < 0x1a) {
                    uVar3 = uVar3 | 0x20;
                  }
                  if (uVar3 != uVar5) break;
                  uVar6 = uVar6 + 1;
                  if (uVar7 == uVar6) goto LAB_10018384;
                }
                if (uVar7 == uVar6) {
LAB_10018384:
                  uVar3 = (uint)local_c98;
                  pcVar4 = str_10022cf4;
                  if (uVar3 == 0) {
LAB_100184dc:
                    iVar1 = 8;
                    if (*pcVar4 == '\0') {
                      iVar1 = 9;
                    }
                  }
                  else {
                    iVar1 = 8;
                    if (uVar3 - 0x41 < 0x1a) {
                      uVar3 = uVar3 | 0x20;
                    }
                    if (uVar3 == 0x73) {
                      uVar3 = (uint)local_c97;
                      if (uVar3 == 0) {
                        pcVar4 = str_10022cf4 + 1;
                      }
                      else {
                        if (uVar3 - 0x41 < 0x1a) {
                          uVar3 = uVar3 | 0x20;
                        }
                        if (uVar3 != 99) goto LAB_100184ec;
                        uVar3 = (uint)local_c96;
                        if (uVar3 == 0) {
                          pcVar4 = str_10022cf4 + 2;
                        }
                        else {
                          if (uVar3 - 0x41 < 0x1a) {
                            uVar3 = uVar3 | 0x20;
                          }
                          if (uVar3 != 0x72) goto LAB_100184ec;
                          uVar3 = (uint)local_c95;
                          if (uVar3 == 0) {
                            pcVar4 = str_10022cf4 + 3;
                          }
                          else {
                            if (uVar3 - 0x41 < 0x1a) {
                              uVar3 = uVar3 | 0x20;
                            }
                            if (uVar3 != 0x69) goto LAB_100184ec;
                            uVar3 = (uint)local_c94;
                            if (uVar3 == 0) {
                              pcVar4 = str_10022cf4 + 4;
                            }
                            else {
                              if (uVar3 - 0x41 < 0x1a) {
                                uVar3 = uVar3 | 0x20;
                              }
                              if (uVar3 != 0x70) goto LAB_100184ec;
                              uVar3 = (uint)local_c93;
                              if (uVar3 == 0) {
                                pcVar4 = str_10022cf4 + 5;
                              }
                              else {
                                if (uVar3 - 0x41 < 0x1a) {
                                  uVar3 = uVar3 | 0x20;
                                }
                                bVar9 = uVar3 != 0x74;
                                if (!bVar9) {
                                  uVar3 = (uint)local_c92;
                                }
                                if (bVar9 || uVar3 != 0) goto LAB_100184ec;
                                pcVar4 = str_10022cf4 + 6;
                              }
                            }
                          }
                        }
                      }
                      goto LAB_100184dc;
                    }
                  }
LAB_100184ec:
                  pcVar4 = pcVar2 + iVar1;
                  break;
                }
                pcVar2 = pcVar2 + 1;
              } while (*pcVar2 != '\0');
            }
          }
          else {
            if (uVar5 - 0x41 < 0x1a) {
              uVar5 = uVar5 | 0x20;
            }
            if (uVar5 == 99) {
              uVar5 = (uint)local_c96;
              if (uVar5 == 0) {
                pcVar4 = str_10022cf4 + 2;
              }
              else {
                if (uVar5 - 0x41 < 0x1a) {
                  uVar5 = uVar5 | 0x20;
                }
                if (uVar5 != 0x72) goto code_r0x100180a4;
                uVar5 = (uint)local_c95;
                if (uVar5 == 0) {
                  pcVar4 = str_10022cf4 + 3;
                }
                else {
                  if (uVar5 - 0x41 < 0x1a) {
                    uVar5 = uVar5 | 0x20;
                  }
                  if (uVar5 != 0x69) goto code_r0x100180a4;
                  uVar5 = (uint)local_c94;
                  if (uVar5 == 0) {
                    pcVar4 = str_10022cf4 + 4;
                  }
                  else {
                    if (uVar5 - 0x41 < 0x1a) {
                      uVar5 = uVar5 | 0x20;
                    }
                    if (uVar5 != 0x70) goto code_r0x100180a4;
                    uVar5 = (uint)local_c93;
                    if (uVar5 == 0) {
                      pcVar4 = str_10022cf4 + 5;
                    }
                    else {
                      if (uVar5 - 0x41 < 0x1a) {
                        uVar5 = uVar5 | 0x20;
                      }
                      bVar9 = uVar5 != 0x74;
                      if (!bVar9) {
                        uVar5 = (uint)local_c92;
                      }
                      if (bVar9 || uVar5 != 0) goto code_r0x100180a4;
                      pcVar4 = str_10022cf4 + 6;
                    }
                  }
                }
              }
              goto LAB_1001807c;
            }
code_r0x100180a4:
            uVar5 = (uint)local_c97;
            if (uVar5 == 0) {
              pcVar4 = str_10022ce5 + 1;
LAB_10017c68:
              if (*pcVar4 == '\0') goto LAB_10018140;
            }
            else {
              if (uVar5 - 0x41 < 0x1a) {
                uVar5 = uVar5 | 0x20;
              }
              if (uVar5 == 0x74) {
                uVar5 = (uint)local_c96;
                if (uVar5 == 0) {
                  pcVar4 = str_10022ce5 + 2;
                }
                else {
                  if (uVar5 - 0x41 < 0x1a) {
                    uVar5 = uVar5 | 0x20;
                  }
                  if (uVar5 != 0x79) goto LAB_10017c74;
                  uVar5 = (uint)local_c95;
                  if (uVar5 == 0) {
                    pcVar4 = str_10022ce5 + 3;
                  }
                  else {
                    if (uVar5 - 0x41 < 0x1a) {
                      uVar5 = uVar5 | 0x20;
                    }
                    if (uVar5 != 0x6c) goto LAB_10017c74;
                    uVar5 = (uint)local_c94;
                    if (uVar5 == 0) {
                      pcVar4 = str_10022ce5 + 4;
                    }
                    else {
                      if (uVar5 - 0x41 < 0x1a) {
                        uVar5 = uVar5 | 0x20;
                      }
                      bVar9 = uVar5 != 0x65;
                      if (!bVar9) {
                        uVar5 = (uint)local_c93;
                      }
                      if (bVar9 || uVar5 != 0) goto LAB_10017c74;
                      pcVar4 = str_10022ce5 + 5;
                    }
                  }
                }
                goto LAB_10017c68;
              }
            }
LAB_10017c74:
            pcVar4 = pcVar2 + 1;
          }
        } while( true );
      }
      recovered_10014a40(unaff_r11,(byte *)str_10023670,0,&DAT_10022c1b,param_5,0,param_3);
    }
  }
  return;
}

#undef DAT_10022c1b
#undef DAT_100233be
#undef DAT_100233bf
#undef DAT_100233c0
#undef DAT_100233cd
#undef DAT_100233ce
#undef str_10022ce5
#undef str_10022ceb
#undef str_10022cf4
#undef str_10022cfb
#undef str_10023670
#undef local_c99
#undef local_c98
#undef local_c97
#undef local_c96
#undef local_c95
#undef local_c94
#undef local_c93
#undef local_c92
#undef local_bf0
#undef local_b90
#undef local_390
#undef abStack_c70
#undef local_38c
#undef local_388
#undef local_384
#undef local_380
#undef local_24

#undef DAT_10022c1b
#define DAT_10022c1b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1d3U)))
#undef DAT_10022ca6
#define DAT_10022ca6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x25eU)))
#define local_3c (*(undefined4 *)(frame + 868))
#define local_38 (*(undefined4 *)(frame + 872))
#define acStack_1bc (*(char (*)[64])(frame + 484))
#define acStack_17c (*(char (*)[64])(frame + 548))
#define acStack_13c (*(char (*)[256])(frame + 612))
#define local_390 (*(undefined4 (*)[117])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100184f4
 */

void recovered_100184f4(int param_1,undefined1 *param_2,undefined1 *param_3,undefined1 *param_4,
                       undefined4 param_5)

{
  unsigned char frame[960] __attribute__((aligned(16))) = {0};

  uint uVar1;

  memset(local_390,0,0x370);
  local_3c = param_5;
  local_390[0] = 8;
  if (param_2 == (undefined1 *)0x0) {
    param_2 = &DAT_10022c1b;
  }
  local_38 = 1;
  pf_varargs_10023fa4__4_(acStack_1bc,0x40,&DAT_10022ca6,(uint)param_2);
  if (param_3 == (undefined1 *)0x0) {
    param_3 = &DAT_10022c1b;
  }
  pf_varargs_10023fa4__4_(acStack_17c,0x40,&DAT_10022ca6,(uint)param_3);
  if (param_4 == (undefined1 *)0x0) {
    param_4 = &DAT_10022c1b;
  }
  pf_varargs_10023fa4__4_(acStack_13c,0x80,&DAT_10022ca6,(uint)param_4);
  uVar1 = *(uint *)(param_1 + 0x52c2c);
  if (uVar1 >> 7 < 3) {
    *(uint *)(param_1 + 0x52c2c) = uVar1 + 1;
    memcpy((void *)(uVar1 * 0x370 + param_1 + 0x42c),local_390,0x370);
  }
  return;
}

#undef DAT_10022c1b
#undef DAT_10022ca6
#undef local_3c
#undef local_38
#undef acStack_1bc
#undef acStack_17c
#undef acStack_13c
#undef local_390

#undef DAT_10022c1b
#define DAT_10022c1b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1d3U)))
#undef DAT_10022ca6
#define DAT_10022ca6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x25eU)))
#undef str_10023471
#define str_10023471 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa29U)))
#define local_390 (*(undefined4 *)(frame + 16))
#define local_38c (*(int *)(frame + 20))
#define local_388 (*(int * *)(frame + 24))
#define local_384 (*(int *)(frame + 28))
#define local_380 (*(undefined4 *)(frame + 32))
#define local_3c (*(int *)(frame + 868))
#define local_38 (*(undefined4 *)(frame + 872))
#define local_34 (*(int *)(frame + 876))
#define local_24 (*(undefined1 *)(frame + 892))
#define local_23 (*(undefined1 *)(frame + 893))
#define acStack_37c (*(char (*)[448])(frame + 36))
#define acStack_1bc (*(char (*)[128])(frame + 484))
#define acStack_13c (*(char (*)[128])(frame + 612))
#define acStack_bc (*(char (*)[128])(frame + 740))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10018600
 */

void recovered_10018600(int param_1,char *param_2,undefined1 *param_3,undefined1 *param_4,
                       undefined1 *param_5,int param_6,int param_7,int param_8,int *param_9)

{
  unsigned char frame[960] __attribute__((aligned(16))) = {0};

  bool bVar1;
  char *vararg0;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;

  if (param_9 == (int *)0x0) {
    return;
  }
  memset(&local_390,0,0x370);
  vararg0 = str_10023471;
  if ((param_2 != (char *)0x0) && (*param_2 != '\0')) {
    vararg0 = param_2;
  }
  local_390 = 5;
  uVar2 = recovered_1001a550(vararg0,1);
  iVar5 = param_9[1];
  local_380 = 0x1a;
  iVar7 = *param_9;
  local_384 = uVar2 + 0x16;
  if (iVar5 < (int)(uVar2 + 0x16)) {
    local_384 = iVar5;
  }
  if (0x9f < local_384) {
    local_384 = 0xa0;
  }
  if ((int)uVar2 < 0x20) {
    local_384 = 0x36;
  }
  if (param_8 == 2) {
    uVar2 = iVar5 - local_384 & ~(iVar5 - local_384 >> 0x1f);
  }
  else {
    local_38c = iVar7;
    if (param_8 != 1) goto LAB_100186e4;
    iVar3 = iVar5 - local_384;
    uVar2 = iVar3 / 2 & ~(iVar3 - (iVar3 >> 0x1f) >> 0x1f);
  }
  local_38c = uVar2 + iVar7;
LAB_100186e4:
  bVar1 = false;
  local_388 = (int *)param_9[2];
  if ((-1 < param_6) && (*(int *)(param_1 + 0x52c2c) != 0)) {
    if (param_7 == 0) {
      iVar3 = *(int *)(param_1 + 0x52c2c) * 0x370 + param_1;
      piVar4 = (int *)(iVar3 + 0xbc);
      if ((*piVar4 == 4) && (*(int *)(iVar3 + 0x410) == param_6)) {
        iVar7 = iVar7 + iVar5;
        iVar6 = *(int *)(iVar3 + 0xc0) + *(int *)(iVar3 + 200) + 8;
        iVar5 = iVar6 + local_384;
        if (iVar5 <= iVar7) {
          piVar4 = *(int **)(iVar3 + 0xc4);
        }
        bVar1 = iVar5 <= iVar7;
        if (iVar5 <= iVar7) {
          local_38c = iVar6;
          local_388 = piVar4;
        }
      }
      else {
      }
    }
    else {
    }
  }
  local_23 = (undefined1)param_7;
  local_38 = 1;
  local_24 = (undefined1)param_9[3];
  local_34 = param_8;
  local_3c = param_6;
  pf_varargs_10023fa4__4_(acStack_37c,0xc0,&DAT_10022ca6,(uint)vararg0);
  if (param_3 == (undefined1 *)0x0) {
    param_3 = &DAT_10022c1b;
  }
  pf_varargs_10023fa4__4_(acStack_1bc,0x40,&DAT_10022ca6,(uint)param_3);
  if (param_4 == (undefined1 *)0x0) {
    param_4 = &DAT_10022c1b;
  }
  pf_varargs_10023fa4__4_(acStack_13c,0x80,&DAT_10022ca6,(uint)param_4);
  if (param_5 == (undefined1 *)0x0) {
    param_5 = &DAT_10022c1b;
  }
  pf_varargs_10023fa4__4_(acStack_bc,0x80,&DAT_10022ca6,(uint)param_5);
  uVar2 = *(uint *)(param_1 + 0x52c2c);
  if (uVar2 >> 7 < 3) {
    *(uint *)(param_1 + 0x52c2c) = uVar2 + 1;
    memcpy((void *)(uVar2 * 0x370 + param_1 + 0x42c),&local_390,0x370);
  }
  iVar5 = param_9[2];
  if (bVar1) {
    iVar7 = (int)local_388 + 0x22;
    if ((int)local_388 + 0x22 < iVar5) {
      iVar7 = iVar5;
    }
  }
  else {
    iVar7 = iVar5 + 0x22;
  }
  param_9[2] = iVar7;
  return;
}

#undef DAT_10022c1b
#undef DAT_10022ca6
#undef str_10023471
#undef local_390
#undef local_38c
#undef local_388
#undef local_384
#undef local_380
#undef local_3c
#undef local_38
#undef local_34
#undef local_24
#undef local_23
#undef acStack_37c
#undef acStack_1bc
#undef acStack_13c
#undef acStack_bc

#define local_28 (*(char (*)[16])(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100188bc
 */

undefined4 recovered_100188bc(char *param_1,char *param_2)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  char *pcVar2;
  ulong uVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;

  recovered_1000bd50(param_1,param_2,local_28,0x10);
  uVar5 = 1;
  if (((local_28[0] == '\0') && (uVar5 = 0, param_1 != (char *)0x0 && param_2 != (char *)0x0)) &&
     (uVar1 = strlen(param_2), *param_1 != '\0')) {
    pcVar2 = param_1;
    do {
      uVar3 = 0;
      if (uVar1 == 0) {
LAB_10018980:
        if (uVar3 == uVar1) goto LAB_10018988;
      }
      else {
        do {
          uVar4 = (uint)(byte)param_2[uVar3];
          uVar6 = (uint)(byte)pcVar2[uVar3];
          if (uVar4 - 0x41 < 0x1a) {
            uVar4 = uVar4 | 0x20;
          }
          if (uVar6 - 0x41 < 0x1a) {
            uVar6 = uVar6 | 0x20;
          }
          if (uVar6 != uVar4) goto LAB_10018980;
          uVar3 = uVar3 + 1;
        } while (uVar1 != uVar3);
LAB_10018988:
        if (pcVar2 != param_1) {
          switch((uintptr_t)(pcVar2[-1])) {
          case '\t':
          case '\n':
          case '\f':
          case '\r':
          case ' ':
          case '/':
          case '<':
            break;
          default:
            goto switchD_100189a8_caseD_b;
          }
        }
        uVar5 = 1;
        switch((uintptr_t)(pcVar2[uVar1])) {
        case '\0':
        case '\t':
        case '\n':
        case '\f':
        case '\r':
        case ' ':
        case '/':
        case '>':
          goto switchD_10018a94_caseD_0;
        }
      }
switchD_100189a8_caseD_b:
      pcVar2 = pcVar2 + 1;
      uVar5 = 0;
    } while (*pcVar2 != '\0');
  }
switchD_10018a94_caseD_0:
  return uVar5;
}

#undef local_28

#undef DAT_10022c1b
#define DAT_10022c1b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1d3U)))
#undef DAT_10022ca6
#define DAT_10022ca6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x25eU)))
#undef str_100233a8
#define str_100233a8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x960U)))
#define acStack_37c (*(char (*)[448])(frame + 36))
#define acStack_1bc (*(char (*)[64])(frame + 484))
#define local_390 (*(undefined4 *)(frame + 16))
#define acStack_17c (*(char (*)[64])(frame + 548))
#define local_38c (*(int *)(frame + 20))
#define acStack_13c (*(char (*)[256])(frame + 612))
#define local_388 (*(int *)(frame + 24))
#define local_384 (*(int *)(frame + 28))
#define local_380 (*(undefined4 *)(frame + 32))
#define local_3c (*(undefined4 *)(frame + 868))
#define local_38 (*(undefined4 *)(frame + 872))
#define local_34 (*(int *)(frame + 876))
#define local_24 (*(undefined1 *)(frame + 892))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10018b94
 */

void recovered_10018b94(int param_1,char *param_2,char *param_3,undefined1 *param_4,
                       undefined4 param_5,int param_6,int *param_7)

{
  unsigned char frame[960] __attribute__((aligned(16))) = {0};

  char cVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;

  if (param_7 == (int *)0x0) {
    return;
  }
  memset(&local_390,0,0x370);
  iVar2 = param_7[1];
  local_390 = 4;
  local_38c = *param_7;
  local_380 = 0x18;
  local_384 = iVar2;
  if (0xdb < iVar2) {
    local_384 = 0xdc;
  }
  if (param_6 == 2) {
    uVar3 = iVar2 - local_384 & ~(iVar2 - local_384 >> 0x1f);
LAB_10018c38:
    local_38c = uVar3 + local_38c;
  }
  else if (param_6 == 1) {
    iVar2 = iVar2 - local_384;
    uVar3 = iVar2 / 2 & ~(iVar2 - (iVar2 >> 0x1f) >> 0x1f);
    goto LAB_10018c38;
  }
  local_24 = (undefined1)param_7[3];
  local_34 = param_6;
  local_38 = 1;
  local_388 = param_7[2];
  pcVar4 = param_2;
  if (param_2 == (char *)0x0) {
    pcVar4 = &DAT_10022c1b;
  }
  local_3c = param_5;
  pf_varargs_10023fa4__4_(acStack_1bc,0x40,&DAT_10022ca6,(uint)pcVar4);
  pcVar4 = param_3;
  if (param_3 == (char *)0x0) {
    pcVar4 = &DAT_10022c1b;
  }
  pf_varargs_10023fa4__4_(acStack_17c,0x40,&DAT_10022ca6,(uint)pcVar4);
  if (param_4 == (undefined1 *)0x0) {
    param_4 = &DAT_10022c1b;
  }
  pf_varargs_10023fa4__4_(acStack_13c,0x80,&DAT_10022ca6,(uint)param_4);
  pcVar4 = str_100233a8;
  if (param_2 == (char *)0x0) {
    if (param_3 != (char *)0x0) goto LAB_10018d24;
  }
  else {
    cVar1 = *param_2;
    if (cVar1 == '\0') {
      param_2 = str_100233a8;
    }
    if ((param_3 == (char *)0x0) || (cVar1 != '\0')) goto LAB_10018d34;
LAB_10018d24:
    if (*param_3 != '\0') {
      pcVar4 = param_3;
    }
  }
  param_2 = pcVar4;
LAB_10018d34:
  pf_varargs_10023fa4__4_(acStack_37c,0xc0,&DAT_10022ca6,(uint)param_2);
  uVar3 = *(uint *)(param_1 + 0x52c2c);
  if (uVar3 >> 7 < 3) {
    *(uint *)(param_1 + 0x52c2c) = uVar3 + 1;
    memcpy((void *)(uVar3 * 0x370 + param_1 + 0x42c),&local_390,0x370);
  }
  param_7[2] = param_7[2] + 0x1e;
  return;
}

#undef DAT_10022c1b
#undef DAT_10022ca6
#undef str_100233a8
#undef acStack_37c
#undef acStack_1bc
#undef local_390
#undef acStack_17c
#undef local_38c
#undef acStack_13c
#undef local_388
#undef local_384
#undef local_380
#undef local_3c
#undef local_38
#undef local_34
#undef local_24

#undef DAT_10022ca6
#define DAT_10022ca6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x25eU)))
#undef str_10023448
#define str_10023448 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa00U)))
#undef str_10023683
#define str_10023683 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc3bU)))
#undef str_1002368b
#define str_1002368b (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc43U)))
#undef str_10023695
#define str_10023695 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc4dU)))
#define abStack_2a4 (*(byte (*)[128])(frame + 28))
#define acStack_1a4 (*(char (*)[256])(frame + 284))
#define local_224 (*(char (*)[128])(frame + 156))
#define local_a4 (*(char (*)[132])(frame + 540))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10018dac
 */

void recovered_10018dac(char *param_1,char *param_2,char *param_3)

{
  unsigned char frame[736] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  char *pcVar2;
  int iVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;

  if (param_3 == (char *)0x0) {
    return;
  }
  *param_3 = '\0';
  local_a4[0] = '\0';
  if (param_1 == (char *)0x0) {
LAB_10019050:
    pcVar2 = local_a4;
LAB_10019060:
    pf_varargs_10023fa4__4_(param_3,0x80,&DAT_10022ca6,(uint)pcVar2);
    return;
  }
joined_r0x10018de8:
  if (((param_1 < param_2) && (uVar1 = strlen(str_10023683), uVar1 != 0)) &&
     (*param_1 != '\0')) {
    do {
      uVar4 = 0;
      while (uVar5 = (uint)(byte)param_1[uVar4], uVar5 != 0) {
        uVar6 = (uint)(byte)str_10023683[uVar4];
        if (uVar6 - 0x41 < 0x1a) {
          uVar6 = uVar6 | 0x20;
        }
        if (uVar5 - 0x41 < 0x1a) {
          uVar5 = uVar5 | 0x20;
        }
        if (uVar5 != uVar6) break;
        uVar4 = uVar4 + 1;
        if (uVar1 == uVar4) goto LAB_10018e70;
      }
      if (uVar1 == uVar4) goto LAB_10018e70;
      param_1 = param_1 + 1;
      if (*param_1 == '\0') break;
    } while( true );
  }
  goto LAB_10019050;
LAB_10018e70:
  if (((param_2 <= param_1) || (pcVar2 = strchr(param_1,0x3e), pcVar2 == (char *)0x0))
     || (param_2 <= pcVar2)) goto LAB_10019050;
  pcVar7 = pcVar2 + ~(uint)param_1;
  if (0xfe < (int)pcVar7) {
    pcVar7 = (char *)0xff;
  }
  memcpy(acStack_1a4,param_1 + 1,(ulong)pcVar7);
  pcVar8 = (char *)0x0;
  acStack_1a4[(int)pcVar7] = '\0';
  recovered_1000bd50(acStack_1a4,str_10023448,local_224,0x80);
  param_1 = pcVar2 + 1;
  uVar1 = strlen(str_1002368b);
  if ((uVar1 != 0) && (*param_1 != '\0')) {
    pcVar8 = param_1;
    do {
      uVar4 = 0;
      while (uVar5 = (uint)(byte)pcVar8[uVar4], uVar5 != 0) {
        uVar6 = (uint)(byte)str_1002368b[uVar4];
        if (uVar6 - 0x41 < 0x1a) {
          uVar6 = uVar6 | 0x20;
        }
        if (uVar5 - 0x41 < 0x1a) {
          uVar5 = uVar5 | 0x20;
        }
        if (uVar5 != uVar6) break;
        uVar4 = uVar4 + 1;
        if (uVar1 == uVar4) goto LAB_10018f8c;
      }
      if (uVar1 == uVar4) goto LAB_10018f8c;
      pcVar8 = pcVar8 + 1;
    } while (*pcVar8 != '\0');
    pcVar8 = (char *)0x0;
  }
LAB_10018f8c:
  if (local_224[0] == '\0') {
    pcVar7 = param_2;
    if (pcVar8 < param_2) {
      pcVar7 = pcVar8;
    }
    if (pcVar8 == (char *)0x0) {
      pcVar7 = param_2;
    }
    pcVar7 = pcVar7 + ~(uint)pcVar2;
    if (0x7e < (int)pcVar7) {
      pcVar7 = (char *)0x7f;
    }
    memcpy(abStack_2a4,param_1,(ulong)pcVar7);
    abStack_2a4[(int)pcVar7] = 0;
    uVar1 = strlen((char *)abStack_2a4);
    recovered_100169a4(0,abStack_2a4,uVar1,local_224,0x80);
  }
  if (local_a4[0] == '\0') {
    pf_varargs_10023fa4__4_(local_a4,0x80,&DAT_10022ca6,(uint)local_224);
  }
  iVar3 = recovered_100188bc(acStack_1a4,str_10023695);
  if (iVar3 != 0) {
    pcVar2 = local_224;
    goto LAB_10019060;
  }
  if (pcVar8 != (char *)0x0) {
    param_1 = pcVar8 + 9;
  }
  goto joined_r0x10018de8;
}

#undef DAT_10022ca6
#undef str_10023448
#undef str_10023683
#undef str_1002368b
#undef str_10023695
#undef abStack_2a4
#undef acStack_1a4
#undef local_224
#undef local_a4

#undef DAT_10022cb1
#define DAT_10022cb1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x269U)))
#undef DAT_10022cb6
#define DAT_10022cb6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x26eU)))
#undef DAT_10022cb7
#define DAT_10022cb7 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x26fU)))
#undef DAT_10022cb8
#define DAT_10022cb8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x270U)))
#undef DAT_10022cb9
#define DAT_10022cb9 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x271U)))
#undef DAT_10022cba
#define DAT_10022cba (*(uint8_t *)(((uintptr_t)pf_module_state + 0x272U)))
#undef DAT_10022cd1
#define DAT_10022cd1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x289U)))
#undef DAT_100233bf
#define DAT_100233bf (*(uint8_t *)(((uintptr_t)pf_module_state + 0x977U)))
#undef DAT_100233c0
#define DAT_100233c0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x978U)))
#undef DAT_100233cc
#define DAT_100233cc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x984U)))
#undef DAT_100233cd
#define DAT_100233cd (*(uint8_t *)(((uintptr_t)pf_module_state + 0x985U)))
#undef DAT_100233ce
#define DAT_100233ce (*(uint8_t *)(((uintptr_t)pf_module_state + 0x986U)))
#undef DAT_10023404
#define DAT_10023404 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x9bcU)))
#undef DAT_10023561
#define DAT_10023561 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb19U)))
#undef DAT_10023562
#define DAT_10023562 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb1aU)))
#undef DAT_10023563
#define DAT_10023563 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb1bU)))
#undef DAT_10023564
#define DAT_10023564 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb1cU)))
#undef DAT_10023565
#define DAT_10023565 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb1dU)))
#undef DAT_10023566
#define DAT_10023566 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb1eU)))
#undef DAT_10023567
#define DAT_10023567 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb1fU)))
#undef DAT_10023568
#define DAT_10023568 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb20U)))
#undef DAT_1002357b
#define DAT_1002357b (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb33U)))
#undef str_100233a8
#define str_100233a8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x960U)))
#undef str_100233cf
#define str_100233cf (*(char (*)[1])(((uintptr_t)pf_module_state + 0x987U)))
#undef str_10023569
#define str_10023569 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb21U)))
#undef str_1002356f
#define str_1002356f (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb27U)))
#undef str_10023575
#define str_10023575 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb2dU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10019090
 */

undefined4 recovered_10019090(byte *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  bool bVar5;

  if (param_1 == (byte *)0x0) goto LAB_100194a0;
  uVar1 = (uint)*param_1;
  if (uVar1 == 0) {
    pcVar4 = &DAT_10022cb6;
LAB_10019214:
    if (*pcVar4 == '\0') {
      return 1;
    }
    if (uVar1 != 0) goto LAB_10019228;
    pcVar4 = &DAT_10023565;
LAB_1001932c:
    if (*pcVar4 == '\0') {
      return 1;
    }
    if (uVar1 != 0) goto LAB_10019340;
    pcVar4 = &DAT_100233cc;
  }
  else {
    uVar2 = uVar1;
    if (uVar1 - 0x41 < 0x1a) {
      uVar2 = uVar1 | 0x20;
    }
    if (uVar2 == 0x62) {
      uVar2 = (uint)param_1[1];
      if (uVar2 == 0) {
        pcVar4 = &DAT_10022cb7;
      }
      else {
        if (uVar2 - 0x41 < 0x1a) {
          uVar2 = uVar2 | 0x20;
        }
        if (uVar2 != 0x61) goto LAB_10019228;
        uVar2 = (uint)param_1[2];
        if (uVar2 == 0) {
          pcVar4 = &DAT_10022cb8;
        }
        else {
          if (uVar2 - 0x41 < 0x1a) {
            uVar2 = uVar2 | 0x20;
          }
          if (uVar2 != 0x73) goto LAB_10019228;
          uVar2 = (uint)param_1[3];
          if (uVar2 == 0) {
            pcVar4 = &DAT_10022cb9;
          }
          else {
            if (uVar2 - 0x41 < 0x1a) {
              uVar2 = uVar2 | 0x20;
            }
            bVar5 = uVar2 != 0x65;
            if (!bVar5) {
              uVar2 = (uint)param_1[4];
            }
            if (bVar5 || uVar2 != 0) goto LAB_10019228;
            pcVar4 = &DAT_10022cba;
          }
        }
      }
      goto LAB_10019214;
    }
    if (uVar2 == 0x61) {
      uVar2 = (uint)param_1[1];
      if (uVar2 == 0) {
        pcVar4 = &DAT_10023561;
      }
      else {
        if (uVar2 - 0x41 < 0x1a) {
          uVar2 = uVar2 | 0x20;
        }
        if (uVar2 != 0x72) goto LAB_10019228;
        uVar2 = (uint)param_1[2];
        if (uVar2 == 0) {
          pcVar4 = &DAT_10023562;
        }
        else {
          if (uVar2 - 0x41 < 0x1a) {
            uVar2 = uVar2 | 0x20;
          }
          if (uVar2 != 0x65) goto LAB_10019228;
          uVar2 = (uint)param_1[3];
          if (uVar2 == 0) {
            pcVar4 = &DAT_10023563;
          }
          else {
            uVar3 = uVar2 - 0x41;
            if (uVar3 < 0x1a) {
              uVar2 = uVar2 | 0x20;
            }
            if (uVar2 == 0x61) {
              uVar3 = (uint)param_1[4];
            }
            if (uVar2 != 0x61 || uVar3 != 0) goto LAB_10019228;
            pcVar4 = &DAT_10023564;
          }
        }
      }
      if (*pcVar4 == '\0') {
        return 1;
      }
    }
LAB_10019228:
    uVar2 = uVar1;
    if (uVar1 - 0x41 < 0x1a) {
      uVar2 = uVar1 | 0x20;
    }
    if (uVar2 == 99) {
      uVar2 = (uint)param_1[1];
      if (uVar2 == 0) {
        pcVar4 = &DAT_10023566;
      }
      else {
        if (uVar2 - 0x41 < 0x1a) {
          uVar2 = uVar2 | 0x20;
        }
        if (uVar2 != 0x6f) goto LAB_10019340;
        uVar2 = (uint)param_1[2];
        if (uVar2 == 0) {
          pcVar4 = &DAT_10023567;
        }
        else {
          if (uVar2 - 0x41 < 0x1a) {
            uVar2 = uVar2 | 0x20;
          }
          bVar5 = uVar2 != 0x6c;
          if (!bVar5) {
            uVar2 = (uint)param_1[3];
          }
          if (bVar5 || uVar2 != 0) goto LAB_10019340;
          pcVar4 = &DAT_10023568;
        }
      }
      goto LAB_1001932c;
    }
    if (uVar2 == 0x62) {
      uVar2 = (uint)param_1[1];
      if (uVar2 == 0) {
        pcVar4 = &DAT_100233bf;
      }
      else {
        uVar3 = uVar2 - 0x41;
        if (uVar3 < 0x1a) {
          uVar2 = uVar2 | 0x20;
        }
        if (uVar2 == 0x72) {
          uVar3 = (uint)param_1[2];
        }
        if (uVar2 != 0x72 || uVar3 != 0) goto LAB_10019340;
        pcVar4 = &DAT_100233c0;
      }
      if (*pcVar4 == '\0') {
        return 1;
      }
      if (uVar1 == 0) {
        pcVar4 = &DAT_10023565;
        goto LAB_1001932c;
      }
    }
LAB_10019340:
    uVar2 = uVar1;
    if (uVar1 - 0x41 < 0x1a) {
      uVar2 = uVar1 | 0x20;
    }
    if (uVar2 == 0x68) {
      uVar1 = (uint)param_1[1];
      if (uVar1 == 0) {
        pcVar4 = &DAT_100233cd;
      }
      else {
        if (uVar1 - 0x41 < 0x1a) {
          uVar1 = uVar1 | 0x20;
        }
        bVar5 = uVar1 != 0x72;
        if (!bVar5) {
          uVar1 = (uint)param_1[2];
        }
        if (bVar5 || uVar1 != 0) goto LAB_100194a0;
        pcVar4 = &DAT_100233ce;
      }
    }
    else {
      if (uVar2 != 0x65) goto LAB_100194a0;
      uVar2 = (uint)param_1[1];
      if (uVar2 == 0) {
        pcVar4 = str_10023569 + 1;
      }
      else {
        if (uVar2 - 0x41 < 0x1a) {
          uVar2 = uVar2 | 0x20;
        }
        if (uVar2 != 0x6d) goto LAB_100194a0;
        uVar2 = (uint)param_1[2];
        if (uVar2 == 0) {
          pcVar4 = str_10023569 + 2;
        }
        else {
          if (uVar2 - 0x41 < 0x1a) {
            uVar2 = uVar2 | 0x20;
          }
          if (uVar2 != 0x62) goto LAB_100194a0;
          uVar2 = (uint)param_1[3];
          if (uVar2 == 0) {
            pcVar4 = str_10023569 + 3;
          }
          else {
            if (uVar2 - 0x41 < 0x1a) {
              uVar2 = uVar2 | 0x20;
            }
            if (uVar2 != 0x65) goto LAB_100194a0;
            uVar2 = (uint)param_1[4];
            if (uVar2 == 0) {
              pcVar4 = str_10023569 + 4;
            }
            else {
              uVar3 = uVar2 - 0x41;
              if (uVar3 < 0x1a) {
                uVar2 = uVar2 | 0x20;
              }
              if (uVar2 == 100) {
                uVar3 = (uint)param_1[5];
              }
              if (uVar2 != 100 || uVar3 != 0) goto LAB_100194a0;
              pcVar4 = str_10023569 + 5;
            }
          }
        }
      }
      if (*pcVar4 == '\0') {
        return 1;
      }
      if (uVar1 != 0) goto LAB_100194a0;
      pcVar4 = &DAT_100233cc;
    }
  }
  if (*pcVar4 == '\0') {
    return 1;
  }
LAB_100194a0:
  bVar5 = recovered_1000bcd4(param_1,&DAT_10023404);
  if ((((bVar5) || (bVar5 = recovered_1000bcd4(param_1,(byte *)str_100233a8), bVar5)) ||
      (bVar5 = recovered_1000bcd4(param_1,&DAT_10022cd1), bVar5)) ||
     (((bVar5 = recovered_1000bcd4(param_1,&DAT_10022cb1), bVar5 ||
       (bVar5 = recovered_1000bcd4(param_1,(byte *)str_1002356f), bVar5)) ||
      ((bVar5 = recovered_1000bcd4(param_1,(byte *)str_100233cf), bVar5 ||
       (bVar5 = recovered_1000bcd4(param_1,(byte *)str_10023575), bVar5)))))) {
    return 1;
  }
  bVar5 = recovered_1000bcd4(param_1,&DAT_1002357b);
  return (uint)bVar5;
}

#undef DAT_10022cb1
#undef DAT_10022cb6
#undef DAT_10022cb7
#undef DAT_10022cb8
#undef DAT_10022cb9
#undef DAT_10022cba
#undef DAT_10022cd1
#undef DAT_100233bf
#undef DAT_100233c0
#undef DAT_100233cc
#undef DAT_100233cd
#undef DAT_100233ce
#undef DAT_10023404
#undef DAT_10023561
#undef DAT_10023562
#undef DAT_10023563
#undef DAT_10023564
#undef DAT_10023565
#undef DAT_10023566
#undef DAT_10023567
#undef DAT_10023568
#undef DAT_1002357b
#undef str_100233a8
#undef str_100233cf
#undef str_10023569
#undef str_1002356f
#undef str_10023575

#undef str_1002357f
#define str_1002357f (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb37U)))
#define local_58 (*(byte (*)[64])(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10019584
 */

char * recovered_10019584(uint param_1,byte *param_2)

{
  unsigned char frame[144] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  char *pcVar5;
  byte *unaff_r6;
  uint uVar6;

  uVar1 = param_1;
  if (param_2 != (byte *)0x0) {
    uVar1 = (uint)*param_2;
    unaff_r6 = param_2;
  }
  if ((param_2 != (byte *)0x0 && uVar1 != 0) && (iVar2 = recovered_10019090(unaff_r6), iVar2 == 0))
  {
    pf_varargs_10023fa4__4_((char *)local_58,0x40,str_1002357f,(uint)unaff_r6);
    pcVar5 = (char *)(param_1 + 1);
    uVar3 = strlen((char *)local_58);
    if ((uVar3 != 0) && (*pcVar5 != '\0')) {
      do {
        uVar4 = 0;
        while (uVar1 = (uint)(byte)pcVar5[uVar4], uVar1 != 0) {
          uVar6 = (uint)local_58[uVar4];
          if (uVar6 - 0x41 < 0x1a) {
            uVar6 = uVar6 | 0x20;
          }
          if (uVar1 - 0x41 < 0x1a) {
            uVar1 = uVar1 | 0x20;
          }
          if (uVar1 != uVar6) break;
          uVar4 = uVar4 + 1;
          if (uVar3 == uVar4) goto LAB_1001967c;
        }
        if (uVar3 == uVar4) {
LAB_1001967c:
          uVar3 = strlen((char *)local_58);
          return pcVar5 + uVar3;
        }
        pcVar5 = pcVar5 + 1;
      } while (*pcVar5 != '\0');
    }
  }
  return (char *)(param_1 + 1);
}

#undef str_1002357f
#undef local_58

#define abStack_c3 (*(byte (*)[39])(frame + 29))
#define abStack_9c (*(byte (*)[128])(frame + 68))
#define local_c5 (*(undefined1 *)(frame + 27))
#define local_c4 (*(byte *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001968c
 */

bool recovered_1001968c(char *param_1,char *param_2,byte *param_3,undefined1 *param_4)

{
  unsigned char frame[256] __attribute__((aligned(16))) = {0};

  bool bVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  char *n;

  if (param_4 != (undefined1 *)0x0) {
    *param_4 = 0;
  }
  bVar1 = false;
  if (param_2 <= param_1) {
    return false;
  }
  if ((*param_3 != 0) && (*param_1 == '<')) {
    n = param_2 + ~(uint)param_1;
    if (0x7e < (int)n) {
      n = (char *)0x7f;
    }
    local_c5 = 0;
    local_c4 = 0;
    memcpy(abStack_9c,param_1 + 1,(ulong)n);
    abStack_9c[(int)n] = 0;
    recovered_1000ba88(abStack_9c,&local_c4,0x28,&local_c5);
    uVar3 = (uint)local_c4;
    if (param_4 != (undefined1 *)0x0) {
      *param_4 = local_c5;
    }
    if (uVar3 != 0) {
      pbVar2 = abStack_c3;
      do {
        uVar4 = (uint)*param_3;
        if (uVar4 == 0) {
          return false;
        }
        if (uVar4 - 0x41 < 0x1a) {
          uVar4 = uVar4 | 0x20;
        }
        if (uVar3 - 0x41 < 0x1a) {
          uVar3 = uVar3 | 0x20;
        }
        if (uVar3 != uVar4) {
          return false;
        }
        uVar3 = (uint)*pbVar2;
        param_3 = param_3 + 1;
        pbVar2 = pbVar2 + 1;
      } while (uVar3 != 0);
    }
    bVar1 = *param_3 == 0;
  }
  return bVar1;
}

#undef abStack_c3
#undef abStack_9c
#undef local_c5
#undef local_c4

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100197a8
 */

undefined4 recovered_100197a8(undefined1 *param_1,undefined1 *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;

  if (param_2 <= param_1) {
switchD_100197cc_caseD_b:
    uVar1 = 0;
switchD_100197cc_caseD_2f:
    return uVar1;
  }
  uVar1 = 1;
LAB_100197b4:
  param_2 = param_2 + -1;
  switch((uintptr_t)(*param_2)) {
  case 9:
  case 10:
  case 0xc:
  case 0xd:
  case 0x20:
    break;
  default:
    goto switchD_100197cc_caseD_b;
  case 0x2f:
    goto switchD_100197cc_caseD_2f;
  }
  if (param_2 <= param_1) goto switchD_100197cc_caseD_b;
  goto LAB_100197b4;
}


#define local_a0 (*(byte (*)[128])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10019880
 */

undefined4 recovered_10019880(int param_1,int param_2,byte *param_3)

{
  unsigned char frame[208] __attribute__((aligned(16))) = {0};

  bool bVar1;
  ulong uVar2;
  uint uVar3;
  ulong uVar4;
  byte *pbVar5;
  byte *pbVar6;
  uint uVar7;
  undefined4 uVar8;

  uVar8 = 0;
  if (((param_3 != (byte *)0x0) &&
      (uVar2 = strlen((char *)param_3), param_1 != 0 && param_2 != 0)) &&
     (bVar1 = recovered_10012350((char *)param_1,(char *)param_2,(char *)local_a0,0x80), bVar1)) {
    uVar3 = (uint)local_a0[0];
    pbVar5 = param_3;
    if (uVar3 != 0) {
      pbVar6 = local_a0;
      do {
        pbVar6 = pbVar6 + 1;
        uVar7 = (uint)*pbVar5;
        if (uVar7 == 0) goto LAB_10019950;
        if (uVar7 - 0x41 < 0x1a) {
          uVar7 = uVar7 | 0x20;
        }
        if (uVar3 - 0x41 < 0x1a) {
          uVar3 = uVar3 | 0x20;
        }
        if (uVar3 != uVar7) goto LAB_10019950;
        uVar3 = (uint)*pbVar6;
        pbVar5 = pbVar5 + 1;
      } while (uVar3 != 0);
    }
    if (*pbVar5 == 0) {
      uVar8 = 1;
    }
    else {
LAB_10019950:
      if (uVar2 != 0) {
        uVar4 = uVar2;
        pbVar5 = local_a0;
        do {
          uVar3 = (uint)*param_3;
          uVar7 = (uint)*pbVar5;
          if (uVar3 - 0x41 < 0x1a) {
            uVar3 = uVar3 | 0x20;
          }
          if (uVar7 - 0x41 < 0x1a) {
            uVar7 = uVar7 | 0x20;
          }
          if (uVar7 != uVar3) {
            return 0;
          }
          uVar4 = uVar4 - 1;
          param_3 = param_3 + 1;
          pbVar5 = pbVar5 + 1;
        } while (uVar4 != 0);
        uVar8 = 1;
        switch((uintptr_t)(local_a0[uVar2])) {
        case 0:
        case 9:
        case 10:
        case 0xc:
        case 0xd:
        case 0x20:
        case 0x21:
          break;
        default:
          uVar8 = 0;
        }
      }
    }
  }
  return uVar8;
}

#undef local_a0

#undef DAT_1002359e
#define DAT_1002359e (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb56U)))
#undef str_1002344e
#define str_1002344e (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa06U)))
#define auStack_414 (*(undefined1 (*)[1024])(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10019a44
 */

undefined4 recovered_10019a44(int param_1,int param_2)

{
  unsigned char frame[1104] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined4 uVar2;

  if (param_2 == 0) {
    return 0;
  }
  iVar1 = recovered_10012054(*(char **)(param_1 + 0x314),(char *)param_2,auStack_414);
  if ((iVar1 != 0) &&
     (iVar1 = recovered_10019880((int)auStack_414,((uintptr_t)pf_module_state + 0xb4eU),&DAT_1002359e), iVar1 != 0)) {
    return 1;
  }
  iVar1 = recovered_10012054(*(char **)(param_1 + 0x314),(char *)param_2,auStack_414);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = recovered_10019880((int)auStack_414,((uintptr_t)pf_module_state + 0xb5bU),(byte *)str_1002344e);
  }
  return uVar2;
}

#undef DAT_1002359e
#undef str_1002344e
#undef auStack_414

#define local_2a4 (*(byte (*)[127])(frame + 28))
#define local_225 (*(undefined1 *)(frame + 155))
#define local_224 (*(byte (*)[516])(frame + 156))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10019af8
 */

void recovered_10019af8(uint param_1,int *param_2,int *param_3,int *param_4,byte *param_5,
                       undefined4 param_6,undefined1 *param_7,uint param_8)

{
  unsigned char frame[736] __attribute__((aligned(16))) = {0};

  uint uVar1;
  ulong uVar2;
  uint unaff_r4;
  byte *pbVar3;
  int iVar4;

  uVar1 = param_1;
  if (param_5 != (byte *)0x0) {
    uVar1 = (uint)*param_5;
    unaff_r4 = param_1;
  }
  if (param_5 != (byte *)0x0 && uVar1 != 0) {
    uVar2 = strlen((char *)param_5);
    pbVar3 = local_224;
    recovered_100169a4(unaff_r4,param_5,uVar2,(char *)pbVar3,0x200);
    uVar1 = (uint)local_224[0];
    if (uVar1 != 0) {
      do {
        while ((uVar1 - 9 < 0x18 && ((1 << (uVar1 - 9 & 0xff) & 0x80001bU) != 0))) {
          pbVar3 = pbVar3 + 1;
          uVar1 = (uint)*pbVar3;
        }
        iVar4 = 0;
        while( true ) {
          if (uVar1 < 0x21) {
                    /* WARNING: Could not find normalized switch variable to match jumptable */
            switch((uintptr_t)(uVar1)) {
            case 0:
            case 9:
            case 10:
            case 0xc:
            case 0xd:
            case 0x20:
              local_2a4[iVar4] = 0;
              if (iVar4 == 0) goto LAB_10019c9c;
              goto LAB_10019c70;
            }
          }
          if (iVar4 == 0x7f) break;
          local_2a4[iVar4] = (byte)uVar1;
          uVar1 = (uint)pbVar3[iVar4 + 1];
          iVar4 = iVar4 + 1;
        }
        local_225 = 0;
        iVar4 = 0x7f;
LAB_10019c70:
        recovered_1001a384(unaff_r4,param_2,param_3,param_4,local_2a4,param_6,param_7,param_8);
LAB_10019c9c:
        pbVar3 = pbVar3 + iVar4;
        uVar1 = (uint)*pbVar3;
      } while (uVar1 != 0);
    }
  }
  return;
}

#undef local_2a4
#undef local_225
#undef local_224

#undef str_10022ce5
#define str_10022ce5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x29dU)))
#undef str_10022cf4
#define str_10022cf4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2acU)))
#undef str_10023557
#define str_10023557 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb0fU)))
#define local_c9 (*(byte *)(frame + 23))
#define local_c8 (*(byte *)(frame + 24))
#define local_c7 (*(byte *)(frame + 25))
#define local_c6 (*(byte *)(frame + 26))
#define local_c5 (*(byte *)(frame + 27))
#define local_c4 (*(byte *)(frame + 28))
#define local_c3 (*(byte *)(frame + 29))
#define local_a1 (*(byte *)(frame + 63))
#define local_a0 (*(byte (*)[128])(frame + 64))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10019cac
 */

byte * recovered_10019cac(byte *param_1,byte *param_2,byte *param_3)

{
  unsigned char frame[256] __attribute__((aligned(16))) = {0};

  bool bVar1;
  byte *pbVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  int iVar6;
  uint unaff_r4;
  uint uVar7;
  byte *pbVar8;
  ulong uVar9;
  ulong n;
  byte *pbVar10;

  pbVar2 = param_1 + 1;
  if (param_2 == (byte *)0x0) {
    return pbVar2;
  }
  if (param_2 <= param_1) {
    return pbVar2;
  }
  if (param_3 != (byte *)0x0) {
    unaff_r4 = (uint)*param_3;
  }
  if (param_3 == (byte *)0x0 || unaff_r4 == 0) {
    return pbVar2;
  }
  iVar3 = recovered_10019090(param_3);
  if (iVar3 != 0) {
    return pbVar2;
  }
  if (unaff_r4 - 0x41 < 0x1a) {
    unaff_r4 = unaff_r4 | 0x20;
  }
  if (unaff_r4 == 0x74) {
    pcVar5 = str_10023557;
    uVar7 = (uint)param_3[1];
    if (uVar7 == 0) goto LAB_10019fd4;
    if (uVar7 - 0x41 < 0x1a) {
      uVar7 = uVar7 | 0x20;
    }
    if (uVar7 != 0x65) goto LAB_10019ffc;
    uVar7 = (uint)param_3[2];
    if (uVar7 == 0) goto LAB_10019fdc;
    if (uVar7 - 0x41 < 0x1a) {
      uVar7 = uVar7 | 0x20;
    }
    if (uVar7 != 0x6d) goto LAB_10019ffc;
    uVar7 = (uint)param_3[3];
    if (uVar7 == 0) goto LAB_10019fe4;
    if (uVar7 - 0x41 < 0x1a) {
      uVar7 = uVar7 | 0x20;
    }
    if (uVar7 != 0x70) goto LAB_10019ffc;
    uVar7 = (uint)param_3[4];
    if (uVar7 == 0) goto LAB_10019fec;
    if (uVar7 - 0x41 < 0x1a) {
      uVar7 = uVar7 | 0x20;
    }
    if (uVar7 != 0x6c) goto LAB_10019ffc;
    uVar7 = (uint)param_3[5];
    if (uVar7 == 0) goto LAB_10019fcc;
    if (uVar7 - 0x41 < 0x1a) {
      uVar7 = uVar7 | 0x20;
    }
    if (uVar7 != 0x61) goto LAB_10019ffc;
    uVar7 = (uint)param_3[6];
    if (uVar7 == 0) {
      pcVar5 = str_10023557 + 6;
    }
    else {
      uVar4 = uVar7 - 0x41;
      if (uVar4 < 0x1a) {
        uVar7 = uVar7 | 0x20;
      }
      if (uVar7 != 0x74) goto LAB_10019ffc;
      uVar7 = (uint)param_3[7];
      if (uVar7 == 0) {
        pcVar5 = str_10023557 + 7;
      }
      else {
        if (uVar7 - 0x41 < 0x1a) {
          uVar7 = uVar7 | 0x20;
        }
        if (uVar7 == 0x65) {
          uVar4 = (uint)param_3[8];
        }
        if (uVar7 != 0x65 || uVar4 != 0) goto LAB_10019ffc;
        pcVar5 = str_10023557 + 8;
      }
    }
  }
  else {
    if (unaff_r4 != 0x73) goto LAB_10019ffc;
    uVar7 = (uint)param_3[1];
    if (uVar7 == 0) {
      pcVar5 = str_10022cf4 + 1;
LAB_10019f2c:
      if (*pcVar5 == '\0') goto LAB_1001a34c;
    }
    else {
      if (uVar7 - 0x41 < 0x1a) {
        uVar7 = uVar7 | 0x20;
      }
      if (uVar7 == 99) {
        uVar7 = (uint)param_3[2];
        if (uVar7 == 0) {
          pcVar5 = str_10022cf4 + 2;
        }
        else {
          if (uVar7 - 0x41 < 0x1a) {
            uVar7 = uVar7 | 0x20;
          }
          if (uVar7 != 0x72) goto LAB_10019f38;
          uVar7 = (uint)param_3[3];
          if (uVar7 == 0) {
            pcVar5 = str_10022cf4 + 3;
          }
          else {
            if (uVar7 - 0x41 < 0x1a) {
              uVar7 = uVar7 | 0x20;
            }
            if (uVar7 != 0x69) goto LAB_10019f38;
            uVar7 = (uint)param_3[4];
            if (uVar7 == 0) {
              pcVar5 = str_10022cf4 + 4;
            }
            else {
              if (uVar7 - 0x41 < 0x1a) {
                uVar7 = uVar7 | 0x20;
              }
              if (uVar7 != 0x70) goto LAB_10019f38;
              uVar7 = (uint)param_3[5];
              if (uVar7 == 0) {
                pcVar5 = str_10022cf4 + 5;
              }
              else {
                uVar4 = uVar7 - 0x41;
                if (uVar4 < 0x1a) {
                  uVar7 = uVar7 | 0x20;
                }
                if (uVar7 == 0x74) {
                  uVar4 = (uint)param_3[6];
                }
                if (uVar7 != 0x74 || uVar4 != 0) goto LAB_10019f38;
                pcVar5 = str_10022cf4 + 6;
              }
            }
          }
        }
        goto LAB_10019f2c;
      }
    }
LAB_10019f38:
    uVar7 = (uint)param_3[1];
    pcVar5 = str_10022ce5;
    if (uVar7 == 0) {
LAB_10019fd4:
      pcVar5 = pcVar5 + 1;
    }
    else {
      if (uVar7 - 0x41 < 0x1a) {
        uVar7 = uVar7 | 0x20;
      }
      if (uVar7 != 0x74) goto LAB_10019ffc;
      uVar7 = (uint)param_3[2];
      if (uVar7 == 0) {
LAB_10019fdc:
        pcVar5 = pcVar5 + 2;
      }
      else {
        if (uVar7 - 0x41 < 0x1a) {
          uVar7 = uVar7 | 0x20;
        }
        if (uVar7 != 0x79) goto LAB_10019ffc;
        uVar7 = (uint)param_3[3];
        if (uVar7 == 0) {
LAB_10019fe4:
          pcVar5 = pcVar5 + 3;
        }
        else {
          if (uVar7 - 0x41 < 0x1a) {
            uVar7 = uVar7 | 0x20;
          }
          if (uVar7 != 0x6c) goto LAB_10019ffc;
          uVar7 = (uint)param_3[4];
          if (uVar7 == 0) {
LAB_10019fec:
            pcVar5 = pcVar5 + 4;
          }
          else {
            uVar4 = uVar7 - 0x41;
            if (uVar4 < 0x1a) {
              uVar7 = uVar7 | 0x20;
            }
            if (uVar7 == 0x65) {
              uVar4 = (uint)param_3[5];
            }
            if (uVar7 != 0x65 || uVar4 != 0) goto LAB_10019ffc;
LAB_10019fcc:
            pcVar5 = pcVar5 + 5;
          }
        }
      }
    }
  }
  if (*pcVar5 == '\0') {
LAB_1001a34c:
    pbVar2 = recovered_1001a6a8(param_1,param_2,param_3);
    return pbVar2;
  }
LAB_10019ffc:
  if (pbVar2 < param_2) {
    iVar3 = 1;
    pbVar10 = pbVar2;
    do {
      if (*pbVar10 == 0) {
        return pbVar2;
      }
      iVar6 = 0;
      while (pbVar10[iVar6] != 0x3c) {
        iVar6 = iVar6 + 1;
        if ((int)param_2 - (int)pbVar10 == iVar6) {
          return pbVar2;
        }
      }
      pbVar10 = pbVar10 + iVar6;
      if (pbVar10 == param_2) {
        return pbVar2;
      }
      uVar9 = 0xffffffff;
      while (pbVar10[uVar9 + 1] != 0x3e) {
        uVar9 = uVar9 + 1;
        if (pbVar10 + (uVar9 - (int)param_2) == (byte *)0xffffffff) {
          return pbVar2;
        }
      }
      pbVar8 = pbVar10 + uVar9 + 1;
      local_a1 = 0;
      local_c9 = 0;
      if (((int)(uVar9 + 1) < 1) || (*pbVar10 != 0x3c)) {
LAB_1001a0fc:
        uVar7 = (uint)local_c9;
        pcVar5 = str_10022cf4;
        if (uVar7 == 0) {
LAB_1001a244:
          if (*pcVar5 != '\0') goto LAB_1001a250;
        }
        else {
          if (uVar7 - 0x41 < 0x1a) {
            uVar7 = uVar7 | 0x20;
          }
          if (uVar7 == 0x73) {
            uVar7 = (uint)local_c8;
            if (uVar7 == 0) {
              pcVar5 = str_10022cf4 + 1;
            }
            else {
              if (uVar7 - 0x41 < 0x1a) {
                uVar7 = uVar7 | 0x20;
              }
              if (uVar7 != 99) goto LAB_1001a250;
              uVar7 = (uint)local_c7;
              if (uVar7 == 0) {
                pcVar5 = str_10022cf4 + 2;
              }
              else {
                if (uVar7 - 0x41 < 0x1a) {
                  uVar7 = uVar7 | 0x20;
                }
                if (uVar7 != 0x72) goto LAB_1001a250;
                uVar7 = (uint)local_c6;
                if (uVar7 == 0) {
                  pcVar5 = str_10022cf4 + 3;
                }
                else {
                  if (uVar7 - 0x41 < 0x1a) {
                    uVar7 = uVar7 | 0x20;
                  }
                  if (uVar7 != 0x69) goto LAB_1001a250;
                  uVar7 = (uint)local_c5;
                  if (uVar7 == 0) {
                    pcVar5 = str_10022cf4 + 4;
                  }
                  else {
                    if (uVar7 - 0x41 < 0x1a) {
                      uVar7 = uVar7 | 0x20;
                    }
                    if (uVar7 != 0x70) goto LAB_1001a250;
                    uVar7 = (uint)local_c4;
                    if (uVar7 == 0) {
                      pcVar5 = str_10022cf4 + 5;
                    }
                    else {
                      if (uVar7 - 0x41 < 0x1a) {
                        uVar7 = uVar7 | 0x20;
                      }
                      bVar1 = uVar7 != 0x74;
                      if (!bVar1) {
                        uVar7 = (uint)local_c3;
                      }
                      if (bVar1 || uVar7 != 0) goto LAB_1001a250;
                      pcVar5 = str_10022cf4 + 6;
                    }
                  }
                }
              }
            }
            goto LAB_1001a244;
          }
LAB_1001a250:
          bVar1 = recovered_1000bcd4(&local_c9,(byte *)str_10022ce5);
          if ((!bVar1) && (bVar1 = recovered_1000bcd4(&local_c9,(byte *)str_10023557), !bVar1))
          goto LAB_1001a2b8;
        }
        pbVar10 = recovered_1001a6a8(pbVar8,param_2,&local_c9);
      }
      else {
        n = uVar9;
        if (0x7e < (int)uVar9) {
          n = 0x7f;
        }
        memcpy(local_a0,pbVar10 + 1,n);
        local_a0[n] = 0;
        recovered_1000ba88(local_a0,&local_c9,0x28,&local_a1);
        if ((local_a1 & 1) == 0) goto LAB_1001a0fc;
LAB_1001a2b8:
        bVar1 = recovered_1001968c((char *)pbVar10,(char *)pbVar8,param_3,&local_a1);
        if (bVar1) {
          if (local_a1 == 1) {
            iVar3 = iVar3 + -1;
            if (iVar3 == 0) {
              return pbVar10 + uVar9 + 2;
            }
          }
          else {
            uVar7 = recovered_100197a8(pbVar10,pbVar8);
            iVar3 = iVar3 + (uVar7 ^ 1);
          }
        }
        pbVar10 = pbVar10 + uVar9 + 2;
      }
    } while (pbVar10 < param_2);
  }
  return pbVar2;
}

#undef str_10022ce5
#undef str_10022cf4
#undef str_10023557
#undef local_c9
#undef local_c8
#undef local_c7
#undef local_c6
#undef local_c5
#undef local_c4
#undef local_c3
#undef local_a1
#undef local_a0

#undef DAT_10022c1b
#define DAT_10022c1b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1d3U)))
#undef DAT_10022ca6
#define DAT_10022ca6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x25eU)))
#define local_380 (*(uint *)(frame + 32))
#define local_3c (*(undefined4 *)(frame + 868))
#define acStack_37c (*(char (*)[192])(frame + 36))
#define local_38 (*(uint *)(frame + 872))
#define acStack_2bc (*(char (*)[640])(frame + 228))
#define local_24 (*(undefined1 *)(frame + 892))
#define local_390 (*(undefined4 *)(frame + 16))
#define local_38c (*(int *)(frame + 20))
#define local_388 (*(int *)(frame + 24))
#define local_384 (*(uint *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001a384
 */

void recovered_1001a384(int param_1,int *param_2,int *param_3,int *param_4,byte *param_5,
                       undefined4 param_6,undefined1 *param_7,uint param_8)

{
  unsigned char frame[960] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined1 *vararg0;
  int *unaff_r5;
  int iVar6;
  uint uVar7;

  if (param_3 == (int *)0x0) {
    return;
  }
  if (param_4 != (int *)0x0) {
    piVar4 = param_2;
    if (param_5 != (byte *)0x0) {
      piVar4 = (int *)(uint)*param_5;
      unaff_r5 = param_2;
    }
    if (param_5 != (byte *)0x0 && piVar4 != (int *)0x0) {
      iVar1 = *unaff_r5;
      uVar7 = param_8;
      if ((int)param_8 < 2) {
        uVar7 = 1;
      }
      iVar6 = unaff_r5[1];
      uVar2 = recovered_1001a550((char *)param_5,param_8);
      iVar5 = *unaff_r5;
      iVar3 = *param_3;
      if (iVar3 != iVar5) {
        if (iVar6 + iVar1 < (int)(iVar3 + uVar2)) {
          *param_3 = iVar5;
          *param_4 = *param_4 + uVar7 * 8 + 4;
          iVar5 = *unaff_r5;
          iVar3 = *param_3;
        }
        if (iVar3 != iVar5) {
          *param_3 = iVar3 + uVar7 * 6;
        }
      }
      memset(&local_390,0,0x370);
      local_38 = param_8;
      local_390 = param_6;
      local_3c = 0xffffffff;
      local_24 = (undefined1)unaff_r5[3];
      local_380 = uVar7 << 3 | 3;
      local_388 = *param_4;
      local_38c = *param_3;
      local_384 = uVar2;
      pf_varargs_10023fa4__4_(acStack_37c,0xc0,&DAT_10022ca6,(uint)param_5);
      vararg0 = &DAT_10022c1b;
      if (param_7 != (undefined1 *)0x0) {
        vararg0 = param_7;
      }
      pf_varargs_10023fa4__4_(acStack_2bc,0x100,&DAT_10022ca6,(uint)vararg0);
      uVar7 = *(uint *)(param_1 + 0x52c2c);
      if (uVar7 >> 7 < 3) {
        *(uint *)(param_1 + 0x52c2c) = uVar7 + 1;
        memcpy((void *)(uVar7 * 0x370 + param_1 + 0x42c),&local_390,0x370);
      }
      *param_3 = *param_3 + uVar2;
    }
  }
  return;
}

#undef DAT_10022c1b
#undef DAT_10022ca6
#undef local_380
#undef local_3c
#undef acStack_37c
#undef local_38
#undef acStack_2bc
#undef local_24
#undef local_390
#undef local_38c
#undef local_388
#undef local_384

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
#define local_28 (*(uint *)(frame + 40))
#define local_34 (*(void * *)(frame + 28))
#define local_30 (*(int *)(frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001a550
 */

uint recovered_1001a550(char *param_1,uint param_2)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  code *pcVar3;
  ulong uVar4;
  uint uVar5;
  bool bVar6;

  if (param_1 == (char *)0x0) {
    uVar4 = 0;
  }
  else {
    if (*param_1 != '\0') {
      memset(&local_34,0,0x18);
      iVar2 = Ram40010800;
      uVar5 = param_2;
      if ((int)param_2 < 2) {
        uVar5 = 1;
      }
      if ((iVar2 == 0x50414d57) && (iVar2 = Ram40010804, iVar2 != 0)) {
        uVar1 = Ram40010808;
        bVar6 = 0xb < uVar1;
        if (bVar6) {
          uVar1 = Ram40010808;
        }
        if (((bVar6 && 0x17b < uVar1) && (pcVar3 = (code *)UINT_40010978, pcVar3 != (code *)0x0)) &&
           (uVar5 = (*pcVar3)(param_1,0xffffffff,uVar5,0,&local_34), uVar5 != 0)) {
          uVar5 = local_28;
          if (0x7ffffffe < local_28) {
            uVar5 = 0x7fffffff;
          }
          if (local_30 != 0) {
            return uVar5;
          }
          if (local_34 == (void *)0x0) {
            return uVar5;
          }
          iVar2 = Ram40010800;
          if (iVar2 != 0x50414d57) {
            return uVar5;
          }
          iVar2 = Ram40010804;
          if (iVar2 == 0) {
            return uVar5;
          }
          uVar1 = Ram40010808;
          bVar6 = 0xb < uVar1;
          if (bVar6) {
            uVar1 = Ram40010808;
          }
          if (!bVar6 || uVar1 < 0x54) {
            return uVar5;
          }
          pcVar3 = (code *)UINT_40010850;
          if (pcVar3 == (code *)0x0) {
            return uVar5;
          }
          (*pcVar3)(local_34);
          return uVar5;
        }
      }
    }
    uVar4 = strlen(param_1);
  }
  if ((int)param_2 < 2) {
    param_2 = 1;
  }
  return param_2 * uVar4 * 6;
}

#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef Ram40010800
#undef Ram40010804
#undef Ram40010808
#undef UINT_40010850
#undef UINT_40010978
#undef local_28
#undef local_34
#undef local_30

#undef str_1002357f
#define str_1002357f (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb37U)))
#define local_58 (*(byte (*)[64])(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001a6a8
 */

byte * recovered_1001a6a8(byte *param_1,byte *param_2,byte *param_3)

{
  unsigned char frame[144] __attribute__((aligned(16))) = {0};

  byte *pbVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  uint uVar5;
  byte *pbVar6;
  uint uVar7;

  if (param_1 < param_2) {
    pbVar1 = param_1;
    if (param_3 != (byte *)0x0) {
      pbVar1 = (byte *)(uint)*param_3;
    }
    if ((param_3 != (byte *)0x0 && pbVar1 != (byte *)0x0) &&
       (iVar2 = recovered_10019090(param_3), iVar2 == 0)) {
      pf_varargs_10023fa4__4_((char *)local_58,0x40,str_1002357f,(uint)param_3);
      pbVar1 = param_1 + 1;
      uVar3 = strlen((char *)local_58);
      if (param_2 <= pbVar1) {
        return pbVar1;
      }
      if (uVar3 == 0) {
        return pbVar1;
      }
      if (param_2 < pbVar1 + uVar3) {
        return pbVar1;
      }
      pbVar6 = pbVar1;
      do {
        if (*pbVar6 == 0) {
          return pbVar1;
        }
        uVar4 = 0;
        while ((pbVar6 + uVar4 < param_2 && (uVar5 = (uint)pbVar6[uVar4], uVar5 != 0))) {
          uVar7 = (uint)local_58[uVar4];
          if (uVar7 - 0x41 < 0x1a) {
            uVar7 = uVar7 | 0x20;
          }
          if (uVar5 - 0x41 < 0x1a) {
            uVar5 = uVar5 | 0x20;
          }
          if (uVar5 != uVar7) break;
          uVar4 = uVar4 + 1;
          if (uVar3 == uVar4) goto LAB_1001a7c8;
        }
        if (uVar3 == uVar4) {
LAB_1001a7c8:
          uVar3 = strlen((char *)local_58);
          return pbVar6 + uVar3;
        }
        pbVar6 = pbVar6 + 1;
        if (param_2 < pbVar6 + uVar3) {
          return pbVar1;
        }
      } while( true );
    }
  }
  return param_1 + 1;
}

#undef str_1002357f
#undef local_58

#undef DAT_10022c1b
#define DAT_10022c1b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1d3U)))
#undef DAT_10022ca6
#define DAT_10022ca6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x25eU)))
#define acStack_37c (*(char (*)[192])(frame + 36))
#define acStack_2bc (*(char (*)[640])(frame + 228))
#define local_390 (*(int *)(frame + 16))
#define local_38c (*(int *)(frame + 20))
#define local_388 (*(int *)(frame + 24))
#define local_384 (*(uint *)(frame + 28))
#define local_380 (*(uint *)(frame + 32))
#define local_3c (*(undefined4 *)(frame + 868))
#define local_38 (*(int *)(frame + 872))
#define local_34 (*(int *)(frame + 876))
#define local_24 (*(undefined1 *)(frame + 892))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001a7d8
 */

void recovered_1001a7d8(int param_1,int param_2,undefined1 *param_3,char *param_4,int param_5,
                       int param_6,int *param_7)

{
  unsigned char frame[960] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  undefined1 *vararg0;

  if (param_4 == (char *)0x0) {
    return;
  }
  if (*param_4 == '\0') {
    return;
  }
  memset(&local_390,0,0x370);
  local_3c = 0xffffffff;
  local_34 = param_6;
  local_38 = param_5;
  local_390 = param_2;
  local_384 = recovered_1001a550(param_4,param_5);
  local_38c = *param_7;
  if (param_5 < 2) {
    param_5 = 1;
  }
  local_380 = param_5 << 3 | 3;
  if (param_6 == 2) {
    uVar2 = param_7[1] - local_384;
    uVar2 = uVar2 & ~((int)uVar2 >> 0x1f);
  }
  else {
    if (param_6 != 1) goto LAB_1001a8a4;
    iVar1 = param_7[1] - local_384;
    uVar2 = iVar1 / 2 & ~(iVar1 - (iVar1 >> 0x1f) >> 0x1f);
  }
  local_38c = uVar2 + local_38c;
LAB_1001a8a4:
  local_24 = (undefined1)param_7[3];
  local_388 = param_7[2];
  pf_varargs_10023fa4__4_(acStack_37c,0xc0,&DAT_10022ca6,(uint)param_4);
  vararg0 = &DAT_10022c1b;
  if (param_3 != (undefined1 *)0x0) {
    vararg0 = param_3;
  }
  pf_varargs_10023fa4__4_(acStack_2bc,0x100,&DAT_10022ca6,(uint)vararg0);
  uVar2 = *(uint *)(param_1 + 0x52c2c);
  if (uVar2 >> 7 < 3) {
    *(uint *)(param_1 + 0x52c2c) = uVar2 + 1;
    memcpy((void *)(uVar2 * 0x370 + param_1 + 0x42c),&local_390,0x370);
  }
  iVar1 = 4;
  if (param_2 == 1) {
    iVar1 = 8;
  }
  param_7[2] = local_380 + iVar1 + param_7[2];
  *param_4 = '\0';
  return;
}

#undef DAT_10022c1b
#undef DAT_10022ca6
#undef acStack_37c
#undef acStack_2bc
#undef local_390
#undef local_38c
#undef local_388
#undef local_384
#undef local_380
#undef local_3c
#undef local_38
#undef local_34
#undef local_24

#undef str_10023642
#define str_10023642 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xbfaU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001a984
 */

undefined4 recovered_1001a984(byte *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  bool bVar5;

  if (param_1 == (byte *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar1 = (uint)*param_1;
    if (uVar1 == 0) goto LAB_1001aae4;
    if (uVar1 - 0x41 < 0x1a) {
      uVar1 = uVar1 | 0x20;
    }
    if (uVar1 == 0x61) {
      uVar1 = (uint)param_1[1];
      if (uVar1 == 0) goto LAB_1001aae4;
      if (uVar1 - 0x41 < 0x1a) {
        uVar1 = uVar1 | 0x20;
      }
      if ((uVar1 != 0x62) || (uVar1 = (uint)param_1[2], uVar1 == 0)) goto LAB_1001aae4;
      if (uVar1 - 0x41 < 0x1a) {
        uVar1 = uVar1 | 0x20;
      }
      if ((uVar1 != 0x6f) || (uVar1 = (uint)param_1[3], uVar1 == 0)) goto LAB_1001aae4;
      if (uVar1 - 0x41 < 0x1a) {
        uVar1 = uVar1 | 0x20;
      }
      if ((uVar1 != 0x75) || (uVar1 = (uint)param_1[4], uVar1 == 0)) goto LAB_1001aae4;
      if (uVar1 - 0x41 < 0x1a) {
        uVar1 = uVar1 | 0x20;
      }
      if ((uVar1 != 0x74) || (uVar1 = (uint)param_1[5], uVar1 == 0)) goto LAB_1001aae4;
      if (uVar1 - 0x41 < 0x1a) {
        uVar1 = uVar1 | 0x20;
      }
    }
    else {
      if ((uVar1 != 100) || (uVar1 = (uint)param_1[1], uVar1 == 0)) goto LAB_1001aae4;
      if (uVar1 - 0x41 < 0x1a) {
        uVar1 = uVar1 | 0x20;
      }
      if ((uVar1 != 0x61) || (uVar1 = (uint)param_1[2], uVar1 == 0)) goto LAB_1001aae4;
      if (uVar1 - 0x41 < 0x1a) {
        uVar1 = uVar1 | 0x20;
      }
      if ((uVar1 != 0x74) || (uVar1 = (uint)param_1[3], uVar1 == 0)) goto LAB_1001aae4;
      if (uVar1 - 0x41 < 0x1a) {
        uVar1 = uVar1 | 0x20;
      }
      if ((uVar1 != 0x61) || (uVar1 = (uint)param_1[4], uVar1 == 0)) goto LAB_1001aae4;
      if (uVar1 - 0x41 < 0x1a) {
        uVar1 = uVar1 | 0x20;
      }
    }
    uVar4 = 1;
    if (uVar1 != 0x3a) {
LAB_1001aae4:
      uVar1 = 0x6a;
      iVar3 = 0;
      while( true ) {
        uVar2 = (uint)param_1[-iVar3];
        if (uVar2 == 0) {
          return 0;
        }
        if (uVar1 - 0x41 < 0x1a) {
          uVar1 = uVar1 | 0x20;
        }
        if (uVar2 - 0x41 < 0x1a) {
          uVar2 = uVar2 | 0x20;
        }
        if (uVar2 != uVar1) break;
        bVar5 = iVar3 == -10;
        uVar1 = (uint)(byte)str_10023642[1 - iVar3];
        iVar3 = iVar3 + -1;
        if (bVar5) {
          return 1;
        }
      }
      return 0;
    }
  }
  return uVar4;
}

#undef str_10023642

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001ab60
 */

undefined4 recovered_1001ab60(char *param_1,undefined1 *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  int iVar2;
  int iVar3;

  *param_2 = 0;
  if (param_1 != (char *)0x0) {
    cVar1 = *param_1;
    if (cVar1 != '\0') {
LAB_1001ab94:
      do {
        switch((uintptr_t)(cVar1)) {
        case '\t':
        case '\n':
        case '\f':
        case '\r':
        case ' ':
        case ',':
          param_1 = param_1 + 1;
          cVar1 = *param_1;
          break;
        default:
          iVar3 = 0;
          do {
            switch((uintptr_t)(cVar1)) {
            case '\0':
            case '\t':
            case '\n':
            case '\f':
            case '\r':
            case ' ':
            case ',':
              goto switchD_1001ac68_caseD_0;
            default:
              cVar1 = param_1[1 - iVar3];
              iVar3 = iVar3 + -1;
            }
          } while( true );
        }
      } while( true );
    }
LAB_1001ad74:
    *param_2 = 0;
  }
  return 0;
switchD_1001ac68_caseD_0:
  if ((iVar3 != 0) && ((uint)-iVar3 < 0xff || iVar3 == -0xff)) {
    memcpy(param_2,param_1,-iVar3);
    param_2[-iVar3] = 0;
    iVar2 = recovered_1001a984(param_2);
    if (iVar2 == 0) {
      return 1;
    }
  }
  param_1 = param_1 + -iVar3;
  while( true ) {
    cVar1 = *param_1;
    if (cVar1 == '\0') goto LAB_1001ad74;
    if (cVar1 == ',') break;
    param_1 = param_1 + 1;
  }
  goto LAB_1001ab94;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001ad90
 */

bool recovered_1001ad90(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;

  if (param_1 == 0) {
    return false;
  }
  for (uVar4 = 0;
      (cVar1 = *(char *)(param_1 + uVar4), cVar1 != '\0' && (cVar1 != '#' && cVar1 != '?'));
      uVar4 = uVar4 + 1) {
  }
  bVar2 = false;
  if (3 < uVar4) {
    iVar3 = param_1 + uVar4;
    uVar4 = (uint)*(byte *)(iVar3 + -4);
    if (uVar4 - 0x41 < 0x1a) {
      uVar4 = uVar4 | 0x20;
    }
    if (uVar4 == 0x2e) {
      uVar4 = (uint)*(byte *)(iVar3 + -3);
      if (uVar4 - 0x41 < 0x1a) {
        uVar4 = uVar4 | 0x20;
      }
      if (uVar4 == 0x70) {
        uVar4 = (uint)*(byte *)(iVar3 + -2);
        if (uVar4 - 0x41 < 0x1a) {
          uVar4 = uVar4 | 0x20;
        }
        if (uVar4 != 0x6e) {
          return false;
        }
        uVar4 = (uint)*(byte *)(iVar3 + -1);
        if (uVar4 - 0x41 < 0x1a) {
          uVar4 = uVar4 | 0x20;
        }
        bVar2 = uVar4 == 0x67;
      }
    }
  }
  return bVar2;
}


#undef DAT_10022ca6
#define DAT_10022ca6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x25eU)))
#undef DAT_100234a1
#define DAT_100234a1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa59U)))
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
#undef UINT_40010894
#define UINT_40010894 (*(uint *)(0x40010894U))
#undef str_10023953
#define str_10023953 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xf0bU)))
#undef str_10023964
#define str_10023964 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xf1cU)))
#undef str_10023a8b
#define str_10023a8b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1043U)))
#undef str_10023aa3
#define str_10023aa3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x105bU)))
#define local_1c8 (*(char (*)[96])(frame + 40))
#define auStack_168 (*(undefined1 (*)[129])(frame + 136))
#define abStack_e7 (*(byte (*)[199])(frame + 265))
#define in_stack_fffffe24 (*(uint *)(frame + 20))
#define in_stack_fffffe28 (*(uint *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001ae3c
 */

void recovered_1001ae3c(int param_1,int param_2,byte *param_3,byte *param_4)

{
  unsigned char frame[528] __attribute__((aligned(16))) = {0};

  code *pcVar1;
  int iVar2;
  char *format;
  uint uVar3;
  char *vararg0;
  int iVar4;
  bool bVar5;

  if (param_3 == (byte *)0x0) {
    return;
  }
  uVar3 = (uint)*param_3;
  if (uVar3 == 0) {
    return;
  }
  if (uVar3 - 0x41 < 0x1a) {
    uVar3 = uVar3 | 0x20;
  }
  if (uVar3 != 0x68) {
    return;
  }
  uVar3 = (uint)param_3[1];
  if (uVar3 == 0) {
code_r0x1001afa0:
    uVar3 = (uint)param_3[1];
    if (uVar3 == 0) {
      return;
    }
    if (uVar3 - 0x41 < 0x1a) {
      uVar3 = uVar3 | 0x20;
    }
    if (uVar3 != 0x74) {
      return;
    }
    uVar3 = (uint)param_3[2];
    if (uVar3 == 0) {
      return;
    }
    if (uVar3 - 0x41 < 0x1a) {
      uVar3 = uVar3 | 0x20;
    }
    if (uVar3 != 0x74) {
      return;
    }
    uVar3 = (uint)param_3[3];
    if (uVar3 == 0) {
      return;
    }
    if (uVar3 - 0x41 < 0x1a) {
      uVar3 = uVar3 | 0x20;
    }
    if (uVar3 != 0x70) {
      return;
    }
    uVar3 = (uint)param_3[4];
    if (uVar3 == 0) {
      return;
    }
    if (uVar3 - 0x41 < 0x1a) {
      uVar3 = uVar3 | 0x20;
    }
    if (uVar3 != 0x73) {
      return;
    }
    uVar3 = (uint)param_3[5];
    if (uVar3 == 0) {
      return;
    }
    if (uVar3 - 0x41 < 0x1a) {
      uVar3 = uVar3 | 0x20;
    }
    if (uVar3 != 0x3a) {
      return;
    }
    uVar3 = (uint)param_3[6];
    if (uVar3 == 0) {
      return;
    }
    if (uVar3 - 0x41 < 0x1a) {
      uVar3 = uVar3 | 0x20;
    }
    if (uVar3 != 0x2f) {
      return;
    }
    uVar3 = (uint)param_3[7];
    if (uVar3 == 0) {
      return;
    }
    if (uVar3 - 0x41 < 0x1a) {
      uVar3 = uVar3 | 0x20;
    }
    if (uVar3 != 0x2f) {
      return;
    }
  }
  else {
    if (uVar3 - 0x41 < 0x1a) {
      uVar3 = uVar3 | 0x20;
    }
    if ((uVar3 != 0x74) || (uVar3 = (uint)param_3[2], uVar3 == 0)) goto code_r0x1001afa0;
    if (uVar3 - 0x41 < 0x1a) {
      uVar3 = uVar3 | 0x20;
    }
    if ((uVar3 != 0x74) || (uVar3 = (uint)param_3[3], uVar3 == 0)) goto code_r0x1001afa0;
    if (uVar3 - 0x41 < 0x1a) {
      uVar3 = uVar3 | 0x20;
    }
    if ((uVar3 != 0x70) || (uVar3 = (uint)param_3[4], uVar3 == 0)) goto code_r0x1001afa0;
    if (uVar3 - 0x41 < 0x1a) {
      uVar3 = uVar3 | 0x20;
    }
    if ((uVar3 != 0x3a) || (uVar3 = (uint)param_3[5], uVar3 == 0)) goto code_r0x1001afa0;
    if (uVar3 - 0x41 < 0x1a) {
      uVar3 = uVar3 | 0x20;
    }
    if ((uVar3 != 0x2f) || (uVar3 = (uint)param_3[6], uVar3 == 0)) goto code_r0x1001afa0;
    if (uVar3 - 0x41 < 0x1a) {
      uVar3 = uVar3 | 0x20;
    }
    if (uVar3 != 0x2f) goto code_r0x1001afa0;
  }
  recovered_10005e9c(param_1);
  if (*(char *)(param_1 + 0x205da4) == '\x01') {
    pf_varargs_10023fa4__4_((char *)(param_2 + 0x141),0xc0,&DAT_10022ca6,((uintptr_t)pf_module_state + 0xc56U));
    goto LAB_1001b234;
  }
  iVar4 = 0;
  memset((void *)(param_1 + 0x205cb4),0,0x4a4);
  *(int *)(param_1 + 0x205cb4) = param_1;
  memcpy((void *)(param_1 + 0x205cb8),(void *)(param_1 + 0x205bc8),0xec);
  *(undefined1 *)(param_1 + 0x205da4) = 1;
  if (*(int *)(param_1 + 0x205bac) != 0) {
    iVar2 = param_1 + -0x4fce8;
    do {
      iVar2 = iVar2 + 0x555cc;
      if (iVar2 == param_2) goto LAB_1001b114;
      iVar4 = iVar4 + 1;
    } while (*(int *)(param_1 + 0x205bac) != iVar4);
  }
  iVar4 = *(int *)(param_1 + 0x205bb0);
LAB_1001b114:
  *(int *)(param_1 + 0x205dac) = iVar4;
  uVar3 = pf_varargs_10023fa4__4_((char *)(param_1 + 0x205db8),0x100,&DAT_10022ca6,(uint)param_3);
  if (param_4 != (byte *)0x0) {
    uVar3 = (uint)*param_4;
  }
  if (param_4 != (byte *)0x0 && uVar3 != 0) {
    pf_varargs_10023fa4__4_((char *)(param_1 + 0x206078),0x60,&DAT_10022ca6,(uint)param_4);
  }
  memset(auStack_168,0,0x144);
  local_1c8[0] = '\0';
  iVar4 = recovered_1000df3c(param_3,auStack_168,local_1c8,0x60);
  if (iVar4 != 0) {
    param_3 = abStack_e7;
  }
  vararg0 = (char *)(param_1 + 0x205eb8);
  recovered_1001bc10((char *)param_3,(byte *)vararg0,0x80);
  iVar4 = Ram40010800;
  if ((iVar4 == 0x50414d57) && (iVar4 = Ram40010804, iVar4 != 0)) {
    uVar3 = Ram40010808;
    bVar5 = 0xb < uVar3;
    if (bVar5) {
      uVar3 = Ram40010808;
    }
    if ((!bVar5 || uVar3 < 0x98) || (pcVar1 = (code *)UINT_40010894, pcVar1 == (code *)0x0))
    goto LAB_1001b1f8;
    uVar3 = (*pcVar1)(recovered_1001bf04,(void *)(param_1 + 0x205cb4),str_10023953);
    *(uint *)(param_1 + 0x205da8) = uVar3;
    if (uVar3 == 0) goto LAB_1001b1fc;
    if (*(char *)(param_1 + 0x205eb8) == '\0') {
      vararg0 = &DAT_100234a1;
    }
    in_stack_fffffe24 = *(int *)(param_1 + 0x205db0) + 0x3ffU >> 10;
    if (*(int *)(param_1 + 0x205db4) == 0) {
      format = str_10023aa3;
    }
    else {
      in_stack_fffffe28 = *(int *)(param_1 + 0x205db4) + 0x3ffU >> 10;
      format = str_10023a8b;
    }
  }
  else {
LAB_1001b1f8:
    *(undefined4 *)(param_1 + 0x205da8) = 0;
LAB_1001b1fc:
    *(undefined1 *)(param_1 + 0x205da4) = 0;
    format = &DAT_10022ca6;
    vararg0 = str_10023964;
  }
  pf_varargs_10023fa4__4__4__4_
            ((char *)(param_2 + 0x141),0xc0,format,(uint)vararg0,in_stack_fffffe24,in_stack_fffffe28
            );
LAB_1001b234:
  *(undefined1 *)(param_1 + 0x57da) = 1;
  return;
}

#undef DAT_10022ca6
#undef DAT_100234a1
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef Ram40010800
#undef Ram40010804
#undef Ram40010808
#undef UINT_40010894
#undef str_10023953
#undef str_10023964
#undef str_10023a8b
#undef str_10023aa3
#undef local_1c8
#undef auStack_168
#undef abStack_e7
#undef in_stack_fffffe24
#undef in_stack_fffffe28

#undef DAT_10022ca6
#define DAT_10022ca6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x25eU)))
#undef DAT_10022ea9
#define DAT_10022ea9 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x461U)))
#undef str_10023b50
#define str_10023b50 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1108U)))
#define acStack_120 (*(char (*)[256])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001b300
 */

void recovered_1001b300(int param_1,int param_2,char *param_3)

{
  unsigned char frame[336] __attribute__((aligned(16))) = {0};

  char cVar1;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  char *vararg0;

  if (param_3 == (char *)0x0) {
    return;
  }
  vararg0 = param_3;
  pcVar2 = param_3;
  do {
    while( true ) {
      pcVar3 = pcVar2 + 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar3;
      if (cVar1 != '/' && cVar1 != '\\') break;
      vararg0 = pcVar3;
    }
  } while (cVar1 != '\0');
  iVar4 = recovered_1000645c(param_2);
  if (iVar4 != 0) {
    pf_varargs_10023fa4__4_(acStack_120,0x100,&DAT_10022ea9,(uint)param_3);
    pf_varargs_10023fa4__4__4__4__4_
              (*(char **)(param_2 + 0x30c),0x50000,str_10023b50,(uint)vararg0,(uint)vararg0,
               (uint)acStack_120,(uint)vararg0);
    pf_varargs_10023fa4__4_((char *)(param_2 + 0x141),0xc0,&DAT_10022ca6,((uintptr_t)pf_module_state + 0x1163U));
    recovered_100066d0(param_1,param_2);
    recovered_10007eb4(param_1,(int *)param_2);
  }
  return;
}

#undef DAT_10022ca6
#undef DAT_10022ea9
#undef str_10023b50
#undef acStack_120

#undef DAT_10022ca6
#define DAT_10022ca6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x25eU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001b3f8
 */

void recovered_1001b3f8(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  byte *b;

  puVar5 = (uint *)(param_1 + 0x554c0);
  if (*(char *)(param_1 + 0x555c8) != '\0') {
    return;
  }
  b = (byte *)(param_1 + 1);
  uVar2 = (uint)*b;
  if (uVar2 == 0) {
    return;
  }
  if (uVar2 - 0x41 < 0x1a) {
    uVar2 = uVar2 | 0x20;
  }
  if ((uVar2 == 0x61) && (uVar2 = (uint)*(byte *)(param_1 + 2), uVar2 != 0)) {
    if (uVar2 - 0x41 < 0x1a) {
      uVar2 = uVar2 | 0x20;
    }
    if ((uVar2 == 0x62) && (uVar2 = (uint)*(byte *)(param_1 + 3), uVar2 != 0)) {
      if (uVar2 - 0x41 < 0x1a) {
        uVar2 = uVar2 | 0x20;
      }
      if ((uVar2 == 0x6f) && (uVar2 = (uint)*(byte *)(param_1 + 4), uVar2 != 0)) {
        if (uVar2 - 0x41 < 0x1a) {
          uVar2 = uVar2 | 0x20;
        }
        if ((uVar2 == 0x75) && (uVar2 = (uint)*(byte *)(param_1 + 5), uVar2 != 0)) {
          if (uVar2 - 0x41 < 0x1a) {
            uVar2 = uVar2 | 0x20;
          }
          if ((uVar2 == 0x74) && (uVar2 = (uint)*(byte *)(param_1 + 6), uVar2 != 0)) {
            if (uVar2 - 0x41 < 0x1a) {
              uVar2 = uVar2 | 0x20;
            }
            if (uVar2 == 0x3a) {
              return;
            }
          }
        }
      }
    }
  }
  uVar3 = *puVar5;
  uVar2 = 0;
  if (uVar3 != 0) {
    if (*(uint *)(param_1 + 0x554c4) < uVar3) {
      iVar1 = strcmp((char *)(param_1 + *(uint *)(param_1 + 0x554c4) * 0x100 + 0x544c0),
                                 (char *)b);
      if (iVar1 == 0) {
        return;
      }
      uVar3 = *puVar5;
      if (uVar3 == 0) goto LAB_1001b720;
    }
    uVar4 = *(int *)(param_1 + 0x554c4) + 1;
    uVar2 = uVar3;
    if (uVar4 < uVar3) {
      *puVar5 = uVar4;
      uVar2 = uVar4;
    }
    if (0xf < uVar2) {
      pf_varargs_10023fa4__4_
                ((char *)(param_1 + 0x544c0),0x100,&DAT_10022ca6,(uint)(param_1 + 0x545c0));
      pf_varargs_10023fa4__4_
                ((char *)(param_1 + 0x545c0),0x100,&DAT_10022ca6,(uint)(param_1 + 0x546c0));
      pf_varargs_10023fa4__4_
                ((char *)(param_1 + 0x546c0),0x100,&DAT_10022ca6,(uint)(param_1 + 0x547c0));
      pf_varargs_10023fa4__4_
                ((char *)(param_1 + 0x547c0),0x100,&DAT_10022ca6,(uint)(param_1 + 0x548c0));
      pf_varargs_10023fa4__4_
                ((char *)(param_1 + 0x548c0),0x100,&DAT_10022ca6,(uint)(param_1 + 0x549c0));
      pf_varargs_10023fa4__4_
                ((char *)(param_1 + 0x549c0),0x100,&DAT_10022ca6,(uint)(param_1 + 0x54ac0));
      pf_varargs_10023fa4__4_
                ((char *)(param_1 + 0x54ac0),0x100,&DAT_10022ca6,(uint)(param_1 + 0x54bc0));
      pf_varargs_10023fa4__4_
                ((char *)(param_1 + 0x54bc0),0x100,&DAT_10022ca6,(uint)(param_1 + 0x54cc0));
      pf_varargs_10023fa4__4_
                ((char *)(param_1 + 0x54cc0),0x100,&DAT_10022ca6,(uint)(param_1 + 0x54dc0));
      pf_varargs_10023fa4__4_
                ((char *)(param_1 + 0x54dc0),0x100,&DAT_10022ca6,(uint)(param_1 + 0x54ec0));
      pf_varargs_10023fa4__4_
                ((char *)(param_1 + 0x54ec0),0x100,&DAT_10022ca6,(uint)(param_1 + 0x54fc0));
      pf_varargs_10023fa4__4_
                ((char *)(param_1 + 0x54fc0),0x100,&DAT_10022ca6,(uint)(param_1 + 0x550c0));
      pf_varargs_10023fa4__4_
                ((char *)(param_1 + 0x550c0),0x100,&DAT_10022ca6,(uint)(param_1 + 0x551c0));
      pf_varargs_10023fa4__4_
                ((char *)(param_1 + 0x551c0),0x100,&DAT_10022ca6,(uint)(param_1 + 0x552c0));
      pf_varargs_10023fa4__4_((char *)(param_1 + 0x552c0),0x100,&DAT_10022ca6,param_1 + 0x553c0);
      uVar2 = 0xf;
      *puVar5 = 0xf;
    }
  }
LAB_1001b720:
  *(uint *)(param_1 + 0x554c4) = uVar2;
  pf_varargs_10023fa4__4_((char *)(param_1 + uVar2 * 0x100 + 0x544c0),0x100,&DAT_10022ca6,(uint)b);
  *puVar5 = *puVar5 + 1;
  return;
}

#undef DAT_10022ca6

#undef str_10023bc6
#define str_10023bc6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x117eU)))
#undef str_10023c13
#define str_10023c13 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x11cbU)))
#undef str_10023c19
#define str_10023c19 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x11d1U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001b758
 */

void recovered_1001b758(int param_1,int param_2,char *param_3,char *param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  char *vararg2;
  char *vararg0;

  iVar1 = recovered_1000645c(param_2);
  if (iVar1 == 0) {
    return;
  }
  vararg2 = str_10023c19;
  if (param_4 != (char *)0x0) {
    vararg2 = param_4;
  }
  vararg0 = str_10023c13;
  if (param_3 != (char *)0x0) {
    vararg0 = param_3;
  }
  pf_varargs_10023fa4__4__4__4_
            (*(char **)(param_2 + 0x30c),0x50000,str_10023bc6,(uint)vararg0,(uint)vararg0,
             (uint)vararg2);
  recovered_100066d0(param_1,param_2);
  recovered_10007eb4(param_1,(int *)param_2);
  return;
}

#undef str_10023bc6
#undef str_10023c13
#undef str_10023c19

#undef DAT_10024114
#define DAT_10024114 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x16ccU)))
#undef DAT_10024118
#define DAT_10024118 (*(int *)(((uintptr_t)pf_module_state + 0x16d0U)))
#undef str_10023463
#define str_10023463 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa1bU)))
#undef str_10023c37
#define str_10023c37 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x11efU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001b800
 */

void recovered_1001b800(uint param_1,int param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  uint uVar5;

  if ((*(char *)(param_2 + 0x31d) == '\x01') && (*(char *)(param_2 + 0x32c) != '\0')) {
    recovered_1001d948(param_1,param_2,(char *)(param_2 + 0x32c),0,0x48,DAT_10024114,
                       DAT_10024118 + -0x5e,1,1,(byte *)str_10023c37);
  }
  uVar1 = *(uint *)(param_2 + 0x52c2c);
  if (uVar1 != 0) {
    iVar4 = 0;
    uVar5 = 0;
    do {
      iVar2 = param_2 + iVar4;
      if (*(int *)(iVar2 + 0x42c) == 3) {
        pcVar3 = (char *)(iVar2 + 0x440);
        if (*pcVar3 == 0) {
          pcVar3 = str_10023463;
        }
        recovered_1001d948(param_1,param_2,(char *)(iVar2 + 0x500),*(undefined4 *)(iVar2 + 0x430),
                           *(undefined4 *)(iVar2 + 0x434),*(undefined4 *)(iVar2 + 0x438),
                           *(undefined4 *)(iVar2 + 0x43c),0,*(undefined1 *)(iVar2 + 0x798),
                           (byte *)pcVar3);
        uVar1 = *(uint *)(param_2 + 0x52c2c);
      }
      uVar5 = uVar5 + 1;
      iVar4 = iVar4 + 0x370;
    } while (uVar5 < uVar1);
  }
  return;
}

#undef DAT_10024114
#undef DAT_10024118
#undef str_10023463
#undef str_10023c37

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001b940
 */

bool recovered_1001b940(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;

  if (param_1 == 0) {
    return false;
  }
  for (uVar4 = 0;
      (cVar1 = *(char *)(param_1 + uVar4), cVar1 != '\0' && (cVar1 != '#' && cVar1 != '?'));
      uVar4 = uVar4 + 1) {
  }
  bVar2 = false;
  if (3 < uVar4) {
    iVar3 = param_1 + uVar4;
    uVar4 = (uint)*(byte *)(iVar3 + -4);
    if (uVar4 - 0x41 < 0x1a) {
      uVar4 = uVar4 | 0x20;
    }
    if (uVar4 == 0x2e) {
      uVar4 = (uint)*(byte *)(iVar3 + -3);
      if (uVar4 - 0x41 < 0x1a) {
        uVar4 = uVar4 | 0x20;
      }
      if (uVar4 == 0x70) {
        uVar4 = (uint)*(byte *)(iVar3 + -2);
        if (uVar4 - 0x41 < 0x1a) {
          uVar4 = uVar4 | 0x20;
        }
        if (uVar4 != 0x6e) {
          return false;
        }
        uVar4 = (uint)*(byte *)(iVar3 + -1);
        if (uVar4 - 0x41 < 0x1a) {
          uVar4 = uVar4 | 0x20;
        }
        bVar2 = uVar4 == 0x67;
      }
    }
  }
  return bVar2;
}


#undef DAT_10022ca6
#define DAT_10022ca6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x25eU)))
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
#define local_24 (*(void * *)(frame + 28))
#define local_20 (*(uint *)(frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001b9ec
 */

undefined4 recovered_1001b9ec(int param_1,int param_2,byte *param_3,uint param_4)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  code *pcVar1;
  int iVar2;
  uint uVar3;
  void *extraout_r1;
  void *extraout_r1_00;
  void *src;
  undefined4 uVar4;
  ulong n;
  bool bVar5;
  bool bVar6;

  uVar4 = 0;
  if (param_3 != (byte *)0x0) {
    param_4 = (uint)*param_3;
  }
  if (param_3 == (byte *)0x0 || param_4 == 0) {
    return 0;
  }
  iVar2 = recovered_1000645c(param_1);
  if (iVar2 == 0) {
    return 0;
  }
  memset(&local_24,0,0xc);
  iVar2 = Ram40010800;
  if ((iVar2 == 0x50414d57) && (iVar2 = Ram40010804, iVar2 != 0)) {
    uVar3 = Ram40010808;
    bVar6 = 0xb < uVar3;
    bVar5 = uVar3 == 0xc;
    if (bVar6) {
      uVar3 = Ram40010808;
      bVar5 = uVar3 == 0xcb;
    }
    if ((bVar6 && 0xca < uVar3) && !bVar5) {
      pcVar1 = (code *)UINT_400108c8;
      if (pcVar1 == (code *)0x0) {
        return 0;
      }
      uVar3 = (*pcVar1)(param_2,(char *)param_3,&local_24);
      src = extraout_r1_00;
      goto LAB_1001bae8;
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
  uVar3 = Ram40010808;
  bVar5 = uVar3 < 0xc;
  if (!bVar5) {
    uVar3 = Ram40010808;
  }
  if (bVar5 || uVar3 < 0x38) {
    return 0;
  }
  pcVar1 = (code *)UINT_40010834;
  if (pcVar1 == (code *)0x0) {
    return 0;
  }
  uVar3 = (*pcVar1)((char *)param_3,&local_24);
  src = extraout_r1;
LAB_1001bae8:
  if (uVar3 != 0) {
    src = local_24;
  }
  if (uVar3 != 0 && src != (void *)0x0) {
    n = 0x4ffff;
    if (local_20 < 0x4ffff) {
      n = local_20;
    }
    memcpy(*(void **)(param_1 + 0x30c),src,n);
    uVar4 = 1;
    *(undefined1 *)(*(int *)(param_1 + 0x30c) + n) = 0;
    if (n != local_20) {
      pf_varargs_10023fa4__4_((char *)(param_1 + 0x141),0xc0,&DAT_10022ca6,((uintptr_t)pf_module_state + 0x131bU));
    }
  }
  return uVar4;
}

#undef DAT_10022ca6
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef Ram40010800
#undef Ram40010804
#undef Ram40010808
#undef UINT_40010834
#undef UINT_400108c8
#undef local_24
#undef local_20

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001bb60
 */

bool recovered_1001bb60(char *param_1,byte *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  ulong uVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;

  uVar1 = strlen(param_1);
  bVar6 = false;
  if (((param_2 != (byte *)0x0) &&
      (uVar2 = strlen((char *)param_2), param_1 != (char *)0x0)) && (uVar2 <= uVar1)) {
    uVar4 = (uint)(byte)param_1[uVar1 - uVar2];
    if (uVar4 != 0) {
      pbVar3 = (byte *)(param_1 + (uVar1 - uVar2));
      do {
        pbVar3 = pbVar3 + 1;
        uVar5 = (uint)*param_2;
        if (uVar5 == 0) {
          return false;
        }
        if (uVar5 - 0x41 < 0x1a) {
          uVar5 = uVar5 | 0x20;
        }
        if (uVar4 - 0x41 < 0x1a) {
          uVar4 = uVar4 | 0x20;
        }
        if (uVar4 != uVar5) {
          return false;
        }
        uVar4 = (uint)*pbVar3;
        param_2 = param_2 + 1;
      } while (uVar4 != 0);
    }
    bVar6 = *param_2 == 0;
  }
  return bVar6;
}


#undef DAT_10022c1b
#define DAT_10022c1b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1d3U)))
#undef DAT_10022ca6
#define DAT_10022ca6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x25eU)))
#undef str_10023988
#define str_10023988 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xf40U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001bc10
 */

void recovered_1001bc10(char *param_1,byte *param_2,ulong param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  byte bVar2;
  byte bVar3;
  char *pcVar4;
  byte *pbVar5;
  char *pcVar6;
  byte *pbVar7;
  char *pcVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint unaff_r6;
  int unaff_r9;

  pcVar8 = param_1;
  if (param_1 == (char *)0x0) {
    if (param_2 == (byte *)0x0) {
      return;
    }
    *param_2 = 0;
    pcVar4 = &DAT_10022c1b;
  }
  else {
    do {
      do {
        pcVar4 = param_1;
        pcVar6 = pcVar8 + 1;
        cVar1 = *pcVar8;
        param_1 = pcVar6;
        pcVar8 = pcVar6;
      } while (cVar1 == '/' || cVar1 == '\\');
      param_1 = pcVar4;
    } while (cVar1 != '\0');
    if (param_2 == (byte *)0x0) {
      return;
    }
    *param_2 = 0;
    if (pcVar4 == (char *)0x0) {
      pcVar8 = str_10023988;
      goto LAB_1001bcb4;
    }
  }
  pcVar8 = str_10023988;
  if (*pcVar4 != '\0') {
    pcVar8 = pcVar4;
  }
LAB_1001bcb4:
  pf_varargs_10023fa4__4_((char *)param_2,param_3,&DAT_10022ca6,(uint)pcVar8);
  pbVar5 = param_2;
  do {
    bVar2 = *pbVar5;
    switch((uintptr_t)(bVar2)) {
    case 0x23:
    case 0x3f:
      goto switchD_1001bcf8_caseD_23;
    case 0x24:
    case 0x25:
    case 0x26:
    case 0x27:
    case 0x28:
    case 0x29:
    case 0x2a:
    case 0x2b:
    case 0x2c:
    case 0x2d:
    case 0x2e:
    case 0x30:
    case 0x31:
    case 0x32:
    case 0x33:
    case 0x34:
    case 0x35:
    case 0x36:
    case 0x37:
    case 0x38:
    case 0x39:
    case 0x3b:
    case 0x3c:
    case 0x3d:
    case 0x3e:
      break;
    case 0x2f:
    case 0x3a:
switchD_1001bcf8_caseD_2f:
      *pbVar5 = 0x5f;
      break;
    default:
      if (bVar2 == 0x5c) goto switchD_1001bcf8_caseD_2f;
      if (bVar2 == 0) goto LAB_1001bd8c;
    }
    pbVar5 = pbVar5 + 1;
  } while( true );
switchD_1001bcf8_caseD_23:
  *pbVar5 = 0;
LAB_1001bd8c:
  pbVar5 = param_2;
  pbVar7 = param_2;
  do {
    for (; bVar2 = *pbVar7, bVar2 != 0x25; pbVar7 = pbVar7 + 1) {
      if (bVar2 == 0) {
        *pbVar5 = 0;
        pbVar5 = param_2;
        do {
          bVar2 = *pbVar5;
          if (bVar2 < 0x3a) {
            if (bVar2 == 0x2f) {
              *pbVar5 = 0x5f;
            }
            else if (bVar2 == 0) {
              if (*param_2 == 0) {
                pf_varargs_10023fa4__4_((char *)param_2,param_3,&DAT_10022ca6,((uintptr_t)pf_module_state + 0xf40U));
                return;
              }
              return;
            }
          }
          else if (bVar2 == 0x3a || bVar2 == 0x5c) {
            *pbVar5 = 0x5f;
          }
          pbVar5 = pbVar5 + 1;
        } while( true );
      }
LAB_1001bda0:
      *pbVar5 = bVar2;
      pbVar5 = pbVar5 + 1;
    }
    bVar3 = pbVar7[1];
    iVar11 = (int)(char)bVar3;
    if (bVar3 != 0) {
      unaff_r9 = (int)(char)pbVar7[2];
      unaff_r6 = (uint)pbVar7[2];
    }
    if (bVar3 == 0 || unaff_r6 == 0) goto LAB_1001bda0;
    if ((byte)(bVar3 - 0x30U) < 10) {
      iVar10 = iVar11 + -0x30;
    }
    else if ((byte)(bVar3 + 0x9f) < 6) {
      iVar10 = iVar11 + -0x57;
    }
    else {
      iVar10 = -1;
      if ((byte)(bVar3 + 0xbf) < 6) {
        iVar10 = iVar11 + -0x37;
      }
    }
    if ((unaff_r6 - 0x30 & 0xff) < 10) {
      unaff_r6 = unaff_r9 - 0x30;
    }
    else if ((unaff_r6 - 0x61 & 0xff) < 6) {
      unaff_r6 = unaff_r9 - 0x57;
    }
    else {
      uVar9 = unaff_r6 - 0x41;
      unaff_r6 = 0xffffffff;
      if ((uVar9 & 0xff) < 6) {
        unaff_r6 = unaff_r9 - 0x37;
      }
    }
    if (iVar10 < 0 || (int)unaff_r6 < 0) goto LAB_1001bda0;
    *pbVar5 = (byte)unaff_r6 | (byte)(iVar10 << 4);
    pbVar7 = pbVar7 + 3;
    pbVar5 = pbVar5 + 1;
  } while( true );
}

#undef DAT_10022c1b
#undef DAT_10022ca6
#undef str_10023988

#undef DAT_10022ca6
#define DAT_10022ca6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x25eU)))
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
#undef str_10022e50
#define str_10022e50 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x408U)))
#undef str_1002303e
#define str_1002303e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5f6U)))
#undef str_1002372d
#define str_1002372d (*(char (*)[1])(((uintptr_t)pf_module_state + 0xce5U)))
#undef str_10023995
#define str_10023995 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xf4dU)))
#undef str_100239a5
#define str_100239a5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xf5dU)))
#undef str_100239c4
#define str_100239c4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xf7cU)))
#undef str_10023a2d
#define str_10023a2d (*(char (*)[1])(((uintptr_t)pf_module_state + 0xfe5U)))
#undef str_10023a40
#define str_10023a40 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xff8U)))
#undef str_10023a4c
#define str_10023a4c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1004U)))
#define local_a1c (*(uint *)(frame + 164))
#define local_a18 (*(uint (*)[40])(frame + 168))
#define local_178 (*(uint *)(frame + 2376))
#define local_16c (*(uint *)(frame + 2388))
#define local_168 (*(char (*)[129])(frame + 2392))
#define acStack_978 (*(char (*)[512])(frame + 328))
#define acStack_778 (*(char (*)[1536])(frame + 840))
#define acStack_172 (*(char (*)[6])(frame + 2382))
#define acStack_e7 (*(char (*)[193])(frame + 2521))
#define uStack_26 (*(ushort *)(frame + 2714))
#define local_aa8 (*(char (*)[128])(frame + 24))
#define local_a28 (*(code * (*)[2])(frame + 152))
#define local_a20 (*(int * *)(frame + 160))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001bf04
 */

undefined1 recovered_1001bf04(int *param_1,int param_2)

{
  unsigned char frame[2784] __attribute__((aligned(16))) = {0};

  code *pcVar1;
  int iVar2;
  int *piVar3;
  byte *ptr;
  undefined *vararg5;
  void *pvVar4;
  uint uVar5;
  uint uVar6;
  char *format;
  uint uVar7;
  byte *vararg1;
  uint uVar8;
  int *dst;
  char *vararg0;
  undefined1 uVar9;
  bool bVar10;

  if (param_1 != (int *)0x0) {
    param_2 = *param_1;
  }
  if (param_1 == (int *)0x0 || param_2 == 0) {
    return 0;
  }
  uVar9 = 0;
  dst = param_1 + 0xa1;
  *(undefined1 *)dst = 0;
  vararg0 = local_aa8;
  local_aa8[0] = '\0';
  local_16c = 0;
  local_178 = 0;
  *(undefined1 *)(param_1 + 0xf1) = 0;
  iVar2 = recovered_1000df3c((byte *)(param_1 + 0x41),local_168,vararg0,0x80);
  if (iVar2 == 0) goto LAB_1001c06c;
  piVar3 = param_1 + 1;
  iVar2 = recovered_1000e314((char *)piVar3,local_aa8,0x80);
  if (iVar2 == 0) goto LAB_1001c06c;
  vararg1 = (byte *)((uint)local_168 | 1);
  iVar2 = recovered_1000e6e0(vararg1,&local_16c);
  if (((iVar2 == 0) &&
      (iVar2 = recovered_1000e870((int)piVar3,vararg1,&local_16c,local_aa8,0x80), iVar2 == 0)) ||
     (iVar2 = recovered_1000ed34((int)piVar3,local_16c,acStack_172,local_aa8,0x80), iVar2 == 0))
  goto LAB_1001c06c;
  memset(local_a28,0,0x10);
  local_a28[0] = (code *)recovered_1001c454;
  iVar2 = Ram40010800;
  local_a20 = param_1;
  if ((iVar2 == 0x50414d57) && (iVar2 = Ram40010804, iVar2 != 0)) {
    uVar8 = Ram40010808;
    bVar10 = 0xb < uVar8;
    if (bVar10) {
      uVar8 = Ram40010808;
    }
    if (((bVar10 && 0x4f < uVar8) && (pcVar1 = (code *)UINT_4001084c, pcVar1 != (code *)0x0)) &&
       (ptr = (*pcVar1)(0x2001001), ptr != (byte *)0x0)) {
      vararg5 = winter_js_version();
      pf_varargs_10023fa4__4__4__4__4__4__4_
                (acStack_978,0x200,str_1002303e,1000000,((uintptr_t)pf_module_state + 0x680U),((uintptr_t)pf_module_state + 0x678U),((uintptr_t)pf_module_state + 0x67cU),((uintptr_t)pf_module_state + 0x67cU),
                 (uint)vararg5);
      if (local_168[0] == '\x01') {
        iVar2 = recovered_1000f15c(0,(int)piVar3,local_16c,(uint)uStack_26,acStack_172,(int)vararg1,
                                   acStack_e7,acStack_978,ptr,0x2001001,&local_178,local_aa8,0x80,
                                   recovered_1001c464,local_a28);
      }
      else {
        pf_varargs_10023fa4__4__4__4_
                  (acStack_778,0x600,str_100239c4,(uint)acStack_e7,(uint)vararg1,(uint)acStack_978);
        iVar2 = recovered_1000f670((char *)piVar3,local_16c,(uint)uStack_26,acStack_172,acStack_778,
                                   ptr,0x2001001,&local_178,local_aa8,0x80,recovered_1001c464,
                                   local_a28);
      }
      uVar9 = 0;
      if (iVar2 == 0) goto LAB_1001c344;
      pvVar4 = (void *)recovered_1000f98c((int)ptr);
      if (pvVar4 == (void *)0x0) {
        format = str_10022e50;
LAB_1001c334:
        pf_varargs_10023fa4___(local_aa8,0x80,format);
        uVar9 = 0;
      }
      else {
        format = str_10023a2d;
        uVar8 = local_178 - ((int)pvVar4 - (int)ptr);
        if (local_178 < (uint)((int)pvVar4 - (int)ptr)) {
          uVar8 = 0;
        }
        if ((0x2000000 < uVar8) || (local_178 + 0xfdfff001 < 0xfdfff000)) goto LAB_1001c334;
        bVar10 = recovered_1000f9e4(ptr);
        if (bVar10) {
          local_a18[0] = 0;
          uVar5 = recovered_1000fc4c((int)pvVar4,uVar8,(int)pvVar4,uVar8,(int *)local_a18,local_aa8,
                                     0x80);
          uVar6 = local_a18[0];
          uVar7 = uVar5;
          if (uVar5 == 0) {
            uVar6 = uVar8;
          }
        }
        else {
          uVar5 = 0;
          uVar6 = uVar8;
          uVar7 = 1;
        }
        if (uVar7 != 0) {
          uVar5 = local_a1c;
        }
        if (uVar7 != 0 && uVar6 != uVar5) {
          iVar2 = recovered_1001c550(ptr);
          param_1[0x3f] = uVar6;
          param_1[0x40] = iVar2;
        }
        recovered_1001bc10(acStack_e7,(byte *)local_a18,0xa0);
        recovered_10011fb0(str_1002372d);
        pf_varargs_10023fa4__4_((char *)dst,0x140,str_10023a40,(uint)local_a18);
        recovered_1000fee4((char *)ptr,(undefined1 *)(param_1 + 0xf1));
        uVar9 = 0;
        if (uVar7 != 0) {
          uVar8 = recovered_10012000((char *)dst,pvVar4,uVar6);
          uVar9 = 1;
          if (uVar8 == 0) {
            format = str_10023a4c;
            goto LAB_1001c334;
          }
        }
      }
LAB_1001c344:
      iVar2 = Ram40010800;
      if ((iVar2 == 0x50414d57) && (iVar2 = Ram40010804, iVar2 != 0)) {
        uVar8 = Ram40010808;
        bVar10 = 0xb < uVar8;
        if (bVar10) {
          uVar8 = Ram40010808;
        }
        if ((bVar10 && 0x53 < uVar8) && (pcVar1 = (code *)UINT_40010850, pcVar1 != (code *)0x0)) {
          (*pcVar1)(ptr);
        }
      }
      goto LAB_1001c06c;
    }
  }
  pf_varargs_10023fa4___(local_aa8,0x80,str_100239a5);
LAB_1001c06c:
  *(undefined1 *)((int)param_1 + 0xf2) = uVar9;
  if (*(char *)((int)param_1 + 0xf2) == '\0') {
    if (local_aa8[0] == '\0') {
      vararg0 = str_10023995;
    }
    pf_varargs_10023fa4__4_((char *)(param_1 + 0x109),0x80,&DAT_10022ca6,(uint)vararg0);
  }
  *(undefined1 *)((int)param_1 + 0xf1) = 1;
  return *(undefined1 *)((int)param_1 + 0xf2);
}

#undef DAT_10022ca6
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef Ram40010800
#undef Ram40010804
#undef Ram40010808
#undef UINT_4001084c
#undef UINT_40010850
#undef str_10022e50
#undef str_1002303e
#undef str_1002372d
#undef str_10023995
#undef str_100239a5
#undef str_100239c4
#undef str_10023a2d
#undef str_10023a40
#undef str_10023a4c
#undef local_a1c
#undef local_a18
#undef local_178
#undef local_16c
#undef local_168
#undef acStack_978
#undef acStack_778
#undef acStack_172
#undef acStack_e7
#undef uStack_26
#undef local_aa8
#undef local_a28
#undef local_a20

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001c454
 */

void recovered_1001c454(int param_1,undefined4 param_2,undefined4 param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0xfc) = param_2;
    *(undefined4 *)(param_1 + 0x100) = param_3;
  }
  return;
}


#undef DAT_1002321e
#define DAT_1002321e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7d6U)))
#undef DAT_10023223
#define DAT_10023223 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7dbU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001c464
 */

void recovered_1001c464(undefined4 *param_1,byte *param_2,uint param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  int iVar2;
  int iVar3;

  if (param_2 == (byte *)0x0) {
    pcVar1 = (char *)0x0;
  }
  else {
    pcVar1 = strstr((char *)param_2,&DAT_1002321e);
    if (pcVar1 != (char *)0x0) {
      pcVar1 = pcVar1 + 4;
      goto LAB_1001c4d0;
    }
    pcVar1 = strstr((char *)param_2,&DAT_10023223);
  }
  if (pcVar1 != (char *)0x0) {
    pcVar1 = pcVar1 + 2;
  }
LAB_1001c4d0:
  if (param_1 != (undefined4 *)0x0 && pcVar1 != (char *)0x0) {
    iVar3 = param_3 - ((int)pcVar1 - (int)param_2);
    if (param_3 < (uint)((int)pcVar1 - (int)param_2)) {
      iVar3 = 0;
    }
    if (iVar3 != param_1[3]) {
      param_1[3] = iVar3;
      iVar2 = recovered_1001c550(param_2);
      if ((code *)*param_1 != (code *)0x0) {
        (*(code *)*param_1)(param_1[2],iVar3,iVar2);
      }
      if ((code *)param_1[1] != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x1001c54c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)param_1[1])(param_1[2],pcVar1,iVar3,iVar2);
        return;
      }
    }
  }
  return;
}

#undef DAT_1002321e
#undef DAT_10023223

#undef str_10023a6a
#define str_10023a6a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1022U)))
#undef str_10023a7b
#define str_10023a7b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1033U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001c550
 */

int recovered_1001c550(byte *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  ulong uVar2;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  uint extraout_r1 = 0;
  uint uVar6;
  byte *pbVar7;
  char cVar8;
  ulong uVar9;
  uint uVar10;
  int iVar11;
  bool bVar12;

  iVar11 = 0;
  if (param_1 != (byte *)0x0) {
    uVar2 = strlen(str_10023a6a);
    uVar6 = extraout_r1;
    if (uVar2 != 0) {
      uVar6 = (uint)*param_1;
    }
    if (uVar2 != 0 && uVar6 != 0) {
      pbVar7 = param_1;
      do {
        uVar9 = 0;
        while (uVar6 = (uint)pbVar7[uVar9], uVar6 != 0) {
          uVar10 = (uint)(byte)str_10023a6a[uVar9];
          if (uVar10 - 0x41 < 0x1a) {
            uVar10 = uVar10 | 0x20;
          }
          if (uVar6 - 0x41 < 0x1a) {
            uVar6 = uVar6 | 0x20;
          }
          if (uVar6 != uVar10) break;
          uVar9 = uVar9 + 1;
          if (uVar2 == uVar9) goto LAB_1001c650;
        }
        if (uVar2 == uVar9) {
LAB_1001c650:
          param_1 = pbVar7 + 1;
          goto LAB_1001c654;
        }
        pbVar7 = pbVar7 + 1;
      } while (*pbVar7 != 0);
    }
    uVar6 = 99;
    iVar5 = 0;
    do {
      uVar10 = (uint)param_1[-iVar5];
      if (uVar10 == 0) {
        return 0;
      }
      if (uVar6 - 0x41 < 0x1a) {
        uVar6 = uVar6 | 0x20;
      }
      if (uVar10 - 0x41 < 0x1a) {
        uVar10 = uVar10 | 0x20;
      }
      if (uVar10 != uVar6) {
        return 0;
      }
      bVar12 = iVar5 != -0xe;
      uVar6 = (uint)(byte)str_10023a7b[1 - iVar5];
      iVar5 = iVar5 + -1;
    } while (bVar12);
LAB_1001c654:
    pcVar3 = strchr((char *)param_1,0x3a);
    if (pcVar3 != (char *)0x0) {
      do {
        do {
          pcVar4 = pcVar3;
          pcVar3 = pcVar4 + 1;
          cVar8 = *pcVar3;
        } while (cVar8 == '\t');
      } while (cVar8 == ' ');
      if ((byte)(cVar8 - 0x30U) < 10) {
        iVar11 = 0;
        iVar5 = 2;
        do {
          cVar1 = pcVar4[iVar5];
          iVar5 = iVar5 + 1;
          iVar11 = iVar11 * 10 + (uint)(byte)(cVar8 - 0x30);
          cVar8 = cVar1;
        } while ((byte)(cVar1 - 0x30U) < 10);
      }
    }
  }
  return iVar11;
}

#undef str_10023a6a
#undef str_10023a7b

#undef DAT_1002321e
#define DAT_1002321e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7d6U)))
#undef DAT_10023223
#define DAT_10023223 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7dbU)))
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
#undef UINT_4001083c
#define UINT_4001083c (*(uint *)(0x4001083cU))
#undef UINT_4001084c
#define UINT_4001084c (*(uint *)(0x4001084cU))
#undef UINT_40010850
#define UINT_40010850 (*(uint *)(0x40010850U))
#undef UINT_4001088c
#define UINT_4001088c (*(uint *)(0x4001088cU))
#undef UINT_400108bc
#define UINT_400108bc (*(uint *)(0x400108bcU))
#undef str_10022d82
#define str_10022d82 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x33aU)))
#undef str_10022dba
#define str_10022dba (*(char (*)[1])(((uintptr_t)pf_module_state + 0x372U)))
#undef str_10022e50
#define str_10022e50 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x408U)))
#undef str_1002303e
#define str_1002303e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5f6U)))
#undef str_10023275
#define str_10023275 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x82dU)))
#undef str_10023723
#define str_10023723 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xcdbU)))
#undef str_1002372d
#define str_1002372d (*(char (*)[1])(((uintptr_t)pf_module_state + 0xce5U)))
#undef str_10023abc
#define str_10023abc (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1074U)))
#undef str_10023ad5
#define str_10023ad5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x108dU)))
#define local_984 (*(undefined * *)(frame + 492))
#define acStack_172 (*(char (*)[6])(frame + 2558))
#define local_980 (*(undefined4 *)(frame + 496))
#define local_97c (*(uint *)(frame + 500))
#define local_978 (*(int (*)[128])(frame + 504))
#define acStack_e7 (*(char (*)[193])(frame + 2697))
#define local_778 (*(byte (*)[1536])(frame + 1016))
#define local_178 (*(uint *)(frame + 2552))
#define uStack_26 (*(ushort *)(frame + 2890))
#define local_16c (*(uint *)(frame + 2564))
#define local_168 (*(char (*)[129])(frame + 2568))
#define abStack_a8c (*(byte (*)[256])(frame + 228))
#define local_b58 (*(uint *)(frame + 24))
#define local_b4c (*(char (*)[96])(frame + 36))
#define local_aec (*(char *)(frame + 132))
#define local_aeb (*(char (*)[95])(frame + 133))
#define local_98c (*(uint *)(frame + 484))
#define local_988 (*(undefined * *)(frame + 488))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001c6d0
 */

undefined4
recovered_1001c6d0(int param_1,byte *param_2,char *param_3,undefined *param_4,undefined *param_5,
                  undefined4 param_6)

{
  unsigned char frame[2960] __attribute__((aligned(16))) = {0};

  byte bVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  void *dst;
  char *pcVar5;
  byte *a;
  undefined *vararg5;
  code *pcVar6;
  ulong uVar7;
  uint uVar8;
  byte *pbVar9;
  undefined **ppuVar10;
  uint extraout_r1 = 0;
  uint extraout_r1_00 = 0;
  ulong uVar11;
  uint uVar12;
  uint in_r12;

  if (param_3 == (char *)0x0) {
    return 0;
  }
  *param_3 = '\0';
  if (param_2 != (byte *)0x0) {
    in_r12 = (uint)*param_2;
  }
  if (param_2 == (byte *)0x0 || in_r12 == 0) {
    return 0;
  }
  uVar12 = in_r12;
  if (in_r12 - 0x41 < 0x1a) {
    uVar12 = in_r12 | 0x20;
  }
  if (uVar12 != 0x68) {
    return 0;
  }
  uVar12 = (uint)param_2[1];
  if (uVar12 == 0) {
code_r0x1001c804:
    uVar12 = (uint)param_2[1];
    if (uVar12 == 0) {
      return 0;
    }
    if (uVar12 - 0x41 < 0x1a) {
      uVar12 = uVar12 | 0x20;
    }
    if (uVar12 != 0x74) {
      return 0;
    }
    uVar12 = (uint)param_2[2];
    if (uVar12 == 0) {
      return 0;
    }
    if (uVar12 - 0x41 < 0x1a) {
      uVar12 = uVar12 | 0x20;
    }
    if (uVar12 != 0x74) {
      return 0;
    }
    uVar12 = (uint)param_2[3];
    if (uVar12 == 0) {
      return 0;
    }
    if (uVar12 - 0x41 < 0x1a) {
      uVar12 = uVar12 | 0x20;
    }
    if (uVar12 != 0x70) {
      return 0;
    }
    uVar12 = (uint)param_2[4];
    if (uVar12 == 0) {
      return 0;
    }
    if (uVar12 - 0x41 < 0x1a) {
      uVar12 = uVar12 | 0x20;
    }
    if (uVar12 != 0x73) {
      return 0;
    }
    uVar12 = (uint)param_2[5];
    if (uVar12 == 0) {
      return 0;
    }
    if (uVar12 - 0x41 < 0x1a) {
      uVar12 = uVar12 | 0x20;
    }
    if (uVar12 != 0x3a) {
      return 0;
    }
    uVar12 = (uint)param_2[6];
    if (uVar12 == 0) {
      return 0;
    }
    if (uVar12 - 0x41 < 0x1a) {
      uVar12 = uVar12 | 0x20;
    }
    if (uVar12 != 0x2f) {
      return 0;
    }
    uVar12 = (uint)param_2[7];
    if (uVar12 == 0) {
      return 0;
    }
    if (uVar12 - 0x41 < 0x1a) {
      uVar12 = uVar12 | 0x20;
    }
    if (uVar12 != 0x2f) {
      return 0;
    }
  }
  else {
    if (uVar12 - 0x41 < 0x1a) {
      uVar12 = uVar12 | 0x20;
    }
    if ((uVar12 != 0x74) || (uVar12 = (uint)param_2[2], uVar12 == 0)) goto code_r0x1001c804;
    if (uVar12 - 0x41 < 0x1a) {
      uVar12 = uVar12 | 0x20;
    }
    if ((uVar12 != 0x74) || (uVar12 = (uint)param_2[3], uVar12 == 0)) goto code_r0x1001c804;
    if (uVar12 - 0x41 < 0x1a) {
      uVar12 = uVar12 | 0x20;
    }
    if ((uVar12 != 0x70) || (uVar12 = (uint)param_2[4], uVar12 == 0)) goto code_r0x1001c804;
    if (uVar12 - 0x41 < 0x1a) {
      uVar12 = uVar12 | 0x20;
    }
    if ((uVar12 != 0x3a) || (uVar12 = (uint)param_2[5], uVar12 == 0)) goto code_r0x1001c804;
    if (uVar12 - 0x41 < 0x1a) {
      uVar12 = uVar12 | 0x20;
    }
    if ((uVar12 != 0x2f) || (uVar12 = (uint)param_2[6], uVar12 == 0)) goto code_r0x1001c804;
    if (uVar12 - 0x41 < 0x1a) {
      uVar12 = uVar12 | 0x20;
    }
    if (uVar12 != 0x2f) goto code_r0x1001c804;
  }
  uVar12 = 0;
  while ((in_r12 != 0 && (in_r12 != 0x23 && in_r12 != 0x3f))) {
    in_r12 = (uint)param_2[uVar12 + 1];
    uVar12 = uVar12 + 1;
  }
  if (uVar12 < 4) {
    return 0;
  }
  uVar8 = (uint)param_2[uVar12 - 4];
  if (uVar8 - 0x41 < 0x1a) {
    uVar8 = uVar8 | 0x20;
  }
  if (uVar8 != 0x2e) {
    return 0;
  }
  uVar8 = (uint)param_2[uVar12 - 3];
  if (uVar8 - 0x41 < 0x1a) {
    uVar8 = uVar8 | 0x20;
  }
  if (uVar8 != 0x70) {
    return 0;
  }
  uVar8 = (uint)param_2[uVar12 - 2];
  if (uVar8 - 0x41 < 0x1a) {
    uVar8 = uVar8 | 0x20;
  }
  if (uVar8 != 0x6e) {
    return 0;
  }
  uVar12 = (uint)param_2[uVar12 - 1];
  if (uVar12 - 0x41 < 0x1a) {
    uVar12 = uVar12 | 0x20;
  }
  if (uVar12 != 0x67) {
    return 0;
  }
  iVar4 = recovered_1001d390(param_2,param_3);
  if (iVar4 != 0) {
    local_978[0] = 0;
    local_778[0] = 0;
    bVar3 = recovered_1000d880(param_3,local_978,local_778);
    if ((bVar3) && (iVar4 = recovered_1001d794(local_978[0],local_778), iVar4 != 0)) {
      return 1;
    }
    if ((((local_778[0] != 0) && (iVar4 = Ram40010800, iVar4 == 0x50414d57)) &&
        (iVar4 = Ram40010804, iVar4 != 0)) &&
       (((uVar12 = Ram40010808, 0xb < uVar12 && (uVar12 = Ram40010808, 0x3f < uVar12)) &&
        (pcVar6 = (code *)UINT_4001083c, pcVar6 != (code *)0x0)))) {
      (*pcVar6)((char *)local_778);
    }
    *param_3 = '\0';
  }
  uVar12 = 0x811c9dc5;
  bVar1 = *param_2;
  pbVar9 = param_2;
  while (bVar1 != 0) {
    pbVar9 = pbVar9 + 1;
    uVar12 = (uVar12 ^ bVar1) * 0x1000193;
    bVar1 = *pbVar9;
  }
  pf_varargs_10023fa4__4__4_((char *)abStack_a8c,0x100,str_10023abc,uVar12,((uintptr_t)pf_module_state + 0x1070U));
  iVar4 = Ram40010800;
  if (iVar4 != 0x50414d57) {
    return 0;
  }
  iVar4 = Ram40010804;
  if (iVar4 == 0) {
    return 0;
  }
  uVar12 = Ram40010808;
  if (uVar12 < 0xc) {
    return 0;
  }
  uVar12 = Ram40010808;
  if (uVar12 < 0x50) {
    return 0;
  }
  pcVar6 = (code *)UINT_4001084c;
  if (pcVar6 == (code *)0x0) {
    return 0;
  }
  dst = (*pcVar6)(0x200000);
  if (dst == (void *)0x0) {
    return 0;
  }
  local_b4c[0] = '\0';
  local_16c = 0;
  local_178 = 0;
  local_aec = '\0';
  iVar4 = recovered_1000df3c(param_2,local_168,local_b4c,0x60);
  if (iVar4 == 0) goto LAB_1001cdc0;
  pcVar5 = (char *)(param_1 + 0x205bc8);
  iVar4 = recovered_1000e314(pcVar5,local_b4c,0x60);
  if (iVar4 == 0) goto LAB_1001cdc0;
  pbVar9 = (byte *)((uint)local_168 | 1);
  iVar4 = recovered_1000e6e0(pbVar9,&local_16c);
  if (((iVar4 == 0) &&
      (iVar4 = recovered_1000e870((int)pcVar5,pbVar9,&local_16c,local_b4c,0x60), iVar4 == 0)) ||
     (iVar4 = recovered_1000ed34((int)pcVar5,local_16c,acStack_172,local_b4c,0x60), iVar4 == 0))
  goto LAB_1001cdc0;
  memset(&local_988,0,0x10);
  local_980 = param_6;
  local_984 = param_5;
  iVar4 = Ram40010800;
  local_988 = param_4;
  if (((((iVar4 != 0x50414d57) || (iVar4 = Ram40010804, iVar4 == 0)) ||
       (uVar12 = Ram40010808, uVar12 < 0xc)) ||
      ((uVar12 = Ram40010808, uVar12 < 0x50 ||
       (pcVar6 = (code *)UINT_4001084c, pcVar6 == (code *)0x0)))) ||
     (a = (*pcVar6)(0x201001), a == (byte *)0x0)) {
    pf_varargs_10023fa4___(local_b4c,0x60,str_10022dba);
    goto LAB_1001cdc0;
  }
  vararg5 = winter_js_version();
  pf_varargs_10023fa4__4__4__4__4__4__4_
            ((char *)local_978,0x200,str_1002303e,1000000,((uintptr_t)pf_module_state + 0x680U),((uintptr_t)pf_module_state + 0x678U),((uintptr_t)pf_module_state + 0x67cU),
             ((uintptr_t)pf_module_state + 0x67cU),(uint)vararg5);
  if (local_168[0] == '\x01') {
    pcVar6 = (code *)recovered_1001c464;
    ppuVar10 = &local_988;
    if (param_4 == (undefined *)0x0 && param_5 == (undefined *)0x0) {
      ppuVar10 = (undefined **)0x0;
      pcVar6 = (code *)0x0;
    }
    iVar4 = recovered_1000f15c(param_1,(int)pcVar5,local_16c,(uint)uStack_26,acStack_172,(int)pbVar9
                               ,acStack_e7,(char *)local_978,a,0x201001,&local_178,local_b4c,0x60,
                               pcVar6,ppuVar10);
  }
  else {
    pf_varargs_10023fa4__4__4__4_
              ((char *)local_778,0x600,str_10023ad5,(uint)acStack_e7,(uint)pbVar9,(uint)local_978);
    pcVar6 = (code *)recovered_1001c464;
    ppuVar10 = &local_988;
    if (param_4 == (undefined *)0x0 && param_5 == (undefined *)0x0) {
      ppuVar10 = (undefined **)0x0;
      pcVar6 = (code *)0x0;
    }
    iVar4 = recovered_1000f670(pcVar5,local_16c,(uint)uStack_26,acStack_172,(char *)local_778,a,
                               0x201001,&local_178,local_b4c,0x60,pcVar6,ppuVar10);
  }
  bVar1 = 0;
  local_b58 = 0;
  if (iVar4 != 0) {
    pcVar5 = strstr((char *)a,&DAT_1002321e);
    if (pcVar5 == (char *)0x0) {
      pcVar5 = strstr((char *)a,&DAT_10023223);
      if (pcVar5 != (char *)0x0) {
        pcVar5 = pcVar5 + 2;
        goto LAB_1001cf40;
      }
      pcVar5 = str_10022e50;
LAB_1001d094:
      pf_varargs_10023fa4___(local_b4c,0x60,pcVar5);
LAB_1001d0a0:
      local_b58 = 0;
    }
    else {
      pcVar5 = pcVar5 + 4;
LAB_1001cf40:
      if ((uint)((int)pcVar5 - (int)a) < local_178) {
        local_b58 = local_178 - ((int)pcVar5 - (int)a);
      }
      else {
        local_b58 = strlen(pcVar5);
      }
      bVar3 = recovered_1000f9e4(a);
      if (bVar3) {
        local_98c = 0;
        iVar4 = recovered_1000fc4c((int)pcVar5,local_b58,(int)dst,0x200000,(int *)&local_98c,
                                   local_b4c,0x60);
        uVar12 = local_98c;
        if (iVar4 == 0) goto LAB_1001d0a0;
        uVar8 = extraout_r1_00;
        uVar2 = local_98c;
        if (param_4 != (undefined *)0x0) {
          uVar8 = local_98c;
          uVar2 = local_97c;
        }
        if (param_4 != (undefined *)0x0 && uVar8 != uVar2) {
          iVar4 = recovered_1001c550(a);
          (*(code *)param_4)(param_6,uVar12,iVar4);
        }
        uVar12 = local_98c;
        local_b58 = local_98c;
        if (param_5 != (undefined *)0x0) {
          iVar4 = recovered_1001c550(a);
          (*(code *)param_5)(param_6,dst,uVar12,iVar4);
          local_b58 = local_98c;
        }
      }
      else {
        if (0x200000 < local_b58) {
          pcVar5 = str_10023275;
          goto LAB_1001d094;
        }
        uVar12 = extraout_r1;
        uVar8 = local_b58;
        if (param_4 != (undefined *)0x0) {
          uVar12 = local_b58;
          uVar8 = local_97c;
        }
        if (param_4 != (undefined *)0x0 && uVar12 != uVar8) {
          iVar4 = recovered_1001c550(a);
          (*(code *)param_4)(param_6,local_b58,iVar4);
        }
        memcpy(dst,pcVar5,local_b58);
      }
      recovered_1000fee4((char *)a,&local_aec);
      bVar1 = 1;
    }
  }
  iVar4 = Ram40010800;
  if (((iVar4 == 0x50414d57) && (iVar4 = Ram40010804, iVar4 != 0)) &&
     ((uVar12 = Ram40010808, 0xb < uVar12 &&
      ((uVar12 = Ram40010808, 0x53 < uVar12 &&
       (pcVar6 = (code *)UINT_40010850, pcVar6 != (code *)0x0)))))) {
    (*pcVar6)(a);
  }
  if ((bool)(bVar1 & local_b58 != 0)) {
    if (local_aec != '\0') {
      uVar7 = strlen(str_10023723);
      if (uVar7 != 0) {
        pcVar5 = &local_aec;
        do {
          uVar11 = 0;
          while (uVar12 = (uint)(byte)pcVar5[uVar11], uVar12 != 0) {
            uVar8 = (uint)(byte)str_10023723[uVar11];
            if (uVar8 - 0x41 < 0x1a) {
              uVar8 = uVar8 | 0x20;
            }
            if (uVar12 - 0x41 < 0x1a) {
              uVar12 = uVar12 | 0x20;
            }
            if (uVar12 != uVar8) break;
            uVar11 = uVar11 + 1;
            if (uVar7 == uVar11) goto LAB_1001d1c8;
          }
          if (uVar7 == uVar11) goto LAB_1001d1c8;
          pcVar5 = pcVar5 + 1;
        } while (*pcVar5 != '\0');
      }
      bVar3 = recovered_1001ad90((int)param_2);
      if (!bVar3) goto LAB_1001cdc0;
    }
LAB_1001d1c8:
    iVar4 = Ram40010800;
    if ((((iVar4 == 0x50414d57) && (iVar4 = Ram40010804, iVar4 != 0)) &&
        (uVar12 = Ram40010808, 0xb < uVar12)) &&
       ((uVar12 = Ram40010808, 0x8f < uVar12 &&
        (pcVar6 = (code *)UINT_4001088c, pcVar6 != (code *)0x0)))) {
      (*pcVar6)(str_1002372d);
    }
    iVar4 = Ram40010800;
    if (((iVar4 == 0x50414d57) && (iVar4 = Ram40010804, iVar4 != 0)) &&
       ((uVar12 = Ram40010808, 0xb < uVar12 &&
        (((uVar12 = Ram40010808, 0x3b < uVar12 &&
          (pcVar6 = (code *)UINT_40010838, pcVar6 != (code *)0x0)) &&
         (uVar12 = (*pcVar6)((char *)abStack_a8c,dst,local_b58), uVar12 != 0)))))) {
      uVar12 = 0xffffffff;
      iVar4 = Ram40010800;
      if (((iVar4 == 0x50414d57) && (iVar4 = Ram40010804, iVar4 != 0)) &&
         ((uVar8 = Ram40010808, 0xb < uVar8 &&
          ((uVar8 = Ram40010808, 0xbf < uVar8 &&
           (pcVar6 = (code *)UINT_400108bc, pcVar6 != (code *)0x0)))))) {
        uVar12 = (*pcVar6)();
      }
      iVar4 = recovered_1001d794(uVar12,abStack_a8c);
      if (iVar4 != 0) {
        pf_varargs_10023fa4__4__4_(param_3,0x100,str_10022d82,uVar12,(uint)abStack_a8c);
        recovered_10005e4c(dst);
        return 1;
      }
      recovered_1001d8f8((char *)abStack_a8c);
    }
  }
LAB_1001cdc0:
  iVar4 = Ram40010800;
  if ((((iVar4 == 0x50414d57) && (iVar4 = Ram40010804, iVar4 != 0)) &&
      (uVar12 = Ram40010808, 0xb < uVar12)) &&
     ((uVar12 = Ram40010808, 0x53 < uVar12 &&
      (pcVar6 = (code *)UINT_40010850, pcVar6 != (code *)0x0)))) {
    (*pcVar6)(dst);
  }
  return 0;
}

#undef DAT_1002321e
#undef DAT_10023223
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef Ram40010800
#undef Ram40010804
#undef Ram40010808
#undef UINT_40010838
#undef UINT_4001083c
#undef UINT_4001084c
#undef UINT_40010850
#undef UINT_4001088c
#undef UINT_400108bc
#undef str_10022d82
#undef str_10022dba
#undef str_10022e50
#undef str_1002303e
#undef str_10023275
#undef str_10023723
#undef str_1002372d
#undef str_10023abc
#undef str_10023ad5
#undef local_984
#undef acStack_172
#undef local_980
#undef local_97c
#undef local_978
#undef acStack_e7
#undef local_778
#undef local_178
#undef uStack_26
#undef local_16c
#undef local_168
#undef abStack_a8c
#undef local_b58
#undef local_b4c
#undef local_aec
#undef local_aeb
#undef local_98c
#undef local_988

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
#undef UINT_400108bc
#define UINT_400108bc (*(uint *)(0x400108bcU))
#undef str_10022d82
#define str_10022d82 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x33aU)))
#undef str_10023abc
#define str_10023abc (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1074U)))
#define local_128 (*(int *)(frame + 24))
#define acStack_11c (*(char (*)[256])(frame + 36))
#define local_124 (*(int *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001d390
 */

undefined4 recovered_1001d390(byte *param_1,char *param_2)

{
  unsigned char frame[352] __attribute__((aligned(16))) = {0};

  int iVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  uint uVar6;
  bool bVar7;

  if (param_2 == (char *)0x0) {
    return 0;
  }
  *param_2 = '\0';
  if (param_1 == (byte *)0x0) {
    return 0;
  }
  uVar6 = (uint)*param_1;
  if (uVar6 == 0) {
    return 0;
  }
  uVar3 = uVar6;
  if (uVar6 - 0x41 < 0x1a) {
    uVar3 = uVar6 | 0x20;
  }
  if (uVar3 != 0x68) {
    return 0;
  }
  uVar3 = (uint)param_1[1];
  if (uVar3 != 0) {
    if (uVar3 - 0x41 < 0x1a) {
      uVar3 = uVar3 | 0x20;
    }
    if ((uVar3 == 0x74) && (uVar3 = (uint)param_1[2], uVar3 != 0)) {
      if (uVar3 - 0x41 < 0x1a) {
        uVar3 = uVar3 | 0x20;
      }
      if ((uVar3 == 0x74) && (uVar3 = (uint)param_1[3], uVar3 != 0)) {
        if (uVar3 - 0x41 < 0x1a) {
          uVar3 = uVar3 | 0x20;
        }
        if ((uVar3 == 0x70) && (uVar3 = (uint)param_1[4], uVar3 != 0)) {
          if (uVar3 - 0x41 < 0x1a) {
            uVar3 = uVar3 | 0x20;
          }
          if ((uVar3 == 0x3a) && (uVar3 = (uint)param_1[5], uVar3 != 0)) {
            if (uVar3 - 0x41 < 0x1a) {
              uVar3 = uVar3 | 0x20;
            }
            if ((uVar3 == 0x2f) && (uVar3 = (uint)param_1[6], uVar3 != 0)) {
              if (uVar3 - 0x41 < 0x1a) {
                uVar3 = uVar3 | 0x20;
              }
              if (uVar3 == 0x2f) goto LAB_1001d4a0;
            }
          }
        }
      }
    }
  }
  uVar3 = (uint)param_1[1];
  if (uVar3 == 0) {
    return 0;
  }
  if (uVar3 - 0x41 < 0x1a) {
    uVar3 = uVar3 | 0x20;
  }
  if (uVar3 != 0x74) {
    return 0;
  }
  uVar3 = (uint)param_1[2];
  if (uVar3 == 0) {
    return 0;
  }
  if (uVar3 - 0x41 < 0x1a) {
    uVar3 = uVar3 | 0x20;
  }
  if (uVar3 != 0x74) {
    return 0;
  }
  uVar3 = (uint)param_1[3];
  if (uVar3 == 0) {
    return 0;
  }
  if (uVar3 - 0x41 < 0x1a) {
    uVar3 = uVar3 | 0x20;
  }
  if (uVar3 != 0x70) {
    return 0;
  }
  uVar3 = (uint)param_1[4];
  if (uVar3 == 0) {
    return 0;
  }
  if (uVar3 - 0x41 < 0x1a) {
    uVar3 = uVar3 | 0x20;
  }
  if (uVar3 != 0x73) {
    return 0;
  }
  uVar3 = (uint)param_1[5];
  if (uVar3 == 0) {
    return 0;
  }
  if (uVar3 - 0x41 < 0x1a) {
    uVar3 = uVar3 | 0x20;
  }
  if (uVar3 != 0x3a) {
    return 0;
  }
  uVar3 = (uint)param_1[6];
  if (uVar3 == 0) {
    return 0;
  }
  if (uVar3 - 0x41 < 0x1a) {
    uVar3 = uVar3 | 0x20;
  }
  if (uVar3 != 0x2f) {
    return 0;
  }
  uVar3 = (uint)param_1[7];
  if (uVar3 == 0) {
    return 0;
  }
  if (uVar3 - 0x41 < 0x1a) {
    uVar3 = uVar3 | 0x20;
  }
  if (uVar3 != 0x2f) {
    return 0;
  }
LAB_1001d4a0:
  uVar4 = 0;
  uVar3 = uVar6;
  while ((uVar3 != 0 && (uVar3 != 0x23 && uVar3 != 0x3f))) {
    pbVar5 = param_1 + 1 + uVar4;
    uVar4 = uVar4 + 1;
    uVar3 = (uint)*pbVar5;
  }
  if (uVar4 < 4) {
    return 0;
  }
  uVar3 = (uint)param_1[uVar4 - 4];
  if (uVar3 - 0x41 < 0x1a) {
    uVar3 = uVar3 | 0x20;
  }
  if (uVar3 == 0x2e) {
    uVar3 = (uint)param_1[uVar4 - 3];
    if (uVar3 - 0x41 < 0x1a) {
      uVar3 = uVar3 | 0x20;
    }
    if (uVar3 == 0x70) {
      uVar3 = (uint)param_1[uVar4 - 2];
      if (uVar3 - 0x41 < 0x1a) {
        uVar3 = uVar3 | 0x20;
      }
      if (uVar3 == 0x6e) {
        uVar3 = (uint)param_1[uVar4 - 1];
        if (uVar3 - 0x41 < 0x1a) {
          uVar3 = uVar3 | 0x20;
        }
        if (uVar3 != 0x67) {
          return 0;
        }
        uVar3 = 0x811c9dc5;
        pbVar5 = param_1 + 1;
        do {
          uVar3 = uVar3 ^ uVar6;
          uVar6 = (uint)*pbVar5;
          uVar3 = uVar3 * 0x1000193;
          pbVar5 = pbVar5 + 1;
        } while (uVar6 != 0);
        pf_varargs_10023fa4__4__4_(acStack_11c,0x100,str_10023abc,uVar3,((uintptr_t)pf_module_state + 0x1070U));
        memset(&local_128,0,0xc);
        iVar1 = Ram40010800;
        if ((((iVar1 == 0x50414d57) && (iVar1 = Ram40010804, iVar1 != 0)) &&
            (uVar6 = Ram40010808, 0xb < uVar6)) &&
           ((uVar6 = Ram40010808, 0x37 < uVar6 &&
            (pcVar2 = (code *)UINT_40010834, pcVar2 != (code *)0x0)))) {
          uVar6 = (*pcVar2)(acStack_11c,&local_128);
          if ((uVar6 != 0) && (local_128 != 0)) {
            if (local_124 == 0) {
              return 0;
            }
            iVar1 = Ram40010800;
            uVar6 = 0xffffffff;
            if ((iVar1 == 0x50414d57) && (iVar1 = Ram40010804, iVar1 != 0)) {
              uVar3 = Ram40010808;
              bVar7 = 0xb < uVar3;
              if (bVar7) {
                uVar3 = Ram40010808;
              }
              if ((bVar7 && 0xbf < uVar3) && (pcVar2 = (code *)UINT_400108bc, pcVar2 != (code *)0x0)
                 ) {
                uVar6 = (*pcVar2)();
              }
            }
            pf_varargs_10023fa4__4__4_(param_2,0x100,str_10022d82,uVar6,(uint)acStack_11c);
            return 1;
          }
        }
      }
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
#undef UINT_400108bc
#undef str_10022d82
#undef str_10023abc
#undef local_128
#undef acStack_11c
#undef local_124

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
#define local_34 (*(void * *)(frame + 28))
#define local_30 (*(int *)(frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001d794
 */

undefined4 recovered_1001d794(int param_1,byte *param_2)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  int iVar1;
  code *pcVar2;
  void *pvVar3;
  uint uVar4;
  undefined4 uVar5;
  bool bVar6;
  bool bVar7;

  uVar5 = 0;
  pvVar3 = memset(&local_34,0,0x18);
  if (param_2 != (byte *)0x0) {
    pvVar3 = (void *)(uint)*param_2;
  }
  if (param_2 == (byte *)0x0 || pvVar3 == (void *)0x0) {
    return 0;
  }
  iVar1 = Ram40010800;
  if ((iVar1 == 0x50414d57) && (iVar1 = Ram40010804, iVar1 != 0)) {
    uVar4 = Ram40010808;
    bVar7 = 0xb < uVar4;
    bVar6 = uVar4 == 0xc;
    if (bVar7) {
      uVar4 = Ram40010808;
      bVar6 = uVar4 == 0xe3;
    }
    if ((bVar7 && 0xe2 < uVar4) && !bVar6) {
      pcVar2 = (code *)UINT_400108e0;
      if (pcVar2 == (code *)0x0) {
        return 0;
      }
      uVar4 = (*pcVar2)(param_1,(char *)param_2,&local_34);
      goto LAB_1001d880;
    }
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
  bVar6 = uVar4 < 0xc;
  if (!bVar6) {
    uVar4 = Ram40010808;
  }
  if (bVar6 || uVar4 < 0x5c) {
    return 0;
  }
  pcVar2 = (code *)UINT_40010858;
  if (pcVar2 == (code *)0x0) {
    return 0;
  }
  uVar4 = (*pcVar2)((char *)param_2,&local_34);
LAB_1001d880:
  if (uVar4 != 0) {
    if ((((local_30 == 0) && (local_34 != (void *)0x0)) &&
        (iVar1 = Ram40010800, iVar1 == 0x50414d57)) && (iVar1 = Ram40010804, iVar1 != 0)) {
      uVar4 = Ram40010808;
      bVar6 = 0xb < uVar4;
      if (bVar6) {
        uVar4 = Ram40010808;
      }
      if ((bVar6 && 0x53 < uVar4) && (pcVar2 = (code *)UINT_40010850, pcVar2 != (code *)0x0)) {
        (*pcVar2)(local_34);
      }
    }
    memset(&local_34,0,0x18);
    uVar5 = 1;
  }
  return uVar5;
}

#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef Ram40010800
#undef Ram40010804
#undef Ram40010808
#undef UINT_40010850
#undef UINT_40010858
#undef UINT_400108e0
#undef local_34
#undef local_30

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
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001d8f8
 */

void recovered_1001d8f8(char *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

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
    if ((bVar3 && 0x3f < uVar1) &&
       (UNRECOVERED_JUMPTABLE = (code *)UINT_4001083c, UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x1001d944. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_1);
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

#undef DAT_10022ca6
#define DAT_10022ca6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x25eU)))
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
#undef str_10023463
#define str_10023463 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa1bU)))
#undef str_10023c42
#define str_10023c42 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x11faU)))
#undef str_10023c4d
#define str_10023c4d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1205U)))
#undef str_10023c57
#define str_10023c57 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x120fU)))
#define local_328 (*(uint *)(frame + 24))
#define local_31c (*(undefined4 *)(frame + 36))
#define local_318 (*(undefined4 *)(frame + 40))
#define local_314 (*(undefined4 *)(frame + 44))
#define local_310 (*(undefined1 *)(frame + 48))
#define local_30f (*(undefined1 *)(frame + 49))
#define local_30e (*(undefined1 *)(frame + 50))
#define local_303 (*(char (*)[219])(frame + 61))
#define local_228 (*(int *)(frame + 280))
#define local_224 (*(char (*)[252])(frame + 284))
#define local_128 (*(byte (*)[9])(frame + 536))
#define local_11f (*(byte *)(frame + 545))
#define local_11e (*(byte *)(frame + 546))
#define local_11d (*(byte *)(frame + 547))
#define iStack_324 (*(int *)(frame + 28))
#define uStack_320 (*(undefined4 *)(frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001d948
 */

void recovered_1001d948(uint param_1,int param_2,char *param_3,undefined4 param_4,undefined4 param_5
                       ,undefined4 param_6,undefined4 param_7,undefined1 param_8,undefined1 param_9,
                       byte *param_10)

{
  unsigned char frame[864] __attribute__((aligned(16))) = {0};

  byte bVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  byte *pbVar7;
  uint uVar8;
  char *pcVar9;
  char *dst;
  byte *pbVar10;

  if (param_3 == (char *)0x0) {
    return;
  }
  if (*param_3 == '\0') {
    return;
  }
  recovered_1000c270(param_2,(byte *)param_3,(char *)(local_128 + 4));
  uVar4 = (uint)local_128[4];
  if (uVar4 == 0) {
    return;
  }
  uVar8 = uVar4;
  if (uVar4 - 0x41 < 0x1a) {
    uVar8 = uVar4 | 0x20;
  }
  if (uVar8 != 0x68) {
    return;
  }
  uVar8 = (uint)local_128[5];
  if (uVar8 == 0) {
code_r0x1001da88:
    uVar8 = (uint)local_128[5];
    if (uVar8 == 0) {
      return;
    }
    if (uVar8 - 0x41 < 0x1a) {
      uVar8 = uVar8 | 0x20;
    }
    if (uVar8 != 0x74) {
      return;
    }
    uVar8 = (uint)local_128[6];
    if (uVar8 == 0) {
      return;
    }
    if (uVar8 - 0x41 < 0x1a) {
      uVar8 = uVar8 | 0x20;
    }
    if (uVar8 != 0x74) {
      return;
    }
    uVar8 = (uint)local_128[7];
    if (uVar8 == 0) {
      return;
    }
    if (uVar8 - 0x41 < 0x1a) {
      uVar8 = uVar8 | 0x20;
    }
    if (uVar8 != 0x70) {
      return;
    }
    uVar8 = (uint)local_128[8];
    if (uVar8 == 0) {
      return;
    }
    if (uVar8 - 0x41 < 0x1a) {
      uVar8 = uVar8 | 0x20;
    }
    if (uVar8 != 0x73) {
      return;
    }
    uVar8 = (uint)local_11f;
    if (uVar8 == 0) {
      return;
    }
    if (uVar8 - 0x41 < 0x1a) {
      uVar8 = uVar8 | 0x20;
    }
    if (uVar8 != 0x3a) {
      return;
    }
    uVar8 = (uint)local_11e;
    if (uVar8 == 0) {
      return;
    }
    if (uVar8 - 0x41 < 0x1a) {
      uVar8 = uVar8 | 0x20;
    }
    if (uVar8 != 0x2f) {
      return;
    }
    uVar8 = (uint)local_11d;
    if (uVar8 == 0) {
      return;
    }
    if (uVar8 - 0x41 < 0x1a) {
      uVar8 = uVar8 | 0x20;
    }
    if (uVar8 != 0x2f) {
      return;
    }
  }
  else {
    if (uVar8 - 0x41 < 0x1a) {
      uVar8 = uVar8 | 0x20;
    }
    if ((uVar8 != 0x74) || (uVar8 = (uint)local_128[6], uVar8 == 0)) goto code_r0x1001da88;
    if (uVar8 - 0x41 < 0x1a) {
      uVar8 = uVar8 | 0x20;
    }
    if ((uVar8 != 0x74) || (uVar8 = (uint)local_128[7], uVar8 == 0)) goto code_r0x1001da88;
    if (uVar8 - 0x41 < 0x1a) {
      uVar8 = uVar8 | 0x20;
    }
    if ((uVar8 != 0x70) || (uVar8 = (uint)local_128[8], uVar8 == 0)) goto code_r0x1001da88;
    if (uVar8 - 0x41 < 0x1a) {
      uVar8 = uVar8 | 0x20;
    }
    if ((uVar8 != 0x3a) || (uVar8 = (uint)local_11f, uVar8 == 0)) goto code_r0x1001da88;
    if (uVar8 - 0x41 < 0x1a) {
      uVar8 = uVar8 | 0x20;
    }
    if ((uVar8 != 0x2f) || (uVar8 = (uint)local_11e, uVar8 == 0)) goto code_r0x1001da88;
    if (uVar8 - 0x41 < 0x1a) {
      uVar8 = uVar8 | 0x20;
    }
    if (uVar8 != 0x2f) goto code_r0x1001da88;
  }
  uVar8 = 0;
  while ((uVar4 != 0 && (uVar4 != 0x23 && uVar4 != 0x3f))) {
    uVar4 = (uint)local_128[uVar8 + 5];
    uVar8 = uVar8 + 1;
  }
  if (uVar8 < 4) {
    return;
  }
  uVar4 = (uint)local_128[uVar8];
  if (uVar4 - 0x41 < 0x1a) {
    uVar4 = uVar4 | 0x20;
  }
  if (uVar4 != 0x2e) {
    return;
  }
  uVar4 = (uint)local_128[uVar8 + 1];
  if (uVar4 - 0x41 < 0x1a) {
    uVar4 = uVar4 | 0x20;
  }
  if (uVar4 != 0x70) {
    return;
  }
  uVar4 = (uint)local_128[uVar8 + 2];
  if (uVar4 - 0x41 < 0x1a) {
    uVar4 = uVar4 | 0x20;
  }
  if (uVar4 != 0x6e) {
    return;
  }
  uVar4 = (uint)local_128[uVar8 + 3];
  if (uVar4 - 0x41 < 0x1a) {
    uVar4 = uVar4 | 0x20;
  }
  if (uVar4 != 0x67) {
    return;
  }
  pbVar10 = local_128 + 4;
  iVar5 = recovered_1001d390(pbVar10,local_224);
  if (iVar5 != 0) {
    local_228 = 0;
    local_328 = local_328 & 0xffffff00;
    bVar3 = recovered_1000d880(local_224,&local_228,(byte *)&local_328);
    if ((bVar3) && (iVar5 = recovered_1001d794(local_228,(byte *)&local_328), iVar5 != 0)) {
      return;
    }
    if ((((char)local_328 != '\0') && (iVar5 = Ram40010800, iVar5 == 0x50414d57)) &&
       (iVar5 = Ram40010804, iVar5 != 0)) {
      uVar4 = Ram40010808;
      bVar3 = 0xb < uVar4;
      if (bVar3) {
        uVar4 = Ram40010808;
      }
      if ((bVar3 && 0x3f < uVar4) && (pcVar2 = (code *)UINT_4001083c, pcVar2 != (code *)0x0)) {
        (*pcVar2)((char *)&local_328);
      }
    }
    local_224[0] = '\0';
  }
  memset(&local_328,0,0x88);
  local_30f = param_9;
  local_314 = param_7;
  local_318 = param_6;
  local_31c = param_5;
  puVar6 = &local_328;
  dst = local_303;
  local_30e = param_8;
  local_310 = param_8;
  if (param_10 != (byte *)0x0) {
    puVar6 = (uint *)(uint)*param_10;
  }
  local_328 = param_1;
  iStack_324 = param_2;
  uStack_320 = param_4;
  if (param_10 == (byte *)0x0 || puVar6 == (uint *)0x0) {
    pbVar7 = local_128 + 5;
    do {
      bVar1 = pbVar7[-1];
      if (bVar1 == 0x2f || bVar1 == 0x5c) {
        pbVar10 = pbVar7;
      }
      else if (bVar1 == 0) goto LAB_1001dd28;
      pbVar7 = pbVar7 + 1;
    } while( true );
  }
LAB_1001dd34:
  pf_varargs_10023fa4__4_(dst,0x60,&DAT_10022ca6,(uint)param_10);
  pcVar9 = dst;
  if (local_303[0] == '\0') {
    pcVar9 = str_10023463;
  }
LAB_1001dd70:
  pf_varargs_10023fa4__4_((char *)(param_2 + 0x141),0xc0,str_10023c42,(uint)pcVar9);
  recovered_10006090((void *)param_1);
  iVar5 = recovered_1001c6d0(param_1,local_128 + 4,local_224,recovered_1001de34,recovered_1001e2c4,
                             &local_328);
  pcVar9 = str_10023c57;
  if (iVar5 != 0) {
    pcVar9 = str_10023c4d;
  }
  if (local_303[0] == '\0') {
    dst = str_10023463;
  }
  pf_varargs_10023fa4__4_((char *)(param_2 + 0x141),0xc0,pcVar9,(uint)dst);
  recovered_10006090((void *)param_1);
  return;
LAB_1001dd28:
  param_10 = pbVar10;
  if (pbVar10 == (byte *)0x0) {
    local_303[0] = '\0';
    pcVar9 = str_10023463;
    goto LAB_1001dd70;
  }
  goto LAB_1001dd34;
}

#undef DAT_10022ca6
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef Ram40010800
#undef Ram40010804
#undef Ram40010808
#undef UINT_4001083c
#undef str_10023463
#undef str_10023c42
#undef str_10023c4d
#undef str_10023c57
#undef local_328
#undef local_31c
#undef local_318
#undef local_314
#undef local_310
#undef local_30f
#undef local_30e
#undef local_303
#undef local_228
#undef local_224
#undef local_128
#undef local_11f
#undef local_11e
#undef local_11d
#undef iStack_324
#undef uStack_320

#undef DAT_10024114
#define DAT_10024114 (*(uint *)(((uintptr_t)pf_module_state + 0x16ccU)))
#undef DAT_10024118
#define DAT_10024118 (*(uint *)(((uintptr_t)pf_module_state + 0x16d0U)))
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
#undef UINT_40010918
#define UINT_40010918 (*(uint *)(0x40010918U))
#undef str_10022bde
#define str_10022bde (*(char (*)[1])(((uintptr_t)pf_module_state + 0x196U)))
#undef str_10023463
#define str_10023463 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa1bU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001de34
 */

void recovered_1001de34(int *param_1,uint param_2,uint param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  code *pcVar1;
  undefined8 *puVar2;
  uint uVar3;
  void *window;
  undefined8 *puVar4;
  char *pcVar5;
  int iVar6;
  uint uVar7;
  uint *puVar8;
  int iVar9;
  uint uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  int iVar14;
  int iVar15;
  bool bVar16;

  if (param_1 == (int *)0x0) {
    return;
  }
  iVar14 = param_1[1];
  puVar13 = (undefined8 *)0x0;
  if (iVar14 == 0) {
LAB_1001df10:
    iVar6 = 0;
    iVar15 = 0;
    puVar12 = (undefined8 *)0x0;
  }
  else {
    uVar10 = param_1[2];
    puVar2 = (undefined8 *)param_1[3];
    if ((char)param_1[6] == '\0') {
      iVar6 = 0;
      if (*(char *)((int)param_1 + 0x19) == '\0') {
        iVar6 = *(int *)(iVar14 + 0x544b8);
      }
      puVar2 = (undefined8 *)((int)puVar2 + (0x48 - iVar6));
    }
    iVar6 = (int)puVar2 + param_1[5];
    if ((int)puVar2 < 0x49) {
      puVar2 = (undefined8 *)0x48;
    }
    uVar7 = DAT_10024114;
    if ((int)(param_1[4] + uVar10) < (int)DAT_10024114) {
      uVar7 = param_1[4] + uVar10;
    }
    iVar9 = DAT_10024118 - 0x16;
    if (iVar6 < (int)(DAT_10024118 - 0x16)) {
      iVar9 = iVar6;
    }
    puVar4 = (undefined8 *)(uVar10 & ~((int)uVar10 >> 0x1f));
    if ((int)uVar7 <= (int)puVar4) goto LAB_1001df10;
    iVar6 = 0;
    iVar15 = 0;
    puVar12 = (undefined8 *)0x0;
    if ((int)puVar2 < iVar9) {
      iVar15 = iVar9 - (int)puVar2;
      iVar6 = uVar7 - (int)puVar4;
      puVar12 = puVar2;
      puVar13 = puVar4;
    }
  }
  puVar2 = (undefined8 *)*param_1;
  if (puVar2 == (undefined8 *)0x0) {
    return;
  }
  if (param_2 == 0 || iVar14 == 0) {
    return;
  }
  bVar16 = SBORROW4(iVar6,0x15);
  iVar9 = iVar6 + -0x15;
  if (0x14 < iVar6) {
    bVar16 = SBORROW4(iVar15,0x19);
    iVar9 = iVar15 + -0x19;
  }
  if (iVar9 < 0 != bVar16) {
    return;
  }
  uVar7 = iVar6 - 0x12;
  uVar10 = param_3;
  if (param_3 < param_2) {
    uVar10 = 0x200000;
  }
  uVar3 = recovered_10003950(uVar7 * param_2,uVar10);
  if (uVar7 * param_2 < uVar10) {
    uVar3 = 1;
  }
  if (uVar7 <= uVar3) {
    uVar3 = uVar7;
  }
  if ((param_1[7] == 0) || (uVar3 != param_1[7])) {
    recovered_1001e6d0(puVar2,puVar13,puVar12,iVar6,iVar15,0xe8ecefff);
    puVar2 = (undefined8 *)*param_1;
    recovered_1001e6d0(puVar2,puVar13,puVar12,iVar6,1,0x7a848eff);
    recovered_1001e6d0(puVar2,puVar13,(undefined8 *)((int)puVar12 + iVar15 + -1),iVar6,1,0x7a848eff)
    ;
    recovered_1001e6d0(puVar2,puVar13,puVar12,1,iVar15,0x7a848eff);
    recovered_1001e6d0(puVar2,(undefined8 *)((int)puVar13 + iVar6 + -1),puVar12,1,iVar15,0x7a848eff)
    ;
    pcVar5 = str_10023463;
    if (*(char *)((int)param_1 + 0x25) != '\0') {
      pcVar5 = (char *)((int)param_1 + 0x25);
    }
    recovered_1001eca0(*param_1,(int)puVar13 + 10,(int)puVar12 + 0xc,pcVar5,1,0x444a52ff);
    puVar11 = (undefined8 *)*param_1;
    puVar4 = puVar13 + 1;
    puVar2 = (undefined8 *)((int)puVar12 + iVar15 + -0x11);
    recovered_1001e6d0(puVar11,puVar4,puVar2,iVar6 + -0x10,1,0x7a848eff);
    recovered_1001e6d0(puVar11,puVar4,(undefined8 *)((int)puVar12 + iVar15 + -10),iVar6 + -0x10,1,
                       0x7a848eff);
    recovered_1001e6d0(puVar11,puVar4,puVar2,1,8,0x7a848eff);
    recovered_1001e6d0(puVar11,(undefined8 *)((int)puVar13 + iVar6 + -9),puVar2,1,8,0x7a848eff);
    recovered_1001e6d0((undefined8 *)*param_1,(undefined8 *)((int)puVar13 + 9),
                       (undefined8 *)((int)puVar12 + iVar15 + -0x10),uVar3,6,0x2a6cb8ff);
    puVar2 = (undefined8 *)*param_1;
    iVar14 = param_1[1];
    param_1[7] = uVar3;
  }
  recovered_1001f020((int)puVar2,iVar14,(char *)((int)param_1 + 0x25),param_2,param_3);
  recovered_1001f1ac(*param_1,param_1[1]);
  window = (void *)*param_1;
  if (window == (void *)0x0) {
    window = (void *)0x0;
    goto LAB_1001e258;
  }
  puVar8 = (uint *)((int)window + 0x57d4);
  uVar10 = *puVar8;
  if (uVar10 == 0) goto LAB_1001e258;
  iVar14 = Ram40010800;
  if ((iVar14 == 0x50414d57) && (iVar14 = Ram40010804, iVar14 != 0)) {
    uVar7 = Ram40010808;
    bVar16 = 0xb < uVar7;
    if (bVar16) {
      uVar7 = Ram40010808;
    }
    if (((!bVar16 || uVar7 < 0x11c) || (pcVar1 = (code *)UINT_40010918, pcVar1 == (code *)0x0)) ||
       (uVar10 = (*pcVar1)((void *)((int)window + 0x3d4),uVar10), uVar10 == 0)) goto LAB_1001e23c;
  }
  else {
LAB_1001e23c:
    *(undefined1 *)((int)window + 0x57d8) = 0;
  }
  window = (void *)*param_1;
  *puVar8 = 0;
LAB_1001e258:
  terror_ui_window_present(window,str_10022bde,*(void **)((int)window + 0x340),DAT_10024114,DAT_10024118,
                     DAT_10024114 << 2,0xffffff);
  return;
}

#undef DAT_10024114
#undef DAT_10024118
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef Ram40010800
#undef Ram40010804
#undef Ram40010808
#undef UINT_40010918
#undef str_10022bde
#undef str_10023463

#undef DAT_10024114
#define DAT_10024114 (*(uint *)(((uintptr_t)pf_module_state + 0x16ccU)))
#undef DAT_10024118
#define DAT_10024118 (*(uint *)(((uintptr_t)pf_module_state + 0x16d0U)))
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
#undef UINT_4001085c
#define UINT_4001085c (*(uint *)(0x4001085cU))
#undef UINT_40010918
#define UINT_40010918 (*(uint *)(0x40010918U))
#undef str_10022bde
#define str_10022bde (*(char (*)[1])(((uintptr_t)pf_module_state + 0x196U)))
#define local_3c (*(uint *)(frame + 20))
#define local_38 (*(void * *)(frame + 24))
#define local_34 (*(int *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001e2c4
 */

void recovered_1001e2c4(int *param_1,void *param_2,uint param_3,uint param_4)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  code *pcVar1;
  uint uVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  void *window;
  uint uVar8;
  uint uVar9;
  int iVar10;
  bool bVar11;

  if (param_1 == (int *)0x0) {
    return;
  }
  iVar10 = param_1[1];
  local_3c = 0;
  if (iVar10 == 0) {
LAB_1001e398:
    uVar7 = 0;
    uVar9 = 0;
    iVar6 = 0;
  }
  else {
    uVar7 = param_1[2];
    iVar5 = param_1[3];
    if ((char)param_1[6] == '\0') {
      iVar6 = 0;
      if (*(char *)((int)param_1 + 0x19) == '\0') {
        iVar6 = *(int *)(iVar10 + 0x544b8);
      }
      iVar5 = (iVar5 + 0x48) - iVar6;
    }
    iVar6 = iVar5 + param_1[5];
    if (iVar5 < 0x49) {
      iVar5 = 0x48;
    }
    uVar8 = uVar7 & ~((int)uVar7 >> 0x1f);
    uVar2 = DAT_10024114;
    if ((int)(param_1[4] + uVar7) < (int)DAT_10024114) {
      uVar2 = param_1[4] + uVar7;
    }
    iVar4 = DAT_10024118 - 0x16;
    if (iVar6 < (int)(DAT_10024118 - 0x16)) {
      iVar4 = iVar6;
    }
    if ((int)uVar2 <= (int)uVar8) goto LAB_1001e398;
    uVar7 = 0;
    uVar9 = 0;
    iVar6 = 0;
    if (iVar5 < iVar4) {
      uVar9 = iVar4 - iVar5;
      uVar7 = uVar2 - uVar8;
      iVar6 = iVar5;
      local_3c = uVar8;
    }
  }
  if (*param_1 == 0 || param_2 == (void *)0x0) {
    return;
  }
  if (param_3 == 0 || iVar10 == 0) {
    return;
  }
  uVar2 = uVar7;
  if (0 < (int)uVar7) {
    uVar2 = uVar9;
  }
  if ((int)uVar2 < 1) {
    return;
  }
  if ((param_3 <= param_4 - 1) && ((*(byte *)(param_1 + 9) & 1) != 0)) {
    return;
  }
  if ((((param_3 < param_4) || (param_4 == 0)) && (param_1[8] != 0)) &&
     (param_3 - param_1[8] < 0x20000)) {
    return;
  }
  param_1[8] = param_3;
  memset(&local_38,0,0x18);
  iVar10 = Ram40010800;
  if (iVar10 != 0x50414d57) {
    return;
  }
  iVar10 = Ram40010804;
  if (iVar10 == 0) {
    return;
  }
  uVar2 = Ram40010808;
  bVar11 = uVar2 < 0xc;
  if (!bVar11) {
    uVar2 = Ram40010808;
  }
  if (bVar11 || uVar2 < 0x60) {
    return;
  }
  pcVar1 = (code *)UINT_4001085c;
  if (pcVar1 == (code *)0x0) {
    return;
  }
  uVar2 = (*pcVar1)(param_2,param_3,&local_38);
  if (uVar2 == 0) {
    return;
  }
  recovered_1001f6a4(*param_1);
  if (*(char *)((int)param_1 + 0x1a) == '\x01') {
    recovered_10020018(*param_1,(int *)&local_38,local_3c,iVar6,uVar7,uVar9);
    recovered_10020354(*param_1,param_1[1]);
  }
  else {
    recovered_10020e98(*param_1,param_1[1],(undefined8 *)0x0,(undefined8 *)0x48,DAT_10024114,
                       DAT_10024118 - 0x5e);
    recovered_10020354(*param_1,param_1[1]);
    recovered_100212e4(*param_1,(int *)&local_38,local_3c,iVar6,uVar7,uVar9);
  }
  if (((local_34 == 0) && (local_38 != (void *)0x0)) &&
     ((iVar10 = Ram40010800, iVar10 == 0x50414d57 && (iVar10 = Ram40010804, iVar10 != 0)))) {
    uVar7 = Ram40010808;
    bVar11 = 0xb < uVar7;
    if (bVar11) {
      uVar7 = Ram40010808;
    }
    if ((bVar11 && 0x53 < uVar7) && (pcVar1 = (code *)UINT_40010850, pcVar1 != (code *)0x0)) {
      (*pcVar1)(local_38);
    }
  }
  memset(&local_38,0,0x18);
  *(undefined1 *)(param_1 + 9) = 1;
  recovered_1001f020(*param_1,param_1[1],(char *)((int)param_1 + 0x25),param_3,param_4);
  recovered_1001f1ac(*param_1,param_1[1]);
  pvVar3 = (void *)*param_1;
  window = (void *)0x0;
  if (pvVar3 == (void *)0x0) goto LAB_1001e650;
  uVar7 = *(uint *)((int)pvVar3 + 0x57d4);
  if (uVar7 == 0) {
    window = pvVar3;
    goto LAB_1001e650;
  }
  iVar10 = Ram40010800;
  if ((iVar10 == 0x50414d57) && (iVar10 = Ram40010804, iVar10 != 0)) {
    uVar2 = Ram40010808;
    bVar11 = 0xb < uVar2;
    if (bVar11) {
      uVar2 = Ram40010808;
    }
    if (((!bVar11 || uVar2 < 0x11c) || (pcVar1 = (code *)UINT_40010918, pcVar1 == (code *)0x0)) ||
       (uVar7 = (*pcVar1)((void *)((int)pvVar3 + 0x3d4),uVar7), uVar7 == 0)) goto LAB_1001e634;
  }
  else {
LAB_1001e634:
    *(undefined1 *)((int)pvVar3 + 0x57d8) = 0;
  }
  window = (void *)*param_1;
  *(uint *)((int)pvVar3 + 0x57d4) = 0;
LAB_1001e650:
  terror_ui_window_present(window,str_10022bde,*(void **)((int)window + 0x340),DAT_10024114,DAT_10024118,
                     DAT_10024114 << 2,0xffffff);
  return;
}

#undef DAT_10024114
#undef DAT_10024118
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef Ram40010800
#undef Ram40010804
#undef Ram40010808
#undef UINT_40010850
#undef UINT_4001085c
#undef UINT_40010918
#undef str_10022bde
#undef local_3c
#undef local_38
#undef local_34

#undef DAT_10024114
#define DAT_10024114 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x16ccU)))
#undef DAT_10024118
#define DAT_10024118 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x16d0U)))
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
#undef UINT_40010918
#define UINT_40010918 (*(uint *)(0x40010918U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001e6d0
 */

undefined8 *
recovered_1001e6d0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,int param_4,
                  int param_5,uint param_6)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ushort uVar1;
  ushort uVar2;
  int iVar3;
  longlong lVar4;
  byte bVar5;
  code *pcVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  uint uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  uint uVar13;
  void *dst;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint *puVar17;
  undefined4 uVar18;
  undefined8 *puVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  undefined8 *puVar23;
  int unaff_r10;
  void *commands;
  byte *pbVar24;
  uint unaff_lr;
  bool bVar25;
  bool bVar26;

  if (param_1 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  iVar20 = param_4;
  if (0 < param_4) {
    iVar20 = param_5;
    unaff_r10 = param_5;
  }
  if (iVar20 < 1) {
    return param_1;
  }
  puVar17 = (uint *)((int)param_1 + 0x57d4);
  puVar7 = (undefined8 *)(uint)*(byte *)(param_1 + 0xafb);
  uVar13 = param_6 & 0xff;
  bVar5 = (byte)(param_6 >> 0x18);
  if (uVar13 == 0xff) {
    if (puVar7 == (undefined8 *)0x0) goto LAB_1001e9f0;
    uVar13 = *puVar17;
    commands = (void *)((int)param_1 + 0x3d4);
    if (uVar13 < 0xc0) {
      *puVar17 = uVar13 + 1;
      dst = (void *)((int)commands + uVar13 * 0x70);
      memset(dst,0,0x70);
      *(undefined4 *)((int)commands + uVar13 * 0x70) = 2;
      puVar12 = DAT_10024118;
      puVar7 = DAT_10024114;
      *(uint *)((int)dst + 0x38) = param_6;
      *(undefined8 **)((int)dst + 0x28) = param_2;
      uVar13 = (int)puVar7 << 2;
      lVar4 = ZEXT48(puVar12) * (ulonglong)uVar13;
      uVar18 = (undefined4)lVar4;
      puVar8 = *(undefined8 **)(param_1 + 0x68);
      *(int *)((int)dst + 0x34) = unaff_r10;
      *(int *)((int)dst + 0x30) = param_4;
      *(undefined8 **)((int)dst + 0x2c) = param_3;
      *(undefined4 *)((int)dst + 0x24) = 0;
      *(undefined4 *)((int)dst + 0x20) = 1;
      if ((int)((ulonglong)lVar4 >> 0x20) != 0) {
        uVar18 = 0xffffffff;
      }
      *(undefined4 *)((int)dst + 0xc) = 0;
      *(undefined8 **)((int)dst + 8) = puVar8;
      *(undefined8 **)((int)dst + 0x14) = puVar7;
      *(undefined8 **)((int)dst + 0x18) = puVar12;
      *(uint *)((int)dst + 0x1c) = uVar13;
      *(undefined4 *)((int)dst + 0x10) = uVar18;
      return puVar8;
    }
    iVar20 = Ram40010800;
    if ((iVar20 == 0x50414d57) && (iVar20 = Ram40010804, iVar20 != 0)) {
      uVar22 = Ram40010808;
      bVar25 = 0xb < uVar22;
      if (bVar25) {
        uVar22 = Ram40010808;
      }
      if (((!bVar25 || uVar22 < 0x11c) || (pcVar6 = (code *)UINT_40010918, pcVar6 == (code *)0x0))
         || (uVar13 = (*pcVar6)(commands,uVar13), uVar13 == 0)) goto LAB_1001e9e0;
    }
    else {
LAB_1001e9e0:
      *(undefined1 *)(param_1 + 0xafb) = 0;
    }
    *puVar17 = 0;
LAB_1001e9f0:
    uVar13 = *(uint *)(param_1 + 0x68);
    if (uVar13 == 0) {
      return param_1;
    }
    if (DAT_10024114 == (undefined8 *)0x0) {
      return param_1;
    }
    if (DAT_10024118 == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
    uVar22 = (int)DAT_10024114 * 4;
    if ((uint)DAT_10024114 >> 0x1e != 0) {
      return (undefined8 *)-((uint)DAT_10024114 >> 0x1e);
    }
    uVar14 = (uint)((ulonglong)uVar22 * ZEXT48(DAT_10024118));
    iVar20 = (int)((ulonglong)uVar22 * ZEXT48(DAT_10024118) >> 0x20);
    uVar10 = uVar14;
    if (iVar20 != 0) {
      uVar10 = 0xffffffff;
    }
    puVar7 = (undefined8 *)0x0;
    if ((uVar10 != 0) &&
       (puVar7 = (undefined8 *)-(iVar20 + (uint)(uVar14 > uVar10)),
       (uint)(uVar14 <= uVar10) <= (uint)-iVar20)) {
      return puVar7;
    }
    puVar8 = (undefined8 *)(param_4 + (int)param_2);
    puVar12 = puVar8;
    if (0 < (int)puVar8) {
      puVar12 = (undefined8 *)(unaff_r10 + (int)param_3);
      puVar7 = puVar8;
    }
    if ((int)puVar12 < 1) {
      return puVar7;
    }
    bVar26 = SBORROW4((int)DAT_10024114,(int)param_2);
    iVar20 = (int)DAT_10024114 - (int)param_2;
    bVar25 = DAT_10024114 == param_2;
    if ((int)param_2 < (int)DAT_10024114) {
      bVar26 = SBORROW4((int)DAT_10024118,(int)param_3);
      iVar20 = (int)DAT_10024118 - (int)param_3;
      bVar25 = DAT_10024118 == param_3;
    }
    if (bVar25 || iVar20 < 0 != bVar26) {
      return puVar7;
    }
    puVar11 = (undefined8 *)((uint)param_3 & ~((int)param_3 >> 0x1f));
    puVar8 = DAT_10024118;
    if ((int)puVar12 < (int)DAT_10024118) {
      puVar8 = puVar12;
    }
    if ((int)DAT_10024114 <= (int)puVar7) {
      puVar7 = DAT_10024114;
    }
    if ((int)puVar8 <= (int)puVar11) {
      return puVar7;
    }
    uVar14 = (uint)param_2 & ~((int)param_2 >> 0x1f);
    uVar21 = param_6 << 0x18 | (param_6 >> 8 & 0xff) << 0x10 | (param_6 >> 0x10 & 0xff) << 8 |
             param_6 >> 0x18;
    uVar10 = (int)puVar7 - uVar14;
    uVar15 = uVar10 & 0xfffffffc;
    puVar12 = (undefined8 *)(uVar13 + (int)DAT_10024114 * (int)puVar11 * 4 + uVar14 * 4);
    do {
      puVar17 = (uint *)((int)puVar11 * uVar22 + uVar13 + uVar14 * 4);
      if ((uVar13 & 3) == 0) {
        if ((int)uVar14 < (int)puVar7) {
          uVar16 = uVar14;
          if (3 < uVar10) {
            puVar17 = puVar17 + uVar15;
            puVar9 = puVar12;
            uVar16 = uVar15;
            do {
              *puVar9 = CONCAT44(uVar21,uVar21);
              puVar9[1] = CONCAT44(uVar21,uVar21);
              puVar9 = puVar9 + 2;
              uVar16 = uVar16 - 4;
            } while (uVar16 != 0);
            uVar16 = uVar14 + uVar15;
            if (uVar10 == uVar15) goto LAB_1001eb18;
          }
          iVar20 = (int)puVar7 - uVar16;
          do {
            *puVar17 = uVar21;
            iVar20 = iVar20 + -1;
            puVar17 = puVar17 + 1;
          } while (iVar20 != 0);
        }
      }
      else {
        uVar16 = uVar10;
        if ((int)uVar14 < (int)puVar7) {
          do {
            if (puVar17 != (uint *)0x0) {
              *(byte *)((int)puVar17 + 3) = 0xff;
              *(byte *)((int)puVar17 + 2) = (byte)(param_6 >> 8);
              *(byte *)((int)puVar17 + 1) = (byte)(param_6 >> 0x10);
              *(byte *)puVar17 = bVar5;
            }
            uVar16 = uVar16 - 1;
            puVar17 = puVar17 + 1;
          } while (uVar16 != 0);
        }
      }
LAB_1001eb18:
      puVar11 = (undefined8 *)((int)puVar11 + 1);
      puVar12 = (undefined8 *)((int)puVar12 + uVar22);
      if (puVar11 == puVar8) {
        return puVar12;
      }
    } while( true );
  }
  if (puVar7 != (undefined8 *)0x0) {
    unaff_lr = *puVar17;
  }
  if (puVar7 == (undefined8 *)0x0 || unaff_lr == 0) goto LAB_1001e80c;
  iVar20 = Ram40010800;
  if ((iVar20 == 0x50414d57) && (iVar20 = Ram40010804, iVar20 != 0)) {
    uVar22 = Ram40010808;
    bVar25 = 0xb < uVar22;
    if (bVar25) {
      uVar22 = Ram40010808;
    }
    if (((!bVar25 || uVar22 < 0x11c) || (pcVar6 = (code *)UINT_40010918, pcVar6 == (code *)0x0)) ||
       (uVar22 = (*pcVar6)((void *)((int)param_1 + 0x3d4),unaff_lr), uVar22 == 0))
    goto LAB_1001ec10;
  }
  else {
LAB_1001ec10:
    *(undefined1 *)(param_1 + 0xafb) = 0;
  }
  puVar7 = (undefined8 *)0x0;
  *puVar17 = 0;
LAB_1001e80c:
  puVar8 = DAT_10024118;
  puVar12 = DAT_10024114;
  if (uVar13 != 0) {
    puVar7 = *(undefined8 **)(param_1 + 0x68);
  }
  if (uVar13 != 0 && puVar7 != (undefined8 *)0x0) {
    puVar9 = (undefined8 *)((int)param_3 + unaff_r10);
    puVar11 = DAT_10024118;
    if ((int)puVar9 < (int)DAT_10024118) {
      puVar11 = puVar9;
    }
    puVar7 = (undefined8 *)((int)param_2 + param_4);
    if ((int)puVar9 < 0) {
      puVar11 = (undefined8 *)0x0;
    }
    puVar9 = DAT_10024114;
    if ((int)puVar7 < (int)DAT_10024114) {
      puVar9 = puVar7;
    }
    if ((int)puVar7 < 0) {
      puVar9 = (undefined8 *)0x0;
    }
    puVar19 = DAT_10024118;
    if ((int)param_3 < (int)DAT_10024118) {
      puVar19 = param_3;
    }
    if ((int)param_3 < 0) {
      puVar19 = (undefined8 *)0x0;
    }
    puVar23 = DAT_10024114;
    if ((int)param_2 < (int)DAT_10024114) {
      puVar23 = param_2;
    }
    if ((int)param_2 < 0) {
      puVar23 = (undefined8 *)0x0;
    }
    if ((int)puVar19 < (int)puVar11) {
      uVar1 = (ushort)uVar13;
      uVar13 = (int)((int)puVar19 * (int)DAT_10024114 + (int)puVar23) * 4 | 1;
      uVar2 = uVar1 ^ 0xff;
      iVar20 = (int)DAT_10024114 * 4;
      do {
        uVar22 = uVar13;
        puVar7 = puVar23;
        if ((int)puVar23 < (int)puVar9) {
          do {
            if ((-1 < (int)((uint)puVar7 | (uint)puVar19)) && (*(int *)(param_1 + 0x68) != 0)) {
              bVar26 = SBORROW4((int)puVar12,(int)puVar7);
              iVar3 = (int)puVar12 - (int)puVar7;
              bVar25 = puVar12 == puVar7;
              if ((int)puVar7 < (int)puVar12) {
                bVar26 = SBORROW4((int)puVar8,(int)puVar19);
                iVar3 = (int)puVar8 - (int)puVar19;
                bVar25 = puVar8 == puVar19;
              }
              if (!bVar25 && iVar3 < 0 == bVar26) {
                pbVar24 = (byte *)(*(int *)(param_1 + 0x68) + uVar22);
                *pbVar24 = (byte)((ulonglong)
                                  (uint)((int)(short)uVar2 * (int)(short)(ushort)*pbVar24 +
                                        (int)(short)((ushort)(param_6 >> 0x10) & 0xff) *
                                        (int)(short)uVar1 + 0x7f) * 0x1010102 >> 0x20);
                pbVar24[2] = 0xff;
                pbVar24[-1] = (byte)((ulonglong)
                                     (uint)((int)(short)uVar2 * (int)(short)(ushort)pbVar24[-1] +
                                           (int)(short)uVar1 * (int)(short)(ushort)bVar5 + 0x7f) *
                                     0x1010102 >> 0x20);
                pbVar24[1] = (byte)((ulonglong)
                                    (uint)((int)(short)uVar2 * (int)(short)(ushort)pbVar24[1] +
                                          (int)(short)((ushort)(param_6 >> 8) & 0xff) *
                                          (int)(short)uVar1 + 0x7f) * 0x1010102 >> 0x20);
              }
            }
            puVar7 = (undefined8 *)((int)puVar7 + 1);
            uVar22 = uVar22 + 4;
          } while (puVar9 != puVar7);
        }
        puVar19 = (undefined8 *)((int)puVar19 + 1);
        uVar13 = uVar13 + iVar20;
        puVar7 = puVar11;
      } while (puVar19 != puVar11);
    }
  }
  return puVar7;
}

#undef DAT_10024114
#undef DAT_10024118
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef Ram40010800
#undef Ram40010804
#undef Ram40010808
#undef UINT_40010918

#undef DAT_10024114
#define DAT_10024114 (*(int *)(((uintptr_t)pf_module_state + 0x16ccU)))
#undef DAT_10024118
#define DAT_10024118 (*(int *)(((uintptr_t)pf_module_state + 0x16d0U)))
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
#undef UINT_40010918
#define UINT_40010918 (*(uint *)(0x40010918U))
#undef UINT_40010978
#define UINT_40010978 (*(uint *)(0x40010978U))
#define local_3c (*(uint *)(frame + 20))
#define local_38 (*(void * *)(frame + 24))
#define local_34 (*(int *)(frame + 28))
#define local_2c (*(uint *)(frame + 36))
#define local_28 (*(uint *)(frame + 40))
#define local_24 (*(int *)(frame + 44))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001eca0
 */

void recovered_1001eca0(int param_1,int param_2,int param_3,char *param_4,uint param_5,uint param_6)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  ushort uVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  code *pcVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  byte *pbVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  void *pvVar15;
  bool bVar16;

  if (param_1 == 0 || param_4 == (char *)0x0) {
    return;
  }
  if (*param_4 == '\0') {
    return;
  }
  memset(&local_38,0,0x18);
  iVar6 = Ram40010800;
  if ((int)param_5 < 2) {
    param_5 = 1;
  }
  if (iVar6 != 0x50414d57) {
    return;
  }
  iVar6 = Ram40010804;
  if (iVar6 == 0) {
    return;
  }
  uVar9 = Ram40010808;
  bVar16 = 0xb < uVar9;
  if (bVar16) {
    uVar9 = Ram40010808;
  }
  if (!bVar16 || uVar9 < 0x17c) {
    return;
  }
  pcVar7 = (code *)UINT_40010978;
  if (pcVar7 == (code *)0x0) {
    return;
  }
  uVar9 = (*pcVar7)(param_4,0xffffffff,param_5,param_6,&local_38);
  if (uVar9 == 0) {
    return;
  }
  if (local_34 != 0) {
    return;
  }
  if (local_38 == (void *)0x0) {
    return;
  }
  uVar9 = *(uint *)(param_1 + 0x57d4);
  if (uVar9 == 0) goto LAB_1001edf8;
  iVar6 = Ram40010800;
  if ((iVar6 == 0x50414d57) && (iVar6 = Ram40010804, iVar6 != 0)) {
    uVar10 = Ram40010808;
    bVar16 = 0xb < uVar10;
    if (bVar16) {
      uVar10 = Ram40010808;
    }
    if (((!bVar16 || uVar10 < 0x11c) || (pcVar7 = (code *)UINT_40010918, pcVar7 == (code *)0x0)) ||
       (uVar9 = (*pcVar7)((void *)(param_1 + 0x3d4),uVar9), uVar9 == 0)) goto LAB_1001ede8;
  }
  else {
LAB_1001ede8:
    *(undefined1 *)(param_1 + 0x57d8) = 0;
  }
  *(uint *)(param_1 + 0x57d4) = 0;
LAB_1001edf8:
  iVar8 = DAT_10024118;
  iVar6 = DAT_10024114;
  if (local_28 != 0) {
    uVar10 = (DAT_10024114 * param_3 + param_2) * 4 | 3;
    iVar2 = DAT_10024114 * 4;
    local_3c = 0;
    uVar9 = local_2c;
    do {
      if (uVar9 == 0) {
        uVar9 = 0;
      }
      else {
        uVar14 = 0;
        uVar9 = uVar10;
        pvVar15 = local_38;
        do {
          if (((-1 < (int)(param_2 + uVar14 | local_3c + param_3)) &&
              (iVar13 = *(int *)(param_1 + 0x340), iVar13 != 0)) &&
             ((int)(param_2 + uVar14) < iVar6)) {
            pbVar11 = (byte *)((int)pvVar15 + local_3c * local_24);
            bVar3 = pbVar11[3];
            if ((bVar3 != 0) && ((int)(local_3c + param_3) < iVar8)) {
              bVar4 = pbVar11[1];
              bVar5 = pbVar11[2];
              iVar12 = iVar13 + uVar9;
              if (bVar3 == 0xff) {
                *(byte *)(iVar12 + -3) = *pbVar11;
                *(byte *)(iVar12 + -1) = bVar5;
                *(byte *)(iVar12 + -2) = bVar4;
              }
              else {
                uVar1 = bVar3 ^ 0xff;
                *(char *)(iVar12 + -3) =
                     (char)(((int)(short)uVar1 * (int)(short)(ushort)*(byte *)(iVar12 + -3) +
                             (int)(short)(ushort)bVar3 * (int)(short)(ushort)*pbVar11 + 0x7fU) /
                           0xff);
                *(char *)(iVar12 + -2) =
                     (char)(((int)(short)uVar1 * (int)(short)(ushort)*(byte *)(iVar12 + -2) +
                             (int)(short)(ushort)bVar3 * (int)(short)(ushort)bVar4 + 0x7fU) / 0xff);
                *(char *)(iVar12 + -1) =
                     (char)(((int)(short)uVar1 * (int)(short)(ushort)*(byte *)(iVar12 + -1) +
                             (int)(short)(ushort)bVar3 * (int)(short)(ushort)bVar5 + 0x7fU) / 0xff);
              }
              *(undefined1 *)(iVar13 + uVar9) = 0xff;
            }
          }
          uVar14 = uVar14 + 1;
          pvVar15 = (void *)((int)pvVar15 + 4);
          uVar9 = uVar9 + 4;
        } while (uVar14 < local_2c);
        uVar9 = local_2c;
      }
      local_3c = local_3c + 1;
      uVar10 = uVar10 + iVar2;
    } while (local_3c < local_28);
  }
  iVar6 = Ram40010800;
  if ((iVar6 == 0x50414d57) && (iVar6 = Ram40010804, iVar6 != 0)) {
    uVar9 = Ram40010808;
    bVar16 = 0xb < uVar9;
    if (bVar16) {
      uVar9 = Ram40010808;
    }
    if ((bVar16 && 0x53 < uVar9) && (pcVar7 = (code *)UINT_40010850, pcVar7 != (code *)0x0)) {
      (*pcVar7)(local_38);
    }
  }
  return;
}

#undef DAT_10024114
#undef DAT_10024118
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef Ram40010800
#undef Ram40010804
#undef Ram40010808
#undef UINT_40010850
#undef UINT_40010918
#undef UINT_40010978
#undef local_3c
#undef local_38
#undef local_34
#undef local_2c
#undef local_28
#undef local_24

#undef DAT_10022ca6
#define DAT_10022ca6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x25eU)))
#undef DAT_10024114
#define DAT_10024114 (*(int *)(((uintptr_t)pf_module_state + 0x16ccU)))
#undef DAT_10024118
#define DAT_10024118 (*(int *)(((uintptr_t)pf_module_state + 0x16d0U)))
#undef str_10023463
#define str_10023463 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa1bU)))
#undef str_10023c71
#define str_10023c71 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1229U)))
#undef str_10023c85
#define str_10023c85 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x123dU)))
#define acStack_d4 (*(char (*)[192])(frame + 28))
#define in_stack_ffffff28 (*(uint *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001f020
 */

void recovered_1001f020(int param_1,int param_2,char *param_3,int param_4,int param_5)

{
  unsigned char frame[272] __attribute__((aligned(16))) = {0};

  char *format;
  char *pcVar1;

  if (param_1 == 0) {
    return;
  }
  if (param_2 != 0) {
    pcVar1 = str_10023463;
    if (param_5 == 0) {
      if ((param_3 != (char *)0x0) && (*param_3 != '\0')) {
        pcVar1 = param_3;
      }
      format = str_10023c85;
    }
    else {
      if ((param_3 != (char *)0x0) && (*param_3 != '\0')) {
        pcVar1 = param_3;
      }
      in_stack_ffffff28 = param_5 + 0x3ffU >> 10;
      format = str_10023c71;
    }
    pf_varargs_10023fa4__4__4__4_
              (acStack_d4,0xc0,format,(uint)pcVar1,param_4 + 0x3ffU >> 10,in_stack_ffffff28);
    pf_varargs_10023fa4__4_((char *)(param_2 + 0x141),0xc0,&DAT_10022ca6,(uint)acStack_d4);
    recovered_1001e6d0((undefined8 *)param_1,(undefined8 *)0x0,(undefined8 *)(DAT_10024118 + -0x16),
                       DAT_10024114,0x16,0xeceff1ff);
    recovered_1001e6d0((undefined8 *)param_1,(undefined8 *)0x0,(undefined8 *)(DAT_10024118 + -0x16),
                       DAT_10024114,1,0x7a848eff);
    recovered_1001eca0(param_1,10,DAT_10024118 + -0xf,(char *)(param_2 + 0x141),1,0x12181cff);
  }
  return;
}

#undef DAT_10022ca6
#undef DAT_10024114
#undef DAT_10024118
#undef str_10023463
#undef str_10023c71
#undef str_10023c85
#undef acStack_d4
#undef in_stack_ffffff28

#undef DAT_10024118
#define DAT_10024118 (*(int *)(((uintptr_t)pf_module_state + 0x16d0U)))
#undef EXT_00000008
#define EXT_00000008 (*(uint8_t *)(0x8U))
#undef EXT_0000000c
#define EXT_0000000c (*(uint8_t *)(0xcU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001f1ac
 */

void recovered_1001f1ac(int param_1,int param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;

  iVar1 = DAT_10024118;
  puVar3 = (undefined8 *)0x4e;
  iVar4 = DAT_10024118 + -0x8c;
  if (DAT_10024118 < 0x9e) {
    iVar4 = 0x12;
  }
  iVar2 = iVar4;
  if (param_2 != 0) {
    iVar6 = DAT_10024118 + -0x5e;
    iVar5 = *(int *)(param_2 + 0x544bc);
    if (iVar6 < iVar5) {
      iVar2 = recovered_100039d8(iVar4 * iVar6,iVar5);
      if (iVar2 < 0x13) {
        iVar2 = 0x12;
      }
      if (iVar4 <= iVar2) {
        iVar2 = iVar4;
      }
      iVar5 = iVar5 - iVar6;
      if (iVar5 < 2) {
        iVar5 = 1;
      }
      iVar5 = recovered_100039d8((iVar4 - iVar2) * *(int *)(param_2 + 0x544b8),iVar5);
      puVar3 = (undefined8 *)(iVar5 + 0x4e);
    }
  }
  if (param_1 != 0) {
    recovered_1001e6d0((undefined8 *)param_1,(undefined8 *)&SupervisorCall,(undefined8 *)0x4e,0xc,
                       iVar4,0xe4e4e4ff);
    recovered_1001e6d0((undefined8 *)param_1,(undefined8 *)&SupervisorCall,(undefined8 *)0x4e,0xc,1,
                       0xacacacff);
    recovered_1001e6d0((undefined8 *)param_1,(undefined8 *)&SupervisorCall,
                       (undefined8 *)(iVar4 + 0x4d),0xc,1,0xacacacff);
    recovered_1001e6d0((undefined8 *)param_1,(undefined8 *)&SupervisorCall,(undefined8 *)0x4e,1,
                       iVar4,0xacacacff);
    recovered_1001e6d0((undefined8 *)param_1,(undefined8 *)0x13,(undefined8 *)0x4e,1,iVar4,
                       0xacacacff);
    recovered_1001e6d0((undefined8 *)param_1,(undefined8 *)0x9,(undefined8 *)((int)puVar3 + 1),10,
                       iVar2 + -2,0xbebebeff);
    recovered_1001e6d0((undefined8 *)param_1,(undefined8 *)&SupervisorCall,puVar3,0xc,1,0x747474ff);
    recovered_1001e6d0((undefined8 *)param_1,(undefined8 *)&SupervisorCall,
                       (undefined8 *)((int)puVar3 + iVar2 + -1),0xc,1,0x747474ff);
    recovered_1001e6d0((undefined8 *)param_1,(undefined8 *)&SupervisorCall,puVar3,1,iVar2,0x747474ff
                      );
    recovered_1001e6d0((undefined8 *)param_1,(undefined8 *)0x13,puVar3,1,iVar2,0x747474ff);
    puVar3 = (undefined8 *)(iVar1 + -0x3c);
    recovered_1001e6d0((undefined8 *)param_1,(undefined8 *)&SupervisorCall,puVar3,0xc,0xe,0xeeeeeeff
                      );
    recovered_1001e6d0((undefined8 *)param_1,(undefined8 *)&SupervisorCall,puVar3,0xc,1,0x969696ff);
    recovered_1001e6d0((undefined8 *)param_1,(undefined8 *)&SupervisorCall,
                       (undefined8 *)(iVar1 + -0x2f),0xc,1,0x969696ff);
    recovered_1001e6d0((undefined8 *)param_1,(undefined8 *)&SupervisorCall,puVar3,1,0xe,0x969696ff);
    recovered_1001e6d0((undefined8 *)param_1,(undefined8 *)0x13,puVar3,1,0xe,0x969696ff);
    recovered_1001e6d0((undefined8 *)param_1,(undefined8 *)0xe,(undefined8 *)(iVar1 + -0x39),1,1,
                       0x464646ff);
    recovered_1001e6d0((undefined8 *)param_1,(undefined8 *)0xd,(undefined8 *)(iVar1 + -0x38),3,1,
                       0x464646ff);
    recovered_1001e6d0((undefined8 *)param_1,(undefined8 *)&PrefetchAbort,
                       (undefined8 *)(iVar1 + -0x37),5,1,0x464646ff);
    recovered_1001e6d0((undefined8 *)param_1,(undefined8 *)0xb,(undefined8 *)(iVar1 + -0x36),7,1,
                       0x464646ff);
    puVar3 = (undefined8 *)(iVar1 + -0x2c);
    recovered_1001e6d0((undefined8 *)param_1,(undefined8 *)&SupervisorCall,puVar3,0xc,0xe,0xeeeeeeff
                      );
    recovered_1001e6d0((undefined8 *)param_1,(undefined8 *)&SupervisorCall,puVar3,0xc,1,0x969696ff);
    recovered_1001e6d0((undefined8 *)param_1,(undefined8 *)&SupervisorCall,
                       (undefined8 *)(iVar1 + -0x1f),0xc,1,0x969696ff);
    recovered_1001e6d0((undefined8 *)param_1,(undefined8 *)&SupervisorCall,puVar3,1,0xe,0x969696ff);
    recovered_1001e6d0((undefined8 *)param_1,(undefined8 *)0x13,puVar3,1,0xe,0x969696ff);
    recovered_1001e6d0((undefined8 *)param_1,(undefined8 *)0xb,(undefined8 *)(iVar1 + -0x27),7,1,
                       0x464646ff);
    recovered_1001e6d0((undefined8 *)param_1,(undefined8 *)&PrefetchAbort,
                       (undefined8 *)(iVar1 + -0x26),5,1,0x464646ff);
    recovered_1001e6d0((undefined8 *)param_1,(undefined8 *)0xd,(undefined8 *)(iVar1 + -0x25),3,1,
                       0x464646ff);
    recovered_1001e6d0((undefined8 *)param_1,(undefined8 *)0xe,(undefined8 *)(iVar1 + -0x24),1,1,
                       0x464646ff);
  }
  return;
}

#undef DAT_10024118
#undef EXT_00000008
#undef EXT_0000000c

#undef DAT_10024118
#define DAT_10024118 (*(int *)(((uintptr_t)pf_module_state + 0x16d0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001f5e0
 */

void recovered_1001f5e0(undefined4 *param_1,int param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;

  iVar2 = 0x4e;
  iVar4 = DAT_10024118 + -0x8c;
  if (DAT_10024118 < 0x9e) {
    iVar4 = 0x12;
  }
  if (param_2 != 0) {
    iVar5 = DAT_10024118 + -0x5e;
    iVar3 = *(int *)(param_2 + 0x544bc);
    if (iVar5 < iVar3) {
      iVar1 = recovered_100039d8(iVar4 * iVar5,iVar3);
      if (iVar1 < 0x13) {
        iVar1 = 0x12;
      }
      if (iVar4 <= iVar1) {
        iVar1 = iVar4;
      }
      iVar3 = iVar3 - iVar5;
      if (iVar3 < 2) {
        iVar3 = 1;
      }
      iVar2 = recovered_100039d8((iVar4 - iVar1) * *(int *)(param_2 + 0x544b8),iVar3);
      iVar2 = iVar2 + 0x4e;
      iVar4 = iVar1;
    }
  }
  param_1[3] = iVar4;
  param_1[2] = 0xc;
  param_1[1] = iVar2;
  *param_1 = 8;
  return;
}

#undef DAT_10024118

#undef DAT_10023c96
#define DAT_10023c96 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x124eU)))
#undef DAT_10023c98
#define DAT_10023c98 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1250U)))
#undef DAT_10023c9a
#define DAT_10023c9a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1252U)))
#undef DAT_10023cb4
#define DAT_10023cb4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x126cU)))
#undef DAT_10023cb8
#define DAT_10023cb8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1270U)))
#undef DAT_10024114
#define DAT_10024114 (*(int *)(((uintptr_t)pf_module_state + 0x16ccU)))
#undef DAT_10024118
#define DAT_10024118 (*(int *)(((uintptr_t)pf_module_state + 0x16d0U)))
#undef str_10023c9d
#define str_10023c9d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1255U)))
#undef str_10023ca9
#define str_10023ca9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1261U)))
#undef str_10023cba
#define str_10023cba (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1272U)))
#undef str_10023cd4
#define str_10023cd4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x128cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001f6a4
 */

void recovered_1001f6a4(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  uint *puVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 *puVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  char *pcVar11;

  if (param_1 == 0) {
    return;
  }
  puVar3 = (uint *)(param_1 + 0x205bac);
  if (*puVar3 == 0) {
    return;
  }
  uVar7 = *(uint *)(param_1 + 0x205bb0);
  if (*puVar3 <= uVar7) {
    return;
  }
  *(undefined4 *)(param_1 + 0x57d4) = 0;
  recovered_1001e6d0((undefined8 *)param_1,(undefined8 *)0x0,(undefined8 *)0x0,DAT_10024114,
                     DAT_10024118,0xfffffcff);
  recovered_1001e6d0((undefined8 *)param_1,(undefined8 *)0x0,(undefined8 *)0x0,DAT_10024114,0x48,
                     0xe1e5e8ff);
  recovered_1001e6d0((undefined8 *)param_1,(undefined8 *)0x0,(undefined8 *)0x47,DAT_10024114,1,
                     0x7a848eff);
  iVar9 = uVar7 * 0x555cc + param_1;
  puVar10 = (uint *)(iVar9 + 0x5ada4);
  if (*puVar10 == 0) {
    uVar7 = 0xd2d6daff;
  }
  else {
    uVar7 = 0xecf0f2ff;
    if (*(int *)(iVar9 + 0x5ada8) == 0) {
      uVar7 = 0xd2d6daff;
    }
  }
  recovered_1001e6d0((undefined8 *)param_1,(undefined8 *)0xa,(undefined8 *)0x9,0x1a,0x1a,uVar7);
  recovered_1001e6d0((undefined8 *)param_1,(undefined8 *)0xa,(undefined8 *)0x9,0x1a,1,0x7a848eff);
  recovered_1001e6d0((undefined8 *)param_1,(undefined8 *)0xa,(undefined8 *)0x22,0x1a,1,0x7a848eff);
  recovered_1001e6d0((undefined8 *)param_1,(undefined8 *)0xa,(undefined8 *)0x9,1,0x1a,0x7a848eff);
  recovered_1001e6d0((undefined8 *)param_1,(undefined8 *)0x23,(undefined8 *)0x9,1,0x1a,0x7a848eff);
  if (*puVar10 == 0) {
    uVar7 = 0x808890ff;
  }
  else {
    uVar7 = 0x12181cff;
    if (*(int *)(iVar9 + 0x5ada8) == 0) {
      uVar7 = 0x808890ff;
    }
  }
  recovered_1001eca0(param_1,0x12,0x12,&DAT_10023c96,1,uVar7);
  if ((*puVar10 == 0) || (uVar7 = 0xecf0f2ff, *puVar10 <= *(int *)(iVar9 + 0x5ada8) + 1U)) {
    uVar7 = 0xd2d6daff;
  }
  recovered_1001e6d0((undefined8 *)param_1,(undefined8 *)0x28,(undefined8 *)0x9,0x1a,0x1a,uVar7);
  uVar7 = 0x7a848eff;
  recovered_1001e6d0((undefined8 *)param_1,(undefined8 *)0x28,(undefined8 *)0x9,0x1a,1,0x7a848eff);
  recovered_1001e6d0((undefined8 *)param_1,(undefined8 *)0x28,(undefined8 *)0x22,0x1a,1,0x7a848eff);
  recovered_1001e6d0((undefined8 *)param_1,(undefined8 *)0x28,(undefined8 *)0x9,1,0x1a,0x7a848eff);
  recovered_1001e6d0((undefined8 *)param_1,(undefined8 *)0x41,(undefined8 *)0x9,1,0x1a,0x7a848eff);
  if (*puVar10 == 0) {
    uVar2 = 0x808890ff;
  }
  else {
    uVar2 = 0x12181cff;
    if (*puVar10 <= *(int *)(iVar9 + 0x5ada8) + 1U) {
      uVar2 = 0x808890ff;
    }
  }
  recovered_1001eca0(param_1,0x30,0x12,&DAT_10023c98,1,uVar2);
  iVar1 = DAT_10024114;
  iVar8 = DAT_10024114 + -0xfa;
  recovered_1001e6d0((undefined8 *)param_1,(undefined8 *)0x4a,(undefined8 *)0x9,iVar8,0x1a,
                     0xfafcfcff);
  if (*(char *)(param_1 + 0x57db) != '\0') {
    uVar7 = 0x165cb0ff;
  }
  recovered_1001e6d0((undefined8 *)param_1,(undefined8 *)0x4a,(undefined8 *)0x9,iVar8,1,uVar7);
  recovered_1001e6d0((undefined8 *)param_1,(undefined8 *)0x4a,(undefined8 *)0x22,iVar8,1,uVar7);
  recovered_1001e6d0((undefined8 *)param_1,(undefined8 *)0x4a,(undefined8 *)0x9,1,0x1a,uVar7);
  recovered_1001e6d0((undefined8 *)param_1,(undefined8 *)(iVar1 + -0xb1),(undefined8 *)0x9,1,0x1a,
                     uVar7);
  recovered_1001eca0(param_1,0x50,0x11,(char *)(param_1 + 0x57de),1,0x12181cff);
  if ((*(char *)(param_1 + 0x57db) == '\x01') && ((*(uint *)(param_1 + 0x205bc0) / 0x18 & 1) == 0))
  {
    uVar7 = recovered_1001a550((char *)(param_1 + 0x57de),1);
    puVar4 = (undefined8 *)(iVar1 + -0xb8);
    if ((int)(uVar7 + 0x50) < (int)puVar4) {
      puVar4 = (undefined8 *)(uVar7 + 0x50);
    }
    if ((int)uVar7 < 0) {
      puVar4 = (undefined8 *)0x50;
    }
    recovered_1001e6d0((undefined8 *)param_1,puVar4,(undefined8 *)0xf,1,0xe,0x12181cff);
  }
  iVar1 = DAT_10024114;
  recovered_1001e6d0((undefined8 *)param_1,(undefined8 *)(DAT_10024114 + -0xa6),(undefined8 *)0x9,
                     0x2e,0x1a,0x165cb0ff);
  recovered_1001eca0(param_1,iVar1 + -0x9a,0x12,&DAT_10023c9a,1,0xffffffff);
  iVar1 = DAT_10024114;
  uVar7 = 0xbfe2c8ff;
  if (*(char *)(param_1 + 0x57dc) != '\0') {
    uVar7 = 0xced6dbff;
  }
  puVar4 = (undefined8 *)(DAT_10024114 + -0x70);
  recovered_1001e6d0((undefined8 *)param_1,puVar4,(undefined8 *)0x9,0x68,0x1a,uVar7);
  recovered_1001e6d0((undefined8 *)param_1,puVar4,(undefined8 *)0x9,0x68,1,0x7a848eff);
  recovered_1001e6d0((undefined8 *)param_1,puVar4,(undefined8 *)0x22,0x68,1,0x7a848eff);
  recovered_1001e6d0((undefined8 *)param_1,puVar4,(undefined8 *)0x9,1,0x1a,0x7a848eff);
  recovered_1001e6d0((undefined8 *)param_1,(undefined8 *)(iVar1 + -9),(undefined8 *)0x9,1,0x1a,
                     0x7a848eff);
  pcVar5 = str_10023ca9;
  if (*(char *)(param_1 + 0x57dc) != '\0') {
    pcVar5 = str_10023c9d;
  }
  recovered_1001eca0(param_1,iVar1 + -0x68,0x12,pcVar5,1,0x12181cff);
  if (*puVar3 == 0) {
    uVar7 = 0;
  }
  else {
    uVar2 = 0;
    puVar4 = (undefined8 *)0x8b;
    pcVar5 = (char *)(param_1 + 0x59e5);
    do {
      puVar6 = (undefined8 *)((int)puVar4 + -0x83);
      uVar7 = 0xccd3d8ff;
      if (uVar2 == *(uint *)(param_1 + 0x205bb0)) {
        uVar7 = 0xfffffcff;
      }
      recovered_1001e6d0((undefined8 *)param_1,puVar6,(undefined8 *)0x2f,0x84,0x18,uVar7);
      recovered_1001e6d0((undefined8 *)param_1,puVar6,(undefined8 *)0x2f,0x84,1,0x7a848eff);
      recovered_1001e6d0((undefined8 *)param_1,puVar6,(undefined8 *)0x46,0x84,1,0x7a848eff);
      recovered_1001e6d0((undefined8 *)param_1,puVar6,(undefined8 *)0x2f,1,0x18,0x7a848eff);
      recovered_1001e6d0((undefined8 *)param_1,puVar4,(undefined8 *)0x2f,1,0x18,0x7a848eff);
      pcVar11 = pcVar5 + 0x555cc;
      if (*pcVar5 == '\0') {
        pcVar5 = &DAT_10023cb4;
      }
      recovered_1001eca0(param_1,(int)puVar4 + -0x7b,0x37,pcVar5,1,0x12181cff);
      puVar4 = puVar4 + 0x11;
      uVar2 = uVar2 + 1;
      uVar7 = *puVar3;
      pcVar5 = pcVar11;
    } while (uVar2 < uVar7);
    if (5 < uVar7) goto LAB_1001ff28;
  }
  puVar4 = (undefined8 *)(uVar7 * 0x88 + 8);
  recovered_1001e6d0((undefined8 *)param_1,puVar4,(undefined8 *)0x31,0x18,0x16,0xecf0f2ff);
  recovered_1001e6d0((undefined8 *)param_1,puVar4,(undefined8 *)0x31,0x18,1,0x7a848eff);
  recovered_1001e6d0((undefined8 *)param_1,puVar4,(undefined8 *)0x46,0x18,1,0x7a848eff);
  recovered_1001e6d0((undefined8 *)param_1,puVar4,(undefined8 *)0x31,1,0x16,0x7a848eff);
  recovered_1001e6d0((undefined8 *)param_1,(undefined8 *)(uVar7 * 0x88 + 0x1f),(undefined8 *)0x31,1,
                     0x16,0x7a848eff);
  recovered_1001eca0(param_1,uVar7 * 0x88 + 0xf,0x38,&DAT_10023cb8,1,0x12181cff);
LAB_1001ff28:
  recovered_1001f1ac(param_1,iVar9 + 0x58e4);
  recovered_1001e6d0((undefined8 *)param_1,(undefined8 *)0x0,(undefined8 *)(DAT_10024118 + -0x16),
                     DAT_10024114,0x16,0xeceff1ff);
  recovered_1001e6d0((undefined8 *)param_1,(undefined8 *)0x0,(undefined8 *)(DAT_10024118 + -0x16),
                     DAT_10024114,1,0x7a848eff);
  pcVar5 = (char *)(iVar9 + 0x5a25);
  if ((*pcVar5 == '\0') && (pcVar5 = str_10023cd4, *(char *)(param_1 + 0x57d8) != '\0')) {
    pcVar5 = str_10023cba;
  }
  recovered_1001eca0(param_1,10,DAT_10024118 + -0xf,pcVar5,1,0x12181cff);
  return;
}

#undef DAT_10023c96
#undef DAT_10023c98
#undef DAT_10023c9a
#undef DAT_10023cb4
#undef DAT_10023cb8
#undef DAT_10024114
#undef DAT_10024118
#undef str_10023c9d
#undef str_10023ca9
#undef str_10023cba
#undef str_10023cd4

#undef DAT_10024114
#define DAT_10024114 (*(int *)(((uintptr_t)pf_module_state + 0x16ccU)))
#undef DAT_10024118
#define DAT_10024118 (*(int *)(((uintptr_t)pf_module_state + 0x16d0U)))
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
#undef UINT_40010918
#define UINT_40010918 (*(uint *)(0x40010918U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10020018
 */

void recovered_10020018(int param_1,int *param_2,uint param_3,int param_4,uint param_5,uint param_6)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ushort uVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  longlong lVar6;
  code *pcVar7;
  int iVar8;
  int iVar9;
  byte *pbVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  byte *pbVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  byte bVar18;
  uint uVar19;
  uint uVar20;
  uint unaff_r6;
  uint uVar21;
  uint uVar22;
  uint unaff_r8;
  uint uVar23;
  uint uVar24;
  bool bVar25;
  ulonglong uVar26;
  ulonglong uVar27;

  if (param_2 == (int *)0x0) {
    return;
  }
  iVar12 = *param_2;
  if (param_2[1] != 0) {
    iVar12 = 0;
  }
  iVar2 = 0;
  if (param_1 != 0) {
    iVar2 = iVar12;
  }
  if (param_1 == 0 || iVar2 == 0) {
    return;
  }
  uVar16 = param_2[3];
  if (uVar16 != 0) {
    unaff_r8 = param_2[4];
  }
  if (uVar16 == 0 || unaff_r8 == 0) {
    return;
  }
  uVar13 = param_5;
  if (0 < (int)param_5) {
    uVar13 = param_6;
    unaff_r6 = param_6;
  }
  if ((int)uVar13 < 1) {
    return;
  }
  uVar13 = *(uint *)(param_1 + 0x57d4);
  if (uVar13 == 0) goto LAB_10020118;
  iVar2 = Ram40010800;
  if ((iVar2 == 0x50414d57) && (iVar2 = Ram40010804, iVar2 != 0)) {
    uVar16 = Ram40010808;
    bVar25 = 0xb < uVar16;
    if (bVar25) {
      uVar16 = Ram40010808;
    }
    if (((!bVar25 || uVar16 < 0x11c) || (pcVar7 = (code *)UINT_40010918, pcVar7 == (code *)0x0)) ||
       (uVar16 = (*pcVar7)((void *)(param_1 + 0x3d4),uVar13), uVar16 == 0)) goto LAB_100200fc;
  }
  else {
LAB_100200fc:
    *(undefined1 *)(param_1 + 0x57d8) = 0;
  }
  *(uint *)(param_1 + 0x57d4) = 0;
  uVar16 = param_2[3];
  unaff_r8 = param_2[4];
LAB_10020118:
  uVar19 = 0;
  uVar26 = recovered_10003ab0((ulonglong)param_5 * (ulonglong)unaff_r8,(ulonglong)uVar16);
  uVar13 = (uint)uVar26;
  if ((int)uVar13 < (int)unaff_r6) {
    uVar26 = recovered_10003ab0((ulonglong)unaff_r6 * (ulonglong)uVar16,(ulonglong)unaff_r8);
    if ((int)(uint)uVar26 < 1) {
      return;
    }
    uVar13 = unaff_r6;
    uVar16 = (uint)uVar26;
  }
  else {
    uVar16 = param_5;
  }
  iVar9 = DAT_10024118;
  iVar8 = DAT_10024114;
  uVar17 = (param_4 * DAT_10024114 + param_3) * 4 | 1;
  iVar2 = DAT_10024114 * 4;
  do {
    uVar21 = uVar19 + (int)(uVar13 - unaff_r6) / 2;
    lVar6 = (ulonglong)uVar21 * (ulonglong)(uint)param_2[4];
    uVar26 = recovered_10003ab0(CONCAT44(param_2[4] * ((int)uVar21 >> 0x1f) +
                                         (int)((ulonglong)lVar6 >> 0x20),(int)lVar6),
                                (ulonglong)uVar13);
    uVar21 = uVar17;
    uVar22 = (int)(uVar16 - param_5) / 2;
    uVar23 = param_3;
    uVar24 = param_5;
    do {
      uVar20 = param_2[3];
      uVar27 = recovered_10003ab0(CONCAT44(uVar20 * ((int)uVar22 >> 0x1f) +
                                           (int)((ulonglong)uVar22 * (ulonglong)uVar20 >> 0x20),
                                           (int)((ulonglong)uVar22 * (ulonglong)uVar20)),
                                  (ulonglong)uVar16);
      if (((-1 < (int)(uVar23 | uVar19 + param_4)) &&
          (iVar15 = *(int *)(param_1 + 0x340), iVar15 != 0)) && ((int)uVar23 < iVar8)) {
        pbVar10 = (byte *)(iVar12 + (uVar20 * (int)uVar26 + (int)uVar27) * 4);
        bVar4 = pbVar10[3];
        if ((bVar4 != 0) && ((int)(uVar19 + param_4) < iVar9)) {
          bVar5 = pbVar10[1];
          bVar18 = pbVar10[2];
          iVar11 = iVar15 + uVar21;
          if (bVar4 == 0xff) {
            *(byte *)(iVar11 + -1) = *pbVar10;
            *(byte *)(iVar15 + uVar21) = bVar5;
          }
          else {
            pbVar14 = (byte *)(iVar15 + uVar21);
            bVar3 = *pbVar14;
            uVar1 = bVar4 ^ 0xff;
            *(char *)(iVar11 + -1) =
                 (char)(((int)(short)uVar1 * (int)(short)(ushort)*(byte *)(iVar11 + -1) +
                         (int)(short)(ushort)bVar4 * (int)(short)(ushort)*pbVar10 + 0x7fU) / 0xff);
            bVar18 = (byte)(((int)(short)uVar1 * (int)(short)(ushort)pbVar14[1] +
                             (int)(short)(ushort)bVar4 * (int)(short)(ushort)bVar18 + 0x7fU) / 0xff)
            ;
            *pbVar14 = (byte)(((int)(short)uVar1 * (int)(short)(ushort)bVar3 +
                               (int)(short)(ushort)bVar4 * (int)(short)(ushort)bVar5 + 0x7fU) / 0xff
                             );
          }
          *(byte *)(iVar15 + uVar21 + 1) = bVar18;
          *(undefined1 *)(iVar11 + 2) = 0xff;
        }
      }
      uVar21 = uVar21 + 4;
      uVar22 = uVar22 + 1;
      uVar23 = uVar23 + 1;
      uVar24 = uVar24 - 1;
    } while (uVar24 != 0);
    uVar17 = uVar17 + iVar2;
    uVar19 = uVar19 + 1;
  } while (uVar19 != param_6);
  return;
}

#undef DAT_10024114
#undef DAT_10024118
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef Ram40010800
#undef Ram40010804
#undef Ram40010808
#undef UINT_40010918

#undef DAT_10022ca6
#define DAT_10022ca6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x25eU)))
#undef DAT_10024118
#define DAT_10024118 (*(int *)(((uintptr_t)pf_module_state + 0x16d0U)))
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
#undef UINT_40010850
#define UINT_40010850 (*(uint *)(0x40010850U))
#undef UINT_40010858
#define UINT_40010858 (*(uint *)(0x40010858U))
#undef UINT_400108e0
#define UINT_400108e0 (*(uint *)(0x400108e0U))
#undef str_10023463
#define str_10023463 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa1bU)))
#define abStack_228 (*(byte (*)[256])(frame + 120))
#define local_240 (*(void * *)(frame + 96))
#define local_23c (*(int *)(frame + 100))
#define local_128 (*(int *)(frame + 376))
#define local_124 (*(byte *)(frame + 380))
#define local_123 (*(byte *)(frame + 381))
#define local_122 (*(byte *)(frame + 382))
#define local_121 (*(byte *)(frame + 383))
#define local_120 (*(byte *)(frame + 384))
#define local_11f (*(byte *)(frame + 385))
#define local_11e (*(byte *)(frame + 386))
#define local_11d (*(byte *)(frame + 387))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10020354
 */

void recovered_10020354(int param_1,int param_2)

{
  unsigned char frame[704] __attribute__((aligned(16))) = {0};

  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  int iVar11;
  uint *puVar12;
  char *pcVar13;
  uint *puVar14;
  undefined8 *puVar15;
  int iVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  bool bVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  bool bVar23;
  bool bVar24;
  uint uVar25;

  if (param_2 != 0) {
    if (*(char *)(param_2 + 0x31e) == '\x01') {
      uVar4 = *(uint *)(param_2 + 0x324);
    }
    else {
      uVar4 = 0x161c22ff;
    }
    if (*(char *)(param_2 + 799) == '\x01') {
      uVar5 = *(uint *)(param_2 + 0x328);
    }
    else {
      uVar5 = 0x1252b4ff;
    }
    if (param_1 != 0) {
      bVar19 = false;
      uVar6 = *(uint *)(param_2 + 0x52c2c);
      bVar23 = true;
      do {
        bVar3 = bVar23;
        bVar23 = uVar6 != 0;
        uVar6 = 0;
        if (bVar23) {
          uVar8 = 0;
          do {
            puVar14 = (uint *)(param_2 + 0x42c + uVar8 * 0x370);
            uVar6 = *puVar14;
            if (bVar19 == (uVar6 == 7)) goto LAB_10020474;
            iVar16 = 0;
            uVar21 = puVar14[2];
            uVar22 = puVar14[4];
            if ((char)puVar14[0xdb] == '\0') {
              iVar16 = *(int *)(param_2 + 0x544b8);
            }
            puVar17 = (undefined8 *)((uVar21 + 0x48) - iVar16);
            iVar11 = (int)puVar17 + uVar22;
            if (((iVar11 < 0x48) || (DAT_10024118 + -0x16 <= (int)puVar17)) || (7 < uVar6))
            goto LAB_10020474;
            puVar9 = (undefined8 *)puVar14[1];
            uVar20 = puVar14[3];
            uVar25 = uVar4;
            switch((uintptr_t)(uVar6)) {
            default:
              uVar6 = puVar14[0xd6];
              pcVar13 = (char *)(puVar14 + 5);
              goto LAB_10020460;
            case 2:
              recovered_1001eca0(param_1,(int)puVar9,(int)puVar17,(char *)(puVar14 + 5),
                                 puVar14[0xd6],uVar5);
              uVar6 = recovered_1001a550((char *)(puVar14 + 5),puVar14[0xd6]);
              recovered_1001e6d0((undefined8 *)param_1,puVar9,(undefined8 *)(iVar11 + -2),uVar6,1,
                                 uVar5);
              break;
            case 3:
              local_128 = -1;
              recovered_1000c270(param_2,(byte *)(puVar14 + 0x35),(char *)&local_124);
              uVar6 = (uint)local_124;
              iVar16 = 0;
              if (uVar6 != 0) {
                if (uVar6 - 0x41 < 0x1a) {
                  uVar6 = uVar6 | 0x20;
                }
                if ((uVar6 == 0x68) && (uVar6 = (uint)local_123, uVar6 != 0)) {
                  if (uVar6 - 0x41 < 0x1a) {
                    uVar6 = uVar6 | 0x20;
                  }
                  if (uVar6 == 0x74) {
                    uVar6 = (uint)local_122;
                    if (uVar6 == 0) {
code_r0x10020cdc:
                      uVar6 = (uint)local_122;
                      if (uVar6 != 0) {
                        if (uVar6 - 0x41 < 0x1a) {
                          uVar6 = uVar6 | 0x20;
                        }
                        if ((uVar6 == 0x74) && (uVar6 = (uint)local_121, uVar6 != 0)) {
                          if (uVar6 - 0x41 < 0x1a) {
                            uVar6 = uVar6 | 0x20;
                          }
                          if ((uVar6 == 0x70) && (uVar6 = (uint)local_120, uVar6 != 0)) {
                            if (uVar6 - 0x41 < 0x1a) {
                              uVar6 = uVar6 | 0x20;
                            }
                            if ((uVar6 == 0x73) && (uVar6 = (uint)local_11f, uVar6 != 0)) {
                              if (uVar6 - 0x41 < 0x1a) {
                                uVar6 = uVar6 | 0x20;
                              }
                              if ((uVar6 == 0x3a) && (uVar6 = (uint)local_11e, uVar6 != 0)) {
                                if (uVar6 - 0x41 < 0x1a) {
                                  uVar6 = uVar6 | 0x20;
                                }
                                if ((uVar6 == 0x2f) && (uVar6 = (uint)local_11d, uVar6 != 0)) {
                                  if (uVar6 - 0x41 < 0x1a) {
                                    uVar6 = uVar6 | 0x20;
                                  }
                                  if (uVar6 == 0x2f) goto LAB_10020868;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                    else {
                      if (uVar6 - 0x41 < 0x1a) {
                        uVar6 = uVar6 | 0x20;
                      }
                      if ((uVar6 != 0x74) || (uVar6 = (uint)local_121, uVar6 == 0))
                      goto code_r0x10020cdc;
                      if (uVar6 - 0x41 < 0x1a) {
                        uVar6 = uVar6 | 0x20;
                      }
                      if ((uVar6 != 0x70) || (uVar6 = (uint)local_120, uVar6 == 0))
                      goto code_r0x10020cdc;
                      if (uVar6 - 0x41 < 0x1a) {
                        uVar6 = uVar6 | 0x20;
                      }
                      if ((uVar6 != 0x3a) || (uVar6 = (uint)local_11f, uVar6 == 0))
                      goto code_r0x10020cdc;
                      if (uVar6 - 0x41 < 0x1a) {
                        uVar6 = uVar6 | 0x20;
                      }
                      if ((uVar6 != 0x2f) || (uVar6 = (uint)local_11e, uVar6 == 0))
                      goto code_r0x10020cdc;
                      if (uVar6 - 0x41 < 0x1a) {
                        uVar6 = uVar6 | 0x20;
                      }
                      if (uVar6 != 0x2f) goto code_r0x10020cdc;
LAB_10020868:
                      iVar16 = recovered_1001d390(&local_124,(char *)&local_124);
                    }
                  }
                }
              }
              memset(&local_240,0,0x18);
              bVar23 = recovered_1000d880((char *)&local_124,&local_128,abStack_228);
              if (bVar23) {
                iVar1 = Ram40010800;
                if ((iVar1 == 0x50414d57) && (iVar1 = Ram40010804, iVar1 != 0)) {
                  uVar6 = Ram40010808;
                  bVar24 = 0xb < uVar6;
                  bVar23 = uVar6 == 0xc;
                  if (bVar24) {
                    uVar6 = Ram40010808;
                    bVar23 = uVar6 == 0xe3;
                  }
                  if ((!bVar24 || uVar6 < 0xe3) || bVar23) goto LAB_10020b40;
                  pcVar2 = (code *)UINT_400108e0;
                  if (pcVar2 != (code *)0x0) {
                    uVar6 = (*pcVar2)(local_128,(char *)abStack_228,&local_240);
LAB_10020dd4:
                    if (uVar6 != 0) {
                      recovered_100212e4(param_1,(int *)&local_240,(int)puVar9,(int)puVar17,uVar20,
                                         uVar22);
                      if ((((local_23c == 0) && (local_240 != (void *)0x0)) &&
                          (iVar16 = Ram40010800, iVar16 == 0x50414d57)) &&
                         (iVar16 = Ram40010804, iVar16 != 0)) {
                        uVar6 = Ram40010808;
                        bVar23 = 0xb < uVar6;
                        if (bVar23) {
                          uVar6 = Ram40010808;
                        }
                        if ((bVar23 && 0x53 < uVar6) &&
                           (pcVar2 = (code *)UINT_40010850, pcVar2 != (code *)0x0)) {
                          (*pcVar2)(local_240);
                        }
                      }
                      memset(&local_240,0,0x18);
                      break;
                    }
                  }
                }
                else {
LAB_10020b40:
                  iVar1 = Ram40010800;
                  if ((iVar1 == 0x50414d57) && (iVar1 = Ram40010804, iVar1 != 0)) {
                    uVar6 = Ram40010808;
                    bVar23 = 0xb < uVar6;
                    if (bVar23) {
                      uVar6 = Ram40010808;
                    }
                    if ((bVar23 && 0x5b < uVar6) &&
                       (pcVar2 = (code *)UINT_40010858, pcVar2 != (code *)0x0)) {
                      uVar6 = (*pcVar2)((char *)abStack_228,&local_240);
                      goto LAB_10020dd4;
                    }
                  }
                }
                if (iVar16 != 0) {
                  iVar16 = Ram40010800;
                  if ((iVar16 == 0x50414d57) && (iVar16 = Ram40010804, iVar16 != 0)) {
                    uVar6 = Ram40010808;
                    bVar23 = 0xb < uVar6;
                    if (bVar23) {
                      uVar6 = Ram40010808;
                    }
                    if ((bVar23 && 0x3f < uVar6) &&
                       (pcVar2 = (code *)UINT_4001083c, pcVar2 != (code *)0x0)) {
                      (*pcVar2)((char *)abStack_228);
                    }
                  }
                  pf_varargs_10023fa4__4_((char *)(param_2 + 0x141),0xc0,&DAT_10022ca6,((uintptr_t)pf_module_state + 0x12a6U));
                }
              }
              recovered_1001e6d0((undefined8 *)param_1,puVar9,puVar17,uVar20,uVar22,0xe8ecefff);
              recovered_1001e6d0((undefined8 *)param_1,puVar9,puVar17,uVar20,1,0x7a848eff);
              recovered_1001e6d0((undefined8 *)param_1,puVar9,(undefined8 *)(iVar11 + -1),uVar20,1,
                                 0x7a848eff);
              recovered_1001e6d0((undefined8 *)param_1,puVar9,puVar17,1,uVar22,0x7a848eff);
              recovered_1001e6d0((undefined8 *)param_1,(undefined8 *)((int)puVar9 + (uVar20 - 1)),
                                 puVar17,1,uVar22,0x7a848eff);
              puVar17 = (undefined8 *)((int)puVar17 + 0xc);
              pcVar13 = (char *)(puVar14 + 5);
              uVar25 = 0x444a52ff;
              if ((char)*(uint *)pcVar13 == '\0') {
                pcVar13 = str_10023463;
              }
              goto LAB_10020ccc;
            case 4:
              recovered_1001e6d0((undefined8 *)param_1,puVar9,puVar17,uVar20,uVar22,0xffffffff);
              uVar6 = 0x7a848eff;
              if (*(uint *)(param_2 + 0x544b4) == uVar8) {
                uVar6 = 0x165cb0ff;
              }
              recovered_1001e6d0((undefined8 *)param_1,puVar9,puVar17,uVar20,1,uVar6);
              recovered_1001e6d0((undefined8 *)param_1,puVar9,(undefined8 *)(iVar11 + -1),uVar20,1,
                                 uVar6);
              recovered_1001e6d0((undefined8 *)param_1,puVar9,puVar17,1,uVar22,uVar6);
              recovered_1001e6d0((undefined8 *)param_1,(undefined8 *)((int)puVar9 + (uVar20 - 1)),
                                 puVar17,1,uVar22,uVar6);
              puVar18 = (undefined8 *)((int)puVar9 + 6);
              puVar7 = puVar14 + 0x95;
              puVar12 = puVar7;
              uVar6 = uVar4;
              if ((char)*puVar7 == '\0') {
                uVar6 = 0x7e848aff;
                puVar12 = puVar14 + 5;
              }
              recovered_1001eca0(param_1,(int)puVar18,(int)(puVar17 + 1),(char *)puVar12,1,uVar6);
              if ((*(uint *)(param_2 + 0x544b4) == uVar8) &&
                 ((*(uint *)(param_1 + 0x205bc0) / 0x18 & 1) == 0)) {
                uVar6 = recovered_1001a550((char *)puVar7,1);
                puVar9 = (undefined8 *)((int)puVar9 + (uVar20 - 8));
                if ((int)(uVar6 + (int)puVar18) < (int)puVar9) {
                  puVar9 = (undefined8 *)(uVar6 + (int)puVar18);
                }
                if ((int)uVar6 < 0) {
                  puVar9 = puVar18;
                }
                recovered_1001e6d0((undefined8 *)param_1,puVar9,(undefined8 *)((int)puVar17 + 5),1,
                                   uVar22 - 10,uVar4);
              }
              break;
            case 5:
              recovered_1001e6d0((undefined8 *)param_1,puVar9,puVar17,uVar20,uVar22,0xd6e1eaff);
              recovered_1001e6d0((undefined8 *)param_1,puVar9,puVar17,uVar20,1,0x7a848eff);
              recovered_1001e6d0((undefined8 *)param_1,puVar9,(undefined8 *)(iVar11 + -1),uVar20,1,
                                 0x7a848eff);
              recovered_1001e6d0((undefined8 *)param_1,puVar9,puVar17,1,uVar22,0x7a848eff);
              recovered_1001e6d0((undefined8 *)param_1,(undefined8 *)((int)puVar9 + (uVar20 - 1)),
                                 puVar17,1,uVar22,0x7a848eff);
              puVar17 = (undefined8 *)((int)puVar17 + 9);
              pcVar13 = (char *)(puVar14 + 5);
LAB_10020ccc:
              puVar9 = (undefined8 *)((int)puVar9 + 10);
              uVar6 = 1;
LAB_10020460:
              recovered_1001eca0(param_1,(int)puVar9,(int)puVar17,pcVar13,uVar6,uVar25);
              break;
            case 6:
              recovered_1001e6d0((undefined8 *)param_1,puVar9,puVar17,uVar20,uVar22,0x7a848eff);
              break;
            case 7:
              recovered_1001e6d0((undefined8 *)param_1,puVar9,puVar17,uVar20,uVar22,puVar14[0xd8]);
              if (0 < (int)puVar14[0xda]) {
                puVar17 = (undefined8 *)((int)puVar9 + uVar20);
                iVar11 = 0;
                puVar18 = (undefined8 *)(((uVar21 + uVar22) - iVar16) + 0x47);
                do {
                  puVar17 = (undefined8 *)((int)puVar17 + -1);
                  uVar6 = puVar14[0xd9];
                  puVar15 = (undefined8 *)((int)puVar9 + iVar11);
                  puVar10 = (undefined8 *)((uVar21 - iVar16) + iVar11 + 0x48);
                  recovered_1001e6d0((undefined8 *)param_1,puVar15,puVar10,uVar20,1,uVar6);
                  recovered_1001e6d0((undefined8 *)param_1,puVar15,puVar18,uVar20,1,uVar6);
                  recovered_1001e6d0((undefined8 *)param_1,puVar15,puVar10,1,uVar22,uVar6);
                  recovered_1001e6d0((undefined8 *)param_1,puVar17,puVar10,1,uVar22,uVar6);
                  uVar22 = uVar22 - 2;
                  puVar18 = (undefined8 *)((int)puVar18 + -1);
                  uVar20 = uVar20 - 2;
                  iVar11 = iVar11 + 1;
                } while (iVar11 < (int)puVar14[0xda]);
              }
            }
LAB_10020474:
            uVar8 = uVar8 + 1;
            uVar6 = *(uint *)(param_2 + 0x52c2c);
          } while (uVar8 < uVar6);
        }
        bVar19 = true;
        bVar23 = false;
      } while (bVar3);
    }
  }
  return;
}

#undef DAT_10022ca6
#undef DAT_10024118
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef Ram40010800
#undef Ram40010804
#undef Ram40010808
#undef UINT_4001083c
#undef UINT_40010850
#undef UINT_40010858
#undef UINT_400108e0
#undef str_10023463
#undef abStack_228
#undef local_240
#undef local_23c
#undef local_128
#undef local_124
#undef local_123
#undef local_122
#undef local_121
#undef local_120
#undef local_11f
#undef local_11e
#undef local_11d

#undef DAT_10022ca6
#define DAT_10022ca6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x25eU)))
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
#define local_11f (*(byte *)(frame + 561))
#define local_11e (*(byte *)(frame + 562))
#define local_11d (*(byte *)(frame + 563))
#define abStack_328 (*(byte (*)[256])(frame + 40))
#define acStack_224 (*(char (*)[256])(frame + 300))
#define local_340 (*(void * *)(frame + 16))
#define local_33c (*(int *)(frame + 20))
#define local_228 (*(int *)(frame + 296))
#define local_124 (*(byte *)(frame + 556))
#define local_123 (*(byte *)(frame + 557))
#define local_122 (*(byte *)(frame + 558))
#define local_121 (*(byte *)(frame + 559))
#define local_120 (*(byte *)(frame + 560))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10020e98
 */

void recovered_10020e98(int param_1,int param_2,undefined8 *param_3,undefined8 *param_4,uint param_5
                       ,uint param_6)

{
  unsigned char frame[880] __attribute__((aligned(16))) = {0};

  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;

  if (param_1 == 0 || param_2 == 0) {
    return;
  }
  if (*(char *)(param_2 + 0x31c) == '\x01') {
    recovered_1001e6d0((undefined8 *)param_1,param_3,param_4,param_5,param_6,
                       *(uint *)(param_2 + 800));
  }
  if (*(char *)(param_2 + 0x31d) != '\x01') {
    return;
  }
  if (*(byte *)(param_2 + 0x32c) == 0) {
    return;
  }
  local_228 = -1;
  recovered_1000c270(param_2,(byte *)(param_2 + 0x32c),(char *)&local_124);
  uVar3 = (uint)local_124;
  bVar6 = false;
  if (uVar3 != 0) {
    if (uVar3 - 0x41 < 0x1a) {
      uVar3 = uVar3 | 0x20;
    }
    if (uVar3 == 0x68) {
      uVar3 = (uint)local_123;
      if (uVar3 == 0) {
code_r0x1002106c:
        uVar3 = (uint)local_123;
        if (uVar3 != 0) {
          if (uVar3 - 0x41 < 0x1a) {
            uVar3 = uVar3 | 0x20;
          }
          if ((uVar3 == 0x74) && (uVar3 = (uint)local_122, uVar3 != 0)) {
            if (uVar3 - 0x41 < 0x1a) {
              uVar3 = uVar3 | 0x20;
            }
            if ((uVar3 == 0x74) && (uVar3 = (uint)local_121, uVar3 != 0)) {
              if (uVar3 - 0x41 < 0x1a) {
                uVar3 = uVar3 | 0x20;
              }
              if ((uVar3 == 0x70) && (uVar3 = (uint)local_120, uVar3 != 0)) {
                if (uVar3 - 0x41 < 0x1a) {
                  uVar3 = uVar3 | 0x20;
                }
                if ((uVar3 == 0x73) && (uVar3 = (uint)local_11f, uVar3 != 0)) {
                  if (uVar3 - 0x41 < 0x1a) {
                    uVar3 = uVar3 | 0x20;
                  }
                  if ((uVar3 == 0x3a) && (uVar3 = (uint)local_11e, uVar3 != 0)) {
                    if (uVar3 - 0x41 < 0x1a) {
                      uVar3 = uVar3 | 0x20;
                    }
                    if ((uVar3 == 0x2f) && (uVar3 = (uint)local_11d, uVar3 != 0)) {
                      if (uVar3 - 0x41 < 0x1a) {
                        uVar3 = uVar3 | 0x20;
                      }
                      if (uVar3 == 0x2f) goto LAB_1002102c;
                    }
                  }
                }
              }
            }
          }
        }
      }
      else {
        if (uVar3 - 0x41 < 0x1a) {
          uVar3 = uVar3 | 0x20;
        }
        if ((uVar3 != 0x74) || (uVar3 = (uint)local_122, uVar3 == 0)) goto code_r0x1002106c;
        if (uVar3 - 0x41 < 0x1a) {
          uVar3 = uVar3 | 0x20;
        }
        if ((uVar3 != 0x74) || (uVar3 = (uint)local_121, uVar3 == 0)) goto code_r0x1002106c;
        if (uVar3 - 0x41 < 0x1a) {
          uVar3 = uVar3 | 0x20;
        }
        if ((uVar3 != 0x70) || (uVar3 = (uint)local_120, uVar3 == 0)) goto code_r0x1002106c;
        if (uVar3 - 0x41 < 0x1a) {
          uVar3 = uVar3 | 0x20;
        }
        if ((uVar3 != 0x3a) || (uVar3 = (uint)local_11f, uVar3 == 0)) goto code_r0x1002106c;
        if (uVar3 - 0x41 < 0x1a) {
          uVar3 = uVar3 | 0x20;
        }
        if ((uVar3 != 0x2f) || (uVar3 = (uint)local_11e, uVar3 == 0)) goto code_r0x1002106c;
        if (uVar3 - 0x41 < 0x1a) {
          uVar3 = uVar3 | 0x20;
        }
        if (uVar3 != 0x2f) goto code_r0x1002106c;
LAB_1002102c:
        iVar4 = recovered_1001d390(&local_124,acStack_224);
        if (iVar4 == 0) {
          return;
        }
        pf_varargs_10023fa4__4_((char *)&local_124,0x100,&DAT_10022ca6,(uint)acStack_224);
        bVar6 = true;
      }
    }
  }
  memset(&local_340,0,0x18);
  bVar2 = recovered_1000d880((char *)&local_124,&local_228,abStack_328);
  if (!bVar2) {
    return;
  }
  iVar4 = Ram40010800;
  if ((iVar4 == 0x50414d57) && (iVar4 = Ram40010804, iVar4 != 0)) {
    uVar3 = Ram40010808;
    bVar5 = 0xb < uVar3;
    bVar2 = uVar3 == 0xc;
    if (bVar5) {
      uVar3 = Ram40010808;
      bVar2 = uVar3 == 0xe3;
    }
    if ((!bVar5 || uVar3 < 0xe3) || bVar2) goto LAB_100211b4;
    pcVar1 = (code *)UINT_400108e0;
    if (pcVar1 == (code *)0x0) goto LAB_100211e0;
    uVar3 = (*pcVar1)(local_228,(char *)abStack_328,&local_340);
  }
  else {
LAB_100211b4:
    iVar4 = Ram40010800;
    if ((iVar4 != 0x50414d57) || (iVar4 = Ram40010804, iVar4 == 0)) goto LAB_100211e0;
    uVar3 = Ram40010808;
    bVar2 = 0xb < uVar3;
    if (bVar2) {
      uVar3 = Ram40010808;
    }
    if ((!bVar2 || uVar3 < 0x5c) || (pcVar1 = (code *)UINT_40010858, pcVar1 == (code *)0x0))
    goto LAB_100211e0;
    uVar3 = (*pcVar1)((char *)abStack_328,&local_340);
  }
  if (uVar3 != 0) {
    recovered_10020018(param_1,(int *)&local_340,(uint)param_3,(int)param_4,param_5,param_6);
    if ((((local_33c == 0) && (local_340 != (void *)0x0)) &&
        (iVar4 = Ram40010800, iVar4 == 0x50414d57)) && (iVar4 = Ram40010804, iVar4 != 0)) {
      uVar3 = Ram40010808;
      bVar6 = 0xb < uVar3;
      if (bVar6) {
        uVar3 = Ram40010808;
      }
      if ((bVar6 && 0x53 < uVar3) && (pcVar1 = (code *)UINT_40010850, pcVar1 != (code *)0x0)) {
        (*pcVar1)(local_340);
      }
    }
    memset(&local_340,0,0x18);
    return;
  }
LAB_100211e0:
  if (bVar6) {
    recovered_1001d8f8((char *)abStack_328);
    pf_varargs_10023fa4__4_((char *)(param_2 + 0x141),0xc0,&DAT_10022ca6,((uintptr_t)pf_module_state + 0x12deU));
  }
  return;
}

#undef DAT_10022ca6
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef Ram40010800
#undef Ram40010804
#undef Ram40010808
#undef UINT_40010850
#undef UINT_40010858
#undef UINT_400108e0
#undef local_11f
#undef local_11e
#undef local_11d
#undef abStack_328
#undef acStack_224
#undef local_340
#undef local_33c
#undef local_228
#undef local_124
#undef local_123
#undef local_122
#undef local_121
#undef local_120

#undef DAT_10024114
#define DAT_10024114 (*(int *)(((uintptr_t)pf_module_state + 0x16ccU)))
#undef DAT_10024118
#define DAT_10024118 (*(int *)(((uintptr_t)pf_module_state + 0x16d0U)))
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
#undef UINT_40010918
#define UINT_40010918 (*(uint *)(0x40010918U))
#define local_3c (*(uint *)(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100212e4
 */

void recovered_100212e4(int param_1,int *param_2,int param_3,int param_4,uint param_5,uint param_6)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  ushort uVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  code *pcVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  byte *pbVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  byte *pbVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  byte bVar22;
  uint uVar23;
  uint unaff_r11;
  uint uVar24;
  bool bVar25;
  ulonglong uVar26;
  ulonglong uVar27;

  if (param_2 == (int *)0x0) {
    return;
  }
  iVar13 = *param_2;
  if (param_2[1] != 0) {
    iVar13 = 0;
  }
  iVar6 = 0;
  if (param_1 != 0) {
    iVar6 = iVar13;
  }
  if (param_1 == 0 || iVar6 == 0) {
    return;
  }
  uVar20 = param_2[3];
  if (uVar20 != 0) {
    unaff_r11 = param_2[4];
  }
  if (uVar20 == 0 || unaff_r11 == 0) {
    return;
  }
  uVar14 = param_5;
  if (0 < (int)param_5) {
    uVar14 = param_6;
  }
  if ((int)uVar14 < 1) {
    return;
  }
  uVar14 = *(uint *)(param_1 + 0x57d4);
  if (uVar14 == 0) goto LAB_100213d0;
  iVar6 = Ram40010800;
  if ((iVar6 == 0x50414d57) && (iVar6 = Ram40010804, iVar6 != 0)) {
    uVar20 = Ram40010808;
    bVar25 = 0xb < uVar20;
    if (bVar25) {
      uVar20 = Ram40010808;
    }
    if (((!bVar25 || uVar20 < 0x11c) || (pcVar7 = (code *)UINT_40010918, pcVar7 == (code *)0x0)) ||
       (uVar20 = (*pcVar7)((void *)(param_1 + 0x3d4),uVar14), uVar20 == 0)) goto LAB_100213b4;
  }
  else {
LAB_100213b4:
    *(undefined1 *)(param_1 + 0x57d8) = 0;
  }
  *(uint *)(param_1 + 0x57d4) = 0;
  uVar20 = param_2[3];
  unaff_r11 = param_2[4];
LAB_100213d0:
  uVar26 = recovered_10003ab0((ulonglong)param_5 * (ulonglong)unaff_r11,(ulonglong)uVar20);
  uVar14 = (uint)uVar26;
  uVar8 = param_5;
  if ((int)param_6 < (int)(uint)uVar26) {
    uVar26 = recovered_10003ab0((ulonglong)param_6 * (ulonglong)uVar20,(ulonglong)unaff_r11);
    uVar8 = (uint)uVar26;
    uVar14 = param_6;
  }
  iVar6 = DAT_10024114;
  uVar20 = uVar8;
  if (0 < (int)uVar8) {
    uVar20 = uVar14;
  }
  if (0 < (int)uVar20) {
    iVar15 = param_4 + (int)(param_6 - uVar14) / 2;
    iVar9 = param_3 + (int)(param_5 - uVar8) / 2;
    uVar20 = 0;
    local_3c = (DAT_10024114 * iVar15 + iVar9) * 4 | 1;
    iVar10 = DAT_10024118 + -0x16;
    iVar2 = DAT_10024114 * 4;
    do {
      uVar26 = recovered_10003ab0((ulonglong)uVar20 * (ulonglong)(uint)param_2[4],(ulonglong)uVar14)
      ;
      uVar24 = iVar15 + uVar20;
      if ((0x47 < (int)uVar24) && ((int)uVar24 < iVar10)) {
        uVar19 = 0;
        uVar21 = local_3c;
        do {
          uVar23 = param_2[3];
          uVar27 = recovered_10003ab0((ulonglong)uVar19 * (ulonglong)uVar23,(ulonglong)uVar8);
          uVar18 = iVar9 + uVar19;
          if (((-1 < (int)(uVar18 | uVar24)) && (iVar17 = *(int *)(param_1 + 0x340), iVar17 != 0))
             && ((int)uVar18 < iVar6)) {
            pbVar11 = (byte *)(iVar13 + (uVar23 * (int)uVar26 + (int)uVar27) * 4);
            bVar4 = pbVar11[3];
            if (bVar4 != 0) {
              bVar5 = pbVar11[1];
              bVar22 = pbVar11[2];
              iVar12 = iVar17 + uVar21;
              if (bVar4 == 0xff) {
                *(byte *)(iVar12 + -1) = *pbVar11;
                *(byte *)(iVar17 + uVar21) = bVar5;
              }
              else {
                pbVar16 = (byte *)(iVar17 + uVar21);
                bVar3 = *pbVar16;
                uVar1 = bVar4 ^ 0xff;
                *(char *)(iVar12 + -1) =
                     (char)(((int)(short)uVar1 * (int)(short)(ushort)*(byte *)(iVar12 + -1) +
                             (int)(short)(ushort)bVar4 * (int)(short)(ushort)*pbVar11 + 0x7fU) /
                           0xff);
                bVar22 = (byte)(((int)(short)uVar1 * (int)(short)(ushort)pbVar16[1] +
                                 (int)(short)(ushort)bVar4 * (int)(short)(ushort)bVar22 + 0x7fU) /
                               0xff);
                *pbVar16 = (byte)(((int)(short)uVar1 * (int)(short)(ushort)bVar3 +
                                   (int)(short)(ushort)bVar4 * (int)(short)(ushort)bVar5 + 0x7fU) /
                                 0xff);
              }
              *(byte *)(iVar17 + uVar21 + 1) = bVar22;
              *(undefined1 *)(iVar12 + 2) = 0xff;
            }
          }
          uVar19 = uVar19 + 1;
          uVar21 = uVar21 + 4;
        } while (uVar8 != uVar19);
      }
      uVar20 = uVar20 + 1;
      local_3c = local_3c + iVar2;
    } while ((int)uVar20 < (int)uVar14);
  }
  return;
}

#undef DAT_10024114
#undef DAT_10024118
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef Ram40010800
#undef Ram40010804
#undef Ram40010808
#undef UINT_40010918
#undef local_3c

#undef DAT_10022ca6
#define DAT_10022ca6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x25eU)))
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
#undef UINT_4001088c
#define UINT_4001088c (*(uint *)(0x4001088cU))
#undef str_10022c1c
#define str_10022c1c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1d4U)))
#undef str_100231a6
#define str_100231a6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x75eU)))
#undef str_10023e1e
#define str_10023e1e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x13d6U)))
#undef str_10023e34
#define str_10023e34 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x13ecU)))
#undef str_10023e4a
#define str_10023e4a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1402U)))
#define acStack_58 (*(char (*)[64])(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10021620
 */

void recovered_10021620(int param_1)

{
  unsigned char frame[144] __attribute__((aligned(16))) = {0};

  int iVar1;
  code *pcVar2;
  ulong size;
  uint uVar3;
  char *vararg0;
  int iVar4;
  bool bVar5;

  iVar4 = 0;
  if (((param_1 != 0) && (*(uint *)(param_1 + 0x205bac) != 0)) &&
     (*(uint *)(param_1 + 0x205bb0) < *(uint *)(param_1 + 0x205bac))) {
    iVar4 = *(uint *)(param_1 + 0x205bb0) * 0x555cc + param_1 + 0x58e4;
  }
  uVar3 = ~(uint)*(byte *)(param_1 + 0x57dc) & 1;
  *(char *)(param_1 + 0x57dc) = (char)uVar3;
  pf_varargs_10023fa4__4_(acStack_58,0x40,str_10023e4a,uVar3);
  iVar1 = Ram40010800;
  if ((iVar1 == 0x50414d57) && (iVar1 = Ram40010804, iVar1 != 0)) {
    uVar3 = Ram40010808;
    bVar5 = 0xb < uVar3;
    if (bVar5) {
      uVar3 = Ram40010808;
    }
    if ((bVar5 && 0x8f < uVar3) && (pcVar2 = (code *)UINT_4001088c, pcVar2 != (code *)0x0)) {
      (*pcVar2)(str_100231a6);
    }
  }
  size = strlen(acStack_58);
  iVar1 = Ram40010800;
  if ((iVar1 == 0x50414d57) && (iVar1 = Ram40010804, iVar1 != 0)) {
    uVar3 = Ram40010808;
    bVar5 = 0xb < uVar3;
    if (bVar5) {
      uVar3 = Ram40010808;
    }
    if ((bVar5 && 0x3b < uVar3) && (pcVar2 = (code *)UINT_40010838, pcVar2 != (code *)0x0)) {
      (*pcVar2)(str_10022c1c,acStack_58,size);
    }
  }
  if (iVar4 != 0) {
    vararg0 = str_10023e34;
    if (*(char *)(param_1 + 0x57dc) != '\0') {
      vararg0 = str_10023e1e;
    }
    pf_varargs_10023fa4__4_((char *)(iVar4 + 0x141),0xc0,&DAT_10022ca6,(uint)vararg0);
  }
  *(undefined1 *)(param_1 + 0x57da) = 1;
  return;
}

#undef DAT_10022ca6
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef Ram40010800
#undef Ram40010804
#undef Ram40010808
#undef UINT_40010838
#undef UINT_4001088c
#undef str_10022c1c
#undef str_100231a6
#undef str_10023e1e
#undef str_10023e34
#undef str_10023e4a
#undef acStack_58

#undef DAT_10022c1b
#define DAT_10022c1b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1d3U)))
#undef DAT_10022ca6
#define DAT_10022ca6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x25eU)))
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
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100217b8
 */

void recovered_100217b8(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  code *pcVar2;
  ulong textSize;
  uint uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  bool bVar8;

  iVar7 = 0;
  bVar1 = true;
  if ((param_1 != 0) && (*(uint *)(param_1 + 0x205bac) != 0)) {
    piVar4 = (int *)0x0;
    if (*(uint *)(param_1 + 0x205bac) <= *(uint *)(param_1 + 0x205bb0)) goto LAB_10021864;
    iVar6 = *(uint *)(param_1 + 0x205bb0) * 0x555cc + param_1;
    iVar7 = iVar6 + 0x58e4;
    iVar5 = *(int *)(iVar6 + 0x59d98);
    if (iVar5 < 0) {
      bVar1 = false;
    }
    else {
      bVar1 = false;
      if (iVar5 < *(int *)(iVar6 + 0x58510)) {
        piVar4 = (int *)(iVar5 * 0x370 + iVar7 + 0x42c);
        if (*piVar4 != 4) {
          piVar4 = (int *)0x0;
        }
        goto LAB_10021864;
      }
    }
  }
  piVar4 = (int *)0x0;
LAB_10021864:
  if (*(char *)(param_1 + 0x57db) == '\x01') {
    piVar4 = (int *)(param_1 + 0x57de);
  }
  else if (piVar4 == (int *)0x0) {
    piVar4 = (int *)&DAT_10022c1b;
    if (!bVar1) {
      piVar4 = (int *)(iVar7 + 1);
    }
  }
  else {
    piVar4 = piVar4 + 0x95;
  }
  textSize = strlen((char *)piVar4);
  iVar5 = Ram40010800;
  if ((iVar5 == 0x50414d57) && (iVar5 = Ram40010804, iVar5 != 0)) {
    uVar3 = Ram40010808;
    bVar8 = 0xb < uVar3;
    if (bVar8) {
      uVar3 = Ram40010808;
    }
    if (((bVar8 && 0x183 < uVar3) && (pcVar2 = (code *)UINT_40010980, pcVar2 != (code *)0x0)) &&
       (uVar3 = (*pcVar2)((char *)piVar4,textSize), uVar3 != 0)) {
      if (!bVar1) {
        pf_varargs_10023fa4__4_((char *)(iVar7 + 0x141),0xc0,&DAT_10022ca6,((uintptr_t)pf_module_state + 0x140cU));
      }
      *(undefined1 *)(param_1 + 0x57da) = 1;
      return;
    }
  }
  return;
}

#undef DAT_10022c1b
#undef DAT_10022ca6
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef Ram40010800
#undef Ram40010804
#undef Ram40010808
#undef UINT_40010980

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1002194c
 */

void recovered_1002194c(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  ulong uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  char *text;

  iVar3 = 0;
  bVar1 = true;
  if ((param_1 != 0) && (*(uint *)(param_1 + 0x205bac) != 0)) {
    piVar5 = (int *)0x0;
    if (*(uint *)(param_1 + 0x205bac) <= *(uint *)(param_1 + 0x205bb0)) goto LAB_100219f8;
    iVar4 = *(uint *)(param_1 + 0x205bb0) * 0x555cc + param_1;
    iVar6 = *(int *)(iVar4 + 0x59d98);
    iVar3 = iVar4 + 0x58e4;
    if (iVar6 < 0) {
      bVar1 = false;
    }
    else {
      bVar1 = false;
      if (iVar6 < *(int *)(iVar4 + 0x58510)) {
        bVar1 = false;
        piVar5 = (int *)(iVar6 * 0x370 + iVar3 + 0x42c);
        if (*piVar5 != 4) {
          piVar5 = (int *)0x0;
        }
        goto LAB_100219f8;
      }
    }
  }
  piVar5 = (int *)0x0;
LAB_100219f8:
  if (*(char *)(param_1 + 0x57db) == '\x01') {
    iVar3 = recovered_10021ab4((char *)(param_1 + 0x57de),0x100);
    uVar2 = strlen((char *)(param_1 + 0x57de));
    *(ulong *)(param_1 + 0x58e0) = uVar2;
  }
  else if (piVar5 == (int *)0x0) {
    *(undefined1 *)(param_1 + 0x57db) = 1;
    if (!bVar1) {
      *(undefined4 *)(iVar3 + 0x544b4) = 0xffffffff;
    }
    text = (char *)(param_1 + 0x57de);
    *text = '\0';
    *(undefined4 *)(param_1 + 0x58e0) = 0;
    iVar3 = recovered_10021ab4(text,0x100);
    uVar2 = strlen(text);
    *(ulong *)(param_1 + 0x58e0) = uVar2;
  }
  else {
    iVar3 = recovered_10021ab4((char *)(piVar5 + 0x95),0x80);
  }
  if (iVar3 != 0) {
    *(undefined1 *)(param_1 + 0x57da) = 1;
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
#undef UINT_4001084c
#define UINT_4001084c (*(uint *)(0x4001084cU))
#undef UINT_40010850
#define UINT_40010850 (*(uint *)(0x40010850U))
#undef UINT_40010984
#define UINT_40010984 (*(uint *)(0x40010984U))
#undef UINT_40010988
#define UINT_40010988 (*(uint *)(0x40010988U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10021ab4
 */

undefined4 recovered_10021ab4(char *param_1,int param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  int iVar2;
  code *pcVar3;
  uint uVar4;
  char *outText;
  uint uVar5;
  ulong size;
  byte bVar6;
  uint uVar7;
  undefined4 uVar8;
  bool bVar9;

  iVar2 = Ram40010800;
  uVar8 = 0;
  uVar7 = 0;
  if ((iVar2 == 0x50414d57) && (iVar2 = Ram40010804, iVar2 != 0)) {
    uVar4 = Ram40010808;
    bVar9 = 0xb < uVar4;
    if (bVar9) {
      uVar4 = Ram40010808;
    }
    if ((bVar9 && 0x18b < uVar4) && (pcVar3 = (code *)UINT_40010988, pcVar3 != (code *)0x0)) {
      uVar7 = (*pcVar3)();
    }
  }
  if (((param_1 != (char *)0x0) && (uVar4 = strlen(param_1), uVar7 != 0)) &&
     (uVar4 < param_2 - 1U)) {
    iVar2 = Ram40010800;
    uVar5 = ~uVar4 + param_2;
    if (uVar7 < ~uVar4 + param_2) {
      uVar5 = uVar7;
    }
    if ((iVar2 == 0x50414d57) && (iVar2 = Ram40010804, iVar2 != 0)) {
      uVar7 = Ram40010808;
      bVar9 = 0xb < uVar7;
      if (bVar9) {
        uVar7 = Ram40010808;
      }
      if ((bVar9 && 0x4f < uVar7) && (pcVar3 = (code *)UINT_4001084c, pcVar3 != (code *)0x0)) {
        size = uVar5 + 1;
        outText = (*pcVar3)(size);
        if (outText != (char *)0x0) {
          iVar2 = Ram40010800;
          if ((((iVar2 == 0x50414d57) && (iVar2 = Ram40010804, iVar2 != 0)) &&
              (uVar7 = Ram40010808, 0xb < uVar7)) && (uVar7 = Ram40010808, 0x30 < uVar7 >> 3)) {
            pcVar3 = (code *)UINT_40010984;
            if ((pcVar3 != (code *)0x0) && (uVar7 = (*pcVar3)(outText,size), uVar7 != 0)) {
              uVar5 = 0;
              do {
                bVar1 = outText[uVar5];
                uVar5 = uVar5 + 1;
                bVar6 = bVar1;
                if ((bVar1 & 0xfb) == 9) {
                  bVar6 = 0x20;
                }
                if (bVar1 == 10) {
                  bVar6 = 0x20;
                }
                if ((byte)(bVar6 - 0x20) < 0x5f) {
                  param_1[uVar4] = bVar6;
                  uVar4 = uVar4 + 1;
                  uVar8 = 1;
                }
              } while ((uVar5 < uVar7) && (uVar4 < param_2 - 1U));
            }
          }
          else if (size != 0) {
            *outText = '\0';
          }
          param_1[uVar4] = '\0';
          iVar2 = Ram40010800;
          if ((iVar2 == 0x50414d57) && (iVar2 = Ram40010804, iVar2 != 0)) {
            uVar7 = Ram40010808;
            bVar9 = 0xb < uVar7;
            if (bVar9) {
              uVar7 = Ram40010808;
            }
            if ((bVar9 && 0x53 < uVar7) && (pcVar3 = (code *)UINT_40010850, pcVar3 != (code *)0x0))
            {
              (*pcVar3)(outText);
            }
          }
        }
      }
    }
  }
  return uVar8;
}

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

#undef DAT_10022ca6
#define DAT_10022ca6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x25eU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10021cf0
 */

void recovered_10021cf0(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  byte *dst;
  int iVar2;

  if ((param_1 != 0) && (*(uint *)(param_1 + 0x205bac) != 0)) {
    if (*(uint *)(param_1 + 0x205bac) <= *(uint *)(param_1 + 0x205bb0)) {
      return;
    }
    iVar2 = *(uint *)(param_1 + 0x205bb0) * 0x555cc + param_1;
    dst = (byte *)(param_1 + 0x57de);
    recovered_1000a604(param_1,iVar2 + 0x58e4,dst);
    pf_varargs_10023fa4__4_((char *)dst,0x100,&DAT_10022ca6,iVar2 + 0x58e5);
    uVar1 = strlen((char *)dst);
    *(ulong *)(param_1 + 0x58e0) = uVar1;
    *(undefined2 *)(param_1 + 0x57da) = 1;
  }
  return;
}

#undef DAT_10022ca6

#undef DAT_10022ca6
#define DAT_10022ca6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x25eU)))
#undef DAT_10023ea0
#define DAT_10023ea0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1458U)))
#undef DAT_10023ea1
#define DAT_10023ea1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1459U)))
#undef DAT_10023ea2
#define DAT_10023ea2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x145aU)))
#undef DAT_10023ea3
#define DAT_10023ea3 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x145bU)))
#undef DAT_10023ea4
#define DAT_10023ea4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x145cU)))
#undef str_10023e84
#define str_10023e84 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x143cU)))
#undef str_10023e91
#define str_10023e91 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1449U)))
#define abStack_224 (*(byte (*)[256])(frame + 412))
#define acStack_124 (*(char (*)[260])(frame + 668))
#define local_3a4 (*(char (*)[384])(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10021d8c
 */

void recovered_10021d8c(int param_1,uint param_2,int param_3)

{
  unsigned char frame[992] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  int iVar2;
  char *pcVar3;
  byte bVar4;
  uint extraout_r1 = 0;
  uint uVar5;
  uint extraout_r1_00 = 0;
  byte *pbVar6;
  ulong uVar7;
  int *piVar8;
  int iVar9;
  byte *pbVar10;
  uint uVar11;
  bool bVar12;

  if (param_3 < 0) {
    return;
  }
  if (*(int *)(param_2 + 0x544b0) <= param_3) {
    return;
  }
  iVar9 = param_3 * 0x188 + param_2;
  if (*(byte *)(iVar9 + 0x52c30) == 0) {
    pf_varargs_10023fa4__4_(acStack_124,0x100,&DAT_10022ca6,param_2 + 1);
  }
  else {
    recovered_1000c270(param_2,(byte *)(iVar9 + 0x52c30),acStack_124);
  }
  pbVar10 = (byte *)(iVar9 + 0x52d38);
  if (*pbVar10 != 0) {
    uVar1 = strlen(str_10023e84);
    uVar5 = extraout_r1;
    if (uVar1 != 0) {
      uVar5 = (uint)*pbVar10;
    }
    if (uVar1 != 0 && uVar5 != 0) {
      pbVar6 = pbVar10;
      do {
        uVar7 = 0;
        while (uVar5 = (uint)pbVar6[uVar7], uVar5 != 0) {
          uVar11 = (uint)(byte)str_10023e84[uVar7];
          if (uVar11 - 0x41 < 0x1a) {
            uVar11 = uVar11 | 0x20;
          }
          if (uVar5 - 0x41 < 0x1a) {
            uVar5 = uVar5 | 0x20;
          }
          if (uVar5 != uVar11) break;
          uVar7 = uVar7 + 1;
          if (uVar1 == uVar7) goto LAB_100220dc;
        }
        if (uVar1 == uVar7) goto LAB_100220dc;
        pbVar6 = pbVar6 + 1;
      } while (*pbVar6 != 0);
    }
    uVar1 = strlen(str_10023e91);
    uVar5 = extraout_r1_00;
    if (uVar1 != 0) {
      uVar5 = (uint)*pbVar10;
    }
    if (uVar1 != 0 && uVar5 != 0) {
      pbVar6 = pbVar10;
      do {
        uVar7 = 0;
        while (uVar5 = (uint)pbVar6[uVar7], uVar5 != 0) {
          uVar11 = (uint)(byte)str_10023e91[uVar7];
          if (uVar11 - 0x41 < 0x1a) {
            uVar11 = uVar11 | 0x20;
          }
          if (uVar5 - 0x41 < 0x1a) {
            uVar5 = uVar5 | 0x20;
          }
          if (uVar5 != uVar11) break;
          uVar7 = uVar7 + 1;
          if (uVar1 == uVar7) goto LAB_100220dc;
        }
        if (uVar1 == uVar7) {
LAB_100220dc:
          recovered_10022230(param_1,param_2,pbVar10);
          return;
        }
        pbVar6 = pbVar6 + 1;
      } while (*pbVar6 != 0);
    }
    iVar2 = recovered_10022230(param_1,param_2,pbVar10);
    if (iVar2 != 0) {
      return;
    }
  }
  uVar11 = 0;
  uVar5 = *(uint *)(param_2 + 0x52c2c);
  local_3a4[0] = '\0';
  if (uVar5 != 0) {
    piVar8 = (int *)(param_2 + 0x780);
    do {
      if (((*piVar8 == param_3) && (piVar8[-0xd5] == 8 || piVar8[-0xd5] == 4)) &&
         (*(byte *)(piVar8 + -0x60) != 0)) {
        if ((local_3a4[0] != '\0') && (uVar1 = strlen(local_3a4), uVar1 < 0x17f)) {
          pcVar3 = local_3a4 + uVar1;
          pcVar3[0] = '&';
          pcVar3[1] = '\0';
        }
        recovered_10022798(local_3a4,(byte *)(piVar8 + -0x60));
        uVar1 = strlen(local_3a4);
        if (uVar1 < 0x17f) {
          pcVar3 = local_3a4 + uVar1;
          pcVar3[0] = '=';
          pcVar3[1] = '\0';
        }
        recovered_10022798(local_3a4,(byte *)(piVar8 + -0x40));
        uVar5 = *(uint *)(param_2 + 0x52c2c);
      }
      uVar11 = uVar11 + 1;
      piVar8 = piVar8 + 0xdc;
    } while (uVar11 < uVar5);
  }
  uVar5 = (uint)*(byte *)(iVar9 + 0x52d30);
  if (uVar5 == 0) {
    pcVar3 = &DAT_10023ea0;
LAB_10022104:
    if (*pcVar3 == '\0') {
      pf_varargs_10023fa4__4_((char *)(param_2 + 0x141),0xc0,&DAT_10022ca6,((uintptr_t)pf_module_state + 0x145dU));
      goto LAB_10022218;
    }
  }
  else {
    if (uVar5 - 0x41 < 0x1a) {
      uVar5 = uVar5 | 0x20;
    }
    if (uVar5 == 0x70) {
      uVar5 = (uint)*(byte *)(iVar9 + 0x52d31);
      if (uVar5 == 0) {
        pcVar3 = &DAT_10023ea1;
      }
      else {
        if (uVar5 - 0x41 < 0x1a) {
          uVar5 = uVar5 | 0x20;
        }
        if (uVar5 != 0x6f) goto LAB_10022110;
        uVar5 = (uint)*(byte *)(iVar9 + 0x52d32);
        if (uVar5 == 0) {
          pcVar3 = &DAT_10023ea2;
        }
        else {
          if (uVar5 - 0x41 < 0x1a) {
            uVar5 = uVar5 | 0x20;
          }
          if (uVar5 != 0x73) goto LAB_10022110;
          uVar5 = (uint)*(byte *)(iVar9 + 0x52d33);
          if (uVar5 == 0) {
            pcVar3 = &DAT_10023ea3;
          }
          else {
            if (uVar5 - 0x41 < 0x1a) {
              uVar5 = uVar5 | 0x20;
            }
            bVar12 = uVar5 != 0x74;
            if (!bVar12) {
              uVar5 = (uint)*(byte *)(iVar9 + 0x52d34);
            }
            if (bVar12 || uVar5 != 0) goto LAB_10022110;
            pcVar3 = &DAT_10023ea4;
          }
        }
      }
      goto LAB_10022104;
    }
  }
LAB_10022110:
  pf_varargs_10023fa4__4_((char *)abStack_224,0x100,&DAT_10022ca6,(uint)acStack_124);
  if (local_3a4[0] != '\0') {
    pcVar3 = strchr((char *)abStack_224,0x3f);
    uVar1 = strlen((char *)abStack_224);
    if (uVar1 < 0xff) {
      bVar4 = 0x26;
      if (pcVar3 == (char *)0x0) {
        bVar4 = 0x3f;
      }
      abStack_224[uVar1] = bVar4;
      abStack_224[uVar1 + 1] = 0;
    }
    uVar1 = strlen((char *)abStack_224);
    if (uVar1 < 0xff) {
      pf_varargs_10023fa4__4_
                ((char *)(abStack_224 + uVar1),0x100 - uVar1,&DAT_10022ca6,(uint)local_3a4);
    }
  }
  recovered_1000a604(param_1,param_2,abStack_224);
  pf_varargs_10023fa4__4_((char *)(param_1 + 0x57de),0x100,&DAT_10022ca6,param_2 + 1);
  uVar1 = strlen((char *)(param_1 + 0x57de));
  *(ulong *)(param_1 + 0x58e0) = uVar1;
LAB_10022218:
  *(undefined1 *)(param_1 + 0x57da) = 1;
  return;
}

#undef DAT_10022ca6
#undef DAT_10023ea0
#undef DAT_10023ea1
#undef DAT_10023ea2
#undef DAT_10023ea3
#undef DAT_10023ea4
#undef str_10023e84
#undef str_10023e91
#undef abStack_224
#undef acStack_124
#undef local_3a4

#undef DAT_10022c1b
#define DAT_10022c1b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1d3U)))
#undef DAT_10022ca6
#define DAT_10022ca6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x25eU)))
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
#define local_1e4 (*(char (*)[192])(frame + 284))
#define local_124 (*(byte (*)[260])(frame + 476))
#define abStack_2e4 (*(byte (*)[256])(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10022230
 */

undefined4 recovered_10022230(int param_1,uint param_2,byte *param_3)

{
  unsigned char frame[800] __attribute__((aligned(16))) = {0};

  int iVar1;
  char *ptr;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  uint extraout_r1 = 0;
  uint uVar5;
  uint extraout_r1_00 = 0;
  code *pcVar6;
  byte *pbVar7;
  undefined1 *puVar8;
  uint uVar9;
  undefined4 uVar10;
  byte *pbVar11;
  int *unaff_r11;
  bool bVar12;
  bool bVar13;

  uVar4 = param_2;
  if (param_3 != (byte *)0x0) {
    uVar4 = (uint)*param_3;
    unaff_r11 = (int *)param_2;
  }
  if (param_3 != (byte *)0x0 && uVar4 != 0) {
    puVar8 = (undefined1 *)(param_1 + 0x57da);
    iVar1 = recovered_1000645c((int)unaff_r11);
    if (((iVar1 != 0) && (iVar1 = Ram40010800, iVar1 == 0x50414d57)) &&
       (iVar1 = Ram40010804, iVar1 != 0)) {
      uVar4 = Ram40010808;
      bVar13 = 0xb < uVar4;
      if (bVar13) {
        uVar4 = Ram40010808;
      }
      if (((bVar13 && 0x4f < uVar4) && (pcVar6 = (code *)UINT_4001084c, pcVar6 != (code *)0x0)) &&
         (ptr = (*pcVar6)(0x60000), ptr != (char *)0x0)) {
        local_1e4[0] = '\0';
        uVar4 = 1;
        bVar13 = false;
        if (*(char *)(param_1 + 0x57dc) != '\0') {
          uVar4 = 3;
        }
        do {
          bVar12 = false;
          if (unaff_r11[0x14b0b] != 0) {
            uVar9 = 0;
            pbVar11 = (byte *)(unaff_r11 + 0x1a0);
            do {
              if (*(int *)(pbVar11 + -0x254) == 4) {
                local_124[0] = 0;
                *ptr = '\0';
                pbVar7 = pbVar11 + -0x40;
                local_1e4[0] = '\0';
                if (*pbVar7 == 0) {
                  pbVar7 = pbVar11 + -0x80;
                }
                uVar2 = winter_js_execute_browser_event((char *)unaff_r11[0xc6],param_3,pbVar7,pbVar11,
                                           (char *)local_124,0x100,ptr,0x60000,local_1e4,0xc0,uVar4)
                ;
                bVar12 = (uVar2 & 0x10) != 0;
                uVar5 = extraout_r1;
                if (bVar12) {
                  uVar5 = (uint)local_124[0];
                }
                if (bVar12 && uVar5 != 0) {
                  recovered_1000c270((int)unaff_r11,local_124,(char *)abStack_2e4);
                  recovered_1000a604(param_1,(int)unaff_r11,abStack_2e4);
                  pf_varargs_10023fa4__4_
                            ((char *)(param_1 + 0x57de),0x100,&DAT_10022ca6,(int)unaff_r11 + 1);
                  uVar3 = strlen((char *)(param_1 + 0x57de));
                  *(ulong *)(param_1 + 0x58e0) = uVar3;
                  iVar1 = Ram40010800;
                }
                else {
                  if (((uVar2 & 1) == 0) || (*ptr == '\0')) {
                    bVar12 = true;
                    if (local_1e4[0] != '\0') {
                      pf_varargs_10023fa4__4_
                                ((char *)((int)unaff_r11 + 0x141),0xc0,&DAT_10022ca6,(uint)local_1e4
                                );
                    }
                    goto LAB_10022380;
                  }
                  if ((char *)unaff_r11[0xc3] != (char *)0x0) {
                    pf_varargs_10023fa4__4_((char *)unaff_r11[0xc3],0x50000,&DAT_10022ca6,(uint)ptr)
                    ;
                  }
                  recovered_100066d0(param_1,(int)unaff_r11);
                  recovered_10007eb4(param_1,unaff_r11);
                  iVar1 = Ram40010800;
                }
                *puVar8 = 1;
                goto LAB_10022650;
              }
LAB_10022380:
              uVar9 = uVar9 + 1;
              pbVar11 = pbVar11 + 0x370;
            } while (uVar9 < (uint)unaff_r11[0x14b0b]);
          }
          if (bVar13 || bVar12) {
            if (local_1e4[0] != '\0') {
              pf_varargs_10023fa4__4_
                        ((char *)((int)unaff_r11 + 0x141),0xc0,&DAT_10022ca6,(uint)local_1e4);
            }
            *puVar8 = 1;
            iVar1 = Ram40010800;
            uVar10 = 0;
            if (iVar1 != 0x50414d57) {
              return 0;
            }
            iVar1 = Ram40010804;
            if (iVar1 == 0) {
              return 0;
            }
            uVar4 = Ram40010808;
            if (uVar4 < 0xc) {
              return 0;
            }
            uVar4 = Ram40010808;
            goto LAB_10022708;
          }
          local_124[0] = 0;
          *ptr = '\0';
          local_1e4[0] = '\0';
          uVar5 = winter_js_execute_browser_event((char *)unaff_r11[0xc6],param_3,&DAT_10022c1b,&DAT_10022c1b,
                                     (char *)local_124,0x100,ptr,0x60000,local_1e4,0xc0,uVar4);
          bVar13 = (uVar5 & 0x10) != 0;
          uVar9 = extraout_r1_00;
          if (bVar13) {
            uVar9 = (uint)local_124[0];
          }
          if (bVar13 && uVar9 != 0) {
            recovered_1000c270((int)unaff_r11,local_124,(char *)abStack_2e4);
            recovered_1000a604(param_1,(int)unaff_r11,abStack_2e4);
            pf_varargs_10023fa4__4_
                      ((char *)(param_1 + 0x57de),0x100,&DAT_10022ca6,(int)unaff_r11 + 1);
            uVar3 = strlen((char *)(param_1 + 0x57de));
            *(ulong *)(param_1 + 0x58e0) = uVar3;
            iVar1 = Ram40010800;
            *puVar8 = 1;
LAB_10022650:
            uVar10 = 1;
            if (iVar1 != 0x50414d57) {
              return 1;
            }
            iVar1 = Ram40010804;
            if (iVar1 == 0) {
              return 1;
            }
            uVar4 = Ram40010808;
            bVar13 = uVar4 < 0xc;
            if (!bVar13) {
              uVar4 = Ram40010808;
            }
            if (bVar13 || uVar4 < 0x54) {
              return 1;
            }
            pcVar6 = (code *)UINT_40010850;
            if (pcVar6 == (code *)0x0) {
              return 1;
            }
            goto LAB_1002268c;
          }
          bVar13 = true;
          if (((uVar5 & 1) != 0) && (*ptr != '\0')) {
            if ((char *)unaff_r11[0xc3] != (char *)0x0) {
              pf_varargs_10023fa4__4_((char *)unaff_r11[0xc3],0x50000,&DAT_10022ca6,(uint)ptr);
            }
            recovered_100066d0(param_1,(int)unaff_r11);
            recovered_10007eb4(param_1,unaff_r11);
            uVar10 = 1;
            iVar1 = Ram40010800;
            *puVar8 = 1;
            if (iVar1 != 0x50414d57) {
              return 1;
            }
            iVar1 = Ram40010804;
            if (iVar1 == 0) {
              return 1;
            }
            uVar4 = Ram40010808;
            if (uVar4 < 0xc) {
              return 1;
            }
            uVar4 = Ram40010808;
LAB_10022708:
            if (uVar4 < 0x54) {
              return uVar10;
            }
            pcVar6 = (code *)UINT_40010850;
            if (pcVar6 == (code *)0x0) {
              return uVar10;
            }
LAB_1002268c:
            (*pcVar6)(ptr);
            return uVar10;
          }
        } while( true );
      }
    }
    pf_varargs_10023fa4__4_((char *)((int)unaff_r11 + 0x141),0xc0,&DAT_10022ca6,((uintptr_t)pf_module_state + 0x372U));
    *puVar8 = 1;
  }
  return 0;
}

#undef DAT_10022c1b
#undef DAT_10022ca6
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef Ram40010800
#undef Ram40010804
#undef Ram40010808
#undef UINT_4001084c
#undef UINT_40010850
#undef local_1e4
#undef local_124
#undef abStack_2e4

#undef str_10023ed3
#define str_10023ed3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x148bU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10022798
 */

void recovered_10022798(char *param_1,byte *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  byte bVar5;
  bool bVar6;

  if (param_1 == (char *)0x0 || param_2 == (byte *)0x0) {
    return;
  }
  bVar5 = *param_2;
  do {
    uVar2 = (uint)bVar5;
    if (uVar2 == 0) {
      return;
    }
    uVar3 = uVar2 - 0x30;
    bVar6 = 9 < uVar3;
    if (bVar6) {
      uVar3 = (uVar2 & 0xdf) - 0x41;
    }
    if (bVar6 && 0x19 < uVar3) {
      if (0x5e < uVar2) {
        if (uVar2 == 0x7e || uVar2 == 0x5f) goto LAB_10022810;
LAB_10022864:
        uVar4 = strlen(param_1);
        if (uVar4 < 0x17f) {
          (param_1 + uVar4)[0] = '%';
          (param_1 + uVar4)[1] = '\0';
        }
        cVar1 = str_10023ed3[*param_2 >> 4];
        uVar4 = strlen(param_1);
        if (uVar4 < 0x17f) {
          param_1[uVar4] = cVar1;
          (param_1 + uVar4)[1] = '\0';
        }
        bVar5 = str_10023ed3[*param_2 & 0xf];
        uVar4 = strlen(param_1);
        if (0x17e < uVar4) goto LAB_100227ec;
        goto LAB_100227e0;
      }
      if (uVar2 - 0x2d < 2) goto LAB_10022810;
      if (uVar2 != 0x20) goto LAB_10022864;
      uVar4 = strlen(param_1);
      if (uVar4 < 0x17f) {
        bVar5 = 0x2b;
        goto LAB_100227e0;
      }
    }
    else {
LAB_10022810:
      uVar4 = strlen(param_1);
      if (uVar4 < 0x17f) {
LAB_100227e0:
        param_1[uVar4] = bVar5;
        (param_1 + uVar4)[1] = 0;
      }
    }
LAB_100227ec:
    bVar5 = param_2[1];
    param_2 = param_2 + 1;
  } while( true );
}

#undef str_10023ed3

#undef DAT_10022ca6
#define DAT_10022ca6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x25eU)))
#define abStack_124 (*(byte (*)[260])(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100228e4
 */

void recovered_100228e4(int param_1,int param_2)

{
  unsigned char frame[352] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;

  if (param_1 == 0) {
    return;
  }
  if (*(uint *)(param_1 + 0x205bac) == 0) {
    return;
  }
  if (*(uint *)(param_1 + 0x205bac) <= *(uint *)(param_1 + 0x205bb0)) {
    return;
  }
  if (param_2 == 0) {
    return;
  }
  iVar3 = *(uint *)(param_1 + 0x205bb0) * 0x555cc + param_1;
  uVar4 = *(uint *)(iVar3 + 0x5ada4);
  if (param_2 < 0) {
    if (uVar4 == 0) {
      return;
    }
    uVar2 = *(uint *)(iVar3 + 0x5ada8);
    if (uVar2 == 0) {
      return;
    }
    uVar2 = uVar2 - 1;
    *(uint *)(iVar3 + 0x5ada8) = uVar2;
  }
  else {
    if (uVar4 == 0) {
      return;
    }
    uVar2 = *(uint *)(iVar3 + 0x5ada8) + 1;
    if (uVar4 <= uVar2) {
      return;
    }
    *(uint *)(iVar3 + 0x5ada8) = uVar2;
  }
  pf_varargs_10023fa4__4_
            ((char *)abStack_124,0x100,&DAT_10022ca6,iVar3 + 0x58e4 + uVar2 * 0x100 + 0x544c0);
  *(undefined1 *)(iVar3 + 0x5aeac) = 1;
  recovered_1000a604(param_1,iVar3 + 0x58e4,abStack_124);
  *(undefined1 *)(iVar3 + 0x5aeac) = 0;
  pf_varargs_10023fa4__4_((char *)(param_1 + 0x57de),0x100,&DAT_10022ca6,iVar3 + 0x58e5);
  uVar1 = strlen((char *)(param_1 + 0x57de));
  *(ulong *)(param_1 + 0x58e0) = uVar1;
  *(undefined2 *)(param_1 + 0x57da) = 1;
  return;
}

#undef DAT_10022ca6
#undef abStack_124
