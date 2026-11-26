/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002028
 */

uint recovered_10002028(uint a,uint b)

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
 * Address: 0x10002078
 */

uint recovered_10002078(uint param_1,uint param_2)

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
 * Address: 0x100020b0
 */

int recovered_100020b0(int a,int b)

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
 * Address: 0x10002120
 */

uint recovered_10002120(uint param_1,uint param_2)

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
 * Address: 0x10002188
 */

ulonglong recovered_10002188(ulonglong a,ulonglong b)

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
 * Address: 0x1000226c
 */

ulonglong recovered_1000226c(ulonglong a,ulonglong b)

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
 * Address: 0x100022ec
 */

undefined8 recovered_100022ec(uint param_1,uint param_2,uint param_3,uint param_4)

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
 * Address: 0x1000240c
 */

undefined8 recovered_1000240c(uint param_1,uint param_2,uint param_3,uint param_4)

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


#undef DAT_10002548
#define DAT_10002548 (*(double *)(0x10002548U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100024c8
 */

ulonglong recovered_100024c8(double value)

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

#undef DAT_10002548

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002550
 */

longlong recovered_10002550(double value)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 in_r0;
  undefined4 in_r1;
  ulonglong uVar1;

  if (NAN(pf_bits_double(CONCAT44(in_r1,in_r0)))) {
    return 0;
  }
  if (pf_bits_double(CONCAT44(in_r1,in_r0)) < 0.0) {
    uVar1 = recovered_100024c8(value);
    return CONCAT44(-((int)(uVar1 >> 0x20) + (uint)((int)uVar1 != 0)),-(int)uVar1);
  }
  uVar1 = recovered_100024c8(value);
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000259c
 */

ulonglong recovered_1000259c(float param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 in_s1;
  ulonglong uVar1;

  uVar1 = recovered_100024c8(pf_bits_double(CONCAT44(in_s1,param_1)));
  return uVar1;
}


#undef DAT_1000c004
#define DAT_1000c004 (*(code * *)(((uintptr_t)pf_module_state + 0xce8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100025ac
 */

void recovered_100025ac(float param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

                    /* WARNING: Could not recover jumptable at ((uintptr_t)pf_module_state + 0xc54U). Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_1000c004)(SUB84((double)param_1,0),(int)((ulonglong)(double)param_1 >> 0x20));
  return;
}

#undef DAT_1000c004

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100025bc
 */

double recovered_100025bc(ulonglong value)

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
 * Address: 0x10002604
 */

double recovered_10002604(longlong value)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  if (value < 0) {
    dVar1 = recovered_100025bc(CONCAT44(-((int)((ulonglong)value >> 0x20) + (uint)((int)value != 0))
                                        ,-(int)value));
    return dVar1;
  }
  dVar1 = recovered_100025bc(value);
  return dVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000262c
 */

float recovered_1000262c(uint param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 extraout_r0 = 0;
  undefined4 extraout_r1 = 0;

  recovered_100025bc(CONCAT44(param_2,param_1));
  return (float)pf_bits_double(CONCAT44(extraout_r1,extraout_r0));
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002648
 */

float recovered_10002648(uint param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 extraout_r0 = 0;
  undefined4 extraout_r1 = 0;

  recovered_10002604(CONCAT44(param_2,param_1));
  return (float)pf_bits_double(CONCAT44(extraout_r1,extraout_r0));
}


#undef DAT_1000b63b
#define DAT_1000b63b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x31fU)))
#undef DAT_1000b7d0
#define DAT_1000b7d0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4b4U)))
#undef DAT_1000be64
#define DAT_1000be64 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb48U)))
#undef DAT_1000be6e
#define DAT_1000be6e (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb52U)))
#undef DAT_1000be73
#define DAT_1000be73 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb57U)))
#undef DAT_1000bf09
#define DAT_1000bf09 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xbedU)))
#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_400109e8
#define DAT_400109e8 (*(uint8_t *)(0x400109e8U))
#undef DAT_40010a20
#define DAT_40010a20 (*(uint8_t *)(0x40010a20U))
#undef DAT_40010a50
#define DAT_40010a50 (*(uint8_t *)(0x40010a50U))
#undef Ram40010800
#define Ram40010800 (*(uint32_t *)(0x40010800U))
#undef Ram40010804
#define Ram40010804 (*(uint32_t *)(0x40010804U))
#undef Ram40010808
#define Ram40010808 (*(uint32_t *)(0x40010808U))
#undef Ram400109e8
#define Ram400109e8 (*(uint32_t *)(0x400109e8U))
#undef Ram40010a20
#define Ram40010a20 (*(uint32_t *)(0x40010a20U))
#undef UINT_40010828
#define UINT_40010828 (*(uint *)(0x40010828U))
#undef UINT_4001082c
#define UINT_4001082c (*(uint *)(0x4001082cU))
#undef UINT_4001084c
#define UINT_4001084c (*(uint *)(0x4001084cU))
#undef UINT_40010850
#define UINT_40010850 (*(uint *)(0x40010850U))
#undef UINT_400108bc
#define UINT_400108bc (*(uint *)(0x400108bcU))
#undef UINT_40010984
#define UINT_40010984 (*(uint *)(0x40010984U))
#undef UINT_40010a30
#define UINT_40010a30 (*(uint *)(0x40010a30U))
#undef _DAT_40010a50
#define _DAT_40010a50 (*(code * *)(0x40010a50U))
#undef str_1000b490
#define str_1000b490 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x174U)))
#undef str_1000b49b
#define str_1000b49b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x17fU)))
#undef str_1000b4bf
#define str_1000b4bf (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1a3U)))
#undef str_1000b577
#define str_1000b577 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x25bU)))
#undef str_1000b57d
#define str_1000b57d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x261U)))
#undef str_1000b583
#define str_1000b583 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x267U)))
#undef str_1000ba6b
#define str_1000ba6b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x74fU)))
#undef str_1000ba80
#define str_1000ba80 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x764U)))
#undef str_1000babc
#define str_1000babc (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7a0U)))
#undef str_1000bace
#define str_1000bace (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7b2U)))
#undef str_1000bc63
#define str_1000bc63 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x947U)))
#undef str_1000bc89
#define str_1000bc89 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x96dU)))
#undef str_1000bca9
#define str_1000bca9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x98dU)))
#undef str_1000bccf
#define str_1000bccf (*(char (*)[1])(((uintptr_t)pf_module_state + 0x9b3U)))
#undef str_1000bd87
#define str_1000bd87 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa6bU)))
#undef str_1000bd91
#define str_1000bd91 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa75U)))
#undef str_1000bdbc
#define str_1000bdbc (*(char (*)[1])(((uintptr_t)pf_module_state + 0xaa0U)))
#undef str_1000bdd7
#define str_1000bdd7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xabbU)))
#undef str_1000bdea
#define str_1000bdea (*(char (*)[1])(((uintptr_t)pf_module_state + 0xaceU)))
#undef str_1000be24
#define str_1000be24 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb08U)))
#undef str_1000be32
#define str_1000be32 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb16U)))
#undef str_1000be5d
#define str_1000be5d (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb41U)))
#undef str_1000be77
#define str_1000be77 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb5bU)))
#undef str_1000be81
#define str_1000be81 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb65U)))
#undef str_1000be88
#define str_1000be88 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb6cU)))
#undef str_1000be9d
#define str_1000be9d (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb81U)))
#undef str_1000bed2
#define str_1000bed2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xbb6U)))
#undef str_1000bee9
#define str_1000bee9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xbcdU)))
#undef str_1000bef6
#define str_1000bef6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xbdaU)))
#undef str_1000befd
#define str_1000befd (*(char (*)[1])(((uintptr_t)pf_module_state + 0xbe1U)))
#undef str_1000bf11
#define str_1000bf11 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xbf5U)))
#undef str_1000bf22
#define str_1000bf22 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc06U)))
#undef str_1000bf51
#define str_1000bf51 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc35U)))
#undef str_1000bf5d
#define str_1000bf5d (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc41U)))
#define auStack_6ba8 (*(undefined1 (*)[27560])(pf_stack_frame + 24))
#define auStack_6930 (*(undefined1 (*)[26928])(pf_stack_frame + 656))
#define auStack_65bc (*(undefined1 (*)[26044])(pf_stack_frame + 1540))
#define abStack_64f8 (*(byte (*)[25848])(pf_stack_frame + 1736))
#define abStack_3474 (*(byte (*)[13428])(pf_stack_frame + 14156))
#define acStack_3ee (*(char (*)[1006])(pf_stack_frame + 26578))
#define auStack_34c (*(undefined4 (*)[211])(pf_stack_frame + 26740))
#define auStack_33c (*(undefined4 (*)[207])(pf_stack_frame + 26756))
#define auStack_16c (*(undefined1 (*)[364])(pf_stack_frame + 27220))
#define auStack_97 (*(undefined1 (*)[151])(pf_stack_frame + 27433))
#define local_6b80 (*(uint *)(pf_stack_frame + 64))
#define local_6b7c (*(int *)(pf_stack_frame + 68))
#define local_6b78 (*(int *)(pf_stack_frame + 72))
#define local_6b74 (*(int *)(pf_stack_frame + 76))
#define local_6b70 (*(int *)(pf_stack_frame + 80))
#define local_6b6c (*(uint *)(pf_stack_frame + 84))
#define local_6900 (*(uint *)(pf_stack_frame + 704))
#define local_68fc (*(uint *)(pf_stack_frame + 708))
#define local_68f8 (*(uint *)(pf_stack_frame + 712))
#define local_68f4 (*(uint *)(pf_stack_frame + 716))
#define local_68f0 (*(uint *)(pf_stack_frame + 720))
#define local_68d0 (*(void * *)(pf_stack_frame + 752))
#define local_68c0 (*(undefined4 *)(pf_stack_frame + 768))
#define local_65b4 (*(int *)(pf_stack_frame + 1548))
#define local_65b0 (*(int *)(pf_stack_frame + 1552))
#define local_65ac (*(int *)(pf_stack_frame + 1556))
#define local_65a8 (*(int *)(pf_stack_frame + 1560))
#define local_6594 (*(void * *)(pf_stack_frame + 1580))
#define local_6590 (*(uint (*)[6500])(pf_stack_frame + 1584))
#define local_6588 (*(uint *)(pf_stack_frame + 1592))
#define local_6584 (*(uint *)(pf_stack_frame + 1596))
#define local_6580 (*(uint *)(pf_stack_frame + 1600))
#define local_656c (*(void * *)(pf_stack_frame + 1620))
#define local_6568 (*(void * *)(pf_stack_frame + 1624))
#define local_6564 (*(int *)(pf_stack_frame + 1628))
#define local_6560 (*(void * *)(pf_stack_frame + 1632))
#define local_655c (*(uint *)(pf_stack_frame + 1636))
#define local_6558 (*(uint *)(pf_stack_frame + 1640))
#define local_6550 (*(uint *)(pf_stack_frame + 1648))
#define local_654c (*(uint *)(pf_stack_frame + 1652))
#define local_6548 (*(uint *)(pf_stack_frame + 1656))
#define local_6544 (*(uint *)(pf_stack_frame + 1660))
#define local_6540 (*(undefined8 *)(pf_stack_frame + 1664))
#define local_6538 (*(int *)(pf_stack_frame + 1672))
#define local_6534 (*(uint *)(pf_stack_frame + 1676))
#define local_6530 (*(uint *)(pf_stack_frame + 1680))
#define local_652c (*(int *)(pf_stack_frame + 1684))
#define local_6528 (*(int *)(pf_stack_frame + 1688))
#define local_6524 (*(uint *)(pf_stack_frame + 1692))
#define local_6520 (*(uint *)(pf_stack_frame + 1696))
#define local_651c (*(int *)(pf_stack_frame + 1700))
#define local_6518 (*(uint *)(pf_stack_frame + 1704))
#define local_6514 (*(char *)(pf_stack_frame + 1708))
#define local_6513 (*(byte *)(pf_stack_frame + 1709))
#define local_6512 (*(char *)(pf_stack_frame + 1710))
#define local_6511 (*(char *)(pf_stack_frame + 1711))
#define local_6510 (*(undefined2 *)(pf_stack_frame + 1712))
#define local_650e (*(byte *)(pf_stack_frame + 1714))
#define local_650d (*(undefined1 *)(pf_stack_frame + 1715))
#define local_650c (*(char *)(pf_stack_frame + 1716))
#define local_650b (*(char *)(pf_stack_frame + 1717))
#define local_650a (*(char *)(pf_stack_frame + 1718))
#define local_6509 (*(undefined1 *)(pf_stack_frame + 1719))
#define local_6508 (*(int *)(pf_stack_frame + 1720))
#define local_6504 (*(uint *)(pf_stack_frame + 1724))
#define local_6500 (*(ulong *)(pf_stack_frame + 1728))
#define local_64fc (*(uint *)(pf_stack_frame + 1732))
#define local_32c (*(undefined4 *)(pf_stack_frame + 26772))
#define local_314 (*(uint *)(pf_stack_frame + 26796))
#define local_310 (*(uint *)(pf_stack_frame + 26800))
#define local_30c (*(int *)(pf_stack_frame + 26804))
#define local_308 (*(int *)(pf_stack_frame + 26808))
#define local_200 (*(byte (*)[512])(pf_stack_frame + 27072))
#define local_1fc (*(uint *)(pf_stack_frame + 27076))
#define local_1ec (*(uint *)(pf_stack_frame + 27092))
#define local_1e8 (*(uint *)(pf_stack_frame + 27096))
#define local_1d8 (*(uint *)(pf_stack_frame + 27112))
#define local_180 (*(uint *)(pf_stack_frame + 27200))
#define local_17c (*(uint *)(pf_stack_frame + 27204))
#define local_178 (*(int *)(pf_stack_frame + 27208))
#define local_174 (*(int *)(pf_stack_frame + 27212))
#define local_170 (*(uint *)(pf_stack_frame + 27216))
#define local_158 (*(uint *)(pf_stack_frame + 27240))
#define local_154 (*(uint *)(pf_stack_frame + 27244))
#define local_150 (*(int *)(pf_stack_frame + 27248))
#define local_14c (*(int *)(pf_stack_frame + 27252))
#define local_148 (*(uint *)(pf_stack_frame + 27256))
#define local_144 (*(uint *)(pf_stack_frame + 27260))
#define local_140 (*(uint *)(pf_stack_frame + 27264))
#define local_13c (*(int *)(pf_stack_frame + 27268))
#define local_138 (*(uint *)(pf_stack_frame + 27272))
#define local_134 (*(uint *)(pf_stack_frame + 27276))
#define local_130 (*(int *)(pf_stack_frame + 27280))
#define local_12c (*(int *)(pf_stack_frame + 27284))
#define local_128 (*(uint *)(pf_stack_frame + 27288))
#define local_124 (*(uint *)(pf_stack_frame + 27292))
#define local_120 (*(int *)(pf_stack_frame + 27296))
#define local_11c (*(int *)(pf_stack_frame + 27300))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002664
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int recovered_10002664(int argc,char **argv)

{
  unsigned char pf_stack_frame[27616] __attribute__((aligned(16))) = {0};

  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  code *pcVar5;
  void *pixels;
  int iVar6;
  uchar uVar7;
  uint uVar8;
  byte *text;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint extraout_r0 = 0;
  uint extraout_r0_00 = 0;
  int iVar12;
  uint uVar13;
  uint uVar14;
  undefined4 uVar15;
  uint *puVar16;
  uint uVar17;
  uint uVar18;
  ulong uVar19;
  int iVar20;
  uint uVar21;
  ulong uVar22;
  uint uVar23;
  uint uVar24;
  uint extraout_r2 = 0;
  uint uVar25;
  undefined *puVar26;
  uint uVar27;
  uint uVar28;
  char *pcVar29;
  int iVar30;
  uint uVar31;
  char *pcVar32;
  uint uVar33;
  uint uVar34;
  byte *pbVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  bool bVar41;
  bool bVar42;
  bool bVar43;
  ulonglong uVar44;
  ulonglong uVar45;

  thunk_memset(&local_68fc,0,0x65b0);
  local_6524 = 0x10;
  local_6564 = -1;
  local_6528 = 0x10;
  local_652c = 8;
  local_6508 = -1;
  local_6580 = 1;
  iVar30 = Ram40010800;
  if ((iVar30 == 0x50414d57) && (iVar30 = Ram40010804, iVar30 != 0)) {
    uVar8 = Ram40010808;
    bVar41 = 0xb < uVar8;
    if (bVar41) {
      uVar8 = Ram40010808;
    }
    if ((bVar41 && 0xbf < uVar8) && (pcVar5 = (code *)UINT_400108bc, pcVar5 != (code *)0x0)) {
      local_6564 = (*pcVar5)();
    }
  }
  thunk_pf_app_window_spec(auStack_6930,str_1000b490,1000,0x26c);
  local_6900 = local_6900 | 1;
  uVar8 = thunk_terror_ui_window_open(&local_68fc,auStack_6930);
  if (uVar8 == 0) {
    iVar30 = Ram40010800;
    iVar9 = 1;
    if ((iVar30 == 0x50414d57) && (iVar30 = Ram40010804, iVar30 != 0)) {
      uVar8 = Ram40010808;
      bVar41 = 0xb < uVar8;
      if (bVar41) {
        uVar8 = Ram40010808;
      }
      if ((bVar41 && 0x2b < uVar8) && (pcVar5 = (code *)UINT_40010828, pcVar5 != (code *)0x0)) {
        (*pcVar5)(str_1000b49b);
        iVar9 = 1;
      }
    }
  }
  else {
    text = abStack_3474 + 1;
    terror_ui_window_set_custom_menus(&local_68fc,str_1000b4bf);
    recovered_10006910((int)&local_68fc);
    recovered_10006af8((int)&local_68fc);
    if ((argv != (char **)0x0) && (1 < argc)) {
      iVar30 = argc + -1;
      do {
        argv = argv + 1;
        pbVar35 = (byte *)*argv;
        if (pbVar35 != (byte *)0x0) {
          iVar9 = thunk_strncmp((char *)pbVar35,str_1000b577,5);
          if (iVar9 == 0) {
            pbVar35 = pbVar35 + 5;
          }
          else {
            iVar9 = thunk_strncmp((char *)pbVar35,str_1000b57d,5);
            if (iVar9 == 0) {
              pbVar35 = pbVar35 + 5;
            }
          }
          if (*pbVar35 != 0) {
            recovered_10006c54((int)&local_68fc,pbVar35,0);
            break;
          }
        }
        iVar30 = iVar30 + -1;
      } while (iVar30 != 0);
    }
    uVar31 = 1;
    local_650b = '\x01';
    uVar8 = 0;
    do {
      terror_ui_window_begin_frame(&local_68fc);
      thunk_memset(auStack_6ba8,0,0x278);
      uVar10 = thunk_terror_ui_window_query(&local_68fc,auStack_6ba8);
      if ((uVar10 == 0) || ((local_6b80 & 0x10) != 0)) break;
      if ((local_6b80 & 1) != 0) {
        if (local_6512 != '\x01') break;
        thunk_terror_ui_window_configure(local_68fc,local_6b7c,local_6b78,0xb,10);
        local_68c0 = 0;
        local_6b80 = local_6b80 & 0xfffffffe | 10;
        thunk_snprintf(acStack_3ee,0xa0,&DAT_1000b7d0,str_1000b583);
        uVar31 = 1;
      }
      uVar36 = local_68f4;
      uVar10 = local_68f8;
      uVar11 = thunk_terror_ui_window_sync_buffer(&local_68fc,auStack_6ba8);
      if (uVar11 == 0) break;
      if (local_6b74 == local_6538) {
        uVar31 = (uVar10 != local_68f8 || uVar36 != local_68f4) | uVar31;
      }
      else {
        uVar31 = 1;
        if (local_6b74 != 0) {
          local_6538 = local_6b74;
          if (local_6b70 == 3) {
            if (local_6b6c == 2) {
              recovered_10008050((int)&local_68fc,5);
            }
            else if (local_6b6c == 1) {
              recovered_10006910((int)&local_68fc);
            }
            else if (local_6b6c == 0) {
              recovered_10008050((int)&local_68fc,4);
            }
            else if (local_6b6c < 6) {
              recovered_10008f20((int)&local_68fc,local_6b6c - 3);
            }
          }
          else if (local_6b70 == 2) {
            switch((uintptr_t)(local_6b6c)) {
            case 0:
              recovered_100087bc((int)&local_68fc,0);
              break;
            case 1:
              recovered_100087bc((int)&local_68fc,1);
              break;
            case 2:
              recovered_10008924((int)&local_68fc,0);
              break;
            case 3:
              recovered_10008924((int)&local_68fc,1);
              break;
            case 4:
              recovered_10008cd4((int)&local_68fc);
              break;
            case 5:
              local_6584 = 0;
              local_6588 = local_6590[0];
            }
          }
          else if (local_6b70 == 1) {
            switch((uintptr_t)(local_6b6c)) {
            case 0:
              recovered_10006af8((int)&local_68fc);
              break;
            case 1:
              recovered_10008050((int)&local_68fc,1);
              break;
            case 2:
              recovered_100081b0((int)&local_68fc);
              break;
            case 3:
              recovered_100084ac((int)&local_68fc);
              break;
            case 4:
              recovered_10008050((int)&local_68fc,3);
            }
          }
        }
      }
      local_650e = 0;
      thunk_memset(local_200,0,0x30);
      iVar30 = Ram40010800;
      if ((iVar30 == 0x50414d57) && (iVar30 = Ram40010804, iVar30 != 0)) {
        uVar10 = Ram40010808;
        bVar41 = 0xb < uVar10;
        if (bVar41) {
          uVar10 = Ram40010808;
        }
        if (((!bVar41 || uVar10 < 0x234) || (pcVar5 = (code *)UINT_40010a30, pcVar5 == (code *)0x0))
           || (uVar10 = (*pcVar5)(local_68fc,local_200), uVar10 == 0)) goto LAB_10002c40;
LAB_10002c54:
        uVar36 = local_1e8;
        uVar10 = local_1ec;
        if ((local_200[0] & 4) == 0) {
          local_6510 = 0;
          local_650c = '\0';
          local_6520 = local_1d8;
        }
        else {
          recovered_10009f38((int)&local_68fc,&local_180);
          iVar30 = 0x24;
          iVar9 = local_6528 * 2 + 8;
          if (0x24 < local_6528 * 2) {
            iVar30 = local_6528 << 1;
          }
          if (iVar9 < 0x23) {
            iVar9 = 0x22;
          }
          iVar9 = (local_68f4 - (iVar30 + iVar9)) + -0x2c;
          if (iVar9 < 0xf) {
            iVar9 = 0xe;
          }
          thunk_pf_app_scrollbars_layout(10,iVar30 + 0x28,local_68f8 - 0x14,iVar9 + -0xe,&local_180,(void *)0x0,
                             &local_32c);
          uVar38 = local_1fc;
          uVar11 = local_6558;
          local_650e = 0;
          if ((local_200[0] & 2) != 0) {
            bVar42 = SBORROW4(local_314,uVar10);
            iVar30 = local_314 - uVar10;
            bVar41 = local_314 == uVar10;
            uVar13 = (uint)local_200[0];
            if ((int)local_314 <= (int)uVar10) {
              bVar42 = SBORROW4(local_310,uVar36);
              iVar30 = local_310 - uVar36;
              bVar41 = local_310 == uVar36;
              uVar13 = local_310;
            }
            if (((bVar41 || iVar30 < 0 != bVar42) &&
                (local_650e = 0, (int)uVar10 < (int)(local_30c + local_314))) &&
               (local_650e = 0, (int)uVar36 < (int)(local_308 + uVar13))) {
              local_650e = 1;
            }
          }
          uVar13 = 0;
          if ((local_6514 == '\x01') && (local_1d8 != local_6520)) {
            uVar14 = local_1d8 - local_6520;
            uVar21 = ((int)local_1d8 >> 0x1f) -
                     (((int)local_6520 >> 0x1f) + (uint)(local_1d8 < local_6520));
            uVar13 = (int)uVar21 >> 0x1f;
            lVar3 = (ulonglong)((uVar14 ^ uVar13) - uVar13) * 3;
            uVar25 = (uint)lVar3;
            uVar13 = (int)((ulonglong)lVar3 >> 0x20) +
                     ((uVar21 ^ uVar13) - (uVar13 + ((uVar14 ^ uVar13) < uVar13))) * 3;
            if (local_650a == '\x01') {
              if ((int)-(uVar21 + (uVar14 != 0)) < 0 !=
                  (SBORROW4(0,uVar21) != SBORROW4(-uVar21,(uint)(uVar14 != 0)))) {
                uVar17 = 0;
                goto LAB_10002e14;
              }
              iVar30 = 0x24;
              iVar9 = local_6528 * 2 + 8;
              if (0x24 < local_6528 * 2) {
                iVar30 = local_6528 << 1;
              }
              if (iVar9 < 0x23) {
                iVar9 = 0x22;
              }
              uVar21 = recovered_100020b0((local_68f4 - (local_6528 + iVar30 + iVar9)) + -0x3e,
                                          local_6528 + 4);
              uVar17 = 0;
              if ((int)uVar21 < 2) {
                uVar21 = 1;
              }
              uVar23 = 0;
              uVar37 = local_655c - uVar21;
              if (local_655c < uVar21) {
                uVar37 = 0;
              }
LAB_10002f6c:
              uVar27 = uVar23 - (uVar17 + (uVar37 < uVar11));
              uVar21 = uVar11 + uVar25;
              uVar14 = uVar17 + uVar13 + (uint)CARRY4(uVar11,uVar25);
              if ((uVar23 < uVar17 || uVar17 - uVar23 < (uint)(uVar37 <= uVar11)) ||
                  uVar27 <= uVar13 && (uint)(uVar25 <= uVar37 - uVar11) <= uVar27 - uVar13) {
                uVar21 = uVar37;
                uVar14 = uVar23;
              }
            }
            else {
              uVar11 = (uint)local_6540;
              uVar17 = PF_PART4(local_6540, 4);
              if ((int)uVar21 < (int)(uint)(uVar14 == 0)) {
                uVar21 = local_654c;
                puVar16 = &local_6550;
                if (local_6511 == '\0') {
                  puVar16 = local_6590;
                  uVar21 = 0;
                }
                uVar44 = recovered_10002188(CONCAT44(uVar21,*puVar16),(ulonglong)local_6524);
                uVar21 = (uint)(uVar44 + 1);
                uVar14 = (uint)(uVar44 + 1 >> 0x20);
                iVar30 = 0x24;
                iVar9 = local_6528 * 2 + 8;
                if (0x24 < local_6528 * 2) {
                  iVar30 = local_6528 << 1;
                }
                if (iVar9 < 0x23) {
                  iVar9 = 0x22;
                }
                uVar27 = recovered_100020b0((local_68f4 - (local_6528 + iVar30 + iVar9)) + -0x3e,
                                            local_6528 + 4);
                if ((int)uVar27 < 2) {
                  uVar27 = 1;
                }
                uVar37 = uVar21 - uVar27;
                uVar23 = uVar14 - (uVar27 > uVar21);
                if (uVar14 == 0 && (uVar27 <= uVar21) <= uVar14) {
                  uVar23 = 0;
                  uVar37 = 0;
                }
                goto LAB_10002f6c;
              }
LAB_10002e14:
              uVar21 = uVar11 - uVar25;
              uVar14 = uVar17 - (uVar13 + (uVar25 > uVar11));
              if (uVar17 <= uVar13 && (uint)(uVar25 <= uVar11) <= uVar17 - uVar13) {
                uVar14 = 0;
                uVar21 = 0;
              }
            }
            recovered_10009a44((int)&local_68fc,uVar21,uVar14);
            uVar13 = 1;
          }
          local_6514 = '\x01';
          local_6520 = local_1d8;
          if ((uVar38 & 1) == 0) {
            local_6510 = 0;
          }
          else {
            if (local_650c == '\0') {
              if ((((int)uVar36 < 10) || (local_6528 + 0x14 <= (int)uVar36)) ||
                 ((int)uVar10 < (uintptr_t)local_652c * 8 + 10)) {
                iVar30 = local_6528 * 2;
                iVar9 = 0x24;
                if (0x24 < iVar30) {
                  iVar9 = local_6528 << 1;
                }
                if (((int)uVar36 < local_6528 + 0x1c) || (iVar9 + 0x24 <= (int)uVar36)) {
                  iVar12 = 0;
                  recovered_10009f38((int)&local_68fc,auStack_33c);
                  iVar30 = iVar30 + 8;
                  if (iVar30 < 0x23) {
                    iVar30 = 0x22;
                  }
                  iVar30 = (local_68f4 - (iVar9 + iVar30)) + -0x2c;
                  if (iVar30 < 0xf) {
                    iVar30 = 0xe;
                  }
                  thunk_pf_app_scrollbars_layout(10,iVar9 + 0x28,local_68f8 - 0x14,iVar30 + -0xe,auStack_33c,
                                     (void *)0x0,&local_180);
                  recovered_10009f38((int)&local_68fc,auStack_34c);
                  uVar13 = local_6558;
                  uVar21 = PF_PART4(local_6540, 4);
                  uVar11 = (uint)local_6540;
                  if (local_650a != '\0') {
                    uVar21 = 0;
                    uVar11 = local_6558;
                  }
                  bVar42 = SBORROW4(local_148,uVar10);
                  iVar30 = local_148 - uVar10;
                  bVar41 = local_148 == uVar10;
                  uVar14 = extraout_r2;
                  if ((int)local_148 <= (int)uVar10) {
                    bVar42 = SBORROW4(local_144,uVar36);
                    iVar30 = local_144 - uVar36;
                    bVar41 = local_144 == uVar36;
                    uVar14 = local_144;
                  }
                  uVar25 = local_148;
                  if (bVar41 || iVar30 < 0 != bVar42) {
                    uVar25 = local_140 + local_148;
                    bVar42 = SBORROW4(uVar25,uVar10);
                    iVar30 = uVar25 - uVar10;
                    bVar41 = uVar25 == uVar10;
                    if ((int)uVar10 < (int)uVar25) {
                      uVar25 = local_13c + uVar14;
                      bVar42 = SBORROW4(uVar25,uVar36);
                      iVar30 = uVar25 - uVar36;
                      bVar41 = uVar25 == uVar36;
                    }
                    if (bVar41 || iVar30 < 0 != bVar42) goto LAB_1000345c;
                    uVar14 = uVar11 - 1;
                    uVar13 = uVar21 - (uVar11 == 0);
                    if (uVar21 == 0 && (uVar11 != 0) <= uVar21) {
                      uVar13 = 0;
                      uVar14 = 0;
                    }
                    recovered_10009a44((int)&local_68fc,uVar14,uVar13);
LAB_100067a0:
                    local_6510 = local_6510 & 0xff00;
                    uVar13 = 1;
                    goto LAB_10003004;
                  }
LAB_1000345c:
                  bVar42 = SBORROW4(local_138,uVar10);
                  iVar30 = local_138 - uVar10;
                  bVar41 = local_138 == uVar10;
                  if ((int)local_138 <= (int)uVar10) {
                    bVar42 = SBORROW4(local_134,uVar36);
                    iVar30 = local_134 - uVar36;
                    bVar41 = local_134 == uVar36;
                    uVar25 = local_134;
                  }
                  if (bVar41 || iVar30 < 0 != bVar42) {
                    uVar14 = local_130 + local_138;
                    bVar42 = SBORROW4(uVar14,uVar10);
                    iVar30 = uVar14 - uVar10;
                    bVar41 = uVar14 == uVar10;
                    if ((int)uVar10 < (int)uVar14) {
                      uVar25 = local_12c + uVar25;
                      bVar42 = SBORROW4(uVar25,uVar36);
                      iVar30 = uVar25 - uVar36;
                      bVar41 = uVar25 == uVar36;
                    }
                    if (!bVar41 && iVar30 < 0 == bVar42) {
                      if (local_650a == '\0') {
                        uVar13 = local_654c;
                        puVar16 = &local_6550;
                        if (local_6511 == '\0') {
                          puVar16 = local_6590;
                          uVar13 = 0;
                        }
                        uVar44 = recovered_10002188(CONCAT44(uVar13,*puVar16),(ulonglong)local_6524)
                        ;
                        uVar14 = (uint)(uVar44 + 1);
                        uVar13 = (uint)(uVar44 + 1 >> 0x20);
                        iVar30 = 0x24;
                        iVar9 = local_6528 * 2 + 8;
                        if (0x24 < local_6528 * 2) {
                          iVar30 = local_6528 << 1;
                        }
                        if (iVar9 < 0x23) {
                          iVar9 = 0x22;
                        }
                        uVar25 = recovered_100020b0((local_68f4 - (local_6528 + iVar30 + iVar9)) +
                                                    -0x3e,local_6528 + 4);
                        if ((int)uVar25 < 2) {
                          uVar25 = 1;
                        }
                        uVar17 = uVar14 - uVar25;
                        uVar27 = uVar13 - (uVar25 > uVar14);
                        if (uVar13 == 0 && (uVar25 <= uVar14) <= uVar13) {
                          uVar27 = 0;
                          uVar17 = 0;
                        }
                      }
                      else {
                        iVar30 = 0x24;
                        iVar9 = local_6528 * 2 + 8;
                        if (0x24 < local_6528 * 2) {
                          iVar30 = local_6528 << 1;
                        }
                        if (iVar9 < 0x23) {
                          iVar9 = 0x22;
                        }
                        uVar13 = recovered_100020b0((local_68f4 - (local_6528 + iVar30 + iVar9)) +
                                                    -0x3e,local_6528 + 4);
                        uVar27 = 0;
                        if ((int)uVar13 < 2) {
                          uVar13 = 1;
                        }
                        uVar17 = local_655c - uVar13;
                        if (local_655c < uVar13) {
                          uVar17 = 0;
                        }
                      }
                      uVar13 = uVar11 + 1;
                      uVar14 = uVar21 + (0xfffffffe < uVar11);
                      if (uVar27 < uVar21 || uVar21 - uVar27 < (uint)(uVar17 <= uVar11)) {
                        uVar14 = uVar27;
                        uVar13 = uVar17;
                      }
                      recovered_10009a44((int)&local_68fc,uVar13,uVar14);
                      goto LAB_100067a0;
                    }
                  }
                  bVar42 = SBORROW4(local_158,uVar10);
                  iVar30 = local_158 - uVar10;
                  bVar41 = local_158 == uVar10;
                  if ((int)local_158 <= (int)uVar10) {
                    bVar42 = SBORROW4(local_154,uVar36);
                    iVar30 = local_154 - uVar36;
                    bVar41 = local_154 == uVar36;
                    uVar25 = local_154;
                  }
                  if (bVar41 || iVar30 < 0 != bVar42) {
                    uVar11 = local_150 + local_158;
                    bVar42 = SBORROW4(uVar11,uVar10);
                    iVar30 = uVar11 - uVar10;
                    bVar41 = uVar11 == uVar10;
                    if ((int)uVar10 < (int)uVar11) {
                      uVar25 = local_14c + uVar25;
                      bVar42 = SBORROW4(uVar25,uVar36);
                      iVar30 = uVar25 - uVar36;
                      bVar41 = uVar25 == uVar36;
                    }
                    if (!bVar41 && iVar30 < 0 == bVar42) {
                      bVar42 = SBORROW4(local_128,uVar10);
                      iVar30 = local_128 - uVar10;
                      bVar41 = local_128 == uVar10;
                      if ((int)local_128 <= (int)uVar10) {
                        bVar42 = SBORROW4(local_124,uVar36);
                        iVar30 = local_124 - uVar36;
                        bVar41 = local_124 == uVar36;
                        uVar25 = local_124;
                      }
                      if (bVar41 || iVar30 < 0 != bVar42) {
                        uVar11 = local_120 + local_128;
                        bVar42 = SBORROW4(uVar11,uVar10);
                        iVar30 = uVar11 - uVar10;
                        bVar41 = uVar11 == uVar10;
                        if ((int)uVar10 < (int)uVar11) {
                          uVar11 = local_11c + uVar25;
                          bVar42 = SBORROW4(uVar11,uVar36);
                          iVar30 = uVar11 - uVar36;
                          bVar41 = uVar11 == uVar36;
                        }
                        if (bVar41 || iVar30 < 0 != bVar42) goto LAB_10006410;
                      }
                      else {
LAB_10006410:
                        uVar11 = thunk_terror_ui_scrollbar_value_from_point(auStack_16c,auStack_34c,uVar36,local_11c / 2);
                        if (local_650a == '\0') {
                          uVar13 = local_654c;
                          puVar16 = &local_6550;
                          if (local_6511 == '\0') {
                            puVar16 = local_6590;
                            uVar13 = 0;
                          }
                          uVar44 = recovered_10002188(CONCAT44(uVar13,*puVar16),
                                                      (ulonglong)local_6524);
                          uVar13 = (uint)(uVar44 + 1);
                          uVar21 = (uint)(uVar44 + 1 >> 0x20);
                          iVar30 = 0x24;
                          iVar9 = local_6528 * 2 + 8;
                          if (0x24 < local_6528 * 2) {
                            iVar30 = local_6528 << 1;
                          }
                          if (iVar9 < 0x23) {
                            iVar9 = 0x22;
                          }
                          uVar14 = recovered_100020b0((local_68f4 - (local_6528 + iVar30 + iVar9)) +
                                                      -0x3e,local_6528 + 4);
                          if ((int)uVar14 < 2) {
                            uVar14 = 1;
                          }
                          uVar25 = uVar13 - uVar14;
                          iVar12 = uVar21 - (uVar14 > uVar13);
                          if (uVar21 == 0 && (uVar14 <= uVar13) <= uVar21) {
                            iVar12 = 0;
                            uVar25 = 0;
                          }
                          if ((uint)(uVar25 < 0x80000000) <= (uint)-iVar12) goto LAB_10006680;
LAB_1000649c:
                          lVar3 = (longlong)(int)uVar11;
                        }
                        else {
                          iVar30 = 0x24;
                          iVar9 = local_6528 * 2 + 8;
                          if (0x24 < local_6528 * 2) {
                            iVar30 = local_6528 << 1;
                          }
                          if (iVar9 < 0x23) {
                            iVar9 = 0x22;
                          }
                          uVar13 = recovered_100020b0((local_68f4 - (local_6528 + iVar30 + iVar9)) +
                                                      -0x3e,local_6528 + 4);
                          if ((int)uVar13 < 2) {
                            uVar13 = 1;
                          }
                          uVar25 = local_655c - uVar13;
                          if (local_655c < uVar13) {
                            uVar25 = 0;
                          }
                          if (-1 < (int)uVar25) goto LAB_1000649c;
LAB_10006680:
                          uVar44 = recovered_10002188(CONCAT44(iVar12,uVar25),0x7fffffff);
                          iVar30 = (int)(uVar44 >> 0x20);
                          lVar3 = (uVar44 & 0xffffffff) * 0x7fffffff;
                          uVar13 = (uint)lVar3;
                          if (0x7ffffffe < uVar11) {
                            uVar11 = 0x7fffffff;
                          }
                          lVar1 = (ulonglong)uVar11 * (uVar44 & 0xffffffff);
                          lVar2 = (ulonglong)uVar11 * (ulonglong)(uVar25 - uVar13);
                          uVar44 = recovered_10002188(CONCAT44((iVar12 - ((int)((ulonglong)lVar3 >>
                                                                               0x20) +
                                                                          (uintptr_t)iVar30 * 0x7fffffff +
                                                                         (uint)(uVar25 < uVar13))) *
                                                               uVar11 + (int)((ulonglong)lVar2 >>
                                                                             0x20),(int)lVar2),
                                                      0x7fffffff);
                          lVar3 = uVar44 + CONCAT44(iVar30 * uVar11 +
                                                    (int)((ulonglong)lVar1 >> 0x20),(int)lVar1);
                        }
                        recovered_10009a44((int)&local_68fc,(uint)lVar3,
                                           (uint)((ulonglong)lVar3 >> 0x20));
                        recovered_10009f38((int)&local_68fc,auStack_33c);
                        iVar30 = 0x24;
                        if (0x24 < local_6528 * 2) {
                          iVar30 = local_6528 << 1;
                        }
                        iVar9 = local_6528 * 2 + 8;
                        if (iVar9 < 0x23) {
                          iVar9 = 0x22;
                        }
                        iVar9 = (local_68f4 - (iVar30 + iVar9)) + -0x2c;
                        if (iVar9 < 0xf) {
                          iVar9 = 0xe;
                        }
                        thunk_pf_app_scrollbars_layout(10,iVar30 + 0x28,local_68f8 - 0x14,iVar9 + -0xe,
                                           auStack_33c,(void *)0x0,&local_180);
                        uVar25 = local_124;
                      }
                      local_651c = uVar36 - uVar25;
                      local_6510 = 0x100;
                      local_6518 = uVar36;
                      goto LAB_100067a0;
                    }
                  }
                  if (local_650a == '\0') {
LAB_100034f4:
                    iVar30 = recovered_10009df0((int)&local_68fc,uVar10,uVar36,0);
                    uVar13 = 1;
                    if (iVar30 != 0) {
                      local_6510 = CONCAT11(PF_PART1(local_6510, 1),1);
                      local_6504 = 0;
                    }
                    goto LAB_10003004;
                  }
                  iVar30 = 0x24;
                  if (0x24 < local_6528 * 2) {
                    iVar30 = local_6528 << 1;
                  }
                  iVar30 = local_6528 + iVar30 + 0x30;
                  if ((int)uVar36 < iVar30) goto LAB_100034f4;
                  iVar30 = recovered_100020b0(uVar36 - iVar30,local_6528 + 4);
                  if (iVar30 + uVar13 < local_655c) {
                    iVar30 = recovered_10007bc8((int)&local_68fc,
                                                *(undefined4 *)
                                                 ((int)local_6560 + (iVar30 + uVar13) * 4));
                    if (iVar30 != 0) {
                      local_6504 = 0;
                    }
                    uVar13 = 1;
                    goto LAB_10003004;
                  }
LAB_100065c8:
                  uVar13 = 1;
                }
                else {
                  uVar13 = (uintptr_t)local_652c * 4 + 0x12;
                  uVar11 = local_68f8 - 10;
                  if ((int)uVar11 <= (int)uVar13) {
                    uVar13 = uVar11;
                  }
                  if (9 < (int)uVar10) {
                    bVar42 = SBORROW4(uVar13,uVar10);
                    iVar9 = uVar13 - uVar10;
                    bVar41 = uVar13 == uVar10;
                    if ((int)uVar10 < (int)uVar13) {
                      uVar13 = iVar30 + 0x24;
                      bVar42 = SBORROW4(uVar13,uVar36);
                      iVar9 = uVar13 - uVar36;
                      bVar41 = uVar13 == uVar36;
                    }
                    if (!bVar41 && iVar9 < 0 == bVar42) {
                      local_6508 = -1;
                      uVar13 = 1;
                      local_6513 = local_6513 ^ 1;
                      goto LAB_10003004;
                    }
                  }
                  uVar13 = (uintptr_t)local_652c * 0xd + 0x22;
                  if ((int)uVar13 < (int)uVar11) {
                    uVar11 = uVar13;
                  }
                  if ((int)uVar10 < (uintptr_t)local_652c * 4 + 0x1a) {
LAB_10003224:
                    recovered_10009d4c((int *)&local_180,(int)&local_68fc,2);
                    bVar42 = SBORROW4(local_180,uVar10);
                    iVar30 = local_180 - uVar10;
                    bVar41 = local_180 == uVar10;
                    uVar11 = extraout_r0;
                    if ((int)local_180 <= (int)uVar10) {
                      bVar42 = SBORROW4(local_17c,uVar36);
                      iVar30 = local_17c - uVar36;
                      bVar41 = local_17c == uVar36;
                      uVar11 = local_17c;
                    }
                    if (bVar41 || iVar30 < 0 != bVar42) {
                      uVar13 = local_178 + local_180;
                      bVar42 = SBORROW4(uVar13,uVar10);
                      iVar30 = uVar13 - uVar10;
                      bVar41 = uVar13 == uVar10;
                      if ((int)uVar10 < (int)uVar13) {
                        uVar11 = local_174 + uVar11;
                        bVar42 = SBORROW4(uVar11,uVar36);
                        iVar30 = uVar11 - uVar36;
                        bVar41 = uVar11 == uVar36;
                      }
                      if (!bVar41 && iVar30 < 0 == bVar42) {
                        recovered_100081b0((int)&local_68fc);
                        goto LAB_100065c8;
                      }
                    }
                    recovered_10009d4c((int *)&local_180,(int)&local_68fc,3);
                    bVar42 = SBORROW4(local_180,uVar10);
                    iVar30 = local_180 - uVar10;
                    bVar41 = local_180 == uVar10;
                    uVar11 = extraout_r0_00;
                    if ((int)local_180 <= (int)uVar10) {
                      bVar42 = SBORROW4(local_17c,uVar36);
                      iVar30 = local_17c - uVar36;
                      bVar41 = local_17c == uVar36;
                      uVar11 = local_17c;
                    }
                    if ((bVar41 || iVar30 < 0 != bVar42) &&
                       ((int)uVar10 < (int)(local_178 + local_180))) {
                      uVar13 = 1;
                      if ((int)uVar36 < (int)(local_174 + uVar11)) {
                        recovered_10008050((int)&local_68fc,5);
                        uVar13 = 1;
                      }
                      goto LAB_10003004;
                    }
                  }
                  else {
                    bVar42 = SBORROW4(uVar11,uVar10);
                    iVar30 = uVar11 - uVar10;
                    bVar41 = uVar11 == uVar10;
                    if ((int)uVar10 < (int)uVar11) {
                      uVar11 = local_6528 + local_6528 + 0x1c + 8;
                      bVar42 = SBORROW4(uVar11,uVar36);
                      iVar30 = uVar11 - uVar36;
                      bVar41 = uVar11 == uVar36;
                    }
                    if (bVar41 || iVar30 < 0 != bVar42) goto LAB_10003224;
                    recovered_10008f20((int)&local_68fc,(local_6580 + 1) % 3);
                  }
                  uVar13 = 1;
                }
              }
              else {
                if (local_6504 == 0) {
                  recovered_10008050((int)&local_68fc,1);
                }
                uVar22 = thunk_strlen((char *)text);
                uVar11 = local_64fc;
                uVar13 = recovered_100020b0(uVar10 + local_652c * -8 + -0x10,local_652c);
                uVar11 = (uVar13 & ~((int)uVar13 >> 0x1f)) + uVar11;
                uVar13 = 1;
                local_6500 = uVar22;
                if (uVar11 < uVar22) {
                  local_6500 = uVar11;
                }
              }
            }
LAB_10003004:
            uVar11 = local_6524;
            iVar30 = local_6528;
            if (PF_PART1(local_6510, 1) == '\x01') {
              uVar25 = 0;
              if (local_6518 == uVar36) goto LAB_10003650;
              recovered_10009f38((int)&local_68fc,auStack_33c);
              iVar30 = 0x24;
              if (0x24 < local_6528 * 2) {
                iVar30 = local_6528 << 1;
              }
              iVar9 = local_6528 * 2 + 8;
              if (iVar9 < 0x23) {
                iVar9 = 0x22;
              }
              iVar9 = (local_68f4 - (iVar30 + iVar9)) + -0x2c;
              if (iVar9 < 0xf) {
                iVar9 = 0xe;
              }
              thunk_pf_app_scrollbars_layout(10,iVar30 + 0x28,local_68f8 - 0x14,iVar9 + -0xe,auStack_33c,
                                 (void *)0x0,&local_180);
              recovered_10009f38((int)&local_68fc,auStack_33c);
              uVar10 = thunk_terror_ui_scrollbar_value_from_point(auStack_16c,auStack_33c,uVar36,local_651c);
              local_6518 = uVar36;
              if (local_650a == '\0') {
                uVar36 = local_654c;
                puVar16 = &local_6550;
                if (local_6511 == '\0') {
                  puVar16 = local_6590;
                  uVar36 = 0;
                }
                uVar44 = recovered_10002188(CONCAT44(uVar36,*puVar16),(ulonglong)local_6524);
                uVar11 = (uint)(uVar44 + 1);
                uVar36 = (uint)(uVar44 + 1 >> 0x20);
                iVar30 = 0x24;
                iVar9 = local_6528 * 2 + 8;
                if (0x24 < local_6528 * 2) {
                  iVar30 = local_6528 << 1;
                }
                if (iVar9 < 0x23) {
                  iVar9 = 0x22;
                }
                uVar21 = recovered_100020b0((local_68f4 - (local_6528 + iVar30 + iVar9)) + -0x3e,
                                            local_6528 + 4);
                if ((int)uVar21 < 2) {
                  uVar21 = 1;
                }
                uVar14 = uVar11 - uVar21;
                iVar30 = uVar36 - (uVar21 > uVar11);
                if (uVar36 == 0 && (uVar21 <= uVar11) <= uVar36) {
                  iVar30 = 0;
                  uVar14 = 0;
                }
                if ((uint)-iVar30 < (uint)(uVar14 < 0x80000000)) goto LAB_10003638;
LAB_100035d4:
                uVar44 = recovered_10002188(CONCAT44(iVar30,uVar14),0x7fffffff);
                iVar9 = (int)(uVar44 >> 0x20);
                lVar3 = (uVar44 & 0xffffffff) * 0x7fffffff;
                uVar36 = (uint)lVar3;
                if (0x7ffffffe < uVar10) {
                  uVar10 = 0x7fffffff;
                }
                lVar1 = (ulonglong)uVar10 * (ulonglong)(uVar14 - uVar36);
                lVar2 = (ulonglong)uVar10 * (uVar44 & 0xffffffff);
                uVar44 = recovered_10002188(CONCAT44((iVar30 - ((int)((ulonglong)lVar3 >> 0x20) +
                                                                iVar9 * 0x7fffffff +
                                                               (uint)(uVar14 < uVar36))) * uVar10 +
                                                     (int)((ulonglong)lVar1 >> 0x20),(int)lVar1),
                                            0x7fffffff);
                lVar3 = uVar44 + CONCAT44(iVar9 * uVar10 + (int)((ulonglong)lVar2 >> 0x20),
                                          (int)lVar2);
              }
              else {
                iVar30 = 0x24;
                iVar9 = local_6528 * 2 + 8;
                if (0x24 < local_6528 * 2) {
                  iVar30 = local_6528 << 1;
                }
                if (iVar9 < 0x23) {
                  iVar9 = 0x22;
                }
                uVar36 = recovered_100020b0((local_68f4 - (local_6528 + iVar30 + iVar9)) + -0x3e,
                                            local_6528 + 4);
                if ((int)uVar36 < 2) {
                  uVar36 = 1;
                }
                uVar14 = local_655c - uVar36;
                if (local_655c < uVar36) {
                  uVar14 = 0;
                }
                if (0x7fffffff < uVar14) {
                  iVar30 = 0;
                  goto LAB_100035d4;
                }
LAB_10003638:
                lVar3 = (longlong)(int)uVar10;
              }
              bVar41 = recovered_10009a44((int)&local_68fc,(uint)lVar3,
                                          (uint)((ulonglong)lVar3 >> 0x20));
              uVar25 = (uint)bVar41;
            }
            else {
              if ((char)local_6510 != '\x01') goto LAB_10003654;
              iVar9 = 0x24;
              if (0x24 < local_6528 * 2) {
                iVar9 = local_6528 << 1;
              }
              uVar21 = local_6528 + iVar9 + 0x30;
              iVar9 = local_6528 * 2 + 8;
              if (iVar9 < 0x23) {
                iVar9 = 0x22;
              }
              uVar25 = 0;
              uVar14 = (local_68f4 - iVar9) - 9;
              if ((int)uVar36 < (int)uVar14) {
                uVar14 = uVar36;
              }
              if ((int)uVar36 < (int)uVar21) {
                uVar14 = uVar21;
              }
              bVar41 = SBORROW4(uVar14,uVar21);
              iVar12 = uVar14 - uVar21;
              uVar36 = uVar21;
              if ((int)uVar21 <= (int)uVar14) {
                uVar36 = (local_68f4 - iVar9) - 8;
                bVar41 = SBORROW4(uVar36,uVar14);
                iVar12 = uVar36 - uVar14;
              }
              if (uVar14 != uVar36 && iVar12 < 0 == bVar41) {
                iVar9 = ((uintptr_t)(uintptr_t)(uintptr_t)local_6524 * 3 + 0x13) * local_652c + 0x12;
                if ((int)uVar10 < iVar9) {
                  iVar9 = (uintptr_t)local_652c * 0x11 + 0x12;
                  if ((int)uVar10 < iVar9) goto LAB_10003650;
                  iVar12 = (uintptr_t)local_652c * 3;
                }
                else {
                  iVar12 = local_652c;
                }
                iVar12 = recovered_100020b0(uVar10 - iVar9,iVar12);
                uVar10 = (uint)local_6540;
                iVar9 = uVar11 - 1;
                if (iVar12 < (int)(uVar11 - 1)) {
                  iVar9 = iVar12;
                }
                iVar20 = PF_PART4(local_6540, 4);
                uVar36 = recovered_100020b0(uVar14 - uVar21,iVar30 + 4);
                if (iVar12 < 0) {
                  iVar9 = 0;
                }
                lVar3 = (ulonglong)uVar11 * (ulonglong)(uVar10 + uVar36) +
                        CONCAT44((iVar20 + (uint)CARRY4(uVar10,uVar36)) * uVar11,iVar9);
                uVar25 = recovered_1000a6b8((int)&local_68fc,(uint)lVar3,
                                            (uint)((ulonglong)lVar3 >> 0x20),1);
              }
            }
LAB_10003650:
            uVar13 = uVar13 | uVar25;
          }
LAB_10003654:
          uVar31 = uVar13 | uVar31;
          local_650c = (char)(uVar38 & 1);
        }
      }
      else {
LAB_10002c40:
        uVar10 = thunk_terror_ui_window_pointer_state(&local_68fc,local_200);
        if (uVar10 != 0) goto LAB_10002c54;
      }
      if ((local_6b80 & 2) != 0) {
        iVar30 = 0;
        while ((iVar9 = Ram40010800, iVar9 == 0x50414d57 && (iVar9 = Ram40010804, iVar9 != 0))) {
          uVar10 = Ram40010808;
          bVar41 = uVar10 < 0xc;
          if (!bVar41) {
            uVar10 = Ram40010808;
          }
          if ((bVar41 || uVar10 < 0x30) || (pcVar5 = (code *)UINT_4001082c, pcVar5 == (code *)0x0))
          break;
          uVar36 = (*pcVar5)();
          bVar4 = local_6513;
          uVar10 = local_6524;
          if (uVar36 == 0) break;
          if (((uVar36 | uVar36 >> 8) & 0xff) == 0) goto LAB_10004210;
          uVar31 = uVar36 >> 8;
          if (local_6504 != 0) {
            uVar22 = thunk_strlen((char *)text);
            if ((uVar36 & 0x60000) != 0) {
              if ((((uVar31 & 0xff) == 0x2f) ||
                  (uVar36 = uVar36 & 0xff, !(uVar36 != 0x16 && uVar36 != 0x76))) || (uVar36 == 0x56)
                 ) {
                iVar9 = Ram40010800;
                uVar31 = 1;
                if (iVar9 == 0x50414d57) {
                  iVar9 = Ram40010804;
                  if (iVar9 != 0) {
                    uVar10 = Ram40010808;
                    bVar41 = 0xb < uVar10;
                    if (bVar41) {
                      uVar10 = Ram40010808;
                    }
                    if (bVar41 && 0x4f < uVar10) {
                      pcVar5 = (code *)UINT_4001084c;
                      if (pcVar5 != (code *)0x0) {
                        pcVar32 = (*pcVar5)(0x30001);
                        if (pcVar32 != (char *)0x0) {
                          iVar9 = Ram40010800;
                          if (((iVar9 == 0x50414d57) && (iVar9 = Ram40010804, iVar9 != 0)) &&
                             ((uVar31 = Ram40010808, 0xb < uVar31 &&
                              (uVar31 = Ram40010808, 0x30 < uVar31 >> 3)))) {
                            pcVar5 = (code *)UINT_40010984;
                            if (((pcVar5 != (code *)0x0) &&
                                (uVar31 = (*pcVar5)(pcVar32,0x30001), uVar31 != 0)) &&
                               ((uVar31 < 0x3085 - uVar22 &&
                                (iVar9 = thunk_memchr(pcVar32,0,uVar31), iVar9 == 0)))) {
                              thunk_memmove(text + local_6500 + uVar31,text + local_6500,
                                                 (uVar22 - local_6500) + 1);
                              thunk_memcpy(text + local_6500,pcVar32,uVar31);
                              local_6500 = local_6500 + uVar31;
                            }
                          }
                          else {
                            *pcVar32 = '\0';
                          }
                          iVar9 = Ram40010800;
                          if (iVar9 == 0x50414d57) {
                            iVar9 = Ram40010804;
                            if (iVar9 != 0) {
                              uVar31 = Ram40010808;
                              bVar41 = 0xb < uVar31;
                              if (bVar41) {
                                uVar31 = Ram40010808;
                              }
                              if (bVar41 && 0x53 < uVar31) {
                                pcVar5 = (code *)UINT_40010850;
                                if (pcVar5 != (code *)0x0) {
                                  (*pcVar5)(pcVar32);
                                }
                              }
                            }
                          }
                          goto switchD_10003a8c_default;
                        }
                      }
                    }
                  }
                }
                goto LAB_10004210;
              }
              goto switchD_10003a8c_default;
            }
            switch((uintptr_t)(uVar36 & 0xff)) {
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
switchD_10003a20_caseD_9:
              switch((uintptr_t)((uVar31 - 0x47) * 0x80 & 0xff | (uVar31 - 0x47 & 0xff) >> 1)) {
              case 0:
switchD_10003bb0_caseD_0:
                uVar22 = 0;
              case 4:
switchD_10003bb0_caseD_4:
                local_6500 = uVar22;
                break;
              default:
switchD_10003bb0_caseD_1:
                uVar31 = uVar36 - 0x20 & 0xff;
                bVar42 = 0x5d < uVar31;
                bVar41 = uVar31 == 0x5e;
                if (uVar31 < 0x5f) {
                  uVar22 = uVar22 + 1;
                  bVar42 = 0x3083 < uVar22;
                  bVar41 = uVar22 == 0x3084;
                }
                if (!bVar42 || bVar41) {
                  thunk_memmove(abStack_3474 + local_6500 + 2,text + local_6500,
                                     uVar22 - local_6500);
                  text[local_6500] = (byte)uVar36;
                  local_6500 = local_6500 + 1;
                }
                break;
              case 2:
                if (local_6500 == 0) {
                  uVar10 = uVar31 & 0xff;
                  if (uVar10 == 0x47) goto switchD_10003bb0_caseD_0;
                  if (uVar10 != 0x4f) {
                    uVar19 = 0;
                    if (uVar10 == 0x4d) goto LAB_10004088;
                    goto switchD_10003bb0_caseD_1;
                  }
                  goto switchD_10003bb0_caseD_4;
                }
                local_6500 = local_6500 - 1;
                break;
              case 3:
                uVar19 = local_6500;
LAB_10004088:
                if (uVar22 <= uVar19) {
                  if ((uVar31 & 0xff) != 0x4f) {
                    if ((uVar31 & 0xff) != 0x47) goto switchD_10003bb0_caseD_1;
                    goto switchD_10003bb0_caseD_0;
                  }
                  goto switchD_10003bb0_caseD_4;
                }
                local_6500 = uVar19 + 1;
                break;
              case 6:
                if (local_6500 < uVar22) {
                  thunk_memmove(text + local_6500,abStack_3474 + local_6500 + 2,
                                     uVar22 - local_6500);
                }
              }
              break;
            case 10:
            case 0xd:
              switch((uintptr_t)(local_6504)) {
              case 1:
                iVar9 = 0;
                goto LAB_10003f5c;
              case 2:
                iVar9 = 1;
LAB_10003f5c:
                iVar9 = recovered_10006c54((int)&local_68fc,text,iVar9);
                break;
              case 3:
                iVar9 = recovered_10008f98((int)&local_68fc,text);
                break;
              case 4:
                iVar9 = recovered_10007198((int)&local_68fc,text);
                break;
              case 5:
                uVar31 = (uint)abStack_3474[1];
                pbVar35 = text;
                if (uVar31 != 0x30) {
                  uVar10 = 10;
LAB_100040c4:
                  if (uVar31 != 0) goto LAB_10004228;
LAB_100040cc:
                  thunk_snprintf(acStack_3ee,0xa0,&DAT_1000b7d0,str_1000bd91);
                  goto switchD_10003a8c_default;
                }
                if ((abStack_3474[2] | 0x20) == 0x78) {
                  uVar10 = 0x10;
                  uVar31 = (uint)abStack_3474[3];
                  pbVar35 = abStack_3474 + 3;
                  goto LAB_100040c4;
                }
                uVar31 = 0x30;
                uVar10 = 10;
LAB_10004228:
                uVar44 = 0;
                do {
                  uVar11 = (uint)(uVar44 >> 0x20);
                  pbVar35 = pbVar35 + 1;
                  uVar36 = uVar31 - 0x30;
                  if (9 < uVar36) {
                    if (uVar31 - 0x61 < 6) {
                      uVar36 = uVar31 - 0x57;
                    }
                    else {
                      uVar36 = 0xffffffff;
                      if (uVar31 - 0x41 < 6) {
                        uVar36 = uVar31 - 0x37;
                      }
                    }
                  }
                  if ((((int)uVar36 < 0) || (uVar10 <= uVar36)) ||
                     (uVar45 = recovered_10002188(CONCAT44(0xffffffff,~uVar36),(ulonglong)uVar10),
                     uVar31 = (uint)(uVar45 >> 0x20),
                     uVar31 <= uVar11 && (uint)((uint)uVar44 <= (uint)uVar45) <= uVar31 - uVar11))
                  goto LAB_100040cc;
                  uVar31 = (uint)*pbVar35;
                  uVar44 = (ulonglong)uVar10 * (uVar44 & 0xffffffff) +
                           CONCAT44(uVar11 * uVar10,uVar36);
                  uVar36 = (uint)uVar44;
                  uVar11 = (uint)(uVar44 >> 0x20);
                } while (uVar31 != 0);
                if (local_6511 == '\x01') {
                  if (local_654c <= uVar11 && (uint)(uVar36 <= local_6550) <= local_654c - uVar11)
                  goto LAB_100040cc;
                  uVar31 = local_654c - (local_6550 == 0);
                  if (uVar31 <= uVar11 && (uint)(uVar36 <= local_6550 - 1) <= uVar31 - uVar11) {
                    uVar44 = CONCAT44(uVar11 - (uVar36 == 0),uVar36 - 1);
                  }
                  uVar31 = (uint)(uVar44 >> 0x20);
                  uVar36 = (uint)uVar44;
                  if ((local_6544 < uVar31 || uVar31 - local_6544 < (uint)(local_6548 <= uVar36)) &&
                     (uVar10 = local_6544 + CARRY4(local_6548,local_6590[0]),
                     uVar31 <= uVar10 &&
                     (uint)(local_6548 + local_6590[0] <= uVar36) <= uVar31 - uVar10))
                  goto LAB_100043ec;
                  iVar9 = recovered_1000a2f8((int)&local_68fc,uVar36,uVar31);
                  if (iVar9 == 0) goto switchD_10003a8c_default;
                  local_6588 = uVar36 - local_6548;
                }
                else {
                  if ((uint)(uVar36 <= local_6590[0]) <= -uVar11) goto LAB_100040cc;
LAB_100043ec:
                  local_6588 = uVar36 - local_6548;
                }
                local_6508 = -1;
                local_6584 = local_6588;
                recovered_10009788((int)&local_68fc);
                goto LAB_10003f68;
              default:
                goto switchD_10003a8c_default;
              }
              if (iVar9 != 0) {
LAB_10003f68:
                local_650a = '\0';
                local_6504 = 0;
              }
              break;
            case 0x1b:
              local_650a = '\0';
              local_6504 = 0;
              thunk_snprintf(acStack_3ee,0xa0,&DAT_1000b7d0,str_1000bd87);
              break;
            default:
              if ((uVar36 & 0xff) != 0x7f) goto switchD_10003a20_caseD_9;
            case 8:
              if (local_6500 != 0) {
                thunk_memmove(abStack_3474 + local_6500,text + local_6500,
                                   (uVar22 - local_6500) + 1);
                local_6500 = local_6500 - 1;
              }
            }
switchD_10003a8c_default:
            iVar9 = recovered_100020b0(local_68f8 + local_652c * -8 + -0x28,local_652c);
            uVar31 = 1;
            uVar22 = local_64fc;
            if (local_6500 < local_64fc) {
              uVar22 = local_6500;
            }
            if (iVar9 < 2) {
              iVar9 = 1;
            }
            if ((local_6500 < local_64fc) || (uVar22 + iVar9 <= local_6500)) {
              if (uVar22 + iVar9 <= local_6500) {
                uVar22 = (local_6500 - iVar9) + 1;
              }
              local_64fc = uVar22;
            }
            goto LAB_10004210;
          }
          local_180 = CONCAT31(PF_PART3(local_180, 1),(byte)uVar36);
          if ((uVar36 & 0x60000) != 0) {
            uVar31 = uVar31 & 0xff;
            if (((uVar31 == 0x2e) || (uVar10 = uVar36 & 0xff, uVar10 == 3 || uVar10 == 99)) ||
               (uVar10 == 0x43)) {
              uVar31 = local_6588;
              if (local_6588 < local_6584) {
                uVar31 = local_6584;
              }
              uVar10 = local_6584;
              if (local_6588 <= local_6584) {
                uVar10 = local_6588;
              }
              uVar36 = local_6588;
              if (local_6588 < local_6590[0]) {
                uVar36 = local_6588 + 1;
              }
              if (!(uVar10 < uVar31 && uVar31 <= local_6590[0])) {
                uVar31 = uVar36;
                uVar10 = local_6588;
              }
              pcVar32 = str_1000ba6b;
              if (uVar31 != uVar10) {
                uVar15 = 2;
                iVar9 = Ram40010800;
                if (local_6513 != 0) {
                  uVar15 = 3;
                }
                pcVar32 = str_1000ba80;
                if (iVar9 == 0x50414d57) {
                  iVar9 = Ram40010804;
                  pcVar32 = str_1000ba80;
                  if (iVar9 != 0) {
                    uVar36 = Ram40010808;
                    pcVar32 = str_1000ba80;
                    if (0xb < uVar36) {
                      uVar36 = Ram40010808;
                      pcVar32 = str_1000ba80;
                      if ((0x253 < uVar36) && (_DAT_40010a50 != (code *)0x0)) {
                        uVar31 = (*_DAT_40010a50)(uVar15,(int)local_6594 + uVar10,uVar31 - uVar10,
                                                  0xffffffff,0);
                        pcVar32 = str_1000bace;
                        if (bVar4 != 0) {
                          pcVar32 = str_1000babc;
                        }
                        pcVar29 = str_1000ba80;
                        goto LAB_10004048;
                      }
                    }
                  }
                }
              }
LAB_1000404c:
override_prt_10004060_945f3014:
              thunk_snprintf(acStack_3ee,0xa0,&DAT_1000b7d0,pcVar32);
            }
            else if (((uVar31 == 0x2f) || (uVar10 == 0x16 || uVar10 == 0x76)) || (uVar10 == 0x56)) {
              recovered_10008924((int)&local_68fc,(uint)local_6513);
            }
            else if (((uVar31 == 0x2d) || (uVar10 == 0x18 || uVar10 == 0x78)) || (uVar10 == 0x58)) {
              recovered_10008cd4((int)&local_68fc);
            }
            else {
              if (((uVar31 == 0x1e) || (uVar10 == 1 || uVar10 == 0x61)) || (uVar10 == 0x41)) {
                local_6584 = 0;
                local_6508 = -1;
                local_6588 = local_6590[0];
                pcVar32 = str_1000bdd7;
                if (local_6511 != '\0') {
                  pcVar32 = str_1000bdbc;
                }
                goto LAB_1000404c;
              }
              if (((uVar31 == 0x1f) || (uVar10 == 0x13 || uVar10 == 0x73)) || (uVar10 == 0x53)) {
                if ((uVar36 & 0x10000) == 0) {
                  recovered_100084ac((int)&local_68fc);
                }
                else {
                  recovered_10008050((int)&local_68fc,3);
                }
              }
              else if (((uVar31 == 0x18) || (uVar10 == 0xf || uVar10 == 0x6f)) || (uVar10 == 0x4f))
              {
                recovered_10008050((int)&local_68fc,1);
              }
              else if (((uVar31 == 0x31) || (uVar10 == 0xe || uVar10 == 0x6e)) || (uVar10 == 0x4e))
              {
                recovered_10006af8((int)&local_68fc);
              }
              else if (((uVar31 == 0x22) || (uVar10 == 7 || uVar10 == 0x67)) || (uVar10 == 0x47)) {
                recovered_10008050((int)&local_68fc,5);
              }
            }
            goto LAB_10004064;
          }
          uVar11 = local_6548 + local_6588;
          uVar38 = local_6544 + CARRY4(local_6548,local_6588);
          switch((uintptr_t)(uVar31 & 0xff)) {
          case 0x47:
            uVar44 = recovered_1000226c(CONCAT44(uVar38,uVar11),(ulonglong)local_6524);
            uVar21 = uVar11 - (uint)uVar44;
            uVar14 = uVar38 - ((int)(uVar44 >> 0x20) + (uint)(uVar11 < (uint)uVar44));
            break;
          case 0x48:
            bVar41 = local_6524 <= uVar11;
            uVar21 = uVar11 - local_6524;
            goto LAB_10003e90;
          case 0x49:
            iVar9 = 0x24;
            iVar12 = local_6528 * 2 + 8;
            if (0x24 < local_6528 * 2) {
              iVar9 = local_6528 << 1;
            }
            if (iVar12 < 0x23) {
              iVar12 = 0x22;
            }
            iVar9 = recovered_100020b0((local_68f4 - (local_6528 + iVar9 + iVar12)) + -0x3e,
                                       local_6528 + 4);
            if (iVar9 < 2) {
              iVar9 = 1;
            }
            bVar41 = iVar9 * local_6524 <= uVar11;
            uVar21 = uVar11 - iVar9 * local_6524;
            bVar42 = uVar38 != 0 || uVar38 < bVar41;
            goto LAB_10003e94;
          default:
            uVar10 = uVar36 & 0xff;
            if (uVar10 == 9) {
              local_6508 = -1;
              local_6513 = local_6513 ^ 1;
              goto LAB_10004064;
            }
            uVar31 = uVar31 & 0xff;
            if (uVar31 == 0x52) {
              pcVar32 = str_1000bc63;
              if (local_6511 == '\0') {
                local_6508 = -1;
                uVar31 = (local_6580 + 1) % 3;
                pcVar32 = str_1000bccf;
                if (uVar31 == 1) {
                  pcVar32 = str_1000bca9;
                }
                pcVar29 = str_1000bc89;
                local_6580 = uVar31;
LAB_10004048:
                if (uVar31 == 0) {
                  pcVar32 = pcVar29;
                }
              }
              goto LAB_1000404c;
            }
            if (uVar10 == 0x1b) {
              local_6584 = local_6588;
              local_6509 = 0;
            }
            else {
              if ((uVar31 != 0x53 && uVar10 != 0x7f) && (uVar10 != 8)) {
                if (local_6513 == 1) {
                  if ((uVar36 - 0x20 & 0xff) < 0x5f) {
                    puVar16 = &local_180;
                  }
                  else {
                    if (uVar10 != 0xd && uVar10 != 10) goto LAB_10004064;
                    puVar16 = &local_32c;
                    PF_PART1(local_32c, 0) = 10;
                  }
                  recovered_10009150((int)&local_68fc,(int)puVar16,1);
                }
                else {
                  if ((uVar36 - 0x30 & 0xff) < 10) {
                    iVar9 = uVar10 - 0x30;
                  }
                  else if ((uVar36 - 0x61 & 0xff) < 6) {
                    iVar9 = uVar10 - 0x57;
                  }
                  else {
                    if (5 < (uVar36 - 0x41 & 0xff)) goto LAB_10004064;
                    iVar9 = uVar10 - 0x37;
                  }
                  if (-1 < iVar9) {
                    if (-1 < local_6508) {
                      PF_PART1(local_32c, 0) = (byte)iVar9 | (byte)(local_6508 << 4);
                      recovered_10009150((int)&local_68fc,(int)&local_32c,1);
                      goto LAB_100043c8;
                    }
                    pcVar32 = str_1000be32;
                    local_6508 = iVar9;
                    goto override_prt_10004060_945f3014;
                  }
                }
                goto LAB_10004064;
              }
              pcVar32 = str_1000bdea;
              if (local_6511 == '\0') {
                iVar9 = recovered_10009988((int *)&local_6594,(uint)(uVar31 != 0x53));
                if (iVar9 == 0) goto LAB_100043c8;
                local_6512 = '\x01';
                pcVar32 = str_1000be24;
              }
              thunk_snprintf(acStack_3ee,0xa0,&DAT_1000b7d0,pcVar32);
            }
LAB_100043c8:
            local_6508 = -1;
            goto LAB_10004064;
          case 0x4b:
            bVar41 = uVar11 != 0;
            uVar21 = uVar11 - 1;
LAB_10003e90:
            bVar42 = uVar38 != 0 || uVar38 < bVar41;
LAB_10003e94:
            uVar14 = uVar38 - !bVar41;
            if (!bVar42) {
              uVar21 = 0;
              uVar14 = 0;
            }
            break;
          case 0x4d:
            uVar31 = local_654c;
            puVar16 = &local_6550;
            if (local_6511 == '\0') {
              puVar16 = local_6590;
              uVar31 = 0;
            }
            uVar21 = uVar11 + 1;
            uVar14 = uVar38 + (0xfffffffe < uVar11);
            if (uVar31 < uVar38 || uVar38 - uVar31 < (uint)(*puVar16 <= uVar11)) {
              uVar21 = uVar11;
              uVar14 = uVar38;
            }
            break;
          case 0x4f:
            uVar44 = recovered_1000226c(CONCAT44(uVar38,uVar11),(ulonglong)local_6524);
            uVar13 = uVar10 - (uint)uVar44;
            iVar9 = (int)(uVar44 >> 0x20) + (uint)(uVar10 < (uint)uVar44);
            uVar31 = -iVar9;
            uVar10 = local_654c;
            puVar16 = &local_6550;
            if (local_6511 == '\0') {
              puVar16 = local_6590;
              uVar10 = 0;
            }
            uVar25 = *puVar16;
            uVar17 = uVar10 - (uVar38 + (uVar25 < uVar11));
            uVar21 = uVar13 + uVar11;
            uVar14 = uVar31 + uVar38 + (uint)CARRY4(uVar13,uVar11);
            if ((uVar10 < uVar38 || uVar38 - uVar10 < (uint)(uVar25 <= uVar11)) ||
                uVar17 <= uVar31 && (uint)(uVar13 <= uVar25 - uVar11) <= uVar17 + iVar9) {
              uVar21 = uVar25;
              uVar14 = uVar10;
            }
            break;
          case 0x50:
            uVar31 = local_654c;
            puVar16 = &local_6550;
            if (local_6511 == '\0') {
              puVar16 = local_6590;
              uVar31 = 0;
            }
            uVar13 = *puVar16;
            uVar10 = uVar38 + (uVar13 < uVar11);
            uVar21 = uVar11 + local_6524;
            uVar14 = uVar38 + CARRY4(uVar11,local_6524);
            if ((uVar31 < uVar38 || uVar38 - uVar31 < (uint)(uVar13 <= uVar11)) ||
                uVar31 == uVar10 && (uint)(local_6524 <= uVar13 - uVar11) <= uVar31 - uVar10) {
              uVar21 = uVar13;
              uVar14 = uVar31;
            }
            break;
          case 0x51:
            iVar9 = 0x24;
            iVar12 = local_6528 * 2 + 8;
            if (0x24 < local_6528 * 2) {
              iVar9 = local_6528 << 1;
            }
            if (iVar12 < 0x23) {
              iVar12 = 0x22;
            }
            iVar9 = recovered_100020b0((local_68f4 - (local_6528 + iVar9 + iVar12)) + -0x3e,
                                       local_6528 + 4);
            if (iVar9 < 2) {
              iVar9 = 1;
            }
            uVar10 = iVar9 * local_6524;
            uVar31 = local_654c;
            puVar16 = &local_6550;
            if (local_6511 == '\0') {
              puVar16 = local_6590;
              uVar31 = 0;
            }
            uVar25 = *puVar16;
            uVar13 = uVar38 + (uVar25 < uVar11);
            uVar21 = uVar11 + uVar10;
            uVar14 = uVar38 + CARRY4(uVar11,uVar10);
            if ((uVar31 < uVar38 || uVar38 - uVar31 < (uint)(uVar25 <= uVar11)) ||
                uVar31 == uVar13 && (uint)(uVar10 <= uVar25 - uVar11) <= uVar31 - uVar13) {
              uVar21 = uVar25;
              uVar14 = uVar31;
            }
          }
          recovered_1000a6b8((int)&local_68fc,uVar21,uVar14,(uVar36 & 0x1ffff) >> 0x10);
LAB_10004064:
          uVar31 = 1;
LAB_10004210:
          iVar30 = iVar30 + 1;
          if (iVar30 == 0x20) break;
        }
      }
      uVar10 = local_6530;
      uVar36 = local_6534 / 0x50 & 1;
      bVar4 = local_650e;
      if (local_650e == 0) {
        bVar4 = PF_PART1(local_6510, 1);
      }
      if (local_650e == 0 && (bVar4 & 1) == 0) {
        iVar30 = -1;
        if (local_6530 != 0) goto LAB_10004648;
        uVar11 = 0;
      }
      else {
        iVar30 = 1;
        uVar11 = local_6530;
        if (local_6530 < 0x20) {
LAB_10004648:
          local_6530 = iVar30 + local_6530;
          uVar11 = local_6530;
        }
      }
      if (0x1f < uVar10) {
        uVar10 = 0x20;
      }
      bVar41 = local_6504 != 0 && uVar36 != uVar8;
      if (0x1f < uVar11) {
        uVar11 = 0x20;
      }
      if ((bVar41 || (uVar31 & 1) != 0) ||
          (((uintptr_t)(uintptr_t)uVar10 * 0x20 * (uintptr_t)(uintptr_t)uVar10 * 0x20 * (uVar10 * -0x40 + 0xc00) + 0x80000 >> 0x14) * 10 + 0x200
          ^ (((uintptr_t)(uintptr_t)uVar11 * 0x20 * (uintptr_t)(uintptr_t)uVar11 * 0x20 * (uVar11 * -0x40 + 0xc00) + 0x80000 >> 0x14) * 5 +
            0x100) * 2) >> 10 != 0) {
        if ((bVar41 || (uVar31 & 1) != 0) ||
           (uVar7 = terror_ui_scrollbar_restore(auStack_65bc,&local_68fc), uVar7 == '\0')) {
          iVar9 = local_652c;
          uVar10 = local_68f4;
          uVar31 = local_68f8;
          iVar12 = recovered_100020b0(local_652c * -0x13 + local_68f8 + -0x36,local_652c << 2);
          uVar8 = 0x40;
          bVar42 = SBORROW4(iVar12,0x3f);
          iVar30 = iVar12 + -0x3f;
          bVar41 = iVar12 == 0x3f;
          if (iVar12 < 0x40) {
            uVar8 = 0x20;
          }
          if (iVar12 < 0x40) {
            bVar42 = SBORROW4(iVar12,0x1f);
            iVar30 = iVar12 + -0x1f;
            bVar41 = iVar12 == 0x1f;
          }
          lVar3 = (ulonglong)local_6524 * (local_6540 & 0xffffffff);
          if (bVar41 || iVar30 < 0 != bVar42) {
            uVar8 = 0x10;
            bVar42 = SBORROW4(iVar12,0xf);
            iVar30 = iVar12 + -0xf;
            bVar41 = iVar12 == 0xf;
            if (iVar12 < 0x10) {
              uVar8 = 8;
              bVar42 = SBORROW4(iVar12,7);
              iVar30 = iVar12 + -7;
              bVar41 = iVar12 == 7;
            }
            if ((bVar41 || iVar30 < 0 != bVar42) && (uVar8 = 4, iVar12 < 4)) {
              uVar8 = 1;
            }
          }
          uVar44 = recovered_10002188(CONCAT44(PF_PART4(local_6540, 4) * local_6524 +
                                               (int)((ulonglong)lVar3 >> 0x20),(int)lVar3),
                                      (ulonglong)uVar8);
          iVar30 = local_6528;
          uVar11 = (uint)(uVar44 >> 0x20);
          local_6540 = uVar44;
          puVar16 = local_6590;
          if (local_6511 != '\0') {
            puVar16 = &local_6550;
          }
          local_6524 = uVar8;
          uVar38 = local_654c;
          if (local_6511 == '\0') {
            uVar38 = 0;
          }
          uVar45 = recovered_10002188(CONCAT44(uVar38,*puVar16),(ulonglong)uVar8);
          uVar8 = (uint)(uVar45 + 1);
          uVar38 = (uint)(uVar45 + 1 >> 0x20);
          iVar12 = 0x24;
          iVar20 = (uintptr_t)iVar30 * 2 + 8;
          if (0x24 < (uintptr_t)iVar30 * 2) {
            iVar12 = iVar30 << 1;
          }
          if (iVar20 < 0x23) {
            iVar20 = 0x22;
          }
          uVar13 = recovered_100020b0((uVar10 - (iVar30 + iVar12 + iVar20)) + -0x3e,iVar30 + 4);
          if ((int)uVar13 < 2) {
            uVar13 = 1;
          }
          uVar14 = uVar8 - uVar13;
          uVar21 = uVar38 - (uVar13 > uVar8);
          if (uVar38 == 0 && (uVar13 <= uVar8) <= uVar38) {
            uVar21 = 0;
            uVar14 = 0;
          }
          if (uVar21 <= uVar11 && (uint)((uint)uVar44 <= uVar14) <= uVar21 - uVar11) {
            local_6540 = (ulonglong)uVar21;
          }
          if (local_6504 != 0) {
            iVar30 = recovered_100020b0(uVar31 + iVar9 * -8 + -0x28,iVar9);
            if (iVar30 < 2) {
              iVar30 = 1;
            }
            uVar22 = local_64fc;
            if (local_6500 < local_64fc) {
              uVar22 = local_6500;
            }
            if ((local_6500 < local_64fc) || (uVar22 + iVar30 <= local_6500)) {
              if (uVar22 + iVar30 <= local_6500) {
                uVar22 = (local_6500 - iVar30) + 1;
              }
              local_64fc = uVar22;
            }
          }
          uVar11 = thunk_terror_ui_colour(0x1f);
          iVar30 = local_6528;
          uVar8 = 0;
          if ((int)local_68f4 < 0) {
            uVar8 = local_68f4;
          }
          uVar38 = 0;
          if ((int)local_68f8 < 0) {
            uVar38 = local_68f8;
          }
          uVar13 = local_68f4;
          if ((int)uVar10 < (int)local_68f4) {
            uVar13 = uVar10;
          }
          if ((int)uVar10 < 0) {
            uVar13 = 0;
          }
          uVar21 = local_68f8;
          if ((int)uVar31 < (int)local_68f8) {
            uVar21 = uVar31;
          }
          if ((int)uVar31 < 0) {
            uVar21 = 0;
          }
          if ((int)uVar8 < (int)uVar13) {
            do {
              uVar14 = uVar38 << 2 | 3;
              uVar25 = uVar38;
              if ((int)uVar38 < (int)uVar21) {
                do {
                  if (-1 < (int)(uVar25 | uVar8)) {
                    bVar42 = SBORROW4(local_68f8,uVar25);
                    iVar9 = local_68f8 - uVar25;
                    bVar41 = local_68f8 == uVar25;
                    if ((int)uVar25 < (int)local_68f8) {
                      bVar42 = SBORROW4(local_68f4,uVar8);
                      iVar9 = local_68f4 - uVar8;
                      bVar41 = local_68f4 == uVar8;
                    }
                    if (!bVar41 && iVar9 < 0 == bVar42) {
                      iVar9 = uVar8 * local_68f0;
                      *(char *)((int)local_68d0 + uVar14 + iVar9 + -3) = (char)(uVar11 >> 0x10);
                      iVar12 = uVar25 * 4 + iVar9;
                      *(char *)((int)local_68d0 + iVar12 + 2) = (char)uVar11;
                      *(char *)((int)local_68d0 + iVar12 + 1) = (char)(uVar11 >> 8);
                      *(undefined1 *)((int)local_68d0 + uVar14 + iVar9) = 0xff;
                    }
                  }
                  uVar25 = uVar25 + 1;
                  uVar14 = uVar14 + 4;
                } while (uVar21 != uVar25);
              }
              uVar8 = uVar8 + 1;
            } while (uVar8 != uVar13);
          }
          uVar8 = thunk_terror_ui_colour(0x2d);
          iVar12 = local_6528;
          iVar9 = 0x24;
          if (0x24 < (uintptr_t)iVar30 * 2) {
            iVar9 = iVar30 << 1;
          }
          uVar11 = iVar9 + 0x24U;
          if ((int)local_68f4 <= (int)(iVar9 + 0x24U)) {
            uVar11 = local_68f4;
          }
          uVar38 = 0;
          if ((int)local_68f8 < 0) {
            uVar38 = local_68f8;
          }
          uVar13 = local_68f8;
          if ((int)uVar31 < (int)local_68f8) {
            uVar13 = uVar31;
          }
          if ((int)uVar31 < 0) {
            uVar13 = 0;
          }
          if (0 < (int)local_68f4) {
            uVar21 = 0;
            do {
              uVar14 = uVar38;
              uVar25 = uVar38 << 2 | 3;
              if ((int)uVar38 < (int)uVar13) {
                do {
                  if (-1 < (int)uVar14) {
                    bVar42 = SBORROW4(local_68f8,uVar14);
                    iVar30 = local_68f8 - uVar14;
                    bVar41 = local_68f8 == uVar14;
                    if ((int)uVar14 < (int)local_68f8) {
                      bVar42 = SBORROW4(local_68f4,uVar21);
                      iVar30 = local_68f4 - uVar21;
                      bVar41 = local_68f4 == uVar21;
                    }
                    if (!bVar41 && iVar30 < 0 == bVar42) {
                      iVar30 = uVar21 * local_68f0;
                      *(char *)((int)local_68d0 + uVar25 + iVar30 + -3) = (char)(uVar8 >> 0x10);
                      iVar9 = uVar14 * 4 + iVar30;
                      *(char *)((int)local_68d0 + iVar9 + 2) = (char)uVar8;
                      *(char *)((int)local_68d0 + iVar9 + 1) = (char)(uVar8 >> 8);
                      *(undefined1 *)((int)local_68d0 + uVar25 + iVar30) = 0xff;
                    }
                  }
                  uVar14 = uVar14 + 1;
                  uVar25 = uVar25 + 4;
                } while (uVar13 != uVar14);
              }
              uVar21 = uVar21 + 1;
            } while (uVar21 != uVar11);
          }
          uVar11 = thunk_terror_ui_colour(3);
          iVar9 = local_652c;
          uVar8 = local_68f8;
          iVar30 = 0x24;
          if (0x24 < iVar12 * 2) {
            iVar30 = iVar12 << 1;
          }
          uVar13 = iVar30 + 0x23;
          uVar38 = local_68f8;
          if ((int)uVar31 < (int)local_68f8) {
            uVar38 = uVar31;
          }
          if ((int)uVar31 < 0) {
            uVar38 = 0;
          }
          if ((int)uVar13 < (int)local_68f4) {
            uVar21 = 0;
            if ((int)local_68f8 < 0) {
              uVar21 = local_68f8;
            }
            if ((int)uVar21 < (int)uVar38) {
              uVar14 = uVar21 << 2 | 3;
              do {
                if (-1 < (int)uVar21) {
                  bVar42 = SBORROW4(local_68f8,uVar21);
                  iVar30 = local_68f8 - uVar21;
                  bVar41 = local_68f8 == uVar21;
                  if ((int)uVar21 < (int)local_68f8) {
                    bVar42 = SBORROW4(local_68f4,uVar13);
                    iVar30 = local_68f4 - uVar13;
                    bVar41 = local_68f4 == uVar13;
                  }
                  if (!bVar41 && iVar30 < 0 == bVar42) {
                    iVar30 = local_68f0 * uVar13;
                    *(char *)((int)local_68d0 + uVar14 + iVar30 + -3) = (char)(uVar11 >> 0x10);
                    iVar12 = uVar21 * 4 + iVar30;
                    *(char *)((int)local_68d0 + iVar12 + 2) = (char)uVar11;
                    *(char *)((int)local_68d0 + iVar12 + 1) = (char)(uVar11 >> 8);
                    *(undefined1 *)((int)local_68d0 + uVar14 + iVar30) = 0xff;
                  }
                }
                uVar21 = uVar21 + 1;
                uVar14 = uVar14 + 4;
              } while (uVar38 != uVar21);
            }
          }
          pcVar32 = (char *)((uintptr_t)pf_module_state + 0xb4dU);
          if (local_6504 == 4) {
            pcVar32 = &DAT_1000be64;
          }
          if (local_6504 == 5) {
            pcVar32 = str_1000be5d;
          }
          uVar22 = thunk_strlen(pcVar32);
          uVar8 = recovered_100020b0(uVar8 - 0x1e,iVar9);
          if (0 < (int)uVar8) {
            if (uVar22 < uVar8) {
              uVar8 = uVar22;
            }
            recovered_1000af50((int)&local_68fc,10,0x11,(int)pcVar32,uVar8,0x31);
          }
          iVar9 = local_6528;
          iVar30 = local_652c;
          uVar8 = 0x1f;
          if (local_6504 == 0) {
            uVar8 = 2;
          }
          uVar11 = thunk_terror_ui_colour(uVar8);
          uVar38 = (uintptr_t)iVar30 * 8 + 10;
          uVar8 = 10;
          if ((int)local_68f4 < 10) {
            uVar8 = local_68f4;
          }
          uVar13 = local_68f8;
          if ((int)uVar38 < (int)local_68f8) {
            uVar13 = uVar38;
          }
          if (iVar30 < -1) {
            uVar13 = 0;
          }
          uVar21 = local_68f4;
          if ((int)(iVar9 + 0x14U) < (int)local_68f4) {
            uVar21 = iVar9 + 0x14U;
          }
          uVar14 = uVar31 - 0x16;
          if (iVar9 < -0x14) {
            uVar21 = 0;
          }
          uVar25 = local_68f8;
          if ((int)uVar14 < (int)local_68f8) {
            uVar25 = uVar14;
          }
          if ((int)uVar14 < 0) {
            uVar25 = 0;
          }
          if ((int)uVar8 < (int)uVar21) {
            do {
              uVar14 = uVar13 << 2 | 3;
              uVar17 = uVar13;
              if ((int)uVar13 < (int)uVar25) {
                do {
                  if (-1 < (int)(uVar17 | uVar8)) {
                    bVar42 = SBORROW4(local_68f8,uVar17);
                    iVar12 = local_68f8 - uVar17;
                    bVar41 = local_68f8 == uVar17;
                    if ((int)uVar17 < (int)local_68f8) {
                      bVar42 = SBORROW4(local_68f4,uVar8);
                      iVar12 = local_68f4 - uVar8;
                      bVar41 = local_68f4 == uVar8;
                    }
                    if (!bVar41 && iVar12 < 0 == bVar42) {
                      iVar12 = uVar8 * local_68f0;
                      *(char *)((int)local_68d0 + uVar14 + iVar12 + -3) = (char)(uVar11 >> 0x10);
                      iVar20 = (uintptr_t)(uintptr_t)uVar17 * 4 + iVar12;
                      *(char *)((int)local_68d0 + iVar20 + 2) = (char)uVar11;
                      *(char *)((int)local_68d0 + iVar20 + 1) = (char)(uVar11 >> 8);
                      *(undefined1 *)((int)local_68d0 + uVar14 + iVar12) = 0xff;
                    }
                  }
                  uVar17 = uVar17 + 1;
                  uVar14 = uVar14 + 4;
                } while (uVar25 != uVar17);
              }
              uVar8 = uVar8 + 1;
            } while (uVar8 != uVar21);
          }
          uVar15 = 4;
          if (local_6504 == 0) {
            uVar15 = 3;
          }
          recovered_1000a80c((int)&local_68fc,uVar38,10,uVar31 + iVar30 * -8 + -0x20,iVar9 + 10,
                             uVar15);
          iVar30 = local_652c;
          pbVar35 = text + local_64fc;
          uVar8 = recovered_100020b0(local_68f8 + local_652c * -8 + -0x24,local_652c);
          if (local_6504 == 0) {
            pbVar35 = abStack_64f8;
          }
          uVar22 = thunk_strlen((char *)pbVar35);
          if (0 < (int)uVar8) {
            if (uVar22 < uVar8) {
              uVar8 = uVar22;
            }
            recovered_1000af50((int)&local_68fc,(uintptr_t)iVar30 * 8 + 0x10,0xf,(int)pbVar35,uVar8,1);
          }
          iVar30 = local_6528;
          if ((local_6504 != 0) && ((local_6534 / 0x50 & 1) == 0)) {
            iVar9 = ((local_6500 - local_64fc) + 8) * local_652c;
            uVar11 = thunk_terror_ui_colour(4);
            uVar38 = iVar9 + 0x10;
            uVar13 = iVar9 + 0x11;
            uVar8 = local_68f8;
            if ((int)uVar38 < (int)local_68f8) {
              uVar8 = uVar38;
            }
            if ((int)uVar38 < 0) {
              uVar8 = 0;
            }
            uVar21 = local_68f8;
            if ((int)uVar13 < (int)local_68f8) {
              uVar21 = uVar13;
            }
            if ((int)uVar38 < -1) {
              uVar21 = 0;
            }
            uVar13 = iVar30 + 0x10;
            uVar38 = 0xe;
            if ((int)local_68f4 < 0xe) {
              uVar38 = local_68f4;
            }
            uVar14 = local_68f4;
            if ((int)uVar13 < (int)local_68f4) {
              uVar14 = uVar13;
            }
            if (iVar30 < -0x10) {
              uVar14 = 0;
            }
            if ((int)uVar38 < (int)uVar14) {
              do {
                uVar13 = uVar8 << 2 | 3;
                uVar25 = uVar8;
                if ((int)uVar8 < (int)uVar21) {
                  do {
                    if (-1 < (int)(uVar25 | uVar38)) {
                      bVar42 = SBORROW4(local_68f8,uVar25);
                      iVar30 = local_68f8 - uVar25;
                      bVar41 = local_68f8 == uVar25;
                      if ((int)uVar25 < (int)local_68f8) {
                        bVar42 = SBORROW4(local_68f4,uVar38);
                        iVar30 = local_68f4 - uVar38;
                        bVar41 = local_68f4 == uVar38;
                      }
                      if (!bVar41 && iVar30 < 0 == bVar42) {
                        iVar30 = uVar38 * local_68f0;
                        *(char *)((int)local_68d0 + uVar13 + iVar30 + -3) = (char)(uVar11 >> 0x10);
                        iVar9 = uVar25 * 4 + iVar30;
                        *(char *)((int)local_68d0 + iVar9 + 2) = (char)uVar11;
                        *(char *)((int)local_68d0 + iVar9 + 1) = (char)(uVar11 >> 8);
                        *(undefined1 *)((int)local_68d0 + uVar13 + iVar30) = 0xff;
                      }
                    }
                    uVar25 = uVar25 + 1;
                    uVar13 = uVar13 + 4;
                  } while (uVar21 != uVar25);
                }
                uVar38 = uVar38 + 1;
              } while (uVar38 != uVar14);
            }
          }
          puVar26 = &DAT_1000be73;
          if (local_6513 != 0) {
            puVar26 = &DAT_1000be6e;
          }
          recovered_1000ac30((int)&local_68fc,0,(int)puVar26);
          pcVar32 = str_1000be77;
          if (((local_6511 == '\0') && (pcVar32 = str_1000be81, local_6580 != 0)) &&
             (pcVar32 = str_1000be77, local_6580 == 1)) {
            pcVar32 = str_1000be88;
          }
          recovered_1000ac30((int)&local_68fc,1,(int)pcVar32);
          recovered_1000ac30((int)&local_68fc,2,((uintptr_t)pf_module_state + 0xb73U));
          recovered_1000ac30((int)&local_68fc,3,((uintptr_t)pf_module_state + 0xb7bU));
          uVar8 = recovered_100020b0(local_68f8 - 0x26,local_652c);
          iVar30 = local_6528;
          if (local_650a == '\x01') {
            uVar22 = thunk_strlen(str_1000be9d);
            if (0 < (int)uVar8) {
              if (uVar22 < uVar8) {
                uVar8 = uVar22;
              }
              iVar9 = 0x24;
              if (0x24 < (uintptr_t)iVar30 * 2) {
                iVar9 = iVar30 << 1;
              }
              recovered_1000af50((int)&local_68fc,0x12,iVar9 + 0x2a,((uintptr_t)pf_module_state + 0xb81U),uVar8,0x31);
            }
            uVar8 = 0;
            while( true ) {
              iVar30 = 0x24;
              iVar9 = local_6528 * 2 + 8;
              if (0x24 < local_6528 * 2) {
                iVar30 = local_6528 << 1;
              }
              if (iVar9 < 0x23) {
                iVar9 = 0x22;
              }
              uVar11 = recovered_100020b0((local_68f4 - (local_6528 + iVar30 + iVar9)) + -0x3e,
                                          local_6528 + 4);
              if ((int)uVar11 < 2) {
                uVar11 = 1;
              }
              bVar41 = uVar11 <= uVar8;
              uVar38 = 1;
              if (!bVar41) {
                uVar11 = uVar8 + local_6558;
                uVar38 = local_655c;
              }
              if (bVar41 || uVar38 <= uVar11) break;
              uVar15 = *(undefined4 *)((int)local_6560 + (uintptr_t)(uintptr_t)uVar11 * 4);
              thunk_memset(&local_180,0,0x15c);
              iVar30 = Ram40010800;
              local_17c = 1;
              local_180 = 0x15c;
              if ((iVar30 == 0x50414d57) && (iVar30 = Ram40010804, iVar30 != 0)) {
                uVar11 = Ram40010808;
                bVar41 = 0xb < uVar11;
                if (bVar41) {
                  uVar11 = Ram40010808;
                }
                if (((bVar41 && 0x1eb < uVar11) &&
                    (pcVar5 = (code *)Ram400109e8, pcVar5 != (code *)0x0)) &&
                   ((iVar30 = (*pcVar5)(uVar15,&local_180,0x15c), iVar30 != 0 &&
                    ((iVar30 = Ram40010800, iVar30 == 0x50414d57 &&
                     (iVar30 = Ram40010804, iVar30 != 0)))))) {
                  uVar11 = Ram40010808;
                  bVar41 = 0xb < uVar11;
                  if (bVar41) {
                    uVar11 = Ram40010808;
                  }
                  if ((bVar41 && 0x223 < uVar11) && (iVar30 = Ram40010a20, iVar30 != 0)) {
                    pcVar5 = (code *)Ram40010a20;
                    iVar30 = (*pcVar5)(uVar15,local_200,0x80);
                    if (-1 < iVar30) {
                      pcVar32 = str_1000bee9;
                      if ((local_170 & 8) == 0) {
                        pcVar32 = &DAT_1000b63b;
                      }
                      thunk_snprintf((char *)&local_32c,300,str_1000bed2,local_200,auStack_97,
                                         local_140 << 9,local_13c << 9 | local_140 >> 0x17,pcVar32);
                      uVar11 = recovered_100020b0(local_68f8 - 0x26,local_652c);
                      iVar30 = local_6528;
                      uVar22 = thunk_strlen((char *)&local_32c);
                      if (0 < (int)uVar11) {
                        iVar9 = 0x24;
                        if (0x24 < (uintptr_t)iVar30 * 2) {
                          iVar9 = iVar30 << 1;
                        }
                        if (uVar22 < uVar11) {
                          uVar11 = uVar22;
                        }
                        recovered_1000af50((int)&local_68fc,0x12,
                                           (iVar30 + 4) * uVar8 + iVar30 + iVar9 + 0x30,
                                           (int)&local_32c,uVar11,1);
                      }
                    }
                  }
                }
              }
              uVar8 = uVar8 + 1;
            }
          }
          else {
            uVar22 = thunk_strlen(str_1000bef6);
            if (0 < (int)uVar8) {
              if (uVar22 < uVar8) {
                uVar8 = uVar22;
              }
              iVar9 = 0x24;
              if (0x24 < (uintptr_t)iVar30 * 2) {
                iVar9 = iVar30 << 1;
              }
              recovered_1000af50((int)&local_68fc,0x12,iVar9 + 0x2a,((uintptr_t)pf_module_state + 0xbdaU),uVar8,0x31);
            }
            iVar9 = local_6528;
            iVar30 = local_652c;
            uVar8 = local_68f8;
            pcVar32 = &DAT_1000be73;
            if (3 < (int)local_6524) {
              pcVar32 = str_1000befd;
            }
            uVar22 = thunk_strlen(pcVar32);
            uVar8 = recovered_100020b0(uVar8 + iVar30 * -0x11 + -0x26,iVar30);
            if (0 < (int)uVar8) {
              if (uVar22 < uVar8) {
                uVar8 = uVar22;
              }
              iVar12 = 0x24;
              if (0x24 < iVar9 * 2) {
                iVar12 = iVar9 << 1;
              }
              recovered_1000af50((int)&local_68fc,(uintptr_t)iVar30 * 0x11 + 0x12,iVar12 + 0x2a,(int)pcVar32,
                                 uVar8,0x31);
            }
            iVar30 = local_652c;
            iVar12 = (uintptr_t)(uintptr_t)(uintptr_t)local_6524 * 3 + 0x13;
            uVar8 = recovered_100020b0((local_68f8 - iVar12 * local_652c) + -0x26,local_652c);
            iVar9 = local_6528;
            uVar22 = thunk_strlen(&DAT_1000be6e);
            if (0 < (int)uVar8) {
              if (uVar22 < uVar8) {
                uVar8 = uVar22;
              }
              iVar20 = 0x24;
              if (0x24 < iVar9 * 2) {
                iVar20 = iVar9 << 1;
              }
              recovered_1000af50((int)&local_68fc,iVar12 * iVar30 + 0x12,iVar20 + 0x2a,((uintptr_t)pf_module_state + 0xb52U),
                                 uVar8,0x31);
            }
            uVar8 = local_6524;
            iVar12 = local_6528;
            iVar9 = local_652c;
            uVar11 = thunk_terror_ui_colour(0x15);
            iVar30 = 0x24;
            if (0x24 < iVar12 * 2) {
              iVar30 = iVar12 << 1;
            }
            iVar12 = iVar12 * 2 + 8;
            uVar38 = iVar30 + 0x24U;
            if ((int)local_68f4 <= (int)(iVar30 + 0x24U)) {
              uVar38 = local_68f4;
            }
            if (iVar12 < 0x23) {
              iVar12 = 0x22;
            }
            iVar9 = (uVar8 * 3 + 0x12) * iVar9;
            uVar13 = (uVar10 - 8) - iVar12;
            uVar8 = local_68f4;
            if ((int)uVar13 < (int)local_68f4) {
              uVar8 = uVar13;
            }
            uVar21 = iVar9 + 0x12;
            if ((int)uVar13 < 0) {
              uVar8 = 0;
            }
            uVar14 = iVar9 + 0x13;
            uVar13 = local_68f8;
            if ((int)uVar21 < (int)local_68f8) {
              uVar13 = uVar21;
            }
            if ((int)uVar21 < 0) {
              uVar13 = 0;
            }
            uVar25 = local_68f8;
            if ((int)uVar14 < (int)local_68f8) {
              uVar25 = uVar14;
            }
            if ((int)uVar21 < -1) {
              uVar25 = 0;
            }
            if ((int)uVar38 < (int)uVar8) {
              do {
                uVar21 = uVar13 << 2 | 3;
                uVar14 = uVar13;
                if ((int)uVar13 < (int)uVar25) {
                  do {
                    if (-1 < (int)(uVar14 | uVar38)) {
                      bVar42 = SBORROW4(local_68f8,uVar14);
                      iVar30 = local_68f8 - uVar14;
                      bVar41 = local_68f8 == uVar14;
                      if ((int)uVar14 < (int)local_68f8) {
                        bVar42 = SBORROW4(local_68f4,uVar38);
                        iVar30 = local_68f4 - uVar38;
                        bVar41 = local_68f4 == uVar38;
                      }
                      if (!bVar41 && iVar30 < 0 == bVar42) {
                        iVar30 = uVar38 * local_68f0;
                        *(char *)((int)local_68d0 + uVar21 + iVar30 + -3) = (char)(uVar11 >> 0x10);
                        iVar9 = uVar14 * 4 + iVar30;
                        *(char *)((int)local_68d0 + iVar9 + 2) = (char)uVar11;
                        *(char *)((int)local_68d0 + iVar9 + 1) = (char)(uVar11 >> 8);
                        *(undefined1 *)((int)local_68d0 + uVar21 + iVar30) = 0xff;
                      }
                    }
                    uVar14 = uVar14 + 1;
                    uVar21 = uVar21 + 4;
                  } while (uVar25 != uVar14);
                }
                uVar38 = uVar38 + 1;
              } while (uVar38 != uVar8);
            }
            uVar11 = 0;
            uVar8 = local_6588;
            if (local_6588 < local_6584) {
              uVar8 = local_6584;
            }
            bVar41 = local_6590[0] < uVar8;
            uVar38 = local_6588;
            if (local_6584 < local_6588) {
              uVar38 = local_6584;
            }
            while( true ) {
              iVar30 = 0x24;
              iVar9 = local_6528 * 2 + 8;
              if (0x24 < local_6528 * 2) {
                iVar30 = local_6528 << 1;
              }
              if (iVar9 < 0x23) {
                iVar9 = 0x22;
              }
              uVar13 = recovered_100020b0((local_68f4 - (local_6528 + iVar30 + iVar9)) + -0x3e,
                                          local_6528 + 4);
              if ((int)uVar13 < 2) {
                uVar13 = 1;
              }
              if (uVar13 <= uVar11) break;
              lVar3 = (ulonglong)local_6524 * (ulonglong)((uint)local_6540 + uVar11);
              uVar13 = (uint)lVar3;
              uVar21 = (PF_PART4(local_6540, 4) + CARRY4((uint)local_6540,uVar11)) * local_6524 +
                       (int)((ulonglong)lVar3 >> 0x20);
              puVar16 = local_6590;
              if (local_6511 != '\0') {
                puVar16 = &local_6550;
              }
              uVar14 = local_654c;
              if (local_6511 == '\0') {
                uVar14 = 0;
              }
              if (uVar14 <= uVar21 && (uint)(uVar13 <= *puVar16) <= uVar14 - uVar21) break;
              thunk_snprintf((char *)&local_180,0x14,&DAT_1000bf09,uVar13,uVar21);
              iVar9 = local_6528 + 4;
              iVar30 = 0x24;
              if (0x24 < local_6528 * 2) {
                iVar30 = local_6528 << 1;
              }
              iVar30 = iVar9 * uVar11 + local_6528 + iVar30;
              uVar14 = iVar30 + 0x30;
              if ((uVar11 & 1) != 0) {
                uVar17 = thunk_terror_ui_colour(0x2c);
                uVar27 = iVar30 + 0x2f;
                uVar37 = uVar27 + iVar9;
                uVar25 = local_68f4;
                if ((int)uVar37 < (int)local_68f4) {
                  uVar25 = uVar37;
                }
                if ((int)uVar37 < 0) {
                  uVar25 = 0;
                }
                uVar37 = local_68f4;
                if ((int)uVar27 < (int)local_68f4) {
                  uVar37 = uVar27;
                }
                if ((int)uVar14 < 1) {
                  uVar37 = 0;
                }
                uVar27 = 0;
                if ((int)local_68f8 < 0) {
                  uVar27 = local_68f8;
                }
                uVar23 = local_68f8;
                if ((int)(uVar31 - 0x14) < (int)local_68f8) {
                  uVar23 = uVar31 - 0x14;
                }
                if ((int)uVar31 < 0x14) {
                  uVar23 = 0;
                }
                if ((int)uVar37 < (int)uVar25) {
                  do {
                    uVar39 = uVar27 << 2 | 3;
                    uVar18 = uVar27;
                    if ((int)uVar27 < (int)uVar23) {
                      do {
                        if (-1 < (int)(uVar18 | uVar37)) {
                          bVar43 = SBORROW4(local_68f8,uVar18);
                          iVar9 = local_68f8 - uVar18;
                          bVar42 = local_68f8 == uVar18;
                          if ((int)uVar18 < (int)local_68f8) {
                            bVar43 = SBORROW4(local_68f4,uVar37);
                            iVar9 = local_68f4 - uVar37;
                            bVar42 = local_68f4 == uVar37;
                          }
                          if (!bVar42 && iVar9 < 0 == bVar43) {
                            iVar9 = uVar37 * local_68f0;
                            *(char *)((int)local_68d0 + uVar39 + iVar9 + -3) =
                                 (char)(uVar17 >> 0x10);
                            iVar12 = uVar18 * 4 + iVar9;
                            *(char *)((int)local_68d0 + iVar12 + 2) = (char)uVar17;
                            *(char *)((int)local_68d0 + iVar12 + 1) = (char)(uVar17 >> 8);
                            *(undefined1 *)((int)local_68d0 + uVar39 + iVar9) = 0xff;
                          }
                        }
                        uVar18 = uVar18 + 1;
                        uVar39 = uVar39 + 4;
                      } while (uVar23 != uVar18);
                    }
                    uVar37 = uVar37 + 1;
                  } while (uVar37 != uVar25);
                }
              }
              recovered_1000af50((int)&local_68fc,0x12,uVar14,(int)&local_180,0x10,0x31);
              if (0 < (int)local_6524) {
                uVar17 = 0;
                uVar25 = iVar30 + 0x2f;
                do {
                  iVar12 = local_6528;
                  iVar9 = local_652c;
                  uVar27 = uVar13 + uVar17;
                  uVar37 = uVar21 + CARRY4(uVar13,uVar17);
                  if ((local_6544 < uVar37 || uVar37 - local_6544 < (uint)(local_6548 <= uVar27)) &&
                     (uVar23 = local_6544 + CARRY4(local_6548,local_6590[0]),
                     uVar37 < uVar23 ||
                     uVar23 - uVar37 < (uint)(uVar27 <= local_6548 + local_6590[0]))) {
                    uVar27 = uVar27 - local_6548;
                    uVar37 = local_652c * ((uintptr_t)(uintptr_t)(uintptr_t)local_6524 * 3 + 0x13) + local_652c * uVar17 + 0x12;
                    uVar23 = (uintptr_t)local_652c * 0x11 + local_652c * (uintptr_t)(uintptr_t)uVar17 * 3 + 0x12;
                    if (uVar8 > uVar27 && ((uVar8 > uVar38 && !bVar41) && uVar27 >= uVar38)) {
                      uVar18 = thunk_terror_ui_colour(0x2b);
                      iVar6 = local_6528;
                      iVar20 = local_652c;
                      uVar24 = iVar12 + iVar30 + 0x33;
                      uVar28 = uVar23 + iVar9 * 2;
                      uVar39 = local_68f4;
                      if ((int)uVar24 < (int)local_68f4) {
                        uVar39 = uVar24;
                      }
                      if ((int)uVar24 < 0) {
                        uVar39 = 0;
                      }
                      uVar24 = local_68f8;
                      if ((int)uVar28 < (int)local_68f8) {
                        uVar24 = uVar28;
                      }
                      if ((int)uVar28 < 0) {
                        uVar24 = 0;
                      }
                      uVar28 = local_68f4;
                      if ((int)uVar25 < (int)local_68f4) {
                        uVar28 = uVar25;
                      }
                      if ((int)uVar14 < 1) {
                        uVar28 = 0;
                      }
                      uVar40 = local_68f8;
                      if ((int)uVar23 < (int)local_68f8) {
                        uVar40 = uVar23;
                      }
                      if ((int)uVar23 < 0) {
                        uVar40 = 0;
                      }
                      if ((int)uVar28 < (int)uVar39) {
                        do {
                          uVar33 = uVar40;
                          uVar34 = uVar40 << 2 | 3;
                          if ((int)uVar40 < (int)uVar24) {
                            do {
                              if (-1 < (int)(uVar33 | uVar28)) {
                                bVar43 = SBORROW4(local_68f8,uVar33);
                                iVar9 = local_68f8 - uVar33;
                                bVar42 = local_68f8 == uVar33;
                                if ((int)uVar33 < (int)local_68f8) {
                                  bVar43 = SBORROW4(local_68f4,uVar28);
                                  iVar9 = local_68f4 - uVar28;
                                  bVar42 = local_68f4 == uVar28;
                                }
                                if (!bVar42 && iVar9 < 0 == bVar43) {
                                  iVar9 = uVar28 * local_68f0;
                                  *(char *)((int)local_68d0 + uVar34 + iVar9 + -3) =
                                       (char)(uVar18 >> 0x10);
                                  iVar12 = uVar33 * 4 + iVar9;
                                  *(char *)((int)local_68d0 + iVar12 + 2) = (char)uVar18;
                                  *(char *)((int)local_68d0 + iVar12 + 1) = (char)(uVar18 >> 8);
                                  *(undefined1 *)((int)local_68d0 + uVar34 + iVar9) = 0xff;
                                }
                              }
                              uVar33 = uVar33 + 1;
                              uVar34 = uVar34 + 4;
                            } while (uVar24 != uVar33);
                          }
                          uVar28 = uVar28 + 1;
                        } while (uVar28 != uVar39);
                      }
                      uVar18 = thunk_terror_ui_colour(0x2b);
                      uVar24 = iVar6 + iVar30 + 0x33;
                      uVar28 = iVar20 + uVar37;
                      uVar39 = local_68f4;
                      if ((int)uVar24 < (int)local_68f4) {
                        uVar39 = uVar24;
                      }
                      if ((int)uVar24 < 0) {
                        uVar39 = 0;
                      }
                      uVar24 = local_68f8;
                      if ((int)uVar28 < (int)local_68f8) {
                        uVar24 = uVar28;
                      }
                      if ((int)uVar28 < 0) {
                        uVar24 = 0;
                      }
                      uVar28 = local_68f4;
                      if ((int)uVar25 < (int)local_68f4) {
                        uVar28 = uVar25;
                      }
                      if ((int)uVar14 < 1) {
                        uVar28 = 0;
                      }
                      uVar40 = local_68f8;
                      if ((int)uVar37 < (int)local_68f8) {
                        uVar40 = uVar37;
                      }
                      if ((int)uVar37 < 0) {
                        uVar40 = 0;
                      }
                      if ((int)uVar28 < (int)uVar39) {
                        do {
                          uVar33 = uVar40;
                          uVar34 = uVar40 << 2 | 3;
                          if ((int)uVar40 < (int)uVar24) {
                            do {
                              if (-1 < (int)(uVar33 | uVar28)) {
                                bVar43 = SBORROW4(local_68f8,uVar33);
                                iVar9 = local_68f8 - uVar33;
                                bVar42 = local_68f8 == uVar33;
                                if ((int)uVar33 < (int)local_68f8) {
                                  bVar43 = SBORROW4(local_68f4,uVar28);
                                  iVar9 = local_68f4 - uVar28;
                                  bVar42 = local_68f4 == uVar28;
                                }
                                if (!bVar42 && iVar9 < 0 == bVar43) {
                                  iVar9 = uVar28 * local_68f0;
                                  *(char *)((int)local_68d0 + uVar34 + iVar9 + -3) =
                                       (char)(uVar18 >> 0x10);
                                  iVar12 = uVar33 * 4 + iVar9;
                                  *(char *)((int)local_68d0 + iVar12 + 2) = (char)uVar18;
                                  *(char *)((int)local_68d0 + iVar12 + 1) = (char)(uVar18 >> 8);
                                  *(undefined1 *)((int)local_68d0 + uVar34 + iVar9) = 0xff;
                                }
                              }
                              uVar33 = uVar33 + 1;
                              uVar34 = uVar34 + 4;
                            } while (uVar24 != uVar33);
                          }
                          uVar28 = uVar28 + 1;
                        } while (uVar28 != uVar39);
                      }
                    }
                    if (uVar27 < local_6590[0]) {
                      uVar15 = 0xe;
                      local_200[0] = *(byte *)((int)local_6594 + uVar27);
                      PF_PART1(local_32c, 0) = str_1000bf11[local_200[0] >> 4];
                      PF_PART1(local_32c, 1) = str_1000bf11[local_200[0] & 0xf];
                      if (0x5eU < (uint)(local_200[0] - 0x20)) {
                        local_200[0] = 0x2e;
                      }
                      if (uVar8 <= uVar27 || ((uVar8 <= uVar38 || bVar41) || uVar27 < uVar38)) {
                        uVar15 = 1;
                      }
                      recovered_1000af50((int)&local_68fc,uVar23,uVar14,(int)&local_32c,2,uVar15);
                      recovered_1000af50((int)&local_68fc,uVar37,uVar14,(int)local_200,1,uVar15);
                    }
                    iVar12 = local_6528;
                    iVar9 = local_652c;
                    uVar39 = local_6588;
                    if (local_6588 == uVar27) {
                      uVar39 = local_6504;
                    }
                    if (local_6588 == uVar27 && uVar39 == 0) {
                      uVar39 = (uint)local_6513;
                      uVar27 = thunk_terror_ui_colour(4);
                      iVar6 = local_6528;
                      iVar20 = local_652c;
                      if (uVar39 == 0) {
                        uVar37 = uVar23;
                      }
                      uVar18 = local_68f8;
                      if ((int)uVar37 < (int)local_68f8) {
                        uVar18 = uVar37;
                      }
                      uVar39 = uVar37 + (iVar9 << (uVar39 ^ 1));
                      if ((int)uVar37 < 0) {
                        uVar18 = 0;
                      }
                      uVar37 = local_68f8;
                      if ((int)uVar39 < (int)local_68f8) {
                        uVar37 = uVar39;
                      }
                      if ((int)uVar39 < 0) {
                        uVar37 = 0;
                      }
                      iVar12 = iVar12 + uVar14;
                      uVar39 = iVar12 + 1U;
                      if ((int)local_68f4 <= (int)(iVar12 + 1U)) {
                        uVar39 = local_68f4;
                      }
                      if (iVar12 < -1) {
                        uVar39 = 0;
                      }
                      uVar24 = local_68f4;
                      if ((int)(iVar12 + 3U) < (int)local_68f4) {
                        uVar24 = iVar12 + 3U;
                      }
                      if (iVar12 < -3) {
                        uVar24 = 0;
                      }
                      if ((int)uVar39 < (int)uVar24) {
                        do {
                          uVar28 = uVar18;
                          uVar40 = uVar18 << 2 | 3;
                          if ((int)uVar18 < (int)uVar37) {
                            do {
                              if (-1 < (int)(uVar28 | uVar39)) {
                                bVar43 = SBORROW4(local_68f8,uVar28);
                                iVar9 = local_68f8 - uVar28;
                                bVar42 = local_68f8 == uVar28;
                                if ((int)uVar28 < (int)local_68f8) {
                                  bVar43 = SBORROW4(local_68f4,uVar39);
                                  iVar9 = local_68f4 - uVar39;
                                  bVar42 = local_68f4 == uVar39;
                                }
                                if (!bVar42 && iVar9 < 0 == bVar43) {
                                  iVar9 = uVar39 * local_68f0;
                                  *(char *)((int)local_68d0 + uVar40 + iVar9 + -3) =
                                       (char)(uVar27 >> 0x10);
                                  iVar12 = uVar28 * 4 + iVar9;
                                  *(char *)((int)local_68d0 + iVar12 + 2) = (char)uVar27;
                                  *(char *)((int)local_68d0 + iVar12 + 1) = (char)(uVar27 >> 8);
                                  *(undefined1 *)((int)local_68d0 + uVar40 + iVar9) = 0xff;
                                }
                              }
                              uVar28 = uVar28 + 1;
                              uVar40 = uVar40 + 4;
                            } while (uVar37 != uVar28);
                          }
                          uVar39 = uVar39 + 1;
                        } while (uVar39 != uVar24);
                      }
                      if (-1 < local_6508) {
                        PF_PART1(local_32c, 0) = str_1000bf11[local_6508];
                        uVar37 = thunk_terror_ui_colour(2);
                        uVar39 = iVar6 + uVar14;
                        uVar27 = local_68f4;
                        if ((int)uVar39 < (int)local_68f4) {
                          uVar27 = uVar39;
                        }
                        uVar18 = uVar23 + iVar20 * 2;
                        if ((int)uVar39 < 0) {
                          uVar27 = 0;
                        }
                        uVar39 = local_68f8;
                        if ((int)uVar18 < (int)local_68f8) {
                          uVar39 = uVar18;
                        }
                        if ((int)uVar18 < 0) {
                          uVar39 = 0;
                        }
                        uVar18 = local_68f4;
                        if ((int)uVar14 < (int)local_68f4) {
                          uVar18 = uVar14;
                        }
                        if ((int)uVar14 < 0) {
                          uVar18 = 0;
                        }
                        uVar24 = local_68f8;
                        if ((int)uVar23 < (int)local_68f8) {
                          uVar24 = uVar23;
                        }
                        if ((int)uVar23 < 0) {
                          uVar24 = 0;
                        }
                        if ((int)uVar18 < (int)uVar27) {
                          do {
                            uVar28 = uVar24 << 2 | 3;
                            uVar40 = uVar24;
                            if ((int)uVar24 < (int)uVar39) {
                              do {
                                if (-1 < (int)(uVar40 | uVar18)) {
                                  bVar43 = SBORROW4(local_68f8,uVar40);
                                  iVar9 = local_68f8 - uVar40;
                                  bVar42 = local_68f8 == uVar40;
                                  if ((int)uVar40 < (int)local_68f8) {
                                    bVar43 = SBORROW4(local_68f4,uVar18);
                                    iVar9 = local_68f4 - uVar18;
                                    bVar42 = local_68f4 == uVar18;
                                  }
                                  if (!bVar42 && iVar9 < 0 == bVar43) {
                                    iVar9 = uVar18 * local_68f0;
                                    *(char *)((int)local_68d0 + uVar28 + iVar9 + -3) =
                                         (char)(uVar37 >> 0x10);
                                    iVar12 = uVar40 * 4 + iVar9;
                                    *(char *)((int)local_68d0 + iVar12 + 2) = (char)uVar37;
                                    *(char *)((int)local_68d0 + iVar12 + 1) = (char)(uVar37 >> 8);
                                    *(undefined1 *)((int)local_68d0 + uVar28 + iVar9) = 0xff;
                                  }
                                }
                                uVar40 = uVar40 + 1;
                                uVar28 = uVar28 + 4;
                              } while (uVar39 != uVar40);
                            }
                            uVar18 = uVar18 + 1;
                          } while (uVar18 != uVar27);
                        }
                        recovered_1000af50((int)&local_68fc,uVar23,uVar14,(int)&local_32c,1,4);
                      }
                    }
                  }
                  uVar17 = uVar17 + 1;
                } while ((int)uVar17 < (int)local_6524);
              }
              uVar11 = uVar11 + 1;
            }
          }
          uVar11 = thunk_terror_ui_colour(0x2d);
          iVar30 = local_6528;
          uVar38 = (uVar10 - 8) - iVar9;
          uVar8 = local_68f4;
          if ((int)uVar38 < (int)local_68f4) {
            uVar8 = uVar38;
          }
          if ((int)uVar38 < 0) {
            uVar8 = 0;
          }
          uVar38 = 0;
          if ((int)local_68f8 < 0) {
            uVar38 = local_68f8;
          }
          uVar13 = local_68f4;
          if ((int)uVar10 < (int)local_68f4) {
            uVar13 = uVar10;
          }
          if ((int)uVar10 < 0) {
            uVar13 = 0;
          }
          uVar21 = local_68f8;
          if ((int)uVar31 < (int)local_68f8) {
            uVar21 = uVar31;
          }
          if ((int)uVar31 < 0) {
            uVar21 = 0;
          }
          if ((int)uVar8 < (int)uVar13) {
            do {
              uVar14 = uVar38 << 2 | 3;
              uVar25 = uVar38;
              if ((int)uVar38 < (int)uVar21) {
                do {
                  if (-1 < (int)(uVar25 | uVar8)) {
                    bVar42 = SBORROW4(local_68f8,uVar25);
                    iVar9 = local_68f8 - uVar25;
                    bVar41 = local_68f8 == uVar25;
                    if ((int)uVar25 < (int)local_68f8) {
                      bVar42 = SBORROW4(local_68f4,uVar8);
                      iVar9 = local_68f4 - uVar8;
                      bVar41 = local_68f4 == uVar8;
                    }
                    if (!bVar41 && iVar9 < 0 == bVar42) {
                      iVar9 = uVar8 * local_68f0;
                      *(char *)((int)local_68d0 + uVar14 + iVar9 + -3) = (char)(uVar11 >> 0x10);
                      iVar12 = uVar25 * 4 + iVar9;
                      *(char *)((int)local_68d0 + iVar12 + 2) = (char)uVar11;
                      *(char *)((int)local_68d0 + iVar12 + 1) = (char)(uVar11 >> 8);
                      *(undefined1 *)((int)local_68d0 + uVar14 + iVar9) = 0xff;
                    }
                  }
                  uVar25 = uVar25 + 1;
                  uVar14 = uVar14 + 4;
                } while (uVar21 != uVar25);
              }
              uVar8 = uVar8 + 1;
            } while (uVar8 != uVar13);
          }
          uVar8 = thunk_terror_ui_colour(3);
          iVar30 = (uintptr_t)iVar30 * 2 + 8;
          if (iVar30 < 0x23) {
            iVar30 = 0x22;
          }
          uVar38 = (uVar10 - 8) - iVar30;
          uVar11 = local_68f4;
          if ((int)uVar38 < (int)local_68f4) {
            uVar11 = uVar38;
          }
          if ((int)uVar38 < 0) {
            uVar11 = 0;
          }
          uVar13 = local_68f4;
          if ((int)(uVar38 + 1) < (int)local_68f4) {
            uVar13 = uVar38 + 1;
          }
          if ((int)uVar38 < -1) {
            uVar13 = 0;
          }
          uVar38 = 0;
          if ((int)local_68f8 < 0) {
            uVar38 = local_68f8;
          }
          uVar21 = local_68f8;
          if ((int)uVar31 < (int)local_68f8) {
            uVar21 = uVar31;
          }
          if ((int)uVar31 < 0) {
            uVar21 = 0;
          }
          if ((int)uVar11 < (int)uVar13) {
            do {
              uVar31 = uVar38 << 2 | 3;
              uVar14 = uVar38;
              if ((int)uVar38 < (int)uVar21) {
                do {
                  if (-1 < (int)(uVar14 | uVar11)) {
                    bVar42 = SBORROW4(local_68f8,uVar14);
                    iVar30 = local_68f8 - uVar14;
                    bVar41 = local_68f8 == uVar14;
                    if ((int)uVar14 < (int)local_68f8) {
                      bVar42 = SBORROW4(local_68f4,uVar11);
                      iVar30 = local_68f4 - uVar11;
                      bVar41 = local_68f4 == uVar11;
                    }
                    if (!bVar41 && iVar30 < 0 == bVar42) {
                      iVar30 = uVar11 * local_68f0;
                      *(char *)((int)local_68d0 + uVar31 + iVar30 + -3) = (char)(uVar8 >> 0x10);
                      iVar9 = uVar14 * 4 + iVar30;
                      *(char *)((int)local_68d0 + iVar9 + 2) = (char)uVar8;
                      *(char *)((int)local_68d0 + iVar9 + 1) = (char)(uVar8 >> 8);
                      *(undefined1 *)((int)local_68d0 + uVar31 + iVar30) = 0xff;
                    }
                  }
                  uVar14 = uVar14 + 1;
                  uVar31 = uVar31 + 4;
                } while (uVar21 != uVar14);
              }
              uVar11 = uVar11 + 1;
            } while (uVar11 != uVar13);
          }
          pcVar32 = &DAT_1000b63b;
          if (local_6511 != '\0') {
            pcVar32 = str_1000bf5d;
          }
          uVar31 = local_6550;
          uVar8 = local_654c;
          if (local_6511 == '\0') {
            uVar8 = 0;
            uVar31 = local_6590[0];
          }
          uVar11 = local_6588;
          if (local_6588 < local_6584) {
            uVar11 = local_6584;
          }
          uVar38 = local_6588;
          if (local_6584 < local_6588) {
            uVar38 = local_6584;
          }
          iVar30 = 0;
          if (uVar38 < uVar11 && uVar11 <= local_6590[0]) {
            iVar30 = uVar11 - uVar38;
          }
          pcVar29 = &DAT_1000b63b;
          if (local_6512 != '\0') {
            pcVar29 = str_1000bf51;
          }
          thunk_snprintf((char *)&local_180,0xa0,str_1000bf22,pcVar29,uVar31,uVar8,
                             local_6548 + local_6588,local_6544 + CARRY4(local_6548,local_6588),
                             iVar30,0,pcVar32);
          uVar8 = recovered_100020b0(local_68f8 - 0x1e,local_652c);
          iVar30 = local_6528;
          uVar22 = thunk_strlen((char *)&local_180);
          if (0 < (int)uVar8) {
            if (uVar22 < uVar8) {
              uVar8 = uVar22;
            }
            iVar30 = (uintptr_t)iVar30 * 2 + 8;
            if (iVar30 < 0x23) {
              iVar30 = 0x22;
            }
            recovered_1000af50((int)&local_68fc,10,(uVar10 - iVar30) + -5,(int)&local_180,uVar8,0x31
                              );
          }
          uVar8 = recovered_100020b0(local_68f8 - 0x1e,local_652c);
          iVar30 = local_6528;
          uVar22 = thunk_strlen(acStack_3ee);
          if (0 < (int)uVar8) {
            if (uVar22 < uVar8) {
              uVar8 = uVar22;
            }
            recovered_1000af50((int)&local_68fc,10,(uVar10 - iVar30) + -3,(int)acStack_3ee,uVar8,1);
          }
          recovered_10007078((int)&local_68fc);
          pixels = local_68d0;
          uVar10 = local_68f0;
          uVar31 = local_68f4;
          uVar8 = local_68f8;
          uVar11 = thunk_terror_ui_colour(0);
          thunk_terror_ui_window_present(&local_68fc,str_1000b490,pixels,uVar8,uVar31,uVar10,uVar11);
        }
        else {
          local_650d = 1;
          recovered_10007078((int)&local_68fc);
          local_650d = 0;
          pf_app_terror_ui_window_present_rect(&local_68fc,local_65b4,local_65b0,local_65ac,local_65a8);
        }
      }
      local_6534 = local_6534 + 1;
      uVar8 = 5;
      if ((local_6b80 & 2) == 0) {
        uVar8 = 0x14;
      }
      if (local_6530 - 1 < 0x1f) {
        uVar8 = 2;
      }
      thunk_terror_ui_yield_frames(uVar8);
      uVar31 = 0;
      uVar8 = uVar36;
    } while (local_650b != '\0');
    iVar30 = Ram40010800;
    if ((iVar30 == 0x50414d57) && (iVar30 = Ram40010804, iVar30 != 0)) {
      uVar8 = Ram40010808;
      bVar41 = 0xb < uVar8;
      if (bVar41) {
        uVar8 = Ram40010808;
      }
      if ((bVar41 && 0x53 < uVar8) && (pcVar5 = (code *)UINT_40010850, pcVar5 != (code *)0x0)) {
        (*pcVar5)(local_6594);
      }
    }
    iVar30 = Ram40010800;
    if ((iVar30 == 0x50414d57) && (iVar30 = Ram40010804, iVar30 != 0)) {
      uVar8 = Ram40010808;
      bVar41 = 0xb < uVar8;
      if (bVar41) {
        uVar8 = Ram40010808;
      }
      if ((bVar41 && 0x53 < uVar8) && (pcVar5 = (code *)UINT_40010850, pcVar5 != (code *)0x0)) {
        (*pcVar5)(local_6568);
      }
    }
    iVar30 = Ram40010800;
    if ((iVar30 == 0x50414d57) && (iVar30 = Ram40010804, iVar30 != 0)) {
      uVar8 = Ram40010808;
      bVar41 = 0xb < uVar8;
      if (bVar41) {
        uVar8 = Ram40010808;
      }
      if ((bVar41 && 0x53 < uVar8) && (pcVar5 = (code *)UINT_40010850, pcVar5 != (code *)0x0)) {
        (*pcVar5)(local_656c);
      }
    }
    iVar30 = Ram40010800;
    if ((iVar30 == 0x50414d57) && (iVar30 = Ram40010804, iVar30 != 0)) {
      uVar8 = Ram40010808;
      bVar41 = 0xb < uVar8;
      if (bVar41) {
        uVar8 = Ram40010808;
      }
      if ((bVar41 && 0x53 < uVar8) && (pcVar5 = (code *)UINT_40010850, pcVar5 != (code *)0x0)) {
        (*pcVar5)(local_6560);
      }
    }
    terror_ui_scrollbar_release(auStack_65bc);
    thunk_terror_ui_window_close(&local_68fc);
    iVar9 = 0;
  }
  return iVar9;
}

#undef DAT_1000b63b
#undef DAT_1000b7d0
#undef DAT_1000be64
#undef DAT_1000be6e
#undef DAT_1000be73
#undef DAT_1000bf09
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_400109e8
#undef DAT_40010a20
#undef DAT_40010a50
#undef Ram40010800
#undef Ram40010804
#undef Ram40010808
#undef Ram400109e8
#undef Ram40010a20
#undef UINT_40010828
#undef UINT_4001082c
#undef UINT_4001084c
#undef UINT_40010850
#undef UINT_400108bc
#undef UINT_40010984
#undef UINT_40010a30
#undef _DAT_40010a50
#undef str_1000b490
#undef str_1000b49b
#undef str_1000b4bf
#undef str_1000b577
#undef str_1000b57d
#undef str_1000b583
#undef str_1000ba6b
#undef str_1000ba80
#undef str_1000babc
#undef str_1000bace
#undef str_1000bc63
#undef str_1000bc89
#undef str_1000bca9
#undef str_1000bccf
#undef str_1000bd87
#undef str_1000bd91
#undef str_1000bdbc
#undef str_1000bdd7
#undef str_1000bdea
#undef str_1000be24
#undef str_1000be32
#undef str_1000be5d
#undef str_1000be77
#undef str_1000be81
#undef str_1000be88
#undef str_1000be9d
#undef str_1000bed2
#undef str_1000bee9
#undef str_1000bef6
#undef str_1000befd
#undef str_1000bf11
#undef str_1000bf22
#undef str_1000bf51
#undef str_1000bf5d
#undef auStack_6ba8
#undef auStack_6930
#undef auStack_65bc
#undef abStack_64f8
#undef abStack_3474
#undef acStack_3ee
#undef auStack_34c
#undef auStack_33c
#undef auStack_16c
#undef auStack_97
#undef local_6b80
#undef local_6b7c
#undef local_6b78
#undef local_6b74
#undef local_6b70
#undef local_6b6c
#undef local_6900
#undef local_68fc
#undef local_68f8
#undef local_68f4
#undef local_68f0
#undef local_68d0
#undef local_68c0
#undef local_65b4
#undef local_65b0
#undef local_65ac
#undef local_65a8
#undef local_6594
#undef local_6590
#undef local_6588
#undef local_6584
#undef local_6580
#undef local_656c
#undef local_6568
#undef local_6564
#undef local_6560
#undef local_655c
#undef local_6558
#undef local_6550
#undef local_654c
#undef local_6548
#undef local_6544
#undef local_6540
#undef local_6538
#undef local_6534
#undef local_6530
#undef local_652c
#undef local_6528
#undef local_6524
#undef local_6520
#undef local_651c
#undef local_6518
#undef local_6514
#undef local_6513
#undef local_6512
#undef local_6511
#undef local_6510
#undef local_650e
#undef local_650d
#undef local_650c
#undef local_650b
#undef local_650a
#undef local_6509
#undef local_6508
#undef local_6504
#undef local_6500
#undef local_64fc
#undef local_32c
#undef local_314
#undef local_310
#undef local_30c
#undef local_308
#undef local_200
#undef local_1fc
#undef local_1ec
#undef local_1e8
#undef local_1d8
#undef local_180
#undef local_17c
#undef local_178
#undef local_174
#undef local_170
#undef local_158
#undef local_154
#undef local_150
#undef local_14c
#undef local_148
#undef local_144
#undef local_140
#undef local_13c
#undef local_138
#undef local_134
#undef local_130
#undef local_12c
#undef local_128
#undef local_124
#undef local_120
#undef local_11c

#undef DAT_1000b5e7
#define DAT_1000b5e7 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2cbU)))
#undef DAT_1000b7d0
#define DAT_1000b7d0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4b4U)))
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
#undef str_1000b5c2
#define str_1000b5c2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2a6U)))
#undef str_1000b5d4
#define str_1000b5d4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2b8U)))
#define local_24 (*(int *)(pf_stack_frame + 28))
#define local_20 (*(int *)(pf_stack_frame + 32))
#define local_30 (*(void * (*)[12])(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006910
 */

void recovered_10006910(int param_1)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  code *pcVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;

  iVar2 = recovered_10007198(param_1,(byte *)str_1000b5c2);
  if (iVar2 != 0) {
    thunk_snprintf((char *)(param_1 + 0x650e),0xa0,&DAT_1000b7d0,str_1000b5d4);
    return;
  }
  iVar2 = Ram40010800;
  if ((iVar2 == 0x50414d57) && (iVar2 = Ram40010804, iVar2 != 0)) {
    uVar3 = Ram40010808;
    bVar4 = 0xb < uVar3;
    if (bVar4) {
      uVar3 = Ram40010808;
    }
    if ((bVar4 && 0x53 < uVar3) && (pcVar1 = (code *)UINT_40010850, pcVar1 != (code *)0x0)) {
      (*pcVar1)(*(void **)(param_1 + 0x390));
    }
  }
  *(undefined4 *)(param_1 + 0x390) = 0;
  thunk_memset((void *)(param_1 + 900),0,0xc);
  *(undefined4 *)(param_1 + 0x3d4) = 0x10;
  *(undefined4 *)(param_1 + 0x3d0) = 8;
  thunk_memset(local_30,0,0x18);
  iVar2 = Ram40010800;
  if ((iVar2 == 0x50414d57) && (iVar2 = Ram40010804, iVar2 != 0)) {
    uVar3 = Ram40010808;
    bVar4 = 0xb < uVar3;
    if (bVar4) {
      uVar3 = Ram40010808;
    }
    if (((bVar4 && 0x17b < uVar3) && (pcVar1 = (code *)UINT_40010978, pcVar1 != (code *)0x0)) &&
       (uVar3 = (*pcVar1)(&DAT_1000b5e7,1,0xc0000001,0,local_30), uVar3 != 0)) {
      iVar2 = Ram40010800;
      if (local_24 == 0) {
        local_24 = 8;
      }
      *(int *)(param_1 + 0x3d0) = local_24;
      if (local_20 == 0) {
        local_20 = 0x10;
      }
      *(int *)(param_1 + 0x3d4) = local_20;
      if ((iVar2 == 0x50414d57) && (iVar2 = Ram40010804, iVar2 != 0)) {
        uVar3 = Ram40010808;
        bVar4 = 0xb < uVar3;
        if (bVar4) {
          uVar3 = Ram40010808;
        }
        if ((bVar4 && 0x53 < uVar3) && (pcVar1 = (code *)UINT_40010850, pcVar1 != (code *)0x0)) {
          (*pcVar1)(local_30[0]);
        }
      }
    }
  }
  thunk_snprintf((char *)(param_1 + 0x650e),0xa0,&DAT_1000b7d0,str_1000b5d4);
  return;
}

#undef DAT_1000b5e7
#undef DAT_1000b7d0
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef Ram40010800
#undef Ram40010804
#undef Ram40010808
#undef UINT_40010850
#undef UINT_40010978
#undef str_1000b5c2
#undef str_1000b5d4
#undef local_24
#undef local_20
#undef local_30

#undef DAT_1000b7d0
#define DAT_1000b7d0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4b4U)))
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
#undef UINT_400108bc
#define UINT_400108bc (*(uint *)(0x400108bcU))
#undef str_1000b641
#define str_1000b641 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x325U)))
#undef str_1000b64f
#define str_1000b64f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x333U)))
#undef str_1000b663
#define str_1000b663 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x347U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006af8
 */

void recovered_10006af8(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  uint uVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  char *arg3;
  bool bVar6;

  cVar1 = *(char *)(param_1 + 0x3ea);
  bVar6 = cVar1 == '\x01';
  if (bVar6) {
    cVar1 = *(char *)(param_1 + 0x3f3);
  }
  if (bVar6 && cVar1 == '\0') {
    *(undefined1 *)(param_1 + 0x3f3) = 1;
    arg3 = str_1000b663;
  }
  else {
    *(undefined1 *)(param_1 + 0x3f3) = 0;
    iVar3 = Ram40010800;
    if ((iVar3 == 0x50414d57) && (iVar3 = Ram40010804, iVar3 != 0)) {
      uVar2 = Ram40010808;
      bVar6 = 0xb < uVar2;
      if (bVar6) {
        uVar2 = Ram40010808;
      }
      if ((bVar6 && 0x53 < uVar2) && (pcVar4 = (code *)UINT_40010850, pcVar4 != (code *)0x0)) {
        (*pcVar4)(*(void **)(param_1 + 0x394));
      }
    }
    *(undefined4 *)(param_1 + 0x394) = 0;
    *(undefined2 *)(param_1 + 0x3f2) = 0;
    iVar5 = -1;
    *(undefined1 *)(param_1 + 0x3eb) = 0;
    *(undefined4 *)(param_1 + 0x378) = 0;
    *(undefined4 *)(param_1 + 0x3f4) = 0xffffffff;
    *(undefined1 *)(param_1 + 0x380) = 0;
    *(undefined4 *)(param_1 + 0x374) = 0;
    *(undefined4 *)(param_1 + 0x36c) = 0;
    iVar3 = Ram40010800;
    *(undefined4 *)(param_1 + 0x3b4) = 0;
    *(undefined4 *)(param_1 + 0x3b8) =
         *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 4);
    *(undefined4 *)(param_1 + 0x3bc) =
         *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 8);
    *(undefined4 *)(param_1 + 0x3c0) =
         *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 12);
    *(undefined1 *)(param_1 + 0x3ea) = 0;
    if ((iVar3 == 0x50414d57) && (iVar3 = Ram40010804, iVar3 != 0)) {
      uVar2 = Ram40010808;
      bVar6 = 0xb < uVar2;
      if (bVar6) {
        uVar2 = Ram40010808;
      }
      if ((bVar6 && 0xbf < uVar2) && (pcVar4 = (code *)UINT_400108bc, pcVar4 != (code *)0x0)) {
        iVar5 = (*pcVar4)();
      }
    }
    recovered_10007980(iVar5,str_1000b641,(undefined1 *)(param_1 + 0x404));
    arg3 = str_1000b64f;
  }
  thunk_snprintf((char *)(param_1 + 0x650e),0xa0,&DAT_1000b7d0,arg3);
  return;
}

#undef DAT_1000b7d0
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef Ram40010800
#undef Ram40010804
#undef Ram40010808
#undef UINT_40010850
#undef UINT_400108bc
#undef str_1000b641
#undef str_1000b64f
#undef str_1000b663

#undef DAT_1000b63b
#define DAT_1000b63b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x31fU)))
#undef DAT_1000b69e
#define DAT_1000b69e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x382U)))
#undef DAT_1000b7d0
#define DAT_1000b7d0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4b4U)))
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
#undef str_1000b663
#define str_1000b663 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x347U)))
#undef str_1000b6a3
#define str_1000b6a3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x387U)))
#undef str_1000b775
#define str_1000b775 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x459U)))
#undef str_1000b79a
#define str_1000b79a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x47eU)))
#undef str_1000b7ae
#define str_1000b7ae (*(char (*)[1])(((uintptr_t)pf_module_state + 0x492U)))
#undef str_1000b7c4
#define str_1000b7c4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4a8U)))
#define local_6141 (*(byte (*)[24897])(pf_stack_frame + 31))
#define local_30bc (*(void * *)(pf_stack_frame + 12452))
#define local_30b8 (*(int *)(pf_stack_frame + 12456))
#define local_30b4 (*(byte *)(pf_stack_frame + 12460))
#define local_30ad (*(byte (*)[12461])(pf_stack_frame + 12467))
#define local_28 (*(uint (*)[10])(pf_stack_frame + 24888))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006c54
 */

undefined4 recovered_10006c54(int param_1,byte *param_2,int param_3)

{
  unsigned char pf_stack_frame[24960] __attribute__((aligned(16))) = {0};

  char cVar1;
  code *pcVar2;
  byte bVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  uint extraout_r3 = 0;
  char *arg3;
  int iVar7;
  byte *pbVar8;
  undefined4 uVar9;
  uint uVar10;

  uVar5 = recovered_100077e4((char *)param_2);
  if (uVar5 != 0x7fffffff) {
    uVar9 = recovered_10007bc8(param_1,uVar5);
    return uVar9;
  }
  pbVar8 = &DAT_1000b63b;
  if (param_2 != (byte *)0x0) {
    pbVar8 = param_2;
  }
  bVar3 = *pbVar8;
  if (bVar3 == 0x5b) {
    iVar7 = 1;
    uVar5 = 0;
    while (bVar3 = pbVar8[iVar7], bVar3 != 0 && bVar3 != 0x5d) {
      iVar7 = iVar7 + 1;
      if (uVar5 + 1 < 0x80) {
        local_30ad[uVar5] = bVar3;
        uVar5 = uVar5 + 1;
      }
    }
    local_30ad[uVar5] = 0;
    uVar5 = 0x7fffffff;
    uVar10 = (uint)(bVar3 == 0x5d);
    if ((bVar3 == 0x5d) && (iVar7 + 1U < 0x82)) {
      uVar5 = recovered_100077e4((char *)local_30ad);
    }
    if (pbVar8[iVar7 + uVar10] == 0x5c) {
      uVar10 = uVar10 + 1;
    }
    pbVar8 = pbVar8 + iVar7 + uVar10;
    bVar3 = *pbVar8;
  }
  else {
    uVar5 = 0xffffffff;
  }
  uVar10 = 0;
  if (bVar3 != 0) {
    uVar6 = 0;
    do {
      uVar10 = uVar6 + 1;
      local_6141[uVar6] = bVar3;
      if (0x3083 < uVar10) break;
      bVar3 = pbVar8[uVar6 + 1];
      uVar6 = uVar10;
    } while (bVar3 != 0);
  }
  local_6141[uVar10] = 0;
  if ((uVar5 < 0x7fffffff) &&
     (iVar7 = thunk_strcmp((char *)local_6141,&DAT_1000b69e), iVar7 == 0)) {
    uVar9 = recovered_10007bc8(param_1,uVar5);
  }
  else if (param_3 == 0) {
    uVar9 = 0;
    thunk_memset(&local_30bc,0,0xc);
    bVar4 = recovered_100073e0(param_2,local_28,local_30ad,extraout_r3);
    if (bVar4) {
      cVar1 = *(char *)(param_1 + 0x3ea);
      bVar4 = cVar1 == '\x01';
      if (bVar4) {
        cVar1 = *(char *)(param_1 + 0x3f3);
      }
      if (bVar4 && cVar1 == '\0') {
        *(undefined1 *)(param_1 + 0x3f3) = 1;
        arg3 = str_1000b663;
      }
      else {
        *(undefined1 *)(param_1 + 0x3f3) = 0;
        iVar7 = recovered_100075c4(local_28[0],local_30ad,(uint *)&local_30bc);
        if (iVar7 == 0) {
          arg3 = str_1000b79a;
        }
        else if (((local_30b4 & 2) == 0) && ((local_30b8 == 0 || (local_30bc != (void *)0x0)))) {
          iVar7 = Ram40010800;
          if ((iVar7 == 0x50414d57) && (iVar7 = Ram40010804, iVar7 != 0)) {
            uVar5 = Ram40010808;
            bVar4 = 0xb < uVar5;
            if (bVar4) {
              uVar5 = Ram40010808;
            }
            if ((bVar4 && 0x53 < uVar5) && (pcVar2 = (code *)UINT_40010850, pcVar2 != (code *)0x0))
            {
              (*pcVar2)(*(void **)(param_1 + 0x394));
            }
          }
          *(undefined2 *)(param_1 + 0x3f2) = 0;
          *(undefined4 *)(param_1 + 0x3f4) = 0xffffffff;
          *(undefined4 *)(param_1 + 0x394) = 0;
          *(undefined1 *)(param_1 + 0x3eb) = 0;
          *(undefined4 *)(param_1 + 0x378) = 0;
          *(undefined1 *)(param_1 + 0x380) = 0;
          *(undefined4 *)(param_1 + 0x374) = 0;
          iVar7 = Ram40010800;
          *(undefined4 *)(param_1 + 0x3b4) = 0;
          *(undefined4 *)(param_1 + 0x3b8) =
               *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 4);
          *(undefined4 *)(param_1 + 0x3bc) =
               *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 8);
          *(undefined4 *)(param_1 + 0x3c0) =
               *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 12);
          *(undefined1 *)(param_1 + 0x3ea) = 0;
          if ((iVar7 == 0x50414d57) && (iVar7 = Ram40010804, iVar7 != 0)) {
            uVar5 = Ram40010808;
            bVar4 = 0xb < uVar5;
            if (bVar4) {
              uVar5 = Ram40010808;
            }
            if ((bVar4 && 0x53 < uVar5) && (pcVar2 = (code *)UINT_40010850, pcVar2 != (code *)0x0))
            {
              (*pcVar2)(*(void **)(param_1 + 0x368));
            }
          }
          *(int *)(param_1 + 0x370) = local_30b8;
          *(int *)(param_1 + 0x36c) = local_30b8;
          *(void **)(param_1 + 0x368) = local_30bc;
          *(uint *)(param_1 + 0x398) = local_28[0];
          recovered_10007980(local_28[0],(char *)local_30ad,(undefined1 *)(param_1 + 0x404));
          uVar9 = 1;
          arg3 = str_1000b7c4;
        }
        else {
          iVar7 = Ram40010800;
          arg3 = str_1000b7ae;
          if ((iVar7 == 0x50414d57) && (iVar7 = Ram40010804, iVar7 != 0)) {
            uVar5 = Ram40010808;
            bVar4 = 0xb < uVar5;
            if (bVar4) {
              uVar5 = Ram40010808;
            }
            if ((bVar4 && 0x53 < uVar5) && (pcVar2 = (code *)UINT_40010850, pcVar2 != (code *)0x0))
            {
              (*pcVar2)(local_30bc);
              arg3 = str_1000b7ae;
            }
          }
        }
      }
    }
    else {
      arg3 = str_1000b775;
    }
    thunk_snprintf((char *)(param_1 + 0x650e),0xa0,&DAT_1000b7d0,arg3);
  }
  else {
    thunk_snprintf((char *)(param_1 + 0x650e),0xa0,&DAT_1000b7d0,str_1000b6a3);
    uVar9 = 0;
  }
  return uVar9;
}

#undef DAT_1000b63b
#undef DAT_1000b69e
#undef DAT_1000b7d0
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef Ram40010800
#undef Ram40010804
#undef Ram40010808
#undef UINT_40010850
#undef str_1000b663
#undef str_1000b6a3
#undef str_1000b775
#undef str_1000b79a
#undef str_1000b7ae
#undef str_1000b7c4
#undef local_6141
#undef local_30bc
#undef local_30b8
#undef local_30b4
#undef local_30ad
#undef local_28

#define auStack_28 (*(undefined4 (*)[10])(pf_stack_frame + 216))
#define local_cc (*(int *)(pf_stack_frame + 52))
#define local_c8 (*(int *)(pf_stack_frame + 56))
#define local_c4 (*(int *)(pf_stack_frame + 60))
#define local_c0 (*(int *)(pf_stack_frame + 64))
#define auStack_e4 (*(undefined1 (*)[228])(pf_stack_frame + 28))
#define auStack_d0 (*(undefined1 (*)[208])(pf_stack_frame + 48))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007078
 */

void recovered_10007078(int param_1)

{
  unsigned char pf_stack_frame[288] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;

  recovered_10009f38(param_1,auStack_28);
  iVar1 = *(int *)(param_1 + 0x3d4);
  iVar2 = 0x24;
  if (0x24 < iVar1 * 2) {
    iVar2 = iVar1 << 1;
  }
  iVar1 = iVar1 * 2 + 8;
  if (iVar1 < 0x23) {
    iVar1 = 0x22;
  }
  iVar1 = (*(int *)(param_1 + 8) - (iVar2 + iVar1)) + -0x2c;
  if (iVar1 < 0xf) {
    iVar1 = 0xe;
  }
  thunk_pf_app_scrollbars_layout(10,iVar2 + 0x28,*(int *)(param_1 + 4) + -0x14,iVar1 + -0xe,auStack_28,
                     (void *)0x0,auStack_e4);
  if (*(char *)(param_1 + 0x3ef) == '\0') {
    pf_app_terror_ui_scrollbar_capture((void *)(param_1 + 0x340),(void *)param_1,local_cc,local_c8,local_c4,local_c0
                      );
  }
  terror_ui_scrollbar_draw((void *)param_1,auStack_d0,*(uint *)(param_1 + 0x3cc));
  return;
}

#undef auStack_28
#undef local_cc
#undef local_c8
#undef local_c4
#undef local_c0
#undef auStack_e4
#undef auStack_d0

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
 * Address: 0x10007148
 */

void recovered_10007148(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  code *UNRECOVERED_JUMPTABLE;
  void *in_r0;
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
                    /* WARNING: Could not recover jumptable at 0x10007194. Too many branches */
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

#undef DAT_1000b63c
#define DAT_1000b63c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x320U)))
#undef DAT_1000b7d0
#define DAT_1000b7d0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4b4U)))
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
#undef str_1000b5e9
#define str_1000b5e9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2cdU)))
#undef str_1000b601
#define str_1000b601 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2e5U)))
#undef str_1000b62b
#define str_1000b62b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x30fU)))
#define abStack_30ad (*(byte (*)[12461])(pf_stack_frame + 35))
#define local_30bc (*(void * *)(pf_stack_frame + 20))
#define local_30b8 (*(uint *)(pf_stack_frame + 24))
#define local_30b4 (*(byte *)(pf_stack_frame + 28))
#define local_28 (*(uint (*)[10])(pf_stack_frame + 12456))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007198
 */

undefined4 recovered_10007198(int param_1,byte *param_2)

{
  unsigned char pf_stack_frame[12528] __attribute__((aligned(16))) = {0};

  byte bVar1;
  byte bVar2;
  byte bVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint extraout_r3 = 0;
  char *arg3;
  undefined4 uVar9;
  uint uVar10;
  uint uVar11;

  uVar9 = 0;
  thunk_memset(&local_30bc,0,0xc);
  bVar5 = recovered_100073e0(param_2,local_28,abStack_30ad,extraout_r3);
  arg3 = str_1000b5e9;
  if (bVar5) {
    arg3 = str_1000b5e9;
    iVar6 = recovered_100075c4(local_28[0],abStack_30ad,(uint *)&local_30bc);
    if (iVar6 != 0) {
      if ((((local_30b4 & 2) == 0) && (local_30bc != (void *)0x0)) && (0xb < local_30b8)) {
        uVar11 = 0x10007254;
        iVar6 = thunk_memcmp(local_30bc,&DAT_1000b63c,4);
        if (iVar6 == 0) {
          bVar1 = *(byte *)((int)local_30bc + 4);
          uVar10 = (uint)bVar1;
          uVar8 = (uint)*(byte *)((int)local_30bc + 7);
          if (uVar8 == 0) {
            uVar8 = 0x100;
          }
          if (0xffffffdf < uVar10 - 0x21) {
            bVar2 = *(byte *)((int)local_30bc + 5);
            uVar7 = bVar2 - 0x21;
            bVar5 = 0xffffffdf < uVar7;
            if (bVar5) {
              uVar11 = (uint)*(byte *)((int)local_30bc + 8);
              uVar7 = uVar10 + 7;
            }
            if (((bVar5 && uVar7 >> 3 <= uVar11) &&
                (bVar3 = *(byte *)((int)local_30bc + 6), uVar8 + bVar3 < 0x101)) &&
               (local_30b8 - 0xc == (int)(short)uVar11 * (int)(short)(ushort)bVar2 * uVar8)) {
              iVar6 = Ram40010800;
              if ((iVar6 == 0x50414d57) && (iVar6 = Ram40010804, iVar6 != 0)) {
                uVar7 = Ram40010808;
                bVar5 = 0xb < uVar7;
                if (bVar5) {
                  uVar7 = Ram40010808;
                }
                if ((bVar5 && 0x53 < uVar7) &&
                   (pcVar4 = (code *)UINT_40010850, pcVar4 != (code *)0x0)) {
                  (*pcVar4)(*(void **)(param_1 + 0x390));
                }
              }
              *(int *)(param_1 + 900) = (int)local_30bc + 0xc;
              arg3 = str_1000b62b;
              uVar9 = 1;
              *(short *)(param_1 + 0x388) = (short)uVar8;
              *(uint *)(param_1 + 0x3d4) = (uint)bVar2;
              *(uint *)(param_1 + 0x3d0) = uVar10;
              *(byte *)(param_1 + 0x38d) = bVar3;
              *(char *)(param_1 + 0x38c) = (char)uVar11;
              *(byte *)(param_1 + 0x38b) = bVar2;
              *(byte *)(param_1 + 0x38a) = bVar1;
              *(void **)(param_1 + 0x390) = local_30bc;
              goto LAB_100072e8;
            }
          }
        }
      }
      iVar6 = Ram40010800;
      arg3 = str_1000b601;
      if ((iVar6 == 0x50414d57) && (iVar6 = Ram40010804, iVar6 != 0)) {
        uVar11 = Ram40010808;
        bVar5 = uVar11 < 0xc;
        if (!bVar5) {
          uVar11 = Ram40010808;
        }
        if ((!(bVar5 || uVar11 < 0x54)) && (pcVar4 = (code *)UINT_40010850, pcVar4 != (code *)0x0))
        {
          arg3 = str_1000b601;
          (*pcVar4)(local_30bc);
        }
      }
    }
  }
LAB_100072e8:
  thunk_snprintf((char *)(param_1 + 0x650e),0xa0,&DAT_1000b7d0,arg3);
  return uVar9;
}

#undef DAT_1000b63c
#undef DAT_1000b7d0
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef Ram40010800
#undef Ram40010804
#undef Ram40010808
#undef UINT_40010850
#undef str_1000b5e9
#undef str_1000b601
#undef str_1000b62b
#undef abStack_30ad
#undef local_30bc
#undef local_30b8
#undef local_30b4
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
#undef UINT_400108bc
#define UINT_400108bc (*(uint *)(0x400108bcU))
#define local_a0 (*(byte (*)[160])(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100073e0
 */

bool recovered_100073e0(byte *param_1,uint *param_2,byte *param_3,uint param_4)

{
  unsigned char pf_stack_frame[208] __attribute__((aligned(16))) = {0};

  code *pcVar1;
  ulong uVar2;
  uint uVar3;
  byte *pbVar4;
  int iVar5;
  uint uVar6;
  byte bVar7;
  uint uVar8;
  bool bVar9;

  bVar9 = false;
  if (param_1 != (byte *)0x0) {
    param_4 = (uint)*param_1;
  }
  if (param_1 != (byte *)0x0 && param_4 != 0) {
    uVar2 = thunk_strlen((char *)param_1);
    pbVar4 = (byte *)0x3084;
    if (uVar2 < 0x3085) {
      if (*param_1 == 0x5b) {
        iVar5 = 1;
        uVar3 = 0;
        while (bVar7 = param_1[iVar5], bVar7 != 0 && bVar7 != 0x5d) {
          iVar5 = iVar5 + 1;
          if (uVar3 + 1 < 0x80) {
            local_a0[uVar3] = bVar7;
            uVar3 = uVar3 + 1;
          }
        }
        local_a0[uVar3] = 0;
        uVar8 = (uint)(bVar7 == 0x5d);
        uVar3 = 0x7fffffff;
        if ((bVar7 == 0x5d) && (iVar5 + 1U < 0x82)) {
          uVar3 = recovered_100077e4((char *)local_a0);
        }
        if (param_1[iVar5 + uVar8] == 0x5c) {
          uVar8 = uVar8 + 1;
        }
        pbVar4 = param_1 + uVar8;
        param_1 = pbVar4 + iVar5;
      }
      else {
        uVar3 = 0xffffffff;
      }
      if (param_3 != (byte *)0x0) {
        bVar7 = *param_1;
        uVar8 = 0;
        if (bVar7 != 0) {
          pbVar4 = (byte *)0x3083;
          uVar6 = 0;
          do {
            uVar8 = uVar6 + 1;
            param_3[uVar6] = bVar7;
            if (0x3083 < uVar8) break;
            bVar7 = param_1[uVar6 + 1];
            uVar6 = uVar8;
          } while (bVar7 != 0);
        }
        param_3[uVar8] = 0;
      }
      if (param_2 != (uint *)0x0) {
        *param_2 = uVar3;
      }
      if (uVar3 != 0x7fffffff) {
        pbVar4 = (byte *)(uint)*param_3;
      }
      if (uVar3 != 0x7fffffff && pbVar4 != (byte *)0x0) {
        if ((int)uVar3 < 0) {
          uVar3 = 0xffffffff;
          iVar5 = Ram40010800;
          if ((iVar5 == 0x50414d57) && (iVar5 = Ram40010804, iVar5 != 0)) {
            uVar8 = Ram40010808;
            bVar9 = 0xb < uVar8;
            if (bVar9) {
              uVar8 = Ram40010808;
            }
            if ((bVar9 && 0xbf < uVar8) && (pcVar1 = (code *)UINT_400108bc, pcVar1 != (code *)0x0))
            {
              uVar3 = (*pcVar1)();
            }
          }
          *param_2 = uVar3;
        }
        else {
          uVar3 = *param_2;
        }
        bVar9 = uVar3 < 0x80000000;
      }
    }
  }
  return bVar9;
}

#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef Ram40010800
#undef Ram40010804
#undef Ram40010808
#undef UINT_400108bc
#undef local_a0

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
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100075c4
 */

undefined4 recovered_100075c4(int param_1,char *param_2,uint *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  uint uVar2;
  undefined4 uVar3;
  void *ptr;
  uint uVar4;
  bool bVar5;
  bool bVar6;

  if (param_3 == (uint *)0x0) {
    return 0;
  }
  iVar1 = Ram40010800;
  if ((iVar1 == 0x50414d57) && (iVar1 = Ram40010804, iVar1 != 0)) {
    uVar2 = Ram40010808;
    bVar5 = 0xb < uVar2;
    if (bVar5) {
      uVar2 = Ram40010808;
    }
    if ((bVar5 && 0x21f < uVar2) && (iVar1 = Ram40010a1c, iVar1 != 0)) {
      UNRECOVERED_JUMPTABLE = (code *)Ram40010a1c;
                    /* WARNING: Could not recover jumptable at 0x100076b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (*UNRECOVERED_JUMPTABLE)(param_1);
      return uVar3;
    }
  }
  iVar1 = Ram40010800;
  if ((iVar1 == 0x50414d57) && (iVar1 = Ram40010804, iVar1 != 0)) {
    uVar2 = Ram40010808;
    bVar6 = 0xb < uVar2;
    bVar5 = uVar2 == 0xc;
    if (bVar6) {
      uVar2 = Ram40010808;
      bVar5 = uVar2 == 0xcb;
    }
    if ((bVar6 && 0xca < uVar2) && !bVar5) {
      UNRECOVERED_JUMPTABLE = (code *)UINT_400108c8;
      if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
        return 0;
      }
      uVar2 = (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3);
      goto LAB_100076d4;
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
  uVar2 = Ram40010808;
  bVar5 = 0xb < uVar2;
  if (bVar5) {
    uVar2 = Ram40010808;
  }
  if (!bVar5 || uVar2 < 0x38) {
    return 0;
  }
  UNRECOVERED_JUMPTABLE = (code *)UINT_40010834;
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    return 0;
  }
  uVar2 = (*UNRECOVERED_JUMPTABLE)(param_2,param_3);
LAB_100076d4:
  uVar3 = 0;
  if (uVar2 != 0) {
    uVar2 = *param_3;
    *param_3 = 0;
    uVar3 = 1;
    if (param_3[1] != 0) {
      if (((uVar2 != 0) && (iVar1 = Ram40010800, iVar1 == 0x50414d57)) &&
         (iVar1 = Ram40010804, iVar1 != 0)) {
        uVar4 = Ram40010808;
        bVar5 = 0xb < uVar4;
        if (bVar5) {
          uVar4 = Ram40010808;
        }
        if (((bVar5 && 0x4f < uVar4) &&
            (UNRECOVERED_JUMPTABLE = (code *)UINT_4001084c, UNRECOVERED_JUMPTABLE != (code *)0x0))
           && (ptr = (*UNRECOVERED_JUMPTABLE)(param_3[1]), ptr != (void *)0x0)) {
          uVar4 = param_3[1];
          if ((uVar4 == 0) || (ptr <= (void *)-uVar4)) {
            if (uVar4 != 0) {
              uVar4 = 0;
              do {
                *(undefined1 *)((int)ptr + uVar4) = *(undefined1 *)(uVar2 + uVar4);
                uVar4 = uVar4 + 1;
              } while (uVar4 < param_3[1]);
            }
            *param_3 = (uint)ptr;
            return 1;
          }
          iVar1 = Ram40010800;
          if ((iVar1 == 0x50414d57) && (iVar1 = Ram40010804, iVar1 != 0)) {
            uVar2 = Ram40010808;
            bVar5 = 0xb < uVar2;
            if (bVar5) {
              uVar2 = Ram40010808;
            }
            if ((bVar5 && 0x53 < uVar2) &&
               (UNRECOVERED_JUMPTABLE = (code *)UINT_40010850, UNRECOVERED_JUMPTABLE != (code *)0x0)
               ) {
              (*UNRECOVERED_JUMPTABLE)(ptr);
            }
          }
        }
      }
      return 0;
    }
  }
  return uVar3;
}

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
#define local_8c (*(byte (*)[140])(pf_stack_frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100077e4
 */

uint recovered_100077e4(char *param_1)

{
  unsigned char pf_stack_frame[192] __attribute__((aligned(16))) = {0};

  char cVar1;
  code *pcVar2;
  char *pcVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  bool bVar8;

  if (param_1 != (char *)0x0) {
    iVar5 = 0;
    cVar1 = *param_1;
    pcVar3 = param_1 + 1;
    if (cVar1 != '[') {
      pcVar3 = param_1;
    }
    for (; (bVar4 = pcVar3[iVar5], bVar4 != 0 && (bVar4 != 0x5d && iVar5 != 0x7f));
        iVar5 = iVar5 + 1) {
      local_8c[iVar5] = bVar4;
    }
    local_8c[iVar5] = 0;
    if (cVar1 == '[') {
      if (bVar4 != 0x5d) {
        return 0x7fffffff;
      }
      bVar4 = param_1[iVar5 + 2];
    }
    if ((bVar4 == 0) && (local_8c[0] != 0)) {
      iVar6 = 0;
      iVar5 = 1;
      uVar7 = 1;
      do {
        if (iVar5 == 0x80) {
          return 0x7fffffff;
        }
        if (local_8c[0] == 0x5c) {
          if (iVar6 == 0) {
            return 0x7fffffff;
          }
          uVar7 = uVar7 + 1;
          iVar6 = 0;
          if (6 < uVar7) {
            return 0x7fffffff;
          }
        }
        else {
          bVar8 = 9 < (byte)(local_8c[0] - 0x30U);
          bVar4 = local_8c[0];
          if (bVar8) {
            bVar4 = (local_8c[0] & 0xdf) + 0xbf;
          }
          if ((bVar8 && 0x19 < bVar4) && (local_8c[0] != 0x5f && local_8c[0] != 0x2d)) {
            return 0x7fffffff;
          }
          iVar6 = iVar6 + 1;
        }
        local_8c[0] = local_8c[iVar5];
        iVar5 = iVar5 + 1;
      } while (local_8c[0] != 0);
      if ((((iVar6 != 0) && (1 < uVar7)) && (iVar5 = Ram40010800, iVar5 == 0x50414d57)) &&
         (iVar5 = Ram40010804, iVar5 != 0)) {
        uVar7 = Ram40010808;
        bVar8 = 0xb < uVar7;
        if (bVar8) {
          uVar7 = Ram40010808;
        }
        if ((bVar8 && 0x223 < uVar7) && (iVar5 = Ram40010a20, iVar5 != 0)) {
          pcVar2 = (code *)Ram40010a20;
          uVar7 = (*pcVar2)(0xfffffffe,local_8c,0x80);
          if (0x7fffffff < uVar7) {
            uVar7 = 0x7fffffff;
          }
          return uVar7;
        }
      }
    }
  }
  return 0x7fffffff;
}

#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_40010a20
#undef Ram40010800
#undef Ram40010804
#undef Ram40010808
#undef Ram40010a20
#undef local_8c

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
#define local_98 (*(byte (*)[152])(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007980
 */

void recovered_10007980(undefined4 param_1,char *param_2,undefined1 *param_3)

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

  if (param_3 == (undefined1 *)0x0) {
    return;
  }
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
                  goto LAB_10007b50;
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
LAB_10007b50:
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
#undef local_98

#undef DAT_1000b69e
#define DAT_1000b69e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x382U)))
#undef DAT_1000b7d0
#define DAT_1000b7d0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4b4U)))
#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_400109e8
#define DAT_400109e8 (*(uint8_t *)(0x400109e8U))
#undef DAT_400109f0
#define DAT_400109f0 (*(uint8_t *)(0x400109f0U))
#undef Ram40010800
#define Ram40010800 (*(uint32_t *)(0x40010800U))
#undef Ram40010804
#define Ram40010804 (*(uint32_t *)(0x40010804U))
#undef Ram40010808
#define Ram40010808 (*(uint32_t *)(0x40010808U))
#undef Ram400109e8
#define Ram400109e8 (*(uint32_t *)(0x400109e8U))
#undef Ram400109f0
#define Ram400109f0 (*(uint32_t *)(0x400109f0U))
#undef UINT_4001084c
#define UINT_4001084c (*(uint *)(0x4001084cU))
#undef UINT_40010850
#define UINT_40010850 (*(uint *)(0x40010850U))
#undef str_1000b663
#define str_1000b663 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x347U)))
#undef str_1000b6ca
#define str_1000b6ca (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3aeU)))
#undef str_1000b6e0
#define str_1000b6e0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3c4U)))
#undef str_1000b716
#define str_1000b716 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3faU)))
#undef str_1000b730
#define str_1000b730 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x414U)))
#define local_180 (*(undefined4 *)(pf_stack_frame + 16))
#define local_17c (*(undefined4 *)(pf_stack_frame + 20))
#define local_170 (*(undefined4 *)(pf_stack_frame + 32))
#define local_14c (*(int *)(pf_stack_frame + 68))
#define local_140 (*(uint *)(pf_stack_frame + 80))
#define local_13c (*(uint *)(pf_stack_frame + 84))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007bc8
 */

undefined4 recovered_10007bc8(int param_1,undefined4 param_2)

{
  unsigned char pf_stack_frame[432] __attribute__((aligned(16))) = {0};

  char cVar1;
  uint uVar2;
  code *pcVar3;
  int iVar4;
  void *src;
  void *dst;
  char *arg3;
  undefined4 uVar5;
  uint uVar6;
  bool bVar7;

  uVar5 = 0;
  thunk_memset(&local_180,0,0x15c);
  local_17c = 1;
  local_180 = 0x15c;
  iVar4 = Ram40010800;
  arg3 = str_1000b6ca;
  if ((iVar4 == 0x50414d57) && (iVar4 = Ram40010804, iVar4 != 0)) {
    uVar6 = Ram40010808;
    bVar7 = 0xb < uVar6;
    if (bVar7) {
      uVar6 = Ram40010808;
    }
    if ((bVar7 && 0x1eb < uVar6) && (pcVar3 = (code *)Ram400109e8, pcVar3 != (code *)0x0)) {
      iVar4 = (*pcVar3)(param_2,&local_180,0x15c);
      if (iVar4 == 0) {
        arg3 = str_1000b6ca;
      }
      else {
        arg3 = str_1000b6e0;
        if (((local_13c >> 0x17 == 0) && (local_140 != 0 || local_13c != 0)) && (local_14c == 0x200)
           ) {
          cVar1 = *(char *)(param_1 + 0x3ea);
          bVar7 = cVar1 == '\x01';
          if (bVar7) {
            cVar1 = *(char *)(param_1 + 0x3f3);
          }
          if (bVar7 && cVar1 == '\0') {
            *(undefined1 *)(param_1 + 0x3f3) = 1;
            arg3 = str_1000b663;
          }
          else {
            *(undefined1 *)(param_1 + 0x3f3) = 0;
            iVar4 = Ram40010800;
            uVar6 = local_140 << 9;
            if ((uint)(local_140 < 0x81) <= -local_13c) {
              uVar6 = 0x10000;
            }
            src = (void *)0x0;
            if (iVar4 == 0x50414d57) {
              iVar4 = Ram40010804;
              src = (void *)0x0;
              if (iVar4 != 0) {
                uVar2 = Ram40010808;
                src = (void *)0x0;
                if (0xb < uVar2) {
                  uVar2 = Ram40010808;
                  src = (void *)0x0;
                  if ((0x4f < uVar2) && (pcVar3 = (code *)UINT_4001084c, pcVar3 != (code *)0x0)) {
                    src = (*pcVar3)(uVar6);
                  }
                }
              }
            }
            dst = (void *)0x0;
            iVar4 = Ram40010800;
            if ((iVar4 == 0x50414d57) && (iVar4 = Ram40010804, iVar4 != 0)) {
              uVar2 = Ram40010808;
              bVar7 = 0xb < uVar2;
              if (bVar7) {
                uVar2 = Ram40010808;
              }
              if ((((((bVar7 && 0x4f < uVar2) &&
                     (pcVar3 = (code *)UINT_4001084c, pcVar3 != (code *)0x0)) &&
                    (dst = (*pcVar3)(uVar6), src != (void *)0x0 && dst != (void *)0x0)) &&
                   ((iVar4 = Ram40010800, iVar4 == 0x50414d57 && (iVar4 = Ram40010804, iVar4 != 0)))
                   ) && ((uVar2 = Ram40010808, 0xb < uVar2 &&
                         ((uVar2 = Ram40010808, 499 < uVar2 &&
                          (pcVar3 = (code *)Ram400109f0, pcVar3 != (code *)0x0)))))) &&
                 (iVar4 = (*pcVar3)(param_2,0,0,src,uVar6 >> 9), iVar4 != 0)) {
                iVar4 = Ram40010800;
                if ((iVar4 == 0x50414d57) && (iVar4 = Ram40010804, iVar4 != 0)) {
                  uVar2 = Ram40010808;
                  bVar7 = 0xb < uVar2;
                  if (bVar7) {
                    uVar2 = Ram40010808;
                  }
                  if ((bVar7 && 0x53 < uVar2) &&
                     (pcVar3 = (code *)UINT_40010850, pcVar3 != (code *)0x0)) {
                    (*pcVar3)(*(void **)(param_1 + 0x394));
                  }
                }
                *(undefined2 *)(param_1 + 0x3ea) = 0;
                *(undefined2 *)(param_1 + 0x3f2) = 0;
                *(undefined4 *)(param_1 + 0x3f4) = 0xffffffff;
                *(undefined4 *)(param_1 + 0x394) = 0;
                *(undefined4 *)(param_1 + 0x378) = 0;
                *(undefined1 *)(param_1 + 0x380) = 0;
                *(undefined4 *)(param_1 + 0x374) = 0;
                iVar4 = Ram40010800;
                *(undefined4 *)(param_1 + 0x3b4) = 0;
                *(undefined4 *)(param_1 + 0x3b8) =
                     *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 4);
                *(undefined4 *)(param_1 + 0x3bc) =
                     *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 8);
                *(undefined4 *)(param_1 + 0x3c0) =
                     *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 12);
                if ((iVar4 == 0x50414d57) && (iVar4 = Ram40010804, iVar4 != 0)) {
                  uVar2 = Ram40010808;
                  bVar7 = 0xb < uVar2;
                  if (bVar7) {
                    uVar2 = Ram40010808;
                  }
                  if ((bVar7 && 0x53 < uVar2) &&
                     (pcVar3 = (code *)UINT_40010850, pcVar3 != (code *)0x0)) {
                    (*pcVar3)(*(void **)(param_1 + 0x368));
                  }
                }
                *(uint *)(param_1 + 0x370) = uVar6;
                *(uint *)(param_1 + 0x36c) = uVar6;
                *(void **)(param_1 + 0x368) = src;
                thunk_memcpy(dst,src,uVar6);
                uVar5 = 1;
                *(void **)(param_1 + 0x394) = dst;
                *(undefined1 *)(param_1 + 0x3eb) = 1;
                *(undefined1 *)(param_1 + 0x380) = 1;
                *(uint *)(param_1 + 0x3b0) = local_13c << 9 | local_140 >> 0x17;
                *(uint *)(param_1 + 0x3ac) = local_140 << 9;
                *(undefined4 *)(param_1 + 0x3a8) = local_170;
                *(undefined4 *)(param_1 + 0x398) = param_2;
                recovered_10007980(param_2,&DAT_1000b69e,(undefined1 *)(param_1 + 0x404));
                arg3 = str_1000b730;
                goto LAB_10007c4c;
              }
            }
            iVar4 = Ram40010800;
            if ((iVar4 == 0x50414d57) && (iVar4 = Ram40010804, iVar4 != 0)) {
              uVar6 = Ram40010808;
              bVar7 = 0xb < uVar6;
              if (bVar7) {
                uVar6 = Ram40010808;
              }
              if ((bVar7 && 0x53 < uVar6) && (pcVar3 = (code *)UINT_40010850, pcVar3 != (code *)0x0)
                 ) {
                (*pcVar3)(src);
              }
            }
            uVar5 = 0;
            iVar4 = Ram40010800;
            arg3 = str_1000b716;
            if ((iVar4 == 0x50414d57) && (iVar4 = Ram40010804, iVar4 != 0)) {
              uVar6 = Ram40010808;
              bVar7 = 0xb < uVar6;
              if (bVar7) {
                uVar6 = Ram40010808;
              }
              if ((bVar7 && 0x53 < uVar6) && (pcVar3 = (code *)UINT_40010850, pcVar3 != (code *)0x0)
                 ) {
                (*pcVar3)(dst);
                arg3 = str_1000b716;
              }
            }
          }
        }
      }
    }
  }
LAB_10007c4c:
  thunk_snprintf((char *)(param_1 + 0x650e),0xa0,&DAT_1000b7d0,arg3);
  return uVar5;
}

#undef DAT_1000b69e
#undef DAT_1000b7d0
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_400109e8
#undef DAT_400109f0
#undef Ram40010800
#undef Ram40010804
#undef Ram40010808
#undef Ram400109e8
#undef Ram400109f0
#undef UINT_4001084c
#undef UINT_40010850
#undef str_1000b663
#undef str_1000b6ca
#undef str_1000b6e0
#undef str_1000b716
#undef str_1000b730
#undef local_180
#undef local_17c
#undef local_170
#undef local_14c
#undef local_140
#undef local_13c

#undef DAT_1000b63b
#define DAT_1000b63b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x31fU)))
#undef DAT_1000b7d0
#define DAT_1000b7d0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4b4U)))
#undef str_1000b7d3
#define str_1000b7d3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4b7U)))
#undef str_1000b806
#define str_1000b806 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4eaU)))
#undef str_1000b83b
#define str_1000b83b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x51fU)))
#undef str_1000b863
#define str_1000b863 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x547U)))
#undef str_1000b88c
#define str_1000b88c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x570U)))
#undef str_1000b8be
#define str_1000b8be (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5a2U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008050
 */

void recovered_10008050(int param_1,int param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  int iVar2;
  uint uVar3;
  undefined1 *arg3;
  uint uVar4;
  char *arg3_00;

  arg3 = &DAT_1000b63b;
  *(undefined4 *)(param_1 + 0x400) = 0;
  *(undefined1 *)(param_1 + 0x3f2) = 0;
  if (param_2 == 1) {
    arg3 = (undefined1 *)(param_1 + 0x404);
  }
  *(int *)(param_1 + 0x3f8) = param_2;
  *(undefined4 *)(param_1 + 0x3f4) = 0xffffffff;
  thunk_snprintf((char *)(param_1 + 0x3489),0x3085,&DAT_1000b7d0,arg3);
  uVar1 = thunk_strlen((char *)(param_1 + 0x3489));
  *(ulong *)(param_1 + 0x3fc) = uVar1;
  iVar2 = recovered_100020b0(*(int *)(param_1 + 4) + *(int *)(param_1 + 0x3d0) * -8 + -0x28,
                             *(int *)(param_1 + 0x3d0));
  uVar4 = *(uint *)(param_1 + 0x400);
  uVar3 = uVar4;
  if (uVar1 < uVar4) {
    uVar3 = uVar1;
  }
  if (iVar2 < 2) {
    iVar2 = 1;
  }
  if ((uVar1 < uVar4) || (uVar3 + iVar2 <= uVar1)) {
    if (uVar3 + iVar2 <= uVar1) {
      uVar3 = (uVar1 - iVar2) + 1;
    }
    *(uint *)(param_1 + 0x400) = uVar3;
  }
  if (param_2 == 5) {
    arg3_00 = str_1000b806;
  }
  else if (param_2 == 4) {
    arg3_00 = str_1000b7d3;
  }
  else if (param_2 == 3) {
    arg3_00 = str_1000b863;
    if (*(char *)(param_1 + 0x3eb) != '\0') {
      arg3_00 = str_1000b83b;
    }
  }
  else {
    arg3_00 = str_1000b8be;
    if (param_2 == 2) {
      arg3_00 = str_1000b88c;
    }
  }
  thunk_snprintf((char *)(param_1 + 0x650e),0xa0,&DAT_1000b7d0,arg3_00);
  return;
}

#undef DAT_1000b63b
#undef DAT_1000b7d0
#undef str_1000b7d3
#undef str_1000b806
#undef str_1000b83b
#undef str_1000b863
#undef str_1000b88c
#undef str_1000b8be

#undef DAT_1000b63b
#define DAT_1000b63b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x31fU)))
#undef DAT_1000b7d0
#define DAT_1000b7d0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4b4U)))
#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_400109ec
#define DAT_400109ec (*(uint8_t *)(0x400109ecU))
#undef Ram40010800
#define Ram40010800 (*(uint32_t *)(0x40010800U))
#undef Ram40010804
#define Ram40010804 (*(uint32_t *)(0x40010804U))
#undef Ram40010808
#define Ram40010808 (*(uint32_t *)(0x40010808U))
#undef Ram400109ec
#define Ram400109ec (*(uint32_t *)(0x400109ecU))
#undef UINT_4001084c
#define UINT_4001084c (*(uint *)(0x4001084cU))
#undef UINT_40010850
#define UINT_40010850 (*(uint *)(0x40010850U))
#undef str_1000b88c
#define str_1000b88c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x570U)))
#undef str_1000b8eb
#define str_1000b8eb (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5cfU)))
#undef str_1000b91d
#define str_1000b91d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x601U)))
#define local_20 (*(uint *)(pf_stack_frame + 16))
#define local_1c (*(uint *)(pf_stack_frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100081b0
 */

void recovered_100081b0(int param_1)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  code *pcVar1;
  ulong uVar2;
  int iVar3;
  void *ptr;
  uint uVar4;
  uint uVar5;
  char *arg3;
  bool bVar6;
  undefined8 uVar7;

  *(undefined4 *)(param_1 + 0x400) = 0;
  *(undefined1 *)(param_1 + 0x3f2) = 0;
  *(undefined4 *)(param_1 + 0x3f8) = 2;
  *(undefined4 *)(param_1 + 0x3f4) = 0xffffffff;
  thunk_snprintf((char *)(param_1 + 0x3489),0x3085,&DAT_1000b7d0,&DAT_1000b63b);
  uVar2 = thunk_strlen((char *)(param_1 + 0x3489));
  *(ulong *)(param_1 + 0x3fc) = uVar2;
  iVar3 = recovered_100020b0(*(int *)(param_1 + 4) + *(int *)(param_1 + 0x3d0) * -8 + -0x28,
                             *(int *)(param_1 + 0x3d0));
  uVar5 = *(uint *)(param_1 + 0x400);
  uVar4 = uVar5;
  if (uVar2 < uVar5) {
    uVar4 = uVar2;
  }
  if (iVar3 < 2) {
    iVar3 = 1;
  }
  if ((uVar2 < uVar5) || (uVar4 + iVar3 <= uVar2)) {
    if (uVar4 + iVar3 <= uVar2) {
      uVar4 = (uVar2 - iVar3) + 1;
    }
    *(uint *)(param_1 + 0x400) = uVar4;
  }
  thunk_snprintf((char *)(param_1 + 0x650e),0xa0,&DAT_1000b7d0,str_1000b88c);
  local_1c = 0;
  iVar3 = Ram40010800;
  if ((iVar3 == 0x50414d57) && (iVar3 = Ram40010804, iVar3 != 0)) {
    uVar4 = Ram40010808;
    bVar6 = 0xb < uVar4;
    if (bVar6) {
      uVar4 = Ram40010808;
    }
    if ((bVar6 && 0x1ef < uVar4) && (pcVar1 = (code *)Ram400109ec, pcVar1 != (code *)0x0)) {
      uVar7 = (*pcVar1)(0,0,&local_1c);
      uVar4 = (uint)((ulonglong)uVar7 >> 0x20);
      bVar6 = (int)uVar7 != 0;
      uVar5 = 0;
      if (bVar6) {
        uVar4 = local_1c + 0xc0000000;
        uVar5 = local_1c;
      }
      if (bVar6 && 0xc0000000 < uVar4) {
        iVar3 = Ram40010800;
        if ((iVar3 == 0x50414d57) && (iVar3 = Ram40010804, iVar3 != 0)) {
          uVar4 = Ram40010808;
          bVar6 = 0xb < uVar4;
          if (bVar6) {
            uVar4 = Ram40010808;
          }
          if (((bVar6 && 0x4f < uVar4) && (pcVar1 = (code *)UINT_4001084c, pcVar1 != (code *)0x0))
             && (ptr = (*pcVar1)(uVar5 << 2), ptr != (void *)0x0)) {
            local_20 = 0;
            iVar3 = Ram40010800;
            if ((iVar3 == 0x50414d57) && (iVar3 = Ram40010804, iVar3 != 0)) {
              uVar4 = Ram40010808;
              bVar6 = 0xb < uVar4;
              if (bVar6) {
                uVar4 = Ram40010808;
              }
              if (((bVar6 && 0x1ef < uVar4) && (pcVar1 = (code *)Ram400109ec, pcVar1 != (code *)0x0)
                  ) && (iVar3 = (*pcVar1)(ptr,local_1c,&local_20), iVar3 != 0)) {
                iVar3 = Ram40010800;
                if ((iVar3 == 0x50414d57) && (iVar3 = Ram40010804, iVar3 != 0)) {
                  uVar4 = Ram40010808;
                  bVar6 = 0xb < uVar4;
                  if (bVar6) {
                    uVar4 = Ram40010808;
                  }
                  if ((bVar6 && 0x53 < uVar4) &&
                     (pcVar1 = (code *)UINT_40010850, pcVar1 != (code *)0x0)) {
                    (*pcVar1)(*(void **)(param_1 + 0x39c));
                  }
                }
                *(undefined1 *)(param_1 + 0x3f2) = 1;
                if (local_20 < local_1c) {
                  local_1c = local_20;
                }
                *(void **)(param_1 + 0x39c) = ptr;
                *(undefined4 *)(param_1 + 0x3a4) = 0;
                *(uint *)(param_1 + 0x3a0) = local_1c;
                return;
              }
            }
            iVar3 = Ram40010800;
            if (iVar3 != 0x50414d57) {
              return;
            }
            iVar3 = Ram40010804;
            if (iVar3 == 0) {
              return;
            }
            uVar4 = Ram40010808;
            bVar6 = 0xb < uVar4;
            if (bVar6) {
              uVar4 = Ram40010808;
            }
            if (!bVar6 || uVar4 < 0x54) {
              return;
            }
            pcVar1 = (code *)UINT_40010850;
            if (pcVar1 == (code *)0x0) {
              return;
            }
            (*pcVar1)(ptr);
            return;
          }
        }
        arg3 = str_1000b91d;
        goto LAB_100082f4;
      }
    }
  }
  arg3 = str_1000b8eb;
LAB_100082f4:
  thunk_snprintf((char *)(param_1 + 0x650e),0xa0,&DAT_1000b7d0,arg3);
  return;
}

#undef DAT_1000b63b
#undef DAT_1000b7d0
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_400109ec
#undef Ram40010800
#undef Ram40010804
#undef Ram40010808
#undef Ram400109ec
#undef UINT_4001084c
#undef UINT_40010850
#undef str_1000b88c
#undef str_1000b8eb
#undef str_1000b91d
#undef local_20
#undef local_1c

#undef DAT_1000b7d0
#define DAT_1000b7d0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4b4U)))
#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_400109f0
#define DAT_400109f0 (*(uint8_t *)(0x400109f0U))
#undef DAT_400109f4
#define DAT_400109f4 (*(uint8_t *)(0x400109f4U))
#undef Ram40010800
#define Ram40010800 (*(uint32_t *)(0x40010800U))
#undef Ram40010804
#define Ram40010804 (*(uint32_t *)(0x40010804U))
#undef Ram40010808
#define Ram40010808 (*(uint32_t *)(0x40010808U))
#undef Ram400109f0
#define Ram400109f0 (*(uint32_t *)(0x400109f0U))
#undef Ram400109f4
#define Ram400109f4 (*(uint32_t *)(0x400109f4U))
#undef str_1000b93f
#define str_1000b93f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x623U)))
#undef str_1000b954
#define str_1000b954 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x638U)))
#undef str_1000b98c
#define str_1000b98c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x670U)))
#undef str_1000b9d1
#define str_1000b9d1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6b5U)))
#define auStack_224 (*(undefined1 (*)[548])(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100084ac
 */

void recovered_100084ac(int param_1)

{
  unsigned char pf_stack_frame[608] __attribute__((aligned(16))) = {0};

  uint uVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  char *arg3;
  uint uVar6;

  *(undefined4 *)(param_1 + 0x3f4) = 0xffffffff;
  if (*(char *)(param_1 + 0x3eb) == '\0') {
    recovered_10008f98(param_1,(byte *)(param_1 + 0x404));
    return;
  }
  if (*(char *)(param_1 + 0x3ea) == '\0') {
    thunk_snprintf((char *)(param_1 + 0x650e),0xa0,&DAT_1000b7d0,str_1000b93f);
    return;
  }
  if (*(int *)(param_1 + 0x36c) != 0) {
    uVar6 = 0;
    do {
      iVar3 = thunk_memcmp((void *)(*(int *)(param_1 + 0x368) + uVar6),
                                 (void *)(*(int *)(param_1 + 0x394) + uVar6),0x200);
      if (iVar3 != 0) {
        uVar4 = *(uint *)(param_1 + 0x3b4);
        iVar3 = Ram40010800;
        uVar5 = *(int *)(param_1 + 0x3b8) + (uint)CARRY4(uVar4,uVar6);
        if (iVar3 != 0x50414d57) {
          arg3 = str_1000b954;
          goto LAB_1000872c;
        }
        iVar3 = Ram40010804;
        if (iVar3 == 0) {
          arg3 = str_1000b954;
          goto LAB_1000872c;
        }
        uVar1 = Ram40010808;
        if (uVar1 < 0xc) {
          arg3 = str_1000b954;
          goto LAB_1000872c;
        }
        uVar1 = Ram40010808;
        if (uVar1 < 500) {
          arg3 = str_1000b954;
          goto LAB_1000872c;
        }
        pcVar2 = (code *)Ram400109f0;
        if (pcVar2 == (code *)0x0) {
          arg3 = str_1000b954;
          goto LAB_1000872c;
        }
        iVar3 = (*pcVar2)(*(undefined4 *)(param_1 + 0x398),uVar4 + uVar6 >> 9 | uVar5 * 0x800000,
                          uVar5 >> 9,auStack_224,1);
        if (iVar3 == 0) {
          arg3 = str_1000b954;
          goto LAB_1000872c;
        }
        iVar3 = thunk_memcmp(auStack_224,(void *)(*(int *)(param_1 + 0x394) + uVar6),0x200);
        if (iVar3 != 0) {
          arg3 = str_1000b954;
          goto LAB_1000872c;
        }
      }
      uVar6 = uVar6 + 0x200;
    } while (uVar6 < *(uint *)(param_1 + 0x36c));
    if (*(uint *)(param_1 + 0x36c) != 0) {
      uVar6 = 0;
      do {
        iVar3 = thunk_memcmp((void *)(*(int *)(param_1 + 0x368) + uVar6),
                                   (void *)(*(int *)(param_1 + 0x394) + uVar6),0x200);
        if (iVar3 != 0) {
          uVar4 = *(uint *)(param_1 + 0x3b4);
          uVar5 = *(int *)(param_1 + 0x3b8) + (uint)CARRY4(uVar4,uVar6);
          iVar3 = Ram40010800;
          if ((((iVar3 == 0x50414d57) && (iVar3 = Ram40010804, iVar3 != 0)) &&
              (uVar1 = Ram40010808, 0xb < uVar1)) &&
             ((uVar1 = Ram40010808, 0x1f7 < uVar1 &&
              (pcVar2 = (code *)Ram400109f4, pcVar2 != (code *)0x0)))) {
            iVar3 = (*pcVar2)(*(undefined4 *)(param_1 + 0x398),uVar4 + uVar6 >> 9 | uVar5 * 0x800000
                              ,uVar5 >> 9,*(int *)(param_1 + 0x368) + uVar6,1);
            if (iVar3 != 0) {
              thunk_memcpy((void *)(*(int *)(param_1 + 0x394) + uVar6),
                                 (void *)(*(int *)(param_1 + 0x368) + uVar6),0x200);
              goto LAB_1000864c;
            }
          }
          arg3 = str_1000b98c;
          goto LAB_1000872c;
        }
LAB_1000864c:
        uVar6 = uVar6 + 0x200;
      } while (uVar6 < *(uint *)(param_1 + 0x36c));
    }
  }
  *(undefined1 *)(param_1 + 0x3ea) = 0;
  arg3 = str_1000b9d1;
  *(undefined1 *)(param_1 + 0x3f3) = 0;
LAB_1000872c:
  thunk_snprintf((char *)(param_1 + 0x650e),0xa0,&DAT_1000b7d0,arg3);
  return;
}

#undef DAT_1000b7d0
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_400109f0
#undef DAT_400109f4
#undef Ram40010800
#undef Ram40010804
#undef Ram40010808
#undef Ram400109f0
#undef Ram400109f4
#undef str_1000b93f
#undef str_1000b954
#undef str_1000b98c
#undef str_1000b9d1
#undef auStack_224

#undef DAT_1000b7d0
#define DAT_1000b7d0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4b4U)))
#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_40010a50
#define DAT_40010a50 (*(uint8_t *)(0x40010a50U))
#undef Ram40010800
#define Ram40010800 (*(uint32_t *)(0x40010800U))
#undef Ram40010804
#define Ram40010804 (*(uint32_t *)(0x40010804U))
#undef Ram40010808
#define Ram40010808 (*(uint32_t *)(0x40010808U))
#undef _DAT_40010a50
#define _DAT_40010a50 (*(code * *)(0x40010a50U))
#undef str_1000ba6b
#define str_1000ba6b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x74fU)))
#undef str_1000ba80
#define str_1000ba80 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x764U)))
#undef str_1000babc
#define str_1000babc (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7a0U)))
#undef str_1000bace
#define str_1000bace (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7b2U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100087bc
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_100087bc(int param_1,int param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  uint uVar3;
  char *arg3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  bool bVar7;

  uVar3 = *(uint *)(param_1 + 0x374);
  uVar6 = *(uint *)(param_1 + 0x378);
  uVar4 = uVar3;
  if (uVar3 < uVar6) {
    uVar4 = uVar6;
  }
  if (uVar3 <= uVar6) {
    uVar6 = uVar3;
  }
  uVar2 = uVar3;
  if (uVar3 < *(uint *)(param_1 + 0x36c)) {
    uVar2 = uVar3 + 1;
  }
  if (uVar6 < uVar4 && uVar4 <= *(uint *)(param_1 + 0x36c)) {
    uVar3 = uVar6;
    uVar2 = uVar4;
  }
  if (uVar2 == uVar3) {
    arg3 = str_1000ba6b;
  }
  else {
    iVar1 = Ram40010800;
    arg3 = str_1000ba80;
    uVar5 = 2;
    if (param_2 != 0) {
      uVar5 = 3;
    }
    if ((iVar1 == 0x50414d57) && (iVar1 = Ram40010804, iVar1 != 0)) {
      uVar4 = Ram40010808;
      bVar7 = 0xb < uVar4;
      if (bVar7) {
        uVar4 = Ram40010808;
      }
      if ((bVar7 && 0x253 < uVar4) && (_DAT_40010a50 != (code *)0x0)) {
        iVar1 = (*_DAT_40010a50)(uVar5,*(int *)(param_1 + 0x368) + uVar3,uVar2 - uVar3,0xffffffff,0)
        ;
        arg3 = str_1000bace;
        if (param_2 != 0) {
          arg3 = str_1000babc;
        }
        if (iVar1 == 0) {
          arg3 = str_1000ba80;
        }
      }
    }
  }
  thunk_snprintf((char *)(param_1 + 0x650e),0xa0,&DAT_1000b7d0,arg3);
  return;
}

#undef DAT_1000b7d0
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_40010a50
#undef Ram40010800
#undef Ram40010804
#undef Ram40010808
#undef _DAT_40010a50
#undef str_1000ba6b
#undef str_1000ba80
#undef str_1000babc
#undef str_1000bace

#undef DAT_1000b7d0
#define DAT_1000b7d0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4b4U)))
#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_40010a54
#define DAT_40010a54 (*(uint8_t *)(0x40010a54U))
#undef DAT_40010a58
#define DAT_40010a58 (*(uint8_t *)(0x40010a58U))
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
#undef _DAT_40010a54
#define _DAT_40010a54 (*(code * *)(0x40010a54U))
#undef _DAT_40010a58
#define _DAT_40010a58 (*(code * *)(0x40010a58U))
#undef str_1000bae7
#define str_1000bae7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7cbU)))
#undef str_1000bafa
#define str_1000bafa (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7deU)))
#undef str_1000bb16
#define str_1000bb16 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7faU)))
#undef str_1000bb35
#define str_1000bb35 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x819U)))
#undef str_1000bb4a
#define str_1000bb4a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x82eU)))
#undef str_1000bb65
#define str_1000bb65 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x849U)))
#define local_40 (*(uint *)(pf_stack_frame + 16))
#define local_3c (*(uint *)(pf_stack_frame + 20))
#define local_38 (*(byte *)(pf_stack_frame + 24))
#define local_34 (*(undefined4 *)(pf_stack_frame + 28))
#define local_30 (*(int *)(pf_stack_frame + 32))
#define local_2c (*(uint *)(pf_stack_frame + 36))
#define local_28 (*(undefined4 *)(pf_stack_frame + 40))
#define local_24 (*(byte *)(pf_stack_frame + 44))
#define local_20 (*(undefined4 *)(pf_stack_frame + 48))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008924
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10008924(int param_1,int param_2)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  uint uVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  void *ptr;
  int iVar5;
  char *pcVar6;
  bool bVar7;

  thunk_memset(&local_34,0,0x18);
  local_34 = 0x18;
  iVar5 = Ram40010800;
  if ((iVar5 == 0x50414d57) && (iVar5 = Ram40010804, iVar5 != 0)) {
    uVar4 = Ram40010808;
    bVar7 = 0xb < uVar4;
    if (bVar7) {
      uVar4 = Ram40010808;
    }
    if ((bVar7 && 0x25b < uVar4) && (_DAT_40010a58 != (code *)0x0)) {
      iVar3 = (*_DAT_40010a58)(&local_34);
      iVar5 = 0;
      if (iVar3 != 0) {
        iVar5 = local_30;
      }
      if (iVar3 != 0 && iVar5 != 0) {
        iVar5 = Ram40010800;
        uVar4 = local_2c;
        if (local_2c < 2) {
          uVar4 = 1;
        }
        if ((iVar5 == 0x50414d57) && (iVar5 = Ram40010804, iVar5 != 0)) {
          uVar1 = Ram40010808;
          bVar7 = 0xb < uVar1;
          if (bVar7) {
            uVar1 = Ram40010808;
          }
          if (((bVar7 && 0x4f < uVar1) && (pcVar2 = (code *)UINT_4001084c, pcVar2 != (code *)0x0))
             && (ptr = (*pcVar2)(uVar4), ptr != (void *)0x0)) {
            iVar5 = Ram40010800;
            if ((iVar5 == 0x50414d57) && (iVar5 = Ram40010804, iVar5 != 0)) {
              uVar4 = Ram40010808;
              bVar7 = 0xb < uVar4;
              if (bVar7) {
                uVar4 = Ram40010808;
              }
              if (((bVar7 && 599 < uVar4) && (_DAT_40010a54 != (code *)0x0)) &&
                 (iVar5 = (*_DAT_40010a54)(ptr,local_2c,local_20,&local_34), iVar5 != 0)) {
                if (local_30 == 1) {
                  if (param_2 == 0) {
                    bVar7 = recovered_100095a8((int)ptr,local_2c,0,(int *)&local_40);
                    if (!bVar7) {
                      pcVar6 = str_1000bb65;
                      goto LAB_10008c40;
                    }
                    recovered_100095a8((int)ptr,local_2c,(int)ptr,(int *)&local_40);
                    local_2c = local_40;
                  }
                }
                else if (local_30 == 4) {
                  if ((((local_24 & 2) == 0) && (local_2c != 0)) &&
                     (*(char *)((int)ptr + (local_2c - 1)) == '\0')) {
                    thunk_memset(&local_40,0,0xc);
                    iVar5 = recovered_100075c4(local_28,ptr,&local_40);
                    if (iVar5 != 0) {
                      if ((local_38 & 2) == 0) {
                        recovered_10009150(param_1,local_40,local_3c);
                      }
                      else {
                        thunk_snprintf((char *)(param_1 + 0x650e),0xa0,&DAT_1000b7d0,
                                           str_1000bb35);
                      }
                      recovered_10007148();
                      goto LAB_10008c50;
                    }
                    pcVar6 = str_1000bb4a;
                  }
                  else {
                    pcVar6 = str_1000bb35;
                  }
LAB_10008c40:
                  thunk_snprintf((char *)(param_1 + 0x650e),0xa0,&DAT_1000b7d0,pcVar6);
                  goto LAB_10008c50;
                }
                recovered_10009150(param_1,(int)ptr,local_2c);
LAB_10008c50:
                iVar5 = Ram40010800;
                if ((iVar5 == 0x50414d57) && (iVar5 = Ram40010804, iVar5 != 0)) {
                  uVar4 = Ram40010808;
                  bVar7 = 0xb < uVar4;
                  if (bVar7) {
                    uVar4 = Ram40010808;
                  }
                  if ((bVar7 && 0x53 < uVar4) &&
                     (pcVar2 = (code *)UINT_40010850, pcVar2 != (code *)0x0)) {
                    (*pcVar2)(ptr);
                  }
                }
                *(undefined4 *)(param_1 + 0x3f4) = 0xffffffff;
                return;
              }
            }
            iVar5 = Ram40010800;
            if ((iVar5 == 0x50414d57) && (iVar5 = Ram40010804, iVar5 != 0)) {
              uVar4 = Ram40010808;
              bVar7 = 0xb < uVar4;
              if (bVar7) {
                uVar4 = Ram40010808;
              }
              if ((bVar7 && 0x53 < uVar4) && (pcVar2 = (code *)UINT_40010850, pcVar2 != (code *)0x0)
                 ) {
                (*pcVar2)(ptr);
              }
            }
            pcVar6 = str_1000bb16;
            goto LAB_100089a8;
          }
        }
        pcVar6 = str_1000bafa;
        goto LAB_100089a8;
      }
    }
  }
  pcVar6 = str_1000bae7;
LAB_100089a8:
  thunk_snprintf((char *)(param_1 + 0x650e),0xa0,&DAT_1000b7d0,pcVar6);
  return;
}

#undef DAT_1000b7d0
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_40010a54
#undef DAT_40010a58
#undef Ram40010800
#undef Ram40010804
#undef Ram40010808
#undef UINT_4001084c
#undef UINT_40010850
#undef _DAT_40010a54
#undef _DAT_40010a58
#undef str_1000bae7
#undef str_1000bafa
#undef str_1000bb16
#undef str_1000bb35
#undef str_1000bb4a
#undef str_1000bb65
#undef local_40
#undef local_3c
#undef local_38
#undef local_34
#undef local_30
#undef local_2c
#undef local_28
#undef local_24
#undef local_20

#undef DAT_1000b7d0
#define DAT_1000b7d0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4b4U)))
#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_40010a50
#define DAT_40010a50 (*(uint8_t *)(0x40010a50U))
#undef Ram40010800
#define Ram40010800 (*(uint32_t *)(0x40010800U))
#undef Ram40010804
#define Ram40010804 (*(uint32_t *)(0x40010804U))
#undef Ram40010808
#define Ram40010808 (*(uint32_t *)(0x40010808U))
#undef _DAT_40010a50
#define _DAT_40010a50 (*(code * *)(0x40010a50U))
#undef str_1000ba6b
#define str_1000ba6b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x74fU)))
#undef str_1000ba80
#define str_1000ba80 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x764U)))
#undef str_1000babc
#define str_1000babc (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7a0U)))
#undef str_1000bace
#define str_1000bace (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7b2U)))
#undef str_1000bc2f
#define str_1000bc2f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x913U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008cd4
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10008cd4(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  bool bVar9;

  if (*(char *)(param_1 + 0x3eb) == '\x01') {
    thunk_snprintf((char *)(param_1 + 0x650e),0xa0,&DAT_1000b7d0,str_1000bc2f);
    return;
  }
  uVar7 = *(uint *)(param_1 + 0x374);
  uVar5 = *(uint *)(param_1 + 0x378);
  uVar4 = uVar7;
  if (uVar7 < uVar5) {
    uVar4 = uVar5;
  }
  if (uVar7 <= uVar5) {
    uVar5 = uVar7;
  }
  uVar6 = uVar7;
  if (uVar7 < *(uint *)(param_1 + 0x36c)) {
    uVar6 = uVar7 + 1;
  }
  if (uVar5 < uVar4 && uVar4 <= *(uint *)(param_1 + 0x36c)) {
    uVar7 = uVar5;
    uVar6 = uVar4;
  }
  if (uVar6 == uVar7) {
    pcVar8 = str_1000ba6b;
  }
  else {
    cVar1 = *(char *)(param_1 + 0x3e9);
    iVar3 = Ram40010800;
    pcVar8 = str_1000ba80;
    uVar2 = 2;
    if (cVar1 != '\0') {
      uVar2 = 3;
    }
    if ((iVar3 == 0x50414d57) && (iVar3 = Ram40010804, iVar3 != 0)) {
      uVar5 = Ram40010808;
      bVar9 = 0xb < uVar5;
      if (bVar9) {
        uVar5 = Ram40010808;
      }
      if ((bVar9 && 0x253 < uVar5) && (_DAT_40010a50 != (code *)0x0)) {
        iVar3 = (*_DAT_40010a50)(uVar2,*(int *)(param_1 + 0x368) + uVar7,uVar6 - uVar7,0xffffffff,0)
        ;
        pcVar8 = str_1000bace;
        if (cVar1 != '\0') {
          pcVar8 = str_1000babc;
        }
        if (iVar3 == 0) {
          pcVar8 = str_1000ba80;
        }
        thunk_snprintf((char *)(param_1 + 0x650e),0xa0,&DAT_1000b7d0,pcVar8);
        if ((iVar3 != 0) && (*(char *)(param_1 + 0x380) == '\0')) {
          uVar6 = *(uint *)(param_1 + 0x374);
          uVar7 = *(uint *)(param_1 + 0x378);
          uVar4 = *(uint *)(param_1 + 0x36c);
          uVar5 = uVar6;
          if (uVar6 < uVar7) {
            uVar5 = uVar7;
          }
          if (uVar6 <= uVar7) {
            uVar7 = uVar6;
          }
          if ((uVar5 <= uVar7) || (uVar4 < uVar5)) {
            if (uVar4 <= uVar6) goto LAB_10008e0c;
            uVar5 = uVar6 + 1;
            uVar7 = uVar6;
          }
          thunk_memmove((void *)(*(int *)(param_1 + 0x368) + uVar7),
                             (void *)(*(int *)(param_1 + 0x368) + uVar5),uVar4 - uVar5);
          *(undefined1 *)(param_1 + 0x3ea) = 1;
          *(uint *)(param_1 + 0x378) = uVar7;
          *(uint *)(param_1 + 0x374) = uVar7;
          *(uint *)(param_1 + 0x36c) = (uVar7 - uVar5) + *(int *)(param_1 + 0x36c);
        }
        goto LAB_10008e0c;
      }
    }
  }
  thunk_snprintf((char *)(param_1 + 0x650e),0xa0,&DAT_1000b7d0,pcVar8);
LAB_10008e0c:
  *(undefined4 *)(param_1 + 0x3f4) = 0xffffffff;
  return;
}

#undef DAT_1000b7d0
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_40010a50
#undef Ram40010800
#undef Ram40010804
#undef Ram40010808
#undef _DAT_40010a50
#undef str_1000ba6b
#undef str_1000ba80
#undef str_1000babc
#undef str_1000bace
#undef str_1000bc2f

#undef DAT_1000b7d0
#define DAT_1000b7d0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4b4U)))
#undef str_1000bc63
#define str_1000bc63 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x947U)))
#undef str_1000bc89
#define str_1000bc89 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x96dU)))
#undef str_1000bca9
#define str_1000bca9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x98dU)))
#undef str_1000bccf
#define str_1000bccf (*(char (*)[1])(((uintptr_t)pf_module_state + 0x9b3U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008f20
 */

void recovered_10008f20(int param_1,int param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char *arg3;

  if (*(char *)(param_1 + 0x3eb) == '\0') {
    arg3 = str_1000bccf;
    if (param_2 == 1) {
      arg3 = str_1000bca9;
    }
    if (param_2 == 0) {
      arg3 = str_1000bc89;
    }
    *(undefined4 *)(param_1 + 0x3f4) = 0xffffffff;
    *(int *)(param_1 + 0x37c) = param_2;
  }
  else {
    arg3 = str_1000bc63;
  }
  thunk_snprintf((char *)(param_1 + 0x650e),0xa0,&DAT_1000b7d0,arg3);
  return;
}

#undef DAT_1000b7d0
#undef str_1000bc63
#undef str_1000bc89
#undef str_1000bca9
#undef str_1000bccf

#undef DAT_1000b69e
#define DAT_1000b69e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x382U)))
#undef DAT_1000b7d0
#define DAT_1000b7d0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4b4U)))
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
#undef str_1000b9ea
#define str_1000b9ea (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6ceU)))
#undef str_1000ba09
#define str_1000ba09 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6edU)))
#undef str_1000ba2a
#define str_1000ba2a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x70eU)))
#undef str_1000ba60
#define str_1000ba60 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x744U)))
#define abStack_30a5 (*(byte (*)[12453])(pf_stack_frame + 27))
#define local_20 (*(uint *)(pf_stack_frame + 12448))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008f98
 */

undefined4 recovered_10008f98(int param_1,byte *param_2)

{
  unsigned char pf_stack_frame[12512] __attribute__((aligned(16))) = {0};

  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  char *arg3;
  undefined4 uVar5;
  bool bVar6;

  bVar2 = recovered_100073e0(param_2,&local_20,abStack_30a5,(uint)param_2);
  uVar5 = 0;
  arg3 = str_1000b9ea;
  if (!bVar2) goto LAB_100090a4;
  iVar3 = thunk_strcmp((char *)abStack_30a5,&DAT_1000b69e);
  if (iVar3 == 0) {
    arg3 = str_1000b9ea;
    goto LAB_100090a4;
  }
  iVar3 = Ram40010800;
  arg3 = str_1000ba09;
  if ((iVar3 == 0x50414d57) && (iVar3 = Ram40010804, iVar3 != 0)) {
    uVar4 = Ram40010808;
    bVar6 = 0xb < uVar4;
    bVar2 = uVar4 == 0xc;
    if (bVar6) {
      uVar4 = Ram40010808;
      bVar2 = uVar4 == 0xd3;
    }
    if ((!bVar6 || uVar4 < 0xd3) || bVar2) goto LAB_10009050;
    pcVar1 = (code *)UINT_400108d0;
    if (pcVar1 == (code *)0x0) goto LAB_100090a4;
    uVar4 = (*pcVar1)(local_20,(char *)abStack_30a5,*(void **)(param_1 + 0x368),
                      *(uint *)(param_1 + 0x36c));
  }
  else {
LAB_10009050:
    iVar3 = Ram40010800;
    if ((iVar3 != 0x50414d57) || (iVar3 = Ram40010804, iVar3 == 0)) goto LAB_100090a4;
    uVar4 = Ram40010808;
    bVar2 = uVar4 < 0xc;
    if (!bVar2) {
      uVar4 = Ram40010808;
    }
    if ((bVar2 || uVar4 < 0x3c) || (pcVar1 = (code *)UINT_40010838, pcVar1 == (code *)0x0))
    goto LAB_100090a4;
    uVar4 = (*pcVar1)((char *)abStack_30a5,*(void **)(param_1 + 0x368),*(uint *)(param_1 + 0x36c));
  }
  arg3 = str_1000ba09;
  if (uVar4 != 0) {
    uVar5 = 1;
    if (*(char *)(param_1 + 0x3eb) == '\0') {
      recovered_10007980(local_20,(char *)abStack_30a5,(undefined1 *)(param_1 + 0x404));
      *(undefined1 *)(param_1 + 0x3f3) = 0;
      arg3 = str_1000ba60;
      *(undefined1 *)(param_1 + 0x3ea) = 0;
      *(uint *)(param_1 + 0x398) = local_20;
    }
    else {
      arg3 = str_1000ba2a;
    }
  }
LAB_100090a4:
  thunk_snprintf((char *)(param_1 + 0x650e),0xa0,&DAT_1000b7d0,arg3);
  return uVar5;
}

#undef DAT_1000b69e
#undef DAT_1000b7d0
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef Ram40010800
#undef Ram40010804
#undef Ram40010808
#undef UINT_40010838
#undef UINT_400108d0
#undef str_1000b9ea
#undef str_1000ba09
#undef str_1000ba2a
#undef str_1000ba60
#undef abStack_30a5
#undef local_20

#undef DAT_1000b7d0
#define DAT_1000b7d0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4b4U)))
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
#undef str_1000bb99
#define str_1000bb99 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x87dU)))
#undef str_1000bbb1
#define str_1000bbb1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x895U)))
#undef str_1000bbd4
#define str_1000bbd4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x8b8U)))
#undef str_1000bbe1
#define str_1000bbe1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x8c5U)))
#undef str_1000bc0a
#define str_1000bc0a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x8eeU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009150
 */

undefined1 recovered_10009150(int param_1,int param_2,uint param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined1 uVar1;
  code *pcVar2;
  void *pvVar3;
  char *arg3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;

  if ((*(char *)(param_1 + 0x3eb) == '\x01') && ((*(byte *)(param_1 + 0x3a8) & 8) != 0)) {
    uVar1 = 0;
    arg3 = str_1000bb99;
    goto LAB_10009518;
  }
  uVar9 = *(uint *)(param_1 + 0x374);
  bVar10 = false;
  uVar7 = *(uint *)(param_1 + 0x378);
  uVar8 = uVar9;
  if (uVar9 < uVar7) {
    uVar8 = uVar7;
  }
  if (uVar9 <= uVar7) {
    uVar7 = uVar9;
  }
  if ((uVar7 < uVar8) && (uVar8 <= *(uint *)(param_1 + 0x36c))) {
    bVar10 = true;
  }
  arg3 = str_1000bbb1;
  if (*(char *)(param_1 + 0x380) == '\x01') {
    uVar6 = *(uint *)(param_1 + 0x36c);
    uVar1 = 0;
    if (uVar6 < uVar9) goto LAB_10009518;
    uVar4 = uVar9;
    if (bVar10) {
      uVar4 = uVar7;
    }
    if (uVar6 - uVar4 < param_3) goto LAB_10009518;
  }
  else {
    if (*(int *)(param_1 + 0x37c) == 0) {
LAB_10009248:
      uVar6 = *(uint *)(param_1 + 0x36c);
    }
    else {
      if (!bVar10) {
        if (*(int *)(param_1 + 0x37c) == 2) {
          uVar1 = 0;
          if (CARRY4(uVar9,param_3)) goto LAB_10009518;
          uVar6 = *(uint *)(param_1 + 0x36c);
          if (*(uint *)(param_1 + 0x36c) < uVar9 + param_3) {
            uVar6 = uVar9 + param_3;
          }
          goto LAB_1000925c;
        }
        goto LAB_10009248;
      }
      uVar6 = *(int *)(param_1 + 0x36c) + (uVar7 - uVar8);
    }
    uVar1 = 0;
    if (CARRY4(uVar6,param_3)) goto LAB_10009518;
    uVar6 = uVar6 + param_3;
  }
LAB_1000925c:
  uVar1 = 0;
  uVar4 = *(uint *)(param_1 + 0x370);
  if (uVar4 < uVar6) {
    if (uVar6 == 0xffffffff) {
      arg3 = str_1000bbe1;
      goto LAB_10009518;
    }
    if (uVar4 == 0) {
      uVar4 = 0x1000;
    }
    uVar9 = uVar4;
    if (uVar4 < uVar6) {
      do {
        if ((int)uVar9 < 0) {
          uVar4 = uVar6;
          break;
        }
        uVar4 = uVar9 << 1;
        uVar7 = uVar9 * 2;
        uVar9 = uVar4;
      } while (uVar7 < uVar6);
    }
    iVar5 = Ram40010800;
    arg3 = str_1000bc0a;
    if ((iVar5 != 0x50414d57) || (iVar5 = Ram40010804, iVar5 == 0)) goto LAB_10009518;
    uVar9 = Ram40010808;
    bVar10 = 0xb < uVar9;
    if (bVar10) {
      uVar9 = Ram40010808;
    }
    if ((!bVar10 || uVar9 < 0x58) || (pcVar2 = (code *)UINT_40010854, pcVar2 == (code *)0x0))
    goto LAB_10009518;
    pvVar3 = (*pcVar2)(*(void **)(param_1 + 0x368),uVar4);
    arg3 = str_1000bc0a;
    if (pvVar3 == (void *)0x0) goto LAB_10009518;
    uVar9 = *(uint *)(param_1 + 0x374);
    uVar7 = *(uint *)(param_1 + 0x378);
    *(void **)(param_1 + 0x368) = pvVar3;
    uVar8 = uVar9;
    if (uVar9 < uVar7) {
      uVar8 = uVar7;
    }
    if (uVar9 <= uVar7) {
      uVar7 = uVar9;
    }
    *(uint *)(param_1 + 0x370) = uVar4;
  }
  bVar10 = false;
  if (uVar7 < uVar8) {
    if (param_2 == 0 || param_3 == 0) {
      return 0;
    }
    bVar10 = uVar8 <= *(uint *)(param_1 + 0x36c);
  }
  else if (param_2 == 0 || param_3 == 0) {
    return 0;
  }
  if (*(char *)(param_1 + 0x380) == '\x01') {
    uVar6 = *(uint *)(param_1 + 0x36c);
    if (uVar6 < uVar9) {
      return 0;
    }
    if (bVar10) {
      uVar9 = uVar7;
    }
    if (uVar6 - uVar9 < param_3) {
      return 0;
    }
joined_r0x1000947c:
    if (uVar4 < uVar6) {
      return 0;
    }
  }
  else {
    iVar5 = *(int *)(param_1 + 0x37c);
    if (iVar5 == 0) {
      uVar9 = *(uint *)(param_1 + 0x36c);
      if (CARRY4(uVar9,param_3)) {
        return 0;
      }
      uVar6 = uVar9 + param_3;
      goto joined_r0x1000947c;
    }
    if (bVar10) {
      uVar6 = *(int *)(param_1 + 0x36c) + (uVar7 - uVar8);
      if (CARRY4(uVar6,param_3)) {
        return 0;
      }
      uVar6 = uVar6 + param_3;
      if (uVar4 < uVar6) {
        return 0;
      }
      thunk_memmove((void *)(*(int *)(param_1 + 0x368) + uVar7 + param_3),
                         (void *)(*(int *)(param_1 + 0x368) + uVar8),
                         *(int *)(param_1 + 0x36c) - uVar8);
      uVar9 = uVar7;
    }
    else {
      if (iVar5 == 2) {
        if (CARRY4(uVar9,param_3)) {
          return 0;
        }
        uVar6 = *(uint *)(param_1 + 0x36c);
        if (*(uint *)(param_1 + 0x36c) < uVar9 + param_3) {
          uVar6 = uVar9 + param_3;
        }
        goto joined_r0x1000947c;
      }
      uVar7 = *(uint *)(param_1 + 0x36c);
      if (CARRY4(uVar7,param_3)) {
        return 0;
      }
      uVar6 = uVar7 + param_3;
      if (uVar4 < uVar6) {
        return 0;
      }
      if (iVar5 == 1) {
        pvVar3 = (void *)(*(int *)(param_1 + 0x368) + uVar9);
        thunk_memmove((void *)((int)pvVar3 + param_3),pvVar3,uVar7 - uVar9);
      }
    }
  }
  thunk_memcpy((void *)(*(int *)(param_1 + 0x368) + uVar9),(void *)param_2,param_3);
  uVar1 = 1;
  *(uint *)(param_1 + 0x378) = uVar9 + param_3;
  *(uint *)(param_1 + 0x374) = uVar9 + param_3;
  *(uint *)(param_1 + 0x36c) = uVar6;
  *(undefined1 *)(param_1 + 0x3f3) = 0;
  *(undefined1 *)(param_1 + 0x3ea) = 1;
  recovered_10009788(param_1);
  arg3 = str_1000bbd4;
LAB_10009518:
  thunk_snprintf((char *)(param_1 + 0x650e),0xa0,&DAT_1000b7d0,arg3);
  return uVar1;
}

#undef DAT_1000b7d0
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef Ram40010800
#undef Ram40010804
#undef Ram40010808
#undef UINT_40010854
#undef str_1000bb99
#undef str_1000bbb1
#undef str_1000bbd4
#undef str_1000bbe1
#undef str_1000bc0a

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100095a8
 */

bool recovered_100095a8(int param_1,uint param_2,int param_3,int *param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  byte *pbVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;

  if (param_2 == 0) {
    return false;
  }
  uVar3 = 0;
  iVar2 = 0;
  uVar4 = 0xffffffff;
  do {
    pbVar1 = (byte *)(param_1 + uVar3);
    uVar6 = (uint)*pbVar1;
    if ((uVar6 - 9 < 0x18) && ((1 << (uVar6 - 9 & 0xff) & 0x800013U) != 0)) {
      uVar6 = 0xffffffff;
      if (-1 < (int)uVar4) {
        return false;
      }
    }
    else {
      if ((uVar4 < 0x80000000) || (uVar6 != 0x30)) {
        if (uVar6 - 0x30 < 10) goto LAB_1000969c;
        if (uVar6 - 0x61 < 6) {
          uVar6 = uVar6 - 0x57;
        }
        else {
          if (5 < uVar6 - 0x41) {
            return false;
          }
          uVar6 = uVar6 - 0x37;
        }
      }
      else {
        uVar7 = uVar3 + 1;
        uVar6 = 0x30;
        if ((uVar7 < param_2) && ((*(byte *)(param_1 + uVar7) | 0x20) == 0x78)) {
          if (param_2 - uVar3 < 4) {
            return false;
          }
          uVar4 = (uint)pbVar1[2];
          uVar3 = uVar4 - 0x30;
          if (9 < uVar3) {
            if (uVar4 - 0x61 < 6) {
              uVar3 = uVar4 - 0x57;
            }
            else {
              if (5 < uVar4 - 0x41) {
                return false;
              }
              uVar3 = uVar4 - 0x37;
            }
          }
          if ((int)uVar3 < 0) {
            return false;
          }
          uVar4 = (uint)pbVar1[3];
          uVar5 = uVar4 - 0x30;
          if (9 < uVar5) {
            if (uVar4 - 0x61 < 6) {
              uVar5 = uVar4 - 0x57;
            }
            else {
              if (5 < uVar4 - 0x41) {
                return false;
              }
              uVar5 = uVar4 - 0x37;
            }
          }
          uVar6 = 0xffffffff;
          uVar3 = uVar7;
          if ((int)uVar5 < 0) {
            return false;
          }
          goto LAB_100095f4;
        }
LAB_1000969c:
        uVar6 = uVar6 - 0x30;
      }
      if ((int)uVar6 < 0) {
        return false;
      }
      if (-1 < (int)uVar4) {
        if (param_3 != 0) {
          *(byte *)(param_3 + iVar2) = (byte)uVar6 | (byte)(uVar4 << 4);
        }
        iVar2 = iVar2 + 1;
        uVar6 = 0xffffffff;
      }
    }
LAB_100095f4:
    uVar3 = uVar3 + 1;
    uVar4 = uVar6;
    if (param_2 <= uVar3) {
      bVar8 = false;
      if ((0x7fffffff < uVar6) && (bVar8 = iVar2 != 0, bVar8)) {
        *param_4 = iVar2;
      }
      return bVar8;
    }
  } while( true );
}


#define local_28 (*(uint *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009788
 */

uint recovered_10009788(int param_1)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  char cVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  ulonglong *puVar13;
  uint uVar14;
  uint uVar15;
  ulonglong uVar16;

  puVar13 = (ulonglong *)(param_1 + 0x3bc);
  uVar14 = *(uint *)puVar13;
  uVar10 = *(uint *)(param_1 + 0x3d8);
  uVar15 = *(uint *)(param_1 + 0x3c0);
  uVar2 = *puVar13;
  uVar16 = recovered_10002188(CONCAT44(*(int *)(param_1 + 0x3b8) +
                                       (uint)CARRY4(*(uint *)(param_1 + 0x3b4),
                                                    *(uint *)(param_1 + 0x374)),
                                       *(uint *)(param_1 + 0x3b4) + *(uint *)(param_1 + 0x374)),
                              (ulonglong)uVar10);
  uVar12 = (uint)(uVar16 >> 0x20);
  uVar5 = (uint)uVar16;
  if (uVar15 < uVar12 || uVar12 - uVar15 < (uint)(uVar14 <= uVar5)) {
    iVar11 = *(int *)(param_1 + 0x3d4);
    iVar7 = 0x24;
    if (0x24 < iVar11 * 2) {
      iVar7 = iVar11 << 1;
    }
    iVar8 = iVar11 * 2 + 8;
    if (iVar8 < 0x23) {
      iVar8 = 0x22;
    }
    uVar4 = recovered_100020b0((*(int *)(param_1 + 8) - (iVar11 + iVar7 + iVar8)) + -0x3e,iVar11 + 4
                              );
    if ((int)uVar4 < 2) {
      uVar4 = 1;
    }
    uVar15 = uVar15 + CARRY4(uVar14,uVar4);
    if (uVar12 <= uVar15 && (uint)(uVar14 + uVar4 <= uVar5) <= uVar12 - uVar15) goto LAB_10009868;
    uVar16 = CONCAT44((uVar12 - (uVar5 < uVar4)) + (uint)(0xfffffffe < uVar5 - uVar4),
                      (uVar5 - uVar4) + 1);
  }
  *puVar13 = uVar16;
  uVar2 = uVar16;
LAB_10009868:
  uVar5 = (uint)(uVar2 >> 0x20);
  local_28 = (uint)uVar2;
  cVar1 = *(char *)(param_1 + 0x3eb);
  if (cVar1 == '\x01') {
    uVar3 = *(undefined4 *)(param_1 + 0x3ac);
    uVar6 = *(undefined4 *)(param_1 + 0x3b0);
  }
  else {
    uVar3 = *(undefined4 *)(param_1 + 0x36c);
    uVar6 = 0;
  }
  uVar16 = recovered_10002188(CONCAT44(uVar6,uVar3),(ulonglong)uVar10);
  iVar11 = *(int *)(param_1 + 0x3d4);
  uVar12 = (uint)(uVar16 + 1);
  uVar15 = (uint)(uVar16 + 1 >> 0x20);
  iVar7 = 0x24;
  if (0x24 < iVar11 * 2) {
    iVar7 = iVar11 << 1;
  }
  iVar8 = iVar11 * 2 + 8;
  if (iVar8 < 0x23) {
    iVar8 = 0x22;
  }
  uVar14 = recovered_100020b0((*(int *)(param_1 + 8) - (iVar11 + iVar7 + iVar8)) + -0x3e,iVar11 + 4)
  ;
  if ((int)uVar14 < 2) {
    uVar14 = 1;
  }
  uVar4 = uVar12 - uVar14;
  uVar9 = uVar15 - (uVar14 > uVar12);
  if (uVar15 == 0 && (uVar14 <= uVar12) <= uVar15) {
    uVar4 = 0;
    uVar9 = 0;
  }
  uVar12 = uVar9 - (uVar5 + (local_28 > uVar4));
  if (uVar9 <= uVar5 && (uint)(local_28 <= uVar4) <= uVar9 - uVar5) {
    if (cVar1 == '\0') {
      uVar3 = *(undefined4 *)(param_1 + 0x36c);
      uVar6 = 0;
    }
    else {
      uVar3 = *(undefined4 *)(param_1 + 0x3ac);
      uVar6 = *(undefined4 *)(param_1 + 0x3b0);
    }
    uVar16 = recovered_10002188(CONCAT44(uVar6,uVar3),(ulonglong)uVar10);
    uVar5 = (uint)(uVar16 + 1);
    uVar10 = (uint)(uVar16 + 1 >> 0x20);
    uVar12 = uVar5 - uVar14;
    iVar7 = uVar10 - (uVar14 > uVar5);
    if (uVar10 == 0 && (uVar14 <= uVar5) <= uVar10) {
      iVar7 = 0;
      uVar12 = 0;
    }
    *(int *)(param_1 + 0x3c0) = iVar7;
    *(uint *)puVar13 = uVar12;
  }
  return uVar12;
}

#undef local_28

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009988
 */

undefined4 recovered_10009988(int *param_1,int param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;

  if ((char)param_1[6] != '\0') {
    return 0;
  }
  uVar1 = param_1[3];
  uVar2 = param_1[4];
  uVar3 = uVar1;
  if (uVar1 < uVar2) {
    uVar3 = uVar2;
  }
  if (uVar1 <= uVar2) {
    uVar2 = uVar1;
  }
  if ((uVar3 <= uVar2) || (uVar4 = param_1[1], uVar4 < uVar3)) {
    if (param_2 == 0) {
      uVar4 = param_1[1];
      if (uVar4 <= uVar1) {
        return 0;
      }
      uVar3 = uVar1 + 1;
      uVar2 = uVar1;
    }
    else {
      if (uVar1 == 0) {
        return 0;
      }
      uVar4 = param_1[1];
      uVar2 = uVar1 - 1;
      uVar3 = uVar1;
    }
  }
  thunk_memmove((void *)(*param_1 + uVar2),(void *)(*param_1 + uVar3),uVar4 - uVar3);
  param_1[4] = uVar2;
  param_1[3] = uVar2;
  param_1[1] = (uVar2 - uVar3) + param_1[1];
  return 1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009a44
 */

bool recovered_10009a44(int param_1,uint param_2,uint param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  uint a;
  int iVar10;
  ulonglong *puVar11;
  undefined4 uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  ulonglong uVar18;

  if (*(char *)(param_1 + 0x3f2) != '\0') {
    iVar10 = *(int *)(param_1 + 0x3d4);
    iVar4 = 0x24;
    if (0x24 < iVar10 * 2) {
      iVar4 = iVar10 << 1;
    }
    iVar16 = iVar10 * 2 + 8;
    if (iVar16 < 0x23) {
      iVar16 = 0x22;
    }
    uVar5 = recovered_100020b0((*(int *)(param_1 + 8) - (iVar10 + iVar4 + iVar16)) + -0x3e,
                               iVar10 + 4);
    if ((int)uVar5 < 2) {
      uVar5 = 1;
    }
    uVar6 = *(uint *)(param_1 + 0x3a0) - uVar5;
    uVar17 = *(uint *)(param_1 + 0x3a4);
    if (*(uint *)(param_1 + 0x3a0) < uVar5) {
      uVar6 = 0;
    }
    bVar1 = -param_3 < (uint)(param_2 <= uVar6);
    if (bVar1) {
      uVar6 = param_2;
    }
    *(uint *)(param_1 + 0x3a4) = uVar6;
    uVar6 = uVar6 ^ uVar17;
    if (bVar1) {
      uVar6 = uVar6 | param_3;
    }
    goto LAB_10009d3c;
  }
  cVar2 = *(char *)(param_1 + 0x3eb);
  puVar11 = (ulonglong *)(param_1 + 0x3ac);
  if (cVar2 == '\x01') {
    uVar7 = *(undefined4 *)puVar11;
    uVar12 = *(undefined4 *)(param_1 + 0x3b0);
  }
  else {
    uVar7 = *(undefined4 *)(param_1 + 0x36c);
    uVar12 = 0;
  }
  uVar6 = *(uint *)(param_1 + 0x3d8);
  uVar18 = recovered_10002188(CONCAT44(uVar12,uVar7),(ulonglong)uVar6);
  iVar10 = *(int *)(param_1 + 0x3d4);
  uVar5 = (uint)(uVar18 + 1);
  uVar17 = (uint)(uVar18 + 1 >> 0x20);
  iVar4 = 0x24;
  if (0x24 < iVar10 * 2) {
    iVar4 = iVar10 << 1;
  }
  iVar16 = iVar10 * 2 + 8;
  if (iVar16 < 0x23) {
    iVar16 = 0x22;
  }
  uVar8 = recovered_100020b0((*(int *)(param_1 + 8) - (iVar10 + iVar4 + iVar16)) + -0x3e,iVar10 + 4)
  ;
  if ((int)uVar8 < 2) {
    uVar8 = 1;
  }
  uVar9 = uVar5 - uVar8;
  uVar13 = uVar17 - (uVar8 > uVar5);
  if (uVar17 == 0 && (uVar8 <= uVar5) <= uVar17) {
    uVar9 = 0;
    uVar13 = 0;
  }
  if (uVar13 <= param_3 && (uint)(param_2 <= uVar9) <= uVar13 - param_3) {
    if (cVar2 == '\0') {
      uVar7 = *(undefined4 *)(param_1 + 0x36c);
      uVar12 = 0;
    }
    else {
      uVar7 = *(undefined4 *)puVar11;
      uVar12 = *(undefined4 *)(param_1 + 0x3b0);
    }
    uVar18 = recovered_10002188(CONCAT44(uVar12,uVar7),(ulonglong)uVar6);
    uVar5 = (uint)(uVar18 + 1);
    uVar17 = (uint)(uVar18 + 1 >> 0x20);
    param_2 = uVar5 - uVar8;
    param_3 = uVar17 - (uVar8 > uVar5);
    if (uVar17 == 0 && (uVar8 <= uVar5) <= uVar17) {
      param_3 = 0;
      param_2 = 0;
    }
  }
  uVar5 = *(uint *)(param_1 + 0x3bc);
  uVar17 = *(uint *)(param_1 + 0x3c0);
  if (cVar2 == '\0') {
    a = *(uint *)(param_1 + 0x36c);
    uVar9 = recovered_10002028(a,uVar6);
    uVar14 = uVar9 + 1;
    uVar7 = 0;
    uVar9 = (uint)(0xfffffffe < uVar9);
    uVar13 = uVar14 - uVar8;
    uVar15 = uVar9 - (uVar8 > uVar14);
    if (uVar9 == 0 && (uVar8 <= uVar14) <= uVar9) {
      uVar13 = 0;
      uVar15 = 0;
    }
    if (uVar15 <= param_3 && (uint)(param_2 <= uVar13) <= uVar15 - param_3) goto LAB_10009cbc;
  }
  else {
    a = *(uint *)puVar11;
    uVar7 = *(undefined4 *)(param_1 + 0x3b0);
    uVar18 = recovered_10002188(*puVar11,(ulonglong)uVar6);
    uVar13 = (uint)(uVar18 + 1);
    uVar14 = (uint)(uVar18 + 1 >> 0x20);
    uVar9 = uVar13 - uVar8;
    uVar15 = uVar14 - (uVar8 > uVar13);
    if (uVar14 == 0 && (uVar8 <= uVar13) <= uVar14) {
      uVar9 = 0;
      uVar15 = 0;
    }
    if (uVar15 <= param_3 && (uint)(param_2 <= uVar9) <= uVar15 - param_3) {
LAB_10009cbc:
      uVar18 = recovered_10002188(CONCAT44(uVar7,a),(ulonglong)uVar6);
      uVar9 = (uint)(uVar18 + 1);
      uVar13 = (uint)(uVar18 + 1 >> 0x20);
      param_2 = uVar9 - uVar8;
      param_3 = uVar13 - (uVar8 > uVar9);
      if (uVar13 == 0 && (uVar8 <= uVar9) <= uVar13) {
        param_3 = 0;
        param_2 = 0;
      }
    }
    if ((cVar2 != '\0') &&
       (iVar4 = recovered_1000a2f8(param_1,(uint)((ulonglong)uVar6 * (ulonglong)param_2),
                                   param_3 * uVar6 +
                                   (int)((ulonglong)uVar6 * (ulonglong)param_2 >> 0x20)), iVar4 == 0
       )) {
      return false;
    }
  }
  *(uint *)(param_1 + 0x3bc) = param_2;
  *(uint *)(param_1 + 0x3c0) = param_3;
  uVar6 = uVar5 ^ param_2 | uVar17 ^ param_3;
LAB_10009d3c:
  uVar3 = (undefined1)uVar6;
  if (uVar6 != 0) {
    uVar3 = 1;
  }
  return (bool)uVar3;
}


#define local_1c (*(int (*)[7])(pf_stack_frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009d4c
 */

void recovered_10009d4c(int *param_1,int param_2,int param_3)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;

  iVar3 = *(int *)(param_2 + 0x3d0);
  local_1c[0] = 10;
  local_1c[1] = iVar3 * 4 + 0x1a;
  local_1c[3] = iVar3 * 0x14 + 0x3a;
  local_1c[2] = iVar3 * 0xd + 0x2a;
  if (param_3 < 3) {
    iVar3 = local_1c[param_3 + 1] + -8;
  }
  else {
    iVar3 = iVar3 * 5 + local_1c[3] + 8;
  }
  iVar2 = *(int *)(param_2 + 0x3d4);
  iVar4 = *(int *)(param_2 + 4);
  param_1[3] = iVar2 + 8;
  iVar1 = local_1c[param_3];
  param_1[1] = iVar2 + 0x1c;
  iVar4 = iVar4 + -10;
  *param_1 = iVar1;
  if (iVar3 < iVar4) {
    iVar4 = iVar3;
  }
  param_1[2] = iVar4 - iVar1;
  return;
}

#undef local_1c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009df0
 */

undefined4 recovered_10009df0(int param_1,int param_2,int param_3,int param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  longlong lVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;

  iVar6 = *(int *)(param_1 + 0x3d4);
  iVar9 = 0x24;
  if (0x24 < iVar6 * 2) {
    iVar9 = iVar6 << 1;
  }
  iVar9 = iVar6 + iVar9 + 0x30;
  if (iVar9 <= param_3) {
    iVar7 = iVar6 * 2 + 8;
    if (iVar7 < 0x23) {
      iVar7 = 0x22;
    }
    if (param_3 < (*(int *)(param_1 + 8) - iVar7) + -8) {
      uVar10 = *(uint *)(param_1 + 0x3d8);
      iVar7 = *(int *)(param_1 + 0x3d0);
      iVar8 = (uVar10 * 3 + 0x13) * iVar7 + 0x12;
      if (param_2 < iVar8) {
        iVar8 = iVar7 * 0x11 + 0x12;
        if (param_2 < iVar8) {
          return 0;
        }
        if (param_4 == 0) {
          *(undefined1 *)(param_1 + 0x3e9) = 0;
        }
        iVar7 = iVar7 * 3;
      }
      else if (param_4 == 0) {
        *(undefined1 *)(param_1 + 0x3e9) = 1;
      }
      iVar8 = recovered_100020b0(param_2 - iVar8,iVar7);
      uVar2 = *(uint *)(param_1 + 0x3bc);
      iVar3 = *(int *)(param_1 + 0x3c0);
      iVar7 = uVar10 - 1;
      if (iVar8 < (int)(uVar10 - 1)) {
        iVar7 = iVar8;
      }
      uVar4 = recovered_100020b0(param_3 - iVar9,iVar6 + 4);
      if (iVar8 < 0) {
        iVar7 = 0;
      }
      lVar1 = (ulonglong)uVar10 * (ulonglong)(uVar2 + uVar4) +
              CONCAT44((iVar3 + (uint)CARRY4(uVar2,uVar4)) * uVar10,iVar7);
      uVar5 = recovered_1000a6b8(param_1,(uint)lVar1,(uint)((ulonglong)lVar1 >> 0x20),param_4);
      return uVar5;
    }
  }
  return 0;
}


#define local_3c (*(int *)(pf_stack_frame + 20))
#define local_38 (*(int *)(pf_stack_frame + 24))
#define local_30 (*(uint *)(pf_stack_frame + 32))
#define local_24 (*(uint *)(pf_stack_frame + 44))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009f38
 */

void recovered_10009f38(int param_1,undefined4 *param_2)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  bool bVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  bool bVar19;
  ulonglong uVar20;

  if (*(char *)(param_1 + 0x3f2) == '\0') {
    if (*(char *)(param_1 + 0x3eb) == '\x01') {
      uVar4 = *(undefined4 *)(param_1 + 0x3ac);
      uVar8 = *(undefined4 *)(param_1 + 0x3b0);
    }
    else {
      uVar4 = *(undefined4 *)(param_1 + 0x36c);
      uVar8 = 0;
    }
    uVar20 = recovered_10002188(CONCAT44(uVar8,uVar4),(ulonglong)*(uint *)(param_1 + 0x3d8));
    local_38 = *(int *)(param_1 + 0x3d4);
    local_3c = *(int *)(param_1 + 8);
    uVar3 = (uint)(uVar20 + 1);
    uVar18 = (uint)(uVar20 + 1 >> 0x20);
    iVar2 = 0x24;
    if (0x24 < local_38 * 2) {
      iVar2 = local_38 << 1;
    }
    iVar7 = local_38 * 2 + 8;
    if (iVar7 < 0x23) {
      iVar7 = 0x22;
    }
    uVar12 = recovered_100020b0((local_3c - (local_38 + iVar2 + iVar7)) + -0x3e,local_38 + 4);
    local_24 = *(uint *)(param_1 + 0x3bc);
    if ((int)uVar12 < 2) {
      uVar12 = 1;
    }
    uVar16 = uVar3 - uVar12;
    uVar17 = uVar18 - (uVar12 > uVar3);
    local_30 = *(uint *)(param_1 + 0x3c0);
    if (uVar18 == 0 && (uVar12 <= uVar3) <= uVar18) {
      uVar17 = 0;
      uVar16 = 0;
    }
  }
  else {
    local_38 = *(int *)(param_1 + 0x3d4);
    iVar2 = 0x24;
    local_3c = *(int *)(param_1 + 8);
    if (0x24 < local_38 * 2) {
      iVar2 = local_38 << 1;
    }
    iVar7 = local_38 * 2 + 8;
    if (iVar7 < 0x23) {
      iVar7 = 0x22;
    }
    uVar3 = recovered_100020b0((local_3c - (local_38 + iVar2 + iVar7)) + -0x3e,local_38 + 4);
    if ((int)uVar3 < 2) {
      uVar3 = 1;
    }
    local_24 = *(uint *)(param_1 + 0x3a4);
    uVar16 = *(uint *)(param_1 + 0x3a0) - uVar3;
    uVar17 = 0;
    if (*(uint *)(param_1 + 0x3a0) < uVar3) {
      uVar16 = 0;
    }
    local_30 = 0;
  }
  *param_2 = 0;
  uVar3 = 0x7fffffff;
  if (uVar16 < 0x7fffffff) {
    uVar3 = uVar16;
  }
  uVar18 = 0x7fffffff;
  if (uVar17 != 0) {
    uVar3 = 0x7fffffff;
  }
  param_2[1] = uVar3;
  if (uVar17 == 0 && (0x7fffffff < uVar16) <= uVar17) {
    iVar2 = 0x24;
    param_2[2] = local_24;
    if (0x24 < local_38 * 2) {
      iVar2 = local_38 << 1;
    }
    iVar7 = local_38 * 2 + 8;
    if (iVar7 < 0x23) {
      iVar7 = 0x22;
    }
    uVar3 = recovered_100020b0((local_3c - (local_38 + iVar2 + iVar7)) + -0x3e,local_38 + 4);
  }
  else {
    if (local_30 <= uVar17 && (uint)(uVar16 <= local_24) <= local_30 - uVar17) {
      uVar5 = uVar16 - local_24;
      uVar3 = 0;
      uVar6 = uVar17 - (local_30 + (uVar16 < local_24));
      uVar12 = 0x1f;
      uVar15 = 0;
      uVar10 = 0;
      do {
        uVar9 = uVar16 - uVar10;
        uVar13 = uVar17 - (uVar3 + (uVar16 < uVar10));
        uVar14 = uVar10 - uVar9;
        bVar19 = uVar13 < uVar3;
        bVar1 = uVar3 - uVar13 < (uint)(uVar9 <= uVar10);
        uVar18 = uVar3 << 1;
        uVar3 = uVar3 - (uVar13 + (uVar9 > uVar10));
        if (!bVar19 && !bVar1) {
          uVar14 = uVar10 << 1;
          uVar3 = uVar18 | uVar10 >> 0x1f;
        }
        uVar18 = uVar15 << 1;
        if (bVar19 || bVar1) {
          uVar18 = uVar15 << 1 | 1;
        }
        if ((0x7fffffffU >> (uVar12 & 0xff) & 1) != 0) {
          if (uVar6 < uVar3 || uVar3 - uVar6 < (uint)(uVar5 <= uVar14)) {
            uVar15 = -uVar5;
            uVar18 = uVar18 + 1;
            uVar3 = uVar3 - (uVar6 + (uVar14 < uVar5));
          }
          else {
            uVar3 = uVar3 + local_30 + (uint)CARRY4(uVar14,local_24);
            uVar15 = local_24;
          }
          uVar14 = uVar14 + uVar15;
        }
        bVar19 = uVar12 != 0;
        uVar12 = uVar12 - 1;
        uVar15 = uVar18;
        uVar10 = uVar14;
      } while (bVar19);
    }
    iVar2 = 0x24;
    param_2[2] = uVar18;
    if (0x24 < local_38 * 2) {
      iVar2 = local_38 << 1;
    }
    iVar7 = local_38 * 2 + 8;
    if (iVar7 < 0x23) {
      iVar7 = 0x22;
    }
    uVar18 = recovered_100020b0((local_3c - (local_38 + iVar2 + iVar7)) + -0x3e,local_38 + 4);
    if ((int)uVar18 < 2) {
      uVar18 = 1;
    }
    uVar5 = uVar16 - uVar18;
    uVar6 = uVar17 - (uVar16 < uVar18);
    uVar3 = 0;
    uVar10 = 0;
    uVar12 = 0;
    uVar15 = 0x1f;
    do {
      uVar13 = uVar16 - uVar10;
      uVar11 = uVar17 - (uVar12 + (uVar16 < uVar10));
      bVar19 = uVar11 < uVar12;
      bVar1 = uVar12 - uVar11 < (uint)(uVar13 <= uVar10);
      uVar14 = uVar12 << 1;
      uVar9 = uVar10 - uVar13;
      uVar12 = uVar12 - (uVar11 + (uVar13 > uVar10));
      if (!bVar19 && !bVar1) {
        uVar9 = uVar10 << 1;
        uVar12 = uVar14 | uVar10 >> 0x1f;
      }
      uVar10 = uVar9;
      uVar14 = uVar3 << 1;
      if (bVar19 || bVar1) {
        uVar14 = uVar3 << 1 | 1;
      }
      uVar3 = uVar14;
      if ((0x7fffffffU >> (uVar15 & 0xff) & 1) != 0) {
        if (uVar6 < uVar12 || uVar12 - uVar6 < (uint)(uVar5 <= uVar10)) {
          bVar19 = uVar10 < uVar5;
          uVar10 = uVar10 - uVar5;
          uVar3 = uVar3 + 1;
          uVar12 = uVar12 - (uVar6 + bVar19);
        }
        else {
          bVar19 = CARRY4(uVar10,uVar18);
          uVar10 = uVar10 + uVar18;
          uVar12 = uVar12 + bVar19;
        }
      }
      bVar19 = uVar15 != 0;
      uVar15 = uVar15 - 1;
    } while (bVar19);
  }
  if ((int)uVar3 < 2) {
    uVar3 = 1;
  }
  param_2[3] = uVar3;
  return;
}

#undef local_3c
#undef local_38
#undef local_30
#undef local_24

#undef DAT_1000b7d0
#define DAT_1000b7d0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4b4U)))
#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_400109f0
#define DAT_400109f0 (*(uint8_t *)(0x400109f0U))
#undef Ram40010800
#define Ram40010800 (*(uint32_t *)(0x40010800U))
#undef Ram40010804
#define Ram40010804 (*(uint32_t *)(0x40010804U))
#undef Ram40010808
#define Ram40010808 (*(uint32_t *)(0x40010808U))
#undef Ram400109f0
#define Ram400109f0 (*(uint32_t *)(0x400109f0U))
#undef UINT_4001084c
#define UINT_4001084c (*(uint *)(0x4001084cU))
#undef UINT_40010850
#define UINT_40010850 (*(uint *)(0x40010850U))
#undef str_1000bcfa
#define str_1000bcfa (*(char (*)[1])(((uintptr_t)pf_module_state + 0x9deU)))
#undef str_1000bd2f
#define str_1000bd2f (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa13U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a2f8
 */

undefined4 recovered_1000a2f8(int param_1,uint param_2,uint param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  code *pcVar1;
  void *dst;
  int iVar2;
  undefined4 uVar3;
  char *arg3;
  uint uVar4;
  void *src;
  uint uVar5;
  uint size;
  uint uVar6;
  bool bVar7;

  uVar6 = param_2 & 0xffff0000;
  if ((*(int *)(param_1 + 0x394) == 0) ||
     (uVar3 = 1, uVar6 != *(uint *)(param_1 + 0x3b4) || param_3 != *(uint *)(param_1 + 0x3b8))) {
    if (*(char *)(param_1 + 0x3ea) == '\x01') {
      arg3 = str_1000bcfa;
    }
    else {
      uVar5 = *(uint *)(param_1 + 0x3ac);
      uVar4 = *(uint *)(param_1 + 0x3b0);
      if (uVar4 < param_3 || param_3 - uVar4 < (uint)(uVar5 <= uVar6)) {
        return 0;
      }
      size = uVar5 - uVar6;
      if (0xffff < size) {
        size = 0x10000;
      }
      iVar2 = Ram40010800;
      if (uVar4 != param_3 + (uVar5 < uVar6)) {
        size = 0x10000;
      }
      src = (void *)0x0;
      if ((iVar2 == 0x50414d57) && (iVar2 = Ram40010804, iVar2 != 0)) {
        uVar4 = Ram40010808;
        bVar7 = 0xb < uVar4;
        if (bVar7) {
          uVar4 = Ram40010808;
        }
        if ((bVar7 && 0x4f < uVar4) && (pcVar1 = (code *)UINT_4001084c, pcVar1 != (code *)0x0)) {
          src = (*pcVar1)(size);
        }
      }
      dst = (void *)0x0;
      iVar2 = Ram40010800;
      if ((iVar2 == 0x50414d57) && (iVar2 = Ram40010804, iVar2 != 0)) {
        uVar4 = Ram40010808;
        bVar7 = 0xb < uVar4;
        if (bVar7) {
          uVar4 = Ram40010808;
        }
        if ((((bVar7 && 0x4f < uVar4) && (pcVar1 = (code *)UINT_4001084c, pcVar1 != (code *)0x0)) &&
            (dst = (*pcVar1)(size), src != (void *)0x0)) && (dst != (void *)0x0)) {
          iVar2 = Ram40010800;
          if ((iVar2 == 0x50414d57) && (iVar2 = Ram40010804, iVar2 != 0)) {
            uVar4 = Ram40010808;
            bVar7 = 0xb < uVar4;
            if (bVar7) {
              uVar4 = Ram40010808;
            }
            if (((bVar7 && 499 < uVar4) && (pcVar1 = (code *)Ram400109f0, pcVar1 != (code *)0x0)) &&
               (iVar2 = (*pcVar1)(*(undefined4 *)(param_1 + 0x398),uVar6 >> 9 | param_3 << 0x17,
                                  param_3 >> 9,src,size >> 9), iVar2 != 0)) {
              thunk_memcpy(dst,src,size);
              iVar2 = Ram40010800;
              if ((iVar2 == 0x50414d57) && (iVar2 = Ram40010804, iVar2 != 0)) {
                uVar4 = Ram40010808;
                bVar7 = 0xb < uVar4;
                if (bVar7) {
                  uVar4 = Ram40010808;
                }
                if ((bVar7 && 0x53 < uVar4) &&
                   (pcVar1 = (code *)UINT_40010850, pcVar1 != (code *)0x0)) {
                  (*pcVar1)(*(void **)(param_1 + 0x368));
                }
              }
              iVar2 = Ram40010800;
              if ((iVar2 == 0x50414d57) && (iVar2 = Ram40010804, iVar2 != 0)) {
                uVar4 = Ram40010808;
                bVar7 = 0xb < uVar4;
                if (bVar7) {
                  uVar4 = Ram40010808;
                }
                if ((bVar7 && 0x53 < uVar4) &&
                   (pcVar1 = (code *)UINT_40010850, pcVar1 != (code *)0x0)) {
                  (*pcVar1)(*(void **)(param_1 + 0x394));
                }
              }
              *(void **)(param_1 + 0x394) = dst;
              *(undefined4 *)(param_1 + 0x3f4) = 0xffffffff;
              *(uint *)(param_1 + 0x3b8) = param_3;
              *(uint *)(param_1 + 0x3b4) = uVar6;
              *(uint *)(param_1 + 0x370) = size;
              *(uint *)(param_1 + 0x36c) = size;
              *(void **)(param_1 + 0x368) = src;
              *(uint *)(param_1 + 0x378) = param_2 & 0xffff;
              *(uint *)(param_1 + 0x374) = param_2 & 0xffff;
              return 1;
            }
          }
        }
      }
      iVar2 = Ram40010800;
      if ((iVar2 == 0x50414d57) && (iVar2 = Ram40010804, iVar2 != 0)) {
        uVar6 = Ram40010808;
        bVar7 = 0xb < uVar6;
        if (bVar7) {
          uVar6 = Ram40010808;
        }
        if ((bVar7 && 0x53 < uVar6) && (pcVar1 = (code *)UINT_40010850, pcVar1 != (code *)0x0)) {
          (*pcVar1)(src);
        }
      }
      iVar2 = Ram40010800;
      if ((iVar2 == 0x50414d57) && (iVar2 = Ram40010804, iVar2 != 0)) {
        uVar6 = Ram40010808;
        bVar7 = 0xb < uVar6;
        if (bVar7) {
          uVar6 = Ram40010808;
        }
        if ((bVar7 && 0x53 < uVar6) && (pcVar1 = (code *)UINT_40010850, pcVar1 != (code *)0x0)) {
          (*pcVar1)(dst);
        }
      }
      arg3 = str_1000bd2f;
    }
    thunk_snprintf((char *)(param_1 + 0x650e),0xa0,&DAT_1000b7d0,arg3);
    uVar3 = 0;
  }
  return uVar3;
}

#undef DAT_1000b7d0
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_400109f0
#undef Ram40010800
#undef Ram40010804
#undef Ram40010808
#undef Ram400109f0
#undef UINT_4001084c
#undef UINT_40010850
#undef str_1000bcfa
#undef str_1000bd2f

#undef DAT_1000b7d0
#define DAT_1000b7d0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4b4U)))
#undef str_1000bd57
#define str_1000bd57 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa3bU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a6b8
 */

undefined4 recovered_1000a6b8(int param_1,uint param_2,uint param_3,int param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;

  if (*(char *)(param_1 + 0x3eb) == '\0') {
    uVar9 = *(uint *)(param_1 + 0x3b4);
    if ((uint)(param_2 <= *(uint *)(param_1 + 0x36c)) <= -param_3) {
      param_2 = *(uint *)(param_1 + 0x36c);
    }
  }
  else {
    uVar5 = *(uint *)(param_1 + 0x3ac);
    uVar6 = *(uint *)(param_1 + 0x3b0);
    uVar7 = *(uint *)(param_1 + 0x3b8);
    uVar8 = uVar6 - (uVar5 == 0);
    uVar9 = *(uint *)(param_1 + 0x3b4);
    uVar3 = param_2;
    uVar1 = param_3;
    if (uVar6 <= param_3 && (uint)(param_2 <= uVar5) <= uVar6 - param_3) {
      uVar3 = uVar5;
      uVar1 = uVar6;
    }
    uVar4 = uVar3 - 1;
    uVar6 = uVar1 - (uVar3 == 0);
    if (param_3 < uVar8 || uVar8 - param_3 < (uint)(param_2 <= uVar5 - 1)) {
      uVar4 = uVar3;
      uVar6 = uVar1;
    }
    if ((uVar6 <= uVar7 && (uint)(uVar9 <= uVar4) <= uVar6 - uVar7) ||
       (uVar7 = uVar7 + CARRY4(uVar9,*(uint *)(param_1 + 0x36c)), param_2 = uVar4,
       uVar7 < uVar6 || uVar6 - uVar7 < (uint)(uVar9 + *(uint *)(param_1 + 0x36c) <= uVar4))) {
      if (param_4 != 0) {
        thunk_snprintf((char *)(param_1 + 0x650e),0xa0,&DAT_1000b7d0,str_1000bd57);
        return 0;
      }
      iVar2 = recovered_1000a2f8(param_1,uVar4,uVar6);
      if (iVar2 == 0) {
        return 0;
      }
      iVar2 = uVar4 - *(uint *)(param_1 + 0x3b4);
      *(int *)(param_1 + 0x374) = iVar2;
      *(int *)(param_1 + 0x378) = iVar2;
      goto LAB_1000a7bc;
    }
  }
  *(uint *)(param_1 + 0x374) = param_2 - uVar9;
  if (param_4 == 0) {
    *(uint *)(param_1 + 0x378) = param_2 - uVar9;
  }
LAB_1000a7bc:
  *(undefined4 *)(param_1 + 0x3f4) = 0xffffffff;
  recovered_10009788(param_1);
  return 1;
}

#undef DAT_1000b7d0
#undef str_1000bd57

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a80c
 */

void recovered_1000a80c(int param_1,uint param_2,uint param_3,int param_4,int param_5,uint param_6)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined1 *puVar10;
  uint uVar11;
  uint uVar12;
  bool bVar13;
  bool bVar14;

  if (param_4 < 1) {
    return;
  }
  if (0 < param_5) {
    uVar2 = thunk_terror_ui_colour(param_6);
    uVar12 = *(uint *)(param_1 + 4);
    uVar3 = param_4 + param_2;
    uVar8 = *(uint *)(param_1 + 8);
    uVar6 = uVar12;
    if ((int)uVar3 < (int)uVar12) {
      uVar6 = uVar3;
    }
    if ((int)uVar3 < 0) {
      uVar6 = 0;
    }
    uVar4 = uVar8;
    if ((int)param_3 < (int)uVar8) {
      uVar4 = param_3;
    }
    if ((int)param_3 < 0) {
      uVar4 = 0;
    }
    if ((int)param_2 < (int)uVar12) {
      uVar12 = param_2;
    }
    if ((int)param_2 < 0) {
      uVar12 = 0;
    }
    if ((int)(param_3 + 1) < (int)uVar8) {
      uVar8 = param_3 + 1;
    }
    if ((int)param_3 < -1) {
      uVar8 = 0;
    }
    if ((int)uVar4 < (int)uVar8) {
      do {
        uVar11 = uVar12;
        iVar7 = uVar12 << 2;
        if ((int)uVar12 < (int)uVar6) {
          do {
            if (-1 < (int)(uVar11 | uVar4)) {
              uVar9 = *(uint *)(param_1 + 4);
              bVar14 = SBORROW4(uVar9,uVar11);
              iVar1 = uVar9 - uVar11;
              bVar13 = uVar9 == uVar11;
              if ((int)uVar11 < (int)uVar9) {
                uVar9 = *(uint *)(param_1 + 8);
                bVar14 = SBORROW4(uVar9,uVar4);
                iVar1 = uVar9 - uVar4;
                bVar13 = uVar9 == uVar4;
              }
              if (!bVar13 && iVar1 < 0 == bVar14) {
                puVar10 = (undefined1 *)
                          (uVar4 * *(int *)(param_1 + 0xc) + *(int *)(param_1 + 0x2c) + iVar7);
                *puVar10 = (char)(uVar2 >> 0x10);
                puVar10[3] = 0xff;
                puVar10[2] = (char)uVar2;
                puVar10[1] = (char)(uVar2 >> 8);
              }
            }
            uVar11 = uVar11 + 1;
            iVar7 = iVar7 + 4;
          } while (uVar6 != uVar11);
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 != uVar8);
    }
    uVar2 = thunk_terror_ui_colour(param_6);
    uVar12 = *(uint *)(param_1 + 8);
    uVar4 = param_3 + param_5;
    uVar6 = *(uint *)(param_1 + 4);
    uVar8 = uVar4 - 1;
    if ((int)uVar12 <= (int)(uVar4 - 1)) {
      uVar8 = uVar12;
    }
    if ((int)uVar4 < 1) {
      uVar8 = 0;
    }
    if ((int)uVar4 < (int)uVar12) {
      uVar12 = uVar4;
    }
    if ((int)uVar4 < 0) {
      uVar12 = 0;
    }
    uVar11 = uVar6;
    if ((int)param_2 < (int)uVar6) {
      uVar11 = param_2;
    }
    if ((int)param_2 < 0) {
      uVar11 = 0;
    }
    if ((int)uVar3 < (int)uVar6) {
      uVar6 = uVar3;
    }
    if ((int)uVar3 < 0) {
      uVar6 = 0;
    }
    if ((int)uVar8 < (int)uVar12) {
      do {
        uVar9 = uVar11;
        iVar7 = uVar11 << 2;
        if ((int)uVar11 < (int)uVar6) {
          do {
            if (-1 < (int)(uVar9 | uVar8)) {
              uVar5 = *(uint *)(param_1 + 4);
              bVar14 = SBORROW4(uVar5,uVar9);
              iVar1 = uVar5 - uVar9;
              bVar13 = uVar5 == uVar9;
              if ((int)uVar9 < (int)uVar5) {
                uVar5 = *(uint *)(param_1 + 8);
                bVar14 = SBORROW4(uVar5,uVar8);
                iVar1 = uVar5 - uVar8;
                bVar13 = uVar5 == uVar8;
              }
              if (!bVar13 && iVar1 < 0 == bVar14) {
                puVar10 = (undefined1 *)
                          (uVar8 * *(int *)(param_1 + 0xc) + *(int *)(param_1 + 0x2c) + iVar7);
                *puVar10 = (char)(uVar2 >> 0x10);
                puVar10[3] = 0xff;
                puVar10[2] = (char)uVar2;
                puVar10[1] = (char)(uVar2 >> 8);
              }
            }
            uVar9 = uVar9 + 1;
            iVar7 = iVar7 + 4;
          } while (uVar6 != uVar9);
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 != uVar12);
    }
    uVar2 = thunk_terror_ui_colour(param_6);
    uVar12 = *(uint *)(param_1 + 8);
    uVar6 = *(uint *)(param_1 + 4);
    uVar8 = uVar12;
    if ((int)param_3 < (int)uVar12) {
      uVar8 = param_3;
    }
    if ((int)param_3 < 0) {
      uVar8 = 0;
    }
    uVar11 = uVar6;
    if ((int)param_2 < (int)uVar6) {
      uVar11 = param_2;
    }
    if ((int)param_2 < 0) {
      uVar11 = 0;
    }
    if ((int)uVar4 < (int)uVar12) {
      uVar12 = uVar4;
    }
    if ((int)uVar4 < 0) {
      uVar12 = 0;
    }
    if ((int)(param_2 + 1) < (int)uVar6) {
      uVar6 = param_2 + 1;
    }
    if ((int)param_2 < -1) {
      uVar6 = 0;
    }
    if ((int)uVar8 < (int)uVar12) {
      do {
        iVar7 = uVar11 << 2;
        uVar9 = uVar11;
        if ((int)uVar11 < (int)uVar6) {
          do {
            if (-1 < (int)(uVar9 | uVar8)) {
              uVar5 = *(uint *)(param_1 + 4);
              bVar14 = SBORROW4(uVar5,uVar9);
              iVar1 = uVar5 - uVar9;
              bVar13 = uVar5 == uVar9;
              if ((int)uVar9 < (int)uVar5) {
                uVar5 = *(uint *)(param_1 + 8);
                bVar14 = SBORROW4(uVar5,uVar8);
                iVar1 = uVar5 - uVar8;
                bVar13 = uVar5 == uVar8;
              }
              if (!bVar13 && iVar1 < 0 == bVar14) {
                puVar10 = (undefined1 *)
                          (uVar8 * *(int *)(param_1 + 0xc) + *(int *)(param_1 + 0x2c) + iVar7);
                *puVar10 = (char)(uVar2 >> 0x10);
                puVar10[3] = 0xff;
                puVar10[2] = (char)uVar2;
                puVar10[1] = (char)(uVar2 >> 8);
              }
            }
            uVar9 = uVar9 + 1;
            iVar7 = iVar7 + 4;
          } while (uVar6 != uVar9);
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 != uVar12);
    }
    uVar2 = thunk_terror_ui_colour(param_6);
    uVar6 = *(uint *)(param_1 + 4);
    uVar12 = *(uint *)(param_1 + 8);
    uVar8 = uVar3 - 1;
    if ((int)uVar6 <= (int)(uVar3 - 1)) {
      uVar8 = uVar6;
    }
    if ((int)uVar3 < 1) {
      uVar8 = 0;
    }
    uVar11 = uVar12;
    if ((int)param_3 < (int)uVar12) {
      uVar11 = param_3;
    }
    if ((int)param_3 < 0) {
      uVar11 = 0;
    }
    if ((int)uVar4 < (int)uVar12) {
      uVar12 = uVar4;
    }
    if ((int)uVar4 < 0) {
      uVar12 = 0;
    }
    if ((int)uVar3 < (int)uVar6) {
      uVar6 = uVar3;
    }
    if ((int)uVar3 < 0) {
      uVar6 = 0;
    }
    if ((int)uVar11 < (int)uVar12) {
      do {
        iVar7 = uVar8 << 2;
        uVar3 = uVar8;
        if ((int)uVar8 < (int)uVar6) {
          do {
            if (-1 < (int)(uVar3 | uVar11)) {
              uVar4 = *(uint *)(param_1 + 4);
              bVar14 = SBORROW4(uVar4,uVar3);
              iVar1 = uVar4 - uVar3;
              bVar13 = uVar4 == uVar3;
              if ((int)uVar3 < (int)uVar4) {
                uVar4 = *(uint *)(param_1 + 8);
                bVar14 = SBORROW4(uVar4,uVar11);
                iVar1 = uVar4 - uVar11;
                bVar13 = uVar4 == uVar11;
              }
              if (!bVar13 && iVar1 < 0 == bVar14) {
                puVar10 = (undefined1 *)
                          (uVar11 * *(int *)(param_1 + 0xc) + *(int *)(param_1 + 0x2c) + iVar7);
                *puVar10 = (char)(uVar2 >> 0x10);
                puVar10[3] = 0xff;
                puVar10[2] = (char)uVar2;
                puVar10[1] = (char)(uVar2 >> 8);
              }
            }
            uVar3 = uVar3 + 1;
            iVar7 = iVar7 + 4;
          } while (uVar6 != uVar3);
        }
        uVar11 = uVar11 + 1;
      } while (uVar11 != uVar12);
    }
  }
  return;
}


#define local_30 (*(uint (*)[12])(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ac30
 */

void recovered_1000ac30(int param_1,int param_2,int param_3)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  undefined1 *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  bool bVar17;
  bool bVar18;

  iVar2 = *(int *)(param_1 + 0x3d0);
  local_30[0] = 10;
  local_30[1] = iVar2 * 4 + 0x1a;
  local_30[3] = iVar2 * 0x14 + 0x3a;
  local_30[2] = iVar2 * 0xd + 0x2a;
  if (param_2 < 3) {
    uVar12 = local_30[param_2 + 1] - 8;
  }
  else {
    uVar12 = iVar2 * 5 + local_30[3] + 8;
  }
  uVar14 = local_30[param_2];
  uVar9 = *(int *)(param_1 + 4) - 10;
  if ((int)uVar12 < (int)uVar9) {
    uVar9 = uVar12;
  }
  iVar2 = uVar9 - uVar14;
  if (8 < iVar2) {
    iVar15 = *(int *)(param_1 + 0x3d4);
    uVar16 = iVar15 + 0x1c;
    uVar3 = thunk_terror_ui_colour(2);
    uVar5 = *(uint *)(param_1 + 8);
    uVar7 = iVar15 + 8 + uVar16;
    uVar12 = *(uint *)(param_1 + 4);
    uVar13 = uVar5;
    if ((int)uVar7 < (int)uVar5) {
      uVar13 = uVar7;
    }
    if ((int)uVar7 < 0) {
      uVar13 = 0;
    }
    if ((int)uVar16 < (int)uVar5) {
      uVar5 = uVar16;
    }
    if (iVar15 < -0x1c) {
      uVar5 = 0;
    }
    uVar7 = uVar12;
    if ((int)uVar14 < (int)uVar12) {
      uVar7 = uVar14;
    }
    if ((int)uVar14 < 0) {
      uVar7 = 0;
    }
    if ((int)uVar9 < (int)uVar12) {
      uVar12 = uVar9;
    }
    if ((int)uVar9 < 0) {
      uVar12 = 0;
    }
    if ((int)uVar5 < (int)uVar13) {
      do {
        uVar10 = uVar7;
        iVar11 = uVar7 << 2;
        if ((int)uVar7 < (int)uVar12) {
          do {
            if (-1 < (int)(uVar10 | uVar5)) {
              uVar8 = *(uint *)(param_1 + 4);
              bVar18 = SBORROW4(uVar8,uVar10);
              iVar1 = uVar8 - uVar10;
              bVar17 = uVar8 == uVar10;
              if ((int)uVar10 < (int)uVar8) {
                uVar8 = *(uint *)(param_1 + 8);
                bVar18 = SBORROW4(uVar8,uVar5);
                iVar1 = uVar8 - uVar5;
                bVar17 = uVar8 == uVar5;
              }
              if (!bVar17 && iVar1 < 0 == bVar18) {
                puVar6 = (undefined1 *)
                         (uVar5 * *(int *)(param_1 + 0xc) + *(int *)(param_1 + 0x2c) + iVar11);
                *puVar6 = (char)(uVar3 >> 0x10);
                puVar6[3] = 0xff;
                puVar6[2] = (char)uVar3;
                puVar6[1] = (char)(uVar3 >> 8);
              }
            }
            uVar10 = uVar10 + 1;
            iVar11 = iVar11 + 4;
          } while (uVar12 != uVar10);
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 != uVar13);
    }
    recovered_1000a80c(param_1,uVar14,uVar16,iVar2,iVar15 + 8,3);
    uVar3 = thunk_terror_ui_colour(0x1f);
    uVar13 = *(uint *)(param_1 + 8);
    uVar12 = *(uint *)(param_1 + 4);
    uVar5 = iVar15 + 0x1dU;
    if ((int)uVar13 <= (int)(iVar15 + 0x1dU)) {
      uVar5 = uVar13;
    }
    if (iVar15 < -0x1d) {
      uVar5 = 0;
    }
    uVar7 = uVar14 + 1;
    if ((int)uVar12 <= (int)(uVar14 + 1)) {
      uVar7 = uVar12;
    }
    if ((int)uVar14 < -1) {
      uVar7 = 0;
    }
    if ((int)(iVar15 + 0x1eU) < (int)uVar13) {
      uVar13 = iVar15 + 0x1eU;
    }
    uVar9 = uVar9 - 1;
    if (iVar15 < -0x1e) {
      uVar13 = 0;
    }
    if ((int)uVar9 < (int)uVar12) {
      uVar12 = uVar9;
    }
    if ((int)uVar9 < 0) {
      uVar12 = 0;
    }
    if ((int)uVar5 < (int)uVar13) {
      do {
        iVar11 = uVar7 << 2;
        uVar9 = uVar7;
        if ((int)uVar7 < (int)uVar12) {
          do {
            if (-1 < (int)(uVar9 | uVar5)) {
              uVar16 = *(uint *)(param_1 + 4);
              bVar18 = SBORROW4(uVar16,uVar9);
              iVar1 = uVar16 - uVar9;
              bVar17 = uVar16 == uVar9;
              if ((int)uVar9 < (int)uVar16) {
                uVar16 = *(uint *)(param_1 + 8);
                bVar18 = SBORROW4(uVar16,uVar5);
                iVar1 = uVar16 - uVar5;
                bVar17 = uVar16 == uVar5;
              }
              if (!bVar17 && iVar1 < 0 == bVar18) {
                puVar6 = (undefined1 *)
                         (uVar5 * *(int *)(param_1 + 0xc) + *(int *)(param_1 + 0x2c) + iVar11);
                *puVar6 = (char)(uVar3 >> 0x10);
                puVar6[3] = 0xff;
                puVar6[2] = (char)uVar3;
                puVar6[1] = (char)(uVar3 >> 8);
              }
            }
            uVar9 = uVar9 + 1;
            iVar11 = iVar11 + 4;
          } while (uVar12 != uVar9);
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 != uVar13);
    }
    uVar4 = thunk_strlen((char *)param_3);
    uVar12 = recovered_10002028(iVar2 - 8,*(uint *)(param_1 + 0x3d0));
    if (uVar4 < uVar12) {
      uVar12 = uVar4;
    }
    recovered_1000af50(param_1,uVar14 + 4,iVar15 + 0x20,param_3,uVar12,1);
  }
  return;
}

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
#undef UINT_40010850
#define UINT_40010850 (*(uint *)(0x40010850U))
#undef UINT_40010978
#define UINT_40010978 (*(uint *)(0x40010978U))
#define local_38 (*(void * *)(pf_stack_frame + 24))
#define local_34 (*(int *)(pf_stack_frame + 28))
#define local_2c (*(uint *)(pf_stack_frame + 36))
#define local_28 (*(uint *)(pf_stack_frame + 40))
#define local_24 (*(int *)(pf_stack_frame + 44))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000af50
 */

void recovered_1000af50(int param_1,int param_2,int param_3,int param_4,int param_5,uint param_6)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  undefined1 uVar1;
  undefined1 uVar2;
  void *ptr;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined1 *puVar7;
  int iVar8;
  uint uVar9;
  char *pcVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  bool bVar18;
  bool bVar19;

  uVar4 = thunk_terror_ui_colour(param_6);
  if (param_5 != 0) {
    if (*(int *)(param_1 + 900) == 0) {
      thunk_memset(&local_38,0,0x18);
      iVar6 = Ram40010800;
      if ((iVar6 == 0x50414d57) && (iVar6 = Ram40010804, iVar6 != 0)) {
        uVar5 = Ram40010808;
        bVar18 = 0xb < uVar5;
        if (bVar18) {
          uVar5 = Ram40010808;
        }
        if ((bVar18 && 0x17b < uVar5) && (pcVar3 = (code *)UINT_40010978, pcVar3 != (code *)0x0)) {
          uVar4 = (*pcVar3)((char *)param_4,param_5,0xc0000001,uVar4 << 8 | 0xff,&local_38);
          ptr = (void *)0x0;
          if (uVar4 != 0) {
            ptr = local_38;
          }
          if ((uVar4 != 0 && ptr != (void *)0x0) && (local_34 == 0)) {
            if (local_28 != 0) {
              uVar5 = 0;
              uVar4 = local_2c;
              iVar6 = param_3;
              do {
                if (uVar4 == 0) {
                  uVar4 = 0;
                }
                else {
                  iVar13 = 3;
                  uVar9 = uVar5 + param_3;
                  uVar4 = 0;
                  do {
                    pcVar10 = (char *)((int)ptr + uVar5 * local_24 + iVar13);
                    if ((*pcVar10 != '\0') && (uVar16 = param_2 + uVar4, -1 < (int)(uVar16 | uVar9))
                       ) {
                      uVar14 = *(uint *)(param_1 + 4);
                      bVar19 = SBORROW4(uVar14,uVar16);
                      iVar8 = uVar14 - uVar16;
                      bVar18 = uVar14 == uVar16;
                      if ((int)uVar16 < (int)uVar14) {
                        uVar16 = *(uint *)(param_1 + 8);
                        bVar19 = SBORROW4(uVar16,uVar9);
                        iVar8 = uVar16 - uVar9;
                        bVar18 = uVar16 == uVar9;
                      }
                      if (!bVar18 && iVar8 < 0 == bVar19) {
                        iVar8 = uVar4 * 4 + uVar5 * local_24;
                        uVar1 = *(undefined1 *)((int)ptr + iVar8 + 1);
                        uVar2 = *(undefined1 *)((int)ptr + iVar8 + 2);
                        iVar8 = iVar6 * *(int *)(param_1 + 0xc) + *(int *)(param_1 + 0x2c) +
                                param_2 * 4;
                        *(char *)(iVar8 + iVar13 + -3) = pcVar10[-3];
                        iVar11 = iVar8 + uVar4 * 4;
                        *(undefined1 *)(iVar11 + 2) = uVar2;
                        *(undefined1 *)(iVar11 + 1) = uVar1;
                        *(undefined1 *)(iVar8 + iVar13) = 0xff;
                      }
                    }
                    uVar4 = uVar4 + 1;
                    iVar13 = iVar13 + 4;
                  } while (uVar4 < local_2c);
                  uVar4 = local_2c;
                }
                uVar5 = uVar5 + 1;
                iVar6 = iVar6 + 1;
              } while (uVar5 < local_28);
            }
            iVar6 = Ram40010800;
            if ((iVar6 == 0x50414d57) && (iVar6 = Ram40010804, iVar6 != 0)) {
              uVar4 = Ram40010808;
              bVar18 = 0xb < uVar4;
              if (bVar18) {
                uVar4 = Ram40010808;
              }
              if ((bVar18 && 0x53 < uVar4) &&
                 (pcVar3 = (code *)UINT_40010850, pcVar3 != (code *)0x0)) {
                (*pcVar3)(ptr);
              }
            }
          }
        }
      }
    }
    else {
      uVar9 = (uint)*(byte *)(param_1 + 0x38b);
      iVar6 = 0;
      uVar5 = uVar9;
      do {
        if (uVar9 == 0) {
          uVar9 = 0;
        }
        else {
          uVar16 = (uint)*(byte *)(param_1 + 0x38a);
          uVar12 = 0;
          uVar9 = uVar5;
          uVar14 = uVar16;
          do {
            if (uVar16 == 0) {
              uVar16 = 0;
            }
            else {
              uVar15 = 0;
              uVar9 = uVar12 + param_3;
              uVar5 = uVar9;
              uVar16 = uVar14;
              do {
                if (*(int *)(param_1 + 900) != 0) {
                  if (uVar15 < uVar16) {
                    uVar5 = (uint)*(byte *)(param_1 + 0x38b);
                  }
                  if (uVar15 < uVar16 && uVar12 < uVar5) {
                    uVar14 = (uint)*(byte *)(param_1 + 0x38d);
                    uVar17 = (uint)*(byte *)(param_4 + iVar6);
                    if (uVar17 < uVar14) {
                      uVar17 = 0x3f;
                      if (uVar14 < 0x40) {
LAB_1000b080:
                        if ((((uVar17 - uVar14 < (uint)*(ushort *)(param_1 + 0x388)) &&
                             (uVar5 = (uint)*(byte *)(((int)(short)(uVar17 - uVar14) *
                                                       (int)(short)uVar5 + uVar12) *
                                                      (uint)*(byte *)(param_1 + 0x38c) +
                                                      *(int *)(param_1 + 900) + (uVar15 >> 3)),
                             (uVar5 << (uVar15 & 7) & 0x80) != 0)) &&
                            (uVar5 = iVar6 * *(int *)(param_1 + 0x3d0) + param_2 + uVar15,
                            -1 < (int)(uVar5 | uVar9))) &&
                           (((int)uVar5 < *(int *)(param_1 + 4) &&
                            ((int)uVar9 < *(int *)(param_1 + 8))))) {
                          puVar7 = (undefined1 *)
                                   (*(int *)(param_1 + 0xc) * uVar9 + *(int *)(param_1 + 0x2c) +
                                   uVar5 * 4);
                          *puVar7 = (char)(uVar4 >> 0x10);
                          puVar7[3] = 0xff;
                          puVar7[2] = (char)uVar4;
                          puVar7[1] = (char)(uVar4 >> 8);
                          uVar16 = (uint)*(byte *)(param_1 + 0x38a);
                          uVar5 = uVar4 >> 8;
                        }
                      }
                    }
                    else {
                      if ((uint)*(ushort *)(param_1 + 0x388) <= uVar17 - uVar14) {
                        uVar17 = 0x3f;
                      }
                      if (uVar14 <= uVar17) goto LAB_1000b080;
                    }
                  }
                }
                uVar15 = uVar15 + 1;
              } while (uVar15 < uVar16);
              uVar9 = (uint)*(byte *)(param_1 + 0x38b);
              uVar14 = uVar16;
            }
            uVar12 = uVar12 + 1;
            uVar5 = uVar9;
          } while (uVar12 < uVar9);
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 != param_5);
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
