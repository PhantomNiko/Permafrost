/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001860
 */

uint recovered_10001860(uint a,uint b)

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
 * Address: 0x100018b0
 */

uint recovered_100018b0(uint a,uint b)

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
 * Address: 0x100018e8
 */

int recovered_100018e8(int a,int b)

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
 * Address: 0x10001958
 */

int recovered_10001958(int a,int b)

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
 * Address: 0x100019c0
 */

ulonglong recovered_100019c0(ulonglong a,ulonglong b)

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
 * Address: 0x10001aa4
 */

ulonglong recovered_10001aa4(ulonglong a,ulonglong b)

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
 * Address: 0x10001b24
 */

longlong recovered_10001b24(longlong a,longlong b)

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
 * Address: 0x10001c44
 */

longlong recovered_10001c44(longlong a,longlong b)

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


#undef DAT_10001d80
#define DAT_10001d80 (*(double *)(0x10001d80U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001d00
 */

ulonglong recovered_10001d00(double x)

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

#undef DAT_10001d80

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001d88
 */

longlong recovered_10001d88(double x)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  ulonglong uVar2;

  dVar1 = (double)(((ulonglong)x & 0xffffffff00000000) + ((ulonglong)x & 0xffffffff));
  if (NAN(dVar1)) {
    return 0;
  }
  if (dVar1 < 0.0) {
    uVar2 = recovered_10001d00(-dVar1);
    return CONCAT44(-((int)(uVar2 >> 0x20) + (uint)((int)uVar2 != 0)),-(int)uVar2);
  }
  uVar2 = recovered_10001d00(x);
  return uVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001dd4
 */

ulonglong recovered_10001dd4(float x)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulonglong uVar1;

  uVar1 = recovered_10001d00((double)x);
  return uVar1;
}


#undef DAT_10008004
#define DAT_10008004 (*(code * *)(((uintptr_t)pf_module_state + 0x410U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001de4
 */

longlong recovered_10001de4(float x)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  longlong lVar1;

                    /* WARNING: Could not recover jumptable at ((uintptr_t)pf_module_state + 0x3b4U). Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = (*DAT_10008004)(SUB84((double)x,0),(int)((ulonglong)(double)x >> 0x20));
  return lVar1;
}

#undef DAT_10008004

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001df4
 */

double recovered_10001df4(ulonglong x)

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
 * Address: 0x10001e3c
 */

double recovered_10001e3c(longlong x)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  if (x < 0) {
    dVar1 = recovered_10001df4(CONCAT44(-((int)((ulonglong)x >> 0x20) + (uint)((int)x != 0)),-(int)x
                                       ));
    return -dVar1;
  }
  dVar1 = recovered_10001df4(x);
  return dVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001e64
 */

float recovered_10001e64(ulonglong x)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_10001df4(x);
  return (float)pf_bits_double(((pf_double_bits(dVar1) & 0xffffffff00000000) + (pf_double_bits(dVar1) & 0xffffffff)));
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001e80
 */

float recovered_10001e80(longlong x)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_10001e3c(x);
  return (float)pf_bits_double(((pf_double_bits(dVar1) & 0xffffffff00000000) + (pf_double_bits(dVar1) & 0xffffffff)));
}


#undef DAT_10007d1a
#define DAT_10007d1a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x126U)))
#undef DAT_10008094
#define DAT_10008094 (*(uint *)(((uintptr_t)pf_module_state + 0x4a0U)))
#undef DAT_10008098
#define DAT_10008098 (*(uint *)(((uintptr_t)pf_module_state + 0x4a4U)))
#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_40010828
#define DAT_40010828 (*(uint8_t *)(0x40010828U))
#undef Ram40010800
#define Ram40010800 (*(uint32_t *)(0x40010800U))
#undef Ram40010804
#define Ram40010804 (*(uint32_t *)(0x40010804U))
#undef Ram40010808
#define Ram40010808 (*(uint32_t *)(0x40010808U))
#undef Ram40010828
#define Ram40010828 (*(uint32_t *)(0x40010828U))
#undef UINT_4001089c
#define UINT_4001089c (*(uint *)(0x4001089cU))
#undef UINT_40010908
#define UINT_40010908 (*(uint *)(0x40010908U))
#undef UINT_4001090c
#define UINT_4001090c (*(uint *)(0x4001090cU))
#undef str_10007ccc
#define str_10007ccc (*(char (*)[1])(((uintptr_t)pf_module_state + 0xd8U)))
#undef str_10007cf6
#define str_10007cf6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x102U)))
#undef str_10007d07
#define str_10007d07 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x113U)))
#define local_40 (*(byte (*)[8])(frame + 26064))
#define local_38 (*(byte *)(frame + 26072))
#define local_30 (*(int *)(frame + 26080))
#define local_2c (*(int *)(frame + 26084))
#define local_28 (*(int *)(frame + 26088))
#define auStack_3eb8 (*(uint (*)[3848])(frame + 10072))
#define local_65f4 (*(int (*)[17])(frame + 28))
#define local_65a0 (*(undefined4 *)(frame + 112))
#define local_6580 (*(uint *)(frame + 144))
#define local_657c (*(int *)(frame + 148))
#define local_6578 (*(int *)(frame + 152))
#define local_6574 (*(int *)(frame + 156))
#define local_6334 (*(int *)(frame + 732))
#define auStack_65b0 (*(undefined1 (*)[16])(frame + 96))
#define local_6330 (*(int *)(frame + 736))
#define local_630c (*(int *)(frame + 772))
#define local_5ff8 (*(int *)(frame + 1560))
#define local_5ff4 (*(uint *)(frame + 1564))
#define local_5ff0 (*(int *)(frame + 1568))
#define local_5fec (*(int *)(frame + 1572))
#define auStack_6338 (*(undefined1 (*)[4])(frame + 728))
#define local_5fe8 (*(int *)(frame + 1576))
#define local_5fe4 (*(uint *)(frame + 1580))
#define local_5fdc (*(undefined4 *)(frame + 1588))
#define local_298 (*(uint *)(frame + 25464))
#define local_140 (*(undefined1 *)(frame + 25808))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001e9c
 */

int recovered_10001e9c(void)

{
  unsigned char frame[26160] __attribute__((aligned(16))) = {0};

  byte bVar1;
  code *pcVar2;
  uchar uVar3;
  uint uVar4;
  int extraout_r1 = 0;
  int iVar5;
  uint uVar6;
  uint extraout_r3 = 0;
  int iVar7;
  int iVar8;
  bool bVar9;
  bool bVar10;

  memset(auStack_6338,0,0x62f8);
  pf_app_window_spec(auStack_65b0,str_10007cf6,DAT_10008094,DAT_10008098);
  local_6580 = local_6580 | 1;
  local_65a0 = 0xefefef;
  uVar4 = terror_ui_window_open(auStack_6338,auStack_65b0);
  if (uVar4 != 0) {
    local_5ff8 = local_630c;
    if (local_630c != 0) {
      DAT_10008094 = local_6334;
      local_5fdc = 0xffffffff;
      local_5fe4 = 0xffffffff;
      DAT_10008098 = local_6330;
      local_5ff4 = 0;
      terror_ui_window_set_menus(auStack_6338,str_10007d07,&DAT_10007d1a,&DAT_10007d1a);
      recovered_100024ec((int)auStack_6338);
      recovered_10003068((int)auStack_6338);
      memset(auStack_65b0,0,0x278);
      iVar7 = local_6330;
      iVar8 = local_6334;
      uVar4 = terror_ui_window_query(auStack_6338,auStack_65b0);
      if (uVar4 != 0) {
        do {
          uVar3 = terror_ui_window_info_requests_close(auStack_65b0);
          if ((uVar3 != '\0') || (uVar4 = terror_ui_window_sync_buffer(auStack_6338,auStack_65b0), uVar4 == 0)
             ) break;
          DAT_10008094 = local_6334;
          local_5ff8 = local_630c;
          DAT_10008098 = local_6330;
          iVar5 = local_6334;
          if (local_6334 != iVar8 || local_6330 != iVar7) {
            recovered_10003068((int)auStack_6338);
            iVar5 = extraout_r1;
          }
          if (local_657c != 0) {
            iVar5 = local_5fe8;
          }
          if ((local_657c != 0 && local_657c != iVar5) && (local_5fe8 = local_657c, local_6578 == 1)
             ) {
            if (local_6574 == 2) {
              recovered_100061d8((int)auStack_6338);
LAB_10002304:
              recovered_10003068((int)auStack_6338);
            }
            else if (local_6574 == 1) {
              recovered_100060d0((int)auStack_6338);
            }
            else if ((local_6574 == 0) && (1 < local_5fe4 + 1)) {
              iVar8 = Ram40010800;
              if ((iVar8 == 0x50414d57) && (iVar8 = Ram40010804, iVar8 != 0)) {
                uVar4 = Ram40010808;
                bVar9 = 0xb < uVar4;
                if (bVar9) {
                  uVar4 = Ram40010808;
                }
                if ((bVar9 && 0x10f < uVar4) &&
                   (pcVar2 = (code *)UINT_4001090c, pcVar2 != (code *)0x0)) {
                  (*pcVar2)(local_5fe4);
                }
              }
              local_140 = 0;
              local_5fe4 = 0xffffffff;
              recovered_100024ec((int)auStack_6338);
              goto LAB_10002304;
            }
          }
          memset(local_40,0,0x1c);
          uVar4 = terror_ui_window_pointer_state(auStack_6338,local_40);
          if (uVar4 != 0) {
            bVar9 = (local_38 & 1) != 0;
            bVar1 = local_38;
            if (bVar9) {
              bVar1 = local_40[0];
            }
            if ((bVar9 && (bVar1 & 2) != 0) && (local_30 != local_5fec)) {
              local_5fec = local_30;
              uVar6 = local_2c - 0x5c;
              uVar4 = extraout_r3;
              if (0xffffffb3 < uVar6) {
                uVar4 = local_28 - 0x1e;
              }
              if (0xffffffb3 < uVar6 && 0xffffffed < uVar4) {
                if (local_5fe4 + 1 < 2) goto LAB_100020ec;
                iVar8 = Ram40010800;
                if ((iVar8 == 0x50414d57) && (iVar8 = Ram40010804, iVar8 != 0)) {
                  uVar4 = Ram40010808;
                  bVar9 = 0xb < uVar4;
                  if (bVar9) {
                    uVar4 = Ram40010808;
                  }
                  if ((bVar9 && 0x10f < uVar4) &&
                     (pcVar2 = (code *)UINT_4001090c, pcVar2 != (code *)0x0)) {
                    (*pcVar2)(local_5fe4);
                  }
                }
                local_140 = 0;
                local_5fe4 = 0xffffffff;
LAB_10002360:
                recovered_100024ec((int)auStack_6338);
              }
              else {
                if (0xffffffb3 < uVar6) {
                  uVar4 = local_28 - 0x34;
                }
                if (0xffffffb3 < uVar6 && 0xffffffed < uVar4) {
                  recovered_100060d0((int)auStack_6338);
                }
                else {
                  bVar9 = 0xffffffb3 < uVar6;
                  if (bVar9) {
                    uVar6 = local_28 - 0x4a;
                  }
                  if (bVar9 && 0xffffffed < uVar6) {
                    recovered_100061d8((int)auStack_6338);
                  }
                  else if (((local_28 - 0x7cU < 0xc6) && (0xf < local_2c)) &&
                          (local_2c < (int)(DAT_10008094 + -0x10))) {
                    uVar4 = (short)((ushort)(local_28 - 0x7cU) & 0xff) * 0x39;
                    if (local_298 <= uVar4 >> 10) goto LAB_100020ec;
                    local_5fe4 = auStack_3eb8[(short)(uVar4 >> 10) * 0x6e];
                  }
                  else {
                    if ((local_5ff4 & 0xfffffffe) == 2) {
                      uVar4 = local_2c - 0x46;
                      bVar10 = 0xf8 < uVar4;
                      bVar9 = uVar4 == 0xf9;
                      if (uVar4 < 0xfa) {
                        bVar10 = 0x14 < local_28 - 0x188U;
                        bVar9 = local_28 - 0x188U == 0x15;
                      }
                      if (!bVar10 || bVar9) {
                        recovered_100062d4((int)auStack_6338);
                        goto LAB_10002360;
                      }
                    }
                    uVar4 = local_2c - 0xc6;
                    uVar6 = local_28 - 0x164;
                    bVar10 = 0x72 < uVar4;
                    bVar9 = uVar4 == 0x73;
                    if (uVar4 < 0x74) {
                      uVar4 = 0;
                      bVar10 = 0x16 < uVar6;
                      bVar9 = uVar6 == 0x17;
                    }
                    if (bVar10 && !bVar9) {
                      uVar4 = local_2c - 0x13a;
                      bVar9 = 0x86 < uVar4;
                      if (uVar4 < 0x88) {
                        uVar4 = 1;
                        bVar9 = 0x17 < uVar6;
                      }
                      if (bVar9) {
                        uVar4 = local_2c - 0x1c2;
                        bVar9 = 0x72 < uVar4;
                        if (uVar4 < 0x74) {
                          uVar4 = 2;
                          bVar9 = 0x17 < uVar6;
                        }
                        if (bVar9) {
                          uVar4 = local_2c - 0x24a;
                          bVar9 = 0x72 < uVar4;
                          if (uVar4 < 0x74) {
                            uVar4 = 3;
                            bVar9 = 0x17 < uVar6;
                          }
                          if (bVar9) {
                            uVar4 = 0x2be;
                            bVar9 = 0x72 < local_2c - 0x2beU;
                            if (local_2c - 0x2beU < 0x74) {
                              uVar4 = 4;
                              bVar9 = 0x17 < uVar6;
                            }
                            if (bVar9) goto LAB_100020ec;
                          }
                        }
                      }
                    }
                    local_5ff4 = uVar4;
                  }
                }
              }
              recovered_10003068((int)auStack_6338);
            }
          }
LAB_100020ec:
          memset(local_65f4,0,0x44);
          iVar8 = Ram40010800;
          if ((iVar8 == 0x50414d57) && (iVar8 = Ram40010804, iVar8 != 0)) {
            uVar4 = Ram40010808;
            bVar9 = 0xb < uVar4;
            if (bVar9) {
              uVar4 = Ram40010808;
            }
            if ((bVar9 && 0x10b < uVar4) && (pcVar2 = (code *)UINT_40010908, pcVar2 != (code *)0x0))
            {
              (*pcVar2)(local_65f4);
            }
          }
          if ((local_5ff0 == 0) || (0x11 < (uint)(local_65f4[0] - local_5ff0))) {
            local_5ff0 = local_65f4[0];
            recovered_100024ec((int)auStack_6338);
            recovered_10003068((int)auStack_6338);
          }
          iVar8 = Ram40010800;
          if ((iVar8 == 0x50414d57) && (iVar8 = Ram40010804, iVar8 != 0)) {
            uVar4 = Ram40010808;
            bVar9 = 0xb < uVar4;
            if (bVar9) {
              uVar4 = Ram40010808;
            }
            if ((bVar9 && 0x9f < uVar4) && (pcVar2 = (code *)UINT_4001089c, pcVar2 != (code *)0x0))
            {
              (*pcVar2)();
            }
          }
          memset(auStack_65b0,0,0x278);
          iVar7 = local_6330;
          iVar8 = local_6334;
          uVar4 = terror_ui_window_query(auStack_6338,auStack_65b0);
        } while (uVar4 != 0);
      }
      terror_ui_window_close(auStack_6338);
      return 0;
    }
    terror_ui_window_close(auStack_6338);
  }
  iVar8 = Ram40010800;
  if ((iVar8 == 0x50414d57) && (iVar8 = Ram40010804, iVar8 != 0)) {
    uVar4 = Ram40010808;
    bVar9 = 0xb < uVar4;
    if (bVar9) {
      uVar4 = Ram40010808;
    }
    if ((bVar9 && 0x2b < uVar4) && (pcVar2 = (code *)Ram40010828, pcVar2 != (code *)0x0)) {
      (*pcVar2)(str_10007ccc);
    }
  }
  return 1;
}

#undef DAT_10007d1a
#undef DAT_10008094
#undef DAT_10008098
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_40010828
#undef Ram40010800
#undef Ram40010804
#undef Ram40010808
#undef Ram40010828
#undef UINT_4001089c
#undef UINT_40010908
#undef UINT_4001090c
#undef str_10007ccc
#undef str_10007cf6
#undef str_10007d07
#undef local_40
#undef local_38
#undef local_30
#undef local_2c
#undef local_28
#undef auStack_3eb8
#undef local_65f4
#undef local_65a0
#undef local_6580
#undef local_657c
#undef local_6578
#undef local_6574
#undef local_6334
#undef auStack_65b0
#undef local_6330
#undef local_630c
#undef local_5ff8
#undef local_5ff4
#undef local_5ff0
#undef local_5fec
#undef auStack_6338
#undef local_5fe8
#undef local_5fe4
#undef local_5fdc
#undef local_298
#undef local_140

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
#undef UINT_400108b8
#define UINT_400108b8 (*(uint *)(0x400108b8U))
#undef UINT_40010904
#define UINT_40010904 (*(uint *)(0x40010904U))
#undef UINT_40010908
#define UINT_40010908 (*(uint *)(0x40010908U))
#undef UINT_40010910
#define UINT_40010910 (*(uint *)(0x40010910U))
#define local_3954 (*(int *)(frame + 28))
#define local_3950 (*(uint *)(frame + 32))
#define local_394c (*(uint *)(frame + 36))
#define local_3944 (*(uint *)(frame + 44))
#define local_3934 (*(uint *)(frame + 60))
#define local_3930 (*(int *)(frame + 64))
#define local_392c (*(byte *)(frame + 68))
#define local_3904 (*(uint *)(frame + 108))
#define local_3900 (*(uint *)(frame + 112))
#define local_38fc (*(uint *)(frame + 116))
#define local_38f8 (*(uint *)(frame + 120))
#define local_38f4 (*(uint *)(frame + 124))
#define local_38f0 (*(uint *)(frame + 128))
#define local_38ec (*(uint *)(frame + 132))
#define auStack_1d8 (*(undefined1 (*)[440])(frame + 14232))
#define local_38e8 (*(uint *)(frame + 136))
#define local_38a0 (*(int (*)[18])(frame + 208))
#define local_3858 (*(int (*)[5])(frame + 280))
#define local_3844 (*(int (*)[3483])(frame + 300))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100024ec
 */

void recovered_100024ec(int param_1)

{
  unsigned char frame[14736] __attribute__((aligned(16))) = {0};

  ulonglong *puVar1;
  longlong lVar2;
  bool bVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  void *pvVar10;
  uint uVar11;
  undefined4 uVar12;
  uint uVar13;
  int *piVar14;
  int *piVar15;
  uint uVar16;
  undefined8 *puVar17;
  uint uVar18;
  ushort *puVar19;
  uint uVar20;
  int *piVar21;
  undefined1 uVar22;
  uint uVar23;
  void *pvVar24;
  undefined2 uVar25;
  int iVar26;
  void *pvVar27;
  int *piVar28;
  int iVar29;
  bool bVar30;
  uint128 auVar31;
  undefined8 uVar32;
  ulonglong uVar33;
  ulonglong uVar34;
  ulonglong uVar35;

  local_3934 = 0;
  if (param_1 == 0) {
    return;
  }
  iVar26 = *(int *)(param_1 + 0x354);
  memset(local_38a0,0,0x44);
  memset(&local_3930,0,0x8c);
  iVar29 = Ram40010800;
  if (iVar29 != 0x50414d57) {
    return;
  }
  iVar29 = Ram40010804;
  if (iVar29 == 0) {
    return;
  }
  uVar7 = Ram40010808;
  bVar30 = 0xb < uVar7;
  if (bVar30) {
    uVar7 = Ram40010808;
  }
  if (!bVar30 || uVar7 < 0x10c) {
    return;
  }
  pcVar4 = (code *)UINT_40010908;
  if (pcVar4 == (code *)0x0) {
    return;
  }
  uVar7 = (*pcVar4)(local_38a0);
  if (uVar7 == 0) {
    return;
  }
  uVar7 = (uint)*(byte *)(param_1 + 0x609c);
  if (uVar7 == 1) {
    uVar13 = local_38a0[0] - *(int *)(param_1 + 0x3a4);
    if (uVar13 == 0) {
      uVar13 = uVar7;
    }
  }
  else {
    uVar13 = uVar7;
  }
  iVar29 = Ram40010800;
  if ((iVar29 == 0x50414d57) && (iVar29 = Ram40010804, iVar29 != 0)) {
    uVar7 = Ram40010808;
    bVar30 = 0xb < uVar7;
    if (bVar30) {
      uVar7 = Ram40010808;
    }
    if ((!bVar30 || uVar7 < 0xbc) || (pcVar4 = (code *)UINT_400108b8, pcVar4 == (code *)0x0))
    goto LAB_100025fc;
    uVar7 = (*pcVar4)();
    if (uVar7 == 0) {
      uVar7 = 1;
    }
  }
  else {
LAB_100025fc:
    uVar7 = 1;
  }
  *(uint *)(param_1 + 0x60a8) = uVar7;
  recovered_10006380(param_1);
  if (((*(int *)(param_1 + 0x35c) < 0) || (iVar29 = Ram40010800, iVar29 != 0x50414d57)) ||
     (iVar29 = Ram40010804, iVar29 == 0)) {
LAB_1000264c:
    memset((void *)(param_1 + 1000),0,0x8c);
  }
  else {
    uVar7 = Ram40010808;
    bVar30 = 0xb < uVar7;
    if (bVar30) {
      uVar7 = Ram40010808;
    }
    if (((!bVar30 || uVar7 < 0x114) || (pcVar4 = (code *)UINT_40010910, pcVar4 == (code *)0x0)) ||
       (uVar7 = (*pcVar4)(*(int *)(param_1 + 0x35c),&local_3930), uVar7 == 0)) goto LAB_1000264c;
    memcpy((void *)(param_1 + 1000),&local_3930,0x8c);
  }
  memset(local_3858,0,0x3680);
  iVar29 = Ram40010800;
  if ((iVar29 != 0x50414d57) || (iVar29 = Ram40010804, iVar29 == 0)) {
LAB_1000269c:
    *(undefined4 *)(param_1 + 0x60a0) = 0;
    return;
  }
  uVar7 = Ram40010808;
  bVar30 = 0xb < uVar7;
  if (bVar30) {
    uVar7 = Ram40010808;
  }
  if ((!bVar30 || uVar7 < 0x108) || (pcVar4 = (code *)UINT_40010904, pcVar4 == (code *)0x0))
  goto LAB_1000269c;
  uVar8 = (*pcVar4)(local_3858,0x20,&local_3934);
  uVar7 = local_3934;
  if (uVar8 == 0) goto LAB_1000269c;
  pvVar27 = (void *)(param_1 + 0x2480);
  uVar8 = 0x20;
  if (local_3934 < 0x20) {
    uVar8 = local_3934;
  }
  if (local_3934 == 0) {
    *(uint *)(param_1 + 0x60a0) = uVar8;
    local_3944 = 0;
    if (iVar26 != -1) goto LAB_100029f0;
  }
  else {
    piVar28 = (int *)(param_1 + 0x5d00);
    local_3944 = 0;
    uVar23 = 0;
    bVar30 = iVar26 == -1;
    uVar20 = 1;
    if (1 < uVar13) {
      uVar20 = uVar13;
    }
    do {
      bVar5 = bVar30;
      piVar15 = local_3858 + uVar23 * 0x6d;
      if (*(char *)(param_1 + 0x609c) == '\0') {
        iVar29 = *piVar15;
        uVar9 = 0;
      }
      else {
        iVar29 = *piVar15;
        iVar26 = 0x20;
        piVar21 = (int *)(param_1 + 0x5b88);
        do {
          if (piVar21[-2] == iVar29) {
            iVar26 = *piVar21;
            goto LAB_10002800;
          }
          piVar21 = piVar21 + 3;
          iVar26 = iVar26 + -1;
        } while (iVar26 != 0);
        iVar26 = 0;
LAB_10002800:
        uVar9 = local_3844[uVar23 * 0x6d] - iVar26;
      }
      pvVar10 = (void *)(uVar23 * 0x1b8 + (int)pvVar27);
      memcpy(pvVar10,piVar15,0x1b4);
      iVar26 = 0;
      piVar21 = (int *)0x0;
      do {
        piVar14 = (int *)((int)piVar28 + iVar26);
        if (*piVar14 == iVar29) {
          piVar21 = (int *)((int)piVar28 + iVar26);
          local_3954 = iVar29;
          goto LAB_1000288c;
        }
        iVar26 = iVar26 + 0x1c;
        if (*piVar14 != 0) {
          piVar14 = (int *)0x0;
        }
        if (piVar21 == (int *)0x0) {
          piVar21 = piVar14;
        }
      } while (iVar26 != 0x380);
      if (piVar21 == (int *)0x0) {
        piVar21 = piVar28;
      }
      memset(piVar21,0,0x1c);
      *piVar21 = iVar29;
      local_3954 = *piVar15;
LAB_1000288c:
      uVar16 = *(uint *)(param_1 + 0x60a8);
      if (uVar16 < 2) {
        uVar16 = 1;
      }
      uVar33 = recovered_100019c0((ulonglong)uVar9 * 1000,(ulonglong)uVar20 * (ulonglong)uVar16);
      uVar16 = (uint)uVar33;
      if (999 < uVar16) {
        uVar16 = 1000;
      }
      uVar25 = (undefined2)uVar16;
      if ((int)(uVar33 >> 0x20) != 0) {
        uVar25 = 1000;
      }
      if (iVar29 != local_3954) {
        memset(piVar21,0,0x1c);
        *piVar21 = local_3954;
      }
      uVar16 = (uint)*(byte *)(piVar21 + 6);
      iVar29 = *(byte *)((int)piVar21 + 0x19) + 1;
      piVar14 = piVar21 + 1;
      if (uVar16 < 10) {
        uVar16 = uVar16 + 1;
        *(char *)(piVar21 + 6) = (char)uVar16;
      }
      *(undefined2 *)((int)piVar14 + (uint)*(byte *)((int)piVar21 + 0x19) * 2) = uVar25;
      *(char *)((int)piVar21 + 0x19) =
           (char)iVar29 + (char)((uint)((short)iVar29 * 0x199a) >> 0x10) * -10;
      uVar18 = 0;
      uVar11 = 0;
      if (uVar16 < 4) {
LAB_10002974:
        iVar29 = uVar16 - uVar18;
        puVar19 = (ushort *)((int)piVar21 + uVar18 * 2 + 4);
        do {
          iVar29 = iVar29 + -1;
          uVar11 = uVar11 + *puVar19;
          puVar19 = puVar19 + 1;
        } while (iVar29 != 0);
      }
      else {
        uVar18 = uVar16 & 0xfc;
        auVar31 = (uint128)0x0;
        uVar11 = uVar18;
        do {
          uVar32 = *(undefined8 *)piVar14;
          piVar14 = piVar14 + 2;
          uVar11 = uVar11 - 4;
          auVar31 = pf_app_addwide(auVar31,uVar32);
        } while (uVar11 != 0);
        uVar32 = pf_app_add32x2(PF_PART8(auVar31, 0),PF_PART8(auVar31, 8));
        uVar11 = (int)uVar32 + (int)((ulonglong)uVar32 >> 0x20);
        if (uVar18 != uVar16) goto LAB_10002974;
      }
      uVar16 = recovered_10001860(uVar11,uVar16);
      iVar29 = *(int *)(param_1 + 0x354);
      iVar26 = *piVar15;
      *(uint *)((int)pvVar10 + 0x1b4) = uVar16;
      local_3944 = uVar9 + local_3944;
      uVar23 = uVar23 + 1;
      bVar3 = iVar26 == iVar29;
      bVar30 = (bool)(bVar3 | bVar5);
    } while (uVar23 != uVar8);
    *(uint *)(param_1 + 0x60a0) = uVar8;
    if (uVar7 != 1) {
      uVar20 = 1;
      pvVar10 = pvVar27;
      do {
        pvVar24 = (void *)(uVar20 * 0x1b8 + (int)pvVar27);
        memcpy(auStack_1d8,pvVar24,0x1b4);
        uVar9 = *(uint *)((int)pvVar24 + 0x1b4);
        pvVar24 = pvVar10;
        uVar23 = uVar20;
        do {
          if (uVar9 <= *(uint *)((int)pvVar24 + 0x1b4)) goto LAB_10002fd4;
          memcpy((void *)((int)pvVar24 + 0x1b8),pvVar24,0x1b8);
          uVar23 = uVar23 - 1;
          pvVar24 = (void *)((int)pvVar24 + -0x1b8);
        } while (uVar23 != 0);
        uVar23 = 0;
LAB_10002fd4:
        pvVar24 = (void *)(uVar23 * 0x1b8 + (int)pvVar27);
        memcpy(pvVar24,auStack_1d8,0x1b4);
        *(uint *)((int)pvVar24 + 0x1b4) = uVar9;
        uVar20 = uVar20 + 1;
        pvVar10 = (void *)((int)pvVar10 + 0x1b8);
      } while (uVar20 != uVar8);
    }
    if (!bVar3 && !bVar5) {
LAB_100029f0:
      *(undefined1 *)(param_1 + 0x61f8) = 0;
      *(undefined4 *)(param_1 + 0x354) = 0xffffffff;
    }
  }
  iVar29 = 0;
  do {
    piVar28 = (int *)(param_1 + 0x5d00 + iVar29 * 0x1c);
    iVar26 = *piVar28;
    if (iVar26 != 0) {
      if (uVar7 != 0) {
        piVar15 = local_3858;
        uVar20 = uVar8;
        do {
          if (*piVar15 == iVar26) goto LAB_10002a18;
          uVar20 = uVar20 - 1;
          piVar15 = piVar15 + 0x6d;
        } while (uVar20 != 0);
      }
      memset(piVar28,0,0x1c);
    }
LAB_10002a18:
    iVar29 = iVar29 + 1;
  } while (iVar29 != 0x20);
  piVar28 = (int *)(param_1 + 0x6080);
  iVar29 = *piVar28;
  uVar8 = *(uint *)(param_1 + 0x60a8);
  uVar7 = 1;
  if (1 < uVar13) {
    uVar7 = uVar13;
  }
  if (uVar8 < 2) {
    uVar8 = 1;
  }
  uVar33 = recovered_100019c0((ulonglong)local_3944 * 1000,(ulonglong)uVar7 * (ulonglong)uVar8);
  uVar7 = (uint)uVar33;
  if (999 < uVar7) {
    uVar7 = 1000;
  }
  uVar25 = (undefined2)uVar7;
  if ((int)(uVar33 >> 0x20) != 0) {
    uVar25 = 1000;
  }
  if (iVar29 != 1) {
    memset(piVar28,0,0x1c);
    *piVar28 = 1;
  }
  uVar8 = (uint)*(byte *)(param_1 + 0x6098);
  iVar29 = *(byte *)(param_1 + 0x6099) + 1;
  puVar17 = (undefined8 *)(param_1 + 0x6084);
  uVar7 = uVar8;
  if (uVar8 < 10) {
    uVar7 = uVar8 + 1;
  }
  if (uVar8 < 10) {
    *(char *)(param_1 + 0x6098) = (char)uVar7;
  }
  *(undefined2 *)((int)puVar17 + (uint)*(byte *)(param_1 + 0x6099) * 2) = uVar25;
  *(char *)(param_1 + 0x6099) = (char)iVar29 + (char)((uint)((short)iVar29 * 0x199a) >> 0x10) * -10;
  uVar20 = 0;
  uVar8 = 0;
  if (3 < uVar7) {
    uVar20 = uVar7 & 0xfc;
    auVar31 = (uint128)0x0;
    uVar8 = uVar20;
    do {
      uVar32 = *puVar17;
      puVar17 = puVar17 + 1;
      uVar8 = uVar8 - 4;
      auVar31 = pf_app_addwide(auVar31,uVar32);
    } while (uVar8 != 0);
    uVar32 = pf_app_add32x2(PF_PART8(auVar31, 0),PF_PART8(auVar31, 8));
    uVar8 = (int)uVar32 + (int)((ulonglong)uVar32 >> 0x20);
    if (uVar20 == uVar7) goto LAB_10002b78;
  }
  iVar29 = uVar7 - uVar20;
  puVar19 = (ushort *)(param_1 + uVar20 * 2 + 0x6084);
  do {
    iVar29 = iVar29 + -1;
    uVar8 = uVar8 + *puVar19;
    puVar19 = puVar19 + 1;
  } while (iVar29 != 0);
LAB_10002b78:
  *(undefined4 *)(param_1 + 0x60b0) = 0;
  uVar7 = recovered_10001860(uVar8,uVar7);
  *(uint *)(param_1 + 0x60ac) = uVar7;
  iVar29 = 1000 - uVar7;
  if (0x7c < uVar7 >> 3) {
    iVar29 = 0;
  }
  *(int *)(param_1 + 0x60b4) = iVar29;
  memmove((void *)(param_1 + 0x60d8),(void *)(param_1 + 0x60d9),0x47);
  memmove((void *)(param_1 + 0x6120),(void *)(param_1 + 0x6121),0x47);
  *(char *)(param_1 + 0x611f) = (char)(*(uint *)(param_1 + 0x60ac) / 10);
  *(char *)(param_1 + 0x6167) = (char)(*(uint *)(param_1 + 0x60b0) / 10);
  if (((*(char *)(param_1 + 0x609d) == '\x01') && (uVar13 != 0)) &&
     (local_3930 == *(int *)(param_1 + 0x474))) {
    uVar8 = *(uint *)(param_1 + 0x4a0);
    uVar20 = *(uint *)(param_1 + 0x4a4);
    uVar23 = *(uint *)(param_1 + 0x4a8);
    uVar9 = *(uint *)(param_1 + 0x4ac);
    uVar7 = local_38fc - uVar23;
    iVar29 = local_38f8 - (uVar9 + (uVar23 > local_38fc));
    if (local_38f8 <= uVar9 && (uint)(uVar23 <= local_38fc) <= local_38f8 - uVar9) {
      uVar7 = 0;
      iVar29 = 0;
    }
    uVar33 = recovered_100019c0(CONCAT44((int)((ulonglong)uVar7 * 0x12 >> 0x20) + iVar29 * 0x12,
                                         (int)((ulonglong)uVar7 * 0x12)),(ulonglong)uVar13);
    uVar12 = (undefined4)uVar33;
    if ((int)(uVar33 >> 0x20) != 0) {
      uVar12 = 0xffffffff;
    }
    uVar16 = *(uint *)(param_1 + 0x4bc);
    uVar23 = *(uint *)(param_1 + 0x60d0);
    *(undefined4 *)(param_1 + 0x60bc) = uVar12;
    uVar9 = *(uint *)(param_1 + 0x4b8);
    uVar7 = local_38ec - uVar9;
    iVar29 = local_38e8 - (uVar16 + (uVar9 > local_38ec));
    if (local_38e8 <= uVar16 && (uint)(uVar9 <= local_38ec) <= local_38e8 - uVar16) {
      uVar7 = 0;
      iVar29 = 0;
    }
    uVar33 = recovered_100019c0(CONCAT44((int)((ulonglong)uVar7 * 0x12 >> 0x20) + iVar29 * 0x12,
                                         (int)((ulonglong)uVar7 * 0x12)),(ulonglong)uVar13);
    uVar7 = local_3904 - uVar8;
    iVar29 = local_3900 - (uVar20 + (uVar8 > local_3904));
    *(ulonglong *)(param_1 + 0x60c8) = uVar33;
    if (local_3900 <= uVar20 && (uint)(uVar8 <= local_3904) <= local_3900 - uVar20) {
      uVar7 = 0;
      iVar29 = 0;
    }
    uVar9 = *(uint *)(param_1 + 0x4b0);
    uVar8 = local_38f4 - uVar9;
    uVar20 = *(uint *)(param_1 + 0x4b4);
    iVar26 = local_38f0 - (uVar20 + (uVar9 > local_38f4));
    uVar16 = *(uint *)(param_1 + 0x60d4);
    if (local_38f0 <= uVar20 && (uint)(uVar9 <= local_38f4) <= local_38f0 - uVar20) {
      uVar8 = 0;
      iVar26 = 0;
    }
    uVar34 = recovered_100019c0(CONCAT44((int)((ulonglong)uVar8 * 0x12 >> 0x20) + iVar26 * 0x12,
                                         (int)((ulonglong)uVar8 * 0x12)),(ulonglong)uVar13);
    uVar8 = (uint)(uVar34 >> 0x20);
    *(ulonglong *)(param_1 + 0x60c0) = uVar34;
    uVar35 = recovered_100019c0(CONCAT44((int)((ulonglong)uVar7 * 0x12 >> 0x20) + iVar29 * 0x12,
                                         (int)((ulonglong)uVar7 * 0x12)),(ulonglong)uVar13);
    uVar12 = (undefined4)uVar35;
    if ((int)(uVar35 >> 0x20) != 0) {
      uVar12 = 0xffffffff;
    }
    *(undefined4 *)(param_1 + 0x60b8) = uVar12;
    local_3950 = (uint)uVar33;
    local_394c = (uint)(uVar33 >> 0x20);
    if ((uVar16 <= uVar8 && (uint)((uint)uVar34 <= uVar23) <= uVar16 - uVar8) ||
       (uVar34 = CONCAT44(uVar16,uVar23),
       uVar16 <= local_394c && (uint)(local_3950 <= uVar23) <= uVar16 - local_394c)) {
      uVar7 = (uint)(uVar34 >> 0x20);
      if (uVar7 <= local_394c && (uint)(local_3950 <= (uint)uVar34) <= uVar7 - local_394c) {
        uVar34 = uVar33;
      }
      *(ulonglong *)(param_1 + 0x60d0) = uVar34;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x60bc) = 0;
    *(undefined4 *)(param_1 + 0x60b8) = 0;
    *(undefined4 *)(param_1 + 0x60c0) = 0;
    *(undefined4 *)(param_1 + 0x60c4) =
         *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 4);
    *(undefined4 *)(param_1 + 0x60c8) =
         *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 8);
    *(undefined4 *)(param_1 + 0x60cc) =
         *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 12);
  }
  memmove((void *)(param_1 + 0x6168),(void *)(param_1 + 0x6169),0x47);
  memmove((void *)(param_1 + 0x61b0),(void *)(param_1 + 0x61b1),0x47);
  uVar22 = 0;
  puVar1 = (ulonglong *)(param_1 + 0x60d0);
  iVar26 = *(int *)puVar1;
  iVar29 = *(int *)(param_1 + 0x60d4);
  uVar33 = *puVar1;
  uVar6 = 0;
  if ((*(uint *)(param_1 + 0x60c0) != 0 || *(int *)(param_1 + 0x60c4) != 0) &&
     (uVar6 = 0, iVar26 != 0 || iVar29 != 0)) {
    lVar2 = (ulonglong)*(uint *)(param_1 + 0x60c0) * 100;
    uVar34 = recovered_100019c0(CONCAT44(*(int *)(param_1 + 0x60c4) * 100 +
                                         (int)((ulonglong)lVar2 >> 0x20),(int)lVar2),*puVar1);
    uVar7 = (uint)uVar34;
    if (99 < uVar7) {
      uVar7 = 100;
    }
    uVar6 = (undefined1)uVar7;
    if ((int)(uVar34 >> 0x20) != 0) {
      uVar6 = 100;
    }
  }
  *(undefined1 *)(param_1 + 0x61af) = uVar6;
  bVar30 = iVar26 == 0 && iVar29 == 0;
  if (iVar26 != 0 || iVar29 != 0) {
    bVar30 = *(uint *)(param_1 + 0x60c8) == 0 && *(int *)(param_1 + 0x60cc) == 0;
  }
  if (!bVar30) {
    lVar2 = (ulonglong)*(uint *)(param_1 + 0x60c8) * 100;
    uVar33 = recovered_100019c0(CONCAT44(*(int *)(param_1 + 0x60cc) * 100 +
                                         (int)((ulonglong)lVar2 >> 0x20),(int)lVar2),uVar33);
    uVar7 = (uint)uVar33;
    if (99 < uVar7) {
      uVar7 = 100;
    }
    uVar22 = (undefined1)uVar7;
    if ((int)(uVar33 >> 0x20) != 0) {
      uVar22 = 100;
    }
  }
  *(undefined1 *)(param_1 + 0x61f7) = uVar22;
  memcpy((void *)(param_1 + 0x3a4),local_38a0,0x44);
  memcpy((void *)(param_1 + 0x360),local_38a0,0x44);
  memcpy((void *)(param_1 + 0x474),&local_3930,0x8c);
  *(undefined1 *)(param_1 + 0x609c) = 1;
  *(byte *)(param_1 + 0x609d) = local_392c & 1;
  memset((void *)(param_1 + 0x5b80),0,0x180);
  uVar13 = *(uint *)(param_1 + 0x60a0);
  uVar7 = uVar13;
  if (0x1f < uVar13) {
    uVar7 = 0x20;
  }
  if (uVar13 == 0) {
    return;
  }
  piVar15 = (int *)(param_1 + 0x2490);
  piVar28 = (int *)(param_1 + 0x5b88);
  do {
    piVar21 = piVar15 + -4;
    uVar7 = uVar7 - 1;
    iVar29 = *piVar15;
    iVar26 = piVar15[1];
    piVar15 = piVar15 + 0x6e;
    piVar28[-2] = *piVar21;
    piVar28[-1] = iVar29;
    *piVar28 = iVar26;
    piVar28 = piVar28 + 3;
  } while (uVar7 != 0);
  return;
}

#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef Ram40010800
#undef Ram40010804
#undef Ram40010808
#undef UINT_400108b8
#undef UINT_40010904
#undef UINT_40010908
#undef UINT_40010910
#undef local_3954
#undef local_3950
#undef local_394c
#undef local_3944
#undef local_3934
#undef local_3930
#undef local_392c
#undef local_3904
#undef local_3900
#undef local_38fc
#undef local_38f8
#undef local_38f4
#undef local_38f0
#undef local_38ec
#undef auStack_1d8
#undef local_38e8
#undef local_38a0
#undef local_3858
#undef local_3844

#undef DAT_10007db8
#define DAT_10007db8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1c4U)))
#undef DAT_10007dc1
#define DAT_10007dc1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1cdU)))
#undef DAT_10007dc3
#define DAT_10007dc3 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1cfU)))
#undef DAT_10007dc6
#define DAT_10007dc6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1d2U)))
#undef DAT_10007dc9
#define DAT_10007dc9 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1d5U)))
#undef DAT_10007f88
#define DAT_10007f88 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x394U)))
#undef DAT_10008060
#define DAT_10008060 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x46cU)))
#undef DAT_1000807c
#define DAT_1000807c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x488U)))
#undef DAT_10008094
#define DAT_10008094 (*(uint *)(((uintptr_t)pf_module_state + 0x4a0U)))
#undef DAT_10008098
#define DAT_10008098 (*(uint *)(((uintptr_t)pf_module_state + 0x4a4U)))
#undef str_10007cf6
#define str_10007cf6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x102U)))
#undef str_10007dbb
#define str_10007dbb (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1c7U)))
#undef str_10007dcc
#define str_10007dcc (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1d8U)))
#undef str_10007ddb
#define str_10007ddb (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1e7U)))
#undef str_10007e2c
#define str_10007e2c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x238U)))
#undef str_10007e38
#define str_10007e38 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x244U)))
#undef str_10007e65
#define str_10007e65 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x271U)))
#undef str_10007e74
#define str_10007e74 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x280U)))
#undef str_10007e85
#define str_10007e85 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x291U)))
#undef str_10007e93
#define str_10007e93 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x29fU)))
#undef str_10007ea2
#define str_10007ea2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2aeU)))
#undef str_10007eb0
#define str_10007eb0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2bcU)))
#undef str_10007ec1
#define str_10007ec1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2cdU)))
#undef str_10007ed3
#define str_10007ed3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2dfU)))
#undef str_10007ee8
#define str_10007ee8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2f4U)))
#undef str_10007f09
#define str_10007f09 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x315U)))
#define local_f4 (*(uint *)(frame + 92))
#define local_f0 (*(uint *)(frame + 96))
#define in_stack_fffffecc (*(undefined * *)(frame + 28))
#define local_12c (*(uint *)(frame + 36))
#define local_128 (*(uint *)(frame + 40))
#define local_124 (*(uint *)(frame + 44))
#define local_120 (*(uint *)(frame + 48))
#define acStack_e4 (*(char (*)[64])(frame + 108))
#define local_11c (*(uint *)(frame + 52))
#define acStack_a4 (*(char (*)[64])(frame + 172))
#define local_118 (*(uint *)(frame + 56))
#define acStack_64 (*(char (*)[68])(frame + 236))
#define local_114 (*(uint *)(frame + 60))
#define local_f8 (*(int *)(frame + 88))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003068
 */

void recovered_10003068(int param_1)

{
  unsigned char frame[368] __attribute__((aligned(16))) = {0};

  int iVar1;
  longlong lVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  char *pcVar14;
  undefined1 uVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  undefined *puVar20;
  uint uVar21;
  uint uVar22;
  undefined *puVar23;
  uint uVar24;
  undefined1 uVar25;
  uint *puVar26;
  uint uVar27;
  int iVar28;
  int iVar29;
  uint uVar30;
  int iVar31;
  int iVar32;
  undefined1 uVar33;
  bool bVar34;
  bool bVar35;
  ulonglong uVar36;

  uVar17 = DAT_10008098;
  uVar6 = DAT_10008094;
  uVar27 = 0;
  if ((int)DAT_10008098 < 0) {
    uVar27 = DAT_10008098;
  }
  uVar30 = DAT_10008098 & ~((int)DAT_10008098 >> 0x1f);
  uVar10 = DAT_10008094 & ~((int)DAT_10008094 >> 0x1f);
  local_f0 = 0;
  uVar16 = 0;
  if ((int)DAT_10008094 < 0) {
    uVar16 = DAT_10008094;
  }
  iVar5 = DAT_10008094 * 4;
  if ((int)uVar27 < (int)uVar30) {
    iVar19 = DAT_10008094 * uVar27 * 4;
    do {
      uVar4 = uVar16;
      if ((int)uVar16 < (int)uVar10) {
        do {
          if ((((param_1 != 0) && ((int)uVar27 < (int)uVar17)) && (-1 < (int)(uVar4 | uVar27))) &&
             ((*(int *)(param_1 + 0x340) != 0 && ((int)uVar4 < (int)uVar6)))) {
            *(undefined1 *)(*(int *)(param_1 + 0x340) + iVar19 + uVar4 * 4) = 0xee;
            *(undefined1 *)(*(int *)(param_1 + 0x340) + iVar19 + uVar4 * 4 + 1) = 0xee;
            *(undefined1 *)(*(int *)(param_1 + 0x340) + iVar19 + uVar4 * 4 + 2) = 0xee;
            *(undefined1 *)(*(int *)(param_1 + 0x340) + iVar19 + uVar4 * 4 + 3) = 0xff;
          }
          uVar4 = uVar4 + 1;
        } while (uVar10 != uVar4);
      }
      uVar27 = uVar27 + 1;
      iVar19 = iVar19 + iVar5;
    } while (uVar27 != uVar30);
  }
  puVar3 = (uint *)(param_1 + 0x60a0);
  if (param_1 != 0) {
    uVar27 = *(uint *)(param_1 + 0x354);
  }
  if ((param_1 != 0 && uVar27 != 0xffffffff) && (uVar30 = *puVar3, uVar30 != 0)) {
    puVar26 = (uint *)(param_1 + 0x2480);
    do {
      if (*puVar26 == uVar27) {
        local_f4 = (uint)(uVar27 != 0);
        local_f0 = 1;
        goto LAB_1000319c;
      }
      uVar30 = uVar30 - 1;
      puVar26 = puVar26 + 0x6e;
    } while (uVar30 != 0);
  }
  local_f4 = 0;
LAB_1000319c:
  iVar19 = 0;
  uVar27 = 0;
  do {
    uVar4 = uVar27 + 1;
    uVar30 = uVar17;
    if ((int)uVar4 < (int)uVar17) {
      uVar30 = uVar4;
    }
    if ((int)uVar27 < (int)uVar17) {
      iVar11 = uVar27 * -0x32;
      iVar28 = iVar19;
      do {
        uVar13 = uVar16;
        if ((int)uVar16 < (int)uVar10) {
          do {
            if ((((param_1 != 0) && ((int)uVar27 < (int)uVar17)) && (-1 < (int)uVar13)) &&
               ((*(int *)(param_1 + 0x340) != 0 && ((int)uVar13 < (int)uVar6)))) {
              uVar25 = (undefined1)((iVar11 + 0x4990U & 0xffff) / 0x58);
              *(undefined1 *)(*(int *)(param_1 + 0x340) + iVar28 + uVar13 * 4) = uVar25;
              *(undefined1 *)(*(int *)(param_1 + 0x340) + iVar28 + uVar13 * 4 + 1) = uVar25;
              *(undefined1 *)(*(int *)(param_1 + 0x340) + iVar28 + uVar13 * 4 + 2) = uVar25;
              *(undefined1 *)(*(int *)(param_1 + 0x340) + iVar28 + uVar13 * 4 + 3) = 0xff;
            }
            uVar13 = uVar13 + 1;
          } while (uVar10 != uVar13);
        }
        uVar27 = uVar27 + 1;
        iVar28 = iVar28 + iVar5;
      } while (uVar27 != uVar30);
    }
    iVar19 = iVar19 + iVar5;
    uVar27 = uVar4;
  } while (uVar4 != 0x58);
  if ((0x57 < (int)uVar17) && ((int)uVar16 < (int)uVar10)) {
    iVar5 = uVar6 * 0x15c;
    do {
      if ((((param_1 != 0) && (-1 < (int)uVar16)) && (*(int *)(param_1 + 0x340) != 0)) &&
         ((int)uVar16 < (int)uVar6)) {
        *(undefined1 *)(*(int *)(param_1 + 0x340) + iVar5 + uVar16 * 4) = 0x69;
        *(undefined1 *)(*(int *)(param_1 + 0x340) + iVar5 + uVar16 * 4 + 1) = 0x69;
        *(undefined1 *)(*(int *)(param_1 + 0x340) + iVar5 + uVar16 * 4 + 2) = 0x69;
        *(undefined1 *)(*(int *)(param_1 + 0x340) + iVar5 + uVar16 * 4 + 3) = 0xff;
      }
      uVar16 = uVar16 + 1;
    } while (uVar10 != uVar16);
  }
  uVar10 = 0xc;
  recovered_100064f0(param_1,0x10,0xc,0x4c,0x12,((uintptr_t)pf_module_state + 0x163U),local_f4);
  recovered_100064f0(param_1,0x10,0x22,0x4c,0x12,((uintptr_t)pf_module_state + 0x168U),local_f0);
  recovered_100064f0(param_1,0x10,0x38,0x4c,0x12,((uintptr_t)pf_module_state + 0x16eU),local_f0);
  uVar17 = DAT_10008098;
  uVar27 = DAT_10008094;
  uVar16 = DAT_10008098;
  if (0x49 < (int)DAT_10008098) {
    uVar16 = 0x4a;
  }
  uVar30 = DAT_10008094;
  if (0x67 < (int)DAT_10008094) {
    uVar30 = 0x68;
  }
  uVar4 = uVar6 - 0x10;
  if ((int)DAT_10008094 <= (int)(uVar6 - 0x10)) {
    uVar4 = DAT_10008094;
  }
  if ((int)uVar6 < 0x10) {
    uVar4 = 0;
  }
  if (0xc < (int)DAT_10008098) {
    iVar5 = DAT_10008094 * 4;
    iVar19 = DAT_10008094 * 0x30;
    do {
      uVar13 = uVar30;
      if ((int)uVar30 < (int)uVar4) {
        do {
          if (((param_1 != 0) && ((int)uVar10 < (int)uVar17)) &&
             ((-1 < (int)uVar13 && ((*(int *)(param_1 + 0x340) != 0 && ((int)uVar13 < (int)uVar27)))
              ))) {
            *(undefined1 *)(*(int *)(param_1 + 0x340) + iVar19 + uVar13 * 4) = 0xfa;
            *(undefined1 *)(*(int *)(param_1 + 0x340) + iVar19 + uVar13 * 4 + 1) = 0xfa;
            *(undefined1 *)(*(int *)(param_1 + 0x340) + iVar19 + uVar13 * 4 + 2) = 0xfa;
            *(undefined1 *)(*(int *)(param_1 + 0x340) + iVar19 + uVar13 * 4 + 3) = 0xff;
          }
          uVar13 = uVar13 + 1;
        } while (uVar4 != uVar13);
      }
      uVar10 = uVar10 + 1;
      iVar19 = iVar19 + iVar5;
    } while (uVar10 != uVar16);
  }
  recovered_100067e4(param_1,0x68,0xc,uVar6 - 0x78,0x3e,0x949494);
  recovered_10006bfc(param_1,0x70,0x27,param_1 + 0x61f8,0x282828,uVar6 - 0x88);
  uVar6 = DAT_10008098;
  uVar27 = DAT_10008094;
  uVar16 = 0x6a;
  uVar17 = 0x156;
  if ((int)DAT_10008098 < 0x156) {
    uVar17 = DAT_10008098;
  }
  uVar30 = DAT_10008094 - 0x10;
  iVar5 = DAT_10008094 - 0x20;
  uVar10 = 0x10;
  if ((int)DAT_10008094 < 0x10) {
    uVar30 = 0;
    uVar10 = DAT_10008094;
  }
  if (0x6a < (int)DAT_10008098) {
    iVar11 = DAT_10008094 * 0x1a8;
    iVar19 = DAT_10008094 * 4;
    do {
      uVar4 = uVar10;
      if ((int)uVar10 < (int)uVar30) {
        do {
          if ((((param_1 != 0) && ((int)uVar16 < (int)uVar6)) && (-1 < (int)uVar4)) &&
             ((*(int *)(param_1 + 0x340) != 0 && ((int)uVar4 < (int)uVar27)))) {
            *(undefined1 *)(*(int *)(param_1 + 0x340) + iVar11 + uVar4 * 4) = 0xff;
            *(undefined1 *)(*(int *)(param_1 + 0x340) + iVar11 + uVar4 * 4 + 1) = 0xff;
            *(undefined1 *)(*(int *)(param_1 + 0x340) + iVar11 + uVar4 * 4 + 2) = 0xff;
            *(undefined1 *)(*(int *)(param_1 + 0x340) + iVar11 + uVar4 * 4 + 3) = 0xff;
          }
          uVar4 = uVar4 + 1;
        } while (uVar30 != uVar4);
      }
      uVar16 = uVar16 + 1;
      iVar11 = iVar11 + iVar19;
    } while (uVar16 != uVar17);
  }
  recovered_100067e4(param_1,0x10,0x6a,iVar5,0xec,0xaeaeae);
  uVar17 = DAT_10008098;
  uVar6 = DAT_10008094;
  uVar16 = 0x7d;
  if ((int)DAT_10008098 < 0x7d) {
    uVar16 = DAT_10008098;
  }
  uVar30 = uVar27 - 0x11;
  uVar10 = DAT_10008094;
  if (0x10 < (int)DAT_10008094) {
    uVar10 = 0x11;
  }
  uVar4 = DAT_10008094;
  if ((int)uVar30 < (int)DAT_10008094) {
    uVar4 = uVar30;
  }
  if ((int)uVar27 < 0x11) {
    uVar4 = 0;
  }
  if (0x6b < (int)DAT_10008098) {
    iVar5 = DAT_10008094 * 4;
    iVar19 = DAT_10008094 * 0x1ac;
    uVar13 = 0x6b;
    do {
      uVar22 = uVar10;
      if ((int)uVar10 < (int)uVar4) {
        do {
          if (((param_1 != 0) && ((int)uVar13 < (int)uVar17)) &&
             ((-1 < (int)uVar22 && ((*(int *)(param_1 + 0x340) != 0 && ((int)uVar22 < (int)uVar6))))
             )) {
            *(undefined1 *)(*(int *)(param_1 + 0x340) + iVar19 + uVar22 * 4) = 0xee;
            *(undefined1 *)(*(int *)(param_1 + 0x340) + iVar19 + uVar22 * 4 + 1) = 0xee;
            *(undefined1 *)(*(int *)(param_1 + 0x340) + iVar19 + uVar22 * 4 + 2) = 0xee;
            *(undefined1 *)(*(int *)(param_1 + 0x340) + iVar19 + uVar22 * 4 + 3) = 0xff;
          }
          uVar22 = uVar22 + 1;
        } while (uVar4 != uVar22);
      }
      uVar13 = uVar13 + 1;
      iVar19 = iVar19 + iVar5;
    } while (uVar13 != uVar16);
  }
  iVar5 = 0;
  do {
    iVar19 = (&DAT_10007f88)[iVar5];
    uVar6 = 0x262626;
    if (iVar5 == 2) {
      uVar6 = 0x824e14;
    }
    recovered_10006bfc(param_1,iVar19 + 0x13,0x70,(&DAT_10008060)[iVar5],uVar6,0x78);
    uVar17 = DAT_10008098;
    uVar6 = DAT_10008094;
    if (iVar5 != 0) {
      uVar10 = iVar19 + 0xe;
      uVar16 = 0x7d;
      if ((int)DAT_10008098 < 0x7d) {
        uVar16 = DAT_10008098;
      }
      uVar4 = iVar19 + 0xfU;
      if ((int)DAT_10008094 <= (int)(iVar19 + 0xfU)) {
        uVar4 = DAT_10008094;
      }
      uVar13 = DAT_10008094;
      if ((int)uVar10 < (int)DAT_10008094) {
        uVar13 = uVar10;
      }
      if (0x6b < (int)DAT_10008098) {
        iVar19 = DAT_10008094 * 4;
        iVar11 = DAT_10008094 * 0x1ac;
        uVar22 = 0x6b;
        do {
          uVar12 = uVar13;
          if ((int)uVar10 < (int)uVar6) {
            do {
              if ((((param_1 != 0) && ((int)uVar22 < (int)uVar17)) && (-1 < (int)uVar12)) &&
                 ((*(int *)(param_1 + 0x340) != 0 && ((int)uVar12 < (int)uVar6)))) {
                *(undefined1 *)(*(int *)(param_1 + 0x340) + iVar11 + uVar12 * 4) = 0xbc;
                *(undefined1 *)(*(int *)(param_1 + 0x340) + iVar11 + uVar12 * 4 + 1) = 0xbc;
                *(undefined1 *)(*(int *)(param_1 + 0x340) + iVar11 + uVar12 * 4 + 2) = 0xbc;
                *(undefined1 *)(*(int *)(param_1 + 0x340) + iVar11 + uVar12 * 4 + 3) = 0xff;
              }
              uVar12 = uVar12 + 1;
            } while (uVar4 != uVar12);
          }
          uVar22 = uVar22 + 1;
          iVar11 = iVar11 + iVar19;
        } while (uVar22 != uVar16);
      }
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 != 7);
  iVar5 = 0x1f0;
  uVar6 = 0;
  do {
    uVar16 = DAT_10008098;
    uVar17 = DAT_10008094;
    uVar10 = *puVar3;
    if ((uVar6 < uVar10) &&
       (*(int *)(param_1 + 0x2480 + uVar6 * 0x1b8) == *(int *)(param_1 + 0x354))) {
      uVar15 = 0x65;
      uVar25 = 0xab;
      uVar33 = 0xee;
      uVar4 = 0xffffff;
    }
    else {
      uVar33 = 0xfd;
      uVar25 = 0xf2;
      uVar15 = 0xeb;
      if ((uVar6 & 1) == 0) {
        uVar33 = 0xff;
        uVar25 = 0xff;
        uVar15 = 0xff;
      }
      uVar4 = 0x1e1e1e;
    }
    uVar22 = uVar6 * 0x12 + 0x7c;
    uVar13 = DAT_10008094;
    if (0x10 < (int)DAT_10008094) {
      uVar13 = 0x11;
    }
    uVar12 = uVar6 * 0x12 + 0x8e;
    if ((int)DAT_10008098 <= (int)uVar12) {
      uVar12 = DAT_10008098;
    }
    uVar21 = DAT_10008094;
    if ((int)uVar30 < (int)DAT_10008094) {
      uVar21 = uVar30;
    }
    if ((int)uVar27 < 0x11) {
      uVar21 = 0;
    }
    if ((int)uVar22 < (int)DAT_10008098) {
      iVar11 = DAT_10008094 * iVar5;
      iVar19 = DAT_10008094 * 4;
      do {
        uVar10 = uVar13;
        if ((int)uVar13 < (int)uVar21) {
          do {
            if ((-1 < (int)uVar10) && (*(int *)(param_1 + 0x340) != 0)) {
              bVar35 = SBORROW4(uVar17,uVar10);
              iVar28 = uVar17 - uVar10;
              bVar34 = uVar17 == uVar10;
              if ((int)uVar10 < (int)uVar17) {
                bVar35 = SBORROW4(uVar16,uVar22);
                iVar28 = uVar16 - uVar22;
                bVar34 = uVar16 == uVar22;
              }
              if (!bVar34 && iVar28 < 0 == bVar35) {
                *(undefined1 *)(*(int *)(param_1 + 0x340) + iVar11 + uVar10 * 4) = uVar15;
                *(undefined1 *)(*(int *)(param_1 + 0x340) + iVar11 + uVar10 * 4 + 1) = uVar25;
                *(undefined1 *)(*(int *)(param_1 + 0x340) + iVar11 + uVar10 * 4 + 2) = uVar33;
                *(undefined1 *)(*(int *)(param_1 + 0x340) + iVar11 + uVar10 * 4 + 3) = 0xff;
              }
            }
            uVar10 = uVar10 + 1;
          } while (uVar21 != uVar10);
        }
        uVar22 = uVar22 + 1;
        iVar11 = iVar11 + iVar19;
      } while (uVar22 != uVar12);
      uVar10 = *puVar3;
    }
    if (uVar6 < uVar10) {
      puVar26 = (uint *)(param_1 + 0x2480 + uVar6 * 0x1b8);
      pf_varargs_10007fd0__4_(acStack_64,0x40,&DAT_10007db8,*puVar26);
      local_12c = uVar4 | local_12c & 0xff000000;
      iVar11 = uVar6 * 0x12 + 0x81;
      recovered_10006bfc(param_1,0x25,iVar11,(int)acStack_64,local_12c,0x46);
      local_128 = uVar4 | local_128 & 0xff000000;
      recovered_10006bfc(param_1,0x83,iVar11,(int)(puVar26 + 0x10),local_128,0xf8);
      pf_varargs_10007fd0__4__4_(acStack_64,0x40,str_10007dbb,puVar26[0x6d] / 10,puVar26[0x6d] % 10)
      ;
      local_124 = uVar4 | local_124 & 0xff000000;
      recovered_10006bfc(param_1,0x1a2,iVar11,(int)acStack_64,local_124,0x32);
      pf_varargs_10007fd0__4_(acStack_64,0x40,&DAT_10007db8,puVar26[2]);
      local_120 = uVar4 | local_120 & 0xff000000;
      recovered_10006bfc(param_1,0x1fe,iVar11,(int)acStack_64,local_120,0x2e);
      uVar17 = puVar26[8];
      uVar10 = 0x3fffffff;
      uVar16 = puVar26[9];
      iVar19 = 0x1e;
      if (-uVar16 < (uint)(uVar17 < 0x40000000)) {
        uVar10 = 0xfffff;
        puVar20 = &DAT_10007dc6;
        iVar19 = 0x14;
        if ((uint)(uVar17 < 0x100000) <= -uVar16) goto LAB_10003d28;
        if (uVar16 != 0 || uVar16 < (0x3ff < uVar17)) {
          uVar10 = 0x3ff;
          iVar19 = 10;
          puVar20 = &DAT_10007dc9;
          goto LAB_10003d28;
        }
        puVar23 = &DAT_10007dc1;
        pcVar14 = str_10007ddb;
      }
      else {
        puVar20 = &DAT_10007dc3;
LAB_10003d28:
        lVar2 = (ulonglong)(uVar10 & uVar17) * 100;
        local_f0 = (uint)((ulonglong)lVar2 >> 0x20);
        uVar10 = uVar16 >> iVar19;
        uVar13 = iVar19 - 0x20;
        if (-1 < (int)uVar13) {
          uVar10 = 0;
        }
        puVar23 = (undefined *)((uint)lVar2 >> iVar19 | local_f0 << (0x20U - iVar19 & 0xff));
        if (-1 < (int)uVar13) {
          puVar23 = (undefined *)(local_f0 >> (uVar13 & 0xff));
        }
        local_f0 = local_f0 >> iVar19;
        if (-1 < (int)uVar13) {
          local_f0 = 0;
        }
        uVar17 = uVar17 >> iVar19 | uVar16 << (0x20U - iVar19 & 0xff);
        if (-1 < (int)uVar13) {
          uVar17 = uVar16 >> (uVar13 & 0xff);
        }
        pcVar14 = str_10007dcc;
        uVar16 = uVar10;
        in_stack_fffffecc = puVar20;
      }
      pf_varargs_10007fd0__4__4__4__4__4_
                (acStack_64,0x40,pcVar14,uVar17,uVar16,(uint)puVar23,local_f0,
                 (uint)in_stack_fffffecc);
      local_11c = uVar4 | local_11c & 0xff000000;
      recovered_10006bfc(param_1,0x230,iVar11,(int)acStack_64,local_11c,0x60);
      uVar17 = puVar26[10];
      uVar10 = 0x3fffffff;
      uVar16 = puVar26[0xb];
      iVar19 = 0x1e;
      if (-uVar16 < (uint)(uVar17 < 0x40000000)) {
        puVar20 = &DAT_10007dc6;
        iVar19 = 0x14;
        uVar10 = 0xfffff;
        if ((uint)(uVar17 < 0x100000) <= -uVar16) goto LAB_100038d8;
        if (uVar16 != 0 || uVar16 < (0x3ff < uVar17)) {
          uVar10 = 0x3ff;
          iVar19 = 10;
          puVar20 = &DAT_10007dc9;
          goto LAB_100038d8;
        }
        puVar23 = &DAT_10007dc1;
        pcVar14 = str_10007ddb;
      }
      else {
        puVar20 = &DAT_10007dc3;
LAB_100038d8:
        lVar2 = (ulonglong)(uVar10 & uVar17) * 100;
        local_f0 = (uint)((ulonglong)lVar2 >> 0x20);
        uVar10 = uVar16 >> iVar19;
        uVar13 = iVar19 - 0x20;
        if (-1 < (int)uVar13) {
          uVar10 = 0;
        }
        puVar23 = (undefined *)((uint)lVar2 >> iVar19 | local_f0 << (0x20U - iVar19 & 0xff));
        if (-1 < (int)uVar13) {
          puVar23 = (undefined *)(local_f0 >> (uVar13 & 0xff));
        }
        local_f0 = local_f0 >> iVar19;
        if (-1 < (int)uVar13) {
          local_f0 = 0;
        }
        uVar17 = uVar17 >> iVar19 | uVar16 << (0x20U - iVar19 & 0xff);
        if (-1 < (int)uVar13) {
          uVar17 = uVar16 >> (uVar13 & 0xff);
        }
        pcVar14 = str_10007dcc;
        uVar16 = uVar10;
        in_stack_fffffecc = puVar20;
      }
      pf_varargs_10007fd0__4__4__4__4__4_
                (acStack_64,0x40,pcVar14,uVar17,uVar16,(uint)puVar23,local_f0,
                 (uint)in_stack_fffffecc);
      local_118 = uVar4 | local_118 & 0xff000000;
      recovered_10006bfc(param_1,0x2a0,iVar11,(int)acStack_64,local_118,0x68);
      local_114 = uVar4 | local_114 & 0xff000000;
      recovered_10006bfc(param_1,0x317,iVar11,(int)(puVar26 + 0x28),local_114,0x48);
    }
    uVar6 = uVar6 + 1;
    iVar5 = iVar5 + 0x48;
  } while (uVar6 != 0xb);
  uVar27 = 0;
  local_f8 = 0;
  do {
    uVar17 = DAT_10008098;
    uVar6 = DAT_10008094;
    iVar5 = 0xda;
    if (2 < uVar27) {
      iVar5 = 0xee;
    }
    if (uVar27 < 2) {
      iVar5 = 0xc6;
    }
    uVar16 = uVar27 * 0x74 + iVar5;
    iVar19 = 0x74;
    if (uVar27 == 1) {
      iVar19 = 0x88;
    }
    uVar10 = DAT_10008098;
    if (0x17b < (int)DAT_10008098) {
      uVar10 = 0x17c;
    }
    uVar30 = DAT_10008094;
    if ((int)uVar16 < (int)DAT_10008094) {
      uVar30 = uVar16;
    }
    if (0x164 < (int)DAT_10008098) {
      uVar13 = 0xf4f4f4;
      uVar4 = 0x164;
      bVar34 = uVar27 == *(uint *)(param_1 + 0x344);
      iVar11 = DAT_10008094 * 0x590;
      if (bVar34) {
        uVar13 = 0xd89a;
      }
      uVar22 = iVar5 + iVar19 + local_f8;
      if (bVar34) {
        uVar13 = uVar13 & 0xffff | 0xff0000;
      }
      iVar5 = DAT_10008094 * 4;
      if ((int)DAT_10008094 < (int)uVar22) {
        uVar22 = DAT_10008094;
      }
      do {
        uVar12 = uVar30;
        if ((int)uVar16 < (int)uVar6) {
          do {
            if (((((int)uVar4 < (int)uVar17) && (-1 < (int)uVar12)) &&
                (*(int *)(param_1 + 0x340) != 0)) && ((int)uVar12 < (int)uVar6)) {
              *(char *)(*(int *)(param_1 + 0x340) + iVar11 + uVar12 * 4) = (char)uVar13;
              *(char *)(*(int *)(param_1 + 0x340) + iVar11 + uVar12 * 4 + 1) = (char)(uVar13 >> 8);
              *(char *)(*(int *)(param_1 + 0x340) + iVar11 + uVar12 * 4 + 2) =
                   (char)(uVar13 >> 0x10);
              *(undefined1 *)(*(int *)(param_1 + 0x340) + iVar11 + uVar12 * 4 + 3) = 0xff;
            }
            uVar12 = uVar12 + 1;
          } while (uVar22 != uVar12);
        }
        uVar4 = uVar4 + 1;
        iVar11 = iVar11 + iVar5;
      } while (uVar4 != uVar10);
    }
    recovered_100067e4(param_1,uVar16,0x164,iVar19,0x18,0x7e7e7e);
    recovered_10006bfc(param_1,uVar16 + 0xf,0x16c,*(int *)(&DAT_1000807c + uVar27 * 4),0x1e1e1e,
                       iVar19 - 0x16);
    uVar17 = DAT_10008098;
    uVar6 = DAT_10008094;
    uVar27 = uVar27 + 1;
    local_f8 = local_f8 + 0x74;
  } while (uVar27 != 5);
  iVar5 = DAT_10008094 - 0x20;
  switch((uintptr_t)(*(undefined4 *)(param_1 + 0x344))) {
  case 0:
    uVar27 = DAT_10008094 - 0x10;
    if ((int)DAT_10008094 < 0x10) {
      uVar27 = 0;
      uVar16 = DAT_10008094;
    }
    else {
      uVar16 = 0x10;
    }
    uVar10 = DAT_10008098;
    if (0x1f7 < (int)DAT_10008098) {
      uVar10 = 0x1f8;
    }
    if (0x17a < (int)DAT_10008098) {
      uVar30 = 0x17a;
      iVar11 = DAT_10008094 * 0x5e8;
      iVar19 = DAT_10008094 * 4;
      do {
        uVar4 = uVar16;
        if ((int)uVar16 < (int)uVar27) {
          do {
            if (((((int)uVar30 < (int)uVar17) && (-1 < (int)uVar4)) &&
                (*(int *)(param_1 + 0x340) != 0)) && ((int)uVar4 < (int)uVar6)) {
              *(undefined1 *)(*(int *)(param_1 + 0x340) + iVar11 + uVar4 * 4) = 0xe7;
              *(undefined1 *)(*(int *)(param_1 + 0x340) + iVar11 + uVar4 * 4 + 1) = 0xe7;
              *(undefined1 *)(*(int *)(param_1 + 0x340) + iVar11 + uVar4 * 4 + 2) = 0xe7;
              *(undefined1 *)(*(int *)(param_1 + 0x340) + iVar11 + uVar4 * 4 + 3) = 0xff;
            }
            uVar4 = uVar4 + 1;
          } while (uVar27 != uVar4);
        }
        uVar30 = uVar30 + 1;
        iVar11 = iVar11 + iVar19;
      } while (uVar30 != uVar10);
    }
    recovered_100067e4(param_1,0x10,0x17a,iVar5,0x7e,0xc3c3c3);
    recovered_10006bfc(param_1,0x56,0x19c,((uintptr_t)pf_module_state + 0x21eU),0x282828,0x46);
    pf_varargs_10007fd0__4__4_
              (acStack_64,0x40,str_10007dbb,*(uint *)(param_1 + 0x60ac) / 10,
               *(uint *)(param_1 + 0x60ac) % 10);
    recovered_10006bfc(param_1,0x92,0x19c,(int)acStack_64,0x52c448,0x46);
    recovered_10006bfc(param_1,0x56,0x1b4,((uintptr_t)pf_module_state + 0x226U),0x282828,0x50);
    pf_varargs_10007fd0__4__4_
              (acStack_64,0x40,str_10007dbb,*(uint *)(param_1 + 0x60b0) / 10,
               *(uint *)(param_1 + 0x60b0) % 10);
    recovered_10006bfc(param_1,0x92,0x1b4,(int)acStack_64,0x4b4bd0,0x46);
    recovered_10006bfc(param_1,0x56,0x1cc,((uintptr_t)pf_module_state + 0x230U),0x282828,0x46);
    pf_varargs_10007fd0__4__4_
              (acStack_64,0x40,str_10007dbb,*(uint *)(param_1 + 0x60b4) / 10,
               *(uint *)(param_1 + 0x60b4) % 10);
    recovered_10006bfc(param_1,0x92,0x1cc,(int)acStack_64,0x282828,0x46);
    recovered_10006f2c(param_1,0xfe,0x196,0x1cf000);
    recovered_10006f2c(param_1,0xfe,0x1ae,0x1418f5);
    pf_varargs_10007fd0__4_(acStack_64,0x40,str_10007e2c,*(uint *)(param_1 + 0x388));
    recovered_10006bfc(param_1,0x15a,0x19c,(int)acStack_64,0x282828,0x6e);
    pf_varargs_10007fd0__4_(acStack_64,0x40,str_10007e38,*(uint *)(param_1 + 900));
    recovered_10006bfc(param_1,0x15a,0x1b4,(int)acStack_64,0x282828,0x78);
    recovered_10006bfc(param_1,0x23e,0x18c,((uintptr_t)pf_module_state + 0x252U),0x282828,0x50);
    uVar27 = 0x222;
    iVar28 = 1;
    iVar5 = param_1 + 0x6120;
    iVar19 = param_1 + 0x60d8;
    iVar11 = 0x62;
    break;
  case 1:
    uVar27 = *(uint *)(param_1 + 0x364);
    uVar16 = *(uint *)(param_1 + 0x36c);
    uVar13 = *(uint *)(param_1 + 0x368);
    uVar10 = *(uint *)(param_1 + 0x370);
    uVar36 = *(ulonglong *)(param_1 + 0x36c);
    uVar4 = uVar16 - uVar27;
    bVar34 = (uint)(uVar27 <= uVar16) <= uVar10 - uVar13;
    uVar30 = uVar10 - (uVar13 + (uVar27 > uVar16));
    if (uVar10 <= uVar13 && bVar34) {
      uVar30 = 0;
    }
    uVar22 = DAT_10008094 - 0x10;
    if ((int)DAT_10008094 < 0x10) {
      uVar22 = 0;
      uVar12 = DAT_10008094;
    }
    else {
      uVar12 = 0x10;
    }
    uVar21 = DAT_10008098;
    if (0x1f7 < (int)DAT_10008098) {
      uVar21 = 0x1f8;
    }
    if (uVar10 <= uVar13 && bVar34) {
      uVar4 = 0;
    }
    if (0x17a < (int)DAT_10008098) {
      iVar19 = DAT_10008094 * 4;
      iVar11 = DAT_10008094 * 0x5e8;
      uVar24 = 0x17a;
      do {
        uVar9 = uVar12;
        if ((int)uVar12 < (int)uVar22) {
          do {
            if ((((int)uVar24 < (int)uVar17) && (-1 < (int)uVar9)) &&
               ((*(int *)(param_1 + 0x340) != 0 && ((int)uVar9 < (int)uVar6)))) {
              *(undefined1 *)(*(int *)(param_1 + 0x340) + iVar11 + uVar9 * 4) = 0xe7;
              *(undefined1 *)(*(int *)(param_1 + 0x340) + iVar11 + uVar9 * 4 + 1) = 0xe7;
              *(undefined1 *)(*(int *)(param_1 + 0x340) + iVar11 + uVar9 * 4 + 2) = 0xe7;
              *(undefined1 *)(*(int *)(param_1 + 0x340) + iVar11 + uVar9 * 4 + 3) = 0xff;
            }
            uVar9 = uVar9 + 1;
          } while (uVar22 != uVar9);
        }
        uVar24 = uVar24 + 1;
        iVar11 = iVar11 + iVar19;
      } while (uVar24 != uVar21);
    }
    recovered_100067e4(param_1,0x10,0x17a,iVar5,0x7e,0xc3c3c3);
    uVar6 = 0x3fffffff;
    if (-uVar13 < (uint)(uVar27 < 0x40000000)) {
      uVar6 = 0xfffff;
      if ((uint)(uVar27 < 0x100000) <= -uVar13) {
        iVar5 = 0x14;
        in_stack_fffffecc = &DAT_10007dc6;
        goto LAB_10005950;
      }
      if (uVar13 != 0 || uVar13 < (0x3ff < uVar27)) {
        uVar6 = 0x3ff;
        iVar5 = 10;
        in_stack_fffffecc = &DAT_10007dc9;
        goto LAB_10005950;
      }
      pcVar14 = str_10007ddb;
      puVar20 = &DAT_10007dc1;
      uVar6 = uVar13;
    }
    else {
      iVar5 = 0x1e;
      in_stack_fffffecc = &DAT_10007dc3;
LAB_10005950:
      lVar2 = (ulonglong)(uVar6 & uVar27) * 100;
      local_f0 = (uint)((ulonglong)lVar2 >> 0x20);
      uVar6 = uVar13 >> iVar5;
      uVar17 = iVar5 - 0x20;
      if (-1 < (int)uVar17) {
        uVar6 = 0;
      }
      puVar20 = (undefined *)((uint)lVar2 >> iVar5 | local_f0 << (0x20U - iVar5 & 0xff));
      if (-1 < (int)uVar17) {
        puVar20 = (undefined *)(local_f0 >> (uVar17 & 0xff));
      }
      local_f0 = local_f0 >> iVar5;
      if (-1 < (int)uVar17) {
        local_f0 = 0;
      }
      uVar27 = uVar27 >> iVar5 | uVar13 << (0x20U - iVar5 & 0xff);
      pcVar14 = str_10007dcc;
      if (-1 < (int)uVar17) {
        uVar27 = uVar13 >> (uVar17 & 0xff);
      }
    }
    pf_varargs_10007fd0__4__4__4__4__4_
              (acStack_64,0x40,pcVar14,uVar27,uVar6,(uint)puVar20,local_f0,(uint)in_stack_fffffecc);
    recovered_10006bfc(param_1,0x5c,0x19c,((uintptr_t)pf_module_state + 0x25cU),0x282828,0x3c);
    recovered_10006bfc(param_1,0x94,0x19c,(int)acStack_64,0x52c448,0x6e);
    uVar27 = 0x3fffffff;
    if (-uVar30 < (uint)(uVar4 < 0x40000000)) {
      uVar27 = 0xfffff;
      if ((uint)(uVar4 < 0x100000) <= -uVar30) {
        iVar5 = 0x14;
        in_stack_fffffecc = &DAT_10007dc6;
        goto LAB_10005a90;
      }
      if (uVar30 != 0 || uVar30 < (0x3ff < uVar4)) {
        uVar27 = 0x3ff;
        iVar5 = 10;
        in_stack_fffffecc = &DAT_10007dc9;
        goto LAB_10005a90;
      }
      pcVar14 = str_10007ddb;
      puVar20 = &DAT_10007dc1;
      uVar6 = uVar4;
      uVar27 = uVar30;
    }
    else {
      iVar5 = 0x1e;
      in_stack_fffffecc = &DAT_10007dc3;
LAB_10005a90:
      lVar2 = (ulonglong)(uVar27 & uVar4) * 100;
      local_f0 = (uint)((ulonglong)lVar2 >> 0x20);
      uVar27 = uVar30 >> iVar5;
      uVar17 = iVar5 - 0x20;
      if (-1 < (int)uVar17) {
        uVar27 = 0;
      }
      puVar20 = (undefined *)((uint)lVar2 >> iVar5 | local_f0 << (0x20U - iVar5 & 0xff));
      if (-1 < (int)uVar17) {
        puVar20 = (undefined *)(local_f0 >> (uVar17 & 0xff));
      }
      local_f0 = local_f0 >> iVar5;
      if (-1 < (int)uVar17) {
        local_f0 = 0;
      }
      uVar6 = uVar4 >> iVar5 | uVar30 << (0x20U - iVar5 & 0xff);
      pcVar14 = str_10007dcc;
      if (-1 < (int)uVar17) {
        uVar6 = uVar30 >> (uVar17 & 0xff);
      }
    }
    pf_varargs_10007fd0__4__4__4__4__4_
              (acStack_64,0x40,pcVar14,uVar6,uVar27,(uint)puVar20,local_f0,(uint)in_stack_fffffecc);
    recovered_10006bfc(param_1,0x5c,0x1b4,((uintptr_t)pf_module_state + 0x262U),0x282828,0x3c);
    recovered_10006bfc(param_1,0x94,0x1b4,(int)acStack_64,0xcd4646,0x6e);
    uVar27 = 0x3fffffff;
    if (-uVar10 < (uint)(uVar16 < 0x40000000)) {
      uVar27 = 0xfffff;
      if ((uint)(uVar16 < 0x100000) <= -uVar10) {
        iVar5 = 0x14;
        in_stack_fffffecc = &DAT_10007dc6;
        goto LAB_10005bd0;
      }
      if (uVar10 != 0 || uVar10 < (0x3ff < uVar16)) {
        uVar27 = 0x3ff;
        iVar5 = 10;
        in_stack_fffffecc = &DAT_10007dc9;
        goto LAB_10005bd0;
      }
      pcVar14 = str_10007ddb;
      puVar20 = &DAT_10007dc1;
      uVar6 = uVar16;
      uVar27 = uVar10;
    }
    else {
      iVar5 = 0x1e;
      in_stack_fffffecc = &DAT_10007dc3;
LAB_10005bd0:
      lVar2 = (ulonglong)(uVar27 & uVar16) * 100;
      local_f0 = (uint)((ulonglong)lVar2 >> 0x20);
      uVar27 = uVar10 >> iVar5;
      uVar17 = iVar5 - 0x20;
      if (-1 < (int)uVar17) {
        uVar27 = 0;
      }
      puVar20 = (undefined *)((uint)lVar2 >> iVar5 | local_f0 << (0x20U - iVar5 & 0xff));
      if (-1 < (int)uVar17) {
        puVar20 = (undefined *)(local_f0 >> (uVar17 & 0xff));
      }
      local_f0 = local_f0 >> iVar5;
      if (-1 < (int)uVar17) {
        local_f0 = 0;
      }
      uVar6 = uVar16 >> iVar5 | uVar10 << (0x20U - iVar5 & 0xff);
      pcVar14 = str_10007dcc;
      if (-1 < (int)uVar17) {
        uVar6 = uVar10 >> (uVar17 & 0xff);
      }
    }
    pf_varargs_10007fd0__4__4__4__4__4_
              (acStack_64,0x40,pcVar14,uVar6,uVar27,(uint)puVar20,local_f0,(uint)in_stack_fffffecc);
    recovered_10006bfc(param_1,0x15a,0x19c,((uintptr_t)pf_module_state + 0x268U),0x282828,0x50);
    recovered_10006bfc(param_1,0x1a2,0x19c,(int)acStack_64,0x282828,0x6e);
    uVar6 = DAT_10008098;
    uVar27 = DAT_10008094;
    iVar29 = -0x20;
    iVar19 = DAT_10008094 * 0x660 + 0x851;
    iVar11 = DAT_10008094 * 0x660 + 0x852;
    iVar5 = DAT_10008094 * 4;
    iVar28 = DAT_10008094 * 0x660 + 0x853;
    iVar18 = DAT_10008094 * 0x660;
    do {
      uVar17 = iVar29 + 0x1b8;
      iVar31 = 0;
      do {
        if ((((uint)((iVar31 + -0x20) * (iVar31 + -0x20) + iVar29 * iVar29) < 0x401) &&
            (param_1 != 0)) &&
           ((uVar13 = iVar31 + 0x214, -1 < (int)(uVar13 | uVar17) &&
            (*(int *)(param_1 + 0x340) != 0)))) {
          bVar35 = SBORROW4(uVar27,uVar13);
          iVar32 = uVar27 - uVar13;
          bVar34 = uVar27 == uVar13;
          if ((int)uVar13 < (int)uVar27) {
            bVar35 = SBORROW4(uVar6,uVar17);
            iVar32 = uVar6 - uVar17;
            bVar34 = uVar6 == uVar17;
          }
          if (!bVar34 && iVar32 < 0 == bVar35) {
            *(undefined1 *)(*(int *)(param_1 + 0x340) + iVar18 + iVar31 * 4 + 0x850) = 0;
            *(undefined1 *)(*(int *)(param_1 + 0x340) + iVar19 + iVar31 * 4) = 0xeb;
            *(undefined1 *)(*(int *)(param_1 + 0x340) + iVar11 + iVar31 * 4) = 0x1c;
            *(undefined1 *)(*(int *)(param_1 + 0x340) + iVar28 + iVar31 * 4) = 0xff;
          }
        }
        iVar31 = iVar31 + 1;
      } while (iVar31 != 0x41);
      iVar29 = iVar29 + 1;
      iVar18 = iVar18 + iVar5;
      iVar19 = iVar19 + iVar5;
      iVar11 = iVar11 + iVar5;
      iVar28 = iVar28 + iVar5;
    } while (iVar29 != 0x21);
    if (uVar16 != 0 || uVar10 != 0) {
      iVar19 = 0x10005dd0;
      uVar36 = recovered_100019c0(CONCAT44(uVar30 * 100 + (int)((ulonglong)uVar4 * 100 >> 0x20),
                                           (int)((ulonglong)uVar4 * 100)),uVar36);
      uVar17 = (uint)(uVar36 >> 0x20);
      if (uVar17 != 0 || uVar17 < (10 < (uint)uVar36)) {
        iVar29 = -0x20;
        iVar31 = uVar27 * 0x660 + 0x8d1;
        iVar11 = uVar27 * 0x660 + 0x8d2;
        iVar28 = uVar27 * 0x660 + 0x8d3;
        iVar18 = uVar27 * 0x660;
        do {
          uVar17 = iVar29 + 0x1b8;
          iVar32 = 0;
          do {
            if ((uint)(iVar32 * iVar32 + iVar29 * iVar29) < 0x401) {
              if (param_1 != 0) {
                iVar19 = *(int *)(param_1 + 0x340);
              }
              if (param_1 != 0 && iVar19 != 0) {
                uVar16 = iVar32 + 0x234;
                bVar35 = SBORROW4(uVar27,uVar16);
                iVar1 = uVar27 - uVar16;
                bVar34 = uVar27 == uVar16;
                if ((int)uVar16 < (int)uVar27) {
                  bVar35 = SBORROW4(uVar6,uVar17);
                  iVar1 = uVar6 - uVar17;
                  bVar34 = uVar6 == uVar17;
                }
                if (!bVar34 && iVar1 < 0 == bVar35) {
                  *(undefined1 *)(iVar19 + iVar18 + iVar32 * 4 + 0x8d0) = 0x28;
                  *(undefined1 *)(*(int *)(param_1 + 0x340) + iVar31 + iVar32 * 4) = 0x28;
                  *(undefined1 *)(*(int *)(param_1 + 0x340) + iVar11 + iVar32 * 4) = 0xe6;
                  *(undefined1 *)(*(int *)(param_1 + 0x340) + iVar28 + iVar32 * 4) = 0xff;
                }
              }
            }
            iVar32 = iVar32 + 1;
          } while (iVar32 != 0x21);
          bVar34 = iVar29 != 0;
          iVar18 = iVar18 + iVar5;
          iVar31 = iVar31 + iVar5;
          iVar11 = iVar11 + iVar5;
          iVar28 = iVar28 + iVar5;
          iVar29 = iVar29 + 1;
        } while (bVar34);
      }
    }
    pcVar14 = acStack_64;
    uVar27 = 100;
    iVar5 = 0x20c;
    iVar19 = 0x1e2;
    goto LAB_10005ee0;
  case 2:
    uVar36 = *(ulonglong *)(param_1 + 0x414);
    uVar16 = DAT_10008094 - 0x10;
    uVar27 = DAT_10008094;
    if (0xf < (int)DAT_10008094) {
      uVar27 = 0x10;
    }
    uVar7 = *(undefined4 *)(param_1 + 0x41c);
    if ((int)DAT_10008094 < 0x10) {
      uVar16 = 0;
    }
    uVar8 = *(undefined4 *)(param_1 + 0x420);
    uVar4 = *(uint *)(param_1 + 0x430);
    uVar10 = *(uint *)(param_1 + 0x42c);
    uVar30 = DAT_10008098;
    if (0x1f7 < (int)DAT_10008098) {
      uVar30 = 0x1f8;
    }
    uVar22 = *(uint *)(param_1 + 0x428);
    uVar13 = *(uint *)(param_1 + 0x424);
    if (0x17a < (int)DAT_10008098) {
      iVar19 = DAT_10008094 * 4;
      iVar11 = DAT_10008094 * 0x5e8;
      uVar12 = 0x17a;
      do {
        uVar21 = uVar27;
        if ((int)uVar27 < (int)uVar16) {
          do {
            if (((((int)uVar12 < (int)uVar17) && (-1 < (int)uVar21)) &&
                (*(int *)(param_1 + 0x340) != 0)) && ((int)uVar21 < (int)uVar6)) {
              *(undefined1 *)(*(int *)(param_1 + 0x340) + iVar11 + uVar21 * 4) = 0xe7;
              *(undefined1 *)(*(int *)(param_1 + 0x340) + iVar11 + uVar21 * 4 + 1) = 0xe7;
              *(undefined1 *)(*(int *)(param_1 + 0x340) + iVar11 + uVar21 * 4 + 2) = 0xe7;
              *(undefined1 *)(*(int *)(param_1 + 0x340) + iVar11 + uVar21 * 4 + 3) = 0xff;
            }
            uVar21 = uVar21 + 1;
          } while (uVar16 != uVar21);
        }
        uVar12 = uVar12 + 1;
        iVar11 = iVar11 + iVar19;
      } while (uVar12 != uVar30);
    }
    recovered_100067e4(param_1,0x10,0x17a,iVar5,0x7e,0xc3c3c3);
    recovered_100078a8(param_1,0x10,0x17a);
    pf_varargs_10007fd0__8_(acStack_64,0x40,str_10007e65,uVar36);
    recovered_10006bfc(param_1,0x58,0x1a8,(int)acStack_64,0x282828,0x82);
    pf_varargs_10007fd0__8_(acStack_64,0x40,str_10007e74,CONCAT44(uVar8,uVar7));
    recovered_10006bfc(param_1,0x58,0x1be,(int)acStack_64,0x282828,0x8c);
    pf_varargs_10007fd0__4_(acStack_64,0x40,str_10007e85,*(uint *)(param_1 + 0x60b8));
    recovered_10006bfc(param_1,0x58,0x1d4,(int)acStack_64,0x282828,0x82);
    pf_varargs_10007fd0__4_(acStack_64,0x40,str_10007e93,*(uint *)(param_1 + 0x60bc));
    recovered_10006bfc(param_1,0x58,0x1ea,(int)acStack_64,0x282828,0x8c);
    uVar27 = 0x3fffffff;
    if (-uVar22 < (uint)(uVar13 < 0x40000000)) {
      if ((uint)(uVar13 < 0x100000) <= -uVar22) {
        iVar5 = 0x14;
        uVar27 = 0xfffff;
        in_stack_fffffecc = &DAT_10007dc6;
        goto LAB_10004d50;
      }
      if (uVar22 != 0 || uVar22 < (0x3ff < uVar13)) {
        uVar27 = 0x3ff;
        iVar5 = 10;
        in_stack_fffffecc = &DAT_10007dc9;
        goto LAB_10004d50;
      }
      pcVar14 = str_10007ddb;
      puVar20 = &DAT_10007dc1;
      uVar27 = uVar22;
    }
    else {
      iVar5 = 0x1e;
      in_stack_fffffecc = &DAT_10007dc3;
LAB_10004d50:
      lVar2 = (ulonglong)(uVar27 & uVar13) * 100;
      local_f0 = (uint)((ulonglong)lVar2 >> 0x20);
      uVar27 = uVar22 >> iVar5;
      uVar6 = iVar5 - 0x20;
      if (-1 < (int)uVar6) {
        uVar27 = 0;
      }
      puVar20 = (undefined *)((uint)lVar2 >> iVar5 | local_f0 << (0x20U - iVar5 & 0xff));
      if (-1 < (int)uVar6) {
        puVar20 = (undefined *)(local_f0 >> (uVar6 & 0xff));
      }
      local_f0 = local_f0 >> iVar5;
      if (-1 < (int)uVar6) {
        local_f0 = 0;
      }
      uVar13 = uVar13 >> iVar5 | uVar22 << (0x20U - iVar5 & 0xff);
      pcVar14 = str_10007dcc;
      if (-1 < (int)uVar6) {
        uVar13 = uVar22 >> (uVar6 & 0xff);
      }
    }
    pf_varargs_10007fd0__4__4__4__4__4_
              (acStack_a4,0x40,pcVar14,uVar13,uVar27,(uint)puVar20,local_f0,(uint)in_stack_fffffecc)
    ;
    pf_varargs_10007fd0__4_(acStack_64,0x40,str_10007ea2,(uint)acStack_a4);
    recovered_10006bfc(param_1,0x12e,0x1a8,(int)acStack_64,0x282828,0xaa);
    uVar27 = 0x3fffffff;
    if (-uVar4 < (uint)(uVar10 < 0x40000000)) {
      if ((uint)(uVar10 < 0x100000) <= -uVar4) {
        iVar5 = 0x14;
        uVar27 = 0xfffff;
        in_stack_fffffecc = &DAT_10007dc6;
        goto LAB_10004e78;
      }
      if (uVar4 != 0 || uVar4 < (0x3ff < uVar10)) {
        uVar27 = 0x3ff;
        iVar5 = 10;
        in_stack_fffffecc = &DAT_10007dc9;
        goto LAB_10004e78;
      }
      pcVar14 = str_10007ddb;
      puVar20 = &DAT_10007dc1;
      uVar27 = uVar4;
    }
    else {
      iVar5 = 0x1e;
      in_stack_fffffecc = &DAT_10007dc3;
LAB_10004e78:
      lVar2 = (ulonglong)(uVar27 & uVar10) * 100;
      local_f0 = (uint)((ulonglong)lVar2 >> 0x20);
      uVar27 = uVar4 >> iVar5;
      uVar6 = iVar5 - 0x20;
      if (-1 < (int)uVar6) {
        uVar27 = 0;
      }
      puVar20 = (undefined *)((uint)lVar2 >> iVar5 | local_f0 << (0x20U - iVar5 & 0xff));
      if (-1 < (int)uVar6) {
        puVar20 = (undefined *)(local_f0 >> (uVar6 & 0xff));
      }
      local_f0 = local_f0 >> iVar5;
      if (-1 < (int)uVar6) {
        local_f0 = 0;
      }
      uVar10 = uVar10 >> iVar5 | uVar4 << (0x20U - iVar5 & 0xff);
      pcVar14 = str_10007dcc;
      if (-1 < (int)uVar6) {
        uVar10 = uVar4 >> (uVar6 & 0xff);
      }
    }
    pf_varargs_10007fd0__4__4__4__4__4_
              (acStack_a4,0x40,pcVar14,uVar10,uVar27,(uint)puVar20,local_f0,(uint)in_stack_fffffecc)
    ;
    pf_varargs_10007fd0__4_(acStack_64,0x40,str_10007eb0,(uint)acStack_a4);
    recovered_10006bfc(param_1,0x12e,0x1be,(int)acStack_64,0x282828,0xb4);
    uVar17 = 0x3fffffff;
    uVar27 = *(uint *)(param_1 + 0x60c0);
    uVar6 = *(uint *)(param_1 + 0x60c4);
    if (-uVar6 < (uint)(uVar27 < 0x40000000)) {
      if ((uint)(uVar27 < 0x100000) <= -uVar6) {
        iVar5 = 0x14;
        uVar17 = 0xfffff;
        in_stack_fffffecc = &DAT_10007dc6;
        goto LAB_10004fa4;
      }
      if (uVar6 != 0 || uVar6 < (0x3ff < uVar27)) {
        uVar17 = 0x3ff;
        iVar5 = 10;
        in_stack_fffffecc = &DAT_10007dc9;
        goto LAB_10004fa4;
      }
      pcVar14 = str_10007ddb;
      puVar20 = &DAT_10007dc1;
      uVar17 = uVar6;
    }
    else {
      iVar5 = 0x1e;
      in_stack_fffffecc = &DAT_10007dc3;
LAB_10004fa4:
      lVar2 = (ulonglong)(uVar17 & uVar27) * 100;
      local_f0 = (uint)((ulonglong)lVar2 >> 0x20);
      uVar17 = uVar6 >> iVar5;
      uVar16 = iVar5 - 0x20;
      if (-1 < (int)uVar16) {
        uVar17 = 0;
      }
      puVar20 = (undefined *)((uint)lVar2 >> iVar5 | local_f0 << (0x20U - iVar5 & 0xff));
      if (-1 < (int)uVar16) {
        puVar20 = (undefined *)(local_f0 >> (uVar16 & 0xff));
      }
      local_f0 = local_f0 >> iVar5;
      if (-1 < (int)uVar16) {
        local_f0 = 0;
      }
      uVar27 = uVar27 >> iVar5 | uVar6 << (0x20U - iVar5 & 0xff);
      pcVar14 = str_10007dcc;
      if (-1 < (int)uVar16) {
        uVar27 = uVar6 >> (uVar16 & 0xff);
      }
    }
    pf_varargs_10007fd0__4__4__4__4__4_
              (acStack_e4,0x20,pcVar14,uVar27,uVar17,(uint)puVar20,local_f0,(uint)in_stack_fffffecc)
    ;
    pf_varargs_10007fd0__4_(acStack_a4,0x40,str_10007f09,(uint)acStack_e4);
    pf_varargs_10007fd0__4_(acStack_64,0x40,str_10007ec1,(uint)acStack_a4);
    recovered_10006bfc(param_1,0x12e,0x1d4,(int)acStack_64,0x52c448,0xbe);
    uVar17 = 0x3fffffff;
    uVar27 = *(uint *)(param_1 + 0x60c8);
    uVar6 = *(uint *)(param_1 + 0x60cc);
    if (-uVar6 < (uint)(uVar27 < 0x40000000)) {
      if ((uint)(uVar27 < 0x100000) <= -uVar6) {
        iVar5 = 0x14;
        uVar17 = 0xfffff;
        in_stack_fffffecc = &DAT_10007dc6;
        goto LAB_100050f8;
      }
      if (uVar6 != 0 || uVar6 < (0x3ff < uVar27)) {
        uVar17 = 0x3ff;
        iVar5 = 10;
        in_stack_fffffecc = &DAT_10007dc9;
        goto LAB_100050f8;
      }
      pcVar14 = str_10007ddb;
      puVar20 = &DAT_10007dc1;
      uVar17 = uVar6;
    }
    else {
      iVar5 = 0x1e;
      in_stack_fffffecc = &DAT_10007dc3;
LAB_100050f8:
      lVar2 = (ulonglong)(uVar17 & uVar27) * 100;
      local_f0 = (uint)((ulonglong)lVar2 >> 0x20);
      uVar17 = uVar6 >> iVar5;
      uVar16 = iVar5 - 0x20;
      if (-1 < (int)uVar16) {
        uVar17 = 0;
      }
      puVar20 = (undefined *)((uint)lVar2 >> iVar5 | local_f0 << (0x20U - iVar5 & 0xff));
      if (-1 < (int)uVar16) {
        puVar20 = (undefined *)(local_f0 >> (uVar16 & 0xff));
      }
      local_f0 = local_f0 >> iVar5;
      if (-1 < (int)uVar16) {
        local_f0 = 0;
      }
      uVar27 = uVar27 >> iVar5 | uVar6 << (0x20U - iVar5 & 0xff);
      pcVar14 = str_10007dcc;
      if (-1 < (int)uVar16) {
        uVar27 = uVar6 >> (uVar16 & 0xff);
      }
    }
    pf_varargs_10007fd0__4__4__4__4__4_
              (acStack_e4,0x20,pcVar14,uVar27,uVar17,(uint)puVar20,local_f0,(uint)in_stack_fffffecc)
    ;
    pf_varargs_10007fd0__4_(acStack_a4,0x40,str_10007f09,(uint)acStack_e4);
    pf_varargs_10007fd0__4_(acStack_64,0x40,str_10007ed3,(uint)acStack_a4);
    recovered_10006bfc(param_1,0x12e,0x1ea,(int)acStack_64,0x4b4bd0,200);
    uVar17 = 0x3fffffff;
    uVar27 = *(uint *)(param_1 + 0x60d0);
    uVar6 = *(uint *)(param_1 + 0x60d4);
    if (-uVar6 < (uint)(uVar27 < 0x40000000)) {
      if ((uint)(uVar27 < 0x100000) <= -uVar6) {
        iVar5 = 0x14;
        uVar17 = 0xfffff;
        in_stack_fffffecc = &DAT_10007dc6;
        goto LAB_1000524c;
      }
      if (uVar6 != 0 || uVar6 < (0x3ff < uVar27)) {
        uVar17 = 0x3ff;
        iVar5 = 10;
        in_stack_fffffecc = &DAT_10007dc9;
        goto LAB_1000524c;
      }
      pcVar14 = str_10007ddb;
      puVar20 = &DAT_10007dc1;
      uVar17 = uVar6;
    }
    else {
      iVar5 = 0x1e;
      in_stack_fffffecc = &DAT_10007dc3;
LAB_1000524c:
      lVar2 = (ulonglong)(uVar17 & uVar27) * 100;
      local_f0 = (uint)((ulonglong)lVar2 >> 0x20);
      uVar17 = uVar6 >> iVar5;
      uVar16 = iVar5 - 0x20;
      if (-1 < (int)uVar16) {
        uVar17 = 0;
      }
      puVar20 = (undefined *)((uint)lVar2 >> iVar5 | local_f0 << (0x20U - iVar5 & 0xff));
      if (-1 < (int)uVar16) {
        puVar20 = (undefined *)(local_f0 >> (uVar16 & 0xff));
      }
      local_f0 = local_f0 >> iVar5;
      if (-1 < (int)uVar16) {
        local_f0 = 0;
      }
      uVar27 = uVar27 >> iVar5 | uVar6 << (0x20U - iVar5 & 0xff);
      pcVar14 = str_10007dcc;
      if (-1 < (int)uVar16) {
        uVar27 = uVar6 >> (uVar16 & 0xff);
      }
    }
    pf_varargs_10007fd0__4__4__4__4__4_
              (acStack_e4,0x20,pcVar14,uVar27,uVar17,(uint)puVar20,local_f0,(uint)in_stack_fffffecc)
    ;
    pf_varargs_10007fd0__4_(acStack_a4,0x40,str_10007f09,(uint)acStack_e4);
    pf_varargs_10007fd0__4_(acStack_64,0x40,str_10007ee8,(uint)acStack_a4);
    recovered_10006bfc(param_1,0x232,0x18c,(int)acStack_64,0x282828,0x82);
    recovered_100071e4(param_1,0x224,0x19e,0x6a,0x48,param_1 + 0x6168,param_1 + 0x61b0,0);
    recovered_10006f2c(param_1,0x1de,0x1ce,0x1cf000);
    recovered_10006f2c(param_1,0x1de,0x1e6,0x1418f5);
    goto LAB_10005ee4;
  case 3:
    uVar30 = *(uint *)(param_1 + 0x404);
    uVar27 = *(uint *)(param_1 + 0x40c);
    uVar13 = *(uint *)(param_1 + 0x408);
    uVar16 = *(uint *)(param_1 + 0x410);
    uVar36 = *(ulonglong *)(param_1 + 0x40c);
    uVar4 = uVar27 - uVar30;
    bVar34 = (uint)(uVar30 <= uVar27) <= uVar16 - uVar13;
    uVar10 = uVar16 - (uVar13 + (uVar30 > uVar27));
    if (uVar16 <= uVar13 && bVar34) {
      uVar10 = 0;
    }
    uVar22 = DAT_10008094 - 0x10;
    if ((int)DAT_10008094 < 0x10) {
      uVar22 = 0;
      uVar12 = DAT_10008094;
    }
    else {
      uVar12 = 0x10;
    }
    uVar21 = DAT_10008098;
    if (0x1f7 < (int)DAT_10008098) {
      uVar21 = 0x1f8;
    }
    if (uVar16 <= uVar13 && bVar34) {
      uVar4 = 0;
    }
    if (0x17a < (int)DAT_10008098) {
      iVar19 = DAT_10008094 * 4;
      iVar11 = DAT_10008094 * 0x5e8;
      uVar24 = 0x17a;
      do {
        uVar9 = uVar12;
        if ((int)uVar12 < (int)uVar22) {
          do {
            if ((((int)uVar24 < (int)uVar17) && (-1 < (int)uVar9)) &&
               ((*(int *)(param_1 + 0x340) != 0 && ((int)uVar9 < (int)uVar6)))) {
              *(undefined1 *)(*(int *)(param_1 + 0x340) + iVar11 + uVar9 * 4) = 0xe7;
              *(undefined1 *)(*(int *)(param_1 + 0x340) + iVar11 + uVar9 * 4 + 1) = 0xe7;
              *(undefined1 *)(*(int *)(param_1 + 0x340) + iVar11 + uVar9 * 4 + 2) = 0xe7;
              *(undefined1 *)(*(int *)(param_1 + 0x340) + iVar11 + uVar9 * 4 + 3) = 0xff;
            }
            uVar9 = uVar9 + 1;
          } while (uVar22 != uVar9);
        }
        uVar24 = uVar24 + 1;
        iVar11 = iVar11 + iVar19;
      } while (uVar24 != uVar21);
    }
    recovered_100067e4(param_1,0x10,0x17a,iVar5,0x7e,0xc3c3c3);
    recovered_100078a8(param_1,0x10,0x17a);
    uVar6 = 0x3fffffff;
    if (-uVar13 < (uint)(uVar30 < 0x40000000)) {
      if ((uint)(uVar30 < 0x100000) <= -uVar13) {
        iVar5 = 0x14;
        uVar6 = 0xfffff;
        in_stack_fffffecc = &DAT_10007dc6;
        goto LAB_100053b0;
      }
      if (uVar13 != 0 || uVar13 < (0x3ff < uVar30)) {
        uVar6 = 0x3ff;
        iVar5 = 10;
        in_stack_fffffecc = &DAT_10007dc9;
        goto LAB_100053b0;
      }
      pcVar14 = str_10007ddb;
      puVar20 = &DAT_10007dc1;
      uVar17 = uVar30;
      uVar6 = uVar13;
    }
    else {
      in_stack_fffffecc = &DAT_10007dc3;
      iVar5 = 0x1e;
LAB_100053b0:
      lVar2 = (ulonglong)(uVar6 & uVar30) * 100;
      local_f0 = (uint)((ulonglong)lVar2 >> 0x20);
      uVar6 = uVar13 >> iVar5;
      uVar22 = iVar5 - 0x20;
      if (-1 < (int)uVar22) {
        uVar6 = 0;
      }
      puVar20 = (undefined *)((uint)lVar2 >> iVar5 | local_f0 << (0x20U - iVar5 & 0xff));
      if (-1 < (int)uVar22) {
        puVar20 = (undefined *)(local_f0 >> (uVar22 & 0xff));
      }
      local_f0 = local_f0 >> iVar5;
      if (-1 < (int)uVar22) {
        local_f0 = 0;
      }
      pcVar14 = str_10007dcc;
      uVar17 = uVar30 >> iVar5 | uVar13 << (0x20U - iVar5 & 0xff);
      if (-1 < (int)uVar22) {
        uVar17 = uVar13 >> (uVar22 & 0xff);
      }
    }
    pf_varargs_10007fd0__4__4__4__4__4_
              (acStack_64,0x40,pcVar14,uVar17,uVar6,(uint)puVar20,local_f0,(uint)in_stack_fffffecc);
    uVar6 = 0x3fffffff;
    if (-uVar10 < (uint)(uVar4 < 0x40000000)) {
      if ((uint)(uVar4 < 0x100000) <= -uVar10) {
        iVar5 = 0x14;
        uVar6 = 0xfffff;
        in_stack_fffffecc = &DAT_10007dc6;
        goto LAB_10005498;
      }
      if (uVar10 != 0 || uVar10 < (0x3ff < uVar4)) {
        uVar6 = 0x3ff;
        iVar5 = 10;
        in_stack_fffffecc = &DAT_10007dc9;
        goto LAB_10005498;
      }
      pcVar14 = str_10007ddb;
      puVar20 = &DAT_10007dc1;
      uVar17 = uVar4;
      uVar6 = uVar10;
    }
    else {
      iVar5 = 0x1e;
      in_stack_fffffecc = &DAT_10007dc3;
LAB_10005498:
      lVar2 = (ulonglong)(uVar6 & uVar4) * 100;
      local_f0 = (uint)((ulonglong)lVar2 >> 0x20);
      uVar6 = uVar10 >> iVar5;
      uVar22 = iVar5 - 0x20;
      if (-1 < (int)uVar22) {
        uVar6 = 0;
      }
      puVar20 = (undefined *)((uint)lVar2 >> iVar5 | local_f0 << (0x20U - iVar5 & 0xff));
      if (-1 < (int)uVar22) {
        puVar20 = (undefined *)(local_f0 >> (uVar22 & 0xff));
      }
      local_f0 = local_f0 >> iVar5;
      if (-1 < (int)uVar22) {
        local_f0 = 0;
      }
      pcVar14 = str_10007dcc;
      uVar17 = uVar4 >> iVar5 | uVar10 << (0x20U - iVar5 & 0xff);
      if (-1 < (int)uVar22) {
        uVar17 = uVar10 >> (uVar22 & 0xff);
      }
    }
    pf_varargs_10007fd0__4__4__4__4__4_
              (acStack_a4,0x40,pcVar14,uVar17,uVar6,(uint)puVar20,local_f0,(uint)in_stack_fffffecc);
    uVar6 = 0x3fffffff;
    if (-uVar16 < (uint)(uVar27 < 0x40000000)) {
      if ((uint)(uVar27 < 0x100000) <= -uVar16) {
        iVar5 = 0x14;
        uVar6 = 0xfffff;
        in_stack_fffffecc = &DAT_10007dc6;
        goto LAB_10005580;
      }
      if (uVar16 != 0 || uVar16 < (0x3ff < uVar27)) {
        uVar6 = 0x3ff;
        iVar5 = 10;
        in_stack_fffffecc = &DAT_10007dc9;
        goto LAB_10005580;
      }
      pcVar14 = str_10007ddb;
      puVar20 = &DAT_10007dc1;
      uVar17 = uVar27;
      uVar6 = uVar16;
    }
    else {
      iVar5 = 0x1e;
      in_stack_fffffecc = &DAT_10007dc3;
LAB_10005580:
      lVar2 = (ulonglong)(uVar6 & uVar27) * 100;
      local_f0 = (uint)((ulonglong)lVar2 >> 0x20);
      uVar6 = uVar16 >> iVar5;
      uVar22 = iVar5 - 0x20;
      if (-1 < (int)uVar22) {
        uVar6 = 0;
      }
      puVar20 = (undefined *)((uint)lVar2 >> iVar5 | local_f0 << (0x20U - iVar5 & 0xff));
      if (-1 < (int)uVar22) {
        puVar20 = (undefined *)(local_f0 >> (uVar22 & 0xff));
      }
      local_f0 = local_f0 >> iVar5;
      if (-1 < (int)uVar22) {
        local_f0 = 0;
      }
      pcVar14 = str_10007dcc;
      uVar17 = uVar27 >> iVar5 | uVar16 << (0x20U - iVar5 & 0xff);
      if (-1 < (int)uVar22) {
        uVar17 = uVar16 >> (uVar22 & 0xff);
      }
    }
    pf_varargs_10007fd0__4__4__4__4__4_
              (acStack_e4,0x40,pcVar14,uVar17,uVar6,(uint)puVar20,local_f0,(uint)in_stack_fffffecc);
    recovered_10006bfc(param_1,0x4e,0x1c2,((uintptr_t)pf_module_state + 0x31cU),0x282828,0x82);
    recovered_10006bfc(param_1,0xce,0x1c2,(int)acStack_a4,0xcd4646,0x78);
    recovered_10006bfc(param_1,0x4e,0x1da,((uintptr_t)pf_module_state + 0x32cU),0x282828,100);
    recovered_10006bfc(param_1,0xce,0x1da,(int)acStack_64,0x52c448,0x78);
    uVar17 = DAT_10008098;
    uVar6 = DAT_10008094;
    iVar29 = -0x20;
    iVar19 = DAT_10008094 * 0x6b0 + 0x851;
    iVar11 = DAT_10008094 * 0x6b0 + 0x852;
    iVar5 = DAT_10008094 * 4;
    iVar28 = DAT_10008094 * 0x6b0 + 0x853;
    iVar18 = DAT_10008094 * 0x6b0;
    do {
      uVar22 = iVar29 + 0x1cc;
      iVar31 = 0;
      do {
        if (((((uint)((iVar31 + -0x20) * (iVar31 + -0x20) + iVar29 * iVar29) < 0x401) &&
             (param_1 != 0)) && (uVar12 = iVar31 + 0x214, -1 < (int)(uVar12 | uVar22))) &&
           (*(int *)(param_1 + 0x340) != 0)) {
          bVar35 = SBORROW4(uVar6,uVar12);
          iVar32 = uVar6 - uVar12;
          bVar34 = uVar6 == uVar12;
          if ((int)uVar12 < (int)uVar6) {
            bVar35 = SBORROW4(uVar17,uVar22);
            iVar32 = uVar17 - uVar22;
            bVar34 = uVar17 == uVar22;
          }
          if (!bVar34 && iVar32 < 0 == bVar35) {
            *(undefined1 *)(*(int *)(param_1 + 0x340) + iVar18 + iVar31 * 4 + 0x850) = 0;
            *(undefined1 *)(*(int *)(param_1 + 0x340) + iVar19 + iVar31 * 4) = 0xeb;
            *(undefined1 *)(*(int *)(param_1 + 0x340) + iVar11 + iVar31 * 4) = 0x1c;
            *(undefined1 *)(*(int *)(param_1 + 0x340) + iVar28 + iVar31 * 4) = 0xff;
          }
        }
        iVar31 = iVar31 + 1;
      } while (iVar31 != 0x41);
      iVar29 = iVar29 + 1;
      iVar18 = iVar18 + iVar5;
      iVar19 = iVar19 + iVar5;
      iVar11 = iVar11 + iVar5;
      iVar28 = iVar28 + iVar5;
    } while (iVar29 != 0x21);
    if ((uVar27 != 0 || uVar16 != 0) &&
       (uVar13 <= uVar16 && (uint)(uVar27 <= uVar30) <= uVar13 - uVar16)) {
      local_f0 = uVar6 * 0x6b0 + 0x851;
      local_f4 = uVar6 * 0x6b0 + 0x852;
      iVar28 = uVar6 * 0x6b0 + 0x853;
      uVar36 = recovered_100019c0(CONCAT44(uVar10 << 6 | uVar4 >> 0x1a,uVar4 << 6),uVar36);
      iVar19 = uVar6 * 0x6b0;
      iVar11 = -0x20;
      do {
        if (-1 < (int)uVar36) {
          uVar27 = iVar11 + 0x1cc;
          iVar18 = 0;
          do {
            iVar29 = iVar18 + -0x20;
            if ((((uint)(iVar29 * iVar29 + iVar11 * iVar11) < 0x401) && (param_1 != 0)) &&
               ((uVar16 = iVar18 + 0x214, -1 < (int)(uVar16 | uVar27) &&
                (*(int *)(param_1 + 0x340) != 0)))) {
              bVar35 = SBORROW4(uVar6,uVar16);
              iVar31 = uVar6 - uVar16;
              bVar34 = uVar6 == uVar16;
              if ((int)uVar16 < (int)uVar6) {
                bVar35 = SBORROW4(uVar17,uVar27);
                iVar31 = uVar17 - uVar27;
                bVar34 = uVar17 == uVar27;
              }
              if (!bVar34 && iVar31 < 0 == bVar35) {
                *(undefined1 *)(*(int *)(param_1 + 0x340) + iVar19 + iVar18 * 4 + 0x850) = 0x1e;
                *(undefined1 *)(*(int *)(param_1 + 0x340) + local_f0 + iVar18 * 4) = 0x1e;
                *(undefined1 *)(*(int *)(param_1 + 0x340) + local_f4 + iVar18 * 4) = 0xee;
                *(undefined1 *)(*(int *)(param_1 + 0x340) + iVar28 + iVar18 * 4) = 0xff;
              }
            }
            iVar18 = iVar18 + 1;
          } while (iVar29 < (int)uVar36 + -0x20);
        }
        iVar11 = iVar11 + 1;
        iVar19 = iVar19 + iVar5;
        iVar28 = iVar28 + iVar5;
        local_f0 = local_f0 + iVar5;
        local_f4 = local_f4 + iVar5;
      } while (iVar11 != 0x21);
    }
    pcVar14 = acStack_e4;
    uVar27 = 0x78;
    iVar5 = 0x212;
    iVar19 = 0x1f6;
LAB_10005ee0:
    recovered_10006bfc(param_1,iVar5,iVar19,(int)pcVar14,0x282828,uVar27);
    goto LAB_10005ee4;
  default:
    uVar16 = DAT_10008094 - 0x10;
    uVar27 = 0x10;
    if ((int)DAT_10008094 < 0x10) {
      uVar16 = 0;
      uVar27 = DAT_10008094;
    }
    uVar10 = DAT_10008098;
    if (0x1f7 < (int)DAT_10008098) {
      uVar10 = 0x1f8;
    }
    if (0x17a < (int)DAT_10008098) {
      iVar19 = DAT_10008094 * 4;
      iVar11 = DAT_10008094 * 0x5e8;
      uVar30 = 0x17a;
      do {
        uVar4 = uVar27;
        if ((int)uVar27 < (int)uVar16) {
          do {
            if ((((int)uVar30 < (int)uVar17) && (-1 < (int)uVar4)) &&
               ((*(int *)(param_1 + 0x340) != 0 && ((int)uVar4 < (int)uVar6)))) {
              *(undefined1 *)(*(int *)(param_1 + 0x340) + iVar11 + uVar4 * 4) = 0xe7;
              *(undefined1 *)(*(int *)(param_1 + 0x340) + iVar11 + uVar4 * 4 + 1) = 0xe7;
              *(undefined1 *)(*(int *)(param_1 + 0x340) + iVar11 + uVar4 * 4 + 2) = 0xe7;
              *(undefined1 *)(*(int *)(param_1 + 0x340) + iVar11 + uVar4 * 4 + 3) = 0xff;
            }
            uVar4 = uVar4 + 1;
          } while (uVar16 != uVar4);
        }
        uVar30 = uVar30 + 1;
        iVar11 = iVar11 + iVar19;
      } while (uVar30 != uVar10);
    }
    recovered_100067e4(param_1,0x10,0x17a,iVar5,0x7e,0xc3c3c3);
    recovered_10006bfc(param_1,0x58,0x1a2,((uintptr_t)pf_module_state + 0x338U),0x282828,0x6e);
    recovered_10006bfc(param_1,0x58,0x1ba,((uintptr_t)pf_module_state + 0x346U),0x282828,0x78);
    recovered_10006bfc(param_1,0x130,0x1a2,((uintptr_t)pf_module_state + 0x355U),0x282828,0xa0);
    recovered_10006bfc(param_1,0x130,0x1ba,((uintptr_t)pf_module_state + 0x36cU),0x282828,0x8c);
    recovered_10006bfc(param_1,0x230,0x18c,((uintptr_t)pf_module_state + 0x37fU),0x282828,0x82);
    uVar27 = 0x224;
    iVar28 = 0;
    iVar5 = 0;
    iVar11 = 0x6a;
    iVar19 = 0;
  }
  recovered_100071e4(param_1,uVar27,0x19e,iVar11,0x48,iVar19,iVar5,iVar28);
LAB_10005ee4:
  terror_ui_window_present((void *)param_1,str_10007cf6,*(void **)(param_1 + 0x340),DAT_10008094,
                     DAT_10008098,DAT_10008094 << 2,0xefefef);
  return;
}

#undef DAT_10007db8
#undef DAT_10007dc1
#undef DAT_10007dc3
#undef DAT_10007dc6
#undef DAT_10007dc9
#undef DAT_10007f88
#undef DAT_10008060
#undef DAT_1000807c
#undef DAT_10008094
#undef DAT_10008098
#undef str_10007cf6
#undef str_10007dbb
#undef str_10007dcc
#undef str_10007ddb
#undef str_10007e2c
#undef str_10007e38
#undef str_10007e65
#undef str_10007e74
#undef str_10007e85
#undef str_10007e93
#undef str_10007ea2
#undef str_10007eb0
#undef str_10007ec1
#undef str_10007ed3
#undef str_10007ee8
#undef str_10007f09
#undef local_f4
#undef local_f0
#undef in_stack_fffffecc
#undef local_12c
#undef local_128
#undef local_124
#undef local_120
#undef acStack_e4
#undef local_11c
#undef acStack_a4
#undef local_118
#undef acStack_64
#undef local_114
#undef local_f8

#define local_27a0 (*(uint *)(frame + 16))
#define local_279c (*(undefined1 (*)[48])(frame + 20))
#define local_276c (*(int (*)[2516])(frame + 68))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100060d0
 */

void recovered_100060d0(int param_1)

{
  unsigned char frame[10192] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;

  iVar1 = 0;
  local_27a0 = 0;
  if (param_1 != 0) {
    iVar1 = *(int *)(param_1 + 0x354);
  }
  if ((param_1 != 0 && iVar1 != -1) && (iVar3 = *(int *)(param_1 + 0x60a0), iVar3 != 0)) {
    piVar4 = (int *)(param_1 + 0x2480);
    do {
      if (*piVar4 == iVar1) {
        memset(local_279c,0,0x2780);
        uVar2 = terror_ui_window_list(local_279c,0x10,&local_27a0);
        if (uVar2 == 0) {
          return;
        }
        if (local_27a0 < 0x11) {
          if (local_27a0 == 0) {
            return;
          }
        }
        else {
          local_27a0 = 0x10;
        }
        piVar4 = local_276c;
        uVar5 = 0;
        uVar2 = local_27a0;
        do {
          if (piVar4[-0xb] == *(int *)(param_1 + 0x354)) {
            terror_ui_window_configure(piVar4[-0xc],piVar4[-1],*piVar4,0xe,10);
            uVar2 = local_27a0;
          }
          uVar5 = uVar5 + 1;
          piVar4 = piVar4 + 0x9e;
        } while (uVar5 < uVar2);
        return;
      }
      iVar3 = iVar3 + -1;
      piVar4 = piVar4 + 0x6e;
    } while (iVar3 != 0);
  }
  return;
}

#undef local_27a0
#undef local_279c
#undef local_276c

#undef DAT_10007d1b
#define DAT_10007d1b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x127U)))
#undef DAT_10007d24
#define DAT_10007d24 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x130U)))
#undef str_10007d1d
#define str_10007d1d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x129U)))
#undef str_10007d28
#define str_10007d28 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x134U)))
#undef str_10007d3f
#define str_10007d3f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x14bU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100061d8
 */

void recovered_100061d8(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *vararg2;
  char *pcVar1;
  char *format;
  int iVar2;
  int unaff_r4;
  char *vararg3;

  if (param_1 != 0) {
    iVar2 = *(int *)(param_1 + 0x354);
    if (iVar2 != -1) {
      unaff_r4 = *(int *)(param_1 + 0x60a0);
    }
    if (iVar2 != -1 && unaff_r4 != 0) {
      pcVar1 = (char *)(param_1 + 0x2540);
      do {
        if (*(int *)(pcVar1 + -0xc0) == iVar2) {
          vararg3 = str_10007d1d;
          if ((pcVar1[-0xbc] & 1U) == 0) {
            vararg3 = &DAT_10007d24;
          }
          vararg2 = &DAT_10007d1b;
          if (*pcVar1 != '\0') {
            vararg2 = pcVar1;
          }
          if (*vararg2 == '/') {
            format = str_10007d28;
          }
          else {
            format = str_10007d3f;
          }
          pf_varargs_10007fd0__8__4__4__4__4_
                    ((char *)(param_1 + 0x61f8),0x100,format,*(ulonglong *)(pcVar1 + -0x90),
                     *(uint *)(pcVar1 + -0x84),(uint)vararg2,(uint)vararg3,*(uint *)(pcVar1 + -0x88)
                    );
          return;
        }
        pcVar1 = pcVar1 + 0x1b8;
        unaff_r4 = unaff_r4 + -1;
      } while (unaff_r4 != 0);
    }
    *(undefined1 *)(param_1 + 0x61f8) = 0;
  }
  return;
}

#undef DAT_10007d1b
#undef DAT_10007d24
#undef str_10007d1d
#undef str_10007d28
#undef str_10007d3f

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100062d4
 */

void recovered_100062d4(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  undefined4 uVar2;

  if (param_1 == 0) {
    return;
  }
  recovered_10006380(param_1);
  if (*(uint *)(param_1 + 0x60a4) == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar1 = recovered_100018b0(*(int *)(param_1 + 0x358) + 1,*(uint *)(param_1 + 0x60a4));
    *(uint *)(param_1 + 0x358) = uVar1;
    uVar2 = *(undefined4 *)(param_1 + uVar1 * 0x1f8 + 0x6f0);
  }
  *(undefined4 *)(param_1 + 0x35c) = uVar2;
  memset((void *)(param_1 + 0x6168),0,0x48);
  memset((void *)(param_1 + 0x61b0),0,0x48);
  *(undefined4 *)(param_1 + 0x60bc) = 0;
  *(undefined4 *)(param_1 + 0x60b8) = 0;
  *(undefined4 *)(param_1 + 0x60c0) = 0;
  *(undefined4 *)(param_1 + 0x60c4) = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 4)
  ;
  *(undefined4 *)(param_1 + 0x60c8) = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 8)
  ;
  *(undefined4 *)(param_1 + 0x60cc) = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 12)
  ;
  *(undefined1 *)(param_1 + 0x609d) = 0;
  *(undefined4 *)(param_1 + 0x60d4) = 0;
  *(undefined4 *)(param_1 + 0x60d0) = 0;
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
#undef UINT_400108bc
#define UINT_400108bc (*(uint *)(0x400108bcU))
#undef UINT_400108c0
#define UINT_400108c0 (*(uint *)(0x400108c0U))
#define local_24 (*(uint *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006380
 */

void recovered_10006380(int param_1)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  uint uVar7;
  bool bVar8;

  uVar7 = 0;
  local_24 = 0;
  memset((void *)(param_1 + 0x500),0,0x1f80);
  iVar4 = Ram40010800;
  if ((iVar4 == 0x50414d57) && (iVar4 = Ram40010804, iVar4 != 0)) {
    uVar1 = Ram40010808;
    bVar8 = 0xb < uVar1;
    if (bVar8) {
      uVar1 = Ram40010808;
    }
    if ((bVar8 && 0xc3 < uVar1) && (pcVar3 = (code *)UINT_400108c0, pcVar3 != (code *)0x0)) {
      uVar5 = (*pcVar3)((void *)(param_1 + 0x500),0x10,&local_24);
      uVar1 = local_24;
      if (uVar5 != 0) {
        uVar5 = 0x10;
        if (local_24 < 0x10) {
          uVar5 = local_24;
        }
        *(uint *)(param_1 + 0x60a4) = uVar5;
        if (local_24 != 0) {
          piVar6 = (int *)(param_1 + 0x6f0);
          do {
            if (*piVar6 == *(int *)(param_1 + 0x35c)) goto LAB_100063fc;
            uVar7 = uVar7 + 1;
            piVar6 = piVar6 + 0x7e;
          } while (uVar5 != uVar7);
        }
        iVar2 = Ram40010800;
        iVar4 = -1;
        if ((iVar2 == 0x50414d57) && (iVar2 = Ram40010804, iVar2 != 0)) {
          uVar7 = Ram40010808;
          bVar8 = 0xb < uVar7;
          if (bVar8) {
            uVar7 = Ram40010808;
          }
          if ((bVar8 && 0xbf < uVar7) && (pcVar3 = (code *)UINT_400108bc, pcVar3 != (code *)0x0)) {
            iVar4 = (*pcVar3)();
          }
        }
        if (uVar1 == 0) {
          return;
        }
        uVar7 = 0;
        piVar6 = (int *)(param_1 + 0x6f0);
        do {
          if (*piVar6 == iVar4) goto LAB_100063f8;
          uVar7 = uVar7 + 1;
          piVar6 = piVar6 + 0x7e;
        } while (uVar5 != uVar7);
        if (uVar1 == 0) {
          return;
        }
        iVar4 = *(int *)(param_1 + 0x6f0);
        uVar7 = 0;
        goto LAB_100063f8;
      }
    }
  }
  *(undefined4 *)(param_1 + 0x60a4) = 0;
  iVar4 = -1;
LAB_100063f8:
  *(int *)(param_1 + 0x35c) = iVar4;
LAB_100063fc:
  *(uint *)(param_1 + 0x358) = uVar7;
  return;
}

#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef Ram40010800
#undef Ram40010804
#undef Ram40010808
#undef UINT_400108bc
#undef UINT_400108c0
#undef local_24

#undef DAT_10008094
#define DAT_10008094 (*(uint *)(((uintptr_t)pf_module_state + 0x4a0U)))
#undef DAT_10008098
#define DAT_10008098 (*(uint *)(((uintptr_t)pf_module_state + 0x4a4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100064f0
 */

void recovered_100064f0(int param_1,uint param_2,uint param_3,int param_4,int param_5,int param_6,
                       int param_7)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  undefined1 uVar11;
  bool bVar12;
  bool bVar13;

  uVar3 = DAT_10008098;
  uVar5 = DAT_10008094;
  uVar4 = param_3 + param_5;
  uVar9 = DAT_10008098;
  if ((int)uVar4 < (int)DAT_10008098) {
    uVar9 = uVar4;
  }
  uVar8 = param_2 + param_4;
  if ((int)uVar4 < 0) {
    uVar9 = 0;
  }
  uVar4 = DAT_10008094;
  if ((int)uVar8 < (int)DAT_10008094) {
    uVar4 = uVar8;
  }
  if ((int)uVar8 < 0) {
    uVar4 = 0;
  }
  uVar11 = 0xda;
  if (param_7 != 0) {
    uVar11 = 0xf6;
  }
  uVar8 = DAT_10008098;
  if ((int)param_3 < (int)DAT_10008098) {
    uVar8 = param_3;
  }
  if ((int)param_3 < 0) {
    uVar8 = 0;
  }
  uVar6 = DAT_10008094;
  if ((int)param_2 < (int)DAT_10008094) {
    uVar6 = param_2;
  }
  if ((int)param_2 < 0) {
    uVar6 = 0;
  }
  if ((int)uVar8 < (int)uVar9) {
    iVar1 = DAT_10008094 * 4;
    iVar10 = uVar8 * DAT_10008094 * 4;
    do {
      uVar7 = uVar6;
      if ((int)uVar6 < (int)uVar4) {
        do {
          if (((param_1 != 0) && (-1 < (int)(uVar7 | uVar8))) && (*(int *)(param_1 + 0x340) != 0)) {
            bVar13 = SBORROW4(uVar5,uVar7);
            iVar2 = uVar5 - uVar7;
            bVar12 = uVar5 == uVar7;
            if ((int)uVar7 < (int)uVar5) {
              bVar13 = SBORROW4(uVar3,uVar8);
              iVar2 = uVar3 - uVar8;
              bVar12 = uVar3 == uVar8;
            }
            if (!bVar12 && iVar2 < 0 == bVar13) {
              *(undefined1 *)(*(int *)(param_1 + 0x340) + iVar10 + uVar7 * 4) = uVar11;
              *(undefined1 *)(*(int *)(param_1 + 0x340) + iVar10 + uVar7 * 4 + 1) = uVar11;
              *(undefined1 *)(*(int *)(param_1 + 0x340) + iVar10 + uVar7 * 4 + 2) = uVar11;
              *(undefined1 *)(*(int *)(param_1 + 0x340) + iVar10 + uVar7 * 4 + 3) = 0xff;
            }
          }
          uVar7 = uVar7 + 1;
        } while (uVar4 != uVar7);
      }
      uVar8 = uVar8 + 1;
      iVar10 = iVar10 + iVar1;
    } while (uVar8 != uVar9);
  }
  recovered_100067e4(param_1,param_2,param_3,param_4,param_5,0x7e7e7e);
  uVar3 = DAT_10008098;
  uVar5 = DAT_10008094;
  uVar4 = param_2 + 1;
  uVar8 = (param_4 + uVar4) - 2;
  uVar9 = DAT_10008094;
  if ((int)uVar8 < (int)DAT_10008094) {
    uVar9 = uVar8;
  }
  if ((int)uVar8 < 0) {
    uVar9 = 0;
  }
  uVar8 = param_3 + 2;
  if ((int)DAT_10008098 <= (int)(param_3 + 2)) {
    uVar8 = DAT_10008098;
  }
  if ((int)param_3 < -2) {
    uVar8 = 0;
  }
  uVar6 = param_3 + 1;
  if ((int)DAT_10008098 <= (int)(param_3 + 1)) {
    uVar6 = DAT_10008098;
  }
  if ((int)param_3 < -1) {
    uVar6 = 0;
  }
  if ((int)DAT_10008094 <= (int)uVar4) {
    uVar4 = DAT_10008094;
  }
  if ((int)param_2 < -1) {
    uVar4 = 0;
  }
  if ((int)uVar6 < (int)uVar8) {
    iVar1 = DAT_10008094 * 4;
    iVar10 = uVar6 * DAT_10008094 * 4;
    do {
      uVar7 = uVar4;
      if ((int)uVar4 < (int)uVar9) {
        do {
          if (((param_1 != 0) && (-1 < (int)(uVar7 | uVar6))) && (*(int *)(param_1 + 0x340) != 0)) {
            bVar13 = SBORROW4(uVar5,uVar7);
            iVar2 = uVar5 - uVar7;
            bVar12 = uVar5 == uVar7;
            if ((int)uVar7 < (int)uVar5) {
              bVar13 = SBORROW4(uVar3,uVar6);
              iVar2 = uVar3 - uVar6;
              bVar12 = uVar3 == uVar6;
            }
            if (!bVar12 && iVar2 < 0 == bVar13) {
              *(undefined1 *)(*(int *)(param_1 + 0x340) + iVar10 + uVar7 * 4) = 0xff;
              *(undefined1 *)(*(int *)(param_1 + 0x340) + iVar10 + uVar7 * 4 + 1) = 0xff;
              *(undefined1 *)(*(int *)(param_1 + 0x340) + iVar10 + uVar7 * 4 + 2) = 0xff;
              *(undefined1 *)(*(int *)(param_1 + 0x340) + iVar10 + uVar7 * 4 + 3) = 0xff;
            }
          }
          uVar7 = uVar7 + 1;
        } while (uVar9 != uVar7);
      }
      uVar6 = uVar6 + 1;
      iVar10 = iVar10 + iVar1;
    } while (uVar6 != uVar8);
  }
  uVar5 = 0x808080;
  if (param_7 != 0) {
    uVar5 = 0x1e1e1e;
  }
  recovered_10006bfc(param_1,param_2 + 9,param_3 + 6,param_6,uVar5,param_4 - 0x10);
  return;
}

#undef DAT_10008094
#undef DAT_10008098

#undef DAT_10008094
#define DAT_10008094 (*(uint *)(((uintptr_t)pf_module_state + 0x4a0U)))
#undef DAT_10008098
#define DAT_10008098 (*(uint *)(((uintptr_t)pf_module_state + 0x4a4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100067e4
 */

void recovered_100067e4(int param_1,uint param_2,uint param_3,int param_4,int param_5,
                       undefined4 param_6)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  undefined1 uVar5;
  undefined1 uVar4;
  undefined1 uVar3;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  bool bVar18;
  bool bVar19;

  uVar7 = DAT_10008098;
  uVar6 = DAT_10008094;
  uVar11 = param_2 + param_4;
  uVar10 = DAT_10008094;
  if ((int)uVar11 < (int)DAT_10008094) {
    uVar10 = uVar11;
  }
  if ((int)uVar11 < 0) {
    uVar10 = 0;
  }
  uVar12 = param_3 + 1;
  if ((int)DAT_10008098 <= (int)(param_3 + 1)) {
    uVar12 = DAT_10008098;
  }
  if ((int)param_3 < -1) {
    uVar12 = 0;
  }
  uVar16 = DAT_10008098;
  if ((int)param_3 < (int)DAT_10008098) {
    uVar16 = param_3;
  }
  if ((int)param_3 < 0) {
    uVar16 = 0;
  }
  uVar8 = DAT_10008094;
  if ((int)param_2 < (int)DAT_10008094) {
    uVar8 = param_2;
  }
  if ((int)param_2 < 0) {
    uVar8 = 0;
  }
  iVar9 = uVar16 * DAT_10008094;
  iVar1 = DAT_10008094 * 4;
  uVar3 = (undefined1)param_6;
  uVar4 = (undefined1)((uint)param_6 >> 8);
  uVar5 = (undefined1)((uint)param_6 >> 0x10);
  if ((int)uVar16 < (int)uVar12) {
    iVar14 = iVar9 * 4;
    uVar17 = uVar16;
    do {
      uVar13 = uVar8;
      if ((int)uVar8 < (int)uVar10) {
        do {
          if (((param_1 != 0) && (-1 < (int)(uVar13 | uVar17))) && (*(int *)(param_1 + 0x340) != 0))
          {
            bVar19 = SBORROW4(uVar6,uVar13);
            iVar2 = uVar6 - uVar13;
            bVar18 = uVar6 == uVar13;
            if ((int)uVar13 < (int)uVar6) {
              bVar19 = SBORROW4(uVar7,uVar17);
              iVar2 = uVar7 - uVar17;
              bVar18 = uVar7 == uVar17;
            }
            if (!bVar18 && iVar2 < 0 == bVar19) {
              *(undefined1 *)(*(int *)(param_1 + 0x340) + iVar14 + uVar13 * 4) = uVar3;
              *(undefined1 *)(*(int *)(param_1 + 0x340) + iVar14 + uVar13 * 4 + 1) = uVar4;
              *(undefined1 *)(*(int *)(param_1 + 0x340) + iVar14 + uVar13 * 4 + 2) = uVar5;
              *(undefined1 *)(*(int *)(param_1 + 0x340) + iVar14 + uVar13 * 4 + 3) = 0xff;
            }
          }
          uVar13 = uVar13 + 1;
        } while (uVar10 != uVar13);
      }
      uVar17 = uVar17 + 1;
      iVar14 = iVar14 + iVar1;
    } while (uVar17 != uVar12);
  }
  uVar17 = param_3 + param_5;
  uVar12 = uVar17 - 1;
  if ((int)uVar7 <= (int)(uVar17 - 1)) {
    uVar12 = uVar7;
  }
  if ((int)uVar17 < 1) {
    uVar12 = 0;
  }
  uVar13 = uVar7;
  if ((int)uVar17 < (int)uVar7) {
    uVar13 = uVar17;
  }
  if ((int)uVar17 < 0) {
    uVar13 = 0;
  }
  if ((int)uVar12 < (int)uVar13) {
    iVar14 = uVar12 * uVar6 * 4;
    do {
      uVar17 = uVar8;
      if ((int)uVar8 < (int)uVar10) {
        do {
          if (((param_1 != 0) && (-1 < (int)(uVar17 | uVar12))) && (*(int *)(param_1 + 0x340) != 0))
          {
            bVar19 = SBORROW4(uVar6,uVar17);
            iVar2 = uVar6 - uVar17;
            bVar18 = uVar6 == uVar17;
            if ((int)uVar17 < (int)uVar6) {
              bVar19 = SBORROW4(uVar7,uVar12);
              iVar2 = uVar7 - uVar12;
              bVar18 = uVar7 == uVar12;
            }
            if (!bVar18 && iVar2 < 0 == bVar19) {
              *(undefined1 *)(*(int *)(param_1 + 0x340) + iVar14 + uVar17 * 4) = uVar3;
              *(undefined1 *)(*(int *)(param_1 + 0x340) + iVar14 + uVar17 * 4 + 1) = uVar4;
              *(undefined1 *)(*(int *)(param_1 + 0x340) + iVar14 + uVar17 * 4 + 2) = uVar5;
              *(undefined1 *)(*(int *)(param_1 + 0x340) + iVar14 + uVar17 * 4 + 3) = 0xff;
            }
          }
          uVar17 = uVar17 + 1;
        } while (uVar10 != uVar17);
      }
      uVar12 = uVar12 + 1;
      iVar14 = iVar14 + iVar1;
    } while (uVar12 != uVar13);
  }
  uVar12 = param_2 + 1;
  if ((int)uVar6 <= (int)(param_2 + 1)) {
    uVar12 = uVar6;
  }
  if ((int)param_2 < -1) {
    uVar12 = 0;
  }
  if ((int)uVar16 < (int)uVar13) {
    iVar14 = iVar9 * 4;
    uVar17 = uVar16;
    do {
      uVar15 = uVar8;
      if ((int)uVar8 < (int)uVar12) {
        do {
          if (((param_1 != 0) && (-1 < (int)(uVar15 | uVar17))) && (*(int *)(param_1 + 0x340) != 0))
          {
            bVar19 = SBORROW4(uVar6,uVar15);
            iVar2 = uVar6 - uVar15;
            bVar18 = uVar6 == uVar15;
            if ((int)uVar15 < (int)uVar6) {
              bVar19 = SBORROW4(uVar7,uVar17);
              iVar2 = uVar7 - uVar17;
              bVar18 = uVar7 == uVar17;
            }
            if (!bVar18 && iVar2 < 0 == bVar19) {
              *(undefined1 *)(*(int *)(param_1 + 0x340) + iVar14 + uVar15 * 4) = uVar3;
              *(undefined1 *)(*(int *)(param_1 + 0x340) + iVar14 + uVar15 * 4 + 1) = uVar4;
              *(undefined1 *)(*(int *)(param_1 + 0x340) + iVar14 + uVar15 * 4 + 2) = uVar5;
              *(undefined1 *)(*(int *)(param_1 + 0x340) + iVar14 + uVar15 * 4 + 3) = 0xff;
            }
          }
          uVar15 = uVar15 + 1;
        } while (uVar12 != uVar15);
      }
      uVar17 = uVar17 + 1;
      iVar14 = iVar14 + iVar1;
    } while (uVar17 != uVar13);
    uVar12 = uVar11 - 1;
    if ((int)uVar6 <= (int)(uVar11 - 1)) {
      uVar12 = uVar6;
    }
    if ((int)uVar11 < 1) {
      uVar12 = 0;
    }
    iVar9 = iVar9 * 4;
    do {
      uVar11 = uVar12;
      if ((int)uVar12 < (int)uVar10) {
        do {
          if (((param_1 != 0) && (-1 < (int)(uVar11 | uVar16))) && (*(int *)(param_1 + 0x340) != 0))
          {
            bVar19 = SBORROW4(uVar6,uVar11);
            iVar14 = uVar6 - uVar11;
            bVar18 = uVar6 == uVar11;
            if ((int)uVar11 < (int)uVar6) {
              bVar19 = SBORROW4(uVar7,uVar16);
              iVar14 = uVar7 - uVar16;
              bVar18 = uVar7 == uVar16;
            }
            if (!bVar18 && iVar14 < 0 == bVar19) {
              *(undefined1 *)(*(int *)(param_1 + 0x340) + iVar9 + uVar11 * 4) = uVar3;
              *(undefined1 *)(*(int *)(param_1 + 0x340) + iVar9 + uVar11 * 4 + 1) = uVar4;
              *(undefined1 *)(*(int *)(param_1 + 0x340) + iVar9 + uVar11 * 4 + 2) = uVar5;
              *(undefined1 *)(*(int *)(param_1 + 0x340) + iVar9 + uVar11 * 4 + 3) = 0xff;
            }
          }
          uVar11 = uVar11 + 1;
        } while (uVar10 != uVar11);
      }
      uVar16 = uVar16 + 1;
      iVar9 = iVar9 + iVar1;
    } while (uVar16 != uVar13);
  }
  return;
}

#undef DAT_10008094
#undef DAT_10008098

#undef DAT_10008094
#define DAT_10008094 (*(int *)(((uintptr_t)pf_module_state + 0x4a0U)))
#undef DAT_10008098
#define DAT_10008098 (*(int *)(((uintptr_t)pf_module_state + 0x4a4U)))
#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_40010850
#define DAT_40010850 (*(uint8_t *)(0x40010850U))
#undef Ram40010800
#define Ram40010800 (*(uint32_t *)(0x40010800U))
#undef Ram40010804
#define Ram40010804 (*(uint32_t *)(0x40010804U))
#undef Ram40010808
#define Ram40010808 (*(uint32_t *)(0x40010808U))
#undef Ram40010850
#define Ram40010850 (*(uint32_t *)(0x40010850U))
#undef UINT_40010978
#define UINT_40010978 (*(uint *)(0x40010978U))
#define local_50 (*(int *)(frame + 16))
#define local_38 (*(int (*)[3])(frame + 40))
#define local_2c (*(uint *)(frame + 52))
#define local_28 (*(uint *)(frame + 56))
#define local_24 (*(uint *)(frame + 60))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006bfc
 */

void recovered_10006bfc(int param_1,int param_2,int param_3,int param_4,uint param_5,uint param_6)

{
  unsigned char frame[128] __attribute__((aligned(16))) = {0};

  ushort uVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  code *pcVar8;
  uint uVar9;
  uint uVar10;
  undefined1 uVar11;
  int unaff_r5;
  int iVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  bool bVar18;

  if (param_1 == 0) {
    return;
  }
  if (param_6 != 0) {
    if (param_4 != 0) {
      unaff_r5 = *(int *)(param_1 + 0x340);
    }
    if (param_4 != 0 && unaff_r5 != 0) {
      memset(local_38,0,0x18);
      iVar2 = Ram40010800;
      if ((iVar2 == 0x50414d57) && (iVar2 = Ram40010804, iVar2 != 0)) {
        uVar6 = Ram40010808;
        bVar18 = 0xb < uVar6;
        if (bVar18) {
          uVar6 = Ram40010808;
        }
        if ((bVar18 && 0x17b < uVar6) && (pcVar8 = (code *)UINT_40010978, pcVar8 != (code *)0x0)) {
          uVar6 = (*pcVar8)((char *)param_4,0xffffffff,1,
                            param_5 << 0x18 | ((param_5 & 0xff00) >> 8) << 0x10 |
                            ((param_5 & 0xff0000) >> 0x10) << 8 | (param_5 | 0xff000000) >> 0x18,
                            local_38);
          iVar5 = DAT_10008098;
          iVar4 = DAT_10008094;
          iVar2 = 0;
          if (uVar6 != 0) {
            iVar2 = local_38[0];
            local_50 = local_38[0];
          }
          if (uVar6 != 0 && iVar2 != 0) {
            if (local_24 < local_2c << 2) {
              iVar2 = Ram40010800;
              if (iVar2 != 0x50414d57) {
                return;
              }
              iVar2 = Ram40010804;
              if (iVar2 == 0) {
                return;
              }
              uVar6 = Ram40010808;
              bVar18 = uVar6 < 0xc;
              if (!bVar18) {
                uVar6 = Ram40010808;
              }
              if (bVar18 || uVar6 < 0x54) {
                return;
              }
              pcVar8 = (code *)Ram40010850;
            }
            else {
              uVar6 = param_6;
              if (local_2c < param_6) {
                uVar6 = local_2c;
              }
              if ((int)param_6 < 1) {
                uVar6 = local_2c;
              }
              if (local_28 != 0) {
                uVar16 = 0;
                iVar2 = DAT_10008094 * 4;
                uVar9 = (DAT_10008094 * param_3 + param_2) * 4 | 3;
                do {
                  if (((-1 < (int)(uVar16 + param_3)) && ((int)(uVar16 + param_3) < iVar5)) &&
                     (uVar6 != 0)) {
                    iVar7 = local_50;
                    uVar10 = uVar9;
                    iVar13 = param_2;
                    uVar15 = uVar6;
                    do {
                      if ((-1 < iVar13) && (iVar13 < iVar4)) {
                        iVar17 = uVar16 * local_24 + iVar7;
                        bVar3 = *(byte *)(iVar17 + 3);
                        if (bVar3 != 0) {
                          iVar12 = *(int *)(param_1 + 0x340);
                          iVar14 = iVar12 + uVar10;
                          if (bVar3 == 0xff) {
                            *(undefined1 *)(iVar14 + -3) =
                                 *(undefined1 *)(iVar7 + uVar16 * local_24);
                            *(undefined1 *)(iVar14 + -2) = *(undefined1 *)(iVar17 + 1);
                            uVar11 = *(undefined1 *)(iVar17 + 2);
                          }
                          else {
                            uVar1 = bVar3 ^ 0xff;
                            *(char *)(iVar14 + -3) =
                                 (char)(((int)(short)uVar1 *
                                         (int)(short)(ushort)*(byte *)(iVar14 + -3) +
                                         (int)(short)(ushort)*(byte *)(iVar7 + uVar16 * local_24) *
                                         (int)(short)(ushort)bVar3 + 0x7fU) / 0xff);
                            *(char *)(iVar14 + -2) =
                                 (char)(((int)(short)uVar1 *
                                         (int)(short)(ushort)*(byte *)(iVar14 + -2) +
                                         (int)(short)(ushort)*(byte *)(iVar17 + 1) *
                                         (int)(short)(ushort)bVar3 + 0x7fU) / 0xff);
                            uVar11 = (undefined1)
                                     (((int)(short)uVar1 *
                                       (int)(short)(ushort)*(byte *)(iVar14 + -1) +
                                       (int)(short)(ushort)*(byte *)(iVar17 + 2) *
                                       (int)(short)(ushort)bVar3 + 0x7fU) / 0xff);
                          }
                          *(undefined1 *)(iVar14 + -1) = uVar11;
                          *(undefined1 *)(iVar12 + uVar10) = 0xff;
                        }
                      }
                      uVar10 = uVar10 + 4;
                      iVar7 = iVar7 + 4;
                      iVar13 = iVar13 + 1;
                      uVar15 = uVar15 - 1;
                    } while (uVar15 != 0);
                  }
                  uVar16 = uVar16 + 1;
                  uVar9 = uVar9 + iVar2;
                } while (uVar16 < local_28);
              }
              iVar2 = Ram40010800;
              if (iVar2 != 0x50414d57) {
                return;
              }
              iVar2 = Ram40010804;
              if (iVar2 == 0) {
                return;
              }
              uVar6 = Ram40010808;
              bVar18 = uVar6 < 0xc;
              if (!bVar18) {
                uVar6 = Ram40010808;
              }
              if (bVar18 || uVar6 < 0x54) {
                return;
              }
              pcVar8 = (code *)Ram40010850;
            }
            if (pcVar8 != (code *)0x0) {
              (*pcVar8)(local_50);
            }
          }
        }
      }
    }
  }
  return;
}

#undef DAT_10008094
#undef DAT_10008098
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_40010850
#undef Ram40010800
#undef Ram40010804
#undef Ram40010808
#undef Ram40010850
#undef UINT_40010978
#undef local_50
#undef local_38
#undef local_2c
#undef local_28
#undef local_24

#undef DAT_10008094
#define DAT_10008094 (*(uint *)(((uintptr_t)pf_module_state + 0x4a0U)))
#undef DAT_10008098
#define DAT_10008098 (*(uint *)(((uintptr_t)pf_module_state + 0x4a4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006f2c
 */

void recovered_10006f2c(int param_1,uint param_2,uint param_3,undefined4 param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  bool bVar12;

  uVar3 = DAT_10008098;
  uVar2 = DAT_10008094;
  uVar8 = param_3 + 0x12;
  if ((int)DAT_10008098 <= (int)(param_3 + 0x12)) {
    uVar8 = DAT_10008098;
  }
  if ((int)param_3 < -0x12) {
    uVar8 = 0;
  }
  uVar5 = param_2 + 0x12;
  if ((int)DAT_10008094 <= (int)(param_2 + 0x12)) {
    uVar5 = DAT_10008094;
  }
  if ((int)param_2 < -0x12) {
    uVar5 = 0;
  }
  uVar4 = DAT_10008098;
  if ((int)param_3 < (int)DAT_10008098) {
    uVar4 = param_3;
  }
  if ((int)param_3 < 0) {
    uVar4 = 0;
  }
  uVar9 = DAT_10008094;
  if ((int)param_2 < (int)DAT_10008094) {
    uVar9 = param_2;
  }
  if ((int)param_2 < 0) {
    uVar9 = 0;
  }
  if ((int)uVar4 < (int)uVar8) {
    iVar6 = uVar4 * DAT_10008094 * 4;
    iVar7 = DAT_10008094 * 4;
    do {
      uVar10 = uVar9;
      if ((int)uVar9 < (int)uVar5) {
        do {
          if (((param_1 != 0) && (-1 < (int)(uVar10 | uVar4))) && (*(int *)(param_1 + 0x340) != 0))
          {
            bVar12 = SBORROW4(uVar2,uVar10);
            iVar1 = uVar2 - uVar10;
            bVar11 = uVar2 == uVar10;
            if ((int)uVar10 < (int)uVar2) {
              bVar12 = SBORROW4(uVar3,uVar4);
              iVar1 = uVar3 - uVar4;
              bVar11 = uVar3 == uVar4;
            }
            if (!bVar11 && iVar1 < 0 == bVar12) {
              *(undefined1 *)(*(int *)(param_1 + 0x340) + iVar6 + uVar10 * 4) = 0xee;
              *(undefined1 *)(*(int *)(param_1 + 0x340) + iVar6 + uVar10 * 4 + 1) = 0xee;
              *(undefined1 *)(*(int *)(param_1 + 0x340) + iVar6 + uVar10 * 4 + 2) = 0xee;
              *(undefined1 *)(*(int *)(param_1 + 0x340) + iVar6 + uVar10 * 4 + 3) = 0xff;
            }
          }
          uVar10 = uVar10 + 1;
        } while (uVar5 != uVar10);
      }
      uVar4 = uVar4 + 1;
      iVar6 = iVar6 + iVar7;
    } while (uVar4 != uVar8);
  }
  recovered_100067e4(param_1,param_2,param_3,0x12,0x12,0x8e8e8e);
  uVar3 = DAT_10008098;
  uVar2 = DAT_10008094;
  uVar8 = param_3 + 0xd;
  if ((int)DAT_10008098 <= (int)(param_3 + 0xd)) {
    uVar8 = DAT_10008098;
  }
  if ((int)param_3 < -0xd) {
    uVar8 = 0;
  }
  uVar5 = param_2 + 0xd;
  if ((int)DAT_10008094 <= (int)(param_2 + 0xd)) {
    uVar5 = DAT_10008094;
  }
  if ((int)param_2 < -0xd) {
    uVar5 = 0;
  }
  uVar4 = param_3 + 5;
  if ((int)DAT_10008098 <= (int)(param_3 + 5)) {
    uVar4 = DAT_10008098;
  }
  if ((int)param_3 < -5) {
    uVar4 = 0;
  }
  uVar9 = param_2 + 5;
  if ((int)DAT_10008094 <= (int)(param_2 + 5)) {
    uVar9 = DAT_10008094;
  }
  if ((int)param_2 < -5) {
    uVar9 = 0;
  }
  if ((int)uVar4 < (int)uVar8) {
    iVar6 = DAT_10008094 * 4;
    iVar7 = uVar4 * DAT_10008094 * 4;
    do {
      uVar10 = uVar9;
      if ((int)uVar9 < (int)uVar5) {
        do {
          if (((param_1 != 0) && (-1 < (int)(uVar10 | uVar4))) && (*(int *)(param_1 + 0x340) != 0))
          {
            bVar12 = SBORROW4(uVar2,uVar10);
            iVar1 = uVar2 - uVar10;
            bVar11 = uVar2 == uVar10;
            if ((int)uVar10 < (int)uVar2) {
              bVar12 = SBORROW4(uVar3,uVar4);
              iVar1 = uVar3 - uVar4;
              bVar11 = uVar3 == uVar4;
            }
            if (!bVar11 && iVar1 < 0 == bVar12) {
              *(char *)(*(int *)(param_1 + 0x340) + iVar7 + uVar10 * 4) = (char)param_4;
              *(char *)(*(int *)(param_1 + 0x340) + iVar7 + uVar10 * 4 + 1) =
                   (char)((uint)param_4 >> 8);
              *(char *)(*(int *)(param_1 + 0x340) + iVar7 + uVar10 * 4 + 2) =
                   (char)((uint)param_4 >> 0x10);
              *(undefined1 *)(*(int *)(param_1 + 0x340) + iVar7 + uVar10 * 4 + 3) = 0xff;
            }
          }
          uVar10 = uVar10 + 1;
        } while (uVar5 != uVar10);
      }
      uVar4 = uVar4 + 1;
      iVar7 = iVar7 + iVar6;
    } while (uVar4 != uVar8);
  }
  return;
}

#undef DAT_10008094
#undef DAT_10008098

#undef DAT_10008094
#define DAT_10008094 (*(uint *)(((uintptr_t)pf_module_state + 0x4a0U)))
#undef DAT_10008098
#define DAT_10008098 (*(uint *)(((uintptr_t)pf_module_state + 0x4a4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100071e4
 */

void recovered_100071e4(int param_1,uint param_2,uint param_3,int param_4,int param_5,int param_6,
                       int param_7,int param_8)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  bool bVar19;
  bool bVar20;

  uVar3 = DAT_10008098;
  uVar2 = DAT_10008094;
  uVar4 = param_3 + param_5;
  uVar14 = DAT_10008098;
  if ((int)uVar4 < (int)DAT_10008098) {
    uVar14 = uVar4;
  }
  uVar5 = param_2 + param_4;
  if ((int)uVar4 < 0) {
    uVar14 = 0;
  }
  uVar13 = DAT_10008094;
  if ((int)uVar5 < (int)DAT_10008094) {
    uVar13 = uVar5;
  }
  if ((int)uVar5 < 0) {
    uVar13 = 0;
  }
  uVar5 = DAT_10008098;
  if ((int)param_3 < (int)DAT_10008098) {
    uVar5 = param_3;
  }
  if ((int)param_3 < 0) {
    uVar5 = 0;
  }
  uVar18 = DAT_10008094;
  if ((int)param_2 < (int)DAT_10008094) {
    uVar18 = param_2;
  }
  if ((int)param_2 < 0) {
    uVar18 = 0;
  }
  if ((int)uVar5 < (int)uVar14) {
    iVar6 = DAT_10008094 * 4;
    iVar15 = uVar5 * DAT_10008094 * 4;
    do {
      uVar10 = uVar18;
      if ((int)uVar18 < (int)uVar13) {
        do {
          if (((param_1 != 0) && (-1 < (int)(uVar10 | uVar5))) && (*(int *)(param_1 + 0x340) != 0))
          {
            bVar20 = SBORROW4(uVar2,uVar10);
            iVar1 = uVar2 - uVar10;
            bVar19 = uVar2 == uVar10;
            if ((int)uVar10 < (int)uVar2) {
              bVar20 = SBORROW4(uVar3,uVar5);
              iVar1 = uVar3 - uVar5;
              bVar19 = uVar3 == uVar5;
            }
            if (!bVar19 && iVar1 < 0 == bVar20) {
              *(undefined1 *)(*(int *)(param_1 + 0x340) + iVar15 + uVar10 * 4) = 0;
              *(undefined1 *)(*(int *)(param_1 + 0x340) + iVar15 + uVar10 * 4 + 1) = 0;
              *(undefined1 *)(*(int *)(param_1 + 0x340) + iVar15 + uVar10 * 4 + 2) = 0;
              *(undefined1 *)(*(int *)(param_1 + 0x340) + iVar15 + uVar10 * 4 + 3) = 0xff;
            }
          }
          uVar10 = uVar10 + 1;
        } while (uVar13 != uVar10);
      }
      uVar5 = uVar5 + 1;
      iVar15 = iVar15 + iVar6;
    } while (uVar5 != uVar14);
  }
  recovered_100067e4(param_1,param_2,param_3,param_4,param_5,0x303030);
  uVar3 = DAT_10008098;
  uVar2 = DAT_10008094;
  if (0 < param_4) {
    uVar5 = uVar4 - 1;
    uVar14 = DAT_10008098;
    if ((int)uVar5 < (int)DAT_10008098) {
      uVar14 = uVar5;
    }
    iVar6 = param_5 + -4;
    iVar15 = uVar4 - 2;
    if ((int)uVar5 < 0) {
      uVar14 = 0;
    }
    iVar1 = DAT_10008094 * 4;
    iVar16 = 0;
    do {
      iVar7 = 0x47;
      if (param_4 != 1) {
        iVar7 = recovered_100018e8(iVar16 * 0x47,param_4 + -1);
      }
      uVar4 = 0;
      if (param_6 != 0) {
        uVar4 = (uint)*(byte *)(param_6 + iVar7);
      }
      uVar5 = 0;
      if (param_7 != 0) {
        uVar5 = (uint)*(byte *)(param_7 + iVar7);
      }
      iVar7 = (int)((ulonglong)((longlong)(int)(uVar5 * iVar6) * -0x51eb851f) >> 0x20);
      iVar9 = (int)((ulonglong)((longlong)(int)(uVar4 * iVar6) * -0x51eb851f) >> 0x20);
      iVar7 = (iVar7 >> 5) - (iVar7 >> 0x1f);
      uVar4 = iVar7 + iVar15;
      iVar9 = (iVar9 >> 5) - (iVar9 >> 0x1f);
      uVar5 = iVar9 + iVar15;
      uVar13 = iVar16 + param_2;
      if (param_8 == 0) {
        if (iVar16 != 0) {
          iVar8 = recovered_100018e8(iVar16 * 0x47 + -0x47,param_4 + -1);
          uVar18 = 0;
          uVar10 = 0;
          if (param_6 != 0) {
            uVar18 = (uint)*(byte *)(param_6 + iVar8);
          }
          if (param_7 != 0) {
            uVar10 = (uint)*(byte *)(param_7 + iVar8);
          }
          if (param_6 != 0) {
            iVar17 = -1;
            iVar8 = (int)((ulonglong)((longlong)(int)(uVar18 * iVar6) * -0x51eb851f) >> 0x20);
            iVar11 = (iVar8 >> 5) - (iVar8 >> 0x1f);
            uVar18 = iVar11 + iVar15;
            iVar8 = iVar9 - iVar11;
            if ((int)uVar18 < (int)uVar5) {
              iVar8 = iVar11 - iVar9;
            }
            uVar12 = uVar13 - 1;
            iVar9 = iVar8 + 1;
            if ((int)uVar18 < (int)uVar5) {
              iVar17 = 1;
            }
            while( true ) {
              if (((param_1 != 0) && (-1 < (int)(uVar12 | uVar18))) &&
                 (*(int *)(param_1 + 0x340) != 0)) {
                bVar20 = SBORROW4(uVar2,uVar12);
                iVar11 = uVar2 - uVar12;
                bVar19 = uVar2 == uVar12;
                if ((int)uVar12 < (int)uVar2) {
                  bVar20 = SBORROW4(uVar3,uVar18);
                  iVar11 = uVar3 - uVar18;
                  bVar19 = uVar3 == uVar18;
                }
                if (!bVar19 && iVar11 < 0 == bVar20) {
                  iVar11 = uVar18 * uVar2 + uVar12;
                  *(undefined1 *)(*(int *)(param_1 + 0x340) + iVar11 * 4) = 0;
                  *(undefined1 *)(*(int *)(param_1 + 0x340) + iVar11 * 4 + 1) = 0xeb;
                  *(undefined1 *)(*(int *)(param_1 + 0x340) + iVar11 * 4 + 2) = 0x1c;
                  *(undefined1 *)(*(int *)(param_1 + 0x340) + iVar11 * 4 + 3) = 0xff;
                }
              }
              if (uVar18 == uVar5 && uVar12 == uVar13) break;
              if (iVar8 <= iVar9 * 2) {
                uVar12 = uVar12 + 1;
              }
              iVar11 = iVar9;
              if (iVar9 < 1) {
                iVar11 = iVar9 + 1;
              }
              if (iVar8 <= iVar9 * 2) {
                iVar11 = iVar11 + iVar8;
              }
              bVar19 = iVar9 < 1;
              iVar9 = iVar11;
              if (bVar19) {
                uVar18 = uVar18 + iVar17;
              }
            }
          }
          if (param_7 != 0) {
            iVar11 = -1;
            iVar9 = (int)((ulonglong)((longlong)(int)(uVar10 * iVar6) * -0x51eb851f) >> 0x20);
            iVar9 = (iVar9 >> 5) - (iVar9 >> 0x1f);
            uVar5 = iVar9 + iVar15;
            iVar8 = iVar7 - iVar9;
            if ((int)uVar5 < (int)uVar4) {
              iVar8 = iVar9 - iVar7;
            }
            uVar18 = uVar13 - 1;
            iVar7 = iVar8 + 1;
            if ((int)uVar5 < (int)uVar4) {
              iVar11 = 1;
            }
            while( true ) {
              if (((param_1 != 0) && (-1 < (int)(uVar18 | uVar5))) &&
                 (*(int *)(param_1 + 0x340) != 0)) {
                bVar20 = SBORROW4(uVar2,uVar18);
                iVar9 = uVar2 - uVar18;
                bVar19 = uVar2 == uVar18;
                if ((int)uVar18 < (int)uVar2) {
                  bVar20 = SBORROW4(uVar3,uVar5);
                  iVar9 = uVar3 - uVar5;
                  bVar19 = uVar3 == uVar5;
                }
                if (!bVar19 && iVar9 < 0 == bVar20) {
                  iVar9 = uVar5 * uVar2 + uVar18;
                  *(undefined1 *)(*(int *)(param_1 + 0x340) + iVar9 * 4) = 0xf5;
                  *(undefined1 *)(*(int *)(param_1 + 0x340) + iVar9 * 4 + 1) = 0x18;
                  *(undefined1 *)(*(int *)(param_1 + 0x340) + iVar9 * 4 + 2) = 0x14;
                  *(undefined1 *)(*(int *)(param_1 + 0x340) + iVar9 * 4 + 3) = 0xff;
                }
              }
              if (uVar5 == uVar4 && uVar18 == uVar13) break;
              if (iVar8 <= iVar7 * 2) {
                uVar18 = uVar18 + 1;
              }
              iVar9 = iVar7;
              if (iVar7 < 1) {
                iVar9 = iVar7 + 1;
              }
              if (iVar8 <= iVar7 * 2) {
                iVar9 = iVar9 + iVar8;
              }
              bVar19 = iVar7 < 1;
              iVar7 = iVar9;
              if (bVar19) {
                uVar5 = uVar5 + iVar11;
              }
            }
          }
        }
      }
      else {
        uVar18 = uVar3;
        if ((int)uVar5 < (int)uVar3) {
          uVar18 = uVar5;
        }
        if ((int)uVar5 < 0) {
          uVar18 = 0;
        }
        uVar5 = uVar2;
        if ((int)uVar13 < (int)uVar2) {
          uVar5 = uVar13;
        }
        if ((int)uVar13 < 0) {
          uVar5 = 0;
        }
        uVar10 = uVar13 + 1;
        if ((int)uVar2 <= (int)(uVar13 + 1)) {
          uVar10 = uVar2;
        }
        if ((int)uVar13 < -1) {
          uVar10 = 0;
        }
        if ((int)uVar18 < (int)uVar14) {
          iVar7 = iVar1 * uVar18;
          do {
            uVar13 = uVar5;
            if ((int)uVar5 < (int)uVar10) {
              do {
                if (((param_1 != 0) && (-1 < (int)(uVar13 | uVar18))) &&
                   (*(int *)(param_1 + 0x340) != 0)) {
                  bVar20 = SBORROW4(uVar2,uVar13);
                  iVar9 = uVar2 - uVar13;
                  bVar19 = uVar2 == uVar13;
                  if ((int)uVar13 < (int)uVar2) {
                    bVar20 = SBORROW4(uVar3,uVar18);
                    iVar9 = uVar3 - uVar18;
                    bVar19 = uVar3 == uVar18;
                  }
                  if (!bVar19 && iVar9 < 0 == bVar20) {
                    *(undefined1 *)(*(int *)(param_1 + 0x340) + iVar7 + uVar13 * 4) = 0;
                    *(undefined1 *)(*(int *)(param_1 + 0x340) + iVar7 + uVar13 * 4 + 1) = 0xeb;
                    *(undefined1 *)(*(int *)(param_1 + 0x340) + iVar7 + uVar13 * 4 + 2) = 0x1c;
                    *(undefined1 *)(*(int *)(param_1 + 0x340) + iVar7 + uVar13 * 4 + 3) = 0xff;
                  }
                }
                uVar13 = uVar13 + 1;
              } while (uVar10 != uVar13);
            }
            uVar18 = uVar18 + 1;
            iVar7 = iVar7 + iVar1;
          } while (uVar18 != uVar14);
        }
        uVar13 = uVar3;
        if ((int)uVar4 < (int)uVar3) {
          uVar13 = uVar4;
        }
        if ((int)uVar4 < 0) {
          uVar13 = 0;
        }
        if ((int)uVar13 < (int)uVar14) {
          iVar7 = iVar1 * uVar13;
          do {
            uVar4 = uVar5;
            if ((int)uVar5 < (int)uVar10) {
              do {
                if (((param_1 != 0) && (-1 < (int)(uVar4 | uVar13))) &&
                   (*(int *)(param_1 + 0x340) != 0)) {
                  bVar20 = SBORROW4(uVar2,uVar4);
                  iVar9 = uVar2 - uVar4;
                  bVar19 = uVar2 == uVar4;
                  if ((int)uVar4 < (int)uVar2) {
                    bVar20 = SBORROW4(uVar3,uVar13);
                    iVar9 = uVar3 - uVar13;
                    bVar19 = uVar3 == uVar13;
                  }
                  if (!bVar19 && iVar9 < 0 == bVar20) {
                    *(undefined1 *)(*(int *)(param_1 + 0x340) + iVar7 + uVar4 * 4) = 0xf5;
                    *(undefined1 *)(*(int *)(param_1 + 0x340) + iVar7 + uVar4 * 4 + 1) = 0x18;
                    *(undefined1 *)(*(int *)(param_1 + 0x340) + iVar7 + uVar4 * 4 + 2) = 0x14;
                    *(undefined1 *)(*(int *)(param_1 + 0x340) + iVar7 + uVar4 * 4 + 3) = 0xff;
                  }
                }
                uVar4 = uVar4 + 1;
              } while (uVar10 != uVar4);
            }
            uVar13 = uVar13 + 1;
            iVar7 = iVar7 + iVar1;
          } while (uVar13 != uVar14);
        }
      }
      iVar16 = iVar16 + 1;
    } while (iVar16 != param_4);
  }
  return;
}

#undef DAT_10008094
#undef DAT_10008098

#undef DAT_10008094
#define DAT_10008094 (*(uint *)(((uintptr_t)pf_module_state + 0x4a0U)))
#undef DAT_10008098
#define DAT_10008098 (*(uint *)(((uintptr_t)pf_module_state + 0x4a4U)))
#undef str_10007ef1
#define str_10007ef1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2fdU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100078a8
 */

void recovered_100078a8(int param_1,int param_2,int param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  bool bVar14;
  bool bVar15;

  uVar3 = DAT_10008098;
  uVar2 = DAT_10008094;
  pcVar6 = (char *)(param_1 + 0x434);
  if (*pcVar6 == '\0') {
    pcVar6 = str_10007ef1;
  }
  uVar12 = param_3 + 0x24U;
  if ((int)DAT_10008098 <= (int)(param_3 + 0x24U)) {
    uVar12 = DAT_10008098;
  }
  if (param_3 < -0x24) {
    uVar12 = 0;
  }
  uVar9 = param_2 + 0x130U;
  if ((int)DAT_10008094 <= (int)(param_2 + 0x130U)) {
    uVar9 = DAT_10008094;
  }
  uVar7 = param_3 + 0xe;
  if (param_2 < -0x130) {
    uVar9 = 0;
  }
  uVar4 = DAT_10008098;
  if ((int)uVar7 < (int)DAT_10008098) {
    uVar4 = uVar7;
  }
  uVar5 = param_2 + 0x36;
  if (param_3 < -0xe) {
    uVar4 = 0;
  }
  uVar11 = DAT_10008094;
  if ((int)uVar5 < (int)DAT_10008094) {
    uVar11 = uVar5;
  }
  if (param_2 < -0x36) {
    uVar11 = 0;
  }
  if ((int)uVar4 < (int)uVar12) {
    iVar10 = DAT_10008094 * 4;
    iVar8 = uVar4 * DAT_10008094 * 4;
    do {
      uVar13 = uVar11;
      if ((int)uVar11 < (int)uVar9) {
        do {
          if ((-1 < (int)(uVar13 | uVar4)) && (*(int *)(param_1 + 0x340) != 0)) {
            bVar15 = SBORROW4(uVar2,uVar13);
            iVar1 = uVar2 - uVar13;
            bVar14 = uVar2 == uVar13;
            if ((int)uVar13 < (int)uVar2) {
              bVar15 = SBORROW4(uVar3,uVar4);
              iVar1 = uVar3 - uVar4;
              bVar14 = uVar3 == uVar4;
            }
            if (!bVar14 && iVar1 < 0 == bVar15) {
              *(undefined1 *)(*(int *)(param_1 + 0x340) + iVar8 + uVar13 * 4) = 0xf7;
              *(undefined1 *)(*(int *)(param_1 + 0x340) + iVar8 + uVar13 * 4 + 1) = 0xf7;
              *(undefined1 *)(*(int *)(param_1 + 0x340) + iVar8 + uVar13 * 4 + 2) = 0xf7;
              *(undefined1 *)(*(int *)(param_1 + 0x340) + iVar8 + uVar13 * 4 + 3) = 0xff;
            }
          }
          uVar13 = uVar13 + 1;
        } while (uVar9 != uVar13);
      }
      uVar4 = uVar4 + 1;
      iVar8 = iVar8 + iVar10;
    } while (uVar4 != uVar12);
  }
  recovered_100067e4(param_1,uVar5,uVar7,0xfa,0x16,0x7e7e7e);
  recovered_10006bfc(param_1,param_2 + 0x3f,param_3 + 0x15,(int)pcVar6,0x282828,0xd8);
  uVar3 = DAT_10008098;
  uVar2 = DAT_10008094;
  uVar12 = param_2 + 0x12fU;
  if ((int)DAT_10008094 <= (int)(param_2 + 0x12fU)) {
    uVar12 = DAT_10008094;
  }
  if (param_2 < -0x12f) {
    uVar12 = 0;
  }
  uVar9 = param_2 + 0x11eU;
  if ((int)DAT_10008094 <= (int)(param_2 + 0x11eU)) {
    uVar9 = DAT_10008094;
  }
  if (param_2 < -0x11e) {
    uVar9 = 0;
  }
  uVar7 = param_3 + 0x23U;
  if ((int)DAT_10008098 <= (int)(param_3 + 0x23U)) {
    uVar7 = DAT_10008098;
  }
  if (param_3 < -0x23) {
    uVar7 = 0;
  }
  uVar4 = param_3 + 0xfU;
  if ((int)DAT_10008098 <= (int)(param_3 + 0xfU)) {
    uVar4 = DAT_10008098;
  }
  if (param_3 < -0xf) {
    uVar4 = 0;
  }
  if ((int)uVar4 < (int)uVar7) {
    iVar10 = uVar4 * DAT_10008094 * 4;
    iVar8 = DAT_10008094 * 4;
    do {
      uVar5 = uVar9;
      if ((int)uVar9 < (int)uVar12) {
        do {
          if (((param_1 != 0) && (-1 < (int)(uVar5 | uVar4))) && (*(int *)(param_1 + 0x340) != 0)) {
            bVar15 = SBORROW4(uVar2,uVar5);
            iVar1 = uVar2 - uVar5;
            bVar14 = uVar2 == uVar5;
            if ((int)uVar5 < (int)uVar2) {
              bVar15 = SBORROW4(uVar3,uVar4);
              iVar1 = uVar3 - uVar4;
              bVar14 = uVar3 == uVar4;
            }
            if (!bVar14 && iVar1 < 0 == bVar15) {
              *(undefined1 *)(*(int *)(param_1 + 0x340) + iVar10 + uVar5 * 4) = 0x74;
              *(undefined1 *)(*(int *)(param_1 + 0x340) + iVar10 + uVar5 * 4 + 1) = 0xbc;
              *(undefined1 *)(*(int *)(param_1 + 0x340) + iVar10 + uVar5 * 4 + 2) = 0xed;
              *(undefined1 *)(*(int *)(param_1 + 0x340) + iVar10 + uVar5 * 4 + 3) = 0xff;
            }
          }
          uVar5 = uVar5 + 1;
        } while (uVar12 != uVar5);
      }
      uVar4 = uVar4 + 1;
      iVar10 = iVar10 + iVar8;
    } while (uVar4 != uVar7);
  }
  recovered_10006bfc(param_1,param_2 + 0x123,param_3 + 0x15,((uintptr_t)pf_module_state + 0x313U),0x1e1e1e,8);
  return;
}

#undef DAT_10008094
#undef DAT_10008098
#undef str_10007ef1
