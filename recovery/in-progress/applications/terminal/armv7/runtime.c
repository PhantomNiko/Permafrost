/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100040b0
 */

uint recovered_100040b0(uint a,uint b)

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
 * Address: 0x10004100
 */

uint recovered_10004100(uint a,uint b)

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
 * Address: 0x10004138
 */

int recovered_10004138(int a,int b)

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
 * Address: 0x100041a8
 */

int recovered_100041a8(int a,int b)

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
 * Address: 0x10004210
 */

ulonglong recovered_10004210(ulonglong a,ulonglong b)

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
 * Address: 0x100042f4
 */

ulonglong recovered_100042f4(ulonglong a,ulonglong b)

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
 * Address: 0x10004374
 */

longlong recovered_10004374(longlong a,longlong b)

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
 * Address: 0x10004494
 */

longlong recovered_10004494(longlong a,longlong b)

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


#undef DAT_100045d0
#define DAT_100045d0 (*(double *)(0x100045d0U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004550
 */

ulonglong recovered_10004550(double x)

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

#undef DAT_100045d0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100045d8
 */

longlong recovered_100045d8(double x)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  ulonglong uVar2;

  dVar1 = (double)(((ulonglong)x & 0xffffffff00000000) + ((ulonglong)x & 0xffffffff));
  if (NAN(dVar1)) {
    return 0;
  }
  if (dVar1 < 0.0) {
    uVar2 = recovered_10004550(-dVar1);
    return CONCAT44(-((int)(uVar2 >> 0x20) + (uint)((int)uVar2 != 0)),-(int)uVar2);
  }
  uVar2 = recovered_10004550(x);
  return uVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004624
 */

ulonglong recovered_10004624(float x)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulonglong uVar1;

  uVar1 = recovered_10004550((double)x);
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004634
 */

longlong recovered_10004634(float x)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  longlong lVar1;

  lVar1 = recovered_100045d8((double)x);
  return lVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004644
 */

double recovered_10004644(ulonglong x)

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
 * Address: 0x1000468c
 */

double recovered_1000468c(longlong x)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  if (x < 0) {
    dVar1 = recovered_10004644(CONCAT44(-((int)((ulonglong)x >> 0x20) + (uint)((int)x != 0)),-(int)x
                                       ));
    return -dVar1;
  }
  dVar1 = recovered_10004644(x);
  return dVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100046b4
 */

float recovered_100046b4(ulonglong x)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_10004644(x);
  return (float)pf_bits_double(((pf_double_bits(dVar1) & 0xffffffff00000000) + (pf_double_bits(dVar1) & 0xffffffff)));
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100046d0
 */

float recovered_100046d0(longlong x)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_1000468c(x);
  return (float)pf_bits_double(((pf_double_bits(dVar1) & 0xffffffff00000000) + (pf_double_bits(dVar1) & 0xffffffff)));
}


#undef DAT_1000bef7
#define DAT_1000bef7 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xcfU)))
#undef DAT_1000bf08
#define DAT_1000bf08 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xe0U)))
#undef DAT_1000bf2b
#define DAT_1000bf2b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x103U)))
#undef DAT_1000bf8d
#define DAT_1000bf8d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x165U)))
#undef DAT_1000bf9b
#define DAT_1000bf9b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x173U)))
#undef DAT_1000bfa0
#define DAT_1000bfa0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x178U)))
#undef DAT_1000bfa5
#define DAT_1000bfa5 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17dU)))
#undef DAT_1000bfaa
#define DAT_1000bfaa (*(uint8_t *)(((uintptr_t)pf_module_state + 0x182U)))
#undef DAT_1000bfae
#define DAT_1000bfae (*(uint8_t *)(((uintptr_t)pf_module_state + 0x186U)))
#undef DAT_1000bfb3
#define DAT_1000bfb3 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x18bU)))
#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_40010950
#define DAT_40010950 (*(uint8_t *)(0x40010950U))
#undef Ram40010800
#define Ram40010800 (*(uint32_t *)(0x40010800U))
#undef Ram40010804
#define Ram40010804 (*(uint32_t *)(0x40010804U))
#undef Ram40010808
#define Ram40010808 (*(uint32_t *)(0x40010808U))
#undef Ram40010950
#define Ram40010950 (*(uint32_t *)(0x40010950U))
#undef UINT_40010828
#define UINT_40010828 (*(uint *)(0x40010828U))
#undef UINT_4001082c
#define UINT_4001082c (*(uint *)(0x4001082cU))
#undef UINT_4001084c
#define UINT_4001084c (*(uint *)(0x4001084cU))
#undef UINT_40010850
#define UINT_40010850 (*(uint *)(0x40010850U))
#undef UINT_40010890
#define UINT_40010890 (*(uint *)(0x40010890U))
#undef UINT_40010894
#define UINT_40010894 (*(uint *)(0x40010894U))
#undef UINT_4001089c
#define UINT_4001089c (*(uint *)(0x4001089cU))
#undef UINT_40010978
#define UINT_40010978 (*(uint *)(0x40010978U))
#undef str_1000bed0
#define str_1000bed0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa8U)))
#undef str_1000bef0
#define str_1000bef0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc8U)))
#undef str_1000bef8
#define str_1000bef8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xd0U)))
#undef str_1000bf0a
#define str_1000bf0a (*(char (*)[1])(((uintptr_t)pf_module_state + 0xe2U)))
#undef str_1000bf2e
#define str_1000bf2e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x106U)))
#undef str_1000bf3d
#define str_1000bf3d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x115U)))
#define local_44c (*(uint *)(frame + 5764))
#define local_43c (*(uint *)(frame + 5780))
#define local_438 (*(undefined4 *)(frame + 5784))
#define local_434 (*(uint *)(frame + 5788))
#define local_430 (*(int *)(frame + 5792))
#define local_42c (*(int *)(frame + 5796))
#define local_428 (*(int *)(frame + 5800))
#define local_64 (*(undefined4 *)(frame + 6764))
#define local_60 (*(undefined4 *)(frame + 6768))
#define local_5c (*(int *)(frame + 6772))
#define local_58 (*(int *)(frame + 6776))
#define local_54 (*(int *)(frame + 6780))
#define local_1ab8 (*(int *)(frame + 24))
#define local_1ab4 (*(int *)(frame + 28))
#define local_1aac (*(uint *)(frame + 36))
#define local_1a9c (*(int *)(frame + 52))
#define local_1a98 (*(uint *)(frame + 56))
#define local_1a94 (*(uint *)(frame + 60))
#define local_1a90 (*(uint *)(frame + 64))
#define local_1a70 (*(void * *)(frame + 96))
#define local_175c (*(void * *)(frame + 884))
#define local_1758 (*(void * *)(frame + 888))
#define local_1754 (*(undefined4 *)(frame + 892))
#define local_1750 (*(uint *)(frame + 896))
#define local_174c (*(uint *)(frame + 900))
#define local_1748 (*(void * *)(frame + 904))
#define local_1744 (*(uint *)(frame + 908))
#define local_1740 (*(uint *)(frame + 912))
#define local_173c (*(char *)(frame + 916))
#define local_173b (*(undefined2 *)(frame + 917))
#define local_1738 (*(int *)(frame + 920))
#define local_1734 (*(int *)(frame + 924))
#define local_1730 (*(undefined4 *)(frame + 928))
#define local_172c (*(byte (*)[160])(frame + 932))
#define local_168c (*(int *)(frame + 1092))
#define local_1688 (*(int *)(frame + 1096))
#define local_1684 (*(uint *)(frame + 1100))
#define local_1680 (*(uint *)(frame + 1104))
#define local_167c (*(int *)(frame + 1108))
#define local_1678 (*(byte *)(frame + 1112))
#define local_1677 (*(char *)(frame + 1113))
#define local_1674 (*(int *)(frame + 1116))
#define local_1670 (*(int *)(frame + 1120))
#define local_166c (*(int *)(frame + 1124))
#define local_1668 (*(uint *)(frame + 1128))
#define local_1664 (*(char (*)[512])(frame + 1132))
#define local_1464 (*(byte (*)[4096])(frame + 1644))
#define local_464 (*(undefined4 *)(frame + 5740))
#define local_460 (*(uint *)(frame + 5744))
#define local_45c (*(int *)(frame + 5748))
#define local_458 (*(int *)(frame + 5752))
#define local_454 (*(undefined4 *)(frame + 5756))
#define local_450 (*(void * *)(frame + 5760))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100046f0
 */

/* WARNING: Type propagation algorithm not settling */

int recovered_100046f0(void)

{
  unsigned char frame[6896] __attribute__((aligned(16))) = {0};

  char cVar1;
  code *pcVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  ulong uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  ulong uVar13;
  byte *pbVar14;
  int iVar15;
  uint uVar16;
  void *pvVar17;
  uint uVar18;
  uint uVar19;
  ulong uVar20;
  uint uVar21;
  byte *pbVar22;
  uint uVar23;
  undefined1 uVar24;
  byte bVar25;
  uint uVar26;
  byte *pbVar27;
  char *text;
  int iVar28;
  int iVar29;
  uint uVar30;
  uint uVar31;
  int iVar32;
  uint uVar33;
  byte bVar34;
  byte bVar35;
  char *pcVar36;
  void *pvVar37;
  bool bVar38;
  bool bVar39;
  bool bVar40;

  memset(&local_1a9c,0,0x1638);
  iVar5 = Ram40010800;
  if ((iVar5 == 0x50414d57) && (iVar5 = Ram40010804, iVar5 != 0)) {
    uVar4 = Ram40010808;
    bVar38 = 0xb < uVar4;
    if (bVar38) {
      uVar4 = Ram40010808;
    }
    if ((bVar38 && 0x4f < uVar4) && (pcVar2 = (code *)UINT_4001084c, pcVar2 != (code *)0x0)) {
      local_1758 = (*pcVar2)(0x3e800);
      if (local_1758 != (void *)0x0) {
        memset(local_1758,0,0x3e800);
        pf_app_window_spec(&local_464,str_1000bef0,0x2f8,400);
        local_434 = local_434 | 1;
        local_454 = 0x4c91c4;
        uVar4 = terror_ui_window_open(&local_1a9c,&local_464);
        if (uVar4 == 0) {
          iVar5 = Ram40010800;
        }
        else {
          terror_ui_window_set_menus(&local_1a9c,&DAT_1000bef7,str_1000bef8,&DAT_1000bef7);
          if ((local_175c != (void *)0x0) || (local_175c = local_1a70, local_1a70 != (void *)0x0)) {
            local_1730 = 10;
            local_1734 = 6;
            memset(&local_64,0,0x18);
            iVar5 = Ram40010800;
            if ((iVar5 == 0x50414d57) && (iVar5 = Ram40010804, iVar5 != 0)) {
              uVar4 = Ram40010808;
              bVar38 = 0xb < uVar4;
              if (bVar38) {
                uVar4 = Ram40010808;
              }
              if (((bVar38 && 0x17b < uVar4) &&
                  (pcVar2 = (code *)UINT_40010978, pcVar2 != (code *)0x0)) &&
                 (uVar4 = (*pcVar2)(&DAT_1000bf08,0xffffffff,0x80000001,0,&local_64), uVar4 != 0)) {
                if (local_58 - 1U < 0x40) {
                  local_1734 = local_58;
                }
                if (local_54 - 1U < 0x40) {
                  local_1730 = local_54;
                }
                if (((local_64 != (void *)0x0) && (local_60 == 0)) &&
                   ((local_64 != (void *)0x0 &&
                    ((iVar5 = Ram40010800, iVar5 == 0x50414d57 && (iVar5 = Ram40010804, iVar5 != 0))
                    )))) {
                  uVar4 = Ram40010808;
                  bVar38 = 0xb < uVar4;
                  if (bVar38) {
                    uVar4 = Ram40010808;
                  }
                  if ((bVar38 && 0x53 < uVar4) &&
                     (pcVar2 = (code *)UINT_40010850, pcVar2 != (code *)0x0)) {
                    (*pcVar2)(local_64);
                  }
                }
                memset(&local_64,0,0x18);
              }
            }
            if (local_1758 != (void *)0x0) {
              if (local_1688 < 1000) {
                iVar5 = local_168c + local_1688;
                local_1688 = local_1688 + 1;
              }
              else {
                iVar5 = recovered_1000ad40((int)&local_1a9c,
                                           (byte *)((int)local_1758 +
                                                   (local_168c +
                                                   ((uint)((ulonglong)
                                                           ((longlong)local_168c * 0x10624dd3) >>
                                                          0x26) - (local_168c >> 0x1f)) * -1000) *
                                                   0x100));
                iVar29 = local_1684 - iVar5;
                if (iVar29 == 0 || (int)local_1684 < iVar5) {
                  iVar29 = 0;
                }
                local_168c = (local_168c + 1) % 1000;
                iVar5 = local_1688 + local_168c + -1;
                local_1684 = iVar29;
              }
              iVar5 = iVar5 + ((uint)((ulonglong)((longlong)iVar5 * 0x10624dd3) >> 0x26) -
                              (iVar5 >> 0x1f)) * -1000;
              *(undefined1 *)((int)local_1758 + iVar5 * 0x100) = 0x54;
              *(undefined1 *)((int)local_1758 + iVar5 * 0x100 + 1) = 0x65;
              *(undefined1 *)((int)local_1758 + iVar5 * 0x100 + 2) = 0x72;
              *(undefined1 *)((int)local_1758 + iVar5 * 0x100 + 3) = 0x6d;
              *(undefined1 *)((int)local_1758 + iVar5 * 0x100 + 4) = 0x69;
              *(undefined1 *)((int)local_1758 + iVar5 * 0x100 + 5) = 0x6e;
              *(undefined1 *)((int)local_1758 + iVar5 * 0x100 + 6) = 0x61;
              *(undefined1 *)((int)local_1758 + iVar5 * 0x100 + 7) = 0x6c;
              *(undefined1 *)((int)local_1758 + iVar5 * 0x100 + 8) = 0x20;
              *(undefined1 *)((int)local_1758 + iVar5 * 0x100 + 9) = 0x43;
              *(undefined1 *)((int)local_1758 + iVar5 * 0x100 + 10) = 0x61;
              *(undefined1 *)((int)local_1758 + iVar5 * 0x100 + 0xb) = 0x6e;
              *(undefined1 *)((int)local_1758 + iVar5 * 0x100 + 0xc) = 99;
              *(undefined1 *)((int)local_1758 + iVar5 * 0x100 + 0xd) = 0x65;
              *(undefined1 *)((int)local_1758 + iVar5 * 0x100 + 0xe) = 0x72;
              *(undefined1 *)((int)local_1758 + iVar5 * 0x100 + 0xf) = 0;
            }
            if (local_1688 < 1) {
              iVar5 = 0;
            }
            else {
              iVar29 = 0;
              iVar5 = 0;
              do {
                pbVar14 = &DAT_1000bef7;
                if (local_1758 != (void *)0x0) {
                  iVar15 = iVar29 + local_168c;
                  pbVar14 = (byte *)((int)local_1758 +
                                    (iVar15 + ((uint)((ulonglong)((longlong)iVar15 * 0x10624dd3) >>
                                                     0x26) - (iVar15 >> 0x1f)) * -1000) * 0x100);
                }
                iVar15 = recovered_1000ad40((int)&local_1a9c,pbVar14);
                iVar5 = iVar15 + iVar5;
                iVar29 = iVar29 + 1;
              } while (iVar29 < local_1688);
            }
            uVar4 = local_1680;
            uVar16 = 0xc;
            uVar7 = 0xc;
            if (0 < local_1730) {
              uVar7 = local_1730 + 2U;
            }
            uVar6 = local_1a94;
            if (local_1a94 == 0) {
              uVar6 = 400;
            }
            uVar7 = (uVar6 - uVar7) - 0x26;
            if (local_1730 < 1) {
              if ((int)uVar7 < 0x11) {
                uVar7 = 0x10;
              }
            }
            else {
              if ((int)uVar7 <= (int)(local_1730 + 6U)) {
                uVar7 = local_1730 + 6U;
              }
              uVar16 = local_1730 + 2U;
            }
            local_1677 = '\x01';
            uVar16 = recovered_100040b0(uVar7,uVar16);
            if (uVar16 < 2) {
              uVar16 = 1;
            }
            local_1684 = iVar5 - uVar16 & ~((int)(iVar5 - uVar16) >> 0x1f);
            bVar38 = true;
            uVar4 = (uVar4 & 0x1fff) >> 0xc;
LAB_10004c04:
            uVar7 = local_1a94;
            uVar16 = local_1a98;
            memset(&local_464,0,0x278);
            uVar6 = terror_ui_window_query(&local_1a9c,&local_464);
            if ((uVar6 != 0) && (uVar6 = terror_ui_window_sync_buffer(&local_1a9c,&local_464), uVar6 != 0)) {
              uVar6 = local_1a94;
              if (local_1a98 != uVar16 || local_1a94 != uVar7) {
                uVar6 = 1;
              }
              local_175c = local_1a70;
              if (local_1a98 != uVar16 || local_1a94 != uVar7) {
                local_1678 = (byte)uVar6;
              }
              local_1754 = local_438;
              local_1750 = local_434;
              local_174c = local_43c;
              if (local_430 != 0 && local_430 != local_167c) {
                local_167c = local_430;
                if (local_42c == 2 && local_428 == 0) {
                  recovered_1000ae64((int)&local_1a9c);
                }
                else if (local_42c == 2 && local_428 == 1) {
                  recovered_1000b0dc((int)&local_1a9c);
                }
              }
              bVar25 = local_1678;
              if ((local_43c & 0x11) == 0) {
                bVar34 = 0;
                if (local_1678 == 1) {
                  local_1678 = 0;
                }
                while( true ) {
                  uVar16 = local_1684;
                  iVar5 = 0;
                  if (0 < local_1688) {
                    iVar29 = 0;
                    do {
                      pbVar14 = &DAT_1000bef7;
                      if (local_1758 != (void *)0x0) {
                        iVar15 = iVar29 + local_168c;
                        pbVar14 = (byte *)((int)local_1758 +
                                          (iVar15 + ((uint)((ulonglong)
                                                            ((longlong)iVar15 * 0x10624dd3) >> 0x26)
                                                    - (iVar15 >> 0x1f)) * -1000) * 0x100);
                      }
                      iVar15 = recovered_1000ad40((int)&local_1a9c,pbVar14);
                      iVar5 = iVar15 + iVar5;
                      iVar29 = iVar29 + 1;
                    } while (iVar29 < local_1688);
                  }
                  uVar7 = 0x10;
                  uVar6 = 0xc;
                  if (0 < local_1730) {
                    uVar7 = local_1730 + 6;
                    uVar6 = local_1730 + 2;
                  }
                  uVar26 = local_1a94;
                  if (local_1a94 == 0) {
                    uVar26 = 400;
                  }
                  uVar26 = (uVar26 - uVar6) - 0x26;
                  if ((int)uVar7 < (int)uVar26) {
                    uVar7 = uVar26;
                  }
                  uVar7 = recovered_100040b0(uVar7,uVar6);
                  iVar29 = Ram40010800;
                  if (uVar7 < 2) {
                    uVar7 = 1;
                  }
                  if ((iVar29 != 0x50414d57) || (iVar29 = Ram40010804, iVar29 == 0)) break;
                  uVar6 = Ram40010808;
                  bVar39 = uVar6 < 0xc;
                  if (!bVar39) {
                    uVar6 = Ram40010808;
                  }
                  if ((bVar39 || uVar6 < 0x154) ||
                     (pcVar2 = (code *)Ram40010950, pcVar2 == (code *)0x0)) break;
                  iVar29 = (*pcVar2)(&local_464,0x400);
                  uVar6 = 0;
                  if (iVar29 != 0) {
                    uVar6 = local_464 & 0xff;
                  }
                  if (iVar29 == 0 || uVar6 == 0) break;
                  recovered_1000b320((int)&local_1a9c,(byte *)&local_464);
                  bVar34 = 1;
                  if ((int)(iVar5 - uVar7 & ~((int)(iVar5 - uVar7) >> 0x1f)) <= (int)uVar16) {
                    if (local_1688 < 1) {
                      iVar5 = 0;
                    }
                    else {
                      iVar29 = 0;
                      iVar5 = 0;
                      do {
                        pbVar14 = &DAT_1000bef7;
                        if (local_1758 != (void *)0x0) {
                          iVar15 = iVar29 + local_168c;
                          pbVar14 = (byte *)((int)local_1758 +
                                            (iVar15 + ((uint)((ulonglong)
                                                              ((longlong)iVar15 * 0x10624dd3) >>
                                                             0x26) - (iVar15 >> 0x1f)) * -1000) *
                                            0x100);
                        }
                        iVar15 = recovered_1000ad40((int)&local_1a9c,pbVar14);
                        iVar5 = iVar15 + iVar5;
                        iVar29 = iVar29 + 1;
                      } while (iVar29 < local_1688);
                    }
                    uVar16 = 0x10;
                    uVar7 = 0xc;
                    if (0 < local_1730) {
                      uVar16 = local_1730 + 6;
                      uVar7 = local_1730 + 2;
                    }
                    uVar6 = local_1a94;
                    if (local_1a94 == 0) {
                      uVar6 = 400;
                    }
                    uVar6 = (uVar6 - uVar7) - 0x26;
                    if ((int)uVar16 < (int)uVar6) {
                      uVar16 = uVar6;
                    }
                    uVar16 = recovered_100040b0(uVar16,uVar7);
                    bVar34 = 1;
                    if (uVar16 < 2) {
                      uVar16 = 1;
                    }
                    local_1684 = iVar5 - uVar16 & ~((int)(iVar5 - uVar16) >> 0x1f);
                  }
                }
                uVar16 = local_1684;
                bVar35 = 0;
                if ((local_1674 != 0) && (local_1670 != 0)) {
                  if (local_1688 < 1) {
                    iVar5 = 0;
                  }
                  else {
                    iVar29 = 0;
                    iVar5 = 0;
                    do {
                      pbVar14 = &DAT_1000bef7;
                      if (local_1758 != (void *)0x0) {
                        iVar15 = iVar29 + local_168c;
                        pbVar14 = (byte *)((int)local_1758 +
                                          (iVar15 + ((uint)((ulonglong)
                                                            ((longlong)iVar15 * 0x10624dd3) >> 0x26)
                                                    - (iVar15 >> 0x1f)) * -1000) * 0x100);
                      }
                      iVar15 = recovered_1000ad40((int)&local_1a9c,pbVar14);
                      iVar29 = iVar29 + 1;
                      iVar5 = iVar15 + iVar5;
                    } while (iVar29 < local_1688);
                  }
                  iVar29 = local_1688;
                  uVar7 = 0x10;
                  uVar6 = 0xc;
                  if (0 < local_1730) {
                    uVar7 = local_1730 + 6;
                    uVar6 = local_1730 + 2;
                  }
                  uVar26 = local_1a94;
                  if (local_1a94 == 0) {
                    uVar26 = 400;
                  }
                  uVar26 = (uVar26 - uVar6) - 0x26;
                  if ((int)uVar7 < (int)uVar26) {
                    uVar7 = uVar26;
                  }
                  uVar7 = recovered_100040b0(uVar7,uVar6);
                  iVar15 = local_168c;
                  pvVar37 = local_1758;
                  if (uVar7 < 2) {
                    uVar7 = 1;
                  }
                  if (local_1464[0] == 0) {
                    if ((local_166c != 0) || (local_1758 == (void *)0x0)) goto LAB_1000522c;
                    if (999 < iVar29) {
                      iVar32 = 0xe;
                      if (0 < local_1734) {
                        iVar32 = local_1734 + 8;
                      }
                      iVar28 = local_1a98 - 0x26;
                      iVar8 = local_168c +
                              ((uint)((ulonglong)((longlong)local_168c * 0x10624dd3) >> 0x26) -
                              (local_168c >> 0x1f)) * -1000;
                      if (local_1a98 == 0) {
                        iVar28 = 0x2d2;
                      }
                      if (iVar28 <= iVar32) {
                        iVar28 = iVar32;
                      }
                      iVar32 = local_1734;
                      if (local_1734 < 1) {
                        iVar32 = 6;
                      }
                      uVar9 = recovered_10004138(iVar28 + -8,iVar32);
                      iVar32 = 1;
                      if ((int)uVar9 < 2) {
                        uVar9 = 1;
                      }
                      pcVar36 = (char *)((int)pvVar37 + iVar8 * 0x100);
                      if (*pcVar36 != '\0') {
                        iVar32 = 0;
                        iVar29 = 0;
                        text = pcVar36;
                        do {
                          uVar13 = strlen(text);
                          if ((int)uVar9 < (int)uVar13) {
                            uVar13 = 0xffffffff;
                            uVar20 = 0;
                            do {
                              cVar1 = text[uVar20];
                              if (cVar1 == '\0') break;
                              if (cVar1 == '\t') {
                                uVar13 = uVar20;
                              }
                              if (cVar1 == ' ') {
                                uVar13 = uVar20;
                              }
                              uVar20 = uVar20 + 1;
                            } while (uVar9 != uVar20);
                            if ((int)uVar13 < 1) {
                              uVar13 = uVar9;
                            }
                          }
                          if ((int)uVar13 < 1) goto LAB_10005174;
                          for (iVar29 = uVar13 + iVar29; cVar1 = pcVar36[iVar29],
                              cVar1 == ' ' || cVar1 == '\t'; iVar29 = iVar29 + 1) {
                          }
                          iVar32 = iVar32 + 1;
                          if ((iVar29 < 0) || (text = pcVar36 + iVar29, cVar1 == '\0'))
                          goto LAB_10005174;
                        } while( true );
                      }
                      goto LAB_1000518c;
                    }
                    local_1688 = iVar29 + 1;
                    iVar29 = local_168c + iVar29;
                    goto LAB_100051cc;
                  }
                  recovered_1000b320((int)&local_1a9c,local_1464);
                  goto LAB_1000522c;
                }
                goto LAB_10005320;
              }
            }
            goto LAB_1000abe0;
          }
          terror_ui_window_close(&local_1a9c);
          iVar5 = Ram40010800;
        }
        if ((iVar5 == 0x50414d57) && (iVar5 = Ram40010804, iVar5 != 0)) {
          uVar4 = Ram40010808;
          bVar38 = 0xb < uVar4;
          if (bVar38) {
            uVar4 = Ram40010808;
          }
          if ((bVar38 && 0x53 < uVar4) && (pcVar2 = (code *)UINT_40010850, pcVar2 != (code *)0x0)) {
            (*pcVar2)(local_1758);
          }
        }
        local_1758 = (void *)0x0;
      }
      goto LAB_10004758;
    }
  }
  local_1758 = (void *)0x0;
LAB_10004758:
  iVar5 = Ram40010800;
  if ((iVar5 == 0x50414d57) && (iVar5 = Ram40010804, iVar5 != 0)) {
    uVar4 = Ram40010808;
    bVar38 = 0xb < uVar4;
    if (bVar38) {
      uVar4 = Ram40010808;
    }
    if ((bVar38 && 0x2b < uVar4) && (pcVar2 = (code *)UINT_40010828, pcVar2 != (code *)0x0)) {
      (*pcVar2)(str_1000bed0);
    }
  }
  return 0;
LAB_10005174:
  iVar29 = local_1688;
  iVar15 = local_168c;
  pvVar37 = local_1758;
  if (iVar32 < 2) {
    iVar32 = 1;
  }
LAB_1000518c:
  local_168c = (iVar15 + 1) % 1000;
  uVar6 = local_1684 - iVar32;
  if (uVar6 == 0 || (int)local_1684 < iVar32) {
    uVar6 = 0;
  }
  iVar29 = iVar29 + local_168c + -1;
  local_1684 = uVar6;
LAB_100051cc:
  iVar29 = iVar29 + ((uint)((ulonglong)((longlong)iVar29 * 0x10624dd3) >> 0x26) - (iVar29 >> 0x1f))
                    * -1000;
  *(undefined1 *)((int)pvVar37 + iVar29 * 0x100) = 0x45;
  *(undefined1 *)((int)local_1758 + iVar29 * 0x100 + 1) = 0x52;
  *(undefined1 *)((int)local_1758 + iVar29 * 0x100 + 2) = 0x52;
  *(undefined1 *)((int)local_1758 + iVar29 * 0x100 + 3) = 0x4f;
  *(undefined1 *)((int)local_1758 + iVar29 * 0x100 + 4) = 0x52;
  *(undefined1 *)((int)local_1758 + iVar29 * 0x100 + 5) = 0;
LAB_1000522c:
  local_1670 = 0;
  local_1664[0] = '\0';
  local_1464[0] = 0;
  local_1668 = 0;
  local_1674 = 0;
  bVar35 = 1;
  if ((int)(iVar5 - uVar7 & ~((int)(iVar5 - uVar7) >> 0x1f)) <= (int)uVar16) {
    if (local_1688 < 1) {
      iVar5 = 0;
    }
    else {
      iVar29 = 0;
      iVar5 = 0;
      do {
        pbVar14 = &DAT_1000bef7;
        if (local_1758 != (void *)0x0) {
          iVar15 = iVar29 + local_168c;
          pbVar14 = (byte *)((int)local_1758 +
                            (iVar15 + ((uint)((ulonglong)((longlong)iVar15 * 0x10624dd3) >> 0x26) -
                                      (iVar15 >> 0x1f)) * -1000) * 0x100);
        }
        iVar15 = recovered_1000ad40((int)&local_1a9c,pbVar14);
        iVar5 = iVar15 + iVar5;
        iVar29 = iVar29 + 1;
      } while (iVar29 < local_1688);
    }
    uVar16 = 0x10;
    uVar7 = 0xc;
    if (0 < local_1730) {
      uVar16 = local_1730 + 6;
      uVar7 = local_1730 + 2;
    }
    uVar6 = local_1a94;
    if (local_1a94 == 0) {
      uVar6 = 400;
    }
    uVar6 = (uVar6 - uVar7) - 0x26;
    if ((int)uVar16 < (int)uVar6) {
      uVar16 = uVar6;
    }
    uVar16 = recovered_100040b0(uVar16,uVar7);
    bVar35 = 1;
    if (uVar16 < 2) {
      uVar16 = 1;
    }
    local_1684 = iVar5 - uVar16 & ~((int)(iVar5 - uVar16) >> 0x1f);
  }
LAB_10005320:
  bVar34 = bVar34 | bVar25;
  uVar16 = local_174c & 6;
  if (uVar16 != 2) {
    cVar1 = PF_PART1(local_173b, 1);
    if (PF_PART1(local_173b, 1) == '\0') {
      cVar1 = (char)local_173b;
    }
    if (PF_PART1(local_173b, 1) == '\0' && cVar1 == '\0') {
      local_173b = 0;
      bVar34 = bVar34 | bVar35;
      goto LAB_10007348;
    }
  }
  memset(&local_464,0,0x1c);
  uVar7 = terror_ui_window_pointer_state(&local_1a9c,&local_464);
  if (uVar7 != 0) {
    if (local_173c == '\0') {
      local_173c = '\x01';
      local_1748 = (void *)((int)local_1a98 / 2);
      if (local_1a98 == 0) {
        local_1748 = (void *)0x17c;
      }
      local_1744 = (int)local_1a94 / 2;
      if (local_1a94 == 0) {
        local_1744 = 200;
      }
    }
    local_1740 = 0;
    if ((local_464 & 4) != 0) {
      local_1748 = (void *)(local_1a98 - 1);
      if (local_1a98 == 0) {
        local_1748 = (void *)0x2f7;
      }
      if ((int)local_450 < (int)local_1748) {
        local_1748 = local_450;
      }
      if ((int)local_450 < 0) {
        local_1748 = (void *)0x0;
      }
      local_1744 = local_1a94 - 1;
      if (local_1a94 == 0) {
        local_1744 = 399;
      }
      if ((int)local_44c < (int)local_1744) {
        local_1744 = local_44c;
      }
      if ((int)local_44c < 0) {
        local_1744 = 0;
      }
      local_1740 = local_460;
    }
  }
  if (uVar16 == 2) {
    bVar25 = 0;
    iVar5 = 0;
LAB_1000543c:
    iVar29 = Ram40010800;
    if ((iVar29 == 0x50414d57) && (iVar29 = Ram40010804, iVar29 != 0)) {
      uVar7 = Ram40010808;
      bVar39 = 0xb < uVar7;
      if (bVar39) {
        uVar7 = Ram40010808;
      }
      if ((bVar39 && 0x2f < uVar7) && (pcVar2 = (code *)UINT_4001082c, pcVar2 != (code *)0x0)) {
        uVar6 = (*pcVar2)();
        uVar7 = local_1684;
        if (uVar6 != 0) {
          uVar26 = (uVar6 & 0xffff) >> 8;
          if ((uVar6 & 0x800000ff) == 0x80000000 && uVar26 == 0) goto LAB_10005534;
          uVar21 = uVar6 & 0xff;
          if ((uVar6 & 0x40000) != 0) {
            if (((uVar6 & 0xbf) == 3 || uVar21 == 99) || (uVar26 == 0x2e)) {
              bVar3 = recovered_1000ae64((int)&local_1a9c);
            }
            else {
              if (((uVar6 & 0xbf) != 0x16 && uVar21 != 0x76) && (uVar26 != 0x2f)) goto LAB_10005534;
              bVar3 = recovered_1000b0dc((int)&local_1a9c);
            }
            bVar25 = bVar3 | bVar25;
            goto LAB_10005534;
          }
          if ((uVar6 & 0x20000) != 0) goto LAB_10005534;
          if (uVar21 - 0x20 < 0x5f) {
            uVar9 = strlen((char *)local_172c);
            bVar25 = 1;
            if (uVar9 + 1 < 0xa0) {
              local_172c[uVar9] = (byte)uVar6;
              local_172c[uVar9 + 1] = 0;
            }
            goto LAB_10005534;
          }
          if ((uVar26 == 0xe || uVar21 == 0x7f) || (uVar21 == 8)) {
            uVar9 = strlen((char *)local_172c);
            bVar25 = 1;
            if (uVar9 != 0) {
              local_172c[uVar9 - 1] = 0;
            }
            goto LAB_10005534;
          }
          if ((uVar26 == 0x1c || uVar21 == 0xd) || (uVar21 == 10)) {
            if (local_1688 < 1) {
              iVar29 = 0;
            }
            else {
              iVar15 = 0;
              iVar29 = 0;
              do {
                pbVar14 = &DAT_1000bef7;
                if (local_1758 != (void *)0x0) {
                  iVar32 = iVar15 + local_168c;
                  pbVar14 = (byte *)((int)local_1758 +
                                    (iVar32 + ((uint)((ulonglong)((longlong)iVar32 * 0x10624dd3) >>
                                                     0x26) - (iVar32 >> 0x1f)) * -1000) * 0x100);
                }
                iVar32 = recovered_1000ad40((int)&local_1a9c,pbVar14);
                iVar29 = iVar32 + iVar29;
                iVar15 = iVar15 + 1;
              } while (iVar15 < local_1688);
            }
            uVar6 = 0x10;
            uVar26 = 0xc;
            if (0 < local_1730) {
              uVar6 = local_1730 + 6;
              uVar26 = local_1730 + 2;
            }
            uVar21 = local_1a94;
            if (local_1a94 == 0) {
              uVar21 = 400;
            }
            uVar21 = (uVar21 - uVar26) - 0x26;
            if ((int)uVar6 < (int)uVar21) {
              uVar6 = uVar21;
            }
            uVar6 = recovered_100040b0(uVar6,uVar26);
            if (uVar6 < 2) {
              uVar6 = 1;
            }
            pbVar22 = local_172c;
            pbVar14 = local_172c;
            while( true ) {
              pbVar14 = pbVar14 + 1;
              uVar26 = (uint)*pbVar22;
              if ((0x17 < uVar26 - 9) || ((1 << (uVar26 - 9 & 0xff) & 0x800013U) == 0)) break;
              pbVar22 = pbVar22 + 1;
            }
            if (uVar26 == 0) goto LAB_10005d34;
            pbVar27 = pbVar14;
            uVar21 = uVar26;
            if (uVar26 < 0x21) {
LAB_100056b4:
                    /* WARNING: Could not find normalized switch variable to match jumptable */
              switch((uintptr_t)(uVar21)) {
              default:
                goto switchD_100056bc_caseD_1;
              case 9:
              case 10:
              case 0xd:
              case 0x20:
                goto switchD_100056bc_caseD_9;
              }
            }
LAB_10005754:
            if (uVar21 == 0x3e) {
LAB_1000575c:
              bVar39 = true;
            }
            else {
switchD_100056bc_caseD_1:
              if (uVar21 - 0x41 < 0x1a) {
                uVar21 = uVar21 | 0x20;
              }
              if (pbVar22[uVar21 == 0x69] - 0x30U < 10) {
                pbVar22 = pbVar27 + (uVar21 == 0x69);
                do {
                  bVar25 = *pbVar22;
                  pbVar22 = pbVar22 + 1;
                } while (bVar25 - 0x30U < 10);
                bVar39 = true;
                if (bVar25 != 0x3e) goto LAB_100057c4;
              }
              else {
LAB_100057c4:
                iVar15 = 0;
                if (uVar26 < 0x20) goto LAB_100057e0;
                while (uVar21 = uVar26, uVar26 != 0x20 && uVar26 != 0x2c) {
                  while( true ) {
                    if (iVar15 == -0x3f) goto LAB_10005814;
                    uVar26 = (uint)pbVar14[-iVar15];
                    *(char *)((int)&local_64 - iVar15) = (char)uVar21;
                    iVar15 = iVar15 + -1;
                    if (0x1f < uVar26) break;
LAB_100057e0:
                    uVar21 = uVar26;
                    if (uVar26 == 0 || uVar26 == 9) goto LAB_10005814;
                  }
                }
LAB_10005814:
                uVar26 = 0;
                *(undefined1 *)((int)&local_64 - iVar15) = 0;
                uVar21 = (uint)local_64 & 0xff;
                if (uVar21 == 0) {
LAB_10005a38:
                  bVar39 = (&DAT_1000bf8d)[uVar26] == '\0';
                }
                else {
                  bVar39 = false;
                  if (uVar21 - 0x41 < 0x1a) {
                    uVar21 = uVar21 | 0x20;
                  }
                  switch((uintptr_t)(uVar21)) {
                  case 0x6c:
                    uVar21 = (uint)PF_PART1(local_64, 1);
                    bVar39 = true;
                    uVar26 = 1;
                    if (uVar21 != 0) {
                      if (uVar21 - 0x41 < 0x1a) {
                        uVar21 = uVar21 | 0x20;
                      }
                      if (uVar21 != 0x6f) {
                        if (uVar21 != 0x69) goto LAB_10005d34;
                        uVar26 = (uint)PF_PART1(local_64, 2);
                        if (uVar26 == 0) {
                          uVar26 = 2;
                          iVar15 = ((uintptr_t)pf_module_state + 0x140U);
                        }
                        else {
                          if (uVar26 - 0x41 < 0x1a) {
                            uVar26 = uVar26 | 0x20;
                          }
                          if (uVar26 != 0x73) goto LAB_10005d34;
                          uVar26 = (uint)PF_PART1(local_64, 3);
                          if (uVar26 == 0) {
                            uVar26 = 3;
                            iVar15 = ((uintptr_t)pf_module_state + 0x140U);
                          }
                          else {
                            uVar21 = uVar26 - 0x41;
                            if (uVar21 < 0x1a) {
                              uVar26 = uVar26 | 0x20;
                            }
                            bVar39 = uVar26 != 0x74;
                            if (!bVar39) {
                              uVar21 = local_60 & 0xff;
                              uVar26 = 4;
                            }
                            if (bVar39 || uVar21 != 0) goto LAB_10005d34;
                            iVar15 = ((uintptr_t)pf_module_state + 0x140U);
                          }
                        }
                        break;
                      }
                      uVar26 = (uint)PF_PART1(local_64, 2);
                      if (uVar26 == 0) {
                        uVar26 = 2;
LAB_10005c90:
                        if (*(char *)(uVar26 + ((uintptr_t)pf_module_state + 0x14eU)) == '\0') goto switchD_10005850_caseD_6d;
                      }
                      else {
                        if (uVar26 - 0x41 < 0x1a) {
                          uVar26 = uVar26 | 0x20;
                        }
                        if (uVar26 == 0x61) {
                          uVar26 = (uint)PF_PART1(local_64, 3);
                          if (uVar26 == 0) {
                            uVar26 = 3;
                          }
                          else {
                            uVar21 = uVar26 - 0x41;
                            if (uVar21 < 0x1a) {
                              uVar26 = uVar26 | 0x20;
                            }
                            bVar40 = uVar26 != 100;
                            if (!bVar40) {
                              uVar21 = local_60 & 0xff;
                              uVar26 = 4;
                            }
                            if (bVar40 || uVar21 != 0) goto LAB_10005ca8;
                          }
                          goto LAB_10005c90;
                        }
                      }
LAB_10005ca8:
                      uVar26 = (uint)PF_PART1(local_64, 2);
                      if (uVar26 == 0) {
                        uVar26 = 2;
                      }
                      else {
                        if (uVar26 - 0x41 < 0x1a) {
                          uVar26 = uVar26 | 0x20;
                        }
                        if (uVar26 != 0x61) {
LAB_10005d34:
                          bVar39 = false;
                          goto switchD_10005850_caseD_6d;
                        }
                        uVar26 = (uint)PF_PART1(local_64, 3);
                        if (uVar26 == 0) {
                          uVar26 = 3;
                        }
                        else {
                          if (uVar26 - 0x41 < 0x1a) {
                            uVar26 = uVar26 | 0x20;
                          }
                          if (uVar26 != 100) goto LAB_10005d34;
                          uVar26 = local_60 & 0xff;
                          if (uVar26 == 0) {
                            uVar26 = 4;
                          }
                          else {
                            if (uVar26 - 0x41 < 0x1a) {
                              uVar26 = uVar26 | 0x20;
                            }
                            if (uVar26 != 0x62) goto LAB_10005d34;
                            uVar26 = (uint)PF_PART1(local_60, 1);
                            if (uVar26 == 0) {
                              uVar26 = 5;
                            }
                            else {
                              uVar21 = uVar26 - 0x41;
                              if (uVar21 < 0x1a) {
                                uVar26 = uVar26 | 0x20;
                              }
                              bVar39 = uVar26 == 99;
                              if (bVar39) {
                                uVar21 = (uint)PF_PART1(local_60, 2);
                                uVar26 = 6;
                              }
                              if (!bVar39 || uVar21 != 0) goto LAB_10005d34;
                            }
                          }
                        }
                      }
                    }
                    iVar15 = ((uintptr_t)pf_module_state + 0x15eU);
                    break;
                  default:
                    goto switchD_10005850_caseD_6d;
                  case 0x6e:
                    uVar21 = (uint)PF_PART1(local_64, 1);
                    uVar26 = 1;
                    if (uVar21 == 0) {
LAB_10005954:
                      iVar15 = ((uintptr_t)pf_module_state + 0x145U);
                      break;
                    }
                    if (uVar21 - 0x41 < 0x1a) {
                      uVar21 = uVar21 | 0x20;
                    }
                    if (uVar21 == 0x65) {
                      uVar26 = (uint)PF_PART1(local_64, 2);
                      if (uVar26 == 0) {
                        uVar26 = 2;
                        iVar15 = ((uintptr_t)pf_module_state + 0x145U);
                        break;
                      }
                      uVar21 = uVar26 - 0x41;
                      if (uVar21 < 0x1a) {
                        uVar26 = uVar26 | 0x20;
                      }
                      bVar39 = uVar26 == 0x77;
                      if (bVar39) {
                        uVar21 = (uint)PF_PART1(local_64, 3);
                        uVar26 = 3;
                      }
                      if (bVar39 && uVar21 == 0) goto LAB_10005954;
                    }
                    goto LAB_10005d34;
                  case 0x72:
                    uVar26 = (uint)PF_PART1(local_64, 1);
                    if (uVar26 == 0) {
                      uVar26 = 1;
                      goto LAB_10005a38;
                    }
                    if (uVar26 - 0x41 < 0x1a) {
                      uVar26 = uVar26 | 0x20;
                    }
                    if (uVar26 != 0x75) {
                      if (uVar26 == 0x65) {
                        uVar26 = (uint)PF_PART1(local_64, 2);
                        if (uVar26 == 0) {
                          uVar26 = 2;
                        }
                        else {
                          uVar21 = uVar26 - 0x41;
                          if (uVar21 < 0x1a) {
                            uVar26 = uVar26 | 0x20;
                          }
                          bVar40 = uVar26 != 0x6d;
                          if (!bVar40) {
                            uVar21 = (uint)PF_PART1(local_64, 3);
                            uVar26 = 3;
                          }
                          if (bVar40 || uVar21 != 0) goto switchD_10005850_caseD_6d;
                        }
                        bVar39 = *(char *)(uVar26 + ((uintptr_t)pf_module_state + 0x13cU)) == '\0';
                      }
                      goto switchD_10005850_caseD_6d;
                    }
                    uVar26 = (uint)PF_PART1(local_64, 2);
                    if (uVar26 == 0) {
                      uVar26 = 2;
LAB_10005b3c:
                      if (*(char *)(uVar26 + ((uintptr_t)pf_module_state + 0x153U)) == '\0') goto LAB_1000575c;
                    }
                    else {
                      uVar21 = uVar26 - 0x41;
                      if (uVar21 < 0x1a) {
                        uVar26 = uVar26 | 0x20;
                      }
                      bVar40 = uVar26 == 0x6e;
                      if (bVar40) {
                        uVar21 = (uint)PF_PART1(local_64, 3);
                        uVar26 = 3;
                      }
                      if (bVar40 && uVar21 == 0) goto LAB_10005b3c;
                    }
                    uVar26 = (uint)PF_PART1(local_64, 2);
                    if (uVar26 == 0) {
                      uVar26 = 2;
                    }
                    else {
                      if (uVar26 - 0x41 < 0x1a) {
                        uVar26 = uVar26 | 0x20;
                      }
                      if (uVar26 != 0x6e) goto switchD_10005850_caseD_6d;
                      uVar26 = (uint)PF_PART1(local_64, 3);
                      if (uVar26 == 0) {
                        uVar26 = 3;
                      }
                      else {
                        if (uVar26 - 0x41 < 0x1a) {
                          uVar26 = uVar26 | 0x20;
                        }
                        if (uVar26 != 0x62) goto switchD_10005850_caseD_6d;
                        uVar26 = local_60 & 0xff;
                        if (uVar26 == 0) {
                          uVar26 = 4;
                        }
                        else {
                          uVar21 = uVar26 - 0x41;
                          if (uVar21 < 0x1a) {
                            uVar26 = uVar26 | 0x20;
                          }
                          bVar40 = uVar26 != 99;
                          if (!bVar40) {
                            uVar21 = (uint)PF_PART1(local_60, 1);
                            uVar26 = 5;
                          }
                          if (bVar40 || uVar21 != 0) goto switchD_10005850_caseD_6d;
                        }
                      }
                    }
                    goto LAB_10005a38;
                  case 0x73:
                    uVar21 = (uint)PF_PART1(local_64, 1);
                    bVar39 = true;
                    uVar26 = 1;
                    if (uVar21 == 0) {
LAB_10005c54:
                      iVar15 = ((uintptr_t)pf_module_state + 0x157U);
                    }
                    else {
                      if (uVar21 - 0x41 < 0x1a) {
                        uVar21 = uVar21 | 0x20;
                      }
                      if (uVar21 != 0x61) goto LAB_10005d34;
                      uVar26 = (uint)PF_PART1(local_64, 2);
                      if (uVar26 == 0) {
                        uVar26 = 2;
                        iVar15 = ((uintptr_t)pf_module_state + 0x157U);
                        break;
                      }
                      if (uVar26 - 0x41 < 0x1a) {
                        uVar26 = uVar26 | 0x20;
                      }
                      if (uVar26 != 0x76) goto LAB_10005d34;
                      uVar26 = (uint)PF_PART1(local_64, 3);
                      if (uVar26 == 0) {
                        uVar26 = 3;
LAB_10005bd0:
                        if (*(char *)(uVar26 + ((uintptr_t)pf_module_state + 0x149U)) == '\0') goto switchD_10005850_caseD_6d;
                      }
                      else {
                        uVar21 = uVar26 - 0x41;
                        if (uVar21 < 0x1a) {
                          uVar26 = uVar26 | 0x20;
                        }
                        bVar40 = uVar26 == 0x65;
                        if (bVar40) {
                          uVar21 = local_60 & 0xff;
                          uVar26 = 4;
                        }
                        if (bVar40 && uVar21 == 0) goto LAB_10005bd0;
                      }
                      uVar26 = (uint)PF_PART1(local_64, 3);
                      if (uVar26 != 0) {
                        if (uVar26 - 0x41 < 0x1a) {
                          uVar26 = uVar26 | 0x20;
                        }
                        if (uVar26 == 0x65) {
                          uVar26 = local_60 & 0xff;
                          if (uVar26 == 0) {
                            uVar26 = 4;
                            iVar15 = ((uintptr_t)pf_module_state + 0x157U);
                            break;
                          }
                          if (uVar26 - 0x41 < 0x1a) {
                            uVar26 = uVar26 | 0x20;
                          }
                          if (uVar26 == 0x62) {
                            uVar26 = (uint)PF_PART1(local_60, 1);
                            if (uVar26 == 0) {
                              uVar26 = 5;
                              iVar15 = ((uintptr_t)pf_module_state + 0x157U);
                              break;
                            }
                            uVar21 = uVar26 - 0x41;
                            if (uVar21 < 0x1a) {
                              uVar26 = uVar26 | 0x20;
                            }
                            bVar39 = uVar26 == 99;
                            if (bVar39) {
                              uVar21 = (uint)PF_PART1(local_60, 2);
                              uVar26 = 6;
                            }
                            if (bVar39 && uVar21 == 0) goto LAB_10005c54;
                          }
                        }
                        goto LAB_10005d34;
                      }
                      uVar26 = 3;
                      iVar15 = ((uintptr_t)pf_module_state + 0x157U);
                    }
                  }
                  bVar39 = *(char *)(iVar15 + uVar26) == '\0';
                }
              }
            }
switchD_10005850_caseD_6d:
            recovered_1000b5d8((char *)&local_464,0x100,local_172c);
            iVar15 = local_1688;
            if (local_1758 != (void *)0x0) {
              if (local_1688 < 1000) {
                local_1688 = local_1688 + 1;
                iVar15 = local_168c + iVar15;
              }
              else {
                iVar15 = recovered_1000ad40((int)&local_1a9c,
                                            (byte *)((int)local_1758 +
                                                    (local_168c +
                                                    ((uint)((ulonglong)
                                                            ((longlong)local_168c * 0x10624dd3) >>
                                                           0x26) - (local_168c >> 0x1f)) * -1000) *
                                                    0x100));
                uVar26 = local_1684 - iVar15;
                if (uVar26 == 0 || (int)local_1684 < iVar15) {
                  uVar26 = 0;
                }
                local_1684 = uVar26;
                local_168c = (local_168c + 1) % 1000;
                iVar15 = local_1688 + local_168c + -1;
              }
              uVar26 = local_464 & 0xff;
              if (uVar26 == 0) {
                uVar21 = 0;
              }
              else {
                uVar21 = 0;
                do {
                  uVar24 = (undefined1)uVar26;
                  if (uVar26 < 0x21) {
                    uVar24 = 0x20;
                  }
                  *(undefined1 *)((int)local_1758 + uVar21 + (iVar15 % 1000) * 0x100) = uVar24;
                  uVar26 = (uint)local_1464[uVar21 + 0x1001];
                  uVar21 = uVar21 + 1;
                } while ((uVar26 != 0) && (uVar21 < 0xff));
              }
              *(undefined1 *)((int)local_1758 + uVar21 + (iVar15 % 1000) * 0x100) = 0;
            }
            uVar6 = iVar29 - uVar6 & ~((int)(iVar29 - uVar6) >> 0x1f);
            if (local_172c[0] != 0) {
              if (!bVar39) {
                iVar29 = 0x371;
                bVar25 = local_172c[0];
                do {
                  switch((uintptr_t)(bVar25)) {
                  case 0:
                    goto switchD_10005ea8_caseD_0;
                  default:
                    bVar25 = *(byte *)((int)&local_1a9c + iVar29);
                    iVar29 = iVar29 + 1;
                    break;
                  case 9:
                  case 10:
                  case 0xd:
                  case 0x20:
                    goto switchD_10005ea8_caseD_9;
                  }
                } while( true );
              }
              goto switchD_10005ea8_caseD_9;
            }
            if ((int)uVar6 <= (int)uVar7) {
              if (local_1688 < 1) goto LAB_100068d8;
              iVar29 = 0;
              iVar15 = 0;
              do {
                pbVar14 = &DAT_1000bef7;
                if (local_1758 != (void *)0x0) {
                  iVar32 = iVar29 + local_168c;
                  pbVar14 = (byte *)((int)local_1758 +
                                    (iVar32 + ((uint)((ulonglong)((longlong)iVar32 * 0x10624dd3) >>
                                                     0x26) - (iVar32 >> 0x1f)) * -1000) * 0x100);
                }
                iVar32 = recovered_1000ad40((int)&local_1a9c,pbVar14);
                iVar15 = iVar32 + iVar15;
                iVar29 = iVar29 + 1;
              } while (iVar29 < local_1688);
              goto LAB_100068dc;
            }
            goto LAB_1000692c;
          }
          if (uVar21 != 0x1b && uVar26 != 1) goto LAB_10005534;
          local_1677 = '\0';
          bVar34 = 1;
          goto LAB_10006a00;
        }
      }
    }
    goto LAB_100069f4;
  }
  bVar34 = bVar34 | bVar35;
LAB_10006a00:
  uVar7 = local_1744;
  pvVar37 = local_1748;
  uVar6 = local_1740 & 1;
  if (uVar6 == 0) {
    local_173b = 0;
  }
  else {
    if ((char)local_173b != '\0') goto LAB_100070a8;
    iVar5 = 0xc;
    if (0 < local_1730) {
      iVar5 = local_1730 + 2;
    }
    uVar26 = local_1a94;
    if (local_1a94 == 0) {
      uVar26 = 400;
    }
    uVar26 = (uVar26 - iVar5) - 0x26;
    if (local_1730 < 1) {
      if ((int)uVar26 < 0x10) {
        uVar26 = 0x10;
      }
    }
    else if ((int)uVar26 < (int)(local_1730 + 6U)) {
      uVar26 = local_1730 + 6U;
    }
    recovered_1000b830((undefined8 *)&local_64,(int)&local_1a9c);
    uVar21 = local_1684;
    uVar10 = local_1730 + 2;
    uVar30 = 0xc;
    if (0 < local_1730) {
      uVar30 = uVar10;
    }
    uVar18 = local_1a94;
    if (local_1a94 == 0) {
      uVar18 = 400;
    }
    iVar5 = uVar18 - uVar30;
    uVar18 = iVar5 - 0x26;
    uVar30 = uVar26 - 0x18;
    if (uVar26 < 0x34) {
      uVar30 = 0x1c;
    }
    if (local_1730 < 1) {
      uVar26 = 0x10;
      bVar39 = SBORROW4(uVar18,0x10);
      iVar29 = iVar5 + -0x36;
    }
    else {
      uVar26 = local_1730 + 6;
      bVar39 = SBORROW4(uVar18,uVar26);
      iVar29 = uVar18 - uVar26;
    }
    uVar31 = uVar18;
    if (iVar29 < 0 != bVar39) {
      uVar31 = uVar26;
    }
    uVar26 = (int)pvVar37 - 10;
    if (((uVar26 < 0xc) && ((int)(uVar31 - 0x14) <= (int)uVar7)) && ((int)uVar7 < (int)(uVar31 - 6))
       ) {
      uVar26 = local_1684 - 1;
      local_1684 = uVar26;
      if (local_1688 < 1) {
        iVar5 = 0;
      }
      else {
        iVar29 = 0;
        iVar5 = 0;
        do {
          pbVar14 = &DAT_1000bef7;
          if (local_1758 != (void *)0x0) {
            iVar15 = iVar29 + local_168c;
            pbVar14 = (byte *)((int)local_1758 +
                              (iVar15 + ((uint)((ulonglong)((longlong)iVar15 * 0x10624dd3) >> 0x26)
                                        - (iVar15 >> 0x1f)) * -1000) * 0x100);
          }
          iVar15 = recovered_1000ad40((int)&local_1a9c,pbVar14);
          iVar5 = iVar15 + iVar5;
          iVar29 = iVar29 + 1;
        } while (iVar29 < local_1688);
        uVar10 = local_1730 + 2;
      }
      uVar30 = 0x10;
      if (local_1730 < 1) {
        uVar10 = 0xc;
      }
      else {
        uVar30 = local_1730 + 6;
      }
      uVar18 = local_1a94;
      if (local_1a94 == 0) {
        uVar18 = 400;
      }
      uVar18 = (uVar18 - uVar10) - 0x26;
      if ((int)uVar30 < (int)uVar18) {
        uVar30 = uVar18;
      }
      uVar30 = recovered_100040b0(uVar30,uVar10);
      if (uVar30 < 2) {
        uVar30 = 1;
      }
      local_1684 = iVar5 - uVar30 & ~((int)(iVar5 - uVar30) >> 0x1f);
      if ((int)uVar26 < (int)local_1684) {
        local_1684 = uVar26;
      }
      if ((int)uVar21 < 1) {
        local_1684 = 0;
      }
LAB_10007094:
      bVar34 = local_1684 != uVar21 | bVar34;
    }
    else {
      if (local_1730 < 1) {
        uVar31 = 0x10;
        bVar39 = SBORROW4(uVar18,0x10);
        iVar29 = iVar5 + -0x36;
      }
      else {
        uVar31 = local_1730 + 6;
        bVar39 = SBORROW4(uVar18,uVar31);
        iVar29 = uVar18 - uVar31;
      }
      uVar11 = uVar18;
      if (iVar29 < 0 != bVar39) {
        uVar11 = uVar31;
      }
      if (((uVar26 < 0xc) && ((int)(uVar11 - 4) <= (int)uVar7)) && (uVar7 < uVar11 + 10)) {
        uVar26 = local_1684 + 1;
        local_1684 = uVar26;
        if (local_1688 < 1) {
          iVar5 = 0;
        }
        else {
          iVar29 = 0;
          iVar5 = 0;
          do {
            pbVar14 = &DAT_1000bef7;
            if (local_1758 != (void *)0x0) {
              iVar15 = iVar29 + local_168c;
              pbVar14 = (byte *)((int)local_1758 +
                                (iVar15 + ((uint)((ulonglong)((longlong)iVar15 * 0x10624dd3) >> 0x26
                                                 ) - (iVar15 >> 0x1f)) * -1000) * 0x100);
            }
            iVar15 = recovered_1000ad40((int)&local_1a9c,pbVar14);
            iVar5 = iVar15 + iVar5;
            iVar29 = iVar29 + 1;
          } while (iVar29 < local_1688);
          uVar10 = local_1730 + 2;
        }
        uVar30 = 0x10;
        if (local_1730 < 1) {
          uVar10 = 0xc;
        }
        else {
          uVar30 = local_1730 + 6;
        }
        uVar18 = local_1a94;
        if (local_1a94 == 0) {
          uVar18 = 400;
        }
        uVar18 = (uVar18 - uVar10) - 0x26;
        if ((int)uVar30 < (int)uVar18) {
          uVar30 = uVar18;
        }
        uVar30 = recovered_100040b0(uVar30,uVar10);
        if (uVar30 < 2) {
          uVar30 = 1;
        }
        local_1684 = iVar5 - uVar30 & ~((int)(iVar5 - uVar30) >> 0x1f);
        if ((int)uVar26 < (int)local_1684) {
          local_1684 = uVar26;
        }
        if ((int)uVar21 < -1) {
          local_1684 = 0;
        }
        goto LAB_10007094;
      }
      if (uVar26 < 0xc) {
        bVar40 = SBORROW4(uVar7,10);
        iVar29 = uVar7 - 10;
        bVar39 = uVar7 == 10;
        if (9 < (int)uVar7) {
          bVar40 = SBORROW4(uVar30,uVar7);
          iVar29 = uVar30 - uVar7;
          bVar39 = uVar30 == uVar7;
        }
        if (!bVar39 && iVar29 < 0 == bVar40) {
          bVar40 = SBORROW4((int)local_64,(int)pvVar37);
          iVar29 = (int)local_64 - (int)pvVar37;
          bVar39 = local_64 == pvVar37;
          if ((int)local_64 <= (int)pvVar37) {
            bVar40 = SBORROW4(local_60,uVar7);
            iVar29 = local_60 - uVar7;
            bVar39 = local_60 == uVar7;
            uVar30 = local_60;
          }
          if (bVar39 || iVar29 < 0 != bVar40) {
            pvVar17 = (void *)(local_5c + (int)local_64);
            bVar40 = SBORROW4((int)pvVar17,(int)pvVar37);
            iVar29 = (int)pvVar17 - (int)pvVar37;
            bVar39 = pvVar17 == pvVar37;
            if ((int)pvVar37 < (int)pvVar17) {
              uVar30 = local_58 + uVar30;
              bVar40 = SBORROW4(uVar30,uVar7);
              iVar29 = uVar30 - uVar7;
              bVar39 = uVar30 == uVar7;
            }
            if (bVar39 || iVar29 < 0 != bVar40) goto LAB_10006cd0;
          }
          else {
LAB_10006cd0:
            if (local_1730 < 1) {
              uVar26 = 0x10;
              bVar39 = SBORROW4(uVar18,0x10);
              iVar5 = iVar5 + -0x36;
            }
            else {
              uVar26 = local_1730 + 6;
              bVar39 = SBORROW4(uVar18,uVar26);
              iVar5 = uVar18 - uVar26;
            }
            if (iVar5 < 0 != bVar39) {
              uVar18 = uVar26;
            }
            recovered_1000b830((undefined8 *)&local_464,(int)&local_1a9c);
            iVar5 = uVar18 - 0x22;
            if (uVar18 < 0x34) {
              iVar5 = 0x12;
            }
            uVar26 = 0;
            iVar15 = 0;
            iVar29 = 0;
            if (0 < local_1688) {
              do {
                pbVar14 = &DAT_1000bef7;
                if (local_1758 != (void *)0x0) {
                  iVar32 = iVar15 + local_168c;
                  pbVar14 = (byte *)((int)local_1758 +
                                    (iVar32 + ((uint)((ulonglong)((longlong)iVar32 * 0x10624dd3) >>
                                                     0x26) - (iVar32 >> 0x1f)) * -1000) * 0x100);
                }
                iVar32 = recovered_1000ad40((int)&local_1a9c,pbVar14);
                iVar29 = iVar32 + iVar29;
                iVar15 = iVar15 + 1;
              } while (iVar15 < local_1688);
              iVar15 = 0;
              if (0 < local_1688) {
                iVar15 = 1;
              }
            }
            iVar32 = local_1730;
            uVar10 = local_1a94;
            uVar30 = local_1730 + 6;
            uVar31 = local_1730 + 2;
            uVar18 = 0x10;
            if (0 < local_1730) {
              uVar18 = uVar30;
            }
            uVar11 = 0xc;
            if (0 < local_1730) {
              uVar11 = uVar31;
            }
            uVar23 = local_1a94;
            if (local_1a94 == 0) {
              uVar23 = 400;
            }
            uVar23 = (uVar23 - uVar11) - 0x26;
            if ((int)uVar18 < (int)uVar23) {
              uVar18 = uVar23;
            }
            uVar18 = recovered_100040b0(uVar18,uVar11);
            if (uVar18 < 2) {
              uVar18 = 1;
            }
            if ((0 < (int)(iVar29 - uVar18)) && (0 < iVar5 - local_458)) {
              uVar18 = recovered_10004138(((uVar7 - local_458 / 2) + -10) * (iVar29 - uVar18),
                                          iVar5 - local_458);
              iVar5 = 0;
              local_1684 = uVar18;
              if (iVar15 != 0) {
                iVar29 = 0;
                do {
                  pbVar14 = &DAT_1000bef7;
                  if (local_1758 != (void *)0x0) {
                    iVar15 = iVar29 + local_168c;
                    pbVar14 = (byte *)((int)local_1758 +
                                      (iVar15 + ((uint)((ulonglong)((longlong)iVar15 * 0x10624dd3)
                                                       >> 0x26) - (iVar15 >> 0x1f)) * -1000) * 0x100
                                      );
                  }
                  iVar15 = recovered_1000ad40((int)&local_1a9c,pbVar14);
                  iVar5 = iVar15 + iVar5;
                  iVar29 = iVar29 + 1;
                } while (iVar29 < local_1688);
                uVar30 = local_1730 + 6;
                uVar31 = local_1730 + 2;
                iVar32 = local_1730;
                uVar10 = local_1a94;
              }
              if (iVar32 < 1) {
                uVar30 = 0x10;
                uVar31 = 0xc;
              }
              iVar29 = uVar10 - 0x26;
              if (uVar10 == 0) {
                iVar29 = 0x16a;
              }
              if ((int)uVar30 < (int)(iVar29 - uVar31)) {
                uVar30 = iVar29 - uVar31;
              }
              uVar26 = recovered_100040b0(uVar30,uVar31);
              if (uVar26 < 2) {
                uVar26 = 1;
              }
              uVar26 = iVar5 - uVar26 & ~((int)(iVar5 - uVar26) >> 0x1f);
              if ((int)uVar18 < (int)uVar26) {
                uVar26 = uVar18;
              }
              if ((int)uVar18 < 0) {
                uVar26 = 0;
              }
            }
            local_1684 = uVar26;
          }
          recovered_1000b830((undefined8 *)&local_464,(int)&local_1a9c);
          local_173b = CONCAT11(1,(char)local_173b);
          local_1738 = uVar7 - local_460;
          goto LAB_10007094;
        }
      }
    }
LAB_100070a8:
    if (PF_PART1(local_173b, 1) == '\x01') {
      iVar5 = 0xc;
      if (0 < local_1730) {
        iVar5 = local_1730 + 2;
      }
      uVar26 = local_1a94;
      if (local_1a94 == 0) {
        uVar26 = 400;
      }
      uVar26 = (uVar26 - iVar5) - 0x26;
      if (local_1730 < 1) {
        if ((int)uVar26 < 0x10) {
          uVar26 = 0x10;
        }
      }
      else if ((int)uVar26 < (int)(local_1730 + 6U)) {
        uVar26 = local_1730 + 6U;
      }
      recovered_1000b830((undefined8 *)&local_464,(int)&local_1a9c);
      iVar5 = uVar26 - 0x22;
      if (uVar26 < 0x34) {
        iVar5 = 0x12;
      }
      if (local_1688 < 1) {
        bVar39 = false;
        iVar29 = 0;
      }
      else {
        iVar15 = 0;
        iVar29 = 0;
        do {
          pbVar14 = &DAT_1000bef7;
          if (local_1758 != (void *)0x0) {
            iVar32 = iVar15 + local_168c;
            pbVar14 = (byte *)((int)local_1758 +
                              (iVar32 + ((uint)((ulonglong)((longlong)iVar32 * 0x10624dd3) >> 0x26)
                                        - (iVar32 >> 0x1f)) * -1000) * 0x100);
          }
          iVar32 = recovered_1000ad40((int)&local_1a9c,pbVar14);
          iVar29 = iVar32 + iVar29;
          iVar15 = iVar15 + 1;
        } while (iVar15 < local_1688);
        bVar39 = 0 < local_1688;
      }
      iVar15 = local_1730;
      uVar21 = local_1a94;
      uVar26 = 0x10;
      uVar10 = local_1730 + 2;
      uVar30 = 0xc;
      if (0 < local_1730) {
        uVar26 = local_1730 + 6;
        uVar30 = uVar10;
      }
      uVar18 = local_1a94;
      if (local_1a94 == 0) {
        uVar18 = 400;
      }
      uVar18 = (uVar18 - uVar30) - 0x26;
      if ((int)uVar26 < (int)uVar18) {
        uVar26 = uVar18;
      }
      uVar30 = recovered_100040b0(uVar26,uVar30);
      uVar26 = local_1684;
      if (uVar30 < 2) {
        uVar30 = 1;
      }
      if (PF_PART1(local_173b, 1) == '\x01') {
        iVar29 = iVar29 - uVar30;
        iVar32 = iVar29;
        iVar28 = 1;
        if (0 < iVar29) {
          iVar32 = iVar5 - local_458;
          iVar28 = iVar32;
        }
        if (0 < iVar32) {
          uVar7 = recovered_10004138(((uVar7 - local_1738) + -10) * iVar29,iVar28);
          iVar5 = 0;
          local_1684 = uVar7;
          if (bVar39) {
            iVar29 = 0;
            do {
              pbVar14 = &DAT_1000bef7;
              if (local_1758 != (void *)0x0) {
                iVar15 = iVar29 + local_168c;
                pbVar14 = (byte *)((int)local_1758 +
                                  (iVar15 + ((uint)((ulonglong)((longlong)iVar15 * 0x10624dd3) >>
                                                   0x26) - (iVar15 >> 0x1f)) * -1000) * 0x100);
              }
              iVar15 = recovered_1000ad40((int)&local_1a9c,pbVar14);
              iVar5 = iVar15 + iVar5;
              iVar29 = iVar29 + 1;
            } while (iVar29 < local_1688);
            uVar10 = local_1730 + 2;
            iVar15 = local_1730;
            uVar21 = local_1a94;
          }
          uVar30 = 0x10;
          if (iVar15 < 1) {
            uVar10 = 0xc;
          }
          else {
            uVar30 = iVar15 + 6;
          }
          if (uVar21 == 0) {
            uVar21 = 400;
          }
          uVar21 = (uVar21 - uVar10) - 0x26;
          if ((int)uVar30 < (int)uVar21) {
            uVar30 = uVar21;
          }
          uVar21 = recovered_100040b0(uVar30,uVar10);
          if (uVar21 < 2) {
            uVar21 = 1;
          }
          local_1684 = iVar5 - uVar21 & ~((int)(iVar5 - uVar21) >> 0x1f);
          if ((int)uVar7 < (int)local_1684) {
            local_1684 = uVar7;
          }
          if ((int)uVar7 < 0) {
            local_1684 = 0;
          }
          bVar34 = local_1684 != uVar26 | bVar34;
        }
      }
    }
  }
  local_173b = CONCAT11(PF_PART1(local_173b, 1),(char)uVar6);
LAB_10007348:
  uVar7 = local_1684;
  if (local_1688 < 1) {
    iVar5 = 0;
  }
  else {
    iVar29 = 0;
    iVar5 = 0;
    do {
      pbVar14 = &DAT_1000bef7;
      if (local_1758 != (void *)0x0) {
        iVar15 = iVar29 + local_168c;
        pbVar14 = (byte *)((int)local_1758 +
                          (iVar15 + ((uint)((ulonglong)((longlong)iVar15 * 0x10624dd3) >> 0x26) -
                                    (iVar15 >> 0x1f)) * -1000) * 0x100);
      }
      iVar15 = recovered_1000ad40((int)&local_1a9c,pbVar14);
      iVar5 = iVar15 + iVar5;
      iVar29 = iVar29 + 1;
    } while (iVar29 < local_1688);
  }
  iVar29 = local_1730;
  uVar6 = local_1a94;
  uVar21 = local_1730 + 2;
  uVar26 = 0xc;
  if (0 < local_1730) {
    uVar26 = uVar21;
  }
  uVar30 = local_1a94;
  if (local_1a94 == 0) {
    uVar30 = 400;
  }
  uVar26 = (uVar30 - uVar26) - 0x26;
  if (local_1730 < 1) {
    if ((int)uVar26 < 0x11) {
      uVar26 = 0x10;
    }
    uVar10 = 0xc;
  }
  else {
    if ((int)uVar26 <= (int)(local_1730 + 6U)) {
      uVar26 = local_1730 + 6U;
    }
    uVar10 = uVar21;
  }
  uVar10 = recovered_100040b0(uVar26,uVar10);
  uVar26 = local_1a98;
  if (uVar10 < 2) {
    uVar10 = 1;
  }
  local_1684 = iVar5 - uVar10 & ~((int)(iVar5 - uVar10) >> 0x1f);
  if ((int)uVar7 < (int)local_1684) {
    local_1684 = uVar7;
  }
  if ((int)uVar7 < 0) {
    local_1684 = 0;
  }
  uVar10 = (local_1680 & 0x1fff) >> 0xc;
  if (uVar16 != 2) {
    uVar10 = 1;
  }
  bVar39 = local_1684 != uVar7;
  if (bVar38 || ((uVar10 != uVar4 || bVar39) || (bVar34 & 1) != 0)) {
    uVar7 = 0;
    if ((int)uVar30 < 0) {
      uVar7 = uVar30;
    }
    uVar30 = uVar30 & ~((int)uVar30 >> 0x1f);
    uVar18 = local_1a98;
    if (local_1a98 == 0) {
      uVar18 = 0x2f8;
    }
    uVar31 = 0;
    if ((int)uVar18 < 0) {
      uVar31 = uVar18;
    }
    if ((int)uVar7 < (int)uVar30) {
      uVar18 = uVar18 & ~((int)uVar18 >> 0x1f);
      do {
        uVar6 = uVar31;
        if ((int)uVar31 < (int)uVar18) {
          do {
            if ((-1 < (int)(uVar6 | uVar7)) && (local_175c != (void *)0x0)) {
              uVar21 = local_1a98;
              if (local_1a98 == 0) {
                uVar21 = 0x2f8;
              }
              if ((int)uVar6 < (int)uVar21) {
                uVar21 = local_1a94;
                if (local_1a94 == 0) {
                  uVar21 = 400;
                }
                if ((int)uVar7 < (int)uVar21) {
                  uVar21 = local_1a98 << 2;
                  if (local_1a98 == 0) {
                    uVar21 = 0xbe0;
                  }
                  if (local_1a90 != 0) {
                    uVar21 = local_1a90;
                  }
                  *(undefined1 *)((int)local_175c + uVar6 * 4 + uVar7 * uVar21) = 0x4c;
                  *(undefined1 *)((int)local_175c + uVar6 * 4 + uVar7 * uVar21 + 1) = 0x91;
                  *(undefined1 *)((int)local_175c + uVar6 * 4 + uVar7 * uVar21 + 2) = 0xc4;
                  *(undefined1 *)((int)local_175c + uVar6 * 4 + uVar7 * uVar21 + 3) = 0xd9;
                }
              }
            }
            uVar6 = uVar6 + 1;
          } while (uVar18 != uVar6);
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 != uVar30);
      uVar21 = local_1730 + 2;
      uVar6 = local_1a94;
      iVar29 = local_1730;
    }
    uVar7 = 0x10;
    if (iVar29 < 1) {
      uVar21 = 0xc;
    }
    else {
      uVar7 = iVar29 + 6;
    }
    uVar30 = uVar6;
    if (uVar6 == 0) {
      uVar30 = 400;
    }
    uVar18 = (uVar30 - uVar21) - 0x26;
    if ((int)uVar7 < (int)uVar18) {
      uVar7 = uVar18;
    }
    uVar18 = recovered_100040b0(uVar7,uVar21);
    uVar21 = local_1684;
    if (uVar18 < 2) {
      uVar18 = 1;
    }
    iVar29 = 0xe;
    iVar5 = uVar26 - 0x26;
    if (0 < local_1734) {
      iVar29 = local_1734 + 8;
    }
    if (uVar26 == 0) {
      iVar5 = 0x2d2;
    }
    if (iVar5 <= iVar29) {
      iVar5 = iVar29;
    }
    local_1aac = uVar26;
    if (uVar26 == 0) {
      uVar26 = 0x2f8;
    }
    uVar11 = iVar5 + 0x1c;
    uVar31 = uVar26;
    if ((int)uVar11 < (int)uVar26) {
      uVar31 = uVar11;
    }
    if (iVar5 < -0x1c) {
      uVar31 = 0;
    }
    iVar29 = local_1734;
    if (local_1734 < 1) {
      iVar29 = 6;
    }
    uVar9 = recovered_10004138(iVar5 + -8,iVar29);
    if ((int)uVar9 < 2) {
      uVar9 = 1;
    }
    if (0x1b < (int)uVar26) {
      uVar26 = 0x1c;
    }
    uVar12 = uVar7 + 10;
    uVar23 = uVar30;
    if ((int)uVar12 < (int)uVar30) {
      uVar23 = uVar12;
    }
    if (10 < (int)uVar23) {
      if (9 < (int)uVar30) {
        uVar30 = 10;
      }
      do {
        uVar6 = uVar26;
        if ((int)uVar26 < (int)uVar31) {
          do {
            if ((-1 < (int)(uVar6 | uVar30)) && (local_175c != (void *)0x0)) {
              uVar33 = local_1a98;
              if (local_1a98 == 0) {
                uVar33 = 0x2f8;
              }
              if ((int)uVar6 < (int)uVar33) {
                uVar33 = local_1a94;
                if (local_1a94 == 0) {
                  uVar33 = 400;
                }
                if ((int)uVar30 < (int)uVar33) {
                  uVar33 = local_1a98 << 2;
                  if (local_1a98 == 0) {
                    uVar33 = 0xbe0;
                  }
                  if (local_1a90 != 0) {
                    uVar33 = local_1a90;
                  }
                  *(undefined1 *)((int)local_175c + uVar6 * 4 + uVar30 * uVar33) = 0x4c;
                  *(undefined1 *)((int)local_175c + uVar6 * 4 + uVar30 * uVar33 + 1) = 0x91;
                  *(undefined1 *)((int)local_175c + uVar6 * 4 + uVar30 * uVar33 + 2) = 0xc4;
                  *(undefined1 *)((int)local_175c + uVar6 * 4 + uVar30 * uVar33 + 3) = 0xd9;
                }
              }
            }
            uVar6 = uVar6 + 1;
          } while (uVar31 != uVar6);
        }
        uVar30 = uVar30 + 1;
      } while (uVar30 != uVar23);
      local_1aac = local_1a98;
      uVar6 = local_1a94;
    }
    uVar26 = local_1aac;
    if (local_1aac == 0) {
      uVar26 = 0x2f8;
    }
    uVar30 = 0x1c;
    if ((int)uVar26 < 0x1c) {
      uVar30 = uVar26;
    }
    if ((int)uVar11 < (int)uVar26) {
      uVar26 = uVar11;
    }
    if (iVar5 < -0x1c) {
      uVar26 = 0;
    }
    uVar31 = local_1aac;
    if ((uVar6 == 0 || 10 < (int)uVar6) && ((int)uVar30 < (int)uVar26)) {
      do {
        if ((-1 < (int)uVar30) && (local_175c != (void *)0x0)) {
          uVar6 = local_1a98;
          if (local_1a98 == 0) {
            uVar6 = 0x2f8;
          }
          if (((int)uVar30 < (int)uVar6) && ((local_1a94 == 0 || (10 < (int)local_1a94)))) {
            uVar6 = local_1a98 << 2;
            if (local_1a98 == 0) {
              uVar6 = 0xbe0;
            }
            if (local_1a90 != 0) {
              uVar6 = local_1a90;
            }
            *(undefined1 *)((int)local_175c + uVar30 * 4 + uVar6 * 10) = 0;
            *(undefined1 *)((int)local_175c + uVar30 * 4 + uVar6 * 10 + 1) = 0;
            *(undefined1 *)((int)local_175c + uVar30 * 4 + uVar6 * 10 + 2) = 0;
            *(undefined1 *)((int)local_175c + uVar30 * 4 + uVar6 * 10 + 3) = 0xff;
          }
        }
        uVar30 = uVar30 + 1;
      } while (uVar26 != uVar30);
      uVar6 = local_1a94;
      uVar31 = local_1a98;
    }
    uVar26 = uVar31;
    if (uVar31 == 0) {
      uVar26 = 0x2f8;
    }
    uVar30 = 0x1c;
    if ((int)uVar26 < 0x1c) {
      uVar30 = uVar26;
    }
    uVar23 = uVar6;
    if (uVar6 == 0) {
      uVar23 = 400;
    }
    uVar33 = uVar23;
    if ((int)uVar12 < (int)uVar23) {
      uVar33 = uVar12;
    }
    if ((int)uVar12 < 0) {
      uVar33 = 0;
    }
    if ((int)uVar11 < (int)uVar26) {
      uVar26 = uVar11;
    }
    uVar19 = uVar7 + 9;
    if (iVar5 < -0x1c) {
      uVar26 = 0;
    }
    if ((int)uVar19 < (int)uVar23) {
      uVar23 = uVar19;
    }
    if ((int)uVar19 < 0) {
      uVar23 = 0;
    }
    if ((int)uVar23 < (int)uVar33) {
      do {
        uVar6 = uVar30;
        if ((int)uVar30 < (int)uVar26) {
          do {
            if ((-1 < (int)(uVar6 | uVar23)) && (local_175c != (void *)0x0)) {
              uVar31 = local_1a98;
              if (local_1a98 == 0) {
                uVar31 = 0x2f8;
              }
              if ((int)uVar6 < (int)uVar31) {
                uVar31 = local_1a94;
                if (local_1a94 == 0) {
                  uVar31 = 400;
                }
                if ((int)uVar23 < (int)uVar31) {
                  uVar31 = local_1a98 << 2;
                  if (local_1a98 == 0) {
                    uVar31 = 0xbe0;
                  }
                  if (local_1a90 != 0) {
                    uVar31 = local_1a90;
                  }
                  *(undefined1 *)((int)local_175c + uVar6 * 4 + uVar23 * uVar31) = 0;
                  *(undefined1 *)((int)local_175c + uVar6 * 4 + uVar23 * uVar31 + 1) = 0;
                  *(undefined1 *)((int)local_175c + uVar6 * 4 + uVar23 * uVar31 + 2) = 0;
                  *(undefined1 *)((int)local_175c + uVar6 * 4 + uVar23 * uVar31 + 3) = 0xff;
                }
              }
            }
            uVar6 = uVar6 + 1;
          } while (uVar26 != uVar6);
        }
        uVar23 = uVar23 + 1;
      } while (uVar23 != uVar33);
      uVar6 = local_1a94;
      uVar31 = local_1a98;
    }
    uVar26 = uVar6;
    if (uVar6 == 0) {
      uVar26 = 400;
    }
    uVar30 = uVar26;
    if ((int)uVar12 < (int)uVar26) {
      uVar30 = uVar12;
    }
    uVar23 = uVar31;
    if (uVar31 == 0) {
      uVar23 = 0x2f8;
    }
    uVar33 = 0x1c;
    if ((int)uVar23 < 0x1c) {
      uVar33 = uVar23;
    }
    if (10 < (int)uVar30) {
      if (9 < (int)uVar26) {
        uVar26 = 10;
      }
      do {
        if ((((0x1c < (int)uVar23) && (-1 < (int)(uVar33 | uVar26))) && (local_175c != (void *)0x0))
           && ((local_1a98 == 0 || ((int)uVar33 < (int)local_1a98)))) {
          uVar6 = local_1a94;
          if (local_1a94 == 0) {
            uVar6 = 400;
          }
          if ((int)uVar26 < (int)uVar6) {
            uVar6 = local_1a98 << 2;
            if (local_1a98 == 0) {
              uVar6 = 0xbe0;
            }
            if (local_1a90 != 0) {
              uVar6 = local_1a90;
            }
            iVar29 = uVar6 * uVar26 + uVar33 * 4;
            *(undefined1 *)((int)local_175c + iVar29) = 0;
            *(undefined1 *)((int)local_175c + iVar29 + 1) = 0;
            *(undefined1 *)((int)local_175c + iVar29 + 2) = 0;
            *(undefined1 *)((int)local_175c + iVar29 + 3) = 0xff;
          }
        }
        uVar26 = uVar26 + 1;
      } while (uVar30 != uVar26);
      uVar6 = local_1a94;
      uVar31 = local_1a98;
    }
    if (uVar6 == 0) {
      uVar6 = 400;
    }
    uVar30 = iVar5 + 0x1b;
    uVar26 = uVar6;
    if ((int)uVar12 < (int)uVar6) {
      uVar26 = uVar12;
    }
    if (uVar31 == 0) {
      uVar31 = 0x2f8;
    }
    uVar23 = uVar31;
    if ((int)uVar11 < (int)uVar31) {
      uVar23 = uVar11;
    }
    if ((int)uVar11 < 0) {
      uVar23 = 0;
    }
    if ((int)uVar30 < (int)uVar31) {
      uVar31 = uVar30;
    }
    if ((int)uVar30 < 0) {
      uVar31 = 0;
    }
    if (10 < (int)uVar26) {
      if (9 < (int)uVar6) {
        uVar6 = 10;
      }
      do {
        uVar30 = uVar31;
        if ((int)uVar31 < (int)uVar23) {
          do {
            if ((-1 < (int)(uVar30 | uVar6)) && (local_175c != (void *)0x0)) {
              uVar11 = local_1a98;
              if (local_1a98 == 0) {
                uVar11 = 0x2f8;
              }
              if ((int)uVar30 < (int)uVar11) {
                uVar11 = local_1a94;
                if (local_1a94 == 0) {
                  uVar11 = 400;
                }
                if ((int)uVar6 < (int)uVar11) {
                  uVar11 = local_1a98 << 2;
                  if (local_1a98 == 0) {
                    uVar11 = 0xbe0;
                  }
                  if (local_1a90 != 0) {
                    uVar11 = local_1a90;
                  }
                  *(undefined1 *)((int)local_175c + uVar30 * 4 + uVar6 * uVar11) = 0;
                  *(undefined1 *)((int)local_175c + uVar30 * 4 + uVar6 * uVar11 + 1) = 0;
                  *(undefined1 *)((int)local_175c + uVar30 * 4 + uVar6 * uVar11 + 2) = 0;
                  *(undefined1 *)((int)local_175c + uVar30 * 4 + uVar6 * uVar11 + 3) = 0xff;
                }
              }
            }
            uVar30 = uVar30 + 1;
          } while (uVar23 != uVar30);
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 != uVar26);
    }
    if (0 < local_1688) {
      iVar5 = 0;
      local_1ab8 = 0;
      do {
        pbVar14 = &DAT_1000bef7;
        if (local_1758 != (void *)0x0) {
          iVar29 = local_168c + local_1ab8;
          pbVar14 = (byte *)((int)local_1758 +
                            (iVar29 + ((uint)((ulonglong)((longlong)iVar29 * 0x10624dd3) >> 0x26) -
                                      (iVar29 >> 0x1f)) * -1000) * 0x100);
        }
        iVar29 = recovered_1000ad40((int)&local_1a9c,pbVar14);
        if ((int)uVar21 < iVar29) {
          if (iVar5 < (int)uVar18) {
            local_1aac = local_1aac & 0xff000000;
            do {
              iVar15 = 0xc;
              if (0 < local_1730) {
                iVar15 = local_1730 + 2;
              }
              if ((int)uVar21 < 1) {
                iVar32 = 0;
LAB_10007d9c:
                uVar13 = strlen((char *)(pbVar14 + iVar32));
                if ((int)uVar9 < (int)uVar13) {
                  uVar13 = 0xffffffff;
                  uVar20 = 0;
                  do {
                    bVar25 = (pbVar14 + iVar32)[uVar20];
                    if (bVar25 == 0) break;
                    if (bVar25 == 9) {
                      uVar13 = uVar20;
                    }
                    if (bVar25 == 0x20) {
                      uVar13 = uVar20;
                    }
                    uVar20 = uVar20 + 1;
                  } while (uVar9 != uVar20);
                  if ((int)uVar13 < 1) {
                    uVar13 = uVar9;
                  }
                }
                if ((int)uVar13 < 1) {
                  uVar13 = uVar9;
                }
              }
              else {
                bVar25 = *pbVar14;
                uVar6 = 0;
                iVar32 = 0;
                do {
                  if (bVar25 == 0) break;
                  if (iVar32 < 0) {
                    uVar13 = 0;
                  }
                  else {
                    uVar13 = strlen((char *)(pbVar14 + iVar32));
                    if ((int)uVar9 < (int)uVar13) {
                      uVar13 = 0xffffffff;
                      uVar20 = 0;
                      do {
                        bVar25 = (pbVar14 + iVar32)[uVar20];
                        if (bVar25 == 0) break;
                        if (bVar25 == 9) {
                          uVar13 = uVar20;
                        }
                        if (bVar25 == 0x20) {
                          uVar13 = uVar20;
                        }
                        uVar20 = uVar20 + 1;
                      } while (uVar9 != uVar20);
                      if ((int)uVar13 < 1) {
                        uVar13 = uVar9;
                      }
                    }
                  }
                  for (iVar32 = uVar13 + iVar32; bVar25 = pbVar14[iVar32],
                      bVar25 == 0x20 || bVar25 == 9; iVar32 = iVar32 + 1) {
                  }
                  uVar6 = uVar6 + 1;
                } while (uVar6 != uVar21);
                if (-1 < iVar32) goto LAB_10007d9c;
                uVar13 = uVar9;
              }
              iVar15 = iVar15 * iVar5 + 0xc;
              if (local_1730 < 1) {
                if ((int)uVar7 < iVar15) goto LAB_10007e7c;
              }
              else if ((int)uVar12 < local_1730 + iVar15) goto LAB_10007e7c;
              recovered_1000bb20((int)&local_1a9c,0x20,iVar15,(char *)(pbVar14 + iVar32),uVar13,
                                 local_1aac);
              iVar5 = iVar5 + 1;
              uVar21 = uVar21 + 1;
              if (iVar29 <= (int)uVar21) {
                uVar21 = 0;
                goto LAB_10007c28;
              }
            } while (iVar5 < (int)uVar18);
          }
          uVar21 = 0;
        }
        else {
          uVar21 = uVar21 - iVar29;
        }
LAB_10007c28:
        local_1ab8 = local_1ab8 + 1;
        bVar38 = SBORROW4(local_1ab8,local_1688);
        iVar29 = local_1ab8 - local_1688;
        if (local_1ab8 < local_1688) {
          bVar38 = SBORROW4(iVar5,uVar18);
          iVar29 = iVar5 - uVar18;
        }
      } while (iVar29 < 0 != bVar38);
    }
LAB_10007e7c:
    iVar5 = 0xc;
    if (0 < local_1730) {
      iVar5 = local_1730 + 2;
    }
    uVar7 = local_1a94;
    if (local_1a94 == 0) {
      uVar7 = 400;
    }
    uVar6 = (uVar7 - iVar5) - 0x26;
    if (local_1730 < 1) {
      uVar26 = 0x10;
      bVar38 = SBORROW4(uVar6,0x10);
      iVar5 = (uVar7 - iVar5) + -0x36;
    }
    else {
      uVar26 = local_1730 + 6;
      bVar38 = SBORROW4(uVar6,uVar26);
      iVar5 = uVar6 - uVar26;
    }
    if (iVar5 < 0 != bVar38) {
      uVar6 = uVar26;
    }
    recovered_1000b830((undefined8 *)&local_464,(int)&local_1a9c);
    iVar5 = uVar6 - 0x22;
    if (uVar6 < 0x34) {
      iVar5 = 0x12;
    }
    uVar6 = iVar5 + 10;
    uVar7 = local_1a94;
    if (local_1a94 == 0) {
      uVar7 = 400;
    }
    uVar26 = uVar7;
    if ((int)uVar6 < (int)uVar7) {
      uVar26 = uVar6;
    }
    if (iVar5 < -10) {
      uVar26 = 0;
    }
    uVar21 = local_1a98;
    if (local_1a98 == 0) {
      uVar21 = 0x2f8;
    }
    uVar30 = 0x16;
    if ((int)uVar21 < 0x16) {
      uVar30 = uVar21;
    }
    if (9 < (int)uVar7) {
      uVar7 = 10;
    }
    uVar18 = 10;
    if ((int)uVar21 < 10) {
      uVar18 = uVar21;
    }
    if ((int)uVar7 < (int)uVar26) {
      do {
        uVar31 = uVar18;
        if (10 < (int)uVar21) {
          do {
            if ((-1 < (int)(uVar31 | uVar7)) && (local_175c != (void *)0x0)) {
              uVar11 = local_1a98;
              if (local_1a98 == 0) {
                uVar11 = 0x2f8;
              }
              if ((int)uVar31 < (int)uVar11) {
                uVar11 = local_1a94;
                if (local_1a94 == 0) {
                  uVar11 = 400;
                }
                if ((int)uVar7 < (int)uVar11) {
                  uVar11 = local_1a98 << 2;
                  if (local_1a98 == 0) {
                    uVar11 = 0xbe0;
                  }
                  if (local_1a90 != 0) {
                    uVar11 = local_1a90;
                  }
                  *(undefined1 *)((int)local_175c + uVar31 * 4 + uVar7 * uVar11) = 0xe4;
                  *(undefined1 *)((int)local_175c + uVar31 * 4 + uVar7 * uVar11 + 1) = 0xe4;
                  *(undefined1 *)((int)local_175c + uVar31 * 4 + uVar7 * uVar11 + 2) = 0xe4;
                  *(undefined1 *)((int)local_175c + uVar31 * 4 + uVar7 * uVar11 + 3) = 0xff;
                }
              }
            }
            uVar31 = uVar31 + 1;
          } while (uVar30 != uVar31);
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 != uVar26);
    }
    uVar7 = local_1a98;
    if (local_1a98 == 0) {
      uVar7 = 0x2f8;
    }
    uVar26 = 0x16;
    if ((int)uVar7 < 0x16) {
      uVar26 = uVar7;
    }
    if ((local_1a94 == 0 || 10 < (int)local_1a94) && (10 < (int)uVar7)) {
      iVar29 = 0;
      do {
        if (local_175c != (void *)0x0) {
          uVar7 = local_1a98;
          if (local_1a98 == 0) {
            uVar7 = 0x2f8;
          }
          if ((iVar29 + 10 < (int)uVar7) && ((local_1a94 == 0 || (10 < (int)local_1a94)))) {
            uVar7 = local_1a98 << 2;
            if (local_1a98 == 0) {
              uVar7 = 0xbe0;
            }
            if (local_1a90 != 0) {
              uVar7 = local_1a90;
            }
            *(undefined1 *)((int)local_175c + iVar29 * 4 + uVar7 * 10 + 0x28) = 0xac;
            *(undefined1 *)((int)local_175c + iVar29 * 4 + uVar7 * 10 + 0x29) = 0xac;
            *(undefined1 *)((int)local_175c + iVar29 * 4 + uVar7 * 10 + 0x2a) = 0xac;
            *(undefined1 *)((int)local_175c + iVar29 * 4 + uVar7 * 10 + 0x2b) = 0xff;
          }
        }
        iVar29 = iVar29 + 1;
      } while (uVar26 - 10 != iVar29);
    }
    uVar7 = local_1a98;
    if (local_1a98 == 0) {
      uVar7 = 0x2f8;
    }
    uVar26 = 0x16;
    if ((int)uVar7 < 0x16) {
      uVar26 = uVar7;
    }
    uVar21 = 10;
    if ((int)uVar7 < 10) {
      uVar21 = uVar7;
    }
    uVar30 = local_1a94;
    if (local_1a94 == 0) {
      uVar30 = 400;
    }
    uVar18 = uVar30;
    if ((int)uVar6 < (int)uVar30) {
      uVar18 = uVar6;
    }
    if (iVar5 < -10) {
      uVar18 = 0;
    }
    if ((int)(iVar5 + 9U) < (int)uVar30) {
      uVar30 = iVar5 + 9U;
    }
    if (iVar5 < -9) {
      uVar30 = 0;
    }
    if ((int)uVar30 < (int)uVar18) {
      do {
        uVar31 = uVar21;
        if (10 < (int)uVar7) {
          do {
            if ((-1 < (int)(uVar31 | uVar30)) && (local_175c != (void *)0x0)) {
              uVar11 = local_1a98;
              if (local_1a98 == 0) {
                uVar11 = 0x2f8;
              }
              if ((int)uVar31 < (int)uVar11) {
                uVar11 = local_1a94;
                if (local_1a94 == 0) {
                  uVar11 = 400;
                }
                if ((int)uVar30 < (int)uVar11) {
                  uVar11 = local_1a98 << 2;
                  if (local_1a98 == 0) {
                    uVar11 = 0xbe0;
                  }
                  if (local_1a90 != 0) {
                    uVar11 = local_1a90;
                  }
                  *(undefined1 *)((int)local_175c + uVar31 * 4 + uVar30 * uVar11) = 0xac;
                  *(undefined1 *)((int)local_175c + uVar31 * 4 + uVar30 * uVar11 + 1) = 0xac;
                  *(undefined1 *)((int)local_175c + uVar31 * 4 + uVar30 * uVar11 + 2) = 0xac;
                  *(undefined1 *)((int)local_175c + uVar31 * 4 + uVar30 * uVar11 + 3) = 0xff;
                }
              }
            }
            uVar31 = uVar31 + 1;
          } while (uVar26 != uVar31);
        }
        uVar30 = uVar30 + 1;
      } while (uVar30 != uVar18);
    }
    uVar7 = local_1a94;
    if (local_1a94 == 0) {
      uVar7 = 400;
    }
    uVar26 = 10;
    if ((int)uVar7 < 10) {
      uVar26 = uVar7;
    }
    uVar21 = local_1a98;
    if (local_1a98 == 0) {
      uVar21 = 0x2f8;
    }
    uVar30 = 10;
    if ((int)uVar21 < 10) {
      uVar30 = uVar21;
    }
    if ((int)uVar6 < (int)uVar7) {
      uVar7 = uVar6;
    }
    if (iVar5 < -10) {
      uVar7 = 0;
    }
    if ((int)uVar26 < (int)uVar7) {
      do {
        if ((((10 < (int)uVar21) && (-1 < (int)(uVar30 | uVar26))) && (local_175c != (void *)0x0))
           && ((local_1a98 == 0 || ((int)uVar30 < (int)local_1a98)))) {
          uVar18 = local_1a94;
          if (local_1a94 == 0) {
            uVar18 = 400;
          }
          if ((int)uVar26 < (int)uVar18) {
            uVar18 = local_1a98 << 2;
            if (local_1a98 == 0) {
              uVar18 = 0xbe0;
            }
            if (local_1a90 != 0) {
              uVar18 = local_1a90;
            }
            iVar29 = uVar18 * uVar26 + uVar30 * 4;
            *(undefined1 *)((int)local_175c + iVar29) = 0xac;
            *(undefined1 *)((int)local_175c + iVar29 + 1) = 0xac;
            *(undefined1 *)((int)local_175c + iVar29 + 2) = 0xac;
            *(undefined1 *)((int)local_175c + iVar29 + 3) = 0xff;
          }
        }
        uVar26 = uVar26 + 1;
      } while (uVar7 != uVar26);
    }
    uVar7 = local_1a94;
    if (local_1a94 == 0) {
      uVar7 = 400;
    }
    uVar26 = 10;
    if ((int)uVar7 < 10) {
      uVar26 = uVar7;
    }
    uVar21 = local_1a98;
    if (local_1a98 == 0) {
      uVar21 = 0x2f8;
    }
    uVar30 = 0x15;
    if ((int)uVar21 < 0x15) {
      uVar30 = uVar21;
    }
    if ((int)uVar6 < (int)uVar7) {
      uVar7 = uVar6;
    }
    if (iVar5 < -10) {
      uVar7 = 0;
    }
    if ((int)uVar26 < (int)uVar7) {
      do {
        if (((0x15 < (int)uVar21) && (-1 < (int)(uVar30 | uVar26))) &&
           ((local_175c != (void *)0x0 && ((local_1a98 == 0 || ((int)uVar30 < (int)local_1a98))))))
        {
          uVar6 = local_1a94;
          if (local_1a94 == 0) {
            uVar6 = 400;
          }
          if ((int)uVar26 < (int)uVar6) {
            uVar6 = local_1a98 << 2;
            if (local_1a98 == 0) {
              uVar6 = 0xbe0;
            }
            if (local_1a90 != 0) {
              uVar6 = local_1a90;
            }
            iVar5 = uVar6 * uVar26 + uVar30 * 4;
            *(undefined1 *)((int)local_175c + iVar5) = 0xac;
            *(undefined1 *)((int)local_175c + iVar5 + 1) = 0xac;
            *(undefined1 *)((int)local_175c + iVar5 + 2) = 0xac;
            *(undefined1 *)((int)local_175c + iVar5 + 3) = 0xff;
          }
        }
        uVar26 = uVar26 + 1;
      } while (uVar7 != uVar26);
    }
    if (0 < local_458) {
      uVar6 = local_460 + 1;
      uVar7 = local_1a94;
      if (local_1a94 == 0) {
        uVar7 = 400;
      }
      uVar21 = (local_458 + uVar6) - 2;
      uVar26 = uVar7;
      if ((int)uVar21 < (int)uVar7) {
        uVar26 = uVar21;
      }
      if ((int)uVar21 < 0) {
        uVar26 = 0;
      }
      if ((int)uVar6 < (int)uVar7) {
        uVar7 = uVar6;
      }
      if ((int)local_460 < -1) {
        uVar7 = 0;
      }
      uVar21 = local_1a98;
      if (local_1a98 == 0) {
        uVar21 = 0x2f8;
      }
      uVar18 = local_464 + 1;
      uVar31 = local_464 + local_45c;
      uVar30 = uVar21;
      if ((int)uVar18 < (int)uVar21) {
        uVar30 = uVar18;
      }
      uVar11 = uVar31 - 1;
      if ((int)local_464 < -1) {
        uVar30 = 0;
      }
      if ((int)uVar11 < (int)uVar21) {
        uVar21 = uVar11;
      }
      if ((int)uVar11 < 0) {
        uVar21 = 0;
      }
      if ((int)uVar7 < (int)uVar26) {
        do {
          uVar23 = uVar30;
          if ((int)uVar30 < (int)uVar21) {
            do {
              if ((-1 < (int)(uVar23 | uVar7)) && (local_175c != (void *)0x0)) {
                uVar12 = local_1a98;
                if (local_1a98 == 0) {
                  uVar12 = 0x2f8;
                }
                if ((int)uVar23 < (int)uVar12) {
                  uVar12 = local_1a94;
                  if (local_1a94 == 0) {
                    uVar12 = 400;
                  }
                  if ((int)uVar7 < (int)uVar12) {
                    uVar12 = local_1a98 << 2;
                    if (local_1a98 == 0) {
                      uVar12 = 0xbe0;
                    }
                    if (local_1a90 != 0) {
                      uVar12 = local_1a90;
                    }
                    *(undefined1 *)((int)local_175c + uVar23 * 4 + uVar7 * uVar12) = 0xbe;
                    *(undefined1 *)((int)local_175c + uVar23 * 4 + uVar7 * uVar12 + 1) = 0xbe;
                    *(undefined1 *)((int)local_175c + uVar23 * 4 + uVar7 * uVar12 + 2) = 0xbe;
                    *(undefined1 *)((int)local_175c + uVar23 * 4 + uVar7 * uVar12 + 3) = 0xff;
                  }
                }
              }
              uVar23 = uVar23 + 1;
            } while (uVar21 != uVar23);
          }
          uVar7 = uVar7 + 1;
        } while (uVar7 != uVar26);
      }
      uVar7 = local_1a98;
      if (local_1a98 == 0) {
        uVar7 = 0x2f8;
      }
      uVar26 = uVar7;
      if ((int)uVar31 < (int)uVar7) {
        uVar26 = uVar31;
      }
      if ((int)uVar31 < 0) {
        uVar26 = 0;
      }
      uVar21 = local_1a94;
      if (local_1a94 == 0) {
        uVar21 = 400;
      }
      if ((int)uVar21 <= (int)uVar6) {
        uVar6 = uVar21;
      }
      if ((int)local_460 < -1) {
        uVar6 = 0;
      }
      if ((int)local_460 < (int)uVar21) {
        uVar21 = local_460;
      }
      if ((int)local_460 < 0) {
        uVar21 = 0;
      }
      if ((int)local_464 < (int)uVar7) {
        uVar7 = local_464;
      }
      if ((int)local_464 < 0) {
        uVar7 = 0;
      }
      if ((int)uVar21 < (int)uVar6) {
        do {
          uVar30 = uVar7;
          if ((int)uVar7 < (int)uVar26) {
            do {
              if ((-1 < (int)(uVar30 | uVar21)) && (local_175c != (void *)0x0)) {
                uVar23 = local_1a98;
                if (local_1a98 == 0) {
                  uVar23 = 0x2f8;
                }
                if ((int)uVar30 < (int)uVar23) {
                  uVar23 = local_1a94;
                  if (local_1a94 == 0) {
                    uVar23 = 400;
                  }
                  if ((int)uVar21 < (int)uVar23) {
                    uVar23 = local_1a98 << 2;
                    if (local_1a98 == 0) {
                      uVar23 = 0xbe0;
                    }
                    if (local_1a90 != 0) {
                      uVar23 = local_1a90;
                    }
                    *(undefined1 *)((int)local_175c + uVar30 * 4 + uVar21 * uVar23) = 0x74;
                    *(undefined1 *)((int)local_175c + uVar30 * 4 + uVar21 * uVar23 + 1) = 0x74;
                    *(undefined1 *)((int)local_175c + uVar30 * 4 + uVar21 * uVar23 + 2) = 0x74;
                    *(undefined1 *)((int)local_175c + uVar30 * 4 + uVar21 * uVar23 + 3) = 0xff;
                  }
                }
              }
              uVar30 = uVar30 + 1;
            } while (uVar26 != uVar30);
          }
          uVar21 = uVar21 + 1;
        } while (uVar21 != uVar6);
      }
      uVar7 = local_1a94;
      if (local_1a94 == 0) {
        uVar7 = 400;
      }
      uVar21 = local_460 + local_458;
      uVar26 = uVar21 - 1;
      uVar6 = uVar7;
      if ((int)uVar21 < (int)uVar7) {
        uVar6 = uVar21;
      }
      if ((int)uVar21 < 0) {
        uVar6 = 0;
      }
      if ((int)uVar26 < (int)uVar7) {
        uVar7 = uVar26;
      }
      if ((int)uVar26 < 0) {
        uVar7 = 0;
      }
      uVar26 = local_1a98;
      if (local_1a98 == 0) {
        uVar26 = 0x2f8;
      }
      uVar30 = uVar26;
      if ((int)uVar31 < (int)uVar26) {
        uVar30 = uVar31;
      }
      if ((int)uVar31 < 0) {
        uVar30 = 0;
      }
      if ((int)local_464 < (int)uVar26) {
        uVar26 = local_464;
      }
      if ((int)local_464 < 0) {
        uVar26 = 0;
      }
      if ((int)uVar7 < (int)uVar6) {
        do {
          uVar23 = uVar26;
          if ((int)uVar26 < (int)uVar30) {
            do {
              if ((-1 < (int)(uVar23 | uVar7)) && (local_175c != (void *)0x0)) {
                uVar12 = local_1a98;
                if (local_1a98 == 0) {
                  uVar12 = 0x2f8;
                }
                if ((int)uVar23 < (int)uVar12) {
                  uVar12 = local_1a94;
                  if (local_1a94 == 0) {
                    uVar12 = 400;
                  }
                  if ((int)uVar7 < (int)uVar12) {
                    uVar12 = local_1a98 << 2;
                    if (local_1a98 == 0) {
                      uVar12 = 0xbe0;
                    }
                    if (local_1a90 != 0) {
                      uVar12 = local_1a90;
                    }
                    *(undefined1 *)((int)local_175c + uVar23 * 4 + uVar7 * uVar12) = 0x74;
                    *(undefined1 *)((int)local_175c + uVar23 * 4 + uVar7 * uVar12 + 1) = 0x74;
                    *(undefined1 *)((int)local_175c + uVar23 * 4 + uVar7 * uVar12 + 2) = 0x74;
                    *(undefined1 *)((int)local_175c + uVar23 * 4 + uVar7 * uVar12 + 3) = 0xff;
                  }
                }
              }
              uVar23 = uVar23 + 1;
            } while (uVar30 != uVar23);
          }
          uVar7 = uVar7 + 1;
        } while (uVar7 != uVar6);
      }
      uVar7 = local_1a94;
      if (local_1a94 == 0) {
        uVar7 = 400;
      }
      uVar6 = uVar7;
      if ((int)uVar21 < (int)uVar7) {
        uVar6 = uVar21;
      }
      if ((int)uVar21 < 0) {
        uVar6 = 0;
      }
      uVar26 = local_1a98;
      if (local_1a98 == 0) {
        uVar26 = 0x2f8;
      }
      if ((int)uVar26 <= (int)uVar18) {
        uVar18 = uVar26;
      }
      if ((int)local_464 < -1) {
        uVar18 = 0;
      }
      if ((int)local_460 < (int)uVar7) {
        uVar7 = local_460;
      }
      if ((int)local_460 < 0) {
        uVar7 = 0;
      }
      if ((int)local_464 < (int)uVar26) {
        uVar26 = local_464;
      }
      if ((int)local_464 < 0) {
        uVar26 = 0;
      }
      if ((int)uVar7 < (int)uVar6) {
        do {
          uVar30 = uVar26;
          if ((int)uVar26 < (int)uVar18) {
            do {
              if ((-1 < (int)(uVar30 | uVar7)) && (local_175c != (void *)0x0)) {
                uVar23 = local_1a98;
                if (local_1a98 == 0) {
                  uVar23 = 0x2f8;
                }
                if ((int)uVar30 < (int)uVar23) {
                  uVar23 = local_1a94;
                  if (local_1a94 == 0) {
                    uVar23 = 400;
                  }
                  if ((int)uVar7 < (int)uVar23) {
                    uVar23 = local_1a98 << 2;
                    if (local_1a98 == 0) {
                      uVar23 = 0xbe0;
                    }
                    if (local_1a90 != 0) {
                      uVar23 = local_1a90;
                    }
                    *(undefined1 *)((int)local_175c + uVar30 * 4 + uVar7 * uVar23) = 0x74;
                    *(undefined1 *)((int)local_175c + uVar30 * 4 + uVar7 * uVar23 + 1) = 0x74;
                    *(undefined1 *)((int)local_175c + uVar30 * 4 + uVar7 * uVar23 + 2) = 0x74;
                    *(undefined1 *)((int)local_175c + uVar30 * 4 + uVar7 * uVar23 + 3) = 0xff;
                  }
                }
              }
              uVar30 = uVar30 + 1;
            } while (uVar18 != uVar30);
          }
          uVar7 = uVar7 + 1;
        } while (uVar7 != uVar6);
      }
      uVar7 = local_1a94;
      if (local_1a94 == 0) {
        uVar7 = 400;
      }
      uVar6 = uVar7;
      if ((int)uVar21 < (int)uVar7) {
        uVar6 = uVar21;
      }
      if ((int)uVar21 < 0) {
        uVar6 = 0;
      }
      uVar26 = local_1a98;
      if (local_1a98 == 0) {
        uVar26 = 0x2f8;
      }
      uVar21 = uVar26;
      if ((int)uVar31 < (int)uVar26) {
        uVar21 = uVar31;
      }
      if ((int)uVar31 < 0) {
        uVar21 = 0;
      }
      if ((int)local_460 < (int)uVar7) {
        uVar7 = local_460;
      }
      if ((int)local_460 < 0) {
        uVar7 = 0;
      }
      if ((int)uVar11 < (int)uVar26) {
        uVar26 = uVar11;
      }
      if ((int)uVar11 < 0) {
        uVar26 = 0;
      }
      if ((int)uVar7 < (int)uVar6) {
        do {
          uVar30 = uVar26;
          if ((int)uVar26 < (int)uVar21) {
            do {
              if ((-1 < (int)(uVar30 | uVar7)) && (local_175c != (void *)0x0)) {
                uVar18 = local_1a98;
                if (local_1a98 == 0) {
                  uVar18 = 0x2f8;
                }
                if ((int)uVar30 < (int)uVar18) {
                  uVar18 = local_1a94;
                  if (local_1a94 == 0) {
                    uVar18 = 400;
                  }
                  if ((int)uVar7 < (int)uVar18) {
                    uVar18 = local_1a98 << 2;
                    if (local_1a98 == 0) {
                      uVar18 = 0xbe0;
                    }
                    if (local_1a90 != 0) {
                      uVar18 = local_1a90;
                    }
                    *(undefined1 *)((int)local_175c + uVar30 * 4 + uVar7 * uVar18) = 0x74;
                    *(undefined1 *)((int)local_175c + uVar30 * 4 + uVar7 * uVar18 + 1) = 0x74;
                    *(undefined1 *)((int)local_175c + uVar30 * 4 + uVar7 * uVar18 + 2) = 0x74;
                    *(undefined1 *)((int)local_175c + uVar30 * 4 + uVar7 * uVar18 + 3) = 0xff;
                  }
                }
              }
              uVar30 = uVar30 + 1;
            } while (uVar21 != uVar30);
          }
          uVar7 = uVar7 + 1;
        } while (uVar7 != uVar6);
      }
    }
    iVar5 = 0xc;
    if (0 < local_1730) {
      iVar5 = local_1730 + 2;
    }
    uVar7 = local_1a94;
    if (local_1a94 == 0) {
      uVar7 = 400;
    }
    uVar6 = (uVar7 - iVar5) - 0x26;
    if (local_1730 < 1) {
      if ((int)uVar6 < 0x10) {
        uVar6 = 0x10;
      }
    }
    else if ((int)uVar6 < (int)(local_1730 + 6U)) {
      uVar6 = local_1730 + 6U;
    }
    uVar26 = uVar6 - 6;
    if ((int)uVar7 <= (int)(uVar6 - 6)) {
      uVar26 = uVar7;
    }
    uVar21 = local_1a98;
    if (local_1a98 == 0) {
      uVar21 = 0x2f8;
    }
    uVar30 = 0x16;
    if ((int)uVar21 < 0x16) {
      uVar30 = uVar21;
    }
    if ((int)(uVar6 - 0x14) < (int)uVar7) {
      uVar7 = uVar6 - 0x14;
    }
    if (uVar6 < 0x14) {
      uVar7 = 0;
    }
    uVar6 = 10;
    if ((int)uVar21 < 10) {
      uVar6 = uVar21;
    }
    if ((int)uVar7 < (int)uVar26) {
      do {
        uVar18 = uVar6;
        if (10 < (int)uVar21) {
          do {
            if ((-1 < (int)(uVar18 | uVar7)) && (local_175c != (void *)0x0)) {
              uVar31 = local_1a98;
              if (local_1a98 == 0) {
                uVar31 = 0x2f8;
              }
              if ((int)uVar18 < (int)uVar31) {
                uVar31 = local_1a94;
                if (local_1a94 == 0) {
                  uVar31 = 400;
                }
                if ((int)uVar7 < (int)uVar31) {
                  uVar31 = local_1a98 << 2;
                  if (local_1a98 == 0) {
                    uVar31 = 0xbe0;
                  }
                  if (local_1a90 != 0) {
                    uVar31 = local_1a90;
                  }
                  *(undefined1 *)((int)local_175c + uVar18 * 4 + uVar7 * uVar31) = 0xee;
                  *(undefined1 *)((int)local_175c + uVar18 * 4 + uVar7 * uVar31 + 1) = 0xee;
                  *(undefined1 *)((int)local_175c + uVar18 * 4 + uVar7 * uVar31 + 2) = 0xee;
                  *(undefined1 *)((int)local_175c + uVar18 * 4 + uVar7 * uVar31 + 3) = 0xff;
                }
              }
            }
            uVar18 = uVar18 + 1;
          } while (uVar30 != uVar18);
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 != uVar26);
    }
    iVar5 = local_1730 + 2;
    if (local_1730 < 1) {
      iVar5 = 0xc;
    }
    uVar7 = local_1a94;
    if (local_1a94 == 0) {
      uVar7 = 400;
    }
    uVar6 = (uVar7 - iVar5) - 0x26;
    if (local_1730 < 1) {
      if ((int)uVar6 < 0x10) {
        uVar6 = 0x10;
      }
    }
    else if ((int)uVar6 < (int)(local_1730 + 6U)) {
      uVar6 = local_1730 + 6U;
    }
    uVar21 = uVar6 - 0x14;
    uVar26 = uVar6 - 0x13;
    if ((int)uVar7 <= (int)(uVar6 - 0x13)) {
      uVar26 = uVar7;
    }
    if (uVar6 < 0x13) {
      uVar26 = 0;
    }
    uVar30 = local_1a98;
    if (local_1a98 == 0) {
      uVar30 = 0x2f8;
    }
    uVar18 = 0x16;
    if ((int)uVar30 < 0x16) {
      uVar18 = uVar30;
    }
    if ((int)uVar21 < (int)uVar7) {
      uVar7 = uVar21;
    }
    if (uVar6 < 0x14) {
      uVar7 = 0;
    }
    uVar31 = 10;
    if ((int)uVar30 < 10) {
      uVar31 = uVar30;
    }
    if ((int)uVar7 < (int)uVar26) {
      do {
        uVar11 = uVar31;
        if (10 < (int)uVar30) {
          do {
            if ((-1 < (int)(uVar11 | uVar7)) && (local_175c != (void *)0x0)) {
              uVar23 = local_1a98;
              if (local_1a98 == 0) {
                uVar23 = 0x2f8;
              }
              if ((int)uVar11 < (int)uVar23) {
                uVar23 = local_1a94;
                if (local_1a94 == 0) {
                  uVar23 = 400;
                }
                if ((int)uVar7 < (int)uVar23) {
                  uVar23 = local_1a98 << 2;
                  if (local_1a98 == 0) {
                    uVar23 = 0xbe0;
                  }
                  if (local_1a90 != 0) {
                    uVar23 = local_1a90;
                  }
                  *(undefined1 *)((int)local_175c + uVar11 * 4 + uVar7 * uVar23) = 0x96;
                  *(undefined1 *)((int)local_175c + uVar11 * 4 + uVar7 * uVar23 + 1) = 0x96;
                  *(undefined1 *)((int)local_175c + uVar11 * 4 + uVar7 * uVar23 + 2) = 0x96;
                  *(undefined1 *)((int)local_175c + uVar11 * 4 + uVar7 * uVar23 + 3) = 0xff;
                }
              }
            }
            uVar11 = uVar11 + 1;
          } while (uVar18 != uVar11);
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 != uVar26);
    }
    uVar7 = local_1a98;
    if (local_1a98 == 0) {
      uVar7 = 0x2f8;
    }
    uVar26 = 0x16;
    if ((int)uVar7 < 0x16) {
      uVar26 = uVar7;
    }
    uVar30 = 10;
    if ((int)uVar7 < 10) {
      uVar30 = uVar7;
    }
    uVar31 = uVar6 - 6;
    uVar18 = local_1a94;
    if (local_1a94 == 0) {
      uVar18 = 400;
    }
    uVar11 = uVar18;
    if ((int)uVar31 < (int)uVar18) {
      uVar11 = uVar31;
    }
    if ((int)uVar6 < 6) {
      uVar11 = 0;
    }
    if ((int)(uVar6 - 7) < (int)uVar18) {
      uVar18 = uVar6 - 7;
    }
    if ((int)uVar6 < 7) {
      uVar18 = 0;
    }
    if ((int)uVar18 < (int)uVar11) {
      do {
        uVar23 = uVar30;
        if (10 < (int)uVar7) {
          do {
            if ((-1 < (int)(uVar23 | uVar18)) && (local_175c != (void *)0x0)) {
              uVar12 = local_1a98;
              if (local_1a98 == 0) {
                uVar12 = 0x2f8;
              }
              if ((int)uVar23 < (int)uVar12) {
                uVar12 = local_1a94;
                if (local_1a94 == 0) {
                  uVar12 = 400;
                }
                if ((int)uVar18 < (int)uVar12) {
                  uVar12 = local_1a98 << 2;
                  if (local_1a98 == 0) {
                    uVar12 = 0xbe0;
                  }
                  if (local_1a90 != 0) {
                    uVar12 = local_1a90;
                  }
                  *(undefined1 *)((int)local_175c + uVar23 * 4 + uVar18 * uVar12) = 0x96;
                  *(undefined1 *)((int)local_175c + uVar23 * 4 + uVar18 * uVar12 + 1) = 0x96;
                  *(undefined1 *)((int)local_175c + uVar23 * 4 + uVar18 * uVar12 + 2) = 0x96;
                  *(undefined1 *)((int)local_175c + uVar23 * 4 + uVar18 * uVar12 + 3) = 0xff;
                }
              }
            }
            uVar23 = uVar23 + 1;
          } while (uVar26 != uVar23);
        }
        uVar18 = uVar18 + 1;
      } while (uVar18 != uVar11);
    }
    uVar7 = local_1a98;
    if (local_1a98 == 0) {
      uVar7 = 0x2f8;
    }
    uVar26 = 10;
    if ((int)uVar7 < 10) {
      uVar26 = uVar7;
    }
    uVar30 = local_1a94;
    if (local_1a94 == 0) {
      uVar30 = 400;
    }
    uVar18 = uVar30;
    if ((int)uVar31 < (int)uVar30) {
      uVar18 = uVar31;
    }
    if ((int)uVar6 < 6) {
      uVar18 = 0;
    }
    if ((int)uVar21 < (int)uVar30) {
      uVar30 = uVar21;
    }
    if (uVar6 < 0x14) {
      uVar30 = 0;
    }
    if ((int)uVar30 < (int)uVar18) {
      do {
        if ((((10 < (int)uVar7) && (-1 < (int)(uVar26 | uVar30))) && (local_175c != (void *)0x0)) &&
           ((local_1a98 == 0 || ((int)uVar26 < (int)local_1a98)))) {
          uVar11 = local_1a94;
          if (local_1a94 == 0) {
            uVar11 = 400;
          }
          if ((int)uVar30 < (int)uVar11) {
            uVar11 = local_1a98 << 2;
            if (local_1a98 == 0) {
              uVar11 = 0xbe0;
            }
            if (local_1a90 != 0) {
              uVar11 = local_1a90;
            }
            iVar5 = uVar11 * uVar30 + uVar26 * 4;
            *(undefined1 *)((int)local_175c + iVar5) = 0x96;
            *(undefined1 *)((int)local_175c + iVar5 + 1) = 0x96;
            *(undefined1 *)((int)local_175c + iVar5 + 2) = 0x96;
            *(undefined1 *)((int)local_175c + iVar5 + 3) = 0xff;
          }
        }
        uVar30 = uVar30 + 1;
      } while (uVar18 != uVar30);
    }
    uVar7 = local_1a98;
    if (local_1a98 == 0) {
      uVar7 = 0x2f8;
    }
    uVar26 = 0x15;
    if ((int)uVar7 < 0x15) {
      uVar26 = uVar7;
    }
    uVar30 = local_1a94;
    if (local_1a94 == 0) {
      uVar30 = 400;
    }
    if ((int)uVar30 <= (int)uVar31) {
      uVar31 = uVar30;
    }
    if ((int)uVar6 < 6) {
      uVar31 = 0;
    }
    if ((int)uVar21 < (int)uVar30) {
      uVar30 = uVar21;
    }
    if (uVar6 < 0x14) {
      uVar30 = 0;
    }
    if ((int)uVar30 < (int)uVar31) {
      do {
        if (((0x15 < (int)uVar7) && (-1 < (int)(uVar26 | uVar30))) &&
           ((local_175c != (void *)0x0 && ((local_1a98 == 0 || ((int)uVar26 < (int)local_1a98))))))
        {
          uVar6 = local_1a94;
          if (local_1a94 == 0) {
            uVar6 = 400;
          }
          if ((int)uVar30 < (int)uVar6) {
            uVar6 = local_1a98 << 2;
            if (local_1a98 == 0) {
              uVar6 = 0xbe0;
            }
            if (local_1a90 != 0) {
              uVar6 = local_1a90;
            }
            iVar5 = uVar6 * uVar30 + uVar26 * 4;
            *(undefined1 *)((int)local_175c + iVar5) = 0x96;
            *(undefined1 *)((int)local_175c + iVar5 + 1) = 0x96;
            *(undefined1 *)((int)local_175c + iVar5 + 2) = 0x96;
            *(undefined1 *)((int)local_175c + iVar5 + 3) = 0xff;
          }
        }
        uVar30 = uVar30 + 1;
      } while (uVar31 != uVar30);
    }
    iVar5 = 0xc;
    if (0 < local_1730) {
      iVar5 = local_1730 + 2;
    }
    uVar7 = local_1a94;
    if (local_1a94 == 0) {
      uVar7 = 400;
    }
    uVar6 = (uVar7 - iVar5) - 0x26;
    if (local_1730 < 1) {
      if ((int)uVar6 < 0x10) {
        uVar6 = 0x10;
      }
    }
    else if ((int)uVar6 < (int)(local_1730 + 6U)) {
      uVar6 = local_1730 + 6U;
    }
    uVar21 = uVar6 - 0x10;
    uVar26 = uVar7;
    if ((int)uVar21 < (int)uVar7) {
      uVar26 = uVar21;
    }
    if (uVar6 < 0x10) {
      uVar26 = 0;
    }
    if ((int)(uVar6 - 0x11) < (int)uVar7) {
      uVar7 = uVar6 - 0x11;
    }
    if (uVar6 < 0x11) {
      uVar7 = 0;
    }
    uVar30 = local_1a98;
    if (local_1a98 == 0) {
      uVar30 = 0x2f8;
    }
    uVar18 = 0x10;
    if ((int)uVar30 < 0x10) {
      uVar18 = uVar30;
    }
    if ((int)uVar7 < (int)uVar26) {
      do {
        if ((((0x10 < (int)uVar30) && (-1 < (int)(uVar18 | uVar7))) && (local_175c != (void *)0x0))
           && ((local_1a98 == 0 || ((int)uVar18 < (int)local_1a98)))) {
          uVar31 = local_1a94;
          if (local_1a94 == 0) {
            uVar31 = 400;
          }
          if ((int)uVar7 < (int)uVar31) {
            uVar31 = local_1a98 << 2;
            if (local_1a98 == 0) {
              uVar31 = 0xbe0;
            }
            if (local_1a90 != 0) {
              uVar31 = local_1a90;
            }
            iVar5 = uVar31 * uVar7 + uVar18 * 4;
            *(undefined1 *)((int)local_175c + iVar5) = 0x46;
            *(undefined1 *)((int)local_175c + iVar5 + 1) = 0x46;
            *(undefined1 *)((int)local_175c + iVar5 + 2) = 0x46;
            *(undefined1 *)((int)local_175c + iVar5 + 3) = 0xff;
          }
        }
        uVar7 = uVar7 + 1;
      } while (uVar26 != uVar7);
    }
    uVar7 = local_1a98;
    if (local_1a98 == 0) {
      uVar7 = 0x2f8;
    }
    uVar26 = 0x12;
    if ((int)uVar7 < 0x12) {
      uVar26 = uVar7;
    }
    uVar30 = 0xf;
    if ((int)uVar7 < 0xf) {
      uVar30 = uVar7;
    }
    uVar31 = uVar6 - 0xf;
    uVar18 = local_1a94;
    if (local_1a94 == 0) {
      uVar18 = 400;
    }
    uVar11 = uVar18;
    if ((int)uVar31 < (int)uVar18) {
      uVar11 = uVar31;
    }
    if ((int)uVar6 < 0xf) {
      uVar11 = 0;
    }
    if ((int)uVar21 < (int)uVar18) {
      uVar18 = uVar21;
    }
    if (uVar6 < 0x10) {
      uVar18 = 0;
    }
    if ((int)uVar18 < (int)uVar11) {
      uVar23 = uVar30 + 2;
      uVar21 = uVar30 + 1;
      do {
        if (0xf < (int)uVar7) {
          if (((-1 < (int)(uVar30 | uVar18)) && (local_175c != (void *)0x0)) &&
             ((local_1a98 == 0 || ((int)uVar30 < (int)local_1a98)))) {
            uVar12 = local_1a94;
            if (local_1a94 == 0) {
              uVar12 = 400;
            }
            if ((int)uVar18 < (int)uVar12) {
              uVar12 = local_1a98 << 2;
              if (local_1a98 == 0) {
                uVar12 = 0xbe0;
              }
              if (local_1a90 != 0) {
                uVar12 = local_1a90;
              }
              iVar5 = uVar12 * uVar18 + uVar30 * 4;
              *(undefined1 *)((int)local_175c + iVar5) = 0x46;
              *(undefined1 *)((int)local_175c + iVar5 + 1) = 0x46;
              *(undefined1 *)((int)local_175c + iVar5 + 2) = 0x46;
              *(undefined1 *)((int)local_175c + iVar5 + 3) = 0xff;
            }
          }
          if (uVar21 != uVar26) {
            if ((-1 < (int)(uVar21 | uVar18)) && (local_175c != (void *)0x0)) {
              uVar12 = local_1a98;
              if (local_1a98 == 0) {
                uVar12 = 0x2f8;
              }
              if ((int)uVar21 < (int)uVar12) {
                uVar12 = local_1a94;
                if (local_1a94 == 0) {
                  uVar12 = 400;
                }
                if ((int)uVar18 < (int)uVar12) {
                  uVar12 = local_1a98 << 2;
                  if (local_1a98 == 0) {
                    uVar12 = 0xbe0;
                  }
                  if (local_1a90 != 0) {
                    uVar12 = local_1a90;
                  }
                  iVar5 = uVar12 * uVar18 + uVar21 * 4;
                  *(undefined1 *)((int)local_175c + iVar5) = 0x46;
                  *(undefined1 *)((int)local_175c + iVar5 + 1) = 0x46;
                  *(undefined1 *)((int)local_175c + iVar5 + 2) = 0x46;
                  *(undefined1 *)((int)local_175c + iVar5 + 3) = 0xff;
                }
              }
            }
            if (((uVar23 != uVar26) && (-1 < (int)(uVar23 | uVar18))) && (local_175c != (void *)0x0)
               ) {
              uVar12 = local_1a98;
              if (local_1a98 == 0) {
                uVar12 = 0x2f8;
              }
              if ((int)uVar23 < (int)uVar12) {
                uVar12 = local_1a94;
                if (local_1a94 == 0) {
                  uVar12 = 400;
                }
                if ((int)uVar18 < (int)uVar12) {
                  uVar12 = local_1a98 << 2;
                  if (local_1a98 == 0) {
                    uVar12 = 0xbe0;
                  }
                  if (local_1a90 != 0) {
                    uVar12 = local_1a90;
                  }
                  iVar5 = uVar12 * uVar18 + uVar23 * 4;
                  *(undefined1 *)((int)local_175c + iVar5) = 0x46;
                  *(undefined1 *)((int)local_175c + iVar5 + 1) = 0x46;
                  *(undefined1 *)((int)local_175c + iVar5 + 2) = 0x46;
                  *(undefined1 *)((int)local_175c + iVar5 + 3) = 0xff;
                }
              }
            }
          }
        }
        uVar18 = uVar18 + 1;
      } while (uVar11 != uVar18);
    }
    uVar7 = local_1a98;
    if (local_1a98 == 0) {
      uVar7 = 0x2f8;
    }
    uVar26 = 0x13;
    if ((int)uVar7 < 0x13) {
      uVar26 = uVar7;
    }
    uVar21 = 0xe;
    if ((int)uVar7 < 0xe) {
      uVar21 = uVar7;
    }
    uVar18 = uVar6 - 0xe;
    uVar30 = local_1a94;
    if (local_1a94 == 0) {
      uVar30 = 400;
    }
    uVar11 = uVar30;
    if ((int)uVar18 < (int)uVar30) {
      uVar11 = uVar18;
    }
    if ((int)uVar6 < 0xe) {
      uVar11 = 0;
    }
    if ((int)uVar31 < (int)uVar30) {
      uVar30 = uVar31;
    }
    if ((int)uVar6 < 0xf) {
      uVar30 = 0;
    }
    if ((int)uVar30 < (int)uVar11) {
      do {
        uVar31 = uVar21;
        if (0xe < (int)uVar7) {
          do {
            if ((-1 < (int)(uVar31 | uVar30)) && (local_175c != (void *)0x0)) {
              uVar23 = local_1a98;
              if (local_1a98 == 0) {
                uVar23 = 0x2f8;
              }
              if ((int)uVar31 < (int)uVar23) {
                uVar23 = local_1a94;
                if (local_1a94 == 0) {
                  uVar23 = 400;
                }
                if ((int)uVar30 < (int)uVar23) {
                  uVar23 = local_1a98 << 2;
                  if (local_1a98 == 0) {
                    uVar23 = 0xbe0;
                  }
                  if (local_1a90 != 0) {
                    uVar23 = local_1a90;
                  }
                  *(undefined1 *)((int)local_175c + uVar31 * 4 + uVar30 * uVar23) = 0x46;
                  *(undefined1 *)((int)local_175c + uVar31 * 4 + uVar30 * uVar23 + 1) = 0x46;
                  *(undefined1 *)((int)local_175c + uVar31 * 4 + uVar30 * uVar23 + 2) = 0x46;
                  *(undefined1 *)((int)local_175c + uVar31 * 4 + uVar30 * uVar23 + 3) = 0xff;
                }
              }
            }
            uVar31 = uVar31 + 1;
          } while (uVar26 != uVar31);
        }
        uVar30 = uVar30 + 1;
      } while (uVar30 != uVar11);
    }
    uVar7 = local_1a98;
    if (local_1a98 == 0) {
      uVar7 = 0x2f8;
    }
    uVar26 = 0x14;
    if ((int)uVar7 < 0x14) {
      uVar26 = uVar7;
    }
    uVar21 = uVar7;
    if (0xc < (int)uVar7) {
      uVar21 = 0xd;
    }
    uVar30 = local_1a94;
    if (local_1a94 == 0) {
      uVar30 = 400;
    }
    uVar31 = uVar6 - 0xd;
    if ((int)uVar30 <= (int)(uVar6 - 0xd)) {
      uVar31 = uVar30;
    }
    if ((int)uVar6 < 0xd) {
      uVar31 = 0;
    }
    if ((int)uVar18 < (int)uVar30) {
      uVar30 = uVar18;
    }
    if ((int)uVar6 < 0xe) {
      uVar30 = 0;
    }
    if ((int)uVar30 < (int)uVar31) {
      do {
        uVar6 = uVar21;
        if (0xd < (int)uVar7) {
          do {
            if ((-1 < (int)(uVar6 | uVar30)) && (local_175c != (void *)0x0)) {
              uVar18 = local_1a98;
              if (local_1a98 == 0) {
                uVar18 = 0x2f8;
              }
              if ((int)uVar6 < (int)uVar18) {
                uVar18 = local_1a94;
                if (local_1a94 == 0) {
                  uVar18 = 400;
                }
                if ((int)uVar30 < (int)uVar18) {
                  uVar18 = local_1a98 << 2;
                  if (local_1a98 == 0) {
                    uVar18 = 0xbe0;
                  }
                  if (local_1a90 != 0) {
                    uVar18 = local_1a90;
                  }
                  *(undefined1 *)((int)local_175c + uVar6 * 4 + uVar30 * uVar18) = 0x46;
                  *(undefined1 *)((int)local_175c + uVar6 * 4 + uVar30 * uVar18 + 1) = 0x46;
                  *(undefined1 *)((int)local_175c + uVar6 * 4 + uVar30 * uVar18 + 2) = 0x46;
                  *(undefined1 *)((int)local_175c + uVar6 * 4 + uVar30 * uVar18 + 3) = 0xff;
                }
              }
            }
            uVar6 = uVar6 + 1;
          } while (uVar26 != uVar6);
        }
        uVar30 = uVar30 + 1;
      } while (uVar30 != uVar31);
    }
    iVar5 = 0xc;
    if (0 < local_1730) {
      iVar5 = local_1730 + 2;
    }
    uVar7 = local_1a94;
    if (local_1a94 == 0) {
      uVar7 = 400;
    }
    iVar5 = (uVar7 - iVar5) + -0x26;
    if (local_1730 < 1) {
      if (iVar5 < 0x10) {
        iVar5 = 0x10;
      }
    }
    else if (iVar5 < local_1730 + 6) {
      iVar5 = local_1730 + 6;
    }
    uVar6 = iVar5 + 10U;
    if ((int)uVar7 <= (int)(iVar5 + 10U)) {
      uVar6 = uVar7;
    }
    uVar26 = local_1a98;
    if (local_1a98 == 0) {
      uVar26 = 0x2f8;
    }
    uVar21 = 0x16;
    if ((int)uVar26 < 0x16) {
      uVar21 = uVar26;
    }
    uVar18 = iVar5 - 4;
    uVar30 = 10;
    if ((int)uVar26 < 10) {
      uVar30 = uVar26;
    }
    if ((int)uVar18 < (int)uVar7) {
      do {
        uVar7 = uVar30;
        if (10 < (int)uVar26) {
          do {
            if ((-1 < (int)(uVar7 | uVar18)) && (local_175c != (void *)0x0)) {
              uVar31 = local_1a98;
              if (local_1a98 == 0) {
                uVar31 = 0x2f8;
              }
              if ((int)uVar7 < (int)uVar31) {
                uVar31 = local_1a94;
                if (local_1a94 == 0) {
                  uVar31 = 400;
                }
                if ((int)uVar18 < (int)uVar31) {
                  uVar31 = local_1a98 << 2;
                  if (local_1a98 == 0) {
                    uVar31 = 0xbe0;
                  }
                  if (local_1a90 != 0) {
                    uVar31 = local_1a90;
                  }
                  *(undefined1 *)((int)local_175c + uVar7 * 4 + uVar18 * uVar31) = 0xee;
                  *(undefined1 *)((int)local_175c + uVar7 * 4 + uVar18 * uVar31 + 1) = 0xee;
                  *(undefined1 *)((int)local_175c + uVar7 * 4 + uVar18 * uVar31 + 2) = 0xee;
                  *(undefined1 *)((int)local_175c + uVar7 * 4 + uVar18 * uVar31 + 3) = 0xff;
                }
              }
            }
            uVar7 = uVar7 + 1;
          } while (uVar21 != uVar7);
        }
        uVar18 = uVar18 + 1;
      } while (uVar18 != uVar6);
    }
    iVar5 = local_1730 + 2;
    if (local_1730 < 1) {
      iVar5 = 0xc;
    }
    uVar7 = local_1a94;
    if (local_1a94 == 0) {
      uVar7 = 400;
    }
    iVar5 = (uVar7 - iVar5) + -0x26;
    if (local_1730 < 1) {
      if (iVar5 < 0x10) {
        iVar5 = 0x10;
      }
    }
    else if (iVar5 < local_1730 + 6) {
      iVar5 = local_1730 + 6;
    }
    uVar26 = iVar5 - 4;
    uVar6 = local_1a98;
    if (local_1a98 == 0) {
      uVar6 = 0x2f8;
    }
    uVar21 = 0x16;
    if ((int)uVar6 < 0x16) {
      uVar21 = uVar6;
    }
    if (((int)uVar26 < (int)uVar7) && (10 < (int)uVar6)) {
      iVar29 = 0;
      do {
        if ((3 < iVar5) && (local_175c != (void *)0x0)) {
          uVar7 = local_1a98;
          if (local_1a98 == 0) {
            uVar7 = 0x2f8;
          }
          if (iVar29 + 10 < (int)uVar7) {
            uVar7 = local_1a94;
            if (local_1a94 == 0) {
              uVar7 = 400;
            }
            if ((int)uVar26 < (int)uVar7) {
              uVar7 = local_1a98 << 2;
              if (local_1a98 == 0) {
                uVar7 = 0xbe0;
              }
              if (local_1a90 != 0) {
                uVar7 = local_1a90;
              }
              *(undefined1 *)((int)local_175c + iVar29 * 4 + uVar7 * uVar26 + 0x28) = 0x96;
              *(undefined1 *)((int)local_175c + iVar29 * 4 + uVar7 * uVar26 + 0x29) = 0x96;
              *(undefined1 *)((int)local_175c + iVar29 * 4 + uVar7 * uVar26 + 0x2a) = 0x96;
              *(undefined1 *)((int)local_175c + iVar29 * 4 + uVar7 * uVar26 + 0x2b) = 0xff;
            }
          }
        }
        iVar29 = iVar29 + 1;
      } while (uVar21 - 10 != iVar29);
    }
    uVar7 = local_1a98;
    if (local_1a98 == 0) {
      uVar7 = 0x2f8;
    }
    uVar6 = 0x16;
    if ((int)uVar7 < 0x16) {
      uVar6 = uVar7;
    }
    uVar21 = 10;
    if ((int)uVar7 < 10) {
      uVar21 = uVar7;
    }
    uVar18 = iVar5 + 10;
    uVar30 = local_1a94;
    if (local_1a94 == 0) {
      uVar30 = 400;
    }
    uVar11 = iVar5 + 9;
    uVar31 = uVar30;
    if ((int)uVar18 < (int)uVar30) {
      uVar31 = uVar18;
    }
    if ((int)uVar18 < 0) {
      uVar31 = 0;
    }
    if ((int)uVar11 < (int)uVar30) {
      uVar30 = uVar11;
    }
    if ((int)uVar11 < 0) {
      uVar30 = 0;
    }
    if ((int)uVar30 < (int)uVar31) {
      do {
        uVar11 = uVar21;
        if (10 < (int)uVar7) {
          do {
            if ((-1 < (int)(uVar11 | uVar30)) && (local_175c != (void *)0x0)) {
              uVar23 = local_1a98;
              if (local_1a98 == 0) {
                uVar23 = 0x2f8;
              }
              if ((int)uVar11 < (int)uVar23) {
                uVar23 = local_1a94;
                if (local_1a94 == 0) {
                  uVar23 = 400;
                }
                if ((int)uVar30 < (int)uVar23) {
                  uVar23 = local_1a98 << 2;
                  if (local_1a98 == 0) {
                    uVar23 = 0xbe0;
                  }
                  if (local_1a90 != 0) {
                    uVar23 = local_1a90;
                  }
                  *(undefined1 *)((int)local_175c + uVar11 * 4 + uVar30 * uVar23) = 0x96;
                  *(undefined1 *)((int)local_175c + uVar11 * 4 + uVar30 * uVar23 + 1) = 0x96;
                  *(undefined1 *)((int)local_175c + uVar11 * 4 + uVar30 * uVar23 + 2) = 0x96;
                  *(undefined1 *)((int)local_175c + uVar11 * 4 + uVar30 * uVar23 + 3) = 0xff;
                }
              }
            }
            uVar11 = uVar11 + 1;
          } while (uVar6 != uVar11);
        }
        uVar30 = uVar30 + 1;
      } while (uVar30 != uVar31);
    }
    uVar7 = local_1a94;
    if (local_1a94 == 0) {
      uVar7 = 400;
    }
    uVar6 = uVar7;
    if ((int)uVar26 < (int)uVar7) {
      uVar6 = uVar26;
    }
    uVar21 = local_1a98;
    if (local_1a98 == 0) {
      uVar21 = 0x2f8;
    }
    uVar30 = 10;
    if ((int)uVar21 < 10) {
      uVar30 = uVar21;
    }
    if ((int)uVar18 < (int)uVar7) {
      uVar7 = uVar18;
    }
    if (iVar5 < -10) {
      uVar7 = 0;
    }
    if ((int)uVar6 < (int)uVar7) {
      do {
        if ((((10 < (int)uVar21) && (-1 < (int)(uVar30 | uVar6))) && (local_175c != (void *)0x0)) &&
           ((local_1a98 == 0 || ((int)uVar30 < (int)local_1a98)))) {
          uVar31 = local_1a94;
          if (local_1a94 == 0) {
            uVar31 = 400;
          }
          if ((int)uVar6 < (int)uVar31) {
            uVar31 = local_1a98 << 2;
            if (local_1a98 == 0) {
              uVar31 = 0xbe0;
            }
            if (local_1a90 != 0) {
              uVar31 = local_1a90;
            }
            iVar29 = uVar31 * uVar6 + uVar30 * 4;
            *(undefined1 *)((int)local_175c + iVar29) = 0x96;
            *(undefined1 *)((int)local_175c + iVar29 + 1) = 0x96;
            *(undefined1 *)((int)local_175c + iVar29 + 2) = 0x96;
            *(undefined1 *)((int)local_175c + iVar29 + 3) = 0xff;
          }
        }
        uVar6 = uVar6 + 1;
      } while (uVar7 != uVar6);
    }
    uVar7 = local_1a94;
    if (local_1a94 == 0) {
      uVar7 = 400;
    }
    if ((int)uVar7 <= (int)uVar26) {
      uVar26 = uVar7;
    }
    uVar6 = local_1a98;
    if (local_1a98 == 0) {
      uVar6 = 0x2f8;
    }
    uVar21 = 0x15;
    if ((int)uVar6 < 0x15) {
      uVar21 = uVar6;
    }
    if ((int)uVar18 < (int)uVar7) {
      uVar7 = uVar18;
    }
    if (iVar5 < -10) {
      uVar7 = 0;
    }
    if ((int)uVar26 < (int)uVar7) {
      do {
        if (((0x15 < (int)uVar6) && (-1 < (int)(uVar21 | uVar26))) &&
           ((local_175c != (void *)0x0 && ((local_1a98 == 0 || ((int)uVar21 < (int)local_1a98))))))
        {
          uVar30 = local_1a94;
          if (local_1a94 == 0) {
            uVar30 = 400;
          }
          if ((int)uVar26 < (int)uVar30) {
            uVar30 = local_1a98 << 2;
            if (local_1a98 == 0) {
              uVar30 = 0xbe0;
            }
            if (local_1a90 != 0) {
              uVar30 = local_1a90;
            }
            iVar5 = uVar30 * uVar26 + uVar21 * 4;
            *(undefined1 *)((int)local_175c + iVar5) = 0x96;
            *(undefined1 *)((int)local_175c + iVar5 + 1) = 0x96;
            *(undefined1 *)((int)local_175c + iVar5 + 2) = 0x96;
            *(undefined1 *)((int)local_175c + iVar5 + 3) = 0xff;
          }
        }
        uVar26 = uVar26 + 1;
      } while (uVar7 != uVar26);
    }
    iVar5 = 0xc;
    if (0 < local_1730) {
      iVar5 = local_1730 + 2;
    }
    uVar7 = local_1a94;
    if (local_1a94 == 0) {
      uVar7 = 400;
    }
    iVar5 = (uVar7 - iVar5) + -0x26;
    if (local_1730 < 1) {
      if (iVar5 < 0x10) {
        iVar5 = 0x10;
      }
    }
    else if (iVar5 < local_1730 + 6) {
      iVar5 = local_1730 + 6;
    }
    iVar29 = iVar5 + 1;
    uVar6 = local_1a98;
    if (local_1a98 == 0) {
      uVar6 = 0x2f8;
    }
    uVar26 = 0x14;
    if ((int)uVar6 < 0x14) {
      uVar26 = uVar6;
    }
    if ((iVar29 < (int)uVar7) && (0xd < (int)uVar6)) {
      iVar15 = 0;
      do {
        if ((-2 < iVar5) && (local_175c != (void *)0x0)) {
          uVar7 = local_1a98;
          if (local_1a98 == 0) {
            uVar7 = 0x2f8;
          }
          if (iVar15 + 0xd < (int)uVar7) {
            uVar7 = local_1a94;
            if (local_1a94 == 0) {
              uVar7 = 400;
            }
            if (iVar29 < (int)uVar7) {
              uVar7 = local_1a98 << 2;
              if (local_1a98 == 0) {
                uVar7 = 0xbe0;
              }
              if (local_1a90 != 0) {
                uVar7 = local_1a90;
              }
              *(undefined1 *)((int)local_175c + iVar15 * 4 + uVar7 * iVar29 + 0x34) = 0x46;
              *(undefined1 *)((int)local_175c + iVar15 * 4 + uVar7 * iVar29 + 0x35) = 0x46;
              *(undefined1 *)((int)local_175c + iVar15 * 4 + uVar7 * iVar29 + 0x36) = 0x46;
              *(undefined1 *)((int)local_175c + iVar15 * 4 + uVar7 * iVar29 + 0x37) = 0xff;
            }
          }
        }
        iVar15 = iVar15 + 1;
      } while (uVar26 - 0xd != iVar15);
    }
    uVar7 = local_1a98;
    if (local_1a98 == 0) {
      uVar7 = 0x2f8;
    }
    uVar6 = 0x13;
    if ((int)uVar7 < 0x13) {
      uVar6 = uVar7;
    }
    uVar26 = 0xe;
    if ((int)uVar7 < 0xe) {
      uVar26 = uVar7;
    }
    uVar30 = iVar5 + 3;
    uVar21 = local_1a94;
    if (local_1a94 == 0) {
      uVar21 = 400;
    }
    uVar18 = uVar21;
    if ((int)uVar30 < (int)uVar21) {
      uVar18 = uVar30;
    }
    if (iVar5 < -3) {
      uVar18 = 0;
    }
    if ((int)(iVar5 + 2U) < (int)uVar21) {
      uVar21 = iVar5 + 2U;
    }
    if (iVar5 < -2) {
      uVar21 = 0;
    }
    if ((int)uVar21 < (int)uVar18) {
      do {
        uVar31 = uVar26;
        if (0xe < (int)uVar7) {
          do {
            if ((-1 < (int)(uVar31 | uVar21)) && (local_175c != (void *)0x0)) {
              uVar11 = local_1a98;
              if (local_1a98 == 0) {
                uVar11 = 0x2f8;
              }
              if ((int)uVar31 < (int)uVar11) {
                uVar11 = local_1a94;
                if (local_1a94 == 0) {
                  uVar11 = 400;
                }
                if ((int)uVar21 < (int)uVar11) {
                  uVar11 = local_1a98 << 2;
                  if (local_1a98 == 0) {
                    uVar11 = 0xbe0;
                  }
                  if (local_1a90 != 0) {
                    uVar11 = local_1a90;
                  }
                  *(undefined1 *)((int)local_175c + uVar31 * 4 + uVar21 * uVar11) = 0x46;
                  *(undefined1 *)((int)local_175c + uVar31 * 4 + uVar21 * uVar11 + 1) = 0x46;
                  *(undefined1 *)((int)local_175c + uVar31 * 4 + uVar21 * uVar11 + 2) = 0x46;
                  *(undefined1 *)((int)local_175c + uVar31 * 4 + uVar21 * uVar11 + 3) = 0xff;
                }
              }
            }
            uVar31 = uVar31 + 1;
          } while (uVar6 != uVar31);
        }
        uVar21 = uVar21 + 1;
      } while (uVar21 != uVar18);
    }
    uVar7 = local_1a98;
    if (local_1a98 == 0) {
      uVar7 = 0x2f8;
    }
    uVar6 = 0x12;
    if ((int)uVar7 < 0x12) {
      uVar6 = uVar7;
    }
    uVar26 = 0xf;
    if ((int)uVar7 < 0xf) {
      uVar26 = uVar7;
    }
    uVar18 = iVar5 + 4;
    uVar21 = local_1a94;
    if (local_1a94 == 0) {
      uVar21 = 400;
    }
    uVar31 = uVar21;
    if ((int)uVar18 < (int)uVar21) {
      uVar31 = uVar18;
    }
    if (iVar5 < -4) {
      uVar31 = 0;
    }
    if ((int)uVar30 < (int)uVar21) {
      uVar21 = uVar30;
    }
    if (iVar5 < -3) {
      uVar21 = 0;
    }
    if ((int)uVar21 < (int)uVar31) {
      uVar11 = uVar26 + 2;
      uVar30 = uVar26 + 1;
      do {
        if (0xf < (int)uVar7) {
          if (((-1 < (int)(uVar26 | uVar21)) && (local_175c != (void *)0x0)) &&
             ((local_1a98 == 0 || ((int)uVar26 < (int)local_1a98)))) {
            uVar23 = local_1a94;
            if (local_1a94 == 0) {
              uVar23 = 400;
            }
            if ((int)uVar21 < (int)uVar23) {
              uVar23 = local_1a98 << 2;
              if (local_1a98 == 0) {
                uVar23 = 0xbe0;
              }
              if (local_1a90 != 0) {
                uVar23 = local_1a90;
              }
              iVar29 = uVar23 * uVar21 + uVar26 * 4;
              *(undefined1 *)((int)local_175c + iVar29) = 0x46;
              *(undefined1 *)((int)local_175c + iVar29 + 1) = 0x46;
              *(undefined1 *)((int)local_175c + iVar29 + 2) = 0x46;
              *(undefined1 *)((int)local_175c + iVar29 + 3) = 0xff;
            }
          }
          if (uVar30 != uVar6) {
            if ((-1 < (int)(uVar30 | uVar21)) && (local_175c != (void *)0x0)) {
              uVar23 = local_1a98;
              if (local_1a98 == 0) {
                uVar23 = 0x2f8;
              }
              if ((int)uVar30 < (int)uVar23) {
                uVar23 = local_1a94;
                if (local_1a94 == 0) {
                  uVar23 = 400;
                }
                if ((int)uVar21 < (int)uVar23) {
                  uVar23 = local_1a98 << 2;
                  if (local_1a98 == 0) {
                    uVar23 = 0xbe0;
                  }
                  if (local_1a90 != 0) {
                    uVar23 = local_1a90;
                  }
                  iVar29 = uVar23 * uVar21 + uVar30 * 4;
                  *(undefined1 *)((int)local_175c + iVar29) = 0x46;
                  *(undefined1 *)((int)local_175c + iVar29 + 1) = 0x46;
                  *(undefined1 *)((int)local_175c + iVar29 + 2) = 0x46;
                  *(undefined1 *)((int)local_175c + iVar29 + 3) = 0xff;
                }
              }
            }
            if (((uVar11 != uVar6) && (-1 < (int)(uVar11 | uVar21))) && (local_175c != (void *)0x0))
            {
              uVar23 = local_1a98;
              if (local_1a98 == 0) {
                uVar23 = 0x2f8;
              }
              if ((int)uVar11 < (int)uVar23) {
                uVar23 = local_1a94;
                if (local_1a94 == 0) {
                  uVar23 = 400;
                }
                if ((int)uVar21 < (int)uVar23) {
                  uVar23 = local_1a98 << 2;
                  if (local_1a98 == 0) {
                    uVar23 = 0xbe0;
                  }
                  if (local_1a90 != 0) {
                    uVar23 = local_1a90;
                  }
                  iVar29 = uVar23 * uVar21 + uVar11 * 4;
                  *(undefined1 *)((int)local_175c + iVar29) = 0x46;
                  *(undefined1 *)((int)local_175c + iVar29 + 1) = 0x46;
                  *(undefined1 *)((int)local_175c + iVar29 + 2) = 0x46;
                  *(undefined1 *)((int)local_175c + iVar29 + 3) = 0xff;
                }
              }
            }
          }
        }
        uVar21 = uVar21 + 1;
      } while (uVar31 != uVar21);
    }
    uVar7 = local_1a98;
    if (local_1a98 == 0) {
      uVar7 = 0x2f8;
    }
    uVar6 = 0x10;
    if ((int)uVar7 < 0x10) {
      uVar6 = uVar7;
    }
    uVar26 = local_1a94;
    if (local_1a94 == 0) {
      uVar26 = 400;
    }
    uVar21 = iVar5 + 5U;
    if ((int)uVar26 <= (int)(iVar5 + 5U)) {
      uVar21 = uVar26;
    }
    if (iVar5 < -5) {
      uVar21 = 0;
    }
    if ((int)uVar18 < (int)uVar26) {
      uVar26 = uVar18;
    }
    if (iVar5 < -4) {
      uVar26 = 0;
    }
    if ((int)uVar26 < (int)uVar21) {
      do {
        if (((0x10 < (int)uVar7) && (-1 < (int)(uVar6 | uVar26))) &&
           ((local_175c != (void *)0x0 && ((local_1a98 == 0 || ((int)uVar6 < (int)local_1a98)))))) {
          uVar30 = local_1a94;
          if (local_1a94 == 0) {
            uVar30 = 400;
          }
          if ((int)uVar26 < (int)uVar30) {
            uVar30 = local_1a98 << 2;
            if (local_1a98 == 0) {
              uVar30 = 0xbe0;
            }
            if (local_1a90 != 0) {
              uVar30 = local_1a90;
            }
            iVar5 = uVar30 * uVar26 + uVar6 * 4;
            *(undefined1 *)((int)local_175c + iVar5) = 0x46;
            *(undefined1 *)((int)local_175c + iVar5 + 1) = 0x46;
            *(undefined1 *)((int)local_175c + iVar5 + 2) = 0x46;
            *(undefined1 *)((int)local_175c + iVar5 + 3) = 0xff;
          }
        }
        uVar26 = uVar26 + 1;
      } while (uVar21 != uVar26);
    }
    iVar5 = 0xc;
    if (0 < local_1730) {
      iVar5 = local_1730 + 2;
    }
    uVar7 = local_1a94;
    if (local_1a94 == 0) {
      uVar7 = 400;
    }
    iVar5 = (uVar7 - iVar5) + -0x26;
    if (local_1730 < 1) {
      if (iVar5 < 0x10) {
        iVar5 = 0x10;
      }
    }
    else if (iVar5 < local_1730 + 6) {
      iVar5 = local_1730 + 6;
    }
    iVar29 = 0xe;
    if (0 < local_1734) {
      iVar29 = local_1734 + 8;
    }
    iVar15 = local_1a98 - 0x14;
    if (local_1a98 == 0) {
      iVar15 = 0x2e4;
    }
    if (iVar15 <= iVar29) {
      iVar15 = iVar29;
    }
    uVar6 = iVar5 + 0x12;
    iVar29 = (uVar7 - uVar6) + -10;
    if (local_1730 < 1) {
      if ((int)(uVar7 - uVar6) < 0x1c) {
        iVar29 = 0x12;
      }
      local_1ab4 = 10;
    }
    else {
      local_1ab4 = local_1730;
      if (iVar29 <= local_1730 + 8) {
        iVar29 = local_1730 + 8;
      }
    }
    uVar21 = iVar29 + uVar6;
    uVar26 = uVar7;
    if ((int)uVar21 < (int)uVar7) {
      uVar26 = uVar21;
    }
    if ((int)uVar21 < 0) {
      uVar26 = 0;
    }
    if ((int)uVar6 < (int)uVar7) {
      uVar7 = uVar6;
    }
    uVar30 = local_1a98;
    if (local_1a98 == 0) {
      uVar30 = 0x2f8;
    }
    uVar31 = iVar15 + 10;
    uVar18 = 10;
    if ((int)uVar30 < 10) {
      uVar18 = uVar30;
    }
    if ((int)uVar31 < (int)uVar30) {
      uVar30 = uVar31;
    }
    if (iVar15 < -10) {
      uVar30 = 0;
    }
    if ((int)uVar7 < (int)uVar26) {
      do {
        uVar11 = uVar18;
        if ((int)uVar18 < (int)uVar30) {
          do {
            if ((-1 < (int)(uVar11 | uVar7)) && (local_175c != (void *)0x0)) {
              uVar23 = local_1a98;
              if (local_1a98 == 0) {
                uVar23 = 0x2f8;
              }
              if ((int)uVar11 < (int)uVar23) {
                uVar23 = local_1a94;
                if (local_1a94 == 0) {
                  uVar23 = 400;
                }
                if ((int)uVar7 < (int)uVar23) {
                  uVar23 = local_1a98 << 2;
                  if (local_1a98 == 0) {
                    uVar23 = 0xbe0;
                  }
                  if (local_1a90 != 0) {
                    uVar23 = local_1a90;
                  }
                  *(undefined1 *)((int)local_175c + uVar11 * 4 + uVar7 * uVar23) = 0x8e;
                  *(undefined1 *)((int)local_175c + uVar11 * 4 + uVar7 * uVar23 + 1) = 0xba;
                  *(undefined1 *)((int)local_175c + uVar11 * 4 + uVar7 * uVar23 + 2) = 0xdc;
                  *(undefined1 *)((int)local_175c + uVar11 * 4 + uVar7 * uVar23 + 3) = 0xd9;
                }
              }
            }
            uVar11 = uVar11 + 1;
          } while (uVar30 != uVar11);
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 != uVar26);
    }
    uVar7 = local_1a94;
    if (local_1a94 == 0) {
      uVar7 = 400;
    }
    uVar26 = uVar7;
    if ((int)uVar6 < (int)uVar7) {
      uVar26 = uVar6;
    }
    uVar30 = local_1a98;
    if (local_1a98 == 0) {
      uVar30 = 0x2f8;
    }
    uVar18 = 10;
    if ((int)uVar30 < 10) {
      uVar18 = uVar30;
    }
    if ((int)(iVar5 + 0x13U) < (int)uVar7) {
      uVar7 = iVar5 + 0x13U;
    }
    if (iVar5 < -0x13) {
      uVar7 = 0;
    }
    if ((int)uVar31 < (int)uVar30) {
      uVar30 = uVar31;
    }
    if (iVar15 < -10) {
      uVar30 = 0;
    }
    if ((int)uVar26 < (int)uVar7) {
      do {
        uVar11 = uVar18;
        if ((int)uVar18 < (int)uVar30) {
          do {
            if ((-1 < (int)(uVar11 | uVar26)) && (local_175c != (void *)0x0)) {
              uVar23 = local_1a98;
              if (local_1a98 == 0) {
                uVar23 = 0x2f8;
              }
              if ((int)uVar11 < (int)uVar23) {
                uVar23 = local_1a94;
                if (local_1a94 == 0) {
                  uVar23 = 400;
                }
                if ((int)uVar26 < (int)uVar23) {
                  uVar23 = local_1a98 << 2;
                  if (local_1a98 == 0) {
                    uVar23 = 0xbe0;
                  }
                  if (local_1a90 != 0) {
                    uVar23 = local_1a90;
                  }
                  *(undefined1 *)((int)local_175c + uVar11 * 4 + uVar26 * uVar23) = 0;
                  *(undefined1 *)((int)local_175c + uVar11 * 4 + uVar26 * uVar23 + 1) = 0;
                  *(undefined1 *)((int)local_175c + uVar11 * 4 + uVar26 * uVar23 + 2) = 0;
                  *(undefined1 *)((int)local_175c + uVar11 * 4 + uVar26 * uVar23 + 3) = 0xff;
                }
              }
            }
            uVar11 = uVar11 + 1;
          } while (uVar30 != uVar11);
        }
        uVar26 = uVar26 + 1;
      } while (uVar26 != uVar7);
    }
    uVar7 = local_1a94;
    if (local_1a94 == 0) {
      uVar7 = 400;
    }
    uVar30 = iVar5 + iVar29 + 0x11;
    uVar26 = uVar7;
    if ((int)uVar30 < (int)uVar7) {
      uVar26 = uVar30;
    }
    if ((int)uVar30 < 0) {
      uVar26 = 0;
    }
    uVar30 = local_1a98;
    if (local_1a98 == 0) {
      uVar30 = 0x2f8;
    }
    uVar18 = 10;
    if ((int)uVar30 < 10) {
      uVar18 = uVar30;
    }
    if ((int)uVar21 < (int)uVar7) {
      uVar7 = uVar21;
    }
    if ((int)uVar21 < 0) {
      uVar7 = 0;
    }
    if ((int)uVar31 < (int)uVar30) {
      uVar30 = uVar31;
    }
    if (iVar15 < -10) {
      uVar30 = 0;
    }
    if ((int)uVar26 < (int)uVar7) {
      do {
        uVar11 = uVar18;
        if ((int)uVar18 < (int)uVar30) {
          do {
            if ((-1 < (int)(uVar11 | uVar26)) && (local_175c != (void *)0x0)) {
              uVar23 = local_1a98;
              if (local_1a98 == 0) {
                uVar23 = 0x2f8;
              }
              if ((int)uVar11 < (int)uVar23) {
                uVar23 = local_1a94;
                if (local_1a94 == 0) {
                  uVar23 = 400;
                }
                if ((int)uVar26 < (int)uVar23) {
                  uVar23 = local_1a98 << 2;
                  if (local_1a98 == 0) {
                    uVar23 = 0xbe0;
                  }
                  if (local_1a90 != 0) {
                    uVar23 = local_1a90;
                  }
                  *(undefined1 *)((int)local_175c + uVar11 * 4 + uVar26 * uVar23) = 0;
                  *(undefined1 *)((int)local_175c + uVar11 * 4 + uVar26 * uVar23 + 1) = 0;
                  *(undefined1 *)((int)local_175c + uVar11 * 4 + uVar26 * uVar23 + 2) = 0;
                  *(undefined1 *)((int)local_175c + uVar11 * 4 + uVar26 * uVar23 + 3) = 0xff;
                }
              }
            }
            uVar11 = uVar11 + 1;
          } while (uVar30 != uVar11);
        }
        uVar26 = uVar26 + 1;
      } while (uVar26 != uVar7);
    }
    uVar7 = local_1a94;
    if (local_1a94 == 0) {
      uVar7 = 400;
    }
    uVar26 = uVar7;
    if ((int)uVar6 < (int)uVar7) {
      uVar26 = uVar6;
    }
    uVar30 = local_1a98;
    if (local_1a98 == 0) {
      uVar30 = 0x2f8;
    }
    uVar18 = 10;
    if ((int)uVar30 < 10) {
      uVar18 = uVar30;
    }
    if ((int)uVar21 < (int)uVar7) {
      uVar7 = uVar21;
    }
    if ((int)uVar21 < 0) {
      uVar7 = 0;
    }
    if ((int)uVar26 < (int)uVar7) {
      do {
        if ((((10 < (int)uVar30) && (-1 < (int)(uVar18 | uVar26))) && (local_175c != (void *)0x0))
           && ((local_1a98 == 0 || ((int)uVar18 < (int)local_1a98)))) {
          uVar11 = local_1a94;
          if (local_1a94 == 0) {
            uVar11 = 400;
          }
          if ((int)uVar26 < (int)uVar11) {
            uVar11 = local_1a98 << 2;
            if (local_1a98 == 0) {
              uVar11 = 0xbe0;
            }
            if (local_1a90 != 0) {
              uVar11 = local_1a90;
            }
            iVar5 = uVar11 * uVar26 + uVar18 * 4;
            *(undefined1 *)((int)local_175c + iVar5) = 0;
            *(undefined1 *)((int)local_175c + iVar5 + 1) = 0;
            *(undefined1 *)((int)local_175c + iVar5 + 2) = 0;
            *(undefined1 *)((int)local_175c + iVar5 + 3) = 0xff;
          }
        }
        uVar26 = uVar26 + 1;
      } while (uVar7 != uVar26);
    }
    uVar7 = local_1a94;
    if (local_1a94 == 0) {
      uVar7 = 400;
    }
    uVar26 = uVar7;
    if ((int)uVar6 < (int)uVar7) {
      uVar26 = uVar6;
    }
    if ((int)uVar21 < (int)uVar7) {
      uVar7 = uVar21;
    }
    if ((int)uVar21 < 0) {
      uVar7 = 0;
    }
    uVar21 = local_1a98;
    if (local_1a98 == 0) {
      uVar21 = 0x2f8;
    }
    uVar30 = uVar21;
    if ((int)uVar31 < (int)uVar21) {
      uVar30 = uVar31;
    }
    if ((int)uVar31 < 0) {
      uVar30 = 0;
    }
    uVar18 = iVar15 + 9;
    if ((int)uVar18 < (int)uVar21) {
      uVar21 = uVar18;
    }
    if ((int)uVar18 < 0) {
      uVar21 = 0;
    }
    if ((int)uVar26 < (int)uVar7) {
      do {
        uVar18 = uVar21;
        if ((int)uVar21 < (int)uVar30) {
          do {
            if ((-1 < (int)(uVar18 | uVar26)) && (local_175c != (void *)0x0)) {
              uVar31 = local_1a98;
              if (local_1a98 == 0) {
                uVar31 = 0x2f8;
              }
              if ((int)uVar18 < (int)uVar31) {
                uVar31 = local_1a94;
                if (local_1a94 == 0) {
                  uVar31 = 400;
                }
                if ((int)uVar26 < (int)uVar31) {
                  uVar31 = local_1a98 << 2;
                  if (local_1a98 == 0) {
                    uVar31 = 0xbe0;
                  }
                  if (local_1a90 != 0) {
                    uVar31 = local_1a90;
                  }
                  *(undefined1 *)((int)local_175c + uVar18 * 4 + uVar26 * uVar31) = 0;
                  *(undefined1 *)((int)local_175c + uVar18 * 4 + uVar26 * uVar31 + 1) = 0;
                  *(undefined1 *)((int)local_175c + uVar18 * 4 + uVar26 * uVar31 + 2) = 0;
                  *(undefined1 *)((int)local_175c + uVar18 * 4 + uVar26 * uVar31 + 3) = 0xff;
                }
              }
            }
            uVar18 = uVar18 + 1;
          } while (uVar30 != uVar18);
        }
        uVar26 = uVar26 + 1;
      } while (uVar26 != uVar7);
    }
    iVar29 = uVar6 + (iVar29 - local_1ab4) / 2;
    recovered_1000b5d8((char *)&local_464,0x120,local_172c);
    iVar5 = local_1734;
    if (local_1734 < 1) {
      iVar5 = 6;
    }
    uVar7 = recovered_10004138(iVar15 + -10,iVar5);
    recovered_1000bb20((int)&local_1a9c,0xe,iVar29,(char *)&local_464,uVar7,0);
    uVar7 = local_174c & 6;
    bVar38 = uVar7 == 2;
    if (bVar38) {
      uVar7 = local_1680 >> 8 & 0xff;
    }
    if (bVar38 && (uVar7 & 0x10) == 0) {
      uVar9 = strlen((char *)&local_464);
      iVar5 = 6;
      if (0 < local_1734) {
        iVar5 = local_1734;
      }
      iVar15 = local_1734 + -1;
      if (iVar15 == 0 || local_1734 < 1) {
        iVar15 = 5;
      }
      uVar7 = local_1a98;
      if (local_1a98 == 0) {
        uVar7 = 0x2f8;
      }
      uVar21 = iVar5 * uVar9 + 0xe;
      uVar26 = uVar21 + iVar15;
      uVar6 = uVar7;
      if ((int)uVar26 < (int)uVar7) {
        uVar6 = uVar26;
      }
      if ((int)uVar26 < 0) {
        uVar6 = 0;
      }
      iVar15 = local_1730;
      if (local_1730 < 1) {
        iVar15 = 10;
      }
      iVar29 = iVar29 + iVar15;
      uVar30 = iVar29 + 1;
      uVar26 = local_1a94;
      if (local_1a94 == 0) {
        uVar26 = 400;
      }
      uVar18 = iVar29 - 1;
      if ((int)uVar26 <= (int)uVar30) {
        uVar30 = uVar26;
      }
      if ((int)uVar18 < -2) {
        uVar30 = 0;
      }
      if ((int)uVar18 < (int)uVar26) {
        uVar26 = uVar18;
      }
      if ((int)uVar18 < 0) {
        uVar26 = 0;
      }
      if ((int)uVar21 < (int)uVar7) {
        uVar7 = uVar21;
      }
      if ((int)(iVar5 * uVar9) < -0xe) {
        uVar7 = 0;
      }
      if ((int)uVar26 < (int)uVar30) {
        do {
          uVar21 = uVar7;
          if ((int)uVar7 < (int)uVar6) {
            do {
              if ((-1 < (int)(uVar21 | uVar26)) && (local_175c != (void *)0x0)) {
                uVar18 = local_1a98;
                if (local_1a98 == 0) {
                  uVar18 = 0x2f8;
                }
                if ((int)uVar21 < (int)uVar18) {
                  uVar18 = local_1a94;
                  if (local_1a94 == 0) {
                    uVar18 = 400;
                  }
                  if ((int)uVar26 < (int)uVar18) {
                    uVar18 = local_1a98 << 2;
                    if (local_1a98 == 0) {
                      uVar18 = 0xbe0;
                    }
                    if (local_1a90 != 0) {
                      uVar18 = local_1a90;
                    }
                    *(undefined1 *)((int)local_175c + uVar21 * 4 + uVar26 * uVar18) = 0;
                    *(undefined1 *)((int)local_175c + uVar21 * 4 + uVar26 * uVar18 + 1) = 0;
                    *(undefined1 *)((int)local_175c + uVar21 * 4 + uVar26 * uVar18 + 2) = 0;
                    *(undefined1 *)((int)local_175c + uVar21 * 4 + uVar26 * uVar18 + 3) = 0xff;
                  }
                }
              }
              uVar21 = uVar21 + 1;
            } while (uVar6 != uVar21);
          }
          uVar26 = uVar26 + 1;
        } while (uVar26 != uVar30);
      }
    }
    terror_ui_window_present(&local_1a9c,str_1000bef0,local_175c,local_1a98,local_1a94,local_1a90,0x4c91c4
                      );
  }
  local_1680 = local_1680 + 1;
  if ((uVar10 == uVar4 && !bVar39) && (bVar34 & 1) == 0) {
    iVar5 = 0x18;
    if (uVar16 == 2) {
      iVar5 = 6;
    }
    do {
      iVar29 = Ram40010800;
      if ((iVar29 == 0x50414d57) && (iVar29 = Ram40010804, iVar29 != 0)) {
        uVar4 = Ram40010808;
        bVar38 = 0xb < uVar4;
        if (bVar38) {
          uVar4 = Ram40010808;
        }
        if ((bVar38 && 0x9f < uVar4) && (pcVar2 = (code *)UINT_4001089c, pcVar2 != (code *)0x0)) {
          (*pcVar2)();
        }
      }
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  iVar5 = Ram40010800;
  if ((iVar5 == 0x50414d57) && (iVar5 = Ram40010804, iVar5 != 0)) {
    uVar4 = Ram40010808;
    bVar38 = 0xb < uVar4;
    if (bVar38) {
      uVar4 = Ram40010808;
    }
    if ((bVar38 && 0x9f < uVar4) && (pcVar2 = (code *)UINT_4001089c, pcVar2 != (code *)0x0)) {
      (*pcVar2)();
    }
  }
  bVar38 = false;
  uVar4 = uVar10;
  if (local_1677 == '\0') {
LAB_1000abe0:
    if (local_1a9c != 0) {
      terror_ui_window_close(&local_1a9c);
    }
    if (local_1758 == (void *)0x0) {
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
    uVar4 = Ram40010808;
    bVar38 = 0xb < uVar4;
    if (bVar38) {
      uVar4 = Ram40010808;
    }
    if (!(!bVar38 || uVar4 < 0x54)) {
      pcVar2 = (code *)UINT_40010850;
      if (pcVar2 == (code *)0x0) {
        return 1;
      }
      (*pcVar2)(local_1758);
      return 1;
    }
    return 1;
  }
  goto LAB_10004c04;
switchD_100056bc_caseD_9:
  pbVar22 = pbVar22 + 1;
  uVar21 = (uint)*pbVar22;
  pbVar27 = pbVar27 + 1;
  if (0x20 < uVar21) goto LAB_10005754;
  goto LAB_100056b4;
switchD_10005ea8_caseD_0:
  uVar9 = strlen((char *)local_172c);
  uVar13 = strlen(&DAT_1000bf9b);
  if (uVar13 - 1 < uVar9) {
    pbVar14 = &DAT_1000bf9b;
    do {
      uVar26 = (uint)local_172c[uVar9 - uVar13];
      uVar21 = (uint)*pbVar14;
      if (uVar26 - 0x41 < 0x1a) {
        uVar26 = uVar26 | 0x20;
      }
      if (uVar21 - 0x41 < 0x1a) {
        uVar21 = uVar21 | 0x20;
      }
      if (uVar26 != uVar21) goto LAB_100063e8;
      uVar13 = uVar13 - 1;
      pbVar14 = pbVar14 + 1;
    } while (uVar13 != 0);
LAB_10006570:
    uVar9 = strlen((char *)local_172c);
    uVar13 = strlen(&DAT_1000bfaa);
    if (uVar13 - 1 < uVar9) {
      pbVar14 = &DAT_1000bfaa;
      do {
        uVar26 = (uint)local_172c[uVar9 - uVar13];
        uVar21 = (uint)*pbVar14;
        if (uVar26 - 0x41 < 0x1a) {
          uVar26 = uVar26 | 0x20;
        }
        if (uVar21 - 0x41 < 0x1a) {
          uVar21 = uVar21 | 0x20;
        }
        if (uVar26 != uVar21) goto LAB_100065e8;
        uVar13 = uVar13 - 1;
        pbVar14 = pbVar14 + 1;
      } while (uVar13 != 0);
      uVar26 = 0x80000002;
    }
    else {
LAB_100065e8:
      uVar9 = strlen((char *)local_172c);
      uVar13 = strlen(&DAT_1000bfae);
      if (uVar13 - 1 < uVar9) {
        pbVar14 = &DAT_1000bfae;
        do {
          uVar26 = (uint)local_172c[uVar9 - uVar13];
          uVar21 = (uint)*pbVar14;
          if (uVar26 - 0x41 < 0x1a) {
            uVar26 = uVar26 | 0x20;
          }
          if (uVar21 - 0x41 < 0x1a) {
            uVar21 = uVar21 | 0x20;
          }
          if (uVar26 != uVar21) goto LAB_1000665c;
          uVar13 = uVar13 - 1;
          pbVar14 = pbVar14 + 1;
        } while (uVar13 != 0);
        uVar26 = 0x80000003;
      }
      else {
LAB_1000665c:
        uVar9 = strlen((char *)local_172c);
        uVar13 = strlen(&DAT_1000bfb3);
        uVar26 = 0x80000001;
        if (uVar13 - 1 < uVar9) {
          pbVar14 = &DAT_1000bfb3;
          do {
            uVar30 = (uint)local_172c[uVar9 - uVar13];
            uVar21 = (uint)*pbVar14;
            if (uVar30 - 0x41 < 0x1a) {
              uVar30 = uVar30 | 0x20;
            }
            if (uVar21 - 0x41 < 0x1a) {
              uVar21 = uVar21 | 0x20;
            }
            if (uVar30 != uVar21) goto LAB_100066d0;
            uVar13 = uVar13 - 1;
            pbVar14 = pbVar14 + 1;
          } while (uVar13 != 0);
          uVar26 = 0x80000004;
        }
      }
    }
LAB_100066d0:
    iVar29 = Ram40010800;
    if ((((((iVar29 != 0x50414d57) || (iVar29 = Ram40010804, iVar29 == 0)) ||
          (uVar21 = Ram40010808, uVar21 < 0xc)) ||
         ((uVar21 = Ram40010808, uVar21 < 0x94 ||
          (pcVar2 = (code *)UINT_40010890, pcVar2 == (code *)0x0)))) ||
        (uVar26 = (*pcVar2)((char *)local_172c,uVar26), uVar26 == 0)) && (local_1758 != (void *)0x0)
       ) {
      if (local_1688 < 1000) {
        iVar29 = local_168c + local_1688;
        local_1688 = local_1688 + 1;
      }
      else {
        iVar29 = recovered_1000ad40((int)&local_1a9c,
                                    (byte *)((int)local_1758 +
                                            (local_168c +
                                            ((uint)((ulonglong)((longlong)local_168c * 0x10624dd3)
                                                   >> 0x26) - (local_168c >> 0x1f)) * -1000) * 0x100
                                            ));
        uVar26 = local_1684 - iVar29;
        if (uVar26 == 0 || (int)local_1684 < iVar29) {
          uVar26 = 0;
        }
        local_168c = (local_168c + 1) % 1000;
        iVar29 = local_1688 + local_168c + -1;
        local_1684 = uVar26;
      }
      iVar29 = iVar29 + ((uint)((ulonglong)((longlong)iVar29 * 0x10624dd3) >> 0x26) -
                        (iVar29 >> 0x1f)) * -1000;
      *(undefined1 *)((int)local_1758 + iVar29 * 0x100) = 0x45;
      *(undefined1 *)((int)local_1758 + iVar29 * 0x100 + 1) = 0x52;
      *(undefined1 *)((int)local_1758 + iVar29 * 0x100 + 2) = 0x52;
      *(undefined1 *)((int)local_1758 + iVar29 * 0x100 + 3) = 0x4f;
      *(undefined1 *)((int)local_1758 + iVar29 * 0x100 + 4) = 0x52;
      *(undefined1 *)((int)local_1758 + iVar29 * 0x100 + 5) = 0;
    }
    if ((int)uVar7 < (int)uVar6) goto LAB_1000692c;
    if (local_1688 < 1) {
LAB_100068d8:
      iVar15 = 0;
    }
    else {
      iVar29 = 0;
      iVar15 = 0;
      do {
        pbVar14 = &DAT_1000bef7;
        if (local_1758 != (void *)0x0) {
          iVar32 = iVar29 + local_168c;
          pbVar14 = (byte *)((int)local_1758 +
                            (iVar32 + ((uint)((ulonglong)((longlong)iVar32 * 0x10624dd3) >> 0x26) -
                                      (iVar32 >> 0x1f)) * -1000) * 0x100);
        }
        iVar32 = recovered_1000ad40((int)&local_1a9c,pbVar14);
        iVar15 = iVar32 + iVar15;
        iVar29 = iVar29 + 1;
      } while (iVar29 < local_1688);
    }
  }
  else {
LAB_100063e8:
    uVar9 = strlen((char *)local_172c);
    uVar13 = strlen(&DAT_1000bfa0);
    if (uVar13 - 1 < uVar9) {
      pbVar14 = &DAT_1000bfa0;
      do {
        uVar26 = (uint)local_172c[uVar9 - uVar13];
        uVar21 = (uint)*pbVar14;
        if (uVar26 - 0x41 < 0x1a) {
          uVar26 = uVar26 | 0x20;
        }
        if (uVar21 - 0x41 < 0x1a) {
          uVar21 = uVar21 | 0x20;
        }
        if (uVar26 != uVar21) goto LAB_10006458;
        uVar13 = uVar13 - 1;
        pbVar14 = pbVar14 + 1;
      } while (uVar13 != 0);
      goto LAB_10006570;
    }
LAB_10006458:
    uVar9 = strlen((char *)local_172c);
    uVar13 = strlen(&DAT_1000bfa5);
    if (uVar13 - 1 < uVar9) {
      pbVar14 = &DAT_1000bfa5;
      do {
        uVar26 = (uint)local_172c[uVar9 - uVar13];
        uVar21 = (uint)*pbVar14;
        if (uVar26 - 0x41 < 0x1a) {
          uVar26 = uVar26 | 0x20;
        }
        if (uVar21 - 0x41 < 0x1a) {
          uVar21 = uVar21 | 0x20;
        }
        if (uVar26 != uVar21) goto LAB_100064c8;
        uVar13 = uVar13 - 1;
        pbVar14 = pbVar14 + 1;
      } while (uVar13 != 0);
      goto LAB_10006570;
    }
LAB_100064c8:
    uVar9 = strlen((char *)local_172c);
    uVar13 = strlen(&DAT_1000bfaa);
    if (uVar13 - 1 < uVar9) {
      pbVar14 = &DAT_1000bfaa;
      do {
        uVar26 = (uint)local_172c[uVar9 - uVar13];
        uVar21 = (uint)*pbVar14;
        if (uVar26 - 0x41 < 0x1a) {
          uVar26 = uVar26 | 0x20;
        }
        if (uVar21 - 0x41 < 0x1a) {
          uVar21 = uVar21 | 0x20;
        }
        if (uVar26 != uVar21) goto LAB_10006538;
        uVar13 = uVar13 - 1;
        pbVar14 = pbVar14 + 1;
      } while (uVar13 != 0);
      goto LAB_10006570;
    }
LAB_10006538:
    bVar39 = recovered_1000b7ac((char *)local_172c,&DAT_1000bfae);
    if ((bVar39) || (bVar39 = recovered_1000b7ac((char *)local_172c,&DAT_1000bfb3), bVar39))
    goto LAB_10006570;
switchD_10005ea8_caseD_9:
    if (local_1674 != 0) {
      if (local_1758 != (void *)0x0) {
        if (local_1688 < 1000) {
          iVar29 = local_168c + local_1688;
          local_1688 = local_1688 + 1;
        }
        else {
          iVar29 = recovered_1000ad40((int)&local_1a9c,
                                      (byte *)((int)local_1758 +
                                              (local_168c +
                                              ((uint)((ulonglong)((longlong)local_168c * 0x10624dd3)
                                                     >> 0x26) - (local_168c >> 0x1f)) * -1000) *
                                              0x100));
          uVar26 = local_1684 - iVar29;
          if (uVar26 == 0 || (int)local_1684 < iVar29) {
            uVar26 = 0;
          }
          local_168c = (local_168c + 1) % 1000;
          iVar29 = local_1688 + local_168c + -1;
          local_1684 = uVar26;
        }
        bVar25 = 99;
        iVar15 = 0;
        do {
          if (bVar25 < 0x21) {
            bVar25 = 0x20;
          }
          *(byte *)((int)local_1758 + iVar15 + (iVar29 % 1000) * 0x100) = bVar25;
          iVar32 = iVar15 + 1;
          bVar25 = str_1000bf0a[iVar15 + 1];
          iVar15 = iVar32;
        } while (iVar32 != 0x20);
        *(undefined1 *)((int)local_1758 + (iVar29 % 1000) * 0x100 + 0x20) = 0;
      }
      if ((int)uVar7 < (int)uVar6) goto LAB_1000692c;
      if (0 < local_1688) {
        iVar29 = 0;
        iVar15 = 0;
        do {
          pbVar14 = &DAT_1000bef7;
          if (local_1758 != (void *)0x0) {
            iVar32 = iVar29 + local_168c;
            pbVar14 = (byte *)((int)local_1758 +
                              (iVar32 + ((uint)((ulonglong)((longlong)iVar32 * 0x10624dd3) >> 0x26)
                                        - (iVar32 >> 0x1f)) * -1000) * 0x100);
          }
          iVar32 = recovered_1000ad40((int)&local_1a9c,pbVar14);
          iVar15 = iVar32 + iVar15;
          iVar29 = iVar29 + 1;
        } while (iVar29 < local_1688);
        goto LAB_100068dc;
      }
      goto LAB_100068d8;
    }
    pf_varargs_1000bfd4__4_(local_1664,0x200,&DAT_1000bf2b,(uint)local_172c);
    local_1670 = 0;
    local_1464[0] = 0;
    local_166c = 0;
    local_1674 = 1;
    iVar29 = Ram40010800;
    if ((iVar29 == 0x50414d57) && (iVar29 = Ram40010804, iVar29 != 0)) {
      uVar26 = Ram40010808;
      bVar39 = 0xb < uVar26;
      if (bVar39) {
        uVar26 = Ram40010808;
      }
      if ((!bVar39 || uVar26 < 0x98) || (pcVar2 = (code *)UINT_40010894, pcVar2 == (code *)0x0))
      goto LAB_1000606c;
      local_1668 = (*pcVar2)(recovered_1000b708,&local_1a9c,str_1000bf2e);
      if (local_1668 == 0) goto LAB_10006074;
    }
    else {
LAB_1000606c:
      local_1668 = 0;
LAB_10006074:
      local_1674 = 0;
      local_1670 = 0;
      if (local_1758 != (void *)0x0) {
        if (local_1688 < 1000) {
          iVar29 = local_168c + local_1688;
          local_1688 = local_1688 + 1;
        }
        else {
          iVar29 = recovered_1000ad40((int)&local_1a9c,
                                      (byte *)((int)local_1758 +
                                              (local_168c +
                                              ((uint)((ulonglong)((longlong)local_168c * 0x10624dd3)
                                                     >> 0x26) - (local_168c >> 0x1f)) * -1000) *
                                              0x100));
          uVar26 = local_1684 - iVar29;
          if (uVar26 == 0 || (int)local_1684 < iVar29) {
            uVar26 = 0;
          }
          local_168c = (local_168c + 1) % 1000;
          iVar29 = local_1688 + local_168c + -1;
          local_1684 = uVar26;
        }
        bVar25 = 99;
        iVar15 = 0;
        do {
          if (bVar25 < 0x21) {
            bVar25 = 0x20;
          }
          *(byte *)((int)local_1758 + iVar15 + (iVar29 % 1000) * 0x100) = bVar25;
          iVar32 = iVar15 + 1;
          bVar25 = str_1000bf3d[iVar15 + 1];
          iVar15 = iVar32;
        } while (iVar32 != 0x26);
        *(undefined1 *)((int)local_1758 + (iVar29 % 1000) * 0x100 + 0x26) = 0;
      }
    }
    if ((int)uVar7 < (int)uVar6) goto LAB_1000692c;
    if (local_1688 < 1) goto LAB_100068d8;
    iVar29 = 0;
    iVar15 = 0;
    do {
      pbVar14 = &DAT_1000bef7;
      if (local_1758 != (void *)0x0) {
        iVar32 = iVar29 + local_168c;
        pbVar14 = (byte *)((int)local_1758 +
                          (iVar32 + ((uint)((ulonglong)((longlong)iVar32 * 0x10624dd3) >> 0x26) -
                                    (iVar32 >> 0x1f)) * -1000) * 0x100);
      }
      iVar32 = recovered_1000ad40((int)&local_1a9c,pbVar14);
      iVar15 = iVar32 + iVar15;
      iVar29 = iVar29 + 1;
    } while (iVar29 < local_1688);
  }
LAB_100068dc:
  uVar7 = 0x10;
  uVar6 = 0xc;
  if (0 < local_1730) {
    uVar7 = local_1730 + 6;
    uVar6 = local_1730 + 2;
  }
  uVar26 = local_1a94;
  if (local_1a94 == 0) {
    uVar26 = 400;
  }
  uVar26 = (uVar26 - uVar6) - 0x26;
  if ((int)uVar7 < (int)uVar26) {
    uVar7 = uVar26;
  }
  uVar7 = recovered_100040b0(uVar7,uVar6);
  if (uVar7 < 2) {
    uVar7 = 1;
  }
  local_1684 = iVar15 - uVar7 & ~((int)(iVar15 - uVar7) >> 0x1f);
LAB_1000692c:
  bVar25 = 1;
  local_172c[0] = 0;
LAB_10005534:
  iVar5 = iVar5 + 1;
  if (iVar5 == 0x18) goto LAB_100069f4;
  goto LAB_1000543c;
LAB_100069f4:
  bVar34 = bVar34 | bVar35 | bVar25;
  goto LAB_10006a00;
}

#undef DAT_1000bef7
#undef DAT_1000bf08
#undef DAT_1000bf2b
#undef DAT_1000bf8d
#undef DAT_1000bf9b
#undef DAT_1000bfa0
#undef DAT_1000bfa5
#undef DAT_1000bfaa
#undef DAT_1000bfae
#undef DAT_1000bfb3
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_40010950
#undef Ram40010800
#undef Ram40010804
#undef Ram40010808
#undef Ram40010950
#undef UINT_40010828
#undef UINT_4001082c
#undef UINT_4001084c
#undef UINT_40010850
#undef UINT_40010890
#undef UINT_40010894
#undef UINT_4001089c
#undef UINT_40010978
#undef str_1000bed0
#undef str_1000bef0
#undef str_1000bef8
#undef str_1000bf0a
#undef str_1000bf2e
#undef str_1000bf3d
#undef local_44c
#undef local_43c
#undef local_438
#undef local_434
#undef local_430
#undef local_42c
#undef local_428
#undef local_64
#undef local_60
#undef local_5c
#undef local_58
#undef local_54
#undef local_1ab8
#undef local_1ab4
#undef local_1aac
#undef local_1a9c
#undef local_1a98
#undef local_1a94
#undef local_1a90
#undef local_1a70
#undef local_175c
#undef local_1758
#undef local_1754
#undef local_1750
#undef local_174c
#undef local_1748
#undef local_1744
#undef local_1740
#undef local_173c
#undef local_173b
#undef local_1738
#undef local_1734
#undef local_1730
#undef local_172c
#undef local_168c
#undef local_1688
#undef local_1684
#undef local_1680
#undef local_167c
#undef local_1678
#undef local_1677
#undef local_1674
#undef local_1670
#undef local_166c
#undef local_1668
#undef local_1664
#undef local_1464
#undef local_464
#undef local_460
#undef local_45c
#undef local_458
#undef local_454
#undef local_450

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ad40
 */

int recovered_1000ad40(int param_1,byte *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  byte *text;
  uint uVar7;

  if (param_1 == 0) {
    uVar7 = 0x77;
    uVar2 = 0;
  }
  else {
    iVar3 = *(int *)(param_1 + 0x368);
    iVar5 = 0xe;
    if (0 < iVar3) {
      iVar5 = iVar3 + 8;
    }
    iVar6 = *(int *)(param_1 + 4) + -0x26;
    if (*(int *)(param_1 + 4) == 0) {
      iVar6 = 0x2d2;
    }
    if (iVar6 <= iVar5) {
      iVar6 = iVar5;
    }
    if (iVar3 < 1) {
      iVar3 = 6;
    }
    uVar2 = recovered_10004138(iVar6 + -8,iVar3);
    uVar7 = uVar2;
  }
  if ((int)uVar7 < 2) {
    uVar7 = 1;
  }
  if (param_2 != (byte *)0x0) {
    uVar2 = (uint)*param_2;
  }
  if (param_2 == (byte *)0x0 || uVar2 == 0) {
    return 1;
  }
  iVar5 = 0;
  iVar3 = 0;
  text = param_2;
  do {
    uVar2 = strlen((char *)text);
    if ((int)uVar7 < (int)uVar2) {
      uVar2 = 0xffffffff;
      uVar4 = 0;
      do {
        bVar1 = text[uVar4];
        if (bVar1 == 0) break;
        if (bVar1 == 9) {
          uVar2 = uVar4;
        }
        if (bVar1 == 0x20) {
          uVar2 = uVar4;
        }
        uVar4 = uVar4 + 1;
      } while (uVar7 != uVar4);
      if ((int)uVar2 < 1) {
        uVar2 = uVar7;
      }
    }
    if ((int)uVar2 < 1) {
LAB_1000ae50:
      if (iVar5 < 2) {
        iVar5 = 1;
      }
      return iVar5;
    }
    for (iVar3 = uVar2 + iVar3; bVar1 = param_2[iVar3], bVar1 == 0x20 || bVar1 == 9;
        iVar3 = iVar3 + 1) {
    }
    iVar5 = iVar5 + 1;
    if ((iVar3 < 0) || (text = param_2 + iVar3, bVar1 == 0)) goto LAB_1000ae50;
  } while( true );
}


#undef DAT_1000bef7
#define DAT_1000bef7 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xcfU)))
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
 * Address: 0x1000ae64
 */

undefined1 recovered_1000ae64(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  code *pcVar1;
  int iVar2;
  ulong textSize;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  char *text;
  uint uVar8;
  bool bVar9;
  bool bVar10;

  if (param_1 == 0) {
    return 0;
  }
  iVar2 = 0xe;
  iVar6 = *(int *)(param_1 + 0x36c);
  if (0 < *(int *)(param_1 + 0x368)) {
    iVar2 = *(int *)(param_1 + 0x368) + 8;
  }
  iVar5 = *(int *)(param_1 + 4) + -0x26;
  iVar7 = *(int *)(param_1 + 8);
  if (*(int *)(param_1 + 4) == 0) {
    iVar5 = 0x2d2;
  }
  if (iVar5 <= iVar2) {
    iVar5 = iVar2;
  }
  iVar2 = 0xc;
  uVar8 = *(uint *)(param_1 + 0x358);
  if (0 < iVar6) {
    iVar2 = iVar6 + 2;
  }
  if (iVar7 == 0) {
    iVar7 = 400;
  }
  iVar4 = *(int *)(param_1 + 0x354);
  iVar7 = (iVar7 - iVar2) + -0x26;
  if (iVar6 < 1) {
    if (iVar7 < 0x10) {
      iVar7 = 0x10;
    }
  }
  else if (iVar7 < iVar6 + 6) {
    iVar7 = iVar6 + 6;
  }
  if (0x1b < iVar4) {
    bVar10 = SBORROW4(uVar8,10);
    iVar6 = uVar8 - 10;
    bVar9 = uVar8 == 10;
    if (9 < (int)uVar8) {
      iVar5 = iVar5 + 0x1c;
      bVar10 = SBORROW4(iVar5,iVar4);
      iVar6 = iVar5 - iVar4;
      bVar9 = iVar5 == iVar4;
    }
    if (((!bVar9 && iVar6 < 0 == bVar10) && (uVar8 < iVar7 + 10U)) &&
       (0 < *(int *)(param_1 + 0x414))) {
      iVar2 = recovered_10004138(uVar8 - 0xc,iVar2);
      iVar2 = iVar2 + *(int *)(param_1 + 0x418);
      iVar6 = 0;
      do {
        pbVar3 = &DAT_1000bef7;
        if (*(int *)(param_1 + 0x344) != 0) {
          iVar5 = iVar6 + *(int *)(param_1 + 0x410);
          pbVar3 = (byte *)(*(int *)(param_1 + 0x344) +
                           (iVar5 + ((uint)((ulonglong)((longlong)iVar5 * 0x10624dd3) >> 0x26) -
                                    (iVar5 >> 0x1f)) * -1000) * 0x100);
        }
        iVar5 = recovered_1000ad40(param_1,pbVar3);
        if (iVar2 < iVar5) {
          text = &DAT_1000bef7;
          if ((*(int *)(param_1 + 0x344) != 0) && (iVar6 < *(int *)(param_1 + 0x414))) {
            iVar6 = *(int *)(param_1 + 0x410) + iVar6;
            text = (char *)(*(int *)(param_1 + 0x344) +
                           (iVar6 + ((uint)((ulonglong)((longlong)iVar6 * 0x10624dd3) >> 0x26) -
                                    (iVar6 >> 0x1f)) * -1000) * 0x100);
          }
          goto LAB_1000af18;
        }
        iVar2 = iVar2 - iVar5;
        iVar6 = iVar6 + 1;
      } while (iVar6 < *(int *)(param_1 + 0x414));
    }
  }
  text = (char *)(param_1 + 0x370);
LAB_1000af18:
  if ((*text == '\0') && (0 < *(int *)(param_1 + 0x414))) {
    if (*(int *)(param_1 + 0x344) == 0) {
      text = &DAT_1000bef7;
    }
    else {
      iVar2 = *(int *)(param_1 + 0x414) + *(int *)(param_1 + 0x410) + -1;
      text = (char *)(*(int *)(param_1 + 0x344) +
                     (iVar2 + ((uint)((ulonglong)((longlong)iVar2 * 0x10624dd3) >> 0x26) -
                              (iVar2 >> 0x1f)) * -1000) * 0x100);
    }
  }
  textSize = strlen(text);
  iVar2 = Ram40010800;
  if ((iVar2 == 0x50414d57) && (iVar2 = Ram40010804, iVar2 != 0)) {
    uVar8 = Ram40010808;
    bVar9 = 0xb < uVar8;
    if (bVar9) {
      uVar8 = Ram40010808;
    }
    if ((bVar9 && 0x183 < uVar8) && (pcVar1 = (code *)UINT_40010980, pcVar1 != (code *)0x0)) {
      uVar8 = (*pcVar1)(text,textSize);
      if (uVar8 == 0) {
        return 0;
      }
      *(undefined1 *)(param_1 + 0x424) = 1;
      return 1;
    }
  }
  return 0;
}

#undef DAT_1000bef7
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef Ram40010800
#undef Ram40010804
#undef Ram40010808
#undef UINT_40010980

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
 * Address: 0x1000b0dc
 */

undefined1 recovered_1000b0dc(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  int iVar2;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  char *outText;
  uint uVar6;
  byte bVar7;
  char *text;
  bool bVar8;
  bool bVar9;

  iVar2 = Ram40010800;
  if ((iVar2 == 0x50414d57) && (iVar2 = Ram40010804, iVar2 != 0)) {
    uVar4 = Ram40010808;
    bVar8 = 0xb < uVar4;
    if (bVar8) {
      uVar4 = Ram40010808;
    }
    if ((((bVar8 && 0x18b < uVar4) && (pcVar3 = (code *)UINT_40010988, pcVar3 != (code *)0x0)) &&
        (uVar4 = (*pcVar3)(), param_1 != 0)) && (uVar4 != 0)) {
      text = (char *)(param_1 + 0x370);
      uVar5 = strlen(text);
      if (uVar5 < 0x9f) {
        iVar2 = Ram40010800;
        uVar6 = 0x9f - uVar5;
        if (uVar4 < 0x9f - uVar5) {
          uVar6 = uVar4;
        }
        if (iVar2 != 0x50414d57) {
          return 0;
        }
        iVar2 = Ram40010804;
        if (iVar2 == 0) {
          return 0;
        }
        uVar4 = Ram40010808;
        bVar8 = 0xb < uVar4;
        if (bVar8) {
          uVar4 = Ram40010808;
        }
        if (bVar8 && 0x4f < uVar4) {
          pcVar3 = (code *)UINT_4001084c;
          if (pcVar3 == (code *)0x0) {
            return 0;
          }
          outText = (*pcVar3)(uVar6 + 1);
          if (outText == (char *)0x0) {
            return 0;
          }
          iVar2 = Ram40010800;
          if (((iVar2 == 0x50414d57) && (iVar2 = Ram40010804, iVar2 != 0)) &&
             ((uVar4 = Ram40010808, 0xb < uVar4 && (uVar4 = Ram40010808, 0x30 < uVar4 >> 3)))) {
            pcVar3 = (code *)UINT_40010984;
            if ((pcVar3 == (code *)0x0) || (uVar4 = (*pcVar3)(outText,uVar6 + 1), uVar4 == 0)) {
              bVar8 = false;
            }
            else {
              uVar6 = 0;
              bVar8 = false;
              do {
                bVar1 = outText[uVar6];
                uVar6 = uVar6 + 1;
                bVar7 = bVar1;
                if ((bVar1 & 0xfb) == 9) {
                  bVar7 = 0x20;
                }
                if (bVar1 == 10) {
                  bVar7 = 0x20;
                }
                if ((byte)(bVar7 - 0x20) < 0x5f) {
                  text[uVar5] = bVar7;
                  uVar5 = uVar5 + 1;
                  bVar8 = true;
                }
              } while ((uVar6 < uVar4) && (uVar5 < 0x9f));
            }
          }
          else {
            bVar8 = false;
            *outText = '\0';
          }
          text[uVar5] = '\0';
          iVar2 = Ram40010800;
          if ((iVar2 == 0x50414d57) && (iVar2 = Ram40010804, iVar2 != 0)) {
            uVar4 = Ram40010808;
            bVar9 = 0xb < uVar4;
            if (bVar9) {
              uVar4 = Ram40010808;
            }
            if ((bVar9 && 0x53 < uVar4) && (pcVar3 = (code *)UINT_40010850, pcVar3 != (code *)0x0))
            {
              (*pcVar3)(outText);
            }
          }
          if (bVar8) {
            *(undefined1 *)(param_1 + 0x424) = 1;
            return 1;
          }
          return 0;
        }
        return 0;
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
#undef UINT_40010984
#undef UINT_40010988

#define local_124 (*(byte (*)[260])(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b320
 */

void recovered_1000b320(int param_1,byte *param_2)

{
  unsigned char frame[352] __attribute__((aligned(16))) = {0};

  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  byte bVar7;

  if (param_2 == (byte *)0x0) {
    return;
  }
  bVar7 = *param_2;
  if (bVar7 == 0) {
    return;
  }
  uVar2 = 0;
LAB_1000b378:
  while (bVar7 == 10) {
    local_124[uVar2] = 0;
    if (param_1 != 0) {
      uVar2 = 0;
      if (*(int *)(param_1 + 0x344) != 0) {
        iVar6 = *(int *)(param_1 + 0x414);
        iVar4 = *(int *)(param_1 + 0x410);
        if (iVar6 < 1000) {
          *(int *)(param_1 + 0x414) = iVar6 + 1;
          iVar4 = iVar4 + iVar6;
        }
        else {
          iVar4 = recovered_1000ad40(param_1,(byte *)(*(int *)(param_1 + 0x344) +
                                                     (iVar4 + ((uint)((ulonglong)
                                                                      ((longlong)iVar4 * 0x10624dd3)
                                                                     >> 0x26) - (iVar4 >> 0x1f)) *
                                                              -1000) * 0x100));
          iVar6 = *(int *)(param_1 + 0x418) - iVar4;
          iVar3 = (*(int *)(param_1 + 0x410) + 1) % 1000;
          if (iVar6 == 0 || *(int *)(param_1 + 0x418) < iVar4) {
            iVar6 = 0;
          }
          *(int *)(param_1 + 0x418) = iVar6;
          *(int *)(param_1 + 0x410) = iVar3;
          iVar4 = *(int *)(param_1 + 0x414) + iVar3 + -1;
        }
        uVar5 = 0;
        uVar2 = 0;
        if (local_124[0] != 0) {
          bVar7 = local_124[0];
          do {
            bVar1 = local_124[uVar5 + 1];
            if (bVar7 < 0x21) {
              bVar7 = 0x20;
            }
            *(byte *)(*(int *)(param_1 + 0x344) + (iVar4 % 1000) * 0x100 + uVar5) = bVar7;
            uVar5 = uVar5 + 1;
          } while ((bVar1 != 0) && (bVar7 = bVar1, uVar5 < 0xff));
        }
        *(undefined1 *)(*(int *)(param_1 + 0x344) + (iVar4 % 1000) * 0x100 + uVar5) = 0;
      }
      goto LAB_1000b374;
    }
    uVar2 = 0;
    param_2 = param_2 + 1;
    bVar7 = *param_2;
  }
  if (bVar7 != 0xd) {
    if (bVar7 == 0) {
      if (uVar2 == 0) {
        return;
      }
      local_124[uVar2] = 0;
      if (param_1 != 0) {
        uVar2 = *(uint *)(param_1 + 0x344);
      }
      if (param_1 == 0 || uVar2 == 0) {
        return;
      }
      iVar6 = *(int *)(param_1 + 0x414);
      iVar4 = *(int *)(param_1 + 0x410);
      if (iVar6 < 1000) {
        *(int *)(param_1 + 0x414) = iVar6 + 1;
        iVar4 = iVar4 + iVar6;
      }
      else {
        iVar4 = recovered_1000ad40(param_1,(byte *)(uVar2 + (iVar4 + ((uint)((ulonglong)
                                                                             ((longlong)iVar4 *
                                                                             0x10624dd3) >> 0x26) -
                                                                     (iVar4 >> 0x1f)) * -1000) *
                                                            0x100));
        iVar6 = *(int *)(param_1 + 0x418) - iVar4;
        if (iVar6 == 0 || *(int *)(param_1 + 0x418) < iVar4) {
          iVar6 = 0;
        }
        *(int *)(param_1 + 0x418) = iVar6;
        iVar4 = (*(int *)(param_1 + 0x410) + 1) % 1000;
        *(int *)(param_1 + 0x410) = iVar4;
        iVar4 = *(int *)(param_1 + 0x414) + iVar4 + -1;
      }
      uVar2 = 0;
      if (local_124[0] != 0) {
        do {
          bVar7 = local_124[uVar2 + 1];
          if (local_124[0] < 0x21) {
            local_124[0] = 0x20;
          }
          *(byte *)(*(int *)(param_1 + 0x344) + (iVar4 % 1000) * 0x100 + uVar2) = local_124[0];
          uVar2 = uVar2 + 1;
        } while ((bVar7 != 0) && (local_124[0] = bVar7, uVar2 < 0xff));
      }
      *(undefined1 *)(*(int *)(param_1 + 0x344) + (iVar4 % 1000) * 0x100 + uVar2) = 0;
      return;
    }
    if (uVar2 + 1 < 0x100) {
      local_124[uVar2] = bVar7;
      param_2 = param_2 + 1;
      bVar7 = *param_2;
      uVar2 = uVar2 + 1;
      goto LAB_1000b378;
    }
  }
LAB_1000b374:
  param_2 = param_2 + 1;
  bVar7 = *param_2;
  goto LAB_1000b378;
}

#undef local_124

#undef DAT_1000bef7
#define DAT_1000bef7 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xcfU)))
#undef DAT_1000bf2b
#define DAT_1000bf2b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x103U)))
#undef DAT_1000bf93
#define DAT_1000bf93 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x16bU)))
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
#define acStack_258 (*(char (*)[128])(frame + 24))
#define local_7f (*(byte (*)[99])(frame + 497))
#define auStack_1d8 (*(undefined1 (*)[8])(frame + 152))
#define local_1d0 (*(byte *)(frame + 160))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b5d8
 */

void recovered_1000b5d8(char *param_1,ulong param_2,undefined1 *param_3)

{
  unsigned char frame[656] __attribute__((aligned(16))) = {0};

  uint uVar1;
  code *pcVar2;
  undefined1 *vararg1;
  int iVar3;
  bool bVar4;

  if (param_1 == (char *)0x0) {
    return;
  }
  pf_varargs_1000bfd4__4_(acStack_258,0x80,&DAT_1000bf2b,((uintptr_t)pf_module_state + 0x170U));
  memset(auStack_1d8,0,0x1bc);
  iVar3 = Ram40010800;
  if ((iVar3 == 0x50414d57) && (iVar3 = Ram40010804, iVar3 != 0)) {
    uVar1 = Ram40010808;
    bVar4 = 0xb < uVar1;
    if (bVar4) {
      uVar1 = Ram40010808;
    }
    if (((bVar4 && 0x133 < uVar1) && (pcVar2 = (code *)Ram40010930, pcVar2 != (code *)0x0)) &&
       (iVar3 = (*pcVar2)(auStack_1d8), iVar3 != 0)) {
      bVar4 = (local_1d0 & 4) != 0;
      if (bVar4) {
        local_1d0 = local_7f[0];
      }
      if (bVar4 && local_1d0 != 0) {
        pf_varargs_1000bfd4__4_(acStack_258,0x80,&DAT_1000bf2b,(uint)local_7f);
      }
    }
  }
  vararg1 = &DAT_1000bef7;
  if (param_3 != (undefined1 *)0x0) {
    vararg1 = param_3;
  }
  pf_varargs_1000bfd4__4__4_(param_1,param_2,&DAT_1000bf93,(uint)acStack_258,(uint)vararg1);
  return;
}

#undef DAT_1000bef7
#undef DAT_1000bf2b
#undef DAT_1000bf93
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_40010930
#undef Ram40010800
#undef Ram40010804
#undef Ram40010808
#undef Ram40010930
#undef acStack_258
#undef local_7f
#undef auStack_1d8
#undef local_1d0

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
 * Address: 0x1000b708
 */

bool recovered_1000b708(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;

  if (param_1 == 0) {
    return true;
  }
  uVar4 = 0;
  *(char *)(param_1 + 0x638) = '\0';
  iVar2 = Ram40010800;
  if ((iVar2 == 0x50414d57) && (iVar2 = Ram40010804, iVar2 != 0)) {
    uVar1 = Ram40010808;
    bVar5 = 0xb < uVar1;
    if (bVar5) {
      uVar1 = Ram40010808;
    }
    if ((bVar5 && 0x9b < uVar1) && (pcVar3 = (code *)UINT_40010898, pcVar3 != (code *)0x0)) {
      uVar4 = (*pcVar3)((char *)(param_1 + 0x438),(char *)(param_1 + 0x638),0x1000);
    }
  }
  *(uint *)(param_1 + 0x430) = uVar4;
  *(undefined4 *)(param_1 + 0x42c) = 1;
  return *(int *)(param_1 + 0x430) == 0;
}

#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef Ram40010800
#undef Ram40010804
#undef Ram40010808
#undef UINT_40010898

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b7ac
 */

bool recovered_1000b7ac(char *param_1,byte *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;

  bVar5 = false;
  if (param_2 != (byte *)0x0) {
    uVar1 = strlen(param_1);
    uVar2 = strlen((char *)param_2);
    if (uVar2 - 1 < uVar1) {
      do {
        uVar3 = (uint)(byte)param_1[uVar1 - uVar2];
        uVar4 = (uint)*param_2;
        if (uVar3 - 0x41 < 0x1a) {
          uVar3 = uVar3 | 0x20;
        }
        if (uVar4 - 0x41 < 0x1a) {
          uVar4 = uVar4 | 0x20;
        }
        bVar5 = uVar3 == uVar4;
      } while ((uVar3 == uVar4) && (uVar2 = uVar2 - 1, param_2 = param_2 + 1, uVar2 != 0));
    }
  }
  return bVar5;
}


#undef DAT_1000bb10
#define DAT_1000bb10 (*(uint64_t *)(0x1000bb10U))
#undef DAT_1000bb18
#define DAT_1000bb18 (*(uint64_t *)(0x1000bb18U))
#undef DAT_1000bef7
#define DAT_1000bef7 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xcfU)))
#define local_24 (*(int *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b830
 */

void recovered_1000b830(undefined8 *param_1,int param_2)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  int iVar2;
  uint a;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;

  uVar1 = (0x13c0000000cU);
  if (param_2 == 0) {
    uVar3 = 0xc;
    *param_1 = (0xa0000000aU);
    param_1[1] = uVar1;
    uVar10 = 0x15e;
    uVar9 = 0x1d;
    iVar8 = 0;
    local_24 = 0x13c;
    iVar2 = 0;
  }
  else {
    iVar8 = *(int *)(param_2 + 0x36c);
    iVar2 = *(int *)(param_2 + 8);
    uVar10 = iVar8 + 2;
    uVar9 = iVar8 + 6;
    uVar3 = uVar10;
    if (iVar8 < 1) {
      uVar3 = 0xc;
    }
    if (iVar2 == 0) {
      iVar2 = 400;
    }
    a = (iVar2 - uVar3) - 0x26;
    if (iVar8 < 1) {
      uVar4 = 0x10;
      bVar11 = SBORROW4(a,0x10);
      iVar2 = (iVar2 - uVar3) + -0x36;
    }
    else {
      bVar11 = SBORROW4(a,uVar9);
      iVar2 = a - uVar9;
      uVar4 = uVar9;
    }
    uVar3 = a;
    if (iVar2 < 0 != bVar11) {
      uVar3 = uVar4;
    }
    *(undefined4 *)((int)param_1 + 4) = 10;
    *(undefined4 *)param_1 = 10;
    local_24 = uVar3 - 0x22;
    if (uVar3 < 0x34) {
      local_24 = 0x12;
    }
    *(undefined4 *)(param_1 + 1) = 0xc;
    *(int *)((int)param_1 + 0xc) = local_24;
    if (iVar8 < 1) {
      uVar10 = 0xc;
      if ((int)a < 0x11) {
        a = 0x10;
      }
    }
    else if ((int)a <= (int)uVar9) {
      a = uVar9;
    }
    uVar9 = recovered_100040b0(a,uVar10);
    if (uVar9 < 2) {
      uVar9 = 1;
    }
    if (*(int *)(param_2 + 0x414) < 1) {
      iVar8 = 0;
      iVar2 = 0;
    }
    else {
      iVar2 = 0;
      iVar8 = 0;
      do {
        pbVar5 = &DAT_1000bef7;
        if (*(int *)(param_2 + 0x344) != 0) {
          iVar6 = iVar2 + *(int *)(param_2 + 0x410);
          pbVar5 = (byte *)(*(int *)(param_2 + 0x344) +
                           (iVar6 + ((uint)((ulonglong)((longlong)iVar6 * 0x10624dd3) >> 0x26) -
                                    (iVar6 >> 0x1f)) * -1000) * 0x100);
        }
        iVar6 = recovered_1000ad40(param_2,pbVar5);
        iVar8 = iVar6 + iVar8;
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(int *)(param_2 + 0x414));
      if (*(int *)(param_2 + 0x414) < 1) {
        iVar2 = 0;
      }
      else {
        iVar6 = 0;
        iVar2 = 0;
        do {
          pbVar5 = &DAT_1000bef7;
          if (*(int *)(param_2 + 0x344) != 0) {
            iVar7 = iVar6 + *(int *)(param_2 + 0x410);
            pbVar5 = (byte *)(*(int *)(param_2 + 0x344) +
                             (iVar7 + ((uint)((ulonglong)((longlong)iVar7 * 0x10624dd3) >> 0x26) -
                                      (iVar7 >> 0x1f)) * -1000) * 0x100);
          }
          iVar7 = recovered_1000ad40(param_2,pbVar5);
          iVar2 = iVar7 + iVar2;
          iVar6 = iVar6 + 1;
        } while (iVar6 < *(int *)(param_2 + 0x414));
      }
    }
    iVar7 = *(int *)(param_2 + 0x36c);
    iVar6 = *(int *)(param_2 + 8);
    uVar3 = 0xc;
    uVar10 = 0xc;
    if (0 < iVar7) {
      uVar10 = iVar7 + 2U;
    }
    if (iVar6 == 0) {
      iVar6 = 400;
    }
    uVar10 = (iVar6 - uVar10) - 0x26;
    if (iVar7 < 1) {
      if ((int)uVar10 < 0x11) {
        uVar10 = 0x10;
      }
    }
    else {
      if ((int)uVar10 <= (int)(iVar7 + 6U)) {
        uVar10 = iVar7 + 6U;
      }
      uVar3 = iVar7 + 2U;
    }
  }
  uVar10 = recovered_100040b0(uVar10,uVar3);
  if (uVar10 < 2) {
    uVar10 = 1;
  }
  if (((int)uVar9 < iVar8) && (0 < (int)(iVar2 - uVar10))) {
    iVar8 = recovered_10004138(uVar9 * local_24,iVar8);
    iVar6 = *(int *)(param_2 + 0x418);
    if (iVar8 < 0x13) {
      iVar8 = 0x12;
    }
    if (local_24 <= iVar8) {
      iVar8 = local_24;
    }
    *(int *)((int)param_1 + 0xc) = iVar8;
    iVar2 = recovered_10004138((local_24 - iVar8) * iVar6,iVar2 - uVar10);
    *(int *)((int)param_1 + 4) = iVar2 + 10;
  }
  return;
}

#undef DAT_1000bb10
#undef DAT_1000bb18
#undef DAT_1000bef7
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
#undef UINT_40010850
#define UINT_40010850 (*(uint *)(0x40010850U))
#undef UINT_40010978
#define UINT_40010978 (*(uint *)(0x40010978U))
#define local_38 (*(void * *)(frame + 40))
#define local_34 (*(int *)(frame + 44))
#define local_2c (*(uint *)(frame + 52))
#define local_28 (*(uint *)(frame + 56))
#define local_24 (*(int *)(frame + 60))
#define local_44 (*(int *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000bb20
 */

void recovered_1000bb20(int param_1,int param_2,int param_3,char *param_4,uint param_5,uint param_6)

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
         (uVar5 = (*pcVar4)(param_4,param_5,0x80000001,
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
#undef local_38
#undef local_34
#undef local_2c
#undef local_28
#undef local_24
#undef local_44
