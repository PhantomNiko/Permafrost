/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003ca0
 */

uint recovered_10003ca0(uint a,uint b)

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
 * Address: 0x10003cf0
 */

uint recovered_10003cf0(uint a,uint b)

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
 * Address: 0x10003d28
 */

int recovered_10003d28(int a,int b)

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
 * Address: 0x10003d98
 */

int recovered_10003d98(int a,int b)

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
 * Address: 0x10003e00
 */

ulonglong recovered_10003e00(ulonglong a,ulonglong b)

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
 * Address: 0x10003ee4
 */

ulonglong recovered_10003ee4(ulonglong a,ulonglong b)

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
 * Address: 0x10003f64
 */

longlong recovered_10003f64(longlong a,longlong b)

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
 * Address: 0x10004084
 */

longlong recovered_10004084(longlong a,longlong b)

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


#undef DAT_100041c0
#define DAT_100041c0 (*(double *)(0x100041c0U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004140
 */

ulonglong recovered_10004140(double x)

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

#undef DAT_100041c0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100041c8
 */

longlong recovered_100041c8(double x)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  ulonglong uVar2;

  dVar1 = (double)(((ulonglong)x & 0xffffffff00000000) + ((ulonglong)x & 0xffffffff));
  if (NAN(dVar1)) {
    return 0;
  }
  if (dVar1 < 0.0) {
    uVar2 = recovered_10004140(-dVar1);
    return CONCAT44(-((int)(uVar2 >> 0x20) + (uint)((int)uVar2 != 0)),-(int)uVar2);
  }
  uVar2 = recovered_10004140(x);
  return uVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004214
 */

ulonglong recovered_10004214(float x)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulonglong uVar1;

  uVar1 = recovered_10004140((double)x);
  return uVar1;
}


#undef DAT_10008000
#define DAT_10008000 (*(code * *)(((uintptr_t)pf_module_state + 0x3f0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004224
 */

longlong recovered_10004224(float x)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  longlong lVar1;

                    /* WARNING: Could not recover jumptable at ((uintptr_t)pf_module_state + 0x3acU). Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = (*DAT_10008000)(SUB84((double)x,0),(int)((ulonglong)(double)x >> 0x20));
  return lVar1;
}

#undef DAT_10008000

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004234
 */

double recovered_10004234(ulonglong x)

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
 * Address: 0x1000427c
 */

double recovered_1000427c(longlong x)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  if (x < 0) {
    dVar1 = recovered_10004234(CONCAT44(-((int)((ulonglong)x >> 0x20) + (uint)((int)x != 0)),-(int)x
                                       ));
    return -dVar1;
  }
  dVar1 = recovered_10004234(x);
  return dVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100042a4
 */

float recovered_100042a4(ulonglong x)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_10004234(x);
  return (float)pf_bits_double(((pf_double_bits(dVar1) & 0xffffffff00000000) + (pf_double_bits(dVar1) & 0xffffffff)));
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100042c0
 */

float recovered_100042c0(longlong x)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_1000427c(x);
  return (float)pf_bits_double(((pf_double_bits(dVar1) & 0xffffffff00000000) + (pf_double_bits(dVar1) & 0xffffffff)));
}


#undef DAT_1000803c
#define DAT_1000803c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x42cU)))
#undef DAT_10008050
#define DAT_10008050 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x440U)))
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
#undef str_10007cac
#define str_10007cac (*(char (*)[1])(((uintptr_t)pf_module_state + 0x9cU)))
#undef str_10007cbf
#define str_10007cbf (*(char (*)[1])(((uintptr_t)pf_module_state + 0xafU)))
#undef str_10007d10
#define str_10007d10 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x100U)))
#undef str_10007d23
#define str_10007d23 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x113U)))
#undef str_10007d31
#define str_10007d31 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x121U)))
#undef str_10007d3c
#define str_10007d3c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x12cU)))
#undef str_10007d45
#define str_10007d45 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x135U)))
#undef str_10007d4e
#define str_10007d4e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x13eU)))
#undef str_10007d5d
#define str_10007d5d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x14dU)))
#undef str_10007d69
#define str_10007d69 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x159U)))
#undef str_10007d71
#define str_10007d71 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x161U)))
#undef str_10007d79
#define str_10007d79 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x169U)))
#undef str_10007d81
#define str_10007d81 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x171U)))
#undef str_10007da1
#define str_10007da1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x191U)))
#undef str_10007dc4
#define str_10007dc4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1b4U)))
#define local_3e (*(undefined2 *)(frame + 5714))
#define local_3c (*(char *)(frame + 5716))
#define local_3b (*(char *)(frame + 5717))
#define local_3a (*(char *)(frame + 5718))
#define local_39 (*(char *)(frame + 5719))
#define local_38 (*(char *)(frame + 5720))
#define local_37 (*(char *)(frame + 5721))
#define local_36 (*(char *)(frame + 5722))
#define local_35 (*(char *)(frame + 5723))
#define local_34 (*(char *)(frame + 5724))
#define local_33 (*(char *)(frame + 5725))
#define local_32 (*(char *)(frame + 5726))
#define local_31 (*(char *)(frame + 5727))
#define local_30 (*(char *)(frame + 5728))
#define local_2f (*(char *)(frame + 5729))
#define local_2e (*(char *)(frame + 5730))
#define local_2d (*(char *)(frame + 5731))
#define local_2c (*(char *)(frame + 5732))
#define local_2b (*(char *)(frame + 5733))
#define local_2a (*(char *)(frame + 5734))
#define local_29 (*(char *)(frame + 5735))
#define local_28 (*(char *)(frame + 5736))
#define local_27 (*(char *)(frame + 5737))
#define local_26 (*(byte *)(frame + 5738))
#define local_25 (*(byte (*)[5])(frame + 5739))
#define acStack_15e0 (*(char (*)[4])(frame + 176))
#define aiStack_15dc (*(int (*)[797])(frame + 180))
#define auStack_664 (*(undefined1 (*)[48])(frame + 4140))
#define uStack_2ec (*(uint *)(frame + 5028))
#define uStack_2e4 (*(undefined4 *)(frame + 5036))
#define local_15fc (*(char *)(frame + 148))
#define local_15fb (*(char *)(frame + 149))
#define local_15fa (*(char *)(frame + 150))
#define local_15f9 (*(char *)(frame + 151))
#define local_15f8 (*(char *)(frame + 152))
#define local_15f7 (*(byte *)(frame + 153))
#define local_15f6 (*(char *)(frame + 154))
#define local_15f5 (*(char *)(frame + 155))
#define local_15f4 (*(char *)(frame + 156))
#define local_15f3 (*(char *)(frame + 157))
#define local_15f2 (*(char *)(frame + 158))
#define local_15f1 (*(char *)(frame + 159))
#define local_15f0 (*(char *)(frame + 160))
#define local_15ec (*(uint *)(frame + 164))
#define local_15e4 (*(char (*)[4])(frame + 172))
#define local_968 (*(byte (*)[768])(frame + 3368))
#define local_668 (*(char *)(frame + 4136))
#define local_667 (*(char *)(frame + 4137))
#define local_634 (*(uint *)(frame + 4188))
#define local_630 (*(uint (*)[11])(frame + 4192))
#define local_604 (*(void * *)(frame + 4236))
#define local_2f0 (*(uint *)(frame + 5024))
#define local_2e8 (*(void * *)(frame + 5032))
#define local_2e0 (*(undefined4 *)(frame + 5040))
#define local_2dc (*(undefined4 *)(frame + 5044))
#define local_2d8 (*(byte (*)[4])(frame + 5048))
#define local_2d4 (*(uint *)(frame + 5052))
#define local_2c4 (*(int *)(frame + 5068))
#define local_2c0 (*(uint *)(frame + 5072))
#define local_5e (*(undefined2 *)(frame + 5682))
#define local_5c (*(char *)(frame + 5684))
#define local_5b (*(char *)(frame + 5685))
#define local_5a (*(char *)(frame + 5686))
#define local_59 (*(char *)(frame + 5687))
#define local_58 (*(char *)(frame + 5688))
#define local_57 (*(char *)(frame + 5689))
#define local_56 (*(char *)(frame + 5690))
#define local_55 (*(char *)(frame + 5691))
#define local_54 (*(char *)(frame + 5692))
#define local_53 (*(char *)(frame + 5693))
#define local_52 (*(char *)(frame + 5694))
#define local_51 (*(char *)(frame + 5695))
#define local_50 (*(char *)(frame + 5696))
#define local_4f (*(char *)(frame + 5697))
#define local_4e (*(char *)(frame + 5698))
#define local_4d (*(char *)(frame + 5699))
#define local_4c (*(char *)(frame + 5700))
#define local_4b (*(char *)(frame + 5701))
#define local_4a (*(char *)(frame + 5702))
#define local_49 (*(char *)(frame + 5703))
#define local_48 (*(char *)(frame + 5704))
#define local_47 (*(char *)(frame + 5705))
#define local_46 (*(char *)(frame + 5706))
#define local_45 (*(char *)(frame + 5707))
#define local_44 (*(char *)(frame + 5708))
#define local_43 (*(char *)(frame + 5709))
#define local_42 (*(char *)(frame + 5710))
#define local_41 (*(char *)(frame + 5711))
#define local_40 (*(char *)(frame + 5712))
#define local_3f (*(byte *)(frame + 5713))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100042e0
 */

int recovered_100042e0(void)

{
  unsigned char frame[5808] __attribute__((aligned(16))) = {0};

  byte bVar1;
  byte bVar2;
  char cVar3;
  code *pcVar4;
  int *piVar5;
  uchar uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  char *pcVar10;
  byte *pbVar11;
  uint uVar12;
  uint uVar13;
  char *pcVar14;
  undefined1 uVar15;
  int iVar16;
  uint uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  bool bVar20;
  bool bVar21;
  bool bVar22;
  bool bVar23;
  int iVar24;
  int iVar25;

  pf_app_window_spec(auStack_664,(char *)"Install Permafrost",0x280,0x1c8);
  uStack_2e4 = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 12);
  local_2dc = 0;
  local_2f0 = 0;
  local_2e0 = 0;
  iVar16 = 0;
  uStack_2ec = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 4);
  local_2e8 = (void *)*(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 8);
  do {
    iVar7 = iVar16 + 0x10;
    *(undefined4 *)((int)local_630 + iVar16) = 0;
    *(undefined4 *)((int)local_630 + iVar16 + 4) =
         *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 4);
    *(undefined4 *)((int)local_630 + iVar16 + 8) =
         *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 8);
    *(undefined4 *)((int)local_630 + iVar16 + 0xc) = uStack_2e4;
    iVar16 = iVar7;
  } while (iVar7 != 0x340);
  iVar16 = 0;
  do {
    pcVar14 = acStack_15e0 + iVar16 + -4;
    iVar7 = iVar16 + 0x10;
    pcVar14[0] = '\0';
    pcVar14[1] = '\0';
    pcVar14[2] = '\0';
    pcVar14[3] = '\0';
    *(undefined4 *)(acStack_15e0 + iVar16) =
         *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 4);
    *(undefined4 *)((int)aiStack_15dc + iVar16) =
         *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 8);
    *(undefined4 *)((int)aiStack_15dc + iVar16 + 4) =
         *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 12);
    iVar16 = iVar7;
  } while (iVar7 != 0xf80);
  aiStack_15dc[0x31a] = 0x32;
  local_634 = local_634 | 1;
  uVar8 = terror_ui_window_open(local_630,auStack_664);
  if (uVar8 == 0) {
    iVar16 = 0;
  }
  else {
    local_2f0 = local_630[1];
    uStack_2ec = local_630[2];
    local_2e8 = local_604;
    if (local_604 == (void *)0x0) {
      iVar16 = 0;
    }
    else {
      recovered_10005da0((int)local_15e4);
      memset(local_2d8,0,0x278);
      uVar8 = terror_ui_window_query(local_630,local_2d8);
      if (uVar8 != 0) {
        do {
          uVar6 = terror_ui_window_info_requests_close(local_2d8);
          if ((uVar6 != '\0') || (uVar8 = terror_ui_window_sync_buffer(local_630,local_2d8), uVar8 == 0))
          break;
          iVar16 = 1;
          local_2f0 = local_630[1];
          uStack_2ec = local_630[2];
          local_2e8 = local_604;
          if (local_604 == (void *)0x0) goto LAB_10005d7c;
          if (0 < (int)local_630[2]) {
            uVar8 = 0;
            do {
              if (0 < (int)local_630[1]) {
                uVar13 = 0;
                do {
                  if (local_604 != (void *)0x0) {
                    bVar22 = SBORROW4(local_630[1],uVar13);
                    iVar16 = local_630[1] - uVar13;
                    bVar20 = local_630[1] == uVar13;
                    if ((int)uVar13 < (int)local_630[1]) {
                      bVar22 = SBORROW4(local_630[2],uVar8);
                      iVar16 = local_630[2] - uVar8;
                      bVar20 = local_630[2] == uVar8;
                    }
                    if (!bVar20 && iVar16 < 0 == bVar22) {
                      iVar16 = uVar8 * local_630[1] + uVar13;
                      *(undefined1 *)((int)local_604 + iVar16 * 4) = 0xf4;
                      *(undefined1 *)((int)local_604 + iVar16 * 4 + 1) = 0xf6;
                      *(undefined1 *)((int)local_604 + iVar16 * 4 + 2) = 0xf8;
                      *(undefined1 *)((int)local_604 + iVar16 * 4 + 3) = 0xff;
                    }
                  }
                  uVar13 = uVar13 + 1;
                } while (local_630[1] != uVar13);
              }
              uVar8 = uVar8 + 1;
            } while (uVar8 != local_630[2]);
          }
          uVar8 = 0;
          do {
            if (0 < (int)local_630[1]) {
              uVar13 = 0;
              do {
                if (local_604 != (void *)0x0) {
                  bVar22 = SBORROW4(local_630[1],uVar13);
                  iVar16 = local_630[1] - uVar13;
                  bVar20 = local_630[1] == uVar13;
                  if ((int)uVar13 < (int)local_630[1]) {
                    bVar22 = SBORROW4(local_630[2],uVar8);
                    iVar16 = local_630[2] - uVar8;
                    bVar20 = local_630[2] == uVar8;
                  }
                  if (!bVar20 && iVar16 < 0 == bVar22) {
                    iVar16 = uVar8 * local_630[1] + uVar13;
                    *(undefined1 *)((int)local_604 + iVar16 * 4) = 0x22;
                    *(undefined1 *)((int)local_604 + iVar16 * 4 + 1) = 0x42;
                    *(undefined1 *)((int)local_604 + iVar16 * 4 + 2) = 0x62;
                    *(undefined1 *)((int)local_604 + iVar16 * 4 + 3) = 0xff;
                  }
                }
                uVar13 = uVar13 + 1;
              } while (local_630[1] != uVar13);
            }
            uVar8 = uVar8 + 1;
          } while (uVar8 != 0x32);
          recovered_10006320(&local_2f0,0x1c,0x12,str_10007d10,2,0xff,0xff,0xff);
          recovered_10006320(&local_2f0,0x1e,0x40,str_10007d23,1,0x46,0x46,0x46);
          uVar8 = 0;
          uVar13 = 0x69;
          do {
            uVar19 = 0xfc;
            bVar20 = false;
            uVar18 = 0xfc;
            uVar15 = 0xfc;
            if (uVar8 == aiStack_15dc[0x317]) {
              uVar18 = 0xf0;
              uVar19 = 0xe6;
              bVar20 = (int)uVar8 < aiStack_15dc[0x316];
              if (aiStack_15dc[0x318] == 0) {
                uVar18 = 0xec;
              }
              if (aiStack_15dc[0x316] <= (int)uVar8) {
                uVar18 = 0xfc;
              }
              if (aiStack_15dc[0x318] == 0) {
                uVar19 = 0xdd;
              }
              if (aiStack_15dc[0x316] <= (int)uVar8) {
                uVar19 = 0xfc;
              }
              uVar15 = 0xfa;
              if (aiStack_15dc[0x318] == 0) {
                uVar15 = 0xfc;
              }
              if (aiStack_15dc[0x316] <= (int)uVar8) {
                uVar15 = 0xfc;
              }
            }
            uVar12 = uVar8 * 0x1a + 0x52;
            uVar17 = uVar12;
            do {
              uVar9 = 0x1c;
              do {
                if (local_2e8 != (void *)0x0) {
                  bVar23 = SBORROW4(local_2f0,uVar9);
                  iVar16 = local_2f0 - uVar9;
                  bVar22 = local_2f0 == uVar9;
                  if ((int)uVar9 < (int)local_2f0) {
                    bVar23 = SBORROW4(uStack_2ec,uVar17);
                    iVar16 = uStack_2ec - uVar17;
                    bVar22 = uStack_2ec == uVar17;
                  }
                  if (!bVar22 && iVar16 < 0 == bVar23) {
                    iVar16 = uVar17 * local_2f0 + uVar9;
                    *(undefined1 *)((int)local_2e8 + iVar16 * 4) = uVar19;
                    *(undefined1 *)((int)local_2e8 + iVar16 * 4 + 1) = uVar18;
                    *(undefined1 *)((int)local_2e8 + iVar16 * 4 + 2) = uVar15;
                    *(undefined1 *)((int)local_2e8 + iVar16 * 4 + 3) = 0xff;
                  }
                }
                uVar9 = uVar9 + 1;
              } while (uVar9 != 0x264);
              uVar17 = uVar17 + 1;
            } while (uVar17 != uVar13);
            uVar15 = 0xc4;
            if (bVar20) {
              uVar15 = 0x99;
            }
            uVar18 = 0xc4;
            if (bVar20) {
              uVar18 = 0x67;
            }
            uVar19 = 0xc4;
            if (bVar20) {
              uVar19 = 0x34;
            }
            recovered_10006544(&local_2f0,0x1c,uVar12,0x248,0x17,uVar19,uVar18,uVar15);
            if ((int)uVar8 < aiStack_15dc[0x316]) {
              iVar25 = 0x1e;
              iVar24 = 0x1e;
              iVar7 = 0x1e;
              pcVar14 = acStack_15e0 + uVar8 * 0x84;
              iVar16 = uVar8 * 0x1a + 0x5a;
LAB_10004700:
              recovered_10006320(&local_2f0,0x24,iVar16,pcVar14,1,iVar7,iVar24,iVar25);
            }
            else if (uVar8 == 0) {
              iVar25 = 0x78;
              iVar16 = 0x5a;
              iVar24 = 0x78;
              iVar7 = 0x78;
              pcVar14 = str_10007d31;
              goto LAB_10004700;
            }
            uVar8 = uVar8 + 1;
            uVar13 = uVar13 + 0x1a;
          } while (uVar8 != 6);
          recovered_100067c8(&local_2f0,0x1e,0xfa,0x138,str_10007d3c,
                             *(char **)(&DAT_1000803c + aiStack_15dc[0x319] * 4),
                             (uint)(aiStack_15dc[0x318] == 1));
          local_3e = local_3e & 0xff00;
          pcVar14 = (char *)((int)&local_3e + 1);
          if (aiStack_15dc[0x31a] < 1) {
            local_3e = 0x30;
            iVar16 = 2;
LAB_10004dc4:
            *pcVar14 = '%';
LAB_10004dcc:
            pcVar14 = (char *)((int)&local_3e + iVar16);
          }
          else {
            uVar8 = aiStack_15dc[0x31a];
            uVar13 = 0;
            do {
              local_2d8[uVar13] = (char)uVar8 + (char)(uVar8 / 10) * -10 | 0x30;
              uVar17 = uVar13 + 1;
              if (0xe < uVar13) break;
              bVar20 = 9 < uVar8;
              uVar8 = uVar8 / 10;
              uVar13 = uVar17;
            } while (bVar20);
            do {
              uVar13 = uVar17 - 1;
              local_26 = local_2d8[uVar17 - 1];
              local_25[0] = 0;
              pbVar11 = local_25;
              bVar1 = local_26;
              uVar8 = 0;
              if ((char)local_3e == '\0') {
joined_r0x10004b44:
                do {
                  uVar17 = uVar8;
                  if (bVar1 == 0) break;
                  bVar2 = *pbVar11;
                  uVar17 = uVar8 + 1;
                  *(byte *)((int)&local_3e + uVar8) = bVar1;
                  bVar20 = uVar8 < 0x16;
                  pbVar11 = pbVar11 + 1;
                  bVar1 = bVar2;
                  uVar8 = uVar17;
                } while (bVar20);
LAB_10004b6c:
                pcVar10 = (char *)((int)&local_3e + uVar17);
              }
              else {
                if (PF_PART1(local_3e, 1) == '\0') {
                  uVar8 = 1;
                  goto joined_r0x10004b44;
                }
                if (local_3c == '\0') {
                  uVar8 = 2;
                  goto joined_r0x10004b44;
                }
                if (local_3b == '\0') {
                  uVar8 = 3;
                  goto joined_r0x10004b44;
                }
                if (local_3a == '\0') {
                  uVar8 = 4;
                  goto joined_r0x10004b44;
                }
                if (local_39 == '\0') {
                  uVar8 = 5;
                  goto joined_r0x10004b44;
                }
                if (local_38 == '\0') {
                  uVar8 = 6;
                  goto joined_r0x10004b44;
                }
                if (local_37 == '\0') {
                  uVar8 = 7;
                  goto joined_r0x10004b44;
                }
                if (local_36 == '\0') {
                  uVar8 = 8;
                  goto joined_r0x10004b44;
                }
                if (local_35 == '\0') {
                  uVar8 = 9;
                  goto joined_r0x10004b44;
                }
                if (local_34 == '\0') {
                  uVar8 = 10;
                  goto joined_r0x10004b44;
                }
                if (local_33 == '\0') {
                  uVar8 = 0xb;
                  goto joined_r0x10004b44;
                }
                if (local_32 == '\0') {
                  uVar8 = 0xc;
                  goto joined_r0x10004b44;
                }
                if (local_31 == '\0') {
                  uVar8 = 0xd;
                  goto joined_r0x10004b44;
                }
                if (local_30 == '\0') {
                  uVar8 = 0xe;
                  goto joined_r0x10004b44;
                }
                if (local_2f == '\0') {
                  uVar8 = 0xf;
                  goto joined_r0x10004b44;
                }
                if (local_2e == '\0') {
                  uVar8 = 0x10;
                  goto joined_r0x10004b44;
                }
                if (local_2d == '\0') {
                  uVar8 = 0x11;
                  goto joined_r0x10004b44;
                }
                if (local_2c == '\0') {
                  uVar8 = 0x12;
                  goto joined_r0x10004b44;
                }
                if (local_2b == '\0') {
                  uVar8 = 0x13;
                  goto joined_r0x10004b44;
                }
                if (local_2a == '\0') {
                  uVar8 = 0x14;
                  goto joined_r0x10004b44;
                }
                if (local_29 == '\0') {
                  uVar8 = 0x15;
                  goto joined_r0x10004b44;
                }
                if (local_28 == '\0') {
                  uVar8 = 0x16;
                  goto joined_r0x10004b44;
                }
                pcVar10 = &local_27;
                if (local_27 == '\0') {
                  uVar17 = 0x17;
                  goto LAB_10004b6c;
                }
              }
              *pcVar10 = '\0';
              uVar17 = uVar13;
            } while (uVar13 != 0);
            if ((char)local_3e == '\0') {
              iVar16 = 1;
              pcVar14 = (char *)&local_3e;
              goto LAB_10004dc4;
            }
            if (PF_PART1(local_3e, 1) == '\0') {
              iVar16 = 2;
              goto LAB_10004dc4;
            }
            if (local_3c == '\0') {
              iVar16 = 3;
              pcVar14 = &local_3c;
              goto LAB_10004dc4;
            }
            if (local_3b == '\0') {
              iVar16 = 4;
              pcVar14 = &local_3b;
              goto LAB_10004dc4;
            }
            if (local_3a == '\0') {
              iVar16 = 5;
              pcVar14 = &local_3a;
              goto LAB_10004dc4;
            }
            if (local_39 == '\0') {
              iVar16 = 6;
              pcVar14 = &local_39;
              goto LAB_10004dc4;
            }
            if (local_38 == '\0') {
              iVar16 = 7;
              pcVar14 = &local_38;
              goto LAB_10004dc4;
            }
            if (local_37 == '\0') {
              iVar16 = 8;
              pcVar14 = &local_37;
              goto LAB_10004dc4;
            }
            if (local_36 == '\0') {
              iVar16 = 9;
              pcVar14 = &local_36;
              goto LAB_10004dc4;
            }
            if (local_35 == '\0') {
              iVar16 = 10;
              pcVar14 = &local_35;
              goto LAB_10004dc4;
            }
            if (local_34 == '\0') {
              iVar16 = 0xb;
              pcVar14 = &local_34;
              goto LAB_10004dc4;
            }
            if (local_33 == '\0') {
              iVar16 = 0xc;
              pcVar14 = &local_33;
              goto LAB_10004dc4;
            }
            if (local_32 == '\0') {
              iVar16 = 0xd;
              pcVar14 = &local_32;
              goto LAB_10004dc4;
            }
            if (local_31 == '\0') {
              iVar16 = 0xe;
              pcVar14 = &local_31;
              goto LAB_10004dc4;
            }
            if (local_30 == '\0') {
              iVar16 = 0xf;
              pcVar14 = &local_30;
              goto LAB_10004dc4;
            }
            if (local_2f == '\0') {
              iVar16 = 0x10;
              pcVar14 = &local_2f;
              goto LAB_10004dc4;
            }
            if (local_2e == '\0') {
              iVar16 = 0x11;
              pcVar14 = &local_2e;
              goto LAB_10004dc4;
            }
            if (local_2d == '\0') {
              iVar16 = 0x12;
              pcVar14 = &local_2d;
              goto LAB_10004dc4;
            }
            if (local_2c == '\0') {
              iVar16 = 0x13;
              pcVar14 = &local_2c;
              goto LAB_10004dc4;
            }
            if (local_2b == '\0') {
              iVar16 = 0x14;
              pcVar14 = &local_2b;
              goto LAB_10004dc4;
            }
            if (local_2a == '\0') {
              iVar16 = 0x15;
              pcVar14 = &local_2a;
              goto LAB_10004dc4;
            }
            if (local_29 == '\0') {
              iVar16 = 0x16;
              pcVar14 = &local_29;
              goto LAB_10004dc4;
            }
            if (local_28 == '\0') {
              iVar16 = 0x17;
              pcVar14 = &local_28;
              goto LAB_10004dc4;
            }
            pcVar14 = &local_27;
            if (local_27 == '\0') {
              iVar16 = 0x17;
              goto LAB_10004dcc;
            }
          }
          *pcVar14 = '\0';
          recovered_100067c8(&local_2f0,0x184,0xfa,0xe0,str_10007d45,(char *)&local_3e,
                             (uint)(aiStack_15dc[0x318] == 2));
          recovered_100067c8(&local_2f0,0x1e,0x132,0x246,str_10007d4e,
                             *(char **)(&DAT_10008050 + aiStack_15dc[0x31b] * 4),
                             (uint)(aiStack_15dc[0x318] == 3));
          local_5e = local_5e & 0xff00;
          if (aiStack_15dc[0x31c] == 0) {
            local_5e = 0x30;
          }
          else {
            uVar8 = aiStack_15dc[0x31c];
            uVar13 = 0;
            do {
              local_2d8[uVar13] = (char)uVar8 + (char)(uVar8 / 10) * -10 | 0x30;
              uVar17 = uVar13 + 1;
              if (0xe < uVar13) break;
              bVar20 = 9 < uVar8;
              uVar8 = uVar8 / 10;
              uVar13 = uVar17;
            } while (bVar20);
            do {
              uVar13 = uVar17 - 1;
              uVar8 = 0;
              bVar1 = local_2d8[uVar17 - 1];
              local_25[0] = 0;
              pbVar11 = local_25;
              if ((char)local_5e == '\0') {
joined_r0x1000516c:
                do {
                  uVar17 = uVar8;
                  if (bVar1 == 0) break;
                  bVar2 = *pbVar11;
                  uVar17 = uVar8 + 1;
                  local_25[uVar8 - 0x39] = bVar1;
                  bVar20 = uVar8 < 0x1e;
                  pbVar11 = pbVar11 + 1;
                  bVar1 = bVar2;
                  uVar8 = uVar17;
                } while (bVar20);
LAB_10005194:
                pbVar11 = local_25 + (uVar17 - 0x39);
              }
              else {
                if (PF_PART1(local_5e, 1) == '\0') {
                  uVar8 = 1;
                  goto joined_r0x1000516c;
                }
                if (local_5c == '\0') {
                  uVar8 = 2;
                  goto joined_r0x1000516c;
                }
                if (local_5b == '\0') {
                  uVar8 = 3;
                  goto joined_r0x1000516c;
                }
                if (local_5a == '\0') {
                  uVar8 = 4;
                  goto joined_r0x1000516c;
                }
                if (local_59 == '\0') {
                  uVar8 = 5;
                  goto joined_r0x1000516c;
                }
                if (local_58 == '\0') {
                  uVar8 = 6;
                  goto joined_r0x1000516c;
                }
                if (local_57 == '\0') {
                  uVar8 = 7;
                  goto joined_r0x1000516c;
                }
                if (local_56 == '\0') {
                  uVar8 = 8;
                  goto joined_r0x1000516c;
                }
                if (local_55 == '\0') {
                  uVar8 = 9;
                  goto joined_r0x1000516c;
                }
                if (local_54 == '\0') {
                  uVar8 = 10;
                  goto joined_r0x1000516c;
                }
                if (local_53 == '\0') {
                  uVar8 = 0xb;
                  goto joined_r0x1000516c;
                }
                if (local_52 == '\0') {
                  uVar8 = 0xc;
                  goto joined_r0x1000516c;
                }
                if (local_51 == '\0') {
                  uVar8 = 0xd;
                  goto joined_r0x1000516c;
                }
                if (local_50 == '\0') {
                  uVar8 = 0xe;
                  goto joined_r0x1000516c;
                }
                if (local_4f == '\0') {
                  uVar8 = 0xf;
                  goto joined_r0x1000516c;
                }
                if (local_4e == '\0') {
                  uVar8 = 0x10;
                  goto joined_r0x1000516c;
                }
                if (local_4d == '\0') {
                  uVar8 = 0x11;
                  goto joined_r0x1000516c;
                }
                if (local_4c == '\0') {
                  uVar8 = 0x12;
                  goto joined_r0x1000516c;
                }
                if (local_4b == '\0') {
                  uVar8 = 0x13;
                  goto joined_r0x1000516c;
                }
                if (local_4a == '\0') {
                  uVar8 = 0x14;
                  goto joined_r0x1000516c;
                }
                if (local_49 == '\0') {
                  uVar8 = 0x15;
                  goto joined_r0x1000516c;
                }
                if (local_48 == '\0') {
                  uVar8 = 0x16;
                  goto joined_r0x1000516c;
                }
                if (local_47 == '\0') {
                  uVar8 = 0x17;
                  goto joined_r0x1000516c;
                }
                if (local_46 == '\0') {
                  uVar8 = 0x18;
                  goto joined_r0x1000516c;
                }
                if (local_45 == '\0') {
                  uVar8 = 0x19;
                  goto joined_r0x1000516c;
                }
                if (local_44 == '\0') {
                  uVar8 = 0x1a;
                  goto joined_r0x1000516c;
                }
                if (local_43 == '\0') {
                  uVar8 = 0x1b;
                  goto joined_r0x1000516c;
                }
                if (local_42 == '\0') {
                  uVar8 = 0x1c;
                  goto joined_r0x1000516c;
                }
                if (local_41 == '\0') {
                  uVar8 = 0x1d;
                  goto joined_r0x1000516c;
                }
                if (local_40 == '\0') {
                  uVar8 = 0x1e;
                  goto joined_r0x1000516c;
                }
                pbVar11 = &local_3f;
                if (local_3f == 0) {
                  uVar17 = 0x1f;
                  goto LAB_10005194;
                }
              }
              *pbVar11 = 0;
              uVar17 = uVar13;
            } while (uVar13 != 0);
          }
          recovered_100067c8(&local_2f0,0x1e,0x160,0x130,str_10007d5d,(char *)&local_5e,
                             (uint)(aiStack_15dc[0x318] == 4));
          recovered_100069dc(&local_2f0,0x1e,0x184,0x70,0x24,str_10007d69,0);
          pcVar14 = str_10007d79;
          if (local_668 != '\0') {
            pcVar14 = str_10007d71;
          }
          recovered_100069dc(&local_2f0,0x1de,0x184,0x86,0x24,pcVar14,
                             (uint)(aiStack_15dc[0x318] == 5));
          recovered_10006320(&local_2f0,0xa0,0x186,str_10007d81,1,0x5a,0x5a,0x5a);
          recovered_10006320(&local_2f0,0xa0,0x19a,str_10007da1,1,0x5a,0x5a,0x5a);
          uVar8 = 0x1ae;
          do {
            if (0 < (int)local_2f0) {
              uVar13 = 0;
              do {
                if (local_2e8 != (void *)0x0) {
                  bVar22 = SBORROW4(local_2f0,uVar13);
                  iVar16 = local_2f0 - uVar13;
                  bVar20 = local_2f0 == uVar13;
                  if ((int)uVar13 < (int)local_2f0) {
                    bVar22 = SBORROW4(uStack_2ec,uVar8);
                    iVar16 = uStack_2ec - uVar8;
                    bVar20 = uStack_2ec == uVar8;
                  }
                  if (!bVar20 && iVar16 < 0 == bVar22) {
                    iVar16 = uVar8 * local_2f0 + uVar13;
                    *(undefined1 *)((int)local_2e8 + iVar16 * 4) = 0xe8;
                    *(undefined1 *)((int)local_2e8 + iVar16 * 4 + 1) = 0xec;
                    *(undefined1 *)((int)local_2e8 + iVar16 * 4 + 2) = 0xf0;
                    *(undefined1 *)((int)local_2e8 + iVar16 * 4 + 3) = 0xff;
                  }
                }
                uVar13 = uVar13 + 1;
              } while (local_2f0 != uVar13);
            }
            uVar8 = uVar8 + 1;
          } while (uVar8 != 0x1c8);
          recovered_10006320(&local_2f0,0x1e,0x1b6,str_10007dc4,1,0x46,0x46,0x46);
          for (iVar16 = 0;
              (bVar1 = local_968[iVar16], bVar1 != 0 && (bVar1 != 10 && iVar16 != 0x5f));
              iVar16 = iVar16 + 1) {
            local_2d8[iVar16] = bVar1;
          }
          local_2d8[iVar16] = 0;
          recovered_10006320(&local_2f0,0x5a,0x1b6,(char *)local_2d8,1,0x28,0x28,0x28);
          terror_ui_window_present(local_630,(char *)"Install Permafrost",local_2e8,local_2f0,uStack_2ec,local_2f0 << 2,
                             0xf6f6f6);
          terror_ui_keyboard_poll(&local_15fc);
          uVar8 = 0xcccccccd;
          if ((local_15fc != '\0') || (local_15f0 == '\x01')) {
            piVar5 = aiStack_15dc + 0x317;
            uVar13 = aiStack_15dc[0x317];
            if (aiStack_15dc[0x318] != 0) {
              piVar5 = aiStack_15dc + 0x318;
              uVar13 = aiStack_15dc[0x318];
            }
            if (0 < (int)uVar13) {
              *piVar5 = uVar13 - 1;
            }
          }
          if ((local_15fb != '\0') || (local_15f1 == '\x01')) {
            if (aiStack_15dc[0x318] == 0) {
              if (aiStack_15dc[0x316] <= (int)(aiStack_15dc[0x317] + 1U)) goto LAB_100054e0;
              aiStack_15dc[0x317] = aiStack_15dc[0x317] + 1U;
            }
            else if (aiStack_15dc[0x318] < 5) {
LAB_100054e0:
              aiStack_15dc[0x318] = aiStack_15dc[0x318] + 1;
            }
          }
          if ((local_15fa != '\0') || (local_15f5 == '\x01')) {
            switch((uintptr_t)(aiStack_15dc[0x318])) {
            case 1:
              uVar13 = ((aiStack_15dc[0x319] - 1U & ~((int)(aiStack_15dc[0x319] - 1U) >> 0x1f)) + 1)
                       - aiStack_15dc[0x319];
              bVar20 = uVar13 != 0;
              if (bVar20) {
                uVar13 = uVar13 - 1;
              }
              uVar17 = uVar13 / 5;
              if (bVar20) {
                uVar17 = uVar13 / 5 + 1;
              }
              iVar16 = uVar17 * 5 + aiStack_15dc[0x319];
              aiStack_15dc[0x319] = iVar16 - 1;
              if (4 < (uint)aiStack_15dc[0x319]) {
                aiStack_15dc[0x319] = (iVar16 - 6U) % 5;
              }
              break;
            case 2:
              uVar13 = aiStack_15dc[0x31a] - 5;
              if (aiStack_15dc[0x31a] < 10) {
                uVar13 = 5;
              }
              aiStack_15dc[0x31a] = uVar13;
              break;
            case 3:
              uVar13 = ((aiStack_15dc[0x31b] - 1U & ~((int)(aiStack_15dc[0x31b] - 1U) >> 0x1f)) + 1)
                       - aiStack_15dc[0x31b];
              bVar20 = uVar13 != 0;
              if (bVar20) {
                uVar13 = uVar13 - 1;
              }
              uVar17 = uVar13 / 0xf;
              if (bVar20) {
                uVar17 = uVar13 / 0xf + 1;
              }
              iVar16 = uVar17 * 0xf + aiStack_15dc[0x31b];
              aiStack_15dc[0x31b] = iVar16 - 1;
              if (0xe < (uint)aiStack_15dc[0x31b]) {
                aiStack_15dc[0x31b] = iVar16 - 0x10;
                aiStack_15dc[0x31b] =
                     aiStack_15dc[0x31b] -
                     (((uint)aiStack_15dc[0x31b] / 0xf) * 0x10 - (uint)aiStack_15dc[0x31b] / 0xf);
              }
              break;
            case 4:
              bVar20 = (uint)aiStack_15dc[0x31c] < 0x8000;
              aiStack_15dc[0x31c] = aiStack_15dc[0x31c] - 0x8000;
              if (bVar20) {
                aiStack_15dc[0x31c] = 0;
              }
            }
          }
          if ((local_15f9 != '\0') || (local_15f4 == '\x01')) {
            switch((uintptr_t)(aiStack_15dc[0x318])) {
            case 1:
              iVar16 = (aiStack_15dc[0x319] + 1U & ~((int)(aiStack_15dc[0x319] + 1U) >> 0x1f)) +
                       ~aiStack_15dc[0x319];
              uVar13 = (uint)(iVar16 != 0);
              iVar16 = (uVar13 + (iVar16 - uVar13) / 5) * 5 + aiStack_15dc[0x319];
              aiStack_15dc[0x319] = iVar16 + 1;
              if (4 < (uint)aiStack_15dc[0x319]) {
                aiStack_15dc[0x319] = (iVar16 - 4U) % 5;
              }
              break;
            case 2:
              uVar13 = aiStack_15dc[0x31a] + 5;
              if (0x5f < aiStack_15dc[0x31a]) {
                uVar13 = 100;
              }
              aiStack_15dc[0x31a] = uVar13;
              break;
            case 3:
              iVar16 = (aiStack_15dc[0x31b] + 1U & ~((int)(aiStack_15dc[0x31b] + 1U) >> 0x1f)) +
                       ~aiStack_15dc[0x31b];
              uVar13 = (uint)(iVar16 != 0);
              iVar16 = (uVar13 + (iVar16 - uVar13) / 0xf) * 0xf + aiStack_15dc[0x31b];
              aiStack_15dc[0x31b] = iVar16 + 1;
              if (0xe < (uint)aiStack_15dc[0x31b]) {
                aiStack_15dc[0x31b] = iVar16 - 0xe;
                aiStack_15dc[0x31b] =
                     aiStack_15dc[0x31b] -
                     (((uint)aiStack_15dc[0x31b] / 0xf) * 0x10 - (uint)aiStack_15dc[0x31b] / 0xf);
              }
              break;
            case 4:
              aiStack_15dc[0x31c] = aiStack_15dc[0x31c] + 0x8000;
            }
          }
          if (local_15f2 == '\x01') {
            recovered_10005da0((int)local_15e4);
          }
          if (local_15f7 == 0) {
            if (((local_15ec | 0x20) == 0x69) && (aiStack_15dc[0x318] == 5)) goto LAB_1000579c;
          }
          else {
            uVar13 = aiStack_15dc[0x318];
            if (aiStack_15dc[0x318] == 5) {
LAB_1000579c:
              recovered_10006b60((int)local_15e4);
              bVar20 = (local_15f7 & 1) == 0;
              uVar13 = (uint)local_15f7;
              if (!bVar20) {
                uVar13 = aiStack_15dc[0x318];
              }
              if (bVar20 || uVar13 == 5) goto LAB_100057c8;
            }
            aiStack_15dc[0x318] = uVar13 + 1;
            if (4 < (int)uVar13) {
              aiStack_15dc[0x318] = 0;
            }
          }
LAB_100057c8:
          memset(local_2d8,0,0x1c);
          uVar13 = terror_ui_window_pointer_state(local_630,local_2d8);
          if (uVar13 != 0) {
            if ((local_2d8[0] & 2) == 0) {
              local_667 = '\0';
            }
            else {
              cVar3 = (char)(local_2d4 & 1);
              if ((local_2d4 & 1) == 0) {
                local_667 = cVar3;
              }
              else {
                bVar20 = local_667 == '\0';
                local_667 = cVar3;
                if (bVar20) {
                  if (0 < aiStack_15dc[0x316]) {
                    uVar13 = local_2c4 - 0x1cU >> 3;
                    bVar20 = 0x47 < uVar13;
                    if (uVar13 < 0x49) {
                      uVar8 = 0;
                      bVar20 = 0x16 < local_2c0 - 0x52;
                    }
                    if (!bVar20) {
LAB_10005bbc:
                      aiStack_15dc[0x318] = 0;
                      aiStack_15dc[0x317] = uVar8;
                      goto LAB_10005bc4;
                    }
                    if (aiStack_15dc[0x316] != 1) {
                      bVar20 = 0x47 < uVar13;
                      if (uVar13 < 0x49) {
                        uVar8 = 1;
                        bVar20 = 0x16 < local_2c0 - 0x6c;
                      }
                      if (!bVar20) goto LAB_10005bbc;
                      if (aiStack_15dc[0x316] != 2) {
                        bVar20 = 0x47 < uVar13;
                        if (uVar13 < 0x49) {
                          uVar8 = 2;
                          bVar20 = 0x16 < local_2c0 - 0x86;
                        }
                        if (!bVar20) goto LAB_10005bbc;
                        if (aiStack_15dc[0x316] != 3) {
                          bVar20 = 0x47 < uVar13;
                          if (uVar13 < 0x49) {
                            uVar8 = 3;
                            bVar20 = 0x16 < local_2c0 - 0xa0;
                          }
                          if (!bVar20) goto LAB_10005bbc;
                          if (aiStack_15dc[0x316] != 4) {
                            bVar20 = 0x47 < uVar13;
                            if (uVar13 < 0x49) {
                              uVar8 = 4;
                              bVar20 = 0x16 < local_2c0 - 0xba;
                            }
                            if (!bVar20) goto LAB_10005bbc;
                            if (aiStack_15dc[0x316] != 5) {
                              bVar20 = 0x47 < uVar13;
                              if (uVar13 < 0x49) {
                                uVar8 = 5;
                                bVar20 = 0x16 < local_2c0 - 0xd4;
                              }
                              if (!bVar20) goto LAB_10005bbc;
                            }
                          }
                        }
                      }
                    }
                  }
                  uVar8 = local_2c4 - 0x1e;
                  if ((uVar8 < 0x22) && (0xf9 < (int)local_2c0)) {
                    if (local_2c0 >> 2 < 0x45) {
                      aiStack_15dc[0x318] = 1;
                      uVar8 = (aiStack_15dc[0x319] - 1U & ~((int)(aiStack_15dc[0x319] - 1U) >> 0x1f)
                              ) + 1;
                      uVar13 = uVar8 - aiStack_15dc[0x319];
                      if (uVar13 != 0) {
                        uVar13 = uVar13 - 1;
                      }
                      uVar17 = uVar13 / 5;
                      if (uVar8 != aiStack_15dc[0x319]) {
                        uVar17 = uVar13 / 5 + 1;
                      }
                      iVar16 = uVar17 * 5 + aiStack_15dc[0x319];
                      aiStack_15dc[0x319] = iVar16 - 1;
                      if (4 < (uint)aiStack_15dc[0x319]) {
                        aiStack_15dc[0x319] = iVar16 - 6;
LAB_10005970:
                        aiStack_15dc[0x318] = 1;
                        aiStack_15dc[0x319] = (uint)aiStack_15dc[0x319] % 5;
                      }
                    }
                    else {
LAB_100059c8:
                      bVar20 = true;
                      bVar22 = false;
LAB_10005a08:
                      bVar21 = 0x20 < uVar8;
                      bVar23 = uVar8 == 0x21;
                      if (uVar8 < 0x22) {
                        bVar21 = 0x18 < local_2c0 - 0x132;
                        bVar23 = local_2c0 - 0x132 == 0x19;
                      }
                      if (!bVar21 || bVar23) {
                        uVar8 = (aiStack_15dc[0x31b] - 1U &
                                ~((int)(aiStack_15dc[0x31b] - 1U) >> 0x1f)) + 1;
                        uVar13 = uVar8 - aiStack_15dc[0x31b];
                        if (uVar13 != 0) {
                          uVar13 = uVar13 - 1;
                        }
                        aiStack_15dc[0x318] = 3;
                        uVar17 = uVar13 / 0xf;
                        if (uVar8 != aiStack_15dc[0x31b]) {
                          uVar17 = uVar13 / 0xf + 1;
                        }
                        iVar16 = uVar17 * 0xf + aiStack_15dc[0x31b];
                        aiStack_15dc[0x31b] = iVar16 - 1;
                        if (0xe < (uint)aiStack_15dc[0x31b]) {
                          aiStack_15dc[0x31b] = iVar16 - 0x10;
LAB_10005af8:
                          aiStack_15dc[0x318] = 3;
                          aiStack_15dc[0x31b] =
                               aiStack_15dc[0x31b] -
                               (((uint)aiStack_15dc[0x31b] / 0xf) * 0x10 -
                               (uint)aiStack_15dc[0x31b] / 0xf);
                        }
                      }
                      else if ((!(bool)(0x131 < (int)local_2c0 & bVar22 & bVar20)) ||
                              (0x52 < local_2c0 >> 2)) {
                        if ((uVar8 < 0x22) && (0x15f < (int)local_2c0)) {
                          if (local_2c0 >> 1 < 0xbd) {
                            aiStack_15dc[0x318] = 4;
                            bVar20 = (uint)aiStack_15dc[0x31c] < 0x8000;
                            aiStack_15dc[0x31c] = aiStack_15dc[0x31c] - 0x8000;
                            if (bVar20) {
                              aiStack_15dc[0x31c] = 0;
                            }
                          }
                          else {
LAB_10005c9c:
                            bVar22 = false;
                            if (0x60 < local_2c0 >> 2) {
                              bVar22 = true;
                            }
LAB_10005cac:
                            if (uVar8 < 0x70) {
                              if (bVar22) {
                                if ((int)local_2c0 < 0x1a8) {
                                  recovered_10005da0((int)local_15e4);
                                }
                              }
                            }
                          }
                        }
                        else if ((local_2c4 - 300U < 0x22) && (0x15f < (int)local_2c0)) {
                          if (0xbc < local_2c0 >> 1) goto LAB_10005c9c;
                          aiStack_15dc[0x318] = 4;
                          aiStack_15dc[0x31c] = aiStack_15dc[0x31c] + 0x8000;
                        }
                        else {
                          bVar22 = 0x183 < (int)local_2c0;
                          if ((!(bool)((0x1dd < local_2c4 && bVar22) & bVar20)) ||
                             (0x34 < local_2c0 >> 3)) goto LAB_10005cac;
                          aiStack_15dc[0x318] = 5;
                          recovered_10006b60((int)local_15e4);
                        }
                      }
                      else {
                        iVar16 = (aiStack_15dc[0x31b] + 1U &
                                 ~((int)(aiStack_15dc[0x31b] + 1U) >> 0x1f)) + ~aiStack_15dc[0x31b];
                        uVar8 = (uint)(iVar16 != 0);
                        aiStack_15dc[0x318] = 3;
                        iVar16 = (uVar8 + (iVar16 - uVar8) / 0xf) * 0xf + aiStack_15dc[0x31b];
                        aiStack_15dc[0x31b] = iVar16 + 1;
                        if (0xe < (uint)aiStack_15dc[0x31b]) {
                          aiStack_15dc[0x31b] = iVar16 - 0xe;
                          goto LAB_10005af8;
                        }
                      }
                    }
                  }
                  else if ((local_2c4 - 0x134U < 0x22) && (0xf9 < (int)local_2c0)) {
                    if (0x44 < local_2c0 >> 2) goto LAB_100059c8;
                    iVar16 = (aiStack_15dc[0x319] + 1U & ~((int)(aiStack_15dc[0x319] + 1U) >> 0x1f))
                             + ~aiStack_15dc[0x319];
                    uVar8 = (uint)(iVar16 != 0);
                    aiStack_15dc[0x318] = 1;
                    iVar16 = (uVar8 + (iVar16 - uVar8) / 5) * 5 + aiStack_15dc[0x319];
                    aiStack_15dc[0x319] = iVar16 + 1;
                    if (4 < (uint)aiStack_15dc[0x319]) {
                      aiStack_15dc[0x319] = iVar16 - 4;
                      goto LAB_10005970;
                    }
                  }
                  else if ((local_2c4 - 0x184U < 0x22) && (0xf9 < (int)local_2c0)) {
                    if (0x44 < local_2c0 >> 2) goto LAB_100059c8;
                    aiStack_15dc[0x318] = 2;
                    uVar8 = aiStack_15dc[0x31a] - 5;
                    if (aiStack_15dc[0x31a] < 10) {
                      uVar8 = 5;
                    }
                    aiStack_15dc[0x31a] = uVar8;
                  }
                  else {
                    bVar22 = 0x241 < local_2c4;
                    uVar13 = local_2c4 - 0x242;
                    bVar20 = local_2c4 < 0x264;
                    bVar21 = 0x20 < uVar13;
                    bVar23 = uVar13 == 0x21;
                    if (uVar13 < 0x22) {
                      bVar21 = 0x18 < local_2c0 - 0xfa;
                      bVar23 = local_2c0 - 0xfa == 0x19;
                    }
                    if (bVar21 && !bVar23) goto LAB_10005a08;
                    aiStack_15dc[0x318] = 2;
                    uVar8 = aiStack_15dc[0x31a] + 5;
                    if (0x5f < aiStack_15dc[0x31a]) {
                      uVar8 = 100;
                    }
                    aiStack_15dc[0x31a] = uVar8;
                  }
                }
              }
            }
          }
LAB_10005bc4:
          if (local_15f3 != '\0') break;
          cVar3 = local_15f8;
          if (local_15f8 == '\0') {
            cVar3 = local_15f6;
          }
          if (local_15f8 != '\0' || cVar3 != '\0') break;
          iVar16 = Ram40010800;
          if ((iVar16 == 0x50414d57) && (iVar16 = Ram40010804, iVar16 != 0)) {
            uVar8 = Ram40010808;
            bVar20 = 0xb < uVar8;
            if (bVar20) {
              uVar8 = Ram40010808;
            }
            if ((bVar20 && 0x9f < uVar8) && (pcVar4 = (code *)UINT_4001089c, pcVar4 != (code *)0x0))
            {
              (*pcVar4)();
            }
          }
          memset(local_2d8,0,0x278);
          uVar8 = terror_ui_window_query(local_630,local_2d8);
        } while (uVar8 != 0);
      }
      iVar16 = 1;
    }
LAB_10005d7c:
    terror_ui_window_close(local_630);
  }
  return iVar16;
}

#undef DAT_1000803c
#undef DAT_10008050
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef Ram40010800
#undef Ram40010804
#undef Ram40010808
#undef UINT_4001089c
#undef str_10007cac
#undef str_10007cbf
#undef str_10007d10
#undef str_10007d23
#undef str_10007d31
#undef str_10007d3c
#undef str_10007d45
#undef str_10007d4e
#undef str_10007d5d
#undef str_10007d69
#undef str_10007d71
#undef str_10007d79
#undef str_10007d81
#undef str_10007da1
#undef str_10007dc4
#undef local_3e
#undef local_3c
#undef local_3b
#undef local_3a
#undef local_39
#undef local_38
#undef local_37
#undef local_36
#undef local_35
#undef local_34
#undef local_33
#undef local_32
#undef local_31
#undef local_30
#undef local_2f
#undef local_2e
#undef local_2d
#undef local_2c
#undef local_2b
#undef local_2a
#undef local_29
#undef local_28
#undef local_27
#undef local_26
#undef local_25
#undef acStack_15e0
#undef aiStack_15dc
#undef auStack_664
#undef uStack_2ec
#undef uStack_2e4
#undef local_15fc
#undef local_15fb
#undef local_15fa
#undef local_15f9
#undef local_15f8
#undef local_15f7
#undef local_15f6
#undef local_15f5
#undef local_15f4
#undef local_15f3
#undef local_15f2
#undef local_15f1
#undef local_15f0
#undef local_15ec
#undef local_15e4
#undef local_968
#undef local_668
#undef local_667
#undef local_634
#undef local_630
#undef local_604
#undef local_2f0
#undef local_2e8
#undef local_2e0
#undef local_2dc
#undef local_2d8
#undef local_2d4
#undef local_2c4
#undef local_2c0
#undef local_5e
#undef local_5c
#undef local_5b
#undef local_5a
#undef local_59
#undef local_58
#undef local_57
#undef local_56
#undef local_55
#undef local_54
#undef local_53
#undef local_52
#undef local_51
#undef local_50
#undef local_4f
#undef local_4e
#undef local_4d
#undef local_4c
#undef local_4b
#undef local_4a
#undef local_49
#undef local_48
#undef local_47
#undef local_46
#undef local_45
#undef local_44
#undef local_43
#undef local_42
#undef local_41
#undef local_40
#undef local_3f

void recovered_10005da0(uintptr_t state){pf_install_refresh((void *)state);}


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
#define local_24 (*(int *)(frame + 44))
#define local_3c (*(int *)(frame + 20))
#define local_38 (*(void * (*)[3])(frame + 24))
#define local_2c (*(uint *)(frame + 36))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006320
 */

void recovered_10006320(uint *param_1,int param_2,int param_3,char *param_4,uint param_5,int param_6
                       ,int param_7,int param_8)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  void *ptr;
  code *pcVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  bool bVar12;
  bool bVar13;

  if (param_4 == (char *)0x0) {
    return;
  }
  memset(local_38,0,0x18);
  iVar8 = Ram40010800;
  if ((iVar8 == 0x50414d57) && (iVar8 = Ram40010804, iVar8 != 0)) {
    uVar5 = Ram40010808;
    bVar12 = 0xb < uVar5;
    if (bVar12) {
      uVar5 = Ram40010808;
    }
    if ((bVar12 && 0x17b < uVar5) && (pcVar4 = (code *)UINT_40010978, pcVar4 != (code *)0x0)) {
      uVar5 = (*pcVar4)(param_4,0xffffffff,param_5,
                        param_7 << 0x10 | param_6 << 0x18 | param_8 << 8 | 0xff,local_38);
      ptr = (void *)0x0;
      if (uVar5 != 0) {
        ptr = local_38[0];
      }
      if (uVar5 != 0 && ptr != (void *)0x0) {
        if (local_28 != 0) {
          uVar6 = 0;
          uVar5 = local_2c;
          local_3c = param_3;
          do {
            if (uVar5 == 0) {
              uVar5 = 0;
            }
            else {
              uVar11 = uVar6 + param_3;
              uVar5 = 0;
              do {
                iVar8 = uVar5 * 4 + uVar6 * local_24;
                if (((*(char *)((int)ptr + iVar8 + 3) != '\0' && param_1 != (uint *)0x0) &&
                    (uVar7 = param_2 + uVar5, -1 < (int)(uVar7 | uVar11))) && (param_1[2] != 0)) {
                  uVar9 = *param_1;
                  bVar13 = SBORROW4(uVar9,uVar7);
                  iVar1 = uVar9 - uVar7;
                  bVar12 = uVar9 == uVar7;
                  if ((int)uVar7 < (int)uVar9) {
                    uVar10 = param_1[1];
                    bVar13 = SBORROW4(uVar10,uVar11);
                    iVar1 = uVar10 - uVar11;
                    bVar12 = uVar10 == uVar11;
                  }
                  if (!bVar12 && iVar1 < 0 == bVar13) {
                    uVar2 = *(undefined1 *)((int)ptr + iVar8 + 1);
                    uVar3 = *(undefined1 *)((int)ptr + iVar8 + 2);
                    iVar8 = local_3c * uVar9 + uVar7;
                    *(undefined1 *)(param_1[2] + iVar8 * 4) =
                         *(undefined1 *)((int)ptr + uVar5 * 4 + uVar6 * local_24);
                    *(undefined1 *)(param_1[2] + iVar8 * 4 + 1) = uVar2;
                    *(undefined1 *)(param_1[2] + iVar8 * 4 + 2) = uVar3;
                    *(undefined1 *)(param_1[2] + iVar8 * 4 + 3) = 0xff;
                  }
                }
                uVar5 = uVar5 + 1;
              } while (uVar5 < local_2c);
              uVar5 = local_2c;
            }
            uVar6 = uVar6 + 1;
            local_3c = local_3c + 1;
          } while (uVar6 < local_28);
        }
        iVar8 = Ram40010800;
        if ((iVar8 == 0x50414d57) && (iVar8 = Ram40010804, iVar8 != 0)) {
          uVar5 = Ram40010808;
          bVar12 = 0xb < uVar5;
          if (bVar12) {
            uVar5 = Ram40010808;
          }
          if ((bVar12 && 0x53 < uVar5) && (pcVar4 = (code *)UINT_40010850, pcVar4 != (code *)0x0)) {
            (*pcVar4)(ptr);
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
#undef UINT_40010850
#undef UINT_40010978
#undef local_28
#undef local_24
#undef local_3c
#undef local_38
#undef local_2c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006544
 */

void recovered_10006544(uint *param_1,uint param_2,uint param_3,int param_4,int param_5,
                       undefined1 param_6,undefined1 param_7,undefined1 param_8)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  bool bVar7;
  bool bVar8;

  uVar5 = param_4 + param_2;
  if (0 < param_4) {
    uVar3 = param_2;
    do {
      if (((param_1 != (uint *)0x0) && (-1 < (int)(uVar3 | param_3))) && (param_1[2] != 0)) {
        uVar4 = *param_1;
        bVar8 = SBORROW4(uVar4,uVar3);
        iVar6 = uVar4 - uVar3;
        bVar7 = uVar4 == uVar3;
        if ((int)uVar3 < (int)uVar4) {
          uVar1 = param_1[1];
          bVar8 = SBORROW4(uVar1,param_3);
          iVar6 = uVar1 - param_3;
          bVar7 = uVar1 == param_3;
        }
        if (!bVar7 && iVar6 < 0 == bVar8) {
          iVar6 = uVar4 * param_3 + uVar3;
          *(undefined1 *)(param_1[2] + iVar6 * 4) = param_6;
          *(undefined1 *)(param_1[2] + iVar6 * 4 + 1) = param_7;
          *(undefined1 *)(param_1[2] + iVar6 * 4 + 2) = param_8;
          *(undefined1 *)(param_1[2] + iVar6 * 4 + 3) = 0xff;
        }
      }
      uVar3 = uVar3 + 1;
    } while ((int)uVar3 < (int)uVar5);
    if (0 < param_4) {
      uVar4 = (param_5 + param_3) - 1;
      iVar6 = uVar4 * 4;
      uVar3 = param_2;
      do {
        if (((param_1 != (uint *)0x0) && (-1 < (int)(uVar3 | uVar4))) &&
           ((param_1[2] != 0 &&
            ((uVar1 = *param_1, (int)uVar3 < (int)uVar1 &&
             ((int)(param_5 + param_3) <= (int)param_1[1])))))) {
          *(undefined1 *)(iVar6 * uVar1 + param_1[2] + uVar3 * 4) = param_6;
          *(undefined1 *)(iVar6 * uVar1 + param_1[2] + uVar3 * 4 + 1) = param_7;
          *(undefined1 *)(iVar6 * uVar1 + param_1[2] + uVar3 * 4 + 2) = param_8;
          *(undefined1 *)(iVar6 * uVar1 + param_1[2] + uVar3 * 4 + 3) = 0xff;
        }
        uVar3 = uVar3 + 1;
      } while ((int)uVar3 < (int)uVar5);
    }
  }
  if (0 < param_5) {
    iVar6 = param_5 + param_3;
    uVar3 = param_3;
    do {
      if (((param_1 != (uint *)0x0) && (-1 < (int)(uVar3 | param_2))) && (param_1[2] != 0)) {
        uVar4 = *param_1;
        bVar8 = SBORROW4(uVar4,param_2);
        iVar2 = uVar4 - param_2;
        bVar7 = uVar4 == param_2;
        if ((int)param_2 < (int)uVar4) {
          uVar1 = param_1[1];
          bVar8 = SBORROW4(uVar1,uVar3);
          iVar2 = uVar1 - uVar3;
          bVar7 = uVar1 == uVar3;
        }
        if (!bVar7 && iVar2 < 0 == bVar8) {
          iVar2 = uVar4 * uVar3 + param_2;
          *(undefined1 *)(param_1[2] + iVar2 * 4) = param_6;
          *(undefined1 *)(param_1[2] + iVar2 * 4 + 1) = param_7;
          *(undefined1 *)(param_1[2] + iVar2 * 4 + 2) = param_8;
          *(undefined1 *)(param_1[2] + iVar2 * 4 + 3) = 0xff;
        }
      }
      uVar3 = uVar3 + 1;
    } while ((int)uVar3 < iVar6);
    do {
      if (((param_1 != (uint *)0x0) && (-1 < (int)(uVar5 - 1 | param_3))) && (param_1[2] != 0)) {
        uVar3 = *param_1;
        bVar8 = SBORROW4(uVar3,uVar5);
        iVar2 = uVar3 - uVar5;
        bVar7 = uVar3 == uVar5;
        if ((int)uVar5 <= (int)uVar3) {
          uVar4 = param_1[1];
          bVar8 = SBORROW4(uVar4,param_3);
          iVar2 = uVar4 - param_3;
          bVar7 = uVar4 == param_3;
        }
        if (!bVar7 && iVar2 < 0 == bVar8) {
          iVar2 = uVar3 * param_3 + (uVar5 - 1);
          *(undefined1 *)(param_1[2] + iVar2 * 4) = param_6;
          *(undefined1 *)(param_1[2] + iVar2 * 4 + 1) = param_7;
          *(undefined1 *)(param_1[2] + iVar2 * 4 + 2) = param_8;
          *(undefined1 *)(param_1[2] + iVar2 * 4 + 3) = 0xff;
        }
      }
      param_3 = param_3 + 1;
    } while ((int)param_3 < iVar6);
  }
  return;
}


#undef DAT_10007dcc
#define DAT_10007dcc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1bcU)))
#undef LAB_10007dce
#define LAB_10007dce (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1beU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100067c8
 */

void recovered_100067c8(uint *param_1,uint param_2,uint param_3,int param_4,char *param_5,
                       char *param_6,int param_7)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined1 uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined1 uVar10;
  bool bVar11;
  bool bVar12;

  recovered_10006320(param_1,param_2,param_3 - 0x10,param_5,1,0x46,0x46,0x46);
  recovered_100069dc(param_1,param_2,param_3,0x22,0x1a,&DAT_10007dcc,0);
  uVar10 = 0xf7;
  uVar5 = 0xf7;
  uVar1 = 0xf7;
  uVar6 = param_2 + 0x2a;
  if (param_7 != 0) {
    uVar1 = 0xfa;
    uVar5 = 0xec;
    uVar10 = 0xe1;
  }
  uVar8 = param_3;
  uVar9 = param_3 + 0x19;
  if ((int)(param_3 + 0x19) < (int)param_3) {
    uVar9 = param_3;
  }
  do {
    uVar2 = uVar6;
    if (0x54 < param_4) {
      do {
        if (((param_1 != (uint *)0x0) && (-1 < (int)(uVar2 | uVar8))) && (param_1[2] != 0)) {
          uVar7 = *param_1;
          bVar12 = SBORROW4(uVar7,uVar2);
          iVar4 = uVar7 - uVar2;
          bVar11 = uVar7 == uVar2;
          if ((int)uVar2 < (int)uVar7) {
            uVar3 = param_1[1];
            bVar12 = SBORROW4(uVar3,uVar8);
            iVar4 = uVar3 - uVar8;
            bVar11 = uVar3 == uVar8;
          }
          if (!bVar11 && iVar4 < 0 == bVar12) {
            iVar4 = uVar8 * uVar7 + uVar2;
            *(undefined1 *)(param_1[2] + iVar4 * 4) = uVar10;
            *(undefined1 *)(param_1[2] + iVar4 * 4 + 1) = uVar5;
            *(undefined1 *)(param_1[2] + iVar4 * 4 + 2) = uVar1;
            *(undefined1 *)(param_1[2] + iVar4 * 4 + 3) = 0xff;
          }
        }
        uVar2 = uVar2 + 1;
      } while ((int)uVar2 < (int)(param_4 + -0x54 + uVar6));
    }
    bVar11 = uVar8 != uVar9;
    uVar8 = uVar8 + 1;
  } while (bVar11);
  uVar5 = 0x96;
  uVar1 = 0x96;
  if (param_7 != 0) {
    uVar1 = 0x9a;
  }
  uVar10 = 0x96;
  if (param_7 != 0) {
    uVar10 = 0x5f;
    uVar5 = 0x24;
  }
  recovered_10006544(param_1,uVar6,param_3,param_4 + -0x54,0x1a,uVar5,uVar10,uVar1);
  recovered_10006320(param_1,param_2 + 0x34,param_3 + 9,param_6,1,0x1e,0x1e,0x1e);
  recovered_100069dc(param_1,(param_2 + param_4) - 0x22,param_3,0x22,0x1a,&LAB_10007dce,0);
  return;
}

#undef DAT_10007dcc
#undef LAB_10007dce

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100069dc
 */

void recovered_100069dc(uint *param_1,uint param_2,uint param_3,int param_4,int param_5,
                       char *param_6,int param_7)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined1 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined1 uVar6;
  uint uVar7;
  undefined1 uVar8;
  bool bVar9;
  bool bVar10;

  uVar6 = 0xeb;
  uVar8 = 0xeb;
  uVar2 = 0xeb;
  if (param_7 != 0) {
    uVar8 = 0x9b;
    uVar2 = 0x69;
    uVar6 = 0x37;
  }
  if (0 < param_5) {
    uVar4 = param_3;
    do {
      uVar5 = param_2;
      if (0 < param_4) {
        do {
          if (((param_1 != (uint *)0x0) && (-1 < (int)(uVar5 | uVar4))) && (param_1[2] != 0)) {
            uVar7 = *param_1;
            bVar10 = SBORROW4(uVar7,uVar5);
            iVar1 = uVar7 - uVar5;
            bVar9 = uVar7 == uVar5;
            if ((int)uVar5 < (int)uVar7) {
              uVar3 = param_1[1];
              bVar10 = SBORROW4(uVar3,uVar4);
              iVar1 = uVar3 - uVar4;
              bVar9 = uVar3 == uVar4;
            }
            if (!bVar9 && iVar1 < 0 == bVar10) {
              iVar1 = uVar4 * uVar7 + uVar5;
              *(undefined1 *)(param_1[2] + iVar1 * 4) = uVar6;
              *(undefined1 *)(param_1[2] + iVar1 * 4 + 1) = uVar2;
              *(undefined1 *)(param_1[2] + iVar1 * 4 + 2) = uVar8;
              *(undefined1 *)(param_1[2] + iVar1 * 4 + 3) = 0xff;
            }
          }
          uVar5 = uVar5 + 1;
        } while ((int)uVar5 < (int)(param_4 + param_2));
      }
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < (int)(param_5 + param_3));
  }
  uVar2 = 0x84;
  uVar8 = 0x84;
  if (param_7 != 0) {
    uVar2 = 0x7c;
    uVar8 = 0x14;
  }
  uVar6 = 0x84;
  if (param_7 != 0) {
    uVar6 = 0x4a;
  }
  recovered_10006544(param_1,param_2,param_3,param_4,param_5,uVar8,uVar6,uVar2);
  iVar1 = 0x14;
  if (param_7 != 0) {
    iVar1 = 0xff;
  }
  recovered_10006320(param_1,param_2 + 10,param_3 + 10,param_6,1,iVar1,iVar1,iVar1);
  return;
}


void recovered_10006b60(uintptr_t state){pf_install_run((void *)state);}

