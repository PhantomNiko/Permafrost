#include "../../window_focus.h"
/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100021a0
 */

uint recovered_100021a0(uint a,uint b)

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
 * Address: 0x100021f0
 */

uint recovered_100021f0(uint a,uint b)

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
 * Address: 0x10002228
 */

int recovered_10002228(int a,int b)

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
 * Address: 0x10002298
 */

int recovered_10002298(int a,int b)

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
 * Address: 0x10002300
 */

ulonglong recovered_10002300(ulonglong a,ulonglong b)

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
 * Address: 0x100023e4
 */

ulonglong recovered_100023e4(ulonglong a,ulonglong b)

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
 * Address: 0x10002464
 */

longlong recovered_10002464(longlong a,longlong b)

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
 * Address: 0x10002584
 */

longlong recovered_10002584(longlong a,longlong b)

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


#undef DAT_100026c0
#define DAT_100026c0 (*(double *)(0x100026c0U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002640
 */

ulonglong recovered_10002640(double x)

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

#undef DAT_100026c0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100026c8
 */

longlong recovered_100026c8(double x)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  ulonglong uVar2;

  dVar1 = (double)(((ulonglong)x & 0xffffffff00000000) + ((ulonglong)x & 0xffffffff));
  if (NAN(dVar1)) {
    return 0;
  }
  if (dVar1 < 0.0) {
    uVar2 = recovered_10002640(-dVar1);
    return CONCAT44(-((int)(uVar2 >> 0x20) + (uint)((int)uVar2 != 0)),-(int)uVar2);
  }
  uVar2 = recovered_10002640(x);
  return uVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002714
 */

ulonglong recovered_10002714(float x)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulonglong uVar1;

  uVar1 = recovered_10002640((double)x);
  return uVar1;
}


#undef DAT_10008004
#define DAT_10008004 (*(code * *)(((uintptr_t)pf_module_state + 0x2ccU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002724
 */

longlong recovered_10002724(float x)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  longlong lVar1;

                    /* WARNING: Could not recover jumptable at ((uintptr_t)pf_module_state + 0x274U). Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = (*DAT_10008004)(SUB84((double)x,0),(int)((ulonglong)(double)x >> 0x20));
  return lVar1;
}

#undef DAT_10008004

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002734
 */

double recovered_10002734(ulonglong x)

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
 * Address: 0x1000277c
 */

double recovered_1000277c(longlong x)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  if (x < 0) {
    dVar1 = recovered_10002734(CONCAT44(-((int)((ulonglong)x >> 0x20) + (uint)((int)x != 0)),-(int)x
                                       ));
    return -dVar1;
  }
  dVar1 = recovered_10002734(x);
  return dVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100027a4
 */

float recovered_100027a4(ulonglong x)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_10002734(x);
  return (float)pf_bits_double(((pf_double_bits(dVar1) & 0xffffffff00000000) + (pf_double_bits(dVar1) & 0xffffffff)));
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100027c0
 */

float recovered_100027c0(longlong x)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_1000277c(x);
  return (float)pf_bits_double(((pf_double_bits(dVar1) & 0xffffffff00000000) + (pf_double_bits(dVar1) & 0xffffffff)));
}


#undef DAT_10004560
#define DAT_10004560 (*(uint64_t *)(0x10004560U))
#undef DAT_10004568
#define DAT_10004568 (*(uint64_t *)(0x10004568U))
#undef DAT_10004640
#define DAT_10004640 (*(uint64_t *)(0x10004640U))
#undef DAT_10004648
#define DAT_10004648 (*(uint64_t *)(0x10004648U))
#undef DAT_10007e87
#define DAT_10007e87 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x14fU)))
#undef DAT_10007e88
#define DAT_10007e88 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x150U)))
#undef DAT_10007e8b
#define DAT_10007e8b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x153U)))
#undef DAT_10007f89
#define DAT_10007f89 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x251U)))
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
#undef UINT_4001084c
#define UINT_4001084c (*(uint *)(0x4001084cU))
#undef UINT_40010850
#define UINT_40010850 (*(uint *)(0x40010850U))
#undef UINT_4001089c
#define UINT_4001089c (*(uint *)(0x4001089cU))
#undef UINT_400108c8
#define UINT_400108c8 (*(uint *)(0x400108c8U))
#undef UINT_40010978
#define UINT_40010978 (*(uint *)(0x40010978U))
#undef str_10007e10
#define str_10007e10 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xd8U)))
#undef str_10007e35
#define str_10007e35 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xfdU)))
#undef str_10007e5d
#define str_10007e5d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x125U)))
#undef str_10007e78
#define str_10007e78 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x140U)))
#undef str_10007f32
#define str_10007f32 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1faU)))
#undef str_10007f40
#define str_10007f40 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x208U)))
#undef str_10007f4c
#define str_10007f4c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x214U)))
#undef str_10007f5c
#define str_10007f5c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x224U)))
#define local_328 (*(undefined8 *)(frame + 1560))
#define local_320 (*(uint *)(frame + 1568))
#define local_31c (*(int *)(frame + 1572))
#define local_318 (*(int *)(frame + 1576))
#define local_314 (*(int *)(frame + 1580))
#define local_d4 (*(int *)(frame + 2156))
#define local_c8 (*(int *)(frame + 2168))
#define local_c4 (*(uint *)(frame + 2172))
#define local_c0 (*(int *)(frame + 2176))
#define local_bc (*(int *)(frame + 2180))
#define local_b8 (*(void * *)(frame + 2184))
#define local_ac (*(int *)(frame + 2196))
#define local_a8 (*(int *)(frame + 2200))
#define local_98 (*(undefined8 *)(frame + 2216))
#define local_88 (*(uint *)(frame + 2232))
#define acStack_57c (*(char (*)[191])(frame + 964))
#define acStack_4bd (*(char (*)[193])(frame + 1155))
#define acStack_3f4 (*(char (*)[128])(frame + 1356))
#define uStack_348 (*(undefined8 *)(frame + 1528))
#define uStack_d8 (*(undefined4 *)(frame + 2152))
#define iStack_b4 (*(int *)(frame + 2188))
#define uStack_b0 (*(undefined4 *)(frame + 2192))
#define auStack_a4 (*(undefined1 (*)[12])(frame + 2204))
#define uStack_90 (*(undefined8 *)(frame + 2224))
#define local_930 (*(uint *)(frame + 16))
#define local_90c (*(uint *)(frame + 52))
#define local_8dc (*(int *)(frame + 100))
#define local_8d8 (*(uint *)(frame + 104))
#define local_8d4 (*(uint *)(frame + 108))
#define local_8d0 (*(uint *)(frame + 112))
#define local_8b0 (*(void * *)(frame + 144))
#define local_59c (*(void * *)(frame + 932))
#define local_598 (*(int *)(frame + 936))
#define local_594 (*(int *)(frame + 940))
#define local_590 (*(undefined4 * *)(frame + 944))
#define local_58c (*(uint *)(frame + 948))
#define local_588 (*(uint *)(frame + 952))
#define local_584 (*(uint *)(frame + 956))
#define local_580 (*(uint *)(frame + 960))
#define local_3fc (*(ulong *)(frame + 1348))
#define local_3f8 (*(uint *)(frame + 1352))
#define local_374 (*(uint *)(frame + 1484))
#define local_370 (*(uint *)(frame + 1488))
#define local_36c (*(int *)(frame + 1492))
#define local_368 (*(uint *)(frame + 1496))
#define local_364 (*(uint *)(frame + 1500))
#define local_360 (*(undefined2 *)(frame + 1504))
#define local_35e (*(undefined1 *)(frame + 1506))
#define local_35d (*(undefined2 *)(frame + 1507))
#define local_35b (*(byte *)(frame + 1509))
#define local_358 (*(int *)(frame + 1512))
#define local_354 (*(char *)(frame + 1516))
#define local_350 (*(undefined8 *)(frame + 1520))
#define local_340 (*(undefined8 *)(frame + 1536))
#define local_338 (*(undefined8 *)(frame + 1544))
#define local_330 (*(undefined8 *)(frame + 1552))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100027e0
 */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

int recovered_100027e0(void)

{
  unsigned char frame[2400] __attribute__((aligned(16))) = {0};

  uint128 auVar1;
  int iVar2;
  uint uVar3;
  code *pcVar4;
  uchar uVar5;
  uint uVar6;
  uint uVar7;
  int *piVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  int iVar12;
  ulong uVar13;
  undefined4 *puVar14;
  byte bVar15;
  char *dst;
  uint extraout_r1 = 0;
  uint uVar16;
  int extraout_r1_00 = 0;
  int iVar17;
  void *extraout_r2;
  void *pvVar18;
  uint *puVar19;
  undefined4 *puVar20;
  uint uVar21;
  uint extraout_r3 = 0;
  char *pcVar22;
  int iVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint extraout_r12 = 0;
  uint extraout_r12_00 = 0;
  uint extraout_r12_01 = 0;
  uint uVar27;
  uint uVar28;
  bool bVar29;
  bool bVar30;
  bool bVar31;
  uint128 auVar32;
  uint128 auVar33;
  uint128 auVar34;
  uint128 auVar35;
  uint128 auVar36;
  uint128 auVar37;
  uint128 auVar38;
  undefined8 uVar39;
  uint128 auVar40;
  uint128 auVar41;
  uint128 auVar42;
  uint128 auVar43;
  uint128 auVar44;
  uint128 auVar45;
  uint128 auVar46;

  memset(&local_8dc,0,0x58c);
  local_58c = 0x10000;
  iVar23 = Ram40010800;
  if ((iVar23 == 0x50414d57) && (iVar23 = Ram40010804, iVar23 != 0)) {
    uVar6 = Ram40010808;
    bVar30 = 0xb < uVar6;
    if (bVar30) {
      uVar6 = Ram40010808;
    }
    if ((bVar30 && 0x4f < uVar6) && (pcVar4 = (code *)UINT_4001084c, pcVar4 != (code *)0x0)) {
      local_590 = (*pcVar4)(0x10000);
      if (local_590 == (undefined4 *)0x0) goto LAB_10002860;
      *(undefined1 *)local_590 = 0;
      pf_varargs_10007fcc__4_(acStack_57c,0xc0,&DAT_10007e88,((uintptr_t)pf_module_state + 0x109U));
      pf_varargs_10007fcc__4_(acStack_3f4,0x80,&DAT_10007e88,((uintptr_t)pf_module_state + 0x118U));
      pf_app_window_spec(&local_b8,str_10007e35,800,0x208);
      local_350 = CONCAT44(iStack_b4,local_b8);
      PF_PART4(auVar32, 8) = uStack_b0;
      PF_PART8(auVar32, 0) = local_350;
      PF_PART4(auVar32, 12) = local_ac;
      PF_PART12(auVar42, 4) = auStack_a4;
      PF_PART4(auVar42, 0) = local_a8;
      uStack_348 = PF_PART8(auVar32, 8);
      local_338 = PF_PART8(auStack_a4, 4);
      PF_PART4(local_340, 4) = PF_PART4(auStack_a4, 0);
      local_340 = CONCAT44(PF_PART4(local_340, 4),0xf6f7f6);
      local_330 = local_98;
      local_328 = uStack_90;
      local_320 = local_88 | 1;
      uVar6 = terror_ui_window_open(&local_8dc,&local_350);
      if (uVar6 == 0) {
        iVar23 = Ram40010800;
      }
      else {
        terror_ui_window_set_menus(&local_8dc,str_10007e5d,str_10007e78,&DAT_10007e87);
        local_59c = local_8b0;
        if (local_8b0 != (void *)0x0) {
          local_594 = 10;
          local_598 = 6;
          memset(&local_b8,0,0x18);
          iVar23 = Ram40010800;
          if ((iVar23 == 0x50414d57) && (iVar23 = Ram40010804, iVar23 != 0)) {
            uVar6 = Ram40010808;
            bVar30 = 0xb < uVar6;
            if (bVar30) {
              uVar6 = Ram40010808;
            }
            if (((bVar30 && 0x17b < uVar6) &&
                (pcVar4 = (code *)UINT_40010978, pcVar4 != (code *)0x0)) &&
               (uVar6 = (*pcVar4)(&DAT_10007e8b,0xffffffff,1,0,&local_b8), uVar6 != 0)) {
              if (local_ac - 1U < 0x40) {
                local_598 = local_ac + 1;
              }
              if (local_a8 - 1U < 0x40) {
                local_594 = local_a8;
              }
              if (((local_b8 != (void *)0x0) && (iStack_b4 == 0)) &&
                 ((local_b8 != (void *)0x0 &&
                  ((iVar23 = Ram40010800, iVar23 == 0x50414d57 &&
                   (iVar23 = Ram40010804, iVar23 != 0)))))) {
                uVar6 = Ram40010808;
                bVar30 = 0xb < uVar6;
                if (bVar30) {
                  uVar6 = Ram40010808;
                }
                if ((bVar30 && 0x53 < uVar6) &&
                   (pcVar4 = (code *)UINT_40010850, pcVar4 != (code *)0x0)) {
                  (*pcVar4)(local_b8);
                }
              }
              memset(&local_b8,0,0x18);
            }
          }
          local_354 = '\x01';
          recovered_10004950((int)&local_8dc);
          if (local_354 == '\x01') {
            PF_PART8(auVar1, 8) = SUB168((uint128)0x0,8);
            PF_PART8(auVar1, 0) = 0x100000001;
            auVar32 = (auVar1 << 64 | auVar1);
            dst = acStack_4bd + 1;
            bVar30 = true;
            uVar6 = (local_370 & 0x1fff) >> 0xc;
            do {
              uVar3 = local_8d4;
              uVar9 = local_8d8;
              memset(&local_350,0,0x278);
              pf_app_refresh_window_info(&local_8dc);              uVar7 = terror_ui_window_query(&local_8dc,&local_350);
              if (((uVar7 == 0) || (uVar5 = terror_ui_window_info_requests_close(&local_350), uVar5 != '\0')) ||
                 (uVar7 = terror_ui_window_sync_buffer(&local_8dc,&local_350), uVar7 == 0)) break;
              bVar29 = (int *)(local_8d8 ^ uVar9) != (int *)0x0 || local_8d4 != uVar3;
              local_59c = local_8b0;
              piVar8 = (int *)(local_8d8 ^ uVar9);
              if (bVar29) {
                piVar8 = &local_8dc;
              }
              local_374 = (uint)local_328;
              pvVar18 = local_8b0;
              uVar9 = (uint)local_328;
              if (bVar29) {
                recovered_10004650((int)piVar8);
                pvVar18 = extraout_r2;
                uVar9 = extraout_r3;
              }
              uVar3 = (uint)bVar29;
              uVar7 = uVar3;
              if ((local_31c == 0) || (local_31c == local_36c)) goto switchD_10002b8c_default;
              local_36c = local_31c;
              if (local_318 == 2) {
                if (local_314 == 2) {
                  uVar9 = recovered_10006ac0((uint)&local_8dc,2,pvVar18,uVar9);
                }
                else if (local_314 == 1) {
                  bVar29 = recovered_100068a4((int)&local_8dc);
                  uVar9 = (uint)bVar29;
                }
                else {
                  if (local_314 != 0) goto switchD_10002b8c_default;
                  uVar9 = recovered_100065c8((int)&local_8dc,2,(int)pvVar18);
                }
                uVar7 = 1;
                if (uVar9 == 0) {
                  uVar7 = uVar3;
                }
                goto switchD_10002b8c_default;
              }
              if (local_318 != 1) goto switchD_10002b8c_default;
              uVar7 = 1;
              switch((uintptr_t)(local_314)) {
              case 0:
                if (local_590 != (undefined4 *)0x0) {
                  *(undefined1 *)local_590 = 0;
                  local_35e = 0;
                  local_364 = 0;
                  local_368 = 0;
                  local_580 = 0;
                  local_584 = 0;
                  local_588 = 0;
                  pf_varargs_10007fcc__4_(acStack_3f4,0x80,&DAT_10007e88,((uintptr_t)pf_module_state + 0x118U));
                }
                break;
              case 1:
                iVar23 = 0;
                goto LAB_10002e78;
              case 2:
                recovered_1000640c((int)&local_8dc);
                break;
              case 3:
                iVar23 = 1;
LAB_10002e78:
                recovered_10006308((int)&local_8dc,iVar23);
              }
switchD_10002b8c_default:
              uVar3 = local_374;
              bVar29 = (local_374 & 2) == 0;
              uVar9 = local_374;
              if (bVar29) {
                uVar9 = (uint)(byte)local_35d;
              }
              if ((!bVar29 || uVar9 != 0) || (local_35b == 1)) {
                memset(&local_350,0,0x1c);
                uVar10 = terror_ui_window_pointer_state(&local_8dc,&local_350);
                iVar23 = local_598;
                uVar9 = local_8d4;
                bVar15 = 0;
                if (uVar10 != 0) {
                  bVar15 = (byte)local_350;
                }
                if (uVar10 != 0 && (bVar15 & 4) != 0) {
                  uVar10 = local_8d4 - 1;
                  if (local_8d4 == 0) {
                    uVar10 = 0x207;
                  }
                  if ((int)(uint)local_338 < (int)uVar10) {
                    uVar10 = (uint)local_338;
                  }
                  if ((int)(uint)local_338 < 0) {
                    uVar10 = 0;
                  }
                  iVar17 = local_8d8 - 1;
                  if (local_8d8 == 0) {
                    iVar17 = 799;
                  }
                  if (((int32_t)PF_PART4(local_340, 4)) < iVar17) {
                    iVar17 = PF_PART4(local_340, 4);
                  }
                  if (local_340 < 0) {
                    iVar17 = 0;
                  }
                  bVar15 = (byte)(local_350 >> 0x20) & 1;
                  if ((local_350 & 0x100000000) == 0) {
                    uVar9 = 0;
                    local_35d = 0;
                    bVar15 = 0;
                  }
                  else {
                    if (local_35b == 0) {
                      uVar28 = 0xa2;
                      if (0xa2 < (int)local_8d8) {
                        uVar28 = local_8d8;
                      }
                      iVar12 = uVar28 - 10;
                      if (local_8d8 == 0) {
                        iVar12 = 0x316;
                      }
                      if (0x47 < iVar17) {
                        bVar31 = SBORROW4(uVar10,0xf);
                        iVar2 = uVar10 - 0xf;
                        bVar29 = uVar10 == 0xf;
                        if (0xe < (int)uVar10) {
                          bVar31 = SBORROW4(iVar12,iVar17);
                          iVar2 = iVar12 - iVar17;
                          bVar29 = iVar12 == iVar17;
                        }
                        if ((!bVar29 && iVar2 < 0 == bVar31) && (uVar10 < 0x27)) {
                          uVar9 = 1;
                          local_360 = 1;
                          local_580 = local_584;
                          pf_varargs_10007fcc__4_(dst,0xc0,&DAT_10007e88,(uint)acStack_57c);
                          if (iVar23 < 1) {
                            iVar23 = 6;
                          }
                          iVar23 = recovered_10002228(iVar17 + -0x4c,iVar23);
                          uVar11 = local_3f8 + iVar23;
                          local_3fc = strlen(dst);
                          if ((int)uVar11 < (int)local_3fc) {
                            local_3fc = uVar11;
                          }
                          if ((int)uVar11 < 0) {
                            local_3fc = 0;
                          }
                          goto LAB_100031dc;
                        }
                      }
                      recovered_100071e0(&local_c8,(int)&local_8dc);
                      uVar24 = local_368;
                      uVar28 = iVar17 - 0xf;
                      uVar16 = 0xac;
                      if (0xac < (int)uVar9) {
                        uVar16 = uVar9;
                      }
                      bVar31 = 10 < uVar28;
                      bVar29 = uVar28 == 0xb;
                      if (uVar28 < 0xc) {
                        bVar31 = 0xc < uVar10 - 0x3f;
                        bVar29 = uVar10 - 0x3f == 0xd;
                      }
                      if (!bVar31 || bVar29) {
                        iVar23 = 1;
                        uVar21 = local_368 - 1;
                        uVar28 = extraout_r12;
                        if (local_590 != (undefined4 *)0x0) {
                          uVar28 = local_588;
                        }
                        if (local_590 != (undefined4 *)0x0 && uVar28 != 0) {
                          if (uVar28 < 4) {
                            uVar25 = 0;
                          }
                          else {
                            uVar25 = uVar28 & 0xfffffffc;
                            PF_PART8(auVar35, 8) = (0x0U);
                            PF_PART8(auVar35, 0) = (0x1U);
                            puVar14 = local_590;
                            uVar26 = uVar25;
                            do {
                              uVar26 = uVar26 - 4;
                              PF_PART12(auVar43, 4) = PF_PART12(auVar42, 4);
                              PF_PART4(auVar43, 0) = *puVar14;
                              auVar42 = VectorCopyLong(PF_PART8(auVar43, 0),1,1);
                              uVar39 = VectorCompareEqual(PF_PART8(auVar42, 0),0xa000a000a000a,2);
                              auVar42 = VectorCopyLong(uVar39,2,1);
                              auVar42 = auVar42 & auVar32;
                              auVar35 = VectorAdd(auVar35,auVar42,4);
                              puVar14 = puVar14 + 1;
                            } while (uVar26 != 0);
                            uVar39 = VectorAdd(PF_PART8(auVar35, 0),PF_PART8(auVar35, 8),4);
                            iVar23 = (int)uVar39 + (int)((ulonglong)uVar39 >> 0x20);
                            if (uVar28 == uVar25) goto LAB_10002f2c;
                          }
                          iVar12 = uVar28 - uVar25;
                          pcVar22 = (char *)((int)local_590 + uVar25);
                          do {
                            if (*pcVar22 == '\n') {
                              iVar23 = iVar23 + 1;
                            }
                            iVar12 = iVar12 + -1;
                            pcVar22 = pcVar22 + 1;
                          } while (iVar12 != 0);
                        }
LAB_10002f2c:
                        uVar28 = 0xd;
                        if (0 < local_594) {
                          uVar28 = local_594 + 3;
                        }
                        uVar16 = uVar16 - 0x68;
                        if (uVar9 == 0) {
                          uVar16 = 0x1a0;
                        }
                        local_368 = uVar21;
                        uVar9 = recovered_100021a0(uVar16,uVar28);
                        if (uVar9 < 2) {
                          uVar9 = 1;
                        }
                        local_368 = iVar23 - uVar9 & ~((int)(iVar23 - uVar9) >> 0x1f);
                        if ((int)uVar21 < (int)local_368) {
                          local_368 = uVar21;
                        }
                        if ((int)uVar24 < 1) {
                          local_368 = 0;
                        }
                        if (0x7fffffff < local_364) {
                          local_364 = 0;
                        }
LAB_10002f98:
                        uVar9 = 1;
                        if (local_368 != uVar24) goto LAB_100031dc;
                      }
                      else {
                        iVar23 = uVar16 - 0x38;
                        if (uVar9 == 0) {
                          iVar23 = 0x1d0;
                        }
                        if (((uVar28 < 0xc) && (iVar23 <= (int)uVar10)) && (uVar10 < iVar23 + 0xeU))
                        {
                          iVar23 = 1;
                          uVar21 = local_368 + 1;
                          uVar28 = extraout_r12;
                          if (local_590 != (undefined4 *)0x0) {
                            uVar28 = local_588;
                          }
                          if (local_590 != (undefined4 *)0x0 && uVar28 != 0) {
                            if (uVar28 < 4) {
                              uVar25 = 0;
                            }
                            else {
                              uVar25 = uVar28 & 0xfffffffc;
                              PF_PART8(auVar36, 8) = (0x0U);
                              PF_PART8(auVar36, 0) = (0x1U);
                              puVar14 = local_590;
                              uVar26 = uVar25;
                              do {
                                uVar26 = uVar26 - 4;
                                PF_PART12(auVar44, 4) = PF_PART12(auVar42, 4);
                                PF_PART4(auVar44, 0) = *puVar14;
                                auVar42 = VectorCopyLong(PF_PART8(auVar44, 0),1,1);
                                uVar39 = VectorCompareEqual(PF_PART8(auVar42, 0),0xa000a000a000a,2);
                                auVar42 = VectorCopyLong(uVar39,2,1);
                                auVar42 = auVar42 & auVar32;
                                auVar36 = VectorAdd(auVar36,auVar42,4);
                                puVar14 = puVar14 + 1;
                              } while (uVar26 != 0);
                              uVar39 = VectorAdd(PF_PART8(auVar36, 0),PF_PART8(auVar36, 8),4);
                              iVar23 = (int)uVar39 + (int)((ulonglong)uVar39 >> 0x20);
                              if (uVar28 == uVar25) goto LAB_10002dc8;
                            }
                            iVar12 = uVar28 - uVar25;
                            pcVar22 = (char *)((int)local_590 + uVar25);
                            do {
                              if (*pcVar22 == '\n') {
                                iVar23 = iVar23 + 1;
                              }
                              iVar12 = iVar12 + -1;
                              pcVar22 = pcVar22 + 1;
                            } while (iVar12 != 0);
                          }
LAB_10002dc8:
                          uVar28 = 0xd;
                          if (0 < local_594) {
                            uVar28 = local_594 + 3;
                          }
                          uVar16 = uVar16 - 0x68;
                          if (uVar9 == 0) {
                            uVar16 = 0x1a0;
                          }
                          local_368 = uVar21;
                          uVar9 = recovered_100021a0(uVar16,uVar28);
                          if (uVar9 < 2) {
                            uVar9 = 1;
                          }
                          local_368 = iVar23 - uVar9 & ~((int)(iVar23 - uVar9) >> 0x1f);
                          if ((int)uVar21 < (int)local_368) {
                            local_368 = uVar21;
                          }
                          if ((int)uVar24 < -1) {
                            local_368 = 0;
                          }
                          if (0x7fffffff < local_364) {
                            local_364 = 0;
                          }
                          goto LAB_10002f98;
                        }
                        uVar24 = uVar16 - 0x3f;
                        if (uVar9 == 0) {
                          uVar24 = 0x1c9;
                        }
                        if (((uVar28 < 0xc) && (0x4e < (int)uVar10)) && (uVar10 < uVar24)) {
                          bVar31 = SBORROW4(local_c8,iVar17);
                          iVar23 = local_c8 - iVar17;
                          bVar29 = local_c8 == iVar17;
                          if (local_c8 <= iVar17) {
                            bVar31 = SBORROW4(local_c4,uVar10);
                            iVar23 = local_c4 - uVar10;
                            bVar29 = local_c4 == uVar10;
                            uVar28 = local_c4;
                          }
                          if (bVar29 || iVar23 < 0 != bVar31) {
                            iVar12 = local_c0 + local_c8;
                            bVar31 = SBORROW4(iVar12,iVar17);
                            iVar23 = iVar12 - iVar17;
                            bVar29 = iVar12 == iVar17;
                            if (iVar17 < iVar12) {
                              uVar28 = local_bc + uVar28;
                              bVar31 = SBORROW4(uVar28,uVar10);
                              iVar23 = uVar28 - uVar10;
                              bVar29 = uVar28 == uVar10;
                            }
                            if (bVar29 || iVar23 < 0 != bVar31) goto LAB_10002fe0;
                          }
                          else {
LAB_10002fe0:
                            recovered_100071e0(&local_b8,(int)&local_8dc);
                            puVar14 = local_590;
                            iVar23 = 1;
                            uVar28 = uVar16 - 0x8e;
                            if (uVar9 == 0) {
                              uVar28 = 0x17a;
                            }
                            uVar24 = uVar28;
                            if (local_590 != (undefined4 *)0x0) {
                              uVar24 = local_588;
                            }
                            if (local_590 != (undefined4 *)0x0 && uVar24 != 0) {
                              if (uVar24 < 4) {
                                uVar26 = 0;
                              }
                              else {
                                uVar26 = uVar24 & 0xfffffffc;
                                PF_PART8(auVar37, 8) = (0x0U);
                                PF_PART8(auVar37, 0) = (0x1U);
                                uVar21 = uVar26;
                                puVar20 = local_590;
                                do {
                                  uVar21 = uVar21 - 4;
                                  PF_PART12(auVar45, 4) = PF_PART12(auVar42, 4);
                                  PF_PART4(auVar45, 0) = *puVar20;
                                  auVar42 = VectorCopyLong(PF_PART8(auVar45, 0),1,1);
                                  uVar39 = VectorCompareEqual(PF_PART8(auVar42, 0),0xa000a000a000a,2);
                                  auVar42 = VectorCopyLong(uVar39,2,1);
                                  auVar42 = auVar42 & auVar32;
                                  auVar37 = VectorAdd(auVar37,auVar42,4);
                                  puVar20 = puVar20 + 1;
                                } while (uVar21 != 0);
                                uVar39 = VectorAdd(PF_PART8(auVar37, 0),PF_PART8(auVar37, 8),4);
                                iVar23 = (int)uVar39 + (int)((ulonglong)uVar39 >> 0x20);
                                if (uVar24 == uVar26) goto LAB_1000301c;
                              }
                              iVar12 = uVar24 - uVar26;
                              pcVar22 = (char *)((int)local_590 + uVar26);
                              do {
                                if (*pcVar22 == '\n') {
                                  iVar23 = iVar23 + 1;
                                }
                                iVar12 = iVar12 + -1;
                                pcVar22 = pcVar22 + 1;
                              } while (iVar12 != 0);
                            }
LAB_1000301c:
                            uVar24 = 0xd;
                            if (0 < local_594) {
                              uVar24 = local_594 + 3;
                            }
                            uVar16 = uVar16 - 0x68;
                            if (uVar9 == 0) {
                              uVar16 = 0x1a0;
                            }
                            uVar9 = recovered_100021a0(uVar16,uVar24);
                            if (uVar9 < 2) {
                              uVar9 = 1;
                            }
                            puVar19 = &local_368;
                            if ((0 < (int)(iVar23 - uVar9)) && (0 < (int)(uVar28 - local_ac))) {
                              uVar24 = recovered_10002228(((uVar10 - local_ac / 2) + -0x4f) *
                                                          (iVar23 - uVar9),uVar28 - local_ac);
                              iVar23 = 1;
                              uVar28 = extraout_r1;
                              if (puVar14 != (undefined4 *)0x0) {
                                uVar28 = local_588;
                              }
                              if (puVar14 != (undefined4 *)0x0 && uVar28 != 0) {
                                if (uVar28 < 4) {
                                  uVar21 = 0;
                                }
                                else {
                                  uVar21 = uVar28 & 0xfffffffc;
                                  PF_PART8(auVar38, 8) = (0x0U);
                                  PF_PART8(auVar38, 0) = (0x1U);
                                  uVar16 = uVar21;
                                  puVar20 = puVar14;
                                  do {
                                    uVar16 = uVar16 - 4;
                                    PF_PART12(auVar46, 4) = PF_PART12(auVar42, 4);
                                    PF_PART4(auVar46, 0) = *puVar20;
                                    auVar42 = VectorCopyLong(PF_PART8(auVar46, 0),1,1);
                                    uVar39 = VectorCompareEqual(PF_PART8(auVar42, 0),0xa000a000a000a,2);
                                    auVar42 = VectorCopyLong(uVar39,2,1);
                                    auVar42 = auVar42 & auVar32;
                                    auVar38 = VectorAdd(auVar38,auVar42,4);
                                    puVar20 = puVar20 + 1;
                                  } while (uVar16 != 0);
                                  uVar39 = VectorAdd(PF_PART8(auVar38, 0),PF_PART8(auVar38, 8),4);
                                  iVar23 = (int)uVar39 + (int)((ulonglong)uVar39 >> 0x20);
                                  if (uVar28 == uVar21) goto LAB_100030a8;
                                }
                                iVar12 = uVar28 - uVar21;
                                pcVar22 = (char *)((int)puVar14 + uVar21);
                                do {
                                  if (*pcVar22 == '\n') {
                                    iVar23 = iVar23 + 1;
                                  }
                                  iVar12 = iVar12 + -1;
                                  pcVar22 = pcVar22 + 1;
                                } while (iVar12 != 0);
                              }
LAB_100030a8:
                              local_368 = iVar23 - uVar9 & ~((int)(iVar23 - uVar9) >> 0x1f);
                              if ((int)uVar24 < (int)local_368) {
                                local_368 = uVar24;
                              }
                              if ((int)uVar24 < 0) {
                                local_368 = 0;
                              }
                              puVar19 = &local_364;
                              if (local_364 < 0x80000000) goto LAB_100031ac;
                            }
                            *puVar19 = 0;
                          }
LAB_100031ac:
                          uVar9 = 1;
                          local_35d = CONCAT11(PF_PART1(local_35d, 1),1);
                          recovered_100071e0(&uStack_d8,(int)&local_8dc);
                          local_358 = uVar10 - local_d4;
                          goto LAB_100031dc;
                        }
                      }
                      iVar23 = recovered_10006fcc((int)&local_8dc,iVar17,uVar10,0,0);
                      if (iVar23 == 0) {
                        iVar23 = local_8d8 - 0x14;
                        if (local_8d8 == 0) {
                          iVar23 = 0x30c;
                        }
                        uVar28 = 0xac;
                        if (0xac < (int)local_8d4) {
                          uVar28 = local_8d4;
                        }
                        uVar28 = uVar28 - 0x28;
                        if (local_8d4 == 0) {
                          uVar28 = 0x1e0;
                        }
                        if (((iVar17 < 0x4b) || ((int)uVar10 < 0x40)) || (iVar23 <= iVar17)) {
                          uVar9 = 0;
                        }
                        else {
                          uVar9 = 0;
                          if (uVar10 < uVar28) goto LAB_10003164;
                        }
                      }
                      else {
LAB_10003164:
                        uVar9 = 1;
                        local_35d = CONCAT11(1,(byte)local_35d);
                      }
                    }
                    else {
                      uVar9 = 0;
                    }
LAB_100031dc:
                    uVar28 = local_8d4;
                    if ((byte)local_35d == '\x01') {
                      recovered_100071e0(&local_b8,(int)&local_8dc);
                      puVar14 = local_590;
                      uVar24 = 0xac;
                      if (0xac < (int)uVar28) {
                        uVar24 = uVar28;
                      }
                      iVar23 = uVar24 - 0x8e;
                      if (uVar28 == 0) {
                        iVar23 = 0x17a;
                      }
                      uVar16 = extraout_r12_00;
                      if (local_590 != (undefined4 *)0x0) {
                        uVar16 = local_588;
                      }
                      iVar17 = 1;
                      if (local_590 != (undefined4 *)0x0 && uVar16 != 0) {
                        if (uVar16 < 4) {
                          uVar26 = 0;
                        }
                        else {
                          uVar26 = uVar16 & 0xfffffffc;
                          PF_PART8(auVar33, 8) = (0x0U);
                          PF_PART8(auVar33, 0) = (0x1U);
                          puVar20 = local_590;
                          uVar21 = uVar26;
                          do {
                            uVar21 = uVar21 - 4;
                            PF_PART12(auVar40, 4) = PF_PART12(auVar42, 4);
                            PF_PART4(auVar40, 0) = *puVar20;
                            auVar42 = VectorCopyLong(PF_PART8(auVar40, 0),1,1);
                            uVar39 = VectorCompareEqual(PF_PART8(auVar42, 0),0xa000a000a000a,2);
                            auVar42 = VectorCopyLong(uVar39,2,1);
                            auVar42 = auVar42 & auVar32;
                            auVar33 = VectorAdd(auVar33,auVar42,4);
                            puVar20 = puVar20 + 1;
                          } while (uVar21 != 0);
                          uVar39 = VectorAdd(PF_PART8(auVar33, 0),PF_PART8(auVar33, 8),4);
                          iVar17 = (int)uVar39 + (int)((ulonglong)uVar39 >> 0x20);
                          if (uVar16 == uVar26) goto LAB_10003230;
                        }
                        iVar12 = uVar16 - uVar26;
                        pcVar22 = (char *)((int)local_590 + uVar26);
                        do {
                          if (*pcVar22 == '\n') {
                            iVar17 = iVar17 + 1;
                          }
                          iVar12 = iVar12 + -1;
                          pcVar22 = pcVar22 + 1;
                        } while (iVar12 != 0);
                      }
LAB_10003230:
                      uVar16 = 0xd;
                      uVar24 = uVar24 - 0x68;
                      if (0 < local_594) {
                        uVar16 = local_594 + 3;
                      }
                      if (uVar28 == 0) {
                        uVar24 = 0x1a0;
                      }
                      uVar24 = recovered_100021a0(uVar24,uVar16);
                      uVar28 = local_368;
                      if (uVar24 < 2) {
                        uVar24 = 1;
                      }
                      iVar17 = iVar17 - uVar24;
                      uVar16 = 0;
                      iVar12 = iVar17;
                      iVar2 = extraout_r1_00;
                      if (0 < iVar17) {
                        iVar12 = iVar23 - local_ac;
                        iVar2 = iVar12;
                      }
                      if (0 < iVar12) {
                        uVar16 = recovered_10002228(((uVar10 - local_358) + -0x4f) * iVar17,iVar2);
                        iVar23 = 1;
                        uVar10 = extraout_r12_01;
                        if (puVar14 != (undefined4 *)0x0) {
                          uVar10 = local_588;
                        }
                        if (puVar14 != (undefined4 *)0x0 && uVar10 != 0) {
                          if (uVar10 < 4) {
                            uVar26 = 0;
                          }
                          else {
                            uVar26 = uVar10 & 0xfffffffc;
                            PF_PART8(auVar34, 8) = (0x0U);
                            PF_PART8(auVar34, 0) = (0x1U);
                            uVar21 = uVar26;
                            puVar20 = puVar14;
                            do {
                              uVar21 = uVar21 - 4;
                              PF_PART12(auVar41, 4) = PF_PART12(auVar42, 4);
                              PF_PART4(auVar41, 0) = *puVar20;
                              auVar42 = VectorCopyLong(PF_PART8(auVar41, 0),1,1);
                              uVar39 = VectorCompareEqual(PF_PART8(auVar42, 0),0xa000a000a000a,2);
                              auVar42 = VectorCopyLong(uVar39,2,1);
                              auVar42 = auVar42 & auVar32;
                              auVar34 = VectorAdd(auVar34,auVar42,4);
                              puVar20 = puVar20 + 1;
                            } while (uVar21 != 0);
                            uVar39 = VectorAdd(PF_PART8(auVar34, 0),PF_PART8(auVar34, 8),4);
                            iVar23 = (int)uVar39 + (int)((ulonglong)uVar39 >> 0x20);
                            if (uVar10 == uVar26) goto LAB_100032b8;
                          }
                          iVar17 = uVar10 - uVar26;
                          pcVar22 = (char *)((int)puVar14 + uVar26);
                          do {
                            if (*pcVar22 == '\n') {
                              iVar23 = iVar23 + 1;
                            }
                            iVar17 = iVar17 + -1;
                            pcVar22 = pcVar22 + 1;
                          } while (iVar17 != 0);
                        }
LAB_100032b8:
                        local_368 = iVar23 - uVar24 & ~((int)(iVar23 - uVar24) >> 0x1f);
                        if ((int)uVar16 < (int)local_368) {
                          local_368 = uVar16;
                        }
                        if ((int)uVar16 < 0) {
                          local_368 = 0;
                        }
                        if (0x7fffffff < local_364) {
                          local_364 = 0;
                        }
                        uVar16 = 0;
                        if (local_368 != uVar28) {
                          uVar16 = 1;
                        }
                      }
                      uVar9 = uVar9 | uVar16;
                    }
                    else if (PF_PART1(local_35d, 1) == '\x01') {
                      uVar10 = recovered_10006fcc((int)&local_8dc,iVar17,uVar10,1,1);
                      uVar9 = uVar9 | uVar10;
                    }
                  }
                  local_35b = bVar15;
                }
                else {
                  uVar9 = 0;
                  local_35d = 0;
                  local_35b = 0;
                }
                uVar7 = uVar7 | uVar9;
                if ((uVar3 & 2) != 0) {
                  iVar23 = 0;
                  local_90c = 0;
                  while( true ) {
                    iVar17 = Ram40010800;
                    if ((iVar17 != 0x50414d57) || (iVar17 = Ram40010804, iVar17 == 0)) break;
                    uVar9 = Ram40010808;
                    bVar29 = uVar9 < 0xc;
                    if (!bVar29) {
                      uVar9 = Ram40010808;
                    }
                    if ((bVar29 || uVar9 < 0x30) ||
                       (pcVar4 = (code *)UINT_4001082c, pcVar4 == (code *)0x0)) break;
                    uVar10 = (*pcVar4)();
                    uVar11 = local_3fc;
                    uVar9 = local_584;
                    if (uVar10 == 0) break;
                    uVar28 = (uVar10 & 0xffff) >> 8;
                    if ((uVar10 & 0x8000ffff) == 0x80000000) goto switchD_10003aec_caseD_48;
                    uVar24 = uVar10 & 0xff;
                    if ((char)local_360 != '\x01') {
                      uVar16 = local_588;
                      if (local_580 < local_588) {
                        uVar16 = local_580;
                      }
                      uVar21 = local_588;
                      if (local_584 < local_588) {
                        uVar21 = local_584;
                      }
                      uVar25 = uVar21;
                      uVar26 = uVar16;
                      if (local_580 < uVar21) {
                        uVar25 = uVar16;
                        uVar26 = uVar21;
                      }
                      uVar27 = 0;
                      local_930 = 0;
                      if (uVar16 != uVar21) {
                        uVar27 = uVar26;
                        local_930 = uVar25;
                      }
                      if ((uVar10 & 0x40000) != 0) {
                        if (((uVar28 != 0x1e) && (uVar24 != 1 && uVar24 != 0x61)) &&
                           (uVar24 != 0x41)) {
                          if (((uVar28 == 0x2e) || (uVar24 == 3 || uVar24 == 99)) ||
                             (uVar24 == 0x43)) {
                            bVar29 = recovered_100068a4((int)&local_8dc);
                            uVar9 = (uint)bVar29;
                          }
                          else if (((uVar28 == 0x2f) || (uVar24 == 0x16 || uVar24 == 0x76)) ||
                                  (uVar24 == 0x56)) {
                            uVar9 = recovered_10006ac0((uint)&local_8dc,local_930,uVar25,local_584);
                          }
                          else {
                            if ((uVar28 != 0x2d && uVar24 != 0x18) &&
                               (uVar24 != 0x78 && uVar24 != 0x58)) goto switchD_10003aec_caseD_48;
                            uVar9 = recovered_100065c8((int)&local_8dc,local_930,uVar25);
                          }
                          goto LAB_10003684;
                        }
                        local_584 = local_588;
                        local_580 = 0;
                        pf_varargs_10007fcc__4_(acStack_3f4,0x80,&DAT_10007e88,((uintptr_t)pf_module_state + 0x244U));
                        goto LAB_10003524;
                      }
                      if ((uVar10 & 0x20000) != 0) goto switchD_10003aec_caseD_48;
                      if (uVar24 - 0x20 < 0x5f) {
                        local_350 = CONCAT71(PF_PART7(local_350, 1),(char)uVar10);
                        if (local_590 != (undefined4 *)0x0) {
                          if (uVar16 == uVar21) {
                            uVar9 = local_588 + 1;
                            if (uVar9 < local_58c) goto LAB_100037b4;
                          }
                          else if ((local_588 + 1) - (uVar26 - uVar25) < local_58c) {
                            memmove((undefined1 *)((int)local_590 + uVar25),
                                               (undefined1 *)((int)local_590 + uVar26),
                                               (local_588 + 1) - uVar26);
                            local_588 = local_588 - (uVar26 - uVar25);
                            uVar9 = local_588 + 1;
                            local_584 = uVar25;
                            local_580 = uVar25;
LAB_100037b4:
                            memmove((undefined1 *)((int)local_590 + local_584) + 1,
                                               (undefined1 *)((int)local_590 + local_584),
                                               uVar9 - local_584);
                            memcpy((undefined1 *)((int)local_590 + local_584),&local_350
                                               ,1);
                            local_588 = local_588 + 1;
                            local_35e = 1;
                            local_584 = local_584 + 1;
                            local_580 = local_584;
                            goto LAB_10003524;
                          }
                        }
                        goto switchD_10003aec_caseD_48;
                      }
                      if (uVar24 == 9) {
                        if (local_590 != (undefined4 *)0x0) {
                          if (uVar16 == uVar21) {
                            if (local_588 + 4 < local_58c) {
LAB_1000385c:
                              memmove((undefined1 *)((int)local_590 + local_584) + 4,
                                                 (undefined1 *)((int)local_590 + local_584),
                                                 (local_588 - local_584) + 1);
                              memcpy((undefined1 *)((int)local_590 + local_584),
                                                 &DAT_10007f89,4);
                              local_588 = local_588 + 4;
                              local_35e = 1;
                              local_584 = local_584 + 4;
                              local_580 = local_584;
                              goto LAB_10003524;
                            }
                          }
                          else if ((local_588 - (uVar26 - uVar25)) + 4 < local_58c) {
                            memmove((undefined1 *)((int)local_590 + uVar25),
                                               (undefined1 *)((int)local_590 + uVar26),
                                               (local_588 - uVar26) + 1);
                            local_588 = local_588 - (uVar26 - uVar25);
                            local_584 = uVar25;
                            local_580 = uVar25;
                            goto LAB_1000385c;
                          }
                        }
                        goto switchD_10003aec_caseD_48;
                      }
                      if ((uVar28 == 0xe || uVar24 == 0x7f) || (uVar24 == 8)) {
                        bVar29 = uVar21 <= uVar16;
                        if (uVar16 != uVar21) {
                          bVar29 = uVar25 <= uVar26;
                        }
                        if ((!(bVar29 && (uVar16 != uVar21 && uVar26 != uVar25))) ||
                           (local_590 == (undefined4 *)0x0)) {
                          if ((local_584 == 0) || (local_590 == (undefined4 *)0x0))
                          goto switchD_10003aec_caseD_48;
                          memmove((undefined1 *)((int)local_590 + local_584) + -1,
                                             (undefined1 *)((int)local_590 + local_584),
                                             (local_588 - local_584) + 1);
                          local_588 = local_588 - 1;
                          local_584 = local_584 - 1;
                        }
                        else {
                          memmove((undefined1 *)((int)local_590 + uVar25),
                                             (undefined1 *)((int)local_590 + uVar26),
                                             (local_588 - uVar26) + 1);
                          local_588 = (uVar25 - uVar26) + local_588;
                          local_584 = uVar25;
                        }
                        local_35e = 1;
                        local_580 = local_584;
                        goto LAB_10003524;
                      }
                      if (uVar28 == 0x1c) {
LAB_10003ab0:
                        local_350 = CONCAT71(PF_PART7(local_350, 1),10);
                        uVar9 = recovered_10006e80((int)&local_8dc,&local_350,1);
                        goto LAB_10003684;
                      }
                      if (uVar28 == 0x53) {
                        uVar9 = recovered_10007600((int)&local_8dc);
                        goto LAB_10003684;
                      }
                      if (uVar24 == 0xd || uVar24 == 10) goto LAB_10003ab0;
                      switch((uintptr_t)(uVar28)) {
                      case 0x47:
                        local_930 = 0;
                        if (local_590 != (undefined4 *)0x0 && uVar21 != 0) {
                          do {
                            if (*(char *)((int)local_590 + (uVar21 - 1)) == '\n') goto LAB_10003e70;
                            uVar21 = uVar21 - 1;
                          } while (uVar21 != 0);
                        }
                        goto LAB_10003f8c;
                      case 0x48:
                        iVar17 = 1;
                        goto LAB_10003d84;
                      case 0x49:
                        uVar9 = 0xd;
                        if (0 < local_594) {
                          uVar9 = local_594 + 3;
                        }
                        uVar10 = 0xac;
                        if (0xac < (int)local_8d4) {
                          uVar10 = local_8d4;
                        }
                        uVar10 = uVar10 - 0x68;
                        if (local_8d4 == 0) {
                          uVar10 = 0x1a0;
                        }
                        uVar9 = recovered_100021a0(uVar10,uVar9);
                        if (uVar9 < 2) {
                          uVar9 = 1;
                        }
                        local_368 = local_368 - uVar9;
                        goto LAB_10003e28;
                      case 0x4b:
                        if (((uVar10 & 0x10000) != 0) || (uVar16 == uVar21)) {
                          if (local_584 == 0) break;
                          local_930 = local_584 - 1;
                        }
LAB_10003e9c:
                        uVar9 = 1;
                        local_584 = local_930;
                        goto LAB_10003f9c;
                      case 0x4d:
                        if (((uVar10 & 0x10000) == 0) && (uVar16 != uVar21)) {
                          uVar9 = 1;
                          local_584 = uVar27;
                          goto LAB_10003f9c;
                        }
                        if (local_584 < local_588) {
                          local_930 = local_584 + 1;
                          goto LAB_10003e9c;
                        }
                        break;
                      case 0x4f:
                        if (local_590 == (undefined4 *)0x0) {
                          local_930 = 0;
                        }
                        else {
                          for (; uVar21 != 0; uVar21 = uVar21 - 1) {
                            if (*(char *)((int)local_590 + (uVar21 - 1)) == '\n') {
                              local_930 = 0;
                              if (uVar21 <= local_588) goto LAB_10003d3c;
                              goto LAB_10003f8c;
                            }
                          }
                          uVar21 = 0;
LAB_10003d3c:
                          if (uVar21 < local_588) {
                            do {
                              if (*(char *)((int)local_590 + uVar21) == '\n') goto LAB_10003e70;
                              uVar21 = uVar21 + 1;
                            } while (local_588 != uVar21);
                            local_930 = local_588;
                          }
                          else {
LAB_10003e70:
                            local_930 = uVar21;
                          }
                        }
LAB_10003f8c:
                        local_584 = local_930;
                        iVar17 = local_930 - uVar9;
LAB_10003f98:
                        uVar9 = 0;
                        if (iVar17 != 0) {
                          uVar9 = 1;
                        }
LAB_10003f9c:
                        if (((uVar10 & 0x10000) == 0) && (uVar9 != 0)) {
                          local_580 = local_584;
                        }
                        else {
LAB_10003684:
                          if (uVar9 == 0) break;
                        }
LAB_10003524:
                        recovered_10004650((int)&local_8dc);
                        local_90c = 1;
                        break;
                      case 0x50:
                        iVar17 = 0;
LAB_10003d84:
                        recovered_100076e0((int)&local_8dc,iVar17);
                        iVar17 = local_584 - uVar9;
                        goto LAB_10003f98;
                      case 0x51:
                        uVar9 = 0xd;
                        if (0 < local_594) {
                          uVar9 = local_594 + 3;
                        }
                        uVar10 = 0xac;
                        if (0xac < (int)local_8d4) {
                          uVar10 = local_8d4;
                        }
                        uVar10 = uVar10 - 0x68;
                        if (local_8d4 == 0) {
                          uVar10 = 0x1a0;
                        }
                        uVar9 = recovered_100021a0(uVar10,uVar9);
                        if (uVar9 < 2) {
                          uVar9 = 1;
                        }
                        local_368 = local_368 + uVar9;
LAB_10003e28:
                        recovered_100074b0((int)&local_8dc);
                        goto LAB_10003524;
                      }
                      goto switchD_10003aec_caseD_48;
                    }
                    if ((uVar10 & 0x60000) != 0) goto switchD_10003aec_caseD_48;
                    if (uVar24 - 0x20 < 0x5f) {
                      uVar11 = strlen(dst);
                      if (0xffffff3f < uVar11 - 0xbf) {
                        memmove(acStack_4bd + local_3fc + 2,dst + local_3fc,
                                           (uVar11 - local_3fc) + 1);
                        dst[local_3fc] = (char)uVar10;
LAB_1000342c:
                        local_3fc = local_3fc + 1;
                        goto LAB_1000358c;
                      }
                      goto switchD_10003aec_caseD_48;
                    }
                    if ((uVar28 == 0xe || uVar24 == 0x7f) || (uVar24 == 8)) {
                      uVar11 = strlen(dst);
                      if ((local_3fc != 0) && (uVar11 != 0)) {
                        memmove(acStack_4bd + local_3fc,dst + local_3fc,
                                           (uVar11 - local_3fc) + 1);
LAB_10003584:
                        local_3fc = local_3fc - 1;
                        goto LAB_1000358c;
                      }
                      goto switchD_10003aec_caseD_48;
                    }
                    bVar15 = PF_PART1(local_360, 1);
                    if ((uVar28 == 0x1c || uVar24 == 0xd) || (uVar24 == 10)) {
                      if (acStack_4bd[1] == '\0') {
                        pcVar22 = str_10007f32;
                      }
                      else {
                        local_360 = (ushort)PF_PART1(local_360, 1) << 8;
                        if (bVar15 == 1) {
                          pf_varargs_10007fcc__4_(acStack_57c,0xc0,&DAT_10007e88,(uint)dst);
                          iVar17 = recovered_1000640c((int)&local_8dc);
                          if (iVar17 == 0) goto switchD_10003aec_caseD_48;
                          goto LAB_1000358c;
                        }
                        pcVar22 = str_10007f40;
                        if (local_590 == (undefined4 *)0x0) goto LAB_10003a58;
                        memset(&local_c8,0,0xc);
                        bVar29 = recovered_10006d44(dst,(uint *)&local_350);
                        if (bVar29) {
                          iVar17 = Ram40010800;
                          if ((iVar17 == 0x50414d57) && (iVar17 = Ram40010804, iVar17 != 0)) {
                            uVar9 = Ram40010808;
                            bVar31 = 0xb < uVar9;
                            bVar29 = uVar9 == 0xc;
                            if (bVar31) {
                              uVar9 = Ram40010808;
                              bVar29 = uVar9 == 0xcb;
                            }
                            if ((!bVar31 || uVar9 < 0xcb) || bVar29) goto LAB_100039e8;
                            pcVar4 = (code *)UINT_400108c8;
                            if (pcVar4 == (code *)0x0) goto LAB_10003a1c;
                            uVar9 = (*pcVar4)((uint)local_350,(char *)((int)&local_350 + 4),
                                              &local_c8);
LAB_10003c60:
                            iVar17 = 0;
                            if (uVar9 != 0) {
                              iVar17 = local_c8;
                            }
                            if (uVar9 != 0 && iVar17 != 0) {
                              local_588 = 0;
                              if (local_c4 != 0) {
                                uVar9 = 0;
                                do {
                                  uVar10 = local_588 + 1;
                                  if (local_58c <= uVar10) break;
                                  bVar15 = *(byte *)(iVar17 + uVar9);
                                  uVar28 = (uint)bVar15;
                                  if (uVar28 == 0xd) {
                                    bVar15 = 10;
                                    if ((local_c4 <= uVar9 + 1) ||
                                       (*(char *)(iVar17 + uVar9 + 1) != '\n')) goto LAB_10003c9c;
LAB_10003d04:
                                    uVar10 = local_588;
                                  }
                                  else {
                                    uVar24 = uVar28 - 9;
                                    bVar29 = 1 < uVar24;
                                    if (bVar29) {
                                      uVar24 = uVar28 - 0x20;
                                    }
                                    if ((!(!bVar29 || uVar24 < 0x5f)) &&
                                       (bVar15 = 0x3f, uVar28 == 0)) goto LAB_10003d04;
LAB_10003c9c:
                                    *(byte *)((int)local_590 + local_588) = bVar15;
                                  }
                                  uVar9 = uVar9 + 1;
                                  local_588 = uVar10;
                                } while (uVar9 < local_c4);
                              }
                              *(undefined1 *)((int)local_590 + local_588) = 0;
                              local_35e = 0;
                              local_364 = 0;
                              local_368 = 0;
                              local_580 = 0;
                              local_584 = 0;
                              pf_varargs_10007fcc__4_(acStack_57c,0xc0,&DAT_10007e88,(uint)dst);
                              pf_varargs_10007fcc__4_
                                        ((char *)&local_b8,0x80,str_10007f5c,(uint)acStack_57c);
                              pf_varargs_10007fcc__4_
                                        (acStack_3f4,0x80,&DAT_10007e88,(uint)&local_b8);
                              if (local_58c <= local_c4) {
                                pf_varargs_10007fcc__4_(acStack_3f4,0x80,&DAT_10007e88,((uintptr_t)pf_module_state + 0x22eU));
                              }
                              goto LAB_1000358c;
                            }
                          }
                          else {
LAB_100039e8:
                            iVar17 = Ram40010800;
                            if ((iVar17 == 0x50414d57) && (iVar17 = Ram40010804, iVar17 != 0)) {
                              uVar9 = Ram40010808;
                              bVar29 = 0xb < uVar9;
                              if (bVar29) {
                                uVar9 = Ram40010808;
                              }
                              if ((bVar29 && 0x37 < uVar9) &&
                                 (pcVar4 = (code *)UINT_40010834, pcVar4 != (code *)0x0)) {
                                uVar9 = (*pcVar4)((char *)((int)&local_350 + 4),&local_c8);
                                goto LAB_10003c60;
                              }
                            }
                          }
                        }
LAB_10003a1c:
                        pcVar22 = (char *)&local_b8;
                        pf_varargs_10007fcc__4_(pcVar22,0x80,str_10007f4c,(uint)dst);
                      }
LAB_10003a58:
                      pf_varargs_10007fcc__4_(acStack_3f4,0x80,&DAT_10007e88,(uint)pcVar22);
                      goto switchD_10003aec_caseD_48;
                    }
                    if (uVar24 == 0x1b || uVar28 == 1) {
                      local_360 = (ushort)PF_PART1(local_360, 1) << 8;
                      pf_varargs_10007fcc__4_(acStack_3f4,0x80,&DAT_10007e88,((uintptr_t)pf_module_state + 0x1e7U));
                      goto LAB_1000358c;
                    }
                    switch((uintptr_t)(uVar28)) {
                    case 0x47:
                      local_3fc = 0;
                      goto LAB_1000358c;
                    case 0x4b:
                      if (local_3fc != 0) goto LAB_10003584;
                      break;
                    case 0x4d:
                      uVar13 = strlen(dst);
                      if (uVar11 < uVar13) goto LAB_1000342c;
                      break;
                    case 0x4f:
                      local_3fc = strlen(dst);
LAB_1000358c:
                      iVar17 = local_598;
                      if (local_598 < 1) {
                        iVar17 = 6;
                      }
                      uVar9 = 0xa2;
                      if (0xa2 < (int)local_8d8) {
                        uVar9 = local_8d8;
                      }
                      iVar12 = uVar9 - 0x5a;
                      if (local_8d8 == 0) {
                        iVar12 = 0x2c6;
                      }
                      iVar17 = recovered_10002228(iVar12,iVar17);
                      if (iVar17 < 2) {
                        iVar17 = 1;
                      }
                      if ((int)local_3fc < (int)local_3f8) {
                        local_3f8 = local_3fc;
                      }
                      else if ((int)(local_3f8 + iVar17) <= (int)local_3fc) {
                        local_3f8 = (local_3fc - iVar17) + 1;
                      }
                      local_90c = 1;
                      if (0x7fffffff < local_3f8) {
                        local_3f8 = (uint)(local_3f8 < 0x80000000);
                      }
                    }
switchD_10003aec_caseD_48:
                    iVar23 = iVar23 + 1;
                    if (iVar23 == 0x20) break;
                  }
                  uVar7 = local_90c | uVar7;
                }
              }
              if ((char)local_360 == '\x01') {
                iVar23 = local_598;
                if (local_598 < 1) {
                  iVar23 = 6;
                }
                uVar9 = 0xa2;
                if (0xa2 < (int)local_8d8) {
                  uVar9 = local_8d8;
                }
                iVar17 = uVar9 - 0x5a;
                if (local_8d8 == 0) {
                  iVar17 = 0x2c6;
                }
                iVar23 = recovered_10002228(iVar17,iVar23);
                uVar10 = local_3f8;
                if (iVar23 < 2) {
                  iVar23 = 1;
                }
                if ((int)local_3fc < (int)local_3f8) {
                  local_3f8 = local_3fc;
                }
                else if ((int)(local_3f8 + iVar23) <= (int)local_3fc) {
                  local_3f8 = (local_3fc - iVar23) + 1;
                }
                if (0x7fffffff < local_3f8) {
                  local_3f8 = 0;
                }
                uVar9 = 0;
                if (uVar10 != local_3f8) {
                  uVar9 = 1;
                }
              }
              else {
                uVar9 = recovered_10004650((int)&local_8dc);
              }
              uVar10 = (local_370 & 0x1fff) >> 0xc;
              if ((uVar3 & 2) == 0) {
                uVar10 = 1;
              }
              uVar7 = uVar10 != uVar6 | uVar9 | uVar7;
              if (bVar30 || (uVar7 & 1) != 0) {
                recovered_10004950((int)&local_8dc);
                terror_ui_window_present(&local_8dc,str_10007e35,local_59c,local_8d8,local_8d4,local_8d0,
                                   0xf6f7f6);
              }
              local_370 = local_370 + 1;
              if ((uVar7 & 1) == 0) {
                uVar6 = 5;
                if ((uVar3 & 2) == 0) {
                  uVar6 = 0x14;
                }
                terror_ui_yield_frames(uVar6);
              }
              iVar23 = Ram40010800;
              if ((iVar23 == 0x50414d57) && (iVar23 = Ram40010804, iVar23 != 0)) {
                uVar6 = Ram40010808;
                bVar30 = 0xb < uVar6;
                if (bVar30) {
                  uVar6 = Ram40010808;
                }
                if ((bVar30 && 0x9f < uVar6) &&
                   (pcVar4 = (code *)UINT_4001089c, pcVar4 != (code *)0x0)) {
                  (*pcVar4)();
                }
              }
              bVar30 = false;
              uVar6 = uVar10;
            } while (local_354 != '\0');
          }
          if (local_8dc != 0) {
            terror_ui_window_close(&local_8dc);
          }
          if (local_590 == (undefined4 *)0x0) {
            return 0;
          }
          iVar23 = Ram40010800;
          if (iVar23 != 0x50414d57) {
            return 0;
          }
          iVar23 = Ram40010804;
          if (iVar23 == 0) {
            return 0;
          }
          uVar6 = Ram40010808;
          bVar30 = 0xb < uVar6;
          if (bVar30) {
            uVar6 = Ram40010808;
          }
          if (!(!bVar30 || uVar6 < 0x54)) {
            pcVar4 = (code *)UINT_40010850;
            if (pcVar4 == (code *)0x0) {
              return 0;
            }
            (*pcVar4)(local_590);
            return 0;
          }
          return 0;
        }
        terror_ui_window_close(&local_8dc);
        iVar23 = Ram40010800;
      }
      if ((iVar23 == 0x50414d57) && (iVar23 = Ram40010804, iVar23 != 0)) {
        uVar6 = Ram40010808;
        bVar30 = 0xb < uVar6;
        if (bVar30) {
          uVar6 = Ram40010808;
        }
        if ((bVar30 && 0x53 < uVar6) && (pcVar4 = (code *)UINT_40010850, pcVar4 != (code *)0x0)) {
          (*pcVar4)(local_590);
        }
      }
    }
  }
  local_590 = (undefined4 *)0x0;
LAB_10002860:
  iVar23 = Ram40010800;
  if ((iVar23 == 0x50414d57) && (iVar23 = Ram40010804, iVar23 != 0)) {
    uVar6 = Ram40010808;
    bVar30 = 0xb < uVar6;
    if (bVar30) {
      uVar6 = Ram40010808;
    }
    if ((bVar30 && 0x2b < uVar6) && (pcVar4 = (code *)UINT_40010828, pcVar4 != (code *)0x0)) {
      (*pcVar4)(str_10007e10);
    }
  }
  return 1;
}

#undef DAT_10004560
#undef DAT_10004568
#undef DAT_10004640
#undef DAT_10004648
#undef DAT_10007e87
#undef DAT_10007e88
#undef DAT_10007e8b
#undef DAT_10007f89
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef Ram40010800
#undef Ram40010804
#undef Ram40010808
#undef UINT_40010828
#undef UINT_4001082c
#undef UINT_40010834
#undef UINT_4001084c
#undef UINT_40010850
#undef UINT_4001089c
#undef UINT_400108c8
#undef UINT_40010978
#undef str_10007e10
#undef str_10007e35
#undef str_10007e5d
#undef str_10007e78
#undef str_10007f32
#undef str_10007f40
#undef str_10007f4c
#undef str_10007f5c
#undef local_328
#undef local_320
#undef local_31c
#undef local_318
#undef local_314
#undef local_d4
#undef local_c8
#undef local_c4
#undef local_c0
#undef local_bc
#undef local_b8
#undef local_ac
#undef local_a8
#undef local_98
#undef local_88
#undef acStack_57c
#undef acStack_4bd
#undef acStack_3f4
#undef uStack_348
#undef uStack_d8
#undef iStack_b4
#undef uStack_b0
#undef auStack_a4
#undef uStack_90
#undef local_930
#undef local_90c
#undef local_8dc
#undef local_8d8
#undef local_8d4
#undef local_8d0
#undef local_8b0
#undef local_59c
#undef local_598
#undef local_594
#undef local_590
#undef local_58c
#undef local_588
#undef local_584
#undef local_580
#undef local_3fc
#undef local_3f8
#undef local_374
#undef local_370
#undef local_36c
#undef local_368
#undef local_364
#undef local_360
#undef local_35e
#undef local_35d
#undef local_35b
#undef local_358
#undef local_354
#undef local_350
#undef local_340
#undef local_338
#undef local_330

#undef DAT_10004940
#define DAT_10004940 (*(uint64_t *)(0x10004940U))
#undef DAT_10004948
#define DAT_10004948 (*(uint64_t *)(0x10004948U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004650
 */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 recovered_10004650(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  char *pcVar7;
  uint uVar8;
  undefined4 *puVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint extraout_r12 = 0;
  uint uVar15;
  undefined8 uVar16;
  uint128 auVar17;
  undefined8 in_d19;
  uint128 auVar18;
  uint128 auVar19;

  if (param_1 == 0) {
    return 0;
  }
  puVar9 = *(undefined4 **)(param_1 + 0x34c);
  uVar10 = *(uint *)(param_1 + 0x358);
  uVar14 = 0;
  uVar1 = *(uint *)(param_1 + 0x578);
  uVar2 = *(uint *)(param_1 + 0x574);
  uVar15 = 0;
  if (puVar9 != (undefined4 *)0x0) {
    uVar8 = *(uint *)(param_1 + 0x354);
    if (uVar10 <= *(uint *)(param_1 + 0x354)) {
      uVar8 = uVar10;
    }
    if (uVar8 != 0) {
      uVar11 = 0;
      if (3 < uVar8) {
        uVar11 = uVar8 & 0xfffffffc;
        auVar17 = (uint128)0x0;
        PF_PART8(auVar19, 8) = SUB168((uint128)0x0,8);
        PF_PART8(auVar19, 0) = 0x100000001;
        uVar14 = uVar11;
        puVar6 = puVar9;
        do {
          uVar14 = uVar14 - 4;
          auVar18 = VectorCopyLong(CONCAT44((int)((ulonglong)in_d19 >> 0x20),*puVar6),1,1);
          in_d19 = VectorCompareEqual(PF_PART8(auVar18, 0),0xa000a000a000a,2);
          auVar18 = VectorCopyLong(in_d19,2,1);
          auVar17 = VectorAdd(auVar17,auVar18 & (auVar19 << 64 | auVar19),4)
          ;
          puVar6 = puVar6 + 1;
        } while (uVar14 != 0);
        uVar16 = VectorAdd(PF_PART8(auVar17, 0),PF_PART8(auVar17, 8),4);
        uVar14 = (int)uVar16 + (int)((ulonglong)uVar16 >> 0x20);
        if (uVar8 == uVar11) goto LAB_10004734;
      }
      iVar3 = uVar8 - uVar11;
      pcVar7 = (char *)((int)puVar9 + uVar11);
      do {
        if (*pcVar7 == '\n') {
          uVar14 = uVar14 + 1;
        }
        iVar3 = iVar3 + -1;
        pcVar7 = pcVar7 + 1;
      } while (iVar3 != 0);
    }
LAB_10004734:
    uVar8 = *(uint *)(param_1 + 0x354);
    if (uVar10 < *(uint *)(param_1 + 0x354)) {
      uVar8 = uVar10;
    }
    for (; uVar8 != 0; uVar8 = uVar8 - 1) {
      if (*(char *)((int)puVar9 + (uVar8 - 1)) == '\n') {
        uVar15 = uVar8;
        break;
      }
    }
  }
  uVar8 = 0xd;
  iVar3 = *(int *)(param_1 + 8);
  iVar13 = *(int *)(param_1 + 4);
  if (0 < *(int *)(param_1 + 0x348)) {
    uVar8 = *(int *)(param_1 + 0x348) + 3;
  }
  iVar4 = iVar3;
  if (iVar3 < 0xad) {
    iVar4 = 0xac;
  }
  uVar11 = iVar4 - 0x68;
  if (iVar3 == 0) {
    uVar11 = 0x1a0;
  }
  uVar8 = recovered_100021a0(uVar11,uVar8);
  iVar4 = *(int *)(param_1 + 0x344);
  iVar3 = iVar13 + -0x5f;
  if (iVar4 < 1) {
    iVar4 = 6;
  }
  if (iVar13 == 0) {
    iVar3 = 0x2c1;
  }
  iVar3 = recovered_10002228(iVar3,iVar4);
  if (iVar3 < 2) {
    iVar3 = 1;
  }
  uVar11 = 1;
  if (1 < uVar8) {
    uVar11 = uVar8;
  }
  uVar8 = 0;
  if (uVar15 <= uVar10) {
    uVar8 = uVar10 - uVar15;
  }
  if ((int)uVar14 < (int)uVar2) {
LAB_10004810:
    *(uint *)(param_1 + 0x574) = uVar14;
    uVar15 = uVar14;
  }
  else {
    uVar15 = uVar2;
    if ((int)(uVar11 + uVar2) <= (int)uVar14) {
      uVar14 = (uVar14 - uVar11) + 1;
      goto LAB_10004810;
    }
  }
  if ((int)uVar8 < (int)uVar1) {
LAB_10004844:
    *(uint *)(param_1 + 0x578) = uVar8;
    uVar14 = uVar8;
  }
  else {
    uVar14 = uVar1;
    if ((int)(iVar3 + uVar1) <= (int)uVar8) {
      uVar8 = (uVar8 - iVar3) + 1;
      goto LAB_10004844;
    }
  }
  iVar3 = 1;
  uVar10 = extraout_r12;
  if (puVar9 != (undefined4 *)0x0) {
    uVar10 = *(uint *)(param_1 + 0x354);
  }
  if (puVar9 != (undefined4 *)0x0 && uVar10 != 0) {
    if (uVar10 < 4) {
      uVar12 = 0;
    }
    else {
      uVar12 = uVar10 & 0xfffffffc;
      PF_PART8(auVar18, 8) = (0x0U);
      PF_PART8(auVar18, 0) = (0x1U);
      PF_PART8(auVar17, 8) = SUB168((uint128)0x0,8);
      PF_PART8(auVar17, 0) = 0x100000001;
      puVar6 = puVar9;
      uVar8 = uVar12;
      do {
        uVar8 = uVar8 - 4;
        auVar19 = VectorCopyLong(CONCAT44((int)((ulonglong)in_d19 >> 0x20),*puVar6),1,1);
        in_d19 = VectorCompareEqual(PF_PART8(auVar19, 0),0xa000a000a000a,2);
        auVar19 = VectorCopyLong(in_d19,2,1);
        auVar18 = VectorAdd(auVar18,auVar19 & (auVar17 << 64 | auVar17),4);
        puVar6 = puVar6 + 1;
      } while (uVar8 != 0);
      uVar16 = VectorAdd(PF_PART8(auVar18, 0),PF_PART8(auVar18, 8),4);
      iVar3 = (int)uVar16 + (int)((ulonglong)uVar16 >> 0x20);
      if (uVar10 == uVar12) goto LAB_1000485c;
    }
    iVar13 = uVar10 - uVar12;
    pcVar7 = (char *)((int)puVar9 + uVar12);
    do {
      if (*pcVar7 == '\n') {
        iVar3 = iVar3 + 1;
      }
      iVar13 = iVar13 + -1;
      pcVar7 = pcVar7 + 1;
    } while (iVar13 != 0);
  }
LAB_1000485c:
  uVar10 = iVar3 - uVar11 & ~((int)(iVar3 - uVar11) >> 0x1f);
  uVar5 = 1;
  if ((int)uVar15 < (int)uVar10) {
    uVar10 = uVar15;
  }
  if ((int)uVar15 < 0) {
    uVar10 = 0;
  }
  uVar15 = uVar14;
  if (0x7fffffff < uVar14) {
    uVar15 = 0;
  }
  *(uint *)(param_1 + 0x574) = uVar10;
  if (0x7fffffff < uVar14) {
    *(uint *)(param_1 + 0x578) = uVar15;
  }
  if ((uVar10 == uVar2) && (uVar5 = 0, uVar15 != uVar1)) {
    uVar5 = 1;
  }
  return uVar5;
}

#undef DAT_10004940
#undef DAT_10004948

#undef DAT_10005100
#define DAT_10005100 (*(uint64_t *)(0x10005100U))
#undef DAT_10005108
#define DAT_10005108 (*(uint64_t *)(0x10005108U))
#undef DAT_10007e87
#define DAT_10007e87 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x14fU)))
#undef DAT_10007f8e
#define DAT_10007f8e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x256U)))
#undef DAT_10007f93
#define DAT_10007f93 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x25bU)))
#undef DAT_10007f96
#define DAT_10007f96 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x25eU)))
#undef EXT_00000004
#define EXT_00000004 (*(uint8_t *)(0x4U))
#undef str_10007f9b
#define str_10007f9b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x263U)))
#define local_e8 (*(uint *)(frame + 24))
#define local_e0 (*(uint *)(frame + 32))
#define local_dc (*(uint *)(frame + 36))
#define local_d4 (*(uint *)(frame + 44))
#define local_d0 (*(uint *)(frame + 48))
#define local_c4 (*(uint *)(frame + 60))
#define local_c0 (*(int *)(frame + 64))
#define local_b0 (*(undefined4 *)(frame + 80))
#define local_ac (*(uint *)(frame + 84))
#define local_a8 (*(int *)(frame + 88))
#define local_a4 (*(int *)(frame + 92))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004950
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void recovered_10004950(int param_1)

{
  unsigned char frame[288] __attribute__((aligned(16))) = {0};

  char cVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  char *pcVar12;
  undefined4 *puVar13;
  uint uVar14;
  uint uVar15;
  int extraout_r3 = 0;
  int extraout_r3_00 = 0;
  uint uVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  undefined4 *puVar21;
  uint uVar22;
  bool bVar23;
  bool bVar24;
  undefined8 uVar25;
  uint128 auVar26;
  undefined8 in_d19;
  uint128 auVar27;
  uint128 auVar28;

  if (param_1 == 0) {
    recovered_1000788c(0,0,0,800,0x208,0xf6f7f6);
    iVar3 = (*(volatile uint32_t *)(uintptr_t)4);
    iVar11 = 800;
  }
  else {
    iVar3 = *(int *)(param_1 + 8);
    iVar11 = *(int *)(param_1 + 4);
    if (iVar3 == 0) {
      iVar3 = 0x208;
    }
    if (iVar11 == 0) {
      iVar11 = 800;
    }
    recovered_1000788c(param_1,0,0,iVar11,iVar3,0xf6f7f6);
    iVar3 = *(int *)(param_1 + 4);
    iVar11 = iVar3;
    if (iVar3 == 0) {
      iVar11 = 800;
    }
  }
  cVar1 = *(char *)(param_1 + 0x57c);
  iVar20 = *(int *)(param_1 + 0x344);
  if (iVar3 == 0) {
    iVar3 = 800;
  }
  uVar16 = 0;
  recovered_1000788c(param_1,0,0,iVar3,0x3a,0xf0ede8);
  iVar3 = *(int *)(param_1 + 4);
  if (iVar3 == 0) {
    iVar3 = 800;
  }
  recovered_1000788c(param_1,0,0x39,iVar3,1,0xa49d94);
  recovered_10007a30(param_1,0xc,0x12,&DAT_10007f8e,4,0x464038);
  uVar8 = 0xf9f8f6;
  if (*(char *)(param_1 + 0x57c) != '\0') {
    uVar8 = 0xffffff;
  }
  if (iVar11 < 0xa3) {
    iVar11 = 0xa2;
  }
  iVar3 = iVar11 + -0x52;
  recovered_1000788c(param_1,0x48,0xf,iVar3,0x18,uVar8);
  uVar8 = 0x9c968e;
  if (*(char *)(param_1 + 0x57c) != '\0') {
    uVar8 = 0xc46d27;
  }
  recovered_1000788c(param_1,0x48,0xf,iVar3,1,uVar8);
  recovered_1000788c(param_1,0x48,0x26,iVar3,1,uVar8);
  recovered_1000788c(param_1,0x48,0xf,1,0x18,uVar8);
  recovered_1000788c(param_1,iVar11 - 0xb,0xf,1,0x18,uVar8);
  if (iVar20 < 1) {
    iVar20 = 6;
  }
  uVar4 = recovered_10002228(iVar11 + -0x5a,iVar20);
  iVar3 = 0x360;
  if (cVar1 != '\0') {
    iVar3 = 0x420;
  }
  uVar5 = strlen((char *)(param_1 + iVar3));
  uVar22 = 1;
  if (1 < (int)uVar4) {
    uVar22 = uVar4;
  }
  if (*(int *)(param_1 + 0x4e4) < (int)uVar5) {
    iVar20 = 0x16;
    if (0 < *(int *)(param_1 + 0x348)) {
      iVar20 = (0x18 - *(int *)(param_1 + 0x348)) / 2 + 0xf;
    }
    pcVar12 = (char *)(param_1 + iVar3) + *(int *)(param_1 + 0x4e4);
    do {
      if (pcVar12[uVar16] == '\0') goto LAB_10004bd8;
      uVar16 = uVar16 + 1;
    } while (uVar22 != uVar16);
    uVar16 = uVar22;
LAB_10004bd8:
    recovered_10007a30(param_1,0x4c,iVar20,pcVar12,uVar16,0x26221c);
  }
  bVar2 = *(byte *)(param_1 + 0x57c);
  bVar23 = bVar2 == 1;
  if (bVar23) {
    bVar2 = *(byte *)(param_1 + 0x56d);
  }
  if (bVar23 && (bVar2 & 0x10) == 0) {
    iVar3 = *(int *)(param_1 + 0x344);
    if (iVar3 < 1) {
      iVar3 = 6;
    }
    iVar3 = iVar3 * (*(int *)(param_1 + 0x4e0) - *(int *)(param_1 + 0x4e4));
    if ((-1 < iVar3) && (uVar16 = iVar3 + 0x4c, (int)uVar16 < iVar11 + -0xd)) {
      recovered_1000788c(param_1,uVar16,0x13,2,0x10,0xaa5b22);
    }
  }
  iVar11 = *(int *)(param_1 + 4);
  iVar20 = *(int *)(param_1 + 8);
  iVar3 = iVar11 + -0x5f;
  iVar17 = iVar11 + -0x14;
  if (iVar11 == 0) {
    iVar3 = 0x2c1;
    iVar17 = 0x30c;
  }
  iVar11 = iVar20;
  if (iVar20 < 0xad) {
    iVar11 = 0xac;
  }
  uVar16 = iVar11 - 0x68;
  iVar11 = iVar11 + -0x5c;
  if (iVar20 == 0) {
    uVar16 = 0x1a0;
    iVar11 = 0x1ac;
  }
  if (*(int *)(param_1 + 0x348) < 1) {
    uVar16 = uVar16 / 0xd;
  }
  else {
    uVar16 = recovered_100021a0(uVar16,*(int *)(param_1 + 0x348) + 3);
    if (uVar16 < 2) {
      uVar16 = 1;
    }
  }
  iVar20 = *(int *)(param_1 + 0x344);
  if (iVar20 < 1) {
    iVar20 = 6;
  }
  puVar21 = *(undefined4 **)(param_1 + 0x34c);
  uVar4 = recovered_10002228(iVar3,iVar20);
  local_c0 = 1;
  if ((int)uVar4 < 2) {
    uVar4 = 1;
  }
  if (puVar21 == (undefined4 *)0x0) {
    uVar18 = *(uint *)(param_1 + 0x354);
    local_c4 = 0;
    local_e8 = *(uint *)(param_1 + 0x358);
    uVar22 = uVar18;
    if (local_e8 < uVar18) {
      uVar22 = local_e8;
    }
LAB_10004ea0:
    uVar6 = *(uint *)(param_1 + 0x35c);
    local_d4 = 0;
    if (uVar6 < uVar18) {
      uVar18 = uVar6;
    }
    if (uVar18 == uVar22) {
      bVar23 = false;
      local_dc = 0;
    }
    else {
      local_dc = uVar18;
      local_d4 = uVar22;
      if (uVar6 < uVar22) {
        local_dc = uVar22;
        local_d4 = uVar18;
      }
      bVar23 = true;
    }
  }
  else {
    uVar18 = *(uint *)(param_1 + 0x354);
    if (uVar18 != 0) {
      if (uVar18 < 4) {
        uVar6 = 0;
      }
      else {
        PF_PART8(auVar28, 8) = (0x0U);
        PF_PART8(auVar28, 0) = (0x1U);
        uVar6 = uVar18 & 0xfffffffc;
        PF_PART8(auVar26, 8) = SUB168((uint128)0x0,8);
        PF_PART8(auVar26, 0) = 0x100000001;
        uVar22 = uVar6;
        puVar13 = puVar21;
        do {
          uVar22 = uVar22 - 4;
          auVar27 = VectorCopyLong(CONCAT44((int)((ulonglong)in_d19 >> 0x20),*puVar13),1,1);
          in_d19 = VectorCompareEqual(PF_PART8(auVar27, 0),0xa000a000a000a,2);
          auVar27 = VectorCopyLong(in_d19,2,1);
          auVar28 = VectorAdd(auVar28,auVar27 & (auVar26 << 64 | auVar26),4)
          ;
          puVar13 = puVar13 + 1;
        } while (uVar22 != 0);
        uVar25 = VectorAdd(PF_PART8(auVar28, 0),PF_PART8(auVar28, 8),4);
        local_c0 = (int)uVar25 + (int)((ulonglong)uVar25 >> 0x20);
        if (uVar18 == uVar6) goto LAB_10004dc0;
      }
      iVar20 = uVar18 - uVar6;
      pcVar12 = (char *)((int)puVar21 + uVar6);
      do {
        if (*pcVar12 == '\n') {
          local_c0 = local_c0 + 1;
        }
        iVar20 = iVar20 + -1;
        pcVar12 = pcVar12 + 1;
      } while (iVar20 != 0);
    }
LAB_10004dc0:
    local_c4 = 0;
    uVar22 = *(uint *)(param_1 + 0x358);
    local_e8 = uVar22;
    if (uVar18 < *(uint *)(param_1 + 0x358)) {
      uVar22 = uVar18;
    }
    if (uVar22 == 0) {
      uVar22 = 0;
      goto LAB_10004ea0;
    }
    uVar6 = 0;
    if (uVar22 < 4) {
LAB_10004e44:
      iVar20 = uVar22 - uVar6;
      pcVar12 = (char *)((int)puVar21 + uVar6);
      do {
        if (*pcVar12 == '\n') {
          local_c4 = local_c4 + 1;
        }
        iVar20 = iVar20 + -1;
        pcVar12 = pcVar12 + 1;
      } while (iVar20 != 0);
    }
    else {
      uVar6 = uVar22 & 0xfffffffc;
      auVar26 = (uint128)0x0;
      PF_PART8(auVar27, 8) = SUB168((uint128)0x0,8);
      PF_PART8(auVar27, 0) = 0x100000001;
      uVar14 = uVar6;
      puVar13 = puVar21;
      do {
        uVar14 = uVar14 - 4;
        auVar28 = VectorCopyLong(CONCAT44((int)((ulonglong)in_d19 >> 0x20),*puVar13),1,1);
        in_d19 = VectorCompareEqual(PF_PART8(auVar28, 0),0xa000a000a000a,2);
        auVar28 = VectorCopyLong(in_d19,2,1);
        auVar26 = VectorAdd(auVar26,auVar28 & (auVar27 << 64 | auVar27),4);
        puVar13 = puVar13 + 1;
      } while (uVar14 != 0);
      uVar25 = VectorAdd(PF_PART8(auVar26, 0),PF_PART8(auVar26, 8),4);
      local_c4 = (int)uVar25 + (int)((ulonglong)uVar25 >> 0x20);
      if (uVar22 != uVar6) goto LAB_10004e44;
    }
    if (param_1 != 0) {
      uVar6 = uVar22;
      do {
        if (*(char *)((int)puVar21 + (uVar6 - 1)) == '\n') break;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
      local_e8 = local_e8 >= uVar6 ? local_e8-uVar6 : 0;
      goto LAB_10004ea0;
    }
    bVar23 = false;
    local_dc = 0;
    local_d4 = 0;
  }
  recovered_1000788c(param_1,10,0x3a,iVar17,iVar11,0xffffff);
  recovered_1000788c(param_1,10,0x3a,iVar17,1,0x837c72);
  recovered_1000788c(param_1,10,iVar11 + 0x39,iVar17,1,0x837c72);
  recovered_1000788c(param_1,10,0x3a,1,iVar11,0x837c72);
  recovered_1000788c(param_1,iVar17 + 9,0x3a,1,iVar11,0x837c72);
  recovered_1000788c(param_1,0x21,0x3b,0x29,iVar11 + -2,0xeff1ee);
  recovered_1000788c(param_1,0x4a,0x3b,1,iVar11 + -2,0xc9ccc6);
  uVar22 = 0;
  do {
    iVar11 = 0xd;
    if (0 < *(int *)(param_1 + 0x348)) {
      iVar11 = *(int *)(param_1 + 0x348) + 3;
    }
    uVar18 = *(int *)(param_1 + 0x574) + uVar22;
    if (local_c0 <= (int)uVar18) break;
    iVar20 = iVar11 * uVar22;
    uVar6 = local_c4;
    if (uVar18 == local_c4) {
      uVar6 = (uint)*(byte *)(param_1 + 0x57c);
    }
    if (uVar18 == local_c4 && uVar6 == 0) {
      local_e0 = local_e0 & 0xff000000 | 0xfffbf7;
      recovered_1000788c(param_1,0x4b,iVar20 + 0x3f,iVar3,iVar11,local_e0);
    }
    pf_varargs_10007fcc__4_((char *)&local_b0,0x10,&DAT_10007f93,uVar18 + 1);
    if ((char)local_b0 == '\0') {
      uVar6 = 0;
    }
    else if (PF_PART1(local_b0, 1) == '\0') {
      uVar6 = 1;
    }
    else if (PF_PART1(local_b0, 2) == '\0') {
      uVar6 = 2;
    }
    else if (PF_PART1(local_b0, 3) == '\0') {
      uVar6 = 3;
    }
    else {
      uVar6 = 5;
      if ((char)local_ac == '\0') {
        uVar6 = 4;
      }
    }
    recovered_10007a30(param_1,0x26,iVar20 + 0x40,(char *)&local_b0,uVar6,0x767169);
    iVar11 = *(int *)(param_1 + 0x34c);
    if (((int)uVar18 < 1) || (iVar11 == 0)) {
      if (iVar11 == 0) goto LAB_100051d4;
      uVar6 = *(uint *)(param_1 + 0x354);
      uVar18 = 0;
LAB_100051a4:
      uVar14 = uVar18;
      if (uVar18 < uVar6) {
        do {
          if (*(char *)(iVar11 + uVar14) == '\n') goto LAB_100051dc;
          uVar14 = uVar14 + 1;
        } while (uVar6 != uVar14);
        goto LAB_100051c8;
      }
    }
    else {
      uVar6 = *(uint *)(param_1 + 0x354);
      if (uVar6 == 0) {
LAB_100051d4:
        uVar18 = 0;
        uVar14 = 0;
      }
      else {
        uVar14 = 0;
        uVar9 = 0;
        do {
          bVar24 = *(char *)(iVar11 + uVar9) == '\n';
          if (bVar24) {
            uVar14 = uVar14 + 1;
          }
          if (bVar24 && uVar14 == uVar18) {
            uVar18 = uVar9 + 1;
            uVar14 = 0;
            if (uVar6 <= uVar9) goto LAB_100051dc;
            goto LAB_100051a4;
          }
          uVar9 = uVar9 + 1;
        } while (uVar6 != uVar9);
        uVar18 = uVar6;
LAB_100051c8:
        uVar14 = uVar6;
      }
    }
LAB_100051dc:
    if (bVar23) {
      uVar6 = uVar14;
      if (local_dc < uVar14) {
        uVar6 = local_dc;
      }
      uVar9 = uVar18;
      if (uVar18 < local_d4) {
        uVar9 = local_d4;
      }
      uVar15 = 0;
      if (uVar14 < *(uint *)(param_1 + 0x354)) {
        uVar15 = (uint)(uVar14 < local_dc &&
                       (local_d4 <= uVar14 && *(char *)(iVar11 + uVar14) == '\n'));
      }
      if ((uVar9 < uVar6) || (uVar15 != 0)) {
        iVar11 = uVar9 - uVar18;
        iVar10 = (uVar6 - uVar18) + uVar15;
        iVar19 = *(int *)(param_1 + 0x578);
        iVar17 = iVar10;
        if (uVar15 != 0) {
          iVar17 = iVar11 + 1;
        }
        if (iVar11 < (int)(uVar6 - uVar18)) {
          iVar17 = iVar10;
        }
        if ((int)(iVar19 + uVar4) <= iVar17) {
          iVar17 = iVar19 + uVar4;
        }
        if (iVar11 <= iVar19) {
          iVar11 = iVar19;
        }
        if (iVar11 < iVar17) {
          iVar10 = *(int *)(param_1 + 0x344);
          if (iVar10 < 1) {
            iVar10 = 6;
          }
          iVar7 = 0xd;
          if (0 < *(int *)(param_1 + 0x348)) {
            iVar7 = *(int *)(param_1 + 0x348) + 3;
          }
          recovered_1000788c(param_1,iVar10 * (iVar11 - iVar19) + 0x4b,iVar20 + 0x3f,
                             iVar10 * (iVar17 - iVar11),iVar7,0xfbdcc1);
        }
      }
    }
    if (*(uint *)(param_1 + 0x578) < uVar14 - uVar18) {
      iVar11 = *(uint *)(param_1 + 0x578) + uVar18;
      local_d0 = local_d0 & 0xff000000 | 0x1f1c18;
      uVar14 = uVar14 - iVar11;
      if ((int)uVar4 < (int)uVar14) {
        uVar14 = uVar4;
      }
      recovered_10007a30(param_1,0x4b,iVar20 + 0x40,(char *)(*(int *)(param_1 + 0x34c) + iVar11),
                         uVar14,local_d0);
    }
    uVar22 = uVar22 + 1;
  } while (uVar22 != uVar16);
  if ((((*(char *)(param_1 + 0x57c) == '\0') && ((*(byte *)(param_1 + 0x568) & 2) != 0)) &&
      ((*(byte *)(param_1 + 0x56d) & 0x10) == 0)) &&
     (((iVar3 = *(int *)(param_1 + 0x574), iVar3 <= (int)local_c4 &&
       ((int)local_c4 < (int)(iVar3 + uVar16))) &&
      ((iVar11 = *(int *)(param_1 + 0x578), iVar11 <= (int)local_e8 &&
       ((int)local_e8 <= (int)(iVar11 + uVar4))))))) {
    iVar17 = *(int *)(param_1 + 0x348);
    iVar10 = 0xd;
    iVar20 = *(int *)(param_1 + 0x344);
    if (0 < iVar17) {
      iVar10 = iVar17 + 3;
    }
    if (iVar20 < 1) {
      iVar20 = 6;
    }
    iVar19 = 0xc;
    if (0 < iVar17) {
      iVar19 = iVar17 + 2;
    }
    recovered_1000788c(param_1,iVar20 * (local_e8 - iVar11) + 0x4b,
                       iVar10 * (local_c4 - iVar3) + 0x3f,2,iVar19,0xaa5b22);
  }
  iVar11 = *(int *)(param_1 + 8);
  recovered_100071e0(&local_b0,param_1);
  iVar3 = iVar11;
  if (iVar11 < 0xad) {
    iVar3 = 0xac;
  }
  if (iVar11 == 0) {
    iVar3 = 0x208;
  }
  iVar11 = iVar3 + -0x8e;
  recovered_1000788c(param_1,0xf,0x4f,0xc,iVar11,0xe4e4e4);
  recovered_1000788c(param_1,0xf,0x4f,0xc,1,0xacacac);
  recovered_1000788c(param_1,0xf,iVar3 - 0x40,0xc,1,0xacacac);
  recovered_1000788c(param_1,0xf,0x4f,1,iVar11,0xacacac);
  recovered_1000788c(param_1,0x1a,0x4f,1,iVar11,0xacacac);
  iVar3 = extraout_r3;
  if (0 < local_a4) {
    recovered_1000788c(param_1,local_b0 + 1,local_ac + 1,local_a8 + -2,local_a4 + -2,0xbebebe);
    recovered_1000788c(param_1,local_b0,local_ac,local_a8,1,0x747474);
    recovered_1000788c(param_1,local_b0,(local_a4 + local_ac) - 1,local_a8,1,0x747474);
    recovered_1000788c(param_1,local_b0,local_ac,1,local_a4,0x747474);
    recovered_1000788c(param_1,(local_b0 + local_a8) - 1,local_ac,1,local_a4,0x747474);
    iVar3 = extraout_r3_00;
  }
  uVar4 = *(uint *)(param_1 + 8);
  uVar22 = *(uint *)(param_1 + 4);
  uVar16 = uVar4;
  if (uVar4 == 0) {
    uVar16 = 0x208;
  }
  uVar18 = uVar16;
  if (0x4c < (int)uVar16) {
    uVar18 = 0x4d;
  }
  uVar6 = uVar22;
  if (uVar22 == 0) {
    uVar6 = 800;
  }
  uVar14 = 0x1b;
  if ((int)uVar6 < 0x1b) {
    uVar14 = uVar6;
  }
  uVar9 = 0xf;
  if ((int)uVar6 < 0xf) {
    uVar9 = uVar6;
  }
  if ((int)uVar16 < 0x40) {
LAB_100056d8:
    if (uVar4 == 0) {
      uVar4 = 0x208;
    }
    uVar16 = uVar4;
    if (0x3f < (int)uVar4) {
      uVar16 = 0x40;
    }
    if (uVar22 == 0) {
      uVar22 = 800;
    }
    uVar18 = 0x1b;
    if ((int)uVar22 < 0x1b) {
      uVar18 = uVar22;
    }
    uVar6 = uVar4;
    if (0x3e < (int)uVar4) {
      uVar6 = 0x3f;
    }
    if (0xe < (int)uVar22) {
      uVar22 = 0xf;
    }
    if (0x3f < (int)uVar4) goto LAB_10005744;
LAB_10005804:
    uVar16 = *(uint *)(param_1 + 8);
    uVar4 = *(uint *)(param_1 + 4);
    if (uVar16 == 0) {
      uVar16 = 0x208;
    }
    uVar22 = uVar16;
    if (0x4c < (int)uVar16) {
      uVar22 = 0x4d;
    }
    if (uVar4 == 0) {
      uVar4 = 800;
    }
    uVar18 = uVar4;
    if (0x1a < (int)uVar4) {
      uVar18 = 0x1b;
    }
    uVar6 = uVar16;
    if (0x4b < (int)uVar16) {
      uVar6 = 0x4c;
    }
    if (0xe < (int)uVar4) {
      uVar4 = 0xf;
    }
    if (0x4c < (int)uVar16) goto LAB_1000587c;
LAB_1000593c:
    uVar16 = *(uint *)(param_1 + 8);
    uVar4 = *(uint *)(param_1 + 4);
    if (uVar16 == 0) {
      uVar16 = 0x208;
    }
    uVar22 = uVar16;
    if (0x4c < (int)uVar16) {
      uVar22 = 0x4d;
    }
    if (uVar4 == 0) {
      uVar4 = 800;
    }
    uVar18 = uVar4;
    if (0xf < (int)uVar4) {
      uVar18 = 0x10;
    }
    uVar6 = uVar16;
    if (0x3e < (int)uVar16) {
      uVar6 = 0x3f;
    }
    if (0xe < (int)uVar4) {
      uVar4 = 0xf;
    }
    if (0x3f < (int)uVar16) goto LAB_100059b4;
LAB_10005a74:
    uVar16 = *(uint *)(param_1 + 8);
    uVar4 = *(uint *)(param_1 + 4);
    if (uVar16 == 0) {
      uVar16 = 0x208;
    }
    uVar22 = uVar16;
    if (0x4c < (int)uVar16) {
      uVar22 = 0x4d;
    }
    if (uVar4 == 0) {
      uVar4 = 800;
    }
    uVar18 = uVar4;
    if (0x1a < (int)uVar4) {
      uVar18 = 0x1b;
    }
    uVar6 = uVar16;
    if (0x3e < (int)uVar16) {
      uVar6 = 0x3f;
    }
    if (0x19 < (int)uVar4) {
      uVar4 = 0x1a;
    }
    if (0x3f < (int)uVar16) goto LAB_10005aec;
LAB_10005bac:
    uVar16 = *(uint *)(param_1 + 8);
    uVar4 = *(uint *)(param_1 + 4);
    if (uVar16 == 0) {
      uVar16 = 0x208;
    }
    uVar22 = uVar16;
    if (0x42 < (int)uVar16) {
      uVar22 = 0x43;
    }
    if (uVar4 == 0) {
      uVar4 = 800;
    }
    uVar18 = uVar4;
    if (0x15 < (int)uVar4) {
      uVar18 = 0x16;
    }
    uVar6 = uVar16;
    if (0x41 < (int)uVar16) {
      uVar6 = 0x42;
    }
    if (0x14 < (int)uVar4) {
      uVar4 = 0x15;
    }
    if (0x42 < (int)uVar16) goto LAB_10005c24;
LAB_10005ce4:
    uVar16 = *(uint *)(param_1 + 8);
    uVar4 = *(uint *)(param_1 + 4);
    if (uVar16 == 0) {
      uVar16 = 0x208;
    }
    uVar22 = uVar16;
    if (0x43 < (int)uVar16) {
      uVar22 = 0x44;
    }
    if (uVar4 == 0) {
      uVar4 = 800;
    }
    uVar18 = uVar4;
    if (0x16 < (int)uVar4) {
      uVar18 = 0x17;
    }
    uVar6 = uVar16;
    if (0x42 < (int)uVar16) {
      uVar6 = 0x43;
    }
    if (0x13 < (int)uVar4) {
      uVar4 = 0x14;
    }
    if (0x43 < (int)uVar16) goto LAB_10005d5c;
LAB_10005e1c:
    uVar16 = *(uint *)(param_1 + 8);
    uVar4 = *(uint *)(param_1 + 4);
    if (uVar16 == 0) {
      uVar16 = 0x208;
    }
    uVar22 = uVar16;
    if (0x44 < (int)uVar16) {
      uVar22 = 0x45;
    }
    if (uVar4 == 0) {
      uVar4 = 800;
    }
    uVar18 = uVar4;
    if (0x17 < (int)uVar4) {
      uVar18 = 0x18;
    }
    uVar6 = uVar16;
    if (0x43 < (int)uVar16) {
      uVar6 = 0x44;
    }
    if (0x12 < (int)uVar4) {
      uVar4 = 0x13;
    }
    if (0x44 < (int)uVar16) goto LAB_10005e94;
LAB_10005f54:
    uVar16 = *(uint *)(param_1 + 8);
    uVar4 = *(uint *)(param_1 + 4);
    if (uVar16 == 0) {
      uVar16 = 0x208;
    }
    uVar22 = uVar16;
    if (0x45 < (int)uVar16) {
      uVar22 = 0x46;
    }
    if (uVar4 == 0) {
      uVar4 = 800;
    }
    uVar18 = uVar4;
    if (0x18 < (int)uVar4) {
      uVar18 = 0x19;
    }
    uVar6 = uVar16;
    if (0x44 < (int)uVar16) {
      uVar6 = 0x45;
    }
    if (0x11 < (int)uVar4) {
      uVar4 = 0x12;
    }
    if ((int)uVar16 < 0x46) goto LAB_10005fa0;
  }
  else {
    uVar16 = 0x3f;
    do {
      if (0xf < (int)uVar6) {
        uVar4 = uVar9;
        do {
          if (param_1 != 0) {
            iVar3 = *(int *)(param_1 + 0x340);
          }
          if (param_1 != 0 && iVar3 != 0) {
            iVar20 = *(int *)(param_1 + 4);
            iVar11 = iVar20;
            if (iVar20 == 0) {
              iVar11 = 800;
            }
            if ((int)uVar4 < iVar11) {
              iVar11 = *(int *)(param_1 + 8);
              if (iVar11 == 0) {
                iVar11 = 0x208;
              }
              if ((int)uVar16 < iVar11) {
                iVar11 = iVar20 << 2;
                if (iVar20 == 0) {
                  iVar11 = 0xc80;
                }
                if (*(int *)(param_1 + 0xc) != 0) {
                  iVar11 = *(int *)(param_1 + 0xc);
                }
                *(undefined1 *)(uVar16 * iVar11 + iVar3 + uVar4 * 4) = 0xee;
                *(undefined1 *)(uVar16 * iVar11 + *(int *)(param_1 + 0x340) + uVar4 * 4 + 1) = 0xee;
                *(undefined1 *)(uVar16 * iVar11 + *(int *)(param_1 + 0x340) + uVar4 * 4 + 2) = 0xee;
                *(undefined1 *)(uVar16 * iVar11 + *(int *)(param_1 + 0x340) + uVar4 * 4 + 3) = 0xff;
              }
            }
          }
          uVar4 = uVar4 + 1;
        } while (uVar14 != uVar4);
      }
      uVar16 = uVar16 + 1;
    } while (uVar16 != uVar18);
    if (param_1 != 0) {
      uVar22 = *(uint *)(param_1 + 4);
      uVar4 = *(uint *)(param_1 + 8);
      goto LAB_100056d8;
    }
    uVar18 = 0x1b;
    uVar22 = 0xf;
    uVar6 = 0x3f;
    uVar16 = 0x40;
LAB_10005744:
    do {
      if ((int)uVar22 < (int)uVar18) {
        uVar4 = uVar22;
        do {
          if (((param_1 != 0) && (-1 < (int)(uVar4 | uVar6))) && (*(int *)(param_1 + 0x340) != 0)) {
            iVar11 = *(int *)(param_1 + 4);
            iVar3 = iVar11;
            if (iVar11 == 0) {
              iVar3 = 800;
            }
            if ((int)uVar4 < iVar3) {
              iVar3 = *(int *)(param_1 + 8);
              if (iVar3 == 0) {
                iVar3 = 0x208;
              }
              if ((int)uVar6 < iVar3) {
                iVar3 = iVar11 << 2;
                if (iVar11 == 0) {
                  iVar3 = 0xc80;
                }
                if (*(int *)(param_1 + 0xc) != 0) {
                  iVar3 = *(int *)(param_1 + 0xc);
                }
                *(undefined1 *)(uVar6 * iVar3 + *(int *)(param_1 + 0x340) + uVar4 * 4) = 0x96;
                *(undefined1 *)(uVar6 * iVar3 + *(int *)(param_1 + 0x340) + uVar4 * 4 + 1) = 0x96;
                *(undefined1 *)(uVar6 * iVar3 + *(int *)(param_1 + 0x340) + uVar4 * 4 + 2) = 0x96;
                *(undefined1 *)(uVar6 * iVar3 + *(int *)(param_1 + 0x340) + uVar4 * 4 + 3) = 0xff;
              }
            }
          }
          uVar4 = uVar4 + 1;
        } while (uVar18 != uVar4);
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 != uVar16);
    if (param_1 != 0) goto LAB_10005804;
    uVar18 = 0x1b;
    uVar4 = 0xf;
    uVar6 = 0x4c;
    uVar22 = 0x4d;
LAB_1000587c:
    do {
      if ((int)uVar4 < (int)uVar18) {
        uVar16 = uVar4;
        do {
          if (((param_1 != 0) && (-1 < (int)(uVar16 | uVar6))) && (*(int *)(param_1 + 0x340) != 0))
          {
            iVar11 = *(int *)(param_1 + 4);
            iVar3 = iVar11;
            if (iVar11 == 0) {
              iVar3 = 800;
            }
            if ((int)uVar16 < iVar3) {
              iVar3 = *(int *)(param_1 + 8);
              if (iVar3 == 0) {
                iVar3 = 0x208;
              }
              if ((int)uVar6 < iVar3) {
                iVar3 = iVar11 << 2;
                if (iVar11 == 0) {
                  iVar3 = 0xc80;
                }
                if (*(int *)(param_1 + 0xc) != 0) {
                  iVar3 = *(int *)(param_1 + 0xc);
                }
                *(undefined1 *)(uVar6 * iVar3 + *(int *)(param_1 + 0x340) + uVar16 * 4) = 0x96;
                *(undefined1 *)(uVar6 * iVar3 + *(int *)(param_1 + 0x340) + uVar16 * 4 + 1) = 0x96;
                *(undefined1 *)(uVar6 * iVar3 + *(int *)(param_1 + 0x340) + uVar16 * 4 + 2) = 0x96;
                *(undefined1 *)(uVar6 * iVar3 + *(int *)(param_1 + 0x340) + uVar16 * 4 + 3) = 0xff;
              }
            }
          }
          uVar16 = uVar16 + 1;
        } while (uVar18 != uVar16);
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 != uVar22);
    if (param_1 != 0) goto LAB_1000593c;
    uVar18 = 0x10;
    uVar4 = 0xf;
    uVar6 = 0x3f;
    uVar22 = 0x4d;
LAB_100059b4:
    do {
      if ((int)uVar4 < (int)uVar18) {
        uVar16 = uVar4;
        do {
          if (((param_1 != 0) && (-1 < (int)(uVar16 | uVar6))) && (*(int *)(param_1 + 0x340) != 0))
          {
            iVar11 = *(int *)(param_1 + 4);
            iVar3 = iVar11;
            if (iVar11 == 0) {
              iVar3 = 800;
            }
            if ((int)uVar16 < iVar3) {
              iVar3 = *(int *)(param_1 + 8);
              if (iVar3 == 0) {
                iVar3 = 0x208;
              }
              if ((int)uVar6 < iVar3) {
                iVar3 = iVar11 << 2;
                if (iVar11 == 0) {
                  iVar3 = 0xc80;
                }
                if (*(int *)(param_1 + 0xc) != 0) {
                  iVar3 = *(int *)(param_1 + 0xc);
                }
                *(undefined1 *)(uVar6 * iVar3 + *(int *)(param_1 + 0x340) + uVar16 * 4) = 0x96;
                *(undefined1 *)(uVar6 * iVar3 + *(int *)(param_1 + 0x340) + uVar16 * 4 + 1) = 0x96;
                *(undefined1 *)(uVar6 * iVar3 + *(int *)(param_1 + 0x340) + uVar16 * 4 + 2) = 0x96;
                *(undefined1 *)(uVar6 * iVar3 + *(int *)(param_1 + 0x340) + uVar16 * 4 + 3) = 0xff;
              }
            }
          }
          uVar16 = uVar16 + 1;
        } while (uVar18 != uVar16);
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 != uVar22);
    if (param_1 != 0) goto LAB_10005a74;
    uVar18 = 0x1b;
    uVar4 = 0x1a;
    uVar6 = 0x3f;
    uVar22 = 0x4d;
LAB_10005aec:
    do {
      if ((int)uVar4 < (int)uVar18) {
        uVar16 = uVar4;
        do {
          if (((param_1 != 0) && (-1 < (int)(uVar16 | uVar6))) && (*(int *)(param_1 + 0x340) != 0))
          {
            iVar11 = *(int *)(param_1 + 4);
            iVar3 = iVar11;
            if (iVar11 == 0) {
              iVar3 = 800;
            }
            if ((int)uVar16 < iVar3) {
              iVar3 = *(int *)(param_1 + 8);
              if (iVar3 == 0) {
                iVar3 = 0x208;
              }
              if ((int)uVar6 < iVar3) {
                iVar3 = iVar11 << 2;
                if (iVar11 == 0) {
                  iVar3 = 0xc80;
                }
                if (*(int *)(param_1 + 0xc) != 0) {
                  iVar3 = *(int *)(param_1 + 0xc);
                }
                *(undefined1 *)(uVar6 * iVar3 + *(int *)(param_1 + 0x340) + uVar16 * 4) = 0x96;
                *(undefined1 *)(uVar6 * iVar3 + *(int *)(param_1 + 0x340) + uVar16 * 4 + 1) = 0x96;
                *(undefined1 *)(uVar6 * iVar3 + *(int *)(param_1 + 0x340) + uVar16 * 4 + 2) = 0x96;
                *(undefined1 *)(uVar6 * iVar3 + *(int *)(param_1 + 0x340) + uVar16 * 4 + 3) = 0xff;
              }
            }
          }
          uVar16 = uVar16 + 1;
        } while (uVar18 != uVar16);
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 != uVar22);
    if (param_1 != 0) goto LAB_10005bac;
    uVar18 = 0x16;
    uVar4 = 0x15;
    uVar6 = 0x42;
    uVar22 = 0x43;
LAB_10005c24:
    do {
      if ((int)uVar4 < (int)uVar18) {
        uVar16 = uVar4;
        do {
          if (((param_1 != 0) && (-1 < (int)(uVar16 | uVar6))) && (*(int *)(param_1 + 0x340) != 0))
          {
            iVar11 = *(int *)(param_1 + 4);
            iVar3 = iVar11;
            if (iVar11 == 0) {
              iVar3 = 800;
            }
            if ((int)uVar16 < iVar3) {
              iVar3 = *(int *)(param_1 + 8);
              if (iVar3 == 0) {
                iVar3 = 0x208;
              }
              if ((int)uVar6 < iVar3) {
                iVar3 = iVar11 << 2;
                if (iVar11 == 0) {
                  iVar3 = 0xc80;
                }
                if (*(int *)(param_1 + 0xc) != 0) {
                  iVar3 = *(int *)(param_1 + 0xc);
                }
                *(undefined1 *)(uVar6 * iVar3 + *(int *)(param_1 + 0x340) + uVar16 * 4) = 0x46;
                *(undefined1 *)(uVar6 * iVar3 + *(int *)(param_1 + 0x340) + uVar16 * 4 + 1) = 0x46;
                *(undefined1 *)(uVar6 * iVar3 + *(int *)(param_1 + 0x340) + uVar16 * 4 + 2) = 0x46;
                *(undefined1 *)(uVar6 * iVar3 + *(int *)(param_1 + 0x340) + uVar16 * 4 + 3) = 0xff;
              }
            }
          }
          uVar16 = uVar16 + 1;
        } while (uVar18 != uVar16);
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 != uVar22);
    if (param_1 != 0) goto LAB_10005ce4;
    uVar18 = 0x17;
    uVar4 = 0x14;
    uVar6 = 0x43;
    uVar22 = 0x44;
LAB_10005d5c:
    do {
      if ((int)uVar4 < (int)uVar18) {
        uVar16 = uVar4;
        do {
          if (((param_1 != 0) && (-1 < (int)(uVar16 | uVar6))) && (*(int *)(param_1 + 0x340) != 0))
          {
            iVar11 = *(int *)(param_1 + 4);
            iVar3 = iVar11;
            if (iVar11 == 0) {
              iVar3 = 800;
            }
            if ((int)uVar16 < iVar3) {
              iVar3 = *(int *)(param_1 + 8);
              if (iVar3 == 0) {
                iVar3 = 0x208;
              }
              if ((int)uVar6 < iVar3) {
                iVar3 = iVar11 << 2;
                if (iVar11 == 0) {
                  iVar3 = 0xc80;
                }
                if (*(int *)(param_1 + 0xc) != 0) {
                  iVar3 = *(int *)(param_1 + 0xc);
                }
                *(undefined1 *)(uVar6 * iVar3 + *(int *)(param_1 + 0x340) + uVar16 * 4) = 0x46;
                *(undefined1 *)(uVar6 * iVar3 + *(int *)(param_1 + 0x340) + uVar16 * 4 + 1) = 0x46;
                *(undefined1 *)(uVar6 * iVar3 + *(int *)(param_1 + 0x340) + uVar16 * 4 + 2) = 0x46;
                *(undefined1 *)(uVar6 * iVar3 + *(int *)(param_1 + 0x340) + uVar16 * 4 + 3) = 0xff;
              }
            }
          }
          uVar16 = uVar16 + 1;
        } while (uVar18 != uVar16);
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 != uVar22);
    if (param_1 != 0) goto LAB_10005e1c;
    uVar18 = 0x18;
    uVar4 = 0x13;
    uVar6 = 0x44;
    uVar22 = 0x45;
LAB_10005e94:
    do {
      if ((int)uVar4 < (int)uVar18) {
        uVar16 = uVar4;
        do {
          if (((param_1 != 0) && (-1 < (int)(uVar16 | uVar6))) && (*(int *)(param_1 + 0x340) != 0))
          {
            iVar11 = *(int *)(param_1 + 4);
            iVar3 = iVar11;
            if (iVar11 == 0) {
              iVar3 = 800;
            }
            if ((int)uVar16 < iVar3) {
              iVar3 = *(int *)(param_1 + 8);
              if (iVar3 == 0) {
                iVar3 = 0x208;
              }
              if ((int)uVar6 < iVar3) {
                iVar3 = iVar11 << 2;
                if (iVar11 == 0) {
                  iVar3 = 0xc80;
                }
                if (*(int *)(param_1 + 0xc) != 0) {
                  iVar3 = *(int *)(param_1 + 0xc);
                }
                *(undefined1 *)(uVar6 * iVar3 + *(int *)(param_1 + 0x340) + uVar16 * 4) = 0x46;
                *(undefined1 *)(uVar6 * iVar3 + *(int *)(param_1 + 0x340) + uVar16 * 4 + 1) = 0x46;
                *(undefined1 *)(uVar6 * iVar3 + *(int *)(param_1 + 0x340) + uVar16 * 4 + 2) = 0x46;
                *(undefined1 *)(uVar6 * iVar3 + *(int *)(param_1 + 0x340) + uVar16 * 4 + 3) = 0xff;
              }
            }
          }
          uVar16 = uVar16 + 1;
        } while (uVar18 != uVar16);
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 != uVar22);
    if (param_1 != 0) goto LAB_10005f54;
    uVar18 = 0x19;
    uVar4 = 0x12;
    uVar6 = 0x45;
    uVar22 = 0x46;
  }
  do {
    if ((int)uVar4 < (int)uVar18) {
      uVar16 = uVar4;
      do {
        if (((param_1 != 0) && (-1 < (int)(uVar16 | uVar6))) && (*(int *)(param_1 + 0x340) != 0)) {
          iVar11 = *(int *)(param_1 + 4);
          iVar3 = iVar11;
          if (iVar11 == 0) {
            iVar3 = 800;
          }
          if ((int)uVar16 < iVar3) {
            iVar3 = *(int *)(param_1 + 8);
            if (iVar3 == 0) {
              iVar3 = 0x208;
            }
            if ((int)uVar6 < iVar3) {
              iVar3 = iVar11 << 2;
              if (iVar11 == 0) {
                iVar3 = 0xc80;
              }
              if (*(int *)(param_1 + 0xc) != 0) {
                iVar3 = *(int *)(param_1 + 0xc);
              }
              *(undefined1 *)(uVar6 * iVar3 + *(int *)(param_1 + 0x340) + uVar16 * 4) = 0x46;
              *(undefined1 *)(uVar6 * iVar3 + *(int *)(param_1 + 0x340) + uVar16 * 4 + 1) = 0x46;
              *(undefined1 *)(uVar6 * iVar3 + *(int *)(param_1 + 0x340) + uVar16 * 4 + 2) = 0x46;
              *(undefined1 *)(uVar6 * iVar3 + *(int *)(param_1 + 0x340) + uVar16 * 4 + 3) = 0xff;
            }
          }
        }
        uVar16 = uVar16 + 1;
      } while (uVar18 != uVar16);
    }
    uVar6 = uVar6 + 1;
  } while (uVar6 != uVar22);
LAB_10005fa0:
  iVar11 = *(int *)(param_1 + 8);
  iVar3 = 0xac;
  if (0xac < iVar11) {
    iVar3 = iVar11;
  }
  uVar16 = iVar3 - 0x38;
  if (iVar11 == 0) {
    uVar16 = 0x1d0;
  }
  recovered_1000788c(param_1,0xf,uVar16,0xc,0xe,0xeeeeee);
  iVar11 = *(int *)(param_1 + 8);
  iVar3 = 0xac;
  if (0xac < iVar11) {
    iVar3 = iVar11;
  }
  uVar16 = iVar3 - 0x38;
  if (iVar11 == 0) {
    uVar16 = 0x1d0;
  }
  recovered_1000788c(param_1,0xf,uVar16,0xc,1,0x969696);
  recovered_1000788c(param_1,0xf,uVar16 + 0xd,0xc,1,0x969696);
  recovered_1000788c(param_1,0xf,uVar16,1,0xe,0x969696);
  recovered_1000788c(param_1,0x1a,uVar16,1,0xe,0x969696);
  iVar11 = *(int *)(param_1 + 8);
  iVar3 = 0xac;
  if (0xac < iVar11) {
    iVar3 = iVar11;
  }
  uVar16 = iVar3 - 0x31;
  if (iVar11 == 0) {
    uVar16 = 0x1d7;
  }
  recovered_1000788c(param_1,0x12,uVar16 - 2,7,1,0x464646);
  recovered_1000788c(param_1,0x13,uVar16 - 1,5,1,0x464646);
  recovered_1000788c(param_1,0x14,uVar16,3,1,0x464646);
  recovered_1000788c(param_1,0x15,uVar16 + 1,1,1,0x464646);
  iVar3 = *(int *)(param_1 + 4);
  uVar16 = *(int *)(param_1 + 8) - 0x18;
  if (*(int *)(param_1 + 8) == 0) {
    uVar16 = 0x1f0;
  }
  if (iVar3 == 0) {
    iVar3 = 800;
  }
  uVar4 = 0;
  recovered_1000788c(param_1,0,uVar16,iVar3,0x18,0xe2e5e0);
  recovered_1000788c(param_1,0,uVar16,iVar3,1,0x959991);
  pcVar12 = &DAT_10007e87;
  if (*(char *)(param_1 + 0x57e) != '\0') {
    pcVar12 = str_10007f9b;
  }
  pf_varargs_10007fcc__4__4_((char *)&local_b0,0x90,&DAT_10007f96,(uint)pcVar12,param_1 + 0x4e8);
  iVar11 = *(int *)(param_1 + 0x344);
  iVar20 = *(int *)(param_1 + 0x348);
  if (iVar11 < 1) {
    iVar11 = 6;
  }
  uVar18 = recovered_10002228(iVar3 + -0x14,iVar11);
  uVar22 = 1;
  if (1 < (int)uVar18) {
    uVar22 = uVar18;
  }
  do {
    if (*(char *)((int)&local_b0 + uVar4) == '\0') goto LAB_100061e4;
    uVar4 = uVar4 + 1;
  } while (uVar22 != uVar4);
  uVar4 = uVar22;
LAB_100061e4:
  iVar3 = 7;
  if (0 < iVar20) {
    iVar3 = (0x18 - iVar20) / 2;
  }
  recovered_10007a30(param_1,10,iVar3 + uVar16,(char *)&local_b0,uVar4,0x30332b);
  return;
}

#undef DAT_10005100
#undef DAT_10005108
#undef DAT_10007e87
#undef DAT_10007f8e
#undef DAT_10007f93
#undef DAT_10007f96
#undef EXT_00000004
#undef str_10007f9b
#undef local_e8
#undef local_e0
#undef local_dc
#undef local_d4
#undef local_d0
#undef local_c4
#undef local_c0
#undef local_b0
#undef local_ac
#undef local_a8
#undef local_a4

#undef DAT_10007e88
#define DAT_10007e88 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x150U)))
#undef str_10007e8d
#define str_10007e8d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x155U)))
#undef str_10007e9a
#define str_10007e9a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x162U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006308
 */

void recovered_10006308(int param_1,int param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  char *vararg0;

  pf_varargs_10007fcc__4_((char *)(param_1 + 0x420),0xc0,&DAT_10007e88,param_1 + 0x360);
  uVar1 = strlen((char *)(param_1 + 0x420));
  *(ulong *)(param_1 + 0x4e0) = uVar1;
  vararg0 = str_10007e9a;
  *(undefined4 *)(param_1 + 0x4e4) = 0;
  if (param_2 != 0) {
    vararg0 = str_10007e8d;
  }
  *(char *)(param_1 + 0x57d) = (char)param_2;
  *(undefined1 *)(param_1 + 0x57c) = 1;
  pf_varargs_10007fcc__4_((char *)(param_1 + 0x4e8),0x80,&DAT_10007e88,(uint)vararg0);
  iVar3 = *(int *)(param_1 + 0x344);
  iVar5 = *(int *)(param_1 + 4);
  if (iVar3 < 1) {
    iVar3 = 6;
  }
  iVar2 = iVar5;
  if (iVar5 < 0xa3) {
    iVar2 = 0xa2;
  }
  iVar2 = iVar2 + -0x5a;
  if (iVar5 == 0) {
    iVar2 = 0x2c6;
  }
  iVar5 = recovered_10002228(iVar2,iVar3);
  uVar6 = *(uint *)(param_1 + 0x4e0);
  uVar4 = *(uint *)(param_1 + 0x4e4);
  iVar3 = 1;
  if (1 < iVar5) {
    iVar3 = iVar5;
  }
  if ((int)uVar4 <= (int)uVar6) {
    if ((int)uVar6 < (int)(uVar4 + iVar3)) goto LAB_100063f8;
    uVar6 = (uVar6 - iVar3) + 1;
  }
  *(uint *)(param_1 + 0x4e4) = uVar6;
  uVar4 = uVar6;
LAB_100063f8:
  if (0x7fffffff < uVar4) {
    *(undefined4 *)(param_1 + 0x4e4) = 0;
  }
  return;
}

#undef DAT_10007e88
#undef str_10007e8d
#undef str_10007e9a

#undef DAT_10007e88
#define DAT_10007e88 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x150U)))
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
#undef str_10007ea4
#define str_10007ea4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x16cU)))
#undef str_10007eb0
#define str_10007eb0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x178U)))
#undef str_10007ec0
#define str_10007ec0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x188U)))
#define acStack_158 (*(char (*)[192])(frame + 24))
#define acStack_98 (*(char (*)[128])(frame + 216))
#define local_15c (*(uint *)(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000640c
 */

undefined4 recovered_1000640c(int param_1)

{
  unsigned char frame[400] __attribute__((aligned(16))) = {0};

  char cVar1;
  int iVar2;
  code *pcVar3;
  uint uVar4;
  char *dst;
  char *unaff_r5;
  bool bVar5;
  bool bVar6;

  bVar5 = *(int *)(param_1 + 0x34c) != 0;
  cVar1 = '\0';
  if (bVar5) {
    unaff_r5 = (char *)(param_1 + 0x360);
    cVar1 = *unaff_r5;
  }
  if (!bVar5 || cVar1 == '\0') {
    dst = str_10007ea4;
    goto LAB_1000652c;
  }
  bVar5 = recovered_10006d44(unaff_r5,&local_15c);
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
      uVar4 = (*pcVar3)(local_15c,acStack_158,*(void **)(param_1 + 0x34c),*(uint *)(param_1 + 0x354)
                       );
LAB_10006570:
      if (uVar4 != 0) {
        *(undefined1 *)(param_1 + 0x57e) = 0;
        pf_varargs_10007fcc__4_(acStack_98,0x80,str_10007ec0,(uint)unaff_r5);
        pf_varargs_10007fcc__4_((char *)(param_1 + 0x4e8),0x80,&DAT_10007e88,(uint)acStack_98);
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
          uVar4 = (*pcVar3)(acStack_158,*(void **)(param_1 + 0x34c),*(uint *)(param_1 + 0x354));
          goto LAB_10006570;
        }
      }
    }
  }
LAB_100064f0:
  dst = acStack_98;
  pf_varargs_10007fcc__4_(dst,0x80,str_10007eb0,(uint)unaff_r5);
LAB_1000652c:
  pf_varargs_10007fcc__4_((char *)(param_1 + 0x4e8),0x80,&DAT_10007e88,(uint)dst);
  return 0;
}

#undef DAT_10007e88
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef Ram40010800
#undef Ram40010804
#undef Ram40010808
#undef UINT_40010838
#undef UINT_400108d0
#undef str_10007ea4
#undef str_10007eb0
#undef str_10007ec0
#undef acStack_158
#undef acStack_98
#undef local_15c

#undef DAT_10007e88
#define DAT_10007e88 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x150U)))
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
 * Address: 0x100065c8
 */

uint recovered_100065c8(int param_1,undefined4 param_2,int param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

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
    param_3 = *(int *)(param_1 + 0x34c);
  }
  if (param_1 == 0 || param_3 == 0) {
    return 0;
  }
  uVar2 = *(uint *)(param_1 + 0x354);
  uVar7 = *(uint *)(param_1 + 0x35c);
  uVar4 = *(uint *)(param_1 + 0x358);
  if (uVar2 <= *(uint *)(param_1 + 0x358)) {
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
        pf_varargs_10007fcc__4_((char *)(param_1 + 0x4e8),0x80,&DAT_10007e88,((uintptr_t)pf_module_state + 0x193U));
        if ((uVar5 <= uVar6) || (iVar3 = *(int *)(param_1 + 0x34c), iVar3 == 0)) {
          return 0;
        }
        uVar2 = *(uint *)(param_1 + 0x354);
        if (uVar2 < uVar6) {
          return 0;
        }
        if (uVar2 < uVar5) {
          uVar5 = uVar2;
        }
        if (uVar6 < uVar5) {
          memmove((void *)(iVar3 + uVar6),(void *)(iVar3 + uVar5),(uVar2 - uVar5) + 1);
          *(undefined1 *)(param_1 + 0x57e) = 1;
          *(uint *)(param_1 + 0x35c) = uVar6;
          *(uint *)(param_1 + 0x358) = uVar6;
          *(uint *)(param_1 + 0x354) = (uVar6 - uVar5) + *(int *)(param_1 + 0x354);
          return 1;
        }
        return 0;
      }
    }
    pf_varargs_10007fcc__4_((char *)(param_1 + 0x4e8),0x80,&DAT_10007e88,((uintptr_t)pf_module_state + 0x1aaU));
    return 0;
  }
  recovered_100068a4(param_1);
  iVar3 = *(int *)(param_1 + 0x34c);
  uVar4 = *(uint *)(param_1 + 0x354);
  uVar2 = extraout_r1;
  if (iVar3 == 0) {
    uVar7 = 0;
    uVar5 = 0;
LAB_10006738:
    if (uVar5 < uVar4) {
      if (*(char *)(iVar3 + uVar5) == '\n') {
        uVar5 = uVar5 + 1;
      }
      goto LAB_10006760;
    }
  }
  else {
    uVar7 = *(uint *)(param_1 + 0x358);
    if (uVar4 <= *(uint *)(param_1 + 0x358)) {
      uVar7 = uVar4;
    }
    if (uVar7 != 0) {
      do {
        uVar2 = (uint)*(byte *)(iVar3 + -1 + uVar7);
        if (uVar2 == 10) {
          uVar5 = 0;
          if (uVar7 <= uVar4) goto LAB_10006660;
          goto LAB_10006738;
        }
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
    uVar7 = 0;
LAB_10006660:
    uVar5 = uVar7;
    if (uVar4 <= uVar7) goto LAB_10006738;
    do {
      if (*(char *)(iVar3 + uVar5) == '\n') goto LAB_10006738;
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
LAB_10006760:
  memmove((void *)(iVar3 + uVar7),(void *)(iVar3 + uVar5),(uVar4 - uVar5) + 1);
  *(undefined1 *)(param_1 + 0x57e) = 1;
  uVar2 = *(int *)(param_1 + 0x354) + (uVar7 - uVar5);
  *(uint *)(param_1 + 0x354) = uVar2;
  if (uVar7 < uVar2) {
    uVar2 = uVar7;
  }
  *(uint *)(param_1 + 0x35c) = uVar2;
  *(uint *)(param_1 + 0x358) = uVar2;
  pf_varargs_10007fcc__4_((char *)(param_1 + 0x4e8),0x80,&DAT_10007e88,((uintptr_t)pf_module_state + 0x1a1U));
  return 1;
}

#undef DAT_10007e88
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef Ram40010800
#undef Ram40010804
#undef Ram40010808
#undef UINT_40010980

#undef DAT_10007e88
#define DAT_10007e88 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x150U)))
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
#undef str_10007ee2
#define str_10007ee2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1aaU)))
#undef str_10007eee
#define str_10007eee (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1b6U)))
#undef str_10007eff
#define str_10007eff (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1c7U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100068a4
 */

bool recovered_100068a4(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  code *pcVar2;
  uint uVar3;
  char *pcVar4;
  uint uVar5;
  char *vararg0;
  uint uVar6;
  uint uVar7;
  int unaff_r9;
  bool bVar8;
  bool bVar9;

  if (param_1 != 0) {
    unaff_r9 = *(int *)(param_1 + 0x34c);
  }
  if (param_1 == 0 || unaff_r9 == 0) {
    return false;
  }
  uVar3 = *(uint *)(param_1 + 0x354);
  uVar7 = *(uint *)(param_1 + 0x35c);
  uVar5 = *(uint *)(param_1 + 0x358);
  if (uVar3 <= *(uint *)(param_1 + 0x358)) {
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
          if (uVar3 < uVar6) goto LAB_100069e8;
          goto LAB_10006914;
        }
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
    uVar6 = 0;
LAB_10006914:
    uVar5 = uVar6;
    if (uVar6 < uVar3) {
      do {
        if (*(char *)(unaff_r9 + uVar5) == '\n') goto LAB_100069e8;
        uVar5 = uVar5 + 1;
      } while (uVar3 != uVar5);
      uVar5 = uVar3;
    }
LAB_100069e8:
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
    vararg0 = str_10007ee2;
    if ((iVar1 != 0x50414d57) || (iVar1 = Ram40010804, iVar1 == 0)) goto LAB_10006a9c;
    uVar5 = Ram40010808;
    bVar9 = uVar5 < 0xc;
    if (!bVar9) {
      uVar5 = Ram40010808;
    }
    if ((bVar9 || uVar5 < 0x184) || (pcVar2 = (code *)UINT_40010980, pcVar2 == (code *)0x0))
    goto LAB_10006a9c;
    uVar5 = (*pcVar2)((char *)(unaff_r9 + uVar6),uVar3);
    pcVar4 = str_10007eff;
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
    vararg0 = str_10007ee2;
    if (uVar6 < uVar3) {
      uVar5 = 0;
    }
    if ((iVar1 != 0x50414d57) || (iVar1 = Ram40010804, iVar1 == 0)) goto LAB_10006a9c;
    uVar7 = Ram40010808;
    bVar9 = uVar7 < 0xc;
    if (!bVar9) {
      uVar7 = Ram40010808;
    }
    if ((bVar9 || uVar7 < 0x184) || (pcVar2 = (code *)UINT_40010980, pcVar2 == (code *)0x0))
    goto LAB_10006a9c;
    uVar5 = (*pcVar2)((char *)(unaff_r9 + uVar3),uVar5);
    pcVar4 = str_10007eee;
  }
  bVar8 = uVar5 != 0;
  vararg0 = str_10007ee2;
  if (bVar8) {
    vararg0 = pcVar4;
  }
LAB_10006a9c:
  pf_varargs_10007fcc__4_((char *)(param_1 + 0x4e8),0x80,&DAT_10007e88,(uint)vararg0);
  return bVar8;
}

#undef DAT_10007e88
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef Ram40010800
#undef Ram40010804
#undef Ram40010808
#undef UINT_40010980
#undef str_10007ee2
#undef str_10007eee
#undef str_10007eff

#undef DAT_10007e88
#define DAT_10007e88 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x150U)))
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
#undef str_10007f0b
#define str_10007f0b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1d3U)))
#undef str_10007f18
#define str_10007f18 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1e0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006ac0
 */

undefined4 recovered_10006ac0(uint param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  code *pcVar2;
  char *outText;
  int iVar3;
  uint uVar4;
  int extraout_r3 = 0;
  char *vararg0;
  uint unaff_r4;
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
            unaff_r4 = param_1;
          }
        }
      }
    }
  }
  if (param_1 != 0) {
    param_4 = *(int *)(param_1 + 0x34c);
  }
  if (param_1 == 0 || param_4 == 0) {
    return 0;
  }
  if (uVar4 != 0) {
    unaff_r4 = *(uint *)(param_1 + 0x350);
  }
  if (uVar4 == 0 || unaff_r4 == 0) {
    return 0;
  }
  iVar3 = Ram40010800;
  if (unaff_r4 <= uVar4) {
    uVar4 = unaff_r4 - 1;
  }
  vararg0 = str_10007f0b;
  uVar5 = 0;
  if ((iVar3 != 0x50414d57) || (iVar3 = Ram40010804, iVar3 == 0)) goto LAB_10006ba8;
  uVar1 = Ram40010808;
  bVar6 = 0xb < uVar1;
  if (bVar6) {
    uVar1 = Ram40010808;
  }
  if ((!bVar6 || uVar1 < 0x50) || (pcVar2 = (code *)UINT_4001084c, pcVar2 == (code *)0x0))
  goto LAB_10006ba8;
  outText = (*pcVar2)(uVar4 + 1);
  if (outText == (char *)0x0) {
    vararg0 = str_10007f0b;
    goto LAB_10006ba8;
  }
  iVar3 = Ram40010800;
  if ((((iVar3 == 0x50414d57) && (iVar3 = Ram40010804, iVar3 != 0)) &&
      (uVar1 = Ram40010808, 0xb < uVar1)) && (uVar1 = Ram40010808, 0x30 < uVar1 >> 3)) {
    pcVar2 = (code *)UINT_40010984;
    if (((pcVar2 == (code *)0x0) || (uVar4 = (*pcVar2)(outText,uVar4 + 1), uVar4 == 0)) ||
       (iVar3 = recovered_10006e80(param_1,outText,uVar4), iVar3 == 0)) goto LAB_10006cdc;
    uVar5 = 1;
    iVar3 = Ram40010800;
    vararg0 = str_10007f18;
    if ((((iVar3 != 0x50414d57) || (iVar3 = Ram40010804, iVar3 == 0)) ||
        (uVar4 = Ram40010808, uVar4 < 0xc)) || (uVar4 = Ram40010808, uVar4 < 0x54))
    goto LAB_10006ba8;
  }
  else {
    *outText = '\0';
LAB_10006cdc:
    vararg0 = str_10007f0b;
    iVar3 = Ram40010800;
    if ((iVar3 != 0x50414d57) || (iVar3 = Ram40010804, iVar3 == 0)) goto LAB_10006ba8;
    uVar4 = Ram40010808;
    bVar6 = 0xb < uVar4;
    if (bVar6) {
      uVar4 = Ram40010808;
    }
    if (!bVar6 || uVar4 < 0x54) goto LAB_10006ba8;
    vararg0 = str_10007f0b;
  }
  pcVar2 = (code *)UINT_40010850;
  if (pcVar2 != (code *)0x0) {
    (*pcVar2)(outText);
  }
LAB_10006ba8:
  pf_varargs_10007fcc__4_((char *)(param_1 + 0x4e8),0x80,&DAT_10007e88,(uint)vararg0);
  return uVar5;
}

#undef DAT_10007e88
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
#undef str_10007f0b
#undef str_10007f18

#undef DAT_10007e88
#define DAT_10007e88 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x150U)))
#undef DAT_10007ec9
#define DAT_10007ec9 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x191U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006d44
 */

bool recovered_10006d44(char *param_1,uint *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  char *pcVar2;
  char *pcVar3;
  uint uVar4;
  int iVar5;
  char cVar6;
  byte bVar7;
  char *vararg0;
  bool bVar8;

  bVar1 = param_1 != (char *)0x0 && param_2 != (uint *)0x0;
  if (bVar1) {
    *param_2 = 0xffffffff;
    pf_varargs_10007fcc__4_((char *)(param_2 + 1),0xc0,&DAT_10007e88,(uint)param_1);
    if ((*param_1 == '[') && (cVar6 = param_1[1], 0xf5 < (byte)(cVar6 - 0x3aU))) {
      uVar4 = 0;
      pcVar2 = param_1 + 2;
      do {
        pcVar3 = pcVar2;
        if (0xccccccc < uVar4) {
          return true;
        }
        bVar7 = cVar6 - 0x30;
        if ((uVar4 == 0xccccccc) && (7 < bVar7)) {
          return true;
        }
        pcVar2 = pcVar3 + 1;
        cVar6 = *pcVar3;
        uVar4 = (uint)bVar7 + uVar4 * 10;
      } while ((byte)(cVar6 - 0x30U) < 10);
      bVar8 = cVar6 == ']';
      if (bVar8) {
        cVar6 = *pcVar2;
      }
      if (bVar8 && cVar6 == ':') {
        vararg0 = pcVar3 + 2;
        cVar6 = *vararg0;
        *param_2 = uVar4;
        iVar5 = 1;
        if (cVar6 == ';') {
          iVar5 = 2;
        }
        if (cVar6 == ';') {
          vararg0 = pcVar3 + 3;
        }
        if (pcVar2[iVar5] == '\0') {
          vararg0 = &DAT_10007ec9;
        }
        pf_varargs_10007fcc__4_((char *)(param_2 + 1),0xc0,&DAT_10007e88,(uint)vararg0);
      }
    }
  }
  return bVar1;
}

#undef DAT_10007e88
#undef DAT_10007ec9

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006e80
 */

undefined4 recovered_10006e80(int param_1,void *param_2,ulong param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  int in_r12;

  uVar7 = 0;
  if (param_1 != 0) {
    if (param_2 != (void *)0x0) {
      in_r12 = *(int *)(param_1 + 0x34c);
    }
    if (param_2 != (void *)0x0 && in_r12 != 0) {
      uVar6 = *(uint *)(param_1 + 0x354);
      uVar8 = *(uint *)(param_1 + 0x358);
      uVar1 = *(uint *)(param_1 + 0x35c);
      uVar3 = uVar6;
      if (uVar8 < uVar6) {
        uVar3 = uVar8;
      }
      uVar4 = uVar6;
      if (uVar1 < uVar6) {
        uVar4 = uVar1;
      }
      if (uVar4 == uVar3) {
        if (*(uint *)(param_1 + 0x350) <= uVar6 + param_3) {
          return 0;
        }
      }
      else {
        uVar5 = uVar4;
        uVar8 = uVar3;
        if (uVar1 < uVar3) {
          uVar5 = uVar3;
          uVar8 = uVar4;
        }
        if (*(uint *)(param_1 + 0x350) <= (param_3 - (uVar5 - uVar8)) + uVar6) {
          return 0;
        }
        memmove((void *)(in_r12 + uVar8),(void *)(in_r12 + uVar5),(uVar6 - uVar5) + 1);
        in_r12 = *(int *)(param_1 + 0x34c);
        uVar6 = *(int *)(param_1 + 0x354) - (uVar5 - uVar8);
        *(uint *)(param_1 + 0x35c) = uVar8;
        *(uint *)(param_1 + 0x358) = uVar8;
        *(uint *)(param_1 + 0x354) = uVar6;
      }
      memmove((void *)((int)(in_r12 + uVar8) + param_3),(void *)(in_r12 + uVar8),
                         (uVar6 - uVar8) + 1);
      memcpy((void *)(*(int *)(param_1 + 0x34c) + *(int *)(param_1 + 0x358)),param_2,
                         param_3);
      uVar7 = 1;
      *(undefined1 *)(param_1 + 0x57e) = 1;
      iVar2 = *(int *)(param_1 + 0x358) + param_3;
      *(int *)(param_1 + 0x358) = iVar2;
      *(ulong *)(param_1 + 0x354) = *(int *)(param_1 + 0x354) + param_3;
      *(int *)(param_1 + 0x35c) = iVar2;
    }
  }
  return uVar7;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006fcc
 */

undefined4 recovered_10006fcc(int param_1,int param_2,uint param_3,int param_4,int param_5)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  bool bVar12;
  bool bVar13;

  iVar7 = *(int *)(param_1 + 8);
  iVar3 = *(int *)(param_1 + 4) + -0x14;
  if (*(int *)(param_1 + 4) == 0) {
    iVar3 = 0x30c;
  }
  iVar10 = *(int *)(param_1 + 0x35c);
  iVar11 = *(int *)(param_1 + 0x358);
  iVar6 = iVar7;
  if (iVar7 < 0xad) {
    iVar6 = 0xac;
  }
  if (iVar7 == 0) {
    iVar6 = 0x208;
  }
  if (param_5 == 0) {
    if (param_2 < 0x4b) {
      return 0;
    }
    bVar13 = SBORROW4(param_3,0x40);
    iVar7 = param_3 - 0x40;
    bVar12 = param_3 == 0x40;
    if (0x3f < (int)param_3) {
      bVar13 = SBORROW4(iVar3,param_2);
      iVar7 = iVar3 - param_2;
      bVar12 = iVar3 == param_2;
    }
    if (bVar12 || iVar7 < 0 != bVar13) {
      return 0;
    }
    if (iVar6 - 0x28U <= param_3) {
      return 0;
    }
  }
  else {
    uVar1 = iVar6 - 0x29U;
    if (param_3 < iVar6 - 0x29U) {
      uVar1 = param_3;
    }
    if ((int)param_3 < 0x40) {
      uVar1 = 0x40;
    }
    iVar7 = iVar3 + -1;
    if (param_2 < iVar3 + -1) {
      iVar7 = param_2;
    }
    if (param_2 < 0x4b) {
      iVar7 = 0x4b;
    }
    param_3 = uVar1;
    param_2 = iVar7;
  }
  iVar3 = 0xd;
  if (0 < *(int *)(param_1 + 0x348)) {
    iVar3 = *(int *)(param_1 + 0x348) + 3;
  }
  iVar7 = *(int *)(param_1 + 0x344);
  iVar6 = *(int *)(param_1 + 0x34c);
  iVar3 = recovered_10002228(param_3 - 0x40,iVar3);
  if (iVar7 < 1) {
    iVar7 = 6;
  }
  iVar8 = *(int *)(param_1 + 0x578);
  iVar3 = *(int *)(param_1 + 0x574) + iVar3;
  uVar1 = recovered_10002228(param_2 + -0x4b,iVar7);
  iVar8 = (uVar1 & ~((int)uVar1 >> 0x1f)) + iVar8;
  if ((iVar3 < 1) || (iVar6 == 0)) {
    if (iVar6 == 0) goto LAB_1000715c;
    uVar4 = *(uint *)(param_1 + 0x354);
    uVar1 = 0;
LAB_10007130:
    uVar5 = uVar1;
    if (uVar4 <= uVar1) goto LAB_10007164;
    do {
      if (*(char *)(iVar6 + uVar5) == '\n') goto LAB_10007164;
      uVar5 = uVar5 + 1;
    } while (uVar4 != uVar5);
  }
  else {
    uVar4 = *(uint *)(param_1 + 0x354);
    if (uVar4 == 0) {
LAB_1000715c:
      uVar1 = 0;
      uVar5 = 0;
      goto LAB_10007164;
    }
    iVar7 = 0;
    uVar9 = 0;
    do {
      bVar12 = *(char *)(iVar6 + uVar9) == '\n';
      if (bVar12) {
        iVar7 = iVar7 + 1;
      }
      if (bVar12 && iVar7 == iVar3) {
        uVar1 = uVar9 + 1;
        uVar5 = 0;
        if (uVar9 < uVar4) goto LAB_10007130;
        goto LAB_10007164;
      }
      uVar9 = uVar9 + 1;
    } while (uVar4 != uVar9);
    uVar1 = uVar4;
  }
  uVar5 = uVar4;
LAB_10007164:
  *(undefined1 *)(param_1 + 0x57c) = 0;
  iVar3 = uVar5 - uVar1;
  if (iVar8 < (int)(uVar5 - uVar1)) {
    iVar3 = iVar8;
  }
  *(uint *)(param_1 + 0x358) = iVar3 + uVar1;
  if (param_4 == 0) {
    *(uint *)(param_1 + 0x35c) = iVar3 + uVar1;
  }
  recovered_10004650(param_1);
  uVar2 = 1;
  if ((*(int *)(param_1 + 0x358) == iVar11) && (uVar2 = 0, *(int *)(param_1 + 0x35c) != iVar10)) {
    uVar2 = 1;
  }
  return uVar2;
}


#undef DAT_100074a0
#define DAT_100074a0 (*(uint64_t *)(0x100074a0U))
#undef DAT_100074a8
#define DAT_100074a8 (*(uint64_t *)(0x100074a8U))
#define local_38 (*(int *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100071e0
 */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void recovered_100071e0(undefined4 *param_1,int param_2)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  uint uVar1;
  undefined4 *puVar2;
  uint uVar3;
  char *pcVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined8 uVar13;
  uint128 auVar14;
  uint128 auVar15;
  undefined8 in_d19;
  uint128 auVar16;
  uint128 auVar17;

  if (param_2 == 0) {
    uVar6 = 0x1a0;
    iVar8 = 1;
    local_38 = 0x17a;
    uVar3 = 0x20;
    iVar12 = 1;
    iVar10 = 10;
    goto LAB_100072c4;
  }
  iVar11 = *(int *)(param_2 + 8);
  iVar8 = 1;
  puVar2 = *(undefined4 **)(param_2 + 0x34c);
  iVar12 = iVar11;
  if (iVar11 < 0xad) {
    iVar12 = 0xac;
  }
  local_38 = iVar12 + -0x8e;
  if (iVar11 == 0) {
    local_38 = 0x17a;
  }
  uVar3 = 0;
  if (puVar2 != (undefined4 *)0x0) {
    uVar3 = *(uint *)(param_2 + 0x354);
  }
  if (puVar2 != (undefined4 *)0x0 && uVar3 != 0) {
    if (uVar3 < 4) {
      uVar1 = 0;
    }
    else {
      uVar1 = uVar3 & 0xfffffffc;
      PF_PART8(auVar17, 8) = SUB168((uint128)0x0,8);
      PF_PART8(auVar17, 0) = 0x100000001;
      PF_PART8(auVar14, 8) = (0x0U);
      PF_PART8(auVar14, 0) = (0x1U);
      uVar6 = uVar1;
      puVar7 = puVar2;
      do {
        uVar6 = uVar6 - 4;
        auVar16 = VectorCopyLong(CONCAT44((int)((ulonglong)in_d19 >> 0x20),*puVar7),1,1);
        in_d19 = VectorCompareEqual(PF_PART8(auVar16, 0),0xa000a000a000a,2);
        auVar16 = VectorCopyLong(in_d19,2,1);
        auVar14 = VectorAdd(auVar14,auVar16 & (auVar17 << 64 | auVar17),4);
        puVar7 = puVar7 + 1;
      } while (uVar6 != 0);
      uVar13 = VectorAdd(PF_PART8(auVar14, 0),PF_PART8(auVar14, 8),4);
      iVar8 = (int)uVar13 + (int)((ulonglong)uVar13 >> 0x20);
      if (uVar3 == uVar1) goto LAB_10007238;
    }
    iVar10 = uVar3 - uVar1;
    pcVar4 = (char *)((int)puVar2 + uVar1);
    do {
      if (*pcVar4 == '\n') {
        iVar8 = iVar8 + 1;
      }
      iVar10 = iVar10 + -1;
      pcVar4 = pcVar4 + 1;
    } while (iVar10 != 0);
  }
LAB_10007238:
  iVar10 = *(int *)(param_2 + 0x348);
  uVar6 = iVar12 - 0x68;
  if (iVar11 == 0) {
    uVar6 = 0x1a0;
  }
  if (iVar10 < 1) {
    uVar3 = uVar6 / 0xd;
  }
  else {
    uVar3 = recovered_100021a0(uVar6,iVar10 + 3);
    if (uVar3 < 2) {
      uVar3 = 1;
    }
  }
  iVar12 = 1;
  uVar1 = 0;
  if (puVar2 != (undefined4 *)0x0) {
    uVar1 = *(uint *)(param_2 + 0x354);
  }
  if (puVar2 != (undefined4 *)0x0 && uVar1 != 0) {
    if (uVar1 < 4) {
      uVar9 = 0;
    }
    else {
      uVar9 = uVar1 & 0xfffffffc;
      PF_PART8(auVar16, 8) = SUB168((uint128)0x0,8);
      PF_PART8(auVar16, 0) = 0x100000001;
      PF_PART8(auVar15, 8) = (0x0U);
      PF_PART8(auVar15, 0) = (0x1U);
      uVar5 = uVar9;
      puVar7 = puVar2;
      do {
        uVar5 = uVar5 - 4;
        auVar17 = VectorCopyLong(CONCAT44((int)((ulonglong)in_d19 >> 0x20),*puVar7),1,1);
        in_d19 = VectorCompareEqual(PF_PART8(auVar17, 0),0xa000a000a000a,2);
        auVar17 = VectorCopyLong(in_d19,2,1);
        auVar15 = VectorAdd(auVar15,auVar17 & (auVar16 << 64 | auVar16),4);
        puVar7 = puVar7 + 1;
      } while (uVar5 != 0);
      uVar13 = VectorAdd(PF_PART8(auVar15, 0),PF_PART8(auVar15, 8),4);
      iVar12 = (int)uVar13 + (int)((ulonglong)uVar13 >> 0x20);
      if (uVar1 == uVar9) goto LAB_100072bc;
    }
    iVar11 = uVar1 - uVar9;
    pcVar4 = (char *)((int)puVar2 + uVar9);
    do {
      if (*pcVar4 == '\n') {
        iVar12 = iVar12 + 1;
      }
      iVar11 = iVar11 + -1;
      pcVar4 = pcVar4 + 1;
    } while (iVar11 != 0);
  }
LAB_100072bc:
  if (iVar10 < 1) {
    iVar10 = 10;
  }
LAB_100072c4:
  uVar6 = recovered_100021a0(uVar6,iVar10 + 3);
  iVar10 = 0;
  if (uVar6 < 2) {
    uVar6 = 1;
  }
  iVar11 = 0x4f;
  if ((int)uVar3 < iVar8) {
    uVar6 = iVar12 - uVar6;
    iVar8 = recovered_10002228(local_38 * uVar3,iVar8);
    iVar10 = local_38;
    if (iVar8 < local_38) {
      iVar10 = iVar8;
    }
    if (iVar8 < 0x12) {
      iVar10 = 0x12;
    }
    if ((0 < (int)uVar6) && (iVar10 < local_38)) {
      iVar11 = recovered_10002228(*(int *)(param_2 + 0x574) * (local_38 - iVar10),
                                  uVar6 & ~((int)uVar6 >> 0x1f));
      iVar11 = iVar11 + 0x4f;
    }
  }
  param_1[3] = iVar10;
  param_1[2] = 0xc;
  param_1[1] = iVar11;
  *param_1 = 0xf;
  return;
}

#undef DAT_100074a0
#undef DAT_100074a8
#undef local_38

#undef DAT_100075f0
#define DAT_100075f0 (*(uint64_t *)(0x100075f0U))
#undef DAT_100075f8
#define DAT_100075f8 (*(uint64_t *)(0x100075f8U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100074b0
 */

void recovered_100074b0(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint128 auVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  char *pcVar5;
  undefined4 *puVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint in_r12;
  undefined8 uVar11;
  uint128 auVar12;
  undefined8 in_d19;
  uint128 auVar13;

  if (param_1 == 0) {
    return;
  }
  puVar6 = *(undefined4 **)(param_1 + 0x34c);
  iVar10 = 1;
  if (puVar6 != (undefined4 *)0x0) {
    in_r12 = *(uint *)(param_1 + 0x354);
  }
  if (puVar6 != (undefined4 *)0x0 && in_r12 != 0) {
    if (in_r12 < 4) {
      uVar3 = 0;
    }
    else {
      uVar3 = in_r12 & 0xfffffffc;
      PF_PART8(auVar12, 8) = (0x0U);
      PF_PART8(auVar12, 0) = (0x1U);
      PF_PART8(auVar1, 8) = SUB168((uint128)0x0,8);
      PF_PART8(auVar1, 0) = 0x100000001;
      puVar4 = puVar6;
      uVar7 = uVar3;
      do {
        uVar7 = uVar7 - 4;
        auVar13 = VectorCopyLong(CONCAT44((int)((ulonglong)in_d19 >> 0x20),*puVar4),1,1);
        in_d19 = VectorCompareEqual(PF_PART8(auVar13, 0),0xa000a000a000a,2);
        auVar13 = VectorCopyLong(in_d19,2,1);
        auVar12 = VectorAdd(auVar12,auVar13 & (auVar1 << 64 | auVar1),4);
        puVar4 = puVar4 + 1;
      } while (uVar7 != 0);
      uVar11 = VectorAdd(PF_PART8(auVar12, 0),PF_PART8(auVar12, 8),4);
      iVar10 = (int)uVar11 + (int)((ulonglong)uVar11 >> 0x20);
      if (in_r12 == uVar3) goto LAB_100074e4;
    }
    iVar8 = in_r12 - uVar3;
    pcVar5 = (char *)((int)puVar6 + uVar3);
    do {
      if (*pcVar5 == '\n') {
        iVar10 = iVar10 + 1;
      }
      iVar8 = iVar8 + -1;
      pcVar5 = pcVar5 + 1;
    } while (iVar8 != 0);
  }
LAB_100074e4:
  uVar7 = 0xd;
  iVar8 = *(int *)(param_1 + 8);
  if (0 < *(int *)(param_1 + 0x348)) {
    uVar7 = *(int *)(param_1 + 0x348) + 3;
  }
  iVar2 = iVar8;
  if (iVar8 < 0xad) {
    iVar2 = 0xac;
  }
  uVar3 = iVar2 - 0x68;
  if (iVar8 == 0) {
    uVar3 = 0x1a0;
  }
  uVar3 = recovered_100021a0(uVar3,uVar7);
  uVar9 = *(uint *)(param_1 + 0x574);
  uVar7 = 1;
  if (1 < uVar3) {
    uVar7 = uVar3;
  }
  uVar7 = iVar10 - uVar7 & ~((int)(iVar10 - uVar7) >> 0x1f);
  if ((int)uVar9 < (int)uVar7) {
    uVar7 = uVar9;
  }
  if ((int)uVar9 < 0) {
    uVar7 = 0;
  }
  *(uint *)(param_1 + 0x574) = uVar7;
  if (0x7fffffff < *(uint *)(param_1 + 0x578)) {
    *(undefined4 *)(param_1 + 0x578) = 0;
  }
  return;
}

#undef DAT_100075f0
#undef DAT_100075f8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007600
 */

undefined4 recovered_10007600(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;

  if (param_1 != 0) {
    uVar7 = *(uint *)(param_1 + 0x354);
    uVar1 = *(uint *)(param_1 + 0x358);
    uVar3 = *(uint *)(param_1 + 0x35c);
    uVar5 = uVar7;
    if (uVar1 < uVar7) {
      uVar5 = uVar1;
    }
    uVar2 = uVar7;
    if (uVar3 < uVar7) {
      uVar2 = uVar3;
    }
    if (uVar2 == uVar5) {
      iVar4 = *(int *)(param_1 + 0x34c);
    }
    else {
      iVar4 = *(int *)(param_1 + 0x34c);
      uVar6 = uVar5;
      if (uVar3 < uVar5) {
        uVar6 = uVar2;
        uVar2 = uVar5;
      }
      if ((uVar6 < uVar2) && (iVar4 != 0)) {
        memmove((void *)(iVar4 + uVar6),(void *)(iVar4 + uVar2),(uVar7 - uVar2) + 1);
        *(uint *)(param_1 + 0x358) = uVar6;
        iVar4 = (uVar6 - uVar2) + *(int *)(param_1 + 0x354);
        goto LAB_100076c8;
      }
    }
    if ((iVar4 == 0 || uVar1 <= uVar7) && (iVar4 != 0 && uVar7 != uVar1)) {
      memmove((void *)(iVar4 + uVar1),(void *)((int)(iVar4 + uVar1) + 1),uVar7 - uVar1);
      uVar6 = *(uint *)(param_1 + 0x358);
      iVar4 = *(int *)(param_1 + 0x354) + -1;
LAB_100076c8:
      *(int *)(param_1 + 0x354) = iVar4;
      *(undefined1 *)(param_1 + 0x57e) = 1;
      *(uint *)(param_1 + 0x35c) = uVar6;
      return 1;
    }
  }
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100076e0
 */

void recovered_100076e0(int param_1,int param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint unaff_r5;
  uint uVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;

  if (param_1 == 0) {
    return;
  }
  iVar5 = *(int *)(param_1 + 0x34c);
  uVar3 = *(uint *)(param_1 + 0x358);
  if (iVar5 == 0) {
    uVar2 = 0;
    if ((param_2 != 0) || (uVar4 = 1, *(int *)(param_1 + 0x354) == 0)) goto LAB_10007880;
  }
  else {
    uVar2 = 0;
    uVar4 = *(uint *)(param_1 + 0x354);
    if (uVar3 < *(uint *)(param_1 + 0x354)) {
      uVar4 = uVar3;
    }
    if (uVar4 != 0) {
      do {
        uVar2 = uVar4;
        if (*(char *)(iVar5 + -1 + uVar2) == '\n') goto LAB_10007760;
        uVar4 = uVar2 - 1;
      } while (uVar2 - 1 != 0);
      uVar2 = 0;
    }
LAB_10007760:
    uVar4 = *(uint *)(param_1 + 0x354);
    if (uVar3 < *(uint *)(param_1 + 0x354)) {
      uVar4 = uVar3;
    }
    for (; uVar1 = 0, uVar4 != 0; uVar4 = uVar4 - 1) {
      unaff_r5 = (uint)*(byte *)(iVar5 + -1 + uVar4);
      if (unaff_r5 == 10) {
        uVar1 = uVar4;
        break;
      }
    }
    bVar6 = uVar3 < uVar1;
    uVar3 = uVar3 - uVar1;
    if (bVar6) {
      uVar3 = 0;
    }
    if (param_2 == 0) {
      uVar1 = *(uint *)(param_1 + 0x354);
      uVar4 = 0;
      if (uVar1 < uVar2) {
LAB_1000782c:
        if (uVar4 < uVar1) {
          uVar4 = uVar4 + 1;
          uVar2 = uVar4;
          if (uVar1 <= uVar4) goto LAB_10007860;
          do {
            if (*(char *)(iVar5 + uVar2) == '\n') goto LAB_10007860;
            uVar2 = uVar2 + 1;
          } while (uVar1 != uVar2);
          goto LAB_1000785c;
        }
      }
      else {
        if (uVar1 <= uVar2) {
LAB_10007828:
          uVar4 = uVar2;
          goto LAB_1000782c;
        }
        do {
          if (*(char *)(iVar5 + uVar2) == '\n') goto LAB_10007828;
          uVar2 = uVar2 + 1;
        } while (uVar1 != uVar2);
      }
      uVar2 = uVar1;
      goto LAB_10007880;
    }
    if (uVar2 == 0) {
      uVar2 = 0;
      goto LAB_10007880;
    }
    do {
      uVar4 = uVar2;
      uVar2 = uVar4 - 1;
      if (uVar2 != 0) {
        unaff_r5 = (uint)*(byte *)(iVar5 + -2 + uVar4);
      }
    } while (uVar2 != 0 && unaff_r5 != 10);
    uVar1 = *(uint *)(param_1 + 0x354);
    uVar4 = uVar4 - 1;
    uVar2 = 0;
    if (uVar4 <= uVar1) {
      uVar2 = uVar4;
    }
    if (uVar1 <= uVar4) goto LAB_10007860;
    do {
      if (*(char *)(iVar5 + uVar2) == '\n') goto LAB_10007860;
      uVar2 = uVar2 + 1;
    } while (uVar1 != uVar2);
LAB_1000785c:
    uVar2 = uVar1;
  }
LAB_10007860:
  uVar1 = uVar2 - uVar4;
  if ((int)uVar3 < (int)(uVar2 - uVar4)) {
    uVar1 = uVar3;
  }
  uVar2 = uVar1 + uVar4;
LAB_10007880:
  *(uint *)(param_1 + 0x358) = uVar2;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000788c
 */

void recovered_1000788c(int param_1,uint param_2,uint param_3,int param_4,int param_5,
                       undefined4 param_6)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

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
          if (((param_1 != 0) && (-1 < (int)(uVar1 | uVar5))) && (*(int *)(param_1 + 0x340) != 0)) {
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
                *(char *)(uVar5 * iVar2 + *(int *)(param_1 + 0x340) + uVar1 * 4) = (char)param_6;
                *(char *)(uVar5 * iVar2 + *(int *)(param_1 + 0x340) + uVar1 * 4 + 1) =
                     (char)((uint)param_6 >> 8);
                *(char *)(uVar5 * iVar2 + *(int *)(param_1 + 0x340) + uVar1 * 4 + 2) =
                     (char)((uint)param_6 >> 0x10);
                *(undefined1 *)(uVar5 * iVar2 + *(int *)(param_1 + 0x340) + uVar1 * 4 + 3) = 0xff;
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
#define local_44 (*(int *)(frame + 28))
#define local_38 (*(void * *)(frame + 40))
#define local_34 (*(int *)(frame + 44))
#define local_2c (*(uint *)(frame + 52))
#define local_28 (*(uint *)(frame + 56))
#define local_24 (*(int *)(frame + 60))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007a30
 */

void recovered_10007a30(int param_1,int param_2,int param_3,char *param_4,uint param_5,uint param_6)

{
  unsigned char frame[128] __attribute__((aligned(16))) = {0};

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

  if ((param_4 != (char *)0x0) && (0 < (int)param_5)) {
    memset(&local_38,0,0x18);
    iVar1 = Ram40010800;
    if ((iVar1 == 0x50414d57) && (iVar1 = Ram40010804, iVar1 != 0)) {
      uVar5 = Ram40010808;
      bVar11 = 0xb < uVar5;
      if (bVar11) {
        uVar5 = Ram40010808;
      }
      if (((bVar11 && 0x17b < uVar5) && (pcVar4 = (code *)UINT_40010978, pcVar4 != (code *)0x0)) &&
         (uVar5 = (*pcVar4)(param_4,param_5,1,
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
                     (*(int *)(param_1 + 0x340) != 0)) {
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
                        *(char *)(local_44 * iVar6 + *(int *)(param_1 + 0x340) + iVar1 + uVar5 * 4)
                             = pcVar10[-3];
                        *(undefined1 *)
                         (local_44 * iVar6 + *(int *)(param_1 + 0x340) + iVar1 + uVar5 * 4 + 1) =
                             uVar2;
                        *(undefined1 *)
                         (local_44 * iVar6 + *(int *)(param_1 + 0x340) + iVar1 + uVar5 * 4 + 2) =
                             uVar3;
                        *(undefined1 *)
                         (local_44 * iVar6 + *(int *)(param_1 + 0x340) + iVar1 + uVar5 * 4 + 3) =
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
        memset(&local_38,0,0x18);
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
